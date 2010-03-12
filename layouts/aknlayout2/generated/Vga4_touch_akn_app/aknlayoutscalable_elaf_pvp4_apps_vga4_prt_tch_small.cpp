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

#include "aknlayoutscalable_elaf_pvp4_apps_vga4_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x000345bb };

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
0x4ce8,	// (0x000392a3) Screen

0x4cf4,	// (0x000392af) application_window

0x4d50,	// (0x0003930b) area_bottom_pane_ParamLimits

0x4d50,	// (0x0003930b) area_bottom_pane

0x4daa,	// (0x00039365) area_top_pane_ParamLimits

0x4daa,	// (0x00039365) area_top_pane

0x4e0e,	// (0x000393c9) call_video_uplink_pane_ParamLimits

0x4e0e,	// (0x000393c9) call_video_uplink_pane

0x4e4b,	// (0x00039406) main_pane_ParamLimits

0x4e4b,	// (0x00039406) main_pane

0xddd4,	// (0x0004238f) context_pane

0x7ee3,	// (0x0003c49e) navi_pane

0x7f07,	// (0x0003c4c2) popup_cale_events_window_ParamLimits

0x7f07,	// (0x0003c4c2) popup_cale_events_window

0xdde7,	// (0x000423a2) popup_mup_playback_window

0x7f1f,	// (0x0003c4da) signal_pane

0x2316,	// (0x000368d1) main_browser_pane

0xc9bb,	// (0x00040f76) main_burst_pane

0x7d52,	// (0x0003c30d) main_calc_pane

0xc9bb,	// (0x00040f76) main_cale_day_pane

0x2316,	// (0x000368d1) main_cale_month_pane

0xc9bb,	// (0x00040f76) main_cale_week_pane

0xc9bb,	// (0x00040f76) main_call_pane

0x1fe8,	// (0x000365a3) main_call_poc_pane

0xc9bb,	// (0x00040f76) main_camera_pane

0xc9bb,	// (0x00040f76) main_chi_dic_pane

0xc85d,	// (0x00040e18) main_clock_pane

0x1fe8,	// (0x000365a3) main_fmradio_pane

0xc9bb,	// (0x00040f76) main_graph_messa_pane

0x1fe8,	// (0x000365a3) main_help_pane

0x2316,	// (0x000368d1) main_im_pane

0x2243,	// (0x000367fe) main_image_pane_ParamLimits

0x2243,	// (0x000367fe) main_image_pane

0x1fe8,	// (0x000365a3) main_location2_pane

0xc9bb,	// (0x00040f76) main_location_pane

0x1fe8,	// (0x000365a3) main_messa_pane

0x1fe8,	// (0x000365a3) main_mp2_pane

0xc9bb,	// (0x00040f76) main_mp_pane

0x1fe8,	// (0x000365a3) main_msg_pane

0x1fe8,	// (0x000365a3) main_mup_eq_pane

0x1fe8,	// (0x000365a3) main_mup_pane

0x2316,	// (0x000368d1) main_notes_pane

0x1fe8,	// (0x000365a3) main_pec_pane

0x1fe8,	// (0x000365a3) main_phob_pane

0x1fe8,	// (0x000365a3) main_pinb_pane

0x1fe8,	// (0x000365a3) main_postcard_pane

0x1fe8,	// (0x000365a3) main_qdial_pane

0xc9bb,	// (0x00040f76) main_skin_pane

0x1fe8,	// (0x000365a3) main_smil2_pane

0xc9bb,	// (0x00040f76) main_smil_pane

0xc9bb,	// (0x00040f76) main_video_pane

0xc9bb,	// (0x00040f76) main_video_tele_pane

0x2243,	// (0x000367fe) main_viewer_pane_ParamLimits

0x2243,	// (0x000367fe) main_viewer_pane

0xc9bb,	// (0x00040f76) main_vorec_pane

0x7d92,	// (0x0003c34d) popup_blid_sat_info_window_ParamLimits

0x7d92,	// (0x0003c34d) popup_blid_sat_info_window

0x7db8,	// (0x0003c373) popup_dyc_status_message_window_ParamLimits

0x7db8,	// (0x0003c373) popup_dyc_status_message_window

0x7dc8,	// (0x0003c383) popup_grid_large_graphic_window_ParamLimits

0x7dc8,	// (0x0003c383) popup_grid_large_graphic_window

0x7e5d,	// (0x0003c418) popup_loc_request_window_ParamLimits

0x7e5d,	// (0x0003c418) popup_loc_request_window

0x7eb7,	// (0x0003c472) popup_wml_address_window_ParamLimits

0x7eb7,	// (0x0003c472) popup_wml_address_window

0x7c2a,	// (0x0003c1e5) call_muted_g1

0x78e9,	// (0x0003bea4) popup_call_audio_conf_window_ParamLimits

0x78e9,	// (0x0003bea4) popup_call_audio_conf_window

0x7c3a,	// (0x0003c1f5) popup_call_audio_first_window_ParamLimits

0x7c3a,	// (0x0003c1f5) popup_call_audio_first_window

0x7c7a,	// (0x0003c235) popup_call_audio_in_window_ParamLimits

0x7c7a,	// (0x0003c235) popup_call_audio_in_window

0x7c9e,	// (0x0003c259) popup_call_audio_out_window_ParamLimits

0x7c9e,	// (0x0003c259) popup_call_audio_out_window

0x7cc0,	// (0x0003c27b) popup_call_audio_second_window_ParamLimits

0x7cc0,	// (0x0003c27b) popup_call_audio_second_window

0x7cf0,	// (0x0003c2ab) popup_call_audio_wait_window_ParamLimits

0x7cf0,	// (0x0003c2ab) popup_call_audio_wait_window

0x7d11,	// (0x0003c2cc) popup_number_entry_window_ParamLimits

0x7d11,	// (0x0003c2cc) popup_number_entry_window

0x1ba0,	// (0x0003615b) bg_popup_call_pane_cp05_ParamLimits

0x1ba0,	// (0x0003615b) bg_popup_call_pane_cp05

0x1bc0,	// (0x0003617b) popup_number_entry_window_t1

0x1bd3,	// (0x0003618e) popup_number_entry_window_t2

0x1be5,	// (0x000361a0) popup_number_entry_window_t3

0x0003,

0xf0d8,	// (0x00043693) popup_number_entry_window_t

0x1c2c,	// (0x000361e7) text_title_cp2

0x1c3f,	// (0x000361fa) bg_popup_call_pane_cp_ParamLimits

0x1c3f,	// (0x000361fa) bg_popup_call_pane_cp

0x1c4d,	// (0x00036208) call_thumbnail_pane

0x1c55,	// (0x00036210) popup_call_audio_in_window_g1_ParamLimits

0x1c55,	// (0x00036210) popup_call_audio_in_window_g1

0x1c61,	// (0x0003621c) popup_call_audio_in_window_g2_ParamLimits

0x1c61,	// (0x0003621c) popup_call_audio_in_window_g2

0x1c6d,	// (0x00036228) popup_call_audio_in_window_g3_ParamLimits

0x1c6d,	// (0x00036228) popup_call_audio_in_window_g3

0x0002,

0xf0e1,	// (0x0004369c) popup_call_audio_in_window_g_ParamLimits

0xf0e1,	// (0x0004369c) popup_call_audio_in_window_g

0x1c79,	// (0x00036234) popup_call_audio_in_window_t1_ParamLimits

0x1c79,	// (0x00036234) popup_call_audio_in_window_t1

0x1c95,	// (0x00036250) popup_call_audio_in_window_t2_ParamLimits

0x1c95,	// (0x00036250) popup_call_audio_in_window_t2

0x1cb1,	// (0x0003626c) popup_call_audio_in_window_t3_ParamLimits

0x1cb1,	// (0x0003626c) popup_call_audio_in_window_t3

0x0002,

0xf0e8,	// (0x000436a3) popup_call_audio_in_window_t_ParamLimits

0xf0e8,	// (0x000436a3) popup_call_audio_in_window_t

0x1c3f,	// (0x000361fa) bg_popup_call_pane_cp01_ParamLimits

0x1c3f,	// (0x000361fa) bg_popup_call_pane_cp01

0x1c4d,	// (0x00036208) call_thumbnail_pane_cp02

0x1cc4,	// (0x0003627f) call_type_pane_cp022

0x1ccc,	// (0x00036287) popup_call_audio_out_window_g1_ParamLimits

0x1ccc,	// (0x00036287) popup_call_audio_out_window_g1

0x1cde,	// (0x00036299) popup_call_audio_out_window_g2_ParamLimits

0x1cde,	// (0x00036299) popup_call_audio_out_window_g2

0x1cea,	// (0x000362a5) popup_call_audio_out_window_g3_ParamLimits

0x1cea,	// (0x000362a5) popup_call_audio_out_window_g3

0x0002,

0xf0ef,	// (0x000436aa) popup_call_audio_out_window_g_ParamLimits

0xf0ef,	// (0x000436aa) popup_call_audio_out_window_g

0x1cfc,	// (0x000362b7) popup_call_audio_out_window_t1_ParamLimits

0x1cfc,	// (0x000362b7) popup_call_audio_out_window_t1

0x1d14,	// (0x000362cf) popup_call_audio_out_window_t2_ParamLimits

0x1d14,	// (0x000362cf) popup_call_audio_out_window_t2

0x0001,

0xf0f6,	// (0x000436b1) popup_call_audio_out_window_t_ParamLimits

0xf0f6,	// (0x000436b1) popup_call_audio_out_window_t

0x1d29,	// (0x000362e4) bg_popup_call_pane_ParamLimits

0x1d29,	// (0x000362e4) bg_popup_call_pane

0x501c,	// (0x000395d7) call_thumbnail_pane_cp_ParamLimits

0x501c,	// (0x000395d7) call_thumbnail_pane_cp

0x1dad,	// (0x00036368) call_type_pane_cp01_ParamLimits

0x1dad,	// (0x00036368) call_type_pane_cp01

0x1df1,	// (0x000363ac) popup_call_audio_first_window_g1_ParamLimits

0x1df1,	// (0x000363ac) popup_call_audio_first_window_g1

0x1e3d,	// (0x000363f8) popup_call_audio_first_window_g2_ParamLimits

0x1e3d,	// (0x000363f8) popup_call_audio_first_window_g2

0x0001,

0xf0fb,	// (0x000436b6) popup_call_audio_first_window_g_ParamLimits

0xf0fb,	// (0x000436b6) popup_call_audio_first_window_g

0x1e81,	// (0x0003643c) popup_call_audio_first_window_t1_ParamLimits

0x1e81,	// (0x0003643c) popup_call_audio_first_window_t1

0x1f2d,	// (0x000364e8) popup_call_audio_first_window_t4_ParamLimits

0x1f2d,	// (0x000364e8) popup_call_audio_first_window_t4

0x1fb9,	// (0x00036574) popup_call_audio_first_window_t5_ParamLimits

0x1fb9,	// (0x00036574) popup_call_audio_first_window_t5

0x0002,

0xf100,	// (0x000436bb) popup_call_audio_first_window_t_ParamLimits

0xf100,	// (0x000436bb) popup_call_audio_first_window_t

0x1fe8,	// (0x000365a3) bg_popup_call_pane_cp02

0x1ff2,	// (0x000365ad) call_type_pane_cp023

0x1ffa,	// (0x000365b5) popup_call_audio_wait_window_g1

0x2002,	// (0x000365bd) popup_call_audio_wait_window_g2

0x0001,

0xf107,	// (0x000436c2) popup_call_audio_wait_window_g

0x200a,	// (0x000365c5) popup_call_audio_wait_window_t3

0x2018,	// (0x000365d3) bg_popup_call_pane_cp03_ParamLimits

0x2018,	// (0x000365d3) bg_popup_call_pane_cp03

0x2078,	// (0x00036633) call_thumbnail_pane_cp011_ParamLimits

0x2078,	// (0x00036633) call_thumbnail_pane_cp011

0x2084,	// (0x0003663f) call_type_pane_cp034_ParamLimits

0x2084,	// (0x0003663f) call_type_pane_cp034

0x20c0,	// (0x0003667b) popup_call_audio_second_window_g1_ParamLimits

0x20c0,	// (0x0003667b) popup_call_audio_second_window_g1

0x20fc,	// (0x000366b7) popup_call_audio_second_window_g2_ParamLimits

0x20fc,	// (0x000366b7) popup_call_audio_second_window_g2

0x0001,

0xf10c,	// (0x000436c7) popup_call_audio_second_window_g_ParamLimits

0xf10c,	// (0x000436c7) popup_call_audio_second_window_g

0x2138,	// (0x000366f3) popup_call_audio_second_window_t1_ParamLimits

0x2138,	// (0x000366f3) popup_call_audio_second_window_t1

0x21b9,	// (0x00036774) popup_call_audio_second_window_t2_ParamLimits

0x21b9,	// (0x00036774) popup_call_audio_second_window_t2

0x21ef,	// (0x000367aa) popup_call_audio_second_window_t3_ParamLimits

0x21ef,	// (0x000367aa) popup_call_audio_second_window_t3

0x0002,

0xf111,	// (0x000436cc) popup_call_audio_second_window_t_ParamLimits

0xf111,	// (0x000436cc) popup_call_audio_second_window_t

0x1fe8,	// (0x000365a3) bg_popup_call_pane_cp04

0x2225,	// (0x000367e0) list_conf_pane

0x222d,	// (0x000367e8) popup_call_audio_conf_window_t1

0x223b,	// (0x000367f6) call_thumbnail_pane_g1

0x2243,	// (0x000367fe) bg_pinb_pane_ParamLimits

0x2243,	// (0x000367fe) bg_pinb_pane

0x2251,	// (0x0003680c) find_pinb_pane

0x225a,	// (0x00036815) listscroll_pinb_pane_ParamLimits

0x225a,	// (0x00036815) listscroll_pinb_pane

0x2269,	// (0x00036824) pinb_bg_pane_g1

0x5040,	// (0x000395fb) pinb_bg_pane_g2

0x504c,	// (0x00039607) pinb_bg_pane_g3

0x5058,	// (0x00039613) pinb_bg_pane_g4

0x5064,	// (0x0003961f) pinb_bg_pane_g5

0x5070,	// (0x0003962b) pinb_bg_pane_g6

0x507b,	// (0x00039636) pinb_bg_pane_g7

0x5086,	// (0x00039641) pinb_bg_pane_g8

0x5091,	// (0x0003964c) pinb_bg_pane_g9

0x509b,	// (0x00039656) pinb_bg_pane_g10

0x0009,

0xf118,	// (0x000436d3) pinb_bg_pane_g

0x50b8,	// (0x00039673) grid_pinb_pane

0x50c3,	// (0x0003967e) list_pinb_pane

0x50ce,	// (0x00039689) scroll_pane_cp01_ParamLimits

0x50ce,	// (0x00039689) scroll_pane_cp01

0x2273,	// (0x0003682e) find_pinb_pane_g1_ParamLimits

0x2273,	// (0x0003682e) find_pinb_pane_g1

0x228b,	// (0x00036846) find_pinb_pane_t1

0x229d,	// (0x00036858) find_pinb_pane_t2

0x0001,

0xf132,	// (0x000436ed) find_pinb_pane_t

0x22b2,	// (0x0003686d) input_focus_pane_cp01_ParamLimits

0x22b2,	// (0x0003686d) input_focus_pane_cp01

0x50e0,	// (0x0003969b) cell_pinb_pane_ParamLimits

0x50e0,	// (0x0003969b) cell_pinb_pane

0x50fe,	// (0x000396b9) cell_pinb_pane_g1_ParamLimits

0x50fe,	// (0x000396b9) cell_pinb_pane_g1

0x5113,	// (0x000396ce) cell_pinb_pane_g2_ParamLimits

0x5113,	// (0x000396ce) cell_pinb_pane_g2

0x22be,	// (0x00036879) cell_pinb_pane_g3_ParamLimits

0x22be,	// (0x00036879) cell_pinb_pane_g3

0x0002,

0xf137,	// (0x000436f2) cell_pinb_pane_g_ParamLimits

0xf137,	// (0x000436f2) cell_pinb_pane_g

0x1fe8,	// (0x000365a3) grid_highlight_pane_cp01

0x511f,	// (0x000396da) list_pinb_item_pane_ParamLimits

0x511f,	// (0x000396da) list_pinb_item_pane

0x1fe8,	// (0x000365a3) list_highlight_pane_cp02

0x513a,	// (0x000396f5) list_pinb_item_pane_g1_ParamLimits

0x513a,	// (0x000396f5) list_pinb_item_pane_g1

0x5147,	// (0x00039702) list_pinb_item_pane_g2_ParamLimits

0x5147,	// (0x00039702) list_pinb_item_pane_g2

0x5153,	// (0x0003970e) list_pinb_item_pane_g3_ParamLimits

0x5153,	// (0x0003970e) list_pinb_item_pane_g3

0x5164,	// (0x0003971f) list_pinb_item_pane_g4_ParamLimits

0x5164,	// (0x0003971f) list_pinb_item_pane_g4

0x0003,

0xf13e,	// (0x000436f9) list_pinb_item_pane_g_ParamLimits

0xf13e,	// (0x000436f9) list_pinb_item_pane_g

0x5170,	// (0x0003972b) list_pinb_item_pane_t1_ParamLimits

0x5170,	// (0x0003972b) list_pinb_item_pane_t1

0x51a1,	// (0x0003975c) calc_display_pane

0x51bf,	// (0x0003977a) calc_paper_pane

0x51db,	// (0x00039796) grid_calc_pane

0x1fe8,	// (0x000365a3) bg_list_pane_cp01

0x5207,	// (0x000397c2) clock_g1

0x520f,	// (0x000397ca) clock_g2

0x0001,

0xf147,	// (0x00043702) clock_g

0x5219,	// (0x000397d4) clock_t1_ParamLimits

0x5219,	// (0x000397d4) clock_t1

0x522e,	// (0x000397e9) clock_t2_ParamLimits

0x522e,	// (0x000397e9) clock_t2

0x5240,	// (0x000397fb) clock_t3_ParamLimits

0x5240,	// (0x000397fb) clock_t3

0x5252,	// (0x0003980d) clock_t4_ParamLimits

0x5252,	// (0x0003980d) clock_t4

0x5264,	// (0x0003981f) clock_t5_ParamLimits

0x5264,	// (0x0003981f) clock_t5

0x5279,	// (0x00039834) clock_t6_ParamLimits

0x5279,	// (0x00039834) clock_t6

0x528b,	// (0x00039846) clock_t7_ParamLimits

0x528b,	// (0x00039846) clock_t7

0x529d,	// (0x00039858) clock_t8_ParamLimits

0x529d,	// (0x00039858) clock_t8

0x52b3,	// (0x0003986e) clock_t9_ParamLimits

0x52b3,	// (0x0003986e) clock_t9

0x0008,

0xf14c,	// (0x00043707) clock_t_ParamLimits

0xf14c,	// (0x00043707) clock_t

0x22ca,	// (0x00036885) popup_clock_analogue_window_cp02

0x22ca,	// (0x00036885) popup_clock_digital_window_cp01

0x22d2,	// (0x0003688d) listscroll_help_pane

0x1fe8,	// (0x000365a3) phob_pre_status_pane

0x22dc,	// (0x00036897) grid_qdial_pane

0x1fe8,	// (0x000365a3) listscroll_mce_pane

0x22e6,	// (0x000368a1) bg_notes_pane

0x22f4,	// (0x000368af) list_notes_pane

0x52c9,	// (0x00039884) scroll_pane_cp06

0x2302,	// (0x000368bd) bg_calc_paper_pane

0x52d8,	// (0x00039893) list_calc_pane

0x2316,	// (0x000368d1) bg_calc_display_pane

0x52f2,	// (0x000398ad) calc_display_pane_t1

0x5307,	// (0x000398c2) calc_display_pane_t2

0x531c,	// (0x000398d7) calc_display_pane_t3

0x0002,

0xf15f,	// (0x0004371a) calc_display_pane_t

0x532e,	// (0x000398e9) cell_calc_pane_ParamLimits

0x532e,	// (0x000398e9) cell_calc_pane

0x2322,	// (0x000368dd) bg_calc_paper_pane_g1

0x233a,	// (0x000368f5) bg_calc_paper_pane_g2

0x232e,	// (0x000368e9) bg_calc_paper_pane_g3

0x2352,	// (0x0003690d) bg_calc_paper_pane_g4

0x2346,	// (0x00036901) bg_calc_paper_pane_g5

0x535d,	// (0x00039918) bg_calc_paper_pane_g6

0x536e,	// (0x00039929) bg_calc_paper_pane_g7

0x537f,	// (0x0003993a) bg_calc_paper_pane_g8

0x0007,

0xf166,	// (0x00043721) bg_calc_paper_pane_g

0x5392,	// (0x0003994d) calc_bg_paper_pane_g9

0x53a5,	// (0x00039960) list_calc_item_pane_ParamLimits

0x53a5,	// (0x00039960) list_calc_item_pane

0x235e,	// (0x00036919) list_calc_item_pane_g1

0x53c6,	// (0x00039981) list_calc_item_pane_t1_ParamLimits

0x53c6,	// (0x00039981) list_calc_item_pane_t1

0x53d8,	// (0x00039993) list_calc_item_pane_t2_ParamLimits

0x53d8,	// (0x00039993) list_calc_item_pane_t2

0x0001,

0xf177,	// (0x00043732) list_calc_item_pane_t_ParamLimits

0xf177,	// (0x00043732) list_calc_item_pane_t

0x236b,	// (0x00036926) cell_calc_pane_g1

0x2375,	// (0x00036930) grid_highlight_pane_cp02

0x23ae,	// (0x00036969) bg_calc_display_pane_g1

0x5408,	// (0x000399c3) bg_calc_display_pane_g2

0x23a5,	// (0x00036960) bg_calc_display_pane_g3

0x0002,

0xf181,	// (0x0004373c) bg_calc_display_pane_g

0x5412,	// (0x000399cd) cell_qdial_pane_ParamLimits

0x5412,	// (0x000399cd) cell_qdial_pane

0x5428,	// (0x000399e3) cell_qdial_pane_g1_ParamLimits

0x5428,	// (0x000399e3) cell_qdial_pane_g1

0x5435,	// (0x000399f0) cell_qdial_pane_g2_ParamLimits

0x5435,	// (0x000399f0) cell_qdial_pane_g2

0x23b7,	// (0x00036972) cell_qdial_pane_g3_ParamLimits

0x23b7,	// (0x00036972) cell_qdial_pane_g3

0x0003,

0xf188,	// (0x00043743) cell_qdial_pane_g_ParamLimits

0xf188,	// (0x00043743) cell_qdial_pane_g

0x5453,	// (0x00039a0e) cell_qdial_pane_t1_ParamLimits

0x5453,	// (0x00039a0e) cell_qdial_pane_t1

0x546b,	// (0x00039a26) cell_qdial_pane_t2_ParamLimits

0x546b,	// (0x00039a26) cell_qdial_pane_t2

0x547e,	// (0x00039a39) cell_qdial_pane_t3_ParamLimits

0x547e,	// (0x00039a39) cell_qdial_pane_t3

0x0002,

0xf191,	// (0x0004374c) cell_qdial_pane_t_ParamLimits

0xf191,	// (0x0004374c) cell_qdial_pane_t

0x1fe8,	// (0x000365a3) grid_highlight_pane_cp04

0x23c3,	// (0x0003697e) thumbnail_qdial_pane_ParamLimits

0x23c3,	// (0x0003697e) thumbnail_qdial_pane

0x241f,	// (0x000369da) list_help_pane

0x2428,	// (0x000369e3) scroll_pane_cp02

0x5491,	// (0x00039a4c) help_list_pane_t1_ParamLimits

0x5491,	// (0x00039a4c) help_list_pane_t1

0x54b8,	// (0x00039a73) bg_notes_pane_g2

0x54c0,	// (0x00039a7b) bg_notes_pane_g3

0x54c8,	// (0x00039a83) notes_bg_pane_g1

0x54d0,	// (0x00039a8b) notes_bg_pane_g4

0x54d8,	// (0x00039a93) notes_bg_pane_g5

0x54e0,	// (0x00039a9b) notes_bg_pane_g6

0x54e8,	// (0x00039aa3) notes_bg_pane_g7

0x54f0,	// (0x00039aab) notes_bg_pane_g8

0x54f8,	// (0x00039ab3) notes_bg_pane_g9

0x0006,

0xf1af,	// (0x0004376a) notes_bg_pane_g

0x5500,	// (0x00039abb) list_notes_text_pane_ParamLimits

0x5500,	// (0x00039abb) list_notes_text_pane

0x2431,	// (0x000369ec) list_notes_text_pane_g1

0x3b19,	// (0x000380d4) list_notes_text_pane_t1

0x2316,	// (0x000368d1) listscroll_cale_week_pane

0x5545,	// (0x00039b00) bg_cale_heading_pane

0x244b,	// (0x00036a06) bg_cale_pane_cp01

0x5561,	// (0x00039b1c) cale_week_corner_pane

0x5577,	// (0x00039b32) cale_week_day_heading_pane

0x5593,	// (0x00039b4e) cale_week_scroll_pane_g1

0x55ac,	// (0x00039b67) cale_week_scroll_pane_g2

0x55bd,	// (0x00039b78) cale_week_scroll_pane_g3

0x55ce,	// (0x00039b89) cale_week_scroll_pane_g4

0x55df,	// (0x00039b9a) cale_week_scroll_pane_g5

0x55f0,	// (0x00039bab) cale_week_scroll_pane_g6

0x5603,	// (0x00039bbe) cale_week_scroll_pane_g7

0x5616,	// (0x00039bd1) cale_week_scroll_pane_g8

0x5629,	// (0x00039be4) cale_week_scroll_pane_g9

0x563a,	// (0x00039bf5) cale_week_scroll_pane_g10

0x564b,	// (0x00039c06) cale_week_scroll_pane_g11

0x565c,	// (0x00039c17) cale_week_scroll_pane_g12

0x566d,	// (0x00039c28) cale_week_scroll_pane_g13

0x567e,	// (0x00039c39) cale_week_scroll_pane_g14

0x5697,	// (0x00039c52) cale_week_scroll_pane_g15

0x000e,

0xf1be,	// (0x00043779) cale_week_scroll_pane_g

0x56b0,	// (0x00039c6b) cale_week_time_pane

0x56c3,	// (0x00039c7e) grid_cale_week_pane

0x56e0,	// (0x00039c9b) scroll_pane_cp08

0x56fa,	// (0x00039cb5) cell_cale_week_pane_ParamLimits

0x56fa,	// (0x00039cb5) cell_cale_week_pane

0x573c,	// (0x00039cf7) cale_week_day_heading_pane_t1

0x5769,	// (0x00039d24) cale_week_day_heading_pane_t2

0x5796,	// (0x00039d51) cale_week_day_heading_pane_t3

0x57c3,	// (0x00039d7e) cale_week_day_heading_pane_t4

0x57f0,	// (0x00039dab) cale_week_day_heading_pane_t5

0x581d,	// (0x00039dd8) cale_week_day_heading_pane_t6

0x584a,	// (0x00039e05) cale_week_day_heading_pane_t7

0x0006,

0xf1dd,	// (0x00043798) cale_week_day_heading_pane_t

0x2476,	// (0x00036a31) bg_cale_side_pane

0x5877,	// (0x00039e32) cale_week_time_pane_t1

0x588f,	// (0x00039e4a) cale_week_time_pane_t2

0x58a7,	// (0x00039e62) cale_week_time_pane_t3

0x58bf,	// (0x00039e7a) cale_week_time_pane_t4

0x58d7,	// (0x00039e92) cale_week_time_pane_t5

0x58ef,	// (0x00039eaa) cale_week_time_pane_t6

0x5907,	// (0x00039ec2) cale_week_time_pane_t7

0x591f,	// (0x00039eda) cale_week_time_pane_t8

0x0007,

0xf1ec,	// (0x000437a7) cale_week_time_pane_t

0x593b,	// (0x00039ef6) cell_cale_week_pane_g2

0x5954,	// (0x00039f0f) cell_cale_week_pane_g3_ParamLimits

0x5954,	// (0x00039f0f) cell_cale_week_pane_g3

0x2484,	// (0x00036a3f) grid_highlight_pane_cp07

0x248c,	// (0x00036a47) listscroll_gms_pane

0x2496,	// (0x00036a51) grid_gms_pane

0x249f,	// (0x00036a5a) listscroll_gms_pane_g1

0x24a7,	// (0x00036a62) listscroll_gms_pane_g2

0x0001,

0xf1fd,	// (0x000437b8) listscroll_gms_pane_g

0x596c,	// (0x00039f27) scroll_pane_cp010

0x5977,	// (0x00039f32) cell_gms_pane_ParamLimits

0x5977,	// (0x00039f32) cell_gms_pane

0x598a,	// (0x00039f45) cell_gms_pane_g1

0x24af,	// (0x00036a6a) cell_gms_pane_g2

0x24b7,	// (0x00036a72) cell_gms_pane_g3

0x24c0,	// (0x00036a7b) cell_gms_pane_g4

0x0003,

0xf202,	// (0x000437bd) cell_gms_pane_g

0x24c9,	// (0x00036a84) grid_highlight_pane_cp09

0x7bd2,	// (0x0003c18d) phob_pre_status_pane_g1

0x7bda,	// (0x0003c195) phob_pre_status_pane_g2

0x7be2,	// (0x0003c19d) phob_pre_status_pane_g3

0x7bea,	// (0x0003c1a5) phob_pre_status_pane_g4

0x0004,

0xf5f1,	// (0x00043bac) phob_pre_status_pane_g

0x7bfa,	// (0x0003c1b5) phob_pre_status_pane_t1

0x7c0a,	// (0x0003c1c5) phob_pre_status_pane_t2

0x7c1a,	// (0x0003c1d5) phob_pre_status_pane_t3

0x0002,

0xf5fc,	// (0x00043bb7) phob_pre_status_pane_t

0x1fe8,	// (0x000365a3) bg_list_pane_cp05

0x599a,	// (0x00039f55) grid_vorec_pane

0x59a6,	// (0x00039f61) vorec_t1

0x59b4,	// (0x00039f6f) vorec_t2

0x59c2,	// (0x00039f7d) vorec_t3

0x59d0,	// (0x00039f8b) vorec_t4

0x59de,	// (0x00039f99) vorec_t5

0x59ec,	// (0x00039fa7) vorec_t6

0x0006,

0xf20b,	// (0x000437c6) vorec_t

0x5a08,	// (0x00039fc3) wait_bar_pane_cp01

0x5a10,	// (0x00039fcb) cell_vorec_pane_ParamLimits

0x5a10,	// (0x00039fcb) cell_vorec_pane

0x24d1,	// (0x00036a8c) cell_vorec_pane_g1

0x1fe8,	// (0x000365a3) grid_highlight_pane_cp05

0x5a33,	// (0x00039fee) cams_zoom_pane

0x5a3f,	// (0x00039ffa) image_vga_pane

0x5a4e,	// (0x0003a009) main_camera_pane_g1

0x5a5c,	// (0x0003a017) main_camera_pane_g2

0x5a68,	// (0x0003a023) main_camera_pane_g3

0x5a76,	// (0x0003a031) main_camera_pane_g4

0x5a84,	// (0x0003a03f) main_camera_pane_g5

0x5a92,	// (0x0003a04d) main_camera_pane_g6

0x5aa0,	// (0x0003a05b) main_camera_pane_g7

0x0007,

0xf21a,	// (0x000437d5) main_camera_pane_g

0x5aae,	// (0x0003a069) main_camera_pane_t1

0x5ac0,	// (0x0003a07b) main_camera_pane_t2

0x0001,

0xf22b,	// (0x000437e6) main_camera_pane_t

0x5ae3,	// (0x0003a09e) cams_zoom_pane_cp_ParamLimits

0x5ae3,	// (0x0003a09e) cams_zoom_pane_cp

0x5b07,	// (0x0003a0c2) image_cif_pane_ParamLimits

0x5b07,	// (0x0003a0c2) image_cif_pane

0x5b25,	// (0x0003a0e0) image_subqcif_pane

0x5b2f,	// (0x0003a0ea) main_video_pane_g1_ParamLimits

0x5b2f,	// (0x0003a0ea) main_video_pane_g1

0x5b4f,	// (0x0003a10a) main_video_pane_g2_ParamLimits

0x5b4f,	// (0x0003a10a) main_video_pane_g2

0x5b7f,	// (0x0003a13a) main_video_pane_g3_ParamLimits

0x5b7f,	// (0x0003a13a) main_video_pane_g3

0x5ba8,	// (0x0003a163) main_video_pane_g4_ParamLimits

0x5ba8,	// (0x0003a163) main_video_pane_g4

0x5bd1,	// (0x0003a18c) main_video_pane_g5_ParamLimits

0x5bd1,	// (0x0003a18c) main_video_pane_g5

0x24e7,	// (0x00036aa2) main_video_pane_g6_ParamLimits

0x24e7,	// (0x00036aa2) main_video_pane_g6

0x0006,

0xf230,	// (0x000437eb) main_video_pane_g_ParamLimits

0xf230,	// (0x000437eb) main_video_pane_g

0x5bf3,	// (0x0003a1ae) main_video_pane_t1_ParamLimits

0x5bf3,	// (0x0003a1ae) main_video_pane_t1

0x2501,	// (0x00036abc) cams_zoom_pane_g1

0x250a,	// (0x00036ac5) cams_zoom_pane_g2

0x2513,	// (0x00036ace) cams_zoom_pane_g3

0x251c,	// (0x00036ad7) cams_zoom_pane_g4

0x0003,

0xf23f,	// (0x000437fa) cams_zoom_pane_g

0x5c3d,	// (0x0003a1f8) grid_cams_pane

0x5c4b,	// (0x0003a206) linegrid_cams_pane

0x5c57,	// (0x0003a212) cell_cams_pane_ParamLimits

0x5c57,	// (0x0003a212) cell_cams_pane

0x2525,	// (0x00036ae0) cams_burst_image_pane

0x252d,	// (0x00036ae8) cell_cams_pane_g1

0x1fe8,	// (0x000365a3) grid_highlight_pane_cp03

0x236b,	// (0x00036926) mp_bg_pane_g1

0x1fe8,	// (0x000365a3) bg_list_pane_cp03

0xdce9,	// (0x000422a4) bg_mp_pane

0xdcf1,	// (0x000422ac) grid_mp_pane

0xdcf9,	// (0x000422b4) media_player_g1

0xdd03,	// (0x000422be) media_player_t1

0xdd11,	// (0x000422cc) media_player_t2

0xdd1f,	// (0x000422da) media_player_t3

0xdd2d,	// (0x000422e8) media_player_t4

0xdd3b,	// (0x000422f6) media_player_t5

0xdd49,	// (0x00042304) media_player_t6

0xdd57,	// (0x00042312) media_player_t7

0x0006,

0xf5db,	// (0x00043b96) media_player_t

0xdd65,	// (0x00042320) wait_bar_pane_cp02

0xf5c0,	// (0x00043b7b) main_usb_pane_t

0x7bc9,	// (0x0003c184) cell_mp_pane

0x236b,	// (0x00036926) cell_mp_pane_g1

0x1fe8,	// (0x000365a3) grid_highlight_pane_cp06

0x25f3,	// (0x00036bae) grid_skin_colour_pane

0x25fb,	// (0x00036bb6) list_highlight_pane_cp03

0x5c6c,	// (0x0003a227) skin_g1

0x2603,	// (0x00036bbe) skin_t1

0x2612,	// (0x00036bcd) skin_t2

0x0001,

0xf274,	// (0x0004382f) skin_t

0x5c76,	// (0x0003a231) cell_skin_colour_pane_ParamLimits

0x5c76,	// (0x0003a231) cell_skin_colour_pane

0x2620,	// (0x00036bdb) cell_skin_colour_pane_g1

0x5cf6,	// (0x0003a2b1) call_video_g1_ParamLimits

0x5cf6,	// (0x0003a2b1) call_video_g1

0x5d06,	// (0x0003a2c1) call_video_g2_ParamLimits

0x5d06,	// (0x0003a2c1) call_video_g2

0x0001,

0xf279,	// (0x00043834) call_video_g_ParamLimits

0xf279,	// (0x00043834) call_video_g

0x5d56,	// (0x0003a311) call_video_uplink_pane_cp1_ParamLimits

0x5d56,	// (0x0003a311) call_video_uplink_pane_cp1

0x2632,	// (0x00036bed) call_video_uplink_pane_cp2

0x5e24,	// (0x0003a3df) video_down_crop_pane_ParamLimits

0x5e24,	// (0x0003a3df) video_down_crop_pane

0x5f16,	// (0x0003a4d1) video_down_pane_ParamLimits

0x5f16,	// (0x0003a4d1) video_down_pane

0x263a,	// (0x00036bf5) video_down_subqcif_pane_ParamLimits

0x263a,	// (0x00036bf5) video_down_subqcif_pane

0x2654,	// (0x00036c0f) video_down_subqcif_pane_cp_ParamLimits

0x2654,	// (0x00036c0f) video_down_subqcif_pane_cp

0x267c,	// (0x00036c37) im_reading_pane_ParamLimits

0x267c,	// (0x00036c37) im_reading_pane

0x6033,	// (0x0003a5ee) im_writing_pane_ParamLimits

0x6033,	// (0x0003a5ee) im_writing_pane

0x6051,	// (0x0003a60c) im_reading_pane_t1

0x2696,	// (0x00036c51) list_im_pane

0x26a7,	// (0x00036c62) scroll_pane_cp07

0x6093,	// (0x0003a64e) im_writing_pane_t1_ParamLimits

0x6093,	// (0x0003a64e) im_writing_pane_t1

0x26c0,	// (0x00036c7b) im_writing_pane_t2_ParamLimits

0x26c0,	// (0x00036c7b) im_writing_pane_t2

0x0001,

0xf283,	// (0x0004383e) im_writing_pane_t_ParamLimits

0xf283,	// (0x0004383e) im_writing_pane_t

0x1fe8,	// (0x000365a3) input_focus_pane_cp04

0x1fe8,	// (0x000365a3) input_focus_pane_cp05

0x60a5,	// (0x0003a660) list_im_single_pane_ParamLimits

0x60a5,	// (0x0003a660) list_im_single_pane

0x60be,	// (0x0003a679) list_single_im_pane_t1

0x7b8d,	// (0x0003c148) blid_accuracy_pane

0x7b95,	// (0x0003c150) blid_compass_pane

0x7b9f,	// (0x0003c15a) main_location_t1

0x7bad,	// (0x0003c168) main_location_t2

0x7bbb,	// (0x0003c176) main_location_t3

0x0002,

0xf5ea,	// (0x00043ba5) main_location_t

0x1fe8,	// (0x000365a3) aid_levels_location

0x236b,	// (0x00036926) blid_accuracy_pane_g1

0x236b,	// (0x00036926) blid_accuracy_pane_g2

0x0001,

0xf2e5,	// (0x000438a0) blid_accuracy_pane_g

0x2708,	// (0x00036cc3) wml_content_pane

0x2746,	// (0x00036d01) wml_button_pane_ParamLimits

0x2746,	// (0x00036d01) wml_button_pane

0x60cd,	// (0x0003a688) wml_list_single_large_pane_ParamLimits

0x60cd,	// (0x0003a688) wml_list_single_large_pane

0x60ef,	// (0x0003a6aa) wml_list_single_medium_pane_ParamLimits

0x60ef,	// (0x0003a6aa) wml_list_single_medium_pane

0x6112,	// (0x0003a6cd) wml_list_single_small_pane_ParamLimits

0x6112,	// (0x0003a6cd) wml_list_single_small_pane

0x275a,	// (0x00036d15) wml_selection_box_pane_ParamLimits

0x275a,	// (0x00036d15) wml_selection_box_pane

0x276d,	// (0x00036d28) wml_list_single_pane_t1

0x277c,	// (0x00036d37) wml_list_single_medium_pane_t1

0x278b,	// (0x00036d46) wml_list_single_large_pane_t1

0x279a,	// (0x00036d55) input_focus_pane_cp02_ParamLimits

0x279a,	// (0x00036d55) input_focus_pane_cp02

0x27ad,	// (0x00036d68) wml_selection_box_pane_g1

0x27b6,	// (0x00036d71) wml_selection_box_pane_t1_ParamLimits

0x27b6,	// (0x00036d71) wml_selection_box_pane_t1

0x2243,	// (0x000367fe) bg_wml_button_pane_ParamLimits

0x2243,	// (0x000367fe) bg_wml_button_pane

0x27ce,	// (0x00036d89) wml_button_pane_g1

0x27d6,	// (0x00036d91) wml_button_pane_t1

0x27ce,	// (0x00036d89) wml_button_bg_pane_g1

0x27e6,	// (0x00036da1) wml_button_bg_pane_g2

0x27ee,	// (0x00036da9) wml_button_bg_pane_g3

0x27f6,	// (0x00036db1) wml_button_bg_pane_g4

0x27fe,	// (0x00036db9) wml_button_bg_pane_g5

0x2806,	// (0x00036dc1) wml_button_bg_pane_g6

0x280e,	// (0x00036dc9) wml_button_bg_pane_g7

0x2816,	// (0x00036dd1) wml_button_bg_pane_g8

0x281e,	// (0x00036dd9) wml_button_bg_pane_g9

0x0008,

0xf288,	// (0x00043843) wml_button_bg_pane_g

0x613a,	// (0x0003a6f5) bg_list_pane_cp02

0x2826,	// (0x00036de1) mce_header_pane_ParamLimits

0x2826,	// (0x00036de1) mce_header_pane

0x283c,	// (0x00036df7) mce_icon_pane

0x283c,	// (0x00036df7) mce_image_pane

0x2845,	// (0x00036e00) mce_text_pane_ParamLimits

0x2845,	// (0x00036e00) mce_text_pane

0x6144,	// (0x0003a6ff) scroll_pane_cp03

0x273e,	// (0x00036cf9) scroll_pane_cp04

0x2858,	// (0x00036e13) scroll_pane_cp05_ParamLimits

0x2858,	// (0x00036e13) scroll_pane_cp05

0x614e,	// (0x0003a709) mce_header_field_pane_ParamLimits

0x614e,	// (0x0003a709) mce_header_field_pane

0x6170,	// (0x0003a72b) mce_header_field_pane_2_ParamLimits

0x6170,	// (0x0003a72b) mce_header_field_pane_2

0x6186,	// (0x0003a741) mce_header_field_pane_3

0x618e,	// (0x0003a749) list_single_mce_message_pane_ParamLimits

0x618e,	// (0x0003a749) list_single_mce_message_pane

0x61a7,	// (0x0003a762) list_single_mce_smart_pane_ParamLimits

0x61a7,	// (0x0003a762) list_single_mce_smart_pane

0x2864,	// (0x00036e1f) input_focus_pane_cp03

0x286d,	// (0x00036e28) list_header_data_pane

0x61cb,	// (0x0003a786) mce_header_field_pane_t1

0x61db,	// (0x0003a796) list_single_mce_header_pane_ParamLimits

0x61db,	// (0x0003a796) list_single_mce_header_pane

0x2875,	// (0x00036e30) list_single_mce_header_pane_t1

0x2884,	// (0x00036e3f) list_single_mce_message_pane_g1

0x288c,	// (0x00036e47) list_single_mce_message_pane_t1

0x6211,	// (0x0003a7cc) bg_cale_heading_pane_cp01_ParamLimits

0x6211,	// (0x0003a7cc) bg_cale_heading_pane_cp01

0x289a,	// (0x00036e55) bg_cale_pane_cp02_ParamLimits

0x289a,	// (0x00036e55) bg_cale_pane_cp02

0x6244,	// (0x0003a7ff) cale_month_corner_pane

0x625a,	// (0x0003a815) cale_month_day_heading_pane_ParamLimits

0x625a,	// (0x0003a815) cale_month_day_heading_pane

0x629d,	// (0x0003a858) cale_month_pane_g1_ParamLimits

0x629d,	// (0x0003a858) cale_month_pane_g1

0x62c9,	// (0x0003a884) cale_month_pane_g2_ParamLimits

0x62c9,	// (0x0003a884) cale_month_pane_g2

0x62ec,	// (0x0003a8a7) cale_month_pane_g3_ParamLimits

0x62ec,	// (0x0003a8a7) cale_month_pane_g3

0x6328,	// (0x0003a8e3) cale_month_pane_g4_ParamLimits

0x6328,	// (0x0003a8e3) cale_month_pane_g4

0x6364,	// (0x0003a91f) cale_month_pane_g5_ParamLimits

0x6364,	// (0x0003a91f) cale_month_pane_g5

0x63a0,	// (0x0003a95b) cale_month_pane_g6_ParamLimits

0x63a0,	// (0x0003a95b) cale_month_pane_g6

0x63ec,	// (0x0003a9a7) cale_month_pane_g7_ParamLimits

0x63ec,	// (0x0003a9a7) cale_month_pane_g7

0x6438,	// (0x0003a9f3) cale_month_pane_g8_ParamLimits

0x6438,	// (0x0003a9f3) cale_month_pane_g8

0x6484,	// (0x0003aa3f) cale_month_pane_g9_ParamLimits

0x6484,	// (0x0003aa3f) cale_month_pane_g9

0x64be,	// (0x0003aa79) cale_month_pane_g10_ParamLimits

0x64be,	// (0x0003aa79) cale_month_pane_g10

0x64f8,	// (0x0003aab3) cale_month_pane_g11_ParamLimits

0x64f8,	// (0x0003aab3) cale_month_pane_g11

0x6532,	// (0x0003aaed) cale_month_pane_g12_ParamLimits

0x6532,	// (0x0003aaed) cale_month_pane_g12

0x6570,	// (0x0003ab2b) cale_month_pane_g13_ParamLimits

0x6570,	// (0x0003ab2b) cale_month_pane_g13

0x000c,

0xf29b,	// (0x00043856) cale_month_pane_g_ParamLimits

0xf29b,	// (0x00043856) cale_month_pane_g

0x65ae,	// (0x0003ab69) cale_month_week_pane

0x65c1,	// (0x0003ab7c) grid_cale_month_pane_ParamLimits

0x65c1,	// (0x0003ab7c) grid_cale_month_pane

0x65ff,	// (0x0003abba) cale_month_day_heading_pane_t1

0x665d,	// (0x0003ac18) cale_month_day_heading_pane_t2

0x66c2,	// (0x0003ac7d) cale_month_day_heading_pane_t3

0x6727,	// (0x0003ace2) cale_month_day_heading_pane_t4

0x678c,	// (0x0003ad47) cale_month_day_heading_pane_t5

0x67f9,	// (0x0003adb4) cale_month_day_heading_pane_t6

0x686e,	// (0x0003ae29) cale_month_day_heading_pane_t7

0x0006,

0xf2b6,	// (0x00043871) cale_month_day_heading_pane_t

0x2476,	// (0x00036a31) bg_cale_side_pane_cp01

0x68e3,	// (0x0003ae9e) cale_month_week_pane_t1

0x68fa,	// (0x0003aeb5) cale_month_week_pane_t2

0x6911,	// (0x0003aecc) cale_month_week_pane_t3

0x6928,	// (0x0003aee3) cale_month_week_pane_t4

0x693f,	// (0x0003aefa) cale_month_week_pane_t5

0x6956,	// (0x0003af11) cale_month_week_pane_t6

0x0005,

0xf2c5,	// (0x00043880) cale_month_week_pane_t

0x696d,	// (0x0003af28) cell_cale_month_pane_ParamLimits

0x696d,	// (0x0003af28) cell_cale_month_pane

0x6a3b,	// (0x0003aff6) cell_cale_month_pane_g1

0x6a47,	// (0x0003b002) cell_cale_month_pane_t1_ParamLimits

0x6a47,	// (0x0003b002) cell_cale_month_pane_t1

0x2484,	// (0x00036a3f) grid_highlight_pane_cp08

0x236b,	// (0x00036926) main_smil_g1

0x6a63,	// (0x0003b01e) smil_status_pane

0x28f9,	// (0x00036eb4) smil_text_pane

0xdc07,	// (0x000421c2) bg_popup_call3_rect_pane_g8

0xdc0f,	// (0x000421ca) bg_popup_call3_rect_pane_g9

0x0008,

0xf57e,	// (0x00043b39) bg_popup_call3_rect_pane_g

0xde61,	// (0x0004241c) smil_status_volume_pane_g1

0x2903,	// (0x00036ebe) smil_status_pane_t1

0x7fb1,	// (0x0003c56c) volume_smil_pane

0x291a,	// (0x00036ed5) list_smil_text_pane

0x6a76,	// (0x0003b031) scroll_pane_cp011

0x6a81,	// (0x0003b03c) smil_text_list_pane_t1_ParamLimits

0x6a81,	// (0x0003b03c) smil_text_list_pane_t1

0x6ad5,	// (0x0003b090) aid_volume_smil_ParamLimits

0x6ad5,	// (0x0003b090) aid_volume_smil

0x236b,	// (0x00036926) smil_volume_pane_g1

0x236b,	// (0x00036926) smil_volume_pane_g2

0x0001,

0xf2e5,	// (0x000438a0) smil_volume_pane_g

0x2316,	// (0x000368d1) listscroll_cale_day_pane

0x2924,	// (0x00036edf) bg_cale_pane

0x293c,	// (0x00036ef7) list_cale_pane

0x294d,	// (0x00036f08) scroll_pane_cp09

0x295e,	// (0x00036f19) cale_bg_pane_g1

0x2966,	// (0x00036f21) cale_bg_pane_g2

0x296e,	// (0x00036f29) cale_bg_pane_g3

0x2976,	// (0x00036f31) cale_bg_pane_g4

0x297e,	// (0x00036f39) cale_bg_pane_g5

0x2986,	// (0x00036f41) cale_bg_pane_g6

0x298e,	// (0x00036f49) cale_bg_pane_g7

0x2996,	// (0x00036f51) cale_bg_pane_g8

0x299e,	// (0x00036f59) cale_bg_pane_g9

0x0008,

0xf2ea,	// (0x000438a5) cale_bg_pane_g

0x6af7,	// (0x0003b0b2) list_cale_time_pane_ParamLimits

0x6af7,	// (0x0003b0b2) list_cale_time_pane

0x6b0c,	// (0x0003b0c7) list_cale_time_pane_g1_ParamLimits

0x6b0c,	// (0x0003b0c7) list_cale_time_pane_g1

0x29a6,	// (0x00036f61) list_cale_time_pane_g2_ParamLimits

0x29a6,	// (0x00036f61) list_cale_time_pane_g2

0x6b18,	// (0x0003b0d3) list_cale_time_pane_g3_ParamLimits

0x6b18,	// (0x0003b0d3) list_cale_time_pane_g3

0x6b26,	// (0x0003b0e1) list_cale_time_pane_g4_ParamLimits

0x6b26,	// (0x0003b0e1) list_cale_time_pane_g4

0x6b34,	// (0x0003b0ef) list_cale_time_pane_g5_ParamLimits

0x6b34,	// (0x0003b0ef) list_cale_time_pane_g5

0x0005,

0xf2fd,	// (0x000438b8) list_cale_time_pane_g_ParamLimits

0xf2fd,	// (0x000438b8) list_cale_time_pane_g

0x6b42,	// (0x0003b0fd) list_cale_time_pane_t1_ParamLimits

0x6b42,	// (0x0003b0fd) list_cale_time_pane_t1

0x6b6a,	// (0x0003b125) list_cale_time_pane_t2_ParamLimits

0x6b6a,	// (0x0003b125) list_cale_time_pane_t2

0x6ea4,	// (0x0003b45f) aid_blid_cardinal_pane

0x6ee6,	// (0x0003b4a1) compass_pane_t4

0x6b92,	// (0x0003b14d) list_cale_time_pane_t4_ParamLimits

0x6b92,	// (0x0003b14d) list_cale_time_pane_t4

0x6ef4,	// (0x0003b4af) compass_pane_t5

0x6f04,	// (0x0003b4bf) compass_pane_t6

0x6f12,	// (0x0003b4cd) compass_pane_t7

0xc90d,	// (0x00040ec8) navi_pane_cc_t1

0xca62,	// (0x0004101d) aid_phob_thumbnail_center_pane

0x7689,	// (0x0003bc44) main_postcard_pane_g4_ParamLimits

0x0002,

0xf30a,	// (0x000438c5) list_cale_time_pane_t_ParamLimits

0xf30a,	// (0x000438c5) list_cale_time_pane_t

0x1c3f,	// (0x000361fa) bg_popup_window_pane_cp02_ParamLimits

0x1c3f,	// (0x000361fa) bg_popup_window_pane_cp02

0x29c0,	// (0x00036f7b) heading_pane_cp01_ParamLimits

0x29c0,	// (0x00036f7b) heading_pane_cp01

0x29cc,	// (0x00036f87) loc_req_pane_ParamLimits

0x29cc,	// (0x00036f87) loc_req_pane

0x29dc,	// (0x00036f97) loc_type_pane_ParamLimits

0x29dc,	// (0x00036f97) loc_type_pane

0x29ee,	// (0x00036fa9) loc_type_pane_t1_ParamLimits

0x29ee,	// (0x00036fa9) loc_type_pane_t1

0x2a00,	// (0x00036fbb) loc_type_pane_t2_ParamLimits

0x2a00,	// (0x00036fbb) loc_type_pane_t2

0x2a12,	// (0x00036fcd) loc_type_pane_t3_ParamLimits

0x2a12,	// (0x00036fcd) loc_type_pane_t3

0x0002,

0xf311,	// (0x000438cc) loc_type_pane_t_ParamLimits

0xf311,	// (0x000438cc) loc_type_pane_t

0x2a24,	// (0x00036fdf) list_loc_req_pane

0x2a2e,	// (0x00036fe9) scroll_pane_cp012

0x6bba,	// (0x0003b175) list_single_loc_request_popup_menu_pane_ParamLimits

0x6bba,	// (0x0003b175) list_single_loc_request_popup_menu_pane

0x2a39,	// (0x00036ff4) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x2a39,	// (0x00036ff4) list_single_loc_request_popup_menu_pane_g1

0x2a45,	// (0x00037000) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x2a45,	// (0x00037000) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf318,	// (0x000438d3) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf318,	// (0x000438d3) list_single_loc_request_popup_menu_pane_g

0x2a51,	// (0x0003700c) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x2a51,	// (0x0003700c) list_single_loc_request_popup_menu_pane_t1

0x6bcc,	// (0x0003b187) bg_popup_window_pane_cp03_ParamLimits

0x6bcc,	// (0x0003b187) bg_popup_window_pane_cp03

0x6bda,	// (0x0003b195) heading_loc_req_pane_ParamLimits

0x6bda,	// (0x0003b195) heading_loc_req_pane

0x6be6,	// (0x0003b1a1) popup_dyc_status_message_window_g1_ParamLimits

0x6be6,	// (0x0003b1a1) popup_dyc_status_message_window_g1

0x6bf2,	// (0x0003b1ad) popup_dyc_status_message_window_t1_ParamLimits

0x6bf2,	// (0x0003b1ad) popup_dyc_status_message_window_t1

0x6c04,	// (0x0003b1bf) popup_dyc_status_message_window_t2_ParamLimits

0x6c04,	// (0x0003b1bf) popup_dyc_status_message_window_t2

0x6c16,	// (0x0003b1d1) popup_dyc_status_message_window_t3_ParamLimits

0x6c16,	// (0x0003b1d1) popup_dyc_status_message_window_t3

0x0002,

0xf31d,	// (0x000438d8) popup_dyc_status_message_window_t_ParamLimits

0xf31d,	// (0x000438d8) popup_dyc_status_message_window_t

0x1fe8,	// (0x000365a3) bg_heading_pane_cp01

0x2a73,	// (0x0003702e) heading_loc_req_pane_g1

0x2a7b,	// (0x00037036) heading_loc_req_pane_g2

0x2a83,	// (0x0003703e) heading_loc_req_pane_g3

0x0002,

0xf324,	// (0x000438df) heading_loc_req_pane_g

0x2a8b,	// (0x00037046) heading_loc_req_pane_t1

0x2b12,	// (0x000370cd) bg_popup_sub_pane_cp01_ParamLimits

0x2b12,	// (0x000370cd) bg_popup_sub_pane_cp01

0x2b20,	// (0x000370db) popup_cale_events_window_g1_ParamLimits

0x2b20,	// (0x000370db) popup_cale_events_window_g1

0x2b40,	// (0x000370fb) popup_cale_events_window_g2_ParamLimits

0x2b40,	// (0x000370fb) popup_cale_events_window_g2

0x0001,

0xf358,	// (0x00043913) popup_cale_events_window_g_ParamLimits

0xf358,	// (0x00043913) popup_cale_events_window_g

0x2b60,	// (0x0003711b) popup_cale_events_window_t1_ParamLimits

0x2b60,	// (0x0003711b) popup_cale_events_window_t1

0x2b72,	// (0x0003712d) popup_cale_events_window_t2_ParamLimits

0x2b72,	// (0x0003712d) popup_cale_events_window_t2

0x2bb0,	// (0x0003716b) popup_cale_events_window_t3_ParamLimits

0x2bb0,	// (0x0003716b) popup_cale_events_window_t3

0x2bea,	// (0x000371a5) popup_cale_events_window_t4_ParamLimits

0x2bea,	// (0x000371a5) popup_cale_events_window_t4

0x0003,

0xf35d,	// (0x00043918) popup_cale_events_window_t_ParamLimits

0xf35d,	// (0x00043918) popup_cale_events_window_t

0x6c40,	// (0x0003b1fb) call_type_pane

0xc75f,	// (0x00040d1a) popup_call_status_window_g1

0x6c4c,	// (0x0003b207) popup_call_status_window_g2

0x6c58,	// (0x0003b213) popup_call_status_window_g3

0x0002,

0xf366,	// (0x00043921) popup_call_status_window_g

0x2c20,	// (0x000371db) call_type_pane_g1

0x2c29,	// (0x000371e4) call_type_pane_g2

0x0001,

0xf36d,	// (0x00043928) call_type_pane_g

0x1fe8,	// (0x000365a3) bg_popup_sub_pane_cp02

0x2c32,	// (0x000371ed) listscroll_popup_wml_pane

0x2c3a,	// (0x000371f5) list_wml_pane

0x2c44,	// (0x000371ff) scroll_pane_cp013

0x2c4f,	// (0x0003720a) list_single_graphic_popup_wml_pane_ParamLimits

0x2c4f,	// (0x0003720a) list_single_graphic_popup_wml_pane

0x236b,	// (0x00036926) list_single_graphic_popup_wml_pane_g1

0x2c63,	// (0x0003721e) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf372,	// (0x0004392d) list_single_graphic_popup_wml_pane_g

0x2c6b,	// (0x00037226) list_single_graphic_popup_wml_pane_t1

0x2c79,	// (0x00037234) aid_call_pane

0x223b,	// (0x000367f6) popup_clock_analogue_window_g1

0x223b,	// (0x000367f6) popup_clock_analogue_window_g2

0x6c64,	// (0x0003b21f) popup_clock_analogue_window_g3

0x6c64,	// (0x0003b21f) popup_clock_analogue_window_g4

0x236b,	// (0x00036926) popup_clock_analogue_window_g5

0x0004,

0xf377,	// (0x00043932) popup_clock_analogue_window_g

0x6c6c,	// (0x0003b227) popup_clock_analogue_window_t1

0x6c7a,	// (0x0003b235) clock_digital_number_pane_ParamLimits

0x6c7a,	// (0x0003b235) clock_digital_number_pane

0x6c86,	// (0x0003b241) clock_digital_number_pane_cp02_ParamLimits

0x6c86,	// (0x0003b241) clock_digital_number_pane_cp02

0x6c92,	// (0x0003b24d) clock_digital_number_pane_cp03_ParamLimits

0x6c92,	// (0x0003b24d) clock_digital_number_pane_cp03

0x6c9e,	// (0x0003b259) clock_digital_number_pane_cp04_ParamLimits

0x6c9e,	// (0x0003b259) clock_digital_number_pane_cp04

0x6caa,	// (0x0003b265) clock_digital_separator_pane_ParamLimits

0x6caa,	// (0x0003b265) clock_digital_separator_pane

0x6cb6,	// (0x0003b271) popup_clock_digital_window_t1

0x236b,	// (0x00036926) clock_digital_number_pane_g1

0x236b,	// (0x00036926) clock_digital_number_pane_g2

0x0001,

0xf2e5,	// (0x000438a0) clock_digital_number_pane_g

0x236b,	// (0x00036926) clock_digital_separator_pane_g1

0x236b,	// (0x00036926) clock_digital_separator_pane_g2

0x0001,

0xf2e5,	// (0x000438a0) clock_digital_separator_pane_g

0x1fe8,	// (0x000365a3) bg_popup_window_pane_cp04

0xc76d,	// (0x00040d28) heading_pane_cp03

0xc775,	// (0x00040d30) listscroll_popup_gms_pane

0xc77d,	// (0x00040d38) grid_large_graphic_popup_pane

0xc787,	// (0x00040d42) listscroll_popup_gms_pane_g1

0xc78f,	// (0x00040d4a) listscroll_popup_gms_pane_g2

0x0001,

0xf382,	// (0x0004393d) listscroll_popup_gms_pane_g

0x273e,	// (0x00036cf9) scroll_pane_cp014

0x6cd3,	// (0x0003b28e) cell_large_graphic_popup_pane_ParamLimits

0x6cd3,	// (0x0003b28e) cell_large_graphic_popup_pane

0x6ced,	// (0x0003b2a8) cell_large_graphic_popup_pane_g1_ParamLimits

0x6ced,	// (0x0003b2a8) cell_large_graphic_popup_pane_g1

0xc797,	// (0x00040d52) cell_large_graphic_popup_pane_g2_ParamLimits

0xc797,	// (0x00040d52) cell_large_graphic_popup_pane_g2

0xc7a3,	// (0x00040d5e) cell_large_graphic_popup_pane_g3_ParamLimits

0xc7a3,	// (0x00040d5e) cell_large_graphic_popup_pane_g3

0xc7b0,	// (0x00040d6b) cell_large_graphic_popup_pane_g4_ParamLimits

0xc7b0,	// (0x00040d6b) cell_large_graphic_popup_pane_g4

0x0003,

0xf387,	// (0x00043942) cell_large_graphic_popup_pane_g_ParamLimits

0xf387,	// (0x00043942) cell_large_graphic_popup_pane_g

0xc7c0,	// (0x00040d7b) grid_highlight_pane_cp010

0x236b,	// (0x00036926) bg_popup_call_pane_g1

0xc7ca,	// (0x00040d85) list_single_graphic_popup_conf_pane_ParamLimits

0xc7ca,	// (0x00040d85) list_single_graphic_popup_conf_pane

0xc7dc,	// (0x00040d97) list_highlight_pane_cp01

0xc7e5,	// (0x00040da0) list_single_graphic_popup_conf_pane_g1

0xc7ed,	// (0x00040da8) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf390,	// (0x0004394b) list_single_graphic_popup_conf_pane_g

0xc7f5,	// (0x00040db0) list_single_graphic_popup_conf_pane_t1

0xc803,	// (0x00040dbe) linegrid_cams_pane_g1

0x6cf9,	// (0x0003b2b4) linegrid_cams_pane_g2

0x24b7,	// (0x00036a72) linegrid_cams_pane_g3

0xc80c,	// (0x00040dc7) linegrid_cams_pane_g4

0x6d02,	// (0x0003b2bd) linegrid_cams_pane_g5

0x6d0b,	// (0x0003b2c6) linegrid_cams_pane_g6

0x24c0,	// (0x00036a7b) linegrid_cams_pane_g7

0x0006,

0xf395,	// (0x00043950) linegrid_cams_pane_g

0xc815,	// (0x00040dd0) popup_clock_analogue_window

0xc815,	// (0x00040dd0) popup_clock_digital_window

0x1fe8,	// (0x000365a3) popup_phob_thumbnail_window

0x236b,	// (0x00036926) call_video_uplink_pane_g1

0xc81e,	// (0x00040dd9) call_video_uplink_pane_g2

0x0001,

0xf3a4,	// (0x0004395f) call_video_uplink_pane_g

0xc826,	// (0x00040de1) video_uplink_pane

0xc82e,	// (0x00040de9) mce_image_pane_g1

0x6d16,	// (0x0003b2d1) mce_image_pane_g2

0x6d20,	// (0x0003b2db) mce_image_pane_g3

0x6d2a,	// (0x0003b2e5) mce_image_pane_g4

0x6d32,	// (0x0003b2ed) mce_image_pane_g5

0x0004,

0xf3a9,	// (0x00043964) mce_image_pane_g

0xc838,	// (0x00040df3) control_top_pane_stacon_cp01_ParamLimits

0xc838,	// (0x00040df3) control_top_pane_stacon_cp01

0xc84c,	// (0x00040e07) uni_indicator_pane_stacon_cp01_ParamLimits

0xc84c,	// (0x00040e07) uni_indicator_pane_stacon_cp01

0xc85d,	// (0x00040e18) bg_popup_sub_pane_cp03

0x6d3a,	// (0x0003b2f5) chi_dic_find_pane

0x6d42,	// (0x0003b2fd) listscroll_chi_dic_pane

0x6d4b,	// (0x0003b306) main_pane_chidic_g1

0x6d5e,	// (0x0003b319) chi_dic_find_pane_t1

0xc867,	// (0x00040e22) find_chidic_pane

0xc870,	// (0x00040e2b) chi_dic_list_pane_ParamLimits

0xc870,	// (0x00040e2b) chi_dic_list_pane

0xc881,	// (0x00040e3c) scroll_pane_cp020

0x6d6c,	// (0x0003b327) find_chidic_pane_t1

0x1fe8,	// (0x000365a3) input_focus_pane_cp06

0x6d7b,	// (0x0003b336) list_chi_dic_pane_ParamLimits

0x6d7b,	// (0x0003b336) list_chi_dic_pane

0x6d90,	// (0x0003b34b) list_chi_dic_pane_t1_ParamLimits

0x6d90,	// (0x0003b34b) list_chi_dic_pane_t1

0x1fe8,	// (0x000365a3) list_highlight_pane_cp020

0xc889,	// (0x00040e44) bg_cale_heading_pane_g1

0x6da3,	// (0x0003b35e) bg_cale_heading_pane_g2

0x6dab,	// (0x0003b366) bg_cale_heading_pane_g3

0x6db3,	// (0x0003b36e) bg_cale_heading_pane_g4

0x6dbd,	// (0x0003b378) bg_cale_heading_pane_g5

0x6dc7,	// (0x0003b382) bg_cale_heading_pane_g6

0x6dcf,	// (0x0003b38a) bg_cale_heading_pane_g7

0x6dd7,	// (0x0003b392) bg_cale_heading_pane_g8

0x6de1,	// (0x0003b39c) bg_cale_heading_pane_g9

0x0008,

0xf3b4,	// (0x0004396f) bg_cale_heading_pane_g

0xc889,	// (0x00040e44) bg_cale_side_pane_g1

0x6deb,	// (0x0003b3a6) bg_cale_side_pane_g2

0x6df5,	// (0x0003b3b0) bg_cale_side_pane_g3

0x6dff,	// (0x0003b3ba) bg_cale_side_pane_g4

0x6e09,	// (0x0003b3c4) bg_cale_side_pane_g5

0x6e13,	// (0x0003b3ce) bg_cale_side_pane_g6

0x6e1d,	// (0x0003b3d8) bg_cale_side_pane_g7

0x6e27,	// (0x0003b3e2) bg_cale_side_pane_g8

0x6e2f,	// (0x0003b3ea) bg_cale_side_pane_g9

0x0008,

0xf3c7,	// (0x00043982) bg_cale_side_pane_g

0x6e37,	// (0x0003b3f2) popup_call_status_window_ParamLimits

0x6e37,	// (0x0003b3f2) popup_call_status_window

0xc891,	// (0x00040e4c) stacon_top_pane

0xc899,	// (0x00040e54) status_pane_ParamLimits

0xc899,	// (0x00040e54) status_pane

0xc8ae,	// (0x00040e69) status_small_pane

0xc8b6,	// (0x00040e71) control_pane

0x1fe8,	// (0x000365a3) stacon_bottom_pane

0xc8be,	// (0x00040e79) list_single_mce_smart_pane_t1_ParamLimits

0xc8be,	// (0x00040e79) list_single_mce_smart_pane_t1

0xc8d1,	// (0x00040e8c) list_single_mce_smart_pane_t2_ParamLimits

0xc8d1,	// (0x00040e8c) list_single_mce_smart_pane_t2

0x0001,

0xf3da,	// (0x00043995) list_single_mce_smart_pane_t_ParamLimits

0xf3da,	// (0x00043995) list_single_mce_smart_pane_t

0x6e43,	// (0x0003b3fe) compass_pane

0x6e4e,	// (0x0003b409) main_location2_pane_t1

0x6e64,	// (0x0003b41f) main_location2_pane_t2

0x6e7a,	// (0x0003b435) main_location2_pane_t3

0x0003,

0xf3df,	// (0x0004399a) main_location2_pane_t

0xc8f0,	// (0x00040eab) compass_pane_g1_ParamLimits

0xc8f0,	// (0x00040eab) compass_pane_g1

0x6ec8,	// (0x0003b483) compass_pane_t1

0x6ed7,	// (0x0003b492) compass_pane_t2

0x0005,

0xf3e8,	// (0x000439a3) compass_pane_t

0x6f22,	// (0x0003b4dd) text_secondary_cp61

0xc904,	// (0x00040ebf) navi_pane_cams_g5

0xc927,	// (0x00040ee2) navi_pane_im_t1

0xc935,	// (0x00040ef0) navi_pane_mp_g1_ParamLimits

0xc935,	// (0x00040ef0) navi_pane_mp_g1

0xc949,	// (0x00040f04) navi_pane_mp_g2_ParamLimits

0xc949,	// (0x00040f04) navi_pane_mp_g2

0xc955,	// (0x00040f10) navi_pane_mp_g3_ParamLimits

0xc955,	// (0x00040f10) navi_pane_mp_g3

0x0002,

0xf3fc,	// (0x000439b7) navi_pane_mp_g_ParamLimits

0xf3fc,	// (0x000439b7) navi_pane_mp_g

0xc961,	// (0x00040f1c) navi_pane_mp_t1

0xc96f,	// (0x00040f2a) navi_pane_mp_t2

0x0002,

0xf403,	// (0x000439be) navi_pane_mp_t

0xc9ab,	// (0x00040f66) navi_pane_vt_g1

0xc961,	// (0x00040f1c) navi_pane_vt_t1

0xc9b3,	// (0x00040f6e) navi_slider_pane

0xc9bb,	// (0x00040f76) zooming_pane

0xc9c3,	// (0x00040f7e) navi_slider_pane_g1

0x704f,	// (0x0003b60a) navi_slider_pane_g2

0x0006,

0xf40a,	// (0x000439c5) navi_slider_pane_g

0xc9e7,	// (0x00040fa2) aid_levels_zoom

0xc9ef,	// (0x00040faa) zooming_pane_g1

0xc9f7,	// (0x00040fb2) zooming_pane_g2

0xc9f7,	// (0x00040fb2) zooming_pane_g3

0x0002,

0xf419,	// (0x000439d4) zooming_pane_g

0xc9ff,	// (0x00040fba) level_10_zoom

0xca08,	// (0x00040fc3) level_11_zoom

0xca11,	// (0x00040fcc) level_1_zoom

0xca1a,	// (0x00040fd5) level_2_zoom

0xca23,	// (0x00040fde) level_3_zoom

0xca2c,	// (0x00040fe7) level_4_zoom

0xca35,	// (0x00040ff0) level_5_zoom

0xca3e,	// (0x00040ff9) level_6_zoom

0xca47,	// (0x00041002) level_7_zoom

0xca50,	// (0x0004100b) level_8_zoom

0xca59,	// (0x00041014) level_9_zoom

0xca6a,	// (0x00041025) popup_phob_thumbnail_window_g1

0xca72,	// (0x0004102d) popup_phob_thumbnail_window_g2

0x0001,

0xf420,	// (0x000439db) popup_phob_thumbnail_window_g

0xdd6d,	// (0x00042328) level_1_location

0xdd75,	// (0x00042330) level_2_location

0xdd7d,	// (0x00042338) level_3_location

0xdd85,	// (0x00042340) level_4_location

0xc9bb,	// (0x00040f76) level_5_location

0x7061,	// (0x0003b61c) mce_icon_pane_g1

0x7069,	// (0x0003b624) mce_icon_pane_g2

0x0001,

0xf425,	// (0x000439e0) mce_icon_pane_g

0x7071,	// (0x0003b62c) main_mup_pane_g1_ParamLimits

0x7071,	// (0x0003b62c) main_mup_pane_g1

0x7089,	// (0x0003b644) main_mup_pane_g2_ParamLimits

0x7089,	// (0x0003b644) main_mup_pane_g2

0x70a5,	// (0x0003b660) main_mup_pane_g3_ParamLimits

0x70a5,	// (0x0003b660) main_mup_pane_g3

0x70c1,	// (0x0003b67c) main_mup_pane_g4_ParamLimits

0x70c1,	// (0x0003b67c) main_mup_pane_g4

0x70d5,	// (0x0003b690) main_mup_pane_g5_ParamLimits

0x70d5,	// (0x0003b690) main_mup_pane_g5

0x70f6,	// (0x0003b6b1) main_mup_pane_g6_ParamLimits

0x70f6,	// (0x0003b6b1) main_mup_pane_g6

0x7116,	// (0x0003b6d1) main_mup_pane_g7_ParamLimits

0x7116,	// (0x0003b6d1) main_mup_pane_g7

0x713a,	// (0x0003b6f5) main_mup_pane_g8_ParamLimits

0x713a,	// (0x0003b6f5) main_mup_pane_g8

0x715e,	// (0x0003b719) main_mup_pane_g9_ParamLimits

0x715e,	// (0x0003b719) main_mup_pane_g9

0x7181,	// (0x0003b73c) main_mup_pane_g10_ParamLimits

0x7181,	// (0x0003b73c) main_mup_pane_g10

0x71a4,	// (0x0003b75f) main_mup_pane_g11_ParamLimits

0x71a4,	// (0x0003b75f) main_mup_pane_g11

0x71c4,	// (0x0003b77f) main_mup_pane_g12_ParamLimits

0x71c4,	// (0x0003b77f) main_mup_pane_g12

0x71d2,	// (0x0003b78d) main_mup_pane_g13_ParamLimits

0x71d2,	// (0x0003b78d) main_mup_pane_g13

0x000c,

0xf42a,	// (0x000439e5) main_mup_pane_g_ParamLimits

0xf42a,	// (0x000439e5) main_mup_pane_g

0x71e8,	// (0x0003b7a3) main_mup_pane_t1_ParamLimits

0x71e8,	// (0x0003b7a3) main_mup_pane_t1

0x7207,	// (0x0003b7c2) main_mup_pane_t2_ParamLimits

0x7207,	// (0x0003b7c2) main_mup_pane_t2

0x7221,	// (0x0003b7dc) main_mup_pane_t3_ParamLimits

0x7221,	// (0x0003b7dc) main_mup_pane_t3

0x723b,	// (0x0003b7f6) main_mup_pane_t4_ParamLimits

0x723b,	// (0x0003b7f6) main_mup_pane_t4

0x724d,	// (0x0003b808) main_mup_pane_t5_ParamLimits

0x724d,	// (0x0003b808) main_mup_pane_t5

0x725f,	// (0x0003b81a) main_mup_pane_t6_ParamLimits

0x725f,	// (0x0003b81a) main_mup_pane_t6

0x0005,

0xf445,	// (0x00043a00) main_mup_pane_t_ParamLimits

0xf445,	// (0x00043a00) main_mup_pane_t

0x7275,	// (0x0003b830) mup_progress_pane_ParamLimits

0x7275,	// (0x0003b830) mup_progress_pane

0x7281,	// (0x0003b83c) mup_visualizer_pane_ParamLimits

0x7281,	// (0x0003b83c) mup_visualizer_pane

0x72bb,	// (0x0003b876) mup_volume_pane_ParamLimits

0x72bb,	// (0x0003b876) mup_volume_pane

0xc75f,	// (0x00040d1a) mup_visualizer_pane_g1_ParamLimits

0xc75f,	// (0x00040d1a) mup_visualizer_pane_g1

0xc75f,	// (0x00040d1a) mup_visualizer_pane_g2_ParamLimits

0xc75f,	// (0x00040d1a) mup_visualizer_pane_g2

0xc8f0,	// (0x00040eab) mup_visualizer_pane_g3_ParamLimits

0xc8f0,	// (0x00040eab) mup_visualizer_pane_g3

0x0002,

0xf452,	// (0x00043a0d) mup_visualizer_pane_g_ParamLimits

0xf452,	// (0x00043a0d) mup_visualizer_pane_g

0x236b,	// (0x00036926) mup_volume_pane_g1

0xca82,	// (0x0004103d) mup_volume_pane_g2

0x0001,

0xf459,	// (0x00043a14) mup_volume_pane_g

0x236b,	// (0x00036926) mup_progress_pane_g1

0xca8b,	// (0x00041046) mup_progress_pane_g2

0xca94,	// (0x0004104f) mup_progress_pane_g3

0x0002,

0xf45e,	// (0x00043a19) mup_progress_pane_g

0x1fe8,	// (0x000365a3) bg_popup_window_pane_cp05

0xca9d,	// (0x00041058) heading_pane_cp02_ParamLimits

0xca9d,	// (0x00041058) heading_pane_cp02

0xcab9,	// (0x00041074) list_popup_blid_pane

0xcac1,	// (0x0004107c) list_blid_sat_info_pane_ParamLimits

0xcac1,	// (0x0004107c) list_blid_sat_info_pane

0xcad4,	// (0x0004108f) list_blid_sat_info_pane_g1

0xcadc,	// (0x00041097) list_blid_sat_info_pane_t1

0x73da,	// (0x0003b995) mup_equalizer_pane_ParamLimits

0x73da,	// (0x0003b995) mup_equalizer_pane

0x73fb,	// (0x0003b9b6) mup_equalizer_pane_cp1_ParamLimits

0x73fb,	// (0x0003b9b6) mup_equalizer_pane_cp1

0x741c,	// (0x0003b9d7) mup_equalizer_pane_cp2_ParamLimits

0x741c,	// (0x0003b9d7) mup_equalizer_pane_cp2

0x743d,	// (0x0003b9f8) mup_equalizer_pane_cp3_ParamLimits

0x743d,	// (0x0003b9f8) mup_equalizer_pane_cp3

0x7462,	// (0x0003ba1d) mup_equalizer_pane_cp4_ParamLimits

0x7462,	// (0x0003ba1d) mup_equalizer_pane_cp4

0x7487,	// (0x0003ba42) mup_equalizer_pane_cp5

0x749f,	// (0x0003ba5a) mup_equalizer_pane_cp6

0x74b7,	// (0x0003ba72) mup_equalizer_pane_cp7

0xdc87,	// (0x00042242) bg_popup_call_poc_act_pane_g9

0xdc8f,	// (0x0004224a) bg_popup_call_poc_act_pane_g10

0xdc97,	// (0x00042252) bg_popup_call_poc_act_pane_g11

0x000a,

0x2243,	// (0x000367fe) mup_scale_pane

0x236b,	// (0x00036926) mup_scale_pane_g1

0xcaea,	// (0x000410a5) mup_scale_pane_g2

0x0006,

0xf47a,	// (0x00043a35) mup_scale_pane_g

0xcb0e,	// (0x000410c9) msg_data_pane

0xcb16,	// (0x000410d1) scroll_pane_cp017

0x74e1,	// (0x0003ba9c) bg_list_pane_cp04_ParamLimits

0x74e1,	// (0x0003ba9c) bg_list_pane_cp04

0xcb1e,	// (0x000410d9) msg_data_pane_g1

0x7501,	// (0x0003babc) msg_data_pane_g2

0x750b,	// (0x0003bac6) msg_data_pane_g3

0x7515,	// (0x0003bad0) msg_data_pane_g4

0x751d,	// (0x0003bad8) msg_data_pane_g5

0x7525,	// (0x0003bae0) msg_data_pane_g6

0x752d,	// (0x0003bae8) msg_data_pane_g7

0x0006,

0xf489,	// (0x00043a44) msg_data_pane_g

0x7535,	// (0x0003baf0) msg_text_pane_ParamLimits

0x7535,	// (0x0003baf0) msg_text_pane

0x755d,	// (0x0003bb18) qrid_highlight_pane_cp011_ParamLimits

0x755d,	// (0x0003bb18) qrid_highlight_pane_cp011

0x1fe8,	// (0x000365a3) msg_body_pane

0x1fe8,	// (0x000365a3) msg_header_pane

0xcb2f,	// (0x000410ea) input_focus_pane_cp07

0x7573,	// (0x0003bb2e) msg_header_pane_t1_ParamLimits

0x7573,	// (0x0003bb2e) msg_header_pane_t1

0x3d4f,	// (0x0003830a) msg_header_pane_t2_ParamLimits

0x3d4f,	// (0x0003830a) msg_header_pane_t2

0x0001,

0xf49d,	// (0x00043a58) msg_header_pane_t_ParamLimits

0xf49d,	// (0x00043a58) msg_header_pane_t

0xcb44,	// (0x000410ff) msg_body_pane_g1

0x3d61,	// (0x0003831c) msg_body_pane_t1_ParamLimits

0x3d61,	// (0x0003831c) msg_body_pane_t1

0x3d92,	// (0x0003834d) msg_body_pane_t2_ParamLimits

0x3d92,	// (0x0003834d) msg_body_pane_t2

0x3da4,	// (0x0003835f) msg_body_pane_t3_ParamLimits

0x3da4,	// (0x0003835f) msg_body_pane_t3

0x0002,

0xf4a2,	// (0x00043a5d) msg_body_pane_t_ParamLimits

0xf4a2,	// (0x00043a5d) msg_body_pane_t

0x75d9,	// (0x0003bb94) main_viewer_pane_g1_ParamLimits

0x75d9,	// (0x0003bb94) main_viewer_pane_g1

0x75e5,	// (0x0003bba0) main_viewer_pane_g2_ParamLimits

0x75e5,	// (0x0003bba0) main_viewer_pane_g2

0x75f1,	// (0x0003bbac) main_viewer_pane_g3_ParamLimits

0x75f1,	// (0x0003bbac) main_viewer_pane_g3

0x7602,	// (0x0003bbbd) main_viewer_pane_g4_ParamLimits

0x7602,	// (0x0003bbbd) main_viewer_pane_g4

0x7613,	// (0x0003bbce) main_viewer_pane_g5_ParamLimits

0x7613,	// (0x0003bbce) main_viewer_pane_g5

0x7613,	// (0x0003bbce) main_viewer_pane_g7_ParamLimits

0x7613,	// (0x0003bbce) main_viewer_pane_g7

0x7625,	// (0x0003bbe0) main_viewer_pane_g8_ParamLimits

0x7625,	// (0x0003bbe0) main_viewer_pane_g8

0x0007,

0xf4b2,	// (0x00043a6d) main_viewer_pane_g_ParamLimits

0xf4b2,	// (0x00043a6d) main_viewer_pane_g

0xcb4c,	// (0x00041107) viewer_content_pane_ParamLimits

0xcb4c,	// (0x00041107) viewer_content_pane

0x765d,	// (0x0003bc18) main_postcard_pane_g1_ParamLimits

0x765d,	// (0x0003bc18) main_postcard_pane_g1

0x766b,	// (0x0003bc26) main_postcard_pane_g2_ParamLimits

0x766b,	// (0x0003bc26) main_postcard_pane_g2

0x7679,	// (0x0003bc34) main_postcard_pane_g3_ParamLimits

0x7679,	// (0x0003bc34) main_postcard_pane_g3

0x0005,

0xf4c3,	// (0x00043a7e) main_postcard_pane_g_ParamLimits

0xf4c3,	// (0x00043a7e) main_postcard_pane_g

0x7689,	// (0x0003bc44) main_postcard_pane_g4

0xde74,	// (0x0004242f) smil_status_volume_pane_g2

0x76b5,	// (0x0003bc70) postcard_pane_ParamLimits

0x76b5,	// (0x0003bc70) postcard_pane

0xc75f,	// (0x00040d1a) postcard_pane_g1_ParamLimits

0xc75f,	// (0x00040d1a) postcard_pane_g1

0x76ef,	// (0x0003bcaa) postcard_pane_g2_ParamLimits

0x76ef,	// (0x0003bcaa) postcard_pane_g2

0x76fb,	// (0x0003bcb6) postcard_pane_g3_ParamLimits

0x76fb,	// (0x0003bcb6) postcard_pane_g3

0xcb5a,	// (0x00041115) postcard_pane_g4_ParamLimits

0xcb5a,	// (0x00041115) postcard_pane_g4

0x7707,	// (0x0003bcc2) postcard_pane_g5_ParamLimits

0x7707,	// (0x0003bcc2) postcard_pane_g5

0x7713,	// (0x0003bcce) postcard_pane_g6_ParamLimits

0x7713,	// (0x0003bcce) postcard_pane_g6

0xcb68,	// (0x00041123) postcard_pane_g7_ParamLimits

0xcb68,	// (0x00041123) postcard_pane_g7

0x0006,

0xf4d0,	// (0x00043a8b) postcard_pane_g_ParamLimits

0xf4d0,	// (0x00043a8b) postcard_pane_g

0x7721,	// (0x0003bcdc) main_mp2_pane_g1_ParamLimits

0x7721,	// (0x0003bcdc) main_mp2_pane_g1

0x772f,	// (0x0003bcea) main_mp2_pane_g2_ParamLimits

0x772f,	// (0x0003bcea) main_mp2_pane_g2

0x773b,	// (0x0003bcf6) main_mp2_pane_g3_ParamLimits

0x773b,	// (0x0003bcf6) main_mp2_pane_g3

0x0002,

0xf4df,	// (0x00043a9a) main_mp2_pane_g_ParamLimits

0xf4df,	// (0x00043a9a) main_mp2_pane_g

0x7747,	// (0x0003bd02) main_mp2_pane_t1_ParamLimits

0x7747,	// (0x0003bd02) main_mp2_pane_t1

0x775e,	// (0x0003bd19) main_mp2_pane_t2_ParamLimits

0x775e,	// (0x0003bd19) main_mp2_pane_t2

0x7772,	// (0x0003bd2d) main_mp2_pane_t3_ParamLimits

0x7772,	// (0x0003bd2d) main_mp2_pane_t3

0x0002,

0xf4e6,	// (0x00043aa1) main_mp2_pane_t_ParamLimits

0xf4e6,	// (0x00043aa1) main_mp2_pane_t

0xcb76,	// (0x00041131) pec_content_pane_ParamLimits

0xcb76,	// (0x00041131) pec_content_pane

0x273e,	// (0x00036cf9) scroll_pane_cp015

0xcb88,	// (0x00041143) pec_attribute_pane_ParamLimits

0xcb88,	// (0x00041143) pec_attribute_pane

0x7784,	// (0x0003bd3f) pec_content_pane_g1_ParamLimits

0x7784,	// (0x0003bd3f) pec_content_pane_g1

0xcb98,	// (0x00041153) pec_content_pane_t1_ParamLimits

0xcb98,	// (0x00041153) pec_content_pane_t1

0xcbaa,	// (0x00041165) pec_content_pane_t2_ParamLimits

0xcbaa,	// (0x00041165) pec_content_pane_t2

0x0001,

0xf4ed,	// (0x00043aa8) pec_content_pane_t_ParamLimits

0xf4ed,	// (0x00043aa8) pec_content_pane_t

0x7790,	// (0x0003bd4b) list_single_graphic_pane_cp01_ParamLimits

0x7790,	// (0x0003bd4b) list_single_graphic_pane_cp01

0x2243,	// (0x000367fe) bg_popup_sub_pane_cp04

0xcbbc,	// (0x00041177) popup_mup_playback_window_g1

0xcbc8,	// (0x00041183) popup_mup_playback_window_t1

0xcbdd,	// (0x00041198) popup_mup_playback_window_t2

0x0001,

0xf4f2,	// (0x00043aad) popup_mup_playback_window_t

0xcc14,	// (0x000411cf) main_image_pane_g1_ParamLimits

0xcc14,	// (0x000411cf) main_image_pane_g1

0xcc57,	// (0x00041212) scroll_pane_cp018_ParamLimits

0xcc57,	// (0x00041212) scroll_pane_cp018

0xcc6f,	// (0x0004122a) scroll_pane_cp016_ParamLimits

0xcc6f,	// (0x0004122a) scroll_pane_cp016

0x781e,	// (0x0003bdd9) smil2_image_pane_ParamLimits

0x781e,	// (0x0003bdd9) smil2_image_pane

0x7854,	// (0x0003be0f) smil2_root_pane_ParamLimits

0x7854,	// (0x0003be0f) smil2_root_pane

0x7880,	// (0x0003be3b) smil2_text_pane_ParamLimits

0x7880,	// (0x0003be3b) smil2_text_pane

0x1fe8,	// (0x000365a3) bg_list_pane_cp06

0xccab,	// (0x00041266) grid_radio_pane

0x1fe8,	// (0x000365a3) bg_popup_window_pane_cp06

0xccb5,	// (0x00041270) main_fmradio_pane_t1

0xc76d,	// (0x00040d28) heading_pane_cp04

0xccc3,	// (0x0004127e) main_fmradio_pane_t2

0xdc9f,	// (0x0004225a) popup_cale_lunar_info_window_g1

0xccd1,	// (0x0004128c) main_fmradio_pane_t3

0xdca7,	// (0x00042262) popup_cale_lunar_info_window_g2

0xcce1,	// (0x0004129c) main_fmradio_pane_t4

0x0001,

0xccef,	// (0x000412aa) main_fmradio_pane_t5

0x0004,

0xf5cd,	// (0x00043b88) popup_cale_lunar_info_window_g

0xf507,	// (0x00043ac2) main_fmradio_pane_t

0xccfd,	// (0x000412b8) wait_bar_pane_cp03

0xcd05,	// (0x000412c0) cell_fmradio_pane_ParamLimits

0xcd05,	// (0x000412c0) cell_fmradio_pane

0xcb68,	// (0x00041123) cell_fmradio_pane_g1_ParamLimits

0xcb68,	// (0x00041123) cell_fmradio_pane_g1

0x1fe8,	// (0x000365a3) grid_highlight_pane_cp011

0xcd1a,	// (0x000412d5) poc_content_pane_ParamLimits

0xcd1a,	// (0x000412d5) poc_content_pane

0xcd2c,	// (0x000412e7) scroll_pane_cp019

0x78c0,	// (0x0003be7b) popup_call_poc_act_window_ParamLimits

0x78c0,	// (0x0003be7b) popup_call_poc_act_window

0x78cd,	// (0x0003be88) popup_call_poc_inact_window_ParamLimits

0x78cd,	// (0x0003be88) popup_call_poc_inact_window

0xf5a4,	// (0x00043b5f) bg_popup_call_poc_act_pane_g

0xdc17,	// (0x000421d2) bg_popup_call_poc_inact_pane_g1

0xdc1f,	// (0x000421da) bg_popup_call_poc_inact_pane_g2

0xcd34,	// (0x000412ef) popup_call_poc_act_window_g2

0xdc27,	// (0x000421e2) bg_popup_call_poc_inact_pane_g3

0xdc2f,	// (0x000421ea) bg_popup_call_poc_inact_pane_g4

0xdc37,	// (0x000421f2) bg_popup_call_poc_inact_pane_g5

0xcd3c,	// (0x000412f7) popup_call_poc_act_window_t1_ParamLimits

0xcd3c,	// (0x000412f7) popup_call_poc_act_window_t1

0xcd64,	// (0x0004131f) popup_call_poc_act_window_t2_ParamLimits

0xcd64,	// (0x0004131f) popup_call_poc_act_window_t2

0xcd8c,	// (0x00041347) popup_call_poc_act_window_t3_ParamLimits

0xcd8c,	// (0x00041347) popup_call_poc_act_window_t3

0xcdb4,	// (0x0004136f) popup_call_poc_act_window_t4_ParamLimits

0xcdb4,	// (0x0004136f) popup_call_poc_act_window_t4

0x0003,

0xf512,	// (0x00043acd) popup_call_poc_act_window_t_ParamLimits

0xf512,	// (0x00043acd) popup_call_poc_act_window_t

0xdc3f,	// (0x000421fa) bg_popup_call_poc_inact_pane_g6

0xdc47,	// (0x00042202) bg_popup_call_poc_inact_pane_g7

0xdc4f,	// (0x0004220a) bg_popup_call_poc_inact_pane_g8

0xcdc6,	// (0x00041381) popup_call_poc_inact_window_g2

0xdc57,	// (0x00042212) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf591,	// (0x00043b4c) bg_popup_call_poc_inact_pane_g

0xcdce,	// (0x00041389) popup_call_poc_inact_window_t1_ParamLimits

0xcdce,	// (0x00041389) popup_call_poc_inact_window_t1

0xcde3,	// (0x0004139e) popup_call_poc_inact_window_t2_ParamLimits

0xcde3,	// (0x0004139e) popup_call_poc_inact_window_t2

0xcdf8,	// (0x000413b3) popup_call_poc_inact_window_t3_ParamLimits

0xcdf8,	// (0x000413b3) popup_call_poc_inact_window_t3

0x0002,

0xf51b,	// (0x00043ad6) popup_call_poc_inact_window_t_ParamLimits

0xf51b,	// (0x00043ad6) popup_call_poc_inact_window_t

0xddd4,	// (0x0004238f) context_pane_ParamLimits

0x7f1f,	// (0x0003c4da) signal_pane_ParamLimits

0xc9bb,	// (0x00040f76) main_call2_pane

0x7e8f,	// (0x0003c44a) popup_phob_thumbnail2_window_ParamLimits

0x7e8f,	// (0x0003c44a) popup_phob_thumbnail2_window

0x7587,	// (0x0003bb42) aid_hotspot_pointer_arrow_pane

0x758f,	// (0x0003bb4a) aid_hotspot_pointer_hand_pane

0x7bf2,	// (0x0003c1ad) phob_pre_status_pane_g5

0x5a33,	// (0x00039fee) cams_zoom_pane_ParamLimits

0x5a3f,	// (0x00039ffa) image_vga_pane_ParamLimits

0x5a4e,	// (0x0003a009) main_camera_pane_g1_ParamLimits

0x5a5c,	// (0x0003a017) main_camera_pane_g2_ParamLimits

0x5a68,	// (0x0003a023) main_camera_pane_g3_ParamLimits

0x5a76,	// (0x0003a031) main_camera_pane_g4_ParamLimits

0x5a84,	// (0x0003a03f) main_camera_pane_g5_ParamLimits

0x5a92,	// (0x0003a04d) main_camera_pane_g6_ParamLimits

0x5aa0,	// (0x0003a05b) main_camera_pane_g7_ParamLimits

0xf21a,	// (0x000437d5) main_camera_pane_g_ParamLimits

0x5aae,	// (0x0003a069) main_camera_pane_t1_ParamLimits

0x5ac0,	// (0x0003a07b) main_camera_pane_t2_ParamLimits

0xf22b,	// (0x000437e6) main_camera_pane_t_ParamLimits

0x2243,	// (0x000367fe) bg_popup_preview_window_pane_cp01_ParamLimits

0x2243,	// (0x000367fe) bg_popup_preview_window_pane_cp01

0xce0d,	// (0x000413c8) popup_phob_thumbnail2_window_g1_ParamLimits

0xce0d,	// (0x000413c8) popup_phob_thumbnail2_window_g1

0x1fe8,	// (0x000365a3) call2_cli_visual_pane

0x78e9,	// (0x0003bea4) popup_call2_audio_conf_window_ParamLimits

0x78e9,	// (0x0003bea4) popup_call2_audio_conf_window

0x7902,	// (0x0003bebd) popup_call2_audio_first_window_ParamLimits

0x7902,	// (0x0003bebd) popup_call2_audio_first_window

0x79a0,	// (0x0003bf5b) popup_call2_audio_in_window_ParamLimits

0x79a0,	// (0x0003bf5b) popup_call2_audio_in_window

0x79e4,	// (0x0003bf9f) popup_call2_audio_out_window_ParamLimits

0x79e4,	// (0x0003bf9f) popup_call2_audio_out_window

0x7a4e,	// (0x0003c009) popup_call2_audio_second_window_ParamLimits

0x7a4e,	// (0x0003c009) popup_call2_audio_second_window

0x7aac,	// (0x0003c067) popup_call2_audio_wait_window_ParamLimits

0x7aac,	// (0x0003c067) popup_call2_audio_wait_window

0x1fe8,	// (0x000365a3) bg_popup_call2_act_pane_cp03

0x2225,	// (0x000367e0) list_conf_pane_cp

0xce19,	// (0x000413d4) popup_call2_audio_conf_window_t1

0xce27,	// (0x000413e2) list_single_graphic_popup_conf2_pane_ParamLimits

0xce27,	// (0x000413e2) list_single_graphic_popup_conf2_pane

0xc7dc,	// (0x00040d97) list_highlight_pane_cp04

0xce3a,	// (0x000413f5) list_single_graphic_popup_conf2_pane_g1

0xc7ed,	// (0x00040da8) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf522,	// (0x00043add) list_single_graphic_popup_conf2_pane_g

0xce44,	// (0x000413ff) list_single_graphic_popup_conf2_pane_t1

0xce52,	// (0x0004140d) bg_popup_call2_act_pane_cp01_ParamLimits

0xce52,	// (0x0004140d) bg_popup_call2_act_pane_cp01

0xcedc,	// (0x00041497) call_type_pane_cp05_ParamLimits

0xcedc,	// (0x00041497) call_type_pane_cp05

0xcf30,	// (0x000414eb) popup_call2_audio_second_window_g1_ParamLimits

0xcf30,	// (0x000414eb) popup_call2_audio_second_window_g1

0xcf84,	// (0x0004153f) popup_call2_audio_second_window_g2_ParamLimits

0xcf84,	// (0x0004153f) popup_call2_audio_second_window_g2

0x0002,

0xf527,	// (0x00043ae2) popup_call2_audio_second_window_g_ParamLimits

0xf527,	// (0x00043ae2) popup_call2_audio_second_window_g

0xcfe9,	// (0x000415a4) popup_call2_audio_second_window_t1_ParamLimits

0xcfe9,	// (0x000415a4) popup_call2_audio_second_window_t1

0xd0a4,	// (0x0004165f) popup_call2_audio_second_window_t2_ParamLimits

0xd0a4,	// (0x0004165f) popup_call2_audio_second_window_t2

0xd0f7,	// (0x000416b2) popup_call2_audio_second_window_t3_ParamLimits

0xd0f7,	// (0x000416b2) popup_call2_audio_second_window_t3

0x0003,

0xf52e,	// (0x00043ae9) popup_call2_audio_second_window_t_ParamLimits

0xf52e,	// (0x00043ae9) popup_call2_audio_second_window_t

0x1fe8,	// (0x000365a3) bg_popup_call2_in_pane_cp02

0x1ff2,	// (0x000365ad) call_type_pane_cp04

0x1ffa,	// (0x000365b5) popup_call2_audio_wait_window_g1

0x2002,	// (0x000365bd) popup_call2_audio_wait_window_g2

0x0001,

0xf107,	// (0x000436c2) popup_call2_audio_wait_window_g

0x200a,	// (0x000365c5) popup_call2_audio_wait_window_t3

0xd1ea,	// (0x000417a5) bg_popup_call2_act_pane_ParamLimits

0xd1ea,	// (0x000417a5) bg_popup_call2_act_pane

0xd2aa,	// (0x00041865) call_type_pane_cp03_ParamLimits

0xd2aa,	// (0x00041865) call_type_pane_cp03

0xd30e,	// (0x000418c9) popup_call2_audio_first_window_g1_ParamLimits

0xd30e,	// (0x000418c9) popup_call2_audio_first_window_g1

0xd37e,	// (0x00041939) popup_call2_audio_first_window_g2_ParamLimits

0xd37e,	// (0x00041939) popup_call2_audio_first_window_g2

0xc75f,	// (0x00040d1a) popup_call2_audio_first_window_g3_ParamLimits

0xc75f,	// (0x00040d1a) popup_call2_audio_first_window_g3

0x0004,

0xf537,	// (0x00043af2) popup_call2_audio_first_window_g_ParamLimits

0xf537,	// (0x00043af2) popup_call2_audio_first_window_g

0xd45c,	// (0x00041a17) popup_call2_audio_first_window_t1_ParamLimits

0xd45c,	// (0x00041a17) popup_call2_audio_first_window_t1

0xd55f,	// (0x00041b1a) popup_call2_audio_first_window_t4_ParamLimits

0xd55f,	// (0x00041b1a) popup_call2_audio_first_window_t4

0xd642,	// (0x00041bfd) popup_call2_audio_first_window_t5_ParamLimits

0xd642,	// (0x00041bfd) popup_call2_audio_first_window_t5

0x0003,

0xf542,	// (0x00043afd) popup_call2_audio_first_window_t_ParamLimits

0xf542,	// (0x00043afd) popup_call2_audio_first_window_t

0x223b,	// (0x000367f6) bg_popup_call2_act_pane_g1

0xdcb1,	// (0x0004226c) popup_cale_lunar_info_window_t1

0xdcbf,	// (0x0004227a) popup_cale_lunar_info_window_t2

0xdccd,	// (0x00042288) popup_cale_lunar_info_window_t3

0x1fe8,	// (0x000365a3) bg_popup_call2_bubble_pane

0xd743,	// (0x00041cfe) bg_popup_call2_in_pane_cp01_ParamLimits

0xd743,	// (0x00041cfe) bg_popup_call2_in_pane_cp01

0x1cc4,	// (0x0003627f) call_type_pane_cp02

0xd78b,	// (0x00041d46) popup_call2_audio_out_window_g1_ParamLimits

0xd78b,	// (0x00041d46) popup_call2_audio_out_window_g1

0xd7b7,	// (0x00041d72) popup_call2_audio_out_window_g2_ParamLimits

0xd7b7,	// (0x00041d72) popup_call2_audio_out_window_g2

0xd7df,	// (0x00041d9a) popup_call2_audio_out_window_g3_ParamLimits

0xd7df,	// (0x00041d9a) popup_call2_audio_out_window_g3

0x0003,

0xf54b,	// (0x00043b06) popup_call2_audio_out_window_g_ParamLimits

0xf54b,	// (0x00043b06) popup_call2_audio_out_window_g

0xd81a,	// (0x00041dd5) popup_call2_audio_out_window_t1_ParamLimits

0xd81a,	// (0x00041dd5) popup_call2_audio_out_window_t1

0xd879,	// (0x00041e34) popup_call2_audio_out_window_t2_ParamLimits

0xd879,	// (0x00041e34) popup_call2_audio_out_window_t2

0xd8cd,	// (0x00041e88) popup_call2_audio_out_window_t3_ParamLimits

0xd8cd,	// (0x00041e88) popup_call2_audio_out_window_t3

0xd8e3,	// (0x00041e9e) popup_call2_audio_out_window_t4_ParamLimits

0xd8e3,	// (0x00041e9e) popup_call2_audio_out_window_t4

0xd8f9,	// (0x00041eb4) popup_call2_audio_out_window_t5_ParamLimits

0xd8f9,	// (0x00041eb4) popup_call2_audio_out_window_t5

0x0005,

0xf554,	// (0x00043b0f) popup_call2_audio_out_window_t_ParamLimits

0xf554,	// (0x00043b0f) popup_call2_audio_out_window_t

0xd95d,	// (0x00041f18) bg_popup_call2_in_pane_ParamLimits

0xd95d,	// (0x00041f18) bg_popup_call2_in_pane

0xd9b9,	// (0x00041f74) popup_call2_audio_in_window_g1_ParamLimits

0xd9b9,	// (0x00041f74) popup_call2_audio_in_window_g1

0xd9f1,	// (0x00041fac) popup_call2_audio_in_window_g2_ParamLimits

0xd9f1,	// (0x00041fac) popup_call2_audio_in_window_g2

0xda29,	// (0x00041fe4) popup_call2_audio_in_window_g3_ParamLimits

0xda29,	// (0x00041fe4) popup_call2_audio_in_window_g3

0x0003,

0xf561,	// (0x00043b1c) popup_call2_audio_in_window_g_ParamLimits

0xf561,	// (0x00043b1c) popup_call2_audio_in_window_g

0xda81,	// (0x0004203c) popup_call2_audio_in_window_t1_ParamLimits

0xda81,	// (0x0004203c) popup_call2_audio_in_window_t1

0xdb01,	// (0x000420bc) popup_call2_audio_in_window_t2_ParamLimits

0xdb01,	// (0x000420bc) popup_call2_audio_in_window_t2

0xdb81,	// (0x0004213c) popup_call2_audio_in_window_t3_ParamLimits

0xdb81,	// (0x0004213c) popup_call2_audio_in_window_t3

0xdb9b,	// (0x00042156) popup_call2_audio_in_window_t4_ParamLimits

0xdb9b,	// (0x00042156) popup_call2_audio_in_window_t4

0xdbad,	// (0x00042168) popup_call2_audio_in_window_t5_ParamLimits

0xdbad,	// (0x00042168) popup_call2_audio_in_window_t5

0xdbc2,	// (0x0004217d) popup_call2_audio_in_window_t6_ParamLimits

0xdbc2,	// (0x0004217d) popup_call2_audio_in_window_t6

0x0005,

0xf56a,	// (0x00043b25) popup_call2_audio_in_window_t_ParamLimits

0xf56a,	// (0x00043b25) popup_call2_audio_in_window_t

0x223b,	// (0x000367f6) bg_popup_call2_in_pane_g1

0xdcdb,	// (0x00042296) popup_cale_lunar_info_window_t4

0x0003,

0xf5d2,	// (0x00043b8d) popup_cale_lunar_info_window_t

0x2243,	// (0x000367fe) bg_popup_call2_rect_pane_ParamLimits

0x2243,	// (0x000367fe) bg_popup_call2_rect_pane

0x1fe8,	// (0x000365a3) call2_cli_visual_graphic_pane

0x1fe8,	// (0x000365a3) call2_cli_visual_text_pane

0x7fa4,	// (0x0003c55f) smil_status_volume_pane_g3

0x0002,

0x236b,	// (0x00036926) call2_cli_visual_graphic_pane_g1

0x236b,	// (0x00036926) call2_cli_visual_graphic_pane_g2

0x236b,	// (0x00036926) call2_cli_visual_graphic_pane_g3

0x0002,

0xf577,	// (0x00043b32) call2_cli_visual_graphic_pane_g

0xdbd7,	// (0x00042192) bg_popup_call2_rect_pane_g1

0x2417,	// (0x000369d2) bg_popup_call2_rect_pane_g2

0xdbdf,	// (0x0004219a) bg_popup_call2_rect_pane_g3

0xdbe7,	// (0x000421a2) bg_popup_call2_rect_pane_g4

0xdbef,	// (0x000421aa) bg_popup_call2_rect_pane_g5

0xdbf7,	// (0x000421b2) bg_popup_call2_rect_pane_g6

0xdbff,	// (0x000421ba) bg_popup_call2_rect_pane_g7

0xdc07,	// (0x000421c2) bg_popup_call2_rect_pane_g8

0xdc0f,	// (0x000421ca) bg_popup_call2_rect_pane_g9

0x0008,

0xf57e,	// (0x00043b39) bg_popup_call2_rect_pane_g

0xdc17,	// (0x000421d2) bg_popup_call2_bubble_pane_g1

0xdc1f,	// (0x000421da) bg_popup_call2_bubble_pane_g2

0xdc27,	// (0x000421e2) bg_popup_call2_bubble_pane_g3

0xdc2f,	// (0x000421ea) bg_popup_call2_bubble_pane_g4

0xdc37,	// (0x000421f2) bg_popup_call2_bubble_pane_g5

0xdc3f,	// (0x000421fa) bg_popup_call2_bubble_pane_g6

0xdc47,	// (0x00042202) bg_popup_call2_bubble_pane_g7

0xdc4f,	// (0x0004220a) bg_popup_call2_bubble_pane_g8

0xdc57,	// (0x00042212) bg_popup_call2_bubble_pane_g9

0x0008,

0xf591,	// (0x00043b4c) bg_popup_call2_bubble_pane_g

0x5532,	// (0x00039aed) aid_cale_week_size_cell_pane

0x5ad4,	// (0x0003a08f) aid_cams_cif_uncrop_pane_ParamLimits

0x5ad4,	// (0x0003a08f) aid_cams_cif_uncrop_pane

0x5c31,	// (0x0003a1ec) aid_cams_size_cell_ParamLimits

0x5c31,	// (0x0003a1ec) aid_cams_size_cell

0x5c3d,	// (0x0003a1f8) grid_cams_pane_ParamLimits

0x5c4b,	// (0x0003a206) linegrid_cams_pane_ParamLimits

0x5d1c,	// (0x0003a2d7) call_video_pane_t1

0x5d39,	// (0x0003a2f4) call_video_pane_t2

0x0001,

0xf27e,	// (0x00043839) call_video_pane_t

0x61f3,	// (0x0003a7ae) aid_cale_month_size_cell_pane_ParamLimits

0x61f3,	// (0x0003a7ae) aid_cale_month_size_cell_pane

0xf61b,	// (0x00043bd6) smil_status_volume_pane_g

0x7fb1,	// (0x0003c56c) volume_smil_pane_ParamLimits

0x4d08,	// (0x000392c3) aid_popup2_width_pane

0x5446,	// (0x00039a01) cell_qdial_pane_g4_ParamLimits

0x5446,	// (0x00039a01) cell_qdial_pane_g4

0x6ea4,	// (0x0003b45f) aid_blid_cardinal_pane_ParamLimits

0x6eb4,	// (0x0003b46f) aid_blid_destination_pane_ParamLimits

0x6eb4,	// (0x0003b46f) aid_blid_destination_pane

0x2243,	// (0x000367fe) bg_popup_call_poc_act_pane_ParamLimits

0x2243,	// (0x000367fe) bg_popup_call_poc_act_pane

0x2243,	// (0x000367fe) bg_popup_call_poc_inact_pane_ParamLimits

0x2243,	// (0x000367fe) bg_popup_call_poc_inact_pane

0xdc5f,	// (0x0004221a) bg_popup_call_poc_act_pane_g1

0xdc67,	// (0x00042222) bg_popup_call_poc_act_pane_g2

0xdc6f,	// (0x0004222a) bg_popup_call_poc_act_pane_g3

0xdc2f,	// (0x000421ea) bg_popup_call_poc_act_pane_g4

0xdc37,	// (0x000421f2) bg_popup_call_poc_act_pane_g5

0xdc77,	// (0x00042232) bg_popup_call_poc_act_pane_g6

0xdc47,	// (0x00042202) bg_popup_call_poc_act_pane_g7

0xdc7f,	// (0x0004223a) bg_popup_call_poc_act_pane_g8

0x1fe8,	// (0x000365a3) main_usb_pane

0x7dac,	// (0x0003c367) popup_cale_lunar_info_window

0x6051,	// (0x0003a60c) im_reading_pane_t1_ParamLimits

0x2696,	// (0x00036c51) list_im_pane_ParamLimits

0x26a7,	// (0x00036c62) scroll_pane_cp07_ParamLimits

0x1fe8,	// (0x000365a3) grid_highlight_pane_cp012

0x2243,	// (0x000367fe) mup_scale_pane_ParamLimits

0xc75f,	// (0x00040d1a) main_usb_pane_g1_ParamLimits

0xc75f,	// (0x00040d1a) main_usb_pane_g1

0x7b15,	// (0x0003c0d0) main_usb_pane_g2_ParamLimits

0x7b15,	// (0x0003c0d0) main_usb_pane_g2

0x0001,

0xf5bb,	// (0x00043b76) main_usb_pane_g_ParamLimits

0xf5bb,	// (0x00043b76) main_usb_pane_g

0x7b21,	// (0x0003c0dc) main_usb_pane_t1_ParamLimits

0x7b21,	// (0x0003c0dc) main_usb_pane_t1

0x7b33,	// (0x0003c0ee) main_usb_pane_t2_ParamLimits

0x7b33,	// (0x0003c0ee) main_usb_pane_t2

0x7b45,	// (0x0003c100) main_usb_pane_t3_ParamLimits

0x7b45,	// (0x0003c100) main_usb_pane_t3

0x7b57,	// (0x0003c112) main_usb_pane_t4_ParamLimits

0x7b57,	// (0x0003c112) main_usb_pane_t4

0x7b69,	// (0x0003c124) main_usb_pane_t5_ParamLimits

0x7b69,	// (0x0003c124) main_usb_pane_t5

0x7b7b,	// (0x0003c136) main_usb_pane_t6_ParamLimits

0x7b7b,	// (0x0003c136) main_usb_pane_t6

0x0005,

0xf5c0,	// (0x00043b7b) main_usb_pane_t_ParamLimits

0x6e43,	// (0x0003b3fe) aid_text_placing

0x6e4e,	// (0x0003b409) main_location2_pane_t1_ParamLimits

0x6e64,	// (0x0003b41f) main_location2_pane_t2_ParamLimits

0x6e7a,	// (0x0003b435) main_location2_pane_t3_ParamLimits

0x6e90,	// (0x0003b44b) main_location2_pane_t4_ParamLimits

0x6e90,	// (0x0003b44b) main_location2_pane_t4

0xf3df,	// (0x0004399a) main_location2_pane_t_ParamLimits

0x227f,	// (0x0003683a) find_pinb_pane_g2_ParamLimits

0x227f,	// (0x0003683a) find_pinb_pane_g2

0x0001,

0xf12d,	// (0x000436e8) find_pinb_pane_g_ParamLimits

0xf12d,	// (0x000436e8) find_pinb_pane_g

0x228b,	// (0x00036846) find_pinb_pane_t1_ParamLimits

0x229d,	// (0x00036858) find_pinb_pane_t2_ParamLimits

0xf132,	// (0x000436ed) find_pinb_pane_t_ParamLimits

0x1fe8,	// (0x000365a3) main_call3_pane

0x65ff,	// (0x0003abba) cale_month_day_heading_pane_t1_ParamLimits

0x665d,	// (0x0003ac18) cale_month_day_heading_pane_t2_ParamLimits

0x66c2,	// (0x0003ac7d) cale_month_day_heading_pane_t3_ParamLimits

0x6727,	// (0x0003ace2) cale_month_day_heading_pane_t4_ParamLimits

0x678c,	// (0x0003ad47) cale_month_day_heading_pane_t5_ParamLimits

0x67f9,	// (0x0003adb4) cale_month_day_heading_pane_t6_ParamLimits

0x686e,	// (0x0003ae29) cale_month_day_heading_pane_t7_ParamLimits

0xf2b6,	// (0x00043871) cale_month_day_heading_pane_t_ParamLimits

0x2911,	// (0x00036ecc) smil_status_volume_pane

0x76d3,	// (0x0003bc8e) postcard_address_pane_ParamLimits

0x76d3,	// (0x0003bc8e) postcard_address_pane

0x76e1,	// (0x0003bc9c) postcard_message_pane_ParamLimits

0x76e1,	// (0x0003bc9c) postcard_message_pane

0x7aeb,	// (0x0003c0a6) call2_cli_visual_pane_t1_ParamLimits

0x7aeb,	// (0x0003c0a6) call2_cli_visual_pane_t1

0x80f7,	// (0x0003c6b2) postcard_message_pane_t1_ParamLimits

0x80f7,	// (0x0003c6b2) postcard_message_pane_t1

0xde87,	// (0x00042442) postcard_address_pane_t1_ParamLimits

0xde87,	// (0x00042442) postcard_address_pane_t1

0x80e8,	// (0x0003c6a3) popup_call3_audio_in_window_ParamLimits

0x80e8,	// (0x0003c6a3) popup_call3_audio_in_window

0x7fc6,	// (0x0003c581) bg_popup_call3_in_pane_ParamLimits

0x7fc6,	// (0x0003c581) bg_popup_call3_in_pane

0x802e,	// (0x0003c5e9) popup_call3_audio_in_window_g1_ParamLimits

0x802e,	// (0x0003c5e9) popup_call3_audio_in_window_g1

0x8046,	// (0x0003c601) popup_call3_audio_in_window_g2_ParamLimits

0x8046,	// (0x0003c601) popup_call3_audio_in_window_g2

0x805e,	// (0x0003c619) popup_call3_audio_in_window_g3_ParamLimits

0x805e,	// (0x0003c619) popup_call3_audio_in_window_g3

0x0003,

0xf622,	// (0x00043bdd) popup_call3_audio_in_window_g_ParamLimits

0xf622,	// (0x00043bdd) popup_call3_audio_in_window_g

0x8086,	// (0x0003c641) popup_call3_audio_in_window_t1_ParamLimits

0x8086,	// (0x0003c641) popup_call3_audio_in_window_t1

0x80ae,	// (0x0003c669) popup_call3_audio_in_window_t2_ParamLimits

0x80ae,	// (0x0003c669) popup_call3_audio_in_window_t2

0x80d6,	// (0x0003c691) popup_call3_audio_in_window_t3_ParamLimits

0x80d6,	// (0x0003c691) popup_call3_audio_in_window_t3

0x0002,

0xf62b,	// (0x00043be6) popup_call3_audio_in_window_t_ParamLimits

0xf62b,	// (0x00043be6) popup_call3_audio_in_window_t

0xc9bb,	// (0x00040f76) bg_popup_call3_rect_pane

0xdbd7,	// (0x00042192) bg_popup_call3_rect_pane_g1

0x2417,	// (0x000369d2) bg_popup_call3_rect_pane_g2

0xdbdf,	// (0x0004219a) bg_popup_call3_rect_pane_g3

0xdbe7,	// (0x000421a2) bg_popup_call3_rect_pane_g4

0xdbef,	// (0x000421aa) bg_popup_call3_rect_pane_g5

0xdbf7,	// (0x000421b2) bg_popup_call3_rect_pane_g6

0xdbff,	// (0x000421ba) bg_popup_call3_rect_pane_g7

0x72d6,	// (0x0003b891) mup_visualizer_osc_pane

0xca7a,	// (0x00041035) mup_visualizer_spec_pane

0x7fe6,	// (0x0003c5a1) call3_video_qcif_pane_ParamLimits

0x7fe6,	// (0x0003c5a1) call3_video_qcif_pane

0x7ff8,	// (0x0003c5b3) call3_video_qcif_uncrop_pane_ParamLimits

0x7ff8,	// (0x0003c5b3) call3_video_qcif_uncrop_pane

0x8008,	// (0x0003c5c3) call3_video_subqcif_pane_ParamLimits

0x8008,	// (0x0003c5c3) call3_video_subqcif_pane

0x801c,	// (0x0003c5d7) call3_video_subqcif_uncrop_pane_ParamLimits

0x801c,	// (0x0003c5d7) call3_video_subqcif_uncrop_pane

0x8076,	// (0x0003c631) popup_call3_audio_in_window_g4_ParamLimits

0x8076,	// (0x0003c631) popup_call3_audio_in_window_g4

0x7f93,	// (0x0003c54e) mup_spec_half_pane

0x7f9c,	// (0x0003c557) mup_spec_half_pane_cp

0xde47,	// (0x00042402) mup_osc_middle_pane

0xde50,	// (0x0004240b) mup_visualizer_osc_pane_g1

0x7f73,	// (0x0003c52e) mup_spec_bar_pane_ParamLimits

0x7f73,	// (0x0003c52e) mup_spec_bar_pane

0xde34,	// (0x000423ef) mup_spec_bar_pane_g1

0xde3e,	// (0x000423f9) mup_spec_bar_pane_g2

0x0001,

0xf616,	// (0x00043bd1) mup_spec_bar_pane_g

0x5532,	// (0x00039aed) aid_cale_week_size_cell_pane_ParamLimits

0x5545,	// (0x00039b00) bg_cale_heading_pane_ParamLimits

0x244b,	// (0x00036a06) bg_cale_pane_cp01_ParamLimits

0x5561,	// (0x00039b1c) cale_week_corner_pane_ParamLimits

0x5577,	// (0x00039b32) cale_week_day_heading_pane_ParamLimits

0x5593,	// (0x00039b4e) cale_week_scroll_pane_g1_ParamLimits

0x55ac,	// (0x00039b67) cale_week_scroll_pane_g2_ParamLimits

0x55bd,	// (0x00039b78) cale_week_scroll_pane_g3_ParamLimits

0x55ce,	// (0x00039b89) cale_week_scroll_pane_g4_ParamLimits

0x55df,	// (0x00039b9a) cale_week_scroll_pane_g5_ParamLimits

0x55f0,	// (0x00039bab) cale_week_scroll_pane_g6_ParamLimits

0x5603,	// (0x00039bbe) cale_week_scroll_pane_g7_ParamLimits

0x5616,	// (0x00039bd1) cale_week_scroll_pane_g8_ParamLimits

0x5629,	// (0x00039be4) cale_week_scroll_pane_g9_ParamLimits

0x563a,	// (0x00039bf5) cale_week_scroll_pane_g10_ParamLimits

0x564b,	// (0x00039c06) cale_week_scroll_pane_g11_ParamLimits

0x565c,	// (0x00039c17) cale_week_scroll_pane_g12_ParamLimits

0x566d,	// (0x00039c28) cale_week_scroll_pane_g13_ParamLimits

0x567e,	// (0x00039c39) cale_week_scroll_pane_g14_ParamLimits

0x5697,	// (0x00039c52) cale_week_scroll_pane_g15_ParamLimits

0xf1be,	// (0x00043779) cale_week_scroll_pane_g_ParamLimits

0x56b0,	// (0x00039c6b) cale_week_time_pane_ParamLimits

0x56c3,	// (0x00039c7e) grid_cale_week_pane_ParamLimits

0x2464,	// (0x00036a1f) listscroll_cale_week_pane_t1

0x56e0,	// (0x00039c9b) scroll_pane_cp08_ParamLimits

0x6244,	// (0x0003a7ff) cale_month_corner_pane_ParamLimits

0x28bd,	// (0x00036e78) cale_month_pane_t1

0x65ae,	// (0x0003ab69) cale_month_week_pane_ParamLimits

0xc75f,	// (0x00040d1a) popup_call_status_window_g1_ParamLimits

0x6c4c,	// (0x0003b207) popup_call_status_window_g2_ParamLimits

0x6c58,	// (0x0003b213) popup_call_status_window_g3_ParamLimits

0xf366,	// (0x00043921) popup_call_status_window_g_ParamLimits

0x2c81,	// (0x0003723c) aid_call2_pane

0x3d41,	// (0x000382fc) msg_header_pane_g1

0x76d3,	// (0x0003bc8e) postcard_address2_pane_ParamLimits

0x76d3,	// (0x0003bc8e) postcard_address2_pane

0x76e1,	// (0x0003bc9c) postcard_message2_pane_ParamLimits

0x76e1,	// (0x0003bc9c) postcard_message2_pane

0x7f2d,	// (0x0003c4e8) message2_row_pane_ParamLimits

0x7f2d,	// (0x0003c4e8) message2_row_pane

0xddef,	// (0x000423aa) address2_row_pane_ParamLimits

0xddef,	// (0x000423aa) address2_row_pane

0xde02,	// (0x000423bd) postcard_message2_row_pane_g1

0xde0a,	// (0x000423c5) postcard_message2_row_pane_t1

0xde02,	// (0x000423bd) address2_row_pane_g1

0xde0a,	// (0x000423c5) address2_row_pane_t1

0x5992,	// (0x00039f4d) aid_size_cell_vorec

0x1fe8,	// (0x000365a3) main_rss_pane

0x7f47,	// (0x0003c502) rss_list_single_pane_ParamLimits

0x7f47,	// (0x0003c502) rss_list_single_pane

0xde18,	// (0x000423d3) rss_list_single_pane_t1

0xde26,	// (0x000423e1) rss_list_single_pane_t2

0x0001,

0xf611,	// (0x00043bcc) rss_list_single_pane_t

0x1fe8,	// (0x000365a3) main_camera2_pane

0x1fe8,	// (0x000365a3) main_video2_pane

0x815b,	// (0x0003c716) cams_zoom_pane_cp2_ParamLimits

0x815b,	// (0x0003c716) cams_zoom_pane_cp2

0x8167,	// (0x0003c722) image2_vga_pane_ParamLimits

0x8167,	// (0x0003c722) image2_vga_pane

0x8176,	// (0x0003c731) main_camera2_pane_g1_ParamLimits

0x8176,	// (0x0003c731) main_camera2_pane_g1

0x8182,	// (0x0003c73d) main_camera2_pane_g2_ParamLimits

0x8182,	// (0x0003c73d) main_camera2_pane_g2

0x818e,	// (0x0003c749) main_camera2_pane_g3_ParamLimits

0x818e,	// (0x0003c749) main_camera2_pane_g3

0x819a,	// (0x0003c755) main_camera2_pane_g4_ParamLimits

0x819a,	// (0x0003c755) main_camera2_pane_g4

0x81a6,	// (0x0003c761) main_camera2_pane_g5_ParamLimits

0x81a6,	// (0x0003c761) main_camera2_pane_g5

0x81b2,	// (0x0003c76d) main_camera2_pane_g6_ParamLimits

0x81b2,	// (0x0003c76d) main_camera2_pane_g6

0x81be,	// (0x0003c779) main_camera2_pane_g7_ParamLimits

0x81be,	// (0x0003c779) main_camera2_pane_g7

0x81ca,	// (0x0003c785) main_camera2_pane_g8_ParamLimits

0x81ca,	// (0x0003c785) main_camera2_pane_g8

0x0008,

0xf632,	// (0x00043bed) main_camera2_pane_g_ParamLimits

0xf632,	// (0x00043bed) main_camera2_pane_g

0x81e2,	// (0x0003c79d) main_camera2_pane_t1_ParamLimits

0x81e2,	// (0x0003c79d) main_camera2_pane_t1

0x81f4,	// (0x0003c7af) main_camera2_pane_t2_ParamLimits

0x81f4,	// (0x0003c7af) main_camera2_pane_t2

0x8206,	// (0x0003c7c1) main_camera2_pane_t3_ParamLimits

0x8206,	// (0x0003c7c1) main_camera2_pane_t3

0x8218,	// (0x0003c7d3) main_camera2_pane_t4_ParamLimits

0x8218,	// (0x0003c7d3) main_camera2_pane_t4

0x0006,

0xf645,	// (0x00043c00) main_camera2_pane_t_ParamLimits

0xf645,	// (0x00043c00) main_camera2_pane_t

0x8275,	// (0x0003c830) cams_zoom_pane_cp4_ParamLimits

0x8275,	// (0x0003c830) cams_zoom_pane_cp4

0x8285,	// (0x0003c840) image2_cif_pane_ParamLimits

0x8285,	// (0x0003c840) image2_cif_pane

0x829a,	// (0x0003c855) image2_subqcif_pane_ParamLimits

0x829a,	// (0x0003c855) image2_subqcif_pane

0x82a9,	// (0x0003c864) main_video2_pane_g1_ParamLimits

0x82a9,	// (0x0003c864) main_video2_pane_g1

0x82bb,	// (0x0003c876) main_video2_pane_g2_ParamLimits

0x82bb,	// (0x0003c876) main_video2_pane_g2

0x82cb,	// (0x0003c886) main_video2_pane_g3_ParamLimits

0x82cb,	// (0x0003c886) main_video2_pane_g3

0x82db,	// (0x0003c896) main_video2_pane_g4_ParamLimits

0x82db,	// (0x0003c896) main_video2_pane_g4

0x82eb,	// (0x0003c8a6) main_video2_pane_g5_ParamLimits

0x82eb,	// (0x0003c8a6) main_video2_pane_g5

0x82fb,	// (0x0003c8b6) main_video2_pane_g6_ParamLimits

0x82fb,	// (0x0003c8b6) main_video2_pane_g6

0x0005,

0xf654,	// (0x00043c0f) main_video2_pane_g_ParamLimits

0xf654,	// (0x00043c0f) main_video2_pane_g

0x830d,	// (0x0003c8c8) main_video2_pane_t1_ParamLimits

0x830d,	// (0x0003c8c8) main_video2_pane_t1

0x8327,	// (0x0003c8e2) main_video2_pane_t2_ParamLimits

0x8327,	// (0x0003c8e2) main_video2_pane_t2

0x834d,	// (0x0003c908) main_video2_pane_t3_ParamLimits

0x834d,	// (0x0003c908) main_video2_pane_t3

0x0002,

0xf661,	// (0x00043c1c) main_video2_pane_t_ParamLimits

0xf661,	// (0x00043c1c) main_video2_pane_t

0x7c32,	// (0x0003c1ed) call_muted_g2

0x0001,

0xf603,	// (0x00043bbe) call_muted_g

0x1fe8,	// (0x000365a3) main_mup2_pane

0xde9e,	// (0x00042459) main_mup2_pane_g1_ParamLimits

0xde9e,	// (0x00042459) main_mup2_pane_g1

0x8373,	// (0x0003c92e) main_mup2_pane_g2_ParamLimits

0x8373,	// (0x0003c92e) main_mup2_pane_g2

0x85f7,	// (0x0003cbb2) main_mup_pane_g13_cp1

0x85ff,	// (0x0003cbba) mup_volume_pane_cp1

0x8395,	// (0x0003c950) main_mup2_pane_g4_ParamLimits

0x8395,	// (0x0003c950) main_mup2_pane_g4

0x83a6,	// (0x0003c961) main_mup2_pane_g5_ParamLimits

0x83a6,	// (0x0003c961) main_mup2_pane_g5

0x83b7,	// (0x0003c972) main_mup2_pane_g6_ParamLimits

0x83b7,	// (0x0003c972) main_mup2_pane_g6

0x83c8,	// (0x0003c983) main_mup2_pane_g7_ParamLimits

0x83c8,	// (0x0003c983) main_mup2_pane_g7

0x0006,

0xf668,	// (0x00043c23) main_mup2_pane_g_ParamLimits

0xf668,	// (0x00043c23) main_mup2_pane_g

0x83e4,	// (0x0003c99f) main_mup2_pane_t1_ParamLimits

0x83e4,	// (0x0003c99f) main_mup2_pane_t1

0x83fb,	// (0x0003c9b6) main_mup2_pane_t2_ParamLimits

0x83fb,	// (0x0003c9b6) main_mup2_pane_t2

0x8412,	// (0x0003c9cd) main_mup2_pane_t3_ParamLimits

0x8412,	// (0x0003c9cd) main_mup2_pane_t3

0x8429,	// (0x0003c9e4) main_mup2_pane_t4_ParamLimits

0x8429,	// (0x0003c9e4) main_mup2_pane_t4

0x8443,	// (0x0003c9fe) main_mup2_pane_t5_ParamLimits

0x8443,	// (0x0003c9fe) main_mup2_pane_t5

0x845d,	// (0x0003ca18) main_mup2_pane_t6_ParamLimits

0x845d,	// (0x0003ca18) main_mup2_pane_t6

0x0005,

0xf677,	// (0x00043c32) main_mup2_pane_t_ParamLimits

0xf677,	// (0x00043c32) main_mup2_pane_t

0x8495,	// (0x0003ca50) mup2_visualizer_pane_ParamLimits

0x8495,	// (0x0003ca50) mup2_visualizer_pane

0x84cb,	// (0x0003ca86) mup_progress_pane_cp_ParamLimits

0x84cb,	// (0x0003ca86) mup_progress_pane_cp

0x85e2,	// (0x0003cb9d) mup_volume_pane_cp_ParamLimits

0x85e2,	// (0x0003cb9d) mup_volume_pane_cp

0x84e4,	// (0x0003ca9f) mup2_visualizer_pane_g1_ParamLimits

0x84e4,	// (0x0003ca9f) mup2_visualizer_pane_g1

0xdeaa,	// (0x00042465) mup2_visualizer_pane_g2_ParamLimits

0xdeaa,	// (0x00042465) mup2_visualizer_pane_g2

0x84f9,	// (0x0003cab4) mup2_visualizer_pane_g3_ParamLimits

0x84f9,	// (0x0003cab4) mup2_visualizer_pane_g3

0x0002,

0xf684,	// (0x00043c3f) mup2_visualizer_pane_g_ParamLimits

0xf684,	// (0x00043c3f) mup2_visualizer_pane_g

0xcca3,	// (0x0004125e) aid_size_cell_fmradio

0x7d48,	// (0x0003c303) aid_height_parent_landcape

0x2725,	// (0x00036ce0) wml_content_pane_cp

0x272d,	// (0x00036ce8) wml_tabs_pane

0x2736,	// (0x00036cf1) popup_wml_miniature_window

0x273e,	// (0x00036cf9) scroll_pane_cp021

0x2752,	// (0x00036d0d) wml_content_pane_comp8

0x1fe8,	// (0x000365a3) bg_popup_sub_pane_cp05

0xdec8,	// (0x00042483) popup_wml_miniature_window_g1

0xded0,	// (0x0004248b) wml_miniature_view_pane

0x8505,	// (0x0003cac0) aid_size_wml_view

0x850d,	// (0x0003cac8) wml_miniature_view_pane_g1

0x8516,	// (0x0003cad1) wml_miniature_view_pane_g2

0x851f,	// (0x0003cada) wml_miniature_view_pane_g3

0x8527,	// (0x0003cae2) wml_miniature_view_pane_g4

0x852f,	// (0x0003caea) wml_miniature_view_pane_g5

0x8537,	// (0x0003caf2) wml_miniature_view_pane_g6

0x853f,	// (0x0003cafa) wml_miniature_view_pane_g7

0x8547,	// (0x0003cb02) wml_miniature_view_pane_g8

0x0007,

0xf68b,	// (0x00043c46) wml_miniature_view_pane_g

0xde9e,	// (0x00042459) background_graphic_ParamLimits

0xde9e,	// (0x00042459) background_graphic

0xded8,	// (0x00042493) wml_tabs_2_pane

0xdee1,	// (0x0004249c) wml_tabs_3_pane_ParamLimits

0xdee1,	// (0x0004249c) wml_tabs_3_pane

0xdef3,	// (0x000424ae) wml_tabs_4_pane_ParamLimits

0xdef3,	// (0x000424ae) wml_tabs_4_pane

0xdf09,	// (0x000424c4) wml_tabs_5_pane_ParamLimits

0xdf09,	// (0x000424c4) wml_tabs_5_pane

0xdf23,	// (0x000424de) wml_tabs_pane_g2_ParamLimits

0xdf23,	// (0x000424de) wml_tabs_pane_g2

0xdf37,	// (0x000424f2) wml_tabs_pane_g3_ParamLimits

0xdf37,	// (0x000424f2) wml_tabs_pane_g3

0x854f,	// (0x0003cb0a) wml_tabs_2_active_pane_ParamLimits

0x854f,	// (0x0003cb0a) wml_tabs_2_active_pane

0x8561,	// (0x0003cb1c) wml_tabs_2_passive_pane_ParamLimits

0x8561,	// (0x0003cb1c) wml_tabs_2_passive_pane

0x8573,	// (0x0003cb2e) wml_tabs_3_active_pane_cp_ParamLimits

0x8573,	// (0x0003cb2e) wml_tabs_3_active_pane_cp

0x8586,	// (0x0003cb41) wml_tabs_3_passive_pane_ParamLimits

0x8586,	// (0x0003cb41) wml_tabs_3_passive_pane

0x8597,	// (0x0003cb52) wml_tabs_3_passive_pane_cp_ParamLimits

0x8597,	// (0x0003cb52) wml_tabs_3_passive_pane_cp

0x85ac,	// (0x0003cb67) tabs_4_active_pane

0x85b4,	// (0x0003cb6f) tabs_4_passive_pane

0x85bc,	// (0x0003cb77) tabs_4_passive_pane_cp

0x85c4,	// (0x0003cb7f) tabs_4_passive_pane_cp2

0x7b0d,	// (0x0003c0c8) aid_height_text

0x729f,	// (0x0003b85a) mup_volume_cont_pane_ParamLimits

0x729f,	// (0x0003b85a) mup_volume_cont_pane

0x50a6,	// (0x00039661) aid_size_cell_pinb

0x50b0,	// (0x0003966b) aid_size_list_pinb

0x84b4,	// (0x0003ca6f) mup2_volume_cont_pane_ParamLimits

0x84b4,	// (0x0003ca6f) mup2_volume_cont_pane

0x85ce,	// (0x0003cb89) mup2_volume_cont_pane_g1_ParamLimits

0x85ce,	// (0x0003cb89) mup2_volume_cont_pane_g1

0x4d14,	// (0x000392cf) aid_size_cell_touch_ParamLimits

0x4d14,	// (0x000392cf) aid_size_cell_touch

0x4fc5,	// (0x00039580) touch_pane_ParamLimits

0x4fc5,	// (0x00039580) touch_pane

0x1b96,	// (0x00036151) main_rss2_pane

0xdf54,	// (0x0004250f) listscroll_rss2_pane

0xdf5d,	// (0x00042518) rss2_navigation_pane

0xdf65,	// (0x00042520) list_rss2_pane

0xc881,	// (0x00040e3c) scroll_pane_cp22

0xdf6d,	// (0x00042528) rss2_navigation_pane_g1

0xdf76,	// (0x00042531) rss2_navigation_pane_g2

0xdf7e,	// (0x00042539) rss2_navigation_pane_g3

0x0002,

0xf69c,	// (0x00043c57) rss2_navigation_pane_g

0xdf86,	// (0x00042541) rss2_navigation_pane_t1

0x8607,	// (0x0003cbc2) rss2_list_single_pane_ParamLimits

0x8607,	// (0x0003cbc2) rss2_list_single_pane

0xdf94,	// (0x0004254f) rss2_list_single_pane_t2

0xdfa2,	// (0x0004255d) rss2_list_single_pane_t3_ParamLimits

0xdfa2,	// (0x0004255d) rss2_list_single_pane_t3

0xdfbf,	// (0x0004257a) rss2_list_single_pane_t4

0x6a6e,	// (0x0003b029) smil_status_pane_g1

0x238b,	// (0x00036946) main_image2_pane_ParamLimits

0x238b,	// (0x00036946) main_image2_pane

0x81d6,	// (0x0003c791) main_camera2_pane_g9_ParamLimits

0x81d6,	// (0x0003c791) main_camera2_pane_g9

0x822a,	// (0x0003c7e5) main_camera2_pane_t5_ParamLimits

0x822a,	// (0x0003c7e5) main_camera2_pane_t5

0x823c,	// (0x0003c7f7) main_camera2_pane_t6_ParamLimits

0x823c,	// (0x0003c7f7) main_camera2_pane_t6

0x862a,	// (0x0003cbe5) main_image2_pane_g1_ParamLimits

0x862a,	// (0x0003cbe5) main_image2_pane_g1

0x78aa,	// (0x0003be65) smil2_video_pane_ParamLimits

0x78aa,	// (0x0003be65) smil2_video_pane

0x3b11,	// (0x000380cc) aid_zoom_text_primary_cp

0x4f6a,	// (0x00039525) popup_preview_fixed_window

0x268e,	// (0x00036c49) im_reading_pane_g1

0x8120,	// (0x0003c6db) cams2_bc_adjust_pane_cp_ParamLimits

0x8120,	// (0x0003c6db) cams2_bc_adjust_pane_cp

0x8267,	// (0x0003c822) cams2_bc_adjust_pane_ParamLimits

0x8267,	// (0x0003c822) cams2_bc_adjust_pane

0x8636,	// (0x0003cbf1) cams2_bc_adjust_pane_g1

0x863e,	// (0x0003cbf9) cams2_slider_pane

0x8647,	// (0x0003cc02) cams2_slider_pane_g1

0x8650,	// (0x0003cc0b) cams2_slider_pane_g2

0x0006,

0xf6a3,	// (0x00043c5e) cams2_slider_pane_g

0x51a1,	// (0x0003975c) calc_display_pane_ParamLimits

0x51bf,	// (0x0003977a) calc_paper_pane_ParamLimits

0x51db,	// (0x00039796) grid_calc_pane_ParamLimits

0x6cb6,	// (0x0003b271) popup_clock_digital_window_t1_ParamLimits

0xcc40,	// (0x000411fb) main_image_pane_t1

0x5187,	// (0x00039742) aid_size_cell_calc_ParamLimits

0x5187,	// (0x00039742) aid_size_cell_calc

0x7d82,	// (0x0003c33d) popup_blid_sat_info2_window_ParamLimits

0x7d82,	// (0x0003c33d) popup_blid_sat_info2_window

0xdfd5,	// (0x00042590) aid_size_cell_blid

0xdfdd,	// (0x00042598) bg_popup_window_pane_cp07

0xe000,	// (0x000425bb) grid_popup_blid_pane

0xe00a,	// (0x000425c5) heading_pane_cp05_ParamLimits

0xe00a,	// (0x000425c5) heading_pane_cp05

0xe0d4,	// (0x0004268f) cell_popup_blid_pane_ParamLimits

0xe0d4,	// (0x0004268f) cell_popup_blid_pane

0xe0fe,	// (0x000426b9) cell_popup_blid_pane_g1

0xe106,	// (0x000426c1) cell_popup_blid_pane_t1

0x847a,	// (0x0003ca35) mup2_indicator_pane_ParamLimits

0x847a,	// (0x0003ca35) mup2_indicator_pane

0xc9bb,	// (0x00040f76) mup2_visualizer_osc_pane

0xdeb6,	// (0x00042471) mup2_visualizer_spec_pane_ParamLimits

0xdeb6,	// (0x00042471) mup2_visualizer_spec_pane

0x866a,	// (0x0003cc25) mup2_spec_half_pane

0x8673,	// (0x0003cc2e) mup2_spec_half_pane_cp

0x867b,	// (0x0003cc36) mup2_spec_bar_pane_ParamLimits

0x867b,	// (0x0003cc36) mup2_spec_bar_pane

0xde34,	// (0x000423ef) mup2_spec_bar_pane_g1

0xde3e,	// (0x000423f9) mup2_spec_bar_pane_g2

0x0001,

0xf616,	// (0x00043bd1) mup2_spec_bar_pane_g

0x869a,	// (0x0003cc55) mup2_osc_middle_pane

0xde50,	// (0x0004240b) mup2_visualizer_osc_pane_g1

0x1bc0,	// (0x0003617b) popup_number_entry_window_t1_ParamLimits

0x1bd3,	// (0x0003618e) popup_number_entry_window_t2_ParamLimits

0x1be5,	// (0x000361a0) popup_number_entry_window_t3_ParamLimits

0x1bf7,	// (0x000361b2) popup_number_entry_window_t5_ParamLimits

0x1bf7,	// (0x000361b2) popup_number_entry_window_t5

0xf0d8,	// (0x00043693) popup_number_entry_window_t_ParamLimits

0x1c2c,	// (0x000361e7) text_title_cp2_ParamLimits

0x7597,	// (0x0003bb52) aid_hotspot_pointer_text2_pane

0x7631,	// (0x0003bbec) main_viewer_pane_g9_ParamLimits

0x7631,	// (0x0003bbec) main_viewer_pane_g9

0x28bd,	// (0x00036e78) cale_month_pane_t1_ParamLimits

0x2924,	// (0x00036edf) bg_cale_pane_ParamLimits

0x293c,	// (0x00036ef7) list_cale_pane_ParamLimits

0x2464,	// (0x00036a1f) listscroll_cale_day_pane_t1

0x294d,	// (0x00036f08) scroll_pane_cp09_ParamLimits

0x72de,	// (0x0003b899) main_mup_eq_pane_t1_ParamLimits

0x72de,	// (0x0003b899) main_mup_eq_pane_t1

0x72fa,	// (0x0003b8b5) main_mup_eq_pane_t2_ParamLimits

0x72fa,	// (0x0003b8b5) main_mup_eq_pane_t2

0x7316,	// (0x0003b8d1) main_mup_eq_pane_t3_ParamLimits

0x7316,	// (0x0003b8d1) main_mup_eq_pane_t3

0x7330,	// (0x0003b8eb) main_mup_eq_pane_t4_ParamLimits

0x7330,	// (0x0003b8eb) main_mup_eq_pane_t4

0x734a,	// (0x0003b905) main_mup_eq_pane_t5_ParamLimits

0x734a,	// (0x0003b905) main_mup_eq_pane_t5

0x7364,	// (0x0003b91f) main_mup_eq_pane_t6_ParamLimits

0x7364,	// (0x0003b91f) main_mup_eq_pane_t6

0x737a,	// (0x0003b935) main_mup_eq_pane_t7_ParamLimits

0x737a,	// (0x0003b935) main_mup_eq_pane_t7

0x7390,	// (0x0003b94b) main_mup_eq_pane_t8_ParamLimits

0x7390,	// (0x0003b94b) main_mup_eq_pane_t8

0x73a6,	// (0x0003b961) main_mup_eq_pane_t9_ParamLimits

0x73a6,	// (0x0003b961) main_mup_eq_pane_t9

0x73c2,	// (0x0003b97d) main_mup_eq_pane_t10_ParamLimits

0x73c2,	// (0x0003b97d) main_mup_eq_pane_t10

0x0009,

0xf465,	// (0x00043a20) main_mup_eq_pane_t_ParamLimits

0xf465,	// (0x00043a20) main_mup_eq_pane_t

0x7487,	// (0x0003ba42) mup_equalizer_pane_cp5_ParamLimits

0x749f,	// (0x0003ba5a) mup_equalizer_pane_cp6_ParamLimits

0x74b7,	// (0x0003ba72) mup_equalizer_pane_cp7_ParamLimits

0x1b96,	// (0x00036151) main_gallery_pane

0xde59,	// (0x00042414) smil2_volume_pane

0xde61,	// (0x0004241c) smil_status_volume_pane_g1_ParamLimits

0xde74,	// (0x0004242f) smil_status_volume_pane_g2_ParamLimits

0x7fa4,	// (0x0003c55f) smil_status_volume_pane_g3_ParamLimits

0xf61b,	// (0x00043bd6) smil_status_volume_pane_g_ParamLimits

0xdfdd,	// (0x00042598) bg_popup_window_pane_cp07_ParamLimits

0xdfeb,	// (0x000425a6) blid_firmament_pane

0x86a3,	// (0x0003cc5e) aid_size_cell_gallery_ParamLimits

0x86a3,	// (0x0003cc5e) aid_size_cell_gallery

0x86b1,	// (0x0003cc6c) grid_gallery_pane_ParamLimits

0x86b1,	// (0x0003cc6c) grid_gallery_pane

0x86c1,	// (0x0003cc7c) cell_gallery_pane_ParamLimits

0x86c1,	// (0x0003cc7c) cell_gallery_pane

0xe114,	// (0x000426cf) bg_cell_gallery_focus_pane_ParamLimits

0xe114,	// (0x000426cf) bg_cell_gallery_focus_pane

0xe126,	// (0x000426e1) cell_gallery_pane_g1_ParamLimits

0xe126,	// (0x000426e1) cell_gallery_pane_g1

0x870c,	// (0x0003ccc7) cell_gallery_pane_g2_ParamLimits

0x870c,	// (0x0003ccc7) cell_gallery_pane_g2

0x8719,	// (0x0003ccd4) cell_gallery_pane_g3_ParamLimits

0x8719,	// (0x0003ccd4) cell_gallery_pane_g3

0xe132,	// (0x000426ed) cell_gallery_pane_g4_ParamLimits

0xe132,	// (0x000426ed) cell_gallery_pane_g4

0x0003,

0xf6c9,	// (0x00043c84) cell_gallery_pane_g_ParamLimits

0xf6c9,	// (0x00043c84) cell_gallery_pane_g

0xe13e,	// (0x000426f9) bg_cell_gallery_focus_pane_g1

0xe146,	// (0x00042701) bg_cell_gallery_focus_pane_g2

0xe14e,	// (0x00042709) bg_cell_gallery_focus_pane_g3

0xe156,	// (0x00042711) bg_cell_gallery_focus_pane_g4

0xe15e,	// (0x00042719) bg_cell_gallery_focus_pane_g5

0xe166,	// (0x00042721) bg_cell_gallery_focus_pane_g6

0xe16e,	// (0x00042729) bg_cell_gallery_focus_pane_g7

0xe176,	// (0x00042731) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6d2,	// (0x00043c8d) bg_cell_gallery_focus_pane_g

0xe17e,	// (0x00042739) aid_firma_cardinal

0xe192,	// (0x0004274d) blid_firmament_pane_t1

0xe1a9,	// (0x00042764) blid_firmament_pane_t2

0xe1c0,	// (0x0004277b) blid_firmament_pane_t3

0xe1d7,	// (0x00042792) blid_firmament_pane_t4

0x0003,

0xf6e3,	// (0x00043c9e) blid_firmament_pane_t

0xe1ee,	// (0x000427a9) blid_sat_info_pane

0xe1fe,	// (0x000427b9) blid_sat_info_pane_g1

0xe1fe,	// (0x000427b9) blid_sat_info_pane_g2

0x0001,

0xf6ec,	// (0x00043ca7) blid_sat_info_pane_g

0xe208,	// (0x000427c3) blid_sat_info_pane_t1

0xe216,	// (0x000427d1) smil2_volume_content_pane

0xe21f,	// (0x000427da) smil2_volume_pane_g1

0xe227,	// (0x000427e2) smil2_volume_content_pane_g1

0xe230,	// (0x000427eb) smil2_volume_content_pane_g2

0xe239,	// (0x000427f4) smil2_volume_content_pane_g3

0xe242,	// (0x000427fd) smil2_volume_content_pane_g4

0xe24b,	// (0x00042806) smil2_volume_content_pane_g5

0xe254,	// (0x0004280f) smil2_volume_content_pane_g6

0xe25d,	// (0x00042818) smil2_volume_content_pane_g7

0xe266,	// (0x00042821) smil2_volume_content_pane_g8

0xe26f,	// (0x0004282a) smil2_volume_content_pane_g9

0xe278,	// (0x00042833) smil2_volume_content_pane_g10

0x0009,

0xf6f1,	// (0x00043cac) smil2_volume_content_pane_g

0x573c,	// (0x00039cf7) cale_week_day_heading_pane_t1_ParamLimits

0x5769,	// (0x00039d24) cale_week_day_heading_pane_t2_ParamLimits

0x5796,	// (0x00039d51) cale_week_day_heading_pane_t3_ParamLimits

0x57c3,	// (0x00039d7e) cale_week_day_heading_pane_t4_ParamLimits

0x57f0,	// (0x00039dab) cale_week_day_heading_pane_t5_ParamLimits

0x581d,	// (0x00039dd8) cale_week_day_heading_pane_t6_ParamLimits

0x584a,	// (0x00039e05) cale_week_day_heading_pane_t7_ParamLimits

0xf1dd,	// (0x00043798) cale_week_day_heading_pane_t_ParamLimits

0x2476,	// (0x00036a31) bg_cale_side_pane_ParamLimits

0x5877,	// (0x00039e32) cale_week_time_pane_t1_ParamLimits

0x588f,	// (0x00039e4a) cale_week_time_pane_t2_ParamLimits

0x58a7,	// (0x00039e62) cale_week_time_pane_t3_ParamLimits

0x58bf,	// (0x00039e7a) cale_week_time_pane_t4_ParamLimits

0x58d7,	// (0x00039e92) cale_week_time_pane_t5_ParamLimits

0x58ef,	// (0x00039eaa) cale_week_time_pane_t6_ParamLimits

0x5907,	// (0x00039ec2) cale_week_time_pane_t7_ParamLimits

0x591f,	// (0x00039eda) cale_week_time_pane_t8_ParamLimits

0xf1ec,	// (0x000437a7) cale_week_time_pane_t_ParamLimits

0x593b,	// (0x00039ef6) cell_cale_week_pane_g2_ParamLimits

0x2476,	// (0x00036a31) bg_cale_side_pane_cp01_ParamLimits

0x68e3,	// (0x0003ae9e) cale_month_week_pane_t1_ParamLimits

0x68fa,	// (0x0003aeb5) cale_month_week_pane_t2_ParamLimits

0x6911,	// (0x0003aecc) cale_month_week_pane_t3_ParamLimits

0x6928,	// (0x0003aee3) cale_month_week_pane_t4_ParamLimits

0x693f,	// (0x0003aefa) cale_month_week_pane_t5_ParamLimits

0x6956,	// (0x0003af11) cale_month_week_pane_t6_ParamLimits

0xf2c5,	// (0x00043880) cale_month_week_pane_t_ParamLimits

0x6a3b,	// (0x0003aff6) cell_cale_month_pane_g1_ParamLimits

0x1b96,	// (0x00036151) main_cale_event_viewer_pane

0x1b96,	// (0x00036151) listscroll_cale_event_viewer_pane

0xe281,	// (0x0004283c) list_cale_ev_pane

0xe289,	// (0x00042844) scroll_pane_cp023

0x8726,	// (0x0003cce1) field_cale_ev_pane_ParamLimits

0x8726,	// (0x0003cce1) field_cale_ev_pane

0xe295,	// (0x00042850) field_cale_ev_content_pane_ParamLimits

0xe295,	// (0x00042850) field_cale_ev_content_pane

0xe2a1,	// (0x0004285c) field_cale_ev_pane_g1_ParamLimits

0xe2a1,	// (0x0004285c) field_cale_ev_pane_g1

0xe2ad,	// (0x00042868) field_cale_ev_pane_g2_ParamLimits

0xe2ad,	// (0x00042868) field_cale_ev_pane_g2

0xe2c5,	// (0x00042880) field_cale_ev_pane_g3_ParamLimits

0xe2c5,	// (0x00042880) field_cale_ev_pane_g3

0x0002,

0xf706,	// (0x00043cc1) field_cale_ev_pane_g_ParamLimits

0xf706,	// (0x00043cc1) field_cale_ev_pane_g

0xe2dd,	// (0x00042898) field_cale_ev_pane_t1_ParamLimits

0xe2dd,	// (0x00042898) field_cale_ev_pane_t1

0x874a,	// (0x0003cd05) field_cale_ev_content_pane_t1_ParamLimits

0x874a,	// (0x0003cd05) field_cale_ev_content_pane_t1

0xcb26,	// (0x000410e1) bg_button_pane_cp01

0x2316,	// (0x000368d1) listscroll_cale_week_pane_ParamLimits

0x5528,	// (0x00039ae3) popup_toolbar_window_cp01

0x2464,	// (0x00036a1f) listscroll_cale_week_pane_t1_ParamLimits

0x2316,	// (0x000368d1) listscroll_cale_day_pane_ParamLimits

0x5528,	// (0x00039ae3) popup_toolbar_window_cp02

0x2464,	// (0x00036a1f) listscroll_cale_day_pane_t1_ParamLimits

0x2316,	// (0x000368d1) main_cale_month_pane_ParamLimits

0x7ea1,	// (0x0003c45c) popup_toolbar_window_cp03_ParamLimits

0x7ea1,	// (0x0003c45c) popup_toolbar_window_cp03

0x77ba,	// (0x0003bd75) main_image_pane_g2_ParamLimits

0x77ba,	// (0x0003bd75) main_image_pane_g2

0x77c6,	// (0x0003bd81) main_image_pane_g3_ParamLimits

0x77c6,	// (0x0003bd81) main_image_pane_g3

0x0002,

0xf4f7,	// (0x00043ab2) main_image_pane_g_ParamLimits

0xf4f7,	// (0x00043ab2) main_image_pane_g

0xcc40,	// (0x000411fb) main_image_pane_t1_ParamLimits

0x77d2,	// (0x0003bd8d) main_image_pane_t2_ParamLimits

0x77d2,	// (0x0003bd8d) main_image_pane_t2

0x77e4,	// (0x0003bd9f) main_image_pane_t3_ParamLimits

0x77e4,	// (0x0003bd9f) main_image_pane_t3

0x77f6,	// (0x0003bdb1) main_image_pane_t4_ParamLimits

0x77f6,	// (0x0003bdb1) main_image_pane_t4

0x0003,

0xf4fe,	// (0x00043ab9) main_image_pane_t_ParamLimits

0xf4fe,	// (0x00043ab9) main_image_pane_t

0x7808,	// (0x0003bdc3) popup_image_details_window_cp01

0x7812,	// (0x0003bdcd) popup_toobar_trans_pane_cp01_ParamLimits

0x7812,	// (0x0003bdcd) popup_toobar_trans_pane_cp01

0x7de3,	// (0x0003c39e) popup_image_details_window_ParamLimits

0x7de3,	// (0x0003c39e) popup_image_details_window

0x7df1,	// (0x0003c3ac) popup_image_focus_window

0x8112,	// (0x0003c6cd) camera2_autofocus_pane_ParamLimits

0x8112,	// (0x0003c6cd) camera2_autofocus_pane

0x1b96,	// (0x00036151) bg_popup_sub_pane_cp06

0xe2f4,	// (0x000428af) popup_image_focus_window_g1

0xe2fc,	// (0x000428b7) popup_image_focus_window_g2

0xe304,	// (0x000428bf) popup_image_focus_window_g3

0xe30c,	// (0x000428c7) popup_image_focus_window_g4

0x0003,

0xf70d,	// (0x00043cc8) popup_image_focus_window_g

0xe314,	// (0x000428cf) popup_image_focus_window_t1

0xe322,	// (0x000428dd) popup_image_focus_window_t2

0xe332,	// (0x000428ed) popup_image_focus_window_t3

0x0002,

0xf716,	// (0x00043cd1) popup_image_focus_window_t

0xe340,	// (0x000428fb) camera2_autofocus_pane_g1

0x238b,	// (0x00036946) bg_tb_trans_pane_cp01

0xe34e,	// (0x00042909) popup_image_details_window_g1

0xe361,	// (0x0004291c) popup_image_details_window_g2

0x0002,

0xf728,	// (0x00043ce3) popup_image_details_window_g

0xe38a,	// (0x00042945) popup_image_details_window_t1

0xe39c,	// (0x00042957) popup_image_details_window_t2

0xe3b5,	// (0x00042970) popup_image_details_window_t3

0xe3c9,	// (0x00042984) popup_image_details_window_t4

0xe3e4,	// (0x0004299f) popup_image_details_window_t5

0x0004,

0xf72f,	// (0x00043cea) popup_image_details_window_t

0x2302,	// (0x000368bd) bg_calc_paper_pane_ParamLimits

0x1b96,	// (0x00036151) grid_highlight_pane_cp013

0x52d8,	// (0x00039893) list_calc_pane_ParamLimits

0x52ea,	// (0x000398a5) scroll_pane_cp024

0x2316,	// (0x000368d1) bg_calc_display_pane_ParamLimits

0x52f2,	// (0x000398ad) calc_display_pane_t1_ParamLimits

0x5307,	// (0x000398c2) calc_display_pane_t2_ParamLimits

0x531c,	// (0x000398d7) calc_display_pane_t3_ParamLimits

0xf15f,	// (0x0004371a) calc_display_pane_t_ParamLimits

0x53f0,	// (0x000399ab) cell_calc_pane_g2

0x0001,

0xf17c,	// (0x00043737) cell_calc_pane_g

0x53f9,	// (0x000399b4) cell_calc_pane_t1

0x2375,	// (0x00036930) grid_highlight_pane_cp02_ParamLimits

0x2399,	// (0x00036954) toolbar_button_pane_cp01_ParamLimits

0x2399,	// (0x00036954) toolbar_button_pane_cp01

0xcc85,	// (0x00041240) temp_image_control_pane_ParamLimits

0xcc85,	// (0x00041240) temp_image_control_pane

0x238b,	// (0x00036946) main_mp3_pane

0xe3fe,	// (0x000429b9) temp_image_control_pane_g1_ParamLimits

0xe3fe,	// (0x000429b9) temp_image_control_pane_g1

0xe40c,	// (0x000429c7) temp_image_control_pane_g2_ParamLimits

0xe40c,	// (0x000429c7) temp_image_control_pane_g2

0xe41e,	// (0x000429d9) temp_image_control_pane_g3_ParamLimits

0xe41e,	// (0x000429d9) temp_image_control_pane_g3

0x8795,	// (0x0003cd50) temp_image_control_pane_g4_ParamLimits

0x8795,	// (0x0003cd50) temp_image_control_pane_g4

0x0003,

0xf73a,	// (0x00043cf5) temp_image_control_pane_g_ParamLimits

0xf73a,	// (0x00043cf5) temp_image_control_pane_g

0xe3fe,	// (0x000429b9) main_mp3_pane_g1

0x87a6,	// (0x0003cd61) main_mp3_pane_g2

0x0007,

0xf743,	// (0x00043cfe) main_mp3_pane_g

0xe461,	// (0x00042a1c) main_mp3_pane_t1

0x24db,	// (0x00036a96) main_camera_pane_g8_ParamLimits

0x24db,	// (0x00036a96) main_camera_pane_g8

0x5be7,	// (0x0003a1a2) main_video_pane_g7_ParamLimits

0x5be7,	// (0x0003a1a2) main_video_pane_g7

0x8255,	// (0x0003c810) main_camera2_pane_t7_ParamLimits

0x8255,	// (0x0003c810) main_camera2_pane_t7

0x26e5,	// (0x00036ca0) scroll_pane_cp025_ParamLimits

0x26e5,	// (0x00036ca0) scroll_pane_cp025

0x26f9,	// (0x00036cb4) scroll_pane_cp026_ParamLimits

0x26f9,	// (0x00036cb4) scroll_pane_cp026

0x2708,	// (0x00036cc3) wml_content_pane_ParamLimits

0x1b96,	// (0x00036151) main_touch_calib_pane

0x884a,	// (0x0003ce05) main_touch_calib_pane_g1

0x8856,	// (0x0003ce11) main_touch_calib_pane_g2

0x8862,	// (0x0003ce1d) main_touch_calib_pane_g3

0x886e,	// (0x0003ce29) main_touch_calib_pane_g4

0x0003,

0xf761,	// (0x00043d1c) main_touch_calib_pane_g

0x887a,	// (0x0003ce35) main_touch_calib_pane_t1

0x8891,	// (0x0003ce4c) main_touch_calib_pane_t2

0x0004,

0xf76a,	// (0x00043d25) main_touch_calib_pane_t

0xc8fc,	// (0x00040eb7) mup_progress_pane_cp02

0xc91b,	// (0x00040ed6) navi_pane_g1

0xc97d,	// (0x00040f38) navi_pane_mp_t3

0x238b,	// (0x00036946) main_mp3_pane_ParamLimits

0x7ee3,	// (0x0003c49e) navi_pane_ParamLimits

0xe3fe,	// (0x000429b9) main_mp3_pane_g1_ParamLimits

0x87a6,	// (0x0003cd61) main_mp3_pane_g2_ParamLimits

0x87b2,	// (0x0003cd6d) main_mp3_pane_g3_ParamLimits

0x87b2,	// (0x0003cd6d) main_mp3_pane_g3

0x87be,	// (0x0003cd79) main_mp3_pane_g4_ParamLimits

0x87be,	// (0x0003cd79) main_mp3_pane_g4

0xe42e,	// (0x000429e9) main_mp3_pane_g5_ParamLimits

0xe42e,	// (0x000429e9) main_mp3_pane_g5

0xe43c,	// (0x000429f7) main_mp3_pane_g6_ParamLimits

0xe43c,	// (0x000429f7) main_mp3_pane_g6

0xe449,	// (0x00042a04) main_mp3_pane_g7_ParamLimits

0xe449,	// (0x00042a04) main_mp3_pane_g7

0xe455,	// (0x00042a10) main_mp3_pane_g8_ParamLimits

0xe455,	// (0x00042a10) main_mp3_pane_g8

0xf743,	// (0x00043cfe) main_mp3_pane_g_ParamLimits

0x87ca,	// (0x0003cd85) main_mp3_pane_t2

0x87da,	// (0x0003cd95) main_mp3_pane_t3

0xe46f,	// (0x00042a2a) main_mp3_pane_t4

0xe47d,	// (0x00042a38) main_mp3_pane_t5

0x0005,

0xf754,	// (0x00043d0f) main_mp3_pane_t

0xe48b,	// (0x00042a46) mup_progress_pane_cp01

0x3b11,	// (0x000380cc) aid_zoom_text_secondary2

0xe281,	// (0x0004283c) list_cale_ev2_pane

0xe289,	// (0x00042844) scroll_pane_cp023_ParamLimits

0x88ec,	// (0x0003cea7) field_cale_ev2_pane_ParamLimits

0x88ec,	// (0x0003cea7) field_cale_ev2_pane

0x3db6,	// (0x00038371) field_cale_ev2_pane_g1_ParamLimits

0x3db6,	// (0x00038371) field_cale_ev2_pane_g1

0x3dc2,	// (0x0003837d) field_cale_ev2_pane_g2_ParamLimits

0x3dc2,	// (0x0003837d) field_cale_ev2_pane_g2

0x3dda,	// (0x00038395) field_cale_ev2_pane_g3_ParamLimits

0x3dda,	// (0x00038395) field_cale_ev2_pane_g3

0x0003,

0xf775,	// (0x00043d30) field_cale_ev2_pane_g_ParamLimits

0xf775,	// (0x00043d30) field_cale_ev2_pane_g

0x3dfe,	// (0x000383b9) field_cale_ev2_pane_t1_ParamLimits

0x3dfe,	// (0x000383b9) field_cale_ev2_pane_t1

0x3e15,	// (0x000383d0) field_cale_ev2_pane_t2_ParamLimits

0x3e15,	// (0x000383d0) field_cale_ev2_pane_t2

0x0001,

0xf77e,	// (0x00043d39) field_cale_ev2_pane_t_ParamLimits

0xf77e,	// (0x00043d39) field_cale_ev2_pane_t

0x7699,	// (0x0003bc54) main_postcard_pane_g5_ParamLimits

0x7699,	// (0x0003bc54) main_postcard_pane_g5

0x76a7,	// (0x0003bc62) main_postcard_pane_g6_ParamLimits

0x76a7,	// (0x0003bc62) main_postcard_pane_g6

0x5a25,	// (0x00039fe0) camera2_autofocus_pane_cp_ParamLimits

0x5a25,	// (0x00039fe0) camera2_autofocus_pane_cp

0x238b,	// (0x00036946) main_mup3_pane

0x8927,	// (0x0003cee2) main_mup3_pane_g1_ParamLimits

0x8927,	// (0x0003cee2) main_mup3_pane_g1

0x8948,	// (0x0003cf03) main_mup3_pane_g2_ParamLimits

0x8948,	// (0x0003cf03) main_mup3_pane_g2

0x89c4,	// (0x0003cf7f) main_mup3_pane_g3_ParamLimits

0x89c4,	// (0x0003cf7f) main_mup3_pane_g3

0x8a0d,	// (0x0003cfc8) main_mup3_pane_g4_ParamLimits

0x8a0d,	// (0x0003cfc8) main_mup3_pane_g4

0x8a56,	// (0x0003d011) main_mup3_pane_g5_ParamLimits

0x8a56,	// (0x0003d011) main_mup3_pane_g5

0x8a9f,	// (0x0003d05a) main_mup3_pane_g6_ParamLimits

0x8a9f,	// (0x0003d05a) main_mup3_pane_g6

0xe493,	// (0x00042a4e) main_mup3_pane_g7_ParamLimits

0xe493,	// (0x00042a4e) main_mup3_pane_g7

0x0007,

0xf78e,	// (0x00043d49) main_mup3_pane_g_ParamLimits

0xf78e,	// (0x00043d49) main_mup3_pane_g

0x8b19,	// (0x0003d0d4) main_mup3_pane_t1_ParamLimits

0x8b19,	// (0x0003d0d4) main_mup3_pane_t1

0x8b8a,	// (0x0003d145) main_mup3_pane_t2_ParamLimits

0x8b8a,	// (0x0003d145) main_mup3_pane_t2

0x8c53,	// (0x0003d20e) main_mup3_pane_t4_ParamLimits

0x8c53,	// (0x0003d20e) main_mup3_pane_t4

0x8ca7,	// (0x0003d262) main_mup3_pane_t5_ParamLimits

0x8ca7,	// (0x0003d262) main_mup3_pane_t5

0x8d5f,	// (0x0003d31a) main_mup3_pane_t6_ParamLimits

0x8d5f,	// (0x0003d31a) main_mup3_pane_t6

0x0005,

0xf79f,	// (0x00043d5a) main_mup3_pane_t_ParamLimits

0xf79f,	// (0x00043d5a) main_mup3_pane_t

0x8e0b,	// (0x0003d3c6) mup3_progress_pane_ParamLimits

0x8e0b,	// (0x0003d3c6) mup3_progress_pane

0x8e8d,	// (0x0003d448) popup_mup3_control_window_ParamLimits

0x8e8d,	// (0x0003d448) popup_mup3_control_window

0xe4a1,	// (0x00042a5c) popup_mup3_text_window

0x8eaa,	// (0x0003d465) mup3_progress_pane_t1

0x8ec9,	// (0x0003d484) mup3_progress_pane_t2

0xe4a9,	// (0x00042a64) mup3_progress_pane_t3

0x0002,

0xf7ac,	// (0x00043d67) mup3_progress_pane_t

0xe4c6,	// (0x00042a81) mup_progress_pane_cp03

0x1b96,	// (0x00036151) bg_tb_trans_pane_cp04

0x8ee8,	// (0x0003d4a3) mup3_volume_pane

0x8ef0,	// (0x0003d4ab) popup_mup3_control_window_g1

0x017a,	// (0x00034735) mup3_volume_pane_g1

0x0183,	// (0x0003473e) mup3_volume_pane_g2

0x018c,	// (0x00034747) mup3_volume_pane_g3

0x0002,

0xf7b3,	// (0x00043d6e) mup3_volume_pane_g

0x1b96,	// (0x00036151) bg_tb_trans_pane_cp03

0xe4d6,	// (0x00042a91) popup_mup3_text_window_g1

0xe4de,	// (0x00042a99) popup_mup3_text_window_t1

0x235e,	// (0x00036919) list_calc_item_pane_g1_ParamLimits

0xdf4b,	// (0x00042506) mup_volume_pane_cp_g1

0x88aa,	// (0x0003ce65) main_touch_calib_pane_t3

0x88c0,	// (0x0003ce7b) main_touch_calib_pane_t4

0x88d6,	// (0x0003ce91) main_touch_calib_pane_t5

0x4d00,	// (0x000392bb) aid_cell_size_toolbar2

0x4d08,	// (0x000392c3) aid_popup3_width_pane

0x3b09,	// (0x000380c4) aid_zoom_text_msg_primary

0x59fa,	// (0x00039fb5) vorec_t7

0x2322,	// (0x000368dd) bg_calc_paper_pane_g1_ParamLimits

0x233a,	// (0x000368f5) bg_calc_paper_pane_g2_ParamLimits

0x232e,	// (0x000368e9) bg_calc_paper_pane_g3_ParamLimits

0x2352,	// (0x0003690d) bg_calc_paper_pane_g4_ParamLimits

0x2346,	// (0x00036901) bg_calc_paper_pane_g5_ParamLimits

0x535d,	// (0x00039918) bg_calc_paper_pane_g6_ParamLimits

0x536e,	// (0x00039929) bg_calc_paper_pane_g7_ParamLimits

0x537f,	// (0x0003993a) bg_calc_paper_pane_g8_ParamLimits

0xf166,	// (0x00043721) bg_calc_paper_pane_g_ParamLimits

0x5392,	// (0x0003994d) calc_bg_paper_pane_g9_ParamLimits

0x5b16,	// (0x0003a0d1) image_qvga_pane_ParamLimits

0x5b16,	// (0x0003a0d1) image_qvga_pane

0x2243,	// (0x000367fe) bg_popup_sub_pane_cp04_ParamLimits

0xcbbc,	// (0x00041177) popup_mup_playback_window_g1_ParamLimits

0xcbc8,	// (0x00041183) popup_mup_playback_window_t1_ParamLimits

0xcbdd,	// (0x00041198) popup_mup_playback_window_t2_ParamLimits

0xf4f2,	// (0x00043aad) popup_mup_playback_window_t_ParamLimits

0x8384,	// (0x0003c93f) main_mup2_pane_g3_ParamLimits

0x8384,	// (0x0003c93f) main_mup2_pane_g3

0x5dc2,	// (0x0003a37d) popup_toolbar_window_cp04

0xcfd8,	// (0x00041593) popup_call2_audio_second_window_g3_ParamLimits

0xcfd8,	// (0x00041593) popup_call2_audio_second_window_g3

0xd3e2,	// (0x0004199d) popup_call2_audio_first_window_g4_ParamLimits

0xd3e2,	// (0x0004199d) popup_call2_audio_first_window_g4

0xda61,	// (0x0004201c) popup_call2_audio_in_window_g4_ParamLimits

0xda61,	// (0x0004201c) popup_call2_audio_in_window_g4

0x77ad,	// (0x0003bd68) aid_area_sk_bg_cut_ParamLimits

0x77ad,	// (0x0003bd68) aid_area_sk_bg_cut

0xcbf2,	// (0x000411ad) aid_area_sk_bg_cut_2_ParamLimits

0xcbf2,	// (0x000411ad) aid_area_sk_bg_cut_2

0x86fc,	// (0x0003ccb7) aid_placing_details_win

0x8704,	// (0x0003ccbf) aid_placing_details_win_2

0xe340,	// (0x000428fb) camera2_autofocus_pane_g1_ParamLimits

0x4f5b,	// (0x00039516) popup_fixed_preview_cale_window_ParamLimits

0x4f5b,	// (0x00039516) popup_fixed_preview_cale_window

0xc9cc,	// (0x00040f87) navi_slider_pane_g3

0xc9d5,	// (0x00040f90) navi_slider_pane_g4

0xc9de,	// (0x00040f99) navi_slider_pane_g5

0xc9cc,	// (0x00040f87) navi_slider_pane_g6

0x7058,	// (0x0003b613) navi_slider_pane_g7

0xcaf3,	// (0x000410ae) mup_scale_pane_g3

0xcafc,	// (0x000410b7) mup_scale_pane_g4

0xcb05,	// (0x000410c0) mup_scale_pane_g5

0x74cf,	// (0x0003ba8a) mup_scale_pane_g6

0x74d8,	// (0x0003ba93) mup_scale_pane_g7

0xc9cc,	// (0x00040f87) cams2_slider_pane_g3

0xdfcd,	// (0x00042588) cams2_slider_pane_g4

0x8659,	// (0x0003cc14) cams2_slider_pane_g5

0xc9cc,	// (0x00040f87) cams2_slider_pane_g6

0x8661,	// (0x0003cc1c) cams2_slider_pane_g7

0xe1fe,	// (0x000427b9) camera2_autofocus_pane_cp_g1

0xe4ec,	// (0x00042aa7) bg_popup_preview_window_pane_cp02_ParamLimits

0xe4ec,	// (0x00042aa7) bg_popup_preview_window_pane_cp02

0xe4f8,	// (0x00042ab3) list_fp_cale_pane_ParamLimits

0xe4f8,	// (0x00042ab3) list_fp_cale_pane

0xe504,	// (0x00042abf) popup_fixed_preview_cale_window_t1_ParamLimits

0xe504,	// (0x00042abf) popup_fixed_preview_cale_window_t1

0x8ef9,	// (0x0003d4b4) popup_fixed_preview_cale_window_t2_ParamLimits

0x8ef9,	// (0x0003d4b4) popup_fixed_preview_cale_window_t2

0x8f0e,	// (0x0003d4c9) popup_fixed_preview_cale_window_t3_ParamLimits

0x8f0e,	// (0x0003d4c9) popup_fixed_preview_cale_window_t3

0x0002,

0xf7ba,	// (0x00043d75) popup_fixed_preview_cale_window_t_ParamLimits

0xf7ba,	// (0x00043d75) popup_fixed_preview_cale_window_t

0x8f23,	// (0x0003d4de) list_single_fp_cale_pane_ParamLimits

0x8f23,	// (0x0003d4de) list_single_fp_cale_pane

0xe522,	// (0x00042add) list_single_fp_cale_pane_g1_ParamLimits

0xe522,	// (0x00042add) list_single_fp_cale_pane_g1

0xe52e,	// (0x00042ae9) list_single_fp_cale_pane_g2_ParamLimits

0xe52e,	// (0x00042ae9) list_single_fp_cale_pane_g2

0x0002,

0xf7c1,	// (0x00043d7c) list_single_fp_cale_pane_g_ParamLimits

0xf7c1,	// (0x00043d7c) list_single_fp_cale_pane_g

0xe547,	// (0x00042b02) list_single_fp_cale_pane_t1_ParamLimits

0xe547,	// (0x00042b02) list_single_fp_cale_pane_t1

0xe559,	// (0x00042b14) list_single_fp_cale_pane_t2_ParamLimits

0xe559,	// (0x00042b14) list_single_fp_cale_pane_t2

0x0001,

0xf7c8,	// (0x00043d83) list_single_fp_cale_pane_t_ParamLimits

0xf7c8,	// (0x00043d83) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x1b96,	// (0x00036151) main_dialer_pane

0x8f30,	// (0x0003d4eb) aid_cell_size_keypad

0x8f3a,	// (0x0003d4f5) dialer_ne_pane

0x8f44,	// (0x0003d4ff) grid_dialer_command_1_pane

0x8f4c,	// (0x0003d507) grid_dialer_command_2_pane

0x8f54,	// (0x0003d50f) grid_dialer_keypad_pane

0x8f68,	// (0x0003d523) bg_popup_call_pane_cp06_ParamLimits

0x8f68,	// (0x0003d523) bg_popup_call_pane_cp06

0x8f74,	// (0x0003d52f) dialer_ne_clear_pane_ParamLimits

0x8f74,	// (0x0003d52f) dialer_ne_clear_pane

0xe58c,	// (0x00042b47) dialer_ne_pane_g1

0xe594,	// (0x00042b4f) dialer_ne_pane_t1_ParamLimits

0xe594,	// (0x00042b4f) dialer_ne_pane_t1

0x8f80,	// (0x0003d53b) dialer_ne_pane_t2_ParamLimits

0x8f80,	// (0x0003d53b) dialer_ne_pane_t2

0x8f9d,	// (0x0003d558) dialer_ne_pane_t3_ParamLimits

0x8f9d,	// (0x0003d558) dialer_ne_pane_t3

0x0002,

0xf7cd,	// (0x00043d88) dialer_ne_pane_t_ParamLimits

0xf7cd,	// (0x00043d88) dialer_ne_pane_t

0x8fc1,	// (0x0003d57c) dialer_ne_pane_t3_copy1_ParamLimits

0x8fc1,	// (0x0003d57c) dialer_ne_pane_t3_copy1

0x8fe5,	// (0x0003d5a0) cell_dialer_keypad_pane_ParamLimits

0x8fe5,	// (0x0003d5a0) cell_dialer_keypad_pane

0x8ffa,	// (0x0003d5b5) cell_dialer_command_1_pane_ParamLimits

0x8ffa,	// (0x0003d5b5) cell_dialer_command_1_pane

0x9010,	// (0x0003d5cb) cell_dialer_command_2_pane_ParamLimits

0x9010,	// (0x0003d5cb) cell_dialer_command_2_pane

0xe5a6,	// (0x00042b61) bg_button_pane_cp02_ParamLimits

0xe5a6,	// (0x00042b61) bg_button_pane_cp02

0x901f,	// (0x0003d5da) cell_dialer_keypad_pane_g1_ParamLimits

0x901f,	// (0x0003d5da) cell_dialer_keypad_pane_g1

0xe5a6,	// (0x00042b61) bg_button_pane_cp03_ParamLimits

0xe5a6,	// (0x00042b61) bg_button_pane_cp03

0x9034,	// (0x0003d5ef) cell_dialer_command_1_pane_g1_ParamLimits

0x9034,	// (0x0003d5ef) cell_dialer_command_1_pane_g1

0xe5b2,	// (0x00042b6d) bg_button_pane_cp04

0x9048,	// (0x0003d603) cell_dialer_command_2_pane_g1

0xc9bb,	// (0x00040f76) bg_button_pane_cp06

0xe5ba,	// (0x00042b75) dialer_ne_clear_pane_g1

0x6f9b,	// (0x0003b556) navi_pane_g2

0x6fc9,	// (0x0003b584) navi_pane_g3

0x0002,

0xf3f5,	// (0x000439b0) navi_pane_g

0x6ff4,	// (0x0003b5af) navi_pane_mv_g2

0x701b,	// (0x0003b5d6) navi_pane_mv_g5

0x7023,	// (0x0003b5de) navi_pane_mv_t1

0x2316,	// (0x000368d1) main_clock2_pane

0x907a,	// (0x0003d635) main_clock2_list_pane_ParamLimits

0x907a,	// (0x0003d635) main_clock2_list_pane

0x90a4,	// (0x0003d65f) main_clock2_pane_t1_ParamLimits

0x90a4,	// (0x0003d65f) main_clock2_pane_t1

0x90c6,	// (0x0003d681) main_clock2_pane_t2_ParamLimits

0x90c6,	// (0x0003d681) main_clock2_pane_t2

0x0004,

0xf7d4,	// (0x00043d8f) main_clock2_pane_t_ParamLimits

0xf7d4,	// (0x00043d8f) main_clock2_pane_t

0x9123,	// (0x0003d6de) popup_clock_analogue_window_cp03_ParamLimits

0x9123,	// (0x0003d6de) popup_clock_analogue_window_cp03

0x9143,	// (0x0003d6fe) popup_clock_digital_window_cp02_ParamLimits

0x9143,	// (0x0003d6fe) popup_clock_digital_window_cp02

0x91b4,	// (0x0003d76f) main_clock2_list_single_pane_ParamLimits

0x91b4,	// (0x0003d76f) main_clock2_list_single_pane

0xc9bb,	// (0x00040f76) list_highlight_pane_cp05

0xe5c2,	// (0x00042b7d) main_clock2_list_single_pane_t1

0x5dc2,	// (0x0003a37d) popup_toolbar_window_cp04_ParamLimits

0x8765,	// (0x0003cd20) camera2_autofocus_pane_g2_ParamLimits

0x8765,	// (0x0003cd20) camera2_autofocus_pane_g2

0x8771,	// (0x0003cd2c) camera2_autofocus_pane_g3_ParamLimits

0x8771,	// (0x0003cd2c) camera2_autofocus_pane_g3

0x877d,	// (0x0003cd38) camera2_autofocus_pane_g4_ParamLimits

0x877d,	// (0x0003cd38) camera2_autofocus_pane_g4

0x8789,	// (0x0003cd44) camera2_autofocus_pane_g5_ParamLimits

0x8789,	// (0x0003cd44) camera2_autofocus_pane_g5

0x0004,

0xf71d,	// (0x00043cd8) camera2_autofocus_pane_g_ParamLimits

0xf71d,	// (0x00043cd8) camera2_autofocus_pane_g

0x8907,	// (0x0003cec2) camera2_autofocus_pane_cp_g2

0x890f,	// (0x0003ceca) camera2_autofocus_pane_cp_g3

0x8917,	// (0x0003ced2) camera2_autofocus_pane_cp_g4

0x891f,	// (0x0003ceda) camera2_autofocus_pane_cp_g5

0x0004,

0xf783,	// (0x00043d3e) camera2_autofocus_pane_cp_g

0x8f60,	// (0x0003d51b) popup_dialer_spcha_window

0x1b96,	// (0x00036151) bg_popup_sub_pane_cp07

0xe5d0,	// (0x00042b8b) list_spcha_pane

0xe5d8,	// (0x00042b93) list_single_spcha_pane_ParamLimits

0xe5d8,	// (0x00042b93) list_single_spcha_pane

0x1b96,	// (0x00036151) list_highlight_pane_cp06

0xe5e9,	// (0x00042ba4) list_single_spcha_pane_t1

0xd80b,	// (0x00041dc6) popup_call2_audio_out_window_g4_ParamLimits

0xd80b,	// (0x00041dc6) popup_call2_audio_out_window_g4

0x1b96,	// (0x00036151) main_imed2_pane

0x7dfb,	// (0x0003c3b6) popup_imed_adjust2_window

0x7e0e,	// (0x0003c3c9) popup_imed_trans_window_ParamLimits

0x7e0e,	// (0x0003c3c9) popup_imed_trans_window

0xe036,	// (0x000425f1) popup_blid_sat_info2_window_t1

0xe044,	// (0x000425ff) popup_blid_sat_info2_window_t2

0x000a,

0xf6b2,	// (0x00043c6d) popup_blid_sat_info2_window_t

0x925e,	// (0x0003d819) aid_size_cell_colour_35

0x9278,	// (0x0003d833) aid_size_cell_colour_112

0x928f,	// (0x0003d84a) aid_size_cell_effect

0x238b,	// (0x00036946) bg_tb_trans_pane_cp02

0x2a67,	// (0x00037022) heading_imed_pane

0x92a9,	// (0x0003d864) listscroll_imed_pane

0xe5f7,	// (0x00042bb2) heading_imed_pane_g1

0xe5ff,	// (0x00042bba) heading_imed_pane_t1

0xe60d,	// (0x00042bc8) grid_imed_colour_35_pane_ParamLimits

0xe60d,	// (0x00042bc8) grid_imed_colour_35_pane

0x92b5,	// (0x0003d870) grid_imed_effect_pane

0xe629,	// (0x00042be4) list_imed_aspect_pane

0x92c5,	// (0x0003d880) scroll_pane_cp027_ParamLimits

0x92c5,	// (0x0003d880) scroll_pane_cp027

0x92d1,	// (0x0003d88c) cell_imed_effect_pane_ParamLimits

0x92d1,	// (0x0003d88c) cell_imed_effect_pane

0xe631,	// (0x00042bec) cell_imed_colour_pane_ParamLimits

0xe631,	// (0x00042bec) cell_imed_colour_pane

0xe67b,	// (0x00042c36) cell_imed_colour_pane_g1_ParamLimits

0xe67b,	// (0x00042c36) cell_imed_colour_pane_g1

0xe68c,	// (0x00042c47) hgihlgiht_grid_pane_cp016_ParamLimits

0xe68c,	// (0x00042c47) hgihlgiht_grid_pane_cp016

0x92ed,	// (0x0003d8a8) cell_imed_effect_pane_g1

0x92f5,	// (0x0003d8b0) grid_highlight_pane_cp017

0xe69d,	// (0x00042c58) list_imed_single_pane_ParamLimits

0xe69d,	// (0x00042c58) list_imed_single_pane

0x1b96,	// (0x00036151) list_highlight_pane_cp07

0xe6b1,	// (0x00042c6c) list_imed_aspect_pane_comp1_t1

0xddc6,	// (0x00042381) bg_tb_trans_pane_cp05

0xe6d3,	// (0x00042c8e) popup_imed_adjust2_window_g1

0xe6fa,	// (0x00042cb5) popup_imed_adjust2_window_t1

0xe712,	// (0x00042ccd) slider_imed_adjust_pane

0xe726,	// (0x00042ce1) slider_imed_adjust_pane_g1

0xe736,	// (0x00042cf1) slider_imed_adjust_pane_g2

0xe746,	// (0x00042d01) slider_imed_adjust_pane_g3

0xe757,	// (0x00042d12) slider_imed_adjust_pane_g4

0x0003,

0xf7f1,	// (0x00043dac) slider_imed_adjust_pane_g

0x92fe,	// (0x0003d8b9) aid_size_cell_clipart2

0x930a,	// (0x0003d8c5) grid_imed_clipart_pane

0xe768,	// (0x00042d23) scroll_pane_cp031

0x9314,	// (0x0003d8cf) cell_imed_clipart_pane_ParamLimits

0x9314,	// (0x0003d8cf) cell_imed_clipart_pane

0x9332,	// (0x0003d8ed) cell_imed_clipart_pane_g1

0x1b96,	// (0x00036151) grid_highlight_pane_cp014

0x9086,	// (0x0003d641) main_clock2_pane_g1_ParamLimits

0x9086,	// (0x0003d641) main_clock2_pane_g1

0x915f,	// (0x0003d71a) aid_call2_pane_cp10

0x9171,	// (0x0003d72c) aid_call_pane_cp10

0xc8f0,	// (0x00040eab) popup_clock_analogue_window_cp10_g1

0xc8f0,	// (0x00040eab) popup_clock_analogue_window_cp10_g2

0x9183,	// (0x0003d73e) popup_clock_analogue_window_cp10_g3

0x9183,	// (0x0003d73e) popup_clock_analogue_window_cp10_g4

0xc8f0,	// (0x00040eab) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7df,	// (0x00043d9a) popup_clock_analogue_window_cp10_g

0x9195,	// (0x0003d750) popup_clock_analogue_window_cp10_t1

0x91c6,	// (0x0003d781) clock_digital_number_pane_cp10_ParamLimits

0x91c6,	// (0x0003d781) clock_digital_number_pane_cp10

0x91de,	// (0x0003d799) clock_digital_number_pane_cp11_ParamLimits

0x91de,	// (0x0003d799) clock_digital_number_pane_cp11

0x91f6,	// (0x0003d7b1) clock_digital_number_pane_cp12_ParamLimits

0x91f6,	// (0x0003d7b1) clock_digital_number_pane_cp12

0x920e,	// (0x0003d7c9) clock_digital_number_pane_cp13_ParamLimits

0x920e,	// (0x0003d7c9) clock_digital_number_pane_cp13

0x9226,	// (0x0003d7e1) clock_digital_separator_pane_cp10_ParamLimits

0x9226,	// (0x0003d7e1) clock_digital_separator_pane_cp10

0x923e,	// (0x0003d7f9) popup_clock_digital_window_cp02_t1_ParamLimits

0x923e,	// (0x0003d7f9) popup_clock_digital_window_cp02_t1

0x223b,	// (0x000367f6) clock_digital_number_pane_cp10_g1

0x223b,	// (0x000367f6) clock_digital_number_pane_cp10_g2

0x0001,

0xf7fa,	// (0x00043db5) clock_digital_number_pane_cp10_g

0x223b,	// (0x000367f6) clock_digital_separator_pane_cp10_g1

0x223b,	// (0x000367f6) clock_digital_separator_pane_g2_cp10

0xc98b,	// (0x00040f46) navi_pane_vded_g4

0xc994,	// (0x00040f4f) navi_pane_vded_g5

0xc99d,	// (0x00040f58) navi_pane_vded_t1

0x1b96,	// (0x00036151) main_vded_pane

0x933b,	// (0x0003d8f6) main_vded_pane_g1

0x9347,	// (0x0003d902) main_vded_pane_g2

0x9351,	// (0x0003d90c) main_vded_pane_g3

0x0002,

0xf7ff,	// (0x00043dba) main_vded_pane_g

0x935b,	// (0x0003d916) main_vded_pane_t1

0x9369,	// (0x0003d924) main_vded_pane_t2

0x0001,

0xf806,	// (0x00043dc1) main_vded_pane_t

0x9377,	// (0x0003d932) vded_slider_pane

0x9381,	// (0x0003d93c) vded_video_pane

0xe770,	// (0x00042d2b) vded_video_pane_g1

0x938d,	// (0x0003d948) vded_video_pane_g2

0xe1fe,	// (0x000427b9) vded_video_pane_g3

0x0002,

0xf80b,	// (0x00043dc6) vded_video_pane_g

0xe77a,	// (0x00042d35) vded_slider_pane_g1

0xdf4b,	// (0x00042506) vded_slider_pane_g2

0xe783,	// (0x00042d3e) vded_slider_pane_g3

0xe78c,	// (0x00042d47) vded_slider_pane_g4

0xe795,	// (0x00042d50) vded_slider_pane_g5

0x0004,

0xf812,	// (0x00043dcd) vded_slider_pane_g

0x8e81,	// (0x0003d43c) mup3_rocker_pane_ParamLimits

0x8e81,	// (0x0003d43c) mup3_rocker_pane

0x9396,	// (0x0003d951) mup3_control_keys_pane_g1

0x939e,	// (0x0003d959) mup3_control_keys_pane_g2

0x93a6,	// (0x0003d961) mup3_control_keys_pane_g3

0x93ae,	// (0x0003d969) mup3_control_keys_pane_g4

0x0003,

0xf81d,	// (0x00043dd8) mup3_control_keys_pane_g

0x4f83,	// (0x0003953e) popup_toolbar2_fixed_window_cp01_ParamLimits

0x4f83,	// (0x0003953e) popup_toolbar2_fixed_window_cp01

0x8e9d,	// (0x0003d458) popup_toolbar2_fixed_window_cp02_ParamLimits

0x8e9d,	// (0x0003d458) popup_toolbar2_fixed_window_cp02

0xd14a,	// (0x00041705) popup_call2_audio_second_window_t4_ParamLimits

0xd14a,	// (0x00041705) popup_call2_audio_second_window_t4

0xd678,	// (0x00041c33) popup_call2_audio_first_window_t6_ParamLimits

0xd678,	// (0x00041c33) popup_call2_audio_first_window_t6

0xd90e,	// (0x00041ec9) popup_call2_audio_out_window_t6_ParamLimits

0xd90e,	// (0x00041ec9) popup_call2_audio_out_window_t6

0x1b96,	// (0x00036151) main_vitu_pane

0x93be,	// (0x0003d979) aid_size_cell_itu_ParamLimits

0x93be,	// (0x0003d979) aid_size_cell_itu

0x4fab,	// (0x00039566) bg_popup_window_pane_cp08_ParamLimits

0x4fab,	// (0x00039566) bg_popup_window_pane_cp08

0x93cc,	// (0x0003d987) field_vitu_entry_pane_ParamLimits

0x93cc,	// (0x0003d987) field_vitu_entry_pane

0x93db,	// (0x0003d996) grid_vitu_function_pane_ParamLimits

0x93db,	// (0x0003d996) grid_vitu_function_pane

0x93eb,	// (0x0003d9a6) grid_vitu_itu_pane_ParamLimits

0x93eb,	// (0x0003d9a6) grid_vitu_itu_pane

0x93f9,	// (0x0003d9b4) cell_vitu_itu_pane_ParamLimits

0x93f9,	// (0x0003d9b4) cell_vitu_itu_pane

0x9410,	// (0x0003d9cb) cell_vitu_function_pane_ParamLimits

0x9410,	// (0x0003d9cb) cell_vitu_function_pane

0x238b,	// (0x00036946) bg_popup_sub_pane_cp08_ParamLimits

0x238b,	// (0x00036946) bg_popup_sub_pane_cp08

0x9424,	// (0x0003d9df) field_vitu_entry_pane_t1_ParamLimits

0x9424,	// (0x0003d9df) field_vitu_entry_pane_t1

0xe7b6,	// (0x00042d71) field_vitu_entry_pane_t2_ParamLimits

0xe7b6,	// (0x00042d71) field_vitu_entry_pane_t2

0x0001,

0xf82b,	// (0x00043de6) field_vitu_entry_pane_t_ParamLimits

0xf82b,	// (0x00043de6) field_vitu_entry_pane_t

0xe7d3,	// (0x00042d8e) bg_button_pane_cp05_ParamLimits

0xe7d3,	// (0x00042d8e) bg_button_pane_cp05

0x943d,	// (0x0003d9f8) cell_vitu_itu_pane_g1

0x9455,	// (0x0003da10) cell_vitu_itu_pane_t1_ParamLimits

0x9455,	// (0x0003da10) cell_vitu_itu_pane_t1

0x9467,	// (0x0003da22) cell_vitu_itu_pane_t2_ParamLimits

0x9467,	// (0x0003da22) cell_vitu_itu_pane_t2

0x0002,

0xf830,	// (0x00043deb) cell_vitu_itu_pane_t_ParamLimits

0xf830,	// (0x00043deb) cell_vitu_itu_pane_t

0xe7e1,	// (0x00042d9c) bg_button_pane_cp07

0x94aa,	// (0x0003da65) cell_vitu_function_pane_g1

0x51ff,	// (0x000397ba) main_calc_pane_g1

0x4d3c,	// (0x000392f7) aid_visual_content_pane

0x1b96,	// (0x00036151) main_vradio_pane

0x94b3,	// (0x0003da6e) main_vradio_pane_g1_ParamLimits

0x94b3,	// (0x0003da6e) main_vradio_pane_g1

0xe7eb,	// (0x00042da6) main_vradio_pane_g2_ParamLimits

0xe7eb,	// (0x00042da6) main_vradio_pane_g2

0x0001,

0xf837,	// (0x00043df2) main_vradio_pane_g_ParamLimits

0xf837,	// (0x00043df2) main_vradio_pane_g

0x94c1,	// (0x0003da7c) main_vradio_pane_t1_ParamLimits

0x94c1,	// (0x0003da7c) main_vradio_pane_t1

0x94d3,	// (0x0003da8e) main_vradio_pane_t2_ParamLimits

0x94d3,	// (0x0003da8e) main_vradio_pane_t2

0xe7f8,	// (0x00042db3) main_vradio_pane_t3_ParamLimits

0xe7f8,	// (0x00042db3) main_vradio_pane_t3

0x0002,

0xf83c,	// (0x00043df7) main_vradio_pane_t_ParamLimits

0xf83c,	// (0x00043df7) main_vradio_pane_t

0x94e5,	// (0x0003daa0) vradio_rocker_control_pane_ParamLimits

0x94e5,	// (0x0003daa0) vradio_rocker_control_pane

0x94f1,	// (0x0003daac) vradio_station_info_pane_ParamLimits

0x94f1,	// (0x0003daac) vradio_station_info_pane

0xe80c,	// (0x00042dc7) vradio_frequency_info_pane_ParamLimits

0xe80c,	// (0x00042dc7) vradio_frequency_info_pane

0xe1fe,	// (0x000427b9) vradio_station_info_pane_g1

0xe81b,	// (0x00042dd6) vradio_station_info_pane_t1_ParamLimits

0xe81b,	// (0x00042dd6) vradio_station_info_pane_t1

0xe83d,	// (0x00042df8) vradio_station_info_pane_t2_ParamLimits

0xe83d,	// (0x00042df8) vradio_station_info_pane_t2

0x0001,

0xf843,	// (0x00043dfe) vradio_station_info_pane_t_ParamLimits

0xf843,	// (0x00043dfe) vradio_station_info_pane_t

0xe84f,	// (0x00042e0a) vradio_tuning_pane

0xe857,	// (0x00042e12) vradio_rocker_control_pane_g1

0xe85f,	// (0x00042e1a) vradio_rocker_control_pane_g2

0xe867,	// (0x00042e22) vradio_rocker_control_pane_g3

0xe86f,	// (0x00042e2a) vradio_rocker_control_pane_g4

0xe877,	// (0x00042e32) vradio_rocker_control_pane_g5

0x0004,

0xf848,	// (0x00043e03) vradio_rocker_control_pane_g

0x94fe,	// (0x0003dab9) vradio_frequency_info_pane_g1

0xe87f,	// (0x00042e3a) vradio_frequency_info_pane_t1_ParamLimits

0xe87f,	// (0x00042e3a) vradio_frequency_info_pane_t1

0x9508,	// (0x0003dac3) vradio_tuning_pane_g1

0x9513,	// (0x0003dace) vradio_tuning_pane_t1

0x4d85,	// (0x00039340) area_side_right_pane_ParamLimits

0x4d85,	// (0x00039340) area_side_right_pane

0xdd8d,	// (0x00042348) status_small_pane_g1

0xdd95,	// (0x00042350) status_small_pane_g2

0xdd9e,	// (0x00042359) status_small_pane_g3

0xdda7,	// (0x00042362) status_small_pane_g4

0x0003,

0xf608,	// (0x00043bc3) status_small_pane_g

0xddb0,	// (0x0004236b) status_small_pane_t1

0x1b96,	// (0x00036151) main_video3_pane

0xe893,	// (0x00042e4e) cams_zoom_vslider_pane

0xe89b,	// (0x00042e56) image3_wide_pane_ParamLimits

0xe89b,	// (0x00042e56) image3_wide_pane

0xe8b5,	// (0x00042e70) image3_wide_small_pane

0xe8c1,	// (0x00042e7c) main_video3_pane_g1_ParamLimits

0xe8c1,	// (0x00042e7c) main_video3_pane_g1

0xe8dd,	// (0x00042e98) main_video3_pane_g2_ParamLimits

0xe8dd,	// (0x00042e98) main_video3_pane_g2

0x0001,

0xf853,	// (0x00043e0e) main_video3_pane_g_ParamLimits

0xf853,	// (0x00043e0e) main_video3_pane_g

0xe8f9,	// (0x00042eb4) main_video3_pane_t1_ParamLimits

0xe8f9,	// (0x00042eb4) main_video3_pane_t1

0xe924,	// (0x00042edf) main_video3_pane_t2_ParamLimits

0xe924,	// (0x00042edf) main_video3_pane_t2

0xe951,	// (0x00042f0c) main_video3_pane_t3_ParamLimits

0xe951,	// (0x00042f0c) main_video3_pane_t3

0x0002,

0xf858,	// (0x00043e13) main_video3_pane_t_ParamLimits

0xf858,	// (0x00043e13) main_video3_pane_t

0xe97e,	// (0x00042f39) cams_zoom_vslider_pane_g1

0xe987,	// (0x00042f42) cams_zoom_vslider_pane_g2

0x0001,

0xf85f,	// (0x00043e1a) cams_zoom_vslider_pane_g

0xe98f,	// (0x00042f4a) small_slider_vertical_pane

0xe1fe,	// (0x000427b9) small_slider_vertical_pane_g1

0xe1fe,	// (0x000427b9) small_slider_vertical_pane_g2

0xe997,	// (0x00042f52) small_slider_vertical_pane_g3

0x0002,

0xf864,	// (0x00043e1f) small_slider_vertical_pane_g

0x1b96,	// (0x00036151) main_hwr_training_pane

0xe9a0,	// (0x00042f5b) hwr_training_instruct_pane_ParamLimits

0xe9a0,	// (0x00042f5b) hwr_training_instruct_pane

0x9522,	// (0x0003dadd) hwr_training_navi_pane_ParamLimits

0x9522,	// (0x0003dadd) hwr_training_navi_pane

0x953c,	// (0x0003daf7) hwr_training_write_pane_ParamLimits

0x953c,	// (0x0003daf7) hwr_training_write_pane

0x1b96,	// (0x00036151) bg_frame_shadow_pane

0xe9d7,	// (0x00042f92) hwr_training_write_pane_g1

0xe9df,	// (0x00042f9a) hwr_training_write_pane_g2

0xe9e7,	// (0x00042fa2) hwr_training_write_pane_g3

0xe9ef,	// (0x00042faa) hwr_training_write_pane_g4

0xe9f7,	// (0x00042fb2) hwr_training_write_pane_g5

0xe9ff,	// (0x00042fba) hwr_training_write_pane_g6

0xea07,	// (0x00042fc2) hwr_training_write_pane_g7

0x0006,

0xf86b,	// (0x00043e26) hwr_training_write_pane_g

0x9574,	// (0x0003db2f) hwr_training_navi_pane_g1_ParamLimits

0x9574,	// (0x0003db2f) hwr_training_navi_pane_g1

0x9586,	// (0x0003db41) hwr_training_navi_pane_g2_ParamLimits

0x9586,	// (0x0003db41) hwr_training_navi_pane_g2

0x9598,	// (0x0003db53) hwr_training_navi_pane_g3_ParamLimits

0x9598,	// (0x0003db53) hwr_training_navi_pane_g3

0x95a8,	// (0x0003db63) hwr_training_navi_pane_g4_ParamLimits

0x95a8,	// (0x0003db63) hwr_training_navi_pane_g4

0x0004,

0xf87a,	// (0x00043e35) hwr_training_navi_pane_g_ParamLimits

0xf87a,	// (0x00043e35) hwr_training_navi_pane_g

0x95c2,	// (0x0003db7d) hwr_training_navi_pane_t1

0x95d0,	// (0x0003db8b) list_single_hwr_training_instruct_pane_ParamLimits

0x95d0,	// (0x0003db8b) list_single_hwr_training_instruct_pane

0xea0f,	// (0x00042fca) list_single_hwr_training_instruct_pane_t1

0xe13e,	// (0x000426f9) bg_frame_shadow_pane_g1

0xea1e,	// (0x00042fd9) bg_frame_shadow_pane_g2

0xea26,	// (0x00042fe1) bg_frame_shadow_pane_g3

0xea2e,	// (0x00042fe9) bg_frame_shadow_pane_g4

0xea36,	// (0x00042ff1) bg_frame_shadow_pane_g5

0xea3e,	// (0x00042ff9) bg_frame_shadow_pane_g6

0xea46,	// (0x00043001) bg_frame_shadow_pane_g7

0x23ef,	// (0x000369aa) bg_frame_shadow_pane_g8

0x0007,

0xf885,	// (0x00043e40) bg_frame_shadow_pane_g

0x1b96,	// (0x00036151) main_video_tele_dialer_pane

0x95e9,	// (0x0003dba4) aid_size_cell_video_keypad_ParamLimits

0x95e9,	// (0x0003dba4) aid_size_cell_video_keypad

0x95f9,	// (0x0003dbb4) grid_video_dialer_keypad_pane_ParamLimits

0x95f9,	// (0x0003dbb4) grid_video_dialer_keypad_pane

0x962b,	// (0x0003dbe6) video_down_pane_cp_ParamLimits

0x962b,	// (0x0003dbe6) video_down_pane_cp

0x9653,	// (0x0003dc0e) cell_video_dialer_keypad_pane_ParamLimits

0x9653,	// (0x0003dc0e) cell_video_dialer_keypad_pane

0xea4e,	// (0x00043009) bg_button_pane_cp08_ParamLimits

0xea4e,	// (0x00043009) bg_button_pane_cp08

0x966a,	// (0x0003dc25) cell_video_dialer_keypad_pane_g1_ParamLimits

0x966a,	// (0x0003dc25) cell_video_dialer_keypad_pane_g1

0x8e75,	// (0x0003d430) mup3_rocker2_pane_ParamLimits

0x8e75,	// (0x0003d430) mup3_rocker2_pane

0xe1fe,	// (0x000427b9) mup3_rocker2_pane_g1

0x7d5f,	// (0x0003c31a) main_dialer2_pane

0x1b96,	// (0x00036151) main_mp4_pane

0x96a9,	// (0x0003dc64) main_mp4_pane_g1_ParamLimits

0x96a9,	// (0x0003dc64) main_mp4_pane_g1

0x96b7,	// (0x0003dc72) main_mp4_pane_g2_ParamLimits

0x96b7,	// (0x0003dc72) main_mp4_pane_g2

0x96c5,	// (0x0003dc80) main_mp4_pane_g3_ParamLimits

0x96c5,	// (0x0003dc80) main_mp4_pane_g3

0x9718,	// (0x0003dcd3) main_mp4_pane_g4_ParamLimits

0x9718,	// (0x0003dcd3) main_mp4_pane_g4

0x9740,	// (0x0003dcfb) main_mp4_pane_g5_ParamLimits

0x9740,	// (0x0003dcfb) main_mp4_pane_g5

0x0005,

0xf8a5,	// (0x00043e60) main_mp4_pane_g_ParamLimits

0xf8a5,	// (0x00043e60) main_mp4_pane_g

0x9790,	// (0x0003dd4b) main_mp4_pane_t1_ParamLimits

0x9790,	// (0x0003dd4b) main_mp4_pane_t1

0x97ec,	// (0x0003dda7) main_mp4_pane_t2_ParamLimits

0x97ec,	// (0x0003dda7) main_mp4_pane_t2

0xea72,	// (0x0004302d) main_mp4_pane_t3_ParamLimits

0xea72,	// (0x0004302d) main_mp4_pane_t3

0x983e,	// (0x0003ddf9) main_mp4_pane_t4_ParamLimits

0x983e,	// (0x0003ddf9) main_mp4_pane_t4

0x0003,

0xf8b2,	// (0x00043e6d) main_mp4_pane_t_ParamLimits

0xf8b2,	// (0x00043e6d) main_mp4_pane_t

0x987e,	// (0x0003de39) mp4_progress_pane_ParamLimits

0x987e,	// (0x0003de39) mp4_progress_pane

0x98c8,	// (0x0003de83) mp4_rocker_pane_ParamLimits

0x98c8,	// (0x0003de83) mp4_rocker_pane

0xea9a,	// (0x00043055) mp4_progress_pane_t1

0xeab3,	// (0x0004306e) mp4_progress_pane_t2

0x0001,

0xf8bb,	// (0x00043e76) mp4_progress_pane_t

0xeacc,	// (0x00043087) mup_progress_pane_cp04

0xe1fe,	// (0x000427b9) mp4_rocker_pane_g1

0x98ea,	// (0x0003dea5) aid_cell_size_keypad2_ParamLimits

0x98ea,	// (0x0003dea5) aid_cell_size_keypad2

0x98fa,	// (0x0003deb5) dialer2_ne_pane_ParamLimits

0x98fa,	// (0x0003deb5) dialer2_ne_pane

0x9906,	// (0x0003dec1) grid_dialer2_keypad_pane_ParamLimits

0x9906,	// (0x0003dec1) grid_dialer2_keypad_pane

0x0250,	// (0x0003480b) bg_popup_call_pane_cp07_ParamLimits

0x0250,	// (0x0003480b) bg_popup_call_pane_cp07

0x9914,	// (0x0003decf) dialer2_ne_pane_t1_ParamLimits

0x9914,	// (0x0003decf) dialer2_ne_pane_t1

0x9939,	// (0x0003def4) cell_dialer2_keypad_pane_ParamLimits

0x9939,	// (0x0003def4) cell_dialer2_keypad_pane

0xeaea,	// (0x000430a5) bg_button_pane_pane_cp04_ParamLimits

0xeaea,	// (0x000430a5) bg_button_pane_pane_cp04

0x9950,	// (0x0003df0b) cell_dialer2_keypad_pane_g1_ParamLimits

0x9950,	// (0x0003df0b) cell_dialer2_keypad_pane_g1

0x5c94,	// (0x0003a24f) aid_placing_vt_set_content_ParamLimits

0x5c94,	// (0x0003a24f) aid_placing_vt_set_content

0x5cbc,	// (0x0003a277) aid_placing_vt_set_title_ParamLimits

0x5cbc,	// (0x0003a277) aid_placing_vt_set_title

0x1b96,	// (0x00036151) main_image3_pane

0x99ea,	// (0x0003dfa5) area_side_right_pane_cp01_ParamLimits

0x99ea,	// (0x0003dfa5) area_side_right_pane_cp01

0x083e,	// (0x00034df9) main_image3_pane_g1_ParamLimits

0x083e,	// (0x00034df9) main_image3_pane_g1

0x9a19,	// (0x0003dfd4) main_image3_pane_g2_ParamLimits

0x9a19,	// (0x0003dfd4) main_image3_pane_g2

0x9a32,	// (0x0003dfed) main_image3_pane_g3_ParamLimits

0x9a32,	// (0x0003dfed) main_image3_pane_g3

0x9a4b,	// (0x0003e006) main_image3_pane_g4_ParamLimits

0x9a4b,	// (0x0003e006) main_image3_pane_g4

0x0003,

0xf8ca,	// (0x00043e85) main_image3_pane_g_ParamLimits

0xf8ca,	// (0x00043e85) main_image3_pane_g

0x9a64,	// (0x0003e01f) main_image3_pane_t1_ParamLimits

0x9a64,	// (0x0003e01f) main_image3_pane_t1

0x9a89,	// (0x0003e044) main_image3_pane_t2_ParamLimits

0x9a89,	// (0x0003e044) main_image3_pane_t2

0x9aa8,	// (0x0003e063) main_image3_pane_t3_ParamLimits

0x9aa8,	// (0x0003e063) main_image3_pane_t3

0x0003,

0xf8d3,	// (0x00043e8e) main_image3_pane_t_ParamLimits

0xf8d3,	// (0x00043e8e) main_image3_pane_t

0x4fab,	// (0x00039566) grid_sctrl_middle_pane_cp01_ParamLimits

0x4fab,	// (0x00039566) grid_sctrl_middle_pane_cp01

0x9b09,	// (0x0003e0c4) cell_sctrl_middle_pane_cp01_ParamLimits

0x9b09,	// (0x0003e0c4) cell_sctrl_middle_pane_cp01

0x9b1a,	// (0x0003e0d5) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x9b1a,	// (0x0003e0d5) cell_sctrl_middle_pane_cp01_g1

0x1b96,	// (0x00036151) main_call4_pane

0x9b27,	// (0x0003e0e2) aid_size_button_call4_ParamLimits

0x9b27,	// (0x0003e0e2) aid_size_button_call4

0x9b59,	// (0x0003e114) call4_windows_pane_ParamLimits

0x9b59,	// (0x0003e114) call4_windows_pane

0x9b75,	// (0x0003e130) grid_call4_button_pane_ParamLimits

0x9b75,	// (0x0003e130) grid_call4_button_pane

0xeaf6,	// (0x000430b1) call4_windows_conf_pane

0x9b99,	// (0x0003e154) popup_call4_audio_first_window_ParamLimits

0x9b99,	// (0x0003e154) popup_call4_audio_first_window

0x9bc5,	// (0x0003e180) popup_call4_audio_second_window_ParamLimits

0x9bc5,	// (0x0003e180) popup_call4_audio_second_window

0xeb33,	// (0x000430ee) popup_call4_audio_wait_window_ParamLimits

0xeb33,	// (0x000430ee) popup_call4_audio_wait_window

0x9bd9,	// (0x0003e194) cell_call4_button_pane_ParamLimits

0x9bd9,	// (0x0003e194) cell_call4_button_pane

0x9bfc,	// (0x0003e1b7) bg_button_pane_cp09_ParamLimits

0x9bfc,	// (0x0003e1b7) bg_button_pane_cp09

0x9c08,	// (0x0003e1c3) cell_call4_button_pane_g1_ParamLimits

0x9c08,	// (0x0003e1c3) cell_call4_button_pane_g1

0x9c15,	// (0x0003e1d0) cell_call4_button_pane_t1_ParamLimits

0x9c15,	// (0x0003e1d0) cell_call4_button_pane_t1

0xeb7b,	// (0x00043136) popup_call4_audio_conf_window_ParamLimits

0xeb7b,	// (0x00043136) popup_call4_audio_conf_window

0x8eaa,	// (0x0003d465) mup3_progress_pane_t1_ParamLimits

0x8ec9,	// (0x0003d484) mup3_progress_pane_t2_ParamLimits

0xe4a9,	// (0x00042a64) mup3_progress_pane_t3_ParamLimits

0xf7ac,	// (0x00043d67) mup3_progress_pane_t_ParamLimits

0xe4c6,	// (0x00042a81) mup_progress_pane_cp03_ParamLimits

0x93b6,	// (0x0003d971) mup3_control_keys_pane_g4_copy1

0x98ac,	// (0x0003de67) mp4_rocker2_pane_ParamLimits

0x98ac,	// (0x0003de67) mp4_rocker2_pane

0xeb95,	// (0x00043150) mp4_rocker2_pane_g1

0xeb9d,	// (0x00043158) mp4_rocker2_pane_g2

0x9c27,	// (0x0003e1e2) mp4_rocker2_pane_g3

0x9c2f,	// (0x0003e1ea) mp4_rocker2_pane_g4

0x9c37,	// (0x0003e1f2) mp4_rocker2_pane_g5

0x0004,

0xf8dc,	// (0x00043e97) mp4_rocker2_pane_g

0x1b96,	// (0x00036151) main_camera4_pane

0x1b96,	// (0x00036151) main_video4_pane

0x9607,	// (0x0003dbc2) main_video_tele_dialer_pane_t1_ParamLimits

0x9607,	// (0x0003dbc2) main_video_tele_dialer_pane_t1

0x9619,	// (0x0003dbd4) main_video_tele_dialer_pane_t2_ParamLimits

0x9619,	// (0x0003dbd4) main_video_tele_dialer_pane_t2

0x0001,

0xf896,	// (0x00043e51) main_video_tele_dialer_pane_t_ParamLimits

0xf896,	// (0x00043e51) main_video_tele_dialer_pane_t

0x9c57,	// (0x0003e212) cam4_autofocus_pane_ParamLimits

0x9c57,	// (0x0003e212) cam4_autofocus_pane

0x9c6f,	// (0x0003e22a) cam4_image_uncrop_pane_ParamLimits

0x9c6f,	// (0x0003e22a) cam4_image_uncrop_pane

0x9c88,	// (0x0003e243) cam4_indicators_pane_ParamLimits

0x9c88,	// (0x0003e243) cam4_indicators_pane

0x9ca4,	// (0x0003e25f) main_camera4_pane_g1_ParamLimits

0x9ca4,	// (0x0003e25f) main_camera4_pane_g1

0x9cb0,	// (0x0003e26b) main_camera4_pane_g2_ParamLimits

0x9cb0,	// (0x0003e26b) main_camera4_pane_g2

0x9cb0,	// (0x0003e26b) main_camera4_pane_g3_ParamLimits

0x9cb0,	// (0x0003e26b) main_camera4_pane_g3

0x9cbc,	// (0x0003e277) main_camera4_pane_g4_ParamLimits

0x9cbc,	// (0x0003e277) main_camera4_pane_g4

0x9cc8,	// (0x0003e283) main_camera4_pane_g5_ParamLimits

0x9cc8,	// (0x0003e283) main_camera4_pane_g5

0x0005,

0xf8e7,	// (0x00043ea2) main_camera4_pane_g_ParamLimits

0xf8e7,	// (0x00043ea2) main_camera4_pane_g

0x9ce2,	// (0x0003e29d) main_camera4_pane_t1_ParamLimits

0x9ce2,	// (0x0003e29d) main_camera4_pane_t1

0xe42e,	// (0x000429e9) bg_tb_trans_pane_cp06

0x9d34,	// (0x0003e2ef) cam4_indicators_pane_g1

0x9d45,	// (0x0003e300) cam4_indicators_pane_g2

0x0002,

0xf902,	// (0x00043ebd) cam4_indicators_pane_g

0x9d5d,	// (0x0003e318) cam4_indicators_pane_t1

0x9d87,	// (0x0003e342) main_video4_pane_g1_ParamLimits

0x9d87,	// (0x0003e342) main_video4_pane_g1

0x9d93,	// (0x0003e34e) main_video4_pane_g2_ParamLimits

0x9d93,	// (0x0003e34e) main_video4_pane_g2

0x9d9f,	// (0x0003e35a) main_video4_pane_g3_ParamLimits

0x9d9f,	// (0x0003e35a) main_video4_pane_g3

0x9dab,	// (0x0003e366) main_video4_pane_g4_ParamLimits

0x9dab,	// (0x0003e366) main_video4_pane_g4

0x0004,

0xf909,	// (0x00043ec4) main_video4_pane_g_ParamLimits

0xf909,	// (0x00043ec4) main_video4_pane_g

0x9dcd,	// (0x0003e388) vid4_indicators_pane_ParamLimits

0x9dcd,	// (0x0003e388) vid4_indicators_pane

0x9dec,	// (0x0003e3a7) video4_image_uncrop_cif_pane_ParamLimits

0x9dec,	// (0x0003e3a7) video4_image_uncrop_cif_pane

0x9dfb,	// (0x0003e3b6) video4_image_uncrop_nhd_pane_ParamLimits

0x9dfb,	// (0x0003e3b6) video4_image_uncrop_nhd_pane

0x9c6f,	// (0x0003e22a) video4_image_uncrop_vga_pane_ParamLimits

0x9c6f,	// (0x0003e22a) video4_image_uncrop_vga_pane

0x238b,	// (0x00036946) bg_tb_trans_pane_cp07

0x9e14,	// (0x0003e3cf) vid4_indicators_pane_g1

0x9e2a,	// (0x0003e3e5) vid4_indicators_pane_g2

0x9e3e,	// (0x0003e3f9) vid4_indicators_pane_g3

0x0004,

0xf914,	// (0x00043ecf) vid4_indicators_pane_g

0x9e6f,	// (0x0003e42a) vid4_indicators_pane_t1

0x9e86,	// (0x0003e441) cam4_autofocus_pane_g1

0x9e8e,	// (0x0003e449) cam4_autofocus_pane_g2

0x9e96,	// (0x0003e451) cam4_autofocus_pane_g3

0x0002,

0xf91f,	// (0x00043eda) cam4_autofocus_pane_g

0x9e9e,	// (0x0003e459) cam4_autofocus_pane_g3_copy1

0x9637,	// (0x0003dbf2) video_down_pane_cp_t1

0x9645,	// (0x0003dc00) video_down_pane_cp_t2

0x0001,

0xf89b,	// (0x00043e56) video_down_pane_cp_t

0x4fab,	// (0x00039566) popup_vitu2_window_ParamLimits

0x4fab,	// (0x00039566) popup_vitu2_window

0x9ea6,	// (0x0003e461) aid_size_cell2_itu2_ParamLimits

0x9ea6,	// (0x0003e461) aid_size_cell2_itu2

0x9ec8,	// (0x0003e483) aid_size_cell_itu2_ParamLimits

0x9ec8,	// (0x0003e483) aid_size_cell_itu2

0x0250,	// (0x0003480b) bg_popup_window_pane_cp09_ParamLimits

0x0250,	// (0x0003480b) bg_popup_window_pane_cp09

0x9f0c,	// (0x0003e4c7) field_vitu2_entry_pane_ParamLimits

0x9f0c,	// (0x0003e4c7) field_vitu2_entry_pane

0x9f2c,	// (0x0003e4e7) grid_vitu2_function_pane_ParamLimits

0x9f2c,	// (0x0003e4e7) grid_vitu2_function_pane

0x9f70,	// (0x0003e52b) grid_vitu2_itu_pane_ParamLimits

0x9f70,	// (0x0003e52b) grid_vitu2_itu_pane

0x9fe4,	// (0x0003e59f) cell_vitu2_itu_pane_ParamLimits

0x9fe4,	// (0x0003e59f) cell_vitu2_itu_pane

0x9ffb,	// (0x0003e5b6) cell_vitu2_function_pane_ParamLimits

0x9ffb,	// (0x0003e5b6) cell_vitu2_function_pane

0xeba5,	// (0x00043160) bg_popup_call_pane_cp08_ParamLimits

0xeba5,	// (0x00043160) bg_popup_call_pane_cp08

0xebbe,	// (0x00043179) field_vitu2_entry_pane_g1

0xebf0,	// (0x000431ab) field_vitu2_entry_pane_g2

0x0002,

0xf926,	// (0x00043ee1) field_vitu2_entry_pane_g

0x3e2a,	// (0x000383e5) field_vitu2_entry_pane_t1_ParamLimits

0x3e2a,	// (0x000383e5) field_vitu2_entry_pane_t1

0x3e59,	// (0x00038414) field_vitu2_entry_pane_t2_ParamLimits

0x3e59,	// (0x00038414) field_vitu2_entry_pane_t2

0x0001,

0xf92d,	// (0x00043ee8) field_vitu2_entry_pane_t_ParamLimits

0xf92d,	// (0x00043ee8) field_vitu2_entry_pane_t

0xa03f,	// (0x0003e5fa) bg_button_pane_cp010_ParamLimits

0xa03f,	// (0x0003e5fa) bg_button_pane_cp010

0xa04d,	// (0x0003e608) cell_vitu2_itu_pane_g1

0xa06b,	// (0x0003e626) cell_vitu2_itu_pane_t1_ParamLimits

0xa06b,	// (0x0003e626) cell_vitu2_itu_pane_t1

0x3e76,	// (0x00038431) cell_vitu2_itu_pane_t2_ParamLimits

0x3e76,	// (0x00038431) cell_vitu2_itu_pane_t2

0x0002,

0xf937,	// (0x00043ef2) cell_vitu2_itu_pane_t_ParamLimits

0xf937,	// (0x00043ef2) cell_vitu2_itu_pane_t

0x238b,	// (0x00036946) bg_button_pane_cp011

0xa0bd,	// (0x0003e678) cell_vitu2_function_pane_g1

0x1b96,	// (0x00036151) main_myfav_hc_pane

0x9aea,	// (0x0003e0a5) popup_image3_note_pane_ParamLimits

0x9aea,	// (0x0003e0a5) popup_image3_note_pane

0x9af8,	// (0x0003e0b3) popup_image3_tool_bar_pane_ParamLimits

0x9af8,	// (0x0003e0b3) popup_image3_tool_bar_pane

0x3ee4,	// (0x0003849f) cell_vitu2_itu_pane_t3_ParamLimits

0x3ee4,	// (0x0003849f) cell_vitu2_itu_pane_t3

0x1b96,	// (0x00036151) bg_popup_trans_pane

0xec12,	// (0x000431cd) grid_image3_tool_bar_pane

0xec1c,	// (0x000431d7) bg_popup_trans_pane_g1

0x27ee,	// (0x00036da9) bg_popup_trans_pane_g2

0xec24,	// (0x000431df) bg_popup_trans_pane_g3

0xec2c,	// (0x000431e7) bg_popup_trans_pane_g4

0xec34,	// (0x000431ef) bg_popup_trans_pane_g5

0xec3c,	// (0x000431f7) bg_popup_trans_pane_g6

0xec44,	// (0x000431ff) bg_popup_trans_pane_g7

0xec4c,	// (0x00043207) bg_popup_trans_pane_g8

0x27ce,	// (0x00036d89) bg_popup_trans_pane_g9

0x0008,

0xf93e,	// (0x00043ef9) bg_popup_trans_pane_g

0xec54,	// (0x0004320f) cell_image3_tool_bar_pane_ParamLimits

0xec54,	// (0x0004320f) cell_image3_tool_bar_pane

0xe1fe,	// (0x000427b9) cell_image3_tool_bar_pane_g1

0x1b96,	// (0x00036151) bg_popup_trans_pane_cp1

0xec6a,	// (0x00043225) popup_image3_note_pane_t1

0xec78,	// (0x00043233) popup_image3_note_pane_t2

0xec86,	// (0x00043241) popup_image3_note_pane_t3

0x0002,

0xf951,	// (0x00043f0c) popup_image3_note_pane_t

0xec96,	// (0x00043251) popup_image3_note_pane_t3_copy1

0xa0d1,	// (0x0003e68c) bg_myfav_hc_instruction_pane_ParamLimits

0xa0d1,	// (0x0003e68c) bg_myfav_hc_instruction_pane

0xa0e9,	// (0x0003e6a4) cell_myfav_contact_pane_ParamLimits

0xa0e9,	// (0x0003e6a4) cell_myfav_contact_pane

0xa103,	// (0x0003e6be) cell_myfav_contact_pane_cp1_ParamLimits

0xa103,	// (0x0003e6be) cell_myfav_contact_pane_cp1

0xa11b,	// (0x0003e6d6) cell_myfav_contact_pane_cp2_ParamLimits

0xa11b,	// (0x0003e6d6) cell_myfav_contact_pane_cp2

0xa133,	// (0x0003e6ee) cell_myfav_contact_pane_cp3_ParamLimits

0xa133,	// (0x0003e6ee) cell_myfav_contact_pane_cp3

0xa14a,	// (0x0003e705) cell_myfav_contact_pane_cp4_ParamLimits

0xa14a,	// (0x0003e705) cell_myfav_contact_pane_cp4

0xa160,	// (0x0003e71b) cell_myfav_contact_pane_cp5_ParamLimits

0xa160,	// (0x0003e71b) cell_myfav_contact_pane_cp5

0xa174,	// (0x0003e72f) cell_myfav_contact_pane_cp6_ParamLimits

0xa174,	// (0x0003e72f) cell_myfav_contact_pane_cp6

0xa188,	// (0x0003e743) cell_myfav_contact_pane_cp7_ParamLimits

0xa188,	// (0x0003e743) cell_myfav_contact_pane_cp7

0xeca4,	// (0x0004325f) listscroll_gen_pane_cp05

0xa1a0,	// (0x0003e75b) main_myfav_hc_pane_g1_ParamLimits

0xa1a0,	// (0x0003e75b) main_myfav_hc_pane_g1

0xa1ba,	// (0x0003e775) main_myfav_hc_pane_g2_ParamLimits

0xa1ba,	// (0x0003e775) main_myfav_hc_pane_g2

0x0002,

0xf958,	// (0x00043f13) main_myfav_hc_pane_g_ParamLimits

0xf958,	// (0x00043f13) main_myfav_hc_pane_g

0xa1ec,	// (0x0003e7a7) main_myfav_hc_pane_t1_ParamLimits

0xa1ec,	// (0x0003e7a7) main_myfav_hc_pane_t1

0xecad,	// (0x00043268) main_myfav_hc_pane_t2_ParamLimits

0xecad,	// (0x00043268) main_myfav_hc_pane_t2

0xecbf,	// (0x0004327a) main_myfav_hc_pane_t3_ParamLimits

0xecbf,	// (0x0004327a) main_myfav_hc_pane_t3

0xa203,	// (0x0003e7be) main_myfav_hc_pane_t4_ParamLimits

0xa203,	// (0x0003e7be) main_myfav_hc_pane_t4

0x0004,

0xf95f,	// (0x00043f1a) main_myfav_hc_pane_t_ParamLimits

0xf95f,	// (0x00043f1a) main_myfav_hc_pane_t

0xe1fe,	// (0x000427b9) bg_myfav_hc_instruction_pane_g1

0xecd1,	// (0x0004328c) cell_myfav_contact_pane_g1_ParamLimits

0xecd1,	// (0x0004328c) cell_myfav_contact_pane_g1

0xecd1,	// (0x0004328c) cell_myfav_contact_pane_g2_ParamLimits

0xecd1,	// (0x0004328c) cell_myfav_contact_pane_g2

0xecdd,	// (0x00043298) cell_myfav_contact_pane_g3_ParamLimits

0xecdd,	// (0x00043298) cell_myfav_contact_pane_g3

0xe493,	// (0x00042a4e) cell_myfav_contact_pane_g4_ParamLimits

0xe493,	// (0x00042a4e) cell_myfav_contact_pane_g4

0xecea,	// (0x000432a5) cell_myfav_contact_pane_g5_ParamLimits

0xecea,	// (0x000432a5) cell_myfav_contact_pane_g5

0x0004,

0xf96a,	// (0x00043f25) cell_myfav_contact_pane_g_ParamLimits

0xf96a,	// (0x00043f25) cell_myfav_contact_pane_g

0xa1d4,	// (0x0003e78f) main_myfav_hc_pane_g3_ParamLimits

0xa1d4,	// (0x0003e78f) main_myfav_hc_pane_g3

0x4ebd,	// (0x00039478) popup_adpt_find_window

0xa22d,	// (0x0003e7e8) afind_page_pane_ParamLimits

0xa22d,	// (0x0003e7e8) afind_page_pane

0xa23a,	// (0x0003e7f5) aid_size_cell_afind_ParamLimits

0xa23a,	// (0x0003e7f5) aid_size_cell_afind

0xa254,	// (0x0003e80f) bg_popup_sub_pane_cp09_ParamLimits

0xa254,	// (0x0003e80f) bg_popup_sub_pane_cp09

0xa261,	// (0x0003e81c) find_pane_cp01_ParamLimits

0xa261,	// (0x0003e81c) find_pane_cp01

0xecf6,	// (0x000432b1) grid_afind_control_pane_ParamLimits

0xecf6,	// (0x000432b1) grid_afind_control_pane

0xa26e,	// (0x0003e829) grid_afind_pane_ParamLimits

0xa26e,	// (0x0003e829) grid_afind_pane

0xa28a,	// (0x0003e845) cell_afind_pane_ParamLimits

0xa28a,	// (0x0003e845) cell_afind_pane

0xe1fe,	// (0x000427b9) afind_page_pane_g1

0xa2d4,	// (0x0003e88f) afind_page_pane_g2

0xa2dd,	// (0x0003e898) afind_page_pane_g3

0x0002,

0xf975,	// (0x00043f30) afind_page_pane_g

0xa2e6,	// (0x0003e8a1) afind_page_pane_t1

0xed0a,	// (0x000432c5) cell_afind_grid_control_pane_ParamLimits

0xed0a,	// (0x000432c5) cell_afind_grid_control_pane

0xeaea,	// (0x000430a5) bg_button_pane_cp69_ParamLimits

0xeaea,	// (0x000430a5) bg_button_pane_cp69

0xa306,	// (0x0003e8c1) cell_afind_pane_g1_ParamLimits

0xa306,	// (0x0003e8c1) cell_afind_pane_g1

0xa313,	// (0x0003e8ce) cell_afind_pane_t1_ParamLimits

0xa313,	// (0x0003e8ce) cell_afind_pane_t1

0x2525,	// (0x00036ae0) bg_button_pane_cp72

0xed19,	// (0x000432d4) cell_afind_grid_control_pane_g1

0x78da,	// (0x0003be95) aid_image_placing_area_ParamLimits

0x78da,	// (0x0003be95) aid_image_placing_area

0xe79e,	// (0x00042d59) field_vitu_entry_pane_g1_ParamLimits

0xe79e,	// (0x00042d59) field_vitu_entry_pane_g1

0xe7aa,	// (0x00042d65) field_vitu_entry_pane_g2_ParamLimits

0xe7aa,	// (0x00042d65) field_vitu_entry_pane_g2

0x0001,

0xf826,	// (0x00043de1) field_vitu_entry_pane_g_ParamLimits

0xf826,	// (0x00043de1) field_vitu_entry_pane_g

0x943d,	// (0x0003d9f8) cell_vitu_itu_pane_g1_ParamLimits

0x948d,	// (0x0003da48) cell_vitu_itu_pane_t3_ParamLimits

0x948d,	// (0x0003da48) cell_vitu_itu_pane_t3

0xea9a,	// (0x00043055) mp4_progress_pane_t1_ParamLimits

0xeab3,	// (0x0004306e) mp4_progress_pane_t2_ParamLimits

0xf8bb,	// (0x00043e76) mp4_progress_pane_t_ParamLimits

0xeacc,	// (0x00043087) mup_progress_pane_cp04_ParamLimits

0xa217,	// (0x0003e7d2) main_myfav_hc_pane_t5_ParamLimits

0xa217,	// (0x0003e7d2) main_myfav_hc_pane_t5

0x4d48,	// (0x00039303) aid_zoom_text_primary

0x4ebd,	// (0x00039478) popup_adpt_find_window_ParamLimits

0x238b,	// (0x00036946) main_cam_set_pane

0x9c96,	// (0x0003e251) cam4_zoom_pane_ParamLimits

0x9c96,	// (0x0003e251) cam4_zoom_pane

0xa325,	// (0x0003e8e0) main_cam_set_pane_g1_ParamLimits

0xa325,	// (0x0003e8e0) main_cam_set_pane_g1

0xa333,	// (0x0003e8ee) main_cam_set_pane_g2_ParamLimits

0xa333,	// (0x0003e8ee) main_cam_set_pane_g2

0x0001,

0xf97c,	// (0x00043f37) main_cam_set_pane_g_ParamLimits

0xf97c,	// (0x00043f37) main_cam_set_pane_g

0xa33f,	// (0x0003e8fa) main_cam_set_pane_t1_ParamLimits

0xa33f,	// (0x0003e8fa) main_cam_set_pane_t1

0xa35b,	// (0x0003e916) main_cset_listscroll_pane_ParamLimits

0xa35b,	// (0x0003e916) main_cset_listscroll_pane

0xa38a,	// (0x0003e945) main_cset_slider_pane_ParamLimits

0xa38a,	// (0x0003e945) main_cset_slider_pane

0xed2a,	// (0x000432e5) main_cset_list_pane_ParamLimits

0xed2a,	// (0x000432e5) main_cset_list_pane

0xed3a,	// (0x000432f5) scroll_pane_cp028

0xa3ab,	// (0x0003e966) aid_area_touch_slider

0xa3c7,	// (0x0003e982) cset_slider_pane

0xa3f1,	// (0x0003e9ac) main_cset_slider_pane_g1

0xa406,	// (0x0003e9c1) main_cset_slider_pane_g2

0x0011,

0xf981,	// (0x00043f3c) main_cset_slider_pane_g

0xed73,	// (0x0004332e) main_cset_slider_pane_t1

0xa4c2,	// (0x0003ea7d) main_cset_slider_pane_t2

0xa4dc,	// (0x0003ea97) main_cset_slider_pane_t3

0xa4f6,	// (0x0003eab1) main_cset_slider_pane_t4

0xa510,	// (0x0003eacb) main_cset_slider_pane_t5

0xa52a,	// (0x0003eae5) main_cset_slider_pane_t6

0xa53f,	// (0x0003eafa) main_cset_slider_pane_t7

0x000e,

0xf9a6,	// (0x00043f61) main_cset_slider_pane_t

0xa643,	// (0x0003ebfe) cset_list_set_pane_ParamLimits

0xa643,	// (0x0003ebfe) cset_list_set_pane

0xa654,	// (0x0003ec0f) aid_position_infowindow_above

0xa65c,	// (0x0003ec17) aid_position_infowindow_below

0x3f31,	// (0x000384ec) cset_list_set_pane_g1_ParamLimits

0x3f31,	// (0x000384ec) cset_list_set_pane_g1

0x3f3d,	// (0x000384f8) cset_list_set_pane_g3_ParamLimits

0x3f3d,	// (0x000384f8) cset_list_set_pane_g3

0x0001,

0xf9c5,	// (0x00043f80) cset_list_set_pane_g_ParamLimits

0xf9c5,	// (0x00043f80) cset_list_set_pane_g

0x3f4c,	// (0x00038507) cset_list_set_pane_t1_ParamLimits

0x3f4c,	// (0x00038507) cset_list_set_pane_t1

0x238b,	// (0x00036946) list_highlight_pane_cp021_ParamLimits

0x238b,	// (0x00036946) list_highlight_pane_cp021

0xcaf3,	// (0x000410ae) cset_slider_pane_g1

0xcb05,	// (0x000410c0) cset_slider_pane_g2

0xcafc,	// (0x000410b7) cset_slider_pane_g3

0x0002,

0xf9ca,	// (0x00043f85) cset_slider_pane_g

0xa664,	// (0x0003ec1f) aid_area_touch_cam4_zoom

0xa66c,	// (0x0003ec27) cam4_zoom_cont_pane

0xa674,	// (0x0003ec2f) cam4_zoom_pane_g1

0xa67c,	// (0x0003ec37) cam4_zoom_pane_g2

0xa684,	// (0x0003ec3f) cam4_zoom_pane_g3

0x0002,

0xf9d1,	// (0x00043f8c) cam4_zoom_pane_g

0x05a3,	// (0x00034b5e) cam4_zoom_cont_pane_g1

0x05ac,	// (0x00034b67) cam4_zoom_cont_pane_g2

0x05b5,	// (0x00034b70) cam4_zoom_cont_pane_g3

0x0002,

0xf9d8,	// (0x00043f93) cam4_zoom_cont_pane_g

0x9b41,	// (0x0003e0fc) call4_image_pane_ParamLimits

0x9b41,	// (0x0003e0fc) call4_image_pane

0xeaf6,	// (0x000430b1) call4_windows_conf_pane_ParamLimits

0xeb11,	// (0x000430cc) popup_call4_audio_in_window_ParamLimits

0xeb11,	// (0x000430cc) popup_call4_audio_in_window

0x1b96,	// (0x00036151) bg_popup_call2_act_pane_cp02

0xeb73,	// (0x0004312e) call4_list_conf_pane

0xe1fe,	// (0x000427b9) call4_image_pane_g1

0xe1fe,	// (0x000427b9) call4_image_pane_g2

0x0001,

0xf6ec,	// (0x00043ca7) call4_image_pane_g

0xee13,	// (0x000433ce) list_single_graphic_popup_conf4_pane_ParamLimits

0xee13,	// (0x000433ce) list_single_graphic_popup_conf4_pane

0x1b96,	// (0x00036151) list_highlight_pane_cp022

0xee28,	// (0x000433e3) list_single_graphic_popup_conf4_pane_g1

0xc7ed,	// (0x00040da8) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9df,	// (0x00043f9a) list_single_graphic_popup_conf4_pane_g

0xee30,	// (0x000433eb) list_single_graphic_popup_conf4_pane_t1

0x5e16,	// (0x0003a3d1) popup_vtel_slider_window_ParamLimits

0x5e16,	// (0x0003a3d1) popup_vtel_slider_window

0xead8,	// (0x00043093) dialer2_ne_pane_t2_ParamLimits

0xead8,	// (0x00043093) dialer2_ne_pane_t2

0x0001,

0xf8c0,	// (0x00043e7b) dialer2_ne_pane_t_ParamLimits

0xf8c0,	// (0x00043e7b) dialer2_ne_pane_t

0x238b,	// (0x00036946) bg_popup_sub_pane_cp010_ParamLimits

0x238b,	// (0x00036946) bg_popup_sub_pane_cp010

0xa68c,	// (0x0003ec47) popup_vtel_slider_window_g1_ParamLimits

0xa68c,	// (0x0003ec47) popup_vtel_slider_window_g1

0xa698,	// (0x0003ec53) popup_vtel_slider_window_g2_ParamLimits

0xa698,	// (0x0003ec53) popup_vtel_slider_window_g2

0x0003,

0xf9e4,	// (0x00043f9f) popup_vtel_slider_window_g_ParamLimits

0xf9e4,	// (0x00043f9f) popup_vtel_slider_window_g

0xa6e0,	// (0x0003ec9b) vtel_slider_pane_ParamLimits

0xa6e0,	// (0x0003ec9b) vtel_slider_pane

0xa6ef,	// (0x0003ecaa) vtel_slider_pane_g1_ParamLimits

0xa6ef,	// (0x0003ecaa) vtel_slider_pane_g1

0xa6fc,	// (0x0003ecb7) vtel_slider_pane_g2_ParamLimits

0xa6fc,	// (0x0003ecb7) vtel_slider_pane_g2

0xa709,	// (0x0003ecc4) vtel_slider_pane_g3_ParamLimits

0xa709,	// (0x0003ecc4) vtel_slider_pane_g3

0xa6ef,	// (0x0003ecaa) vtel_slider_pane_g4_ParamLimits

0xa6ef,	// (0x0003ecaa) vtel_slider_pane_g4

0xa716,	// (0x0003ecd1) vtel_slider_pane_g5_ParamLimits

0xa716,	// (0x0003ecd1) vtel_slider_pane_g5

0x0004,

0xf9ed,	// (0x00043fa8) vtel_slider_pane_g_ParamLimits

0xf9ed,	// (0x00043fa8) vtel_slider_pane_g

0x1b96,	// (0x00036151) main_gallery2_pane

0x9eee,	// (0x0003e4a9) aid_size_row_itut2_dropdow_list_ParamLimits

0x9eee,	// (0x0003e4a9) aid_size_row_itut2_dropdow_list

0x9f4e,	// (0x0003e509) grid_vitu2_function_top_pane_ParamLimits

0x9f4e,	// (0x0003e509) grid_vitu2_function_top_pane

0x9fa0,	// (0x0003e55b) popup_vitu2_dropdown_list_window_ParamLimits

0x9fa0,	// (0x0003e55b) popup_vitu2_dropdown_list_window

0x9fc0,	// (0x0003e57b) popup_vitu2_match_list_window

0xa723,	// (0x0003ecde) cell_vitu2_function_top_pane_ParamLimits

0xa723,	// (0x0003ecde) cell_vitu2_function_top_pane

0xa743,	// (0x0003ecfe) cell_vitu2_function_top_pane_cp01_ParamLimits

0xa743,	// (0x0003ecfe) cell_vitu2_function_top_pane_cp01

0xa761,	// (0x0003ed1c) cell_vitu2_function_top_wide_pane_ParamLimits

0xa761,	// (0x0003ed1c) cell_vitu2_function_top_wide_pane

0x238b,	// (0x00036946) bg_button_pane_cp012

0xa77f,	// (0x0003ed3a) cell_vitu2_function_top_pane_g1

0xa78e,	// (0x0003ed49) bg_button_pane_cp013_ParamLimits

0xa78e,	// (0x0003ed49) bg_button_pane_cp013

0xa7aa,	// (0x0003ed65) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xa7aa,	// (0x0003ed65) cell_vitu2_function_top_wide_pane_g1

0x4fab,	// (0x00039566) bg_popup_sub_pane_cp20

0xa7c2,	// (0x0003ed7d) list_vitu2_match_list_pane

0xec1c,	// (0x000431d7) bg_popup_sub_pane_cp20_g1

0xec24,	// (0x000431df) bg_popup_sub_pane_cp20_g2

0x27ee,	// (0x00036da9) bg_popup_sub_pane_cp20_g3

0xec2c,	// (0x000431e7) bg_popup_sub_pane_cp20_g4

0x27ce,	// (0x00036d89) bg_popup_sub_pane_cp20_g5

0xee46,	// (0x00043401) bg_popup_sub_pane_cp20_g6

0xec3c,	// (0x000431f7) bg_popup_sub_pane_cp20_g7

0xec44,	// (0x000431ff) bg_popup_sub_pane_cp20_g8

0xec4c,	// (0x00043207) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9f8,	// (0x00043fb3) bg_popup_sub_pane_cp20_g

0xa7da,	// (0x0003ed95) list_vitu2_match_list_item_pane_ParamLimits

0xa7da,	// (0x0003ed95) list_vitu2_match_list_item_pane

0xa7ec,	// (0x0003eda7) list_vitu2_match_list_item_pane_t1

0x1b96,	// (0x00036151) bg_popup_sub_pane_cp21

0x2c32,	// (0x000371ed) grid_vitu2_dropdown_list_pane

0xa7fa,	// (0x0003edb5) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xa7fa,	// (0x0003edb5) cell_vitu2_dropdown_list_char_pane

0xa81f,	// (0x0003edda) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xa81f,	// (0x0003edda) cell_vitu2_dropdown_list_ctrl_pane

0xee4e,	// (0x00043409) cell_vitu2_dropdown_list_char_pane_g1

0xee57,	// (0x00043412) cell_vitu2_dropdown_list_char_pane_g2

0xee60,	// (0x0004341b) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa15,	// (0x00043fd0) cell_vitu2_dropdown_list_char_pane_g

0xa84d,	// (0x0003ee08) cell_vitu2_dropdown_list_char_pane_t1

0xa85b,	// (0x0003ee16) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xa85b,	// (0x0003ee16) cell_vitu2_dropdown_list_ctrl_pane_g1

0xa86b,	// (0x0003ee26) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xa86b,	// (0x0003ee26) cell_vitu2_dropdown_list_ctrl_pane_g2

0xa87c,	// (0x0003ee37) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xa87c,	// (0x0003ee37) cell_vitu2_dropdown_list_ctrl_pane_g3

0xa88c,	// (0x0003ee47) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xa88c,	// (0x0003ee47) cell_vitu2_dropdown_list_ctrl_pane_g4

0xe42e,	// (0x000429e9) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xe42e,	// (0x000429e9) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa1c,	// (0x00043fd7) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa1c,	// (0x00043fd7) cell_vitu2_dropdown_list_ctrl_pane_g

0xa8a5,	// (0x0003ee60) aid_size_cell_gallery2_ParamLimits

0xa8a5,	// (0x0003ee60) aid_size_cell_gallery2

0xa8b3,	// (0x0003ee6e) grid_gallery2_pane_ParamLimits

0xa8b3,	// (0x0003ee6e) grid_gallery2_pane

0xa8c2,	// (0x0003ee7d) scroll_pane_cp029_ParamLimits

0xa8c2,	// (0x0003ee7d) scroll_pane_cp029

0xa8ce,	// (0x0003ee89) cell_gallery2_pane_ParamLimits

0xa8ce,	// (0x0003ee89) cell_gallery2_pane

0xee69,	// (0x00043424) cell_gallery2_pane_g2

0xa8f8,	// (0x0003eeb3) cell_gallery2_pane_g3

0xee73,	// (0x0004342e) cell_gallery2_pane_g4

0xee7b,	// (0x00043436) cell_gallery2_pane_g5

0xc9bb,	// (0x00040f76) grid_highlight_pane_cp10

0x9fc0,	// (0x0003e57b) popup_vitu2_match_list_window_ParamLimits

0x9fd4,	// (0x0003e58f) popup_vitu2_query_window_ParamLimits

0x9fd4,	// (0x0003e58f) popup_vitu2_query_window

0x1b96,	// (0x00036151) bg_vitu2_candi_button_pane

0xee4e,	// (0x00043409) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xee57,	// (0x00043412) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xee60,	// (0x0004341b) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x3fb3,	// (0x0003856e) bg_button_pane_cp015

0xa900,	// (0x0003eebb) bg_button_pane_cp016

0xa913,	// (0x0003eece) bg_button_pane_cp017

0xddc6,	// (0x00042381) bg_popup_sub_pane_cp22

0xee83,	// (0x0004343e) popup_vitu2_query_window_g1

0x3fe6,	// (0x000385a1) popup_vitu2_query_window_g2

0x0002,

0xfa27,	// (0x00043fe2) popup_vitu2_query_window_g

0x4003,	// (0x000385be) popup_vitu2_query_window_t1_ParamLimits

0x4003,	// (0x000385be) popup_vitu2_query_window_t1

0x4036,	// (0x000385f1) popup_vitu2_query_window_t2_ParamLimits

0x4036,	// (0x000385f1) popup_vitu2_query_window_t2

0x4048,	// (0x00038603) popup_vitu2_query_window_t3_ParamLimits

0x4048,	// (0x00038603) popup_vitu2_query_window_t3

0xa937,	// (0x0003eef2) popup_vitu2_query_window_t4_ParamLimits

0xa937,	// (0x0003eef2) popup_vitu2_query_window_t4

0xa95a,	// (0x0003ef15) popup_vitu2_query_window_t5_ParamLimits

0xa95a,	// (0x0003ef15) popup_vitu2_query_window_t5

0x0006,

0xfa2e,	// (0x00043fe9) popup_vitu2_query_window_t_ParamLimits

0xfa2e,	// (0x00043fe9) popup_vitu2_query_window_t

0xed22,	// (0x000432dd) main_cset_text_pane

0xa3ab,	// (0x0003e966) aid_area_touch_slider_ParamLimits

0xa3c7,	// (0x0003e982) cset_slider_pane_ParamLimits

0xa3f1,	// (0x0003e9ac) main_cset_slider_pane_g1_ParamLimits

0xa406,	// (0x0003e9c1) main_cset_slider_pane_g2_ParamLimits

0xed43,	// (0x000432fe) main_cset_slider_pane_g3_ParamLimits

0xed43,	// (0x000432fe) main_cset_slider_pane_g3

0xa41b,	// (0x0003e9d6) main_cset_slider_pane_g4_ParamLimits

0xa41b,	// (0x0003e9d6) main_cset_slider_pane_g4

0xa42a,	// (0x0003e9e5) main_cset_slider_pane_g5_ParamLimits

0xa42a,	// (0x0003e9e5) main_cset_slider_pane_g5

0xa436,	// (0x0003e9f1) main_cset_slider_pane_g6_ParamLimits

0xa436,	// (0x0003e9f1) main_cset_slider_pane_g6

0xf981,	// (0x00043f3c) main_cset_slider_pane_g_ParamLimits

0xed73,	// (0x0004332e) main_cset_slider_pane_t1_ParamLimits

0xa4c2,	// (0x0003ea7d) main_cset_slider_pane_t2_ParamLimits

0xa4dc,	// (0x0003ea97) main_cset_slider_pane_t3_ParamLimits

0xa4f6,	// (0x0003eab1) main_cset_slider_pane_t4_ParamLimits

0xa510,	// (0x0003eacb) main_cset_slider_pane_t5_ParamLimits

0xa52a,	// (0x0003eae5) main_cset_slider_pane_t6_ParamLimits

0xa53f,	// (0x0003eafa) main_cset_slider_pane_t7_ParamLimits

0xa569,	// (0x0003eb24) main_cset_slider_pane_t8_ParamLimits

0xa569,	// (0x0003eb24) main_cset_slider_pane_t8

0xa591,	// (0x0003eb4c) main_cset_slider_pane_t9_ParamLimits

0xa591,	// (0x0003eb4c) main_cset_slider_pane_t9

0xa5b9,	// (0x0003eb74) main_cset_slider_pane_t10_ParamLimits

0xa5b9,	// (0x0003eb74) main_cset_slider_pane_t10

0xa5e1,	// (0x0003eb9c) main_cset_slider_pane_t11_ParamLimits

0xa5e1,	// (0x0003eb9c) main_cset_slider_pane_t11

0xa609,	// (0x0003ebc4) main_cset_slider_pane_t12_ParamLimits

0xa609,	// (0x0003ebc4) main_cset_slider_pane_t12

0xa626,	// (0x0003ebe1) main_cset_slider_pane_t13_ParamLimits

0xa626,	// (0x0003ebe1) main_cset_slider_pane_t13

0xf9a6,	// (0x00043f61) main_cset_slider_pane_t_ParamLimits

0x1b96,	// (0x00036151) bg_popup_sub_pane_cp011

0xee8f,	// (0x0004344a) main_cset_text_pane_g1

0xee97,	// (0x00043452) main_cset_text_pane_t1

0xeea5,	// (0x00043460) main_cset_text_pane_t2

0xeeb3,	// (0x0004346e) main_cset_text_pane_t3

0xeec1,	// (0x0004347c) main_cset_text_pane_t4

0xeecf,	// (0x0004348a) main_cset_text_pane_t5

0xeedd,	// (0x00043498) main_cset_text_pane_t6

0xeeeb,	// (0x000434a6) main_cset_text_pane_t7

0x0006,

0xfa3d,	// (0x00043ff8) main_cset_text_pane_t

0x1b96,	// (0x00036151) main_cam4_burst_pane

0x1b96,	// (0x00036151) main_cam5_pane

0xa2f4,	// (0x0003e8af) bg_button_pane_cp019

0xa2fd,	// (0x0003e8b8) bg_button_pane_cp020

0xed4f,	// (0x0004330a) main_cset_slider_pane_g7_ParamLimits

0xed4f,	// (0x0004330a) main_cset_slider_pane_g7

0xed5b,	// (0x00043316) main_cset_slider_pane_g8_ParamLimits

0xed5b,	// (0x00043316) main_cset_slider_pane_g8

0xa44a,	// (0x0003ea05) main_cset_slider_pane_g9_ParamLimits

0xa44a,	// (0x0003ea05) main_cset_slider_pane_g9

0xa456,	// (0x0003ea11) main_cset_slider_pane_g10_ParamLimits

0xa456,	// (0x0003ea11) main_cset_slider_pane_g10

0xa462,	// (0x0003ea1d) main_cset_slider_pane_g11_ParamLimits

0xa462,	// (0x0003ea1d) main_cset_slider_pane_g11

0xa46e,	// (0x0003ea29) main_cset_slider_pane_g12_ParamLimits

0xa46e,	// (0x0003ea29) main_cset_slider_pane_g12

0xa47a,	// (0x0003ea35) main_cset_slider_pane_g13_ParamLimits

0xa47a,	// (0x0003ea35) main_cset_slider_pane_g13

0xa486,	// (0x0003ea41) main_cset_slider_pane_g14_ParamLimits

0xa486,	// (0x0003ea41) main_cset_slider_pane_g14

0xa492,	// (0x0003ea4d) main_cset_slider_pane_g15_ParamLimits

0xa492,	// (0x0003ea4d) main_cset_slider_pane_g15

0xeda1,	// (0x0004335c) main_cset_slider_pane_t14_ParamLimits

0xeda1,	// (0x0004335c) main_cset_slider_pane_t14

0xedda,	// (0x00043395) main_cset_slider_pane_t15_ParamLimits

0xedda,	// (0x00043395) main_cset_slider_pane_t15

0xa97d,	// (0x0003ef38) aid_cam4_burst_size_cell_ParamLimits

0xa97d,	// (0x0003ef38) aid_cam4_burst_size_cell

0xa999,	// (0x0003ef54) grid_cam4_burst_pane_ParamLimits

0xa999,	// (0x0003ef54) grid_cam4_burst_pane

0xa9cb,	// (0x0003ef86) linegrid_cam4_burst_pane_ParamLimits

0xa9cb,	// (0x0003ef86) linegrid_cam4_burst_pane

0xa9e9,	// (0x0003efa4) scroll_pane_cp30_ParamLimits

0xa9e9,	// (0x0003efa4) scroll_pane_cp30

0xa9f5,	// (0x0003efb0) cell_cam4_burst_pane_ParamLimits

0xa9f5,	// (0x0003efb0) cell_cam4_burst_pane

0xeef9,	// (0x000434b4) linegrid_cam4_burst_pane_g1_ParamLimits

0xeef9,	// (0x000434b4) linegrid_cam4_burst_pane_g1

0xaa35,	// (0x0003eff0) linegrid_cam4_burst_pane_g2_ParamLimits

0xaa35,	// (0x0003eff0) linegrid_cam4_burst_pane_g2

0xef12,	// (0x000434cd) linegrid_cam4_burst_pane_g3_ParamLimits

0xef12,	// (0x000434cd) linegrid_cam4_burst_pane_g3

0x0002,

0xfa4c,	// (0x00044007) linegrid_cam4_burst_pane_g_ParamLimits

0xfa4c,	// (0x00044007) linegrid_cam4_burst_pane_g

0xaa46,	// (0x0003f001) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xaa46,	// (0x0003f001) linegrid_cam4_burst_pane_g3_copy1

0xef1f,	// (0x000434da) linegrid_cam4_burst_pane_g4_ParamLimits

0xef1f,	// (0x000434da) linegrid_cam4_burst_pane_g4

0xaa60,	// (0x0003f01b) linegrid_cam4_burst_pane_g5_ParamLimits

0xaa60,	// (0x0003f01b) linegrid_cam4_burst_pane_g5

0xaa71,	// (0x0003f02c) linegrid_cam4_burst_pane_g6_ParamLimits

0xaa71,	// (0x0003f02c) linegrid_cam4_burst_pane_g6

0xef2c,	// (0x000434e7) linegrid_cam4_burst_pane_g7_ParamLimits

0xef2c,	// (0x000434e7) linegrid_cam4_burst_pane_g7

0xaa88,	// (0x0003f043) cell_cam4_burst_pane_g1

0xef45,	// (0x00043500) main_cam5_pane_t1_ParamLimits

0xef45,	// (0x00043500) main_cam5_pane_t1

0xef57,	// (0x00043512) main_cam5_pane_t2_ParamLimits

0xef57,	// (0x00043512) main_cam5_pane_t2

0xef69,	// (0x00043524) main_cam5_pane_t3_ParamLimits

0xef69,	// (0x00043524) main_cam5_pane_t3

0xef7b,	// (0x00043536) main_cam5_pane_t4_ParamLimits

0xef7b,	// (0x00043536) main_cam5_pane_t4

0xef93,	// (0x0004354e) main_cam5_pane_t5_ParamLimits

0xef93,	// (0x0004354e) main_cam5_pane_t5

0xefa7,	// (0x00043562) main_cam5_pane_t6_ParamLimits

0xefa7,	// (0x00043562) main_cam5_pane_t6

0xefbb,	// (0x00043576) main_cam5_pane_t7_ParamLimits

0xefbb,	// (0x00043576) main_cam5_pane_t7

0xefcd,	// (0x00043588) main_cam5_pane_t8_ParamLimits

0xefcd,	// (0x00043588) main_cam5_pane_t8

0xefeb,	// (0x000435a6) main_cam5_pane_t9_ParamLimits

0xefeb,	// (0x000435a6) main_cam5_pane_t9

0xeffd,	// (0x000435b8) main_cam5_pane_t10_ParamLimits

0xeffd,	// (0x000435b8) main_cam5_pane_t10

0xf00f,	// (0x000435ca) main_cam5_pane_t11_ParamLimits

0xf00f,	// (0x000435ca) main_cam5_pane_t11

0xf023,	// (0x000435de) main_cam5_pane_t12_ParamLimits

0xf023,	// (0x000435de) main_cam5_pane_t12

0xf03a,	// (0x000435f5) main_cam5_pane_t13_ParamLimits

0xf03a,	// (0x000435f5) main_cam5_pane_t13

0x000c,

0xfa58,	// (0x00044013) main_cam5_pane_t_ParamLimits

0xfa58,	// (0x00044013) main_cam5_pane_t

0x4f74,	// (0x0003952f) popup_scut_keymap_window_ParamLimits

0x4f74,	// (0x0003952f) popup_scut_keymap_window

0xaa9b,	// (0x0003f056) aid_size_cell_brow_shortcut

0xc9bb,	// (0x00040f76) bg_popup_window_pane_cp010

0xaaa7,	// (0x0003f062) grid_scut_pane

0xaab3,	// (0x0003f06e) cell_scut_pane_ParamLimits

0xaab3,	// (0x0003f06e) cell_scut_pane

0xaace,	// (0x0003f089) cell_scut_pane_g1

0xf05d,	// (0x00043618) cell_scut_pane_t1

0xf06c,	// (0x00043627) cell_scut_pane_t2

0xaad7,	// (0x0003f092) cell_scut_pane_t3

0x0002,

0xfa73,	// (0x0004402e) cell_scut_pane_t

0x8aad,	// (0x0003d068) main_mup3_pane_g8_ParamLimits

0x8aad,	// (0x0003d068) main_mup3_pane_g8

0x9efc,	// (0x0003e4b7) area_vitu2_query_pane_ParamLimits

0x9efc,	// (0x0003e4b7) area_vitu2_query_pane

0x3fc5,	// (0x00038580) input_focus_pane_cp08

0xf07b,	// (0x00043636) area_vitu2_query_pane_g1

0x40c6,	// (0x00038681) area_vitu2_query_pane_g2

0x0001,

0xfa7a,	// (0x00044035) area_vitu2_query_pane_g

0xaae5,	// (0x0003f0a0) area_vitu2_query_pane_t1_ParamLimits

0xaae5,	// (0x0003f0a0) area_vitu2_query_pane_t1

0xaaf9,	// (0x0003f0b4) area_vitu2_query_pane_t2_ParamLimits

0xaaf9,	// (0x0003f0b4) area_vitu2_query_pane_t2

0x40d7,	// (0x00038692) area_vitu2_query_pane_t3_ParamLimits

0x40d7,	// (0x00038692) area_vitu2_query_pane_t3

0x40ff,	// (0x000386ba) area_vitu2_query_pane_t4_ParamLimits

0x40ff,	// (0x000386ba) area_vitu2_query_pane_t4

0x4127,	// (0x000386e2) area_vitu2_query_pane_t5_ParamLimits

0x4127,	// (0x000386e2) area_vitu2_query_pane_t5

0x414f,	// (0x0003870a) area_vitu2_query_pane_t6_ParamLimits

0x414f,	// (0x0003870a) area_vitu2_query_pane_t6

0x0006,

0xfa7f,	// (0x0004403a) area_vitu2_query_pane_t_ParamLimits

0xfa7f,	// (0x0004403a) area_vitu2_query_pane_t

0xab0d,	// (0x0003f0c8) bg_button_pane_cp018

0xab1b,	// (0x0003f0d6) bg_button_pane_cp021

0x419b,	// (0x00038756) bg_button_pane_cp022

0x41ac,	// (0x00038767) input_focus_pane_cp09

0x6f31,	// (0x0003b4ec) aid_size_touch_mv_arrow_left

0x6f5c,	// (0x0003b517) aid_size_touch_mv_arrow_right

0xa4aa,	// (0x0003ea65) main_cset_slider_pane_g16_ParamLimits

0xa4aa,	// (0x0003ea65) main_cset_slider_pane_g16

0xa4b6,	// (0x0003ea71) main_cset_slider_pane_g17_ParamLimits

0xa4b6,	// (0x0003ea71) main_cset_slider_pane_g17

0xaa88,	// (0x0003f043) cell_cam4_burst_pane_g1_ParamLimits

0x1b96,	// (0x00036151) compa_mode_pane

0xa6a4,	// (0x0003ec5f) popup_vtel_slider_window_g3_ParamLimits

0xa6a4,	// (0x0003ec5f) popup_vtel_slider_window_g3

0xa6b8,	// (0x0003ec73) popup_vtel_slider_window_g4_ParamLimits

0xa6b8,	// (0x0003ec73) popup_vtel_slider_window_g4

0xa6cc,	// (0x0003ec87) popup_vtel_slider_window_t1_ParamLimits

0xa6cc,	// (0x0003ec87) popup_vtel_slider_window_t1

0x1b96,	// (0x00036151) main_cl_pane

0x7dfb,	// (0x0003c3b6) popup_imed_adjust2_window_ParamLimits

0xddc6,	// (0x00042381) bg_tb_trans_pane_cp05_ParamLimits

0xe6d3,	// (0x00042c8e) popup_imed_adjust2_window_g1_ParamLimits

0xe6e2,	// (0x00042c9d) popup_imed_adjust2_window_g2_ParamLimits

0xe6e2,	// (0x00042c9d) popup_imed_adjust2_window_g2

0xe6ee,	// (0x00042ca9) popup_imed_adjust2_window_g3_ParamLimits

0xe6ee,	// (0x00042ca9) popup_imed_adjust2_window_g3

0x0002,

0xf7ea,	// (0x00043da5) popup_imed_adjust2_window_g_ParamLimits

0xf7ea,	// (0x00043da5) popup_imed_adjust2_window_g

0xe6fa,	// (0x00042cb5) popup_imed_adjust2_window_t1_ParamLimits

0xe712,	// (0x00042ccd) slider_imed_adjust_pane_ParamLimits

0xe726,	// (0x00042ce1) slider_imed_adjust_pane_g1_ParamLimits

0xe736,	// (0x00042cf1) slider_imed_adjust_pane_g2_ParamLimits

0xe746,	// (0x00042d01) slider_imed_adjust_pane_g3_ParamLimits

0xe757,	// (0x00042d12) slider_imed_adjust_pane_g4_ParamLimits

0xf7f1,	// (0x00043dac) slider_imed_adjust_pane_g_ParamLimits

0x9c3f,	// (0x0003e1fa) aid_touch_area_cam4_ParamLimits

0x9c3f,	// (0x0003e1fa) aid_touch_area_cam4

0x9c4f,	// (0x0003e20a) battery_pane_cp01

0x9cd6,	// (0x0003e291) main_camera4_pane_g6_ParamLimits

0x9cd6,	// (0x0003e291) main_camera4_pane_g6

0x9cf4,	// (0x0003e2af) main_camera4_pane_t2_ParamLimits

0x9cf4,	// (0x0003e2af) main_camera4_pane_t2

0x0001,

0xf8f4,	// (0x00043eaf) main_camera4_pane_t_ParamLimits

0xf8f4,	// (0x00043eaf) main_camera4_pane_t

0x9d77,	// (0x0003e332) aid_touch_area_vid4_ParamLimits

0x9d77,	// (0x0003e332) aid_touch_area_vid4

0x9db7,	// (0x0003e372) main_video4_pane_g5_ParamLimits

0x9db7,	// (0x0003e372) main_video4_pane_g5

0x9ddd,	// (0x0003e398) vid4_progress_pane_ParamLimits

0x9ddd,	// (0x0003e398) vid4_progress_pane

0xed67,	// (0x00043322) main_cset_slider_pane_g18_ParamLimits

0xed67,	// (0x00043322) main_cset_slider_pane_g18

0xef39,	// (0x000434f4) cell_cam4_burst_pane_g2_ParamLimits

0xef39,	// (0x000434f4) cell_cam4_burst_pane_g2

0x0001,

0xfa53,	// (0x0004400e) cell_cam4_burst_pane_g_ParamLimits

0xfa53,	// (0x0004400e) cell_cam4_burst_pane_g

0xab27,	// (0x0003f0e2) bg_cl_pane_ParamLimits

0xab27,	// (0x0003f0e2) bg_cl_pane

0xab33,	// (0x0003f0ee) cl_header_pane_ParamLimits

0xab33,	// (0x0003f0ee) cl_header_pane

0xab3f,	// (0x0003f0fa) cl_listscroll_pane_ParamLimits

0xab3f,	// (0x0003f0fa) cl_listscroll_pane

0xf087,	// (0x00043642) bg_cl_pane_g1

0xf08f,	// (0x0004364a) bg_cl_pane_g2

0xf097,	// (0x00043652) bg_cl_pane_g3

0xf09f,	// (0x0004365a) bg_cl_pane_g4

0xf0a7,	// (0x00043662) bg_cl_pane_g5

0xf0af,	// (0x0004366a) bg_cl_pane_g6

0xf0b7,	// (0x00043672) bg_cl_pane_g7

0xf0bf,	// (0x0004367a) bg_cl_pane_g8

0xf0c7,	// (0x00043682) bg_cl_pane_g9

0x0008,

0xfa8e,	// (0x00044049) bg_cl_pane_g

0xab4b,	// (0x0003f106) aid_height_cl_leading_ParamLimits

0xab4b,	// (0x0003f106) aid_height_cl_leading

0xab57,	// (0x0003f112) aid_height_cl_text_ParamLimits

0xab57,	// (0x0003f112) aid_height_cl_text

0x4fab,	// (0x00039566) bg_cl_header_pane_ParamLimits

0x4fab,	// (0x00039566) bg_cl_header_pane

0xab6f,	// (0x0003f12a) cl_header_pane_g1_ParamLimits

0xab6f,	// (0x0003f12a) cl_header_pane_g1

0xab7c,	// (0x0003f137) cl_header_pane_t1_ParamLimits

0xab7c,	// (0x0003f137) cl_header_pane_t1

0xf0cf,	// (0x0004368a) cl_list_pane

0xed3a,	// (0x000432f5) hc_scroll_pane_cp01

0x27ce,	// (0x00036d89) bg_cl_header_pane_g1

0xec1c,	// (0x000431d7) bg_cl_header_pane_g2

0x27ee,	// (0x00036da9) bg_cl_header_pane_g3

0xec2c,	// (0x000431e7) bg_cl_header_pane_g4

0xec24,	// (0x000431df) bg_cl_header_pane_g5

0xee46,	// (0x00043401) bg_cl_header_pane_g6

0xec44,	// (0x000431ff) bg_cl_header_pane_g7

0xec4c,	// (0x00043207) bg_cl_header_pane_g8

0xec3c,	// (0x000431f7) bg_cl_header_pane_g9

0x0008,

0xfaa1,	// (0x0004405c) bg_cl_header_pane_g

0xab8e,	// (0x0003f149) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xab8e,	// (0x0003f149) hc_cl_list_double_graphic_heading_pane

0xab9e,	// (0x0003f159) hc_cl_list_single_graphic_pane_ParamLimits

0xab9e,	// (0x0003f159) hc_cl_list_single_graphic_pane

0xabb0,	// (0x0003f16b) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xabb0,	// (0x0003f16b) hc_cl_list_single_graphic_pane_g1

0xabbc,	// (0x0003f177) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xabbc,	// (0x0003f177) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfab4,	// (0x0004406f) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfab4,	// (0x0004406f) hc_cl_list_single_graphic_pane_g

0xabd0,	// (0x0003f18b) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xabd0,	// (0x0003f18b) hc_cl_list_single_graphic_pane_t1

0xabb0,	// (0x0003f16b) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xabb0,	// (0x0003f16b) hc_cl_list_double_graphic_heading_pane_g1

0xabe5,	// (0x0003f1a0) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xabe5,	// (0x0003f1a0) hc_cl_list_double_graphic_heading_pane_g2

0xabf9,	// (0x0003f1b4) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xabf9,	// (0x0003f1b4) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfab9,	// (0x00044074) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfab9,	// (0x00044074) hc_cl_list_double_graphic_heading_pane_g

0xac0d,	// (0x0003f1c8) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xac0d,	// (0x0003f1c8) hc_cl_list_double_graphic_heading_pane_t1

0xac22,	// (0x0003f1dd) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xac22,	// (0x0003f1dd) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfac0,	// (0x0004407b) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfac0,	// (0x0004407b) hc_cl_list_double_graphic_heading_pane_t

0xac3f,	// (0x0003f1fa) vid4_progress_pane_g1

0xac51,	// (0x0003f20c) vid4_progress_pane_g2

0x7625,	// (0x0003bbe0) vid4_progress_pane_g3

0xac63,	// (0x0003f21e) vid4_progress_pane_g4

0x0004,

0xfac5,	// (0x00044080) vid4_progress_pane_g

0xac81,	// (0x0003f23c) vid4_progress_pane_t1

0xac96,	// (0x0003f251) vid4_progress_pane_t2

0x0002,

0xfad0,	// (0x0004408b) vid4_progress_pane_t

0xacc1,	// (0x0003f27c) wait_bar_pane_cp07

0xdfeb,	// (0x000425a6) blid_firmament_pane_ParamLimits

0xe02e,	// (0x000425e9) popup_blid_sat_info2_window_g1

0xe052,	// (0x0004260d) popup_blid_sat_info2_window_t3

0xe060,	// (0x0004261b) popup_blid_sat_info2_window_t4

0xe06e,	// (0x00042629) popup_blid_sat_info2_window_t5

0xe07c,	// (0x00042637) popup_blid_sat_info2_window_t6

0xe08c,	// (0x00042647) popup_blid_sat_info2_window_t7

0xe09a,	// (0x00042655) popup_blid_sat_info2_window_t8

0xe0a8,	// (0x00042663) popup_blid_sat_info2_window_t9

0xe0b6,	// (0x00042671) popup_blid_sat_info2_window_t10

0xe17e,	// (0x00042739) aid_firma_cardinal_ParamLimits

0xe192,	// (0x0004274d) blid_firmament_pane_t1_ParamLimits

0xe1a9,	// (0x00042764) blid_firmament_pane_t2_ParamLimits

0xe1c0,	// (0x0004277b) blid_firmament_pane_t3_ParamLimits

0xe1d7,	// (0x00042792) blid_firmament_pane_t4_ParamLimits

0xf6e3,	// (0x00043c9e) blid_firmament_pane_t_ParamLimits

0xe1ee,	// (0x000427a9) blid_sat_info_pane_ParamLimits

0x238b,	// (0x00036946) main_cam_set_pane_ParamLimits

0x925e,	// (0x0003d819) aid_size_cell_colour_35_ParamLimits

0x9278,	// (0x0003d833) aid_size_cell_colour_112_ParamLimits

0x928f,	// (0x0003d84a) aid_size_cell_effect_ParamLimits

0x238b,	// (0x00036946) bg_tb_trans_pane_cp02_ParamLimits

0x2a67,	// (0x00037022) heading_imed_pane_ParamLimits

0x92a9,	// (0x0003d864) listscroll_imed_pane_ParamLimits

0xd3f4,	// (0x000419af) popup_call2_audio_first_window_g5_ParamLimits

0xd3f4,	// (0x000419af) popup_call2_audio_first_window_g5

0x99b8,	// (0x0003df73) aid_size_touch_image3_arrow_left_ParamLimits

0x99b8,	// (0x0003df73) aid_size_touch_image3_arrow_left

0x99ce,	// (0x0003df89) aid_size_touch_image3_arrow_right_ParamLimits

0x99ce,	// (0x0003df89) aid_size_touch_image3_arrow_right

0xacac,	// (0x0003f267) vid4_progress_pane_t3

0x9554,	// (0x0003db0f) main_hwr_training_symbol_option_pane_ParamLimits

0x9554,	// (0x0003db0f) main_hwr_training_symbol_option_pane

0xe9c2,	// (0x00042f7d) popup_hwr_training_preview_window_ParamLimits

0xe9c2,	// (0x00042f7d) popup_hwr_training_preview_window

0x95b5,	// (0x0003db70) hwr_training_navi_pane_g5_ParamLimits

0x95b5,	// (0x0003db70) hwr_training_navi_pane_g5

0xec0a,	// (0x000431c5) popup_char_count_window

0x4fab,	// (0x00039566) bg_popup_sub_pane_cp20_ParamLimits

0xa7c2,	// (0x0003ed7d) list_vitu2_match_list_pane_ParamLimits

0xa7ce,	// (0x0003ed89) vitu2_page_scroll_pane_ParamLimits

0xa7ce,	// (0x0003ed89) vitu2_page_scroll_pane

0x00b4,	// (0x0003466f) list_single_hwr_training_symbol_option_pane_ParamLimits

0x00b4,	// (0x0003466f) list_single_hwr_training_symbol_option_pane

0x00c7,	// (0x00034682) list_single_hwr_training_symbol_option_pane_g1

0x00cf,	// (0x0003468a) list_single_hwr_training_symbol_option_pane_t1

0x00dd,	// (0x00034698) bg_button_pane_cp023

0x00e6,	// (0x000346a1) bg_button_pane_cp024

0xacd5,	// (0x0003f290) vitu2_page_scroll_pane_g1

0xacdd,	// (0x0003f298) vitu2_page_scroll_pane_g2

0x0001,

0xfad7,	// (0x00044092) vitu2_page_scroll_pane_g

0xace7,	// (0x0003f2a2) vitu2_page_scroll_pane_t1

0xdf4b,	// (0x00042506) popup_char_count_window_g1

0x0119,	// (0x000346d4) popup_char_count_window_g2

0x0122,	// (0x000346dd) popup_char_count_window_g3

0x0002,

0xfadc,	// (0x00044097) popup_char_count_window_g

0x012b,	// (0x000346e6) popup_char_count_window_t1

0x1b96,	// (0x00036151) main_vded2_pane

0xe6bf,	// (0x00042c7a) aid_size_cell_imed_line

0xe6c9,	// (0x00042c84) grid_imed_line_width_pane

0x9e51,	// (0x0003e40c) vid4_indicators_pane_g4

0x0139,	// (0x000346f4) cell_imed_line_width_pane_ParamLimits

0x0139,	// (0x000346f4) cell_imed_line_width_pane

0x014f,	// (0x0003470a) cell_imed_line_width_pane_g1

0xebca,	// (0x00043185) cell_imed_line_width_pane_g2

0x0001,

0xfae3,	// (0x0004409e) cell_imed_line_width_pane_g

0xacf6,	// (0x0003f2b1) main_vded2_pane_g1_ParamLimits

0xacf6,	// (0x0003f2b1) main_vded2_pane_g1

0xad05,	// (0x0003f2c0) main_vded2_pane_g2_ParamLimits

0xad05,	// (0x0003f2c0) main_vded2_pane_g2

0x0001,

0xfae8,	// (0x000440a3) main_vded2_pane_g_ParamLimits

0xfae8,	// (0x000440a3) main_vded2_pane_g

0xad13,	// (0x0003f2ce) vded2_slider_pane_ParamLimits

0xad13,	// (0x0003f2ce) vded2_slider_pane

0xad20,	// (0x0003f2db) aid_size_touch_vded2_end

0xad2a,	// (0x0003f2e5) aid_size_touch_vded2_playhead

0x0158,	// (0x00034713) aid_size_touch_vded2_start

0x0160,	// (0x0003471b) vded2_slider_bg_pane

0x0169,	// (0x00034724) vded2_slider_pane_g1

0x0172,	// (0x0003472d) vded2_slider_pane_g2

0xad32,	// (0x0003f2ed) vded2_slider_pane_g3

0x0002,

0xfaed,	// (0x000440a8) vded2_slider_pane_g

0x017a,	// (0x00034735) vded2_slider_bg_pane_g1

0x0183,	// (0x0003473e) vded2_slider_bg_pane_g2

0x018c,	// (0x00034747) vded2_slider_bg_pane_g3

0x0002,

0xf7b3,	// (0x00043d6e) vded2_slider_bg_pane_g

0x763d,	// (0x0003bbf8) aid_postcard_touch_down_pane_ParamLimits

0x763d,	// (0x0003bbf8) aid_postcard_touch_down_pane

0x764d,	// (0x0003bc08) aid_postcard_touch_up_pane_ParamLimits

0x764d,	// (0x0003bc08) aid_postcard_touch_up_pane

0x1b96,	// (0x00036151) main_blid2_pane

0x7d7a,	// (0x0003c335) popup_blid2_search_window

0x1b96,	// (0x00036151) blid2_gps_pane

0x1b96,	// (0x00036151) blid2_navig_pane

0x1b96,	// (0x00036151) blid2_search_pane

0x1b96,	// (0x00036151) blid2_tripm_pane

0xad3b,	// (0x0003f2f6) blid2_search_pane_g1_ParamLimits

0xad3b,	// (0x0003f2f6) blid2_search_pane_g1

0xad47,	// (0x0003f302) blid2_search_pane_t1_ParamLimits

0xad47,	// (0x0003f302) blid2_search_pane_t1

0xad59,	// (0x0003f314) aid_size_cell_blid2_gps_ParamLimits

0xad59,	// (0x0003f314) aid_size_cell_blid2_gps

0xad69,	// (0x0003f324) blid2_gps_pane_g1_ParamLimits

0xad69,	// (0x0003f324) blid2_gps_pane_g1

0xad75,	// (0x0003f330) grid_blid2_satellite_pane_ParamLimits

0xad75,	// (0x0003f330) grid_blid2_satellite_pane

0xad83,	// (0x0003f33e) blid2_navig_pane_g1_ParamLimits

0xad83,	// (0x0003f33e) blid2_navig_pane_g1

0xad8f,	// (0x0003f34a) blid2_navig_pane_t1_ParamLimits

0xad8f,	// (0x0003f34a) blid2_navig_pane_t1

0xada1,	// (0x0003f35c) blid2_navig_pane_t2_ParamLimits

0xada1,	// (0x0003f35c) blid2_navig_pane_t2

0x0001,

0xfaf4,	// (0x000440af) blid2_navig_pane_t_ParamLimits

0xfaf4,	// (0x000440af) blid2_navig_pane_t

0xadb3,	// (0x0003f36e) blid2_navig_ring_pane_ParamLimits

0xadb3,	// (0x0003f36e) blid2_navig_ring_pane

0xadc3,	// (0x0003f37e) blid2_speed_pane_ParamLimits

0xadc3,	// (0x0003f37e) blid2_speed_pane

0xadcf,	// (0x0003f38a) blid2_tripm_pane_g1_ParamLimits

0xadcf,	// (0x0003f38a) blid2_tripm_pane_g1

0xaddf,	// (0x0003f39a) blid2_tripm_pane_g2_ParamLimits

0xaddf,	// (0x0003f39a) blid2_tripm_pane_g2

0xadeb,	// (0x0003f3a6) blid2_tripm_pane_g3_ParamLimits

0xadeb,	// (0x0003f3a6) blid2_tripm_pane_g3

0xadf7,	// (0x0003f3b2) blid2_tripm_pane_g4_ParamLimits

0xadf7,	// (0x0003f3b2) blid2_tripm_pane_g4

0xae03,	// (0x0003f3be) blid2_tripm_pane_g5_ParamLimits

0xae03,	// (0x0003f3be) blid2_tripm_pane_g5

0x0005,

0xfaf9,	// (0x000440b4) blid2_tripm_pane_g_ParamLimits

0xfaf9,	// (0x000440b4) blid2_tripm_pane_g

0xae1f,	// (0x0003f3da) blid2_tripm_pane_t1_ParamLimits

0xae1f,	// (0x0003f3da) blid2_tripm_pane_t1

0xae31,	// (0x0003f3ec) blid2_tripm_pane_t2_ParamLimits

0xae31,	// (0x0003f3ec) blid2_tripm_pane_t2

0xae43,	// (0x0003f3fe) blid2_tripm_pane_t3_ParamLimits

0xae43,	// (0x0003f3fe) blid2_tripm_pane_t3

0x0003,

0xfb06,	// (0x000440c1) blid2_tripm_pane_t_ParamLimits

0xfb06,	// (0x000440c1) blid2_tripm_pane_t

0xae75,	// (0x0003f430) cell_blid2_satellite_pane_ParamLimits

0xae75,	// (0x0003f430) cell_blid2_satellite_pane

0xae93,	// (0x0003f44e) cell_blid2_satellite_pane_g1

0x0195,	// (0x00034750) cell_blid2_satellite_pane_t1

0xe1fe,	// (0x000427b9) blid2_speed_pane_g1

0x01a3,	// (0x0003475e) blid2_speed_pane_t1

0x01b1,	// (0x0003476c) blid2_speed_pane_t2

0x0001,

0xfb0f,	// (0x000440ca) blid2_speed_pane_t

0xe1fe,	// (0x000427b9) blid2_navig_ring_pane_g1

0xae9c,	// (0x0003f457) blid2_navig_ring_pane_g2

0xaea4,	// (0x0003f45f) blid2_navig_ring_pane_g3

0xaeac,	// (0x0003f467) blid2_navig_ring_pane_g4

0xaeb4,	// (0x0003f46f) blid2_navig_ring_pane_g5

0x0004,

0xfb14,	// (0x000440cf) blid2_navig_ring_pane_g

0x1b96,	// (0x00036151) bg_popup_window_pane_cp011

0x01bf,	// (0x0003477a) popup_blid2_search_window_g1

0x01c7,	// (0x00034782) popup_blid2_search_window_t1

0x01d5,	// (0x00034790) popup_blid2_search_window_t2

0x0001,

0xfb1f,	// (0x000440da) popup_blid2_search_window_t

0x26dd,	// (0x00036c98) main_browser_pane_g1

0x2316,	// (0x000368d1) main_browser_pane_ParamLimits

0x238b,	// (0x00036946) bg_button_pane_cp011_ParamLimits

0xa0bd,	// (0x0003e678) cell_vitu2_function_pane_g1_ParamLimits

0xddc6,	// (0x00042381) bg_popup_sub_pane_cp22_ParamLimits

0x3fc5,	// (0x00038580) input_focus_pane_cp08_ParamLimits

0xa926,	// (0x0003eee1) popup_vitu2_query_button_pane_ParamLimits

0xa926,	// (0x0003eee1) popup_vitu2_query_button_pane

0x3fdc,	// (0x00038597) popup_vitu2_query_input_button_pane

0xee83,	// (0x0004343e) popup_vitu2_query_window_g1_ParamLimits

0x3fe6,	// (0x000385a1) popup_vitu2_query_window_g2_ParamLimits

0xfa27,	// (0x00043fe2) popup_vitu2_query_window_g_ParamLimits

0x1b96,	// (0x00036151) bg_button_pane_cp026

0xaebc,	// (0x0003f477) popup_vitu2_query_input_button_pane_g1

0x1b96,	// (0x00036151) bg_button_pane_cp025

0x01e3,	// (0x0003479e) popup_vitu2_query_button_pane_t1

0x87ea,	// (0x0003cda5) main_mp3_pane_t6

0x87fa,	// (0x0003cdb5) popup_slider_window_cp01

0x9d2c,	// (0x0003e2e7) cam4_battery_pane

0x9e0a,	// (0x0003e3c5) cam4_battery_pane_cp02

0xac37,	// (0x0003f1f2) cam4_battery_pane_cp01

0xac37,	// (0x0003f1f2) cam4_battery_pane_cp03

0xe1fe,	// (0x000427b9) cam4_battery_pane_g1

0xebd2,	// (0x0004318d) cam4_battery_pane_g2

0x0001,

0xfb24,	// (0x000440df) cam4_battery_pane_g

0xe0c4,	// (0x0004267f) popup_blid_sat_info2_window_t11

0x6f31,	// (0x0003b4ec) aid_size_touch_mv_arrow_left_ParamLimits

0x6f5c,	// (0x0003b517) aid_size_touch_mv_arrow_right_ParamLimits

0xc91b,	// (0x00040ed6) navi_pane_g1_ParamLimits

0x6f9b,	// (0x0003b556) navi_pane_g2_ParamLimits

0x6fc9,	// (0x0003b584) navi_pane_g3_ParamLimits

0xf3f5,	// (0x000439b0) navi_pane_g_ParamLimits

0x7023,	// (0x0003b5de) navi_pane_mv_t1_ParamLimits

0x92b5,	// (0x0003d870) grid_imed_effect_pane_ParamLimits

0x5cde,	// (0x0003a299) aid_placing_vt_slider_lsc

0x2628,	// (0x00036be3) aid_placing_vt_slider_prt

0x238b,	// (0x00036946) bg_tb_trans_pane_cp01_ParamLimits

0xe34e,	// (0x00042909) popup_image_details_window_g1_ParamLimits

0xe361,	// (0x0004291c) popup_image_details_window_g2_ParamLimits

0xe376,	// (0x00042931) popup_image_details_window_g3_ParamLimits

0xe376,	// (0x00042931) popup_image_details_window_g3

0xf728,	// (0x00043ce3) popup_image_details_window_g_ParamLimits

0xe38a,	// (0x00042945) popup_image_details_window_t1_ParamLimits

0xe39c,	// (0x00042957) popup_image_details_window_t2_ParamLimits

0xe3b5,	// (0x00042970) popup_image_details_window_t3_ParamLimits

0xe3c9,	// (0x00042984) popup_image_details_window_t4_ParamLimits

0xe3e4,	// (0x0004299f) popup_image_details_window_t5_ParamLimits

0xf72f,	// (0x00043cea) popup_image_details_window_t_ParamLimits

0xab63,	// (0x0003f11e) cl_header_name_pane_ParamLimits

0xab63,	// (0x0003f11e) cl_header_name_pane

0xaec4,	// (0x0003f47f) cl_header_name_pane_t1_ParamLimits

0xaec4,	// (0x0003f47f) cl_header_name_pane_t1

0xaedb,	// (0x0003f496) cl_header_name_pane_t2_ParamLimits

0xaedb,	// (0x0003f496) cl_header_name_pane_t2

0xaf05,	// (0x0003f4c0) cl_header_name_pane_t3_ParamLimits

0xaf05,	// (0x0003f4c0) cl_header_name_pane_t3

0x0002,

0xfb29,	// (0x000440e4) cl_header_name_pane_t_ParamLimits

0xfb29,	// (0x000440e4) cl_header_name_pane_t

0x6ff4,	// (0x0003b5af) navi_pane_mv_g2_ParamLimits

0xebbe,	// (0x00043179) field_vitu2_entry_pane_g1_ParamLimits

0xebf0,	// (0x000431ab) field_vitu2_entry_pane_g2_ParamLimits

0xebfc,	// (0x000431b7) field_vitu2_entry_pane_g3_ParamLimits

0xebfc,	// (0x000431b7) field_vitu2_entry_pane_g3

0xf926,	// (0x00043ee1) field_vitu2_entry_pane_g_ParamLimits

0xa04d,	// (0x0003e608) cell_vitu2_itu_pane_g1_ParamLimits

0xa05d,	// (0x0003e618) cell_vitu2_itu_pane_g2_ParamLimits

0xa05d,	// (0x0003e618) cell_vitu2_itu_pane_g2

0x0001,

0xf932,	// (0x00043eed) cell_vitu2_itu_pane_g_ParamLimits

0xf932,	// (0x00043eed) cell_vitu2_itu_pane_g

0x238b,	// (0x00036946) bg_vkb2_func_pane_cp05_ParamLimits

0x238b,	// (0x00036946) bg_vkb2_func_pane_cp05

0x238b,	// (0x00036946) bg_vkb2_func_pane_cp03

0x238b,	// (0x00036946) bg_vkb2_func_pane_cp04

0x238b,	// (0x00036946) bg_vkb2_func_pane_cp10_ParamLimits

0x238b,	// (0x00036946) bg_vkb2_func_pane_cp10

0x419b,	// (0x00038756) bg_vkb2_func_pane_cp08

0xab0d,	// (0x0003f0c8) bg_vkb2_func_pane_cp06

0xab1b,	// (0x0003f0d6) bg_vkb2_func_pane_cp07

0x00ef,	// (0x000346aa) bg_vkb2_func_pane_cp11_ParamLimits

0x00ef,	// (0x000346aa) bg_vkb2_func_pane_cp11

0x0104,	// (0x000346bf) bg_vkb2_func_pane_cp12_ParamLimits

0x0104,	// (0x000346bf) bg_vkb2_func_pane_cp12

0x1b96,	// (0x00036151) bg_vkb2_func_pane_cp09

0xec1c,	// (0x000431d7) bg_vkb2_func_pane_g1

0x27ee,	// (0x00036da9) bg_vkb2_func_pane_g2

0xec24,	// (0x000431df) bg_vkb2_func_pane_g3

0xec2c,	// (0x000431e7) bg_vkb2_func_pane_g4

0xee46,	// (0x00043401) bg_vkb2_func_pane_g5

0xec44,	// (0x000431ff) bg_vkb2_func_pane_g6

0xec4c,	// (0x00043207) bg_vkb2_func_pane_g7

0xec3c,	// (0x000431f7) bg_vkb2_func_pane_g8

0x27ce,	// (0x00036d89) bg_vkb2_func_pane_g9

0x0008,

0xfb30,	// (0x000440eb) bg_vkb2_func_pane_g

0xae11,	// (0x0003f3cc) blid2_tripm_pane_g6_ParamLimits

0xae11,	// (0x0003f3cc) blid2_tripm_pane_g6

0xea92,	// (0x0004304d) mp4_progress_pane_g1

0xae69,	// (0x0003f424) blid2_tripm_values_pane_ParamLimits

0xae69,	// (0x0003f424) blid2_tripm_values_pane

0xaf2a,	// (0x0003f4e5) blid2_tripm_values_pane_t1

0xaf38,	// (0x0003f4f3) blid2_tripm_values_pane_t2

0xaf46,	// (0x0003f501) blid2_tripm_values_pane_t3

0xaf54,	// (0x0003f50f) blid2_tripm_values_pane_t4

0xaf62,	// (0x0003f51d) blid2_tripm_values_pane_t5

0xaf70,	// (0x0003f52b) blid2_tripm_values_pane_t6

0xaf7e,	// (0x0003f539) blid2_tripm_values_pane_t7

0xaf8c,	// (0x0003f547) blid2_tripm_values_pane_t8

0xaf9a,	// (0x0003f555) blid2_tripm_values_pane_t9

0x0008,

0xfb43,	// (0x000440fe) blid2_tripm_values_pane_t

0x5d1c,	// (0x0003a2d7) call_video_pane_t1_ParamLimits

0x5d39,	// (0x0003a2f4) call_video_pane_t2_ParamLimits

0xf27e,	// (0x00043839) call_video_pane_t_ParamLimits

0x3d41,	// (0x000382fc) msg_header_pane_g1_ParamLimits

0xcb38,	// (0x000410f3) msg_header_pane_g2_ParamLimits

0xcb38,	// (0x000410f3) msg_header_pane_g2

0x0001,

0xf498,	// (0x00043a53) msg_header_pane_g_ParamLimits

0xf498,	// (0x00043a53) msg_header_pane_g

0x2316,	// (0x000368d1) main_clock2_pane_ParamLimits

0x9050,	// (0x0003d60b) grid_clock2_toolbar_pane_ParamLimits

0x9050,	// (0x0003d60b) grid_clock2_toolbar_pane

0x9050,	// (0x0003d60b) listscroll_clock2_pane_ParamLimits

0x9050,	// (0x0003d60b) listscroll_clock2_pane

0x90ec,	// (0x0003d6a7) main_clock2_pane_t3_ParamLimits

0x90ec,	// (0x0003d6a7) main_clock2_pane_t3

0x90fe,	// (0x0003d6b9) main_clock2_pane_t4_ParamLimits

0x90fe,	// (0x0003d6b9) main_clock2_pane_t4

0x01f1,	// (0x000347ac) cell_clock2_toolbar_pane

0x01f9,	// (0x000347b4) cell_clock2_toolbar_pane_cp01

0x01f9,	// (0x000347b4) cell_clock2_toolbar_pane_cp02

0x0201,	// (0x000347bc) cell_clock2_toolbar_pane_cp03

0x0209,	// (0x000347c4) list_clock2_pane

0xc881,	// (0x00040e3c) scroll_pane_cp10

0x0211,	// (0x000347cc) list_single_clock2_pane_ParamLimits

0x0211,	// (0x000347cc) list_single_clock2_pane

0xc9bb,	// (0x00040f76) list_highlight_pane_cp08

0x021e,	// (0x000347d9) list_single_clock2_pane_t1

0x022c,	// (0x000347e7) list_single_clock2_pane_t2

0x0001,

0xfb56,	// (0x00044111) list_single_clock2_pane_t

0x1b96,	// (0x00036151) bg_button_pane_cp10

0x023a,	// (0x000347f5) cell_clock2_toolbar_pane_g1

0x759f,	// (0x0003bb5a) aid_main_viewer_pane_g1_ParamLimits

0x759f,	// (0x0003bb5a) aid_main_viewer_pane_g1

0x75ab,	// (0x0003bb66) aid_main_viewer_pane_g2_ParamLimits

0x75ab,	// (0x0003bb66) aid_main_viewer_pane_g2

0x75b7,	// (0x0003bb72) aid_main_viewer_pane_g3_ParamLimits

0x75b7,	// (0x0003bb72) aid_main_viewer_pane_g3

0x75c8,	// (0x0003bb83) aid_main_viewer_pane_g4_ParamLimits

0x75c8,	// (0x0003bb83) aid_main_viewer_pane_g4

0x0003,

0xf4a9,	// (0x00043a64) aid_main_viewer_pane_g_ParamLimits

0xf4a9,	// (0x00043a64) aid_main_viewer_pane_g

0x7d52,	// (0x0003c30d) main_calc_pane_ParamLimits

0x7d5f,	// (0x0003c31a) main_dialer2_pane_ParamLimits

0x1b96,	// (0x00036151) main_cam6_pane

0x1b96,	// (0x00036151) main_vid6_pane

0x905c,	// (0x0003d617) listscroll_gen_pane_cp06_ParamLimits

0x905c,	// (0x0003d617) listscroll_gen_pane_cp06

0x9110,	// (0x0003d6cb) main_clock2_pane_t5_ParamLimits

0x9110,	// (0x0003d6cb) main_clock2_pane_t5

0x915f,	// (0x0003d71a) aid_call2_pane_cp10_ParamLimits

0x9171,	// (0x0003d72c) aid_call_pane_cp10_ParamLimits

0xc8f0,	// (0x00040eab) popup_clock_analogue_window_cp10_g1_ParamLimits

0xc8f0,	// (0x00040eab) popup_clock_analogue_window_cp10_g2_ParamLimits

0x9183,	// (0x0003d73e) popup_clock_analogue_window_cp10_g3_ParamLimits

0x9183,	// (0x0003d73e) popup_clock_analogue_window_cp10_g4_ParamLimits

0xc8f0,	// (0x00040eab) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7df,	// (0x00043d9a) popup_clock_analogue_window_cp10_g_ParamLimits

0x9195,	// (0x0003d750) popup_clock_analogue_window_cp10_t1_ParamLimits

0x9965,	// (0x0003df20) cell_dialer2_keypad_pane_g2_ParamLimits

0x9965,	// (0x0003df20) cell_dialer2_keypad_pane_g2

0x0001,

0xf8c5,	// (0x00043e80) cell_dialer2_keypad_pane_g_ParamLimits

0xf8c5,	// (0x00043e80) cell_dialer2_keypad_pane_g

0x9981,	// (0x0003df3c) cell_dialer2_keypad_pane_t1

0xa398,	// (0x0003e953) main_cset_text2_pane_ParamLimits

0xa398,	// (0x0003e953) main_cset_text2_pane

0xf07b,	// (0x00043636) area_vitu2_query_pane_g1_ParamLimits

0x40c6,	// (0x00038681) area_vitu2_query_pane_g2_ParamLimits

0xfa7a,	// (0x00044035) area_vitu2_query_pane_g_ParamLimits

0x4177,	// (0x00038732) area_vitu2_query_pane_t7_ParamLimits

0x4177,	// (0x00038732) area_vitu2_query_pane_t7

0xab0d,	// (0x0003f0c8) bg_button_pane_cp018_ParamLimits

0xab1b,	// (0x0003f0d6) bg_button_pane_cp021_ParamLimits

0x419b,	// (0x00038756) bg_button_pane_cp022_ParamLimits

0x419b,	// (0x00038756) bg_vkb2_func_pane_cp08_ParamLimits

0xab0d,	// (0x0003f0c8) bg_vkb2_func_pane_cp06_ParamLimits

0xab1b,	// (0x0003f0d6) bg_vkb2_func_pane_cp07_ParamLimits

0x41ac,	// (0x00038767) input_focus_pane_cp09_ParamLimits

0xafa8,	// (0x0003f563) cam6_autofocus_pane_ParamLimits

0xafa8,	// (0x0003f563) cam6_autofocus_pane

0xafca,	// (0x0003f585) cam6_image_uncrop_pane_ParamLimits

0xafca,	// (0x0003f585) cam6_image_uncrop_pane

0xaff7,	// (0x0003f5b2) cam6_indi_pane_ParamLimits

0xaff7,	// (0x0003f5b2) cam6_indi_pane

0xb011,	// (0x0003f5cc) cam6_mode_pane_ParamLimits

0xb011,	// (0x0003f5cc) cam6_mode_pane

0xb025,	// (0x0003f5e0) cam6_timer_pane_ParamLimits

0xb025,	// (0x0003f5e0) cam6_timer_pane

0xb031,	// (0x0003f5ec) cam6_zoom_pane_ParamLimits

0xb031,	// (0x0003f5ec) cam6_zoom_pane

0xb04d,	// (0x0003f608) cam6_mode_pane_g1_ParamLimits

0xb04d,	// (0x0003f608) cam6_mode_pane_g1

0xb059,	// (0x0003f614) cam6_mode_pane_g2_ParamLimits

0xb059,	// (0x0003f614) cam6_mode_pane_g2

0xb065,	// (0x0003f620) cam6_mode_pane_g3_ParamLimits

0xb065,	// (0x0003f620) cam6_mode_pane_g3

0xb071,	// (0x0003f62c) cam6_mode_pane_g4_ParamLimits

0xb071,	// (0x0003f62c) cam6_mode_pane_g4

0x0003,

0xfb5b,	// (0x00044116) cam6_mode_pane_g_ParamLimits

0xfb5b,	// (0x00044116) cam6_mode_pane_g

0x0250,	// (0x0003480b) bg_tb_trans_pane_cp08_ParamLimits

0x0250,	// (0x0003480b) bg_tb_trans_pane_cp08

0x025e,	// (0x00034819) cam6_battery_pane_ParamLimits

0x025e,	// (0x00034819) cam6_battery_pane

0x0274,	// (0x0003482f) cam6_indi_pane_g1_ParamLimits

0x0274,	// (0x0003482f) cam6_indi_pane_g1

0x0286,	// (0x00034841) cam6_indi_pane_g2_ParamLimits

0x0286,	// (0x00034841) cam6_indi_pane_g2

0x0298,	// (0x00034853) cam6_indi_pane_g3_ParamLimits

0x0298,	// (0x00034853) cam6_indi_pane_g3

0x0002,

0xfb64,	// (0x0004411f) cam6_indi_pane_g_ParamLimits

0xfb64,	// (0x0004411f) cam6_indi_pane_g

0x02aa,	// (0x00034865) cam6_indi_pane_t1_ParamLimits

0x02aa,	// (0x00034865) cam6_indi_pane_t1

0x9e86,	// (0x0003e441) cam6_autofocus_pane_g1

0x9e8e,	// (0x0003e449) cam6_autofocus_pane_g2

0x9e96,	// (0x0003e451) cam6_autofocus_pane_g3

0x9e9e,	// (0x0003e459) cam6_autofocus_pane_g4

0x0003,

0xfb6b,	// (0x00044126) cam6_autofocus_pane_g

0x02d0,	// (0x0003488b) cam6_timer_pane_g1

0x02d8,	// (0x00034893) cam6_timer_pane_t1

0x02e6,	// (0x000348a1) cam6_zoom_cont_pane

0x02ee,	// (0x000348a9) cam6_zoom_pane_g1

0x02f6,	// (0x000348b1) cam6_zoom_pane_g2

0xb07d,	// (0x0003f638) cam6_zoom_pane_g3

0x0002,

0xfb74,	// (0x0004412f) cam6_zoom_pane_g

0xe1fe,	// (0x000427b9) cam6_battery_pane_g1

0xe1fe,	// (0x000427b9) cam6_battery_pane_g2

0x0001,

0xf6ec,	// (0x00043ca7) cam6_battery_pane_g

0x02fe,	// (0x000348b9) cam6_zoom_cont_pane_g1

0x0307,	// (0x000348c2) cam6_zoom_cont_pane_g2

0x0310,	// (0x000348cb) cam6_zoom_cont_pane_g3

0x0002,

0xfb7b,	// (0x00044136) cam6_zoom_cont_pane_g

0xb09a,	// (0x0003f655) cam6_mode_pane_cp_ParamLimits

0xb09a,	// (0x0003f655) cam6_mode_pane_cp

0xb031,	// (0x0003f5ec) cam6_zoom_pane_cp_ParamLimits

0xb031,	// (0x0003f5ec) cam6_zoom_pane_cp

0xb0ae,	// (0x0003f669) vid6_image_uncrop_cif_pane_ParamLimits

0xb0ae,	// (0x0003f669) vid6_image_uncrop_cif_pane

0xb0da,	// (0x0003f695) vid6_image_uncrop_nhd_pane_ParamLimits

0xb0da,	// (0x0003f695) vid6_image_uncrop_nhd_pane

0xafca,	// (0x0003f585) vid6_image_uncrop_vga_pane_ParamLimits

0xafca,	// (0x0003f585) vid6_image_uncrop_vga_pane

0xb0f9,	// (0x0003f6b4) vid6_image_uncrop_wvga_pane_ParamLimits

0xb0f9,	// (0x0003f6b4) vid6_image_uncrop_wvga_pane

0xb118,	// (0x0003f6d3) vid6_indi_pane_ParamLimits

0xb118,	// (0x0003f6d3) vid6_indi_pane

0x0250,	// (0x0003480b) bg_tb_trans_pane_cp09_ParamLimits

0x0250,	// (0x0003480b) bg_tb_trans_pane_cp09

0x0328,	// (0x000348e3) cam6_battery_pane_cp_ParamLimits

0x0328,	// (0x000348e3) cam6_battery_pane_cp

0x0334,	// (0x000348ef) vid6_indi_pane_g1_ParamLimits

0x0334,	// (0x000348ef) vid6_indi_pane_g1

0x0346,	// (0x00034901) vid6_indi_pane_g2_ParamLimits

0x0346,	// (0x00034901) vid6_indi_pane_g2

0x0358,	// (0x00034913) vid6_indi_pane_g3_ParamLimits

0x0358,	// (0x00034913) vid6_indi_pane_g3

0x036f,	// (0x0003492a) vid6_indi_pane_g4_ParamLimits

0x036f,	// (0x0003492a) vid6_indi_pane_g4

0x0386,	// (0x00034941) vid6_indi_pane_g5_ParamLimits

0x0386,	// (0x00034941) vid6_indi_pane_g5

0x0004,

0xfb82,	// (0x0004413d) vid6_indi_pane_g_ParamLimits

0xfb82,	// (0x0004413d) vid6_indi_pane_g

0x03a0,	// (0x0003495b) vid6_indi_pane_t1_ParamLimits

0x03a0,	// (0x0003495b) vid6_indi_pane_t1

0x03b6,	// (0x00034971) vid6_indi_pane_t2_ParamLimits

0x03b6,	// (0x00034971) vid6_indi_pane_t2

0x03de,	// (0x00034999) vid6_indi_pane_t3_ParamLimits

0x03de,	// (0x00034999) vid6_indi_pane_t3

0x0406,	// (0x000349c1) vid6_indi_pane_t4_ParamLimits

0x0406,	// (0x000349c1) vid6_indi_pane_t4

0x0003,

0xfb8d,	// (0x00044148) vid6_indi_pane_t_ParamLimits

0xfb8d,	// (0x00044148) vid6_indi_pane_t

0x042a,	// (0x000349e5) wait_bar_pane_cp08

0xb13d,	// (0x0003f6f8) main_cset_text2_pane_t1_ParamLimits

0xb13d,	// (0x0003f6f8) main_cset_text2_pane_t1

0xb085,	// (0x0003f640) listscroll_gen_pane_cp06_t1_ParamLimits

0xb085,	// (0x0003f640) listscroll_gen_pane_cp06_t1

0x1b96,	// (0x00036151) main_cam6_set_pane

0xe42e,	// (0x000429e9) bg_tb_trans_pane_cp06_ParamLimits

0x9d34,	// (0x0003e2ef) cam4_indicators_pane_g1_ParamLimits

0x9d45,	// (0x0003e300) cam4_indicators_pane_g2_ParamLimits

0xf902,	// (0x00043ebd) cam4_indicators_pane_g_ParamLimits

0x9d5d,	// (0x0003e318) cam4_indicators_pane_t1_ParamLimits

0x238b,	// (0x00036946) bg_tb_trans_pane_cp07_ParamLimits

0x9e14,	// (0x0003e3cf) vid4_indicators_pane_g1_ParamLimits

0x9e2a,	// (0x0003e3e5) vid4_indicators_pane_g2_ParamLimits

0x9e3e,	// (0x0003e3f9) vid4_indicators_pane_g3_ParamLimits

0x9e51,	// (0x0003e40c) vid4_indicators_pane_g4_ParamLimits

0xf914,	// (0x00043ecf) vid4_indicators_pane_g_ParamLimits

0x9e6f,	// (0x0003e42a) vid4_indicators_pane_t1_ParamLimits

0xac3f,	// (0x0003f1fa) vid4_progress_pane_g1_ParamLimits

0xac51,	// (0x0003f20c) vid4_progress_pane_g2_ParamLimits

0x7625,	// (0x0003bbe0) vid4_progress_pane_g3_ParamLimits

0xac63,	// (0x0003f21e) vid4_progress_pane_g4_ParamLimits

0xfac5,	// (0x00044080) vid4_progress_pane_g_ParamLimits

0xac81,	// (0x0003f23c) vid4_progress_pane_t1_ParamLimits

0xac96,	// (0x0003f251) vid4_progress_pane_t2_ParamLimits

0xacac,	// (0x0003f267) vid4_progress_pane_t3_ParamLimits

0xfad0,	// (0x0004408b) vid4_progress_pane_t_ParamLimits

0xacc1,	// (0x0003f27c) wait_bar_pane_cp07_ParamLimits

0xb164,	// (0x0003f71f) main_cam6_set_pane_g2_ParamLimits

0xb164,	// (0x0003f71f) main_cam6_set_pane_g2

0xb170,	// (0x0003f72b) main_cset6_listscroll_pane_ParamLimits

0xb170,	// (0x0003f72b) main_cset6_listscroll_pane

0xb19d,	// (0x0003f758) main_cset6_slider_pane_ParamLimits

0xb19d,	// (0x0003f758) main_cset6_slider_pane

0xb1a9,	// (0x0003f764) main_cset6_text2_pane_ParamLimits

0xb1a9,	// (0x0003f764) main_cset6_text2_pane

0x0439,	// (0x000349f4) main_cset6_text_pane

0x0441,	// (0x000349fc) main_cset_list_pane_copy1_ParamLimits

0x0441,	// (0x000349fc) main_cset_list_pane_copy1

0x0451,	// (0x00034a0c) scroll_pane_cp028_copy1

0xb1bc,	// (0x0003f777) cset_list_set_pane_copy1

0xb1cc,	// (0x0003f787) aid_position_infowindow_above_copy1

0xb1d4,	// (0x0003f78f) aid_position_infowindow_below_copy1

0x4205,	// (0x000387c0) cset_list_set_pane_g1_copy1

0x420d,	// (0x000387c8) cset_list_set_pane_g3_copy1_ParamLimits

0x420d,	// (0x000387c8) cset_list_set_pane_g3_copy1

0x421c,	// (0x000387d7) cset_list_set_pane_t1_copy1_ParamLimits

0x421c,	// (0x000387d7) cset_list_set_pane_t1_copy1

0x238b,	// (0x00036946) list_highlight_pane_cp021_copy1_ParamLimits

0x238b,	// (0x00036946) list_highlight_pane_cp021_copy1

0x045a,	// (0x00034a15) cset6_slider_pane_ParamLimits

0x045a,	// (0x00034a15) cset6_slider_pane

0x0486,	// (0x00034a41) main_cset6_slider_pane_g1_ParamLimits

0x0486,	// (0x00034a41) main_cset6_slider_pane_g1

0xb1dc,	// (0x0003f797) main_cset6_slider_pane_g2_ParamLimits

0xb1dc,	// (0x0003f797) main_cset6_slider_pane_g2

0x04ae,	// (0x00034a69) main_cset6_slider_pane_g3_ParamLimits

0x04ae,	// (0x00034a69) main_cset6_slider_pane_g3

0xb204,	// (0x0003f7bf) main_cset6_slider_pane_g4_ParamLimits

0xb204,	// (0x0003f7bf) main_cset6_slider_pane_g4

0xb210,	// (0x0003f7cb) main_cset6_slider_pane_g5_ParamLimits

0xb210,	// (0x0003f7cb) main_cset6_slider_pane_g5

0xed4f,	// (0x0004330a) main_cset6_slider_pane_g7_ParamLimits

0xed4f,	// (0x0004330a) main_cset6_slider_pane_g7

0xed5b,	// (0x00043316) main_cset6_slider_pane_g8_ParamLimits

0xed5b,	// (0x00043316) main_cset6_slider_pane_g8

0xb21c,	// (0x0003f7d7) main_cset6_slider_pane_g9_ParamLimits

0xb21c,	// (0x0003f7d7) main_cset6_slider_pane_g9

0xb228,	// (0x0003f7e3) main_cset6_slider_pane_g10_ParamLimits

0xb228,	// (0x0003f7e3) main_cset6_slider_pane_g10

0xb234,	// (0x0003f7ef) main_cset6_slider_pane_g11_ParamLimits

0xb234,	// (0x0003f7ef) main_cset6_slider_pane_g11

0xb240,	// (0x0003f7fb) main_cset6_slider_pane_g12_ParamLimits

0xb240,	// (0x0003f7fb) main_cset6_slider_pane_g12

0xb24c,	// (0x0003f807) main_cset6_slider_pane_g13_ParamLimits

0xb24c,	// (0x0003f807) main_cset6_slider_pane_g13

0xb258,	// (0x0003f813) main_cset6_slider_pane_g14_ParamLimits

0xb258,	// (0x0003f813) main_cset6_slider_pane_g14

0xb264,	// (0x0003f81f) main_cset6_slider_pane_g15_ParamLimits

0xb264,	// (0x0003f81f) main_cset6_slider_pane_g15

0xb27c,	// (0x0003f837) main_cset6_slider_pane_g16_ParamLimits

0xb27c,	// (0x0003f837) main_cset6_slider_pane_g16

0xb288,	// (0x0003f843) main_cset6_slider_pane_g17_ParamLimits

0xb288,	// (0x0003f843) main_cset6_slider_pane_g17

0x0011,

0xfb96,	// (0x00044151) main_cset6_slider_pane_g_ParamLimits

0xfb96,	// (0x00044151) main_cset6_slider_pane_g

0x04ba,	// (0x00034a75) main_cset6_slider_pane_t1_ParamLimits

0x04ba,	// (0x00034a75) main_cset6_slider_pane_t1

0xb2ac,	// (0x0003f867) main_cset6_slider_pane_t2_ParamLimits

0xb2ac,	// (0x0003f867) main_cset6_slider_pane_t2

0xb2d7,	// (0x0003f892) main_cset6_slider_pane_t3_ParamLimits

0xb2d7,	// (0x0003f892) main_cset6_slider_pane_t3

0xb302,	// (0x0003f8bd) main_cset6_slider_pane_t4_ParamLimits

0xb302,	// (0x0003f8bd) main_cset6_slider_pane_t4

0xb32d,	// (0x0003f8e8) main_cset6_slider_pane_t5_ParamLimits

0xb32d,	// (0x0003f8e8) main_cset6_slider_pane_t5

0x04fb,	// (0x00034ab6) main_cset6_slider_pane_t7_ParamLimits

0x04fb,	// (0x00034ab6) main_cset6_slider_pane_t7

0xb358,	// (0x0003f913) main_cset6_slider_pane_t8_ParamLimits

0xb358,	// (0x0003f913) main_cset6_slider_pane_t8

0xb37c,	// (0x0003f937) main_cset6_slider_pane_t9_ParamLimits

0xb37c,	// (0x0003f937) main_cset6_slider_pane_t9

0xb3a0,	// (0x0003f95b) main_cset6_slider_pane_t10_ParamLimits

0xb3a0,	// (0x0003f95b) main_cset6_slider_pane_t10

0xb3c4,	// (0x0003f97f) main_cset6_slider_pane_t11_ParamLimits

0xb3c4,	// (0x0003f97f) main_cset6_slider_pane_t11

0x0531,	// (0x00034aec) main_cset6_slider_pane_t14_ParamLimits

0x0531,	// (0x00034aec) main_cset6_slider_pane_t14

0x056a,	// (0x00034b25) main_cset6_slider_pane_t15_ParamLimits

0x056a,	// (0x00034b25) main_cset6_slider_pane_t15

0x000b,

0xfbbb,	// (0x00044176) main_cset6_slider_pane_t_ParamLimits

0xfbbb,	// (0x00044176) main_cset6_slider_pane_t

0x05a3,	// (0x00034b5e) cset_slider_pane_g1_copy1

0x05ac,	// (0x00034b67) cset_slider_pane_g2_copy1

0x05b5,	// (0x00034b70) cset_slider_pane_g3_copy1

0x1b96,	// (0x00036151) bg_popup_sub_pane_cp011_copy1

0x068f,	// (0x00034c4a) main_cset_text_pane_g1_copy1

0xee97,	// (0x00043452) main_cset_text_pane_t1_copy1

0xeea5,	// (0x00043460) main_cset_text_pane_t2_copy1

0xeeb3,	// (0x0004346e) main_cset_text_pane_t3_copy1

0xeec1,	// (0x0004347c) main_cset_text_pane_t4_copy1

0xeecf,	// (0x0004348a) main_cset_text_pane_t5_copy1

0x0697,	// (0x00034c52) main_cset_text_pane_t6_copy1

0x06a5,	// (0x00034c60) main_cset_text_pane_t7_copy1

0xb3e8,	// (0x0003f9a3) main_cset_text2_pane_t1_copy1

0x238b,	// (0x00036946) main_ncimui_pane

0x7db8,	// (0x0003c373) popup_query_ncimui_window_ParamLimits

0x7db8,	// (0x0003c373) popup_query_ncimui_window

0x3df2,	// (0x000383ad) field_cale_ev2_pane_g4_ParamLimits

0x3df2,	// (0x000383ad) field_cale_ev2_pane_g4

0x967b,	// (0x0003dc36) cell_video_dialer_keypad_pane_g2_ParamLimits

0x967b,	// (0x0003dc36) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8a0,	// (0x00043e5b) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8a0,	// (0x00043e5b) cell_video_dialer_keypad_pane_g

0x9693,	// (0x0003dc4e) cell_video_dialer_keypad_pane_t1

0x1b96,	// (0x00036151) bg_popup_window_pane_cp012

0xc76d,	// (0x00040d28) heading_pane_cp06

0x06d1,	// (0x00034c8c) ncim_query_content_pane

0x1b96,	// (0x00036151) bg_popup_heading_pane_cp01

0x06d9,	// (0x00034c94) ncim_heading_pane_t1

0x06e7,	// (0x00034ca2) ncim_indicator_popup_pane

0x06f9,	// (0x00034cb4) ncim_query_button_pane

0x070f,	// (0x00034cca) ncim_query_content_pane_t1

0x0721,	// (0x00034cdc) ncim_query_content_pane_t2

0x0005,

0xfbff,	// (0x000441ba) ncim_query_content_pane_t

0x075b,	// (0x00034d16) ncim_query_list_pane

0x076d,	// (0x00034d28) ncim_query_popup_pane

0x06e7,	// (0x00034ca2) ncim_indicator_popup_pane_ParamLimits

0xb542,	// (0x0003fafd) ncim_query_content_pane_g1_ParamLimits

0xb542,	// (0x0003fafd) ncim_query_content_pane_g1

0x070f,	// (0x00034cca) ncim_query_content_pane_t1_ParamLimits

0x0721,	// (0x00034cdc) ncim_query_content_pane_t2_ParamLimits

0xb54e,	// (0x0003fb09) ncim_query_content_pane_t3_ParamLimits

0xb54e,	// (0x0003fb09) ncim_query_content_pane_t3

0xb56b,	// (0x0003fb26) ncim_query_content_pane_t4_ParamLimits

0xb56b,	// (0x0003fb26) ncim_query_content_pane_t4

0xb588,	// (0x0003fb43) ncim_query_content_pane_t5_ParamLimits

0xb588,	// (0x0003fb43) ncim_query_content_pane_t5

0x0733,	// (0x00034cee) ncim_query_content_pane_t6_ParamLimits

0x0733,	// (0x00034cee) ncim_query_content_pane_t6

0xfbff,	// (0x000441ba) ncim_query_content_pane_t_ParamLimits

0x075b,	// (0x00034d16) ncim_query_list_pane_ParamLimits

0x076d,	// (0x00034d28) ncim_query_popup_pane_ParamLimits

0x0781,	// (0x00034d3c) wait_bar_pane_cp04

0x1b96,	// (0x00036151) input_focus_pane_cp011

0x0789,	// (0x00034d44) ncim_query_popup_pane_t1

0x0797,	// (0x00034d52) ncim_list_query_list_pane_ParamLimits

0x0797,	// (0x00034d52) ncim_list_query_list_pane

0x1b96,	// (0x00036151) bg_button_pane_cp027

0x07aa,	// (0x00034d65) ncim_query_button_pane_g1

0x1b96,	// (0x00036151) list_highlight_pane_cp012

0x07b4,	// (0x00034d6f) ncim_list_query_list_pane_g1

0x07bc,	// (0x00034d77) ncim_list_query_list_pane_t1

0x9d51,	// (0x0003e30c) cam4_indicators_pane_g3_ParamLimits

0x9d51,	// (0x0003e30c) cam4_indicators_pane_g3

0x9e5d,	// (0x0003e418) vid4_indicators_pane_g5_ParamLimits

0x9e5d,	// (0x0003e418) vid4_indicators_pane_g5

0xac72,	// (0x0003f22d) vid4_progress_pane_g5_ParamLimits

0xac72,	// (0x0003f22d) vid4_progress_pane_g5

0xb41a,	// (0x0003f9d5) main_ncimui_pane_g1

0xb484,	// (0x0003fa3f) ncimui_group_query_pane_ParamLimits

0xb484,	// (0x0003fa3f) ncimui_group_query_pane

0xb4de,	// (0x0003fa99) ncimui_list_pane_ParamLimits

0xb4de,	// (0x0003fa99) ncimui_list_pane

0xb505,	// (0x0003fac0) ncimui_text_pane_ParamLimits

0xb505,	// (0x0003fac0) ncimui_text_pane

0xb5a5,	// (0x0003fb60) ncimui_text_pane_t1_ParamLimits

0xb5a5,	// (0x0003fb60) ncimui_text_pane_t1

0x07ca,	// (0x00034d85) ncimui_list_single_graphic_pane_ParamLimits

0x07ca,	// (0x00034d85) ncimui_list_single_graphic_pane

0xb5c4,	// (0x0003fb7f) ncimui_query_pane_ParamLimits

0xb5c4,	// (0x0003fb7f) ncimui_query_pane

0x1b96,	// (0x00036151) list_highlight_pane_cp013

0x07da,	// (0x00034d95) ncim_list_query_list_pane_t1_copy1

0x07b4,	// (0x00034d6f) ncim_list_single_graphic_pane_g1

0x07e8,	// (0x00034da3) ncim_query_button_pane_cp01

0x07f4,	// (0x00034daf) ncim_query_entry_pane_ParamLimits

0x07f4,	// (0x00034daf) ncim_query_entry_pane

0x0807,	// (0x00034dc2) ncimui_query_pane_g1

0x0813,	// (0x00034dce) ncimui_query_pane_t1_ParamLimits

0x0813,	// (0x00034dce) ncimui_query_pane_t1

0x238b,	// (0x00036946) input_focus_pane_cp012

0x082c,	// (0x00034de7) ncim_query_entry_pane_t1

0x2316,	// (0x000368d1) main_im_pane_ParamLimits

0x238b,	// (0x00036946) main_mobtv_pane_ParamLimits

0x238b,	// (0x00036946) main_mobtv_pane

0xb294,	// (0x0003f84f) main_cset6_slider_pane_g18_ParamLimits

0xb294,	// (0x0003f84f) main_cset6_slider_pane_g18

0xb2a0,	// (0x0003f85b) main_cset6_slider_pane_g19_ParamLimits

0xb2a0,	// (0x0003f85b) main_cset6_slider_pane_g19

0xebfc,	// (0x000431b7) bg_main_mobtv_pane_ParamLimits

0xebfc,	// (0x000431b7) bg_main_mobtv_pane

0xb5d7,	// (0x0003fb92) main_mobtv_info_pane

0xb5e2,	// (0x0003fb9d) main_mobtv_loading_pane_ParamLimits

0xb5e2,	// (0x0003fb9d) main_mobtv_loading_pane

0x084c,	// (0x00034e07) main_mobtv_pg_channel_list_pane

0x0856,	// (0x00034e11) main_mobtv_pg_hdr_pane

0xb5ef,	// (0x0003fbaa) main_mobtv_programe_curr_pane_ParamLimits

0xb5ef,	// (0x0003fbaa) main_mobtv_programe_curr_pane

0xb5fc,	// (0x0003fbb7) main_mobtv_programe_next_pane_ParamLimits

0xb5fc,	// (0x0003fbb7) main_mobtv_programe_next_pane

0x085f,	// (0x00034e1a) popup_mobtv_noti_window

0xe1fe,	// (0x000427b9) main_tv_pg_hdr_pane_g1

0x0869,	// (0x00034e24) main_tv_pg_hdr_pane_g2

0x0871,	// (0x00034e2c) main_tv_pg_hdr_pane_g3

0x0879,	// (0x00034e34) main_tv_pg_hdr_pane_g4

0x0881,	// (0x00034e3c) main_tv_pg_hdr_pane_g5

0x088b,	// (0x00034e46) main_tv_pg_hdr_pane_g6

0x0895,	// (0x00034e50) main_tv_pg_hdr_pane_g7

0x089f,	// (0x00034e5a) main_tv_pg_hdr_pane_g8

0x08a9,	// (0x00034e64) main_tv_pg_hdr_pane_g9

0x08b3,	// (0x00034e6e) main_tv_pg_hdr_pane_g10

0x08bd,	// (0x00034e78) main_tv_pg_hdr_pane_g11

0x000a,

0xfc0c,	// (0x000441c7) main_tv_pg_hdr_pane_g

0x08c7,	// (0x00034e82) main_tv_pg_hdr_pane_t1

0x08d5,	// (0x00034e90) main_tv_pg_hdr_pane_t2

0x08e3,	// (0x00034e9e) main_tv_pg_hdr_pane_t3

0x08f3,	// (0x00034eae) main_tv_pg_hdr_pane_t4

0x0903,	// (0x00034ebe) main_tv_pg_hdr_pane_t5

0x0004,

0xfc23,	// (0x000441de) main_tv_pg_hdr_pane_t

0x0913,	// (0x00034ece) single_mobtv_pg_channel_pane_ParamLimits

0x0913,	// (0x00034ece) single_mobtv_pg_channel_pane

0x0925,	// (0x00034ee0) single_mobtv_pg_channel_table_pane

0x092e,	// (0x00034ee9) single_mobtv_pg_channel_thumb_pane

0x0937,	// (0x00034ef2) single_tv_pg_channel_pane_g1

0x0940,	// (0x00034efb) single_tv_pg_channel_pane_g2

0x0001,

0xfc2e,	// (0x000441e9) single_tv_pg_channel_pane_g

0xe42e,	// (0x000429e9) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xe42e,	// (0x000429e9) bg_single_mobtv_pg_channel_thumb_pane

0x0949,	// (0x00034f04) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x0949,	// (0x00034f04) single_mobtv_pg_channel_thumb_pane_g1

0x0957,	// (0x00034f12) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x0957,	// (0x00034f12) single_mobtv_pg_channel_thumb_pane_g2

0x0963,	// (0x00034f1e) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x0963,	// (0x00034f1e) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc33,	// (0x000441ee) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc33,	// (0x000441ee) single_mobtv_pg_channel_thumb_pane_g

0x096f,	// (0x00034f2a) single_mobtv_pg_channel_thumb_pane_t1

0x097d,	// (0x00034f38) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc3a,	// (0x000441f5) single_mobtv_pg_channel_thumb_pane_t

0xe1fe,	// (0x000427b9) bg_single_mobtv_pg_channel_table_pane_g1

0xe1fe,	// (0x000427b9) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6ec,	// (0x00043ca7) bg_single_mobtv_pg_channel_table_pane_g

0x098b,	// (0x00034f46) single_mobtv_pg_channel_table_pane_t1

0x0999,	// (0x00034f54) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc3f,	// (0x000441fa) single_mobtv_pg_channel_table_pane_t

0xb611,	// (0x0003fbcc) main_mobtv_info_pane_g1_ParamLimits

0xb611,	// (0x0003fbcc) main_mobtv_info_pane_g1

0xb62d,	// (0x0003fbe8) main_mobtv_info_pane_t1_ParamLimits

0xb62d,	// (0x0003fbe8) main_mobtv_info_pane_t1

0xb6a5,	// (0x0003fc60) main_mobtv_info_pane_t2_ParamLimits

0xb6a5,	// (0x0003fc60) main_mobtv_info_pane_t2

0x0002,

0xfc49,	// (0x00044204) main_mobtv_info_pane_t_ParamLimits

0xfc49,	// (0x00044204) main_mobtv_info_pane_t

0xb736,	// (0x0003fcf1) wait_bar_pane_cp05

0xb748,	// (0x0003fd03) main_mobtv_loading_pane_g1_ParamLimits

0xb748,	// (0x0003fd03) main_mobtv_loading_pane_g1

0xb754,	// (0x0003fd0f) main_mobtv_loading_pane_g2_ParamLimits

0xb754,	// (0x0003fd0f) main_mobtv_loading_pane_g2

0xb760,	// (0x0003fd1b) main_mobtv_loading_pane_g3_ParamLimits

0xb760,	// (0x0003fd1b) main_mobtv_loading_pane_g3

0x0002,

0xfc50,	// (0x0004420b) main_mobtv_loading_pane_g_ParamLimits

0xfc50,	// (0x0004420b) main_mobtv_loading_pane_g

0x09a7,	// (0x00034f62) main_mobtv_loading_pane_t1_ParamLimits

0x09a7,	// (0x00034f62) main_mobtv_loading_pane_t1

0x09bf,	// (0x00034f7a) main_mobtv_loading_pane_t2_ParamLimits

0x09bf,	// (0x00034f7a) main_mobtv_loading_pane_t2

0x0001,

0xfc57,	// (0x00044212) main_mobtv_loading_pane_t_ParamLimits

0xfc57,	// (0x00044212) main_mobtv_loading_pane_t

0xb76e,	// (0x0003fd29) wait_bar_pane_cp06_ParamLimits

0xb76e,	// (0x0003fd29) wait_bar_pane_cp06

0x09e3,	// (0x00034f9e) main_mobtv_programe_curr_pane_t1

0x09f1,	// (0x00034fac) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc5c,	// (0x00044217) main_mobtv_programe_curr_pane_t

0x09ff,	// (0x00034fba) main_mobtv_programe_next_pane_t1

0x0a0d,	// (0x00034fc8) main_mobtv_programe_next_pane_t2

0x0a1b,	// (0x00034fd6) main_mobtv_programe_next_pane_t3

0x0002,

0xfc61,	// (0x0004421c) main_mobtv_programe_next_pane_t

0x1b96,	// (0x00036151) bg_popup_mobtv_noti_window_pane

0x0a29,	// (0x00034fe4) popup_mobtv_noti_window_g1

0x0a31,	// (0x00034fec) popup_mobtv_noti_window_t1

0x0a3f,	// (0x00034ffa) popup_mobtv_noti_window_t2

0x0001,

0xfc68,	// (0x00044223) popup_mobtv_noti_window_t

0xe1fe,	// (0x000427b9) bg_popup_mobtv_noti_window_pane_g1

0x1b96,	// (0x00036151) sc_clock_pane

0x1b96,	// (0x00036151) main_fs_bigclock_pane

0xae57,	// (0x0003f412) blid2_tripm_pane_t4_ParamLimits

0xae57,	// (0x0003f412) blid2_tripm_pane_t4

0xb77a,	// (0x0003fd35) sc_clock_pane_g1_ParamLimits

0xb77a,	// (0x0003fd35) sc_clock_pane_g1

0xb788,	// (0x0003fd43) sc_clock_pane_t1_ParamLimits

0xb788,	// (0x0003fd43) sc_clock_pane_t1

0xb79d,	// (0x0003fd58) sc_clock_pane_t2_ParamLimits

0xb79d,	// (0x0003fd58) sc_clock_pane_t2

0xb7af,	// (0x0003fd6a) sc_clock_pane_t3_ParamLimits

0xb7af,	// (0x0003fd6a) sc_clock_pane_t3

0x0004,

0xfc6d,	// (0x00044228) sc_clock_pane_t_ParamLimits

0xfc6d,	// (0x00044228) sc_clock_pane_t

0xbfac,	// (0x00040567) main_fs_bigclock_indicator_pane_ParamLimits

0xbfac,	// (0x00040567) main_fs_bigclock_indicator_pane

0xb83c,	// (0x0003fdf7) main_fs_bigclock_pane_g1_ParamLimits

0xb83c,	// (0x0003fdf7) main_fs_bigclock_pane_g1

0xbfb8,	// (0x00040573) main_fs_bigclock_pane_t1_ParamLimits

0xbfb8,	// (0x00040573) main_fs_bigclock_pane_t1

0xbfca,	// (0x00040585) main_fs_bigclock_pane_t2_ParamLimits

0xbfca,	// (0x00040585) main_fs_bigclock_pane_t2

0xbfde,	// (0x00040599) main_fs_bigclock_pane_t3_ParamLimits

0xbfde,	// (0x00040599) main_fs_bigclock_pane_t3

0x0002,

0xfe71,	// (0x0004442c) main_fs_bigclock_pane_t_ParamLimits

0xfe71,	// (0x0004442c) main_fs_bigclock_pane_t

0x16e4,	// (0x00035c9f) main_fs_bigclock_indicator_pane_g1

0x0701,	// (0x00034cbc) ncim_query_content_pane_g2_ParamLimits

0x0701,	// (0x00034cbc) ncim_query_content_pane_g2

0x0001,

0xfbfa,	// (0x000441b5) ncim_query_content_pane_g_ParamLimits

0xfbfa,	// (0x000441b5) ncim_query_content_pane_g

0xb7c1,	// (0x0003fd7c) sc_clock_pane_t4_ParamLimits

0xb7c1,	// (0x0003fd7c) sc_clock_pane_t4

0x238b,	// (0x00036946) main_radioblah_pane

0xeb41,	// (0x000430fc) cell_call4_button_pane_t1_copy1_ParamLimits

0xeb41,	// (0x000430fc) cell_call4_button_pane_t1_copy1

0xb434,	// (0x0003f9ef) main_ncimui_pane_t1_ParamLimits

0xb434,	// (0x0003f9ef) main_ncimui_pane_t1

0xb44e,	// (0x0003fa09) main_ncimui_pane_t2_ParamLimits

0xb44e,	// (0x0003fa09) main_ncimui_pane_t2

0x0002,

0xfbf3,	// (0x000441ae) main_ncimui_pane_t_ParamLimits

0xfbf3,	// (0x000441ae) main_ncimui_pane_t

0x0b8b,	// (0x00035146) main_radioblah_anim_pane_ParamLimits

0x0b8b,	// (0x00035146) main_radioblah_anim_pane

0x0b9c,	// (0x00035157) main_radioblah_info_pane_ParamLimits

0x0b9c,	// (0x00035157) main_radioblah_info_pane

0x0bb0,	// (0x0003516b) main_radioblah_pane_t1_ParamLimits

0x0bb0,	// (0x0003516b) main_radioblah_pane_t1

0x0bcc,	// (0x00035187) main_radioblah_pane_t2_ParamLimits

0x0bcc,	// (0x00035187) main_radioblah_pane_t2

0x0003,

0xfc8e,	// (0x00044249) main_radioblah_pane_t_ParamLimits

0xfc8e,	// (0x00044249) main_radioblah_pane_t

0xb88e,	// (0x0003fe49) main_radioblah_rocker_ctrl_pane_ParamLimits

0xb88e,	// (0x0003fe49) main_radioblah_rocker_ctrl_pane

0x0c14,	// (0x000351cf) main_radioblah_info_pane_t1_ParamLimits

0x0c14,	// (0x000351cf) main_radioblah_info_pane_t1

0xb8d7,	// (0x0003fe92) main_radioblah_info_pane_t2_ParamLimits

0xb8d7,	// (0x0003fe92) main_radioblah_info_pane_t2

0x0003,

0xfc97,	// (0x00044252) main_radioblah_info_pane_t_ParamLimits

0xfc97,	// (0x00044252) main_radioblah_info_pane_t

0xe1fe,	// (0x000427b9) main_radioblah_rocker_ctrl_pane_g1

0xb987,	// (0x0003ff42) main_radioblah_rocker_ctrl_pane_g2

0xb98f,	// (0x0003ff4a) main_radioblah_rocker_ctrl_pane_g3

0xb997,	// (0x0003ff52) main_radioblah_rocker_ctrl_pane_g4

0xb99f,	// (0x0003ff5a) main_radioblah_rocker_ctrl_pane_g5

0xb9a7,	// (0x0003ff62) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfca0,	// (0x0004425b) main_radioblah_rocker_ctrl_pane_g

0xb3e8,	// (0x0003f9a3) main_cset_text2_pane_t1_copy1_ParamLimits

0x9c7e,	// (0x0003e239) cam4_image_uncrop_qvga_pane

0x9dc3,	// (0x0003e37e) vid4_image_uncrop_qcif_pane

0xafe9,	// (0x0003f5a4) cam6_image_uncrop_qvga_pane_ParamLimits

0xafe9,	// (0x0003f5a4) cam6_image_uncrop_qvga_pane

0x0318,	// (0x000348d3) vid6_image_uncrop_qcif_pane_ParamLimits

0x0318,	// (0x000348d3) vid6_image_uncrop_qcif_pane

0x1b96,	// (0x00036151) bg_popup_preview_window_pane_cp03

0x06b3,	// (0x00034c6e) list_cset_text2_pane

0x06bb,	// (0x00034c76) main_cset6_text2_pane_g1

0x06c3,	// (0x00034c7e) main_cset6_text2_pane_t1

0xb9af,	// (0x0003ff6a) list_cset_text2_pane_t1_ParamLimits

0xb9af,	// (0x0003ff6a) list_cset_text2_pane_t1

0x238b,	// (0x00036946) main_radioblah_pane_ParamLimits

0xb722,	// (0x0003fcdd) main_mobtv_info_pane_t3_ParamLimits

0xb722,	// (0x0003fcdd) main_mobtv_info_pane_t3

0xb87c,	// (0x0003fe37) main_radioblah_pane_g1

0xb8a7,	// (0x0003fe62) main_radioblah_info_pane_g1

0xb92c,	// (0x0003fee7) main_radioblah_info_pane_t3_ParamLimits

0xb92c,	// (0x0003fee7) main_radioblah_info_pane_t3

0x6a1d,	// (0x0003afd8) highlight_cell_cale_month_pane_ParamLimits

0x6a1d,	// (0x0003afd8) highlight_cell_cale_month_pane

0x1b96,	// (0x00036151) main_phob_fisheye_pane

0xe516,	// (0x00042ad1) scroll_pane_cp0031_ParamLimits

0xe516,	// (0x00042ad1) scroll_pane_cp0031

0x042a,	// (0x000349e5) wait_bar_pane_cp08_ParamLimits

0xb1bc,	// (0x0003f777) cset_list_set_pane_copy1_ParamLimits

0x0c68,	// (0x00035223) highlight_cell_cale_month_pane_g1

0xb9c6,	// (0x0003ff81) highlight_cell_cale_month_pane_t1

0xf0cf,	// (0x0004368a) list_gen_pane_cp01

0xed3a,	// (0x000432f5) scroll_pane_01

0x008e,	// (0x00034649) list_single_double_fisheye_pane

0x4302,	// (0x000388bd) list_double_fisheye_pane_g1_ParamLimits

0x4302,	// (0x000388bd) list_double_fisheye_pane_g1

0x430e,	// (0x000388c9) list_double_fisheye_pane_g2_ParamLimits

0x430e,	// (0x000388c9) list_double_fisheye_pane_g2

0x4322,	// (0x000388dd) list_double_fisheye_pane_g3_ParamLimits

0x4322,	// (0x000388dd) list_double_fisheye_pane_g3

0x0004,

0xfcad,	// (0x00044268) list_double_fisheye_pane_g_ParamLimits

0xfcad,	// (0x00044268) list_double_fisheye_pane_g

0x434b,	// (0x00038906) list_double_fisheye_pane_t1_ParamLimits

0x434b,	// (0x00038906) list_double_fisheye_pane_t1

0x4366,	// (0x00038921) list_double_fisheye_pane_t2_ParamLimits

0x4366,	// (0x00038921) list_double_fisheye_pane_t2

0x0001,

0xfcb8,	// (0x00044273) list_double_fisheye_pane_t_ParamLimits

0xfcb8,	// (0x00044273) list_double_fisheye_pane_t

0x1b96,	// (0x00036151) main_call5_pane

0xb7e7,	// (0x0003fda2) sc_swipe_pane_ParamLimits

0xb7e7,	// (0x0003fda2) sc_swipe_pane

0xb9e0,	// (0x0003ff9b) call5_image_pane_ParamLimits

0xb9e0,	// (0x0003ff9b) call5_image_pane

0xb9f2,	// (0x0003ffad) call5_swipe_1_pane_ParamLimits

0xb9f2,	// (0x0003ffad) call5_swipe_1_pane

0xb9fe,	// (0x0003ffb9) call5_swipe_2_pane_ParamLimits

0xb9fe,	// (0x0003ffb9) call5_swipe_2_pane

0xba1a,	// (0x0003ffd5) popup_call5_audio_first_window_ParamLimits

0xba1a,	// (0x0003ffd5) popup_call5_audio_first_window

0xe42e,	// (0x000429e9) call5_swipe_1_pane_g1_ParamLimits

0xe42e,	// (0x000429e9) call5_swipe_1_pane_g1

0x0c70,	// (0x0003522b) call5_swipe_1_pane_g2_ParamLimits

0x0c70,	// (0x0003522b) call5_swipe_1_pane_g2

0x0001,

0xfcbd,	// (0x00044278) call5_swipe_1_pane_g_ParamLimits

0xfcbd,	// (0x00044278) call5_swipe_1_pane_g

0x0c7c,	// (0x00035237) call5_swipe_1_pane_t1_ParamLimits

0x0c7c,	// (0x00035237) call5_swipe_1_pane_t1

0xe42e,	// (0x000429e9) call5_swipe_2_pane_g1_ParamLimits

0xe42e,	// (0x000429e9) call5_swipe_2_pane_g1

0x0c91,	// (0x0003524c) call5_swipe_2_pane_g2_ParamLimits

0x0c91,	// (0x0003524c) call5_swipe_2_pane_g2

0x0001,

0xfcc2,	// (0x0004427d) call5_swipe_2_pane_g_ParamLimits

0xfcc2,	// (0x0004427d) call5_swipe_2_pane_g

0x0c9d,	// (0x00035258) call5_swipe_2_pane_t1_ParamLimits

0x0c9d,	// (0x00035258) call5_swipe_2_pane_t1

0x0cb2,	// (0x0003526d) sc_swipe_pane_g1_ParamLimits

0x0cb2,	// (0x0003526d) sc_swipe_pane_g1

0x0cbf,	// (0x0003527a) sc_swipe_pane_g2_ParamLimits

0x0cbf,	// (0x0003527a) sc_swipe_pane_g2

0x0001,

0xfcc7,	// (0x00044282) sc_swipe_pane_g_ParamLimits

0xfcc7,	// (0x00044282) sc_swipe_pane_g

0x0ccb,	// (0x00035286) sc_swipe_pane_t1_ParamLimits

0x0ccb,	// (0x00035286) sc_swipe_pane_t1

0x1b96,	// (0x00036151) main_cmail_launcher_pane

0xba2a,	// (0x0003ffe5) aid_size_cell_cmail_l_ParamLimits

0xba2a,	// (0x0003ffe5) aid_size_cell_cmail_l

0xba3a,	// (0x0003fff5) grid_cmail_l_pane_ParamLimits

0xba3a,	// (0x0003fff5) grid_cmail_l_pane

0xba4a,	// (0x00040005) cell_cmail_l_pane_ParamLimits

0xba4a,	// (0x00040005) cell_cmail_l_pane

0xba60,	// (0x0004001b) cell_cmail_l_pane_g1_ParamLimits

0xba60,	// (0x0004001b) cell_cmail_l_pane_g1

0xba6c,	// (0x00040027) cell_cmail_l_pane_t1_ParamLimits

0xba6c,	// (0x00040027) cell_cmail_l_pane_t1

0x0ce0,	// (0x0003529b) cell_cmail_l_pane_t2_ParamLimits

0x0ce0,	// (0x0003529b) cell_cmail_l_pane_t2

0x0001,

0xfccc,	// (0x00044287) cell_cmail_l_pane_t_ParamLimits

0xfccc,	// (0x00044287) cell_cmail_l_pane_t

0x238b,	// (0x00036946) grid_highlight_pane_cp018_ParamLimits

0x238b,	// (0x00036946) grid_highlight_pane_cp018

0x4e22,	// (0x000393dd) main2_pane_ParamLimits

0x4e22,	// (0x000393dd) main2_pane

0x23cf,	// (0x0003698a) popup_sp_fs_action_menu_bg_pane_g1

0x23d7,	// (0x00036992) popup_sp_fs_action_menu_bg_pane_g2

0x23df,	// (0x0003699a) popup_sp_fs_action_menu_bg_pane_g3

0x23e7,	// (0x000369a2) popup_sp_fs_action_menu_bg_pane_g4

0x23ef,	// (0x000369aa) popup_sp_fs_action_menu_bg_pane_g5

0x23f7,	// (0x000369b2) popup_sp_fs_action_menu_bg_pane_g6

0x23ff,	// (0x000369ba) popup_sp_fs_action_menu_bg_pane_g7

0x2407,	// (0x000369c2) popup_sp_fs_action_menu_bg_pane_g8

0x240f,	// (0x000369ca) popup_sp_fs_action_menu_bg_pane_g9

0x2417,	// (0x000369d2) popup_sp_fs_action_menu_bg_pane_g10

0x2417,	// (0x000369d2) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf198,	// (0x00043753) popup_sp_fs_action_menu_bg_pane_g

0x3b27,	// (0x000380e2) list_medium_line_x2_t3_g3_g1_ParamLimits

0x3b27,	// (0x000380e2) list_medium_line_x2_t3_g3_g1

0x3b33,	// (0x000380ee) list_medium_line_x2_t3_g3_g2_ParamLimits

0x3b33,	// (0x000380ee) list_medium_line_x2_t3_g3_g2

0x3b3f,	// (0x000380fa) list_medium_line_x2_t3_g3_g3_ParamLimits

0x3b3f,	// (0x000380fa) list_medium_line_x2_t3_g3_g3

0x0002,

0xf248,	// (0x00043803) list_medium_line_x2_t3_g3_g_ParamLimits

0xf248,	// (0x00043803) list_medium_line_x2_t3_g3_g

0x3b4b,	// (0x00038106) list_medium_line_x2_t3_g3_t1_ParamLimits

0x3b4b,	// (0x00038106) list_medium_line_x2_t3_g3_t1

0x3b60,	// (0x0003811b) list_medium_line_x2_t3_g3_t2_ParamLimits

0x3b60,	// (0x0003811b) list_medium_line_x2_t3_g3_t2

0x3b74,	// (0x0003812f) list_medium_line_x2_t3_g3_t3_ParamLimits

0x3b74,	// (0x0003812f) list_medium_line_x2_t3_g3_t3

0x0002,

0xf24f,	// (0x0004380a) list_medium_line_x2_t3_g3_t_ParamLimits

0xf24f,	// (0x0004380a) list_medium_line_x2_t3_g3_t

0x3b27,	// (0x000380e2) list_medium_line_x2_t3_g2_g1_ParamLimits

0x3b27,	// (0x000380e2) list_medium_line_x2_t3_g2_g1

0x3b3f,	// (0x000380fa) list_medium_line_x2_t3_g2_g2_ParamLimits

0x3b3f,	// (0x000380fa) list_medium_line_x2_t3_g2_g2

0x0001,

0xf256,	// (0x00043811) list_medium_line_x2_t3_g2_g_ParamLimits

0xf256,	// (0x00043811) list_medium_line_x2_t3_g2_g

0x3b89,	// (0x00038144) list_medium_line_x2_t3_g2_t1_ParamLimits

0x3b89,	// (0x00038144) list_medium_line_x2_t3_g2_t1

0x3b9f,	// (0x0003815a) list_medium_line_x2_t3_g2_t2_ParamLimits

0x3b9f,	// (0x0003815a) list_medium_line_x2_t3_g2_t2

0x3bb1,	// (0x0003816c) list_medium_line_x2_t3_g2_t3_ParamLimits

0x3bb1,	// (0x0003816c) list_medium_line_x2_t3_g2_t3

0x0002,

0xf25b,	// (0x00043816) list_medium_line_x2_t3_g2_t_ParamLimits

0xf25b,	// (0x00043816) list_medium_line_x2_t3_g2_t

0x3b27,	// (0x000380e2) list_medium_line_x2_t4_g4_g1_ParamLimits

0x3b27,	// (0x000380e2) list_medium_line_x2_t4_g4_g1

0x3bcf,	// (0x0003818a) list_medium_line_x2_t4_g4_g2_ParamLimits

0x3bcf,	// (0x0003818a) list_medium_line_x2_t4_g4_g2

0x3b33,	// (0x000380ee) list_medium_line_x2_t4_g4_g3_ParamLimits

0x3b33,	// (0x000380ee) list_medium_line_x2_t4_g4_g3

0x3bdb,	// (0x00038196) list_medium_line_x2_t4_g4_g4_ParamLimits

0x3bdb,	// (0x00038196) list_medium_line_x2_t4_g4_g4

0x0003,

0xf262,	// (0x0004381d) list_medium_line_x2_t4_g4_g_ParamLimits

0xf262,	// (0x0004381d) list_medium_line_x2_t4_g4_g

0x3be7,	// (0x000381a2) list_medium_line_x2_t4_g4_t1_ParamLimits

0x3be7,	// (0x000381a2) list_medium_line_x2_t4_g4_t1

0x3c01,	// (0x000381bc) list_medium_line_x2_t4_g4_t2_ParamLimits

0x3c01,	// (0x000381bc) list_medium_line_x2_t4_g4_t2

0x3c17,	// (0x000381d2) list_medium_line_x2_t4_g4_t3_ParamLimits

0x3c17,	// (0x000381d2) list_medium_line_x2_t4_g4_t3

0x3c2c,	// (0x000381e7) list_medium_line_x2_t4_g4_t4_ParamLimits

0x3c2c,	// (0x000381e7) list_medium_line_x2_t4_g4_t4

0x0003,

0xf26b,	// (0x00043826) list_medium_line_x2_t4_g4_t_ParamLimits

0xf26b,	// (0x00043826) list_medium_line_x2_t4_g4_t

0x3b27,	// (0x000380e2) list_medium_line_x2_t2_g4_g1_ParamLimits

0x3b27,	// (0x000380e2) list_medium_line_x2_t2_g4_g1

0x3bcf,	// (0x0003818a) list_medium_line_x2_t2_g4_g2_ParamLimits

0x3bcf,	// (0x0003818a) list_medium_line_x2_t2_g4_g2

0x3b33,	// (0x000380ee) list_medium_line_x2_t2_g4_g3_ParamLimits

0x3b33,	// (0x000380ee) list_medium_line_x2_t2_g4_g3

0x3b3f,	// (0x000380fa) list_medium_line_x2_t2_g4_g4_ParamLimits

0x3b3f,	// (0x000380fa) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2d2,	// (0x0004388d) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2d2,	// (0x0004388d) list_medium_line_x2_t2_g4_g

0x3c3e,	// (0x000381f9) list_medium_line_x2_t2_g4_t1_ParamLimits

0x3c3e,	// (0x000381f9) list_medium_line_x2_t2_g4_t1

0x3b74,	// (0x0003812f) list_medium_line_x2_t2_g4_t2_ParamLimits

0x3b74,	// (0x0003812f) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2db,	// (0x00043896) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2db,	// (0x00043896) list_medium_line_x2_t2_g4_t

0x3b27,	// (0x000380e2) list_medium_line_x2_t2_g3_g1_ParamLimits

0x3b27,	// (0x000380e2) list_medium_line_x2_t2_g3_g1

0x3b33,	// (0x000380ee) list_medium_line_x2_t2_g3_g2_ParamLimits

0x3b33,	// (0x000380ee) list_medium_line_x2_t2_g3_g2

0x3b3f,	// (0x000380fa) list_medium_line_x2_t2_g3_g3_ParamLimits

0x3b3f,	// (0x000380fa) list_medium_line_x2_t2_g3_g3

0x0002,

0xf248,	// (0x00043803) list_medium_line_x2_t2_g3_g_ParamLimits

0xf248,	// (0x00043803) list_medium_line_x2_t2_g3_g

0x3c53,	// (0x0003820e) list_medium_line_x2_t2_g3_t1_ParamLimits

0x3c53,	// (0x0003820e) list_medium_line_x2_t2_g3_t1

0x3b74,	// (0x0003812f) list_medium_line_x2_t2_g3_t2_ParamLimits

0x3b74,	// (0x0003812f) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2e0,	// (0x0004389b) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2e0,	// (0x0004389b) list_medium_line_x2_t2_g3_t

0x6c28,	// (0x0003b1e3) main_sp_fs_list_pane_ParamLimits

0x6c28,	// (0x0003b1e3) main_sp_fs_list_pane

0x6c34,	// (0x0003b1ef) sp_fs_scroll_pane_ParamLimits

0x6c34,	// (0x0003b1ef) sp_fs_scroll_pane

0x3c68,	// (0x00038223) list_medium_line_x2_t3_t1

0x3c78,	// (0x00038233) list_medium_line_x2_t3_t2

0x3c86,	// (0x00038241) list_medium_line_x2_t3_t3

0x0002,

0xf32b,	// (0x000438e6) list_medium_line_x2_t3_t

0x3c94,	// (0x0003824f) list_medium_line_x3_t4_t1

0x3ca4,	// (0x0003825f) list_medium_line_x3_t4_t2

0x3cb2,	// (0x0003826d) list_medium_line_x3_t4_t3

0x3c86,	// (0x00038241) list_medium_line_x3_t4_t4

0x0003,

0xf332,	// (0x000438ed) list_medium_line_x3_t4_t

0x3cc0,	// (0x0003827b) list_medium_line_x4_t5_t1

0x3cd0,	// (0x0003828b) list_medium_line_x4_t5_t2

0x3cb2,	// (0x0003826d) list_medium_line_x4_t5_t3

0x3cde,	// (0x00038299) list_medium_line_x4_t5_t4

0x3c86,	// (0x00038241) list_medium_line_x4_t5_t5

0x0004,

0xf33b,	// (0x000438f6) list_medium_line_x4_t5_t

0x3b27,	// (0x000380e2) list_medium_line_t4_g4_g1_ParamLimits

0x3b27,	// (0x000380e2) list_medium_line_t4_g4_g1

0x3bdb,	// (0x00038196) list_medium_line_t4_g4_g2_ParamLimits

0x3bdb,	// (0x00038196) list_medium_line_t4_g4_g2

0x3cec,	// (0x000382a7) list_medium_line_t4_g4_g3_ParamLimits

0x3cec,	// (0x000382a7) list_medium_line_t4_g4_g3

0x3b3f,	// (0x000380fa) list_medium_line_t4_g4_g4_ParamLimits

0x3b3f,	// (0x000380fa) list_medium_line_t4_g4_g4

0x0003,

0xf346,	// (0x00043901) list_medium_line_t4_g4_g_ParamLimits

0xf346,	// (0x00043901) list_medium_line_t4_g4_g

0x3cf8,	// (0x000382b3) list_medium_line_t4_g4_t1_ParamLimits

0x3cf8,	// (0x000382b3) list_medium_line_t4_g4_t1

0x3d0d,	// (0x000382c8) list_medium_line_t4_g4_t2_ParamLimits

0x3d0d,	// (0x000382c8) list_medium_line_t4_g4_t2

0x3d23,	// (0x000382de) list_medium_line_t4_g4_t3_ParamLimits

0x3d23,	// (0x000382de) list_medium_line_t4_g4_t3

0x3b74,	// (0x0003812f) list_medium_line_t4_g4_t4_ParamLimits

0x3b74,	// (0x0003812f) list_medium_line_t4_g4_t4

0x0003,

0xf34f,	// (0x0004390a) list_medium_line_t4_g4_t_ParamLimits

0xf34f,	// (0x0004390a) list_medium_line_t4_g4_t

0x6d53,	// (0x0003b30e) chi_dic_find_pane_g1

0x7d6d,	// (0x0003c328) main_tport_pane

0x3f61,	// (0x0003851c) list_medium_line_plain_t1

0x3f6f,	// (0x0003852a) list_medium_line_t2_g2_g1_ParamLimits

0x3f6f,	// (0x0003852a) list_medium_line_t2_g2_g1

0x3f7b,	// (0x00038536) list_medium_line_t2_g2_g2_ParamLimits

0x3f7b,	// (0x00038536) list_medium_line_t2_g2_g2

0x0001,

0xfa0b,	// (0x00043fc6) list_medium_line_t2_g2_g_ParamLimits

0xfa0b,	// (0x00043fc6) list_medium_line_t2_g2_g

0x3f87,	// (0x00038542) list_medium_line_t2_g2_t1_ParamLimits

0x3f87,	// (0x00038542) list_medium_line_t2_g2_t1

0x3f9e,	// (0x00038559) list_medium_line_t2_g2_t2_ParamLimits

0x3f9e,	// (0x00038559) list_medium_line_t2_g2_t2

0x0001,

0xfa10,	// (0x00043fcb) list_medium_line_t2_g2_t_ParamLimits

0xfa10,	// (0x00043fcb) list_medium_line_t2_g2_t

0x41bd,	// (0x00038778) aid_sp_fs_list_icon_a_sm

0x41c5,	// (0x00038780) aid_sp_fs_list_icon_d

0x1510,	// (0x00035acb) aid_sp_fs_text_primary

0x1242,	// (0x000357fd) aid_sp_fs_text_secondary

0x41cd,	// (0x00038788) list_medium_line

0x41cd,	// (0x00038788) list_medium_line_g2

0x41cd,	// (0x00038788) list_medium_line_g3

0x41cd,	// (0x00038788) list_medium_line_plain

0x41cd,	// (0x00038788) list_medium_line_plain_t2

0x41cd,	// (0x00038788) list_medium_line_plain_t3

0x41cd,	// (0x00038788) list_medium_line_right_icon

0x41cd,	// (0x00038788) list_medium_line_right_iconx2

0x41cd,	// (0x00038788) list_medium_line_t2

0x41cd,	// (0x00038788) list_medium_line_t2_g2

0x41cd,	// (0x00038788) list_medium_line_t2_g3

0x41cd,	// (0x00038788) list_medium_line_t2_right_icon

0x41cd,	// (0x00038788) list_medium_line_t2_right_iconx2

0x41cd,	// (0x00038788) list_medium_line_t3

0x41cd,	// (0x00038788) list_medium_line_t3_g2

0x41cd,	// (0x00038788) list_medium_line_t3_g3

0x41cd,	// (0x00038788) list_medium_line_t3_right_iconx2

0x41d6,	// (0x00038791) list_medium_line_t4_g4

0x41df,	// (0x0003879a) list_medium_line_x2

0x41df,	// (0x0003879a) list_medium_line_x2_t2_g2

0x41df,	// (0x0003879a) list_medium_line_x2_t2_g3

0x41df,	// (0x0003879a) list_medium_line_x2_t2_g4

0x41df,	// (0x0003879a) list_medium_line_x2_t3

0x41df,	// (0x0003879a) list_medium_line_x2_t3_g2

0x41df,	// (0x0003879a) list_medium_line_x2_t3_g3

0x41df,	// (0x0003879a) list_medium_line_x2_t3_g4

0x41df,	// (0x0003879a) list_medium_line_x2_t4_g2

0x41df,	// (0x0003879a) list_medium_line_x2_t4_g4

0x41e8,	// (0x000387a3) list_medium_line_x3

0x41e8,	// (0x000387a3) list_medium_line_x3_t4

0x41e8,	// (0x000387a3) list_medium_line_x3_t4_g4

0x41d6,	// (0x00038791) list_medium_line_x4_t4

0x41d6,	// (0x00038791) list_medium_line_x4_t4_g7

0x41d6,	// (0x00038791) list_medium_line_x4_t5

0x41f1,	// (0x000387ac) list_single_fs_dyc_pane_ParamLimits

0x41f1,	// (0x000387ac) list_single_fs_dyc_pane

0x3b27,	// (0x000380e2) list_medium_line_x4_t4_g7_g1_ParamLimits

0x3b27,	// (0x000380e2) list_medium_line_x4_t4_g7_g1

0x4231,	// (0x000387ec) list_medium_line_x4_t4_g7_g2_ParamLimits

0x4231,	// (0x000387ec) list_medium_line_x4_t4_g7_g2

0x423d,	// (0x000387f8) list_medium_line_x4_t4_g7_g3_ParamLimits

0x423d,	// (0x000387f8) list_medium_line_x4_t4_g7_g3

0x424c,	// (0x00038807) list_medium_line_x4_t4_g7_g4_ParamLimits

0x424c,	// (0x00038807) list_medium_line_x4_t4_g7_g4

0x4258,	// (0x00038813) list_medium_line_x4_t4_g7_g5_ParamLimits

0x4258,	// (0x00038813) list_medium_line_x4_t4_g7_g5

0x4267,	// (0x00038822) list_medium_line_x4_t4_g7_g6_ParamLimits

0x4267,	// (0x00038822) list_medium_line_x4_t4_g7_g6

0x4276,	// (0x00038831) list_medium_line_x4_t4_g7_g7_ParamLimits

0x4276,	// (0x00038831) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd4,	// (0x0004418f) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd4,	// (0x0004418f) list_medium_line_x4_t4_g7_g

0x4282,	// (0x0003883d) list_medium_line_x4_t4_g7_t1_ParamLimits

0x4282,	// (0x0003883d) list_medium_line_x4_t4_g7_t1

0x4297,	// (0x00038852) list_medium_line_x4_t4_g7_t2_ParamLimits

0x4297,	// (0x00038852) list_medium_line_x4_t4_g7_t2

0x42ac,	// (0x00038867) list_medium_line_x4_t4_g7_t3_ParamLimits

0x42ac,	// (0x00038867) list_medium_line_x4_t4_g7_t3

0x42c1,	// (0x0003887c) list_medium_line_x4_t4_g7_t4_ParamLimits

0x42c1,	// (0x0003887c) list_medium_line_x4_t4_g7_t4

0x42d3,	// (0x0003888e) list_medium_line_x4_t4_g7_t5_ParamLimits

0x42d3,	// (0x0003888e) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbe3,	// (0x0004419e) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbe3,	// (0x0004419e) list_medium_line_x4_t4_g7_t

0x42e5,	// (0x000388a0) list_single_dyc_row_pane_ParamLimits

0x42e5,	// (0x000388a0) list_single_dyc_row_pane

0xb9d4,	// (0x0003ff8f) call5_gesture_pane_ParamLimits

0xb9d4,	// (0x0003ff8f) call5_gesture_pane

0xba0a,	// (0x0003ffc5) call5_windows_pane_ParamLimits

0xba0a,	// (0x0003ffc5) call5_windows_pane

0xba82,	// (0x0004003d) call5_swipe_1_pane_cp_ParamLimits

0xba82,	// (0x0004003d) call5_swipe_1_pane_cp

0xba8e,	// (0x00040049) call5_swipe_2_pane_cp_ParamLimits

0xba8e,	// (0x00040049) call5_swipe_2_pane_cp

0xc9bb,	// (0x00040f76) call5_image_pane_cp

0xba9a,	// (0x00040055) popup_call5_audio_first_window_cp_ParamLimits

0xba9a,	// (0x00040055) popup_call5_audio_first_window_cp

0x0cb2,	// (0x0003526d) call5_swipe_1_pane_g1_cp_ParamLimits

0x0cb2,	// (0x0003526d) call5_swipe_1_pane_g1_cp

0x0cf2,	// (0x000352ad) call5_swipe_1_pane_g2_cp

0x0ccb,	// (0x00035286) call5_swipe_1_pane_t1_cp_ParamLimits

0x0ccb,	// (0x00035286) call5_swipe_1_pane_t1_cp

0x0cb2,	// (0x0003526d) call5_swipe_2_pane_g1_cp_ParamLimits

0x0cb2,	// (0x0003526d) call5_swipe_2_pane_g1_cp

0x0cfa,	// (0x000352b5) call5_swipe_2_pane_g2_cp

0x0d02,	// (0x000352bd) call5_swipe_2_pane_t1_cp_ParamLimits

0x0d02,	// (0x000352bd) call5_swipe_2_pane_t1_cp

0x238b,	// (0x00036946) main_sp_fs_email_pane

0x0d17,	// (0x000352d2) main_sp_fs_listscroll_pane_te

0x4388,	// (0x00038943) popup_sp_fs_action_menu_pane_ParamLimits

0x4388,	// (0x00038943) popup_sp_fs_action_menu_pane

0xe1fe,	// (0x000427b9) bg_sp_fs_ctrlbar_pane_g1

0x0d66,	// (0x00035321) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x0d6f,	// (0x0003532a) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x0d78,	// (0x00035333) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xe1fe,	// (0x000427b9) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcd1,	// (0x0004428c) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xdfdd,	// (0x00042598) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xdfdd,	// (0x00042598) bg_sp_fs_ctrlbar_ddmenu_pane

0x0d81,	// (0x0003533c) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x0d81,	// (0x0003533c) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x0d8d,	// (0x00035348) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x0d8d,	// (0x00035348) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcda,	// (0x00044295) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcda,	// (0x00044295) main_sp_fs_ctrlbar_ddmenu_pane_g

0x0d99,	// (0x00035354) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x0d99,	// (0x00035354) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x43ce,	// (0x00038989) list_medium_line_t2_right_icon_g1

0x43d6,	// (0x00038991) list_medium_line_t2_right_icon_t1

0x43e6,	// (0x000389a1) list_medium_line_t2_right_icon_t2

0x0001,

0xfcdf,	// (0x0004429a) list_medium_line_t2_right_icon_t

0xddc6,	// (0x00042381) bg_sp_fs_ctrlbar_pane_ParamLimits

0xddc6,	// (0x00042381) bg_sp_fs_ctrlbar_pane

0xbb01,	// (0x000400bc) main_sp_fs_ctrlbar_button_pane_cp01

0xbb09,	// (0x000400c4) main_sp_fs_ctrlbar_ddmenu_pane

0x0df5,	// (0x000353b0) main_sp_fs_ctrlbar_pane_g1

0x0e01,	// (0x000353bc) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce4,	// (0x0004429f) main_sp_fs_ctrlbar_pane_g

0x0e0d,	// (0x000353c8) main_sp_fs_ctrlbar_pane_t1

0x43f4,	// (0x000389af) main_sp_fs_ctrlbar_pane

0x440e,	// (0x000389c9) main_sp_fs_listscroll_pane_te_cp01

0x441f,	// (0x000389da) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x441f,	// (0x000389da) popup_sp_fs_action_menu_pane_cp01

0x238b,	// (0x00036946) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x238b,	// (0x00036946) bg_sp_fs_highlight_list_pane_cp01

0x4449,	// (0x00038a04) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x4449,	// (0x00038a04) sp_fs_action_menu_list_gene_pane_g1

0x0e41,	// (0x000353fc) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x0e41,	// (0x000353fc) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcee,	// (0x000442a9) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcee,	// (0x000442a9) sp_fs_action_menu_list_gene_pane_g

0x4458,	// (0x00038a13) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x4458,	// (0x00038a13) sp_fs_action_menu_list_gene_pane_t1

0x4470,	// (0x00038a2b) sp_fs_action_menu_list_gene_pane_ParamLimits

0x4470,	// (0x00038a2b) sp_fs_action_menu_list_gene_pane

0x0e89,	// (0x00035444) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x0e89,	// (0x00035444) popup_sp_fs_action_menu_bg_pane

0x4493,	// (0x00038a4e) sp_fs_action_menu_list_pane_ParamLimits

0x4493,	// (0x00038a4e) sp_fs_action_menu_list_pane

0x0ebb,	// (0x00035476) sp_fs_scroll_pane_cp01_ParamLimits

0x0ebb,	// (0x00035476) sp_fs_scroll_pane_cp01

0x44b7,	// (0x00038a72) list_medium_line_plain_t2_t1

0x44c7,	// (0x00038a82) list_medium_line_plain_t2_t2

0x0001,

0xfcf3,	// (0x000442ae) list_medium_line_plain_t2_t

0x44d5,	// (0x00038a90) list_medium_line_plain_t3_t1

0x44e5,	// (0x00038aa0) list_medium_line_plain_t3_t2

0x44f3,	// (0x00038aae) list_medium_line_plain_t3_t3

0x0002,

0xfcf8,	// (0x000442b3) list_medium_line_plain_t3_t

0x3b27,	// (0x000380e2) list_medium_line_x2_t2_g2_g1_ParamLimits

0x3b27,	// (0x000380e2) list_medium_line_x2_t2_g2_g1

0x3b3f,	// (0x000380fa) list_medium_line_x2_t2_g2_g2_ParamLimits

0x3b3f,	// (0x000380fa) list_medium_line_x2_t2_g2_g2

0x0001,

0xf256,	// (0x00043811) list_medium_line_x2_t2_g2_g_ParamLimits

0xf256,	// (0x00043811) list_medium_line_x2_t2_g2_g

0x3cf8,	// (0x000382b3) list_medium_line_x2_t2_g2_t1_ParamLimits

0x3cf8,	// (0x000382b3) list_medium_line_x2_t2_g2_t1

0x3b74,	// (0x0003812f) list_medium_line_x2_t2_g2_t2_ParamLimits

0x3b74,	// (0x0003812f) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcff,	// (0x000442ba) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcff,	// (0x000442ba) list_medium_line_x2_t2_g2_t

0x3b27,	// (0x000380e2) list_medium_line_x2_t4_g2_g1_ParamLimits

0x3b27,	// (0x000380e2) list_medium_line_x2_t4_g2_g1

0x4501,	// (0x00038abc) list_medium_line_x2_t4_g2_g2_ParamLimits

0x4501,	// (0x00038abc) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd04,	// (0x000442bf) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd04,	// (0x000442bf) list_medium_line_x2_t4_g2_g

0x4513,	// (0x00038ace) list_medium_line_x2_t4_g2_t1_ParamLimits

0x4513,	// (0x00038ace) list_medium_line_x2_t4_g2_t1

0x452d,	// (0x00038ae8) list_medium_line_x2_t4_g2_t2_ParamLimits

0x452d,	// (0x00038ae8) list_medium_line_x2_t4_g2_t2

0x4543,	// (0x00038afe) list_medium_line_x2_t4_g2_t3_ParamLimits

0x4543,	// (0x00038afe) list_medium_line_x2_t4_g2_t3

0x3b74,	// (0x0003812f) list_medium_line_x2_t4_g2_t4_ParamLimits

0x3b74,	// (0x0003812f) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd09,	// (0x000442c4) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd09,	// (0x000442c4) list_medium_line_x2_t4_g2_t

0x4558,	// (0x00038b13) list_medium_line_t3_right_iconx2_g1

0x43ce,	// (0x00038989) list_medium_line_t3_right_iconx2_g2

0x4560,	// (0x00038b1b) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd12,	// (0x000442cd) list_medium_line_t3_right_iconx2_g

0x456a,	// (0x00038b25) list_medium_line_t3_right_iconx2_t1

0x457a,	// (0x00038b35) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd19,	// (0x000442d4) list_medium_line_t3_right_iconx2_t

0x3b27,	// (0x000380e2) list_medium_line_x3_t4_g4_g1_ParamLimits

0x3b27,	// (0x000380e2) list_medium_line_x3_t4_g4_g1

0x3b33,	// (0x000380ee) list_medium_line_x3_t4_g4_g2_ParamLimits

0x3b33,	// (0x000380ee) list_medium_line_x3_t4_g4_g2

0x3bdb,	// (0x00038196) list_medium_line_x3_t4_g4_g3_ParamLimits

0x3bdb,	// (0x00038196) list_medium_line_x3_t4_g4_g3

0x4588,	// (0x00038b43) list_medium_line_x3_t4_g4_g4_ParamLimits

0x4588,	// (0x00038b43) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd1e,	// (0x000442d9) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd1e,	// (0x000442d9) list_medium_line_x3_t4_g4_g

0x4594,	// (0x00038b4f) list_medium_line_x3_t4_g4_t1_ParamLimits

0x4594,	// (0x00038b4f) list_medium_line_x3_t4_g4_t1

0x45ab,	// (0x00038b66) list_medium_line_x3_t4_g4_t2_ParamLimits

0x45ab,	// (0x00038b66) list_medium_line_x3_t4_g4_t2

0x45c0,	// (0x00038b7b) list_medium_line_x3_t4_g4_t3_ParamLimits

0x45c0,	// (0x00038b7b) list_medium_line_x3_t4_g4_t3

0x45d5,	// (0x00038b90) list_medium_line_x3_t4_g4_t4_ParamLimits

0x45d5,	// (0x00038b90) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd27,	// (0x000442e2) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd27,	// (0x000442e2) list_medium_line_x3_t4_g4_t

0x45f2,	// (0x00038bad) list_single_dyc_row_text_pane_t1_ParamLimits

0x45f2,	// (0x00038bad) list_single_dyc_row_text_pane_t1

0x462f,	// (0x00038bea) list_single_dyc_row_text_pane_t2_ParamLimits

0x462f,	// (0x00038bea) list_single_dyc_row_text_pane_t2

0x4689,	// (0x00038c44) list_single_dyc_row_text_pane_t3_ParamLimits

0x4689,	// (0x00038c44) list_single_dyc_row_text_pane_t3

0x0002,

0xfd30,	// (0x000442eb) list_single_dyc_row_text_pane_t_ParamLimits

0xfd30,	// (0x000442eb) list_single_dyc_row_text_pane_t

0x469b,	// (0x00038c56) list_single_dyc_row_pane_g1_ParamLimits

0x469b,	// (0x00038c56) list_single_dyc_row_pane_g1

0x46a7,	// (0x00038c62) list_single_dyc_row_pane_g2_ParamLimits

0x46a7,	// (0x00038c62) list_single_dyc_row_pane_g2

0x46b3,	// (0x00038c6e) list_single_dyc_row_pane_g3_ParamLimits

0x46b3,	// (0x00038c6e) list_single_dyc_row_pane_g3

0x46bf,	// (0x00038c7a) list_single_dyc_row_pane_g4_ParamLimits

0x46bf,	// (0x00038c7a) list_single_dyc_row_pane_g4

0x0003,

0xfd37,	// (0x000442f2) list_single_dyc_row_pane_g_ParamLimits

0xfd37,	// (0x000442f2) list_single_dyc_row_pane_g

0x46cb,	// (0x00038c86) list_single_dyc_row_text_pane_ParamLimits

0x46cb,	// (0x00038c86) list_single_dyc_row_text_pane

0x1b96,	// (0x00036151) bg_sp_fs_scroll_pane

0x0f88,	// (0x00035543) thumb_sp_fs_scroll_pane

0x3f6f,	// (0x0003852a) list_medium_line_g1_ParamLimits

0x3f6f,	// (0x0003852a) list_medium_line_g1

0x46ea,	// (0x00038ca5) list_medium_line_t1_ParamLimits

0x46ea,	// (0x00038ca5) list_medium_line_t1

0x3b27,	// (0x000380e2) list_medium_line_x2_g1_ParamLimits

0x3b27,	// (0x000380e2) list_medium_line_x2_g1

0x3b33,	// (0x000380ee) list_medium_line_x2_g2_ParamLimits

0x3b33,	// (0x000380ee) list_medium_line_x2_g2

0x0001,

0xfd40,	// (0x000442fb) list_medium_line_x2_g_ParamLimits

0xfd40,	// (0x000442fb) list_medium_line_x2_g

0x46ff,	// (0x00038cba) list_medium_line_x2_t1_ParamLimits

0x46ff,	// (0x00038cba) list_medium_line_x2_t1

0x3b27,	// (0x000380e2) list_medium_line_x3_g1_ParamLimits

0x3b27,	// (0x000380e2) list_medium_line_x3_g1

0x3b33,	// (0x000380ee) list_medium_line_x3_g2_ParamLimits

0x3b33,	// (0x000380ee) list_medium_line_x3_g2

0x0001,

0xfd40,	// (0x000442fb) list_medium_line_x3_g_ParamLimits

0xfd40,	// (0x000442fb) list_medium_line_x3_g

0x46ff,	// (0x00038cba) list_medium_line_x3_t1_ParamLimits

0x46ff,	// (0x00038cba) list_medium_line_x3_t1

0x0fbc,	// (0x00035577) thumb_sp_fs_scroll_pane_g1

0x0fc5,	// (0x00035580) thumb_sp_fs_scroll_pane_g2

0x0fce,	// (0x00035589) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd45,	// (0x00044300) thumb_sp_fs_scroll_pane_g

0x0fbc,	// (0x00035577) bg_sp_fs_scroll_pane_g1

0x0fc5,	// (0x00035580) bg_sp_fs_scroll_pane_g2

0x0fce,	// (0x00035589) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd45,	// (0x00044300) bg_sp_fs_scroll_pane_g

0x3b27,	// (0x000380e2) list_medium_line_x2_t3_g4_g1_ParamLimits

0x3b27,	// (0x000380e2) list_medium_line_x2_t3_g4_g1

0x3bcf,	// (0x0003818a) list_medium_line_x2_t3_g4_g2_ParamLimits

0x3bcf,	// (0x0003818a) list_medium_line_x2_t3_g4_g2

0x3b33,	// (0x000380ee) list_medium_line_x2_t3_g4_g3_ParamLimits

0x3b33,	// (0x000380ee) list_medium_line_x2_t3_g4_g3

0x3b3f,	// (0x000380fa) list_medium_line_x2_t3_g4_g4_ParamLimits

0x3b3f,	// (0x000380fa) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2d2,	// (0x0004388d) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2d2,	// (0x0004388d) list_medium_line_x2_t3_g4_g

0x4715,	// (0x00038cd0) list_medium_line_x2_t3_g4_t1_ParamLimits

0x4715,	// (0x00038cd0) list_medium_line_x2_t3_g4_t1

0x472b,	// (0x00038ce6) list_medium_line_x2_t3_g4_t2_ParamLimits

0x472b,	// (0x00038ce6) list_medium_line_x2_t3_g4_t2

0x3b74,	// (0x0003812f) list_medium_line_x2_t3_g4_t3_ParamLimits

0x3b74,	// (0x0003812f) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd4c,	// (0x00044307) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd4c,	// (0x00044307) list_medium_line_x2_t3_g4_t

0x3f6f,	// (0x0003852a) list_medium_line_g2_g1_ParamLimits

0x3f6f,	// (0x0003852a) list_medium_line_g2_g1

0x3f7b,	// (0x00038536) list_medium_line_g2_g2_ParamLimits

0x3f7b,	// (0x00038536) list_medium_line_g2_g2

0x0001,

0xfa0b,	// (0x00043fc6) list_medium_line_g2_g_ParamLimits

0xfa0b,	// (0x00043fc6) list_medium_line_g2_g

0x4744,	// (0x00038cff) list_medium_line_g2_t1_ParamLimits

0x4744,	// (0x00038cff) list_medium_line_g2_t1

0x3f6f,	// (0x0003852a) list_medium_line_t3_g2_g1_ParamLimits

0x3f6f,	// (0x0003852a) list_medium_line_t3_g2_g1

0x3f7b,	// (0x00038536) list_medium_line_t3_g2_g2_ParamLimits

0x3f7b,	// (0x00038536) list_medium_line_t3_g2_g2

0x0001,

0xfa0b,	// (0x00043fc6) list_medium_line_t3_g2_g_ParamLimits

0xfa0b,	// (0x00043fc6) list_medium_line_t3_g2_g

0x4759,	// (0x00038d14) list_medium_line_t3_g2_t1_ParamLimits

0x4759,	// (0x00038d14) list_medium_line_t3_g2_t1

0x4770,	// (0x00038d2b) list_medium_line_t3_g2_t2_ParamLimits

0x4770,	// (0x00038d2b) list_medium_line_t3_g2_t2

0x4785,	// (0x00038d40) list_medium_line_t3_g2_t3_ParamLimits

0x4785,	// (0x00038d40) list_medium_line_t3_g2_t3

0x0002,

0xfd53,	// (0x0004430e) list_medium_line_t3_g2_t_ParamLimits

0xfd53,	// (0x0004430e) list_medium_line_t3_g2_t

0x43ce,	// (0x00038989) list_medium_line_right_icon_g1

0x479e,	// (0x00038d59) list_medium_line_right_icon_t1

0x3f6f,	// (0x0003852a) list_medium_line_t2_g1_ParamLimits

0x3f6f,	// (0x0003852a) list_medium_line_t2_g1

0x47ac,	// (0x00038d67) list_medium_line_t2_t1_ParamLimits

0x47ac,	// (0x00038d67) list_medium_line_t2_t1

0x47c6,	// (0x00038d81) list_medium_line_t2_t2_ParamLimits

0x47c6,	// (0x00038d81) list_medium_line_t2_t2

0x0001,

0xfd5a,	// (0x00044315) list_medium_line_t2_t_ParamLimits

0xfd5a,	// (0x00044315) list_medium_line_t2_t

0x3f6f,	// (0x0003852a) list_medium_line_t3_g1_ParamLimits

0x3f6f,	// (0x0003852a) list_medium_line_t3_g1

0x47db,	// (0x00038d96) list_medium_line_t3_t1_ParamLimits

0x47db,	// (0x00038d96) list_medium_line_t3_t1

0x47f5,	// (0x00038db0) list_medium_line_t3_t2_ParamLimits

0x47f5,	// (0x00038db0) list_medium_line_t3_t2

0x480b,	// (0x00038dc6) list_medium_line_t3_t3_ParamLimits

0x480b,	// (0x00038dc6) list_medium_line_t3_t3

0x0002,

0xfd5f,	// (0x0004431a) list_medium_line_t3_t_ParamLimits

0xfd5f,	// (0x0004431a) list_medium_line_t3_t

0x3f6f,	// (0x0003852a) list_medium_line_g3_g1_ParamLimits

0x3f6f,	// (0x0003852a) list_medium_line_g3_g1

0x4820,	// (0x00038ddb) list_medium_line_g3_g2_ParamLimits

0x4820,	// (0x00038ddb) list_medium_line_g3_g2

0x3f7b,	// (0x00038536) list_medium_line_g3_g3_ParamLimits

0x3f7b,	// (0x00038536) list_medium_line_g3_g3

0x0002,

0xfd66,	// (0x00044321) list_medium_line_g3_g_ParamLimits

0xfd66,	// (0x00044321) list_medium_line_g3_g

0x482c,	// (0x00038de7) list_medium_line_g3_t1_ParamLimits

0x482c,	// (0x00038de7) list_medium_line_g3_t1

0x3f6f,	// (0x0003852a) list_medium_line_t2_g3_g1_ParamLimits

0x3f6f,	// (0x0003852a) list_medium_line_t2_g3_g1

0x4820,	// (0x00038ddb) list_medium_line_t2_g3_g2_ParamLimits

0x4820,	// (0x00038ddb) list_medium_line_t2_g3_g2

0x3f7b,	// (0x00038536) list_medium_line_t2_g3_g3_ParamLimits

0x3f7b,	// (0x00038536) list_medium_line_t2_g3_g3

0x0002,

0xfd66,	// (0x00044321) list_medium_line_t2_g3_g_ParamLimits

0xfd66,	// (0x00044321) list_medium_line_t2_g3_g

0x4841,	// (0x00038dfc) list_medium_line_t2_g3_t1_ParamLimits

0x4841,	// (0x00038dfc) list_medium_line_t2_g3_t1

0x4858,	// (0x00038e13) list_medium_line_t2_g3_t2_ParamLimits

0x4858,	// (0x00038e13) list_medium_line_t2_g3_t2

0x0001,

0xfd6d,	// (0x00044328) list_medium_line_t2_g3_t_ParamLimits

0xfd6d,	// (0x00044328) list_medium_line_t2_g3_t

0x3f6f,	// (0x0003852a) list_medium_line_t3_g3_g1_ParamLimits

0x3f6f,	// (0x0003852a) list_medium_line_t3_g3_g1

0x4820,	// (0x00038ddb) list_medium_line_t3_g3_g2_ParamLimits

0x4820,	// (0x00038ddb) list_medium_line_t3_g3_g2

0x3f7b,	// (0x00038536) list_medium_line_t3_g3_g3_ParamLimits

0x3f7b,	// (0x00038536) list_medium_line_t3_g3_g3

0x0002,

0xfd66,	// (0x00044321) list_medium_line_t3_g3_g_ParamLimits

0xfd66,	// (0x00044321) list_medium_line_t3_g3_g

0x486d,	// (0x00038e28) list_medium_line_t3_g3_t1_ParamLimits

0x486d,	// (0x00038e28) list_medium_line_t3_g3_t1

0x4881,	// (0x00038e3c) list_medium_line_t3_g3_t2_ParamLimits

0x4881,	// (0x00038e3c) list_medium_line_t3_g3_t2

0x4893,	// (0x00038e4e) list_medium_line_t3_g3_t3_ParamLimits

0x4893,	// (0x00038e4e) list_medium_line_t3_g3_t3

0x0002,

0xfd72,	// (0x0004432d) list_medium_line_t3_g3_t_ParamLimits

0xfd72,	// (0x0004432d) list_medium_line_t3_g3_t

0x4558,	// (0x00038b13) list_medium_line_right_iconx2_g1

0x43ce,	// (0x00038989) list_medium_line_right_iconx2_g2

0x0001,

0xfd79,	// (0x00044334) list_medium_line_right_iconx2_g

0x48a7,	// (0x00038e62) list_medium_line_right_iconx2_t1

0x4558,	// (0x00038b13) list_medium_line_t2_right_iconx2_g1

0x43ce,	// (0x00038989) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd79,	// (0x00044334) list_medium_line_t2_right_iconx2_g

0x48b5,	// (0x00038e70) list_medium_line_t2_right_iconx2_t1

0x48c5,	// (0x00038e80) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd7e,	// (0x00044339) list_medium_line_t2_right_iconx2_t

0x48d3,	// (0x00038e8e) list_medium_line_x4_t4_t1

0x48e1,	// (0x00038e9c) list_medium_line_x4_t4_t2

0x48f1,	// (0x00038eac) list_medium_line_x4_t4_t3

0x4901,	// (0x00038ebc) list_medium_line_x4_t4_t4

0x0003,

0xfd83,	// (0x0004433e) list_medium_line_x4_t4_t

0xbb3c,	// (0x000400f7) tport_appsw_pane_ParamLimits

0xbb3c,	// (0x000400f7) tport_appsw_pane

0xbb4a,	// (0x00040105) tport_contact_pane_ParamLimits

0xbb4a,	// (0x00040105) tport_contact_pane

0xbb5a,	// (0x00040115) tport_listscroll_pane_ParamLimits

0xbb5a,	// (0x00040115) tport_listscroll_pane

0xbb6a,	// (0x00040125) cell_tport_appsw_pane_ParamLimits

0xbb6a,	// (0x00040125) cell_tport_appsw_pane

0xe493,	// (0x00042a4e) tport_appsw_pane_g1_ParamLimits

0xe493,	// (0x00042a4e) tport_appsw_pane_g1

0x1037,	// (0x000355f2) tport_contact_pane_g1

0x1040,	// (0x000355fb) tport_contact_pane_t1

0x104e,	// (0x00035609) tport_contact_pane_t2

0x0001,

0xfd8c,	// (0x00044347) tport_contact_pane_t

0x105c,	// (0x00035617) list_tport_pane

0x1065,	// (0x00035620) scroll_pane_cp_030

0x1076,	// (0x00035631) cell_tport_appsw_pane_g1

0x1086,	// (0x00035641) cell_tport_appsw_pane_t1

0x1b96,	// (0x00036151) grid_highlight_pane_cp019

0xbb97,	// (0x00040152) list_tport_double_graphic_pane_ParamLimits

0xbb97,	// (0x00040152) list_tport_double_graphic_pane

0x238b,	// (0x00036946) list_highlight_pane_cp023_ParamLimits

0x238b,	// (0x00036946) list_highlight_pane_cp023

0xbba4,	// (0x0004015f) list_tport_double_graphic_pane_g1_ParamLimits

0xbba4,	// (0x0004015f) list_tport_double_graphic_pane_g1

0xbbb1,	// (0x0004016c) list_tport_double_graphic_pane_t1_ParamLimits

0xbbb1,	// (0x0004016c) list_tport_double_graphic_pane_t1

0xbbc6,	// (0x00040181) list_tport_double_graphic_pane_t2_ParamLimits

0xbbc6,	// (0x00040181) list_tport_double_graphic_pane_t2

0x0001,

0xfd98,	// (0x00044353) list_tport_double_graphic_pane_t_ParamLimits

0xfd98,	// (0x00044353) list_tport_double_graphic_pane_t

0x1b96,	// (0x00036151) main_cale_note_pane

0xa024,	// (0x0003e5df) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xa024,	// (0x0003e5df) cell_vitu2_function_top_wide_pane_cp01

0xb736,	// (0x0003fcf1) wait_bar_pane_cp05_ParamLimits

0x1b96,	// (0x00036151) listscroll_cmail_pane

0x109c,	// (0x00035657) list_cmail_pane

0xbbe2,	// (0x0004019d) list_cmail_body_pane

0xbbf7,	// (0x000401b2) list_single_cmail_header_caption_pane

0xbc11,	// (0x000401cc) list_single_cmail_header_detail_pane_ParamLimits

0xbc11,	// (0x000401cc) list_single_cmail_header_detail_pane

0xbc40,	// (0x000401fb) list_single_cmail_header_caption_pane_t1

0x4911,	// (0x00038ecc) list_single_cmail_header_detail_pane_g1_ParamLimits

0x4911,	// (0x00038ecc) list_single_cmail_header_detail_pane_g1

0x4929,	// (0x00038ee4) list_single_cmail_header_detail_pane_g2_ParamLimits

0x4929,	// (0x00038ee4) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9d,	// (0x00044358) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9d,	// (0x00044358) list_single_cmail_header_detail_pane_g

0x4935,	// (0x00038ef0) list_single_cmail_header_detail_pane_t1_ParamLimits

0x4935,	// (0x00038ef0) list_single_cmail_header_detail_pane_t1

0x4999,	// (0x00038f54) list_single_cmail_header_editor_pane_bg_ParamLimits

0x4999,	// (0x00038f54) list_single_cmail_header_editor_pane_bg

0x0940,	// (0x00034efb) list_cmail_body_pane_g1

0x1125,	// (0x000356e0) list_cmail_body_pane_t1

0xec1c,	// (0x000431d7) list_single_cmail_header_editor_pane_bg_g1

0x27ee,	// (0x00036da9) list_single_cmail_header_editor_pane_bg_g1_copy1

0xec2c,	// (0x000431e7) list_single_cmail_header_editor_pane_bg_g1_copy2

0xec24,	// (0x000431df) list_single_cmail_header_editor_pane_bg_g1_copy3

0xee46,	// (0x00043401) list_single_cmail_header_editor_pane_bg_g1_copy4

0xec4c,	// (0x00043207) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xec3c,	// (0x000431f7) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xec44,	// (0x000431ff) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x27ce,	// (0x00036d89) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xbc50,	// (0x0004020b) calenote_gesture_pane_ParamLimits

0xbc50,	// (0x0004020b) calenote_gesture_pane

0xbc6a,	// (0x00040225) calenote_window_pane_ParamLimits

0xbc6a,	// (0x00040225) calenote_window_pane

0x1133,	// (0x000356ee) popup_note_window_cp01

0xbc82,	// (0x0004023d) calenote_swipe_1_pane_ParamLimits

0xbc82,	// (0x0004023d) calenote_swipe_1_pane

0xba8e,	// (0x00040049) calenote_swipe_2_pane_ParamLimits

0xba8e,	// (0x00040049) calenote_swipe_2_pane

0x0cb2,	// (0x0003526d) calenote_swipe_1_pane_g1_ParamLimits

0x0cb2,	// (0x0003526d) calenote_swipe_1_pane_g1

0x0cbf,	// (0x0003527a) calenote_swipe_1_pane_g2_ParamLimits

0x0cbf,	// (0x0003527a) calenote_swipe_1_pane_g2

0x0001,

0xfcc7,	// (0x00044282) calenote_swipe_1_pane_g_ParamLimits

0xfcc7,	// (0x00044282) calenote_swipe_1_pane_g

0x1145,	// (0x00035700) calenote_swipe_1_pane_t1_ParamLimits

0x1145,	// (0x00035700) calenote_swipe_1_pane_t1

0x0cb2,	// (0x0003526d) calenote_swipe_2_pane_g1_ParamLimits

0x0cb2,	// (0x0003526d) calenote_swipe_2_pane_g1

0x1164,	// (0x0003571f) calenote_swipe_2_pane_g2_ParamLimits

0x1164,	// (0x0003571f) calenote_swipe_2_pane_g2

0x0001,

0xfda9,	// (0x00044364) calenote_swipe_2_pane_g_ParamLimits

0xfda9,	// (0x00044364) calenote_swipe_2_pane_g

0x1170,	// (0x0003572b) calenote_swipe_2_pane_t1_ParamLimits

0x1170,	// (0x0003572b) calenote_swipe_2_pane_t1

0x1b96,	// (0x00036151) main_mup_navstr_pane

0x8d71,	// (0x0003d32c) main_mup3_pane_t7_ParamLimits

0x8d71,	// (0x0003d32c) main_mup3_pane_t7

0x9768,	// (0x0003dd23) main_mp4_pane_g6_ParamLimits

0x9768,	// (0x0003dd23) main_mp4_pane_g6

0x9ad8,	// (0x0003e093) main_image3_pane_t4_ParamLimits

0x9ad8,	// (0x0003e093) main_image3_pane_t4

0xbc95,	// (0x00040250) popup_navstr_preview_pane_ParamLimits

0xbc95,	// (0x00040250) popup_navstr_preview_pane

0xbca1,	// (0x0004025c) scroll_navstr_pane_ParamLimits

0xbca1,	// (0x0004025c) scroll_navstr_pane

0x1b96,	// (0x00036151) bg_popup_preview_window_pane_cp04

0x1197,	// (0x00035752) popup_navstr_preview_pane_t1

0xbcad,	// (0x00040268) scroll_navstr_pane_g1_ParamLimits

0xbcad,	// (0x00040268) scroll_navstr_pane_g1

0xbcba,	// (0x00040275) scroll_navstr_pane_t1_ParamLimits

0xbcba,	// (0x00040275) scroll_navstr_pane_t1

0x113c,	// (0x000356f7) bg_button_pane_cp014

0x113c,	// (0x000356f7) bg_button_pane_cp030

0x432e,	// (0x000388e9) list_double_fisheye_pane_g4_ParamLimits

0x432e,	// (0x000388e9) list_double_fisheye_pane_g4

0x433a,	// (0x000388f5) list_double_fisheye_pane_g5_ParamLimits

0x433a,	// (0x000388f5) list_double_fisheye_pane_g5

0x10a4,	// (0x0003565f) sp_fs_scroll_pane_cp03

0x0df5,	// (0x000353b0) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x0e01,	// (0x000353bc) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce4,	// (0x0004429f) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x0e0d,	// (0x000353c8) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xbbd8,	// (0x00040193) sp_fs_scroll_pane_cp02

0x243a,	// (0x000369f5) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x243a,	// (0x000369f5) popup_sp_fs_calendar_preview_list_single_pane

0x1b96,	// (0x00036151) main_cam6_pano_pane

0x238b,	// (0x00036946) main_mup3_pane_ParamLimits

0x1b96,	// (0x00036151) main_phacti_pane

0xb609,	// (0x0003fbc4) bg_button_pane_cp11

0xb621,	// (0x0003fbdc) main_mobtv_info_pane_g2_ParamLimits

0xb621,	// (0x0003fbdc) main_mobtv_info_pane_g2

0x0001,

0xfc44,	// (0x000441ff) main_mobtv_info_pane_g_ParamLimits

0xfc44,	// (0x000441ff) main_mobtv_info_pane_g

0xb7d3,	// (0x0003fd8e) sc_clock_pane_t5_ParamLimits

0xb7d3,	// (0x0003fd8e) sc_clock_pane_t5

0xb87c,	// (0x0003fe37) main_radioblah_pane_g1_ParamLimits

0x0be4,	// (0x0003519f) main_radioblah_pane_t3_ParamLimits

0x0be4,	// (0x0003519f) main_radioblah_pane_t3

0x0bfc,	// (0x000351b7) main_radioblah_pane_t4_ParamLimits

0x0bfc,	// (0x000351b7) main_radioblah_pane_t4

0xb89a,	// (0x0003fe55) main_radioblah_text_pane_ParamLimits

0xb89a,	// (0x0003fe55) main_radioblah_text_pane

0xb8a7,	// (0x0003fe62) main_radioblah_info_pane_g1_ParamLimits

0xb940,	// (0x0003fefb) main_radioblah_info_pane_t4_ParamLimits

0xb940,	// (0x0003fefb) main_radioblah_info_pane_t4

0x238b,	// (0x00036946) main_sp_fs_calendar_pane

0xbccc,	// (0x00040287) main_phacti_pane_g1

0xbcd4,	// (0x0004028f) phacti_note_pane_ParamLimits

0xbcd4,	// (0x0004028f) phacti_note_pane

0x11ae,	// (0x00035769) phacti_term_pane_ParamLimits

0x11ae,	// (0x00035769) phacti_term_pane

0x11c3,	// (0x0003577e) phacti_note_pane_t1_ParamLimits

0x11c3,	// (0x0003577e) phacti_note_pane_t1

0x49ab,	// (0x00038f66) phacti_term_pane_g1

0x49b3,	// (0x00038f6e) phacti_term_pane_t1_ParamLimits

0x49b3,	// (0x00038f6e) phacti_term_pane_t1

0x120c,	// (0x000357c7) popup_sp_fs_calendar_preview_list_single_pane_g1

0x1214,	// (0x000357cf) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb3,	// (0x0004436e) popup_sp_fs_calendar_preview_list_single_pane_g

0x121c,	// (0x000357d7) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x121c,	// (0x000357d7) popup_sp_fs_calendar_preview_list_single_pane_t1

0x1232,	// (0x000357ed) aid_popup_sp_fs_bg_corner_pane

0xe1fe,	// (0x000427b9) popup_sp_fs_calendar_preview_bg_pane_g1

0x1b96,	// (0x00036151) popup_sp_fs_calendar_preview_bg_pane

0x123a,	// (0x000357f5) popup_sp_fs_calendar_preview_list_pane

0x238b,	// (0x00036946) bg_main_sp_fs_cale_pane_ParamLimits

0x238b,	// (0x00036946) bg_main_sp_fs_cale_pane

0x49dd,	// (0x00038f98) listscroll_cale_mrui_pane_ParamLimits

0x49dd,	// (0x00038f98) listscroll_cale_mrui_pane

0x49f1,	// (0x00038fac) listscroll_sp_fs_schedule_track_pane

0x49fa,	// (0x00038fb5) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x49fa,	// (0x00038fb5) main_sp_fs_ctrlbar_pane_cp01

0x1279,	// (0x00035834) main_sp_fs_ribbon_pane

0x1281,	// (0x0003583c) popup_sp_fs_cale_preview_window

0xbd1b,	// (0x000402d6) list_single_sp_fs_schedule_track_pane_ParamLimits

0xbd1b,	// (0x000402d6) list_single_sp_fs_schedule_track_pane

0x4fab,	// (0x00039566) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x4fab,	// (0x00039566) bg_sp_fs_highlight_list_pane_cp03

0xbd2f,	// (0x000402ea) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xbd2f,	// (0x000402ea) list_single_sp_fs_schedule_track_pane_g1

0xbd3b,	// (0x000402f6) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xbd3b,	// (0x000402f6) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdb8,	// (0x00044373) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdb8,	// (0x00044373) list_single_sp_fs_schedule_track_pane_g

0xbd47,	// (0x00040302) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xbd47,	// (0x00040302) list_single_sp_fs_schedule_track_pane_t1

0xbd65,	// (0x00040320) sp_fs_schedule_track_pane_ParamLimits

0xbd65,	// (0x00040320) sp_fs_schedule_track_pane

0x1293,	// (0x0003584e) sp_fs_schedule_track_pane_g1

0x129b,	// (0x00035856) sp_fs_schedule_track_pane_g2

0x12a3,	// (0x0003585e) sp_fs_schedule_track_pane_g3

0x12ab,	// (0x00035866) sp_fs_schedule_track_pane_g4

0x12b3,	// (0x0003586e) sp_fs_schedule_track_pane_g5

0x0004,

0xfdbd,	// (0x00044378) sp_fs_schedule_track_pane_g

0xec1c,	// (0x000431d7) bg_sp_fs_schedule_viewer_highlight_g1

0x27ee,	// (0x00036da9) bg_sp_fs_schedule_viewer_highlight_g2

0xec24,	// (0x000431df) bg_sp_fs_schedule_viewer_highlight_g3

0xec2c,	// (0x000431e7) bg_sp_fs_schedule_viewer_highlight_g4

0xee46,	// (0x00043401) bg_sp_fs_schedule_viewer_highlight_g5

0xec3c,	// (0x000431f7) bg_sp_fs_schedule_viewer_highlight_g6

0xec44,	// (0x000431ff) bg_sp_fs_schedule_viewer_highlight_g7

0xec4c,	// (0x00043207) bg_sp_fs_schedule_viewer_highlight_g8

0x27ce,	// (0x00036d89) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdc8,	// (0x00044383) bg_sp_fs_schedule_viewer_highlight_g

0x1b96,	// (0x00036151) bg_main_sp_fs_ribbon_pane

0xbd77,	// (0x00040332) main_sp_fs_ribbon_pane_g1

0x12bb,	// (0x00035876) main_sp_fs_ribbon_pane_t1

0xbd80,	// (0x0004033b) main_sp_fs_ribbon_pane_t2

0x12ca,	// (0x00035885) main_sp_fs_ribbon_pane_t3

0x0002,

0xfddb,	// (0x00044396) main_sp_fs_ribbon_pane_t

0x12d9,	// (0x00035894) main_sp_fs_ribbon_scheduler_pane

0x12e1,	// (0x0003589c) bg_main_sp_fs_ribbon_pane_g1

0x12ea,	// (0x000358a5) bg_main_sp_fs_ribbon_pane_g2

0x12f3,	// (0x000358ae) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfde2,	// (0x0004439d) bg_main_sp_fs_ribbon_pane_g

0x12fb,	// (0x000358b6) main_sp_fs_ribbon_scheduler_pane_g1

0x1304,	// (0x000358bf) main_sp_fs_ribbon_scheduler_pane_g2

0x130d,	// (0x000358c8) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfde9,	// (0x000443a4) main_sp_fs_ribbon_scheduler_pane_g

0x1316,	// (0x000358d1) list_cale_mrui_pane

0xbd8f,	// (0x0004034a) sp_fs_scroll_pane_cp07_ParamLimits

0xbd8f,	// (0x0004034a) sp_fs_scroll_pane_cp07

0xbda5,	// (0x00040360) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xbda5,	// (0x00040360) bg_sp_fs_schedule_viewer_highlight

0x131f,	// (0x000358da) list_single_sp_fs_schedule_track_pane_cp01

0x1327,	// (0x000358e2) list_sp_fs_schedule_track_pane

0x132f,	// (0x000358ea) sp_fs_scroll_pane_cp06_ParamLimits

0x132f,	// (0x000358ea) sp_fs_scroll_pane_cp06

0xe1fe,	// (0x000427b9) bgmain_sp_fs_calendar_pane_g1

0x4a0b,	// (0x00038fc6) list_single_cale_mrui_pane_ParamLimits

0x4a0b,	// (0x00038fc6) list_single_cale_mrui_pane

0x4a2e,	// (0x00038fe9) list_single_cale_mrui_row_pane_ParamLimits

0x4a2e,	// (0x00038fe9) list_single_cale_mrui_row_pane

0x4a3b,	// (0x00038ff6) list_single_cale_mrui_row_pane_g1_ParamLimits

0x4a3b,	// (0x00038ff6) list_single_cale_mrui_row_pane_g1

0x4a73,	// (0x0003902e) list_single_cale_mrui_row_pane_t1_ParamLimits

0x4a73,	// (0x0003902e) list_single_cale_mrui_row_pane_t1

0x4a85,	// (0x00039040) list_single_cale_mrui_row_pane_t2_ParamLimits

0x4a85,	// (0x00039040) list_single_cale_mrui_row_pane_t2

0x4aeb,	// (0x000390a6) list_single_cale_mrui_row_pane_t3_ParamLimits

0x4aeb,	// (0x000390a6) list_single_cale_mrui_row_pane_t3

0x4b1a,	// (0x000390d5) list_single_cale_mrui_row_pane_t4_ParamLimits

0x4b1a,	// (0x000390d5) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf7,	// (0x000443b2) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf7,	// (0x000443b2) list_single_cale_mrui_row_pane_t

0x4b49,	// (0x00039104) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x4b49,	// (0x00039104) list_single_cmail_header_editor_pane_bg_cp01

0x4b6d,	// (0x00039128) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x4b6d,	// (0x00039128) list_single_cmail_header_editor_pane_bg_cp02

0xbdb2,	// (0x0004036d) main_radioblah_text_pane_t1_ParamLimits

0xbdb2,	// (0x0004036d) main_radioblah_text_pane_t1

0x142a,	// (0x000359e5) cam6_indi_pane_cp01

0x1432,	// (0x000359ed) cam6_mode_pane_cp01

0x143a,	// (0x000359f5) cam6_pano_pane

0x1443,	// (0x000359fe) cam6_zoom_pane_cp01

0x144d,	// (0x00035a08) cam6_pano_image_pane

0x1456,	// (0x00035a11) cam6_pano_pane_g1

0x0940,	// (0x00034efb) cam6_pano_pane_g2

0x145f,	// (0x00035a1a) cam6_pano_pane_g3

0x1468,	// (0x00035a23) cam6_pano_pane_g4

0xe770,	// (0x00042d2b) cam6_pano_pane_g5

0x1471,	// (0x00035a2c) cam6_pano_pane_g6

0x1479,	// (0x00035a34) cam6_pano_pane_g7

0x1481,	// (0x00035a3c) cam6_pano_pane_g8

0x148a,	// (0x00035a45) cam6_pano_pane_g9

0x0008,

0xfe00,	// (0x000443bb) cam6_pano_pane_g

0x1b96,	// (0x00036151) main_browser_tag_pane

0x118f,	// (0x0003574a) grid_navstr_albumart_pane

0x1495,	// (0x00035a50) cell_navstr_albumart_pane_ParamLimits

0x1495,	// (0x00035a50) cell_navstr_albumart_pane

0x14b1,	// (0x00035a6c) cell_navstr_albumart_pane_g1

0xdbdf,	// (0x0004219a) cell_navstr_albumart_pane_g2

0xdbef,	// (0x000421aa) cell_navstr_albumart_pane_g3

0xdbe7,	// (0x000421a2) cell_navstr_albumart_pane_g4

0x0003,

0xfe13,	// (0x000443ce) cell_navstr_albumart_pane_g

0xbdcc,	// (0x00040387) bt_list_pane_ParamLimits

0xbdcc,	// (0x00040387) bt_list_pane

0xbde5,	// (0x000403a0) bt_list_pane_t1

0xbdf4,	// (0x000403af) bt_list_pane_t2

0x0001,

0xfe1c,	// (0x000443d7) bt_list_pane_t

0x1b96,	// (0x00036151) main_cale_prevew_pane

0xbe03,	// (0x000403be) popup_cale_preview_window_ParamLimits

0xbe03,	// (0x000403be) popup_cale_preview_window

0x238b,	// (0x00036946) bg_popup_preview_window_pane_cp05_ParamLimits

0x238b,	// (0x00036946) bg_popup_preview_window_pane_cp05

0x14b9,	// (0x00035a74) list_cale_preview_pane_ParamLimits

0x14b9,	// (0x00035a74) list_cale_preview_pane

0xbe1e,	// (0x000403d9) list_double_cale_preview_pane_ParamLimits

0xbe1e,	// (0x000403d9) list_double_cale_preview_pane

0xbe32,	// (0x000403ed) list_single_cale_preview_pane_ParamLimits

0xbe32,	// (0x000403ed) list_single_cale_preview_pane

0xbe4a,	// (0x00040405) list_single_cale_preview_pane_g1

0xbe52,	// (0x0004040d) list_single_cale_preview_pane_t1_ParamLimits

0xbe52,	// (0x0004040d) list_single_cale_preview_pane_t1

0xbe67,	// (0x00040422) list_double_cale_preview_pane_g1

0xbe6f,	// (0x0004042a) list_double_cale_preview_pane_t1_ParamLimits

0xbe6f,	// (0x0004042a) list_double_cale_preview_pane_t1

0xbe84,	// (0x0004043f) list_double_cale_preview_pane_t2_ParamLimits

0xbe84,	// (0x0004043f) list_double_cale_preview_pane_t2

0x0001,

0xfe21,	// (0x000443dc) list_double_cale_preview_pane_t_ParamLimits

0xfe21,	// (0x000443dc) list_double_cale_preview_pane_t

0x1b96,	// (0x00036151) main_ezdial_pane

0x238b,	// (0x00036946) main_sp_fs_email_pane_ParamLimits

0xbaa8,	// (0x00040063) cmail_ddmenu_btn01_pane_ParamLimits

0xbaa8,	// (0x00040063) cmail_ddmenu_btn01_pane

0xbac5,	// (0x00040080) cmail_ddmenu_btn02_pane_ParamLimits

0xbac5,	// (0x00040080) cmail_ddmenu_btn02_pane

0xbae3,	// (0x0004009e) cmail_ddmenu_btn03_pane_ParamLimits

0xbae3,	// (0x0004009e) cmail_ddmenu_btn03_pane

0x43f4,	// (0x000389af) main_sp_fs_ctrlbar_pane_ParamLimits

0x440e,	// (0x000389c9) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xbbe2,	// (0x0004019d) list_cmail_body_pane_ParamLimits

0x10b3,	// (0x0003566e) bg_button_pane_cp12

0x10c8,	// (0x00035683) list_single_cmail_header_detail_pane_g3_ParamLimits

0x10c8,	// (0x00035683) list_single_cmail_header_detail_pane_g3

0x4973,	// (0x00038f2e) list_single_cmail_header_detail_pane_t2_ParamLimits

0x4973,	// (0x00038f2e) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda4,	// (0x0004435f) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda4,	// (0x0004435f) list_single_cmail_header_detail_pane_t

0x49c8,	// (0x00038f83) phacti_term_pane_t2_ParamLimits

0x49c8,	// (0x00038f83) phacti_term_pane_t2

0x0001,

0xfdae,	// (0x00044369) phacti_term_pane_t_ParamLimits

0xfdae,	// (0x00044369) phacti_term_pane_t

0x14c5,	// (0x00035a80) aid_size_list_single_double

0xbe9c,	// (0x00040457) popup_ezdial_listscroll_window

0xbebc,	// (0x00040477) popup_number_entry_window_cp01

0xc9bb,	// (0x00040f76) bg_popup_call_pane_cp09

0x14d1,	// (0x00035a8c) ezdial_list_pane

0x14d9,	// (0x00035a94) scroll_pane_cp23

0xdfdd,	// (0x00042598) bg_button_pane_cp028_ParamLimits

0xdfdd,	// (0x00042598) bg_button_pane_cp028

0xbeca,	// (0x00040485) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xbeca,	// (0x00040485) cmail_ddmenu_btn01_pane_g1

0xbedc,	// (0x00040497) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xbedc,	// (0x00040497) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe26,	// (0x000443e1) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe26,	// (0x000443e1) cmail_ddmenu_btn01_pane_g

0x14e1,	// (0x00035a9c) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x14e1,	// (0x00035a9c) cmail_ddmenu_btn01_pane_t1

0xddc6,	// (0x00042381) bg_button_pane_cp029_ParamLimits

0xddc6,	// (0x00042381) bg_button_pane_cp029

0xbedc,	// (0x00040497) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xbedc,	// (0x00040497) cmail_ddmenu_btn02_pane_g1

0xbef4,	// (0x000404af) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xbef4,	// (0x000404af) cmail_ddmenu_btn02_pane_t1

0x4fab,	// (0x00039566) bg_button_pane_cp031_ParamLimits

0x4fab,	// (0x00039566) bg_button_pane_cp031

0xbedc,	// (0x00040497) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xbedc,	// (0x00040497) cmail_ddmenu_btn03_pane_g1

0xbef4,	// (0x000404af) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xbef4,	// (0x000404af) cmail_ddmenu_btn03_pane_t1

0x9981,	// (0x0003df3c) cell_dialer2_keypad_pane_t1_ParamLimits

0x999b,	// (0x0003df56) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x999b,	// (0x0003df56) cell_dialer2_keypad_pane_t1_copy1

0xb47a,	// (0x0003fa35) ncimui_group_button_pane

0x238b,	// (0x00036946) main_sp_fs_calendar_pane_ParamLimits

0xbbf7,	// (0x000401b2) list_single_cmail_header_caption_pane_ParamLimits

0x1242,	// (0x000357fd) aid_recal_txt_sm_pane

0x1b96,	// (0x00036151) mian_recal_day_pane

0x1281,	// (0x0003583c) popup_sp_fs_cale_preview_window_ParamLimits

0x1b96,	// (0x00036151) list_recal_day_pane

0x1519,	// (0x00035ad4) list_single_recal_day_pane_ParamLimits

0x1519,	// (0x00035ad4) list_single_recal_day_pane

0x152b,	// (0x00035ae6) list_single_recal_day_pane_g1_ParamLimits

0x152b,	// (0x00035ae6) list_single_recal_day_pane_g1

0x1537,	// (0x00035af2) list_single_recal_day_pane_g2_ParamLimits

0x1537,	// (0x00035af2) list_single_recal_day_pane_g2

0x1547,	// (0x00035b02) list_single_recal_day_pane_g3_ParamLimits

0x1547,	// (0x00035b02) list_single_recal_day_pane_g3

0xbf18,	// (0x000404d3) list_single_recal_day_pane_g4_ParamLimits

0xbf18,	// (0x000404d3) list_single_recal_day_pane_g4

0x1553,	// (0x00035b0e) list_single_recal_day_pane_g5_ParamLimits

0x1553,	// (0x00035b0e) list_single_recal_day_pane_g5

0x1563,	// (0x00035b1e) list_single_recal_day_pane_g6_ParamLimits

0x1563,	// (0x00035b1e) list_single_recal_day_pane_g6

0x0004,

0xfe35,	// (0x000443f0) list_single_recal_day_pane_g_ParamLimits

0xfe35,	// (0x000443f0) list_single_recal_day_pane_g

0x157a,	// (0x00035b35) list_single_recal_day_pane_t1

0x158c,	// (0x00035b47) list_single_recal_day_pane_t2

0x0001,

0xfe40,	// (0x000443fb) list_single_recal_day_pane_t

0xbf38,	// (0x000404f3) ncimui_query_button_pane_ParamLimits

0xbf38,	// (0x000404f3) ncimui_query_button_pane

0xbf48,	// (0x00040503) ncimui_query_button_pane_t1_ParamLimits

0xbf48,	// (0x00040503) ncimui_query_button_pane_t1

0x15a1,	// (0x00035b5c) ncimui_query_button_pane_t2_ParamLimits

0x15a1,	// (0x00035b5c) ncimui_query_button_pane_t2

0x0001,

0xfe45,	// (0x00044400) ncimui_query_button_pane_t_ParamLimits

0xfe45,	// (0x00044400) ncimui_query_button_pane_t

0xbf5b,	// (0x00040516) query_button_pane_ParamLimits

0xbf5b,	// (0x00040516) query_button_pane

0x1b96,	// (0x00036151) bg_button_pane_cp0028

0x15b4,	// (0x00035b6f) query_button_pane_t1

0x7d6d,	// (0x0003c328) main_tport_pane_ParamLimits

0xbb13,	// (0x000400ce) bg_popup_window_pane_cp01_ParamLimits

0xbb13,	// (0x000400ce) bg_popup_window_pane_cp01

0xbb20,	// (0x000400db) heading_pane_cp08_ParamLimits

0xbb20,	// (0x000400db) heading_pane_cp08

0xbb2e,	// (0x000400e9) heading_pane_cp07_ParamLimits

0xbb2e,	// (0x000400e9) heading_pane_cp07

0x1076,	// (0x00035631) cell_tport_appsw_pane_g2

0x0002,

0xfd91,	// (0x0004434c) cell_tport_appsw_pane_g

0x3d39,	// (0x000382f4) input_candi_list_open_g1

0x29b3,	// (0x00036f6e) list_cale_time_pane_g6_ParamLimits

0x29b3,	// (0x00036f6e) list_cale_time_pane_g6

0x8804,	// (0x0003cdbf) aid_size_touch_calib_1_ParamLimits

0x8804,	// (0x0003cdbf) aid_size_touch_calib_1

0x8810,	// (0x0003cdcb) aid_size_touch_calib_2_ParamLimits

0x8810,	// (0x0003cdcb) aid_size_touch_calib_2

0x881e,	// (0x0003cdd9) aid_size_touch_calib_3_ParamLimits

0x881e,	// (0x0003cdd9) aid_size_touch_calib_3

0x882e,	// (0x0003cde9) aid_size_touch_calib_4_ParamLimits

0x882e,	// (0x0003cde9) aid_size_touch_calib_4

0x883c,	// (0x0003cdf7) main_touch_calib_button_group_pane_ParamLimits

0x883c,	// (0x0003cdf7) main_touch_calib_button_group_pane

0x884a,	// (0x0003ce05) main_touch_calib_pane_g1_ParamLimits

0x8856,	// (0x0003ce11) main_touch_calib_pane_g2_ParamLimits

0x8862,	// (0x0003ce1d) main_touch_calib_pane_g3_ParamLimits

0x886e,	// (0x0003ce29) main_touch_calib_pane_g4_ParamLimits

0xf761,	// (0x00043d1c) main_touch_calib_pane_g_ParamLimits

0x887a,	// (0x0003ce35) main_touch_calib_pane_t1_ParamLimits

0x8891,	// (0x0003ce4c) main_touch_calib_pane_t2_ParamLimits

0x88aa,	// (0x0003ce65) main_touch_calib_pane_t3_ParamLimits

0x88c0,	// (0x0003ce7b) main_touch_calib_pane_t4_ParamLimits

0x88d6,	// (0x0003ce91) main_touch_calib_pane_t5_ParamLimits

0xf76a,	// (0x00043d25) main_touch_calib_pane_t_ParamLimits

0xe53a,	// (0x00042af5) list_single_fp_cale_pane_g3_ParamLimits

0xe53a,	// (0x00042af5) list_single_fp_cale_pane_g3

0x238b,	// (0x00036946) bg_button_pane_cp012_ParamLimits

0x238b,	// (0x00036946) bg_vkb2_func_pane_cp03_ParamLimits

0xa77f,	// (0x0003ed3a) cell_vitu2_function_top_pane_g1_ParamLimits

0x238b,	// (0x00036946) bg_vkb2_func_pane_cp04_ParamLimits

0xb402,	// (0x0003f9bd) main_ncimui_button_group_pane_ParamLimits

0xb402,	// (0x0003f9bd) main_ncimui_button_group_pane

0xb468,	// (0x0003fa23) main_ncimui_pane_t3_ParamLimits

0xb468,	// (0x0003fa23) main_ncimui_pane_t3

0x11a5,	// (0x00035760) phacti_button_group_pane

0x14c5,	// (0x00035a80) aid_size_list_single_double_ParamLimits

0xbe9c,	// (0x00040457) popup_ezdial_listscroll_window_ParamLimits

0xbebc,	// (0x00040477) popup_number_entry_window_cp01_ParamLimits

0xbf68,	// (0x00040523) phacti_button_pane_ParamLimits

0xbf68,	// (0x00040523) phacti_button_pane

0x1b96,	// (0x00036151) bg_button_pane_cp14

0x15c2,	// (0x00035b7d) phacti_button_pane_t1

0xbf79,	// (0x00040534) main_touch_calib_button_pane_ParamLimits

0xbf79,	// (0x00040534) main_touch_calib_button_pane

0x2316,	// (0x000368d1) bg_button_pane_cp18_ParamLimits

0x2316,	// (0x000368d1) bg_button_pane_cp18

0x15d0,	// (0x00035b8b) main_touch_calib_button_pane_t1_ParamLimits

0x15d0,	// (0x00035b8b) main_touch_calib_button_pane_t1

0x15e6,	// (0x00035ba1) main_touch_calib_button_pane_t2_ParamLimits

0x15e6,	// (0x00035ba1) main_touch_calib_button_pane_t2

0x0001,

0xfe4a,	// (0x00044405) main_touch_calib_button_pane_t_ParamLimits

0xfe4a,	// (0x00044405) main_touch_calib_button_pane_t

0x1b96,	// (0x00036151) cell_ncimui_button_pane

0x1b96,	// (0x00036151) bg_button_pane_cp032

0x1604,	// (0x00035bbf) cell_ncimui_button_pane_t1

0x99f7,	// (0x0003dfb2) image3_infobar_pane_ParamLimits

0x99f7,	// (0x0003dfb2) image3_infobar_pane

0xb7f5,	// (0x0003fdb0) fs_bigclock_status_pane_ParamLimits

0xb7f5,	// (0x0003fdb0) fs_bigclock_status_pane

0xb802,	// (0x0003fdbd) main_fs_bigclock_clock_pane_ParamLimits

0xb802,	// (0x0003fdbd) main_fs_bigclock_clock_pane

0xb818,	// (0x0003fdd3) main_fs_bigclock_indi_pane_ParamLimits

0xb818,	// (0x0003fdd3) main_fs_bigclock_indi_pane

0xb84a,	// (0x0003fe05) main_fs_bigclock_swipe_pane_ParamLimits

0xb84a,	// (0x0003fe05) main_fs_bigclock_swipe_pane

0x1b96,	// (0x00036151) main_fs_clock_dumped_data

0x0a4d,	// (0x00035008) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x0a4d,	// (0x00035008) list_single_fs_bigclock_indicator_pane_g1

0x0a77,	// (0x00035032) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x0a77,	// (0x00035032) list_single_fs_bigclock_indicator_pane_g2

0x0a91,	// (0x0003504c) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x0a91,	// (0x0003504c) list_single_fs_bigclock_indicator_pane_g3

0x0aab,	// (0x00035066) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x0aab,	// (0x00035066) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc78,	// (0x00044233) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc78,	// (0x00044233) list_single_fs_bigclock_indicator_pane_g

0x0ad6,	// (0x00035091) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x0ad6,	// (0x00035091) list_single_fs_bigclock_indicator_pane_t1

0x0afe,	// (0x000350b9) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x0afe,	// (0x000350b9) list_single_fs_bigclock_indicator_pane_t2

0x0b26,	// (0x000350e1) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x0b26,	// (0x000350e1) list_single_fs_bigclock_indicator_pane_t3

0x0b4e,	// (0x00035109) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x0b4e,	// (0x00035109) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc83,	// (0x0004423e) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc83,	// (0x0004423e) list_single_fs_bigclock_indicator_pane_t

0x1612,	// (0x00035bcd) image3_infobar_fav_pane_ParamLimits

0x1612,	// (0x00035bcd) image3_infobar_fav_pane

0x1622,	// (0x00035bdd) image3_infobar_loc_pane_ParamLimits

0x1622,	// (0x00035bdd) image3_infobar_loc_pane

0x1638,	// (0x00035bf3) image3_infobar_time_pane_ParamLimits

0x1638,	// (0x00035bf3) image3_infobar_time_pane

0xe1fe,	// (0x000427b9) image3_infobar_time_pane_g1

0x1648,	// (0x00035c03) image3_infobar_time_pane_t1

0xe1fe,	// (0x000427b9) image3_infobar_loc_pane_g1

0x1656,	// (0x00035c11) image3_infobar_loc_pane_g2

0x0001,

0xfe4f,	// (0x0004440a) image3_infobar_loc_pane_g

0x165e,	// (0x00035c19) image3_infobar_loc_pane_t1

0xe1fe,	// (0x000427b9) image3_infobar_fav_pane_g1

0x166c,	// (0x00035c27) image3_infobar_fav_pane_g2

0x0001,

0xfe54,	// (0x0004440f) image3_infobar_fav_pane_g

0x1674,	// (0x00035c2f) fs_bigclock_status_battery_pane

0x167d,	// (0x00035c38) fs_bigclock_status_signal_pane

0x1686,	// (0x00035c41) fs_bigclock_status_title_pane

0x168f,	// (0x00035c4a) fs_bigclock_status_signal_pane_g1

0x1698,	// (0x00035c53) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe59,	// (0x00044414) fs_bigclock_status_signal_pane_g

0x16a0,	// (0x00035c5b) fs_bigclock_status_battery_pane_g1

0x16a9,	// (0x00035c64) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe5e,	// (0x00044419) fs_bigclock_status_battery_pane_g

0x16b1,	// (0x00035c6c) fs_bigclock_status_title_pane_t1

0xe1fe,	// (0x000427b9) main_fs_bigclock_clock_pane_g1

0x16bf,	// (0x00035c7a) main_fs_bigclock_clock_pane_g2

0x16bf,	// (0x00035c7a) main_fs_bigclock_clock_pane_g3

0x16bf,	// (0x00035c7a) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe63,	// (0x0004441e) main_fs_bigclock_clock_pane_g

0x16c7,	// (0x00035c82) main_fs_bigclock_clock_pane_t1

0x16d5,	// (0x00035c90) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe6c,	// (0x00044427) main_fs_bigclock_clock_pane_t

0xbf89,	// (0x00040544) list_single_fs_bigclock_indicator_pane_ParamLimits

0xbf89,	// (0x00040544) list_single_fs_bigclock_indicator_pane

0xbf9a,	// (0x00040555) list_single_fs_bigclock_pane_ParamLimits

0xbf9a,	// (0x00040555) list_single_fs_bigclock_pane

0x16ed,	// (0x00035ca8) main_fs_bigclock_indicator_pane_t1

0x16fc,	// (0x00035cb7) list_single_fs_bigclock_pane_g1

0x1704,	// (0x00035cbf) list_single_fs_bigclock_pane_t1

0xe1fe,	// (0x000427b9) main_fs_bigclock_swipe_pane_g1

0x1747,	// (0x00035d02) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7d,	// (0x00044438) main_fs_bigclock_swipe_pane_g

0x174f,	// (0x00035d0a) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x174f,	// (0x00035d0a) main_fs_bigclock_swipe_pane_t1

0x6c40,	// (0x0003b1fb) call_type_pane_ParamLimits

0x1b96,	// (0x00036151) main_btmg_pane

0x4a67,	// (0x00039022) list_single_cale_mrui_row_pane_g2_ParamLimits

0x4a67,	// (0x00039022) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf0,	// (0x000443ab) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf0,	// (0x000443ab) list_single_cale_mrui_row_pane_g

0x1500,	// (0x00035abb) list_recal_vselct_arw_lo_pane

0x1508,	// (0x00035ac3) list_recal_vselct_arw_up_pane

0x1510,	// (0x00035acb) list_recal_vselct_pane

0xbff0,	// (0x000405ab) btmg_button_pane

0xbffc,	// (0x000405b7) main_btmg_pane_g1

0x1b96,	// (0x00036151) bg_button_pane_cp044

0x176c,	// (0x00035d27) btmg_button_pane_t1

0xddbe,	// (0x00042379) aid_listscroll_gen

0x238b,	// (0x00036946) main_cntbar_detail_pane

0x1094,	// (0x0003564f) list_cmail_folder_pane

0x10a4,	// (0x0003565f) sp_fs_scroll_pane_cp03_ParamLimits

0xea5a,	// (0x00043015) list_single_fs_dyc_pane_cp01_ParamLimits

0xea5a,	// (0x00043015) list_single_fs_dyc_pane_cp01

0x177a,	// (0x00035d35) aid_size_cmail_indent

0x4b89,	// (0x00039144) list_single_dyc_row_pane_cp01

0xc024,	// (0x000405df) cntbar_detail_list_pane_ParamLimits

0xc024,	// (0x000405df) cntbar_detail_list_pane

0xc064,	// (0x0004061f) main_cntbar_detail_cont_pane_ParamLimits

0xc064,	// (0x0004061f) main_cntbar_detail_cont_pane

0x6c34,	// (0x0003b1ef) scroll_pane_cp032_ParamLimits

0x6c34,	// (0x0003b1ef) scroll_pane_cp032

0xc070,	// (0x0004062b) cntbar_detail_list_event_pane_ParamLimits

0xc070,	// (0x0004062b) cntbar_detail_list_event_pane

0xc032,	// (0x000405ed) cntbar_detail_list_shct_pane

0x283c,	// (0x00036df7) aid_list_gen

0x178c,	// (0x00035d47) aid_scroll

0x1795,	// (0x00035d50) aid_size_touch_scroll_bar

0xc080,	// (0x0004063b) aid_list_double

0xc089,	// (0x00040644) aid_list_single

0x4b92,	// (0x0003914d) aid_list_single_lg

0x4b9b,	// (0x00039156) aid_list_z_g_a_sm

0x4ba3,	// (0x0003915e) aid_list_z_g_d

0x4bab,	// (0x00039166) aid_txt_z_prm

0x4bb9,	// (0x00039174) aid_txt_z_prm_cp01

0x4bc7,	// (0x00039182) aid_txt_z_sec

0xc092,	// (0x0004064d) main_cntbar_detail_cont_pane_g1_ParamLimits

0xc092,	// (0x0004064d) main_cntbar_detail_cont_pane_g1

0xc09f,	// (0x0004065a) main_cntbar_detail_cont_pane_g2_ParamLimits

0xc09f,	// (0x0004065a) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe82,	// (0x0004443d) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe82,	// (0x0004443d) main_cntbar_detail_cont_pane_g

0x17ae,	// (0x00035d69) main_cntbar_detail_cont_pane_t1

0x17bc,	// (0x00035d77) main_cntbar_detail_cont_pane_t2

0x17ca,	// (0x00035d85) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe87,	// (0x00044442) main_cntbar_detail_cont_pane_t

0xc0ab,	// (0x00040666) cell_cntbar_detail_list_shct_pane_ParamLimits

0xc0ab,	// (0x00040666) cell_cntbar_detail_list_shct_pane

0x17d8,	// (0x00035d93) cntbar_detail_list_shct_pane_g1

0x17e1,	// (0x00035d9c) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe8e,	// (0x00044449) cntbar_detail_list_shct_pane_g

0xc0bf,	// (0x0004067a) cntbar_detail_list_event_pane_g1_ParamLimits

0xc0bf,	// (0x0004067a) cntbar_detail_list_event_pane_g1

0xc0cb,	// (0x00040686) cntbar_detail_list_event_pane_g2_ParamLimits

0xc0cb,	// (0x00040686) cntbar_detail_list_event_pane_g2

0x0005,

0xfe93,	// (0x0004444e) cntbar_detail_list_event_pane_g_ParamLimits

0xfe93,	// (0x0004444e) cntbar_detail_list_event_pane_g

0xc139,	// (0x000406f4) cntbar_detail_list_event_pane_t1_ParamLimits

0xc139,	// (0x000406f4) cntbar_detail_list_event_pane_t1

0xc14e,	// (0x00040709) cntbar_detail_list_event_pane_t2_ParamLimits

0xc14e,	// (0x00040709) cntbar_detail_list_event_pane_t2

0x0002,

0xfea0,	// (0x0004445b) cntbar_detail_list_event_pane_t_ParamLimits

0xfea0,	// (0x0004445b) cntbar_detail_list_event_pane_t

0xe1fe,	// (0x000427b9) cell_cntbar_detail_list_shct_pane_g1

0x7013,	// (0x0003b5ce) navi_pane_mv_g3

0x238b,	// (0x00036946) main_cntbar_detail_pane_ParamLimits

0x1b96,	// (0x00036151) main_notif_wgt_pane

0x96a1,	// (0x0003dc5c) aid_tch_main_mp4_pane_g4

0x98e0,	// (0x0003de9b) popup_slider_window_cp02

0x14f6,	// (0x00035ab1) list_recal_day_event_pane

0xc004,	// (0x000405bf) cntbar_detail_btn_pane_ParamLimits

0xc004,	// (0x000405bf) cntbar_detail_btn_pane

0xc014,	// (0x000405cf) cntbar_detail_btn_pane_cp01_ParamLimits

0xc014,	// (0x000405cf) cntbar_detail_btn_pane_cp01

0xc032,	// (0x000405ed) cntbar_detail_list_shct_pane_ParamLimits

0xc03e,	// (0x000405f9) cntbar_detail_pane_g1_ParamLimits

0xc03e,	// (0x000405f9) cntbar_detail_pane_g1

0xc04e,	// (0x00040609) cntbar_detail_pane_t1_ParamLimits

0xc04e,	// (0x00040609) cntbar_detail_pane_t1

0xc0d7,	// (0x00040692) cntbar_detail_list_event_pane_g3_ParamLimits

0xc0d7,	// (0x00040692) cntbar_detail_list_event_pane_g3

0xc0ef,	// (0x000406aa) cntbar_detail_list_event_pane_g4_ParamLimits

0xc0ef,	// (0x000406aa) cntbar_detail_list_event_pane_g4

0xc107,	// (0x000406c2) cntbar_detail_list_event_pane_g5_ParamLimits

0xc107,	// (0x000406c2) cntbar_detail_list_event_pane_g5

0xc11f,	// (0x000406da) cntbar_detail_list_event_pane_g6_ParamLimits

0xc11f,	// (0x000406da) cntbar_detail_list_event_pane_g6

0xc163,	// (0x0004071e) cntbar_detail_list_event_pane_t3_ParamLimits

0xc163,	// (0x0004071e) cntbar_detail_list_event_pane_t3

0xc175,	// (0x00040730) popup_notif_wgt_window_ParamLimits

0xc175,	// (0x00040730) popup_notif_wgt_window

0xc185,	// (0x00040740) popup_submenu_window_cp01_ParamLimits

0xc185,	// (0x00040740) popup_submenu_window_cp01

0xc9bb,	// (0x00040f76) bg_popup_window_pane_cp10

0x17ea,	// (0x00035da5) listscroll_notif_wgt_pane

0x17fc,	// (0x00035db7) list_notif_wgt_window

0x1805,	// (0x00035dc0) scroll_pane_cp033

0xc195,	// (0x00040750) list_notif_wgt_row_pane_ParamLimits

0xc195,	// (0x00040750) list_notif_wgt_row_pane

0x180e,	// (0x00035dc9) aid_size_list_notif_wgt_del

0x181b,	// (0x00035dd6) list_notif_wgt_row_pane_g1

0x1827,	// (0x00035de2) list_notif_wgt_row_pane_g2

0x1833,	// (0x00035dee) list_notif_wgt_row_pane_g3

0x0002,

0xfea7,	// (0x00044462) list_notif_wgt_row_pane_g

0x1840,	// (0x00035dfb) list_notif_wgt_row_pane_t1

0x1855,	// (0x00035e10) list_notif_wgt_row_pane_t2

0x1867,	// (0x00035e22) list_notif_wgt_row_pane_t3

0x0002,

0xfeae,	// (0x00044469) list_notif_wgt_row_pane_t

0xee4e,	// (0x00043409) list_recal_day_event_pane_g1

0x1879,	// (0x00035e34) list_recal_day_event_pane_t1

0x1b96,	// (0x00036151) bg_button_pane_cp045

0x1888,	// (0x00035e43) cntbar_detail_btn_pane_t1

0xddc6,	// (0x00042381) main_callh_pane_ParamLimits

0xddc6,	// (0x00042381) main_callh_pane

0x1b96,	// (0x00036151) main_coverflow0_pane

0x1b96,	// (0x00036151) main_wgtman_pane

0xb862,	// (0x0003fe1d) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xb862,	// (0x0003fe1d) main_fs_bigclock_unlock_btn_pane

0x106e,	// (0x00035629) bg_button_pane_cp16

0x107e,	// (0x00035639) cell_tport_appsw_pane_g3

0xc1a9,	// (0x00040764) cf0_flow_pane_ParamLimits

0xc1a9,	// (0x00040764) cf0_flow_pane

0x1896,	// (0x00035e51) listscroll_cf0_pane

0x18a1,	// (0x00035e5c) main_cf0_pane_g1

0xc1b8,	// (0x00040773) main_cf0_pane_t1_ParamLimits

0xc1b8,	// (0x00040773) main_cf0_pane_t1

0xc1cc,	// (0x00040787) main_cf0_pane_t2_ParamLimits

0xc1cc,	// (0x00040787) main_cf0_pane_t2

0x0001,

0xfeb5,	// (0x00044470) main_cf0_pane_t_ParamLimits

0xfeb5,	// (0x00044470) main_cf0_pane_t

0x18ab,	// (0x00035e66) scroll_pane_cp11

0xc1e0,	// (0x0004079b) cf0_flow_pane_g1

0xc1e8,	// (0x000407a3) cf0_flow_pane_g2

0x0001,

0xfeba,	// (0x00044475) cf0_flow_pane_g

0xc1f0,	// (0x000407ab) cf0_flow_pane_t1

0x1b96,	// (0x00036151) main_call6_pane

0x1b96,	// (0x00036151) main_calllock_pane

0xc1fe,	// (0x000407b9) call6_btn_grp_pane_ParamLimits

0xc1fe,	// (0x000407b9) call6_btn_grp_pane

0xc20b,	// (0x000407c6) call6_pane_g1_ParamLimits

0xc20b,	// (0x000407c6) call6_pane_g1

0xc21b,	// (0x000407d6) popup_call6_1st_window_ParamLimits

0xc21b,	// (0x000407d6) popup_call6_1st_window

0xc229,	// (0x000407e4) popup_call6_2nd_window_ParamLimits

0xc229,	// (0x000407e4) popup_call6_2nd_window

0xc237,	// (0x000407f2) cell_call6_btn_pane_ParamLimits

0xc237,	// (0x000407f2) cell_call6_btn_pane

0xc9bb,	// (0x00040f76) bg_popup_call2_in_pane_cp03

0x18b6,	// (0x00035e71) popup_call6_1st_window_g1

0x18be,	// (0x00035e79) popup_call6_1st_window_g2

0x18c6,	// (0x00035e81) popup_call6_1st_window_g3

0x0002,

0xfebf,	// (0x0004447a) popup_call6_1st_window_g

0x18ce,	// (0x00035e89) popup_call6_1st_window_t1

0x18dd,	// (0x00035e98) popup_call6_1st_window_t2

0x18ed,	// (0x00035ea8) popup_call6_1st_window_t3

0x0002,

0xfec6,	// (0x00044481) popup_call6_1st_window_t

0xc9bb,	// (0x00040f76) bg_popup_call2_in_pane_cp04

0x18b6,	// (0x00035e71) popup_call6_2nd_window_g1

0x18be,	// (0x00035e79) popup_call6_2nd_window_g2

0x18c6,	// (0x00035e81) popup_call6_2nd_window_g3

0x0002,

0xfebf,	// (0x0004447a) popup_call6_2nd_window_g

0x18ce,	// (0x00035e89) popup_call6_2nd_window_t1

0x1b96,	// (0x00036151) bg_button_pane_cp15

0x18fd,	// (0x00035eb8) cell_call6_btn_pane_g1

0x1906,	// (0x00035ec1) cell_call6_btn_pane_t1

0xc246,	// (0x00040801) listscroll_wgtman_pane_ParamLimits

0xc246,	// (0x00040801) listscroll_wgtman_pane

0xc264,	// (0x0004081f) wgtman_btn_pane_ParamLimits

0xc264,	// (0x0004081f) wgtman_btn_pane

0xc881,	// (0x00040e3c) aid_scroll_copy1

0x1915,	// (0x00035ed0) list_wgtman_pane

0xc299,	// (0x00040854) wgtman_btn_pane_g1_ParamLimits

0xc299,	// (0x00040854) wgtman_btn_pane_g1

0xc2c1,	// (0x0004087c) wgtman_btn_pane_t1_ParamLimits

0xc2c1,	// (0x0004087c) wgtman_btn_pane_t1

0x191f,	// (0x00035eda) wgtman_btn_pane_t2_ParamLimits

0x191f,	// (0x00035eda) wgtman_btn_pane_t2

0x0001,

0xfecd,	// (0x00044488) wgtman_btn_pane_t_ParamLimits

0xfecd,	// (0x00044488) wgtman_btn_pane_t

0xc2f8,	// (0x000408b3) listrow_wgtman_pane_ParamLimits

0xc2f8,	// (0x000408b3) listrow_wgtman_pane

0xc309,	// (0x000408c4) listrow_wgtman_pane_g1

0xc316,	// (0x000408d1) listrow_wgtman_pane_g2

0x0001,

0xfed2,	// (0x0004448d) listrow_wgtman_pane_g

0x4bd5,	// (0x00039190) listrow_wgtman_pane_t1

0x4bed,	// (0x000391a8) listrow_wgtman_pane_t2

0x0001,

0xfed7,	// (0x00044492) listrow_wgtman_pane_t

0x4c13,	// (0x000391ce) wait_bar_pane_cp09

0x1936,	// (0x00035ef1) main_calllock_btn_pane

0x1940,	// (0x00035efb) main_calllock_pane_g1

0x1b96,	// (0x00036151) bg_button_pane_cp17

0x194c,	// (0x00035f07) main_calllock_btn_pane_g1

0x1955,	// (0x00035f10) main_calllock_btn_pane_t1

0x1b96,	// (0x00036151) main_dialer3_pane

0x1b96,	// (0x00036151) main_fmrd2_pane

0xe1fe,	// (0x000427b9) main_fs_bigclock_unlock_btn_pane_g1

0x196c,	// (0x00035f27) main_fs_bigclock_unlock_btn_pane_t1

0xc334,	// (0x000408ef) area_fmrd2_info_pane_ParamLimits

0xc334,	// (0x000408ef) area_fmrd2_info_pane

0xc340,	// (0x000408fb) area_fmrd2_visual_pane_ParamLimits

0xc340,	// (0x000408fb) area_fmrd2_visual_pane

0xc34e,	// (0x00040909) fmrd2_indi_pane_ParamLimits

0xc34e,	// (0x00040909) fmrd2_indi_pane

0xc35b,	// (0x00040916) area_fmrd2_visual_pane_g1

0xc363,	// (0x0004091e) area_fmrd2_visual_pane_t1

0xc373,	// (0x0004092e) area_fmrd2_visual_pane_t2

0xc383,	// (0x0004093e) area_fmrd2_visual_pane_t3

0x0002,

0xfee1,	// (0x0004449c) area_fmrd2_visual_pane_t

0xc393,	// (0x0004094e) area_fmrd2_info_pane_g1

0xc39b,	// (0x00040956) area_fmrd2_info_pane_t1

0xc3ab,	// (0x00040966) area_fmrd2_info_pane_t2

0xc3bb,	// (0x00040976) area_fmrd2_info_pane_t3

0xc3cb,	// (0x00040986) area_fmrd2_info_pane_t4

0x0003,

0xfee8,	// (0x000444a3) area_fmrd2_info_pane_t

0xc3db,	// (0x00040996) fmrd2_indi_pane_t1

0xc3eb,	// (0x000409a6) fmrd2_indi_pane_t2

0xc3fb,	// (0x000409b6) fmrd2_indi_pane_t3

0x0002,

0xfef1,	// (0x000444ac) fmrd2_indi_pane_t

0x0aba,	// (0x00035075) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x0aba,	// (0x00035075) list_single_fs_bigclock_indicator_pane_g5

0x0b63,	// (0x0003511e) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x0b63,	// (0x0003511e) list_single_fs_bigclock_indicator_pane_t5

0xbcea,	// (0x000402a5) aid_cell_bcale_month_pane_ParamLimits

0xbcea,	// (0x000402a5) aid_cell_bcale_month_pane

0xbcfa,	// (0x000402b5) bcale_month_pane_ParamLimits

0xbcfa,	// (0x000402b5) bcale_month_pane

0xbd0a,	// (0x000402c5) bcale_preview_pane_ParamLimits

0xbd0a,	// (0x000402c5) bcale_preview_pane

0x1704,	// (0x00035cbf) list_single_fs_bigclock_pane_t1_ParamLimits

0x1723,	// (0x00035cde) list_single_fs_bigclock_pane_t2_ParamLimits

0x1723,	// (0x00035cde) list_single_fs_bigclock_pane_t2

0x0001,

0xfe78,	// (0x00044433) list_single_fs_bigclock_pane_t_ParamLimits

0xfe78,	// (0x00044433) list_single_fs_bigclock_pane_t

0x1964,	// (0x00035f1f) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfedc,	// (0x00044497) main_fs_bigclock_unlock_btn_pane_g

0xc40b,	// (0x000409c6) aid_dia3_key_size_ParamLimits

0xc40b,	// (0x000409c6) aid_dia3_key_size

0xc417,	// (0x000409d2) aid_dia3_listrow_size_ParamLimits

0xc417,	// (0x000409d2) aid_dia3_listrow_size

0xc427,	// (0x000409e2) dia3_keypad_fun_pane_ParamLimits

0xc427,	// (0x000409e2) dia3_keypad_fun_pane

0xc437,	// (0x000409f2) dia3_keypad_num_pane_ParamLimits

0xc437,	// (0x000409f2) dia3_keypad_num_pane

0xc447,	// (0x00040a02) dia3_listscroll_pane_ParamLimits

0xc447,	// (0x00040a02) dia3_listscroll_pane

0xc455,	// (0x00040a10) dia3_numentry_pane_ParamLimits

0xc455,	// (0x00040a10) dia3_numentry_pane

0x197a,	// (0x00035f35) dia3_list_pane

0x1985,	// (0x00035f40) scroll_pane_cp12

0x1b96,	// (0x00036151) bg_dia3_numentry_pane

0xc463,	// (0x00040a1e) dia3_numentry_pane_t1

0xc472,	// (0x00040a2d) cell_dia3_key_num_pane

0xc47a,	// (0x00040a35) cell_dia3_key0_fun_pane_ParamLimits

0xc47a,	// (0x00040a35) cell_dia3_key0_fun_pane

0xc487,	// (0x00040a42) cell_dia3_key1_fun_pane_ParamLimits

0xc487,	// (0x00040a42) cell_dia3_key1_fun_pane

0xc494,	// (0x00040a4f) dia3_listrow_pane

0x07aa,	// (0x00034d65) bg_dia3_numentry_pane_g1

0x1b96,	// (0x00036151) bg_button_pane_cp21

0x1990,	// (0x00035f4b) cell_dia3_key_num_pane_t1

0x199e,	// (0x00035f59) cell_dia3_key_num_pane_t2

0x19ad,	// (0x00035f68) cell_dia3_key_num_pane_t3

0x19bc,	// (0x00035f77) cell_dia3_key_num_pane_t4

0x0003,

0xfef8,	// (0x000444b3) cell_dia3_key_num_pane_t

0x1b96,	// (0x00036151) bg_button_pane_cp19

0xc4a1,	// (0x00040a5c) cell_dia3_key0_fun_pane_g1

0x1b96,	// (0x00036151) bg_button_pane_cp20

0xc4a9,	// (0x00040a64) cell_dia3_key1_fun_pane_g1

0xc4b1,	// (0x00040a6c) area_left_week_number_pane

0xc4bb,	// (0x00040a76) area_top_day_name_pane

0xc4c7,	// (0x00040a82) frame_month_view_pane

0xc4d1,	// (0x00040a8c) grid_month_view_pane

0x19cb,	// (0x00035f86) cell_top_day_name_pane_ParamLimits

0x19cb,	// (0x00035f86) cell_top_day_name_pane

0xc4db,	// (0x00040a96) cell_area_left_week_number_pane_ParamLimits

0xc4db,	// (0x00040a96) cell_area_left_week_number_pane

0xc4ef,	// (0x00040aaa) cell_month_view_pane_ParamLimits

0xc4ef,	// (0x00040aaa) cell_month_view_pane

0x19e7,	// (0x00035fa2) frm_month_g1

0xc50e,	// (0x00040ac9) frm_month_g2

0xc518,	// (0x00040ad3) frm_month_g3

0xc522,	// (0x00040add) frm_month_g4

0xc52c,	// (0x00040ae7) frm_month_g5

0xc536,	// (0x00040af1) frm_month_g6

0xc540,	// (0x00040afb) frm_month_g7

0x19f0,	// (0x00035fab) frm_month_g8

0x19f9,	// (0x00035fb4) frm_month_g9

0x1a02,	// (0x00035fbd) frm_month_g10

0x1a0b,	// (0x00035fc6) frm_month_g11

0x1a14,	// (0x00035fcf) frm_month_g12

0x1a1d,	// (0x00035fd8) frm_month_g13

0x1a28,	// (0x00035fe3) frm_month_g14

0x1a33,	// (0x00035fee) frm_month_g15

0x1a3e,	// (0x00035ff9) frm_month_g16

0x000f,

0xff01,	// (0x000444bc) frm_month_g

0xc54a,	// (0x00040b05) cell_top_day_name_pane_t1

0xc559,	// (0x00040b14) cell_area_left_week_number_pane_g1

0xc561,	// (0x00040b1c) cell_area_left_week_number_pane_t1

0xe1fe,	// (0x000427b9) cell_month_view_pane_g1

0xc570,	// (0x00040b2b) cell_month_view_pane_t1

0x1b96,	// (0x00036151) main_fps_pane

0x0dbb,	// (0x00035376) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x0dbb,	// (0x00035376) cmail_ddmenu_btn02_pane_cp1

0x0dd7,	// (0x00035392) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x0dd7,	// (0x00035392) cmail_ddmenu_btn02_pane_cp2

0xbee8,	// (0x000404a3) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xbee8,	// (0x000404a3) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe2b,	// (0x000443e6) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe2b,	// (0x000443e6) cmail_ddmenu_btn02_pane_g

0xbf06,	// (0x000404c1) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xbf06,	// (0x000404c1) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe30,	// (0x000443eb) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe30,	// (0x000443eb) cmail_ddmenu_btn02_pane_t

0xc57f,	// (0x00040b3a) fps_text_pane_ParamLimits

0xc57f,	// (0x00040b3a) fps_text_pane

0xc58c,	// (0x00040b47) main_fps_pane_g1_ParamLimits

0xc58c,	// (0x00040b47) main_fps_pane_g1

0xc598,	// (0x00040b53) wait_bar_pane_cp010_ParamLimits

0xc598,	// (0x00040b53) wait_bar_pane_cp010

0xc5a4,	// (0x00040b5f) fps_text_pane_t1_ParamLimits

0xc5a4,	// (0x00040b5f) fps_text_pane_t1

0x9d06,	// (0x0003e2c1) cam4_image_uncrop_pane_g1

0x9d0f,	// (0x0003e2ca) cam4_image_uncrop_pane_g2

0x9d18,	// (0x0003e2d3) cam4_image_uncrop_pane_g3

0x9d21,	// (0x0003e2dc) cam4_image_uncrop_pane_g4

0x0003,

0xf8f9,	// (0x00043eb4) cam4_image_uncrop_pane_g

0xc494,	// (0x00040a4f) dia3_listrow_pane_ParamLimits

0x1b96,	// (0x00036151) main_phob2_pane

0xbb79,	// (0x00040134) cell_tport_appsw_pane_cp02_ParamLimits

0xbb79,	// (0x00040134) cell_tport_appsw_pane_cp02

0xbb88,	// (0x00040143) cell_tport_appsw_pane_cp03_ParamLimits

0xbb88,	// (0x00040143) cell_tport_appsw_pane_cp03

0x1b96,	// (0x00036151) phob2_contact_card_pane

0x1b96,	// (0x00036151) phob2_listscroll_pane

0x1a49,	// (0x00036004) phob2_list_pane

0x1a51,	// (0x0003600c) scroll_pane_cp034

0xc5bd,	// (0x00040b78) phob2_cc_data_pane_ParamLimits

0xc5bd,	// (0x00040b78) phob2_cc_data_pane

0xc5d9,	// (0x00040b94) phob2_cc_listscroll_pane_ParamLimits

0xc5d9,	// (0x00040b94) phob2_cc_listscroll_pane

0xc5f5,	// (0x00040bb0) list_double_large_graphic_phob2_pane_ParamLimits

0xc5f5,	// (0x00040bb0) list_double_large_graphic_phob2_pane

0xc60d,	// (0x00040bc8) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xc60d,	// (0x00040bc8) list_double_large_graphic_phob2_pane_g1

0x4c25,	// (0x000391e0) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x4c25,	// (0x000391e0) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff22,	// (0x000444dd) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff22,	// (0x000444dd) list_double_large_graphic_phob2_pane_g

0x4c31,	// (0x000391ec) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x4c31,	// (0x000391ec) list_double_large_graphic_phob2_pane_t1

0x4c46,	// (0x00039201) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x4c46,	// (0x00039201) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff27,	// (0x000444e2) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff27,	// (0x000444e2) list_double_large_graphic_phob2_pane_t

0x1b96,	// (0x00036151) list_highlight_pane_cp024

0x1a59,	// (0x00036014) phob2_cc_button_pane

0xc61a,	// (0x00040bd5) phob2_cc_data_pane_g1_ParamLimits

0xc61a,	// (0x00040bd5) phob2_cc_data_pane_g1

0xc626,	// (0x00040be1) phob2_cc_data_pane_g2_ParamLimits

0xc626,	// (0x00040be1) phob2_cc_data_pane_g2

0x0001,

0xff2c,	// (0x000444e7) phob2_cc_data_pane_g_ParamLimits

0xff2c,	// (0x000444e7) phob2_cc_data_pane_g

0xc632,	// (0x00040bed) phob2_cc_data_pane_t1_ParamLimits

0xc632,	// (0x00040bed) phob2_cc_data_pane_t1

0xc644,	// (0x00040bff) phob2_cc_data_pane_t2_ParamLimits

0xc644,	// (0x00040bff) phob2_cc_data_pane_t2

0xc656,	// (0x00040c11) phob2_cc_data_pane_t3_ParamLimits

0xc656,	// (0x00040c11) phob2_cc_data_pane_t3

0x0002,

0xff31,	// (0x000444ec) phob2_cc_data_pane_t_ParamLimits

0xff31,	// (0x000444ec) phob2_cc_data_pane_t

0x1a61,	// (0x0003601c) phob2_cc_list_pane_ParamLimits

0x1a61,	// (0x0003601c) phob2_cc_list_pane

0xef06,	// (0x000434c1) scroll_pane_cp035_ParamLimits

0xef06,	// (0x000434c1) scroll_pane_cp035

0x238b,	// (0x00036946) bg_button_pane_cp033

0x1a6d,	// (0x00036028) phob2_cc_button_pane_g1

0x1a79,	// (0x00036034) phob2_cc_button_pane_t1

0x1a8e,	// (0x00036049) phob2_cc_button_pane_t2

0x0001,

0xff38,	// (0x000444f3) phob2_cc_button_pane_t

0xc668,	// (0x00040c23) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xc668,	// (0x00040c23) list_double_large_graphic_phob2_cc_pane

0xc684,	// (0x00040c3f) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xc684,	// (0x00040c3f) list_double_large_graphic_phob2_cc_pane_g1

0x4c58,	// (0x00039213) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x4c58,	// (0x00039213) list_double_large_graphic_phob2_cc_pane_g2

0x4c67,	// (0x00039222) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x4c67,	// (0x00039222) list_double_large_graphic_phob2_cc_pane_g3

0x4c76,	// (0x00039231) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x4c76,	// (0x00039231) list_double_large_graphic_phob2_cc_pane_g4

0x4c87,	// (0x00039242) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x4c87,	// (0x00039242) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff3d,	// (0x000444f8) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff3d,	// (0x000444f8) list_double_large_graphic_phob2_cc_pane_g

0x4c96,	// (0x00039251) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x4c96,	// (0x00039251) list_double_large_graphic_phob2_cc_pane_t1

0x4cbf,	// (0x0003927a) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x4cbf,	// (0x0003927a) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff48,	// (0x00044503) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff48,	// (0x00044503) list_double_large_graphic_phob2_cc_pane_t

0x1aa0,	// (0x0003605b) list_highlight_pane_cp025_ParamLimits

0x1aa0,	// (0x0003605b) list_highlight_pane_cp025

0x238b,	// (0x00036946) bg_button_pane_cp033_ParamLimits

0x1a6d,	// (0x00036028) phob2_cc_button_pane_g1_ParamLimits

0x1a79,	// (0x00036034) phob2_cc_button_pane_t1_ParamLimits

0x1a8e,	// (0x00036049) phob2_cc_button_pane_t2_ParamLimits

0xff38,	// (0x000444f3) phob2_cc_button_pane_t_ParamLimits

0x4fb9,	// (0x00039574) popup_wgtman_window

0xed3a,	// (0x000432f5) scroll_pane_cp038

0xc281,	// (0x0004083c) wgtman_btn_pane_cp_01_ParamLimits

0xc281,	// (0x0004083c) wgtman_btn_pane_cp_01

0x1aae,	// (0x00036069) wgtman_content_pane

0x1ab7,	// (0x00036072) wgtman_heading_pane

0x1b96,	// (0x00036151) bg_heading_pane_cp02

0x1ac0,	// (0x0003607b) wgtman_heading_pane_g1

0x1ac8,	// (0x00036083) wgtman_heading_pane_t1

0x1ad6,	// (0x00036091) scroll_pane_cp036

0x1ade,	// (0x00036099) wgtman_list_pane

0x0c4e,	// (0x00035209) wgtman_list_pane_t1_ParamLimits

0x0c4e,	// (0x00035209) wgtman_list_pane_t1

0x9c63,	// (0x0003e21e) cam4_grid_pane

0x3fb3,	// (0x0003856e) bg_button_pane_cp015_ParamLimits

0xa900,	// (0x0003eebb) bg_button_pane_cp016_ParamLimits

0xa913,	// (0x0003eece) bg_button_pane_cp017_ParamLimits

0x3ff7,	// (0x000385b2) popup_vitu2_query_window_g3_ParamLimits

0x3ff7,	// (0x000385b2) popup_vitu2_query_window_g3

0x4070,	// (0x0003862b) popup_vitu2_query_window_t6_ParamLimits

0x4070,	// (0x0003862b) popup_vitu2_query_window_t6

0x409b,	// (0x00038656) popup_vitu2_query_window_t7_ParamLimits

0x409b,	// (0x00038656) popup_vitu2_query_window_t7

0xebdc,	// (0x00043197) cam4_grid_pane_g1

0xebe5,	// (0x000431a0) cam4_grid_pane_g2

0x1ae6,	// (0x000360a1) cam4_grid_pane_g3

0x1aef,	// (0x000360aa) cam4_grid_pane_g4

0x0003,

0xff4d,	// (0x00044508) cam4_grid_pane_g

0x5cde,	// (0x0003a299) aid_placing_vt_slider_lsc_ParamLimits

0x6011,	// (0x0003a5cc) vidtel_button_pane_ParamLimits

0x6011,	// (0x0003a5cc) vidtel_button_pane

0x1afa,	// (0x000360b5) bg_button_pane_cp034

0xc695,	// (0x00040c50) vidtel_button_pane_g1

0x1b04,	// (0x000360bf) vidtel_button_pane_t1

0xee3e,	// (0x000433f9) aid_size_vtel_slider_touch

0xef06,	// (0x000434c1) scroll_pane_cp039

0x07e8,	// (0x00034da3) ncim_query_button_pane_cp01_ParamLimits

0x0807,	// (0x00034dc2) ncimui_query_pane_g1_ParamLimits

0x238b,	// (0x00036946) input_focus_pane_cp012_ParamLimits

0x082c,	// (0x00034de7) ncim_query_entry_pane_t1_ParamLimits

0xef06,	// (0x000434c1) scroll_pane_cp039_ParamLimits

0x6f85,	// (0x0003b540) navi_pane_bcale_mc_g1

0x6f8d,	// (0x0003b548) navi_pane_bcale_mc_t1

0x0e22,	// (0x000353dd) main_sp_fs_email_pane_g1

0x0e2a,	// (0x000353e5) main_sp_fs_email_pane_g2

0x0001,

0xfce9,	// (0x000442a4) main_sp_fs_email_pane_g

0x13ad,	// (0x00035968) list_single_cale_mrui_row_pane_g3_ParamLimits

0x13ad,	// (0x00035968) list_single_cale_mrui_row_pane_g3

0xbf2e,	// (0x000404e9) list_single_recal_day_pane_g5_event_pane

0x1572,	// (0x00035b2d) list_single_recal_day_pane_g7

0x1b12,	// (0x000360cd) list_recal_day_event_pane_cp01

0x1b1b,	// (0x000360d6) list_recal_vselct_arw_lo_pane_cp01

0x1b23,	// (0x000360de) list_recal_vselct_arw_up_pane_cp01

0x1b2b,	// (0x000360e6) list_recal_vselct_pane_cp01

0xee4e,	// (0x00043409) list_recal_day_event_pane_cp01_g1

0x1b35,	// (0x000360f0) list_recal_day_event_pane_cp01_t1

0x157a,	// (0x00035b35) list_single_recal_day_pane_t1_ParamLimits

0x158c,	// (0x00035b47) list_single_recal_day_pane_t2_ParamLimits

0xfe40,	// (0x000443fb) list_single_recal_day_pane_t_ParamLimits

0x22e6,	// (0x000368a1) bg_notes_pane_ParamLimits

0x22f4,	// (0x000368af) list_notes_pane_ParamLimits

0x52c9,	// (0x00039884) scroll_pane_cp06_ParamLimits

0x2316,	// (0x000368d1) main_notes_pane_ParamLimits

0x1b96,	// (0x00036151) main_welc_pane

0xc69d,	// (0x00040c58) main_welc_body_pane_ParamLimits

0xc69d,	// (0x00040c58) main_welc_body_pane

0xc6b8,	// (0x00040c73) main_welc_opti_pane_ParamLimits

0xc6b8,	// (0x00040c73) main_welc_opti_pane

0xc6eb,	// (0x00040ca6) main_welc_pane_t1_ParamLimits

0xc6eb,	// (0x00040ca6) main_welc_pane_t1

0xbd1b,	// (0x000402d6) main_welc_body_row_pane_ParamLimits

0xbd1b,	// (0x000402d6) main_welc_body_row_pane

0xc709,	// (0x00040cc4) main_welc_opti_row_pane_ParamLimits

0xc709,	// (0x00040cc4) main_welc_opti_row_pane

0x1b5a,	// (0x00036115) main_welc_opti_row_pane_g1

0x1b62,	// (0x0003611d) main_welc_opti_row_pane_t1

0x1b71,	// (0x0003612c) main_welc_body_row_pane_t1

0x17f4,	// (0x00035daf) popup_notif_wgt_heading_pane

0x180e,	// (0x00035dc9) aid_size_list_notif_wgt_del_ParamLimits

0x181b,	// (0x00035dd6) list_notif_wgt_row_pane_g1_ParamLimits

0x1827,	// (0x00035de2) list_notif_wgt_row_pane_g2_ParamLimits

0x1833,	// (0x00035dee) list_notif_wgt_row_pane_g3_ParamLimits

0xfea7,	// (0x00044462) list_notif_wgt_row_pane_g_ParamLimits

0x1840,	// (0x00035dfb) list_notif_wgt_row_pane_t1_ParamLimits

0x1855,	// (0x00035e10) list_notif_wgt_row_pane_t2_ParamLimits

0x1867,	// (0x00035e22) list_notif_wgt_row_pane_t3_ParamLimits

0xfeae,	// (0x00044469) list_notif_wgt_row_pane_t_ParamLimits

0xc309,	// (0x000408c4) listrow_wgtman_pane_g1_ParamLimits

0xc316,	// (0x000408d1) listrow_wgtman_pane_g2_ParamLimits

0xfed2,	// (0x0004448d) listrow_wgtman_pane_g_ParamLimits

0x4bd5,	// (0x00039190) listrow_wgtman_pane_t1_ParamLimits

0x4bed,	// (0x000391a8) listrow_wgtman_pane_t2_ParamLimits

0xfed7,	// (0x00044492) listrow_wgtman_pane_t_ParamLimits

0x4c13,	// (0x000391ce) wait_bar_pane_cp09_ParamLimits

0x1b96,	// (0x00036151) bg_popup_heading_pane_cp02

0x1b80,	// (0x0003613b) popup_notif_wgt_heading_pane_g1

0x1b88,	// (0x00036143) popup_notif_wgt_heading_pane_t1

0x1b96,	// (0x00036151) main_vids_pane

0x1b96,	// (0x00036151) vids_listscroll_pane

0xc71a,	// (0x00040cd5) scroll_pane_cp040

0x1b96,	// (0x00036151) vids_list_pane

0xc725,	// (0x00040ce0) vids_list_double_pane_ParamLimits

0xc725,	// (0x00040ce0) vids_list_double_pane

0xc738,	// (0x00040cf3) vids_list_double_pane_g1

0xc741,	// (0x00040cfc) vids_list_double_pane_t1

0xc751,	// (0x00040d0c) vids_list_double_pane_t2

0x0001,

0xff5b,	// (0x00044516) vids_list_double_pane_t

0x238b,	// (0x00036946) main_ncimui_pane_ParamLimits

0xb41a,	// (0x0003f9d5) main_ncimui_pane_g1_ParamLimits

0xb428,	// (0x0003f9e3) main_ncimui_pane_g2_ParamLimits

0xb428,	// (0x0003f9e3) main_ncimui_pane_g2

0x0001,

0xfbee,	// (0x000441a9) main_ncimui_pane_g_ParamLimits

0xfbee,	// (0x000441a9) main_ncimui_pane_g

0xc6d3,	// (0x00040c8e) main_welc_pane_g1_ParamLimits

0xc6d3,	// (0x00040c8e) main_welc_pane_g1

0xc6df,	// (0x00040c9a) main_welc_pane_g2_ParamLimits

0xc6df,	// (0x00040c9a) main_welc_pane_g2

0x0001,

0xff56,	// (0x00044511) main_welc_pane_g_ParamLimits

0xff56,	// (0x00044511) main_welc_pane_g
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

} // end of namespace AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch_Small

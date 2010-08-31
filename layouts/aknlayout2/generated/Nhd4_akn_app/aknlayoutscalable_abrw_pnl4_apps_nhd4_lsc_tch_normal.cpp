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

#include "aknlayoutscalable_abrw_pnl4_apps_nhd4_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnl4_apps_nhd4_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x00025d3f };

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
0x1f9f,	// (0x00027cde) Screen

0x1fab,	// (0x00027cea) application_window

0x2015,	// (0x00027d54) area_bottom_pane_ParamLimits

0x2015,	// (0x00027d54) area_bottom_pane

0x2072,	// (0x00027db1) area_top_pane_ParamLimits

0x2072,	// (0x00027db1) area_top_pane

0x20cf,	// (0x00027e0e) call_video_uplink_pane_ParamLimits

0x20cf,	// (0x00027e0e) call_video_uplink_pane

0x20fb,	// (0x00027e3a) main_pane_ParamLimits

0x20fb,	// (0x00027e3a) main_pane

0xbdf7,	// (0x00031b36) context_pane

0x6b85,	// (0x0002c8c4) navi_pane

0x6bad,	// (0x0002c8ec) popup_cale_events_window_ParamLimits

0x6bad,	// (0x0002c8ec) popup_cale_events_window

0xbe0a,	// (0x00031b49) popup_mup_playback_window

0x6bc5,	// (0x0002c904) signal_pane

0x2c37,	// (0x00028976) main_browser_pane

0x51d5,	// (0x0002af14) main_burst_pane

0x68e5,	// (0x0002c624) main_calc_pane

0x51d5,	// (0x0002af14) main_cale_day_pane

0x2c37,	// (0x00028976) main_cale_month_pane

0x51d5,	// (0x0002af14) main_cale_week_pane

0x51d5,	// (0x0002af14) main_call_pane

0x26ff,	// (0x0002843e) main_call_poc_pane

0x51d5,	// (0x0002af14) main_camera_pane

0x51d5,	// (0x0002af14) main_chi_dic_pane

0x4d46,	// (0x0002aa85) main_clock_pane

0x26ff,	// (0x0002843e) main_fmradio_pane

0x51d5,	// (0x0002af14) main_graph_messa_pane

0x26ff,	// (0x0002843e) main_help_pane

0x2c37,	// (0x00028976) main_im_pane

0x295a,	// (0x00028699) main_image_pane_ParamLimits

0x295a,	// (0x00028699) main_image_pane

0x26ff,	// (0x0002843e) main_location2_pane

0x51d5,	// (0x0002af14) main_location_pane

0x26ff,	// (0x0002843e) main_messa_pane

0x26ff,	// (0x0002843e) main_mp2_pane

0x51d5,	// (0x0002af14) main_mp_pane

0x26ff,	// (0x0002843e) main_msg_pane

0x26ff,	// (0x0002843e) main_mup_eq_pane

0x26ff,	// (0x0002843e) main_mup_pane

0x51d5,	// (0x0002af14) main_notes_pane

0x26ff,	// (0x0002843e) main_pec_pane

0x26ff,	// (0x0002843e) main_phob_pane

0x26ff,	// (0x0002843e) main_pinb_pane

0x26ff,	// (0x0002843e) main_postcard_pane

0x26ff,	// (0x0002843e) main_qdial_pane

0x51d5,	// (0x0002af14) main_skin_pane

0x26ff,	// (0x0002843e) main_smil2_pane

0x51d5,	// (0x0002af14) main_smil_pane

0x51d5,	// (0x0002af14) main_video_pane

0x51d5,	// (0x0002af14) main_video_tele_pane

0x295a,	// (0x00028699) main_viewer_pane_ParamLimits

0x295a,	// (0x00028699) main_viewer_pane

0x51d5,	// (0x0002af14) main_vorec_pane

0x6939,	// (0x0002c678) popup_blid_sat_info_window_ParamLimits

0x6939,	// (0x0002c678) popup_blid_sat_info_window

0x6991,	// (0x0002c6d0) popup_dyc_status_message_window_ParamLimits

0x6991,	// (0x0002c6d0) popup_dyc_status_message_window

0x69a9,	// (0x0002c6e8) popup_grid_large_graphic_window_ParamLimits

0x69a9,	// (0x0002c6e8) popup_grid_large_graphic_window

0x6a5f,	// (0x0002c79e) popup_loc_request_window_ParamLimits

0x6a5f,	// (0x0002c79e) popup_loc_request_window

0x6b5d,	// (0x0002c89c) popup_wml_address_window_ParamLimits

0x6b5d,	// (0x0002c89c) popup_wml_address_window

0x671f,	// (0x0002c45e) call_muted_g1

0x5f46,	// (0x0002bc85) popup_call_audio_conf_window_ParamLimits

0x5f46,	// (0x0002bc85) popup_call_audio_conf_window

0x6733,	// (0x0002c472) popup_call_audio_first_window_ParamLimits

0x6733,	// (0x0002c472) popup_call_audio_first_window

0x67a9,	// (0x0002c4e8) popup_call_audio_in_window_ParamLimits

0x67a9,	// (0x0002c4e8) popup_call_audio_in_window

0x67e5,	// (0x0002c524) popup_call_audio_out_window_ParamLimits

0x67e5,	// (0x0002c524) popup_call_audio_out_window

0x681f,	// (0x0002c55e) popup_call_audio_second_window_ParamLimits

0x681f,	// (0x0002c55e) popup_call_audio_second_window

0x6875,	// (0x0002c5b4) popup_call_audio_wait_window_ParamLimits

0x6875,	// (0x0002c5b4) popup_call_audio_wait_window

0x68aa,	// (0x0002c5e9) popup_number_entry_window_ParamLimits

0x68aa,	// (0x0002c5e9) popup_number_entry_window

0x2295,	// (0x00027fd4) bg_popup_call_pane_cp05_ParamLimits

0x2295,	// (0x00027fd4) bg_popup_call_pane_cp05

0x22b5,	// (0x00027ff4) popup_number_entry_window_t1

0x22c8,	// (0x00028007) popup_number_entry_window_t2

0x22da,	// (0x00028019) popup_number_entry_window_t3

0x0003,

0xf0ec,	// (0x00034e2b) popup_number_entry_window_t

0x2321,	// (0x00028060) text_title_cp2

0x2334,	// (0x00028073) bg_popup_call_pane_cp_ParamLimits

0x2334,	// (0x00028073) bg_popup_call_pane_cp

0x2342,	// (0x00028081) call_thumbnail_pane

0x234a,	// (0x00028089) popup_call_audio_in_window_g1_ParamLimits

0x234a,	// (0x00028089) popup_call_audio_in_window_g1

0x2356,	// (0x00028095) popup_call_audio_in_window_g2_ParamLimits

0x2356,	// (0x00028095) popup_call_audio_in_window_g2

0x2362,	// (0x000280a1) popup_call_audio_in_window_g3_ParamLimits

0x2362,	// (0x000280a1) popup_call_audio_in_window_g3

0x0002,

0xf0f5,	// (0x00034e34) popup_call_audio_in_window_g_ParamLimits

0xf0f5,	// (0x00034e34) popup_call_audio_in_window_g

0x236e,	// (0x000280ad) popup_call_audio_in_window_t1_ParamLimits

0x236e,	// (0x000280ad) popup_call_audio_in_window_t1

0x2389,	// (0x000280c8) popup_call_audio_in_window_t2_ParamLimits

0x2389,	// (0x000280c8) popup_call_audio_in_window_t2

0x23a4,	// (0x000280e3) popup_call_audio_in_window_t3_ParamLimits

0x23a4,	// (0x000280e3) popup_call_audio_in_window_t3

0x0002,

0xf0fc,	// (0x00034e3b) popup_call_audio_in_window_t_ParamLimits

0xf0fc,	// (0x00034e3b) popup_call_audio_in_window_t

0x2334,	// (0x00028073) bg_popup_call_pane_cp01_ParamLimits

0x2334,	// (0x00028073) bg_popup_call_pane_cp01

0x2342,	// (0x00028081) call_thumbnail_pane_cp02

0x23b7,	// (0x000280f6) call_type_pane_cp022

0x23bf,	// (0x000280fe) popup_call_audio_out_window_g1_ParamLimits

0x23bf,	// (0x000280fe) popup_call_audio_out_window_g1

0x23d1,	// (0x00028110) popup_call_audio_out_window_g2_ParamLimits

0x23d1,	// (0x00028110) popup_call_audio_out_window_g2

0x23dd,	// (0x0002811c) popup_call_audio_out_window_g3_ParamLimits

0x23dd,	// (0x0002811c) popup_call_audio_out_window_g3

0x0002,

0xf103,	// (0x00034e42) popup_call_audio_out_window_g_ParamLimits

0xf103,	// (0x00034e42) popup_call_audio_out_window_g

0x23ef,	// (0x0002812e) popup_call_audio_out_window_t1_ParamLimits

0x23ef,	// (0x0002812e) popup_call_audio_out_window_t1

0x2407,	// (0x00028146) popup_call_audio_out_window_t2_ParamLimits

0x2407,	// (0x00028146) popup_call_audio_out_window_t2

0x0001,

0xf10a,	// (0x00034e49) popup_call_audio_out_window_t_ParamLimits

0xf10a,	// (0x00034e49) popup_call_audio_out_window_t

0x241c,	// (0x0002815b) bg_popup_call_pane_ParamLimits

0x241c,	// (0x0002815b) bg_popup_call_pane

0x24a0,	// (0x000281df) call_thumbnail_pane_cp_ParamLimits

0x24a0,	// (0x000281df) call_thumbnail_pane_cp

0x24c4,	// (0x00028203) call_type_pane_cp01_ParamLimits

0x24c4,	// (0x00028203) call_type_pane_cp01

0x2508,	// (0x00028247) popup_call_audio_first_window_g1_ParamLimits

0x2508,	// (0x00028247) popup_call_audio_first_window_g1

0x2554,	// (0x00028293) popup_call_audio_first_window_g2_ParamLimits

0x2554,	// (0x00028293) popup_call_audio_first_window_g2

0x0001,

0xf10f,	// (0x00034e4e) popup_call_audio_first_window_g_ParamLimits

0xf10f,	// (0x00034e4e) popup_call_audio_first_window_g

0x2598,	// (0x000282d7) popup_call_audio_first_window_t1_ParamLimits

0x2598,	// (0x000282d7) popup_call_audio_first_window_t1

0x2644,	// (0x00028383) popup_call_audio_first_window_t4_ParamLimits

0x2644,	// (0x00028383) popup_call_audio_first_window_t4

0x26d0,	// (0x0002840f) popup_call_audio_first_window_t5_ParamLimits

0x26d0,	// (0x0002840f) popup_call_audio_first_window_t5

0x0002,

0xf114,	// (0x00034e53) popup_call_audio_first_window_t_ParamLimits

0xf114,	// (0x00034e53) popup_call_audio_first_window_t

0x26ff,	// (0x0002843e) bg_popup_call_pane_cp02

0x2709,	// (0x00028448) call_type_pane_cp023

0x2711,	// (0x00028450) popup_call_audio_wait_window_g1

0x2719,	// (0x00028458) popup_call_audio_wait_window_g2

0x0001,

0xf11b,	// (0x00034e5a) popup_call_audio_wait_window_g

0x2721,	// (0x00028460) popup_call_audio_wait_window_t3

0x272f,	// (0x0002846e) bg_popup_call_pane_cp03_ParamLimits

0x272f,	// (0x0002846e) bg_popup_call_pane_cp03

0x278f,	// (0x000284ce) call_thumbnail_pane_cp011_ParamLimits

0x278f,	// (0x000284ce) call_thumbnail_pane_cp011

0x279b,	// (0x000284da) call_type_pane_cp034_ParamLimits

0x279b,	// (0x000284da) call_type_pane_cp034

0x27d7,	// (0x00028516) popup_call_audio_second_window_g1_ParamLimits

0x27d7,	// (0x00028516) popup_call_audio_second_window_g1

0x2813,	// (0x00028552) popup_call_audio_second_window_g2_ParamLimits

0x2813,	// (0x00028552) popup_call_audio_second_window_g2

0x0001,

0xf120,	// (0x00034e5f) popup_call_audio_second_window_g_ParamLimits

0xf120,	// (0x00034e5f) popup_call_audio_second_window_g

0x284f,	// (0x0002858e) popup_call_audio_second_window_t1_ParamLimits

0x284f,	// (0x0002858e) popup_call_audio_second_window_t1

0x28d0,	// (0x0002860f) popup_call_audio_second_window_t2_ParamLimits

0x28d0,	// (0x0002860f) popup_call_audio_second_window_t2

0x2906,	// (0x00028645) popup_call_audio_second_window_t3_ParamLimits

0x2906,	// (0x00028645) popup_call_audio_second_window_t3

0x0002,

0xf125,	// (0x00034e64) popup_call_audio_second_window_t_ParamLimits

0xf125,	// (0x00034e64) popup_call_audio_second_window_t

0x26ff,	// (0x0002843e) bg_popup_call_pane_cp04

0x293c,	// (0x0002867b) list_conf_pane

0x2944,	// (0x00028683) popup_call_audio_conf_window_t1

0x2952,	// (0x00028691) call_thumbnail_pane_g1

0x295a,	// (0x00028699) bg_pinb_pane_ParamLimits

0x295a,	// (0x00028699) bg_pinb_pane

0x2968,	// (0x000286a7) find_pinb_pane

0x2971,	// (0x000286b0) listscroll_pinb_pane_ParamLimits

0x2971,	// (0x000286b0) listscroll_pinb_pane

0x2980,	// (0x000286bf) pinb_bg_pane_g1

0x298a,	// (0x000286c9) pinb_bg_pane_g2

0x2996,	// (0x000286d5) pinb_bg_pane_g3

0x29a2,	// (0x000286e1) pinb_bg_pane_g4

0x29ae,	// (0x000286ed) pinb_bg_pane_g5

0x29ba,	// (0x000286f9) pinb_bg_pane_g6

0x29c5,	// (0x00028704) pinb_bg_pane_g7

0x29d0,	// (0x0002870f) pinb_bg_pane_g8

0x29db,	// (0x0002871a) pinb_bg_pane_g9

0x29e5,	// (0x00028724) pinb_bg_pane_g10

0x0009,

0xf12c,	// (0x00034e6b) pinb_bg_pane_g

0x2a02,	// (0x00028741) grid_pinb_pane

0x2a0b,	// (0x0002874a) list_pinb_pane

0x2a14,	// (0x00028753) scroll_pane_cp01_ParamLimits

0x2a14,	// (0x00028753) scroll_pane_cp01

0x2a26,	// (0x00028765) find_pinb_pane_g1_ParamLimits

0x2a26,	// (0x00028765) find_pinb_pane_g1

0x2a3e,	// (0x0002877d) find_pinb_pane_t1

0x2a50,	// (0x0002878f) find_pinb_pane_t2

0x0001,

0xf146,	// (0x00034e85) find_pinb_pane_t

0x2a65,	// (0x000287a4) input_focus_pane_cp01_ParamLimits

0x2a65,	// (0x000287a4) input_focus_pane_cp01

0x2a71,	// (0x000287b0) cell_pinb_pane_ParamLimits

0x2a71,	// (0x000287b0) cell_pinb_pane

0x2aa3,	// (0x000287e2) cell_pinb_pane_g1_ParamLimits

0x2aa3,	// (0x000287e2) cell_pinb_pane_g1

0x2ab3,	// (0x000287f2) cell_pinb_pane_g2_ParamLimits

0x2ab3,	// (0x000287f2) cell_pinb_pane_g2

0x2abf,	// (0x000287fe) cell_pinb_pane_g3_ParamLimits

0x2abf,	// (0x000287fe) cell_pinb_pane_g3

0x0002,

0xf14b,	// (0x00034e8a) cell_pinb_pane_g_ParamLimits

0xf14b,	// (0x00034e8a) cell_pinb_pane_g

0x26ff,	// (0x0002843e) grid_highlight_pane_cp01

0x2acb,	// (0x0002880a) list_pinb_item_pane_ParamLimits

0x2acb,	// (0x0002880a) list_pinb_item_pane

0x26ff,	// (0x0002843e) list_highlight_pane_cp02

0x2adf,	// (0x0002881e) list_pinb_item_pane_g1_ParamLimits

0x2adf,	// (0x0002881e) list_pinb_item_pane_g1

0x2aec,	// (0x0002882b) list_pinb_item_pane_g2_ParamLimits

0x2aec,	// (0x0002882b) list_pinb_item_pane_g2

0x2af8,	// (0x00028837) list_pinb_item_pane_g3_ParamLimits

0x2af8,	// (0x00028837) list_pinb_item_pane_g3

0x2b09,	// (0x00028848) list_pinb_item_pane_g4_ParamLimits

0x2b09,	// (0x00028848) list_pinb_item_pane_g4

0x0003,

0xf152,	// (0x00034e91) list_pinb_item_pane_g_ParamLimits

0xf152,	// (0x00034e91) list_pinb_item_pane_g

0x2b15,	// (0x00028854) list_pinb_item_pane_t1_ParamLimits

0x2b15,	// (0x00028854) list_pinb_item_pane_t1

0x0d86,	// (0x00026ac5) calc_display_pane

0x0dae,	// (0x00026aed) calc_paper_pane

0x0dd1,	// (0x00026b10) grid_calc_pane

0x26ff,	// (0x0002843e) bg_list_pane_cp01

0x2b2c,	// (0x0002886b) clock_g1

0x2b34,	// (0x00028873) clock_g2

0x0001,

0xf15b,	// (0x00034e9a) clock_g

0x2b3c,	// (0x0002887b) clock_t1_ParamLimits

0x2b3c,	// (0x0002887b) clock_t1

0x2b51,	// (0x00028890) clock_t2_ParamLimits

0x2b51,	// (0x00028890) clock_t2

0x2b63,	// (0x000288a2) clock_t3_ParamLimits

0x2b63,	// (0x000288a2) clock_t3

0x2b75,	// (0x000288b4) clock_t4_ParamLimits

0x2b75,	// (0x000288b4) clock_t4

0x2b87,	// (0x000288c6) clock_t5_ParamLimits

0x2b87,	// (0x000288c6) clock_t5

0x2b9c,	// (0x000288db) clock_t6_ParamLimits

0x2b9c,	// (0x000288db) clock_t6

0x2bae,	// (0x000288ed) clock_t7_ParamLimits

0x2bae,	// (0x000288ed) clock_t7

0x2bc0,	// (0x000288ff) clock_t8_ParamLimits

0x2bc0,	// (0x000288ff) clock_t8

0x2bd4,	// (0x00028913) clock_t9_ParamLimits

0x2bd4,	// (0x00028913) clock_t9

0x0008,

0xf160,	// (0x00034e9f) clock_t_ParamLimits

0xf160,	// (0x00034e9f) clock_t

0x2be8,	// (0x00028927) popup_clock_analogue_window_cp02

0x2be8,	// (0x00028927) popup_clock_digital_window_cp01

0x2bf0,	// (0x0002892f) listscroll_help_pane

0x26ff,	// (0x0002843e) phob_pre_status_pane

0x2bfa,	// (0x00028939) grid_qdial_pane

0x26ff,	// (0x0002843e) listscroll_mce_pane

0x2c04,	// (0x00028943) bg_notes_pane

0x2c0e,	// (0x0002894d) list_notes_pane

0x2c18,	// (0x00028957) scroll_pane_cp06

0x2c23,	// (0x00028962) bg_calc_paper_pane

0xb08f,	// (0x00030dce) list_calc_pane

0x2c37,	// (0x00028976) bg_calc_display_pane

0x0dff,	// (0x00026b3e) calc_display_pane_t1

0x0e11,	// (0x00026b50) calc_display_pane_t2

0xb0a9,	// (0x00030de8) calc_display_pane_t3

0x0002,

0xf173,	// (0x00034eb2) calc_display_pane_t

0x0e23,	// (0x00026b62) cell_calc_pane_ParamLimits

0x0e23,	// (0x00026b62) cell_calc_pane

0x2c43,	// (0x00028982) bg_calc_paper_pane_g1

0x2c4f,	// (0x0002898e) bg_calc_paper_pane_g2

0x2c5b,	// (0x0002899a) bg_calc_paper_pane_g3

0x2c67,	// (0x000289a6) bg_calc_paper_pane_g4

0x2c73,	// (0x000289b2) bg_calc_paper_pane_g5

0x2c7f,	// (0x000289be) bg_calc_paper_pane_g6

0x2c8e,	// (0x000289cd) bg_calc_paper_pane_g7

0x2c9d,	// (0x000289dc) bg_calc_paper_pane_g8

0x0007,

0xf17a,	// (0x00034eb9) bg_calc_paper_pane_g

0x2cb0,	// (0x000289ef) calc_bg_paper_pane_g9

0x2cc3,	// (0x00028a02) list_calc_item_pane_ParamLimits

0x2cc3,	// (0x00028a02) list_calc_item_pane

0x2cd9,	// (0x00028a18) list_calc_item_pane_g1

0xb0bb,	// (0x00030dfa) list_calc_item_pane_t1_ParamLimits

0xb0bb,	// (0x00030dfa) list_calc_item_pane_t1

0x0e58,	// (0x00026b97) list_calc_item_pane_t2_ParamLimits

0x0e58,	// (0x00026b97) list_calc_item_pane_t2

0x0001,

0xf18b,	// (0x00034eca) list_calc_item_pane_t_ParamLimits

0xf18b,	// (0x00034eca) list_calc_item_pane_t

0x2ce6,	// (0x00028a25) cell_calc_pane_g1

0x2cf0,	// (0x00028a2f) grid_highlight_pane_cp02

0x2d12,	// (0x00028a51) bg_calc_display_pane_g1

0xb0cd,	// (0x00030e0c) bg_calc_display_pane_g2

0x2d1b,	// (0x00028a5a) bg_calc_display_pane_g3

0x0002,

0xf195,	// (0x00034ed4) bg_calc_display_pane_g

0x0e8a,	// (0x00026bc9) cell_qdial_pane_ParamLimits

0x0e8a,	// (0x00026bc9) cell_qdial_pane

0x2d24,	// (0x00028a63) cell_qdial_pane_g1_ParamLimits

0x2d24,	// (0x00028a63) cell_qdial_pane_g1

0x2d3a,	// (0x00028a79) cell_qdial_pane_g2_ParamLimits

0x2d3a,	// (0x00028a79) cell_qdial_pane_g2

0x2d4b,	// (0x00028a8a) cell_qdial_pane_g3_ParamLimits

0x2d4b,	// (0x00028a8a) cell_qdial_pane_g3

0x0003,

0xf19c,	// (0x00034edb) cell_qdial_pane_g_ParamLimits

0xf19c,	// (0x00034edb) cell_qdial_pane_g

0x2d6d,	// (0x00028aac) cell_qdial_pane_t1_ParamLimits

0x2d6d,	// (0x00028aac) cell_qdial_pane_t1

0x2d85,	// (0x00028ac4) cell_qdial_pane_t2_ParamLimits

0x2d85,	// (0x00028ac4) cell_qdial_pane_t2

0x2d98,	// (0x00028ad7) cell_qdial_pane_t3_ParamLimits

0x2d98,	// (0x00028ad7) cell_qdial_pane_t3

0x0002,

0xf1a5,	// (0x00034ee4) cell_qdial_pane_t_ParamLimits

0xf1a5,	// (0x00034ee4) cell_qdial_pane_t

0x26ff,	// (0x0002843e) grid_highlight_pane_cp04

0x2dab,	// (0x00028aea) thumbnail_qdial_pane_ParamLimits

0x2dab,	// (0x00028aea) thumbnail_qdial_pane

0x2e07,	// (0x00028b46) list_help_pane

0x2e10,	// (0x00028b4f) scroll_pane_cp02

0x2e19,	// (0x00028b58) help_list_pane_t1_ParamLimits

0x2e19,	// (0x00028b58) help_list_pane_t1

0xb0d7,	// (0x00030e16) bg_notes_pane_g2

0xb0df,	// (0x00030e1e) bg_notes_pane_g3

0xb0e7,	// (0x00030e26) notes_bg_pane_g1

0xb0ef,	// (0x00030e2e) notes_bg_pane_g4

0xb0f7,	// (0x00030e36) notes_bg_pane_g5

0xb0ff,	// (0x00030e3e) notes_bg_pane_g6

0xb107,	// (0x00030e46) notes_bg_pane_g7

0xb10f,	// (0x00030e4e) notes_bg_pane_g8

0xb117,	// (0x00030e56) notes_bg_pane_g9

0x0006,

0xf1c3,	// (0x00034f02) notes_bg_pane_g

0x2e39,	// (0x00028b78) list_notes_text_pane_ParamLimits

0x2e39,	// (0x00028b78) list_notes_text_pane

0x2e50,	// (0x00028b8f) list_notes_text_pane_g1

0x2e59,	// (0x00028b98) list_notes_text_pane_t1

0x2c37,	// (0x00028976) listscroll_cale_week_pane

0x2e95,	// (0x00028bd4) bg_cale_heading_pane

0x2ead,	// (0x00028bec) bg_cale_pane_cp01

0x2ec6,	// (0x00028c05) cale_week_corner_pane

0x2ed7,	// (0x00028c16) cale_week_day_heading_pane

0x2eef,	// (0x00028c2e) cale_week_scroll_pane_g1

0x2f04,	// (0x00028c43) cale_week_scroll_pane_g2

0x2f15,	// (0x00028c54) cale_week_scroll_pane_g3

0x2f26,	// (0x00028c65) cale_week_scroll_pane_g4

0x2f37,	// (0x00028c76) cale_week_scroll_pane_g5

0x2f4a,	// (0x00028c89) cale_week_scroll_pane_g6

0x2f5d,	// (0x00028c9c) cale_week_scroll_pane_g7

0x2f70,	// (0x00028caf) cale_week_scroll_pane_g8

0x2f83,	// (0x00028cc2) cale_week_scroll_pane_g9

0x2f94,	// (0x00028cd3) cale_week_scroll_pane_g10

0x2fa5,	// (0x00028ce4) cale_week_scroll_pane_g11

0x2fb6,	// (0x00028cf5) cale_week_scroll_pane_g12

0x2fc7,	// (0x00028d06) cale_week_scroll_pane_g13

0x2fd8,	// (0x00028d17) cale_week_scroll_pane_g14

0x2fe9,	// (0x00028d28) cale_week_scroll_pane_g15

0x000e,

0xf1d2,	// (0x00034f11) cale_week_scroll_pane_g

0x2ffa,	// (0x00028d39) cale_week_time_pane

0x300d,	// (0x00028d4c) grid_cale_week_pane

0x3034,	// (0x00028d73) scroll_pane_cp08

0x304e,	// (0x00028d8d) cell_cale_week_pane_ParamLimits

0x304e,	// (0x00028d8d) cell_cale_week_pane

0x308e,	// (0x00028dcd) cale_week_day_heading_pane_t1

0x30a2,	// (0x00028de1) cale_week_day_heading_pane_t2

0x30b6,	// (0x00028df5) cale_week_day_heading_pane_t3

0x30ca,	// (0x00028e09) cale_week_day_heading_pane_t4

0x30de,	// (0x00028e1d) cale_week_day_heading_pane_t5

0x30f2,	// (0x00028e31) cale_week_day_heading_pane_t6

0x3108,	// (0x00028e47) cale_week_day_heading_pane_t7

0x0006,

0xf1f1,	// (0x00034f30) cale_week_day_heading_pane_t

0x311c,	// (0x00028e5b) bg_cale_side_pane

0x0e9e,	// (0x00026bdd) cale_week_time_pane_t1

0x0eb6,	// (0x00026bf5) cale_week_time_pane_t2

0x0ece,	// (0x00026c0d) cale_week_time_pane_t3

0x0ee6,	// (0x00026c25) cale_week_time_pane_t4

0x0efe,	// (0x00026c3d) cale_week_time_pane_t5

0x0f16,	// (0x00026c55) cale_week_time_pane_t6

0x0f2e,	// (0x00026c6d) cale_week_time_pane_t7

0x0f46,	// (0x00026c85) cale_week_time_pane_t8

0x0007,

0xf200,	// (0x00034f3f) cale_week_time_pane_t

0x312a,	// (0x00028e69) cell_cale_week_pane_g2

0x3143,	// (0x00028e82) cell_cale_week_pane_g3_ParamLimits

0x3143,	// (0x00028e82) cell_cale_week_pane_g3

0x315b,	// (0x00028e9a) grid_highlight_pane_cp07

0x3163,	// (0x00028ea2) listscroll_gms_pane

0x316d,	// (0x00028eac) grid_gms_pane

0x3176,	// (0x00028eb5) listscroll_gms_pane_g1

0x317e,	// (0x00028ebd) listscroll_gms_pane_g2

0x0001,

0xf211,	// (0x00034f50) listscroll_gms_pane_g

0x3186,	// (0x00028ec5) scroll_pane_cp010

0x3191,	// (0x00028ed0) cell_gms_pane_ParamLimits

0x3191,	// (0x00028ed0) cell_gms_pane

0x31a4,	// (0x00028ee3) cell_gms_pane_g1

0x31ac,	// (0x00028eeb) cell_gms_pane_g2

0x2e50,	// (0x00028b8f) cell_gms_pane_g3

0x31b4,	// (0x00028ef3) cell_gms_pane_g4

0x0003,

0xf216,	// (0x00034f55) cell_gms_pane_g

0x31bd,	// (0x00028efc) grid_highlight_pane_cp09

0x66c7,	// (0x0002c406) phob_pre_status_pane_g1

0x66cf,	// (0x0002c40e) phob_pre_status_pane_g2

0x66d7,	// (0x0002c416) phob_pre_status_pane_g3

0x66df,	// (0x0002c41e) phob_pre_status_pane_g4

0x0004,

0xf605,	// (0x00035344) phob_pre_status_pane_g

0x66f1,	// (0x0002c430) phob_pre_status_pane_t1

0x66ff,	// (0x0002c43e) phob_pre_status_pane_t2

0x670f,	// (0x0002c44e) phob_pre_status_pane_t3

0x0002,

0xf610,	// (0x0003534f) phob_pre_status_pane_t

0x26ff,	// (0x0002843e) bg_list_pane_cp05

0xb127,	// (0x00030e66) grid_vorec_pane

0xb12f,	// (0x00030e6e) vorec_t1

0xb13d,	// (0x00030e7c) vorec_t2

0xb14b,	// (0x00030e8a) vorec_t3

0xb159,	// (0x00030e98) vorec_t4

0xb167,	// (0x00030ea6) vorec_t5

0xb175,	// (0x00030eb4) vorec_t6

0x0006,

0xf21f,	// (0x00034f5e) vorec_t

0xb191,	// (0x00030ed0) wait_bar_pane_cp01

0x31c5,	// (0x00028f04) cell_vorec_pane_ParamLimits

0x31c5,	// (0x00028f04) cell_vorec_pane

0x31d8,	// (0x00028f17) cell_vorec_pane_g1

0x26ff,	// (0x0002843e) grid_highlight_pane_cp05

0x31fa,	// (0x00028f39) cams_zoom_pane

0x3209,	// (0x00028f48) image_vga_pane

0x3223,	// (0x00028f62) main_camera_pane_g1

0x3235,	// (0x00028f74) main_camera_pane_g2

0x3247,	// (0x00028f86) main_camera_pane_g3

0x3259,	// (0x00028f98) main_camera_pane_g4

0x326b,	// (0x00028faa) main_camera_pane_g5

0x327d,	// (0x00028fbc) main_camera_pane_g6

0x328f,	// (0x00028fce) main_camera_pane_g7

0x0007,

0xf22e,	// (0x00034f6d) main_camera_pane_g

0x32ad,	// (0x00028fec) main_camera_pane_t1

0x32c3,	// (0x00029002) main_camera_pane_t2

0x0001,

0xf23f,	// (0x00034f7e) main_camera_pane_t

0x32ff,	// (0x0002903e) cams_zoom_pane_cp_ParamLimits

0x32ff,	// (0x0002903e) cams_zoom_pane_cp

0x3327,	// (0x00029066) image_cif_pane_ParamLimits

0x3327,	// (0x00029066) image_cif_pane

0x3362,	// (0x000290a1) image_subqcif_pane

0x336a,	// (0x000290a9) main_video_pane_g1_ParamLimits

0x336a,	// (0x000290a9) main_video_pane_g1

0x338e,	// (0x000290cd) main_video_pane_g2_ParamLimits

0x338e,	// (0x000290cd) main_video_pane_g2

0x33c4,	// (0x00029103) main_video_pane_g3_ParamLimits

0x33c4,	// (0x00029103) main_video_pane_g3

0x33f4,	// (0x00029133) main_video_pane_g4_ParamLimits

0x33f4,	// (0x00029133) main_video_pane_g4

0x3424,	// (0x00029163) main_video_pane_g5_ParamLimits

0x3424,	// (0x00029163) main_video_pane_g5

0x343e,	// (0x0002917d) main_video_pane_g6_ParamLimits

0x343e,	// (0x0002917d) main_video_pane_g6

0x0006,

0xf244,	// (0x00034f83) main_video_pane_g_ParamLimits

0xf244,	// (0x00034f83) main_video_pane_g

0x3469,	// (0x000291a8) main_video_pane_t1_ParamLimits

0x3469,	// (0x000291a8) main_video_pane_t1

0x34b2,	// (0x000291f1) cams_zoom_pane_g1

0x34bb,	// (0x000291fa) cams_zoom_pane_g2

0x34c4,	// (0x00029203) cams_zoom_pane_g3

0x34cd,	// (0x0002920c) cams_zoom_pane_g4

0x0003,

0xf253,	// (0x00034f92) cams_zoom_pane_g

0x34ea,	// (0x00029229) grid_cams_pane

0x3504,	// (0x00029243) linegrid_cams_pane

0x3517,	// (0x00029256) cell_cams_pane_ParamLimits

0x3517,	// (0x00029256) cell_cams_pane

0x3537,	// (0x00029276) cams_burst_image_pane

0x353f,	// (0x0002927e) cell_cams_pane_g1

0x26ff,	// (0x0002843e) grid_highlight_pane_cp03

0x2ce6,	// (0x00028a25) mp_bg_pane_g1

0x26ff,	// (0x0002843e) bg_list_pane_cp03

0xbccf,	// (0x00031a0e) bg_mp_pane

0xbcd7,	// (0x00031a16) grid_mp_pane

0xbcdf,	// (0x00031a1e) media_player_g1

0xbce7,	// (0x00031a26) media_player_t1

0xbcf5,	// (0x00031a34) media_player_t2

0xbd03,	// (0x00031a42) media_player_t3

0xbd11,	// (0x00031a50) media_player_t4

0xbd1f,	// (0x00031a5e) media_player_t5

0xbd2d,	// (0x00031a6c) media_player_t6

0xbd3b,	// (0x00031a7a) media_player_t7

0x0006,

0xf5ef,	// (0x0003532e) media_player_t

0xbd49,	// (0x00031a88) wait_bar_pane_cp02

0xf5d4,	// (0x00035313) main_usb_pane_t

0x66be,	// (0x0002c3fd) cell_mp_pane

0x2ce6,	// (0x00028a25) cell_mp_pane_g1

0x26ff,	// (0x0002843e) grid_highlight_pane_cp06

0x3656,	// (0x00029395) grid_skin_colour_pane

0x365e,	// (0x0002939d) list_highlight_pane_cp03

0x3666,	// (0x000293a5) skin_g1

0x366e,	// (0x000293ad) skin_t1

0x367d,	// (0x000293bc) skin_t2

0x0001,

0xf288,	// (0x00034fc7) skin_t

0x368b,	// (0x000293ca) cell_skin_colour_pane_ParamLimits

0x368b,	// (0x000293ca) cell_skin_colour_pane

0x36ab,	// (0x000293ea) cell_skin_colour_pane_g1

0x3716,	// (0x00029455) call_video_g1_ParamLimits

0x3716,	// (0x00029455) call_video_g1

0x3732,	// (0x00029471) call_video_g2_ParamLimits

0x3732,	// (0x00029471) call_video_g2

0x0001,

0xf28d,	// (0x00034fcc) call_video_g_ParamLimits

0xf28d,	// (0x00034fcc) call_video_g

0x3784,	// (0x000294c3) call_video_uplink_pane_cp1_ParamLimits

0x3784,	// (0x000294c3) call_video_uplink_pane_cp1

0x37e9,	// (0x00029528) call_video_uplink_pane_cp2

0x382b,	// (0x0002956a) video_down_crop_pane_ParamLimits

0x382b,	// (0x0002956a) video_down_crop_pane

0x3914,	// (0x00029653) video_down_pane_ParamLimits

0x3914,	// (0x00029653) video_down_pane

0x3a0b,	// (0x0002974a) video_down_subqcif_pane_ParamLimits

0x3a0b,	// (0x0002974a) video_down_subqcif_pane

0x3a23,	// (0x00029762) video_down_subqcif_pane_cp_ParamLimits

0x3a23,	// (0x00029762) video_down_subqcif_pane_cp

0x3a5e,	// (0x0002979d) im_reading_pane_ParamLimits

0x3a5e,	// (0x0002979d) im_reading_pane

0x3a70,	// (0x000297af) im_writing_pane_ParamLimits

0x3a70,	// (0x000297af) im_writing_pane

0x3a8e,	// (0x000297cd) im_reading_pane_t1

0x3aca,	// (0x00029809) list_im_pane

0x3adb,	// (0x0002981a) scroll_pane_cp07

0x3af4,	// (0x00029833) im_writing_pane_t1_ParamLimits

0x3af4,	// (0x00029833) im_writing_pane_t1

0x3b09,	// (0x00029848) im_writing_pane_t2_ParamLimits

0x3b09,	// (0x00029848) im_writing_pane_t2

0x0001,

0xf297,	// (0x00034fd6) im_writing_pane_t_ParamLimits

0xf297,	// (0x00034fd6) im_writing_pane_t

0x26ff,	// (0x0002843e) input_focus_pane_cp04

0x26ff,	// (0x0002843e) input_focus_pane_cp05

0x3b26,	// (0x00029865) list_im_single_pane_ParamLimits

0x3b26,	// (0x00029865) list_im_single_pane

0x3b3c,	// (0x0002987b) list_single_im_pane_t1

0x667e,	// (0x0002c3bd) blid_accuracy_pane

0x6686,	// (0x0002c3c5) blid_compass_pane

0x6690,	// (0x0002c3cf) main_location_t1

0x66a0,	// (0x0002c3df) main_location_t2

0x66b0,	// (0x0002c3ef) main_location_t3

0x0002,

0xf5fe,	// (0x0003533d) main_location_t

0x26ff,	// (0x0002843e) aid_levels_location

0x2ce6,	// (0x00028a25) blid_accuracy_pane_g1

0x2ce6,	// (0x00028a25) blid_accuracy_pane_g2

0x0001,

0xf2f9,	// (0x00035038) blid_accuracy_pane_g

0x3b76,	// (0x000298b5) wml_content_pane

0x3bb4,	// (0x000298f3) wml_button_pane_ParamLimits

0x3bb4,	// (0x000298f3) wml_button_pane

0x3bc8,	// (0x00029907) wml_list_single_large_pane_ParamLimits

0x3bc8,	// (0x00029907) wml_list_single_large_pane

0x3bdf,	// (0x0002991e) wml_list_single_medium_pane_ParamLimits

0x3bdf,	// (0x0002991e) wml_list_single_medium_pane

0x3bf7,	// (0x00029936) wml_list_single_small_pane_ParamLimits

0x3bf7,	// (0x00029936) wml_list_single_small_pane

0x3c15,	// (0x00029954) wml_selection_box_pane_ParamLimits

0x3c15,	// (0x00029954) wml_selection_box_pane

0x3c28,	// (0x00029967) wml_list_single_pane_t1

0x3c37,	// (0x00029976) wml_list_single_medium_pane_t1

0x3c46,	// (0x00029985) wml_list_single_large_pane_t1

0x3c55,	// (0x00029994) input_focus_pane_cp02_ParamLimits

0x3c55,	// (0x00029994) input_focus_pane_cp02

0x3c68,	// (0x000299a7) wml_selection_box_pane_g1

0x3c71,	// (0x000299b0) wml_selection_box_pane_t1_ParamLimits

0x3c71,	// (0x000299b0) wml_selection_box_pane_t1

0x295a,	// (0x00028699) bg_wml_button_pane_ParamLimits

0x295a,	// (0x00028699) bg_wml_button_pane

0x3c89,	// (0x000299c8) wml_button_pane_g1

0x3c91,	// (0x000299d0) wml_button_pane_t1

0x3c89,	// (0x000299c8) wml_button_bg_pane_g1

0x3ca1,	// (0x000299e0) wml_button_bg_pane_g2

0x3ca9,	// (0x000299e8) wml_button_bg_pane_g3

0x3cb1,	// (0x000299f0) wml_button_bg_pane_g4

0x3cb9,	// (0x000299f8) wml_button_bg_pane_g5

0x3cc1,	// (0x00029a00) wml_button_bg_pane_g6

0x3cc9,	// (0x00029a08) wml_button_bg_pane_g7

0x3cd1,	// (0x00029a10) wml_button_bg_pane_g8

0x3cd9,	// (0x00029a18) wml_button_bg_pane_g9

0x0008,

0xf29c,	// (0x00034fdb) wml_button_bg_pane_g

0x3ce1,	// (0x00029a20) bg_list_pane_cp02

0x3ce9,	// (0x00029a28) mce_header_pane_ParamLimits

0x3ce9,	// (0x00029a28) mce_header_pane

0x3cff,	// (0x00029a3e) mce_icon_pane

0x3cff,	// (0x00029a3e) mce_image_pane

0x3d08,	// (0x00029a47) mce_text_pane_ParamLimits

0x3d08,	// (0x00029a47) mce_text_pane

0x3d1b,	// (0x00029a5a) scroll_pane_cp03

0x3bac,	// (0x000298eb) scroll_pane_cp04

0x3d25,	// (0x00029a64) scroll_pane_cp05_ParamLimits

0x3d25,	// (0x00029a64) scroll_pane_cp05

0x3d31,	// (0x00029a70) mce_header_field_pane_ParamLimits

0x3d31,	// (0x00029a70) mce_header_field_pane

0x3d48,	// (0x00029a87) mce_header_field_pane_2_ParamLimits

0x3d48,	// (0x00029a87) mce_header_field_pane_2

0x3d5e,	// (0x00029a9d) mce_header_field_pane_3

0x3d66,	// (0x00029aa5) list_single_mce_message_pane_ParamLimits

0x3d66,	// (0x00029aa5) list_single_mce_message_pane

0x3d7e,	// (0x00029abd) list_single_mce_smart_pane_ParamLimits

0x3d7e,	// (0x00029abd) list_single_mce_smart_pane

0x3da1,	// (0x00029ae0) input_focus_pane_cp03

0x3daa,	// (0x00029ae9) list_header_data_pane

0x3db2,	// (0x00029af1) mce_header_field_pane_t1

0x3dc2,	// (0x00029b01) list_single_mce_header_pane_ParamLimits

0x3dc2,	// (0x00029b01) list_single_mce_header_pane

0x3dd6,	// (0x00029b15) list_single_mce_header_pane_t1

0x3de5,	// (0x00029b24) list_single_mce_message_pane_g1

0x3ded,	// (0x00029b2c) list_single_mce_message_pane_t1

0x3e19,	// (0x00029b58) bg_cale_heading_pane_cp01_ParamLimits

0x3e19,	// (0x00029b58) bg_cale_heading_pane_cp01

0x3e3c,	// (0x00029b7b) bg_cale_pane_cp02_ParamLimits

0x3e3c,	// (0x00029b7b) bg_cale_pane_cp02

0x3e5f,	// (0x00029b9e) cale_month_corner_pane

0x3e75,	// (0x00029bb4) cale_month_day_heading_pane_ParamLimits

0x3e75,	// (0x00029bb4) cale_month_day_heading_pane

0x3ea8,	// (0x00029be7) cale_month_pane_g1_ParamLimits

0x3ea8,	// (0x00029be7) cale_month_pane_g1

0x3ec4,	// (0x00029c03) cale_month_pane_g2_ParamLimits

0x3ec4,	// (0x00029c03) cale_month_pane_g2

0x3edf,	// (0x00029c1e) cale_month_pane_g3_ParamLimits

0x3edf,	// (0x00029c1e) cale_month_pane_g3

0x3f0b,	// (0x00029c4a) cale_month_pane_g4_ParamLimits

0x3f0b,	// (0x00029c4a) cale_month_pane_g4

0x3f37,	// (0x00029c76) cale_month_pane_g5_ParamLimits

0x3f37,	// (0x00029c76) cale_month_pane_g5

0x3f6b,	// (0x00029caa) cale_month_pane_g6_ParamLimits

0x3f6b,	// (0x00029caa) cale_month_pane_g6

0x3fa7,	// (0x00029ce6) cale_month_pane_g7_ParamLimits

0x3fa7,	// (0x00029ce6) cale_month_pane_g7

0x3fe3,	// (0x00029d22) cale_month_pane_g8_ParamLimits

0x3fe3,	// (0x00029d22) cale_month_pane_g8

0x401f,	// (0x00029d5e) cale_month_pane_g9_ParamLimits

0x401f,	// (0x00029d5e) cale_month_pane_g9

0x4059,	// (0x00029d98) cale_month_pane_g10_ParamLimits

0x4059,	// (0x00029d98) cale_month_pane_g10

0x4093,	// (0x00029dd2) cale_month_pane_g11_ParamLimits

0x4093,	// (0x00029dd2) cale_month_pane_g11

0x40cd,	// (0x00029e0c) cale_month_pane_g12_ParamLimits

0x40cd,	// (0x00029e0c) cale_month_pane_g12

0x4107,	// (0x00029e46) cale_month_pane_g13_ParamLimits

0x4107,	// (0x00029e46) cale_month_pane_g13

0x000c,

0xf2af,	// (0x00034fee) cale_month_pane_g_ParamLimits

0xf2af,	// (0x00034fee) cale_month_pane_g

0x4153,	// (0x00029e92) cale_month_week_pane

0x4166,	// (0x00029ea5) grid_cale_month_pane_ParamLimits

0x4166,	// (0x00029ea5) grid_cale_month_pane

0x4194,	// (0x00029ed3) cale_month_day_heading_pane_t1

0x41f2,	// (0x00029f31) cale_month_day_heading_pane_t2

0x4257,	// (0x00029f96) cale_month_day_heading_pane_t3

0x42bc,	// (0x00029ffb) cale_month_day_heading_pane_t4

0x4321,	// (0x0002a060) cale_month_day_heading_pane_t5

0x4396,	// (0x0002a0d5) cale_month_day_heading_pane_t6

0x440b,	// (0x0002a14a) cale_month_day_heading_pane_t7

0x0006,

0xf2ca,	// (0x00035009) cale_month_day_heading_pane_t

0x311c,	// (0x00028e5b) bg_cale_side_pane_cp01

0x4480,	// (0x0002a1bf) cale_month_week_pane_t1

0x4497,	// (0x0002a1d6) cale_month_week_pane_t2

0x44ae,	// (0x0002a1ed) cale_month_week_pane_t3

0x44c5,	// (0x0002a204) cale_month_week_pane_t4

0x44dc,	// (0x0002a21b) cale_month_week_pane_t5

0x44f3,	// (0x0002a232) cale_month_week_pane_t6

0x0005,

0xf2d9,	// (0x00035018) cale_month_week_pane_t

0x450a,	// (0x0002a249) cell_cale_month_pane_ParamLimits

0x450a,	// (0x0002a249) cell_cale_month_pane

0xb199,	// (0x00030ed8) cell_cale_month_pane_g1

0x0f5e,	// (0x00026c9d) cell_cale_month_pane_t1_ParamLimits

0x0f5e,	// (0x00026c9d) cell_cale_month_pane_t1

0x315b,	// (0x00028e9a) grid_highlight_pane_cp08

0x2ce6,	// (0x00028a25) main_smil_g1

0x460a,	// (0x0002a349) smil_status_pane

0x4615,	// (0x0002a354) smil_text_pane

0xbbe7,	// (0x00031926) bg_popup_call3_rect_pane_g8

0xbbef,	// (0x0003192e) bg_popup_call3_rect_pane_g9

0x0008,

0xf592,	// (0x000352d1) bg_popup_call3_rect_pane_g

0xbe71,	// (0x00031bb0) smil_status_volume_pane_g1

0x4629,	// (0x0002a368) smil_status_pane_t1

0xbea4,	// (0x00031be3) volume_smil_pane

0x4640,	// (0x0002a37f) list_smil_text_pane

0x464a,	// (0x0002a389) scroll_pane_cp011

0x4655,	// (0x0002a394) smil_text_list_pane_t1_ParamLimits

0x4655,	// (0x0002a394) smil_text_list_pane_t1

0xb1a5,	// (0x00030ee4) aid_volume_smil_ParamLimits

0xb1a5,	// (0x00030ee4) aid_volume_smil

0x2ce6,	// (0x00028a25) smil_volume_pane_g1

0x2ce6,	// (0x00028a25) smil_volume_pane_g2

0x0001,

0xf2f9,	// (0x00035038) smil_volume_pane_g

0x2c37,	// (0x00028976) listscroll_cale_day_pane

0x46a9,	// (0x0002a3e8) bg_cale_pane

0x46c1,	// (0x0002a400) list_cale_pane

0x46d2,	// (0x0002a411) scroll_pane_cp09

0x46e3,	// (0x0002a422) cale_bg_pane_g1

0x46eb,	// (0x0002a42a) cale_bg_pane_g2

0x46f3,	// (0x0002a432) cale_bg_pane_g3

0x46fb,	// (0x0002a43a) cale_bg_pane_g4

0x4703,	// (0x0002a442) cale_bg_pane_g5

0x470b,	// (0x0002a44a) cale_bg_pane_g6

0x4713,	// (0x0002a452) cale_bg_pane_g7

0x471b,	// (0x0002a45a) cale_bg_pane_g8

0x4723,	// (0x0002a462) cale_bg_pane_g9

0x0008,

0xf2fe,	// (0x0003503d) cale_bg_pane_g

0x472b,	// (0x0002a46a) list_cale_time_pane_ParamLimits

0x472b,	// (0x0002a46a) list_cale_time_pane

0x4740,	// (0x0002a47f) list_cale_time_pane_g1_ParamLimits

0x4740,	// (0x0002a47f) list_cale_time_pane_g1

0x474c,	// (0x0002a48b) list_cale_time_pane_g2_ParamLimits

0x474c,	// (0x0002a48b) list_cale_time_pane_g2

0x4759,	// (0x0002a498) list_cale_time_pane_g3_ParamLimits

0x4759,	// (0x0002a498) list_cale_time_pane_g3

0x4775,	// (0x0002a4b4) list_cale_time_pane_g4_ParamLimits

0x4775,	// (0x0002a4b4) list_cale_time_pane_g4

0x4783,	// (0x0002a4c2) list_cale_time_pane_g5_ParamLimits

0x4783,	// (0x0002a4c2) list_cale_time_pane_g5

0x0005,

0xf311,	// (0x00035050) list_cale_time_pane_g_ParamLimits

0xf311,	// (0x00035050) list_cale_time_pane_g

0x479e,	// (0x0002a4dd) list_cale_time_pane_t1_ParamLimits

0x479e,	// (0x0002a4dd) list_cale_time_pane_t1

0x47c6,	// (0x0002a505) list_cale_time_pane_t2_ParamLimits

0x47c6,	// (0x0002a505) list_cale_time_pane_t2

0x4f6b,	// (0x0002acaa) aid_blid_cardinal_pane

0x4fb5,	// (0x0002acf4) compass_pane_t4

0x47ee,	// (0x0002a52d) list_cale_time_pane_t4_ParamLimits

0x47ee,	// (0x0002a52d) list_cale_time_pane_t4

0x4fc3,	// (0x0002ad02) compass_pane_t5

0x4fd1,	// (0x0002ad10) compass_pane_t6

0x4fdf,	// (0x0002ad1e) compass_pane_t7

0x505f,	// (0x0002ad9e) navi_pane_cc_t1

0x527c,	// (0x0002afbb) aid_phob_thumbnail_center_pane

0x5948,	// (0x0002b687) main_postcard_pane_g4_ParamLimits

0x0002,

0xf31e,	// (0x0003505d) list_cale_time_pane_t_ParamLimits

0xf31e,	// (0x0003505d) list_cale_time_pane_t

0x2334,	// (0x00028073) bg_popup_window_pane_cp02_ParamLimits

0x2334,	// (0x00028073) bg_popup_window_pane_cp02

0x4816,	// (0x0002a555) heading_pane_cp01_ParamLimits

0x4816,	// (0x0002a555) heading_pane_cp01

0x4822,	// (0x0002a561) loc_req_pane_ParamLimits

0x4822,	// (0x0002a561) loc_req_pane

0x4832,	// (0x0002a571) loc_type_pane_ParamLimits

0x4832,	// (0x0002a571) loc_type_pane

0x4844,	// (0x0002a583) loc_type_pane_t1_ParamLimits

0x4844,	// (0x0002a583) loc_type_pane_t1

0x4856,	// (0x0002a595) loc_type_pane_t2_ParamLimits

0x4856,	// (0x0002a595) loc_type_pane_t2

0x4868,	// (0x0002a5a7) loc_type_pane_t3_ParamLimits

0x4868,	// (0x0002a5a7) loc_type_pane_t3

0x0002,

0xf325,	// (0x00035064) loc_type_pane_t_ParamLimits

0xf325,	// (0x00035064) loc_type_pane_t

0x487a,	// (0x0002a5b9) list_loc_req_pane

0x4884,	// (0x0002a5c3) scroll_pane_cp012

0x488f,	// (0x0002a5ce) list_single_loc_request_popup_menu_pane_ParamLimits

0x488f,	// (0x0002a5ce) list_single_loc_request_popup_menu_pane

0x489c,	// (0x0002a5db) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x489c,	// (0x0002a5db) list_single_loc_request_popup_menu_pane_g1

0x48a8,	// (0x0002a5e7) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x48a8,	// (0x0002a5e7) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf32c,	// (0x0003506b) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf32c,	// (0x0003506b) list_single_loc_request_popup_menu_pane_g

0x48b4,	// (0x0002a5f3) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x48b4,	// (0x0002a5f3) list_single_loc_request_popup_menu_pane_t1

0x295a,	// (0x00028699) bg_popup_window_pane_cp03_ParamLimits

0x295a,	// (0x00028699) bg_popup_window_pane_cp03

0x48ca,	// (0x0002a609) heading_loc_req_pane_ParamLimits

0x48ca,	// (0x0002a609) heading_loc_req_pane

0x48d6,	// (0x0002a615) popup_dyc_status_message_window_g1_ParamLimits

0x48d6,	// (0x0002a615) popup_dyc_status_message_window_g1

0x48ea,	// (0x0002a629) popup_dyc_status_message_window_t1_ParamLimits

0x48ea,	// (0x0002a629) popup_dyc_status_message_window_t1

0x48ff,	// (0x0002a63e) popup_dyc_status_message_window_t2_ParamLimits

0x48ff,	// (0x0002a63e) popup_dyc_status_message_window_t2

0x4914,	// (0x0002a653) popup_dyc_status_message_window_t3_ParamLimits

0x4914,	// (0x0002a653) popup_dyc_status_message_window_t3

0x0002,

0xf331,	// (0x00035070) popup_dyc_status_message_window_t_ParamLimits

0xf331,	// (0x00035070) popup_dyc_status_message_window_t

0x26ff,	// (0x0002843e) bg_heading_pane_cp01

0x4930,	// (0x0002a66f) heading_loc_req_pane_g1

0x4938,	// (0x0002a677) heading_loc_req_pane_g2

0x4940,	// (0x0002a67f) heading_loc_req_pane_g3

0x0002,

0xf338,	// (0x00035077) heading_loc_req_pane_g

0x4948,	// (0x0002a687) heading_loc_req_pane_t1

0x4a3e,	// (0x0002a77d) bg_popup_sub_pane_cp01_ParamLimits

0x4a3e,	// (0x0002a77d) bg_popup_sub_pane_cp01

0x4a4c,	// (0x0002a78b) popup_cale_events_window_g1_ParamLimits

0x4a4c,	// (0x0002a78b) popup_cale_events_window_g1

0x4a6c,	// (0x0002a7ab) popup_cale_events_window_g2_ParamLimits

0x4a6c,	// (0x0002a7ab) popup_cale_events_window_g2

0x0001,

0xf36c,	// (0x000350ab) popup_cale_events_window_g_ParamLimits

0xf36c,	// (0x000350ab) popup_cale_events_window_g

0x4a8c,	// (0x0002a7cb) popup_cale_events_window_t1_ParamLimits

0x4a8c,	// (0x0002a7cb) popup_cale_events_window_t1

0x4a9e,	// (0x0002a7dd) popup_cale_events_window_t2_ParamLimits

0x4a9e,	// (0x0002a7dd) popup_cale_events_window_t2

0x4adc,	// (0x0002a81b) popup_cale_events_window_t3_ParamLimits

0x4adc,	// (0x0002a81b) popup_cale_events_window_t3

0x4b16,	// (0x0002a855) popup_cale_events_window_t4_ParamLimits

0x4b16,	// (0x0002a855) popup_cale_events_window_t4

0x0003,

0xf371,	// (0x000350b0) popup_cale_events_window_t_ParamLimits

0xf371,	// (0x000350b0) popup_cale_events_window_t

0x4b4c,	// (0x0002a88b) call_type_pane

0x4b5c,	// (0x0002a89b) popup_call_status_window_g1

0x4b70,	// (0x0002a8af) popup_call_status_window_g2

0x4b84,	// (0x0002a8c3) popup_call_status_window_g3

0x0002,

0xf37a,	// (0x000350b9) popup_call_status_window_g

0x4b94,	// (0x0002a8d3) call_type_pane_g1

0x4b9d,	// (0x0002a8dc) call_type_pane_g2

0x0001,

0xf381,	// (0x000350c0) call_type_pane_g

0x26ff,	// (0x0002843e) bg_popup_sub_pane_cp02

0x4ba6,	// (0x0002a8e5) listscroll_popup_wml_pane

0x4bae,	// (0x0002a8ed) list_wml_pane

0x4bb8,	// (0x0002a8f7) scroll_pane_cp013

0x4bc3,	// (0x0002a902) list_single_graphic_popup_wml_pane_ParamLimits

0x4bc3,	// (0x0002a902) list_single_graphic_popup_wml_pane

0x2ce6,	// (0x00028a25) list_single_graphic_popup_wml_pane_g1

0x4bd7,	// (0x0002a916) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf386,	// (0x000350c5) list_single_graphic_popup_wml_pane_g

0x4bdf,	// (0x0002a91e) list_single_graphic_popup_wml_pane_t1

0x4bf5,	// (0x0002a934) aid_call_pane

0x2952,	// (0x00028691) popup_clock_analogue_window_g1

0x2952,	// (0x00028691) popup_clock_analogue_window_g2

0xb1c7,	// (0x00030f06) popup_clock_analogue_window_g3

0xb1c7,	// (0x00030f06) popup_clock_analogue_window_g4

0x2ce6,	// (0x00028a25) popup_clock_analogue_window_g5

0x0004,

0xf38b,	// (0x000350ca) popup_clock_analogue_window_g

0xb1cf,	// (0x00030f0e) popup_clock_analogue_window_t1

0xb1dd,	// (0x00030f1c) clock_digital_number_pane_ParamLimits

0xb1dd,	// (0x00030f1c) clock_digital_number_pane

0xb1e9,	// (0x00030f28) clock_digital_number_pane_cp02_ParamLimits

0xb1e9,	// (0x00030f28) clock_digital_number_pane_cp02

0xb1f5,	// (0x00030f34) clock_digital_number_pane_cp03_ParamLimits

0xb1f5,	// (0x00030f34) clock_digital_number_pane_cp03

0xb201,	// (0x00030f40) clock_digital_number_pane_cp04_ParamLimits

0xb201,	// (0x00030f40) clock_digital_number_pane_cp04

0xb20d,	// (0x00030f4c) clock_digital_separator_pane_ParamLimits

0xb20d,	// (0x00030f4c) clock_digital_separator_pane

0xb219,	// (0x00030f58) popup_clock_digital_window_t1

0x2ce6,	// (0x00028a25) clock_digital_number_pane_g1

0x2ce6,	// (0x00028a25) clock_digital_number_pane_g2

0x0001,

0xf2f9,	// (0x00035038) clock_digital_number_pane_g

0x2ce6,	// (0x00028a25) clock_digital_separator_pane_g1

0x2ce6,	// (0x00028a25) clock_digital_separator_pane_g2

0x0001,

0xf2f9,	// (0x00035038) clock_digital_separator_pane_g

0x26ff,	// (0x0002843e) bg_popup_window_pane_cp04

0x4bfd,	// (0x0002a93c) heading_pane_cp03

0x4c05,	// (0x0002a944) listscroll_popup_gms_pane

0x4c0d,	// (0x0002a94c) grid_large_graphic_popup_pane

0x4c17,	// (0x0002a956) listscroll_popup_gms_pane_g1

0x4c1f,	// (0x0002a95e) listscroll_popup_gms_pane_g2

0x0001,

0xf396,	// (0x000350d5) listscroll_popup_gms_pane_g

0x3bac,	// (0x000298eb) scroll_pane_cp014

0x4c27,	// (0x0002a966) cell_large_graphic_popup_pane_ParamLimits

0x4c27,	// (0x0002a966) cell_large_graphic_popup_pane

0x4c3f,	// (0x0002a97e) cell_large_graphic_popup_pane_g1_ParamLimits

0x4c3f,	// (0x0002a97e) cell_large_graphic_popup_pane_g1

0x4c4b,	// (0x0002a98a) cell_large_graphic_popup_pane_g2_ParamLimits

0x4c4b,	// (0x0002a98a) cell_large_graphic_popup_pane_g2

0x4c57,	// (0x0002a996) cell_large_graphic_popup_pane_g3_ParamLimits

0x4c57,	// (0x0002a996) cell_large_graphic_popup_pane_g3

0x4c64,	// (0x0002a9a3) cell_large_graphic_popup_pane_g4_ParamLimits

0x4c64,	// (0x0002a9a3) cell_large_graphic_popup_pane_g4

0x0003,

0xf39b,	// (0x000350da) cell_large_graphic_popup_pane_g_ParamLimits

0xf39b,	// (0x000350da) cell_large_graphic_popup_pane_g

0x4c74,	// (0x0002a9b3) grid_highlight_pane_cp010

0x2ce6,	// (0x00028a25) bg_popup_call_pane_g1

0x4c7e,	// (0x0002a9bd) list_single_graphic_popup_conf_pane_ParamLimits

0x4c7e,	// (0x0002a9bd) list_single_graphic_popup_conf_pane

0x4c90,	// (0x0002a9cf) list_highlight_pane_cp01

0x4c99,	// (0x0002a9d8) list_single_graphic_popup_conf_pane_g1

0x4ca1,	// (0x0002a9e0) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3a4,	// (0x000350e3) list_single_graphic_popup_conf_pane_g

0x4ca9,	// (0x0002a9e8) list_single_graphic_popup_conf_pane_t1

0x4cb7,	// (0x0002a9f6) linegrid_cams_pane_g1

0x4cc0,	// (0x0002a9ff) linegrid_cams_pane_g2

0x2e50,	// (0x00028b8f) linegrid_cams_pane_g3

0x4cc9,	// (0x0002aa08) linegrid_cams_pane_g4

0x4cd2,	// (0x0002aa11) linegrid_cams_pane_g5

0x4cdb,	// (0x0002aa1a) linegrid_cams_pane_g6

0x31b4,	// (0x00028ef3) linegrid_cams_pane_g7

0x0006,

0xf3a9,	// (0x000350e8) linegrid_cams_pane_g

0x4ce6,	// (0x0002aa25) popup_clock_analogue_window

0x4ce6,	// (0x0002aa25) popup_clock_digital_window

0x26ff,	// (0x0002843e) popup_phob_thumbnail_window

0x2ce6,	// (0x00028a25) call_video_uplink_pane_g1

0x4cef,	// (0x0002aa2e) call_video_uplink_pane_g2

0x0001,

0xf3b8,	// (0x000350f7) call_video_uplink_pane_g

0x315b,	// (0x00028e9a) video_uplink_pane

0x4cf7,	// (0x0002aa36) mce_image_pane_g1

0x4d01,	// (0x0002aa40) mce_image_pane_g2

0x4d09,	// (0x0002aa48) mce_image_pane_g3

0x4d11,	// (0x0002aa50) mce_image_pane_g4

0x4d19,	// (0x0002aa58) mce_image_pane_g5

0x0004,

0xf3bd,	// (0x000350fc) mce_image_pane_g

0x4d21,	// (0x0002aa60) control_top_pane_stacon_cp01_ParamLimits

0x4d21,	// (0x0002aa60) control_top_pane_stacon_cp01

0x4d35,	// (0x0002aa74) uni_indicator_pane_stacon_cp01_ParamLimits

0x4d35,	// (0x0002aa74) uni_indicator_pane_stacon_cp01

0x4d46,	// (0x0002aa85) bg_popup_sub_pane_cp03

0x4d50,	// (0x0002aa8f) chi_dic_find_pane

0x4d58,	// (0x0002aa97) listscroll_chi_dic_pane

0x4d61,	// (0x0002aaa0) main_pane_chidic_g1

0x4d74,	// (0x0002aab3) chi_dic_find_pane_t1

0x4d82,	// (0x0002aac1) find_chidic_pane

0x4d8b,	// (0x0002aaca) chi_dic_list_pane_ParamLimits

0x4d8b,	// (0x0002aaca) chi_dic_list_pane

0x4d9c,	// (0x0002aadb) scroll_pane_cp020

0x4da4,	// (0x0002aae3) find_chidic_pane_t1

0x26ff,	// (0x0002843e) input_focus_pane_cp06

0x4db3,	// (0x0002aaf2) list_chi_dic_pane_ParamLimits

0x4db3,	// (0x0002aaf2) list_chi_dic_pane

0x4dc7,	// (0x0002ab06) list_chi_dic_pane_t1_ParamLimits

0x4dc7,	// (0x0002ab06) list_chi_dic_pane_t1

0x26ff,	// (0x0002843e) list_highlight_pane_cp020

0x4dda,	// (0x0002ab19) bg_cale_heading_pane_g1

0x4de2,	// (0x0002ab21) bg_cale_heading_pane_g2

0x4dea,	// (0x0002ab29) bg_cale_heading_pane_g3

0x4df2,	// (0x0002ab31) bg_cale_heading_pane_g4

0x4dfc,	// (0x0002ab3b) bg_cale_heading_pane_g5

0x4e06,	// (0x0002ab45) bg_cale_heading_pane_g6

0x4e0e,	// (0x0002ab4d) bg_cale_heading_pane_g7

0x4e16,	// (0x0002ab55) bg_cale_heading_pane_g8

0x4e20,	// (0x0002ab5f) bg_cale_heading_pane_g9

0x0008,

0xf3c8,	// (0x00035107) bg_cale_heading_pane_g

0x4dda,	// (0x0002ab19) bg_cale_side_pane_g1

0x4e2a,	// (0x0002ab69) bg_cale_side_pane_g2

0x4e32,	// (0x0002ab71) bg_cale_side_pane_g3

0x4e3a,	// (0x0002ab79) bg_cale_side_pane_g4

0x4e42,	// (0x0002ab81) bg_cale_side_pane_g5

0x4e4a,	// (0x0002ab89) bg_cale_side_pane_g6

0x4e52,	// (0x0002ab91) bg_cale_side_pane_g7

0x4e5a,	// (0x0002ab99) bg_cale_side_pane_g8

0x4e62,	// (0x0002aba1) bg_cale_side_pane_g9

0x0008,

0xf3db,	// (0x0003511a) bg_cale_side_pane_g

0x4e6a,	// (0x0002aba9) popup_call_status_window_ParamLimits

0x4e6a,	// (0x0002aba9) popup_call_status_window

0x4eb1,	// (0x0002abf0) stacon_top_pane

0x4eb9,	// (0x0002abf8) status_pane_ParamLimits

0x4eb9,	// (0x0002abf8) status_pane

0x4ece,	// (0x0002ac0d) status_small_pane

0x4ed6,	// (0x0002ac15) control_pane

0x26ff,	// (0x0002843e) stacon_bottom_pane

0x4ede,	// (0x0002ac1d) list_single_mce_smart_pane_t1_ParamLimits

0x4ede,	// (0x0002ac1d) list_single_mce_smart_pane_t1

0x4ef1,	// (0x0002ac30) list_single_mce_smart_pane_t2_ParamLimits

0x4ef1,	// (0x0002ac30) list_single_mce_smart_pane_t2

0x0001,

0xf3ee,	// (0x0003512d) list_single_mce_smart_pane_t_ParamLimits

0xf3ee,	// (0x0003512d) list_single_mce_smart_pane_t

0x4f10,	// (0x0002ac4f) compass_pane

0x4f19,	// (0x0002ac58) main_location2_pane_t1

0x4f2d,	// (0x0002ac6c) main_location2_pane_t2

0x4f41,	// (0x0002ac80) main_location2_pane_t3

0x0003,

0xf3f3,	// (0x00035132) main_location2_pane_t

0x4f8b,	// (0x0002acca) compass_pane_g1_ParamLimits

0x4f8b,	// (0x0002acca) compass_pane_g1

0x4f97,	// (0x0002acd6) compass_pane_t1

0x4fa6,	// (0x0002ace5) compass_pane_t2

0x0005,

0xf3fc,	// (0x0003513b) compass_pane_t

0x4fed,	// (0x0002ad2c) text_secondary_cp61

0x5056,	// (0x0002ad95) navi_pane_cams_g5

0x50d0,	// (0x0002ae0f) navi_pane_im_t1

0x50de,	// (0x0002ae1d) navi_pane_mp_g1_ParamLimits

0x50de,	// (0x0002ae1d) navi_pane_mp_g1

0x50f2,	// (0x0002ae31) navi_pane_mp_g2_ParamLimits

0x50f2,	// (0x0002ae31) navi_pane_mp_g2

0x50fe,	// (0x0002ae3d) navi_pane_mp_g3_ParamLimits

0x50fe,	// (0x0002ae3d) navi_pane_mp_g3

0x0002,

0xf410,	// (0x0003514f) navi_pane_mp_g_ParamLimits

0xf410,	// (0x0003514f) navi_pane_mp_g

0x510a,	// (0x0002ae49) navi_pane_mp_t1

0x5118,	// (0x0002ae57) navi_pane_mp_t2

0x0002,

0xf417,	// (0x00035156) navi_pane_mp_t

0x51c5,	// (0x0002af04) navi_pane_vt_g1

0x510a,	// (0x0002ae49) navi_pane_vt_t1

0x51cd,	// (0x0002af0c) navi_slider_pane

0x51d5,	// (0x0002af14) zooming_pane

0x51dd,	// (0x0002af1c) navi_slider_pane_g1

0xb236,	// (0x00030f75) navi_slider_pane_g2

0x0006,

0xf41e,	// (0x0003515d) navi_slider_pane_g

0x5201,	// (0x0002af40) aid_levels_zoom

0x5209,	// (0x0002af48) zooming_pane_g1

0x5211,	// (0x0002af50) zooming_pane_g2

0x5211,	// (0x0002af50) zooming_pane_g3

0x0002,

0xf42d,	// (0x0003516c) zooming_pane_g

0x5219,	// (0x0002af58) level_10_zoom

0x5222,	// (0x0002af61) level_11_zoom

0x522b,	// (0x0002af6a) level_1_zoom

0x5234,	// (0x0002af73) level_2_zoom

0x523d,	// (0x0002af7c) level_3_zoom

0x5246,	// (0x0002af85) level_4_zoom

0x524f,	// (0x0002af8e) level_5_zoom

0x5258,	// (0x0002af97) level_6_zoom

0x5261,	// (0x0002afa0) level_7_zoom

0x526a,	// (0x0002afa9) level_8_zoom

0x5273,	// (0x0002afb2) level_9_zoom

0x5284,	// (0x0002afc3) popup_phob_thumbnail_window_g1

0x528c,	// (0x0002afcb) popup_phob_thumbnail_window_g2

0x0001,

0xf434,	// (0x00035173) popup_phob_thumbnail_window_g

0xbd51,	// (0x00031a90) level_1_location

0xbd59,	// (0x00031a98) level_2_location

0xbd61,	// (0x00031aa0) level_3_location

0xbd69,	// (0x00031aa8) level_4_location

0x51d5,	// (0x0002af14) level_5_location

0x5294,	// (0x0002afd3) mce_icon_pane_g1

0x529c,	// (0x0002afdb) mce_icon_pane_g2

0x0001,

0xf439,	// (0x00035178) mce_icon_pane_g

0x52a4,	// (0x0002afe3) main_mup_pane_g1_ParamLimits

0x52a4,	// (0x0002afe3) main_mup_pane_g1

0x52ba,	// (0x0002aff9) main_mup_pane_g2_ParamLimits

0x52ba,	// (0x0002aff9) main_mup_pane_g2

0x52d2,	// (0x0002b011) main_mup_pane_g3_ParamLimits

0x52d2,	// (0x0002b011) main_mup_pane_g3

0x52ea,	// (0x0002b029) main_mup_pane_g4_ParamLimits

0x52ea,	// (0x0002b029) main_mup_pane_g4

0x5302,	// (0x0002b041) main_mup_pane_g5_ParamLimits

0x5302,	// (0x0002b041) main_mup_pane_g5

0x531e,	// (0x0002b05d) main_mup_pane_g6_ParamLimits

0x531e,	// (0x0002b05d) main_mup_pane_g6

0x5336,	// (0x0002b075) main_mup_pane_g7_ParamLimits

0x5336,	// (0x0002b075) main_mup_pane_g7

0x534e,	// (0x0002b08d) main_mup_pane_g8_ParamLimits

0x534e,	// (0x0002b08d) main_mup_pane_g8

0x5366,	// (0x0002b0a5) main_mup_pane_g9_ParamLimits

0x5366,	// (0x0002b0a5) main_mup_pane_g9

0x5380,	// (0x0002b0bf) main_mup_pane_g10_ParamLimits

0x5380,	// (0x0002b0bf) main_mup_pane_g10

0x539a,	// (0x0002b0d9) main_mup_pane_g11_ParamLimits

0x539a,	// (0x0002b0d9) main_mup_pane_g11

0x53ae,	// (0x0002b0ed) main_mup_pane_g12_ParamLimits

0x53ae,	// (0x0002b0ed) main_mup_pane_g12

0x53c4,	// (0x0002b103) main_mup_pane_g13_ParamLimits

0x53c4,	// (0x0002b103) main_mup_pane_g13

0x000c,

0xf43e,	// (0x0003517d) main_mup_pane_g_ParamLimits

0xf43e,	// (0x0003517d) main_mup_pane_g

0x53d8,	// (0x0002b117) main_mup_pane_t1_ParamLimits

0x53d8,	// (0x0002b117) main_mup_pane_t1

0x53f2,	// (0x0002b131) main_mup_pane_t2_ParamLimits

0x53f2,	// (0x0002b131) main_mup_pane_t2

0x540a,	// (0x0002b149) main_mup_pane_t3_ParamLimits

0x540a,	// (0x0002b149) main_mup_pane_t3

0x5422,	// (0x0002b161) main_mup_pane_t4_ParamLimits

0x5422,	// (0x0002b161) main_mup_pane_t4

0x5440,	// (0x0002b17f) main_mup_pane_t5_ParamLimits

0x5440,	// (0x0002b17f) main_mup_pane_t5

0x5455,	// (0x0002b194) main_mup_pane_t6_ParamLimits

0x5455,	// (0x0002b194) main_mup_pane_t6

0x0005,

0xf459,	// (0x00035198) main_mup_pane_t_ParamLimits

0xf459,	// (0x00035198) main_mup_pane_t

0x5467,	// (0x0002b1a6) mup_progress_pane_ParamLimits

0x5467,	// (0x0002b1a6) mup_progress_pane

0x5473,	// (0x0002b1b2) mup_visualizer_pane_ParamLimits

0x5473,	// (0x0002b1b2) mup_visualizer_pane

0x54a7,	// (0x0002b1e6) mup_volume_pane_ParamLimits

0x54a7,	// (0x0002b1e6) mup_volume_pane

0x54c5,	// (0x0002b204) mup_visualizer_pane_g1_ParamLimits

0x54c5,	// (0x0002b204) mup_visualizer_pane_g1

0x54c5,	// (0x0002b204) mup_visualizer_pane_g2_ParamLimits

0x54c5,	// (0x0002b204) mup_visualizer_pane_g2

0x4f8b,	// (0x0002acca) mup_visualizer_pane_g3_ParamLimits

0x4f8b,	// (0x0002acca) mup_visualizer_pane_g3

0x0002,

0xf466,	// (0x000351a5) mup_visualizer_pane_g_ParamLimits

0xf466,	// (0x000351a5) mup_visualizer_pane_g

0x2ce6,	// (0x00028a25) mup_volume_pane_g1

0x54db,	// (0x0002b21a) mup_volume_pane_g2

0x0001,

0xf46d,	// (0x000351ac) mup_volume_pane_g

0x2ce6,	// (0x00028a25) mup_progress_pane_g1

0x54e4,	// (0x0002b223) mup_progress_pane_g2

0x54ed,	// (0x0002b22c) mup_progress_pane_g3

0x0002,

0xf472,	// (0x000351b1) mup_progress_pane_g

0x26ff,	// (0x0002843e) bg_popup_window_pane_cp05

0x54f6,	// (0x0002b235) heading_pane_cp02_ParamLimits

0x54f6,	// (0x0002b235) heading_pane_cp02

0x5510,	// (0x0002b24f) list_popup_blid_pane

0x5518,	// (0x0002b257) list_blid_sat_info_pane_ParamLimits

0x5518,	// (0x0002b257) list_blid_sat_info_pane

0x552b,	// (0x0002b26a) list_blid_sat_info_pane_g1

0x5533,	// (0x0002b272) list_blid_sat_info_pane_t1

0x5639,	// (0x0002b378) mup_equalizer_pane_ParamLimits

0x5639,	// (0x0002b378) mup_equalizer_pane

0x5652,	// (0x0002b391) mup_equalizer_pane_cp1_ParamLimits

0x5652,	// (0x0002b391) mup_equalizer_pane_cp1

0x566f,	// (0x0002b3ae) mup_equalizer_pane_cp2_ParamLimits

0x566f,	// (0x0002b3ae) mup_equalizer_pane_cp2

0x568c,	// (0x0002b3cb) mup_equalizer_pane_cp3_ParamLimits

0x568c,	// (0x0002b3cb) mup_equalizer_pane_cp3

0x56ad,	// (0x0002b3ec) mup_equalizer_pane_cp4_ParamLimits

0x56ad,	// (0x0002b3ec) mup_equalizer_pane_cp4

0x56ce,	// (0x0002b40d) mup_equalizer_pane_cp5

0x56e2,	// (0x0002b421) mup_equalizer_pane_cp6

0x56f6,	// (0x0002b435) mup_equalizer_pane_cp7

0xbc6f,	// (0x000319ae) bg_popup_call_poc_act_pane_g9

0xbc77,	// (0x000319b6) bg_popup_call_poc_act_pane_g10

0xbc7f,	// (0x000319be) bg_popup_call_poc_act_pane_g11

0x000a,

0x295a,	// (0x00028699) mup_scale_pane

0x2ce6,	// (0x00028a25) mup_scale_pane_g1

0x570a,	// (0x0002b449) mup_scale_pane_g2

0x0006,

0xf48e,	// (0x000351cd) mup_scale_pane_g

0x5740,	// (0x0002b47f) msg_data_pane

0x5748,	// (0x0002b487) scroll_pane_cp017

0x5750,	// (0x0002b48f) bg_list_pane_cp04_ParamLimits

0x5750,	// (0x0002b48f) bg_list_pane_cp04

0x5770,	// (0x0002b4af) msg_data_pane_g1

0x5778,	// (0x0002b4b7) msg_data_pane_g2

0x4d09,	// (0x0002aa48) msg_data_pane_g3

0x5780,	// (0x0002b4bf) msg_data_pane_g4

0x5788,	// (0x0002b4c7) msg_data_pane_g5

0x5790,	// (0x0002b4cf) msg_data_pane_g6

0x5798,	// (0x0002b4d7) msg_data_pane_g7

0x0006,

0xf49d,	// (0x000351dc) msg_data_pane_g

0x57a0,	// (0x0002b4df) msg_text_pane_ParamLimits

0x57a0,	// (0x0002b4df) msg_text_pane

0x57c9,	// (0x0002b508) qrid_highlight_pane_cp011_ParamLimits

0x57c9,	// (0x0002b508) qrid_highlight_pane_cp011

0x26ff,	// (0x0002843e) msg_body_pane

0x26ff,	// (0x0002843e) msg_header_pane

0x57e8,	// (0x0002b527) input_focus_pane_cp07

0x580b,	// (0x0002b54a) msg_header_pane_t1_ParamLimits

0x580b,	// (0x0002b54a) msg_header_pane_t1

0x581f,	// (0x0002b55e) msg_header_pane_t2_ParamLimits

0x581f,	// (0x0002b55e) msg_header_pane_t2

0x0001,

0xf4b1,	// (0x000351f0) msg_header_pane_t_ParamLimits

0xf4b1,	// (0x000351f0) msg_header_pane_t

0x5831,	// (0x0002b570) msg_body_pane_g1

0x5839,	// (0x0002b578) msg_body_pane_t1_ParamLimits

0x5839,	// (0x0002b578) msg_body_pane_t1

0x586a,	// (0x0002b5a9) msg_body_pane_t2_ParamLimits

0x586a,	// (0x0002b5a9) msg_body_pane_t2

0x587c,	// (0x0002b5bb) msg_body_pane_t3_ParamLimits

0x587c,	// (0x0002b5bb) msg_body_pane_t3

0x0002,

0xf4b6,	// (0x000351f5) msg_body_pane_t_ParamLimits

0xf4b6,	// (0x000351f5) msg_body_pane_t

0x0f96,	// (0x00026cd5) main_viewer_pane_g1_ParamLimits

0x0f96,	// (0x00026cd5) main_viewer_pane_g1

0x0fa4,	// (0x00026ce3) main_viewer_pane_g2_ParamLimits

0x0fa4,	// (0x00026ce3) main_viewer_pane_g2

0x58ac,	// (0x0002b5eb) main_viewer_pane_g3_ParamLimits

0x58ac,	// (0x0002b5eb) main_viewer_pane_g3

0x58bb,	// (0x0002b5fa) main_viewer_pane_g4_ParamLimits

0x58bb,	// (0x0002b5fa) main_viewer_pane_g4

0xb260,	// (0x00030f9f) main_viewer_pane_g5_ParamLimits

0xb260,	// (0x00030f9f) main_viewer_pane_g5

0xb260,	// (0x00030f9f) main_viewer_pane_g7_ParamLimits

0xb260,	// (0x00030f9f) main_viewer_pane_g7

0xb272,	// (0x00030fb1) main_viewer_pane_g8_ParamLimits

0xb272,	// (0x00030fb1) main_viewer_pane_g8

0x0007,

0xf4c6,	// (0x00035205) main_viewer_pane_g_ParamLimits

0xf4c6,	// (0x00035205) main_viewer_pane_g

0x58ca,	// (0x0002b609) viewer_content_pane_ParamLimits

0x58ca,	// (0x0002b609) viewer_content_pane

0x5905,	// (0x0002b644) main_postcard_pane_g1_ParamLimits

0x5905,	// (0x0002b644) main_postcard_pane_g1

0x591b,	// (0x0002b65a) main_postcard_pane_g2_ParamLimits

0x591b,	// (0x0002b65a) main_postcard_pane_g2

0x5931,	// (0x0002b670) main_postcard_pane_g3_ParamLimits

0x5931,	// (0x0002b670) main_postcard_pane_g3

0x0005,

0xf4d7,	// (0x00035216) main_postcard_pane_g_ParamLimits

0xf4d7,	// (0x00035216) main_postcard_pane_g

0x5948,	// (0x0002b687) main_postcard_pane_g4

0xbe84,	// (0x00031bc3) smil_status_volume_pane_g2

0x598b,	// (0x0002b6ca) postcard_pane_ParamLimits

0x598b,	// (0x0002b6ca) postcard_pane

0x59cd,	// (0x0002b70c) postcard_pane_g1_ParamLimits

0x59cd,	// (0x0002b70c) postcard_pane_g1

0x59db,	// (0x0002b71a) postcard_pane_g2_ParamLimits

0x59db,	// (0x0002b71a) postcard_pane_g2

0x59e7,	// (0x0002b726) postcard_pane_g3_ParamLimits

0x59e7,	// (0x0002b726) postcard_pane_g3

0x59f3,	// (0x0002b732) postcard_pane_g4_ParamLimits

0x59f3,	// (0x0002b732) postcard_pane_g4

0x5a01,	// (0x0002b740) postcard_pane_g5_ParamLimits

0x5a01,	// (0x0002b740) postcard_pane_g5

0x5a16,	// (0x0002b755) postcard_pane_g6_ParamLimits

0x5a16,	// (0x0002b755) postcard_pane_g6

0x59cd,	// (0x0002b70c) postcard_pane_g7_ParamLimits

0x59cd,	// (0x0002b70c) postcard_pane_g7

0x0006,

0xf4e4,	// (0x00035223) postcard_pane_g_ParamLimits

0xf4e4,	// (0x00035223) postcard_pane_g

0x5a2a,	// (0x0002b769) main_mp2_pane_g1_ParamLimits

0x5a2a,	// (0x0002b769) main_mp2_pane_g1

0x5a36,	// (0x0002b775) main_mp2_pane_g2_ParamLimits

0x5a36,	// (0x0002b775) main_mp2_pane_g2

0x5a42,	// (0x0002b781) main_mp2_pane_g3_ParamLimits

0x5a42,	// (0x0002b781) main_mp2_pane_g3

0x0002,

0xf4f3,	// (0x00035232) main_mp2_pane_g_ParamLimits

0xf4f3,	// (0x00035232) main_mp2_pane_g

0x5a4e,	// (0x0002b78d) main_mp2_pane_t1_ParamLimits

0x5a4e,	// (0x0002b78d) main_mp2_pane_t1

0x5a63,	// (0x0002b7a2) main_mp2_pane_t2_ParamLimits

0x5a63,	// (0x0002b7a2) main_mp2_pane_t2

0x5a75,	// (0x0002b7b4) main_mp2_pane_t3_ParamLimits

0x5a75,	// (0x0002b7b4) main_mp2_pane_t3

0x0002,

0xf4fa,	// (0x00035239) main_mp2_pane_t_ParamLimits

0xf4fa,	// (0x00035239) main_mp2_pane_t

0x5a87,	// (0x0002b7c6) pec_content_pane_ParamLimits

0x5a87,	// (0x0002b7c6) pec_content_pane

0x3bac,	// (0x000298eb) scroll_pane_cp015

0x5a99,	// (0x0002b7d8) pec_attribute_pane_ParamLimits

0x5a99,	// (0x0002b7d8) pec_attribute_pane

0x5aa9,	// (0x0002b7e8) pec_content_pane_g1_ParamLimits

0x5aa9,	// (0x0002b7e8) pec_content_pane_g1

0x5ab7,	// (0x0002b7f6) pec_content_pane_t1_ParamLimits

0x5ab7,	// (0x0002b7f6) pec_content_pane_t1

0x5ac9,	// (0x0002b808) pec_content_pane_t2_ParamLimits

0x5ac9,	// (0x0002b808) pec_content_pane_t2

0x0001,

0xf501,	// (0x00035240) pec_content_pane_t_ParamLimits

0xf501,	// (0x00035240) pec_content_pane_t

0x5adb,	// (0x0002b81a) list_single_graphic_pane_cp01_ParamLimits

0x5adb,	// (0x0002b81a) list_single_graphic_pane_cp01

0x295a,	// (0x00028699) bg_popup_sub_pane_cp04

0x5af3,	// (0x0002b832) popup_mup_playback_window_g1

0x5aff,	// (0x0002b83e) popup_mup_playback_window_t1

0x5b14,	// (0x0002b853) popup_mup_playback_window_t2

0x0001,

0xf506,	// (0x00035245) popup_mup_playback_window_t

0x5b69,	// (0x0002b8a8) main_image_pane_g1_ParamLimits

0x5b69,	// (0x0002b8a8) main_image_pane_g1

0x5c46,	// (0x0002b985) scroll_pane_cp018_ParamLimits

0x5c46,	// (0x0002b985) scroll_pane_cp018

0x5c5e,	// (0x0002b99d) scroll_pane_cp016_ParamLimits

0x5c5e,	// (0x0002b99d) scroll_pane_cp016

0x5c92,	// (0x0002b9d1) smil2_image_pane_ParamLimits

0x5c92,	// (0x0002b9d1) smil2_image_pane

0x5cc6,	// (0x0002ba05) smil2_root_pane_ParamLimits

0x5cc6,	// (0x0002ba05) smil2_root_pane

0x5cfe,	// (0x0002ba3d) smil2_text_pane_ParamLimits

0x5cfe,	// (0x0002ba3d) smil2_text_pane

0x26ff,	// (0x0002843e) bg_list_pane_cp06

0x5d86,	// (0x0002bac5) grid_radio_pane

0x26ff,	// (0x0002843e) bg_popup_window_pane_cp06

0x5d8e,	// (0x0002bacd) main_fmradio_pane_t1

0x4bfd,	// (0x0002a93c) heading_pane_cp04

0x5d9c,	// (0x0002badb) main_fmradio_pane_t2

0xbc87,	// (0x000319c6) popup_cale_lunar_info_window_g1

0x5daa,	// (0x0002bae9) main_fmradio_pane_t3

0xbc8f,	// (0x000319ce) popup_cale_lunar_info_window_g2

0x5db8,	// (0x0002baf7) main_fmradio_pane_t4

0x0001,

0x5dc6,	// (0x0002bb05) main_fmradio_pane_t5

0x0004,

0xf5e1,	// (0x00035320) popup_cale_lunar_info_window_g

0xf51b,	// (0x0003525a) main_fmradio_pane_t

0x5dd4,	// (0x0002bb13) wait_bar_pane_cp03

0x5ddc,	// (0x0002bb1b) cell_fmradio_pane_ParamLimits

0x5ddc,	// (0x0002bb1b) cell_fmradio_pane

0x59cd,	// (0x0002b70c) cell_fmradio_pane_g1_ParamLimits

0x59cd,	// (0x0002b70c) cell_fmradio_pane_g1

0x26ff,	// (0x0002843e) grid_highlight_pane_cp011

0x5def,	// (0x0002bb2e) poc_content_pane_ParamLimits

0x5def,	// (0x0002bb2e) poc_content_pane

0x5e01,	// (0x0002bb40) scroll_pane_cp019

0x5e09,	// (0x0002bb48) popup_call_poc_act_window_ParamLimits

0x5e09,	// (0x0002bb48) popup_call_poc_act_window

0x5e2d,	// (0x0002bb6c) popup_call_poc_inact_window_ParamLimits

0x5e2d,	// (0x0002bb6c) popup_call_poc_inact_window

0xf5b8,	// (0x000352f7) bg_popup_call_poc_act_pane_g

0xbbf7,	// (0x00031936) bg_popup_call_poc_inact_pane_g1

0xbbff,	// (0x0003193e) bg_popup_call_poc_inact_pane_g2

0x5e46,	// (0x0002bb85) popup_call_poc_act_window_g2

0xbc07,	// (0x00031946) bg_popup_call_poc_inact_pane_g3

0xbc0f,	// (0x0003194e) bg_popup_call_poc_inact_pane_g4

0xbc17,	// (0x00031956) bg_popup_call_poc_inact_pane_g5

0x5e4e,	// (0x0002bb8d) popup_call_poc_act_window_t1_ParamLimits

0x5e4e,	// (0x0002bb8d) popup_call_poc_act_window_t1

0x5e76,	// (0x0002bbb5) popup_call_poc_act_window_t2_ParamLimits

0x5e76,	// (0x0002bbb5) popup_call_poc_act_window_t2

0x5e9e,	// (0x0002bbdd) popup_call_poc_act_window_t3_ParamLimits

0x5e9e,	// (0x0002bbdd) popup_call_poc_act_window_t3

0x5ec6,	// (0x0002bc05) popup_call_poc_act_window_t4_ParamLimits

0x5ec6,	// (0x0002bc05) popup_call_poc_act_window_t4

0x0003,

0xf526,	// (0x00035265) popup_call_poc_act_window_t_ParamLimits

0xf526,	// (0x00035265) popup_call_poc_act_window_t

0xbc1f,	// (0x0003195e) bg_popup_call_poc_inact_pane_g6

0xbc27,	// (0x00031966) bg_popup_call_poc_inact_pane_g7

0xbc2f,	// (0x0003196e) bg_popup_call_poc_inact_pane_g8

0x5ed8,	// (0x0002bc17) popup_call_poc_inact_window_g2

0xbc37,	// (0x00031976) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5a5,	// (0x000352e4) bg_popup_call_poc_inact_pane_g

0x5ee0,	// (0x0002bc1f) popup_call_poc_inact_window_t1_ParamLimits

0x5ee0,	// (0x0002bc1f) popup_call_poc_inact_window_t1

0x5ef5,	// (0x0002bc34) popup_call_poc_inact_window_t2_ParamLimits

0x5ef5,	// (0x0002bc34) popup_call_poc_inact_window_t2

0x5f0a,	// (0x0002bc49) popup_call_poc_inact_window_t3_ParamLimits

0x5f0a,	// (0x0002bc49) popup_call_poc_inact_window_t3

0x0002,

0xf52f,	// (0x0003526e) popup_call_poc_inact_window_t_ParamLimits

0xf52f,	// (0x0003526e) popup_call_poc_inact_window_t

0xbdf7,	// (0x00031b36) context_pane_ParamLimits

0x6bc5,	// (0x0002c904) signal_pane_ParamLimits

0x51d5,	// (0x0002af14) main_call2_pane

0xbde5,	// (0x00031b24) popup_phob_thumbnail2_window_ParamLimits

0xbde5,	// (0x00031b24) popup_phob_thumbnail2_window

0xb248,	// (0x00030f87) aid_hotspot_pointer_arrow_pane

0xb250,	// (0x00030f8f) aid_hotspot_pointer_hand_pane

0x66e9,	// (0x0002c428) phob_pre_status_pane_g5

0x31fa,	// (0x00028f39) cams_zoom_pane_ParamLimits

0x3209,	// (0x00028f48) image_vga_pane_ParamLimits

0x3223,	// (0x00028f62) main_camera_pane_g1_ParamLimits

0x3235,	// (0x00028f74) main_camera_pane_g2_ParamLimits

0x3247,	// (0x00028f86) main_camera_pane_g3_ParamLimits

0x3259,	// (0x00028f98) main_camera_pane_g4_ParamLimits

0x326b,	// (0x00028faa) main_camera_pane_g5_ParamLimits

0x327d,	// (0x00028fbc) main_camera_pane_g6_ParamLimits

0x328f,	// (0x00028fce) main_camera_pane_g7_ParamLimits

0xf22e,	// (0x00034f6d) main_camera_pane_g_ParamLimits

0x32ad,	// (0x00028fec) main_camera_pane_t1_ParamLimits

0x32c3,	// (0x00029002) main_camera_pane_t2_ParamLimits

0xf23f,	// (0x00034f7e) main_camera_pane_t_ParamLimits

0x295a,	// (0x00028699) bg_popup_preview_window_pane_cp01_ParamLimits

0x295a,	// (0x00028699) bg_popup_preview_window_pane_cp01

0x5f1f,	// (0x0002bc5e) popup_phob_thumbnail2_window_g1_ParamLimits

0x5f1f,	// (0x0002bc5e) popup_phob_thumbnail2_window_g1

0x26ff,	// (0x0002843e) call2_cli_visual_pane

0x5f46,	// (0x0002bc85) popup_call2_audio_conf_window_ParamLimits

0x5f46,	// (0x0002bc85) popup_call2_audio_conf_window

0x5f66,	// (0x0002bca5) popup_call2_audio_first_window_ParamLimits

0x5f66,	// (0x0002bca5) popup_call2_audio_first_window

0x5ffc,	// (0x0002bd3b) popup_call2_audio_in_window_ParamLimits

0x5ffc,	// (0x0002bd3b) popup_call2_audio_in_window

0x6044,	// (0x0002bd83) popup_call2_audio_out_window_ParamLimits

0x6044,	// (0x0002bd83) popup_call2_audio_out_window

0x60ae,	// (0x0002bded) popup_call2_audio_second_window_ParamLimits

0x60ae,	// (0x0002bded) popup_call2_audio_second_window

0x6114,	// (0x0002be53) popup_call2_audio_wait_window_ParamLimits

0x6114,	// (0x0002be53) popup_call2_audio_wait_window

0x26ff,	// (0x0002843e) bg_popup_call2_act_pane_cp03

0x293c,	// (0x0002867b) list_conf_pane_cp

0x614e,	// (0x0002be8d) popup_call2_audio_conf_window_t1

0x615c,	// (0x0002be9b) list_single_graphic_popup_conf2_pane_ParamLimits

0x615c,	// (0x0002be9b) list_single_graphic_popup_conf2_pane

0x4c90,	// (0x0002a9cf) list_highlight_pane_cp04

0x616f,	// (0x0002beae) list_single_graphic_popup_conf2_pane_g1

0x4ca1,	// (0x0002a9e0) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf536,	// (0x00035275) list_single_graphic_popup_conf2_pane_g

0x6179,	// (0x0002beb8) list_single_graphic_popup_conf2_pane_t1

0x6187,	// (0x0002bec6) bg_popup_call2_act_pane_cp01_ParamLimits

0x6187,	// (0x0002bec6) bg_popup_call2_act_pane_cp01

0x6211,	// (0x0002bf50) call_type_pane_cp05_ParamLimits

0x6211,	// (0x0002bf50) call_type_pane_cp05

0x6265,	// (0x0002bfa4) popup_call2_audio_second_window_g1_ParamLimits

0x6265,	// (0x0002bfa4) popup_call2_audio_second_window_g1

0x62b9,	// (0x0002bff8) popup_call2_audio_second_window_g2_ParamLimits

0x62b9,	// (0x0002bff8) popup_call2_audio_second_window_g2

0x0002,

0xf53b,	// (0x0003527a) popup_call2_audio_second_window_g_ParamLimits

0xf53b,	// (0x0003527a) popup_call2_audio_second_window_g

0x631e,	// (0x0002c05d) popup_call2_audio_second_window_t1_ParamLimits

0x631e,	// (0x0002c05d) popup_call2_audio_second_window_t1

0x63d9,	// (0x0002c118) popup_call2_audio_second_window_t2_ParamLimits

0x63d9,	// (0x0002c118) popup_call2_audio_second_window_t2

0x642c,	// (0x0002c16b) popup_call2_audio_second_window_t3_ParamLimits

0x642c,	// (0x0002c16b) popup_call2_audio_second_window_t3

0x0003,

0xf542,	// (0x00035281) popup_call2_audio_second_window_t_ParamLimits

0xf542,	// (0x00035281) popup_call2_audio_second_window_t

0x26ff,	// (0x0002843e) bg_popup_call2_in_pane_cp02

0x2709,	// (0x00028448) call_type_pane_cp04

0x2711,	// (0x00028450) popup_call2_audio_wait_window_g1

0x2719,	// (0x00028458) popup_call2_audio_wait_window_g2

0x0001,

0xf11b,	// (0x00034e5a) popup_call2_audio_wait_window_g

0x2721,	// (0x00028460) popup_call2_audio_wait_window_t3

0x651f,	// (0x0002c25e) bg_popup_call2_act_pane_ParamLimits

0x651f,	// (0x0002c25e) bg_popup_call2_act_pane

0xb28a,	// (0x00030fc9) call_type_pane_cp03_ParamLimits

0xb28a,	// (0x00030fc9) call_type_pane_cp03

0xb2ee,	// (0x0003102d) popup_call2_audio_first_window_g1_ParamLimits

0xb2ee,	// (0x0003102d) popup_call2_audio_first_window_g1

0xb35e,	// (0x0003109d) popup_call2_audio_first_window_g2_ParamLimits

0xb35e,	// (0x0003109d) popup_call2_audio_first_window_g2

0x54c5,	// (0x0002b204) popup_call2_audio_first_window_g3_ParamLimits

0x54c5,	// (0x0002b204) popup_call2_audio_first_window_g3

0x0004,

0xf54b,	// (0x0003528a) popup_call2_audio_first_window_g_ParamLimits

0xf54b,	// (0x0003528a) popup_call2_audio_first_window_g

0xb43c,	// (0x0003117b) popup_call2_audio_first_window_t1_ParamLimits

0xb43c,	// (0x0003117b) popup_call2_audio_first_window_t1

0xb53f,	// (0x0003127e) popup_call2_audio_first_window_t4_ParamLimits

0xb53f,	// (0x0003127e) popup_call2_audio_first_window_t4

0xb622,	// (0x00031361) popup_call2_audio_first_window_t5_ParamLimits

0xb622,	// (0x00031361) popup_call2_audio_first_window_t5

0x0003,

0xf556,	// (0x00035295) popup_call2_audio_first_window_t_ParamLimits

0xf556,	// (0x00035295) popup_call2_audio_first_window_t

0x2952,	// (0x00028691) bg_popup_call2_act_pane_g1

0xbc97,	// (0x000319d6) popup_cale_lunar_info_window_t1

0xbca5,	// (0x000319e4) popup_cale_lunar_info_window_t2

0xbcb3,	// (0x000319f2) popup_cale_lunar_info_window_t3

0x26ff,	// (0x0002843e) bg_popup_call2_bubble_pane

0xb723,	// (0x00031462) bg_popup_call2_in_pane_cp01_ParamLimits

0xb723,	// (0x00031462) bg_popup_call2_in_pane_cp01

0x23b7,	// (0x000280f6) call_type_pane_cp02

0xb76b,	// (0x000314aa) popup_call2_audio_out_window_g1_ParamLimits

0xb76b,	// (0x000314aa) popup_call2_audio_out_window_g1

0xb797,	// (0x000314d6) popup_call2_audio_out_window_g2_ParamLimits

0xb797,	// (0x000314d6) popup_call2_audio_out_window_g2

0xb7bf,	// (0x000314fe) popup_call2_audio_out_window_g3_ParamLimits

0xb7bf,	// (0x000314fe) popup_call2_audio_out_window_g3

0x0003,

0xf55f,	// (0x0003529e) popup_call2_audio_out_window_g_ParamLimits

0xf55f,	// (0x0003529e) popup_call2_audio_out_window_g

0xb7fa,	// (0x00031539) popup_call2_audio_out_window_t1_ParamLimits

0xb7fa,	// (0x00031539) popup_call2_audio_out_window_t1

0xb859,	// (0x00031598) popup_call2_audio_out_window_t2_ParamLimits

0xb859,	// (0x00031598) popup_call2_audio_out_window_t2

0xb8ad,	// (0x000315ec) popup_call2_audio_out_window_t3_ParamLimits

0xb8ad,	// (0x000315ec) popup_call2_audio_out_window_t3

0xb8c3,	// (0x00031602) popup_call2_audio_out_window_t4_ParamLimits

0xb8c3,	// (0x00031602) popup_call2_audio_out_window_t4

0xb8d9,	// (0x00031618) popup_call2_audio_out_window_t5_ParamLimits

0xb8d9,	// (0x00031618) popup_call2_audio_out_window_t5

0x0005,

0xf568,	// (0x000352a7) popup_call2_audio_out_window_t_ParamLimits

0xf568,	// (0x000352a7) popup_call2_audio_out_window_t

0xb93d,	// (0x0003167c) bg_popup_call2_in_pane_ParamLimits

0xb93d,	// (0x0003167c) bg_popup_call2_in_pane

0xb999,	// (0x000316d8) popup_call2_audio_in_window_g1_ParamLimits

0xb999,	// (0x000316d8) popup_call2_audio_in_window_g1

0xb9d1,	// (0x00031710) popup_call2_audio_in_window_g2_ParamLimits

0xb9d1,	// (0x00031710) popup_call2_audio_in_window_g2

0xba09,	// (0x00031748) popup_call2_audio_in_window_g3_ParamLimits

0xba09,	// (0x00031748) popup_call2_audio_in_window_g3

0x0003,

0xf575,	// (0x000352b4) popup_call2_audio_in_window_g_ParamLimits

0xf575,	// (0x000352b4) popup_call2_audio_in_window_g

0xba61,	// (0x000317a0) popup_call2_audio_in_window_t1_ParamLimits

0xba61,	// (0x000317a0) popup_call2_audio_in_window_t1

0xbae1,	// (0x00031820) popup_call2_audio_in_window_t2_ParamLimits

0xbae1,	// (0x00031820) popup_call2_audio_in_window_t2

0xbb61,	// (0x000318a0) popup_call2_audio_in_window_t3_ParamLimits

0xbb61,	// (0x000318a0) popup_call2_audio_in_window_t3

0xbb7b,	// (0x000318ba) popup_call2_audio_in_window_t4_ParamLimits

0xbb7b,	// (0x000318ba) popup_call2_audio_in_window_t4

0xbb8d,	// (0x000318cc) popup_call2_audio_in_window_t5_ParamLimits

0xbb8d,	// (0x000318cc) popup_call2_audio_in_window_t5

0xbba2,	// (0x000318e1) popup_call2_audio_in_window_t6_ParamLimits

0xbba2,	// (0x000318e1) popup_call2_audio_in_window_t6

0x0005,

0xf57e,	// (0x000352bd) popup_call2_audio_in_window_t_ParamLimits

0xf57e,	// (0x000352bd) popup_call2_audio_in_window_t

0x2952,	// (0x00028691) bg_popup_call2_in_pane_g1

0xbcc1,	// (0x00031a00) popup_cale_lunar_info_window_t4

0x0003,

0xf5e6,	// (0x00035325) popup_cale_lunar_info_window_t

0x295a,	// (0x00028699) bg_popup_call2_rect_pane_ParamLimits

0x295a,	// (0x00028699) bg_popup_call2_rect_pane

0x26ff,	// (0x0002843e) call2_cli_visual_graphic_pane

0x26ff,	// (0x0002843e) call2_cli_visual_text_pane

0xbe97,	// (0x00031bd6) smil_status_volume_pane_g3

0x0002,

0x2ce6,	// (0x00028a25) call2_cli_visual_graphic_pane_g1

0x2ce6,	// (0x00028a25) call2_cli_visual_graphic_pane_g2

0x2ce6,	// (0x00028a25) call2_cli_visual_graphic_pane_g3

0x0002,

0xf58b,	// (0x000352ca) call2_cli_visual_graphic_pane_g

0xbbb7,	// (0x000318f6) bg_popup_call2_rect_pane_g1

0x2dff,	// (0x00028b3e) bg_popup_call2_rect_pane_g2

0xbbbf,	// (0x000318fe) bg_popup_call2_rect_pane_g3

0xbbc7,	// (0x00031906) bg_popup_call2_rect_pane_g4

0xbbcf,	// (0x0003190e) bg_popup_call2_rect_pane_g5

0xbbd7,	// (0x00031916) bg_popup_call2_rect_pane_g6

0xbbdf,	// (0x0003191e) bg_popup_call2_rect_pane_g7

0xbbe7,	// (0x00031926) bg_popup_call2_rect_pane_g8

0xbbef,	// (0x0003192e) bg_popup_call2_rect_pane_g9

0x0008,

0xf592,	// (0x000352d1) bg_popup_call2_rect_pane_g

0xbbf7,	// (0x00031936) bg_popup_call2_bubble_pane_g1

0xbbff,	// (0x0003193e) bg_popup_call2_bubble_pane_g2

0xbc07,	// (0x00031946) bg_popup_call2_bubble_pane_g3

0xbc0f,	// (0x0003194e) bg_popup_call2_bubble_pane_g4

0xbc17,	// (0x00031956) bg_popup_call2_bubble_pane_g5

0xbc1f,	// (0x0003195e) bg_popup_call2_bubble_pane_g6

0xbc27,	// (0x00031966) bg_popup_call2_bubble_pane_g7

0xbc2f,	// (0x0003196e) bg_popup_call2_bubble_pane_g8

0xbc37,	// (0x00031976) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5a5,	// (0x000352e4) bg_popup_call2_bubble_pane_g

0x2e82,	// (0x00028bc1) aid_cale_week_size_cell_pane

0x32db,	// (0x0002901a) aid_cams_cif_uncrop_pane_ParamLimits

0x32db,	// (0x0002901a) aid_cams_cif_uncrop_pane

0x34d6,	// (0x00029215) aid_cams_size_cell_ParamLimits

0x34d6,	// (0x00029215) aid_cams_size_cell

0x34ea,	// (0x00029229) grid_cams_pane_ParamLimits

0x3504,	// (0x00029243) linegrid_cams_pane_ParamLimits

0x3748,	// (0x00029487) call_video_pane_t1

0x3766,	// (0x000294a5) call_video_pane_t2

0x0001,

0xf292,	// (0x00034fd1) call_video_pane_t

0x3dfb,	// (0x00029b3a) aid_cale_month_size_cell_pane_ParamLimits

0x3dfb,	// (0x00029b3a) aid_cale_month_size_cell_pane

0xf62f,	// (0x0003536e) smil_status_volume_pane_g

0xbea4,	// (0x00031be3) volume_smil_pane_ParamLimits

0x1fc9,	// (0x00027d08) aid_popup2_width_pane

0x2d57,	// (0x00028a96) cell_qdial_pane_g4_ParamLimits

0x2d57,	// (0x00028a96) cell_qdial_pane_g4

0x4f6b,	// (0x0002acaa) aid_blid_cardinal_pane_ParamLimits

0x4f77,	// (0x0002acb6) aid_blid_destination_pane_ParamLimits

0x4f77,	// (0x0002acb6) aid_blid_destination_pane

0x295a,	// (0x00028699) bg_popup_call_poc_act_pane_ParamLimits

0x295a,	// (0x00028699) bg_popup_call_poc_act_pane

0x295a,	// (0x00028699) bg_popup_call_poc_inact_pane_ParamLimits

0x295a,	// (0x00028699) bg_popup_call_poc_inact_pane

0xbc47,	// (0x00031986) bg_popup_call_poc_act_pane_g1

0xbc4f,	// (0x0003198e) bg_popup_call_poc_act_pane_g2

0xbc57,	// (0x00031996) bg_popup_call_poc_act_pane_g3

0xbc0f,	// (0x0003194e) bg_popup_call_poc_act_pane_g4

0xbc17,	// (0x00031956) bg_popup_call_poc_act_pane_g5

0xbc5f,	// (0x0003199e) bg_popup_call_poc_act_pane_g6

0xbc27,	// (0x00031966) bg_popup_call_poc_act_pane_g7

0xbc67,	// (0x000319a6) bg_popup_call_poc_act_pane_g8

0x26ff,	// (0x0002843e) main_usb_pane

0xbdc0,	// (0x00031aff) popup_cale_lunar_info_window

0x3a8e,	// (0x000297cd) im_reading_pane_t1_ParamLimits

0x3aca,	// (0x00029809) list_im_pane_ParamLimits

0x3adb,	// (0x0002981a) scroll_pane_cp07_ParamLimits

0x26ff,	// (0x0002843e) grid_highlight_pane_cp012

0x295a,	// (0x00028699) mup_scale_pane_ParamLimits

0x59cd,	// (0x0002b70c) main_usb_pane_g1_ParamLimits

0x59cd,	// (0x0002b70c) main_usb_pane_g1

0x65fc,	// (0x0002c33b) main_usb_pane_g2_ParamLimits

0x65fc,	// (0x0002c33b) main_usb_pane_g2

0x0001,

0xf5cf,	// (0x0003530e) main_usb_pane_g_ParamLimits

0xf5cf,	// (0x0003530e) main_usb_pane_g

0x6612,	// (0x0002c351) main_usb_pane_t1_ParamLimits

0x6612,	// (0x0002c351) main_usb_pane_t1

0x6624,	// (0x0002c363) main_usb_pane_t2_ParamLimits

0x6624,	// (0x0002c363) main_usb_pane_t2

0x6636,	// (0x0002c375) main_usb_pane_t3_ParamLimits

0x6636,	// (0x0002c375) main_usb_pane_t3

0x6648,	// (0x0002c387) main_usb_pane_t4_ParamLimits

0x6648,	// (0x0002c387) main_usb_pane_t4

0x665a,	// (0x0002c399) main_usb_pane_t5_ParamLimits

0x665a,	// (0x0002c399) main_usb_pane_t5

0x666c,	// (0x0002c3ab) main_usb_pane_t6_ParamLimits

0x666c,	// (0x0002c3ab) main_usb_pane_t6

0x0005,

0xf5d4,	// (0x00035313) main_usb_pane_t_ParamLimits

0x4f10,	// (0x0002ac4f) aid_text_placing

0x4f19,	// (0x0002ac58) main_location2_pane_t1_ParamLimits

0x4f2d,	// (0x0002ac6c) main_location2_pane_t2_ParamLimits

0x4f41,	// (0x0002ac80) main_location2_pane_t3_ParamLimits

0x4f57,	// (0x0002ac96) main_location2_pane_t4_ParamLimits

0x4f57,	// (0x0002ac96) main_location2_pane_t4

0xf3f3,	// (0x00035132) main_location2_pane_t_ParamLimits

0x2a32,	// (0x00028771) find_pinb_pane_g2_ParamLimits

0x2a32,	// (0x00028771) find_pinb_pane_g2

0x0001,

0xf141,	// (0x00034e80) find_pinb_pane_g_ParamLimits

0xf141,	// (0x00034e80) find_pinb_pane_g

0x2a3e,	// (0x0002877d) find_pinb_pane_t1_ParamLimits

0x2a50,	// (0x0002878f) find_pinb_pane_t2_ParamLimits

0xf146,	// (0x00034e85) find_pinb_pane_t_ParamLimits

0x26ff,	// (0x0002843e) main_call3_pane

0x4194,	// (0x00029ed3) cale_month_day_heading_pane_t1_ParamLimits

0x41f2,	// (0x00029f31) cale_month_day_heading_pane_t2_ParamLimits

0x4257,	// (0x00029f96) cale_month_day_heading_pane_t3_ParamLimits

0x42bc,	// (0x00029ffb) cale_month_day_heading_pane_t4_ParamLimits

0x4321,	// (0x0002a060) cale_month_day_heading_pane_t5_ParamLimits

0x4396,	// (0x0002a0d5) cale_month_day_heading_pane_t6_ParamLimits

0x440b,	// (0x0002a14a) cale_month_day_heading_pane_t7_ParamLimits

0xf2ca,	// (0x00035009) cale_month_day_heading_pane_t_ParamLimits

0x4637,	// (0x0002a376) smil_status_volume_pane

0x59a9,	// (0x0002b6e8) postcard_address_pane_ParamLimits

0x59a9,	// (0x0002b6e8) postcard_address_pane

0x59bb,	// (0x0002b6fa) postcard_message_pane_ParamLimits

0x59bb,	// (0x0002b6fa) postcard_message_pane

0x65df,	// (0x0002c31e) call2_cli_visual_pane_t1_ParamLimits

0x65df,	// (0x0002c31e) call2_cli_visual_pane_t1

0x6df3,	// (0x0002cb32) postcard_message_pane_t1_ParamLimits

0x6df3,	// (0x0002cb32) postcard_message_pane_t1

0x6ddc,	// (0x0002cb1b) postcard_address_pane_t1_ParamLimits

0x6ddc,	// (0x0002cb1b) postcard_address_pane_t1

0x6dc8,	// (0x0002cb07) popup_call3_audio_in_window_ParamLimits

0x6dc8,	// (0x0002cb07) popup_call3_audio_in_window

0x6c57,	// (0x0002c996) bg_popup_call3_in_pane_ParamLimits

0x6c57,	// (0x0002c996) bg_popup_call3_in_pane

0x6cc9,	// (0x0002ca08) popup_call3_audio_in_window_g1_ParamLimits

0x6cc9,	// (0x0002ca08) popup_call3_audio_in_window_g1

0x6ce9,	// (0x0002ca28) popup_call3_audio_in_window_g2_ParamLimits

0x6ce9,	// (0x0002ca28) popup_call3_audio_in_window_g2

0x6d09,	// (0x0002ca48) popup_call3_audio_in_window_g3_ParamLimits

0x6d09,	// (0x0002ca48) popup_call3_audio_in_window_g3

0x0003,

0xf636,	// (0x00035375) popup_call3_audio_in_window_g_ParamLimits

0xf636,	// (0x00035375) popup_call3_audio_in_window_g

0x6d3a,	// (0x0002ca79) popup_call3_audio_in_window_t1_ParamLimits

0x6d3a,	// (0x0002ca79) popup_call3_audio_in_window_t1

0x6d78,	// (0x0002cab7) popup_call3_audio_in_window_t2_ParamLimits

0x6d78,	// (0x0002cab7) popup_call3_audio_in_window_t2

0x6db6,	// (0x0002caf5) popup_call3_audio_in_window_t3_ParamLimits

0x6db6,	// (0x0002caf5) popup_call3_audio_in_window_t3

0x0002,

0xf63f,	// (0x0003537e) popup_call3_audio_in_window_t_ParamLimits

0xf63f,	// (0x0003537e) popup_call3_audio_in_window_t

0x51d5,	// (0x0002af14) bg_popup_call3_rect_pane

0xbbb7,	// (0x000318f6) bg_popup_call3_rect_pane_g1

0x2dff,	// (0x00028b3e) bg_popup_call3_rect_pane_g2

0xbbbf,	// (0x000318fe) bg_popup_call3_rect_pane_g3

0xbbc7,	// (0x00031906) bg_popup_call3_rect_pane_g4

0xbbcf,	// (0x0003190e) bg_popup_call3_rect_pane_g5

0xbbd7,	// (0x00031916) bg_popup_call3_rect_pane_g6

0xbbdf,	// (0x0003191e) bg_popup_call3_rect_pane_g7

0x54bd,	// (0x0002b1fc) mup_visualizer_osc_pane

0x54d3,	// (0x0002b212) mup_visualizer_spec_pane

0x6c87,	// (0x0002c9c6) call3_video_qcif_pane_ParamLimits

0x6c87,	// (0x0002c9c6) call3_video_qcif_pane

0x6c98,	// (0x0002c9d7) call3_video_qcif_uncrop_pane_ParamLimits

0x6c98,	// (0x0002c9d7) call3_video_qcif_uncrop_pane

0x6ca4,	// (0x0002c9e3) call3_video_subqcif_pane_ParamLimits

0x6ca4,	// (0x0002c9e3) call3_video_subqcif_pane

0x6cb8,	// (0x0002c9f7) call3_video_subqcif_uncrop_pane_ParamLimits

0x6cb8,	// (0x0002c9f7) call3_video_subqcif_uncrop_pane

0x6d29,	// (0x0002ca68) popup_call3_audio_in_window_g4_ParamLimits

0x6d29,	// (0x0002ca68) popup_call3_audio_in_window_g4

0x6c46,	// (0x0002c985) mup_spec_half_pane

0x6c4f,	// (0x0002c98e) mup_spec_half_pane_cp

0xbe57,	// (0x00031b96) mup_osc_middle_pane

0xbe60,	// (0x00031b9f) mup_visualizer_osc_pane_g1

0x6c26,	// (0x0002c965) mup_spec_bar_pane_ParamLimits

0x6c26,	// (0x0002c965) mup_spec_bar_pane

0xbe44,	// (0x00031b83) mup_spec_bar_pane_g1

0xbe4e,	// (0x00031b8d) mup_spec_bar_pane_g2

0x0001,

0xf62a,	// (0x00035369) mup_spec_bar_pane_g

0x2e82,	// (0x00028bc1) aid_cale_week_size_cell_pane_ParamLimits

0x2e95,	// (0x00028bd4) bg_cale_heading_pane_ParamLimits

0x2ead,	// (0x00028bec) bg_cale_pane_cp01_ParamLimits

0x2ec6,	// (0x00028c05) cale_week_corner_pane_ParamLimits

0x2ed7,	// (0x00028c16) cale_week_day_heading_pane_ParamLimits

0x2eef,	// (0x00028c2e) cale_week_scroll_pane_g1_ParamLimits

0x2f04,	// (0x00028c43) cale_week_scroll_pane_g2_ParamLimits

0x2f15,	// (0x00028c54) cale_week_scroll_pane_g3_ParamLimits

0x2f26,	// (0x00028c65) cale_week_scroll_pane_g4_ParamLimits

0x2f37,	// (0x00028c76) cale_week_scroll_pane_g5_ParamLimits

0x2f4a,	// (0x00028c89) cale_week_scroll_pane_g6_ParamLimits

0x2f5d,	// (0x00028c9c) cale_week_scroll_pane_g7_ParamLimits

0x2f70,	// (0x00028caf) cale_week_scroll_pane_g8_ParamLimits

0x2f83,	// (0x00028cc2) cale_week_scroll_pane_g9_ParamLimits

0x2f94,	// (0x00028cd3) cale_week_scroll_pane_g10_ParamLimits

0x2fa5,	// (0x00028ce4) cale_week_scroll_pane_g11_ParamLimits

0x2fb6,	// (0x00028cf5) cale_week_scroll_pane_g12_ParamLimits

0x2fc7,	// (0x00028d06) cale_week_scroll_pane_g13_ParamLimits

0x2fd8,	// (0x00028d17) cale_week_scroll_pane_g14_ParamLimits

0x2fe9,	// (0x00028d28) cale_week_scroll_pane_g15_ParamLimits

0xf1d2,	// (0x00034f11) cale_week_scroll_pane_g_ParamLimits

0x2ffa,	// (0x00028d39) cale_week_time_pane_ParamLimits

0x300d,	// (0x00028d4c) grid_cale_week_pane_ParamLimits

0x3022,	// (0x00028d61) listscroll_cale_week_pane_t1

0x3034,	// (0x00028d73) scroll_pane_cp08_ParamLimits

0x3e5f,	// (0x00029b9e) cale_month_corner_pane_ParamLimits

0x4141,	// (0x00029e80) cale_month_pane_t1

0x4153,	// (0x00029e92) cale_month_week_pane_ParamLimits

0x4b5c,	// (0x0002a89b) popup_call_status_window_g1_ParamLimits

0x4b70,	// (0x0002a8af) popup_call_status_window_g2_ParamLimits

0x4b84,	// (0x0002a8c3) popup_call_status_window_g3_ParamLimits

0xf37a,	// (0x000350b9) popup_call_status_window_g_ParamLimits

0x4bed,	// (0x0002a92c) aid_call2_pane

0x57f1,	// (0x0002b530) msg_header_pane_g1

0x59a9,	// (0x0002b6e8) postcard_address2_pane_ParamLimits

0x59a9,	// (0x0002b6e8) postcard_address2_pane

0x59bb,	// (0x0002b6fa) postcard_message2_pane_ParamLimits

0x59bb,	// (0x0002b6fa) postcard_message2_pane

0x6bd3,	// (0x0002c912) message2_row_pane_ParamLimits

0x6bd3,	// (0x0002c912) message2_row_pane

0x6bf2,	// (0x0002c931) address2_row_pane_ParamLimits

0x6bf2,	// (0x0002c931) address2_row_pane

0xbe12,	// (0x00031b51) postcard_message2_row_pane_g1

0xbe1a,	// (0x00031b59) postcard_message2_row_pane_t1

0xbe12,	// (0x00031b51) address2_row_pane_g1

0xbe1a,	// (0x00031b59) address2_row_pane_t1

0xb11f,	// (0x00030e5e) aid_size_cell_vorec

0x26ff,	// (0x0002843e) main_rss_pane

0x6c05,	// (0x0002c944) rss_list_single_pane_ParamLimits

0x6c05,	// (0x0002c944) rss_list_single_pane

0xbe28,	// (0x00031b67) rss_list_single_pane_t1

0xbe36,	// (0x00031b75) rss_list_single_pane_t2

0x0001,

0xf625,	// (0x00035364) rss_list_single_pane_t

0x26ff,	// (0x0002843e) main_camera2_pane

0x26ff,	// (0x0002843e) main_video2_pane

0x1010,	// (0x00026d4f) cams_zoom_pane_cp2_ParamLimits

0x1010,	// (0x00026d4f) cams_zoom_pane_cp2

0x1030,	// (0x00026d6f) image2_vga_pane_ParamLimits

0x1030,	// (0x00026d6f) image2_vga_pane

0x1081,	// (0x00026dc0) main_camera2_pane_g1_ParamLimits

0x1081,	// (0x00026dc0) main_camera2_pane_g1

0x10a1,	// (0x00026de0) main_camera2_pane_g2_ParamLimits

0x10a1,	// (0x00026de0) main_camera2_pane_g2

0x10c1,	// (0x00026e00) main_camera2_pane_g3_ParamLimits

0x10c1,	// (0x00026e00) main_camera2_pane_g3

0x10e1,	// (0x00026e20) main_camera2_pane_g4_ParamLimits

0x10e1,	// (0x00026e20) main_camera2_pane_g4

0x1101,	// (0x00026e40) main_camera2_pane_g5_ParamLimits

0x1101,	// (0x00026e40) main_camera2_pane_g5

0x1121,	// (0x00026e60) main_camera2_pane_g6_ParamLimits

0x1121,	// (0x00026e60) main_camera2_pane_g6

0x1141,	// (0x00026e80) main_camera2_pane_g7_ParamLimits

0x1141,	// (0x00026e80) main_camera2_pane_g7

0x1161,	// (0x00026ea0) main_camera2_pane_g8_ParamLimits

0x1161,	// (0x00026ea0) main_camera2_pane_g8

0x0008,

0xf646,	// (0x00035385) main_camera2_pane_g_ParamLimits

0xf646,	// (0x00035385) main_camera2_pane_g

0x11a1,	// (0x00026ee0) main_camera2_pane_t1_ParamLimits

0x11a1,	// (0x00026ee0) main_camera2_pane_t1

0x11d6,	// (0x00026f15) main_camera2_pane_t2_ParamLimits

0x11d6,	// (0x00026f15) main_camera2_pane_t2

0x11fc,	// (0x00026f3b) main_camera2_pane_t3_ParamLimits

0x11fc,	// (0x00026f3b) main_camera2_pane_t3

0x125a,	// (0x00026f99) main_camera2_pane_t4_ParamLimits

0x125a,	// (0x00026f99) main_camera2_pane_t4

0x0006,

0xf659,	// (0x00035398) main_camera2_pane_t_ParamLimits

0xf659,	// (0x00035398) main_camera2_pane_t

0x12ec,	// (0x0002702b) cams_zoom_pane_cp4_ParamLimits

0x12ec,	// (0x0002702b) cams_zoom_pane_cp4

0x1302,	// (0x00027041) image2_cif_pane_ParamLimits

0x1302,	// (0x00027041) image2_cif_pane

0x132d,	// (0x0002706c) image2_subqcif_pane_ParamLimits

0x132d,	// (0x0002706c) image2_subqcif_pane

0x1347,	// (0x00027086) main_video2_pane_g1_ParamLimits

0x1347,	// (0x00027086) main_video2_pane_g1

0x1361,	// (0x000270a0) main_video2_pane_g2_ParamLimits

0x1361,	// (0x000270a0) main_video2_pane_g2

0x1377,	// (0x000270b6) main_video2_pane_g3_ParamLimits

0x1377,	// (0x000270b6) main_video2_pane_g3

0x138d,	// (0x000270cc) main_video2_pane_g4_ParamLimits

0x138d,	// (0x000270cc) main_video2_pane_g4

0x13a3,	// (0x000270e2) main_video2_pane_g5_ParamLimits

0x13a3,	// (0x000270e2) main_video2_pane_g5

0x13b9,	// (0x000270f8) main_video2_pane_g6_ParamLimits

0x13b9,	// (0x000270f8) main_video2_pane_g6

0x0005,

0xf668,	// (0x000353a7) main_video2_pane_g_ParamLimits

0xf668,	// (0x000353a7) main_video2_pane_g

0x13d3,	// (0x00027112) main_video2_pane_t1_ParamLimits

0x13d3,	// (0x00027112) main_video2_pane_t1

0x13f7,	// (0x00027136) main_video2_pane_t2_ParamLimits

0x13f7,	// (0x00027136) main_video2_pane_t2

0x1445,	// (0x00027184) main_video2_pane_t3_ParamLimits

0x1445,	// (0x00027184) main_video2_pane_t3

0x0002,

0xf675,	// (0x000353b4) main_video2_pane_t_ParamLimits

0xf675,	// (0x000353b4) main_video2_pane_t

0x6729,	// (0x0002c468) call_muted_g2

0x0001,

0xf617,	// (0x00035356) call_muted_g

0x26ff,	// (0x0002843e) main_mup2_pane

0x6e0e,	// (0x0002cb4d) main_mup2_pane_g1_ParamLimits

0x6e0e,	// (0x0002cb4d) main_mup2_pane_g1

0x6e1a,	// (0x0002cb59) main_mup2_pane_g2_ParamLimits

0x6e1a,	// (0x0002cb59) main_mup2_pane_g2

0xbfc8,	// (0x00031d07) main_mup_pane_g13_cp1

0xbfd0,	// (0x00031d0f) mup_volume_pane_cp1

0x6e36,	// (0x0002cb75) main_mup2_pane_g4_ParamLimits

0x6e36,	// (0x0002cb75) main_mup2_pane_g4

0x6e48,	// (0x0002cb87) main_mup2_pane_g5_ParamLimits

0x6e48,	// (0x0002cb87) main_mup2_pane_g5

0x6e5a,	// (0x0002cb99) main_mup2_pane_g6_ParamLimits

0x6e5a,	// (0x0002cb99) main_mup2_pane_g6

0x6e6c,	// (0x0002cbab) main_mup2_pane_g7_ParamLimits

0x6e6c,	// (0x0002cbab) main_mup2_pane_g7

0x0006,

0xf67c,	// (0x000353bb) main_mup2_pane_g_ParamLimits

0xf67c,	// (0x000353bb) main_mup2_pane_g

0x6e84,	// (0x0002cbc3) main_mup2_pane_t1_ParamLimits

0x6e84,	// (0x0002cbc3) main_mup2_pane_t1

0x6e9a,	// (0x0002cbd9) main_mup2_pane_t2_ParamLimits

0x6e9a,	// (0x0002cbd9) main_mup2_pane_t2

0x6eb0,	// (0x0002cbef) main_mup2_pane_t3_ParamLimits

0x6eb0,	// (0x0002cbef) main_mup2_pane_t3

0x6ec6,	// (0x0002cc05) main_mup2_pane_t4_ParamLimits

0x6ec6,	// (0x0002cc05) main_mup2_pane_t4

0x6ede,	// (0x0002cc1d) main_mup2_pane_t5_ParamLimits

0x6ede,	// (0x0002cc1d) main_mup2_pane_t5

0x6ef6,	// (0x0002cc35) main_mup2_pane_t6_ParamLimits

0x6ef6,	// (0x0002cc35) main_mup2_pane_t6

0x0005,

0xf68b,	// (0x000353ca) main_mup2_pane_t_ParamLimits

0xf68b,	// (0x000353ca) main_mup2_pane_t

0x6f26,	// (0x0002cc65) mup2_visualizer_pane_ParamLimits

0x6f26,	// (0x0002cc65) mup2_visualizer_pane

0x6f54,	// (0x0002cc93) mup_progress_pane_cp_ParamLimits

0x6f54,	// (0x0002cc93) mup_progress_pane_cp

0xbfaa,	// (0x00031ce9) mup_volume_pane_cp_ParamLimits

0xbfaa,	// (0x00031ce9) mup_volume_pane_cp

0x6f68,	// (0x0002cca7) mup2_visualizer_pane_g1_ParamLimits

0x6f68,	// (0x0002cca7) mup2_visualizer_pane_g1

0xbee9,	// (0x00031c28) mup2_visualizer_pane_g2_ParamLimits

0xbee9,	// (0x00031c28) mup2_visualizer_pane_g2

0x6f7f,	// (0x0002ccbe) mup2_visualizer_pane_g3_ParamLimits

0x6f7f,	// (0x0002ccbe) mup2_visualizer_pane_g3

0x0002,

0xf698,	// (0x000353d7) mup2_visualizer_pane_g_ParamLimits

0xf698,	// (0x000353d7) mup2_visualizer_pane_g

0x5d7e,	// (0x0002babd) aid_size_cell_fmradio

0x68db,	// (0x0002c61a) aid_height_parent_landcape

0x3b93,	// (0x000298d2) wml_content_pane_cp

0x3b9b,	// (0x000298da) wml_tabs_pane

0x3ba4,	// (0x000298e3) popup_wml_miniature_window

0x3bac,	// (0x000298eb) scroll_pane_cp021

0x3bc0,	// (0x000298ff) wml_content_pane_comp8

0x26ff,	// (0x0002843e) bg_popup_sub_pane_cp05

0xbf07,	// (0x00031c46) popup_wml_miniature_window_g1

0xbf0f,	// (0x00031c4e) wml_miniature_view_pane

0x6f8b,	// (0x0002ccca) aid_size_wml_view

0x6f93,	// (0x0002ccd2) wml_miniature_view_pane_g1

0x6f9c,	// (0x0002ccdb) wml_miniature_view_pane_g2

0x6fa5,	// (0x0002cce4) wml_miniature_view_pane_g3

0x6fad,	// (0x0002ccec) wml_miniature_view_pane_g4

0x6fb5,	// (0x0002ccf4) wml_miniature_view_pane_g5

0x6fbd,	// (0x0002ccfc) wml_miniature_view_pane_g6

0x6fc5,	// (0x0002cd04) wml_miniature_view_pane_g7

0x6fcd,	// (0x0002cd0c) wml_miniature_view_pane_g8

0x0007,

0xf69f,	// (0x000353de) wml_miniature_view_pane_g

0xbf17,	// (0x00031c56) background_graphic_ParamLimits

0xbf17,	// (0x00031c56) background_graphic

0xbf23,	// (0x00031c62) wml_tabs_2_pane

0xbf2c,	// (0x00031c6b) wml_tabs_3_pane_ParamLimits

0xbf2c,	// (0x00031c6b) wml_tabs_3_pane

0xbf3e,	// (0x00031c7d) wml_tabs_4_pane_ParamLimits

0xbf3e,	// (0x00031c7d) wml_tabs_4_pane

0xbf54,	// (0x00031c93) wml_tabs_5_pane_ParamLimits

0xbf54,	// (0x00031c93) wml_tabs_5_pane

0xbf6e,	// (0x00031cad) wml_tabs_pane_g2_ParamLimits

0xbf6e,	// (0x00031cad) wml_tabs_pane_g2

0xbf82,	// (0x00031cc1) wml_tabs_pane_g3_ParamLimits

0xbf82,	// (0x00031cc1) wml_tabs_pane_g3

0x6fd5,	// (0x0002cd14) wml_tabs_2_active_pane_ParamLimits

0x6fd5,	// (0x0002cd14) wml_tabs_2_active_pane

0x6fe9,	// (0x0002cd28) wml_tabs_2_passive_pane_ParamLimits

0x6fe9,	// (0x0002cd28) wml_tabs_2_passive_pane

0x6ffd,	// (0x0002cd3c) wml_tabs_3_active_pane_cp_ParamLimits

0x6ffd,	// (0x0002cd3c) wml_tabs_3_active_pane_cp

0x7012,	// (0x0002cd51) wml_tabs_3_passive_pane_ParamLimits

0x7012,	// (0x0002cd51) wml_tabs_3_passive_pane

0x7025,	// (0x0002cd64) wml_tabs_3_passive_pane_cp_ParamLimits

0x7025,	// (0x0002cd64) wml_tabs_3_passive_pane_cp

0x703c,	// (0x0002cd7b) tabs_4_active_pane

0x7044,	// (0x0002cd83) tabs_4_passive_pane

0x704e,	// (0x0002cd8d) tabs_4_passive_pane_cp

0x7056,	// (0x0002cd95) tabs_4_passive_pane_cp2

0xbc3f,	// (0x0003197e) aid_height_text

0x548f,	// (0x0002b1ce) mup_volume_cont_pane_ParamLimits

0x548f,	// (0x0002b1ce) mup_volume_cont_pane

0x29f0,	// (0x0002872f) aid_size_cell_pinb

0x29fa,	// (0x00028739) aid_size_list_pinb

0x6f40,	// (0x0002cc7f) mup2_volume_cont_pane_ParamLimits

0x6f40,	// (0x0002cc7f) mup2_volume_cont_pane

0xbf96,	// (0x00031cd5) mup2_volume_cont_pane_g1_ParamLimits

0xbf96,	// (0x00031cd5) mup2_volume_cont_pane_g1

0x1fd5,	// (0x00027d14) aid_size_cell_touch_ParamLimits

0x1fd5,	// (0x00027d14) aid_size_cell_touch

0x2243,	// (0x00027f82) touch_pane_ParamLimits

0x2243,	// (0x00027f82) touch_pane

0x1fb7,	// (0x00027cf6) main_rss2_pane

0xbfd8,	// (0x00031d17) listscroll_rss2_pane

0xbfe1,	// (0x00031d20) rss2_navigation_pane

0xbfe9,	// (0x00031d28) list_rss2_pane

0x4d9c,	// (0x0002aadb) scroll_pane_cp22

0xbff1,	// (0x00031d30) rss2_navigation_pane_g1

0xbffa,	// (0x00031d39) rss2_navigation_pane_g2

0xc002,	// (0x00031d41) rss2_navigation_pane_g3

0x0002,

0xf6b0,	// (0x000353ef) rss2_navigation_pane_g

0xc00a,	// (0x00031d49) rss2_navigation_pane_t1

0x7060,	// (0x0002cd9f) rss2_list_single_pane_ParamLimits

0x7060,	// (0x0002cd9f) rss2_list_single_pane

0xc018,	// (0x00031d57) rss2_list_single_pane_t2

0xc026,	// (0x00031d65) rss2_list_single_pane_t3_ParamLimits

0xc026,	// (0x00031d65) rss2_list_single_pane_t3

0xc043,	// (0x00031d82) rss2_list_single_pane_t4

0x461f,	// (0x0002a35e) smil_status_pane_g1

0x2229,	// (0x00027f68) main_image2_pane_ParamLimits

0x2229,	// (0x00027f68) main_image2_pane

0x1181,	// (0x00026ec0) main_camera2_pane_g9_ParamLimits

0x1181,	// (0x00026ec0) main_camera2_pane_g9

0x12af,	// (0x00026fee) main_camera2_pane_t5_ParamLimits

0x12af,	// (0x00026fee) main_camera2_pane_t5

0xbeb9,	// (0x00031bf8) main_camera2_pane_t6_ParamLimits

0xbeb9,	// (0x00031bf8) main_camera2_pane_t6

0x7078,	// (0x0002cdb7) main_image2_pane_g1_ParamLimits

0x7078,	// (0x0002cdb7) main_image2_pane_g1

0x5d34,	// (0x0002ba73) smil2_video_pane_ParamLimits

0x5d34,	// (0x0002ba73) smil2_video_pane

0x2005,	// (0x00027d44) aid_zoom_text_primary_cp

0x21e5,	// (0x00027f24) popup_preview_fixed_window

0x3a86,	// (0x000297c5) im_reading_pane_g1

0x0ff8,	// (0x00026d37) cams2_bc_adjust_pane_cp_ParamLimits

0x0ff8,	// (0x00026d37) cams2_bc_adjust_pane_cp

0x12de,	// (0x0002701d) cams2_bc_adjust_pane_ParamLimits

0x12de,	// (0x0002701d) cams2_bc_adjust_pane

0xc051,	// (0x00031d90) cams2_bc_adjust_pane_g1

0xc059,	// (0x00031d98) cams2_slider_pane

0xc062,	// (0x00031da1) cams2_slider_pane_g1

0xc06b,	// (0x00031daa) cams2_slider_pane_g2

0x0006,

0xf6b7,	// (0x000353f6) cams2_slider_pane_g

0x0d86,	// (0x00026ac5) calc_display_pane_ParamLimits

0x0dae,	// (0x00026aed) calc_paper_pane_ParamLimits

0x0dd1,	// (0x00026b10) grid_calc_pane_ParamLimits

0xb219,	// (0x00030f58) popup_clock_digital_window_t1_ParamLimits

0x5bb7,	// (0x0002b8f6) main_image_pane_t1

0x0d68,	// (0x00026aa7) aid_size_cell_calc_ParamLimits

0x0d68,	// (0x00026aa7) aid_size_cell_calc

0x6921,	// (0x0002c660) popup_blid_sat_info2_window_ParamLimits

0x6921,	// (0x0002c660) popup_blid_sat_info2_window

0xc08d,	// (0x00031dcc) aid_size_cell_blid

0xc095,	// (0x00031dd4) bg_popup_window_pane_cp07

0xc0b8,	// (0x00031df7) grid_popup_blid_pane

0xc0c2,	// (0x00031e01) heading_pane_cp05_ParamLimits

0xc0c2,	// (0x00031e01) heading_pane_cp05

0xc18c,	// (0x00031ecb) cell_popup_blid_pane_ParamLimits

0xc18c,	// (0x00031ecb) cell_popup_blid_pane

0xc1b2,	// (0x00031ef1) cell_popup_blid_pane_g1

0xc1ba,	// (0x00031ef9) cell_popup_blid_pane_t1

0x6f10,	// (0x0002cc4f) mup2_indicator_pane_ParamLimits

0x6f10,	// (0x0002cc4f) mup2_indicator_pane

0x51d5,	// (0x0002af14) mup2_visualizer_osc_pane

0xbef5,	// (0x00031c34) mup2_visualizer_spec_pane_ParamLimits

0xbef5,	// (0x00031c34) mup2_visualizer_spec_pane

0x708e,	// (0x0002cdcd) mup2_spec_half_pane

0x7097,	// (0x0002cdd6) mup2_spec_half_pane_cp

0x709f,	// (0x0002cdde) mup2_spec_bar_pane_ParamLimits

0x709f,	// (0x0002cdde) mup2_spec_bar_pane

0xbe44,	// (0x00031b83) mup2_spec_bar_pane_g1

0xbe4e,	// (0x00031b8d) mup2_spec_bar_pane_g2

0x0001,

0xf62a,	// (0x00035369) mup2_spec_bar_pane_g

0x70bf,	// (0x0002cdfe) mup2_osc_middle_pane

0xbe60,	// (0x00031b9f) mup2_visualizer_osc_pane_g1

0x22b5,	// (0x00027ff4) popup_number_entry_window_t1_ParamLimits

0x22c8,	// (0x00028007) popup_number_entry_window_t2_ParamLimits

0x22da,	// (0x00028019) popup_number_entry_window_t3_ParamLimits

0x22ec,	// (0x0002802b) popup_number_entry_window_t5_ParamLimits

0x22ec,	// (0x0002802b) popup_number_entry_window_t5

0xf0ec,	// (0x00034e2b) popup_number_entry_window_t_ParamLimits

0x2321,	// (0x00028060) text_title_cp2_ParamLimits

0xb258,	// (0x00030f97) aid_hotspot_pointer_text2_pane

0xb27e,	// (0x00030fbd) main_viewer_pane_g9_ParamLimits

0xb27e,	// (0x00030fbd) main_viewer_pane_g9

0x4141,	// (0x00029e80) cale_month_pane_t1_ParamLimits

0x46a9,	// (0x0002a3e8) bg_cale_pane_ParamLimits

0x46c1,	// (0x0002a400) list_cale_pane_ParamLimits

0x3022,	// (0x00028d61) listscroll_cale_day_pane_t1

0x46d2,	// (0x0002a411) scroll_pane_cp09_ParamLimits

0x5541,	// (0x0002b280) main_mup_eq_pane_t1_ParamLimits

0x5541,	// (0x0002b280) main_mup_eq_pane_t1

0x555b,	// (0x0002b29a) main_mup_eq_pane_t2_ParamLimits

0x555b,	// (0x0002b29a) main_mup_eq_pane_t2

0x5575,	// (0x0002b2b4) main_mup_eq_pane_t3_ParamLimits

0x5575,	// (0x0002b2b4) main_mup_eq_pane_t3

0x5591,	// (0x0002b2d0) main_mup_eq_pane_t4_ParamLimits

0x5591,	// (0x0002b2d0) main_mup_eq_pane_t4

0x55ad,	// (0x0002b2ec) main_mup_eq_pane_t5_ParamLimits

0x55ad,	// (0x0002b2ec) main_mup_eq_pane_t5

0x55c9,	// (0x0002b308) main_mup_eq_pane_t6_ParamLimits

0x55c9,	// (0x0002b308) main_mup_eq_pane_t6

0x55dd,	// (0x0002b31c) main_mup_eq_pane_t7_ParamLimits

0x55dd,	// (0x0002b31c) main_mup_eq_pane_t7

0x55f1,	// (0x0002b330) main_mup_eq_pane_t8_ParamLimits

0x55f1,	// (0x0002b330) main_mup_eq_pane_t8

0x5605,	// (0x0002b344) main_mup_eq_pane_t9_ParamLimits

0x5605,	// (0x0002b344) main_mup_eq_pane_t9

0x561f,	// (0x0002b35e) main_mup_eq_pane_t10_ParamLimits

0x561f,	// (0x0002b35e) main_mup_eq_pane_t10

0x0009,

0xf479,	// (0x000351b8) main_mup_eq_pane_t_ParamLimits

0xf479,	// (0x000351b8) main_mup_eq_pane_t

0x56ce,	// (0x0002b40d) mup_equalizer_pane_cp5_ParamLimits

0x56e2,	// (0x0002b421) mup_equalizer_pane_cp6_ParamLimits

0x56f6,	// (0x0002b435) mup_equalizer_pane_cp7_ParamLimits

0x1fb7,	// (0x00027cf6) main_gallery_pane

0xbe69,	// (0x00031ba8) smil2_volume_pane

0xbe71,	// (0x00031bb0) smil_status_volume_pane_g1_ParamLimits

0xbe84,	// (0x00031bc3) smil_status_volume_pane_g2_ParamLimits

0xbe97,	// (0x00031bd6) smil_status_volume_pane_g3_ParamLimits

0xf62f,	// (0x0003536e) smil_status_volume_pane_g_ParamLimits

0xc095,	// (0x00031dd4) bg_popup_window_pane_cp07_ParamLimits

0xc0a3,	// (0x00031de2) blid_firmament_pane

0x70c8,	// (0x0002ce07) aid_size_cell_gallery_ParamLimits

0x70c8,	// (0x0002ce07) aid_size_cell_gallery

0x70de,	// (0x0002ce1d) grid_gallery_pane_ParamLimits

0x70de,	// (0x0002ce1d) grid_gallery_pane

0x70f7,	// (0x0002ce36) cell_gallery_pane_ParamLimits

0x70f7,	// (0x0002ce36) cell_gallery_pane

0xc1c8,	// (0x00031f07) bg_cell_gallery_focus_pane_ParamLimits

0xc1c8,	// (0x00031f07) bg_cell_gallery_focus_pane

0xc1da,	// (0x00031f19) cell_gallery_pane_g1_ParamLimits

0xc1da,	// (0x00031f19) cell_gallery_pane_g1

0x7140,	// (0x0002ce7f) cell_gallery_pane_g2_ParamLimits

0x7140,	// (0x0002ce7f) cell_gallery_pane_g2

0x714d,	// (0x0002ce8c) cell_gallery_pane_g3_ParamLimits

0x714d,	// (0x0002ce8c) cell_gallery_pane_g3

0xc1e6,	// (0x00031f25) cell_gallery_pane_g4_ParamLimits

0xc1e6,	// (0x00031f25) cell_gallery_pane_g4

0x0003,

0xf6dd,	// (0x0003541c) cell_gallery_pane_g_ParamLimits

0xf6dd,	// (0x0003541c) cell_gallery_pane_g

0xc1f2,	// (0x00031f31) bg_cell_gallery_focus_pane_g1

0xc1fa,	// (0x00031f39) bg_cell_gallery_focus_pane_g2

0xc202,	// (0x00031f41) bg_cell_gallery_focus_pane_g3

0xc20a,	// (0x00031f49) bg_cell_gallery_focus_pane_g4

0xc212,	// (0x00031f51) bg_cell_gallery_focus_pane_g5

0xc21a,	// (0x00031f59) bg_cell_gallery_focus_pane_g6

0xc222,	// (0x00031f61) bg_cell_gallery_focus_pane_g7

0xc22a,	// (0x00031f69) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6e6,	// (0x00035425) bg_cell_gallery_focus_pane_g

0xc232,	// (0x00031f71) aid_firma_cardinal

0xc246,	// (0x00031f85) blid_firmament_pane_t1

0xc25d,	// (0x00031f9c) blid_firmament_pane_t2

0xc274,	// (0x00031fb3) blid_firmament_pane_t3

0xc28b,	// (0x00031fca) blid_firmament_pane_t4

0x0003,

0xf6f7,	// (0x00035436) blid_firmament_pane_t

0xc2a2,	// (0x00031fe1) blid_sat_info_pane

0xc2b2,	// (0x00031ff1) blid_sat_info_pane_g1

0xc2b2,	// (0x00031ff1) blid_sat_info_pane_g2

0x0001,

0xf700,	// (0x0003543f) blid_sat_info_pane_g

0xc2bc,	// (0x00031ffb) blid_sat_info_pane_t1

0xc2ca,	// (0x00032009) smil2_volume_content_pane

0xc2d3,	// (0x00032012) smil2_volume_pane_g1

0xc2db,	// (0x0003201a) smil2_volume_content_pane_g1

0xc2e4,	// (0x00032023) smil2_volume_content_pane_g2

0xc2ed,	// (0x0003202c) smil2_volume_content_pane_g3

0xc2f6,	// (0x00032035) smil2_volume_content_pane_g4

0xc2ff,	// (0x0003203e) smil2_volume_content_pane_g5

0xc308,	// (0x00032047) smil2_volume_content_pane_g6

0xc311,	// (0x00032050) smil2_volume_content_pane_g7

0xc31a,	// (0x00032059) smil2_volume_content_pane_g8

0xc323,	// (0x00032062) smil2_volume_content_pane_g9

0xc32c,	// (0x0003206b) smil2_volume_content_pane_g10

0x0009,

0xf705,	// (0x00035444) smil2_volume_content_pane_g

0x308e,	// (0x00028dcd) cale_week_day_heading_pane_t1_ParamLimits

0x30a2,	// (0x00028de1) cale_week_day_heading_pane_t2_ParamLimits

0x30b6,	// (0x00028df5) cale_week_day_heading_pane_t3_ParamLimits

0x30ca,	// (0x00028e09) cale_week_day_heading_pane_t4_ParamLimits

0x30de,	// (0x00028e1d) cale_week_day_heading_pane_t5_ParamLimits

0x30f2,	// (0x00028e31) cale_week_day_heading_pane_t6_ParamLimits

0x3108,	// (0x00028e47) cale_week_day_heading_pane_t7_ParamLimits

0xf1f1,	// (0x00034f30) cale_week_day_heading_pane_t_ParamLimits

0x311c,	// (0x00028e5b) bg_cale_side_pane_ParamLimits

0x0e9e,	// (0x00026bdd) cale_week_time_pane_t1_ParamLimits

0x0eb6,	// (0x00026bf5) cale_week_time_pane_t2_ParamLimits

0x0ece,	// (0x00026c0d) cale_week_time_pane_t3_ParamLimits

0x0ee6,	// (0x00026c25) cale_week_time_pane_t4_ParamLimits

0x0efe,	// (0x00026c3d) cale_week_time_pane_t5_ParamLimits

0x0f16,	// (0x00026c55) cale_week_time_pane_t6_ParamLimits

0x0f2e,	// (0x00026c6d) cale_week_time_pane_t7_ParamLimits

0x0f46,	// (0x00026c85) cale_week_time_pane_t8_ParamLimits

0xf200,	// (0x00034f3f) cale_week_time_pane_t_ParamLimits

0x312a,	// (0x00028e69) cell_cale_week_pane_g2_ParamLimits

0x311c,	// (0x00028e5b) bg_cale_side_pane_cp01_ParamLimits

0x4480,	// (0x0002a1bf) cale_month_week_pane_t1_ParamLimits

0x4497,	// (0x0002a1d6) cale_month_week_pane_t2_ParamLimits

0x44ae,	// (0x0002a1ed) cale_month_week_pane_t3_ParamLimits

0x44c5,	// (0x0002a204) cale_month_week_pane_t4_ParamLimits

0x44dc,	// (0x0002a21b) cale_month_week_pane_t5_ParamLimits

0x44f3,	// (0x0002a232) cale_month_week_pane_t6_ParamLimits

0xf2d9,	// (0x00035018) cale_month_week_pane_t_ParamLimits

0xb199,	// (0x00030ed8) cell_cale_month_pane_g1_ParamLimits

0x1fb7,	// (0x00027cf6) main_cale_event_viewer_pane

0x1fb7,	// (0x00027cf6) listscroll_cale_event_viewer_pane

0xc335,	// (0x00032074) list_cale_ev_pane

0xc33d,	// (0x0003207c) scroll_pane_cp023

0xc349,	// (0x00032088) field_cale_ev_pane_ParamLimits

0xc349,	// (0x00032088) field_cale_ev_pane

0xc363,	// (0x000320a2) field_cale_ev_content_pane_ParamLimits

0xc363,	// (0x000320a2) field_cale_ev_content_pane

0xc36f,	// (0x000320ae) field_cale_ev_pane_g1_ParamLimits

0xc36f,	// (0x000320ae) field_cale_ev_pane_g1

0xc37b,	// (0x000320ba) field_cale_ev_pane_g2_ParamLimits

0xc37b,	// (0x000320ba) field_cale_ev_pane_g2

0xc393,	// (0x000320d2) field_cale_ev_pane_g3_ParamLimits

0xc393,	// (0x000320d2) field_cale_ev_pane_g3

0x0002,

0xf71a,	// (0x00035459) field_cale_ev_pane_g_ParamLimits

0xf71a,	// (0x00035459) field_cale_ev_pane_g

0xc3ab,	// (0x000320ea) field_cale_ev_pane_t1_ParamLimits

0xc3ab,	// (0x000320ea) field_cale_ev_pane_t1

0xc3c2,	// (0x00032101) field_cale_ev_content_pane_t1_ParamLimits

0xc3c2,	// (0x00032101) field_cale_ev_content_pane_t1

0x57df,	// (0x0002b51e) bg_button_pane_cp01

0x2c37,	// (0x00028976) listscroll_cale_week_pane_ParamLimits

0x2e78,	// (0x00028bb7) popup_toolbar_window_cp01

0x3022,	// (0x00028d61) listscroll_cale_week_pane_t1_ParamLimits

0x2c37,	// (0x00028976) listscroll_cale_day_pane_ParamLimits

0x469f,	// (0x0002a3de) popup_toolbar_window_cp02

0x3022,	// (0x00028d61) listscroll_cale_day_pane_t1_ParamLimits

0x2c37,	// (0x00028976) main_cale_month_pane_ParamLimits

0x6b47,	// (0x0002c886) popup_toolbar_window_cp03_ParamLimits

0x6b47,	// (0x0002c886) popup_toolbar_window_cp03

0x5b95,	// (0x0002b8d4) main_image_pane_g2_ParamLimits

0x5b95,	// (0x0002b8d4) main_image_pane_g2

0x5ba6,	// (0x0002b8e5) main_image_pane_g3_ParamLimits

0x5ba6,	// (0x0002b8e5) main_image_pane_g3

0x0002,

0xf50b,	// (0x0003524a) main_image_pane_g_ParamLimits

0xf50b,	// (0x0003524a) main_image_pane_g

0x5bb7,	// (0x0002b8f6) main_image_pane_t1_ParamLimits

0x5bce,	// (0x0002b90d) main_image_pane_t2_ParamLimits

0x5bce,	// (0x0002b90d) main_image_pane_t2

0x5be0,	// (0x0002b91f) main_image_pane_t3_ParamLimits

0x5be0,	// (0x0002b91f) main_image_pane_t3

0x5c08,	// (0x0002b947) main_image_pane_t4_ParamLimits

0x5c08,	// (0x0002b947) main_image_pane_t4

0x0003,

0xf512,	// (0x00035251) main_image_pane_t_ParamLimits

0xf512,	// (0x00035251) main_image_pane_t

0x5c28,	// (0x0002b967) popup_image_details_window_cp01

0x5c32,	// (0x0002b971) popup_toobar_trans_pane_cp01_ParamLimits

0x5c32,	// (0x0002b971) popup_toobar_trans_pane_cp01

0x69f8,	// (0x0002c737) popup_image_details_window_ParamLimits

0x69f8,	// (0x0002c737) popup_image_details_window

0xbdca,	// (0x00031b09) popup_image_focus_window

0x0fb2,	// (0x00026cf1) camera2_autofocus_pane_ParamLimits

0x0fb2,	// (0x00026cf1) camera2_autofocus_pane

0x1fb7,	// (0x00027cf6) bg_popup_sub_pane_cp06

0xc3df,	// (0x0003211e) popup_image_focus_window_g1

0xc3e7,	// (0x00032126) popup_image_focus_window_g2

0xc3ef,	// (0x0003212e) popup_image_focus_window_g3

0xc3f7,	// (0x00032136) popup_image_focus_window_g4

0x0003,

0xf721,	// (0x00035460) popup_image_focus_window_g

0xc3ff,	// (0x0003213e) popup_image_focus_window_t1

0xc40d,	// (0x0003214c) popup_image_focus_window_t2

0xc41d,	// (0x0003215c) popup_image_focus_window_t3

0x0002,

0xf72a,	// (0x00035469) popup_image_focus_window_t

0xc42b,	// (0x0003216a) camera2_autofocus_pane_g1

0x2229,	// (0x00027f68) bg_tb_trans_pane_cp01

0xc439,	// (0x00032178) popup_image_details_window_g1

0xc44c,	// (0x0003218b) popup_image_details_window_g2

0x0002,

0xf73c,	// (0x0003547b) popup_image_details_window_g

0xc475,	// (0x000321b4) popup_image_details_window_t1

0xc487,	// (0x000321c6) popup_image_details_window_t2

0xc4a0,	// (0x000321df) popup_image_details_window_t3

0xc4b4,	// (0x000321f3) popup_image_details_window_t4

0xc4cf,	// (0x0003220e) popup_image_details_window_t5

0x0004,

0xf743,	// (0x00035482) popup_image_details_window_t

0x2c23,	// (0x00028962) bg_calc_paper_pane_ParamLimits

0xb085,	// (0x00030dc4) grid_highlight_pane_cp013

0xb08f,	// (0x00030dce) list_calc_pane_ParamLimits

0xb0a1,	// (0x00030de0) scroll_pane_cp024

0x2c37,	// (0x00028976) bg_calc_display_pane_ParamLimits

0x0dff,	// (0x00026b3e) calc_display_pane_t1_ParamLimits

0x0e11,	// (0x00026b50) calc_display_pane_t2_ParamLimits

0xb0a9,	// (0x00030de8) calc_display_pane_t3_ParamLimits

0xf173,	// (0x00034eb2) calc_display_pane_t_ParamLimits

0x0e72,	// (0x00026bb1) cell_calc_pane_g2

0x0001,

0xf190,	// (0x00034ecf) cell_calc_pane_g

0x0e7b,	// (0x00026bba) cell_calc_pane_t1

0x2cf0,	// (0x00028a2f) grid_highlight_pane_cp02_ParamLimits

0x2d06,	// (0x00028a45) toolbar_button_pane_cp01_ParamLimits

0x2d06,	// (0x00028a45) toolbar_button_pane_cp01

0x5c74,	// (0x0002b9b3) temp_image_control_pane_ParamLimits

0x5c74,	// (0x0002b9b3) temp_image_control_pane

0x2229,	// (0x00027f68) main_mp3_pane

0xc4e9,	// (0x00032228) temp_image_control_pane_g1_ParamLimits

0xc4e9,	// (0x00032228) temp_image_control_pane_g1

0xc4f7,	// (0x00032236) temp_image_control_pane_g2_ParamLimits

0xc4f7,	// (0x00032236) temp_image_control_pane_g2

0xc509,	// (0x00032248) temp_image_control_pane_g3_ParamLimits

0xc509,	// (0x00032248) temp_image_control_pane_g3

0x718a,	// (0x0002cec9) temp_image_control_pane_g4_ParamLimits

0x718a,	// (0x0002cec9) temp_image_control_pane_g4

0x0003,

0xf74e,	// (0x0003548d) temp_image_control_pane_g_ParamLimits

0xf74e,	// (0x0003548d) temp_image_control_pane_g

0xc4e9,	// (0x00032228) main_mp3_pane_g1

0x719d,	// (0x0002cedc) main_mp3_pane_g2

0x0007,

0xf757,	// (0x00035496) main_mp3_pane_g

0xc54c,	// (0x0003228b) main_mp3_pane_t1

0x32a1,	// (0x00028fe0) main_camera_pane_g8_ParamLimits

0x32a1,	// (0x00028fe0) main_camera_pane_g8

0x3458,	// (0x00029197) main_video_pane_g7_ParamLimits

0x3458,	// (0x00029197) main_video_pane_g7

0xbed7,	// (0x00031c16) main_camera2_pane_t7_ParamLimits

0xbed7,	// (0x00031c16) main_camera2_pane_t7

0x3b53,	// (0x00029892) scroll_pane_cp025_ParamLimits

0x3b53,	// (0x00029892) scroll_pane_cp025

0x3b67,	// (0x000298a6) scroll_pane_cp026_ParamLimits

0x3b67,	// (0x000298a6) scroll_pane_cp026

0x3b76,	// (0x000298b5) wml_content_pane_ParamLimits

0x1fb7,	// (0x00027cf6) main_touch_calib_pane

0x7269,	// (0x0002cfa8) main_touch_calib_pane_g1

0x7275,	// (0x0002cfb4) main_touch_calib_pane_g2

0x7281,	// (0x0002cfc0) main_touch_calib_pane_g3

0x728d,	// (0x0002cfcc) main_touch_calib_pane_g4

0x0003,

0xf775,	// (0x000354b4) main_touch_calib_pane_g

0x7299,	// (0x0002cfd8) main_touch_calib_pane_t1

0x72b3,	// (0x0002cff2) main_touch_calib_pane_t2

0x0004,

0xf77e,	// (0x000354bd) main_touch_calib_pane_t

0x504e,	// (0x0002ad8d) mup_progress_pane_cp02

0x506d,	// (0x0002adac) navi_pane_g1

0x5126,	// (0x0002ae65) navi_pane_mp_t3

0x2229,	// (0x00027f68) main_mp3_pane_ParamLimits

0x6b85,	// (0x0002c8c4) navi_pane_ParamLimits

0xc4e9,	// (0x00032228) main_mp3_pane_g1_ParamLimits

0x719d,	// (0x0002cedc) main_mp3_pane_g2_ParamLimits

0x71ab,	// (0x0002ceea) main_mp3_pane_g3_ParamLimits

0x71ab,	// (0x0002ceea) main_mp3_pane_g3

0x71b9,	// (0x0002cef8) main_mp3_pane_g4_ParamLimits

0x71b9,	// (0x0002cef8) main_mp3_pane_g4

0xc519,	// (0x00032258) main_mp3_pane_g5_ParamLimits

0xc519,	// (0x00032258) main_mp3_pane_g5

0xc527,	// (0x00032266) main_mp3_pane_g6_ParamLimits

0xc527,	// (0x00032266) main_mp3_pane_g6

0xc534,	// (0x00032273) main_mp3_pane_g7_ParamLimits

0xc534,	// (0x00032273) main_mp3_pane_g7

0xc540,	// (0x0003227f) main_mp3_pane_g8_ParamLimits

0xc540,	// (0x0003227f) main_mp3_pane_g8

0xf757,	// (0x00035496) main_mp3_pane_g_ParamLimits

0x71c7,	// (0x0002cf06) main_mp3_pane_t2

0x71d5,	// (0x0002cf14) main_mp3_pane_t3

0xc55a,	// (0x00032299) main_mp3_pane_t4

0xc568,	// (0x000322a7) main_mp3_pane_t5

0x0005,

0xf768,	// (0x000354a7) main_mp3_pane_t

0xc576,	// (0x000322b5) mup_progress_pane_cp01

0x2005,	// (0x00027d44) aid_zoom_text_secondary2

0xc335,	// (0x00032074) list_cale_ev2_pane

0xc33d,	// (0x0003207c) scroll_pane_cp023_ParamLimits

0x7309,	// (0x0002d048) field_cale_ev2_pane_ParamLimits

0x7309,	// (0x0002d048) field_cale_ev2_pane

0x732f,	// (0x0002d06e) field_cale_ev2_pane_g1_ParamLimits

0x732f,	// (0x0002d06e) field_cale_ev2_pane_g1

0x733b,	// (0x0002d07a) field_cale_ev2_pane_g2_ParamLimits

0x733b,	// (0x0002d07a) field_cale_ev2_pane_g2

0x7353,	// (0x0002d092) field_cale_ev2_pane_g3_ParamLimits

0x7353,	// (0x0002d092) field_cale_ev2_pane_g3

0x0003,

0xf789,	// (0x000354c8) field_cale_ev2_pane_g_ParamLimits

0xf789,	// (0x000354c8) field_cale_ev2_pane_g

0xc58a,	// (0x000322c9) field_cale_ev2_pane_t1_ParamLimits

0xc58a,	// (0x000322c9) field_cale_ev2_pane_t1

0xc5a1,	// (0x000322e0) field_cale_ev2_pane_t2_ParamLimits

0xc5a1,	// (0x000322e0) field_cale_ev2_pane_t2

0x0001,

0xf792,	// (0x000354d1) field_cale_ev2_pane_t_ParamLimits

0xf792,	// (0x000354d1) field_cale_ev2_pane_t

0x595f,	// (0x0002b69e) main_postcard_pane_g5_ParamLimits

0x595f,	// (0x0002b69e) main_postcard_pane_g5

0x5975,	// (0x0002b6b4) main_postcard_pane_g6_ParamLimits

0x5975,	// (0x0002b6b4) main_postcard_pane_g6

0x31e2,	// (0x00028f21) camera2_autofocus_pane_cp_ParamLimits

0x31e2,	// (0x00028f21) camera2_autofocus_pane_cp

0x2229,	// (0x00027f68) main_mup3_pane

0x738b,	// (0x0002d0ca) main_mup3_pane_g1_ParamLimits

0x738b,	// (0x0002d0ca) main_mup3_pane_g1

0x73ad,	// (0x0002d0ec) main_mup3_pane_g2_ParamLimits

0x73ad,	// (0x0002d0ec) main_mup3_pane_g2

0x742e,	// (0x0002d16d) main_mup3_pane_g3_ParamLimits

0x742e,	// (0x0002d16d) main_mup3_pane_g3

0x7470,	// (0x0002d1af) main_mup3_pane_g4_ParamLimits

0x7470,	// (0x0002d1af) main_mup3_pane_g4

0x74b2,	// (0x0002d1f1) main_mup3_pane_g5_ParamLimits

0x74b2,	// (0x0002d1f1) main_mup3_pane_g5

0x74f6,	// (0x0002d235) main_mup3_pane_g6_ParamLimits

0x74f6,	// (0x0002d235) main_mup3_pane_g6

0xc5b6,	// (0x000322f5) main_mup3_pane_g7_ParamLimits

0xc5b6,	// (0x000322f5) main_mup3_pane_g7

0x0007,

0xf7a2,	// (0x000354e1) main_mup3_pane_g_ParamLimits

0xf7a2,	// (0x000354e1) main_mup3_pane_g

0x7572,	// (0x0002d2b1) main_mup3_pane_t1_ParamLimits

0x7572,	// (0x0002d2b1) main_mup3_pane_t1

0x75e6,	// (0x0002d325) main_mup3_pane_t2_ParamLimits

0x75e6,	// (0x0002d325) main_mup3_pane_t2

0x76ba,	// (0x0002d3f9) main_mup3_pane_t4_ParamLimits

0x76ba,	// (0x0002d3f9) main_mup3_pane_t4

0x7714,	// (0x0002d453) main_mup3_pane_t5_ParamLimits

0x7714,	// (0x0002d453) main_mup3_pane_t5

0x77c8,	// (0x0002d507) main_mup3_pane_t6_ParamLimits

0x77c8,	// (0x0002d507) main_mup3_pane_t6

0x0005,

0xf7b3,	// (0x000354f2) main_mup3_pane_t_ParamLimits

0xf7b3,	// (0x000354f2) main_mup3_pane_t

0x787c,	// (0x0002d5bb) mup3_progress_pane_ParamLimits

0x787c,	// (0x0002d5bb) mup3_progress_pane

0x78f8,	// (0x0002d637) popup_mup3_control_window_ParamLimits

0x78f8,	// (0x0002d637) popup_mup3_control_window

0xc5c4,	// (0x00032303) popup_mup3_text_window

0x792a,	// (0x0002d669) mup3_progress_pane_t1

0x7941,	// (0x0002d680) mup3_progress_pane_t2

0xc5cc,	// (0x0003230b) mup3_progress_pane_t3

0x0002,

0xf7c0,	// (0x000354ff) mup3_progress_pane_t

0xc5e3,	// (0x00032322) mup_progress_pane_cp03

0x1fb7,	// (0x00027cf6) bg_tb_trans_pane_cp04

0x7958,	// (0x0002d697) mup3_volume_pane

0x7960,	// (0x0002d69f) popup_mup3_control_window_g1

0x7969,	// (0x0002d6a8) mup3_volume_pane_g1

0x7972,	// (0x0002d6b1) mup3_volume_pane_g2

0x797b,	// (0x0002d6ba) mup3_volume_pane_g3

0x0002,

0xf7c7,	// (0x00035506) mup3_volume_pane_g

0x1fb7,	// (0x00027cf6) bg_tb_trans_pane_cp03

0xc5f3,	// (0x00032332) popup_mup3_text_window_g1

0xc5fb,	// (0x0003233a) popup_mup3_text_window_t1

0x2cd9,	// (0x00028a18) list_calc_item_pane_g1_ParamLimits

0xbfbf,	// (0x00031cfe) mup_volume_pane_cp_g1

0x72cd,	// (0x0002d00c) main_touch_calib_pane_t3

0x72e1,	// (0x0002d020) main_touch_calib_pane_t4

0x72f5,	// (0x0002d034) main_touch_calib_pane_t5

0x1fc1,	// (0x00027d00) aid_cell_size_toolbar2

0x1fc9,	// (0x00027d08) aid_popup3_width_pane

0x2005,	// (0x00027d44) aid_zoom_text_msg_primary

0xb183,	// (0x00030ec2) vorec_t7

0x2c43,	// (0x00028982) bg_calc_paper_pane_g1_ParamLimits

0x2c4f,	// (0x0002898e) bg_calc_paper_pane_g2_ParamLimits

0x2c5b,	// (0x0002899a) bg_calc_paper_pane_g3_ParamLimits

0x2c67,	// (0x000289a6) bg_calc_paper_pane_g4_ParamLimits

0x2c73,	// (0x000289b2) bg_calc_paper_pane_g5_ParamLimits

0x2c7f,	// (0x000289be) bg_calc_paper_pane_g6_ParamLimits

0x2c8e,	// (0x000289cd) bg_calc_paper_pane_g7_ParamLimits

0x2c9d,	// (0x000289dc) bg_calc_paper_pane_g8_ParamLimits

0xf17a,	// (0x00034eb9) bg_calc_paper_pane_g_ParamLimits

0x2cb0,	// (0x000289ef) calc_bg_paper_pane_g9_ParamLimits

0x3348,	// (0x00029087) image_qvga_pane_ParamLimits

0x3348,	// (0x00029087) image_qvga_pane

0x295a,	// (0x00028699) bg_popup_sub_pane_cp04_ParamLimits

0x5af3,	// (0x0002b832) popup_mup_playback_window_g1_ParamLimits

0x5aff,	// (0x0002b83e) popup_mup_playback_window_t1_ParamLimits

0x5b14,	// (0x0002b853) popup_mup_playback_window_t2_ParamLimits

0xf506,	// (0x00035245) popup_mup_playback_window_t_ParamLimits

0x6e2a,	// (0x0002cb69) main_mup2_pane_g3_ParamLimits

0x6e2a,	// (0x0002cb69) main_mup2_pane_g3

0x37f1,	// (0x00029530) popup_toolbar_window_cp04

0x630d,	// (0x0002c04c) popup_call2_audio_second_window_g3_ParamLimits

0x630d,	// (0x0002c04c) popup_call2_audio_second_window_g3

0xb3c2,	// (0x00031101) popup_call2_audio_first_window_g4_ParamLimits

0xb3c2,	// (0x00031101) popup_call2_audio_first_window_g4

0xba41,	// (0x00031780) popup_call2_audio_in_window_g4_ParamLimits

0xba41,	// (0x00031780) popup_call2_audio_in_window_g4

0x5b29,	// (0x0002b868) aid_area_sk_bg_cut_ParamLimits

0x5b29,	// (0x0002b868) aid_area_sk_bg_cut

0x5b47,	// (0x0002b886) aid_area_sk_bg_cut_2_ParamLimits

0x5b47,	// (0x0002b886) aid_area_sk_bg_cut_2

0x7130,	// (0x0002ce6f) aid_placing_details_win

0x7138,	// (0x0002ce77) aid_placing_details_win_2

0xc42b,	// (0x0003216a) camera2_autofocus_pane_g1_ParamLimits

0x21ca,	// (0x00027f09) popup_fixed_preview_cale_window_ParamLimits

0x21ca,	// (0x00027f09) popup_fixed_preview_cale_window

0x51e6,	// (0x0002af25) navi_slider_pane_g3

0x51ef,	// (0x0002af2e) navi_slider_pane_g4

0x51f8,	// (0x0002af37) navi_slider_pane_g5

0x51e6,	// (0x0002af25) navi_slider_pane_g6

0xb23f,	// (0x00030f7e) navi_slider_pane_g7

0x5713,	// (0x0002b452) mup_scale_pane_g3

0x571c,	// (0x0002b45b) mup_scale_pane_g4

0x5725,	// (0x0002b464) mup_scale_pane_g5

0x572e,	// (0x0002b46d) mup_scale_pane_g6

0x5737,	// (0x0002b476) mup_scale_pane_g7

0x51e6,	// (0x0002af25) cams2_slider_pane_g3

0xc074,	// (0x00031db3) cams2_slider_pane_g4

0xc07c,	// (0x00031dbb) cams2_slider_pane_g5

0x51e6,	// (0x0002af25) cams2_slider_pane_g6

0xc084,	// (0x00031dc3) cams2_slider_pane_g7

0xc2b2,	// (0x00031ff1) camera2_autofocus_pane_cp_g1

0xc609,	// (0x00032348) bg_popup_preview_window_pane_cp02_ParamLimits

0xc609,	// (0x00032348) bg_popup_preview_window_pane_cp02

0xc615,	// (0x00032354) list_fp_cale_pane_ParamLimits

0xc615,	// (0x00032354) list_fp_cale_pane

0xc621,	// (0x00032360) popup_fixed_preview_cale_window_t1_ParamLimits

0xc621,	// (0x00032360) popup_fixed_preview_cale_window_t1

0x7984,	// (0x0002d6c3) popup_fixed_preview_cale_window_t2_ParamLimits

0x7984,	// (0x0002d6c3) popup_fixed_preview_cale_window_t2

0x7999,	// (0x0002d6d8) popup_fixed_preview_cale_window_t3_ParamLimits

0x7999,	// (0x0002d6d8) popup_fixed_preview_cale_window_t3

0x0002,

0xf7ce,	// (0x0003550d) popup_fixed_preview_cale_window_t_ParamLimits

0xf7ce,	// (0x0003550d) popup_fixed_preview_cale_window_t

0x79ae,	// (0x0002d6ed) list_single_fp_cale_pane_ParamLimits

0x79ae,	// (0x0002d6ed) list_single_fp_cale_pane

0xc63f,	// (0x0003237e) list_single_fp_cale_pane_g1_ParamLimits

0xc63f,	// (0x0003237e) list_single_fp_cale_pane_g1

0xc64b,	// (0x0003238a) list_single_fp_cale_pane_g2_ParamLimits

0xc64b,	// (0x0003238a) list_single_fp_cale_pane_g2

0x0002,

0xf7d5,	// (0x00035514) list_single_fp_cale_pane_g_ParamLimits

0xf7d5,	// (0x00035514) list_single_fp_cale_pane_g

0xc664,	// (0x000323a3) list_single_fp_cale_pane_t1_ParamLimits

0xc664,	// (0x000323a3) list_single_fp_cale_pane_t1

0xc676,	// (0x000323b5) list_single_fp_cale_pane_t2_ParamLimits

0xc676,	// (0x000323b5) list_single_fp_cale_pane_t2

0x0001,

0xf7dc,	// (0x0003551b) list_single_fp_cale_pane_t_ParamLimits

0xf7dc,	// (0x0003551b) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x1fb7,	// (0x00027cf6) main_dialer_pane

0x79c6,	// (0x0002d705) aid_cell_size_keypad

0x79d0,	// (0x0002d70f) dialer_ne_pane

0x79d8,	// (0x0002d717) grid_dialer_command_1_pane

0x79e0,	// (0x0002d71f) grid_dialer_command_2_pane

0x79e8,	// (0x0002d727) grid_dialer_keypad_pane

0x79fa,	// (0x0002d739) bg_popup_call_pane_cp06_ParamLimits

0x79fa,	// (0x0002d739) bg_popup_call_pane_cp06

0x7a06,	// (0x0002d745) dialer_ne_clear_pane_ParamLimits

0x7a06,	// (0x0002d745) dialer_ne_clear_pane

0xc6a9,	// (0x000323e8) dialer_ne_pane_g1

0xc6b1,	// (0x000323f0) dialer_ne_pane_t1_ParamLimits

0xc6b1,	// (0x000323f0) dialer_ne_pane_t1

0x7a12,	// (0x0002d751) dialer_ne_pane_t2_ParamLimits

0x7a12,	// (0x0002d751) dialer_ne_pane_t2

0x7a3c,	// (0x0002d77b) dialer_ne_pane_t3_ParamLimits

0x7a3c,	// (0x0002d77b) dialer_ne_pane_t3

0x0002,

0xf7e1,	// (0x00035520) dialer_ne_pane_t_ParamLimits

0xf7e1,	// (0x00035520) dialer_ne_pane_t

0x7a6c,	// (0x0002d7ab) dialer_ne_pane_t3_copy1_ParamLimits

0x7a6c,	// (0x0002d7ab) dialer_ne_pane_t3_copy1

0x7a9b,	// (0x0002d7da) cell_dialer_keypad_pane_ParamLimits

0x7a9b,	// (0x0002d7da) cell_dialer_keypad_pane

0x7ab2,	// (0x0002d7f1) cell_dialer_command_1_pane_ParamLimits

0x7ab2,	// (0x0002d7f1) cell_dialer_command_1_pane

0x7ac8,	// (0x0002d807) cell_dialer_command_2_pane_ParamLimits

0x7ac8,	// (0x0002d807) cell_dialer_command_2_pane

0xc6c3,	// (0x00032402) bg_button_pane_cp02_ParamLimits

0xc6c3,	// (0x00032402) bg_button_pane_cp02

0x7ad7,	// (0x0002d816) cell_dialer_keypad_pane_g1_ParamLimits

0x7ad7,	// (0x0002d816) cell_dialer_keypad_pane_g1

0xc6c3,	// (0x00032402) bg_button_pane_cp03_ParamLimits

0xc6c3,	// (0x00032402) bg_button_pane_cp03

0x7aec,	// (0x0002d82b) cell_dialer_command_1_pane_g1_ParamLimits

0x7aec,	// (0x0002d82b) cell_dialer_command_1_pane_g1

0xc6cf,	// (0x0003240e) bg_button_pane_cp04

0x7b00,	// (0x0002d83f) cell_dialer_command_2_pane_g1

0x51d5,	// (0x0002af14) bg_button_pane_cp06

0xc6d7,	// (0x00032416) dialer_ne_clear_pane_g1

0x5079,	// (0x0002adb8) navi_pane_g2

0x50a7,	// (0x0002ade6) navi_pane_g3

0x0002,

0xf409,	// (0x00035148) navi_pane_g

0x5134,	// (0x0002ae73) navi_pane_mv_g2

0x515b,	// (0x0002ae9a) navi_pane_mv_g5

0x5163,	// (0x0002aea2) navi_pane_mv_t1

0x2c37,	// (0x00028976) main_clock2_pane

0x7b33,	// (0x0002d872) main_clock2_list_pane_ParamLimits

0x7b33,	// (0x0002d872) main_clock2_list_pane

0x7b69,	// (0x0002d8a8) main_clock2_pane_t1_ParamLimits

0x7b69,	// (0x0002d8a8) main_clock2_pane_t1

0x7ba7,	// (0x0002d8e6) main_clock2_pane_t2_ParamLimits

0x7ba7,	// (0x0002d8e6) main_clock2_pane_t2

0x0004,

0xf7e8,	// (0x00035527) main_clock2_pane_t_ParamLimits

0xf7e8,	// (0x00035527) main_clock2_pane_t

0x7c31,	// (0x0002d970) popup_clock_analogue_window_cp03_ParamLimits

0x7c31,	// (0x0002d970) popup_clock_analogue_window_cp03

0x7c58,	// (0x0002d997) popup_clock_digital_window_cp02_ParamLimits

0x7c58,	// (0x0002d997) popup_clock_digital_window_cp02

0x7ccd,	// (0x0002da0c) main_clock2_list_single_pane_ParamLimits

0x7ccd,	// (0x0002da0c) main_clock2_list_single_pane

0x51d5,	// (0x0002af14) list_highlight_pane_cp05

0xc6df,	// (0x0003241e) main_clock2_list_single_pane_t1

0x37f1,	// (0x00029530) popup_toolbar_window_cp04_ParamLimits

0x715a,	// (0x0002ce99) camera2_autofocus_pane_g2_ParamLimits

0x715a,	// (0x0002ce99) camera2_autofocus_pane_g2

0x7166,	// (0x0002cea5) camera2_autofocus_pane_g3_ParamLimits

0x7166,	// (0x0002cea5) camera2_autofocus_pane_g3

0x7172,	// (0x0002ceb1) camera2_autofocus_pane_g4_ParamLimits

0x7172,	// (0x0002ceb1) camera2_autofocus_pane_g4

0x717e,	// (0x0002cebd) camera2_autofocus_pane_g5_ParamLimits

0x717e,	// (0x0002cebd) camera2_autofocus_pane_g5

0x0004,

0xf731,	// (0x00035470) camera2_autofocus_pane_g_ParamLimits

0xf731,	// (0x00035470) camera2_autofocus_pane_g

0x736b,	// (0x0002d0aa) camera2_autofocus_pane_cp_g2

0x7373,	// (0x0002d0b2) camera2_autofocus_pane_cp_g3

0x737b,	// (0x0002d0ba) camera2_autofocus_pane_cp_g4

0x7383,	// (0x0002d0c2) camera2_autofocus_pane_cp_g5

0x0004,

0xf797,	// (0x000354d6) camera2_autofocus_pane_cp_g

0x79f2,	// (0x0002d731) popup_dialer_spcha_window

0x1fb7,	// (0x00027cf6) bg_popup_sub_pane_cp07

0xc6ed,	// (0x0003242c) list_spcha_pane

0xc6f5,	// (0x00032434) list_single_spcha_pane_ParamLimits

0xc6f5,	// (0x00032434) list_single_spcha_pane

0x1fb7,	// (0x00027cf6) list_highlight_pane_cp06

0xc706,	// (0x00032445) list_single_spcha_pane_t1

0xb7eb,	// (0x0003152a) popup_call2_audio_out_window_g4_ParamLimits

0xb7eb,	// (0x0003152a) popup_call2_audio_out_window_g4

0x1fb7,	// (0x00027cf6) main_imed2_pane

0xbdd2,	// (0x00031b11) popup_imed_adjust2_window

0x6a10,	// (0x0002c74f) popup_imed_trans_window_ParamLimits

0x6a10,	// (0x0002c74f) popup_imed_trans_window

0xc0ee,	// (0x00031e2d) popup_blid_sat_info2_window_t1

0xc0fc,	// (0x00031e3b) popup_blid_sat_info2_window_t2

0x000a,

0xf6c6,	// (0x00035405) popup_blid_sat_info2_window_t

0x7cff,	// (0x0002da3e) aid_size_cell_colour_35

0x7d1f,	// (0x0002da5e) aid_size_cell_colour_112

0x7d3f,	// (0x0002da7e) aid_size_cell_effect

0xbdaa,	// (0x00031ae9) bg_tb_trans_pane_cp02

0x4816,	// (0x0002a555) heading_imed_pane

0x7d5f,	// (0x0002da9e) listscroll_imed_pane

0xc714,	// (0x00032453) heading_imed_pane_g1

0xc71c,	// (0x0003245b) heading_imed_pane_t1

0xc72a,	// (0x00032469) grid_imed_colour_35_pane_ParamLimits

0xc72a,	// (0x00032469) grid_imed_colour_35_pane

0x7d6b,	// (0x0002daaa) grid_imed_effect_pane

0xc745,	// (0x00032484) list_imed_aspect_pane

0x7d80,	// (0x0002dabf) scroll_pane_cp027_ParamLimits

0x7d80,	// (0x0002dabf) scroll_pane_cp027

0x7d91,	// (0x0002dad0) cell_imed_effect_pane_ParamLimits

0x7d91,	// (0x0002dad0) cell_imed_effect_pane

0xc74d,	// (0x0003248c) cell_imed_colour_pane_ParamLimits

0xc74d,	// (0x0003248c) cell_imed_colour_pane

0xc78f,	// (0x000324ce) cell_imed_colour_pane_g1_ParamLimits

0xc78f,	// (0x000324ce) cell_imed_colour_pane_g1

0xc7a0,	// (0x000324df) hgihlgiht_grid_pane_cp016_ParamLimits

0xc7a0,	// (0x000324df) hgihlgiht_grid_pane_cp016

0x7db8,	// (0x0002daf7) cell_imed_effect_pane_g1

0x7dc0,	// (0x0002daff) grid_highlight_pane_cp017

0x2e39,	// (0x00028b78) list_imed_single_pane_ParamLimits

0x2e39,	// (0x00028b78) list_imed_single_pane

0x1fb7,	// (0x00027cf6) list_highlight_pane_cp07

0xc7b1,	// (0x000324f0) list_imed_aspect_pane_comp1_t1

0xbdaa,	// (0x00031ae9) bg_tb_trans_pane_cp05

0xc7d3,	// (0x00032512) popup_imed_adjust2_window_g1

0xc7fa,	// (0x00032539) popup_imed_adjust2_window_t1

0xc812,	// (0x00032551) slider_imed_adjust_pane

0xc826,	// (0x00032565) slider_imed_adjust_pane_g1

0xc836,	// (0x00032575) slider_imed_adjust_pane_g2

0xc846,	// (0x00032585) slider_imed_adjust_pane_g3

0xc857,	// (0x00032596) slider_imed_adjust_pane_g4

0x0003,

0xf805,	// (0x00035544) slider_imed_adjust_pane_g

0x7dc9,	// (0x0002db08) aid_size_cell_clipart2

0x7dd5,	// (0x0002db14) grid_imed_clipart_pane

0xc868,	// (0x000325a7) scroll_pane_cp031

0x7ddf,	// (0x0002db1e) cell_imed_clipart_pane_ParamLimits

0x7ddf,	// (0x0002db1e) cell_imed_clipart_pane

0x7e06,	// (0x0002db45) cell_imed_clipart_pane_g1

0x1fb7,	// (0x00027cf6) grid_highlight_pane_cp014

0x7b48,	// (0x0002d887) main_clock2_pane_g1_ParamLimits

0x7b48,	// (0x0002d887) main_clock2_pane_g1

0x7c78,	// (0x0002d9b7) aid_call2_pane_cp10

0x7c8a,	// (0x0002d9c9) aid_call_pane_cp10

0x4f8b,	// (0x0002acca) popup_clock_analogue_window_cp10_g1

0x4f8b,	// (0x0002acca) popup_clock_analogue_window_cp10_g2

0x7c9c,	// (0x0002d9db) popup_clock_analogue_window_cp10_g3

0x7c9c,	// (0x0002d9db) popup_clock_analogue_window_cp10_g4

0x4f8b,	// (0x0002acca) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7f3,	// (0x00035532) popup_clock_analogue_window_cp10_g

0x7cae,	// (0x0002d9ed) popup_clock_analogue_window_cp10_t1

0x148d,	// (0x000271cc) clock_digital_number_pane_cp10_ParamLimits

0x148d,	// (0x000271cc) clock_digital_number_pane_cp10

0x14a5,	// (0x000271e4) clock_digital_number_pane_cp11_ParamLimits

0x14a5,	// (0x000271e4) clock_digital_number_pane_cp11

0x14bd,	// (0x000271fc) clock_digital_number_pane_cp12_ParamLimits

0x14bd,	// (0x000271fc) clock_digital_number_pane_cp12

0x14d5,	// (0x00027214) clock_digital_number_pane_cp13_ParamLimits

0x14d5,	// (0x00027214) clock_digital_number_pane_cp13

0x14ed,	// (0x0002722c) clock_digital_separator_pane_cp10_ParamLimits

0x14ed,	// (0x0002722c) clock_digital_separator_pane_cp10

0x7cdf,	// (0x0002da1e) popup_clock_digital_window_cp02_t1_ParamLimits

0x7cdf,	// (0x0002da1e) popup_clock_digital_window_cp02_t1

0x2952,	// (0x00028691) clock_digital_number_pane_cp10_g1

0x2952,	// (0x00028691) clock_digital_number_pane_cp10_g2

0x0001,

0xf80e,	// (0x0003554d) clock_digital_number_pane_cp10_g

0x2952,	// (0x00028691) clock_digital_separator_pane_cp10_g1

0x2952,	// (0x00028691) clock_digital_separator_pane_g2_cp10

0x51a5,	// (0x0002aee4) navi_pane_vded_g4

0x51ae,	// (0x0002aeed) navi_pane_vded_g5

0x51b7,	// (0x0002aef6) navi_pane_vded_t1

0x1fb7,	// (0x00027cf6) main_vded_pane

0x7e0f,	// (0x0002db4e) main_vded_pane_g1

0x7e1b,	// (0x0002db5a) main_vded_pane_g2

0x7e25,	// (0x0002db64) main_vded_pane_g3

0x0002,

0xf813,	// (0x00035552) main_vded_pane_g

0x7e2f,	// (0x0002db6e) main_vded_pane_t1

0x7e3d,	// (0x0002db7c) main_vded_pane_t2

0x0001,

0xf81a,	// (0x00035559) main_vded_pane_t

0x7e4b,	// (0x0002db8a) vded_slider_pane

0x7e55,	// (0x0002db94) vded_video_pane

0xc870,	// (0x000325af) vded_video_pane_g1

0x7e5f,	// (0x0002db9e) vded_video_pane_g2

0xc2b2,	// (0x00031ff1) vded_video_pane_g3

0x0002,

0xf81f,	// (0x0003555e) vded_video_pane_g

0xc87a,	// (0x000325b9) vded_slider_pane_g1

0xbfbf,	// (0x00031cfe) vded_slider_pane_g2

0xc883,	// (0x000325c2) vded_slider_pane_g3

0xc88c,	// (0x000325cb) vded_slider_pane_g4

0xc895,	// (0x000325d4) vded_slider_pane_g5

0x0004,

0xf826,	// (0x00035565) vded_slider_pane_g

0x78e0,	// (0x0002d61f) mup3_rocker_pane_ParamLimits

0x78e0,	// (0x0002d61f) mup3_rocker_pane

0x7e68,	// (0x0002dba7) mup3_control_keys_pane_g1

0x7e70,	// (0x0002dbaf) mup3_control_keys_pane_g2

0x7e78,	// (0x0002dbb7) mup3_control_keys_pane_g3

0x7e80,	// (0x0002dbbf) mup3_control_keys_pane_g4

0x0003,

0xf831,	// (0x00035570) mup3_control_keys_pane_g

0x220b,	// (0x00027f4a) popup_toolbar2_fixed_window_cp01_ParamLimits

0x220b,	// (0x00027f4a) popup_toolbar2_fixed_window_cp01

0x7914,	// (0x0002d653) popup_toolbar2_fixed_window_cp02_ParamLimits

0x7914,	// (0x0002d653) popup_toolbar2_fixed_window_cp02

0x647f,	// (0x0002c1be) popup_call2_audio_second_window_t4_ParamLimits

0x647f,	// (0x0002c1be) popup_call2_audio_second_window_t4

0xb658,	// (0x00031397) popup_call2_audio_first_window_t6_ParamLimits

0xb658,	// (0x00031397) popup_call2_audio_first_window_t6

0xb8ee,	// (0x0003162d) popup_call2_audio_out_window_t6_ParamLimits

0xb8ee,	// (0x0003162d) popup_call2_audio_out_window_t6

0x1fb7,	// (0x00027cf6) main_vitu_pane

0x7e90,	// (0x0002dbcf) aid_size_cell_itu_ParamLimits

0x7e90,	// (0x0002dbcf) aid_size_cell_itu

0x2229,	// (0x00027f68) bg_popup_window_pane_cp08_ParamLimits

0x2229,	// (0x00027f68) bg_popup_window_pane_cp08

0x7ea6,	// (0x0002dbe5) field_vitu_entry_pane_ParamLimits

0x7ea6,	// (0x0002dbe5) field_vitu_entry_pane

0x7ebd,	// (0x0002dbfc) grid_vitu_function_pane_ParamLimits

0x7ebd,	// (0x0002dbfc) grid_vitu_function_pane

0x7ed8,	// (0x0002dc17) grid_vitu_itu_pane_ParamLimits

0x7ed8,	// (0x0002dc17) grid_vitu_itu_pane

0x7ef6,	// (0x0002dc35) cell_vitu_itu_pane_ParamLimits

0x7ef6,	// (0x0002dc35) cell_vitu_itu_pane

0x7f1a,	// (0x0002dc59) cell_vitu_function_pane_ParamLimits

0x7f1a,	// (0x0002dc59) cell_vitu_function_pane

0x2229,	// (0x00027f68) bg_popup_sub_pane_cp08_ParamLimits

0x2229,	// (0x00027f68) bg_popup_sub_pane_cp08

0x7f35,	// (0x0002dc74) field_vitu_entry_pane_t1_ParamLimits

0x7f35,	// (0x0002dc74) field_vitu_entry_pane_t1

0xc8b6,	// (0x000325f5) field_vitu_entry_pane_t2_ParamLimits

0xc8b6,	// (0x000325f5) field_vitu_entry_pane_t2

0x0001,

0xf83f,	// (0x0003557e) field_vitu_entry_pane_t_ParamLimits

0xf83f,	// (0x0003557e) field_vitu_entry_pane_t

0xc8d3,	// (0x00032612) bg_button_pane_cp05_ParamLimits

0xc8d3,	// (0x00032612) bg_button_pane_cp05

0x7f55,	// (0x0002dc94) cell_vitu_itu_pane_g1

0x7f6d,	// (0x0002dcac) cell_vitu_itu_pane_t1_ParamLimits

0x7f6d,	// (0x0002dcac) cell_vitu_itu_pane_t1

0x7f7f,	// (0x0002dcbe) cell_vitu_itu_pane_t2_ParamLimits

0x7f7f,	// (0x0002dcbe) cell_vitu_itu_pane_t2

0x0002,

0xf844,	// (0x00035583) cell_vitu_itu_pane_t_ParamLimits

0xf844,	// (0x00035583) cell_vitu_itu_pane_t

0xc8e1,	// (0x00032620) bg_button_pane_cp07

0x7fb4,	// (0x0002dcf3) cell_vitu_function_pane_g1

0xb07d,	// (0x00030dbc) main_calc_pane_g1

0x1ff9,	// (0x00027d38) aid_visual_content_pane

0x1fb7,	// (0x00027cf6) main_vradio_pane

0x7fbd,	// (0x0002dcfc) main_vradio_pane_g1_ParamLimits

0x7fbd,	// (0x0002dcfc) main_vradio_pane_g1

0xc8eb,	// (0x0003262a) main_vradio_pane_g2_ParamLimits

0xc8eb,	// (0x0003262a) main_vradio_pane_g2

0x0001,

0xf84b,	// (0x0003558a) main_vradio_pane_g_ParamLimits

0xf84b,	// (0x0003558a) main_vradio_pane_g

0x7fd6,	// (0x0002dd15) main_vradio_pane_t1_ParamLimits

0x7fd6,	// (0x0002dd15) main_vradio_pane_t1

0x7feb,	// (0x0002dd2a) main_vradio_pane_t2_ParamLimits

0x7feb,	// (0x0002dd2a) main_vradio_pane_t2

0xc8f8,	// (0x00032637) main_vradio_pane_t3_ParamLimits

0xc8f8,	// (0x00032637) main_vradio_pane_t3

0x0002,

0xf850,	// (0x0003558f) main_vradio_pane_t_ParamLimits

0xf850,	// (0x0003558f) main_vradio_pane_t

0x8000,	// (0x0002dd3f) vradio_rocker_control_pane_ParamLimits

0x8000,	// (0x0002dd3f) vradio_rocker_control_pane

0x8012,	// (0x0002dd51) vradio_station_info_pane_ParamLimits

0x8012,	// (0x0002dd51) vradio_station_info_pane

0xc90c,	// (0x0003264b) vradio_frequency_info_pane_ParamLimits

0xc90c,	// (0x0003264b) vradio_frequency_info_pane

0xc2b2,	// (0x00031ff1) vradio_station_info_pane_g1

0xc91b,	// (0x0003265a) vradio_station_info_pane_t1_ParamLimits

0xc91b,	// (0x0003265a) vradio_station_info_pane_t1

0xc93d,	// (0x0003267c) vradio_station_info_pane_t2_ParamLimits

0xc93d,	// (0x0003267c) vradio_station_info_pane_t2

0x0001,

0xf857,	// (0x00035596) vradio_station_info_pane_t_ParamLimits

0xf857,	// (0x00035596) vradio_station_info_pane_t

0xc94f,	// (0x0003268e) vradio_tuning_pane

0xc957,	// (0x00032696) vradio_rocker_control_pane_g1

0xc95f,	// (0x0003269e) vradio_rocker_control_pane_g2

0xc967,	// (0x000326a6) vradio_rocker_control_pane_g3

0xc96f,	// (0x000326ae) vradio_rocker_control_pane_g4

0xc977,	// (0x000326b6) vradio_rocker_control_pane_g5

0x0004,

0xf85c,	// (0x0003559b) vradio_rocker_control_pane_g

0x8024,	// (0x0002dd63) vradio_frequency_info_pane_g1

0xc97f,	// (0x000326be) vradio_frequency_info_pane_t1_ParamLimits

0xc97f,	// (0x000326be) vradio_frequency_info_pane_t1

0x802e,	// (0x0002dd6d) vradio_tuning_pane_g1

0x8039,	// (0x0002dd78) vradio_tuning_pane_t1

0x204e,	// (0x00027d8d) area_side_right_pane_ParamLimits

0x204e,	// (0x00027d8d) area_side_right_pane

0xbd71,	// (0x00031ab0) status_small_pane_g1

0xbd79,	// (0x00031ab8) status_small_pane_g2

0xbd82,	// (0x00031ac1) status_small_pane_g3

0xbd8b,	// (0x00031aca) status_small_pane_g4

0x0003,

0xf61c,	// (0x0003535b) status_small_pane_g

0xbd94,	// (0x00031ad3) status_small_pane_t1

0x1fb7,	// (0x00027cf6) main_video3_pane

0xc993,	// (0x000326d2) cams_zoom_vslider_pane

0xc99b,	// (0x000326da) image3_wide_pane_ParamLimits

0xc99b,	// (0x000326da) image3_wide_pane

0xc9b5,	// (0x000326f4) image3_wide_small_pane

0xc9c1,	// (0x00032700) main_video3_pane_g1_ParamLimits

0xc9c1,	// (0x00032700) main_video3_pane_g1

0xc9dd,	// (0x0003271c) main_video3_pane_g2_ParamLimits

0xc9dd,	// (0x0003271c) main_video3_pane_g2

0x0001,

0xf867,	// (0x000355a6) main_video3_pane_g_ParamLimits

0xf867,	// (0x000355a6) main_video3_pane_g

0xc9f9,	// (0x00032738) main_video3_pane_t1_ParamLimits

0xc9f9,	// (0x00032738) main_video3_pane_t1

0xca24,	// (0x00032763) main_video3_pane_t2_ParamLimits

0xca24,	// (0x00032763) main_video3_pane_t2

0xca4f,	// (0x0003278e) main_video3_pane_t3_ParamLimits

0xca4f,	// (0x0003278e) main_video3_pane_t3

0x0002,

0xf86c,	// (0x000355ab) main_video3_pane_t_ParamLimits

0xf86c,	// (0x000355ab) main_video3_pane_t

0xca7c,	// (0x000327bb) cams_zoom_vslider_pane_g1

0xca85,	// (0x000327c4) cams_zoom_vslider_pane_g2

0x0001,

0xf873,	// (0x000355b2) cams_zoom_vslider_pane_g

0xca8d,	// (0x000327cc) small_slider_vertical_pane

0xc2b2,	// (0x00031ff1) small_slider_vertical_pane_g1

0xc2b2,	// (0x00031ff1) small_slider_vertical_pane_g2

0xca95,	// (0x000327d4) small_slider_vertical_pane_g3

0x0002,

0xf878,	// (0x000355b7) small_slider_vertical_pane_g

0x1fb7,	// (0x00027cf6) main_hwr_training_pane

0xca9e,	// (0x000327dd) hwr_training_instruct_pane_ParamLimits

0xca9e,	// (0x000327dd) hwr_training_instruct_pane

0x8048,	// (0x0002dd87) hwr_training_navi_pane_ParamLimits

0x8048,	// (0x0002dd87) hwr_training_navi_pane

0x8067,	// (0x0002dda6) hwr_training_write_pane_ParamLimits

0x8067,	// (0x0002dda6) hwr_training_write_pane

0x1fb7,	// (0x00027cf6) bg_frame_shadow_pane

0xcad5,	// (0x00032814) hwr_training_write_pane_g1

0xcadd,	// (0x0003281c) hwr_training_write_pane_g2

0xcae5,	// (0x00032824) hwr_training_write_pane_g3

0xcaed,	// (0x0003282c) hwr_training_write_pane_g4

0xcaf5,	// (0x00032834) hwr_training_write_pane_g5

0xcafd,	// (0x0003283c) hwr_training_write_pane_g6

0xcb05,	// (0x00032844) hwr_training_write_pane_g7

0x0006,

0xf87f,	// (0x000355be) hwr_training_write_pane_g

0xcb0d,	// (0x0003284c) hwr_training_navi_pane_g1_ParamLimits

0xcb0d,	// (0x0003284c) hwr_training_navi_pane_g1

0xcb1f,	// (0x0003285e) hwr_training_navi_pane_g2_ParamLimits

0xcb1f,	// (0x0003285e) hwr_training_navi_pane_g2

0xcb31,	// (0x00032870) hwr_training_navi_pane_g3_ParamLimits

0xcb31,	// (0x00032870) hwr_training_navi_pane_g3

0xcb41,	// (0x00032880) hwr_training_navi_pane_g4_ParamLimits

0xcb41,	// (0x00032880) hwr_training_navi_pane_g4

0x0004,

0xf88e,	// (0x000355cd) hwr_training_navi_pane_g_ParamLimits

0xf88e,	// (0x000355cd) hwr_training_navi_pane_g

0xcb4e,	// (0x0003288d) hwr_training_navi_pane_t1

0x80a2,	// (0x0002dde1) list_single_hwr_training_instruct_pane_ParamLimits

0x80a2,	// (0x0002dde1) list_single_hwr_training_instruct_pane

0xcb5c,	// (0x0003289b) list_single_hwr_training_instruct_pane_t1

0xc1f2,	// (0x00031f31) bg_frame_shadow_pane_g1

0xcb6b,	// (0x000328aa) bg_frame_shadow_pane_g2

0xcb73,	// (0x000328b2) bg_frame_shadow_pane_g3

0xcb7b,	// (0x000328ba) bg_frame_shadow_pane_g4

0xcb83,	// (0x000328c2) bg_frame_shadow_pane_g5

0xcb8b,	// (0x000328ca) bg_frame_shadow_pane_g6

0xcb93,	// (0x000328d2) bg_frame_shadow_pane_g7

0x2dd7,	// (0x00028b16) bg_frame_shadow_pane_g8

0x0007,

0xf899,	// (0x000355d8) bg_frame_shadow_pane_g

0x1fb7,	// (0x00027cf6) main_video_tele_dialer_pane

0x1514,	// (0x00027253) aid_size_cell_video_keypad_ParamLimits

0x1514,	// (0x00027253) aid_size_cell_video_keypad

0x152e,	// (0x0002726d) grid_video_dialer_keypad_pane_ParamLimits

0x152e,	// (0x0002726d) grid_video_dialer_keypad_pane

0x157a,	// (0x000272b9) video_down_pane_cp_ParamLimits

0x157a,	// (0x000272b9) video_down_pane_cp

0x158e,	// (0x000272cd) cell_video_dialer_keypad_pane_ParamLimits

0x158e,	// (0x000272cd) cell_video_dialer_keypad_pane

0xcb9b,	// (0x000328da) bg_button_pane_cp08_ParamLimits

0xcb9b,	// (0x000328da) bg_button_pane_cp08

0x80db,	// (0x0002de1a) cell_video_dialer_keypad_pane_g1_ParamLimits

0x80db,	// (0x0002de1a) cell_video_dialer_keypad_pane_g1

0x78ca,	// (0x0002d609) mup3_rocker2_pane_ParamLimits

0x78ca,	// (0x0002d609) mup3_rocker2_pane

0xc2b2,	// (0x00031ff1) mup3_rocker2_pane_g1

0x68f9,	// (0x0002c638) main_dialer2_pane

0x1fb7,	// (0x00027cf6) main_mp4_pane

0xcbaf,	// (0x000328ee) main_mp4_pane_g1_ParamLimits

0xcbaf,	// (0x000328ee) main_mp4_pane_g1

0xcbaf,	// (0x000328ee) main_mp4_pane_g2_ParamLimits

0xcbaf,	// (0x000328ee) main_mp4_pane_g2

0x15b0,	// (0x000272ef) main_mp4_pane_g3_ParamLimits

0x15b0,	// (0x000272ef) main_mp4_pane_g3

0xcbbd,	// (0x000328fc) main_mp4_pane_g4_ParamLimits

0xcbbd,	// (0x000328fc) main_mp4_pane_g4

0xcbe5,	// (0x00032924) main_mp4_pane_g5_ParamLimits

0xcbe5,	// (0x00032924) main_mp4_pane_g5

0x0005,

0xf8b9,	// (0x000355f8) main_mp4_pane_g_ParamLimits

0xf8b9,	// (0x000355f8) main_mp4_pane_g

0xcc35,	// (0x00032974) main_mp4_pane_t1_ParamLimits

0xcc35,	// (0x00032974) main_mp4_pane_t1

0xcc91,	// (0x000329d0) main_mp4_pane_t2_ParamLimits

0xcc91,	// (0x000329d0) main_mp4_pane_t2

0xcce3,	// (0x00032a22) main_mp4_pane_t3_ParamLimits

0xcce3,	// (0x00032a22) main_mp4_pane_t3

0xcd03,	// (0x00032a42) main_mp4_pane_t4_ParamLimits

0xcd03,	// (0x00032a42) main_mp4_pane_t4

0x0003,

0xf8c6,	// (0x00035605) main_mp4_pane_t_ParamLimits

0xf8c6,	// (0x00035605) main_mp4_pane_t

0xcd47,	// (0x00032a86) mp4_progress_pane_ParamLimits

0xcd47,	// (0x00032a86) mp4_progress_pane

0xcd91,	// (0x00032ad0) mp4_rocker_pane_ParamLimits

0xcd91,	// (0x00032ad0) mp4_rocker_pane

0xcdb9,	// (0x00032af8) mp4_progress_pane_t1

0xcdd2,	// (0x00032b11) mp4_progress_pane_t2

0x0001,

0xf8cf,	// (0x0003560e) mp4_progress_pane_t

0xcdeb,	// (0x00032b2a) mup_progress_pane_cp04

0xcdf7,	// (0x00032b36) mp4_rocker_pane_g1

0x15ec,	// (0x0002732b) aid_cell_size_keypad2_ParamLimits

0x15ec,	// (0x0002732b) aid_cell_size_keypad2

0x1602,	// (0x00027341) dialer2_ne_pane_ParamLimits

0x1602,	// (0x00027341) dialer2_ne_pane

0x161c,	// (0x0002735b) grid_dialer2_keypad_pane_ParamLimits

0x161c,	// (0x0002735b) grid_dialer2_keypad_pane

0xc095,	// (0x00031dd4) bg_popup_call_pane_cp07_ParamLimits

0xc095,	// (0x00031dd4) bg_popup_call_pane_cp07

0x8116,	// (0x0002de55) dialer2_ne_pane_t1_ParamLimits

0x8116,	// (0x0002de55) dialer2_ne_pane_t1

0x163a,	// (0x00027379) cell_dialer2_keypad_pane_ParamLimits

0x163a,	// (0x00027379) cell_dialer2_keypad_pane

0xce13,	// (0x00032b52) bg_button_pane_pane_cp04_ParamLimits

0xce13,	// (0x00032b52) bg_button_pane_pane_cp04

0x8155,	// (0x0002de94) cell_dialer2_keypad_pane_g1_ParamLimits

0x8155,	// (0x0002de94) cell_dialer2_keypad_pane_g1

0x36b3,	// (0x000293f2) aid_placing_vt_set_content_ParamLimits

0x36b3,	// (0x000293f2) aid_placing_vt_set_content

0x36db,	// (0x0002941a) aid_placing_vt_set_title_ParamLimits

0x36db,	// (0x0002941a) aid_placing_vt_set_title

0x1fb7,	// (0x00027cf6) main_image3_pane

0x16bc,	// (0x000273fb) area_side_right_pane_cp01_ParamLimits

0x16bc,	// (0x000273fb) area_side_right_pane_cp01

0xcbaf,	// (0x000328ee) main_image3_pane_g1_ParamLimits

0xcbaf,	// (0x000328ee) main_image3_pane_g1

0x16d3,	// (0x00027412) main_image3_pane_g2_ParamLimits

0x16d3,	// (0x00027412) main_image3_pane_g2

0x16fb,	// (0x0002743a) main_image3_pane_g3_ParamLimits

0x16fb,	// (0x0002743a) main_image3_pane_g3

0x1725,	// (0x00027464) main_image3_pane_g4_ParamLimits

0x1725,	// (0x00027464) main_image3_pane_g4

0x0003,

0xf8de,	// (0x0003561d) main_image3_pane_g_ParamLimits

0xf8de,	// (0x0003561d) main_image3_pane_g

0x174f,	// (0x0002748e) main_image3_pane_t1_ParamLimits

0x174f,	// (0x0002748e) main_image3_pane_t1

0x17a7,	// (0x000274e6) main_image3_pane_t2_ParamLimits

0x17a7,	// (0x000274e6) main_image3_pane_t2

0x17f9,	// (0x00027538) main_image3_pane_t3_ParamLimits

0x17f9,	// (0x00027538) main_image3_pane_t3

0x0003,

0xf8e7,	// (0x00035626) main_image3_pane_t_ParamLimits

0xf8e7,	// (0x00035626) main_image3_pane_t

0x2229,	// (0x00027f68) grid_sctrl_middle_pane_cp01_ParamLimits

0x2229,	// (0x00027f68) grid_sctrl_middle_pane_cp01

0x81bd,	// (0x0002defc) cell_sctrl_middle_pane_cp01_ParamLimits

0x81bd,	// (0x0002defc) cell_sctrl_middle_pane_cp01

0x81da,	// (0x0002df19) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x81da,	// (0x0002df19) cell_sctrl_middle_pane_cp01_g1

0x1fb7,	// (0x00027cf6) main_call4_pane

0x81f0,	// (0x0002df2f) aid_size_button_call4_ParamLimits

0x81f0,	// (0x0002df2f) aid_size_button_call4

0x8221,	// (0x0002df60) call4_windows_pane_ParamLimits

0x8221,	// (0x0002df60) call4_windows_pane

0x8241,	// (0x0002df80) grid_call4_button_pane_ParamLimits

0x8241,	// (0x0002df80) grid_call4_button_pane

0xce51,	// (0x00032b90) call4_windows_conf_pane

0xce66,	// (0x00032ba5) popup_call4_audio_first_window_ParamLimits

0xce66,	// (0x00032ba5) popup_call4_audio_first_window

0xceb2,	// (0x00032bf1) popup_call4_audio_second_window_ParamLimits

0xceb2,	// (0x00032bf1) popup_call4_audio_second_window

0xcec6,	// (0x00032c05) popup_call4_audio_wait_window_ParamLimits

0xcec6,	// (0x00032c05) popup_call4_audio_wait_window

0x826e,	// (0x0002dfad) cell_call4_button_pane_ParamLimits

0x826e,	// (0x0002dfad) cell_call4_button_pane

0x8297,	// (0x0002dfd6) bg_button_pane_cp09_ParamLimits

0x8297,	// (0x0002dfd6) bg_button_pane_cp09

0x82a3,	// (0x0002dfe2) cell_call4_button_pane_g1_ParamLimits

0x82a3,	// (0x0002dfe2) cell_call4_button_pane_g1

0x82c9,	// (0x0002e008) cell_call4_button_pane_t1_ParamLimits

0x82c9,	// (0x0002e008) cell_call4_button_pane_t1

0xcf0e,	// (0x00032c4d) popup_call4_audio_conf_window_ParamLimits

0xcf0e,	// (0x00032c4d) popup_call4_audio_conf_window

0x792a,	// (0x0002d669) mup3_progress_pane_t1_ParamLimits

0x7941,	// (0x0002d680) mup3_progress_pane_t2_ParamLimits

0xc5cc,	// (0x0003230b) mup3_progress_pane_t3_ParamLimits

0xf7c0,	// (0x000354ff) mup3_progress_pane_t_ParamLimits

0xc5e3,	// (0x00032322) mup_progress_pane_cp03_ParamLimits

0x7e88,	// (0x0002dbc7) mup3_control_keys_pane_g4_copy1

0xcd75,	// (0x00032ab4) mp4_rocker2_pane_ParamLimits

0xcd75,	// (0x00032ab4) mp4_rocker2_pane

0xcf22,	// (0x00032c61) mp4_rocker2_pane_g1

0xcf2a,	// (0x00032c69) mp4_rocker2_pane_g2

0xcf32,	// (0x00032c71) mp4_rocker2_pane_g3

0xcf3a,	// (0x00032c79) mp4_rocker2_pane_g4

0xcf42,	// (0x00032c81) mp4_rocker2_pane_g5

0x0004,

0xf8f0,	// (0x0003562f) mp4_rocker2_pane_g

0x1fb7,	// (0x00027cf6) main_camera4_pane

0x1fb7,	// (0x00027cf6) main_video4_pane

0x1548,	// (0x00027287) main_video_tele_dialer_pane_t1_ParamLimits

0x1548,	// (0x00027287) main_video_tele_dialer_pane_t1

0x1561,	// (0x000272a0) main_video_tele_dialer_pane_t2_ParamLimits

0x1561,	// (0x000272a0) main_video_tele_dialer_pane_t2

0x0001,

0xf8aa,	// (0x000355e9) main_video_tele_dialer_pane_t_ParamLimits

0xf8aa,	// (0x000355e9) main_video_tele_dialer_pane_t

0x1899,	// (0x000275d8) cam4_autofocus_pane_ParamLimits

0x1899,	// (0x000275d8) cam4_autofocus_pane

0x18af,	// (0x000275ee) cam4_image_uncrop_pane_ParamLimits

0x18af,	// (0x000275ee) cam4_image_uncrop_pane

0x18c9,	// (0x00027608) cam4_indicators_pane_ParamLimits

0x18c9,	// (0x00027608) cam4_indicators_pane

0x18f4,	// (0x00027633) main_camera4_pane_g1_ParamLimits

0x18f4,	// (0x00027633) main_camera4_pane_g1

0x1907,	// (0x00027646) main_camera4_pane_g2_ParamLimits

0x1907,	// (0x00027646) main_camera4_pane_g2

0x191a,	// (0x00027659) main_camera4_pane_g3_ParamLimits

0x191a,	// (0x00027659) main_camera4_pane_g3

0x192d,	// (0x0002766c) main_camera4_pane_g4_ParamLimits

0x192d,	// (0x0002766c) main_camera4_pane_g4

0x1940,	// (0x0002767f) main_camera4_pane_g5_ParamLimits

0x1940,	// (0x0002767f) main_camera4_pane_g5

0x0005,

0xf8fb,	// (0x0003563a) main_camera4_pane_g_ParamLimits

0xf8fb,	// (0x0003563a) main_camera4_pane_g

0x1964,	// (0x000276a3) main_camera4_pane_t1_ParamLimits

0x1964,	// (0x000276a3) main_camera4_pane_t1

0xcf78,	// (0x00032cb7) bg_tb_trans_pane_cp06

0xcf8e,	// (0x00032ccd) cam4_indicators_pane_g1

0xcf9f,	// (0x00032cde) cam4_indicators_pane_g2

0x0002,

0xf916,	// (0x00035655) cam4_indicators_pane_g

0xcfbd,	// (0x00032cfc) cam4_indicators_pane_t1

0x19b4,	// (0x000276f3) main_video4_pane_g1_ParamLimits

0x19b4,	// (0x000276f3) main_video4_pane_g1

0x19c7,	// (0x00027706) main_video4_pane_g2_ParamLimits

0x19c7,	// (0x00027706) main_video4_pane_g2

0x19db,	// (0x0002771a) main_video4_pane_g3_ParamLimits

0x19db,	// (0x0002771a) main_video4_pane_g3

0x19ef,	// (0x0002772e) main_video4_pane_g4_ParamLimits

0x19ef,	// (0x0002772e) main_video4_pane_g4

0x0004,

0xf91d,	// (0x0003565c) main_video4_pane_g_ParamLimits

0xf91d,	// (0x0003565c) main_video4_pane_g

0x1a17,	// (0x00027756) vid4_indicators_pane_ParamLimits

0x1a17,	// (0x00027756) vid4_indicators_pane

0x1a49,	// (0x00027788) video4_image_uncrop_cif_pane_ParamLimits

0x1a49,	// (0x00027788) video4_image_uncrop_cif_pane

0x1a63,	// (0x000277a2) video4_image_uncrop_nhd_pane_ParamLimits

0x1a63,	// (0x000277a2) video4_image_uncrop_nhd_pane

0x18af,	// (0x000275ee) video4_image_uncrop_vga_pane_ParamLimits

0x18af,	// (0x000275ee) video4_image_uncrop_vga_pane

0xcfdf,	// (0x00032d1e) bg_tb_trans_pane_cp07

0x1a77,	// (0x000277b6) vid4_indicators_pane_g1

0x1a84,	// (0x000277c3) vid4_indicators_pane_g2

0x1a91,	// (0x000277d0) vid4_indicators_pane_g3

0x0004,

0xf928,	// (0x00035667) vid4_indicators_pane_g

0x1ab6,	// (0x000277f5) vid4_indicators_pane_t1

0x8307,	// (0x0002e046) cam4_autofocus_pane_g1

0x830f,	// (0x0002e04e) cam4_autofocus_pane_g2

0x8317,	// (0x0002e056) cam4_autofocus_pane_g3

0x0002,

0xf933,	// (0x00035672) cam4_autofocus_pane_g

0x831f,	// (0x0002e05e) cam4_autofocus_pane_g3_copy1

0x80bf,	// (0x0002ddfe) video_down_pane_cp_t1

0x80cd,	// (0x0002de0c) video_down_pane_cp_t2

0x0001,

0xf8af,	// (0x000355ee) video_down_pane_cp_t

0x2229,	// (0x00027f68) popup_vitu2_window_ParamLimits

0x2229,	// (0x00027f68) popup_vitu2_window

0x1ac8,	// (0x00027807) aid_size_cell2_itu2_ParamLimits

0x1ac8,	// (0x00027807) aid_size_cell2_itu2

0x1aee,	// (0x0002782d) aid_size_cell_itu2_ParamLimits

0x1aee,	// (0x0002782d) aid_size_cell_itu2

0x1b4a,	// (0x00027889) bg_popup_window_pane_cp09_ParamLimits

0x1b4a,	// (0x00027889) bg_popup_window_pane_cp09

0x1b58,	// (0x00027897) field_vitu2_entry_pane_ParamLimits

0x1b58,	// (0x00027897) field_vitu2_entry_pane

0x1b7e,	// (0x000278bd) grid_vitu2_function_pane_ParamLimits

0x1b7e,	// (0x000278bd) grid_vitu2_function_pane

0x1bcf,	// (0x0002790e) grid_vitu2_itu_pane_ParamLimits

0x1bcf,	// (0x0002790e) grid_vitu2_itu_pane

0x1c60,	// (0x0002799f) cell_vitu2_itu_pane_ParamLimits

0x1c60,	// (0x0002799f) cell_vitu2_itu_pane

0x1c84,	// (0x000279c3) cell_vitu2_function_pane_ParamLimits

0x1c84,	// (0x000279c3) cell_vitu2_function_pane

0xcff5,	// (0x00032d34) bg_popup_call_pane_cp08_ParamLimits

0xcff5,	// (0x00032d34) bg_popup_call_pane_cp08

0xd00e,	// (0x00032d4d) field_vitu2_entry_pane_g1

0xd01a,	// (0x00032d59) field_vitu2_entry_pane_g2

0x0002,

0xf93a,	// (0x00035679) field_vitu2_entry_pane_g

0xd034,	// (0x00032d73) field_vitu2_entry_pane_t1_ParamLimits

0xd034,	// (0x00032d73) field_vitu2_entry_pane_t1

0xd065,	// (0x00032da4) field_vitu2_entry_pane_t2_ParamLimits

0xd065,	// (0x00032da4) field_vitu2_entry_pane_t2

0x0001,

0xf941,	// (0x00035680) field_vitu2_entry_pane_t_ParamLimits

0xf941,	// (0x00035680) field_vitu2_entry_pane_t

0x1cc3,	// (0x00027a02) bg_button_pane_cp010_ParamLimits

0x1cc3,	// (0x00027a02) bg_button_pane_cp010

0x1cd1,	// (0x00027a10) cell_vitu2_itu_pane_g1

0x1cef,	// (0x00027a2e) cell_vitu2_itu_pane_t1_ParamLimits

0x1cef,	// (0x00027a2e) cell_vitu2_itu_pane_t1

0x1d55,	// (0x00027a94) cell_vitu2_itu_pane_t2_ParamLimits

0x1d55,	// (0x00027a94) cell_vitu2_itu_pane_t2

0x0002,

0xf94b,	// (0x0003568a) cell_vitu2_itu_pane_t_ParamLimits

0xf94b,	// (0x0003568a) cell_vitu2_itu_pane_t

0xd08a,	// (0x00032dc9) bg_button_pane_cp011

0x1e31,	// (0x00027b70) cell_vitu2_function_pane_g1

0x1fb7,	// (0x00027cf6) main_myfav_hc_pane

0x1849,	// (0x00027588) popup_image3_note_pane_ParamLimits

0x1849,	// (0x00027588) popup_image3_note_pane

0x1865,	// (0x000275a4) popup_image3_tool_bar_pane_ParamLimits

0x1865,	// (0x000275a4) popup_image3_tool_bar_pane

0x1dd9,	// (0x00027b18) cell_vitu2_itu_pane_t3_ParamLimits

0x1dd9,	// (0x00027b18) cell_vitu2_itu_pane_t3

0x1fb7,	// (0x00027cf6) bg_popup_trans_pane

0xd098,	// (0x00032dd7) grid_image3_tool_bar_pane

0xd0a2,	// (0x00032de1) bg_popup_trans_pane_g1

0x3ca9,	// (0x000299e8) bg_popup_trans_pane_g2

0xd0aa,	// (0x00032de9) bg_popup_trans_pane_g3

0xd0b2,	// (0x00032df1) bg_popup_trans_pane_g4

0xd0ba,	// (0x00032df9) bg_popup_trans_pane_g5

0xd0c2,	// (0x00032e01) bg_popup_trans_pane_g6

0xd0ca,	// (0x00032e09) bg_popup_trans_pane_g7

0xd0d2,	// (0x00032e11) bg_popup_trans_pane_g8

0x3c89,	// (0x000299c8) bg_popup_trans_pane_g9

0x0008,

0xf952,	// (0x00035691) bg_popup_trans_pane_g

0xd0da,	// (0x00032e19) cell_image3_tool_bar_pane_ParamLimits

0xd0da,	// (0x00032e19) cell_image3_tool_bar_pane

0xc2b2,	// (0x00031ff1) cell_image3_tool_bar_pane_g1

0x1fb7,	// (0x00027cf6) bg_popup_trans_pane_cp1

0xd0ee,	// (0x00032e2d) popup_image3_note_pane_t1

0xd0fc,	// (0x00032e3b) popup_image3_note_pane_t2

0xd10a,	// (0x00032e49) popup_image3_note_pane_t3

0x0002,

0xf965,	// (0x000356a4) popup_image3_note_pane_t

0xd118,	// (0x00032e57) popup_image3_note_pane_t3_copy1

0x8327,	// (0x0002e066) bg_myfav_hc_instruction_pane_ParamLimits

0x8327,	// (0x0002e066) bg_myfav_hc_instruction_pane

0x833d,	// (0x0002e07c) cell_myfav_contact_pane_ParamLimits

0x833d,	// (0x0002e07c) cell_myfav_contact_pane

0x8359,	// (0x0002e098) cell_myfav_contact_pane_cp1_ParamLimits

0x8359,	// (0x0002e098) cell_myfav_contact_pane_cp1

0x8371,	// (0x0002e0b0) cell_myfav_contact_pane_cp2_ParamLimits

0x8371,	// (0x0002e0b0) cell_myfav_contact_pane_cp2

0x8389,	// (0x0002e0c8) cell_myfav_contact_pane_cp3_ParamLimits

0x8389,	// (0x0002e0c8) cell_myfav_contact_pane_cp3

0x83a0,	// (0x0002e0df) cell_myfav_contact_pane_cp4_ParamLimits

0x83a0,	// (0x0002e0df) cell_myfav_contact_pane_cp4

0x83b8,	// (0x0002e0f7) cell_myfav_contact_pane_cp5_ParamLimits

0x83b8,	// (0x0002e0f7) cell_myfav_contact_pane_cp5

0x83cc,	// (0x0002e10b) cell_myfav_contact_pane_cp6_ParamLimits

0x83cc,	// (0x0002e10b) cell_myfav_contact_pane_cp6

0x83e2,	// (0x0002e121) cell_myfav_contact_pane_cp7_ParamLimits

0x83e2,	// (0x0002e121) cell_myfav_contact_pane_cp7

0xd126,	// (0x00032e65) listscroll_gen_pane_cp05

0x83fc,	// (0x0002e13b) main_myfav_hc_pane_g1_ParamLimits

0x83fc,	// (0x0002e13b) main_myfav_hc_pane_g1

0x8416,	// (0x0002e155) main_myfav_hc_pane_g2_ParamLimits

0x8416,	// (0x0002e155) main_myfav_hc_pane_g2

0x0002,

0xf96c,	// (0x000356ab) main_myfav_hc_pane_g_ParamLimits

0xf96c,	// (0x000356ab) main_myfav_hc_pane_g

0x8448,	// (0x0002e187) main_myfav_hc_pane_t1_ParamLimits

0x8448,	// (0x0002e187) main_myfav_hc_pane_t1

0xd12f,	// (0x00032e6e) main_myfav_hc_pane_t2_ParamLimits

0xd12f,	// (0x00032e6e) main_myfav_hc_pane_t2

0xd141,	// (0x00032e80) main_myfav_hc_pane_t3_ParamLimits

0xd141,	// (0x00032e80) main_myfav_hc_pane_t3

0x845f,	// (0x0002e19e) main_myfav_hc_pane_t4_ParamLimits

0x845f,	// (0x0002e19e) main_myfav_hc_pane_t4

0x0004,

0xf973,	// (0x000356b2) main_myfav_hc_pane_t_ParamLimits

0xf973,	// (0x000356b2) main_myfav_hc_pane_t

0xc2b2,	// (0x00031ff1) bg_myfav_hc_instruction_pane_g1

0xd153,	// (0x00032e92) cell_myfav_contact_pane_g1_ParamLimits

0xd153,	// (0x00032e92) cell_myfav_contact_pane_g1

0xd153,	// (0x00032e92) cell_myfav_contact_pane_g2_ParamLimits

0xd153,	// (0x00032e92) cell_myfav_contact_pane_g2

0xd15f,	// (0x00032e9e) cell_myfav_contact_pane_g3_ParamLimits

0xd15f,	// (0x00032e9e) cell_myfav_contact_pane_g3

0xc5b6,	// (0x000322f5) cell_myfav_contact_pane_g4_ParamLimits

0xc5b6,	// (0x000322f5) cell_myfav_contact_pane_g4

0xd16c,	// (0x00032eab) cell_myfav_contact_pane_g5_ParamLimits

0xd16c,	// (0x00032eab) cell_myfav_contact_pane_g5

0x0004,

0xf97e,	// (0x000356bd) cell_myfav_contact_pane_g_ParamLimits

0xf97e,	// (0x000356bd) cell_myfav_contact_pane_g

0x8430,	// (0x0002e16f) main_myfav_hc_pane_g3_ParamLimits

0x8430,	// (0x0002e16f) main_myfav_hc_pane_g3

0x2163,	// (0x00027ea2) popup_adpt_find_window

0x8487,	// (0x0002e1c6) afind_page_pane_ParamLimits

0x8487,	// (0x0002e1c6) afind_page_pane

0x849c,	// (0x0002e1db) aid_size_cell_afind_ParamLimits

0x849c,	// (0x0002e1db) aid_size_cell_afind

0x84ba,	// (0x0002e1f9) bg_popup_sub_pane_cp09_ParamLimits

0x84ba,	// (0x0002e1f9) bg_popup_sub_pane_cp09

0x84c7,	// (0x0002e206) find_pane_cp01_ParamLimits

0x84c7,	// (0x0002e206) find_pane_cp01

0xd178,	// (0x00032eb7) grid_afind_control_pane_ParamLimits

0xd178,	// (0x00032eb7) grid_afind_control_pane

0x84d4,	// (0x0002e213) grid_afind_pane_ParamLimits

0x84d4,	// (0x0002e213) grid_afind_pane

0x84f6,	// (0x0002e235) cell_afind_pane_ParamLimits

0x84f6,	// (0x0002e235) cell_afind_pane

0xc2b2,	// (0x00031ff1) afind_page_pane_g1

0x8557,	// (0x0002e296) afind_page_pane_g2

0x8560,	// (0x0002e29f) afind_page_pane_g3

0x0002,

0xf989,	// (0x000356c8) afind_page_pane_g

0x8569,	// (0x0002e2a8) afind_page_pane_t1

0xd18c,	// (0x00032ecb) cell_afind_grid_control_pane_ParamLimits

0xd18c,	// (0x00032ecb) cell_afind_grid_control_pane

0xce13,	// (0x00032b52) bg_button_pane_cp69_ParamLimits

0xce13,	// (0x00032b52) bg_button_pane_cp69

0x8589,	// (0x0002e2c8) cell_afind_pane_g1_ParamLimits

0x8589,	// (0x0002e2c8) cell_afind_pane_g1

0x8596,	// (0x0002e2d5) cell_afind_pane_t1_ParamLimits

0x8596,	// (0x0002e2d5) cell_afind_pane_t1

0x3537,	// (0x00029276) bg_button_pane_cp72

0xd19b,	// (0x00032eda) cell_afind_grid_control_pane_g1

0x5f2b,	// (0x0002bc6a) aid_image_placing_area_ParamLimits

0x5f2b,	// (0x0002bc6a) aid_image_placing_area

0xc89e,	// (0x000325dd) field_vitu_entry_pane_g1_ParamLimits

0xc89e,	// (0x000325dd) field_vitu_entry_pane_g1

0xc8aa,	// (0x000325e9) field_vitu_entry_pane_g2_ParamLimits

0xc8aa,	// (0x000325e9) field_vitu_entry_pane_g2

0x0001,

0xf83a,	// (0x00035579) field_vitu_entry_pane_g_ParamLimits

0xf83a,	// (0x00035579) field_vitu_entry_pane_g

0x7f55,	// (0x0002dc94) cell_vitu_itu_pane_g1_ParamLimits

0x7f97,	// (0x0002dcd6) cell_vitu_itu_pane_t3_ParamLimits

0x7f97,	// (0x0002dcd6) cell_vitu_itu_pane_t3

0xcdb9,	// (0x00032af8) mp4_progress_pane_t1_ParamLimits

0xcdd2,	// (0x00032b11) mp4_progress_pane_t2_ParamLimits

0xf8cf,	// (0x0003560e) mp4_progress_pane_t_ParamLimits

0xcdeb,	// (0x00032b2a) mup_progress_pane_cp04_ParamLimits

0x8473,	// (0x0002e1b2) main_myfav_hc_pane_t5_ParamLimits

0x8473,	// (0x0002e1b2) main_myfav_hc_pane_t5

0x200d,	// (0x00027d4c) aid_zoom_text_primary

0x2163,	// (0x00027ea2) popup_adpt_find_window_ParamLimits

0x2229,	// (0x00027f68) main_cam_set_pane

0x18e0,	// (0x0002761f) cam4_zoom_pane_ParamLimits

0x18e0,	// (0x0002761f) cam4_zoom_pane

0x85a8,	// (0x0002e2e7) main_cam_set_pane_g1_ParamLimits

0x85a8,	// (0x0002e2e7) main_cam_set_pane_g1

0x85b6,	// (0x0002e2f5) main_cam_set_pane_g2_ParamLimits

0x85b6,	// (0x0002e2f5) main_cam_set_pane_g2

0x0001,

0xf990,	// (0x000356cf) main_cam_set_pane_g_ParamLimits

0xf990,	// (0x000356cf) main_cam_set_pane_g

0x85d7,	// (0x0002e316) main_cam_set_pane_t1_ParamLimits

0x85d7,	// (0x0002e316) main_cam_set_pane_t1

0x85f2,	// (0x0002e331) main_cset_listscroll_pane_ParamLimits

0x85f2,	// (0x0002e331) main_cset_listscroll_pane

0x8612,	// (0x0002e351) main_cset_slider_pane_ParamLimits

0x8612,	// (0x0002e351) main_cset_slider_pane

0xd1ac,	// (0x00032eeb) main_cset_list_pane_ParamLimits

0xd1ac,	// (0x00032eeb) main_cset_list_pane

0xd1bc,	// (0x00032efb) scroll_pane_cp028

0x8638,	// (0x0002e377) aid_area_touch_slider

0x8654,	// (0x0002e393) cset_slider_pane

0x867e,	// (0x0002e3bd) main_cset_slider_pane_g1

0x8693,	// (0x0002e3d2) main_cset_slider_pane_g2

0x0011,

0xf995,	// (0x000356d4) main_cset_slider_pane_g

0xd1f5,	// (0x00032f34) main_cset_slider_pane_t1

0x874f,	// (0x0002e48e) main_cset_slider_pane_t2

0x8769,	// (0x0002e4a8) main_cset_slider_pane_t3

0x8783,	// (0x0002e4c2) main_cset_slider_pane_t4

0x879d,	// (0x0002e4dc) main_cset_slider_pane_t5

0x87b9,	// (0x0002e4f8) main_cset_slider_pane_t6

0x87ce,	// (0x0002e50d) main_cset_slider_pane_t7

0x000e,

0xf9ba,	// (0x000356f9) main_cset_slider_pane_t

0x88d2,	// (0x0002e611) cset_list_set_pane_ParamLimits

0x88d2,	// (0x0002e611) cset_list_set_pane

0x88e6,	// (0x0002e625) aid_position_infowindow_above

0x88ee,	// (0x0002e62d) aid_position_infowindow_below

0x88f6,	// (0x0002e635) cset_list_set_pane_g1_ParamLimits

0x88f6,	// (0x0002e635) cset_list_set_pane_g1

0x8902,	// (0x0002e641) cset_list_set_pane_g3_ParamLimits

0x8902,	// (0x0002e641) cset_list_set_pane_g3

0x0001,

0xf9d9,	// (0x00035718) cset_list_set_pane_g_ParamLimits

0xf9d9,	// (0x00035718) cset_list_set_pane_g

0x8911,	// (0x0002e650) cset_list_set_pane_t1_ParamLimits

0x8911,	// (0x0002e650) cset_list_set_pane_t1

0x2229,	// (0x00027f68) list_highlight_pane_cp021_ParamLimits

0x2229,	// (0x00027f68) list_highlight_pane_cp021

0x5713,	// (0x0002b452) cset_slider_pane_g1

0x5725,	// (0x0002b464) cset_slider_pane_g2

0x571c,	// (0x0002b45b) cset_slider_pane_g3

0x0002,

0xf9de,	// (0x0003571d) cset_slider_pane_g

0xd295,	// (0x00032fd4) aid_area_touch_cam4_zoom

0xd29d,	// (0x00032fdc) cam4_zoom_cont_pane

0xd2a5,	// (0x00032fe4) cam4_zoom_pane_g1

0xd2ad,	// (0x00032fec) cam4_zoom_pane_g2

0x1e45,	// (0x00027b84) cam4_zoom_pane_g3

0x0002,

0xf9e5,	// (0x00035724) cam4_zoom_pane_g

0xd2b5,	// (0x00032ff4) cam4_zoom_cont_pane_g1

0xd2be,	// (0x00032ffd) cam4_zoom_cont_pane_g2

0xd2c7,	// (0x00033006) cam4_zoom_cont_pane_g3

0x0002,

0xf9ec,	// (0x0003572b) cam4_zoom_cont_pane_g

0x820e,	// (0x0002df4d) call4_image_pane_ParamLimits

0x820e,	// (0x0002df4d) call4_image_pane

0xce51,	// (0x00032b90) call4_windows_conf_pane_ParamLimits

0xce90,	// (0x00032bcf) popup_call4_audio_in_window_ParamLimits

0xce90,	// (0x00032bcf) popup_call4_audio_in_window

0x1fb7,	// (0x00027cf6) bg_popup_call2_act_pane_cp02

0xcf06,	// (0x00032c45) call4_list_conf_pane

0xc2b2,	// (0x00031ff1) call4_image_pane_g1

0xc2b2,	// (0x00031ff1) call4_image_pane_g2

0x0001,

0xf700,	// (0x0003543f) call4_image_pane_g

0xd2d0,	// (0x0003300f) list_single_graphic_popup_conf4_pane_ParamLimits

0xd2d0,	// (0x0003300f) list_single_graphic_popup_conf4_pane

0x1fb7,	// (0x00027cf6) list_highlight_pane_cp022

0xd2e3,	// (0x00033022) list_single_graphic_popup_conf4_pane_g1

0x4ca1,	// (0x0002a9e0) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9f3,	// (0x00035732) list_single_graphic_popup_conf4_pane_g

0xd2eb,	// (0x0003302a) list_single_graphic_popup_conf4_pane_t1

0x3811,	// (0x00029550) popup_vtel_slider_window_ParamLimits

0x3811,	// (0x00029550) popup_vtel_slider_window

0xce01,	// (0x00032b40) dialer2_ne_pane_t2_ParamLimits

0xce01,	// (0x00032b40) dialer2_ne_pane_t2

0x0001,

0xf8d4,	// (0x00035613) dialer2_ne_pane_t_ParamLimits

0xf8d4,	// (0x00035613) dialer2_ne_pane_t

0xc095,	// (0x00031dd4) bg_popup_sub_pane_cp010_ParamLimits

0xc095,	// (0x00031dd4) bg_popup_sub_pane_cp010

0x8926,	// (0x0002e665) popup_vtel_slider_window_g1_ParamLimits

0x8926,	// (0x0002e665) popup_vtel_slider_window_g1

0x8939,	// (0x0002e678) popup_vtel_slider_window_g2_ParamLimits

0x8939,	// (0x0002e678) popup_vtel_slider_window_g2

0x0003,

0xf9f8,	// (0x00035737) popup_vtel_slider_window_g_ParamLimits

0xf9f8,	// (0x00035737) popup_vtel_slider_window_g

0x898f,	// (0x0002e6ce) vtel_slider_pane_ParamLimits

0x898f,	// (0x0002e6ce) vtel_slider_pane

0x89b1,	// (0x0002e6f0) vtel_slider_pane_g1_ParamLimits

0x89b1,	// (0x0002e6f0) vtel_slider_pane_g1

0x89c5,	// (0x0002e704) vtel_slider_pane_g2_ParamLimits

0x89c5,	// (0x0002e704) vtel_slider_pane_g2

0x89dd,	// (0x0002e71c) vtel_slider_pane_g3_ParamLimits

0x89dd,	// (0x0002e71c) vtel_slider_pane_g3

0x89b1,	// (0x0002e6f0) vtel_slider_pane_g4_ParamLimits

0x89b1,	// (0x0002e6f0) vtel_slider_pane_g4

0x89f3,	// (0x0002e732) vtel_slider_pane_g5_ParamLimits

0x89f3,	// (0x0002e732) vtel_slider_pane_g5

0x0004,

0xfa01,	// (0x00035740) vtel_slider_pane_g_ParamLimits

0xfa01,	// (0x00035740) vtel_slider_pane_g

0x1fb7,	// (0x00027cf6) main_gallery2_pane

0x1b1a,	// (0x00027859) aid_size_row_itut2_dropdow_list_ParamLimits

0x1b1a,	// (0x00027859) aid_size_row_itut2_dropdow_list

0x1ba6,	// (0x000278e5) grid_vitu2_function_top_pane_ParamLimits

0x1ba6,	// (0x000278e5) grid_vitu2_function_top_pane

0x1c0b,	// (0x0002794a) popup_vitu2_dropdown_list_window_ParamLimits

0x1c0b,	// (0x0002794a) popup_vitu2_dropdown_list_window

0x1c34,	// (0x00027973) popup_vitu2_match_list_window

0x1e4d,	// (0x00027b8c) cell_vitu2_function_top_pane_ParamLimits

0x1e4d,	// (0x00027b8c) cell_vitu2_function_top_pane

0x1e6b,	// (0x00027baa) cell_vitu2_function_top_pane_cp01_ParamLimits

0x1e6b,	// (0x00027baa) cell_vitu2_function_top_pane_cp01

0x1e89,	// (0x00027bc8) cell_vitu2_function_top_wide_pane_ParamLimits

0x1e89,	// (0x00027bc8) cell_vitu2_function_top_wide_pane

0xd08a,	// (0x00032dc9) bg_button_pane_cp012

0x1ea7,	// (0x00027be6) cell_vitu2_function_top_pane_g1

0xd30f,	// (0x0003304e) bg_button_pane_cp013_ParamLimits

0xd30f,	// (0x0003304e) bg_button_pane_cp013

0x8a09,	// (0x0002e748) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x8a09,	// (0x0002e748) cell_vitu2_function_top_wide_pane_g1

0xd08a,	// (0x00032dc9) bg_popup_sub_pane_cp20

0x1ebb,	// (0x00027bfa) list_vitu2_match_list_pane

0xd0a2,	// (0x00032de1) bg_popup_sub_pane_cp20_g1

0xd0aa,	// (0x00032de9) bg_popup_sub_pane_cp20_g2

0x3ca9,	// (0x000299e8) bg_popup_sub_pane_cp20_g3

0xd0b2,	// (0x00032df1) bg_popup_sub_pane_cp20_g4

0x3c89,	// (0x000299c8) bg_popup_sub_pane_cp20_g5

0xd32b,	// (0x0003306a) bg_popup_sub_pane_cp20_g6

0xd0c2,	// (0x00032e01) bg_popup_sub_pane_cp20_g7

0xd0ca,	// (0x00032e09) bg_popup_sub_pane_cp20_g8

0xd0d2,	// (0x00032e11) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa0c,	// (0x0003574b) bg_popup_sub_pane_cp20_g

0xd333,	// (0x00033072) list_vitu2_match_list_item_pane_ParamLimits

0xd333,	// (0x00033072) list_vitu2_match_list_item_pane

0xd345,	// (0x00033084) list_vitu2_match_list_item_pane_t1

0xb085,	// (0x00030dc4) bg_popup_sub_pane_cp21

0xd36b,	// (0x000330aa) grid_vitu2_dropdown_list_pane

0x1ed9,	// (0x00027c18) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x1ed9,	// (0x00027c18) cell_vitu2_dropdown_list_char_pane

0x1efa,	// (0x00027c39) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x1efa,	// (0x00027c39) cell_vitu2_dropdown_list_ctrl_pane

0xd373,	// (0x000330b2) cell_vitu2_dropdown_list_char_pane_g1

0xd37c,	// (0x000330bb) cell_vitu2_dropdown_list_char_pane_g2

0xd385,	// (0x000330c4) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa29,	// (0x00035768) cell_vitu2_dropdown_list_char_pane_g

0x1f26,	// (0x00027c65) cell_vitu2_dropdown_list_char_pane_t1

0x8a56,	// (0x0002e795) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x8a56,	// (0x0002e795) cell_vitu2_dropdown_list_ctrl_pane_g1

0x8a66,	// (0x0002e7a5) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x8a66,	// (0x0002e7a5) cell_vitu2_dropdown_list_ctrl_pane_g2

0x8a77,	// (0x0002e7b6) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x8a77,	// (0x0002e7b6) cell_vitu2_dropdown_list_ctrl_pane_g3

0x1f34,	// (0x00027c73) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x1f34,	// (0x00027c73) cell_vitu2_dropdown_list_ctrl_pane_g4

0xcf78,	// (0x00032cb7) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xcf78,	// (0x00032cb7) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa30,	// (0x0003576f) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa30,	// (0x0003576f) cell_vitu2_dropdown_list_ctrl_pane_g

0x8a87,	// (0x0002e7c6) aid_size_cell_gallery2_ParamLimits

0x8a87,	// (0x0002e7c6) aid_size_cell_gallery2

0x8a9d,	// (0x0002e7dc) grid_gallery2_pane_ParamLimits

0x8a9d,	// (0x0002e7dc) grid_gallery2_pane

0x8ab1,	// (0x0002e7f0) scroll_pane_cp029_ParamLimits

0x8ab1,	// (0x0002e7f0) scroll_pane_cp029

0x8abd,	// (0x0002e7fc) cell_gallery2_pane_ParamLimits

0x8abd,	// (0x0002e7fc) cell_gallery2_pane

0xd38e,	// (0x000330cd) cell_gallery2_pane_g2

0x8af3,	// (0x0002e832) cell_gallery2_pane_g3

0xd398,	// (0x000330d7) cell_gallery2_pane_g4

0xd3a0,	// (0x000330df) cell_gallery2_pane_g5

0x51d5,	// (0x0002af14) grid_highlight_pane_cp10

0x1c34,	// (0x00027973) popup_vitu2_match_list_window_ParamLimits

0x1c49,	// (0x00027988) popup_vitu2_query_window_ParamLimits

0x1c49,	// (0x00027988) popup_vitu2_query_window

0xb085,	// (0x00030dc4) bg_vitu2_candi_button_pane

0xd373,	// (0x000330b2) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd37c,	// (0x000330bb) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd385,	// (0x000330c4) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x8afb,	// (0x0002e83a) bg_button_pane_cp015

0x8b0f,	// (0x0002e84e) bg_button_pane_cp016

0x8b22,	// (0x0002e861) bg_button_pane_cp017

0xbdaa,	// (0x00031ae9) bg_popup_sub_pane_cp22

0xd3a8,	// (0x000330e7) popup_vitu2_query_window_g1

0x8b67,	// (0x0002e8a6) popup_vitu2_query_window_g2

0x0002,

0xfa3b,	// (0x0003577a) popup_vitu2_query_window_g

0x8b86,	// (0x0002e8c5) popup_vitu2_query_window_t1_ParamLimits

0x8b86,	// (0x0002e8c5) popup_vitu2_query_window_t1

0x8bbb,	// (0x0002e8fa) popup_vitu2_query_window_t2_ParamLimits

0x8bbb,	// (0x0002e8fa) popup_vitu2_query_window_t2

0x8bcd,	// (0x0002e90c) popup_vitu2_query_window_t3_ParamLimits

0x8bcd,	// (0x0002e90c) popup_vitu2_query_window_t3

0x8bf5,	// (0x0002e934) popup_vitu2_query_window_t4_ParamLimits

0x8bf5,	// (0x0002e934) popup_vitu2_query_window_t4

0x8c16,	// (0x0002e955) popup_vitu2_query_window_t5_ParamLimits

0x8c16,	// (0x0002e955) popup_vitu2_query_window_t5

0x0006,

0xfa42,	// (0x00035781) popup_vitu2_query_window_t_ParamLimits

0xfa42,	// (0x00035781) popup_vitu2_query_window_t

0xd1a4,	// (0x00032ee3) main_cset_text_pane

0x8638,	// (0x0002e377) aid_area_touch_slider_ParamLimits

0x8654,	// (0x0002e393) cset_slider_pane_ParamLimits

0x867e,	// (0x0002e3bd) main_cset_slider_pane_g1_ParamLimits

0x8693,	// (0x0002e3d2) main_cset_slider_pane_g2_ParamLimits

0xd1c5,	// (0x00032f04) main_cset_slider_pane_g3_ParamLimits

0xd1c5,	// (0x00032f04) main_cset_slider_pane_g3

0x86a8,	// (0x0002e3e7) main_cset_slider_pane_g4_ParamLimits

0x86a8,	// (0x0002e3e7) main_cset_slider_pane_g4

0x86b7,	// (0x0002e3f6) main_cset_slider_pane_g5_ParamLimits

0x86b7,	// (0x0002e3f6) main_cset_slider_pane_g5

0x86c3,	// (0x0002e402) main_cset_slider_pane_g6_ParamLimits

0x86c3,	// (0x0002e402) main_cset_slider_pane_g6

0xf995,	// (0x000356d4) main_cset_slider_pane_g_ParamLimits

0xd1f5,	// (0x00032f34) main_cset_slider_pane_t1_ParamLimits

0x874f,	// (0x0002e48e) main_cset_slider_pane_t2_ParamLimits

0x8769,	// (0x0002e4a8) main_cset_slider_pane_t3_ParamLimits

0x8783,	// (0x0002e4c2) main_cset_slider_pane_t4_ParamLimits

0x879d,	// (0x0002e4dc) main_cset_slider_pane_t5_ParamLimits

0x87b9,	// (0x0002e4f8) main_cset_slider_pane_t6_ParamLimits

0x87ce,	// (0x0002e50d) main_cset_slider_pane_t7_ParamLimits

0x87f8,	// (0x0002e537) main_cset_slider_pane_t8_ParamLimits

0x87f8,	// (0x0002e537) main_cset_slider_pane_t8

0x8820,	// (0x0002e55f) main_cset_slider_pane_t9_ParamLimits

0x8820,	// (0x0002e55f) main_cset_slider_pane_t9

0x8848,	// (0x0002e587) main_cset_slider_pane_t10_ParamLimits

0x8848,	// (0x0002e587) main_cset_slider_pane_t10

0x8870,	// (0x0002e5af) main_cset_slider_pane_t11_ParamLimits

0x8870,	// (0x0002e5af) main_cset_slider_pane_t11

0x8898,	// (0x0002e5d7) main_cset_slider_pane_t12_ParamLimits

0x8898,	// (0x0002e5d7) main_cset_slider_pane_t12

0x88b5,	// (0x0002e5f4) main_cset_slider_pane_t13_ParamLimits

0x88b5,	// (0x0002e5f4) main_cset_slider_pane_t13

0xf9ba,	// (0x000356f9) main_cset_slider_pane_t_ParamLimits

0x1fb7,	// (0x00027cf6) bg_popup_sub_pane_cp011

0xd3b4,	// (0x000330f3) main_cset_text_pane_g1

0xd3bc,	// (0x000330fb) main_cset_text_pane_t1

0xd3ca,	// (0x00033109) main_cset_text_pane_t2

0xd3d8,	// (0x00033117) main_cset_text_pane_t3

0xd3e6,	// (0x00033125) main_cset_text_pane_t4

0xd3f4,	// (0x00033133) main_cset_text_pane_t5

0xd402,	// (0x00033141) main_cset_text_pane_t6

0xd410,	// (0x0003314f) main_cset_text_pane_t7

0x0006,

0xfa51,	// (0x00035790) main_cset_text_pane_t

0x1fb7,	// (0x00027cf6) main_cam4_burst_pane

0x1fb7,	// (0x00027cf6) main_cam5_pane

0x8577,	// (0x0002e2b6) bg_button_pane_cp019

0x8580,	// (0x0002e2bf) bg_button_pane_cp020

0xd1d1,	// (0x00032f10) main_cset_slider_pane_g7_ParamLimits

0xd1d1,	// (0x00032f10) main_cset_slider_pane_g7

0xd1dd,	// (0x00032f1c) main_cset_slider_pane_g8_ParamLimits

0xd1dd,	// (0x00032f1c) main_cset_slider_pane_g8

0x86d7,	// (0x0002e416) main_cset_slider_pane_g9_ParamLimits

0x86d7,	// (0x0002e416) main_cset_slider_pane_g9

0x86e3,	// (0x0002e422) main_cset_slider_pane_g10_ParamLimits

0x86e3,	// (0x0002e422) main_cset_slider_pane_g10

0x86ef,	// (0x0002e42e) main_cset_slider_pane_g11_ParamLimits

0x86ef,	// (0x0002e42e) main_cset_slider_pane_g11

0x86fb,	// (0x0002e43a) main_cset_slider_pane_g12_ParamLimits

0x86fb,	// (0x0002e43a) main_cset_slider_pane_g12

0x8707,	// (0x0002e446) main_cset_slider_pane_g13_ParamLimits

0x8707,	// (0x0002e446) main_cset_slider_pane_g13

0x8713,	// (0x0002e452) main_cset_slider_pane_g14_ParamLimits

0x8713,	// (0x0002e452) main_cset_slider_pane_g14

0x871f,	// (0x0002e45e) main_cset_slider_pane_g15_ParamLimits

0x871f,	// (0x0002e45e) main_cset_slider_pane_g15

0xd223,	// (0x00032f62) main_cset_slider_pane_t14_ParamLimits

0xd223,	// (0x00032f62) main_cset_slider_pane_t14

0xd25c,	// (0x00032f9b) main_cset_slider_pane_t15_ParamLimits

0xd25c,	// (0x00032f9b) main_cset_slider_pane_t15

0x8c8d,	// (0x0002e9cc) aid_cam4_burst_size_cell_ParamLimits

0x8c8d,	// (0x0002e9cc) aid_cam4_burst_size_cell

0x8cad,	// (0x0002e9ec) grid_cam4_burst_pane_ParamLimits

0x8cad,	// (0x0002e9ec) grid_cam4_burst_pane

0x8ce5,	// (0x0002ea24) linegrid_cam4_burst_pane_ParamLimits

0x8ce5,	// (0x0002ea24) linegrid_cam4_burst_pane

0xd41e,	// (0x0003315d) scroll_pane_cp30_ParamLimits

0xd41e,	// (0x0003315d) scroll_pane_cp30

0x8d0b,	// (0x0002ea4a) cell_cam4_burst_pane_ParamLimits

0x8d0b,	// (0x0002ea4a) cell_cam4_burst_pane

0xd42a,	// (0x00033169) linegrid_cam4_burst_pane_g1_ParamLimits

0xd42a,	// (0x00033169) linegrid_cam4_burst_pane_g1

0x8d58,	// (0x0002ea97) linegrid_cam4_burst_pane_g2_ParamLimits

0x8d58,	// (0x0002ea97) linegrid_cam4_burst_pane_g2

0xd437,	// (0x00033176) linegrid_cam4_burst_pane_g3_ParamLimits

0xd437,	// (0x00033176) linegrid_cam4_burst_pane_g3

0x0002,

0xfa60,	// (0x0003579f) linegrid_cam4_burst_pane_g_ParamLimits

0xfa60,	// (0x0003579f) linegrid_cam4_burst_pane_g

0x8d69,	// (0x0002eaa8) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x8d69,	// (0x0002eaa8) linegrid_cam4_burst_pane_g3_copy1

0xd444,	// (0x00033183) linegrid_cam4_burst_pane_g4_ParamLimits

0xd444,	// (0x00033183) linegrid_cam4_burst_pane_g4

0x8d83,	// (0x0002eac2) linegrid_cam4_burst_pane_g5_ParamLimits

0x8d83,	// (0x0002eac2) linegrid_cam4_burst_pane_g5

0x8d94,	// (0x0002ead3) linegrid_cam4_burst_pane_g6_ParamLimits

0x8d94,	// (0x0002ead3) linegrid_cam4_burst_pane_g6

0xd451,	// (0x00033190) linegrid_cam4_burst_pane_g7_ParamLimits

0xd451,	// (0x00033190) linegrid_cam4_burst_pane_g7

0x8dab,	// (0x0002eaea) cell_cam4_burst_pane_g1

0xd46a,	// (0x000331a9) main_cam5_pane_t1_ParamLimits

0xd46a,	// (0x000331a9) main_cam5_pane_t1

0xd47c,	// (0x000331bb) main_cam5_pane_t2_ParamLimits

0xd47c,	// (0x000331bb) main_cam5_pane_t2

0xd48e,	// (0x000331cd) main_cam5_pane_t3_ParamLimits

0xd48e,	// (0x000331cd) main_cam5_pane_t3

0xd4a0,	// (0x000331df) main_cam5_pane_t4_ParamLimits

0xd4a0,	// (0x000331df) main_cam5_pane_t4

0xd4b6,	// (0x000331f5) main_cam5_pane_t5_ParamLimits

0xd4b6,	// (0x000331f5) main_cam5_pane_t5

0xd4c8,	// (0x00033207) main_cam5_pane_t6_ParamLimits

0xd4c8,	// (0x00033207) main_cam5_pane_t6

0xd4dc,	// (0x0003321b) main_cam5_pane_t7_ParamLimits

0xd4dc,	// (0x0003321b) main_cam5_pane_t7

0xd4ee,	// (0x0003322d) main_cam5_pane_t8_ParamLimits

0xd4ee,	// (0x0003322d) main_cam5_pane_t8

0xd50a,	// (0x00033249) main_cam5_pane_t9_ParamLimits

0xd50a,	// (0x00033249) main_cam5_pane_t9

0xd51c,	// (0x0003325b) main_cam5_pane_t10_ParamLimits

0xd51c,	// (0x0003325b) main_cam5_pane_t10

0xd52e,	// (0x0003326d) main_cam5_pane_t11_ParamLimits

0xd52e,	// (0x0003326d) main_cam5_pane_t11

0xd540,	// (0x0003327f) main_cam5_pane_t12_ParamLimits

0xd540,	// (0x0003327f) main_cam5_pane_t12

0xd555,	// (0x00033294) main_cam5_pane_t13_ParamLimits

0xd555,	// (0x00033294) main_cam5_pane_t13

0x000c,

0xfa6c,	// (0x000357ab) main_cam5_pane_t_ParamLimits

0xfa6c,	// (0x000357ab) main_cam5_pane_t

0x21ef,	// (0x00027f2e) popup_scut_keymap_window_ParamLimits

0x21ef,	// (0x00027f2e) popup_scut_keymap_window

0x8dbe,	// (0x0002eafd) aid_size_cell_brow_shortcut

0x51d5,	// (0x0002af14) bg_popup_window_pane_cp010

0x8dca,	// (0x0002eb09) grid_scut_pane

0x8dd6,	// (0x0002eb15) cell_scut_pane_ParamLimits

0x8dd6,	// (0x0002eb15) cell_scut_pane

0x8ded,	// (0x0002eb2c) cell_scut_pane_g1

0xd572,	// (0x000332b1) cell_scut_pane_t1

0xd581,	// (0x000332c0) cell_scut_pane_t2

0x8df6,	// (0x0002eb35) cell_scut_pane_t3

0x0002,

0xfa87,	// (0x000357c6) cell_scut_pane_t

0x7509,	// (0x0002d248) main_mup3_pane_g8_ParamLimits

0x7509,	// (0x0002d248) main_mup3_pane_g8

0x1b32,	// (0x00027871) area_vitu2_query_pane_ParamLimits

0x1b32,	// (0x00027871) area_vitu2_query_pane

0x8b35,	// (0x0002e874) input_focus_pane_cp08

0xd590,	// (0x000332cf) area_vitu2_query_pane_g1

0x8e04,	// (0x0002eb43) area_vitu2_query_pane_g2

0x0001,

0xfa8e,	// (0x000357cd) area_vitu2_query_pane_g

0x8e15,	// (0x0002eb54) area_vitu2_query_pane_t1_ParamLimits

0x8e15,	// (0x0002eb54) area_vitu2_query_pane_t1

0x8e29,	// (0x0002eb68) area_vitu2_query_pane_t2_ParamLimits

0x8e29,	// (0x0002eb68) area_vitu2_query_pane_t2

0x8e3d,	// (0x0002eb7c) area_vitu2_query_pane_t3_ParamLimits

0x8e3d,	// (0x0002eb7c) area_vitu2_query_pane_t3

0xd59c,	// (0x000332db) area_vitu2_query_pane_t4_ParamLimits

0xd59c,	// (0x000332db) area_vitu2_query_pane_t4

0xd5c4,	// (0x00033303) area_vitu2_query_pane_t5_ParamLimits

0xd5c4,	// (0x00033303) area_vitu2_query_pane_t5

0xd5ec,	// (0x0003332b) area_vitu2_query_pane_t6_ParamLimits

0xd5ec,	// (0x0003332b) area_vitu2_query_pane_t6

0x0006,

0xfa93,	// (0x000357d2) area_vitu2_query_pane_t_ParamLimits

0xfa93,	// (0x000357d2) area_vitu2_query_pane_t

0x8e65,	// (0x0002eba4) bg_button_pane_cp018

0x8e73,	// (0x0002ebb2) bg_button_pane_cp021

0x8e7f,	// (0x0002ebbe) bg_button_pane_cp022

0x8e90,	// (0x0002ebcf) input_focus_pane_cp09

0x4ffc,	// (0x0002ad3b) aid_size_touch_mv_arrow_left

0x5025,	// (0x0002ad64) aid_size_touch_mv_arrow_right

0x8737,	// (0x0002e476) main_cset_slider_pane_g16_ParamLimits

0x8737,	// (0x0002e476) main_cset_slider_pane_g16

0x8743,	// (0x0002e482) main_cset_slider_pane_g17_ParamLimits

0x8743,	// (0x0002e482) main_cset_slider_pane_g17

0x8dab,	// (0x0002eaea) cell_cam4_burst_pane_g1_ParamLimits

0x1fb7,	// (0x00027cf6) compa_mode_pane

0x8949,	// (0x0002e688) popup_vtel_slider_window_g3_ParamLimits

0x8949,	// (0x0002e688) popup_vtel_slider_window_g3

0x8960,	// (0x0002e69f) popup_vtel_slider_window_g4_ParamLimits

0x8960,	// (0x0002e69f) popup_vtel_slider_window_g4

0x8977,	// (0x0002e6b6) popup_vtel_slider_window_t1_ParamLimits

0x8977,	// (0x0002e6b6) popup_vtel_slider_window_t1

0x1fb7,	// (0x00027cf6) main_cl_pane

0xbdd2,	// (0x00031b11) popup_imed_adjust2_window_ParamLimits

0xbdaa,	// (0x00031ae9) bg_tb_trans_pane_cp05_ParamLimits

0xc7d3,	// (0x00032512) popup_imed_adjust2_window_g1_ParamLimits

0xc7e2,	// (0x00032521) popup_imed_adjust2_window_g2_ParamLimits

0xc7e2,	// (0x00032521) popup_imed_adjust2_window_g2

0xc7ee,	// (0x0003252d) popup_imed_adjust2_window_g3_ParamLimits

0xc7ee,	// (0x0003252d) popup_imed_adjust2_window_g3

0x0002,

0xf7fe,	// (0x0003553d) popup_imed_adjust2_window_g_ParamLimits

0xf7fe,	// (0x0003553d) popup_imed_adjust2_window_g

0xc7fa,	// (0x00032539) popup_imed_adjust2_window_t1_ParamLimits

0xc812,	// (0x00032551) slider_imed_adjust_pane_ParamLimits

0xc826,	// (0x00032565) slider_imed_adjust_pane_g1_ParamLimits

0xc836,	// (0x00032575) slider_imed_adjust_pane_g2_ParamLimits

0xc846,	// (0x00032585) slider_imed_adjust_pane_g3_ParamLimits

0xc857,	// (0x00032596) slider_imed_adjust_pane_g4_ParamLimits

0xf805,	// (0x00035544) slider_imed_adjust_pane_g_ParamLimits

0x1881,	// (0x000275c0) aid_touch_area_cam4_ParamLimits

0x1881,	// (0x000275c0) aid_touch_area_cam4

0xcf4a,	// (0x00032c89) battery_pane_cp01

0x1951,	// (0x00027690) main_camera4_pane_g6_ParamLimits

0x1951,	// (0x00027690) main_camera4_pane_g6

0x197b,	// (0x000276ba) main_camera4_pane_t2_ParamLimits

0x197b,	// (0x000276ba) main_camera4_pane_t2

0x0001,

0xf908,	// (0x00035647) main_camera4_pane_t_ParamLimits

0xf908,	// (0x00035647) main_camera4_pane_t

0x199c,	// (0x000276db) aid_touch_area_vid4_ParamLimits

0x199c,	// (0x000276db) aid_touch_area_vid4

0x1a03,	// (0x00027742) main_video4_pane_g5_ParamLimits

0x1a03,	// (0x00027742) main_video4_pane_g5

0x1a2e,	// (0x0002776d) vid4_progress_pane_ParamLimits

0x1a2e,	// (0x0002776d) vid4_progress_pane

0xd1e9,	// (0x00032f28) main_cset_slider_pane_g18_ParamLimits

0xd1e9,	// (0x00032f28) main_cset_slider_pane_g18

0xd45e,	// (0x0003319d) cell_cam4_burst_pane_g2_ParamLimits

0xd45e,	// (0x0003319d) cell_cam4_burst_pane_g2

0x0001,

0xfa67,	// (0x000357a6) cell_cam4_burst_pane_g_ParamLimits

0xfa67,	// (0x000357a6) cell_cam4_burst_pane_g

0x2c37,	// (0x00028976) bg_cl_pane_ParamLimits

0x2c37,	// (0x00028976) bg_cl_pane

0x8ea1,	// (0x0002ebe0) cl_header_pane_ParamLimits

0x8ea1,	// (0x0002ebe0) cl_header_pane

0x8eb5,	// (0x0002ebf4) cl_listscroll_pane_ParamLimits

0x8eb5,	// (0x0002ebf4) cl_listscroll_pane

0xd638,	// (0x00033377) bg_cl_pane_g1

0xd640,	// (0x0003337f) bg_cl_pane_g2

0xd648,	// (0x00033387) bg_cl_pane_g3

0xd650,	// (0x0003338f) bg_cl_pane_g4

0xd658,	// (0x00033397) bg_cl_pane_g5

0xd660,	// (0x0003339f) bg_cl_pane_g6

0xd668,	// (0x000333a7) bg_cl_pane_g7

0xd670,	// (0x000333af) bg_cl_pane_g8

0xd678,	// (0x000333b7) bg_cl_pane_g9

0x0008,

0xfaa2,	// (0x000357e1) bg_cl_pane_g

0x8ec5,	// (0x0002ec04) aid_height_cl_leading_ParamLimits

0x8ec5,	// (0x0002ec04) aid_height_cl_leading

0x8ed1,	// (0x0002ec10) aid_height_cl_text_ParamLimits

0x8ed1,	// (0x0002ec10) aid_height_cl_text

0x2229,	// (0x00027f68) bg_cl_header_pane_ParamLimits

0x2229,	// (0x00027f68) bg_cl_header_pane

0x8ef0,	// (0x0002ec2f) cl_header_pane_g1_ParamLimits

0x8ef0,	// (0x0002ec2f) cl_header_pane_g1

0x8f06,	// (0x0002ec45) cl_header_pane_t1_ParamLimits

0x8f06,	// (0x0002ec45) cl_header_pane_t1

0xd680,	// (0x000333bf) cl_list_pane

0xd1bc,	// (0x00032efb) hc_scroll_pane_cp01

0x3c89,	// (0x000299c8) bg_cl_header_pane_g1

0xd0a2,	// (0x00032de1) bg_cl_header_pane_g2

0x3ca9,	// (0x000299e8) bg_cl_header_pane_g3

0xd0b2,	// (0x00032df1) bg_cl_header_pane_g4

0xd0aa,	// (0x00032de9) bg_cl_header_pane_g5

0xd32b,	// (0x0003306a) bg_cl_header_pane_g6

0xd0ca,	// (0x00032e09) bg_cl_header_pane_g7

0xd0d2,	// (0x00032e11) bg_cl_header_pane_g8

0xd0c2,	// (0x00032e01) bg_cl_header_pane_g9

0x0008,

0xfab5,	// (0x000357f4) bg_cl_header_pane_g

0x8f1f,	// (0x0002ec5e) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x8f1f,	// (0x0002ec5e) hc_cl_list_double_graphic_heading_pane

0x8f33,	// (0x0002ec72) hc_cl_list_single_graphic_pane_ParamLimits

0x8f33,	// (0x0002ec72) hc_cl_list_single_graphic_pane

0x8f4d,	// (0x0002ec8c) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x8f4d,	// (0x0002ec8c) hc_cl_list_single_graphic_pane_g1

0x8f59,	// (0x0002ec98) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x8f59,	// (0x0002ec98) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfac8,	// (0x00035807) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfac8,	// (0x00035807) hc_cl_list_single_graphic_pane_g

0x8f6d,	// (0x0002ecac) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x8f6d,	// (0x0002ecac) hc_cl_list_single_graphic_pane_t1

0x8f4d,	// (0x0002ec8c) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x8f4d,	// (0x0002ec8c) hc_cl_list_double_graphic_heading_pane_g1

0x8f82,	// (0x0002ecc1) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x8f82,	// (0x0002ecc1) hc_cl_list_double_graphic_heading_pane_g2

0x8f96,	// (0x0002ecd5) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x8f96,	// (0x0002ecd5) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfacd,	// (0x0003580c) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfacd,	// (0x0003580c) hc_cl_list_double_graphic_heading_pane_g

0x8faa,	// (0x0002ece9) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x8faa,	// (0x0002ece9) hc_cl_list_double_graphic_heading_pane_t1

0x8fbf,	// (0x0002ecfe) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x8fbf,	// (0x0002ecfe) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfad4,	// (0x00035813) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfad4,	// (0x00035813) hc_cl_list_double_graphic_heading_pane_t

0xd691,	// (0x000333d0) vid4_progress_pane_g1

0xd6a1,	// (0x000333e0) vid4_progress_pane_g2

0x489c,	// (0x0002a5db) vid4_progress_pane_g3

0xcf9f,	// (0x00032cde) vid4_progress_pane_g4

0x0004,

0xfad9,	// (0x00035818) vid4_progress_pane_g

0xd6b1,	// (0x000333f0) vid4_progress_pane_t1

0xd6c6,	// (0x00033405) vid4_progress_pane_t2

0x0002,

0xfae4,	// (0x00035823) vid4_progress_pane_t

0xd6f1,	// (0x00033430) wait_bar_pane_cp07

0xc0a3,	// (0x00031de2) blid_firmament_pane_ParamLimits

0xc0e6,	// (0x00031e25) popup_blid_sat_info2_window_g1

0xc10a,	// (0x00031e49) popup_blid_sat_info2_window_t3

0xc118,	// (0x00031e57) popup_blid_sat_info2_window_t4

0xc126,	// (0x00031e65) popup_blid_sat_info2_window_t5

0xc134,	// (0x00031e73) popup_blid_sat_info2_window_t6

0xc144,	// (0x00031e83) popup_blid_sat_info2_window_t7

0xc152,	// (0x00031e91) popup_blid_sat_info2_window_t8

0xc160,	// (0x00031e9f) popup_blid_sat_info2_window_t9

0xc16e,	// (0x00031ead) popup_blid_sat_info2_window_t10

0xc232,	// (0x00031f71) aid_firma_cardinal_ParamLimits

0xc246,	// (0x00031f85) blid_firmament_pane_t1_ParamLimits

0xc25d,	// (0x00031f9c) blid_firmament_pane_t2_ParamLimits

0xc274,	// (0x00031fb3) blid_firmament_pane_t3_ParamLimits

0xc28b,	// (0x00031fca) blid_firmament_pane_t4_ParamLimits

0xf6f7,	// (0x00035436) blid_firmament_pane_t_ParamLimits

0xc2a2,	// (0x00031fe1) blid_sat_info_pane_ParamLimits

0x2229,	// (0x00027f68) main_cam_set_pane_ParamLimits

0x7cff,	// (0x0002da3e) aid_size_cell_colour_35_ParamLimits

0x7d1f,	// (0x0002da5e) aid_size_cell_colour_112_ParamLimits

0x7d3f,	// (0x0002da7e) aid_size_cell_effect_ParamLimits

0xbdaa,	// (0x00031ae9) bg_tb_trans_pane_cp02_ParamLimits

0x4816,	// (0x0002a555) heading_imed_pane_ParamLimits

0x7d5f,	// (0x0002da9e) listscroll_imed_pane_ParamLimits

0xb3d4,	// (0x00031113) popup_call2_audio_first_window_g5_ParamLimits

0xb3d4,	// (0x00031113) popup_call2_audio_first_window_g5

0x165e,	// (0x0002739d) aid_size_touch_image3_arrow_left_ParamLimits

0x165e,	// (0x0002739d) aid_size_touch_image3_arrow_left

0x168a,	// (0x000273c9) aid_size_touch_image3_arrow_right_ParamLimits

0x168a,	// (0x000273c9) aid_size_touch_image3_arrow_right

0xd6dc,	// (0x0003341b) vid4_progress_pane_t3

0x8082,	// (0x0002ddc1) main_hwr_training_symbol_option_pane_ParamLimits

0x8082,	// (0x0002ddc1) main_hwr_training_symbol_option_pane

0xcac0,	// (0x000327ff) popup_hwr_training_preview_window_ParamLimits

0xcac0,	// (0x000327ff) popup_hwr_training_preview_window

0x1505,	// (0x00027244) hwr_training_navi_pane_g5_ParamLimits

0x1505,	// (0x00027244) hwr_training_navi_pane_g5

0xd082,	// (0x00032dc1) popup_char_count_window

0xd08a,	// (0x00032dc9) bg_popup_sub_pane_cp20_ParamLimits

0x1ebb,	// (0x00027bfa) list_vitu2_match_list_pane_ParamLimits

0x1eca,	// (0x00027c09) vitu2_page_scroll_pane_ParamLimits

0x1eca,	// (0x00027c09) vitu2_page_scroll_pane

0xd75b,	// (0x0003349a) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd75b,	// (0x0003349a) list_single_hwr_training_symbol_option_pane

0xd76e,	// (0x000334ad) list_single_hwr_training_symbol_option_pane_g1

0xd776,	// (0x000334b5) list_single_hwr_training_symbol_option_pane_t1

0xd784,	// (0x000334c3) bg_button_pane_cp023

0xd78d,	// (0x000334cc) bg_button_pane_cp024

0x8fd4,	// (0x0002ed13) vitu2_page_scroll_pane_g1

0x8fdc,	// (0x0002ed1b) vitu2_page_scroll_pane_g2

0x0001,

0xfaeb,	// (0x0003582a) vitu2_page_scroll_pane_g

0x8fe4,	// (0x0002ed23) vitu2_page_scroll_pane_t1

0xbfbf,	// (0x00031cfe) popup_char_count_window_g1

0xd7c0,	// (0x000334ff) popup_char_count_window_g2

0xd7c9,	// (0x00033508) popup_char_count_window_g3

0x0002,

0xfaf0,	// (0x0003582f) popup_char_count_window_g

0xd7d2,	// (0x00033511) popup_char_count_window_t1

0x1fb7,	// (0x00027cf6) main_vded2_pane

0xc7bf,	// (0x000324fe) aid_size_cell_imed_line

0xc7c9,	// (0x00032508) grid_imed_line_width_pane

0x1a9e,	// (0x000277dd) vid4_indicators_pane_g4

0xd7e0,	// (0x0003351f) cell_imed_line_width_pane_ParamLimits

0xd7e0,	// (0x0003351f) cell_imed_line_width_pane

0xd7f4,	// (0x00033533) cell_imed_line_width_pane_g1

0xc051,	// (0x00031d90) cell_imed_line_width_pane_g2

0x0001,

0xfaf7,	// (0x00035836) cell_imed_line_width_pane_g

0x8ff3,	// (0x0002ed32) main_vded2_pane_g1_ParamLimits

0x8ff3,	// (0x0002ed32) main_vded2_pane_g1

0x9009,	// (0x0002ed48) main_vded2_pane_g2_ParamLimits

0x9009,	// (0x0002ed48) main_vded2_pane_g2

0x0001,

0xfafc,	// (0x0003583b) main_vded2_pane_g_ParamLimits

0xfafc,	// (0x0003583b) main_vded2_pane_g

0x901b,	// (0x0002ed5a) vded2_slider_pane_ParamLimits

0x901b,	// (0x0002ed5a) vded2_slider_pane

0x902b,	// (0x0002ed6a) aid_size_touch_vded2_end

0x9035,	// (0x0002ed74) aid_size_touch_vded2_playhead

0xd7fd,	// (0x0003353c) aid_size_touch_vded2_start

0xd805,	// (0x00033544) vded2_slider_bg_pane

0xd80e,	// (0x0003354d) vded2_slider_pane_g1

0xd817,	// (0x00033556) vded2_slider_pane_g2

0x903f,	// (0x0002ed7e) vded2_slider_pane_g3

0x0002,

0xfb01,	// (0x00035840) vded2_slider_pane_g

0xd81f,	// (0x0003355e) vded2_slider_bg_pane_g1

0xd828,	// (0x00033567) vded2_slider_bg_pane_g2

0xd831,	// (0x00033570) vded2_slider_bg_pane_g3

0x0002,

0xfb08,	// (0x00035847) vded2_slider_bg_pane_g

0x58d8,	// (0x0002b617) aid_postcard_touch_down_pane_ParamLimits

0x58d8,	// (0x0002b617) aid_postcard_touch_down_pane

0x58ee,	// (0x0002b62d) aid_postcard_touch_up_pane_ParamLimits

0x58ee,	// (0x0002b62d) aid_postcard_touch_up_pane

0x1fb7,	// (0x00027cf6) main_blid2_pane

0xbdb8,	// (0x00031af7) popup_blid2_search_window

0x1fb7,	// (0x00027cf6) blid2_gps_pane

0x1fb7,	// (0x00027cf6) blid2_navig_pane

0x1fb7,	// (0x00027cf6) blid2_search_pane

0x1fb7,	// (0x00027cf6) blid2_tripm_pane

0x904a,	// (0x0002ed89) blid2_search_pane_g1_ParamLimits

0x904a,	// (0x0002ed89) blid2_search_pane_g1

0x9062,	// (0x0002eda1) blid2_search_pane_t1_ParamLimits

0x9062,	// (0x0002eda1) blid2_search_pane_t1

0x9074,	// (0x0002edb3) aid_size_cell_blid2_gps_ParamLimits

0x9074,	// (0x0002edb3) aid_size_cell_blid2_gps

0x908c,	// (0x0002edcb) blid2_gps_pane_g1_ParamLimits

0x908c,	// (0x0002edcb) blid2_gps_pane_g1

0x90a0,	// (0x0002eddf) grid_blid2_satellite_pane_ParamLimits

0x90a0,	// (0x0002eddf) grid_blid2_satellite_pane

0x90ba,	// (0x0002edf9) blid2_navig_pane_g1_ParamLimits

0x90ba,	// (0x0002edf9) blid2_navig_pane_g1

0x90c6,	// (0x0002ee05) blid2_navig_pane_t1_ParamLimits

0x90c6,	// (0x0002ee05) blid2_navig_pane_t1

0x90e1,	// (0x0002ee20) blid2_navig_pane_t2_ParamLimits

0x90e1,	// (0x0002ee20) blid2_navig_pane_t2

0x0001,

0xfb0f,	// (0x0003584e) blid2_navig_pane_t_ParamLimits

0xfb0f,	// (0x0003584e) blid2_navig_pane_t

0x90fc,	// (0x0002ee3b) blid2_navig_ring_pane_ParamLimits

0x90fc,	// (0x0002ee3b) blid2_navig_ring_pane

0x9115,	// (0x0002ee54) blid2_speed_pane_ParamLimits

0x9115,	// (0x0002ee54) blid2_speed_pane

0x9121,	// (0x0002ee60) blid2_tripm_pane_g1_ParamLimits

0x9121,	// (0x0002ee60) blid2_tripm_pane_g1

0x913c,	// (0x0002ee7b) blid2_tripm_pane_g2_ParamLimits

0x913c,	// (0x0002ee7b) blid2_tripm_pane_g2

0x9150,	// (0x0002ee8f) blid2_tripm_pane_g3_ParamLimits

0x9150,	// (0x0002ee8f) blid2_tripm_pane_g3

0x9164,	// (0x0002eea3) blid2_tripm_pane_g4_ParamLimits

0x9164,	// (0x0002eea3) blid2_tripm_pane_g4

0x9178,	// (0x0002eeb7) blid2_tripm_pane_g5_ParamLimits

0x9178,	// (0x0002eeb7) blid2_tripm_pane_g5

0x0005,

0xfb14,	// (0x00035853) blid2_tripm_pane_g_ParamLimits

0xfb14,	// (0x00035853) blid2_tripm_pane_g

0x919e,	// (0x0002eedd) blid2_tripm_pane_t1_ParamLimits

0x919e,	// (0x0002eedd) blid2_tripm_pane_t1

0x91b9,	// (0x0002eef8) blid2_tripm_pane_t2_ParamLimits

0x91b9,	// (0x0002eef8) blid2_tripm_pane_t2

0x91d4,	// (0x0002ef13) blid2_tripm_pane_t3_ParamLimits

0x91d4,	// (0x0002ef13) blid2_tripm_pane_t3

0x0003,

0xfb21,	// (0x00035860) blid2_tripm_pane_t_ParamLimits

0xfb21,	// (0x00035860) blid2_tripm_pane_t

0x921b,	// (0x0002ef5a) cell_blid2_satellite_pane_ParamLimits

0x921b,	// (0x0002ef5a) cell_blid2_satellite_pane

0x9239,	// (0x0002ef78) cell_blid2_satellite_pane_g1

0xd83a,	// (0x00033579) cell_blid2_satellite_pane_t1

0xc2b2,	// (0x00031ff1) blid2_speed_pane_g1

0xd848,	// (0x00033587) blid2_speed_pane_t1

0xd856,	// (0x00033595) blid2_speed_pane_t2

0x0001,

0xfb2a,	// (0x00035869) blid2_speed_pane_t

0xc2b2,	// (0x00031ff1) blid2_navig_ring_pane_g1

0x9242,	// (0x0002ef81) blid2_navig_ring_pane_g2

0x924a,	// (0x0002ef89) blid2_navig_ring_pane_g3

0x9252,	// (0x0002ef91) blid2_navig_ring_pane_g4

0x925a,	// (0x0002ef99) blid2_navig_ring_pane_g5

0x0004,

0xfb2f,	// (0x0003586e) blid2_navig_ring_pane_g

0x1fb7,	// (0x00027cf6) bg_popup_window_pane_cp011

0xd864,	// (0x000335a3) popup_blid2_search_window_g1

0xd86c,	// (0x000335ab) popup_blid2_search_window_t1

0xd87a,	// (0x000335b9) popup_blid2_search_window_t2

0x0001,

0xfb3a,	// (0x00035879) popup_blid2_search_window_t

0x3b4b,	// (0x0002988a) main_browser_pane_g1

0x2c37,	// (0x00028976) main_browser_pane_ParamLimits

0xd08a,	// (0x00032dc9) bg_button_pane_cp011_ParamLimits

0x1e31,	// (0x00027b70) cell_vitu2_function_pane_g1_ParamLimits

0xbdaa,	// (0x00031ae9) bg_popup_sub_pane_cp22_ParamLimits

0x8b35,	// (0x0002e874) input_focus_pane_cp08_ParamLimits

0x8b4c,	// (0x0002e88b) popup_vitu2_query_button_pane_ParamLimits

0x8b4c,	// (0x0002e88b) popup_vitu2_query_button_pane

0x8b5d,	// (0x0002e89c) popup_vitu2_query_input_button_pane

0xd3a8,	// (0x000330e7) popup_vitu2_query_window_g1_ParamLimits

0x8b67,	// (0x0002e8a6) popup_vitu2_query_window_g2_ParamLimits

0xfa3b,	// (0x0003577a) popup_vitu2_query_window_g_ParamLimits

0x1fb7,	// (0x00027cf6) bg_button_pane_cp026

0x9262,	// (0x0002efa1) popup_vitu2_query_input_button_pane_g1

0x1fb7,	// (0x00027cf6) bg_button_pane_cp025

0xd888,	// (0x000335c7) popup_vitu2_query_button_pane_t1

0x71e3,	// (0x0002cf22) main_mp3_pane_t6

0x71f1,	// (0x0002cf30) popup_slider_window_cp01

0xcf86,	// (0x00032cc5) cam4_battery_pane

0xcfed,	// (0x00032d2c) cam4_battery_pane_cp02

0xd689,	// (0x000333c8) cam4_battery_pane_cp01

0xd689,	// (0x000333c8) cam4_battery_pane_cp03

0xcdf7,	// (0x00032b36) cam4_battery_pane_g1

0xc2b2,	// (0x00031ff1) cam4_battery_pane_g2

0x0001,

0xfb3f,	// (0x0003587e) cam4_battery_pane_g

0xc17c,	// (0x00031ebb) popup_blid_sat_info2_window_t11

0x4ffc,	// (0x0002ad3b) aid_size_touch_mv_arrow_left_ParamLimits

0x5025,	// (0x0002ad64) aid_size_touch_mv_arrow_right_ParamLimits

0x506d,	// (0x0002adac) navi_pane_g1_ParamLimits

0x5079,	// (0x0002adb8) navi_pane_g2_ParamLimits

0x50a7,	// (0x0002ade6) navi_pane_g3_ParamLimits

0xf409,	// (0x00035148) navi_pane_g_ParamLimits

0x5163,	// (0x0002aea2) navi_pane_mv_t1_ParamLimits

0x7d6b,	// (0x0002daaa) grid_imed_effect_pane_ParamLimits

0x36fc,	// (0x0002943b) aid_placing_vt_slider_lsc

0x370c,	// (0x0002944b) aid_placing_vt_slider_prt

0x2229,	// (0x00027f68) bg_tb_trans_pane_cp01_ParamLimits

0xc439,	// (0x00032178) popup_image_details_window_g1_ParamLimits

0xc44c,	// (0x0003218b) popup_image_details_window_g2_ParamLimits

0xc461,	// (0x000321a0) popup_image_details_window_g3_ParamLimits

0xc461,	// (0x000321a0) popup_image_details_window_g3

0xf73c,	// (0x0003547b) popup_image_details_window_g_ParamLimits

0xc475,	// (0x000321b4) popup_image_details_window_t1_ParamLimits

0xc487,	// (0x000321c6) popup_image_details_window_t2_ParamLimits

0xc4a0,	// (0x000321df) popup_image_details_window_t3_ParamLimits

0xc4b4,	// (0x000321f3) popup_image_details_window_t4_ParamLimits

0xc4cf,	// (0x0003220e) popup_image_details_window_t5_ParamLimits

0xf743,	// (0x00035482) popup_image_details_window_t_ParamLimits

0x8edd,	// (0x0002ec1c) cl_header_name_pane_ParamLimits

0x8edd,	// (0x0002ec1c) cl_header_name_pane

0x926a,	// (0x0002efa9) cl_header_name_pane_t1_ParamLimits

0x926a,	// (0x0002efa9) cl_header_name_pane_t1

0x928b,	// (0x0002efca) cl_header_name_pane_t2_ParamLimits

0x928b,	// (0x0002efca) cl_header_name_pane_t2

0x92cd,	// (0x0002f00c) cl_header_name_pane_t3_ParamLimits

0x92cd,	// (0x0002f00c) cl_header_name_pane_t3

0x0002,

0xfb44,	// (0x00035883) cl_header_name_pane_t_ParamLimits

0xfb44,	// (0x00035883) cl_header_name_pane_t

0x5134,	// (0x0002ae73) navi_pane_mv_g2_ParamLimits

0xd00e,	// (0x00032d4d) field_vitu2_entry_pane_g1_ParamLimits

0xd01a,	// (0x00032d59) field_vitu2_entry_pane_g2_ParamLimits

0xd026,	// (0x00032d65) field_vitu2_entry_pane_g3_ParamLimits

0xd026,	// (0x00032d65) field_vitu2_entry_pane_g3

0xf93a,	// (0x00035679) field_vitu2_entry_pane_g_ParamLimits

0x1cd1,	// (0x00027a10) cell_vitu2_itu_pane_g1_ParamLimits

0x1ce1,	// (0x00027a20) cell_vitu2_itu_pane_g2_ParamLimits

0x1ce1,	// (0x00027a20) cell_vitu2_itu_pane_g2

0x0001,

0xf946,	// (0x00035685) cell_vitu2_itu_pane_g_ParamLimits

0xf946,	// (0x00035685) cell_vitu2_itu_pane_g

0xd08a,	// (0x00032dc9) bg_vkb2_func_pane_cp05_ParamLimits

0xd08a,	// (0x00032dc9) bg_vkb2_func_pane_cp05

0xd08a,	// (0x00032dc9) bg_vkb2_func_pane_cp03

0xd08a,	// (0x00032dc9) bg_vkb2_func_pane_cp04

0xd08a,	// (0x00032dc9) bg_vkb2_func_pane_cp10_ParamLimits

0xd08a,	// (0x00032dc9) bg_vkb2_func_pane_cp10

0x8e7f,	// (0x0002ebbe) bg_vkb2_func_pane_cp08

0x8e65,	// (0x0002eba4) bg_vkb2_func_pane_cp06

0x8e73,	// (0x0002ebb2) bg_vkb2_func_pane_cp07

0xd796,	// (0x000334d5) bg_vkb2_func_pane_cp11_ParamLimits

0xd796,	// (0x000334d5) bg_vkb2_func_pane_cp11

0xd7ab,	// (0x000334ea) bg_vkb2_func_pane_cp12_ParamLimits

0xd7ab,	// (0x000334ea) bg_vkb2_func_pane_cp12

0x1fb7,	// (0x00027cf6) bg_vkb2_func_pane_cp09

0xd0a2,	// (0x00032de1) bg_vkb2_func_pane_g1

0x3ca9,	// (0x000299e8) bg_vkb2_func_pane_g2

0xd0aa,	// (0x00032de9) bg_vkb2_func_pane_g3

0xd0b2,	// (0x00032df1) bg_vkb2_func_pane_g4

0xd32b,	// (0x0003306a) bg_vkb2_func_pane_g5

0xd0ca,	// (0x00032e09) bg_vkb2_func_pane_g6

0xd0d2,	// (0x00032e11) bg_vkb2_func_pane_g7

0xd0c2,	// (0x00032e01) bg_vkb2_func_pane_g8

0x3c89,	// (0x000299c8) bg_vkb2_func_pane_g9

0x0008,

0xfb4b,	// (0x0003588a) bg_vkb2_func_pane_g

0x918c,	// (0x0002eecb) blid2_tripm_pane_g6_ParamLimits

0x918c,	// (0x0002eecb) blid2_tripm_pane_g6

0xcdb1,	// (0x00032af0) mp4_progress_pane_g1

0x9207,	// (0x0002ef46) blid2_tripm_values_pane_ParamLimits

0x9207,	// (0x0002ef46) blid2_tripm_values_pane

0x92fe,	// (0x0002f03d) blid2_tripm_values_pane_t1

0x930c,	// (0x0002f04b) blid2_tripm_values_pane_t2

0x931a,	// (0x0002f059) blid2_tripm_values_pane_t3

0x9328,	// (0x0002f067) blid2_tripm_values_pane_t4

0x9336,	// (0x0002f075) blid2_tripm_values_pane_t5

0x9344,	// (0x0002f083) blid2_tripm_values_pane_t6

0x9352,	// (0x0002f091) blid2_tripm_values_pane_t7

0x9360,	// (0x0002f09f) blid2_tripm_values_pane_t8

0x936e,	// (0x0002f0ad) blid2_tripm_values_pane_t9

0x0008,

0xfb5e,	// (0x0003589d) blid2_tripm_values_pane_t

0x3748,	// (0x00029487) call_video_pane_t1_ParamLimits

0x3766,	// (0x000294a5) call_video_pane_t2_ParamLimits

0xf292,	// (0x00034fd1) call_video_pane_t_ParamLimits

0x57f1,	// (0x0002b530) msg_header_pane_g1_ParamLimits

0x57ff,	// (0x0002b53e) msg_header_pane_g2_ParamLimits

0x57ff,	// (0x0002b53e) msg_header_pane_g2

0x0001,

0xf4ac,	// (0x000351eb) msg_header_pane_g_ParamLimits

0xf4ac,	// (0x000351eb) msg_header_pane_g

0x2c37,	// (0x00028976) main_clock2_pane_ParamLimits

0x7b08,	// (0x0002d847) grid_clock2_toolbar_pane_ParamLimits

0x7b08,	// (0x0002d847) grid_clock2_toolbar_pane

0x7b08,	// (0x0002d847) listscroll_clock2_pane_ParamLimits

0x7b08,	// (0x0002d847) listscroll_clock2_pane

0x7be5,	// (0x0002d924) main_clock2_pane_t3_ParamLimits

0x7be5,	// (0x0002d924) main_clock2_pane_t3

0x7c00,	// (0x0002d93f) main_clock2_pane_t4_ParamLimits

0x7c00,	// (0x0002d93f) main_clock2_pane_t4

0xd896,	// (0x000335d5) cell_clock2_toolbar_pane

0xd89e,	// (0x000335dd) cell_clock2_toolbar_pane_cp01

0xd89e,	// (0x000335dd) cell_clock2_toolbar_pane_cp02

0xd8a6,	// (0x000335e5) cell_clock2_toolbar_pane_cp03

0xd8ae,	// (0x000335ed) list_clock2_pane

0x4d9c,	// (0x0002aadb) scroll_pane_cp10

0xd8b6,	// (0x000335f5) list_single_clock2_pane_ParamLimits

0xd8b6,	// (0x000335f5) list_single_clock2_pane

0x51d5,	// (0x0002af14) list_highlight_pane_cp08

0xd8c3,	// (0x00033602) list_single_clock2_pane_t1

0xd8d1,	// (0x00033610) list_single_clock2_pane_t2

0x0001,

0xfb71,	// (0x000358b0) list_single_clock2_pane_t

0x1fb7,	// (0x00027cf6) bg_button_pane_cp10

0xd8df,	// (0x0003361e) cell_clock2_toolbar_pane_g1

0x0f7a,	// (0x00026cb9) aid_main_viewer_pane_g1_ParamLimits

0x0f7a,	// (0x00026cb9) aid_main_viewer_pane_g1

0x0f88,	// (0x00026cc7) aid_main_viewer_pane_g2_ParamLimits

0x0f88,	// (0x00026cc7) aid_main_viewer_pane_g2

0x588e,	// (0x0002b5cd) aid_main_viewer_pane_g3_ParamLimits

0x588e,	// (0x0002b5cd) aid_main_viewer_pane_g3

0x589d,	// (0x0002b5dc) aid_main_viewer_pane_g4_ParamLimits

0x589d,	// (0x0002b5dc) aid_main_viewer_pane_g4

0x0003,

0xf4bd,	// (0x000351fc) aid_main_viewer_pane_g_ParamLimits

0xf4bd,	// (0x000351fc) aid_main_viewer_pane_g

0x68e5,	// (0x0002c624) main_calc_pane_ParamLimits

0x68f9,	// (0x0002c638) main_dialer2_pane_ParamLimits

0x1fb7,	// (0x00027cf6) main_cam6_pane

0x1fb7,	// (0x00027cf6) main_vid6_pane

0x7b14,	// (0x0002d853) listscroll_gen_pane_cp06_ParamLimits

0x7b14,	// (0x0002d853) listscroll_gen_pane_cp06

0x7c1b,	// (0x0002d95a) main_clock2_pane_t5_ParamLimits

0x7c1b,	// (0x0002d95a) main_clock2_pane_t5

0x7c78,	// (0x0002d9b7) aid_call2_pane_cp10_ParamLimits

0x7c8a,	// (0x0002d9c9) aid_call_pane_cp10_ParamLimits

0x4f8b,	// (0x0002acca) popup_clock_analogue_window_cp10_g1_ParamLimits

0x4f8b,	// (0x0002acca) popup_clock_analogue_window_cp10_g2_ParamLimits

0x7c9c,	// (0x0002d9db) popup_clock_analogue_window_cp10_g3_ParamLimits

0x7c9c,	// (0x0002d9db) popup_clock_analogue_window_cp10_g4_ParamLimits

0x4f8b,	// (0x0002acca) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7f3,	// (0x00035532) popup_clock_analogue_window_cp10_g_ParamLimits

0x7cae,	// (0x0002d9ed) popup_clock_analogue_window_cp10_t1_ParamLimits

0x816a,	// (0x0002dea9) cell_dialer2_keypad_pane_g2_ParamLimits

0x816a,	// (0x0002dea9) cell_dialer2_keypad_pane_g2

0x0001,

0xf8d9,	// (0x00035618) cell_dialer2_keypad_pane_g_ParamLimits

0xf8d9,	// (0x00035618) cell_dialer2_keypad_pane_g

0x8186,	// (0x0002dec5) cell_dialer2_keypad_pane_t1

0x862a,	// (0x0002e369) main_cset_text2_pane_ParamLimits

0x862a,	// (0x0002e369) main_cset_text2_pane

0xd590,	// (0x000332cf) area_vitu2_query_pane_g1_ParamLimits

0x8e04,	// (0x0002eb43) area_vitu2_query_pane_g2_ParamLimits

0xfa8e,	// (0x000357cd) area_vitu2_query_pane_g_ParamLimits

0xd614,	// (0x00033353) area_vitu2_query_pane_t7_ParamLimits

0xd614,	// (0x00033353) area_vitu2_query_pane_t7

0x8e65,	// (0x0002eba4) bg_button_pane_cp018_ParamLimits

0x8e73,	// (0x0002ebb2) bg_button_pane_cp021_ParamLimits

0x8e7f,	// (0x0002ebbe) bg_button_pane_cp022_ParamLimits

0x8e7f,	// (0x0002ebbe) bg_vkb2_func_pane_cp08_ParamLimits

0x8e65,	// (0x0002eba4) bg_vkb2_func_pane_cp06_ParamLimits

0x8e73,	// (0x0002ebb2) bg_vkb2_func_pane_cp07_ParamLimits

0x8e90,	// (0x0002ebcf) input_focus_pane_cp09_ParamLimits

0xd8e7,	// (0x00033626) cam6_autofocus_pane_ParamLimits

0xd8e7,	// (0x00033626) cam6_autofocus_pane

0x1f50,	// (0x00027c8f) cam6_image_uncrop_pane_ParamLimits

0x1f50,	// (0x00027c8f) cam6_image_uncrop_pane

0x1f5f,	// (0x00027c9e) cam6_indi_pane_ParamLimits

0x1f5f,	// (0x00027c9e) cam6_indi_pane

0x1f75,	// (0x00027cb4) cam6_mode_pane_ParamLimits

0x1f75,	// (0x00027cb4) cam6_mode_pane

0x1f87,	// (0x00027cc6) cam6_timer_pane_ParamLimits

0x1f87,	// (0x00027cc6) cam6_timer_pane

0x1f93,	// (0x00027cd2) cam6_zoom_pane_ParamLimits

0x1f93,	// (0x00027cd2) cam6_zoom_pane

0x937c,	// (0x0002f0bb) cam6_mode_pane_g1_ParamLimits

0x937c,	// (0x0002f0bb) cam6_mode_pane_g1

0x938c,	// (0x0002f0cb) cam6_mode_pane_g2_ParamLimits

0x938c,	// (0x0002f0cb) cam6_mode_pane_g2

0x939c,	// (0x0002f0db) cam6_mode_pane_g3_ParamLimits

0x939c,	// (0x0002f0db) cam6_mode_pane_g3

0x93ac,	// (0x0002f0eb) cam6_mode_pane_g4_ParamLimits

0x93ac,	// (0x0002f0eb) cam6_mode_pane_g4

0x0003,

0xfb76,	// (0x000358b5) cam6_mode_pane_g_ParamLimits

0xfb76,	// (0x000358b5) cam6_mode_pane_g

0xd8f5,	// (0x00033634) bg_tb_trans_pane_cp08_ParamLimits

0xd8f5,	// (0x00033634) bg_tb_trans_pane_cp08

0xd903,	// (0x00033642) cam6_battery_pane_ParamLimits

0xd903,	// (0x00033642) cam6_battery_pane

0xd919,	// (0x00033658) cam6_indi_pane_g1_ParamLimits

0xd919,	// (0x00033658) cam6_indi_pane_g1

0xd92b,	// (0x0003366a) cam6_indi_pane_g2_ParamLimits

0xd92b,	// (0x0003366a) cam6_indi_pane_g2

0xd93d,	// (0x0003367c) cam6_indi_pane_g3_ParamLimits

0xd93d,	// (0x0003367c) cam6_indi_pane_g3

0x0002,

0xfb7f,	// (0x000358be) cam6_indi_pane_g_ParamLimits

0xfb7f,	// (0x000358be) cam6_indi_pane_g

0xd94f,	// (0x0003368e) cam6_indi_pane_t1_ParamLimits

0xd94f,	// (0x0003368e) cam6_indi_pane_t1

0x93bc,	// (0x0002f0fb) cam6_autofocus_pane_g1

0x93c4,	// (0x0002f103) cam6_autofocus_pane_g2

0x93cc,	// (0x0002f10b) cam6_autofocus_pane_g3

0x93d4,	// (0x0002f113) cam6_autofocus_pane_g4

0x0003,

0xfb86,	// (0x000358c5) cam6_autofocus_pane_g

0xd975,	// (0x000336b4) cam6_timer_pane_g1

0xd97d,	// (0x000336bc) cam6_timer_pane_t1

0xd98b,	// (0x000336ca) cam6_zoom_cont_pane

0xd993,	// (0x000336d2) cam6_zoom_pane_g1

0xd99b,	// (0x000336da) cam6_zoom_pane_g2

0x93dc,	// (0x0002f11b) cam6_zoom_pane_g3

0x0002,

0xfb8f,	// (0x000358ce) cam6_zoom_pane_g

0xc2b2,	// (0x00031ff1) cam6_battery_pane_g1

0xc2b2,	// (0x00031ff1) cam6_battery_pane_g2

0x0001,

0xf700,	// (0x0003543f) cam6_battery_pane_g

0xd9a3,	// (0x000336e2) cam6_zoom_cont_pane_g1

0xd9ac,	// (0x000336eb) cam6_zoom_cont_pane_g2

0xd9b5,	// (0x000336f4) cam6_zoom_cont_pane_g3

0x0002,

0xfb96,	// (0x000358d5) cam6_zoom_cont_pane_g

0x93f9,	// (0x0002f138) cam6_mode_pane_cp_ParamLimits

0x93f9,	// (0x0002f138) cam6_mode_pane_cp

0x940b,	// (0x0002f14a) cam6_zoom_pane_cp_ParamLimits

0x940b,	// (0x0002f14a) cam6_zoom_pane_cp

0x9417,	// (0x0002f156) vid6_image_uncrop_cif_pane_ParamLimits

0x9417,	// (0x0002f156) vid6_image_uncrop_cif_pane

0x9427,	// (0x0002f166) vid6_image_uncrop_nhd_pane_ParamLimits

0x9427,	// (0x0002f166) vid6_image_uncrop_nhd_pane

0x9436,	// (0x0002f175) vid6_image_uncrop_vga_pane_ParamLimits

0x9436,	// (0x0002f175) vid6_image_uncrop_vga_pane

0x9445,	// (0x0002f184) vid6_image_uncrop_wvga_pane_ParamLimits

0x9445,	// (0x0002f184) vid6_image_uncrop_wvga_pane

0x9454,	// (0x0002f193) vid6_indi_pane_ParamLimits

0x9454,	// (0x0002f193) vid6_indi_pane

0xd8f5,	// (0x00033634) bg_tb_trans_pane_cp09_ParamLimits

0xd8f5,	// (0x00033634) bg_tb_trans_pane_cp09

0xd9cd,	// (0x0003370c) cam6_battery_pane_cp_ParamLimits

0xd9cd,	// (0x0003370c) cam6_battery_pane_cp

0xd9d9,	// (0x00033718) vid6_indi_pane_g1_ParamLimits

0xd9d9,	// (0x00033718) vid6_indi_pane_g1

0xd9eb,	// (0x0003372a) vid6_indi_pane_g2_ParamLimits

0xd9eb,	// (0x0003372a) vid6_indi_pane_g2

0xd9fd,	// (0x0003373c) vid6_indi_pane_g3_ParamLimits

0xd9fd,	// (0x0003373c) vid6_indi_pane_g3

0xda12,	// (0x00033751) vid6_indi_pane_g4_ParamLimits

0xda12,	// (0x00033751) vid6_indi_pane_g4

0xda27,	// (0x00033766) vid6_indi_pane_g5_ParamLimits

0xda27,	// (0x00033766) vid6_indi_pane_g5

0x0004,

0xfb9d,	// (0x000358dc) vid6_indi_pane_g_ParamLimits

0xfb9d,	// (0x000358dc) vid6_indi_pane_g

0xda41,	// (0x00033780) vid6_indi_pane_t1_ParamLimits

0xda41,	// (0x00033780) vid6_indi_pane_t1

0xda57,	// (0x00033796) vid6_indi_pane_t2_ParamLimits

0xda57,	// (0x00033796) vid6_indi_pane_t2

0xda7f,	// (0x000337be) vid6_indi_pane_t3_ParamLimits

0xda7f,	// (0x000337be) vid6_indi_pane_t3

0xdaa7,	// (0x000337e6) vid6_indi_pane_t4_ParamLimits

0xdaa7,	// (0x000337e6) vid6_indi_pane_t4

0x0003,

0xfba8,	// (0x000358e7) vid6_indi_pane_t_ParamLimits

0xfba8,	// (0x000358e7) vid6_indi_pane_t

0xdacb,	// (0x0003380a) wait_bar_pane_cp08

0x946c,	// (0x0002f1ab) main_cset_text2_pane_t1_ParamLimits

0x946c,	// (0x0002f1ab) main_cset_text2_pane_t1

0x93e4,	// (0x0002f123) listscroll_gen_pane_cp06_t1_ParamLimits

0x93e4,	// (0x0002f123) listscroll_gen_pane_cp06_t1

0x1fb7,	// (0x00027cf6) main_cam6_set_pane

0xcf78,	// (0x00032cb7) bg_tb_trans_pane_cp06_ParamLimits

0xcf8e,	// (0x00032ccd) cam4_indicators_pane_g1_ParamLimits

0xcf9f,	// (0x00032cde) cam4_indicators_pane_g2_ParamLimits

0xf916,	// (0x00035655) cam4_indicators_pane_g_ParamLimits

0xcfbd,	// (0x00032cfc) cam4_indicators_pane_t1_ParamLimits

0xcfdf,	// (0x00032d1e) bg_tb_trans_pane_cp07_ParamLimits

0x1a77,	// (0x000277b6) vid4_indicators_pane_g1_ParamLimits

0x1a84,	// (0x000277c3) vid4_indicators_pane_g2_ParamLimits

0x1a91,	// (0x000277d0) vid4_indicators_pane_g3_ParamLimits

0x1a9e,	// (0x000277dd) vid4_indicators_pane_g4_ParamLimits

0xf928,	// (0x00035667) vid4_indicators_pane_g_ParamLimits

0x1ab6,	// (0x000277f5) vid4_indicators_pane_t1_ParamLimits

0xd691,	// (0x000333d0) vid4_progress_pane_g1_ParamLimits

0xd6a1,	// (0x000333e0) vid4_progress_pane_g2_ParamLimits

0x489c,	// (0x0002a5db) vid4_progress_pane_g3_ParamLimits

0xcf9f,	// (0x00032cde) vid4_progress_pane_g4_ParamLimits

0xfad9,	// (0x00035818) vid4_progress_pane_g_ParamLimits

0xd6b1,	// (0x000333f0) vid4_progress_pane_t1_ParamLimits

0xd6c6,	// (0x00033405) vid4_progress_pane_t2_ParamLimits

0xd6dc,	// (0x0003341b) vid4_progress_pane_t3_ParamLimits

0xfae4,	// (0x00035823) vid4_progress_pane_t_ParamLimits

0xd6f1,	// (0x00033430) wait_bar_pane_cp07_ParamLimits

0x948c,	// (0x0002f1cb) main_cam6_set_pane_g2_ParamLimits

0x948c,	// (0x0002f1cb) main_cam6_set_pane_g2

0x94b0,	// (0x0002f1ef) main_cset6_listscroll_pane_ParamLimits

0x94b0,	// (0x0002f1ef) main_cset6_listscroll_pane

0x94cc,	// (0x0002f20b) main_cset6_slider_pane_ParamLimits

0x94cc,	// (0x0002f20b) main_cset6_slider_pane

0x94e2,	// (0x0002f221) main_cset6_text2_pane_ParamLimits

0x94e2,	// (0x0002f221) main_cset6_text2_pane

0xdada,	// (0x00033819) main_cset6_text_pane

0xdae2,	// (0x00033821) main_cset_list_pane_copy1_ParamLimits

0xdae2,	// (0x00033821) main_cset_list_pane_copy1

0xdaf2,	// (0x00033831) scroll_pane_cp028_copy1

0x94f0,	// (0x0002f22f) cset_list_set_pane_copy1

0x9503,	// (0x0002f242) aid_position_infowindow_above_copy1

0x950b,	// (0x0002f24a) aid_position_infowindow_below_copy1

0xdafb,	// (0x0003383a) cset_list_set_pane_g1_copy1

0xdb03,	// (0x00033842) cset_list_set_pane_g3_copy1_ParamLimits

0xdb03,	// (0x00033842) cset_list_set_pane_g3_copy1

0xdb12,	// (0x00033851) cset_list_set_pane_t1_copy1_ParamLimits

0xdb12,	// (0x00033851) cset_list_set_pane_t1_copy1

0x2229,	// (0x00027f68) list_highlight_pane_cp021_copy1_ParamLimits

0x2229,	// (0x00027f68) list_highlight_pane_cp021_copy1

0xdb27,	// (0x00033866) cset6_slider_pane_ParamLimits

0xdb27,	// (0x00033866) cset6_slider_pane

0xdb53,	// (0x00033892) main_cset6_slider_pane_g1_ParamLimits

0xdb53,	// (0x00033892) main_cset6_slider_pane_g1

0x9513,	// (0x0002f252) main_cset6_slider_pane_g2_ParamLimits

0x9513,	// (0x0002f252) main_cset6_slider_pane_g2

0xd1d1,	// (0x00032f10) main_cset6_slider_pane_g3_ParamLimits

0xd1d1,	// (0x00032f10) main_cset6_slider_pane_g3

0x86ef,	// (0x0002e42e) main_cset6_slider_pane_g4_ParamLimits

0x86ef,	// (0x0002e42e) main_cset6_slider_pane_g4

0x8737,	// (0x0002e476) main_cset6_slider_pane_g5_ParamLimits

0x8737,	// (0x0002e476) main_cset6_slider_pane_g5

0xd1d1,	// (0x00032f10) main_cset6_slider_pane_g7_ParamLimits

0xd1d1,	// (0x00032f10) main_cset6_slider_pane_g7

0xd1dd,	// (0x00032f1c) main_cset6_slider_pane_g8_ParamLimits

0xd1dd,	// (0x00032f1c) main_cset6_slider_pane_g8

0x86d7,	// (0x0002e416) main_cset6_slider_pane_g9_ParamLimits

0x86d7,	// (0x0002e416) main_cset6_slider_pane_g9

0x86e3,	// (0x0002e422) main_cset6_slider_pane_g10_ParamLimits

0x86e3,	// (0x0002e422) main_cset6_slider_pane_g10

0x86ef,	// (0x0002e42e) main_cset6_slider_pane_g11_ParamLimits

0x86ef,	// (0x0002e42e) main_cset6_slider_pane_g11

0x86fb,	// (0x0002e43a) main_cset6_slider_pane_g12_ParamLimits

0x86fb,	// (0x0002e43a) main_cset6_slider_pane_g12

0x8707,	// (0x0002e446) main_cset6_slider_pane_g13_ParamLimits

0x8707,	// (0x0002e446) main_cset6_slider_pane_g13

0x8713,	// (0x0002e452) main_cset6_slider_pane_g14_ParamLimits

0x8713,	// (0x0002e452) main_cset6_slider_pane_g14

0x953b,	// (0x0002f27a) main_cset6_slider_pane_g15_ParamLimits

0x953b,	// (0x0002f27a) main_cset6_slider_pane_g15

0x8737,	// (0x0002e476) main_cset6_slider_pane_g16_ParamLimits

0x8737,	// (0x0002e476) main_cset6_slider_pane_g16

0x8743,	// (0x0002e482) main_cset6_slider_pane_g17_ParamLimits

0x8743,	// (0x0002e482) main_cset6_slider_pane_g17

0x0011,

0xfbb1,	// (0x000358f0) main_cset6_slider_pane_g_ParamLimits

0xfbb1,	// (0x000358f0) main_cset6_slider_pane_g

0xdb7b,	// (0x000338ba) main_cset6_slider_pane_t1_ParamLimits

0xdb7b,	// (0x000338ba) main_cset6_slider_pane_t1

0x9553,	// (0x0002f292) main_cset6_slider_pane_t2_ParamLimits

0x9553,	// (0x0002f292) main_cset6_slider_pane_t2

0x957e,	// (0x0002f2bd) main_cset6_slider_pane_t3_ParamLimits

0x957e,	// (0x0002f2bd) main_cset6_slider_pane_t3

0x95a9,	// (0x0002f2e8) main_cset6_slider_pane_t4_ParamLimits

0x95a9,	// (0x0002f2e8) main_cset6_slider_pane_t4

0x95d4,	// (0x0002f313) main_cset6_slider_pane_t5_ParamLimits

0x95d4,	// (0x0002f313) main_cset6_slider_pane_t5

0xdbbc,	// (0x000338fb) main_cset6_slider_pane_t7_ParamLimits

0xdbbc,	// (0x000338fb) main_cset6_slider_pane_t7

0x95ff,	// (0x0002f33e) main_cset6_slider_pane_t8_ParamLimits

0x95ff,	// (0x0002f33e) main_cset6_slider_pane_t8

0x9623,	// (0x0002f362) main_cset6_slider_pane_t9_ParamLimits

0x9623,	// (0x0002f362) main_cset6_slider_pane_t9

0x9647,	// (0x0002f386) main_cset6_slider_pane_t10_ParamLimits

0x9647,	// (0x0002f386) main_cset6_slider_pane_t10

0x966b,	// (0x0002f3aa) main_cset6_slider_pane_t11_ParamLimits

0x966b,	// (0x0002f3aa) main_cset6_slider_pane_t11

0xdbf2,	// (0x00033931) main_cset6_slider_pane_t14_ParamLimits

0xdbf2,	// (0x00033931) main_cset6_slider_pane_t14

0xdc2b,	// (0x0003396a) main_cset6_slider_pane_t15_ParamLimits

0xdc2b,	// (0x0003396a) main_cset6_slider_pane_t15

0x000b,

0xfbd6,	// (0x00035915) main_cset6_slider_pane_t_ParamLimits

0xfbd6,	// (0x00035915) main_cset6_slider_pane_t

0xdc64,	// (0x000339a3) cset_slider_pane_g1_copy1

0xdc6d,	// (0x000339ac) cset_slider_pane_g2_copy1

0xdc76,	// (0x000339b5) cset_slider_pane_g3_copy1

0x1fb7,	// (0x00027cf6) bg_popup_sub_pane_cp011_copy1

0xd3b4,	// (0x000330f3) main_cset_text_pane_g1_copy1

0xd3bc,	// (0x000330fb) main_cset_text_pane_t1_copy1

0xd3ca,	// (0x00033109) main_cset_text_pane_t2_copy1

0xd3d8,	// (0x00033117) main_cset_text_pane_t3_copy1

0xd3e6,	// (0x00033125) main_cset_text_pane_t4_copy1

0xd3f4,	// (0x00033133) main_cset_text_pane_t5_copy1

0xd402,	// (0x00033141) main_cset_text_pane_t6_copy1

0xd410,	// (0x0003314f) main_cset_text_pane_t7_copy1

0x946c,	// (0x0002f1ab) main_cset_text2_pane_t1_copy1

0x1fb7,	// (0x00027cf6) main_ncimui_pane

0x6b2f,	// (0x0002c86e) popup_query_ncimui_window_ParamLimits

0x6b2f,	// (0x0002c86e) popup_query_ncimui_window

0xc57e,	// (0x000322bd) field_cale_ev2_pane_g4_ParamLimits

0xc57e,	// (0x000322bd) field_cale_ev2_pane_g4

0x80f0,	// (0x0002de2f) cell_video_dialer_keypad_pane_g2_ParamLimits

0x80f0,	// (0x0002de2f) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8b4,	// (0x000355f3) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8b4,	// (0x000355f3) cell_video_dialer_keypad_pane_g

0x8108,	// (0x0002de47) cell_video_dialer_keypad_pane_t1

0x1fb7,	// (0x00027cf6) bg_popup_window_pane_cp012

0x4bfd,	// (0x0002a93c) heading_pane_cp06

0xdd6e,	// (0x00033aad) ncim_query_content_pane

0x1fb7,	// (0x00027cf6) bg_popup_heading_pane_cp01

0xdd76,	// (0x00033ab5) ncim_heading_pane_t1

0xdd84,	// (0x00033ac3) ncim_indicator_popup_pane

0xdd96,	// (0x00033ad5) ncim_query_button_pane

0xddaa,	// (0x00033ae9) ncim_query_content_pane_t1

0xddbc,	// (0x00033afb) ncim_query_content_pane_t2

0x0005,

0xfc15,	// (0x00035954) ncim_query_content_pane_t

0xddf6,	// (0x00033b35) ncim_query_list_pane

0xde08,	// (0x00033b47) ncim_query_popup_pane

0xdd84,	// (0x00033ac3) ncim_indicator_popup_pane_ParamLimits

0x9788,	// (0x0002f4c7) ncim_query_content_pane_g1_ParamLimits

0x9788,	// (0x0002f4c7) ncim_query_content_pane_g1

0xddaa,	// (0x00033ae9) ncim_query_content_pane_t1_ParamLimits

0xddbc,	// (0x00033afb) ncim_query_content_pane_t2_ParamLimits

0x9794,	// (0x0002f4d3) ncim_query_content_pane_t3_ParamLimits

0x9794,	// (0x0002f4d3) ncim_query_content_pane_t3

0x97bc,	// (0x0002f4fb) ncim_query_content_pane_t4_ParamLimits

0x97bc,	// (0x0002f4fb) ncim_query_content_pane_t4

0x97e4,	// (0x0002f523) ncim_query_content_pane_t5_ParamLimits

0x97e4,	// (0x0002f523) ncim_query_content_pane_t5

0xddce,	// (0x00033b0d) ncim_query_content_pane_t6_ParamLimits

0xddce,	// (0x00033b0d) ncim_query_content_pane_t6

0xfc15,	// (0x00035954) ncim_query_content_pane_t_ParamLimits

0xddf6,	// (0x00033b35) ncim_query_list_pane_ParamLimits

0xde08,	// (0x00033b47) ncim_query_popup_pane_ParamLimits

0xde1c,	// (0x00033b5b) wait_bar_pane_cp04

0x1fb7,	// (0x00027cf6) input_focus_pane_cp011

0xde24,	// (0x00033b63) ncim_query_popup_pane_t1

0xde32,	// (0x00033b71) ncim_list_query_list_pane_ParamLimits

0xde32,	// (0x00033b71) ncim_list_query_list_pane

0x1fb7,	// (0x00027cf6) bg_button_pane_cp027

0xde45,	// (0x00033b84) ncim_query_button_pane_g1

0x1fb7,	// (0x00027cf6) list_highlight_pane_cp012

0xde4f,	// (0x00033b8e) ncim_list_query_list_pane_g1

0xde57,	// (0x00033b96) ncim_list_query_list_pane_t1

0xcfae,	// (0x00032ced) cam4_indicators_pane_g3_ParamLimits

0xcfae,	// (0x00032ced) cam4_indicators_pane_g3

0x1aaa,	// (0x000277e9) vid4_indicators_pane_g5_ParamLimits

0x1aaa,	// (0x000277e9) vid4_indicators_pane_g5

0xcfae,	// (0x00032ced) vid4_progress_pane_g5_ParamLimits

0xcfae,	// (0x00032ced) vid4_progress_pane_g5

0x96a1,	// (0x0002f3e0) main_ncimui_pane_g1

0x96f7,	// (0x0002f436) ncimui_group_query_pane_ParamLimits

0x96f7,	// (0x0002f436) ncimui_group_query_pane

0x9733,	// (0x0002f472) ncimui_list_pane_ParamLimits

0x9733,	// (0x0002f472) ncimui_list_pane

0x9754,	// (0x0002f493) ncimui_text_pane_ParamLimits

0x9754,	// (0x0002f493) ncimui_text_pane

0x980c,	// (0x0002f54b) ncimui_text_pane_t1_ParamLimits

0x980c,	// (0x0002f54b) ncimui_text_pane_t1

0xde65,	// (0x00033ba4) ncimui_list_single_graphic_pane_ParamLimits

0xde65,	// (0x00033ba4) ncimui_list_single_graphic_pane

0x982a,	// (0x0002f569) ncimui_query_pane_ParamLimits

0x982a,	// (0x0002f569) ncimui_query_pane

0x1fb7,	// (0x00027cf6) list_highlight_pane_cp013

0xde75,	// (0x00033bb4) ncim_list_query_list_pane_t1_copy1

0xde4f,	// (0x00033b8e) ncim_list_single_graphic_pane_g1

0xde83,	// (0x00033bc2) ncim_query_button_pane_cp01

0xde8f,	// (0x00033bce) ncim_query_entry_pane_ParamLimits

0xde8f,	// (0x00033bce) ncim_query_entry_pane

0xdea2,	// (0x00033be1) ncimui_query_pane_g1

0xdeae,	// (0x00033bed) ncimui_query_pane_t1_ParamLimits

0xdeae,	// (0x00033bed) ncimui_query_pane_t1

0x2229,	// (0x00027f68) input_focus_pane_cp012

0xdec7,	// (0x00033c06) ncim_query_entry_pane_t1

0x2c37,	// (0x00028976) main_im_pane_ParamLimits

0x2229,	// (0x00027f68) main_mobtv_pane_ParamLimits

0x2229,	// (0x00027f68) main_mobtv_pane

0x86d7,	// (0x0002e416) main_cset6_slider_pane_g18_ParamLimits

0x86d7,	// (0x0002e416) main_cset6_slider_pane_g18

0x8707,	// (0x0002e446) main_cset6_slider_pane_g19_ParamLimits

0x8707,	// (0x0002e446) main_cset6_slider_pane_g19

0xded9,	// (0x00033c18) bg_main_mobtv_pane_ParamLimits

0xded9,	// (0x00033c18) bg_main_mobtv_pane

0x983d,	// (0x0002f57c) main_mobtv_info_pane

0x9846,	// (0x0002f585) main_mobtv_loading_pane_ParamLimits

0x9846,	// (0x0002f585) main_mobtv_loading_pane

0xdee7,	// (0x00033c26) main_mobtv_pg_channel_list_pane

0xdef1,	// (0x00033c30) main_mobtv_pg_hdr_pane

0x9853,	// (0x0002f592) main_mobtv_programe_curr_pane_ParamLimits

0x9853,	// (0x0002f592) main_mobtv_programe_curr_pane

0x9860,	// (0x0002f59f) main_mobtv_programe_next_pane_ParamLimits

0x9860,	// (0x0002f59f) main_mobtv_programe_next_pane

0xdefa,	// (0x00033c39) popup_mobtv_noti_window

0xc2b2,	// (0x00031ff1) main_tv_pg_hdr_pane_g1

0xdf02,	// (0x00033c41) main_tv_pg_hdr_pane_g2

0xdf0a,	// (0x00033c49) main_tv_pg_hdr_pane_g3

0xdf12,	// (0x00033c51) main_tv_pg_hdr_pane_g4

0xdf1a,	// (0x00033c59) main_tv_pg_hdr_pane_g5

0xdf24,	// (0x00033c63) main_tv_pg_hdr_pane_g6

0xdf2e,	// (0x00033c6d) main_tv_pg_hdr_pane_g7

0xdf38,	// (0x00033c77) main_tv_pg_hdr_pane_g8

0xdf42,	// (0x00033c81) main_tv_pg_hdr_pane_g9

0xdf4c,	// (0x00033c8b) main_tv_pg_hdr_pane_g10

0xdf56,	// (0x00033c95) main_tv_pg_hdr_pane_g11

0x000a,

0xfc22,	// (0x00035961) main_tv_pg_hdr_pane_g

0xdf60,	// (0x00033c9f) main_tv_pg_hdr_pane_t1

0xdf6e,	// (0x00033cad) main_tv_pg_hdr_pane_t2

0xdf7c,	// (0x00033cbb) main_tv_pg_hdr_pane_t3

0xdf8c,	// (0x00033ccb) main_tv_pg_hdr_pane_t4

0xdf9c,	// (0x00033cdb) main_tv_pg_hdr_pane_t5

0x0004,

0xfc39,	// (0x00035978) main_tv_pg_hdr_pane_t

0xdfac,	// (0x00033ceb) single_mobtv_pg_channel_pane_ParamLimits

0xdfac,	// (0x00033ceb) single_mobtv_pg_channel_pane

0xdfbe,	// (0x00033cfd) single_mobtv_pg_channel_table_pane

0xdfc7,	// (0x00033d06) single_mobtv_pg_channel_thumb_pane

0xdfd0,	// (0x00033d0f) single_tv_pg_channel_pane_g1

0xdfd9,	// (0x00033d18) single_tv_pg_channel_pane_g2

0x0001,

0xfc44,	// (0x00035983) single_tv_pg_channel_pane_g

0xc519,	// (0x00032258) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc519,	// (0x00032258) bg_single_mobtv_pg_channel_thumb_pane

0xdfe2,	// (0x00033d21) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdfe2,	// (0x00033d21) single_mobtv_pg_channel_thumb_pane_g1

0xdff0,	// (0x00033d2f) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xdff0,	// (0x00033d2f) single_mobtv_pg_channel_thumb_pane_g2

0xdffc,	// (0x00033d3b) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xdffc,	// (0x00033d3b) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc49,	// (0x00035988) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc49,	// (0x00035988) single_mobtv_pg_channel_thumb_pane_g

0xe008,	// (0x00033d47) single_mobtv_pg_channel_thumb_pane_t1

0xe016,	// (0x00033d55) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc50,	// (0x0003598f) single_mobtv_pg_channel_thumb_pane_t

0xc2b2,	// (0x00031ff1) bg_single_mobtv_pg_channel_table_pane_g1

0xc2b2,	// (0x00031ff1) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf700,	// (0x0003543f) bg_single_mobtv_pg_channel_table_pane_g

0xe024,	// (0x00033d63) single_mobtv_pg_channel_table_pane_t1

0xe032,	// (0x00033d71) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc55,	// (0x00035994) single_mobtv_pg_channel_table_pane_t

0x9875,	// (0x0002f5b4) main_mobtv_info_pane_g1_ParamLimits

0x9875,	// (0x0002f5b4) main_mobtv_info_pane_g1

0x9893,	// (0x0002f5d2) main_mobtv_info_pane_t1_ParamLimits

0x9893,	// (0x0002f5d2) main_mobtv_info_pane_t1

0x990b,	// (0x0002f64a) main_mobtv_info_pane_t2_ParamLimits

0x990b,	// (0x0002f64a) main_mobtv_info_pane_t2

0x0002,

0xfc5f,	// (0x0003599e) main_mobtv_info_pane_t_ParamLimits

0xfc5f,	// (0x0003599e) main_mobtv_info_pane_t

0x999a,	// (0x0002f6d9) wait_bar_pane_cp05

0x99ac,	// (0x0002f6eb) main_mobtv_loading_pane_g1_ParamLimits

0x99ac,	// (0x0002f6eb) main_mobtv_loading_pane_g1

0x99bf,	// (0x0002f6fe) main_mobtv_loading_pane_g2_ParamLimits

0x99bf,	// (0x0002f6fe) main_mobtv_loading_pane_g2

0x99cb,	// (0x0002f70a) main_mobtv_loading_pane_g3_ParamLimits

0x99cb,	// (0x0002f70a) main_mobtv_loading_pane_g3

0x0002,

0xfc66,	// (0x000359a5) main_mobtv_loading_pane_g_ParamLimits

0xfc66,	// (0x000359a5) main_mobtv_loading_pane_g

0xe040,	// (0x00033d7f) main_mobtv_loading_pane_t1_ParamLimits

0xe040,	// (0x00033d7f) main_mobtv_loading_pane_t1

0xe058,	// (0x00033d97) main_mobtv_loading_pane_t2_ParamLimits

0xe058,	// (0x00033d97) main_mobtv_loading_pane_t2

0x0001,

0xfc6d,	// (0x000359ac) main_mobtv_loading_pane_t_ParamLimits

0xfc6d,	// (0x000359ac) main_mobtv_loading_pane_t

0x99de,	// (0x0002f71d) wait_bar_pane_cp06_ParamLimits

0x99de,	// (0x0002f71d) wait_bar_pane_cp06

0xe07c,	// (0x00033dbb) main_mobtv_programe_curr_pane_t1

0xe08a,	// (0x00033dc9) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc72,	// (0x000359b1) main_mobtv_programe_curr_pane_t

0xe098,	// (0x00033dd7) main_mobtv_programe_next_pane_t1

0xe0a6,	// (0x00033de5) main_mobtv_programe_next_pane_t2

0xe0b4,	// (0x00033df3) main_mobtv_programe_next_pane_t3

0x0002,

0xfc77,	// (0x000359b6) main_mobtv_programe_next_pane_t

0x1fb7,	// (0x00027cf6) bg_popup_mobtv_noti_window_pane

0xe0c2,	// (0x00033e01) popup_mobtv_noti_window_g1

0xe0ca,	// (0x00033e09) popup_mobtv_noti_window_t1

0xe0d8,	// (0x00033e17) popup_mobtv_noti_window_t2

0x0001,

0xfc7e,	// (0x000359bd) popup_mobtv_noti_window_t

0xc2b2,	// (0x00031ff1) bg_popup_mobtv_noti_window_pane_g1

0x1fb7,	// (0x00027cf6) sc_clock_pane

0x1fb7,	// (0x00027cf6) main_fs_bigclock_pane

0x91f1,	// (0x0002ef30) blid2_tripm_pane_t4_ParamLimits

0x91f1,	// (0x0002ef30) blid2_tripm_pane_t4

0x99ed,	// (0x0002f72c) sc_clock_pane_g1_ParamLimits

0x99ed,	// (0x0002f72c) sc_clock_pane_g1

0x99ff,	// (0x0002f73e) sc_clock_pane_t1_ParamLimits

0x99ff,	// (0x0002f73e) sc_clock_pane_t1

0x9a21,	// (0x0002f760) sc_clock_pane_t2_ParamLimits

0x9a21,	// (0x0002f760) sc_clock_pane_t2

0x9a39,	// (0x0002f778) sc_clock_pane_t3_ParamLimits

0x9a39,	// (0x0002f778) sc_clock_pane_t3

0x0004,

0xfc83,	// (0x000359c2) sc_clock_pane_t_ParamLimits

0xfc83,	// (0x000359c2) sc_clock_pane_t

0xa7dd,	// (0x0003051c) main_fs_bigclock_indicator_pane_ParamLimits

0xa7dd,	// (0x0003051c) main_fs_bigclock_indicator_pane

0xc4e9,	// (0x00032228) main_fs_bigclock_pane_g1_ParamLimits

0xc4e9,	// (0x00032228) main_fs_bigclock_pane_g1

0xa7e9,	// (0x00030528) main_fs_bigclock_pane_t1_ParamLimits

0xa7e9,	// (0x00030528) main_fs_bigclock_pane_t1

0xa7fb,	// (0x0003053a) main_fs_bigclock_pane_t2_ParamLimits

0xa7fb,	// (0x0003053a) main_fs_bigclock_pane_t2

0xa80d,	// (0x0003054c) main_fs_bigclock_pane_t3_ParamLimits

0xa80d,	// (0x0003054c) main_fs_bigclock_pane_t3

0x0002,

0xfe7d,	// (0x00035bbc) main_fs_bigclock_pane_t_ParamLimits

0xfe7d,	// (0x00035bbc) main_fs_bigclock_pane_t

0xed07,	// (0x00034a46) main_fs_bigclock_indicator_pane_g1

0xdd9e,	// (0x00033add) ncim_query_content_pane_g2_ParamLimits

0xdd9e,	// (0x00033add) ncim_query_content_pane_g2

0x0001,

0xfc10,	// (0x0003594f) ncim_query_content_pane_g_ParamLimits

0xfc10,	// (0x0003594f) ncim_query_content_pane_g

0x9a50,	// (0x0002f78f) sc_clock_pane_t4_ParamLimits

0x9a50,	// (0x0002f78f) sc_clock_pane_t4

0x2229,	// (0x00027f68) main_radioblah_pane

0xced4,	// (0x00032c13) cell_call4_button_pane_t1_copy1_ParamLimits

0xced4,	// (0x00032c13) cell_call4_button_pane_t1_copy1

0x96a9,	// (0x0002f3e8) main_ncimui_pane_t1_ParamLimits

0x96a9,	// (0x0002f3e8) main_ncimui_pane_t1

0x96c3,	// (0x0002f402) main_ncimui_pane_t2_ParamLimits

0x96c3,	// (0x0002f402) main_ncimui_pane_t2

0x0002,

0xfc09,	// (0x00035948) main_ncimui_pane_t_ParamLimits

0xfc09,	// (0x00035948) main_ncimui_pane_t

0xe208,	// (0x00033f47) main_radioblah_anim_pane_ParamLimits

0xe208,	// (0x00033f47) main_radioblah_anim_pane

0xe219,	// (0x00033f58) main_radioblah_info_pane_ParamLimits

0xe219,	// (0x00033f58) main_radioblah_info_pane

0xe22d,	// (0x00033f6c) main_radioblah_pane_t1_ParamLimits

0xe22d,	// (0x00033f6c) main_radioblah_pane_t1

0xe249,	// (0x00033f88) main_radioblah_pane_t2_ParamLimits

0xe249,	// (0x00033f88) main_radioblah_pane_t2

0x0003,

0xfca4,	// (0x000359e3) main_radioblah_pane_t_ParamLimits

0xfca4,	// (0x000359e3) main_radioblah_pane_t

0x9af9,	// (0x0002f838) main_radioblah_rocker_ctrl_pane_ParamLimits

0x9af9,	// (0x0002f838) main_radioblah_rocker_ctrl_pane

0xe291,	// (0x00033fd0) main_radioblah_info_pane_t1_ParamLimits

0xe291,	// (0x00033fd0) main_radioblah_info_pane_t1

0x9b51,	// (0x0002f890) main_radioblah_info_pane_t2_ParamLimits

0x9b51,	// (0x0002f890) main_radioblah_info_pane_t2

0x0003,

0xfcad,	// (0x000359ec) main_radioblah_info_pane_t_ParamLimits

0xfcad,	// (0x000359ec) main_radioblah_info_pane_t

0xc2b2,	// (0x00031ff1) main_radioblah_rocker_ctrl_pane_g1

0x9c03,	// (0x0002f942) main_radioblah_rocker_ctrl_pane_g2

0x9c0b,	// (0x0002f94a) main_radioblah_rocker_ctrl_pane_g3

0x9c13,	// (0x0002f952) main_radioblah_rocker_ctrl_pane_g4

0x9c1b,	// (0x0002f95a) main_radioblah_rocker_ctrl_pane_g5

0x9c23,	// (0x0002f962) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcb6,	// (0x000359f5) main_radioblah_rocker_ctrl_pane_g

0x946c,	// (0x0002f1ab) main_cset_text2_pane_t1_copy1_ParamLimits

0xcf5e,	// (0x00032c9d) cam4_image_uncrop_qvga_pane

0xcfd7,	// (0x00032d16) vid4_image_uncrop_qcif_pane

0xd8e7,	// (0x00033626) cam6_image_uncrop_qvga_pane_ParamLimits

0xd8e7,	// (0x00033626) cam6_image_uncrop_qvga_pane

0xd9bd,	// (0x000336fc) vid6_image_uncrop_qcif_pane_ParamLimits

0xd9bd,	// (0x000336fc) vid6_image_uncrop_qcif_pane

0x1fb7,	// (0x00027cf6) bg_popup_preview_window_pane_cp03

0xdd50,	// (0x00033a8f) list_cset_text2_pane

0xdd58,	// (0x00033a97) main_cset6_text2_pane_g1

0xdd60,	// (0x00033a9f) main_cset6_text2_pane_t1

0x9c2b,	// (0x0002f96a) list_cset_text2_pane_t1_ParamLimits

0x9c2b,	// (0x0002f96a) list_cset_text2_pane_t1

0x2229,	// (0x00027f68) main_radioblah_pane_ParamLimits

0x9986,	// (0x0002f6c5) main_mobtv_info_pane_t3_ParamLimits

0x9986,	// (0x0002f6c5) main_mobtv_info_pane_t3

0x9ae7,	// (0x0002f826) main_radioblah_pane_g1

0x9b21,	// (0x0002f860) main_radioblah_info_pane_g1

0x9ba8,	// (0x0002f8e7) main_radioblah_info_pane_t3_ParamLimits

0x9ba8,	// (0x0002f8e7) main_radioblah_info_pane_t3

0x45c2,	// (0x0002a301) highlight_cell_cale_month_pane_ParamLimits

0x45c2,	// (0x0002a301) highlight_cell_cale_month_pane

0x1fb7,	// (0x00027cf6) main_phob_fisheye_pane

0xc633,	// (0x00032372) scroll_pane_cp0031_ParamLimits

0xc633,	// (0x00032372) scroll_pane_cp0031

0xdacb,	// (0x0003380a) wait_bar_pane_cp08_ParamLimits

0x94f0,	// (0x0002f22f) cset_list_set_pane_copy1_ParamLimits

0xe2cb,	// (0x0003400a) highlight_cell_cale_month_pane_g1

0x9c48,	// (0x0002f987) highlight_cell_cale_month_pane_t1

0xd680,	// (0x000333bf) list_gen_pane_cp01

0xd1bc,	// (0x00032efb) scroll_pane_01

0xe2d3,	// (0x00034012) list_single_double_fisheye_pane

0xe2dc,	// (0x0003401b) list_double_fisheye_pane_g1_ParamLimits

0xe2dc,	// (0x0003401b) list_double_fisheye_pane_g1

0xe2e8,	// (0x00034027) list_double_fisheye_pane_g2_ParamLimits

0xe2e8,	// (0x00034027) list_double_fisheye_pane_g2

0x9c56,	// (0x0002f995) list_double_fisheye_pane_g3_ParamLimits

0x9c56,	// (0x0002f995) list_double_fisheye_pane_g3

0x0004,

0xfcc3,	// (0x00035a02) list_double_fisheye_pane_g_ParamLimits

0xfcc3,	// (0x00035a02) list_double_fisheye_pane_g

0x9c62,	// (0x0002f9a1) list_double_fisheye_pane_t1_ParamLimits

0x9c62,	// (0x0002f9a1) list_double_fisheye_pane_t1

0x9c7d,	// (0x0002f9bc) list_double_fisheye_pane_t2_ParamLimits

0x9c7d,	// (0x0002f9bc) list_double_fisheye_pane_t2

0x0001,

0xfcce,	// (0x00035a0d) list_double_fisheye_pane_t_ParamLimits

0xfcce,	// (0x00035a0d) list_double_fisheye_pane_t

0x1fb7,	// (0x00027cf6) main_call5_pane

0x9a7b,	// (0x0002f7ba) sc_swipe_pane_ParamLimits

0x9a7b,	// (0x0002f7ba) sc_swipe_pane

0x9cb2,	// (0x0002f9f1) call5_image_pane_ParamLimits

0x9cb2,	// (0x0002f9f1) call5_image_pane

0x9ccf,	// (0x0002fa0e) call5_swipe_1_pane_ParamLimits

0x9ccf,	// (0x0002fa0e) call5_swipe_1_pane

0x9ce2,	// (0x0002fa21) call5_swipe_2_pane_ParamLimits

0x9ce2,	// (0x0002fa21) call5_swipe_2_pane

0x9d0d,	// (0x0002fa4c) popup_call5_audio_first_window_ParamLimits

0x9d0d,	// (0x0002fa4c) popup_call5_audio_first_window

0xc519,	// (0x00032258) call5_swipe_1_pane_g1_ParamLimits

0xc519,	// (0x00032258) call5_swipe_1_pane_g1

0xe319,	// (0x00034058) call5_swipe_1_pane_g2_ParamLimits

0xe319,	// (0x00034058) call5_swipe_1_pane_g2

0x0001,

0xfcd3,	// (0x00035a12) call5_swipe_1_pane_g_ParamLimits

0xfcd3,	// (0x00035a12) call5_swipe_1_pane_g

0xe325,	// (0x00034064) call5_swipe_1_pane_t1_ParamLimits

0xe325,	// (0x00034064) call5_swipe_1_pane_t1

0xc519,	// (0x00032258) call5_swipe_2_pane_g1_ParamLimits

0xc519,	// (0x00032258) call5_swipe_2_pane_g1

0xe33a,	// (0x00034079) call5_swipe_2_pane_g2_ParamLimits

0xe33a,	// (0x00034079) call5_swipe_2_pane_g2

0x0001,

0xfcd8,	// (0x00035a17) call5_swipe_2_pane_g_ParamLimits

0xfcd8,	// (0x00035a17) call5_swipe_2_pane_g

0xe346,	// (0x00034085) call5_swipe_2_pane_t1_ParamLimits

0xe346,	// (0x00034085) call5_swipe_2_pane_t1

0xe35b,	// (0x0003409a) sc_swipe_pane_g1_ParamLimits

0xe35b,	// (0x0003409a) sc_swipe_pane_g1

0xe368,	// (0x000340a7) sc_swipe_pane_g2_ParamLimits

0xe368,	// (0x000340a7) sc_swipe_pane_g2

0x0001,

0xfcdd,	// (0x00035a1c) sc_swipe_pane_g_ParamLimits

0xfcdd,	// (0x00035a1c) sc_swipe_pane_g

0xe374,	// (0x000340b3) sc_swipe_pane_t1_ParamLimits

0xe374,	// (0x000340b3) sc_swipe_pane_t1

0x1fb7,	// (0x00027cf6) main_cmail_launcher_pane

0x9d1e,	// (0x0002fa5d) aid_size_cell_cmail_l_ParamLimits

0x9d1e,	// (0x0002fa5d) aid_size_cell_cmail_l

0x9d38,	// (0x0002fa77) grid_cmail_l_pane_ParamLimits

0x9d38,	// (0x0002fa77) grid_cmail_l_pane

0x9d53,	// (0x0002fa92) cell_cmail_l_pane_ParamLimits

0x9d53,	// (0x0002fa92) cell_cmail_l_pane

0x9d79,	// (0x0002fab8) cell_cmail_l_pane_g1_ParamLimits

0x9d79,	// (0x0002fab8) cell_cmail_l_pane_g1

0x9d85,	// (0x0002fac4) cell_cmail_l_pane_t1_ParamLimits

0x9d85,	// (0x0002fac4) cell_cmail_l_pane_t1

0xe389,	// (0x000340c8) cell_cmail_l_pane_t2_ParamLimits

0xe389,	// (0x000340c8) cell_cmail_l_pane_t2

0x0001,

0xfce2,	// (0x00035a21) cell_cmail_l_pane_t_ParamLimits

0xfce2,	// (0x00035a21) cell_cmail_l_pane_t

0x2229,	// (0x00027f68) grid_highlight_pane_cp018_ParamLimits

0x2229,	// (0x00027f68) grid_highlight_pane_cp018

0x20e3,	// (0x00027e22) main2_pane_ParamLimits

0x20e3,	// (0x00027e22) main2_pane

0x2db7,	// (0x00028af6) popup_sp_fs_action_menu_bg_pane_g1

0x2dbf,	// (0x00028afe) popup_sp_fs_action_menu_bg_pane_g2

0x2dc7,	// (0x00028b06) popup_sp_fs_action_menu_bg_pane_g3

0x2dcf,	// (0x00028b0e) popup_sp_fs_action_menu_bg_pane_g4

0x2dd7,	// (0x00028b16) popup_sp_fs_action_menu_bg_pane_g5

0x2ddf,	// (0x00028b1e) popup_sp_fs_action_menu_bg_pane_g6

0x2de7,	// (0x00028b26) popup_sp_fs_action_menu_bg_pane_g7

0x2def,	// (0x00028b2e) popup_sp_fs_action_menu_bg_pane_g8

0x2df7,	// (0x00028b36) popup_sp_fs_action_menu_bg_pane_g9

0x2dff,	// (0x00028b3e) popup_sp_fs_action_menu_bg_pane_g10

0x2dff,	// (0x00028b3e) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1ac,	// (0x00034eeb) popup_sp_fs_action_menu_bg_pane_g

0x3547,	// (0x00029286) list_medium_line_x2_t3_g3_g1_ParamLimits

0x3547,	// (0x00029286) list_medium_line_x2_t3_g3_g1

0x3553,	// (0x00029292) list_medium_line_x2_t3_g3_g2_ParamLimits

0x3553,	// (0x00029292) list_medium_line_x2_t3_g3_g2

0x355f,	// (0x0002929e) list_medium_line_x2_t3_g3_g3_ParamLimits

0x355f,	// (0x0002929e) list_medium_line_x2_t3_g3_g3

0x0002,

0xf25c,	// (0x00034f9b) list_medium_line_x2_t3_g3_g_ParamLimits

0xf25c,	// (0x00034f9b) list_medium_line_x2_t3_g3_g

0x356b,	// (0x000292aa) list_medium_line_x2_t3_g3_t1_ParamLimits

0x356b,	// (0x000292aa) list_medium_line_x2_t3_g3_t1

0x3580,	// (0x000292bf) list_medium_line_x2_t3_g3_t2_ParamLimits

0x3580,	// (0x000292bf) list_medium_line_x2_t3_g3_t2

0x3594,	// (0x000292d3) list_medium_line_x2_t3_g3_t3_ParamLimits

0x3594,	// (0x000292d3) list_medium_line_x2_t3_g3_t3

0x0002,

0xf263,	// (0x00034fa2) list_medium_line_x2_t3_g3_t_ParamLimits

0xf263,	// (0x00034fa2) list_medium_line_x2_t3_g3_t

0x3547,	// (0x00029286) list_medium_line_x2_t3_g2_g1_ParamLimits

0x3547,	// (0x00029286) list_medium_line_x2_t3_g2_g1

0x355f,	// (0x0002929e) list_medium_line_x2_t3_g2_g2_ParamLimits

0x355f,	// (0x0002929e) list_medium_line_x2_t3_g2_g2

0x0001,

0xf26a,	// (0x00034fa9) list_medium_line_x2_t3_g2_g_ParamLimits

0xf26a,	// (0x00034fa9) list_medium_line_x2_t3_g2_g

0x35a9,	// (0x000292e8) list_medium_line_x2_t3_g2_t1_ParamLimits

0x35a9,	// (0x000292e8) list_medium_line_x2_t3_g2_t1

0x35bf,	// (0x000292fe) list_medium_line_x2_t3_g2_t2_ParamLimits

0x35bf,	// (0x000292fe) list_medium_line_x2_t3_g2_t2

0x35d1,	// (0x00029310) list_medium_line_x2_t3_g2_t3_ParamLimits

0x35d1,	// (0x00029310) list_medium_line_x2_t3_g2_t3

0x0002,

0xf26f,	// (0x00034fae) list_medium_line_x2_t3_g2_t_ParamLimits

0xf26f,	// (0x00034fae) list_medium_line_x2_t3_g2_t

0x3547,	// (0x00029286) list_medium_line_x2_t4_g4_g1_ParamLimits

0x3547,	// (0x00029286) list_medium_line_x2_t4_g4_g1

0x35ee,	// (0x0002932d) list_medium_line_x2_t4_g4_g2_ParamLimits

0x35ee,	// (0x0002932d) list_medium_line_x2_t4_g4_g2

0x3553,	// (0x00029292) list_medium_line_x2_t4_g4_g3_ParamLimits

0x3553,	// (0x00029292) list_medium_line_x2_t4_g4_g3

0x35fa,	// (0x00029339) list_medium_line_x2_t4_g4_g4_ParamLimits

0x35fa,	// (0x00029339) list_medium_line_x2_t4_g4_g4

0x0003,

0xf276,	// (0x00034fb5) list_medium_line_x2_t4_g4_g_ParamLimits

0xf276,	// (0x00034fb5) list_medium_line_x2_t4_g4_g

0x3606,	// (0x00029345) list_medium_line_x2_t4_g4_t1_ParamLimits

0x3606,	// (0x00029345) list_medium_line_x2_t4_g4_t1

0x361d,	// (0x0002935c) list_medium_line_x2_t4_g4_t2_ParamLimits

0x361d,	// (0x0002935c) list_medium_line_x2_t4_g4_t2

0x3632,	// (0x00029371) list_medium_line_x2_t4_g4_t3_ParamLimits

0x3632,	// (0x00029371) list_medium_line_x2_t4_g4_t3

0x3644,	// (0x00029383) list_medium_line_x2_t4_g4_t4_ParamLimits

0x3644,	// (0x00029383) list_medium_line_x2_t4_g4_t4

0x0003,

0xf27f,	// (0x00034fbe) list_medium_line_x2_t4_g4_t_ParamLimits

0xf27f,	// (0x00034fbe) list_medium_line_x2_t4_g4_t

0x3547,	// (0x00029286) list_medium_line_x2_t2_g4_g1_ParamLimits

0x3547,	// (0x00029286) list_medium_line_x2_t2_g4_g1

0x35ee,	// (0x0002932d) list_medium_line_x2_t2_g4_g2_ParamLimits

0x35ee,	// (0x0002932d) list_medium_line_x2_t2_g4_g2

0x3553,	// (0x00029292) list_medium_line_x2_t2_g4_g3_ParamLimits

0x3553,	// (0x00029292) list_medium_line_x2_t2_g4_g3

0x355f,	// (0x0002929e) list_medium_line_x2_t2_g4_g4_ParamLimits

0x355f,	// (0x0002929e) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2e6,	// (0x00035025) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2e6,	// (0x00035025) list_medium_line_x2_t2_g4_g

0x45e0,	// (0x0002a31f) list_medium_line_x2_t2_g4_t1_ParamLimits

0x45e0,	// (0x0002a31f) list_medium_line_x2_t2_g4_t1

0x3594,	// (0x000292d3) list_medium_line_x2_t2_g4_t2_ParamLimits

0x3594,	// (0x000292d3) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2ef,	// (0x0003502e) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2ef,	// (0x0003502e) list_medium_line_x2_t2_g4_t

0x3547,	// (0x00029286) list_medium_line_x2_t2_g3_g1_ParamLimits

0x3547,	// (0x00029286) list_medium_line_x2_t2_g3_g1

0x3553,	// (0x00029292) list_medium_line_x2_t2_g3_g2_ParamLimits

0x3553,	// (0x00029292) list_medium_line_x2_t2_g3_g2

0x355f,	// (0x0002929e) list_medium_line_x2_t2_g3_g3_ParamLimits

0x355f,	// (0x0002929e) list_medium_line_x2_t2_g3_g3

0x0002,

0xf25c,	// (0x00034f9b) list_medium_line_x2_t2_g3_g_ParamLimits

0xf25c,	// (0x00034f9b) list_medium_line_x2_t2_g3_g

0x45f5,	// (0x0002a334) list_medium_line_x2_t2_g3_t1_ParamLimits

0x45f5,	// (0x0002a334) list_medium_line_x2_t2_g3_t1

0x3594,	// (0x000292d3) list_medium_line_x2_t2_g3_t2_ParamLimits

0x3594,	// (0x000292d3) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2f4,	// (0x00035033) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2f4,	// (0x00035033) list_medium_line_x2_t2_g3_t

0x4957,	// (0x0002a696) main_sp_fs_list_pane_ParamLimits

0x4957,	// (0x0002a696) main_sp_fs_list_pane

0x4963,	// (0x0002a6a2) sp_fs_scroll_pane_ParamLimits

0x4963,	// (0x0002a6a2) sp_fs_scroll_pane

0x496f,	// (0x0002a6ae) list_medium_line_x2_t3_t1

0x497f,	// (0x0002a6be) list_medium_line_x2_t3_t2

0x498d,	// (0x0002a6cc) list_medium_line_x2_t3_t3

0x0002,

0xf33f,	// (0x0003507e) list_medium_line_x2_t3_t

0x499b,	// (0x0002a6da) list_medium_line_x3_t4_t1

0x49ab,	// (0x0002a6ea) list_medium_line_x3_t4_t2

0x49b9,	// (0x0002a6f8) list_medium_line_x3_t4_t3

0x498d,	// (0x0002a6cc) list_medium_line_x3_t4_t4

0x0003,

0xf346,	// (0x00035085) list_medium_line_x3_t4_t

0x49c7,	// (0x0002a706) list_medium_line_x4_t5_t1

0x49d7,	// (0x0002a716) list_medium_line_x4_t5_t2

0x49b9,	// (0x0002a6f8) list_medium_line_x4_t5_t3

0x49e5,	// (0x0002a724) list_medium_line_x4_t5_t4

0x498d,	// (0x0002a6cc) list_medium_line_x4_t5_t5

0x0004,

0xf34f,	// (0x0003508e) list_medium_line_x4_t5_t

0x3547,	// (0x00029286) list_medium_line_t4_g4_g1_ParamLimits

0x3547,	// (0x00029286) list_medium_line_t4_g4_g1

0x35fa,	// (0x00029339) list_medium_line_t4_g4_g2_ParamLimits

0x35fa,	// (0x00029339) list_medium_line_t4_g4_g2

0x49f3,	// (0x0002a732) list_medium_line_t4_g4_g3_ParamLimits

0x49f3,	// (0x0002a732) list_medium_line_t4_g4_g3

0x355f,	// (0x0002929e) list_medium_line_t4_g4_g4_ParamLimits

0x355f,	// (0x0002929e) list_medium_line_t4_g4_g4

0x0003,

0xf35a,	// (0x00035099) list_medium_line_t4_g4_g_ParamLimits

0xf35a,	// (0x00035099) list_medium_line_t4_g4_g

0x49ff,	// (0x0002a73e) list_medium_line_t4_g4_t1_ParamLimits

0x49ff,	// (0x0002a73e) list_medium_line_t4_g4_t1

0x4a14,	// (0x0002a753) list_medium_line_t4_g4_t2_ParamLimits

0x4a14,	// (0x0002a753) list_medium_line_t4_g4_t2

0x4a29,	// (0x0002a768) list_medium_line_t4_g4_t3_ParamLimits

0x4a29,	// (0x0002a768) list_medium_line_t4_g4_t3

0x3594,	// (0x000292d3) list_medium_line_t4_g4_t4_ParamLimits

0x3594,	// (0x000292d3) list_medium_line_t4_g4_t4

0x0003,

0xf363,	// (0x000350a2) list_medium_line_t4_g4_t_ParamLimits

0xf363,	// (0x000350a2) list_medium_line_t4_g4_t

0x4d69,	// (0x0002aaa8) chi_dic_find_pane_g1

0x690d,	// (0x0002c64c) main_tport_pane

0xd301,	// (0x00033040) list_medium_line_plain_t1

0xd353,	// (0x00033092) list_medium_line_t2_g2_g1_ParamLimits

0xd353,	// (0x00033092) list_medium_line_t2_g2_g1

0xd35f,	// (0x0003309e) list_medium_line_t2_g2_g2_ParamLimits

0xd35f,	// (0x0003309e) list_medium_line_t2_g2_g2

0x0001,

0xfa1f,	// (0x0003575e) list_medium_line_t2_g2_g_ParamLimits

0xfa1f,	// (0x0003575e) list_medium_line_t2_g2_g

0x8a21,	// (0x0002e760) list_medium_line_t2_g2_t1_ParamLimits

0x8a21,	// (0x0002e760) list_medium_line_t2_g2_t1

0x8a3b,	// (0x0002e77a) list_medium_line_t2_g2_t2_ParamLimits

0x8a3b,	// (0x0002e77a) list_medium_line_t2_g2_t2

0x0001,

0xfa24,	// (0x00035763) list_medium_line_t2_g2_t_ParamLimits

0xfa24,	// (0x00035763) list_medium_line_t2_g2_t

0xd701,	// (0x00033440) aid_sp_fs_list_icon_a_sm

0xd709,	// (0x00033448) aid_sp_fs_list_icon_d

0xd711,	// (0x00033450) aid_sp_fs_text_primary

0xd71a,	// (0x00033459) aid_sp_fs_text_secondary

0xd723,	// (0x00033462) list_medium_line

0xd723,	// (0x00033462) list_medium_line_g2

0xd723,	// (0x00033462) list_medium_line_g3

0xd723,	// (0x00033462) list_medium_line_plain

0xd723,	// (0x00033462) list_medium_line_plain_t2

0xd723,	// (0x00033462) list_medium_line_plain_t3

0xd723,	// (0x00033462) list_medium_line_right_icon

0xd723,	// (0x00033462) list_medium_line_right_iconx2

0xd723,	// (0x00033462) list_medium_line_t2

0xd723,	// (0x00033462) list_medium_line_t2_g2

0xd723,	// (0x00033462) list_medium_line_t2_g3

0xd723,	// (0x00033462) list_medium_line_t2_right_icon

0xd723,	// (0x00033462) list_medium_line_t2_right_iconx2

0xd723,	// (0x00033462) list_medium_line_t3

0xd723,	// (0x00033462) list_medium_line_t3_g2

0xd723,	// (0x00033462) list_medium_line_t3_g3

0xd723,	// (0x00033462) list_medium_line_t3_right_iconx2

0xd72c,	// (0x0003346b) list_medium_line_t4_g4

0xd735,	// (0x00033474) list_medium_line_x2

0xd735,	// (0x00033474) list_medium_line_x2_t2_g2

0xd735,	// (0x00033474) list_medium_line_x2_t2_g3

0xd735,	// (0x00033474) list_medium_line_x2_t2_g4

0xd735,	// (0x00033474) list_medium_line_x2_t3

0xd735,	// (0x00033474) list_medium_line_x2_t3_g2

0xd735,	// (0x00033474) list_medium_line_x2_t3_g3

0xd735,	// (0x00033474) list_medium_line_x2_t3_g4

0xd735,	// (0x00033474) list_medium_line_x2_t4_g2

0xd735,	// (0x00033474) list_medium_line_x2_t4_g4

0xd73e,	// (0x0003347d) list_medium_line_x3

0xd73e,	// (0x0003347d) list_medium_line_x3_t4

0xd73e,	// (0x0003347d) list_medium_line_x3_t4_g4

0xd72c,	// (0x0003346b) list_medium_line_x4_t4

0xd72c,	// (0x0003346b) list_medium_line_x4_t4_g7

0xd72c,	// (0x0003346b) list_medium_line_x4_t5

0xd747,	// (0x00033486) list_single_fs_dyc_pane_ParamLimits

0xd747,	// (0x00033486) list_single_fs_dyc_pane

0x3547,	// (0x00029286) list_medium_line_x4_t4_g7_g1_ParamLimits

0x3547,	// (0x00029286) list_medium_line_x4_t4_g7_g1

0xdc7f,	// (0x000339be) list_medium_line_x4_t4_g7_g2_ParamLimits

0xdc7f,	// (0x000339be) list_medium_line_x4_t4_g7_g2

0xdc8b,	// (0x000339ca) list_medium_line_x4_t4_g7_g3_ParamLimits

0xdc8b,	// (0x000339ca) list_medium_line_x4_t4_g7_g3

0xdc9a,	// (0x000339d9) list_medium_line_x4_t4_g7_g4_ParamLimits

0xdc9a,	// (0x000339d9) list_medium_line_x4_t4_g7_g4

0xdca6,	// (0x000339e5) list_medium_line_x4_t4_g7_g5_ParamLimits

0xdca6,	// (0x000339e5) list_medium_line_x4_t4_g7_g5

0xdcb5,	// (0x000339f4) list_medium_line_x4_t4_g7_g6_ParamLimits

0xdcb5,	// (0x000339f4) list_medium_line_x4_t4_g7_g6

0xdcc4,	// (0x00033a03) list_medium_line_x4_t4_g7_g7_ParamLimits

0xdcc4,	// (0x00033a03) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbef,	// (0x0003592e) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbef,	// (0x0003592e) list_medium_line_x4_t4_g7_g

0xdcd0,	// (0x00033a0f) list_medium_line_x4_t4_g7_t1_ParamLimits

0xdcd0,	// (0x00033a0f) list_medium_line_x4_t4_g7_t1

0xdce5,	// (0x00033a24) list_medium_line_x4_t4_g7_t2_ParamLimits

0xdce5,	// (0x00033a24) list_medium_line_x4_t4_g7_t2

0xdcfa,	// (0x00033a39) list_medium_line_x4_t4_g7_t3_ParamLimits

0xdcfa,	// (0x00033a39) list_medium_line_x4_t4_g7_t3

0xdd0f,	// (0x00033a4e) list_medium_line_x4_t4_g7_t4_ParamLimits

0xdd0f,	// (0x00033a4e) list_medium_line_x4_t4_g7_t4

0xdd21,	// (0x00033a60) list_medium_line_x4_t4_g7_t5_ParamLimits

0xdd21,	// (0x00033a60) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbfe,	// (0x0003593d) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbfe,	// (0x0003593d) list_medium_line_x4_t4_g7_t

0xdd33,	// (0x00033a72) list_single_dyc_row_pane_ParamLimits

0xdd33,	// (0x00033a72) list_single_dyc_row_pane

0x9c9f,	// (0x0002f9de) call5_gesture_pane_ParamLimits

0x9c9f,	// (0x0002f9de) call5_gesture_pane

0x9cf5,	// (0x0002fa34) call5_windows_pane_ParamLimits

0x9cf5,	// (0x0002fa34) call5_windows_pane

0x9d9b,	// (0x0002fada) call5_swipe_1_pane_cp_ParamLimits

0x9d9b,	// (0x0002fada) call5_swipe_1_pane_cp

0x9da7,	// (0x0002fae6) call5_swipe_2_pane_cp_ParamLimits

0x9da7,	// (0x0002fae6) call5_swipe_2_pane_cp

0x51d5,	// (0x0002af14) call5_image_pane_cp

0x9db3,	// (0x0002faf2) popup_call5_audio_first_window_cp_ParamLimits

0x9db3,	// (0x0002faf2) popup_call5_audio_first_window_cp

0xe35b,	// (0x0003409a) call5_swipe_1_pane_g1_cp_ParamLimits

0xe35b,	// (0x0003409a) call5_swipe_1_pane_g1_cp

0xe39b,	// (0x000340da) call5_swipe_1_pane_g2_cp

0xe374,	// (0x000340b3) call5_swipe_1_pane_t1_cp_ParamLimits

0xe374,	// (0x000340b3) call5_swipe_1_pane_t1_cp

0xe35b,	// (0x0003409a) call5_swipe_2_pane_g1_cp_ParamLimits

0xe35b,	// (0x0003409a) call5_swipe_2_pane_g1_cp

0xe3a3,	// (0x000340e2) call5_swipe_2_pane_g2_cp

0xe3ab,	// (0x000340ea) call5_swipe_2_pane_t1_cp_ParamLimits

0xe3ab,	// (0x000340ea) call5_swipe_2_pane_t1_cp

0x2229,	// (0x00027f68) main_sp_fs_email_pane

0xe3c0,	// (0x000340ff) main_sp_fs_listscroll_pane_te

0xe3c9,	// (0x00034108) popup_sp_fs_action_menu_pane_ParamLimits

0xe3c9,	// (0x00034108) popup_sp_fs_action_menu_pane

0xc2b2,	// (0x00031ff1) bg_sp_fs_ctrlbar_pane_g1

0xe409,	// (0x00034148) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe412,	// (0x00034151) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe41b,	// (0x0003415a) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc2b2,	// (0x00031ff1) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfce7,	// (0x00035a26) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc095,	// (0x00031dd4) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc095,	// (0x00031dd4) bg_sp_fs_ctrlbar_ddmenu_pane

0xe424,	// (0x00034163) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe424,	// (0x00034163) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe430,	// (0x0003416f) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe430,	// (0x0003416f) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcf0,	// (0x00035a2f) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcf0,	// (0x00035a2f) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe43c,	// (0x0003417b) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe43c,	// (0x0003417b) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xe456,	// (0x00034195) list_medium_line_t2_right_icon_g1

0x9dbf,	// (0x0002fafe) list_medium_line_t2_right_icon_t1

0x9dcf,	// (0x0002fb0e) list_medium_line_t2_right_icon_t2

0x0001,

0xfcf5,	// (0x00035a34) list_medium_line_t2_right_icon_t

0xbdaa,	// (0x00031ae9) bg_sp_fs_ctrlbar_pane_ParamLimits

0xbdaa,	// (0x00031ae9) bg_sp_fs_ctrlbar_pane

0x9e29,	// (0x0002fb68) main_sp_fs_ctrlbar_button_pane_cp01

0x9e33,	// (0x0002fb72) main_sp_fs_ctrlbar_ddmenu_pane

0x3547,	// (0x00029286) main_sp_fs_ctrlbar_pane_g1

0xe496,	// (0x000341d5) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcfa,	// (0x00035a39) main_sp_fs_ctrlbar_pane_g

0xe4a2,	// (0x000341e1) main_sp_fs_ctrlbar_pane_t1

0x9e3d,	// (0x0002fb7c) main_sp_fs_ctrlbar_pane

0x9e61,	// (0x0002fba0) main_sp_fs_listscroll_pane_te_cp01

0x9e81,	// (0x0002fbc0) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x9e81,	// (0x0002fbc0) popup_sp_fs_action_menu_pane_cp01

0x2229,	// (0x00027f68) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x2229,	// (0x00027f68) bg_sp_fs_highlight_list_pane_cp01

0xe4b7,	// (0x000341f6) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe4b7,	// (0x000341f6) sp_fs_action_menu_list_gene_pane_g1

0xe4c6,	// (0x00034205) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe4c6,	// (0x00034205) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcff,	// (0x00035a3e) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcff,	// (0x00035a3e) sp_fs_action_menu_list_gene_pane_g

0xe4d3,	// (0x00034212) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe4d3,	// (0x00034212) sp_fs_action_menu_list_gene_pane_t1

0xe4eb,	// (0x0003422a) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe4eb,	// (0x0003422a) sp_fs_action_menu_list_gene_pane

0xe508,	// (0x00034247) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe508,	// (0x00034247) popup_sp_fs_action_menu_bg_pane

0xe516,	// (0x00034255) sp_fs_action_menu_list_pane_ParamLimits

0xe516,	// (0x00034255) sp_fs_action_menu_list_pane

0xe534,	// (0x00034273) sp_fs_scroll_pane_cp01_ParamLimits

0xe534,	// (0x00034273) sp_fs_scroll_pane_cp01

0x9e9b,	// (0x0002fbda) list_medium_line_plain_t2_t1

0x9eab,	// (0x0002fbea) list_medium_line_plain_t2_t2

0x0001,

0xfd04,	// (0x00035a43) list_medium_line_plain_t2_t

0x9ebb,	// (0x0002fbfa) list_medium_line_plain_t3_t1

0x9ecb,	// (0x0002fc0a) list_medium_line_plain_t3_t2

0x9ed9,	// (0x0002fc18) list_medium_line_plain_t3_t3

0x0002,

0xfd09,	// (0x00035a48) list_medium_line_plain_t3_t

0x3547,	// (0x00029286) list_medium_line_x2_t2_g2_g1_ParamLimits

0x3547,	// (0x00029286) list_medium_line_x2_t2_g2_g1

0x355f,	// (0x0002929e) list_medium_line_x2_t2_g2_g2_ParamLimits

0x355f,	// (0x0002929e) list_medium_line_x2_t2_g2_g2

0x0001,

0xf26a,	// (0x00034fa9) list_medium_line_x2_t2_g2_g_ParamLimits

0xf26a,	// (0x00034fa9) list_medium_line_x2_t2_g2_g

0x49ff,	// (0x0002a73e) list_medium_line_x2_t2_g2_t1_ParamLimits

0x49ff,	// (0x0002a73e) list_medium_line_x2_t2_g2_t1

0x3594,	// (0x000292d3) list_medium_line_x2_t2_g2_t2_ParamLimits

0x3594,	// (0x000292d3) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd10,	// (0x00035a4f) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd10,	// (0x00035a4f) list_medium_line_x2_t2_g2_t

0x3547,	// (0x00029286) list_medium_line_x2_t4_g2_g1_ParamLimits

0x3547,	// (0x00029286) list_medium_line_x2_t4_g2_g1

0x355f,	// (0x0002929e) list_medium_line_x2_t4_g2_g2_ParamLimits

0x355f,	// (0x0002929e) list_medium_line_x2_t4_g2_g2

0x0001,

0xf26a,	// (0x00034fa9) list_medium_line_x2_t4_g2_g_ParamLimits

0xf26a,	// (0x00034fa9) list_medium_line_x2_t4_g2_g

0x9ee7,	// (0x0002fc26) list_medium_line_x2_t4_g2_t1_ParamLimits

0x9ee7,	// (0x0002fc26) list_medium_line_x2_t4_g2_t1

0x9efe,	// (0x0002fc3d) list_medium_line_x2_t4_g2_t2_ParamLimits

0x9efe,	// (0x0002fc3d) list_medium_line_x2_t4_g2_t2

0x9f13,	// (0x0002fc52) list_medium_line_x2_t4_g2_t3_ParamLimits

0x9f13,	// (0x0002fc52) list_medium_line_x2_t4_g2_t3

0x3594,	// (0x000292d3) list_medium_line_x2_t4_g2_t4_ParamLimits

0x3594,	// (0x000292d3) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd15,	// (0x00035a54) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd15,	// (0x00035a54) list_medium_line_x2_t4_g2_t

0xe55a,	// (0x00034299) list_medium_line_t3_right_iconx2_g1

0xe456,	// (0x00034195) list_medium_line_t3_right_iconx2_g2

0x9f25,	// (0x0002fc64) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd1e,	// (0x00035a5d) list_medium_line_t3_right_iconx2_g

0x9f2f,	// (0x0002fc6e) list_medium_line_t3_right_iconx2_t1

0x9f3f,	// (0x0002fc7e) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd25,	// (0x00035a64) list_medium_line_t3_right_iconx2_t

0x3547,	// (0x00029286) list_medium_line_x3_t4_g4_g1_ParamLimits

0x3547,	// (0x00029286) list_medium_line_x3_t4_g4_g1

0x3553,	// (0x00029292) list_medium_line_x3_t4_g4_g2_ParamLimits

0x3553,	// (0x00029292) list_medium_line_x3_t4_g4_g2

0x35fa,	// (0x00029339) list_medium_line_x3_t4_g4_g3_ParamLimits

0x35fa,	// (0x00029339) list_medium_line_x3_t4_g4_g3

0xe562,	// (0x000342a1) list_medium_line_x3_t4_g4_g4_ParamLimits

0xe562,	// (0x000342a1) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd2a,	// (0x00035a69) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd2a,	// (0x00035a69) list_medium_line_x3_t4_g4_g

0x9f4d,	// (0x0002fc8c) list_medium_line_x3_t4_g4_t1_ParamLimits

0x9f4d,	// (0x0002fc8c) list_medium_line_x3_t4_g4_t1

0x9f64,	// (0x0002fca3) list_medium_line_x3_t4_g4_t2_ParamLimits

0x9f64,	// (0x0002fca3) list_medium_line_x3_t4_g4_t2

0x4a14,	// (0x0002a753) list_medium_line_x3_t4_g4_t3_ParamLimits

0x4a14,	// (0x0002a753) list_medium_line_x3_t4_g4_t3

0xe56e,	// (0x000342ad) list_medium_line_x3_t4_g4_t4_ParamLimits

0xe56e,	// (0x000342ad) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd33,	// (0x00035a72) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd33,	// (0x00035a72) list_medium_line_x3_t4_g4_t

0x9f7f,	// (0x0002fcbe) list_single_dyc_row_text_pane_t1_ParamLimits

0x9f7f,	// (0x0002fcbe) list_single_dyc_row_text_pane_t1

0x9fc8,	// (0x0002fd07) list_single_dyc_row_text_pane_t2_ParamLimits

0x9fc8,	// (0x0002fd07) list_single_dyc_row_text_pane_t2

0xe58b,	// (0x000342ca) list_single_dyc_row_text_pane_t3_ParamLimits

0xe58b,	// (0x000342ca) list_single_dyc_row_text_pane_t3

0x0002,

0xfd3c,	// (0x00035a7b) list_single_dyc_row_text_pane_t_ParamLimits

0xfd3c,	// (0x00035a7b) list_single_dyc_row_text_pane_t

0xe59d,	// (0x000342dc) list_single_dyc_row_pane_g1_ParamLimits

0xe59d,	// (0x000342dc) list_single_dyc_row_pane_g1

0xe5a9,	// (0x000342e8) list_single_dyc_row_pane_g2_ParamLimits

0xe5a9,	// (0x000342e8) list_single_dyc_row_pane_g2

0xe5b5,	// (0x000342f4) list_single_dyc_row_pane_g3_ParamLimits

0xe5b5,	// (0x000342f4) list_single_dyc_row_pane_g3

0xe5c1,	// (0x00034300) list_single_dyc_row_pane_g4_ParamLimits

0xe5c1,	// (0x00034300) list_single_dyc_row_pane_g4

0x0003,

0xfd43,	// (0x00035a82) list_single_dyc_row_pane_g_ParamLimits

0xfd43,	// (0x00035a82) list_single_dyc_row_pane_g

0xe5cd,	// (0x0003430c) list_single_dyc_row_text_pane_ParamLimits

0xe5cd,	// (0x0003430c) list_single_dyc_row_text_pane

0x1fb7,	// (0x00027cf6) bg_sp_fs_scroll_pane

0xe5ec,	// (0x0003432b) thumb_sp_fs_scroll_pane

0xd353,	// (0x00033092) list_medium_line_g1_ParamLimits

0xd353,	// (0x00033092) list_medium_line_g1

0xe5f5,	// (0x00034334) list_medium_line_t1_ParamLimits

0xe5f5,	// (0x00034334) list_medium_line_t1

0x3547,	// (0x00029286) list_medium_line_x2_g1_ParamLimits

0x3547,	// (0x00029286) list_medium_line_x2_g1

0x3553,	// (0x00029292) list_medium_line_x2_g2_ParamLimits

0x3553,	// (0x00029292) list_medium_line_x2_g2

0x0001,

0xfd4c,	// (0x00035a8b) list_medium_line_x2_g_ParamLimits

0xfd4c,	// (0x00035a8b) list_medium_line_x2_g

0xe60a,	// (0x00034349) list_medium_line_x2_t1_ParamLimits

0xe60a,	// (0x00034349) list_medium_line_x2_t1

0x3547,	// (0x00029286) list_medium_line_x3_g1_ParamLimits

0x3547,	// (0x00029286) list_medium_line_x3_g1

0x3553,	// (0x00029292) list_medium_line_x3_g2_ParamLimits

0x3553,	// (0x00029292) list_medium_line_x3_g2

0x0001,

0xfd4c,	// (0x00035a8b) list_medium_line_x3_g_ParamLimits

0xfd4c,	// (0x00035a8b) list_medium_line_x3_g

0xe60a,	// (0x00034349) list_medium_line_x3_t1_ParamLimits

0xe60a,	// (0x00034349) list_medium_line_x3_t1

0xe620,	// (0x0003435f) thumb_sp_fs_scroll_pane_g1

0xe629,	// (0x00034368) thumb_sp_fs_scroll_pane_g2

0xe632,	// (0x00034371) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd51,	// (0x00035a90) thumb_sp_fs_scroll_pane_g

0xe620,	// (0x0003435f) bg_sp_fs_scroll_pane_g1

0xe629,	// (0x00034368) bg_sp_fs_scroll_pane_g2

0xe632,	// (0x00034371) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd51,	// (0x00035a90) bg_sp_fs_scroll_pane_g

0x3547,	// (0x00029286) list_medium_line_x2_t3_g4_g1_ParamLimits

0x3547,	// (0x00029286) list_medium_line_x2_t3_g4_g1

0x35ee,	// (0x0002932d) list_medium_line_x2_t3_g4_g2_ParamLimits

0x35ee,	// (0x0002932d) list_medium_line_x2_t3_g4_g2

0x3553,	// (0x00029292) list_medium_line_x2_t3_g4_g3_ParamLimits

0x3553,	// (0x00029292) list_medium_line_x2_t3_g4_g3

0x355f,	// (0x0002929e) list_medium_line_x2_t3_g4_g4_ParamLimits

0x355f,	// (0x0002929e) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2e6,	// (0x00035025) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2e6,	// (0x00035025) list_medium_line_x2_t3_g4_g

0xa022,	// (0x0002fd61) list_medium_line_x2_t3_g4_t1_ParamLimits

0xa022,	// (0x0002fd61) list_medium_line_x2_t3_g4_t1

0xa03c,	// (0x0002fd7b) list_medium_line_x2_t3_g4_t2_ParamLimits

0xa03c,	// (0x0002fd7b) list_medium_line_x2_t3_g4_t2

0x3594,	// (0x000292d3) list_medium_line_x2_t3_g4_t3_ParamLimits

0x3594,	// (0x000292d3) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd58,	// (0x00035a97) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd58,	// (0x00035a97) list_medium_line_x2_t3_g4_t

0xd353,	// (0x00033092) list_medium_line_g2_g1_ParamLimits

0xd353,	// (0x00033092) list_medium_line_g2_g1

0xd35f,	// (0x0003309e) list_medium_line_g2_g2_ParamLimits

0xd35f,	// (0x0003309e) list_medium_line_g2_g2

0x0001,

0xfa1f,	// (0x0003575e) list_medium_line_g2_g_ParamLimits

0xfa1f,	// (0x0003575e) list_medium_line_g2_g

0xe63b,	// (0x0003437a) list_medium_line_g2_t1_ParamLimits

0xe63b,	// (0x0003437a) list_medium_line_g2_t1

0xd353,	// (0x00033092) list_medium_line_t3_g2_g1_ParamLimits

0xd353,	// (0x00033092) list_medium_line_t3_g2_g1

0xd35f,	// (0x0003309e) list_medium_line_t3_g2_g2_ParamLimits

0xd35f,	// (0x0003309e) list_medium_line_t3_g2_g2

0x0001,

0xfa1f,	// (0x0003575e) list_medium_line_t3_g2_g_ParamLimits

0xfa1f,	// (0x0003575e) list_medium_line_t3_g2_g

0xa055,	// (0x0002fd94) list_medium_line_t3_g2_t1_ParamLimits

0xa055,	// (0x0002fd94) list_medium_line_t3_g2_t1

0xa06f,	// (0x0002fdae) list_medium_line_t3_g2_t2_ParamLimits

0xa06f,	// (0x0002fdae) list_medium_line_t3_g2_t2

0xa084,	// (0x0002fdc3) list_medium_line_t3_g2_t3_ParamLimits

0xa084,	// (0x0002fdc3) list_medium_line_t3_g2_t3

0x0002,

0xfd5f,	// (0x00035a9e) list_medium_line_t3_g2_t_ParamLimits

0xfd5f,	// (0x00035a9e) list_medium_line_t3_g2_t

0xe456,	// (0x00034195) list_medium_line_right_icon_g1

0xe650,	// (0x0003438f) list_medium_line_right_icon_t1

0xd353,	// (0x00033092) list_medium_line_t2_g1_ParamLimits

0xd353,	// (0x00033092) list_medium_line_t2_g1

0xa09e,	// (0x0002fddd) list_medium_line_t2_t1_ParamLimits

0xa09e,	// (0x0002fddd) list_medium_line_t2_t1

0xa0b8,	// (0x0002fdf7) list_medium_line_t2_t2_ParamLimits

0xa0b8,	// (0x0002fdf7) list_medium_line_t2_t2

0x0001,

0xfd66,	// (0x00035aa5) list_medium_line_t2_t_ParamLimits

0xfd66,	// (0x00035aa5) list_medium_line_t2_t

0xd353,	// (0x00033092) list_medium_line_t3_g1_ParamLimits

0xd353,	// (0x00033092) list_medium_line_t3_g1

0xa0d1,	// (0x0002fe10) list_medium_line_t3_t1_ParamLimits

0xa0d1,	// (0x0002fe10) list_medium_line_t3_t1

0xa0e8,	// (0x0002fe27) list_medium_line_t3_t2_ParamLimits

0xa0e8,	// (0x0002fe27) list_medium_line_t3_t2

0xa0fd,	// (0x0002fe3c) list_medium_line_t3_t3_ParamLimits

0xa0fd,	// (0x0002fe3c) list_medium_line_t3_t3

0x0002,

0xfd6b,	// (0x00035aaa) list_medium_line_t3_t_ParamLimits

0xfd6b,	// (0x00035aaa) list_medium_line_t3_t

0xd353,	// (0x00033092) list_medium_line_g3_g1_ParamLimits

0xd353,	// (0x00033092) list_medium_line_g3_g1

0xe65e,	// (0x0003439d) list_medium_line_g3_g2_ParamLimits

0xe65e,	// (0x0003439d) list_medium_line_g3_g2

0xd35f,	// (0x0003309e) list_medium_line_g3_g3_ParamLimits

0xd35f,	// (0x0003309e) list_medium_line_g3_g3

0x0002,

0xfd72,	// (0x00035ab1) list_medium_line_g3_g_ParamLimits

0xfd72,	// (0x00035ab1) list_medium_line_g3_g

0xe66a,	// (0x000343a9) list_medium_line_g3_t1_ParamLimits

0xe66a,	// (0x000343a9) list_medium_line_g3_t1

0xd353,	// (0x00033092) list_medium_line_t2_g3_g1_ParamLimits

0xd353,	// (0x00033092) list_medium_line_t2_g3_g1

0xe65e,	// (0x0003439d) list_medium_line_t2_g3_g2_ParamLimits

0xe65e,	// (0x0003439d) list_medium_line_t2_g3_g2

0xd35f,	// (0x0003309e) list_medium_line_t2_g3_g3_ParamLimits

0xd35f,	// (0x0003309e) list_medium_line_t2_g3_g3

0x0002,

0xfd72,	// (0x00035ab1) list_medium_line_t2_g3_g_ParamLimits

0xfd72,	// (0x00035ab1) list_medium_line_t2_g3_g

0xa10f,	// (0x0002fe4e) list_medium_line_t2_g3_t1_ParamLimits

0xa10f,	// (0x0002fe4e) list_medium_line_t2_g3_t1

0xa126,	// (0x0002fe65) list_medium_line_t2_g3_t2_ParamLimits

0xa126,	// (0x0002fe65) list_medium_line_t2_g3_t2

0x0001,

0xfd79,	// (0x00035ab8) list_medium_line_t2_g3_t_ParamLimits

0xfd79,	// (0x00035ab8) list_medium_line_t2_g3_t

0xd353,	// (0x00033092) list_medium_line_t3_g3_g1_ParamLimits

0xd353,	// (0x00033092) list_medium_line_t3_g3_g1

0xe65e,	// (0x0003439d) list_medium_line_t3_g3_g2_ParamLimits

0xe65e,	// (0x0003439d) list_medium_line_t3_g3_g2

0xd35f,	// (0x0003309e) list_medium_line_t3_g3_g3_ParamLimits

0xd35f,	// (0x0003309e) list_medium_line_t3_g3_g3

0x0002,

0xfd72,	// (0x00035ab1) list_medium_line_t3_g3_g_ParamLimits

0xfd72,	// (0x00035ab1) list_medium_line_t3_g3_g

0xa141,	// (0x0002fe80) list_medium_line_t3_g3_t1_ParamLimits

0xa141,	// (0x0002fe80) list_medium_line_t3_g3_t1

0xa155,	// (0x0002fe94) list_medium_line_t3_g3_t2_ParamLimits

0xa155,	// (0x0002fe94) list_medium_line_t3_g3_t2

0xa167,	// (0x0002fea6) list_medium_line_t3_g3_t3_ParamLimits

0xa167,	// (0x0002fea6) list_medium_line_t3_g3_t3

0x0002,

0xfd7e,	// (0x00035abd) list_medium_line_t3_g3_t_ParamLimits

0xfd7e,	// (0x00035abd) list_medium_line_t3_g3_t

0xe55a,	// (0x00034299) list_medium_line_right_iconx2_g1

0xe456,	// (0x00034195) list_medium_line_right_iconx2_g2

0x0001,

0xfd85,	// (0x00035ac4) list_medium_line_right_iconx2_g

0xe67f,	// (0x000343be) list_medium_line_right_iconx2_t1

0xe55a,	// (0x00034299) list_medium_line_t2_right_iconx2_g1

0xe456,	// (0x00034195) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd85,	// (0x00035ac4) list_medium_line_t2_right_iconx2_g

0xa17b,	// (0x0002feba) list_medium_line_t2_right_iconx2_t1

0xa18b,	// (0x0002feca) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd8a,	// (0x00035ac9) list_medium_line_t2_right_iconx2_t

0xe68d,	// (0x000343cc) list_medium_line_x4_t4_t1

0xa19d,	// (0x0002fedc) list_medium_line_x4_t4_t2

0xa1ad,	// (0x0002feec) list_medium_line_x4_t4_t3

0xa1bd,	// (0x0002fefc) list_medium_line_x4_t4_t4

0x0003,

0xfd8f,	// (0x00035ace) list_medium_line_x4_t4_t

0xa210,	// (0x0002ff4f) tport_appsw_pane_ParamLimits

0xa210,	// (0x0002ff4f) tport_appsw_pane

0xa221,	// (0x0002ff60) tport_contact_pane_ParamLimits

0xa221,	// (0x0002ff60) tport_contact_pane

0xa23a,	// (0x0002ff79) tport_listscroll_pane_ParamLimits

0xa23a,	// (0x0002ff79) tport_listscroll_pane

0xa255,	// (0x0002ff94) cell_tport_appsw_pane_ParamLimits

0xa255,	// (0x0002ff94) cell_tport_appsw_pane

0xd026,	// (0x00032d65) tport_appsw_pane_g1_ParamLimits

0xd026,	// (0x00032d65) tport_appsw_pane_g1

0xe69b,	// (0x000343da) tport_contact_pane_g1

0xe6a4,	// (0x000343e3) tport_contact_pane_t1

0xe6b2,	// (0x000343f1) tport_contact_pane_t2

0x0001,

0xfd98,	// (0x00035ad7) tport_contact_pane_t

0xe6c0,	// (0x000343ff) list_tport_pane

0xe6c9,	// (0x00034408) scroll_pane_cp_030

0xe6da,	// (0x00034419) cell_tport_appsw_pane_g1

0xe6ea,	// (0x00034429) cell_tport_appsw_pane_t1

0x1fb7,	// (0x00027cf6) grid_highlight_pane_cp019

0xa295,	// (0x0002ffd4) list_tport_double_graphic_pane_ParamLimits

0xa295,	// (0x0002ffd4) list_tport_double_graphic_pane

0x2229,	// (0x00027f68) list_highlight_pane_cp023_ParamLimits

0x2229,	// (0x00027f68) list_highlight_pane_cp023

0xa2a2,	// (0x0002ffe1) list_tport_double_graphic_pane_g1_ParamLimits

0xa2a2,	// (0x0002ffe1) list_tport_double_graphic_pane_g1

0xa2af,	// (0x0002ffee) list_tport_double_graphic_pane_t1_ParamLimits

0xa2af,	// (0x0002ffee) list_tport_double_graphic_pane_t1

0xa2c4,	// (0x00030003) list_tport_double_graphic_pane_t2_ParamLimits

0xa2c4,	// (0x00030003) list_tport_double_graphic_pane_t2

0x0001,

0xfda4,	// (0x00035ae3) list_tport_double_graphic_pane_t_ParamLimits

0xfda4,	// (0x00035ae3) list_tport_double_graphic_pane_t

0x1fb7,	// (0x00027cf6) main_cale_note_pane

0x1ca9,	// (0x000279e8) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x1ca9,	// (0x000279e8) cell_vitu2_function_top_wide_pane_cp01

0x999a,	// (0x0002f6d9) wait_bar_pane_cp05_ParamLimits

0x1fb7,	// (0x00027cf6) listscroll_cmail_pane

0xe700,	// (0x0003443f) list_cmail_pane

0xa2e0,	// (0x0003001f) list_cmail_body_pane

0xa2f5,	// (0x00030034) list_single_cmail_header_caption_pane

0xa30e,	// (0x0003004d) list_single_cmail_header_detail_pane_ParamLimits

0xa30e,	// (0x0003004d) list_single_cmail_header_detail_pane

0xa337,	// (0x00030076) list_single_cmail_header_caption_pane_t1

0xa347,	// (0x00030086) list_single_cmail_header_detail_pane_g1_ParamLimits

0xa347,	// (0x00030086) list_single_cmail_header_detail_pane_g1

0xe720,	// (0x0003445f) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe720,	// (0x0003445f) list_single_cmail_header_detail_pane_g2

0x0002,

0xfda9,	// (0x00035ae8) list_single_cmail_header_detail_pane_g_ParamLimits

0xfda9,	// (0x00035ae8) list_single_cmail_header_detail_pane_g

0xe739,	// (0x00034478) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe739,	// (0x00034478) list_single_cmail_header_detail_pane_t1

0xe76b,	// (0x000344aa) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe76b,	// (0x000344aa) list_single_cmail_header_editor_pane_bg

0xe77d,	// (0x000344bc) list_cmail_body_pane_g1

0xe786,	// (0x000344c5) list_cmail_body_pane_t1

0xd0a2,	// (0x00032de1) list_single_cmail_header_editor_pane_bg_g1

0x3ca9,	// (0x000299e8) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd0b2,	// (0x00032df1) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd0aa,	// (0x00032de9) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd32b,	// (0x0003306a) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd0d2,	// (0x00032e11) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd0c2,	// (0x00032e01) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd0ca,	// (0x00032e09) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x3c89,	// (0x000299c8) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xa385,	// (0x000300c4) calenote_gesture_pane_ParamLimits

0xa385,	// (0x000300c4) calenote_gesture_pane

0xa3a5,	// (0x000300e4) calenote_window_pane_ParamLimits

0xa3a5,	// (0x000300e4) calenote_window_pane

0xe794,	// (0x000344d3) popup_note_window_cp01

0xa3c1,	// (0x00030100) calenote_swipe_1_pane_ParamLimits

0xa3c1,	// (0x00030100) calenote_swipe_1_pane

0x9da7,	// (0x0002fae6) calenote_swipe_2_pane_ParamLimits

0x9da7,	// (0x0002fae6) calenote_swipe_2_pane

0xe35b,	// (0x0003409a) calenote_swipe_1_pane_g1_ParamLimits

0xe35b,	// (0x0003409a) calenote_swipe_1_pane_g1

0xe368,	// (0x000340a7) calenote_swipe_1_pane_g2_ParamLimits

0xe368,	// (0x000340a7) calenote_swipe_1_pane_g2

0x0001,

0xfcdd,	// (0x00035a1c) calenote_swipe_1_pane_g_ParamLimits

0xfcdd,	// (0x00035a1c) calenote_swipe_1_pane_g

0xe7a6,	// (0x000344e5) calenote_swipe_1_pane_t1_ParamLimits

0xe7a6,	// (0x000344e5) calenote_swipe_1_pane_t1

0xe35b,	// (0x0003409a) calenote_swipe_2_pane_g1_ParamLimits

0xe35b,	// (0x0003409a) calenote_swipe_2_pane_g1

0xe7c5,	// (0x00034504) calenote_swipe_2_pane_g2_ParamLimits

0xe7c5,	// (0x00034504) calenote_swipe_2_pane_g2

0x0001,

0xfdb5,	// (0x00035af4) calenote_swipe_2_pane_g_ParamLimits

0xfdb5,	// (0x00035af4) calenote_swipe_2_pane_g

0xe7d1,	// (0x00034510) calenote_swipe_2_pane_t1_ParamLimits

0xe7d1,	// (0x00034510) calenote_swipe_2_pane_t1

0x1fb7,	// (0x00027cf6) main_mup_navstr_pane

0x77da,	// (0x0002d519) main_mup3_pane_t7_ParamLimits

0x77da,	// (0x0002d519) main_mup3_pane_t7

0xcc0d,	// (0x0003294c) main_mp4_pane_g6_ParamLimits

0xcc0d,	// (0x0003294c) main_mp4_pane_g6

0xce3f,	// (0x00032b7e) main_image3_pane_t4_ParamLimits

0xce3f,	// (0x00032b7e) main_image3_pane_t4

0xa3d6,	// (0x00030115) popup_navstr_preview_pane_ParamLimits

0xa3d6,	// (0x00030115) popup_navstr_preview_pane

0xa3ea,	// (0x00030129) scroll_navstr_pane_ParamLimits

0xa3ea,	// (0x00030129) scroll_navstr_pane

0x1fb7,	// (0x00027cf6) bg_popup_preview_window_pane_cp04

0xe7f8,	// (0x00034537) popup_navstr_preview_pane_t1

0xa3fe,	// (0x0003013d) scroll_navstr_pane_g1_ParamLimits

0xa3fe,	// (0x0003013d) scroll_navstr_pane_g1

0xa412,	// (0x00030151) scroll_navstr_pane_t1_ParamLimits

0xa412,	// (0x00030151) scroll_navstr_pane_t1

0xe79d,	// (0x000344dc) bg_button_pane_cp014

0xe79d,	// (0x000344dc) bg_button_pane_cp030

0xe2fc,	// (0x0003403b) list_double_fisheye_pane_g4_ParamLimits

0xe2fc,	// (0x0003403b) list_double_fisheye_pane_g4

0xe308,	// (0x00034047) list_double_fisheye_pane_g5_ParamLimits

0xe308,	// (0x00034047) list_double_fisheye_pane_g5

0xe708,	// (0x00034447) sp_fs_scroll_pane_cp03

0x3547,	// (0x00029286) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe496,	// (0x000341d5) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcfa,	// (0x00035a39) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe4a2,	// (0x000341e1) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xa2d6,	// (0x00030015) sp_fs_scroll_pane_cp02

0x2e67,	// (0x00028ba6) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x2e67,	// (0x00028ba6) popup_sp_fs_calendar_preview_list_single_pane

0x1fb7,	// (0x00027cf6) main_cam6_pano_pane

0x2229,	// (0x00027f68) main_mup3_pane_ParamLimits

0x1fb7,	// (0x00027cf6) main_phacti_pane

0x986d,	// (0x0002f5ac) bg_button_pane_cp11

0x9887,	// (0x0002f5c6) main_mobtv_info_pane_g2_ParamLimits

0x9887,	// (0x0002f5c6) main_mobtv_info_pane_g2

0x0001,

0xfc5a,	// (0x00035999) main_mobtv_info_pane_g_ParamLimits

0xfc5a,	// (0x00035999) main_mobtv_info_pane_g

0x9a62,	// (0x0002f7a1) sc_clock_pane_t5_ParamLimits

0x9a62,	// (0x0002f7a1) sc_clock_pane_t5

0x9ae7,	// (0x0002f826) main_radioblah_pane_g1_ParamLimits

0xe261,	// (0x00033fa0) main_radioblah_pane_t3_ParamLimits

0xe261,	// (0x00033fa0) main_radioblah_pane_t3

0xe279,	// (0x00033fb8) main_radioblah_pane_t4_ParamLimits

0xe279,	// (0x00033fb8) main_radioblah_pane_t4

0x9b0f,	// (0x0002f84e) main_radioblah_text_pane_ParamLimits

0x9b0f,	// (0x0002f84e) main_radioblah_text_pane

0x9b21,	// (0x0002f860) main_radioblah_info_pane_g1_ParamLimits

0x9bbc,	// (0x0002f8fb) main_radioblah_info_pane_t4_ParamLimits

0x9bbc,	// (0x0002f8fb) main_radioblah_info_pane_t4

0x2229,	// (0x00027f68) main_sp_fs_calendar_pane

0xa428,	// (0x00030167) main_phacti_pane_g1

0xa430,	// (0x0003016f) phacti_note_pane_ParamLimits

0xa430,	// (0x0003016f) phacti_note_pane

0xe80f,	// (0x0003454e) phacti_term_pane_ParamLimits

0xe80f,	// (0x0003454e) phacti_term_pane

0xe824,	// (0x00034563) phacti_note_pane_t1_ParamLimits

0xe824,	// (0x00034563) phacti_note_pane_t1

0xe83b,	// (0x0003457a) phacti_term_pane_g1

0xe843,	// (0x00034582) phacti_term_pane_t1_ParamLimits

0xe843,	// (0x00034582) phacti_term_pane_t1

0xe86d,	// (0x000345ac) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe875,	// (0x000345b4) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdbf,	// (0x00035afe) popup_sp_fs_calendar_preview_list_single_pane_g

0xe87d,	// (0x000345bc) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe87d,	// (0x000345bc) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe893,	// (0x000345d2) aid_popup_sp_fs_bg_corner_pane

0xc2b2,	// (0x00031ff1) popup_sp_fs_calendar_preview_bg_pane_g1

0x1fb7,	// (0x00027cf6) popup_sp_fs_calendar_preview_bg_pane

0xe89b,	// (0x000345da) popup_sp_fs_calendar_preview_list_pane

0x2229,	// (0x00027f68) bg_main_sp_fs_cale_pane_ParamLimits

0x2229,	// (0x00027f68) bg_main_sp_fs_cale_pane

0xe8ac,	// (0x000345eb) listscroll_cale_mrui_pane_ParamLimits

0xe8ac,	// (0x000345eb) listscroll_cale_mrui_pane

0xe8c0,	// (0x000345ff) listscroll_sp_fs_schedule_track_pane

0xe8c9,	// (0x00034608) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe8c9,	// (0x00034608) main_sp_fs_ctrlbar_pane_cp01

0xe8da,	// (0x00034619) main_sp_fs_ribbon_pane

0xe8e2,	// (0x00034621) popup_sp_fs_cale_preview_window

0xa48b,	// (0x000301ca) list_single_sp_fs_schedule_track_pane_ParamLimits

0xa48b,	// (0x000301ca) list_single_sp_fs_schedule_track_pane

0x2229,	// (0x00027f68) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x2229,	// (0x00027f68) bg_sp_fs_highlight_list_pane_cp03

0xa4a0,	// (0x000301df) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xa4a0,	// (0x000301df) list_single_sp_fs_schedule_track_pane_g1

0xa4ac,	// (0x000301eb) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xa4ac,	// (0x000301eb) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdc4,	// (0x00035b03) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdc4,	// (0x00035b03) list_single_sp_fs_schedule_track_pane_g

0xa4b8,	// (0x000301f7) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xa4b8,	// (0x000301f7) list_single_sp_fs_schedule_track_pane_t1

0xa4d2,	// (0x00030211) sp_fs_schedule_track_pane_ParamLimits

0xa4d2,	// (0x00030211) sp_fs_schedule_track_pane

0xe8f4,	// (0x00034633) sp_fs_schedule_track_pane_g1

0xe8fc,	// (0x0003463b) sp_fs_schedule_track_pane_g2

0xe904,	// (0x00034643) sp_fs_schedule_track_pane_g3

0xe90c,	// (0x0003464b) sp_fs_schedule_track_pane_g4

0xe914,	// (0x00034653) sp_fs_schedule_track_pane_g5

0x0004,

0xfdc9,	// (0x00035b08) sp_fs_schedule_track_pane_g

0xd0a2,	// (0x00032de1) bg_sp_fs_schedule_viewer_highlight_g1

0x3ca9,	// (0x000299e8) bg_sp_fs_schedule_viewer_highlight_g2

0xd0aa,	// (0x00032de9) bg_sp_fs_schedule_viewer_highlight_g3

0xd0b2,	// (0x00032df1) bg_sp_fs_schedule_viewer_highlight_g4

0xd32b,	// (0x0003306a) bg_sp_fs_schedule_viewer_highlight_g5

0xd0c2,	// (0x00032e01) bg_sp_fs_schedule_viewer_highlight_g6

0xd0ca,	// (0x00032e09) bg_sp_fs_schedule_viewer_highlight_g7

0xd0d2,	// (0x00032e11) bg_sp_fs_schedule_viewer_highlight_g8

0x3c89,	// (0x000299c8) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdd4,	// (0x00035b13) bg_sp_fs_schedule_viewer_highlight_g

0x1fb7,	// (0x00027cf6) bg_main_sp_fs_ribbon_pane

0xa4e3,	// (0x00030222) main_sp_fs_ribbon_pane_g1

0xe91c,	// (0x0003465b) main_sp_fs_ribbon_pane_t1

0xa4ec,	// (0x0003022b) main_sp_fs_ribbon_pane_t2

0xe92b,	// (0x0003466a) main_sp_fs_ribbon_pane_t3

0x0002,

0xfde7,	// (0x00035b26) main_sp_fs_ribbon_pane_t

0xe93a,	// (0x00034679) main_sp_fs_ribbon_scheduler_pane

0xe942,	// (0x00034681) bg_main_sp_fs_ribbon_pane_g1

0xe94b,	// (0x0003468a) bg_main_sp_fs_ribbon_pane_g2

0xe954,	// (0x00034693) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdee,	// (0x00035b2d) bg_main_sp_fs_ribbon_pane_g

0xe95c,	// (0x0003469b) main_sp_fs_ribbon_scheduler_pane_g1

0xe965,	// (0x000346a4) main_sp_fs_ribbon_scheduler_pane_g2

0xe96e,	// (0x000346ad) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdf5,	// (0x00035b34) main_sp_fs_ribbon_scheduler_pane_g

0xe977,	// (0x000346b6) list_cale_mrui_pane

0xa4fb,	// (0x0003023a) sp_fs_scroll_pane_cp07_ParamLimits

0xa4fb,	// (0x0003023a) sp_fs_scroll_pane_cp07

0xa50f,	// (0x0003024e) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xa50f,	// (0x0003024e) bg_sp_fs_schedule_viewer_highlight

0xe980,	// (0x000346bf) list_single_sp_fs_schedule_track_pane_cp01

0xe988,	// (0x000346c7) list_sp_fs_schedule_track_pane

0xe990,	// (0x000346cf) sp_fs_scroll_pane_cp06_ParamLimits

0xe990,	// (0x000346cf) sp_fs_scroll_pane_cp06

0xc2b2,	// (0x00031ff1) bgmain_sp_fs_calendar_pane_g1

0xa51f,	// (0x0003025e) list_single_cale_mrui_pane_ParamLimits

0xa51f,	// (0x0003025e) list_single_cale_mrui_pane

0xe9a2,	// (0x000346e1) list_single_cale_mrui_row_pane_ParamLimits

0xe9a2,	// (0x000346e1) list_single_cale_mrui_row_pane

0xe9af,	// (0x000346ee) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe9af,	// (0x000346ee) list_single_cale_mrui_row_pane_g1

0xe9e7,	// (0x00034726) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe9e7,	// (0x00034726) list_single_cale_mrui_row_pane_t1

0xa541,	// (0x00030280) list_single_cale_mrui_row_pane_t2_ParamLimits

0xa541,	// (0x00030280) list_single_cale_mrui_row_pane_t2

0xe9f9,	// (0x00034738) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe9f9,	// (0x00034738) list_single_cale_mrui_row_pane_t3

0xea28,	// (0x00034767) list_single_cale_mrui_row_pane_t4_ParamLimits

0xea28,	// (0x00034767) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe01,	// (0x00035b40) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe01,	// (0x00035b40) list_single_cale_mrui_row_pane_t

0xa5a9,	// (0x000302e8) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xa5a9,	// (0x000302e8) list_single_cmail_header_editor_pane_bg_cp01

0xa5cf,	// (0x0003030e) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xa5cf,	// (0x0003030e) list_single_cmail_header_editor_pane_bg_cp02

0xa5ef,	// (0x0003032e) main_radioblah_text_pane_t1_ParamLimits

0xa5ef,	// (0x0003032e) main_radioblah_text_pane_t1

0xea57,	// (0x00034796) cam6_indi_pane_cp01

0xea5f,	// (0x0003479e) cam6_mode_pane_cp01

0xea67,	// (0x000347a6) cam6_pano_pane

0xea70,	// (0x000347af) cam6_zoom_pane_cp01

0xea78,	// (0x000347b7) cam6_pano_image_pane

0xea83,	// (0x000347c2) cam6_pano_pane_g1

0xdfd9,	// (0x00033d18) cam6_pano_pane_g2

0xea8c,	// (0x000347cb) cam6_pano_pane_g3

0xea95,	// (0x000347d4) cam6_pano_pane_g4

0xc870,	// (0x000325af) cam6_pano_pane_g5

0xea9e,	// (0x000347dd) cam6_pano_pane_g6

0xeaa8,	// (0x000347e7) cam6_pano_pane_g7

0xeab0,	// (0x000347ef) cam6_pano_pane_g8

0xeab9,	// (0x000347f8) cam6_pano_pane_g9

0x0008,

0xfe0a,	// (0x00035b49) cam6_pano_pane_g

0x1fb7,	// (0x00027cf6) main_browser_tag_pane

0xe7f0,	// (0x0003452f) grid_navstr_albumart_pane

0xeac4,	// (0x00034803) cell_navstr_albumart_pane_ParamLimits

0xeac4,	// (0x00034803) cell_navstr_albumart_pane

0x5770,	// (0x0002b4af) cell_navstr_albumart_pane_g1

0xbbbf,	// (0x000318fe) cell_navstr_albumart_pane_g2

0xbbcf,	// (0x0003190e) cell_navstr_albumart_pane_g3

0xbbc7,	// (0x00031906) cell_navstr_albumart_pane_g4

0x0003,

0xfe1d,	// (0x00035b5c) cell_navstr_albumart_pane_g

0xa60a,	// (0x00030349) bt_list_pane_ParamLimits

0xa60a,	// (0x00030349) bt_list_pane

0xa61f,	// (0x0003035e) bt_list_pane_t1

0xa62e,	// (0x0003036d) bt_list_pane_t2

0x0001,

0xfe26,	// (0x00035b65) bt_list_pane_t

0x1fb7,	// (0x00027cf6) main_cale_prevew_pane

0xa63d,	// (0x0003037c) popup_cale_preview_window_ParamLimits

0xa63d,	// (0x0003037c) popup_cale_preview_window

0x2229,	// (0x00027f68) bg_popup_preview_window_pane_cp05_ParamLimits

0x2229,	// (0x00027f68) bg_popup_preview_window_pane_cp05

0xeae6,	// (0x00034825) list_cale_preview_pane_ParamLimits

0xeae6,	// (0x00034825) list_cale_preview_pane

0xa654,	// (0x00030393) list_double_cale_preview_pane_ParamLimits

0xa654,	// (0x00030393) list_double_cale_preview_pane

0xa666,	// (0x000303a5) list_single_cale_preview_pane_ParamLimits

0xa666,	// (0x000303a5) list_single_cale_preview_pane

0xa67a,	// (0x000303b9) list_single_cale_preview_pane_g1

0xa682,	// (0x000303c1) list_single_cale_preview_pane_t1_ParamLimits

0xa682,	// (0x000303c1) list_single_cale_preview_pane_t1

0xa697,	// (0x000303d6) list_double_cale_preview_pane_g1

0xa69f,	// (0x000303de) list_double_cale_preview_pane_t1_ParamLimits

0xa69f,	// (0x000303de) list_double_cale_preview_pane_t1

0xa6b4,	// (0x000303f3) list_double_cale_preview_pane_t2_ParamLimits

0xa6b4,	// (0x000303f3) list_double_cale_preview_pane_t2

0x0001,

0xfe2b,	// (0x00035b6a) list_double_cale_preview_pane_t_ParamLimits

0xfe2b,	// (0x00035b6a) list_double_cale_preview_pane_t

0x1fb7,	// (0x00027cf6) main_ezdial_pane

0x2229,	// (0x00027f68) main_sp_fs_email_pane_ParamLimits

0x9de1,	// (0x0002fb20) cmail_ddmenu_btn01_pane_ParamLimits

0x9de1,	// (0x0002fb20) cmail_ddmenu_btn01_pane

0x9df4,	// (0x0002fb33) cmail_ddmenu_btn02_pane_ParamLimits

0x9df4,	// (0x0002fb33) cmail_ddmenu_btn02_pane

0x9e17,	// (0x0002fb56) cmail_ddmenu_btn03_pane_ParamLimits

0x9e17,	// (0x0002fb56) cmail_ddmenu_btn03_pane

0x9e3d,	// (0x0002fb7c) main_sp_fs_ctrlbar_pane_ParamLimits

0x9e61,	// (0x0002fba0) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xa2e0,	// (0x0003001f) list_cmail_body_pane_ParamLimits

0xe717,	// (0x00034456) bg_button_pane_cp12

0xe72c,	// (0x0003446b) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe72c,	// (0x0003446b) list_single_cmail_header_detail_pane_g3

0xa35f,	// (0x0003009e) list_single_cmail_header_detail_pane_t2_ParamLimits

0xa35f,	// (0x0003009e) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdb0,	// (0x00035aef) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdb0,	// (0x00035aef) list_single_cmail_header_detail_pane_t

0xe858,	// (0x00034597) phacti_term_pane_t2_ParamLimits

0xe858,	// (0x00034597) phacti_term_pane_t2

0x0001,

0xfdba,	// (0x00035af9) phacti_term_pane_t_ParamLimits

0xfdba,	// (0x00035af9) phacti_term_pane_t

0xeaf2,	// (0x00034831) aid_size_list_single_double

0xa6cc,	// (0x0003040b) popup_ezdial_listscroll_window

0xa6e8,	// (0x00030427) popup_number_entry_window_cp01

0x51d5,	// (0x0002af14) bg_popup_call_pane_cp09

0xeafe,	// (0x0003483d) ezdial_list_pane

0xeb06,	// (0x00034845) scroll_pane_cp23

0xbdaa,	// (0x00031ae9) bg_button_pane_cp028_ParamLimits

0xbdaa,	// (0x00031ae9) bg_button_pane_cp028

0xa6f6,	// (0x00030435) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xa6f6,	// (0x00030435) cmail_ddmenu_btn01_pane_g1

0xa702,	// (0x00030441) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xa702,	// (0x00030441) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe30,	// (0x00035b6f) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe30,	// (0x00035b6f) cmail_ddmenu_btn01_pane_g

0xeb0e,	// (0x0003484d) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeb0e,	// (0x0003484d) cmail_ddmenu_btn01_pane_t1

0xbdaa,	// (0x00031ae9) bg_button_pane_cp029_ParamLimits

0xbdaa,	// (0x00031ae9) bg_button_pane_cp029

0xa70e,	// (0x0003044d) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xa70e,	// (0x0003044d) cmail_ddmenu_btn02_pane_g1

0xa726,	// (0x00030465) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xa726,	// (0x00030465) cmail_ddmenu_btn02_pane_t1

0x2229,	// (0x00027f68) bg_button_pane_cp031_ParamLimits

0x2229,	// (0x00027f68) bg_button_pane_cp031

0xa70e,	// (0x0003044d) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xa70e,	// (0x0003044d) cmail_ddmenu_btn03_pane_g1

0xa726,	// (0x00030465) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xa726,	// (0x00030465) cmail_ddmenu_btn03_pane_t1

0x8186,	// (0x0002dec5) cell_dialer2_keypad_pane_t1_ParamLimits

0x81a0,	// (0x0002dedf) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x81a0,	// (0x0002dedf) cell_dialer2_keypad_pane_t1_copy1

0x96ef,	// (0x0002f42e) ncimui_group_button_pane

0x2229,	// (0x00027f68) main_sp_fs_calendar_pane_ParamLimits

0xa2f5,	// (0x00030034) list_single_cmail_header_caption_pane_ParamLimits

0xe8a3,	// (0x000345e2) aid_recal_txt_sm_pane

0x1fb7,	// (0x00027cf6) mian_recal_day_pane

0xe8e2,	// (0x00034621) popup_sp_fs_cale_preview_window_ParamLimits

0x1fb7,	// (0x00027cf6) list_recal_day_pane

0xeb45,	// (0x00034884) list_single_recal_day_pane_ParamLimits

0xeb45,	// (0x00034884) list_single_recal_day_pane

0xeb57,	// (0x00034896) list_single_recal_day_pane_g1_ParamLimits

0xeb57,	// (0x00034896) list_single_recal_day_pane_g1

0xeb63,	// (0x000348a2) list_single_recal_day_pane_g2_ParamLimits

0xeb63,	// (0x000348a2) list_single_recal_day_pane_g2

0xeb72,	// (0x000348b1) list_single_recal_day_pane_g3_ParamLimits

0xeb72,	// (0x000348b1) list_single_recal_day_pane_g3

0xa74a,	// (0x00030489) list_single_recal_day_pane_g4_ParamLimits

0xa74a,	// (0x00030489) list_single_recal_day_pane_g4

0xeb7e,	// (0x000348bd) list_single_recal_day_pane_g5_ParamLimits

0xeb7e,	// (0x000348bd) list_single_recal_day_pane_g5

0xeb8d,	// (0x000348cc) list_single_recal_day_pane_g6_ParamLimits

0xeb8d,	// (0x000348cc) list_single_recal_day_pane_g6

0x0005,

0xfe3f,	// (0x00035b7e) list_single_recal_day_pane_g_ParamLimits

0xfe3f,	// (0x00035b7e) list_single_recal_day_pane_g

0xeb99,	// (0x000348d8) list_single_recal_day_pane_t1

0xeba7,	// (0x000348e6) list_single_recal_day_pane_t2

0x0001,

0xfe4c,	// (0x00035b8b) list_single_recal_day_pane_t

0xa75d,	// (0x0003049c) ncimui_query_button_pane_ParamLimits

0xa75d,	// (0x0003049c) ncimui_query_button_pane

0xa76d,	// (0x000304ac) ncimui_query_button_pane_t1_ParamLimits

0xa76d,	// (0x000304ac) ncimui_query_button_pane_t1

0xebb5,	// (0x000348f4) ncimui_query_button_pane_t2_ParamLimits

0xebb5,	// (0x000348f4) ncimui_query_button_pane_t2

0x0001,

0xfe51,	// (0x00035b90) ncimui_query_button_pane_t_ParamLimits

0xfe51,	// (0x00035b90) ncimui_query_button_pane_t

0xa780,	// (0x000304bf) query_button_pane_ParamLimits

0xa780,	// (0x000304bf) query_button_pane

0x1fb7,	// (0x00027cf6) bg_button_pane_cp0028

0xebc8,	// (0x00034907) query_button_pane_t1

0x690d,	// (0x0002c64c) main_tport_pane_ParamLimits

0xa1cd,	// (0x0002ff0c) bg_popup_window_pane_cp01_ParamLimits

0xa1cd,	// (0x0002ff0c) bg_popup_window_pane_cp01

0xa1e7,	// (0x0002ff26) heading_pane_cp08_ParamLimits

0xa1e7,	// (0x0002ff26) heading_pane_cp08

0xa1fb,	// (0x0002ff3a) heading_pane_cp07_ParamLimits

0xa1fb,	// (0x0002ff3a) heading_pane_cp07

0xe6da,	// (0x00034419) cell_tport_appsw_pane_g2

0x0002,

0xfd9d,	// (0x00035adc) cell_tport_appsw_pane_g

0x5768,	// (0x0002b4a7) input_candi_list_open_g1

0x4791,	// (0x0002a4d0) list_cale_time_pane_g6_ParamLimits

0x4791,	// (0x0002a4d0) list_cale_time_pane_g6

0x71fb,	// (0x0002cf3a) aid_size_touch_calib_1_ParamLimits

0x71fb,	// (0x0002cf3a) aid_size_touch_calib_1

0x7207,	// (0x0002cf46) aid_size_touch_calib_2_ParamLimits

0x7207,	// (0x0002cf46) aid_size_touch_calib_2

0x721d,	// (0x0002cf5c) aid_size_touch_calib_3_ParamLimits

0x721d,	// (0x0002cf5c) aid_size_touch_calib_3

0x723b,	// (0x0002cf7a) aid_size_touch_calib_4_ParamLimits

0x723b,	// (0x0002cf7a) aid_size_touch_calib_4

0x7251,	// (0x0002cf90) main_touch_calib_button_group_pane_ParamLimits

0x7251,	// (0x0002cf90) main_touch_calib_button_group_pane

0x7269,	// (0x0002cfa8) main_touch_calib_pane_g1_ParamLimits

0x7275,	// (0x0002cfb4) main_touch_calib_pane_g2_ParamLimits

0x7281,	// (0x0002cfc0) main_touch_calib_pane_g3_ParamLimits

0x728d,	// (0x0002cfcc) main_touch_calib_pane_g4_ParamLimits

0xf775,	// (0x000354b4) main_touch_calib_pane_g_ParamLimits

0x7299,	// (0x0002cfd8) main_touch_calib_pane_t1_ParamLimits

0x72b3,	// (0x0002cff2) main_touch_calib_pane_t2_ParamLimits

0x72cd,	// (0x0002d00c) main_touch_calib_pane_t3_ParamLimits

0x72e1,	// (0x0002d020) main_touch_calib_pane_t4_ParamLimits

0x72f5,	// (0x0002d034) main_touch_calib_pane_t5_ParamLimits

0xf77e,	// (0x000354bd) main_touch_calib_pane_t_ParamLimits

0xc657,	// (0x00032396) list_single_fp_cale_pane_g3_ParamLimits

0xc657,	// (0x00032396) list_single_fp_cale_pane_g3

0xd08a,	// (0x00032dc9) bg_button_pane_cp012_ParamLimits

0xd08a,	// (0x00032dc9) bg_vkb2_func_pane_cp03_ParamLimits

0x1ea7,	// (0x00027be6) cell_vitu2_function_top_pane_g1_ParamLimits

0xd08a,	// (0x00032dc9) bg_vkb2_func_pane_cp04_ParamLimits

0x968f,	// (0x0002f3ce) main_ncimui_button_group_pane_ParamLimits

0x968f,	// (0x0002f3ce) main_ncimui_button_group_pane

0x96dd,	// (0x0002f41c) main_ncimui_pane_t3_ParamLimits

0x96dd,	// (0x0002f41c) main_ncimui_pane_t3

0xe806,	// (0x00034545) phacti_button_group_pane

0xeaf2,	// (0x00034831) aid_size_list_single_double_ParamLimits

0xa6cc,	// (0x0003040b) popup_ezdial_listscroll_window_ParamLimits

0xa6e8,	// (0x00030427) popup_number_entry_window_cp01_ParamLimits

0xa793,	// (0x000304d2) phacti_button_pane_ParamLimits

0xa793,	// (0x000304d2) phacti_button_pane

0x1fb7,	// (0x00027cf6) bg_button_pane_cp14

0xebd6,	// (0x00034915) phacti_button_pane_t1

0xa7a4,	// (0x000304e3) main_touch_calib_button_pane_ParamLimits

0xa7a4,	// (0x000304e3) main_touch_calib_button_pane

0x2c37,	// (0x00028976) bg_button_pane_cp18_ParamLimits

0x2c37,	// (0x00028976) bg_button_pane_cp18

0xebe4,	// (0x00034923) main_touch_calib_button_pane_t1_ParamLimits

0xebe4,	// (0x00034923) main_touch_calib_button_pane_t1

0xebfa,	// (0x00034939) main_touch_calib_button_pane_t2_ParamLimits

0xebfa,	// (0x00034939) main_touch_calib_button_pane_t2

0x0001,

0xfe56,	// (0x00035b95) main_touch_calib_button_pane_t_ParamLimits

0xfe56,	// (0x00035b95) main_touch_calib_button_pane_t

0x1fb7,	// (0x00027cf6) cell_ncimui_button_pane

0x1fb7,	// (0x00027cf6) bg_button_pane_cp032

0xec18,	// (0x00034957) cell_ncimui_button_pane_t1

0xce1f,	// (0x00032b5e) image3_infobar_pane_ParamLimits

0xce1f,	// (0x00032b5e) image3_infobar_pane

0x9a8e,	// (0x0002f7cd) fs_bigclock_status_pane_ParamLimits

0x9a8e,	// (0x0002f7cd) fs_bigclock_status_pane

0x9a9b,	// (0x0002f7da) main_fs_bigclock_clock_pane_ParamLimits

0x9a9b,	// (0x0002f7da) main_fs_bigclock_clock_pane

0x9aae,	// (0x0002f7ed) main_fs_bigclock_indi_pane_ParamLimits

0x9aae,	// (0x0002f7ed) main_fs_bigclock_indi_pane

0x9ac6,	// (0x0002f805) main_fs_bigclock_swipe_pane_ParamLimits

0x9ac6,	// (0x0002f805) main_fs_bigclock_swipe_pane

0x1fb7,	// (0x00027cf6) main_fs_clock_dumped_data

0xe0e6,	// (0x00033e25) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe0e6,	// (0x00033e25) list_single_fs_bigclock_indicator_pane_g1

0xe104,	// (0x00033e43) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe104,	// (0x00033e43) list_single_fs_bigclock_indicator_pane_g2

0xe11e,	// (0x00033e5d) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe11e,	// (0x00033e5d) list_single_fs_bigclock_indicator_pane_g3

0xe138,	// (0x00033e77) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe138,	// (0x00033e77) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc8e,	// (0x000359cd) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc8e,	// (0x000359cd) list_single_fs_bigclock_indicator_pane_g

0xe15e,	// (0x00033e9d) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe15e,	// (0x00033e9d) list_single_fs_bigclock_indicator_pane_t1

0xe186,	// (0x00033ec5) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe186,	// (0x00033ec5) list_single_fs_bigclock_indicator_pane_t2

0xe1ae,	// (0x00033eed) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe1ae,	// (0x00033eed) list_single_fs_bigclock_indicator_pane_t3

0xe1d6,	// (0x00033f15) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe1d6,	// (0x00033f15) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc99,	// (0x000359d8) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc99,	// (0x000359d8) list_single_fs_bigclock_indicator_pane_t

0xec26,	// (0x00034965) image3_infobar_fav_pane_ParamLimits

0xec26,	// (0x00034965) image3_infobar_fav_pane

0xec36,	// (0x00034975) image3_infobar_loc_pane_ParamLimits

0xec36,	// (0x00034975) image3_infobar_loc_pane

0xec4a,	// (0x00034989) image3_infobar_time_pane_ParamLimits

0xec4a,	// (0x00034989) image3_infobar_time_pane

0xc2b2,	// (0x00031ff1) image3_infobar_time_pane_g1

0xec5a,	// (0x00034999) image3_infobar_time_pane_t1

0xc2b2,	// (0x00031ff1) image3_infobar_loc_pane_g1

0xec68,	// (0x000349a7) image3_infobar_loc_pane_g2

0x0001,

0xfe5b,	// (0x00035b9a) image3_infobar_loc_pane_g

0xec70,	// (0x000349af) image3_infobar_loc_pane_t1

0xc2b2,	// (0x00031ff1) image3_infobar_fav_pane_g1

0xec7e,	// (0x000349bd) image3_infobar_fav_pane_g2

0x0001,

0xfe60,	// (0x00035b9f) image3_infobar_fav_pane_g

0xec86,	// (0x000349c5) fs_bigclock_status_battery_pane

0xec8f,	// (0x000349ce) fs_bigclock_status_signal_pane

0xec98,	// (0x000349d7) fs_bigclock_status_title_pane

0xeca1,	// (0x000349e0) fs_bigclock_status_signal_pane_g1

0xecaa,	// (0x000349e9) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe65,	// (0x00035ba4) fs_bigclock_status_signal_pane_g

0xecb2,	// (0x000349f1) fs_bigclock_status_battery_pane_g1

0xecbb,	// (0x000349fa) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe6a,	// (0x00035ba9) fs_bigclock_status_battery_pane_g

0xecc3,	// (0x00034a02) fs_bigclock_status_title_pane_t1

0xc2b2,	// (0x00031ff1) main_fs_bigclock_clock_pane_g1

0xecd1,	// (0x00034a10) main_fs_bigclock_clock_pane_g2

0xecd1,	// (0x00034a10) main_fs_bigclock_clock_pane_g3

0xecd1,	// (0x00034a10) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe6f,	// (0x00035bae) main_fs_bigclock_clock_pane_g

0xecd9,	// (0x00034a18) main_fs_bigclock_clock_pane_t1

0xece7,	// (0x00034a26) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe78,	// (0x00035bb7) main_fs_bigclock_clock_pane_t

0xecf6,	// (0x00034a35) list_single_fs_bigclock_indicator_pane_ParamLimits

0xecf6,	// (0x00034a35) list_single_fs_bigclock_indicator_pane

0xa7b9,	// (0x000304f8) list_single_fs_bigclock_pane_ParamLimits

0xa7b9,	// (0x000304f8) list_single_fs_bigclock_pane

0xed10,	// (0x00034a4f) main_fs_bigclock_indicator_pane_t1

0xed1f,	// (0x00034a5e) list_single_fs_bigclock_pane_g1

0xed27,	// (0x00034a66) list_single_fs_bigclock_pane_t1

0xc2b2,	// (0x00031ff1) main_fs_bigclock_swipe_pane_g1

0xed65,	// (0x00034aa4) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe89,	// (0x00035bc8) main_fs_bigclock_swipe_pane_g

0xed6d,	// (0x00034aac) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xed6d,	// (0x00034aac) main_fs_bigclock_swipe_pane_t1

0x4b4c,	// (0x0002a88b) call_type_pane_ParamLimits

0x1fb7,	// (0x00027cf6) main_btmg_pane

0xe9db,	// (0x0003471a) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe9db,	// (0x0003471a) list_single_cale_mrui_row_pane_g2

0x0001,

0xfdfc,	// (0x00035b3b) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdfc,	// (0x00035b3b) list_single_cale_mrui_row_pane_g

0xeb2c,	// (0x0003486b) list_recal_vselct_arw_lo_pane

0xeb34,	// (0x00034873) list_recal_vselct_arw_up_pane

0xeb3c,	// (0x0003487b) list_recal_vselct_pane

0xed8a,	// (0x00034ac9) btmg_button_pane

0xa81f,	// (0x0003055e) main_btmg_pane_g1

0x1fb7,	// (0x00027cf6) bg_button_pane_cp044

0xed94,	// (0x00034ad3) btmg_button_pane_t1

0xbda2,	// (0x00031ae1) aid_listscroll_gen

0x2229,	// (0x00027f68) main_cntbar_detail_pane

0xe6f8,	// (0x00034437) list_cmail_folder_pane

0xe708,	// (0x00034447) sp_fs_scroll_pane_cp03_ParamLimits

0xa2f5,	// (0x00030034) list_single_fs_dyc_pane_cp01_ParamLimits

0xa2f5,	// (0x00030034) list_single_fs_dyc_pane_cp01

0xeda2,	// (0x00034ae1) aid_size_cmail_indent

0xedab,	// (0x00034aea) list_single_dyc_row_pane_cp01

0xa855,	// (0x00030594) cntbar_detail_list_pane_ParamLimits

0xa855,	// (0x00030594) cntbar_detail_list_pane

0xa8a1,	// (0x000305e0) main_cntbar_detail_cont_pane_ParamLimits

0xa8a1,	// (0x000305e0) main_cntbar_detail_cont_pane

0x4963,	// (0x0002a6a2) scroll_pane_cp032_ParamLimits

0x4963,	// (0x0002a6a2) scroll_pane_cp032

0xa8b5,	// (0x000305f4) cntbar_detail_list_event_pane_ParamLimits

0xa8b5,	// (0x000305f4) cntbar_detail_list_event_pane

0xa865,	// (0x000305a4) cntbar_detail_list_shct_pane

0x3cff,	// (0x00029a3e) aid_list_gen

0xedb4,	// (0x00034af3) aid_scroll

0xedbd,	// (0x00034afc) aid_size_touch_scroll_bar

0xedc6,	// (0x00034b05) aid_list_double

0xedcf,	// (0x00034b0e) aid_list_single

0xedd8,	// (0x00034b17) aid_list_single_lg

0xede1,	// (0x00034b20) aid_list_z_g_a_sm

0xede9,	// (0x00034b28) aid_list_z_g_d

0xedf1,	// (0x00034b30) aid_txt_z_prm

0xa8c5,	// (0x00030604) aid_txt_z_prm_cp01

0xa8d3,	// (0x00030612) aid_txt_z_sec

0xa8e1,	// (0x00030620) main_cntbar_detail_cont_pane_g1_ParamLimits

0xa8e1,	// (0x00030620) main_cntbar_detail_cont_pane_g1

0xa8f5,	// (0x00030634) main_cntbar_detail_cont_pane_g2_ParamLimits

0xa8f5,	// (0x00030634) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe8e,	// (0x00035bcd) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe8e,	// (0x00035bcd) main_cntbar_detail_cont_pane_g

0xedff,	// (0x00034b3e) main_cntbar_detail_cont_pane_t1

0xee0d,	// (0x00034b4c) main_cntbar_detail_cont_pane_t2

0xee1b,	// (0x00034b5a) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe93,	// (0x00035bd2) main_cntbar_detail_cont_pane_t

0xa905,	// (0x00030644) cell_cntbar_detail_list_shct_pane_ParamLimits

0xa905,	// (0x00030644) cell_cntbar_detail_list_shct_pane

0xee29,	// (0x00034b68) cntbar_detail_list_shct_pane_g1

0xee32,	// (0x00034b71) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe9a,	// (0x00035bd9) cntbar_detail_list_shct_pane_g

0xa919,	// (0x00030658) cntbar_detail_list_event_pane_g1_ParamLimits

0xa919,	// (0x00030658) cntbar_detail_list_event_pane_g1

0xa925,	// (0x00030664) cntbar_detail_list_event_pane_g2_ParamLimits

0xa925,	// (0x00030664) cntbar_detail_list_event_pane_g2

0x0005,

0xfe9f,	// (0x00035bde) cntbar_detail_list_event_pane_g_ParamLimits

0xfe9f,	// (0x00035bde) cntbar_detail_list_event_pane_g

0xa991,	// (0x000306d0) cntbar_detail_list_event_pane_t1_ParamLimits

0xa991,	// (0x000306d0) cntbar_detail_list_event_pane_t1

0xa9a6,	// (0x000306e5) cntbar_detail_list_event_pane_t2_ParamLimits

0xa9a6,	// (0x000306e5) cntbar_detail_list_event_pane_t2

0x0002,

0xfeac,	// (0x00035beb) cntbar_detail_list_event_pane_t_ParamLimits

0xfeac,	// (0x00035beb) cntbar_detail_list_event_pane_t

0xc2b2,	// (0x00031ff1) cell_cntbar_detail_list_shct_pane_g1

0x5153,	// (0x0002ae92) navi_pane_mv_g3

0x2229,	// (0x00027f68) main_cntbar_detail_pane_ParamLimits

0x1fb7,	// (0x00027cf6) main_notif_wgt_pane

0xcba7,	// (0x000328e6) aid_tch_main_mp4_pane_g4

0xcda9,	// (0x00032ae8) popup_slider_window_cp02

0xeb23,	// (0x00034862) list_recal_day_event_pane

0xa829,	// (0x00030568) cntbar_detail_btn_pane_ParamLimits

0xa829,	// (0x00030568) cntbar_detail_btn_pane

0xa83f,	// (0x0003057e) cntbar_detail_btn_pane_cp01_ParamLimits

0xa83f,	// (0x0003057e) cntbar_detail_btn_pane_cp01

0xa865,	// (0x000305a4) cntbar_detail_list_shct_pane_ParamLimits

0xa875,	// (0x000305b4) cntbar_detail_pane_g1_ParamLimits

0xa875,	// (0x000305b4) cntbar_detail_pane_g1

0xa885,	// (0x000305c4) cntbar_detail_pane_t1_ParamLimits

0xa885,	// (0x000305c4) cntbar_detail_pane_t1

0xa931,	// (0x00030670) cntbar_detail_list_event_pane_g3_ParamLimits

0xa931,	// (0x00030670) cntbar_detail_list_event_pane_g3

0xa949,	// (0x00030688) cntbar_detail_list_event_pane_g4_ParamLimits

0xa949,	// (0x00030688) cntbar_detail_list_event_pane_g4

0xa961,	// (0x000306a0) cntbar_detail_list_event_pane_g5_ParamLimits

0xa961,	// (0x000306a0) cntbar_detail_list_event_pane_g5

0xa979,	// (0x000306b8) cntbar_detail_list_event_pane_g6_ParamLimits

0xa979,	// (0x000306b8) cntbar_detail_list_event_pane_g6

0xa9bb,	// (0x000306fa) cntbar_detail_list_event_pane_t3_ParamLimits

0xa9bb,	// (0x000306fa) cntbar_detail_list_event_pane_t3

0xa9cd,	// (0x0003070c) popup_notif_wgt_window_ParamLimits

0xa9cd,	// (0x0003070c) popup_notif_wgt_window

0xa9e6,	// (0x00030725) popup_submenu_window_cp01_ParamLimits

0xa9e6,	// (0x00030725) popup_submenu_window_cp01

0x51d5,	// (0x0002af14) bg_popup_window_pane_cp10

0xee3b,	// (0x00034b7a) listscroll_notif_wgt_pane

0xee45,	// (0x00034b84) list_notif_wgt_window

0xee4e,	// (0x00034b8d) scroll_pane_cp033

0xee57,	// (0x00034b96) list_notif_wgt_row_pane_ParamLimits

0xee57,	// (0x00034b96) list_notif_wgt_row_pane

0xee6b,	// (0x00034baa) aid_size_list_notif_wgt_del

0xee74,	// (0x00034bb3) list_notif_wgt_row_pane_g1

0xee7c,	// (0x00034bbb) list_notif_wgt_row_pane_g2

0xee84,	// (0x00034bc3) list_notif_wgt_row_pane_g3

0x0002,

0xfeb3,	// (0x00035bf2) list_notif_wgt_row_pane_g

0xee8d,	// (0x00034bcc) list_notif_wgt_row_pane_t1

0xee9b,	// (0x00034bda) list_notif_wgt_row_pane_t2

0xeea9,	// (0x00034be8) list_notif_wgt_row_pane_t3

0x0002,

0xfeba,	// (0x00035bf9) list_notif_wgt_row_pane_t

0xd385,	// (0x000330c4) list_recal_day_event_pane_g1

0xeeb7,	// (0x00034bf6) list_recal_day_event_pane_t1

0x1fb7,	// (0x00027cf6) bg_button_pane_cp045

0xeec6,	// (0x00034c05) cntbar_detail_btn_pane_t1

0xbdaa,	// (0x00031ae9) main_callh_pane_ParamLimits

0xbdaa,	// (0x00031ae9) main_callh_pane

0x1fb7,	// (0x00027cf6) main_coverflow0_pane

0x1fb7,	// (0x00027cf6) main_wgtman_pane

0x9ad4,	// (0x0002f813) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x9ad4,	// (0x0002f813) main_fs_bigclock_unlock_btn_pane

0xe6d2,	// (0x00034411) bg_button_pane_cp16

0xe6e2,	// (0x00034421) cell_tport_appsw_pane_g3

0xa9f8,	// (0x00030737) cf0_flow_pane_ParamLimits

0xa9f8,	// (0x00030737) cf0_flow_pane

0xeed4,	// (0x00034c13) listscroll_cf0_pane

0xeedd,	// (0x00034c1c) main_cf0_pane_g1

0xaa0d,	// (0x0003074c) main_cf0_pane_t1_ParamLimits

0xaa0d,	// (0x0003074c) main_cf0_pane_t1

0xaa24,	// (0x00030763) main_cf0_pane_t2_ParamLimits

0xaa24,	// (0x00030763) main_cf0_pane_t2

0x0001,

0xfec1,	// (0x00035c00) main_cf0_pane_t_ParamLimits

0xfec1,	// (0x00035c00) main_cf0_pane_t

0xeee7,	// (0x00034c26) scroll_pane_cp11

0xaa3b,	// (0x0003077a) cf0_flow_pane_g1

0xaa43,	// (0x00030782) cf0_flow_pane_g2

0x0001,

0xfec6,	// (0x00035c05) cf0_flow_pane_g

0xaa4b,	// (0x0003078a) cf0_flow_pane_t1

0x1fb7,	// (0x00027cf6) main_call6_pane

0x1fb7,	// (0x00027cf6) main_calllock_pane

0xaa59,	// (0x00030798) call6_btn_grp_pane_ParamLimits

0xaa59,	// (0x00030798) call6_btn_grp_pane

0xaa73,	// (0x000307b2) call6_pane_g1_ParamLimits

0xaa73,	// (0x000307b2) call6_pane_g1

0xaa88,	// (0x000307c7) popup_call6_1st_window_ParamLimits

0xaa88,	// (0x000307c7) popup_call6_1st_window

0xaa99,	// (0x000307d8) popup_call6_2nd_window_ParamLimits

0xaa99,	// (0x000307d8) popup_call6_2nd_window

0xaaaa,	// (0x000307e9) cell_call6_btn_pane_ParamLimits

0xaaaa,	// (0x000307e9) cell_call6_btn_pane

0x51d5,	// (0x0002af14) bg_popup_call2_in_pane_cp03

0xeef2,	// (0x00034c31) popup_call6_1st_window_g1

0xeefa,	// (0x00034c39) popup_call6_1st_window_g2

0xef02,	// (0x00034c41) popup_call6_1st_window_g3

0x0002,

0xfecb,	// (0x00035c0a) popup_call6_1st_window_g

0xef0a,	// (0x00034c49) popup_call6_1st_window_t1

0xef19,	// (0x00034c58) popup_call6_1st_window_t2

0xef29,	// (0x00034c68) popup_call6_1st_window_t3

0x0002,

0xfed2,	// (0x00035c11) popup_call6_1st_window_t

0x51d5,	// (0x0002af14) bg_popup_call2_in_pane_cp04

0xeef2,	// (0x00034c31) popup_call6_2nd_window_g1

0xeefa,	// (0x00034c39) popup_call6_2nd_window_g2

0xef02,	// (0x00034c41) popup_call6_2nd_window_g3

0x0002,

0xfecb,	// (0x00035c0a) popup_call6_2nd_window_g

0xef0a,	// (0x00034c49) popup_call6_2nd_window_t1

0x1fb7,	// (0x00027cf6) bg_button_pane_cp15

0xef39,	// (0x00034c78) cell_call6_btn_pane_g1

0xef42,	// (0x00034c81) cell_call6_btn_pane_t1

0xaabe,	// (0x000307fd) listscroll_wgtman_pane_ParamLimits

0xaabe,	// (0x000307fd) listscroll_wgtman_pane

0xaae1,	// (0x00030820) wgtman_btn_pane_ParamLimits

0xaae1,	// (0x00030820) wgtman_btn_pane

0x4d9c,	// (0x0002aadb) aid_scroll_copy1

0xef51,	// (0x00034c90) list_wgtman_pane

0xab24,	// (0x00030863) wgtman_btn_pane_g1_ParamLimits

0xab24,	// (0x00030863) wgtman_btn_pane_g1

0xab50,	// (0x0003088f) wgtman_btn_pane_t1_ParamLimits

0xab50,	// (0x0003088f) wgtman_btn_pane_t1

0xef5b,	// (0x00034c9a) wgtman_btn_pane_t2_ParamLimits

0xef5b,	// (0x00034c9a) wgtman_btn_pane_t2

0x0001,

0xfed9,	// (0x00035c18) wgtman_btn_pane_t_ParamLimits

0xfed9,	// (0x00035c18) wgtman_btn_pane_t

0xab8d,	// (0x000308cc) listrow_wgtman_pane_ParamLimits

0xab8d,	// (0x000308cc) listrow_wgtman_pane

0xaba0,	// (0x000308df) listrow_wgtman_pane_g1

0xaba9,	// (0x000308e8) listrow_wgtman_pane_g2

0x0001,

0xfede,	// (0x00035c1d) listrow_wgtman_pane_g

0xabb3,	// (0x000308f2) listrow_wgtman_pane_t1

0xabc1,	// (0x00030900) listrow_wgtman_pane_t2

0x0001,

0xfee3,	// (0x00035c22) listrow_wgtman_pane_t

0xabcf,	// (0x0003090e) wait_bar_pane_cp09

0xef72,	// (0x00034cb1) main_calllock_btn_pane

0xef7c,	// (0x00034cbb) main_calllock_pane_g1

0x1fb7,	// (0x00027cf6) bg_button_pane_cp17

0xef87,	// (0x00034cc6) main_calllock_btn_pane_g1

0xef90,	// (0x00034ccf) main_calllock_btn_pane_t1

0x1fb7,	// (0x00027cf6) main_dialer3_pane

0x1fb7,	// (0x00027cf6) main_fmrd2_pane

0xc2b2,	// (0x00031ff1) main_fs_bigclock_unlock_btn_pane_g1

0xefa7,	// (0x00034ce6) main_fs_bigclock_unlock_btn_pane_t1

0xabd7,	// (0x00030916) area_fmrd2_info_pane_ParamLimits

0xabd7,	// (0x00030916) area_fmrd2_info_pane

0xabe8,	// (0x00030927) area_fmrd2_visual_pane_ParamLimits

0xabe8,	// (0x00030927) area_fmrd2_visual_pane

0xabf6,	// (0x00030935) fmrd2_indi_pane_ParamLimits

0xabf6,	// (0x00030935) fmrd2_indi_pane

0xac03,	// (0x00030942) area_fmrd2_visual_pane_g1

0xac0b,	// (0x0003094a) area_fmrd2_visual_pane_t1

0xac1b,	// (0x0003095a) area_fmrd2_visual_pane_t2

0xac2b,	// (0x0003096a) area_fmrd2_visual_pane_t3

0x0002,

0xfeed,	// (0x00035c2c) area_fmrd2_visual_pane_t

0xac3b,	// (0x0003097a) area_fmrd2_info_pane_g1

0xac43,	// (0x00030982) area_fmrd2_info_pane_t1

0xac53,	// (0x00030992) area_fmrd2_info_pane_t2

0xac63,	// (0x000309a2) area_fmrd2_info_pane_t3

0xac73,	// (0x000309b2) area_fmrd2_info_pane_t4

0x0003,

0xfef4,	// (0x00035c33) area_fmrd2_info_pane_t

0xac81,	// (0x000309c0) fmrd2_indi_pane_t1

0xac91,	// (0x000309d0) fmrd2_indi_pane_t2

0xaca1,	// (0x000309e0) fmrd2_indi_pane_t3

0x0002,

0xfefd,	// (0x00035c3c) fmrd2_indi_pane_t

0xe147,	// (0x00033e86) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe147,	// (0x00033e86) list_single_fs_bigclock_indicator_pane_g5

0xe1eb,	// (0x00033f2a) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe1eb,	// (0x00033f2a) list_single_fs_bigclock_indicator_pane_t5

0xa444,	// (0x00030183) aid_cell_bcale_month_pane_ParamLimits

0xa444,	// (0x00030183) aid_cell_bcale_month_pane

0xa456,	// (0x00030195) bcale_month_pane_ParamLimits

0xa456,	// (0x00030195) bcale_month_pane

0xa470,	// (0x000301af) bcale_preview_pane_ParamLimits

0xa470,	// (0x000301af) bcale_preview_pane

0xed27,	// (0x00034a66) list_single_fs_bigclock_pane_t1_ParamLimits

0xed41,	// (0x00034a80) list_single_fs_bigclock_pane_t2_ParamLimits

0xed41,	// (0x00034a80) list_single_fs_bigclock_pane_t2

0x0001,

0xfe84,	// (0x00035bc3) list_single_fs_bigclock_pane_t_ParamLimits

0xfe84,	// (0x00035bc3) list_single_fs_bigclock_pane_t

0xef9f,	// (0x00034cde) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee8,	// (0x00035c27) main_fs_bigclock_unlock_btn_pane_g

0xacb1,	// (0x000309f0) aid_dia3_key_size_ParamLimits

0xacb1,	// (0x000309f0) aid_dia3_key_size

0xacc0,	// (0x000309ff) aid_dia3_listrow_size_ParamLimits

0xacc0,	// (0x000309ff) aid_dia3_listrow_size

0xacd5,	// (0x00030a14) dia3_keypad_fun_pane_ParamLimits

0xacd5,	// (0x00030a14) dia3_keypad_fun_pane

0xacf1,	// (0x00030a30) dia3_keypad_num_pane_ParamLimits

0xacf1,	// (0x00030a30) dia3_keypad_num_pane

0xad0c,	// (0x00030a4b) dia3_listscroll_pane_ParamLimits

0xad0c,	// (0x00030a4b) dia3_listscroll_pane

0xad1f,	// (0x00030a5e) dia3_numentry_pane_ParamLimits

0xad1f,	// (0x00030a5e) dia3_numentry_pane

0xefb5,	// (0x00034cf4) dia3_list_pane

0xefc0,	// (0x00034cff) scroll_pane_cp12

0x1fb7,	// (0x00027cf6) bg_dia3_numentry_pane

0xad33,	// (0x00030a72) dia3_numentry_pane_t1

0xad42,	// (0x00030a81) cell_dia3_key_num_pane

0xad4a,	// (0x00030a89) cell_dia3_key0_fun_pane_ParamLimits

0xad4a,	// (0x00030a89) cell_dia3_key0_fun_pane

0xad5e,	// (0x00030a9d) cell_dia3_key1_fun_pane_ParamLimits

0xad5e,	// (0x00030a9d) cell_dia3_key1_fun_pane

0xad76,	// (0x00030ab5) dia3_listrow_pane

0xde45,	// (0x00033b84) bg_dia3_numentry_pane_g1

0x1fb7,	// (0x00027cf6) bg_button_pane_cp21

0xefcb,	// (0x00034d0a) cell_dia3_key_num_pane_t1

0xefd9,	// (0x00034d18) cell_dia3_key_num_pane_t2

0xefe8,	// (0x00034d27) cell_dia3_key_num_pane_t3

0xeff7,	// (0x00034d36) cell_dia3_key_num_pane_t4

0x0003,

0xff04,	// (0x00035c43) cell_dia3_key_num_pane_t

0x1fb7,	// (0x00027cf6) bg_button_pane_cp19

0xad88,	// (0x00030ac7) cell_dia3_key0_fun_pane_g1

0x1fb7,	// (0x00027cf6) bg_button_pane_cp20

0xad90,	// (0x00030acf) cell_dia3_key1_fun_pane_g1

0xad98,	// (0x00030ad7) area_left_week_number_pane

0xada1,	// (0x00030ae0) area_top_day_name_pane

0xadaa,	// (0x00030ae9) frame_month_view_pane

0xadb2,	// (0x00030af1) grid_month_view_pane

0xadbc,	// (0x00030afb) cell_top_day_name_pane_ParamLimits

0xadbc,	// (0x00030afb) cell_top_day_name_pane

0xa666,	// (0x000303a5) cell_area_left_week_number_pane_ParamLimits

0xa666,	// (0x000303a5) cell_area_left_week_number_pane

0xadd2,	// (0x00030b11) cell_month_view_pane_ParamLimits

0xadd2,	// (0x00030b11) cell_month_view_pane

0xf006,	// (0x00034d45) frm_month_g1

0xaded,	// (0x00030b2c) frm_month_g2

0xadf5,	// (0x00030b34) frm_month_g3

0xadfd,	// (0x00030b3c) frm_month_g4

0xae05,	// (0x00030b44) frm_month_g5

0xae0d,	// (0x00030b4c) frm_month_g6

0xae15,	// (0x00030b54) frm_month_g7

0xf00f,	// (0x00034d4e) frm_month_g8

0xae1d,	// (0x00030b5c) frm_month_g9

0xae26,	// (0x00030b65) frm_month_g10

0xae2f,	// (0x00030b6e) frm_month_g11

0xae38,	// (0x00030b77) frm_month_g12

0xae41,	// (0x00030b80) frm_month_g13

0xae4a,	// (0x00030b89) frm_month_g14

0xae53,	// (0x00030b92) frm_month_g15

0xae5c,	// (0x00030b9b) frm_month_g16

0x000f,

0xff0d,	// (0x00035c4c) frm_month_g

0xae65,	// (0x00030ba4) cell_top_day_name_pane_t1

0xae74,	// (0x00030bb3) cell_area_left_week_number_pane_g1

0xae65,	// (0x00030ba4) cell_area_left_week_number_pane_t1

0xc2b2,	// (0x00031ff1) cell_month_view_pane_g1

0xae7c,	// (0x00030bbb) cell_month_view_pane_t1

0x1fb7,	// (0x00027cf6) main_fps_pane

0xe45e,	// (0x0003419d) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe45e,	// (0x0003419d) cmail_ddmenu_btn02_pane_cp1

0xe47a,	// (0x000341b9) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe47a,	// (0x000341b9) cmail_ddmenu_btn02_pane_cp2

0xa71a,	// (0x00030459) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xa71a,	// (0x00030459) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe35,	// (0x00035b74) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe35,	// (0x00035b74) cmail_ddmenu_btn02_pane_g

0xa738,	// (0x00030477) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xa738,	// (0x00030477) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe3a,	// (0x00035b79) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe3a,	// (0x00035b79) cmail_ddmenu_btn02_pane_t

0xae8b,	// (0x00030bca) fps_text_pane_ParamLimits

0xae8b,	// (0x00030bca) fps_text_pane

0xaea2,	// (0x00030be1) main_fps_pane_g1_ParamLimits

0xaea2,	// (0x00030be1) main_fps_pane_g1

0xaebc,	// (0x00030bfb) wait_bar_pane_cp010_ParamLimits

0xaebc,	// (0x00030bfb) wait_bar_pane_cp010

0xaecd,	// (0x00030c0c) fps_text_pane_t1_ParamLimits

0xaecd,	// (0x00030c0c) fps_text_pane_t1

0xcf66,	// (0x00032ca5) cam4_image_uncrop_pane_g1

0xcf6f,	// (0x00032cae) cam4_image_uncrop_pane_g2

0x82f3,	// (0x0002e032) cam4_image_uncrop_pane_g3

0x82fc,	// (0x0002e03b) cam4_image_uncrop_pane_g4

0x0003,

0xf90d,	// (0x0003564c) cam4_image_uncrop_pane_g

0xad76,	// (0x00030ab5) dia3_listrow_pane_ParamLimits

0x1fb7,	// (0x00027cf6) main_phob2_pane

0xa266,	// (0x0002ffa5) cell_tport_appsw_pane_cp02_ParamLimits

0xa266,	// (0x0002ffa5) cell_tport_appsw_pane_cp02

0xa27a,	// (0x0002ffb9) cell_tport_appsw_pane_cp03_ParamLimits

0xa27a,	// (0x0002ffb9) cell_tport_appsw_pane_cp03

0x1fb7,	// (0x00027cf6) phob2_contact_card_pane

0x1fb7,	// (0x00027cf6) phob2_listscroll_pane

0xf018,	// (0x00034d57) phob2_list_pane

0xf020,	// (0x00034d5f) scroll_pane_cp034

0xaee5,	// (0x00030c24) phob2_cc_data_pane_ParamLimits

0xaee5,	// (0x00030c24) phob2_cc_data_pane

0xaf04,	// (0x00030c43) phob2_cc_listscroll_pane_ParamLimits

0xaf04,	// (0x00030c43) phob2_cc_listscroll_pane

0xd0da,	// (0x00032e19) list_double_large_graphic_phob2_pane_ParamLimits

0xd0da,	// (0x00032e19) list_double_large_graphic_phob2_pane

0xaf22,	// (0x00030c61) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xaf22,	// (0x00030c61) list_double_large_graphic_phob2_pane_g1

0xaf2f,	// (0x00030c6e) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xaf2f,	// (0x00030c6e) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff2e,	// (0x00035c6d) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff2e,	// (0x00035c6d) list_double_large_graphic_phob2_pane_g

0xaf3b,	// (0x00030c7a) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xaf3b,	// (0x00030c7a) list_double_large_graphic_phob2_pane_t1

0xaf50,	// (0x00030c8f) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xaf50,	// (0x00030c8f) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff33,	// (0x00035c72) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff33,	// (0x00035c72) list_double_large_graphic_phob2_pane_t

0x1fb7,	// (0x00027cf6) list_highlight_pane_cp024

0xf028,	// (0x00034d67) phob2_cc_button_pane

0xaf62,	// (0x00030ca1) phob2_cc_data_pane_g1_ParamLimits

0xaf62,	// (0x00030ca1) phob2_cc_data_pane_g1

0xaf77,	// (0x00030cb6) phob2_cc_data_pane_g2_ParamLimits

0xaf77,	// (0x00030cb6) phob2_cc_data_pane_g2

0x0001,

0xff38,	// (0x00035c77) phob2_cc_data_pane_g_ParamLimits

0xff38,	// (0x00035c77) phob2_cc_data_pane_g

0xaf89,	// (0x00030cc8) phob2_cc_data_pane_t1_ParamLimits

0xaf89,	// (0x00030cc8) phob2_cc_data_pane_t1

0xafa1,	// (0x00030ce0) phob2_cc_data_pane_t2_ParamLimits

0xafa1,	// (0x00030ce0) phob2_cc_data_pane_t2

0xafb9,	// (0x00030cf8) phob2_cc_data_pane_t3_ParamLimits

0xafb9,	// (0x00030cf8) phob2_cc_data_pane_t3

0x0002,

0xff3d,	// (0x00035c7c) phob2_cc_data_pane_t_ParamLimits

0xff3d,	// (0x00035c7c) phob2_cc_data_pane_t

0xf030,	// (0x00034d6f) phob2_cc_list_pane_ParamLimits

0xf030,	// (0x00034d6f) phob2_cc_list_pane

0xd41e,	// (0x0003315d) scroll_pane_cp035_ParamLimits

0xd41e,	// (0x0003315d) scroll_pane_cp035

0x2229,	// (0x00027f68) bg_button_pane_cp033

0xf03c,	// (0x00034d7b) phob2_cc_button_pane_g1

0xf048,	// (0x00034d87) phob2_cc_button_pane_t1

0xf05d,	// (0x00034d9c) phob2_cc_button_pane_t2

0x0001,

0xff44,	// (0x00035c83) phob2_cc_button_pane_t

0xafd3,	// (0x00030d12) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xafd3,	// (0x00030d12) list_double_large_graphic_phob2_cc_pane

0xafe7,	// (0x00030d26) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xafe7,	// (0x00030d26) list_double_large_graphic_phob2_cc_pane_g1

0xaff3,	// (0x00030d32) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xaff3,	// (0x00030d32) list_double_large_graphic_phob2_cc_pane_g2

0xafff,	// (0x00030d3e) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xafff,	// (0x00030d3e) list_double_large_graphic_phob2_cc_pane_g3

0xb00b,	// (0x00030d4a) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xb00b,	// (0x00030d4a) list_double_large_graphic_phob2_cc_pane_g4

0xb017,	// (0x00030d56) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xb017,	// (0x00030d56) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff49,	// (0x00035c88) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff49,	// (0x00035c88) list_double_large_graphic_phob2_cc_pane_g

0xb023,	// (0x00030d62) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xb023,	// (0x00030d62) list_double_large_graphic_phob2_cc_pane_t1

0xb04c,	// (0x00030d8b) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xb04c,	// (0x00030d8b) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff54,	// (0x00035c93) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff54,	// (0x00035c93) list_double_large_graphic_phob2_cc_pane_t

0xf06f,	// (0x00034dae) list_highlight_pane_cp025_ParamLimits

0xf06f,	// (0x00034dae) list_highlight_pane_cp025

0x2229,	// (0x00027f68) bg_button_pane_cp033_ParamLimits

0xf03c,	// (0x00034d7b) phob2_cc_button_pane_g1_ParamLimits

0xf048,	// (0x00034d87) phob2_cc_button_pane_t1_ParamLimits

0xf05d,	// (0x00034d9c) phob2_cc_button_pane_t2_ParamLimits

0xff44,	// (0x00035c83) phob2_cc_button_pane_t_ParamLimits

0x2237,	// (0x00027f76) popup_wgtman_window

0xd1bc,	// (0x00032efb) scroll_pane_cp038

0xab06,	// (0x00030845) wgtman_btn_pane_cp_01_ParamLimits

0xab06,	// (0x00030845) wgtman_btn_pane_cp_01

0xf07d,	// (0x00034dbc) wgtman_content_pane

0xedc6,	// (0x00034b05) wgtman_heading_pane

0x1fb7,	// (0x00027cf6) bg_heading_pane_cp02

0xf086,	// (0x00034dc5) wgtman_heading_pane_g1

0xf08e,	// (0x00034dcd) wgtman_heading_pane_t1

0xf09c,	// (0x00034ddb) scroll_pane_cp036

0xf0a4,	// (0x00034de3) wgtman_list_pane

0xf0ac,	// (0x00034deb) wgtman_list_pane_t1_ParamLimits

0xf0ac,	// (0x00034deb) wgtman_list_pane_t1

0xcf52,	// (0x00032c91) cam4_grid_pane

0x8afb,	// (0x0002e83a) bg_button_pane_cp015_ParamLimits

0x8b0f,	// (0x0002e84e) bg_button_pane_cp016_ParamLimits

0x8b22,	// (0x0002e861) bg_button_pane_cp017_ParamLimits

0x8b7a,	// (0x0002e8b9) popup_vitu2_query_window_g3_ParamLimits

0x8b7a,	// (0x0002e8b9) popup_vitu2_query_window_g3

0x8c37,	// (0x0002e976) popup_vitu2_query_window_t6_ParamLimits

0x8c37,	// (0x0002e976) popup_vitu2_query_window_t6

0x8c62,	// (0x0002e9a1) popup_vitu2_query_window_t7_ParamLimits

0x8c62,	// (0x0002e9a1) popup_vitu2_query_window_t7

0xcf66,	// (0x00032ca5) cam4_grid_pane_g1

0xcf6f,	// (0x00032cae) cam4_grid_pane_g2

0xf0ca,	// (0x00034e09) cam4_grid_pane_g3

0xf0d3,	// (0x00034e12) cam4_grid_pane_g4

0x0003,

0xff59,	// (0x00035c98) cam4_grid_pane_g

0x36fc,	// (0x0002943b) aid_placing_vt_slider_lsc_ParamLimits

0x3a47,	// (0x00029786) vidtel_button_pane_ParamLimits

0x3a47,	// (0x00029786) vidtel_button_pane

0x1fb7,	// (0x00027cf6) bg_button_pane_cp034

0xb075,	// (0x00030db4) vidtel_button_pane_g1

0xf0de,	// (0x00034e1d) vidtel_button_pane_t1

0xd2f9,	// (0x00033038) aid_size_vtel_slider_touch

0xd41e,	// (0x0003315d) scroll_pane_cp039

0xde83,	// (0x00033bc2) ncim_query_button_pane_cp01_ParamLimits

0xdea2,	// (0x00033be1) ncimui_query_pane_g1_ParamLimits

0x2229,	// (0x00027f68) input_focus_pane_cp012_ParamLimits

0xdec7,	// (0x00033c06) ncim_query_entry_pane_t1_ParamLimits

0xd41e,	// (0x0003315d) scroll_pane_cp039_ParamLimits
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

} // end of namespace AknLayoutScalable_Abrw_pnl4_apps_nhd4_lsc_tch_Normal

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

#include "aknlayoutscalable_elaf_pnp4_apps_nhd4_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0003c89a };

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
0x2572,	// (0x0003ee0c) Screen

0x257e,	// (0x0003ee18) application_window

0x25da,	// (0x0003ee74) area_bottom_pane_ParamLimits

0x25da,	// (0x0003ee74) area_bottom_pane

0x2633,	// (0x0003eecd) area_top_pane_ParamLimits

0x2633,	// (0x0003eecd) area_top_pane

0x2697,	// (0x0003ef31) call_video_uplink_pane_ParamLimits

0x2697,	// (0x0003ef31) call_video_uplink_pane

0x26d6,	// (0x0003ef70) main_pane_ParamLimits

0x26d6,	// (0x0003ef70) main_pane

0xcbde,	// (0x00049478) context_pane

0x5ba0,	// (0x0004243a) navi_pane

0x5bc0,	// (0x0004245a) popup_cale_events_window_ParamLimits

0x5bc0,	// (0x0004245a) popup_cale_events_window

0xcbf1,	// (0x0004948b) popup_mup_playback_window

0x5bd8,	// (0x00042472) signal_pane

0xaceb,	// (0x00047585) main_browser_pane

0xb7ce,	// (0x00048068) main_burst_pane

0x5a36,	// (0x000422d0) main_calc_pane

0xcbc4,	// (0x0004945e) main_cale_day_pane

0x2e09,	// (0x0003f6a3) main_cale_month_pane

0xcbc4,	// (0x0004945e) main_cale_week_pane

0xb7ce,	// (0x00048068) main_call_pane

0xa981,	// (0x0004721b) main_call_poc_pane

0xb7ce,	// (0x00048068) main_camera_pane

0xb7ce,	// (0x00048068) main_chi_dic_pane

0xb653,	// (0x00047eed) main_clock_pane

0xa981,	// (0x0004721b) main_fmradio_pane

0xb7ce,	// (0x00048068) main_graph_messa_pane

0xa981,	// (0x0004721b) main_help_pane

0xaceb,	// (0x00047585) main_im_pane

0xac07,	// (0x000474a1) main_image_pane_ParamLimits

0xac07,	// (0x000474a1) main_image_pane

0xa981,	// (0x0004721b) main_location2_pane

0xb7ce,	// (0x00048068) main_location_pane

0xac07,	// (0x000474a1) main_messa_pane

0xa981,	// (0x0004721b) main_mp2_pane

0xb7ce,	// (0x00048068) main_mp_pane

0xa981,	// (0x0004721b) main_msg_pane

0xa981,	// (0x0004721b) main_mup_eq_pane

0xa981,	// (0x0004721b) main_mup_pane

0xaceb,	// (0x00047585) main_notes_pane

0xa981,	// (0x0004721b) main_pec_pane

0xa981,	// (0x0004721b) main_phob_pane

0xa981,	// (0x0004721b) main_pinb_pane

0xa981,	// (0x0004721b) main_postcard_pane

0xa981,	// (0x0004721b) main_qdial_pane

0xb7ce,	// (0x00048068) main_skin_pane

0xa981,	// (0x0004721b) main_smil2_pane

0xb7ce,	// (0x00048068) main_smil_pane

0xb7ce,	// (0x00048068) main_video_pane

0xb7ce,	// (0x00048068) main_video_tele_pane

0xac07,	// (0x000474a1) main_viewer_pane_ParamLimits

0xac07,	// (0x000474a1) main_viewer_pane

0xb7ce,	// (0x00048068) main_vorec_pane

0x5a74,	// (0x0004230e) popup_blid_sat_info_window_ParamLimits

0x5a74,	// (0x0004230e) popup_blid_sat_info_window

0x5a94,	// (0x0004232e) popup_dyc_status_message_window_ParamLimits

0x5a94,	// (0x0004232e) popup_dyc_status_message_window

0x5aa2,	// (0x0004233c) popup_grid_large_graphic_window_ParamLimits

0x5aa2,	// (0x0004233c) popup_grid_large_graphic_window

0x5b31,	// (0x000423cb) popup_loc_request_window_ParamLimits

0x5b31,	// (0x000423cb) popup_loc_request_window

0x5b78,	// (0x00042412) popup_wml_address_window_ParamLimits

0x5b78,	// (0x00042412) popup_wml_address_window

0x590e,	// (0x000421a8) call_muted_g1

0x55cc,	// (0x00041e66) popup_call_audio_conf_window_ParamLimits

0x55cc,	// (0x00041e66) popup_call_audio_conf_window

0x591e,	// (0x000421b8) popup_call_audio_first_window_ParamLimits

0x591e,	// (0x000421b8) popup_call_audio_first_window

0x595e,	// (0x000421f8) popup_call_audio_in_window_ParamLimits

0x595e,	// (0x000421f8) popup_call_audio_in_window

0x5982,	// (0x0004221c) popup_call_audio_out_window_ParamLimits

0x5982,	// (0x0004221c) popup_call_audio_out_window

0x59a4,	// (0x0004223e) popup_call_audio_second_window_ParamLimits

0x59a4,	// (0x0004223e) popup_call_audio_second_window

0x59d4,	// (0x0004226e) popup_call_audio_wait_window_ParamLimits

0x59d4,	// (0x0004226e) popup_call_audio_wait_window

0x59f5,	// (0x0004228f) popup_number_entry_window_ParamLimits

0x59f5,	// (0x0004228f) popup_number_entry_window

0xa56e,	// (0x00046e08) bg_popup_call_pane_cp05_ParamLimits

0xa56e,	// (0x00046e08) bg_popup_call_pane_cp05

0xa58e,	// (0x00046e28) popup_number_entry_window_t1

0xa5a1,	// (0x00046e3b) popup_number_entry_window_t2

0xa5b3,	// (0x00046e4d) popup_number_entry_window_t3

0x0003,

0xf0d3,	// (0x0004b96d) popup_number_entry_window_t

0xa5c5,	// (0x00046e5f) text_title_cp2

0xa5d8,	// (0x00046e72) bg_popup_call_pane_cp_ParamLimits

0xa5d8,	// (0x00046e72) bg_popup_call_pane_cp

0xa5e6,	// (0x00046e80) call_thumbnail_pane

0xa5ee,	// (0x00046e88) popup_call_audio_in_window_g1_ParamLimits

0xa5ee,	// (0x00046e88) popup_call_audio_in_window_g1

0xa5fa,	// (0x00046e94) popup_call_audio_in_window_g2_ParamLimits

0xa5fa,	// (0x00046e94) popup_call_audio_in_window_g2

0xa606,	// (0x00046ea0) popup_call_audio_in_window_g3_ParamLimits

0xa606,	// (0x00046ea0) popup_call_audio_in_window_g3

0x0002,

0xf0dc,	// (0x0004b976) popup_call_audio_in_window_g_ParamLimits

0xf0dc,	// (0x0004b976) popup_call_audio_in_window_g

0xa612,	// (0x00046eac) popup_call_audio_in_window_t1_ParamLimits

0xa612,	// (0x00046eac) popup_call_audio_in_window_t1

0xa62e,	// (0x00046ec8) popup_call_audio_in_window_t2_ParamLimits

0xa62e,	// (0x00046ec8) popup_call_audio_in_window_t2

0xa64a,	// (0x00046ee4) popup_call_audio_in_window_t3_ParamLimits

0xa64a,	// (0x00046ee4) popup_call_audio_in_window_t3

0x0002,

0xf0e3,	// (0x0004b97d) popup_call_audio_in_window_t_ParamLimits

0xf0e3,	// (0x0004b97d) popup_call_audio_in_window_t

0xa5d8,	// (0x00046e72) bg_popup_call_pane_cp01_ParamLimits

0xa5d8,	// (0x00046e72) bg_popup_call_pane_cp01

0xa5e6,	// (0x00046e80) call_thumbnail_pane_cp02

0xa65d,	// (0x00046ef7) call_type_pane_cp022

0xa665,	// (0x00046eff) popup_call_audio_out_window_g1_ParamLimits

0xa665,	// (0x00046eff) popup_call_audio_out_window_g1

0xa677,	// (0x00046f11) popup_call_audio_out_window_g2_ParamLimits

0xa677,	// (0x00046f11) popup_call_audio_out_window_g2

0xa683,	// (0x00046f1d) popup_call_audio_out_window_g3_ParamLimits

0xa683,	// (0x00046f1d) popup_call_audio_out_window_g3

0x0002,

0xf0ea,	// (0x0004b984) popup_call_audio_out_window_g_ParamLimits

0xf0ea,	// (0x0004b984) popup_call_audio_out_window_g

0xa695,	// (0x00046f2f) popup_call_audio_out_window_t1_ParamLimits

0xa695,	// (0x00046f2f) popup_call_audio_out_window_t1

0xa6ad,	// (0x00046f47) popup_call_audio_out_window_t2_ParamLimits

0xa6ad,	// (0x00046f47) popup_call_audio_out_window_t2

0x0001,

0xf0f1,	// (0x0004b98b) popup_call_audio_out_window_t_ParamLimits

0xf0f1,	// (0x0004b98b) popup_call_audio_out_window_t

0xa6c2,	// (0x00046f5c) bg_popup_call_pane_ParamLimits

0xa6c2,	// (0x00046f5c) bg_popup_call_pane

0x28da,	// (0x0003f174) call_thumbnail_pane_cp_ParamLimits

0x28da,	// (0x0003f174) call_thumbnail_pane_cp

0xa746,	// (0x00046fe0) call_type_pane_cp01_ParamLimits

0xa746,	// (0x00046fe0) call_type_pane_cp01

0xa78a,	// (0x00047024) popup_call_audio_first_window_g1_ParamLimits

0xa78a,	// (0x00047024) popup_call_audio_first_window_g1

0xa7d6,	// (0x00047070) popup_call_audio_first_window_g2_ParamLimits

0xa7d6,	// (0x00047070) popup_call_audio_first_window_g2

0x0001,

0xf0f6,	// (0x0004b990) popup_call_audio_first_window_g_ParamLimits

0xf0f6,	// (0x0004b990) popup_call_audio_first_window_g

0xa81a,	// (0x000470b4) popup_call_audio_first_window_t1_ParamLimits

0xa81a,	// (0x000470b4) popup_call_audio_first_window_t1

0xa8c6,	// (0x00047160) popup_call_audio_first_window_t4_ParamLimits

0xa8c6,	// (0x00047160) popup_call_audio_first_window_t4

0xa952,	// (0x000471ec) popup_call_audio_first_window_t5_ParamLimits

0xa952,	// (0x000471ec) popup_call_audio_first_window_t5

0x0002,

0xf0fb,	// (0x0004b995) popup_call_audio_first_window_t_ParamLimits

0xf0fb,	// (0x0004b995) popup_call_audio_first_window_t

0xa981,	// (0x0004721b) bg_popup_call_pane_cp02

0xa98b,	// (0x00047225) call_type_pane_cp023

0xa993,	// (0x0004722d) popup_call_audio_wait_window_g1

0xa99b,	// (0x00047235) popup_call_audio_wait_window_g2

0x0001,

0xf102,	// (0x0004b99c) popup_call_audio_wait_window_g

0xa9a3,	// (0x0004723d) popup_call_audio_wait_window_t3

0xa9b1,	// (0x0004724b) bg_popup_call_pane_cp03_ParamLimits

0xa9b1,	// (0x0004724b) bg_popup_call_pane_cp03

0xaa11,	// (0x000472ab) call_thumbnail_pane_cp011_ParamLimits

0xaa11,	// (0x000472ab) call_thumbnail_pane_cp011

0xaa1d,	// (0x000472b7) call_type_pane_cp034_ParamLimits

0xaa1d,	// (0x000472b7) call_type_pane_cp034

0xaa59,	// (0x000472f3) popup_call_audio_second_window_g1_ParamLimits

0xaa59,	// (0x000472f3) popup_call_audio_second_window_g1

0xaa95,	// (0x0004732f) popup_call_audio_second_window_g2_ParamLimits

0xaa95,	// (0x0004732f) popup_call_audio_second_window_g2

0x0001,

0xf107,	// (0x0004b9a1) popup_call_audio_second_window_g_ParamLimits

0xf107,	// (0x0004b9a1) popup_call_audio_second_window_g

0xaad1,	// (0x0004736b) popup_call_audio_second_window_t1_ParamLimits

0xaad1,	// (0x0004736b) popup_call_audio_second_window_t1

0xab7d,	// (0x00047417) popup_call_audio_second_window_t2_ParamLimits

0xab7d,	// (0x00047417) popup_call_audio_second_window_t2

0xabb3,	// (0x0004744d) popup_call_audio_second_window_t3_ParamLimits

0xabb3,	// (0x0004744d) popup_call_audio_second_window_t3

0x0002,

0xf10c,	// (0x0004b9a6) popup_call_audio_second_window_t_ParamLimits

0xf10c,	// (0x0004b9a6) popup_call_audio_second_window_t

0xa981,	// (0x0004721b) bg_popup_call_pane_cp04

0xabe9,	// (0x00047483) list_conf_pane

0xabf1,	// (0x0004748b) popup_call_audio_conf_window_t1

0xabff,	// (0x00047499) call_thumbnail_pane_g1

0xac07,	// (0x000474a1) bg_pinb_pane_ParamLimits

0xac07,	// (0x000474a1) bg_pinb_pane

0xac15,	// (0x000474af) find_pinb_pane

0xac1e,	// (0x000474b8) listscroll_pinb_pane_ParamLimits

0xac1e,	// (0x000474b8) listscroll_pinb_pane

0xac2d,	// (0x000474c7) pinb_bg_pane_g1

0x28fe,	// (0x0003f198) pinb_bg_pane_g2

0x290a,	// (0x0003f1a4) pinb_bg_pane_g3

0x2916,	// (0x0003f1b0) pinb_bg_pane_g4

0x2922,	// (0x0003f1bc) pinb_bg_pane_g5

0x292e,	// (0x0003f1c8) pinb_bg_pane_g6

0x2939,	// (0x0003f1d3) pinb_bg_pane_g7

0x2944,	// (0x0003f1de) pinb_bg_pane_g8

0x294f,	// (0x0003f1e9) pinb_bg_pane_g9

0x2959,	// (0x0003f1f3) pinb_bg_pane_g10

0x0009,

0xf113,	// (0x0004b9ad) pinb_bg_pane_g

0x2976,	// (0x0003f210) grid_pinb_pane

0x2981,	// (0x0003f21b) list_pinb_pane

0x298c,	// (0x0003f226) scroll_pane_cp01_ParamLimits

0x298c,	// (0x0003f226) scroll_pane_cp01

0xac37,	// (0x000474d1) find_pinb_pane_g1_ParamLimits

0xac37,	// (0x000474d1) find_pinb_pane_g1

0xac4f,	// (0x000474e9) find_pinb_pane_t1

0xac61,	// (0x000474fb) find_pinb_pane_t2

0x0001,

0xf12d,	// (0x0004b9c7) find_pinb_pane_t

0xac76,	// (0x00047510) input_focus_pane_cp01_ParamLimits

0xac76,	// (0x00047510) input_focus_pane_cp01

0x299e,	// (0x0003f238) cell_pinb_pane_ParamLimits

0x299e,	// (0x0003f238) cell_pinb_pane

0xac82,	// (0x0004751c) cell_pinb_pane_g1_ParamLimits

0xac82,	// (0x0004751c) cell_pinb_pane_g1

0xac95,	// (0x0004752f) cell_pinb_pane_g2_ParamLimits

0xac95,	// (0x0004752f) cell_pinb_pane_g2

0xaca1,	// (0x0004753b) cell_pinb_pane_g3_ParamLimits

0xaca1,	// (0x0004753b) cell_pinb_pane_g3

0x0002,

0xf132,	// (0x0004b9cc) cell_pinb_pane_g_ParamLimits

0xf132,	// (0x0004b9cc) cell_pinb_pane_g

0xa981,	// (0x0004721b) grid_highlight_pane_cp01

0x29cd,	// (0x0003f267) list_pinb_item_pane_ParamLimits

0x29cd,	// (0x0003f267) list_pinb_item_pane

0xa981,	// (0x0004721b) list_highlight_pane_cp02

0x29f7,	// (0x0003f291) list_pinb_item_pane_g1_ParamLimits

0x29f7,	// (0x0003f291) list_pinb_item_pane_g1

0x2a04,	// (0x0003f29e) list_pinb_item_pane_g2_ParamLimits

0x2a04,	// (0x0003f29e) list_pinb_item_pane_g2

0x2a10,	// (0x0003f2aa) list_pinb_item_pane_g3_ParamLimits

0x2a10,	// (0x0003f2aa) list_pinb_item_pane_g3

0x2a21,	// (0x0003f2bb) list_pinb_item_pane_g4_ParamLimits

0x2a21,	// (0x0003f2bb) list_pinb_item_pane_g4

0x0003,

0xf139,	// (0x0004b9d3) list_pinb_item_pane_g_ParamLimits

0xf139,	// (0x0004b9d3) list_pinb_item_pane_g

0x2a2d,	// (0x0003f2c7) list_pinb_item_pane_t1_ParamLimits

0x2a2d,	// (0x0003f2c7) list_pinb_item_pane_t1

0x2a5e,	// (0x0003f2f8) calc_display_pane

0x2a7c,	// (0x0003f316) calc_paper_pane

0x2a98,	// (0x0003f332) grid_calc_pane

0xa981,	// (0x0004721b) bg_list_pane_cp01

0x2ac4,	// (0x0003f35e) clock_g1

0x2acc,	// (0x0003f366) clock_g2

0x0001,

0xf142,	// (0x0004b9dc) clock_g

0x2ad6,	// (0x0003f370) clock_t1_ParamLimits

0x2ad6,	// (0x0003f370) clock_t1

0x2aeb,	// (0x0003f385) clock_t2_ParamLimits

0x2aeb,	// (0x0003f385) clock_t2

0x2afd,	// (0x0003f397) clock_t3_ParamLimits

0x2afd,	// (0x0003f397) clock_t3

0x2b0f,	// (0x0003f3a9) clock_t4_ParamLimits

0x2b0f,	// (0x0003f3a9) clock_t4

0x2b21,	// (0x0003f3bb) clock_t5_ParamLimits

0x2b21,	// (0x0003f3bb) clock_t5

0x2b36,	// (0x0003f3d0) clock_t6_ParamLimits

0x2b36,	// (0x0003f3d0) clock_t6

0x2b48,	// (0x0003f3e2) clock_t7_ParamLimits

0x2b48,	// (0x0003f3e2) clock_t7

0x2b5a,	// (0x0003f3f4) clock_t8_ParamLimits

0x2b5a,	// (0x0003f3f4) clock_t8

0x2b70,	// (0x0003f40a) clock_t9_ParamLimits

0x2b70,	// (0x0003f40a) clock_t9

0x0008,

0xf147,	// (0x0004b9e1) clock_t_ParamLimits

0xf147,	// (0x0004b9e1) clock_t

0xacad,	// (0x00047547) popup_clock_analogue_window_cp02

0xacad,	// (0x00047547) popup_clock_digital_window_cp01

0xacb5,	// (0x0004754f) listscroll_help_pane

0xa981,	// (0x0004721b) phob_pre_status_pane

0xacbf,	// (0x00047559) grid_qdial_pane

0xac07,	// (0x000474a1) listscroll_mce_pane

0xac07,	// (0x000474a1) bg_notes_pane

0xacc9,	// (0x00047563) list_notes_pane

0x2b86,	// (0x0003f420) scroll_pane_cp06

0xacd7,	// (0x00047571) bg_calc_paper_pane

0x2b95,	// (0x0003f42f) list_calc_pane

0xaceb,	// (0x00047585) bg_calc_display_pane

0x2baf,	// (0x0003f449) calc_display_pane_t1

0x2bc4,	// (0x0003f45e) calc_display_pane_t2

0x2bd9,	// (0x0003f473) calc_display_pane_t3

0x0002,

0xf15a,	// (0x0004b9f4) calc_display_pane_t

0x2beb,	// (0x0003f485) cell_calc_pane_ParamLimits

0x2beb,	// (0x0003f485) cell_calc_pane

0xacf7,	// (0x00047591) bg_calc_paper_pane_g1

0xad03,	// (0x0004759d) bg_calc_paper_pane_g2

0xad0f,	// (0x000475a9) bg_calc_paper_pane_g3

0xad1b,	// (0x000475b5) bg_calc_paper_pane_g4

0xad27,	// (0x000475c1) bg_calc_paper_pane_g5

0x2c18,	// (0x0003f4b2) bg_calc_paper_pane_g6

0x2c29,	// (0x0003f4c3) bg_calc_paper_pane_g7

0x2c3a,	// (0x0003f4d4) bg_calc_paper_pane_g8

0x0007,

0xf161,	// (0x0004b9fb) bg_calc_paper_pane_g

0x2c4b,	// (0x0003f4e5) calc_bg_paper_pane_g9

0x2c5c,	// (0x0003f4f6) list_calc_item_pane_ParamLimits

0x2c5c,	// (0x0003f4f6) list_calc_item_pane

0xad33,	// (0x000475cd) list_calc_item_pane_g1

0x2c90,	// (0x0003f52a) list_calc_item_pane_t1_ParamLimits

0x2c90,	// (0x0003f52a) list_calc_item_pane_t1

0x2ca2,	// (0x0003f53c) list_calc_item_pane_t2_ParamLimits

0x2ca2,	// (0x0003f53c) list_calc_item_pane_t2

0x0001,

0xf172,	// (0x0004ba0c) list_calc_item_pane_t_ParamLimits

0xf172,	// (0x0004ba0c) list_calc_item_pane_t

0xad40,	// (0x000475da) cell_calc_pane_g1

0xad4a,	// (0x000475e4) grid_highlight_pane_cp02

0xad6c,	// (0x00047606) bg_calc_display_pane_g1

0x2cd2,	// (0x0003f56c) bg_calc_display_pane_g2

0xad75,	// (0x0004760f) bg_calc_display_pane_g3

0x0002,

0xf17c,	// (0x0004ba16) bg_calc_display_pane_g

0x2cdc,	// (0x0003f576) cell_qdial_pane_ParamLimits

0x2cdc,	// (0x0003f576) cell_qdial_pane

0x2cf0,	// (0x0003f58a) cell_qdial_pane_g1_ParamLimits

0x2cf0,	// (0x0003f58a) cell_qdial_pane_g1

0x2cfd,	// (0x0003f597) cell_qdial_pane_g2_ParamLimits

0x2cfd,	// (0x0003f597) cell_qdial_pane_g2

0xad7e,	// (0x00047618) cell_qdial_pane_g3_ParamLimits

0xad7e,	// (0x00047618) cell_qdial_pane_g3

0x0003,

0xf183,	// (0x0004ba1d) cell_qdial_pane_g_ParamLimits

0xf183,	// (0x0004ba1d) cell_qdial_pane_g

0x2d1a,	// (0x0003f5b4) cell_qdial_pane_t1_ParamLimits

0x2d1a,	// (0x0003f5b4) cell_qdial_pane_t1

0x2d32,	// (0x0003f5cc) cell_qdial_pane_t2_ParamLimits

0x2d32,	// (0x0003f5cc) cell_qdial_pane_t2

0x2d45,	// (0x0003f5df) cell_qdial_pane_t3_ParamLimits

0x2d45,	// (0x0003f5df) cell_qdial_pane_t3

0x0002,

0xf18c,	// (0x0004ba26) cell_qdial_pane_t_ParamLimits

0xf18c,	// (0x0004ba26) cell_qdial_pane_t

0xa981,	// (0x0004721b) grid_highlight_pane_cp04

0xad8a,	// (0x00047624) thumbnail_qdial_pane_ParamLimits

0xad8a,	// (0x00047624) thumbnail_qdial_pane

0xade6,	// (0x00047680) list_help_pane

0xadef,	// (0x00047689) scroll_pane_cp02

0x2d58,	// (0x0003f5f2) help_list_pane_t1_ParamLimits

0x2d58,	// (0x0003f5f2) help_list_pane_t1

0x2d92,	// (0x0003f62c) bg_notes_pane_g2

0x2d9a,	// (0x0003f634) bg_notes_pane_g3

0x2da2,	// (0x0003f63c) notes_bg_pane_g1

0x2daa,	// (0x0003f644) notes_bg_pane_g4

0x2db2,	// (0x0003f64c) notes_bg_pane_g5

0x2dba,	// (0x0003f654) notes_bg_pane_g6

0x2dc2,	// (0x0003f65c) notes_bg_pane_g7

0x2dca,	// (0x0003f664) notes_bg_pane_g8

0x2dd2,	// (0x0003f66c) notes_bg_pane_g9

0x0006,

0xf1aa,	// (0x0004ba44) notes_bg_pane_g

0x2dda,	// (0x0003f674) list_notes_text_pane_ParamLimits

0x2dda,	// (0x0003f674) list_notes_text_pane

0xadf8,	// (0x00047692) list_notes_text_pane_g1

0x1285,	// (0x0003db1f) list_notes_text_pane_t1

0x2e09,	// (0x0003f6a3) listscroll_cale_week_pane

0x2e2e,	// (0x0003f6c8) bg_cale_heading_pane

0xae1b,	// (0x000476b5) bg_cale_pane_cp01

0x2e50,	// (0x0003f6ea) cale_week_corner_pane

0x2e6a,	// (0x0003f704) cale_week_day_heading_pane

0x2e8c,	// (0x0003f726) cale_week_scroll_pane_g1

0x2ea9,	// (0x0003f743) cale_week_scroll_pane_g2

0x2ebc,	// (0x0003f756) cale_week_scroll_pane_g3

0x2ecf,	// (0x0003f769) cale_week_scroll_pane_g4

0x2ee2,	// (0x0003f77c) cale_week_scroll_pane_g5

0x2ef5,	// (0x0003f78f) cale_week_scroll_pane_g6

0x2f08,	// (0x0003f7a2) cale_week_scroll_pane_g7

0x2f1b,	// (0x0003f7b5) cale_week_scroll_pane_g8

0x2f30,	// (0x0003f7ca) cale_week_scroll_pane_g9

0x2f43,	// (0x0003f7dd) cale_week_scroll_pane_g10

0x2f56,	// (0x0003f7f0) cale_week_scroll_pane_g11

0x2f69,	// (0x0003f803) cale_week_scroll_pane_g12

0x2f80,	// (0x0003f81a) cale_week_scroll_pane_g13

0x2f9b,	// (0x0003f835) cale_week_scroll_pane_g14

0x2fb6,	// (0x0003f850) cale_week_scroll_pane_g15

0x000e,

0xf1b9,	// (0x0004ba53) cale_week_scroll_pane_g

0x2fd1,	// (0x0003f86b) cale_week_time_pane

0x2fe6,	// (0x0003f880) grid_cale_week_pane

0xae4b,	// (0x000476e5) scroll_pane_cp08

0x3007,	// (0x0003f8a1) cell_cale_week_pane_ParamLimits

0x3007,	// (0x0003f8a1) cell_cale_week_pane

0x306b,	// (0x0003f905) cale_week_day_heading_pane_t1

0x30a6,	// (0x0003f940) cale_week_day_heading_pane_t2

0x30e1,	// (0x0003f97b) cale_week_day_heading_pane_t3

0x311c,	// (0x0003f9b6) cale_week_day_heading_pane_t4

0x3157,	// (0x0003f9f1) cale_week_day_heading_pane_t5

0x3192,	// (0x0003fa2c) cale_week_day_heading_pane_t6

0x31cd,	// (0x0003fa67) cale_week_day_heading_pane_t7

0x0006,

0xf1d8,	// (0x0004ba72) cale_week_day_heading_pane_t

0xae68,	// (0x00047702) bg_cale_side_pane

0x3208,	// (0x0003faa2) cale_week_time_pane_t1

0x3222,	// (0x0003fabc) cale_week_time_pane_t2

0x323c,	// (0x0003fad6) cale_week_time_pane_t3

0x3256,	// (0x0003faf0) cale_week_time_pane_t4

0x3270,	// (0x0003fb0a) cale_week_time_pane_t5

0x328c,	// (0x0003fb26) cale_week_time_pane_t6

0x32ae,	// (0x0003fb48) cale_week_time_pane_t7

0x32d2,	// (0x0003fb6c) cale_week_time_pane_t8

0x0007,

0xf1e7,	// (0x0004ba81) cale_week_time_pane_t

0x32f8,	// (0x0003fb92) cell_cale_week_pane_g2

0x330b,	// (0x0003fba5) cell_cale_week_pane_g3_ParamLimits

0x330b,	// (0x0003fba5) cell_cale_week_pane_g3

0xae76,	// (0x00047710) grid_highlight_pane_cp07

0xae7e,	// (0x00047718) listscroll_gms_pane

0xae88,	// (0x00047722) grid_gms_pane

0xae91,	// (0x0004772b) listscroll_gms_pane_g1

0xae99,	// (0x00047733) listscroll_gms_pane_g2

0x0001,

0xf1f8,	// (0x0004ba92) listscroll_gms_pane_g

0x3323,	// (0x0003fbbd) scroll_pane_cp010

0x332e,	// (0x0003fbc8) cell_gms_pane_ParamLimits

0x332e,	// (0x0003fbc8) cell_gms_pane

0x333e,	// (0x0003fbd8) cell_gms_pane_g1

0xaea1,	// (0x0004773b) cell_gms_pane_g2

0xadf8,	// (0x00047692) cell_gms_pane_g3

0xaea9,	// (0x00047743) cell_gms_pane_g4

0x0003,

0xf1fd,	// (0x0004ba97) cell_gms_pane_g

0xaeb2,	// (0x0004774c) grid_highlight_pane_cp09

0x58b6,	// (0x00042150) phob_pre_status_pane_g1

0x58be,	// (0x00042158) phob_pre_status_pane_g2

0x58c6,	// (0x00042160) phob_pre_status_pane_g3

0x58ce,	// (0x00042168) phob_pre_status_pane_g4

0x0004,

0xf5ec,	// (0x0004be86) phob_pre_status_pane_g

0x58de,	// (0x00042178) phob_pre_status_pane_t1

0x58ee,	// (0x00042188) phob_pre_status_pane_t2

0x58fe,	// (0x00042198) phob_pre_status_pane_t3

0x0002,

0xf5f7,	// (0x0004be91) phob_pre_status_pane_t

0xa981,	// (0x0004721b) bg_list_pane_cp05

0x334e,	// (0x0003fbe8) grid_vorec_pane

0x335a,	// (0x0003fbf4) vorec_t1

0x3368,	// (0x0003fc02) vorec_t2

0x3376,	// (0x0003fc10) vorec_t3

0x3384,	// (0x0003fc1e) vorec_t4

0x3392,	// (0x0003fc2c) vorec_t5

0x33a0,	// (0x0003fc3a) vorec_t6

0x0006,

0xf206,	// (0x0004baa0) vorec_t

0x33bc,	// (0x0003fc56) wait_bar_pane_cp01

0x33c4,	// (0x0003fc5e) cell_vorec_pane_ParamLimits

0x33c4,	// (0x0003fc5e) cell_vorec_pane

0xaeba,	// (0x00047754) cell_vorec_pane_g1

0xa981,	// (0x0004721b) grid_highlight_pane_cp05

0x33e7,	// (0x0003fc81) cams_zoom_pane

0x33f3,	// (0x0003fc8d) image_vga_pane

0x3402,	// (0x0003fc9c) main_camera_pane_g1

0x3410,	// (0x0003fcaa) main_camera_pane_g2

0x341c,	// (0x0003fcb6) main_camera_pane_g3

0x3428,	// (0x0003fcc2) main_camera_pane_g4

0x3434,	// (0x0003fcce) main_camera_pane_g5

0x3440,	// (0x0003fcda) main_camera_pane_g6

0x344c,	// (0x0003fce6) main_camera_pane_g7

0x0007,

0xf215,	// (0x0004baaf) main_camera_pane_g

0x3458,	// (0x0003fcf2) main_camera_pane_t1

0x346a,	// (0x0003fd04) main_camera_pane_t2

0x0001,

0xf226,	// (0x0004bac0) main_camera_pane_t

0x348b,	// (0x0003fd25) cams_zoom_pane_cp_ParamLimits

0x348b,	// (0x0003fd25) cams_zoom_pane_cp

0x34af,	// (0x0003fd49) image_cif_pane_ParamLimits

0x34af,	// (0x0003fd49) image_cif_pane

0x34cd,	// (0x0003fd67) image_subqcif_pane

0x34d5,	// (0x0003fd6f) main_video_pane_g1_ParamLimits

0x34d5,	// (0x0003fd6f) main_video_pane_g1

0x34f5,	// (0x0003fd8f) main_video_pane_g2_ParamLimits

0x34f5,	// (0x0003fd8f) main_video_pane_g2

0x3525,	// (0x0003fdbf) main_video_pane_g3_ParamLimits

0x3525,	// (0x0003fdbf) main_video_pane_g3

0x354e,	// (0x0003fde8) main_video_pane_g4_ParamLimits

0x354e,	// (0x0003fde8) main_video_pane_g4

0x3577,	// (0x0003fe11) main_video_pane_g5_ParamLimits

0x3577,	// (0x0003fe11) main_video_pane_g5

0xaed0,	// (0x0004776a) main_video_pane_g6_ParamLimits

0xaed0,	// (0x0004776a) main_video_pane_g6

0x0006,

0xf22b,	// (0x0004bac5) main_video_pane_g_ParamLimits

0xf22b,	// (0x0004bac5) main_video_pane_g

0x3599,	// (0x0003fe33) main_video_pane_t1_ParamLimits

0x3599,	// (0x0003fe33) main_video_pane_t1

0xaeea,	// (0x00047784) cams_zoom_pane_g1

0xaef3,	// (0x0004778d) cams_zoom_pane_g2

0xaefc,	// (0x00047796) cams_zoom_pane_g3

0xaf05,	// (0x0004779f) cams_zoom_pane_g4

0x0003,

0xf23a,	// (0x0004bad4) cams_zoom_pane_g

0x35e3,	// (0x0003fe7d) grid_cams_pane

0x35f1,	// (0x0003fe8b) linegrid_cams_pane

0x35ff,	// (0x0003fe99) cell_cams_pane_ParamLimits

0x35ff,	// (0x0003fe99) cell_cams_pane

0xaf0e,	// (0x000477a8) cams_burst_image_pane

0xaf16,	// (0x000477b0) cell_cams_pane_g1

0xa981,	// (0x0004721b) grid_highlight_pane_cp03

0xad40,	// (0x000475da) mp_bg_pane_g1

0xa981,	// (0x0004721b) bg_list_pane_cp03

0xcae9,	// (0x00049383) bg_mp_pane

0xcaf1,	// (0x0004938b) grid_mp_pane

0xcaf9,	// (0x00049393) media_player_g1

0xcb01,	// (0x0004939b) media_player_t1

0xcb0f,	// (0x000493a9) media_player_t2

0xcb1d,	// (0x000493b7) media_player_t3

0xcb2b,	// (0x000493c5) media_player_t4

0xcb39,	// (0x000493d3) media_player_t5

0xcb47,	// (0x000493e1) media_player_t6

0xcb55,	// (0x000493ef) media_player_t7

0x0006,

0xf5d6,	// (0x0004be70) media_player_t

0xcb63,	// (0x000493fd) wait_bar_pane_cp02

0xf5bb,	// (0x0004be55) main_usb_pane_t

0x58ad,	// (0x00042147) cell_mp_pane

0xad40,	// (0x000475da) cell_mp_pane_g1

0xa981,	// (0x0004721b) grid_highlight_pane_cp06

0xaf1e,	// (0x000477b8) grid_skin_colour_pane

0xaf26,	// (0x000477c0) list_highlight_pane_cp03

0x3612,	// (0x0003feac) skin_g1

0xaf2e,	// (0x000477c8) skin_t1

0xaf3d,	// (0x000477d7) skin_t2

0x0001,

0xf26f,	// (0x0004bb09) skin_t

0x361c,	// (0x0003feb6) cell_skin_colour_pane_ParamLimits

0x361c,	// (0x0003feb6) cell_skin_colour_pane

0xaf4b,	// (0x000477e5) cell_skin_colour_pane_g1

0x36a0,	// (0x0003ff3a) call_video_g1_ParamLimits

0x36a0,	// (0x0003ff3a) call_video_g1

0x36b0,	// (0x0003ff4a) call_video_g2_ParamLimits

0x36b0,	// (0x0003ff4a) call_video_g2

0x0001,

0xf274,	// (0x0004bb0e) call_video_g_ParamLimits

0xf274,	// (0x0004bb0e) call_video_g

0x370a,	// (0x0003ffa4) call_video_uplink_pane_cp1_ParamLimits

0x370a,	// (0x0003ffa4) call_video_uplink_pane_cp1

0xaf5d,	// (0x000477f7) call_video_uplink_pane_cp2

0x37d6,	// (0x00040070) video_down_crop_pane_ParamLimits

0x37d6,	// (0x00040070) video_down_crop_pane

0x38c8,	// (0x00040162) video_down_pane_ParamLimits

0x38c8,	// (0x00040162) video_down_pane

0xaf65,	// (0x000477ff) video_down_subqcif_pane_ParamLimits

0xaf65,	// (0x000477ff) video_down_subqcif_pane

0xaf7d,	// (0x00047817) video_down_subqcif_pane_cp_ParamLimits

0xaf7d,	// (0x00047817) video_down_subqcif_pane_cp

0xafa3,	// (0x0004783d) im_reading_pane_ParamLimits

0xafa3,	// (0x0004783d) im_reading_pane

0x39ea,	// (0x00040284) im_writing_pane_ParamLimits

0x39ea,	// (0x00040284) im_writing_pane

0x3a08,	// (0x000402a2) im_reading_pane_t1

0xafbd,	// (0x00047857) list_im_pane

0xafce,	// (0x00047868) scroll_pane_cp07

0x3a63,	// (0x000402fd) im_writing_pane_t1_ParamLimits

0x3a63,	// (0x000402fd) im_writing_pane_t1

0xafe7,	// (0x00047881) im_writing_pane_t2_ParamLimits

0xafe7,	// (0x00047881) im_writing_pane_t2

0x0001,

0xf27e,	// (0x0004bb18) im_writing_pane_t_ParamLimits

0xf27e,	// (0x0004bb18) im_writing_pane_t

0xa981,	// (0x0004721b) input_focus_pane_cp04

0xa981,	// (0x0004721b) input_focus_pane_cp05

0x3a75,	// (0x0004030f) list_im_single_pane_ParamLimits

0x3a75,	// (0x0004030f) list_im_single_pane

0x3a9d,	// (0x00040337) list_single_im_pane_t1

0x5871,	// (0x0004210b) blid_accuracy_pane

0x5879,	// (0x00042113) blid_compass_pane

0x5883,	// (0x0004211d) main_location_t1

0x5891,	// (0x0004212b) main_location_t2

0x589f,	// (0x00042139) main_location_t3

0x0002,

0xf5e5,	// (0x0004be7f) main_location_t

0xa981,	// (0x0004721b) aid_levels_location

0xad40,	// (0x000475da) blid_accuracy_pane_g1

0xad40,	// (0x000475da) blid_accuracy_pane_g2

0x0001,

0xf2e0,	// (0x0004bb7a) blid_accuracy_pane_g

0xb02f,	// (0x000478c9) wml_content_pane

0xb07b,	// (0x00047915) wml_button_pane_ParamLimits

0xb07b,	// (0x00047915) wml_button_pane

0x3aac,	// (0x00040346) wml_list_single_large_pane_ParamLimits

0x3aac,	// (0x00040346) wml_list_single_large_pane

0x3add,	// (0x00040377) wml_list_single_medium_pane_ParamLimits

0x3add,	// (0x00040377) wml_list_single_medium_pane

0x3b15,	// (0x000403af) wml_list_single_small_pane_ParamLimits

0x3b15,	// (0x000403af) wml_list_single_small_pane

0xb08f,	// (0x00047929) wml_selection_box_pane_ParamLimits

0xb08f,	// (0x00047929) wml_selection_box_pane

0xb0a2,	// (0x0004793c) wml_list_single_pane_t1

0xb0b1,	// (0x0004794b) wml_list_single_medium_pane_t1

0xb0c0,	// (0x0004795a) wml_list_single_large_pane_t1

0xb0cf,	// (0x00047969) input_focus_pane_cp02_ParamLimits

0xb0cf,	// (0x00047969) input_focus_pane_cp02

0xb0e2,	// (0x0004797c) wml_selection_box_pane_g1

0xb0eb,	// (0x00047985) wml_selection_box_pane_t1_ParamLimits

0xb0eb,	// (0x00047985) wml_selection_box_pane_t1

0xac07,	// (0x000474a1) bg_wml_button_pane_ParamLimits

0xac07,	// (0x000474a1) bg_wml_button_pane

0xb103,	// (0x0004799d) wml_button_pane_g1

0xb10b,	// (0x000479a5) wml_button_pane_t1

0xb103,	// (0x0004799d) wml_button_bg_pane_g1

0xb11b,	// (0x000479b5) wml_button_bg_pane_g2

0xb123,	// (0x000479bd) wml_button_bg_pane_g3

0xb12b,	// (0x000479c5) wml_button_bg_pane_g4

0xb133,	// (0x000479cd) wml_button_bg_pane_g5

0xb13b,	// (0x000479d5) wml_button_bg_pane_g6

0xb143,	// (0x000479dd) wml_button_bg_pane_g7

0xb14b,	// (0x000479e5) wml_button_bg_pane_g8

0xb153,	// (0x000479ed) wml_button_bg_pane_g9

0x0008,

0xf283,	// (0x0004bb1d) wml_button_bg_pane_g

0x3b56,	// (0x000403f0) bg_list_pane_cp02

0xb15b,	// (0x000479f5) mce_header_pane_ParamLimits

0xb15b,	// (0x000479f5) mce_header_pane

0xb171,	// (0x00047a0b) mce_icon_pane

0xb171,	// (0x00047a0b) mce_image_pane

0xb17a,	// (0x00047a14) mce_text_pane_ParamLimits

0xb17a,	// (0x00047a14) mce_text_pane

0x3b60,	// (0x000403fa) scroll_pane_cp03

0xb065,	// (0x000478ff) scroll_pane_cp04

0xb18d,	// (0x00047a27) scroll_pane_cp05_ParamLimits

0xb18d,	// (0x00047a27) scroll_pane_cp05

0x3b6a,	// (0x00040404) mce_header_field_pane_ParamLimits

0x3b6a,	// (0x00040404) mce_header_field_pane

0x3b8a,	// (0x00040424) mce_header_field_pane_2_ParamLimits

0x3b8a,	// (0x00040424) mce_header_field_pane_2

0x3ba0,	// (0x0004043a) mce_header_field_pane_3

0x3ba8,	// (0x00040442) list_single_mce_message_pane_ParamLimits

0x3ba8,	// (0x00040442) list_single_mce_message_pane

0x3bda,	// (0x00040474) list_single_mce_smart_pane_ParamLimits

0x3bda,	// (0x00040474) list_single_mce_smart_pane

0xb199,	// (0x00047a33) input_focus_pane_cp03

0xb1a2,	// (0x00047a3c) list_header_data_pane

0x3c17,	// (0x000404b1) mce_header_field_pane_t1

0x3c27,	// (0x000404c1) list_single_mce_header_pane_ParamLimits

0x3c27,	// (0x000404c1) list_single_mce_header_pane

0xb1aa,	// (0x00047a44) list_single_mce_header_pane_t1

0xb1b9,	// (0x00047a53) list_single_mce_message_pane_g1

0xb1c1,	// (0x00047a5b) list_single_mce_message_pane_t1

0x3c7e,	// (0x00040518) bg_cale_heading_pane_cp01_ParamLimits

0x3c7e,	// (0x00040518) bg_cale_heading_pane_cp01

0xb1cf,	// (0x00047a69) bg_cale_pane_cp02_ParamLimits

0xb1cf,	// (0x00047a69) bg_cale_pane_cp02

0x3cc1,	// (0x0004055b) cale_month_corner_pane

0x3cdb,	// (0x00040575) cale_month_day_heading_pane_ParamLimits

0x3cdb,	// (0x00040575) cale_month_day_heading_pane

0x3d36,	// (0x000405d0) cale_month_pane_g1_ParamLimits

0x3d36,	// (0x000405d0) cale_month_pane_g1

0x3d6e,	// (0x00040608) cale_month_pane_g2_ParamLimits

0x3d6e,	// (0x00040608) cale_month_pane_g2

0x3d99,	// (0x00040633) cale_month_pane_g3_ParamLimits

0x3d99,	// (0x00040633) cale_month_pane_g3

0x3de9,	// (0x00040683) cale_month_pane_g4_ParamLimits

0x3de9,	// (0x00040683) cale_month_pane_g4

0x3e39,	// (0x000406d3) cale_month_pane_g5_ParamLimits

0x3e39,	// (0x000406d3) cale_month_pane_g5

0x3e89,	// (0x00040723) cale_month_pane_g6_ParamLimits

0x3e89,	// (0x00040723) cale_month_pane_g6

0x3ed9,	// (0x00040773) cale_month_pane_g7_ParamLimits

0x3ed9,	// (0x00040773) cale_month_pane_g7

0x3f41,	// (0x000407db) cale_month_pane_g8_ParamLimits

0x3f41,	// (0x000407db) cale_month_pane_g8

0x3fa9,	// (0x00040843) cale_month_pane_g9_ParamLimits

0x3fa9,	// (0x00040843) cale_month_pane_g9

0x4007,	// (0x000408a1) cale_month_pane_g10_ParamLimits

0x4007,	// (0x000408a1) cale_month_pane_g10

0x4065,	// (0x000408ff) cale_month_pane_g11_ParamLimits

0x4065,	// (0x000408ff) cale_month_pane_g11

0x40b9,	// (0x00040953) cale_month_pane_g12_ParamLimits

0x40b9,	// (0x00040953) cale_month_pane_g12

0x410f,	// (0x000409a9) cale_month_pane_g13_ParamLimits

0x410f,	// (0x000409a9) cale_month_pane_g13

0x000c,

0xf296,	// (0x0004bb30) cale_month_pane_g_ParamLimits

0xf296,	// (0x0004bb30) cale_month_pane_g

0x4165,	// (0x000409ff) cale_month_week_pane

0x417a,	// (0x00040a14) grid_cale_month_pane_ParamLimits

0x417a,	// (0x00040a14) grid_cale_month_pane

0x41cc,	// (0x00040a66) cale_month_day_heading_pane_t1

0x4252,	// (0x00040aec) cale_month_day_heading_pane_t2

0x42e3,	// (0x00040b7d) cale_month_day_heading_pane_t3

0x4374,	// (0x00040c0e) cale_month_day_heading_pane_t4

0x4405,	// (0x00040c9f) cale_month_day_heading_pane_t5

0x4496,	// (0x00040d30) cale_month_day_heading_pane_t6

0x4533,	// (0x00040dcd) cale_month_day_heading_pane_t7

0x0006,

0xf2b1,	// (0x0004bb4b) cale_month_day_heading_pane_t

0xae68,	// (0x00047702) bg_cale_side_pane_cp01

0x45dc,	// (0x00040e76) cale_month_week_pane_t1

0x45f5,	// (0x00040e8f) cale_month_week_pane_t2

0x460e,	// (0x00040ea8) cale_month_week_pane_t3

0x4627,	// (0x00040ec1) cale_month_week_pane_t4

0x4644,	// (0x00040ede) cale_month_week_pane_t5

0x4665,	// (0x00040eff) cale_month_week_pane_t6

0x0005,

0xf2c0,	// (0x0004bb5a) cale_month_week_pane_t

0x4686,	// (0x00040f20) cell_cale_month_pane_ParamLimits

0x4686,	// (0x00040f20) cell_cale_month_pane

0x47ac,	// (0x00041046) cell_cale_month_pane_g1

0x47b8,	// (0x00041052) cell_cale_month_pane_t1_ParamLimits

0x47b8,	// (0x00041052) cell_cale_month_pane_t1

0xae76,	// (0x00047710) grid_highlight_pane_cp08

0xad40,	// (0x000475da) main_smil_g1

0x47d8,	// (0x00041072) smil_status_pane

0xb20e,	// (0x00047aa8) smil_text_pane

0xca09,	// (0x000492a3) bg_popup_call3_rect_pane_g8

0xca11,	// (0x000492ab) bg_popup_call3_rect_pane_g9

0x0008,

0xf579,	// (0x0004be13) bg_popup_call3_rect_pane_g

0xcc58,	// (0x000494f2) smil_status_volume_pane_g1

0xb218,	// (0x00047ab2) smil_status_pane_t1

0x5c93,	// (0x0004252d) volume_smil_pane

0xb22f,	// (0x00047ac9) list_smil_text_pane

0x47eb,	// (0x00041085) scroll_pane_cp011

0x47f6,	// (0x00041090) smil_text_list_pane_t1_ParamLimits

0x47f6,	// (0x00041090) smil_text_list_pane_t1

0x488a,	// (0x00041124) aid_volume_smil_ParamLimits

0x488a,	// (0x00041124) aid_volume_smil

0xad40,	// (0x000475da) smil_volume_pane_g1

0xad40,	// (0x000475da) smil_volume_pane_g2

0x0001,

0xf2e0,	// (0x0004bb7a) smil_volume_pane_g

0x2e09,	// (0x0003f6a3) listscroll_cale_day_pane

0xb239,	// (0x00047ad3) bg_cale_pane

0xb251,	// (0x00047aeb) list_cale_pane

0xb274,	// (0x00047b0e) scroll_pane_cp09

0xb285,	// (0x00047b1f) cale_bg_pane_g1

0xb28d,	// (0x00047b27) cale_bg_pane_g2

0xb295,	// (0x00047b2f) cale_bg_pane_g3

0xb29d,	// (0x00047b37) cale_bg_pane_g4

0xb2a5,	// (0x00047b3f) cale_bg_pane_g5

0xb2ad,	// (0x00047b47) cale_bg_pane_g6

0xb2b5,	// (0x00047b4f) cale_bg_pane_g7

0xb2bd,	// (0x00047b57) cale_bg_pane_g8

0xb2c5,	// (0x00047b5f) cale_bg_pane_g9

0x0008,

0xf2e5,	// (0x0004bb7f) cale_bg_pane_g

0x48ac,	// (0x00041146) list_cale_time_pane_ParamLimits

0x48ac,	// (0x00041146) list_cale_time_pane

0x48cc,	// (0x00041166) list_cale_time_pane_g1_ParamLimits

0x48cc,	// (0x00041166) list_cale_time_pane_g1

0xb2cd,	// (0x00047b67) list_cale_time_pane_g2_ParamLimits

0xb2cd,	// (0x00047b67) list_cale_time_pane_g2

0x48d8,	// (0x00041172) list_cale_time_pane_g3_ParamLimits

0x48d8,	// (0x00041172) list_cale_time_pane_g3

0x48e6,	// (0x00041180) list_cale_time_pane_g4_ParamLimits

0x48e6,	// (0x00041180) list_cale_time_pane_g4

0x48f4,	// (0x0004118e) list_cale_time_pane_g5_ParamLimits

0x48f4,	// (0x0004118e) list_cale_time_pane_g5

0x0005,

0xf2f8,	// (0x0004bb92) list_cale_time_pane_g_ParamLimits

0xf2f8,	// (0x0004bb92) list_cale_time_pane_g

0x4902,	// (0x0004119c) list_cale_time_pane_t1_ParamLimits

0x4902,	// (0x0004119c) list_cale_time_pane_t1

0x492a,	// (0x000411c4) list_cale_time_pane_t2_ParamLimits

0x492a,	// (0x000411c4) list_cale_time_pane_t2

0x4c0e,	// (0x000414a8) aid_blid_cardinal_pane

0x4c50,	// (0x000414ea) compass_pane_t4

0x4952,	// (0x000411ec) list_cale_time_pane_t4_ParamLimits

0x4952,	// (0x000411ec) list_cale_time_pane_t4

0x4c5e,	// (0x000414f8) compass_pane_t5

0x4c6e,	// (0x00041508) compass_pane_t6

0x4c7c,	// (0x00041516) compass_pane_t7

0xb720,	// (0x00047fba) navi_pane_cc_t1

0xb875,	// (0x0004810f) aid_phob_thumbnail_center_pane

0x536a,	// (0x00041c04) main_postcard_pane_g4_ParamLimits

0x0002,

0xf305,	// (0x0004bb9f) list_cale_time_pane_t_ParamLimits

0xf305,	// (0x0004bb9f) list_cale_time_pane_t

0xa5d8,	// (0x00046e72) bg_popup_window_pane_cp02_ParamLimits

0xa5d8,	// (0x00046e72) bg_popup_window_pane_cp02

0xb2e7,	// (0x00047b81) heading_pane_cp01_ParamLimits

0xb2e7,	// (0x00047b81) heading_pane_cp01

0xb2f3,	// (0x00047b8d) loc_req_pane_ParamLimits

0xb2f3,	// (0x00047b8d) loc_req_pane

0xb303,	// (0x00047b9d) loc_type_pane_ParamLimits

0xb303,	// (0x00047b9d) loc_type_pane

0xb315,	// (0x00047baf) loc_type_pane_t1_ParamLimits

0xb315,	// (0x00047baf) loc_type_pane_t1

0xb327,	// (0x00047bc1) loc_type_pane_t2_ParamLimits

0xb327,	// (0x00047bc1) loc_type_pane_t2

0xb339,	// (0x00047bd3) loc_type_pane_t3_ParamLimits

0xb339,	// (0x00047bd3) loc_type_pane_t3

0x0002,

0xf30c,	// (0x0004bba6) loc_type_pane_t_ParamLimits

0xf30c,	// (0x0004bba6) loc_type_pane_t

0xb34b,	// (0x00047be5) list_loc_req_pane

0xb355,	// (0x00047bef) scroll_pane_cp012

0x13ad,	// (0x0003dc47) list_single_loc_request_popup_menu_pane_ParamLimits

0x13ad,	// (0x0003dc47) list_single_loc_request_popup_menu_pane

0xb360,	// (0x00047bfa) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xb360,	// (0x00047bfa) list_single_loc_request_popup_menu_pane_g1

0xb36c,	// (0x00047c06) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xb36c,	// (0x00047c06) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf313,	// (0x0004bbad) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf313,	// (0x0004bbad) list_single_loc_request_popup_menu_pane_g

0xb378,	// (0x00047c12) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xb378,	// (0x00047c12) list_single_loc_request_popup_menu_pane_t1

0x497a,	// (0x00041214) bg_popup_window_pane_cp03_ParamLimits

0x497a,	// (0x00041214) bg_popup_window_pane_cp03

0x4988,	// (0x00041222) heading_loc_req_pane_ParamLimits

0x4988,	// (0x00041222) heading_loc_req_pane

0x4994,	// (0x0004122e) popup_dyc_status_message_window_g1_ParamLimits

0x4994,	// (0x0004122e) popup_dyc_status_message_window_g1

0x49a0,	// (0x0004123a) popup_dyc_status_message_window_t1_ParamLimits

0x49a0,	// (0x0004123a) popup_dyc_status_message_window_t1

0x49b2,	// (0x0004124c) popup_dyc_status_message_window_t2_ParamLimits

0x49b2,	// (0x0004124c) popup_dyc_status_message_window_t2

0x49c4,	// (0x0004125e) popup_dyc_status_message_window_t3_ParamLimits

0x49c4,	// (0x0004125e) popup_dyc_status_message_window_t3

0x0002,

0xf318,	// (0x0004bbb2) popup_dyc_status_message_window_t_ParamLimits

0xf318,	// (0x0004bbb2) popup_dyc_status_message_window_t

0xa981,	// (0x0004721b) bg_heading_pane_cp01

0xb38e,	// (0x00047c28) heading_loc_req_pane_g1

0xb396,	// (0x00047c30) heading_loc_req_pane_g2

0xb39e,	// (0x00047c38) heading_loc_req_pane_g3

0x0002,

0xf31f,	// (0x0004bbb9) heading_loc_req_pane_g

0xb3a6,	// (0x00047c40) heading_loc_req_pane_t1

0xb3b5,	// (0x00047c4f) bg_popup_sub_pane_cp01_ParamLimits

0xb3b5,	// (0x00047c4f) bg_popup_sub_pane_cp01

0xb3c3,	// (0x00047c5d) popup_cale_events_window_g1_ParamLimits

0xb3c3,	// (0x00047c5d) popup_cale_events_window_g1

0xb3e3,	// (0x00047c7d) popup_cale_events_window_g2_ParamLimits

0xb3e3,	// (0x00047c7d) popup_cale_events_window_g2

0x0001,

0xf353,	// (0x0004bbed) popup_cale_events_window_g_ParamLimits

0xf353,	// (0x0004bbed) popup_cale_events_window_g

0xb403,	// (0x00047c9d) popup_cale_events_window_t1_ParamLimits

0xb403,	// (0x00047c9d) popup_cale_events_window_t1

0xb415,	// (0x00047caf) popup_cale_events_window_t2_ParamLimits

0xb415,	// (0x00047caf) popup_cale_events_window_t2

0xb453,	// (0x00047ced) popup_cale_events_window_t3_ParamLimits

0xb453,	// (0x00047ced) popup_cale_events_window_t3

0xb48d,	// (0x00047d27) popup_cale_events_window_t4_ParamLimits

0xb48d,	// (0x00047d27) popup_cale_events_window_t4

0x0003,

0xf358,	// (0x0004bbf2) popup_cale_events_window_t_ParamLimits

0xf358,	// (0x0004bbf2) popup_cale_events_window_t

0x49ee,	// (0x00041288) call_type_pane

0xb57a,	// (0x00047e14) popup_call_status_window_g1

0x49fa,	// (0x00041294) popup_call_status_window_g2

0x4a06,	// (0x000412a0) popup_call_status_window_g3

0x0002,

0xf361,	// (0x0004bbfb) popup_call_status_window_g

0xb4c3,	// (0x00047d5d) call_type_pane_g1

0xb4cc,	// (0x00047d66) call_type_pane_g2

0x0001,

0xf368,	// (0x0004bc02) call_type_pane_g

0xa981,	// (0x0004721b) bg_popup_sub_pane_cp02

0xb4d5,	// (0x00047d6f) listscroll_popup_wml_pane

0xb4dd,	// (0x00047d77) list_wml_pane

0xb4e7,	// (0x00047d81) scroll_pane_cp013

0xb4f2,	// (0x00047d8c) list_single_graphic_popup_wml_pane_ParamLimits

0xb4f2,	// (0x00047d8c) list_single_graphic_popup_wml_pane

0xad40,	// (0x000475da) list_single_graphic_popup_wml_pane_g1

0xb506,	// (0x00047da0) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf36d,	// (0x0004bc07) list_single_graphic_popup_wml_pane_g

0xb50e,	// (0x00047da8) list_single_graphic_popup_wml_pane_t1

0xb524,	// (0x00047dbe) aid_call_pane

0xabff,	// (0x00047499) popup_clock_analogue_window_g1

0xabff,	// (0x00047499) popup_clock_analogue_window_g2

0x4a12,	// (0x000412ac) popup_clock_analogue_window_g3

0x4a12,	// (0x000412ac) popup_clock_analogue_window_g4

0xad40,	// (0x000475da) popup_clock_analogue_window_g5

0x0004,

0xf372,	// (0x0004bc0c) popup_clock_analogue_window_g

0x4a1a,	// (0x000412b4) popup_clock_analogue_window_t1

0x4a28,	// (0x000412c2) clock_digital_number_pane_ParamLimits

0x4a28,	// (0x000412c2) clock_digital_number_pane

0x4a34,	// (0x000412ce) clock_digital_number_pane_cp02_ParamLimits

0x4a34,	// (0x000412ce) clock_digital_number_pane_cp02

0x4a40,	// (0x000412da) clock_digital_number_pane_cp03_ParamLimits

0x4a40,	// (0x000412da) clock_digital_number_pane_cp03

0x4a4c,	// (0x000412e6) clock_digital_number_pane_cp04_ParamLimits

0x4a4c,	// (0x000412e6) clock_digital_number_pane_cp04

0x4a5c,	// (0x000412f6) clock_digital_separator_pane_ParamLimits

0x4a5c,	// (0x000412f6) clock_digital_separator_pane

0x4a68,	// (0x00041302) popup_clock_digital_window_t1

0xad40,	// (0x000475da) clock_digital_number_pane_g1

0xad40,	// (0x000475da) clock_digital_number_pane_g2

0x0001,

0xf2e0,	// (0x0004bb7a) clock_digital_number_pane_g

0xad40,	// (0x000475da) clock_digital_separator_pane_g1

0xad40,	// (0x000475da) clock_digital_separator_pane_g2

0x0001,

0xf2e0,	// (0x0004bb7a) clock_digital_separator_pane_g

0xa981,	// (0x0004721b) bg_popup_window_pane_cp04

0xb52c,	// (0x00047dc6) heading_pane_cp03

0xb534,	// (0x00047dce) listscroll_popup_gms_pane

0xb53c,	// (0x00047dd6) grid_large_graphic_popup_pane

0xb546,	// (0x00047de0) listscroll_popup_gms_pane_g1

0xb54e,	// (0x00047de8) listscroll_popup_gms_pane_g2

0x0001,

0xf37d,	// (0x0004bc17) listscroll_popup_gms_pane_g

0xb065,	// (0x000478ff) scroll_pane_cp014

0xb556,	// (0x00047df0) cell_large_graphic_popup_pane_ParamLimits

0xb556,	// (0x00047df0) cell_large_graphic_popup_pane

0xb588,	// (0x00047e22) cell_large_graphic_popup_pane_g1_ParamLimits

0xb588,	// (0x00047e22) cell_large_graphic_popup_pane_g1

0xb594,	// (0x00047e2e) cell_large_graphic_popup_pane_g2_ParamLimits

0xb594,	// (0x00047e2e) cell_large_graphic_popup_pane_g2

0xb5a0,	// (0x00047e3a) cell_large_graphic_popup_pane_g3_ParamLimits

0xb5a0,	// (0x00047e3a) cell_large_graphic_popup_pane_g3

0xb5ad,	// (0x00047e47) cell_large_graphic_popup_pane_g4_ParamLimits

0xb5ad,	// (0x00047e47) cell_large_graphic_popup_pane_g4

0x0003,

0xf382,	// (0x0004bc1c) cell_large_graphic_popup_pane_g_ParamLimits

0xf382,	// (0x0004bc1c) cell_large_graphic_popup_pane_g

0xb5bd,	// (0x00047e57) grid_highlight_pane_cp010

0xad40,	// (0x000475da) bg_popup_call_pane_g1

0xb5c7,	// (0x00047e61) list_single_graphic_popup_conf_pane_ParamLimits

0xb5c7,	// (0x00047e61) list_single_graphic_popup_conf_pane

0xb5da,	// (0x00047e74) list_highlight_pane_cp01

0xb5e3,	// (0x00047e7d) list_single_graphic_popup_conf_pane_g1

0xb5eb,	// (0x00047e85) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf38b,	// (0x0004bc25) list_single_graphic_popup_conf_pane_g

0xb5f3,	// (0x00047e8d) list_single_graphic_popup_conf_pane_t1

0xb601,	// (0x00047e9b) linegrid_cams_pane_g1

0x4a85,	// (0x0004131f) linegrid_cams_pane_g2

0xadf8,	// (0x00047692) linegrid_cams_pane_g3

0xb60a,	// (0x00047ea4) linegrid_cams_pane_g4

0x4a8e,	// (0x00041328) linegrid_cams_pane_g5

0x4a97,	// (0x00041331) linegrid_cams_pane_g6

0xaea9,	// (0x00047743) linegrid_cams_pane_g7

0x0006,

0xf390,	// (0x0004bc2a) linegrid_cams_pane_g

0xb613,	// (0x00047ead) popup_clock_analogue_window

0xb613,	// (0x00047ead) popup_clock_digital_window

0xa981,	// (0x0004721b) popup_phob_thumbnail_window

0xad40,	// (0x000475da) call_video_uplink_pane_g1

0xb61c,	// (0x00047eb6) call_video_uplink_pane_g2

0x0001,

0xf39f,	// (0x0004bc39) call_video_uplink_pane_g

0xae76,	// (0x00047710) video_uplink_pane

0xb624,	// (0x00047ebe) mce_image_pane_g1

0x4aa0,	// (0x0004133a) mce_image_pane_g2

0x4aa8,	// (0x00041342) mce_image_pane_g3

0x4ab0,	// (0x0004134a) mce_image_pane_g4

0x4ab8,	// (0x00041352) mce_image_pane_g5

0x0004,

0xf3a4,	// (0x0004bc3e) mce_image_pane_g

0xb62e,	// (0x00047ec8) control_top_pane_stacon_cp01_ParamLimits

0xb62e,	// (0x00047ec8) control_top_pane_stacon_cp01

0xb642,	// (0x00047edc) uni_indicator_pane_stacon_cp01_ParamLimits

0xb642,	// (0x00047edc) uni_indicator_pane_stacon_cp01

0xb653,	// (0x00047eed) bg_popup_sub_pane_cp03

0x4ac0,	// (0x0004135a) chi_dic_find_pane

0x4ac8,	// (0x00041362) listscroll_chi_dic_pane

0x4ad1,	// (0x0004136b) main_pane_chidic_g1

0xb65d,	// (0x00047ef7) chi_dic_find_pane_t1

0xb66b,	// (0x00047f05) find_chidic_pane

0xb674,	// (0x00047f0e) chi_dic_list_pane_ParamLimits

0xb674,	// (0x00047f0e) chi_dic_list_pane

0xb685,	// (0x00047f1f) scroll_pane_cp020

0xb68d,	// (0x00047f27) find_chidic_pane_t1

0xa981,	// (0x0004721b) input_focus_pane_cp06

0x4ae4,	// (0x0004137e) list_chi_dic_pane_ParamLimits

0x4ae4,	// (0x0004137e) list_chi_dic_pane

0x4b01,	// (0x0004139b) list_chi_dic_pane_t1_ParamLimits

0x4b01,	// (0x0004139b) list_chi_dic_pane_t1

0xa981,	// (0x0004721b) list_highlight_pane_cp020

0xb69c,	// (0x00047f36) bg_cale_heading_pane_g1

0x4b14,	// (0x000413ae) bg_cale_heading_pane_g2

0x4b1c,	// (0x000413b6) bg_cale_heading_pane_g3

0x4b24,	// (0x000413be) bg_cale_heading_pane_g4

0x4b2e,	// (0x000413c8) bg_cale_heading_pane_g5

0x4b38,	// (0x000413d2) bg_cale_heading_pane_g6

0x4b40,	// (0x000413da) bg_cale_heading_pane_g7

0x4b48,	// (0x000413e2) bg_cale_heading_pane_g8

0x4b52,	// (0x000413ec) bg_cale_heading_pane_g9

0x0008,

0xf3af,	// (0x0004bc49) bg_cale_heading_pane_g

0xb69c,	// (0x00047f36) bg_cale_side_pane_g1

0x4b5c,	// (0x000413f6) bg_cale_side_pane_g2

0x4b66,	// (0x00041400) bg_cale_side_pane_g3

0x4b70,	// (0x0004140a) bg_cale_side_pane_g4

0x4b7a,	// (0x00041414) bg_cale_side_pane_g5

0x4b84,	// (0x0004141e) bg_cale_side_pane_g6

0x4b8e,	// (0x00041428) bg_cale_side_pane_g7

0x4b98,	// (0x00041432) bg_cale_side_pane_g8

0x4ba0,	// (0x0004143a) bg_cale_side_pane_g9

0x0008,

0xf3c2,	// (0x0004bc5c) bg_cale_side_pane_g

0x4ba8,	// (0x00041442) popup_call_status_window_ParamLimits

0x4ba8,	// (0x00041442) popup_call_status_window

0xb6a4,	// (0x00047f3e) stacon_top_pane

0xb6ac,	// (0x00047f46) status_pane_ParamLimits

0xb6ac,	// (0x00047f46) status_pane

0xb6c1,	// (0x00047f5b) status_small_pane

0xb6c9,	// (0x00047f63) control_pane

0xa981,	// (0x0004721b) stacon_bottom_pane

0xb6d1,	// (0x00047f6b) list_single_mce_smart_pane_t1_ParamLimits

0xb6d1,	// (0x00047f6b) list_single_mce_smart_pane_t1

0xb6e4,	// (0x00047f7e) list_single_mce_smart_pane_t2_ParamLimits

0xb6e4,	// (0x00047f7e) list_single_mce_smart_pane_t2

0x0001,

0xf3d5,	// (0x0004bc6f) list_single_mce_smart_pane_t_ParamLimits

0xf3d5,	// (0x0004bc6f) list_single_mce_smart_pane_t

0x4bb4,	// (0x0004144e) compass_pane

0x4bc0,	// (0x0004145a) main_location2_pane_t1

0x4bd4,	// (0x0004146e) main_location2_pane_t2

0x4be8,	// (0x00041482) main_location2_pane_t3

0x0003,

0xf3da,	// (0x0004bc74) main_location2_pane_t

0xb703,	// (0x00047f9d) compass_pane_g1_ParamLimits

0xb703,	// (0x00047f9d) compass_pane_g1

0x4c32,	// (0x000414cc) compass_pane_t1

0x4c41,	// (0x000414db) compass_pane_t2

0x0005,

0xf3e3,	// (0x0004bc7d) compass_pane_t

0x4c8c,	// (0x00041526) text_secondary_cp61

0xb717,	// (0x00047fb1) navi_pane_cams_g5

0xb73a,	// (0x00047fd4) navi_pane_im_t1

0xb748,	// (0x00047fe2) navi_pane_mp_g1_ParamLimits

0xb748,	// (0x00047fe2) navi_pane_mp_g1

0xb75c,	// (0x00047ff6) navi_pane_mp_g2_ParamLimits

0xb75c,	// (0x00047ff6) navi_pane_mp_g2

0xb768,	// (0x00048002) navi_pane_mp_g3_ParamLimits

0xb768,	// (0x00048002) navi_pane_mp_g3

0x0002,

0xf3f7,	// (0x0004bc91) navi_pane_mp_g_ParamLimits

0xf3f7,	// (0x0004bc91) navi_pane_mp_g

0xb774,	// (0x0004800e) navi_pane_mp_t1

0xb782,	// (0x0004801c) navi_pane_mp_t2

0x0002,

0xf3fe,	// (0x0004bc98) navi_pane_mp_t

0xb7be,	// (0x00048058) navi_pane_vt_g1

0xb774,	// (0x0004800e) navi_pane_vt_t1

0xb7c6,	// (0x00048060) navi_slider_pane

0xb7ce,	// (0x00048068) zooming_pane

0xb7d6,	// (0x00048070) navi_slider_pane_g1

0x4dc1,	// (0x0004165b) navi_slider_pane_g2

0x0006,

0xf405,	// (0x0004bc9f) navi_slider_pane_g

0xb7fa,	// (0x00048094) aid_levels_zoom

0xb802,	// (0x0004809c) zooming_pane_g1

0xb80a,	// (0x000480a4) zooming_pane_g2

0xb80a,	// (0x000480a4) zooming_pane_g3

0x0002,

0xf414,	// (0x0004bcae) zooming_pane_g

0xb812,	// (0x000480ac) level_10_zoom

0xb81b,	// (0x000480b5) level_11_zoom

0xb824,	// (0x000480be) level_1_zoom

0xb82d,	// (0x000480c7) level_2_zoom

0xb836,	// (0x000480d0) level_3_zoom

0xb83f,	// (0x000480d9) level_4_zoom

0xb848,	// (0x000480e2) level_5_zoom

0xb851,	// (0x000480eb) level_6_zoom

0xb85a,	// (0x000480f4) level_7_zoom

0xb863,	// (0x000480fd) level_8_zoom

0xb86c,	// (0x00048106) level_9_zoom

0xb87d,	// (0x00048117) popup_phob_thumbnail_window_g1

0xb885,	// (0x0004811f) popup_phob_thumbnail_window_g2

0x0001,

0xf41b,	// (0x0004bcb5) popup_phob_thumbnail_window_g

0xcb6b,	// (0x00049405) level_1_location

0xcb73,	// (0x0004940d) level_2_location

0xcb7b,	// (0x00049415) level_3_location

0xcb83,	// (0x0004941d) level_4_location

0xb7ce,	// (0x00048068) level_5_location

0x4dd3,	// (0x0004166d) mce_icon_pane_g1

0x4ddb,	// (0x00041675) mce_icon_pane_g2

0x0001,

0xf420,	// (0x0004bcba) mce_icon_pane_g

0x4de3,	// (0x0004167d) main_mup_pane_g1_ParamLimits

0x4de3,	// (0x0004167d) main_mup_pane_g1

0x4dfb,	// (0x00041695) main_mup_pane_g2_ParamLimits

0x4dfb,	// (0x00041695) main_mup_pane_g2

0x4e17,	// (0x000416b1) main_mup_pane_g3_ParamLimits

0x4e17,	// (0x000416b1) main_mup_pane_g3

0x4e33,	// (0x000416cd) main_mup_pane_g4_ParamLimits

0x4e33,	// (0x000416cd) main_mup_pane_g4

0x4e4f,	// (0x000416e9) main_mup_pane_g5_ParamLimits

0x4e4f,	// (0x000416e9) main_mup_pane_g5

0x4e70,	// (0x0004170a) main_mup_pane_g6_ParamLimits

0x4e70,	// (0x0004170a) main_mup_pane_g6

0x4e8c,	// (0x00041726) main_mup_pane_g7_ParamLimits

0x4e8c,	// (0x00041726) main_mup_pane_g7

0x4ea8,	// (0x00041742) main_mup_pane_g8_ParamLimits

0x4ea8,	// (0x00041742) main_mup_pane_g8

0x4ec4,	// (0x0004175e) main_mup_pane_g9_ParamLimits

0x4ec4,	// (0x0004175e) main_mup_pane_g9

0x4ee3,	// (0x0004177d) main_mup_pane_g10_ParamLimits

0x4ee3,	// (0x0004177d) main_mup_pane_g10

0x4f02,	// (0x0004179c) main_mup_pane_g11_ParamLimits

0x4f02,	// (0x0004179c) main_mup_pane_g11

0x4f1a,	// (0x000417b4) main_mup_pane_g12_ParamLimits

0x4f1a,	// (0x000417b4) main_mup_pane_g12

0x4f28,	// (0x000417c2) main_mup_pane_g13_ParamLimits

0x4f28,	// (0x000417c2) main_mup_pane_g13

0x000c,

0xf425,	// (0x0004bcbf) main_mup_pane_g_ParamLimits

0xf425,	// (0x0004bcbf) main_mup_pane_g

0x4f3e,	// (0x000417d8) main_mup_pane_t1_ParamLimits

0x4f3e,	// (0x000417d8) main_mup_pane_t1

0x4f5b,	// (0x000417f5) main_mup_pane_t2_ParamLimits

0x4f5b,	// (0x000417f5) main_mup_pane_t2

0x4f75,	// (0x0004180f) main_mup_pane_t3_ParamLimits

0x4f75,	// (0x0004180f) main_mup_pane_t3

0x4f8f,	// (0x00041829) main_mup_pane_t4_ParamLimits

0x4f8f,	// (0x00041829) main_mup_pane_t4

0x4fa1,	// (0x0004183b) main_mup_pane_t5_ParamLimits

0x4fa1,	// (0x0004183b) main_mup_pane_t5

0x4fb3,	// (0x0004184d) main_mup_pane_t6_ParamLimits

0x4fb3,	// (0x0004184d) main_mup_pane_t6

0x0005,

0xf440,	// (0x0004bcda) main_mup_pane_t_ParamLimits

0xf440,	// (0x0004bcda) main_mup_pane_t

0x4fc9,	// (0x00041863) mup_progress_pane_ParamLimits

0x4fc9,	// (0x00041863) mup_progress_pane

0x4fd5,	// (0x0004186f) mup_visualizer_pane_ParamLimits

0x4fd5,	// (0x0004186f) mup_visualizer_pane

0x5013,	// (0x000418ad) mup_volume_pane_ParamLimits

0x5013,	// (0x000418ad) mup_volume_pane

0xb57a,	// (0x00047e14) mup_visualizer_pane_g1_ParamLimits

0xb57a,	// (0x00047e14) mup_visualizer_pane_g1

0xb57a,	// (0x00047e14) mup_visualizer_pane_g2_ParamLimits

0xb57a,	// (0x00047e14) mup_visualizer_pane_g2

0xb703,	// (0x00047f9d) mup_visualizer_pane_g3_ParamLimits

0xb703,	// (0x00047f9d) mup_visualizer_pane_g3

0x0002,

0xf44d,	// (0x0004bce7) mup_visualizer_pane_g_ParamLimits

0xf44d,	// (0x0004bce7) mup_visualizer_pane_g

0xad40,	// (0x000475da) mup_volume_pane_g1

0xb895,	// (0x0004812f) mup_volume_pane_g2

0x0001,

0xf454,	// (0x0004bcee) mup_volume_pane_g

0xad40,	// (0x000475da) mup_progress_pane_g1

0xb89e,	// (0x00048138) mup_progress_pane_g2

0xb8a7,	// (0x00048141) mup_progress_pane_g3

0x0002,

0xf459,	// (0x0004bcf3) mup_progress_pane_g

0xa981,	// (0x0004721b) bg_popup_window_pane_cp05

0xb8b0,	// (0x0004814a) heading_pane_cp02_ParamLimits

0xb8b0,	// (0x0004814a) heading_pane_cp02

0xb8ca,	// (0x00048164) list_popup_blid_pane

0xb8d2,	// (0x0004816c) list_blid_sat_info_pane_ParamLimits

0xb8d2,	// (0x0004816c) list_blid_sat_info_pane

0xb8e5,	// (0x0004817f) list_blid_sat_info_pane_g1

0xb8ed,	// (0x00048187) list_blid_sat_info_pane_t1

0x511e,	// (0x000419b8) mup_equalizer_pane_ParamLimits

0x511e,	// (0x000419b8) mup_equalizer_pane

0x513f,	// (0x000419d9) mup_equalizer_pane_cp1_ParamLimits

0x513f,	// (0x000419d9) mup_equalizer_pane_cp1

0x5160,	// (0x000419fa) mup_equalizer_pane_cp2_ParamLimits

0x5160,	// (0x000419fa) mup_equalizer_pane_cp2

0x5181,	// (0x00041a1b) mup_equalizer_pane_cp3_ParamLimits

0x5181,	// (0x00041a1b) mup_equalizer_pane_cp3

0x51a2,	// (0x00041a3c) mup_equalizer_pane_cp4_ParamLimits

0x51a2,	// (0x00041a3c) mup_equalizer_pane_cp4

0x51c3,	// (0x00041a5d) mup_equalizer_pane_cp5

0x51d9,	// (0x00041a73) mup_equalizer_pane_cp6

0x51f1,	// (0x00041a8b) mup_equalizer_pane_cp7

0xca89,	// (0x00049323) bg_popup_call_poc_act_pane_g9

0xca91,	// (0x0004932b) bg_popup_call_poc_act_pane_g10

0xca99,	// (0x00049333) bg_popup_call_poc_act_pane_g11

0x000a,

0xac07,	// (0x000474a1) mup_scale_pane

0xad40,	// (0x000475da) mup_scale_pane_g1

0xb8fb,	// (0x00048195) mup_scale_pane_g2

0x0006,

0xf475,	// (0x0004bd0f) mup_scale_pane_g

0xb91f,	// (0x000481b9) msg_data_pane

0xb927,	// (0x000481c1) scroll_pane_cp017

0x1495,	// (0x0003dd2f) bg_list_pane_cp04_ParamLimits

0x1495,	// (0x0003dd2f) bg_list_pane_cp04

0xb92f,	// (0x000481c9) msg_data_pane_g1

0x521b,	// (0x00041ab5) msg_data_pane_g2

0x4aa8,	// (0x00041342) msg_data_pane_g3

0x5223,	// (0x00041abd) msg_data_pane_g4

0x522b,	// (0x00041ac5) msg_data_pane_g5

0x5233,	// (0x00041acd) msg_data_pane_g6

0x523b,	// (0x00041ad5) msg_data_pane_g7

0x0006,

0xf484,	// (0x0004bd1e) msg_data_pane_g

0x14b5,	// (0x0003dd4f) msg_text_pane_ParamLimits

0x14b5,	// (0x0003dd4f) msg_text_pane

0x5243,	// (0x00041add) qrid_highlight_pane_cp011_ParamLimits

0x5243,	// (0x00041add) qrid_highlight_pane_cp011

0xa981,	// (0x0004721b) msg_body_pane

0xa981,	// (0x0004721b) msg_header_pane

0xb937,	// (0x000481d1) input_focus_pane_cp07

0x1510,	// (0x0003ddaa) msg_header_pane_t1_ParamLimits

0x1510,	// (0x0003ddaa) msg_header_pane_t1

0x1522,	// (0x0003ddbc) msg_header_pane_t2_ParamLimits

0x1522,	// (0x0003ddbc) msg_header_pane_t2

0x0001,

0xf498,	// (0x0004bd32) msg_header_pane_t_ParamLimits

0xf498,	// (0x0004bd32) msg_header_pane_t

0xb94c,	// (0x000481e6) msg_body_pane_g1

0x1534,	// (0x0003ddce) msg_body_pane_t1_ParamLimits

0x1534,	// (0x0003ddce) msg_body_pane_t1

0x1565,	// (0x0003ddff) msg_body_pane_t2_ParamLimits

0x1565,	// (0x0003ddff) msg_body_pane_t2

0x1577,	// (0x0003de11) msg_body_pane_t3_ParamLimits

0x1577,	// (0x0003de11) msg_body_pane_t3

0x0002,

0xf49d,	// (0x0004bd37) msg_body_pane_t_ParamLimits

0xf49d,	// (0x0004bd37) msg_body_pane_t

0x52ba,	// (0x00041b54) main_viewer_pane_g1_ParamLimits

0x52ba,	// (0x00041b54) main_viewer_pane_g1

0x52c6,	// (0x00041b60) main_viewer_pane_g2_ParamLimits

0x52c6,	// (0x00041b60) main_viewer_pane_g2

0x52d2,	// (0x00041b6c) main_viewer_pane_g3_ParamLimits

0x52d2,	// (0x00041b6c) main_viewer_pane_g3

0x52e3,	// (0x00041b7d) main_viewer_pane_g4_ParamLimits

0x52e3,	// (0x00041b7d) main_viewer_pane_g4

0x52f4,	// (0x00041b8e) main_viewer_pane_g5_ParamLimits

0x52f4,	// (0x00041b8e) main_viewer_pane_g5

0x52f4,	// (0x00041b8e) main_viewer_pane_g7_ParamLimits

0x52f4,	// (0x00041b8e) main_viewer_pane_g7

0x5306,	// (0x00041ba0) main_viewer_pane_g8_ParamLimits

0x5306,	// (0x00041ba0) main_viewer_pane_g8

0x0007,

0xf4ad,	// (0x0004bd47) main_viewer_pane_g_ParamLimits

0xf4ad,	// (0x0004bd47) main_viewer_pane_g

0xb954,	// (0x000481ee) viewer_content_pane_ParamLimits

0xb954,	// (0x000481ee) viewer_content_pane

0x533e,	// (0x00041bd8) main_postcard_pane_g1_ParamLimits

0x533e,	// (0x00041bd8) main_postcard_pane_g1

0x534c,	// (0x00041be6) main_postcard_pane_g2_ParamLimits

0x534c,	// (0x00041be6) main_postcard_pane_g2

0x535a,	// (0x00041bf4) main_postcard_pane_g3_ParamLimits

0x535a,	// (0x00041bf4) main_postcard_pane_g3

0x0005,

0xf4be,	// (0x0004bd58) main_postcard_pane_g_ParamLimits

0xf4be,	// (0x0004bd58) main_postcard_pane_g

0x536a,	// (0x00041c04) main_postcard_pane_g4

0xcc6b,	// (0x00049505) smil_status_volume_pane_g2

0x5396,	// (0x00041c30) postcard_pane_ParamLimits

0x5396,	// (0x00041c30) postcard_pane

0xb57a,	// (0x00047e14) postcard_pane_g1_ParamLimits

0xb57a,	// (0x00047e14) postcard_pane_g1

0x53c8,	// (0x00041c62) postcard_pane_g2_ParamLimits

0x53c8,	// (0x00041c62) postcard_pane_g2

0x53d4,	// (0x00041c6e) postcard_pane_g3_ParamLimits

0x53d4,	// (0x00041c6e) postcard_pane_g3

0xb962,	// (0x000481fc) postcard_pane_g4_ParamLimits

0xb962,	// (0x000481fc) postcard_pane_g4

0x53e0,	// (0x00041c7a) postcard_pane_g5_ParamLimits

0x53e0,	// (0x00041c7a) postcard_pane_g5

0x53ec,	// (0x00041c86) postcard_pane_g6_ParamLimits

0x53ec,	// (0x00041c86) postcard_pane_g6

0xb970,	// (0x0004820a) postcard_pane_g7_ParamLimits

0xb970,	// (0x0004820a) postcard_pane_g7

0x0006,

0xf4cb,	// (0x0004bd65) postcard_pane_g_ParamLimits

0xf4cb,	// (0x0004bd65) postcard_pane_g

0x53f8,	// (0x00041c92) main_mp2_pane_g1_ParamLimits

0x53f8,	// (0x00041c92) main_mp2_pane_g1

0x5404,	// (0x00041c9e) main_mp2_pane_g2_ParamLimits

0x5404,	// (0x00041c9e) main_mp2_pane_g2

0x5410,	// (0x00041caa) main_mp2_pane_g3_ParamLimits

0x5410,	// (0x00041caa) main_mp2_pane_g3

0x0002,

0xf4da,	// (0x0004bd74) main_mp2_pane_g_ParamLimits

0xf4da,	// (0x0004bd74) main_mp2_pane_g

0x541c,	// (0x00041cb6) main_mp2_pane_t1_ParamLimits

0x541c,	// (0x00041cb6) main_mp2_pane_t1

0x5433,	// (0x00041ccd) main_mp2_pane_t2_ParamLimits

0x5433,	// (0x00041ccd) main_mp2_pane_t2

0x5445,	// (0x00041cdf) main_mp2_pane_t3_ParamLimits

0x5445,	// (0x00041cdf) main_mp2_pane_t3

0x0002,

0xf4e1,	// (0x0004bd7b) main_mp2_pane_t_ParamLimits

0xf4e1,	// (0x0004bd7b) main_mp2_pane_t

0xb97e,	// (0x00048218) pec_content_pane_ParamLimits

0xb97e,	// (0x00048218) pec_content_pane

0xb065,	// (0x000478ff) scroll_pane_cp015

0xb990,	// (0x0004822a) pec_attribute_pane_ParamLimits

0xb990,	// (0x0004822a) pec_attribute_pane

0x5457,	// (0x00041cf1) pec_content_pane_g1_ParamLimits

0x5457,	// (0x00041cf1) pec_content_pane_g1

0xb9a0,	// (0x0004823a) pec_content_pane_t1_ParamLimits

0xb9a0,	// (0x0004823a) pec_content_pane_t1

0xb9b2,	// (0x0004824c) pec_content_pane_t2_ParamLimits

0xb9b2,	// (0x0004824c) pec_content_pane_t2

0x0001,

0xf4e8,	// (0x0004bd82) pec_content_pane_t_ParamLimits

0xf4e8,	// (0x0004bd82) pec_content_pane_t

0x5463,	// (0x00041cfd) list_single_graphic_pane_cp01_ParamLimits

0x5463,	// (0x00041cfd) list_single_graphic_pane_cp01

0xac07,	// (0x000474a1) bg_popup_sub_pane_cp04

0xb9c4,	// (0x0004825e) popup_mup_playback_window_g1

0xb9d0,	// (0x0004826a) popup_mup_playback_window_t1

0xb9e5,	// (0x0004827f) popup_mup_playback_window_t2

0x0001,

0xf4ed,	// (0x0004bd87) popup_mup_playback_window_t

0xba1c,	// (0x000482b6) main_image_pane_g1_ParamLimits

0xba1c,	// (0x000482b6) main_image_pane_g1

0xba5f,	// (0x000482f9) scroll_pane_cp018_ParamLimits

0xba5f,	// (0x000482f9) scroll_pane_cp018

0xba77,	// (0x00048311) scroll_pane_cp016_ParamLimits

0xba77,	// (0x00048311) scroll_pane_cp016

0x5503,	// (0x00041d9d) smil2_image_pane_ParamLimits

0x5503,	// (0x00041d9d) smil2_image_pane

0x5537,	// (0x00041dd1) smil2_root_pane_ParamLimits

0x5537,	// (0x00041dd1) smil2_root_pane

0x5563,	// (0x00041dfd) smil2_text_pane_ParamLimits

0x5563,	// (0x00041dfd) smil2_text_pane

0xa981,	// (0x0004721b) bg_list_pane_cp06

0xbab3,	// (0x0004834d) grid_radio_pane

0xa981,	// (0x0004721b) bg_popup_window_pane_cp06

0xbabb,	// (0x00048355) main_fmradio_pane_t1

0xb52c,	// (0x00047dc6) heading_pane_cp04

0xbac9,	// (0x00048363) main_fmradio_pane_t2

0xcaa1,	// (0x0004933b) popup_cale_lunar_info_window_g1

0xbad7,	// (0x00048371) main_fmradio_pane_t3

0xcaa9,	// (0x00049343) popup_cale_lunar_info_window_g2

0xbae5,	// (0x0004837f) main_fmradio_pane_t4

0x0001,

0xbaf3,	// (0x0004838d) main_fmradio_pane_t5

0x0004,

0xf5c8,	// (0x0004be62) popup_cale_lunar_info_window_g

0xf502,	// (0x0004bd9c) main_fmradio_pane_t

0xbb01,	// (0x0004839b) wait_bar_pane_cp03

0xbb09,	// (0x000483a3) cell_fmradio_pane_ParamLimits

0xbb09,	// (0x000483a3) cell_fmradio_pane

0xb970,	// (0x0004820a) cell_fmradio_pane_g1_ParamLimits

0xb970,	// (0x0004820a) cell_fmradio_pane_g1

0xa981,	// (0x0004721b) grid_highlight_pane_cp011

0xbb1c,	// (0x000483b6) poc_content_pane_ParamLimits

0xbb1c,	// (0x000483b6) poc_content_pane

0xbb2e,	// (0x000483c8) scroll_pane_cp019

0x55a3,	// (0x00041e3d) popup_call_poc_act_window_ParamLimits

0x55a3,	// (0x00041e3d) popup_call_poc_act_window

0x55b0,	// (0x00041e4a) popup_call_poc_inact_window_ParamLimits

0x55b0,	// (0x00041e4a) popup_call_poc_inact_window

0xf59f,	// (0x0004be39) bg_popup_call_poc_act_pane_g

0xca19,	// (0x000492b3) bg_popup_call_poc_inact_pane_g1

0xca21,	// (0x000492bb) bg_popup_call_poc_inact_pane_g2

0xbb36,	// (0x000483d0) popup_call_poc_act_window_g2

0xca29,	// (0x000492c3) bg_popup_call_poc_inact_pane_g3

0xca31,	// (0x000492cb) bg_popup_call_poc_inact_pane_g4

0xca39,	// (0x000492d3) bg_popup_call_poc_inact_pane_g5

0xbb3e,	// (0x000483d8) popup_call_poc_act_window_t1_ParamLimits

0xbb3e,	// (0x000483d8) popup_call_poc_act_window_t1

0xbb66,	// (0x00048400) popup_call_poc_act_window_t2_ParamLimits

0xbb66,	// (0x00048400) popup_call_poc_act_window_t2

0xbb8e,	// (0x00048428) popup_call_poc_act_window_t3_ParamLimits

0xbb8e,	// (0x00048428) popup_call_poc_act_window_t3

0xbbb6,	// (0x00048450) popup_call_poc_act_window_t4_ParamLimits

0xbbb6,	// (0x00048450) popup_call_poc_act_window_t4

0x0003,

0xf50d,	// (0x0004bda7) popup_call_poc_act_window_t_ParamLimits

0xf50d,	// (0x0004bda7) popup_call_poc_act_window_t

0xca41,	// (0x000492db) bg_popup_call_poc_inact_pane_g6

0xca49,	// (0x000492e3) bg_popup_call_poc_inact_pane_g7

0xca51,	// (0x000492eb) bg_popup_call_poc_inact_pane_g8

0xbbc8,	// (0x00048462) popup_call_poc_inact_window_g2

0xca59,	// (0x000492f3) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf58c,	// (0x0004be26) bg_popup_call_poc_inact_pane_g

0xbbd0,	// (0x0004846a) popup_call_poc_inact_window_t1_ParamLimits

0xbbd0,	// (0x0004846a) popup_call_poc_inact_window_t1

0xbbe5,	// (0x0004847f) popup_call_poc_inact_window_t2_ParamLimits

0xbbe5,	// (0x0004847f) popup_call_poc_inact_window_t2

0xbbfa,	// (0x00048494) popup_call_poc_inact_window_t3_ParamLimits

0xbbfa,	// (0x00048494) popup_call_poc_inact_window_t3

0x0002,

0xf516,	// (0x0004bdb0) popup_call_poc_inact_window_t_ParamLimits

0xf516,	// (0x0004bdb0) popup_call_poc_inact_window_t

0xcbde,	// (0x00049478) context_pane_ParamLimits

0x5bd8,	// (0x00042472) signal_pane_ParamLimits

0xb7ce,	// (0x00048068) main_call2_pane

0x5b51,	// (0x000423eb) popup_phob_thumbnail2_window_ParamLimits

0x5b51,	// (0x000423eb) popup_phob_thumbnail2_window

0x5268,	// (0x00041b02) aid_hotspot_pointer_arrow_pane

0x5270,	// (0x00041b0a) aid_hotspot_pointer_hand_pane

0x58d6,	// (0x00042170) phob_pre_status_pane_g5

0x33e7,	// (0x0003fc81) cams_zoom_pane_ParamLimits

0x33f3,	// (0x0003fc8d) image_vga_pane_ParamLimits

0x3402,	// (0x0003fc9c) main_camera_pane_g1_ParamLimits

0x3410,	// (0x0003fcaa) main_camera_pane_g2_ParamLimits

0x341c,	// (0x0003fcb6) main_camera_pane_g3_ParamLimits

0x3428,	// (0x0003fcc2) main_camera_pane_g4_ParamLimits

0x3434,	// (0x0003fcce) main_camera_pane_g5_ParamLimits

0x3440,	// (0x0003fcda) main_camera_pane_g6_ParamLimits

0x344c,	// (0x0003fce6) main_camera_pane_g7_ParamLimits

0xf215,	// (0x0004baaf) main_camera_pane_g_ParamLimits

0x3458,	// (0x0003fcf2) main_camera_pane_t1_ParamLimits

0x346a,	// (0x0003fd04) main_camera_pane_t2_ParamLimits

0xf226,	// (0x0004bac0) main_camera_pane_t_ParamLimits

0xac07,	// (0x000474a1) bg_popup_preview_window_pane_cp01_ParamLimits

0xac07,	// (0x000474a1) bg_popup_preview_window_pane_cp01

0xbc0f,	// (0x000484a9) popup_phob_thumbnail2_window_g1_ParamLimits

0xbc0f,	// (0x000484a9) popup_phob_thumbnail2_window_g1

0xa981,	// (0x0004721b) call2_cli_visual_pane

0x55cc,	// (0x00041e66) popup_call2_audio_conf_window_ParamLimits

0x55cc,	// (0x00041e66) popup_call2_audio_conf_window

0x55e1,	// (0x00041e7b) popup_call2_audio_first_window_ParamLimits

0x55e1,	// (0x00041e7b) popup_call2_audio_first_window

0x567f,	// (0x00041f19) popup_call2_audio_in_window_ParamLimits

0x567f,	// (0x00041f19) popup_call2_audio_in_window

0x56c1,	// (0x00041f5b) popup_call2_audio_out_window_ParamLimits

0x56c1,	// (0x00041f5b) popup_call2_audio_out_window

0x5723,	// (0x00041fbd) popup_call2_audio_second_window_ParamLimits

0x5723,	// (0x00041fbd) popup_call2_audio_second_window

0x5781,	// (0x0004201b) popup_call2_audio_wait_window_ParamLimits

0x5781,	// (0x0004201b) popup_call2_audio_wait_window

0xa981,	// (0x0004721b) bg_popup_call2_act_pane_cp03

0xabe9,	// (0x00047483) list_conf_pane_cp

0xbc1b,	// (0x000484b5) popup_call2_audio_conf_window_t1

0xbc29,	// (0x000484c3) list_single_graphic_popup_conf2_pane_ParamLimits

0xbc29,	// (0x000484c3) list_single_graphic_popup_conf2_pane

0xb5da,	// (0x00047e74) list_highlight_pane_cp04

0xbc3c,	// (0x000484d6) list_single_graphic_popup_conf2_pane_g1

0xb5eb,	// (0x00047e85) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf51d,	// (0x0004bdb7) list_single_graphic_popup_conf2_pane_g

0xbc46,	// (0x000484e0) list_single_graphic_popup_conf2_pane_t1

0xbc54,	// (0x000484ee) bg_popup_call2_act_pane_cp01_ParamLimits

0xbc54,	// (0x000484ee) bg_popup_call2_act_pane_cp01

0xbcde,	// (0x00048578) call_type_pane_cp05_ParamLimits

0xbcde,	// (0x00048578) call_type_pane_cp05

0xbd32,	// (0x000485cc) popup_call2_audio_second_window_g1_ParamLimits

0xbd32,	// (0x000485cc) popup_call2_audio_second_window_g1

0xbd86,	// (0x00048620) popup_call2_audio_second_window_g2_ParamLimits

0xbd86,	// (0x00048620) popup_call2_audio_second_window_g2

0x0002,

0xf522,	// (0x0004bdbc) popup_call2_audio_second_window_g_ParamLimits

0xf522,	// (0x0004bdbc) popup_call2_audio_second_window_g

0xbdeb,	// (0x00048685) popup_call2_audio_second_window_t1_ParamLimits

0xbdeb,	// (0x00048685) popup_call2_audio_second_window_t1

0xbea6,	// (0x00048740) popup_call2_audio_second_window_t2_ParamLimits

0xbea6,	// (0x00048740) popup_call2_audio_second_window_t2

0xbef9,	// (0x00048793) popup_call2_audio_second_window_t3_ParamLimits

0xbef9,	// (0x00048793) popup_call2_audio_second_window_t3

0x0003,

0xf529,	// (0x0004bdc3) popup_call2_audio_second_window_t_ParamLimits

0xf529,	// (0x0004bdc3) popup_call2_audio_second_window_t

0xa981,	// (0x0004721b) bg_popup_call2_in_pane_cp02

0xa98b,	// (0x00047225) call_type_pane_cp04

0xa993,	// (0x0004722d) popup_call2_audio_wait_window_g1

0xa99b,	// (0x00047235) popup_call2_audio_wait_window_g2

0x0001,

0xf102,	// (0x0004b99c) popup_call2_audio_wait_window_g

0xa9a3,	// (0x0004723d) popup_call2_audio_wait_window_t3

0xbfec,	// (0x00048886) bg_popup_call2_act_pane_ParamLimits

0xbfec,	// (0x00048886) bg_popup_call2_act_pane

0xc0ac,	// (0x00048946) call_type_pane_cp03_ParamLimits

0xc0ac,	// (0x00048946) call_type_pane_cp03

0xc110,	// (0x000489aa) popup_call2_audio_first_window_g1_ParamLimits

0xc110,	// (0x000489aa) popup_call2_audio_first_window_g1

0xc180,	// (0x00048a1a) popup_call2_audio_first_window_g2_ParamLimits

0xc180,	// (0x00048a1a) popup_call2_audio_first_window_g2

0xb57a,	// (0x00047e14) popup_call2_audio_first_window_g3_ParamLimits

0xb57a,	// (0x00047e14) popup_call2_audio_first_window_g3

0x0004,

0xf532,	// (0x0004bdcc) popup_call2_audio_first_window_g_ParamLimits

0xf532,	// (0x0004bdcc) popup_call2_audio_first_window_g

0xc25e,	// (0x00048af8) popup_call2_audio_first_window_t1_ParamLimits

0xc25e,	// (0x00048af8) popup_call2_audio_first_window_t1

0xc361,	// (0x00048bfb) popup_call2_audio_first_window_t4_ParamLimits

0xc361,	// (0x00048bfb) popup_call2_audio_first_window_t4

0xc444,	// (0x00048cde) popup_call2_audio_first_window_t5_ParamLimits

0xc444,	// (0x00048cde) popup_call2_audio_first_window_t5

0x0003,

0xf53d,	// (0x0004bdd7) popup_call2_audio_first_window_t_ParamLimits

0xf53d,	// (0x0004bdd7) popup_call2_audio_first_window_t

0xabff,	// (0x00047499) bg_popup_call2_act_pane_g1

0xcab1,	// (0x0004934b) popup_cale_lunar_info_window_t1

0xcabf,	// (0x00049359) popup_cale_lunar_info_window_t2

0xcacd,	// (0x00049367) popup_cale_lunar_info_window_t3

0xa981,	// (0x0004721b) bg_popup_call2_bubble_pane

0xc545,	// (0x00048ddf) bg_popup_call2_in_pane_cp01_ParamLimits

0xc545,	// (0x00048ddf) bg_popup_call2_in_pane_cp01

0xa65d,	// (0x00046ef7) call_type_pane_cp02

0xc58d,	// (0x00048e27) popup_call2_audio_out_window_g1_ParamLimits

0xc58d,	// (0x00048e27) popup_call2_audio_out_window_g1

0xc5b9,	// (0x00048e53) popup_call2_audio_out_window_g2_ParamLimits

0xc5b9,	// (0x00048e53) popup_call2_audio_out_window_g2

0xc5e1,	// (0x00048e7b) popup_call2_audio_out_window_g3_ParamLimits

0xc5e1,	// (0x00048e7b) popup_call2_audio_out_window_g3

0x0003,

0xf546,	// (0x0004bde0) popup_call2_audio_out_window_g_ParamLimits

0xf546,	// (0x0004bde0) popup_call2_audio_out_window_g

0xc61c,	// (0x00048eb6) popup_call2_audio_out_window_t1_ParamLimits

0xc61c,	// (0x00048eb6) popup_call2_audio_out_window_t1

0xc67b,	// (0x00048f15) popup_call2_audio_out_window_t2_ParamLimits

0xc67b,	// (0x00048f15) popup_call2_audio_out_window_t2

0xc6cf,	// (0x00048f69) popup_call2_audio_out_window_t3_ParamLimits

0xc6cf,	// (0x00048f69) popup_call2_audio_out_window_t3

0xc6e5,	// (0x00048f7f) popup_call2_audio_out_window_t4_ParamLimits

0xc6e5,	// (0x00048f7f) popup_call2_audio_out_window_t4

0xc6fb,	// (0x00048f95) popup_call2_audio_out_window_t5_ParamLimits

0xc6fb,	// (0x00048f95) popup_call2_audio_out_window_t5

0x0005,

0xf54f,	// (0x0004bde9) popup_call2_audio_out_window_t_ParamLimits

0xf54f,	// (0x0004bde9) popup_call2_audio_out_window_t

0xc75f,	// (0x00048ff9) bg_popup_call2_in_pane_ParamLimits

0xc75f,	// (0x00048ff9) bg_popup_call2_in_pane

0xc7bb,	// (0x00049055) popup_call2_audio_in_window_g1_ParamLimits

0xc7bb,	// (0x00049055) popup_call2_audio_in_window_g1

0xc7f3,	// (0x0004908d) popup_call2_audio_in_window_g2_ParamLimits

0xc7f3,	// (0x0004908d) popup_call2_audio_in_window_g2

0xc82b,	// (0x000490c5) popup_call2_audio_in_window_g3_ParamLimits

0xc82b,	// (0x000490c5) popup_call2_audio_in_window_g3

0x0003,

0xf55c,	// (0x0004bdf6) popup_call2_audio_in_window_g_ParamLimits

0xf55c,	// (0x0004bdf6) popup_call2_audio_in_window_g

0xc883,	// (0x0004911d) popup_call2_audio_in_window_t1_ParamLimits

0xc883,	// (0x0004911d) popup_call2_audio_in_window_t1

0xc903,	// (0x0004919d) popup_call2_audio_in_window_t2_ParamLimits

0xc903,	// (0x0004919d) popup_call2_audio_in_window_t2

0xc983,	// (0x0004921d) popup_call2_audio_in_window_t3_ParamLimits

0xc983,	// (0x0004921d) popup_call2_audio_in_window_t3

0xc99d,	// (0x00049237) popup_call2_audio_in_window_t4_ParamLimits

0xc99d,	// (0x00049237) popup_call2_audio_in_window_t4

0xc9af,	// (0x00049249) popup_call2_audio_in_window_t5_ParamLimits

0xc9af,	// (0x00049249) popup_call2_audio_in_window_t5

0xc9c4,	// (0x0004925e) popup_call2_audio_in_window_t6_ParamLimits

0xc9c4,	// (0x0004925e) popup_call2_audio_in_window_t6

0x0005,

0xf565,	// (0x0004bdff) popup_call2_audio_in_window_t_ParamLimits

0xf565,	// (0x0004bdff) popup_call2_audio_in_window_t

0xabff,	// (0x00047499) bg_popup_call2_in_pane_g1

0xcadb,	// (0x00049375) popup_cale_lunar_info_window_t4

0x0003,

0xf5cd,	// (0x0004be67) popup_cale_lunar_info_window_t

0xac07,	// (0x000474a1) bg_popup_call2_rect_pane_ParamLimits

0xac07,	// (0x000474a1) bg_popup_call2_rect_pane

0xa981,	// (0x0004721b) call2_cli_visual_graphic_pane

0xa981,	// (0x0004721b) call2_cli_visual_text_pane

0x5c86,	// (0x00042520) smil_status_volume_pane_g3

0x0002,

0xad40,	// (0x000475da) call2_cli_visual_graphic_pane_g1

0xad40,	// (0x000475da) call2_cli_visual_graphic_pane_g2

0xad40,	// (0x000475da) call2_cli_visual_graphic_pane_g3

0x0002,

0xf572,	// (0x0004be0c) call2_cli_visual_graphic_pane_g

0xc9d9,	// (0x00049273) bg_popup_call2_rect_pane_g1

0xadde,	// (0x00047678) bg_popup_call2_rect_pane_g2

0xc9e1,	// (0x0004927b) bg_popup_call2_rect_pane_g3

0xc9e9,	// (0x00049283) bg_popup_call2_rect_pane_g4

0xc9f1,	// (0x0004928b) bg_popup_call2_rect_pane_g5

0xc9f9,	// (0x00049293) bg_popup_call2_rect_pane_g6

0xca01,	// (0x0004929b) bg_popup_call2_rect_pane_g7

0xca09,	// (0x000492a3) bg_popup_call2_rect_pane_g8

0xca11,	// (0x000492ab) bg_popup_call2_rect_pane_g9

0x0008,

0xf579,	// (0x0004be13) bg_popup_call2_rect_pane_g

0xca19,	// (0x000492b3) bg_popup_call2_bubble_pane_g1

0xca21,	// (0x000492bb) bg_popup_call2_bubble_pane_g2

0xca29,	// (0x000492c3) bg_popup_call2_bubble_pane_g3

0xca31,	// (0x000492cb) bg_popup_call2_bubble_pane_g4

0xca39,	// (0x000492d3) bg_popup_call2_bubble_pane_g5

0xca41,	// (0x000492db) bg_popup_call2_bubble_pane_g6

0xca49,	// (0x000492e3) bg_popup_call2_bubble_pane_g7

0xca51,	// (0x000492eb) bg_popup_call2_bubble_pane_g8

0xca59,	// (0x000492f3) bg_popup_call2_bubble_pane_g9

0x0008,

0xf58c,	// (0x0004be26) bg_popup_call2_bubble_pane_g

0x2e19,	// (0x0003f6b3) aid_cale_week_size_cell_pane

0x347c,	// (0x0003fd16) aid_cams_cif_uncrop_pane_ParamLimits

0x347c,	// (0x0003fd16) aid_cams_cif_uncrop_pane

0x35d7,	// (0x0003fe71) aid_cams_size_cell_ParamLimits

0x35d7,	// (0x0003fe71) aid_cams_size_cell

0x35e3,	// (0x0003fe7d) grid_cams_pane_ParamLimits

0x35f1,	// (0x0003fe8b) linegrid_cams_pane_ParamLimits

0x36c8,	// (0x0003ff62) call_video_pane_t1

0x36e9,	// (0x0003ff83) call_video_pane_t2

0x0001,

0xf279,	// (0x0004bb13) call_video_pane_t

0x3c58,	// (0x000404f2) aid_cale_month_size_cell_pane_ParamLimits

0x3c58,	// (0x000404f2) aid_cale_month_size_cell_pane

0xf616,	// (0x0004beb0) smil_status_volume_pane_g

0x5c93,	// (0x0004252d) volume_smil_pane_ParamLimits

0x2592,	// (0x0003ee2c) aid_popup2_width_pane

0x2d0d,	// (0x0003f5a7) cell_qdial_pane_g4_ParamLimits

0x2d0d,	// (0x0003f5a7) cell_qdial_pane_g4

0x4c0e,	// (0x000414a8) aid_blid_cardinal_pane_ParamLimits

0x4c1e,	// (0x000414b8) aid_blid_destination_pane_ParamLimits

0x4c1e,	// (0x000414b8) aid_blid_destination_pane

0xac07,	// (0x000474a1) bg_popup_call_poc_act_pane_ParamLimits

0xac07,	// (0x000474a1) bg_popup_call_poc_act_pane

0xac07,	// (0x000474a1) bg_popup_call_poc_inact_pane_ParamLimits

0xac07,	// (0x000474a1) bg_popup_call_poc_inact_pane

0xca61,	// (0x000492fb) bg_popup_call_poc_act_pane_g1

0xca69,	// (0x00049303) bg_popup_call_poc_act_pane_g2

0xca71,	// (0x0004930b) bg_popup_call_poc_act_pane_g3

0xca31,	// (0x000492cb) bg_popup_call_poc_act_pane_g4

0xca39,	// (0x000492d3) bg_popup_call_poc_act_pane_g5

0xca79,	// (0x00049313) bg_popup_call_poc_act_pane_g6

0xca49,	// (0x000492e3) bg_popup_call_poc_act_pane_g7

0xca81,	// (0x0004931b) bg_popup_call_poc_act_pane_g8

0xa981,	// (0x0004721b) main_usb_pane

0x5a8a,	// (0x00042324) popup_cale_lunar_info_window

0x3a08,	// (0x000402a2) im_reading_pane_t1_ParamLimits

0xafbd,	// (0x00047857) list_im_pane_ParamLimits

0xafce,	// (0x00047868) scroll_pane_cp07_ParamLimits

0xa981,	// (0x0004721b) grid_highlight_pane_cp012

0xac07,	// (0x000474a1) mup_scale_pane_ParamLimits

0xb57a,	// (0x00047e14) main_usb_pane_g1_ParamLimits

0xb57a,	// (0x00047e14) main_usb_pane_g1

0x57f9,	// (0x00042093) main_usb_pane_g2_ParamLimits

0x57f9,	// (0x00042093) main_usb_pane_g2

0x0001,

0xf5b6,	// (0x0004be50) main_usb_pane_g_ParamLimits

0xf5b6,	// (0x0004be50) main_usb_pane_g

0x5805,	// (0x0004209f) main_usb_pane_t1_ParamLimits

0x5805,	// (0x0004209f) main_usb_pane_t1

0x5817,	// (0x000420b1) main_usb_pane_t2_ParamLimits

0x5817,	// (0x000420b1) main_usb_pane_t2

0x5829,	// (0x000420c3) main_usb_pane_t3_ParamLimits

0x5829,	// (0x000420c3) main_usb_pane_t3

0x583b,	// (0x000420d5) main_usb_pane_t4_ParamLimits

0x583b,	// (0x000420d5) main_usb_pane_t4

0x584d,	// (0x000420e7) main_usb_pane_t5_ParamLimits

0x584d,	// (0x000420e7) main_usb_pane_t5

0x585f,	// (0x000420f9) main_usb_pane_t6_ParamLimits

0x585f,	// (0x000420f9) main_usb_pane_t6

0x0005,

0xf5bb,	// (0x0004be55) main_usb_pane_t_ParamLimits

0x4bb4,	// (0x0004144e) aid_text_placing

0x4bc0,	// (0x0004145a) main_location2_pane_t1_ParamLimits

0x4bd4,	// (0x0004146e) main_location2_pane_t2_ParamLimits

0x4be8,	// (0x00041482) main_location2_pane_t3_ParamLimits

0x4bfc,	// (0x00041496) main_location2_pane_t4_ParamLimits

0x4bfc,	// (0x00041496) main_location2_pane_t4

0xf3da,	// (0x0004bc74) main_location2_pane_t_ParamLimits

0xac43,	// (0x000474dd) find_pinb_pane_g2_ParamLimits

0xac43,	// (0x000474dd) find_pinb_pane_g2

0x0001,

0xf128,	// (0x0004b9c2) find_pinb_pane_g_ParamLimits

0xf128,	// (0x0004b9c2) find_pinb_pane_g

0xac4f,	// (0x000474e9) find_pinb_pane_t1_ParamLimits

0xac61,	// (0x000474fb) find_pinb_pane_t2_ParamLimits

0xf12d,	// (0x0004b9c7) find_pinb_pane_t_ParamLimits

0xa981,	// (0x0004721b) main_call3_pane

0x41cc,	// (0x00040a66) cale_month_day_heading_pane_t1_ParamLimits

0x4252,	// (0x00040aec) cale_month_day_heading_pane_t2_ParamLimits

0x42e3,	// (0x00040b7d) cale_month_day_heading_pane_t3_ParamLimits

0x4374,	// (0x00040c0e) cale_month_day_heading_pane_t4_ParamLimits

0x4405,	// (0x00040c9f) cale_month_day_heading_pane_t5_ParamLimits

0x4496,	// (0x00040d30) cale_month_day_heading_pane_t6_ParamLimits

0x4533,	// (0x00040dcd) cale_month_day_heading_pane_t7_ParamLimits

0xf2b1,	// (0x0004bb4b) cale_month_day_heading_pane_t_ParamLimits

0xb226,	// (0x00047ac0) smil_status_volume_pane

0x53b0,	// (0x00041c4a) postcard_address_pane_ParamLimits

0x53b0,	// (0x00041c4a) postcard_address_pane

0x53bc,	// (0x00041c56) postcard_message_pane_ParamLimits

0x53bc,	// (0x00041c56) postcard_message_pane

0x57c0,	// (0x0004205a) call2_cli_visual_pane_t1_ParamLimits

0x57c0,	// (0x0004205a) call2_cli_visual_pane_t1

0x5de8,	// (0x00042682) postcard_message_pane_t1_ParamLimits

0x5de8,	// (0x00042682) postcard_message_pane_t1

0x5dd1,	// (0x0004266b) postcard_address_pane_t1_ParamLimits

0x5dd1,	// (0x0004266b) postcard_address_pane_t1

0x5dc2,	// (0x0004265c) popup_call3_audio_in_window_ParamLimits

0x5dc2,	// (0x0004265c) popup_call3_audio_in_window

0x5ca8,	// (0x00042542) bg_popup_call3_in_pane_ParamLimits

0x5ca8,	// (0x00042542) bg_popup_call3_in_pane

0x5d08,	// (0x000425a2) popup_call3_audio_in_window_g1_ParamLimits

0x5d08,	// (0x000425a2) popup_call3_audio_in_window_g1

0x5d20,	// (0x000425ba) popup_call3_audio_in_window_g2_ParamLimits

0x5d20,	// (0x000425ba) popup_call3_audio_in_window_g2

0x5d38,	// (0x000425d2) popup_call3_audio_in_window_g3_ParamLimits

0x5d38,	// (0x000425d2) popup_call3_audio_in_window_g3

0x0003,

0xf61d,	// (0x0004beb7) popup_call3_audio_in_window_g_ParamLimits

0xf61d,	// (0x0004beb7) popup_call3_audio_in_window_g

0x5d60,	// (0x000425fa) popup_call3_audio_in_window_t1_ParamLimits

0x5d60,	// (0x000425fa) popup_call3_audio_in_window_t1

0x5d88,	// (0x00042622) popup_call3_audio_in_window_t2_ParamLimits

0x5d88,	// (0x00042622) popup_call3_audio_in_window_t2

0x5db0,	// (0x0004264a) popup_call3_audio_in_window_t3_ParamLimits

0x5db0,	// (0x0004264a) popup_call3_audio_in_window_t3

0x0002,

0xf626,	// (0x0004bec0) popup_call3_audio_in_window_t_ParamLimits

0xf626,	// (0x0004bec0) popup_call3_audio_in_window_t

0xb7ce,	// (0x00048068) bg_popup_call3_rect_pane

0xc9d9,	// (0x00049273) bg_popup_call3_rect_pane_g1

0xadde,	// (0x00047678) bg_popup_call3_rect_pane_g2

0xc9e1,	// (0x0004927b) bg_popup_call3_rect_pane_g3

0xc9e9,	// (0x00049283) bg_popup_call3_rect_pane_g4

0xc9f1,	// (0x0004928b) bg_popup_call3_rect_pane_g5

0xc9f9,	// (0x00049293) bg_popup_call3_rect_pane_g6

0xca01,	// (0x0004929b) bg_popup_call3_rect_pane_g7

0x502e,	// (0x000418c8) mup_visualizer_osc_pane

0xb88d,	// (0x00048127) mup_visualizer_spec_pane

0x5cc8,	// (0x00042562) call3_video_qcif_pane_ParamLimits

0x5cc8,	// (0x00042562) call3_video_qcif_pane

0x5cd8,	// (0x00042572) call3_video_qcif_uncrop_pane_ParamLimits

0x5cd8,	// (0x00042572) call3_video_qcif_uncrop_pane

0x5ce6,	// (0x00042580) call3_video_subqcif_pane_ParamLimits

0x5ce6,	// (0x00042580) call3_video_subqcif_pane

0x5cf8,	// (0x00042592) call3_video_subqcif_uncrop_pane_ParamLimits

0x5cf8,	// (0x00042592) call3_video_subqcif_uncrop_pane

0x5d50,	// (0x000425ea) popup_call3_audio_in_window_g4_ParamLimits

0x5d50,	// (0x000425ea) popup_call3_audio_in_window_g4

0x5c73,	// (0x0004250d) mup_spec_half_pane

0x5c7c,	// (0x00042516) mup_spec_half_pane_cp

0xcc3e,	// (0x000494d8) mup_osc_middle_pane

0xcc47,	// (0x000494e1) mup_visualizer_osc_pane_g1

0x5c54,	// (0x000424ee) mup_spec_bar_pane_ParamLimits

0x5c54,	// (0x000424ee) mup_spec_bar_pane

0xcc2b,	// (0x000494c5) mup_spec_bar_pane_g1

0xcc35,	// (0x000494cf) mup_spec_bar_pane_g2

0x0001,

0xf611,	// (0x0004beab) mup_spec_bar_pane_g

0x2e19,	// (0x0003f6b3) aid_cale_week_size_cell_pane_ParamLimits

0x2e2e,	// (0x0003f6c8) bg_cale_heading_pane_ParamLimits

0xae1b,	// (0x000476b5) bg_cale_pane_cp01_ParamLimits

0x2e50,	// (0x0003f6ea) cale_week_corner_pane_ParamLimits

0x2e6a,	// (0x0003f704) cale_week_day_heading_pane_ParamLimits

0x2e8c,	// (0x0003f726) cale_week_scroll_pane_g1_ParamLimits

0x2ea9,	// (0x0003f743) cale_week_scroll_pane_g2_ParamLimits

0x2ebc,	// (0x0003f756) cale_week_scroll_pane_g3_ParamLimits

0x2ecf,	// (0x0003f769) cale_week_scroll_pane_g4_ParamLimits

0x2ee2,	// (0x0003f77c) cale_week_scroll_pane_g5_ParamLimits

0x2ef5,	// (0x0003f78f) cale_week_scroll_pane_g6_ParamLimits

0x2f08,	// (0x0003f7a2) cale_week_scroll_pane_g7_ParamLimits

0x2f1b,	// (0x0003f7b5) cale_week_scroll_pane_g8_ParamLimits

0x2f30,	// (0x0003f7ca) cale_week_scroll_pane_g9_ParamLimits

0x2f43,	// (0x0003f7dd) cale_week_scroll_pane_g10_ParamLimits

0x2f56,	// (0x0003f7f0) cale_week_scroll_pane_g11_ParamLimits

0x2f69,	// (0x0003f803) cale_week_scroll_pane_g12_ParamLimits

0x2f80,	// (0x0003f81a) cale_week_scroll_pane_g13_ParamLimits

0x2f9b,	// (0x0003f835) cale_week_scroll_pane_g14_ParamLimits

0x2fb6,	// (0x0003f850) cale_week_scroll_pane_g15_ParamLimits

0xf1b9,	// (0x0004ba53) cale_week_scroll_pane_g_ParamLimits

0x2fd1,	// (0x0003f86b) cale_week_time_pane_ParamLimits

0x2fe6,	// (0x0003f880) grid_cale_week_pane_ParamLimits

0xae39,	// (0x000476d3) listscroll_cale_week_pane_t1

0xae4b,	// (0x000476e5) scroll_pane_cp08_ParamLimits

0x3cc1,	// (0x0004055b) cale_month_corner_pane_ParamLimits

0xb1fc,	// (0x00047a96) cale_month_pane_t1

0x4165,	// (0x000409ff) cale_month_week_pane_ParamLimits

0xb57a,	// (0x00047e14) popup_call_status_window_g1_ParamLimits

0x49fa,	// (0x00041294) popup_call_status_window_g2_ParamLimits

0x4a06,	// (0x000412a0) popup_call_status_window_g3_ParamLimits

0xf361,	// (0x0004bbfb) popup_call_status_window_g_ParamLimits

0xb51c,	// (0x00047db6) aid_call2_pane

0x1502,	// (0x0003dd9c) msg_header_pane_g1

0x53b0,	// (0x00041c4a) postcard_address2_pane_ParamLimits

0x53b0,	// (0x00041c4a) postcard_address2_pane

0x53bc,	// (0x00041c56) postcard_message2_pane_ParamLimits

0x53bc,	// (0x00041c56) postcard_message2_pane

0x5be6,	// (0x00042480) message2_row_pane_ParamLimits

0x5be6,	// (0x00042480) message2_row_pane

0x5c03,	// (0x0004249d) address2_row_pane_ParamLimits

0x5c03,	// (0x0004249d) address2_row_pane

0xcbf9,	// (0x00049493) postcard_message2_row_pane_g1

0xcc01,	// (0x0004949b) postcard_message2_row_pane_t1

0xcbf9,	// (0x00049493) address2_row_pane_g1

0xcc01,	// (0x0004949b) address2_row_pane_t1

0x3346,	// (0x0003fbe0) aid_size_cell_vorec

0xa981,	// (0x0004721b) main_rss_pane

0x5c16,	// (0x000424b0) rss_list_single_pane_ParamLimits

0x5c16,	// (0x000424b0) rss_list_single_pane

0xcc0f,	// (0x000494a9) rss_list_single_pane_t1

0xcc1d,	// (0x000494b7) rss_list_single_pane_t2

0x0001,

0xf60c,	// (0x0004bea6) rss_list_single_pane_t

0xa981,	// (0x0004721b) main_camera2_pane

0xa981,	// (0x0004721b) main_video2_pane

0x5e4c,	// (0x000426e6) cams_zoom_pane_cp2_ParamLimits

0x5e4c,	// (0x000426e6) cams_zoom_pane_cp2

0x5e58,	// (0x000426f2) image2_vga_pane_ParamLimits

0x5e58,	// (0x000426f2) image2_vga_pane

0x5e67,	// (0x00042701) main_camera2_pane_g1_ParamLimits

0x5e67,	// (0x00042701) main_camera2_pane_g1

0x5e73,	// (0x0004270d) main_camera2_pane_g2_ParamLimits

0x5e73,	// (0x0004270d) main_camera2_pane_g2

0x5e7f,	// (0x00042719) main_camera2_pane_g3_ParamLimits

0x5e7f,	// (0x00042719) main_camera2_pane_g3

0x5e8b,	// (0x00042725) main_camera2_pane_g4_ParamLimits

0x5e8b,	// (0x00042725) main_camera2_pane_g4

0x5e97,	// (0x00042731) main_camera2_pane_g5_ParamLimits

0x5e97,	// (0x00042731) main_camera2_pane_g5

0x5ea3,	// (0x0004273d) main_camera2_pane_g6_ParamLimits

0x5ea3,	// (0x0004273d) main_camera2_pane_g6

0x5eaf,	// (0x00042749) main_camera2_pane_g7_ParamLimits

0x5eaf,	// (0x00042749) main_camera2_pane_g7

0x5ebb,	// (0x00042755) main_camera2_pane_g8_ParamLimits

0x5ebb,	// (0x00042755) main_camera2_pane_g8

0x0008,

0xf62d,	// (0x0004bec7) main_camera2_pane_g_ParamLimits

0xf62d,	// (0x0004bec7) main_camera2_pane_g

0x5ed3,	// (0x0004276d) main_camera2_pane_t1_ParamLimits

0x5ed3,	// (0x0004276d) main_camera2_pane_t1

0x5ee5,	// (0x0004277f) main_camera2_pane_t2_ParamLimits

0x5ee5,	// (0x0004277f) main_camera2_pane_t2

0x5ef7,	// (0x00042791) main_camera2_pane_t3_ParamLimits

0x5ef7,	// (0x00042791) main_camera2_pane_t3

0x5f09,	// (0x000427a3) main_camera2_pane_t4_ParamLimits

0x5f09,	// (0x000427a3) main_camera2_pane_t4

0x0006,

0xf640,	// (0x0004beda) main_camera2_pane_t_ParamLimits

0xf640,	// (0x0004beda) main_camera2_pane_t

0x5f6b,	// (0x00042805) cams_zoom_pane_cp4_ParamLimits

0x5f6b,	// (0x00042805) cams_zoom_pane_cp4

0x5f7b,	// (0x00042815) image2_cif_pane_ParamLimits

0x5f7b,	// (0x00042815) image2_cif_pane

0x5f90,	// (0x0004282a) image2_subqcif_pane_ParamLimits

0x5f90,	// (0x0004282a) image2_subqcif_pane

0x5f9f,	// (0x00042839) main_video2_pane_g1_ParamLimits

0x5f9f,	// (0x00042839) main_video2_pane_g1

0x5fb1,	// (0x0004284b) main_video2_pane_g2_ParamLimits

0x5fb1,	// (0x0004284b) main_video2_pane_g2

0x5fc1,	// (0x0004285b) main_video2_pane_g3_ParamLimits

0x5fc1,	// (0x0004285b) main_video2_pane_g3

0x5fd1,	// (0x0004286b) main_video2_pane_g4_ParamLimits

0x5fd1,	// (0x0004286b) main_video2_pane_g4

0x5fe1,	// (0x0004287b) main_video2_pane_g5_ParamLimits

0x5fe1,	// (0x0004287b) main_video2_pane_g5

0x5ff1,	// (0x0004288b) main_video2_pane_g6_ParamLimits

0x5ff1,	// (0x0004288b) main_video2_pane_g6

0x0005,

0xf64f,	// (0x0004bee9) main_video2_pane_g_ParamLimits

0xf64f,	// (0x0004bee9) main_video2_pane_g

0x6003,	// (0x0004289d) main_video2_pane_t1_ParamLimits

0x6003,	// (0x0004289d) main_video2_pane_t1

0x601d,	// (0x000428b7) main_video2_pane_t2_ParamLimits

0x601d,	// (0x000428b7) main_video2_pane_t2

0x6043,	// (0x000428dd) main_video2_pane_t3_ParamLimits

0x6043,	// (0x000428dd) main_video2_pane_t3

0x0002,

0xf65c,	// (0x0004bef6) main_video2_pane_t_ParamLimits

0xf65c,	// (0x0004bef6) main_video2_pane_t

0x5916,	// (0x000421b0) call_muted_g2

0x0001,

0xf5fe,	// (0x0004be98) call_muted_g

0xa981,	// (0x0004721b) main_mup2_pane

0xcc7e,	// (0x00049518) main_mup2_pane_g1_ParamLimits

0xcc7e,	// (0x00049518) main_mup2_pane_g1

0x6069,	// (0x00042903) main_mup2_pane_g2_ParamLimits

0x6069,	// (0x00042903) main_mup2_pane_g2

0x62eb,	// (0x00042b85) main_mup_pane_g13_cp1

0x62f3,	// (0x00042b8d) mup_volume_pane_cp1

0x6089,	// (0x00042923) main_mup2_pane_g4_ParamLimits

0x6089,	// (0x00042923) main_mup2_pane_g4

0x609e,	// (0x00042938) main_mup2_pane_g5_ParamLimits

0x609e,	// (0x00042938) main_mup2_pane_g5

0x60b3,	// (0x0004294d) main_mup2_pane_g6_ParamLimits

0x60b3,	// (0x0004294d) main_mup2_pane_g6

0x60c8,	// (0x00042962) main_mup2_pane_g7_ParamLimits

0x60c8,	// (0x00042962) main_mup2_pane_g7

0x0006,

0xf663,	// (0x0004befd) main_mup2_pane_g_ParamLimits

0xf663,	// (0x0004befd) main_mup2_pane_g

0x60e4,	// (0x0004297e) main_mup2_pane_t1_ParamLimits

0x60e4,	// (0x0004297e) main_mup2_pane_t1

0x60fb,	// (0x00042995) main_mup2_pane_t2_ParamLimits

0x60fb,	// (0x00042995) main_mup2_pane_t2

0x6112,	// (0x000429ac) main_mup2_pane_t3_ParamLimits

0x6112,	// (0x000429ac) main_mup2_pane_t3

0x6129,	// (0x000429c3) main_mup2_pane_t4_ParamLimits

0x6129,	// (0x000429c3) main_mup2_pane_t4

0x6143,	// (0x000429dd) main_mup2_pane_t5_ParamLimits

0x6143,	// (0x000429dd) main_mup2_pane_t5

0x615d,	// (0x000429f7) main_mup2_pane_t6_ParamLimits

0x615d,	// (0x000429f7) main_mup2_pane_t6

0x0005,

0xf672,	// (0x0004bf0c) main_mup2_pane_t_ParamLimits

0xf672,	// (0x0004bf0c) main_mup2_pane_t

0x6195,	// (0x00042a2f) mup2_visualizer_pane_ParamLimits

0x6195,	// (0x00042a2f) mup2_visualizer_pane

0x61cb,	// (0x00042a65) mup_progress_pane_cp_ParamLimits

0x61cb,	// (0x00042a65) mup_progress_pane_cp

0x62d6,	// (0x00042b70) mup_volume_pane_cp_ParamLimits

0x62d6,	// (0x00042b70) mup_volume_pane_cp

0x61e2,	// (0x00042a7c) mup2_visualizer_pane_g1_ParamLimits

0x61e2,	// (0x00042a7c) mup2_visualizer_pane_g1

0xcc8a,	// (0x00049524) mup2_visualizer_pane_g2_ParamLimits

0xcc8a,	// (0x00049524) mup2_visualizer_pane_g2

0x61f7,	// (0x00042a91) mup2_visualizer_pane_g3_ParamLimits

0x61f7,	// (0x00042a91) mup2_visualizer_pane_g3

0x0002,

0xf67f,	// (0x0004bf19) mup2_visualizer_pane_g_ParamLimits

0xf67f,	// (0x0004bf19) mup2_visualizer_pane_g

0xbaab,	// (0x00048345) aid_size_cell_fmradio

0x5a2c,	// (0x000422c6) aid_height_parent_landcape

0xb04c,	// (0x000478e6) wml_content_pane_cp

0xb054,	// (0x000478ee) wml_tabs_pane

0xb05d,	// (0x000478f7) popup_wml_miniature_window

0xb065,	// (0x000478ff) scroll_pane_cp021

0xb087,	// (0x00047921) wml_content_pane_comp8

0xa981,	// (0x0004721b) bg_popup_sub_pane_cp05

0xcca8,	// (0x00049542) popup_wml_miniature_window_g1

0xccb0,	// (0x0004954a) wml_miniature_view_pane

0x6205,	// (0x00042a9f) aid_size_wml_view

0x620d,	// (0x00042aa7) wml_miniature_view_pane_g1

0x6216,	// (0x00042ab0) wml_miniature_view_pane_g2

0x621f,	// (0x00042ab9) wml_miniature_view_pane_g3

0x6227,	// (0x00042ac1) wml_miniature_view_pane_g4

0x622f,	// (0x00042ac9) wml_miniature_view_pane_g5

0x6237,	// (0x00042ad1) wml_miniature_view_pane_g6

0x623f,	// (0x00042ad9) wml_miniature_view_pane_g7

0x6247,	// (0x00042ae1) wml_miniature_view_pane_g8

0x0007,

0xf686,	// (0x0004bf20) wml_miniature_view_pane_g

0xcc7e,	// (0x00049518) background_graphic_ParamLimits

0xcc7e,	// (0x00049518) background_graphic

0xccb8,	// (0x00049552) wml_tabs_2_pane

0xccc1,	// (0x0004955b) wml_tabs_3_pane_ParamLimits

0xccc1,	// (0x0004955b) wml_tabs_3_pane

0xccd3,	// (0x0004956d) wml_tabs_4_pane_ParamLimits

0xccd3,	// (0x0004956d) wml_tabs_4_pane

0xcce9,	// (0x00049583) wml_tabs_5_pane_ParamLimits

0xcce9,	// (0x00049583) wml_tabs_5_pane

0xcd03,	// (0x0004959d) wml_tabs_pane_g2_ParamLimits

0xcd03,	// (0x0004959d) wml_tabs_pane_g2

0xcd17,	// (0x000495b1) wml_tabs_pane_g3_ParamLimits

0xcd17,	// (0x000495b1) wml_tabs_pane_g3

0x624f,	// (0x00042ae9) wml_tabs_2_active_pane_ParamLimits

0x624f,	// (0x00042ae9) wml_tabs_2_active_pane

0x625f,	// (0x00042af9) wml_tabs_2_passive_pane_ParamLimits

0x625f,	// (0x00042af9) wml_tabs_2_passive_pane

0x626f,	// (0x00042b09) wml_tabs_3_active_pane_cp_ParamLimits

0x626f,	// (0x00042b09) wml_tabs_3_active_pane_cp

0x6280,	// (0x00042b1a) wml_tabs_3_passive_pane_ParamLimits

0x6280,	// (0x00042b1a) wml_tabs_3_passive_pane

0x6291,	// (0x00042b2b) wml_tabs_3_passive_pane_cp_ParamLimits

0x6291,	// (0x00042b2b) wml_tabs_3_passive_pane_cp

0x62a2,	// (0x00042b3c) tabs_4_active_pane

0x62aa,	// (0x00042b44) tabs_4_passive_pane

0x62b2,	// (0x00042b4c) tabs_4_passive_pane_cp

0x62ba,	// (0x00042b54) tabs_4_passive_pane_cp2

0x57f1,	// (0x0004208b) aid_height_text

0x4ff7,	// (0x00041891) mup_volume_cont_pane_ParamLimits

0x4ff7,	// (0x00041891) mup_volume_cont_pane

0x2964,	// (0x0003f1fe) aid_size_cell_pinb

0x296e,	// (0x0003f208) aid_size_list_pinb

0x61b4,	// (0x00042a4e) mup2_volume_cont_pane_ParamLimits

0x61b4,	// (0x00042a4e) mup2_volume_cont_pane

0x62c2,	// (0x00042b5c) mup2_volume_cont_pane_g1_ParamLimits

0x62c2,	// (0x00042b5c) mup2_volume_cont_pane_g1

0x259e,	// (0x0003ee38) aid_size_cell_touch_ParamLimits

0x259e,	// (0x0003ee38) aid_size_cell_touch

0x2847,	// (0x0003f0e1) touch_pane_ParamLimits

0x2847,	// (0x0003f0e1) touch_pane

0xa564,	// (0x00046dfe) main_rss2_pane

0xcd34,	// (0x000495ce) listscroll_rss2_pane

0xcd3d,	// (0x000495d7) rss2_navigation_pane

0xcd45,	// (0x000495df) list_rss2_pane

0xb685,	// (0x00047f1f) scroll_pane_cp22

0xcd4d,	// (0x000495e7) rss2_navigation_pane_g1

0xcd56,	// (0x000495f0) rss2_navigation_pane_g2

0xcd5e,	// (0x000495f8) rss2_navigation_pane_g3

0x0002,

0xf697,	// (0x0004bf31) rss2_navigation_pane_g

0xcd66,	// (0x00049600) rss2_navigation_pane_t1

0x62fb,	// (0x00042b95) rss2_list_single_pane_ParamLimits

0x62fb,	// (0x00042b95) rss2_list_single_pane

0xcd74,	// (0x0004960e) rss2_list_single_pane_t2

0xcd82,	// (0x0004961c) rss2_list_single_pane_t3_ParamLimits

0xcd82,	// (0x0004961c) rss2_list_single_pane_t3

0xcd9f,	// (0x00049639) rss2_list_single_pane_t4

0x47e3,	// (0x0004107d) smil_status_pane_g1

0xb06d,	// (0x00047907) main_image2_pane_ParamLimits

0xb06d,	// (0x00047907) main_image2_pane

0x5ec7,	// (0x00042761) main_camera2_pane_g9_ParamLimits

0x5ec7,	// (0x00042761) main_camera2_pane_g9

0x5f1b,	// (0x000427b5) main_camera2_pane_t5_ParamLimits

0x5f1b,	// (0x000427b5) main_camera2_pane_t5

0x5f2d,	// (0x000427c7) main_camera2_pane_t6_ParamLimits

0x5f2d,	// (0x000427c7) main_camera2_pane_t6

0x6333,	// (0x00042bcd) main_image2_pane_g1_ParamLimits

0x6333,	// (0x00042bcd) main_image2_pane_g1

0x558d,	// (0x00041e27) smil2_video_pane_ParamLimits

0x558d,	// (0x00041e27) smil2_video_pane

0x127d,	// (0x0003db17) aid_zoom_text_primary_cp

0x27f0,	// (0x0003f08a) popup_preview_fixed_window

0xafb5,	// (0x0004784f) im_reading_pane_g1

0x5e11,	// (0x000426ab) cams2_bc_adjust_pane_cp_ParamLimits

0x5e11,	// (0x000426ab) cams2_bc_adjust_pane_cp

0x5f5d,	// (0x000427f7) cams2_bc_adjust_pane_ParamLimits

0x5f5d,	// (0x000427f7) cams2_bc_adjust_pane

0x633f,	// (0x00042bd9) cams2_bc_adjust_pane_g1

0x6347,	// (0x00042be1) cams2_slider_pane

0x6350,	// (0x00042bea) cams2_slider_pane_g1

0x6359,	// (0x00042bf3) cams2_slider_pane_g2

0x0006,

0xf69e,	// (0x0004bf38) cams2_slider_pane_g

0x2a5e,	// (0x0003f2f8) calc_display_pane_ParamLimits

0x2a7c,	// (0x0003f316) calc_paper_pane_ParamLimits

0x2a98,	// (0x0003f332) grid_calc_pane_ParamLimits

0x4a68,	// (0x00041302) popup_clock_digital_window_t1_ParamLimits

0xba48,	// (0x000482e2) main_image_pane_t1

0x2a44,	// (0x0003f2de) aid_size_cell_calc_ParamLimits

0x2a44,	// (0x0003f2de) aid_size_cell_calc

0x5a66,	// (0x00042300) popup_blid_sat_info2_window_ParamLimits

0x5a66,	// (0x00042300) popup_blid_sat_info2_window

0xcdb5,	// (0x0004964f) aid_size_cell_blid

0xcdbd,	// (0x00049657) bg_popup_window_pane_cp07

0xcde0,	// (0x0004967a) grid_popup_blid_pane

0xcdea,	// (0x00049684) heading_pane_cp05_ParamLimits

0xcdea,	// (0x00049684) heading_pane_cp05

0xceb4,	// (0x0004974e) cell_popup_blid_pane_ParamLimits

0xceb4,	// (0x0004974e) cell_popup_blid_pane

0xceda,	// (0x00049774) cell_popup_blid_pane_g1

0xcee2,	// (0x0004977c) cell_popup_blid_pane_t1

0x617a,	// (0x00042a14) mup2_indicator_pane_ParamLimits

0x617a,	// (0x00042a14) mup2_indicator_pane

0xb7ce,	// (0x00048068) mup2_visualizer_osc_pane

0xcc96,	// (0x00049530) mup2_visualizer_spec_pane_ParamLimits

0xcc96,	// (0x00049530) mup2_visualizer_spec_pane

0x6373,	// (0x00042c0d) mup2_spec_half_pane

0x637c,	// (0x00042c16) mup2_spec_half_pane_cp

0x6386,	// (0x00042c20) mup2_spec_bar_pane_ParamLimits

0x6386,	// (0x00042c20) mup2_spec_bar_pane

0xcc2b,	// (0x000494c5) mup2_spec_bar_pane_g1

0xcc35,	// (0x000494cf) mup2_spec_bar_pane_g2

0x0001,

0xf611,	// (0x0004beab) mup2_spec_bar_pane_g

0x63a5,	// (0x00042c3f) mup2_osc_middle_pane

0xcc47,	// (0x000494e1) mup2_visualizer_osc_pane_g1

0xa58e,	// (0x00046e28) popup_number_entry_window_t1_ParamLimits

0xa5a1,	// (0x00046e3b) popup_number_entry_window_t2_ParamLimits

0xa5b3,	// (0x00046e4d) popup_number_entry_window_t3_ParamLimits

0x289e,	// (0x0003f138) popup_number_entry_window_t5_ParamLimits

0x289e,	// (0x0003f138) popup_number_entry_window_t5

0xf0d3,	// (0x0004b96d) popup_number_entry_window_t_ParamLimits

0xa5c5,	// (0x00046e5f) text_title_cp2_ParamLimits

0x5278,	// (0x00041b12) aid_hotspot_pointer_text2_pane

0x5312,	// (0x00041bac) main_viewer_pane_g9_ParamLimits

0x5312,	// (0x00041bac) main_viewer_pane_g9

0xb1fc,	// (0x00047a96) cale_month_pane_t1_ParamLimits

0xb239,	// (0x00047ad3) bg_cale_pane_ParamLimits

0xb251,	// (0x00047aeb) list_cale_pane_ParamLimits

0xb262,	// (0x00047afc) listscroll_cale_day_pane_t1

0xb274,	// (0x00047b0e) scroll_pane_cp09_ParamLimits

0x5036,	// (0x000418d0) main_mup_eq_pane_t1_ParamLimits

0x5036,	// (0x000418d0) main_mup_eq_pane_t1

0x5050,	// (0x000418ea) main_mup_eq_pane_t2_ParamLimits

0x5050,	// (0x000418ea) main_mup_eq_pane_t2

0x5068,	// (0x00041902) main_mup_eq_pane_t3_ParamLimits

0x5068,	// (0x00041902) main_mup_eq_pane_t3

0x5080,	// (0x0004191a) main_mup_eq_pane_t4_ParamLimits

0x5080,	// (0x0004191a) main_mup_eq_pane_t4

0x5098,	// (0x00041932) main_mup_eq_pane_t5_ParamLimits

0x5098,	// (0x00041932) main_mup_eq_pane_t5

0x50b0,	// (0x0004194a) main_mup_eq_pane_t6_ParamLimits

0x50b0,	// (0x0004194a) main_mup_eq_pane_t6

0x50c4,	// (0x0004195e) main_mup_eq_pane_t7_ParamLimits

0x50c4,	// (0x0004195e) main_mup_eq_pane_t7

0x50d8,	// (0x00041972) main_mup_eq_pane_t8_ParamLimits

0x50d8,	// (0x00041972) main_mup_eq_pane_t8

0x50ee,	// (0x00041988) main_mup_eq_pane_t9_ParamLimits

0x50ee,	// (0x00041988) main_mup_eq_pane_t9

0x5106,	// (0x000419a0) main_mup_eq_pane_t10_ParamLimits

0x5106,	// (0x000419a0) main_mup_eq_pane_t10

0x0009,

0xf460,	// (0x0004bcfa) main_mup_eq_pane_t_ParamLimits

0xf460,	// (0x0004bcfa) main_mup_eq_pane_t

0x51c3,	// (0x00041a5d) mup_equalizer_pane_cp5_ParamLimits

0x51d9,	// (0x00041a73) mup_equalizer_pane_cp6_ParamLimits

0x51f1,	// (0x00041a8b) mup_equalizer_pane_cp7_ParamLimits

0xa564,	// (0x00046dfe) main_gallery_pane

0xcc50,	// (0x000494ea) smil2_volume_pane

0xcc58,	// (0x000494f2) smil_status_volume_pane_g1_ParamLimits

0xcc6b,	// (0x00049505) smil_status_volume_pane_g2_ParamLimits

0x5c86,	// (0x00042520) smil_status_volume_pane_g3_ParamLimits

0xf616,	// (0x0004beb0) smil_status_volume_pane_g_ParamLimits

0xcdbd,	// (0x00049657) bg_popup_window_pane_cp07_ParamLimits

0xcdcb,	// (0x00049665) blid_firmament_pane

0x63ae,	// (0x00042c48) aid_size_cell_gallery_ParamLimits

0x63ae,	// (0x00042c48) aid_size_cell_gallery

0x63bc,	// (0x00042c56) grid_gallery_pane_ParamLimits

0x63bc,	// (0x00042c56) grid_gallery_pane

0x63cc,	// (0x00042c66) cell_gallery_pane_ParamLimits

0x63cc,	// (0x00042c66) cell_gallery_pane

0xcef0,	// (0x0004978a) bg_cell_gallery_focus_pane_ParamLimits

0xcef0,	// (0x0004978a) bg_cell_gallery_focus_pane

0xcf02,	// (0x0004979c) cell_gallery_pane_g1_ParamLimits

0xcf02,	// (0x0004979c) cell_gallery_pane_g1

0x641a,	// (0x00042cb4) cell_gallery_pane_g2_ParamLimits

0x641a,	// (0x00042cb4) cell_gallery_pane_g2

0x6427,	// (0x00042cc1) cell_gallery_pane_g3_ParamLimits

0x6427,	// (0x00042cc1) cell_gallery_pane_g3

0xcf0e,	// (0x000497a8) cell_gallery_pane_g4_ParamLimits

0xcf0e,	// (0x000497a8) cell_gallery_pane_g4

0x0003,

0xf6c4,	// (0x0004bf5e) cell_gallery_pane_g_ParamLimits

0xf6c4,	// (0x0004bf5e) cell_gallery_pane_g

0xcf1a,	// (0x000497b4) bg_cell_gallery_focus_pane_g1

0xcf22,	// (0x000497bc) bg_cell_gallery_focus_pane_g2

0xcf2a,	// (0x000497c4) bg_cell_gallery_focus_pane_g3

0xcf32,	// (0x000497cc) bg_cell_gallery_focus_pane_g4

0xcf3a,	// (0x000497d4) bg_cell_gallery_focus_pane_g5

0xcf42,	// (0x000497dc) bg_cell_gallery_focus_pane_g6

0xcf4a,	// (0x000497e4) bg_cell_gallery_focus_pane_g7

0xcf52,	// (0x000497ec) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6cd,	// (0x0004bf67) bg_cell_gallery_focus_pane_g

0xcf5a,	// (0x000497f4) aid_firma_cardinal

0xcf6e,	// (0x00049808) blid_firmament_pane_t1

0xcf85,	// (0x0004981f) blid_firmament_pane_t2

0xcf9c,	// (0x00049836) blid_firmament_pane_t3

0xcfb3,	// (0x0004984d) blid_firmament_pane_t4

0x0003,

0xf6de,	// (0x0004bf78) blid_firmament_pane_t

0xcfca,	// (0x00049864) blid_sat_info_pane

0xcfda,	// (0x00049874) blid_sat_info_pane_g1

0xcfda,	// (0x00049874) blid_sat_info_pane_g2

0x0001,

0xf6e7,	// (0x0004bf81) blid_sat_info_pane_g

0xcfe4,	// (0x0004987e) blid_sat_info_pane_t1

0xcff2,	// (0x0004988c) smil2_volume_content_pane

0xcffb,	// (0x00049895) smil2_volume_pane_g1

0xad6c,	// (0x00047606) smil2_volume_content_pane_g1

0xd003,	// (0x0004989d) smil2_volume_content_pane_g2

0xd00c,	// (0x000498a6) smil2_volume_content_pane_g3

0xd015,	// (0x000498af) smil2_volume_content_pane_g4

0xd01e,	// (0x000498b8) smil2_volume_content_pane_g5

0xd027,	// (0x000498c1) smil2_volume_content_pane_g6

0xd030,	// (0x000498ca) smil2_volume_content_pane_g7

0xd039,	// (0x000498d3) smil2_volume_content_pane_g8

0xd042,	// (0x000498dc) smil2_volume_content_pane_g9

0xd04b,	// (0x000498e5) smil2_volume_content_pane_g10

0x0009,

0xf6ec,	// (0x0004bf86) smil2_volume_content_pane_g

0x306b,	// (0x0003f905) cale_week_day_heading_pane_t1_ParamLimits

0x30a6,	// (0x0003f940) cale_week_day_heading_pane_t2_ParamLimits

0x30e1,	// (0x0003f97b) cale_week_day_heading_pane_t3_ParamLimits

0x311c,	// (0x0003f9b6) cale_week_day_heading_pane_t4_ParamLimits

0x3157,	// (0x0003f9f1) cale_week_day_heading_pane_t5_ParamLimits

0x3192,	// (0x0003fa2c) cale_week_day_heading_pane_t6_ParamLimits

0x31cd,	// (0x0003fa67) cale_week_day_heading_pane_t7_ParamLimits

0xf1d8,	// (0x0004ba72) cale_week_day_heading_pane_t_ParamLimits

0xae68,	// (0x00047702) bg_cale_side_pane_ParamLimits

0x3208,	// (0x0003faa2) cale_week_time_pane_t1_ParamLimits

0x3222,	// (0x0003fabc) cale_week_time_pane_t2_ParamLimits

0x323c,	// (0x0003fad6) cale_week_time_pane_t3_ParamLimits

0x3256,	// (0x0003faf0) cale_week_time_pane_t4_ParamLimits

0x3270,	// (0x0003fb0a) cale_week_time_pane_t5_ParamLimits

0x328c,	// (0x0003fb26) cale_week_time_pane_t6_ParamLimits

0x32ae,	// (0x0003fb48) cale_week_time_pane_t7_ParamLimits

0x32d2,	// (0x0003fb6c) cale_week_time_pane_t8_ParamLimits

0xf1e7,	// (0x0004ba81) cale_week_time_pane_t_ParamLimits

0x32f8,	// (0x0003fb92) cell_cale_week_pane_g2_ParamLimits

0xae68,	// (0x00047702) bg_cale_side_pane_cp01_ParamLimits

0x45dc,	// (0x00040e76) cale_month_week_pane_t1_ParamLimits

0x45f5,	// (0x00040e8f) cale_month_week_pane_t2_ParamLimits

0x460e,	// (0x00040ea8) cale_month_week_pane_t3_ParamLimits

0x4627,	// (0x00040ec1) cale_month_week_pane_t4_ParamLimits

0x4644,	// (0x00040ede) cale_month_week_pane_t5_ParamLimits

0x4665,	// (0x00040eff) cale_month_week_pane_t6_ParamLimits

0xf2c0,	// (0x0004bb5a) cale_month_week_pane_t_ParamLimits

0x47ac,	// (0x00041046) cell_cale_month_pane_g1_ParamLimits

0xa564,	// (0x00046dfe) main_cale_event_viewer_pane

0xa564,	// (0x00046dfe) listscroll_cale_event_viewer_pane

0xd054,	// (0x000498ee) list_cale_ev_pane

0xd05c,	// (0x000498f6) scroll_pane_cp023

0xd068,	// (0x00049902) field_cale_ev_pane_ParamLimits

0xd068,	// (0x00049902) field_cale_ev_pane

0xd084,	// (0x0004991e) field_cale_ev_content_pane_ParamLimits

0xd084,	// (0x0004991e) field_cale_ev_content_pane

0xd090,	// (0x0004992a) field_cale_ev_pane_g1_ParamLimits

0xd090,	// (0x0004992a) field_cale_ev_pane_g1

0xd09c,	// (0x00049936) field_cale_ev_pane_g2_ParamLimits

0xd09c,	// (0x00049936) field_cale_ev_pane_g2

0xd0b4,	// (0x0004994e) field_cale_ev_pane_g3_ParamLimits

0xd0b4,	// (0x0004994e) field_cale_ev_pane_g3

0x0002,

0xf701,	// (0x0004bf9b) field_cale_ev_pane_g_ParamLimits

0xf701,	// (0x0004bf9b) field_cale_ev_pane_g

0xd0cc,	// (0x00049966) field_cale_ev_pane_t1_ParamLimits

0xd0cc,	// (0x00049966) field_cale_ev_pane_t1

0xd0e3,	// (0x0004997d) field_cale_ev_content_pane_t1_ParamLimits

0xd0e3,	// (0x0004997d) field_cale_ev_content_pane_t1

0x525f,	// (0x00041af9) bg_button_pane_cp01

0x2e09,	// (0x0003f6a3) listscroll_cale_week_pane_ParamLimits

0xae12,	// (0x000476ac) popup_toolbar_window_cp01

0xae39,	// (0x000476d3) listscroll_cale_week_pane_t1_ParamLimits

0x2e09,	// (0x0003f6a3) listscroll_cale_day_pane_ParamLimits

0xae12,	// (0x000476ac) popup_toolbar_window_cp02

0xb262,	// (0x00047afc) listscroll_cale_day_pane_t1_ParamLimits

0x2e09,	// (0x0003f6a3) main_cale_month_pane_ParamLimits

0x5b63,	// (0x000423fd) popup_toolbar_window_cp03_ParamLimits

0x5b63,	// (0x000423fd) popup_toolbar_window_cp03

0x549f,	// (0x00041d39) main_image_pane_g2_ParamLimits

0x549f,	// (0x00041d39) main_image_pane_g2

0x54ab,	// (0x00041d45) main_image_pane_g3_ParamLimits

0x54ab,	// (0x00041d45) main_image_pane_g3

0x0002,

0xf4f2,	// (0x0004bd8c) main_image_pane_g_ParamLimits

0xf4f2,	// (0x0004bd8c) main_image_pane_g

0xba48,	// (0x000482e2) main_image_pane_t1_ParamLimits

0x54b7,	// (0x00041d51) main_image_pane_t2_ParamLimits

0x54b7,	// (0x00041d51) main_image_pane_t2

0x54c9,	// (0x00041d63) main_image_pane_t3_ParamLimits

0x54c9,	// (0x00041d63) main_image_pane_t3

0x54db,	// (0x00041d75) main_image_pane_t4_ParamLimits

0x54db,	// (0x00041d75) main_image_pane_t4

0x0003,

0xf4f9,	// (0x0004bd93) main_image_pane_t_ParamLimits

0xf4f9,	// (0x0004bd93) main_image_pane_t

0x54ed,	// (0x00041d87) popup_image_details_window_cp01

0x54f7,	// (0x00041d91) popup_toobar_trans_pane_cp01_ParamLimits

0x54f7,	// (0x00041d91) popup_toobar_trans_pane_cp01

0x5ab9,	// (0x00042353) popup_image_details_window_ParamLimits

0x5ab9,	// (0x00042353) popup_image_details_window

0x5ac7,	// (0x00042361) popup_image_focus_window

0x5e03,	// (0x0004269d) camera2_autofocus_pane_ParamLimits

0x5e03,	// (0x0004269d) camera2_autofocus_pane

0xa564,	// (0x00046dfe) bg_popup_sub_pane_cp06

0xd100,	// (0x0004999a) popup_image_focus_window_g1

0xd108,	// (0x000499a2) popup_image_focus_window_g2

0xd110,	// (0x000499aa) popup_image_focus_window_g3

0xd118,	// (0x000499b2) popup_image_focus_window_g4

0x0003,

0xf708,	// (0x0004bfa2) popup_image_focus_window_g

0xd120,	// (0x000499ba) popup_image_focus_window_t1

0xd12e,	// (0x000499c8) popup_image_focus_window_t2

0xd13e,	// (0x000499d8) popup_image_focus_window_t3

0x0002,

0xf711,	// (0x0004bfab) popup_image_focus_window_t

0xd14c,	// (0x000499e6) camera2_autofocus_pane_g1

0xb06d,	// (0x00047907) bg_tb_trans_pane_cp01

0xd15a,	// (0x000499f4) popup_image_details_window_g1

0xd16d,	// (0x00049a07) popup_image_details_window_g2

0x0002,

0xf723,	// (0x0004bfbd) popup_image_details_window_g

0xd196,	// (0x00049a30) popup_image_details_window_t1

0xd1a8,	// (0x00049a42) popup_image_details_window_t2

0xd1c1,	// (0x00049a5b) popup_image_details_window_t3

0xd1d5,	// (0x00049a6f) popup_image_details_window_t4

0xd1f0,	// (0x00049a8a) popup_image_details_window_t5

0x0004,

0xf72a,	// (0x0004bfc4) popup_image_details_window_t

0xacd7,	// (0x00047571) bg_calc_paper_pane_ParamLimits

0xa564,	// (0x00046dfe) grid_highlight_pane_cp013

0x2b95,	// (0x0003f42f) list_calc_pane_ParamLimits

0x2ba7,	// (0x0003f441) scroll_pane_cp024

0xaceb,	// (0x00047585) bg_calc_display_pane_ParamLimits

0x2baf,	// (0x0003f449) calc_display_pane_t1_ParamLimits

0x2bc4,	// (0x0003f45e) calc_display_pane_t2_ParamLimits

0x2bd9,	// (0x0003f473) calc_display_pane_t3_ParamLimits

0xf15a,	// (0x0004b9f4) calc_display_pane_t_ParamLimits

0x2cba,	// (0x0003f554) cell_calc_pane_g2

0x0001,

0xf177,	// (0x0004ba11) cell_calc_pane_g

0x2cc3,	// (0x0003f55d) cell_calc_pane_t1

0xad4a,	// (0x000475e4) grid_highlight_pane_cp02_ParamLimits

0xad60,	// (0x000475fa) toolbar_button_pane_cp01_ParamLimits

0xad60,	// (0x000475fa) toolbar_button_pane_cp01

0xba8d,	// (0x00048327) temp_image_control_pane_ParamLimits

0xba8d,	// (0x00048327) temp_image_control_pane

0xb06d,	// (0x00047907) main_mp3_pane

0xd20a,	// (0x00049aa4) temp_image_control_pane_g1_ParamLimits

0xd20a,	// (0x00049aa4) temp_image_control_pane_g1

0xd218,	// (0x00049ab2) temp_image_control_pane_g2_ParamLimits

0xd218,	// (0x00049ab2) temp_image_control_pane_g2

0xd22a,	// (0x00049ac4) temp_image_control_pane_g3_ParamLimits

0xd22a,	// (0x00049ac4) temp_image_control_pane_g3

0x6464,	// (0x00042cfe) temp_image_control_pane_g4_ParamLimits

0x6464,	// (0x00042cfe) temp_image_control_pane_g4

0x0003,

0xf735,	// (0x0004bfcf) temp_image_control_pane_g_ParamLimits

0xf735,	// (0x0004bfcf) temp_image_control_pane_g

0xd20a,	// (0x00049aa4) main_mp3_pane_g1

0x6475,	// (0x00042d0f) main_mp3_pane_g2

0x0007,

0xf73e,	// (0x0004bfd8) main_mp3_pane_g

0xd26d,	// (0x00049b07) main_mp3_pane_t1

0xaec4,	// (0x0004775e) main_camera_pane_g8_ParamLimits

0xaec4,	// (0x0004775e) main_camera_pane_g8

0x358d,	// (0x0003fe27) main_video_pane_g7_ParamLimits

0x358d,	// (0x0003fe27) main_video_pane_g7

0x5f4b,	// (0x000427e5) main_camera2_pane_t7_ParamLimits

0x5f4b,	// (0x000427e5) main_camera2_pane_t7

0xb00c,	// (0x000478a6) scroll_pane_cp025_ParamLimits

0xb00c,	// (0x000478a6) scroll_pane_cp025

0xb020,	// (0x000478ba) scroll_pane_cp026_ParamLimits

0xb020,	// (0x000478ba) scroll_pane_cp026

0xb02f,	// (0x000478c9) wml_content_pane_ParamLimits

0xa564,	// (0x00046dfe) main_touch_calib_pane

0x6519,	// (0x00042db3) main_touch_calib_pane_g1

0x6525,	// (0x00042dbf) main_touch_calib_pane_g2

0x6531,	// (0x00042dcb) main_touch_calib_pane_g3

0x653d,	// (0x00042dd7) main_touch_calib_pane_g4

0x0003,

0xf75c,	// (0x0004bff6) main_touch_calib_pane_g

0x6549,	// (0x00042de3) main_touch_calib_pane_t1

0x6562,	// (0x00042dfc) main_touch_calib_pane_t2

0x0004,

0xf765,	// (0x0004bfff) main_touch_calib_pane_t

0xb70f,	// (0x00047fa9) mup_progress_pane_cp02

0xb72e,	// (0x00047fc8) navi_pane_g1

0xb790,	// (0x0004802a) navi_pane_mp_t3

0xb06d,	// (0x00047907) main_mp3_pane_ParamLimits

0x5ba0,	// (0x0004243a) navi_pane_ParamLimits

0xd20a,	// (0x00049aa4) main_mp3_pane_g1_ParamLimits

0x6475,	// (0x00042d0f) main_mp3_pane_g2_ParamLimits

0x6481,	// (0x00042d1b) main_mp3_pane_g3_ParamLimits

0x6481,	// (0x00042d1b) main_mp3_pane_g3

0x648d,	// (0x00042d27) main_mp3_pane_g4_ParamLimits

0x648d,	// (0x00042d27) main_mp3_pane_g4

0xd23a,	// (0x00049ad4) main_mp3_pane_g5_ParamLimits

0xd23a,	// (0x00049ad4) main_mp3_pane_g5

0xd248,	// (0x00049ae2) main_mp3_pane_g6_ParamLimits

0xd248,	// (0x00049ae2) main_mp3_pane_g6

0xd255,	// (0x00049aef) main_mp3_pane_g7_ParamLimits

0xd255,	// (0x00049aef) main_mp3_pane_g7

0xd261,	// (0x00049afb) main_mp3_pane_g8_ParamLimits

0xd261,	// (0x00049afb) main_mp3_pane_g8

0xf73e,	// (0x0004bfd8) main_mp3_pane_g_ParamLimits

0x6499,	// (0x00042d33) main_mp3_pane_t2

0x64a9,	// (0x00042d43) main_mp3_pane_t3

0xd27b,	// (0x00049b15) main_mp3_pane_t4

0xd289,	// (0x00049b23) main_mp3_pane_t5

0x0005,

0xf74f,	// (0x0004bfe9) main_mp3_pane_t

0xd297,	// (0x00049b31) mup_progress_pane_cp01

0x127d,	// (0x0003db17) aid_zoom_text_secondary2

0xd054,	// (0x000498ee) list_cale_ev2_pane

0xd05c,	// (0x000498f6) scroll_pane_cp023_ParamLimits

0x65bd,	// (0x00042e57) field_cale_ev2_pane_ParamLimits

0x65bd,	// (0x00042e57) field_cale_ev2_pane

0x1589,	// (0x0003de23) field_cale_ev2_pane_g1_ParamLimits

0x1589,	// (0x0003de23) field_cale_ev2_pane_g1

0x1595,	// (0x0003de2f) field_cale_ev2_pane_g2_ParamLimits

0x1595,	// (0x0003de2f) field_cale_ev2_pane_g2

0x15ad,	// (0x0003de47) field_cale_ev2_pane_g3_ParamLimits

0x15ad,	// (0x0003de47) field_cale_ev2_pane_g3

0x0003,

0xf770,	// (0x0004c00a) field_cale_ev2_pane_g_ParamLimits

0xf770,	// (0x0004c00a) field_cale_ev2_pane_g

0x15d1,	// (0x0003de6b) field_cale_ev2_pane_t1_ParamLimits

0x15d1,	// (0x0003de6b) field_cale_ev2_pane_t1

0x15e8,	// (0x0003de82) field_cale_ev2_pane_t2_ParamLimits

0x15e8,	// (0x0003de82) field_cale_ev2_pane_t2

0x0001,

0xf779,	// (0x0004c013) field_cale_ev2_pane_t_ParamLimits

0xf779,	// (0x0004c013) field_cale_ev2_pane_t

0x537a,	// (0x00041c14) main_postcard_pane_g5_ParamLimits

0x537a,	// (0x00041c14) main_postcard_pane_g5

0x5388,	// (0x00041c22) main_postcard_pane_g6_ParamLimits

0x5388,	// (0x00041c22) main_postcard_pane_g6

0x33d7,	// (0x0003fc71) camera2_autofocus_pane_cp_ParamLimits

0x33d7,	// (0x0003fc71) camera2_autofocus_pane_cp

0xb06d,	// (0x00047907) main_mup3_pane

0x660b,	// (0x00042ea5) main_mup3_pane_g1_ParamLimits

0x660b,	// (0x00042ea5) main_mup3_pane_g1

0x662c,	// (0x00042ec6) main_mup3_pane_g2_ParamLimits

0x662c,	// (0x00042ec6) main_mup3_pane_g2

0x66a8,	// (0x00042f42) main_mup3_pane_g3_ParamLimits

0x66a8,	// (0x00042f42) main_mup3_pane_g3

0x66eb,	// (0x00042f85) main_mup3_pane_g4_ParamLimits

0x66eb,	// (0x00042f85) main_mup3_pane_g4

0x672e,	// (0x00042fc8) main_mup3_pane_g5_ParamLimits

0x672e,	// (0x00042fc8) main_mup3_pane_g5

0x6773,	// (0x0004300d) main_mup3_pane_g6_ParamLimits

0x6773,	// (0x0004300d) main_mup3_pane_g6

0xd29f,	// (0x00049b39) main_mup3_pane_g7_ParamLimits

0xd29f,	// (0x00049b39) main_mup3_pane_g7

0x0007,

0xf789,	// (0x0004c023) main_mup3_pane_g_ParamLimits

0xf789,	// (0x0004c023) main_mup3_pane_g

0x67e9,	// (0x00043083) main_mup3_pane_t1_ParamLimits

0x67e9,	// (0x00043083) main_mup3_pane_t1

0x6858,	// (0x000430f2) main_mup3_pane_t2_ParamLimits

0x6858,	// (0x000430f2) main_mup3_pane_t2

0x6921,	// (0x000431bb) main_mup3_pane_t4_ParamLimits

0x6921,	// (0x000431bb) main_mup3_pane_t4

0x696f,	// (0x00043209) main_mup3_pane_t5_ParamLimits

0x696f,	// (0x00043209) main_mup3_pane_t5

0x6a1f,	// (0x000432b9) main_mup3_pane_t6_ParamLimits

0x6a1f,	// (0x000432b9) main_mup3_pane_t6

0x0005,

0xf79a,	// (0x0004c034) main_mup3_pane_t_ParamLimits

0xf79a,	// (0x0004c034) main_mup3_pane_t

0x6acb,	// (0x00043365) mup3_progress_pane_ParamLimits

0x6acb,	// (0x00043365) mup3_progress_pane

0x6b3f,	// (0x000433d9) popup_mup3_control_window_ParamLimits

0x6b3f,	// (0x000433d9) popup_mup3_control_window

0xd2ad,	// (0x00049b47) popup_mup3_text_window

0x6b58,	// (0x000433f2) mup3_progress_pane_t1

0x6b77,	// (0x00043411) mup3_progress_pane_t2

0xd2b5,	// (0x00049b4f) mup3_progress_pane_t3

0x0002,

0xf7a7,	// (0x0004c041) mup3_progress_pane_t

0xd2d2,	// (0x00049b6c) mup_progress_pane_cp03

0xa564,	// (0x00046dfe) bg_tb_trans_pane_cp04

0x6b96,	// (0x00043430) mup3_volume_pane

0x6b9e,	// (0x00043438) popup_mup3_control_window_g1

0x6ba7,	// (0x00043441) mup3_volume_pane_g1

0x6bb0,	// (0x0004344a) mup3_volume_pane_g2

0x6bb9,	// (0x00043453) mup3_volume_pane_g3

0x0002,

0xf7ae,	// (0x0004c048) mup3_volume_pane_g

0xa564,	// (0x00046dfe) bg_tb_trans_pane_cp03

0xd2e2,	// (0x00049b7c) popup_mup3_text_window_g1

0xd2ea,	// (0x00049b84) popup_mup3_text_window_t1

0xad33,	// (0x000475cd) list_calc_item_pane_g1_ParamLimits

0xcd2b,	// (0x000495c5) mup_volume_pane_cp_g1

0x657b,	// (0x00042e15) main_touch_calib_pane_t3

0x6591,	// (0x00042e2b) main_touch_calib_pane_t4

0x65a7,	// (0x00042e41) main_touch_calib_pane_t5

0x258a,	// (0x0003ee24) aid_cell_size_toolbar2

0x2592,	// (0x0003ee2c) aid_popup3_width_pane

0x1275,	// (0x0003db0f) aid_zoom_text_msg_primary

0x33ae,	// (0x0003fc48) vorec_t7

0xacf7,	// (0x00047591) bg_calc_paper_pane_g1_ParamLimits

0xad03,	// (0x0004759d) bg_calc_paper_pane_g2_ParamLimits

0xad0f,	// (0x000475a9) bg_calc_paper_pane_g3_ParamLimits

0xad1b,	// (0x000475b5) bg_calc_paper_pane_g4_ParamLimits

0xad27,	// (0x000475c1) bg_calc_paper_pane_g5_ParamLimits

0x2c18,	// (0x0003f4b2) bg_calc_paper_pane_g6_ParamLimits

0x2c29,	// (0x0003f4c3) bg_calc_paper_pane_g7_ParamLimits

0x2c3a,	// (0x0003f4d4) bg_calc_paper_pane_g8_ParamLimits

0xf161,	// (0x0004b9fb) bg_calc_paper_pane_g_ParamLimits

0x2c4b,	// (0x0003f4e5) calc_bg_paper_pane_g9_ParamLimits

0x34be,	// (0x0003fd58) image_qvga_pane_ParamLimits

0x34be,	// (0x0003fd58) image_qvga_pane

0xac07,	// (0x000474a1) bg_popup_sub_pane_cp04_ParamLimits

0xb9c4,	// (0x0004825e) popup_mup_playback_window_g1_ParamLimits

0xb9d0,	// (0x0004826a) popup_mup_playback_window_t1_ParamLimits

0xb9e5,	// (0x0004827f) popup_mup_playback_window_t2_ParamLimits

0xf4ed,	// (0x0004bd87) popup_mup_playback_window_t_ParamLimits

0x607a,	// (0x00042914) main_mup2_pane_g3_ParamLimits

0x607a,	// (0x00042914) main_mup2_pane_g3

0x3776,	// (0x00040010) popup_toolbar_window_cp04

0xbdda,	// (0x00048674) popup_call2_audio_second_window_g3_ParamLimits

0xbdda,	// (0x00048674) popup_call2_audio_second_window_g3

0xc1e4,	// (0x00048a7e) popup_call2_audio_first_window_g4_ParamLimits

0xc1e4,	// (0x00048a7e) popup_call2_audio_first_window_g4

0xc863,	// (0x000490fd) popup_call2_audio_in_window_g4_ParamLimits

0xc863,	// (0x000490fd) popup_call2_audio_in_window_g4

0x5492,	// (0x00041d2c) aid_area_sk_bg_cut_ParamLimits

0x5492,	// (0x00041d2c) aid_area_sk_bg_cut

0xb9fa,	// (0x00048294) aid_area_sk_bg_cut_2_ParamLimits

0xb9fa,	// (0x00048294) aid_area_sk_bg_cut_2

0x640a,	// (0x00042ca4) aid_placing_details_win

0x6412,	// (0x00042cac) aid_placing_details_win_2

0xd14c,	// (0x000499e6) camera2_autofocus_pane_g1_ParamLimits

0x27e1,	// (0x0003f07b) popup_fixed_preview_cale_window_ParamLimits

0x27e1,	// (0x0003f07b) popup_fixed_preview_cale_window

0xb7df,	// (0x00048079) navi_slider_pane_g3

0xb7e8,	// (0x00048082) navi_slider_pane_g4

0xb7f1,	// (0x0004808b) navi_slider_pane_g5

0xb7df,	// (0x00048079) navi_slider_pane_g6

0x4dca,	// (0x00041664) navi_slider_pane_g7

0xb904,	// (0x0004819e) mup_scale_pane_g3

0xb90d,	// (0x000481a7) mup_scale_pane_g4

0xb916,	// (0x000481b0) mup_scale_pane_g5

0x5209,	// (0x00041aa3) mup_scale_pane_g6

0x5212,	// (0x00041aac) mup_scale_pane_g7

0xb7df,	// (0x00048079) cams2_slider_pane_g3

0xcdad,	// (0x00049647) cams2_slider_pane_g4

0x6362,	// (0x00042bfc) cams2_slider_pane_g5

0xb7df,	// (0x00048079) cams2_slider_pane_g6

0x636a,	// (0x00042c04) cams2_slider_pane_g7

0xcfda,	// (0x00049874) camera2_autofocus_pane_cp_g1

0xcbc4,	// (0x0004945e) bg_popup_preview_window_pane_cp02_ParamLimits

0xcbc4,	// (0x0004945e) bg_popup_preview_window_pane_cp02

0xd2f8,	// (0x00049b92) list_fp_cale_pane_ParamLimits

0xd2f8,	// (0x00049b92) list_fp_cale_pane

0xd304,	// (0x00049b9e) popup_fixed_preview_cale_window_t1_ParamLimits

0xd304,	// (0x00049b9e) popup_fixed_preview_cale_window_t1

0x6bc2,	// (0x0004345c) popup_fixed_preview_cale_window_t2_ParamLimits

0x6bc2,	// (0x0004345c) popup_fixed_preview_cale_window_t2

0x6bd7,	// (0x00043471) popup_fixed_preview_cale_window_t3_ParamLimits

0x6bd7,	// (0x00043471) popup_fixed_preview_cale_window_t3

0x0002,

0xf7b5,	// (0x0004c04f) popup_fixed_preview_cale_window_t_ParamLimits

0xf7b5,	// (0x0004c04f) popup_fixed_preview_cale_window_t

0x6bec,	// (0x00043486) list_single_fp_cale_pane_ParamLimits

0x6bec,	// (0x00043486) list_single_fp_cale_pane

0xd322,	// (0x00049bbc) list_single_fp_cale_pane_g1_ParamLimits

0xd322,	// (0x00049bbc) list_single_fp_cale_pane_g1

0xd32e,	// (0x00049bc8) list_single_fp_cale_pane_g2_ParamLimits

0xd32e,	// (0x00049bc8) list_single_fp_cale_pane_g2

0x0002,

0xf7bc,	// (0x0004c056) list_single_fp_cale_pane_g_ParamLimits

0xf7bc,	// (0x0004c056) list_single_fp_cale_pane_g

0xd347,	// (0x00049be1) list_single_fp_cale_pane_t1_ParamLimits

0xd347,	// (0x00049be1) list_single_fp_cale_pane_t1

0xd359,	// (0x00049bf3) list_single_fp_cale_pane_t2_ParamLimits

0xd359,	// (0x00049bf3) list_single_fp_cale_pane_t2

0x0001,

0xf7c3,	// (0x0004c05d) list_single_fp_cale_pane_t_ParamLimits

0xf7c3,	// (0x0004c05d) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xa564,	// (0x00046dfe) main_dialer_pane

0x6c00,	// (0x0004349a) aid_cell_size_keypad

0x6c0a,	// (0x000434a4) dialer_ne_pane

0x6c14,	// (0x000434ae) grid_dialer_command_1_pane

0x6c1c,	// (0x000434b6) grid_dialer_command_2_pane

0x6c24,	// (0x000434be) grid_dialer_keypad_pane

0x6c38,	// (0x000434d2) bg_popup_call_pane_cp06_ParamLimits

0x6c38,	// (0x000434d2) bg_popup_call_pane_cp06

0x6c44,	// (0x000434de) dialer_ne_clear_pane_ParamLimits

0x6c44,	// (0x000434de) dialer_ne_clear_pane

0xd38c,	// (0x00049c26) dialer_ne_pane_g1

0xd394,	// (0x00049c2e) dialer_ne_pane_t1_ParamLimits

0xd394,	// (0x00049c2e) dialer_ne_pane_t1

0x6c50,	// (0x000434ea) dialer_ne_pane_t2_ParamLimits

0x6c50,	// (0x000434ea) dialer_ne_pane_t2

0x6c6d,	// (0x00043507) dialer_ne_pane_t3_ParamLimits

0x6c6d,	// (0x00043507) dialer_ne_pane_t3

0x0002,

0xf7c8,	// (0x0004c062) dialer_ne_pane_t_ParamLimits

0xf7c8,	// (0x0004c062) dialer_ne_pane_t

0x6c91,	// (0x0004352b) dialer_ne_pane_t3_copy1_ParamLimits

0x6c91,	// (0x0004352b) dialer_ne_pane_t3_copy1

0x6cb5,	// (0x0004354f) cell_dialer_keypad_pane_ParamLimits

0x6cb5,	// (0x0004354f) cell_dialer_keypad_pane

0x6ccc,	// (0x00043566) cell_dialer_command_1_pane_ParamLimits

0x6ccc,	// (0x00043566) cell_dialer_command_1_pane

0x6ce2,	// (0x0004357c) cell_dialer_command_2_pane_ParamLimits

0x6ce2,	// (0x0004357c) cell_dialer_command_2_pane

0xd3a6,	// (0x00049c40) bg_button_pane_cp02_ParamLimits

0xd3a6,	// (0x00049c40) bg_button_pane_cp02

0x6cf1,	// (0x0004358b) cell_dialer_keypad_pane_g1_ParamLimits

0x6cf1,	// (0x0004358b) cell_dialer_keypad_pane_g1

0xd3a6,	// (0x00049c40) bg_button_pane_cp03_ParamLimits

0xd3a6,	// (0x00049c40) bg_button_pane_cp03

0x6d06,	// (0x000435a0) cell_dialer_command_1_pane_g1_ParamLimits

0x6d06,	// (0x000435a0) cell_dialer_command_1_pane_g1

0xd3b2,	// (0x00049c4c) bg_button_pane_cp04

0x6d1a,	// (0x000435b4) cell_dialer_command_2_pane_g1

0xb7ce,	// (0x00048068) bg_button_pane_cp06

0xd3ba,	// (0x00049c54) dialer_ne_clear_pane_g1

0x4d05,	// (0x0004159f) navi_pane_g2

0x4d33,	// (0x000415cd) navi_pane_g3

0x0002,

0xf3f0,	// (0x0004bc8a) navi_pane_g

0x4d5e,	// (0x000415f8) navi_pane_mv_g2

0x4d85,	// (0x0004161f) navi_pane_mv_g5

0x4d8d,	// (0x00041627) navi_pane_mv_t1

0xaceb,	// (0x00047585) main_clock2_pane

0x6d5a,	// (0x000435f4) main_clock2_list_pane_ParamLimits

0x6d5a,	// (0x000435f4) main_clock2_list_pane

0x6d84,	// (0x0004361e) main_clock2_pane_t1_ParamLimits

0x6d84,	// (0x0004361e) main_clock2_pane_t1

0x6da8,	// (0x00043642) main_clock2_pane_t2_ParamLimits

0x6da8,	// (0x00043642) main_clock2_pane_t2

0x0004,

0xf7cf,	// (0x0004c069) main_clock2_pane_t_ParamLimits

0xf7cf,	// (0x0004c069) main_clock2_pane_t

0x6e03,	// (0x0004369d) popup_clock_analogue_window_cp03_ParamLimits

0x6e03,	// (0x0004369d) popup_clock_analogue_window_cp03

0x6e21,	// (0x000436bb) popup_clock_digital_window_cp02_ParamLimits

0x6e21,	// (0x000436bb) popup_clock_digital_window_cp02

0x6e90,	// (0x0004372a) main_clock2_list_single_pane_ParamLimits

0x6e90,	// (0x0004372a) main_clock2_list_single_pane

0xb7ce,	// (0x00048068) list_highlight_pane_cp05

0xd3d8,	// (0x00049c72) main_clock2_list_single_pane_t1

0x3776,	// (0x00040010) popup_toolbar_window_cp04_ParamLimits

0x6434,	// (0x00042cce) camera2_autofocus_pane_g2_ParamLimits

0x6434,	// (0x00042cce) camera2_autofocus_pane_g2

0x6440,	// (0x00042cda) camera2_autofocus_pane_g3_ParamLimits

0x6440,	// (0x00042cda) camera2_autofocus_pane_g3

0x644c,	// (0x00042ce6) camera2_autofocus_pane_g4_ParamLimits

0x644c,	// (0x00042ce6) camera2_autofocus_pane_g4

0x6458,	// (0x00042cf2) camera2_autofocus_pane_g5_ParamLimits

0x6458,	// (0x00042cf2) camera2_autofocus_pane_g5

0x0004,

0xf718,	// (0x0004bfb2) camera2_autofocus_pane_g_ParamLimits

0xf718,	// (0x0004bfb2) camera2_autofocus_pane_g

0x65eb,	// (0x00042e85) camera2_autofocus_pane_cp_g2

0x65f3,	// (0x00042e8d) camera2_autofocus_pane_cp_g3

0x65fb,	// (0x00042e95) camera2_autofocus_pane_cp_g4

0x6603,	// (0x00042e9d) camera2_autofocus_pane_cp_g5

0x0004,

0xf77e,	// (0x0004c018) camera2_autofocus_pane_cp_g

0x6c30,	// (0x000434ca) popup_dialer_spcha_window

0xa564,	// (0x00046dfe) bg_popup_sub_pane_cp07

0xd3e6,	// (0x00049c80) list_spcha_pane

0xd3ee,	// (0x00049c88) list_single_spcha_pane_ParamLimits

0xd3ee,	// (0x00049c88) list_single_spcha_pane

0xa564,	// (0x00046dfe) list_highlight_pane_cp06

0xd3ff,	// (0x00049c99) list_single_spcha_pane_t1

0xc60d,	// (0x00048ea7) popup_call2_audio_out_window_g4_ParamLimits

0xc60d,	// (0x00048ea7) popup_call2_audio_out_window_g4

0xa564,	// (0x00046dfe) main_imed2_pane

0x5acf,	// (0x00042369) popup_imed_adjust2_window

0x5ae2,	// (0x0004237c) popup_imed_trans_window_ParamLimits

0x5ae2,	// (0x0004237c) popup_imed_trans_window

0xce16,	// (0x000496b0) popup_blid_sat_info2_window_t1

0xce24,	// (0x000496be) popup_blid_sat_info2_window_t2

0x000a,

0xf6ad,	// (0x0004bf47) popup_blid_sat_info2_window_t

0x6f3a,	// (0x000437d4) aid_size_cell_colour_35

0x6f54,	// (0x000437ee) aid_size_cell_colour_112

0x6f6b,	// (0x00043805) aid_size_cell_effect

0xb06d,	// (0x00047907) bg_tb_trans_pane_cp02

0xb56e,	// (0x00047e08) heading_imed_pane

0x6f85,	// (0x0004381f) listscroll_imed_pane

0xd40d,	// (0x00049ca7) heading_imed_pane_g1

0xd415,	// (0x00049caf) heading_imed_pane_t1

0xd423,	// (0x00049cbd) grid_imed_colour_35_pane_ParamLimits

0xd423,	// (0x00049cbd) grid_imed_colour_35_pane

0x6f91,	// (0x0004382b) grid_imed_effect_pane

0xd43b,	// (0x00049cd5) list_imed_aspect_pane

0x6fa1,	// (0x0004383b) scroll_pane_cp027_ParamLimits

0x6fa1,	// (0x0004383b) scroll_pane_cp027

0x6fad,	// (0x00043847) cell_imed_effect_pane_ParamLimits

0x6fad,	// (0x00043847) cell_imed_effect_pane

0xd443,	// (0x00049cdd) cell_imed_colour_pane_ParamLimits

0xd443,	// (0x00049cdd) cell_imed_colour_pane

0xd485,	// (0x00049d1f) cell_imed_colour_pane_g1_ParamLimits

0xd485,	// (0x00049d1f) cell_imed_colour_pane_g1

0xd496,	// (0x00049d30) hgihlgiht_grid_pane_cp016_ParamLimits

0xd496,	// (0x00049d30) hgihlgiht_grid_pane_cp016

0x6fc5,	// (0x0004385f) cell_imed_effect_pane_g1

0x6fcd,	// (0x00043867) grid_highlight_pane_cp017

0xd4a7,	// (0x00049d41) list_imed_single_pane_ParamLimits

0xd4a7,	// (0x00049d41) list_imed_single_pane

0xa564,	// (0x00046dfe) list_highlight_pane_cp07

0xd4bd,	// (0x00049d57) list_imed_aspect_pane_comp1_t1

0xcbd0,	// (0x0004946a) bg_tb_trans_pane_cp05

0xd4df,	// (0x00049d79) popup_imed_adjust2_window_g1

0xd506,	// (0x00049da0) popup_imed_adjust2_window_t1

0xd51e,	// (0x00049db8) slider_imed_adjust_pane

0xd532,	// (0x00049dcc) slider_imed_adjust_pane_g1

0xd542,	// (0x00049ddc) slider_imed_adjust_pane_g2

0xd552,	// (0x00049dec) slider_imed_adjust_pane_g3

0xd563,	// (0x00049dfd) slider_imed_adjust_pane_g4

0x0003,

0xf7ec,	// (0x0004c086) slider_imed_adjust_pane_g

0x6fd6,	// (0x00043870) aid_size_cell_clipart2

0x6fe2,	// (0x0004387c) grid_imed_clipart_pane

0xd574,	// (0x00049e0e) scroll_pane_cp031

0x6fec,	// (0x00043886) cell_imed_clipart_pane_ParamLimits

0x6fec,	// (0x00043886) cell_imed_clipart_pane

0x7013,	// (0x000438ad) cell_imed_clipart_pane_g1

0xa564,	// (0x00046dfe) grid_highlight_pane_cp014

0x6d66,	// (0x00043600) main_clock2_pane_g1_ParamLimits

0x6d66,	// (0x00043600) main_clock2_pane_g1

0x6e3b,	// (0x000436d5) aid_call2_pane_cp10

0x6e4d,	// (0x000436e7) aid_call_pane_cp10

0xb703,	// (0x00047f9d) popup_clock_analogue_window_cp10_g1

0xb703,	// (0x00047f9d) popup_clock_analogue_window_cp10_g2

0x6e5f,	// (0x000436f9) popup_clock_analogue_window_cp10_g3

0x6e5f,	// (0x000436f9) popup_clock_analogue_window_cp10_g4

0xb703,	// (0x00047f9d) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7da,	// (0x0004c074) popup_clock_analogue_window_cp10_g

0x6e71,	// (0x0004370b) popup_clock_analogue_window_cp10_t1

0x6ea2,	// (0x0004373c) clock_digital_number_pane_cp10_ParamLimits

0x6ea2,	// (0x0004373c) clock_digital_number_pane_cp10

0x6eba,	// (0x00043754) clock_digital_number_pane_cp11_ParamLimits

0x6eba,	// (0x00043754) clock_digital_number_pane_cp11

0x6ed2,	// (0x0004376c) clock_digital_number_pane_cp12_ParamLimits

0x6ed2,	// (0x0004376c) clock_digital_number_pane_cp12

0x6eea,	// (0x00043784) clock_digital_number_pane_cp13_ParamLimits

0x6eea,	// (0x00043784) clock_digital_number_pane_cp13

0x6f02,	// (0x0004379c) clock_digital_separator_pane_cp10_ParamLimits

0x6f02,	// (0x0004379c) clock_digital_separator_pane_cp10

0x6f1a,	// (0x000437b4) popup_clock_digital_window_cp02_t1_ParamLimits

0x6f1a,	// (0x000437b4) popup_clock_digital_window_cp02_t1

0xabff,	// (0x00047499) clock_digital_number_pane_cp10_g1

0xabff,	// (0x00047499) clock_digital_number_pane_cp10_g2

0x0001,

0xf7f5,	// (0x0004c08f) clock_digital_number_pane_cp10_g

0xabff,	// (0x00047499) clock_digital_separator_pane_cp10_g1

0xabff,	// (0x00047499) clock_digital_separator_pane_g2_cp10

0xb79e,	// (0x00048038) navi_pane_vded_g4

0xb7a7,	// (0x00048041) navi_pane_vded_g5

0xb7b0,	// (0x0004804a) navi_pane_vded_t1

0xa564,	// (0x00046dfe) main_vded_pane

0x701c,	// (0x000438b6) main_vded_pane_g1

0x7028,	// (0x000438c2) main_vded_pane_g2

0x7032,	// (0x000438cc) main_vded_pane_g3

0x0002,

0xf7fa,	// (0x0004c094) main_vded_pane_g

0x703c,	// (0x000438d6) main_vded_pane_t1

0x704a,	// (0x000438e4) main_vded_pane_t2

0x0001,

0xf801,	// (0x0004c09b) main_vded_pane_t

0x7058,	// (0x000438f2) vded_slider_pane

0x7062,	// (0x000438fc) vded_video_pane

0xd57c,	// (0x00049e16) vded_video_pane_g1

0x706c,	// (0x00043906) vded_video_pane_g2

0xcfda,	// (0x00049874) vded_video_pane_g3

0x0002,

0xf806,	// (0x0004c0a0) vded_video_pane_g

0xd586,	// (0x00049e20) vded_slider_pane_g1

0xd58f,	// (0x00049e29) vded_slider_pane_g2

0xd598,	// (0x00049e32) vded_slider_pane_g3

0xd5a1,	// (0x00049e3b) vded_slider_pane_g4

0xd5aa,	// (0x00049e44) vded_slider_pane_g5

0x0004,

0xf80d,	// (0x0004c0a7) vded_slider_pane_g

0x6b31,	// (0x000433cb) mup3_rocker_pane_ParamLimits

0x6b31,	// (0x000433cb) mup3_rocker_pane

0x7075,	// (0x0004390f) mup3_control_keys_pane_g1

0x707d,	// (0x00043917) mup3_control_keys_pane_g2

0x7085,	// (0x0004391f) mup3_control_keys_pane_g3

0x708d,	// (0x00043927) mup3_control_keys_pane_g4

0x0003,

0xf818,	// (0x0004c0b2) mup3_control_keys_pane_g

0x2809,	// (0x0003f0a3) popup_toolbar2_fixed_window_cp01_ParamLimits

0x2809,	// (0x0003f0a3) popup_toolbar2_fixed_window_cp01

0x6b4b,	// (0x000433e5) popup_toolbar2_fixed_window_cp02_ParamLimits

0x6b4b,	// (0x000433e5) popup_toolbar2_fixed_window_cp02

0xbf4c,	// (0x000487e6) popup_call2_audio_second_window_t4_ParamLimits

0xbf4c,	// (0x000487e6) popup_call2_audio_second_window_t4

0xc47a,	// (0x00048d14) popup_call2_audio_first_window_t6_ParamLimits

0xc47a,	// (0x00048d14) popup_call2_audio_first_window_t6

0xc710,	// (0x00048faa) popup_call2_audio_out_window_t6_ParamLimits

0xc710,	// (0x00048faa) popup_call2_audio_out_window_t6

0xa564,	// (0x00046dfe) main_vitu_pane

0x709d,	// (0x00043937) aid_size_cell_itu_ParamLimits

0x709d,	// (0x00043937) aid_size_cell_itu

0xdace,	// (0x0004a368) bg_popup_window_pane_cp08_ParamLimits

0xdace,	// (0x0004a368) bg_popup_window_pane_cp08

0x70ab,	// (0x00043945) field_vitu_entry_pane_ParamLimits

0x70ab,	// (0x00043945) field_vitu_entry_pane

0x70ba,	// (0x00043954) grid_vitu_function_pane_ParamLimits

0x70ba,	// (0x00043954) grid_vitu_function_pane

0x70ca,	// (0x00043964) grid_vitu_itu_pane_ParamLimits

0x70ca,	// (0x00043964) grid_vitu_itu_pane

0x70da,	// (0x00043974) cell_vitu_itu_pane_ParamLimits

0x70da,	// (0x00043974) cell_vitu_itu_pane

0x70ef,	// (0x00043989) cell_vitu_function_pane_ParamLimits

0x70ef,	// (0x00043989) cell_vitu_function_pane

0xb06d,	// (0x00047907) bg_popup_sub_pane_cp08_ParamLimits

0xb06d,	// (0x00047907) bg_popup_sub_pane_cp08

0x7103,	// (0x0004399d) field_vitu_entry_pane_t1_ParamLimits

0x7103,	// (0x0004399d) field_vitu_entry_pane_t1

0xd5cb,	// (0x00049e65) field_vitu_entry_pane_t2_ParamLimits

0xd5cb,	// (0x00049e65) field_vitu_entry_pane_t2

0x0001,

0xf826,	// (0x0004c0c0) field_vitu_entry_pane_t_ParamLimits

0xf826,	// (0x0004c0c0) field_vitu_entry_pane_t

0xd5e8,	// (0x00049e82) bg_button_pane_cp05_ParamLimits

0xd5e8,	// (0x00049e82) bg_button_pane_cp05

0x7120,	// (0x000439ba) cell_vitu_itu_pane_g1

0x7138,	// (0x000439d2) cell_vitu_itu_pane_t1_ParamLimits

0x7138,	// (0x000439d2) cell_vitu_itu_pane_t1

0x714a,	// (0x000439e4) cell_vitu_itu_pane_t2_ParamLimits

0x714a,	// (0x000439e4) cell_vitu_itu_pane_t2

0x0002,

0xf82b,	// (0x0004c0c5) cell_vitu_itu_pane_t_ParamLimits

0xf82b,	// (0x0004c0c5) cell_vitu_itu_pane_t

0xd5f6,	// (0x00049e90) bg_button_pane_cp07

0x718d,	// (0x00043a27) cell_vitu_function_pane_g1

0x2abc,	// (0x0003f356) main_calc_pane_g1

0x25c6,	// (0x0003ee60) aid_visual_content_pane

0xa564,	// (0x00046dfe) main_vradio_pane

0x7196,	// (0x00043a30) main_vradio_pane_g1_ParamLimits

0x7196,	// (0x00043a30) main_vradio_pane_g1

0xd600,	// (0x00049e9a) main_vradio_pane_g2_ParamLimits

0xd600,	// (0x00049e9a) main_vradio_pane_g2

0x0001,

0xf832,	// (0x0004c0cc) main_vradio_pane_g_ParamLimits

0xf832,	// (0x0004c0cc) main_vradio_pane_g

0x71a6,	// (0x00043a40) main_vradio_pane_t1_ParamLimits

0x71a6,	// (0x00043a40) main_vradio_pane_t1

0x71b8,	// (0x00043a52) main_vradio_pane_t2_ParamLimits

0x71b8,	// (0x00043a52) main_vradio_pane_t2

0xd60d,	// (0x00049ea7) main_vradio_pane_t3_ParamLimits

0xd60d,	// (0x00049ea7) main_vradio_pane_t3

0x0002,

0xf837,	// (0x0004c0d1) main_vradio_pane_t_ParamLimits

0xf837,	// (0x0004c0d1) main_vradio_pane_t

0x71ca,	// (0x00043a64) vradio_rocker_control_pane_ParamLimits

0x71ca,	// (0x00043a64) vradio_rocker_control_pane

0x71d6,	// (0x00043a70) vradio_station_info_pane_ParamLimits

0x71d6,	// (0x00043a70) vradio_station_info_pane

0xd621,	// (0x00049ebb) vradio_frequency_info_pane_ParamLimits

0xd621,	// (0x00049ebb) vradio_frequency_info_pane

0xcfda,	// (0x00049874) vradio_station_info_pane_g1

0xd630,	// (0x00049eca) vradio_station_info_pane_t1_ParamLimits

0xd630,	// (0x00049eca) vradio_station_info_pane_t1

0xd652,	// (0x00049eec) vradio_station_info_pane_t2_ParamLimits

0xd652,	// (0x00049eec) vradio_station_info_pane_t2

0x0001,

0xf83e,	// (0x0004c0d8) vradio_station_info_pane_t_ParamLimits

0xf83e,	// (0x0004c0d8) vradio_station_info_pane_t

0xd664,	// (0x00049efe) vradio_tuning_pane

0xd66c,	// (0x00049f06) vradio_rocker_control_pane_g1

0xd674,	// (0x00049f0e) vradio_rocker_control_pane_g2

0xd67c,	// (0x00049f16) vradio_rocker_control_pane_g3

0xd684,	// (0x00049f1e) vradio_rocker_control_pane_g4

0xd68c,	// (0x00049f26) vradio_rocker_control_pane_g5

0x0004,

0xf843,	// (0x0004c0dd) vradio_rocker_control_pane_g

0x71e5,	// (0x00043a7f) vradio_frequency_info_pane_g1

0xd694,	// (0x00049f2e) vradio_frequency_info_pane_t1_ParamLimits

0xd694,	// (0x00049f2e) vradio_frequency_info_pane_t1

0x71ef,	// (0x00043a89) vradio_tuning_pane_g1

0x71f8,	// (0x00043a92) vradio_tuning_pane_t1

0x260f,	// (0x0003eea9) area_side_right_pane_ParamLimits

0x260f,	// (0x0003eea9) area_side_right_pane

0xcb8b,	// (0x00049425) status_small_pane_g1

0xcb93,	// (0x0004942d) status_small_pane_g2

0xcb9c,	// (0x00049436) status_small_pane_g3

0xcba5,	// (0x0004943f) status_small_pane_g4

0x0003,

0xf603,	// (0x0004be9d) status_small_pane_g

0xcbae,	// (0x00049448) status_small_pane_t1

0xa564,	// (0x00046dfe) main_video3_pane

0xd6a8,	// (0x00049f42) cams_zoom_vslider_pane

0xd6b0,	// (0x00049f4a) image3_wide_pane_ParamLimits

0xd6b0,	// (0x00049f4a) image3_wide_pane

0xd6d6,	// (0x00049f70) image3_wide_small_pane

0xd6e2,	// (0x00049f7c) main_video3_pane_g1_ParamLimits

0xd6e2,	// (0x00049f7c) main_video3_pane_g1

0xd6fe,	// (0x00049f98) main_video3_pane_g2_ParamLimits

0xd6fe,	// (0x00049f98) main_video3_pane_g2

0x0001,

0xf84e,	// (0x0004c0e8) main_video3_pane_g_ParamLimits

0xf84e,	// (0x0004c0e8) main_video3_pane_g

0xd71a,	// (0x00049fb4) main_video3_pane_t1_ParamLimits

0xd71a,	// (0x00049fb4) main_video3_pane_t1

0xd745,	// (0x00049fdf) main_video3_pane_t2_ParamLimits

0xd745,	// (0x00049fdf) main_video3_pane_t2

0xd770,	// (0x0004a00a) main_video3_pane_t3_ParamLimits

0xd770,	// (0x0004a00a) main_video3_pane_t3

0x0002,

0xf853,	// (0x0004c0ed) main_video3_pane_t_ParamLimits

0xf853,	// (0x0004c0ed) main_video3_pane_t

0xd79d,	// (0x0004a037) cams_zoom_vslider_pane_g1

0xd7a6,	// (0x0004a040) cams_zoom_vslider_pane_g2

0x0001,

0xf85a,	// (0x0004c0f4) cams_zoom_vslider_pane_g

0xd7ae,	// (0x0004a048) small_slider_vertical_pane

0xcfda,	// (0x00049874) small_slider_vertical_pane_g1

0xcfda,	// (0x00049874) small_slider_vertical_pane_g2

0xd7b6,	// (0x0004a050) small_slider_vertical_pane_g3

0x0002,

0xf85f,	// (0x0004c0f9) small_slider_vertical_pane_g

0xa564,	// (0x00046dfe) main_hwr_training_pane

0xd7bf,	// (0x0004a059) hwr_training_instruct_pane_ParamLimits

0xd7bf,	// (0x0004a059) hwr_training_instruct_pane

0x7207,	// (0x00043aa1) hwr_training_navi_pane_ParamLimits

0x7207,	// (0x00043aa1) hwr_training_navi_pane

0x7221,	// (0x00043abb) hwr_training_write_pane_ParamLimits

0x7221,	// (0x00043abb) hwr_training_write_pane

0xa564,	// (0x00046dfe) bg_frame_shadow_pane

0xd7f6,	// (0x0004a090) hwr_training_write_pane_g1

0xd7fe,	// (0x0004a098) hwr_training_write_pane_g2

0xd806,	// (0x0004a0a0) hwr_training_write_pane_g3

0xd80e,	// (0x0004a0a8) hwr_training_write_pane_g4

0xd816,	// (0x0004a0b0) hwr_training_write_pane_g5

0xd81e,	// (0x0004a0b8) hwr_training_write_pane_g6

0xd826,	// (0x0004a0c0) hwr_training_write_pane_g7

0x0006,

0xf866,	// (0x0004c100) hwr_training_write_pane_g

0x7259,	// (0x00043af3) hwr_training_navi_pane_g1_ParamLimits

0x7259,	// (0x00043af3) hwr_training_navi_pane_g1

0x726b,	// (0x00043b05) hwr_training_navi_pane_g2_ParamLimits

0x726b,	// (0x00043b05) hwr_training_navi_pane_g2

0x727d,	// (0x00043b17) hwr_training_navi_pane_g3_ParamLimits

0x727d,	// (0x00043b17) hwr_training_navi_pane_g3

0x728d,	// (0x00043b27) hwr_training_navi_pane_g4_ParamLimits

0x728d,	// (0x00043b27) hwr_training_navi_pane_g4

0x0004,

0xf875,	// (0x0004c10f) hwr_training_navi_pane_g_ParamLimits

0xf875,	// (0x0004c10f) hwr_training_navi_pane_g

0x72a7,	// (0x00043b41) hwr_training_navi_pane_t1

0x72b5,	// (0x00043b4f) list_single_hwr_training_instruct_pane_ParamLimits

0x72b5,	// (0x00043b4f) list_single_hwr_training_instruct_pane

0xd82e,	// (0x0004a0c8) list_single_hwr_training_instruct_pane_t1

0xcf1a,	// (0x000497b4) bg_frame_shadow_pane_g1

0xd83d,	// (0x0004a0d7) bg_frame_shadow_pane_g2

0xd845,	// (0x0004a0df) bg_frame_shadow_pane_g3

0xd84d,	// (0x0004a0e7) bg_frame_shadow_pane_g4

0xd855,	// (0x0004a0ef) bg_frame_shadow_pane_g5

0xd85d,	// (0x0004a0f7) bg_frame_shadow_pane_g6

0xd865,	// (0x0004a0ff) bg_frame_shadow_pane_g7

0xadb6,	// (0x00047650) bg_frame_shadow_pane_g8

0x0007,

0xf880,	// (0x0004c11a) bg_frame_shadow_pane_g

0xa564,	// (0x00046dfe) main_video_tele_dialer_pane

0x72e4,	// (0x00043b7e) aid_size_cell_video_keypad_ParamLimits

0x72e4,	// (0x00043b7e) aid_size_cell_video_keypad

0x72f4,	// (0x00043b8e) grid_video_dialer_keypad_pane_ParamLimits

0x72f4,	// (0x00043b8e) grid_video_dialer_keypad_pane

0x7328,	// (0x00043bc2) video_down_pane_cp_ParamLimits

0x7328,	// (0x00043bc2) video_down_pane_cp

0x7352,	// (0x00043bec) cell_video_dialer_keypad_pane_ParamLimits

0x7352,	// (0x00043bec) cell_video_dialer_keypad_pane

0xd86d,	// (0x0004a107) bg_button_pane_cp08_ParamLimits

0xd86d,	// (0x0004a107) bg_button_pane_cp08

0x7367,	// (0x00043c01) cell_video_dialer_keypad_pane_g1_ParamLimits

0x7367,	// (0x00043c01) cell_video_dialer_keypad_pane_g1

0x6b25,	// (0x000433bf) mup3_rocker2_pane_ParamLimits

0x6b25,	// (0x000433bf) mup3_rocker2_pane

0xcfda,	// (0x00049874) mup3_rocker2_pane_g1

0x5a43,	// (0x000422dd) main_dialer2_pane

0xa564,	// (0x00046dfe) main_mp4_pane

0x73aa,	// (0x00043c44) main_mp4_pane_g1_ParamLimits

0x73aa,	// (0x00043c44) main_mp4_pane_g1

0x73b8,	// (0x00043c52) main_mp4_pane_g2_ParamLimits

0x73b8,	// (0x00043c52) main_mp4_pane_g2

0x73c6,	// (0x00043c60) main_mp4_pane_g3_ParamLimits

0x73c6,	// (0x00043c60) main_mp4_pane_g3

0x740b,	// (0x00043ca5) main_mp4_pane_g4_ParamLimits

0x740b,	// (0x00043ca5) main_mp4_pane_g4

0x7433,	// (0x00043ccd) main_mp4_pane_g5_ParamLimits

0x7433,	// (0x00043ccd) main_mp4_pane_g5

0x0005,

0xf8a0,	// (0x0004c13a) main_mp4_pane_g_ParamLimits

0xf8a0,	// (0x0004c13a) main_mp4_pane_g

0x7483,	// (0x00043d1d) main_mp4_pane_t1_ParamLimits

0x7483,	// (0x00043d1d) main_mp4_pane_t1

0x74df,	// (0x00043d79) main_mp4_pane_t2_ParamLimits

0x74df,	// (0x00043d79) main_mp4_pane_t2

0xd879,	// (0x0004a113) main_mp4_pane_t3_ParamLimits

0xd879,	// (0x0004a113) main_mp4_pane_t3

0x7531,	// (0x00043dcb) main_mp4_pane_t4_ParamLimits

0x7531,	// (0x00043dcb) main_mp4_pane_t4

0x0003,

0xf8ad,	// (0x0004c147) main_mp4_pane_t_ParamLimits

0xf8ad,	// (0x0004c147) main_mp4_pane_t

0x7575,	// (0x00043e0f) mp4_progress_pane_ParamLimits

0x7575,	// (0x00043e0f) mp4_progress_pane

0x75bf,	// (0x00043e59) mp4_rocker_pane_ParamLimits

0x75bf,	// (0x00043e59) mp4_rocker_pane

0xd8a1,	// (0x0004a13b) mp4_progress_pane_t1

0xd8ba,	// (0x0004a154) mp4_progress_pane_t2

0x0001,

0xf8b6,	// (0x0004c150) mp4_progress_pane_t

0xd8d3,	// (0x0004a16d) mup_progress_pane_cp04

0xcfda,	// (0x00049874) mp4_rocker_pane_g1

0x75df,	// (0x00043e79) aid_cell_size_keypad2_ParamLimits

0x75df,	// (0x00043e79) aid_cell_size_keypad2

0x75ef,	// (0x00043e89) dialer2_ne_pane_ParamLimits

0x75ef,	// (0x00043e89) dialer2_ne_pane

0x75fd,	// (0x00043e97) grid_dialer2_keypad_pane_ParamLimits

0x75fd,	// (0x00043e97) grid_dialer2_keypad_pane

0xdadc,	// (0x0004a376) bg_popup_call_pane_cp07_ParamLimits

0xdadc,	// (0x0004a376) bg_popup_call_pane_cp07

0x760d,	// (0x00043ea7) dialer2_ne_pane_t1_ParamLimits

0x760d,	// (0x00043ea7) dialer2_ne_pane_t1

0x7632,	// (0x00043ecc) cell_dialer2_keypad_pane_ParamLimits

0x7632,	// (0x00043ecc) cell_dialer2_keypad_pane

0xd8f1,	// (0x0004a18b) bg_button_pane_pane_cp04_ParamLimits

0xd8f1,	// (0x0004a18b) bg_button_pane_pane_cp04

0x7647,	// (0x00043ee1) cell_dialer2_keypad_pane_g1_ParamLimits

0x7647,	// (0x00043ee1) cell_dialer2_keypad_pane_g1

0x3638,	// (0x0003fed2) aid_placing_vt_set_content_ParamLimits

0x3638,	// (0x0003fed2) aid_placing_vt_set_content

0x3664,	// (0x0003fefe) aid_placing_vt_set_title_ParamLimits

0x3664,	// (0x0003fefe) aid_placing_vt_set_title

0xa564,	// (0x00046dfe) main_image3_pane

0x76e1,	// (0x00043f7b) area_side_right_pane_cp01_ParamLimits

0x76e1,	// (0x00043f7b) area_side_right_pane_cp01

0xab52,	// (0x000473ec) main_image3_pane_g1_ParamLimits

0xab52,	// (0x000473ec) main_image3_pane_g1

0x770e,	// (0x00043fa8) main_image3_pane_g2_ParamLimits

0x770e,	// (0x00043fa8) main_image3_pane_g2

0x7727,	// (0x00043fc1) main_image3_pane_g3_ParamLimits

0x7727,	// (0x00043fc1) main_image3_pane_g3

0x7740,	// (0x00043fda) main_image3_pane_g4_ParamLimits

0x7740,	// (0x00043fda) main_image3_pane_g4

0x0003,

0xf8c5,	// (0x0004c15f) main_image3_pane_g_ParamLimits

0xf8c5,	// (0x0004c15f) main_image3_pane_g

0x7759,	// (0x00043ff3) main_image3_pane_t1_ParamLimits

0x7759,	// (0x00043ff3) main_image3_pane_t1

0x777e,	// (0x00044018) main_image3_pane_t2_ParamLimits

0x777e,	// (0x00044018) main_image3_pane_t2

0x779d,	// (0x00044037) main_image3_pane_t3_ParamLimits

0x779d,	// (0x00044037) main_image3_pane_t3

0x0003,

0xf8ce,	// (0x0004c168) main_image3_pane_t_ParamLimits

0xf8ce,	// (0x0004c168) main_image3_pane_t

0xdace,	// (0x0004a368) grid_sctrl_middle_pane_cp01_ParamLimits

0xdace,	// (0x0004a368) grid_sctrl_middle_pane_cp01

0x77fe,	// (0x00044098) cell_sctrl_middle_pane_cp01_ParamLimits

0x77fe,	// (0x00044098) cell_sctrl_middle_pane_cp01

0x780f,	// (0x000440a9) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x780f,	// (0x000440a9) cell_sctrl_middle_pane_cp01_g1

0xa564,	// (0x00046dfe) main_call4_pane

0x781c,	// (0x000440b6) aid_size_button_call4_ParamLimits

0x781c,	// (0x000440b6) aid_size_button_call4

0x784c,	// (0x000440e6) call4_windows_pane_ParamLimits

0x784c,	// (0x000440e6) call4_windows_pane

0x7866,	// (0x00044100) grid_call4_button_pane_ParamLimits

0x7866,	// (0x00044100) grid_call4_button_pane

0xd8fd,	// (0x0004a197) call4_windows_conf_pane

0xd912,	// (0x0004a1ac) popup_call4_audio_first_window_ParamLimits

0xd912,	// (0x0004a1ac) popup_call4_audio_first_window

0xd95e,	// (0x0004a1f8) popup_call4_audio_second_window_ParamLimits

0xd95e,	// (0x0004a1f8) popup_call4_audio_second_window

0xd972,	// (0x0004a20c) popup_call4_audio_wait_window_ParamLimits

0xd972,	// (0x0004a20c) popup_call4_audio_wait_window

0x788a,	// (0x00044124) cell_call4_button_pane_ParamLimits

0x788a,	// (0x00044124) cell_call4_button_pane

0x78af,	// (0x00044149) bg_button_pane_cp09_ParamLimits

0x78af,	// (0x00044149) bg_button_pane_cp09

0x78bb,	// (0x00044155) cell_call4_button_pane_g1_ParamLimits

0x78bb,	// (0x00044155) cell_call4_button_pane_g1

0x78c8,	// (0x00044162) cell_call4_button_pane_t1_ParamLimits

0x78c8,	// (0x00044162) cell_call4_button_pane_t1

0xd9ba,	// (0x0004a254) popup_call4_audio_conf_window_ParamLimits

0xd9ba,	// (0x0004a254) popup_call4_audio_conf_window

0x6b58,	// (0x000433f2) mup3_progress_pane_t1_ParamLimits

0x6b77,	// (0x00043411) mup3_progress_pane_t2_ParamLimits

0xd2b5,	// (0x00049b4f) mup3_progress_pane_t3_ParamLimits

0xf7a7,	// (0x0004c041) mup3_progress_pane_t_ParamLimits

0xd2d2,	// (0x00049b6c) mup_progress_pane_cp03_ParamLimits

0x7095,	// (0x0004392f) mup3_control_keys_pane_g4_copy1

0x75a3,	// (0x00043e3d) mp4_rocker2_pane_ParamLimits

0x75a3,	// (0x00043e3d) mp4_rocker2_pane

0xd9ce,	// (0x0004a268) mp4_rocker2_pane_g1

0xd9d6,	// (0x0004a270) mp4_rocker2_pane_g2

0x78da,	// (0x00044174) mp4_rocker2_pane_g3

0x78e2,	// (0x0004417c) mp4_rocker2_pane_g4

0x78ea,	// (0x00044184) mp4_rocker2_pane_g5

0x0004,

0xf8d7,	// (0x0004c171) mp4_rocker2_pane_g

0xa564,	// (0x00046dfe) main_camera4_pane

0xa564,	// (0x00046dfe) main_video4_pane

0x7304,	// (0x00043b9e) main_video_tele_dialer_pane_t1_ParamLimits

0x7304,	// (0x00043b9e) main_video_tele_dialer_pane_t1

0x7316,	// (0x00043bb0) main_video_tele_dialer_pane_t2_ParamLimits

0x7316,	// (0x00043bb0) main_video_tele_dialer_pane_t2

0x0001,

0xf891,	// (0x0004c12b) main_video_tele_dialer_pane_t_ParamLimits

0xf891,	// (0x0004c12b) main_video_tele_dialer_pane_t

0x790a,	// (0x000441a4) cam4_autofocus_pane_ParamLimits

0x790a,	// (0x000441a4) cam4_autofocus_pane

0x7924,	// (0x000441be) cam4_image_uncrop_pane_ParamLimits

0x7924,	// (0x000441be) cam4_image_uncrop_pane

0x793b,	// (0x000441d5) cam4_indicators_pane_ParamLimits

0x793b,	// (0x000441d5) cam4_indicators_pane

0x7957,	// (0x000441f1) main_camera4_pane_g1_ParamLimits

0x7957,	// (0x000441f1) main_camera4_pane_g1

0x7963,	// (0x000441fd) main_camera4_pane_g2_ParamLimits

0x7963,	// (0x000441fd) main_camera4_pane_g2

0x7963,	// (0x000441fd) main_camera4_pane_g3_ParamLimits

0x7963,	// (0x000441fd) main_camera4_pane_g3

0x796f,	// (0x00044209) main_camera4_pane_g4_ParamLimits

0x796f,	// (0x00044209) main_camera4_pane_g4

0x797b,	// (0x00044215) main_camera4_pane_g5_ParamLimits

0x797b,	// (0x00044215) main_camera4_pane_g5

0x0005,

0xf8e2,	// (0x0004c17c) main_camera4_pane_g_ParamLimits

0xf8e2,	// (0x0004c17c) main_camera4_pane_g

0x7995,	// (0x0004422f) main_camera4_pane_t1_ParamLimits

0x7995,	// (0x0004422f) main_camera4_pane_t1

0xd23a,	// (0x00049ad4) bg_tb_trans_pane_cp06

0x79e5,	// (0x0004427f) cam4_indicators_pane_g1

0x79f6,	// (0x00044290) cam4_indicators_pane_g2

0x0002,

0xf8fd,	// (0x0004c197) cam4_indicators_pane_g

0x7a14,	// (0x000442ae) cam4_indicators_pane_t1

0x7a3e,	// (0x000442d8) main_video4_pane_g1_ParamLimits

0x7a3e,	// (0x000442d8) main_video4_pane_g1

0x7a4a,	// (0x000442e4) main_video4_pane_g2_ParamLimits

0x7a4a,	// (0x000442e4) main_video4_pane_g2

0x7a56,	// (0x000442f0) main_video4_pane_g3_ParamLimits

0x7a56,	// (0x000442f0) main_video4_pane_g3

0x7a62,	// (0x000442fc) main_video4_pane_g4_ParamLimits

0x7a62,	// (0x000442fc) main_video4_pane_g4

0x0004,

0xf904,	// (0x0004c19e) main_video4_pane_g_ParamLimits

0xf904,	// (0x0004c19e) main_video4_pane_g

0x7a82,	// (0x0004431c) vid4_indicators_pane_ParamLimits

0x7a82,	// (0x0004431c) vid4_indicators_pane

0x7aa1,	// (0x0004433b) video4_image_uncrop_cif_pane_ParamLimits

0x7aa1,	// (0x0004433b) video4_image_uncrop_cif_pane

0x7ab0,	// (0x0004434a) video4_image_uncrop_nhd_pane_ParamLimits

0x7ab0,	// (0x0004434a) video4_image_uncrop_nhd_pane

0x7924,	// (0x000441be) video4_image_uncrop_vga_pane_ParamLimits

0x7924,	// (0x000441be) video4_image_uncrop_vga_pane

0xb06d,	// (0x00047907) bg_tb_trans_pane_cp07

0x7ac5,	// (0x0004435f) vid4_indicators_pane_g1

0x7ad9,	// (0x00044373) vid4_indicators_pane_g2

0x7aed,	// (0x00044387) vid4_indicators_pane_g3

0x0004,

0xf90f,	// (0x0004c1a9) vid4_indicators_pane_g

0x7b1a,	// (0x000443b4) vid4_indicators_pane_t1

0x7b31,	// (0x000443cb) cam4_autofocus_pane_g1

0x7b39,	// (0x000443d3) cam4_autofocus_pane_g2

0x7b41,	// (0x000443db) cam4_autofocus_pane_g3

0x0002,

0xf91a,	// (0x0004c1b4) cam4_autofocus_pane_g

0x7b49,	// (0x000443e3) cam4_autofocus_pane_g3_copy1

0x7336,	// (0x00043bd0) video_down_pane_cp_t1

0x7344,	// (0x00043bde) video_down_pane_cp_t2

0x0001,

0xf896,	// (0x0004c130) video_down_pane_cp_t

0xdace,	// (0x0004a368) popup_vitu2_window_ParamLimits

0xdace,	// (0x0004a368) popup_vitu2_window

0x7b51,	// (0x000443eb) aid_size_cell2_itu2_ParamLimits

0x7b51,	// (0x000443eb) aid_size_cell2_itu2

0x7b73,	// (0x0004440d) aid_size_cell_itu2_ParamLimits

0x7b73,	// (0x0004440d) aid_size_cell_itu2

0xdadc,	// (0x0004a376) bg_popup_window_pane_cp09_ParamLimits

0xdadc,	// (0x0004a376) bg_popup_window_pane_cp09

0x7bb7,	// (0x00044451) field_vitu2_entry_pane_ParamLimits

0x7bb7,	// (0x00044451) field_vitu2_entry_pane

0x7bd7,	// (0x00044471) grid_vitu2_function_pane_ParamLimits

0x7bd7,	// (0x00044471) grid_vitu2_function_pane

0x7c1b,	// (0x000444b5) grid_vitu2_itu_pane_ParamLimits

0x7c1b,	// (0x000444b5) grid_vitu2_itu_pane

0x7c91,	// (0x0004452b) cell_vitu2_itu_pane_ParamLimits

0x7c91,	// (0x0004452b) cell_vitu2_itu_pane

0x7ca6,	// (0x00044540) cell_vitu2_function_pane_ParamLimits

0x7ca6,	// (0x00044540) cell_vitu2_function_pane

0xd9de,	// (0x0004a278) bg_popup_call_pane_cp08_ParamLimits

0xd9de,	// (0x0004a278) bg_popup_call_pane_cp08

0xd9f7,	// (0x0004a291) field_vitu2_entry_pane_g1

0xda03,	// (0x0004a29d) field_vitu2_entry_pane_g2

0x0002,

0xf921,	// (0x0004c1bb) field_vitu2_entry_pane_g

0x15fd,	// (0x0003de97) field_vitu2_entry_pane_t1_ParamLimits

0x15fd,	// (0x0003de97) field_vitu2_entry_pane_t1

0x162f,	// (0x0003dec9) field_vitu2_entry_pane_t2_ParamLimits

0x162f,	// (0x0003dec9) field_vitu2_entry_pane_t2

0x0001,

0xf928,	// (0x0004c1c2) field_vitu2_entry_pane_t_ParamLimits

0xf928,	// (0x0004c1c2) field_vitu2_entry_pane_t

0x7ce7,	// (0x00044581) bg_button_pane_cp010_ParamLimits

0x7ce7,	// (0x00044581) bg_button_pane_cp010

0x7cf5,	// (0x0004458f) cell_vitu2_itu_pane_g1

0x7d13,	// (0x000445ad) cell_vitu2_itu_pane_t1_ParamLimits

0x7d13,	// (0x000445ad) cell_vitu2_itu_pane_t1

0x164c,	// (0x0003dee6) cell_vitu2_itu_pane_t2_ParamLimits

0x164c,	// (0x0003dee6) cell_vitu2_itu_pane_t2

0x0002,

0xf932,	// (0x0004c1cc) cell_vitu2_itu_pane_t_ParamLimits

0xf932,	// (0x0004c1cc) cell_vitu2_itu_pane_t

0xb06d,	// (0x00047907) bg_button_pane_cp011

0x7d65,	// (0x000445ff) cell_vitu2_function_pane_g1

0xa564,	// (0x00046dfe) main_myfav_hc_pane

0x77df,	// (0x00044079) popup_image3_note_pane_ParamLimits

0x77df,	// (0x00044079) popup_image3_note_pane

0x77ed,	// (0x00044087) popup_image3_tool_bar_pane_ParamLimits

0x77ed,	// (0x00044087) popup_image3_tool_bar_pane

0x16ba,	// (0x0003df54) cell_vitu2_itu_pane_t3_ParamLimits

0x16ba,	// (0x0003df54) cell_vitu2_itu_pane_t3

0xa564,	// (0x00046dfe) bg_popup_trans_pane

0xda25,	// (0x0004a2bf) grid_image3_tool_bar_pane

0xda2f,	// (0x0004a2c9) bg_popup_trans_pane_g1

0xb123,	// (0x000479bd) bg_popup_trans_pane_g2

0xda37,	// (0x0004a2d1) bg_popup_trans_pane_g3

0xda3f,	// (0x0004a2d9) bg_popup_trans_pane_g4

0xda47,	// (0x0004a2e1) bg_popup_trans_pane_g5

0xda4f,	// (0x0004a2e9) bg_popup_trans_pane_g6

0xda57,	// (0x0004a2f1) bg_popup_trans_pane_g7

0xda5f,	// (0x0004a2f9) bg_popup_trans_pane_g8

0xb103,	// (0x0004799d) bg_popup_trans_pane_g9

0x0008,

0xf939,	// (0x0004c1d3) bg_popup_trans_pane_g

0xda67,	// (0x0004a301) cell_image3_tool_bar_pane_ParamLimits

0xda67,	// (0x0004a301) cell_image3_tool_bar_pane

0xcfda,	// (0x00049874) cell_image3_tool_bar_pane_g1

0xa564,	// (0x00046dfe) bg_popup_trans_pane_cp1

0xda7b,	// (0x0004a315) popup_image3_note_pane_t1

0xda89,	// (0x0004a323) popup_image3_note_pane_t2

0xda97,	// (0x0004a331) popup_image3_note_pane_t3

0x0002,

0xf94c,	// (0x0004c1e6) popup_image3_note_pane_t

0xdaa5,	// (0x0004a33f) popup_image3_note_pane_t3_copy1

0x7d79,	// (0x00044613) bg_myfav_hc_instruction_pane_ParamLimits

0x7d79,	// (0x00044613) bg_myfav_hc_instruction_pane

0x7d91,	// (0x0004462b) cell_myfav_contact_pane_ParamLimits

0x7d91,	// (0x0004462b) cell_myfav_contact_pane

0x7dab,	// (0x00044645) cell_myfav_contact_pane_cp1_ParamLimits

0x7dab,	// (0x00044645) cell_myfav_contact_pane_cp1

0x7dc3,	// (0x0004465d) cell_myfav_contact_pane_cp2_ParamLimits

0x7dc3,	// (0x0004465d) cell_myfav_contact_pane_cp2

0x7ddb,	// (0x00044675) cell_myfav_contact_pane_cp3_ParamLimits

0x7ddb,	// (0x00044675) cell_myfav_contact_pane_cp3

0x7df2,	// (0x0004468c) cell_myfav_contact_pane_cp4_ParamLimits

0x7df2,	// (0x0004468c) cell_myfav_contact_pane_cp4

0x7e08,	// (0x000446a2) cell_myfav_contact_pane_cp5_ParamLimits

0x7e08,	// (0x000446a2) cell_myfav_contact_pane_cp5

0x7e1c,	// (0x000446b6) cell_myfav_contact_pane_cp6_ParamLimits

0x7e1c,	// (0x000446b6) cell_myfav_contact_pane_cp6

0x7e30,	// (0x000446ca) cell_myfav_contact_pane_cp7_ParamLimits

0x7e30,	// (0x000446ca) cell_myfav_contact_pane_cp7

0xdab3,	// (0x0004a34d) listscroll_gen_pane_cp05

0x7e48,	// (0x000446e2) main_myfav_hc_pane_g1_ParamLimits

0x7e48,	// (0x000446e2) main_myfav_hc_pane_g1

0x7e60,	// (0x000446fa) main_myfav_hc_pane_g2_ParamLimits

0x7e60,	// (0x000446fa) main_myfav_hc_pane_g2

0x0002,

0xf953,	// (0x0004c1ed) main_myfav_hc_pane_g_ParamLimits

0xf953,	// (0x0004c1ed) main_myfav_hc_pane_g

0x7e90,	// (0x0004472a) main_myfav_hc_pane_t1_ParamLimits

0x7e90,	// (0x0004472a) main_myfav_hc_pane_t1

0xdabc,	// (0x0004a356) main_myfav_hc_pane_t2_ParamLimits

0xdabc,	// (0x0004a356) main_myfav_hc_pane_t2

0xdaea,	// (0x0004a384) main_myfav_hc_pane_t3_ParamLimits

0xdaea,	// (0x0004a384) main_myfav_hc_pane_t3

0x7ea7,	// (0x00044741) main_myfav_hc_pane_t4_ParamLimits

0x7ea7,	// (0x00044741) main_myfav_hc_pane_t4

0x0004,

0xf95a,	// (0x0004c1f4) main_myfav_hc_pane_t_ParamLimits

0xf95a,	// (0x0004c1f4) main_myfav_hc_pane_t

0xcfda,	// (0x00049874) bg_myfav_hc_instruction_pane_g1

0xdafc,	// (0x0004a396) cell_myfav_contact_pane_g1_ParamLimits

0xdafc,	// (0x0004a396) cell_myfav_contact_pane_g1

0xdafc,	// (0x0004a396) cell_myfav_contact_pane_g2_ParamLimits

0xdafc,	// (0x0004a396) cell_myfav_contact_pane_g2

0xdb08,	// (0x0004a3a2) cell_myfav_contact_pane_g3_ParamLimits

0xdb08,	// (0x0004a3a2) cell_myfav_contact_pane_g3

0xd29f,	// (0x00049b39) cell_myfav_contact_pane_g4_ParamLimits

0xd29f,	// (0x00049b39) cell_myfav_contact_pane_g4

0xdb15,	// (0x0004a3af) cell_myfav_contact_pane_g5_ParamLimits

0xdb15,	// (0x0004a3af) cell_myfav_contact_pane_g5

0x0004,

0xf965,	// (0x0004c1ff) cell_myfav_contact_pane_g_ParamLimits

0xf965,	// (0x0004c1ff) cell_myfav_contact_pane_g

0x7e78,	// (0x00044712) main_myfav_hc_pane_g3_ParamLimits

0x7e78,	// (0x00044712) main_myfav_hc_pane_g3

0x2744,	// (0x0003efde) popup_adpt_find_window

0x7ed1,	// (0x0004476b) afind_page_pane_ParamLimits

0x7ed1,	// (0x0004476b) afind_page_pane

0x7ede,	// (0x00044778) aid_size_cell_afind_ParamLimits

0x7ede,	// (0x00044778) aid_size_cell_afind

0x7ef8,	// (0x00044792) bg_popup_sub_pane_cp09_ParamLimits

0x7ef8,	// (0x00044792) bg_popup_sub_pane_cp09

0x7f05,	// (0x0004479f) find_pane_cp01_ParamLimits

0x7f05,	// (0x0004479f) find_pane_cp01

0xdb21,	// (0x0004a3bb) grid_afind_control_pane_ParamLimits

0xdb21,	// (0x0004a3bb) grid_afind_control_pane

0x7f12,	// (0x000447ac) grid_afind_pane_ParamLimits

0x7f12,	// (0x000447ac) grid_afind_pane

0x7f2c,	// (0x000447c6) cell_afind_pane_ParamLimits

0x7f2c,	// (0x000447c6) cell_afind_pane

0xcfda,	// (0x00049874) afind_page_pane_g1

0x7f74,	// (0x0004480e) afind_page_pane_g2

0x7f7d,	// (0x00044817) afind_page_pane_g3

0x0002,

0xf970,	// (0x0004c20a) afind_page_pane_g

0x7f86,	// (0x00044820) afind_page_pane_t1

0xdb35,	// (0x0004a3cf) cell_afind_grid_control_pane_ParamLimits

0xdb35,	// (0x0004a3cf) cell_afind_grid_control_pane

0xd8f1,	// (0x0004a18b) bg_button_pane_cp69_ParamLimits

0xd8f1,	// (0x0004a18b) bg_button_pane_cp69

0x7fa6,	// (0x00044840) cell_afind_pane_g1_ParamLimits

0x7fa6,	// (0x00044840) cell_afind_pane_g1

0x7fb3,	// (0x0004484d) cell_afind_pane_t1_ParamLimits

0x7fb3,	// (0x0004484d) cell_afind_pane_t1

0xaf0e,	// (0x000477a8) bg_button_pane_cp72

0xdb44,	// (0x0004a3de) cell_afind_grid_control_pane_g1

0x55bd,	// (0x00041e57) aid_image_placing_area_ParamLimits

0x55bd,	// (0x00041e57) aid_image_placing_area

0xd5b3,	// (0x00049e4d) field_vitu_entry_pane_g1_ParamLimits

0xd5b3,	// (0x00049e4d) field_vitu_entry_pane_g1

0xd5bf,	// (0x00049e59) field_vitu_entry_pane_g2_ParamLimits

0xd5bf,	// (0x00049e59) field_vitu_entry_pane_g2

0x0001,

0xf821,	// (0x0004c0bb) field_vitu_entry_pane_g_ParamLimits

0xf821,	// (0x0004c0bb) field_vitu_entry_pane_g

0x7120,	// (0x000439ba) cell_vitu_itu_pane_g1_ParamLimits

0x7170,	// (0x00043a0a) cell_vitu_itu_pane_t3_ParamLimits

0x7170,	// (0x00043a0a) cell_vitu_itu_pane_t3

0xd8a1,	// (0x0004a13b) mp4_progress_pane_t1_ParamLimits

0xd8ba,	// (0x0004a154) mp4_progress_pane_t2_ParamLimits

0xf8b6,	// (0x0004c150) mp4_progress_pane_t_ParamLimits

0xd8d3,	// (0x0004a16d) mup_progress_pane_cp04_ParamLimits

0x7ebb,	// (0x00044755) main_myfav_hc_pane_t5_ParamLimits

0x7ebb,	// (0x00044755) main_myfav_hc_pane_t5

0x25d2,	// (0x0003ee6c) aid_zoom_text_primary

0x2744,	// (0x0003efde) popup_adpt_find_window_ParamLimits

0xb06d,	// (0x00047907) main_cam_set_pane

0x7949,	// (0x000441e3) cam4_zoom_pane_ParamLimits

0x7949,	// (0x000441e3) cam4_zoom_pane

0x7fc5,	// (0x0004485f) main_cam_set_pane_g1_ParamLimits

0x7fc5,	// (0x0004485f) main_cam_set_pane_g1

0x7fd3,	// (0x0004486d) main_cam_set_pane_g2_ParamLimits

0x7fd3,	// (0x0004486d) main_cam_set_pane_g2

0x0001,

0xf977,	// (0x0004c211) main_cam_set_pane_g_ParamLimits

0xf977,	// (0x0004c211) main_cam_set_pane_g

0x7fdf,	// (0x00044879) main_cam_set_pane_t1_ParamLimits

0x7fdf,	// (0x00044879) main_cam_set_pane_t1

0x7ffb,	// (0x00044895) main_cset_listscroll_pane_ParamLimits

0x7ffb,	// (0x00044895) main_cset_listscroll_pane

0x8026,	// (0x000448c0) main_cset_slider_pane_ParamLimits

0x8026,	// (0x000448c0) main_cset_slider_pane

0xdb55,	// (0x0004a3ef) main_cset_list_pane_ParamLimits

0xdb55,	// (0x0004a3ef) main_cset_list_pane

0xdb65,	// (0x0004a3ff) scroll_pane_cp028

0x8045,	// (0x000448df) aid_area_touch_slider

0x8061,	// (0x000448fb) cset_slider_pane

0x808b,	// (0x00044925) main_cset_slider_pane_g1

0x80a0,	// (0x0004493a) main_cset_slider_pane_g2

0x0011,

0xf97c,	// (0x0004c216) main_cset_slider_pane_g

0xdb9e,	// (0x0004a438) main_cset_slider_pane_t1

0x8166,	// (0x00044a00) main_cset_slider_pane_t2

0x8180,	// (0x00044a1a) main_cset_slider_pane_t3

0x819a,	// (0x00044a34) main_cset_slider_pane_t4

0x81b8,	// (0x00044a52) main_cset_slider_pane_t5

0x81d6,	// (0x00044a70) main_cset_slider_pane_t6

0x81ed,	// (0x00044a87) main_cset_slider_pane_t7

0x000e,

0xf9a1,	// (0x0004c23b) main_cset_slider_pane_t

0x82fb,	// (0x00044b95) cset_list_set_pane_ParamLimits

0x82fb,	// (0x00044b95) cset_list_set_pane

0x8317,	// (0x00044bb1) aid_position_infowindow_above

0x831f,	// (0x00044bb9) aid_position_infowindow_below

0x1707,	// (0x0003dfa1) cset_list_set_pane_g1_ParamLimits

0x1707,	// (0x0003dfa1) cset_list_set_pane_g1

0x1713,	// (0x0003dfad) cset_list_set_pane_g3_ParamLimits

0x1713,	// (0x0003dfad) cset_list_set_pane_g3

0x0001,

0xf9c0,	// (0x0004c25a) cset_list_set_pane_g_ParamLimits

0xf9c0,	// (0x0004c25a) cset_list_set_pane_g

0x1722,	// (0x0003dfbc) cset_list_set_pane_t1_ParamLimits

0x1722,	// (0x0003dfbc) cset_list_set_pane_t1

0xb06d,	// (0x00047907) list_highlight_pane_cp021_ParamLimits

0xb06d,	// (0x00047907) list_highlight_pane_cp021

0xb904,	// (0x0004819e) cset_slider_pane_g1

0xb916,	// (0x000481b0) cset_slider_pane_g2

0xb90d,	// (0x000481a7) cset_slider_pane_g3

0x0002,

0xf9c5,	// (0x0004c25f) cset_slider_pane_g

0x8327,	// (0x00044bc1) aid_area_touch_cam4_zoom

0x832f,	// (0x00044bc9) cam4_zoom_cont_pane

0x8337,	// (0x00044bd1) cam4_zoom_pane_g1

0x833f,	// (0x00044bd9) cam4_zoom_pane_g2

0x8347,	// (0x00044be1) cam4_zoom_pane_g3

0x0002,

0xf9cc,	// (0x0004c266) cam4_zoom_pane_g

0xdc3e,	// (0x0004a4d8) cam4_zoom_cont_pane_g1

0xdc47,	// (0x0004a4e1) cam4_zoom_cont_pane_g2

0xdc50,	// (0x0004a4ea) cam4_zoom_cont_pane_g3

0x0002,

0xf9d3,	// (0x0004c26d) cam4_zoom_cont_pane_g

0x7836,	// (0x000440d0) call4_image_pane_ParamLimits

0x7836,	// (0x000440d0) call4_image_pane

0xd8fd,	// (0x0004a197) call4_windows_conf_pane_ParamLimits

0xd93c,	// (0x0004a1d6) popup_call4_audio_in_window_ParamLimits

0xd93c,	// (0x0004a1d6) popup_call4_audio_in_window

0xa564,	// (0x00046dfe) bg_popup_call2_act_pane_cp02

0xd9b2,	// (0x0004a24c) call4_list_conf_pane

0xcfda,	// (0x00049874) call4_image_pane_g1

0xcfda,	// (0x00049874) call4_image_pane_g2

0x0001,

0xf6e7,	// (0x0004bf81) call4_image_pane_g

0xdc59,	// (0x0004a4f3) list_single_graphic_popup_conf4_pane_ParamLimits

0xdc59,	// (0x0004a4f3) list_single_graphic_popup_conf4_pane

0xa564,	// (0x00046dfe) list_highlight_pane_cp022

0xdc6c,	// (0x0004a506) list_single_graphic_popup_conf4_pane_g1

0xb5eb,	// (0x00047e85) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9da,	// (0x0004c274) list_single_graphic_popup_conf4_pane_g

0xdc74,	// (0x0004a50e) list_single_graphic_popup_conf4_pane_t1

0x37c8,	// (0x00040062) popup_vtel_slider_window_ParamLimits

0x37c8,	// (0x00040062) popup_vtel_slider_window

0xd8df,	// (0x0004a179) dialer2_ne_pane_t2_ParamLimits

0xd8df,	// (0x0004a179) dialer2_ne_pane_t2

0x0001,

0xf8bb,	// (0x0004c155) dialer2_ne_pane_t_ParamLimits

0xf8bb,	// (0x0004c155) dialer2_ne_pane_t

0xb06d,	// (0x00047907) bg_popup_sub_pane_cp010_ParamLimits

0xb06d,	// (0x00047907) bg_popup_sub_pane_cp010

0x834f,	// (0x00044be9) popup_vtel_slider_window_g1_ParamLimits

0x834f,	// (0x00044be9) popup_vtel_slider_window_g1

0x835b,	// (0x00044bf5) popup_vtel_slider_window_g2_ParamLimits

0x835b,	// (0x00044bf5) popup_vtel_slider_window_g2

0x0003,

0xf9df,	// (0x0004c279) popup_vtel_slider_window_g_ParamLimits

0xf9df,	// (0x0004c279) popup_vtel_slider_window_g

0x83a3,	// (0x00044c3d) vtel_slider_pane_ParamLimits

0x83a3,	// (0x00044c3d) vtel_slider_pane

0x83b2,	// (0x00044c4c) vtel_slider_pane_g1_ParamLimits

0x83b2,	// (0x00044c4c) vtel_slider_pane_g1

0x83bf,	// (0x00044c59) vtel_slider_pane_g2_ParamLimits

0x83bf,	// (0x00044c59) vtel_slider_pane_g2

0x83cc,	// (0x00044c66) vtel_slider_pane_g3_ParamLimits

0x83cc,	// (0x00044c66) vtel_slider_pane_g3

0x83b2,	// (0x00044c4c) vtel_slider_pane_g4_ParamLimits

0x83b2,	// (0x00044c4c) vtel_slider_pane_g4

0x83d9,	// (0x00044c73) vtel_slider_pane_g5_ParamLimits

0x83d9,	// (0x00044c73) vtel_slider_pane_g5

0x0004,

0xf9e8,	// (0x0004c282) vtel_slider_pane_g_ParamLimits

0xf9e8,	// (0x0004c282) vtel_slider_pane_g

0xa564,	// (0x00046dfe) main_gallery2_pane

0x7b99,	// (0x00044433) aid_size_row_itut2_dropdow_list_ParamLimits

0x7b99,	// (0x00044433) aid_size_row_itut2_dropdow_list

0x7bf9,	// (0x00044493) grid_vitu2_function_top_pane_ParamLimits

0x7bf9,	// (0x00044493) grid_vitu2_function_top_pane

0x7c4f,	// (0x000444e9) popup_vitu2_dropdown_list_window_ParamLimits

0x7c4f,	// (0x000444e9) popup_vitu2_dropdown_list_window

0x7c6f,	// (0x00044509) popup_vitu2_match_list_window

0x83e6,	// (0x00044c80) cell_vitu2_function_top_pane_ParamLimits

0x83e6,	// (0x00044c80) cell_vitu2_function_top_pane

0x8406,	// (0x00044ca0) cell_vitu2_function_top_pane_cp01_ParamLimits

0x8406,	// (0x00044ca0) cell_vitu2_function_top_pane_cp01

0x8424,	// (0x00044cbe) cell_vitu2_function_top_wide_pane_ParamLimits

0x8424,	// (0x00044cbe) cell_vitu2_function_top_wide_pane

0xb06d,	// (0x00047907) bg_button_pane_cp012

0x8442,	// (0x00044cdc) cell_vitu2_function_top_pane_g1

0x8451,	// (0x00044ceb) bg_button_pane_cp013_ParamLimits

0x8451,	// (0x00044ceb) bg_button_pane_cp013

0x846d,	// (0x00044d07) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x846d,	// (0x00044d07) cell_vitu2_function_top_wide_pane_g1

0xdace,	// (0x0004a368) bg_popup_sub_pane_cp20

0x8485,	// (0x00044d1f) list_vitu2_match_list_pane

0xda2f,	// (0x0004a2c9) bg_popup_sub_pane_cp20_g1

0xda37,	// (0x0004a2d1) bg_popup_sub_pane_cp20_g2

0xb123,	// (0x000479bd) bg_popup_sub_pane_cp20_g3

0xda3f,	// (0x0004a2d9) bg_popup_sub_pane_cp20_g4

0xb103,	// (0x0004799d) bg_popup_sub_pane_cp20_g5

0xdc8a,	// (0x0004a524) bg_popup_sub_pane_cp20_g6

0xda4f,	// (0x0004a2e9) bg_popup_sub_pane_cp20_g7

0xda57,	// (0x0004a2f1) bg_popup_sub_pane_cp20_g8

0xda5f,	// (0x0004a2f9) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9f3,	// (0x0004c28d) bg_popup_sub_pane_cp20_g

0x849d,	// (0x00044d37) list_vitu2_match_list_item_pane_ParamLimits

0x849d,	// (0x00044d37) list_vitu2_match_list_item_pane

0x84af,	// (0x00044d49) list_vitu2_match_list_item_pane_t1

0xa564,	// (0x00046dfe) bg_popup_sub_pane_cp21

0xb4d5,	// (0x00047d6f) grid_vitu2_dropdown_list_pane

0x84bd,	// (0x00044d57) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x84bd,	// (0x00044d57) cell_vitu2_dropdown_list_char_pane

0x84de,	// (0x00044d78) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x84de,	// (0x00044d78) cell_vitu2_dropdown_list_ctrl_pane

0xdc92,	// (0x0004a52c) cell_vitu2_dropdown_list_char_pane_g1

0xdc9b,	// (0x0004a535) cell_vitu2_dropdown_list_char_pane_g2

0xdca4,	// (0x0004a53e) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa10,	// (0x0004c2aa) cell_vitu2_dropdown_list_char_pane_g

0x850a,	// (0x00044da4) cell_vitu2_dropdown_list_char_pane_t1

0x8518,	// (0x00044db2) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x8518,	// (0x00044db2) cell_vitu2_dropdown_list_ctrl_pane_g1

0x8525,	// (0x00044dbf) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x8525,	// (0x00044dbf) cell_vitu2_dropdown_list_ctrl_pane_g2

0x8532,	// (0x00044dcc) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x8532,	// (0x00044dcc) cell_vitu2_dropdown_list_ctrl_pane_g3

0x853f,	// (0x00044dd9) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x853f,	// (0x00044dd9) cell_vitu2_dropdown_list_ctrl_pane_g4

0xd23a,	// (0x00049ad4) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xd23a,	// (0x00049ad4) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa17,	// (0x0004c2b1) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa17,	// (0x0004c2b1) cell_vitu2_dropdown_list_ctrl_pane_g

0x855b,	// (0x00044df5) aid_size_cell_gallery2_ParamLimits

0x855b,	// (0x00044df5) aid_size_cell_gallery2

0x8569,	// (0x00044e03) grid_gallery2_pane_ParamLimits

0x8569,	// (0x00044e03) grid_gallery2_pane

0x8578,	// (0x00044e12) scroll_pane_cp029_ParamLimits

0x8578,	// (0x00044e12) scroll_pane_cp029

0x8584,	// (0x00044e1e) cell_gallery2_pane_ParamLimits

0x8584,	// (0x00044e1e) cell_gallery2_pane

0xdcad,	// (0x0004a547) cell_gallery2_pane_g2

0x85b2,	// (0x00044e4c) cell_gallery2_pane_g3

0xdcb7,	// (0x0004a551) cell_gallery2_pane_g4

0xdcbf,	// (0x0004a559) cell_gallery2_pane_g5

0xb7ce,	// (0x00048068) grid_highlight_pane_cp10

0x7c6f,	// (0x00044509) popup_vitu2_match_list_window_ParamLimits

0x7c81,	// (0x0004451b) popup_vitu2_query_window_ParamLimits

0x7c81,	// (0x0004451b) popup_vitu2_query_window

0xa564,	// (0x00046dfe) bg_vitu2_candi_button_pane

0xdc92,	// (0x0004a52c) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xdc9b,	// (0x0004a535) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xdca4,	// (0x0004a53e) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x178c,	// (0x0003e026) bg_button_pane_cp015

0x85ba,	// (0x00044e54) bg_button_pane_cp016

0x85cd,	// (0x00044e67) bg_button_pane_cp017

0xcbd0,	// (0x0004946a) bg_popup_sub_pane_cp22

0xdcc7,	// (0x0004a561) popup_vitu2_query_window_g1

0x17bf,	// (0x0003e059) popup_vitu2_query_window_g2

0x0002,

0xfa22,	// (0x0004c2bc) popup_vitu2_query_window_g

0x17dc,	// (0x0003e076) popup_vitu2_query_window_t1_ParamLimits

0x17dc,	// (0x0003e076) popup_vitu2_query_window_t1

0x180f,	// (0x0003e0a9) popup_vitu2_query_window_t2_ParamLimits

0x180f,	// (0x0003e0a9) popup_vitu2_query_window_t2

0x1821,	// (0x0003e0bb) popup_vitu2_query_window_t3_ParamLimits

0x1821,	// (0x0003e0bb) popup_vitu2_query_window_t3

0x85f1,	// (0x00044e8b) popup_vitu2_query_window_t4_ParamLimits

0x85f1,	// (0x00044e8b) popup_vitu2_query_window_t4

0x8612,	// (0x00044eac) popup_vitu2_query_window_t5_ParamLimits

0x8612,	// (0x00044eac) popup_vitu2_query_window_t5

0x0006,

0xfa29,	// (0x0004c2c3) popup_vitu2_query_window_t_ParamLimits

0xfa29,	// (0x0004c2c3) popup_vitu2_query_window_t

0xdb4d,	// (0x0004a3e7) main_cset_text_pane

0x8045,	// (0x000448df) aid_area_touch_slider_ParamLimits

0x8061,	// (0x000448fb) cset_slider_pane_ParamLimits

0x808b,	// (0x00044925) main_cset_slider_pane_g1_ParamLimits

0x80a0,	// (0x0004493a) main_cset_slider_pane_g2_ParamLimits

0xdb6e,	// (0x0004a408) main_cset_slider_pane_g3_ParamLimits

0xdb6e,	// (0x0004a408) main_cset_slider_pane_g3

0x80b5,	// (0x0004494f) main_cset_slider_pane_g4_ParamLimits

0x80b5,	// (0x0004494f) main_cset_slider_pane_g4

0x80c4,	// (0x0004495e) main_cset_slider_pane_g5_ParamLimits

0x80c4,	// (0x0004495e) main_cset_slider_pane_g5

0x80d2,	// (0x0004496c) main_cset_slider_pane_g6_ParamLimits

0x80d2,	// (0x0004496c) main_cset_slider_pane_g6

0xf97c,	// (0x0004c216) main_cset_slider_pane_g_ParamLimits

0xdb9e,	// (0x0004a438) main_cset_slider_pane_t1_ParamLimits

0x8166,	// (0x00044a00) main_cset_slider_pane_t2_ParamLimits

0x8180,	// (0x00044a1a) main_cset_slider_pane_t3_ParamLimits

0x819a,	// (0x00044a34) main_cset_slider_pane_t4_ParamLimits

0x81b8,	// (0x00044a52) main_cset_slider_pane_t5_ParamLimits

0x81d6,	// (0x00044a70) main_cset_slider_pane_t6_ParamLimits

0x81ed,	// (0x00044a87) main_cset_slider_pane_t7_ParamLimits

0x821b,	// (0x00044ab5) main_cset_slider_pane_t8_ParamLimits

0x821b,	// (0x00044ab5) main_cset_slider_pane_t8

0x8243,	// (0x00044add) main_cset_slider_pane_t9_ParamLimits

0x8243,	// (0x00044add) main_cset_slider_pane_t9

0x826b,	// (0x00044b05) main_cset_slider_pane_t10_ParamLimits

0x826b,	// (0x00044b05) main_cset_slider_pane_t10

0x8293,	// (0x00044b2d) main_cset_slider_pane_t11_ParamLimits

0x8293,	// (0x00044b2d) main_cset_slider_pane_t11

0x82bd,	// (0x00044b57) main_cset_slider_pane_t12_ParamLimits

0x82bd,	// (0x00044b57) main_cset_slider_pane_t12

0x82dc,	// (0x00044b76) main_cset_slider_pane_t13_ParamLimits

0x82dc,	// (0x00044b76) main_cset_slider_pane_t13

0xf9a1,	// (0x0004c23b) main_cset_slider_pane_t_ParamLimits

0xa564,	// (0x00046dfe) bg_popup_sub_pane_cp011

0xdcd3,	// (0x0004a56d) main_cset_text_pane_g1

0xdcdb,	// (0x0004a575) main_cset_text_pane_t1

0xdce9,	// (0x0004a583) main_cset_text_pane_t2

0xdcf7,	// (0x0004a591) main_cset_text_pane_t3

0xdd05,	// (0x0004a59f) main_cset_text_pane_t4

0xdd13,	// (0x0004a5ad) main_cset_text_pane_t5

0xdd21,	// (0x0004a5bb) main_cset_text_pane_t6

0xdd2f,	// (0x0004a5c9) main_cset_text_pane_t7

0x0006,

0xfa38,	// (0x0004c2d2) main_cset_text_pane_t

0xa564,	// (0x00046dfe) main_cam4_burst_pane

0xa564,	// (0x00046dfe) main_cam5_pane

0x7f94,	// (0x0004482e) bg_button_pane_cp019

0x7f9d,	// (0x00044837) bg_button_pane_cp020

0xdb7a,	// (0x0004a414) main_cset_slider_pane_g7_ParamLimits

0xdb7a,	// (0x0004a414) main_cset_slider_pane_g7

0xdb86,	// (0x0004a420) main_cset_slider_pane_g8_ParamLimits

0xdb86,	// (0x0004a420) main_cset_slider_pane_g8

0x80e6,	// (0x00044980) main_cset_slider_pane_g9_ParamLimits

0x80e6,	// (0x00044980) main_cset_slider_pane_g9

0x80f2,	// (0x0004498c) main_cset_slider_pane_g10_ParamLimits

0x80f2,	// (0x0004498c) main_cset_slider_pane_g10

0x80fe,	// (0x00044998) main_cset_slider_pane_g11_ParamLimits

0x80fe,	// (0x00044998) main_cset_slider_pane_g11

0x810a,	// (0x000449a4) main_cset_slider_pane_g12_ParamLimits

0x810a,	// (0x000449a4) main_cset_slider_pane_g12

0x8116,	// (0x000449b0) main_cset_slider_pane_g13_ParamLimits

0x8116,	// (0x000449b0) main_cset_slider_pane_g13

0x8124,	// (0x000449be) main_cset_slider_pane_g14_ParamLimits

0x8124,	// (0x000449be) main_cset_slider_pane_g14

0x8132,	// (0x000449cc) main_cset_slider_pane_g15_ParamLimits

0x8132,	// (0x000449cc) main_cset_slider_pane_g15

0xdbcc,	// (0x0004a466) main_cset_slider_pane_t14_ParamLimits

0xdbcc,	// (0x0004a466) main_cset_slider_pane_t14

0xdc05,	// (0x0004a49f) main_cset_slider_pane_t15_ParamLimits

0xdc05,	// (0x0004a49f) main_cset_slider_pane_t15

0x8633,	// (0x00044ecd) aid_cam4_burst_size_cell_ParamLimits

0x8633,	// (0x00044ecd) aid_cam4_burst_size_cell

0x864f,	// (0x00044ee9) grid_cam4_burst_pane_ParamLimits

0x864f,	// (0x00044ee9) grid_cam4_burst_pane

0x867f,	// (0x00044f19) linegrid_cam4_burst_pane_ParamLimits

0x867f,	// (0x00044f19) linegrid_cam4_burst_pane

0x86a1,	// (0x00044f3b) scroll_pane_cp30_ParamLimits

0x86a1,	// (0x00044f3b) scroll_pane_cp30

0x86ad,	// (0x00044f47) cell_cam4_burst_pane_ParamLimits

0x86ad,	// (0x00044f47) cell_cam4_burst_pane

0xdd3d,	// (0x0004a5d7) linegrid_cam4_burst_pane_g1_ParamLimits

0xdd3d,	// (0x0004a5d7) linegrid_cam4_burst_pane_g1

0x86e9,	// (0x00044f83) linegrid_cam4_burst_pane_g2_ParamLimits

0x86e9,	// (0x00044f83) linegrid_cam4_burst_pane_g2

0xdd4a,	// (0x0004a5e4) linegrid_cam4_burst_pane_g3_ParamLimits

0xdd4a,	// (0x0004a5e4) linegrid_cam4_burst_pane_g3

0x0002,

0xfa47,	// (0x0004c2e1) linegrid_cam4_burst_pane_g_ParamLimits

0xfa47,	// (0x0004c2e1) linegrid_cam4_burst_pane_g

0x86fa,	// (0x00044f94) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x86fa,	// (0x00044f94) linegrid_cam4_burst_pane_g3_copy1

0xdd57,	// (0x0004a5f1) linegrid_cam4_burst_pane_g4_ParamLimits

0xdd57,	// (0x0004a5f1) linegrid_cam4_burst_pane_g4

0x8714,	// (0x00044fae) linegrid_cam4_burst_pane_g5_ParamLimits

0x8714,	// (0x00044fae) linegrid_cam4_burst_pane_g5

0x8725,	// (0x00044fbf) linegrid_cam4_burst_pane_g6_ParamLimits

0x8725,	// (0x00044fbf) linegrid_cam4_burst_pane_g6

0xdd64,	// (0x0004a5fe) linegrid_cam4_burst_pane_g7_ParamLimits

0xdd64,	// (0x0004a5fe) linegrid_cam4_burst_pane_g7

0x8736,	// (0x00044fd0) cell_cam4_burst_pane_g1

0xdd7d,	// (0x0004a617) main_cam5_pane_t1_ParamLimits

0xdd7d,	// (0x0004a617) main_cam5_pane_t1

0xdd8f,	// (0x0004a629) main_cam5_pane_t2_ParamLimits

0xdd8f,	// (0x0004a629) main_cam5_pane_t2

0xdda1,	// (0x0004a63b) main_cam5_pane_t3_ParamLimits

0xdda1,	// (0x0004a63b) main_cam5_pane_t3

0xddb3,	// (0x0004a64d) main_cam5_pane_t4_ParamLimits

0xddb3,	// (0x0004a64d) main_cam5_pane_t4

0xddcb,	// (0x0004a665) main_cam5_pane_t5_ParamLimits

0xddcb,	// (0x0004a665) main_cam5_pane_t5

0xdddf,	// (0x0004a679) main_cam5_pane_t6_ParamLimits

0xdddf,	// (0x0004a679) main_cam5_pane_t6

0xddf3,	// (0x0004a68d) main_cam5_pane_t7_ParamLimits

0xddf3,	// (0x0004a68d) main_cam5_pane_t7

0xde05,	// (0x0004a69f) main_cam5_pane_t8_ParamLimits

0xde05,	// (0x0004a69f) main_cam5_pane_t8

0xde21,	// (0x0004a6bb) main_cam5_pane_t9_ParamLimits

0xde21,	// (0x0004a6bb) main_cam5_pane_t9

0xde33,	// (0x0004a6cd) main_cam5_pane_t10_ParamLimits

0xde33,	// (0x0004a6cd) main_cam5_pane_t10

0xde45,	// (0x0004a6df) main_cam5_pane_t11_ParamLimits

0xde45,	// (0x0004a6df) main_cam5_pane_t11

0xde57,	// (0x0004a6f1) main_cam5_pane_t12_ParamLimits

0xde57,	// (0x0004a6f1) main_cam5_pane_t12

0xde6c,	// (0x0004a706) main_cam5_pane_t13_ParamLimits

0xde6c,	// (0x0004a706) main_cam5_pane_t13

0x000c,

0xfa53,	// (0x0004c2ed) main_cam5_pane_t_ParamLimits

0xfa53,	// (0x0004c2ed) main_cam5_pane_t

0x27fa,	// (0x0003f094) popup_scut_keymap_window_ParamLimits

0x27fa,	// (0x0003f094) popup_scut_keymap_window

0x874b,	// (0x00044fe5) aid_size_cell_brow_shortcut

0xb7ce,	// (0x00048068) bg_popup_window_pane_cp010

0x8757,	// (0x00044ff1) grid_scut_pane

0x8763,	// (0x00044ffd) cell_scut_pane_ParamLimits

0x8763,	// (0x00044ffd) cell_scut_pane

0x877a,	// (0x00045014) cell_scut_pane_g1

0xde89,	// (0x0004a723) cell_scut_pane_t1

0xde98,	// (0x0004a732) cell_scut_pane_t2

0x8783,	// (0x0004501d) cell_scut_pane_t3

0x0002,

0xfa6e,	// (0x0004c308) cell_scut_pane_t

0x6781,	// (0x0004301b) main_mup3_pane_g8_ParamLimits

0x6781,	// (0x0004301b) main_mup3_pane_g8

0x7ba7,	// (0x00044441) area_vitu2_query_pane_ParamLimits

0x7ba7,	// (0x00044441) area_vitu2_query_pane

0x179e,	// (0x0003e038) input_focus_pane_cp08

0xdec5,	// (0x0004a75f) area_vitu2_query_pane_g1

0x189f,	// (0x0003e139) area_vitu2_query_pane_g2

0x0001,

0xfa75,	// (0x0004c30f) area_vitu2_query_pane_g

0x8791,	// (0x0004502b) area_vitu2_query_pane_t1_ParamLimits

0x8791,	// (0x0004502b) area_vitu2_query_pane_t1

0x87a5,	// (0x0004503f) area_vitu2_query_pane_t2_ParamLimits

0x87a5,	// (0x0004503f) area_vitu2_query_pane_t2

0x18b0,	// (0x0003e14a) area_vitu2_query_pane_t3_ParamLimits

0x18b0,	// (0x0003e14a) area_vitu2_query_pane_t3

0x18d8,	// (0x0003e172) area_vitu2_query_pane_t4_ParamLimits

0x18d8,	// (0x0003e172) area_vitu2_query_pane_t4

0x1900,	// (0x0003e19a) area_vitu2_query_pane_t5_ParamLimits

0x1900,	// (0x0003e19a) area_vitu2_query_pane_t5

0x1928,	// (0x0003e1c2) area_vitu2_query_pane_t6_ParamLimits

0x1928,	// (0x0003e1c2) area_vitu2_query_pane_t6

0x0006,

0xfa7a,	// (0x0004c314) area_vitu2_query_pane_t_ParamLimits

0xfa7a,	// (0x0004c314) area_vitu2_query_pane_t

0x87b9,	// (0x00045053) bg_button_pane_cp018

0x87c7,	// (0x00045061) bg_button_pane_cp021

0x1974,	// (0x0003e20e) bg_button_pane_cp022

0x1985,	// (0x0003e21f) input_focus_pane_cp09

0x4c9b,	// (0x00041535) aid_size_touch_mv_arrow_left

0x4cc6,	// (0x00041560) aid_size_touch_mv_arrow_right

0x814a,	// (0x000449e4) main_cset_slider_pane_g16_ParamLimits

0x814a,	// (0x000449e4) main_cset_slider_pane_g16

0x8158,	// (0x000449f2) main_cset_slider_pane_g17_ParamLimits

0x8158,	// (0x000449f2) main_cset_slider_pane_g17

0x8736,	// (0x00044fd0) cell_cam4_burst_pane_g1_ParamLimits

0xa564,	// (0x00046dfe) compa_mode_pane

0x8367,	// (0x00044c01) popup_vtel_slider_window_g3_ParamLimits

0x8367,	// (0x00044c01) popup_vtel_slider_window_g3

0x837b,	// (0x00044c15) popup_vtel_slider_window_g4_ParamLimits

0x837b,	// (0x00044c15) popup_vtel_slider_window_g4

0x838f,	// (0x00044c29) popup_vtel_slider_window_t1_ParamLimits

0x838f,	// (0x00044c29) popup_vtel_slider_window_t1

0xa564,	// (0x00046dfe) main_cl_pane

0x5acf,	// (0x00042369) popup_imed_adjust2_window_ParamLimits

0xcbd0,	// (0x0004946a) bg_tb_trans_pane_cp05_ParamLimits

0xd4df,	// (0x00049d79) popup_imed_adjust2_window_g1_ParamLimits

0xd4ee,	// (0x00049d88) popup_imed_adjust2_window_g2_ParamLimits

0xd4ee,	// (0x00049d88) popup_imed_adjust2_window_g2

0xd4fa,	// (0x00049d94) popup_imed_adjust2_window_g3_ParamLimits

0xd4fa,	// (0x00049d94) popup_imed_adjust2_window_g3

0x0002,

0xf7e5,	// (0x0004c07f) popup_imed_adjust2_window_g_ParamLimits

0xf7e5,	// (0x0004c07f) popup_imed_adjust2_window_g

0xd506,	// (0x00049da0) popup_imed_adjust2_window_t1_ParamLimits

0xd51e,	// (0x00049db8) slider_imed_adjust_pane_ParamLimits

0xd532,	// (0x00049dcc) slider_imed_adjust_pane_g1_ParamLimits

0xd542,	// (0x00049ddc) slider_imed_adjust_pane_g2_ParamLimits

0xd552,	// (0x00049dec) slider_imed_adjust_pane_g3_ParamLimits

0xd563,	// (0x00049dfd) slider_imed_adjust_pane_g4_ParamLimits

0xf7ec,	// (0x0004c086) slider_imed_adjust_pane_g_ParamLimits

0x78f2,	// (0x0004418c) aid_touch_area_cam4_ParamLimits

0x78f2,	// (0x0004418c) aid_touch_area_cam4

0x7902,	// (0x0004419c) battery_pane_cp01

0x7989,	// (0x00044223) main_camera4_pane_g6_ParamLimits

0x7989,	// (0x00044223) main_camera4_pane_g6

0x79a7,	// (0x00044241) main_camera4_pane_t2_ParamLimits

0x79a7,	// (0x00044241) main_camera4_pane_t2

0x0001,

0xf8ef,	// (0x0004c189) main_camera4_pane_t_ParamLimits

0xf8ef,	// (0x0004c189) main_camera4_pane_t

0x7a2e,	// (0x000442c8) aid_touch_area_vid4_ParamLimits

0x7a2e,	// (0x000442c8) aid_touch_area_vid4

0x7a6e,	// (0x00044308) main_video4_pane_g5_ParamLimits

0x7a6e,	// (0x00044308) main_video4_pane_g5

0x7a92,	// (0x0004432c) vid4_progress_pane_ParamLimits

0x7a92,	// (0x0004432c) vid4_progress_pane

0xdb92,	// (0x0004a42c) main_cset_slider_pane_g18_ParamLimits

0xdb92,	// (0x0004a42c) main_cset_slider_pane_g18

0xdd71,	// (0x0004a60b) cell_cam4_burst_pane_g2_ParamLimits

0xdd71,	// (0x0004a60b) cell_cam4_burst_pane_g2

0x0001,

0xfa4e,	// (0x0004c2e8) cell_cam4_burst_pane_g_ParamLimits

0xfa4e,	// (0x0004c2e8) cell_cam4_burst_pane_g

0x87d3,	// (0x0004506d) bg_cl_pane_ParamLimits

0x87d3,	// (0x0004506d) bg_cl_pane

0x87df,	// (0x00045079) cl_header_pane_ParamLimits

0x87df,	// (0x00045079) cl_header_pane

0x87eb,	// (0x00045085) cl_listscroll_pane_ParamLimits

0x87eb,	// (0x00045085) cl_listscroll_pane

0xded1,	// (0x0004a76b) bg_cl_pane_g1

0xded9,	// (0x0004a773) bg_cl_pane_g2

0xdee1,	// (0x0004a77b) bg_cl_pane_g3

0xdee9,	// (0x0004a783) bg_cl_pane_g4

0xdef1,	// (0x0004a78b) bg_cl_pane_g5

0xdef9,	// (0x0004a793) bg_cl_pane_g6

0xdf01,	// (0x0004a79b) bg_cl_pane_g7

0xdf09,	// (0x0004a7a3) bg_cl_pane_g8

0xdf11,	// (0x0004a7ab) bg_cl_pane_g9

0x0008,

0xfa89,	// (0x0004c323) bg_cl_pane_g

0x87f7,	// (0x00045091) aid_height_cl_leading_ParamLimits

0x87f7,	// (0x00045091) aid_height_cl_leading

0x8803,	// (0x0004509d) aid_height_cl_text_ParamLimits

0x8803,	// (0x0004509d) aid_height_cl_text

0xdace,	// (0x0004a368) bg_cl_header_pane_ParamLimits

0xdace,	// (0x0004a368) bg_cl_header_pane

0x881b,	// (0x000450b5) cl_header_pane_g1_ParamLimits

0x881b,	// (0x000450b5) cl_header_pane_g1

0x8828,	// (0x000450c2) cl_header_pane_t1_ParamLimits

0x8828,	// (0x000450c2) cl_header_pane_t1

0xdf19,	// (0x0004a7b3) cl_list_pane

0xdb65,	// (0x0004a3ff) hc_scroll_pane_cp01

0xb103,	// (0x0004799d) bg_cl_header_pane_g1

0xda2f,	// (0x0004a2c9) bg_cl_header_pane_g2

0xb123,	// (0x000479bd) bg_cl_header_pane_g3

0xda3f,	// (0x0004a2d9) bg_cl_header_pane_g4

0xda37,	// (0x0004a2d1) bg_cl_header_pane_g5

0xdc8a,	// (0x0004a524) bg_cl_header_pane_g6

0xda57,	// (0x0004a2f1) bg_cl_header_pane_g7

0xda5f,	// (0x0004a2f9) bg_cl_header_pane_g8

0xda4f,	// (0x0004a2e9) bg_cl_header_pane_g9

0x0008,

0xfa9c,	// (0x0004c336) bg_cl_header_pane_g

0x883a,	// (0x000450d4) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x883a,	// (0x000450d4) hc_cl_list_double_graphic_heading_pane

0x884e,	// (0x000450e8) hc_cl_list_single_graphic_pane_ParamLimits

0x884e,	// (0x000450e8) hc_cl_list_single_graphic_pane

0x8868,	// (0x00045102) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x8868,	// (0x00045102) hc_cl_list_single_graphic_pane_g1

0x8874,	// (0x0004510e) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x8874,	// (0x0004510e) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaaf,	// (0x0004c349) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaaf,	// (0x0004c349) hc_cl_list_single_graphic_pane_g

0x8888,	// (0x00045122) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x8888,	// (0x00045122) hc_cl_list_single_graphic_pane_t1

0x8868,	// (0x00045102) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x8868,	// (0x00045102) hc_cl_list_double_graphic_heading_pane_g1

0x889d,	// (0x00045137) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x889d,	// (0x00045137) hc_cl_list_double_graphic_heading_pane_g2

0x88b1,	// (0x0004514b) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x88b1,	// (0x0004514b) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfab4,	// (0x0004c34e) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfab4,	// (0x0004c34e) hc_cl_list_double_graphic_heading_pane_g

0x88c5,	// (0x0004515f) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x88c5,	// (0x0004515f) hc_cl_list_double_graphic_heading_pane_t1

0x88da,	// (0x00045174) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x88da,	// (0x00045174) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfabb,	// (0x0004c355) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfabb,	// (0x0004c355) hc_cl_list_double_graphic_heading_pane_t

0x88f7,	// (0x00045191) vid4_progress_pane_g1

0x8909,	// (0x000451a3) vid4_progress_pane_g2

0x5306,	// (0x00041ba0) vid4_progress_pane_g3

0x8919,	// (0x000451b3) vid4_progress_pane_g4

0x0004,

0xfac0,	// (0x0004c35a) vid4_progress_pane_g

0x8937,	// (0x000451d1) vid4_progress_pane_t1

0x894c,	// (0x000451e6) vid4_progress_pane_t2

0x0002,

0xfacb,	// (0x0004c365) vid4_progress_pane_t

0x8978,	// (0x00045212) wait_bar_pane_cp07

0xcdcb,	// (0x00049665) blid_firmament_pane_ParamLimits

0xce0e,	// (0x000496a8) popup_blid_sat_info2_window_g1

0xce32,	// (0x000496cc) popup_blid_sat_info2_window_t3

0xce40,	// (0x000496da) popup_blid_sat_info2_window_t4

0xce4e,	// (0x000496e8) popup_blid_sat_info2_window_t5

0xce5c,	// (0x000496f6) popup_blid_sat_info2_window_t6

0xce6c,	// (0x00049706) popup_blid_sat_info2_window_t7

0xce7a,	// (0x00049714) popup_blid_sat_info2_window_t8

0xce88,	// (0x00049722) popup_blid_sat_info2_window_t9

0xce96,	// (0x00049730) popup_blid_sat_info2_window_t10

0xcf5a,	// (0x000497f4) aid_firma_cardinal_ParamLimits

0xcf6e,	// (0x00049808) blid_firmament_pane_t1_ParamLimits

0xcf85,	// (0x0004981f) blid_firmament_pane_t2_ParamLimits

0xcf9c,	// (0x00049836) blid_firmament_pane_t3_ParamLimits

0xcfb3,	// (0x0004984d) blid_firmament_pane_t4_ParamLimits

0xf6de,	// (0x0004bf78) blid_firmament_pane_t_ParamLimits

0xcfca,	// (0x00049864) blid_sat_info_pane_ParamLimits

0xb06d,	// (0x00047907) main_cam_set_pane_ParamLimits

0x6f3a,	// (0x000437d4) aid_size_cell_colour_35_ParamLimits

0x6f54,	// (0x000437ee) aid_size_cell_colour_112_ParamLimits

0x6f6b,	// (0x00043805) aid_size_cell_effect_ParamLimits

0xb06d,	// (0x00047907) bg_tb_trans_pane_cp02_ParamLimits

0xb56e,	// (0x00047e08) heading_imed_pane_ParamLimits

0x6f85,	// (0x0004381f) listscroll_imed_pane_ParamLimits

0xc1f6,	// (0x00048a90) popup_call2_audio_first_window_g5_ParamLimits

0xc1f6,	// (0x00048a90) popup_call2_audio_first_window_g5

0x76af,	// (0x00043f49) aid_size_touch_image3_arrow_left_ParamLimits

0x76af,	// (0x00043f49) aid_size_touch_image3_arrow_left

0x76c5,	// (0x00043f5f) aid_size_touch_image3_arrow_right_ParamLimits

0x76c5,	// (0x00043f5f) aid_size_touch_image3_arrow_right

0x8962,	// (0x000451fc) vid4_progress_pane_t3

0x7239,	// (0x00043ad3) main_hwr_training_symbol_option_pane_ParamLimits

0x7239,	// (0x00043ad3) main_hwr_training_symbol_option_pane

0xd7e1,	// (0x0004a07b) popup_hwr_training_preview_window_ParamLimits

0xd7e1,	// (0x0004a07b) popup_hwr_training_preview_window

0x729a,	// (0x00043b34) hwr_training_navi_pane_g5_ParamLimits

0x729a,	// (0x00043b34) hwr_training_navi_pane_g5

0xda1d,	// (0x0004a2b7) popup_char_count_window

0xdace,	// (0x0004a368) bg_popup_sub_pane_cp20_ParamLimits

0x8485,	// (0x00044d1f) list_vitu2_match_list_pane_ParamLimits

0x8491,	// (0x00044d2b) vitu2_page_scroll_pane_ParamLimits

0x8491,	// (0x00044d2b) vitu2_page_scroll_pane

0xdf22,	// (0x0004a7bc) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdf22,	// (0x0004a7bc) list_single_hwr_training_symbol_option_pane

0xdf35,	// (0x0004a7cf) list_single_hwr_training_symbol_option_pane_g1

0xdf3d,	// (0x0004a7d7) list_single_hwr_training_symbol_option_pane_t1

0xdf4b,	// (0x0004a7e5) bg_button_pane_cp023

0xdf54,	// (0x0004a7ee) bg_button_pane_cp024

0x8988,	// (0x00045222) vitu2_page_scroll_pane_g1

0x8990,	// (0x0004522a) vitu2_page_scroll_pane_g2

0x0001,

0xfad2,	// (0x0004c36c) vitu2_page_scroll_pane_g

0x8998,	// (0x00045232) vitu2_page_scroll_pane_t1

0xd58f,	// (0x00049e29) popup_char_count_window_g1

0xdf87,	// (0x0004a821) popup_char_count_window_g2

0xdf90,	// (0x0004a82a) popup_char_count_window_g3

0x0002,

0xfad7,	// (0x0004c371) popup_char_count_window_g

0xdf99,	// (0x0004a833) popup_char_count_window_t1

0xa564,	// (0x00046dfe) main_vded2_pane

0xd4cb,	// (0x00049d65) aid_size_cell_imed_line

0xd4d5,	// (0x00049d6f) grid_imed_line_width_pane

0x7afe,	// (0x00044398) vid4_indicators_pane_g4

0xdfa7,	// (0x0004a841) cell_imed_line_width_pane_ParamLimits

0xdfa7,	// (0x0004a841) cell_imed_line_width_pane

0xdfbb,	// (0x0004a855) cell_imed_line_width_pane_g1

0xdea7,	// (0x0004a741) cell_imed_line_width_pane_g2

0x0001,

0xfade,	// (0x0004c378) cell_imed_line_width_pane_g

0x89a7,	// (0x00045241) main_vded2_pane_g1_ParamLimits

0x89a7,	// (0x00045241) main_vded2_pane_g1

0x89b4,	// (0x0004524e) main_vded2_pane_g2_ParamLimits

0x89b4,	// (0x0004524e) main_vded2_pane_g2

0x0001,

0xfae3,	// (0x0004c37d) main_vded2_pane_g_ParamLimits

0xfae3,	// (0x0004c37d) main_vded2_pane_g

0x89c2,	// (0x0004525c) vded2_slider_pane_ParamLimits

0x89c2,	// (0x0004525c) vded2_slider_pane

0x89cf,	// (0x00045269) aid_size_touch_vded2_end

0x89d9,	// (0x00045273) aid_size_touch_vded2_playhead

0xdfc4,	// (0x0004a85e) aid_size_touch_vded2_start

0xdfcc,	// (0x0004a866) vded2_slider_bg_pane

0xdfd5,	// (0x0004a86f) vded2_slider_pane_g1

0xdfde,	// (0x0004a878) vded2_slider_pane_g2

0x89e1,	// (0x0004527b) vded2_slider_pane_g3

0x0002,

0xfae8,	// (0x0004c382) vded2_slider_pane_g

0xdfe6,	// (0x0004a880) vded2_slider_bg_pane_g1

0xdfef,	// (0x0004a889) vded2_slider_bg_pane_g2

0xdff8,	// (0x0004a892) vded2_slider_bg_pane_g3

0x0002,

0xfaef,	// (0x0004c389) vded2_slider_bg_pane_g

0x531e,	// (0x00041bb8) aid_postcard_touch_down_pane_ParamLimits

0x531e,	// (0x00041bb8) aid_postcard_touch_down_pane

0x532e,	// (0x00041bc8) aid_postcard_touch_up_pane_ParamLimits

0x532e,	// (0x00041bc8) aid_postcard_touch_up_pane

0xa564,	// (0x00046dfe) main_blid2_pane

0x5a5e,	// (0x000422f8) popup_blid2_search_window

0xa564,	// (0x00046dfe) blid2_gps_pane

0xa564,	// (0x00046dfe) blid2_navig_pane

0xa564,	// (0x00046dfe) blid2_search_pane

0xa564,	// (0x00046dfe) blid2_tripm_pane

0x89ea,	// (0x00045284) blid2_search_pane_g1_ParamLimits

0x89ea,	// (0x00045284) blid2_search_pane_g1

0x89fa,	// (0x00045294) blid2_search_pane_t1_ParamLimits

0x89fa,	// (0x00045294) blid2_search_pane_t1

0x8a0c,	// (0x000452a6) aid_size_cell_blid2_gps_ParamLimits

0x8a0c,	// (0x000452a6) aid_size_cell_blid2_gps

0x8a1c,	// (0x000452b6) blid2_gps_pane_g1_ParamLimits

0x8a1c,	// (0x000452b6) blid2_gps_pane_g1

0x8a28,	// (0x000452c2) grid_blid2_satellite_pane_ParamLimits

0x8a28,	// (0x000452c2) grid_blid2_satellite_pane

0x8a38,	// (0x000452d2) blid2_navig_pane_g1_ParamLimits

0x8a38,	// (0x000452d2) blid2_navig_pane_g1

0x8a44,	// (0x000452de) blid2_navig_pane_t1_ParamLimits

0x8a44,	// (0x000452de) blid2_navig_pane_t1

0x8a56,	// (0x000452f0) blid2_navig_pane_t2_ParamLimits

0x8a56,	// (0x000452f0) blid2_navig_pane_t2

0x0001,

0xfaf6,	// (0x0004c390) blid2_navig_pane_t_ParamLimits

0xfaf6,	// (0x0004c390) blid2_navig_pane_t

0x8a68,	// (0x00045302) blid2_navig_ring_pane_ParamLimits

0x8a68,	// (0x00045302) blid2_navig_ring_pane

0x8a78,	// (0x00045312) blid2_speed_pane_ParamLimits

0x8a78,	// (0x00045312) blid2_speed_pane

0x8a84,	// (0x0004531e) blid2_tripm_pane_g1_ParamLimits

0x8a84,	// (0x0004531e) blid2_tripm_pane_g1

0x8a94,	// (0x0004532e) blid2_tripm_pane_g2_ParamLimits

0x8a94,	// (0x0004532e) blid2_tripm_pane_g2

0x8aa0,	// (0x0004533a) blid2_tripm_pane_g3_ParamLimits

0x8aa0,	// (0x0004533a) blid2_tripm_pane_g3

0x8aac,	// (0x00045346) blid2_tripm_pane_g4_ParamLimits

0x8aac,	// (0x00045346) blid2_tripm_pane_g4

0x8ab8,	// (0x00045352) blid2_tripm_pane_g5_ParamLimits

0x8ab8,	// (0x00045352) blid2_tripm_pane_g5

0x0005,

0xfafb,	// (0x0004c395) blid2_tripm_pane_g_ParamLimits

0xfafb,	// (0x0004c395) blid2_tripm_pane_g

0x8ad4,	// (0x0004536e) blid2_tripm_pane_t1_ParamLimits

0x8ad4,	// (0x0004536e) blid2_tripm_pane_t1

0x8ae8,	// (0x00045382) blid2_tripm_pane_t2_ParamLimits

0x8ae8,	// (0x00045382) blid2_tripm_pane_t2

0x8afa,	// (0x00045394) blid2_tripm_pane_t3_ParamLimits

0x8afa,	// (0x00045394) blid2_tripm_pane_t3

0x0003,

0xfb08,	// (0x0004c3a2) blid2_tripm_pane_t_ParamLimits

0xfb08,	// (0x0004c3a2) blid2_tripm_pane_t

0x8b2c,	// (0x000453c6) cell_blid2_satellite_pane_ParamLimits

0x8b2c,	// (0x000453c6) cell_blid2_satellite_pane

0x8b46,	// (0x000453e0) cell_blid2_satellite_pane_g1

0xe001,	// (0x0004a89b) cell_blid2_satellite_pane_t1

0xcfda,	// (0x00049874) blid2_speed_pane_g1

0xe00f,	// (0x0004a8a9) blid2_speed_pane_t1

0xe01d,	// (0x0004a8b7) blid2_speed_pane_t2

0x0001,

0xfb11,	// (0x0004c3ab) blid2_speed_pane_t

0xcfda,	// (0x00049874) blid2_navig_ring_pane_g1

0x8b4f,	// (0x000453e9) blid2_navig_ring_pane_g2

0x8b57,	// (0x000453f1) blid2_navig_ring_pane_g3

0x8b5f,	// (0x000453f9) blid2_navig_ring_pane_g4

0x8b67,	// (0x00045401) blid2_navig_ring_pane_g5

0x0004,

0xfb16,	// (0x0004c3b0) blid2_navig_ring_pane_g

0xa564,	// (0x00046dfe) bg_popup_window_pane_cp011

0xe02b,	// (0x0004a8c5) popup_blid2_search_window_g1

0xe033,	// (0x0004a8cd) popup_blid2_search_window_t1

0xe041,	// (0x0004a8db) popup_blid2_search_window_t2

0x0001,

0xfb21,	// (0x0004c3bb) popup_blid2_search_window_t

0xb004,	// (0x0004789e) main_browser_pane_g1

0xaceb,	// (0x00047585) main_browser_pane_ParamLimits

0xb06d,	// (0x00047907) bg_button_pane_cp011_ParamLimits

0x7d65,	// (0x000445ff) cell_vitu2_function_pane_g1_ParamLimits

0xcbd0,	// (0x0004946a) bg_popup_sub_pane_cp22_ParamLimits

0x179e,	// (0x0003e038) input_focus_pane_cp08_ParamLimits

0x85e0,	// (0x00044e7a) popup_vitu2_query_button_pane_ParamLimits

0x85e0,	// (0x00044e7a) popup_vitu2_query_button_pane

0x17b5,	// (0x0003e04f) popup_vitu2_query_input_button_pane

0xdcc7,	// (0x0004a561) popup_vitu2_query_window_g1_ParamLimits

0x17bf,	// (0x0003e059) popup_vitu2_query_window_g2_ParamLimits

0xfa22,	// (0x0004c2bc) popup_vitu2_query_window_g_ParamLimits

0xa564,	// (0x00046dfe) bg_button_pane_cp026

0x8b6f,	// (0x00045409) popup_vitu2_query_input_button_pane_g1

0xa564,	// (0x00046dfe) bg_button_pane_cp025

0xe04f,	// (0x0004a8e9) popup_vitu2_query_button_pane_t1

0x64b9,	// (0x00042d53) main_mp3_pane_t6

0x64c9,	// (0x00042d63) popup_slider_window_cp01

0x79dd,	// (0x00044277) cam4_battery_pane

0x7abd,	// (0x00044357) cam4_battery_pane_cp02

0x88ef,	// (0x00045189) cam4_battery_pane_cp01

0x88ef,	// (0x00045189) cam4_battery_pane_cp03

0xcfda,	// (0x00049874) cam4_battery_pane_g1

0xdeaf,	// (0x0004a749) cam4_battery_pane_g2

0x0001,

0xfb26,	// (0x0004c3c0) cam4_battery_pane_g

0xcea4,	// (0x0004973e) popup_blid_sat_info2_window_t11

0x4c9b,	// (0x00041535) aid_size_touch_mv_arrow_left_ParamLimits

0x4cc6,	// (0x00041560) aid_size_touch_mv_arrow_right_ParamLimits

0xb72e,	// (0x00047fc8) navi_pane_g1_ParamLimits

0x4d05,	// (0x0004159f) navi_pane_g2_ParamLimits

0x4d33,	// (0x000415cd) navi_pane_g3_ParamLimits

0xf3f0,	// (0x0004bc8a) navi_pane_g_ParamLimits

0x4d8d,	// (0x00041627) navi_pane_mv_t1_ParamLimits

0x6f91,	// (0x0004382b) grid_imed_effect_pane_ParamLimits

0x3688,	// (0x0003ff22) aid_placing_vt_slider_lsc

0xaf53,	// (0x000477ed) aid_placing_vt_slider_prt

0xb06d,	// (0x00047907) bg_tb_trans_pane_cp01_ParamLimits

0xd15a,	// (0x000499f4) popup_image_details_window_g1_ParamLimits

0xd16d,	// (0x00049a07) popup_image_details_window_g2_ParamLimits

0xd182,	// (0x00049a1c) popup_image_details_window_g3_ParamLimits

0xd182,	// (0x00049a1c) popup_image_details_window_g3

0xf723,	// (0x0004bfbd) popup_image_details_window_g_ParamLimits

0xd196,	// (0x00049a30) popup_image_details_window_t1_ParamLimits

0xd1a8,	// (0x00049a42) popup_image_details_window_t2_ParamLimits

0xd1c1,	// (0x00049a5b) popup_image_details_window_t3_ParamLimits

0xd1d5,	// (0x00049a6f) popup_image_details_window_t4_ParamLimits

0xd1f0,	// (0x00049a8a) popup_image_details_window_t5_ParamLimits

0xf72a,	// (0x0004bfc4) popup_image_details_window_t_ParamLimits

0x880f,	// (0x000450a9) cl_header_name_pane_ParamLimits

0x880f,	// (0x000450a9) cl_header_name_pane

0x8b77,	// (0x00045411) cl_header_name_pane_t1_ParamLimits

0x8b77,	// (0x00045411) cl_header_name_pane_t1

0x8b8e,	// (0x00045428) cl_header_name_pane_t2_ParamLimits

0x8b8e,	// (0x00045428) cl_header_name_pane_t2

0x8bb8,	// (0x00045452) cl_header_name_pane_t3_ParamLimits

0x8bb8,	// (0x00045452) cl_header_name_pane_t3

0x0002,

0xfb2b,	// (0x0004c3c5) cl_header_name_pane_t_ParamLimits

0xfb2b,	// (0x0004c3c5) cl_header_name_pane_t

0x4d5e,	// (0x000415f8) navi_pane_mv_g2_ParamLimits

0xd9f7,	// (0x0004a291) field_vitu2_entry_pane_g1_ParamLimits

0xda03,	// (0x0004a29d) field_vitu2_entry_pane_g2_ParamLimits

0xda0f,	// (0x0004a2a9) field_vitu2_entry_pane_g3_ParamLimits

0xda0f,	// (0x0004a2a9) field_vitu2_entry_pane_g3

0xf921,	// (0x0004c1bb) field_vitu2_entry_pane_g_ParamLimits

0x7cf5,	// (0x0004458f) cell_vitu2_itu_pane_g1_ParamLimits

0x7d05,	// (0x0004459f) cell_vitu2_itu_pane_g2_ParamLimits

0x7d05,	// (0x0004459f) cell_vitu2_itu_pane_g2

0x0001,

0xf92d,	// (0x0004c1c7) cell_vitu2_itu_pane_g_ParamLimits

0xf92d,	// (0x0004c1c7) cell_vitu2_itu_pane_g

0xb06d,	// (0x00047907) bg_vkb2_func_pane_cp05_ParamLimits

0xb06d,	// (0x00047907) bg_vkb2_func_pane_cp05

0xb06d,	// (0x00047907) bg_vkb2_func_pane_cp03

0xb06d,	// (0x00047907) bg_vkb2_func_pane_cp04

0xb06d,	// (0x00047907) bg_vkb2_func_pane_cp10_ParamLimits

0xb06d,	// (0x00047907) bg_vkb2_func_pane_cp10

0x1974,	// (0x0003e20e) bg_vkb2_func_pane_cp08

0x87b9,	// (0x00045053) bg_vkb2_func_pane_cp06

0x87c7,	// (0x00045061) bg_vkb2_func_pane_cp07

0xdf5d,	// (0x0004a7f7) bg_vkb2_func_pane_cp11_ParamLimits

0xdf5d,	// (0x0004a7f7) bg_vkb2_func_pane_cp11

0xdf72,	// (0x0004a80c) bg_vkb2_func_pane_cp12_ParamLimits

0xdf72,	// (0x0004a80c) bg_vkb2_func_pane_cp12

0xa564,	// (0x00046dfe) bg_vkb2_func_pane_cp09

0xda2f,	// (0x0004a2c9) bg_vkb2_func_pane_g1

0xb123,	// (0x000479bd) bg_vkb2_func_pane_g2

0xda37,	// (0x0004a2d1) bg_vkb2_func_pane_g3

0xda3f,	// (0x0004a2d9) bg_vkb2_func_pane_g4

0xdc8a,	// (0x0004a524) bg_vkb2_func_pane_g5

0xda57,	// (0x0004a2f1) bg_vkb2_func_pane_g6

0xda5f,	// (0x0004a2f9) bg_vkb2_func_pane_g7

0xda4f,	// (0x0004a2e9) bg_vkb2_func_pane_g8

0xb103,	// (0x0004799d) bg_vkb2_func_pane_g9

0x0008,

0xfb32,	// (0x0004c3cc) bg_vkb2_func_pane_g

0x8ac6,	// (0x00045360) blid2_tripm_pane_g6_ParamLimits

0x8ac6,	// (0x00045360) blid2_tripm_pane_g6

0xd899,	// (0x0004a133) mp4_progress_pane_g1

0x8b20,	// (0x000453ba) blid2_tripm_values_pane_ParamLimits

0x8b20,	// (0x000453ba) blid2_tripm_values_pane

0x8bdd,	// (0x00045477) blid2_tripm_values_pane_t1

0x8beb,	// (0x00045485) blid2_tripm_values_pane_t2

0x8bf9,	// (0x00045493) blid2_tripm_values_pane_t3

0x8c07,	// (0x000454a1) blid2_tripm_values_pane_t4

0x8c15,	// (0x000454af) blid2_tripm_values_pane_t5

0x8c23,	// (0x000454bd) blid2_tripm_values_pane_t6

0x8c31,	// (0x000454cb) blid2_tripm_values_pane_t7

0x8c3f,	// (0x000454d9) blid2_tripm_values_pane_t8

0x8c4d,	// (0x000454e7) blid2_tripm_values_pane_t9

0x0008,

0xfb45,	// (0x0004c3df) blid2_tripm_values_pane_t

0x36c8,	// (0x0003ff62) call_video_pane_t1_ParamLimits

0x36e9,	// (0x0003ff83) call_video_pane_t2_ParamLimits

0xf279,	// (0x0004bb13) call_video_pane_t_ParamLimits

0x1502,	// (0x0003dd9c) msg_header_pane_g1_ParamLimits

0xb940,	// (0x000481da) msg_header_pane_g2_ParamLimits

0xb940,	// (0x000481da) msg_header_pane_g2

0x0001,

0xf493,	// (0x0004bd2d) msg_header_pane_g_ParamLimits

0xf493,	// (0x0004bd2d) msg_header_pane_g

0xaceb,	// (0x00047585) main_clock2_pane_ParamLimits

0x6d22,	// (0x000435bc) grid_clock2_toolbar_pane_ParamLimits

0x6d22,	// (0x000435bc) grid_clock2_toolbar_pane

0x6d22,	// (0x000435bc) listscroll_clock2_pane_ParamLimits

0x6d22,	// (0x000435bc) listscroll_clock2_pane

0x6dcc,	// (0x00043666) main_clock2_pane_t3_ParamLimits

0x6dcc,	// (0x00043666) main_clock2_pane_t3

0x6dde,	// (0x00043678) main_clock2_pane_t4_ParamLimits

0x6dde,	// (0x00043678) main_clock2_pane_t4

0xe05d,	// (0x0004a8f7) cell_clock2_toolbar_pane

0xe065,	// (0x0004a8ff) cell_clock2_toolbar_pane_cp01

0xe065,	// (0x0004a8ff) cell_clock2_toolbar_pane_cp02

0xe06d,	// (0x0004a907) cell_clock2_toolbar_pane_cp03

0xe075,	// (0x0004a90f) list_clock2_pane

0xb685,	// (0x00047f1f) scroll_pane_cp10

0xe07d,	// (0x0004a917) list_single_clock2_pane_ParamLimits

0xe07d,	// (0x0004a917) list_single_clock2_pane

0xb7ce,	// (0x00048068) list_highlight_pane_cp08

0xe08a,	// (0x0004a924) list_single_clock2_pane_t1

0xe098,	// (0x0004a932) list_single_clock2_pane_t2

0x0001,

0xfb58,	// (0x0004c3f2) list_single_clock2_pane_t

0xa564,	// (0x00046dfe) bg_button_pane_cp10

0xe0a6,	// (0x0004a940) cell_clock2_toolbar_pane_g1

0x5280,	// (0x00041b1a) aid_main_viewer_pane_g1_ParamLimits

0x5280,	// (0x00041b1a) aid_main_viewer_pane_g1

0x528c,	// (0x00041b26) aid_main_viewer_pane_g2_ParamLimits

0x528c,	// (0x00041b26) aid_main_viewer_pane_g2

0x5298,	// (0x00041b32) aid_main_viewer_pane_g3_ParamLimits

0x5298,	// (0x00041b32) aid_main_viewer_pane_g3

0x52a9,	// (0x00041b43) aid_main_viewer_pane_g4_ParamLimits

0x52a9,	// (0x00041b43) aid_main_viewer_pane_g4

0x0003,

0xf4a4,	// (0x0004bd3e) aid_main_viewer_pane_g_ParamLimits

0xf4a4,	// (0x0004bd3e) aid_main_viewer_pane_g

0x5a36,	// (0x000422d0) main_calc_pane_ParamLimits

0x5a43,	// (0x000422dd) main_dialer2_pane_ParamLimits

0xa564,	// (0x00046dfe) main_cam6_pane

0xa564,	// (0x00046dfe) main_vid6_pane

0x6d2e,	// (0x000435c8) listscroll_gen_pane_cp06_ParamLimits

0x6d2e,	// (0x000435c8) listscroll_gen_pane_cp06

0x6df0,	// (0x0004368a) main_clock2_pane_t5_ParamLimits

0x6df0,	// (0x0004368a) main_clock2_pane_t5

0x6e3b,	// (0x000436d5) aid_call2_pane_cp10_ParamLimits

0x6e4d,	// (0x000436e7) aid_call_pane_cp10_ParamLimits

0xb703,	// (0x00047f9d) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb703,	// (0x00047f9d) popup_clock_analogue_window_cp10_g2_ParamLimits

0x6e5f,	// (0x000436f9) popup_clock_analogue_window_cp10_g3_ParamLimits

0x6e5f,	// (0x000436f9) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb703,	// (0x00047f9d) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7da,	// (0x0004c074) popup_clock_analogue_window_cp10_g_ParamLimits

0x6e71,	// (0x0004370b) popup_clock_analogue_window_cp10_t1_ParamLimits

0x765c,	// (0x00043ef6) cell_dialer2_keypad_pane_g2_ParamLimits

0x765c,	// (0x00043ef6) cell_dialer2_keypad_pane_g2

0x0001,

0xf8c0,	// (0x0004c15a) cell_dialer2_keypad_pane_g_ParamLimits

0xf8c0,	// (0x0004c15a) cell_dialer2_keypad_pane_g

0x7678,	// (0x00043f12) cell_dialer2_keypad_pane_t1

0x8032,	// (0x000448cc) main_cset_text2_pane_ParamLimits

0x8032,	// (0x000448cc) main_cset_text2_pane

0xdec5,	// (0x0004a75f) area_vitu2_query_pane_g1_ParamLimits

0x189f,	// (0x0003e139) area_vitu2_query_pane_g2_ParamLimits

0xfa75,	// (0x0004c30f) area_vitu2_query_pane_g_ParamLimits

0x1950,	// (0x0003e1ea) area_vitu2_query_pane_t7_ParamLimits

0x1950,	// (0x0003e1ea) area_vitu2_query_pane_t7

0x87b9,	// (0x00045053) bg_button_pane_cp018_ParamLimits

0x87c7,	// (0x00045061) bg_button_pane_cp021_ParamLimits

0x1974,	// (0x0003e20e) bg_button_pane_cp022_ParamLimits

0x1974,	// (0x0003e20e) bg_vkb2_func_pane_cp08_ParamLimits

0x87b9,	// (0x00045053) bg_vkb2_func_pane_cp06_ParamLimits

0x87c7,	// (0x00045061) bg_vkb2_func_pane_cp07_ParamLimits

0x1985,	// (0x0003e21f) input_focus_pane_cp09_ParamLimits

0x8c5b,	// (0x000454f5) cam6_autofocus_pane_ParamLimits

0x8c5b,	// (0x000454f5) cam6_autofocus_pane

0x8c7d,	// (0x00045517) cam6_image_uncrop_pane_ParamLimits

0x8c7d,	// (0x00045517) cam6_image_uncrop_pane

0x8caa,	// (0x00045544) cam6_indi_pane_ParamLimits

0x8caa,	// (0x00045544) cam6_indi_pane

0x8cc4,	// (0x0004555e) cam6_mode_pane_ParamLimits

0x8cc4,	// (0x0004555e) cam6_mode_pane

0x8cd8,	// (0x00045572) cam6_timer_pane_ParamLimits

0x8cd8,	// (0x00045572) cam6_timer_pane

0x8ce4,	// (0x0004557e) cam6_zoom_pane_ParamLimits

0x8ce4,	// (0x0004557e) cam6_zoom_pane

0x8cfc,	// (0x00045596) cam6_mode_pane_g1_ParamLimits

0x8cfc,	// (0x00045596) cam6_mode_pane_g1

0x8d08,	// (0x000455a2) cam6_mode_pane_g2_ParamLimits

0x8d08,	// (0x000455a2) cam6_mode_pane_g2

0x8d14,	// (0x000455ae) cam6_mode_pane_g3_ParamLimits

0x8d14,	// (0x000455ae) cam6_mode_pane_g3

0x8d20,	// (0x000455ba) cam6_mode_pane_g4_ParamLimits

0x8d20,	// (0x000455ba) cam6_mode_pane_g4

0x0003,

0xfb5d,	// (0x0004c3f7) cam6_mode_pane_g_ParamLimits

0xfb5d,	// (0x0004c3f7) cam6_mode_pane_g

0xdadc,	// (0x0004a376) bg_tb_trans_pane_cp08_ParamLimits

0xdadc,	// (0x0004a376) bg_tb_trans_pane_cp08

0xe0ae,	// (0x0004a948) cam6_battery_pane_ParamLimits

0xe0ae,	// (0x0004a948) cam6_battery_pane

0xe0c4,	// (0x0004a95e) cam6_indi_pane_g1_ParamLimits

0xe0c4,	// (0x0004a95e) cam6_indi_pane_g1

0xe0d6,	// (0x0004a970) cam6_indi_pane_g2_ParamLimits

0xe0d6,	// (0x0004a970) cam6_indi_pane_g2

0xe0e8,	// (0x0004a982) cam6_indi_pane_g3_ParamLimits

0xe0e8,	// (0x0004a982) cam6_indi_pane_g3

0x0002,

0xfb66,	// (0x0004c400) cam6_indi_pane_g_ParamLimits

0xfb66,	// (0x0004c400) cam6_indi_pane_g

0xe0fa,	// (0x0004a994) cam6_indi_pane_t1_ParamLimits

0xe0fa,	// (0x0004a994) cam6_indi_pane_t1

0x7b31,	// (0x000443cb) cam6_autofocus_pane_g1

0x7b39,	// (0x000443d3) cam6_autofocus_pane_g2

0x7b41,	// (0x000443db) cam6_autofocus_pane_g3

0x7b49,	// (0x000443e3) cam6_autofocus_pane_g4

0x0003,

0xfb6d,	// (0x0004c407) cam6_autofocus_pane_g

0xe120,	// (0x0004a9ba) cam6_timer_pane_g1

0xe128,	// (0x0004a9c2) cam6_timer_pane_t1

0xe136,	// (0x0004a9d0) cam6_zoom_cont_pane

0xe13e,	// (0x0004a9d8) cam6_zoom_pane_g1

0xe146,	// (0x0004a9e0) cam6_zoom_pane_g2

0x8d2c,	// (0x000455c6) cam6_zoom_pane_g3

0x0002,

0xfb76,	// (0x0004c410) cam6_zoom_pane_g

0xcfda,	// (0x00049874) cam6_battery_pane_g1

0xcfda,	// (0x00049874) cam6_battery_pane_g2

0x0001,

0xf6e7,	// (0x0004bf81) cam6_battery_pane_g

0xe14e,	// (0x0004a9e8) cam6_zoom_cont_pane_g1

0xe157,	// (0x0004a9f1) cam6_zoom_cont_pane_g2

0xe160,	// (0x0004a9fa) cam6_zoom_cont_pane_g3

0x0002,

0xfb7d,	// (0x0004c417) cam6_zoom_cont_pane_g

0x8d49,	// (0x000455e3) cam6_mode_pane_cp_ParamLimits

0x8d49,	// (0x000455e3) cam6_mode_pane_cp

0x8ce4,	// (0x0004557e) cam6_zoom_pane_cp_ParamLimits

0x8ce4,	// (0x0004557e) cam6_zoom_pane_cp

0x8d5d,	// (0x000455f7) vid6_image_uncrop_cif_pane_ParamLimits

0x8d5d,	// (0x000455f7) vid6_image_uncrop_cif_pane

0x8d89,	// (0x00045623) vid6_image_uncrop_nhd_pane_ParamLimits

0x8d89,	// (0x00045623) vid6_image_uncrop_nhd_pane

0x8c7d,	// (0x00045517) vid6_image_uncrop_vga_pane_ParamLimits

0x8c7d,	// (0x00045517) vid6_image_uncrop_vga_pane

0x8da6,	// (0x00045640) vid6_image_uncrop_wvga_pane_ParamLimits

0x8da6,	// (0x00045640) vid6_image_uncrop_wvga_pane

0x8dc3,	// (0x0004565d) vid6_indi_pane_ParamLimits

0x8dc3,	// (0x0004565d) vid6_indi_pane

0xdadc,	// (0x0004a376) bg_tb_trans_pane_cp09_ParamLimits

0xdadc,	// (0x0004a376) bg_tb_trans_pane_cp09

0xe178,	// (0x0004aa12) cam6_battery_pane_cp_ParamLimits

0xe178,	// (0x0004aa12) cam6_battery_pane_cp

0xe184,	// (0x0004aa1e) vid6_indi_pane_g1_ParamLimits

0xe184,	// (0x0004aa1e) vid6_indi_pane_g1

0xe196,	// (0x0004aa30) vid6_indi_pane_g2_ParamLimits

0xe196,	// (0x0004aa30) vid6_indi_pane_g2

0xe1a8,	// (0x0004aa42) vid6_indi_pane_g3_ParamLimits

0xe1a8,	// (0x0004aa42) vid6_indi_pane_g3

0xe1bd,	// (0x0004aa57) vid6_indi_pane_g4_ParamLimits

0xe1bd,	// (0x0004aa57) vid6_indi_pane_g4

0xe1d2,	// (0x0004aa6c) vid6_indi_pane_g5_ParamLimits

0xe1d2,	// (0x0004aa6c) vid6_indi_pane_g5

0x0004,

0xfb84,	// (0x0004c41e) vid6_indi_pane_g_ParamLimits

0xfb84,	// (0x0004c41e) vid6_indi_pane_g

0xe1ec,	// (0x0004aa86) vid6_indi_pane_t1_ParamLimits

0xe1ec,	// (0x0004aa86) vid6_indi_pane_t1

0xe202,	// (0x0004aa9c) vid6_indi_pane_t2_ParamLimits

0xe202,	// (0x0004aa9c) vid6_indi_pane_t2

0xe22a,	// (0x0004aac4) vid6_indi_pane_t3_ParamLimits

0xe22a,	// (0x0004aac4) vid6_indi_pane_t3

0xe252,	// (0x0004aaec) vid6_indi_pane_t4_ParamLimits

0xe252,	// (0x0004aaec) vid6_indi_pane_t4

0x0003,

0xfb8f,	// (0x0004c429) vid6_indi_pane_t_ParamLimits

0xfb8f,	// (0x0004c429) vid6_indi_pane_t

0xe276,	// (0x0004ab10) wait_bar_pane_cp08

0x8de6,	// (0x00045680) main_cset_text2_pane_t1_ParamLimits

0x8de6,	// (0x00045680) main_cset_text2_pane_t1

0x8d34,	// (0x000455ce) listscroll_gen_pane_cp06_t1_ParamLimits

0x8d34,	// (0x000455ce) listscroll_gen_pane_cp06_t1

0xa564,	// (0x00046dfe) main_cam6_set_pane

0xd23a,	// (0x00049ad4) bg_tb_trans_pane_cp06_ParamLimits

0x79e5,	// (0x0004427f) cam4_indicators_pane_g1_ParamLimits

0x79f6,	// (0x00044290) cam4_indicators_pane_g2_ParamLimits

0xf8fd,	// (0x0004c197) cam4_indicators_pane_g_ParamLimits

0x7a14,	// (0x000442ae) cam4_indicators_pane_t1_ParamLimits

0xb06d,	// (0x00047907) bg_tb_trans_pane_cp07_ParamLimits

0x7ac5,	// (0x0004435f) vid4_indicators_pane_g1_ParamLimits

0x7ad9,	// (0x00044373) vid4_indicators_pane_g2_ParamLimits

0x7aed,	// (0x00044387) vid4_indicators_pane_g3_ParamLimits

0x7afe,	// (0x00044398) vid4_indicators_pane_g4_ParamLimits

0xf90f,	// (0x0004c1a9) vid4_indicators_pane_g_ParamLimits

0x7b1a,	// (0x000443b4) vid4_indicators_pane_t1_ParamLimits

0x88f7,	// (0x00045191) vid4_progress_pane_g1_ParamLimits

0x8909,	// (0x000451a3) vid4_progress_pane_g2_ParamLimits

0x5306,	// (0x00041ba0) vid4_progress_pane_g3_ParamLimits

0x8919,	// (0x000451b3) vid4_progress_pane_g4_ParamLimits

0xfac0,	// (0x0004c35a) vid4_progress_pane_g_ParamLimits

0x8937,	// (0x000451d1) vid4_progress_pane_t1_ParamLimits

0x894c,	// (0x000451e6) vid4_progress_pane_t2_ParamLimits

0x8962,	// (0x000451fc) vid4_progress_pane_t3_ParamLimits

0xfacb,	// (0x0004c365) vid4_progress_pane_t_ParamLimits

0x8978,	// (0x00045212) wait_bar_pane_cp07_ParamLimits

0x8e20,	// (0x000456ba) main_cam6_set_pane_g2_ParamLimits

0x8e20,	// (0x000456ba) main_cam6_set_pane_g2

0x8e2c,	// (0x000456c6) main_cset6_listscroll_pane_ParamLimits

0x8e2c,	// (0x000456c6) main_cset6_listscroll_pane

0x8e57,	// (0x000456f1) main_cset6_slider_pane_ParamLimits

0x8e57,	// (0x000456f1) main_cset6_slider_pane

0x8e63,	// (0x000456fd) main_cset6_text2_pane_ParamLimits

0x8e63,	// (0x000456fd) main_cset6_text2_pane

0xe285,	// (0x0004ab1f) main_cset6_text_pane

0xe28d,	// (0x0004ab27) main_cset_list_pane_copy1_ParamLimits

0xe28d,	// (0x0004ab27) main_cset_list_pane_copy1

0xe29d,	// (0x0004ab37) scroll_pane_cp028_copy1

0x8e76,	// (0x00045710) cset_list_set_pane_copy1

0x8e8f,	// (0x00045729) aid_position_infowindow_above_copy1

0x8e97,	// (0x00045731) aid_position_infowindow_below_copy1

0x19de,	// (0x0003e278) cset_list_set_pane_g1_copy1

0x1713,	// (0x0003dfad) cset_list_set_pane_g3_copy1_ParamLimits

0x1713,	// (0x0003dfad) cset_list_set_pane_g3_copy1

0x1722,	// (0x0003dfbc) cset_list_set_pane_t1_copy1_ParamLimits

0x1722,	// (0x0003dfbc) cset_list_set_pane_t1_copy1

0xb06d,	// (0x00047907) list_highlight_pane_cp021_copy1_ParamLimits

0xb06d,	// (0x00047907) list_highlight_pane_cp021_copy1

0xe2a6,	// (0x0004ab40) cset6_slider_pane_ParamLimits

0xe2a6,	// (0x0004ab40) cset6_slider_pane

0xe2d2,	// (0x0004ab6c) main_cset6_slider_pane_g1_ParamLimits

0xe2d2,	// (0x0004ab6c) main_cset6_slider_pane_g1

0x8e9f,	// (0x00045739) main_cset6_slider_pane_g2_ParamLimits

0x8e9f,	// (0x00045739) main_cset6_slider_pane_g2

0xe2fa,	// (0x0004ab94) main_cset6_slider_pane_g3_ParamLimits

0xe2fa,	// (0x0004ab94) main_cset6_slider_pane_g3

0x8ec7,	// (0x00045761) main_cset6_slider_pane_g4_ParamLimits

0x8ec7,	// (0x00045761) main_cset6_slider_pane_g4

0x8ed3,	// (0x0004576d) main_cset6_slider_pane_g5_ParamLimits

0x8ed3,	// (0x0004576d) main_cset6_slider_pane_g5

0xdb7a,	// (0x0004a414) main_cset6_slider_pane_g7_ParamLimits

0xdb7a,	// (0x0004a414) main_cset6_slider_pane_g7

0xdb86,	// (0x0004a420) main_cset6_slider_pane_g8_ParamLimits

0xdb86,	// (0x0004a420) main_cset6_slider_pane_g8

0x8ee1,	// (0x0004577b) main_cset6_slider_pane_g9_ParamLimits

0x8ee1,	// (0x0004577b) main_cset6_slider_pane_g9

0x8eed,	// (0x00045787) main_cset6_slider_pane_g10_ParamLimits

0x8eed,	// (0x00045787) main_cset6_slider_pane_g10

0x8ef9,	// (0x00045793) main_cset6_slider_pane_g11_ParamLimits

0x8ef9,	// (0x00045793) main_cset6_slider_pane_g11

0x8f05,	// (0x0004579f) main_cset6_slider_pane_g12_ParamLimits

0x8f05,	// (0x0004579f) main_cset6_slider_pane_g12

0x8f11,	// (0x000457ab) main_cset6_slider_pane_g13_ParamLimits

0x8f11,	// (0x000457ab) main_cset6_slider_pane_g13

0x8f1d,	// (0x000457b7) main_cset6_slider_pane_g14_ParamLimits

0x8f1d,	// (0x000457b7) main_cset6_slider_pane_g14

0x8f29,	// (0x000457c3) main_cset6_slider_pane_g15_ParamLimits

0x8f29,	// (0x000457c3) main_cset6_slider_pane_g15

0x8f41,	// (0x000457db) main_cset6_slider_pane_g16_ParamLimits

0x8f41,	// (0x000457db) main_cset6_slider_pane_g16

0x8f4f,	// (0x000457e9) main_cset6_slider_pane_g17_ParamLimits

0x8f4f,	// (0x000457e9) main_cset6_slider_pane_g17

0x0011,

0xfb98,	// (0x0004c432) main_cset6_slider_pane_g_ParamLimits

0xfb98,	// (0x0004c432) main_cset6_slider_pane_g

0xe306,	// (0x0004aba0) main_cset6_slider_pane_t1_ParamLimits

0xe306,	// (0x0004aba0) main_cset6_slider_pane_t1

0x8f75,	// (0x0004580f) main_cset6_slider_pane_t2_ParamLimits

0x8f75,	// (0x0004580f) main_cset6_slider_pane_t2

0x8fa0,	// (0x0004583a) main_cset6_slider_pane_t3_ParamLimits

0x8fa0,	// (0x0004583a) main_cset6_slider_pane_t3

0x8fcb,	// (0x00045865) main_cset6_slider_pane_t4_ParamLimits

0x8fcb,	// (0x00045865) main_cset6_slider_pane_t4

0x8ff6,	// (0x00045890) main_cset6_slider_pane_t5_ParamLimits

0x8ff6,	// (0x00045890) main_cset6_slider_pane_t5

0xe347,	// (0x0004abe1) main_cset6_slider_pane_t7_ParamLimits

0xe347,	// (0x0004abe1) main_cset6_slider_pane_t7

0x9023,	// (0x000458bd) main_cset6_slider_pane_t8_ParamLimits

0x9023,	// (0x000458bd) main_cset6_slider_pane_t8

0x9047,	// (0x000458e1) main_cset6_slider_pane_t9_ParamLimits

0x9047,	// (0x000458e1) main_cset6_slider_pane_t9

0x906b,	// (0x00045905) main_cset6_slider_pane_t10_ParamLimits

0x906b,	// (0x00045905) main_cset6_slider_pane_t10

0x908f,	// (0x00045929) main_cset6_slider_pane_t11_ParamLimits

0x908f,	// (0x00045929) main_cset6_slider_pane_t11

0xe37d,	// (0x0004ac17) main_cset6_slider_pane_t14_ParamLimits

0xe37d,	// (0x0004ac17) main_cset6_slider_pane_t14

0xe3b6,	// (0x0004ac50) main_cset6_slider_pane_t15_ParamLimits

0xe3b6,	// (0x0004ac50) main_cset6_slider_pane_t15

0x000b,

0xfbbd,	// (0x0004c457) main_cset6_slider_pane_t_ParamLimits

0xfbbd,	// (0x0004c457) main_cset6_slider_pane_t

0xdc3e,	// (0x0004a4d8) cset_slider_pane_g1_copy1

0xdc47,	// (0x0004a4e1) cset_slider_pane_g2_copy1

0xdc50,	// (0x0004a4ea) cset_slider_pane_g3_copy1

0xa564,	// (0x00046dfe) bg_popup_sub_pane_cp011_copy1

0xe3ef,	// (0x0004ac89) main_cset_text_pane_g1_copy1

0xdcdb,	// (0x0004a575) main_cset_text_pane_t1_copy1

0xdce9,	// (0x0004a583) main_cset_text_pane_t2_copy1

0xdcf7,	// (0x0004a591) main_cset_text_pane_t3_copy1

0xdd05,	// (0x0004a59f) main_cset_text_pane_t4_copy1

0xdd13,	// (0x0004a5ad) main_cset_text_pane_t5_copy1

0xe3f7,	// (0x0004ac91) main_cset_text_pane_t6_copy1

0xe405,	// (0x0004ac9f) main_cset_text_pane_t7_copy1

0x90b5,	// (0x0004594f) main_cset_text2_pane_t1_copy1

0xb06d,	// (0x00047907) main_ncimui_pane

0x5a94,	// (0x0004232e) popup_query_ncimui_window_ParamLimits

0x5a94,	// (0x0004232e) popup_query_ncimui_window

0x15c5,	// (0x0003de5f) field_cale_ev2_pane_g4_ParamLimits

0x15c5,	// (0x0003de5f) field_cale_ev2_pane_g4

0x737c,	// (0x00043c16) cell_video_dialer_keypad_pane_g2_ParamLimits

0x737c,	// (0x00043c16) cell_video_dialer_keypad_pane_g2

0x0001,

0xf89b,	// (0x0004c135) cell_video_dialer_keypad_pane_g_ParamLimits

0xf89b,	// (0x0004c135) cell_video_dialer_keypad_pane_g

0x7394,	// (0x00043c2e) cell_video_dialer_keypad_pane_t1

0xa564,	// (0x00046dfe) bg_popup_window_pane_cp012

0xb52c,	// (0x00047dc6) heading_pane_cp06

0xe431,	// (0x0004accb) ncim_query_content_pane

0xa564,	// (0x00046dfe) bg_popup_heading_pane_cp01

0xe439,	// (0x0004acd3) ncim_heading_pane_t1

0xe447,	// (0x0004ace1) ncim_indicator_popup_pane

0xe459,	// (0x0004acf3) ncim_query_button_pane

0xe46d,	// (0x0004ad07) ncim_query_content_pane_t1

0xe47f,	// (0x0004ad19) ncim_query_content_pane_t2

0x0005,

0xfc01,	// (0x0004c49b) ncim_query_content_pane_t

0xe4b9,	// (0x0004ad53) ncim_query_list_pane

0xe4cb,	// (0x0004ad65) ncim_query_popup_pane

0xe447,	// (0x0004ace1) ncim_indicator_popup_pane_ParamLimits

0x920f,	// (0x00045aa9) ncim_query_content_pane_g1_ParamLimits

0x920f,	// (0x00045aa9) ncim_query_content_pane_g1

0xe46d,	// (0x0004ad07) ncim_query_content_pane_t1_ParamLimits

0xe47f,	// (0x0004ad19) ncim_query_content_pane_t2_ParamLimits

0x921b,	// (0x00045ab5) ncim_query_content_pane_t3_ParamLimits

0x921b,	// (0x00045ab5) ncim_query_content_pane_t3

0x9238,	// (0x00045ad2) ncim_query_content_pane_t4_ParamLimits

0x9238,	// (0x00045ad2) ncim_query_content_pane_t4

0x9255,	// (0x00045aef) ncim_query_content_pane_t5_ParamLimits

0x9255,	// (0x00045aef) ncim_query_content_pane_t5

0xe491,	// (0x0004ad2b) ncim_query_content_pane_t6_ParamLimits

0xe491,	// (0x0004ad2b) ncim_query_content_pane_t6

0xfc01,	// (0x0004c49b) ncim_query_content_pane_t_ParamLimits

0xe4b9,	// (0x0004ad53) ncim_query_list_pane_ParamLimits

0xe4cb,	// (0x0004ad65) ncim_query_popup_pane_ParamLimits

0xe4df,	// (0x0004ad79) wait_bar_pane_cp04

0xa564,	// (0x00046dfe) input_focus_pane_cp011

0xe4e7,	// (0x0004ad81) ncim_query_popup_pane_t1

0xe4f5,	// (0x0004ad8f) ncim_list_query_list_pane_ParamLimits

0xe4f5,	// (0x0004ad8f) ncim_list_query_list_pane

0xa564,	// (0x00046dfe) bg_button_pane_cp027

0xe508,	// (0x0004ada2) ncim_query_button_pane_g1

0xa564,	// (0x00046dfe) list_highlight_pane_cp012

0xe512,	// (0x0004adac) ncim_list_query_list_pane_g1

0xe51a,	// (0x0004adb4) ncim_list_query_list_pane_t1

0x7a05,	// (0x0004429f) cam4_indicators_pane_g3_ParamLimits

0x7a05,	// (0x0004429f) cam4_indicators_pane_g3

0x7b0a,	// (0x000443a4) vid4_indicators_pane_g5_ParamLimits

0x7b0a,	// (0x000443a4) vid4_indicators_pane_g5

0x8928,	// (0x000451c2) vid4_progress_pane_g5_ParamLimits

0x8928,	// (0x000451c2) vid4_progress_pane_g5

0x90fb,	// (0x00045995) main_ncimui_pane_g1

0x9163,	// (0x000459fd) ncimui_group_query_pane_ParamLimits

0x9163,	// (0x000459fd) ncimui_group_query_pane

0x91ab,	// (0x00045a45) ncimui_list_pane_ParamLimits

0x91ab,	// (0x00045a45) ncimui_list_pane

0x91d2,	// (0x00045a6c) ncimui_text_pane_ParamLimits

0x91d2,	// (0x00045a6c) ncimui_text_pane

0x9272,	// (0x00045b0c) ncimui_text_pane_t1_ParamLimits

0x9272,	// (0x00045b0c) ncimui_text_pane_t1

0xe528,	// (0x0004adc2) ncimui_list_single_graphic_pane_ParamLimits

0xe528,	// (0x0004adc2) ncimui_list_single_graphic_pane

0x9291,	// (0x00045b2b) ncimui_query_pane_ParamLimits

0x9291,	// (0x00045b2b) ncimui_query_pane

0xa564,	// (0x00046dfe) list_highlight_pane_cp013

0xe538,	// (0x0004add2) ncim_list_query_list_pane_t1_copy1

0xe512,	// (0x0004adac) ncim_list_single_graphic_pane_g1

0xe546,	// (0x0004ade0) ncim_query_button_pane_cp01

0xe552,	// (0x0004adec) ncim_query_entry_pane_ParamLimits

0xe552,	// (0x0004adec) ncim_query_entry_pane

0xe565,	// (0x0004adff) ncimui_query_pane_g1

0xe571,	// (0x0004ae0b) ncimui_query_pane_t1_ParamLimits

0xe571,	// (0x0004ae0b) ncimui_query_pane_t1

0xb06d,	// (0x00047907) input_focus_pane_cp012

0xe58a,	// (0x0004ae24) ncim_query_entry_pane_t1

0xaceb,	// (0x00047585) main_im_pane_ParamLimits

0xb06d,	// (0x00047907) main_mobtv_pane_ParamLimits

0xb06d,	// (0x00047907) main_mobtv_pane

0x8f5d,	// (0x000457f7) main_cset6_slider_pane_g18_ParamLimits

0x8f5d,	// (0x000457f7) main_cset6_slider_pane_g18

0x8f69,	// (0x00045803) main_cset6_slider_pane_g19_ParamLimits

0x8f69,	// (0x00045803) main_cset6_slider_pane_g19

0xda0f,	// (0x0004a2a9) bg_main_mobtv_pane_ParamLimits

0xda0f,	// (0x0004a2a9) bg_main_mobtv_pane

0x92a4,	// (0x00045b3e) main_mobtv_info_pane

0x92af,	// (0x00045b49) main_mobtv_loading_pane_ParamLimits

0x92af,	// (0x00045b49) main_mobtv_loading_pane

0xe59c,	// (0x0004ae36) main_mobtv_pg_channel_list_pane

0xe5a6,	// (0x0004ae40) main_mobtv_pg_hdr_pane

0x92bc,	// (0x00045b56) main_mobtv_programe_curr_pane_ParamLimits

0x92bc,	// (0x00045b56) main_mobtv_programe_curr_pane

0x92c9,	// (0x00045b63) main_mobtv_programe_next_pane_ParamLimits

0x92c9,	// (0x00045b63) main_mobtv_programe_next_pane

0xe5af,	// (0x0004ae49) popup_mobtv_noti_window

0xcfda,	// (0x00049874) main_tv_pg_hdr_pane_g1

0xe5b7,	// (0x0004ae51) main_tv_pg_hdr_pane_g2

0xe5bf,	// (0x0004ae59) main_tv_pg_hdr_pane_g3

0xe5c7,	// (0x0004ae61) main_tv_pg_hdr_pane_g4

0xe5cf,	// (0x0004ae69) main_tv_pg_hdr_pane_g5

0xe5d9,	// (0x0004ae73) main_tv_pg_hdr_pane_g6

0xe5e3,	// (0x0004ae7d) main_tv_pg_hdr_pane_g7

0xe5ed,	// (0x0004ae87) main_tv_pg_hdr_pane_g8

0xe5f7,	// (0x0004ae91) main_tv_pg_hdr_pane_g9

0xe601,	// (0x0004ae9b) main_tv_pg_hdr_pane_g10

0xe60b,	// (0x0004aea5) main_tv_pg_hdr_pane_g11

0x000a,

0xfc0e,	// (0x0004c4a8) main_tv_pg_hdr_pane_g

0xe615,	// (0x0004aeaf) main_tv_pg_hdr_pane_t1

0xe623,	// (0x0004aebd) main_tv_pg_hdr_pane_t2

0xe631,	// (0x0004aecb) main_tv_pg_hdr_pane_t3

0xe641,	// (0x0004aedb) main_tv_pg_hdr_pane_t4

0xe651,	// (0x0004aeeb) main_tv_pg_hdr_pane_t5

0x0004,

0xfc25,	// (0x0004c4bf) main_tv_pg_hdr_pane_t

0xe661,	// (0x0004aefb) single_mobtv_pg_channel_pane_ParamLimits

0xe661,	// (0x0004aefb) single_mobtv_pg_channel_pane

0xe673,	// (0x0004af0d) single_mobtv_pg_channel_table_pane

0xe67c,	// (0x0004af16) single_mobtv_pg_channel_thumb_pane

0xe685,	// (0x0004af1f) single_tv_pg_channel_pane_g1

0xe68e,	// (0x0004af28) single_tv_pg_channel_pane_g2

0x0001,

0xfc30,	// (0x0004c4ca) single_tv_pg_channel_pane_g

0xd23a,	// (0x00049ad4) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xd23a,	// (0x00049ad4) bg_single_mobtv_pg_channel_thumb_pane

0xe697,	// (0x0004af31) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe697,	// (0x0004af31) single_mobtv_pg_channel_thumb_pane_g1

0xe6a5,	// (0x0004af3f) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe6a5,	// (0x0004af3f) single_mobtv_pg_channel_thumb_pane_g2

0xe6b1,	// (0x0004af4b) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe6b1,	// (0x0004af4b) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc35,	// (0x0004c4cf) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc35,	// (0x0004c4cf) single_mobtv_pg_channel_thumb_pane_g

0xe6bd,	// (0x0004af57) single_mobtv_pg_channel_thumb_pane_t1

0xe6cb,	// (0x0004af65) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc3c,	// (0x0004c4d6) single_mobtv_pg_channel_thumb_pane_t

0xcfda,	// (0x00049874) bg_single_mobtv_pg_channel_table_pane_g1

0xcfda,	// (0x00049874) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6e7,	// (0x0004bf81) bg_single_mobtv_pg_channel_table_pane_g

0xe6d9,	// (0x0004af73) single_mobtv_pg_channel_table_pane_t1

0xe6e7,	// (0x0004af81) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc41,	// (0x0004c4db) single_mobtv_pg_channel_table_pane_t

0x92de,	// (0x00045b78) main_mobtv_info_pane_g1_ParamLimits

0x92de,	// (0x00045b78) main_mobtv_info_pane_g1

0x92fa,	// (0x00045b94) main_mobtv_info_pane_t1_ParamLimits

0x92fa,	// (0x00045b94) main_mobtv_info_pane_t1

0x9372,	// (0x00045c0c) main_mobtv_info_pane_t2_ParamLimits

0x9372,	// (0x00045c0c) main_mobtv_info_pane_t2

0x0002,

0xfc4b,	// (0x0004c4e5) main_mobtv_info_pane_t_ParamLimits

0xfc4b,	// (0x0004c4e5) main_mobtv_info_pane_t

0x9401,	// (0x00045c9b) wait_bar_pane_cp05

0x9413,	// (0x00045cad) main_mobtv_loading_pane_g1_ParamLimits

0x9413,	// (0x00045cad) main_mobtv_loading_pane_g1

0x9421,	// (0x00045cbb) main_mobtv_loading_pane_g2_ParamLimits

0x9421,	// (0x00045cbb) main_mobtv_loading_pane_g2

0x942d,	// (0x00045cc7) main_mobtv_loading_pane_g3_ParamLimits

0x942d,	// (0x00045cc7) main_mobtv_loading_pane_g3

0x0002,

0xfc52,	// (0x0004c4ec) main_mobtv_loading_pane_g_ParamLimits

0xfc52,	// (0x0004c4ec) main_mobtv_loading_pane_g

0xe6f5,	// (0x0004af8f) main_mobtv_loading_pane_t1_ParamLimits

0xe6f5,	// (0x0004af8f) main_mobtv_loading_pane_t1

0xe70d,	// (0x0004afa7) main_mobtv_loading_pane_t2_ParamLimits

0xe70d,	// (0x0004afa7) main_mobtv_loading_pane_t2

0x0001,

0xfc59,	// (0x0004c4f3) main_mobtv_loading_pane_t_ParamLimits

0xfc59,	// (0x0004c4f3) main_mobtv_loading_pane_t

0x943b,	// (0x00045cd5) wait_bar_pane_cp06_ParamLimits

0x943b,	// (0x00045cd5) wait_bar_pane_cp06

0xe731,	// (0x0004afcb) main_mobtv_programe_curr_pane_t1

0xe73f,	// (0x0004afd9) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc5e,	// (0x0004c4f8) main_mobtv_programe_curr_pane_t

0xe74d,	// (0x0004afe7) main_mobtv_programe_next_pane_t1

0xe75b,	// (0x0004aff5) main_mobtv_programe_next_pane_t2

0xe769,	// (0x0004b003) main_mobtv_programe_next_pane_t3

0x0002,

0xfc63,	// (0x0004c4fd) main_mobtv_programe_next_pane_t

0xa564,	// (0x00046dfe) bg_popup_mobtv_noti_window_pane

0xe777,	// (0x0004b011) popup_mobtv_noti_window_g1

0xe77f,	// (0x0004b019) popup_mobtv_noti_window_t1

0xe78d,	// (0x0004b027) popup_mobtv_noti_window_t2

0x0001,

0xfc6a,	// (0x0004c504) popup_mobtv_noti_window_t

0xcfda,	// (0x00049874) bg_popup_mobtv_noti_window_pane_g1

0xa564,	// (0x00046dfe) sc_clock_pane

0xa564,	// (0x00046dfe) main_fs_bigclock_pane

0x8b0e,	// (0x000453a8) blid2_tripm_pane_t4_ParamLimits

0x8b0e,	// (0x000453a8) blid2_tripm_pane_t4

0x9447,	// (0x00045ce1) sc_clock_pane_g1_ParamLimits

0x9447,	// (0x00045ce1) sc_clock_pane_g1

0x9455,	// (0x00045cef) sc_clock_pane_t1_ParamLimits

0x9455,	// (0x00045cef) sc_clock_pane_t1

0x9468,	// (0x00045d02) sc_clock_pane_t2_ParamLimits

0x9468,	// (0x00045d02) sc_clock_pane_t2

0x947a,	// (0x00045d14) sc_clock_pane_t3_ParamLimits

0x947a,	// (0x00045d14) sc_clock_pane_t3

0x0004,

0xfc6f,	// (0x0004c509) sc_clock_pane_t_ParamLimits

0xfc6f,	// (0x0004c509) sc_clock_pane_t

0x9c99,	// (0x00046533) main_fs_bigclock_indicator_pane_ParamLimits

0x9c99,	// (0x00046533) main_fs_bigclock_indicator_pane

0x9515,	// (0x00045daf) main_fs_bigclock_pane_g1_ParamLimits

0x9515,	// (0x00045daf) main_fs_bigclock_pane_g1

0x9ca5,	// (0x0004653f) main_fs_bigclock_pane_t1_ParamLimits

0x9ca5,	// (0x0004653f) main_fs_bigclock_pane_t1

0x9cb7,	// (0x00046551) main_fs_bigclock_pane_t2_ParamLimits

0x9cb7,	// (0x00046551) main_fs_bigclock_pane_t2

0x9cc9,	// (0x00046563) main_fs_bigclock_pane_t3_ParamLimits

0x9cc9,	// (0x00046563) main_fs_bigclock_pane_t3

0x0002,

0xfe73,	// (0x0004c70d) main_fs_bigclock_pane_t_ParamLimits

0xfe73,	// (0x0004c70d) main_fs_bigclock_pane_t

0xf034,	// (0x0004b8ce) main_fs_bigclock_indicator_pane_g1

0xe461,	// (0x0004acfb) ncim_query_content_pane_g2_ParamLimits

0xe461,	// (0x0004acfb) ncim_query_content_pane_g2

0x0001,

0xfbfc,	// (0x0004c496) ncim_query_content_pane_g_ParamLimits

0xfbfc,	// (0x0004c496) ncim_query_content_pane_g

0x948e,	// (0x00045d28) sc_clock_pane_t4_ParamLimits

0x948e,	// (0x00045d28) sc_clock_pane_t4

0xb06d,	// (0x00047907) main_radioblah_pane

0xd980,	// (0x0004a21a) cell_call4_button_pane_t1_copy1_ParamLimits

0xd980,	// (0x0004a21a) cell_call4_button_pane_t1_copy1

0x9115,	// (0x000459af) main_ncimui_pane_t1_ParamLimits

0x9115,	// (0x000459af) main_ncimui_pane_t1

0x912f,	// (0x000459c9) main_ncimui_pane_t2_ParamLimits

0x912f,	// (0x000459c9) main_ncimui_pane_t2

0x0002,

0xfbf5,	// (0x0004c48f) main_ncimui_pane_t_ParamLimits

0xfbf5,	// (0x0004c48f) main_ncimui_pane_t

0xe8da,	// (0x0004b174) main_radioblah_anim_pane_ParamLimits

0xe8da,	// (0x0004b174) main_radioblah_anim_pane

0xe8eb,	// (0x0004b185) main_radioblah_info_pane_ParamLimits

0xe8eb,	// (0x0004b185) main_radioblah_info_pane

0xe8ff,	// (0x0004b199) main_radioblah_pane_t1_ParamLimits

0xe8ff,	// (0x0004b199) main_radioblah_pane_t1

0xe91b,	// (0x0004b1b5) main_radioblah_pane_t2_ParamLimits

0xe91b,	// (0x0004b1b5) main_radioblah_pane_t2

0x0003,

0xfc90,	// (0x0004c52a) main_radioblah_pane_t_ParamLimits

0xfc90,	// (0x0004c52a) main_radioblah_pane_t

0x9567,	// (0x00045e01) main_radioblah_rocker_ctrl_pane_ParamLimits

0x9567,	// (0x00045e01) main_radioblah_rocker_ctrl_pane

0xe963,	// (0x0004b1fd) main_radioblah_info_pane_t1_ParamLimits

0xe963,	// (0x0004b1fd) main_radioblah_info_pane_t1

0x95ac,	// (0x00045e46) main_radioblah_info_pane_t2_ParamLimits

0x95ac,	// (0x00045e46) main_radioblah_info_pane_t2

0x0003,

0xfc99,	// (0x0004c533) main_radioblah_info_pane_t_ParamLimits

0xfc99,	// (0x0004c533) main_radioblah_info_pane_t

0xcfda,	// (0x00049874) main_radioblah_rocker_ctrl_pane_g1

0x965c,	// (0x00045ef6) main_radioblah_rocker_ctrl_pane_g2

0x9664,	// (0x00045efe) main_radioblah_rocker_ctrl_pane_g3

0x966c,	// (0x00045f06) main_radioblah_rocker_ctrl_pane_g4

0x9674,	// (0x00045f0e) main_radioblah_rocker_ctrl_pane_g5

0x967c,	// (0x00045f16) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfca2,	// (0x0004c53c) main_radioblah_rocker_ctrl_pane_g

0x90b5,	// (0x0004594f) main_cset_text2_pane_t1_copy1_ParamLimits

0x7933,	// (0x000441cd) cam4_image_uncrop_qvga_pane

0x7a7a,	// (0x00044314) vid4_image_uncrop_qcif_pane

0x8c9c,	// (0x00045536) cam6_image_uncrop_qvga_pane_ParamLimits

0x8c9c,	// (0x00045536) cam6_image_uncrop_qvga_pane

0xe168,	// (0x0004aa02) vid6_image_uncrop_qcif_pane_ParamLimits

0xe168,	// (0x0004aa02) vid6_image_uncrop_qcif_pane

0xa564,	// (0x00046dfe) bg_popup_preview_window_pane_cp03

0xe413,	// (0x0004acad) list_cset_text2_pane

0xe41b,	// (0x0004acb5) main_cset6_text2_pane_g1

0xe423,	// (0x0004acbd) main_cset6_text2_pane_t1

0x9684,	// (0x00045f1e) list_cset_text2_pane_t1_ParamLimits

0x9684,	// (0x00045f1e) list_cset_text2_pane_t1

0xb06d,	// (0x00047907) main_radioblah_pane_ParamLimits

0x93ed,	// (0x00045c87) main_mobtv_info_pane_t3_ParamLimits

0x93ed,	// (0x00045c87) main_mobtv_info_pane_t3

0x9555,	// (0x00045def) main_radioblah_pane_g1

0x9580,	// (0x00045e1a) main_radioblah_info_pane_g1

0x9601,	// (0x00045e9b) main_radioblah_info_pane_t3_ParamLimits

0x9601,	// (0x00045e9b) main_radioblah_info_pane_t3

0x4786,	// (0x00041020) highlight_cell_cale_month_pane_ParamLimits

0x4786,	// (0x00041020) highlight_cell_cale_month_pane

0xa564,	// (0x00046dfe) main_phob_fisheye_pane

0xd316,	// (0x00049bb0) scroll_pane_cp0031_ParamLimits

0xd316,	// (0x00049bb0) scroll_pane_cp0031

0xe276,	// (0x0004ab10) wait_bar_pane_cp08_ParamLimits

0x8e76,	// (0x00045710) cset_list_set_pane_copy1_ParamLimits

0xe99d,	// (0x0004b237) highlight_cell_cale_month_pane_g1

0x96ab,	// (0x00045f45) highlight_cell_cale_month_pane_t1

0xdf19,	// (0x0004a7b3) list_gen_pane_cp01

0xdb65,	// (0x0004a3ff) scroll_pane_01

0xab60,	// (0x000473fa) list_single_double_fisheye_pane

0x1ab7,	// (0x0003e351) list_double_fisheye_pane_g1_ParamLimits

0x1ab7,	// (0x0003e351) list_double_fisheye_pane_g1

0x1ac3,	// (0x0003e35d) list_double_fisheye_pane_g2_ParamLimits

0x1ac3,	// (0x0003e35d) list_double_fisheye_pane_g2

0xab69,	// (0x00047403) list_double_fisheye_pane_g3_ParamLimits

0xab69,	// (0x00047403) list_double_fisheye_pane_g3

0x0004,

0xfcaf,	// (0x0004c549) list_double_fisheye_pane_g_ParamLimits

0xfcaf,	// (0x0004c549) list_double_fisheye_pane_g

0x1af4,	// (0x0003e38e) list_double_fisheye_pane_t1_ParamLimits

0x1af4,	// (0x0003e38e) list_double_fisheye_pane_t1

0x1b0f,	// (0x0003e3a9) list_double_fisheye_pane_t2_ParamLimits

0x1b0f,	// (0x0003e3a9) list_double_fisheye_pane_t2

0x0001,

0xfcba,	// (0x0004c554) list_double_fisheye_pane_t_ParamLimits

0xfcba,	// (0x0004c554) list_double_fisheye_pane_t

0xa564,	// (0x00046dfe) main_call5_pane

0x94b4,	// (0x00045d4e) sc_swipe_pane_ParamLimits

0x94b4,	// (0x00045d4e) sc_swipe_pane

0x96c5,	// (0x00045f5f) call5_image_pane_ParamLimits

0x96c5,	// (0x00045f5f) call5_image_pane

0x96d5,	// (0x00045f6f) call5_swipe_1_pane_ParamLimits

0x96d5,	// (0x00045f6f) call5_swipe_1_pane

0x96e1,	// (0x00045f7b) call5_swipe_2_pane_ParamLimits

0x96e1,	// (0x00045f7b) call5_swipe_2_pane

0x96fb,	// (0x00045f95) popup_call5_audio_first_window_ParamLimits

0x96fb,	// (0x00045f95) popup_call5_audio_first_window

0xd23a,	// (0x00049ad4) call5_swipe_1_pane_g1_ParamLimits

0xd23a,	// (0x00049ad4) call5_swipe_1_pane_g1

0xe9a5,	// (0x0004b23f) call5_swipe_1_pane_g2_ParamLimits

0xe9a5,	// (0x0004b23f) call5_swipe_1_pane_g2

0x0001,

0xfcbf,	// (0x0004c559) call5_swipe_1_pane_g_ParamLimits

0xfcbf,	// (0x0004c559) call5_swipe_1_pane_g

0xe9b1,	// (0x0004b24b) call5_swipe_1_pane_t1_ParamLimits

0xe9b1,	// (0x0004b24b) call5_swipe_1_pane_t1

0xd23a,	// (0x00049ad4) call5_swipe_2_pane_g1_ParamLimits

0xd23a,	// (0x00049ad4) call5_swipe_2_pane_g1

0xe9c6,	// (0x0004b260) call5_swipe_2_pane_g2_ParamLimits

0xe9c6,	// (0x0004b260) call5_swipe_2_pane_g2

0x0001,

0xfcc4,	// (0x0004c55e) call5_swipe_2_pane_g_ParamLimits

0xfcc4,	// (0x0004c55e) call5_swipe_2_pane_g

0xe9d2,	// (0x0004b26c) call5_swipe_2_pane_t1_ParamLimits

0xe9d2,	// (0x0004b26c) call5_swipe_2_pane_t1

0xe9e7,	// (0x0004b281) sc_swipe_pane_g1_ParamLimits

0xe9e7,	// (0x0004b281) sc_swipe_pane_g1

0xe9f4,	// (0x0004b28e) sc_swipe_pane_g2_ParamLimits

0xe9f4,	// (0x0004b28e) sc_swipe_pane_g2

0x0001,

0xfcc9,	// (0x0004c563) sc_swipe_pane_g_ParamLimits

0xfcc9,	// (0x0004c563) sc_swipe_pane_g

0xea00,	// (0x0004b29a) sc_swipe_pane_t1_ParamLimits

0xea00,	// (0x0004b29a) sc_swipe_pane_t1

0xa564,	// (0x00046dfe) main_cmail_launcher_pane

0x9709,	// (0x00045fa3) aid_size_cell_cmail_l_ParamLimits

0x9709,	// (0x00045fa3) aid_size_cell_cmail_l

0x9719,	// (0x00045fb3) grid_cmail_l_pane_ParamLimits

0x9719,	// (0x00045fb3) grid_cmail_l_pane

0x9729,	// (0x00045fc3) cell_cmail_l_pane_ParamLimits

0x9729,	// (0x00045fc3) cell_cmail_l_pane

0x973d,	// (0x00045fd7) cell_cmail_l_pane_g1_ParamLimits

0x973d,	// (0x00045fd7) cell_cmail_l_pane_g1

0x974e,	// (0x00045fe8) cell_cmail_l_pane_t1_ParamLimits

0x974e,	// (0x00045fe8) cell_cmail_l_pane_t1

0xea15,	// (0x0004b2af) cell_cmail_l_pane_t2_ParamLimits

0xea15,	// (0x0004b2af) cell_cmail_l_pane_t2

0x0001,

0xfcce,	// (0x0004c568) cell_cmail_l_pane_t_ParamLimits

0xfcce,	// (0x0004c568) cell_cmail_l_pane_t

0xb06d,	// (0x00047907) grid_highlight_pane_cp018_ParamLimits

0xb06d,	// (0x00047907) grid_highlight_pane_cp018

0x26ab,	// (0x0003ef45) main2_pane_ParamLimits

0x26ab,	// (0x0003ef45) main2_pane

0xad96,	// (0x00047630) popup_sp_fs_action_menu_bg_pane_g1

0xad9e,	// (0x00047638) popup_sp_fs_action_menu_bg_pane_g2

0xada6,	// (0x00047640) popup_sp_fs_action_menu_bg_pane_g3

0xadae,	// (0x00047648) popup_sp_fs_action_menu_bg_pane_g4

0xadb6,	// (0x00047650) popup_sp_fs_action_menu_bg_pane_g5

0xadbe,	// (0x00047658) popup_sp_fs_action_menu_bg_pane_g6

0xadc6,	// (0x00047660) popup_sp_fs_action_menu_bg_pane_g7

0xadce,	// (0x00047668) popup_sp_fs_action_menu_bg_pane_g8

0xadd6,	// (0x00047670) popup_sp_fs_action_menu_bg_pane_g9

0xadde,	// (0x00047678) popup_sp_fs_action_menu_bg_pane_g10

0xadde,	// (0x00047678) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf193,	// (0x0004ba2d) popup_sp_fs_action_menu_bg_pane_g

0x1293,	// (0x0003db2d) list_medium_line_x2_t3_g3_g1_ParamLimits

0x1293,	// (0x0003db2d) list_medium_line_x2_t3_g3_g1

0x129f,	// (0x0003db39) list_medium_line_x2_t3_g3_g2_ParamLimits

0x129f,	// (0x0003db39) list_medium_line_x2_t3_g3_g2

0x12ab,	// (0x0003db45) list_medium_line_x2_t3_g3_g3_ParamLimits

0x12ab,	// (0x0003db45) list_medium_line_x2_t3_g3_g3

0x0002,

0xf243,	// (0x0004badd) list_medium_line_x2_t3_g3_g_ParamLimits

0xf243,	// (0x0004badd) list_medium_line_x2_t3_g3_g

0x12b7,	// (0x0003db51) list_medium_line_x2_t3_g3_t1_ParamLimits

0x12b7,	// (0x0003db51) list_medium_line_x2_t3_g3_t1

0x12cc,	// (0x0003db66) list_medium_line_x2_t3_g3_t2_ParamLimits

0x12cc,	// (0x0003db66) list_medium_line_x2_t3_g3_t2

0x12de,	// (0x0003db78) list_medium_line_x2_t3_g3_t3_ParamLimits

0x12de,	// (0x0003db78) list_medium_line_x2_t3_g3_t3

0x0002,

0xf24a,	// (0x0004bae4) list_medium_line_x2_t3_g3_t_ParamLimits

0xf24a,	// (0x0004bae4) list_medium_line_x2_t3_g3_t

0x1293,	// (0x0003db2d) list_medium_line_x2_t3_g2_g1_ParamLimits

0x1293,	// (0x0003db2d) list_medium_line_x2_t3_g2_g1

0x12ab,	// (0x0003db45) list_medium_line_x2_t3_g2_g2_ParamLimits

0x12ab,	// (0x0003db45) list_medium_line_x2_t3_g2_g2

0x0001,

0xf251,	// (0x0004baeb) list_medium_line_x2_t3_g2_g_ParamLimits

0xf251,	// (0x0004baeb) list_medium_line_x2_t3_g2_g

0x12f3,	// (0x0003db8d) list_medium_line_x2_t3_g2_t1_ParamLimits

0x12f3,	// (0x0003db8d) list_medium_line_x2_t3_g2_t1

0x1309,	// (0x0003dba3) list_medium_line_x2_t3_g2_t2_ParamLimits

0x1309,	// (0x0003dba3) list_medium_line_x2_t3_g2_t2

0x12de,	// (0x0003db78) list_medium_line_x2_t3_g2_t3_ParamLimits

0x12de,	// (0x0003db78) list_medium_line_x2_t3_g2_t3

0x0002,

0xf256,	// (0x0004baf0) list_medium_line_x2_t3_g2_t_ParamLimits

0xf256,	// (0x0004baf0) list_medium_line_x2_t3_g2_t

0x1293,	// (0x0003db2d) list_medium_line_x2_t4_g4_g1_ParamLimits

0x1293,	// (0x0003db2d) list_medium_line_x2_t4_g4_g1

0x131b,	// (0x0003dbb5) list_medium_line_x2_t4_g4_g2_ParamLimits

0x131b,	// (0x0003dbb5) list_medium_line_x2_t4_g4_g2

0x129f,	// (0x0003db39) list_medium_line_x2_t4_g4_g3_ParamLimits

0x129f,	// (0x0003db39) list_medium_line_x2_t4_g4_g3

0x1327,	// (0x0003dbc1) list_medium_line_x2_t4_g4_g4_ParamLimits

0x1327,	// (0x0003dbc1) list_medium_line_x2_t4_g4_g4

0x0003,

0xf25d,	// (0x0004baf7) list_medium_line_x2_t4_g4_g_ParamLimits

0xf25d,	// (0x0004baf7) list_medium_line_x2_t4_g4_g

0x1333,	// (0x0003dbcd) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1333,	// (0x0003dbcd) list_medium_line_x2_t4_g4_t1

0x134a,	// (0x0003dbe4) list_medium_line_x2_t4_g4_t2_ParamLimits

0x134a,	// (0x0003dbe4) list_medium_line_x2_t4_g4_t2

0x135f,	// (0x0003dbf9) list_medium_line_x2_t4_g4_t3_ParamLimits

0x135f,	// (0x0003dbf9) list_medium_line_x2_t4_g4_t3

0x1371,	// (0x0003dc0b) list_medium_line_x2_t4_g4_t4_ParamLimits

0x1371,	// (0x0003dc0b) list_medium_line_x2_t4_g4_t4

0x0003,

0xf266,	// (0x0004bb00) list_medium_line_x2_t4_g4_t_ParamLimits

0xf266,	// (0x0004bb00) list_medium_line_x2_t4_g4_t

0x1293,	// (0x0003db2d) list_medium_line_x2_t2_g4_g1_ParamLimits

0x1293,	// (0x0003db2d) list_medium_line_x2_t2_g4_g1

0x131b,	// (0x0003dbb5) list_medium_line_x2_t2_g4_g2_ParamLimits

0x131b,	// (0x0003dbb5) list_medium_line_x2_t2_g4_g2

0x129f,	// (0x0003db39) list_medium_line_x2_t2_g4_g3_ParamLimits

0x129f,	// (0x0003db39) list_medium_line_x2_t2_g4_g3

0x12ab,	// (0x0003db45) list_medium_line_x2_t2_g4_g4_ParamLimits

0x12ab,	// (0x0003db45) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2cd,	// (0x0004bb67) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2cd,	// (0x0004bb67) list_medium_line_x2_t2_g4_g

0x1383,	// (0x0003dc1d) list_medium_line_x2_t2_g4_t1_ParamLimits

0x1383,	// (0x0003dc1d) list_medium_line_x2_t2_g4_t1

0x12de,	// (0x0003db78) list_medium_line_x2_t2_g4_t2_ParamLimits

0x12de,	// (0x0003db78) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2d6,	// (0x0004bb70) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2d6,	// (0x0004bb70) list_medium_line_x2_t2_g4_t

0x1293,	// (0x0003db2d) list_medium_line_x2_t2_g3_g1_ParamLimits

0x1293,	// (0x0003db2d) list_medium_line_x2_t2_g3_g1

0x129f,	// (0x0003db39) list_medium_line_x2_t2_g3_g2_ParamLimits

0x129f,	// (0x0003db39) list_medium_line_x2_t2_g3_g2

0x12ab,	// (0x0003db45) list_medium_line_x2_t2_g3_g3_ParamLimits

0x12ab,	// (0x0003db45) list_medium_line_x2_t2_g3_g3

0x0002,

0xf243,	// (0x0004badd) list_medium_line_x2_t2_g3_g_ParamLimits

0xf243,	// (0x0004badd) list_medium_line_x2_t2_g3_g

0x1398,	// (0x0003dc32) list_medium_line_x2_t2_g3_t1_ParamLimits

0x1398,	// (0x0003dc32) list_medium_line_x2_t2_g3_t1

0x12de,	// (0x0003db78) list_medium_line_x2_t2_g3_t2_ParamLimits

0x12de,	// (0x0003db78) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2db,	// (0x0004bb75) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2db,	// (0x0004bb75) list_medium_line_x2_t2_g3_t

0x49d6,	// (0x00041270) main_sp_fs_list_pane_ParamLimits

0x49d6,	// (0x00041270) main_sp_fs_list_pane

0x49e2,	// (0x0004127c) sp_fs_scroll_pane_ParamLimits

0x49e2,	// (0x0004127c) sp_fs_scroll_pane

0x13c6,	// (0x0003dc60) list_medium_line_x2_t3_t1

0x13d6,	// (0x0003dc70) list_medium_line_x2_t3_t2

0x13e4,	// (0x0003dc7e) list_medium_line_x2_t3_t3

0x0002,

0xf326,	// (0x0004bbc0) list_medium_line_x2_t3_t

0x13f2,	// (0x0003dc8c) list_medium_line_x3_t4_t1

0x1402,	// (0x0003dc9c) list_medium_line_x3_t4_t2

0x1410,	// (0x0003dcaa) list_medium_line_x3_t4_t3

0x13e4,	// (0x0003dc7e) list_medium_line_x3_t4_t4

0x0003,

0xf32d,	// (0x0004bbc7) list_medium_line_x3_t4_t

0x141e,	// (0x0003dcb8) list_medium_line_x4_t5_t1

0x142e,	// (0x0003dcc8) list_medium_line_x4_t5_t2

0x1410,	// (0x0003dcaa) list_medium_line_x4_t5_t3

0x143c,	// (0x0003dcd6) list_medium_line_x4_t5_t4

0x13e4,	// (0x0003dc7e) list_medium_line_x4_t5_t5

0x0004,

0xf336,	// (0x0004bbd0) list_medium_line_x4_t5_t

0x1293,	// (0x0003db2d) list_medium_line_t4_g4_g1_ParamLimits

0x1293,	// (0x0003db2d) list_medium_line_t4_g4_g1

0x1327,	// (0x0003dbc1) list_medium_line_t4_g4_g2_ParamLimits

0x1327,	// (0x0003dbc1) list_medium_line_t4_g4_g2

0x144a,	// (0x0003dce4) list_medium_line_t4_g4_g3_ParamLimits

0x144a,	// (0x0003dce4) list_medium_line_t4_g4_g3

0x12ab,	// (0x0003db45) list_medium_line_t4_g4_g4_ParamLimits

0x12ab,	// (0x0003db45) list_medium_line_t4_g4_g4

0x0003,

0xf341,	// (0x0004bbdb) list_medium_line_t4_g4_g_ParamLimits

0xf341,	// (0x0004bbdb) list_medium_line_t4_g4_g

0x1456,	// (0x0003dcf0) list_medium_line_t4_g4_t1_ParamLimits

0x1456,	// (0x0003dcf0) list_medium_line_t4_g4_t1

0x146b,	// (0x0003dd05) list_medium_line_t4_g4_t2_ParamLimits

0x146b,	// (0x0003dd05) list_medium_line_t4_g4_t2

0x1480,	// (0x0003dd1a) list_medium_line_t4_g4_t3_ParamLimits

0x1480,	// (0x0003dd1a) list_medium_line_t4_g4_t3

0x12de,	// (0x0003db78) list_medium_line_t4_g4_t4_ParamLimits

0x12de,	// (0x0003db78) list_medium_line_t4_g4_t4

0x0003,

0xf34a,	// (0x0004bbe4) list_medium_line_t4_g4_t_ParamLimits

0xf34a,	// (0x0004bbe4) list_medium_line_t4_g4_t

0x4ad9,	// (0x00041373) chi_dic_find_pane_g1

0x5a51,	// (0x000422eb) main_tport_pane

0x1737,	// (0x0003dfd1) list_medium_line_plain_t1

0x1745,	// (0x0003dfdf) list_medium_line_t2_g2_g1_ParamLimits

0x1745,	// (0x0003dfdf) list_medium_line_t2_g2_g1

0x1751,	// (0x0003dfeb) list_medium_line_t2_g2_g2_ParamLimits

0x1751,	// (0x0003dfeb) list_medium_line_t2_g2_g2

0x0001,

0xfa06,	// (0x0004c2a0) list_medium_line_t2_g2_g_ParamLimits

0xfa06,	// (0x0004c2a0) list_medium_line_t2_g2_g

0x175d,	// (0x0003dff7) list_medium_line_t2_g2_t1_ParamLimits

0x175d,	// (0x0003dff7) list_medium_line_t2_g2_t1

0x1777,	// (0x0003e011) list_medium_line_t2_g2_t2_ParamLimits

0x1777,	// (0x0003e011) list_medium_line_t2_g2_t2

0x0001,

0xfa0b,	// (0x0004c2a5) list_medium_line_t2_g2_t_ParamLimits

0xfa0b,	// (0x0004c2a5) list_medium_line_t2_g2_t

0x1996,	// (0x0003e230) aid_sp_fs_list_icon_a_sm

0x199e,	// (0x0003e238) aid_sp_fs_list_icon_d

0x19a6,	// (0x0003e240) aid_sp_fs_text_primary

0xeb3d,	// (0x0004b3d7) aid_sp_fs_text_secondary

0x0014,	// (0x0003c8ae) list_medium_line

0x0014,	// (0x0003c8ae) list_medium_line_g2

0x0014,	// (0x0003c8ae) list_medium_line_g3

0x0014,	// (0x0003c8ae) list_medium_line_plain

0x0014,	// (0x0003c8ae) list_medium_line_plain_t2

0x0014,	// (0x0003c8ae) list_medium_line_plain_t3

0x0014,	// (0x0003c8ae) list_medium_line_right_icon

0x0014,	// (0x0003c8ae) list_medium_line_right_iconx2

0x0014,	// (0x0003c8ae) list_medium_line_t2

0x0014,	// (0x0003c8ae) list_medium_line_t2_g2

0x0014,	// (0x0003c8ae) list_medium_line_t2_g3

0x0014,	// (0x0003c8ae) list_medium_line_t2_right_icon

0x0014,	// (0x0003c8ae) list_medium_line_t2_right_iconx2

0x0014,	// (0x0003c8ae) list_medium_line_t3

0x0014,	// (0x0003c8ae) list_medium_line_t3_g2

0x0014,	// (0x0003c8ae) list_medium_line_t3_g3

0x0014,	// (0x0003c8ae) list_medium_line_t3_right_iconx2

0x19af,	// (0x0003e249) list_medium_line_t4_g4

0x19b8,	// (0x0003e252) list_medium_line_x2

0x19b8,	// (0x0003e252) list_medium_line_x2_t2_g2

0x19b8,	// (0x0003e252) list_medium_line_x2_t2_g3

0x19b8,	// (0x0003e252) list_medium_line_x2_t2_g4

0x19b8,	// (0x0003e252) list_medium_line_x2_t3

0x19b8,	// (0x0003e252) list_medium_line_x2_t3_g2

0x19b8,	// (0x0003e252) list_medium_line_x2_t3_g3

0x19b8,	// (0x0003e252) list_medium_line_x2_t3_g4

0x19b8,	// (0x0003e252) list_medium_line_x2_t4_g2

0x19b8,	// (0x0003e252) list_medium_line_x2_t4_g4

0x19c1,	// (0x0003e25b) list_medium_line_x3

0x19c1,	// (0x0003e25b) list_medium_line_x3_t4

0x19c1,	// (0x0003e25b) list_medium_line_x3_t4_g4

0x19af,	// (0x0003e249) list_medium_line_x4_t4

0x19af,	// (0x0003e249) list_medium_line_x4_t4_g7

0x19af,	// (0x0003e249) list_medium_line_x4_t5

0x19ca,	// (0x0003e264) list_single_fs_dyc_pane_ParamLimits

0x19ca,	// (0x0003e264) list_single_fs_dyc_pane

0x1293,	// (0x0003db2d) list_medium_line_x4_t4_g7_g1_ParamLimits

0x1293,	// (0x0003db2d) list_medium_line_x4_t4_g7_g1

0x19e6,	// (0x0003e280) list_medium_line_x4_t4_g7_g2_ParamLimits

0x19e6,	// (0x0003e280) list_medium_line_x4_t4_g7_g2

0x19f2,	// (0x0003e28c) list_medium_line_x4_t4_g7_g3_ParamLimits

0x19f2,	// (0x0003e28c) list_medium_line_x4_t4_g7_g3

0x1a01,	// (0x0003e29b) list_medium_line_x4_t4_g7_g4_ParamLimits

0x1a01,	// (0x0003e29b) list_medium_line_x4_t4_g7_g4

0x1a0d,	// (0x0003e2a7) list_medium_line_x4_t4_g7_g5_ParamLimits

0x1a0d,	// (0x0003e2a7) list_medium_line_x4_t4_g7_g5

0x1a1c,	// (0x0003e2b6) list_medium_line_x4_t4_g7_g6_ParamLimits

0x1a1c,	// (0x0003e2b6) list_medium_line_x4_t4_g7_g6

0x1a2b,	// (0x0003e2c5) list_medium_line_x4_t4_g7_g7_ParamLimits

0x1a2b,	// (0x0003e2c5) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd6,	// (0x0004c470) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd6,	// (0x0004c470) list_medium_line_x4_t4_g7_g

0x1a37,	// (0x0003e2d1) list_medium_line_x4_t4_g7_t1_ParamLimits

0x1a37,	// (0x0003e2d1) list_medium_line_x4_t4_g7_t1

0x1a4c,	// (0x0003e2e6) list_medium_line_x4_t4_g7_t2_ParamLimits

0x1a4c,	// (0x0003e2e6) list_medium_line_x4_t4_g7_t2

0x1a61,	// (0x0003e2fb) list_medium_line_x4_t4_g7_t3_ParamLimits

0x1a61,	// (0x0003e2fb) list_medium_line_x4_t4_g7_t3

0x1a76,	// (0x0003e310) list_medium_line_x4_t4_g7_t4_ParamLimits

0x1a76,	// (0x0003e310) list_medium_line_x4_t4_g7_t4

0x1a88,	// (0x0003e322) list_medium_line_x4_t4_g7_t5_ParamLimits

0x1a88,	// (0x0003e322) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbe5,	// (0x0004c47f) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbe5,	// (0x0004c47f) list_medium_line_x4_t4_g7_t

0x1a9a,	// (0x0003e334) list_single_dyc_row_pane_ParamLimits

0x1a9a,	// (0x0003e334) list_single_dyc_row_pane

0x96b9,	// (0x00045f53) call5_gesture_pane_ParamLimits

0x96b9,	// (0x00045f53) call5_gesture_pane

0x96ed,	// (0x00045f87) call5_windows_pane_ParamLimits

0x96ed,	// (0x00045f87) call5_windows_pane

0x9764,	// (0x00045ffe) call5_swipe_1_pane_cp_ParamLimits

0x9764,	// (0x00045ffe) call5_swipe_1_pane_cp

0x9770,	// (0x0004600a) call5_swipe_2_pane_cp_ParamLimits

0x9770,	// (0x0004600a) call5_swipe_2_pane_cp

0xb7ce,	// (0x00048068) call5_image_pane_cp

0x977c,	// (0x00046016) popup_call5_audio_first_window_cp_ParamLimits

0x977c,	// (0x00046016) popup_call5_audio_first_window_cp

0xe9e7,	// (0x0004b281) call5_swipe_1_pane_g1_cp_ParamLimits

0xe9e7,	// (0x0004b281) call5_swipe_1_pane_g1_cp

0xea27,	// (0x0004b2c1) call5_swipe_1_pane_g2_cp

0xea00,	// (0x0004b29a) call5_swipe_1_pane_t1_cp_ParamLimits

0xea00,	// (0x0004b29a) call5_swipe_1_pane_t1_cp

0xe9e7,	// (0x0004b281) call5_swipe_2_pane_g1_cp_ParamLimits

0xe9e7,	// (0x0004b281) call5_swipe_2_pane_g1_cp

0xea2f,	// (0x0004b2c9) call5_swipe_2_pane_g2_cp

0xea37,	// (0x0004b2d1) call5_swipe_2_pane_t1_cp_ParamLimits

0xea37,	// (0x0004b2d1) call5_swipe_2_pane_t1_cp

0xb06d,	// (0x00047907) main_sp_fs_email_pane

0xea4c,	// (0x0004b2e6) main_sp_fs_listscroll_pane_te

0x1b31,	// (0x0003e3cb) popup_sp_fs_action_menu_pane_ParamLimits

0x1b31,	// (0x0003e3cb) popup_sp_fs_action_menu_pane

0xcfda,	// (0x00049874) bg_sp_fs_ctrlbar_pane_g1

0xea55,	// (0x0004b2ef) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xea5e,	// (0x0004b2f8) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xea67,	// (0x0004b301) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcfda,	// (0x00049874) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcd3,	// (0x0004c56d) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xcdbd,	// (0x00049657) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xcdbd,	// (0x00049657) bg_sp_fs_ctrlbar_ddmenu_pane

0xea70,	// (0x0004b30a) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xea70,	// (0x0004b30a) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xea7c,	// (0x0004b316) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xea7c,	// (0x0004b316) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcdc,	// (0x0004c576) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcdc,	// (0x0004c576) main_sp_fs_ctrlbar_ddmenu_pane_g

0xea88,	// (0x0004b322) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xea88,	// (0x0004b322) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x1b73,	// (0x0003e40d) list_medium_line_t2_right_icon_g1

0x1b7b,	// (0x0003e415) list_medium_line_t2_right_icon_t1

0x1b8b,	// (0x0003e425) list_medium_line_t2_right_icon_t2

0x0001,

0xfce1,	// (0x0004c57b) list_medium_line_t2_right_icon_t

0xcbd0,	// (0x0004946a) bg_sp_fs_ctrlbar_pane_ParamLimits

0xcbd0,	// (0x0004946a) bg_sp_fs_ctrlbar_pane

0x97e1,	// (0x0004607b) main_sp_fs_ctrlbar_button_pane_cp01

0x97e9,	// (0x00046083) main_sp_fs_ctrlbar_ddmenu_pane

0xeada,	// (0x0004b374) main_sp_fs_ctrlbar_pane_g1

0xeae6,	// (0x0004b380) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce6,	// (0x0004c580) main_sp_fs_ctrlbar_pane_g

0xeaf2,	// (0x0004b38c) main_sp_fs_ctrlbar_pane_t1

0x97f3,	// (0x0004608d) main_sp_fs_ctrlbar_pane

0x9809,	// (0x000460a3) main_sp_fs_listscroll_pane_te_cp01

0x1b99,	// (0x0003e433) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x1b99,	// (0x0003e433) popup_sp_fs_action_menu_pane_cp01

0xb06d,	// (0x00047907) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xb06d,	// (0x00047907) bg_sp_fs_highlight_list_pane_cp01

0x1bc3,	// (0x0003e45d) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x1bc3,	// (0x0003e45d) sp_fs_action_menu_list_gene_pane_g1

0xeb22,	// (0x0004b3bc) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xeb22,	// (0x0004b3bc) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcf0,	// (0x0004c58a) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcf0,	// (0x0004c58a) sp_fs_action_menu_list_gene_pane_g

0x1bd2,	// (0x0003e46c) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x1bd2,	// (0x0003e46c) sp_fs_action_menu_list_gene_pane_t1

0x1bea,	// (0x0003e484) sp_fs_action_menu_list_gene_pane_ParamLimits

0x1bea,	// (0x0003e484) sp_fs_action_menu_list_gene_pane

0xeb2f,	// (0x0004b3c9) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xeb2f,	// (0x0004b3c9) popup_sp_fs_action_menu_bg_pane

0x1c09,	// (0x0003e4a3) sp_fs_action_menu_list_pane_ParamLimits

0x1c09,	// (0x0003e4a3) sp_fs_action_menu_list_pane

0x1c29,	// (0x0003e4c3) sp_fs_scroll_pane_cp01_ParamLimits

0x1c29,	// (0x0003e4c3) sp_fs_scroll_pane_cp01

0x1c4f,	// (0x0003e4e9) list_medium_line_plain_t2_t1

0x1c5f,	// (0x0003e4f9) list_medium_line_plain_t2_t2

0x0001,

0xfcf5,	// (0x0004c58f) list_medium_line_plain_t2_t

0x1c6d,	// (0x0003e507) list_medium_line_plain_t3_t1

0x1c7d,	// (0x0003e517) list_medium_line_plain_t3_t2

0x1c8b,	// (0x0003e525) list_medium_line_plain_t3_t3

0x0002,

0xfcfa,	// (0x0004c594) list_medium_line_plain_t3_t

0x1293,	// (0x0003db2d) list_medium_line_x2_t2_g2_g1_ParamLimits

0x1293,	// (0x0003db2d) list_medium_line_x2_t2_g2_g1

0x12ab,	// (0x0003db45) list_medium_line_x2_t2_g2_g2_ParamLimits

0x12ab,	// (0x0003db45) list_medium_line_x2_t2_g2_g2

0x0001,

0xf251,	// (0x0004baeb) list_medium_line_x2_t2_g2_g_ParamLimits

0xf251,	// (0x0004baeb) list_medium_line_x2_t2_g2_g

0x1456,	// (0x0003dcf0) list_medium_line_x2_t2_g2_t1_ParamLimits

0x1456,	// (0x0003dcf0) list_medium_line_x2_t2_g2_t1

0x12de,	// (0x0003db78) list_medium_line_x2_t2_g2_t2_ParamLimits

0x12de,	// (0x0003db78) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd01,	// (0x0004c59b) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd01,	// (0x0004c59b) list_medium_line_x2_t2_g2_t

0x1293,	// (0x0003db2d) list_medium_line_x2_t4_g2_g1_ParamLimits

0x1293,	// (0x0003db2d) list_medium_line_x2_t4_g2_g1

0x1c99,	// (0x0003e533) list_medium_line_x2_t4_g2_g2_ParamLimits

0x1c99,	// (0x0003e533) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd06,	// (0x0004c5a0) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd06,	// (0x0004c5a0) list_medium_line_x2_t4_g2_g

0x1caa,	// (0x0003e544) list_medium_line_x2_t4_g2_t1_ParamLimits

0x1caa,	// (0x0003e544) list_medium_line_x2_t4_g2_t1

0x1cc1,	// (0x0003e55b) list_medium_line_x2_t4_g2_t2_ParamLimits

0x1cc1,	// (0x0003e55b) list_medium_line_x2_t4_g2_t2

0x1cd6,	// (0x0003e570) list_medium_line_x2_t4_g2_t3_ParamLimits

0x1cd6,	// (0x0003e570) list_medium_line_x2_t4_g2_t3

0x12de,	// (0x0003db78) list_medium_line_x2_t4_g2_t4_ParamLimits

0x12de,	// (0x0003db78) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd0b,	// (0x0004c5a5) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd0b,	// (0x0004c5a5) list_medium_line_x2_t4_g2_t

0x1ce8,	// (0x0003e582) list_medium_line_t3_right_iconx2_g1

0x1b73,	// (0x0003e40d) list_medium_line_t3_right_iconx2_g2

0x1cf0,	// (0x0003e58a) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd14,	// (0x0004c5ae) list_medium_line_t3_right_iconx2_g

0x1cf8,	// (0x0003e592) list_medium_line_t3_right_iconx2_t1

0x1d08,	// (0x0003e5a2) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd1b,	// (0x0004c5b5) list_medium_line_t3_right_iconx2_t

0x1293,	// (0x0003db2d) list_medium_line_x3_t4_g4_g1_ParamLimits

0x1293,	// (0x0003db2d) list_medium_line_x3_t4_g4_g1

0x129f,	// (0x0003db39) list_medium_line_x3_t4_g4_g2_ParamLimits

0x129f,	// (0x0003db39) list_medium_line_x3_t4_g4_g2

0x1327,	// (0x0003dbc1) list_medium_line_x3_t4_g4_g3_ParamLimits

0x1327,	// (0x0003dbc1) list_medium_line_x3_t4_g4_g3

0x1d16,	// (0x0003e5b0) list_medium_line_x3_t4_g4_g4_ParamLimits

0x1d16,	// (0x0003e5b0) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd20,	// (0x0004c5ba) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd20,	// (0x0004c5ba) list_medium_line_x3_t4_g4_g

0x1d22,	// (0x0003e5bc) list_medium_line_x3_t4_g4_t1_ParamLimits

0x1d22,	// (0x0003e5bc) list_medium_line_x3_t4_g4_t1

0x1d39,	// (0x0003e5d3) list_medium_line_x3_t4_g4_t2_ParamLimits

0x1d39,	// (0x0003e5d3) list_medium_line_x3_t4_g4_t2

0x146b,	// (0x0003dd05) list_medium_line_x3_t4_g4_t3_ParamLimits

0x146b,	// (0x0003dd05) list_medium_line_x3_t4_g4_t3

0x1d4e,	// (0x0003e5e8) list_medium_line_x3_t4_g4_t4_ParamLimits

0x1d4e,	// (0x0003e5e8) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd29,	// (0x0004c5c3) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd29,	// (0x0004c5c3) list_medium_line_x3_t4_g4_t

0x1d6b,	// (0x0003e605) list_single_dyc_row_text_pane_t1_ParamLimits

0x1d6b,	// (0x0003e605) list_single_dyc_row_text_pane_t1

0x1da2,	// (0x0003e63c) list_single_dyc_row_text_pane_t2_ParamLimits

0x1da2,	// (0x0003e63c) list_single_dyc_row_text_pane_t2

0x1dfc,	// (0x0003e696) list_single_dyc_row_text_pane_t3_ParamLimits

0x1dfc,	// (0x0003e696) list_single_dyc_row_text_pane_t3

0x0002,

0xfd32,	// (0x0004c5cc) list_single_dyc_row_text_pane_t_ParamLimits

0xfd32,	// (0x0004c5cc) list_single_dyc_row_text_pane_t

0x1e0e,	// (0x0003e6a8) list_single_dyc_row_pane_g1_ParamLimits

0x1e0e,	// (0x0003e6a8) list_single_dyc_row_pane_g1

0x1e1a,	// (0x0003e6b4) list_single_dyc_row_pane_g2_ParamLimits

0x1e1a,	// (0x0003e6b4) list_single_dyc_row_pane_g2

0x1e26,	// (0x0003e6c0) list_single_dyc_row_pane_g3_ParamLimits

0x1e26,	// (0x0003e6c0) list_single_dyc_row_pane_g3

0x1e32,	// (0x0003e6cc) list_single_dyc_row_pane_g4_ParamLimits

0x1e32,	// (0x0003e6cc) list_single_dyc_row_pane_g4

0x0003,

0xfd39,	// (0x0004c5d3) list_single_dyc_row_pane_g_ParamLimits

0xfd39,	// (0x0004c5d3) list_single_dyc_row_pane_g

0x1e3e,	// (0x0003e6d8) list_single_dyc_row_text_pane_ParamLimits

0x1e3e,	// (0x0003e6d8) list_single_dyc_row_text_pane

0xa564,	// (0x00046dfe) bg_sp_fs_scroll_pane

0xeb46,	// (0x0004b3e0) thumb_sp_fs_scroll_pane

0x1745,	// (0x0003dfdf) list_medium_line_g1_ParamLimits

0x1745,	// (0x0003dfdf) list_medium_line_g1

0x1e5d,	// (0x0003e6f7) list_medium_line_t1_ParamLimits

0x1e5d,	// (0x0003e6f7) list_medium_line_t1

0x1293,	// (0x0003db2d) list_medium_line_x2_g1_ParamLimits

0x1293,	// (0x0003db2d) list_medium_line_x2_g1

0x129f,	// (0x0003db39) list_medium_line_x2_g2_ParamLimits

0x129f,	// (0x0003db39) list_medium_line_x2_g2

0x0001,

0xfd42,	// (0x0004c5dc) list_medium_line_x2_g_ParamLimits

0xfd42,	// (0x0004c5dc) list_medium_line_x2_g

0x1e72,	// (0x0003e70c) list_medium_line_x2_t1_ParamLimits

0x1e72,	// (0x0003e70c) list_medium_line_x2_t1

0x1293,	// (0x0003db2d) list_medium_line_x3_g1_ParamLimits

0x1293,	// (0x0003db2d) list_medium_line_x3_g1

0x129f,	// (0x0003db39) list_medium_line_x3_g2_ParamLimits

0x129f,	// (0x0003db39) list_medium_line_x3_g2

0x0001,

0xfd42,	// (0x0004c5dc) list_medium_line_x3_g_ParamLimits

0xfd42,	// (0x0004c5dc) list_medium_line_x3_g

0x1e72,	// (0x0003e70c) list_medium_line_x3_t1_ParamLimits

0x1e72,	// (0x0003e70c) list_medium_line_x3_t1

0xeb4f,	// (0x0004b3e9) thumb_sp_fs_scroll_pane_g1

0xeb58,	// (0x0004b3f2) thumb_sp_fs_scroll_pane_g2

0xeb61,	// (0x0004b3fb) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x0004c5e1) thumb_sp_fs_scroll_pane_g

0xeb4f,	// (0x0004b3e9) bg_sp_fs_scroll_pane_g1

0xeb58,	// (0x0004b3f2) bg_sp_fs_scroll_pane_g2

0xeb61,	// (0x0004b3fb) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x0004c5e1) bg_sp_fs_scroll_pane_g

0x1293,	// (0x0003db2d) list_medium_line_x2_t3_g4_g1_ParamLimits

0x1293,	// (0x0003db2d) list_medium_line_x2_t3_g4_g1

0x131b,	// (0x0003dbb5) list_medium_line_x2_t3_g4_g2_ParamLimits

0x131b,	// (0x0003dbb5) list_medium_line_x2_t3_g4_g2

0x129f,	// (0x0003db39) list_medium_line_x2_t3_g4_g3_ParamLimits

0x129f,	// (0x0003db39) list_medium_line_x2_t3_g4_g3

0x12ab,	// (0x0003db45) list_medium_line_x2_t3_g4_g4_ParamLimits

0x12ab,	// (0x0003db45) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2cd,	// (0x0004bb67) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2cd,	// (0x0004bb67) list_medium_line_x2_t3_g4_g

0x1e88,	// (0x0003e722) list_medium_line_x2_t3_g4_t1_ParamLimits

0x1e88,	// (0x0003e722) list_medium_line_x2_t3_g4_t1

0x1e9e,	// (0x0003e738) list_medium_line_x2_t3_g4_t2_ParamLimits

0x1e9e,	// (0x0003e738) list_medium_line_x2_t3_g4_t2

0x12de,	// (0x0003db78) list_medium_line_x2_t3_g4_t3_ParamLimits

0x12de,	// (0x0003db78) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd4e,	// (0x0004c5e8) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd4e,	// (0x0004c5e8) list_medium_line_x2_t3_g4_t

0x1745,	// (0x0003dfdf) list_medium_line_g2_g1_ParamLimits

0x1745,	// (0x0003dfdf) list_medium_line_g2_g1

0x1751,	// (0x0003dfeb) list_medium_line_g2_g2_ParamLimits

0x1751,	// (0x0003dfeb) list_medium_line_g2_g2

0x0001,

0xfa06,	// (0x0004c2a0) list_medium_line_g2_g_ParamLimits

0xfa06,	// (0x0004c2a0) list_medium_line_g2_g

0x1eb7,	// (0x0003e751) list_medium_line_g2_t1_ParamLimits

0x1eb7,	// (0x0003e751) list_medium_line_g2_t1

0x1745,	// (0x0003dfdf) list_medium_line_t3_g2_g1_ParamLimits

0x1745,	// (0x0003dfdf) list_medium_line_t3_g2_g1

0x1751,	// (0x0003dfeb) list_medium_line_t3_g2_g2_ParamLimits

0x1751,	// (0x0003dfeb) list_medium_line_t3_g2_g2

0x0001,

0xfa06,	// (0x0004c2a0) list_medium_line_t3_g2_g_ParamLimits

0xfa06,	// (0x0004c2a0) list_medium_line_t3_g2_g

0x1ecc,	// (0x0003e766) list_medium_line_t3_g2_t1_ParamLimits

0x1ecc,	// (0x0003e766) list_medium_line_t3_g2_t1

0x1ee6,	// (0x0003e780) list_medium_line_t3_g2_t2_ParamLimits

0x1ee6,	// (0x0003e780) list_medium_line_t3_g2_t2

0x1efb,	// (0x0003e795) list_medium_line_t3_g2_t3_ParamLimits

0x1efb,	// (0x0003e795) list_medium_line_t3_g2_t3

0x0002,

0xfd55,	// (0x0004c5ef) list_medium_line_t3_g2_t_ParamLimits

0xfd55,	// (0x0004c5ef) list_medium_line_t3_g2_t

0x1b73,	// (0x0003e40d) list_medium_line_right_icon_g1

0x1f11,	// (0x0003e7ab) list_medium_line_right_icon_t1

0x1745,	// (0x0003dfdf) list_medium_line_t2_g1_ParamLimits

0x1745,	// (0x0003dfdf) list_medium_line_t2_g1

0x1f1f,	// (0x0003e7b9) list_medium_line_t2_t1_ParamLimits

0x1f1f,	// (0x0003e7b9) list_medium_line_t2_t1

0x1f39,	// (0x0003e7d3) list_medium_line_t2_t2_ParamLimits

0x1f39,	// (0x0003e7d3) list_medium_line_t2_t2

0x0001,

0xfd5c,	// (0x0004c5f6) list_medium_line_t2_t_ParamLimits

0xfd5c,	// (0x0004c5f6) list_medium_line_t2_t

0x1745,	// (0x0003dfdf) list_medium_line_t3_g1_ParamLimits

0x1745,	// (0x0003dfdf) list_medium_line_t3_g1

0x1f4e,	// (0x0003e7e8) list_medium_line_t3_t1_ParamLimits

0x1f4e,	// (0x0003e7e8) list_medium_line_t3_t1

0x1f65,	// (0x0003e7ff) list_medium_line_t3_t2_ParamLimits

0x1f65,	// (0x0003e7ff) list_medium_line_t3_t2

0x1f7a,	// (0x0003e814) list_medium_line_t3_t3_ParamLimits

0x1f7a,	// (0x0003e814) list_medium_line_t3_t3

0x0002,

0xfd61,	// (0x0004c5fb) list_medium_line_t3_t_ParamLimits

0xfd61,	// (0x0004c5fb) list_medium_line_t3_t

0x1745,	// (0x0003dfdf) list_medium_line_g3_g1_ParamLimits

0x1745,	// (0x0003dfdf) list_medium_line_g3_g1

0x1f8c,	// (0x0003e826) list_medium_line_g3_g2_ParamLimits

0x1f8c,	// (0x0003e826) list_medium_line_g3_g2

0x1751,	// (0x0003dfeb) list_medium_line_g3_g3_ParamLimits

0x1751,	// (0x0003dfeb) list_medium_line_g3_g3

0x0002,

0xfd68,	// (0x0004c602) list_medium_line_g3_g_ParamLimits

0xfd68,	// (0x0004c602) list_medium_line_g3_g

0x1f98,	// (0x0003e832) list_medium_line_g3_t1_ParamLimits

0x1f98,	// (0x0003e832) list_medium_line_g3_t1

0x1745,	// (0x0003dfdf) list_medium_line_t2_g3_g1_ParamLimits

0x1745,	// (0x0003dfdf) list_medium_line_t2_g3_g1

0x1f8c,	// (0x0003e826) list_medium_line_t2_g3_g2_ParamLimits

0x1f8c,	// (0x0003e826) list_medium_line_t2_g3_g2

0x1751,	// (0x0003dfeb) list_medium_line_t2_g3_g3_ParamLimits

0x1751,	// (0x0003dfeb) list_medium_line_t2_g3_g3

0x0002,

0xfd68,	// (0x0004c602) list_medium_line_t2_g3_g_ParamLimits

0xfd68,	// (0x0004c602) list_medium_line_t2_g3_g

0x1fad,	// (0x0003e847) list_medium_line_t2_g3_t1_ParamLimits

0x1fad,	// (0x0003e847) list_medium_line_t2_g3_t1

0x1fc4,	// (0x0003e85e) list_medium_line_t2_g3_t2_ParamLimits

0x1fc4,	// (0x0003e85e) list_medium_line_t2_g3_t2

0x0001,

0xfd6f,	// (0x0004c609) list_medium_line_t2_g3_t_ParamLimits

0xfd6f,	// (0x0004c609) list_medium_line_t2_g3_t

0x1745,	// (0x0003dfdf) list_medium_line_t3_g3_g1_ParamLimits

0x1745,	// (0x0003dfdf) list_medium_line_t3_g3_g1

0x1f8c,	// (0x0003e826) list_medium_line_t3_g3_g2_ParamLimits

0x1f8c,	// (0x0003e826) list_medium_line_t3_g3_g2

0x1751,	// (0x0003dfeb) list_medium_line_t3_g3_g3_ParamLimits

0x1751,	// (0x0003dfeb) list_medium_line_t3_g3_g3

0x0002,

0xfd68,	// (0x0004c602) list_medium_line_t3_g3_g_ParamLimits

0xfd68,	// (0x0004c602) list_medium_line_t3_g3_g

0x1fd9,	// (0x0003e873) list_medium_line_t3_g3_t1_ParamLimits

0x1fd9,	// (0x0003e873) list_medium_line_t3_g3_t1

0x1fed,	// (0x0003e887) list_medium_line_t3_g3_t2_ParamLimits

0x1fed,	// (0x0003e887) list_medium_line_t3_g3_t2

0x1fff,	// (0x0003e899) list_medium_line_t3_g3_t3_ParamLimits

0x1fff,	// (0x0003e899) list_medium_line_t3_g3_t3

0x0002,

0xfd74,	// (0x0004c60e) list_medium_line_t3_g3_t_ParamLimits

0xfd74,	// (0x0004c60e) list_medium_line_t3_g3_t

0x1ce8,	// (0x0003e582) list_medium_line_right_iconx2_g1

0x1b73,	// (0x0003e40d) list_medium_line_right_iconx2_g2

0x0001,

0xfd7b,	// (0x0004c615) list_medium_line_right_iconx2_g

0x2011,	// (0x0003e8ab) list_medium_line_right_iconx2_t1

0x1ce8,	// (0x0003e582) list_medium_line_t2_right_iconx2_g1

0x1b73,	// (0x0003e40d) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd7b,	// (0x0004c615) list_medium_line_t2_right_iconx2_g

0x201f,	// (0x0003e8b9) list_medium_line_t2_right_iconx2_t1

0x202f,	// (0x0003e8c9) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd80,	// (0x0004c61a) list_medium_line_t2_right_iconx2_t

0x203d,	// (0x0003e8d7) list_medium_line_x4_t4_t1

0x204b,	// (0x0003e8e5) list_medium_line_x4_t4_t2

0x205b,	// (0x0003e8f5) list_medium_line_x4_t4_t3

0x206b,	// (0x0003e905) list_medium_line_x4_t4_t4

0x0003,

0xfd85,	// (0x0004c61f) list_medium_line_x4_t4_t

0x9844,	// (0x000460de) tport_appsw_pane_ParamLimits

0x9844,	// (0x000460de) tport_appsw_pane

0x9852,	// (0x000460ec) tport_contact_pane_ParamLimits

0x9852,	// (0x000460ec) tport_contact_pane

0x9862,	// (0x000460fc) tport_listscroll_pane_ParamLimits

0x9862,	// (0x000460fc) tport_listscroll_pane

0x9872,	// (0x0004610c) cell_tport_appsw_pane_ParamLimits

0x9872,	// (0x0004610c) cell_tport_appsw_pane

0xd29f,	// (0x00049b39) tport_appsw_pane_g1_ParamLimits

0xd29f,	// (0x00049b39) tport_appsw_pane_g1

0xeb6a,	// (0x0004b404) tport_contact_pane_g1

0xe4e7,	// (0x0004ad81) tport_contact_pane_t1

0xeb73,	// (0x0004b40d) tport_contact_pane_t2

0x0001,

0xfd8e,	// (0x0004c628) tport_contact_pane_t

0xeb81,	// (0x0004b41b) list_tport_pane

0xeb8a,	// (0x0004b424) scroll_pane_cp_030

0x98a5,	// (0x0004613f) cell_tport_appsw_pane_g1

0x98b5,	// (0x0004614f) cell_tport_appsw_pane_t1

0xa564,	// (0x00046dfe) grid_highlight_pane_cp019

0x98c3,	// (0x0004615d) list_tport_double_graphic_pane_ParamLimits

0x98c3,	// (0x0004615d) list_tport_double_graphic_pane

0xb06d,	// (0x00047907) list_highlight_pane_cp023_ParamLimits

0xb06d,	// (0x00047907) list_highlight_pane_cp023

0x98d5,	// (0x0004616f) list_tport_double_graphic_pane_g1_ParamLimits

0x98d5,	// (0x0004616f) list_tport_double_graphic_pane_g1

0x98e2,	// (0x0004617c) list_tport_double_graphic_pane_t1_ParamLimits

0x98e2,	// (0x0004617c) list_tport_double_graphic_pane_t1

0x98f7,	// (0x00046191) list_tport_double_graphic_pane_t2_ParamLimits

0x98f7,	// (0x00046191) list_tport_double_graphic_pane_t2

0x0001,

0xfd9a,	// (0x0004c634) list_tport_double_graphic_pane_t_ParamLimits

0xfd9a,	// (0x0004c634) list_tport_double_graphic_pane_t

0xa564,	// (0x00046dfe) main_cale_note_pane

0x7ccd,	// (0x00044567) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x7ccd,	// (0x00044567) cell_vitu2_function_top_wide_pane_cp01

0x9401,	// (0x00045c9b) wait_bar_pane_cp05_ParamLimits

0xb06d,	// (0x00047907) listscroll_cmail_pane

0xeb93,	// (0x0004b42d) list_cmail_pane

0x9909,	// (0x000461a3) list_cmail_body_pane

0x992d,	// (0x000461c7) list_single_cmail_header_caption_pane

0x995d,	// (0x000461f7) list_single_cmail_header_detail_pane_ParamLimits

0x995d,	// (0x000461f7) list_single_cmail_header_detail_pane

0xeba3,	// (0x0004b43d) list_single_cmail_header_caption_pane_t1

0x207b,	// (0x0003e915) list_single_cmail_header_detail_pane_g1_ParamLimits

0x207b,	// (0x0003e915) list_single_cmail_header_detail_pane_g1

0x2091,	// (0x0003e92b) list_single_cmail_header_detail_pane_g2_ParamLimits

0x2091,	// (0x0003e92b) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9f,	// (0x0004c639) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9f,	// (0x0004c639) list_single_cmail_header_detail_pane_g

0x209d,	// (0x0003e937) list_single_cmail_header_detail_pane_t1_ParamLimits

0x209d,	// (0x0003e937) list_single_cmail_header_detail_pane_t1

0x20fd,	// (0x0003e997) list_single_cmail_header_editor_pane_bg_ParamLimits

0x20fd,	// (0x0003e997) list_single_cmail_header_editor_pane_bg

0xebbe,	// (0x0004b458) list_cmail_body_pane_g1

0xebc7,	// (0x0004b461) list_cmail_body_pane_t1

0xda2f,	// (0x0004a2c9) list_single_cmail_header_editor_pane_bg_g1

0xb123,	// (0x000479bd) list_single_cmail_header_editor_pane_bg_g1_copy1

0xda3f,	// (0x0004a2d9) list_single_cmail_header_editor_pane_bg_g1_copy2

0xda37,	// (0x0004a2d1) list_single_cmail_header_editor_pane_bg_g1_copy3

0xdc8a,	// (0x0004a524) list_single_cmail_header_editor_pane_bg_g1_copy4

0xda5f,	// (0x0004a2f9) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xda4f,	// (0x0004a2e9) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xda57,	// (0x0004a2f1) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xb103,	// (0x0004799d) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x999e,	// (0x00046238) calenote_gesture_pane_ParamLimits

0x999e,	// (0x00046238) calenote_gesture_pane

0x99b8,	// (0x00046252) calenote_window_pane_ParamLimits

0x99b8,	// (0x00046252) calenote_window_pane

0xebd5,	// (0x0004b46f) popup_note_window_cp01

0x99d0,	// (0x0004626a) calenote_swipe_1_pane_ParamLimits

0x99d0,	// (0x0004626a) calenote_swipe_1_pane

0x9770,	// (0x0004600a) calenote_swipe_2_pane_ParamLimits

0x9770,	// (0x0004600a) calenote_swipe_2_pane

0xe9e7,	// (0x0004b281) calenote_swipe_1_pane_g1_ParamLimits

0xe9e7,	// (0x0004b281) calenote_swipe_1_pane_g1

0xe9f4,	// (0x0004b28e) calenote_swipe_1_pane_g2_ParamLimits

0xe9f4,	// (0x0004b28e) calenote_swipe_1_pane_g2

0x0001,

0xfcc9,	// (0x0004c563) calenote_swipe_1_pane_g_ParamLimits

0xfcc9,	// (0x0004c563) calenote_swipe_1_pane_g

0xebe7,	// (0x0004b481) calenote_swipe_1_pane_t1_ParamLimits

0xebe7,	// (0x0004b481) calenote_swipe_1_pane_t1

0xe9e7,	// (0x0004b281) calenote_swipe_2_pane_g1_ParamLimits

0xe9e7,	// (0x0004b281) calenote_swipe_2_pane_g1

0xec06,	// (0x0004b4a0) calenote_swipe_2_pane_g2_ParamLimits

0xec06,	// (0x0004b4a0) calenote_swipe_2_pane_g2

0x0001,

0xfdab,	// (0x0004c645) calenote_swipe_2_pane_g_ParamLimits

0xfdab,	// (0x0004c645) calenote_swipe_2_pane_g

0xec12,	// (0x0004b4ac) calenote_swipe_2_pane_t1_ParamLimits

0xec12,	// (0x0004b4ac) calenote_swipe_2_pane_t1

0xa564,	// (0x00046dfe) main_mup_navstr_pane

0x6a31,	// (0x000432cb) main_mup3_pane_t7_ParamLimits

0x6a31,	// (0x000432cb) main_mup3_pane_t7

0x745b,	// (0x00043cf5) main_mp4_pane_g6_ParamLimits

0x745b,	// (0x00043cf5) main_mp4_pane_g6

0x77cd,	// (0x00044067) main_image3_pane_t4_ParamLimits

0x77cd,	// (0x00044067) main_image3_pane_t4

0x99e3,	// (0x0004627d) popup_navstr_preview_pane_ParamLimits

0x99e3,	// (0x0004627d) popup_navstr_preview_pane

0x99ef,	// (0x00046289) scroll_navstr_pane_ParamLimits

0x99ef,	// (0x00046289) scroll_navstr_pane

0xa564,	// (0x00046dfe) bg_popup_preview_window_pane_cp04

0xec39,	// (0x0004b4d3) popup_navstr_preview_pane_t1

0x99fb,	// (0x00046295) scroll_navstr_pane_g1_ParamLimits

0x99fb,	// (0x00046295) scroll_navstr_pane_g1

0x9a08,	// (0x000462a2) scroll_navstr_pane_t1_ParamLimits

0x9a08,	// (0x000462a2) scroll_navstr_pane_t1

0xebde,	// (0x0004b478) bg_button_pane_cp014

0xebde,	// (0x0004b478) bg_button_pane_cp030

0x1ad7,	// (0x0003e371) list_double_fisheye_pane_g4_ParamLimits

0x1ad7,	// (0x0003e371) list_double_fisheye_pane_g4

0x1ae3,	// (0x0003e37d) list_double_fisheye_pane_g5_ParamLimits

0x1ae3,	// (0x0003e37d) list_double_fisheye_pane_g5

0xd6ca,	// (0x00049f64) sp_fs_scroll_pane_cp03

0xeada,	// (0x0004b374) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xeae6,	// (0x0004b380) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce6,	// (0x0004c580) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xeaf2,	// (0x0004b38c) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xeb9b,	// (0x0004b435) sp_fs_scroll_pane_cp02

0xae01,	// (0x0004769b) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xae01,	// (0x0004769b) popup_sp_fs_calendar_preview_list_single_pane

0xa564,	// (0x00046dfe) main_cam6_pano_pane

0xb06d,	// (0x00047907) main_mup3_pane_ParamLimits

0xa564,	// (0x00046dfe) main_phacti_pane

0x92d6,	// (0x00045b70) bg_button_pane_cp11

0x92ee,	// (0x00045b88) main_mobtv_info_pane_g2_ParamLimits

0x92ee,	// (0x00045b88) main_mobtv_info_pane_g2

0x0001,

0xfc46,	// (0x0004c4e0) main_mobtv_info_pane_g_ParamLimits

0xfc46,	// (0x0004c4e0) main_mobtv_info_pane_g

0x94a0,	// (0x00045d3a) sc_clock_pane_t5_ParamLimits

0x94a0,	// (0x00045d3a) sc_clock_pane_t5

0x9555,	// (0x00045def) main_radioblah_pane_g1_ParamLimits

0xe933,	// (0x0004b1cd) main_radioblah_pane_t3_ParamLimits

0xe933,	// (0x0004b1cd) main_radioblah_pane_t3

0xe94b,	// (0x0004b1e5) main_radioblah_pane_t4_ParamLimits

0xe94b,	// (0x0004b1e5) main_radioblah_pane_t4

0x9573,	// (0x00045e0d) main_radioblah_text_pane_ParamLimits

0x9573,	// (0x00045e0d) main_radioblah_text_pane

0x9580,	// (0x00045e1a) main_radioblah_info_pane_g1_ParamLimits

0x9615,	// (0x00045eaf) main_radioblah_info_pane_t4_ParamLimits

0x9615,	// (0x00045eaf) main_radioblah_info_pane_t4

0xb06d,	// (0x00047907) main_sp_fs_calendar_pane

0x9a1a,	// (0x000462b4) main_phacti_pane_g1

0x9a22,	// (0x000462bc) phacti_note_pane_ParamLimits

0x9a22,	// (0x000462bc) phacti_note_pane

0xec50,	// (0x0004b4ea) phacti_term_pane_ParamLimits

0xec50,	// (0x0004b4ea) phacti_term_pane

0xec65,	// (0x0004b4ff) phacti_note_pane_t1_ParamLimits

0xec65,	// (0x0004b4ff) phacti_note_pane_t1

0x2114,	// (0x0003e9ae) phacti_term_pane_g1

0x211c,	// (0x0003e9b6) phacti_term_pane_t1_ParamLimits

0x211c,	// (0x0003e9b6) phacti_term_pane_t1

0xec7c,	// (0x0004b516) popup_sp_fs_calendar_preview_list_single_pane_g1

0xec84,	// (0x0004b51e) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb5,	// (0x0004c64f) popup_sp_fs_calendar_preview_list_single_pane_g

0xec8c,	// (0x0004b526) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xec8c,	// (0x0004b526) popup_sp_fs_calendar_preview_list_single_pane_t1

0xeca2,	// (0x0004b53c) aid_popup_sp_fs_bg_corner_pane

0xcfda,	// (0x00049874) popup_sp_fs_calendar_preview_bg_pane_g1

0xa564,	// (0x00046dfe) popup_sp_fs_calendar_preview_bg_pane

0xab75,	// (0x0004740f) popup_sp_fs_calendar_preview_list_pane

0xcbd0,	// (0x0004946a) bg_main_sp_fs_cale_pane_ParamLimits

0xcbd0,	// (0x0004946a) bg_main_sp_fs_cale_pane

0x214f,	// (0x0003e9e9) listscroll_cale_mrui_pane_ParamLimits

0x214f,	// (0x0003e9e9) listscroll_cale_mrui_pane

0x2164,	// (0x0003e9fe) listscroll_sp_fs_schedule_track_pane

0x216d,	// (0x0003ea07) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x216d,	// (0x0003ea07) main_sp_fs_ctrlbar_pane_cp01

0xecaa,	// (0x0004b544) main_sp_fs_ribbon_pane

0x2180,	// (0x0003ea1a) popup_sp_fs_cale_preview_window

0x9a85,	// (0x0004631f) list_single_sp_fs_schedule_track_pane_ParamLimits

0x9a85,	// (0x0004631f) list_single_sp_fs_schedule_track_pane

0xdace,	// (0x0004a368) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xdace,	// (0x0004a368) bg_sp_fs_highlight_list_pane_cp03

0x9aac,	// (0x00046346) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x9aac,	// (0x00046346) list_single_sp_fs_schedule_track_pane_g1

0x9ab8,	// (0x00046352) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x9ab8,	// (0x00046352) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdba,	// (0x0004c654) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdba,	// (0x0004c654) list_single_sp_fs_schedule_track_pane_g

0x9ac4,	// (0x0004635e) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x9ac4,	// (0x0004635e) list_single_sp_fs_schedule_track_pane_t1

0x9adc,	// (0x00046376) sp_fs_schedule_track_pane_ParamLimits

0x9adc,	// (0x00046376) sp_fs_schedule_track_pane

0xecb2,	// (0x0004b54c) sp_fs_schedule_track_pane_g1

0xecba,	// (0x0004b554) sp_fs_schedule_track_pane_g2

0xecc2,	// (0x0004b55c) sp_fs_schedule_track_pane_g3

0xecca,	// (0x0004b564) sp_fs_schedule_track_pane_g4

0xecd2,	// (0x0004b56c) sp_fs_schedule_track_pane_g5

0x0004,

0xfdbf,	// (0x0004c659) sp_fs_schedule_track_pane_g

0xda2f,	// (0x0004a2c9) bg_sp_fs_schedule_viewer_highlight_g1

0xb123,	// (0x000479bd) bg_sp_fs_schedule_viewer_highlight_g2

0xda37,	// (0x0004a2d1) bg_sp_fs_schedule_viewer_highlight_g3

0xda3f,	// (0x0004a2d9) bg_sp_fs_schedule_viewer_highlight_g4

0xdc8a,	// (0x0004a524) bg_sp_fs_schedule_viewer_highlight_g5

0xda4f,	// (0x0004a2e9) bg_sp_fs_schedule_viewer_highlight_g6

0xda57,	// (0x0004a2f1) bg_sp_fs_schedule_viewer_highlight_g7

0xda5f,	// (0x0004a2f9) bg_sp_fs_schedule_viewer_highlight_g8

0xb103,	// (0x0004799d) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdca,	// (0x0004c664) bg_sp_fs_schedule_viewer_highlight_g

0xa564,	// (0x00046dfe) bg_main_sp_fs_ribbon_pane

0x9aec,	// (0x00046386) main_sp_fs_ribbon_pane_g1

0xecda,	// (0x0004b574) main_sp_fs_ribbon_pane_t1

0x9af5,	// (0x0004638f) main_sp_fs_ribbon_pane_t2

0xece9,	// (0x0004b583) main_sp_fs_ribbon_pane_t3

0x0002,

0xfddd,	// (0x0004c677) main_sp_fs_ribbon_pane_t

0xecf8,	// (0x0004b592) main_sp_fs_ribbon_scheduler_pane

0xed00,	// (0x0004b59a) bg_main_sp_fs_ribbon_pane_g1

0xed09,	// (0x0004b5a3) bg_main_sp_fs_ribbon_pane_g2

0xed12,	// (0x0004b5ac) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfde4,	// (0x0004c67e) bg_main_sp_fs_ribbon_pane_g

0xed1a,	// (0x0004b5b4) main_sp_fs_ribbon_scheduler_pane_g1

0xed23,	// (0x0004b5bd) main_sp_fs_ribbon_scheduler_pane_g2

0xed2c,	// (0x0004b5c6) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdeb,	// (0x0004c685) main_sp_fs_ribbon_scheduler_pane_g

0xed35,	// (0x0004b5cf) list_cale_mrui_pane

0x9b06,	// (0x000463a0) sp_fs_scroll_pane_cp07_ParamLimits

0x9b06,	// (0x000463a0) sp_fs_scroll_pane_cp07

0x9b22,	// (0x000463bc) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x9b22,	// (0x000463bc) bg_sp_fs_schedule_viewer_highlight

0xed42,	// (0x0004b5dc) list_single_sp_fs_schedule_track_pane_cp01

0xed4a,	// (0x0004b5e4) list_sp_fs_schedule_track_pane

0xed52,	// (0x0004b5ec) sp_fs_scroll_pane_cp06_ParamLimits

0xed52,	// (0x0004b5ec) sp_fs_scroll_pane_cp06

0xcfda,	// (0x00049874) bgmain_sp_fs_calendar_pane_g1

0x2192,	// (0x0003ea2c) list_single_cale_mrui_pane_ParamLimits

0x2192,	// (0x0003ea2c) list_single_cale_mrui_pane

0x21c4,	// (0x0003ea5e) list_single_cale_mrui_row_pane_ParamLimits

0x21c4,	// (0x0003ea5e) list_single_cale_mrui_row_pane

0x21d1,	// (0x0003ea6b) list_single_cale_mrui_row_pane_g1_ParamLimits

0x21d1,	// (0x0003ea6b) list_single_cale_mrui_row_pane_g1

0x2209,	// (0x0003eaa3) list_single_cale_mrui_row_pane_t1_ParamLimits

0x2209,	// (0x0003eaa3) list_single_cale_mrui_row_pane_t1

0x221b,	// (0x0003eab5) list_single_cale_mrui_row_pane_t2_ParamLimits

0x221b,	// (0x0003eab5) list_single_cale_mrui_row_pane_t2

0x2281,	// (0x0003eb1b) list_single_cale_mrui_row_pane_t3_ParamLimits

0x2281,	// (0x0003eb1b) list_single_cale_mrui_row_pane_t3

0x22b0,	// (0x0003eb4a) list_single_cale_mrui_row_pane_t4_ParamLimits

0x22b0,	// (0x0003eb4a) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf9,	// (0x0004c693) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf9,	// (0x0004c693) list_single_cale_mrui_row_pane_t

0x22df,	// (0x0003eb79) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x22df,	// (0x0003eb79) list_single_cmail_header_editor_pane_bg_cp01

0x2301,	// (0x0003eb9b) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x2301,	// (0x0003eb9b) list_single_cmail_header_editor_pane_bg_cp02

0x9b2f,	// (0x000463c9) main_radioblah_text_pane_t1_ParamLimits

0x9b2f,	// (0x000463c9) main_radioblah_text_pane_t1

0xed71,	// (0x0004b60b) cam6_indi_pane_cp01

0xed79,	// (0x0004b613) cam6_mode_pane_cp01

0xed81,	// (0x0004b61b) cam6_pano_pane

0xed8a,	// (0x0004b624) cam6_zoom_pane_cp01

0xed92,	// (0x0004b62c) cam6_pano_image_pane

0xed9d,	// (0x0004b637) cam6_pano_pane_g1

0xe68e,	// (0x0004af28) cam6_pano_pane_g2

0xeda6,	// (0x0004b640) cam6_pano_pane_g3

0xedaf,	// (0x0004b649) cam6_pano_pane_g4

0xd57c,	// (0x00049e16) cam6_pano_pane_g5

0xedb8,	// (0x0004b652) cam6_pano_pane_g6

0xedc2,	// (0x0004b65c) cam6_pano_pane_g7

0xedca,	// (0x0004b664) cam6_pano_pane_g8

0xedd3,	// (0x0004b66d) cam6_pano_pane_g9

0x0008,

0xfe02,	// (0x0004c69c) cam6_pano_pane_g

0xa564,	// (0x00046dfe) main_browser_tag_pane

0xec31,	// (0x0004b4cb) grid_navstr_albumart_pane

0xedde,	// (0x0004b678) cell_navstr_albumart_pane_ParamLimits

0xedde,	// (0x0004b678) cell_navstr_albumart_pane

0xb92f,	// (0x000481c9) cell_navstr_albumart_pane_g1

0xc9e1,	// (0x0004927b) cell_navstr_albumart_pane_g2

0xc9f1,	// (0x0004928b) cell_navstr_albumart_pane_g3

0xc9e9,	// (0x00049283) cell_navstr_albumart_pane_g4

0x0003,

0xfe15,	// (0x0004c6af) cell_navstr_albumart_pane_g

0x9b4a,	// (0x000463e4) bt_list_pane_ParamLimits

0x9b4a,	// (0x000463e4) bt_list_pane

0xee00,	// (0x0004b69a) bt_list_pane_t1

0xee0f,	// (0x0004b6a9) bt_list_pane_t2

0x0001,

0xfe1e,	// (0x0004c6b8) bt_list_pane_t

0xa564,	// (0x00046dfe) main_cale_prevew_pane

0x9b6e,	// (0x00046408) popup_cale_preview_window_ParamLimits

0x9b6e,	// (0x00046408) popup_cale_preview_window

0xb06d,	// (0x00047907) bg_popup_preview_window_pane_cp05_ParamLimits

0xb06d,	// (0x00047907) bg_popup_preview_window_pane_cp05

0xee1e,	// (0x0004b6b8) list_cale_preview_pane_ParamLimits

0xee1e,	// (0x0004b6b8) list_cale_preview_pane

0xee2a,	// (0x0004b6c4) list_double_cale_preview_pane_ParamLimits

0xee2a,	// (0x0004b6c4) list_double_cale_preview_pane

0xee3c,	// (0x0004b6d6) list_single_cale_preview_pane_ParamLimits

0xee3c,	// (0x0004b6d6) list_single_cale_preview_pane

0xee50,	// (0x0004b6ea) list_single_cale_preview_pane_g1

0xee58,	// (0x0004b6f2) list_single_cale_preview_pane_t1_ParamLimits

0xee58,	// (0x0004b6f2) list_single_cale_preview_pane_t1

0xee6d,	// (0x0004b707) list_double_cale_preview_pane_g1

0xee75,	// (0x0004b70f) list_double_cale_preview_pane_t1_ParamLimits

0xee75,	// (0x0004b70f) list_double_cale_preview_pane_t1

0xee8a,	// (0x0004b724) list_double_cale_preview_pane_t2_ParamLimits

0xee8a,	// (0x0004b724) list_double_cale_preview_pane_t2

0x0001,

0xfe23,	// (0x0004c6bd) list_double_cale_preview_pane_t_ParamLimits

0xfe23,	// (0x0004c6bd) list_double_cale_preview_pane_t

0xa564,	// (0x00046dfe) main_ezdial_pane

0xb06d,	// (0x00047907) main_sp_fs_email_pane_ParamLimits

0x978a,	// (0x00046024) cmail_ddmenu_btn01_pane_ParamLimits

0x978a,	// (0x00046024) cmail_ddmenu_btn01_pane

0x97a7,	// (0x00046041) cmail_ddmenu_btn02_pane_ParamLimits

0x97a7,	// (0x00046041) cmail_ddmenu_btn02_pane

0x97c5,	// (0x0004605f) cmail_ddmenu_btn03_pane_ParamLimits

0x97c5,	// (0x0004605f) cmail_ddmenu_btn03_pane

0x97f3,	// (0x0004608d) main_sp_fs_ctrlbar_pane_ParamLimits

0x9809,	// (0x000460a3) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x9909,	// (0x000461a3) list_cmail_body_pane_ParamLimits

0x9995,	// (0x0004622f) bg_button_pane_cp12

0xebb1,	// (0x0004b44b) list_single_cmail_header_detail_pane_g3_ParamLimits

0xebb1,	// (0x0004b44b) list_single_cmail_header_detail_pane_g3

0x20d9,	// (0x0003e973) list_single_cmail_header_detail_pane_t2_ParamLimits

0x20d9,	// (0x0003e973) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda6,	// (0x0004c640) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda6,	// (0x0004c640) list_single_cmail_header_detail_pane_t

0x2131,	// (0x0003e9cb) phacti_term_pane_t2_ParamLimits

0x2131,	// (0x0003e9cb) phacti_term_pane_t2

0x0001,

0xfdb0,	// (0x0004c64a) phacti_term_pane_t_ParamLimits

0xfdb0,	// (0x0004c64a) phacti_term_pane_t

0xeea2,	// (0x0004b73c) aid_size_list_single_double

0x9b85,	// (0x0004641f) popup_ezdial_listscroll_window

0x9ba8,	// (0x00046442) popup_number_entry_window_cp01

0xb7ce,	// (0x00048068) bg_popup_call_pane_cp09

0xeeae,	// (0x0004b748) ezdial_list_pane

0xeeb6,	// (0x0004b750) scroll_pane_cp23

0xcdbd,	// (0x00049657) bg_button_pane_cp028_ParamLimits

0xcdbd,	// (0x00049657) bg_button_pane_cp028

0x9bb6,	// (0x00046450) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x9bb6,	// (0x00046450) cmail_ddmenu_btn01_pane_g1

0x9bc8,	// (0x00046462) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x9bc8,	// (0x00046462) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe28,	// (0x0004c6c2) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe28,	// (0x0004c6c2) cmail_ddmenu_btn01_pane_g

0xeebe,	// (0x0004b758) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeebe,	// (0x0004b758) cmail_ddmenu_btn01_pane_t1

0xcbd0,	// (0x0004946a) bg_button_pane_cp029_ParamLimits

0xcbd0,	// (0x0004946a) bg_button_pane_cp029

0x9bc8,	// (0x00046462) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x9bc8,	// (0x00046462) cmail_ddmenu_btn02_pane_g1

0x9be0,	// (0x0004647a) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x9be0,	// (0x0004647a) cmail_ddmenu_btn02_pane_t1

0xdace,	// (0x0004a368) bg_button_pane_cp031_ParamLimits

0xdace,	// (0x0004a368) bg_button_pane_cp031

0x9bc8,	// (0x00046462) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x9bc8,	// (0x00046462) cmail_ddmenu_btn03_pane_g1

0x9be0,	// (0x0004647a) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x9be0,	// (0x0004647a) cmail_ddmenu_btn03_pane_t1

0x7678,	// (0x00043f12) cell_dialer2_keypad_pane_t1_ParamLimits

0x7692,	// (0x00043f2c) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x7692,	// (0x00043f2c) cell_dialer2_keypad_pane_t1_copy1

0x915b,	// (0x000459f5) ncimui_group_button_pane

0xb06d,	// (0x00047907) main_sp_fs_calendar_pane_ParamLimits

0x992d,	// (0x000461c7) list_single_cmail_header_caption_pane_ParamLimits

0x2146,	// (0x0003e9e0) aid_recal_txt_sm_pane

0xa564,	// (0x00046dfe) mian_recal_day_pane

0x2180,	// (0x0003ea1a) popup_sp_fs_cale_preview_window_ParamLimits

0xeed4,	// (0x0004b76e) list_recal_day_pane

0x2338,	// (0x0003ebd2) list_single_recal_day_pane_ParamLimits

0x2338,	// (0x0003ebd2) list_single_recal_day_pane

0xeefb,	// (0x0004b795) list_single_recal_day_pane_g1_ParamLimits

0xeefb,	// (0x0004b795) list_single_recal_day_pane_g1

0x234a,	// (0x0003ebe4) list_single_recal_day_pane_g2_ParamLimits

0x234a,	// (0x0003ebe4) list_single_recal_day_pane_g2

0x235a,	// (0x0003ebf4) list_single_recal_day_pane_g3_ParamLimits

0x235a,	// (0x0003ebf4) list_single_recal_day_pane_g3

0x2366,	// (0x0003ec00) list_single_recal_day_pane_g4_ParamLimits

0x2366,	// (0x0003ec00) list_single_recal_day_pane_g4

0x237c,	// (0x0003ec16) list_single_recal_day_pane_g5_ParamLimits

0x237c,	// (0x0003ec16) list_single_recal_day_pane_g5

0x2396,	// (0x0003ec30) list_single_recal_day_pane_g6_ParamLimits

0x2396,	// (0x0003ec30) list_single_recal_day_pane_g6

0x0004,

0xfe37,	// (0x0004c6d1) list_single_recal_day_pane_g_ParamLimits

0xfe37,	// (0x0004c6d1) list_single_recal_day_pane_g

0x23aa,	// (0x0003ec44) list_single_recal_day_pane_t1

0x23bc,	// (0x0003ec56) list_single_recal_day_pane_t2

0x0001,

0xfe42,	// (0x0004c6dc) list_single_recal_day_pane_t

0x9c04,	// (0x0004649e) ncimui_query_button_pane_ParamLimits

0x9c04,	// (0x0004649e) ncimui_query_button_pane

0x9c14,	// (0x000464ae) ncimui_query_button_pane_t1_ParamLimits

0x9c14,	// (0x000464ae) ncimui_query_button_pane_t1

0xef07,	// (0x0004b7a1) ncimui_query_button_pane_t2_ParamLimits

0xef07,	// (0x0004b7a1) ncimui_query_button_pane_t2

0x0001,

0xfe47,	// (0x0004c6e1) ncimui_query_button_pane_t_ParamLimits

0xfe47,	// (0x0004c6e1) ncimui_query_button_pane_t

0x9c27,	// (0x000464c1) query_button_pane_ParamLimits

0x9c27,	// (0x000464c1) query_button_pane

0xa564,	// (0x00046dfe) bg_button_pane_cp0028

0xef1a,	// (0x0004b7b4) query_button_pane_t1

0x5a51,	// (0x000422eb) main_tport_pane_ParamLimits

0x981a,	// (0x000460b4) bg_popup_window_pane_cp01_ParamLimits

0x981a,	// (0x000460b4) bg_popup_window_pane_cp01

0x9828,	// (0x000460c2) heading_pane_cp08_ParamLimits

0x9828,	// (0x000460c2) heading_pane_cp08

0x9836,	// (0x000460d0) heading_pane_cp07_ParamLimits

0x9836,	// (0x000460d0) heading_pane_cp07

0x98a5,	// (0x0004613f) cell_tport_appsw_pane_g2

0x0002,

0xfd93,	// (0x0004c62d) cell_tport_appsw_pane_g

0x14ad,	// (0x0003dd47) input_candi_list_open_g1

0xb2da,	// (0x00047b74) list_cale_time_pane_g6_ParamLimits

0xb2da,	// (0x00047b74) list_cale_time_pane_g6

0x64d3,	// (0x00042d6d) aid_size_touch_calib_1_ParamLimits

0x64d3,	// (0x00042d6d) aid_size_touch_calib_1

0x64df,	// (0x00042d79) aid_size_touch_calib_2_ParamLimits

0x64df,	// (0x00042d79) aid_size_touch_calib_2

0x64ed,	// (0x00042d87) aid_size_touch_calib_3_ParamLimits

0x64ed,	// (0x00042d87) aid_size_touch_calib_3

0x64fd,	// (0x00042d97) aid_size_touch_calib_4_ParamLimits

0x64fd,	// (0x00042d97) aid_size_touch_calib_4

0x650b,	// (0x00042da5) main_touch_calib_button_group_pane_ParamLimits

0x650b,	// (0x00042da5) main_touch_calib_button_group_pane

0x6519,	// (0x00042db3) main_touch_calib_pane_g1_ParamLimits

0x6525,	// (0x00042dbf) main_touch_calib_pane_g2_ParamLimits

0x6531,	// (0x00042dcb) main_touch_calib_pane_g3_ParamLimits

0x653d,	// (0x00042dd7) main_touch_calib_pane_g4_ParamLimits

0xf75c,	// (0x0004bff6) main_touch_calib_pane_g_ParamLimits

0x6549,	// (0x00042de3) main_touch_calib_pane_t1_ParamLimits

0x6562,	// (0x00042dfc) main_touch_calib_pane_t2_ParamLimits

0x657b,	// (0x00042e15) main_touch_calib_pane_t3_ParamLimits

0x6591,	// (0x00042e2b) main_touch_calib_pane_t4_ParamLimits

0x65a7,	// (0x00042e41) main_touch_calib_pane_t5_ParamLimits

0xf765,	// (0x0004bfff) main_touch_calib_pane_t_ParamLimits

0xd33a,	// (0x00049bd4) list_single_fp_cale_pane_g3_ParamLimits

0xd33a,	// (0x00049bd4) list_single_fp_cale_pane_g3

0xb06d,	// (0x00047907) bg_button_pane_cp012_ParamLimits

0xb06d,	// (0x00047907) bg_vkb2_func_pane_cp03_ParamLimits

0x8442,	// (0x00044cdc) cell_vitu2_function_top_pane_g1_ParamLimits

0xb06d,	// (0x00047907) bg_vkb2_func_pane_cp04_ParamLimits

0x90e3,	// (0x0004597d) main_ncimui_button_group_pane_ParamLimits

0x90e3,	// (0x0004597d) main_ncimui_button_group_pane

0x9149,	// (0x000459e3) main_ncimui_pane_t3_ParamLimits

0x9149,	// (0x000459e3) main_ncimui_pane_t3

0xec47,	// (0x0004b4e1) phacti_button_group_pane

0xeea2,	// (0x0004b73c) aid_size_list_single_double_ParamLimits

0x9b85,	// (0x0004641f) popup_ezdial_listscroll_window_ParamLimits

0x9ba8,	// (0x00046442) popup_number_entry_window_cp01_ParamLimits

0x9c34,	// (0x000464ce) phacti_button_pane_ParamLimits

0x9c34,	// (0x000464ce) phacti_button_pane

0xa564,	// (0x00046dfe) bg_button_pane_cp14

0xef28,	// (0x0004b7c2) phacti_button_pane_t1

0x9c45,	// (0x000464df) main_touch_calib_button_pane_ParamLimits

0x9c45,	// (0x000464df) main_touch_calib_button_pane

0xaceb,	// (0x00047585) bg_button_pane_cp18_ParamLimits

0xaceb,	// (0x00047585) bg_button_pane_cp18

0xef36,	// (0x0004b7d0) main_touch_calib_button_pane_t1_ParamLimits

0xef36,	// (0x0004b7d0) main_touch_calib_button_pane_t1

0xef4c,	// (0x0004b7e6) main_touch_calib_button_pane_t2_ParamLimits

0xef4c,	// (0x0004b7e6) main_touch_calib_button_pane_t2

0x0001,

0xfe4c,	// (0x0004c6e6) main_touch_calib_button_pane_t_ParamLimits

0xfe4c,	// (0x0004c6e6) main_touch_calib_button_pane_t

0xa564,	// (0x00046dfe) cell_ncimui_button_pane

0xa564,	// (0x00046dfe) bg_button_pane_cp032

0xef6a,	// (0x0004b804) cell_ncimui_button_pane_t1

0x76ee,	// (0x00043f88) image3_infobar_pane_ParamLimits

0x76ee,	// (0x00043f88) image3_infobar_pane

0x94c2,	// (0x00045d5c) fs_bigclock_status_pane_ParamLimits

0x94c2,	// (0x00045d5c) fs_bigclock_status_pane

0x94cf,	// (0x00045d69) main_fs_bigclock_clock_pane_ParamLimits

0x94cf,	// (0x00045d69) main_fs_bigclock_clock_pane

0x94f3,	// (0x00045d8d) main_fs_bigclock_indi_pane_ParamLimits

0x94f3,	// (0x00045d8d) main_fs_bigclock_indi_pane

0x9523,	// (0x00045dbd) main_fs_bigclock_swipe_pane_ParamLimits

0x9523,	// (0x00045dbd) main_fs_bigclock_swipe_pane

0xa564,	// (0x00046dfe) main_fs_clock_dumped_data

0xe79b,	// (0x0004b035) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe79b,	// (0x0004b035) list_single_fs_bigclock_indicator_pane_g1

0xe7b6,	// (0x0004b050) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe7b6,	// (0x0004b050) list_single_fs_bigclock_indicator_pane_g2

0xe7d0,	// (0x0004b06a) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe7d0,	// (0x0004b06a) list_single_fs_bigclock_indicator_pane_g3

0xe7ea,	// (0x0004b084) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe7ea,	// (0x0004b084) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc7a,	// (0x0004c514) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc7a,	// (0x0004c514) list_single_fs_bigclock_indicator_pane_g

0xe813,	// (0x0004b0ad) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe813,	// (0x0004b0ad) list_single_fs_bigclock_indicator_pane_t1

0xe83b,	// (0x0004b0d5) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe83b,	// (0x0004b0d5) list_single_fs_bigclock_indicator_pane_t2

0xe863,	// (0x0004b0fd) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe863,	// (0x0004b0fd) list_single_fs_bigclock_indicator_pane_t3

0xe89d,	// (0x0004b137) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe89d,	// (0x0004b137) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc85,	// (0x0004c51f) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc85,	// (0x0004c51f) list_single_fs_bigclock_indicator_pane_t

0xef78,	// (0x0004b812) image3_infobar_fav_pane_ParamLimits

0xef78,	// (0x0004b812) image3_infobar_fav_pane

0xef88,	// (0x0004b822) image3_infobar_loc_pane_ParamLimits

0xef88,	// (0x0004b822) image3_infobar_loc_pane

0xef9c,	// (0x0004b836) image3_infobar_time_pane_ParamLimits

0xef9c,	// (0x0004b836) image3_infobar_time_pane

0xcfda,	// (0x00049874) image3_infobar_time_pane_g1

0xefac,	// (0x0004b846) image3_infobar_time_pane_t1

0xcfda,	// (0x00049874) image3_infobar_loc_pane_g1

0xefba,	// (0x0004b854) image3_infobar_loc_pane_g2

0x0001,

0xfe51,	// (0x0004c6eb) image3_infobar_loc_pane_g

0xefc2,	// (0x0004b85c) image3_infobar_loc_pane_t1

0xcfda,	// (0x00049874) image3_infobar_fav_pane_g1

0xefd0,	// (0x0004b86a) image3_infobar_fav_pane_g2

0x0001,

0xfe56,	// (0x0004c6f0) image3_infobar_fav_pane_g

0xefd8,	// (0x0004b872) fs_bigclock_status_battery_pane

0xefe1,	// (0x0004b87b) fs_bigclock_status_signal_pane

0xefea,	// (0x0004b884) fs_bigclock_status_title_pane

0xeff3,	// (0x0004b88d) fs_bigclock_status_signal_pane_g1

0xeffc,	// (0x0004b896) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe5b,	// (0x0004c6f5) fs_bigclock_status_signal_pane_g

0xf004,	// (0x0004b89e) fs_bigclock_status_battery_pane_g1

0xf00d,	// (0x0004b8a7) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe60,	// (0x0004c6fa) fs_bigclock_status_battery_pane_g

0xf015,	// (0x0004b8af) fs_bigclock_status_title_pane_t1

0xcfda,	// (0x00049874) main_fs_bigclock_clock_pane_g1

0x9c55,	// (0x000464ef) main_fs_bigclock_clock_pane_g2

0x9c55,	// (0x000464ef) main_fs_bigclock_clock_pane_g3

0x9c55,	// (0x000464ef) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe65,	// (0x0004c6ff) main_fs_bigclock_clock_pane_g

0x9c5d,	// (0x000464f7) main_fs_bigclock_clock_pane_t1

0x9c6b,	// (0x00046505) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe6e,	// (0x0004c708) main_fs_bigclock_clock_pane_t

0xf023,	// (0x0004b8bd) list_single_fs_bigclock_indicator_pane_ParamLimits

0xf023,	// (0x0004b8bd) list_single_fs_bigclock_indicator_pane

0x9c7a,	// (0x00046514) list_single_fs_bigclock_pane_ParamLimits

0x9c7a,	// (0x00046514) list_single_fs_bigclock_pane

0xf03d,	// (0x0004b8d7) main_fs_bigclock_indicator_pane_t1

0xf04c,	// (0x0004b8e6) list_single_fs_bigclock_pane_g1

0xf054,	// (0x0004b8ee) list_single_fs_bigclock_pane_t1

0xcfda,	// (0x00049874) main_fs_bigclock_swipe_pane_g1

0xf097,	// (0x0004b931) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7f,	// (0x0004c719) main_fs_bigclock_swipe_pane_g

0xf09f,	// (0x0004b939) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xf09f,	// (0x0004b939) main_fs_bigclock_swipe_pane_t1

0x49ee,	// (0x00041288) call_type_pane_ParamLimits

0xa564,	// (0x00046dfe) main_btmg_pane

0x21fd,	// (0x0003ea97) list_single_cale_mrui_row_pane_g2_ParamLimits

0x21fd,	// (0x0003ea97) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf2,	// (0x0004c68c) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf2,	// (0x0004c68c) list_single_cale_mrui_row_pane_g

0x2327,	// (0x0003ebc1) list_recal_vselct_arw_lo_pane

0xeef3,	// (0x0004b78d) list_recal_vselct_arw_up_pane

0x232f,	// (0x0003ebc9) list_recal_vselct_pane

0x9cdb,	// (0x00046575) btmg_button_pane

0x9ce7,	// (0x00046581) main_btmg_pane_g1

0xa564,	// (0x00046dfe) bg_button_pane_cp044

0xf0bc,	// (0x0004b956) btmg_button_pane_t1

0xcbbc,	// (0x00049456) aid_listscroll_gen

0xb06d,	// (0x00047907) main_cntbar_detail_pane

0xeb93,	// (0x0004b42d) list_cmail_folder_pane

0xd6ca,	// (0x00049f64) sp_fs_scroll_pane_cp03_ParamLimits

0x23ce,	// (0x0003ec68) list_single_fs_dyc_pane_cp01_ParamLimits

0x23ce,	// (0x0003ec68) list_single_fs_dyc_pane_cp01

0xf0ca,	// (0x0004b964) aid_size_cmail_indent

0x2401,	// (0x0003ec9b) list_single_dyc_row_pane_cp01

0x9d0f,	// (0x000465a9) cntbar_detail_list_pane_ParamLimits

0x9d0f,	// (0x000465a9) cntbar_detail_list_pane

0x9d49,	// (0x000465e3) main_cntbar_detail_cont_pane_ParamLimits

0x9d49,	// (0x000465e3) main_cntbar_detail_cont_pane

0x49e2,	// (0x0004127c) scroll_pane_cp032_ParamLimits

0x49e2,	// (0x0004127c) scroll_pane_cp032

0x9d55,	// (0x000465ef) cntbar_detail_list_event_pane_ParamLimits

0x9d55,	// (0x000465ef) cntbar_detail_list_event_pane

0x9d1b,	// (0x000465b5) cntbar_detail_list_shct_pane

0xb171,	// (0x00047a0b) aid_list_gen

0x0002,	// (0x0003c89c) aid_scroll

0x000b,	// (0x0003c8a5) aid_size_touch_scroll_bar

0x19b8,	// (0x0003e252) aid_list_double

0x240a,	// (0x0003eca4) aid_list_single

0x0014,	// (0x0003c8ae) aid_list_single_lg

0x2413,	// (0x0003ecad) aid_list_z_g_a_sm

0x241b,	// (0x0003ecb5) aid_list_z_g_d

0x2423,	// (0x0003ecbd) aid_txt_z_prm

0x2431,	// (0x0003eccb) aid_txt_z_prm_cp01

0x243f,	// (0x0003ecd9) aid_txt_z_sec

0x9d69,	// (0x00046603) main_cntbar_detail_cont_pane_g1_ParamLimits

0x9d69,	// (0x00046603) main_cntbar_detail_cont_pane_g1

0x9d76,	// (0x00046610) main_cntbar_detail_cont_pane_g2_ParamLimits

0x9d76,	// (0x00046610) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe84,	// (0x0004c71e) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe84,	// (0x0004c71e) main_cntbar_detail_cont_pane_g

0x003b,	// (0x0003c8d5) main_cntbar_detail_cont_pane_t1

0x0049,	// (0x0003c8e3) main_cntbar_detail_cont_pane_t2

0x0057,	// (0x0003c8f1) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe89,	// (0x0004c723) main_cntbar_detail_cont_pane_t

0x9d82,	// (0x0004661c) cell_cntbar_detail_list_shct_pane_ParamLimits

0x9d82,	// (0x0004661c) cell_cntbar_detail_list_shct_pane

0x0065,	// (0x0003c8ff) cntbar_detail_list_shct_pane_g1

0x006e,	// (0x0003c908) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe90,	// (0x0004c72a) cntbar_detail_list_shct_pane_g

0x9d96,	// (0x00046630) cntbar_detail_list_event_pane_g1_ParamLimits

0x9d96,	// (0x00046630) cntbar_detail_list_event_pane_g1

0x9da2,	// (0x0004663c) cntbar_detail_list_event_pane_g2_ParamLimits

0x9da2,	// (0x0004663c) cntbar_detail_list_event_pane_g2

0x0005,

0xfe95,	// (0x0004c72f) cntbar_detail_list_event_pane_g_ParamLimits

0xfe95,	// (0x0004c72f) cntbar_detail_list_event_pane_g

0x9e0e,	// (0x000466a8) cntbar_detail_list_event_pane_t1_ParamLimits

0x9e0e,	// (0x000466a8) cntbar_detail_list_event_pane_t1

0x9e23,	// (0x000466bd) cntbar_detail_list_event_pane_t2_ParamLimits

0x9e23,	// (0x000466bd) cntbar_detail_list_event_pane_t2

0x0002,

0xfea2,	// (0x0004c73c) cntbar_detail_list_event_pane_t_ParamLimits

0xfea2,	// (0x0004c73c) cntbar_detail_list_event_pane_t

0xcfda,	// (0x00049874) cell_cntbar_detail_list_shct_pane_g1

0x4d7d,	// (0x00041617) navi_pane_mv_g3

0xb06d,	// (0x00047907) main_cntbar_detail_pane_ParamLimits

0xa564,	// (0x00046dfe) main_notif_wgt_pane

0x73a2,	// (0x00043c3c) aid_tch_main_mp4_pane_g4

0x75d7,	// (0x00043e71) popup_slider_window_cp02

0x231d,	// (0x0003ebb7) list_recal_day_event_pane

0x9cef,	// (0x00046589) cntbar_detail_btn_pane_ParamLimits

0x9cef,	// (0x00046589) cntbar_detail_btn_pane

0x9cff,	// (0x00046599) cntbar_detail_btn_pane_cp01_ParamLimits

0x9cff,	// (0x00046599) cntbar_detail_btn_pane_cp01

0x9d1b,	// (0x000465b5) cntbar_detail_list_shct_pane_ParamLimits

0x9d27,	// (0x000465c1) cntbar_detail_pane_g1_ParamLimits

0x9d27,	// (0x000465c1) cntbar_detail_pane_g1

0x9d33,	// (0x000465cd) cntbar_detail_pane_t1_ParamLimits

0x9d33,	// (0x000465cd) cntbar_detail_pane_t1

0x9dae,	// (0x00046648) cntbar_detail_list_event_pane_g3_ParamLimits

0x9dae,	// (0x00046648) cntbar_detail_list_event_pane_g3

0x9dc6,	// (0x00046660) cntbar_detail_list_event_pane_g4_ParamLimits

0x9dc6,	// (0x00046660) cntbar_detail_list_event_pane_g4

0x9dde,	// (0x00046678) cntbar_detail_list_event_pane_g5_ParamLimits

0x9dde,	// (0x00046678) cntbar_detail_list_event_pane_g5

0x9df6,	// (0x00046690) cntbar_detail_list_event_pane_g6_ParamLimits

0x9df6,	// (0x00046690) cntbar_detail_list_event_pane_g6

0x9e38,	// (0x000466d2) cntbar_detail_list_event_pane_t3_ParamLimits

0x9e38,	// (0x000466d2) cntbar_detail_list_event_pane_t3

0x9e4a,	// (0x000466e4) popup_notif_wgt_window_ParamLimits

0x9e4a,	// (0x000466e4) popup_notif_wgt_window

0x9e5a,	// (0x000466f4) popup_submenu_window_cp01_ParamLimits

0x9e5a,	// (0x000466f4) popup_submenu_window_cp01

0xb7ce,	// (0x00048068) bg_popup_window_pane_cp10

0x0077,	// (0x0003c911) listscroll_notif_wgt_pane

0x0088,	// (0x0003c922) list_notif_wgt_window

0x0091,	// (0x0003c92b) scroll_pane_cp033

0x9e68,	// (0x00046702) list_notif_wgt_row_pane_ParamLimits

0x9e68,	// (0x00046702) list_notif_wgt_row_pane

0x009a,	// (0x0003c934) aid_size_list_notif_wgt_del

0x00a7,	// (0x0003c941) list_notif_wgt_row_pane_g1

0x00b3,	// (0x0003c94d) list_notif_wgt_row_pane_g2

0x00bf,	// (0x0003c959) list_notif_wgt_row_pane_g3

0x0002,

0xfea9,	// (0x0004c743) list_notif_wgt_row_pane_g

0x00cc,	// (0x0003c966) list_notif_wgt_row_pane_t1

0x00e1,	// (0x0003c97b) list_notif_wgt_row_pane_t2

0x00f3,	// (0x0003c98d) list_notif_wgt_row_pane_t3

0x0002,

0xfeb0,	// (0x0004c74a) list_notif_wgt_row_pane_t

0xdc92,	// (0x0004a52c) list_recal_day_event_pane_g1

0x0105,	// (0x0003c99f) list_recal_day_event_pane_t1

0xa564,	// (0x00046dfe) bg_button_pane_cp045

0x0114,	// (0x0003c9ae) cntbar_detail_btn_pane_t1

0xcbd0,	// (0x0004946a) main_callh_pane_ParamLimits

0xcbd0,	// (0x0004946a) main_callh_pane

0xa564,	// (0x00046dfe) main_coverflow0_pane

0xa564,	// (0x00046dfe) main_wgtman_pane

0x953b,	// (0x00045dd5) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x953b,	// (0x00045dd5) main_fs_bigclock_unlock_btn_pane

0x989d,	// (0x00046137) bg_button_pane_cp16

0x98ad,	// (0x00046147) cell_tport_appsw_pane_g3

0x9e79,	// (0x00046713) cf0_flow_pane_ParamLimits

0x9e79,	// (0x00046713) cf0_flow_pane

0x0122,	// (0x0003c9bc) listscroll_cf0_pane

0x012d,	// (0x0003c9c7) main_cf0_pane_g1

0x9e88,	// (0x00046722) main_cf0_pane_t1_ParamLimits

0x9e88,	// (0x00046722) main_cf0_pane_t1

0x9e9c,	// (0x00046736) main_cf0_pane_t2_ParamLimits

0x9e9c,	// (0x00046736) main_cf0_pane_t2

0x0001,

0xfebc,	// (0x0004c756) main_cf0_pane_t_ParamLimits

0xfebc,	// (0x0004c756) main_cf0_pane_t

0x013f,	// (0x0003c9d9) scroll_pane_cp11

0x9eb0,	// (0x0004674a) cf0_flow_pane_g1

0x9eb8,	// (0x00046752) cf0_flow_pane_g2

0x0001,

0xfec1,	// (0x0004c75b) cf0_flow_pane_g

0x9ec0,	// (0x0004675a) cf0_flow_pane_t1

0xa564,	// (0x00046dfe) main_call6_pane

0xa564,	// (0x00046dfe) main_calllock_pane

0x9ece,	// (0x00046768) call6_btn_grp_pane_ParamLimits

0x9ece,	// (0x00046768) call6_btn_grp_pane

0x9edd,	// (0x00046777) call6_pane_g1_ParamLimits

0x9edd,	// (0x00046777) call6_pane_g1

0x9eec,	// (0x00046786) popup_call6_1st_window_ParamLimits

0x9eec,	// (0x00046786) popup_call6_1st_window

0x9efa,	// (0x00046794) popup_call6_2nd_window_ParamLimits

0x9efa,	// (0x00046794) popup_call6_2nd_window

0x9f08,	// (0x000467a2) cell_call6_btn_pane_ParamLimits

0x9f08,	// (0x000467a2) cell_call6_btn_pane

0xb7ce,	// (0x00048068) bg_popup_call2_in_pane_cp03

0x014a,	// (0x0003c9e4) popup_call6_1st_window_g1

0x0152,	// (0x0003c9ec) popup_call6_1st_window_g2

0x015a,	// (0x0003c9f4) popup_call6_1st_window_g3

0x0002,

0xfec6,	// (0x0004c760) popup_call6_1st_window_g

0x0162,	// (0x0003c9fc) popup_call6_1st_window_t1

0x0171,	// (0x0003ca0b) popup_call6_1st_window_t2

0x0181,	// (0x0003ca1b) popup_call6_1st_window_t3

0x0002,

0xfecd,	// (0x0004c767) popup_call6_1st_window_t

0xb7ce,	// (0x00048068) bg_popup_call2_in_pane_cp04

0x014a,	// (0x0003c9e4) popup_call6_2nd_window_g1

0x0152,	// (0x0003c9ec) popup_call6_2nd_window_g2

0x015a,	// (0x0003c9f4) popup_call6_2nd_window_g3

0x0002,

0xfec6,	// (0x0004c760) popup_call6_2nd_window_g

0x0162,	// (0x0003c9fc) popup_call6_2nd_window_t1

0xa564,	// (0x00046dfe) bg_button_pane_cp15

0x0191,	// (0x0003ca2b) cell_call6_btn_pane_g1

0x019a,	// (0x0003ca34) cell_call6_btn_pane_t1

0x9f17,	// (0x000467b1) listscroll_wgtman_pane_ParamLimits

0x9f17,	// (0x000467b1) listscroll_wgtman_pane

0x9f35,	// (0x000467cf) wgtman_btn_pane_ParamLimits

0x9f35,	// (0x000467cf) wgtman_btn_pane

0xb685,	// (0x00047f1f) aid_scroll_copy1

0x01a9,	// (0x0003ca43) list_wgtman_pane

0x9f6a,	// (0x00046804) wgtman_btn_pane_g1_ParamLimits

0x9f6a,	// (0x00046804) wgtman_btn_pane_g1

0x9f92,	// (0x0004682c) wgtman_btn_pane_t1_ParamLimits

0x9f92,	// (0x0004682c) wgtman_btn_pane_t1

0x01b3,	// (0x0003ca4d) wgtman_btn_pane_t2_ParamLimits

0x01b3,	// (0x0003ca4d) wgtman_btn_pane_t2

0x0001,

0xfed4,	// (0x0004c76e) wgtman_btn_pane_t_ParamLimits

0xfed4,	// (0x0004c76e) wgtman_btn_pane_t

0x9fc9,	// (0x00046863) listrow_wgtman_pane_ParamLimits

0x9fc9,	// (0x00046863) listrow_wgtman_pane

0x9fe2,	// (0x0004687c) listrow_wgtman_pane_g1

0x9fef,	// (0x00046889) listrow_wgtman_pane_g2

0x0001,

0xfed9,	// (0x0004c773) listrow_wgtman_pane_g

0x244d,	// (0x0003ece7) listrow_wgtman_pane_t1

0x2465,	// (0x0003ecff) listrow_wgtman_pane_t2

0x0001,

0xfede,	// (0x0004c778) listrow_wgtman_pane_t

0x248b,	// (0x0003ed25) wait_bar_pane_cp09

0x01ca,	// (0x0003ca64) main_calllock_btn_pane

0x01d4,	// (0x0003ca6e) main_calllock_pane_g1

0xa564,	// (0x00046dfe) bg_button_pane_cp17

0x01df,	// (0x0003ca79) main_calllock_btn_pane_g1

0x01e8,	// (0x0003ca82) main_calllock_btn_pane_t1

0xa564,	// (0x00046dfe) main_dialer3_pane

0xa564,	// (0x00046dfe) main_fmrd2_pane

0xcfda,	// (0x00049874) main_fs_bigclock_unlock_btn_pane_g1

0x01ff,	// (0x0003ca99) main_fs_bigclock_unlock_btn_pane_t1

0xa00d,	// (0x000468a7) area_fmrd2_info_pane_ParamLimits

0xa00d,	// (0x000468a7) area_fmrd2_info_pane

0xa01b,	// (0x000468b5) area_fmrd2_visual_pane_ParamLimits

0xa01b,	// (0x000468b5) area_fmrd2_visual_pane

0xa029,	// (0x000468c3) fmrd2_indi_pane_ParamLimits

0xa029,	// (0x000468c3) fmrd2_indi_pane

0xa036,	// (0x000468d0) area_fmrd2_visual_pane_g1

0xa03e,	// (0x000468d8) area_fmrd2_visual_pane_t1

0xa04e,	// (0x000468e8) area_fmrd2_visual_pane_t2

0xa05e,	// (0x000468f8) area_fmrd2_visual_pane_t3

0x0002,

0xfee8,	// (0x0004c782) area_fmrd2_visual_pane_t

0xa06e,	// (0x00046908) area_fmrd2_info_pane_g1

0xa076,	// (0x00046910) area_fmrd2_info_pane_t1

0xa086,	// (0x00046920) area_fmrd2_info_pane_t2

0xa096,	// (0x00046930) area_fmrd2_info_pane_t3

0xa0a6,	// (0x00046940) area_fmrd2_info_pane_t4

0x0003,

0xfeef,	// (0x0004c789) area_fmrd2_info_pane_t

0xa0b4,	// (0x0004694e) fmrd2_indi_pane_t1

0xa0c4,	// (0x0004695e) fmrd2_indi_pane_t2

0xa0d4,	// (0x0004696e) fmrd2_indi_pane_t3

0x0002,

0xfef8,	// (0x0004c792) fmrd2_indi_pane_t

0xe7f9,	// (0x0004b093) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe7f9,	// (0x0004b093) list_single_fs_bigclock_indicator_pane_g5

0xe8b2,	// (0x0004b14c) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe8b2,	// (0x0004b14c) list_single_fs_bigclock_indicator_pane_t5

0x9a38,	// (0x000462d2) aid_cell_bcale_month_pane_ParamLimits

0x9a38,	// (0x000462d2) aid_cell_bcale_month_pane

0x9a56,	// (0x000462f0) bcale_month_pane_ParamLimits

0x9a56,	// (0x000462f0) bcale_month_pane

0x9a74,	// (0x0004630e) bcale_preview_pane_ParamLimits

0x9a74,	// (0x0004630e) bcale_preview_pane

0xf054,	// (0x0004b8ee) list_single_fs_bigclock_pane_t1_ParamLimits

0xf073,	// (0x0004b90d) list_single_fs_bigclock_pane_t2_ParamLimits

0xf073,	// (0x0004b90d) list_single_fs_bigclock_pane_t2

0x0001,

0xfe7a,	// (0x0004c714) list_single_fs_bigclock_pane_t_ParamLimits

0xfe7a,	// (0x0004c714) list_single_fs_bigclock_pane_t

0x01f7,	// (0x0003ca91) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee3,	// (0x0004c77d) main_fs_bigclock_unlock_btn_pane_g

0xa0e2,	// (0x0004697c) aid_dia3_key_size_ParamLimits

0xa0e2,	// (0x0004697c) aid_dia3_key_size

0xa0ee,	// (0x00046988) aid_dia3_listrow_size_ParamLimits

0xa0ee,	// (0x00046988) aid_dia3_listrow_size

0xa0fe,	// (0x00046998) dia3_keypad_fun_pane_ParamLimits

0xa0fe,	// (0x00046998) dia3_keypad_fun_pane

0xa110,	// (0x000469aa) dia3_keypad_num_pane_ParamLimits

0xa110,	// (0x000469aa) dia3_keypad_num_pane

0xa122,	// (0x000469bc) dia3_listscroll_pane_ParamLimits

0xa122,	// (0x000469bc) dia3_listscroll_pane

0xa130,	// (0x000469ca) dia3_numentry_pane_ParamLimits

0xa130,	// (0x000469ca) dia3_numentry_pane

0x020d,	// (0x0003caa7) dia3_list_pane

0x0218,	// (0x0003cab2) scroll_pane_cp12

0xa564,	// (0x00046dfe) bg_dia3_numentry_pane

0xa13e,	// (0x000469d8) dia3_numentry_pane_t1

0xa14d,	// (0x000469e7) cell_dia3_key_num_pane

0xa155,	// (0x000469ef) cell_dia3_key0_fun_pane_ParamLimits

0xa155,	// (0x000469ef) cell_dia3_key0_fun_pane

0xa162,	// (0x000469fc) cell_dia3_key1_fun_pane_ParamLimits

0xa162,	// (0x000469fc) cell_dia3_key1_fun_pane

0xa16f,	// (0x00046a09) dia3_listrow_pane

0xe508,	// (0x0004ada2) bg_dia3_numentry_pane_g1

0xa564,	// (0x00046dfe) bg_button_pane_cp21

0x0223,	// (0x0003cabd) cell_dia3_key_num_pane_t1

0x0231,	// (0x0003cacb) cell_dia3_key_num_pane_t2

0x0240,	// (0x0003cada) cell_dia3_key_num_pane_t3

0x024f,	// (0x0003cae9) cell_dia3_key_num_pane_t4

0x0003,

0xfeff,	// (0x0004c799) cell_dia3_key_num_pane_t

0xa564,	// (0x00046dfe) bg_button_pane_cp19

0xa17c,	// (0x00046a16) cell_dia3_key0_fun_pane_g1

0xa564,	// (0x00046dfe) bg_button_pane_cp20

0xa184,	// (0x00046a1e) cell_dia3_key1_fun_pane_g1

0xa18c,	// (0x00046a26) area_left_week_number_pane

0xa19f,	// (0x00046a39) area_top_day_name_pane

0xa1ad,	// (0x00046a47) frame_month_view_pane

0x025e,	// (0x0003caf8) grid_month_view_pane

0xa1c2,	// (0x00046a5c) cell_top_day_name_pane_ParamLimits

0xa1c2,	// (0x00046a5c) cell_top_day_name_pane

0xa1dc,	// (0x00046a76) cell_area_left_week_number_pane_ParamLimits

0xa1dc,	// (0x00046a76) cell_area_left_week_number_pane

0xa1ff,	// (0x00046a99) cell_month_view_pane_ParamLimits

0xa1ff,	// (0x00046a99) cell_month_view_pane

0x026c,	// (0x0003cb06) frm_month_g1

0xa22b,	// (0x00046ac5) frm_month_g2

0xa23c,	// (0x00046ad6) frm_month_g3

0xa24d,	// (0x00046ae7) frm_month_g4

0xa25e,	// (0x00046af8) frm_month_g5

0xa271,	// (0x00046b0b) frm_month_g6

0xa284,	// (0x00046b1e) frm_month_g7

0x0279,	// (0x0003cb13) frm_month_g8

0xa297,	// (0x00046b31) frm_month_g9

0xa2a4,	// (0x00046b3e) frm_month_g10

0xa2b1,	// (0x00046b4b) frm_month_g11

0xa2be,	// (0x00046b58) frm_month_g12

0xa2cb,	// (0x00046b65) frm_month_g13

0xa2d8,	// (0x00046b72) frm_month_g14

0xa2e7,	// (0x00046b81) frm_month_g15

0xa2f6,	// (0x00046b90) frm_month_g16

0x000f,

0xff08,	// (0x0004c7a2) frm_month_g

0x0286,	// (0x0003cb20) cell_top_day_name_pane_t1

0xa305,	// (0x00046b9f) cell_area_left_week_number_pane_g1

0xa314,	// (0x00046bae) cell_area_left_week_number_pane_t1

0xd23a,	// (0x00049ad4) cell_month_view_pane_g1

0xa32a,	// (0x00046bc4) cell_month_view_pane_t1

0xa564,	// (0x00046dfe) main_fps_pane

0xeaa2,	// (0x0004b33c) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xeaa2,	// (0x0004b33c) cmail_ddmenu_btn02_pane_cp1

0xeabe,	// (0x0004b358) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xeabe,	// (0x0004b358) cmail_ddmenu_btn02_pane_cp2

0x9bd4,	// (0x0004646e) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x9bd4,	// (0x0004646e) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe2d,	// (0x0004c6c7) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe2d,	// (0x0004c6c7) cmail_ddmenu_btn02_pane_g

0x9bf2,	// (0x0004648c) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x9bf2,	// (0x0004648c) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe32,	// (0x0004c6cc) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe32,	// (0x0004c6cc) cmail_ddmenu_btn02_pane_t

0xa340,	// (0x00046bda) fps_text_pane_ParamLimits

0xa340,	// (0x00046bda) fps_text_pane

0xa34d,	// (0x00046be7) main_fps_pane_g1_ParamLimits

0xa34d,	// (0x00046be7) main_fps_pane_g1

0xa35b,	// (0x00046bf5) wait_bar_pane_cp010_ParamLimits

0xa35b,	// (0x00046bf5) wait_bar_pane_cp010

0xa367,	// (0x00046c01) fps_text_pane_t1_ParamLimits

0xa367,	// (0x00046c01) fps_text_pane_t1

0x79b9,	// (0x00044253) cam4_image_uncrop_pane_g1

0x79c2,	// (0x0004425c) cam4_image_uncrop_pane_g2

0x79cb,	// (0x00044265) cam4_image_uncrop_pane_g3

0x79d4,	// (0x0004426e) cam4_image_uncrop_pane_g4

0x0003,

0xf8f4,	// (0x0004c18e) cam4_image_uncrop_pane_g

0xa16f,	// (0x00046a09) dia3_listrow_pane_ParamLimits

0xa564,	// (0x00046dfe) main_phob2_pane

0x987f,	// (0x00046119) cell_tport_appsw_pane_cp02_ParamLimits

0x987f,	// (0x00046119) cell_tport_appsw_pane_cp02

0x988e,	// (0x00046128) cell_tport_appsw_pane_cp03_ParamLimits

0x988e,	// (0x00046128) cell_tport_appsw_pane_cp03

0xa564,	// (0x00046dfe) phob2_contact_card_pane

0xa564,	// (0x00046dfe) phob2_listscroll_pane

0x0299,	// (0x0003cb33) phob2_list_pane

0x02a1,	// (0x0003cb3b) scroll_pane_cp034

0xa380,	// (0x00046c1a) phob2_cc_data_pane_ParamLimits

0xa380,	// (0x00046c1a) phob2_cc_data_pane

0xa39a,	// (0x00046c34) phob2_cc_listscroll_pane_ParamLimits

0xa39a,	// (0x00046c34) phob2_cc_listscroll_pane

0xa3b4,	// (0x00046c4e) list_double_large_graphic_phob2_pane_ParamLimits

0xa3b4,	// (0x00046c4e) list_double_large_graphic_phob2_pane

0xa3d6,	// (0x00046c70) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xa3d6,	// (0x00046c70) list_double_large_graphic_phob2_pane_g1

0x249d,	// (0x0003ed37) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x249d,	// (0x0003ed37) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff29,	// (0x0004c7c3) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff29,	// (0x0004c7c3) list_double_large_graphic_phob2_pane_g

0x24a9,	// (0x0003ed43) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x24a9,	// (0x0003ed43) list_double_large_graphic_phob2_pane_t1

0x24bf,	// (0x0003ed59) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x24bf,	// (0x0003ed59) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff2e,	// (0x0004c7c8) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff2e,	// (0x0004c7c8) list_double_large_graphic_phob2_pane_t

0xa564,	// (0x00046dfe) list_highlight_pane_cp024

0x02a9,	// (0x0003cb43) phob2_cc_button_pane

0xa3ec,	// (0x00046c86) phob2_cc_data_pane_g1_ParamLimits

0xa3ec,	// (0x00046c86) phob2_cc_data_pane_g1

0xa3f8,	// (0x00046c92) phob2_cc_data_pane_g2_ParamLimits

0xa3f8,	// (0x00046c92) phob2_cc_data_pane_g2

0x0001,

0xff33,	// (0x0004c7cd) phob2_cc_data_pane_g_ParamLimits

0xff33,	// (0x0004c7cd) phob2_cc_data_pane_g

0xa404,	// (0x00046c9e) phob2_cc_data_pane_t1_ParamLimits

0xa404,	// (0x00046c9e) phob2_cc_data_pane_t1

0xa416,	// (0x00046cb0) phob2_cc_data_pane_t2_ParamLimits

0xa416,	// (0x00046cb0) phob2_cc_data_pane_t2

0xa428,	// (0x00046cc2) phob2_cc_data_pane_t3_ParamLimits

0xa428,	// (0x00046cc2) phob2_cc_data_pane_t3

0x0002,

0xff38,	// (0x0004c7d2) phob2_cc_data_pane_t_ParamLimits

0xff38,	// (0x0004c7d2) phob2_cc_data_pane_t

0x02b1,	// (0x0003cb4b) phob2_cc_list_pane_ParamLimits

0x02b1,	// (0x0003cb4b) phob2_cc_list_pane

0xdeb9,	// (0x0004a753) scroll_pane_cp035_ParamLimits

0xdeb9,	// (0x0004a753) scroll_pane_cp035

0xb06d,	// (0x00047907) bg_button_pane_cp033

0x02bd,	// (0x0003cb57) phob2_cc_button_pane_g1

0x02c9,	// (0x0003cb63) phob2_cc_button_pane_t1

0x02de,	// (0x0003cb78) phob2_cc_button_pane_t2

0x0001,

0xff3f,	// (0x0004c7d9) phob2_cc_button_pane_t

0xa43a,	// (0x00046cd4) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xa43a,	// (0x00046cd4) list_double_large_graphic_phob2_cc_pane

0xa469,	// (0x00046d03) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xa469,	// (0x00046d03) list_double_large_graphic_phob2_cc_pane_g1

0x24d4,	// (0x0003ed6e) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x24d4,	// (0x0003ed6e) list_double_large_graphic_phob2_cc_pane_g2

0x24e3,	// (0x0003ed7d) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x24e3,	// (0x0003ed7d) list_double_large_graphic_phob2_cc_pane_g3

0x24f2,	// (0x0003ed8c) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x24f2,	// (0x0003ed8c) list_double_large_graphic_phob2_cc_pane_g4

0x2503,	// (0x0003ed9d) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x2503,	// (0x0003ed9d) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff44,	// (0x0004c7de) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff44,	// (0x0004c7de) list_double_large_graphic_phob2_cc_pane_g

0x2512,	// (0x0003edac) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x2512,	// (0x0003edac) list_double_large_graphic_phob2_cc_pane_t1

0x253b,	// (0x0003edd5) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x253b,	// (0x0003edd5) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4f,	// (0x0004c7e9) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4f,	// (0x0004c7e9) list_double_large_graphic_phob2_cc_pane_t

0x02f0,	// (0x0003cb8a) list_highlight_pane_cp025_ParamLimits

0x02f0,	// (0x0003cb8a) list_highlight_pane_cp025

0xb06d,	// (0x00047907) bg_button_pane_cp033_ParamLimits

0x02bd,	// (0x0003cb57) phob2_cc_button_pane_g1_ParamLimits

0x02c9,	// (0x0003cb63) phob2_cc_button_pane_t1_ParamLimits

0x02de,	// (0x0003cb78) phob2_cc_button_pane_t2_ParamLimits

0xff3f,	// (0x0004c7d9) phob2_cc_button_pane_t_ParamLimits

0x283b,	// (0x0003f0d5) popup_wgtman_window

0xdb65,	// (0x0004a3ff) scroll_pane_cp038

0x9f52,	// (0x000467ec) wgtman_btn_pane_cp_01_ParamLimits

0x9f52,	// (0x000467ec) wgtman_btn_pane_cp_01

0x02fe,	// (0x0003cb98) wgtman_content_pane

0x0307,	// (0x0003cba1) wgtman_heading_pane

0xa564,	// (0x00046dfe) bg_heading_pane_cp02

0x0310,	// (0x0003cbaa) wgtman_heading_pane_g1

0x0318,	// (0x0003cbb2) wgtman_heading_pane_t1

0x0326,	// (0x0003cbc0) scroll_pane_cp036

0x032e,	// (0x0003cbc8) wgtman_list_pane

0x0336,	// (0x0003cbd0) wgtman_list_pane_t1_ParamLimits

0x0336,	// (0x0003cbd0) wgtman_list_pane_t1

0x7918,	// (0x000441b2) cam4_grid_pane

0x178c,	// (0x0003e026) bg_button_pane_cp015_ParamLimits

0x85ba,	// (0x00044e54) bg_button_pane_cp016_ParamLimits

0x85cd,	// (0x00044e67) bg_button_pane_cp017_ParamLimits

0x17d0,	// (0x0003e06a) popup_vitu2_query_window_g3_ParamLimits

0x17d0,	// (0x0003e06a) popup_vitu2_query_window_g3

0x1849,	// (0x0003e0e3) popup_vitu2_query_window_t6_ParamLimits

0x1849,	// (0x0003e0e3) popup_vitu2_query_window_t6

0x1874,	// (0x0003e10e) popup_vitu2_query_window_t7_ParamLimits

0x1874,	// (0x0003e10e) popup_vitu2_query_window_t7

0xe88b,	// (0x0004b125) cam4_grid_pane_g1

0xe894,	// (0x0004b12e) cam4_grid_pane_g2

0x0352,	// (0x0003cbec) cam4_grid_pane_g3

0x035b,	// (0x0003cbf5) cam4_grid_pane_g4

0x0003,

0xff54,	// (0x0004c7ee) cam4_grid_pane_g

0x3688,	// (0x0003ff22) aid_placing_vt_slider_lsc_ParamLimits

0x39c8,	// (0x00040262) vidtel_button_pane_ParamLimits

0x39c8,	// (0x00040262) vidtel_button_pane

0x0366,	// (0x0003cc00) bg_button_pane_cp034

0xa47a,	// (0x00046d14) vidtel_button_pane_g1

0x0370,	// (0x0003cc0a) vidtel_button_pane_t1

0xdc82,	// (0x0004a51c) aid_size_vtel_slider_touch

0xdeb9,	// (0x0004a753) scroll_pane_cp039

0xe546,	// (0x0004ade0) ncim_query_button_pane_cp01_ParamLimits

0xe565,	// (0x0004adff) ncimui_query_pane_g1_ParamLimits

0xb06d,	// (0x00047907) input_focus_pane_cp012_ParamLimits

0xe58a,	// (0x0004ae24) ncim_query_entry_pane_t1_ParamLimits

0xdeb9,	// (0x0004a753) scroll_pane_cp039_ParamLimits

0x4cef,	// (0x00041589) navi_pane_bcale_mc_g1

0x4cf7,	// (0x00041591) navi_pane_bcale_mc_t1

0xeb07,	// (0x0004b3a1) main_sp_fs_email_pane_g1

0xeb13,	// (0x0004b3ad) main_sp_fs_email_pane_g2

0x0001,

0xfceb,	// (0x0004c585) main_sp_fs_email_pane_g

0xed64,	// (0x0004b5fe) list_single_cale_mrui_row_pane_g3_ParamLimits

0xed64,	// (0x0004b5fe) list_single_cale_mrui_row_pane_g3

0x238c,	// (0x0003ec26) list_single_recal_day_pane_g5_event_pane

0x23a2,	// (0x0003ec3c) list_single_recal_day_pane_g7

0x037e,	// (0x0003cc18) list_recal_day_event_pane_cp01

0x0387,	// (0x0003cc21) list_recal_vselct_arw_lo_pane_cp01

0x038f,	// (0x0003cc29) list_recal_vselct_arw_up_pane_cp01

0x0397,	// (0x0003cc31) list_recal_vselct_pane_cp01

0xdc92,	// (0x0004a52c) list_recal_day_event_pane_cp01_g1

0x2564,	// (0x0003edfe) list_recal_day_event_pane_cp01_t1

0x23aa,	// (0x0003ec44) list_single_recal_day_pane_t1_ParamLimits

0x23bc,	// (0x0003ec56) list_single_recal_day_pane_t2_ParamLimits

0xfe42,	// (0x0004c6dc) list_single_recal_day_pane_t_ParamLimits

0xac07,	// (0x000474a1) bg_notes_pane_ParamLimits

0xacc9,	// (0x00047563) list_notes_pane_ParamLimits

0x2b86,	// (0x0003f420) scroll_pane_cp06_ParamLimits

0xaceb,	// (0x00047585) main_notes_pane_ParamLimits

0xa564,	// (0x00046dfe) main_welc_pane

0xa482,	// (0x00046d1c) main_welc_body_pane_ParamLimits

0xa482,	// (0x00046d1c) main_welc_body_pane

0xa49b,	// (0x00046d35) main_welc_opti_pane_ParamLimits

0xa49b,	// (0x00046d35) main_welc_opti_pane

0xa4d0,	// (0x00046d6a) main_welc_pane_t1_ParamLimits

0xa4d0,	// (0x00046d6a) main_welc_pane_t1

0xa4ee,	// (0x00046d88) main_welc_body_row_pane_ParamLimits

0xa4ee,	// (0x00046d88) main_welc_body_row_pane

0xdace,	// (0x0004a368) main_welc_opti_row_pane_ParamLimits

0xdace,	// (0x0004a368) main_welc_opti_row_pane

0x03af,	// (0x0003cc49) main_welc_opti_row_pane_g1

0x03b7,	// (0x0003cc51) main_welc_opti_row_pane_t1

0x03c7,	// (0x0003cc61) main_welc_body_row_pane_t1

0x0080,	// (0x0003c91a) popup_notif_wgt_heading_pane

0x009a,	// (0x0003c934) aid_size_list_notif_wgt_del_ParamLimits

0x00a7,	// (0x0003c941) list_notif_wgt_row_pane_g1_ParamLimits

0x00b3,	// (0x0003c94d) list_notif_wgt_row_pane_g2_ParamLimits

0x00bf,	// (0x0003c959) list_notif_wgt_row_pane_g3_ParamLimits

0xfea9,	// (0x0004c743) list_notif_wgt_row_pane_g_ParamLimits

0x00cc,	// (0x0003c966) list_notif_wgt_row_pane_t1_ParamLimits

0x00e1,	// (0x0003c97b) list_notif_wgt_row_pane_t2_ParamLimits

0x00f3,	// (0x0003c98d) list_notif_wgt_row_pane_t3_ParamLimits

0xfeb0,	// (0x0004c74a) list_notif_wgt_row_pane_t_ParamLimits

0x9fe2,	// (0x0004687c) listrow_wgtman_pane_g1_ParamLimits

0x9fef,	// (0x00046889) listrow_wgtman_pane_g2_ParamLimits

0xfed9,	// (0x0004c773) listrow_wgtman_pane_g_ParamLimits

0x244d,	// (0x0003ece7) listrow_wgtman_pane_t1_ParamLimits

0x2465,	// (0x0003ecff) listrow_wgtman_pane_t2_ParamLimits

0xfede,	// (0x0004c778) listrow_wgtman_pane_t_ParamLimits

0x248b,	// (0x0003ed25) wait_bar_pane_cp09_ParamLimits

0xa564,	// (0x00046dfe) bg_popup_heading_pane_cp02

0x03d6,	// (0x0003cc70) popup_notif_wgt_heading_pane_g1

0x03de,	// (0x0003cc78) popup_notif_wgt_heading_pane_t1

0xa564,	// (0x00046dfe) main_vids_pane

0xa564,	// (0x00046dfe) vids_listscroll_pane

0xa51a,	// (0x00046db4) scroll_pane_cp040

0xa564,	// (0x00046dfe) vids_list_pane

0xa525,	// (0x00046dbf) vids_list_double_pane_ParamLimits

0xa525,	// (0x00046dbf) vids_list_double_pane

0xa53d,	// (0x00046dd7) vids_list_double_pane_g1

0xa546,	// (0x00046de0) vids_list_double_pane_t1

0xa556,	// (0x00046df0) vids_list_double_pane_t2

0x0001,

0xff62,	// (0x0004c7fc) vids_list_double_pane_t

0xb06d,	// (0x00047907) main_ncimui_pane_ParamLimits

0x90fb,	// (0x00045995) main_ncimui_pane_g1_ParamLimits

0x9107,	// (0x000459a1) main_ncimui_pane_g2_ParamLimits

0x9107,	// (0x000459a1) main_ncimui_pane_g2

0x0001,

0xfbf0,	// (0x0004c48a) main_ncimui_pane_g_ParamLimits

0xfbf0,	// (0x0004c48a) main_ncimui_pane_g

0xa4b6,	// (0x00046d50) main_welc_pane_g1_ParamLimits

0xa4b6,	// (0x00046d50) main_welc_pane_g1

0xa4c2,	// (0x00046d5c) main_welc_pane_g2_ParamLimits

0xa4c2,	// (0x00046d5c) main_welc_pane_g2

0x0001,

0xff5d,	// (0x0004c7f7) main_welc_pane_g_ParamLimits

0xff5d,	// (0x0004c7f7) main_welc_pane_g

0xac07,	// (0x000474a1) listscroll_mce_pane_ParamLimits

0x4db9,	// (0x00041653) wait_bar_pane_cp10

0xcbc4,	// (0x0004945e) main_cale_day_pane_ParamLimits

0xcbc4,	// (0x0004945e) main_cale_week_pane_ParamLimits

0xac07,	// (0x000474a1) main_messa_pane_ParamLimits

0x6d4c,	// (0x000435e6) main_clock2_btn_pane_ParamLimits

0x6d4c,	// (0x000435e6) main_clock2_btn_pane

0xd3c2,	// (0x00049c5c) main_clock2_btn_pane_cp01_ParamLimits

0xd3c2,	// (0x00049c5c) main_clock2_btn_pane_cp01

0xed35,	// (0x0004b5cf) list_cale_mrui_pane_ParamLimits

0x0137,	// (0x0003c9d1) main_cf0_pane_g2

0x0001,

0xfeb7,	// (0x0004c751) main_cf0_pane_g

0xa18c,	// (0x00046a26) area_left_week_number_pane_ParamLimits

0xa19f,	// (0x00046a39) area_top_day_name_pane_ParamLimits

0xa1ad,	// (0x00046a47) frame_month_view_pane_ParamLimits

0x025e,	// (0x0003caf8) grid_month_view_pane_ParamLimits

0x026c,	// (0x0003cb06) frm_month_g1_ParamLimits

0xa22b,	// (0x00046ac5) frm_month_g2_ParamLimits

0xa23c,	// (0x00046ad6) frm_month_g3_ParamLimits

0xa24d,	// (0x00046ae7) frm_month_g4_ParamLimits

0xa25e,	// (0x00046af8) frm_month_g5_ParamLimits

0xa271,	// (0x00046b0b) frm_month_g6_ParamLimits

0xa284,	// (0x00046b1e) frm_month_g7_ParamLimits

0x0279,	// (0x0003cb13) frm_month_g8_ParamLimits

0xa297,	// (0x00046b31) frm_month_g9_ParamLimits

0xa2a4,	// (0x00046b3e) frm_month_g10_ParamLimits

0xa2b1,	// (0x00046b4b) frm_month_g11_ParamLimits

0xa2be,	// (0x00046b58) frm_month_g12_ParamLimits

0xa2cb,	// (0x00046b65) frm_month_g13_ParamLimits

0xa2d8,	// (0x00046b72) frm_month_g14_ParamLimits

0xa2e7,	// (0x00046b81) frm_month_g15_ParamLimits

0xa2f6,	// (0x00046b90) frm_month_g16_ParamLimits

0xff08,	// (0x0004c7a2) frm_month_g_ParamLimits

0x0286,	// (0x0003cb20) cell_top_day_name_pane_t1_ParamLimits

0xa305,	// (0x00046b9f) cell_area_left_week_number_pane_g1_ParamLimits

0xa314,	// (0x00046bae) cell_area_left_week_number_pane_t1_ParamLimits

0xd23a,	// (0x00049ad4) cell_month_view_pane_g1_ParamLimits

0xa32a,	// (0x00046bc4) cell_month_view_pane_t1_ParamLimits

0xabff,	// (0x00047499) main_clock2_btn_pane_g1

0x03ec,	// (0x0003cc86) main_clock2_btn_pane_t1

0xb06d,	// (0x00047907) listscroll_cmail_pane_ParamLimits

0xeb07,	// (0x0004b3a1) main_sp_fs_email_pane_g1_ParamLimits

0xeb13,	// (0x0004b3ad) main_sp_fs_email_pane_g2_ParamLimits

0xfceb,	// (0x0004c585) main_sp_fs_email_pane_g_ParamLimits

0xeed4,	// (0x0004b76e) list_recal_day_pane_ParamLimits

0xeee5,	// (0x0004b77f) mian_recal_day_pane_t1
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
	};

} // end of namespace AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch_Small

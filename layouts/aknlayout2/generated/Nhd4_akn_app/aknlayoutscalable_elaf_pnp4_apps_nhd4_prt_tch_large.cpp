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

#include "aknlayoutscalable_elaf_pnp4_apps_nhd4_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0006a85c };

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
0x6907,	// (0x00071163) Screen

0x6913,	// (0x0007116f) application_window

0x696f,	// (0x000711cb) area_bottom_pane_ParamLimits

0x696f,	// (0x000711cb) area_bottom_pane

0x69c8,	// (0x00071224) area_top_pane_ParamLimits

0x69c8,	// (0x00071224) area_top_pane

0x6a2c,	// (0x00071288) call_video_uplink_pane_ParamLimits

0x6a2c,	// (0x00071288) call_video_uplink_pane

0x6a69,	// (0x000712c5) main_pane_ParamLimits

0x6a69,	// (0x000712c5) main_pane

0x4928,	// (0x0006f184) context_pane

0x9b24,	// (0x00074380) navi_pane

0x9b44,	// (0x000743a0) popup_cale_events_window_ParamLimits

0x9b44,	// (0x000743a0) popup_cale_events_window

0x493b,	// (0x0006f197) popup_mup_playback_window

0x9b5c,	// (0x000743b8) signal_pane

0x1d74,	// (0x0006c5d0) main_browser_pane

0x34cf,	// (0x0006dd2b) main_burst_pane

0x99bb,	// (0x00074217) main_calc_pane

0x34cf,	// (0x0006dd2b) main_cale_day_pane

0x1d74,	// (0x0006c5d0) main_cale_month_pane

0x34cf,	// (0x0006dd2b) main_cale_week_pane

0x34cf,	// (0x0006dd2b) main_call_pane

0x1a02,	// (0x0006c25e) main_call_poc_pane

0x34cf,	// (0x0006dd2b) main_camera_pane

0x34cf,	// (0x0006dd2b) main_chi_dic_pane

0x335e,	// (0x0006dbba) main_clock_pane

0x1a02,	// (0x0006c25e) main_fmradio_pane

0x34cf,	// (0x0006dd2b) main_graph_messa_pane

0x1a02,	// (0x0006c25e) main_help_pane

0x1d74,	// (0x0006c5d0) main_im_pane

0x1c5d,	// (0x0006c4b9) main_image_pane_ParamLimits

0x1c5d,	// (0x0006c4b9) main_image_pane

0x1a02,	// (0x0006c25e) main_location2_pane

0x34cf,	// (0x0006dd2b) main_location_pane

0x1a02,	// (0x0006c25e) main_messa_pane

0x1a02,	// (0x0006c25e) main_mp2_pane

0x34cf,	// (0x0006dd2b) main_mp_pane

0x1a02,	// (0x0006c25e) main_msg_pane

0x1a02,	// (0x0006c25e) main_mup_eq_pane

0x1a02,	// (0x0006c25e) main_mup_pane

0x1d74,	// (0x0006c5d0) main_notes_pane

0x1a02,	// (0x0006c25e) main_pec_pane

0x1a02,	// (0x0006c25e) main_phob_pane

0x1a02,	// (0x0006c25e) main_pinb_pane

0x1a02,	// (0x0006c25e) main_postcard_pane

0x1a02,	// (0x0006c25e) main_qdial_pane

0x34cf,	// (0x0006dd2b) main_skin_pane

0x1a02,	// (0x0006c25e) main_smil2_pane

0x34cf,	// (0x0006dd2b) main_smil_pane

0x34cf,	// (0x0006dd2b) main_video_pane

0x34cf,	// (0x0006dd2b) main_video_tele_pane

0x1c5d,	// (0x0006c4b9) main_viewer_pane_ParamLimits

0x1c5d,	// (0x0006c4b9) main_viewer_pane

0x34cf,	// (0x0006dd2b) main_vorec_pane

0x99f9,	// (0x00074255) popup_blid_sat_info_window_ParamLimits

0x99f9,	// (0x00074255) popup_blid_sat_info_window

0x9a19,	// (0x00074275) popup_dyc_status_message_window_ParamLimits

0x9a19,	// (0x00074275) popup_dyc_status_message_window

0x9a27,	// (0x00074283) popup_grid_large_graphic_window_ParamLimits

0x9a27,	// (0x00074283) popup_grid_large_graphic_window

0x9ab6,	// (0x00074312) popup_loc_request_window_ParamLimits

0x9ab6,	// (0x00074312) popup_loc_request_window

0x9afc,	// (0x00074358) popup_wml_address_window_ParamLimits

0x9afc,	// (0x00074358) popup_wml_address_window

0x9893,	// (0x000740ef) call_muted_g1

0x9552,	// (0x00073dae) popup_call_audio_conf_window_ParamLimits

0x9552,	// (0x00073dae) popup_call_audio_conf_window

0x98a3,	// (0x000740ff) popup_call_audio_first_window_ParamLimits

0x98a3,	// (0x000740ff) popup_call_audio_first_window

0x98e3,	// (0x0007413f) popup_call_audio_in_window_ParamLimits

0x98e3,	// (0x0007413f) popup_call_audio_in_window

0x9907,	// (0x00074163) popup_call_audio_out_window_ParamLimits

0x9907,	// (0x00074163) popup_call_audio_out_window

0x9929,	// (0x00074185) popup_call_audio_second_window_ParamLimits

0x9929,	// (0x00074185) popup_call_audio_second_window

0x9959,	// (0x000741b5) popup_call_audio_wait_window_ParamLimits

0x9959,	// (0x000741b5) popup_call_audio_wait_window

0x997a,	// (0x000741d6) popup_number_entry_window_ParamLimits

0x997a,	// (0x000741d6) popup_number_entry_window

0x15f1,	// (0x0006be4d) bg_popup_call_pane_cp05_ParamLimits

0x15f1,	// (0x0006be4d) bg_popup_call_pane_cp05

0x1611,	// (0x0006be6d) popup_number_entry_window_t1

0x1624,	// (0x0006be80) popup_number_entry_window_t2

0x1636,	// (0x0006be92) popup_number_entry_window_t3

0x0003,

0xf0d8,	// (0x00079934) popup_number_entry_window_t

0x1648,	// (0x0006bea4) text_title_cp2

0x165b,	// (0x0006beb7) bg_popup_call_pane_cp_ParamLimits

0x165b,	// (0x0006beb7) bg_popup_call_pane_cp

0x1669,	// (0x0006bec5) call_thumbnail_pane

0x1671,	// (0x0006becd) popup_call_audio_in_window_g1_ParamLimits

0x1671,	// (0x0006becd) popup_call_audio_in_window_g1

0x167d,	// (0x0006bed9) popup_call_audio_in_window_g2_ParamLimits

0x167d,	// (0x0006bed9) popup_call_audio_in_window_g2

0x1689,	// (0x0006bee5) popup_call_audio_in_window_g3_ParamLimits

0x1689,	// (0x0006bee5) popup_call_audio_in_window_g3

0x0002,

0xf0e1,	// (0x0007993d) popup_call_audio_in_window_g_ParamLimits

0xf0e1,	// (0x0007993d) popup_call_audio_in_window_g

0x1695,	// (0x0006bef1) popup_call_audio_in_window_t1_ParamLimits

0x1695,	// (0x0006bef1) popup_call_audio_in_window_t1

0x16b0,	// (0x0006bf0c) popup_call_audio_in_window_t2_ParamLimits

0x16b0,	// (0x0006bf0c) popup_call_audio_in_window_t2

0x16cb,	// (0x0006bf27) popup_call_audio_in_window_t3_ParamLimits

0x16cb,	// (0x0006bf27) popup_call_audio_in_window_t3

0x0002,

0xf0e8,	// (0x00079944) popup_call_audio_in_window_t_ParamLimits

0xf0e8,	// (0x00079944) popup_call_audio_in_window_t

0x165b,	// (0x0006beb7) bg_popup_call_pane_cp01_ParamLimits

0x165b,	// (0x0006beb7) bg_popup_call_pane_cp01

0x1669,	// (0x0006bec5) call_thumbnail_pane_cp02

0x16de,	// (0x0006bf3a) call_type_pane_cp022

0x16e6,	// (0x0006bf42) popup_call_audio_out_window_g1_ParamLimits

0x16e6,	// (0x0006bf42) popup_call_audio_out_window_g1

0x16f8,	// (0x0006bf54) popup_call_audio_out_window_g2_ParamLimits

0x16f8,	// (0x0006bf54) popup_call_audio_out_window_g2

0x1704,	// (0x0006bf60) popup_call_audio_out_window_g3_ParamLimits

0x1704,	// (0x0006bf60) popup_call_audio_out_window_g3

0x0002,

0xf0ef,	// (0x0007994b) popup_call_audio_out_window_g_ParamLimits

0xf0ef,	// (0x0007994b) popup_call_audio_out_window_g

0x1716,	// (0x0006bf72) popup_call_audio_out_window_t1_ParamLimits

0x1716,	// (0x0006bf72) popup_call_audio_out_window_t1

0x172e,	// (0x0006bf8a) popup_call_audio_out_window_t2_ParamLimits

0x172e,	// (0x0006bf8a) popup_call_audio_out_window_t2

0x0001,

0xf0f6,	// (0x00079952) popup_call_audio_out_window_t_ParamLimits

0xf0f6,	// (0x00079952) popup_call_audio_out_window_t

0x1743,	// (0x0006bf9f) bg_popup_call_pane_ParamLimits

0x1743,	// (0x0006bf9f) bg_popup_call_pane

0x6c74,	// (0x000714d0) call_thumbnail_pane_cp_ParamLimits

0x6c74,	// (0x000714d0) call_thumbnail_pane_cp

0x17c7,	// (0x0006c023) call_type_pane_cp01_ParamLimits

0x17c7,	// (0x0006c023) call_type_pane_cp01

0x180b,	// (0x0006c067) popup_call_audio_first_window_g1_ParamLimits

0x180b,	// (0x0006c067) popup_call_audio_first_window_g1

0x1857,	// (0x0006c0b3) popup_call_audio_first_window_g2_ParamLimits

0x1857,	// (0x0006c0b3) popup_call_audio_first_window_g2

0x0001,

0xf0fb,	// (0x00079957) popup_call_audio_first_window_g_ParamLimits

0xf0fb,	// (0x00079957) popup_call_audio_first_window_g

0x189b,	// (0x0006c0f7) popup_call_audio_first_window_t1_ParamLimits

0x189b,	// (0x0006c0f7) popup_call_audio_first_window_t1

0x1947,	// (0x0006c1a3) popup_call_audio_first_window_t4_ParamLimits

0x1947,	// (0x0006c1a3) popup_call_audio_first_window_t4

0x19d3,	// (0x0006c22f) popup_call_audio_first_window_t5_ParamLimits

0x19d3,	// (0x0006c22f) popup_call_audio_first_window_t5

0x0002,

0xf100,	// (0x0007995c) popup_call_audio_first_window_t_ParamLimits

0xf100,	// (0x0007995c) popup_call_audio_first_window_t

0x1a02,	// (0x0006c25e) bg_popup_call_pane_cp02

0x1a0c,	// (0x0006c268) call_type_pane_cp023

0x1a14,	// (0x0006c270) popup_call_audio_wait_window_g1

0x1a1c,	// (0x0006c278) popup_call_audio_wait_window_g2

0x0001,

0xf107,	// (0x00079963) popup_call_audio_wait_window_g

0x1a24,	// (0x0006c280) popup_call_audio_wait_window_t3

0x1a32,	// (0x0006c28e) bg_popup_call_pane_cp03_ParamLimits

0x1a32,	// (0x0006c28e) bg_popup_call_pane_cp03

0x1a92,	// (0x0006c2ee) call_thumbnail_pane_cp011_ParamLimits

0x1a92,	// (0x0006c2ee) call_thumbnail_pane_cp011

0x1a9e,	// (0x0006c2fa) call_type_pane_cp034_ParamLimits

0x1a9e,	// (0x0006c2fa) call_type_pane_cp034

0x1ada,	// (0x0006c336) popup_call_audio_second_window_g1_ParamLimits

0x1ada,	// (0x0006c336) popup_call_audio_second_window_g1

0x1b16,	// (0x0006c372) popup_call_audio_second_window_g2_ParamLimits

0x1b16,	// (0x0006c372) popup_call_audio_second_window_g2

0x0001,

0xf10c,	// (0x00079968) popup_call_audio_second_window_g_ParamLimits

0xf10c,	// (0x00079968) popup_call_audio_second_window_g

0x1b52,	// (0x0006c3ae) popup_call_audio_second_window_t1_ParamLimits

0x1b52,	// (0x0006c3ae) popup_call_audio_second_window_t1

0x1bd3,	// (0x0006c42f) popup_call_audio_second_window_t2_ParamLimits

0x1bd3,	// (0x0006c42f) popup_call_audio_second_window_t2

0x1c09,	// (0x0006c465) popup_call_audio_second_window_t3_ParamLimits

0x1c09,	// (0x0006c465) popup_call_audio_second_window_t3

0x0002,

0xf111,	// (0x0007996d) popup_call_audio_second_window_t_ParamLimits

0xf111,	// (0x0007996d) popup_call_audio_second_window_t

0x1a02,	// (0x0006c25e) bg_popup_call_pane_cp04

0x1c3f,	// (0x0006c49b) list_conf_pane

0x1c47,	// (0x0006c4a3) popup_call_audio_conf_window_t1

0x1c55,	// (0x0006c4b1) call_thumbnail_pane_g1

0x1c5d,	// (0x0006c4b9) bg_pinb_pane_ParamLimits

0x1c5d,	// (0x0006c4b9) bg_pinb_pane

0x1c6b,	// (0x0006c4c7) find_pinb_pane

0x1c74,	// (0x0006c4d0) listscroll_pinb_pane_ParamLimits

0x1c74,	// (0x0006c4d0) listscroll_pinb_pane

0x1c83,	// (0x0006c4df) pinb_bg_pane_g1

0x6c98,	// (0x000714f4) pinb_bg_pane_g2

0x6ca4,	// (0x00071500) pinb_bg_pane_g3

0x6cb0,	// (0x0007150c) pinb_bg_pane_g4

0x6cbc,	// (0x00071518) pinb_bg_pane_g5

0x6cc8,	// (0x00071524) pinb_bg_pane_g6

0x6cd3,	// (0x0007152f) pinb_bg_pane_g7

0x6cde,	// (0x0007153a) pinb_bg_pane_g8

0x6ce9,	// (0x00071545) pinb_bg_pane_g9

0x6cf3,	// (0x0007154f) pinb_bg_pane_g10

0x0009,

0xf118,	// (0x00079974) pinb_bg_pane_g

0x6d08,	// (0x00071564) grid_pinb_pane

0x6d13,	// (0x0007156f) list_pinb_pane

0x6d1e,	// (0x0007157a) scroll_pane_cp01_ParamLimits

0x6d1e,	// (0x0007157a) scroll_pane_cp01

0x1c95,	// (0x0006c4f1) find_pinb_pane_g1_ParamLimits

0x1c95,	// (0x0006c4f1) find_pinb_pane_g1

0x1cad,	// (0x0006c509) find_pinb_pane_t1

0x1cbf,	// (0x0006c51b) find_pinb_pane_t2

0x0001,

0xf132,	// (0x0007998e) find_pinb_pane_t

0x1cd4,	// (0x0006c530) input_focus_pane_cp01_ParamLimits

0x1cd4,	// (0x0006c530) input_focus_pane_cp01

0x6d30,	// (0x0007158c) cell_pinb_pane_ParamLimits

0x6d30,	// (0x0007158c) cell_pinb_pane

0x6d64,	// (0x000715c0) cell_pinb_pane_g1_ParamLimits

0x6d64,	// (0x000715c0) cell_pinb_pane_g1

0x6d79,	// (0x000715d5) cell_pinb_pane_g2_ParamLimits

0x6d79,	// (0x000715d5) cell_pinb_pane_g2

0x1ce0,	// (0x0006c53c) cell_pinb_pane_g3_ParamLimits

0x1ce0,	// (0x0006c53c) cell_pinb_pane_g3

0x0002,

0xf137,	// (0x00079993) cell_pinb_pane_g_ParamLimits

0xf137,	// (0x00079993) cell_pinb_pane_g

0x1a02,	// (0x0006c25e) grid_highlight_pane_cp01

0x6d85,	// (0x000715e1) list_pinb_item_pane_ParamLimits

0x6d85,	// (0x000715e1) list_pinb_item_pane

0x1a02,	// (0x0006c25e) list_highlight_pane_cp02

0x1cec,	// (0x0006c548) list_pinb_item_pane_g1_ParamLimits

0x1cec,	// (0x0006c548) list_pinb_item_pane_g1

0x1cf9,	// (0x0006c555) list_pinb_item_pane_g2_ParamLimits

0x1cf9,	// (0x0006c555) list_pinb_item_pane_g2

0x6db2,	// (0x0007160e) list_pinb_item_pane_g3_ParamLimits

0x6db2,	// (0x0007160e) list_pinb_item_pane_g3

0x1d05,	// (0x0006c561) list_pinb_item_pane_g4_ParamLimits

0x1d05,	// (0x0006c561) list_pinb_item_pane_g4

0x0003,

0xf13e,	// (0x0007999a) list_pinb_item_pane_g_ParamLimits

0xf13e,	// (0x0007999a) list_pinb_item_pane_g

0x1d11,	// (0x0006c56d) list_pinb_item_pane_t1_ParamLimits

0x1d11,	// (0x0006c56d) list_pinb_item_pane_t1

0x6ddd,	// (0x00071639) calc_display_pane

0x6dfb,	// (0x00071657) calc_paper_pane

0x6e17,	// (0x00071673) grid_calc_pane

0x1a02,	// (0x0006c25e) bg_list_pane_cp01

0x6e43,	// (0x0007169f) clock_g1

0x6e4b,	// (0x000716a7) clock_g2

0x0001,

0xf147,	// (0x000799a3) clock_g

0x6e55,	// (0x000716b1) clock_t1_ParamLimits

0x6e55,	// (0x000716b1) clock_t1

0x6e6a,	// (0x000716c6) clock_t2_ParamLimits

0x6e6a,	// (0x000716c6) clock_t2

0x6e7c,	// (0x000716d8) clock_t3_ParamLimits

0x6e7c,	// (0x000716d8) clock_t3

0x6e8e,	// (0x000716ea) clock_t4_ParamLimits

0x6e8e,	// (0x000716ea) clock_t4

0x6ea0,	// (0x000716fc) clock_t5_ParamLimits

0x6ea0,	// (0x000716fc) clock_t5

0x6eb5,	// (0x00071711) clock_t6_ParamLimits

0x6eb5,	// (0x00071711) clock_t6

0x6ec7,	// (0x00071723) clock_t7_ParamLimits

0x6ec7,	// (0x00071723) clock_t7

0x6ed9,	// (0x00071735) clock_t8_ParamLimits

0x6ed9,	// (0x00071735) clock_t8

0x6eef,	// (0x0007174b) clock_t9_ParamLimits

0x6eef,	// (0x0007174b) clock_t9

0x0008,

0xf14c,	// (0x000799a8) clock_t_ParamLimits

0xf14c,	// (0x000799a8) clock_t

0x1d28,	// (0x0006c584) popup_clock_analogue_window_cp02

0x1d28,	// (0x0006c584) popup_clock_digital_window_cp01

0x1d30,	// (0x0006c58c) listscroll_help_pane

0x1a02,	// (0x0006c25e) phob_pre_status_pane

0x1d3a,	// (0x0006c596) grid_qdial_pane

0x1a02,	// (0x0006c25e) listscroll_mce_pane

0x1d44,	// (0x0006c5a0) bg_notes_pane

0x1d52,	// (0x0006c5ae) list_notes_pane

0x6f05,	// (0x00071761) scroll_pane_cp06

0x1d60,	// (0x0006c5bc) bg_calc_paper_pane

0x6f14,	// (0x00071770) list_calc_pane

0x1d74,	// (0x0006c5d0) bg_calc_display_pane

0x6f2e,	// (0x0007178a) calc_display_pane_t1

0x6f43,	// (0x0007179f) calc_display_pane_t2

0x6f58,	// (0x000717b4) calc_display_pane_t3

0x0002,

0xf15f,	// (0x000799bb) calc_display_pane_t

0x6f6a,	// (0x000717c6) cell_calc_pane_ParamLimits

0x6f6a,	// (0x000717c6) cell_calc_pane

0x1d80,	// (0x0006c5dc) bg_calc_paper_pane_g1

0x1d98,	// (0x0006c5f4) bg_calc_paper_pane_g2

0x1d8c,	// (0x0006c5e8) bg_calc_paper_pane_g3

0x1db0,	// (0x0006c60c) bg_calc_paper_pane_g4

0x1da4,	// (0x0006c600) bg_calc_paper_pane_g5

0x6f97,	// (0x000717f3) bg_calc_paper_pane_g6

0x6fa8,	// (0x00071804) bg_calc_paper_pane_g7

0x6fb9,	// (0x00071815) bg_calc_paper_pane_g8

0x0007,

0xf166,	// (0x000799c2) bg_calc_paper_pane_g

0x6fca,	// (0x00071826) calc_bg_paper_pane_g9

0x6fdb,	// (0x00071837) list_calc_item_pane_ParamLimits

0x6fdb,	// (0x00071837) list_calc_item_pane

0x1dbc,	// (0x0006c618) list_calc_item_pane_g1

0x7015,	// (0x00071871) list_calc_item_pane_t1_ParamLimits

0x7015,	// (0x00071871) list_calc_item_pane_t1

0x7027,	// (0x00071883) list_calc_item_pane_t2_ParamLimits

0x7027,	// (0x00071883) list_calc_item_pane_t2

0x0001,

0xf177,	// (0x000799d3) list_calc_item_pane_t_ParamLimits

0xf177,	// (0x000799d3) list_calc_item_pane_t

0x1dc9,	// (0x0006c625) cell_calc_pane_g1

0x1dd3,	// (0x0006c62f) grid_highlight_pane_cp02

0x1dfe,	// (0x0006c65a) bg_calc_display_pane_g1

0x7057,	// (0x000718b3) bg_calc_display_pane_g2

0x1df5,	// (0x0006c651) bg_calc_display_pane_g3

0x0002,

0xf181,	// (0x000799dd) bg_calc_display_pane_g

0x7061,	// (0x000718bd) cell_qdial_pane_ParamLimits

0x7061,	// (0x000718bd) cell_qdial_pane

0x7075,	// (0x000718d1) cell_qdial_pane_g1_ParamLimits

0x7075,	// (0x000718d1) cell_qdial_pane_g1

0x7082,	// (0x000718de) cell_qdial_pane_g2_ParamLimits

0x7082,	// (0x000718de) cell_qdial_pane_g2

0x1e07,	// (0x0006c663) cell_qdial_pane_g3_ParamLimits

0x1e07,	// (0x0006c663) cell_qdial_pane_g3

0x0003,

0xf188,	// (0x000799e4) cell_qdial_pane_g_ParamLimits

0xf188,	// (0x000799e4) cell_qdial_pane_g

0x70a0,	// (0x000718fc) cell_qdial_pane_t1_ParamLimits

0x70a0,	// (0x000718fc) cell_qdial_pane_t1

0x70b8,	// (0x00071914) cell_qdial_pane_t2_ParamLimits

0x70b8,	// (0x00071914) cell_qdial_pane_t2

0x70cb,	// (0x00071927) cell_qdial_pane_t3_ParamLimits

0x70cb,	// (0x00071927) cell_qdial_pane_t3

0x0002,

0xf191,	// (0x000799ed) cell_qdial_pane_t_ParamLimits

0xf191,	// (0x000799ed) cell_qdial_pane_t

0x1a02,	// (0x0006c25e) grid_highlight_pane_cp04

0x1e13,	// (0x0006c66f) thumbnail_qdial_pane_ParamLimits

0x1e13,	// (0x0006c66f) thumbnail_qdial_pane

0x1e6f,	// (0x0006c6cb) list_help_pane

0x1e78,	// (0x0006c6d4) scroll_pane_cp02

0x70de,	// (0x0007193a) help_list_pane_t1_ParamLimits

0x70de,	// (0x0007193a) help_list_pane_t1

0x711c,	// (0x00071978) bg_notes_pane_g2

0x7124,	// (0x00071980) bg_notes_pane_g3

0x712c,	// (0x00071988) notes_bg_pane_g1

0x7134,	// (0x00071990) notes_bg_pane_g4

0x713c,	// (0x00071998) notes_bg_pane_g5

0x7144,	// (0x000719a0) notes_bg_pane_g6

0x714c,	// (0x000719a8) notes_bg_pane_g7

0x7154,	// (0x000719b0) notes_bg_pane_g8

0x715c,	// (0x000719b8) notes_bg_pane_g9

0x0006,

0xf1af,	// (0x00079a0b) notes_bg_pane_g

0x7164,	// (0x000719c0) list_notes_text_pane_ParamLimits

0x7164,	// (0x000719c0) list_notes_text_pane

0x1e81,	// (0x0006c6dd) list_notes_text_pane_g1

0x57d2,	// (0x0007002e) list_notes_text_pane_t1

0x1d74,	// (0x0006c5d0) listscroll_cale_week_pane

0x71d5,	// (0x00071a31) bg_cale_heading_pane

0x1e9b,	// (0x0006c6f7) bg_cale_pane_cp01

0x71f1,	// (0x00071a4d) cale_week_corner_pane

0x7202,	// (0x00071a5e) cale_week_day_heading_pane

0x721e,	// (0x00071a7a) cale_week_scroll_pane_g1

0x7237,	// (0x00071a93) cale_week_scroll_pane_g2

0x7248,	// (0x00071aa4) cale_week_scroll_pane_g3

0x7259,	// (0x00071ab5) cale_week_scroll_pane_g4

0x726a,	// (0x00071ac6) cale_week_scroll_pane_g5

0x727b,	// (0x00071ad7) cale_week_scroll_pane_g6

0x728c,	// (0x00071ae8) cale_week_scroll_pane_g7

0x729f,	// (0x00071afb) cale_week_scroll_pane_g8

0x72b2,	// (0x00071b0e) cale_week_scroll_pane_g9

0x72c3,	// (0x00071b1f) cale_week_scroll_pane_g10

0x72d4,	// (0x00071b30) cale_week_scroll_pane_g11

0x72e5,	// (0x00071b41) cale_week_scroll_pane_g12

0x72fe,	// (0x00071b5a) cale_week_scroll_pane_g13

0x7317,	// (0x00071b73) cale_week_scroll_pane_g14

0x7330,	// (0x00071b8c) cale_week_scroll_pane_g15

0x000e,

0xf1be,	// (0x00079a1a) cale_week_scroll_pane_g

0x7349,	// (0x00071ba5) cale_week_time_pane

0x735c,	// (0x00071bb8) grid_cale_week_pane

0x7379,	// (0x00071bd5) scroll_pane_cp08

0x7393,	// (0x00071bef) cell_cale_week_pane_ParamLimits

0x7393,	// (0x00071bef) cell_cale_week_pane

0x73e3,	// (0x00071c3f) cale_week_day_heading_pane_t1

0x73f7,	// (0x00071c53) cale_week_day_heading_pane_t2

0x740b,	// (0x00071c67) cale_week_day_heading_pane_t3

0x741f,	// (0x00071c7b) cale_week_day_heading_pane_t4

0x7433,	// (0x00071c8f) cale_week_day_heading_pane_t5

0x7447,	// (0x00071ca3) cale_week_day_heading_pane_t6

0x745b,	// (0x00071cb7) cale_week_day_heading_pane_t7

0x0006,

0xf1dd,	// (0x00079a39) cale_week_day_heading_pane_t

0x1ec6,	// (0x0006c722) bg_cale_side_pane

0x746f,	// (0x00071ccb) cale_week_time_pane_t1

0x7487,	// (0x00071ce3) cale_week_time_pane_t2

0x749f,	// (0x00071cfb) cale_week_time_pane_t3

0x74b7,	// (0x00071d13) cale_week_time_pane_t4

0x74cf,	// (0x00071d2b) cale_week_time_pane_t5

0x74e7,	// (0x00071d43) cale_week_time_pane_t6

0x7507,	// (0x00071d63) cale_week_time_pane_t7

0x7527,	// (0x00071d83) cale_week_time_pane_t8

0x0007,

0xf1ec,	// (0x00079a48) cale_week_time_pane_t

0x7547,	// (0x00071da3) cell_cale_week_pane_g2

0x7558,	// (0x00071db4) cell_cale_week_pane_g3_ParamLimits

0x7558,	// (0x00071db4) cell_cale_week_pane_g3

0x1ed4,	// (0x0006c730) grid_highlight_pane_cp07

0x1edc,	// (0x0006c738) listscroll_gms_pane

0x1ee6,	// (0x0006c742) grid_gms_pane

0x1eef,	// (0x0006c74b) listscroll_gms_pane_g1

0x1ef7,	// (0x0006c753) listscroll_gms_pane_g2

0x0001,

0xf1fd,	// (0x00079a59) listscroll_gms_pane_g

0x7570,	// (0x00071dcc) scroll_pane_cp010

0x757b,	// (0x00071dd7) cell_gms_pane_ParamLimits

0x757b,	// (0x00071dd7) cell_gms_pane

0x758d,	// (0x00071de9) cell_gms_pane_g1

0x1eff,	// (0x0006c75b) cell_gms_pane_g2

0x1e81,	// (0x0006c6dd) cell_gms_pane_g3

0x1f07,	// (0x0006c763) cell_gms_pane_g4

0x0003,

0xf202,	// (0x00079a5e) cell_gms_pane_g

0x1f10,	// (0x0006c76c) grid_highlight_pane_cp09

0x983b,	// (0x00074097) phob_pre_status_pane_g1

0x9843,	// (0x0007409f) phob_pre_status_pane_g2

0x984b,	// (0x000740a7) phob_pre_status_pane_g3

0x9853,	// (0x000740af) phob_pre_status_pane_g4

0x0004,

0xf5f1,	// (0x00079e4d) phob_pre_status_pane_g

0x9863,	// (0x000740bf) phob_pre_status_pane_t1

0x9873,	// (0x000740cf) phob_pre_status_pane_t2

0x9883,	// (0x000740df) phob_pre_status_pane_t3

0x0002,

0xf5fc,	// (0x00079e58) phob_pre_status_pane_t

0x1a02,	// (0x0006c25e) bg_list_pane_cp05

0x759d,	// (0x00071df9) grid_vorec_pane

0x75a7,	// (0x00071e03) vorec_t1

0x75b5,	// (0x00071e11) vorec_t2

0x75c3,	// (0x00071e1f) vorec_t3

0x75d1,	// (0x00071e2d) vorec_t4

0x75df,	// (0x00071e3b) vorec_t5

0x75ed,	// (0x00071e49) vorec_t6

0x0006,

0xf20b,	// (0x00079a67) vorec_t

0x7609,	// (0x00071e65) wait_bar_pane_cp01

0x1f18,	// (0x0006c774) cell_vorec_pane_ParamLimits

0x1f18,	// (0x0006c774) cell_vorec_pane

0x1f2b,	// (0x0006c787) cell_vorec_pane_g1

0x1a02,	// (0x0006c25e) grid_highlight_pane_cp05

0x7621,	// (0x00071e7d) cams_zoom_pane

0x762d,	// (0x00071e89) image_vga_pane

0x763c,	// (0x00071e98) main_camera_pane_g1

0x764a,	// (0x00071ea6) main_camera_pane_g2

0x7658,	// (0x00071eb4) main_camera_pane_g3

0x7664,	// (0x00071ec0) main_camera_pane_g4

0x7670,	// (0x00071ecc) main_camera_pane_g5

0x767c,	// (0x00071ed8) main_camera_pane_g6

0x7688,	// (0x00071ee4) main_camera_pane_g7

0x0007,

0xf21a,	// (0x00079a76) main_camera_pane_g

0x7694,	// (0x00071ef0) main_camera_pane_t1

0x76a6,	// (0x00071f02) main_camera_pane_t2

0x0001,

0xf22b,	// (0x00079a87) main_camera_pane_t

0x76c7,	// (0x00071f23) cams_zoom_pane_cp_ParamLimits

0x76c7,	// (0x00071f23) cams_zoom_pane_cp

0x76eb,	// (0x00071f47) image_cif_pane_ParamLimits

0x76eb,	// (0x00071f47) image_cif_pane

0x7709,	// (0x00071f65) image_subqcif_pane

0x7711,	// (0x00071f6d) main_video_pane_g1_ParamLimits

0x7711,	// (0x00071f6d) main_video_pane_g1

0x7731,	// (0x00071f8d) main_video_pane_g2_ParamLimits

0x7731,	// (0x00071f8d) main_video_pane_g2

0x7763,	// (0x00071fbf) main_video_pane_g3_ParamLimits

0x7763,	// (0x00071fbf) main_video_pane_g3

0x778e,	// (0x00071fea) main_video_pane_g4_ParamLimits

0x778e,	// (0x00071fea) main_video_pane_g4

0x77b9,	// (0x00072015) main_video_pane_g5_ParamLimits

0x77b9,	// (0x00072015) main_video_pane_g5

0x1f41,	// (0x0006c79d) main_video_pane_g6_ParamLimits

0x1f41,	// (0x0006c79d) main_video_pane_g6

0x0006,

0xf230,	// (0x00079a8c) main_video_pane_g_ParamLimits

0xf230,	// (0x00079a8c) main_video_pane_g

0x77dd,	// (0x00072039) main_video_pane_t1_ParamLimits

0x77dd,	// (0x00072039) main_video_pane_t1

0x1f5b,	// (0x0006c7b7) cams_zoom_pane_g1

0x1f64,	// (0x0006c7c0) cams_zoom_pane_g2

0x1f6d,	// (0x0006c7c9) cams_zoom_pane_g3

0x1f76,	// (0x0006c7d2) cams_zoom_pane_g4

0x0003,

0xf23f,	// (0x00079a9b) cams_zoom_pane_g

0x7827,	// (0x00072083) grid_cams_pane

0x7835,	// (0x00072091) linegrid_cams_pane

0x7843,	// (0x0007209f) cell_cams_pane_ParamLimits

0x7843,	// (0x0007209f) cell_cams_pane

0x1f7f,	// (0x0006c7db) cams_burst_image_pane

0x1f87,	// (0x0006c7e3) cell_cams_pane_g1

0x1a02,	// (0x0006c25e) grid_highlight_pane_cp03

0x1dc9,	// (0x0006c625) mp_bg_pane_g1

0x1a02,	// (0x0006c25e) bg_list_pane_cp03

0x483f,	// (0x0006f09b) bg_mp_pane

0x4847,	// (0x0006f0a3) grid_mp_pane

0x484f,	// (0x0006f0ab) media_player_g1

0x4857,	// (0x0006f0b3) media_player_t1

0x4865,	// (0x0006f0c1) media_player_t2

0x4873,	// (0x0006f0cf) media_player_t3

0x4881,	// (0x0006f0dd) media_player_t4

0x488f,	// (0x0006f0eb) media_player_t5

0x489d,	// (0x0006f0f9) media_player_t6

0x48ab,	// (0x0006f107) media_player_t7

0x0006,

0xf5db,	// (0x00079e37) media_player_t

0x48b9,	// (0x0006f115) wait_bar_pane_cp02

0xf5c0,	// (0x00079e1c) main_usb_pane_t

0x9832,	// (0x0007408e) cell_mp_pane

0x1dc9,	// (0x0006c625) cell_mp_pane_g1

0x1a02,	// (0x0006c25e) grid_highlight_pane_cp06

0x2b0c,	// (0x0006d368) grid_skin_colour_pane

0x2b14,	// (0x0006d370) list_highlight_pane_cp03

0x7856,	// (0x000720b2) skin_g1

0x2b1c,	// (0x0006d378) skin_t1

0x2b2b,	// (0x0006d387) skin_t2

0x0001,

0xf274,	// (0x00079ad0) skin_t

0x7860,	// (0x000720bc) cell_skin_colour_pane_ParamLimits

0x7860,	// (0x000720bc) cell_skin_colour_pane

0x2b39,	// (0x0006d395) cell_skin_colour_pane_g1

0x78e4,	// (0x00072140) call_video_g1_ParamLimits

0x78e4,	// (0x00072140) call_video_g1

0x78f4,	// (0x00072150) call_video_g2_ParamLimits

0x78f4,	// (0x00072150) call_video_g2

0x0001,

0xf279,	// (0x00079ad5) call_video_g_ParamLimits

0xf279,	// (0x00079ad5) call_video_g

0x794e,	// (0x000721aa) call_video_uplink_pane_cp1_ParamLimits

0x794e,	// (0x000721aa) call_video_uplink_pane_cp1

0x2b4b,	// (0x0006d3a7) call_video_uplink_pane_cp2

0x7a1a,	// (0x00072276) video_down_crop_pane_ParamLimits

0x7a1a,	// (0x00072276) video_down_crop_pane

0x7b0c,	// (0x00072368) video_down_pane_ParamLimits

0x7b0c,	// (0x00072368) video_down_pane

0x2b53,	// (0x0006d3af) video_down_subqcif_pane_ParamLimits

0x2b53,	// (0x0006d3af) video_down_subqcif_pane

0x2b6b,	// (0x0006d3c7) video_down_subqcif_pane_cp_ParamLimits

0x2b6b,	// (0x0006d3c7) video_down_subqcif_pane_cp

0x2b91,	// (0x0006d3ed) im_reading_pane_ParamLimits

0x2b91,	// (0x0006d3ed) im_reading_pane

0x7c2e,	// (0x0007248a) im_writing_pane_ParamLimits

0x7c2e,	// (0x0007248a) im_writing_pane

0x7c4c,	// (0x000724a8) im_reading_pane_t1

0x2bab,	// (0x0006d407) list_im_pane

0x2bbc,	// (0x0006d418) scroll_pane_cp07

0x7cac,	// (0x00072508) im_writing_pane_t1_ParamLimits

0x7cac,	// (0x00072508) im_writing_pane_t1

0x2bd5,	// (0x0006d431) im_writing_pane_t2_ParamLimits

0x2bd5,	// (0x0006d431) im_writing_pane_t2

0x0001,

0xf283,	// (0x00079adf) im_writing_pane_t_ParamLimits

0xf283,	// (0x00079adf) im_writing_pane_t

0x1a02,	// (0x0006c25e) input_focus_pane_cp04

0x1a02,	// (0x0006c25e) input_focus_pane_cp05

0x7cbe,	// (0x0007251a) list_im_single_pane_ParamLimits

0x7cbe,	// (0x0007251a) list_im_single_pane

0x7cea,	// (0x00072546) list_single_im_pane_t1

0x97f6,	// (0x00074052) blid_accuracy_pane

0x97fe,	// (0x0007405a) blid_compass_pane

0x9808,	// (0x00074064) main_location_t1

0x9816,	// (0x00074072) main_location_t2

0x9824,	// (0x00074080) main_location_t3

0x0002,

0xf5ea,	// (0x00079e46) main_location_t

0x1a02,	// (0x0006c25e) aid_levels_location

0x1dc9,	// (0x0006c625) blid_accuracy_pane_g1

0x1dc9,	// (0x0006c625) blid_accuracy_pane_g2

0x0001,

0xf2e5,	// (0x00079b41) blid_accuracy_pane_g

0x2c1d,	// (0x0006d479) wml_content_pane

0x2c5b,	// (0x0006d4b7) wml_button_pane_ParamLimits

0x2c5b,	// (0x0006d4b7) wml_button_pane

0x7cf9,	// (0x00072555) wml_list_single_large_pane_ParamLimits

0x7cf9,	// (0x00072555) wml_list_single_large_pane

0x7d2b,	// (0x00072587) wml_list_single_medium_pane_ParamLimits

0x7d2b,	// (0x00072587) wml_list_single_medium_pane

0x7d64,	// (0x000725c0) wml_list_single_small_pane_ParamLimits

0x7d64,	// (0x000725c0) wml_list_single_small_pane

0x2c6f,	// (0x0006d4cb) wml_selection_box_pane_ParamLimits

0x2c6f,	// (0x0006d4cb) wml_selection_box_pane

0x2c82,	// (0x0006d4de) wml_list_single_pane_t1

0x2c91,	// (0x0006d4ed) wml_list_single_medium_pane_t1

0x2ca0,	// (0x0006d4fc) wml_list_single_large_pane_t1

0x2caf,	// (0x0006d50b) input_focus_pane_cp02_ParamLimits

0x2caf,	// (0x0006d50b) input_focus_pane_cp02

0x2cc2,	// (0x0006d51e) wml_selection_box_pane_g1

0x2ccb,	// (0x0006d527) wml_selection_box_pane_t1_ParamLimits

0x2ccb,	// (0x0006d527) wml_selection_box_pane_t1

0x1c5d,	// (0x0006c4b9) bg_wml_button_pane_ParamLimits

0x1c5d,	// (0x0006c4b9) bg_wml_button_pane

0x2ce3,	// (0x0006d53f) wml_button_pane_g1

0x2ceb,	// (0x0006d547) wml_button_pane_t1

0x2ce3,	// (0x0006d53f) wml_button_bg_pane_g1

0x2cfb,	// (0x0006d557) wml_button_bg_pane_g2

0x2d03,	// (0x0006d55f) wml_button_bg_pane_g3

0x2d0b,	// (0x0006d567) wml_button_bg_pane_g4

0x2d13,	// (0x0006d56f) wml_button_bg_pane_g5

0x2d1b,	// (0x0006d577) wml_button_bg_pane_g6

0x2d23,	// (0x0006d57f) wml_button_bg_pane_g7

0x2d2b,	// (0x0006d587) wml_button_bg_pane_g8

0x2d33,	// (0x0006d58f) wml_button_bg_pane_g9

0x0008,

0xf288,	// (0x00079ae4) wml_button_bg_pane_g

0x7dac,	// (0x00072608) bg_list_pane_cp02

0x2d3b,	// (0x0006d597) mce_header_pane_ParamLimits

0x2d3b,	// (0x0006d597) mce_header_pane

0x2d51,	// (0x0006d5ad) mce_icon_pane

0x2d51,	// (0x0006d5ad) mce_image_pane

0x2d5a,	// (0x0006d5b6) mce_text_pane_ParamLimits

0x2d5a,	// (0x0006d5b6) mce_text_pane

0x7db6,	// (0x00072612) scroll_pane_cp03

0x2c53,	// (0x0006d4af) scroll_pane_cp04

0x2d6d,	// (0x0006d5c9) scroll_pane_cp05_ParamLimits

0x2d6d,	// (0x0006d5c9) scroll_pane_cp05

0x7dc0,	// (0x0007261c) mce_header_field_pane_ParamLimits

0x7dc0,	// (0x0007261c) mce_header_field_pane

0x7de0,	// (0x0007263c) mce_header_field_pane_2_ParamLimits

0x7de0,	// (0x0007263c) mce_header_field_pane_2

0x7df6,	// (0x00072652) mce_header_field_pane_3

0x7dfe,	// (0x0007265a) list_single_mce_message_pane_ParamLimits

0x7dfe,	// (0x0007265a) list_single_mce_message_pane

0x7e2e,	// (0x0007268a) list_single_mce_smart_pane_ParamLimits

0x7e2e,	// (0x0007268a) list_single_mce_smart_pane

0x2d79,	// (0x0006d5d5) input_focus_pane_cp03

0x2d82,	// (0x0006d5de) list_header_data_pane

0x7e69,	// (0x000726c5) mce_header_field_pane_t1

0x7e79,	// (0x000726d5) list_single_mce_header_pane_ParamLimits

0x7e79,	// (0x000726d5) list_single_mce_header_pane

0x2d8a,	// (0x0006d5e6) list_single_mce_header_pane_t1

0x2d99,	// (0x0006d5f5) list_single_mce_message_pane_g1

0x2da1,	// (0x0006d5fd) list_single_mce_message_pane_t1

0x7ecb,	// (0x00072727) bg_cale_heading_pane_cp01_ParamLimits

0x7ecb,	// (0x00072727) bg_cale_heading_pane_cp01

0x2daf,	// (0x0006d60b) bg_cale_pane_cp02_ParamLimits

0x2daf,	// (0x0006d60b) bg_cale_pane_cp02

0x7efe,	// (0x0007275a) cale_month_corner_pane

0x7f14,	// (0x00072770) cale_month_day_heading_pane_ParamLimits

0x7f14,	// (0x00072770) cale_month_day_heading_pane

0x7f57,	// (0x000727b3) cale_month_pane_g1_ParamLimits

0x7f57,	// (0x000727b3) cale_month_pane_g1

0x7f83,	// (0x000727df) cale_month_pane_g2_ParamLimits

0x7f83,	// (0x000727df) cale_month_pane_g2

0x7fa6,	// (0x00072802) cale_month_pane_g3_ParamLimits

0x7fa6,	// (0x00072802) cale_month_pane_g3

0x7fe2,	// (0x0007283e) cale_month_pane_g4_ParamLimits

0x7fe2,	// (0x0007283e) cale_month_pane_g4

0x801e,	// (0x0007287a) cale_month_pane_g5_ParamLimits

0x801e,	// (0x0007287a) cale_month_pane_g5

0x805a,	// (0x000728b6) cale_month_pane_g6_ParamLimits

0x805a,	// (0x000728b6) cale_month_pane_g6

0x8096,	// (0x000728f2) cale_month_pane_g7_ParamLimits

0x8096,	// (0x000728f2) cale_month_pane_g7

0x80e2,	// (0x0007293e) cale_month_pane_g8_ParamLimits

0x80e2,	// (0x0007293e) cale_month_pane_g8

0x812e,	// (0x0007298a) cale_month_pane_g9_ParamLimits

0x812e,	// (0x0007298a) cale_month_pane_g9

0x8174,	// (0x000729d0) cale_month_pane_g10_ParamLimits

0x8174,	// (0x000729d0) cale_month_pane_g10

0x81ba,	// (0x00072a16) cale_month_pane_g11_ParamLimits

0x81ba,	// (0x00072a16) cale_month_pane_g11

0x81f8,	// (0x00072a54) cale_month_pane_g12_ParamLimits

0x81f8,	// (0x00072a54) cale_month_pane_g12

0x8236,	// (0x00072a92) cale_month_pane_g13_ParamLimits

0x8236,	// (0x00072a92) cale_month_pane_g13

0x000c,

0xf29b,	// (0x00079af7) cale_month_pane_g_ParamLimits

0xf29b,	// (0x00079af7) cale_month_pane_g

0x8274,	// (0x00072ad0) cale_month_week_pane

0x8287,	// (0x00072ae3) grid_cale_month_pane_ParamLimits

0x8287,	// (0x00072ae3) grid_cale_month_pane

0x82c5,	// (0x00072b21) cale_month_day_heading_pane_t1

0x8323,	// (0x00072b7f) cale_month_day_heading_pane_t2

0x8388,	// (0x00072be4) cale_month_day_heading_pane_t3

0x83ed,	// (0x00072c49) cale_month_day_heading_pane_t4

0x8452,	// (0x00072cae) cale_month_day_heading_pane_t5

0x84b7,	// (0x00072d13) cale_month_day_heading_pane_t6

0x8524,	// (0x00072d80) cale_month_day_heading_pane_t7

0x0006,

0xf2b6,	// (0x00079b12) cale_month_day_heading_pane_t

0x1ec6,	// (0x0006c722) bg_cale_side_pane_cp01

0x8599,	// (0x00072df5) cale_month_week_pane_t1

0x85b0,	// (0x00072e0c) cale_month_week_pane_t2

0x85c7,	// (0x00072e23) cale_month_week_pane_t3

0x85de,	// (0x00072e3a) cale_month_week_pane_t4

0x85f5,	// (0x00072e51) cale_month_week_pane_t5

0x8614,	// (0x00072e70) cale_month_week_pane_t6

0x0005,

0xf2c5,	// (0x00079b21) cale_month_week_pane_t

0x8633,	// (0x00072e8f) cell_cale_month_pane_ParamLimits

0x8633,	// (0x00072e8f) cell_cale_month_pane

0x8701,	// (0x00072f5d) cell_cale_month_pane_g1

0x870d,	// (0x00072f69) cell_cale_month_pane_t1_ParamLimits

0x870d,	// (0x00072f69) cell_cale_month_pane_t1

0x1ed4,	// (0x0006c730) grid_highlight_pane_cp08

0x1dc9,	// (0x0006c625) main_smil_g1

0x8729,	// (0x00072f85) smil_status_pane

0x2e0e,	// (0x0006d66a) smil_text_pane

0x4757,	// (0x0006efb3) bg_popup_call3_rect_pane_g8

0x475f,	// (0x0006efbb) bg_popup_call3_rect_pane_g9

0x0008,

0xf57e,	// (0x00079dda) bg_popup_call3_rect_pane_g

0x49b5,	// (0x0006f211) smil_status_volume_pane_g1

0x2e18,	// (0x0006d674) smil_status_pane_t1

0x9c1b,	// (0x00074477) volume_smil_pane

0x2e2f,	// (0x0006d68b) list_smil_text_pane

0x873c,	// (0x00072f98) scroll_pane_cp011

0x8747,	// (0x00072fa3) smil_text_list_pane_t1_ParamLimits

0x8747,	// (0x00072fa3) smil_text_list_pane_t1

0x87f2,	// (0x0007304e) aid_volume_smil_ParamLimits

0x87f2,	// (0x0007304e) aid_volume_smil

0x1dc9,	// (0x0006c625) smil_volume_pane_g1

0x1dc9,	// (0x0006c625) smil_volume_pane_g2

0x0001,

0xf2e5,	// (0x00079b41) smil_volume_pane_g

0x1d74,	// (0x0006c5d0) listscroll_cale_day_pane

0x2e39,	// (0x0006d695) bg_cale_pane

0x2e51,	// (0x0006d6ad) list_cale_pane

0x2e62,	// (0x0006d6be) scroll_pane_cp09

0x2e73,	// (0x0006d6cf) cale_bg_pane_g1

0x2e7b,	// (0x0006d6d7) cale_bg_pane_g2

0x2e83,	// (0x0006d6df) cale_bg_pane_g3

0x2e8b,	// (0x0006d6e7) cale_bg_pane_g4

0x2e93,	// (0x0006d6ef) cale_bg_pane_g5

0x2e9b,	// (0x0006d6f7) cale_bg_pane_g6

0x2ea3,	// (0x0006d6ff) cale_bg_pane_g7

0x2eab,	// (0x0006d707) cale_bg_pane_g8

0x2eb3,	// (0x0006d70f) cale_bg_pane_g9

0x0008,

0xf2ea,	// (0x00079b46) cale_bg_pane_g

0x8814,	// (0x00073070) list_cale_time_pane_ParamLimits

0x8814,	// (0x00073070) list_cale_time_pane

0x8835,	// (0x00073091) list_cale_time_pane_g1_ParamLimits

0x8835,	// (0x00073091) list_cale_time_pane_g1

0x2ebb,	// (0x0006d717) list_cale_time_pane_g2_ParamLimits

0x2ebb,	// (0x0006d717) list_cale_time_pane_g2

0x8841,	// (0x0007309d) list_cale_time_pane_g3_ParamLimits

0x8841,	// (0x0007309d) list_cale_time_pane_g3

0x885d,	// (0x000730b9) list_cale_time_pane_g4_ParamLimits

0x885d,	// (0x000730b9) list_cale_time_pane_g4

0x886b,	// (0x000730c7) list_cale_time_pane_g5_ParamLimits

0x886b,	// (0x000730c7) list_cale_time_pane_g5

0x0005,

0xf2fd,	// (0x00079b59) list_cale_time_pane_g_ParamLimits

0xf2fd,	// (0x00079b59) list_cale_time_pane_g

0x8879,	// (0x000730d5) list_cale_time_pane_t1_ParamLimits

0x8879,	// (0x000730d5) list_cale_time_pane_t1

0x88a1,	// (0x000730fd) list_cale_time_pane_t2_ParamLimits

0x88a1,	// (0x000730fd) list_cale_time_pane_t2

0x8ba1,	// (0x000733fd) aid_blid_cardinal_pane

0x8be3,	// (0x0007343f) compass_pane_t4

0x88c9,	// (0x00073125) list_cale_time_pane_t4_ParamLimits

0x88c9,	// (0x00073125) list_cale_time_pane_t4

0x8bf1,	// (0x0007344d) compass_pane_t5

0x8c01,	// (0x0007345d) compass_pane_t6

0x8c0f,	// (0x0007346b) compass_pane_t7

0x3421,	// (0x0006dc7d) navi_pane_cc_t1

0x3576,	// (0x0006ddd2) aid_phob_thumbnail_center_pane

0x92ec,	// (0x00073b48) main_postcard_pane_g4_ParamLimits

0x0002,

0xf30a,	// (0x00079b66) list_cale_time_pane_t_ParamLimits

0xf30a,	// (0x00079b66) list_cale_time_pane_t

0x165b,	// (0x0006beb7) bg_popup_window_pane_cp02_ParamLimits

0x165b,	// (0x0006beb7) bg_popup_window_pane_cp02

0x2f8c,	// (0x0006d7e8) heading_pane_cp01_ParamLimits

0x2f8c,	// (0x0006d7e8) heading_pane_cp01

0x2f98,	// (0x0006d7f4) loc_req_pane_ParamLimits

0x2f98,	// (0x0006d7f4) loc_req_pane

0x2fa8,	// (0x0006d804) loc_type_pane_ParamLimits

0x2fa8,	// (0x0006d804) loc_type_pane

0x2fba,	// (0x0006d816) loc_type_pane_t1_ParamLimits

0x2fba,	// (0x0006d816) loc_type_pane_t1

0x2fcc,	// (0x0006d828) loc_type_pane_t2_ParamLimits

0x2fcc,	// (0x0006d828) loc_type_pane_t2

0x2fde,	// (0x0006d83a) loc_type_pane_t3_ParamLimits

0x2fde,	// (0x0006d83a) loc_type_pane_t3

0x0002,

0xf311,	// (0x00079b6d) loc_type_pane_t_ParamLimits

0xf311,	// (0x00079b6d) loc_type_pane_t

0x2ff0,	// (0x0006d84c) list_loc_req_pane

0x2ffa,	// (0x0006d856) scroll_pane_cp012

0x88f1,	// (0x0007314d) list_single_loc_request_popup_menu_pane_ParamLimits

0x88f1,	// (0x0007314d) list_single_loc_request_popup_menu_pane

0x3005,	// (0x0006d861) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x3005,	// (0x0006d861) list_single_loc_request_popup_menu_pane_g1

0x3011,	// (0x0006d86d) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x3011,	// (0x0006d86d) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf318,	// (0x00079b74) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf318,	// (0x00079b74) list_single_loc_request_popup_menu_pane_g

0x301d,	// (0x0006d879) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x301d,	// (0x0006d879) list_single_loc_request_popup_menu_pane_t1

0x8903,	// (0x0007315f) bg_popup_window_pane_cp03_ParamLimits

0x8903,	// (0x0007315f) bg_popup_window_pane_cp03

0x8911,	// (0x0007316d) heading_loc_req_pane_ParamLimits

0x8911,	// (0x0007316d) heading_loc_req_pane

0x891d,	// (0x00073179) popup_dyc_status_message_window_g1_ParamLimits

0x891d,	// (0x00073179) popup_dyc_status_message_window_g1

0x8929,	// (0x00073185) popup_dyc_status_message_window_t1_ParamLimits

0x8929,	// (0x00073185) popup_dyc_status_message_window_t1

0x893b,	// (0x00073197) popup_dyc_status_message_window_t2_ParamLimits

0x893b,	// (0x00073197) popup_dyc_status_message_window_t2

0x894d,	// (0x000731a9) popup_dyc_status_message_window_t3_ParamLimits

0x894d,	// (0x000731a9) popup_dyc_status_message_window_t3

0x0002,

0xf31d,	// (0x00079b79) popup_dyc_status_message_window_t_ParamLimits

0xf31d,	// (0x00079b79) popup_dyc_status_message_window_t

0x1a02,	// (0x0006c25e) bg_heading_pane_cp01

0x303f,	// (0x0006d89b) heading_loc_req_pane_g1

0x3047,	// (0x0006d8a3) heading_loc_req_pane_g2

0x304f,	// (0x0006d8ab) heading_loc_req_pane_g3

0x0002,

0xf324,	// (0x00079b80) heading_loc_req_pane_g

0x3057,	// (0x0006d8b3) heading_loc_req_pane_t1

0x30db,	// (0x0006d937) bg_popup_sub_pane_cp01_ParamLimits

0x30db,	// (0x0006d937) bg_popup_sub_pane_cp01

0x30e9,	// (0x0006d945) popup_cale_events_window_g1_ParamLimits

0x30e9,	// (0x0006d945) popup_cale_events_window_g1

0x3109,	// (0x0006d965) popup_cale_events_window_g2_ParamLimits

0x3109,	// (0x0006d965) popup_cale_events_window_g2

0x0001,

0xf358,	// (0x00079bb4) popup_cale_events_window_g_ParamLimits

0xf358,	// (0x00079bb4) popup_cale_events_window_g

0x3129,	// (0x0006d985) popup_cale_events_window_t1_ParamLimits

0x3129,	// (0x0006d985) popup_cale_events_window_t1

0x313b,	// (0x0006d997) popup_cale_events_window_t2_ParamLimits

0x313b,	// (0x0006d997) popup_cale_events_window_t2

0x3179,	// (0x0006d9d5) popup_cale_events_window_t3_ParamLimits

0x3179,	// (0x0006d9d5) popup_cale_events_window_t3

0x31b3,	// (0x0006da0f) popup_cale_events_window_t4_ParamLimits

0x31b3,	// (0x0006da0f) popup_cale_events_window_t4

0x0003,

0xf35d,	// (0x00079bb9) popup_cale_events_window_t_ParamLimits

0xf35d,	// (0x00079bb9) popup_cale_events_window_t

0x8977,	// (0x000731d3) call_type_pane

0x358e,	// (0x0006ddea) popup_call_status_window_g1

0x8983,	// (0x000731df) popup_call_status_window_g2

0x898f,	// (0x000731eb) popup_call_status_window_g3

0x0002,

0xf366,	// (0x00079bc2) popup_call_status_window_g

0x31e9,	// (0x0006da45) call_type_pane_g1

0x31f2,	// (0x0006da4e) call_type_pane_g2

0x0001,

0xf36d,	// (0x00079bc9) call_type_pane_g

0x1a02,	// (0x0006c25e) bg_popup_sub_pane_cp02

0x31fb,	// (0x0006da57) listscroll_popup_wml_pane

0x3203,	// (0x0006da5f) list_wml_pane

0x320d,	// (0x0006da69) scroll_pane_cp013

0x3218,	// (0x0006da74) list_single_graphic_popup_wml_pane_ParamLimits

0x3218,	// (0x0006da74) list_single_graphic_popup_wml_pane

0x1dc9,	// (0x0006c625) list_single_graphic_popup_wml_pane_g1

0x322c,	// (0x0006da88) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf372,	// (0x00079bce) list_single_graphic_popup_wml_pane_g

0x3234,	// (0x0006da90) list_single_graphic_popup_wml_pane_t1

0x3242,	// (0x0006da9e) aid_call_pane

0x1c55,	// (0x0006c4b1) popup_clock_analogue_window_g1

0x1c55,	// (0x0006c4b1) popup_clock_analogue_window_g2

0x899b,	// (0x000731f7) popup_clock_analogue_window_g3

0x899b,	// (0x000731f7) popup_clock_analogue_window_g4

0x1dc9,	// (0x0006c625) popup_clock_analogue_window_g5

0x0004,

0xf377,	// (0x00079bd3) popup_clock_analogue_window_g

0x89a3,	// (0x000731ff) popup_clock_analogue_window_t1

0x89b1,	// (0x0007320d) clock_digital_number_pane_ParamLimits

0x89b1,	// (0x0007320d) clock_digital_number_pane

0x89bd,	// (0x00073219) clock_digital_number_pane_cp02_ParamLimits

0x89bd,	// (0x00073219) clock_digital_number_pane_cp02

0x89c9,	// (0x00073225) clock_digital_number_pane_cp03_ParamLimits

0x89c9,	// (0x00073225) clock_digital_number_pane_cp03

0x89d5,	// (0x00073231) clock_digital_number_pane_cp04_ParamLimits

0x89d5,	// (0x00073231) clock_digital_number_pane_cp04

0x89e1,	// (0x0007323d) clock_digital_separator_pane_ParamLimits

0x89e1,	// (0x0007323d) clock_digital_separator_pane

0x89ed,	// (0x00073249) popup_clock_digital_window_t1

0x1dc9,	// (0x0006c625) clock_digital_number_pane_g1

0x1dc9,	// (0x0006c625) clock_digital_number_pane_g2

0x0001,

0xf2e5,	// (0x00079b41) clock_digital_number_pane_g

0x1dc9,	// (0x0006c625) clock_digital_separator_pane_g1

0x1dc9,	// (0x0006c625) clock_digital_separator_pane_g2

0x0001,

0xf2e5,	// (0x00079b41) clock_digital_separator_pane_g

0x1a02,	// (0x0006c25e) bg_popup_window_pane_cp04

0x3252,	// (0x0006daae) heading_pane_cp03

0x325a,	// (0x0006dab6) listscroll_popup_gms_pane

0x3262,	// (0x0006dabe) grid_large_graphic_popup_pane

0x326c,	// (0x0006dac8) listscroll_popup_gms_pane_g1

0x3274,	// (0x0006dad0) listscroll_popup_gms_pane_g2

0x0001,

0xf382,	// (0x00079bde) listscroll_popup_gms_pane_g

0x2c53,	// (0x0006d4af) scroll_pane_cp014

0x327c,	// (0x0006dad8) cell_large_graphic_popup_pane_ParamLimits

0x327c,	// (0x0006dad8) cell_large_graphic_popup_pane

0x3294,	// (0x0006daf0) cell_large_graphic_popup_pane_g1_ParamLimits

0x3294,	// (0x0006daf0) cell_large_graphic_popup_pane_g1

0x32a0,	// (0x0006dafc) cell_large_graphic_popup_pane_g2_ParamLimits

0x32a0,	// (0x0006dafc) cell_large_graphic_popup_pane_g2

0x32ac,	// (0x0006db08) cell_large_graphic_popup_pane_g3_ParamLimits

0x32ac,	// (0x0006db08) cell_large_graphic_popup_pane_g3

0x32b9,	// (0x0006db15) cell_large_graphic_popup_pane_g4_ParamLimits

0x32b9,	// (0x0006db15) cell_large_graphic_popup_pane_g4

0x0003,

0xf387,	// (0x00079be3) cell_large_graphic_popup_pane_g_ParamLimits

0xf387,	// (0x00079be3) cell_large_graphic_popup_pane_g

0x32c9,	// (0x0006db25) grid_highlight_pane_cp010

0x1dc9,	// (0x0006c625) bg_popup_call_pane_g1

0x32d3,	// (0x0006db2f) list_single_graphic_popup_conf_pane_ParamLimits

0x32d3,	// (0x0006db2f) list_single_graphic_popup_conf_pane

0x32e5,	// (0x0006db41) list_highlight_pane_cp01

0x32ee,	// (0x0006db4a) list_single_graphic_popup_conf_pane_g1

0x32f6,	// (0x0006db52) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf390,	// (0x00079bec) list_single_graphic_popup_conf_pane_g

0x32fe,	// (0x0006db5a) list_single_graphic_popup_conf_pane_t1

0x330c,	// (0x0006db68) linegrid_cams_pane_g1

0x8a0a,	// (0x00073266) linegrid_cams_pane_g2

0x1e81,	// (0x0006c6dd) linegrid_cams_pane_g3

0x3315,	// (0x0006db71) linegrid_cams_pane_g4

0x8a13,	// (0x0007326f) linegrid_cams_pane_g5

0x8a1c,	// (0x00073278) linegrid_cams_pane_g6

0x1f07,	// (0x0006c763) linegrid_cams_pane_g7

0x0006,

0xf395,	// (0x00079bf1) linegrid_cams_pane_g

0x331e,	// (0x0006db7a) popup_clock_analogue_window

0x331e,	// (0x0006db7a) popup_clock_digital_window

0x1a02,	// (0x0006c25e) popup_phob_thumbnail_window

0x1dc9,	// (0x0006c625) call_video_uplink_pane_g1

0x3327,	// (0x0006db83) call_video_uplink_pane_g2

0x0001,

0xf3a4,	// (0x00079c00) call_video_uplink_pane_g

0x1ed4,	// (0x0006c730) video_uplink_pane

0x332f,	// (0x0006db8b) mce_image_pane_g1

0x8a25,	// (0x00073281) mce_image_pane_g2

0x8a2d,	// (0x00073289) mce_image_pane_g3

0x8a35,	// (0x00073291) mce_image_pane_g4

0x8a3d,	// (0x00073299) mce_image_pane_g5

0x0004,

0xf3a9,	// (0x00079c05) mce_image_pane_g

0x3339,	// (0x0006db95) control_top_pane_stacon_cp01_ParamLimits

0x3339,	// (0x0006db95) control_top_pane_stacon_cp01

0x334d,	// (0x0006dba9) uni_indicator_pane_stacon_cp01_ParamLimits

0x334d,	// (0x0006dba9) uni_indicator_pane_stacon_cp01

0x335e,	// (0x0006dbba) bg_popup_sub_pane_cp03

0x8a45,	// (0x000732a1) chi_dic_find_pane

0x8a4d,	// (0x000732a9) listscroll_chi_dic_pane

0x8a56,	// (0x000732b2) main_pane_chidic_g1

0x8a69,	// (0x000732c5) chi_dic_find_pane_t1

0x3368,	// (0x0006dbc4) find_chidic_pane

0x3371,	// (0x0006dbcd) chi_dic_list_pane_ParamLimits

0x3371,	// (0x0006dbcd) chi_dic_list_pane

0x3382,	// (0x0006dbde) scroll_pane_cp020

0x8a77,	// (0x000732d3) find_chidic_pane_t1

0x1a02,	// (0x0006c25e) input_focus_pane_cp06

0x8a86,	// (0x000732e2) list_chi_dic_pane_ParamLimits

0x8a86,	// (0x000732e2) list_chi_dic_pane

0x338a,	// (0x0006dbe6) list_chi_dic_pane_t1_ParamLimits

0x338a,	// (0x0006dbe6) list_chi_dic_pane_t1

0x1a02,	// (0x0006c25e) list_highlight_pane_cp020

0x339d,	// (0x0006dbf9) bg_cale_heading_pane_g1

0x8aa7,	// (0x00073303) bg_cale_heading_pane_g2

0x8aaf,	// (0x0007330b) bg_cale_heading_pane_g3

0x8ab7,	// (0x00073313) bg_cale_heading_pane_g4

0x8ac1,	// (0x0007331d) bg_cale_heading_pane_g5

0x8acb,	// (0x00073327) bg_cale_heading_pane_g6

0x8ad3,	// (0x0007332f) bg_cale_heading_pane_g7

0x8adb,	// (0x00073337) bg_cale_heading_pane_g8

0x8ae5,	// (0x00073341) bg_cale_heading_pane_g9

0x0008,

0xf3b4,	// (0x00079c10) bg_cale_heading_pane_g

0x339d,	// (0x0006dbf9) bg_cale_side_pane_g1

0x8aef,	// (0x0007334b) bg_cale_side_pane_g2

0x8af9,	// (0x00073355) bg_cale_side_pane_g3

0x8b03,	// (0x0007335f) bg_cale_side_pane_g4

0x8b0d,	// (0x00073369) bg_cale_side_pane_g5

0x8b17,	// (0x00073373) bg_cale_side_pane_g6

0x8b21,	// (0x0007337d) bg_cale_side_pane_g7

0x8b2b,	// (0x00073387) bg_cale_side_pane_g8

0x8b33,	// (0x0007338f) bg_cale_side_pane_g9

0x0008,

0xf3c7,	// (0x00079c23) bg_cale_side_pane_g

0x8b3b,	// (0x00073397) popup_call_status_window_ParamLimits

0x8b3b,	// (0x00073397) popup_call_status_window

0x33a5,	// (0x0006dc01) stacon_top_pane

0x33ad,	// (0x0006dc09) status_pane_ParamLimits

0x33ad,	// (0x0006dc09) status_pane

0x33c2,	// (0x0006dc1e) status_small_pane

0x33ca,	// (0x0006dc26) control_pane

0x1a02,	// (0x0006c25e) stacon_bottom_pane

0x33d2,	// (0x0006dc2e) list_single_mce_smart_pane_t1_ParamLimits

0x33d2,	// (0x0006dc2e) list_single_mce_smart_pane_t1

0x33e5,	// (0x0006dc41) list_single_mce_smart_pane_t2_ParamLimits

0x33e5,	// (0x0006dc41) list_single_mce_smart_pane_t2

0x0001,

0xf3da,	// (0x00079c36) list_single_mce_smart_pane_t_ParamLimits

0xf3da,	// (0x00079c36) list_single_mce_smart_pane_t

0x8b47,	// (0x000733a3) compass_pane

0x8b53,	// (0x000733af) main_location2_pane_t1

0x8b67,	// (0x000733c3) main_location2_pane_t2

0x8b7b,	// (0x000733d7) main_location2_pane_t3

0x0003,

0xf3df,	// (0x00079c3b) main_location2_pane_t

0x3404,	// (0x0006dc60) compass_pane_g1_ParamLimits

0x3404,	// (0x0006dc60) compass_pane_g1

0x8bc5,	// (0x00073421) compass_pane_t1

0x8bd4,	// (0x00073430) compass_pane_t2

0x0005,

0xf3e8,	// (0x00079c44) compass_pane_t

0x8c1f,	// (0x0007347b) text_secondary_cp61

0x3418,	// (0x0006dc74) navi_pane_cams_g5

0x343b,	// (0x0006dc97) navi_pane_im_t1

0x3449,	// (0x0006dca5) navi_pane_mp_g1_ParamLimits

0x3449,	// (0x0006dca5) navi_pane_mp_g1

0x345d,	// (0x0006dcb9) navi_pane_mp_g2_ParamLimits

0x345d,	// (0x0006dcb9) navi_pane_mp_g2

0x3469,	// (0x0006dcc5) navi_pane_mp_g3_ParamLimits

0x3469,	// (0x0006dcc5) navi_pane_mp_g3

0x0002,

0xf3fc,	// (0x00079c58) navi_pane_mp_g_ParamLimits

0xf3fc,	// (0x00079c58) navi_pane_mp_g

0x3475,	// (0x0006dcd1) navi_pane_mp_t1

0x3483,	// (0x0006dcdf) navi_pane_mp_t2

0x0002,

0xf403,	// (0x00079c5f) navi_pane_mp_t

0x34bf,	// (0x0006dd1b) navi_pane_vt_g1

0x3475,	// (0x0006dcd1) navi_pane_vt_t1

0x34c7,	// (0x0006dd23) navi_slider_pane

0x34cf,	// (0x0006dd2b) zooming_pane

0x34d7,	// (0x0006dd33) navi_slider_pane_g1

0x8d4c,	// (0x000735a8) navi_slider_pane_g2

0x0006,

0xf40a,	// (0x00079c66) navi_slider_pane_g

0x34fb,	// (0x0006dd57) aid_levels_zoom

0x3503,	// (0x0006dd5f) zooming_pane_g1

0x350b,	// (0x0006dd67) zooming_pane_g2

0x350b,	// (0x0006dd67) zooming_pane_g3

0x0002,

0xf419,	// (0x00079c75) zooming_pane_g

0x3513,	// (0x0006dd6f) level_10_zoom

0x351c,	// (0x0006dd78) level_11_zoom

0x3525,	// (0x0006dd81) level_1_zoom

0x352e,	// (0x0006dd8a) level_2_zoom

0x3537,	// (0x0006dd93) level_3_zoom

0x3540,	// (0x0006dd9c) level_4_zoom

0x3549,	// (0x0006dda5) level_5_zoom

0x3552,	// (0x0006ddae) level_6_zoom

0x355b,	// (0x0006ddb7) level_7_zoom

0x3564,	// (0x0006ddc0) level_8_zoom

0x356d,	// (0x0006ddc9) level_9_zoom

0x357e,	// (0x0006ddda) popup_phob_thumbnail_window_g1

0x3586,	// (0x0006dde2) popup_phob_thumbnail_window_g2

0x0001,

0xf420,	// (0x00079c7c) popup_phob_thumbnail_window_g

0x48c1,	// (0x0006f11d) level_1_location

0x48c9,	// (0x0006f125) level_2_location

0x48d1,	// (0x0006f12d) level_3_location

0x48d9,	// (0x0006f135) level_4_location

0x34cf,	// (0x0006dd2b) level_5_location

0x8d5e,	// (0x000735ba) mce_icon_pane_g1

0x8d66,	// (0x000735c2) mce_icon_pane_g2

0x0001,

0xf425,	// (0x00079c81) mce_icon_pane_g

0x8d6e,	// (0x000735ca) main_mup_pane_g1_ParamLimits

0x8d6e,	// (0x000735ca) main_mup_pane_g1

0x8d86,	// (0x000735e2) main_mup_pane_g2_ParamLimits

0x8d86,	// (0x000735e2) main_mup_pane_g2

0x8da2,	// (0x000735fe) main_mup_pane_g3_ParamLimits

0x8da2,	// (0x000735fe) main_mup_pane_g3

0x8dbe,	// (0x0007361a) main_mup_pane_g4_ParamLimits

0x8dbe,	// (0x0007361a) main_mup_pane_g4

0x8dda,	// (0x00073636) main_mup_pane_g5_ParamLimits

0x8dda,	// (0x00073636) main_mup_pane_g5

0x8dfb,	// (0x00073657) main_mup_pane_g6_ParamLimits

0x8dfb,	// (0x00073657) main_mup_pane_g6

0x8e17,	// (0x00073673) main_mup_pane_g7_ParamLimits

0x8e17,	// (0x00073673) main_mup_pane_g7

0x8e33,	// (0x0007368f) main_mup_pane_g8_ParamLimits

0x8e33,	// (0x0007368f) main_mup_pane_g8

0x8e4f,	// (0x000736ab) main_mup_pane_g9_ParamLimits

0x8e4f,	// (0x000736ab) main_mup_pane_g9

0x8e6e,	// (0x000736ca) main_mup_pane_g10_ParamLimits

0x8e6e,	// (0x000736ca) main_mup_pane_g10

0x8e8d,	// (0x000736e9) main_mup_pane_g11_ParamLimits

0x8e8d,	// (0x000736e9) main_mup_pane_g11

0x8ea5,	// (0x00073701) main_mup_pane_g12_ParamLimits

0x8ea5,	// (0x00073701) main_mup_pane_g12

0x8eb3,	// (0x0007370f) main_mup_pane_g13_ParamLimits

0x8eb3,	// (0x0007370f) main_mup_pane_g13

0x000c,

0xf42a,	// (0x00079c86) main_mup_pane_g_ParamLimits

0xf42a,	// (0x00079c86) main_mup_pane_g

0x8ec9,	// (0x00073725) main_mup_pane_t1_ParamLimits

0x8ec9,	// (0x00073725) main_mup_pane_t1

0x8ee6,	// (0x00073742) main_mup_pane_t2_ParamLimits

0x8ee6,	// (0x00073742) main_mup_pane_t2

0x8f00,	// (0x0007375c) main_mup_pane_t3_ParamLimits

0x8f00,	// (0x0007375c) main_mup_pane_t3

0x8f1a,	// (0x00073776) main_mup_pane_t4_ParamLimits

0x8f1a,	// (0x00073776) main_mup_pane_t4

0x8f2c,	// (0x00073788) main_mup_pane_t5_ParamLimits

0x8f2c,	// (0x00073788) main_mup_pane_t5

0x8f3e,	// (0x0007379a) main_mup_pane_t6_ParamLimits

0x8f3e,	// (0x0007379a) main_mup_pane_t6

0x0005,

0xf445,	// (0x00079ca1) main_mup_pane_t_ParamLimits

0xf445,	// (0x00079ca1) main_mup_pane_t

0x8f54,	// (0x000737b0) mup_progress_pane_ParamLimits

0x8f54,	// (0x000737b0) mup_progress_pane

0x8f60,	// (0x000737bc) mup_visualizer_pane_ParamLimits

0x8f60,	// (0x000737bc) mup_visualizer_pane

0x8f9e,	// (0x000737fa) mup_volume_pane_ParamLimits

0x8f9e,	// (0x000737fa) mup_volume_pane

0x358e,	// (0x0006ddea) mup_visualizer_pane_g1_ParamLimits

0x358e,	// (0x0006ddea) mup_visualizer_pane_g1

0x358e,	// (0x0006ddea) mup_visualizer_pane_g2_ParamLimits

0x358e,	// (0x0006ddea) mup_visualizer_pane_g2

0x3404,	// (0x0006dc60) mup_visualizer_pane_g3_ParamLimits

0x3404,	// (0x0006dc60) mup_visualizer_pane_g3

0x0002,

0xf452,	// (0x00079cae) mup_visualizer_pane_g_ParamLimits

0xf452,	// (0x00079cae) mup_visualizer_pane_g

0x1dc9,	// (0x0006c625) mup_volume_pane_g1

0x35a4,	// (0x0006de00) mup_volume_pane_g2

0x0001,

0xf459,	// (0x00079cb5) mup_volume_pane_g

0x1dc9,	// (0x0006c625) mup_progress_pane_g1

0x35ad,	// (0x0006de09) mup_progress_pane_g2

0x35b6,	// (0x0006de12) mup_progress_pane_g3

0x0002,

0xf45e,	// (0x00079cba) mup_progress_pane_g

0x1a02,	// (0x0006c25e) bg_popup_window_pane_cp05

0x35bf,	// (0x0006de1b) heading_pane_cp02_ParamLimits

0x35bf,	// (0x0006de1b) heading_pane_cp02

0x35d9,	// (0x0006de35) list_popup_blid_pane

0x35e1,	// (0x0006de3d) list_blid_sat_info_pane_ParamLimits

0x35e1,	// (0x0006de3d) list_blid_sat_info_pane

0x35f4,	// (0x0006de50) list_blid_sat_info_pane_g1

0x35fc,	// (0x0006de58) list_blid_sat_info_pane_t1

0x90a9,	// (0x00073905) mup_equalizer_pane_ParamLimits

0x90a9,	// (0x00073905) mup_equalizer_pane

0x90ca,	// (0x00073926) mup_equalizer_pane_cp1_ParamLimits

0x90ca,	// (0x00073926) mup_equalizer_pane_cp1

0x90eb,	// (0x00073947) mup_equalizer_pane_cp2_ParamLimits

0x90eb,	// (0x00073947) mup_equalizer_pane_cp2

0x910c,	// (0x00073968) mup_equalizer_pane_cp3_ParamLimits

0x910c,	// (0x00073968) mup_equalizer_pane_cp3

0x912d,	// (0x00073989) mup_equalizer_pane_cp4_ParamLimits

0x912d,	// (0x00073989) mup_equalizer_pane_cp4

0x914e,	// (0x000739aa) mup_equalizer_pane_cp5

0x9164,	// (0x000739c0) mup_equalizer_pane_cp6

0x917c,	// (0x000739d8) mup_equalizer_pane_cp7

0x47df,	// (0x0006f03b) bg_popup_call_poc_act_pane_g9

0x47e7,	// (0x0006f043) bg_popup_call_poc_act_pane_g10

0x47ef,	// (0x0006f04b) bg_popup_call_poc_act_pane_g11

0x000a,

0x1c5d,	// (0x0006c4b9) mup_scale_pane

0x1dc9,	// (0x0006c625) mup_scale_pane_g1

0x360a,	// (0x0006de66) mup_scale_pane_g2

0x0006,

0xf47a,	// (0x00079cd6) mup_scale_pane_g

0x362e,	// (0x0006de8a) msg_data_pane

0x3636,	// (0x0006de92) scroll_pane_cp017

0x59e9,	// (0x00070245) bg_list_pane_cp04_ParamLimits

0x59e9,	// (0x00070245) bg_list_pane_cp04

0x363e,	// (0x0006de9a) msg_data_pane_g1

0x91a6,	// (0x00073a02) msg_data_pane_g2

0x8a2d,	// (0x00073289) msg_data_pane_g3

0x91ae,	// (0x00073a0a) msg_data_pane_g4

0x91b6,	// (0x00073a12) msg_data_pane_g5

0x91be,	// (0x00073a1a) msg_data_pane_g6

0x91c6,	// (0x00073a22) msg_data_pane_g7

0x0006,

0xf489,	// (0x00079ce5) msg_data_pane_g

0x5a09,	// (0x00070265) msg_text_pane_ParamLimits

0x5a09,	// (0x00070265) msg_text_pane

0x91ce,	// (0x00073a2a) qrid_highlight_pane_cp011_ParamLimits

0x91ce,	// (0x00073a2a) qrid_highlight_pane_cp011

0x1a02,	// (0x0006c25e) msg_body_pane

0x1a02,	// (0x0006c25e) msg_header_pane

0x364f,	// (0x0006deab) input_focus_pane_cp07

0x5a61,	// (0x000702bd) msg_header_pane_t1_ParamLimits

0x5a61,	// (0x000702bd) msg_header_pane_t1

0x5a75,	// (0x000702d1) msg_header_pane_t2_ParamLimits

0x5a75,	// (0x000702d1) msg_header_pane_t2

0x0001,

0xf49d,	// (0x00079cf9) msg_header_pane_t_ParamLimits

0xf49d,	// (0x00079cf9) msg_header_pane_t

0x3676,	// (0x0006ded2) msg_body_pane_g1

0x5a87,	// (0x000702e3) msg_body_pane_t1_ParamLimits

0x5a87,	// (0x000702e3) msg_body_pane_t1

0x5ab8,	// (0x00070314) msg_body_pane_t2_ParamLimits

0x5ab8,	// (0x00070314) msg_body_pane_t2

0x5aca,	// (0x00070326) msg_body_pane_t3_ParamLimits

0x5aca,	// (0x00070326) msg_body_pane_t3

0x0002,

0xf4a2,	// (0x00079cfe) msg_body_pane_t_ParamLimits

0xf4a2,	// (0x00079cfe) msg_body_pane_t

0x923c,	// (0x00073a98) main_viewer_pane_g1_ParamLimits

0x923c,	// (0x00073a98) main_viewer_pane_g1

0x9248,	// (0x00073aa4) main_viewer_pane_g2_ParamLimits

0x9248,	// (0x00073aa4) main_viewer_pane_g2

0x9254,	// (0x00073ab0) main_viewer_pane_g3_ParamLimits

0x9254,	// (0x00073ab0) main_viewer_pane_g3

0x9265,	// (0x00073ac1) main_viewer_pane_g4_ParamLimits

0x9265,	// (0x00073ac1) main_viewer_pane_g4

0x9276,	// (0x00073ad2) main_viewer_pane_g5_ParamLimits

0x9276,	// (0x00073ad2) main_viewer_pane_g5

0x9276,	// (0x00073ad2) main_viewer_pane_g7_ParamLimits

0x9276,	// (0x00073ad2) main_viewer_pane_g7

0x9288,	// (0x00073ae4) main_viewer_pane_g8_ParamLimits

0x9288,	// (0x00073ae4) main_viewer_pane_g8

0x0007,

0xf4b2,	// (0x00079d0e) main_viewer_pane_g_ParamLimits

0xf4b2,	// (0x00079d0e) main_viewer_pane_g

0x36a2,	// (0x0006defe) viewer_content_pane_ParamLimits

0x36a2,	// (0x0006defe) viewer_content_pane

0x92c0,	// (0x00073b1c) main_postcard_pane_g1_ParamLimits

0x92c0,	// (0x00073b1c) main_postcard_pane_g1

0x92ce,	// (0x00073b2a) main_postcard_pane_g2_ParamLimits

0x92ce,	// (0x00073b2a) main_postcard_pane_g2

0x92dc,	// (0x00073b38) main_postcard_pane_g3_ParamLimits

0x92dc,	// (0x00073b38) main_postcard_pane_g3

0x0005,

0xf4c3,	// (0x00079d1f) main_postcard_pane_g_ParamLimits

0xf4c3,	// (0x00079d1f) main_postcard_pane_g

0x92ec,	// (0x00073b48) main_postcard_pane_g4

0x49a2,	// (0x0006f1fe) smil_status_volume_pane_g2

0x9318,	// (0x00073b74) postcard_pane_ParamLimits

0x9318,	// (0x00073b74) postcard_pane

0x358e,	// (0x0006ddea) postcard_pane_g1_ParamLimits

0x358e,	// (0x0006ddea) postcard_pane_g1

0x934a,	// (0x00073ba6) postcard_pane_g2_ParamLimits

0x934a,	// (0x00073ba6) postcard_pane_g2

0x9356,	// (0x00073bb2) postcard_pane_g3_ParamLimits

0x9356,	// (0x00073bb2) postcard_pane_g3

0x36be,	// (0x0006df1a) postcard_pane_g4_ParamLimits

0x36be,	// (0x0006df1a) postcard_pane_g4

0x9362,	// (0x00073bbe) postcard_pane_g5_ParamLimits

0x9362,	// (0x00073bbe) postcard_pane_g5

0x936e,	// (0x00073bca) postcard_pane_g6_ParamLimits

0x936e,	// (0x00073bca) postcard_pane_g6

0x36b0,	// (0x0006df0c) postcard_pane_g7_ParamLimits

0x36b0,	// (0x0006df0c) postcard_pane_g7

0x0006,

0xf4d0,	// (0x00079d2c) postcard_pane_g_ParamLimits

0xf4d0,	// (0x00079d2c) postcard_pane_g

0x937a,	// (0x00073bd6) main_mp2_pane_g1_ParamLimits

0x937a,	// (0x00073bd6) main_mp2_pane_g1

0x9386,	// (0x00073be2) main_mp2_pane_g2_ParamLimits

0x9386,	// (0x00073be2) main_mp2_pane_g2

0x9392,	// (0x00073bee) main_mp2_pane_g3_ParamLimits

0x9392,	// (0x00073bee) main_mp2_pane_g3

0x0002,

0xf4df,	// (0x00079d3b) main_mp2_pane_g_ParamLimits

0xf4df,	// (0x00079d3b) main_mp2_pane_g

0x939e,	// (0x00073bfa) main_mp2_pane_t1_ParamLimits

0x939e,	// (0x00073bfa) main_mp2_pane_t1

0x93b5,	// (0x00073c11) main_mp2_pane_t2_ParamLimits

0x93b5,	// (0x00073c11) main_mp2_pane_t2

0x93c7,	// (0x00073c23) main_mp2_pane_t3_ParamLimits

0x93c7,	// (0x00073c23) main_mp2_pane_t3

0x0002,

0xf4e6,	// (0x00079d42) main_mp2_pane_t_ParamLimits

0xf4e6,	// (0x00079d42) main_mp2_pane_t

0x36cc,	// (0x0006df28) pec_content_pane_ParamLimits

0x36cc,	// (0x0006df28) pec_content_pane

0x2c53,	// (0x0006d4af) scroll_pane_cp015

0x36de,	// (0x0006df3a) pec_attribute_pane_ParamLimits

0x36de,	// (0x0006df3a) pec_attribute_pane

0x93d9,	// (0x00073c35) pec_content_pane_g1_ParamLimits

0x93d9,	// (0x00073c35) pec_content_pane_g1

0x36ee,	// (0x0006df4a) pec_content_pane_t1_ParamLimits

0x36ee,	// (0x0006df4a) pec_content_pane_t1

0x3700,	// (0x0006df5c) pec_content_pane_t2_ParamLimits

0x3700,	// (0x0006df5c) pec_content_pane_t2

0x0001,

0xf4ed,	// (0x00079d49) pec_content_pane_t_ParamLimits

0xf4ed,	// (0x00079d49) pec_content_pane_t

0x93e5,	// (0x00073c41) list_single_graphic_pane_cp01_ParamLimits

0x93e5,	// (0x00073c41) list_single_graphic_pane_cp01

0x1c5d,	// (0x0006c4b9) bg_popup_sub_pane_cp04

0x3712,	// (0x0006df6e) popup_mup_playback_window_g1

0x371e,	// (0x0006df7a) popup_mup_playback_window_t1

0x3733,	// (0x0006df8f) popup_mup_playback_window_t2

0x0001,

0xf4f2,	// (0x00079d4e) popup_mup_playback_window_t

0x376a,	// (0x0006dfc6) main_image_pane_g1_ParamLimits

0x376a,	// (0x0006dfc6) main_image_pane_g1

0x37ad,	// (0x0006e009) scroll_pane_cp018_ParamLimits

0x37ad,	// (0x0006e009) scroll_pane_cp018

0x37c5,	// (0x0006e021) scroll_pane_cp016_ParamLimits

0x37c5,	// (0x0006e021) scroll_pane_cp016

0x9489,	// (0x00073ce5) smil2_image_pane_ParamLimits

0x9489,	// (0x00073ce5) smil2_image_pane

0x94bd,	// (0x00073d19) smil2_root_pane_ParamLimits

0x94bd,	// (0x00073d19) smil2_root_pane

0x94e9,	// (0x00073d45) smil2_text_pane_ParamLimits

0x94e9,	// (0x00073d45) smil2_text_pane

0x1a02,	// (0x0006c25e) bg_list_pane_cp06

0x3801,	// (0x0006e05d) grid_radio_pane

0x1a02,	// (0x0006c25e) bg_popup_window_pane_cp06

0x3809,	// (0x0006e065) main_fmradio_pane_t1

0x3252,	// (0x0006daae) heading_pane_cp04

0x3817,	// (0x0006e073) main_fmradio_pane_t2

0x47f7,	// (0x0006f053) popup_cale_lunar_info_window_g1

0x3825,	// (0x0006e081) main_fmradio_pane_t3

0x47ff,	// (0x0006f05b) popup_cale_lunar_info_window_g2

0x3833,	// (0x0006e08f) main_fmradio_pane_t4

0x0001,

0x3841,	// (0x0006e09d) main_fmradio_pane_t5

0x0004,

0xf5cd,	// (0x00079e29) popup_cale_lunar_info_window_g

0xf507,	// (0x00079d63) main_fmradio_pane_t

0x384f,	// (0x0006e0ab) wait_bar_pane_cp03

0x3857,	// (0x0006e0b3) cell_fmradio_pane_ParamLimits

0x3857,	// (0x0006e0b3) cell_fmradio_pane

0x36b0,	// (0x0006df0c) cell_fmradio_pane_g1_ParamLimits

0x36b0,	// (0x0006df0c) cell_fmradio_pane_g1

0x1a02,	// (0x0006c25e) grid_highlight_pane_cp011

0x386a,	// (0x0006e0c6) poc_content_pane_ParamLimits

0x386a,	// (0x0006e0c6) poc_content_pane

0x387c,	// (0x0006e0d8) scroll_pane_cp019

0x9529,	// (0x00073d85) popup_call_poc_act_window_ParamLimits

0x9529,	// (0x00073d85) popup_call_poc_act_window

0x9536,	// (0x00073d92) popup_call_poc_inact_window_ParamLimits

0x9536,	// (0x00073d92) popup_call_poc_inact_window

0xf5a4,	// (0x00079e00) bg_popup_call_poc_act_pane_g

0x4767,	// (0x0006efc3) bg_popup_call_poc_inact_pane_g1

0x476f,	// (0x0006efcb) bg_popup_call_poc_inact_pane_g2

0x3884,	// (0x0006e0e0) popup_call_poc_act_window_g2

0x4777,	// (0x0006efd3) bg_popup_call_poc_inact_pane_g3

0x477f,	// (0x0006efdb) bg_popup_call_poc_inact_pane_g4

0x4787,	// (0x0006efe3) bg_popup_call_poc_inact_pane_g5

0x388c,	// (0x0006e0e8) popup_call_poc_act_window_t1_ParamLimits

0x388c,	// (0x0006e0e8) popup_call_poc_act_window_t1

0x38b4,	// (0x0006e110) popup_call_poc_act_window_t2_ParamLimits

0x38b4,	// (0x0006e110) popup_call_poc_act_window_t2

0x38dc,	// (0x0006e138) popup_call_poc_act_window_t3_ParamLimits

0x38dc,	// (0x0006e138) popup_call_poc_act_window_t3

0x3904,	// (0x0006e160) popup_call_poc_act_window_t4_ParamLimits

0x3904,	// (0x0006e160) popup_call_poc_act_window_t4

0x0003,

0xf512,	// (0x00079d6e) popup_call_poc_act_window_t_ParamLimits

0xf512,	// (0x00079d6e) popup_call_poc_act_window_t

0x478f,	// (0x0006efeb) bg_popup_call_poc_inact_pane_g6

0x4797,	// (0x0006eff3) bg_popup_call_poc_inact_pane_g7

0x479f,	// (0x0006effb) bg_popup_call_poc_inact_pane_g8

0x3916,	// (0x0006e172) popup_call_poc_inact_window_g2

0x47a7,	// (0x0006f003) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf591,	// (0x00079ded) bg_popup_call_poc_inact_pane_g

0x391e,	// (0x0006e17a) popup_call_poc_inact_window_t1_ParamLimits

0x391e,	// (0x0006e17a) popup_call_poc_inact_window_t1

0x3933,	// (0x0006e18f) popup_call_poc_inact_window_t2_ParamLimits

0x3933,	// (0x0006e18f) popup_call_poc_inact_window_t2

0x3948,	// (0x0006e1a4) popup_call_poc_inact_window_t3_ParamLimits

0x3948,	// (0x0006e1a4) popup_call_poc_inact_window_t3

0x0002,

0xf51b,	// (0x00079d77) popup_call_poc_inact_window_t_ParamLimits

0xf51b,	// (0x00079d77) popup_call_poc_inact_window_t

0x4928,	// (0x0006f184) context_pane_ParamLimits

0x9b5c,	// (0x000743b8) signal_pane_ParamLimits

0x34cf,	// (0x0006dd2b) main_call2_pane

0x9ad4,	// (0x00074330) popup_phob_thumbnail2_window_ParamLimits

0x9ad4,	// (0x00074330) popup_phob_thumbnail2_window

0x91ea,	// (0x00073a46) aid_hotspot_pointer_arrow_pane

0x91f2,	// (0x00073a4e) aid_hotspot_pointer_hand_pane

0x985b,	// (0x000740b7) phob_pre_status_pane_g5

0x7621,	// (0x00071e7d) cams_zoom_pane_ParamLimits

0x762d,	// (0x00071e89) image_vga_pane_ParamLimits

0x763c,	// (0x00071e98) main_camera_pane_g1_ParamLimits

0x764a,	// (0x00071ea6) main_camera_pane_g2_ParamLimits

0x7658,	// (0x00071eb4) main_camera_pane_g3_ParamLimits

0x7664,	// (0x00071ec0) main_camera_pane_g4_ParamLimits

0x7670,	// (0x00071ecc) main_camera_pane_g5_ParamLimits

0x767c,	// (0x00071ed8) main_camera_pane_g6_ParamLimits

0x7688,	// (0x00071ee4) main_camera_pane_g7_ParamLimits

0xf21a,	// (0x00079a76) main_camera_pane_g_ParamLimits

0x7694,	// (0x00071ef0) main_camera_pane_t1_ParamLimits

0x76a6,	// (0x00071f02) main_camera_pane_t2_ParamLimits

0xf22b,	// (0x00079a87) main_camera_pane_t_ParamLimits

0x1c5d,	// (0x0006c4b9) bg_popup_preview_window_pane_cp01_ParamLimits

0x1c5d,	// (0x0006c4b9) bg_popup_preview_window_pane_cp01

0x395d,	// (0x0006e1b9) popup_phob_thumbnail2_window_g1_ParamLimits

0x395d,	// (0x0006e1b9) popup_phob_thumbnail2_window_g1

0x1a02,	// (0x0006c25e) call2_cli_visual_pane

0x9552,	// (0x00073dae) popup_call2_audio_conf_window_ParamLimits

0x9552,	// (0x00073dae) popup_call2_audio_conf_window

0x9567,	// (0x00073dc3) popup_call2_audio_first_window_ParamLimits

0x9567,	// (0x00073dc3) popup_call2_audio_first_window

0x9605,	// (0x00073e61) popup_call2_audio_in_window_ParamLimits

0x9605,	// (0x00073e61) popup_call2_audio_in_window

0x9647,	// (0x00073ea3) popup_call2_audio_out_window_ParamLimits

0x9647,	// (0x00073ea3) popup_call2_audio_out_window

0x96a9,	// (0x00073f05) popup_call2_audio_second_window_ParamLimits

0x96a9,	// (0x00073f05) popup_call2_audio_second_window

0x9707,	// (0x00073f63) popup_call2_audio_wait_window_ParamLimits

0x9707,	// (0x00073f63) popup_call2_audio_wait_window

0x1a02,	// (0x0006c25e) bg_popup_call2_act_pane_cp03

0x1c3f,	// (0x0006c49b) list_conf_pane_cp

0x3969,	// (0x0006e1c5) popup_call2_audio_conf_window_t1

0x3977,	// (0x0006e1d3) list_single_graphic_popup_conf2_pane_ParamLimits

0x3977,	// (0x0006e1d3) list_single_graphic_popup_conf2_pane

0x32e5,	// (0x0006db41) list_highlight_pane_cp04

0x398a,	// (0x0006e1e6) list_single_graphic_popup_conf2_pane_g1

0x32f6,	// (0x0006db52) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf522,	// (0x00079d7e) list_single_graphic_popup_conf2_pane_g

0x3994,	// (0x0006e1f0) list_single_graphic_popup_conf2_pane_t1

0x39a2,	// (0x0006e1fe) bg_popup_call2_act_pane_cp01_ParamLimits

0x39a2,	// (0x0006e1fe) bg_popup_call2_act_pane_cp01

0x3a2c,	// (0x0006e288) call_type_pane_cp05_ParamLimits

0x3a2c,	// (0x0006e288) call_type_pane_cp05

0x3a80,	// (0x0006e2dc) popup_call2_audio_second_window_g1_ParamLimits

0x3a80,	// (0x0006e2dc) popup_call2_audio_second_window_g1

0x3ad4,	// (0x0006e330) popup_call2_audio_second_window_g2_ParamLimits

0x3ad4,	// (0x0006e330) popup_call2_audio_second_window_g2

0x0002,

0xf527,	// (0x00079d83) popup_call2_audio_second_window_g_ParamLimits

0xf527,	// (0x00079d83) popup_call2_audio_second_window_g

0x3b39,	// (0x0006e395) popup_call2_audio_second_window_t1_ParamLimits

0x3b39,	// (0x0006e395) popup_call2_audio_second_window_t1

0x3bf4,	// (0x0006e450) popup_call2_audio_second_window_t2_ParamLimits

0x3bf4,	// (0x0006e450) popup_call2_audio_second_window_t2

0x3c47,	// (0x0006e4a3) popup_call2_audio_second_window_t3_ParamLimits

0x3c47,	// (0x0006e4a3) popup_call2_audio_second_window_t3

0x0003,

0xf52e,	// (0x00079d8a) popup_call2_audio_second_window_t_ParamLimits

0xf52e,	// (0x00079d8a) popup_call2_audio_second_window_t

0x1a02,	// (0x0006c25e) bg_popup_call2_in_pane_cp02

0x1a0c,	// (0x0006c268) call_type_pane_cp04

0x1a14,	// (0x0006c270) popup_call2_audio_wait_window_g1

0x1a1c,	// (0x0006c278) popup_call2_audio_wait_window_g2

0x0001,

0xf107,	// (0x00079963) popup_call2_audio_wait_window_g

0x1a24,	// (0x0006c280) popup_call2_audio_wait_window_t3

0x3d3a,	// (0x0006e596) bg_popup_call2_act_pane_ParamLimits

0x3d3a,	// (0x0006e596) bg_popup_call2_act_pane

0x3dfa,	// (0x0006e656) call_type_pane_cp03_ParamLimits

0x3dfa,	// (0x0006e656) call_type_pane_cp03

0x3e5e,	// (0x0006e6ba) popup_call2_audio_first_window_g1_ParamLimits

0x3e5e,	// (0x0006e6ba) popup_call2_audio_first_window_g1

0x3ece,	// (0x0006e72a) popup_call2_audio_first_window_g2_ParamLimits

0x3ece,	// (0x0006e72a) popup_call2_audio_first_window_g2

0x358e,	// (0x0006ddea) popup_call2_audio_first_window_g3_ParamLimits

0x358e,	// (0x0006ddea) popup_call2_audio_first_window_g3

0x0004,

0xf537,	// (0x00079d93) popup_call2_audio_first_window_g_ParamLimits

0xf537,	// (0x00079d93) popup_call2_audio_first_window_g

0x3fac,	// (0x0006e808) popup_call2_audio_first_window_t1_ParamLimits

0x3fac,	// (0x0006e808) popup_call2_audio_first_window_t1

0x40af,	// (0x0006e90b) popup_call2_audio_first_window_t4_ParamLimits

0x40af,	// (0x0006e90b) popup_call2_audio_first_window_t4

0x4192,	// (0x0006e9ee) popup_call2_audio_first_window_t5_ParamLimits

0x4192,	// (0x0006e9ee) popup_call2_audio_first_window_t5

0x0003,

0xf542,	// (0x00079d9e) popup_call2_audio_first_window_t_ParamLimits

0xf542,	// (0x00079d9e) popup_call2_audio_first_window_t

0x1c55,	// (0x0006c4b1) bg_popup_call2_act_pane_g1

0x4807,	// (0x0006f063) popup_cale_lunar_info_window_t1

0x4815,	// (0x0006f071) popup_cale_lunar_info_window_t2

0x4823,	// (0x0006f07f) popup_cale_lunar_info_window_t3

0x1a02,	// (0x0006c25e) bg_popup_call2_bubble_pane

0x4293,	// (0x0006eaef) bg_popup_call2_in_pane_cp01_ParamLimits

0x4293,	// (0x0006eaef) bg_popup_call2_in_pane_cp01

0x16de,	// (0x0006bf3a) call_type_pane_cp02

0x42db,	// (0x0006eb37) popup_call2_audio_out_window_g1_ParamLimits

0x42db,	// (0x0006eb37) popup_call2_audio_out_window_g1

0x4307,	// (0x0006eb63) popup_call2_audio_out_window_g2_ParamLimits

0x4307,	// (0x0006eb63) popup_call2_audio_out_window_g2

0x432f,	// (0x0006eb8b) popup_call2_audio_out_window_g3_ParamLimits

0x432f,	// (0x0006eb8b) popup_call2_audio_out_window_g3

0x0003,

0xf54b,	// (0x00079da7) popup_call2_audio_out_window_g_ParamLimits

0xf54b,	// (0x00079da7) popup_call2_audio_out_window_g

0x436a,	// (0x0006ebc6) popup_call2_audio_out_window_t1_ParamLimits

0x436a,	// (0x0006ebc6) popup_call2_audio_out_window_t1

0x43c9,	// (0x0006ec25) popup_call2_audio_out_window_t2_ParamLimits

0x43c9,	// (0x0006ec25) popup_call2_audio_out_window_t2

0x441d,	// (0x0006ec79) popup_call2_audio_out_window_t3_ParamLimits

0x441d,	// (0x0006ec79) popup_call2_audio_out_window_t3

0x4433,	// (0x0006ec8f) popup_call2_audio_out_window_t4_ParamLimits

0x4433,	// (0x0006ec8f) popup_call2_audio_out_window_t4

0x4449,	// (0x0006eca5) popup_call2_audio_out_window_t5_ParamLimits

0x4449,	// (0x0006eca5) popup_call2_audio_out_window_t5

0x0005,

0xf554,	// (0x00079db0) popup_call2_audio_out_window_t_ParamLimits

0xf554,	// (0x00079db0) popup_call2_audio_out_window_t

0x44ad,	// (0x0006ed09) bg_popup_call2_in_pane_ParamLimits

0x44ad,	// (0x0006ed09) bg_popup_call2_in_pane

0x4509,	// (0x0006ed65) popup_call2_audio_in_window_g1_ParamLimits

0x4509,	// (0x0006ed65) popup_call2_audio_in_window_g1

0x4541,	// (0x0006ed9d) popup_call2_audio_in_window_g2_ParamLimits

0x4541,	// (0x0006ed9d) popup_call2_audio_in_window_g2

0x4579,	// (0x0006edd5) popup_call2_audio_in_window_g3_ParamLimits

0x4579,	// (0x0006edd5) popup_call2_audio_in_window_g3

0x0003,

0xf561,	// (0x00079dbd) popup_call2_audio_in_window_g_ParamLimits

0xf561,	// (0x00079dbd) popup_call2_audio_in_window_g

0x45d1,	// (0x0006ee2d) popup_call2_audio_in_window_t1_ParamLimits

0x45d1,	// (0x0006ee2d) popup_call2_audio_in_window_t1

0x4651,	// (0x0006eead) popup_call2_audio_in_window_t2_ParamLimits

0x4651,	// (0x0006eead) popup_call2_audio_in_window_t2

0x46d1,	// (0x0006ef2d) popup_call2_audio_in_window_t3_ParamLimits

0x46d1,	// (0x0006ef2d) popup_call2_audio_in_window_t3

0x46eb,	// (0x0006ef47) popup_call2_audio_in_window_t4_ParamLimits

0x46eb,	// (0x0006ef47) popup_call2_audio_in_window_t4

0x46fd,	// (0x0006ef59) popup_call2_audio_in_window_t5_ParamLimits

0x46fd,	// (0x0006ef59) popup_call2_audio_in_window_t5

0x4712,	// (0x0006ef6e) popup_call2_audio_in_window_t6_ParamLimits

0x4712,	// (0x0006ef6e) popup_call2_audio_in_window_t6

0x0005,

0xf56a,	// (0x00079dc6) popup_call2_audio_in_window_t_ParamLimits

0xf56a,	// (0x00079dc6) popup_call2_audio_in_window_t

0x1c55,	// (0x0006c4b1) bg_popup_call2_in_pane_g1

0x4831,	// (0x0006f08d) popup_cale_lunar_info_window_t4

0x0003,

0xf5d2,	// (0x00079e2e) popup_cale_lunar_info_window_t

0x1c5d,	// (0x0006c4b9) bg_popup_call2_rect_pane_ParamLimits

0x1c5d,	// (0x0006c4b9) bg_popup_call2_rect_pane

0x1a02,	// (0x0006c25e) call2_cli_visual_graphic_pane

0x1a02,	// (0x0006c25e) call2_cli_visual_text_pane

0x9c0e,	// (0x0007446a) smil_status_volume_pane_g3

0x0002,

0x1dc9,	// (0x0006c625) call2_cli_visual_graphic_pane_g1

0x1dc9,	// (0x0006c625) call2_cli_visual_graphic_pane_g2

0x1dc9,	// (0x0006c625) call2_cli_visual_graphic_pane_g3

0x0002,

0xf577,	// (0x00079dd3) call2_cli_visual_graphic_pane_g

0x4727,	// (0x0006ef83) bg_popup_call2_rect_pane_g1

0x1e67,	// (0x0006c6c3) bg_popup_call2_rect_pane_g2

0x472f,	// (0x0006ef8b) bg_popup_call2_rect_pane_g3

0x4737,	// (0x0006ef93) bg_popup_call2_rect_pane_g4

0x473f,	// (0x0006ef9b) bg_popup_call2_rect_pane_g5

0x4747,	// (0x0006efa3) bg_popup_call2_rect_pane_g6

0x474f,	// (0x0006efab) bg_popup_call2_rect_pane_g7

0x4757,	// (0x0006efb3) bg_popup_call2_rect_pane_g8

0x475f,	// (0x0006efbb) bg_popup_call2_rect_pane_g9

0x0008,

0xf57e,	// (0x00079dda) bg_popup_call2_rect_pane_g

0x4767,	// (0x0006efc3) bg_popup_call2_bubble_pane_g1

0x476f,	// (0x0006efcb) bg_popup_call2_bubble_pane_g2

0x4777,	// (0x0006efd3) bg_popup_call2_bubble_pane_g3

0x477f,	// (0x0006efdb) bg_popup_call2_bubble_pane_g4

0x4787,	// (0x0006efe3) bg_popup_call2_bubble_pane_g5

0x478f,	// (0x0006efeb) bg_popup_call2_bubble_pane_g6

0x4797,	// (0x0006eff3) bg_popup_call2_bubble_pane_g7

0x479f,	// (0x0006effb) bg_popup_call2_bubble_pane_g8

0x47a7,	// (0x0006f003) bg_popup_call2_bubble_pane_g9

0x0008,

0xf591,	// (0x00079ded) bg_popup_call2_bubble_pane_g

0x71c2,	// (0x00071a1e) aid_cale_week_size_cell_pane

0x76b8,	// (0x00071f14) aid_cams_cif_uncrop_pane_ParamLimits

0x76b8,	// (0x00071f14) aid_cams_cif_uncrop_pane

0x781b,	// (0x00072077) aid_cams_size_cell_ParamLimits

0x781b,	// (0x00072077) aid_cams_size_cell

0x7827,	// (0x00072083) grid_cams_pane_ParamLimits

0x7835,	// (0x00072091) linegrid_cams_pane_ParamLimits

0x790c,	// (0x00072168) call_video_pane_t1

0x792d,	// (0x00072189) call_video_pane_t2

0x0001,

0xf27e,	// (0x00079ada) call_video_pane_t

0x7ead,	// (0x00072709) aid_cale_month_size_cell_pane_ParamLimits

0x7ead,	// (0x00072709) aid_cale_month_size_cell_pane

0xf61b,	// (0x00079e77) smil_status_volume_pane_g

0x9c1b,	// (0x00074477) volume_smil_pane_ParamLimits

0x6927,	// (0x00071183) aid_popup2_width_pane

0x7093,	// (0x000718ef) cell_qdial_pane_g4_ParamLimits

0x7093,	// (0x000718ef) cell_qdial_pane_g4

0x8ba1,	// (0x000733fd) aid_blid_cardinal_pane_ParamLimits

0x8bb1,	// (0x0007340d) aid_blid_destination_pane_ParamLimits

0x8bb1,	// (0x0007340d) aid_blid_destination_pane

0x1c5d,	// (0x0006c4b9) bg_popup_call_poc_act_pane_ParamLimits

0x1c5d,	// (0x0006c4b9) bg_popup_call_poc_act_pane

0x1c5d,	// (0x0006c4b9) bg_popup_call_poc_inact_pane_ParamLimits

0x1c5d,	// (0x0006c4b9) bg_popup_call_poc_inact_pane

0x47b7,	// (0x0006f013) bg_popup_call_poc_act_pane_g1

0x47bf,	// (0x0006f01b) bg_popup_call_poc_act_pane_g2

0x47c7,	// (0x0006f023) bg_popup_call_poc_act_pane_g3

0x477f,	// (0x0006efdb) bg_popup_call_poc_act_pane_g4

0x4787,	// (0x0006efe3) bg_popup_call_poc_act_pane_g5

0x47cf,	// (0x0006f02b) bg_popup_call_poc_act_pane_g6

0x4797,	// (0x0006eff3) bg_popup_call_poc_act_pane_g7

0x47d7,	// (0x0006f033) bg_popup_call_poc_act_pane_g8

0x1a02,	// (0x0006c25e) main_usb_pane

0x9a0f,	// (0x0007426b) popup_cale_lunar_info_window

0x7c4c,	// (0x000724a8) im_reading_pane_t1_ParamLimits

0x2bab,	// (0x0006d407) list_im_pane_ParamLimits

0x2bbc,	// (0x0006d418) scroll_pane_cp07_ParamLimits

0x1a02,	// (0x0006c25e) grid_highlight_pane_cp012

0x1c5d,	// (0x0006c4b9) mup_scale_pane_ParamLimits

0x358e,	// (0x0006ddea) main_usb_pane_g1_ParamLimits

0x358e,	// (0x0006ddea) main_usb_pane_g1

0x977e,	// (0x00073fda) main_usb_pane_g2_ParamLimits

0x977e,	// (0x00073fda) main_usb_pane_g2

0x0001,

0xf5bb,	// (0x00079e17) main_usb_pane_g_ParamLimits

0xf5bb,	// (0x00079e17) main_usb_pane_g

0x978a,	// (0x00073fe6) main_usb_pane_t1_ParamLimits

0x978a,	// (0x00073fe6) main_usb_pane_t1

0x979c,	// (0x00073ff8) main_usb_pane_t2_ParamLimits

0x979c,	// (0x00073ff8) main_usb_pane_t2

0x97ae,	// (0x0007400a) main_usb_pane_t3_ParamLimits

0x97ae,	// (0x0007400a) main_usb_pane_t3

0x97c0,	// (0x0007401c) main_usb_pane_t4_ParamLimits

0x97c0,	// (0x0007401c) main_usb_pane_t4

0x97d2,	// (0x0007402e) main_usb_pane_t5_ParamLimits

0x97d2,	// (0x0007402e) main_usb_pane_t5

0x97e4,	// (0x00074040) main_usb_pane_t6_ParamLimits

0x97e4,	// (0x00074040) main_usb_pane_t6

0x0005,

0xf5c0,	// (0x00079e1c) main_usb_pane_t_ParamLimits

0x8b47,	// (0x000733a3) aid_text_placing

0x8b53,	// (0x000733af) main_location2_pane_t1_ParamLimits

0x8b67,	// (0x000733c3) main_location2_pane_t2_ParamLimits

0x8b7b,	// (0x000733d7) main_location2_pane_t3_ParamLimits

0x8b8f,	// (0x000733eb) main_location2_pane_t4_ParamLimits

0x8b8f,	// (0x000733eb) main_location2_pane_t4

0xf3df,	// (0x00079c3b) main_location2_pane_t_ParamLimits

0x1ca1,	// (0x0006c4fd) find_pinb_pane_g2_ParamLimits

0x1ca1,	// (0x0006c4fd) find_pinb_pane_g2

0x0001,

0xf12d,	// (0x00079989) find_pinb_pane_g_ParamLimits

0xf12d,	// (0x00079989) find_pinb_pane_g

0x1cad,	// (0x0006c509) find_pinb_pane_t1_ParamLimits

0x1cbf,	// (0x0006c51b) find_pinb_pane_t2_ParamLimits

0xf132,	// (0x0007998e) find_pinb_pane_t_ParamLimits

0x1a02,	// (0x0006c25e) main_call3_pane

0x82c5,	// (0x00072b21) cale_month_day_heading_pane_t1_ParamLimits

0x8323,	// (0x00072b7f) cale_month_day_heading_pane_t2_ParamLimits

0x8388,	// (0x00072be4) cale_month_day_heading_pane_t3_ParamLimits

0x83ed,	// (0x00072c49) cale_month_day_heading_pane_t4_ParamLimits

0x8452,	// (0x00072cae) cale_month_day_heading_pane_t5_ParamLimits

0x84b7,	// (0x00072d13) cale_month_day_heading_pane_t6_ParamLimits

0x8524,	// (0x00072d80) cale_month_day_heading_pane_t7_ParamLimits

0xf2b6,	// (0x00079b12) cale_month_day_heading_pane_t_ParamLimits

0x2e26,	// (0x0006d682) smil_status_volume_pane

0x9332,	// (0x00073b8e) postcard_address_pane_ParamLimits

0x9332,	// (0x00073b8e) postcard_address_pane

0x933e,	// (0x00073b9a) postcard_message_pane_ParamLimits

0x933e,	// (0x00073b9a) postcard_message_pane

0x9746,	// (0x00073fa2) call2_cli_visual_pane_t1_ParamLimits

0x9746,	// (0x00073fa2) call2_cli_visual_pane_t1

0x9d6e,	// (0x000745ca) postcard_message_pane_t1_ParamLimits

0x9d6e,	// (0x000745ca) postcard_message_pane_t1

0x9d57,	// (0x000745b3) postcard_address_pane_t1_ParamLimits

0x9d57,	// (0x000745b3) postcard_address_pane_t1

0x9d48,	// (0x000745a4) popup_call3_audio_in_window_ParamLimits

0x9d48,	// (0x000745a4) popup_call3_audio_in_window

0x9c30,	// (0x0007448c) bg_popup_call3_in_pane_ParamLimits

0x9c30,	// (0x0007448c) bg_popup_call3_in_pane

0x9c8e,	// (0x000744ea) popup_call3_audio_in_window_g1_ParamLimits

0x9c8e,	// (0x000744ea) popup_call3_audio_in_window_g1

0x9ca6,	// (0x00074502) popup_call3_audio_in_window_g2_ParamLimits

0x9ca6,	// (0x00074502) popup_call3_audio_in_window_g2

0x9cbe,	// (0x0007451a) popup_call3_audio_in_window_g3_ParamLimits

0x9cbe,	// (0x0007451a) popup_call3_audio_in_window_g3

0x0003,

0xf622,	// (0x00079e7e) popup_call3_audio_in_window_g_ParamLimits

0xf622,	// (0x00079e7e) popup_call3_audio_in_window_g

0x9ce6,	// (0x00074542) popup_call3_audio_in_window_t1_ParamLimits

0x9ce6,	// (0x00074542) popup_call3_audio_in_window_t1

0x9d0e,	// (0x0007456a) popup_call3_audio_in_window_t2_ParamLimits

0x9d0e,	// (0x0007456a) popup_call3_audio_in_window_t2

0x9d36,	// (0x00074592) popup_call3_audio_in_window_t3_ParamLimits

0x9d36,	// (0x00074592) popup_call3_audio_in_window_t3

0x0002,

0xf62b,	// (0x00079e87) popup_call3_audio_in_window_t_ParamLimits

0xf62b,	// (0x00079e87) popup_call3_audio_in_window_t

0x34cf,	// (0x0006dd2b) bg_popup_call3_rect_pane

0x4727,	// (0x0006ef83) bg_popup_call3_rect_pane_g1

0x1e67,	// (0x0006c6c3) bg_popup_call3_rect_pane_g2

0x472f,	// (0x0006ef8b) bg_popup_call3_rect_pane_g3

0x4737,	// (0x0006ef93) bg_popup_call3_rect_pane_g4

0x473f,	// (0x0006ef9b) bg_popup_call3_rect_pane_g5

0x4747,	// (0x0006efa3) bg_popup_call3_rect_pane_g6

0x474f,	// (0x0006efab) bg_popup_call3_rect_pane_g7

0x8fb9,	// (0x00073815) mup_visualizer_osc_pane

0x359c,	// (0x0006ddf8) mup_visualizer_spec_pane

0x9c50,	// (0x000744ac) call3_video_qcif_pane_ParamLimits

0x9c50,	// (0x000744ac) call3_video_qcif_pane

0x9c60,	// (0x000744bc) call3_video_qcif_uncrop_pane_ParamLimits

0x9c60,	// (0x000744bc) call3_video_qcif_uncrop_pane

0x9c6c,	// (0x000744c8) call3_video_subqcif_pane_ParamLimits

0x9c6c,	// (0x000744c8) call3_video_subqcif_pane

0x9c7e,	// (0x000744da) call3_video_subqcif_uncrop_pane_ParamLimits

0x9c7e,	// (0x000744da) call3_video_subqcif_uncrop_pane

0x9cd6,	// (0x00074532) popup_call3_audio_in_window_g4_ParamLimits

0x9cd6,	// (0x00074532) popup_call3_audio_in_window_g4

0x9bfb,	// (0x00074457) mup_spec_half_pane

0x9c04,	// (0x00074460) mup_spec_half_pane_cp

0x4988,	// (0x0006f1e4) mup_osc_middle_pane

0x4991,	// (0x0006f1ed) mup_visualizer_osc_pane_g1

0x9bdc,	// (0x00074438) mup_spec_bar_pane_ParamLimits

0x9bdc,	// (0x00074438) mup_spec_bar_pane

0x4975,	// (0x0006f1d1) mup_spec_bar_pane_g1

0x497f,	// (0x0006f1db) mup_spec_bar_pane_g2

0x0001,

0xf616,	// (0x00079e72) mup_spec_bar_pane_g

0x71c2,	// (0x00071a1e) aid_cale_week_size_cell_pane_ParamLimits

0x71d5,	// (0x00071a31) bg_cale_heading_pane_ParamLimits

0x1e9b,	// (0x0006c6f7) bg_cale_pane_cp01_ParamLimits

0x71f1,	// (0x00071a4d) cale_week_corner_pane_ParamLimits

0x7202,	// (0x00071a5e) cale_week_day_heading_pane_ParamLimits

0x721e,	// (0x00071a7a) cale_week_scroll_pane_g1_ParamLimits

0x7237,	// (0x00071a93) cale_week_scroll_pane_g2_ParamLimits

0x7248,	// (0x00071aa4) cale_week_scroll_pane_g3_ParamLimits

0x7259,	// (0x00071ab5) cale_week_scroll_pane_g4_ParamLimits

0x726a,	// (0x00071ac6) cale_week_scroll_pane_g5_ParamLimits

0x727b,	// (0x00071ad7) cale_week_scroll_pane_g6_ParamLimits

0x728c,	// (0x00071ae8) cale_week_scroll_pane_g7_ParamLimits

0x729f,	// (0x00071afb) cale_week_scroll_pane_g8_ParamLimits

0x72b2,	// (0x00071b0e) cale_week_scroll_pane_g9_ParamLimits

0x72c3,	// (0x00071b1f) cale_week_scroll_pane_g10_ParamLimits

0x72d4,	// (0x00071b30) cale_week_scroll_pane_g11_ParamLimits

0x72e5,	// (0x00071b41) cale_week_scroll_pane_g12_ParamLimits

0x72fe,	// (0x00071b5a) cale_week_scroll_pane_g13_ParamLimits

0x7317,	// (0x00071b73) cale_week_scroll_pane_g14_ParamLimits

0x7330,	// (0x00071b8c) cale_week_scroll_pane_g15_ParamLimits

0xf1be,	// (0x00079a1a) cale_week_scroll_pane_g_ParamLimits

0x7349,	// (0x00071ba5) cale_week_time_pane_ParamLimits

0x735c,	// (0x00071bb8) grid_cale_week_pane_ParamLimits

0x1eb4,	// (0x0006c710) listscroll_cale_week_pane_t1

0x7379,	// (0x00071bd5) scroll_pane_cp08_ParamLimits

0x7efe,	// (0x0007275a) cale_month_corner_pane_ParamLimits

0x2dd2,	// (0x0006d62e) cale_month_pane_t1

0x8274,	// (0x00072ad0) cale_month_week_pane_ParamLimits

0x358e,	// (0x0006ddea) popup_call_status_window_g1_ParamLimits

0x8983,	// (0x000731df) popup_call_status_window_g2_ParamLimits

0x898f,	// (0x000731eb) popup_call_status_window_g3_ParamLimits

0xf366,	// (0x00079bc2) popup_call_status_window_g_ParamLimits

0x324a,	// (0x0006daa6) aid_call2_pane

0x5a53,	// (0x000702af) msg_header_pane_g1

0x9332,	// (0x00073b8e) postcard_address2_pane_ParamLimits

0x9332,	// (0x00073b8e) postcard_address2_pane

0x933e,	// (0x00073b9a) postcard_message2_pane_ParamLimits

0x933e,	// (0x00073b9a) postcard_message2_pane

0x9b6a,	// (0x000743c6) message2_row_pane_ParamLimits

0x9b6a,	// (0x000743c6) message2_row_pane

0x9b87,	// (0x000743e3) address2_row_pane_ParamLimits

0x9b87,	// (0x000743e3) address2_row_pane

0x4943,	// (0x0006f19f) postcard_message2_row_pane_g1

0x494b,	// (0x0006f1a7) postcard_message2_row_pane_t1

0x4943,	// (0x0006f19f) address2_row_pane_g1

0x494b,	// (0x0006f1a7) address2_row_pane_t1

0x7595,	// (0x00071df1) aid_size_cell_vorec

0x1a02,	// (0x0006c25e) main_rss_pane

0x9b9a,	// (0x000743f6) rss_list_single_pane_ParamLimits

0x9b9a,	// (0x000743f6) rss_list_single_pane

0x4959,	// (0x0006f1b5) rss_list_single_pane_t1

0x4967,	// (0x0006f1c3) rss_list_single_pane_t2

0x0001,

0xf611,	// (0x00079e6d) rss_list_single_pane_t

0x1a02,	// (0x0006c25e) main_camera2_pane

0x1a02,	// (0x0006c25e) main_video2_pane

0x9dd2,	// (0x0007462e) cams_zoom_pane_cp2_ParamLimits

0x9dd2,	// (0x0007462e) cams_zoom_pane_cp2

0x9dde,	// (0x0007463a) image2_vga_pane_ParamLimits

0x9dde,	// (0x0007463a) image2_vga_pane

0x9ded,	// (0x00074649) main_camera2_pane_g1_ParamLimits

0x9ded,	// (0x00074649) main_camera2_pane_g1

0x9df9,	// (0x00074655) main_camera2_pane_g2_ParamLimits

0x9df9,	// (0x00074655) main_camera2_pane_g2

0x9e05,	// (0x00074661) main_camera2_pane_g3_ParamLimits

0x9e05,	// (0x00074661) main_camera2_pane_g3

0x9e11,	// (0x0007466d) main_camera2_pane_g4_ParamLimits

0x9e11,	// (0x0007466d) main_camera2_pane_g4

0x9e1d,	// (0x00074679) main_camera2_pane_g5_ParamLimits

0x9e1d,	// (0x00074679) main_camera2_pane_g5

0x9e29,	// (0x00074685) main_camera2_pane_g6_ParamLimits

0x9e29,	// (0x00074685) main_camera2_pane_g6

0x9e35,	// (0x00074691) main_camera2_pane_g7_ParamLimits

0x9e35,	// (0x00074691) main_camera2_pane_g7

0x9e41,	// (0x0007469d) main_camera2_pane_g8_ParamLimits

0x9e41,	// (0x0007469d) main_camera2_pane_g8

0x0008,

0xf632,	// (0x00079e8e) main_camera2_pane_g_ParamLimits

0xf632,	// (0x00079e8e) main_camera2_pane_g

0x9e59,	// (0x000746b5) main_camera2_pane_t1_ParamLimits

0x9e59,	// (0x000746b5) main_camera2_pane_t1

0x9e6b,	// (0x000746c7) main_camera2_pane_t2_ParamLimits

0x9e6b,	// (0x000746c7) main_camera2_pane_t2

0x9e7d,	// (0x000746d9) main_camera2_pane_t3_ParamLimits

0x9e7d,	// (0x000746d9) main_camera2_pane_t3

0x9e8f,	// (0x000746eb) main_camera2_pane_t4_ParamLimits

0x9e8f,	// (0x000746eb) main_camera2_pane_t4

0x0006,

0xf645,	// (0x00079ea1) main_camera2_pane_t_ParamLimits

0xf645,	// (0x00079ea1) main_camera2_pane_t

0x9ef1,	// (0x0007474d) cams_zoom_pane_cp4_ParamLimits

0x9ef1,	// (0x0007474d) cams_zoom_pane_cp4

0x9f01,	// (0x0007475d) image2_cif_pane_ParamLimits

0x9f01,	// (0x0007475d) image2_cif_pane

0x9f16,	// (0x00074772) image2_subqcif_pane_ParamLimits

0x9f16,	// (0x00074772) image2_subqcif_pane

0x9f25,	// (0x00074781) main_video2_pane_g1_ParamLimits

0x9f25,	// (0x00074781) main_video2_pane_g1

0x9f37,	// (0x00074793) main_video2_pane_g2_ParamLimits

0x9f37,	// (0x00074793) main_video2_pane_g2

0x9f47,	// (0x000747a3) main_video2_pane_g3_ParamLimits

0x9f47,	// (0x000747a3) main_video2_pane_g3

0x9f57,	// (0x000747b3) main_video2_pane_g4_ParamLimits

0x9f57,	// (0x000747b3) main_video2_pane_g4

0x9f67,	// (0x000747c3) main_video2_pane_g5_ParamLimits

0x9f67,	// (0x000747c3) main_video2_pane_g5

0x9f77,	// (0x000747d3) main_video2_pane_g6_ParamLimits

0x9f77,	// (0x000747d3) main_video2_pane_g6

0x0005,

0xf654,	// (0x00079eb0) main_video2_pane_g_ParamLimits

0xf654,	// (0x00079eb0) main_video2_pane_g

0x9f89,	// (0x000747e5) main_video2_pane_t1_ParamLimits

0x9f89,	// (0x000747e5) main_video2_pane_t1

0x9fa3,	// (0x000747ff) main_video2_pane_t2_ParamLimits

0x9fa3,	// (0x000747ff) main_video2_pane_t2

0x9fc9,	// (0x00074825) main_video2_pane_t3_ParamLimits

0x9fc9,	// (0x00074825) main_video2_pane_t3

0x0002,

0xf661,	// (0x00079ebd) main_video2_pane_t_ParamLimits

0xf661,	// (0x00079ebd) main_video2_pane_t

0x989b,	// (0x000740f7) call_muted_g2

0x0001,

0xf603,	// (0x00079e5f) call_muted_g

0x1a02,	// (0x0006c25e) main_mup2_pane

0xe50d,	// (0x00078d69) main_mup2_pane_g1_ParamLimits

0xe50d,	// (0x00078d69) main_mup2_pane_g1

0x9fef,	// (0x0007484b) main_mup2_pane_g2_ParamLimits

0x9fef,	// (0x0007484b) main_mup2_pane_g2

0xa271,	// (0x00074acd) main_mup_pane_g13_cp1

0xa279,	// (0x00074ad5) mup_volume_pane_cp1

0xa00f,	// (0x0007486b) main_mup2_pane_g4_ParamLimits

0xa00f,	// (0x0007486b) main_mup2_pane_g4

0xa024,	// (0x00074880) main_mup2_pane_g5_ParamLimits

0xa024,	// (0x00074880) main_mup2_pane_g5

0xa039,	// (0x00074895) main_mup2_pane_g6_ParamLimits

0xa039,	// (0x00074895) main_mup2_pane_g6

0xa04e,	// (0x000748aa) main_mup2_pane_g7_ParamLimits

0xa04e,	// (0x000748aa) main_mup2_pane_g7

0x0006,

0xf668,	// (0x00079ec4) main_mup2_pane_g_ParamLimits

0xf668,	// (0x00079ec4) main_mup2_pane_g

0xa06a,	// (0x000748c6) main_mup2_pane_t1_ParamLimits

0xa06a,	// (0x000748c6) main_mup2_pane_t1

0xa081,	// (0x000748dd) main_mup2_pane_t2_ParamLimits

0xa081,	// (0x000748dd) main_mup2_pane_t2

0xa098,	// (0x000748f4) main_mup2_pane_t3_ParamLimits

0xa098,	// (0x000748f4) main_mup2_pane_t3

0xa0af,	// (0x0007490b) main_mup2_pane_t4_ParamLimits

0xa0af,	// (0x0007490b) main_mup2_pane_t4

0xa0c9,	// (0x00074925) main_mup2_pane_t5_ParamLimits

0xa0c9,	// (0x00074925) main_mup2_pane_t5

0xa0e3,	// (0x0007493f) main_mup2_pane_t6_ParamLimits

0xa0e3,	// (0x0007493f) main_mup2_pane_t6

0x0005,

0xf677,	// (0x00079ed3) main_mup2_pane_t_ParamLimits

0xf677,	// (0x00079ed3) main_mup2_pane_t

0xa11b,	// (0x00074977) mup2_visualizer_pane_ParamLimits

0xa11b,	// (0x00074977) mup2_visualizer_pane

0xa151,	// (0x000749ad) mup_progress_pane_cp_ParamLimits

0xa151,	// (0x000749ad) mup_progress_pane_cp

0xa25c,	// (0x00074ab8) mup_volume_pane_cp_ParamLimits

0xa25c,	// (0x00074ab8) mup_volume_pane_cp

0xa168,	// (0x000749c4) mup2_visualizer_pane_g1_ParamLimits

0xa168,	// (0x000749c4) mup2_visualizer_pane_g1

0xe519,	// (0x00078d75) mup2_visualizer_pane_g2_ParamLimits

0xe519,	// (0x00078d75) mup2_visualizer_pane_g2

0xa17d,	// (0x000749d9) mup2_visualizer_pane_g3_ParamLimits

0xa17d,	// (0x000749d9) mup2_visualizer_pane_g3

0x0002,

0xf684,	// (0x00079ee0) mup2_visualizer_pane_g_ParamLimits

0xf684,	// (0x00079ee0) mup2_visualizer_pane_g

0x37f9,	// (0x0006e055) aid_size_cell_fmradio

0x99b1,	// (0x0007420d) aid_height_parent_landcape

0x2c3a,	// (0x0006d496) wml_content_pane_cp

0x2c42,	// (0x0006d49e) wml_tabs_pane

0x2c4b,	// (0x0006d4a7) popup_wml_miniature_window

0x2c53,	// (0x0006d4af) scroll_pane_cp021

0x2c67,	// (0x0006d4c3) wml_content_pane_comp8

0x1a02,	// (0x0006c25e) bg_popup_sub_pane_cp05

0xe537,	// (0x00078d93) popup_wml_miniature_window_g1

0xe53f,	// (0x00078d9b) wml_miniature_view_pane

0xa18b,	// (0x000749e7) aid_size_wml_view

0xa193,	// (0x000749ef) wml_miniature_view_pane_g1

0xa19c,	// (0x000749f8) wml_miniature_view_pane_g2

0xa1a5,	// (0x00074a01) wml_miniature_view_pane_g3

0xa1ad,	// (0x00074a09) wml_miniature_view_pane_g4

0xa1b5,	// (0x00074a11) wml_miniature_view_pane_g5

0xa1bd,	// (0x00074a19) wml_miniature_view_pane_g6

0xa1c5,	// (0x00074a21) wml_miniature_view_pane_g7

0xa1cd,	// (0x00074a29) wml_miniature_view_pane_g8

0x0007,

0xf68b,	// (0x00079ee7) wml_miniature_view_pane_g

0xe50d,	// (0x00078d69) background_graphic_ParamLimits

0xe50d,	// (0x00078d69) background_graphic

0xe547,	// (0x00078da3) wml_tabs_2_pane

0xe550,	// (0x00078dac) wml_tabs_3_pane_ParamLimits

0xe550,	// (0x00078dac) wml_tabs_3_pane

0xe562,	// (0x00078dbe) wml_tabs_4_pane_ParamLimits

0xe562,	// (0x00078dbe) wml_tabs_4_pane

0xe578,	// (0x00078dd4) wml_tabs_5_pane_ParamLimits

0xe578,	// (0x00078dd4) wml_tabs_5_pane

0xe592,	// (0x00078dee) wml_tabs_pane_g2_ParamLimits

0xe592,	// (0x00078dee) wml_tabs_pane_g2

0xe5a6,	// (0x00078e02) wml_tabs_pane_g3_ParamLimits

0xe5a6,	// (0x00078e02) wml_tabs_pane_g3

0xa1d5,	// (0x00074a31) wml_tabs_2_active_pane_ParamLimits

0xa1d5,	// (0x00074a31) wml_tabs_2_active_pane

0xa1e5,	// (0x00074a41) wml_tabs_2_passive_pane_ParamLimits

0xa1e5,	// (0x00074a41) wml_tabs_2_passive_pane

0xa1f5,	// (0x00074a51) wml_tabs_3_active_pane_cp_ParamLimits

0xa1f5,	// (0x00074a51) wml_tabs_3_active_pane_cp

0xa206,	// (0x00074a62) wml_tabs_3_passive_pane_ParamLimits

0xa206,	// (0x00074a62) wml_tabs_3_passive_pane

0xa217,	// (0x00074a73) wml_tabs_3_passive_pane_cp_ParamLimits

0xa217,	// (0x00074a73) wml_tabs_3_passive_pane_cp

0xa228,	// (0x00074a84) tabs_4_active_pane

0xa230,	// (0x00074a8c) tabs_4_passive_pane

0xa238,	// (0x00074a94) tabs_4_passive_pane_cp

0xa240,	// (0x00074a9c) tabs_4_passive_pane_cp2

0x47af,	// (0x0006f00b) aid_height_text

0x8f82,	// (0x000737de) mup_volume_cont_pane_ParamLimits

0x8f82,	// (0x000737de) mup_volume_cont_pane

0x6cfe,	// (0x0007155a) aid_size_cell_pinb

0x1c8d,	// (0x0006c4e9) aid_size_list_pinb

0xa13a,	// (0x00074996) mup2_volume_cont_pane_ParamLimits

0xa13a,	// (0x00074996) mup2_volume_cont_pane

0xa248,	// (0x00074aa4) mup2_volume_cont_pane_g1_ParamLimits

0xa248,	// (0x00074aa4) mup2_volume_cont_pane_g1

0x6933,	// (0x0007118f) aid_size_cell_touch_ParamLimits

0x6933,	// (0x0007118f) aid_size_cell_touch

0x6bde,	// (0x0007143a) touch_pane_ParamLimits

0x6bde,	// (0x0007143a) touch_pane

0x15e7,	// (0x0006be43) main_rss2_pane

0xe5c3,	// (0x00078e1f) listscroll_rss2_pane

0xe5cc,	// (0x00078e28) rss2_navigation_pane

0xe5d4,	// (0x00078e30) list_rss2_pane

0x3382,	// (0x0006dbde) scroll_pane_cp22

0xe5dc,	// (0x00078e38) rss2_navigation_pane_g1

0xe5e5,	// (0x00078e41) rss2_navigation_pane_g2

0xe5ed,	// (0x00078e49) rss2_navigation_pane_g3

0x0002,

0xf69c,	// (0x00079ef8) rss2_navigation_pane_g

0xe5f5,	// (0x00078e51) rss2_navigation_pane_t1

0xa281,	// (0x00074add) rss2_list_single_pane_ParamLimits

0xa281,	// (0x00074add) rss2_list_single_pane

0xe603,	// (0x00078e5f) rss2_list_single_pane_t2

0xe611,	// (0x00078e6d) rss2_list_single_pane_t3_ParamLimits

0xe611,	// (0x00078e6d) rss2_list_single_pane_t3

0xe62e,	// (0x00078e8a) rss2_list_single_pane_t4

0x8734,	// (0x00072f90) smil_status_pane_g1

0x1f8f,	// (0x0006c7eb) main_image2_pane_ParamLimits

0x1f8f,	// (0x0006c7eb) main_image2_pane

0x9e4d,	// (0x000746a9) main_camera2_pane_g9_ParamLimits

0x9e4d,	// (0x000746a9) main_camera2_pane_g9

0x9ea1,	// (0x000746fd) main_camera2_pane_t5_ParamLimits

0x9ea1,	// (0x000746fd) main_camera2_pane_t5

0x9eb3,	// (0x0007470f) main_camera2_pane_t6_ParamLimits

0x9eb3,	// (0x0007470f) main_camera2_pane_t6

0xa2bd,	// (0x00074b19) main_image2_pane_g1_ParamLimits

0xa2bd,	// (0x00074b19) main_image2_pane_g1

0x9513,	// (0x00073d6f) smil2_video_pane_ParamLimits

0x9513,	// (0x00073d6f) smil2_video_pane

0x57ca,	// (0x00070026) aid_zoom_text_primary_cp

0x6b83,	// (0x000713df) popup_preview_fixed_window

0x2ba3,	// (0x0006d3ff) im_reading_pane_g1

0x9d97,	// (0x000745f3) cams2_bc_adjust_pane_cp_ParamLimits

0x9d97,	// (0x000745f3) cams2_bc_adjust_pane_cp

0x9ee3,	// (0x0007473f) cams2_bc_adjust_pane_ParamLimits

0x9ee3,	// (0x0007473f) cams2_bc_adjust_pane

0xa2c9,	// (0x00074b25) cams2_bc_adjust_pane_g1

0xa2d1,	// (0x00074b2d) cams2_slider_pane

0xa2da,	// (0x00074b36) cams2_slider_pane_g1

0xa2e3,	// (0x00074b3f) cams2_slider_pane_g2

0x0006,

0xf6a3,	// (0x00079eff) cams2_slider_pane_g

0x6ddd,	// (0x00071639) calc_display_pane_ParamLimits

0x6dfb,	// (0x00071657) calc_paper_pane_ParamLimits

0x6e17,	// (0x00071673) grid_calc_pane_ParamLimits

0x89ed,	// (0x00073249) popup_clock_digital_window_t1_ParamLimits

0x3796,	// (0x0006dff2) main_image_pane_t1

0x6dc3,	// (0x0007161f) aid_size_cell_calc_ParamLimits

0x6dc3,	// (0x0007161f) aid_size_cell_calc

0x99eb,	// (0x00074247) popup_blid_sat_info2_window_ParamLimits

0x99eb,	// (0x00074247) popup_blid_sat_info2_window

0xe644,	// (0x00078ea0) aid_size_cell_blid

0xe64c,	// (0x00078ea8) bg_popup_window_pane_cp07

0xe66f,	// (0x00078ecb) grid_popup_blid_pane

0xe679,	// (0x00078ed5) heading_pane_cp05_ParamLimits

0xe679,	// (0x00078ed5) heading_pane_cp05

0xe743,	// (0x00078f9f) cell_popup_blid_pane_ParamLimits

0xe743,	// (0x00078f9f) cell_popup_blid_pane

0xe769,	// (0x00078fc5) cell_popup_blid_pane_g1

0xe771,	// (0x00078fcd) cell_popup_blid_pane_t1

0xa100,	// (0x0007495c) mup2_indicator_pane_ParamLimits

0xa100,	// (0x0007495c) mup2_indicator_pane

0x34cf,	// (0x0006dd2b) mup2_visualizer_osc_pane

0xe525,	// (0x00078d81) mup2_visualizer_spec_pane_ParamLimits

0xe525,	// (0x00078d81) mup2_visualizer_spec_pane

0xa2fd,	// (0x00074b59) mup2_spec_half_pane

0xa306,	// (0x00074b62) mup2_spec_half_pane_cp

0xa310,	// (0x00074b6c) mup2_spec_bar_pane_ParamLimits

0xa310,	// (0x00074b6c) mup2_spec_bar_pane

0x4975,	// (0x0006f1d1) mup2_spec_bar_pane_g1

0x497f,	// (0x0006f1db) mup2_spec_bar_pane_g2

0x0001,

0xf616,	// (0x00079e72) mup2_spec_bar_pane_g

0xa32f,	// (0x00074b8b) mup2_osc_middle_pane

0x4991,	// (0x0006f1ed) mup2_visualizer_osc_pane_g1

0x1611,	// (0x0006be6d) popup_number_entry_window_t1_ParamLimits

0x1624,	// (0x0006be80) popup_number_entry_window_t2_ParamLimits

0x1636,	// (0x0006be92) popup_number_entry_window_t3_ParamLimits

0x6c35,	// (0x00071491) popup_number_entry_window_t5_ParamLimits

0x6c35,	// (0x00071491) popup_number_entry_window_t5

0xf0d8,	// (0x00079934) popup_number_entry_window_t_ParamLimits

0x1648,	// (0x0006bea4) text_title_cp2_ParamLimits

0x91fa,	// (0x00073a56) aid_hotspot_pointer_text2_pane

0x9294,	// (0x00073af0) main_viewer_pane_g9_ParamLimits

0x9294,	// (0x00073af0) main_viewer_pane_g9

0x2dd2,	// (0x0006d62e) cale_month_pane_t1_ParamLimits

0x2e39,	// (0x0006d695) bg_cale_pane_ParamLimits

0x2e51,	// (0x0006d6ad) list_cale_pane_ParamLimits

0x1eb4,	// (0x0006c710) listscroll_cale_day_pane_t1

0x2e62,	// (0x0006d6be) scroll_pane_cp09_ParamLimits

0x8fc1,	// (0x0007381d) main_mup_eq_pane_t1_ParamLimits

0x8fc1,	// (0x0007381d) main_mup_eq_pane_t1

0x8fdb,	// (0x00073837) main_mup_eq_pane_t2_ParamLimits

0x8fdb,	// (0x00073837) main_mup_eq_pane_t2

0x8ff3,	// (0x0007384f) main_mup_eq_pane_t3_ParamLimits

0x8ff3,	// (0x0007384f) main_mup_eq_pane_t3

0x900b,	// (0x00073867) main_mup_eq_pane_t4_ParamLimits

0x900b,	// (0x00073867) main_mup_eq_pane_t4

0x9023,	// (0x0007387f) main_mup_eq_pane_t5_ParamLimits

0x9023,	// (0x0007387f) main_mup_eq_pane_t5

0x903b,	// (0x00073897) main_mup_eq_pane_t6_ParamLimits

0x903b,	// (0x00073897) main_mup_eq_pane_t6

0x904f,	// (0x000738ab) main_mup_eq_pane_t7_ParamLimits

0x904f,	// (0x000738ab) main_mup_eq_pane_t7

0x9063,	// (0x000738bf) main_mup_eq_pane_t8_ParamLimits

0x9063,	// (0x000738bf) main_mup_eq_pane_t8

0x9079,	// (0x000738d5) main_mup_eq_pane_t9_ParamLimits

0x9079,	// (0x000738d5) main_mup_eq_pane_t9

0x9091,	// (0x000738ed) main_mup_eq_pane_t10_ParamLimits

0x9091,	// (0x000738ed) main_mup_eq_pane_t10

0x0009,

0xf465,	// (0x00079cc1) main_mup_eq_pane_t_ParamLimits

0xf465,	// (0x00079cc1) main_mup_eq_pane_t

0x914e,	// (0x000739aa) mup_equalizer_pane_cp5_ParamLimits

0x9164,	// (0x000739c0) mup_equalizer_pane_cp6_ParamLimits

0x917c,	// (0x000739d8) mup_equalizer_pane_cp7_ParamLimits

0x15e7,	// (0x0006be43) main_gallery_pane

0x499a,	// (0x0006f1f6) smil2_volume_pane

0x49b5,	// (0x0006f211) smil_status_volume_pane_g1_ParamLimits

0x49a2,	// (0x0006f1fe) smil_status_volume_pane_g2_ParamLimits

0x9c0e,	// (0x0007446a) smil_status_volume_pane_g3_ParamLimits

0xf61b,	// (0x00079e77) smil_status_volume_pane_g_ParamLimits

0xe64c,	// (0x00078ea8) bg_popup_window_pane_cp07_ParamLimits

0xe65a,	// (0x00078eb6) blid_firmament_pane

0xa338,	// (0x00074b94) aid_size_cell_gallery_ParamLimits

0xa338,	// (0x00074b94) aid_size_cell_gallery

0xa346,	// (0x00074ba2) grid_gallery_pane_ParamLimits

0xa346,	// (0x00074ba2) grid_gallery_pane

0xa356,	// (0x00074bb2) cell_gallery_pane_ParamLimits

0xa356,	// (0x00074bb2) cell_gallery_pane

0xe77f,	// (0x00078fdb) bg_cell_gallery_focus_pane_ParamLimits

0xe77f,	// (0x00078fdb) bg_cell_gallery_focus_pane

0xe791,	// (0x00078fed) cell_gallery_pane_g1_ParamLimits

0xe791,	// (0x00078fed) cell_gallery_pane_g1

0xa3a4,	// (0x00074c00) cell_gallery_pane_g2_ParamLimits

0xa3a4,	// (0x00074c00) cell_gallery_pane_g2

0xa3b1,	// (0x00074c0d) cell_gallery_pane_g3_ParamLimits

0xa3b1,	// (0x00074c0d) cell_gallery_pane_g3

0xe79d,	// (0x00078ff9) cell_gallery_pane_g4_ParamLimits

0xe79d,	// (0x00078ff9) cell_gallery_pane_g4

0x0003,

0xf6c9,	// (0x00079f25) cell_gallery_pane_g_ParamLimits

0xf6c9,	// (0x00079f25) cell_gallery_pane_g

0xe7a9,	// (0x00079005) bg_cell_gallery_focus_pane_g1

0xe7b1,	// (0x0007900d) bg_cell_gallery_focus_pane_g2

0xe7b9,	// (0x00079015) bg_cell_gallery_focus_pane_g3

0xe7c1,	// (0x0007901d) bg_cell_gallery_focus_pane_g4

0xe7c9,	// (0x00079025) bg_cell_gallery_focus_pane_g5

0xe7d1,	// (0x0007902d) bg_cell_gallery_focus_pane_g6

0xe7d9,	// (0x00079035) bg_cell_gallery_focus_pane_g7

0xe7e1,	// (0x0007903d) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6d2,	// (0x00079f2e) bg_cell_gallery_focus_pane_g

0xe7e9,	// (0x00079045) aid_firma_cardinal

0xe7fd,	// (0x00079059) blid_firmament_pane_t1

0xe814,	// (0x00079070) blid_firmament_pane_t2

0xe82b,	// (0x00079087) blid_firmament_pane_t3

0xe842,	// (0x0007909e) blid_firmament_pane_t4

0x0003,

0xf6e3,	// (0x00079f3f) blid_firmament_pane_t

0xe859,	// (0x000790b5) blid_sat_info_pane

0xe869,	// (0x000790c5) blid_sat_info_pane_g1

0xe869,	// (0x000790c5) blid_sat_info_pane_g2

0x0001,

0xf6ec,	// (0x00079f48) blid_sat_info_pane_g

0xe873,	// (0x000790cf) blid_sat_info_pane_t1

0xe881,	// (0x000790dd) smil2_volume_content_pane

0xe88a,	// (0x000790e6) smil2_volume_pane_g1

0xe892,	// (0x000790ee) smil2_volume_content_pane_g1

0xe89b,	// (0x000790f7) smil2_volume_content_pane_g2

0xe8a4,	// (0x00079100) smil2_volume_content_pane_g3

0xe8ad,	// (0x00079109) smil2_volume_content_pane_g4

0xe8b6,	// (0x00079112) smil2_volume_content_pane_g5

0xe8bf,	// (0x0007911b) smil2_volume_content_pane_g6

0xe8c8,	// (0x00079124) smil2_volume_content_pane_g7

0xe8d1,	// (0x0007912d) smil2_volume_content_pane_g8

0xe8da,	// (0x00079136) smil2_volume_content_pane_g9

0xe8e3,	// (0x0007913f) smil2_volume_content_pane_g10

0x0009,

0xf6f1,	// (0x00079f4d) smil2_volume_content_pane_g

0x73e3,	// (0x00071c3f) cale_week_day_heading_pane_t1_ParamLimits

0x73f7,	// (0x00071c53) cale_week_day_heading_pane_t2_ParamLimits

0x740b,	// (0x00071c67) cale_week_day_heading_pane_t3_ParamLimits

0x741f,	// (0x00071c7b) cale_week_day_heading_pane_t4_ParamLimits

0x7433,	// (0x00071c8f) cale_week_day_heading_pane_t5_ParamLimits

0x7447,	// (0x00071ca3) cale_week_day_heading_pane_t6_ParamLimits

0x745b,	// (0x00071cb7) cale_week_day_heading_pane_t7_ParamLimits

0xf1dd,	// (0x00079a39) cale_week_day_heading_pane_t_ParamLimits

0x1ec6,	// (0x0006c722) bg_cale_side_pane_ParamLimits

0x746f,	// (0x00071ccb) cale_week_time_pane_t1_ParamLimits

0x7487,	// (0x00071ce3) cale_week_time_pane_t2_ParamLimits

0x749f,	// (0x00071cfb) cale_week_time_pane_t3_ParamLimits

0x74b7,	// (0x00071d13) cale_week_time_pane_t4_ParamLimits

0x74cf,	// (0x00071d2b) cale_week_time_pane_t5_ParamLimits

0x74e7,	// (0x00071d43) cale_week_time_pane_t6_ParamLimits

0x7507,	// (0x00071d63) cale_week_time_pane_t7_ParamLimits

0x7527,	// (0x00071d83) cale_week_time_pane_t8_ParamLimits

0xf1ec,	// (0x00079a48) cale_week_time_pane_t_ParamLimits

0x7547,	// (0x00071da3) cell_cale_week_pane_g2_ParamLimits

0x1ec6,	// (0x0006c722) bg_cale_side_pane_cp01_ParamLimits

0x8599,	// (0x00072df5) cale_month_week_pane_t1_ParamLimits

0x85b0,	// (0x00072e0c) cale_month_week_pane_t2_ParamLimits

0x85c7,	// (0x00072e23) cale_month_week_pane_t3_ParamLimits

0x85de,	// (0x00072e3a) cale_month_week_pane_t4_ParamLimits

0x85f5,	// (0x00072e51) cale_month_week_pane_t5_ParamLimits

0x8614,	// (0x00072e70) cale_month_week_pane_t6_ParamLimits

0xf2c5,	// (0x00079b21) cale_month_week_pane_t_ParamLimits

0x8701,	// (0x00072f5d) cell_cale_month_pane_g1_ParamLimits

0x15e7,	// (0x0006be43) main_cale_event_viewer_pane

0x15e7,	// (0x0006be43) listscroll_cale_event_viewer_pane

0xe8ec,	// (0x00079148) list_cale_ev_pane

0xe8f4,	// (0x00079150) scroll_pane_cp023

0xe900,	// (0x0007915c) field_cale_ev_pane_ParamLimits

0xe900,	// (0x0007915c) field_cale_ev_pane

0xe91a,	// (0x00079176) field_cale_ev_content_pane_ParamLimits

0xe91a,	// (0x00079176) field_cale_ev_content_pane

0xe926,	// (0x00079182) field_cale_ev_pane_g1_ParamLimits

0xe926,	// (0x00079182) field_cale_ev_pane_g1

0xe932,	// (0x0007918e) field_cale_ev_pane_g2_ParamLimits

0xe932,	// (0x0007918e) field_cale_ev_pane_g2

0xe94a,	// (0x000791a6) field_cale_ev_pane_g3_ParamLimits

0xe94a,	// (0x000791a6) field_cale_ev_pane_g3

0x0002,

0xf706,	// (0x00079f62) field_cale_ev_pane_g_ParamLimits

0xf706,	// (0x00079f62) field_cale_ev_pane_g

0xe962,	// (0x000791be) field_cale_ev_pane_t1_ParamLimits

0xe962,	// (0x000791be) field_cale_ev_pane_t1

0xe979,	// (0x000791d5) field_cale_ev_content_pane_t1_ParamLimits

0xe979,	// (0x000791d5) field_cale_ev_content_pane_t1

0x3646,	// (0x0006dea2) bg_button_pane_cp01

0x1d74,	// (0x0006c5d0) listscroll_cale_week_pane_ParamLimits

0x71b8,	// (0x00071a14) popup_toolbar_window_cp01

0x1eb4,	// (0x0006c710) listscroll_cale_week_pane_t1_ParamLimits

0x1d74,	// (0x0006c5d0) listscroll_cale_day_pane_ParamLimits

0x71b8,	// (0x00071a14) popup_toolbar_window_cp02

0x1eb4,	// (0x0006c710) listscroll_cale_day_pane_t1_ParamLimits

0x1d74,	// (0x0006c5d0) main_cale_month_pane_ParamLimits

0x9ae6,	// (0x00074342) popup_toolbar_window_cp03_ParamLimits

0x9ae6,	// (0x00074342) popup_toolbar_window_cp03

0x9425,	// (0x00073c81) main_image_pane_g2_ParamLimits

0x9425,	// (0x00073c81) main_image_pane_g2

0x9431,	// (0x00073c8d) main_image_pane_g3_ParamLimits

0x9431,	// (0x00073c8d) main_image_pane_g3

0x0002,

0xf4f7,	// (0x00079d53) main_image_pane_g_ParamLimits

0xf4f7,	// (0x00079d53) main_image_pane_g

0x3796,	// (0x0006dff2) main_image_pane_t1_ParamLimits

0x943d,	// (0x00073c99) main_image_pane_t2_ParamLimits

0x943d,	// (0x00073c99) main_image_pane_t2

0x944f,	// (0x00073cab) main_image_pane_t3_ParamLimits

0x944f,	// (0x00073cab) main_image_pane_t3

0x9461,	// (0x00073cbd) main_image_pane_t4_ParamLimits

0x9461,	// (0x00073cbd) main_image_pane_t4

0x0003,

0xf4fe,	// (0x00079d5a) main_image_pane_t_ParamLimits

0xf4fe,	// (0x00079d5a) main_image_pane_t

0x9473,	// (0x00073ccf) popup_image_details_window_cp01

0x947d,	// (0x00073cd9) popup_toobar_trans_pane_cp01_ParamLimits

0x947d,	// (0x00073cd9) popup_toobar_trans_pane_cp01

0x9a3e,	// (0x0007429a) popup_image_details_window_ParamLimits

0x9a3e,	// (0x0007429a) popup_image_details_window

0x9a4c,	// (0x000742a8) popup_image_focus_window

0x9d89,	// (0x000745e5) camera2_autofocus_pane_ParamLimits

0x9d89,	// (0x000745e5) camera2_autofocus_pane

0x15e7,	// (0x0006be43) bg_popup_sub_pane_cp06

0xe996,	// (0x000791f2) popup_image_focus_window_g1

0xe99e,	// (0x000791fa) popup_image_focus_window_g2

0xe9a6,	// (0x00079202) popup_image_focus_window_g3

0xe9ae,	// (0x0007920a) popup_image_focus_window_g4

0x0003,

0xf70d,	// (0x00079f69) popup_image_focus_window_g

0xe9dd,	// (0x00079239) popup_image_focus_window_t1

0xe9eb,	// (0x00079247) popup_image_focus_window_t2

0xea03,	// (0x0007925f) popup_image_focus_window_t3

0x0002,

0xf716,	// (0x00079f72) popup_image_focus_window_t

0xea11,	// (0x0007926d) camera2_autofocus_pane_g1

0x1f8f,	// (0x0006c7eb) bg_tb_trans_pane_cp01

0xea1f,	// (0x0007927b) popup_image_details_window_g1

0xea32,	// (0x0007928e) popup_image_details_window_g2

0x0002,

0xf728,	// (0x00079f84) popup_image_details_window_g

0xea5b,	// (0x000792b7) popup_image_details_window_t1

0xea6d,	// (0x000792c9) popup_image_details_window_t2

0xea86,	// (0x000792e2) popup_image_details_window_t3

0xea9a,	// (0x000792f6) popup_image_details_window_t4

0xeab5,	// (0x00079311) popup_image_details_window_t5

0x0004,

0xf72f,	// (0x00079f8b) popup_image_details_window_t

0x1d60,	// (0x0006c5bc) bg_calc_paper_pane_ParamLimits

0x15e7,	// (0x0006be43) grid_highlight_pane_cp013

0x6f14,	// (0x00071770) list_calc_pane_ParamLimits

0x6f26,	// (0x00071782) scroll_pane_cp024

0x1d74,	// (0x0006c5d0) bg_calc_display_pane_ParamLimits

0x6f2e,	// (0x0007178a) calc_display_pane_t1_ParamLimits

0x6f43,	// (0x0007179f) calc_display_pane_t2_ParamLimits

0x6f58,	// (0x000717b4) calc_display_pane_t3_ParamLimits

0xf15f,	// (0x000799bb) calc_display_pane_t_ParamLimits

0x703f,	// (0x0007189b) cell_calc_pane_g2

0x0001,

0xf17c,	// (0x000799d8) cell_calc_pane_g

0x7048,	// (0x000718a4) cell_calc_pane_t1

0x1dd3,	// (0x0006c62f) grid_highlight_pane_cp02_ParamLimits

0x1de9,	// (0x0006c645) toolbar_button_pane_cp01_ParamLimits

0x1de9,	// (0x0006c645) toolbar_button_pane_cp01

0x37db,	// (0x0006e037) temp_image_control_pane_ParamLimits

0x37db,	// (0x0006e037) temp_image_control_pane

0x1f8f,	// (0x0006c7eb) main_mp3_pane

0xeacf,	// (0x0007932b) temp_image_control_pane_g1_ParamLimits

0xeacf,	// (0x0007932b) temp_image_control_pane_g1

0xeadd,	// (0x00079339) temp_image_control_pane_g2_ParamLimits

0xeadd,	// (0x00079339) temp_image_control_pane_g2

0xeaef,	// (0x0007934b) temp_image_control_pane_g3_ParamLimits

0xeaef,	// (0x0007934b) temp_image_control_pane_g3

0xa3ee,	// (0x00074c4a) temp_image_control_pane_g4_ParamLimits

0xa3ee,	// (0x00074c4a) temp_image_control_pane_g4

0x0003,

0xf73a,	// (0x00079f96) temp_image_control_pane_g_ParamLimits

0xf73a,	// (0x00079f96) temp_image_control_pane_g

0xeacf,	// (0x0007932b) main_mp3_pane_g1

0xa3ff,	// (0x00074c5b) main_mp3_pane_g2

0x0007,

0xf743,	// (0x00079f9f) main_mp3_pane_g

0xeb32,	// (0x0007938e) main_mp3_pane_t1

0x1f35,	// (0x0006c791) main_camera_pane_g8_ParamLimits

0x1f35,	// (0x0006c791) main_camera_pane_g8

0x77d1,	// (0x0007202d) main_video_pane_g7_ParamLimits

0x77d1,	// (0x0007202d) main_video_pane_g7

0x9ed1,	// (0x0007472d) main_camera2_pane_t7_ParamLimits

0x9ed1,	// (0x0007472d) main_camera2_pane_t7

0x2bfa,	// (0x0006d456) scroll_pane_cp025_ParamLimits

0x2bfa,	// (0x0006d456) scroll_pane_cp025

0x2c0e,	// (0x0006d46a) scroll_pane_cp026_ParamLimits

0x2c0e,	// (0x0006d46a) scroll_pane_cp026

0x2c1d,	// (0x0006d479) wml_content_pane_ParamLimits

0x15e7,	// (0x0006be43) main_touch_calib_pane

0xa4a3,	// (0x00074cff) main_touch_calib_pane_g1

0xa4af,	// (0x00074d0b) main_touch_calib_pane_g2

0xa4bb,	// (0x00074d17) main_touch_calib_pane_g3

0xa4c7,	// (0x00074d23) main_touch_calib_pane_g4

0x0003,

0xf761,	// (0x00079fbd) main_touch_calib_pane_g

0xa4d3,	// (0x00074d2f) main_touch_calib_pane_t1

0xa4ea,	// (0x00074d46) main_touch_calib_pane_t2

0x0004,

0xf76a,	// (0x00079fc6) main_touch_calib_pane_t

0x3410,	// (0x0006dc6c) mup_progress_pane_cp02

0x342f,	// (0x0006dc8b) navi_pane_g1

0x3491,	// (0x0006dced) navi_pane_mp_t3

0x1f8f,	// (0x0006c7eb) main_mp3_pane_ParamLimits

0x9b24,	// (0x00074380) navi_pane_ParamLimits

0xeacf,	// (0x0007932b) main_mp3_pane_g1_ParamLimits

0xa3ff,	// (0x00074c5b) main_mp3_pane_g2_ParamLimits

0xa40b,	// (0x00074c67) main_mp3_pane_g3_ParamLimits

0xa40b,	// (0x00074c67) main_mp3_pane_g3

0xa417,	// (0x00074c73) main_mp3_pane_g4_ParamLimits

0xa417,	// (0x00074c73) main_mp3_pane_g4

0xeaff,	// (0x0007935b) main_mp3_pane_g5_ParamLimits

0xeaff,	// (0x0007935b) main_mp3_pane_g5

0xeb0d,	// (0x00079369) main_mp3_pane_g6_ParamLimits

0xeb0d,	// (0x00079369) main_mp3_pane_g6

0xeb1a,	// (0x00079376) main_mp3_pane_g7_ParamLimits

0xeb1a,	// (0x00079376) main_mp3_pane_g7

0xeb26,	// (0x00079382) main_mp3_pane_g8_ParamLimits

0xeb26,	// (0x00079382) main_mp3_pane_g8

0xf743,	// (0x00079f9f) main_mp3_pane_g_ParamLimits

0xa423,	// (0x00074c7f) main_mp3_pane_t2

0xa433,	// (0x00074c8f) main_mp3_pane_t3

0xeb40,	// (0x0007939c) main_mp3_pane_t4

0xeb4e,	// (0x000793aa) main_mp3_pane_t5

0x0005,

0xf754,	// (0x00079fb0) main_mp3_pane_t

0xeb5c,	// (0x000793b8) mup_progress_pane_cp01

0x57ca,	// (0x00070026) aid_zoom_text_secondary2

0xe8ec,	// (0x00079148) list_cale_ev2_pane

0xe8f4,	// (0x00079150) scroll_pane_cp023_ParamLimits

0xa53d,	// (0x00074d99) field_cale_ev2_pane_ParamLimits

0xa53d,	// (0x00074d99) field_cale_ev2_pane

0xa571,	// (0x00074dcd) field_cale_ev2_pane_g1_ParamLimits

0xa571,	// (0x00074dcd) field_cale_ev2_pane_g1

0xa57d,	// (0x00074dd9) field_cale_ev2_pane_g2_ParamLimits

0xa57d,	// (0x00074dd9) field_cale_ev2_pane_g2

0xa595,	// (0x00074df1) field_cale_ev2_pane_g3_ParamLimits

0xa595,	// (0x00074df1) field_cale_ev2_pane_g3

0x0003,

0xf775,	// (0x00079fd1) field_cale_ev2_pane_g_ParamLimits

0xf775,	// (0x00079fd1) field_cale_ev2_pane_g

0x5adc,	// (0x00070338) field_cale_ev2_pane_t1_ParamLimits

0x5adc,	// (0x00070338) field_cale_ev2_pane_t1

0x5af3,	// (0x0007034f) field_cale_ev2_pane_t2_ParamLimits

0x5af3,	// (0x0007034f) field_cale_ev2_pane_t2

0x0001,

0xf77e,	// (0x00079fda) field_cale_ev2_pane_t_ParamLimits

0xf77e,	// (0x00079fda) field_cale_ev2_pane_t

0x92fc,	// (0x00073b58) main_postcard_pane_g5_ParamLimits

0x92fc,	// (0x00073b58) main_postcard_pane_g5

0x930a,	// (0x00073b66) main_postcard_pane_g6_ParamLimits

0x930a,	// (0x00073b66) main_postcard_pane_g6

0x7611,	// (0x00071e6d) camera2_autofocus_pane_cp_ParamLimits

0x7611,	// (0x00071e6d) camera2_autofocus_pane_cp

0x1f8f,	// (0x0006c7eb) main_mup3_pane

0xa5d9,	// (0x00074e35) main_mup3_pane_g1_ParamLimits

0xa5d9,	// (0x00074e35) main_mup3_pane_g1

0xa5fa,	// (0x00074e56) main_mup3_pane_g2_ParamLimits

0xa5fa,	// (0x00074e56) main_mup3_pane_g2

0xa679,	// (0x00074ed5) main_mup3_pane_g3_ParamLimits

0xa679,	// (0x00074ed5) main_mup3_pane_g3

0xa6bc,	// (0x00074f18) main_mup3_pane_g4_ParamLimits

0xa6bc,	// (0x00074f18) main_mup3_pane_g4

0xa6ff,	// (0x00074f5b) main_mup3_pane_g5_ParamLimits

0xa6ff,	// (0x00074f5b) main_mup3_pane_g5

0xa744,	// (0x00074fa0) main_mup3_pane_g6_ParamLimits

0xa744,	// (0x00074fa0) main_mup3_pane_g6

0xeb64,	// (0x000793c0) main_mup3_pane_g7_ParamLimits

0xeb64,	// (0x000793c0) main_mup3_pane_g7

0x0007,

0xf78e,	// (0x00079fea) main_mup3_pane_g_ParamLimits

0xf78e,	// (0x00079fea) main_mup3_pane_g

0xa7ba,	// (0x00075016) main_mup3_pane_t1_ParamLimits

0xa7ba,	// (0x00075016) main_mup3_pane_t1

0xa829,	// (0x00075085) main_mup3_pane_t2_ParamLimits

0xa829,	// (0x00075085) main_mup3_pane_t2

0xa8f2,	// (0x0007514e) main_mup3_pane_t4_ParamLimits

0xa8f2,	// (0x0007514e) main_mup3_pane_t4

0xa946,	// (0x000751a2) main_mup3_pane_t5_ParamLimits

0xa946,	// (0x000751a2) main_mup3_pane_t5

0xa9f6,	// (0x00075252) main_mup3_pane_t6_ParamLimits

0xa9f6,	// (0x00075252) main_mup3_pane_t6

0x0005,

0xf79f,	// (0x00079ffb) main_mup3_pane_t_ParamLimits

0xf79f,	// (0x00079ffb) main_mup3_pane_t

0xaaa2,	// (0x000752fe) mup3_progress_pane_ParamLimits

0xaaa2,	// (0x000752fe) mup3_progress_pane

0xab16,	// (0x00075372) popup_mup3_control_window_ParamLimits

0xab16,	// (0x00075372) popup_mup3_control_window

0xeb72,	// (0x000793ce) popup_mup3_text_window

0xab2f,	// (0x0007538b) mup3_progress_pane_t1

0xab4e,	// (0x000753aa) mup3_progress_pane_t2

0xeb7a,	// (0x000793d6) mup3_progress_pane_t3

0x0002,

0xf7ac,	// (0x0007a008) mup3_progress_pane_t

0xeb97,	// (0x000793f3) mup_progress_pane_cp03

0x15e7,	// (0x0006be43) bg_tb_trans_pane_cp04

0xab6d,	// (0x000753c9) mup3_volume_pane

0xab75,	// (0x000753d1) popup_mup3_control_window_g1

0xab7e,	// (0x000753da) mup3_volume_pane_g1

0xab87,	// (0x000753e3) mup3_volume_pane_g2

0xab90,	// (0x000753ec) mup3_volume_pane_g3

0x0002,

0xf7b3,	// (0x0007a00f) mup3_volume_pane_g

0x15e7,	// (0x0006be43) bg_tb_trans_pane_cp03

0xeba7,	// (0x00079403) popup_mup3_text_window_g1

0xebaf,	// (0x0007940b) popup_mup3_text_window_t1

0x1dbc,	// (0x0006c618) list_calc_item_pane_g1_ParamLimits

0xe5ba,	// (0x00078e16) mup_volume_pane_cp_g1

0xa501,	// (0x00074d5d) main_touch_calib_pane_t3

0xa515,	// (0x00074d71) main_touch_calib_pane_t4

0xa529,	// (0x00074d85) main_touch_calib_pane_t5

0x691f,	// (0x0007117b) aid_cell_size_toolbar2

0x6927,	// (0x00071183) aid_popup3_width_pane

0x6967,	// (0x000711c3) aid_zoom_text_msg_primary

0x75fb,	// (0x00071e57) vorec_t7

0x1d80,	// (0x0006c5dc) bg_calc_paper_pane_g1_ParamLimits

0x1d98,	// (0x0006c5f4) bg_calc_paper_pane_g2_ParamLimits

0x1d8c,	// (0x0006c5e8) bg_calc_paper_pane_g3_ParamLimits

0x1db0,	// (0x0006c60c) bg_calc_paper_pane_g4_ParamLimits

0x1da4,	// (0x0006c600) bg_calc_paper_pane_g5_ParamLimits

0x6f97,	// (0x000717f3) bg_calc_paper_pane_g6_ParamLimits

0x6fa8,	// (0x00071804) bg_calc_paper_pane_g7_ParamLimits

0x6fb9,	// (0x00071815) bg_calc_paper_pane_g8_ParamLimits

0xf166,	// (0x000799c2) bg_calc_paper_pane_g_ParamLimits

0x6fca,	// (0x00071826) calc_bg_paper_pane_g9_ParamLimits

0x76fa,	// (0x00071f56) image_qvga_pane_ParamLimits

0x76fa,	// (0x00071f56) image_qvga_pane

0x1c5d,	// (0x0006c4b9) bg_popup_sub_pane_cp04_ParamLimits

0x3712,	// (0x0006df6e) popup_mup_playback_window_g1_ParamLimits

0x371e,	// (0x0006df7a) popup_mup_playback_window_t1_ParamLimits

0x3733,	// (0x0006df8f) popup_mup_playback_window_t2_ParamLimits

0xf4f2,	// (0x00079d4e) popup_mup_playback_window_t_ParamLimits

0xa000,	// (0x0007485c) main_mup2_pane_g3_ParamLimits

0xa000,	// (0x0007485c) main_mup2_pane_g3

0x79ba,	// (0x00072216) popup_toolbar_window_cp04

0x3b28,	// (0x0006e384) popup_call2_audio_second_window_g3_ParamLimits

0x3b28,	// (0x0006e384) popup_call2_audio_second_window_g3

0x3f32,	// (0x0006e78e) popup_call2_audio_first_window_g4_ParamLimits

0x3f32,	// (0x0006e78e) popup_call2_audio_first_window_g4

0x45b1,	// (0x0006ee0d) popup_call2_audio_in_window_g4_ParamLimits

0x45b1,	// (0x0006ee0d) popup_call2_audio_in_window_g4

0x9418,	// (0x00073c74) aid_area_sk_bg_cut_ParamLimits

0x9418,	// (0x00073c74) aid_area_sk_bg_cut

0x3748,	// (0x0006dfa4) aid_area_sk_bg_cut_2_ParamLimits

0x3748,	// (0x0006dfa4) aid_area_sk_bg_cut_2

0xa394,	// (0x00074bf0) aid_placing_details_win

0xa39c,	// (0x00074bf8) aid_placing_details_win_2

0xea11,	// (0x0007926d) camera2_autofocus_pane_g1_ParamLimits

0x6b74,	// (0x000713d0) popup_fixed_preview_cale_window_ParamLimits

0x6b74,	// (0x000713d0) popup_fixed_preview_cale_window

0x34f2,	// (0x0006dd4e) navi_slider_pane_g3

0x34e9,	// (0x0006dd45) navi_slider_pane_g4

0x34e0,	// (0x0006dd3c) navi_slider_pane_g5

0x34f2,	// (0x0006dd4e) navi_slider_pane_g6

0x8d55,	// (0x000735b1) navi_slider_pane_g7

0x3613,	// (0x0006de6f) mup_scale_pane_g3

0x361c,	// (0x0006de78) mup_scale_pane_g4

0x3625,	// (0x0006de81) mup_scale_pane_g5

0x9194,	// (0x000739f0) mup_scale_pane_g6

0x919d,	// (0x000739f9) mup_scale_pane_g7

0x34f2,	// (0x0006dd4e) cams2_slider_pane_g3

0xe63c,	// (0x00078e98) cams2_slider_pane_g4

0xa2ec,	// (0x00074b48) cams2_slider_pane_g5

0x34f2,	// (0x0006dd4e) cams2_slider_pane_g6

0xa2f4,	// (0x00074b50) cams2_slider_pane_g7

0xe869,	// (0x000790c5) camera2_autofocus_pane_cp_g1

0xebbd,	// (0x00079419) bg_popup_preview_window_pane_cp02_ParamLimits

0xebbd,	// (0x00079419) bg_popup_preview_window_pane_cp02

0xebc9,	// (0x00079425) list_fp_cale_pane_ParamLimits

0xebc9,	// (0x00079425) list_fp_cale_pane

0xebd5,	// (0x00079431) popup_fixed_preview_cale_window_t1_ParamLimits

0xebd5,	// (0x00079431) popup_fixed_preview_cale_window_t1

0xab99,	// (0x000753f5) popup_fixed_preview_cale_window_t2_ParamLimits

0xab99,	// (0x000753f5) popup_fixed_preview_cale_window_t2

0xabae,	// (0x0007540a) popup_fixed_preview_cale_window_t3_ParamLimits

0xabae,	// (0x0007540a) popup_fixed_preview_cale_window_t3

0x0002,

0xf7ba,	// (0x0007a016) popup_fixed_preview_cale_window_t_ParamLimits

0xf7ba,	// (0x0007a016) popup_fixed_preview_cale_window_t

0xabc3,	// (0x0007541f) list_single_fp_cale_pane_ParamLimits

0xabc3,	// (0x0007541f) list_single_fp_cale_pane

0xebf3,	// (0x0007944f) list_single_fp_cale_pane_g1_ParamLimits

0xebf3,	// (0x0007944f) list_single_fp_cale_pane_g1

0xebff,	// (0x0007945b) list_single_fp_cale_pane_g2_ParamLimits

0xebff,	// (0x0007945b) list_single_fp_cale_pane_g2

0x0002,

0xf7c1,	// (0x0007a01d) list_single_fp_cale_pane_g_ParamLimits

0xf7c1,	// (0x0007a01d) list_single_fp_cale_pane_g

0xec18,	// (0x00079474) list_single_fp_cale_pane_t1_ParamLimits

0xec18,	// (0x00079474) list_single_fp_cale_pane_t1

0xec2a,	// (0x00079486) list_single_fp_cale_pane_t2_ParamLimits

0xec2a,	// (0x00079486) list_single_fp_cale_pane_t2

0x0001,

0xf7c8,	// (0x0007a024) list_single_fp_cale_pane_t_ParamLimits

0xf7c8,	// (0x0007a024) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x15e7,	// (0x0006be43) main_dialer_pane

0xabd8,	// (0x00075434) aid_cell_size_keypad

0xabe2,	// (0x0007543e) dialer_ne_pane

0xabec,	// (0x00075448) grid_dialer_command_1_pane

0xabf4,	// (0x00075450) grid_dialer_command_2_pane

0xabfc,	// (0x00075458) grid_dialer_keypad_pane

0xac10,	// (0x0007546c) bg_popup_call_pane_cp06_ParamLimits

0xac10,	// (0x0007546c) bg_popup_call_pane_cp06

0xac1c,	// (0x00075478) dialer_ne_clear_pane_ParamLimits

0xac1c,	// (0x00075478) dialer_ne_clear_pane

0xec5d,	// (0x000794b9) dialer_ne_pane_g1

0xec65,	// (0x000794c1) dialer_ne_pane_t1_ParamLimits

0xec65,	// (0x000794c1) dialer_ne_pane_t1

0xac28,	// (0x00075484) dialer_ne_pane_t2_ParamLimits

0xac28,	// (0x00075484) dialer_ne_pane_t2

0xac45,	// (0x000754a1) dialer_ne_pane_t3_ParamLimits

0xac45,	// (0x000754a1) dialer_ne_pane_t3

0x0002,

0xf7cd,	// (0x0007a029) dialer_ne_pane_t_ParamLimits

0xf7cd,	// (0x0007a029) dialer_ne_pane_t

0xac69,	// (0x000754c5) dialer_ne_pane_t3_copy1_ParamLimits

0xac69,	// (0x000754c5) dialer_ne_pane_t3_copy1

0xac8d,	// (0x000754e9) cell_dialer_keypad_pane_ParamLimits

0xac8d,	// (0x000754e9) cell_dialer_keypad_pane

0xaca4,	// (0x00075500) cell_dialer_command_1_pane_ParamLimits

0xaca4,	// (0x00075500) cell_dialer_command_1_pane

0xacba,	// (0x00075516) cell_dialer_command_2_pane_ParamLimits

0xacba,	// (0x00075516) cell_dialer_command_2_pane

0xec77,	// (0x000794d3) bg_button_pane_cp02_ParamLimits

0xec77,	// (0x000794d3) bg_button_pane_cp02

0xacc9,	// (0x00075525) cell_dialer_keypad_pane_g1_ParamLimits

0xacc9,	// (0x00075525) cell_dialer_keypad_pane_g1

0xec77,	// (0x000794d3) bg_button_pane_cp03_ParamLimits

0xec77,	// (0x000794d3) bg_button_pane_cp03

0xacde,	// (0x0007553a) cell_dialer_command_1_pane_g1_ParamLimits

0xacde,	// (0x0007553a) cell_dialer_command_1_pane_g1

0xec83,	// (0x000794df) bg_button_pane_cp04

0xacf2,	// (0x0007554e) cell_dialer_command_2_pane_g1

0x34cf,	// (0x0006dd2b) bg_button_pane_cp06

0xec8b,	// (0x000794e7) dialer_ne_clear_pane_g1

0x8c98,	// (0x000734f4) navi_pane_g2

0x8cc6,	// (0x00073522) navi_pane_g3

0x0002,

0xf3f5,	// (0x00079c51) navi_pane_g

0x8cf1,	// (0x0007354d) navi_pane_mv_g2

0x8d18,	// (0x00073574) navi_pane_mv_g5

0x8d20,	// (0x0007357c) navi_pane_mv_t1

0x1d74,	// (0x0006c5d0) main_clock2_pane

0xad25,	// (0x00075581) main_clock2_list_pane_ParamLimits

0xad25,	// (0x00075581) main_clock2_list_pane

0xad4f,	// (0x000755ab) main_clock2_pane_t1_ParamLimits

0xad4f,	// (0x000755ab) main_clock2_pane_t1

0xad73,	// (0x000755cf) main_clock2_pane_t2_ParamLimits

0xad73,	// (0x000755cf) main_clock2_pane_t2

0x0004,

0xf7d4,	// (0x0007a030) main_clock2_pane_t_ParamLimits

0xf7d4,	// (0x0007a030) main_clock2_pane_t

0xadce,	// (0x0007562a) popup_clock_analogue_window_cp03_ParamLimits

0xadce,	// (0x0007562a) popup_clock_analogue_window_cp03

0xadee,	// (0x0007564a) popup_clock_digital_window_cp02_ParamLimits

0xadee,	// (0x0007564a) popup_clock_digital_window_cp02

0xae63,	// (0x000756bf) main_clock2_list_single_pane_ParamLimits

0xae63,	// (0x000756bf) main_clock2_list_single_pane

0x34cf,	// (0x0006dd2b) list_highlight_pane_cp05

0xec93,	// (0x000794ef) main_clock2_list_single_pane_t1

0x79ba,	// (0x00072216) popup_toolbar_window_cp04_ParamLimits

0xa3be,	// (0x00074c1a) camera2_autofocus_pane_g2_ParamLimits

0xa3be,	// (0x00074c1a) camera2_autofocus_pane_g2

0xa3ca,	// (0x00074c26) camera2_autofocus_pane_g3_ParamLimits

0xa3ca,	// (0x00074c26) camera2_autofocus_pane_g3

0xa3d6,	// (0x00074c32) camera2_autofocus_pane_g4_ParamLimits

0xa3d6,	// (0x00074c32) camera2_autofocus_pane_g4

0xa3e2,	// (0x00074c3e) camera2_autofocus_pane_g5_ParamLimits

0xa3e2,	// (0x00074c3e) camera2_autofocus_pane_g5

0x0004,

0xf71d,	// (0x00079f79) camera2_autofocus_pane_g_ParamLimits

0xf71d,	// (0x00079f79) camera2_autofocus_pane_g

0xa5b9,	// (0x00074e15) camera2_autofocus_pane_cp_g2

0xa5c1,	// (0x00074e1d) camera2_autofocus_pane_cp_g3

0xa5c9,	// (0x00074e25) camera2_autofocus_pane_cp_g4

0xa5d1,	// (0x00074e2d) camera2_autofocus_pane_cp_g5

0x0004,

0xf783,	// (0x00079fdf) camera2_autofocus_pane_cp_g

0xac08,	// (0x00075464) popup_dialer_spcha_window

0x15e7,	// (0x0006be43) bg_popup_sub_pane_cp07

0xeca1,	// (0x000794fd) list_spcha_pane

0xeca9,	// (0x00079505) list_single_spcha_pane_ParamLimits

0xeca9,	// (0x00079505) list_single_spcha_pane

0x15e7,	// (0x0006be43) list_highlight_pane_cp06

0xecba,	// (0x00079516) list_single_spcha_pane_t1

0x435b,	// (0x0006ebb7) popup_call2_audio_out_window_g4_ParamLimits

0x435b,	// (0x0006ebb7) popup_call2_audio_out_window_g4

0x15e7,	// (0x0006be43) main_imed2_pane

0x9a54,	// (0x000742b0) popup_imed_adjust2_window

0x9a67,	// (0x000742c3) popup_imed_trans_window_ParamLimits

0x9a67,	// (0x000742c3) popup_imed_trans_window

0xe6a5,	// (0x00078f01) popup_blid_sat_info2_window_t1

0xe6b3,	// (0x00078f0f) popup_blid_sat_info2_window_t2

0x000a,

0xf6b2,	// (0x00079f0e) popup_blid_sat_info2_window_t

0xaf0d,	// (0x00075769) aid_size_cell_colour_35

0xaf27,	// (0x00075783) aid_size_cell_colour_112

0xaf3e,	// (0x0007579a) aid_size_cell_effect

0x1f8f,	// (0x0006c7eb) bg_tb_trans_pane_cp02

0x3033,	// (0x0006d88f) heading_imed_pane

0xaf58,	// (0x000757b4) listscroll_imed_pane

0xecc8,	// (0x00079524) heading_imed_pane_g1

0xecd0,	// (0x0007952c) heading_imed_pane_t1

0xecde,	// (0x0007953a) grid_imed_colour_35_pane_ParamLimits

0xecde,	// (0x0007953a) grid_imed_colour_35_pane

0xaf64,	// (0x000757c0) grid_imed_effect_pane

0xecf9,	// (0x00079555) list_imed_aspect_pane

0xaf74,	// (0x000757d0) scroll_pane_cp027_ParamLimits

0xaf74,	// (0x000757d0) scroll_pane_cp027

0xaf80,	// (0x000757dc) cell_imed_effect_pane_ParamLimits

0xaf80,	// (0x000757dc) cell_imed_effect_pane

0xed01,	// (0x0007955d) cell_imed_colour_pane_ParamLimits

0xed01,	// (0x0007955d) cell_imed_colour_pane

0xed43,	// (0x0007959f) cell_imed_colour_pane_g1_ParamLimits

0xed43,	// (0x0007959f) cell_imed_colour_pane_g1

0xed54,	// (0x000795b0) hgihlgiht_grid_pane_cp016_ParamLimits

0xed54,	// (0x000795b0) hgihlgiht_grid_pane_cp016

0xaf98,	// (0x000757f4) cell_imed_effect_pane_g1

0xafa0,	// (0x000757fc) grid_highlight_pane_cp017

0xed65,	// (0x000795c1) list_imed_single_pane_ParamLimits

0xed65,	// (0x000795c1) list_imed_single_pane

0x15e7,	// (0x0006be43) list_highlight_pane_cp07

0xed7c,	// (0x000795d8) list_imed_aspect_pane_comp1_t1

0x491a,	// (0x0006f176) bg_tb_trans_pane_cp05

0xed9e,	// (0x000795fa) popup_imed_adjust2_window_g1

0xedc5,	// (0x00079621) popup_imed_adjust2_window_t1

0xeddd,	// (0x00079639) slider_imed_adjust_pane

0xedf1,	// (0x0007964d) slider_imed_adjust_pane_g1

0xee01,	// (0x0007965d) slider_imed_adjust_pane_g2

0xee11,	// (0x0007966d) slider_imed_adjust_pane_g3

0xee22,	// (0x0007967e) slider_imed_adjust_pane_g4

0x0003,

0xf7f1,	// (0x0007a04d) slider_imed_adjust_pane_g

0xafa9,	// (0x00075805) aid_size_cell_clipart2

0xafb5,	// (0x00075811) grid_imed_clipart_pane

0xee33,	// (0x0007968f) scroll_pane_cp031

0xafbf,	// (0x0007581b) cell_imed_clipart_pane_ParamLimits

0xafbf,	// (0x0007581b) cell_imed_clipart_pane

0xafe6,	// (0x00075842) cell_imed_clipart_pane_g1

0x15e7,	// (0x0006be43) grid_highlight_pane_cp014

0xad31,	// (0x0007558d) main_clock2_pane_g1_ParamLimits

0xad31,	// (0x0007558d) main_clock2_pane_g1

0xae0a,	// (0x00075666) aid_call2_pane_cp10

0xae1c,	// (0x00075678) aid_call_pane_cp10

0x3404,	// (0x0006dc60) popup_clock_analogue_window_cp10_g1

0x3404,	// (0x0006dc60) popup_clock_analogue_window_cp10_g2

0xae2e,	// (0x0007568a) popup_clock_analogue_window_cp10_g3

0xae2e,	// (0x0007568a) popup_clock_analogue_window_cp10_g4

0x3404,	// (0x0006dc60) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7df,	// (0x0007a03b) popup_clock_analogue_window_cp10_g

0xae44,	// (0x000756a0) popup_clock_analogue_window_cp10_t1

0xae75,	// (0x000756d1) clock_digital_number_pane_cp10_ParamLimits

0xae75,	// (0x000756d1) clock_digital_number_pane_cp10

0xae8d,	// (0x000756e9) clock_digital_number_pane_cp11_ParamLimits

0xae8d,	// (0x000756e9) clock_digital_number_pane_cp11

0xaea5,	// (0x00075701) clock_digital_number_pane_cp12_ParamLimits

0xaea5,	// (0x00075701) clock_digital_number_pane_cp12

0xaebd,	// (0x00075719) clock_digital_number_pane_cp13_ParamLimits

0xaebd,	// (0x00075719) clock_digital_number_pane_cp13

0xaed5,	// (0x00075731) clock_digital_separator_pane_cp10_ParamLimits

0xaed5,	// (0x00075731) clock_digital_separator_pane_cp10

0xaeed,	// (0x00075749) popup_clock_digital_window_cp02_t1_ParamLimits

0xaeed,	// (0x00075749) popup_clock_digital_window_cp02_t1

0x1c55,	// (0x0006c4b1) clock_digital_number_pane_cp10_g1

0x1c55,	// (0x0006c4b1) clock_digital_number_pane_cp10_g2

0x0001,

0xf7fa,	// (0x0007a056) clock_digital_number_pane_cp10_g

0x1c55,	// (0x0006c4b1) clock_digital_separator_pane_cp10_g1

0x1c55,	// (0x0006c4b1) clock_digital_separator_pane_g2_cp10

0x349f,	// (0x0006dcfb) navi_pane_vded_g4

0x34a8,	// (0x0006dd04) navi_pane_vded_g5

0x34b1,	// (0x0006dd0d) navi_pane_vded_t1

0x15e7,	// (0x0006be43) main_vded_pane

0xafef,	// (0x0007584b) main_vded_pane_g1

0xaffb,	// (0x00075857) main_vded_pane_g2

0xb005,	// (0x00075861) main_vded_pane_g3

0x0002,

0xf7ff,	// (0x0007a05b) main_vded_pane_g

0xb00f,	// (0x0007586b) main_vded_pane_t1

0xb01d,	// (0x00075879) main_vded_pane_t2

0x0001,

0xf806,	// (0x0007a062) main_vded_pane_t

0xb02b,	// (0x00075887) vded_slider_pane

0xb035,	// (0x00075891) vded_video_pane

0xee3b,	// (0x00079697) vded_video_pane_g1

0xb03f,	// (0x0007589b) vded_video_pane_g2

0xe869,	// (0x000790c5) vded_video_pane_g3

0x0002,

0xf80b,	// (0x0007a067) vded_video_pane_g

0xee45,	// (0x000796a1) vded_slider_pane_g1

0xe5ba,	// (0x00078e16) vded_slider_pane_g2

0xee4e,	// (0x000796aa) vded_slider_pane_g3

0xee57,	// (0x000796b3) vded_slider_pane_g4

0xee60,	// (0x000796bc) vded_slider_pane_g5

0x0004,

0xf812,	// (0x0007a06e) vded_slider_pane_g

0xab08,	// (0x00075364) mup3_rocker_pane_ParamLimits

0xab08,	// (0x00075364) mup3_rocker_pane

0xb048,	// (0x000758a4) mup3_control_keys_pane_g1

0xb050,	// (0x000758ac) mup3_control_keys_pane_g2

0xb058,	// (0x000758b4) mup3_control_keys_pane_g3

0xb060,	// (0x000758bc) mup3_control_keys_pane_g4

0x0003,

0xf81d,	// (0x0007a079) mup3_control_keys_pane_g

0x6b9c,	// (0x000713f8) popup_toolbar2_fixed_window_cp01_ParamLimits

0x6b9c,	// (0x000713f8) popup_toolbar2_fixed_window_cp01

0xab22,	// (0x0007537e) popup_toolbar2_fixed_window_cp02_ParamLimits

0xab22,	// (0x0007537e) popup_toolbar2_fixed_window_cp02

0x3c9a,	// (0x0006e4f6) popup_call2_audio_second_window_t4_ParamLimits

0x3c9a,	// (0x0006e4f6) popup_call2_audio_second_window_t4

0x41c8,	// (0x0006ea24) popup_call2_audio_first_window_t6_ParamLimits

0x41c8,	// (0x0006ea24) popup_call2_audio_first_window_t6

0x445e,	// (0x0006ecba) popup_call2_audio_out_window_t6_ParamLimits

0x445e,	// (0x0006ecba) popup_call2_audio_out_window_t6

0x15e7,	// (0x0006be43) main_vitu_pane

0xb070,	// (0x000758cc) aid_size_cell_itu_ParamLimits

0xb070,	// (0x000758cc) aid_size_cell_itu

0x6bc4,	// (0x00071420) bg_popup_window_pane_cp08_ParamLimits

0x6bc4,	// (0x00071420) bg_popup_window_pane_cp08

0xb07e,	// (0x000758da) field_vitu_entry_pane_ParamLimits

0xb07e,	// (0x000758da) field_vitu_entry_pane

0xb08d,	// (0x000758e9) grid_vitu_function_pane_ParamLimits

0xb08d,	// (0x000758e9) grid_vitu_function_pane

0xb09d,	// (0x000758f9) grid_vitu_itu_pane_ParamLimits

0xb09d,	// (0x000758f9) grid_vitu_itu_pane

0xb0ad,	// (0x00075909) cell_vitu_itu_pane_ParamLimits

0xb0ad,	// (0x00075909) cell_vitu_itu_pane

0xb0c2,	// (0x0007591e) cell_vitu_function_pane_ParamLimits

0xb0c2,	// (0x0007591e) cell_vitu_function_pane

0x1f8f,	// (0x0006c7eb) bg_popup_sub_pane_cp08_ParamLimits

0x1f8f,	// (0x0006c7eb) bg_popup_sub_pane_cp08

0xb0d6,	// (0x00075932) field_vitu_entry_pane_t1_ParamLimits

0xb0d6,	// (0x00075932) field_vitu_entry_pane_t1

0xee81,	// (0x000796dd) field_vitu_entry_pane_t2_ParamLimits

0xee81,	// (0x000796dd) field_vitu_entry_pane_t2

0x0001,

0xf82b,	// (0x0007a087) field_vitu_entry_pane_t_ParamLimits

0xf82b,	// (0x0007a087) field_vitu_entry_pane_t

0xee9e,	// (0x000796fa) bg_button_pane_cp05_ParamLimits

0xee9e,	// (0x000796fa) bg_button_pane_cp05

0xb0f4,	// (0x00075950) cell_vitu_itu_pane_g1

0xb10c,	// (0x00075968) cell_vitu_itu_pane_t1_ParamLimits

0xb10c,	// (0x00075968) cell_vitu_itu_pane_t1

0xb11e,	// (0x0007597a) cell_vitu_itu_pane_t2_ParamLimits

0xb11e,	// (0x0007597a) cell_vitu_itu_pane_t2

0x0002,

0xf830,	// (0x0007a08c) cell_vitu_itu_pane_t_ParamLimits

0xf830,	// (0x0007a08c) cell_vitu_itu_pane_t

0xeeac,	// (0x00079708) bg_button_pane_cp07

0xb153,	// (0x000759af) cell_vitu_function_pane_g1

0x6e3b,	// (0x00071697) main_calc_pane_g1

0x695b,	// (0x000711b7) aid_visual_content_pane

0x15e7,	// (0x0006be43) main_vradio_pane

0xb15c,	// (0x000759b8) main_vradio_pane_g1_ParamLimits

0xb15c,	// (0x000759b8) main_vradio_pane_g1

0xeeb6,	// (0x00079712) main_vradio_pane_g2_ParamLimits

0xeeb6,	// (0x00079712) main_vradio_pane_g2

0x0001,

0xf837,	// (0x0007a093) main_vradio_pane_g_ParamLimits

0xf837,	// (0x0007a093) main_vradio_pane_g

0xb16c,	// (0x000759c8) main_vradio_pane_t1_ParamLimits

0xb16c,	// (0x000759c8) main_vradio_pane_t1

0xb17e,	// (0x000759da) main_vradio_pane_t2_ParamLimits

0xb17e,	// (0x000759da) main_vradio_pane_t2

0xeec3,	// (0x0007971f) main_vradio_pane_t3_ParamLimits

0xeec3,	// (0x0007971f) main_vradio_pane_t3

0x0002,

0xf83c,	// (0x0007a098) main_vradio_pane_t_ParamLimits

0xf83c,	// (0x0007a098) main_vradio_pane_t

0xb190,	// (0x000759ec) vradio_rocker_control_pane_ParamLimits

0xb190,	// (0x000759ec) vradio_rocker_control_pane

0xb19c,	// (0x000759f8) vradio_station_info_pane_ParamLimits

0xb19c,	// (0x000759f8) vradio_station_info_pane

0xeed7,	// (0x00079733) vradio_frequency_info_pane_ParamLimits

0xeed7,	// (0x00079733) vradio_frequency_info_pane

0xe869,	// (0x000790c5) vradio_station_info_pane_g1

0xeee6,	// (0x00079742) vradio_station_info_pane_t1_ParamLimits

0xeee6,	// (0x00079742) vradio_station_info_pane_t1

0xef08,	// (0x00079764) vradio_station_info_pane_t2_ParamLimits

0xef08,	// (0x00079764) vradio_station_info_pane_t2

0x0001,

0xf843,	// (0x0007a09f) vradio_station_info_pane_t_ParamLimits

0xf843,	// (0x0007a09f) vradio_station_info_pane_t

0xef1a,	// (0x00079776) vradio_tuning_pane

0xef22,	// (0x0007977e) vradio_rocker_control_pane_g1

0xef2a,	// (0x00079786) vradio_rocker_control_pane_g2

0xef32,	// (0x0007978e) vradio_rocker_control_pane_g3

0xef3a,	// (0x00079796) vradio_rocker_control_pane_g4

0xef42,	// (0x0007979e) vradio_rocker_control_pane_g5

0x0004,

0xf848,	// (0x0007a0a4) vradio_rocker_control_pane_g

0xb1ab,	// (0x00075a07) vradio_frequency_info_pane_g1

0xef4a,	// (0x000797a6) vradio_frequency_info_pane_t1_ParamLimits

0xef4a,	// (0x000797a6) vradio_frequency_info_pane_t1

0xb1b5,	// (0x00075a11) vradio_tuning_pane_g1

0xb1be,	// (0x00075a1a) vradio_tuning_pane_t1

0x69a4,	// (0x00071200) area_side_right_pane_ParamLimits

0x69a4,	// (0x00071200) area_side_right_pane

0x48e1,	// (0x0006f13d) status_small_pane_g1

0x48e9,	// (0x0006f145) status_small_pane_g2

0x48f2,	// (0x0006f14e) status_small_pane_g3

0x48fb,	// (0x0006f157) status_small_pane_g4

0x0003,

0xf608,	// (0x00079e64) status_small_pane_g

0x4904,	// (0x0006f160) status_small_pane_t1

0x15e7,	// (0x0006be43) main_video3_pane

0xef5e,	// (0x000797ba) cams_zoom_vslider_pane

0xef66,	// (0x000797c2) image3_wide_pane_ParamLimits

0xef66,	// (0x000797c2) image3_wide_pane

0xef80,	// (0x000797dc) image3_wide_small_pane

0xef8c,	// (0x000797e8) main_video3_pane_g1_ParamLimits

0xef8c,	// (0x000797e8) main_video3_pane_g1

0xefa8,	// (0x00079804) main_video3_pane_g2_ParamLimits

0xefa8,	// (0x00079804) main_video3_pane_g2

0x0001,

0xf853,	// (0x0007a0af) main_video3_pane_g_ParamLimits

0xf853,	// (0x0007a0af) main_video3_pane_g

0xefc4,	// (0x00079820) main_video3_pane_t1_ParamLimits

0xefc4,	// (0x00079820) main_video3_pane_t1

0xefef,	// (0x0007984b) main_video3_pane_t2_ParamLimits

0xefef,	// (0x0007984b) main_video3_pane_t2

0xf01a,	// (0x00079876) main_video3_pane_t3_ParamLimits

0xf01a,	// (0x00079876) main_video3_pane_t3

0x0002,

0xf858,	// (0x0007a0b4) main_video3_pane_t_ParamLimits

0xf858,	// (0x0007a0b4) main_video3_pane_t

0xf047,	// (0x000798a3) cams_zoom_vslider_pane_g1

0xf050,	// (0x000798ac) cams_zoom_vslider_pane_g2

0x0001,

0xf85f,	// (0x0007a0bb) cams_zoom_vslider_pane_g

0xf058,	// (0x000798b4) small_slider_vertical_pane

0xe869,	// (0x000790c5) small_slider_vertical_pane_g1

0xe869,	// (0x000790c5) small_slider_vertical_pane_g2

0xf060,	// (0x000798bc) small_slider_vertical_pane_g3

0x0002,

0xf864,	// (0x0007a0c0) small_slider_vertical_pane_g

0x15e7,	// (0x0006be43) main_hwr_training_pane

0xf069,	// (0x000798c5) hwr_training_instruct_pane_ParamLimits

0xf069,	// (0x000798c5) hwr_training_instruct_pane

0xb1cd,	// (0x00075a29) hwr_training_navi_pane_ParamLimits

0xb1cd,	// (0x00075a29) hwr_training_navi_pane

0xb1e7,	// (0x00075a43) hwr_training_write_pane_ParamLimits

0xb1e7,	// (0x00075a43) hwr_training_write_pane

0x15e7,	// (0x0006be43) bg_frame_shadow_pane

0xf0a0,	// (0x000798fc) hwr_training_write_pane_g1

0xf0a8,	// (0x00079904) hwr_training_write_pane_g2

0xf0b0,	// (0x0007990c) hwr_training_write_pane_g3

0xf0b8,	// (0x00079914) hwr_training_write_pane_g4

0xf0c0,	// (0x0007991c) hwr_training_write_pane_g5

0xf0c8,	// (0x00079924) hwr_training_write_pane_g6

0xf0d0,	// (0x0007992c) hwr_training_write_pane_g7

0x0006,

0xf86b,	// (0x0007a0c7) hwr_training_write_pane_g

0xb21f,	// (0x00075a7b) hwr_training_navi_pane_g1_ParamLimits

0xb21f,	// (0x00075a7b) hwr_training_navi_pane_g1

0xb231,	// (0x00075a8d) hwr_training_navi_pane_g2_ParamLimits

0xb231,	// (0x00075a8d) hwr_training_navi_pane_g2

0xb243,	// (0x00075a9f) hwr_training_navi_pane_g3_ParamLimits

0xb243,	// (0x00075a9f) hwr_training_navi_pane_g3

0xb253,	// (0x00075aaf) hwr_training_navi_pane_g4_ParamLimits

0xb253,	// (0x00075aaf) hwr_training_navi_pane_g4

0x0004,

0xf87a,	// (0x0007a0d6) hwr_training_navi_pane_g_ParamLimits

0xf87a,	// (0x0007a0d6) hwr_training_navi_pane_g

0xb26d,	// (0x00075ac9) hwr_training_navi_pane_t1

0xb27b,	// (0x00075ad7) list_single_hwr_training_instruct_pane_ParamLimits

0xb27b,	// (0x00075ad7) list_single_hwr_training_instruct_pane

0x002b,	// (0x0006a887) list_single_hwr_training_instruct_pane_t1

0xe7a9,	// (0x00079005) bg_frame_shadow_pane_g1

0x003a,	// (0x0006a896) bg_frame_shadow_pane_g2

0x0042,	// (0x0006a89e) bg_frame_shadow_pane_g3

0x004a,	// (0x0006a8a6) bg_frame_shadow_pane_g4

0x0052,	// (0x0006a8ae) bg_frame_shadow_pane_g5

0x005a,	// (0x0006a8b6) bg_frame_shadow_pane_g6

0x0062,	// (0x0006a8be) bg_frame_shadow_pane_g7

0x1e3f,	// (0x0006c69b) bg_frame_shadow_pane_g8

0x0007,

0xf885,	// (0x0007a0e1) bg_frame_shadow_pane_g

0x15e7,	// (0x0006be43) main_video_tele_dialer_pane

0xb2b1,	// (0x00075b0d) aid_size_cell_video_keypad_ParamLimits

0xb2b1,	// (0x00075b0d) aid_size_cell_video_keypad

0xb2c1,	// (0x00075b1d) grid_video_dialer_keypad_pane_ParamLimits

0xb2c1,	// (0x00075b1d) grid_video_dialer_keypad_pane

0xb2f3,	// (0x00075b4f) video_down_pane_cp_ParamLimits

0xb2f3,	// (0x00075b4f) video_down_pane_cp

0xb31b,	// (0x00075b77) cell_video_dialer_keypad_pane_ParamLimits

0xb31b,	// (0x00075b77) cell_video_dialer_keypad_pane

0x006a,	// (0x0006a8c6) bg_button_pane_cp08_ParamLimits

0x006a,	// (0x0006a8c6) bg_button_pane_cp08

0xb330,	// (0x00075b8c) cell_video_dialer_keypad_pane_g1_ParamLimits

0xb330,	// (0x00075b8c) cell_video_dialer_keypad_pane_g1

0xaafc,	// (0x00075358) mup3_rocker2_pane_ParamLimits

0xaafc,	// (0x00075358) mup3_rocker2_pane

0xe869,	// (0x000790c5) mup3_rocker2_pane_g1

0x99c8,	// (0x00074224) main_dialer2_pane

0x15e7,	// (0x0006be43) main_mp4_pane

0xb36f,	// (0x00075bcb) main_mp4_pane_g1_ParamLimits

0xb36f,	// (0x00075bcb) main_mp4_pane_g1

0xb37d,	// (0x00075bd9) main_mp4_pane_g2_ParamLimits

0xb37d,	// (0x00075bd9) main_mp4_pane_g2

0xb38b,	// (0x00075be7) main_mp4_pane_g3_ParamLimits

0xb38b,	// (0x00075be7) main_mp4_pane_g3

0xb3d0,	// (0x00075c2c) main_mp4_pane_g4_ParamLimits

0xb3d0,	// (0x00075c2c) main_mp4_pane_g4

0xb3f8,	// (0x00075c54) main_mp4_pane_g5_ParamLimits

0xb3f8,	// (0x00075c54) main_mp4_pane_g5

0x0005,

0xf8a5,	// (0x0007a101) main_mp4_pane_g_ParamLimits

0xf8a5,	// (0x0007a101) main_mp4_pane_g

0xb448,	// (0x00075ca4) main_mp4_pane_t1_ParamLimits

0xb448,	// (0x00075ca4) main_mp4_pane_t1

0xb4a4,	// (0x00075d00) main_mp4_pane_t2_ParamLimits

0xb4a4,	// (0x00075d00) main_mp4_pane_t2

0x01b2,	// (0x0006aa0e) main_mp4_pane_t3_ParamLimits

0x01b2,	// (0x0006aa0e) main_mp4_pane_t3

0xb4f6,	// (0x00075d52) main_mp4_pane_t4_ParamLimits

0xb4f6,	// (0x00075d52) main_mp4_pane_t4

0x0003,

0xf8b2,	// (0x0007a10e) main_mp4_pane_t_ParamLimits

0xf8b2,	// (0x0007a10e) main_mp4_pane_t

0xb53a,	// (0x00075d96) mp4_progress_pane_ParamLimits

0xb53a,	// (0x00075d96) mp4_progress_pane

0xb584,	// (0x00075de0) mp4_rocker_pane_ParamLimits

0xb584,	// (0x00075de0) mp4_rocker_pane

0x0288,	// (0x0006aae4) mp4_progress_pane_t1

0x02a1,	// (0x0006aafd) mp4_progress_pane_t2

0x0001,

0xf8bb,	// (0x0007a117) mp4_progress_pane_t

0x02ba,	// (0x0006ab16) mup_progress_pane_cp04

0xe869,	// (0x000790c5) mp4_rocker_pane_g1

0xb5a4,	// (0x00075e00) aid_cell_size_keypad2_ParamLimits

0xb5a4,	// (0x00075e00) aid_cell_size_keypad2

0xb5b4,	// (0x00075e10) dialer2_ne_pane_ParamLimits

0xb5b4,	// (0x00075e10) dialer2_ne_pane

0xb5c2,	// (0x00075e1e) grid_dialer2_keypad_pane_ParamLimits

0xb5c2,	// (0x00075e1e) grid_dialer2_keypad_pane

0x0ca8,	// (0x0006b504) bg_popup_call_pane_cp07_ParamLimits

0x0ca8,	// (0x0006b504) bg_popup_call_pane_cp07

0xb5d2,	// (0x00075e2e) dialer2_ne_pane_t1_ParamLimits

0xb5d2,	// (0x00075e2e) dialer2_ne_pane_t1

0xb5f7,	// (0x00075e53) cell_dialer2_keypad_pane_ParamLimits

0xb5f7,	// (0x00075e53) cell_dialer2_keypad_pane

0x02e2,	// (0x0006ab3e) bg_button_pane_pane_cp04_ParamLimits

0x02e2,	// (0x0006ab3e) bg_button_pane_pane_cp04

0xb60e,	// (0x00075e6a) cell_dialer2_keypad_pane_g1_ParamLimits

0xb60e,	// (0x00075e6a) cell_dialer2_keypad_pane_g1

0x787c,	// (0x000720d8) aid_placing_vt_set_content_ParamLimits

0x787c,	// (0x000720d8) aid_placing_vt_set_content

0x78a8,	// (0x00072104) aid_placing_vt_set_title_ParamLimits

0x78a8,	// (0x00072104) aid_placing_vt_set_title

0x15e7,	// (0x0006be43) main_image3_pane

0xb6a8,	// (0x00075f04) area_side_right_pane_cp01_ParamLimits

0xb6a8,	// (0x00075f04) area_side_right_pane_cp01

0x11b3,	// (0x0006ba0f) main_image3_pane_g1_ParamLimits

0x11b3,	// (0x0006ba0f) main_image3_pane_g1

0xb6d5,	// (0x00075f31) main_image3_pane_g2_ParamLimits

0xb6d5,	// (0x00075f31) main_image3_pane_g2

0xb6ee,	// (0x00075f4a) main_image3_pane_g3_ParamLimits

0xb6ee,	// (0x00075f4a) main_image3_pane_g3

0xb707,	// (0x00075f63) main_image3_pane_g4_ParamLimits

0xb707,	// (0x00075f63) main_image3_pane_g4

0x0003,

0xf8ca,	// (0x0007a126) main_image3_pane_g_ParamLimits

0xf8ca,	// (0x0007a126) main_image3_pane_g

0xb720,	// (0x00075f7c) main_image3_pane_t1_ParamLimits

0xb720,	// (0x00075f7c) main_image3_pane_t1

0xb745,	// (0x00075fa1) main_image3_pane_t2_ParamLimits

0xb745,	// (0x00075fa1) main_image3_pane_t2

0xb764,	// (0x00075fc0) main_image3_pane_t3_ParamLimits

0xb764,	// (0x00075fc0) main_image3_pane_t3

0x0003,

0xf8d3,	// (0x0007a12f) main_image3_pane_t_ParamLimits

0xf8d3,	// (0x0007a12f) main_image3_pane_t

0x6bc4,	// (0x00071420) grid_sctrl_middle_pane_cp01_ParamLimits

0x6bc4,	// (0x00071420) grid_sctrl_middle_pane_cp01

0xb7c5,	// (0x00076021) cell_sctrl_middle_pane_cp01_ParamLimits

0xb7c5,	// (0x00076021) cell_sctrl_middle_pane_cp01

0xb7d6,	// (0x00076032) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xb7d6,	// (0x00076032) cell_sctrl_middle_pane_cp01_g1

0x15e7,	// (0x0006be43) main_call4_pane

0xb7e3,	// (0x0007603f) aid_size_button_call4_ParamLimits

0xb7e3,	// (0x0007603f) aid_size_button_call4

0xb813,	// (0x0007606f) call4_windows_pane_ParamLimits

0xb813,	// (0x0007606f) call4_windows_pane

0xb82d,	// (0x00076089) grid_call4_button_pane_ParamLimits

0xb82d,	// (0x00076089) grid_call4_button_pane

0x0320,	// (0x0006ab7c) call4_windows_conf_pane

0x0335,	// (0x0006ab91) popup_call4_audio_first_window_ParamLimits

0x0335,	// (0x0006ab91) popup_call4_audio_first_window

0x0381,	// (0x0006abdd) popup_call4_audio_second_window_ParamLimits

0x0381,	// (0x0006abdd) popup_call4_audio_second_window

0x0395,	// (0x0006abf1) popup_call4_audio_wait_window_ParamLimits

0x0395,	// (0x0006abf1) popup_call4_audio_wait_window

0xb851,	// (0x000760ad) cell_call4_button_pane_ParamLimits

0xb851,	// (0x000760ad) cell_call4_button_pane

0xb876,	// (0x000760d2) bg_button_pane_cp09_ParamLimits

0xb876,	// (0x000760d2) bg_button_pane_cp09

0xb882,	// (0x000760de) cell_call4_button_pane_g1_ParamLimits

0xb882,	// (0x000760de) cell_call4_button_pane_g1

0xb88f,	// (0x000760eb) cell_call4_button_pane_t1_ParamLimits

0xb88f,	// (0x000760eb) cell_call4_button_pane_t1

0x03dd,	// (0x0006ac39) popup_call4_audio_conf_window_ParamLimits

0x03dd,	// (0x0006ac39) popup_call4_audio_conf_window

0xab2f,	// (0x0007538b) mup3_progress_pane_t1_ParamLimits

0xab4e,	// (0x000753aa) mup3_progress_pane_t2_ParamLimits

0xeb7a,	// (0x000793d6) mup3_progress_pane_t3_ParamLimits

0xf7ac,	// (0x0007a008) mup3_progress_pane_t_ParamLimits

0xeb97,	// (0x000793f3) mup_progress_pane_cp03_ParamLimits

0xb068,	// (0x000758c4) mup3_control_keys_pane_g4_copy1

0xb568,	// (0x00075dc4) mp4_rocker2_pane_ParamLimits

0xb568,	// (0x00075dc4) mp4_rocker2_pane

0x03f9,	// (0x0006ac55) mp4_rocker2_pane_g1

0x03f1,	// (0x0006ac4d) mp4_rocker2_pane_g2

0xb8a1,	// (0x000760fd) mp4_rocker2_pane_g3

0xb8a9,	// (0x00076105) mp4_rocker2_pane_g4

0xb8b1,	// (0x0007610d) mp4_rocker2_pane_g5

0x0004,

0xf8dc,	// (0x0007a138) mp4_rocker2_pane_g

0x15e7,	// (0x0006be43) main_camera4_pane

0x15e7,	// (0x0006be43) main_video4_pane

0xb2cf,	// (0x00075b2b) main_video_tele_dialer_pane_t1_ParamLimits

0xb2cf,	// (0x00075b2b) main_video_tele_dialer_pane_t1

0xb2e1,	// (0x00075b3d) main_video_tele_dialer_pane_t2_ParamLimits

0xb2e1,	// (0x00075b3d) main_video_tele_dialer_pane_t2

0x0001,

0xf896,	// (0x0007a0f2) main_video_tele_dialer_pane_t_ParamLimits

0xf896,	// (0x0007a0f2) main_video_tele_dialer_pane_t

0xb8d1,	// (0x0007612d) cam4_autofocus_pane_ParamLimits

0xb8d1,	// (0x0007612d) cam4_autofocus_pane

0xb8eb,	// (0x00076147) cam4_image_uncrop_pane_ParamLimits

0xb8eb,	// (0x00076147) cam4_image_uncrop_pane

0xb902,	// (0x0007615e) cam4_indicators_pane_ParamLimits

0xb902,	// (0x0007615e) cam4_indicators_pane

0xb91e,	// (0x0007617a) main_camera4_pane_g1_ParamLimits

0xb91e,	// (0x0007617a) main_camera4_pane_g1

0xb92a,	// (0x00076186) main_camera4_pane_g2_ParamLimits

0xb92a,	// (0x00076186) main_camera4_pane_g2

0xb92a,	// (0x00076186) main_camera4_pane_g3_ParamLimits

0xb92a,	// (0x00076186) main_camera4_pane_g3

0xb936,	// (0x00076192) main_camera4_pane_g4_ParamLimits

0xb936,	// (0x00076192) main_camera4_pane_g4

0xb942,	// (0x0007619e) main_camera4_pane_g5_ParamLimits

0xb942,	// (0x0007619e) main_camera4_pane_g5

0x0005,

0xf8e7,	// (0x0007a143) main_camera4_pane_g_ParamLimits

0xf8e7,	// (0x0007a143) main_camera4_pane_g

0xb95c,	// (0x000761b8) main_camera4_pane_t1_ParamLimits

0xb95c,	// (0x000761b8) main_camera4_pane_t1

0xeaff,	// (0x0007935b) bg_tb_trans_pane_cp06

0xb9ac,	// (0x00076208) cam4_indicators_pane_g1

0xb9bd,	// (0x00076219) cam4_indicators_pane_g2

0x0002,

0xf902,	// (0x0007a15e) cam4_indicators_pane_g

0xb9db,	// (0x00076237) cam4_indicators_pane_t1

0xba05,	// (0x00076261) main_video4_pane_g1_ParamLimits

0xba05,	// (0x00076261) main_video4_pane_g1

0xba11,	// (0x0007626d) main_video4_pane_g2_ParamLimits

0xba11,	// (0x0007626d) main_video4_pane_g2

0xba1d,	// (0x00076279) main_video4_pane_g3_ParamLimits

0xba1d,	// (0x00076279) main_video4_pane_g3

0xba29,	// (0x00076285) main_video4_pane_g4_ParamLimits

0xba29,	// (0x00076285) main_video4_pane_g4

0x0004,

0xf909,	// (0x0007a165) main_video4_pane_g_ParamLimits

0xf909,	// (0x0007a165) main_video4_pane_g

0xba49,	// (0x000762a5) vid4_indicators_pane_ParamLimits

0xba49,	// (0x000762a5) vid4_indicators_pane

0xba66,	// (0x000762c2) video4_image_uncrop_cif_pane_ParamLimits

0xba66,	// (0x000762c2) video4_image_uncrop_cif_pane

0xba75,	// (0x000762d1) video4_image_uncrop_nhd_pane_ParamLimits

0xba75,	// (0x000762d1) video4_image_uncrop_nhd_pane

0xb8eb,	// (0x00076147) video4_image_uncrop_vga_pane_ParamLimits

0xb8eb,	// (0x00076147) video4_image_uncrop_vga_pane

0x1f8f,	// (0x0006c7eb) bg_tb_trans_pane_cp07

0xba8a,	// (0x000762e6) vid4_indicators_pane_g1

0xba9e,	// (0x000762fa) vid4_indicators_pane_g2

0xbab2,	// (0x0007630e) vid4_indicators_pane_g3

0x0004,

0xf914,	// (0x0007a170) vid4_indicators_pane_g

0xbadf,	// (0x0007633b) vid4_indicators_pane_t1

0xbaf6,	// (0x00076352) cam4_autofocus_pane_g1

0xbafe,	// (0x0007635a) cam4_autofocus_pane_g2

0xbb06,	// (0x00076362) cam4_autofocus_pane_g3

0x0002,

0xf91f,	// (0x0007a17b) cam4_autofocus_pane_g

0xbb0e,	// (0x0007636a) cam4_autofocus_pane_g3_copy1

0xb2ff,	// (0x00075b5b) video_down_pane_cp_t1

0xb30d,	// (0x00075b69) video_down_pane_cp_t2

0x0001,

0xf89b,	// (0x0007a0f7) video_down_pane_cp_t

0x6bc4,	// (0x00071420) popup_vitu2_window_ParamLimits

0x6bc4,	// (0x00071420) popup_vitu2_window

0xbb16,	// (0x00076372) aid_size_cell2_itu2_ParamLimits

0xbb16,	// (0x00076372) aid_size_cell2_itu2

0xbb38,	// (0x00076394) aid_size_cell_itu2_ParamLimits

0xbb38,	// (0x00076394) aid_size_cell_itu2

0x0ca8,	// (0x0006b504) bg_popup_window_pane_cp09_ParamLimits

0x0ca8,	// (0x0006b504) bg_popup_window_pane_cp09

0xbb7c,	// (0x000763d8) field_vitu2_entry_pane_ParamLimits

0xbb7c,	// (0x000763d8) field_vitu2_entry_pane

0xbb9c,	// (0x000763f8) grid_vitu2_function_pane_ParamLimits

0xbb9c,	// (0x000763f8) grid_vitu2_function_pane

0xbbe0,	// (0x0007643c) grid_vitu2_itu_pane_ParamLimits

0xbbe0,	// (0x0007643c) grid_vitu2_itu_pane

0xbc56,	// (0x000764b2) cell_vitu2_itu_pane_ParamLimits

0xbc56,	// (0x000764b2) cell_vitu2_itu_pane

0xbc6b,	// (0x000764c7) cell_vitu2_function_pane_ParamLimits

0xbc6b,	// (0x000764c7) cell_vitu2_function_pane

0x0522,	// (0x0006ad7e) bg_popup_call_pane_cp08_ParamLimits

0x0522,	// (0x0006ad7e) bg_popup_call_pane_cp08

0x053b,	// (0x0006ad97) field_vitu2_entry_pane_g1

0x0547,	// (0x0006ada3) field_vitu2_entry_pane_g2

0x0002,

0xf926,	// (0x0007a182) field_vitu2_entry_pane_g

0x5b08,	// (0x00070364) field_vitu2_entry_pane_t1_ParamLimits

0x5b08,	// (0x00070364) field_vitu2_entry_pane_t1

0x5b38,	// (0x00070394) field_vitu2_entry_pane_t2_ParamLimits

0x5b38,	// (0x00070394) field_vitu2_entry_pane_t2

0x0001,

0xf92d,	// (0x0007a189) field_vitu2_entry_pane_t_ParamLimits

0xf92d,	// (0x0007a189) field_vitu2_entry_pane_t

0xbcac,	// (0x00076508) bg_button_pane_cp010_ParamLimits

0xbcac,	// (0x00076508) bg_button_pane_cp010

0xbcba,	// (0x00076516) cell_vitu2_itu_pane_g1

0xbcd8,	// (0x00076534) cell_vitu2_itu_pane_t1_ParamLimits

0xbcd8,	// (0x00076534) cell_vitu2_itu_pane_t1

0x5b55,	// (0x000703b1) cell_vitu2_itu_pane_t2_ParamLimits

0x5b55,	// (0x000703b1) cell_vitu2_itu_pane_t2

0x0002,

0xf937,	// (0x0007a193) cell_vitu2_itu_pane_t_ParamLimits

0xf937,	// (0x0007a193) cell_vitu2_itu_pane_t

0x1f8f,	// (0x0006c7eb) bg_button_pane_cp011

0xbd2a,	// (0x00076586) cell_vitu2_function_pane_g1

0x15e7,	// (0x0006be43) main_myfav_hc_pane

0xb7a6,	// (0x00076002) popup_image3_note_pane_ParamLimits

0xb7a6,	// (0x00076002) popup_image3_note_pane

0xb7b4,	// (0x00076010) popup_image3_tool_bar_pane_ParamLimits

0xb7b4,	// (0x00076010) popup_image3_tool_bar_pane

0x5bc3,	// (0x0007041f) cell_vitu2_itu_pane_t3_ParamLimits

0x5bc3,	// (0x0007041f) cell_vitu2_itu_pane_t3

0x15e7,	// (0x0006be43) bg_popup_trans_pane

0x0569,	// (0x0006adc5) grid_image3_tool_bar_pane

0x0573,	// (0x0006adcf) bg_popup_trans_pane_g1

0x2d03,	// (0x0006d55f) bg_popup_trans_pane_g2

0x057b,	// (0x0006add7) bg_popup_trans_pane_g3

0x0583,	// (0x0006addf) bg_popup_trans_pane_g4

0x058b,	// (0x0006ade7) bg_popup_trans_pane_g5

0x0593,	// (0x0006adef) bg_popup_trans_pane_g6

0x059b,	// (0x0006adf7) bg_popup_trans_pane_g7

0x05a3,	// (0x0006adff) bg_popup_trans_pane_g8

0x2ce3,	// (0x0006d53f) bg_popup_trans_pane_g9

0x0008,

0xf93e,	// (0x0007a19a) bg_popup_trans_pane_g

0x05ab,	// (0x0006ae07) cell_image3_tool_bar_pane_ParamLimits

0x05ab,	// (0x0006ae07) cell_image3_tool_bar_pane

0xe869,	// (0x000790c5) cell_image3_tool_bar_pane_g1

0x15e7,	// (0x0006be43) bg_popup_trans_pane_cp1

0x05bf,	// (0x0006ae1b) popup_image3_note_pane_t1

0x05cd,	// (0x0006ae29) popup_image3_note_pane_t2

0x05db,	// (0x0006ae37) popup_image3_note_pane_t3

0x0002,

0xf951,	// (0x0007a1ad) popup_image3_note_pane_t

0x05e9,	// (0x0006ae45) popup_image3_note_pane_t3_copy1

0xbd3e,	// (0x0007659a) bg_myfav_hc_instruction_pane_ParamLimits

0xbd3e,	// (0x0007659a) bg_myfav_hc_instruction_pane

0xbd56,	// (0x000765b2) cell_myfav_contact_pane_ParamLimits

0xbd56,	// (0x000765b2) cell_myfav_contact_pane

0xbd70,	// (0x000765cc) cell_myfav_contact_pane_cp1_ParamLimits

0xbd70,	// (0x000765cc) cell_myfav_contact_pane_cp1

0xbd88,	// (0x000765e4) cell_myfav_contact_pane_cp2_ParamLimits

0xbd88,	// (0x000765e4) cell_myfav_contact_pane_cp2

0xbda0,	// (0x000765fc) cell_myfav_contact_pane_cp3_ParamLimits

0xbda0,	// (0x000765fc) cell_myfav_contact_pane_cp3

0xbdb7,	// (0x00076613) cell_myfav_contact_pane_cp4_ParamLimits

0xbdb7,	// (0x00076613) cell_myfav_contact_pane_cp4

0xbdcd,	// (0x00076629) cell_myfav_contact_pane_cp5_ParamLimits

0xbdcd,	// (0x00076629) cell_myfav_contact_pane_cp5

0xbde1,	// (0x0007663d) cell_myfav_contact_pane_cp6_ParamLimits

0xbde1,	// (0x0007663d) cell_myfav_contact_pane_cp6

0xbdf5,	// (0x00076651) cell_myfav_contact_pane_cp7_ParamLimits

0xbdf5,	// (0x00076651) cell_myfav_contact_pane_cp7

0x05f7,	// (0x0006ae53) listscroll_gen_pane_cp05

0xbe0d,	// (0x00076669) main_myfav_hc_pane_g1_ParamLimits

0xbe0d,	// (0x00076669) main_myfav_hc_pane_g1

0xbe25,	// (0x00076681) main_myfav_hc_pane_g2_ParamLimits

0xbe25,	// (0x00076681) main_myfav_hc_pane_g2

0x0002,

0xf958,	// (0x0007a1b4) main_myfav_hc_pane_g_ParamLimits

0xf958,	// (0x0007a1b4) main_myfav_hc_pane_g

0xbe55,	// (0x000766b1) main_myfav_hc_pane_t1_ParamLimits

0xbe55,	// (0x000766b1) main_myfav_hc_pane_t1

0x0600,	// (0x0006ae5c) main_myfav_hc_pane_t2_ParamLimits

0x0600,	// (0x0006ae5c) main_myfav_hc_pane_t2

0x0612,	// (0x0006ae6e) main_myfav_hc_pane_t3_ParamLimits

0x0612,	// (0x0006ae6e) main_myfav_hc_pane_t3

0xbe6c,	// (0x000766c8) main_myfav_hc_pane_t4_ParamLimits

0xbe6c,	// (0x000766c8) main_myfav_hc_pane_t4

0x0004,

0xf95f,	// (0x0007a1bb) main_myfav_hc_pane_t_ParamLimits

0xf95f,	// (0x0007a1bb) main_myfav_hc_pane_t

0xe869,	// (0x000790c5) bg_myfav_hc_instruction_pane_g1

0x0624,	// (0x0006ae80) cell_myfav_contact_pane_g1_ParamLimits

0x0624,	// (0x0006ae80) cell_myfav_contact_pane_g1

0x0624,	// (0x0006ae80) cell_myfav_contact_pane_g2_ParamLimits

0x0624,	// (0x0006ae80) cell_myfav_contact_pane_g2

0x0630,	// (0x0006ae8c) cell_myfav_contact_pane_g3_ParamLimits

0x0630,	// (0x0006ae8c) cell_myfav_contact_pane_g3

0xeb64,	// (0x000793c0) cell_myfav_contact_pane_g4_ParamLimits

0xeb64,	// (0x000793c0) cell_myfav_contact_pane_g4

0x063d,	// (0x0006ae99) cell_myfav_contact_pane_g5_ParamLimits

0x063d,	// (0x0006ae99) cell_myfav_contact_pane_g5

0x0004,

0xf96a,	// (0x0007a1c6) cell_myfav_contact_pane_g_ParamLimits

0xf96a,	// (0x0007a1c6) cell_myfav_contact_pane_g

0xbe3d,	// (0x00076699) main_myfav_hc_pane_g3_ParamLimits

0xbe3d,	// (0x00076699) main_myfav_hc_pane_g3

0x6ad7,	// (0x00071333) popup_adpt_find_window

0xbe96,	// (0x000766f2) afind_page_pane_ParamLimits

0xbe96,	// (0x000766f2) afind_page_pane

0xbea3,	// (0x000766ff) aid_size_cell_afind_ParamLimits

0xbea3,	// (0x000766ff) aid_size_cell_afind

0xbebd,	// (0x00076719) bg_popup_sub_pane_cp09_ParamLimits

0xbebd,	// (0x00076719) bg_popup_sub_pane_cp09

0xbeca,	// (0x00076726) find_pane_cp01_ParamLimits

0xbeca,	// (0x00076726) find_pane_cp01

0x0649,	// (0x0006aea5) grid_afind_control_pane_ParamLimits

0x0649,	// (0x0006aea5) grid_afind_control_pane

0xbed7,	// (0x00076733) grid_afind_pane_ParamLimits

0xbed7,	// (0x00076733) grid_afind_pane

0xbef3,	// (0x0007674f) cell_afind_pane_ParamLimits

0xbef3,	// (0x0007674f) cell_afind_pane

0xe869,	// (0x000790c5) afind_page_pane_g1

0xbf3b,	// (0x00076797) afind_page_pane_g2

0xbf44,	// (0x000767a0) afind_page_pane_g3

0x0002,

0xf975,	// (0x0007a1d1) afind_page_pane_g

0xbf4d,	// (0x000767a9) afind_page_pane_t1

0x065d,	// (0x0006aeb9) cell_afind_grid_control_pane_ParamLimits

0x065d,	// (0x0006aeb9) cell_afind_grid_control_pane

0x02e2,	// (0x0006ab3e) bg_button_pane_cp69_ParamLimits

0x02e2,	// (0x0006ab3e) bg_button_pane_cp69

0xbf64,	// (0x000767c0) cell_afind_pane_g1_ParamLimits

0xbf64,	// (0x000767c0) cell_afind_pane_g1

0xbf71,	// (0x000767cd) cell_afind_pane_t1_ParamLimits

0xbf71,	// (0x000767cd) cell_afind_pane_t1

0x1f7f,	// (0x0006c7db) bg_button_pane_cp72

0x066c,	// (0x0006aec8) cell_afind_grid_control_pane_g1

0x9543,	// (0x00073d9f) aid_image_placing_area_ParamLimits

0x9543,	// (0x00073d9f) aid_image_placing_area

0xee69,	// (0x000796c5) field_vitu_entry_pane_g1_ParamLimits

0xee69,	// (0x000796c5) field_vitu_entry_pane_g1

0xee75,	// (0x000796d1) field_vitu_entry_pane_g2_ParamLimits

0xee75,	// (0x000796d1) field_vitu_entry_pane_g2

0x0001,

0xf826,	// (0x0007a082) field_vitu_entry_pane_g_ParamLimits

0xf826,	// (0x0007a082) field_vitu_entry_pane_g

0xb0f4,	// (0x00075950) cell_vitu_itu_pane_g1_ParamLimits

0xb136,	// (0x00075992) cell_vitu_itu_pane_t3_ParamLimits

0xb136,	// (0x00075992) cell_vitu_itu_pane_t3

0x0288,	// (0x0006aae4) mp4_progress_pane_t1_ParamLimits

0x02a1,	// (0x0006aafd) mp4_progress_pane_t2_ParamLimits

0xf8bb,	// (0x0007a117) mp4_progress_pane_t_ParamLimits

0x02ba,	// (0x0006ab16) mup_progress_pane_cp04_ParamLimits

0xbe80,	// (0x000766dc) main_myfav_hc_pane_t5_ParamLimits

0xbe80,	// (0x000766dc) main_myfav_hc_pane_t5

0x57c2,	// (0x0007001e) aid_zoom_text_primary

0x6ad7,	// (0x00071333) popup_adpt_find_window_ParamLimits

0x1f8f,	// (0x0006c7eb) main_cam_set_pane

0xb910,	// (0x0007616c) cam4_zoom_pane_ParamLimits

0xb910,	// (0x0007616c) cam4_zoom_pane

0xbf83,	// (0x000767df) main_cam_set_pane_g1_ParamLimits

0xbf83,	// (0x000767df) main_cam_set_pane_g1

0xbf91,	// (0x000767ed) main_cam_set_pane_g2_ParamLimits

0xbf91,	// (0x000767ed) main_cam_set_pane_g2

0x0001,

0xf97c,	// (0x0007a1d8) main_cam_set_pane_g_ParamLimits

0xf97c,	// (0x0007a1d8) main_cam_set_pane_g

0xbf9d,	// (0x000767f9) main_cam_set_pane_t1_ParamLimits

0xbf9d,	// (0x000767f9) main_cam_set_pane_t1

0xbfb9,	// (0x00076815) main_cset_listscroll_pane_ParamLimits

0xbfb9,	// (0x00076815) main_cset_listscroll_pane

0xbfe4,	// (0x00076840) main_cset_slider_pane_ParamLimits

0xbfe4,	// (0x00076840) main_cset_slider_pane

0x067d,	// (0x0006aed9) main_cset_list_pane_ParamLimits

0x067d,	// (0x0006aed9) main_cset_list_pane

0x068d,	// (0x0006aee9) scroll_pane_cp028

0xc003,	// (0x0007685f) aid_area_touch_slider

0xc01f,	// (0x0007687b) cset_slider_pane

0xc049,	// (0x000768a5) main_cset_slider_pane_g1

0xc05e,	// (0x000768ba) main_cset_slider_pane_g2

0x0011,

0xf981,	// (0x0007a1dd) main_cset_slider_pane_g

0x06c6,	// (0x0006af22) main_cset_slider_pane_t1

0xc126,	// (0x00076982) main_cset_slider_pane_t2

0xc140,	// (0x0007699c) main_cset_slider_pane_t3

0xc15a,	// (0x000769b6) main_cset_slider_pane_t4

0xc178,	// (0x000769d4) main_cset_slider_pane_t5

0xc19a,	// (0x000769f6) main_cset_slider_pane_t6

0xc1b1,	// (0x00076a0d) main_cset_slider_pane_t7

0x000e,

0xf9a6,	// (0x0007a202) main_cset_slider_pane_t

0xc2bf,	// (0x00076b1b) cset_list_set_pane_ParamLimits

0xc2bf,	// (0x00076b1b) cset_list_set_pane

0xc2dc,	// (0x00076b38) aid_position_infowindow_above

0xc2e4,	// (0x00076b40) aid_position_infowindow_below

0xc2ec,	// (0x00076b48) cset_list_set_pane_g1_ParamLimits

0xc2ec,	// (0x00076b48) cset_list_set_pane_g1

0x5c10,	// (0x0007046c) cset_list_set_pane_g3_ParamLimits

0x5c10,	// (0x0007046c) cset_list_set_pane_g3

0x0001,

0xf9c5,	// (0x0007a221) cset_list_set_pane_g_ParamLimits

0xf9c5,	// (0x0007a221) cset_list_set_pane_g

0x5c1f,	// (0x0007047b) cset_list_set_pane_t1_ParamLimits

0x5c1f,	// (0x0007047b) cset_list_set_pane_t1

0x1f8f,	// (0x0006c7eb) list_highlight_pane_cp021_ParamLimits

0x1f8f,	// (0x0006c7eb) list_highlight_pane_cp021

0x3613,	// (0x0006de6f) cset_slider_pane_g1

0x3625,	// (0x0006de81) cset_slider_pane_g2

0x361c,	// (0x0006de78) cset_slider_pane_g3

0x0002,

0xf9ca,	// (0x0007a226) cset_slider_pane_g

0xc2f8,	// (0x00076b54) aid_area_touch_cam4_zoom

0xc300,	// (0x00076b5c) cam4_zoom_cont_pane

0xc308,	// (0x00076b64) cam4_zoom_pane_g1

0xc310,	// (0x00076b6c) cam4_zoom_pane_g2

0xc318,	// (0x00076b74) cam4_zoom_pane_g3

0x0002,

0xf9d1,	// (0x0007a22d) cam4_zoom_pane_g

0x0feb,	// (0x0006b847) cam4_zoom_cont_pane_g1

0x0ff4,	// (0x0006b850) cam4_zoom_cont_pane_g2

0x0ffd,	// (0x0006b859) cam4_zoom_cont_pane_g3

0x0002,

0xf9d8,	// (0x0007a234) cam4_zoom_cont_pane_g

0xb7fd,	// (0x00076059) call4_image_pane_ParamLimits

0xb7fd,	// (0x00076059) call4_image_pane

0x0320,	// (0x0006ab7c) call4_windows_conf_pane_ParamLimits

0x035f,	// (0x0006abbb) popup_call4_audio_in_window_ParamLimits

0x035f,	// (0x0006abbb) popup_call4_audio_in_window

0x15e7,	// (0x0006be43) bg_popup_call2_act_pane_cp02

0x03d5,	// (0x0006ac31) call4_list_conf_pane

0xe869,	// (0x000790c5) call4_image_pane_g1

0xe869,	// (0x000790c5) call4_image_pane_g2

0x0001,

0xf6ec,	// (0x00079f48) call4_image_pane_g

0x07a1,	// (0x0006affd) list_single_graphic_popup_conf4_pane_ParamLimits

0x07a1,	// (0x0006affd) list_single_graphic_popup_conf4_pane

0x15e7,	// (0x0006be43) list_highlight_pane_cp022

0x07b4,	// (0x0006b010) list_single_graphic_popup_conf4_pane_g1

0x32f6,	// (0x0006db52) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9df,	// (0x0007a23b) list_single_graphic_popup_conf4_pane_g

0x07bc,	// (0x0006b018) list_single_graphic_popup_conf4_pane_t1

0x7a0c,	// (0x00072268) popup_vtel_slider_window_ParamLimits

0x7a0c,	// (0x00072268) popup_vtel_slider_window

0x02d0,	// (0x0006ab2c) dialer2_ne_pane_t2_ParamLimits

0x02d0,	// (0x0006ab2c) dialer2_ne_pane_t2

0x0001,

0xf8c0,	// (0x0007a11c) dialer2_ne_pane_t_ParamLimits

0xf8c0,	// (0x0007a11c) dialer2_ne_pane_t

0x1f8f,	// (0x0006c7eb) bg_popup_sub_pane_cp010_ParamLimits

0x1f8f,	// (0x0006c7eb) bg_popup_sub_pane_cp010

0xc320,	// (0x00076b7c) popup_vtel_slider_window_g1_ParamLimits

0xc320,	// (0x00076b7c) popup_vtel_slider_window_g1

0xc32c,	// (0x00076b88) popup_vtel_slider_window_g2_ParamLimits

0xc32c,	// (0x00076b88) popup_vtel_slider_window_g2

0x0003,

0xf9e4,	// (0x0007a240) popup_vtel_slider_window_g_ParamLimits

0xf9e4,	// (0x0007a240) popup_vtel_slider_window_g

0xc374,	// (0x00076bd0) vtel_slider_pane_ParamLimits

0xc374,	// (0x00076bd0) vtel_slider_pane

0xc383,	// (0x00076bdf) vtel_slider_pane_g1_ParamLimits

0xc383,	// (0x00076bdf) vtel_slider_pane_g1

0xc390,	// (0x00076bec) vtel_slider_pane_g2_ParamLimits

0xc390,	// (0x00076bec) vtel_slider_pane_g2

0xc39d,	// (0x00076bf9) vtel_slider_pane_g3_ParamLimits

0xc39d,	// (0x00076bf9) vtel_slider_pane_g3

0xc383,	// (0x00076bdf) vtel_slider_pane_g4_ParamLimits

0xc383,	// (0x00076bdf) vtel_slider_pane_g4

0xc3aa,	// (0x00076c06) vtel_slider_pane_g5_ParamLimits

0xc3aa,	// (0x00076c06) vtel_slider_pane_g5

0x0004,

0xf9ed,	// (0x0007a249) vtel_slider_pane_g_ParamLimits

0xf9ed,	// (0x0007a249) vtel_slider_pane_g

0x15e7,	// (0x0006be43) main_gallery2_pane

0xbb5e,	// (0x000763ba) aid_size_row_itut2_dropdow_list_ParamLimits

0xbb5e,	// (0x000763ba) aid_size_row_itut2_dropdow_list

0xbbbe,	// (0x0007641a) grid_vitu2_function_top_pane_ParamLimits

0xbbbe,	// (0x0007641a) grid_vitu2_function_top_pane

0xbc14,	// (0x00076470) popup_vitu2_dropdown_list_window_ParamLimits

0xbc14,	// (0x00076470) popup_vitu2_dropdown_list_window

0xbc34,	// (0x00076490) popup_vitu2_match_list_window

0xc3b7,	// (0x00076c13) cell_vitu2_function_top_pane_ParamLimits

0xc3b7,	// (0x00076c13) cell_vitu2_function_top_pane

0xc3d7,	// (0x00076c33) cell_vitu2_function_top_pane_cp01_ParamLimits

0xc3d7,	// (0x00076c33) cell_vitu2_function_top_pane_cp01

0xc3f5,	// (0x00076c51) cell_vitu2_function_top_wide_pane_ParamLimits

0xc3f5,	// (0x00076c51) cell_vitu2_function_top_wide_pane

0x1f8f,	// (0x0006c7eb) bg_button_pane_cp012

0xc413,	// (0x00076c6f) cell_vitu2_function_top_pane_g1

0xc422,	// (0x00076c7e) bg_button_pane_cp013_ParamLimits

0xc422,	// (0x00076c7e) bg_button_pane_cp013

0xc43e,	// (0x00076c9a) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xc43e,	// (0x00076c9a) cell_vitu2_function_top_wide_pane_g1

0x6bc4,	// (0x00071420) bg_popup_sub_pane_cp20

0xc456,	// (0x00076cb2) list_vitu2_match_list_pane

0x0573,	// (0x0006adcf) bg_popup_sub_pane_cp20_g1

0x057b,	// (0x0006add7) bg_popup_sub_pane_cp20_g2

0x2d03,	// (0x0006d55f) bg_popup_sub_pane_cp20_g3

0x0583,	// (0x0006addf) bg_popup_sub_pane_cp20_g4

0x2ce3,	// (0x0006d53f) bg_popup_sub_pane_cp20_g5

0x07ee,	// (0x0006b04a) bg_popup_sub_pane_cp20_g6

0x0593,	// (0x0006adef) bg_popup_sub_pane_cp20_g7

0x059b,	// (0x0006adf7) bg_popup_sub_pane_cp20_g8

0x05a3,	// (0x0006adff) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9f8,	// (0x0007a254) bg_popup_sub_pane_cp20_g

0xc46e,	// (0x00076cca) list_vitu2_match_list_item_pane_ParamLimits

0xc46e,	// (0x00076cca) list_vitu2_match_list_item_pane

0xc480,	// (0x00076cdc) list_vitu2_match_list_item_pane_t1

0x15e7,	// (0x0006be43) bg_popup_sub_pane_cp21

0x31fb,	// (0x0006da57) grid_vitu2_dropdown_list_pane

0xc48e,	// (0x00076cea) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xc48e,	// (0x00076cea) cell_vitu2_dropdown_list_char_pane

0xc4af,	// (0x00076d0b) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xc4af,	// (0x00076d0b) cell_vitu2_dropdown_list_ctrl_pane

0x0830,	// (0x0006b08c) cell_vitu2_dropdown_list_char_pane_g1

0x0827,	// (0x0006b083) cell_vitu2_dropdown_list_char_pane_g2

0x081e,	// (0x0006b07a) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa15,	// (0x0007a271) cell_vitu2_dropdown_list_char_pane_g

0xc4db,	// (0x00076d37) cell_vitu2_dropdown_list_char_pane_t1

0xc4e9,	// (0x00076d45) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xc4e9,	// (0x00076d45) cell_vitu2_dropdown_list_ctrl_pane_g1

0xc4f9,	// (0x00076d55) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xc4f9,	// (0x00076d55) cell_vitu2_dropdown_list_ctrl_pane_g2

0xc50a,	// (0x00076d66) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xc50a,	// (0x00076d66) cell_vitu2_dropdown_list_ctrl_pane_g3

0xc51a,	// (0x00076d76) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xc51a,	// (0x00076d76) cell_vitu2_dropdown_list_ctrl_pane_g4

0xeaff,	// (0x0007935b) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xeaff,	// (0x0007935b) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa1c,	// (0x0007a278) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa1c,	// (0x0007a278) cell_vitu2_dropdown_list_ctrl_pane_g

0xc536,	// (0x00076d92) aid_size_cell_gallery2_ParamLimits

0xc536,	// (0x00076d92) aid_size_cell_gallery2

0xc544,	// (0x00076da0) grid_gallery2_pane_ParamLimits

0xc544,	// (0x00076da0) grid_gallery2_pane

0xc553,	// (0x00076daf) scroll_pane_cp029_ParamLimits

0xc553,	// (0x00076daf) scroll_pane_cp029

0xc55f,	// (0x00076dbb) cell_gallery2_pane_ParamLimits

0xc55f,	// (0x00076dbb) cell_gallery2_pane

0x0839,	// (0x0006b095) cell_gallery2_pane_g2

0xc590,	// (0x00076dec) cell_gallery2_pane_g3

0x0843,	// (0x0006b09f) cell_gallery2_pane_g4

0x084b,	// (0x0006b0a7) cell_gallery2_pane_g5

0x34cf,	// (0x0006dd2b) grid_highlight_pane_cp10

0xbc34,	// (0x00076490) popup_vitu2_match_list_window_ParamLimits

0xbc46,	// (0x000764a2) popup_vitu2_query_window_ParamLimits

0xbc46,	// (0x000764a2) popup_vitu2_query_window

0x15e7,	// (0x0006be43) bg_vitu2_candi_button_pane

0x0830,	// (0x0006b08c) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x0827,	// (0x0006b083) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x081e,	// (0x0006b07a) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x5c89,	// (0x000704e5) bg_button_pane_cp015

0xc598,	// (0x00076df4) bg_button_pane_cp016

0xc5ab,	// (0x00076e07) bg_button_pane_cp017

0x491a,	// (0x0006f176) bg_popup_sub_pane_cp22

0x0853,	// (0x0006b0af) popup_vitu2_query_window_g1

0xc5cf,	// (0x00076e2b) popup_vitu2_query_window_g2

0x0002,

0xfa27,	// (0x0007a283) popup_vitu2_query_window_g

0x5cc8,	// (0x00070524) popup_vitu2_query_window_t1_ParamLimits

0x5cc8,	// (0x00070524) popup_vitu2_query_window_t1

0x5cfb,	// (0x00070557) popup_vitu2_query_window_t2_ParamLimits

0x5cfb,	// (0x00070557) popup_vitu2_query_window_t2

0x5d0d,	// (0x00070569) popup_vitu2_query_window_t3_ParamLimits

0x5d0d,	// (0x00070569) popup_vitu2_query_window_t3

0xc5e0,	// (0x00076e3c) popup_vitu2_query_window_t4_ParamLimits

0xc5e0,	// (0x00076e3c) popup_vitu2_query_window_t4

0xc601,	// (0x00076e5d) popup_vitu2_query_window_t5_ParamLimits

0xc601,	// (0x00076e5d) popup_vitu2_query_window_t5

0x0006,

0xfa2e,	// (0x0007a28a) popup_vitu2_query_window_t_ParamLimits

0xfa2e,	// (0x0007a28a) popup_vitu2_query_window_t

0x0675,	// (0x0006aed1) main_cset_text_pane

0xc003,	// (0x0007685f) aid_area_touch_slider_ParamLimits

0xc01f,	// (0x0007687b) cset_slider_pane_ParamLimits

0xc049,	// (0x000768a5) main_cset_slider_pane_g1_ParamLimits

0xc05e,	// (0x000768ba) main_cset_slider_pane_g2_ParamLimits

0x0696,	// (0x0006aef2) main_cset_slider_pane_g3_ParamLimits

0x0696,	// (0x0006aef2) main_cset_slider_pane_g3

0xc073,	// (0x000768cf) main_cset_slider_pane_g4_ParamLimits

0xc073,	// (0x000768cf) main_cset_slider_pane_g4

0xc082,	// (0x000768de) main_cset_slider_pane_g5_ParamLimits

0xc082,	// (0x000768de) main_cset_slider_pane_g5

0xc090,	// (0x000768ec) main_cset_slider_pane_g6_ParamLimits

0xc090,	// (0x000768ec) main_cset_slider_pane_g6

0xf981,	// (0x0007a1dd) main_cset_slider_pane_g_ParamLimits

0x06c6,	// (0x0006af22) main_cset_slider_pane_t1_ParamLimits

0xc126,	// (0x00076982) main_cset_slider_pane_t2_ParamLimits

0xc140,	// (0x0007699c) main_cset_slider_pane_t3_ParamLimits

0xc15a,	// (0x000769b6) main_cset_slider_pane_t4_ParamLimits

0xc178,	// (0x000769d4) main_cset_slider_pane_t5_ParamLimits

0xc19a,	// (0x000769f6) main_cset_slider_pane_t6_ParamLimits

0xc1b1,	// (0x00076a0d) main_cset_slider_pane_t7_ParamLimits

0xc1df,	// (0x00076a3b) main_cset_slider_pane_t8_ParamLimits

0xc1df,	// (0x00076a3b) main_cset_slider_pane_t8

0xc207,	// (0x00076a63) main_cset_slider_pane_t9_ParamLimits

0xc207,	// (0x00076a63) main_cset_slider_pane_t9

0xc22f,	// (0x00076a8b) main_cset_slider_pane_t10_ParamLimits

0xc22f,	// (0x00076a8b) main_cset_slider_pane_t10

0xc257,	// (0x00076ab3) main_cset_slider_pane_t11_ParamLimits

0xc257,	// (0x00076ab3) main_cset_slider_pane_t11

0xc281,	// (0x00076add) main_cset_slider_pane_t12_ParamLimits

0xc281,	// (0x00076add) main_cset_slider_pane_t12

0xc2a0,	// (0x00076afc) main_cset_slider_pane_t13_ParamLimits

0xc2a0,	// (0x00076afc) main_cset_slider_pane_t13

0xf9a6,	// (0x0007a202) main_cset_slider_pane_t_ParamLimits

0x15e7,	// (0x0006be43) bg_popup_sub_pane_cp011

0x085f,	// (0x0006b0bb) main_cset_text_pane_g1

0x0867,	// (0x0006b0c3) main_cset_text_pane_t1

0x0875,	// (0x0006b0d1) main_cset_text_pane_t2

0x0883,	// (0x0006b0df) main_cset_text_pane_t3

0x0891,	// (0x0006b0ed) main_cset_text_pane_t4

0x089f,	// (0x0006b0fb) main_cset_text_pane_t5

0x08ad,	// (0x0006b109) main_cset_text_pane_t6

0x08bb,	// (0x0006b117) main_cset_text_pane_t7

0x0006,

0xfa3d,	// (0x0007a299) main_cset_text_pane_t

0x15e7,	// (0x0006be43) main_cam4_burst_pane

0x15e7,	// (0x0006be43) main_cam5_pane

0x2e26,	// (0x0006d682) bg_button_pane_cp019

0xbf5b,	// (0x000767b7) bg_button_pane_cp020

0x06a2,	// (0x0006aefe) main_cset_slider_pane_g7_ParamLimits

0x06a2,	// (0x0006aefe) main_cset_slider_pane_g7

0x06ae,	// (0x0006af0a) main_cset_slider_pane_g8_ParamLimits

0x06ae,	// (0x0006af0a) main_cset_slider_pane_g8

0xc0a6,	// (0x00076902) main_cset_slider_pane_g9_ParamLimits

0xc0a6,	// (0x00076902) main_cset_slider_pane_g9

0xc0b2,	// (0x0007690e) main_cset_slider_pane_g10_ParamLimits

0xc0b2,	// (0x0007690e) main_cset_slider_pane_g10

0xc0be,	// (0x0007691a) main_cset_slider_pane_g11_ParamLimits

0xc0be,	// (0x0007691a) main_cset_slider_pane_g11

0xc0ca,	// (0x00076926) main_cset_slider_pane_g12_ParamLimits

0xc0ca,	// (0x00076926) main_cset_slider_pane_g12

0xc0d6,	// (0x00076932) main_cset_slider_pane_g13_ParamLimits

0xc0d6,	// (0x00076932) main_cset_slider_pane_g13

0xc0e4,	// (0x00076940) main_cset_slider_pane_g14_ParamLimits

0xc0e4,	// (0x00076940) main_cset_slider_pane_g14

0xc0f2,	// (0x0007694e) main_cset_slider_pane_g15_ParamLimits

0xc0f2,	// (0x0007694e) main_cset_slider_pane_g15

0x06f4,	// (0x0006af50) main_cset_slider_pane_t14_ParamLimits

0x06f4,	// (0x0006af50) main_cset_slider_pane_t14

0x072d,	// (0x0006af89) main_cset_slider_pane_t15_ParamLimits

0x072d,	// (0x0006af89) main_cset_slider_pane_t15

0xc622,	// (0x00076e7e) aid_cam4_burst_size_cell_ParamLimits

0xc622,	// (0x00076e7e) aid_cam4_burst_size_cell

0xc63e,	// (0x00076e9a) grid_cam4_burst_pane_ParamLimits

0xc63e,	// (0x00076e9a) grid_cam4_burst_pane

0xc66e,	// (0x00076eca) linegrid_cam4_burst_pane_ParamLimits

0xc66e,	// (0x00076eca) linegrid_cam4_burst_pane

0xc690,	// (0x00076eec) scroll_pane_cp30_ParamLimits

0xc690,	// (0x00076eec) scroll_pane_cp30

0xc69c,	// (0x00076ef8) cell_cam4_burst_pane_ParamLimits

0xc69c,	// (0x00076ef8) cell_cam4_burst_pane

0x08d5,	// (0x0006b131) linegrid_cam4_burst_pane_g1_ParamLimits

0x08d5,	// (0x0006b131) linegrid_cam4_burst_pane_g1

0xc6d8,	// (0x00076f34) linegrid_cam4_burst_pane_g2_ParamLimits

0xc6d8,	// (0x00076f34) linegrid_cam4_burst_pane_g2

0x08e2,	// (0x0006b13e) linegrid_cam4_burst_pane_g3_ParamLimits

0x08e2,	// (0x0006b13e) linegrid_cam4_burst_pane_g3

0x0002,

0xfa4c,	// (0x0007a2a8) linegrid_cam4_burst_pane_g_ParamLimits

0xfa4c,	// (0x0007a2a8) linegrid_cam4_burst_pane_g

0xc6e9,	// (0x00076f45) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xc6e9,	// (0x00076f45) linegrid_cam4_burst_pane_g3_copy1

0x08ef,	// (0x0006b14b) linegrid_cam4_burst_pane_g4_ParamLimits

0x08ef,	// (0x0006b14b) linegrid_cam4_burst_pane_g4

0xc703,	// (0x00076f5f) linegrid_cam4_burst_pane_g5_ParamLimits

0xc703,	// (0x00076f5f) linegrid_cam4_burst_pane_g5

0xc714,	// (0x00076f70) linegrid_cam4_burst_pane_g6_ParamLimits

0xc714,	// (0x00076f70) linegrid_cam4_burst_pane_g6

0x08fc,	// (0x0006b158) linegrid_cam4_burst_pane_g7_ParamLimits

0x08fc,	// (0x0006b158) linegrid_cam4_burst_pane_g7

0xc725,	// (0x00076f81) cell_cam4_burst_pane_g1

0x0915,	// (0x0006b171) main_cam5_pane_t1_ParamLimits

0x0915,	// (0x0006b171) main_cam5_pane_t1

0x0927,	// (0x0006b183) main_cam5_pane_t2_ParamLimits

0x0927,	// (0x0006b183) main_cam5_pane_t2

0x0939,	// (0x0006b195) main_cam5_pane_t3_ParamLimits

0x0939,	// (0x0006b195) main_cam5_pane_t3

0x094b,	// (0x0006b1a7) main_cam5_pane_t4_ParamLimits

0x094b,	// (0x0006b1a7) main_cam5_pane_t4

0x0961,	// (0x0006b1bd) main_cam5_pane_t5_ParamLimits

0x0961,	// (0x0006b1bd) main_cam5_pane_t5

0x0973,	// (0x0006b1cf) main_cam5_pane_t6_ParamLimits

0x0973,	// (0x0006b1cf) main_cam5_pane_t6

0x0987,	// (0x0006b1e3) main_cam5_pane_t7_ParamLimits

0x0987,	// (0x0006b1e3) main_cam5_pane_t7

0x0999,	// (0x0006b1f5) main_cam5_pane_t8_ParamLimits

0x0999,	// (0x0006b1f5) main_cam5_pane_t8

0x09b5,	// (0x0006b211) main_cam5_pane_t9_ParamLimits

0x09b5,	// (0x0006b211) main_cam5_pane_t9

0x09c7,	// (0x0006b223) main_cam5_pane_t10_ParamLimits

0x09c7,	// (0x0006b223) main_cam5_pane_t10

0x09d9,	// (0x0006b235) main_cam5_pane_t11_ParamLimits

0x09d9,	// (0x0006b235) main_cam5_pane_t11

0x09eb,	// (0x0006b247) main_cam5_pane_t12_ParamLimits

0x09eb,	// (0x0006b247) main_cam5_pane_t12

0x0a00,	// (0x0006b25c) main_cam5_pane_t13_ParamLimits

0x0a00,	// (0x0006b25c) main_cam5_pane_t13

0x000c,

0xfa58,	// (0x0007a2b4) main_cam5_pane_t_ParamLimits

0xfa58,	// (0x0007a2b4) main_cam5_pane_t

0x6b8d,	// (0x000713e9) popup_scut_keymap_window_ParamLimits

0x6b8d,	// (0x000713e9) popup_scut_keymap_window

0xc738,	// (0x00076f94) aid_size_cell_brow_shortcut

0x34cf,	// (0x0006dd2b) bg_popup_window_pane_cp010

0xc744,	// (0x00076fa0) grid_scut_pane

0xc750,	// (0x00076fac) cell_scut_pane_ParamLimits

0xc750,	// (0x00076fac) cell_scut_pane

0xc767,	// (0x00076fc3) cell_scut_pane_g1

0x0a1d,	// (0x0006b279) cell_scut_pane_t1

0x0a2c,	// (0x0006b288) cell_scut_pane_t2

0xc770,	// (0x00076fcc) cell_scut_pane_t3

0x0002,

0xfa73,	// (0x0007a2cf) cell_scut_pane_t

0xa752,	// (0x00074fae) main_mup3_pane_g8_ParamLimits

0xa752,	// (0x00074fae) main_mup3_pane_g8

0xbb6c,	// (0x000763c8) area_vitu2_query_pane_ParamLimits

0xbb6c,	// (0x000763c8) area_vitu2_query_pane

0x5c9b,	// (0x000704f7) input_focus_pane_cp08

0x0a3b,	// (0x0006b297) area_vitu2_query_pane_g1

0x5d8b,	// (0x000705e7) area_vitu2_query_pane_g2

0x0001,

0xfa7a,	// (0x0007a2d6) area_vitu2_query_pane_g

0xc77e,	// (0x00076fda) area_vitu2_query_pane_t1_ParamLimits

0xc77e,	// (0x00076fda) area_vitu2_query_pane_t1

0xc792,	// (0x00076fee) area_vitu2_query_pane_t2_ParamLimits

0xc792,	// (0x00076fee) area_vitu2_query_pane_t2

0x5d9c,	// (0x000705f8) area_vitu2_query_pane_t3_ParamLimits

0x5d9c,	// (0x000705f8) area_vitu2_query_pane_t3

0x5dc4,	// (0x00070620) area_vitu2_query_pane_t4_ParamLimits

0x5dc4,	// (0x00070620) area_vitu2_query_pane_t4

0x5dec,	// (0x00070648) area_vitu2_query_pane_t5_ParamLimits

0x5dec,	// (0x00070648) area_vitu2_query_pane_t5

0x5e14,	// (0x00070670) area_vitu2_query_pane_t6_ParamLimits

0x5e14,	// (0x00070670) area_vitu2_query_pane_t6

0x0006,

0xfa7f,	// (0x0007a2db) area_vitu2_query_pane_t_ParamLimits

0xfa7f,	// (0x0007a2db) area_vitu2_query_pane_t

0xc7a6,	// (0x00077002) bg_button_pane_cp018

0xc7b4,	// (0x00077010) bg_button_pane_cp021

0x5e60,	// (0x000706bc) bg_button_pane_cp022

0x5e71,	// (0x000706cd) input_focus_pane_cp09

0x8c2e,	// (0x0007348a) aid_size_touch_mv_arrow_left

0x8c59,	// (0x000734b5) aid_size_touch_mv_arrow_right

0xc10a,	// (0x00076966) main_cset_slider_pane_g16_ParamLimits

0xc10a,	// (0x00076966) main_cset_slider_pane_g16

0xc118,	// (0x00076974) main_cset_slider_pane_g17_ParamLimits

0xc118,	// (0x00076974) main_cset_slider_pane_g17

0xc725,	// (0x00076f81) cell_cam4_burst_pane_g1_ParamLimits

0x15e7,	// (0x0006be43) compa_mode_pane

0xc338,	// (0x00076b94) popup_vtel_slider_window_g3_ParamLimits

0xc338,	// (0x00076b94) popup_vtel_slider_window_g3

0xc34c,	// (0x00076ba8) popup_vtel_slider_window_g4_ParamLimits

0xc34c,	// (0x00076ba8) popup_vtel_slider_window_g4

0xc360,	// (0x00076bbc) popup_vtel_slider_window_t1_ParamLimits

0xc360,	// (0x00076bbc) popup_vtel_slider_window_t1

0x15e7,	// (0x0006be43) main_cl_pane

0x9a54,	// (0x000742b0) popup_imed_adjust2_window_ParamLimits

0x491a,	// (0x0006f176) bg_tb_trans_pane_cp05_ParamLimits

0xed9e,	// (0x000795fa) popup_imed_adjust2_window_g1_ParamLimits

0xedad,	// (0x00079609) popup_imed_adjust2_window_g2_ParamLimits

0xedad,	// (0x00079609) popup_imed_adjust2_window_g2

0xedb9,	// (0x00079615) popup_imed_adjust2_window_g3_ParamLimits

0xedb9,	// (0x00079615) popup_imed_adjust2_window_g3

0x0002,

0xf7ea,	// (0x0007a046) popup_imed_adjust2_window_g_ParamLimits

0xf7ea,	// (0x0007a046) popup_imed_adjust2_window_g

0xedc5,	// (0x00079621) popup_imed_adjust2_window_t1_ParamLimits

0xeddd,	// (0x00079639) slider_imed_adjust_pane_ParamLimits

0xedf1,	// (0x0007964d) slider_imed_adjust_pane_g1_ParamLimits

0xee01,	// (0x0007965d) slider_imed_adjust_pane_g2_ParamLimits

0xee11,	// (0x0007966d) slider_imed_adjust_pane_g3_ParamLimits

0xee22,	// (0x0007967e) slider_imed_adjust_pane_g4_ParamLimits

0xf7f1,	// (0x0007a04d) slider_imed_adjust_pane_g_ParamLimits

0xb8b9,	// (0x00076115) aid_touch_area_cam4_ParamLimits

0xb8b9,	// (0x00076115) aid_touch_area_cam4

0xb8c9,	// (0x00076125) battery_pane_cp01

0xb950,	// (0x000761ac) main_camera4_pane_g6_ParamLimits

0xb950,	// (0x000761ac) main_camera4_pane_g6

0xb96e,	// (0x000761ca) main_camera4_pane_t2_ParamLimits

0xb96e,	// (0x000761ca) main_camera4_pane_t2

0x0001,

0xf8f4,	// (0x0007a150) main_camera4_pane_t_ParamLimits

0xf8f4,	// (0x0007a150) main_camera4_pane_t

0xb9f5,	// (0x00076251) aid_touch_area_vid4_ParamLimits

0xb9f5,	// (0x00076251) aid_touch_area_vid4

0xba35,	// (0x00076291) main_video4_pane_g5_ParamLimits

0xba35,	// (0x00076291) main_video4_pane_g5

0xba57,	// (0x000762b3) vid4_progress_pane_ParamLimits

0xba57,	// (0x000762b3) vid4_progress_pane

0x06ba,	// (0x0006af16) main_cset_slider_pane_g18_ParamLimits

0x06ba,	// (0x0006af16) main_cset_slider_pane_g18

0x0909,	// (0x0006b165) cell_cam4_burst_pane_g2_ParamLimits

0x0909,	// (0x0006b165) cell_cam4_burst_pane_g2

0x0001,

0xfa53,	// (0x0007a2af) cell_cam4_burst_pane_g_ParamLimits

0xfa53,	// (0x0007a2af) cell_cam4_burst_pane_g

0xc7c0,	// (0x0007701c) bg_cl_pane_ParamLimits

0xc7c0,	// (0x0007701c) bg_cl_pane

0xc7cc,	// (0x00077028) cl_header_pane_ParamLimits

0xc7cc,	// (0x00077028) cl_header_pane

0xc7d8,	// (0x00077034) cl_listscroll_pane_ParamLimits

0xc7d8,	// (0x00077034) cl_listscroll_pane

0x0a47,	// (0x0006b2a3) bg_cl_pane_g1

0x0a4f,	// (0x0006b2ab) bg_cl_pane_g2

0x0a57,	// (0x0006b2b3) bg_cl_pane_g3

0x0a5f,	// (0x0006b2bb) bg_cl_pane_g4

0x0a67,	// (0x0006b2c3) bg_cl_pane_g5

0x0a6f,	// (0x0006b2cb) bg_cl_pane_g6

0x0a77,	// (0x0006b2d3) bg_cl_pane_g7

0x0a7f,	// (0x0006b2db) bg_cl_pane_g8

0x0a87,	// (0x0006b2e3) bg_cl_pane_g9

0x0008,

0xfa8e,	// (0x0007a2ea) bg_cl_pane_g

0xc7e4,	// (0x00077040) aid_height_cl_leading_ParamLimits

0xc7e4,	// (0x00077040) aid_height_cl_leading

0xc7f0,	// (0x0007704c) aid_height_cl_text_ParamLimits

0xc7f0,	// (0x0007704c) aid_height_cl_text

0x6bc4,	// (0x00071420) bg_cl_header_pane_ParamLimits

0x6bc4,	// (0x00071420) bg_cl_header_pane

0xc808,	// (0x00077064) cl_header_pane_g1_ParamLimits

0xc808,	// (0x00077064) cl_header_pane_g1

0xc815,	// (0x00077071) cl_header_pane_t1_ParamLimits

0xc815,	// (0x00077071) cl_header_pane_t1

0x0a8f,	// (0x0006b2eb) cl_list_pane

0x068d,	// (0x0006aee9) hc_scroll_pane_cp01

0x2ce3,	// (0x0006d53f) bg_cl_header_pane_g1

0x0573,	// (0x0006adcf) bg_cl_header_pane_g2

0x2d03,	// (0x0006d55f) bg_cl_header_pane_g3

0x0583,	// (0x0006addf) bg_cl_header_pane_g4

0x057b,	// (0x0006add7) bg_cl_header_pane_g5

0x07ee,	// (0x0006b04a) bg_cl_header_pane_g6

0x059b,	// (0x0006adf7) bg_cl_header_pane_g7

0x05a3,	// (0x0006adff) bg_cl_header_pane_g8

0x0593,	// (0x0006adef) bg_cl_header_pane_g9

0x0008,

0xfaa1,	// (0x0007a2fd) bg_cl_header_pane_g

0xc827,	// (0x00077083) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xc827,	// (0x00077083) hc_cl_list_double_graphic_heading_pane

0xc83e,	// (0x0007709a) hc_cl_list_single_graphic_pane_ParamLimits

0xc83e,	// (0x0007709a) hc_cl_list_single_graphic_pane

0xc85e,	// (0x000770ba) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xc85e,	// (0x000770ba) hc_cl_list_single_graphic_pane_g1

0xc86a,	// (0x000770c6) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xc86a,	// (0x000770c6) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfab4,	// (0x0007a310) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfab4,	// (0x0007a310) hc_cl_list_single_graphic_pane_g

0xc87e,	// (0x000770da) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xc87e,	// (0x000770da) hc_cl_list_single_graphic_pane_t1

0xc85e,	// (0x000770ba) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xc85e,	// (0x000770ba) hc_cl_list_double_graphic_heading_pane_g1

0xc893,	// (0x000770ef) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xc893,	// (0x000770ef) hc_cl_list_double_graphic_heading_pane_g2

0xc8a7,	// (0x00077103) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xc8a7,	// (0x00077103) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfab9,	// (0x0007a315) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfab9,	// (0x0007a315) hc_cl_list_double_graphic_heading_pane_g

0xc8bb,	// (0x00077117) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xc8bb,	// (0x00077117) hc_cl_list_double_graphic_heading_pane_t1

0xc8d0,	// (0x0007712c) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xc8d0,	// (0x0007712c) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfac0,	// (0x0007a31c) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfac0,	// (0x0007a31c) hc_cl_list_double_graphic_heading_pane_t

0xc8ed,	// (0x00077149) vid4_progress_pane_g1

0xc8ff,	// (0x0007715b) vid4_progress_pane_g2

0xc911,	// (0x0007716d) vid4_progress_pane_g3

0xc91d,	// (0x00077179) vid4_progress_pane_g4

0x0004,

0xfac5,	// (0x0007a321) vid4_progress_pane_g

0xc93b,	// (0x00077197) vid4_progress_pane_t1

0xc950,	// (0x000771ac) vid4_progress_pane_t2

0x0002,

0xfad0,	// (0x0007a32c) vid4_progress_pane_t

0xc97b,	// (0x000771d7) wait_bar_pane_cp07

0xe65a,	// (0x00078eb6) blid_firmament_pane_ParamLimits

0xe69d,	// (0x00078ef9) popup_blid_sat_info2_window_g1

0xe6c1,	// (0x00078f1d) popup_blid_sat_info2_window_t3

0xe6cf,	// (0x00078f2b) popup_blid_sat_info2_window_t4

0xe6dd,	// (0x00078f39) popup_blid_sat_info2_window_t5

0xe6eb,	// (0x00078f47) popup_blid_sat_info2_window_t6

0xe6fb,	// (0x00078f57) popup_blid_sat_info2_window_t7

0xe709,	// (0x00078f65) popup_blid_sat_info2_window_t8

0xe717,	// (0x00078f73) popup_blid_sat_info2_window_t9

0xe725,	// (0x00078f81) popup_blid_sat_info2_window_t10

0xe7e9,	// (0x00079045) aid_firma_cardinal_ParamLimits

0xe7fd,	// (0x00079059) blid_firmament_pane_t1_ParamLimits

0xe814,	// (0x00079070) blid_firmament_pane_t2_ParamLimits

0xe82b,	// (0x00079087) blid_firmament_pane_t3_ParamLimits

0xe842,	// (0x0007909e) blid_firmament_pane_t4_ParamLimits

0xf6e3,	// (0x00079f3f) blid_firmament_pane_t_ParamLimits

0xe859,	// (0x000790b5) blid_sat_info_pane_ParamLimits

0x1f8f,	// (0x0006c7eb) main_cam_set_pane_ParamLimits

0xaf0d,	// (0x00075769) aid_size_cell_colour_35_ParamLimits

0xaf27,	// (0x00075783) aid_size_cell_colour_112_ParamLimits

0xaf3e,	// (0x0007579a) aid_size_cell_effect_ParamLimits

0x1f8f,	// (0x0006c7eb) bg_tb_trans_pane_cp02_ParamLimits

0x3033,	// (0x0006d88f) heading_imed_pane_ParamLimits

0xaf58,	// (0x000757b4) listscroll_imed_pane_ParamLimits

0x3f44,	// (0x0006e7a0) popup_call2_audio_first_window_g5_ParamLimits

0x3f44,	// (0x0006e7a0) popup_call2_audio_first_window_g5

0xb676,	// (0x00075ed2) aid_size_touch_image3_arrow_left_ParamLimits

0xb676,	// (0x00075ed2) aid_size_touch_image3_arrow_left

0xb68c,	// (0x00075ee8) aid_size_touch_image3_arrow_right_ParamLimits

0xb68c,	// (0x00075ee8) aid_size_touch_image3_arrow_right

0xc966,	// (0x000771c2) vid4_progress_pane_t3

0xb1ff,	// (0x00075a5b) main_hwr_training_symbol_option_pane_ParamLimits

0xb1ff,	// (0x00075a5b) main_hwr_training_symbol_option_pane

0xf08b,	// (0x000798e7) popup_hwr_training_preview_window_ParamLimits

0xf08b,	// (0x000798e7) popup_hwr_training_preview_window

0xb260,	// (0x00075abc) hwr_training_navi_pane_g5_ParamLimits

0xb260,	// (0x00075abc) hwr_training_navi_pane_g5

0x0561,	// (0x0006adbd) popup_char_count_window

0x6bc4,	// (0x00071420) bg_popup_sub_pane_cp20_ParamLimits

0xc456,	// (0x00076cb2) list_vitu2_match_list_pane_ParamLimits

0xc462,	// (0x00076cbe) vitu2_page_scroll_pane_ParamLimits

0xc462,	// (0x00076cbe) vitu2_page_scroll_pane

0x0b0e,	// (0x0006b36a) list_single_hwr_training_symbol_option_pane_ParamLimits

0x0b0e,	// (0x0006b36a) list_single_hwr_training_symbol_option_pane

0x0b21,	// (0x0006b37d) list_single_hwr_training_symbol_option_pane_g1

0x0b29,	// (0x0006b385) list_single_hwr_training_symbol_option_pane_t1

0x0b37,	// (0x0006b393) bg_button_pane_cp023

0x0b40,	// (0x0006b39c) bg_button_pane_cp024

0xc99c,	// (0x000771f8) vitu2_page_scroll_pane_g1

0xc9a4,	// (0x00077200) vitu2_page_scroll_pane_g2

0x0001,

0xfad7,	// (0x0007a333) vitu2_page_scroll_pane_g

0xc9ac,	// (0x00077208) vitu2_page_scroll_pane_t1

0xe5ba,	// (0x00078e16) popup_char_count_window_g1

0x0b73,	// (0x0006b3cf) popup_char_count_window_g2

0x0b7c,	// (0x0006b3d8) popup_char_count_window_g3

0x0002,

0xfadc,	// (0x0007a338) popup_char_count_window_g

0x0b85,	// (0x0006b3e1) popup_char_count_window_t1

0x15e7,	// (0x0006be43) main_vded2_pane

0xed8a,	// (0x000795e6) aid_size_cell_imed_line

0xed94,	// (0x000795f0) grid_imed_line_width_pane

0xbac3,	// (0x0007631f) vid4_indicators_pane_g4

0x0b93,	// (0x0006b3ef) cell_imed_line_width_pane_ParamLimits

0x0b93,	// (0x0006b3ef) cell_imed_line_width_pane

0x0ba7,	// (0x0006b403) cell_imed_line_width_pane_g1

0xe9fb,	// (0x00079257) cell_imed_line_width_pane_g2

0x0001,

0xfae3,	// (0x0007a33f) cell_imed_line_width_pane_g

0xc9bb,	// (0x00077217) main_vded2_pane_g1_ParamLimits

0xc9bb,	// (0x00077217) main_vded2_pane_g1

0xc9c8,	// (0x00077224) main_vded2_pane_g2_ParamLimits

0xc9c8,	// (0x00077224) main_vded2_pane_g2

0x0001,

0xfae8,	// (0x0007a344) main_vded2_pane_g_ParamLimits

0xfae8,	// (0x0007a344) main_vded2_pane_g

0xc9d6,	// (0x00077232) vded2_slider_pane_ParamLimits

0xc9d6,	// (0x00077232) vded2_slider_pane

0xc9e3,	// (0x0007723f) aid_size_touch_vded2_end

0xc9ed,	// (0x00077249) aid_size_touch_vded2_playhead

0x0bb0,	// (0x0006b40c) aid_size_touch_vded2_start

0x0bb8,	// (0x0006b414) vded2_slider_bg_pane

0x0bc1,	// (0x0006b41d) vded2_slider_pane_g1

0x0bca,	// (0x0006b426) vded2_slider_pane_g2

0xc9f5,	// (0x00077251) vded2_slider_pane_g3

0x0002,

0xfaed,	// (0x0007a349) vded2_slider_pane_g

0x0bd2,	// (0x0006b42e) vded2_slider_bg_pane_g1

0x0bdb,	// (0x0006b437) vded2_slider_bg_pane_g2

0x0be4,	// (0x0006b440) vded2_slider_bg_pane_g3

0x0002,

0xfaf4,	// (0x0007a350) vded2_slider_bg_pane_g

0x92a0,	// (0x00073afc) aid_postcard_touch_down_pane_ParamLimits

0x92a0,	// (0x00073afc) aid_postcard_touch_down_pane

0x92b0,	// (0x00073b0c) aid_postcard_touch_up_pane_ParamLimits

0x92b0,	// (0x00073b0c) aid_postcard_touch_up_pane

0x15e7,	// (0x0006be43) main_blid2_pane

0x99e3,	// (0x0007423f) popup_blid2_search_window

0x15e7,	// (0x0006be43) blid2_gps_pane

0x15e7,	// (0x0006be43) blid2_navig_pane

0x15e7,	// (0x0006be43) blid2_search_pane

0x15e7,	// (0x0006be43) blid2_tripm_pane

0xc9fe,	// (0x0007725a) blid2_search_pane_g1_ParamLimits

0xc9fe,	// (0x0007725a) blid2_search_pane_g1

0xca0e,	// (0x0007726a) blid2_search_pane_t1_ParamLimits

0xca0e,	// (0x0007726a) blid2_search_pane_t1

0xca20,	// (0x0007727c) aid_size_cell_blid2_gps_ParamLimits

0xca20,	// (0x0007727c) aid_size_cell_blid2_gps

0xca30,	// (0x0007728c) blid2_gps_pane_g1_ParamLimits

0xca30,	// (0x0007728c) blid2_gps_pane_g1

0xca3c,	// (0x00077298) grid_blid2_satellite_pane_ParamLimits

0xca3c,	// (0x00077298) grid_blid2_satellite_pane

0xca4c,	// (0x000772a8) blid2_navig_pane_g1_ParamLimits

0xca4c,	// (0x000772a8) blid2_navig_pane_g1

0xca58,	// (0x000772b4) blid2_navig_pane_t1_ParamLimits

0xca58,	// (0x000772b4) blid2_navig_pane_t1

0xca6a,	// (0x000772c6) blid2_navig_pane_t2_ParamLimits

0xca6a,	// (0x000772c6) blid2_navig_pane_t2

0x0001,

0xfafb,	// (0x0007a357) blid2_navig_pane_t_ParamLimits

0xfafb,	// (0x0007a357) blid2_navig_pane_t

0xca7c,	// (0x000772d8) blid2_navig_ring_pane_ParamLimits

0xca7c,	// (0x000772d8) blid2_navig_ring_pane

0xca8c,	// (0x000772e8) blid2_speed_pane_ParamLimits

0xca8c,	// (0x000772e8) blid2_speed_pane

0xca98,	// (0x000772f4) blid2_tripm_pane_g1_ParamLimits

0xca98,	// (0x000772f4) blid2_tripm_pane_g1

0xcaa8,	// (0x00077304) blid2_tripm_pane_g2_ParamLimits

0xcaa8,	// (0x00077304) blid2_tripm_pane_g2

0xcab4,	// (0x00077310) blid2_tripm_pane_g3_ParamLimits

0xcab4,	// (0x00077310) blid2_tripm_pane_g3

0xcac0,	// (0x0007731c) blid2_tripm_pane_g4_ParamLimits

0xcac0,	// (0x0007731c) blid2_tripm_pane_g4

0xcacc,	// (0x00077328) blid2_tripm_pane_g5_ParamLimits

0xcacc,	// (0x00077328) blid2_tripm_pane_g5

0x0005,

0xfb00,	// (0x0007a35c) blid2_tripm_pane_g_ParamLimits

0xfb00,	// (0x0007a35c) blid2_tripm_pane_g

0xcae8,	// (0x00077344) blid2_tripm_pane_t1_ParamLimits

0xcae8,	// (0x00077344) blid2_tripm_pane_t1

0xcafc,	// (0x00077358) blid2_tripm_pane_t2_ParamLimits

0xcafc,	// (0x00077358) blid2_tripm_pane_t2

0xcb10,	// (0x0007736c) blid2_tripm_pane_t3_ParamLimits

0xcb10,	// (0x0007736c) blid2_tripm_pane_t3

0x0003,

0xfb0d,	// (0x0007a369) blid2_tripm_pane_t_ParamLimits

0xfb0d,	// (0x0007a369) blid2_tripm_pane_t

0xcb42,	// (0x0007739e) cell_blid2_satellite_pane_ParamLimits

0xcb42,	// (0x0007739e) cell_blid2_satellite_pane

0xcb5c,	// (0x000773b8) cell_blid2_satellite_pane_g1

0x0bed,	// (0x0006b449) cell_blid2_satellite_pane_t1

0xe869,	// (0x000790c5) blid2_speed_pane_g1

0x0bfb,	// (0x0006b457) blid2_speed_pane_t1

0x0c09,	// (0x0006b465) blid2_speed_pane_t2

0x0001,

0xfb16,	// (0x0007a372) blid2_speed_pane_t

0xe869,	// (0x000790c5) blid2_navig_ring_pane_g1

0xcb65,	// (0x000773c1) blid2_navig_ring_pane_g2

0xcb6d,	// (0x000773c9) blid2_navig_ring_pane_g3

0xcb75,	// (0x000773d1) blid2_navig_ring_pane_g4

0xcb7d,	// (0x000773d9) blid2_navig_ring_pane_g5

0x0004,

0xfb1b,	// (0x0007a377) blid2_navig_ring_pane_g

0x15e7,	// (0x0006be43) bg_popup_window_pane_cp011

0x0c17,	// (0x0006b473) popup_blid2_search_window_g1

0x0c1f,	// (0x0006b47b) popup_blid2_search_window_t1

0x0c2d,	// (0x0006b489) popup_blid2_search_window_t2

0x0001,

0xfb26,	// (0x0007a382) popup_blid2_search_window_t

0x2bf2,	// (0x0006d44e) main_browser_pane_g1

0x1d74,	// (0x0006c5d0) main_browser_pane_ParamLimits

0x1f8f,	// (0x0006c7eb) bg_button_pane_cp011_ParamLimits

0xbd2a,	// (0x00076586) cell_vitu2_function_pane_g1_ParamLimits

0x491a,	// (0x0006f176) bg_popup_sub_pane_cp22_ParamLimits

0x5c9b,	// (0x000704f7) input_focus_pane_cp08_ParamLimits

0xc5be,	// (0x00076e1a) popup_vitu2_query_button_pane_ParamLimits

0xc5be,	// (0x00076e1a) popup_vitu2_query_button_pane

0x5cb2,	// (0x0007050e) popup_vitu2_query_input_button_pane

0x0853,	// (0x0006b0af) popup_vitu2_query_window_g1_ParamLimits

0xc5cf,	// (0x00076e2b) popup_vitu2_query_window_g2_ParamLimits

0xfa27,	// (0x0007a283) popup_vitu2_query_window_g_ParamLimits

0x15e7,	// (0x0006be43) bg_button_pane_cp026

0xcb85,	// (0x000773e1) popup_vitu2_query_input_button_pane_g1

0x15e7,	// (0x0006be43) bg_button_pane_cp025

0x0c3b,	// (0x0006b497) popup_vitu2_query_button_pane_t1

0xa443,	// (0x00074c9f) main_mp3_pane_t6

0xa453,	// (0x00074caf) popup_slider_window_cp01

0xb9a4,	// (0x00076200) cam4_battery_pane

0xba82,	// (0x000762de) cam4_battery_pane_cp02

0xc8e5,	// (0x00077141) cam4_battery_pane_cp01

0xc8e5,	// (0x00077141) cam4_battery_pane_cp03

0xe869,	// (0x000790c5) cam4_battery_pane_g1

0x02c6,	// (0x0006ab22) cam4_battery_pane_g2

0x0001,

0xfb2b,	// (0x0007a387) cam4_battery_pane_g

0xe733,	// (0x00078f8f) popup_blid_sat_info2_window_t11

0x8c2e,	// (0x0007348a) aid_size_touch_mv_arrow_left_ParamLimits

0x8c59,	// (0x000734b5) aid_size_touch_mv_arrow_right_ParamLimits

0x342f,	// (0x0006dc8b) navi_pane_g1_ParamLimits

0x8c98,	// (0x000734f4) navi_pane_g2_ParamLimits

0x8cc6,	// (0x00073522) navi_pane_g3_ParamLimits

0xf3f5,	// (0x00079c51) navi_pane_g_ParamLimits

0x8d20,	// (0x0007357c) navi_pane_mv_t1_ParamLimits

0xaf64,	// (0x000757c0) grid_imed_effect_pane_ParamLimits

0x78cc,	// (0x00072128) aid_placing_vt_slider_lsc

0x2b41,	// (0x0006d39d) aid_placing_vt_slider_prt

0x1f8f,	// (0x0006c7eb) bg_tb_trans_pane_cp01_ParamLimits

0xea1f,	// (0x0007927b) popup_image_details_window_g1_ParamLimits

0xea32,	// (0x0007928e) popup_image_details_window_g2_ParamLimits

0xea47,	// (0x000792a3) popup_image_details_window_g3_ParamLimits

0xea47,	// (0x000792a3) popup_image_details_window_g3

0xf728,	// (0x00079f84) popup_image_details_window_g_ParamLimits

0xea5b,	// (0x000792b7) popup_image_details_window_t1_ParamLimits

0xea6d,	// (0x000792c9) popup_image_details_window_t2_ParamLimits

0xea86,	// (0x000792e2) popup_image_details_window_t3_ParamLimits

0xea9a,	// (0x000792f6) popup_image_details_window_t4_ParamLimits

0xeab5,	// (0x00079311) popup_image_details_window_t5_ParamLimits

0xf72f,	// (0x00079f8b) popup_image_details_window_t_ParamLimits

0xc7fc,	// (0x00077058) cl_header_name_pane_ParamLimits

0xc7fc,	// (0x00077058) cl_header_name_pane

0xcb8d,	// (0x000773e9) cl_header_name_pane_t1_ParamLimits

0xcb8d,	// (0x000773e9) cl_header_name_pane_t1

0xcba4,	// (0x00077400) cl_header_name_pane_t2_ParamLimits

0xcba4,	// (0x00077400) cl_header_name_pane_t2

0xcbce,	// (0x0007742a) cl_header_name_pane_t3_ParamLimits

0xcbce,	// (0x0007742a) cl_header_name_pane_t3

0x0002,

0xfb30,	// (0x0007a38c) cl_header_name_pane_t_ParamLimits

0xfb30,	// (0x0007a38c) cl_header_name_pane_t

0x8cf1,	// (0x0007354d) navi_pane_mv_g2_ParamLimits

0x053b,	// (0x0006ad97) field_vitu2_entry_pane_g1_ParamLimits

0x0547,	// (0x0006ada3) field_vitu2_entry_pane_g2_ParamLimits

0x0553,	// (0x0006adaf) field_vitu2_entry_pane_g3_ParamLimits

0x0553,	// (0x0006adaf) field_vitu2_entry_pane_g3

0xf926,	// (0x0007a182) field_vitu2_entry_pane_g_ParamLimits

0xbcba,	// (0x00076516) cell_vitu2_itu_pane_g1_ParamLimits

0xbcca,	// (0x00076526) cell_vitu2_itu_pane_g2_ParamLimits

0xbcca,	// (0x00076526) cell_vitu2_itu_pane_g2

0x0001,

0xf932,	// (0x0007a18e) cell_vitu2_itu_pane_g_ParamLimits

0xf932,	// (0x0007a18e) cell_vitu2_itu_pane_g

0x1f8f,	// (0x0006c7eb) bg_vkb2_func_pane_cp05_ParamLimits

0x1f8f,	// (0x0006c7eb) bg_vkb2_func_pane_cp05

0x1f8f,	// (0x0006c7eb) bg_vkb2_func_pane_cp03

0x1f8f,	// (0x0006c7eb) bg_vkb2_func_pane_cp04

0x1f8f,	// (0x0006c7eb) bg_vkb2_func_pane_cp10_ParamLimits

0x1f8f,	// (0x0006c7eb) bg_vkb2_func_pane_cp10

0x5e60,	// (0x000706bc) bg_vkb2_func_pane_cp08

0xc7a6,	// (0x00077002) bg_vkb2_func_pane_cp06

0xc7b4,	// (0x00077010) bg_vkb2_func_pane_cp07

0x0b49,	// (0x0006b3a5) bg_vkb2_func_pane_cp11_ParamLimits

0x0b49,	// (0x0006b3a5) bg_vkb2_func_pane_cp11

0x0b5e,	// (0x0006b3ba) bg_vkb2_func_pane_cp12_ParamLimits

0x0b5e,	// (0x0006b3ba) bg_vkb2_func_pane_cp12

0x15e7,	// (0x0006be43) bg_vkb2_func_pane_cp09

0x0573,	// (0x0006adcf) bg_vkb2_func_pane_g1

0x2d03,	// (0x0006d55f) bg_vkb2_func_pane_g2

0x057b,	// (0x0006add7) bg_vkb2_func_pane_g3

0x0583,	// (0x0006addf) bg_vkb2_func_pane_g4

0x07ee,	// (0x0006b04a) bg_vkb2_func_pane_g5

0x059b,	// (0x0006adf7) bg_vkb2_func_pane_g6

0x05a3,	// (0x0006adff) bg_vkb2_func_pane_g7

0x0593,	// (0x0006adef) bg_vkb2_func_pane_g8

0x2ce3,	// (0x0006d53f) bg_vkb2_func_pane_g9

0x0008,

0xfb37,	// (0x0007a393) bg_vkb2_func_pane_g

0xcada,	// (0x00077336) blid2_tripm_pane_g6_ParamLimits

0xcada,	// (0x00077336) blid2_tripm_pane_g6

0x0280,	// (0x0006aadc) mp4_progress_pane_g1

0xcb36,	// (0x00077392) blid2_tripm_values_pane_ParamLimits

0xcb36,	// (0x00077392) blid2_tripm_values_pane

0xcbf3,	// (0x0007744f) blid2_tripm_values_pane_t1

0xcc01,	// (0x0007745d) blid2_tripm_values_pane_t2

0xcc0f,	// (0x0007746b) blid2_tripm_values_pane_t3

0xcc1d,	// (0x00077479) blid2_tripm_values_pane_t4

0xcc2b,	// (0x00077487) blid2_tripm_values_pane_t5

0xcc39,	// (0x00077495) blid2_tripm_values_pane_t6

0xcc47,	// (0x000774a3) blid2_tripm_values_pane_t7

0xcc55,	// (0x000774b1) blid2_tripm_values_pane_t8

0xcc63,	// (0x000774bf) blid2_tripm_values_pane_t9

0x0008,

0xfb4a,	// (0x0007a3a6) blid2_tripm_values_pane_t

0x790c,	// (0x00072168) call_video_pane_t1_ParamLimits

0x792d,	// (0x00072189) call_video_pane_t2_ParamLimits

0xf27e,	// (0x00079ada) call_video_pane_t_ParamLimits

0x5a53,	// (0x000702af) msg_header_pane_g1_ParamLimits

0x3658,	// (0x0006deb4) msg_header_pane_g2_ParamLimits

0x3658,	// (0x0006deb4) msg_header_pane_g2

0x0001,

0xf498,	// (0x00079cf4) msg_header_pane_g_ParamLimits

0xf498,	// (0x00079cf4) msg_header_pane_g

0x1d74,	// (0x0006c5d0) main_clock2_pane_ParamLimits

0xacfa,	// (0x00075556) grid_clock2_toolbar_pane_ParamLimits

0xacfa,	// (0x00075556) grid_clock2_toolbar_pane

0xacfa,	// (0x00075556) listscroll_clock2_pane_ParamLimits

0xacfa,	// (0x00075556) listscroll_clock2_pane

0xad97,	// (0x000755f3) main_clock2_pane_t3_ParamLimits

0xad97,	// (0x000755f3) main_clock2_pane_t3

0xada9,	// (0x00075605) main_clock2_pane_t4_ParamLimits

0xada9,	// (0x00075605) main_clock2_pane_t4

0x0c49,	// (0x0006b4a5) cell_clock2_toolbar_pane

0x0c51,	// (0x0006b4ad) cell_clock2_toolbar_pane_cp01

0x0c51,	// (0x0006b4ad) cell_clock2_toolbar_pane_cp02

0x0c59,	// (0x0006b4b5) cell_clock2_toolbar_pane_cp03

0x0c61,	// (0x0006b4bd) list_clock2_pane

0x3382,	// (0x0006dbde) scroll_pane_cp10

0x0c69,	// (0x0006b4c5) list_single_clock2_pane_ParamLimits

0x0c69,	// (0x0006b4c5) list_single_clock2_pane

0x34cf,	// (0x0006dd2b) list_highlight_pane_cp08

0x0c76,	// (0x0006b4d2) list_single_clock2_pane_t1

0x0c84,	// (0x0006b4e0) list_single_clock2_pane_t2

0x0001,

0xfb5d,	// (0x0007a3b9) list_single_clock2_pane_t

0x15e7,	// (0x0006be43) bg_button_pane_cp10

0x0c92,	// (0x0006b4ee) cell_clock2_toolbar_pane_g1

0x9202,	// (0x00073a5e) aid_main_viewer_pane_g1_ParamLimits

0x9202,	// (0x00073a5e) aid_main_viewer_pane_g1

0x920e,	// (0x00073a6a) aid_main_viewer_pane_g2_ParamLimits

0x920e,	// (0x00073a6a) aid_main_viewer_pane_g2

0x921a,	// (0x00073a76) aid_main_viewer_pane_g3_ParamLimits

0x921a,	// (0x00073a76) aid_main_viewer_pane_g3

0x922b,	// (0x00073a87) aid_main_viewer_pane_g4_ParamLimits

0x922b,	// (0x00073a87) aid_main_viewer_pane_g4

0x0003,

0xf4a9,	// (0x00079d05) aid_main_viewer_pane_g_ParamLimits

0xf4a9,	// (0x00079d05) aid_main_viewer_pane_g

0x99bb,	// (0x00074217) main_calc_pane_ParamLimits

0x99c8,	// (0x00074224) main_dialer2_pane_ParamLimits

0x15e7,	// (0x0006be43) main_cam6_pane

0x15e7,	// (0x0006be43) main_vid6_pane

0xad06,	// (0x00075562) listscroll_gen_pane_cp06_ParamLimits

0xad06,	// (0x00075562) listscroll_gen_pane_cp06

0xadbb,	// (0x00075617) main_clock2_pane_t5_ParamLimits

0xadbb,	// (0x00075617) main_clock2_pane_t5

0xae0a,	// (0x00075666) aid_call2_pane_cp10_ParamLimits

0xae1c,	// (0x00075678) aid_call_pane_cp10_ParamLimits

0x3404,	// (0x0006dc60) popup_clock_analogue_window_cp10_g1_ParamLimits

0x3404,	// (0x0006dc60) popup_clock_analogue_window_cp10_g2_ParamLimits

0xae2e,	// (0x0007568a) popup_clock_analogue_window_cp10_g3_ParamLimits

0xae2e,	// (0x0007568a) popup_clock_analogue_window_cp10_g4_ParamLimits

0x3404,	// (0x0006dc60) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7df,	// (0x0007a03b) popup_clock_analogue_window_cp10_g_ParamLimits

0xae44,	// (0x000756a0) popup_clock_analogue_window_cp10_t1_ParamLimits

0xb623,	// (0x00075e7f) cell_dialer2_keypad_pane_g2_ParamLimits

0xb623,	// (0x00075e7f) cell_dialer2_keypad_pane_g2

0x0001,

0xf8c5,	// (0x0007a121) cell_dialer2_keypad_pane_g_ParamLimits

0xf8c5,	// (0x0007a121) cell_dialer2_keypad_pane_g

0xb63f,	// (0x00075e9b) cell_dialer2_keypad_pane_t1

0xbff0,	// (0x0007684c) main_cset_text2_pane_ParamLimits

0xbff0,	// (0x0007684c) main_cset_text2_pane

0x0a3b,	// (0x0006b297) area_vitu2_query_pane_g1_ParamLimits

0x5d8b,	// (0x000705e7) area_vitu2_query_pane_g2_ParamLimits

0xfa7a,	// (0x0007a2d6) area_vitu2_query_pane_g_ParamLimits

0x5e3c,	// (0x00070698) area_vitu2_query_pane_t7_ParamLimits

0x5e3c,	// (0x00070698) area_vitu2_query_pane_t7

0xc7a6,	// (0x00077002) bg_button_pane_cp018_ParamLimits

0xc7b4,	// (0x00077010) bg_button_pane_cp021_ParamLimits

0x5e60,	// (0x000706bc) bg_button_pane_cp022_ParamLimits

0x5e60,	// (0x000706bc) bg_vkb2_func_pane_cp08_ParamLimits

0xc7a6,	// (0x00077002) bg_vkb2_func_pane_cp06_ParamLimits

0xc7b4,	// (0x00077010) bg_vkb2_func_pane_cp07_ParamLimits

0x5e71,	// (0x000706cd) input_focus_pane_cp09_ParamLimits

0xcc71,	// (0x000774cd) cam6_autofocus_pane_ParamLimits

0xcc71,	// (0x000774cd) cam6_autofocus_pane

0xcc93,	// (0x000774ef) cam6_image_uncrop_pane_ParamLimits

0xcc93,	// (0x000774ef) cam6_image_uncrop_pane

0xccc0,	// (0x0007751c) cam6_indi_pane_ParamLimits

0xccc0,	// (0x0007751c) cam6_indi_pane

0xccda,	// (0x00077536) cam6_mode_pane_ParamLimits

0xccda,	// (0x00077536) cam6_mode_pane

0xccee,	// (0x0007754a) cam6_timer_pane_ParamLimits

0xccee,	// (0x0007754a) cam6_timer_pane

0xccfa,	// (0x00077556) cam6_zoom_pane_ParamLimits

0xccfa,	// (0x00077556) cam6_zoom_pane

0xcd12,	// (0x0007756e) cam6_mode_pane_g1_ParamLimits

0xcd12,	// (0x0007756e) cam6_mode_pane_g1

0xcd1e,	// (0x0007757a) cam6_mode_pane_g2_ParamLimits

0xcd1e,	// (0x0007757a) cam6_mode_pane_g2

0xcd2a,	// (0x00077586) cam6_mode_pane_g3_ParamLimits

0xcd2a,	// (0x00077586) cam6_mode_pane_g3

0xcd36,	// (0x00077592) cam6_mode_pane_g4_ParamLimits

0xcd36,	// (0x00077592) cam6_mode_pane_g4

0x0003,

0xfb62,	// (0x0007a3be) cam6_mode_pane_g_ParamLimits

0xfb62,	// (0x0007a3be) cam6_mode_pane_g

0x0ca8,	// (0x0006b504) bg_tb_trans_pane_cp08_ParamLimits

0x0ca8,	// (0x0006b504) bg_tb_trans_pane_cp08

0x0cb6,	// (0x0006b512) cam6_battery_pane_ParamLimits

0x0cb6,	// (0x0006b512) cam6_battery_pane

0x0ccc,	// (0x0006b528) cam6_indi_pane_g1_ParamLimits

0x0ccc,	// (0x0006b528) cam6_indi_pane_g1

0x0cde,	// (0x0006b53a) cam6_indi_pane_g2_ParamLimits

0x0cde,	// (0x0006b53a) cam6_indi_pane_g2

0x0cf0,	// (0x0006b54c) cam6_indi_pane_g3_ParamLimits

0x0cf0,	// (0x0006b54c) cam6_indi_pane_g3

0x0002,

0xfb6b,	// (0x0007a3c7) cam6_indi_pane_g_ParamLimits

0xfb6b,	// (0x0007a3c7) cam6_indi_pane_g

0x0d02,	// (0x0006b55e) cam6_indi_pane_t1_ParamLimits

0x0d02,	// (0x0006b55e) cam6_indi_pane_t1

0xbaf6,	// (0x00076352) cam6_autofocus_pane_g1

0xbafe,	// (0x0007635a) cam6_autofocus_pane_g2

0xbb06,	// (0x00076362) cam6_autofocus_pane_g3

0xbb0e,	// (0x0007636a) cam6_autofocus_pane_g4

0x0003,

0xfb72,	// (0x0007a3ce) cam6_autofocus_pane_g

0x0d28,	// (0x0006b584) cam6_timer_pane_g1

0x0d30,	// (0x0006b58c) cam6_timer_pane_t1

0x0d3e,	// (0x0006b59a) cam6_zoom_cont_pane

0x0d46,	// (0x0006b5a2) cam6_zoom_pane_g1

0x0d4e,	// (0x0006b5aa) cam6_zoom_pane_g2

0xcd42,	// (0x0007759e) cam6_zoom_pane_g3

0x0002,

0xfb7b,	// (0x0007a3d7) cam6_zoom_pane_g

0xe869,	// (0x000790c5) cam6_battery_pane_g1

0xe869,	// (0x000790c5) cam6_battery_pane_g2

0x0001,

0xf6ec,	// (0x00079f48) cam6_battery_pane_g

0x0d56,	// (0x0006b5b2) cam6_zoom_cont_pane_g1

0x0d5f,	// (0x0006b5bb) cam6_zoom_cont_pane_g2

0x0d68,	// (0x0006b5c4) cam6_zoom_cont_pane_g3

0x0002,

0xfb82,	// (0x0007a3de) cam6_zoom_cont_pane_g

0xcd5f,	// (0x000775bb) cam6_mode_pane_cp_ParamLimits

0xcd5f,	// (0x000775bb) cam6_mode_pane_cp

0xccfa,	// (0x00077556) cam6_zoom_pane_cp_ParamLimits

0xccfa,	// (0x00077556) cam6_zoom_pane_cp

0xcd73,	// (0x000775cf) vid6_image_uncrop_cif_pane_ParamLimits

0xcd73,	// (0x000775cf) vid6_image_uncrop_cif_pane

0xcd9f,	// (0x000775fb) vid6_image_uncrop_nhd_pane_ParamLimits

0xcd9f,	// (0x000775fb) vid6_image_uncrop_nhd_pane

0xcc93,	// (0x000774ef) vid6_image_uncrop_vga_pane_ParamLimits

0xcc93,	// (0x000774ef) vid6_image_uncrop_vga_pane

0xcdbc,	// (0x00077618) vid6_image_uncrop_wvga_pane_ParamLimits

0xcdbc,	// (0x00077618) vid6_image_uncrop_wvga_pane

0xcdd9,	// (0x00077635) vid6_indi_pane_ParamLimits

0xcdd9,	// (0x00077635) vid6_indi_pane

0x0ca8,	// (0x0006b504) bg_tb_trans_pane_cp09_ParamLimits

0x0ca8,	// (0x0006b504) bg_tb_trans_pane_cp09

0x0d80,	// (0x0006b5dc) cam6_battery_pane_cp_ParamLimits

0x0d80,	// (0x0006b5dc) cam6_battery_pane_cp

0x0d8c,	// (0x0006b5e8) vid6_indi_pane_g1_ParamLimits

0x0d8c,	// (0x0006b5e8) vid6_indi_pane_g1

0x0d9e,	// (0x0006b5fa) vid6_indi_pane_g2_ParamLimits

0x0d9e,	// (0x0006b5fa) vid6_indi_pane_g2

0x0db0,	// (0x0006b60c) vid6_indi_pane_g3_ParamLimits

0x0db0,	// (0x0006b60c) vid6_indi_pane_g3

0x0dc5,	// (0x0006b621) vid6_indi_pane_g4_ParamLimits

0x0dc5,	// (0x0006b621) vid6_indi_pane_g4

0x0dda,	// (0x0006b636) vid6_indi_pane_g5_ParamLimits

0x0dda,	// (0x0006b636) vid6_indi_pane_g5

0x0004,

0xfb89,	// (0x0007a3e5) vid6_indi_pane_g_ParamLimits

0xfb89,	// (0x0007a3e5) vid6_indi_pane_g

0x0df4,	// (0x0006b650) vid6_indi_pane_t1_ParamLimits

0x0df4,	// (0x0006b650) vid6_indi_pane_t1

0x0e0a,	// (0x0006b666) vid6_indi_pane_t2_ParamLimits

0x0e0a,	// (0x0006b666) vid6_indi_pane_t2

0x0e32,	// (0x0006b68e) vid6_indi_pane_t3_ParamLimits

0x0e32,	// (0x0006b68e) vid6_indi_pane_t3

0x0e5a,	// (0x0006b6b6) vid6_indi_pane_t4_ParamLimits

0x0e5a,	// (0x0006b6b6) vid6_indi_pane_t4

0x0003,

0xfb94,	// (0x0007a3f0) vid6_indi_pane_t_ParamLimits

0xfb94,	// (0x0007a3f0) vid6_indi_pane_t

0x0e7e,	// (0x0006b6da) wait_bar_pane_cp08

0xcdfc,	// (0x00077658) main_cset_text2_pane_t1_ParamLimits

0xcdfc,	// (0x00077658) main_cset_text2_pane_t1

0xcd4a,	// (0x000775a6) listscroll_gen_pane_cp06_t1_ParamLimits

0xcd4a,	// (0x000775a6) listscroll_gen_pane_cp06_t1

0x15e7,	// (0x0006be43) main_cam6_set_pane

0xeaff,	// (0x0007935b) bg_tb_trans_pane_cp06_ParamLimits

0xb9ac,	// (0x00076208) cam4_indicators_pane_g1_ParamLimits

0xb9bd,	// (0x00076219) cam4_indicators_pane_g2_ParamLimits

0xf902,	// (0x0007a15e) cam4_indicators_pane_g_ParamLimits

0xb9db,	// (0x00076237) cam4_indicators_pane_t1_ParamLimits

0x1f8f,	// (0x0006c7eb) bg_tb_trans_pane_cp07_ParamLimits

0xba8a,	// (0x000762e6) vid4_indicators_pane_g1_ParamLimits

0xba9e,	// (0x000762fa) vid4_indicators_pane_g2_ParamLimits

0xbab2,	// (0x0007630e) vid4_indicators_pane_g3_ParamLimits

0xbac3,	// (0x0007631f) vid4_indicators_pane_g4_ParamLimits

0xf914,	// (0x0007a170) vid4_indicators_pane_g_ParamLimits

0xbadf,	// (0x0007633b) vid4_indicators_pane_t1_ParamLimits

0xc8ed,	// (0x00077149) vid4_progress_pane_g1_ParamLimits

0xc8ff,	// (0x0007715b) vid4_progress_pane_g2_ParamLimits

0xc911,	// (0x0007716d) vid4_progress_pane_g3_ParamLimits

0xc91d,	// (0x00077179) vid4_progress_pane_g4_ParamLimits

0xfac5,	// (0x0007a321) vid4_progress_pane_g_ParamLimits

0xc93b,	// (0x00077197) vid4_progress_pane_t1_ParamLimits

0xc950,	// (0x000771ac) vid4_progress_pane_t2_ParamLimits

0xc966,	// (0x000771c2) vid4_progress_pane_t3_ParamLimits

0xfad0,	// (0x0007a32c) vid4_progress_pane_t_ParamLimits

0xc97b,	// (0x000771d7) wait_bar_pane_cp07_ParamLimits

0xce3a,	// (0x00077696) main_cam6_set_pane_g2_ParamLimits

0xce3a,	// (0x00077696) main_cam6_set_pane_g2

0xce46,	// (0x000776a2) main_cset6_listscroll_pane_ParamLimits

0xce46,	// (0x000776a2) main_cset6_listscroll_pane

0xce71,	// (0x000776cd) main_cset6_slider_pane_ParamLimits

0xce71,	// (0x000776cd) main_cset6_slider_pane

0xce7d,	// (0x000776d9) main_cset6_text2_pane_ParamLimits

0xce7d,	// (0x000776d9) main_cset6_text2_pane

0x0e8d,	// (0x0006b6e9) main_cset6_text_pane

0x0e95,	// (0x0006b6f1) main_cset_list_pane_copy1_ParamLimits

0x0e95,	// (0x0006b6f1) main_cset_list_pane_copy1

0x0ea5,	// (0x0006b701) scroll_pane_cp028_copy1

0xce90,	// (0x000776ec) cset_list_set_pane_copy1

0xceaa,	// (0x00077706) aid_position_infowindow_above_copy1

0xceb2,	// (0x0007770e) aid_position_infowindow_below_copy1

0xceba,	// (0x00077716) cset_list_set_pane_g1_copy1

0x5c10,	// (0x0007046c) cset_list_set_pane_g3_copy1_ParamLimits

0x5c10,	// (0x0007046c) cset_list_set_pane_g3_copy1

0x5c1f,	// (0x0007047b) cset_list_set_pane_t1_copy1_ParamLimits

0x5c1f,	// (0x0007047b) cset_list_set_pane_t1_copy1

0x1f8f,	// (0x0006c7eb) list_highlight_pane_cp021_copy1_ParamLimits

0x1f8f,	// (0x0006c7eb) list_highlight_pane_cp021_copy1

0x0eae,	// (0x0006b70a) cset6_slider_pane_ParamLimits

0x0eae,	// (0x0006b70a) cset6_slider_pane

0x0eda,	// (0x0006b736) main_cset6_slider_pane_g1_ParamLimits

0x0eda,	// (0x0006b736) main_cset6_slider_pane_g1

0xcec2,	// (0x0007771e) main_cset6_slider_pane_g2_ParamLimits

0xcec2,	// (0x0007771e) main_cset6_slider_pane_g2

0x06a2,	// (0x0006aefe) main_cset6_slider_pane_g3_ParamLimits

0x06a2,	// (0x0006aefe) main_cset6_slider_pane_g3

0xceea,	// (0x00077746) main_cset6_slider_pane_g4_ParamLimits

0xceea,	// (0x00077746) main_cset6_slider_pane_g4

0xcef6,	// (0x00077752) main_cset6_slider_pane_g5_ParamLimits

0xcef6,	// (0x00077752) main_cset6_slider_pane_g5

0x06a2,	// (0x0006aefe) main_cset6_slider_pane_g7_ParamLimits

0x06a2,	// (0x0006aefe) main_cset6_slider_pane_g7

0x06ae,	// (0x0006af0a) main_cset6_slider_pane_g8_ParamLimits

0x06ae,	// (0x0006af0a) main_cset6_slider_pane_g8

0xcf04,	// (0x00077760) main_cset6_slider_pane_g9_ParamLimits

0xcf04,	// (0x00077760) main_cset6_slider_pane_g9

0xcf10,	// (0x0007776c) main_cset6_slider_pane_g10_ParamLimits

0xcf10,	// (0x0007776c) main_cset6_slider_pane_g10

0xceea,	// (0x00077746) main_cset6_slider_pane_g11_ParamLimits

0xceea,	// (0x00077746) main_cset6_slider_pane_g11

0xcf1c,	// (0x00077778) main_cset6_slider_pane_g12_ParamLimits

0xcf1c,	// (0x00077778) main_cset6_slider_pane_g12

0xcf28,	// (0x00077784) main_cset6_slider_pane_g13_ParamLimits

0xcf28,	// (0x00077784) main_cset6_slider_pane_g13

0xcf36,	// (0x00077792) main_cset6_slider_pane_g14_ParamLimits

0xcf36,	// (0x00077792) main_cset6_slider_pane_g14

0xcf44,	// (0x000777a0) main_cset6_slider_pane_g15_ParamLimits

0xcf44,	// (0x000777a0) main_cset6_slider_pane_g15

0xcef6,	// (0x00077752) main_cset6_slider_pane_g16_ParamLimits

0xcef6,	// (0x00077752) main_cset6_slider_pane_g16

0xcf5c,	// (0x000777b8) main_cset6_slider_pane_g17_ParamLimits

0xcf5c,	// (0x000777b8) main_cset6_slider_pane_g17

0x0011,

0xfb9d,	// (0x0007a3f9) main_cset6_slider_pane_g_ParamLimits

0xfb9d,	// (0x0007a3f9) main_cset6_slider_pane_g

0x0f02,	// (0x0006b75e) main_cset6_slider_pane_t1_ParamLimits

0x0f02,	// (0x0006b75e) main_cset6_slider_pane_t1

0xcf6a,	// (0x000777c6) main_cset6_slider_pane_t2_ParamLimits

0xcf6a,	// (0x000777c6) main_cset6_slider_pane_t2

0xcf95,	// (0x000777f1) main_cset6_slider_pane_t3_ParamLimits

0xcf95,	// (0x000777f1) main_cset6_slider_pane_t3

0xcfc0,	// (0x0007781c) main_cset6_slider_pane_t4_ParamLimits

0xcfc0,	// (0x0007781c) main_cset6_slider_pane_t4

0xcfed,	// (0x00077849) main_cset6_slider_pane_t5_ParamLimits

0xcfed,	// (0x00077849) main_cset6_slider_pane_t5

0x0f43,	// (0x0006b79f) main_cset6_slider_pane_t7_ParamLimits

0x0f43,	// (0x0006b79f) main_cset6_slider_pane_t7

0xd01a,	// (0x00077876) main_cset6_slider_pane_t8_ParamLimits

0xd01a,	// (0x00077876) main_cset6_slider_pane_t8

0xd03e,	// (0x0007789a) main_cset6_slider_pane_t9_ParamLimits

0xd03e,	// (0x0007789a) main_cset6_slider_pane_t9

0xd062,	// (0x000778be) main_cset6_slider_pane_t10_ParamLimits

0xd062,	// (0x000778be) main_cset6_slider_pane_t10

0xd086,	// (0x000778e2) main_cset6_slider_pane_t11_ParamLimits

0xd086,	// (0x000778e2) main_cset6_slider_pane_t11

0x0f79,	// (0x0006b7d5) main_cset6_slider_pane_t14_ParamLimits

0x0f79,	// (0x0006b7d5) main_cset6_slider_pane_t14

0x0fb2,	// (0x0006b80e) main_cset6_slider_pane_t15_ParamLimits

0x0fb2,	// (0x0006b80e) main_cset6_slider_pane_t15

0x000b,

0xfbc2,	// (0x0007a41e) main_cset6_slider_pane_t_ParamLimits

0xfbc2,	// (0x0007a41e) main_cset6_slider_pane_t

0x0feb,	// (0x0006b847) cset_slider_pane_g1_copy1

0x0ff4,	// (0x0006b850) cset_slider_pane_g2_copy1

0x0ffd,	// (0x0006b859) cset_slider_pane_g3_copy1

0x15e7,	// (0x0006be43) bg_popup_sub_pane_cp011_copy1

0x1006,	// (0x0006b862) main_cset_text_pane_g1_copy1

0x0867,	// (0x0006b0c3) main_cset_text_pane_t1_copy1

0x0875,	// (0x0006b0d1) main_cset_text_pane_t2_copy1

0x0883,	// (0x0006b0df) main_cset_text_pane_t3_copy1

0x0891,	// (0x0006b0ed) main_cset_text_pane_t4_copy1

0x089f,	// (0x0006b0fb) main_cset_text_pane_t5_copy1

0x100e,	// (0x0006b86a) main_cset_text_pane_t6_copy1

0x101c,	// (0x0006b878) main_cset_text_pane_t7_copy1

0xd0ac,	// (0x00077908) main_cset_text2_pane_t1_copy1

0x1f8f,	// (0x0006c7eb) main_ncimui_pane

0x9a19,	// (0x00074275) popup_query_ncimui_window_ParamLimits

0x9a19,	// (0x00074275) popup_query_ncimui_window

0xa5ad,	// (0x00074e09) field_cale_ev2_pane_g4_ParamLimits

0xa5ad,	// (0x00074e09) field_cale_ev2_pane_g4

0xb341,	// (0x00075b9d) cell_video_dialer_keypad_pane_g2_ParamLimits

0xb341,	// (0x00075b9d) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8a0,	// (0x0007a0fc) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8a0,	// (0x0007a0fc) cell_video_dialer_keypad_pane_g

0xb359,	// (0x00075bb5) cell_video_dialer_keypad_pane_t1

0x15e7,	// (0x0006be43) bg_popup_window_pane_cp012

0x3252,	// (0x0006daae) heading_pane_cp06

0x1048,	// (0x0006b8a4) ncim_query_content_pane

0x15e7,	// (0x0006be43) bg_popup_heading_pane_cp01

0x1050,	// (0x0006b8ac) ncim_heading_pane_t1

0x105e,	// (0x0006b8ba) ncim_indicator_popup_pane

0x1070,	// (0x0006b8cc) ncim_query_button_pane

0x1084,	// (0x0006b8e0) ncim_query_content_pane_t1

0x1096,	// (0x0006b8f2) ncim_query_content_pane_t2

0x0005,

0xfc06,	// (0x0007a462) ncim_query_content_pane_t

0x10d0,	// (0x0006b92c) ncim_query_list_pane

0x10e2,	// (0x0006b93e) ncim_query_popup_pane

0x105e,	// (0x0006b8ba) ncim_indicator_popup_pane_ParamLimits

0xd20a,	// (0x00077a66) ncim_query_content_pane_g1_ParamLimits

0xd20a,	// (0x00077a66) ncim_query_content_pane_g1

0x1084,	// (0x0006b8e0) ncim_query_content_pane_t1_ParamLimits

0x1096,	// (0x0006b8f2) ncim_query_content_pane_t2_ParamLimits

0xd216,	// (0x00077a72) ncim_query_content_pane_t3_ParamLimits

0xd216,	// (0x00077a72) ncim_query_content_pane_t3

0xd233,	// (0x00077a8f) ncim_query_content_pane_t4_ParamLimits

0xd233,	// (0x00077a8f) ncim_query_content_pane_t4

0xd250,	// (0x00077aac) ncim_query_content_pane_t5_ParamLimits

0xd250,	// (0x00077aac) ncim_query_content_pane_t5

0x10a8,	// (0x0006b904) ncim_query_content_pane_t6_ParamLimits

0x10a8,	// (0x0006b904) ncim_query_content_pane_t6

0xfc06,	// (0x0007a462) ncim_query_content_pane_t_ParamLimits

0x10d0,	// (0x0006b92c) ncim_query_list_pane_ParamLimits

0x10e2,	// (0x0006b93e) ncim_query_popup_pane_ParamLimits

0x10f6,	// (0x0006b952) wait_bar_pane_cp04

0x15e7,	// (0x0006be43) input_focus_pane_cp011

0x10fe,	// (0x0006b95a) ncim_query_popup_pane_t1

0x110c,	// (0x0006b968) ncim_list_query_list_pane_ParamLimits

0x110c,	// (0x0006b968) ncim_list_query_list_pane

0x15e7,	// (0x0006be43) bg_button_pane_cp027

0x111f,	// (0x0006b97b) ncim_query_button_pane_g1

0x15e7,	// (0x0006be43) list_highlight_pane_cp012

0x1129,	// (0x0006b985) ncim_list_query_list_pane_g1

0x1131,	// (0x0006b98d) ncim_list_query_list_pane_t1

0xb9cc,	// (0x00076228) cam4_indicators_pane_g3_ParamLimits

0xb9cc,	// (0x00076228) cam4_indicators_pane_g3

0xbacf,	// (0x0007632b) vid4_indicators_pane_g5_ParamLimits

0xbacf,	// (0x0007632b) vid4_indicators_pane_g5

0xc92c,	// (0x00077188) vid4_progress_pane_g5_ParamLimits

0xc92c,	// (0x00077188) vid4_progress_pane_g5

0xd0f6,	// (0x00077952) main_ncimui_pane_g1

0xd15e,	// (0x000779ba) ncimui_group_query_pane_ParamLimits

0xd15e,	// (0x000779ba) ncimui_group_query_pane

0xd1a6,	// (0x00077a02) ncimui_list_pane_ParamLimits

0xd1a6,	// (0x00077a02) ncimui_list_pane

0xd1cd,	// (0x00077a29) ncimui_text_pane_ParamLimits

0xd1cd,	// (0x00077a29) ncimui_text_pane

0xd26d,	// (0x00077ac9) ncimui_text_pane_t1_ParamLimits

0xd26d,	// (0x00077ac9) ncimui_text_pane_t1

0x113f,	// (0x0006b99b) ncimui_list_single_graphic_pane_ParamLimits

0x113f,	// (0x0006b99b) ncimui_list_single_graphic_pane

0xd28c,	// (0x00077ae8) ncimui_query_pane_ParamLimits

0xd28c,	// (0x00077ae8) ncimui_query_pane

0x15e7,	// (0x0006be43) list_highlight_pane_cp013

0x114f,	// (0x0006b9ab) ncim_list_query_list_pane_t1_copy1

0x1129,	// (0x0006b985) ncim_list_single_graphic_pane_g1

0x115d,	// (0x0006b9b9) ncim_query_button_pane_cp01

0x1169,	// (0x0006b9c5) ncim_query_entry_pane_ParamLimits

0x1169,	// (0x0006b9c5) ncim_query_entry_pane

0x117c,	// (0x0006b9d8) ncimui_query_pane_g1

0x1188,	// (0x0006b9e4) ncimui_query_pane_t1_ParamLimits

0x1188,	// (0x0006b9e4) ncimui_query_pane_t1

0x1f8f,	// (0x0006c7eb) input_focus_pane_cp012

0x11a1,	// (0x0006b9fd) ncim_query_entry_pane_t1

0x1d74,	// (0x0006c5d0) main_im_pane_ParamLimits

0x1f8f,	// (0x0006c7eb) main_mobtv_pane_ParamLimits

0x1f8f,	// (0x0006c7eb) main_mobtv_pane

0xcf04,	// (0x00077760) main_cset6_slider_pane_g18_ParamLimits

0xcf04,	// (0x00077760) main_cset6_slider_pane_g18

0xcf28,	// (0x00077784) main_cset6_slider_pane_g19_ParamLimits

0xcf28,	// (0x00077784) main_cset6_slider_pane_g19

0x0553,	// (0x0006adaf) bg_main_mobtv_pane_ParamLimits

0x0553,	// (0x0006adaf) bg_main_mobtv_pane

0xd29f,	// (0x00077afb) main_mobtv_info_pane

0xd2aa,	// (0x00077b06) main_mobtv_loading_pane_ParamLimits

0xd2aa,	// (0x00077b06) main_mobtv_loading_pane

0x11c1,	// (0x0006ba1d) main_mobtv_pg_channel_list_pane

0x11cb,	// (0x0006ba27) main_mobtv_pg_hdr_pane

0xd2b7,	// (0x00077b13) main_mobtv_programe_curr_pane_ParamLimits

0xd2b7,	// (0x00077b13) main_mobtv_programe_curr_pane

0xd2c4,	// (0x00077b20) main_mobtv_programe_next_pane_ParamLimits

0xd2c4,	// (0x00077b20) main_mobtv_programe_next_pane

0x11d4,	// (0x0006ba30) popup_mobtv_noti_window

0xe869,	// (0x000790c5) main_tv_pg_hdr_pane_g1

0x11dc,	// (0x0006ba38) main_tv_pg_hdr_pane_g2

0x11e4,	// (0x0006ba40) main_tv_pg_hdr_pane_g3

0x11ec,	// (0x0006ba48) main_tv_pg_hdr_pane_g4

0x11f4,	// (0x0006ba50) main_tv_pg_hdr_pane_g5

0x11fe,	// (0x0006ba5a) main_tv_pg_hdr_pane_g6

0x1208,	// (0x0006ba64) main_tv_pg_hdr_pane_g7

0x1212,	// (0x0006ba6e) main_tv_pg_hdr_pane_g8

0x121c,	// (0x0006ba78) main_tv_pg_hdr_pane_g9

0x1226,	// (0x0006ba82) main_tv_pg_hdr_pane_g10

0x1230,	// (0x0006ba8c) main_tv_pg_hdr_pane_g11

0x000a,

0xfc13,	// (0x0007a46f) main_tv_pg_hdr_pane_g

0x123a,	// (0x0006ba96) main_tv_pg_hdr_pane_t1

0x1248,	// (0x0006baa4) main_tv_pg_hdr_pane_t2

0x1256,	// (0x0006bab2) main_tv_pg_hdr_pane_t3

0x1266,	// (0x0006bac2) main_tv_pg_hdr_pane_t4

0x1276,	// (0x0006bad2) main_tv_pg_hdr_pane_t5

0x0004,

0xfc2a,	// (0x0007a486) main_tv_pg_hdr_pane_t

0x1286,	// (0x0006bae2) single_mobtv_pg_channel_pane_ParamLimits

0x1286,	// (0x0006bae2) single_mobtv_pg_channel_pane

0x1298,	// (0x0006baf4) single_mobtv_pg_channel_table_pane

0x12a1,	// (0x0006bafd) single_mobtv_pg_channel_thumb_pane

0x12aa,	// (0x0006bb06) single_tv_pg_channel_pane_g1

0x12b3,	// (0x0006bb0f) single_tv_pg_channel_pane_g2

0x0001,

0xfc35,	// (0x0007a491) single_tv_pg_channel_pane_g

0xeaff,	// (0x0007935b) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xeaff,	// (0x0007935b) bg_single_mobtv_pg_channel_thumb_pane

0x12bc,	// (0x0006bb18) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x12bc,	// (0x0006bb18) single_mobtv_pg_channel_thumb_pane_g1

0x12ca,	// (0x0006bb26) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x12ca,	// (0x0006bb26) single_mobtv_pg_channel_thumb_pane_g2

0x12d6,	// (0x0006bb32) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x12d6,	// (0x0006bb32) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc3a,	// (0x0007a496) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc3a,	// (0x0007a496) single_mobtv_pg_channel_thumb_pane_g

0x12e2,	// (0x0006bb3e) single_mobtv_pg_channel_thumb_pane_t1

0x12f0,	// (0x0006bb4c) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc41,	// (0x0007a49d) single_mobtv_pg_channel_thumb_pane_t

0xe869,	// (0x000790c5) bg_single_mobtv_pg_channel_table_pane_g1

0xe869,	// (0x000790c5) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6ec,	// (0x00079f48) bg_single_mobtv_pg_channel_table_pane_g

0x12fe,	// (0x0006bb5a) single_mobtv_pg_channel_table_pane_t1

0x130c,	// (0x0006bb68) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc46,	// (0x0007a4a2) single_mobtv_pg_channel_table_pane_t

0xd2d9,	// (0x00077b35) main_mobtv_info_pane_g1_ParamLimits

0xd2d9,	// (0x00077b35) main_mobtv_info_pane_g1

0xd2f5,	// (0x00077b51) main_mobtv_info_pane_t1_ParamLimits

0xd2f5,	// (0x00077b51) main_mobtv_info_pane_t1

0xd36d,	// (0x00077bc9) main_mobtv_info_pane_t2_ParamLimits

0xd36d,	// (0x00077bc9) main_mobtv_info_pane_t2

0x0002,

0xfc50,	// (0x0007a4ac) main_mobtv_info_pane_t_ParamLimits

0xfc50,	// (0x0007a4ac) main_mobtv_info_pane_t

0xd3fc,	// (0x00077c58) wait_bar_pane_cp05

0xd40e,	// (0x00077c6a) main_mobtv_loading_pane_g1_ParamLimits

0xd40e,	// (0x00077c6a) main_mobtv_loading_pane_g1

0xd41c,	// (0x00077c78) main_mobtv_loading_pane_g2_ParamLimits

0xd41c,	// (0x00077c78) main_mobtv_loading_pane_g2

0xd428,	// (0x00077c84) main_mobtv_loading_pane_g3_ParamLimits

0xd428,	// (0x00077c84) main_mobtv_loading_pane_g3

0x0002,

0xfc57,	// (0x0007a4b3) main_mobtv_loading_pane_g_ParamLimits

0xfc57,	// (0x0007a4b3) main_mobtv_loading_pane_g

0x131a,	// (0x0006bb76) main_mobtv_loading_pane_t1_ParamLimits

0x131a,	// (0x0006bb76) main_mobtv_loading_pane_t1

0x1332,	// (0x0006bb8e) main_mobtv_loading_pane_t2_ParamLimits

0x1332,	// (0x0006bb8e) main_mobtv_loading_pane_t2

0x0001,

0xfc5e,	// (0x0007a4ba) main_mobtv_loading_pane_t_ParamLimits

0xfc5e,	// (0x0007a4ba) main_mobtv_loading_pane_t

0xd436,	// (0x00077c92) wait_bar_pane_cp06_ParamLimits

0xd436,	// (0x00077c92) wait_bar_pane_cp06

0x1356,	// (0x0006bbb2) main_mobtv_programe_curr_pane_t1

0x1364,	// (0x0006bbc0) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc63,	// (0x0007a4bf) main_mobtv_programe_curr_pane_t

0x1372,	// (0x0006bbce) main_mobtv_programe_next_pane_t1

0x1380,	// (0x0006bbdc) main_mobtv_programe_next_pane_t2

0x138e,	// (0x0006bbea) main_mobtv_programe_next_pane_t3

0x0002,

0xfc68,	// (0x0007a4c4) main_mobtv_programe_next_pane_t

0x15e7,	// (0x0006be43) bg_popup_mobtv_noti_window_pane

0x139c,	// (0x0006bbf8) popup_mobtv_noti_window_g1

0x13a4,	// (0x0006bc00) popup_mobtv_noti_window_t1

0x13b2,	// (0x0006bc0e) popup_mobtv_noti_window_t2

0x0001,

0xfc6f,	// (0x0007a4cb) popup_mobtv_noti_window_t

0xe869,	// (0x000790c5) bg_popup_mobtv_noti_window_pane_g1

0x15e7,	// (0x0006be43) sc_clock_pane

0x15e7,	// (0x0006be43) main_fs_bigclock_pane

0xcb24,	// (0x00077380) blid2_tripm_pane_t4_ParamLimits

0xcb24,	// (0x00077380) blid2_tripm_pane_t4

0xd442,	// (0x00077c9e) sc_clock_pane_g1_ParamLimits

0xd442,	// (0x00077c9e) sc_clock_pane_g1

0xd450,	// (0x00077cac) sc_clock_pane_t1_ParamLimits

0xd450,	// (0x00077cac) sc_clock_pane_t1

0xd463,	// (0x00077cbf) sc_clock_pane_t2_ParamLimits

0xd463,	// (0x00077cbf) sc_clock_pane_t2

0xd475,	// (0x00077cd1) sc_clock_pane_t3_ParamLimits

0xd475,	// (0x00077cd1) sc_clock_pane_t3

0x0004,

0xfc74,	// (0x0007a4d0) sc_clock_pane_t_ParamLimits

0xfc74,	// (0x0007a4d0) sc_clock_pane_t

0xdcec,	// (0x00078548) main_fs_bigclock_indicator_pane_ParamLimits

0xdcec,	// (0x00078548) main_fs_bigclock_indicator_pane

0xd501,	// (0x00077d5d) main_fs_bigclock_pane_g1_ParamLimits

0xd501,	// (0x00077d5d) main_fs_bigclock_pane_g1

0xdcf8,	// (0x00078554) main_fs_bigclock_pane_t1_ParamLimits

0xdcf8,	// (0x00078554) main_fs_bigclock_pane_t1

0xdd0a,	// (0x00078566) main_fs_bigclock_pane_t2_ParamLimits

0xdd0a,	// (0x00078566) main_fs_bigclock_pane_t2

0xdd1c,	// (0x00078578) main_fs_bigclock_pane_t3_ParamLimits

0xdd1c,	// (0x00078578) main_fs_bigclock_pane_t3

0x0002,

0xfe78,	// (0x0007a6d4) main_fs_bigclock_pane_t_ParamLimits

0xfe78,	// (0x0007a6d4) main_fs_bigclock_pane_t

0x2680,	// (0x0006cedc) main_fs_bigclock_indicator_pane_g1

0x1078,	// (0x0006b8d4) ncim_query_content_pane_g2_ParamLimits

0x1078,	// (0x0006b8d4) ncim_query_content_pane_g2

0x0001,

0xfc01,	// (0x0007a45d) ncim_query_content_pane_g_ParamLimits

0xfc01,	// (0x0007a45d) ncim_query_content_pane_g

0xd489,	// (0x00077ce5) sc_clock_pane_t4_ParamLimits

0xd489,	// (0x00077ce5) sc_clock_pane_t4

0x1f8f,	// (0x0006c7eb) main_radioblah_pane

0x03a3,	// (0x0006abff) cell_call4_button_pane_t1_copy1_ParamLimits

0x03a3,	// (0x0006abff) cell_call4_button_pane_t1_copy1

0xd110,	// (0x0007796c) main_ncimui_pane_t1_ParamLimits

0xd110,	// (0x0007796c) main_ncimui_pane_t1

0xd12a,	// (0x00077986) main_ncimui_pane_t2_ParamLimits

0xd12a,	// (0x00077986) main_ncimui_pane_t2

0x0002,

0xfbfa,	// (0x0007a456) main_ncimui_pane_t_ParamLimits

0xfbfa,	// (0x0007a456) main_ncimui_pane_t

0x14fb,	// (0x0006bd57) main_radioblah_anim_pane_ParamLimits

0x14fb,	// (0x0006bd57) main_radioblah_anim_pane

0x150c,	// (0x0006bd68) main_radioblah_info_pane_ParamLimits

0x150c,	// (0x0006bd68) main_radioblah_info_pane

0x1520,	// (0x0006bd7c) main_radioblah_pane_t1_ParamLimits

0x1520,	// (0x0006bd7c) main_radioblah_pane_t1

0x153c,	// (0x0006bd98) main_radioblah_pane_t2_ParamLimits

0x153c,	// (0x0006bd98) main_radioblah_pane_t2

0x0003,

0xfc95,	// (0x0007a4f1) main_radioblah_pane_t_ParamLimits

0xfc95,	// (0x0007a4f1) main_radioblah_pane_t

0xd553,	// (0x00077daf) main_radioblah_rocker_ctrl_pane_ParamLimits

0xd553,	// (0x00077daf) main_radioblah_rocker_ctrl_pane

0x1584,	// (0x0006bde0) main_radioblah_info_pane_t1_ParamLimits

0x1584,	// (0x0006bde0) main_radioblah_info_pane_t1

0xd598,	// (0x00077df4) main_radioblah_info_pane_t2_ParamLimits

0xd598,	// (0x00077df4) main_radioblah_info_pane_t2

0x0003,

0xfc9e,	// (0x0007a4fa) main_radioblah_info_pane_t_ParamLimits

0xfc9e,	// (0x0007a4fa) main_radioblah_info_pane_t

0xe869,	// (0x000790c5) main_radioblah_rocker_ctrl_pane_g1

0xd648,	// (0x00077ea4) main_radioblah_rocker_ctrl_pane_g2

0xd650,	// (0x00077eac) main_radioblah_rocker_ctrl_pane_g3

0xd658,	// (0x00077eb4) main_radioblah_rocker_ctrl_pane_g4

0xd660,	// (0x00077ebc) main_radioblah_rocker_ctrl_pane_g5

0xd668,	// (0x00077ec4) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfca7,	// (0x0007a503) main_radioblah_rocker_ctrl_pane_g

0xd0ac,	// (0x00077908) main_cset_text2_pane_t1_copy1_ParamLimits

0xb8fa,	// (0x00076156) cam4_image_uncrop_qvga_pane

0xba41,	// (0x0007629d) vid4_image_uncrop_qcif_pane

0xccb2,	// (0x0007750e) cam6_image_uncrop_qvga_pane_ParamLimits

0xccb2,	// (0x0007750e) cam6_image_uncrop_qvga_pane

0x0d70,	// (0x0006b5cc) vid6_image_uncrop_qcif_pane_ParamLimits

0x0d70,	// (0x0006b5cc) vid6_image_uncrop_qcif_pane

0x15e7,	// (0x0006be43) bg_popup_preview_window_pane_cp03

0x102a,	// (0x0006b886) list_cset_text2_pane

0x1032,	// (0x0006b88e) main_cset6_text2_pane_g1

0x103a,	// (0x0006b896) main_cset6_text2_pane_t1

0xd670,	// (0x00077ecc) list_cset_text2_pane_t1_ParamLimits

0xd670,	// (0x00077ecc) list_cset_text2_pane_t1

0x1f8f,	// (0x0006c7eb) main_radioblah_pane_ParamLimits

0xd3e8,	// (0x00077c44) main_mobtv_info_pane_t3_ParamLimits

0xd3e8,	// (0x00077c44) main_mobtv_info_pane_t3

0xd541,	// (0x00077d9d) main_radioblah_pane_g1

0xd56c,	// (0x00077dc8) main_radioblah_info_pane_g1

0xd5ed,	// (0x00077e49) main_radioblah_info_pane_t3_ParamLimits

0xd5ed,	// (0x00077e49) main_radioblah_info_pane_t3

0x86e3,	// (0x00072f3f) highlight_cell_cale_month_pane_ParamLimits

0x86e3,	// (0x00072f3f) highlight_cell_cale_month_pane

0x15e7,	// (0x0006be43) main_phob_fisheye_pane

0xebe7,	// (0x00079443) scroll_pane_cp0031_ParamLimits

0xebe7,	// (0x00079443) scroll_pane_cp0031

0x0e7e,	// (0x0006b6da) wait_bar_pane_cp08_ParamLimits

0xce90,	// (0x000776ec) cset_list_set_pane_copy1_ParamLimits

0x15be,	// (0x0006be1a) highlight_cell_cale_month_pane_g1

0xd69b,	// (0x00077ef7) highlight_cell_cale_month_pane_t1

0x0a8f,	// (0x0006b2eb) list_gen_pane_cp01

0x068d,	// (0x0006aee9) scroll_pane_01

0xe9bf,	// (0x0007921b) list_single_double_fisheye_pane

0x5f93,	// (0x000707ef) list_double_fisheye_pane_g1_ParamLimits

0x5f93,	// (0x000707ef) list_double_fisheye_pane_g1

0xd6a9,	// (0x00077f05) list_double_fisheye_pane_g2_ParamLimits

0xd6a9,	// (0x00077f05) list_double_fisheye_pane_g2

0xe9c8,	// (0x00079224) list_double_fisheye_pane_g3_ParamLimits

0xe9c8,	// (0x00079224) list_double_fisheye_pane_g3

0x0004,

0xfcb4,	// (0x0007a510) list_double_fisheye_pane_g_ParamLimits

0xfcb4,	// (0x0007a510) list_double_fisheye_pane_g

0x5fab,	// (0x00070807) list_double_fisheye_pane_t1_ParamLimits

0x5fab,	// (0x00070807) list_double_fisheye_pane_t1

0x5fc6,	// (0x00070822) list_double_fisheye_pane_t2_ParamLimits

0x5fc6,	// (0x00070822) list_double_fisheye_pane_t2

0x0001,

0xfcbf,	// (0x0007a51b) list_double_fisheye_pane_t_ParamLimits

0xfcbf,	// (0x0007a51b) list_double_fisheye_pane_t

0x15e7,	// (0x0006be43) main_call5_pane

0xd4af,	// (0x00077d0b) sc_swipe_pane_ParamLimits

0xd4af,	// (0x00077d0b) sc_swipe_pane

0xd6da,	// (0x00077f36) call5_image_pane_ParamLimits

0xd6da,	// (0x00077f36) call5_image_pane

0xd6ea,	// (0x00077f46) call5_swipe_1_pane_ParamLimits

0xd6ea,	// (0x00077f46) call5_swipe_1_pane

0xd6f6,	// (0x00077f52) call5_swipe_2_pane_ParamLimits

0xd6f6,	// (0x00077f52) call5_swipe_2_pane

0xd710,	// (0x00077f6c) popup_call5_audio_first_window_ParamLimits

0xd710,	// (0x00077f6c) popup_call5_audio_first_window

0xeaff,	// (0x0007935b) call5_swipe_1_pane_g1_ParamLimits

0xeaff,	// (0x0007935b) call5_swipe_1_pane_g1

0x15c6,	// (0x0006be22) call5_swipe_1_pane_g2_ParamLimits

0x15c6,	// (0x0006be22) call5_swipe_1_pane_g2

0x0001,

0xfcc4,	// (0x0007a520) call5_swipe_1_pane_g_ParamLimits

0xfcc4,	// (0x0007a520) call5_swipe_1_pane_g

0x15d2,	// (0x0006be2e) call5_swipe_1_pane_t1_ParamLimits

0x15d2,	// (0x0006be2e) call5_swipe_1_pane_t1

0xeaff,	// (0x0007935b) call5_swipe_2_pane_g1_ParamLimits

0xeaff,	// (0x0007935b) call5_swipe_2_pane_g1

0x1faf,	// (0x0006c80b) call5_swipe_2_pane_g2_ParamLimits

0x1faf,	// (0x0006c80b) call5_swipe_2_pane_g2

0x0001,

0xfcc9,	// (0x0007a525) call5_swipe_2_pane_g_ParamLimits

0xfcc9,	// (0x0007a525) call5_swipe_2_pane_g

0x1fbb,	// (0x0006c817) call5_swipe_2_pane_t1_ParamLimits

0x1fbb,	// (0x0006c817) call5_swipe_2_pane_t1

0x1fd0,	// (0x0006c82c) sc_swipe_pane_g1_ParamLimits

0x1fd0,	// (0x0006c82c) sc_swipe_pane_g1

0x1fdd,	// (0x0006c839) sc_swipe_pane_g2_ParamLimits

0x1fdd,	// (0x0006c839) sc_swipe_pane_g2

0x0001,

0xfcce,	// (0x0007a52a) sc_swipe_pane_g_ParamLimits

0xfcce,	// (0x0007a52a) sc_swipe_pane_g

0x1fe9,	// (0x0006c845) sc_swipe_pane_t1_ParamLimits

0x1fe9,	// (0x0006c845) sc_swipe_pane_t1

0x15e7,	// (0x0006be43) main_cmail_launcher_pane

0xd71e,	// (0x00077f7a) aid_size_cell_cmail_l_ParamLimits

0xd71e,	// (0x00077f7a) aid_size_cell_cmail_l

0xd72e,	// (0x00077f8a) grid_cmail_l_pane_ParamLimits

0xd72e,	// (0x00077f8a) grid_cmail_l_pane

0xd73e,	// (0x00077f9a) cell_cmail_l_pane_ParamLimits

0xd73e,	// (0x00077f9a) cell_cmail_l_pane

0xd752,	// (0x00077fae) cell_cmail_l_pane_g1_ParamLimits

0xd752,	// (0x00077fae) cell_cmail_l_pane_g1

0xd75e,	// (0x00077fba) cell_cmail_l_pane_t1_ParamLimits

0xd75e,	// (0x00077fba) cell_cmail_l_pane_t1

0x1ffe,	// (0x0006c85a) cell_cmail_l_pane_t2_ParamLimits

0x1ffe,	// (0x0006c85a) cell_cmail_l_pane_t2

0x0001,

0xfcd3,	// (0x0007a52f) cell_cmail_l_pane_t_ParamLimits

0xfcd3,	// (0x0007a52f) cell_cmail_l_pane_t

0x1f8f,	// (0x0006c7eb) grid_highlight_pane_cp018_ParamLimits

0x1f8f,	// (0x0006c7eb) grid_highlight_pane_cp018

0x6a40,	// (0x0007129c) main2_pane_ParamLimits

0x6a40,	// (0x0007129c) main2_pane

0x1e1f,	// (0x0006c67b) popup_sp_fs_action_menu_bg_pane_g1

0x1e27,	// (0x0006c683) popup_sp_fs_action_menu_bg_pane_g2

0x1e2f,	// (0x0006c68b) popup_sp_fs_action_menu_bg_pane_g3

0x1e37,	// (0x0006c693) popup_sp_fs_action_menu_bg_pane_g4

0x1e3f,	// (0x0006c69b) popup_sp_fs_action_menu_bg_pane_g5

0x1e47,	// (0x0006c6a3) popup_sp_fs_action_menu_bg_pane_g6

0x1e4f,	// (0x0006c6ab) popup_sp_fs_action_menu_bg_pane_g7

0x1e57,	// (0x0006c6b3) popup_sp_fs_action_menu_bg_pane_g8

0x1e5f,	// (0x0006c6bb) popup_sp_fs_action_menu_bg_pane_g9

0x1e67,	// (0x0006c6c3) popup_sp_fs_action_menu_bg_pane_g10

0x1e67,	// (0x0006c6c3) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf198,	// (0x000799f4) popup_sp_fs_action_menu_bg_pane_g

0x57e0,	// (0x0007003c) list_medium_line_x2_t3_g3_g1_ParamLimits

0x57e0,	// (0x0007003c) list_medium_line_x2_t3_g3_g1

0x57ec,	// (0x00070048) list_medium_line_x2_t3_g3_g2_ParamLimits

0x57ec,	// (0x00070048) list_medium_line_x2_t3_g3_g2

0x57f8,	// (0x00070054) list_medium_line_x2_t3_g3_g3_ParamLimits

0x57f8,	// (0x00070054) list_medium_line_x2_t3_g3_g3

0x0002,

0xf248,	// (0x00079aa4) list_medium_line_x2_t3_g3_g_ParamLimits

0xf248,	// (0x00079aa4) list_medium_line_x2_t3_g3_g

0x5804,	// (0x00070060) list_medium_line_x2_t3_g3_t1_ParamLimits

0x5804,	// (0x00070060) list_medium_line_x2_t3_g3_t1

0x5819,	// (0x00070075) list_medium_line_x2_t3_g3_t2_ParamLimits

0x5819,	// (0x00070075) list_medium_line_x2_t3_g3_t2

0x582b,	// (0x00070087) list_medium_line_x2_t3_g3_t3_ParamLimits

0x582b,	// (0x00070087) list_medium_line_x2_t3_g3_t3

0x0002,

0xf24f,	// (0x00079aab) list_medium_line_x2_t3_g3_t_ParamLimits

0xf24f,	// (0x00079aab) list_medium_line_x2_t3_g3_t

0x57e0,	// (0x0007003c) list_medium_line_x2_t3_g2_g1_ParamLimits

0x57e0,	// (0x0007003c) list_medium_line_x2_t3_g2_g1

0x57f8,	// (0x00070054) list_medium_line_x2_t3_g2_g2_ParamLimits

0x57f8,	// (0x00070054) list_medium_line_x2_t3_g2_g2

0x0001,

0xf256,	// (0x00079ab2) list_medium_line_x2_t3_g2_g_ParamLimits

0xf256,	// (0x00079ab2) list_medium_line_x2_t3_g2_g

0x5840,	// (0x0007009c) list_medium_line_x2_t3_g2_t1_ParamLimits

0x5840,	// (0x0007009c) list_medium_line_x2_t3_g2_t1

0x5856,	// (0x000700b2) list_medium_line_x2_t3_g2_t2_ParamLimits

0x5856,	// (0x000700b2) list_medium_line_x2_t3_g2_t2

0x5868,	// (0x000700c4) list_medium_line_x2_t3_g2_t3_ParamLimits

0x5868,	// (0x000700c4) list_medium_line_x2_t3_g2_t3

0x0002,

0xf25b,	// (0x00079ab7) list_medium_line_x2_t3_g2_t_ParamLimits

0xf25b,	// (0x00079ab7) list_medium_line_x2_t3_g2_t

0x57e0,	// (0x0007003c) list_medium_line_x2_t4_g4_g1_ParamLimits

0x57e0,	// (0x0007003c) list_medium_line_x2_t4_g4_g1

0x5886,	// (0x000700e2) list_medium_line_x2_t4_g4_g2_ParamLimits

0x5886,	// (0x000700e2) list_medium_line_x2_t4_g4_g2

0x57ec,	// (0x00070048) list_medium_line_x2_t4_g4_g3_ParamLimits

0x57ec,	// (0x00070048) list_medium_line_x2_t4_g4_g3

0x5892,	// (0x000700ee) list_medium_line_x2_t4_g4_g4_ParamLimits

0x5892,	// (0x000700ee) list_medium_line_x2_t4_g4_g4

0x0003,

0xf262,	// (0x00079abe) list_medium_line_x2_t4_g4_g_ParamLimits

0xf262,	// (0x00079abe) list_medium_line_x2_t4_g4_g

0x589e,	// (0x000700fa) list_medium_line_x2_t4_g4_t1_ParamLimits

0x589e,	// (0x000700fa) list_medium_line_x2_t4_g4_t1

0x58b5,	// (0x00070111) list_medium_line_x2_t4_g4_t2_ParamLimits

0x58b5,	// (0x00070111) list_medium_line_x2_t4_g4_t2

0x58ca,	// (0x00070126) list_medium_line_x2_t4_g4_t3_ParamLimits

0x58ca,	// (0x00070126) list_medium_line_x2_t4_g4_t3

0x58dc,	// (0x00070138) list_medium_line_x2_t4_g4_t4_ParamLimits

0x58dc,	// (0x00070138) list_medium_line_x2_t4_g4_t4

0x0003,

0xf26b,	// (0x00079ac7) list_medium_line_x2_t4_g4_t_ParamLimits

0xf26b,	// (0x00079ac7) list_medium_line_x2_t4_g4_t

0x57e0,	// (0x0007003c) list_medium_line_x2_t2_g4_g1_ParamLimits

0x57e0,	// (0x0007003c) list_medium_line_x2_t2_g4_g1

0x5886,	// (0x000700e2) list_medium_line_x2_t2_g4_g2_ParamLimits

0x5886,	// (0x000700e2) list_medium_line_x2_t2_g4_g2

0x57ec,	// (0x00070048) list_medium_line_x2_t2_g4_g3_ParamLimits

0x57ec,	// (0x00070048) list_medium_line_x2_t2_g4_g3

0x57f8,	// (0x00070054) list_medium_line_x2_t2_g4_g4_ParamLimits

0x57f8,	// (0x00070054) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2d2,	// (0x00079b2e) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2d2,	// (0x00079b2e) list_medium_line_x2_t2_g4_g

0x58ee,	// (0x0007014a) list_medium_line_x2_t2_g4_t1_ParamLimits

0x58ee,	// (0x0007014a) list_medium_line_x2_t2_g4_t1

0x582b,	// (0x00070087) list_medium_line_x2_t2_g4_t2_ParamLimits

0x582b,	// (0x00070087) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2db,	// (0x00079b37) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2db,	// (0x00079b37) list_medium_line_x2_t2_g4_t

0x57e0,	// (0x0007003c) list_medium_line_x2_t2_g3_g1_ParamLimits

0x57e0,	// (0x0007003c) list_medium_line_x2_t2_g3_g1

0x57ec,	// (0x00070048) list_medium_line_x2_t2_g3_g2_ParamLimits

0x57ec,	// (0x00070048) list_medium_line_x2_t2_g3_g2

0x57f8,	// (0x00070054) list_medium_line_x2_t2_g3_g3_ParamLimits

0x57f8,	// (0x00070054) list_medium_line_x2_t2_g3_g3

0x0002,

0xf248,	// (0x00079aa4) list_medium_line_x2_t2_g3_g_ParamLimits

0xf248,	// (0x00079aa4) list_medium_line_x2_t2_g3_g

0x5903,	// (0x0007015f) list_medium_line_x2_t2_g3_t1_ParamLimits

0x5903,	// (0x0007015f) list_medium_line_x2_t2_g3_t1

0x582b,	// (0x00070087) list_medium_line_x2_t2_g3_t2_ParamLimits

0x582b,	// (0x00070087) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2e0,	// (0x00079b3c) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2e0,	// (0x00079b3c) list_medium_line_x2_t2_g3_t

0x895f,	// (0x000731bb) main_sp_fs_list_pane_ParamLimits

0x895f,	// (0x000731bb) main_sp_fs_list_pane

0x896b,	// (0x000731c7) sp_fs_scroll_pane_ParamLimits

0x896b,	// (0x000731c7) sp_fs_scroll_pane

0x5918,	// (0x00070174) list_medium_line_x2_t3_t1

0x5928,	// (0x00070184) list_medium_line_x2_t3_t2

0x5936,	// (0x00070192) list_medium_line_x2_t3_t3

0x0002,

0xf32b,	// (0x00079b87) list_medium_line_x2_t3_t

0x5944,	// (0x000701a0) list_medium_line_x3_t4_t1

0x5954,	// (0x000701b0) list_medium_line_x3_t4_t2

0x5962,	// (0x000701be) list_medium_line_x3_t4_t3

0x5936,	// (0x00070192) list_medium_line_x3_t4_t4

0x0003,

0xf332,	// (0x00079b8e) list_medium_line_x3_t4_t

0x5970,	// (0x000701cc) list_medium_line_x4_t5_t1

0x5980,	// (0x000701dc) list_medium_line_x4_t5_t2

0x5962,	// (0x000701be) list_medium_line_x4_t5_t3

0x598e,	// (0x000701ea) list_medium_line_x4_t5_t4

0x5936,	// (0x00070192) list_medium_line_x4_t5_t5

0x0004,

0xf33b,	// (0x00079b97) list_medium_line_x4_t5_t

0x57e0,	// (0x0007003c) list_medium_line_t4_g4_g1_ParamLimits

0x57e0,	// (0x0007003c) list_medium_line_t4_g4_g1

0x5892,	// (0x000700ee) list_medium_line_t4_g4_g2_ParamLimits

0x5892,	// (0x000700ee) list_medium_line_t4_g4_g2

0x599c,	// (0x000701f8) list_medium_line_t4_g4_g3_ParamLimits

0x599c,	// (0x000701f8) list_medium_line_t4_g4_g3

0x57f8,	// (0x00070054) list_medium_line_t4_g4_g4_ParamLimits

0x57f8,	// (0x00070054) list_medium_line_t4_g4_g4

0x0003,

0xf346,	// (0x00079ba2) list_medium_line_t4_g4_g_ParamLimits

0xf346,	// (0x00079ba2) list_medium_line_t4_g4_g

0x59a8,	// (0x00070204) list_medium_line_t4_g4_t1_ParamLimits

0x59a8,	// (0x00070204) list_medium_line_t4_g4_t1

0x59bd,	// (0x00070219) list_medium_line_t4_g4_t2_ParamLimits

0x59bd,	// (0x00070219) list_medium_line_t4_g4_t2

0x59d3,	// (0x0007022f) list_medium_line_t4_g4_t3_ParamLimits

0x59d3,	// (0x0007022f) list_medium_line_t4_g4_t3

0x582b,	// (0x00070087) list_medium_line_t4_g4_t4_ParamLimits

0x582b,	// (0x00070087) list_medium_line_t4_g4_t4

0x0003,

0xf34f,	// (0x00079bab) list_medium_line_t4_g4_t_ParamLimits

0xf34f,	// (0x00079bab) list_medium_line_t4_g4_t

0x8a5e,	// (0x000732ba) chi_dic_find_pane_g1

0x99d6,	// (0x00074232) main_tport_pane

0x5c34,	// (0x00070490) list_medium_line_plain_t1

0x5c42,	// (0x0007049e) list_medium_line_t2_g2_g1_ParamLimits

0x5c42,	// (0x0007049e) list_medium_line_t2_g2_g1

0x5c4e,	// (0x000704aa) list_medium_line_t2_g2_g2_ParamLimits

0x5c4e,	// (0x000704aa) list_medium_line_t2_g2_g2

0x0001,

0xfa0b,	// (0x0007a267) list_medium_line_t2_g2_g_ParamLimits

0xfa0b,	// (0x0007a267) list_medium_line_t2_g2_g

0x5c5a,	// (0x000704b6) list_medium_line_t2_g2_t1_ParamLimits

0x5c5a,	// (0x000704b6) list_medium_line_t2_g2_t1

0x5c74,	// (0x000704d0) list_medium_line_t2_g2_t2_ParamLimits

0x5c74,	// (0x000704d0) list_medium_line_t2_g2_t2

0x0001,

0xfa10,	// (0x0007a26c) list_medium_line_t2_g2_t_ParamLimits

0xfa10,	// (0x0007a26c) list_medium_line_t2_g2_t

0x5e82,	// (0x000706de) aid_sp_fs_list_icon_a_sm

0xc98b,	// (0x000771e7) aid_sp_fs_list_icon_d

0xe9b6,	// (0x00079212) aid_sp_fs_text_primary

0x5e8a,	// (0x000706e6) aid_sp_fs_text_secondary

0x5e93,	// (0x000706ef) list_medium_line

0x5e93,	// (0x000706ef) list_medium_line_g2

0x5e93,	// (0x000706ef) list_medium_line_g3

0x5e93,	// (0x000706ef) list_medium_line_plain

0x5e93,	// (0x000706ef) list_medium_line_plain_t2

0x5e93,	// (0x000706ef) list_medium_line_plain_t3

0x5e93,	// (0x000706ef) list_medium_line_right_icon

0x5e93,	// (0x000706ef) list_medium_line_right_iconx2

0x5e93,	// (0x000706ef) list_medium_line_t2

0x5e93,	// (0x000706ef) list_medium_line_t2_g2

0x5e93,	// (0x000706ef) list_medium_line_t2_g3

0x5e93,	// (0x000706ef) list_medium_line_t2_right_icon

0x5e93,	// (0x000706ef) list_medium_line_t2_right_iconx2

0x5e93,	// (0x000706ef) list_medium_line_t3

0x5e93,	// (0x000706ef) list_medium_line_t3_g2

0x5e93,	// (0x000706ef) list_medium_line_t3_g3

0x5e93,	// (0x000706ef) list_medium_line_t3_right_iconx2

0x5e9c,	// (0x000706f8) list_medium_line_t4_g4

0xc993,	// (0x000771ef) list_medium_line_x2

0xc993,	// (0x000771ef) list_medium_line_x2_t2_g2

0xc993,	// (0x000771ef) list_medium_line_x2_t2_g3

0xc993,	// (0x000771ef) list_medium_line_x2_t2_g4

0xc993,	// (0x000771ef) list_medium_line_x2_t3

0xc993,	// (0x000771ef) list_medium_line_x2_t3_g2

0xc993,	// (0x000771ef) list_medium_line_x2_t3_g3

0xc993,	// (0x000771ef) list_medium_line_x2_t3_g4

0xc993,	// (0x000771ef) list_medium_line_x2_t4_g2

0xc993,	// (0x000771ef) list_medium_line_x2_t4_g4

0x5ea5,	// (0x00070701) list_medium_line_x3

0x5ea5,	// (0x00070701) list_medium_line_x3_t4

0x5ea5,	// (0x00070701) list_medium_line_x3_t4_g4

0x5e9c,	// (0x000706f8) list_medium_line_x4_t4

0x5e9c,	// (0x000706f8) list_medium_line_x4_t4_g7

0x5e9c,	// (0x000706f8) list_medium_line_x4_t5

0x5eae,	// (0x0007070a) list_single_fs_dyc_pane_ParamLimits

0x5eae,	// (0x0007070a) list_single_fs_dyc_pane

0x57e0,	// (0x0007003c) list_medium_line_x4_t4_g7_g1_ParamLimits

0x57e0,	// (0x0007003c) list_medium_line_x4_t4_g7_g1

0x5ec2,	// (0x0007071e) list_medium_line_x4_t4_g7_g2_ParamLimits

0x5ec2,	// (0x0007071e) list_medium_line_x4_t4_g7_g2

0x5ece,	// (0x0007072a) list_medium_line_x4_t4_g7_g3_ParamLimits

0x5ece,	// (0x0007072a) list_medium_line_x4_t4_g7_g3

0x5edd,	// (0x00070739) list_medium_line_x4_t4_g7_g4_ParamLimits

0x5edd,	// (0x00070739) list_medium_line_x4_t4_g7_g4

0x5ee9,	// (0x00070745) list_medium_line_x4_t4_g7_g5_ParamLimits

0x5ee9,	// (0x00070745) list_medium_line_x4_t4_g7_g5

0x5ef8,	// (0x00070754) list_medium_line_x4_t4_g7_g6_ParamLimits

0x5ef8,	// (0x00070754) list_medium_line_x4_t4_g7_g6

0x5f07,	// (0x00070763) list_medium_line_x4_t4_g7_g7_ParamLimits

0x5f07,	// (0x00070763) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbdb,	// (0x0007a437) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbdb,	// (0x0007a437) list_medium_line_x4_t4_g7_g

0x5f13,	// (0x0007076f) list_medium_line_x4_t4_g7_t1_ParamLimits

0x5f13,	// (0x0007076f) list_medium_line_x4_t4_g7_t1

0x5f28,	// (0x00070784) list_medium_line_x4_t4_g7_t2_ParamLimits

0x5f28,	// (0x00070784) list_medium_line_x4_t4_g7_t2

0x5f3d,	// (0x00070799) list_medium_line_x4_t4_g7_t3_ParamLimits

0x5f3d,	// (0x00070799) list_medium_line_x4_t4_g7_t3

0x5f52,	// (0x000707ae) list_medium_line_x4_t4_g7_t4_ParamLimits

0x5f52,	// (0x000707ae) list_medium_line_x4_t4_g7_t4

0x5f64,	// (0x000707c0) list_medium_line_x4_t4_g7_t5_ParamLimits

0x5f64,	// (0x000707c0) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbea,	// (0x0007a446) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbea,	// (0x0007a446) list_medium_line_x4_t4_g7_t

0x5f76,	// (0x000707d2) list_single_dyc_row_pane_ParamLimits

0x5f76,	// (0x000707d2) list_single_dyc_row_pane

0xd6ce,	// (0x00077f2a) call5_gesture_pane_ParamLimits

0xd6ce,	// (0x00077f2a) call5_gesture_pane

0xd702,	// (0x00077f5e) call5_windows_pane_ParamLimits

0xd702,	// (0x00077f5e) call5_windows_pane

0xd774,	// (0x00077fd0) call5_swipe_1_pane_cp_ParamLimits

0xd774,	// (0x00077fd0) call5_swipe_1_pane_cp

0xd780,	// (0x00077fdc) call5_swipe_2_pane_cp_ParamLimits

0xd780,	// (0x00077fdc) call5_swipe_2_pane_cp

0x34cf,	// (0x0006dd2b) call5_image_pane_cp

0xd78c,	// (0x00077fe8) popup_call5_audio_first_window_cp_ParamLimits

0xd78c,	// (0x00077fe8) popup_call5_audio_first_window_cp

0x1fd0,	// (0x0006c82c) call5_swipe_1_pane_g1_cp_ParamLimits

0x1fd0,	// (0x0006c82c) call5_swipe_1_pane_g1_cp

0x2010,	// (0x0006c86c) call5_swipe_1_pane_g2_cp

0x1fe9,	// (0x0006c845) call5_swipe_1_pane_t1_cp_ParamLimits

0x1fe9,	// (0x0006c845) call5_swipe_1_pane_t1_cp

0x1fd0,	// (0x0006c82c) call5_swipe_2_pane_g1_cp_ParamLimits

0x1fd0,	// (0x0006c82c) call5_swipe_2_pane_g1_cp

0x2018,	// (0x0006c874) call5_swipe_2_pane_g2_cp

0x2020,	// (0x0006c87c) call5_swipe_2_pane_t1_cp_ParamLimits

0x2020,	// (0x0006c87c) call5_swipe_2_pane_t1_cp

0x1f8f,	// (0x0006c7eb) main_sp_fs_email_pane

0x2035,	// (0x0006c891) main_sp_fs_listscroll_pane_te

0x5fe8,	// (0x00070844) popup_sp_fs_action_menu_pane_ParamLimits

0x5fe8,	// (0x00070844) popup_sp_fs_action_menu_pane

0xe869,	// (0x000790c5) bg_sp_fs_ctrlbar_pane_g1

0x203e,	// (0x0006c89a) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x2047,	// (0x0006c8a3) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x2050,	// (0x0006c8ac) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xe869,	// (0x000790c5) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcd8,	// (0x0007a534) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xe64c,	// (0x00078ea8) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xe64c,	// (0x00078ea8) bg_sp_fs_ctrlbar_ddmenu_pane

0x2059,	// (0x0006c8b5) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x2059,	// (0x0006c8b5) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x2065,	// (0x0006c8c1) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x2065,	// (0x0006c8c1) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfce1,	// (0x0007a53d) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfce1,	// (0x0007a53d) main_sp_fs_ctrlbar_ddmenu_pane_g

0x2071,	// (0x0006c8cd) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x2071,	// (0x0006c8cd) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x602a,	// (0x00070886) list_medium_line_t2_right_icon_g1

0x6032,	// (0x0007088e) list_medium_line_t2_right_icon_t1

0x6042,	// (0x0007089e) list_medium_line_t2_right_icon_t2

0x0001,

0xfce6,	// (0x0007a542) list_medium_line_t2_right_icon_t

0x491a,	// (0x0006f176) bg_sp_fs_ctrlbar_pane_ParamLimits

0x491a,	// (0x0006f176) bg_sp_fs_ctrlbar_pane

0xd7ef,	// (0x0007804b) main_sp_fs_ctrlbar_button_pane_cp01

0xd7f7,	// (0x00078053) main_sp_fs_ctrlbar_ddmenu_pane

0x20c3,	// (0x0006c91f) main_sp_fs_ctrlbar_pane_g1

0x20cf,	// (0x0006c92b) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfceb,	// (0x0007a547) main_sp_fs_ctrlbar_pane_g

0x20db,	// (0x0006c937) main_sp_fs_ctrlbar_pane_t1

0x6050,	// (0x000708ac) main_sp_fs_ctrlbar_pane

0x606a,	// (0x000708c6) main_sp_fs_listscroll_pane_te_cp01

0x607b,	// (0x000708d7) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x607b,	// (0x000708d7) popup_sp_fs_action_menu_pane_cp01

0x1f8f,	// (0x0006c7eb) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x1f8f,	// (0x0006c7eb) bg_sp_fs_highlight_list_pane_cp01

0x60a5,	// (0x00070901) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x60a5,	// (0x00070901) sp_fs_action_menu_list_gene_pane_g1

0x2100,	// (0x0006c95c) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x2100,	// (0x0006c95c) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcf5,	// (0x0007a551) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcf5,	// (0x0007a551) sp_fs_action_menu_list_gene_pane_g

0x60b4,	// (0x00070910) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x60b4,	// (0x00070910) sp_fs_action_menu_list_gene_pane_t1

0x60cc,	// (0x00070928) sp_fs_action_menu_list_gene_pane_ParamLimits

0x60cc,	// (0x00070928) sp_fs_action_menu_list_gene_pane

0x210d,	// (0x0006c969) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x210d,	// (0x0006c969) popup_sp_fs_action_menu_bg_pane

0x60eb,	// (0x00070947) sp_fs_action_menu_list_pane_ParamLimits

0x60eb,	// (0x00070947) sp_fs_action_menu_list_pane

0x211b,	// (0x0006c977) sp_fs_scroll_pane_cp01_ParamLimits

0x211b,	// (0x0006c977) sp_fs_scroll_pane_cp01

0x610b,	// (0x00070967) list_medium_line_plain_t2_t1

0x611b,	// (0x00070977) list_medium_line_plain_t2_t2

0x0001,

0xfcfa,	// (0x0007a556) list_medium_line_plain_t2_t

0x6129,	// (0x00070985) list_medium_line_plain_t3_t1

0x6139,	// (0x00070995) list_medium_line_plain_t3_t2

0x6147,	// (0x000709a3) list_medium_line_plain_t3_t3

0x0002,

0xfcff,	// (0x0007a55b) list_medium_line_plain_t3_t

0x57e0,	// (0x0007003c) list_medium_line_x2_t2_g2_g1_ParamLimits

0x57e0,	// (0x0007003c) list_medium_line_x2_t2_g2_g1

0x57f8,	// (0x00070054) list_medium_line_x2_t2_g2_g2_ParamLimits

0x57f8,	// (0x00070054) list_medium_line_x2_t2_g2_g2

0x0001,

0xf256,	// (0x00079ab2) list_medium_line_x2_t2_g2_g_ParamLimits

0xf256,	// (0x00079ab2) list_medium_line_x2_t2_g2_g

0x59a8,	// (0x00070204) list_medium_line_x2_t2_g2_t1_ParamLimits

0x59a8,	// (0x00070204) list_medium_line_x2_t2_g2_t1

0x582b,	// (0x00070087) list_medium_line_x2_t2_g2_t2_ParamLimits

0x582b,	// (0x00070087) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd06,	// (0x0007a562) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd06,	// (0x0007a562) list_medium_line_x2_t2_g2_t

0x57e0,	// (0x0007003c) list_medium_line_x2_t4_g2_g1_ParamLimits

0x57e0,	// (0x0007003c) list_medium_line_x2_t4_g2_g1

0x6155,	// (0x000709b1) list_medium_line_x2_t4_g2_g2_ParamLimits

0x6155,	// (0x000709b1) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd0b,	// (0x0007a567) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd0b,	// (0x0007a567) list_medium_line_x2_t4_g2_g

0x6167,	// (0x000709c3) list_medium_line_x2_t4_g2_t1_ParamLimits

0x6167,	// (0x000709c3) list_medium_line_x2_t4_g2_t1

0x617e,	// (0x000709da) list_medium_line_x2_t4_g2_t2_ParamLimits

0x617e,	// (0x000709da) list_medium_line_x2_t4_g2_t2

0x6193,	// (0x000709ef) list_medium_line_x2_t4_g2_t3_ParamLimits

0x6193,	// (0x000709ef) list_medium_line_x2_t4_g2_t3

0x582b,	// (0x00070087) list_medium_line_x2_t4_g2_t4_ParamLimits

0x582b,	// (0x00070087) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd10,	// (0x0007a56c) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd10,	// (0x0007a56c) list_medium_line_x2_t4_g2_t

0x61a5,	// (0x00070a01) list_medium_line_t3_right_iconx2_g1

0x602a,	// (0x00070886) list_medium_line_t3_right_iconx2_g2

0x61ad,	// (0x00070a09) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd19,	// (0x0007a575) list_medium_line_t3_right_iconx2_g

0x61b5,	// (0x00070a11) list_medium_line_t3_right_iconx2_t1

0x61c5,	// (0x00070a21) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd20,	// (0x0007a57c) list_medium_line_t3_right_iconx2_t

0x57e0,	// (0x0007003c) list_medium_line_x3_t4_g4_g1_ParamLimits

0x57e0,	// (0x0007003c) list_medium_line_x3_t4_g4_g1

0x57ec,	// (0x00070048) list_medium_line_x3_t4_g4_g2_ParamLimits

0x57ec,	// (0x00070048) list_medium_line_x3_t4_g4_g2

0x5892,	// (0x000700ee) list_medium_line_x3_t4_g4_g3_ParamLimits

0x5892,	// (0x000700ee) list_medium_line_x3_t4_g4_g3

0x61d3,	// (0x00070a2f) list_medium_line_x3_t4_g4_g4_ParamLimits

0x61d3,	// (0x00070a2f) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd25,	// (0x0007a581) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd25,	// (0x0007a581) list_medium_line_x3_t4_g4_g

0x61df,	// (0x00070a3b) list_medium_line_x3_t4_g4_t1_ParamLimits

0x61df,	// (0x00070a3b) list_medium_line_x3_t4_g4_t1

0x61f6,	// (0x00070a52) list_medium_line_x3_t4_g4_t2_ParamLimits

0x61f6,	// (0x00070a52) list_medium_line_x3_t4_g4_t2

0x620b,	// (0x00070a67) list_medium_line_x3_t4_g4_t3_ParamLimits

0x620b,	// (0x00070a67) list_medium_line_x3_t4_g4_t3

0x6220,	// (0x00070a7c) list_medium_line_x3_t4_g4_t4_ParamLimits

0x6220,	// (0x00070a7c) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd2e,	// (0x0007a58a) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd2e,	// (0x0007a58a) list_medium_line_x3_t4_g4_t

0x623d,	// (0x00070a99) list_single_dyc_row_text_pane_t1_ParamLimits

0x623d,	// (0x00070a99) list_single_dyc_row_text_pane_t1

0x6274,	// (0x00070ad0) list_single_dyc_row_text_pane_t2_ParamLimits

0x6274,	// (0x00070ad0) list_single_dyc_row_text_pane_t2

0x62ce,	// (0x00070b2a) list_single_dyc_row_text_pane_t3_ParamLimits

0x62ce,	// (0x00070b2a) list_single_dyc_row_text_pane_t3

0x0002,

0xfd37,	// (0x0007a593) list_single_dyc_row_text_pane_t_ParamLimits

0xfd37,	// (0x0007a593) list_single_dyc_row_text_pane_t

0x62e0,	// (0x00070b3c) list_single_dyc_row_pane_g1_ParamLimits

0x62e0,	// (0x00070b3c) list_single_dyc_row_pane_g1

0x62ec,	// (0x00070b48) list_single_dyc_row_pane_g2_ParamLimits

0x62ec,	// (0x00070b48) list_single_dyc_row_pane_g2

0x62f8,	// (0x00070b54) list_single_dyc_row_pane_g3_ParamLimits

0x62f8,	// (0x00070b54) list_single_dyc_row_pane_g3

0x6304,	// (0x00070b60) list_single_dyc_row_pane_g4_ParamLimits

0x6304,	// (0x00070b60) list_single_dyc_row_pane_g4

0x0003,

0xfd3e,	// (0x0007a59a) list_single_dyc_row_pane_g_ParamLimits

0xfd3e,	// (0x0007a59a) list_single_dyc_row_pane_g

0x6310,	// (0x00070b6c) list_single_dyc_row_text_pane_ParamLimits

0x6310,	// (0x00070b6c) list_single_dyc_row_text_pane

0x15e7,	// (0x0006be43) bg_sp_fs_scroll_pane

0x2141,	// (0x0006c99d) thumb_sp_fs_scroll_pane

0x5c42,	// (0x0007049e) list_medium_line_g1_ParamLimits

0x5c42,	// (0x0007049e) list_medium_line_g1

0x632f,	// (0x00070b8b) list_medium_line_t1_ParamLimits

0x632f,	// (0x00070b8b) list_medium_line_t1

0x57e0,	// (0x0007003c) list_medium_line_x2_g1_ParamLimits

0x57e0,	// (0x0007003c) list_medium_line_x2_g1

0x57ec,	// (0x00070048) list_medium_line_x2_g2_ParamLimits

0x57ec,	// (0x00070048) list_medium_line_x2_g2

0x0001,

0xfd47,	// (0x0007a5a3) list_medium_line_x2_g_ParamLimits

0xfd47,	// (0x0007a5a3) list_medium_line_x2_g

0x6344,	// (0x00070ba0) list_medium_line_x2_t1_ParamLimits

0x6344,	// (0x00070ba0) list_medium_line_x2_t1

0x57e0,	// (0x0007003c) list_medium_line_x3_g1_ParamLimits

0x57e0,	// (0x0007003c) list_medium_line_x3_g1

0x57ec,	// (0x00070048) list_medium_line_x3_g2_ParamLimits

0x57ec,	// (0x00070048) list_medium_line_x3_g2

0x0001,

0xfd47,	// (0x0007a5a3) list_medium_line_x3_g_ParamLimits

0xfd47,	// (0x0007a5a3) list_medium_line_x3_g

0x6344,	// (0x00070ba0) list_medium_line_x3_t1_ParamLimits

0x6344,	// (0x00070ba0) list_medium_line_x3_t1

0x214a,	// (0x0006c9a6) thumb_sp_fs_scroll_pane_g1

0x2153,	// (0x0006c9af) thumb_sp_fs_scroll_pane_g2

0x215c,	// (0x0006c9b8) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd4c,	// (0x0007a5a8) thumb_sp_fs_scroll_pane_g

0x214a,	// (0x0006c9a6) bg_sp_fs_scroll_pane_g1

0x2153,	// (0x0006c9af) bg_sp_fs_scroll_pane_g2

0x215c,	// (0x0006c9b8) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd4c,	// (0x0007a5a8) bg_sp_fs_scroll_pane_g

0x57e0,	// (0x0007003c) list_medium_line_x2_t3_g4_g1_ParamLimits

0x57e0,	// (0x0007003c) list_medium_line_x2_t3_g4_g1

0x5886,	// (0x000700e2) list_medium_line_x2_t3_g4_g2_ParamLimits

0x5886,	// (0x000700e2) list_medium_line_x2_t3_g4_g2

0x57ec,	// (0x00070048) list_medium_line_x2_t3_g4_g3_ParamLimits

0x57ec,	// (0x00070048) list_medium_line_x2_t3_g4_g3

0x57f8,	// (0x00070054) list_medium_line_x2_t3_g4_g4_ParamLimits

0x57f8,	// (0x00070054) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2d2,	// (0x00079b2e) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2d2,	// (0x00079b2e) list_medium_line_x2_t3_g4_g

0x635a,	// (0x00070bb6) list_medium_line_x2_t3_g4_t1_ParamLimits

0x635a,	// (0x00070bb6) list_medium_line_x2_t3_g4_t1

0x6370,	// (0x00070bcc) list_medium_line_x2_t3_g4_t2_ParamLimits

0x6370,	// (0x00070bcc) list_medium_line_x2_t3_g4_t2

0x582b,	// (0x00070087) list_medium_line_x2_t3_g4_t3_ParamLimits

0x582b,	// (0x00070087) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd53,	// (0x0007a5af) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd53,	// (0x0007a5af) list_medium_line_x2_t3_g4_t

0x5c42,	// (0x0007049e) list_medium_line_g2_g1_ParamLimits

0x5c42,	// (0x0007049e) list_medium_line_g2_g1

0x5c4e,	// (0x000704aa) list_medium_line_g2_g2_ParamLimits

0x5c4e,	// (0x000704aa) list_medium_line_g2_g2

0x0001,

0xfa0b,	// (0x0007a267) list_medium_line_g2_g_ParamLimits

0xfa0b,	// (0x0007a267) list_medium_line_g2_g

0x6389,	// (0x00070be5) list_medium_line_g2_t1_ParamLimits

0x6389,	// (0x00070be5) list_medium_line_g2_t1

0x5c42,	// (0x0007049e) list_medium_line_t3_g2_g1_ParamLimits

0x5c42,	// (0x0007049e) list_medium_line_t3_g2_g1

0x5c4e,	// (0x000704aa) list_medium_line_t3_g2_g2_ParamLimits

0x5c4e,	// (0x000704aa) list_medium_line_t3_g2_g2

0x0001,

0xfa0b,	// (0x0007a267) list_medium_line_t3_g2_g_ParamLimits

0xfa0b,	// (0x0007a267) list_medium_line_t3_g2_g

0x639e,	// (0x00070bfa) list_medium_line_t3_g2_t1_ParamLimits

0x639e,	// (0x00070bfa) list_medium_line_t3_g2_t1

0x63b8,	// (0x00070c14) list_medium_line_t3_g2_t2_ParamLimits

0x63b8,	// (0x00070c14) list_medium_line_t3_g2_t2

0x63cd,	// (0x00070c29) list_medium_line_t3_g2_t3_ParamLimits

0x63cd,	// (0x00070c29) list_medium_line_t3_g2_t3

0x0002,

0xfd5a,	// (0x0007a5b6) list_medium_line_t3_g2_t_ParamLimits

0xfd5a,	// (0x0007a5b6) list_medium_line_t3_g2_t

0x602a,	// (0x00070886) list_medium_line_right_icon_g1

0x63e3,	// (0x00070c3f) list_medium_line_right_icon_t1

0x5c42,	// (0x0007049e) list_medium_line_t2_g1_ParamLimits

0x5c42,	// (0x0007049e) list_medium_line_t2_g1

0x63f1,	// (0x00070c4d) list_medium_line_t2_t1_ParamLimits

0x63f1,	// (0x00070c4d) list_medium_line_t2_t1

0x640b,	// (0x00070c67) list_medium_line_t2_t2_ParamLimits

0x640b,	// (0x00070c67) list_medium_line_t2_t2

0x0001,

0xfd61,	// (0x0007a5bd) list_medium_line_t2_t_ParamLimits

0xfd61,	// (0x0007a5bd) list_medium_line_t2_t

0x5c42,	// (0x0007049e) list_medium_line_t3_g1_ParamLimits

0x5c42,	// (0x0007049e) list_medium_line_t3_g1

0x6420,	// (0x00070c7c) list_medium_line_t3_t1_ParamLimits

0x6420,	// (0x00070c7c) list_medium_line_t3_t1

0x6437,	// (0x00070c93) list_medium_line_t3_t2_ParamLimits

0x6437,	// (0x00070c93) list_medium_line_t3_t2

0x644c,	// (0x00070ca8) list_medium_line_t3_t3_ParamLimits

0x644c,	// (0x00070ca8) list_medium_line_t3_t3

0x0002,

0xfd66,	// (0x0007a5c2) list_medium_line_t3_t_ParamLimits

0xfd66,	// (0x0007a5c2) list_medium_line_t3_t

0x5c42,	// (0x0007049e) list_medium_line_g3_g1_ParamLimits

0x5c42,	// (0x0007049e) list_medium_line_g3_g1

0x645e,	// (0x00070cba) list_medium_line_g3_g2_ParamLimits

0x645e,	// (0x00070cba) list_medium_line_g3_g2

0x5c4e,	// (0x000704aa) list_medium_line_g3_g3_ParamLimits

0x5c4e,	// (0x000704aa) list_medium_line_g3_g3

0x0002,

0xfd6d,	// (0x0007a5c9) list_medium_line_g3_g_ParamLimits

0xfd6d,	// (0x0007a5c9) list_medium_line_g3_g

0x646a,	// (0x00070cc6) list_medium_line_g3_t1_ParamLimits

0x646a,	// (0x00070cc6) list_medium_line_g3_t1

0x5c42,	// (0x0007049e) list_medium_line_t2_g3_g1_ParamLimits

0x5c42,	// (0x0007049e) list_medium_line_t2_g3_g1

0x645e,	// (0x00070cba) list_medium_line_t2_g3_g2_ParamLimits

0x645e,	// (0x00070cba) list_medium_line_t2_g3_g2

0x5c4e,	// (0x000704aa) list_medium_line_t2_g3_g3_ParamLimits

0x5c4e,	// (0x000704aa) list_medium_line_t2_g3_g3

0x0002,

0xfd6d,	// (0x0007a5c9) list_medium_line_t2_g3_g_ParamLimits

0xfd6d,	// (0x0007a5c9) list_medium_line_t2_g3_g

0x647f,	// (0x00070cdb) list_medium_line_t2_g3_t1_ParamLimits

0x647f,	// (0x00070cdb) list_medium_line_t2_g3_t1

0x6496,	// (0x00070cf2) list_medium_line_t2_g3_t2_ParamLimits

0x6496,	// (0x00070cf2) list_medium_line_t2_g3_t2

0x0001,

0xfd74,	// (0x0007a5d0) list_medium_line_t2_g3_t_ParamLimits

0xfd74,	// (0x0007a5d0) list_medium_line_t2_g3_t

0x5c42,	// (0x0007049e) list_medium_line_t3_g3_g1_ParamLimits

0x5c42,	// (0x0007049e) list_medium_line_t3_g3_g1

0x645e,	// (0x00070cba) list_medium_line_t3_g3_g2_ParamLimits

0x645e,	// (0x00070cba) list_medium_line_t3_g3_g2

0x5c4e,	// (0x000704aa) list_medium_line_t3_g3_g3_ParamLimits

0x5c4e,	// (0x000704aa) list_medium_line_t3_g3_g3

0x0002,

0xfd6d,	// (0x0007a5c9) list_medium_line_t3_g3_g_ParamLimits

0xfd6d,	// (0x0007a5c9) list_medium_line_t3_g3_g

0x64ab,	// (0x00070d07) list_medium_line_t3_g3_t1_ParamLimits

0x64ab,	// (0x00070d07) list_medium_line_t3_g3_t1

0x64bf,	// (0x00070d1b) list_medium_line_t3_g3_t2_ParamLimits

0x64bf,	// (0x00070d1b) list_medium_line_t3_g3_t2

0x64d1,	// (0x00070d2d) list_medium_line_t3_g3_t3_ParamLimits

0x64d1,	// (0x00070d2d) list_medium_line_t3_g3_t3

0x0002,

0xfd79,	// (0x0007a5d5) list_medium_line_t3_g3_t_ParamLimits

0xfd79,	// (0x0007a5d5) list_medium_line_t3_g3_t

0x61a5,	// (0x00070a01) list_medium_line_right_iconx2_g1

0x602a,	// (0x00070886) list_medium_line_right_iconx2_g2

0x0001,

0xfd80,	// (0x0007a5dc) list_medium_line_right_iconx2_g

0x64e3,	// (0x00070d3f) list_medium_line_right_iconx2_t1

0x61a5,	// (0x00070a01) list_medium_line_t2_right_iconx2_g1

0x602a,	// (0x00070886) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd80,	// (0x0007a5dc) list_medium_line_t2_right_iconx2_g

0x64f1,	// (0x00070d4d) list_medium_line_t2_right_iconx2_t1

0x6501,	// (0x00070d5d) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd85,	// (0x0007a5e1) list_medium_line_t2_right_iconx2_t

0x650f,	// (0x00070d6b) list_medium_line_x4_t4_t1

0x651d,	// (0x00070d79) list_medium_line_x4_t4_t2

0x652d,	// (0x00070d89) list_medium_line_x4_t4_t3

0x653d,	// (0x00070d99) list_medium_line_x4_t4_t4

0x0003,

0xfd8a,	// (0x0007a5e6) list_medium_line_x4_t4_t

0xd82a,	// (0x00078086) tport_appsw_pane_ParamLimits

0xd82a,	// (0x00078086) tport_appsw_pane

0xd836,	// (0x00078092) tport_contact_pane_ParamLimits

0xd836,	// (0x00078092) tport_contact_pane

0xd846,	// (0x000780a2) tport_listscroll_pane_ParamLimits

0xd846,	// (0x000780a2) tport_listscroll_pane

0xd856,	// (0x000780b2) cell_tport_appsw_pane_ParamLimits

0xd856,	// (0x000780b2) cell_tport_appsw_pane

0xeb64,	// (0x000793c0) tport_appsw_pane_g1_ParamLimits

0xeb64,	// (0x000793c0) tport_appsw_pane_g1

0x2165,	// (0x0006c9c1) tport_contact_pane_g1

0x216e,	// (0x0006c9ca) tport_contact_pane_t1

0x217c,	// (0x0006c9d8) tport_contact_pane_t2

0x0001,

0xfd93,	// (0x0007a5ef) tport_contact_pane_t

0x218a,	// (0x0006c9e6) list_tport_pane

0x2193,	// (0x0006c9ef) scroll_pane_cp_030

0x21a4,	// (0x0006ca00) cell_tport_appsw_pane_g1

0x21b4,	// (0x0006ca10) cell_tport_appsw_pane_t1

0x15e7,	// (0x0006be43) grid_highlight_pane_cp019

0xd881,	// (0x000780dd) list_tport_double_graphic_pane_ParamLimits

0xd881,	// (0x000780dd) list_tport_double_graphic_pane

0x1f8f,	// (0x0006c7eb) list_highlight_pane_cp023_ParamLimits

0x1f8f,	// (0x0006c7eb) list_highlight_pane_cp023

0xd894,	// (0x000780f0) list_tport_double_graphic_pane_g1_ParamLimits

0xd894,	// (0x000780f0) list_tport_double_graphic_pane_g1

0xd8a1,	// (0x000780fd) list_tport_double_graphic_pane_t1_ParamLimits

0xd8a1,	// (0x000780fd) list_tport_double_graphic_pane_t1

0xd8b6,	// (0x00078112) list_tport_double_graphic_pane_t2_ParamLimits

0xd8b6,	// (0x00078112) list_tport_double_graphic_pane_t2

0x0001,

0xfd9f,	// (0x0007a5fb) list_tport_double_graphic_pane_t_ParamLimits

0xfd9f,	// (0x0007a5fb) list_tport_double_graphic_pane_t

0x15e7,	// (0x0006be43) main_cale_note_pane

0xbc92,	// (0x000764ee) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xbc92,	// (0x000764ee) cell_vitu2_function_top_wide_pane_cp01

0xd3fc,	// (0x00077c58) wait_bar_pane_cp05_ParamLimits

0x15e7,	// (0x0006be43) listscroll_cmail_pane

0x21ca,	// (0x0006ca26) list_cmail_pane

0xd8d2,	// (0x0007812e) list_cmail_body_pane

0xd8f6,	// (0x00078152) list_single_cmail_header_caption_pane

0xd924,	// (0x00078180) list_single_cmail_header_detail_pane_ParamLimits

0xd924,	// (0x00078180) list_single_cmail_header_detail_pane

0xd95c,	// (0x000781b8) list_single_cmail_header_caption_pane_t1

0x654d,	// (0x00070da9) list_single_cmail_header_detail_pane_g1_ParamLimits

0x654d,	// (0x00070da9) list_single_cmail_header_detail_pane_g1

0xd96c,	// (0x000781c8) list_single_cmail_header_detail_pane_g2_ParamLimits

0xd96c,	// (0x000781c8) list_single_cmail_header_detail_pane_g2

0x0002,

0xfda4,	// (0x0007a600) list_single_cmail_header_detail_pane_g_ParamLimits

0xfda4,	// (0x0007a600) list_single_cmail_header_detail_pane_g

0x6565,	// (0x00070dc1) list_single_cmail_header_detail_pane_t1_ParamLimits

0x6565,	// (0x00070dc1) list_single_cmail_header_detail_pane_t1

0x65bd,	// (0x00070e19) list_single_cmail_header_editor_pane_bg_ParamLimits

0x65bd,	// (0x00070e19) list_single_cmail_header_editor_pane_bg

0x21f7,	// (0x0006ca53) list_cmail_body_pane_g1

0x2200,	// (0x0006ca5c) list_cmail_body_pane_t1

0x0573,	// (0x0006adcf) list_single_cmail_header_editor_pane_bg_g1

0x2d03,	// (0x0006d55f) list_single_cmail_header_editor_pane_bg_g1_copy1

0x0583,	// (0x0006addf) list_single_cmail_header_editor_pane_bg_g1_copy2

0x057b,	// (0x0006add7) list_single_cmail_header_editor_pane_bg_g1_copy3

0x07ee,	// (0x0006b04a) list_single_cmail_header_editor_pane_bg_g1_copy4

0x05a3,	// (0x0006adff) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x0593,	// (0x0006adef) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x059b,	// (0x0006adf7) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x2ce3,	// (0x0006d53f) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xd978,	// (0x000781d4) calenote_gesture_pane_ParamLimits

0xd978,	// (0x000781d4) calenote_gesture_pane

0xd992,	// (0x000781ee) calenote_window_pane_ParamLimits

0xd992,	// (0x000781ee) calenote_window_pane

0x220e,	// (0x0006ca6a) popup_note_window_cp01

0xd9aa,	// (0x00078206) calenote_swipe_1_pane_ParamLimits

0xd9aa,	// (0x00078206) calenote_swipe_1_pane

0xd780,	// (0x00077fdc) calenote_swipe_2_pane_ParamLimits

0xd780,	// (0x00077fdc) calenote_swipe_2_pane

0x1fd0,	// (0x0006c82c) calenote_swipe_1_pane_g1_ParamLimits

0x1fd0,	// (0x0006c82c) calenote_swipe_1_pane_g1

0x1fdd,	// (0x0006c839) calenote_swipe_1_pane_g2_ParamLimits

0x1fdd,	// (0x0006c839) calenote_swipe_1_pane_g2

0x0001,

0xfcce,	// (0x0007a52a) calenote_swipe_1_pane_g_ParamLimits

0xfcce,	// (0x0007a52a) calenote_swipe_1_pane_g

0x2220,	// (0x0006ca7c) calenote_swipe_1_pane_t1_ParamLimits

0x2220,	// (0x0006ca7c) calenote_swipe_1_pane_t1

0x1fd0,	// (0x0006c82c) calenote_swipe_2_pane_g1_ParamLimits

0x1fd0,	// (0x0006c82c) calenote_swipe_2_pane_g1

0x223f,	// (0x0006ca9b) calenote_swipe_2_pane_g2_ParamLimits

0x223f,	// (0x0006ca9b) calenote_swipe_2_pane_g2

0x0001,

0xfdb0,	// (0x0007a60c) calenote_swipe_2_pane_g_ParamLimits

0xfdb0,	// (0x0007a60c) calenote_swipe_2_pane_g

0x224b,	// (0x0006caa7) calenote_swipe_2_pane_t1_ParamLimits

0x224b,	// (0x0006caa7) calenote_swipe_2_pane_t1

0x15e7,	// (0x0006be43) main_mup_navstr_pane

0xaa08,	// (0x00075264) main_mup3_pane_t7_ParamLimits

0xaa08,	// (0x00075264) main_mup3_pane_t7

0xb420,	// (0x00075c7c) main_mp4_pane_g6_ParamLimits

0xb420,	// (0x00075c7c) main_mp4_pane_g6

0xb794,	// (0x00075ff0) main_image3_pane_t4_ParamLimits

0xb794,	// (0x00075ff0) main_image3_pane_t4

0xd9bd,	// (0x00078219) popup_navstr_preview_pane_ParamLimits

0xd9bd,	// (0x00078219) popup_navstr_preview_pane

0xd9c9,	// (0x00078225) scroll_navstr_pane_ParamLimits

0xd9c9,	// (0x00078225) scroll_navstr_pane

0x15e7,	// (0x0006be43) bg_popup_preview_window_pane_cp04

0x2272,	// (0x0006cace) popup_navstr_preview_pane_t1

0xd9d5,	// (0x00078231) scroll_navstr_pane_g1_ParamLimits

0xd9d5,	// (0x00078231) scroll_navstr_pane_g1

0xd9e2,	// (0x0007823e) scroll_navstr_pane_t1_ParamLimits

0xd9e2,	// (0x0007823e) scroll_navstr_pane_t1

0x2217,	// (0x0006ca73) bg_button_pane_cp014

0x2217,	// (0x0006ca73) bg_button_pane_cp030

0x5f9f,	// (0x000707fb) list_double_fisheye_pane_g4_ParamLimits

0x5f9f,	// (0x000707fb) list_double_fisheye_pane_g4

0xd6bd,	// (0x00077f19) list_double_fisheye_pane_g5_ParamLimits

0xd6bd,	// (0x00077f19) list_double_fisheye_pane_g5

0x21d2,	// (0x0006ca2e) sp_fs_scroll_pane_cp03

0x20c3,	// (0x0006c91f) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x20cf,	// (0x0006c92b) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfceb,	// (0x0007a547) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x20db,	// (0x0006c937) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xd8c8,	// (0x00078124) sp_fs_scroll_pane_cp02

0x1e8a,	// (0x0006c6e6) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x1e8a,	// (0x0006c6e6) popup_sp_fs_calendar_preview_list_single_pane

0x15e7,	// (0x0006be43) main_cam6_pano_pane

0x1f8f,	// (0x0006c7eb) main_mup3_pane_ParamLimits

0x15e7,	// (0x0006be43) main_phacti_pane

0xd2d1,	// (0x00077b2d) bg_button_pane_cp11

0xd2e9,	// (0x00077b45) main_mobtv_info_pane_g2_ParamLimits

0xd2e9,	// (0x00077b45) main_mobtv_info_pane_g2

0x0001,

0xfc4b,	// (0x0007a4a7) main_mobtv_info_pane_g_ParamLimits

0xfc4b,	// (0x0007a4a7) main_mobtv_info_pane_g

0xd49b,	// (0x00077cf7) sc_clock_pane_t5_ParamLimits

0xd49b,	// (0x00077cf7) sc_clock_pane_t5

0xd541,	// (0x00077d9d) main_radioblah_pane_g1_ParamLimits

0x1554,	// (0x0006bdb0) main_radioblah_pane_t3_ParamLimits

0x1554,	// (0x0006bdb0) main_radioblah_pane_t3

0x156c,	// (0x0006bdc8) main_radioblah_pane_t4_ParamLimits

0x156c,	// (0x0006bdc8) main_radioblah_pane_t4

0xd55f,	// (0x00077dbb) main_radioblah_text_pane_ParamLimits

0xd55f,	// (0x00077dbb) main_radioblah_text_pane

0xd56c,	// (0x00077dc8) main_radioblah_info_pane_g1_ParamLimits

0xd601,	// (0x00077e5d) main_radioblah_info_pane_t4_ParamLimits

0xd601,	// (0x00077e5d) main_radioblah_info_pane_t4

0x1f8f,	// (0x0006c7eb) main_sp_fs_calendar_pane

0xd9f4,	// (0x00078250) main_phacti_pane_g1

0xd9fc,	// (0x00078258) phacti_note_pane_ParamLimits

0xd9fc,	// (0x00078258) phacti_note_pane

0x2289,	// (0x0006cae5) phacti_term_pane_ParamLimits

0x2289,	// (0x0006cae5) phacti_term_pane

0x229e,	// (0x0006cafa) phacti_note_pane_t1_ParamLimits

0x229e,	// (0x0006cafa) phacti_note_pane_t1

0x65cf,	// (0x00070e2b) phacti_term_pane_g1

0x65d7,	// (0x00070e33) phacti_term_pane_t1_ParamLimits

0x65d7,	// (0x00070e33) phacti_term_pane_t1

0x22b5,	// (0x0006cb11) popup_sp_fs_calendar_preview_list_single_pane_g1

0x22bd,	// (0x0006cb19) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdba,	// (0x0007a616) popup_sp_fs_calendar_preview_list_single_pane_g

0x22c5,	// (0x0006cb21) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x22c5,	// (0x0006cb21) popup_sp_fs_calendar_preview_list_single_pane_t1

0x22db,	// (0x0006cb37) aid_popup_sp_fs_bg_corner_pane

0xe869,	// (0x000790c5) popup_sp_fs_calendar_preview_bg_pane_g1

0x15e7,	// (0x0006be43) popup_sp_fs_calendar_preview_bg_pane

0x22e3,	// (0x0006cb3f) popup_sp_fs_calendar_preview_list_pane

0x1f8f,	// (0x0006c7eb) bg_main_sp_fs_cale_pane_ParamLimits

0x1f8f,	// (0x0006c7eb) bg_main_sp_fs_cale_pane

0x6601,	// (0x00070e5d) listscroll_cale_mrui_pane_ParamLimits

0x6601,	// (0x00070e5d) listscroll_cale_mrui_pane

0x6615,	// (0x00070e71) listscroll_sp_fs_schedule_track_pane

0x661e,	// (0x00070e7a) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x661e,	// (0x00070e7a) main_sp_fs_ctrlbar_pane_cp01

0x22eb,	// (0x0006cb47) main_sp_fs_ribbon_pane

0x22f3,	// (0x0006cb4f) popup_sp_fs_cale_preview_window

0xda43,	// (0x0007829f) list_single_sp_fs_schedule_track_pane_ParamLimits

0xda43,	// (0x0007829f) list_single_sp_fs_schedule_track_pane

0x6bc4,	// (0x00071420) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x6bc4,	// (0x00071420) bg_sp_fs_highlight_list_pane_cp03

0xda6b,	// (0x000782c7) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xda6b,	// (0x000782c7) list_single_sp_fs_schedule_track_pane_g1

0xda77,	// (0x000782d3) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xda77,	// (0x000782d3) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdbf,	// (0x0007a61b) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdbf,	// (0x0007a61b) list_single_sp_fs_schedule_track_pane_g

0xda83,	// (0x000782df) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xda83,	// (0x000782df) list_single_sp_fs_schedule_track_pane_t1

0xda9b,	// (0x000782f7) sp_fs_schedule_track_pane_ParamLimits

0xda9b,	// (0x000782f7) sp_fs_schedule_track_pane

0x2305,	// (0x0006cb61) sp_fs_schedule_track_pane_g1

0x230d,	// (0x0006cb69) sp_fs_schedule_track_pane_g2

0x2315,	// (0x0006cb71) sp_fs_schedule_track_pane_g3

0x231d,	// (0x0006cb79) sp_fs_schedule_track_pane_g4

0x2325,	// (0x0006cb81) sp_fs_schedule_track_pane_g5

0x0004,

0xfdc4,	// (0x0007a620) sp_fs_schedule_track_pane_g

0x0573,	// (0x0006adcf) bg_sp_fs_schedule_viewer_highlight_g1

0x2d03,	// (0x0006d55f) bg_sp_fs_schedule_viewer_highlight_g2

0x057b,	// (0x0006add7) bg_sp_fs_schedule_viewer_highlight_g3

0x0583,	// (0x0006addf) bg_sp_fs_schedule_viewer_highlight_g4

0x07ee,	// (0x0006b04a) bg_sp_fs_schedule_viewer_highlight_g5

0x0593,	// (0x0006adef) bg_sp_fs_schedule_viewer_highlight_g6

0x059b,	// (0x0006adf7) bg_sp_fs_schedule_viewer_highlight_g7

0x05a3,	// (0x0006adff) bg_sp_fs_schedule_viewer_highlight_g8

0x2ce3,	// (0x0006d53f) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdcf,	// (0x0007a62b) bg_sp_fs_schedule_viewer_highlight_g

0x15e7,	// (0x0006be43) bg_main_sp_fs_ribbon_pane

0xdaab,	// (0x00078307) main_sp_fs_ribbon_pane_g1

0x232d,	// (0x0006cb89) main_sp_fs_ribbon_pane_t1

0xdab6,	// (0x00078312) main_sp_fs_ribbon_pane_t2

0x233c,	// (0x0006cb98) main_sp_fs_ribbon_pane_t3

0x0002,

0xfde2,	// (0x0007a63e) main_sp_fs_ribbon_pane_t

0x234b,	// (0x0006cba7) main_sp_fs_ribbon_scheduler_pane

0x2353,	// (0x0006cbaf) bg_main_sp_fs_ribbon_pane_g1

0x235c,	// (0x0006cbb8) bg_main_sp_fs_ribbon_pane_g2

0x2365,	// (0x0006cbc1) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfde9,	// (0x0007a645) bg_main_sp_fs_ribbon_pane_g

0x236d,	// (0x0006cbc9) main_sp_fs_ribbon_scheduler_pane_g1

0x2376,	// (0x0006cbd2) main_sp_fs_ribbon_scheduler_pane_g2

0x237f,	// (0x0006cbdb) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdf0,	// (0x0007a64c) main_sp_fs_ribbon_scheduler_pane_g

0x2388,	// (0x0006cbe4) list_cale_mrui_pane

0xdac7,	// (0x00078323) sp_fs_scroll_pane_cp07_ParamLimits

0xdac7,	// (0x00078323) sp_fs_scroll_pane_cp07

0xdadd,	// (0x00078339) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xdadd,	// (0x00078339) bg_sp_fs_schedule_viewer_highlight

0x2391,	// (0x0006cbed) list_single_sp_fs_schedule_track_pane_cp01

0x2399,	// (0x0006cbf5) list_sp_fs_schedule_track_pane

0x23a1,	// (0x0006cbfd) sp_fs_scroll_pane_cp06_ParamLimits

0x23a1,	// (0x0006cbfd) sp_fs_scroll_pane_cp06

0xe869,	// (0x000790c5) bgmain_sp_fs_calendar_pane_g1

0x662f,	// (0x00070e8b) list_single_cale_mrui_pane_ParamLimits

0x662f,	// (0x00070e8b) list_single_cale_mrui_pane

0x665e,	// (0x00070eba) list_single_cale_mrui_row_pane_ParamLimits

0x665e,	// (0x00070eba) list_single_cale_mrui_row_pane

0x666b,	// (0x00070ec7) list_single_cale_mrui_row_pane_g1_ParamLimits

0x666b,	// (0x00070ec7) list_single_cale_mrui_row_pane_g1

0x66a3,	// (0x00070eff) list_single_cale_mrui_row_pane_t1_ParamLimits

0x66a3,	// (0x00070eff) list_single_cale_mrui_row_pane_t1

0x66b5,	// (0x00070f11) list_single_cale_mrui_row_pane_t2_ParamLimits

0x66b5,	// (0x00070f11) list_single_cale_mrui_row_pane_t2

0x671b,	// (0x00070f77) list_single_cale_mrui_row_pane_t3_ParamLimits

0x671b,	// (0x00070f77) list_single_cale_mrui_row_pane_t3

0x674a,	// (0x00070fa6) list_single_cale_mrui_row_pane_t4_ParamLimits

0x674a,	// (0x00070fa6) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdfe,	// (0x0007a65a) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdfe,	// (0x0007a65a) list_single_cale_mrui_row_pane_t

0x6779,	// (0x00070fd5) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x6779,	// (0x00070fd5) list_single_cmail_header_editor_pane_bg_cp01

0x679b,	// (0x00070ff7) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x679b,	// (0x00070ff7) list_single_cmail_header_editor_pane_bg_cp02

0xdaea,	// (0x00078346) main_radioblah_text_pane_t1_ParamLimits

0xdaea,	// (0x00078346) main_radioblah_text_pane_t1

0x23c0,	// (0x0006cc1c) cam6_indi_pane_cp01

0x23c8,	// (0x0006cc24) cam6_mode_pane_cp01

0x23d0,	// (0x0006cc2c) cam6_pano_pane

0x23d9,	// (0x0006cc35) cam6_zoom_pane_cp01

0x23e1,	// (0x0006cc3d) cam6_pano_image_pane

0x23ec,	// (0x0006cc48) cam6_pano_pane_g1

0x12b3,	// (0x0006bb0f) cam6_pano_pane_g2

0x23f5,	// (0x0006cc51) cam6_pano_pane_g3

0x23fe,	// (0x0006cc5a) cam6_pano_pane_g4

0xee3b,	// (0x00079697) cam6_pano_pane_g5

0x2407,	// (0x0006cc63) cam6_pano_pane_g6

0x2411,	// (0x0006cc6d) cam6_pano_pane_g7

0x2419,	// (0x0006cc75) cam6_pano_pane_g8

0x2422,	// (0x0006cc7e) cam6_pano_pane_g9

0x0008,

0xfe07,	// (0x0007a663) cam6_pano_pane_g

0x15e7,	// (0x0006be43) main_browser_tag_pane

0x226a,	// (0x0006cac6) grid_navstr_albumart_pane

0x242d,	// (0x0006cc89) cell_navstr_albumart_pane_ParamLimits

0x242d,	// (0x0006cc89) cell_navstr_albumart_pane

0x363e,	// (0x0006de9a) cell_navstr_albumart_pane_g1

0x472f,	// (0x0006ef8b) cell_navstr_albumart_pane_g2

0x473f,	// (0x0006ef9b) cell_navstr_albumart_pane_g3

0x4737,	// (0x0006ef93) cell_navstr_albumart_pane_g4

0x0003,

0xfe1a,	// (0x0007a676) cell_navstr_albumart_pane_g

0xdb07,	// (0x00078363) bt_list_pane_ParamLimits

0xdb07,	// (0x00078363) bt_list_pane

0xdb2e,	// (0x0007838a) bt_list_pane_t1

0xdb3d,	// (0x00078399) bt_list_pane_t2

0x0001,

0xfe23,	// (0x0007a67f) bt_list_pane_t

0x15e7,	// (0x0006be43) main_cale_prevew_pane

0xdb4c,	// (0x000783a8) popup_cale_preview_window_ParamLimits

0xdb4c,	// (0x000783a8) popup_cale_preview_window

0x1f8f,	// (0x0006c7eb) bg_popup_preview_window_pane_cp05_ParamLimits

0x1f8f,	// (0x0006c7eb) bg_popup_preview_window_pane_cp05

0x244f,	// (0x0006ccab) list_cale_preview_pane_ParamLimits

0x244f,	// (0x0006ccab) list_cale_preview_pane

0xdb63,	// (0x000783bf) list_double_cale_preview_pane_ParamLimits

0xdb63,	// (0x000783bf) list_double_cale_preview_pane

0xdb75,	// (0x000783d1) list_single_cale_preview_pane_ParamLimits

0xdb75,	// (0x000783d1) list_single_cale_preview_pane

0xdb89,	// (0x000783e5) list_single_cale_preview_pane_g1

0xdb91,	// (0x000783ed) list_single_cale_preview_pane_t1_ParamLimits

0xdb91,	// (0x000783ed) list_single_cale_preview_pane_t1

0xdba6,	// (0x00078402) list_double_cale_preview_pane_g1

0xdbae,	// (0x0007840a) list_double_cale_preview_pane_t1_ParamLimits

0xdbae,	// (0x0007840a) list_double_cale_preview_pane_t1

0xdbc3,	// (0x0007841f) list_double_cale_preview_pane_t2_ParamLimits

0xdbc3,	// (0x0007841f) list_double_cale_preview_pane_t2

0x0001,

0xfe28,	// (0x0007a684) list_double_cale_preview_pane_t_ParamLimits

0xfe28,	// (0x0007a684) list_double_cale_preview_pane_t

0x15e7,	// (0x0006be43) main_ezdial_pane

0x1f8f,	// (0x0006c7eb) main_sp_fs_email_pane_ParamLimits

0xd798,	// (0x00077ff4) cmail_ddmenu_btn01_pane_ParamLimits

0xd798,	// (0x00077ff4) cmail_ddmenu_btn01_pane

0xd7b5,	// (0x00078011) cmail_ddmenu_btn02_pane_ParamLimits

0xd7b5,	// (0x00078011) cmail_ddmenu_btn02_pane

0xd7d3,	// (0x0007802f) cmail_ddmenu_btn03_pane_ParamLimits

0xd7d3,	// (0x0007802f) cmail_ddmenu_btn03_pane

0x6050,	// (0x000708ac) main_sp_fs_ctrlbar_pane_ParamLimits

0x606a,	// (0x000708c6) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xd8d2,	// (0x0007812e) list_cmail_body_pane_ParamLimits

0x21e1,	// (0x0006ca3d) bg_button_pane_cp12

0x21ea,	// (0x0006ca46) list_single_cmail_header_detail_pane_g3_ParamLimits

0x21ea,	// (0x0006ca46) list_single_cmail_header_detail_pane_g3

0x6597,	// (0x00070df3) list_single_cmail_header_detail_pane_t2_ParamLimits

0x6597,	// (0x00070df3) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdab,	// (0x0007a607) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdab,	// (0x0007a607) list_single_cmail_header_detail_pane_t

0x65ec,	// (0x00070e48) phacti_term_pane_t2_ParamLimits

0x65ec,	// (0x00070e48) phacti_term_pane_t2

0x0001,

0xfdb5,	// (0x0007a611) phacti_term_pane_t_ParamLimits

0xfdb5,	// (0x0007a611) phacti_term_pane_t

0x245b,	// (0x0006ccb7) aid_size_list_single_double

0xdbdb,	// (0x00078437) popup_ezdial_listscroll_window

0xdbfe,	// (0x0007845a) popup_number_entry_window_cp01

0x34cf,	// (0x0006dd2b) bg_popup_call_pane_cp09

0x2467,	// (0x0006ccc3) ezdial_list_pane

0x246f,	// (0x0006cccb) scroll_pane_cp23

0xe64c,	// (0x00078ea8) bg_button_pane_cp028_ParamLimits

0xe64c,	// (0x00078ea8) bg_button_pane_cp028

0xdc0c,	// (0x00078468) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xdc0c,	// (0x00078468) cmail_ddmenu_btn01_pane_g1

0xdc1e,	// (0x0007847a) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xdc1e,	// (0x0007847a) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe2d,	// (0x0007a689) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe2d,	// (0x0007a689) cmail_ddmenu_btn01_pane_g

0x2477,	// (0x0006ccd3) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x2477,	// (0x0006ccd3) cmail_ddmenu_btn01_pane_t1

0x491a,	// (0x0006f176) bg_button_pane_cp029_ParamLimits

0x491a,	// (0x0006f176) bg_button_pane_cp029

0xdc1e,	// (0x0007847a) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xdc1e,	// (0x0007847a) cmail_ddmenu_btn02_pane_g1

0xdc36,	// (0x00078492) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xdc36,	// (0x00078492) cmail_ddmenu_btn02_pane_t1

0x6bc4,	// (0x00071420) bg_button_pane_cp031_ParamLimits

0x6bc4,	// (0x00071420) bg_button_pane_cp031

0xdc1e,	// (0x0007847a) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xdc1e,	// (0x0007847a) cmail_ddmenu_btn03_pane_g1

0xdc36,	// (0x00078492) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xdc36,	// (0x00078492) cmail_ddmenu_btn03_pane_t1

0xb63f,	// (0x00075e9b) cell_dialer2_keypad_pane_t1_ParamLimits

0xb659,	// (0x00075eb5) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xb659,	// (0x00075eb5) cell_dialer2_keypad_pane_t1_copy1

0xd156,	// (0x000779b2) ncimui_group_button_pane

0x1f8f,	// (0x0006c7eb) main_sp_fs_calendar_pane_ParamLimits

0xd8f6,	// (0x00078152) list_single_cmail_header_caption_pane_ParamLimits

0x1fa6,	// (0x0006c802) aid_recal_txt_sm_pane

0x15e7,	// (0x0006be43) mian_recal_day_pane

0x22f3,	// (0x0006cb4f) popup_sp_fs_cale_preview_window_ParamLimits

0x15e7,	// (0x0006be43) list_recal_day_pane

0x24a6,	// (0x0006cd02) list_single_recal_day_pane_ParamLimits

0x24a6,	// (0x0006cd02) list_single_recal_day_pane

0x24b8,	// (0x0006cd14) list_single_recal_day_pane_g1_ParamLimits

0x24b8,	// (0x0006cd14) list_single_recal_day_pane_g1

0x24c4,	// (0x0006cd20) list_single_recal_day_pane_g2_ParamLimits

0x24c4,	// (0x0006cd20) list_single_recal_day_pane_g2

0x24d4,	// (0x0006cd30) list_single_recal_day_pane_g3_ParamLimits

0x24d4,	// (0x0006cd30) list_single_recal_day_pane_g3

0xdc5a,	// (0x000784b6) list_single_recal_day_pane_g4_ParamLimits

0xdc5a,	// (0x000784b6) list_single_recal_day_pane_g4

0x24e0,	// (0x0006cd3c) list_single_recal_day_pane_g5_ParamLimits

0x24e0,	// (0x0006cd3c) list_single_recal_day_pane_g5

0x24f0,	// (0x0006cd4c) list_single_recal_day_pane_g6_ParamLimits

0x24f0,	// (0x0006cd4c) list_single_recal_day_pane_g6

0x0004,

0xfe3c,	// (0x0007a698) list_single_recal_day_pane_g_ParamLimits

0xfe3c,	// (0x0007a698) list_single_recal_day_pane_g

0x2507,	// (0x0006cd63) list_single_recal_day_pane_t1

0x2519,	// (0x0006cd75) list_single_recal_day_pane_t2

0x0001,

0xfe47,	// (0x0007a6a3) list_single_recal_day_pane_t

0xdc7a,	// (0x000784d6) ncimui_query_button_pane_ParamLimits

0xdc7a,	// (0x000784d6) ncimui_query_button_pane

0xdc8a,	// (0x000784e6) ncimui_query_button_pane_t1_ParamLimits

0xdc8a,	// (0x000784e6) ncimui_query_button_pane_t1

0x252e,	// (0x0006cd8a) ncimui_query_button_pane_t2_ParamLimits

0x252e,	// (0x0006cd8a) ncimui_query_button_pane_t2

0x0001,

0xfe4c,	// (0x0007a6a8) ncimui_query_button_pane_t_ParamLimits

0xfe4c,	// (0x0007a6a8) ncimui_query_button_pane_t

0xdc9d,	// (0x000784f9) query_button_pane_ParamLimits

0xdc9d,	// (0x000784f9) query_button_pane

0x15e7,	// (0x0006be43) bg_button_pane_cp0028

0x2541,	// (0x0006cd9d) query_button_pane_t1

0x99d6,	// (0x00074232) main_tport_pane_ParamLimits

0xd801,	// (0x0007805d) bg_popup_window_pane_cp01_ParamLimits

0xd801,	// (0x0007805d) bg_popup_window_pane_cp01

0xd80e,	// (0x0007806a) heading_pane_cp08_ParamLimits

0xd80e,	// (0x0007806a) heading_pane_cp08

0xd81c,	// (0x00078078) heading_pane_cp07_ParamLimits

0xd81c,	// (0x00078078) heading_pane_cp07

0x21a4,	// (0x0006ca00) cell_tport_appsw_pane_g2

0x0002,

0xfd98,	// (0x0007a5f4) cell_tport_appsw_pane_g

0x5a01,	// (0x0007025d) input_candi_list_open_g1

0x2ec8,	// (0x0006d724) list_cale_time_pane_g6_ParamLimits

0x2ec8,	// (0x0006d724) list_cale_time_pane_g6

0xa45d,	// (0x00074cb9) aid_size_touch_calib_1_ParamLimits

0xa45d,	// (0x00074cb9) aid_size_touch_calib_1

0xa469,	// (0x00074cc5) aid_size_touch_calib_2_ParamLimits

0xa469,	// (0x00074cc5) aid_size_touch_calib_2

0xa477,	// (0x00074cd3) aid_size_touch_calib_3_ParamLimits

0xa477,	// (0x00074cd3) aid_size_touch_calib_3

0xa487,	// (0x00074ce3) aid_size_touch_calib_4_ParamLimits

0xa487,	// (0x00074ce3) aid_size_touch_calib_4

0xa495,	// (0x00074cf1) main_touch_calib_button_group_pane_ParamLimits

0xa495,	// (0x00074cf1) main_touch_calib_button_group_pane

0xa4a3,	// (0x00074cff) main_touch_calib_pane_g1_ParamLimits

0xa4af,	// (0x00074d0b) main_touch_calib_pane_g2_ParamLimits

0xa4bb,	// (0x00074d17) main_touch_calib_pane_g3_ParamLimits

0xa4c7,	// (0x00074d23) main_touch_calib_pane_g4_ParamLimits

0xf761,	// (0x00079fbd) main_touch_calib_pane_g_ParamLimits

0xa4d3,	// (0x00074d2f) main_touch_calib_pane_t1_ParamLimits

0xa4ea,	// (0x00074d46) main_touch_calib_pane_t2_ParamLimits

0xa501,	// (0x00074d5d) main_touch_calib_pane_t3_ParamLimits

0xa515,	// (0x00074d71) main_touch_calib_pane_t4_ParamLimits

0xa529,	// (0x00074d85) main_touch_calib_pane_t5_ParamLimits

0xf76a,	// (0x00079fc6) main_touch_calib_pane_t_ParamLimits

0xec0b,	// (0x00079467) list_single_fp_cale_pane_g3_ParamLimits

0xec0b,	// (0x00079467) list_single_fp_cale_pane_g3

0x1f8f,	// (0x0006c7eb) bg_button_pane_cp012_ParamLimits

0x1f8f,	// (0x0006c7eb) bg_vkb2_func_pane_cp03_ParamLimits

0xc413,	// (0x00076c6f) cell_vitu2_function_top_pane_g1_ParamLimits

0x1f8f,	// (0x0006c7eb) bg_vkb2_func_pane_cp04_ParamLimits

0xd0de,	// (0x0007793a) main_ncimui_button_group_pane_ParamLimits

0xd0de,	// (0x0007793a) main_ncimui_button_group_pane

0xd144,	// (0x000779a0) main_ncimui_pane_t3_ParamLimits

0xd144,	// (0x000779a0) main_ncimui_pane_t3

0x2280,	// (0x0006cadc) phacti_button_group_pane

0x245b,	// (0x0006ccb7) aid_size_list_single_double_ParamLimits

0xdbdb,	// (0x00078437) popup_ezdial_listscroll_window_ParamLimits

0xdbfe,	// (0x0007845a) popup_number_entry_window_cp01_ParamLimits

0xdcaa,	// (0x00078506) phacti_button_pane_ParamLimits

0xdcaa,	// (0x00078506) phacti_button_pane

0x15e7,	// (0x0006be43) bg_button_pane_cp14

0x254f,	// (0x0006cdab) phacti_button_pane_t1

0xdcbb,	// (0x00078517) main_touch_calib_button_pane_ParamLimits

0xdcbb,	// (0x00078517) main_touch_calib_button_pane

0x1d74,	// (0x0006c5d0) bg_button_pane_cp18_ParamLimits

0x1d74,	// (0x0006c5d0) bg_button_pane_cp18

0x255d,	// (0x0006cdb9) main_touch_calib_button_pane_t1_ParamLimits

0x255d,	// (0x0006cdb9) main_touch_calib_button_pane_t1

0x2573,	// (0x0006cdcf) main_touch_calib_button_pane_t2_ParamLimits

0x2573,	// (0x0006cdcf) main_touch_calib_button_pane_t2

0x0001,

0xfe51,	// (0x0007a6ad) main_touch_calib_button_pane_t_ParamLimits

0xfe51,	// (0x0007a6ad) main_touch_calib_button_pane_t

0x15e7,	// (0x0006be43) cell_ncimui_button_pane

0x15e7,	// (0x0006be43) bg_button_pane_cp032

0x2591,	// (0x0006cded) cell_ncimui_button_pane_t1

0xb6b5,	// (0x00075f11) image3_infobar_pane_ParamLimits

0xb6b5,	// (0x00075f11) image3_infobar_pane

0xd4bd,	// (0x00077d19) fs_bigclock_status_pane_ParamLimits

0xd4bd,	// (0x00077d19) fs_bigclock_status_pane

0xd4ca,	// (0x00077d26) main_fs_bigclock_clock_pane_ParamLimits

0xd4ca,	// (0x00077d26) main_fs_bigclock_clock_pane

0xd4e0,	// (0x00077d3c) main_fs_bigclock_indi_pane_ParamLimits

0xd4e0,	// (0x00077d3c) main_fs_bigclock_indi_pane

0xd50f,	// (0x00077d6b) main_fs_bigclock_swipe_pane_ParamLimits

0xd50f,	// (0x00077d6b) main_fs_bigclock_swipe_pane

0x15e7,	// (0x0006be43) main_fs_clock_dumped_data

0x13c0,	// (0x0006bc1c) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x13c0,	// (0x0006bc1c) list_single_fs_bigclock_indicator_pane_g1

0x13e9,	// (0x0006bc45) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x13e9,	// (0x0006bc45) list_single_fs_bigclock_indicator_pane_g2

0x1403,	// (0x0006bc5f) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x1403,	// (0x0006bc5f) list_single_fs_bigclock_indicator_pane_g3

0x141d,	// (0x0006bc79) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x141d,	// (0x0006bc79) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc7f,	// (0x0007a4db) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc7f,	// (0x0007a4db) list_single_fs_bigclock_indicator_pane_g

0x1446,	// (0x0006bca2) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x1446,	// (0x0006bca2) list_single_fs_bigclock_indicator_pane_t1

0x146e,	// (0x0006bcca) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x146e,	// (0x0006bcca) list_single_fs_bigclock_indicator_pane_t2

0x1496,	// (0x0006bcf2) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x1496,	// (0x0006bcf2) list_single_fs_bigclock_indicator_pane_t3

0x14be,	// (0x0006bd1a) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x14be,	// (0x0006bd1a) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc8a,	// (0x0007a4e6) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc8a,	// (0x0007a4e6) list_single_fs_bigclock_indicator_pane_t

0x259f,	// (0x0006cdfb) image3_infobar_fav_pane_ParamLimits

0x259f,	// (0x0006cdfb) image3_infobar_fav_pane

0x25af,	// (0x0006ce0b) image3_infobar_loc_pane_ParamLimits

0x25af,	// (0x0006ce0b) image3_infobar_loc_pane

0x25c3,	// (0x0006ce1f) image3_infobar_time_pane_ParamLimits

0x25c3,	// (0x0006ce1f) image3_infobar_time_pane

0xe869,	// (0x000790c5) image3_infobar_time_pane_g1

0x25d3,	// (0x0006ce2f) image3_infobar_time_pane_t1

0xe869,	// (0x000790c5) image3_infobar_loc_pane_g1

0x25e1,	// (0x0006ce3d) image3_infobar_loc_pane_g2

0x0001,

0xfe56,	// (0x0007a6b2) image3_infobar_loc_pane_g

0x25e9,	// (0x0006ce45) image3_infobar_loc_pane_t1

0xe869,	// (0x000790c5) image3_infobar_fav_pane_g1

0x25f7,	// (0x0006ce53) image3_infobar_fav_pane_g2

0x0001,

0xfe5b,	// (0x0007a6b7) image3_infobar_fav_pane_g

0x25ff,	// (0x0006ce5b) fs_bigclock_status_battery_pane

0x2608,	// (0x0006ce64) fs_bigclock_status_signal_pane

0x2611,	// (0x0006ce6d) fs_bigclock_status_title_pane

0x261a,	// (0x0006ce76) fs_bigclock_status_signal_pane_g1

0x2623,	// (0x0006ce7f) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe60,	// (0x0007a6bc) fs_bigclock_status_signal_pane_g

0x262b,	// (0x0006ce87) fs_bigclock_status_battery_pane_g1

0x2634,	// (0x0006ce90) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe65,	// (0x0007a6c1) fs_bigclock_status_battery_pane_g

0x263c,	// (0x0006ce98) fs_bigclock_status_title_pane_t1

0xe869,	// (0x000790c5) main_fs_bigclock_clock_pane_g1

0x264a,	// (0x0006cea6) main_fs_bigclock_clock_pane_g2

0x264a,	// (0x0006cea6) main_fs_bigclock_clock_pane_g3

0x264a,	// (0x0006cea6) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe6a,	// (0x0007a6c6) main_fs_bigclock_clock_pane_g

0x2652,	// (0x0006ceae) main_fs_bigclock_clock_pane_t1

0x2660,	// (0x0006cebc) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe73,	// (0x0007a6cf) main_fs_bigclock_clock_pane_t

0x266f,	// (0x0006cecb) list_single_fs_bigclock_indicator_pane_ParamLimits

0x266f,	// (0x0006cecb) list_single_fs_bigclock_indicator_pane

0xdccb,	// (0x00078527) list_single_fs_bigclock_pane_ParamLimits

0xdccb,	// (0x00078527) list_single_fs_bigclock_pane

0x2689,	// (0x0006cee5) main_fs_bigclock_indicator_pane_t1

0x2698,	// (0x0006cef4) list_single_fs_bigclock_pane_g1

0x26a0,	// (0x0006cefc) list_single_fs_bigclock_pane_t1

0xe869,	// (0x000790c5) main_fs_bigclock_swipe_pane_g1

0x26e3,	// (0x0006cf3f) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe84,	// (0x0007a6e0) main_fs_bigclock_swipe_pane_g

0x26eb,	// (0x0006cf47) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x26eb,	// (0x0006cf47) main_fs_bigclock_swipe_pane_t1

0x8977,	// (0x000731d3) call_type_pane_ParamLimits

0x15e7,	// (0x0006be43) main_btmg_pane

0x6697,	// (0x00070ef3) list_single_cale_mrui_row_pane_g2_ParamLimits

0x6697,	// (0x00070ef3) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf7,	// (0x0007a653) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf7,	// (0x0007a653) list_single_cale_mrui_row_pane_g

0x2496,	// (0x0006ccf2) list_recal_vselct_arw_lo_pane

0x249e,	// (0x0006ccfa) list_recal_vselct_arw_up_pane

0x1f9d,	// (0x0006c7f9) list_recal_vselct_pane

0xdd2e,	// (0x0007858a) btmg_button_pane

0xdd3a,	// (0x00078596) main_btmg_pane_g1

0x15e7,	// (0x0006be43) bg_button_pane_cp044

0x2708,	// (0x0006cf64) btmg_button_pane_t1

0x4912,	// (0x0006f16e) aid_listscroll_gen

0x1f8f,	// (0x0006c7eb) main_cntbar_detail_pane

0x21c2,	// (0x0006ca1e) list_cmail_folder_pane

0x21d2,	// (0x0006ca2e) sp_fs_scroll_pane_cp03_ParamLimits

0x67b7,	// (0x00071013) list_single_fs_dyc_pane_cp01_ParamLimits

0x67b7,	// (0x00071013) list_single_fs_dyc_pane_cp01

0x2716,	// (0x0006cf72) aid_size_cmail_indent

0x67e3,	// (0x0007103f) list_single_dyc_row_pane_cp01

0xdd62,	// (0x000785be) cntbar_detail_list_pane_ParamLimits

0xdd62,	// (0x000785be) cntbar_detail_list_pane

0xdd9c,	// (0x000785f8) main_cntbar_detail_cont_pane_ParamLimits

0xdd9c,	// (0x000785f8) main_cntbar_detail_cont_pane

0x896b,	// (0x000731c7) scroll_pane_cp032_ParamLimits

0x896b,	// (0x000731c7) scroll_pane_cp032

0xdda8,	// (0x00078604) cntbar_detail_list_event_pane_ParamLimits

0xdda8,	// (0x00078604) cntbar_detail_list_event_pane

0xdd6e,	// (0x000785ca) cntbar_detail_list_shct_pane

0x2d51,	// (0x0006d5ad) aid_list_gen

0x271f,	// (0x0006cf7b) aid_scroll

0x2728,	// (0x0006cf84) aid_size_touch_scroll_bar

0xc993,	// (0x000771ef) aid_list_double

0x273a,	// (0x0006cf96) aid_list_single

0xe9d4,	// (0x00079230) aid_list_single_lg

0x67ec,	// (0x00071048) aid_list_z_g_a_sm

0xddbc,	// (0x00078618) aid_list_z_g_d

0x67f4,	// (0x00071050) aid_txt_z_prm

0x6802,	// (0x0007105e) aid_txt_z_prm_cp01

0x6810,	// (0x0007106c) aid_txt_z_sec

0xddc4,	// (0x00078620) main_cntbar_detail_cont_pane_g1_ParamLimits

0xddc4,	// (0x00078620) main_cntbar_detail_cont_pane_g1

0xddd1,	// (0x0007862d) main_cntbar_detail_cont_pane_g2_ParamLimits

0xddd1,	// (0x0007862d) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe89,	// (0x0007a6e5) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe89,	// (0x0007a6e5) main_cntbar_detail_cont_pane_g

0x2743,	// (0x0006cf9f) main_cntbar_detail_cont_pane_t1

0x2751,	// (0x0006cfad) main_cntbar_detail_cont_pane_t2

0x275f,	// (0x0006cfbb) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe8e,	// (0x0007a6ea) main_cntbar_detail_cont_pane_t

0xdddd,	// (0x00078639) cell_cntbar_detail_list_shct_pane_ParamLimits

0xdddd,	// (0x00078639) cell_cntbar_detail_list_shct_pane

0x276d,	// (0x0006cfc9) cntbar_detail_list_shct_pane_g1

0x2776,	// (0x0006cfd2) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe95,	// (0x0007a6f1) cntbar_detail_list_shct_pane_g

0xddf1,	// (0x0007864d) cntbar_detail_list_event_pane_g1_ParamLimits

0xddf1,	// (0x0007864d) cntbar_detail_list_event_pane_g1

0xddfd,	// (0x00078659) cntbar_detail_list_event_pane_g2_ParamLimits

0xddfd,	// (0x00078659) cntbar_detail_list_event_pane_g2

0x0005,

0xfe9a,	// (0x0007a6f6) cntbar_detail_list_event_pane_g_ParamLimits

0xfe9a,	// (0x0007a6f6) cntbar_detail_list_event_pane_g

0xde69,	// (0x000786c5) cntbar_detail_list_event_pane_t1_ParamLimits

0xde69,	// (0x000786c5) cntbar_detail_list_event_pane_t1

0xde7e,	// (0x000786da) cntbar_detail_list_event_pane_t2_ParamLimits

0xde7e,	// (0x000786da) cntbar_detail_list_event_pane_t2

0x0002,

0xfea7,	// (0x0007a703) cntbar_detail_list_event_pane_t_ParamLimits

0xfea7,	// (0x0007a703) cntbar_detail_list_event_pane_t

0xe869,	// (0x000790c5) cell_cntbar_detail_list_shct_pane_g1

0x8d10,	// (0x0007356c) navi_pane_mv_g3

0x1f8f,	// (0x0006c7eb) main_cntbar_detail_pane_ParamLimits

0x15e7,	// (0x0006be43) main_notif_wgt_pane

0xb367,	// (0x00075bc3) aid_tch_main_mp4_pane_g4

0xb59c,	// (0x00075df8) popup_slider_window_cp02

0x248c,	// (0x0006cce8) list_recal_day_event_pane

0xdd42,	// (0x0007859e) cntbar_detail_btn_pane_ParamLimits

0xdd42,	// (0x0007859e) cntbar_detail_btn_pane

0xdd52,	// (0x000785ae) cntbar_detail_btn_pane_cp01_ParamLimits

0xdd52,	// (0x000785ae) cntbar_detail_btn_pane_cp01

0xdd6e,	// (0x000785ca) cntbar_detail_list_shct_pane_ParamLimits

0xdd7a,	// (0x000785d6) cntbar_detail_pane_g1_ParamLimits

0xdd7a,	// (0x000785d6) cntbar_detail_pane_g1

0xdd86,	// (0x000785e2) cntbar_detail_pane_t1_ParamLimits

0xdd86,	// (0x000785e2) cntbar_detail_pane_t1

0xde09,	// (0x00078665) cntbar_detail_list_event_pane_g3_ParamLimits

0xde09,	// (0x00078665) cntbar_detail_list_event_pane_g3

0xde21,	// (0x0007867d) cntbar_detail_list_event_pane_g4_ParamLimits

0xde21,	// (0x0007867d) cntbar_detail_list_event_pane_g4

0xde39,	// (0x00078695) cntbar_detail_list_event_pane_g5_ParamLimits

0xde39,	// (0x00078695) cntbar_detail_list_event_pane_g5

0xde51,	// (0x000786ad) cntbar_detail_list_event_pane_g6_ParamLimits

0xde51,	// (0x000786ad) cntbar_detail_list_event_pane_g6

0xde93,	// (0x000786ef) cntbar_detail_list_event_pane_t3_ParamLimits

0xde93,	// (0x000786ef) cntbar_detail_list_event_pane_t3

0xdea5,	// (0x00078701) popup_notif_wgt_window_ParamLimits

0xdea5,	// (0x00078701) popup_notif_wgt_window

0xdeb5,	// (0x00078711) popup_submenu_window_cp01_ParamLimits

0xdeb5,	// (0x00078711) popup_submenu_window_cp01

0x34cf,	// (0x0006dd2b) bg_popup_window_pane_cp10

0x277f,	// (0x0006cfdb) listscroll_notif_wgt_pane

0x2790,	// (0x0006cfec) list_notif_wgt_window

0x2799,	// (0x0006cff5) scroll_pane_cp033

0xdec3,	// (0x0007871f) list_notif_wgt_row_pane_ParamLimits

0xdec3,	// (0x0007871f) list_notif_wgt_row_pane

0x27a2,	// (0x0006cffe) aid_size_list_notif_wgt_del

0x27af,	// (0x0006d00b) list_notif_wgt_row_pane_g1

0x27bb,	// (0x0006d017) list_notif_wgt_row_pane_g2

0x27c7,	// (0x0006d023) list_notif_wgt_row_pane_g3

0x0002,

0xfeae,	// (0x0007a70a) list_notif_wgt_row_pane_g

0x27d4,	// (0x0006d030) list_notif_wgt_row_pane_t1

0x27e9,	// (0x0006d045) list_notif_wgt_row_pane_t2

0x27fb,	// (0x0006d057) list_notif_wgt_row_pane_t3

0x0002,

0xfeb5,	// (0x0007a711) list_notif_wgt_row_pane_t

0x0830,	// (0x0006b08c) list_recal_day_event_pane_g1

0x280d,	// (0x0006d069) list_recal_day_event_pane_t1

0x15e7,	// (0x0006be43) bg_button_pane_cp045

0x281c,	// (0x0006d078) cntbar_detail_btn_pane_t1

0x491a,	// (0x0006f176) main_callh_pane_ParamLimits

0x491a,	// (0x0006f176) main_callh_pane

0x15e7,	// (0x0006be43) main_coverflow0_pane

0x15e7,	// (0x0006be43) main_wgtman_pane

0xd527,	// (0x00077d83) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xd527,	// (0x00077d83) main_fs_bigclock_unlock_btn_pane

0x219c,	// (0x0006c9f8) bg_button_pane_cp16

0x21ac,	// (0x0006ca08) cell_tport_appsw_pane_g3

0xded7,	// (0x00078733) cf0_flow_pane_ParamLimits

0xded7,	// (0x00078733) cf0_flow_pane

0x282a,	// (0x0006d086) listscroll_cf0_pane

0x2835,	// (0x0006d091) main_cf0_pane_g1

0xdee6,	// (0x00078742) main_cf0_pane_t1_ParamLimits

0xdee6,	// (0x00078742) main_cf0_pane_t1

0xdefa,	// (0x00078756) main_cf0_pane_t2_ParamLimits

0xdefa,	// (0x00078756) main_cf0_pane_t2

0x0001,

0xfebc,	// (0x0007a718) main_cf0_pane_t_ParamLimits

0xfebc,	// (0x0007a718) main_cf0_pane_t

0x283f,	// (0x0006d09b) scroll_pane_cp11

0xdf0e,	// (0x0007876a) cf0_flow_pane_g1

0xdf16,	// (0x00078772) cf0_flow_pane_g2

0x0001,

0xfec1,	// (0x0007a71d) cf0_flow_pane_g

0xdf1e,	// (0x0007877a) cf0_flow_pane_t1

0x15e7,	// (0x0006be43) main_call6_pane

0x15e7,	// (0x0006be43) main_calllock_pane

0xdf2c,	// (0x00078788) call6_btn_grp_pane_ParamLimits

0xdf2c,	// (0x00078788) call6_btn_grp_pane

0xdf3b,	// (0x00078797) call6_pane_g1_ParamLimits

0xdf3b,	// (0x00078797) call6_pane_g1

0xdf4a,	// (0x000787a6) popup_call6_1st_window_ParamLimits

0xdf4a,	// (0x000787a6) popup_call6_1st_window

0xdf58,	// (0x000787b4) popup_call6_2nd_window_ParamLimits

0xdf58,	// (0x000787b4) popup_call6_2nd_window

0xdf66,	// (0x000787c2) cell_call6_btn_pane_ParamLimits

0xdf66,	// (0x000787c2) cell_call6_btn_pane

0x34cf,	// (0x0006dd2b) bg_popup_call2_in_pane_cp03

0x284a,	// (0x0006d0a6) popup_call6_1st_window_g1

0x2852,	// (0x0006d0ae) popup_call6_1st_window_g2

0x285a,	// (0x0006d0b6) popup_call6_1st_window_g3

0x0002,

0xfec6,	// (0x0007a722) popup_call6_1st_window_g

0x2862,	// (0x0006d0be) popup_call6_1st_window_t1

0x2871,	// (0x0006d0cd) popup_call6_1st_window_t2

0x2881,	// (0x0006d0dd) popup_call6_1st_window_t3

0x0002,

0xfecd,	// (0x0007a729) popup_call6_1st_window_t

0x34cf,	// (0x0006dd2b) bg_popup_call2_in_pane_cp04

0x284a,	// (0x0006d0a6) popup_call6_2nd_window_g1

0x2852,	// (0x0006d0ae) popup_call6_2nd_window_g2

0x285a,	// (0x0006d0b6) popup_call6_2nd_window_g3

0x0002,

0xfec6,	// (0x0007a722) popup_call6_2nd_window_g

0x2862,	// (0x0006d0be) popup_call6_2nd_window_t1

0x15e7,	// (0x0006be43) bg_button_pane_cp15

0x2891,	// (0x0006d0ed) cell_call6_btn_pane_g1

0x289a,	// (0x0006d0f6) cell_call6_btn_pane_t1

0xdf75,	// (0x000787d1) listscroll_wgtman_pane_ParamLimits

0xdf75,	// (0x000787d1) listscroll_wgtman_pane

0xdf93,	// (0x000787ef) wgtman_btn_pane_ParamLimits

0xdf93,	// (0x000787ef) wgtman_btn_pane

0x3382,	// (0x0006dbde) aid_scroll_copy1

0x28a9,	// (0x0006d105) list_wgtman_pane

0xdfc8,	// (0x00078824) wgtman_btn_pane_g1_ParamLimits

0xdfc8,	// (0x00078824) wgtman_btn_pane_g1

0xdff0,	// (0x0007884c) wgtman_btn_pane_t1_ParamLimits

0xdff0,	// (0x0007884c) wgtman_btn_pane_t1

0x28b3,	// (0x0006d10f) wgtman_btn_pane_t2_ParamLimits

0x28b3,	// (0x0006d10f) wgtman_btn_pane_t2

0x0001,

0xfed4,	// (0x0007a730) wgtman_btn_pane_t_ParamLimits

0xfed4,	// (0x0007a730) wgtman_btn_pane_t

0xe027,	// (0x00078883) listrow_wgtman_pane_ParamLimits

0xe027,	// (0x00078883) listrow_wgtman_pane

0xe043,	// (0x0007889f) listrow_wgtman_pane_g1

0xe050,	// (0x000788ac) listrow_wgtman_pane_g2

0x0001,

0xfed9,	// (0x0007a735) listrow_wgtman_pane_g

0x681e,	// (0x0007107a) listrow_wgtman_pane_t1

0x6836,	// (0x00071092) listrow_wgtman_pane_t2

0x0001,

0xfede,	// (0x0007a73a) listrow_wgtman_pane_t

0x685c,	// (0x000710b8) wait_bar_pane_cp09

0x28ca,	// (0x0006d126) main_calllock_btn_pane

0x28d4,	// (0x0006d130) main_calllock_pane_g1

0x15e7,	// (0x0006be43) bg_button_pane_cp17

0x28df,	// (0x0006d13b) main_calllock_btn_pane_g1

0x28e8,	// (0x0006d144) main_calllock_btn_pane_t1

0x15e7,	// (0x0006be43) main_dialer3_pane

0x15e7,	// (0x0006be43) main_fmrd2_pane

0xe869,	// (0x000790c5) main_fs_bigclock_unlock_btn_pane_g1

0x28ff,	// (0x0006d15b) main_fs_bigclock_unlock_btn_pane_t1

0xe06e,	// (0x000788ca) area_fmrd2_info_pane_ParamLimits

0xe06e,	// (0x000788ca) area_fmrd2_info_pane

0xe07c,	// (0x000788d8) area_fmrd2_visual_pane_ParamLimits

0xe07c,	// (0x000788d8) area_fmrd2_visual_pane

0xe08a,	// (0x000788e6) fmrd2_indi_pane_ParamLimits

0xe08a,	// (0x000788e6) fmrd2_indi_pane

0xe097,	// (0x000788f3) area_fmrd2_visual_pane_g1

0xe09f,	// (0x000788fb) area_fmrd2_visual_pane_t1

0xe0af,	// (0x0007890b) area_fmrd2_visual_pane_t2

0xe0bf,	// (0x0007891b) area_fmrd2_visual_pane_t3

0x0002,

0xfee8,	// (0x0007a744) area_fmrd2_visual_pane_t

0xe0cf,	// (0x0007892b) area_fmrd2_info_pane_g1

0xe0d7,	// (0x00078933) area_fmrd2_info_pane_t1

0xe0e7,	// (0x00078943) area_fmrd2_info_pane_t2

0xe0f7,	// (0x00078953) area_fmrd2_info_pane_t3

0xe107,	// (0x00078963) area_fmrd2_info_pane_t4

0x0003,

0xfeef,	// (0x0007a74b) area_fmrd2_info_pane_t

0xe115,	// (0x00078971) fmrd2_indi_pane_t1

0xe125,	// (0x00078981) fmrd2_indi_pane_t2

0xe135,	// (0x00078991) fmrd2_indi_pane_t3

0x0002,

0xfef8,	// (0x0007a754) fmrd2_indi_pane_t

0x142c,	// (0x0006bc88) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x142c,	// (0x0006bc88) list_single_fs_bigclock_indicator_pane_g5

0x14d3,	// (0x0006bd2f) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x14d3,	// (0x0006bd2f) list_single_fs_bigclock_indicator_pane_t5

0xda12,	// (0x0007826e) aid_cell_bcale_month_pane_ParamLimits

0xda12,	// (0x0007826e) aid_cell_bcale_month_pane

0xda22,	// (0x0007827e) bcale_month_pane_ParamLimits

0xda22,	// (0x0007827e) bcale_month_pane

0xda32,	// (0x0007828e) bcale_preview_pane_ParamLimits

0xda32,	// (0x0007828e) bcale_preview_pane

0x26a0,	// (0x0006cefc) list_single_fs_bigclock_pane_t1_ParamLimits

0x26bf,	// (0x0006cf1b) list_single_fs_bigclock_pane_t2_ParamLimits

0x26bf,	// (0x0006cf1b) list_single_fs_bigclock_pane_t2

0x0001,

0xfe7f,	// (0x0007a6db) list_single_fs_bigclock_pane_t_ParamLimits

0xfe7f,	// (0x0007a6db) list_single_fs_bigclock_pane_t

0x28f7,	// (0x0006d153) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee3,	// (0x0007a73f) main_fs_bigclock_unlock_btn_pane_g

0xe143,	// (0x0007899f) aid_dia3_key_size_ParamLimits

0xe143,	// (0x0007899f) aid_dia3_key_size

0xe14f,	// (0x000789ab) aid_dia3_listrow_size_ParamLimits

0xe14f,	// (0x000789ab) aid_dia3_listrow_size

0xe15f,	// (0x000789bb) dia3_keypad_fun_pane_ParamLimits

0xe15f,	// (0x000789bb) dia3_keypad_fun_pane

0xe171,	// (0x000789cd) dia3_keypad_num_pane_ParamLimits

0xe171,	// (0x000789cd) dia3_keypad_num_pane

0xe183,	// (0x000789df) dia3_listscroll_pane_ParamLimits

0xe183,	// (0x000789df) dia3_listscroll_pane

0xe191,	// (0x000789ed) dia3_numentry_pane_ParamLimits

0xe191,	// (0x000789ed) dia3_numentry_pane

0x290d,	// (0x0006d169) dia3_list_pane

0x2918,	// (0x0006d174) scroll_pane_cp12

0x15e7,	// (0x0006be43) bg_dia3_numentry_pane

0xe19f,	// (0x000789fb) dia3_numentry_pane_t1

0xe1ae,	// (0x00078a0a) cell_dia3_key_num_pane

0xe1b6,	// (0x00078a12) cell_dia3_key0_fun_pane_ParamLimits

0xe1b6,	// (0x00078a12) cell_dia3_key0_fun_pane

0xe1c3,	// (0x00078a1f) cell_dia3_key1_fun_pane_ParamLimits

0xe1c3,	// (0x00078a1f) cell_dia3_key1_fun_pane

0xe1d0,	// (0x00078a2c) dia3_listrow_pane

0x111f,	// (0x0006b97b) bg_dia3_numentry_pane_g1

0x15e7,	// (0x0006be43) bg_button_pane_cp21

0x2923,	// (0x0006d17f) cell_dia3_key_num_pane_t1

0x2931,	// (0x0006d18d) cell_dia3_key_num_pane_t2

0x2940,	// (0x0006d19c) cell_dia3_key_num_pane_t3

0x294f,	// (0x0006d1ab) cell_dia3_key_num_pane_t4

0x0003,

0xfeff,	// (0x0007a75b) cell_dia3_key_num_pane_t

0x15e7,	// (0x0006be43) bg_button_pane_cp19

0xe1dd,	// (0x00078a39) cell_dia3_key0_fun_pane_g1

0x15e7,	// (0x0006be43) bg_button_pane_cp20

0xe1e5,	// (0x00078a41) cell_dia3_key1_fun_pane_g1

0xe1ed,	// (0x00078a49) area_left_week_number_pane

0xe1f9,	// (0x00078a55) area_top_day_name_pane

0xe205,	// (0x00078a61) frame_month_view_pane

0xe211,	// (0x00078a6d) grid_month_view_pane

0x295e,	// (0x0006d1ba) cell_top_day_name_pane_ParamLimits

0x295e,	// (0x0006d1ba) cell_top_day_name_pane

0xdb75,	// (0x000783d1) cell_area_left_week_number_pane_ParamLimits

0xdb75,	// (0x000783d1) cell_area_left_week_number_pane

0xe21d,	// (0x00078a79) cell_month_view_pane_ParamLimits

0xe21d,	// (0x00078a79) cell_month_view_pane

0x2978,	// (0x0006d1d4) frm_month_g1

0xe23a,	// (0x00078a96) frm_month_g2

0xe244,	// (0x00078aa0) frm_month_g3

0xe24e,	// (0x00078aaa) frm_month_g4

0xe258,	// (0x00078ab4) frm_month_g5

0xe262,	// (0x00078abe) frm_month_g6

0xe26c,	// (0x00078ac8) frm_month_g7

0x2981,	// (0x0006d1dd) frm_month_g8

0x298a,	// (0x0006d1e6) frm_month_g9

0x2993,	// (0x0006d1ef) frm_month_g10

0x299c,	// (0x0006d1f8) frm_month_g11

0x29a5,	// (0x0006d201) frm_month_g12

0x29ae,	// (0x0006d20a) frm_month_g13

0x29b7,	// (0x0006d213) frm_month_g14

0x29c2,	// (0x0006d21e) frm_month_g15

0x29cd,	// (0x0006d229) frm_month_g16

0x000f,

0xff08,	// (0x0007a764) frm_month_g

0xe278,	// (0x00078ad4) cell_top_day_name_pane_t1

0xe287,	// (0x00078ae3) cell_area_left_week_number_pane_g1

0xe28f,	// (0x00078aeb) cell_area_left_week_number_pane_t1

0xe869,	// (0x000790c5) cell_month_view_pane_g1

0xe29e,	// (0x00078afa) cell_month_view_pane_t1

0x15e7,	// (0x0006be43) main_fps_pane

0x208b,	// (0x0006c8e7) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x208b,	// (0x0006c8e7) cmail_ddmenu_btn02_pane_cp1

0x20a7,	// (0x0006c903) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x20a7,	// (0x0006c903) cmail_ddmenu_btn02_pane_cp2

0xdc2a,	// (0x00078486) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xdc2a,	// (0x00078486) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe32,	// (0x0007a68e) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe32,	// (0x0007a68e) cmail_ddmenu_btn02_pane_g

0xdc48,	// (0x000784a4) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xdc48,	// (0x000784a4) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe37,	// (0x0007a693) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe37,	// (0x0007a693) cmail_ddmenu_btn02_pane_t

0xe2ad,	// (0x00078b09) fps_text_pane_ParamLimits

0xe2ad,	// (0x00078b09) fps_text_pane

0xe2ba,	// (0x00078b16) main_fps_pane_g1_ParamLimits

0xe2ba,	// (0x00078b16) main_fps_pane_g1

0xe2c8,	// (0x00078b24) wait_bar_pane_cp010_ParamLimits

0xe2c8,	// (0x00078b24) wait_bar_pane_cp010

0xe2d4,	// (0x00078b30) fps_text_pane_t1_ParamLimits

0xe2d4,	// (0x00078b30) fps_text_pane_t1

0xb980,	// (0x000761dc) cam4_image_uncrop_pane_g1

0xb989,	// (0x000761e5) cam4_image_uncrop_pane_g2

0xb992,	// (0x000761ee) cam4_image_uncrop_pane_g3

0xb99b,	// (0x000761f7) cam4_image_uncrop_pane_g4

0x0003,

0xf8f9,	// (0x0007a155) cam4_image_uncrop_pane_g

0xe1d0,	// (0x00078a2c) dia3_listrow_pane_ParamLimits

0x15e7,	// (0x0006be43) main_phob2_pane

0xd863,	// (0x000780bf) cell_tport_appsw_pane_cp02_ParamLimits

0xd863,	// (0x000780bf) cell_tport_appsw_pane_cp02

0xd872,	// (0x000780ce) cell_tport_appsw_pane_cp03_ParamLimits

0xd872,	// (0x000780ce) cell_tport_appsw_pane_cp03

0x15e7,	// (0x0006be43) phob2_contact_card_pane

0x15e7,	// (0x0006be43) phob2_listscroll_pane

0x29d8,	// (0x0006d234) phob2_list_pane

0x29e0,	// (0x0006d23c) scroll_pane_cp034

0xe2ed,	// (0x00078b49) phob2_cc_data_pane_ParamLimits

0xe2ed,	// (0x00078b49) phob2_cc_data_pane

0xe307,	// (0x00078b63) phob2_cc_listscroll_pane_ParamLimits

0xe307,	// (0x00078b63) phob2_cc_listscroll_pane

0xe321,	// (0x00078b7d) list_double_large_graphic_phob2_pane_ParamLimits

0xe321,	// (0x00078b7d) list_double_large_graphic_phob2_pane

0xe344,	// (0x00078ba0) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xe344,	// (0x00078ba0) list_double_large_graphic_phob2_pane_g1

0xe351,	// (0x00078bad) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xe351,	// (0x00078bad) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff29,	// (0x0007a785) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff29,	// (0x0007a785) list_double_large_graphic_phob2_pane_g

0x686e,	// (0x000710ca) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x686e,	// (0x000710ca) list_double_large_graphic_phob2_pane_t1

0x6883,	// (0x000710df) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x6883,	// (0x000710df) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff2e,	// (0x0007a78a) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff2e,	// (0x0007a78a) list_double_large_graphic_phob2_pane_t

0x15e7,	// (0x0006be43) list_highlight_pane_cp024

0x29e8,	// (0x0006d244) phob2_cc_button_pane

0xe35d,	// (0x00078bb9) phob2_cc_data_pane_g1_ParamLimits

0xe35d,	// (0x00078bb9) phob2_cc_data_pane_g1

0xe369,	// (0x00078bc5) phob2_cc_data_pane_g2_ParamLimits

0xe369,	// (0x00078bc5) phob2_cc_data_pane_g2

0x0001,

0xff33,	// (0x0007a78f) phob2_cc_data_pane_g_ParamLimits

0xff33,	// (0x0007a78f) phob2_cc_data_pane_g

0xe375,	// (0x00078bd1) phob2_cc_data_pane_t1_ParamLimits

0xe375,	// (0x00078bd1) phob2_cc_data_pane_t1

0xe387,	// (0x00078be3) phob2_cc_data_pane_t2_ParamLimits

0xe387,	// (0x00078be3) phob2_cc_data_pane_t2

0xe399,	// (0x00078bf5) phob2_cc_data_pane_t3_ParamLimits

0xe399,	// (0x00078bf5) phob2_cc_data_pane_t3

0x0002,

0xff38,	// (0x0007a794) phob2_cc_data_pane_t_ParamLimits

0xff38,	// (0x0007a794) phob2_cc_data_pane_t

0x29f0,	// (0x0006d24c) phob2_cc_list_pane_ParamLimits

0x29f0,	// (0x0006d24c) phob2_cc_list_pane

0x08c9,	// (0x0006b125) scroll_pane_cp035_ParamLimits

0x08c9,	// (0x0006b125) scroll_pane_cp035

0x1f8f,	// (0x0006c7eb) bg_button_pane_cp033

0x29fc,	// (0x0006d258) phob2_cc_button_pane_g1

0x2a08,	// (0x0006d264) phob2_cc_button_pane_t1

0x2a1d,	// (0x0006d279) phob2_cc_button_pane_t2

0x0001,

0xff3f,	// (0x0007a79b) phob2_cc_button_pane_t

0xe3ab,	// (0x00078c07) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xe3ab,	// (0x00078c07) list_double_large_graphic_phob2_cc_pane

0xe3db,	// (0x00078c37) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xe3db,	// (0x00078c37) list_double_large_graphic_phob2_cc_pane_g1

0xe3ec,	// (0x00078c48) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xe3ec,	// (0x00078c48) list_double_large_graphic_phob2_cc_pane_g2

0xe3fb,	// (0x00078c57) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xe3fb,	// (0x00078c57) list_double_large_graphic_phob2_cc_pane_g3

0x6895,	// (0x000710f1) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x6895,	// (0x000710f1) list_double_large_graphic_phob2_cc_pane_g4

0x68a6,	// (0x00071102) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x68a6,	// (0x00071102) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff44,	// (0x0007a7a0) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff44,	// (0x0007a7a0) list_double_large_graphic_phob2_cc_pane_g

0x68b5,	// (0x00071111) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x68b5,	// (0x00071111) list_double_large_graphic_phob2_cc_pane_t1

0x68de,	// (0x0007113a) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x68de,	// (0x0007113a) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4f,	// (0x0007a7ab) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4f,	// (0x0007a7ab) list_double_large_graphic_phob2_cc_pane_t

0x2a2f,	// (0x0006d28b) list_highlight_pane_cp025_ParamLimits

0x2a2f,	// (0x0006d28b) list_highlight_pane_cp025

0x1f8f,	// (0x0006c7eb) bg_button_pane_cp033_ParamLimits

0x29fc,	// (0x0006d258) phob2_cc_button_pane_g1_ParamLimits

0x2a08,	// (0x0006d264) phob2_cc_button_pane_t1_ParamLimits

0x2a1d,	// (0x0006d279) phob2_cc_button_pane_t2_ParamLimits

0xff3f,	// (0x0007a79b) phob2_cc_button_pane_t_ParamLimits

0x6bd2,	// (0x0007142e) popup_wgtman_window

0x068d,	// (0x0006aee9) scroll_pane_cp038

0xdfb0,	// (0x0007880c) wgtman_btn_pane_cp_01_ParamLimits

0xdfb0,	// (0x0007880c) wgtman_btn_pane_cp_01

0x2a3d,	// (0x0006d299) wgtman_content_pane

0x2731,	// (0x0006cf8d) wgtman_heading_pane

0x15e7,	// (0x0006be43) bg_heading_pane_cp02

0x2a46,	// (0x0006d2a2) wgtman_heading_pane_g1

0x2a4e,	// (0x0006d2aa) wgtman_heading_pane_t1

0x2a5c,	// (0x0006d2b8) scroll_pane_cp036

0x2a64,	// (0x0006d2c0) wgtman_list_pane

0x2ed5,	// (0x0006d731) wgtman_list_pane_t1_ParamLimits

0x2ed5,	// (0x0006d731) wgtman_list_pane_t1

0xb8df,	// (0x0007613b) cam4_grid_pane

0x5c89,	// (0x000704e5) bg_button_pane_cp015_ParamLimits

0xc598,	// (0x00076df4) bg_button_pane_cp016_ParamLimits

0xc5ab,	// (0x00076e07) bg_button_pane_cp017_ParamLimits

0x5cbc,	// (0x00070518) popup_vitu2_query_window_g3_ParamLimits

0x5cbc,	// (0x00070518) popup_vitu2_query_window_g3

0x5d35,	// (0x00070591) popup_vitu2_query_window_t6_ParamLimits

0x5d35,	// (0x00070591) popup_vitu2_query_window_t6

0x5d60,	// (0x000705bc) popup_vitu2_query_window_t7_ParamLimits

0x5d60,	// (0x000705bc) popup_vitu2_query_window_t7

0x0435,	// (0x0006ac91) cam4_grid_pane_g1

0x043e,	// (0x0006ac9a) cam4_grid_pane_g2

0x2ef3,	// (0x0006d74f) cam4_grid_pane_g3

0x2efc,	// (0x0006d758) cam4_grid_pane_g4

0x0003,

0xff54,	// (0x0007a7b0) cam4_grid_pane_g

0x78cc,	// (0x00072128) aid_placing_vt_slider_lsc_ParamLimits

0x7c0c,	// (0x00072468) vidtel_button_pane_ParamLimits

0x7c0c,	// (0x00072468) vidtel_button_pane

0x2f07,	// (0x0006d763) bg_button_pane_cp034

0xe40a,	// (0x00078c66) vidtel_button_pane_g1

0x2f11,	// (0x0006d76d) vidtel_button_pane_t1

0x07ca,	// (0x0006b026) aid_size_vtel_slider_touch

0x08c9,	// (0x0006b125) scroll_pane_cp039

0x115d,	// (0x0006b9b9) ncim_query_button_pane_cp01_ParamLimits

0x117c,	// (0x0006b9d8) ncimui_query_pane_g1_ParamLimits

0x1f8f,	// (0x0006c7eb) input_focus_pane_cp012_ParamLimits

0x11a1,	// (0x0006b9fd) ncim_query_entry_pane_t1_ParamLimits

0x08c9,	// (0x0006b125) scroll_pane_cp039_ParamLimits

0x8c82,	// (0x000734de) navi_pane_bcale_mc_g1

0x8c8a,	// (0x000734e6) navi_pane_bcale_mc_t1

0x20f0,	// (0x0006c94c) main_sp_fs_email_pane_g1

0x20f8,	// (0x0006c954) main_sp_fs_email_pane_g2

0x0001,

0xfcf0,	// (0x0007a54c) main_sp_fs_email_pane_g

0x23b3,	// (0x0006cc0f) list_single_cale_mrui_row_pane_g3_ParamLimits

0x23b3,	// (0x0006cc0f) list_single_cale_mrui_row_pane_g3

0xdc70,	// (0x000784cc) list_single_recal_day_pane_g5_event_pane

0x24ff,	// (0x0006cd5b) list_single_recal_day_pane_g7

0x2f1f,	// (0x0006d77b) list_recal_day_event_pane_cp01

0x2f28,	// (0x0006d784) list_recal_vselct_arw_lo_pane_cp01

0x2f30,	// (0x0006d78c) list_recal_vselct_arw_up_pane_cp01

0x2f38,	// (0x0006d794) list_recal_vselct_pane_cp01

0x0830,	// (0x0006b08c) list_recal_day_event_pane_cp01_g1

0x2f42,	// (0x0006d79e) list_recal_day_event_pane_cp01_t1

0x2507,	// (0x0006cd63) list_single_recal_day_pane_t1_ParamLimits

0x2519,	// (0x0006cd75) list_single_recal_day_pane_t2_ParamLimits

0xfe47,	// (0x0007a6a3) list_single_recal_day_pane_t_ParamLimits

0x1d44,	// (0x0006c5a0) bg_notes_pane_ParamLimits

0x1d52,	// (0x0006c5ae) list_notes_pane_ParamLimits

0x6f05,	// (0x00071761) scroll_pane_cp06_ParamLimits

0x1d74,	// (0x0006c5d0) main_notes_pane_ParamLimits

0x15e7,	// (0x0006be43) main_welc_pane

0xe412,	// (0x00078c6e) main_welc_body_pane_ParamLimits

0xe412,	// (0x00078c6e) main_welc_body_pane

0xe42b,	// (0x00078c87) main_welc_opti_pane_ParamLimits

0xe42b,	// (0x00078c87) main_welc_opti_pane

0xe460,	// (0x00078cbc) main_welc_pane_t1_ParamLimits

0xe460,	// (0x00078cbc) main_welc_pane_t1

0xe47e,	// (0x00078cda) main_welc_body_row_pane_ParamLimits

0xe47e,	// (0x00078cda) main_welc_body_row_pane

0xe4af,	// (0x00078d0b) main_welc_opti_row_pane_ParamLimits

0xe4af,	// (0x00078d0b) main_welc_opti_row_pane

0x2f50,	// (0x0006d7ac) main_welc_opti_row_pane_g1

0x2f58,	// (0x0006d7b4) main_welc_opti_row_pane_t1

0x2f67,	// (0x0006d7c3) main_welc_body_row_pane_t1

0x2788,	// (0x0006cfe4) popup_notif_wgt_heading_pane

0x27a2,	// (0x0006cffe) aid_size_list_notif_wgt_del_ParamLimits

0x27af,	// (0x0006d00b) list_notif_wgt_row_pane_g1_ParamLimits

0x27bb,	// (0x0006d017) list_notif_wgt_row_pane_g2_ParamLimits

0x27c7,	// (0x0006d023) list_notif_wgt_row_pane_g3_ParamLimits

0xfeae,	// (0x0007a70a) list_notif_wgt_row_pane_g_ParamLimits

0x27d4,	// (0x0006d030) list_notif_wgt_row_pane_t1_ParamLimits

0x27e9,	// (0x0006d045) list_notif_wgt_row_pane_t2_ParamLimits

0x27fb,	// (0x0006d057) list_notif_wgt_row_pane_t3_ParamLimits

0xfeb5,	// (0x0007a711) list_notif_wgt_row_pane_t_ParamLimits

0xe043,	// (0x0007889f) listrow_wgtman_pane_g1_ParamLimits

0xe050,	// (0x000788ac) listrow_wgtman_pane_g2_ParamLimits

0xfed9,	// (0x0007a735) listrow_wgtman_pane_g_ParamLimits

0x681e,	// (0x0007107a) listrow_wgtman_pane_t1_ParamLimits

0x6836,	// (0x00071092) listrow_wgtman_pane_t2_ParamLimits

0xfede,	// (0x0007a73a) listrow_wgtman_pane_t_ParamLimits

0x685c,	// (0x000710b8) wait_bar_pane_cp09_ParamLimits

0x15e7,	// (0x0006be43) bg_popup_heading_pane_cp02

0x2f76,	// (0x0006d7d2) popup_notif_wgt_heading_pane_g1

0x2f7e,	// (0x0006d7da) popup_notif_wgt_heading_pane_t1

0x15e7,	// (0x0006be43) main_vids_pane

0x15e7,	// (0x0006be43) vids_listscroll_pane

0xe4c0,	// (0x00078d1c) scroll_pane_cp040

0x15e7,	// (0x0006be43) vids_list_pane

0xe4cb,	// (0x00078d27) vids_list_double_pane_ParamLimits

0xe4cb,	// (0x00078d27) vids_list_double_pane

0xe4e6,	// (0x00078d42) vids_list_double_pane_g1

0xe4ef,	// (0x00078d4b) vids_list_double_pane_t1

0xe4ff,	// (0x00078d5b) vids_list_double_pane_t2

0x0001,

0xff62,	// (0x0007a7be) vids_list_double_pane_t

0x1f8f,	// (0x0006c7eb) main_ncimui_pane_ParamLimits

0xd0f6,	// (0x00077952) main_ncimui_pane_g1_ParamLimits

0xd102,	// (0x0007795e) main_ncimui_pane_g2_ParamLimits

0xd102,	// (0x0007795e) main_ncimui_pane_g2

0x0001,

0xfbf5,	// (0x0007a451) main_ncimui_pane_g_ParamLimits

0xfbf5,	// (0x0007a451) main_ncimui_pane_g

0xe446,	// (0x00078ca2) main_welc_pane_g1_ParamLimits

0xe446,	// (0x00078ca2) main_welc_pane_g1

0xe452,	// (0x00078cae) main_welc_pane_g2_ParamLimits

0xe452,	// (0x00078cae) main_welc_pane_g2

0x0001,

0xff5d,	// (0x0007a7b9) main_welc_pane_g_ParamLimits

0xff5d,	// (0x0007a7b9) main_welc_pane_g
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

} // end of namespace AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch_Large

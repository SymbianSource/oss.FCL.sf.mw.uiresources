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

#include "aknlayoutscalable_elaf_pnl4_apps_nhd4_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnl4_apps_nhd4_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x00044dd3 };

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
0x1275,	// (0x00046048) Screen

0x1281,	// (0x00046054) application_window

0x12c7,	// (0x0004609a) area_bottom_pane_ParamLimits

0x12c7,	// (0x0004609a) area_bottom_pane

0x1300,	// (0x000460d3) area_top_pane_ParamLimits

0x1300,	// (0x000460d3) area_top_pane

0xa581,	// (0x0004f354) call_video_uplink_pane_ParamLimits

0xa581,	// (0x0004f354) call_video_uplink_pane

0x138e,	// (0x00046161) main_pane_ParamLimits

0x138e,	// (0x00046161) main_pane

0xbefc,	// (0x00050ccf) context_pane

0x4d1a,	// (0x00049aed) navi_pane

0x4d4c,	// (0x00049b1f) popup_cale_events_window_ParamLimits

0x4d4c,	// (0x00049b1f) popup_cale_events_window

0xbf0f,	// (0x00050ce2) popup_mup_playback_window

0x4d64,	// (0x00049b37) signal_pane

0x1d43,	// (0x00046b16) main_browser_pane

0x2610,	// (0x000473e3) main_burst_pane

0x4a82,	// (0x00049855) main_calc_pane

0xbe9c,	// (0x00050c6f) main_cale_day_pane

0x2008,	// (0x00046ddb) main_cale_month_pane

0xbe9c,	// (0x00050c6f) main_cale_week_pane

0x2610,	// (0x000473e3) main_call_pane

0x1929,	// (0x000466fc) main_call_poc_pane

0x2610,	// (0x000473e3) main_camera_pane

0x2610,	// (0x000473e3) main_chi_dic_pane

0xa858,	// (0x0004f62b) main_clock_pane

0x1929,	// (0x000466fc) main_fmradio_pane

0x2610,	// (0x000473e3) main_graph_messa_pane

0x1929,	// (0x000466fc) main_help_pane

0x1d43,	// (0x00046b16) main_im_pane

0x1b84,	// (0x00046957) main_image_pane_ParamLimits

0x1b84,	// (0x00046957) main_image_pane

0x1929,	// (0x000466fc) main_location2_pane

0x2610,	// (0x000473e3) main_location_pane

0x1b84,	// (0x00046957) main_messa_pane

0x1929,	// (0x000466fc) main_mp2_pane

0x2610,	// (0x000473e3) main_mp_pane

0x1929,	// (0x000466fc) main_msg_pane

0x1929,	// (0x000466fc) main_mup_eq_pane

0x1929,	// (0x000466fc) main_mup_pane

0x1d43,	// (0x00046b16) main_notes_pane

0x1929,	// (0x000466fc) main_pec_pane

0x1929,	// (0x000466fc) main_phob_pane

0x1929,	// (0x000466fc) main_pinb_pane

0x1929,	// (0x000466fc) main_postcard_pane

0x1929,	// (0x000466fc) main_qdial_pane

0x2610,	// (0x000473e3) main_skin_pane

0x1929,	// (0x000466fc) main_smil2_pane

0x2610,	// (0x000473e3) main_smil_pane

0x2610,	// (0x000473e3) main_video_pane

0x2610,	// (0x000473e3) main_video_tele_pane

0x1b84,	// (0x00046957) main_viewer_pane_ParamLimits

0x1b84,	// (0x00046957) main_viewer_pane

0x2610,	// (0x000473e3) main_vorec_pane

0x4ad6,	// (0x000498a9) popup_blid_sat_info_window_ParamLimits

0x4ad6,	// (0x000498a9) popup_blid_sat_info_window

0x4b2e,	// (0x00049901) popup_dyc_status_message_window_ParamLimits

0x4b2e,	// (0x00049901) popup_dyc_status_message_window

0x4b46,	// (0x00049919) popup_grid_large_graphic_window_ParamLimits

0x4b46,	// (0x00049919) popup_grid_large_graphic_window

0x4bf6,	// (0x000499c9) popup_loc_request_window_ParamLimits

0x4bf6,	// (0x000499c9) popup_loc_request_window

0x4cf2,	// (0x00049ac5) popup_wml_address_window_ParamLimits

0x4cf2,	// (0x00049ac5) popup_wml_address_window

0x48bc,	// (0x0004968f) call_muted_g1

0x45b1,	// (0x00049384) popup_call_audio_conf_window_ParamLimits

0x45b1,	// (0x00049384) popup_call_audio_conf_window

0x48d0,	// (0x000496a3) popup_call_audio_first_window_ParamLimits

0x48d0,	// (0x000496a3) popup_call_audio_first_window

0x4946,	// (0x00049719) popup_call_audio_in_window_ParamLimits

0x4946,	// (0x00049719) popup_call_audio_in_window

0x4982,	// (0x00049755) popup_call_audio_out_window_ParamLimits

0x4982,	// (0x00049755) popup_call_audio_out_window

0x49bc,	// (0x0004978f) popup_call_audio_second_window_ParamLimits

0x49bc,	// (0x0004978f) popup_call_audio_second_window

0x4a12,	// (0x000497e5) popup_call_audio_wait_window_ParamLimits

0x4a12,	// (0x000497e5) popup_call_audio_wait_window

0x4a47,	// (0x0004981a) popup_number_entry_window_ParamLimits

0x4a47,	// (0x0004981a) popup_number_entry_window

0x14bd,	// (0x00046290) bg_popup_call_pane_cp05_ParamLimits

0x14bd,	// (0x00046290) bg_popup_call_pane_cp05

0x14dd,	// (0x000462b0) popup_number_entry_window_t1

0x14f0,	// (0x000462c3) popup_number_entry_window_t2

0x1502,	// (0x000462d5) popup_number_entry_window_t3

0x0003,

0xf040,	// (0x00053e13) popup_number_entry_window_t

0x1549,	// (0x0004631c) text_title_cp2

0x155c,	// (0x0004632f) bg_popup_call_pane_cp_ParamLimits

0x155c,	// (0x0004632f) bg_popup_call_pane_cp

0x156a,	// (0x0004633d) call_thumbnail_pane

0x1572,	// (0x00046345) popup_call_audio_in_window_g1_ParamLimits

0x1572,	// (0x00046345) popup_call_audio_in_window_g1

0x157e,	// (0x00046351) popup_call_audio_in_window_g2_ParamLimits

0x157e,	// (0x00046351) popup_call_audio_in_window_g2

0x158a,	// (0x0004635d) popup_call_audio_in_window_g3_ParamLimits

0x158a,	// (0x0004635d) popup_call_audio_in_window_g3

0x0002,

0xf049,	// (0x00053e1c) popup_call_audio_in_window_g_ParamLimits

0xf049,	// (0x00053e1c) popup_call_audio_in_window_g

0x1596,	// (0x00046369) popup_call_audio_in_window_t1_ParamLimits

0x1596,	// (0x00046369) popup_call_audio_in_window_t1

0x15b2,	// (0x00046385) popup_call_audio_in_window_t2_ParamLimits

0x15b2,	// (0x00046385) popup_call_audio_in_window_t2

0x15ce,	// (0x000463a1) popup_call_audio_in_window_t3_ParamLimits

0x15ce,	// (0x000463a1) popup_call_audio_in_window_t3

0x0002,

0xf050,	// (0x00053e23) popup_call_audio_in_window_t_ParamLimits

0xf050,	// (0x00053e23) popup_call_audio_in_window_t

0x155c,	// (0x0004632f) bg_popup_call_pane_cp01_ParamLimits

0x155c,	// (0x0004632f) bg_popup_call_pane_cp01

0x156a,	// (0x0004633d) call_thumbnail_pane_cp02

0x15e1,	// (0x000463b4) call_type_pane_cp022

0x15e9,	// (0x000463bc) popup_call_audio_out_window_g1_ParamLimits

0x15e9,	// (0x000463bc) popup_call_audio_out_window_g1

0x15fb,	// (0x000463ce) popup_call_audio_out_window_g2_ParamLimits

0x15fb,	// (0x000463ce) popup_call_audio_out_window_g2

0x1607,	// (0x000463da) popup_call_audio_out_window_g3_ParamLimits

0x1607,	// (0x000463da) popup_call_audio_out_window_g3

0x0002,

0xf057,	// (0x00053e2a) popup_call_audio_out_window_g_ParamLimits

0xf057,	// (0x00053e2a) popup_call_audio_out_window_g

0x1619,	// (0x000463ec) popup_call_audio_out_window_t1_ParamLimits

0x1619,	// (0x000463ec) popup_call_audio_out_window_t1

0x1631,	// (0x00046404) popup_call_audio_out_window_t2_ParamLimits

0x1631,	// (0x00046404) popup_call_audio_out_window_t2

0x0001,

0xf05e,	// (0x00053e31) popup_call_audio_out_window_t_ParamLimits

0xf05e,	// (0x00053e31) popup_call_audio_out_window_t

0x1646,	// (0x00046419) bg_popup_call_pane_ParamLimits

0x1646,	// (0x00046419) bg_popup_call_pane

0x16ca,	// (0x0004649d) call_thumbnail_pane_cp_ParamLimits

0x16ca,	// (0x0004649d) call_thumbnail_pane_cp

0x16ee,	// (0x000464c1) call_type_pane_cp01_ParamLimits

0x16ee,	// (0x000464c1) call_type_pane_cp01

0x1732,	// (0x00046505) popup_call_audio_first_window_g1_ParamLimits

0x1732,	// (0x00046505) popup_call_audio_first_window_g1

0x177e,	// (0x00046551) popup_call_audio_first_window_g2_ParamLimits

0x177e,	// (0x00046551) popup_call_audio_first_window_g2

0x0001,

0xf063,	// (0x00053e36) popup_call_audio_first_window_g_ParamLimits

0xf063,	// (0x00053e36) popup_call_audio_first_window_g

0x17c2,	// (0x00046595) popup_call_audio_first_window_t1_ParamLimits

0x17c2,	// (0x00046595) popup_call_audio_first_window_t1

0x186e,	// (0x00046641) popup_call_audio_first_window_t4_ParamLimits

0x186e,	// (0x00046641) popup_call_audio_first_window_t4

0x18fa,	// (0x000466cd) popup_call_audio_first_window_t5_ParamLimits

0x18fa,	// (0x000466cd) popup_call_audio_first_window_t5

0x0002,

0xf068,	// (0x00053e3b) popup_call_audio_first_window_t_ParamLimits

0xf068,	// (0x00053e3b) popup_call_audio_first_window_t

0x1929,	// (0x000466fc) bg_popup_call_pane_cp02

0x1933,	// (0x00046706) call_type_pane_cp023

0x193b,	// (0x0004670e) popup_call_audio_wait_window_g1

0x1943,	// (0x00046716) popup_call_audio_wait_window_g2

0x0001,

0xf06f,	// (0x00053e42) popup_call_audio_wait_window_g

0x194b,	// (0x0004671e) popup_call_audio_wait_window_t3

0x1959,	// (0x0004672c) bg_popup_call_pane_cp03_ParamLimits

0x1959,	// (0x0004672c) bg_popup_call_pane_cp03

0x19b9,	// (0x0004678c) call_thumbnail_pane_cp011_ParamLimits

0x19b9,	// (0x0004678c) call_thumbnail_pane_cp011

0x19c5,	// (0x00046798) call_type_pane_cp034_ParamLimits

0x19c5,	// (0x00046798) call_type_pane_cp034

0x1a01,	// (0x000467d4) popup_call_audio_second_window_g1_ParamLimits

0x1a01,	// (0x000467d4) popup_call_audio_second_window_g1

0x1a3d,	// (0x00046810) popup_call_audio_second_window_g2_ParamLimits

0x1a3d,	// (0x00046810) popup_call_audio_second_window_g2

0x0001,

0xf074,	// (0x00053e47) popup_call_audio_second_window_g_ParamLimits

0xf074,	// (0x00053e47) popup_call_audio_second_window_g

0x1a79,	// (0x0004684c) popup_call_audio_second_window_t1_ParamLimits

0x1a79,	// (0x0004684c) popup_call_audio_second_window_t1

0x1afa,	// (0x000468cd) popup_call_audio_second_window_t2_ParamLimits

0x1afa,	// (0x000468cd) popup_call_audio_second_window_t2

0x1b30,	// (0x00046903) popup_call_audio_second_window_t3_ParamLimits

0x1b30,	// (0x00046903) popup_call_audio_second_window_t3

0x0002,

0xf079,	// (0x00053e4c) popup_call_audio_second_window_t_ParamLimits

0xf079,	// (0x00053e4c) popup_call_audio_second_window_t

0x1929,	// (0x000466fc) bg_popup_call_pane_cp04

0x1b66,	// (0x00046939) list_conf_pane

0x1b6e,	// (0x00046941) popup_call_audio_conf_window_t1

0x1b7c,	// (0x0004694f) call_thumbnail_pane_g1

0x1b84,	// (0x00046957) bg_pinb_pane_ParamLimits

0x1b84,	// (0x00046957) bg_pinb_pane

0x1b92,	// (0x00046965) find_pinb_pane

0x1b84,	// (0x00046957) listscroll_pinb_pane_ParamLimits

0x1b84,	// (0x00046957) listscroll_pinb_pane

0x1b9c,	// (0x0004696f) pinb_bg_pane_g1

0x1b9c,	// (0x0004696f) pinb_bg_pane_g2

0x1b9c,	// (0x0004696f) pinb_bg_pane_g3

0x1b9c,	// (0x0004696f) pinb_bg_pane_g4

0x1b9c,	// (0x0004696f) pinb_bg_pane_g5

0x1b9c,	// (0x0004696f) pinb_bg_pane_g6

0x1b9c,	// (0x0004696f) pinb_bg_pane_g7

0x1b9c,	// (0x0004696f) pinb_bg_pane_g8

0x1b9c,	// (0x0004696f) pinb_bg_pane_g9

0x1b9c,	// (0x0004696f) pinb_bg_pane_g10

0x0009,

0xf080,	// (0x00053e53) pinb_bg_pane_g

0x128d,	// (0x00046060) grid_pinb_pane

0x128d,	// (0x00046060) list_pinb_pane

0x1451,	// (0x00046224) scroll_pane_cp01_ParamLimits

0x1451,	// (0x00046224) scroll_pane_cp01

0x1ba6,	// (0x00046979) find_pinb_pane_g1_ParamLimits

0x1ba6,	// (0x00046979) find_pinb_pane_g1

0x1bbe,	// (0x00046991) find_pinb_pane_t1

0x1bd0,	// (0x000469a3) find_pinb_pane_t2

0x0001,

0xf09a,	// (0x00053e6d) find_pinb_pane_t

0x1be5,	// (0x000469b8) input_focus_pane_cp01_ParamLimits

0x1be5,	// (0x000469b8) input_focus_pane_cp01

0x1bf1,	// (0x000469c4) cell_pinb_pane_ParamLimits

0x1bf1,	// (0x000469c4) cell_pinb_pane

0x1bff,	// (0x000469d2) cell_pinb_pane_g1_ParamLimits

0x1bff,	// (0x000469d2) cell_pinb_pane_g1

0x1c0d,	// (0x000469e0) cell_pinb_pane_g2_ParamLimits

0x1c0d,	// (0x000469e0) cell_pinb_pane_g2

0x1c0d,	// (0x000469e0) cell_pinb_pane_g3_ParamLimits

0x1c0d,	// (0x000469e0) cell_pinb_pane_g3

0x0002,

0xf09f,	// (0x00053e72) cell_pinb_pane_g_ParamLimits

0xf09f,	// (0x00053e72) cell_pinb_pane_g

0x1929,	// (0x000466fc) grid_highlight_pane_cp01

0x1bf1,	// (0x000469c4) list_pinb_item_pane_ParamLimits

0x1bf1,	// (0x000469c4) list_pinb_item_pane

0x128d,	// (0x00046060) list_highlight_pane_cp02

0x1c1b,	// (0x000469ee) list_pinb_item_pane_g1_ParamLimits

0x1c1b,	// (0x000469ee) list_pinb_item_pane_g1

0x1c0d,	// (0x000469e0) list_pinb_item_pane_g2_ParamLimits

0x1c0d,	// (0x000469e0) list_pinb_item_pane_g2

0x1bff,	// (0x000469d2) list_pinb_item_pane_g3_ParamLimits

0x1bff,	// (0x000469d2) list_pinb_item_pane_g3

0x1c0d,	// (0x000469e0) list_pinb_item_pane_g4_ParamLimits

0x1c0d,	// (0x000469e0) list_pinb_item_pane_g4

0x0003,

0xf0a6,	// (0x00053e79) list_pinb_item_pane_g_ParamLimits

0xf0a6,	// (0x00053e79) list_pinb_item_pane_g

0x1c29,	// (0x000469fc) list_pinb_item_pane_t1_ParamLimits

0x1c29,	// (0x000469fc) list_pinb_item_pane_t1

0x1c5b,	// (0x00046a2e) calc_display_pane

0x1c80,	// (0x00046a53) calc_paper_pane

0x1ca3,	// (0x00046a76) grid_calc_pane

0x128d,	// (0x00046060) bg_list_pane_cp01

0x1cd1,	// (0x00046aa4) clock_g1

0x1cd1,	// (0x00046aa4) clock_g2

0x0001,

0xf0af,	// (0x00053e82) clock_g

0x1cdb,	// (0x00046aae) clock_t1_ParamLimits

0x1cdb,	// (0x00046aae) clock_t1

0x1cef,	// (0x00046ac2) clock_t2_ParamLimits

0x1cef,	// (0x00046ac2) clock_t2

0x1cef,	// (0x00046ac2) clock_t3_ParamLimits

0x1cef,	// (0x00046ac2) clock_t3

0x1cef,	// (0x00046ac2) clock_t4_ParamLimits

0x1cef,	// (0x00046ac2) clock_t4

0x1cdb,	// (0x00046aae) clock_t5_ParamLimits

0x1cdb,	// (0x00046aae) clock_t5

0x1cef,	// (0x00046ac2) clock_t6_ParamLimits

0x1cef,	// (0x00046ac2) clock_t6

0x1cef,	// (0x00046ac2) clock_t7_ParamLimits

0x1cef,	// (0x00046ac2) clock_t7

0x1cef,	// (0x00046ac2) clock_t8_ParamLimits

0x1cef,	// (0x00046ac2) clock_t8

0x1cef,	// (0x00046ac2) clock_t9_ParamLimits

0x1cef,	// (0x00046ac2) clock_t9

0x0008,

0xf0b4,	// (0x00053e87) clock_t_ParamLimits

0xf0b4,	// (0x00053e87) clock_t

0x128d,	// (0x00046060) popup_clock_analogue_window_cp02

0x128d,	// (0x00046060) popup_clock_digital_window_cp01

0x1929,	// (0x000466fc) listscroll_help_pane

0x1929,	// (0x000466fc) phob_pre_status_pane

0x1d03,	// (0x00046ad6) grid_qdial_pane

0x1b84,	// (0x00046957) listscroll_mce_pane

0x1b84,	// (0x00046957) bg_notes_pane

0x1d0d,	// (0x00046ae0) list_notes_pane

0x1d1b,	// (0x00046aee) scroll_pane_cp06

0x1d2f,	// (0x00046b02) bg_calc_paper_pane

0xa5a7,	// (0x0004f37a) list_calc_pane

0x1d43,	// (0x00046b16) bg_calc_display_pane

0x1d4f,	// (0x00046b22) calc_display_pane_t1

0x1d61,	// (0x00046b34) calc_display_pane_t2

0xa5c1,	// (0x0004f394) calc_display_pane_t3

0x0002,

0xf0c7,	// (0x00053e9a) calc_display_pane_t

0x1d73,	// (0x00046b46) cell_calc_pane_ParamLimits

0x1d73,	// (0x00046b46) cell_calc_pane

0x1da8,	// (0x00046b7b) bg_calc_paper_pane_g1

0x1db4,	// (0x00046b87) bg_calc_paper_pane_g2

0x1dc0,	// (0x00046b93) bg_calc_paper_pane_g3

0x1dcc,	// (0x00046b9f) bg_calc_paper_pane_g4

0x1dd8,	// (0x00046bab) bg_calc_paper_pane_g5

0x1de4,	// (0x00046bb7) bg_calc_paper_pane_g6

0x1df3,	// (0x00046bc6) bg_calc_paper_pane_g7

0x1e02,	// (0x00046bd5) bg_calc_paper_pane_g8

0x0007,

0xf0ce,	// (0x00053ea1) bg_calc_paper_pane_g

0x1e15,	// (0x00046be8) calc_bg_paper_pane_g9

0x1e28,	// (0x00046bfb) list_calc_item_pane_ParamLimits

0x1e28,	// (0x00046bfb) list_calc_item_pane

0x1e3d,	// (0x00046c10) list_calc_item_pane_g1

0xa5d3,	// (0x0004f3a6) list_calc_item_pane_t1_ParamLimits

0xa5d3,	// (0x0004f3a6) list_calc_item_pane_t1

0x1e4a,	// (0x00046c1d) list_calc_item_pane_t2_ParamLimits

0x1e4a,	// (0x00046c1d) list_calc_item_pane_t2

0x0001,

0xf0df,	// (0x00053eb2) list_calc_item_pane_t_ParamLimits

0xf0df,	// (0x00053eb2) list_calc_item_pane_t

0x1b9c,	// (0x0004696f) cell_calc_pane_g1

0x1e7c,	// (0x00046c4f) grid_highlight_pane_cp02

0x1e9e,	// (0x00046c71) bg_calc_display_pane_g1

0x1ea7,	// (0x00046c7a) bg_calc_display_pane_g2

0xd8db,	// (0x000526ae) bg_calc_display_pane_g3

0x0002,

0xf0e9,	// (0x00053ebc) bg_calc_display_pane_g

0x1eb1,	// (0x00046c84) cell_qdial_pane_ParamLimits

0x1eb1,	// (0x00046c84) cell_qdial_pane

0x1ec5,	// (0x00046c98) cell_qdial_pane_g1_ParamLimits

0x1ec5,	// (0x00046c98) cell_qdial_pane_g1

0x1edb,	// (0x00046cae) cell_qdial_pane_g2_ParamLimits

0x1edb,	// (0x00046cae) cell_qdial_pane_g2

0x1eeb,	// (0x00046cbe) cell_qdial_pane_g3_ParamLimits

0x1eeb,	// (0x00046cbe) cell_qdial_pane_g3

0x0003,

0xf0f0,	// (0x00053ec3) cell_qdial_pane_g_ParamLimits

0xf0f0,	// (0x00053ec3) cell_qdial_pane_g

0x1f0d,	// (0x00046ce0) cell_qdial_pane_t1_ParamLimits

0x1f0d,	// (0x00046ce0) cell_qdial_pane_t1

0x1f25,	// (0x00046cf8) cell_qdial_pane_t2_ParamLimits

0x1f25,	// (0x00046cf8) cell_qdial_pane_t2

0x1f38,	// (0x00046d0b) cell_qdial_pane_t3_ParamLimits

0x1f38,	// (0x00046d0b) cell_qdial_pane_t3

0x0002,

0xf0f9,	// (0x00053ecc) cell_qdial_pane_t_ParamLimits

0xf0f9,	// (0x00053ecc) cell_qdial_pane_t

0x1929,	// (0x000466fc) grid_highlight_pane_cp04

0x1f4b,	// (0x00046d1e) thumbnail_qdial_pane_ParamLimits

0x1f4b,	// (0x00046d1e) thumbnail_qdial_pane

0x1fa7,	// (0x00046d7a) list_help_pane

0x1fb0,	// (0x00046d83) scroll_pane_cp02

0x1fb9,	// (0x00046d8c) help_list_pane_t1_ParamLimits

0x1fb9,	// (0x00046d8c) help_list_pane_t1

0xa5e5,	// (0x0004f3b8) bg_notes_pane_g2

0xa5ed,	// (0x0004f3c0) bg_notes_pane_g3

0xa5f5,	// (0x0004f3c8) notes_bg_pane_g1

0xa5fd,	// (0x0004f3d0) notes_bg_pane_g4

0xa605,	// (0x0004f3d8) notes_bg_pane_g5

0xa60d,	// (0x0004f3e0) notes_bg_pane_g6

0xa615,	// (0x0004f3e8) notes_bg_pane_g7

0xa61d,	// (0x0004f3f0) notes_bg_pane_g8

0xa625,	// (0x0004f3f8) notes_bg_pane_g9

0x0006,

0xf117,	// (0x00053eea) notes_bg_pane_g

0x1fd8,	// (0x00046dab) list_notes_text_pane_ParamLimits

0x1fd8,	// (0x00046dab) list_notes_text_pane

0x1fee,	// (0x00046dc1) list_notes_text_pane_g1

0x0a29,	// (0x000457fc) list_notes_text_pane_t1

0x2008,	// (0x00046ddb) listscroll_cale_week_pane

0x203d,	// (0x00046e10) bg_cale_heading_pane

0x2055,	// (0x00046e28) bg_cale_pane_cp01

0x2072,	// (0x00046e45) cale_week_corner_pane

0x2091,	// (0x00046e64) cale_week_day_heading_pane

0x20ae,	// (0x00046e81) cale_week_scroll_pane_g1

0x20c1,	// (0x00046e94) cale_week_scroll_pane_g2

0x20d9,	// (0x00046eac) cale_week_scroll_pane_g3

0x20f1,	// (0x00046ec4) cale_week_scroll_pane_g4

0x2109,	// (0x00046edc) cale_week_scroll_pane_g5

0x2129,	// (0x00046efc) cale_week_scroll_pane_g6

0x2149,	// (0x00046f1c) cale_week_scroll_pane_g7

0x2169,	// (0x00046f3c) cale_week_scroll_pane_g8

0x218d,	// (0x00046f60) cale_week_scroll_pane_g9

0x21a5,	// (0x00046f78) cale_week_scroll_pane_g10

0x21bd,	// (0x00046f90) cale_week_scroll_pane_g11

0x21d5,	// (0x00046fa8) cale_week_scroll_pane_g12

0x21ed,	// (0x00046fc0) cale_week_scroll_pane_g13

0x21ed,	// (0x00046fc0) cale_week_scroll_pane_g14

0x21ed,	// (0x00046fc0) cale_week_scroll_pane_g15

0x000f,

0xf126,	// (0x00053ef9) cale_week_scroll_pane_g

0x2229,	// (0x00046ffc) cale_week_time_pane

0x224d,	// (0x00047020) grid_cale_week_pane

0x2285,	// (0x00047058) scroll_pane_cp08

0x22a2,	// (0x00047075) cell_cale_week_pane_ParamLimits

0x22a2,	// (0x00047075) cell_cale_week_pane

0x2330,	// (0x00047103) cale_week_day_heading_pane_t1

0x235a,	// (0x0004712d) cale_week_day_heading_pane_t2

0x2389,	// (0x0004715c) cale_week_day_heading_pane_t3

0x23b8,	// (0x0004718b) cale_week_day_heading_pane_t4

0x23e7,	// (0x000471ba) cale_week_day_heading_pane_t5

0x241e,	// (0x000471f1) cale_week_day_heading_pane_t6

0x2455,	// (0x00047228) cale_week_day_heading_pane_t7

0x0006,

0xf147,	// (0x00053f1a) cale_week_day_heading_pane_t

0x247f,	// (0x00047252) bg_cale_side_pane

0x248d,	// (0x00047260) cale_week_time_pane_t1

0x24a7,	// (0x0004727a) cale_week_time_pane_t2

0x24c1,	// (0x00047294) cale_week_time_pane_t3

0x24db,	// (0x000472ae) cale_week_time_pane_t4

0x24f5,	// (0x000472c8) cale_week_time_pane_t5

0x250f,	// (0x000472e2) cale_week_time_pane_t6

0x2529,	// (0x000472fc) cale_week_time_pane_t7

0x2543,	// (0x00047316) cale_week_time_pane_t8

0x0007,

0xf156,	// (0x00053f29) cale_week_time_pane_t

0x2563,	// (0x00047336) cell_cale_week_pane_g2

0x2587,	// (0x0004735a) cell_cale_week_pane_g3_ParamLimits

0x2587,	// (0x0004735a) cell_cale_week_pane_g3

0x259f,	// (0x00047372) grid_highlight_pane_cp07

0x25a7,	// (0x0004737a) listscroll_gms_pane

0x25b1,	// (0x00047384) grid_gms_pane

0x25ba,	// (0x0004738d) listscroll_gms_pane_g1

0x25c2,	// (0x00047395) listscroll_gms_pane_g2

0x0001,

0xf167,	// (0x00053f3a) listscroll_gms_pane_g

0x25ca,	// (0x0004739d) scroll_pane_cp010

0x25d5,	// (0x000473a8) cell_gms_pane_ParamLimits

0x25d5,	// (0x000473a8) cell_gms_pane

0x25e7,	// (0x000473ba) cell_gms_pane_g1

0x25ef,	// (0x000473c2) cell_gms_pane_g2

0x1fee,	// (0x00046dc1) cell_gms_pane_g3

0x25f7,	// (0x000473ca) cell_gms_pane_g4

0x0003,

0xf16c,	// (0x00053f3f) cell_gms_pane_g

0x2600,	// (0x000473d3) grid_highlight_pane_cp09

0x4844,	// (0x00049617) phob_pre_status_pane_g1

0x484c,	// (0x0004961f) phob_pre_status_pane_g2

0x4854,	// (0x00049627) phob_pre_status_pane_g3

0x485c,	// (0x0004962f) phob_pre_status_pane_g4

0x0004,

0xf52e,	// (0x00054301) phob_pre_status_pane_g

0x486c,	// (0x0004963f) phob_pre_status_pane_t1

0x487a,	// (0x0004964d) phob_pre_status_pane_t2

0x488a,	// (0x0004965d) phob_pre_status_pane_t3

0x0002,

0xf539,	// (0x0005430c) phob_pre_status_pane_t

0x2610,	// (0x000473e3) bg_list_pane_cp05

0x2618,	// (0x000473eb) grid_vorec_pane

0x2620,	// (0x000473f3) vorec_t1

0x262e,	// (0x00047401) vorec_t2

0x263c,	// (0x0004740f) vorec_t3

0x264a,	// (0x0004741d) vorec_t4

0xd8cd,	// (0x000526a0) vorec_t5

0x9303,	// (0x0004e0d6) vorec_t6

0x0004,

0xf175,	// (0x00053f48) vorec_t

0x9311,	// (0x0004e0e4) wait_bar_pane_cp01

0x2666,	// (0x00047439) cell_vorec_pane_ParamLimits

0x2666,	// (0x00047439) cell_vorec_pane

0xa62d,	// (0x0004f400) cell_vorec_pane_g1

0x1929,	// (0x000466fc) grid_highlight_pane_cp05

0x1451,	// (0x00046224) cams_zoom_pane

0x1451,	// (0x00046224) image_vga_pane

0x1bff,	// (0x000469d2) main_camera_pane_g1

0x1bff,	// (0x000469d2) main_camera_pane_g2

0x1bff,	// (0x000469d2) main_camera_pane_g3

0x1bff,	// (0x000469d2) main_camera_pane_g4

0x1bff,	// (0x000469d2) main_camera_pane_g5

0x1bff,	// (0x000469d2) main_camera_pane_g6

0x1bff,	// (0x000469d2) main_camera_pane_g7

0x0007,

0xf180,	// (0x00053f53) main_camera_pane_g

0x1cdb,	// (0x00046aae) main_camera_pane_t1

0x1cdb,	// (0x00046aae) main_camera_pane_t2

0x0001,

0xf191,	// (0x00053f64) main_camera_pane_t

0x268d,	// (0x00047460) cams_zoom_pane_cp_ParamLimits

0x268d,	// (0x00047460) cams_zoom_pane_cp

0x26c1,	// (0x00047494) image_cif_pane_ParamLimits

0x26c1,	// (0x00047494) image_cif_pane

0x128d,	// (0x00046060) image_subqcif_pane

0x26d3,	// (0x000474a6) main_video_pane_g1_ParamLimits

0x26d3,	// (0x000474a6) main_video_pane_g1

0x2701,	// (0x000474d4) main_video_pane_g2_ParamLimits

0x2701,	// (0x000474d4) main_video_pane_g2

0x273b,	// (0x0004750e) main_video_pane_g3_ParamLimits

0x273b,	// (0x0004750e) main_video_pane_g3

0x273b,	// (0x0004750e) main_video_pane_g4_ParamLimits

0x273b,	// (0x0004750e) main_video_pane_g4

0x276f,	// (0x00047542) main_video_pane_g5_ParamLimits

0x276f,	// (0x00047542) main_video_pane_g5

0x277d,	// (0x00047550) main_video_pane_g6_ParamLimits

0x277d,	// (0x00047550) main_video_pane_g6

0x0006,

0xf196,	// (0x00053f69) main_video_pane_g_ParamLimits

0xf196,	// (0x00053f69) main_video_pane_g

0x27a5,	// (0x00047578) main_video_pane_t1_ParamLimits

0x27a5,	// (0x00047578) main_video_pane_t1

0x1cd1,	// (0x00046aa4) cams_zoom_pane_g1

0x1cd1,	// (0x00046aa4) cams_zoom_pane_g2

0x1cd1,	// (0x00046aa4) cams_zoom_pane_g3

0x1cd1,	// (0x00046aa4) cams_zoom_pane_g4

0x0003,

0xf1a5,	// (0x00053f78) cams_zoom_pane_g

0x1451,	// (0x00046224) grid_cams_pane

0x1451,	// (0x00046224) linegrid_cams_pane

0x27e9,	// (0x000475bc) cell_cams_pane_ParamLimits

0x27e9,	// (0x000475bc) cell_cams_pane

0x128d,	// (0x00046060) cams_burst_image_pane

0x1cd1,	// (0x00046aa4) cell_cams_pane_g1

0x128d,	// (0x00046060) grid_highlight_pane_cp03

0x1b9c,	// (0x0004696f) mp_bg_pane_g1

0x128d,	// (0x00046060) bg_list_pane_cp03

0x128d,	// (0x00046060) bg_mp_pane

0x128d,	// (0x00046060) grid_mp_pane

0x1cd1,	// (0x00046aa4) media_player_g1

0x3bc4,	// (0x00048997) media_player_t1

0x3bc4,	// (0x00048997) media_player_t2

0x3bc4,	// (0x00048997) media_player_t3

0x3bc4,	// (0x00048997) media_player_t4

0x3bc4,	// (0x00048997) media_player_t5

0x3bc4,	// (0x00048997) media_player_t6

0x3bc4,	// (0x00048997) media_player_t7

0x0006,

0xf518,	// (0x000542eb) media_player_t

0x128d,	// (0x00046060) wait_bar_pane_cp02

0xf4fd,	// (0x000542d0) main_usb_pane_t

0xa858,	// (0x0004f62b) cell_mp_pane

0x1b9c,	// (0x0004696f) cell_mp_pane_g1

0x1929,	// (0x000466fc) grid_highlight_pane_cp06

0x27fe,	// (0x000475d1) grid_skin_colour_pane

0x2806,	// (0x000475d9) list_highlight_pane_cp03

0x280e,	// (0x000475e1) skin_g1

0x2816,	// (0x000475e9) skin_t1

0x2825,	// (0x000475f8) skin_t2

0x0001,

0xf1d3,	// (0x00053fa6) skin_t

0x2833,	// (0x00047606) cell_skin_colour_pane_ParamLimits

0x2833,	// (0x00047606) cell_skin_colour_pane

0x2853,	// (0x00047626) cell_skin_colour_pane_g1

0x28be,	// (0x00047691) call_video_g1_ParamLimits

0x28be,	// (0x00047691) call_video_g1

0x28da,	// (0x000476ad) call_video_g2_ParamLimits

0x28da,	// (0x000476ad) call_video_g2

0x0001,

0xf1d8,	// (0x00053fab) call_video_g_ParamLimits

0xf1d8,	// (0x00053fab) call_video_g

0x292c,	// (0x000476ff) call_video_uplink_pane_cp1_ParamLimits

0x292c,	// (0x000476ff) call_video_uplink_pane_cp1

0x2991,	// (0x00047764) call_video_uplink_pane_cp2

0x29d3,	// (0x000477a6) video_down_crop_pane_ParamLimits

0x29d3,	// (0x000477a6) video_down_crop_pane

0x2abc,	// (0x0004788f) video_down_pane_ParamLimits

0x2abc,	// (0x0004788f) video_down_pane

0x2bb3,	// (0x00047986) video_down_subqcif_pane_ParamLimits

0x2bb3,	// (0x00047986) video_down_subqcif_pane

0x2bcb,	// (0x0004799e) video_down_subqcif_pane_cp_ParamLimits

0x2bcb,	// (0x0004799e) video_down_subqcif_pane_cp

0x2c0a,	// (0x000479dd) im_reading_pane_ParamLimits

0x2c0a,	// (0x000479dd) im_reading_pane

0x2c1c,	// (0x000479ef) im_writing_pane_ParamLimits

0x2c1c,	// (0x000479ef) im_writing_pane

0x2c3a,	// (0x00047a0d) im_reading_pane_t1

0x2c74,	// (0x00047a47) list_im_pane

0x2c85,	// (0x00047a58) scroll_pane_cp07

0x2c9e,	// (0x00047a71) im_writing_pane_t1_ParamLimits

0x2c9e,	// (0x00047a71) im_writing_pane_t1

0x2cb3,	// (0x00047a86) im_writing_pane_t2_ParamLimits

0x2cb3,	// (0x00047a86) im_writing_pane_t2

0x0001,

0xf1e2,	// (0x00053fb5) im_writing_pane_t_ParamLimits

0xf1e2,	// (0x00053fb5) im_writing_pane_t

0x1929,	// (0x000466fc) input_focus_pane_cp04

0x1929,	// (0x000466fc) input_focus_pane_cp05

0x2cd0,	// (0x00047aa3) list_im_single_pane_ParamLimits

0x2cd0,	// (0x00047aa3) list_im_single_pane

0x2ce5,	// (0x00047ab8) list_single_im_pane_t1

0x2610,	// (0x000473e3) blid_accuracy_pane

0x2610,	// (0x000473e3) blid_compass_pane

0xbe54,	// (0x00050c27) main_location_t1

0xbe54,	// (0x00050c27) main_location_t2

0xbe54,	// (0x00050c27) main_location_t3

0x0002,

0xf527,	// (0x000542fa) main_location_t

0x1929,	// (0x000466fc) aid_levels_location

0x1b9c,	// (0x0004696f) blid_accuracy_pane_g1

0x1b9c,	// (0x0004696f) blid_accuracy_pane_g2

0x0001,

0xf231,	// (0x00054004) blid_accuracy_pane_g

0x2d1f,	// (0x00047af2) wml_content_pane

0x2d5d,	// (0x00047b30) wml_button_pane_ParamLimits

0x2d5d,	// (0x00047b30) wml_button_pane

0x2d71,	// (0x00047b44) wml_list_single_large_pane_ParamLimits

0x2d71,	// (0x00047b44) wml_list_single_large_pane

0x2d86,	// (0x00047b59) wml_list_single_medium_pane_ParamLimits

0x2d86,	// (0x00047b59) wml_list_single_medium_pane

0x2d9d,	// (0x00047b70) wml_list_single_small_pane_ParamLimits

0x2d9d,	// (0x00047b70) wml_list_single_small_pane

0x2db6,	// (0x00047b89) wml_selection_box_pane_ParamLimits

0x2db6,	// (0x00047b89) wml_selection_box_pane

0x2dc9,	// (0x00047b9c) wml_list_single_pane_t1

0x2dd8,	// (0x00047bab) wml_list_single_medium_pane_t1

0x2de7,	// (0x00047bba) wml_list_single_large_pane_t1

0x2df6,	// (0x00047bc9) input_focus_pane_cp02_ParamLimits

0x2df6,	// (0x00047bc9) input_focus_pane_cp02

0x2e09,	// (0x00047bdc) wml_selection_box_pane_g1

0x2e12,	// (0x00047be5) wml_selection_box_pane_t1_ParamLimits

0x2e12,	// (0x00047be5) wml_selection_box_pane_t1

0x1b84,	// (0x00046957) bg_wml_button_pane_ParamLimits

0x1b84,	// (0x00046957) bg_wml_button_pane

0x2e2a,	// (0x00047bfd) wml_button_pane_g1

0x2e32,	// (0x00047c05) wml_button_pane_t1

0x2e2a,	// (0x00047bfd) wml_button_bg_pane_g1

0x2e42,	// (0x00047c15) wml_button_bg_pane_g2

0x2e4a,	// (0x00047c1d) wml_button_bg_pane_g3

0x2e52,	// (0x00047c25) wml_button_bg_pane_g4

0x2e5a,	// (0x00047c2d) wml_button_bg_pane_g5

0x2e62,	// (0x00047c35) wml_button_bg_pane_g6

0x2e6a,	// (0x00047c3d) wml_button_bg_pane_g7

0x2e72,	// (0x00047c45) wml_button_bg_pane_g8

0x2e7a,	// (0x00047c4d) wml_button_bg_pane_g9

0x0008,

0xf1e7,	// (0x00053fba) wml_button_bg_pane_g

0x2e82,	// (0x00047c55) bg_list_pane_cp02

0x2e8a,	// (0x00047c5d) mce_header_pane_ParamLimits

0x2e8a,	// (0x00047c5d) mce_header_pane

0x2ea0,	// (0x00047c73) mce_icon_pane

0x2ea0,	// (0x00047c73) mce_image_pane

0x2ea9,	// (0x00047c7c) mce_text_pane_ParamLimits

0x2ea9,	// (0x00047c7c) mce_text_pane

0x2ebc,	// (0x00047c8f) scroll_pane_cp03

0x2d55,	// (0x00047b28) scroll_pane_cp04

0x2ec6,	// (0x00047c99) scroll_pane_cp05_ParamLimits

0x2ec6,	// (0x00047c99) scroll_pane_cp05

0x2ed2,	// (0x00047ca5) mce_header_field_pane_ParamLimits

0x2ed2,	// (0x00047ca5) mce_header_field_pane

0x2ee9,	// (0x00047cbc) mce_header_field_pane_2_ParamLimits

0x2ee9,	// (0x00047cbc) mce_header_field_pane_2

0x2eff,	// (0x00047cd2) mce_header_field_pane_3

0x2f07,	// (0x00047cda) list_single_mce_message_pane_ParamLimits

0x2f07,	// (0x00047cda) list_single_mce_message_pane

0x2f1d,	// (0x00047cf0) list_single_mce_smart_pane_ParamLimits

0x2f1d,	// (0x00047cf0) list_single_mce_smart_pane

0x2f3e,	// (0x00047d11) input_focus_pane_cp03

0x2f47,	// (0x00047d1a) list_header_data_pane

0x2f4f,	// (0x00047d22) mce_header_field_pane_t1

0x2f5f,	// (0x00047d32) list_single_mce_header_pane_ParamLimits

0x2f5f,	// (0x00047d32) list_single_mce_header_pane

0x2f73,	// (0x00047d46) list_single_mce_header_pane_t1

0x2f82,	// (0x00047d55) list_single_mce_message_pane_g1

0x2f8a,	// (0x00047d5d) list_single_mce_message_pane_t1

0x2fbe,	// (0x00047d91) bg_cale_heading_pane_cp01_ParamLimits

0x2fbe,	// (0x00047d91) bg_cale_heading_pane_cp01

0x2ff8,	// (0x00047dcb) bg_cale_pane_cp02_ParamLimits

0x2ff8,	// (0x00047dcb) bg_cale_pane_cp02

0x3025,	// (0x00047df8) cale_month_corner_pane

0x3044,	// (0x00047e17) cale_month_day_heading_pane_ParamLimits

0x3044,	// (0x00047e17) cale_month_day_heading_pane

0x3096,	// (0x00047e69) cale_month_pane_g1_ParamLimits

0x3096,	// (0x00047e69) cale_month_pane_g1

0x30c5,	// (0x00047e98) cale_month_pane_g2_ParamLimits

0x30c5,	// (0x00047e98) cale_month_pane_g2

0x30f5,	// (0x00047ec8) cale_month_pane_g3_ParamLimits

0x30f5,	// (0x00047ec8) cale_month_pane_g3

0x3131,	// (0x00047f04) cale_month_pane_g4_ParamLimits

0x3131,	// (0x00047f04) cale_month_pane_g4

0x316d,	// (0x00047f40) cale_month_pane_g5_ParamLimits

0x316d,	// (0x00047f40) cale_month_pane_g5

0x31b5,	// (0x00047f88) cale_month_pane_g6_ParamLimits

0x31b5,	// (0x00047f88) cale_month_pane_g6

0x3201,	// (0x00047fd4) cale_month_pane_g7_ParamLimits

0x3201,	// (0x00047fd4) cale_month_pane_g7

0x3251,	// (0x00048024) cale_month_pane_g8_ParamLimits

0x3251,	// (0x00048024) cale_month_pane_g8

0x32a5,	// (0x00048078) cale_month_pane_g9_ParamLimits

0x32a5,	// (0x00048078) cale_month_pane_g9

0x32f7,	// (0x000480ca) cale_month_pane_g10_ParamLimits

0x32f7,	// (0x000480ca) cale_month_pane_g10

0x3349,	// (0x0004811c) cale_month_pane_g11_ParamLimits

0x3349,	// (0x0004811c) cale_month_pane_g11

0x339b,	// (0x0004816e) cale_month_pane_g12_ParamLimits

0x339b,	// (0x0004816e) cale_month_pane_g12

0x33ed,	// (0x000481c0) cale_month_pane_g13_ParamLimits

0x33ed,	// (0x000481c0) cale_month_pane_g13

0x000c,

0xf1fa,	// (0x00053fcd) cale_month_pane_g_ParamLimits

0xf1fa,	// (0x00053fcd) cale_month_pane_g

0x3451,	// (0x00048224) cale_month_week_pane

0x3475,	// (0x00048248) grid_cale_month_pane_ParamLimits

0x3475,	// (0x00048248) grid_cale_month_pane

0x34be,	// (0x00048291) cale_month_day_heading_pane_t1

0x3500,	// (0x000482d3) cale_month_day_heading_pane_t2

0x3535,	// (0x00048308) cale_month_day_heading_pane_t3

0x356a,	// (0x0004833d) cale_month_day_heading_pane_t4

0x35a7,	// (0x0004837a) cale_month_day_heading_pane_t5

0x35ec,	// (0x000483bf) cale_month_day_heading_pane_t6

0x3631,	// (0x00048404) cale_month_day_heading_pane_t7

0x0006,

0xf215,	// (0x00053fe8) cale_month_day_heading_pane_t

0x247f,	// (0x00047252) bg_cale_side_pane_cp01

0x367e,	// (0x00048451) cale_month_week_pane_t1

0x3697,	// (0x0004846a) cale_month_week_pane_t2

0x36b0,	// (0x00048483) cale_month_week_pane_t3

0x36c9,	// (0x0004849c) cale_month_week_pane_t4

0x36e2,	// (0x000484b5) cale_month_week_pane_t5

0x36fb,	// (0x000484ce) cale_month_week_pane_t6

0x0005,

0xf224,	// (0x00053ff7) cale_month_week_pane_t

0x3714,	// (0x000484e7) cell_cale_month_pane_ParamLimits

0x3714,	// (0x000484e7) cell_cale_month_pane

0xa637,	// (0x0004f40a) cell_cale_month_pane_g1

0x3842,	// (0x00048615) cell_cale_month_pane_t1_ParamLimits

0x3842,	// (0x00048615) cell_cale_month_pane_t1

0x259f,	// (0x00047372) grid_highlight_pane_cp08

0x1b9c,	// (0x0004696f) main_smil_g1

0x386e,	// (0x00048641) smil_status_pane

0x3879,	// (0x0004864c) smil_text_pane

0xbd2c,	// (0x00050aff) bg_popup_call3_rect_pane_g8

0xbd34,	// (0x00050b07) bg_popup_call3_rect_pane_g9

0x0008,

0xf4ad,	// (0x00054280) bg_popup_call3_rect_pane_g

0xbf71,	// (0x00050d44) smil_status_volume_pane_g1

0x388d,	// (0x00048660) smil_status_pane_t1

0xbfa4,	// (0x00050d77) volume_smil_pane

0x38a4,	// (0x00048677) list_smil_text_pane

0x38ae,	// (0x00048681) scroll_pane_cp011

0x38b9,	// (0x0004868c) smil_text_list_pane_t1_ParamLimits

0x38b9,	// (0x0004868c) smil_text_list_pane_t1

0xa643,	// (0x0004f416) aid_volume_smil_ParamLimits

0xa643,	// (0x0004f416) aid_volume_smil

0x1b9c,	// (0x0004696f) smil_volume_pane_g1

0x1b9c,	// (0x0004696f) smil_volume_pane_g2

0x0001,

0xf231,	// (0x00054004) smil_volume_pane_g

0x2008,	// (0x00046ddb) listscroll_cale_day_pane

0x38fd,	// (0x000486d0) bg_cale_pane

0x3915,	// (0x000486e8) list_cale_pane

0x3938,	// (0x0004870b) scroll_pane_cp09

0x3949,	// (0x0004871c) cale_bg_pane_g1

0x3951,	// (0x00048724) cale_bg_pane_g2

0x3959,	// (0x0004872c) cale_bg_pane_g3

0x3961,	// (0x00048734) cale_bg_pane_g4

0x3969,	// (0x0004873c) cale_bg_pane_g5

0x3971,	// (0x00048744) cale_bg_pane_g6

0x3979,	// (0x0004874c) cale_bg_pane_g7

0x3981,	// (0x00048754) cale_bg_pane_g8

0x3989,	// (0x0004875c) cale_bg_pane_g9

0x0008,

0xf236,	// (0x00054009) cale_bg_pane_g

0x3999,	// (0x0004876c) list_cale_time_pane_ParamLimits

0x3999,	// (0x0004876c) list_cale_time_pane

0x39af,	// (0x00048782) list_cale_time_pane_g1_ParamLimits

0x39af,	// (0x00048782) list_cale_time_pane_g1

0x39bb,	// (0x0004878e) list_cale_time_pane_g2_ParamLimits

0x39bb,	// (0x0004878e) list_cale_time_pane_g2

0x39c8,	// (0x0004879b) list_cale_time_pane_g3_ParamLimits

0x39c8,	// (0x0004879b) list_cale_time_pane_g3

0x39d6,	// (0x000487a9) list_cale_time_pane_g4_ParamLimits

0x39d6,	// (0x000487a9) list_cale_time_pane_g4

0x39e4,	// (0x000487b7) list_cale_time_pane_g5_ParamLimits

0x39e4,	// (0x000487b7) list_cale_time_pane_g5

0x0005,

0xf249,	// (0x0005401c) list_cale_time_pane_g_ParamLimits

0xf249,	// (0x0005401c) list_cale_time_pane_g

0x39ff,	// (0x000487d2) list_cale_time_pane_t1_ParamLimits

0x39ff,	// (0x000487d2) list_cale_time_pane_t1

0x3a27,	// (0x000487fa) list_cale_time_pane_t2_ParamLimits

0x3a27,	// (0x000487fa) list_cale_time_pane_t2

0x3eb8,	// (0x00048c8b) aid_blid_cardinal_pane

0x3ef6,	// (0x00048cc9) compass_pane_t4

0x3a4f,	// (0x00048822) list_cale_time_pane_t4_ParamLimits

0x3a4f,	// (0x00048822) list_cale_time_pane_t4

0x3f04,	// (0x00048cd7) compass_pane_t5

0x3f12,	// (0x00048ce5) compass_pane_t6

0x3f20,	// (0x00048cf3) compass_pane_t7

0xa972,	// (0x0004f745) navi_pane_cc_t1

0xab61,	// (0x0004f934) aid_phob_thumbnail_center_pane

0x4296,	// (0x00049069) main_postcard_pane_g4_ParamLimits

0x0002,

0xf256,	// (0x00054029) list_cale_time_pane_t_ParamLimits

0xf256,	// (0x00054029) list_cale_time_pane_t

0x155c,	// (0x0004632f) bg_popup_window_pane_cp02_ParamLimits

0x155c,	// (0x0004632f) bg_popup_window_pane_cp02

0x3a77,	// (0x0004884a) heading_pane_cp01_ParamLimits

0x3a77,	// (0x0004884a) heading_pane_cp01

0x3a83,	// (0x00048856) loc_req_pane_ParamLimits

0x3a83,	// (0x00048856) loc_req_pane

0x3a93,	// (0x00048866) loc_type_pane_ParamLimits

0x3a93,	// (0x00048866) loc_type_pane

0x3aa5,	// (0x00048878) loc_type_pane_t1_ParamLimits

0x3aa5,	// (0x00048878) loc_type_pane_t1

0x3ab7,	// (0x0004888a) loc_type_pane_t2_ParamLimits

0x3ab7,	// (0x0004888a) loc_type_pane_t2

0x3ac9,	// (0x0004889c) loc_type_pane_t3_ParamLimits

0x3ac9,	// (0x0004889c) loc_type_pane_t3

0x0002,

0xf25d,	// (0x00054030) loc_type_pane_t_ParamLimits

0xf25d,	// (0x00054030) loc_type_pane_t

0x3adb,	// (0x000488ae) list_loc_req_pane

0x3ae5,	// (0x000488b8) scroll_pane_cp012

0x3af0,	// (0x000488c3) list_single_loc_request_popup_menu_pane_ParamLimits

0x3af0,	// (0x000488c3) list_single_loc_request_popup_menu_pane

0x3afd,	// (0x000488d0) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x3afd,	// (0x000488d0) list_single_loc_request_popup_menu_pane_g1

0x3b09,	// (0x000488dc) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x3b09,	// (0x000488dc) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf264,	// (0x00054037) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf264,	// (0x00054037) list_single_loc_request_popup_menu_pane_g

0x3b15,	// (0x000488e8) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x3b15,	// (0x000488e8) list_single_loc_request_popup_menu_pane_t1

0x1b84,	// (0x00046957) bg_popup_window_pane_cp03_ParamLimits

0x1b84,	// (0x00046957) bg_popup_window_pane_cp03

0x3b2b,	// (0x000488fe) heading_loc_req_pane_ParamLimits

0x3b2b,	// (0x000488fe) heading_loc_req_pane

0x3b37,	// (0x0004890a) popup_dyc_status_message_window_g1_ParamLimits

0x3b37,	// (0x0004890a) popup_dyc_status_message_window_g1

0x3b4b,	// (0x0004891e) popup_dyc_status_message_window_t1_ParamLimits

0x3b4b,	// (0x0004891e) popup_dyc_status_message_window_t1

0x3b60,	// (0x00048933) popup_dyc_status_message_window_t2_ParamLimits

0x3b60,	// (0x00048933) popup_dyc_status_message_window_t2

0x3b75,	// (0x00048948) popup_dyc_status_message_window_t3_ParamLimits

0x3b75,	// (0x00048948) popup_dyc_status_message_window_t3

0x0002,

0xf269,	// (0x0005403c) popup_dyc_status_message_window_t_ParamLimits

0xf269,	// (0x0005403c) popup_dyc_status_message_window_t

0x1929,	// (0x000466fc) bg_heading_pane_cp01

0x3b91,	// (0x00048964) heading_loc_req_pane_g1

0x3b99,	// (0x0004896c) heading_loc_req_pane_g2

0x3ba1,	// (0x00048974) heading_loc_req_pane_g3

0x0002,

0xf270,	// (0x00054043) heading_loc_req_pane_g

0x3ba9,	// (0x0004897c) heading_loc_req_pane_t1

0x3bd4,	// (0x000489a7) bg_popup_sub_pane_cp01_ParamLimits

0x3bd4,	// (0x000489a7) bg_popup_sub_pane_cp01

0x3be2,	// (0x000489b5) popup_cale_events_window_g1_ParamLimits

0x3be2,	// (0x000489b5) popup_cale_events_window_g1

0x3c02,	// (0x000489d5) popup_cale_events_window_g2_ParamLimits

0x3c02,	// (0x000489d5) popup_cale_events_window_g2

0x0001,

0xf292,	// (0x00054065) popup_cale_events_window_g_ParamLimits

0xf292,	// (0x00054065) popup_cale_events_window_g

0x3c22,	// (0x000489f5) popup_cale_events_window_t1_ParamLimits

0x3c22,	// (0x000489f5) popup_cale_events_window_t1

0x3c34,	// (0x00048a07) popup_cale_events_window_t2_ParamLimits

0x3c34,	// (0x00048a07) popup_cale_events_window_t2

0x3c72,	// (0x00048a45) popup_cale_events_window_t3_ParamLimits

0x3c72,	// (0x00048a45) popup_cale_events_window_t3

0xa665,	// (0x0004f438) popup_cale_events_window_t4_ParamLimits

0xa665,	// (0x0004f438) popup_cale_events_window_t4

0x0003,

0xf297,	// (0x0005406a) popup_cale_events_window_t_ParamLimits

0xf297,	// (0x0005406a) popup_cale_events_window_t

0x3cac,	// (0x00048a7f) call_type_pane

0x3cbc,	// (0x00048a8f) popup_call_status_window_g1

0x3cd0,	// (0x00048aa3) popup_call_status_window_g2

0x3ce4,	// (0x00048ab7) popup_call_status_window_g3

0x0002,

0xf2a0,	// (0x00054073) popup_call_status_window_g

0xa69b,	// (0x0004f46e) call_type_pane_g1

0xa6a4,	// (0x0004f477) call_type_pane_g2

0x0001,

0xf2a7,	// (0x0005407a) call_type_pane_g

0x1929,	// (0x000466fc) bg_popup_sub_pane_cp02

0xa6ad,	// (0x0004f480) listscroll_popup_wml_pane

0xa6b5,	// (0x0004f488) list_wml_pane

0xa6bf,	// (0x0004f492) scroll_pane_cp013

0xa6ca,	// (0x0004f49d) list_single_graphic_popup_wml_pane_ParamLimits

0xa6ca,	// (0x0004f49d) list_single_graphic_popup_wml_pane

0x1b9c,	// (0x0004696f) list_single_graphic_popup_wml_pane_g1

0xa6de,	// (0x0004f4b1) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2ac,	// (0x0005407f) list_single_graphic_popup_wml_pane_g

0xa6e6,	// (0x0004f4b9) list_single_graphic_popup_wml_pane_t1

0xa6fc,	// (0x0004f4cf) aid_call_pane

0x1b7c,	// (0x0004694f) popup_clock_analogue_window_g1

0x1b7c,	// (0x0004694f) popup_clock_analogue_window_g2

0xa704,	// (0x0004f4d7) popup_clock_analogue_window_g3

0xa704,	// (0x0004f4d7) popup_clock_analogue_window_g4

0x1b9c,	// (0x0004696f) popup_clock_analogue_window_g5

0x0004,

0xf2b1,	// (0x00054084) popup_clock_analogue_window_g

0xa70c,	// (0x0004f4df) popup_clock_analogue_window_t1

0xa71a,	// (0x0004f4ed) clock_digital_number_pane_ParamLimits

0xa71a,	// (0x0004f4ed) clock_digital_number_pane

0xa726,	// (0x0004f4f9) clock_digital_number_pane_cp02_ParamLimits

0xa726,	// (0x0004f4f9) clock_digital_number_pane_cp02

0xa732,	// (0x0004f505) clock_digital_number_pane_cp03_ParamLimits

0xa732,	// (0x0004f505) clock_digital_number_pane_cp03

0xa73e,	// (0x0004f511) clock_digital_number_pane_cp04_ParamLimits

0xa73e,	// (0x0004f511) clock_digital_number_pane_cp04

0xa74a,	// (0x0004f51d) clock_digital_separator_pane_ParamLimits

0xa74a,	// (0x0004f51d) clock_digital_separator_pane

0xa756,	// (0x0004f529) popup_clock_digital_window_t1

0x1b9c,	// (0x0004696f) clock_digital_number_pane_g1

0x1b9c,	// (0x0004696f) clock_digital_number_pane_g2

0x0001,

0xf231,	// (0x00054004) clock_digital_number_pane_g

0x1b9c,	// (0x0004696f) clock_digital_separator_pane_g1

0x1b9c,	// (0x0004696f) clock_digital_separator_pane_g2

0x0001,

0xf231,	// (0x00054004) clock_digital_separator_pane_g

0x1929,	// (0x000466fc) bg_popup_window_pane_cp04

0xa773,	// (0x0004f546) heading_pane_cp03

0x2610,	// (0x000473e3) listscroll_popup_gms_pane

0x1929,	// (0x000466fc) grid_large_graphic_popup_pane

0xa77c,	// (0x0004f54f) listscroll_popup_gms_pane_g1

0xa785,	// (0x0004f558) listscroll_popup_gms_pane_g2

0x0001,

0xf2bc,	// (0x0005408f) listscroll_popup_gms_pane_g

0xa78e,	// (0x0004f561) scroll_pane_cp014

0x1bf1,	// (0x000469c4) cell_large_graphic_popup_pane_ParamLimits

0x1bf1,	// (0x000469c4) cell_large_graphic_popup_pane

0x1bff,	// (0x000469d2) cell_large_graphic_popup_pane_g1_ParamLimits

0x1bff,	// (0x000469d2) cell_large_graphic_popup_pane_g1

0xa797,	// (0x0004f56a) cell_large_graphic_popup_pane_g2_ParamLimits

0xa797,	// (0x0004f56a) cell_large_graphic_popup_pane_g2

0xa7a5,	// (0x0004f578) cell_large_graphic_popup_pane_g3_ParamLimits

0xa7a5,	// (0x0004f578) cell_large_graphic_popup_pane_g3

0xa7b3,	// (0x0004f586) cell_large_graphic_popup_pane_g4_ParamLimits

0xa7b3,	// (0x0004f586) cell_large_graphic_popup_pane_g4

0x0003,

0xf2c1,	// (0x00054094) cell_large_graphic_popup_pane_g_ParamLimits

0xf2c1,	// (0x00054094) cell_large_graphic_popup_pane_g

0x1929,	// (0x000466fc) grid_highlight_pane_cp010

0x1b9c,	// (0x0004696f) bg_popup_call_pane_g1

0xa7c4,	// (0x0004f597) list_single_graphic_popup_conf_pane_ParamLimits

0xa7c4,	// (0x0004f597) list_single_graphic_popup_conf_pane

0xa7d7,	// (0x0004f5aa) list_highlight_pane_cp01

0xa7e0,	// (0x0004f5b3) list_single_graphic_popup_conf_pane_g1

0xa7e8,	// (0x0004f5bb) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2ca,	// (0x0005409d) list_single_graphic_popup_conf_pane_g

0xa7f0,	// (0x0004f5c3) list_single_graphic_popup_conf_pane_t1

0xa7fe,	// (0x0004f5d1) linegrid_cams_pane_g1

0x3cf3,	// (0x00048ac6) linegrid_cams_pane_g2

0x1fee,	// (0x00046dc1) linegrid_cams_pane_g3

0xa807,	// (0x0004f5da) linegrid_cams_pane_g4

0x3cfc,	// (0x00048acf) linegrid_cams_pane_g5

0x3d05,	// (0x00048ad8) linegrid_cams_pane_g6

0x25f7,	// (0x000473ca) linegrid_cams_pane_g7

0x0006,

0xf2cf,	// (0x000540a2) linegrid_cams_pane_g

0xa810,	// (0x0004f5e3) popup_clock_analogue_window

0xa810,	// (0x0004f5e3) popup_clock_digital_window

0x1929,	// (0x000466fc) popup_phob_thumbnail_window

0x1b9c,	// (0x0004696f) call_video_uplink_pane_g1

0xa819,	// (0x0004f5ec) call_video_uplink_pane_g2

0x0001,

0xf2de,	// (0x000540b1) call_video_uplink_pane_g

0xa821,	// (0x0004f5f4) video_uplink_pane

0xa829,	// (0x0004f5fc) mce_image_pane_g1

0x3d10,	// (0x00048ae3) mce_image_pane_g2

0x3d18,	// (0x00048aeb) mce_image_pane_g3

0x3d20,	// (0x00048af3) mce_image_pane_g4

0x3d2a,	// (0x00048afd) mce_image_pane_g5

0x0004,

0xf2e3,	// (0x000540b6) mce_image_pane_g

0xa833,	// (0x0004f606) control_top_pane_stacon_cp01_ParamLimits

0xa833,	// (0x0004f606) control_top_pane_stacon_cp01

0xa847,	// (0x0004f61a) uni_indicator_pane_stacon_cp01_ParamLimits

0xa847,	// (0x0004f61a) uni_indicator_pane_stacon_cp01

0xa858,	// (0x0004f62b) bg_popup_sub_pane_cp03

0x3d32,	// (0x00048b05) chi_dic_find_pane

0x3d3a,	// (0x00048b0d) listscroll_chi_dic_pane

0x3d43,	// (0x00048b16) main_pane_chidic_g1

0x3d56,	// (0x00048b29) chi_dic_find_pane_t1

0xa862,	// (0x0004f635) find_chidic_pane

0xa86b,	// (0x0004f63e) chi_dic_list_pane_ParamLimits

0xa86b,	// (0x0004f63e) chi_dic_list_pane

0xa87c,	// (0x0004f64f) scroll_pane_cp020

0x3d64,	// (0x00048b37) find_chidic_pane_t1

0x1929,	// (0x000466fc) input_focus_pane_cp06

0x3d73,	// (0x00048b46) list_chi_dic_pane_ParamLimits

0x3d73,	// (0x00048b46) list_chi_dic_pane

0x3d85,	// (0x00048b58) list_chi_dic_pane_t1_ParamLimits

0x3d85,	// (0x00048b58) list_chi_dic_pane_t1

0x1929,	// (0x000466fc) list_highlight_pane_cp020

0xa884,	// (0x0004f657) bg_cale_heading_pane_g1

0x3d98,	// (0x00048b6b) bg_cale_heading_pane_g2

0x3da0,	// (0x00048b73) bg_cale_heading_pane_g3

0x3da8,	// (0x00048b7b) bg_cale_heading_pane_g4

0x3db2,	// (0x00048b85) bg_cale_heading_pane_g5

0x3dbc,	// (0x00048b8f) bg_cale_heading_pane_g6

0x3dc4,	// (0x00048b97) bg_cale_heading_pane_g7

0x3dcc,	// (0x00048b9f) bg_cale_heading_pane_g8

0x3dd6,	// (0x00048ba9) bg_cale_heading_pane_g9

0x0008,

0xf2ee,	// (0x000540c1) bg_cale_heading_pane_g

0xa884,	// (0x0004f657) bg_cale_side_pane_g1

0x3de0,	// (0x00048bb3) bg_cale_side_pane_g2

0x3de8,	// (0x00048bbb) bg_cale_side_pane_g3

0x3df0,	// (0x00048bc3) bg_cale_side_pane_g4

0x3df8,	// (0x00048bcb) bg_cale_side_pane_g5

0x3e00,	// (0x00048bd3) bg_cale_side_pane_g6

0x3e08,	// (0x00048bdb) bg_cale_side_pane_g7

0x3e10,	// (0x00048be3) bg_cale_side_pane_g8

0x3e18,	// (0x00048beb) bg_cale_side_pane_g9

0x0008,

0xf301,	// (0x000540d4) bg_cale_side_pane_g

0x3e20,	// (0x00048bf3) popup_call_status_window_ParamLimits

0x3e20,	// (0x00048bf3) popup_call_status_window

0xa88c,	// (0x0004f65f) stacon_top_pane

0xa894,	// (0x0004f667) status_pane_ParamLimits

0xa894,	// (0x0004f667) status_pane

0xa8a9,	// (0x0004f67c) status_small_pane

0xa8b1,	// (0x0004f684) control_pane

0x1929,	// (0x000466fc) stacon_bottom_pane

0xa8b9,	// (0x0004f68c) list_single_mce_smart_pane_t1_ParamLimits

0xa8b9,	// (0x0004f68c) list_single_mce_smart_pane_t1

0xa8cc,	// (0x0004f69f) list_single_mce_smart_pane_t2_ParamLimits

0xa8cc,	// (0x0004f69f) list_single_mce_smart_pane_t2

0x0001,

0xf314,	// (0x000540e7) list_single_mce_smart_pane_t_ParamLimits

0xf314,	// (0x000540e7) list_single_mce_smart_pane_t

0x3e67,	// (0x00048c3a) compass_pane

0x3e70,	// (0x00048c43) main_location2_pane_t1

0x3e82,	// (0x00048c55) main_location2_pane_t2

0x3e94,	// (0x00048c67) main_location2_pane_t3

0x0003,

0xf319,	// (0x000540ec) main_location2_pane_t

0xa8eb,	// (0x0004f6be) compass_pane_g1_ParamLimits

0xa8eb,	// (0x0004f6be) compass_pane_g1

0x3ed8,	// (0x00048cab) compass_pane_t1

0x3ee7,	// (0x00048cba) compass_pane_t2

0x0005,

0xf322,	// (0x000540f5) compass_pane_t

0x3f2e,	// (0x00048d01) text_secondary_cp61

0xa969,	// (0x0004f73c) navi_pane_cams_g5

0xa9e5,	// (0x0004f7b8) navi_pane_im_t1

0xa9f3,	// (0x0004f7c6) navi_pane_mp_g1_ParamLimits

0xa9f3,	// (0x0004f7c6) navi_pane_mp_g1

0xaa07,	// (0x0004f7da) navi_pane_mp_g2_ParamLimits

0xaa07,	// (0x0004f7da) navi_pane_mp_g2

0xaa13,	// (0x0004f7e6) navi_pane_mp_g3_ParamLimits

0xaa13,	// (0x0004f7e6) navi_pane_mp_g3

0x0002,

0xf336,	// (0x00054109) navi_pane_mp_g_ParamLimits

0xf336,	// (0x00054109) navi_pane_mp_g

0xaa1f,	// (0x0004f7f2) navi_pane_mp_t1

0xaa2d,	// (0x0004f800) navi_pane_mp_t2

0x0002,

0xf33d,	// (0x00054110) navi_pane_mp_t

0xaa98,	// (0x0004f86b) navi_pane_vt_g1

0xaa1f,	// (0x0004f7f2) navi_pane_vt_t1

0xaaa0,	// (0x0004f873) navi_slider_pane

0x2610,	// (0x000473e3) zooming_pane

0xaab0,	// (0x0004f883) navi_slider_pane_g1

0xaab9,	// (0x0004f88c) navi_slider_pane_g2

0x0006,

0xf344,	// (0x00054117) navi_slider_pane_g

0xaae6,	// (0x0004f8b9) aid_levels_zoom

0xaaee,	// (0x0004f8c1) zooming_pane_g1

0xaaf6,	// (0x0004f8c9) zooming_pane_g2

0xaaf6,	// (0x0004f8c9) zooming_pane_g3

0x0002,

0xf353,	// (0x00054126) zooming_pane_g

0xaafe,	// (0x0004f8d1) level_10_zoom

0xab07,	// (0x0004f8da) level_11_zoom

0xab10,	// (0x0004f8e3) level_1_zoom

0xab19,	// (0x0004f8ec) level_2_zoom

0xab22,	// (0x0004f8f5) level_3_zoom

0xab2b,	// (0x0004f8fe) level_4_zoom

0xab34,	// (0x0004f907) level_5_zoom

0xab3d,	// (0x0004f910) level_6_zoom

0xab46,	// (0x0004f919) level_7_zoom

0xab4f,	// (0x0004f922) level_8_zoom

0xab58,	// (0x0004f92b) level_9_zoom

0xab69,	// (0x0004f93c) popup_phob_thumbnail_window_g1

0xab71,	// (0x0004f944) popup_phob_thumbnail_window_g2

0x0001,

0xf35a,	// (0x0005412d) popup_phob_thumbnail_window_g

0x489a,	// (0x0004966d) level_1_location

0x48a2,	// (0x00049675) level_2_location

0x48aa,	// (0x0004967d) level_3_location

0x48b2,	// (0x00049685) level_4_location

0x2610,	// (0x000473e3) level_5_location

0x3f7f,	// (0x00048d52) mce_icon_pane_g1

0x3f89,	// (0x00048d5c) mce_icon_pane_g2

0x0001,

0xf35f,	// (0x00054132) mce_icon_pane_g

0xab79,	// (0x0004f94c) main_mup_pane_g1_ParamLimits

0xab79,	// (0x0004f94c) main_mup_pane_g1

0xab79,	// (0x0004f94c) main_mup_pane_g2_ParamLimits

0xab79,	// (0x0004f94c) main_mup_pane_g2

0xab79,	// (0x0004f94c) main_mup_pane_g3_ParamLimits

0xab79,	// (0x0004f94c) main_mup_pane_g3

0xab79,	// (0x0004f94c) main_mup_pane_g4_ParamLimits

0xab79,	// (0x0004f94c) main_mup_pane_g4

0xab79,	// (0x0004f94c) main_mup_pane_g5_ParamLimits

0xab79,	// (0x0004f94c) main_mup_pane_g5

0xab79,	// (0x0004f94c) main_mup_pane_g6_ParamLimits

0xab79,	// (0x0004f94c) main_mup_pane_g6

0xab79,	// (0x0004f94c) main_mup_pane_g7_ParamLimits

0xab79,	// (0x0004f94c) main_mup_pane_g7

0xab79,	// (0x0004f94c) main_mup_pane_g8_ParamLimits

0xab79,	// (0x0004f94c) main_mup_pane_g8

0xab79,	// (0x0004f94c) main_mup_pane_g9_ParamLimits

0xab79,	// (0x0004f94c) main_mup_pane_g9

0xab79,	// (0x0004f94c) main_mup_pane_g10_ParamLimits

0xab79,	// (0x0004f94c) main_mup_pane_g10

0xab79,	// (0x0004f94c) main_mup_pane_g11_ParamLimits

0xab79,	// (0x0004f94c) main_mup_pane_g11

0x1bff,	// (0x000469d2) main_mup_pane_g12_ParamLimits

0x1bff,	// (0x000469d2) main_mup_pane_g12

0xab79,	// (0x0004f94c) main_mup_pane_g13_ParamLimits

0xab79,	// (0x0004f94c) main_mup_pane_g13

0x000c,

0xf364,	// (0x00054137) main_mup_pane_g_ParamLimits

0xf364,	// (0x00054137) main_mup_pane_g

0xab87,	// (0x0004f95a) main_mup_pane_t1_ParamLimits

0xab87,	// (0x0004f95a) main_mup_pane_t1

0xab87,	// (0x0004f95a) main_mup_pane_t2_ParamLimits

0xab87,	// (0x0004f95a) main_mup_pane_t2

0xab87,	// (0x0004f95a) main_mup_pane_t3_ParamLimits

0xab87,	// (0x0004f95a) main_mup_pane_t3

0x1cdb,	// (0x00046aae) main_mup_pane_t4_ParamLimits

0x1cdb,	// (0x00046aae) main_mup_pane_t4

0x1cdb,	// (0x00046aae) main_mup_pane_t5_ParamLimits

0x1cdb,	// (0x00046aae) main_mup_pane_t5

0x1cef,	// (0x00046ac2) main_mup_pane_t6_ParamLimits

0x1cef,	// (0x00046ac2) main_mup_pane_t6

0x0005,

0xf37f,	// (0x00054152) main_mup_pane_t_ParamLimits

0xf37f,	// (0x00054152) main_mup_pane_t

0x1bf1,	// (0x000469c4) mup_progress_pane_ParamLimits

0x1bf1,	// (0x000469c4) mup_progress_pane

0xab9b,	// (0x0004f96e) mup_visualizer_pane_ParamLimits

0xab9b,	// (0x0004f96e) mup_visualizer_pane

0xab9b,	// (0x0004f96e) mup_volume_pane_ParamLimits

0xab9b,	// (0x0004f96e) mup_volume_pane

0x1c0d,	// (0x000469e0) mup_visualizer_pane_g1_ParamLimits

0x1c0d,	// (0x000469e0) mup_visualizer_pane_g1

0xaba9,	// (0x0004f97c) mup_visualizer_pane_g2_ParamLimits

0xaba9,	// (0x0004f97c) mup_visualizer_pane_g2

0x1bff,	// (0x000469d2) mup_visualizer_pane_g3_ParamLimits

0x1bff,	// (0x000469d2) mup_visualizer_pane_g3

0x0002,

0xf38c,	// (0x0005415f) mup_visualizer_pane_g_ParamLimits

0xf38c,	// (0x0005415f) mup_visualizer_pane_g

0x1cd1,	// (0x00046aa4) mup_volume_pane_g1

0x1cd1,	// (0x00046aa4) mup_volume_pane_g2

0x0001,

0xf0af,	// (0x00053e82) mup_volume_pane_g

0x1cd1,	// (0x00046aa4) mup_progress_pane_g1

0x1cd1,	// (0x00046aa4) mup_progress_pane_g2

0x1cd1,	// (0x00046aa4) mup_progress_pane_g3

0x0002,

0xf393,	// (0x00054166) mup_progress_pane_g

0x1929,	// (0x000466fc) bg_popup_window_pane_cp05

0xabb7,	// (0x0004f98a) heading_pane_cp02_ParamLimits

0xabb7,	// (0x0004f98a) heading_pane_cp02

0xabd1,	// (0x0004f9a4) list_popup_blid_pane

0xabd9,	// (0x0004f9ac) list_blid_sat_info_pane_ParamLimits

0xabd9,	// (0x0004f9ac) list_blid_sat_info_pane

0xabec,	// (0x0004f9bf) list_blid_sat_info_pane_g1

0xabf4,	// (0x0004f9c7) list_blid_sat_info_pane_t1

0x4089,	// (0x00048e5c) mup_equalizer_pane_ParamLimits

0x4089,	// (0x00048e5c) mup_equalizer_pane

0x40a2,	// (0x00048e75) mup_equalizer_pane_cp1_ParamLimits

0x40a2,	// (0x00048e75) mup_equalizer_pane_cp1

0x40bf,	// (0x00048e92) mup_equalizer_pane_cp2_ParamLimits

0x40bf,	// (0x00048e92) mup_equalizer_pane_cp2

0x40dc,	// (0x00048eaf) mup_equalizer_pane_cp3_ParamLimits

0x40dc,	// (0x00048eaf) mup_equalizer_pane_cp3

0x40fd,	// (0x00048ed0) mup_equalizer_pane_cp4_ParamLimits

0x40fd,	// (0x00048ed0) mup_equalizer_pane_cp4

0x411e,	// (0x00048ef1) mup_equalizer_pane_cp5

0x4132,	// (0x00048f05) mup_equalizer_pane_cp6

0x4146,	// (0x00048f19) mup_equalizer_pane_cp7

0xbdac,	// (0x00050b7f) bg_popup_call_poc_act_pane_g9

0xbdb4,	// (0x00050b87) bg_popup_call_poc_act_pane_g10

0xbdbc,	// (0x00050b8f) bg_popup_call_poc_act_pane_g11

0x000a,

0x1b84,	// (0x00046957) mup_scale_pane

0x1b9c,	// (0x0004696f) mup_scale_pane_g1

0xac02,	// (0x0004f9d5) mup_scale_pane_g2

0x0006,

0xf3af,	// (0x00054182) mup_scale_pane_g

0xac26,	// (0x0004f9f9) msg_data_pane

0xac2e,	// (0x0004fa01) scroll_pane_cp017

0x0a37,	// (0x0004580a) bg_list_pane_cp04_ParamLimits

0x0a37,	// (0x0004580a) bg_list_pane_cp04

0xac3e,	// (0x0004fa11) msg_data_pane_g1

0x416c,	// (0x00048f3f) msg_data_pane_g2

0x4174,	// (0x00048f47) msg_data_pane_g3

0x417c,	// (0x00048f4f) msg_data_pane_g4

0x4184,	// (0x00048f57) msg_data_pane_g5

0x418c,	// (0x00048f5f) msg_data_pane_g6

0x4194,	// (0x00048f67) msg_data_pane_g7

0x0006,

0xf3be,	// (0x00054191) msg_data_pane_g

0x0a4f,	// (0x00045822) msg_text_pane_ParamLimits

0x0a4f,	// (0x00045822) msg_text_pane

0x419c,	// (0x00048f6f) qrid_highlight_pane_cp011_ParamLimits

0x419c,	// (0x00048f6f) qrid_highlight_pane_cp011

0x1929,	// (0x000466fc) msg_body_pane

0x1b84,	// (0x00046957) msg_header_pane

0xac5a,	// (0x0004fa2d) input_focus_pane_cp07

0xac7b,	// (0x0004fa4e) msg_header_pane_t1_ParamLimits

0xac7b,	// (0x0004fa4e) msg_header_pane_t1

0xac97,	// (0x0004fa6a) msg_header_pane_t2_ParamLimits

0xac97,	// (0x0004fa6a) msg_header_pane_t2

0x0001,

0xf3d2,	// (0x000541a5) msg_header_pane_t_ParamLimits

0xf3d2,	// (0x000541a5) msg_header_pane_t

0xacb7,	// (0x0004fa8a) msg_body_pane_g1

0xacbf,	// (0x0004fa92) msg_body_pane_t1_ParamLimits

0xacbf,	// (0x0004fa92) msg_body_pane_t1

0xacf0,	// (0x0004fac3) msg_body_pane_t2_ParamLimits

0xacf0,	// (0x0004fac3) msg_body_pane_t2

0xad02,	// (0x0004fad5) msg_body_pane_t3_ParamLimits

0xad02,	// (0x0004fad5) msg_body_pane_t3

0x0002,

0xf3d7,	// (0x000541aa) msg_body_pane_t_ParamLimits

0xf3d7,	// (0x000541aa) msg_body_pane_t

0x41ec,	// (0x00048fbf) main_viewer_pane_g1_ParamLimits

0x41ec,	// (0x00048fbf) main_viewer_pane_g1

0x41fa,	// (0x00048fcd) main_viewer_pane_g2_ParamLimits

0x41fa,	// (0x00048fcd) main_viewer_pane_g2

0x4208,	// (0x00048fdb) main_viewer_pane_g3_ParamLimits

0x4208,	// (0x00048fdb) main_viewer_pane_g3

0x4217,	// (0x00048fea) main_viewer_pane_g4_ParamLimits

0x4217,	// (0x00048fea) main_viewer_pane_g4

0xad2c,	// (0x0004faff) main_viewer_pane_g5_ParamLimits

0xad2c,	// (0x0004faff) main_viewer_pane_g5

0xad2c,	// (0x0004faff) main_viewer_pane_g7_ParamLimits

0xad2c,	// (0x0004faff) main_viewer_pane_g7

0xad3e,	// (0x0004fb11) main_viewer_pane_g8_ParamLimits

0xad3e,	// (0x0004fb11) main_viewer_pane_g8

0x0007,

0xf3e7,	// (0x000541ba) main_viewer_pane_g_ParamLimits

0xf3e7,	// (0x000541ba) main_viewer_pane_g

0xad56,	// (0x0004fb29) viewer_content_pane_ParamLimits

0xad56,	// (0x0004fb29) viewer_content_pane

0x4253,	// (0x00049026) main_postcard_pane_g1_ParamLimits

0x4253,	// (0x00049026) main_postcard_pane_g1

0x4269,	// (0x0004903c) main_postcard_pane_g2_ParamLimits

0x4269,	// (0x0004903c) main_postcard_pane_g2

0x427f,	// (0x00049052) main_postcard_pane_g3_ParamLimits

0x427f,	// (0x00049052) main_postcard_pane_g3

0x0005,

0xf3f8,	// (0x000541cb) main_postcard_pane_g_ParamLimits

0xf3f8,	// (0x000541cb) main_postcard_pane_g

0x4296,	// (0x00049069) main_postcard_pane_g4

0xbf84,	// (0x00050d57) smil_status_volume_pane_g2

0x42d9,	// (0x000490ac) postcard_pane_ParamLimits

0x42d9,	// (0x000490ac) postcard_pane

0xad64,	// (0x0004fb37) postcard_pane_g1_ParamLimits

0xad64,	// (0x0004fb37) postcard_pane_g1

0x431b,	// (0x000490ee) postcard_pane_g2_ParamLimits

0x431b,	// (0x000490ee) postcard_pane_g2

0x4327,	// (0x000490fa) postcard_pane_g3_ParamLimits

0x4327,	// (0x000490fa) postcard_pane_g3

0xad72,	// (0x0004fb45) postcard_pane_g4_ParamLimits

0xad72,	// (0x0004fb45) postcard_pane_g4

0x4333,	// (0x00049106) postcard_pane_g5_ParamLimits

0x4333,	// (0x00049106) postcard_pane_g5

0x4348,	// (0x0004911b) postcard_pane_g6_ParamLimits

0x4348,	// (0x0004911b) postcard_pane_g6

0xad64,	// (0x0004fb37) postcard_pane_g7_ParamLimits

0xad64,	// (0x0004fb37) postcard_pane_g7

0x0006,

0xf405,	// (0x000541d8) postcard_pane_g_ParamLimits

0xf405,	// (0x000541d8) postcard_pane_g

0x435c,	// (0x0004912f) main_mp2_pane_g1_ParamLimits

0x435c,	// (0x0004912f) main_mp2_pane_g1

0x4368,	// (0x0004913b) main_mp2_pane_g2_ParamLimits

0x4368,	// (0x0004913b) main_mp2_pane_g2

0x4374,	// (0x00049147) main_mp2_pane_g3_ParamLimits

0x4374,	// (0x00049147) main_mp2_pane_g3

0x0002,

0xf414,	// (0x000541e7) main_mp2_pane_g_ParamLimits

0xf414,	// (0x000541e7) main_mp2_pane_g

0x4380,	// (0x00049153) main_mp2_pane_t1_ParamLimits

0x4380,	// (0x00049153) main_mp2_pane_t1

0x4395,	// (0x00049168) main_mp2_pane_t2_ParamLimits

0x4395,	// (0x00049168) main_mp2_pane_t2

0x43a7,	// (0x0004917a) main_mp2_pane_t3_ParamLimits

0x43a7,	// (0x0004917a) main_mp2_pane_t3

0x0002,

0xf41b,	// (0x000541ee) main_mp2_pane_t_ParamLimits

0xf41b,	// (0x000541ee) main_mp2_pane_t

0x1451,	// (0x00046224) pec_content_pane_ParamLimits

0x1451,	// (0x00046224) pec_content_pane

0x128d,	// (0x00046060) scroll_pane_cp015

0xab9b,	// (0x0004f96e) pec_attribute_pane_ParamLimits

0xab9b,	// (0x0004f96e) pec_attribute_pane

0x1bff,	// (0x000469d2) pec_content_pane_g1_ParamLimits

0x1bff,	// (0x000469d2) pec_content_pane_g1

0xad80,	// (0x0004fb53) pec_content_pane_t1_ParamLimits

0xad80,	// (0x0004fb53) pec_content_pane_t1

0xad94,	// (0x0004fb67) pec_content_pane_t2_ParamLimits

0xad94,	// (0x0004fb67) pec_content_pane_t2

0x0001,

0xf422,	// (0x000541f5) pec_content_pane_t_ParamLimits

0xf422,	// (0x000541f5) pec_content_pane_t

0x1bf1,	// (0x000469c4) list_single_graphic_pane_cp01_ParamLimits

0x1bf1,	// (0x000469c4) list_single_graphic_pane_cp01

0x1b84,	// (0x00046957) bg_popup_sub_pane_cp04

0xada8,	// (0x0004fb7b) popup_mup_playback_window_g1

0xadb4,	// (0x0004fb87) popup_mup_playback_window_t1

0xadc9,	// (0x0004fb9c) popup_mup_playback_window_t2

0x0001,

0xf427,	// (0x000541fa) popup_mup_playback_window_t

0xae00,	// (0x0004fbd3) main_image_pane_g1_ParamLimits

0xae00,	// (0x0004fbd3) main_image_pane_g1

0xae43,	// (0x0004fc16) scroll_pane_cp018_ParamLimits

0xae43,	// (0x0004fc16) scroll_pane_cp018

0xae5b,	// (0x0004fc2e) scroll_pane_cp016_ParamLimits

0xae5b,	// (0x0004fc2e) scroll_pane_cp016

0x4471,	// (0x00049244) smil2_image_pane_ParamLimits

0x4471,	// (0x00049244) smil2_image_pane

0x44a1,	// (0x00049274) smil2_root_pane_ParamLimits

0x44a1,	// (0x00049274) smil2_root_pane

0x44d9,	// (0x000492ac) smil2_text_pane_ParamLimits

0x44d9,	// (0x000492ac) smil2_text_pane

0x128d,	// (0x00046060) bg_list_pane_cp06

0x128d,	// (0x00046060) grid_radio_pane

0x1929,	// (0x000466fc) bg_popup_window_pane_cp06

0x3bc4,	// (0x00048997) main_fmradio_pane_t1

0xbe04,	// (0x00050bd7) heading_pane_cp04

0x3bc4,	// (0x00048997) main_fmradio_pane_t2

0xbe0c,	// (0x00050bdf) popup_cale_lunar_info_window_g1

0x3bc4,	// (0x00048997) main_fmradio_pane_t3

0xbe14,	// (0x00050be7) popup_cale_lunar_info_window_g2

0x3bc4,	// (0x00048997) main_fmradio_pane_t4

0x0001,

0x3bc4,	// (0x00048997) main_fmradio_pane_t5

0x0004,

0xf50a,	// (0x000542dd) popup_cale_lunar_info_window_g

0xf287,	// (0x0005405a) main_fmradio_pane_t

0x128d,	// (0x00046060) wait_bar_pane_cp03

0x1bf1,	// (0x000469c4) cell_fmradio_pane_ParamLimits

0x1bf1,	// (0x000469c4) cell_fmradio_pane

0x1bff,	// (0x000469d2) cell_fmradio_pane_g1_ParamLimits

0x1bff,	// (0x000469d2) cell_fmradio_pane_g1

0x128d,	// (0x00046060) grid_highlight_pane_cp011

0xae8f,	// (0x0004fc62) poc_content_pane_ParamLimits

0xae8f,	// (0x0004fc62) poc_content_pane

0xaea1,	// (0x0004fc74) scroll_pane_cp019

0x4559,	// (0x0004932c) popup_call_poc_act_window_ParamLimits

0x4559,	// (0x0004932c) popup_call_poc_act_window

0x457d,	// (0x00049350) popup_call_poc_inact_window_ParamLimits

0x457d,	// (0x00049350) popup_call_poc_inact_window

0xf4d3,	// (0x000542a6) bg_popup_call_poc_act_pane_g

0xbdc4,	// (0x00050b97) bg_popup_call_poc_inact_pane_g1

0xbdcc,	// (0x00050b9f) bg_popup_call_poc_inact_pane_g2

0xaea9,	// (0x0004fc7c) popup_call_poc_act_window_g2

0xbdd4,	// (0x00050ba7) bg_popup_call_poc_inact_pane_g3

0xbd54,	// (0x00050b27) bg_popup_call_poc_inact_pane_g4

0xbddc,	// (0x00050baf) bg_popup_call_poc_inact_pane_g5

0xaeb1,	// (0x0004fc84) popup_call_poc_act_window_t1_ParamLimits

0xaeb1,	// (0x0004fc84) popup_call_poc_act_window_t1

0xaed9,	// (0x0004fcac) popup_call_poc_act_window_t2_ParamLimits

0xaed9,	// (0x0004fcac) popup_call_poc_act_window_t2

0xaf01,	// (0x0004fcd4) popup_call_poc_act_window_t3_ParamLimits

0xaf01,	// (0x0004fcd4) popup_call_poc_act_window_t3

0xaf29,	// (0x0004fcfc) popup_call_poc_act_window_t4_ParamLimits

0xaf29,	// (0x0004fcfc) popup_call_poc_act_window_t4

0x0003,

0xf43c,	// (0x0005420f) popup_call_poc_act_window_t_ParamLimits

0xf43c,	// (0x0005420f) popup_call_poc_act_window_t

0xbde4,	// (0x00050bb7) bg_popup_call_poc_inact_pane_g6

0xbdec,	// (0x00050bbf) bg_popup_call_poc_inact_pane_g7

0xbdf4,	// (0x00050bc7) bg_popup_call_poc_inact_pane_g8

0xaf3b,	// (0x0004fd0e) popup_call_poc_inact_window_g2

0xbdfc,	// (0x00050bcf) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf4ea,	// (0x000542bd) bg_popup_call_poc_inact_pane_g

0xaf43,	// (0x0004fd16) popup_call_poc_inact_window_t1_ParamLimits

0xaf43,	// (0x0004fd16) popup_call_poc_inact_window_t1

0xaf58,	// (0x0004fd2b) popup_call_poc_inact_window_t2_ParamLimits

0xaf58,	// (0x0004fd2b) popup_call_poc_inact_window_t2

0xaf6d,	// (0x0004fd40) popup_call_poc_inact_window_t3_ParamLimits

0xaf6d,	// (0x0004fd40) popup_call_poc_inact_window_t3

0x0002,

0xf445,	// (0x00054218) popup_call_poc_inact_window_t_ParamLimits

0xf445,	// (0x00054218) popup_call_poc_inact_window_t

0xbefc,	// (0x00050ccf) context_pane_ParamLimits

0x4d64,	// (0x00049b37) signal_pane_ParamLimits

0x2610,	// (0x000473e3) main_call2_pane

0xbed5,	// (0x00050ca8) popup_phob_thumbnail2_window_ParamLimits

0xbed5,	// (0x00050ca8) popup_phob_thumbnail2_window

0xad14,	// (0x0004fae7) aid_hotspot_pointer_arrow_pane

0xad1c,	// (0x0004faef) aid_hotspot_pointer_hand_pane

0x4864,	// (0x00049637) phob_pre_status_pane_g5

0x1451,	// (0x00046224) cams_zoom_pane_ParamLimits

0x1451,	// (0x00046224) image_vga_pane_ParamLimits

0x1bff,	// (0x000469d2) main_camera_pane_g1_ParamLimits

0x1bff,	// (0x000469d2) main_camera_pane_g2_ParamLimits

0x1bff,	// (0x000469d2) main_camera_pane_g3_ParamLimits

0x1bff,	// (0x000469d2) main_camera_pane_g4_ParamLimits

0x1bff,	// (0x000469d2) main_camera_pane_g5_ParamLimits

0x1bff,	// (0x000469d2) main_camera_pane_g6_ParamLimits

0x1bff,	// (0x000469d2) main_camera_pane_g7_ParamLimits

0xf180,	// (0x00053f53) main_camera_pane_g_ParamLimits

0x1cdb,	// (0x00046aae) main_camera_pane_t1_ParamLimits

0x1cdb,	// (0x00046aae) main_camera_pane_t2_ParamLimits

0xf191,	// (0x00053f64) main_camera_pane_t_ParamLimits

0x1b84,	// (0x00046957) bg_popup_preview_window_pane_cp01_ParamLimits

0x1b84,	// (0x00046957) bg_popup_preview_window_pane_cp01

0xaf82,	// (0x0004fd55) popup_phob_thumbnail2_window_g1_ParamLimits

0xaf82,	// (0x0004fd55) popup_phob_thumbnail2_window_g1

0x1929,	// (0x000466fc) call2_cli_visual_pane

0x45b1,	// (0x00049384) popup_call2_audio_conf_window_ParamLimits

0x45b1,	// (0x00049384) popup_call2_audio_conf_window

0x45d1,	// (0x000493a4) popup_call2_audio_first_window_ParamLimits

0x45d1,	// (0x000493a4) popup_call2_audio_first_window

0x4667,	// (0x0004943a) popup_call2_audio_in_window_ParamLimits

0x4667,	// (0x0004943a) popup_call2_audio_in_window

0x46af,	// (0x00049482) popup_call2_audio_out_window_ParamLimits

0x46af,	// (0x00049482) popup_call2_audio_out_window

0x4719,	// (0x000494ec) popup_call2_audio_second_window_ParamLimits

0x4719,	// (0x000494ec) popup_call2_audio_second_window

0x477f,	// (0x00049552) popup_call2_audio_wait_window_ParamLimits

0x477f,	// (0x00049552) popup_call2_audio_wait_window

0x1929,	// (0x000466fc) bg_popup_call2_act_pane_cp03

0x1b66,	// (0x00046939) list_conf_pane_cp

0xaf8e,	// (0x0004fd61) popup_call2_audio_conf_window_t1

0xaf9c,	// (0x0004fd6f) list_single_graphic_popup_conf2_pane_ParamLimits

0xaf9c,	// (0x0004fd6f) list_single_graphic_popup_conf2_pane

0xa7d7,	// (0x0004f5aa) list_highlight_pane_cp04

0xafaf,	// (0x0004fd82) list_single_graphic_popup_conf2_pane_g1

0xa7e8,	// (0x0004f5bb) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf44c,	// (0x0005421f) list_single_graphic_popup_conf2_pane_g

0xafb9,	// (0x0004fd8c) list_single_graphic_popup_conf2_pane_t1

0xafc7,	// (0x0004fd9a) bg_popup_call2_act_pane_cp01_ParamLimits

0xafc7,	// (0x0004fd9a) bg_popup_call2_act_pane_cp01

0xb051,	// (0x0004fe24) call_type_pane_cp05_ParamLimits

0xb051,	// (0x0004fe24) call_type_pane_cp05

0xb0a5,	// (0x0004fe78) popup_call2_audio_second_window_g1_ParamLimits

0xb0a5,	// (0x0004fe78) popup_call2_audio_second_window_g1

0xb0f9,	// (0x0004fecc) popup_call2_audio_second_window_g2_ParamLimits

0xb0f9,	// (0x0004fecc) popup_call2_audio_second_window_g2

0x0002,

0xf451,	// (0x00054224) popup_call2_audio_second_window_g_ParamLimits

0xf451,	// (0x00054224) popup_call2_audio_second_window_g

0xb15e,	// (0x0004ff31) popup_call2_audio_second_window_t1_ParamLimits

0xb15e,	// (0x0004ff31) popup_call2_audio_second_window_t1

0xb219,	// (0x0004ffec) popup_call2_audio_second_window_t2_ParamLimits

0xb219,	// (0x0004ffec) popup_call2_audio_second_window_t2

0xb26c,	// (0x0005003f) popup_call2_audio_second_window_t3_ParamLimits

0xb26c,	// (0x0005003f) popup_call2_audio_second_window_t3

0x0003,

0xf458,	// (0x0005422b) popup_call2_audio_second_window_t_ParamLimits

0xf458,	// (0x0005422b) popup_call2_audio_second_window_t

0x1929,	// (0x000466fc) bg_popup_call2_in_pane_cp02

0x1933,	// (0x00046706) call_type_pane_cp04

0x47b9,	// (0x0004958c) popup_call2_audio_wait_window_g1

0x47c1,	// (0x00049594) popup_call2_audio_wait_window_g2

0x0001,

0xf461,	// (0x00054234) popup_call2_audio_wait_window_g

0x194b,	// (0x0004671e) popup_call2_audio_wait_window_t3

0xb35f,	// (0x00050132) bg_popup_call2_act_pane_ParamLimits

0xb35f,	// (0x00050132) bg_popup_call2_act_pane

0xb41f,	// (0x000501f2) call_type_pane_cp03_ParamLimits

0xb41f,	// (0x000501f2) call_type_pane_cp03

0xb483,	// (0x00050256) popup_call2_audio_first_window_g1_ParamLimits

0xb483,	// (0x00050256) popup_call2_audio_first_window_g1

0xb4f3,	// (0x000502c6) popup_call2_audio_first_window_g2_ParamLimits

0xb4f3,	// (0x000502c6) popup_call2_audio_first_window_g2

0xb557,	// (0x0005032a) popup_call2_audio_first_window_g3_ParamLimits

0xb557,	// (0x0005032a) popup_call2_audio_first_window_g3

0x0004,

0xf466,	// (0x00054239) popup_call2_audio_first_window_g_ParamLimits

0xf466,	// (0x00054239) popup_call2_audio_first_window_g

0xb5df,	// (0x000503b2) popup_call2_audio_first_window_t1_ParamLimits

0xb5df,	// (0x000503b2) popup_call2_audio_first_window_t1

0xb6e2,	// (0x000504b5) popup_call2_audio_first_window_t4_ParamLimits

0xb6e2,	// (0x000504b5) popup_call2_audio_first_window_t4

0xb7c5,	// (0x00050598) popup_call2_audio_first_window_t5_ParamLimits

0xb7c5,	// (0x00050598) popup_call2_audio_first_window_t5

0x0003,

0xf471,	// (0x00054244) popup_call2_audio_first_window_t_ParamLimits

0xf471,	// (0x00054244) popup_call2_audio_first_window_t

0x1b7c,	// (0x0004694f) bg_popup_call2_act_pane_g1

0xbe1c,	// (0x00050bef) popup_cale_lunar_info_window_t1

0xbe2a,	// (0x00050bfd) popup_cale_lunar_info_window_t2

0xbe38,	// (0x00050c0b) popup_cale_lunar_info_window_t3

0x1929,	// (0x000466fc) bg_popup_call2_bubble_pane

0xb8c6,	// (0x00050699) bg_popup_call2_in_pane_cp01_ParamLimits

0xb8c6,	// (0x00050699) bg_popup_call2_in_pane_cp01

0x15e1,	// (0x000463b4) call_type_pane_cp02

0x47c9,	// (0x0004959c) popup_call2_audio_out_window_g1_ParamLimits

0x47c9,	// (0x0004959c) popup_call2_audio_out_window_g1

0xb90e,	// (0x000506e1) popup_call2_audio_out_window_g2_ParamLimits

0xb90e,	// (0x000506e1) popup_call2_audio_out_window_g2

0x47f5,	// (0x000495c8) popup_call2_audio_out_window_g3_ParamLimits

0x47f5,	// (0x000495c8) popup_call2_audio_out_window_g3

0x0003,

0xf47a,	// (0x0005424d) popup_call2_audio_out_window_g_ParamLimits

0xf47a,	// (0x0005424d) popup_call2_audio_out_window_g

0xb945,	// (0x00050718) popup_call2_audio_out_window_t1_ParamLimits

0xb945,	// (0x00050718) popup_call2_audio_out_window_t1

0xb9a4,	// (0x00050777) popup_call2_audio_out_window_t2_ParamLimits

0xb9a4,	// (0x00050777) popup_call2_audio_out_window_t2

0xb9f8,	// (0x000507cb) popup_call2_audio_out_window_t3_ParamLimits

0xb9f8,	// (0x000507cb) popup_call2_audio_out_window_t3

0xba0e,	// (0x000507e1) popup_call2_audio_out_window_t4_ParamLimits

0xba0e,	// (0x000507e1) popup_call2_audio_out_window_t4

0xba24,	// (0x000507f7) popup_call2_audio_out_window_t5_ParamLimits

0xba24,	// (0x000507f7) popup_call2_audio_out_window_t5

0x0005,

0xf483,	// (0x00054256) popup_call2_audio_out_window_t_ParamLimits

0xf483,	// (0x00054256) popup_call2_audio_out_window_t

0xba88,	// (0x0005085b) bg_popup_call2_in_pane_ParamLimits

0xba88,	// (0x0005085b) bg_popup_call2_in_pane

0xbae4,	// (0x000508b7) popup_call2_audio_in_window_g1_ParamLimits

0xbae4,	// (0x000508b7) popup_call2_audio_in_window_g1

0xbb1c,	// (0x000508ef) popup_call2_audio_in_window_g2_ParamLimits

0xbb1c,	// (0x000508ef) popup_call2_audio_in_window_g2

0xbb54,	// (0x00050927) popup_call2_audio_in_window_g3_ParamLimits

0xbb54,	// (0x00050927) popup_call2_audio_in_window_g3

0x0003,

0xf490,	// (0x00054263) popup_call2_audio_in_window_g_ParamLimits

0xf490,	// (0x00054263) popup_call2_audio_in_window_g

0xbbac,	// (0x0005097f) popup_call2_audio_in_window_t1_ParamLimits

0xbbac,	// (0x0005097f) popup_call2_audio_in_window_t1

0xbc2c,	// (0x000509ff) popup_call2_audio_in_window_t2_ParamLimits

0xbc2c,	// (0x000509ff) popup_call2_audio_in_window_t2

0xbcac,	// (0x00050a7f) popup_call2_audio_in_window_t3_ParamLimits

0xbcac,	// (0x00050a7f) popup_call2_audio_in_window_t3

0xbcc6,	// (0x00050a99) popup_call2_audio_in_window_t4_ParamLimits

0xbcc6,	// (0x00050a99) popup_call2_audio_in_window_t4

0xbcd8,	// (0x00050aab) popup_call2_audio_in_window_t5_ParamLimits

0xbcd8,	// (0x00050aab) popup_call2_audio_in_window_t5

0xbcea,	// (0x00050abd) popup_call2_audio_in_window_t6_ParamLimits

0xbcea,	// (0x00050abd) popup_call2_audio_in_window_t6

0x0005,

0xf499,	// (0x0005426c) popup_call2_audio_in_window_t_ParamLimits

0xf499,	// (0x0005426c) popup_call2_audio_in_window_t

0x1b7c,	// (0x0004694f) bg_popup_call2_in_pane_g1

0xbe46,	// (0x00050c19) popup_cale_lunar_info_window_t4

0x0003,

0xf50f,	// (0x000542e2) popup_cale_lunar_info_window_t

0x1b84,	// (0x00046957) bg_popup_call2_rect_pane_ParamLimits

0x1b84,	// (0x00046957) bg_popup_call2_rect_pane

0x1929,	// (0x000466fc) call2_cli_visual_graphic_pane

0x1929,	// (0x000466fc) call2_cli_visual_text_pane

0xbf97,	// (0x00050d6a) smil_status_volume_pane_g3

0x0002,

0x1b9c,	// (0x0004696f) call2_cli_visual_graphic_pane_g1

0x1b9c,	// (0x0004696f) call2_cli_visual_graphic_pane_g2

0x1b9c,	// (0x0004696f) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4a6,	// (0x00054279) call2_cli_visual_graphic_pane_g

0xbcfc,	// (0x00050acf) bg_popup_call2_rect_pane_g1

0x1f9f,	// (0x00046d72) bg_popup_call2_rect_pane_g2

0xbd04,	// (0x00050ad7) bg_popup_call2_rect_pane_g3

0xbd0c,	// (0x00050adf) bg_popup_call2_rect_pane_g4

0xbd14,	// (0x00050ae7) bg_popup_call2_rect_pane_g5

0xbd1c,	// (0x00050aef) bg_popup_call2_rect_pane_g6

0xbd24,	// (0x00050af7) bg_popup_call2_rect_pane_g7

0xbd2c,	// (0x00050aff) bg_popup_call2_rect_pane_g8

0xbd34,	// (0x00050b07) bg_popup_call2_rect_pane_g9

0x0008,

0xf4ad,	// (0x00054280) bg_popup_call2_rect_pane_g

0xbd3c,	// (0x00050b0f) bg_popup_call2_bubble_pane_g1

0xbd44,	// (0x00050b17) bg_popup_call2_bubble_pane_g2

0xbd4c,	// (0x00050b1f) bg_popup_call2_bubble_pane_g3

0xbd54,	// (0x00050b27) bg_popup_call2_bubble_pane_g4

0xbd5c,	// (0x00050b2f) bg_popup_call2_bubble_pane_g5

0xbd64,	// (0x00050b37) bg_popup_call2_bubble_pane_g6

0xbd6c,	// (0x00050b3f) bg_popup_call2_bubble_pane_g7

0xbd74,	// (0x00050b47) bg_popup_call2_bubble_pane_g8

0xbd7c,	// (0x00050b4f) bg_popup_call2_bubble_pane_g9

0x0008,

0xf4c0,	// (0x00054293) bg_popup_call2_bubble_pane_g

0x2023,	// (0x00046df6) aid_cale_week_size_cell_pane

0x2679,	// (0x0004744c) aid_cams_cif_uncrop_pane_ParamLimits

0x2679,	// (0x0004744c) aid_cams_cif_uncrop_pane

0x1451,	// (0x00046224) aid_cams_size_cell_ParamLimits

0x1451,	// (0x00046224) aid_cams_size_cell

0x1451,	// (0x00046224) grid_cams_pane_ParamLimits

0x1451,	// (0x00046224) linegrid_cams_pane_ParamLimits

0x28f0,	// (0x000476c3) call_video_pane_t1

0x290e,	// (0x000476e1) call_video_pane_t2

0x0001,

0xf1dd,	// (0x00053fb0) call_video_pane_t

0x2f98,	// (0x00047d6b) aid_cale_month_size_cell_pane_ParamLimits

0x2f98,	// (0x00047d6b) aid_cale_month_size_cell_pane

0xf553,	// (0x00054326) smil_status_volume_pane_g

0xbfa4,	// (0x00050d77) volume_smil_pane_ParamLimits

0xa53a,	// (0x0004f30d) aid_popup2_width_pane

0x1ef7,	// (0x00046cca) cell_qdial_pane_g4_ParamLimits

0x1ef7,	// (0x00046cca) cell_qdial_pane_g4

0x3eb8,	// (0x00048c8b) aid_blid_cardinal_pane_ParamLimits

0x3ec4,	// (0x00048c97) aid_blid_destination_pane_ParamLimits

0x3ec4,	// (0x00048c97) aid_blid_destination_pane

0x1b84,	// (0x00046957) bg_popup_call_poc_act_pane_ParamLimits

0x1b84,	// (0x00046957) bg_popup_call_poc_act_pane

0x1b84,	// (0x00046957) bg_popup_call_poc_inact_pane_ParamLimits

0x1b84,	// (0x00046957) bg_popup_call_poc_inact_pane

0xbd84,	// (0x00050b57) bg_popup_call_poc_act_pane_g1

0xbd8c,	// (0x00050b5f) bg_popup_call_poc_act_pane_g2

0xbd94,	// (0x00050b67) bg_popup_call_poc_act_pane_g3

0xbd54,	// (0x00050b27) bg_popup_call_poc_act_pane_g4

0xbd5c,	// (0x00050b2f) bg_popup_call_poc_act_pane_g5

0xbd9c,	// (0x00050b6f) bg_popup_call_poc_act_pane_g6

0xbd6c,	// (0x00050b3f) bg_popup_call_poc_act_pane_g7

0xbda4,	// (0x00050b77) bg_popup_call_poc_act_pane_g8

0x1929,	// (0x000466fc) main_usb_pane

0xbeb0,	// (0x00050c83) popup_cale_lunar_info_window

0x2c3a,	// (0x00047a0d) im_reading_pane_t1_ParamLimits

0x2c74,	// (0x00047a47) list_im_pane_ParamLimits

0x2c85,	// (0x00047a58) scroll_pane_cp07_ParamLimits

0x1929,	// (0x000466fc) grid_highlight_pane_cp012

0x1b84,	// (0x00046957) mup_scale_pane_ParamLimits

0x1bff,	// (0x000469d2) main_usb_pane_g1_ParamLimits

0x1bff,	// (0x000469d2) main_usb_pane_g1

0x1bff,	// (0x000469d2) main_usb_pane_g2_ParamLimits

0x1bff,	// (0x000469d2) main_usb_pane_g2

0x0001,

0xf1bc,	// (0x00053f8f) main_usb_pane_g_ParamLimits

0xf1bc,	// (0x00053f8f) main_usb_pane_g

0x1cdb,	// (0x00046aae) main_usb_pane_t1_ParamLimits

0x1cdb,	// (0x00046aae) main_usb_pane_t1

0x1cdb,	// (0x00046aae) main_usb_pane_t2_ParamLimits

0x1cdb,	// (0x00046aae) main_usb_pane_t2

0x1cdb,	// (0x00046aae) main_usb_pane_t3_ParamLimits

0x1cdb,	// (0x00046aae) main_usb_pane_t3

0x1cdb,	// (0x00046aae) main_usb_pane_t4_ParamLimits

0x1cdb,	// (0x00046aae) main_usb_pane_t4

0x1cdb,	// (0x00046aae) main_usb_pane_t5_ParamLimits

0x1cdb,	// (0x00046aae) main_usb_pane_t5

0x1cdb,	// (0x00046aae) main_usb_pane_t6_ParamLimits

0x1cdb,	// (0x00046aae) main_usb_pane_t6

0x0005,

0xf4fd,	// (0x000542d0) main_usb_pane_t_ParamLimits

0x3e67,	// (0x00048c3a) aid_text_placing

0x3e70,	// (0x00048c43) main_location2_pane_t1_ParamLimits

0x3e82,	// (0x00048c55) main_location2_pane_t2_ParamLimits

0x3e94,	// (0x00048c67) main_location2_pane_t3_ParamLimits

0x3ea6,	// (0x00048c79) main_location2_pane_t4_ParamLimits

0x3ea6,	// (0x00048c79) main_location2_pane_t4

0xf319,	// (0x000540ec) main_location2_pane_t_ParamLimits

0x1bb2,	// (0x00046985) find_pinb_pane_g2_ParamLimits

0x1bb2,	// (0x00046985) find_pinb_pane_g2

0x0001,

0xf095,	// (0x00053e68) find_pinb_pane_g_ParamLimits

0xf095,	// (0x00053e68) find_pinb_pane_g

0x1bbe,	// (0x00046991) find_pinb_pane_t1_ParamLimits

0x1bd0,	// (0x000469a3) find_pinb_pane_t2_ParamLimits

0xf09a,	// (0x00053e6d) find_pinb_pane_t_ParamLimits

0x1929,	// (0x000466fc) main_call3_pane

0x34be,	// (0x00048291) cale_month_day_heading_pane_t1_ParamLimits

0x3500,	// (0x000482d3) cale_month_day_heading_pane_t2_ParamLimits

0x3535,	// (0x00048308) cale_month_day_heading_pane_t3_ParamLimits

0x356a,	// (0x0004833d) cale_month_day_heading_pane_t4_ParamLimits

0x35a7,	// (0x0004837a) cale_month_day_heading_pane_t5_ParamLimits

0x35ec,	// (0x000483bf) cale_month_day_heading_pane_t6_ParamLimits

0x3631,	// (0x00048404) cale_month_day_heading_pane_t7_ParamLimits

0xf215,	// (0x00053fe8) cale_month_day_heading_pane_t_ParamLimits

0x389b,	// (0x0004866e) smil_status_volume_pane

0x42f7,	// (0x000490ca) postcard_address_pane_ParamLimits

0x42f7,	// (0x000490ca) postcard_address_pane

0x4309,	// (0x000490dc) postcard_message_pane_ParamLimits

0x4309,	// (0x000490dc) postcard_message_pane

0x4821,	// (0x000495f4) call2_cli_visual_pane_t1_ParamLimits

0x4821,	// (0x000495f4) call2_cli_visual_pane_t1

0xbfd1,	// (0x00050da4) postcard_message_pane_t1_ParamLimits

0xbfd1,	// (0x00050da4) postcard_message_pane_t1

0xbfb9,	// (0x00050d8c) postcard_address_pane_t1_ParamLimits

0xbfb9,	// (0x00050d8c) postcard_address_pane_t1

0x4f17,	// (0x00049cea) popup_call3_audio_in_window_ParamLimits

0x4f17,	// (0x00049cea) popup_call3_audio_in_window

0x4da2,	// (0x00049b75) bg_popup_call3_in_pane_ParamLimits

0x4da2,	// (0x00049b75) bg_popup_call3_in_pane

0x4e18,	// (0x00049beb) popup_call3_audio_in_window_g1_ParamLimits

0x4e18,	// (0x00049beb) popup_call3_audio_in_window_g1

0x4e38,	// (0x00049c0b) popup_call3_audio_in_window_g2_ParamLimits

0x4e38,	// (0x00049c0b) popup_call3_audio_in_window_g2

0x4e58,	// (0x00049c2b) popup_call3_audio_in_window_g3_ParamLimits

0x4e58,	// (0x00049c2b) popup_call3_audio_in_window_g3

0x0003,

0xf55a,	// (0x0005432d) popup_call3_audio_in_window_g_ParamLimits

0xf55a,	// (0x0005432d) popup_call3_audio_in_window_g

0x4e89,	// (0x00049c5c) popup_call3_audio_in_window_t1_ParamLimits

0x4e89,	// (0x00049c5c) popup_call3_audio_in_window_t1

0x4ec7,	// (0x00049c9a) popup_call3_audio_in_window_t2_ParamLimits

0x4ec7,	// (0x00049c9a) popup_call3_audio_in_window_t2

0x4f05,	// (0x00049cd8) popup_call3_audio_in_window_t3_ParamLimits

0x4f05,	// (0x00049cd8) popup_call3_audio_in_window_t3

0x0002,

0xf563,	// (0x00054336) popup_call3_audio_in_window_t_ParamLimits

0xf563,	// (0x00054336) popup_call3_audio_in_window_t

0x2610,	// (0x000473e3) bg_popup_call3_rect_pane

0xbcfc,	// (0x00050acf) bg_popup_call3_rect_pane_g1

0x1f9f,	// (0x00046d72) bg_popup_call3_rect_pane_g2

0xbd04,	// (0x00050ad7) bg_popup_call3_rect_pane_g3

0xbd0c,	// (0x00050adf) bg_popup_call3_rect_pane_g4

0xbd14,	// (0x00050ae7) bg_popup_call3_rect_pane_g5

0xbd1c,	// (0x00050aef) bg_popup_call3_rect_pane_g6

0xbd24,	// (0x00050af7) bg_popup_call3_rect_pane_g7

0x128d,	// (0x00046060) mup_visualizer_osc_pane

0x128d,	// (0x00046060) mup_visualizer_spec_pane

0x4dd2,	// (0x00049ba5) call3_video_qcif_pane_ParamLimits

0x4dd2,	// (0x00049ba5) call3_video_qcif_pane

0x4de5,	// (0x00049bb8) call3_video_qcif_uncrop_pane_ParamLimits

0x4de5,	// (0x00049bb8) call3_video_qcif_uncrop_pane

0x4df3,	// (0x00049bc6) call3_video_subqcif_pane_ParamLimits

0x4df3,	// (0x00049bc6) call3_video_subqcif_pane

0x4e07,	// (0x00049bda) call3_video_subqcif_uncrop_pane_ParamLimits

0x4e07,	// (0x00049bda) call3_video_subqcif_uncrop_pane

0x4e78,	// (0x00049c4b) popup_call3_audio_in_window_g4_ParamLimits

0x4e78,	// (0x00049c4b) popup_call3_audio_in_window_g4

0x128d,	// (0x00046060) mup_spec_half_pane

0x128d,	// (0x00046060) mup_spec_half_pane_cp

0x128d,	// (0x00046060) mup_osc_middle_pane

0x1cd1,	// (0x00046aa4) mup_visualizer_osc_pane_g1

0xbf4a,	// (0x00050d1d) mup_spec_bar_pane_ParamLimits

0xbf4a,	// (0x00050d1d) mup_spec_bar_pane

0x1cd1,	// (0x00046aa4) mup_spec_bar_pane_g1

0x1cd1,	// (0x00046aa4) mup_spec_bar_pane_g2

0x0001,

0xf0af,	// (0x00053e82) mup_spec_bar_pane_g

0x2023,	// (0x00046df6) aid_cale_week_size_cell_pane_ParamLimits

0x203d,	// (0x00046e10) bg_cale_heading_pane_ParamLimits

0x2055,	// (0x00046e28) bg_cale_pane_cp01_ParamLimits

0x2072,	// (0x00046e45) cale_week_corner_pane_ParamLimits

0x2091,	// (0x00046e64) cale_week_day_heading_pane_ParamLimits

0x20ae,	// (0x00046e81) cale_week_scroll_pane_g1_ParamLimits

0x20c1,	// (0x00046e94) cale_week_scroll_pane_g2_ParamLimits

0x20d9,	// (0x00046eac) cale_week_scroll_pane_g3_ParamLimits

0x20f1,	// (0x00046ec4) cale_week_scroll_pane_g4_ParamLimits

0x2109,	// (0x00046edc) cale_week_scroll_pane_g5_ParamLimits

0x2129,	// (0x00046efc) cale_week_scroll_pane_g6_ParamLimits

0x2149,	// (0x00046f1c) cale_week_scroll_pane_g7_ParamLimits

0x2169,	// (0x00046f3c) cale_week_scroll_pane_g8_ParamLimits

0x218d,	// (0x00046f60) cale_week_scroll_pane_g9_ParamLimits

0x21a5,	// (0x00046f78) cale_week_scroll_pane_g10_ParamLimits

0x21bd,	// (0x00046f90) cale_week_scroll_pane_g11_ParamLimits

0x21d5,	// (0x00046fa8) cale_week_scroll_pane_g12_ParamLimits

0x21ed,	// (0x00046fc0) cale_week_scroll_pane_g13_ParamLimits

0x21ed,	// (0x00046fc0) cale_week_scroll_pane_g14_ParamLimits

0x21ed,	// (0x00046fc0) cale_week_scroll_pane_g15_ParamLimits

0xf126,	// (0x00053ef9) cale_week_scroll_pane_g_ParamLimits

0x2229,	// (0x00046ffc) cale_week_time_pane_ParamLimits

0x224d,	// (0x00047020) grid_cale_week_pane_ParamLimits

0x2273,	// (0x00047046) listscroll_cale_week_pane_t1

0x2285,	// (0x00047058) scroll_pane_cp08_ParamLimits

0x3025,	// (0x00047df8) cale_month_corner_pane_ParamLimits

0x343f,	// (0x00048212) cale_month_pane_t1

0x3451,	// (0x00048224) cale_month_week_pane_ParamLimits

0x3cbc,	// (0x00048a8f) popup_call_status_window_g1_ParamLimits

0x3cd0,	// (0x00048aa3) popup_call_status_window_g2_ParamLimits

0x3ce4,	// (0x00048ab7) popup_call_status_window_g3_ParamLimits

0xf2a0,	// (0x00054073) popup_call_status_window_g_ParamLimits

0xa6f4,	// (0x0004f4c7) aid_call2_pane

0x0a86,	// (0x00045859) msg_header_pane_g1

0x42f7,	// (0x000490ca) postcard_address2_pane_ParamLimits

0x42f7,	// (0x000490ca) postcard_address2_pane

0x4309,	// (0x000490dc) postcard_message2_pane_ParamLimits

0x4309,	// (0x000490dc) postcard_message2_pane

0x4d72,	// (0x00049b45) message2_row_pane_ParamLimits

0x4d72,	// (0x00049b45) message2_row_pane

0x4d8f,	// (0x00049b62) address2_row_pane_ParamLimits

0x4d8f,	// (0x00049b62) address2_row_pane

0xbf17,	// (0x00050cea) postcard_message2_row_pane_g1

0xbf1f,	// (0x00050cf2) postcard_message2_row_pane_t1

0xbf17,	// (0x00050cea) address2_row_pane_g1

0xbf1f,	// (0x00050cf2) address2_row_pane_t1

0x2608,	// (0x000473db) aid_size_cell_vorec

0x1929,	// (0x000466fc) main_rss_pane

0xbf2d,	// (0x00050d00) rss_list_single_pane_ParamLimits

0xbf2d,	// (0x00050d00) rss_list_single_pane

0xbf3b,	// (0x00050d0e) rss_list_single_pane_t1

0xbf3b,	// (0x00050d0e) rss_list_single_pane_t2

0x0001,

0xf54e,	// (0x00054321) rss_list_single_pane_t

0x1929,	// (0x000466fc) main_camera2_pane

0x1929,	// (0x000466fc) main_video2_pane

0xbfed,	// (0x00050dc0) cams_zoom_pane_cp2_ParamLimits

0xbfed,	// (0x00050dc0) cams_zoom_pane_cp2

0xbfed,	// (0x00050dc0) image2_vga_pane_ParamLimits

0xbfed,	// (0x00050dc0) image2_vga_pane

0xbffb,	// (0x00050dce) main_camera2_pane_g1_ParamLimits

0xbffb,	// (0x00050dce) main_camera2_pane_g1

0xbffb,	// (0x00050dce) main_camera2_pane_g2_ParamLimits

0xbffb,	// (0x00050dce) main_camera2_pane_g2

0xbffb,	// (0x00050dce) main_camera2_pane_g3_ParamLimits

0xbffb,	// (0x00050dce) main_camera2_pane_g3

0xbffb,	// (0x00050dce) main_camera2_pane_g4_ParamLimits

0xbffb,	// (0x00050dce) main_camera2_pane_g4

0xbffb,	// (0x00050dce) main_camera2_pane_g5_ParamLimits

0xbffb,	// (0x00050dce) main_camera2_pane_g5

0xbffb,	// (0x00050dce) main_camera2_pane_g6_ParamLimits

0xbffb,	// (0x00050dce) main_camera2_pane_g6

0xbffb,	// (0x00050dce) main_camera2_pane_g7_ParamLimits

0xbffb,	// (0x00050dce) main_camera2_pane_g7

0xbffb,	// (0x00050dce) main_camera2_pane_g8_ParamLimits

0xbffb,	// (0x00050dce) main_camera2_pane_g8

0x0008,

0xf56a,	// (0x0005433d) main_camera2_pane_g_ParamLimits

0xf56a,	// (0x0005433d) main_camera2_pane_g

0x4f39,	// (0x00049d0c) main_camera2_pane_t1_ParamLimits

0x4f39,	// (0x00049d0c) main_camera2_pane_t1

0x4f39,	// (0x00049d0c) main_camera2_pane_t2_ParamLimits

0x4f39,	// (0x00049d0c) main_camera2_pane_t2

0x4f39,	// (0x00049d0c) main_camera2_pane_t3_ParamLimits

0x4f39,	// (0x00049d0c) main_camera2_pane_t3

0x4f39,	// (0x00049d0c) main_camera2_pane_t4_ParamLimits

0x4f39,	// (0x00049d0c) main_camera2_pane_t4

0x0006,

0xf57d,	// (0x00054350) main_camera2_pane_t_ParamLimits

0xf57d,	// (0x00054350) main_camera2_pane_t

0xc01d,	// (0x00050df0) cams_zoom_pane_cp4_ParamLimits

0xc01d,	// (0x00050df0) cams_zoom_pane_cp4

0xc02b,	// (0x00050dfe) image2_cif_pane_ParamLimits

0xc02b,	// (0x00050dfe) image2_cif_pane

0x1451,	// (0x00046224) image2_subqcif_pane_ParamLimits

0x1451,	// (0x00046224) image2_subqcif_pane

0x4f4d,	// (0x00049d20) main_video2_pane_g1_ParamLimits

0x4f4d,	// (0x00049d20) main_video2_pane_g1

0x4f4d,	// (0x00049d20) main_video2_pane_g2_ParamLimits

0x4f4d,	// (0x00049d20) main_video2_pane_g2

0x4f4d,	// (0x00049d20) main_video2_pane_g3_ParamLimits

0x4f4d,	// (0x00049d20) main_video2_pane_g3

0x4f4d,	// (0x00049d20) main_video2_pane_g4_ParamLimits

0x4f4d,	// (0x00049d20) main_video2_pane_g4

0x4f4d,	// (0x00049d20) main_video2_pane_g5_ParamLimits

0x4f4d,	// (0x00049d20) main_video2_pane_g5

0x4f4d,	// (0x00049d20) main_video2_pane_g6_ParamLimits

0x4f4d,	// (0x00049d20) main_video2_pane_g6

0x0005,

0xf58c,	// (0x0005435f) main_video2_pane_g_ParamLimits

0xf58c,	// (0x0005435f) main_video2_pane_g

0x4f5b,	// (0x00049d2e) main_video2_pane_t1_ParamLimits

0x4f5b,	// (0x00049d2e) main_video2_pane_t1

0x4f5b,	// (0x00049d2e) main_video2_pane_t2_ParamLimits

0x4f5b,	// (0x00049d2e) main_video2_pane_t2

0x4f5b,	// (0x00049d2e) main_video2_pane_t3_ParamLimits

0x4f5b,	// (0x00049d2e) main_video2_pane_t3

0x0002,

0xf599,	// (0x0005436c) main_video2_pane_t_ParamLimits

0xf599,	// (0x0005436c) main_video2_pane_t

0x48c6,	// (0x00049699) call_muted_g2

0x0001,

0xf540,	// (0x00054313) call_muted_g

0x1929,	// (0x000466fc) main_mup2_pane

0xab79,	// (0x0004f94c) main_mup2_pane_g1_ParamLimits

0xab79,	// (0x0004f94c) main_mup2_pane_g1

0xab79,	// (0x0004f94c) main_mup2_pane_g2_ParamLimits

0xab79,	// (0x0004f94c) main_mup2_pane_g2

0x1cd1,	// (0x00046aa4) main_mup_pane_g13_cp1

0x128d,	// (0x00046060) mup_volume_pane_cp1

0xab79,	// (0x0004f94c) main_mup2_pane_g4_ParamLimits

0xab79,	// (0x0004f94c) main_mup2_pane_g4

0xab79,	// (0x0004f94c) main_mup2_pane_g5_ParamLimits

0xab79,	// (0x0004f94c) main_mup2_pane_g5

0xab79,	// (0x0004f94c) main_mup2_pane_g6_ParamLimits

0xab79,	// (0x0004f94c) main_mup2_pane_g6

0xab79,	// (0x0004f94c) main_mup2_pane_g7_ParamLimits

0xab79,	// (0x0004f94c) main_mup2_pane_g7

0x0006,

0xf5a0,	// (0x00054373) main_mup2_pane_g_ParamLimits

0xf5a0,	// (0x00054373) main_mup2_pane_g

0xab87,	// (0x0004f95a) main_mup2_pane_t1_ParamLimits

0xab87,	// (0x0004f95a) main_mup2_pane_t1

0xab87,	// (0x0004f95a) main_mup2_pane_t2_ParamLimits

0xab87,	// (0x0004f95a) main_mup2_pane_t2

0xab87,	// (0x0004f95a) main_mup2_pane_t3_ParamLimits

0xab87,	// (0x0004f95a) main_mup2_pane_t3

0xab87,	// (0x0004f95a) main_mup2_pane_t4_ParamLimits

0xab87,	// (0x0004f95a) main_mup2_pane_t4

0xab87,	// (0x0004f95a) main_mup2_pane_t5_ParamLimits

0xab87,	// (0x0004f95a) main_mup2_pane_t5

0xab87,	// (0x0004f95a) main_mup2_pane_t6_ParamLimits

0xab87,	// (0x0004f95a) main_mup2_pane_t6

0x0005,

0xf5af,	// (0x00054382) main_mup2_pane_t_ParamLimits

0xf5af,	// (0x00054382) main_mup2_pane_t

0xab9b,	// (0x0004f96e) mup2_visualizer_pane_ParamLimits

0xab9b,	// (0x0004f96e) mup2_visualizer_pane

0xab9b,	// (0x0004f96e) mup_progress_pane_cp_ParamLimits

0xab9b,	// (0x0004f96e) mup_progress_pane_cp

0xc039,	// (0x00050e0c) mup_volume_pane_cp_ParamLimits

0xc039,	// (0x00050e0c) mup_volume_pane_cp

0x1bff,	// (0x000469d2) mup2_visualizer_pane_g1_ParamLimits

0x1bff,	// (0x000469d2) mup2_visualizer_pane_g1

0x1c0d,	// (0x000469e0) mup2_visualizer_pane_g2_ParamLimits

0x1c0d,	// (0x000469e0) mup2_visualizer_pane_g2

0x1c0d,	// (0x000469e0) mup2_visualizer_pane_g3_ParamLimits

0x1c0d,	// (0x000469e0) mup2_visualizer_pane_g3

0x0002,

0xf09f,	// (0x00053e72) mup2_visualizer_pane_g_ParamLimits

0xf09f,	// (0x00053e72) mup2_visualizer_pane_g

0x128d,	// (0x00046060) aid_size_cell_fmradio

0x4a78,	// (0x0004984b) aid_height_parent_landcape

0x2d3c,	// (0x00047b0f) wml_content_pane_cp

0x2d44,	// (0x00047b17) wml_tabs_pane

0x2d4d,	// (0x00047b20) popup_wml_miniature_window

0x2d55,	// (0x00047b28) scroll_pane_cp021

0x2d69,	// (0x00047b3c) wml_content_pane_comp8

0x1929,	// (0x000466fc) bg_popup_sub_pane_cp05

0xc04f,	// (0x00050e22) popup_wml_miniature_window_g1

0xc057,	// (0x00050e2a) wml_miniature_view_pane

0x4f6f,	// (0x00049d42) aid_size_wml_view

0x4f77,	// (0x00049d4a) wml_miniature_view_pane_g1

0x4f80,	// (0x00049d53) wml_miniature_view_pane_g2

0x4f89,	// (0x00049d5c) wml_miniature_view_pane_g3

0x4f91,	// (0x00049d64) wml_miniature_view_pane_g4

0x4f99,	// (0x00049d6c) wml_miniature_view_pane_g5

0x4fa1,	// (0x00049d74) wml_miniature_view_pane_g6

0x4fa9,	// (0x00049d7c) wml_miniature_view_pane_g7

0x4fb1,	// (0x00049d84) wml_miniature_view_pane_g8

0x0007,

0xf5bc,	// (0x0005438f) wml_miniature_view_pane_g

0xc05f,	// (0x00050e32) background_graphic_ParamLimits

0xc05f,	// (0x00050e32) background_graphic

0xc06b,	// (0x00050e3e) wml_tabs_2_pane

0xc074,	// (0x00050e47) wml_tabs_3_pane_ParamLimits

0xc074,	// (0x00050e47) wml_tabs_3_pane

0xc086,	// (0x00050e59) wml_tabs_4_pane_ParamLimits

0xc086,	// (0x00050e59) wml_tabs_4_pane

0xc09c,	// (0x00050e6f) wml_tabs_5_pane_ParamLimits

0xc09c,	// (0x00050e6f) wml_tabs_5_pane

0xc0b6,	// (0x00050e89) wml_tabs_pane_g2_ParamLimits

0xc0b6,	// (0x00050e89) wml_tabs_pane_g2

0xc0cb,	// (0x00050e9e) wml_tabs_pane_g3_ParamLimits

0xc0cb,	// (0x00050e9e) wml_tabs_pane_g3

0xc0e0,	// (0x00050eb3) wml_tabs_2_active_pane_ParamLimits

0xc0e0,	// (0x00050eb3) wml_tabs_2_active_pane

0xc0e0,	// (0x00050eb3) wml_tabs_2_passive_pane_ParamLimits

0xc0e0,	// (0x00050eb3) wml_tabs_2_passive_pane

0x4fb9,	// (0x00049d8c) wml_tabs_3_active_pane_cp_ParamLimits

0x4fb9,	// (0x00049d8c) wml_tabs_3_active_pane_cp

0x4fce,	// (0x00049da1) wml_tabs_3_passive_pane_ParamLimits

0x4fce,	// (0x00049da1) wml_tabs_3_passive_pane

0x4fe1,	// (0x00049db4) wml_tabs_3_passive_pane_cp_ParamLimits

0x4fe1,	// (0x00049db4) wml_tabs_3_passive_pane_cp

0x4ff8,	// (0x00049dcb) tabs_4_active_pane

0x5000,	// (0x00049dd3) tabs_4_passive_pane

0x500a,	// (0x00049ddd) tabs_4_passive_pane_cp

0x5012,	// (0x00049de5) tabs_4_passive_pane_cp2

0x483c,	// (0x0004960f) aid_height_text

0xab9b,	// (0x0004f96e) mup_volume_cont_pane_ParamLimits

0xab9b,	// (0x0004f96e) mup_volume_cont_pane

0x128d,	// (0x00046060) aid_size_cell_pinb

0x128d,	// (0x00046060) aid_size_list_pinb

0xab9b,	// (0x0004f96e) mup2_volume_cont_pane_ParamLimits

0xab9b,	// (0x0004f96e) mup2_volume_cont_pane

0xc0ee,	// (0x00050ec1) mup2_volume_cont_pane_g1_ParamLimits

0xc0ee,	// (0x00050ec1) mup2_volume_cont_pane_g1

0x1297,	// (0x0004606a) aid_size_cell_touch_ParamLimits

0x1297,	// (0x0004606a) aid_size_cell_touch

0x146b,	// (0x0004623e) touch_pane_ParamLimits

0x146b,	// (0x0004623e) touch_pane

0x128d,	// (0x00046060) main_rss2_pane

0xc10d,	// (0x00050ee0) listscroll_rss2_pane

0xc116,	// (0x00050ee9) rss2_navigation_pane

0xc11e,	// (0x00050ef1) list_rss2_pane

0xa87c,	// (0x0004f64f) scroll_pane_cp22

0xc126,	// (0x00050ef9) rss2_navigation_pane_g1

0xc12f,	// (0x00050f02) rss2_navigation_pane_g2

0xc137,	// (0x00050f0a) rss2_navigation_pane_g3

0x0002,

0xf5cd,	// (0x000543a0) rss2_navigation_pane_g

0xc13f,	// (0x00050f12) rss2_navigation_pane_t1

0x501c,	// (0x00049def) rss2_list_single_pane_ParamLimits

0x501c,	// (0x00049def) rss2_list_single_pane

0xc14d,	// (0x00050f20) rss2_list_single_pane_t2

0xc15b,	// (0x00050f2e) rss2_list_single_pane_t3_ParamLimits

0xc15b,	// (0x00050f2e) rss2_list_single_pane_t3

0xc178,	// (0x00050f4b) rss2_list_single_pane_t4

0x3883,	// (0x00048656) smil_status_pane_g1

0x1451,	// (0x00046224) main_image2_pane_ParamLimits

0x1451,	// (0x00046224) main_image2_pane

0xbffb,	// (0x00050dce) main_camera2_pane_g9_ParamLimits

0xbffb,	// (0x00050dce) main_camera2_pane_g9

0x4f39,	// (0x00049d0c) main_camera2_pane_t5_ParamLimits

0x4f39,	// (0x00049d0c) main_camera2_pane_t5

0xc009,	// (0x00050ddc) main_camera2_pane_t6_ParamLimits

0xc009,	// (0x00050ddc) main_camera2_pane_t6

0x5032,	// (0x00049e05) main_image2_pane_g1_ParamLimits

0x5032,	// (0x00049e05) main_image2_pane_g1

0x450f,	// (0x000492e2) smil2_video_pane_ParamLimits

0x450f,	// (0x000492e2) smil2_video_pane

0xa556,	// (0x0004f329) aid_zoom_text_primary_cp

0xa595,	// (0x0004f368) popup_preview_fixed_window

0x2c32,	// (0x00047a05) im_reading_pane_g1

0x4f2b,	// (0x00049cfe) cams2_bc_adjust_pane_cp_ParamLimits

0x4f2b,	// (0x00049cfe) cams2_bc_adjust_pane_cp

0xab9b,	// (0x0004f96e) cams2_bc_adjust_pane_ParamLimits

0xab9b,	// (0x0004f96e) cams2_bc_adjust_pane

0x1cd1,	// (0x00046aa4) cams2_bc_adjust_pane_g1

0x128d,	// (0x00046060) cams2_slider_pane

0x1cd1,	// (0x00046aa4) cams2_slider_pane_g1

0x1cd1,	// (0x00046aa4) cams2_slider_pane_g2

0x0006,

0xf5d4,	// (0x000543a7) cams2_slider_pane_g

0x1c5b,	// (0x00046a2e) calc_display_pane_ParamLimits

0x1c80,	// (0x00046a53) calc_paper_pane_ParamLimits

0x1ca3,	// (0x00046a76) grid_calc_pane_ParamLimits

0xa756,	// (0x0004f529) popup_clock_digital_window_t1_ParamLimits

0xae2c,	// (0x0004fbff) main_image_pane_t1

0x1c3d,	// (0x00046a10) aid_size_cell_calc_ParamLimits

0x1c3d,	// (0x00046a10) aid_size_cell_calc

0x4abe,	// (0x00049891) popup_blid_sat_info2_window_ParamLimits

0x4abe,	// (0x00049891) popup_blid_sat_info2_window

0xc186,	// (0x00050f59) aid_size_cell_blid

0xc02b,	// (0x00050dfe) bg_popup_window_pane_cp07

0xc1a3,	// (0x00050f76) grid_popup_blid_pane

0xc1ad,	// (0x00050f80) heading_pane_cp05_ParamLimits

0xc1ad,	// (0x00050f80) heading_pane_cp05

0xc277,	// (0x0005104a) cell_popup_blid_pane_ParamLimits

0xc277,	// (0x0005104a) cell_popup_blid_pane

0xc29b,	// (0x0005106e) cell_popup_blid_pane_g1

0xc2a3,	// (0x00051076) cell_popup_blid_pane_t1

0xab9b,	// (0x0004f96e) mup2_indicator_pane_ParamLimits

0xab9b,	// (0x0004f96e) mup2_indicator_pane

0x128d,	// (0x00046060) mup2_visualizer_osc_pane

0xc039,	// (0x00050e0c) mup2_visualizer_spec_pane_ParamLimits

0xc039,	// (0x00050e0c) mup2_visualizer_spec_pane

0x128d,	// (0x00046060) mup2_spec_half_pane

0x128d,	// (0x00046060) mup2_spec_half_pane_cp

0xc2b1,	// (0x00051084) mup2_spec_bar_pane_ParamLimits

0xc2b1,	// (0x00051084) mup2_spec_bar_pane

0x1cd1,	// (0x00046aa4) mup2_spec_bar_pane_g1

0xc2d0,	// (0x000510a3) mup2_spec_bar_pane_g2

0x0001,

0xf5fa,	// (0x000543cd) mup2_spec_bar_pane_g

0x128d,	// (0x00046060) mup2_osc_middle_pane

0x1cd1,	// (0x00046aa4) mup2_visualizer_osc_pane_g1

0x14dd,	// (0x000462b0) popup_number_entry_window_t1_ParamLimits

0x14f0,	// (0x000462c3) popup_number_entry_window_t2_ParamLimits

0x1502,	// (0x000462d5) popup_number_entry_window_t3_ParamLimits

0x1514,	// (0x000462e7) popup_number_entry_window_t5_ParamLimits

0x1514,	// (0x000462e7) popup_number_entry_window_t5

0xf040,	// (0x00053e13) popup_number_entry_window_t_ParamLimits

0x1549,	// (0x0004631c) text_title_cp2_ParamLimits

0xad24,	// (0x0004faf7) aid_hotspot_pointer_text2_pane

0xad4a,	// (0x0004fb1d) main_viewer_pane_g9_ParamLimits

0xad4a,	// (0x0004fb1d) main_viewer_pane_g9

0x343f,	// (0x00048212) cale_month_pane_t1_ParamLimits

0x38fd,	// (0x000486d0) bg_cale_pane_ParamLimits

0x3915,	// (0x000486e8) list_cale_pane_ParamLimits

0x3926,	// (0x000486f9) listscroll_cale_day_pane_t1

0x3938,	// (0x0004870b) scroll_pane_cp09_ParamLimits

0x3f91,	// (0x00048d64) main_mup_eq_pane_t1_ParamLimits

0x3f91,	// (0x00048d64) main_mup_eq_pane_t1

0x3fab,	// (0x00048d7e) main_mup_eq_pane_t2_ParamLimits

0x3fab,	// (0x00048d7e) main_mup_eq_pane_t2

0x3fc5,	// (0x00048d98) main_mup_eq_pane_t3_ParamLimits

0x3fc5,	// (0x00048d98) main_mup_eq_pane_t3

0x3fe1,	// (0x00048db4) main_mup_eq_pane_t4_ParamLimits

0x3fe1,	// (0x00048db4) main_mup_eq_pane_t4

0x3ffd,	// (0x00048dd0) main_mup_eq_pane_t5_ParamLimits

0x3ffd,	// (0x00048dd0) main_mup_eq_pane_t5

0x4019,	// (0x00048dec) main_mup_eq_pane_t6_ParamLimits

0x4019,	// (0x00048dec) main_mup_eq_pane_t6

0x402d,	// (0x00048e00) main_mup_eq_pane_t7_ParamLimits

0x402d,	// (0x00048e00) main_mup_eq_pane_t7

0x4041,	// (0x00048e14) main_mup_eq_pane_t8_ParamLimits

0x4041,	// (0x00048e14) main_mup_eq_pane_t8

0x4055,	// (0x00048e28) main_mup_eq_pane_t9_ParamLimits

0x4055,	// (0x00048e28) main_mup_eq_pane_t9

0x406f,	// (0x00048e42) main_mup_eq_pane_t10_ParamLimits

0x406f,	// (0x00048e42) main_mup_eq_pane_t10

0x0009,

0xf39a,	// (0x0005416d) main_mup_eq_pane_t_ParamLimits

0xf39a,	// (0x0005416d) main_mup_eq_pane_t

0x411e,	// (0x00048ef1) mup_equalizer_pane_cp5_ParamLimits

0x4132,	// (0x00048f05) mup_equalizer_pane_cp6_ParamLimits

0x4146,	// (0x00048f19) mup_equalizer_pane_cp7_ParamLimits

0x128d,	// (0x00046060) main_gallery_pane

0xbf69,	// (0x00050d3c) smil2_volume_pane

0xbf71,	// (0x00050d44) smil_status_volume_pane_g1_ParamLimits

0xbf84,	// (0x00050d57) smil_status_volume_pane_g2_ParamLimits

0xbf97,	// (0x00050d6a) smil_status_volume_pane_g3_ParamLimits

0xf553,	// (0x00054326) smil_status_volume_pane_g_ParamLimits

0xc02b,	// (0x00050dfe) bg_popup_window_pane_cp07_ParamLimits

0xc18e,	// (0x00050f61) blid_firmament_pane

0x1451,	// (0x00046224) aid_size_cell_gallery_ParamLimits

0x1451,	// (0x00046224) aid_size_cell_gallery

0x1451,	// (0x00046224) grid_gallery_pane_ParamLimits

0x1451,	// (0x00046224) grid_gallery_pane

0xc02b,	// (0x00050dfe) cell_gallery_pane_ParamLimits

0xc02b,	// (0x00050dfe) cell_gallery_pane

0x1451,	// (0x00046224) bg_cell_gallery_focus_pane_ParamLimits

0x1451,	// (0x00046224) bg_cell_gallery_focus_pane

0x1bff,	// (0x000469d2) cell_gallery_pane_g1_ParamLimits

0x1bff,	// (0x000469d2) cell_gallery_pane_g1

0x1bff,	// (0x000469d2) cell_gallery_pane_g2_ParamLimits

0x1bff,	// (0x000469d2) cell_gallery_pane_g2

0x1bff,	// (0x000469d2) cell_gallery_pane_g3_ParamLimits

0x1bff,	// (0x000469d2) cell_gallery_pane_g3

0x1c0d,	// (0x000469e0) cell_gallery_pane_g4_ParamLimits

0x1c0d,	// (0x000469e0) cell_gallery_pane_g4

0x0003,

0xf5ff,	// (0x000543d2) cell_gallery_pane_g_ParamLimits

0xf5ff,	// (0x000543d2) cell_gallery_pane_g

0xc2da,	// (0x000510ad) bg_cell_gallery_focus_pane_g1

0xc2e2,	// (0x000510b5) bg_cell_gallery_focus_pane_g2

0xc2ea,	// (0x000510bd) bg_cell_gallery_focus_pane_g3

0xc2f2,	// (0x000510c5) bg_cell_gallery_focus_pane_g4

0xc2fa,	// (0x000510cd) bg_cell_gallery_focus_pane_g5

0xc302,	// (0x000510d5) bg_cell_gallery_focus_pane_g6

0xc30a,	// (0x000510dd) bg_cell_gallery_focus_pane_g7

0xc312,	// (0x000510e5) bg_cell_gallery_focus_pane_g8

0x0007,

0xf608,	// (0x000543db) bg_cell_gallery_focus_pane_g

0xc31a,	// (0x000510ed) aid_firma_cardinal

0xc32e,	// (0x00051101) blid_firmament_pane_t1

0xc345,	// (0x00051118) blid_firmament_pane_t2

0xc35c,	// (0x0005112f) blid_firmament_pane_t3

0xc373,	// (0x00051146) blid_firmament_pane_t4

0x0003,

0xf619,	// (0x000543ec) blid_firmament_pane_t

0xc38a,	// (0x0005115d) blid_sat_info_pane

0x1cd1,	// (0x00046aa4) blid_sat_info_pane_g1

0x1cd1,	// (0x00046aa4) blid_sat_info_pane_g2

0x0001,

0xf0af,	// (0x00053e82) blid_sat_info_pane_g

0xc39a,	// (0x0005116d) blid_sat_info_pane_t1

0xc3a8,	// (0x0005117b) smil2_volume_content_pane

0xc3b1,	// (0x00051184) smil2_volume_pane_g1

0x1e9e,	// (0x00046c71) smil2_volume_content_pane_g1

0xc3b9,	// (0x0005118c) smil2_volume_content_pane_g2

0xc3c2,	// (0x00051195) smil2_volume_content_pane_g3

0xc3cb,	// (0x0005119e) smil2_volume_content_pane_g4

0xc3d4,	// (0x000511a7) smil2_volume_content_pane_g5

0xc3dd,	// (0x000511b0) smil2_volume_content_pane_g6

0xc3e6,	// (0x000511b9) smil2_volume_content_pane_g7

0xc3ef,	// (0x000511c2) smil2_volume_content_pane_g8

0xc3f8,	// (0x000511cb) smil2_volume_content_pane_g9

0xc401,	// (0x000511d4) smil2_volume_content_pane_g10

0x0009,

0xf622,	// (0x000543f5) smil2_volume_content_pane_g

0x2330,	// (0x00047103) cale_week_day_heading_pane_t1_ParamLimits

0x235a,	// (0x0004712d) cale_week_day_heading_pane_t2_ParamLimits

0x2389,	// (0x0004715c) cale_week_day_heading_pane_t3_ParamLimits

0x23b8,	// (0x0004718b) cale_week_day_heading_pane_t4_ParamLimits

0x23e7,	// (0x000471ba) cale_week_day_heading_pane_t5_ParamLimits

0x241e,	// (0x000471f1) cale_week_day_heading_pane_t6_ParamLimits

0x2455,	// (0x00047228) cale_week_day_heading_pane_t7_ParamLimits

0xf147,	// (0x00053f1a) cale_week_day_heading_pane_t_ParamLimits

0x247f,	// (0x00047252) bg_cale_side_pane_ParamLimits

0x248d,	// (0x00047260) cale_week_time_pane_t1_ParamLimits

0x24a7,	// (0x0004727a) cale_week_time_pane_t2_ParamLimits

0x24c1,	// (0x00047294) cale_week_time_pane_t3_ParamLimits

0x24db,	// (0x000472ae) cale_week_time_pane_t4_ParamLimits

0x24f5,	// (0x000472c8) cale_week_time_pane_t5_ParamLimits

0x250f,	// (0x000472e2) cale_week_time_pane_t6_ParamLimits

0x2529,	// (0x000472fc) cale_week_time_pane_t7_ParamLimits

0x2543,	// (0x00047316) cale_week_time_pane_t8_ParamLimits

0xf156,	// (0x00053f29) cale_week_time_pane_t_ParamLimits

0x2563,	// (0x00047336) cell_cale_week_pane_g2_ParamLimits

0x247f,	// (0x00047252) bg_cale_side_pane_cp01_ParamLimits

0x367e,	// (0x00048451) cale_month_week_pane_t1_ParamLimits

0x3697,	// (0x0004846a) cale_month_week_pane_t2_ParamLimits

0x36b0,	// (0x00048483) cale_month_week_pane_t3_ParamLimits

0x36c9,	// (0x0004849c) cale_month_week_pane_t4_ParamLimits

0x36e2,	// (0x000484b5) cale_month_week_pane_t5_ParamLimits

0x36fb,	// (0x000484ce) cale_month_week_pane_t6_ParamLimits

0xf224,	// (0x00053ff7) cale_month_week_pane_t_ParamLimits

0xa637,	// (0x0004f40a) cell_cale_month_pane_g1_ParamLimits

0x128d,	// (0x00046060) main_cale_event_viewer_pane

0x128d,	// (0x00046060) listscroll_cale_event_viewer_pane

0xc40a,	// (0x000511dd) list_cale_ev_pane

0xc412,	// (0x000511e5) scroll_pane_cp023

0xc41e,	// (0x000511f1) field_cale_ev_pane_ParamLimits

0xc41e,	// (0x000511f1) field_cale_ev_pane

0xc43c,	// (0x0005120f) field_cale_ev_content_pane_ParamLimits

0xc43c,	// (0x0005120f) field_cale_ev_content_pane

0xc448,	// (0x0005121b) field_cale_ev_pane_g1_ParamLimits

0xc448,	// (0x0005121b) field_cale_ev_pane_g1

0xc454,	// (0x00051227) field_cale_ev_pane_g2_ParamLimits

0xc454,	// (0x00051227) field_cale_ev_pane_g2

0xc46c,	// (0x0005123f) field_cale_ev_pane_g3_ParamLimits

0xc46c,	// (0x0005123f) field_cale_ev_pane_g3

0x0002,

0xf637,	// (0x0005440a) field_cale_ev_pane_g_ParamLimits

0xf637,	// (0x0005440a) field_cale_ev_pane_g

0xc484,	// (0x00051257) field_cale_ev_pane_t1_ParamLimits

0xc484,	// (0x00051257) field_cale_ev_pane_t1

0xc49b,	// (0x0005126e) field_cale_ev_content_pane_t1_ParamLimits

0xc49b,	// (0x0005126e) field_cale_ev_content_pane_t1

0xac46,	// (0x0004fa19) bg_button_pane_cp01

0x2008,	// (0x00046ddb) listscroll_cale_week_pane_ParamLimits

0x201a,	// (0x00046ded) popup_toolbar_window_cp01

0x2273,	// (0x00047046) listscroll_cale_week_pane_t1_ParamLimits

0x2008,	// (0x00046ddb) listscroll_cale_day_pane_ParamLimits

0x201a,	// (0x00046ded) popup_toolbar_window_cp02

0x3926,	// (0x000486f9) listscroll_cale_day_pane_t1_ParamLimits

0x2008,	// (0x00046ddb) main_cale_month_pane_ParamLimits

0xbee7,	// (0x00050cba) popup_toolbar_window_cp03_ParamLimits

0xbee7,	// (0x00050cba) popup_toolbar_window_cp03

0x43d7,	// (0x000491aa) main_image_pane_g2_ParamLimits

0x43d7,	// (0x000491aa) main_image_pane_g2

0x43e8,	// (0x000491bb) main_image_pane_g3_ParamLimits

0x43e8,	// (0x000491bb) main_image_pane_g3

0x0002,

0xf42c,	// (0x000541ff) main_image_pane_g_ParamLimits

0xf42c,	// (0x000541ff) main_image_pane_g

0xae2c,	// (0x0004fbff) main_image_pane_t1_ParamLimits

0x43f9,	// (0x000491cc) main_image_pane_t2_ParamLimits

0x43f9,	// (0x000491cc) main_image_pane_t2

0x440b,	// (0x000491de) main_image_pane_t3_ParamLimits

0x440b,	// (0x000491de) main_image_pane_t3

0x4433,	// (0x00049206) main_image_pane_t4_ParamLimits

0x4433,	// (0x00049206) main_image_pane_t4

0x0003,

0xf433,	// (0x00054206) main_image_pane_t_ParamLimits

0xf433,	// (0x00054206) main_image_pane_t

0x4453,	// (0x00049226) popup_image_details_window_cp01

0x445d,	// (0x00049230) popup_toobar_trans_pane_cp01_ParamLimits

0x445d,	// (0x00049230) popup_toobar_trans_pane_cp01

0x4b8f,	// (0x00049962) popup_image_details_window_ParamLimits

0x4b8f,	// (0x00049962) popup_image_details_window

0xbeba,	// (0x00050c8d) popup_image_focus_window

0xbfed,	// (0x00050dc0) camera2_autofocus_pane_ParamLimits

0xbfed,	// (0x00050dc0) camera2_autofocus_pane

0x128d,	// (0x00046060) bg_popup_sub_pane_cp06

0xc4b9,	// (0x0005128c) popup_image_focus_window_g1

0xc4c1,	// (0x00051294) popup_image_focus_window_g2

0xc4c9,	// (0x0005129c) popup_image_focus_window_g3

0xc4d1,	// (0x000512a4) popup_image_focus_window_g4

0x0003,

0xf63e,	// (0x00054411) popup_image_focus_window_g

0xc4d9,	// (0x000512ac) popup_image_focus_window_t1

0xc4e7,	// (0x000512ba) popup_image_focus_window_t2

0xc4f7,	// (0x000512ca) popup_image_focus_window_t3

0x0002,

0xf647,	// (0x0005441a) popup_image_focus_window_t

0x1bff,	// (0x000469d2) camera2_autofocus_pane_g1

0x1451,	// (0x00046224) bg_tb_trans_pane_cp01

0xc505,	// (0x000512d8) popup_image_details_window_g1

0xc518,	// (0x000512eb) popup_image_details_window_g2

0x0002,

0xf659,	// (0x0005442c) popup_image_details_window_g

0xc541,	// (0x00051314) popup_image_details_window_t1

0xc553,	// (0x00051326) popup_image_details_window_t2

0xc56c,	// (0x0005133f) popup_image_details_window_t3

0xc580,	// (0x00051353) popup_image_details_window_t4

0xc59b,	// (0x0005136e) popup_image_details_window_t5

0x0004,

0xf660,	// (0x00054433) popup_image_details_window_t

0x1d2f,	// (0x00046b02) bg_calc_paper_pane_ParamLimits

0x128d,	// (0x00046060) grid_highlight_pane_cp013

0xa5a7,	// (0x0004f37a) list_calc_pane_ParamLimits

0xa5b9,	// (0x0004f38c) scroll_pane_cp024

0x1d43,	// (0x00046b16) bg_calc_display_pane_ParamLimits

0x1d4f,	// (0x00046b22) calc_display_pane_t1_ParamLimits

0x1d61,	// (0x00046b34) calc_display_pane_t2_ParamLimits

0xa5c1,	// (0x0004f394) calc_display_pane_t3_ParamLimits

0xf0c7,	// (0x00053e9a) calc_display_pane_t_ParamLimits

0x1e64,	// (0x00046c37) cell_calc_pane_g2

0x0001,

0xf0e4,	// (0x00053eb7) cell_calc_pane_g

0x1e6d,	// (0x00046c40) cell_calc_pane_t1

0x1e7c,	// (0x00046c4f) grid_highlight_pane_cp02_ParamLimits

0x1e92,	// (0x00046c65) toolbar_button_pane_cp01_ParamLimits

0x1e92,	// (0x00046c65) toolbar_button_pane_cp01

0xae71,	// (0x0004fc44) temp_image_control_pane_ParamLimits

0xae71,	// (0x0004fc44) temp_image_control_pane

0x1451,	// (0x00046224) main_mp3_pane

0xc5b5,	// (0x00051388) temp_image_control_pane_g1_ParamLimits

0xc5b5,	// (0x00051388) temp_image_control_pane_g1

0xc5c3,	// (0x00051396) temp_image_control_pane_g2_ParamLimits

0xc5c3,	// (0x00051396) temp_image_control_pane_g2

0xc5d5,	// (0x000513a8) temp_image_control_pane_g3_ParamLimits

0xc5d5,	// (0x000513a8) temp_image_control_pane_g3

0x5048,	// (0x00049e1b) temp_image_control_pane_g4_ParamLimits

0x5048,	// (0x00049e1b) temp_image_control_pane_g4

0x0003,

0xf66b,	// (0x0005443e) temp_image_control_pane_g_ParamLimits

0xf66b,	// (0x0005443e) temp_image_control_pane_g

0xc5b5,	// (0x00051388) main_mp3_pane_g1

0x505b,	// (0x00049e2e) main_mp3_pane_g2

0x0007,

0xf674,	// (0x00054447) main_mp3_pane_g

0xc60a,	// (0x000513dd) main_mp3_pane_t1

0x1c0d,	// (0x000469e0) main_camera_pane_g8_ParamLimits

0x1c0d,	// (0x000469e0) main_camera_pane_g8

0x2797,	// (0x0004756a) main_video_pane_g7_ParamLimits

0x2797,	// (0x0004756a) main_video_pane_g7

0x1cef,	// (0x00046ac2) main_camera2_pane_t7_ParamLimits

0x1cef,	// (0x00046ac2) main_camera2_pane_t7

0x2cfc,	// (0x00047acf) scroll_pane_cp025_ParamLimits

0x2cfc,	// (0x00047acf) scroll_pane_cp025

0x2d10,	// (0x00047ae3) scroll_pane_cp026_ParamLimits

0x2d10,	// (0x00047ae3) scroll_pane_cp026

0x2d1f,	// (0x00047af2) wml_content_pane_ParamLimits

0x128d,	// (0x00046060) main_touch_calib_pane

0x512f,	// (0x00049f02) main_touch_calib_pane_g1

0x5141,	// (0x00049f14) main_touch_calib_pane_g2

0x5153,	// (0x00049f26) main_touch_calib_pane_g3

0x5165,	// (0x00049f38) main_touch_calib_pane_g4

0x0003,

0xf692,	// (0x00054465) main_touch_calib_pane_g

0x5177,	// (0x00049f4a) main_touch_calib_pane_t1

0x5191,	// (0x00049f64) main_touch_calib_pane_t2

0x0004,

0xf69b,	// (0x0005446e) main_touch_calib_pane_t

0xa94b,	// (0x0004f71e) mup_progress_pane_cp02

0xa980,	// (0x0004f753) navi_pane_g1

0xaa3b,	// (0x0004f80e) navi_pane_mp_t3

0x1451,	// (0x00046224) main_mp3_pane_ParamLimits

0x4d1a,	// (0x00049aed) navi_pane_ParamLimits

0xc5b5,	// (0x00051388) main_mp3_pane_g1_ParamLimits

0x505b,	// (0x00049e2e) main_mp3_pane_g2_ParamLimits

0x5069,	// (0x00049e3c) main_mp3_pane_g3_ParamLimits

0x5069,	// (0x00049e3c) main_mp3_pane_g3

0x5077,	// (0x00049e4a) main_mp3_pane_g4_ParamLimits

0x5077,	// (0x00049e4a) main_mp3_pane_g4

0x1bff,	// (0x000469d2) main_mp3_pane_g5_ParamLimits

0x1bff,	// (0x000469d2) main_mp3_pane_g5

0xc5e5,	// (0x000513b8) main_mp3_pane_g6_ParamLimits

0xc5e5,	// (0x000513b8) main_mp3_pane_g6

0xc5f2,	// (0x000513c5) main_mp3_pane_g7_ParamLimits

0xc5f2,	// (0x000513c5) main_mp3_pane_g7

0xc5fe,	// (0x000513d1) main_mp3_pane_g8_ParamLimits

0xc5fe,	// (0x000513d1) main_mp3_pane_g8

0xf674,	// (0x00054447) main_mp3_pane_g_ParamLimits

0x5083,	// (0x00049e56) main_mp3_pane_t2

0x5091,	// (0x00049e64) main_mp3_pane_t3

0xc618,	// (0x000513eb) main_mp3_pane_t4

0xc626,	// (0x000513f9) main_mp3_pane_t5

0x0005,

0xf685,	// (0x00054458) main_mp3_pane_t

0xc634,	// (0x00051407) mup_progress_pane_cp01

0xa556,	// (0x0004f329) aid_zoom_text_secondary2

0xc40a,	// (0x000511dd) list_cale_ev2_pane

0xc412,	// (0x000511e5) scroll_pane_cp023_ParamLimits

0x51e7,	// (0x00049fba) field_cale_ev2_pane_ParamLimits

0x51e7,	// (0x00049fba) field_cale_ev2_pane

0xc63c,	// (0x0005140f) field_cale_ev2_pane_g1_ParamLimits

0xc63c,	// (0x0005140f) field_cale_ev2_pane_g1

0xc648,	// (0x0005141b) field_cale_ev2_pane_g2_ParamLimits

0xc648,	// (0x0005141b) field_cale_ev2_pane_g2

0xc660,	// (0x00051433) field_cale_ev2_pane_g3_ParamLimits

0xc660,	// (0x00051433) field_cale_ev2_pane_g3

0x0003,

0xf6a6,	// (0x00054479) field_cale_ev2_pane_g_ParamLimits

0xf6a6,	// (0x00054479) field_cale_ev2_pane_g

0xc684,	// (0x00051457) field_cale_ev2_pane_t1_ParamLimits

0xc684,	// (0x00051457) field_cale_ev2_pane_t1

0xc69b,	// (0x0005146e) field_cale_ev2_pane_t2_ParamLimits

0xc69b,	// (0x0005146e) field_cale_ev2_pane_t2

0x0001,

0xf6af,	// (0x00054482) field_cale_ev2_pane_t_ParamLimits

0xf6af,	// (0x00054482) field_cale_ev2_pane_t

0x42ad,	// (0x00049080) main_postcard_pane_g5_ParamLimits

0x42ad,	// (0x00049080) main_postcard_pane_g5

0x42c3,	// (0x00049096) main_postcard_pane_g6_ParamLimits

0x42c3,	// (0x00049096) main_postcard_pane_g6

0x1451,	// (0x00046224) camera2_autofocus_pane_cp_ParamLimits

0x1451,	// (0x00046224) camera2_autofocus_pane_cp

0x1451,	// (0x00046224) main_mup3_pane

0x524c,	// (0x0004a01f) main_mup3_pane_g1_ParamLimits

0x524c,	// (0x0004a01f) main_mup3_pane_g1

0x526e,	// (0x0004a041) main_mup3_pane_g2_ParamLimits

0x526e,	// (0x0004a041) main_mup3_pane_g2

0x52ee,	// (0x0004a0c1) main_mup3_pane_g3_ParamLimits

0x52ee,	// (0x0004a0c1) main_mup3_pane_g3

0x5334,	// (0x0004a107) main_mup3_pane_g4_ParamLimits

0x5334,	// (0x0004a107) main_mup3_pane_g4

0x537a,	// (0x0004a14d) main_mup3_pane_g5_ParamLimits

0x537a,	// (0x0004a14d) main_mup3_pane_g5

0x53c0,	// (0x0004a193) main_mup3_pane_g6_ParamLimits

0x53c0,	// (0x0004a193) main_mup3_pane_g6

0x1c0d,	// (0x000469e0) main_mup3_pane_g7_ParamLimits

0x1c0d,	// (0x000469e0) main_mup3_pane_g7

0x0007,

0xf6bf,	// (0x00054492) main_mup3_pane_g_ParamLimits

0xf6bf,	// (0x00054492) main_mup3_pane_g

0x543e,	// (0x0004a211) main_mup3_pane_t1_ParamLimits

0x543e,	// (0x0004a211) main_mup3_pane_t1

0x54b2,	// (0x0004a285) main_mup3_pane_t2_ParamLimits

0x54b2,	// (0x0004a285) main_mup3_pane_t2

0x5586,	// (0x0004a359) main_mup3_pane_t4_ParamLimits

0x5586,	// (0x0004a359) main_mup3_pane_t4

0x55dc,	// (0x0004a3af) main_mup3_pane_t5_ParamLimits

0x55dc,	// (0x0004a3af) main_mup3_pane_t5

0x5698,	// (0x0004a46b) main_mup3_pane_t6_ParamLimits

0x5698,	// (0x0004a46b) main_mup3_pane_t6

0x0005,

0xf6d0,	// (0x000544a3) main_mup3_pane_t_ParamLimits

0xf6d0,	// (0x000544a3) main_mup3_pane_t

0x5750,	// (0x0004a523) mup3_progress_pane_ParamLimits

0x5750,	// (0x0004a523) mup3_progress_pane

0x57dc,	// (0x0004a5af) popup_mup3_control_window_ParamLimits

0x57dc,	// (0x0004a5af) popup_mup3_control_window

0xc6b0,	// (0x00051483) popup_mup3_text_window

0x580e,	// (0x0004a5e1) mup3_progress_pane_t1

0x582d,	// (0x0004a600) mup3_progress_pane_t2

0xc6b8,	// (0x0005148b) mup3_progress_pane_t3

0x0002,

0xf6dd,	// (0x000544b0) mup3_progress_pane_t

0xc6d5,	// (0x000514a8) mup_progress_pane_cp03

0x128d,	// (0x00046060) bg_tb_trans_pane_cp04

0x584c,	// (0x0004a61f) mup3_volume_pane

0x5854,	// (0x0004a627) popup_mup3_control_window_g1

0x585d,	// (0x0004a630) mup3_volume_pane_g1

0x5866,	// (0x0004a639) mup3_volume_pane_g2

0x586f,	// (0x0004a642) mup3_volume_pane_g3

0x0002,

0xf6e4,	// (0x000544b7) mup3_volume_pane_g

0x128d,	// (0x00046060) bg_tb_trans_pane_cp03

0xc6e5,	// (0x000514b8) popup_mup3_text_window_g1

0xc6ed,	// (0x000514c0) popup_mup3_text_window_t1

0x1e3d,	// (0x00046c10) list_calc_item_pane_g1_ParamLimits

0xc104,	// (0x00050ed7) mup_volume_pane_cp_g1

0x51ab,	// (0x00049f7e) main_touch_calib_pane_t3

0x51bf,	// (0x00049f92) main_touch_calib_pane_t4

0x51d3,	// (0x00049fa6) main_touch_calib_pane_t5

0xa532,	// (0x0004f305) aid_cell_size_toolbar2

0xa53a,	// (0x0004f30d) aid_popup3_width_pane

0xa546,	// (0x0004f319) aid_zoom_text_msg_primary

0x2658,	// (0x0004742b) vorec_t7

0x1da8,	// (0x00046b7b) bg_calc_paper_pane_g1_ParamLimits

0x1db4,	// (0x00046b87) bg_calc_paper_pane_g2_ParamLimits

0x1dc0,	// (0x00046b93) bg_calc_paper_pane_g3_ParamLimits

0x1dcc,	// (0x00046b9f) bg_calc_paper_pane_g4_ParamLimits

0x1dd8,	// (0x00046bab) bg_calc_paper_pane_g5_ParamLimits

0x1de4,	// (0x00046bb7) bg_calc_paper_pane_g6_ParamLimits

0x1df3,	// (0x00046bc6) bg_calc_paper_pane_g7_ParamLimits

0x1e02,	// (0x00046bd5) bg_calc_paper_pane_g8_ParamLimits

0xf0ce,	// (0x00053ea1) bg_calc_paper_pane_g_ParamLimits

0x1e15,	// (0x00046be8) calc_bg_paper_pane_g9_ParamLimits

0x1451,	// (0x00046224) image_qvga_pane_ParamLimits

0x1451,	// (0x00046224) image_qvga_pane

0x1b84,	// (0x00046957) bg_popup_sub_pane_cp04_ParamLimits

0xada8,	// (0x0004fb7b) popup_mup_playback_window_g1_ParamLimits

0xadb4,	// (0x0004fb87) popup_mup_playback_window_t1_ParamLimits

0xadc9,	// (0x0004fb9c) popup_mup_playback_window_t2_ParamLimits

0xf427,	// (0x000541fa) popup_mup_playback_window_t_ParamLimits

0x1c0d,	// (0x000469e0) main_mup2_pane_g3_ParamLimits

0x1c0d,	// (0x000469e0) main_mup2_pane_g3

0x2999,	// (0x0004776c) popup_toolbar_window_cp04

0xb14d,	// (0x0004ff20) popup_call2_audio_second_window_g3_ParamLimits

0xb14d,	// (0x0004ff20) popup_call2_audio_second_window_g3

0xb565,	// (0x00050338) popup_call2_audio_first_window_g4_ParamLimits

0xb565,	// (0x00050338) popup_call2_audio_first_window_g4

0xbb8c,	// (0x0005095f) popup_call2_audio_in_window_g4_ParamLimits

0xbb8c,	// (0x0005095f) popup_call2_audio_in_window_g4

0x43b9,	// (0x0004918c) aid_area_sk_bg_cut_ParamLimits

0x43b9,	// (0x0004918c) aid_area_sk_bg_cut

0xadde,	// (0x0004fbb1) aid_area_sk_bg_cut_2_ParamLimits

0xadde,	// (0x0004fbb1) aid_area_sk_bg_cut_2

0x128d,	// (0x00046060) aid_placing_details_win

0x128d,	// (0x00046060) aid_placing_details_win_2

0x1bff,	// (0x000469d2) camera2_autofocus_pane_g1_ParamLimits

0x13f6,	// (0x000461c9) popup_fixed_preview_cale_window_ParamLimits

0x13f6,	// (0x000461c9) popup_fixed_preview_cale_window

0xaac2,	// (0x0004f895) navi_slider_pane_g3

0xaacb,	// (0x0004f89e) navi_slider_pane_g4

0xaad4,	// (0x0004f8a7) navi_slider_pane_g5

0xaac2,	// (0x0004f895) navi_slider_pane_g6

0xaadd,	// (0x0004f8b0) navi_slider_pane_g7

0xac0b,	// (0x0004f9de) mup_scale_pane_g3

0xac14,	// (0x0004f9e7) mup_scale_pane_g4

0xac1d,	// (0x0004f9f0) mup_scale_pane_g5

0x415a,	// (0x00048f2d) mup_scale_pane_g6

0x4163,	// (0x00048f36) mup_scale_pane_g7

0x1cd1,	// (0x00046aa4) cams2_slider_pane_g3

0x1cd1,	// (0x00046aa4) cams2_slider_pane_g4

0x1cd1,	// (0x00046aa4) cams2_slider_pane_g5

0x1cd1,	// (0x00046aa4) cams2_slider_pane_g6

0x1cd1,	// (0x00046aa4) cams2_slider_pane_g7

0x1cd1,	// (0x00046aa4) camera2_autofocus_pane_cp_g1

0xbe9c,	// (0x00050c6f) bg_popup_preview_window_pane_cp02_ParamLimits

0xbe9c,	// (0x00050c6f) bg_popup_preview_window_pane_cp02

0xc6fb,	// (0x000514ce) list_fp_cale_pane_ParamLimits

0xc6fb,	// (0x000514ce) list_fp_cale_pane

0xc707,	// (0x000514da) popup_fixed_preview_cale_window_t1_ParamLimits

0xc707,	// (0x000514da) popup_fixed_preview_cale_window_t1

0x5878,	// (0x0004a64b) popup_fixed_preview_cale_window_t2_ParamLimits

0x5878,	// (0x0004a64b) popup_fixed_preview_cale_window_t2

0x588d,	// (0x0004a660) popup_fixed_preview_cale_window_t3_ParamLimits

0x588d,	// (0x0004a660) popup_fixed_preview_cale_window_t3

0x0002,

0xf6eb,	// (0x000544be) popup_fixed_preview_cale_window_t_ParamLimits

0xf6eb,	// (0x000544be) popup_fixed_preview_cale_window_t

0x58a2,	// (0x0004a675) list_single_fp_cale_pane_ParamLimits

0x58a2,	// (0x0004a675) list_single_fp_cale_pane

0xc725,	// (0x000514f8) list_single_fp_cale_pane_g1_ParamLimits

0xc725,	// (0x000514f8) list_single_fp_cale_pane_g1

0xc731,	// (0x00051504) list_single_fp_cale_pane_g2_ParamLimits

0xc731,	// (0x00051504) list_single_fp_cale_pane_g2

0x0002,

0xf6f2,	// (0x000544c5) list_single_fp_cale_pane_g_ParamLimits

0xf6f2,	// (0x000544c5) list_single_fp_cale_pane_g

0xc74a,	// (0x0005151d) list_single_fp_cale_pane_t1_ParamLimits

0xc74a,	// (0x0005151d) list_single_fp_cale_pane_t1

0xc75c,	// (0x0005152f) list_single_fp_cale_pane_t2_ParamLimits

0xc75c,	// (0x0005152f) list_single_fp_cale_pane_t2

0x0001,

0xf6f9,	// (0x000544cc) list_single_fp_cale_pane_t_ParamLimits

0xf6f9,	// (0x000544cc) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x128d,	// (0x00046060) main_dialer_pane

0x128d,	// (0x00046060) aid_cell_size_keypad

0x128d,	// (0x00046060) dialer_ne_pane

0x128d,	// (0x00046060) grid_dialer_command_1_pane

0x128d,	// (0x00046060) grid_dialer_command_2_pane

0x128d,	// (0x00046060) grid_dialer_keypad_pane

0x58b8,	// (0x0004a68b) bg_popup_call_pane_cp06_ParamLimits

0x58b8,	// (0x0004a68b) bg_popup_call_pane_cp06

0x58b8,	// (0x0004a68b) dialer_ne_clear_pane_ParamLimits

0x58b8,	// (0x0004a68b) dialer_ne_clear_pane

0x1cd1,	// (0x00046aa4) dialer_ne_pane_g1

0x1cef,	// (0x00046ac2) dialer_ne_pane_t1_ParamLimits

0x1cef,	// (0x00046ac2) dialer_ne_pane_t1

0x58c6,	// (0x0004a699) dialer_ne_pane_t2_ParamLimits

0x58c6,	// (0x0004a699) dialer_ne_pane_t2

0x58ee,	// (0x0004a6c1) dialer_ne_pane_t3_ParamLimits

0x58ee,	// (0x0004a6c1) dialer_ne_pane_t3

0x0002,

0xf6fe,	// (0x000544d1) dialer_ne_pane_t_ParamLimits

0xf6fe,	// (0x000544d1) dialer_ne_pane_t

0x58ee,	// (0x0004a6c1) dialer_ne_pane_t3_copy1_ParamLimits

0x58ee,	// (0x0004a6c1) dialer_ne_pane_t3_copy1

0xc78f,	// (0x00051562) cell_dialer_keypad_pane_ParamLimits

0xc78f,	// (0x00051562) cell_dialer_keypad_pane

0x1451,	// (0x00046224) cell_dialer_command_1_pane_ParamLimits

0x1451,	// (0x00046224) cell_dialer_command_1_pane

0xc7a6,	// (0x00051579) cell_dialer_command_2_pane_ParamLimits

0xc7a6,	// (0x00051579) cell_dialer_command_2_pane

0x1451,	// (0x00046224) bg_button_pane_cp02_ParamLimits

0x1451,	// (0x00046224) bg_button_pane_cp02

0x1bff,	// (0x000469d2) cell_dialer_keypad_pane_g1_ParamLimits

0x1bff,	// (0x000469d2) cell_dialer_keypad_pane_g1

0x1451,	// (0x00046224) bg_button_pane_cp03_ParamLimits

0x1451,	// (0x00046224) bg_button_pane_cp03

0x1bff,	// (0x000469d2) cell_dialer_command_1_pane_g1_ParamLimits

0x1bff,	// (0x000469d2) cell_dialer_command_1_pane_g1

0x128d,	// (0x00046060) bg_button_pane_cp04

0x1cd1,	// (0x00046aa4) cell_dialer_command_2_pane_g1

0x128d,	// (0x00046060) bg_button_pane_cp06

0x1cd1,	// (0x00046aa4) dialer_ne_clear_pane_g1

0xa98c,	// (0x0004f75f) navi_pane_g2

0xa9ba,	// (0x0004f78d) navi_pane_g3

0x0002,

0xf32f,	// (0x00054102) navi_pane_g

0xaa49,	// (0x0004f81c) navi_pane_mv_g2

0xaa70,	// (0x0004f843) navi_pane_mv_g5

0x3f3d,	// (0x00048d10) navi_pane_mv_t1

0x1d43,	// (0x00046b16) main_clock2_pane

0x1451,	// (0x00046224) main_clock2_list_pane_ParamLimits

0x1451,	// (0x00046224) main_clock2_list_pane

0x5984,	// (0x0004a757) main_clock2_pane_t1_ParamLimits

0x5984,	// (0x0004a757) main_clock2_pane_t1

0x59bf,	// (0x0004a792) main_clock2_pane_t2_ParamLimits

0x59bf,	// (0x0004a792) main_clock2_pane_t2

0x0004,

0xf70a,	// (0x000544dd) main_clock2_pane_t_ParamLimits

0xf70a,	// (0x000544dd) main_clock2_pane_t

0x5a5f,	// (0x0004a832) popup_clock_analogue_window_cp03_ParamLimits

0x5a5f,	// (0x0004a832) popup_clock_analogue_window_cp03

0x5a84,	// (0x0004a857) popup_clock_digital_window_cp02_ParamLimits

0x5a84,	// (0x0004a857) popup_clock_digital_window_cp02

0x5afd,	// (0x0004a8d0) main_clock2_list_single_pane_ParamLimits

0x5afd,	// (0x0004a8d0) main_clock2_list_single_pane

0x2610,	// (0x000473e3) list_highlight_pane_cp05

0xc7e9,	// (0x000515bc) main_clock2_list_single_pane_t1

0x2999,	// (0x0004776c) popup_toolbar_window_cp04_ParamLimits

0x1c0d,	// (0x000469e0) camera2_autofocus_pane_g2_ParamLimits

0x1c0d,	// (0x000469e0) camera2_autofocus_pane_g2

0x1c0d,	// (0x000469e0) camera2_autofocus_pane_g3_ParamLimits

0x1c0d,	// (0x000469e0) camera2_autofocus_pane_g3

0x1c0d,	// (0x000469e0) camera2_autofocus_pane_g4_ParamLimits

0x1c0d,	// (0x000469e0) camera2_autofocus_pane_g4

0x1c0d,	// (0x000469e0) camera2_autofocus_pane_g5_ParamLimits

0x1c0d,	// (0x000469e0) camera2_autofocus_pane_g5

0x0004,

0xf64e,	// (0x00054421) camera2_autofocus_pane_g_ParamLimits

0xf64e,	// (0x00054421) camera2_autofocus_pane_g

0x5208,	// (0x00049fdb) camera2_autofocus_pane_cp_g2

0x5210,	// (0x00049fe3) camera2_autofocus_pane_cp_g3

0x5218,	// (0x00049feb) camera2_autofocus_pane_cp_g4

0x5220,	// (0x00049ff3) camera2_autofocus_pane_cp_g5

0x0004,

0xf6b4,	// (0x00054487) camera2_autofocus_pane_cp_g

0x128d,	// (0x00046060) popup_dialer_spcha_window

0x128d,	// (0x00046060) bg_popup_sub_pane_cp07

0x128d,	// (0x00046060) list_spcha_pane

0xc7f7,	// (0x000515ca) list_single_spcha_pane_ParamLimits

0xc7f7,	// (0x000515ca) list_single_spcha_pane

0x128d,	// (0x00046060) list_highlight_pane_cp06

0x3bc4,	// (0x00048997) list_single_spcha_pane_t1

0xb936,	// (0x00050709) popup_call2_audio_out_window_g4_ParamLimits

0xb936,	// (0x00050709) popup_call2_audio_out_window_g4

0x128d,	// (0x00046060) main_imed2_pane

0xbec2,	// (0x00050c95) popup_imed_adjust2_window

0x4ba7,	// (0x0004997a) popup_imed_trans_window_ParamLimits

0x4ba7,	// (0x0004997a) popup_imed_trans_window

0xc1d9,	// (0x00050fac) popup_blid_sat_info2_window_t1

0xc1e7,	// (0x00050fba) popup_blid_sat_info2_window_t2

0x000a,

0xf5e3,	// (0x000543b6) popup_blid_sat_info2_window_t

0x5bae,	// (0x0004a981) aid_size_cell_colour_35

0x5bce,	// (0x0004a9a1) aid_size_cell_colour_112

0x5bee,	// (0x0004a9c1) aid_size_cell_effect

0xab9b,	// (0x0004f96e) bg_tb_trans_pane_cp02

0x3a77,	// (0x0004884a) heading_imed_pane

0x5c0e,	// (0x0004a9e1) listscroll_imed_pane

0xc809,	// (0x000515dc) heading_imed_pane_g1

0xc811,	// (0x000515e4) heading_imed_pane_t1

0xc81f,	// (0x000515f2) grid_imed_colour_35_pane_ParamLimits

0xc81f,	// (0x000515f2) grid_imed_colour_35_pane

0x5c1a,	// (0x0004a9ed) grid_imed_effect_pane

0xc837,	// (0x0005160a) list_imed_aspect_pane

0x5c30,	// (0x0004aa03) scroll_pane_cp027_ParamLimits

0x5c30,	// (0x0004aa03) scroll_pane_cp027

0x5c41,	// (0x0004aa14) cell_imed_effect_pane_ParamLimits

0x5c41,	// (0x0004aa14) cell_imed_effect_pane

0xc83f,	// (0x00051612) cell_imed_colour_pane_ParamLimits

0xc83f,	// (0x00051612) cell_imed_colour_pane

0xc881,	// (0x00051654) cell_imed_colour_pane_g1_ParamLimits

0xc881,	// (0x00051654) cell_imed_colour_pane_g1

0xc892,	// (0x00051665) hgihlgiht_grid_pane_cp016_ParamLimits

0xc892,	// (0x00051665) hgihlgiht_grid_pane_cp016

0x5c68,	// (0x0004aa3b) cell_imed_effect_pane_g1

0x5c70,	// (0x0004aa43) grid_highlight_pane_cp017

0xc8a3,	// (0x00051676) list_imed_single_pane_ParamLimits

0xc8a3,	// (0x00051676) list_imed_single_pane

0x128d,	// (0x00046060) list_highlight_pane_cp07

0xc8b8,	// (0x0005168b) list_imed_aspect_pane_comp1_t1

0xab9b,	// (0x0004f96e) bg_tb_trans_pane_cp05

0xc8da,	// (0x000516ad) popup_imed_adjust2_window_g1

0xc901,	// (0x000516d4) popup_imed_adjust2_window_t1

0xc919,	// (0x000516ec) slider_imed_adjust_pane

0xc92d,	// (0x00051700) slider_imed_adjust_pane_g1

0xc93d,	// (0x00051710) slider_imed_adjust_pane_g2

0xc94d,	// (0x00051720) slider_imed_adjust_pane_g3

0xc95e,	// (0x00051731) slider_imed_adjust_pane_g4

0x0003,

0xf727,	// (0x000544fa) slider_imed_adjust_pane_g

0x5c79,	// (0x0004aa4c) aid_size_cell_clipart2

0x5c85,	// (0x0004aa58) grid_imed_clipart_pane

0xac2e,	// (0x0004fa01) scroll_pane_cp031

0x5c8f,	// (0x0004aa62) cell_imed_clipart_pane_ParamLimits

0x5c8f,	// (0x0004aa62) cell_imed_clipart_pane

0x5cb1,	// (0x0004aa84) cell_imed_clipart_pane_g1

0x128d,	// (0x00046060) grid_highlight_pane_cp014

0x5960,	// (0x0004a733) main_clock2_pane_g1_ParamLimits

0x5960,	// (0x0004a733) main_clock2_pane_g1

0x5aa4,	// (0x0004a877) aid_call2_pane_cp10

0x5ab6,	// (0x0004a889) aid_call_pane_cp10

0xa8eb,	// (0x0004f6be) popup_clock_analogue_window_cp10_g1

0xa8eb,	// (0x0004f6be) popup_clock_analogue_window_cp10_g2

0x5ac8,	// (0x0004a89b) popup_clock_analogue_window_cp10_g3

0x5ac8,	// (0x0004a89b) popup_clock_analogue_window_cp10_g4

0xa8eb,	// (0x0004f6be) popup_clock_analogue_window_cp10_g5

0x0004,

0xf715,	// (0x000544e8) popup_clock_analogue_window_cp10_g

0x5ade,	// (0x0004a8b1) popup_clock_analogue_window_cp10_t1

0x5b0f,	// (0x0004a8e2) clock_digital_number_pane_cp10_ParamLimits

0x5b0f,	// (0x0004a8e2) clock_digital_number_pane_cp10

0x5b27,	// (0x0004a8fa) clock_digital_number_pane_cp11_ParamLimits

0x5b27,	// (0x0004a8fa) clock_digital_number_pane_cp11

0x5b3f,	// (0x0004a912) clock_digital_number_pane_cp12_ParamLimits

0x5b3f,	// (0x0004a912) clock_digital_number_pane_cp12

0x5b59,	// (0x0004a92c) clock_digital_number_pane_cp13_ParamLimits

0x5b59,	// (0x0004a92c) clock_digital_number_pane_cp13

0x5b73,	// (0x0004a946) clock_digital_separator_pane_cp10_ParamLimits

0x5b73,	// (0x0004a946) clock_digital_separator_pane_cp10

0x5b8d,	// (0x0004a960) popup_clock_digital_window_cp02_t1_ParamLimits

0x5b8d,	// (0x0004a960) popup_clock_digital_window_cp02_t1

0x1b7c,	// (0x0004694f) clock_digital_number_pane_cp10_g1

0x1b7c,	// (0x0004694f) clock_digital_number_pane_cp10_g2

0x0001,

0xf730,	// (0x00054503) clock_digital_number_pane_cp10_g

0x1b7c,	// (0x0004694f) clock_digital_separator_pane_cp10_g1

0x1b7c,	// (0x0004694f) clock_digital_separator_pane_g2_cp10

0xaa78,	// (0x0004f84b) navi_pane_vded_g4

0xaa81,	// (0x0004f854) navi_pane_vded_g5

0xaa8a,	// (0x0004f85d) navi_pane_vded_t1

0x128d,	// (0x00046060) main_vded_pane

0x5cba,	// (0x0004aa8d) main_vded_pane_g1

0x5cc4,	// (0x0004aa97) main_vded_pane_g2

0x5cce,	// (0x0004aaa1) main_vded_pane_g3

0x0002,

0xf735,	// (0x00054508) main_vded_pane_g

0x5cd8,	// (0x0004aaab) main_vded_pane_t1

0x5ce6,	// (0x0004aab9) main_vded_pane_t2

0x0001,

0xf73c,	// (0x0005450f) main_vded_pane_t

0x5cf4,	// (0x0004aac7) vded_slider_pane

0x5cfc,	// (0x0004aacf) vded_video_pane

0xc96f,	// (0x00051742) vded_video_pane_g1

0x5d04,	// (0x0004aad7) vded_video_pane_g2

0x1cd1,	// (0x00046aa4) vded_video_pane_g3

0x0002,

0xf741,	// (0x00054514) vded_video_pane_g

0xc979,	// (0x0005174c) vded_slider_pane_g1

0xc104,	// (0x00050ed7) vded_slider_pane_g2

0xc982,	// (0x00051755) vded_slider_pane_g3

0xc98b,	// (0x0005175e) vded_slider_pane_g4

0xc994,	// (0x00051767) vded_slider_pane_g5

0x0004,

0xf748,	// (0x0005451b) vded_slider_pane_g

0x57c4,	// (0x0004a597) mup3_rocker_pane_ParamLimits

0x57c4,	// (0x0004a597) mup3_rocker_pane

0x5d0d,	// (0x0004aae0) mup3_control_keys_pane_g1

0x5d15,	// (0x0004aae8) mup3_control_keys_pane_g2

0x5d1d,	// (0x0004aaf0) mup3_control_keys_pane_g3

0x5d25,	// (0x0004aaf8) mup3_control_keys_pane_g4

0x0003,

0xf753,	// (0x00054526) mup3_control_keys_pane_g

0x142d,	// (0x00046200) popup_toolbar2_fixed_window_cp01_ParamLimits

0x142d,	// (0x00046200) popup_toolbar2_fixed_window_cp01

0x57f8,	// (0x0004a5cb) popup_toolbar2_fixed_window_cp02_ParamLimits

0x57f8,	// (0x0004a5cb) popup_toolbar2_fixed_window_cp02

0xb2bf,	// (0x00050092) popup_call2_audio_second_window_t4_ParamLimits

0xb2bf,	// (0x00050092) popup_call2_audio_second_window_t4

0xb7fb,	// (0x000505ce) popup_call2_audio_first_window_t6_ParamLimits

0xb7fb,	// (0x000505ce) popup_call2_audio_first_window_t6

0xba39,	// (0x0005080c) popup_call2_audio_out_window_t6_ParamLimits

0xba39,	// (0x0005080c) popup_call2_audio_out_window_t6

0x128d,	// (0x00046060) main_vitu_pane

0x1451,	// (0x00046224) aid_size_cell_itu_ParamLimits

0x1451,	// (0x00046224) aid_size_cell_itu

0x1451,	// (0x00046224) bg_popup_window_pane_cp08_ParamLimits

0x1451,	// (0x00046224) bg_popup_window_pane_cp08

0x1451,	// (0x00046224) field_vitu_entry_pane_ParamLimits

0x1451,	// (0x00046224) field_vitu_entry_pane

0x1451,	// (0x00046224) grid_vitu_function_pane_ParamLimits

0x1451,	// (0x00046224) grid_vitu_function_pane

0x1451,	// (0x00046224) grid_vitu_itu_pane_ParamLimits

0x1451,	// (0x00046224) grid_vitu_itu_pane

0x1451,	// (0x00046224) cell_vitu_itu_pane_ParamLimits

0x1451,	// (0x00046224) cell_vitu_itu_pane

0x1451,	// (0x00046224) cell_vitu_function_pane_ParamLimits

0x1451,	// (0x00046224) cell_vitu_function_pane

0x1451,	// (0x00046224) bg_popup_sub_pane_cp08_ParamLimits

0x1451,	// (0x00046224) bg_popup_sub_pane_cp08

0x1cdb,	// (0x00046aae) field_vitu_entry_pane_t1_ParamLimits

0x1cdb,	// (0x00046aae) field_vitu_entry_pane_t1

0xc99d,	// (0x00051770) field_vitu_entry_pane_t2_ParamLimits

0xc99d,	// (0x00051770) field_vitu_entry_pane_t2

0x0001,

0xf75c,	// (0x0005452f) field_vitu_entry_pane_t_ParamLimits

0xf75c,	// (0x0005452f) field_vitu_entry_pane_t

0xc02b,	// (0x00050dfe) bg_button_pane_cp05_ParamLimits

0xc02b,	// (0x00050dfe) bg_button_pane_cp05

0xc9ba,	// (0x0005178d) cell_vitu_itu_pane_g1

0xab87,	// (0x0004f95a) cell_vitu_itu_pane_t1_ParamLimits

0xab87,	// (0x0004f95a) cell_vitu_itu_pane_t1

0xab87,	// (0x0004f95a) cell_vitu_itu_pane_t2_ParamLimits

0xab87,	// (0x0004f95a) cell_vitu_itu_pane_t2

0x0002,

0xf761,	// (0x00054534) cell_vitu_itu_pane_t_ParamLimits

0xf761,	// (0x00054534) cell_vitu_itu_pane_t

0x128d,	// (0x00046060) bg_button_pane_cp07

0x1cd1,	// (0x00046aa4) cell_vitu_function_pane_g1

0xa59f,	// (0x0004f372) main_calc_pane_g1

0x12bb,	// (0x0004608e) aid_visual_content_pane

0x128d,	// (0x00046060) main_vradio_pane

0x1bff,	// (0x000469d2) main_vradio_pane_g1_ParamLimits

0x1bff,	// (0x000469d2) main_vradio_pane_g1

0x1c0d,	// (0x000469e0) main_vradio_pane_g2_ParamLimits

0x1c0d,	// (0x000469e0) main_vradio_pane_g2

0x0001,

0xf768,	// (0x0005453b) main_vradio_pane_g_ParamLimits

0xf768,	// (0x0005453b) main_vradio_pane_g

0x1cdb,	// (0x00046aae) main_vradio_pane_t1_ParamLimits

0x1cdb,	// (0x00046aae) main_vradio_pane_t1

0x1cdb,	// (0x00046aae) main_vradio_pane_t2_ParamLimits

0x1cdb,	// (0x00046aae) main_vradio_pane_t2

0x1cef,	// (0x00046ac2) main_vradio_pane_t3_ParamLimits

0x1cef,	// (0x00046ac2) main_vradio_pane_t3

0x0002,

0xf76d,	// (0x00054540) main_vradio_pane_t_ParamLimits

0xf76d,	// (0x00054540) main_vradio_pane_t

0x1451,	// (0x00046224) vradio_rocker_control_pane_ParamLimits

0x1451,	// (0x00046224) vradio_rocker_control_pane

0x1451,	// (0x00046224) vradio_station_info_pane_ParamLimits

0x1451,	// (0x00046224) vradio_station_info_pane

0x1451,	// (0x00046224) vradio_frequency_info_pane_ParamLimits

0x1451,	// (0x00046224) vradio_frequency_info_pane

0x1cd1,	// (0x00046aa4) vradio_station_info_pane_g1

0xab87,	// (0x0004f95a) vradio_station_info_pane_t1_ParamLimits

0xab87,	// (0x0004f95a) vradio_station_info_pane_t1

0x1cef,	// (0x00046ac2) vradio_station_info_pane_t2_ParamLimits

0x1cef,	// (0x00046ac2) vradio_station_info_pane_t2

0x0001,

0xf774,	// (0x00054547) vradio_station_info_pane_t_ParamLimits

0xf774,	// (0x00054547) vradio_station_info_pane_t

0x128d,	// (0x00046060) vradio_tuning_pane

0x5d35,	// (0x0004ab08) vradio_rocker_control_pane_g1

0xc9d6,	// (0x000517a9) vradio_rocker_control_pane_g2

0x5d3f,	// (0x0004ab12) vradio_rocker_control_pane_g3

0x5d49,	// (0x0004ab1c) vradio_rocker_control_pane_g4

0x5d53,	// (0x0004ab26) vradio_rocker_control_pane_g5

0x0004,

0xf779,	// (0x0005454c) vradio_rocker_control_pane_g

0x1cd1,	// (0x00046aa4) vradio_frequency_info_pane_g1

0x1cdb,	// (0x00046aae) vradio_frequency_info_pane_t1_ParamLimits

0x1cdb,	// (0x00046aae) vradio_frequency_info_pane_t1

0x5d5d,	// (0x0004ab30) vradio_tuning_pane_g1

0x5d68,	// (0x0004ab3b) vradio_tuning_pane_t1

0xa55e,	// (0x0004f331) area_side_right_pane_ParamLimits

0xa55e,	// (0x0004f331) area_side_right_pane

0xbe63,	// (0x00050c36) status_small_pane_g1

0xbe6b,	// (0x00050c3e) status_small_pane_g2

0xbe74,	// (0x00050c47) status_small_pane_g3

0xbe7d,	// (0x00050c50) status_small_pane_g4

0x0003,

0xf545,	// (0x00054318) status_small_pane_g

0xbe86,	// (0x00050c59) status_small_pane_t1

0x128d,	// (0x00046060) main_video3_pane

0x128d,	// (0x00046060) cams_zoom_vslider_pane

0xc9de,	// (0x000517b1) image3_wide_pane_ParamLimits

0xc9de,	// (0x000517b1) image3_wide_pane

0x128d,	// (0x00046060) image3_wide_small_pane

0xc9f8,	// (0x000517cb) main_video3_pane_g1_ParamLimits

0xc9f8,	// (0x000517cb) main_video3_pane_g1

0xc9f8,	// (0x000517cb) main_video3_pane_g2_ParamLimits

0xc9f8,	// (0x000517cb) main_video3_pane_g2

0x0001,

0xf784,	// (0x00054557) main_video3_pane_g_ParamLimits

0xf784,	// (0x00054557) main_video3_pane_g

0xca16,	// (0x000517e9) main_video3_pane_t1_ParamLimits

0xca16,	// (0x000517e9) main_video3_pane_t1

0xca16,	// (0x000517e9) main_video3_pane_t2_ParamLimits

0xca16,	// (0x000517e9) main_video3_pane_t2

0xca16,	// (0x000517e9) main_video3_pane_t3_ParamLimits

0xca16,	// (0x000517e9) main_video3_pane_t3

0x0002,

0xf789,	// (0x0005455c) main_video3_pane_t_ParamLimits

0xf789,	// (0x0005455c) main_video3_pane_t

0x1cd1,	// (0x00046aa4) cams_zoom_vslider_pane_g1

0x1cd1,	// (0x00046aa4) cams_zoom_vslider_pane_g2

0x0001,

0xf0af,	// (0x00053e82) cams_zoom_vslider_pane_g

0x128d,	// (0x00046060) small_slider_vertical_pane

0x1cd1,	// (0x00046aa4) small_slider_vertical_pane_g1

0x1cd1,	// (0x00046aa4) small_slider_vertical_pane_g2

0xca3d,	// (0x00051810) small_slider_vertical_pane_g3

0x0002,

0xf790,	// (0x00054563) small_slider_vertical_pane_g

0x128d,	// (0x00046060) main_hwr_training_pane

0xca46,	// (0x00051819) hwr_training_instruct_pane_ParamLimits

0xca46,	// (0x00051819) hwr_training_instruct_pane

0x5d77,	// (0x0004ab4a) hwr_training_navi_pane_ParamLimits

0x5d77,	// (0x0004ab4a) hwr_training_navi_pane

0x5d96,	// (0x0004ab69) hwr_training_write_pane_ParamLimits

0x5d96,	// (0x0004ab69) hwr_training_write_pane

0x128d,	// (0x00046060) bg_frame_shadow_pane

0xca7d,	// (0x00051850) hwr_training_write_pane_g1

0xca85,	// (0x00051858) hwr_training_write_pane_g2

0xca8d,	// (0x00051860) hwr_training_write_pane_g3

0xca95,	// (0x00051868) hwr_training_write_pane_g4

0xca9d,	// (0x00051870) hwr_training_write_pane_g5

0xcaa5,	// (0x00051878) hwr_training_write_pane_g6

0xcaad,	// (0x00051880) hwr_training_write_pane_g7

0x0006,

0xf797,	// (0x0005456a) hwr_training_write_pane_g

0xcab5,	// (0x00051888) hwr_training_navi_pane_g1_ParamLimits

0xcab5,	// (0x00051888) hwr_training_navi_pane_g1

0xcac7,	// (0x0005189a) hwr_training_navi_pane_g2_ParamLimits

0xcac7,	// (0x0005189a) hwr_training_navi_pane_g2

0xcad9,	// (0x000518ac) hwr_training_navi_pane_g3_ParamLimits

0xcad9,	// (0x000518ac) hwr_training_navi_pane_g3

0xcae9,	// (0x000518bc) hwr_training_navi_pane_g4_ParamLimits

0xcae9,	// (0x000518bc) hwr_training_navi_pane_g4

0x0004,

0xf7a6,	// (0x00054579) hwr_training_navi_pane_g_ParamLimits

0xf7a6,	// (0x00054579) hwr_training_navi_pane_g

0xcaf6,	// (0x000518c9) hwr_training_navi_pane_t1

0x5de0,	// (0x0004abb3) list_single_hwr_training_instruct_pane_ParamLimits

0x5de0,	// (0x0004abb3) list_single_hwr_training_instruct_pane

0xcb04,	// (0x000518d7) list_single_hwr_training_instruct_pane_t1

0xc2da,	// (0x000510ad) bg_frame_shadow_pane_g1

0xcb13,	// (0x000518e6) bg_frame_shadow_pane_g2

0xcb1b,	// (0x000518ee) bg_frame_shadow_pane_g3

0xcb23,	// (0x000518f6) bg_frame_shadow_pane_g4

0xcb2b,	// (0x000518fe) bg_frame_shadow_pane_g5

0xcb33,	// (0x00051906) bg_frame_shadow_pane_g6

0xcb3b,	// (0x0005190e) bg_frame_shadow_pane_g7

0x1f77,	// (0x00046d4a) bg_frame_shadow_pane_g8

0x0007,

0xf7b1,	// (0x00054584) bg_frame_shadow_pane_g

0x128d,	// (0x00046060) main_video_tele_dialer_pane

0x5df6,	// (0x0004abc9) aid_size_cell_video_keypad_ParamLimits

0x5df6,	// (0x0004abc9) aid_size_cell_video_keypad

0x5e10,	// (0x0004abe3) grid_video_dialer_keypad_pane_ParamLimits

0x5e10,	// (0x0004abe3) grid_video_dialer_keypad_pane

0x5e5e,	// (0x0004ac31) video_down_pane_cp_ParamLimits

0x5e5e,	// (0x0004ac31) video_down_pane_cp

0x5e90,	// (0x0004ac63) cell_video_dialer_keypad_pane_ParamLimits

0x5e90,	// (0x0004ac63) cell_video_dialer_keypad_pane

0xcb43,	// (0x00051916) bg_button_pane_cp08_ParamLimits

0xcb43,	// (0x00051916) bg_button_pane_cp08

0x5eb2,	// (0x0004ac85) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5eb2,	// (0x0004ac85) cell_video_dialer_keypad_pane_g1

0x57ae,	// (0x0004a581) mup3_rocker2_pane_ParamLimits

0x57ae,	// (0x0004a581) mup3_rocker2_pane

0x1cd1,	// (0x00046aa4) mup3_rocker2_pane_g1

0x4a96,	// (0x00049869) main_dialer2_pane

0x128d,	// (0x00046060) main_mp4_pane

0xcb6d,	// (0x00051940) main_mp4_pane_g1_ParamLimits

0xcb6d,	// (0x00051940) main_mp4_pane_g1

0xcb6d,	// (0x00051940) main_mp4_pane_g2_ParamLimits

0xcb6d,	// (0x00051940) main_mp4_pane_g2

0x5eec,	// (0x0004acbf) main_mp4_pane_g3_ParamLimits

0x5eec,	// (0x0004acbf) main_mp4_pane_g3

0xcb8b,	// (0x0005195e) main_mp4_pane_g4_ParamLimits

0xcb8b,	// (0x0005195e) main_mp4_pane_g4

0xcbb3,	// (0x00051986) main_mp4_pane_g5_ParamLimits

0xcbb3,	// (0x00051986) main_mp4_pane_g5

0x0007,

0xf7d1,	// (0x000545a4) main_mp4_pane_g_ParamLimits

0xf7d1,	// (0x000545a4) main_mp4_pane_g

0xcc1b,	// (0x000519ee) main_mp4_pane_t1_ParamLimits

0xcc1b,	// (0x000519ee) main_mp4_pane_t1

0xcc7d,	// (0x00051a50) main_mp4_pane_t2_ParamLimits

0xcc7d,	// (0x00051a50) main_mp4_pane_t2

0xcce1,	// (0x00051ab4) main_mp4_pane_t3_ParamLimits

0xcce1,	// (0x00051ab4) main_mp4_pane_t3

0xcd3f,	// (0x00051b12) main_mp4_pane_t4_ParamLimits

0xcd3f,	// (0x00051b12) main_mp4_pane_t4

0x0003,

0xf7e2,	// (0x000545b5) main_mp4_pane_t_ParamLimits

0xf7e2,	// (0x000545b5) main_mp4_pane_t

0xcd9d,	// (0x00051b70) mp4_progress_pane_ParamLimits

0xcd9d,	// (0x00051b70) mp4_progress_pane

0xcdd1,	// (0x00051ba4) mp4_rocker_pane_ParamLimits

0xcdd1,	// (0x00051ba4) mp4_rocker_pane

0xd407,	// (0x000521da) mp4_progress_pane_t1

0xd429,	// (0x000521fc) mp4_progress_pane_t2

0x0001,

0xf7eb,	// (0x000545be) mp4_progress_pane_t

0xd44b,	// (0x0005221e) mup_progress_pane_cp04

0x1cd1,	// (0x00046aa4) mp4_rocker_pane_g1

0x1451,	// (0x00046224) aid_cell_size_keypad2_ParamLimits

0x1451,	// (0x00046224) aid_cell_size_keypad2

0x1451,	// (0x00046224) dialer2_ne_pane_ParamLimits

0x1451,	// (0x00046224) dialer2_ne_pane

0x1451,	// (0x00046224) grid_dialer2_keypad_pane_ParamLimits

0x1451,	// (0x00046224) grid_dialer2_keypad_pane

0xc02b,	// (0x00050dfe) bg_popup_call_pane_cp07_ParamLimits

0xc02b,	// (0x00050dfe) bg_popup_call_pane_cp07

0x5f1c,	// (0x0004acef) dialer2_ne_pane_t1_ParamLimits

0x5f1c,	// (0x0004acef) dialer2_ne_pane_t1

0x5f5b,	// (0x0004ad2e) cell_dialer2_keypad_pane_ParamLimits

0x5f5b,	// (0x0004ad2e) cell_dialer2_keypad_pane

0xc02b,	// (0x00050dfe) bg_button_pane_pane_cp04_ParamLimits

0xc02b,	// (0x00050dfe) bg_button_pane_pane_cp04

0x1bff,	// (0x000469d2) cell_dialer2_keypad_pane_g1_ParamLimits

0x1bff,	// (0x000469d2) cell_dialer2_keypad_pane_g1

0x285b,	// (0x0004762e) aid_placing_vt_set_content_ParamLimits

0x285b,	// (0x0004762e) aid_placing_vt_set_content

0x2883,	// (0x00047656) aid_placing_vt_set_title_ParamLimits

0x2883,	// (0x00047656) aid_placing_vt_set_title

0x128d,	// (0x00046060) main_image3_pane

0x5fd0,	// (0x0004ada3) area_side_right_pane_cp01_ParamLimits

0x5fd0,	// (0x0004ada3) area_side_right_pane_cp01

0x5fe7,	// (0x0004adba) main_image3_pane_g1_ParamLimits

0x5fe7,	// (0x0004adba) main_image3_pane_g1

0x5ff5,	// (0x0004adc8) main_image3_pane_g2_ParamLimits

0x5ff5,	// (0x0004adc8) main_image3_pane_g2

0x601d,	// (0x0004adf0) main_image3_pane_g3_ParamLimits

0x601d,	// (0x0004adf0) main_image3_pane_g3

0x6047,	// (0x0004ae1a) main_image3_pane_g4_ParamLimits

0x6047,	// (0x0004ae1a) main_image3_pane_g4

0x0003,

0xf7fa,	// (0x000545cd) main_image3_pane_g_ParamLimits

0xf7fa,	// (0x000545cd) main_image3_pane_g

0x6071,	// (0x0004ae44) main_image3_pane_t1_ParamLimits

0x6071,	// (0x0004ae44) main_image3_pane_t1

0x60c9,	// (0x0004ae9c) main_image3_pane_t2_ParamLimits

0x60c9,	// (0x0004ae9c) main_image3_pane_t2

0x611b,	// (0x0004aeee) main_image3_pane_t3_ParamLimits

0x611b,	// (0x0004aeee) main_image3_pane_t3

0x0003,

0xf803,	// (0x000545d6) main_image3_pane_t_ParamLimits

0xf803,	// (0x000545d6) main_image3_pane_t

0x1451,	// (0x00046224) grid_sctrl_middle_pane_cp01_ParamLimits

0x1451,	// (0x00046224) grid_sctrl_middle_pane_cp01

0x61a3,	// (0x0004af76) cell_sctrl_middle_pane_cp01_ParamLimits

0x61a3,	// (0x0004af76) cell_sctrl_middle_pane_cp01

0x61c0,	// (0x0004af93) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x61c0,	// (0x0004af93) cell_sctrl_middle_pane_cp01_g1

0x128d,	// (0x00046060) main_call4_pane

0x61d6,	// (0x0004afa9) aid_size_button_call4_ParamLimits

0x61d6,	// (0x0004afa9) aid_size_button_call4

0x6209,	// (0x0004afdc) call4_windows_pane_ParamLimits

0x6209,	// (0x0004afdc) call4_windows_pane

0x6228,	// (0x0004affb) grid_call4_button_pane_ParamLimits

0x6228,	// (0x0004affb) grid_call4_button_pane

0x625b,	// (0x0004b02e) call4_windows_conf_pane

0x6270,	// (0x0004b043) popup_call4_audio_first_window_ParamLimits

0x6270,	// (0x0004b043) popup_call4_audio_first_window

0x62c0,	// (0x0004b093) popup_call4_audio_second_window_ParamLimits

0x62c0,	// (0x0004b093) popup_call4_audio_second_window

0x62d7,	// (0x0004b0aa) popup_call4_audio_wait_window_ParamLimits

0x62d7,	// (0x0004b0aa) popup_call4_audio_wait_window

0x62e5,	// (0x0004b0b8) cell_call4_button_pane_ParamLimits

0x62e5,	// (0x0004b0b8) cell_call4_button_pane

0x630a,	// (0x0004b0dd) bg_button_pane_cp09_ParamLimits

0x630a,	// (0x0004b0dd) bg_button_pane_cp09

0x6316,	// (0x0004b0e9) cell_call4_button_pane_g1_ParamLimits

0x6316,	// (0x0004b0e9) cell_call4_button_pane_g1

0x633c,	// (0x0004b10f) cell_call4_button_pane_t1_ParamLimits

0x633c,	// (0x0004b10f) cell_call4_button_pane_t1

0xd494,	// (0x00052267) popup_call4_audio_conf_window_ParamLimits

0xd494,	// (0x00052267) popup_call4_audio_conf_window

0x580e,	// (0x0004a5e1) mup3_progress_pane_t1_ParamLimits

0x582d,	// (0x0004a600) mup3_progress_pane_t2_ParamLimits

0xc6b8,	// (0x0005148b) mup3_progress_pane_t3_ParamLimits

0xf6dd,	// (0x000544b0) mup3_progress_pane_t_ParamLimits

0xc6d5,	// (0x000514a8) mup_progress_pane_cp03_ParamLimits

0x5d2d,	// (0x0004ab00) mup3_control_keys_pane_g4_copy1

0xcdd1,	// (0x00051ba4) mp4_rocker2_pane_ParamLimits

0xcdd1,	// (0x00051ba4) mp4_rocker2_pane

0xce49,	// (0x00051c1c) mp4_rocker2_pane_g1

0xce49,	// (0x00051c1c) mp4_rocker2_pane_g2

0xce49,	// (0x00051c1c) mp4_rocker2_pane_g3

0xce49,	// (0x00051c1c) mp4_rocker2_pane_g4

0xce49,	// (0x00051c1c) mp4_rocker2_pane_g5

0x0004,

0xf80c,	// (0x000545df) mp4_rocker2_pane_g

0x128d,	// (0x00046060) main_camera4_pane

0x128d,	// (0x00046060) main_video4_pane

0x5e2c,	// (0x0004abff) main_video_tele_dialer_pane_t1_ParamLimits

0x5e2c,	// (0x0004abff) main_video_tele_dialer_pane_t1

0x5e45,	// (0x0004ac18) main_video_tele_dialer_pane_t2_ParamLimits

0x5e45,	// (0x0004ac18) main_video_tele_dialer_pane_t2

0x0001,

0xf7c2,	// (0x00054595) main_video_tele_dialer_pane_t_ParamLimits

0xf7c2,	// (0x00054595) main_video_tele_dialer_pane_t

0x637e,	// (0x0004b151) cam4_autofocus_pane_ParamLimits

0x637e,	// (0x0004b151) cam4_autofocus_pane

0x6394,	// (0x0004b167) cam4_image_uncrop_pane_ParamLimits

0x6394,	// (0x0004b167) cam4_image_uncrop_pane

0x63ae,	// (0x0004b181) cam4_indicators_pane_ParamLimits

0x63ae,	// (0x0004b181) cam4_indicators_pane

0x63d9,	// (0x0004b1ac) main_camera4_pane_g1_ParamLimits

0x63d9,	// (0x0004b1ac) main_camera4_pane_g1

0x63eb,	// (0x0004b1be) main_camera4_pane_g2_ParamLimits

0x63eb,	// (0x0004b1be) main_camera4_pane_g2

0x63fe,	// (0x0004b1d1) main_camera4_pane_g3_ParamLimits

0x63fe,	// (0x0004b1d1) main_camera4_pane_g3

0x6411,	// (0x0004b1e4) main_camera4_pane_g4_ParamLimits

0x6411,	// (0x0004b1e4) main_camera4_pane_g4

0x6424,	// (0x0004b1f7) main_camera4_pane_g5_ParamLimits

0x6424,	// (0x0004b1f7) main_camera4_pane_g5

0x0005,

0xf817,	// (0x000545ea) main_camera4_pane_g_ParamLimits

0xf817,	// (0x000545ea) main_camera4_pane_g

0x6448,	// (0x0004b21b) main_camera4_pane_t1_ParamLimits

0x6448,	// (0x0004b21b) main_camera4_pane_t1

0x1bff,	// (0x000469d2) bg_tb_trans_pane_cp06

0xce75,	// (0x00051c48) cam4_indicators_pane_g1

0xce86,	// (0x00051c59) cam4_indicators_pane_g2

0x0002,

0xf832,	// (0x00054605) cam4_indicators_pane_g

0xce9e,	// (0x00051c71) cam4_indicators_pane_t1

0x64ac,	// (0x0004b27f) main_video4_pane_g1_ParamLimits

0x64ac,	// (0x0004b27f) main_video4_pane_g1

0x64bb,	// (0x0004b28e) main_video4_pane_g2_ParamLimits

0x64bb,	// (0x0004b28e) main_video4_pane_g2

0x64ca,	// (0x0004b29d) main_video4_pane_g3_ParamLimits

0x64ca,	// (0x0004b29d) main_video4_pane_g3

0x64d9,	// (0x0004b2ac) main_video4_pane_g4_ParamLimits

0x64d9,	// (0x0004b2ac) main_video4_pane_g4

0x0004,

0xf839,	// (0x0005460c) main_video4_pane_g_ParamLimits

0xf839,	// (0x0005460c) main_video4_pane_g

0x64f7,	// (0x0004b2ca) vid4_indicators_pane_ParamLimits

0x64f7,	// (0x0004b2ca) vid4_indicators_pane

0x6525,	// (0x0004b2f8) video4_image_uncrop_cif_pane_ParamLimits

0x6525,	// (0x0004b2f8) video4_image_uncrop_cif_pane

0x653f,	// (0x0004b312) video4_image_uncrop_nhd_pane_ParamLimits

0x653f,	// (0x0004b312) video4_image_uncrop_nhd_pane

0x6394,	// (0x0004b167) video4_image_uncrop_vga_pane_ParamLimits

0x6394,	// (0x0004b167) video4_image_uncrop_vga_pane

0x1451,	// (0x00046224) bg_tb_trans_pane_cp07

0xcec8,	// (0x00051c9b) vid4_indicators_pane_g1

0xcedc,	// (0x00051caf) vid4_indicators_pane_g2

0xcef0,	// (0x00051cc3) vid4_indicators_pane_g3

0x0004,

0xf844,	// (0x00054617) vid4_indicators_pane_g

0xcf1d,	// (0x00051cf0) vid4_indicators_pane_t1

0x6553,	// (0x0004b326) cam4_autofocus_pane_g1

0x655b,	// (0x0004b32e) cam4_autofocus_pane_g2

0x6563,	// (0x0004b336) cam4_autofocus_pane_g3

0x0002,

0xf84f,	// (0x00054622) cam4_autofocus_pane_g

0x656b,	// (0x0004b33e) cam4_autofocus_pane_g3_copy1

0x5e74,	// (0x0004ac47) video_down_pane_cp_t1

0x5e82,	// (0x0004ac55) video_down_pane_cp_t2

0x0001,

0xf7c7,	// (0x0005459a) video_down_pane_cp_t

0x1451,	// (0x00046224) popup_vitu2_window_ParamLimits

0x1451,	// (0x00046224) popup_vitu2_window

0x6573,	// (0x0004b346) aid_size_cell2_itu2_ParamLimits

0x6573,	// (0x0004b346) aid_size_cell2_itu2

0x6599,	// (0x0004b36c) aid_size_cell_itu2_ParamLimits

0x6599,	// (0x0004b36c) aid_size_cell_itu2

0x58b8,	// (0x0004a68b) bg_popup_window_pane_cp09_ParamLimits

0x58b8,	// (0x0004a68b) bg_popup_window_pane_cp09

0x65f5,	// (0x0004b3c8) field_vitu2_entry_pane_ParamLimits

0x65f5,	// (0x0004b3c8) field_vitu2_entry_pane

0x661b,	// (0x0004b3ee) grid_vitu2_function_pane_ParamLimits

0x661b,	// (0x0004b3ee) grid_vitu2_function_pane

0x6668,	// (0x0004b43b) grid_vitu2_itu_pane_ParamLimits

0x6668,	// (0x0004b43b) grid_vitu2_itu_pane

0x66fa,	// (0x0004b4cd) cell_vitu2_itu_pane_ParamLimits

0x66fa,	// (0x0004b4cd) cell_vitu2_itu_pane

0x6726,	// (0x0004b4f9) cell_vitu2_function_pane_ParamLimits

0x6726,	// (0x0004b4f9) cell_vitu2_function_pane

0xd4a8,	// (0x0005227b) bg_popup_call_pane_cp08_ParamLimits

0xd4a8,	// (0x0005227b) bg_popup_call_pane_cp08

0xd4bf,	// (0x00052292) field_vitu2_entry_pane_g1

0xd4cb,	// (0x0005229e) field_vitu2_entry_pane_g2

0x0002,

0xf856,	// (0x00054629) field_vitu2_entry_pane_g

0x0a94,	// (0x00045867) field_vitu2_entry_pane_t1_ParamLimits

0x0a94,	// (0x00045867) field_vitu2_entry_pane_t1

0xcf34,	// (0x00051d07) field_vitu2_entry_pane_t2_ParamLimits

0xcf34,	// (0x00051d07) field_vitu2_entry_pane_t2

0x0001,

0xf85d,	// (0x00054630) field_vitu2_entry_pane_t_ParamLimits

0xf85d,	// (0x00054630) field_vitu2_entry_pane_t

0x6765,	// (0x0004b538) bg_button_pane_cp010_ParamLimits

0x6765,	// (0x0004b538) bg_button_pane_cp010

0x6773,	// (0x0004b546) cell_vitu2_itu_pane_g1

0x6799,	// (0x0004b56c) cell_vitu2_itu_pane_t1_ParamLimits

0x6799,	// (0x0004b56c) cell_vitu2_itu_pane_t1

0x0ac6,	// (0x00045899) cell_vitu2_itu_pane_t2_ParamLimits

0x0ac6,	// (0x00045899) cell_vitu2_itu_pane_t2

0x0002,

0xf867,	// (0x0005463a) cell_vitu2_itu_pane_t_ParamLimits

0xf867,	// (0x0005463a) cell_vitu2_itu_pane_t

0x1451,	// (0x00046224) bg_button_pane_cp011

0x67f7,	// (0x0004b5ca) cell_vitu2_function_pane_g1

0x128d,	// (0x00046060) main_myfav_hc_pane

0x616b,	// (0x0004af3e) popup_image3_note_pane_ParamLimits

0x616b,	// (0x0004af3e) popup_image3_note_pane

0x6187,	// (0x0004af5a) popup_image3_tool_bar_pane_ParamLimits

0x6187,	// (0x0004af5a) popup_image3_tool_bar_pane

0x0b54,	// (0x00045927) cell_vitu2_itu_pane_t3_ParamLimits

0x0b54,	// (0x00045927) cell_vitu2_itu_pane_t3

0x128d,	// (0x00046060) bg_popup_trans_pane

0xd4df,	// (0x000522b2) grid_image3_tool_bar_pane

0xd4e9,	// (0x000522bc) bg_popup_trans_pane_g1

0x2e4a,	// (0x00047c1d) bg_popup_trans_pane_g2

0xd4f1,	// (0x000522c4) bg_popup_trans_pane_g3

0xd4f9,	// (0x000522cc) bg_popup_trans_pane_g4

0xd501,	// (0x000522d4) bg_popup_trans_pane_g5

0xd509,	// (0x000522dc) bg_popup_trans_pane_g6

0xd511,	// (0x000522e4) bg_popup_trans_pane_g7

0xd519,	// (0x000522ec) bg_popup_trans_pane_g8

0x2e2a,	// (0x00047bfd) bg_popup_trans_pane_g9

0x0008,

0xf86e,	// (0x00054641) bg_popup_trans_pane_g

0xd521,	// (0x000522f4) cell_image3_tool_bar_pane_ParamLimits

0xd521,	// (0x000522f4) cell_image3_tool_bar_pane

0x1cd1,	// (0x00046aa4) cell_image3_tool_bar_pane_g1

0x128d,	// (0x00046060) bg_popup_trans_pane_cp1

0xd535,	// (0x00052308) popup_image3_note_pane_t1

0xd543,	// (0x00052316) popup_image3_note_pane_t2

0xd551,	// (0x00052324) popup_image3_note_pane_t3

0x0002,

0xf881,	// (0x00054654) popup_image3_note_pane_t

0xd55f,	// (0x00052332) popup_image3_note_pane_t3_copy1

0x680a,	// (0x0004b5dd) bg_myfav_hc_instruction_pane_ParamLimits

0x680a,	// (0x0004b5dd) bg_myfav_hc_instruction_pane

0x681e,	// (0x0004b5f1) cell_myfav_contact_pane_ParamLimits

0x681e,	// (0x0004b5f1) cell_myfav_contact_pane

0x683c,	// (0x0004b60f) cell_myfav_contact_pane_cp1_ParamLimits

0x683c,	// (0x0004b60f) cell_myfav_contact_pane_cp1

0x6854,	// (0x0004b627) cell_myfav_contact_pane_cp2_ParamLimits

0x6854,	// (0x0004b627) cell_myfav_contact_pane_cp2

0x686c,	// (0x0004b63f) cell_myfav_contact_pane_cp3_ParamLimits

0x686c,	// (0x0004b63f) cell_myfav_contact_pane_cp3

0x6883,	// (0x0004b656) cell_myfav_contact_pane_cp4_ParamLimits

0x6883,	// (0x0004b656) cell_myfav_contact_pane_cp4

0x689b,	// (0x0004b66e) cell_myfav_contact_pane_cp5_ParamLimits

0x689b,	// (0x0004b66e) cell_myfav_contact_pane_cp5

0x68af,	// (0x0004b682) cell_myfav_contact_pane_cp6_ParamLimits

0x68af,	// (0x0004b682) cell_myfav_contact_pane_cp6

0x68c5,	// (0x0004b698) cell_myfav_contact_pane_cp7_ParamLimits

0x68c5,	// (0x0004b698) cell_myfav_contact_pane_cp7

0xd56d,	// (0x00052340) listscroll_gen_pane_cp05

0x68df,	// (0x0004b6b2) main_myfav_hc_pane_g1_ParamLimits

0x68df,	// (0x0004b6b2) main_myfav_hc_pane_g1

0x68f9,	// (0x0004b6cc) main_myfav_hc_pane_g2_ParamLimits

0x68f9,	// (0x0004b6cc) main_myfav_hc_pane_g2

0x0002,

0xf888,	// (0x0005465b) main_myfav_hc_pane_g_ParamLimits

0xf888,	// (0x0005465b) main_myfav_hc_pane_g

0x692b,	// (0x0004b6fe) main_myfav_hc_pane_t1_ParamLimits

0x692b,	// (0x0004b6fe) main_myfav_hc_pane_t1

0xd576,	// (0x00052349) main_myfav_hc_pane_t2_ParamLimits

0xd576,	// (0x00052349) main_myfav_hc_pane_t2

0xd588,	// (0x0005235b) main_myfav_hc_pane_t3_ParamLimits

0xd588,	// (0x0005235b) main_myfav_hc_pane_t3

0x6942,	// (0x0004b715) main_myfav_hc_pane_t4_ParamLimits

0x6942,	// (0x0004b715) main_myfav_hc_pane_t4

0x0004,

0xf88f,	// (0x00054662) main_myfav_hc_pane_t_ParamLimits

0xf88f,	// (0x00054662) main_myfav_hc_pane_t

0x1cd1,	// (0x00046aa4) bg_myfav_hc_instruction_pane_g1

0xd59a,	// (0x0005236d) cell_myfav_contact_pane_g1_ParamLimits

0xd59a,	// (0x0005236d) cell_myfav_contact_pane_g1

0xd59a,	// (0x0005236d) cell_myfav_contact_pane_g2_ParamLimits

0xd59a,	// (0x0005236d) cell_myfav_contact_pane_g2

0xd5a6,	// (0x00052379) cell_myfav_contact_pane_g3_ParamLimits

0xd5a6,	// (0x00052379) cell_myfav_contact_pane_g3

0x1c0d,	// (0x000469e0) cell_myfav_contact_pane_g4_ParamLimits

0x1c0d,	// (0x000469e0) cell_myfav_contact_pane_g4

0xd5b3,	// (0x00052386) cell_myfav_contact_pane_g5_ParamLimits

0xd5b3,	// (0x00052386) cell_myfav_contact_pane_g5

0x0004,

0xf89a,	// (0x0005466d) cell_myfav_contact_pane_g_ParamLimits

0xf89a,	// (0x0005466d) cell_myfav_contact_pane_g

0x6913,	// (0x0004b6e6) main_myfav_hc_pane_g3_ParamLimits

0x6913,	// (0x0004b6e6) main_myfav_hc_pane_g3

0x09c3,	// (0x00045796) popup_adpt_find_window

0x696a,	// (0x0004b73d) afind_page_pane_ParamLimits

0x696a,	// (0x0004b73d) afind_page_pane

0x6980,	// (0x0004b753) aid_size_cell_afind_ParamLimits

0x6980,	// (0x0004b753) aid_size_cell_afind

0x699e,	// (0x0004b771) bg_popup_sub_pane_cp09_ParamLimits

0x699e,	// (0x0004b771) bg_popup_sub_pane_cp09

0x69b0,	// (0x0004b783) find_pane_cp01_ParamLimits

0x69b0,	// (0x0004b783) find_pane_cp01

0xd5bf,	// (0x00052392) grid_afind_control_pane_ParamLimits

0xd5bf,	// (0x00052392) grid_afind_control_pane

0x69c4,	// (0x0004b797) grid_afind_pane_ParamLimits

0x69c4,	// (0x0004b797) grid_afind_pane

0x69e6,	// (0x0004b7b9) cell_afind_pane_ParamLimits

0x69e6,	// (0x0004b7b9) cell_afind_pane

0x1cd1,	// (0x00046aa4) afind_page_pane_g1

0x6a4d,	// (0x0004b820) afind_page_pane_g2

0x6a55,	// (0x0004b828) afind_page_pane_g3

0x0002,

0xf8a5,	// (0x00054678) afind_page_pane_g

0x6a5d,	// (0x0004b830) afind_page_pane_t1

0xd5e5,	// (0x000523b8) cell_afind_grid_control_pane_ParamLimits

0xd5e5,	// (0x000523b8) cell_afind_grid_control_pane

0xd5f4,	// (0x000523c7) bg_button_pane_cp69_ParamLimits

0xd5f4,	// (0x000523c7) bg_button_pane_cp69

0x6a6b,	// (0x0004b83e) cell_afind_pane_g1_ParamLimits

0x6a6b,	// (0x0004b83e) cell_afind_pane_g1

0x6a78,	// (0x0004b84b) cell_afind_pane_t1_ParamLimits

0x6a78,	// (0x0004b84b) cell_afind_pane_t1

0xd600,	// (0x000523d3) bg_button_pane_cp72

0xd608,	// (0x000523db) cell_afind_grid_control_pane_g1

0x4596,	// (0x00049369) aid_image_placing_area_ParamLimits

0x4596,	// (0x00049369) aid_image_placing_area

0x1bff,	// (0x000469d2) field_vitu_entry_pane_g1_ParamLimits

0x1bff,	// (0x000469d2) field_vitu_entry_pane_g1

0x1bff,	// (0x000469d2) field_vitu_entry_pane_g2_ParamLimits

0x1bff,	// (0x000469d2) field_vitu_entry_pane_g2

0x0001,

0xf1bc,	// (0x00053f8f) field_vitu_entry_pane_g_ParamLimits

0xf1bc,	// (0x00053f8f) field_vitu_entry_pane_g

0xc9ba,	// (0x0005178d) cell_vitu_itu_pane_g1_ParamLimits

0xc99d,	// (0x00051770) cell_vitu_itu_pane_t3_ParamLimits

0xc99d,	// (0x00051770) cell_vitu_itu_pane_t3

0xd407,	// (0x000521da) mp4_progress_pane_t1_ParamLimits

0xd429,	// (0x000521fc) mp4_progress_pane_t2_ParamLimits

0xf7eb,	// (0x000545be) mp4_progress_pane_t_ParamLimits

0xd44b,	// (0x0005221e) mup_progress_pane_cp04_ParamLimits

0x6956,	// (0x0004b729) main_myfav_hc_pane_t5_ParamLimits

0x6956,	// (0x0004b729) main_myfav_hc_pane_t5

0xa54e,	// (0x0004f321) aid_zoom_text_primary

0x09c3,	// (0x00045796) popup_adpt_find_window_ParamLimits

0x1451,	// (0x00046224) main_cam_set_pane

0x63c5,	// (0x0004b198) cam4_zoom_pane_ParamLimits

0x63c5,	// (0x0004b198) cam4_zoom_pane

0x6a8a,	// (0x0004b85d) main_cam_set_pane_g1_ParamLimits

0x6a8a,	// (0x0004b85d) main_cam_set_pane_g1

0x6a98,	// (0x0004b86b) main_cam_set_pane_g2_ParamLimits

0x6a98,	// (0x0004b86b) main_cam_set_pane_g2

0x0001,

0xf8ac,	// (0x0005467f) main_cam_set_pane_g_ParamLimits

0xf8ac,	// (0x0005467f) main_cam_set_pane_g

0x6ab9,	// (0x0004b88c) main_cam_set_pane_t1_ParamLimits

0x6ab9,	// (0x0004b88c) main_cam_set_pane_t1

0x6ad4,	// (0x0004b8a7) main_cset_listscroll_pane_ParamLimits

0x6ad4,	// (0x0004b8a7) main_cset_listscroll_pane

0x6afa,	// (0x0004b8cd) main_cset_slider_pane_ParamLimits

0x6afa,	// (0x0004b8cd) main_cset_slider_pane

0xd619,	// (0x000523ec) main_cset_list_pane_ParamLimits

0xd619,	// (0x000523ec) main_cset_list_pane

0xd629,	// (0x000523fc) scroll_pane_cp028

0x6b20,	// (0x0004b8f3) aid_area_touch_slider

0x6b3c,	// (0x0004b90f) cset_slider_pane

0x6b5f,	// (0x0004b932) main_cset_slider_pane_g1

0x6b74,	// (0x0004b947) main_cset_slider_pane_g2

0x0011,

0xf8b1,	// (0x00054684) main_cset_slider_pane_g

0xd662,	// (0x00052435) main_cset_slider_pane_t1

0x6c18,	// (0x0004b9eb) main_cset_slider_pane_t2

0x6c32,	// (0x0004ba05) main_cset_slider_pane_t3

0x6c4c,	// (0x0004ba1f) main_cset_slider_pane_t4

0x6c66,	// (0x0004ba39) main_cset_slider_pane_t5

0x6c80,	// (0x0004ba53) main_cset_slider_pane_t6

0x6c95,	// (0x0004ba68) main_cset_slider_pane_t7

0x000e,

0xf8d6,	// (0x000546a9) main_cset_slider_pane_t

0x6d99,	// (0x0004bb6c) cset_list_set_pane_ParamLimits

0x6d99,	// (0x0004bb6c) cset_list_set_pane

0xd6fc,	// (0x000524cf) aid_position_infowindow_above

0xd704,	// (0x000524d7) aid_position_infowindow_below

0x0bb2,	// (0x00045985) cset_list_set_pane_g1_ParamLimits

0x0bb2,	// (0x00045985) cset_list_set_pane_g1

0x0bbe,	// (0x00045991) cset_list_set_pane_g3_ParamLimits

0x0bbe,	// (0x00045991) cset_list_set_pane_g3

0x0001,

0xf8f5,	// (0x000546c8) cset_list_set_pane_g_ParamLimits

0xf8f5,	// (0x000546c8) cset_list_set_pane_g

0x0bcd,	// (0x000459a0) cset_list_set_pane_t1_ParamLimits

0x0bcd,	// (0x000459a0) cset_list_set_pane_t1

0x1451,	// (0x00046224) list_highlight_pane_cp021_ParamLimits

0x1451,	// (0x00046224) list_highlight_pane_cp021

0xac0b,	// (0x0004f9de) cset_slider_pane_g1

0xac1d,	// (0x0004f9f0) cset_slider_pane_g2

0xac14,	// (0x0004f9e7) cset_slider_pane_g3

0x0002,

0xf8fa,	// (0x000546cd) cset_slider_pane_g

0xcf51,	// (0x00051d24) aid_area_touch_cam4_zoom

0xcf59,	// (0x00051d2c) cam4_zoom_cont_pane

0xcf61,	// (0x00051d34) cam4_zoom_pane_g1

0xcf69,	// (0x00051d3c) cam4_zoom_pane_g2

0x6dab,	// (0x0004bb7e) cam4_zoom_pane_g3

0x0002,

0xf901,	// (0x000546d4) cam4_zoom_pane_g

0xd70c,	// (0x000524df) cam4_zoom_cont_pane_g1

0xd715,	// (0x000524e8) cam4_zoom_cont_pane_g2

0xd71e,	// (0x000524f1) cam4_zoom_cont_pane_g3

0x0002,

0xf908,	// (0x000546db) cam4_zoom_cont_pane_g

0x61f4,	// (0x0004afc7) call4_image_pane_ParamLimits

0x61f4,	// (0x0004afc7) call4_image_pane

0x625b,	// (0x0004b02e) call4_windows_conf_pane_ParamLimits

0x629e,	// (0x0004b071) popup_call4_audio_in_window_ParamLimits

0x629e,	// (0x0004b071) popup_call4_audio_in_window

0x128d,	// (0x00046060) bg_popup_call2_act_pane_cp02

0xd48c,	// (0x0005225f) call4_list_conf_pane

0x1cd1,	// (0x00046aa4) call4_image_pane_g1

0x1cd1,	// (0x00046aa4) call4_image_pane_g2

0x0001,

0xf0af,	// (0x00053e82) call4_image_pane_g

0xd727,	// (0x000524fa) list_single_graphic_popup_conf4_pane_ParamLimits

0xd727,	// (0x000524fa) list_single_graphic_popup_conf4_pane

0x128d,	// (0x00046060) list_highlight_pane_cp022

0xd73a,	// (0x0005250d) list_single_graphic_popup_conf4_pane_g1

0xa7e8,	// (0x0004f5bb) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf90f,	// (0x000546e2) list_single_graphic_popup_conf4_pane_g

0xd742,	// (0x00052515) list_single_graphic_popup_conf4_pane_t1

0x29b9,	// (0x0004778c) popup_vtel_slider_window_ParamLimits

0x29b9,	// (0x0004778c) popup_vtel_slider_window

0xd45e,	// (0x00052231) dialer2_ne_pane_t2_ParamLimits

0xd45e,	// (0x00052231) dialer2_ne_pane_t2

0x0001,

0xf7f0,	// (0x000545c3) dialer2_ne_pane_t_ParamLimits

0xf7f0,	// (0x000545c3) dialer2_ne_pane_t

0xc02b,	// (0x00050dfe) bg_popup_sub_pane_cp010_ParamLimits

0xc02b,	// (0x00050dfe) bg_popup_sub_pane_cp010

0x6db3,	// (0x0004bb86) popup_vtel_slider_window_g1_ParamLimits

0x6db3,	// (0x0004bb86) popup_vtel_slider_window_g1

0x6dc6,	// (0x0004bb99) popup_vtel_slider_window_g2_ParamLimits

0x6dc6,	// (0x0004bb99) popup_vtel_slider_window_g2

0x0003,

0xf914,	// (0x000546e7) popup_vtel_slider_window_g_ParamLimits

0xf914,	// (0x000546e7) popup_vtel_slider_window_g

0x6e1c,	// (0x0004bbef) vtel_slider_pane_ParamLimits

0x6e1c,	// (0x0004bbef) vtel_slider_pane

0x6e3e,	// (0x0004bc11) vtel_slider_pane_g1_ParamLimits

0x6e3e,	// (0x0004bc11) vtel_slider_pane_g1

0x6e52,	// (0x0004bc25) vtel_slider_pane_g2_ParamLimits

0x6e52,	// (0x0004bc25) vtel_slider_pane_g2

0x6e6a,	// (0x0004bc3d) vtel_slider_pane_g3_ParamLimits

0x6e6a,	// (0x0004bc3d) vtel_slider_pane_g3

0x6e3e,	// (0x0004bc11) vtel_slider_pane_g4_ParamLimits

0x6e3e,	// (0x0004bc11) vtel_slider_pane_g4

0x6e80,	// (0x0004bc53) vtel_slider_pane_g5_ParamLimits

0x6e80,	// (0x0004bc53) vtel_slider_pane_g5

0x0004,

0xf91d,	// (0x000546f0) vtel_slider_pane_g_ParamLimits

0xf91d,	// (0x000546f0) vtel_slider_pane_g

0x1451,	// (0x00046224) main_gallery2_pane

0x65c5,	// (0x0004b398) aid_size_row_itut2_dropdow_list_ParamLimits

0x65c5,	// (0x0004b398) aid_size_row_itut2_dropdow_list

0x663f,	// (0x0004b412) grid_vitu2_function_top_pane_ParamLimits

0x663f,	// (0x0004b412) grid_vitu2_function_top_pane

0x66a3,	// (0x0004b476) popup_vitu2_dropdown_list_window_ParamLimits

0x66a3,	// (0x0004b476) popup_vitu2_dropdown_list_window

0x66ce,	// (0x0004b4a1) popup_vitu2_match_list_window

0x6e96,	// (0x0004bc69) cell_vitu2_function_top_pane_ParamLimits

0x6e96,	// (0x0004bc69) cell_vitu2_function_top_pane

0x6eae,	// (0x0004bc81) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6eae,	// (0x0004bc81) cell_vitu2_function_top_pane_cp01

0x6eca,	// (0x0004bc9d) cell_vitu2_function_top_wide_pane_ParamLimits

0x6eca,	// (0x0004bc9d) cell_vitu2_function_top_wide_pane

0x1451,	// (0x00046224) bg_button_pane_cp012

0x6ee8,	// (0x0004bcbb) cell_vitu2_function_top_pane_g1

0xcf71,	// (0x00051d44) bg_button_pane_cp013_ParamLimits

0xcf71,	// (0x00051d44) bg_button_pane_cp013

0x6efc,	// (0x0004bccf) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6efc,	// (0x0004bccf) cell_vitu2_function_top_wide_pane_g1

0x1451,	// (0x00046224) bg_popup_sub_pane_cp20

0x6f14,	// (0x0004bce7) list_vitu2_match_list_pane

0xd4e9,	// (0x000522bc) bg_popup_sub_pane_cp20_g1

0xd4f1,	// (0x000522c4) bg_popup_sub_pane_cp20_g2

0x2e4a,	// (0x00047c1d) bg_popup_sub_pane_cp20_g3

0xd4f9,	// (0x000522cc) bg_popup_sub_pane_cp20_g4

0x2e2a,	// (0x00047bfd) bg_popup_sub_pane_cp20_g5

0xd758,	// (0x0005252b) bg_popup_sub_pane_cp20_g6

0xd509,	// (0x000522dc) bg_popup_sub_pane_cp20_g7

0xd511,	// (0x000522e4) bg_popup_sub_pane_cp20_g8

0xd519,	// (0x000522ec) bg_popup_sub_pane_cp20_g9

0x0008,

0xf928,	// (0x000546fb) bg_popup_sub_pane_cp20_g

0xcf8d,	// (0x00051d60) list_vitu2_match_list_item_pane_ParamLimits

0xcf8d,	// (0x00051d60) list_vitu2_match_list_item_pane

0xcf9f,	// (0x00051d72) list_vitu2_match_list_item_pane_t1

0x128d,	// (0x00046060) bg_popup_sub_pane_cp21

0x2610,	// (0x000473e3) grid_vitu2_dropdown_list_pane

0x6f2c,	// (0x0004bcff) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x6f2c,	// (0x0004bcff) cell_vitu2_dropdown_list_char_pane

0x6f4c,	// (0x0004bd1f) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x6f4c,	// (0x0004bd1f) cell_vitu2_dropdown_list_ctrl_pane

0xd760,	// (0x00052533) cell_vitu2_dropdown_list_char_pane_g1

0xd769,	// (0x0005253c) cell_vitu2_dropdown_list_char_pane_g2

0xd772,	// (0x00052545) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf93b,	// (0x0005470e) cell_vitu2_dropdown_list_char_pane_g

0x6f74,	// (0x0004bd47) cell_vitu2_dropdown_list_char_pane_t1

0x6f82,	// (0x0004bd55) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6f82,	// (0x0004bd55) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6f8f,	// (0x0004bd62) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6f8f,	// (0x0004bd62) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6f9c,	// (0x0004bd6f) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6f9c,	// (0x0004bd6f) cell_vitu2_dropdown_list_ctrl_pane_g3

0x6fa9,	// (0x0004bd7c) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x6fa9,	// (0x0004bd7c) cell_vitu2_dropdown_list_ctrl_pane_g4

0x1bff,	// (0x000469d2) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x1bff,	// (0x000469d2) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf942,	// (0x00054715) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf942,	// (0x00054715) cell_vitu2_dropdown_list_ctrl_pane_g

0x6fc5,	// (0x0004bd98) aid_size_cell_gallery2_ParamLimits

0x6fc5,	// (0x0004bd98) aid_size_cell_gallery2

0x6fe3,	// (0x0004bdb6) grid_gallery2_pane_ParamLimits

0x6fe3,	// (0x0004bdb6) grid_gallery2_pane

0x6ffd,	// (0x0004bdd0) scroll_pane_cp029_ParamLimits

0x6ffd,	// (0x0004bdd0) scroll_pane_cp029

0x700e,	// (0x0004bde1) cell_gallery2_pane_ParamLimits

0x700e,	// (0x0004bde1) cell_gallery2_pane

0xd77b,	// (0x0005254e) cell_gallery2_pane_g2

0x706d,	// (0x0004be40) cell_gallery2_pane_g3

0xd783,	// (0x00052556) cell_gallery2_pane_g4

0xd78b,	// (0x0005255e) cell_gallery2_pane_g5

0x2610,	// (0x000473e3) grid_highlight_pane_cp10

0x66ce,	// (0x0004b4a1) popup_vitu2_match_list_window_ParamLimits

0x66e3,	// (0x0004b4b6) popup_vitu2_query_window_ParamLimits

0x66e3,	// (0x0004b4b6) popup_vitu2_query_window

0x128d,	// (0x00046060) bg_vitu2_candi_button_pane

0xd760,	// (0x00052533) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd769,	// (0x0005253c) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd772,	// (0x00052545) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x0be2,	// (0x000459b5) bg_button_pane_cp015

0x7075,	// (0x0004be48) bg_button_pane_cp016

0x7081,	// (0x0004be54) bg_button_pane_cp017

0xab9b,	// (0x0004f96e) bg_popup_sub_pane_cp22

0xd793,	// (0x00052566) popup_vitu2_query_window_g1

0x0c16,	// (0x000459e9) popup_vitu2_query_window_g2

0x0002,

0xf94d,	// (0x00054720) popup_vitu2_query_window_g

0x0c2c,	// (0x000459ff) popup_vitu2_query_window_t1_ParamLimits

0x0c2c,	// (0x000459ff) popup_vitu2_query_window_t1

0x0c5f,	// (0x00045a32) popup_vitu2_query_window_t2_ParamLimits

0x0c5f,	// (0x00045a32) popup_vitu2_query_window_t2

0x0c71,	// (0x00045a44) popup_vitu2_query_window_t3_ParamLimits

0x0c71,	// (0x00045a44) popup_vitu2_query_window_t3

0x70a8,	// (0x0004be7b) popup_vitu2_query_window_t4_ParamLimits

0x70a8,	// (0x0004be7b) popup_vitu2_query_window_t4

0x70bc,	// (0x0004be8f) popup_vitu2_query_window_t5_ParamLimits

0x70bc,	// (0x0004be8f) popup_vitu2_query_window_t5

0x0006,

0xf954,	// (0x00054727) popup_vitu2_query_window_t_ParamLimits

0xf954,	// (0x00054727) popup_vitu2_query_window_t

0xd611,	// (0x000523e4) main_cset_text_pane

0x6b20,	// (0x0004b8f3) aid_area_touch_slider_ParamLimits

0x6b3c,	// (0x0004b90f) cset_slider_pane_ParamLimits

0x6b5f,	// (0x0004b932) main_cset_slider_pane_g1_ParamLimits

0x6b74,	// (0x0004b947) main_cset_slider_pane_g2_ParamLimits

0xd632,	// (0x00052405) main_cset_slider_pane_g3_ParamLimits

0xd632,	// (0x00052405) main_cset_slider_pane_g3

0x6b89,	// (0x0004b95c) main_cset_slider_pane_g4_ParamLimits

0x6b89,	// (0x0004b95c) main_cset_slider_pane_g4

0x6b98,	// (0x0004b96b) main_cset_slider_pane_g5_ParamLimits

0x6b98,	// (0x0004b96b) main_cset_slider_pane_g5

0x6ba4,	// (0x0004b977) main_cset_slider_pane_g6_ParamLimits

0x6ba4,	// (0x0004b977) main_cset_slider_pane_g6

0xf8b1,	// (0x00054684) main_cset_slider_pane_g_ParamLimits

0xd662,	// (0x00052435) main_cset_slider_pane_t1_ParamLimits

0x6c18,	// (0x0004b9eb) main_cset_slider_pane_t2_ParamLimits

0x6c32,	// (0x0004ba05) main_cset_slider_pane_t3_ParamLimits

0x6c4c,	// (0x0004ba1f) main_cset_slider_pane_t4_ParamLimits

0x6c66,	// (0x0004ba39) main_cset_slider_pane_t5_ParamLimits

0x6c80,	// (0x0004ba53) main_cset_slider_pane_t6_ParamLimits

0x6c95,	// (0x0004ba68) main_cset_slider_pane_t7_ParamLimits

0x6cbf,	// (0x0004ba92) main_cset_slider_pane_t8_ParamLimits

0x6cbf,	// (0x0004ba92) main_cset_slider_pane_t8

0x6ce7,	// (0x0004baba) main_cset_slider_pane_t9_ParamLimits

0x6ce7,	// (0x0004baba) main_cset_slider_pane_t9

0x6d0f,	// (0x0004bae2) main_cset_slider_pane_t10_ParamLimits

0x6d0f,	// (0x0004bae2) main_cset_slider_pane_t10

0x6d37,	// (0x0004bb0a) main_cset_slider_pane_t11_ParamLimits

0x6d37,	// (0x0004bb0a) main_cset_slider_pane_t11

0x6d5f,	// (0x0004bb32) main_cset_slider_pane_t12_ParamLimits

0x6d5f,	// (0x0004bb32) main_cset_slider_pane_t12

0x6d7c,	// (0x0004bb4f) main_cset_slider_pane_t13_ParamLimits

0x6d7c,	// (0x0004bb4f) main_cset_slider_pane_t13

0xf8d6,	// (0x000546a9) main_cset_slider_pane_t_ParamLimits

0x128d,	// (0x00046060) bg_popup_sub_pane_cp011

0xd79f,	// (0x00052572) main_cset_text_pane_g1

0xd7a7,	// (0x0005257a) main_cset_text_pane_t1

0xd7b5,	// (0x00052588) main_cset_text_pane_t2

0xd7c3,	// (0x00052596) main_cset_text_pane_t3

0xd7d1,	// (0x000525a4) main_cset_text_pane_t4

0xd7df,	// (0x000525b2) main_cset_text_pane_t5

0xd7ed,	// (0x000525c0) main_cset_text_pane_t6

0xd7fb,	// (0x000525ce) main_cset_text_pane_t7

0x0006,

0xf963,	// (0x00054736) main_cset_text_pane_t

0x128d,	// (0x00046060) main_cam4_burst_pane

0x128d,	// (0x00046060) main_cam5_pane

0xd5d3,	// (0x000523a6) bg_button_pane_cp019

0xd5dc,	// (0x000523af) bg_button_pane_cp020

0xd63e,	// (0x00052411) main_cset_slider_pane_g7_ParamLimits

0xd63e,	// (0x00052411) main_cset_slider_pane_g7

0xd64a,	// (0x0005241d) main_cset_slider_pane_g8_ParamLimits

0xd64a,	// (0x0005241d) main_cset_slider_pane_g8

0x6bb8,	// (0x0004b98b) main_cset_slider_pane_g9_ParamLimits

0x6bb8,	// (0x0004b98b) main_cset_slider_pane_g9

0x6bc4,	// (0x0004b997) main_cset_slider_pane_g10_ParamLimits

0x6bc4,	// (0x0004b997) main_cset_slider_pane_g10

0x6bd0,	// (0x0004b9a3) main_cset_slider_pane_g11_ParamLimits

0x6bd0,	// (0x0004b9a3) main_cset_slider_pane_g11

0x6bdc,	// (0x0004b9af) main_cset_slider_pane_g12_ParamLimits

0x6bdc,	// (0x0004b9af) main_cset_slider_pane_g12

0x6be8,	// (0x0004b9bb) main_cset_slider_pane_g13_ParamLimits

0x6be8,	// (0x0004b9bb) main_cset_slider_pane_g13

0x6bf4,	// (0x0004b9c7) main_cset_slider_pane_g14_ParamLimits

0x6bf4,	// (0x0004b9c7) main_cset_slider_pane_g14

0x6c00,	// (0x0004b9d3) main_cset_slider_pane_g15_ParamLimits

0x6c00,	// (0x0004b9d3) main_cset_slider_pane_g15

0xd68a,	// (0x0005245d) main_cset_slider_pane_t14_ParamLimits

0xd68a,	// (0x0005245d) main_cset_slider_pane_t14

0xd6c3,	// (0x00052496) main_cset_slider_pane_t15_ParamLimits

0xd6c3,	// (0x00052496) main_cset_slider_pane_t15

0x70d0,	// (0x0004bea3) aid_cam4_burst_size_cell_ParamLimits

0x70d0,	// (0x0004bea3) aid_cam4_burst_size_cell

0x70f0,	// (0x0004bec3) grid_cam4_burst_pane_ParamLimits

0x70f0,	// (0x0004bec3) grid_cam4_burst_pane

0x7128,	// (0x0004befb) linegrid_cam4_burst_pane_ParamLimits

0x7128,	// (0x0004befb) linegrid_cam4_burst_pane

0xddde,	// (0x00052bb1) scroll_pane_cp30_ParamLimits

0xddde,	// (0x00052bb1) scroll_pane_cp30

0x714c,	// (0x0004bf1f) cell_cam4_burst_pane_ParamLimits

0x714c,	// (0x0004bf1f) cell_cam4_burst_pane

0xd809,	// (0x000525dc) linegrid_cam4_burst_pane_g1_ParamLimits

0xd809,	// (0x000525dc) linegrid_cam4_burst_pane_g1

0x7199,	// (0x0004bf6c) linegrid_cam4_burst_pane_g2_ParamLimits

0x7199,	// (0x0004bf6c) linegrid_cam4_burst_pane_g2

0xd816,	// (0x000525e9) linegrid_cam4_burst_pane_g3_ParamLimits

0xd816,	// (0x000525e9) linegrid_cam4_burst_pane_g3

0x0002,

0xf972,	// (0x00054745) linegrid_cam4_burst_pane_g_ParamLimits

0xf972,	// (0x00054745) linegrid_cam4_burst_pane_g

0x71aa,	// (0x0004bf7d) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x71aa,	// (0x0004bf7d) linegrid_cam4_burst_pane_g3_copy1

0xd823,	// (0x000525f6) linegrid_cam4_burst_pane_g4_ParamLimits

0xd823,	// (0x000525f6) linegrid_cam4_burst_pane_g4

0x71c4,	// (0x0004bf97) linegrid_cam4_burst_pane_g5_ParamLimits

0x71c4,	// (0x0004bf97) linegrid_cam4_burst_pane_g5

0x71d5,	// (0x0004bfa8) linegrid_cam4_burst_pane_g6_ParamLimits

0x71d5,	// (0x0004bfa8) linegrid_cam4_burst_pane_g6

0xd830,	// (0x00052603) linegrid_cam4_burst_pane_g7_ParamLimits

0xd830,	// (0x00052603) linegrid_cam4_burst_pane_g7

0x71ec,	// (0x0004bfbf) cell_cam4_burst_pane_g1

0xd849,	// (0x0005261c) main_cam5_pane_t1_ParamLimits

0xd849,	// (0x0005261c) main_cam5_pane_t1

0xd85b,	// (0x0005262e) main_cam5_pane_t2_ParamLimits

0xd85b,	// (0x0005262e) main_cam5_pane_t2

0xd86d,	// (0x00052640) main_cam5_pane_t3_ParamLimits

0xd86d,	// (0x00052640) main_cam5_pane_t3

0xd87f,	// (0x00052652) main_cam5_pane_t4_ParamLimits

0xd87f,	// (0x00052652) main_cam5_pane_t4

0xd897,	// (0x0005266a) main_cam5_pane_t5_ParamLimits

0xd897,	// (0x0005266a) main_cam5_pane_t5

0xd8ab,	// (0x0005267e) main_cam5_pane_t6_ParamLimits

0xd8ab,	// (0x0005267e) main_cam5_pane_t6

0xd8e4,	// (0x000526b7) main_cam5_pane_t7_ParamLimits

0xd8e4,	// (0x000526b7) main_cam5_pane_t7

0xd8f6,	// (0x000526c9) main_cam5_pane_t8_ParamLimits

0xd8f6,	// (0x000526c9) main_cam5_pane_t8

0xd912,	// (0x000526e5) main_cam5_pane_t9_ParamLimits

0xd912,	// (0x000526e5) main_cam5_pane_t9

0xd924,	// (0x000526f7) main_cam5_pane_t10_ParamLimits

0xd924,	// (0x000526f7) main_cam5_pane_t10

0xd936,	// (0x00052709) main_cam5_pane_t11_ParamLimits

0xd936,	// (0x00052709) main_cam5_pane_t11

0xd948,	// (0x0005271b) main_cam5_pane_t12_ParamLimits

0xd948,	// (0x0005271b) main_cam5_pane_t12

0xd95d,	// (0x00052730) main_cam5_pane_t13_ParamLimits

0xd95d,	// (0x00052730) main_cam5_pane_t13

0x000c,

0xf97e,	// (0x00054751) main_cam5_pane_t_ParamLimits

0xf97e,	// (0x00054751) main_cam5_pane_t

0x1411,	// (0x000461e4) popup_scut_keymap_window_ParamLimits

0x1411,	// (0x000461e4) popup_scut_keymap_window

0x71ff,	// (0x0004bfd2) aid_size_cell_brow_shortcut

0x2610,	// (0x000473e3) bg_popup_window_pane_cp010

0x720b,	// (0x0004bfde) grid_scut_pane

0x7217,	// (0x0004bfea) cell_scut_pane_ParamLimits

0x7217,	// (0x0004bfea) cell_scut_pane

0x722e,	// (0x0004c001) cell_scut_pane_g1

0xd97a,	// (0x0005274d) cell_scut_pane_t1

0xd989,	// (0x0005275c) cell_scut_pane_t2

0x7237,	// (0x0004c00a) cell_scut_pane_t3

0x0002,

0xf999,	// (0x0005476c) cell_scut_pane_t

0x53d1,	// (0x0004a1a4) main_mup3_pane_g8_ParamLimits

0x53d1,	// (0x0004a1a4) main_mup3_pane_g8

0x65df,	// (0x0004b3b2) area_vitu2_query_pane_ParamLimits

0x65df,	// (0x0004b3b2) area_vitu2_query_pane

0x0bf3,	// (0x000459c6) input_focus_pane_cp08

0xd998,	// (0x0005276b) area_vitu2_query_pane_g1

0x0cef,	// (0x00045ac2) area_vitu2_query_pane_g2

0x0001,

0xf9a0,	// (0x00054773) area_vitu2_query_pane_g

0x7245,	// (0x0004c018) area_vitu2_query_pane_t1_ParamLimits

0x7245,	// (0x0004c018) area_vitu2_query_pane_t1

0x7259,	// (0x0004c02c) area_vitu2_query_pane_t2_ParamLimits

0x7259,	// (0x0004c02c) area_vitu2_query_pane_t2

0x0cfe,	// (0x00045ad1) area_vitu2_query_pane_t3_ParamLimits

0x0cfe,	// (0x00045ad1) area_vitu2_query_pane_t3

0xcfad,	// (0x00051d80) area_vitu2_query_pane_t4_ParamLimits

0xcfad,	// (0x00051d80) area_vitu2_query_pane_t4

0xcfd5,	// (0x00051da8) area_vitu2_query_pane_t5_ParamLimits

0xcfd5,	// (0x00051da8) area_vitu2_query_pane_t5

0xcffd,	// (0x00051dd0) area_vitu2_query_pane_t6_ParamLimits

0xcffd,	// (0x00051dd0) area_vitu2_query_pane_t6

0x0006,

0xf9a5,	// (0x00054778) area_vitu2_query_pane_t_ParamLimits

0xf9a5,	// (0x00054778) area_vitu2_query_pane_t

0x726d,	// (0x0004c040) bg_button_pane_cp018

0x7279,	// (0x0004c04c) bg_button_pane_cp021

0x0d26,	// (0x00045af9) bg_button_pane_cp022

0x0d45,	// (0x00045b18) input_focus_pane_cp09

0xa8f7,	// (0x0004f6ca) aid_size_touch_mv_arrow_left

0xa922,	// (0x0004f6f5) aid_size_touch_mv_arrow_right

0xddc6,	// (0x00052b99) main_cset_slider_pane_g16_ParamLimits

0xddc6,	// (0x00052b99) main_cset_slider_pane_g16

0xddd2,	// (0x00052ba5) main_cset_slider_pane_g17_ParamLimits

0xddd2,	// (0x00052ba5) main_cset_slider_pane_g17

0x71ec,	// (0x0004bfbf) cell_cam4_burst_pane_g1_ParamLimits

0x128d,	// (0x00046060) compa_mode_pane

0x6dd6,	// (0x0004bba9) popup_vtel_slider_window_g3_ParamLimits

0x6dd6,	// (0x0004bba9) popup_vtel_slider_window_g3

0x6ded,	// (0x0004bbc0) popup_vtel_slider_window_g4_ParamLimits

0x6ded,	// (0x0004bbc0) popup_vtel_slider_window_g4

0x6e04,	// (0x0004bbd7) popup_vtel_slider_window_t1_ParamLimits

0x6e04,	// (0x0004bbd7) popup_vtel_slider_window_t1

0x128d,	// (0x00046060) main_cl_pane

0xbec2,	// (0x00050c95) popup_imed_adjust2_window_ParamLimits

0xab9b,	// (0x0004f96e) bg_tb_trans_pane_cp05_ParamLimits

0xc8da,	// (0x000516ad) popup_imed_adjust2_window_g1_ParamLimits

0xc8e9,	// (0x000516bc) popup_imed_adjust2_window_g2_ParamLimits

0xc8e9,	// (0x000516bc) popup_imed_adjust2_window_g2

0xc8f5,	// (0x000516c8) popup_imed_adjust2_window_g3_ParamLimits

0xc8f5,	// (0x000516c8) popup_imed_adjust2_window_g3

0x0002,

0xf720,	// (0x000544f3) popup_imed_adjust2_window_g_ParamLimits

0xf720,	// (0x000544f3) popup_imed_adjust2_window_g

0xc901,	// (0x000516d4) popup_imed_adjust2_window_t1_ParamLimits

0xc919,	// (0x000516ec) slider_imed_adjust_pane_ParamLimits

0xc92d,	// (0x00051700) slider_imed_adjust_pane_g1_ParamLimits

0xc93d,	// (0x00051710) slider_imed_adjust_pane_g2_ParamLimits

0xc94d,	// (0x00051720) slider_imed_adjust_pane_g3_ParamLimits

0xc95e,	// (0x00051731) slider_imed_adjust_pane_g4_ParamLimits

0xf727,	// (0x000544fa) slider_imed_adjust_pane_g_ParamLimits

0x6366,	// (0x0004b139) aid_touch_area_cam4_ParamLimits

0x6366,	// (0x0004b139) aid_touch_area_cam4

0xce51,	// (0x00051c24) battery_pane_cp01

0x6435,	// (0x0004b208) main_camera4_pane_g6_ParamLimits

0x6435,	// (0x0004b208) main_camera4_pane_g6

0x645f,	// (0x0004b232) main_camera4_pane_t2_ParamLimits

0x645f,	// (0x0004b232) main_camera4_pane_t2

0x0001,

0xf824,	// (0x000545f7) main_camera4_pane_t_ParamLimits

0xf824,	// (0x000545f7) main_camera4_pane_t

0x6494,	// (0x0004b267) aid_touch_area_vid4_ParamLimits

0x6494,	// (0x0004b267) aid_touch_area_vid4

0x64e8,	// (0x0004b2bb) main_video4_pane_g5_ParamLimits

0x64e8,	// (0x0004b2bb) main_video4_pane_g5

0x650d,	// (0x0004b2e0) vid4_progress_pane_ParamLimits

0x650d,	// (0x0004b2e0) vid4_progress_pane

0xd656,	// (0x00052429) main_cset_slider_pane_g18_ParamLimits

0xd656,	// (0x00052429) main_cset_slider_pane_g18

0xd83d,	// (0x00052610) cell_cam4_burst_pane_g2_ParamLimits

0xd83d,	// (0x00052610) cell_cam4_burst_pane_g2

0x0001,

0xf979,	// (0x0005474c) cell_cam4_burst_pane_g_ParamLimits

0xf979,	// (0x0005474c) cell_cam4_burst_pane_g

0x1d43,	// (0x00046b16) bg_cl_pane_ParamLimits

0x1d43,	// (0x00046b16) bg_cl_pane

0x7285,	// (0x0004c058) cl_header_pane_ParamLimits

0x7285,	// (0x0004c058) cl_header_pane

0x7299,	// (0x0004c06c) cl_listscroll_pane_ParamLimits

0x7299,	// (0x0004c06c) cl_listscroll_pane

0xd9a4,	// (0x00052777) bg_cl_pane_g1

0xd9ac,	// (0x0005277f) bg_cl_pane_g2

0xd9b4,	// (0x00052787) bg_cl_pane_g3

0xd9bc,	// (0x0005278f) bg_cl_pane_g4

0xd9c4,	// (0x00052797) bg_cl_pane_g5

0xd9cc,	// (0x0005279f) bg_cl_pane_g6

0xd9d4,	// (0x000527a7) bg_cl_pane_g7

0xd9dc,	// (0x000527af) bg_cl_pane_g8

0xd9e4,	// (0x000527b7) bg_cl_pane_g9

0x0008,

0xf9b4,	// (0x00054787) bg_cl_pane_g

0x72a9,	// (0x0004c07c) aid_height_cl_leading_ParamLimits

0x72a9,	// (0x0004c07c) aid_height_cl_leading

0x72b5,	// (0x0004c088) aid_height_cl_text_ParamLimits

0x72b5,	// (0x0004c088) aid_height_cl_text

0x1451,	// (0x00046224) bg_cl_header_pane_ParamLimits

0x1451,	// (0x00046224) bg_cl_header_pane

0x72d4,	// (0x0004c0a7) cl_header_pane_g1_ParamLimits

0x72d4,	// (0x0004c0a7) cl_header_pane_g1

0x72ea,	// (0x0004c0bd) cl_header_pane_t1_ParamLimits

0x72ea,	// (0x0004c0bd) cl_header_pane_t1

0xd9ec,	// (0x000527bf) cl_list_pane

0xd629,	// (0x000523fc) hc_scroll_pane_cp01

0x2e2a,	// (0x00047bfd) bg_cl_header_pane_g1

0xd4e9,	// (0x000522bc) bg_cl_header_pane_g2

0x2e4a,	// (0x00047c1d) bg_cl_header_pane_g3

0xd4f9,	// (0x000522cc) bg_cl_header_pane_g4

0xd4f1,	// (0x000522c4) bg_cl_header_pane_g5

0xd758,	// (0x0005252b) bg_cl_header_pane_g6

0xd511,	// (0x000522e4) bg_cl_header_pane_g7

0xd519,	// (0x000522ec) bg_cl_header_pane_g8

0xd509,	// (0x000522dc) bg_cl_header_pane_g9

0x0008,

0xf9c7,	// (0x0005479a) bg_cl_header_pane_g

0x7303,	// (0x0004c0d6) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x7303,	// (0x0004c0d6) hc_cl_list_double_graphic_heading_pane

0x7314,	// (0x0004c0e7) hc_cl_list_single_graphic_pane_ParamLimits

0x7314,	// (0x0004c0e7) hc_cl_list_single_graphic_pane

0x732d,	// (0x0004c100) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x732d,	// (0x0004c100) hc_cl_list_single_graphic_pane_g1

0x7339,	// (0x0004c10c) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x7339,	// (0x0004c10c) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf9da,	// (0x000547ad) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf9da,	// (0x000547ad) hc_cl_list_single_graphic_pane_g

0x734d,	// (0x0004c120) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x734d,	// (0x0004c120) hc_cl_list_single_graphic_pane_t1

0x732d,	// (0x0004c100) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x732d,	// (0x0004c100) hc_cl_list_double_graphic_heading_pane_g1

0x7362,	// (0x0004c135) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x7362,	// (0x0004c135) hc_cl_list_double_graphic_heading_pane_g2

0x7376,	// (0x0004c149) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x7376,	// (0x0004c149) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf9df,	// (0x000547b2) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf9df,	// (0x000547b2) hc_cl_list_double_graphic_heading_pane_g

0x738a,	// (0x0004c15d) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x738a,	// (0x0004c15d) hc_cl_list_double_graphic_heading_pane_t1

0x739f,	// (0x0004c172) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x739f,	// (0x0004c172) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf9e6,	// (0x000547b9) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf9e6,	// (0x000547b9) hc_cl_list_double_graphic_heading_pane_t

0xd051,	// (0x00051e24) vid4_progress_pane_g1

0xd061,	// (0x00051e34) vid4_progress_pane_g2

0x73b4,	// (0x0004c187) vid4_progress_pane_g3

0xd071,	// (0x00051e44) vid4_progress_pane_g4

0x0004,

0xf9eb,	// (0x000547be) vid4_progress_pane_g

0x73c6,	// (0x0004c199) vid4_progress_pane_t1

0xd089,	// (0x00051e5c) vid4_progress_pane_t2

0x0002,

0xf9f6,	// (0x000547c9) vid4_progress_pane_t

0x73dc,	// (0x0004c1af) wait_bar_pane_cp07

0xc18e,	// (0x00050f61) blid_firmament_pane_ParamLimits

0xc1d1,	// (0x00050fa4) popup_blid_sat_info2_window_g1

0xc1f5,	// (0x00050fc8) popup_blid_sat_info2_window_t3

0xc203,	// (0x00050fd6) popup_blid_sat_info2_window_t4

0xc211,	// (0x00050fe4) popup_blid_sat_info2_window_t5

0xc21f,	// (0x00050ff2) popup_blid_sat_info2_window_t6

0xc22f,	// (0x00051002) popup_blid_sat_info2_window_t7

0xc23d,	// (0x00051010) popup_blid_sat_info2_window_t8

0xc24b,	// (0x0005101e) popup_blid_sat_info2_window_t9

0xc259,	// (0x0005102c) popup_blid_sat_info2_window_t10

0xc31a,	// (0x000510ed) aid_firma_cardinal_ParamLimits

0xc32e,	// (0x00051101) blid_firmament_pane_t1_ParamLimits

0xc345,	// (0x00051118) blid_firmament_pane_t2_ParamLimits

0xc35c,	// (0x0005112f) blid_firmament_pane_t3_ParamLimits

0xc373,	// (0x00051146) blid_firmament_pane_t4_ParamLimits

0xf619,	// (0x000543ec) blid_firmament_pane_t_ParamLimits

0xc38a,	// (0x0005115d) blid_sat_info_pane_ParamLimits

0x1451,	// (0x00046224) main_cam_set_pane_ParamLimits

0x5bae,	// (0x0004a981) aid_size_cell_colour_35_ParamLimits

0x5bce,	// (0x0004a9a1) aid_size_cell_colour_112_ParamLimits

0x5bee,	// (0x0004a9c1) aid_size_cell_effect_ParamLimits

0xab9b,	// (0x0004f96e) bg_tb_trans_pane_cp02_ParamLimits

0x3a77,	// (0x0004884a) heading_imed_pane_ParamLimits

0x5c0e,	// (0x0004a9e1) listscroll_imed_pane_ParamLimits

0xb577,	// (0x0005034a) popup_call2_audio_first_window_g5_ParamLimits

0xb577,	// (0x0005034a) popup_call2_audio_first_window_g5

0x5f72,	// (0x0004ad45) aid_size_touch_image3_arrow_left_ParamLimits

0x5f72,	// (0x0004ad45) aid_size_touch_image3_arrow_left

0x5f9e,	// (0x0004ad71) aid_size_touch_image3_arrow_right_ParamLimits

0x5f9e,	// (0x0004ad71) aid_size_touch_image3_arrow_right

0xd09e,	// (0x00051e71) vid4_progress_pane_t3

0x5db1,	// (0x0004ab84) main_hwr_training_symbol_option_pane_ParamLimits

0x5db1,	// (0x0004ab84) main_hwr_training_symbol_option_pane

0xca68,	// (0x0005183b) popup_hwr_training_preview_window_ParamLimits

0xca68,	// (0x0005183b) popup_hwr_training_preview_window

0x5dd1,	// (0x0004aba4) hwr_training_navi_pane_g5_ParamLimits

0x5dd1,	// (0x0004aba4) hwr_training_navi_pane_g5

0xd4d7,	// (0x000522aa) popup_char_count_window

0x1451,	// (0x00046224) bg_popup_sub_pane_cp20_ParamLimits

0x6f14,	// (0x0004bce7) list_vitu2_match_list_pane_ParamLimits

0x6f20,	// (0x0004bcf3) vitu2_page_scroll_pane_ParamLimits

0x6f20,	// (0x0004bcf3) vitu2_page_scroll_pane

0xd9fe,	// (0x000527d1) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd9fe,	// (0x000527d1) list_single_hwr_training_symbol_option_pane

0xda11,	// (0x000527e4) list_single_hwr_training_symbol_option_pane_g1

0xda19,	// (0x000527ec) list_single_hwr_training_symbol_option_pane_t1

0xda27,	// (0x000527fa) bg_button_pane_cp023

0xda30,	// (0x00052803) bg_button_pane_cp024

0xda63,	// (0x00052836) vitu2_page_scroll_pane_g1

0xda6b,	// (0x0005283e) vitu2_page_scroll_pane_g2

0x0001,

0xf9fd,	// (0x000547d0) vitu2_page_scroll_pane_g

0xda73,	// (0x00052846) vitu2_page_scroll_pane_t1

0x1e9e,	// (0x00046c71) popup_char_count_window_g1

0xda82,	// (0x00052855) popup_char_count_window_g2

0xd8db,	// (0x000526ae) popup_char_count_window_g3

0x0002,

0xfa02,	// (0x000547d5) popup_char_count_window_g

0xda8b,	// (0x0005285e) popup_char_count_window_t1

0x128d,	// (0x00046060) main_vded2_pane

0xc8c6,	// (0x00051699) aid_size_cell_imed_line

0xc8d0,	// (0x000516a3) grid_imed_line_width_pane

0xcf01,	// (0x00051cd4) vid4_indicators_pane_g4

0xda99,	// (0x0005286c) cell_imed_line_width_pane_ParamLimits

0xda99,	// (0x0005286c) cell_imed_line_width_pane

0xdaad,	// (0x00052880) cell_imed_line_width_pane_g1

0xdab6,	// (0x00052889) cell_imed_line_width_pane_g2

0x0001,

0xfa09,	// (0x000547dc) cell_imed_line_width_pane_g

0x73ed,	// (0x0004c1c0) main_vded2_pane_g1_ParamLimits

0x73ed,	// (0x0004c1c0) main_vded2_pane_g1

0x7403,	// (0x0004c1d6) main_vded2_pane_g2_ParamLimits

0x7403,	// (0x0004c1d6) main_vded2_pane_g2

0x0001,

0xfa0e,	// (0x000547e1) main_vded2_pane_g_ParamLimits

0xfa0e,	// (0x000547e1) main_vded2_pane_g

0x7415,	// (0x0004c1e8) vded2_slider_pane_ParamLimits

0x7415,	// (0x0004c1e8) vded2_slider_pane

0x7425,	// (0x0004c1f8) aid_size_touch_vded2_end

0x742f,	// (0x0004c202) aid_size_touch_vded2_playhead

0xdabe,	// (0x00052891) aid_size_touch_vded2_start

0xdac6,	// (0x00052899) vded2_slider_bg_pane

0xdacf,	// (0x000528a2) vded2_slider_pane_g1

0xdad8,	// (0x000528ab) vded2_slider_pane_g2

0x7439,	// (0x0004c20c) vded2_slider_pane_g3

0x0002,

0xfa13,	// (0x000547e6) vded2_slider_pane_g

0xdae0,	// (0x000528b3) vded2_slider_bg_pane_g1

0xdae9,	// (0x000528bc) vded2_slider_bg_pane_g2

0xdaf2,	// (0x000528c5) vded2_slider_bg_pane_g3

0x0002,

0xfa1a,	// (0x000547ed) vded2_slider_bg_pane_g

0x4226,	// (0x00048ff9) aid_postcard_touch_down_pane_ParamLimits

0x4226,	// (0x00048ff9) aid_postcard_touch_down_pane

0x423c,	// (0x0004900f) aid_postcard_touch_up_pane_ParamLimits

0x423c,	// (0x0004900f) aid_postcard_touch_up_pane

0x128d,	// (0x00046060) main_blid2_pane

0xbea8,	// (0x00050c7b) popup_blid2_search_window

0x128d,	// (0x00046060) blid2_gps_pane

0x128d,	// (0x00046060) blid2_navig_pane

0x128d,	// (0x00046060) blid2_search_pane

0x128d,	// (0x00046060) blid2_tripm_pane

0x7444,	// (0x0004c217) blid2_search_pane_g1_ParamLimits

0x7444,	// (0x0004c217) blid2_search_pane_g1

0x745c,	// (0x0004c22f) blid2_search_pane_t1_ParamLimits

0x745c,	// (0x0004c22f) blid2_search_pane_t1

0x746e,	// (0x0004c241) aid_size_cell_blid2_gps_ParamLimits

0x746e,	// (0x0004c241) aid_size_cell_blid2_gps

0x7486,	// (0x0004c259) blid2_gps_pane_g1_ParamLimits

0x7486,	// (0x0004c259) blid2_gps_pane_g1

0x749a,	// (0x0004c26d) grid_blid2_satellite_pane_ParamLimits

0x749a,	// (0x0004c26d) grid_blid2_satellite_pane

0x74b4,	// (0x0004c287) blid2_navig_pane_g1_ParamLimits

0x74b4,	// (0x0004c287) blid2_navig_pane_g1

0x74c0,	// (0x0004c293) blid2_navig_pane_t1_ParamLimits

0x74c0,	// (0x0004c293) blid2_navig_pane_t1

0x74db,	// (0x0004c2ae) blid2_navig_pane_t2_ParamLimits

0x74db,	// (0x0004c2ae) blid2_navig_pane_t2

0x0001,

0xfa21,	// (0x000547f4) blid2_navig_pane_t_ParamLimits

0xfa21,	// (0x000547f4) blid2_navig_pane_t

0x74f6,	// (0x0004c2c9) blid2_navig_ring_pane_ParamLimits

0x74f6,	// (0x0004c2c9) blid2_navig_ring_pane

0x750f,	// (0x0004c2e2) blid2_speed_pane_ParamLimits

0x750f,	// (0x0004c2e2) blid2_speed_pane

0x751b,	// (0x0004c2ee) blid2_tripm_pane_g1_ParamLimits

0x751b,	// (0x0004c2ee) blid2_tripm_pane_g1

0x7536,	// (0x0004c309) blid2_tripm_pane_g2_ParamLimits

0x7536,	// (0x0004c309) blid2_tripm_pane_g2

0x754a,	// (0x0004c31d) blid2_tripm_pane_g3_ParamLimits

0x754a,	// (0x0004c31d) blid2_tripm_pane_g3

0x755e,	// (0x0004c331) blid2_tripm_pane_g4_ParamLimits

0x755e,	// (0x0004c331) blid2_tripm_pane_g4

0x7572,	// (0x0004c345) blid2_tripm_pane_g5_ParamLimits

0x7572,	// (0x0004c345) blid2_tripm_pane_g5

0x0005,

0xfa26,	// (0x000547f9) blid2_tripm_pane_g_ParamLimits

0xfa26,	// (0x000547f9) blid2_tripm_pane_g

0x7598,	// (0x0004c36b) blid2_tripm_pane_t1_ParamLimits

0x7598,	// (0x0004c36b) blid2_tripm_pane_t1

0x75b3,	// (0x0004c386) blid2_tripm_pane_t2_ParamLimits

0x75b3,	// (0x0004c386) blid2_tripm_pane_t2

0x75cc,	// (0x0004c39f) blid2_tripm_pane_t3_ParamLimits

0x75cc,	// (0x0004c39f) blid2_tripm_pane_t3

0x0003,

0xfa33,	// (0x00054806) blid2_tripm_pane_t_ParamLimits

0xfa33,	// (0x00054806) blid2_tripm_pane_t

0x7613,	// (0x0004c3e6) cell_blid2_satellite_pane_ParamLimits

0x7613,	// (0x0004c3e6) cell_blid2_satellite_pane

0x7631,	// (0x0004c404) cell_blid2_satellite_pane_g1

0xdafb,	// (0x000528ce) cell_blid2_satellite_pane_t1

0x1cd1,	// (0x00046aa4) blid2_speed_pane_g1

0xdb09,	// (0x000528dc) blid2_speed_pane_t1

0xdb17,	// (0x000528ea) blid2_speed_pane_t2

0x0001,

0xfa3c,	// (0x0005480f) blid2_speed_pane_t

0x1cd1,	// (0x00046aa4) blid2_navig_ring_pane_g1

0x763a,	// (0x0004c40d) blid2_navig_ring_pane_g2

0x7642,	// (0x0004c415) blid2_navig_ring_pane_g3

0x764a,	// (0x0004c41d) blid2_navig_ring_pane_g4

0x7652,	// (0x0004c425) blid2_navig_ring_pane_g5

0x0004,

0xfa41,	// (0x00054814) blid2_navig_ring_pane_g

0x128d,	// (0x00046060) bg_popup_window_pane_cp011

0xdb25,	// (0x000528f8) popup_blid2_search_window_g1

0xdb2d,	// (0x00052900) popup_blid2_search_window_t1

0xdb3b,	// (0x0005290e) popup_blid2_search_window_t2

0x0001,

0xfa4c,	// (0x0005481f) popup_blid2_search_window_t

0x2cf4,	// (0x00047ac7) main_browser_pane_g1

0x1d43,	// (0x00046b16) main_browser_pane_ParamLimits

0x1451,	// (0x00046224) bg_button_pane_cp011_ParamLimits

0x67f7,	// (0x0004b5ca) cell_vitu2_function_pane_g1_ParamLimits

0xab9b,	// (0x0004f96e) bg_popup_sub_pane_cp22_ParamLimits

0x0bf3,	// (0x000459c6) input_focus_pane_cp08_ParamLimits

0x708d,	// (0x0004be60) popup_vitu2_query_button_pane_ParamLimits

0x708d,	// (0x0004be60) popup_vitu2_query_button_pane

0x0c0e,	// (0x000459e1) popup_vitu2_query_input_button_pane

0xd793,	// (0x00052566) popup_vitu2_query_window_g1_ParamLimits

0x0c16,	// (0x000459e9) popup_vitu2_query_window_g2_ParamLimits

0xf94d,	// (0x00054720) popup_vitu2_query_window_g_ParamLimits

0x128d,	// (0x00046060) bg_button_pane_cp026

0x765a,	// (0x0004c42d) popup_vitu2_query_input_button_pane_g1

0x128d,	// (0x00046060) bg_button_pane_cp025

0xdb49,	// (0x0005291c) popup_vitu2_query_button_pane_t1

0x509f,	// (0x00049e72) main_mp3_pane_t6

0x50ad,	// (0x00049e80) popup_slider_window_cp01

0xce6d,	// (0x00051c40) cam4_battery_pane

0xcec0,	// (0x00051c93) cam4_battery_pane_cp02

0xd049,	// (0x00051e1c) cam4_battery_pane_cp01

0xd049,	// (0x00051e1c) cam4_battery_pane_cp03

0x1cd1,	// (0x00046aa4) cam4_battery_pane_g1

0xdb57,	// (0x0005292a) cam4_battery_pane_g2

0x0001,

0xfa51,	// (0x00054824) cam4_battery_pane_g

0xc267,	// (0x0005103a) popup_blid_sat_info2_window_t11

0xa8f7,	// (0x0004f6ca) aid_size_touch_mv_arrow_left_ParamLimits

0xa922,	// (0x0004f6f5) aid_size_touch_mv_arrow_right_ParamLimits

0xa980,	// (0x0004f753) navi_pane_g1_ParamLimits

0xa98c,	// (0x0004f75f) navi_pane_g2_ParamLimits

0xa9ba,	// (0x0004f78d) navi_pane_g3_ParamLimits

0xf32f,	// (0x00054102) navi_pane_g_ParamLimits

0x3f3d,	// (0x00048d10) navi_pane_mv_t1_ParamLimits

0x5c1a,	// (0x0004a9ed) grid_imed_effect_pane_ParamLimits

0x28a4,	// (0x00047677) aid_placing_vt_slider_lsc

0x28b4,	// (0x00047687) aid_placing_vt_slider_prt

0x1451,	// (0x00046224) bg_tb_trans_pane_cp01_ParamLimits

0xc505,	// (0x000512d8) popup_image_details_window_g1_ParamLimits

0xc518,	// (0x000512eb) popup_image_details_window_g2_ParamLimits

0xc52d,	// (0x00051300) popup_image_details_window_g3_ParamLimits

0xc52d,	// (0x00051300) popup_image_details_window_g3

0xf659,	// (0x0005442c) popup_image_details_window_g_ParamLimits

0xc541,	// (0x00051314) popup_image_details_window_t1_ParamLimits

0xc553,	// (0x00051326) popup_image_details_window_t2_ParamLimits

0xc56c,	// (0x0005133f) popup_image_details_window_t3_ParamLimits

0xc580,	// (0x00051353) popup_image_details_window_t4_ParamLimits

0xc59b,	// (0x0005136e) popup_image_details_window_t5_ParamLimits

0xf660,	// (0x00054433) popup_image_details_window_t_ParamLimits

0x72c1,	// (0x0004c094) cl_header_name_pane_ParamLimits

0x72c1,	// (0x0004c094) cl_header_name_pane

0x7662,	// (0x0004c435) cl_header_name_pane_t1_ParamLimits

0x7662,	// (0x0004c435) cl_header_name_pane_t1

0x7683,	// (0x0004c456) cl_header_name_pane_t2_ParamLimits

0x7683,	// (0x0004c456) cl_header_name_pane_t2

0x76c5,	// (0x0004c498) cl_header_name_pane_t3_ParamLimits

0x76c5,	// (0x0004c498) cl_header_name_pane_t3

0x0002,

0xfa56,	// (0x00054829) cl_header_name_pane_t_ParamLimits

0xfa56,	// (0x00054829) cl_header_name_pane_t

0xaa49,	// (0x0004f81c) navi_pane_mv_g2_ParamLimits

0xd4bf,	// (0x00052292) field_vitu2_entry_pane_g1_ParamLimits

0xd4cb,	// (0x0005229e) field_vitu2_entry_pane_g2_ParamLimits

0xab79,	// (0x0004f94c) field_vitu2_entry_pane_g3_ParamLimits

0xab79,	// (0x0004f94c) field_vitu2_entry_pane_g3

0xf856,	// (0x00054629) field_vitu2_entry_pane_g_ParamLimits

0x6773,	// (0x0004b546) cell_vitu2_itu_pane_g1_ParamLimits

0x678b,	// (0x0004b55e) cell_vitu2_itu_pane_g2_ParamLimits

0x678b,	// (0x0004b55e) cell_vitu2_itu_pane_g2

0x0001,

0xf862,	// (0x00054635) cell_vitu2_itu_pane_g_ParamLimits

0xf862,	// (0x00054635) cell_vitu2_itu_pane_g

0x1451,	// (0x00046224) bg_vkb2_func_pane_cp05_ParamLimits

0x1451,	// (0x00046224) bg_vkb2_func_pane_cp05

0x1451,	// (0x00046224) bg_vkb2_func_pane_cp03

0x1451,	// (0x00046224) bg_vkb2_func_pane_cp04

0x1451,	// (0x00046224) bg_vkb2_func_pane_cp10_ParamLimits

0x1451,	// (0x00046224) bg_vkb2_func_pane_cp10

0x0d35,	// (0x00045b08) bg_vkb2_func_pane_cp08

0x726d,	// (0x0004c040) bg_vkb2_func_pane_cp06

0x7279,	// (0x0004c04c) bg_vkb2_func_pane_cp07

0xda39,	// (0x0005280c) bg_vkb2_func_pane_cp11_ParamLimits

0xda39,	// (0x0005280c) bg_vkb2_func_pane_cp11

0xda4e,	// (0x00052821) bg_vkb2_func_pane_cp12_ParamLimits

0xda4e,	// (0x00052821) bg_vkb2_func_pane_cp12

0x128d,	// (0x00046060) bg_vkb2_func_pane_cp09

0xd4e9,	// (0x000522bc) bg_vkb2_func_pane_g1

0x2e4a,	// (0x00047c1d) bg_vkb2_func_pane_g2

0xd4f1,	// (0x000522c4) bg_vkb2_func_pane_g3

0xd4f9,	// (0x000522cc) bg_vkb2_func_pane_g4

0xd758,	// (0x0005252b) bg_vkb2_func_pane_g5

0xd511,	// (0x000522e4) bg_vkb2_func_pane_g6

0xd519,	// (0x000522ec) bg_vkb2_func_pane_g7

0xd509,	// (0x000522dc) bg_vkb2_func_pane_g8

0x2e2a,	// (0x00047bfd) bg_vkb2_func_pane_g9

0x0008,

0xfa5d,	// (0x00054830) bg_vkb2_func_pane_g

0x7586,	// (0x0004c359) blid2_tripm_pane_g6_ParamLimits

0x7586,	// (0x0004c359) blid2_tripm_pane_g6

0xd3ff,	// (0x000521d2) mp4_progress_pane_g1

0x75ff,	// (0x0004c3d2) blid2_tripm_values_pane_ParamLimits

0x75ff,	// (0x0004c3d2) blid2_tripm_values_pane

0x76f6,	// (0x0004c4c9) blid2_tripm_values_pane_t1

0x7704,	// (0x0004c4d7) blid2_tripm_values_pane_t2

0x7712,	// (0x0004c4e5) blid2_tripm_values_pane_t3

0x7720,	// (0x0004c4f3) blid2_tripm_values_pane_t4

0x772e,	// (0x0004c501) blid2_tripm_values_pane_t5

0x773c,	// (0x0004c50f) blid2_tripm_values_pane_t6

0x774a,	// (0x0004c51d) blid2_tripm_values_pane_t7

0x7758,	// (0x0004c52b) blid2_tripm_values_pane_t8

0x7766,	// (0x0004c539) blid2_tripm_values_pane_t9

0x0008,

0xfa70,	// (0x00054843) blid2_tripm_values_pane_t

0x28f0,	// (0x000476c3) call_video_pane_t1_ParamLimits

0x290e,	// (0x000476e1) call_video_pane_t2_ParamLimits

0xf1dd,	// (0x00053fb0) call_video_pane_t_ParamLimits

0x0a86,	// (0x00045859) msg_header_pane_g1_ParamLimits

0xac6f,	// (0x0004fa42) msg_header_pane_g2_ParamLimits

0xac6f,	// (0x0004fa42) msg_header_pane_g2

0x0001,

0xf3cd,	// (0x000541a0) msg_header_pane_g_ParamLimits

0xf3cd,	// (0x000541a0) msg_header_pane_g

0x1d43,	// (0x00046b16) main_clock2_pane_ParamLimits

0x591b,	// (0x0004a6ee) grid_clock2_toolbar_pane_ParamLimits

0x591b,	// (0x0004a6ee) grid_clock2_toolbar_pane

0x591b,	// (0x0004a6ee) listscroll_clock2_pane_ParamLimits

0x591b,	// (0x0004a6ee) listscroll_clock2_pane

0x59ff,	// (0x0004a7d2) main_clock2_pane_t3_ParamLimits

0x59ff,	// (0x0004a7d2) main_clock2_pane_t3

0x5a23,	// (0x0004a7f6) main_clock2_pane_t4_ParamLimits

0x5a23,	// (0x0004a7f6) main_clock2_pane_t4

0xdb61,	// (0x00052934) cell_clock2_toolbar_pane

0xdb69,	// (0x0005293c) cell_clock2_toolbar_pane_cp01

0xdb69,	// (0x0005293c) cell_clock2_toolbar_pane_cp02

0xdb71,	// (0x00052944) cell_clock2_toolbar_pane_cp03

0xdb79,	// (0x0005294c) list_clock2_pane

0xa87c,	// (0x0004f64f) scroll_pane_cp10

0xdb81,	// (0x00052954) list_single_clock2_pane_ParamLimits

0xdb81,	// (0x00052954) list_single_clock2_pane

0x2610,	// (0x000473e3) list_highlight_pane_cp08

0xdb8e,	// (0x00052961) list_single_clock2_pane_t1

0xdb9c,	// (0x0005296f) list_single_clock2_pane_t2

0x0001,

0xfa83,	// (0x00054856) list_single_clock2_pane_t

0x128d,	// (0x00046060) bg_button_pane_cp10

0xdbaa,	// (0x0005297d) cell_clock2_toolbar_pane_g1

0x41b2,	// (0x00048f85) aid_main_viewer_pane_g1_ParamLimits

0x41b2,	// (0x00048f85) aid_main_viewer_pane_g1

0x41c0,	// (0x00048f93) aid_main_viewer_pane_g2_ParamLimits

0x41c0,	// (0x00048f93) aid_main_viewer_pane_g2

0x41ce,	// (0x00048fa1) aid_main_viewer_pane_g3_ParamLimits

0x41ce,	// (0x00048fa1) aid_main_viewer_pane_g3

0x41dd,	// (0x00048fb0) aid_main_viewer_pane_g4_ParamLimits

0x41dd,	// (0x00048fb0) aid_main_viewer_pane_g4

0x0003,

0xf3de,	// (0x000541b1) aid_main_viewer_pane_g_ParamLimits

0xf3de,	// (0x000541b1) aid_main_viewer_pane_g

0x4a82,	// (0x00049855) main_calc_pane_ParamLimits

0x4a96,	// (0x00049869) main_dialer2_pane_ParamLimits

0x128d,	// (0x00046060) main_cam6_pane

0x128d,	// (0x00046060) main_vid6_pane

0x5927,	// (0x0004a6fa) listscroll_gen_pane_cp06_ParamLimits

0x5927,	// (0x0004a6fa) listscroll_gen_pane_cp06

0x5a46,	// (0x0004a819) main_clock2_pane_t5_ParamLimits

0x5a46,	// (0x0004a819) main_clock2_pane_t5

0x5aa4,	// (0x0004a877) aid_call2_pane_cp10_ParamLimits

0x5ab6,	// (0x0004a889) aid_call_pane_cp10_ParamLimits

0xa8eb,	// (0x0004f6be) popup_clock_analogue_window_cp10_g1_ParamLimits

0xa8eb,	// (0x0004f6be) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5ac8,	// (0x0004a89b) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5ac8,	// (0x0004a89b) popup_clock_analogue_window_cp10_g4_ParamLimits

0xa8eb,	// (0x0004f6be) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf715,	// (0x000544e8) popup_clock_analogue_window_cp10_g_ParamLimits

0x5ade,	// (0x0004a8b1) popup_clock_analogue_window_cp10_t1_ParamLimits

0xd470,	// (0x00052243) cell_dialer2_keypad_pane_g2_ParamLimits

0xd470,	// (0x00052243) cell_dialer2_keypad_pane_g2

0x0001,

0xf7f5,	// (0x000545c8) cell_dialer2_keypad_pane_g_ParamLimits

0xf7f5,	// (0x000545c8) cell_dialer2_keypad_pane_g

0x1cdb,	// (0x00046aae) cell_dialer2_keypad_pane_t1

0x6b12,	// (0x0004b8e5) main_cset_text2_pane_ParamLimits

0x6b12,	// (0x0004b8e5) main_cset_text2_pane

0xd998,	// (0x0005276b) area_vitu2_query_pane_g1_ParamLimits

0x0cef,	// (0x00045ac2) area_vitu2_query_pane_g2_ParamLimits

0xf9a0,	// (0x00054773) area_vitu2_query_pane_g_ParamLimits

0xd025,	// (0x00051df8) area_vitu2_query_pane_t7_ParamLimits

0xd025,	// (0x00051df8) area_vitu2_query_pane_t7

0x726d,	// (0x0004c040) bg_button_pane_cp018_ParamLimits

0x7279,	// (0x0004c04c) bg_button_pane_cp021_ParamLimits

0x0d26,	// (0x00045af9) bg_button_pane_cp022_ParamLimits

0x0d35,	// (0x00045b08) bg_vkb2_func_pane_cp08_ParamLimits

0x726d,	// (0x0004c040) bg_vkb2_func_pane_cp06_ParamLimits

0x7279,	// (0x0004c04c) bg_vkb2_func_pane_cp07_ParamLimits

0x0d45,	// (0x00045b18) input_focus_pane_cp09_ParamLimits

0x7774,	// (0x0004c547) cam6_autofocus_pane_ParamLimits

0x7774,	// (0x0004c547) cam6_autofocus_pane

0x7780,	// (0x0004c553) cam6_image_uncrop_pane_ParamLimits

0x7780,	// (0x0004c553) cam6_image_uncrop_pane

0x7790,	// (0x0004c563) cam6_indi_pane_ParamLimits

0x7790,	// (0x0004c563) cam6_indi_pane

0x77a6,	// (0x0004c579) cam6_mode_pane_ParamLimits

0x77a6,	// (0x0004c579) cam6_mode_pane

0x77b8,	// (0x0004c58b) cam6_timer_pane_ParamLimits

0x77b8,	// (0x0004c58b) cam6_timer_pane

0x77c4,	// (0x0004c597) cam6_zoom_pane_ParamLimits

0x77c4,	// (0x0004c597) cam6_zoom_pane

0x77d1,	// (0x0004c5a4) cam6_mode_pane_g1_ParamLimits

0x77d1,	// (0x0004c5a4) cam6_mode_pane_g1

0x77e1,	// (0x0004c5b4) cam6_mode_pane_g2_ParamLimits

0x77e1,	// (0x0004c5b4) cam6_mode_pane_g2

0x77f1,	// (0x0004c5c4) cam6_mode_pane_g3_ParamLimits

0x77f1,	// (0x0004c5c4) cam6_mode_pane_g3

0x7801,	// (0x0004c5d4) cam6_mode_pane_g4_ParamLimits

0x7801,	// (0x0004c5d4) cam6_mode_pane_g4

0x0003,

0xfa88,	// (0x0005485b) cam6_mode_pane_g_ParamLimits

0xfa88,	// (0x0005485b) cam6_mode_pane_g

0xc01d,	// (0x00050df0) bg_tb_trans_pane_cp08_ParamLimits

0xc01d,	// (0x00050df0) bg_tb_trans_pane_cp08

0xdbb2,	// (0x00052985) cam6_battery_pane_ParamLimits

0xdbb2,	// (0x00052985) cam6_battery_pane

0xdbc8,	// (0x0005299b) cam6_indi_pane_g1_ParamLimits

0xdbc8,	// (0x0005299b) cam6_indi_pane_g1

0xdbda,	// (0x000529ad) cam6_indi_pane_g2_ParamLimits

0xdbda,	// (0x000529ad) cam6_indi_pane_g2

0xdbec,	// (0x000529bf) cam6_indi_pane_g3_ParamLimits

0xdbec,	// (0x000529bf) cam6_indi_pane_g3

0x0002,

0xfa91,	// (0x00054864) cam6_indi_pane_g_ParamLimits

0xfa91,	// (0x00054864) cam6_indi_pane_g

0xdbfe,	// (0x000529d1) cam6_indi_pane_t1_ParamLimits

0xdbfe,	// (0x000529d1) cam6_indi_pane_t1

0x6553,	// (0x0004b326) cam6_autofocus_pane_g1

0x655b,	// (0x0004b32e) cam6_autofocus_pane_g2

0x6563,	// (0x0004b336) cam6_autofocus_pane_g3

0x656b,	// (0x0004b33e) cam6_autofocus_pane_g4

0x0003,

0xfa98,	// (0x0005486b) cam6_autofocus_pane_g

0xdc24,	// (0x000529f7) cam6_timer_pane_g1

0xdc2c,	// (0x000529ff) cam6_timer_pane_t1

0xdc3a,	// (0x00052a0d) cam6_zoom_cont_pane

0xdc42,	// (0x00052a15) cam6_zoom_pane_g1

0xdc4b,	// (0x00052a1e) cam6_zoom_pane_g2

0x7811,	// (0x0004c5e4) cam6_zoom_pane_g3

0x0002,

0xfaa1,	// (0x00054874) cam6_zoom_pane_g

0x1cd1,	// (0x00046aa4) cam6_battery_pane_g1

0x1cd1,	// (0x00046aa4) cam6_battery_pane_g2

0x0001,

0xf0af,	// (0x00053e82) cam6_battery_pane_g

0xdc42,	// (0x00052a15) cam6_zoom_cont_pane_g1

0xdc4b,	// (0x00052a1e) cam6_zoom_cont_pane_g2

0xdc54,	// (0x00052a27) cam6_zoom_cont_pane_g3

0x0002,

0xfaa8,	// (0x0005487b) cam6_zoom_cont_pane_g

0x782f,	// (0x0004c602) cam6_mode_pane_cp_ParamLimits

0x782f,	// (0x0004c602) cam6_mode_pane_cp

0x7841,	// (0x0004c614) cam6_zoom_pane_cp_ParamLimits

0x7841,	// (0x0004c614) cam6_zoom_pane_cp

0x784d,	// (0x0004c620) vid6_image_uncrop_cif_pane_ParamLimits

0x784d,	// (0x0004c620) vid6_image_uncrop_cif_pane

0x785d,	// (0x0004c630) vid6_image_uncrop_nhd_pane_ParamLimits

0x785d,	// (0x0004c630) vid6_image_uncrop_nhd_pane

0x786c,	// (0x0004c63f) vid6_image_uncrop_vga_pane_ParamLimits

0x786c,	// (0x0004c63f) vid6_image_uncrop_vga_pane

0x787b,	// (0x0004c64e) vid6_image_uncrop_wvga_pane_ParamLimits

0x787b,	// (0x0004c64e) vid6_image_uncrop_wvga_pane

0x788a,	// (0x0004c65d) vid6_indi_pane_ParamLimits

0x788a,	// (0x0004c65d) vid6_indi_pane

0xc01d,	// (0x00050df0) bg_tb_trans_pane_cp09_ParamLimits

0xc01d,	// (0x00050df0) bg_tb_trans_pane_cp09

0xdc6c,	// (0x00052a3f) cam6_battery_pane_cp_ParamLimits

0xdc6c,	// (0x00052a3f) cam6_battery_pane_cp

0xdc78,	// (0x00052a4b) vid6_indi_pane_g1_ParamLimits

0xdc78,	// (0x00052a4b) vid6_indi_pane_g1

0xdc8a,	// (0x00052a5d) vid6_indi_pane_g2_ParamLimits

0xdc8a,	// (0x00052a5d) vid6_indi_pane_g2

0xdc9c,	// (0x00052a6f) vid6_indi_pane_g3_ParamLimits

0xdc9c,	// (0x00052a6f) vid6_indi_pane_g3

0xdcb1,	// (0x00052a84) vid6_indi_pane_g4_ParamLimits

0xdcb1,	// (0x00052a84) vid6_indi_pane_g4

0xdcc6,	// (0x00052a99) vid6_indi_pane_g5_ParamLimits

0xdcc6,	// (0x00052a99) vid6_indi_pane_g5

0x0004,

0xfaaf,	// (0x00054882) vid6_indi_pane_g_ParamLimits

0xfaaf,	// (0x00054882) vid6_indi_pane_g

0xdce0,	// (0x00052ab3) vid6_indi_pane_t1_ParamLimits

0xdce0,	// (0x00052ab3) vid6_indi_pane_t1

0xdcf6,	// (0x00052ac9) vid6_indi_pane_t2_ParamLimits

0xdcf6,	// (0x00052ac9) vid6_indi_pane_t2

0xdd1e,	// (0x00052af1) vid6_indi_pane_t3_ParamLimits

0xdd1e,	// (0x00052af1) vid6_indi_pane_t3

0xdd46,	// (0x00052b19) vid6_indi_pane_t4_ParamLimits

0xdd46,	// (0x00052b19) vid6_indi_pane_t4

0x0003,

0xfaba,	// (0x0005488d) vid6_indi_pane_t_ParamLimits

0xfaba,	// (0x0005488d) vid6_indi_pane_t

0xdd6a,	// (0x00052b3d) wait_bar_pane_cp08

0x78a2,	// (0x0004c675) main_cset_text2_pane_t1_ParamLimits

0x78a2,	// (0x0004c675) main_cset_text2_pane_t1

0x781a,	// (0x0004c5ed) listscroll_gen_pane_cp06_t1_ParamLimits

0x781a,	// (0x0004c5ed) listscroll_gen_pane_cp06_t1

0x128d,	// (0x00046060) main_cam6_set_pane

0x1bff,	// (0x000469d2) bg_tb_trans_pane_cp06_ParamLimits

0xce75,	// (0x00051c48) cam4_indicators_pane_g1_ParamLimits

0xce86,	// (0x00051c59) cam4_indicators_pane_g2_ParamLimits

0xf832,	// (0x00054605) cam4_indicators_pane_g_ParamLimits

0xce9e,	// (0x00051c71) cam4_indicators_pane_t1_ParamLimits

0x1451,	// (0x00046224) bg_tb_trans_pane_cp07_ParamLimits

0xcec8,	// (0x00051c9b) vid4_indicators_pane_g1_ParamLimits

0xcedc,	// (0x00051caf) vid4_indicators_pane_g2_ParamLimits

0xcef0,	// (0x00051cc3) vid4_indicators_pane_g3_ParamLimits

0xcf01,	// (0x00051cd4) vid4_indicators_pane_g4_ParamLimits

0xf844,	// (0x00054617) vid4_indicators_pane_g_ParamLimits

0xcf1d,	// (0x00051cf0) vid4_indicators_pane_t1_ParamLimits

0xd051,	// (0x00051e24) vid4_progress_pane_g1_ParamLimits

0xd061,	// (0x00051e34) vid4_progress_pane_g2_ParamLimits

0x73b4,	// (0x0004c187) vid4_progress_pane_g3_ParamLimits

0xd071,	// (0x00051e44) vid4_progress_pane_g4_ParamLimits

0xf9eb,	// (0x000547be) vid4_progress_pane_g_ParamLimits

0x73c6,	// (0x0004c199) vid4_progress_pane_t1_ParamLimits

0xd089,	// (0x00051e5c) vid4_progress_pane_t2_ParamLimits

0xd09e,	// (0x00051e71) vid4_progress_pane_t3_ParamLimits

0xf9f6,	// (0x000547c9) vid4_progress_pane_t_ParamLimits

0x73dc,	// (0x0004c1af) wait_bar_pane_cp07_ParamLimits

0x78c0,	// (0x0004c693) main_cam6_set_pane_g2_ParamLimits

0x78c0,	// (0x0004c693) main_cam6_set_pane_g2

0x78e4,	// (0x0004c6b7) main_cset6_listscroll_pane_ParamLimits

0x78e4,	// (0x0004c6b7) main_cset6_listscroll_pane

0x7900,	// (0x0004c6d3) main_cset6_slider_pane_ParamLimits

0x7900,	// (0x0004c6d3) main_cset6_slider_pane

0x7916,	// (0x0004c6e9) main_cset6_text2_pane_ParamLimits

0x7916,	// (0x0004c6e9) main_cset6_text2_pane

0xdd79,	// (0x00052b4c) main_cset6_text_pane

0xdd81,	// (0x00052b54) main_cset_list_pane_copy1_ParamLimits

0xdd81,	// (0x00052b54) main_cset_list_pane_copy1

0xdd91,	// (0x00052b64) scroll_pane_cp028_copy1

0x7924,	// (0x0004c6f7) cset_list_set_pane_copy1

0x7936,	// (0x0004c709) aid_position_infowindow_above_copy1

0x793e,	// (0x0004c711) aid_position_infowindow_below_copy1

0x0d69,	// (0x00045b3c) cset_list_set_pane_g1_copy1

0x0d71,	// (0x00045b44) cset_list_set_pane_g3_copy1_ParamLimits

0x0d71,	// (0x00045b44) cset_list_set_pane_g3_copy1

0x0d80,	// (0x00045b53) cset_list_set_pane_t1_copy1_ParamLimits

0x0d80,	// (0x00045b53) cset_list_set_pane_t1_copy1

0x1451,	// (0x00046224) list_highlight_pane_cp021_copy1_ParamLimits

0x1451,	// (0x00046224) list_highlight_pane_cp021_copy1

0xdd9a,	// (0x00052b6d) cset6_slider_pane_ParamLimits

0xdd9a,	// (0x00052b6d) cset6_slider_pane

0xddea,	// (0x00052bbd) main_cset6_slider_pane_g1_ParamLimits

0xddea,	// (0x00052bbd) main_cset6_slider_pane_g1

0x7946,	// (0x0004c719) main_cset6_slider_pane_g2_ParamLimits

0x7946,	// (0x0004c719) main_cset6_slider_pane_g2

0xde12,	// (0x00052be5) main_cset6_slider_pane_g3_ParamLimits

0xde12,	// (0x00052be5) main_cset6_slider_pane_g3

0x796e,	// (0x0004c741) main_cset6_slider_pane_g4_ParamLimits

0x796e,	// (0x0004c741) main_cset6_slider_pane_g4

0xde1e,	// (0x00052bf1) main_cset6_slider_pane_g5_ParamLimits

0xde1e,	// (0x00052bf1) main_cset6_slider_pane_g5

0xd63e,	// (0x00052411) main_cset6_slider_pane_g7_ParamLimits

0xd63e,	// (0x00052411) main_cset6_slider_pane_g7

0xd64a,	// (0x0005241d) main_cset6_slider_pane_g8_ParamLimits

0xd64a,	// (0x0005241d) main_cset6_slider_pane_g8

0x6bb8,	// (0x0004b98b) main_cset6_slider_pane_g9_ParamLimits

0x6bb8,	// (0x0004b98b) main_cset6_slider_pane_g9

0x6bc4,	// (0x0004b997) main_cset6_slider_pane_g10_ParamLimits

0x6bc4,	// (0x0004b997) main_cset6_slider_pane_g10

0x6bd0,	// (0x0004b9a3) main_cset6_slider_pane_g11_ParamLimits

0x6bd0,	// (0x0004b9a3) main_cset6_slider_pane_g11

0x6bdc,	// (0x0004b9af) main_cset6_slider_pane_g12_ParamLimits

0x6bdc,	// (0x0004b9af) main_cset6_slider_pane_g12

0x6be8,	// (0x0004b9bb) main_cset6_slider_pane_g13_ParamLimits

0x6be8,	// (0x0004b9bb) main_cset6_slider_pane_g13

0x6bf4,	// (0x0004b9c7) main_cset6_slider_pane_g14_ParamLimits

0x6bf4,	// (0x0004b9c7) main_cset6_slider_pane_g14

0x797a,	// (0x0004c74d) main_cset6_slider_pane_g15_ParamLimits

0x797a,	// (0x0004c74d) main_cset6_slider_pane_g15

0xddc6,	// (0x00052b99) main_cset6_slider_pane_g16_ParamLimits

0xddc6,	// (0x00052b99) main_cset6_slider_pane_g16

0xddd2,	// (0x00052ba5) main_cset6_slider_pane_g17_ParamLimits

0xddd2,	// (0x00052ba5) main_cset6_slider_pane_g17

0x0011,

0xfac3,	// (0x00054896) main_cset6_slider_pane_g_ParamLimits

0xfac3,	// (0x00054896) main_cset6_slider_pane_g

0xde2a,	// (0x00052bfd) main_cset6_slider_pane_t1_ParamLimits

0xde2a,	// (0x00052bfd) main_cset6_slider_pane_t1

0x79aa,	// (0x0004c77d) main_cset6_slider_pane_t2_ParamLimits

0x79aa,	// (0x0004c77d) main_cset6_slider_pane_t2

0x79d5,	// (0x0004c7a8) main_cset6_slider_pane_t3_ParamLimits

0x79d5,	// (0x0004c7a8) main_cset6_slider_pane_t3

0x7a00,	// (0x0004c7d3) main_cset6_slider_pane_t4_ParamLimits

0x7a00,	// (0x0004c7d3) main_cset6_slider_pane_t4

0x7a2b,	// (0x0004c7fe) main_cset6_slider_pane_t5_ParamLimits

0x7a2b,	// (0x0004c7fe) main_cset6_slider_pane_t5

0xde6b,	// (0x00052c3e) main_cset6_slider_pane_t7_ParamLimits

0xde6b,	// (0x00052c3e) main_cset6_slider_pane_t7

0x7a56,	// (0x0004c829) main_cset6_slider_pane_t8_ParamLimits

0x7a56,	// (0x0004c829) main_cset6_slider_pane_t8

0x7a7a,	// (0x0004c84d) main_cset6_slider_pane_t9_ParamLimits

0x7a7a,	// (0x0004c84d) main_cset6_slider_pane_t9

0x7a9e,	// (0x0004c871) main_cset6_slider_pane_t10_ParamLimits

0x7a9e,	// (0x0004c871) main_cset6_slider_pane_t10

0x7ac2,	// (0x0004c895) main_cset6_slider_pane_t11_ParamLimits

0x7ac2,	// (0x0004c895) main_cset6_slider_pane_t11

0xdea1,	// (0x00052c74) main_cset6_slider_pane_t14_ParamLimits

0xdea1,	// (0x00052c74) main_cset6_slider_pane_t14

0xdeda,	// (0x00052cad) main_cset6_slider_pane_t15_ParamLimits

0xdeda,	// (0x00052cad) main_cset6_slider_pane_t15

0x000b,

0xfae8,	// (0x000548bb) main_cset6_slider_pane_t_ParamLimits

0xfae8,	// (0x000548bb) main_cset6_slider_pane_t

0xd70c,	// (0x000524df) cset_slider_pane_g1_copy1

0xd715,	// (0x000524e8) cset_slider_pane_g2_copy1

0xd71e,	// (0x000524f1) cset_slider_pane_g3_copy1

0x128d,	// (0x00046060) bg_popup_sub_pane_cp011_copy1

0xdf1c,	// (0x00052cef) main_cset_text_pane_g1_copy1

0xd7a7,	// (0x0005257a) main_cset_text_pane_t1_copy1

0xd7b5,	// (0x00052588) main_cset_text_pane_t2_copy1

0xd7c3,	// (0x00052596) main_cset_text_pane_t3_copy1

0xd7d1,	// (0x000525a4) main_cset_text_pane_t4_copy1

0xd7df,	// (0x000525b2) main_cset_text_pane_t5_copy1

0xdf24,	// (0x00052cf7) main_cset_text_pane_t6_copy1

0xdf32,	// (0x00052d05) main_cset_text_pane_t7_copy1

0x78a2,	// (0x0004c675) main_cset_text2_pane_t1_copy1

0x1451,	// (0x00046224) main_ncimui_pane

0x4cda,	// (0x00049aad) popup_query_ncimui_window_ParamLimits

0x4cda,	// (0x00049aad) popup_query_ncimui_window

0xc678,	// (0x0005144b) field_cale_ev2_pane_g4_ParamLimits

0xc678,	// (0x0005144b) field_cale_ev2_pane_g4

0x5ec6,	// (0x0004ac99) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5ec6,	// (0x0004ac99) cell_video_dialer_keypad_pane_g2

0x0001,

0xf7cc,	// (0x0005459f) cell_video_dialer_keypad_pane_g_ParamLimits

0xf7cc,	// (0x0005459f) cell_video_dialer_keypad_pane_g

0x5ede,	// (0x0004acb1) cell_video_dialer_keypad_pane_t1

0x128d,	// (0x00046060) bg_popup_window_pane_cp012

0xbe04,	// (0x00050bd7) heading_pane_cp06

0xdf5e,	// (0x00052d31) ncim_query_content_pane

0x128d,	// (0x00046060) bg_popup_heading_pane_cp01

0xdf66,	// (0x00052d39) ncim_heading_pane_t1

0xdf74,	// (0x00052d47) ncim_indicator_popup_pane

0xdf86,	// (0x00052d59) ncim_query_button_pane

0xdf9a,	// (0x00052d6d) ncim_query_content_pane_t1

0xdfac,	// (0x00052d7f) ncim_query_content_pane_t2

0x0005,

0xfb2c,	// (0x000548ff) ncim_query_content_pane_t

0xdfe6,	// (0x00052db9) ncim_query_list_pane

0xdff8,	// (0x00052dcb) ncim_query_popup_pane

0xdf74,	// (0x00052d47) ncim_indicator_popup_pane_ParamLimits

0x7c0f,	// (0x0004c9e2) ncim_query_content_pane_g1_ParamLimits

0x7c0f,	// (0x0004c9e2) ncim_query_content_pane_g1

0xdf9a,	// (0x00052d6d) ncim_query_content_pane_t1_ParamLimits

0xdfac,	// (0x00052d7f) ncim_query_content_pane_t2_ParamLimits

0x7c1b,	// (0x0004c9ee) ncim_query_content_pane_t3_ParamLimits

0x7c1b,	// (0x0004c9ee) ncim_query_content_pane_t3

0x7c43,	// (0x0004ca16) ncim_query_content_pane_t4_ParamLimits

0x7c43,	// (0x0004ca16) ncim_query_content_pane_t4

0x7c6b,	// (0x0004ca3e) ncim_query_content_pane_t5_ParamLimits

0x7c6b,	// (0x0004ca3e) ncim_query_content_pane_t5

0xdfbe,	// (0x00052d91) ncim_query_content_pane_t6_ParamLimits

0xdfbe,	// (0x00052d91) ncim_query_content_pane_t6

0xfb2c,	// (0x000548ff) ncim_query_content_pane_t_ParamLimits

0xdfe6,	// (0x00052db9) ncim_query_list_pane_ParamLimits

0xdff8,	// (0x00052dcb) ncim_query_popup_pane_ParamLimits

0xe00c,	// (0x00052ddf) wait_bar_pane_cp04

0x128d,	// (0x00046060) input_focus_pane_cp011

0xe014,	// (0x00052de7) ncim_query_popup_pane_t1

0xe022,	// (0x00052df5) ncim_list_query_list_pane_ParamLimits

0xe022,	// (0x00052df5) ncim_list_query_list_pane

0x128d,	// (0x00046060) bg_button_pane_cp027

0xe02f,	// (0x00052e02) ncim_query_button_pane_g1

0x128d,	// (0x00046060) list_highlight_pane_cp012

0xe039,	// (0x00052e0c) ncim_list_query_list_pane_g1

0xe041,	// (0x00052e14) ncim_list_query_list_pane_t1

0xce92,	// (0x00051c65) cam4_indicators_pane_g3_ParamLimits

0xce92,	// (0x00051c65) cam4_indicators_pane_g3

0xcf0d,	// (0x00051ce0) vid4_indicators_pane_g5_ParamLimits

0xcf0d,	// (0x00051ce0) vid4_indicators_pane_g5

0xd07d,	// (0x00051e50) vid4_progress_pane_g5_ParamLimits

0xd07d,	// (0x00051e50) vid4_progress_pane_g5

0x7afa,	// (0x0004c8cd) main_ncimui_pane_g1

0x7b63,	// (0x0004c936) ncimui_group_query_pane_ParamLimits

0x7b63,	// (0x0004c936) ncimui_group_query_pane

0x7bab,	// (0x0004c97e) ncimui_list_pane_ParamLimits

0x7bab,	// (0x0004c97e) ncimui_list_pane

0x7bd2,	// (0x0004c9a5) ncimui_text_pane_ParamLimits

0x7bd2,	// (0x0004c9a5) ncimui_text_pane

0x7c93,	// (0x0004ca66) ncimui_text_pane_t1_ParamLimits

0x7c93,	// (0x0004ca66) ncimui_text_pane_t1

0xe04f,	// (0x00052e22) ncimui_list_single_graphic_pane_ParamLimits

0xe04f,	// (0x00052e22) ncimui_list_single_graphic_pane

0x7cb1,	// (0x0004ca84) ncimui_query_pane_ParamLimits

0x7cb1,	// (0x0004ca84) ncimui_query_pane

0x128d,	// (0x00046060) list_highlight_pane_cp013

0xe05f,	// (0x00052e32) ncim_list_query_list_pane_t1_copy1

0xe06d,	// (0x00052e40) ncim_list_single_graphic_pane_g1

0x7cc4,	// (0x0004ca97) ncim_query_button_pane_cp01

0x7cd0,	// (0x0004caa3) ncim_query_entry_pane_ParamLimits

0x7cd0,	// (0x0004caa3) ncim_query_entry_pane

0x7ce3,	// (0x0004cab6) ncimui_query_pane_g1

0x7cef,	// (0x0004cac2) ncimui_query_pane_t1_ParamLimits

0x7cef,	// (0x0004cac2) ncimui_query_pane_t1

0x1451,	// (0x00046224) input_focus_pane_cp012

0xe075,	// (0x00052e48) ncim_query_entry_pane_t1

0x1d43,	// (0x00046b16) main_im_pane_ParamLimits

0x1451,	// (0x00046224) main_mobtv_pane_ParamLimits

0x1451,	// (0x00046224) main_mobtv_pane

0x7992,	// (0x0004c765) main_cset6_slider_pane_g18_ParamLimits

0x7992,	// (0x0004c765) main_cset6_slider_pane_g18

0x799e,	// (0x0004c771) main_cset6_slider_pane_g19_ParamLimits

0x799e,	// (0x0004c771) main_cset6_slider_pane_g19

0x1c1b,	// (0x000469ee) bg_main_mobtv_pane_ParamLimits

0x1c1b,	// (0x000469ee) bg_main_mobtv_pane

0x7d08,	// (0x0004cadb) main_mobtv_info_pane

0x7d11,	// (0x0004cae4) main_mobtv_loading_pane_ParamLimits

0x7d11,	// (0x0004cae4) main_mobtv_loading_pane

0xe087,	// (0x00052e5a) main_mobtv_pg_channel_list_pane

0xe091,	// (0x00052e64) main_mobtv_pg_hdr_pane

0x7d1e,	// (0x0004caf1) main_mobtv_programe_curr_pane_ParamLimits

0x7d1e,	// (0x0004caf1) main_mobtv_programe_curr_pane

0x7d2b,	// (0x0004cafe) main_mobtv_programe_next_pane_ParamLimits

0x7d2b,	// (0x0004cafe) main_mobtv_programe_next_pane

0xe09a,	// (0x00052e6d) popup_mobtv_noti_window

0x1cd1,	// (0x00046aa4) main_tv_pg_hdr_pane_g1

0xe0a2,	// (0x00052e75) main_tv_pg_hdr_pane_g2

0xe0aa,	// (0x00052e7d) main_tv_pg_hdr_pane_g3

0xe0b2,	// (0x00052e85) main_tv_pg_hdr_pane_g4

0xe0ba,	// (0x00052e8d) main_tv_pg_hdr_pane_g5

0xe0c4,	// (0x00052e97) main_tv_pg_hdr_pane_g6

0xe0ce,	// (0x00052ea1) main_tv_pg_hdr_pane_g7

0xe0d8,	// (0x00052eab) main_tv_pg_hdr_pane_g8

0xe0e2,	// (0x00052eb5) main_tv_pg_hdr_pane_g9

0xe0ec,	// (0x00052ebf) main_tv_pg_hdr_pane_g10

0xe0f6,	// (0x00052ec9) main_tv_pg_hdr_pane_g11

0x000a,

0xfb39,	// (0x0005490c) main_tv_pg_hdr_pane_g

0xe100,	// (0x00052ed3) main_tv_pg_hdr_pane_t1

0xe10e,	// (0x00052ee1) main_tv_pg_hdr_pane_t2

0xe11c,	// (0x00052eef) main_tv_pg_hdr_pane_t3

0xe12c,	// (0x00052eff) main_tv_pg_hdr_pane_t4

0xe13c,	// (0x00052f0f) main_tv_pg_hdr_pane_t5

0x0004,

0xfb50,	// (0x00054923) main_tv_pg_hdr_pane_t

0xe14c,	// (0x00052f1f) single_mobtv_pg_channel_pane_ParamLimits

0xe14c,	// (0x00052f1f) single_mobtv_pg_channel_pane

0xe15e,	// (0x00052f31) single_mobtv_pg_channel_table_pane

0x389b,	// (0x0004866e) single_mobtv_pg_channel_thumb_pane

0xe167,	// (0x00052f3a) single_tv_pg_channel_pane_g1

0xe170,	// (0x00052f43) single_tv_pg_channel_pane_g2

0x0001,

0xfb5b,	// (0x0005492e) single_tv_pg_channel_pane_g

0x1bff,	// (0x000469d2) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x1bff,	// (0x000469d2) bg_single_mobtv_pg_channel_thumb_pane

0xe179,	// (0x00052f4c) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe179,	// (0x00052f4c) single_mobtv_pg_channel_thumb_pane_g1

0xe187,	// (0x00052f5a) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe187,	// (0x00052f5a) single_mobtv_pg_channel_thumb_pane_g2

0xe193,	// (0x00052f66) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe193,	// (0x00052f66) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfb60,	// (0x00054933) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfb60,	// (0x00054933) single_mobtv_pg_channel_thumb_pane_g

0xe19f,	// (0x00052f72) single_mobtv_pg_channel_thumb_pane_t1

0xe1ad,	// (0x00052f80) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfb67,	// (0x0005493a) single_mobtv_pg_channel_thumb_pane_t

0x1cd1,	// (0x00046aa4) bg_single_mobtv_pg_channel_table_pane_g1

0x1cd1,	// (0x00046aa4) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf0af,	// (0x00053e82) bg_single_mobtv_pg_channel_table_pane_g

0xe1bb,	// (0x00052f8e) single_mobtv_pg_channel_table_pane_t1

0xe1c9,	// (0x00052f9c) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfb6c,	// (0x0005493f) single_mobtv_pg_channel_table_pane_t

0x7d40,	// (0x0004cb13) main_mobtv_info_pane_g1_ParamLimits

0x7d40,	// (0x0004cb13) main_mobtv_info_pane_g1

0x7d5e,	// (0x0004cb31) main_mobtv_info_pane_t1_ParamLimits

0x7d5e,	// (0x0004cb31) main_mobtv_info_pane_t1

0x7dd6,	// (0x0004cba9) main_mobtv_info_pane_t2_ParamLimits

0x7dd6,	// (0x0004cba9) main_mobtv_info_pane_t2

0x0002,

0xfb76,	// (0x00054949) main_mobtv_info_pane_t_ParamLimits

0xfb76,	// (0x00054949) main_mobtv_info_pane_t

0x7e65,	// (0x0004cc38) wait_bar_pane_cp05

0x7e77,	// (0x0004cc4a) main_mobtv_loading_pane_g1_ParamLimits

0x7e77,	// (0x0004cc4a) main_mobtv_loading_pane_g1

0x7e8a,	// (0x0004cc5d) main_mobtv_loading_pane_g2_ParamLimits

0x7e8a,	// (0x0004cc5d) main_mobtv_loading_pane_g2

0x7e96,	// (0x0004cc69) main_mobtv_loading_pane_g3_ParamLimits

0x7e96,	// (0x0004cc69) main_mobtv_loading_pane_g3

0x0002,

0xfb7d,	// (0x00054950) main_mobtv_loading_pane_g_ParamLimits

0xfb7d,	// (0x00054950) main_mobtv_loading_pane_g

0xe1d7,	// (0x00052faa) main_mobtv_loading_pane_t1_ParamLimits

0xe1d7,	// (0x00052faa) main_mobtv_loading_pane_t1

0xe1ef,	// (0x00052fc2) main_mobtv_loading_pane_t2_ParamLimits

0xe1ef,	// (0x00052fc2) main_mobtv_loading_pane_t2

0x0001,

0xfb84,	// (0x00054957) main_mobtv_loading_pane_t_ParamLimits

0xfb84,	// (0x00054957) main_mobtv_loading_pane_t

0x7ea9,	// (0x0004cc7c) wait_bar_pane_cp06_ParamLimits

0x7ea9,	// (0x0004cc7c) wait_bar_pane_cp06

0xe213,	// (0x00052fe6) main_mobtv_programe_curr_pane_t1

0xe221,	// (0x00052ff4) main_mobtv_programe_curr_pane_t2

0x0001,

0xfb89,	// (0x0005495c) main_mobtv_programe_curr_pane_t

0xe22f,	// (0x00053002) main_mobtv_programe_next_pane_t1

0xe23d,	// (0x00053010) main_mobtv_programe_next_pane_t2

0xe24b,	// (0x0005301e) main_mobtv_programe_next_pane_t3

0x0002,

0xfb8e,	// (0x00054961) main_mobtv_programe_next_pane_t

0x128d,	// (0x00046060) bg_popup_mobtv_noti_window_pane

0xe259,	// (0x0005302c) popup_mobtv_noti_window_g1

0xe261,	// (0x00053034) popup_mobtv_noti_window_t1

0xe26f,	// (0x00053042) popup_mobtv_noti_window_t2

0x0001,

0xfb95,	// (0x00054968) popup_mobtv_noti_window_t

0x1cd1,	// (0x00046aa4) bg_popup_mobtv_noti_window_pane_g1

0x128d,	// (0x00046060) sc_clock_pane

0x128d,	// (0x00046060) main_fs_bigclock_pane

0x75e9,	// (0x0004c3bc) blid2_tripm_pane_t4_ParamLimits

0x75e9,	// (0x0004c3bc) blid2_tripm_pane_t4

0x1bff,	// (0x000469d2) sc_clock_pane_g1_ParamLimits

0x1bff,	// (0x000469d2) sc_clock_pane_g1

0x1cdb,	// (0x00046aae) sc_clock_pane_t1_ParamLimits

0x1cdb,	// (0x00046aae) sc_clock_pane_t1

0x1cdb,	// (0x00046aae) sc_clock_pane_t2_ParamLimits

0x1cdb,	// (0x00046aae) sc_clock_pane_t2

0x1cdb,	// (0x00046aae) sc_clock_pane_t3_ParamLimits

0x1cdb,	// (0x00046aae) sc_clock_pane_t3

0x0004,

0xfb9a,	// (0x0005496d) sc_clock_pane_t_ParamLimits

0xfb9a,	// (0x0005496d) sc_clock_pane_t

0x86d6,	// (0x0004d4a9) main_fs_bigclock_indicator_pane_ParamLimits

0x86d6,	// (0x0004d4a9) main_fs_bigclock_indicator_pane

0x7f07,	// (0x0004ccda) main_fs_bigclock_pane_g1_ParamLimits

0x7f07,	// (0x0004ccda) main_fs_bigclock_pane_g1

0x86e2,	// (0x0004d4b5) main_fs_bigclock_pane_t1_ParamLimits

0x86e2,	// (0x0004d4b5) main_fs_bigclock_pane_t1

0x86f4,	// (0x0004d4c7) main_fs_bigclock_pane_t2_ParamLimits

0x86f4,	// (0x0004d4c7) main_fs_bigclock_pane_t2

0x8708,	// (0x0004d4db) main_fs_bigclock_pane_t3_ParamLimits

0x8708,	// (0x0004d4db) main_fs_bigclock_pane_t3

0x0002,

0xfcfe,	// (0x00054ad1) main_fs_bigclock_pane_t_ParamLimits

0xfcfe,	// (0x00054ad1) main_fs_bigclock_pane_t

0xead7,	// (0x000538aa) main_fs_bigclock_indicator_pane_g1

0xdf8e,	// (0x00052d61) ncim_query_content_pane_g2_ParamLimits

0xdf8e,	// (0x00052d61) ncim_query_content_pane_g2

0x0001,

0xfb27,	// (0x000548fa) ncim_query_content_pane_g_ParamLimits

0xfb27,	// (0x000548fa) ncim_query_content_pane_g

0x1cdb,	// (0x00046aae) sc_clock_pane_t4_ParamLimits

0x1cdb,	// (0x00046aae) sc_clock_pane_t4

0x1451,	// (0x00046224) main_radioblah_pane

0xce17,	// (0x00051bea) cell_call4_button_pane_t1_copy1_ParamLimits

0xce17,	// (0x00051bea) cell_call4_button_pane_t1_copy1

0x7b12,	// (0x0004c8e5) main_ncimui_pane_t1_ParamLimits

0x7b12,	// (0x0004c8e5) main_ncimui_pane_t1

0x7b2c,	// (0x0004c8ff) main_ncimui_pane_t2_ParamLimits

0x7b2c,	// (0x0004c8ff) main_ncimui_pane_t2

0x0002,

0xfb20,	// (0x000548f3) main_ncimui_pane_t_ParamLimits

0xfb20,	// (0x000548f3) main_ncimui_pane_t

0xab9b,	// (0x0004f96e) main_radioblah_anim_pane_ParamLimits

0xab9b,	// (0x0004f96e) main_radioblah_anim_pane

0xab9b,	// (0x0004f96e) main_radioblah_info_pane_ParamLimits

0xab9b,	// (0x0004f96e) main_radioblah_info_pane

0xab87,	// (0x0004f95a) main_radioblah_pane_t1_ParamLimits

0xab87,	// (0x0004f95a) main_radioblah_pane_t1

0xab87,	// (0x0004f95a) main_radioblah_pane_t2_ParamLimits

0xab87,	// (0x0004f95a) main_radioblah_pane_t2

0x0003,

0xfbbb,	// (0x0005498e) main_radioblah_pane_t_ParamLimits

0xfbbb,	// (0x0005498e) main_radioblah_pane_t

0x1451,	// (0x00046224) main_radioblah_rocker_ctrl_pane_ParamLimits

0x1451,	// (0x00046224) main_radioblah_rocker_ctrl_pane

0xc009,	// (0x00050ddc) main_radioblah_info_pane_t1_ParamLimits

0xc009,	// (0x00050ddc) main_radioblah_info_pane_t1

0xe3f1,	// (0x000531c4) main_radioblah_info_pane_t2_ParamLimits

0xe3f1,	// (0x000531c4) main_radioblah_info_pane_t2

0x0003,

0xfbc4,	// (0x00054997) main_radioblah_info_pane_t_ParamLimits

0xfbc4,	// (0x00054997) main_radioblah_info_pane_t

0x1cd1,	// (0x00046aa4) main_radioblah_rocker_ctrl_pane_g1

0x1cd1,	// (0x00046aa4) main_radioblah_rocker_ctrl_pane_g2

0x1cd1,	// (0x00046aa4) main_radioblah_rocker_ctrl_pane_g3

0x1cd1,	// (0x00046aa4) main_radioblah_rocker_ctrl_pane_g4

0x1cd1,	// (0x00046aa4) main_radioblah_rocker_ctrl_pane_g5

0x1cd1,	// (0x00046aa4) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfbcd,	// (0x000549a0) main_radioblah_rocker_ctrl_pane_g

0x78a2,	// (0x0004c675) main_cset_text2_pane_t1_copy1_ParamLimits

0xce65,	// (0x00051c38) cam4_image_uncrop_qvga_pane

0xceb8,	// (0x00051c8b) vid4_image_uncrop_qcif_pane

0xd8bf,	// (0x00052692) cam6_image_uncrop_qvga_pane_ParamLimits

0xd8bf,	// (0x00052692) cam6_image_uncrop_qvga_pane

0xdc5c,	// (0x00052a2f) vid6_image_uncrop_qcif_pane_ParamLimits

0xdc5c,	// (0x00052a2f) vid6_image_uncrop_qcif_pane

0x128d,	// (0x00046060) bg_popup_preview_window_pane_cp03

0xdf40,	// (0x00052d13) list_cset_text2_pane

0xdf48,	// (0x00052d1b) main_cset6_text2_pane_g1

0xdf50,	// (0x00052d23) main_cset6_text2_pane_t1

0xec2b,	// (0x000539fe) list_cset_text2_pane_t1_ParamLimits

0xec2b,	// (0x000539fe) list_cset_text2_pane_t1

0x1451,	// (0x00046224) main_radioblah_pane_ParamLimits

0x7e51,	// (0x0004cc24) main_mobtv_info_pane_t3_ParamLimits

0x7e51,	// (0x0004cc24) main_mobtv_info_pane_t3

0xab79,	// (0x0004f94c) main_radioblah_pane_g1

0xe3c1,	// (0x00053194) main_radioblah_info_pane_g1

0x1cef,	// (0x00046ac2) main_radioblah_info_pane_t3_ParamLimits

0x1cef,	// (0x00046ac2) main_radioblah_info_pane_t3

0x381c,	// (0x000485ef) highlight_cell_cale_month_pane_ParamLimits

0x381c,	// (0x000485ef) highlight_cell_cale_month_pane

0x128d,	// (0x00046060) main_phob_fisheye_pane

0xc719,	// (0x000514ec) scroll_pane_cp0031_ParamLimits

0xc719,	// (0x000514ec) scroll_pane_cp0031

0xdd6a,	// (0x00052b3d) wait_bar_pane_cp08_ParamLimits

0x7924,	// (0x0004c6f7) cset_list_set_pane_copy1_ParamLimits

0xe440,	// (0x00053213) highlight_cell_cale_month_pane_g1

0x7f54,	// (0x0004cd27) highlight_cell_cale_month_pane_t1

0xd9ec,	// (0x000527bf) list_gen_pane_cp01

0xd629,	// (0x000523fc) scroll_pane_01

0x7f62,	// (0x0004cd35) list_single_double_fisheye_pane

0x0db2,	// (0x00045b85) list_double_fisheye_pane_g1_ParamLimits

0x0db2,	// (0x00045b85) list_double_fisheye_pane_g1

0x0dbe,	// (0x00045b91) list_double_fisheye_pane_g2_ParamLimits

0x0dbe,	// (0x00045b91) list_double_fisheye_pane_g2

0x7f6b,	// (0x0004cd3e) list_double_fisheye_pane_g3_ParamLimits

0x7f6b,	// (0x0004cd3e) list_double_fisheye_pane_g3

0x0004,

0xfbda,	// (0x000549ad) list_double_fisheye_pane_g_ParamLimits

0xfbda,	// (0x000549ad) list_double_fisheye_pane_g

0x0def,	// (0x00045bc2) list_double_fisheye_pane_t1_ParamLimits

0x0def,	// (0x00045bc2) list_double_fisheye_pane_t1

0x0e0a,	// (0x00045bdd) list_double_fisheye_pane_t2_ParamLimits

0x0e0a,	// (0x00045bdd) list_double_fisheye_pane_t2

0x0001,

0xfbe5,	// (0x000549b8) list_double_fisheye_pane_t_ParamLimits

0xfbe5,	// (0x000549b8) list_double_fisheye_pane_t

0x128d,	// (0x00046060) main_call5_pane

0x1451,	// (0x00046224) sc_swipe_pane_ParamLimits

0x1451,	// (0x00046224) sc_swipe_pane

0x7f8a,	// (0x0004cd5d) call5_image_pane_ParamLimits

0x7f8a,	// (0x0004cd5d) call5_image_pane

0x7fa7,	// (0x0004cd7a) call5_swipe_1_pane_ParamLimits

0x7fa7,	// (0x0004cd7a) call5_swipe_1_pane

0x7fba,	// (0x0004cd8d) call5_swipe_2_pane_ParamLimits

0x7fba,	// (0x0004cd8d) call5_swipe_2_pane

0x7fe5,	// (0x0004cdb8) popup_call5_audio_first_window_ParamLimits

0x7fe5,	// (0x0004cdb8) popup_call5_audio_first_window

0x1bff,	// (0x000469d2) call5_swipe_1_pane_g1_ParamLimits

0x1bff,	// (0x000469d2) call5_swipe_1_pane_g1

0xe448,	// (0x0005321b) call5_swipe_1_pane_g2_ParamLimits

0xe448,	// (0x0005321b) call5_swipe_1_pane_g2

0x0001,

0xfbea,	// (0x000549bd) call5_swipe_1_pane_g_ParamLimits

0xfbea,	// (0x000549bd) call5_swipe_1_pane_g

0xe454,	// (0x00053227) call5_swipe_1_pane_t1_ParamLimits

0xe454,	// (0x00053227) call5_swipe_1_pane_t1

0x1bff,	// (0x000469d2) call5_swipe_2_pane_g1_ParamLimits

0x1bff,	// (0x000469d2) call5_swipe_2_pane_g1

0xe469,	// (0x0005323c) call5_swipe_2_pane_g2_ParamLimits

0xe469,	// (0x0005323c) call5_swipe_2_pane_g2

0x0001,

0xfbef,	// (0x000549c2) call5_swipe_2_pane_g_ParamLimits

0xfbef,	// (0x000549c2) call5_swipe_2_pane_g

0xe475,	// (0x00053248) call5_swipe_2_pane_t1_ParamLimits

0xe475,	// (0x00053248) call5_swipe_2_pane_t1

0x1bff,	// (0x000469d2) sc_swipe_pane_g1_ParamLimits

0x1bff,	// (0x000469d2) sc_swipe_pane_g1

0x1c0d,	// (0x000469e0) sc_swipe_pane_g2_ParamLimits

0x1c0d,	// (0x000469e0) sc_swipe_pane_g2

0x0001,

0xf768,	// (0x0005453b) sc_swipe_pane_g_ParamLimits

0xf768,	// (0x0005453b) sc_swipe_pane_g

0x1cdb,	// (0x00046aae) sc_swipe_pane_t1_ParamLimits

0x1cdb,	// (0x00046aae) sc_swipe_pane_t1

0x128d,	// (0x00046060) main_cmail_launcher_pane

0x7ff6,	// (0x0004cdc9) aid_size_cell_cmail_l_ParamLimits

0x7ff6,	// (0x0004cdc9) aid_size_cell_cmail_l

0x8004,	// (0x0004cdd7) grid_cmail_l_pane_ParamLimits

0x8004,	// (0x0004cdd7) grid_cmail_l_pane

0x801e,	// (0x0004cdf1) cell_cmail_l_pane_ParamLimits

0x801e,	// (0x0004cdf1) cell_cmail_l_pane

0xe48a,	// (0x0005325d) cell_cmail_l_pane_g1_ParamLimits

0xe48a,	// (0x0005325d) cell_cmail_l_pane_g1

0xe496,	// (0x00053269) cell_cmail_l_pane_t1_ParamLimits

0xe496,	// (0x00053269) cell_cmail_l_pane_t1

0xe4ac,	// (0x0005327f) cell_cmail_l_pane_t2_ParamLimits

0xe4ac,	// (0x0005327f) cell_cmail_l_pane_t2

0x0001,

0xfbf4,	// (0x000549c7) cell_cmail_l_pane_t_ParamLimits

0xfbf4,	// (0x000549c7) cell_cmail_l_pane_t

0x1451,	// (0x00046224) grid_highlight_pane_cp018_ParamLimits

0x1451,	// (0x00046224) grid_highlight_pane_cp018

0x135d,	// (0x00046130) main2_pane_ParamLimits

0x135d,	// (0x00046130) main2_pane

0x1f57,	// (0x00046d2a) popup_sp_fs_action_menu_bg_pane_g1

0x1f5f,	// (0x00046d32) popup_sp_fs_action_menu_bg_pane_g2

0x1f67,	// (0x00046d3a) popup_sp_fs_action_menu_bg_pane_g3

0x1f6f,	// (0x00046d42) popup_sp_fs_action_menu_bg_pane_g4

0x1f77,	// (0x00046d4a) popup_sp_fs_action_menu_bg_pane_g5

0x1f7f,	// (0x00046d52) popup_sp_fs_action_menu_bg_pane_g6

0x1f87,	// (0x00046d5a) popup_sp_fs_action_menu_bg_pane_g7

0x1f8f,	// (0x00046d62) popup_sp_fs_action_menu_bg_pane_g8

0x1f97,	// (0x00046d6a) popup_sp_fs_action_menu_bg_pane_g9

0x1f9f,	// (0x00046d72) popup_sp_fs_action_menu_bg_pane_g10

0x1f9f,	// (0x00046d72) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf100,	// (0x00053ed3) popup_sp_fs_action_menu_bg_pane_g

0x1bff,	// (0x000469d2) list_medium_line_x2_t3_g3_g1_ParamLimits

0x1bff,	// (0x000469d2) list_medium_line_x2_t3_g3_g1

0x1bff,	// (0x000469d2) list_medium_line_x2_t3_g3_g2_ParamLimits

0x1bff,	// (0x000469d2) list_medium_line_x2_t3_g3_g2

0x1bff,	// (0x000469d2) list_medium_line_x2_t3_g3_g3_ParamLimits

0x1bff,	// (0x000469d2) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1ae,	// (0x00053f81) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1ae,	// (0x00053f81) list_medium_line_x2_t3_g3_g

0x1cdb,	// (0x00046aae) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1cdb,	// (0x00046aae) list_medium_line_x2_t3_g3_t1

0x1cdb,	// (0x00046aae) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1cdb,	// (0x00046aae) list_medium_line_x2_t3_g3_t2

0x1cdb,	// (0x00046aae) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1cdb,	// (0x00046aae) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1b5,	// (0x00053f88) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1b5,	// (0x00053f88) list_medium_line_x2_t3_g3_t

0x1bff,	// (0x000469d2) list_medium_line_x2_t3_g2_g1_ParamLimits

0x1bff,	// (0x000469d2) list_medium_line_x2_t3_g2_g1

0x1bff,	// (0x000469d2) list_medium_line_x2_t3_g2_g2_ParamLimits

0x1bff,	// (0x000469d2) list_medium_line_x2_t3_g2_g2

0x0001,

0xf1bc,	// (0x00053f8f) list_medium_line_x2_t3_g2_g_ParamLimits

0xf1bc,	// (0x00053f8f) list_medium_line_x2_t3_g2_g

0x1cdb,	// (0x00046aae) list_medium_line_x2_t3_g2_t1_ParamLimits

0x1cdb,	// (0x00046aae) list_medium_line_x2_t3_g2_t1

0x1cdb,	// (0x00046aae) list_medium_line_x2_t3_g2_t2_ParamLimits

0x1cdb,	// (0x00046aae) list_medium_line_x2_t3_g2_t2

0x1cdb,	// (0x00046aae) list_medium_line_x2_t3_g2_t3_ParamLimits

0x1cdb,	// (0x00046aae) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1b5,	// (0x00053f88) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1b5,	// (0x00053f88) list_medium_line_x2_t3_g2_t

0x1bff,	// (0x000469d2) list_medium_line_x2_t4_g4_g1_ParamLimits

0x1bff,	// (0x000469d2) list_medium_line_x2_t4_g4_g1

0x1bff,	// (0x000469d2) list_medium_line_x2_t4_g4_g2_ParamLimits

0x1bff,	// (0x000469d2) list_medium_line_x2_t4_g4_g2

0x1bff,	// (0x000469d2) list_medium_line_x2_t4_g4_g3_ParamLimits

0x1bff,	// (0x000469d2) list_medium_line_x2_t4_g4_g3

0x1bff,	// (0x000469d2) list_medium_line_x2_t4_g4_g4_ParamLimits

0x1bff,	// (0x000469d2) list_medium_line_x2_t4_g4_g4

0x0003,

0xf1c1,	// (0x00053f94) list_medium_line_x2_t4_g4_g_ParamLimits

0xf1c1,	// (0x00053f94) list_medium_line_x2_t4_g4_g

0x1cdb,	// (0x00046aae) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1cdb,	// (0x00046aae) list_medium_line_x2_t4_g4_t1

0x1cdb,	// (0x00046aae) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1cdb,	// (0x00046aae) list_medium_line_x2_t4_g4_t2

0x1cdb,	// (0x00046aae) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1cdb,	// (0x00046aae) list_medium_line_x2_t4_g4_t3

0x1cdb,	// (0x00046aae) list_medium_line_x2_t4_g4_t4_ParamLimits

0x1cdb,	// (0x00046aae) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1ca,	// (0x00053f9d) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1ca,	// (0x00053f9d) list_medium_line_x2_t4_g4_t

0x1bff,	// (0x000469d2) list_medium_line_x2_t2_g4_g1_ParamLimits

0x1bff,	// (0x000469d2) list_medium_line_x2_t2_g4_g1

0x1bff,	// (0x000469d2) list_medium_line_x2_t2_g4_g2_ParamLimits

0x1bff,	// (0x000469d2) list_medium_line_x2_t2_g4_g2

0x1bff,	// (0x000469d2) list_medium_line_x2_t2_g4_g3_ParamLimits

0x1bff,	// (0x000469d2) list_medium_line_x2_t2_g4_g3

0x1bff,	// (0x000469d2) list_medium_line_x2_t2_g4_g4_ParamLimits

0x1bff,	// (0x000469d2) list_medium_line_x2_t2_g4_g4

0x0003,

0xf1c1,	// (0x00053f94) list_medium_line_x2_t2_g4_g_ParamLimits

0xf1c1,	// (0x00053f94) list_medium_line_x2_t2_g4_g

0x1cdb,	// (0x00046aae) list_medium_line_x2_t2_g4_t1_ParamLimits

0x1cdb,	// (0x00046aae) list_medium_line_x2_t2_g4_t1

0x1cdb,	// (0x00046aae) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1cdb,	// (0x00046aae) list_medium_line_x2_t2_g4_t2

0x0001,

0xf191,	// (0x00053f64) list_medium_line_x2_t2_g4_t_ParamLimits

0xf191,	// (0x00053f64) list_medium_line_x2_t2_g4_t

0x1bff,	// (0x000469d2) list_medium_line_x2_t2_g3_g1_ParamLimits

0x1bff,	// (0x000469d2) list_medium_line_x2_t2_g3_g1

0x1bff,	// (0x000469d2) list_medium_line_x2_t2_g3_g2_ParamLimits

0x1bff,	// (0x000469d2) list_medium_line_x2_t2_g3_g2

0x1bff,	// (0x000469d2) list_medium_line_x2_t2_g3_g3_ParamLimits

0x1bff,	// (0x000469d2) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1ae,	// (0x00053f81) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1ae,	// (0x00053f81) list_medium_line_x2_t2_g3_g

0x1cdb,	// (0x00046aae) list_medium_line_x2_t2_g3_t1_ParamLimits

0x1cdb,	// (0x00046aae) list_medium_line_x2_t2_g3_t1

0x1cdb,	// (0x00046aae) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1cdb,	// (0x00046aae) list_medium_line_x2_t2_g3_t2

0x0001,

0xf191,	// (0x00053f64) list_medium_line_x2_t2_g3_t_ParamLimits

0xf191,	// (0x00053f64) list_medium_line_x2_t2_g3_t

0x3bb8,	// (0x0004898b) main_sp_fs_list_pane_ParamLimits

0x3bb8,	// (0x0004898b) main_sp_fs_list_pane

0xe2b3,	// (0x00053086) sp_fs_scroll_pane_ParamLimits

0xe2b3,	// (0x00053086) sp_fs_scroll_pane

0x3bc4,	// (0x00048997) list_medium_line_x2_t3_t1

0x3bc4,	// (0x00048997) list_medium_line_x2_t3_t2

0x3bc4,	// (0x00048997) list_medium_line_x2_t3_t3

0x0002,

0xf277,	// (0x0005404a) list_medium_line_x2_t3_t

0x3bc4,	// (0x00048997) list_medium_line_x3_t4_t1

0x3bc4,	// (0x00048997) list_medium_line_x3_t4_t2

0x3bc4,	// (0x00048997) list_medium_line_x3_t4_t3

0x3bc4,	// (0x00048997) list_medium_line_x3_t4_t4

0x0003,

0xf27e,	// (0x00054051) list_medium_line_x3_t4_t

0x3bc4,	// (0x00048997) list_medium_line_x4_t5_t1

0x3bc4,	// (0x00048997) list_medium_line_x4_t5_t2

0x3bc4,	// (0x00048997) list_medium_line_x4_t5_t3

0x3bc4,	// (0x00048997) list_medium_line_x4_t5_t4

0x3bc4,	// (0x00048997) list_medium_line_x4_t5_t5

0x0004,

0xf287,	// (0x0005405a) list_medium_line_x4_t5_t

0x1bff,	// (0x000469d2) list_medium_line_t4_g4_g1_ParamLimits

0x1bff,	// (0x000469d2) list_medium_line_t4_g4_g1

0x1bff,	// (0x000469d2) list_medium_line_t4_g4_g2_ParamLimits

0x1bff,	// (0x000469d2) list_medium_line_t4_g4_g2

0x1bff,	// (0x000469d2) list_medium_line_t4_g4_g3_ParamLimits

0x1bff,	// (0x000469d2) list_medium_line_t4_g4_g3

0x1bff,	// (0x000469d2) list_medium_line_t4_g4_g4_ParamLimits

0x1bff,	// (0x000469d2) list_medium_line_t4_g4_g4

0x0003,

0xf1c1,	// (0x00053f94) list_medium_line_t4_g4_g_ParamLimits

0xf1c1,	// (0x00053f94) list_medium_line_t4_g4_g

0x1cdb,	// (0x00046aae) list_medium_line_t4_g4_t1_ParamLimits

0x1cdb,	// (0x00046aae) list_medium_line_t4_g4_t1

0x1cdb,	// (0x00046aae) list_medium_line_t4_g4_t2_ParamLimits

0x1cdb,	// (0x00046aae) list_medium_line_t4_g4_t2

0x1cdb,	// (0x00046aae) list_medium_line_t4_g4_t3_ParamLimits

0x1cdb,	// (0x00046aae) list_medium_line_t4_g4_t3

0x1cdb,	// (0x00046aae) list_medium_line_t4_g4_t4_ParamLimits

0x1cdb,	// (0x00046aae) list_medium_line_t4_g4_t4

0x0003,

0xf1ca,	// (0x00053f9d) list_medium_line_t4_g4_t_ParamLimits

0xf1ca,	// (0x00053f9d) list_medium_line_t4_g4_t

0x3d4b,	// (0x00048b1e) chi_dic_find_pane_g1

0x4aaa,	// (0x0004987d) main_tport_pane

0x3bc4,	// (0x00048997) list_medium_line_plain_t1

0x1bff,	// (0x000469d2) list_medium_line_t2_g2_g1_ParamLimits

0x1bff,	// (0x000469d2) list_medium_line_t2_g2_g1

0x1bff,	// (0x000469d2) list_medium_line_t2_g2_g2_ParamLimits

0x1bff,	// (0x000469d2) list_medium_line_t2_g2_g2

0x0001,

0xf1bc,	// (0x00053f8f) list_medium_line_t2_g2_g_ParamLimits

0xf1bc,	// (0x00053f8f) list_medium_line_t2_g2_g

0x1cdb,	// (0x00046aae) list_medium_line_t2_g2_t1_ParamLimits

0x1cdb,	// (0x00046aae) list_medium_line_t2_g2_t1

0x1cdb,	// (0x00046aae) list_medium_line_t2_g2_t2_ParamLimits

0x1cdb,	// (0x00046aae) list_medium_line_t2_g2_t2

0x0001,

0xf191,	// (0x00053f64) list_medium_line_t2_g2_t_ParamLimits

0xf191,	// (0x00053f64) list_medium_line_t2_g2_t

0xd0b4,	// (0x00051e87) aid_sp_fs_list_icon_a_sm

0xd0bc,	// (0x00051e8f) aid_sp_fs_list_icon_d

0xd0c4,	// (0x00051e97) aid_sp_fs_text_primary

0xd9f5,	// (0x000527c8) aid_sp_fs_text_secondary

0x128d,	// (0x00046060) list_medium_line

0x128d,	// (0x00046060) list_medium_line_g2

0x128d,	// (0x00046060) list_medium_line_g3

0x128d,	// (0x00046060) list_medium_line_plain

0x128d,	// (0x00046060) list_medium_line_plain_t2

0x128d,	// (0x00046060) list_medium_line_plain_t3

0x128d,	// (0x00046060) list_medium_line_right_icon

0x128d,	// (0x00046060) list_medium_line_right_iconx2

0x128d,	// (0x00046060) list_medium_line_t2

0x128d,	// (0x00046060) list_medium_line_t2_g2

0x128d,	// (0x00046060) list_medium_line_t2_g3

0x128d,	// (0x00046060) list_medium_line_t2_right_icon

0x128d,	// (0x00046060) list_medium_line_t2_right_iconx2

0x128d,	// (0x00046060) list_medium_line_t3

0x128d,	// (0x00046060) list_medium_line_t3_g2

0x128d,	// (0x00046060) list_medium_line_t3_g3

0x128d,	// (0x00046060) list_medium_line_t3_right_iconx2

0x128d,	// (0x00046060) list_medium_line_t4_g4

0x128d,	// (0x00046060) list_medium_line_x2

0x128d,	// (0x00046060) list_medium_line_x2_t2_g2

0x128d,	// (0x00046060) list_medium_line_x2_t2_g3

0x128d,	// (0x00046060) list_medium_line_x2_t2_g4

0x128d,	// (0x00046060) list_medium_line_x2_t3

0x128d,	// (0x00046060) list_medium_line_x2_t3_g2

0x128d,	// (0x00046060) list_medium_line_x2_t3_g3

0x128d,	// (0x00046060) list_medium_line_x2_t3_g4

0x128d,	// (0x00046060) list_medium_line_x2_t4_g2

0x128d,	// (0x00046060) list_medium_line_x2_t4_g4

0x128d,	// (0x00046060) list_medium_line_x3

0x128d,	// (0x00046060) list_medium_line_x3_t4

0x128d,	// (0x00046060) list_medium_line_x3_t4_g4

0x128d,	// (0x00046060) list_medium_line_x4_t4

0x128d,	// (0x00046060) list_medium_line_x4_t4_g7

0x128d,	// (0x00046060) list_medium_line_x4_t5

0x0d55,	// (0x00045b28) list_single_fs_dyc_pane_ParamLimits

0x0d55,	// (0x00045b28) list_single_fs_dyc_pane

0x1bff,	// (0x000469d2) list_medium_line_x4_t4_g7_g1_ParamLimits

0x1bff,	// (0x000469d2) list_medium_line_x4_t4_g7_g1

0x1bff,	// (0x000469d2) list_medium_line_x4_t4_g7_g2_ParamLimits

0x1bff,	// (0x000469d2) list_medium_line_x4_t4_g7_g2

0x1bff,	// (0x000469d2) list_medium_line_x4_t4_g7_g3_ParamLimits

0x1bff,	// (0x000469d2) list_medium_line_x4_t4_g7_g3

0x1bff,	// (0x000469d2) list_medium_line_x4_t4_g7_g4_ParamLimits

0x1bff,	// (0x000469d2) list_medium_line_x4_t4_g7_g4

0x1bff,	// (0x000469d2) list_medium_line_x4_t4_g7_g5_ParamLimits

0x1bff,	// (0x000469d2) list_medium_line_x4_t4_g7_g5

0x1bff,	// (0x000469d2) list_medium_line_x4_t4_g7_g6_ParamLimits

0x1bff,	// (0x000469d2) list_medium_line_x4_t4_g7_g6

0x1c0d,	// (0x000469e0) list_medium_line_x4_t4_g7_g7_ParamLimits

0x1c0d,	// (0x000469e0) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb01,	// (0x000548d4) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb01,	// (0x000548d4) list_medium_line_x4_t4_g7_g

0x1cdb,	// (0x00046aae) list_medium_line_x4_t4_g7_t1_ParamLimits

0x1cdb,	// (0x00046aae) list_medium_line_x4_t4_g7_t1

0x1cdb,	// (0x00046aae) list_medium_line_x4_t4_g7_t2_ParamLimits

0x1cdb,	// (0x00046aae) list_medium_line_x4_t4_g7_t2

0x1cdb,	// (0x00046aae) list_medium_line_x4_t4_g7_t3_ParamLimits

0x1cdb,	// (0x00046aae) list_medium_line_x4_t4_g7_t3

0x1cef,	// (0x00046ac2) list_medium_line_x4_t4_g7_t4_ParamLimits

0x1cef,	// (0x00046ac2) list_medium_line_x4_t4_g7_t4

0x1cef,	// (0x00046ac2) list_medium_line_x4_t4_g7_t5_ParamLimits

0x1cef,	// (0x00046ac2) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb10,	// (0x000548e3) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb10,	// (0x000548e3) list_medium_line_x4_t4_g7_t

0x0d95,	// (0x00045b68) list_single_dyc_row_pane_ParamLimits

0x0d95,	// (0x00045b68) list_single_dyc_row_pane

0x7f77,	// (0x0004cd4a) call5_gesture_pane_ParamLimits

0x7f77,	// (0x0004cd4a) call5_gesture_pane

0x7fcd,	// (0x0004cda0) call5_windows_pane_ParamLimits

0x7fcd,	// (0x0004cda0) call5_windows_pane

0x8038,	// (0x0004ce0b) call5_swipe_1_pane_cp_ParamLimits

0x8038,	// (0x0004ce0b) call5_swipe_1_pane_cp

0x8044,	// (0x0004ce17) call5_swipe_2_pane_cp_ParamLimits

0x8044,	// (0x0004ce17) call5_swipe_2_pane_cp

0x2610,	// (0x000473e3) call5_image_pane_cp

0x8050,	// (0x0004ce23) popup_call5_audio_first_window_cp_ParamLimits

0x8050,	// (0x0004ce23) popup_call5_audio_first_window_cp

0xe4c9,	// (0x0005329c) call5_swipe_1_pane_g1_cp_ParamLimits

0xe4c9,	// (0x0005329c) call5_swipe_1_pane_g1_cp

0xe4d6,	// (0x000532a9) call5_swipe_1_pane_g2_cp

0xe4de,	// (0x000532b1) call5_swipe_1_pane_t1_cp_ParamLimits

0xe4de,	// (0x000532b1) call5_swipe_1_pane_t1_cp

0xe4c9,	// (0x0005329c) call5_swipe_2_pane_g1_cp_ParamLimits

0xe4c9,	// (0x0005329c) call5_swipe_2_pane_g1_cp

0xe4f3,	// (0x000532c6) call5_swipe_2_pane_g2_cp

0xe4fb,	// (0x000532ce) call5_swipe_2_pane_t1_cp_ParamLimits

0xe4fb,	// (0x000532ce) call5_swipe_2_pane_t1_cp

0x1451,	// (0x00046224) main_sp_fs_email_pane

0xe510,	// (0x000532e3) main_sp_fs_listscroll_pane_te

0x805e,	// (0x0004ce31) popup_sp_fs_action_menu_pane_ParamLimits

0x805e,	// (0x0004ce31) popup_sp_fs_action_menu_pane

0x1cd1,	// (0x00046aa4) bg_sp_fs_ctrlbar_pane_g1

0xe519,	// (0x000532ec) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe522,	// (0x000532f5) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xbe7d,	// (0x00050c50) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x1cd1,	// (0x00046aa4) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfbf9,	// (0x000549cc) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc02b,	// (0x00050dfe) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc02b,	// (0x00050dfe) bg_sp_fs_ctrlbar_ddmenu_pane

0xe52b,	// (0x000532fe) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe52b,	// (0x000532fe) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe537,	// (0x0005330a) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe537,	// (0x0005330a) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc02,	// (0x000549d5) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc02,	// (0x000549d5) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe543,	// (0x00053316) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe543,	// (0x00053316) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x1cd1,	// (0x00046aa4) list_medium_line_t2_right_icon_g1

0x3bc4,	// (0x00048997) list_medium_line_t2_right_icon_t1

0x3bc4,	// (0x00048997) list_medium_line_t2_right_icon_t2

0x0001,

0xfc07,	// (0x000549da) list_medium_line_t2_right_icon_t

0xab9b,	// (0x0004f96e) bg_sp_fs_ctrlbar_pane_ParamLimits

0xab9b,	// (0x0004f96e) bg_sp_fs_ctrlbar_pane

0x80e8,	// (0x0004cebb) main_sp_fs_ctrlbar_button_pane_cp01

0x80f2,	// (0x0004cec5) main_sp_fs_ctrlbar_ddmenu_pane

0xe595,	// (0x00053368) main_sp_fs_ctrlbar_pane_g1

0xe5a1,	// (0x00053374) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc0c,	// (0x000549df) main_sp_fs_ctrlbar_pane_g

0x8130,	// (0x0004cf03) main_sp_fs_ctrlbar_pane_t1

0x816f,	// (0x0004cf42) main_sp_fs_ctrlbar_pane

0x8193,	// (0x0004cf66) main_sp_fs_listscroll_pane_te_cp01

0x0e2c,	// (0x00045bff) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x0e2c,	// (0x00045bff) popup_sp_fs_action_menu_pane_cp01

0x1451,	// (0x00046224) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x1451,	// (0x00046224) bg_sp_fs_highlight_list_pane_cp01

0xd0cd,	// (0x00051ea0) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xd0cd,	// (0x00051ea0) sp_fs_action_menu_list_gene_pane_g1

0xe5c8,	// (0x0005339b) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe5c8,	// (0x0005339b) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc1a,	// (0x000549ed) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc1a,	// (0x000549ed) sp_fs_action_menu_list_gene_pane_g

0xd0dc,	// (0x00051eaf) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xd0dc,	// (0x00051eaf) sp_fs_action_menu_list_gene_pane_t1

0xd0f4,	// (0x00051ec7) sp_fs_action_menu_list_gene_pane_ParamLimits

0xd0f4,	// (0x00051ec7) sp_fs_action_menu_list_gene_pane

0xe5d5,	// (0x000533a8) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe5d5,	// (0x000533a8) popup_sp_fs_action_menu_bg_pane

0xd113,	// (0x00051ee6) sp_fs_action_menu_list_pane_ParamLimits

0xd113,	// (0x00051ee6) sp_fs_action_menu_list_pane

0x0e51,	// (0x00045c24) sp_fs_scroll_pane_cp01_ParamLimits

0x0e51,	// (0x00045c24) sp_fs_scroll_pane_cp01

0x3bc4,	// (0x00048997) list_medium_line_plain_t2_t1

0x3bc4,	// (0x00048997) list_medium_line_plain_t2_t2

0x0001,

0xfc07,	// (0x000549da) list_medium_line_plain_t2_t

0x3bc4,	// (0x00048997) list_medium_line_plain_t3_t1

0x3bc4,	// (0x00048997) list_medium_line_plain_t3_t2

0x3bc4,	// (0x00048997) list_medium_line_plain_t3_t3

0x0002,

0xf277,	// (0x0005404a) list_medium_line_plain_t3_t

0x1bff,	// (0x000469d2) list_medium_line_x2_t2_g2_g1_ParamLimits

0x1bff,	// (0x000469d2) list_medium_line_x2_t2_g2_g1

0x1bff,	// (0x000469d2) list_medium_line_x2_t2_g2_g2_ParamLimits

0x1bff,	// (0x000469d2) list_medium_line_x2_t2_g2_g2

0x0001,

0xf1bc,	// (0x00053f8f) list_medium_line_x2_t2_g2_g_ParamLimits

0xf1bc,	// (0x00053f8f) list_medium_line_x2_t2_g2_g

0x1cdb,	// (0x00046aae) list_medium_line_x2_t2_g2_t1_ParamLimits

0x1cdb,	// (0x00046aae) list_medium_line_x2_t2_g2_t1

0x1cdb,	// (0x00046aae) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1cdb,	// (0x00046aae) list_medium_line_x2_t2_g2_t2

0x0001,

0xf191,	// (0x00053f64) list_medium_line_x2_t2_g2_t_ParamLimits

0xf191,	// (0x00053f64) list_medium_line_x2_t2_g2_t

0x1bff,	// (0x000469d2) list_medium_line_x2_t4_g2_g1_ParamLimits

0x1bff,	// (0x000469d2) list_medium_line_x2_t4_g2_g1

0x1bff,	// (0x000469d2) list_medium_line_x2_t4_g2_g2_ParamLimits

0x1bff,	// (0x000469d2) list_medium_line_x2_t4_g2_g2

0x0001,

0xf1bc,	// (0x00053f8f) list_medium_line_x2_t4_g2_g_ParamLimits

0xf1bc,	// (0x00053f8f) list_medium_line_x2_t4_g2_g

0x1cdb,	// (0x00046aae) list_medium_line_x2_t4_g2_t1_ParamLimits

0x1cdb,	// (0x00046aae) list_medium_line_x2_t4_g2_t1

0x1cdb,	// (0x00046aae) list_medium_line_x2_t4_g2_t2_ParamLimits

0x1cdb,	// (0x00046aae) list_medium_line_x2_t4_g2_t2

0x1cdb,	// (0x00046aae) list_medium_line_x2_t4_g2_t3_ParamLimits

0x1cdb,	// (0x00046aae) list_medium_line_x2_t4_g2_t3

0x1cdb,	// (0x00046aae) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1cdb,	// (0x00046aae) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1ca,	// (0x00053f9d) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1ca,	// (0x00053f9d) list_medium_line_x2_t4_g2_t

0x1cd1,	// (0x00046aa4) list_medium_line_t3_right_iconx2_g1

0x1cd1,	// (0x00046aa4) list_medium_line_t3_right_iconx2_g2

0x1cd1,	// (0x00046aa4) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf393,	// (0x00054166) list_medium_line_t3_right_iconx2_g

0x3bc4,	// (0x00048997) list_medium_line_t3_right_iconx2_t1

0x3bc4,	// (0x00048997) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc07,	// (0x000549da) list_medium_line_t3_right_iconx2_t

0x1bff,	// (0x000469d2) list_medium_line_x3_t4_g4_g1_ParamLimits

0x1bff,	// (0x000469d2) list_medium_line_x3_t4_g4_g1

0x1bff,	// (0x000469d2) list_medium_line_x3_t4_g4_g2_ParamLimits

0x1bff,	// (0x000469d2) list_medium_line_x3_t4_g4_g2

0x1bff,	// (0x000469d2) list_medium_line_x3_t4_g4_g3_ParamLimits

0x1bff,	// (0x000469d2) list_medium_line_x3_t4_g4_g3

0x1bff,	// (0x000469d2) list_medium_line_x3_t4_g4_g4_ParamLimits

0x1bff,	// (0x000469d2) list_medium_line_x3_t4_g4_g4

0x0003,

0xf1c1,	// (0x00053f94) list_medium_line_x3_t4_g4_g_ParamLimits

0xf1c1,	// (0x00053f94) list_medium_line_x3_t4_g4_g

0x1cdb,	// (0x00046aae) list_medium_line_x3_t4_g4_t1_ParamLimits

0x1cdb,	// (0x00046aae) list_medium_line_x3_t4_g4_t1

0x1cdb,	// (0x00046aae) list_medium_line_x3_t4_g4_t2_ParamLimits

0x1cdb,	// (0x00046aae) list_medium_line_x3_t4_g4_t2

0x1cdb,	// (0x00046aae) list_medium_line_x3_t4_g4_t3_ParamLimits

0x1cdb,	// (0x00046aae) list_medium_line_x3_t4_g4_t3

0x1cdb,	// (0x00046aae) list_medium_line_x3_t4_g4_t4_ParamLimits

0x1cdb,	// (0x00046aae) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1ca,	// (0x00053f9d) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1ca,	// (0x00053f9d) list_medium_line_x3_t4_g4_t

0x0e77,	// (0x00045c4a) list_single_dyc_row_text_pane_t1_ParamLimits

0x0e77,	// (0x00045c4a) list_single_dyc_row_text_pane_t1

0x0ec0,	// (0x00045c93) list_single_dyc_row_text_pane_t2_ParamLimits

0x0ec0,	// (0x00045c93) list_single_dyc_row_text_pane_t2

0xd133,	// (0x00051f06) list_single_dyc_row_text_pane_t3_ParamLimits

0xd133,	// (0x00051f06) list_single_dyc_row_text_pane_t3

0x0005,

0xfc1f,	// (0x000549f2) list_single_dyc_row_text_pane_t_ParamLimits

0xfc1f,	// (0x000549f2) list_single_dyc_row_text_pane_t

0xd157,	// (0x00051f2a) list_single_dyc_row_pane_g1_ParamLimits

0xd157,	// (0x00051f2a) list_single_dyc_row_pane_g1

0xd163,	// (0x00051f36) list_single_dyc_row_pane_g2_ParamLimits

0xd163,	// (0x00051f36) list_single_dyc_row_pane_g2

0xd16f,	// (0x00051f42) list_single_dyc_row_pane_g3_ParamLimits

0xd16f,	// (0x00051f42) list_single_dyc_row_pane_g3

0xd17b,	// (0x00051f4e) list_single_dyc_row_pane_g4_ParamLimits

0xd17b,	// (0x00051f4e) list_single_dyc_row_pane_g4

0x0003,

0xfc2c,	// (0x000549ff) list_single_dyc_row_pane_g_ParamLimits

0xfc2c,	// (0x000549ff) list_single_dyc_row_pane_g

0xd187,	// (0x00051f5a) list_single_dyc_row_text_pane_ParamLimits

0xd187,	// (0x00051f5a) list_single_dyc_row_text_pane

0x128d,	// (0x00046060) bg_sp_fs_scroll_pane

0xe5e3,	// (0x000533b6) thumb_sp_fs_scroll_pane

0x1bff,	// (0x000469d2) list_medium_line_g1_ParamLimits

0x1bff,	// (0x000469d2) list_medium_line_g1

0x1cdb,	// (0x00046aae) list_medium_line_t1_ParamLimits

0x1cdb,	// (0x00046aae) list_medium_line_t1

0x1bff,	// (0x000469d2) list_medium_line_x2_g1_ParamLimits

0x1bff,	// (0x000469d2) list_medium_line_x2_g1

0x1bff,	// (0x000469d2) list_medium_line_x2_g2_ParamLimits

0x1bff,	// (0x000469d2) list_medium_line_x2_g2

0x0001,

0xf1bc,	// (0x00053f8f) list_medium_line_x2_g_ParamLimits

0xf1bc,	// (0x00053f8f) list_medium_line_x2_g

0x1cdb,	// (0x00046aae) list_medium_line_x2_t1_ParamLimits

0x1cdb,	// (0x00046aae) list_medium_line_x2_t1

0x1bff,	// (0x000469d2) list_medium_line_x3_g1_ParamLimits

0x1bff,	// (0x000469d2) list_medium_line_x3_g1

0xe5ec,	// (0x000533bf) list_medium_line_x3_g2_ParamLimits

0xe5ec,	// (0x000533bf) list_medium_line_x3_g2

0x0001,

0xfc35,	// (0x00054a08) list_medium_line_x3_g_ParamLimits

0xfc35,	// (0x00054a08) list_medium_line_x3_g

0xe5fa,	// (0x000533cd) list_medium_line_x3_t1_ParamLimits

0xe5fa,	// (0x000533cd) list_medium_line_x3_t1

0xe60e,	// (0x000533e1) thumb_sp_fs_scroll_pane_g1

0xe617,	// (0x000533ea) thumb_sp_fs_scroll_pane_g2

0xe620,	// (0x000533f3) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc3a,	// (0x00054a0d) thumb_sp_fs_scroll_pane_g

0xe60e,	// (0x000533e1) bg_sp_fs_scroll_pane_g1

0xe617,	// (0x000533ea) bg_sp_fs_scroll_pane_g2

0xe620,	// (0x000533f3) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc3a,	// (0x00054a0d) bg_sp_fs_scroll_pane_g

0x1bff,	// (0x000469d2) list_medium_line_x2_t3_g4_g1_ParamLimits

0x1bff,	// (0x000469d2) list_medium_line_x2_t3_g4_g1

0x1bff,	// (0x000469d2) list_medium_line_x2_t3_g4_g2_ParamLimits

0x1bff,	// (0x000469d2) list_medium_line_x2_t3_g4_g2

0x1bff,	// (0x000469d2) list_medium_line_x2_t3_g4_g3_ParamLimits

0x1bff,	// (0x000469d2) list_medium_line_x2_t3_g4_g3

0x1bff,	// (0x000469d2) list_medium_line_x2_t3_g4_g4_ParamLimits

0x1bff,	// (0x000469d2) list_medium_line_x2_t3_g4_g4

0x0003,

0xf1c1,	// (0x00053f94) list_medium_line_x2_t3_g4_g_ParamLimits

0xf1c1,	// (0x00053f94) list_medium_line_x2_t3_g4_g

0x1cdb,	// (0x00046aae) list_medium_line_x2_t3_g4_t1_ParamLimits

0x1cdb,	// (0x00046aae) list_medium_line_x2_t3_g4_t1

0x1cdb,	// (0x00046aae) list_medium_line_x2_t3_g4_t2_ParamLimits

0x1cdb,	// (0x00046aae) list_medium_line_x2_t3_g4_t2

0x1cdb,	// (0x00046aae) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1cdb,	// (0x00046aae) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1b5,	// (0x00053f88) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1b5,	// (0x00053f88) list_medium_line_x2_t3_g4_t

0x1bff,	// (0x000469d2) list_medium_line_g2_g1_ParamLimits

0x1bff,	// (0x000469d2) list_medium_line_g2_g1

0x1bff,	// (0x000469d2) list_medium_line_g2_g2_ParamLimits

0x1bff,	// (0x000469d2) list_medium_line_g2_g2

0x0001,

0xf1bc,	// (0x00053f8f) list_medium_line_g2_g_ParamLimits

0xf1bc,	// (0x00053f8f) list_medium_line_g2_g

0x1cdb,	// (0x00046aae) list_medium_line_g2_t1_ParamLimits

0x1cdb,	// (0x00046aae) list_medium_line_g2_t1

0x1bff,	// (0x000469d2) list_medium_line_t3_g2_g1_ParamLimits

0x1bff,	// (0x000469d2) list_medium_line_t3_g2_g1

0x1bff,	// (0x000469d2) list_medium_line_t3_g2_g2_ParamLimits

0x1bff,	// (0x000469d2) list_medium_line_t3_g2_g2

0x0001,

0xf1bc,	// (0x00053f8f) list_medium_line_t3_g2_g_ParamLimits

0xf1bc,	// (0x00053f8f) list_medium_line_t3_g2_g

0x1cdb,	// (0x00046aae) list_medium_line_t3_g2_t1_ParamLimits

0x1cdb,	// (0x00046aae) list_medium_line_t3_g2_t1

0x1cdb,	// (0x00046aae) list_medium_line_t3_g2_t2_ParamLimits

0x1cdb,	// (0x00046aae) list_medium_line_t3_g2_t2

0x1cdb,	// (0x00046aae) list_medium_line_t3_g2_t3_ParamLimits

0x1cdb,	// (0x00046aae) list_medium_line_t3_g2_t3

0x0002,

0xf1b5,	// (0x00053f88) list_medium_line_t3_g2_t_ParamLimits

0xf1b5,	// (0x00053f88) list_medium_line_t3_g2_t

0x1cd1,	// (0x00046aa4) list_medium_line_right_icon_g1

0x3bc4,	// (0x00048997) list_medium_line_right_icon_t1

0x1bff,	// (0x000469d2) list_medium_line_t2_g1_ParamLimits

0x1bff,	// (0x000469d2) list_medium_line_t2_g1

0x1cdb,	// (0x00046aae) list_medium_line_t2_t1_ParamLimits

0x1cdb,	// (0x00046aae) list_medium_line_t2_t1

0x1cdb,	// (0x00046aae) list_medium_line_t2_t2_ParamLimits

0x1cdb,	// (0x00046aae) list_medium_line_t2_t2

0x0001,

0xf191,	// (0x00053f64) list_medium_line_t2_t_ParamLimits

0xf191,	// (0x00053f64) list_medium_line_t2_t

0x1bff,	// (0x000469d2) list_medium_line_t3_g1_ParamLimits

0x1bff,	// (0x000469d2) list_medium_line_t3_g1

0x1cdb,	// (0x00046aae) list_medium_line_t3_t1_ParamLimits

0x1cdb,	// (0x00046aae) list_medium_line_t3_t1

0x1cdb,	// (0x00046aae) list_medium_line_t3_t2_ParamLimits

0x1cdb,	// (0x00046aae) list_medium_line_t3_t2

0x1cdb,	// (0x00046aae) list_medium_line_t3_t3_ParamLimits

0x1cdb,	// (0x00046aae) list_medium_line_t3_t3

0x0002,

0xf1b5,	// (0x00053f88) list_medium_line_t3_t_ParamLimits

0xf1b5,	// (0x00053f88) list_medium_line_t3_t

0x1bff,	// (0x000469d2) list_medium_line_g3_g1_ParamLimits

0x1bff,	// (0x000469d2) list_medium_line_g3_g1

0x1bff,	// (0x000469d2) list_medium_line_g3_g2_ParamLimits

0x1bff,	// (0x000469d2) list_medium_line_g3_g2

0x1bff,	// (0x000469d2) list_medium_line_g3_g3_ParamLimits

0x1bff,	// (0x000469d2) list_medium_line_g3_g3

0x0002,

0xf1ae,	// (0x00053f81) list_medium_line_g3_g_ParamLimits

0xf1ae,	// (0x00053f81) list_medium_line_g3_g

0x1cdb,	// (0x00046aae) list_medium_line_g3_t1_ParamLimits

0x1cdb,	// (0x00046aae) list_medium_line_g3_t1

0x1bff,	// (0x000469d2) list_medium_line_t2_g3_g1_ParamLimits

0x1bff,	// (0x000469d2) list_medium_line_t2_g3_g1

0x1bff,	// (0x000469d2) list_medium_line_t2_g3_g2_ParamLimits

0x1bff,	// (0x000469d2) list_medium_line_t2_g3_g2

0x1bff,	// (0x000469d2) list_medium_line_t2_g3_g3_ParamLimits

0x1bff,	// (0x000469d2) list_medium_line_t2_g3_g3

0x0002,

0xf1ae,	// (0x00053f81) list_medium_line_t2_g3_g_ParamLimits

0xf1ae,	// (0x00053f81) list_medium_line_t2_g3_g

0x1cdb,	// (0x00046aae) list_medium_line_t2_g3_t1_ParamLimits

0x1cdb,	// (0x00046aae) list_medium_line_t2_g3_t1

0x1cdb,	// (0x00046aae) list_medium_line_t2_g3_t2_ParamLimits

0x1cdb,	// (0x00046aae) list_medium_line_t2_g3_t2

0x0001,

0xf191,	// (0x00053f64) list_medium_line_t2_g3_t_ParamLimits

0xf191,	// (0x00053f64) list_medium_line_t2_g3_t

0x1bff,	// (0x000469d2) list_medium_line_t3_g3_g1_ParamLimits

0x1bff,	// (0x000469d2) list_medium_line_t3_g3_g1

0x1bff,	// (0x000469d2) list_medium_line_t3_g3_g2_ParamLimits

0x1bff,	// (0x000469d2) list_medium_line_t3_g3_g2

0x1bff,	// (0x000469d2) list_medium_line_t3_g3_g3_ParamLimits

0x1bff,	// (0x000469d2) list_medium_line_t3_g3_g3

0x0002,

0xf1ae,	// (0x00053f81) list_medium_line_t3_g3_g_ParamLimits

0xf1ae,	// (0x00053f81) list_medium_line_t3_g3_g

0x1cdb,	// (0x00046aae) list_medium_line_t3_g3_t1_ParamLimits

0x1cdb,	// (0x00046aae) list_medium_line_t3_g3_t1

0x1cdb,	// (0x00046aae) list_medium_line_t3_g3_t2_ParamLimits

0x1cdb,	// (0x00046aae) list_medium_line_t3_g3_t2

0x1cdb,	// (0x00046aae) list_medium_line_t3_g3_t3_ParamLimits

0x1cdb,	// (0x00046aae) list_medium_line_t3_g3_t3

0x0002,

0xf1b5,	// (0x00053f88) list_medium_line_t3_g3_t_ParamLimits

0xf1b5,	// (0x00053f88) list_medium_line_t3_g3_t

0x1cd1,	// (0x00046aa4) list_medium_line_right_iconx2_g1

0x1cd1,	// (0x00046aa4) list_medium_line_right_iconx2_g2

0x0001,

0xf0af,	// (0x00053e82) list_medium_line_right_iconx2_g

0x3bc4,	// (0x00048997) list_medium_line_right_iconx2_t1

0x1cd1,	// (0x00046aa4) list_medium_line_t2_right_iconx2_g1

0x1cd1,	// (0x00046aa4) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf0af,	// (0x00053e82) list_medium_line_t2_right_iconx2_g

0x3bc4,	// (0x00048997) list_medium_line_t2_right_iconx2_t1

0x3bc4,	// (0x00048997) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc07,	// (0x000549da) list_medium_line_t2_right_iconx2_t

0x3bc4,	// (0x00048997) list_medium_line_x4_t4_t1

0x3bc4,	// (0x00048997) list_medium_line_x4_t4_t2

0x3bc4,	// (0x00048997) list_medium_line_x4_t4_t3

0x3bc4,	// (0x00048997) list_medium_line_x4_t4_t4

0x0003,

0xf27e,	// (0x00054051) list_medium_line_x4_t4_t

0x8200,	// (0x0004cfd3) tport_appsw_pane_ParamLimits

0x8200,	// (0x0004cfd3) tport_appsw_pane

0x8218,	// (0x0004cfeb) tport_contact_pane_ParamLimits

0x8218,	// (0x0004cfeb) tport_contact_pane

0x8230,	// (0x0004d003) tport_listscroll_pane_ParamLimits

0x8230,	// (0x0004d003) tport_listscroll_pane

0x824a,	// (0x0004d01d) cell_tport_appsw_pane_ParamLimits

0x824a,	// (0x0004d01d) cell_tport_appsw_pane

0xab79,	// (0x0004f94c) tport_appsw_pane_g1_ParamLimits

0xab79,	// (0x0004f94c) tport_appsw_pane_g1

0xe629,	// (0x000533fc) tport_contact_pane_g1

0xe632,	// (0x00053405) tport_contact_pane_t1

0xe640,	// (0x00053413) tport_contact_pane_t2

0x0001,

0xfc41,	// (0x00054a14) tport_contact_pane_t

0xe64e,	// (0x00053421) list_tport_pane

0xe657,	// (0x0005342a) scroll_pane_cp_030

0x8292,	// (0x0004d065) cell_tport_appsw_pane_g1

0x82a2,	// (0x0004d075) cell_tport_appsw_pane_t1

0x82b0,	// (0x0004d083) grid_highlight_pane_cp019

0x82b8,	// (0x0004d08b) list_tport_double_graphic_pane_ParamLimits

0x82b8,	// (0x0004d08b) list_tport_double_graphic_pane

0x1451,	// (0x00046224) list_highlight_pane_cp023_ParamLimits

0x1451,	// (0x00046224) list_highlight_pane_cp023

0x82c5,	// (0x0004d098) list_tport_double_graphic_pane_g1_ParamLimits

0x82c5,	// (0x0004d098) list_tport_double_graphic_pane_g1

0x82d2,	// (0x0004d0a5) list_tport_double_graphic_pane_t1_ParamLimits

0x82d2,	// (0x0004d0a5) list_tport_double_graphic_pane_t1

0x82e7,	// (0x0004d0ba) list_tport_double_graphic_pane_t2_ParamLimits

0x82e7,	// (0x0004d0ba) list_tport_double_graphic_pane_t2

0x0001,

0xfc4d,	// (0x00054a20) list_tport_double_graphic_pane_t_ParamLimits

0xfc4d,	// (0x00054a20) list_tport_double_graphic_pane_t

0x128d,	// (0x00046060) main_cale_note_pane

0x674b,	// (0x0004b51e) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x674b,	// (0x0004b51e) cell_vitu2_function_top_wide_pane_cp01

0x7e65,	// (0x0004cc38) wait_bar_pane_cp05_ParamLimits

0x1451,	// (0x00046224) listscroll_cmail_pane

0xe668,	// (0x0005343b) list_cmail_pane

0x82f9,	// (0x0004d0cc) list_cmail_body_pane

0x830f,	// (0x0004d0e2) list_single_cmail_header_caption_pane

0x8326,	// (0x0004d0f9) list_single_cmail_header_detail_pane_ParamLimits

0x8326,	// (0x0004d0f9) list_single_cmail_header_detail_pane

0xe67f,	// (0x00053452) list_single_cmail_header_caption_pane_t1

0x0ff5,	// (0x00045dc8) list_single_cmail_header_detail_pane_g1_ParamLimits

0x0ff5,	// (0x00045dc8) list_single_cmail_header_detail_pane_g1

0xd1a6,	// (0x00051f79) list_single_cmail_header_detail_pane_g2_ParamLimits

0xd1a6,	// (0x00051f79) list_single_cmail_header_detail_pane_g2

0x0002,

0xfc52,	// (0x00054a25) list_single_cmail_header_detail_pane_g_ParamLimits

0xfc52,	// (0x00054a25) list_single_cmail_header_detail_pane_g

0x100d,	// (0x00045de0) list_single_cmail_header_detail_pane_t1_ParamLimits

0x100d,	// (0x00045de0) list_single_cmail_header_detail_pane_t1

0x104b,	// (0x00045e1e) list_single_cmail_header_editor_pane_bg_ParamLimits

0x104b,	// (0x00045e1e) list_single_cmail_header_editor_pane_bg

0xe170,	// (0x00052f43) list_cmail_body_pane_g1

0xe6a3,	// (0x00053476) list_cmail_body_pane_t1

0xd4e9,	// (0x000522bc) list_single_cmail_header_editor_pane_bg_g1

0x2e4a,	// (0x00047c1d) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd4f9,	// (0x000522cc) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd4f1,	// (0x000522c4) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd758,	// (0x0005252b) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd519,	// (0x000522ec) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd509,	// (0x000522dc) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd511,	// (0x000522e4) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x2e2a,	// (0x00047bfd) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8354,	// (0x0004d127) calenote_gesture_pane_ParamLimits

0x8354,	// (0x0004d127) calenote_gesture_pane

0x8374,	// (0x0004d147) calenote_window_pane_ParamLimits

0x8374,	// (0x0004d147) calenote_window_pane

0xe6b1,	// (0x00053484) popup_note_window_cp01

0x8390,	// (0x0004d163) calenote_swipe_1_pane_ParamLimits

0x8390,	// (0x0004d163) calenote_swipe_1_pane

0x8044,	// (0x0004ce17) calenote_swipe_2_pane_ParamLimits

0x8044,	// (0x0004ce17) calenote_swipe_2_pane

0xe4c9,	// (0x0005329c) calenote_swipe_1_pane_g1_ParamLimits

0xe4c9,	// (0x0005329c) calenote_swipe_1_pane_g1

0xe6c3,	// (0x00053496) calenote_swipe_1_pane_g2_ParamLimits

0xe6c3,	// (0x00053496) calenote_swipe_1_pane_g2

0x0001,

0xfc5e,	// (0x00054a31) calenote_swipe_1_pane_g_ParamLimits

0xfc5e,	// (0x00054a31) calenote_swipe_1_pane_g

0xe6cf,	// (0x000534a2) calenote_swipe_1_pane_t1_ParamLimits

0xe6cf,	// (0x000534a2) calenote_swipe_1_pane_t1

0xe4c9,	// (0x0005329c) calenote_swipe_2_pane_g1_ParamLimits

0xe4c9,	// (0x0005329c) calenote_swipe_2_pane_g1

0xe6ee,	// (0x000534c1) calenote_swipe_2_pane_g2_ParamLimits

0xe6ee,	// (0x000534c1) calenote_swipe_2_pane_g2

0x0001,

0xfc63,	// (0x00054a36) calenote_swipe_2_pane_g_ParamLimits

0xfc63,	// (0x00054a36) calenote_swipe_2_pane_g

0xe6fa,	// (0x000534cd) calenote_swipe_2_pane_t1_ParamLimits

0xe6fa,	// (0x000534cd) calenote_swipe_2_pane_t1

0x128d,	// (0x00046060) main_mup_navstr_pane

0x56aa,	// (0x0004a47d) main_mup3_pane_t7_ParamLimits

0x56aa,	// (0x0004a47d) main_mup3_pane_t7

0xcbdb,	// (0x000519ae) main_mp4_pane_g6_ParamLimits

0xcbdb,	// (0x000519ae) main_mp4_pane_g6

0xce05,	// (0x00051bd8) main_image3_pane_t4_ParamLimits

0xce05,	// (0x00051bd8) main_image3_pane_t4

0x83a5,	// (0x0004d178) popup_navstr_preview_pane_ParamLimits

0x83a5,	// (0x0004d178) popup_navstr_preview_pane

0x83b9,	// (0x0004d18c) scroll_navstr_pane_ParamLimits

0x83b9,	// (0x0004d18c) scroll_navstr_pane

0x128d,	// (0x00046060) bg_popup_preview_window_pane_cp04

0xe721,	// (0x000534f4) popup_navstr_preview_pane_t1

0x83cd,	// (0x0004d1a0) scroll_navstr_pane_g1_ParamLimits

0x83cd,	// (0x0004d1a0) scroll_navstr_pane_g1

0x83e1,	// (0x0004d1b4) scroll_navstr_pane_t1_ParamLimits

0x83e1,	// (0x0004d1b4) scroll_navstr_pane_t1

0xe6ba,	// (0x0005348d) bg_button_pane_cp014

0xe6ba,	// (0x0005348d) bg_button_pane_cp030

0x0dd2,	// (0x00045ba5) list_double_fisheye_pane_g4_ParamLimits

0x0dd2,	// (0x00045ba5) list_double_fisheye_pane_g4

0x0dde,	// (0x00045bb1) list_double_fisheye_pane_g5_ParamLimits

0x0dde,	// (0x00045bb1) list_double_fisheye_pane_g5

0xe2b3,	// (0x00053086) sp_fs_scroll_pane_cp03

0xe595,	// (0x00053368) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe5a1,	// (0x00053374) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc0c,	// (0x000549df) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x8130,	// (0x0004cf03) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe677,	// (0x0005344a) sp_fs_scroll_pane_cp02

0x1ff7,	// (0x00046dca) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x1ff7,	// (0x00046dca) popup_sp_fs_calendar_preview_list_single_pane

0x128d,	// (0x00046060) main_cam6_pano_pane

0x1451,	// (0x00046224) main_mup3_pane_ParamLimits

0x128d,	// (0x00046060) main_phacti_pane

0x7d38,	// (0x0004cb0b) bg_button_pane_cp11

0x7d52,	// (0x0004cb25) main_mobtv_info_pane_g2_ParamLimits

0x7d52,	// (0x0004cb25) main_mobtv_info_pane_g2

0x0001,

0xfb71,	// (0x00054944) main_mobtv_info_pane_g_ParamLimits

0xfb71,	// (0x00054944) main_mobtv_info_pane_g

0x1cdb,	// (0x00046aae) sc_clock_pane_t5_ParamLimits

0x1cdb,	// (0x00046aae) sc_clock_pane_t5

0xab79,	// (0x0004f94c) main_radioblah_pane_g1_ParamLimits

0xab87,	// (0x0004f95a) main_radioblah_pane_t3_ParamLimits

0xab87,	// (0x0004f95a) main_radioblah_pane_t3

0xab87,	// (0x0004f95a) main_radioblah_pane_t4_ParamLimits

0xab87,	// (0x0004f95a) main_radioblah_pane_t4

0x1451,	// (0x00046224) main_radioblah_text_pane_ParamLimits

0x1451,	// (0x00046224) main_radioblah_text_pane

0xe3c1,	// (0x00053194) main_radioblah_info_pane_g1_ParamLimits

0xe405,	// (0x000531d8) main_radioblah_info_pane_t4_ParamLimits

0xe405,	// (0x000531d8) main_radioblah_info_pane_t4

0x1451,	// (0x00046224) main_sp_fs_calendar_pane

0x83f8,	// (0x0004d1cb) main_phacti_pane_g1

0x8400,	// (0x0004d1d3) phacti_note_pane_ParamLimits

0x8400,	// (0x0004d1d3) phacti_note_pane

0xe738,	// (0x0005350b) phacti_term_pane_ParamLimits

0xe738,	// (0x0005350b) phacti_term_pane

0xe74d,	// (0x00053520) phacti_note_pane_t1_ParamLimits

0xe74d,	// (0x00053520) phacti_note_pane_t1

0xd1d6,	// (0x00051fa9) phacti_term_pane_g1

0xd1de,	// (0x00051fb1) phacti_term_pane_t1_ParamLimits

0xd1de,	// (0x00051fb1) phacti_term_pane_t1

0xe764,	// (0x00053537) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe76c,	// (0x0005353f) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0x0788,	// (0x0004555b) popup_sp_fs_calendar_preview_list_single_pane_g

0xe774,	// (0x00053547) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe774,	// (0x00053547) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe78a,	// (0x0005355d) aid_popup_sp_fs_bg_corner_pane

0x1cd1,	// (0x00046aa4) popup_sp_fs_calendar_preview_bg_pane_g1

0x128d,	// (0x00046060) popup_sp_fs_calendar_preview_bg_pane

0xe792,	// (0x00053565) popup_sp_fs_calendar_preview_list_pane

0xab9b,	// (0x0004f96e) bg_main_sp_fs_cale_pane_ParamLimits

0xab9b,	// (0x0004f96e) bg_main_sp_fs_cale_pane

0xd211,	// (0x00051fe4) listscroll_cale_mrui_pane_ParamLimits

0xd211,	// (0x00051fe4) listscroll_cale_mrui_pane

0xd226,	// (0x00051ff9) listscroll_sp_fs_schedule_track_pane

0xd22f,	// (0x00052002) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xd22f,	// (0x00052002) main_sp_fs_ctrlbar_pane_cp01

0xe79a,	// (0x0005356d) main_sp_fs_ribbon_pane

0xd242,	// (0x00052015) popup_sp_fs_cale_preview_window

0x8475,	// (0x0004d248) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8475,	// (0x0004d248) list_single_sp_fs_schedule_track_pane

0x1451,	// (0x00046224) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x1451,	// (0x00046224) bg_sp_fs_highlight_list_pane_cp03

0x8489,	// (0x0004d25c) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8489,	// (0x0004d25c) list_single_sp_fs_schedule_track_pane_g1

0x8495,	// (0x0004d268) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8495,	// (0x0004d268) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfc6d,	// (0x00054a40) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfc6d,	// (0x00054a40) list_single_sp_fs_schedule_track_pane_g

0x84a1,	// (0x0004d274) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x84a1,	// (0x0004d274) list_single_sp_fs_schedule_track_pane_t1

0x84bb,	// (0x0004d28e) sp_fs_schedule_track_pane_ParamLimits

0x84bb,	// (0x0004d28e) sp_fs_schedule_track_pane

0xe7a2,	// (0x00053575) sp_fs_schedule_track_pane_g1

0xe7aa,	// (0x0005357d) sp_fs_schedule_track_pane_g2

0xe7b2,	// (0x00053585) sp_fs_schedule_track_pane_g3

0xe7ba,	// (0x0005358d) sp_fs_schedule_track_pane_g4

0xe7c2,	// (0x00053595) sp_fs_schedule_track_pane_g5

0x0004,

0x0792,	// (0x00045565) sp_fs_schedule_track_pane_g

0xd4e9,	// (0x000522bc) bg_sp_fs_schedule_viewer_highlight_g1

0x2e4a,	// (0x00047c1d) bg_sp_fs_schedule_viewer_highlight_g2

0xd4f1,	// (0x000522c4) bg_sp_fs_schedule_viewer_highlight_g3

0xd4f9,	// (0x000522cc) bg_sp_fs_schedule_viewer_highlight_g4

0xd758,	// (0x0005252b) bg_sp_fs_schedule_viewer_highlight_g5

0xd509,	// (0x000522dc) bg_sp_fs_schedule_viewer_highlight_g6

0xd511,	// (0x000522e4) bg_sp_fs_schedule_viewer_highlight_g7

0xd519,	// (0x000522ec) bg_sp_fs_schedule_viewer_highlight_g8

0x2e2a,	// (0x00047bfd) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfc72,	// (0x00054a45) bg_sp_fs_schedule_viewer_highlight_g

0x128d,	// (0x00046060) bg_main_sp_fs_ribbon_pane

0x84cc,	// (0x0004d29f) main_sp_fs_ribbon_pane_g1

0xe7ca,	// (0x0005359d) main_sp_fs_ribbon_pane_t1

0x84d5,	// (0x0004d2a8) main_sp_fs_ribbon_pane_t2

0xe7d9,	// (0x000535ac) main_sp_fs_ribbon_pane_t3

0x0002,

0xfc85,	// (0x00054a58) main_sp_fs_ribbon_pane_t

0xe7e8,	// (0x000535bb) main_sp_fs_ribbon_scheduler_pane

0xe7f0,	// (0x000535c3) bg_main_sp_fs_ribbon_pane_g1

0xe7f9,	// (0x000535cc) bg_main_sp_fs_ribbon_pane_g2

0xe802,	// (0x000535d5) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0x07b7,	// (0x0004558a) bg_main_sp_fs_ribbon_pane_g

0xe80a,	// (0x000535dd) main_sp_fs_ribbon_scheduler_pane_g1

0xe813,	// (0x000535e6) main_sp_fs_ribbon_scheduler_pane_g2

0xe81c,	// (0x000535ef) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0x07be,	// (0x00045591) main_sp_fs_ribbon_scheduler_pane_g

0xe825,	// (0x000535f8) list_cale_mrui_pane

0x84e4,	// (0x0004d2b7) sp_fs_scroll_pane_cp07_ParamLimits

0x84e4,	// (0x0004d2b7) sp_fs_scroll_pane_cp07

0x8500,	// (0x0004d2d3) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8500,	// (0x0004d2d3) bg_sp_fs_schedule_viewer_highlight

0xe832,	// (0x00053605) list_single_sp_fs_schedule_track_pane_cp01

0xe83a,	// (0x0005360d) list_sp_fs_schedule_track_pane

0xe842,	// (0x00053615) sp_fs_scroll_pane_cp06_ParamLimits

0xe842,	// (0x00053615) sp_fs_scroll_pane_cp06

0x1cd1,	// (0x00046aa4) bgmain_sp_fs_calendar_pane_g1

0x1064,	// (0x00045e37) list_single_cale_mrui_pane_ParamLimits

0x1064,	// (0x00045e37) list_single_cale_mrui_pane

0xd254,	// (0x00052027) list_single_cale_mrui_row_pane_ParamLimits

0xd254,	// (0x00052027) list_single_cale_mrui_row_pane

0xd261,	// (0x00052034) list_single_cale_mrui_row_pane_g1_ParamLimits

0xd261,	// (0x00052034) list_single_cale_mrui_row_pane_g1

0xd299,	// (0x0005206c) list_single_cale_mrui_row_pane_t1_ParamLimits

0xd299,	// (0x0005206c) list_single_cale_mrui_row_pane_t1

0x1085,	// (0x00045e58) list_single_cale_mrui_row_pane_t2_ParamLimits

0x1085,	// (0x00045e58) list_single_cale_mrui_row_pane_t2

0xd2ab,	// (0x0005207e) list_single_cale_mrui_row_pane_t3_ParamLimits

0xd2ab,	// (0x0005207e) list_single_cale_mrui_row_pane_t3

0xd2da,	// (0x000520ad) list_single_cale_mrui_row_pane_t4_ParamLimits

0xd2da,	// (0x000520ad) list_single_cale_mrui_row_pane_t4

0x0003,

0xfc93,	// (0x00054a66) list_single_cale_mrui_row_pane_t_ParamLimits

0xfc93,	// (0x00054a66) list_single_cale_mrui_row_pane_t

0x10ed,	// (0x00045ec0) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x10ed,	// (0x00045ec0) list_single_cmail_header_editor_pane_bg_cp01

0x111b,	// (0x00045eee) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x111b,	// (0x00045eee) list_single_cmail_header_editor_pane_bg_cp02

0xe861,	// (0x00053634) main_radioblah_text_pane_t1_ParamLimits

0xe861,	// (0x00053634) main_radioblah_text_pane_t1

0xe87b,	// (0x0005364e) cam6_indi_pane_cp01

0xe883,	// (0x00053656) cam6_mode_pane_cp01

0xe88b,	// (0x0005365e) cam6_pano_pane

0xe894,	// (0x00053667) cam6_zoom_pane_cp01

0xe89c,	// (0x0005366f) cam6_pano_image_pane

0xe8a7,	// (0x0005367a) cam6_pano_pane_g1

0xe170,	// (0x00052f43) cam6_pano_pane_g2

0xe8b0,	// (0x00053683) cam6_pano_pane_g3

0xe8b9,	// (0x0005368c) cam6_pano_pane_g4

0xc96f,	// (0x00051742) cam6_pano_pane_g5

0xe8c2,	// (0x00053695) cam6_pano_pane_g6

0xe8cc,	// (0x0005369f) cam6_pano_pane_g7

0xe8d4,	// (0x000536a7) cam6_pano_pane_g8

0xe8dd,	// (0x000536b0) cam6_pano_pane_g9

0x0008,

0xfc9c,	// (0x00054a6f) cam6_pano_pane_g

0x128d,	// (0x00046060) main_browser_tag_pane

0xe719,	// (0x000534ec) grid_navstr_albumart_pane

0xe8e8,	// (0x000536bb) cell_navstr_albumart_pane_ParamLimits

0xe8e8,	// (0x000536bb) cell_navstr_albumart_pane

0xe908,	// (0x000536db) cell_navstr_albumart_pane_g1

0xbd04,	// (0x00050ad7) cell_navstr_albumart_pane_g2

0xbd14,	// (0x00050ae7) cell_navstr_albumart_pane_g3

0xbd0c,	// (0x00050adf) cell_navstr_albumart_pane_g4

0x0003,

0xfcaf,	// (0x00054a82) cell_navstr_albumart_pane_g

0x8510,	// (0x0004d2e3) bt_list_pane_ParamLimits

0x8510,	// (0x0004d2e3) bt_list_pane

0x8524,	// (0x0004d2f7) bt_list_pane_t1

0x8533,	// (0x0004d306) bt_list_pane_t2

0x0001,

0xfcb8,	// (0x00054a8b) bt_list_pane_t

0x128d,	// (0x00046060) main_cale_prevew_pane

0x8542,	// (0x0004d315) popup_cale_preview_window_ParamLimits

0x8542,	// (0x0004d315) popup_cale_preview_window

0x1451,	// (0x00046224) bg_popup_preview_window_pane_cp05_ParamLimits

0x1451,	// (0x00046224) bg_popup_preview_window_pane_cp05

0xe910,	// (0x000536e3) list_cale_preview_pane_ParamLimits

0xe910,	// (0x000536e3) list_cale_preview_pane

0x855b,	// (0x0004d32e) list_double_cale_preview_pane_ParamLimits

0x855b,	// (0x0004d32e) list_double_cale_preview_pane

0xd521,	// (0x000522f4) list_single_cale_preview_pane_ParamLimits

0xd521,	// (0x000522f4) list_single_cale_preview_pane

0x856d,	// (0x0004d340) list_single_cale_preview_pane_g1

0x8575,	// (0x0004d348) list_single_cale_preview_pane_t1_ParamLimits

0x8575,	// (0x0004d348) list_single_cale_preview_pane_t1

0x858a,	// (0x0004d35d) list_double_cale_preview_pane_g1

0x8592,	// (0x0004d365) list_double_cale_preview_pane_t1_ParamLimits

0x8592,	// (0x0004d365) list_double_cale_preview_pane_t1

0x85a7,	// (0x0004d37a) list_double_cale_preview_pane_t2_ParamLimits

0x85a7,	// (0x0004d37a) list_double_cale_preview_pane_t2

0x0001,

0xfcbd,	// (0x00054a90) list_double_cale_preview_pane_t_ParamLimits

0xfcbd,	// (0x00054a90) list_double_cale_preview_pane_t

0x128d,	// (0x00046060) main_ezdial_pane

0x1451,	// (0x00046224) main_sp_fs_email_pane_ParamLimits

0x80a0,	// (0x0004ce73) cmail_ddmenu_btn01_pane_ParamLimits

0x80a0,	// (0x0004ce73) cmail_ddmenu_btn01_pane

0x80b3,	// (0x0004ce86) cmail_ddmenu_btn02_pane_ParamLimits

0x80b3,	// (0x0004ce86) cmail_ddmenu_btn02_pane

0x80d6,	// (0x0004cea9) cmail_ddmenu_btn03_pane_ParamLimits

0x80d6,	// (0x0004cea9) cmail_ddmenu_btn03_pane

0x816f,	// (0x0004cf42) main_sp_fs_ctrlbar_pane_ParamLimits

0x8193,	// (0x0004cf66) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x82f9,	// (0x0004d0cc) list_cmail_body_pane_ParamLimits

0xe68d,	// (0x00053460) bg_button_pane_cp12

0xe696,	// (0x00053469) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe696,	// (0x00053469) list_single_cmail_header_detail_pane_g3

0xd1b2,	// (0x00051f85) list_single_cmail_header_detail_pane_t2_ParamLimits

0xd1b2,	// (0x00051f85) list_single_cmail_header_detail_pane_t2

0x0001,

0xfc59,	// (0x00054a2c) list_single_cmail_header_detail_pane_t_ParamLimits

0xfc59,	// (0x00054a2c) list_single_cmail_header_detail_pane_t

0xd1f3,	// (0x00051fc6) phacti_term_pane_t2_ParamLimits

0xd1f3,	// (0x00051fc6) phacti_term_pane_t2

0x0001,

0xfc68,	// (0x00054a3b) phacti_term_pane_t_ParamLimits

0xfc68,	// (0x00054a3b) phacti_term_pane_t

0xe91c,	// (0x000536ef) aid_size_list_single_double

0x85bf,	// (0x0004d392) popup_ezdial_listscroll_window

0xe928,	// (0x000536fb) popup_number_entry_window_cp01

0x2610,	// (0x000473e3) bg_popup_call_pane_cp09

0xe935,	// (0x00053708) ezdial_list_pane

0xe93d,	// (0x00053710) scroll_pane_cp23

0xab9b,	// (0x0004f96e) bg_button_pane_cp028_ParamLimits

0xab9b,	// (0x0004f96e) bg_button_pane_cp028

0x85d6,	// (0x0004d3a9) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x85d6,	// (0x0004d3a9) cmail_ddmenu_btn01_pane_g1

0x85e2,	// (0x0004d3b5) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x85e2,	// (0x0004d3b5) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfcc2,	// (0x00054a95) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfcc2,	// (0x00054a95) cmail_ddmenu_btn01_pane_g

0xe945,	// (0x00053718) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe945,	// (0x00053718) cmail_ddmenu_btn01_pane_t1

0xab9b,	// (0x0004f96e) bg_button_pane_cp029_ParamLimits

0xab9b,	// (0x0004f96e) bg_button_pane_cp029

0x85ee,	// (0x0004d3c1) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x85ee,	// (0x0004d3c1) cmail_ddmenu_btn02_pane_g1

0x8606,	// (0x0004d3d9) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8606,	// (0x0004d3d9) cmail_ddmenu_btn02_pane_t1

0x1451,	// (0x00046224) bg_button_pane_cp031_ParamLimits

0x1451,	// (0x00046224) bg_button_pane_cp031

0x85ee,	// (0x0004d3c1) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x85ee,	// (0x0004d3c1) cmail_ddmenu_btn03_pane_g1

0x8606,	// (0x0004d3d9) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8606,	// (0x0004d3d9) cmail_ddmenu_btn03_pane_t1

0x1cdb,	// (0x00046aae) cell_dialer2_keypad_pane_t1_ParamLimits

0xc99d,	// (0x00051770) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xc99d,	// (0x00051770) cell_dialer2_keypad_pane_t1_copy1

0x7b5b,	// (0x0004c92e) ncimui_group_button_pane

0x1451,	// (0x00046224) main_sp_fs_calendar_pane_ParamLimits

0x830f,	// (0x0004d0e2) list_single_cmail_header_caption_pane_ParamLimits

0xd208,	// (0x00051fdb) aid_recal_txt_sm_pane

0x128d,	// (0x00046060) mian_recal_day_pane

0xd242,	// (0x00052015) popup_sp_fs_cale_preview_window_ParamLimits

0xe95a,	// (0x0005372d) list_recal_day_pane

0xd324,	// (0x000520f7) list_single_recal_day_pane_ParamLimits

0xd324,	// (0x000520f7) list_single_recal_day_pane

0xe981,	// (0x00053754) list_single_recal_day_pane_g1_ParamLimits

0xe981,	// (0x00053754) list_single_recal_day_pane_g1

0xd336,	// (0x00052109) list_single_recal_day_pane_g2_ParamLimits

0xd336,	// (0x00052109) list_single_recal_day_pane_g2

0xd342,	// (0x00052115) list_single_recal_day_pane_g3_ParamLimits

0xd342,	// (0x00052115) list_single_recal_day_pane_g3

0x113b,	// (0x00045f0e) list_single_recal_day_pane_g4_ParamLimits

0x113b,	// (0x00045f0e) list_single_recal_day_pane_g4

0xd34e,	// (0x00052121) list_single_recal_day_pane_g5_ParamLimits

0xd34e,	// (0x00052121) list_single_recal_day_pane_g5

0xd35a,	// (0x0005212d) list_single_recal_day_pane_g6_ParamLimits

0xd35a,	// (0x0005212d) list_single_recal_day_pane_g6

0x0004,

0xfcd1,	// (0x00054aa4) list_single_recal_day_pane_g_ParamLimits

0xfcd1,	// (0x00054aa4) list_single_recal_day_pane_g

0xd36e,	// (0x00052141) list_single_recal_day_pane_t1

0xd380,	// (0x00052153) list_single_recal_day_pane_t2

0x0001,

0xfcdc,	// (0x00054aaf) list_single_recal_day_pane_t

0x862a,	// (0x0004d3fd) ncimui_query_button_pane_ParamLimits

0x862a,	// (0x0004d3fd) ncimui_query_button_pane

0x863a,	// (0x0004d40d) ncimui_query_button_pane_t1_ParamLimits

0x863a,	// (0x0004d40d) ncimui_query_button_pane_t1

0xe98d,	// (0x00053760) ncimui_query_button_pane_t2_ParamLimits

0xe98d,	// (0x00053760) ncimui_query_button_pane_t2

0x0001,

0xfce1,	// (0x00054ab4) ncimui_query_button_pane_t_ParamLimits

0xfce1,	// (0x00054ab4) ncimui_query_button_pane_t

0x864d,	// (0x0004d420) query_button_pane_ParamLimits

0x864d,	// (0x0004d420) query_button_pane

0x128d,	// (0x00046060) bg_button_pane_cp0028

0xe9a0,	// (0x00053773) query_button_pane_t1

0x4aaa,	// (0x0004987d) main_tport_pane_ParamLimits

0x81bd,	// (0x0004cf90) bg_popup_window_pane_cp01_ParamLimits

0x81bd,	// (0x0004cf90) bg_popup_window_pane_cp01

0x81d8,	// (0x0004cfab) heading_pane_cp08_ParamLimits

0x81d8,	// (0x0004cfab) heading_pane_cp08

0x81eb,	// (0x0004cfbe) heading_pane_cp07_ParamLimits

0x81eb,	// (0x0004cfbe) heading_pane_cp07

0x8292,	// (0x0004d065) cell_tport_appsw_pane_g2

0x0002,

0xfc46,	// (0x00054a19) cell_tport_appsw_pane_g

0xac36,	// (0x0004fa09) input_candi_list_open_g1

0x39f2,	// (0x000487c5) list_cale_time_pane_g6_ParamLimits

0x39f2,	// (0x000487c5) list_cale_time_pane_g6

0x50b7,	// (0x00049e8a) aid_size_touch_calib_1_ParamLimits

0x50b7,	// (0x00049e8a) aid_size_touch_calib_1

0x50c9,	// (0x00049e9c) aid_size_touch_calib_2_ParamLimits

0x50c9,	// (0x00049e9c) aid_size_touch_calib_2

0x50e1,	// (0x00049eb4) aid_size_touch_calib_3_ParamLimits

0x50e1,	// (0x00049eb4) aid_size_touch_calib_3

0x50ff,	// (0x00049ed2) aid_size_touch_calib_4_ParamLimits

0x50ff,	// (0x00049ed2) aid_size_touch_calib_4

0x5117,	// (0x00049eea) main_touch_calib_button_group_pane_ParamLimits

0x5117,	// (0x00049eea) main_touch_calib_button_group_pane

0x512f,	// (0x00049f02) main_touch_calib_pane_g1_ParamLimits

0x5141,	// (0x00049f14) main_touch_calib_pane_g2_ParamLimits

0x5153,	// (0x00049f26) main_touch_calib_pane_g3_ParamLimits

0x5165,	// (0x00049f38) main_touch_calib_pane_g4_ParamLimits

0xf692,	// (0x00054465) main_touch_calib_pane_g_ParamLimits

0x5177,	// (0x00049f4a) main_touch_calib_pane_t1_ParamLimits

0x5191,	// (0x00049f64) main_touch_calib_pane_t2_ParamLimits

0x51ab,	// (0x00049f7e) main_touch_calib_pane_t3_ParamLimits

0x51bf,	// (0x00049f92) main_touch_calib_pane_t4_ParamLimits

0x51d3,	// (0x00049fa6) main_touch_calib_pane_t5_ParamLimits

0xf69b,	// (0x0005446e) main_touch_calib_pane_t_ParamLimits

0xc73d,	// (0x00051510) list_single_fp_cale_pane_g3_ParamLimits

0xc73d,	// (0x00051510) list_single_fp_cale_pane_g3

0x1451,	// (0x00046224) bg_button_pane_cp012_ParamLimits

0x1451,	// (0x00046224) bg_vkb2_func_pane_cp03_ParamLimits

0x6ee8,	// (0x0004bcbb) cell_vitu2_function_top_pane_g1_ParamLimits

0x1451,	// (0x00046224) bg_vkb2_func_pane_cp04_ParamLimits

0x7ae6,	// (0x0004c8b9) main_ncimui_button_group_pane_ParamLimits

0x7ae6,	// (0x0004c8b9) main_ncimui_button_group_pane

0x7b46,	// (0x0004c919) main_ncimui_pane_t3_ParamLimits

0x7b46,	// (0x0004c919) main_ncimui_pane_t3

0xe72f,	// (0x00053502) phacti_button_group_pane

0xe91c,	// (0x000536ef) aid_size_list_single_double_ParamLimits

0x85bf,	// (0x0004d392) popup_ezdial_listscroll_window_ParamLimits

0xe928,	// (0x000536fb) popup_number_entry_window_cp01_ParamLimits

0x8660,	// (0x0004d433) phacti_button_pane_ParamLimits

0x8660,	// (0x0004d433) phacti_button_pane

0x128d,	// (0x00046060) bg_button_pane_cp14

0xe9ae,	// (0x00053781) phacti_button_pane_t1

0x8671,	// (0x0004d444) main_touch_calib_button_pane_ParamLimits

0x8671,	// (0x0004d444) main_touch_calib_button_pane

0x1d43,	// (0x00046b16) bg_button_pane_cp18_ParamLimits

0x1d43,	// (0x00046b16) bg_button_pane_cp18

0xe9bc,	// (0x0005378f) main_touch_calib_button_pane_t1_ParamLimits

0xe9bc,	// (0x0005378f) main_touch_calib_button_pane_t1

0xe9d2,	// (0x000537a5) main_touch_calib_button_pane_t2_ParamLimits

0xe9d2,	// (0x000537a5) main_touch_calib_button_pane_t2

0x0001,

0x081f,	// (0x000455f2) main_touch_calib_button_pane_t_ParamLimits

0x081f,	// (0x000455f2) main_touch_calib_button_pane_t

0x128d,	// (0x00046060) cell_ncimui_button_pane

0x128d,	// (0x00046060) bg_button_pane_cp032

0xe9f0,	// (0x000537c3) cell_ncimui_button_pane_t1

0xcde5,	// (0x00051bb8) image3_infobar_pane_ParamLimits

0xcde5,	// (0x00051bb8) image3_infobar_pane

0x7eb8,	// (0x0004cc8b) fs_bigclock_status_pane_ParamLimits

0x7eb8,	// (0x0004cc8b) fs_bigclock_status_pane

0x7ec5,	// (0x0004cc98) main_fs_bigclock_clock_pane_ParamLimits

0x7ec5,	// (0x0004cc98) main_fs_bigclock_clock_pane

0x7ee3,	// (0x0004ccb6) main_fs_bigclock_indi_pane_ParamLimits

0x7ee3,	// (0x0004ccb6) main_fs_bigclock_indi_pane

0x7f15,	// (0x0004cce8) main_fs_bigclock_swipe_pane_ParamLimits

0x7f15,	// (0x0004cce8) main_fs_bigclock_swipe_pane

0x128d,	// (0x00046060) main_fs_clock_dumped_data

0xe27d,	// (0x00053050) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe27d,	// (0x00053050) list_single_fs_bigclock_indicator_pane_g1

0xe299,	// (0x0005306c) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe299,	// (0x0005306c) list_single_fs_bigclock_indicator_pane_g2

0xe2bf,	// (0x00053092) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe2bf,	// (0x00053092) list_single_fs_bigclock_indicator_pane_g3

0xe2d9,	// (0x000530ac) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe2d9,	// (0x000530ac) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfba5,	// (0x00054978) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfba5,	// (0x00054978) list_single_fs_bigclock_indicator_pane_g

0xe304,	// (0x000530d7) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe304,	// (0x000530d7) list_single_fs_bigclock_indicator_pane_t1

0xe32c,	// (0x000530ff) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe32c,	// (0x000530ff) list_single_fs_bigclock_indicator_pane_t2

0xe354,	// (0x00053127) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe354,	// (0x00053127) list_single_fs_bigclock_indicator_pane_t3

0xe37c,	// (0x0005314f) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe37c,	// (0x0005314f) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfbb0,	// (0x00054983) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfbb0,	// (0x00054983) list_single_fs_bigclock_indicator_pane_t

0xe9fe,	// (0x000537d1) image3_infobar_fav_pane_ParamLimits

0xe9fe,	// (0x000537d1) image3_infobar_fav_pane

0xea0e,	// (0x000537e1) image3_infobar_loc_pane_ParamLimits

0xea0e,	// (0x000537e1) image3_infobar_loc_pane

0xea22,	// (0x000537f5) image3_infobar_time_pane_ParamLimits

0xea22,	// (0x000537f5) image3_infobar_time_pane

0x1cd1,	// (0x00046aa4) image3_infobar_time_pane_g1

0xea32,	// (0x00053805) image3_infobar_time_pane_t1

0x1cd1,	// (0x00046aa4) image3_infobar_loc_pane_g1

0xea40,	// (0x00053813) image3_infobar_loc_pane_g2

0x0001,

0xfce6,	// (0x00054ab9) image3_infobar_loc_pane_g

0xea48,	// (0x0005381b) image3_infobar_loc_pane_t1

0x1cd1,	// (0x00046aa4) image3_infobar_fav_pane_g1

0xea56,	// (0x00053829) image3_infobar_fav_pane_g2

0x0001,

0xfceb,	// (0x00054abe) image3_infobar_fav_pane_g

0xea5e,	// (0x00053831) fs_bigclock_status_battery_pane

0xea67,	// (0x0005383a) fs_bigclock_status_signal_pane

0xea70,	// (0x00053843) fs_bigclock_status_title_pane

0xea79,	// (0x0005384c) fs_bigclock_status_signal_pane_g1

0xea82,	// (0x00053855) fs_bigclock_status_signal_pane_g2

0x0001,

0x082e,	// (0x00045601) fs_bigclock_status_signal_pane_g

0xea8a,	// (0x0005385d) fs_bigclock_status_battery_pane_g1

0xea93,	// (0x00053866) fs_bigclock_status_battery_pane_g2

0x0001,

0x0833,	// (0x00045606) fs_bigclock_status_battery_pane_g

0xea9b,	// (0x0005386e) fs_bigclock_status_title_pane_t1

0x8686,	// (0x0004d459) main_fs_bigclock_clock_pane_g1

0x8686,	// (0x0004d459) main_fs_bigclock_clock_pane_g2

0x8697,	// (0x0004d46a) main_fs_bigclock_clock_pane_g3

0x8697,	// (0x0004d46a) main_fs_bigclock_clock_pane_g4

0x0003,

0xfcf0,	// (0x00054ac3) main_fs_bigclock_clock_pane_g

0x86aa,	// (0x0004d47d) main_fs_bigclock_clock_pane_t1

0x86c0,	// (0x0004d493) main_fs_bigclock_clock_pane_t2

0x0001,

0xfcf9,	// (0x00054acc) main_fs_bigclock_clock_pane_t

0xeaa9,	// (0x0005387c) list_single_fs_bigclock_indicator_pane_ParamLimits

0xeaa9,	// (0x0005387c) list_single_fs_bigclock_indicator_pane

0xeaba,	// (0x0005388d) list_single_fs_bigclock_pane_ParamLimits

0xeaba,	// (0x0005388d) list_single_fs_bigclock_pane

0xeae0,	// (0x000538b3) main_fs_bigclock_indicator_pane_t1

0xeaef,	// (0x000538c2) list_single_fs_bigclock_pane_g1

0xeaf7,	// (0x000538ca) list_single_fs_bigclock_pane_t1

0x1cd1,	// (0x00046aa4) main_fs_bigclock_swipe_pane_g1

0xeb3a,	// (0x0005390d) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd05,	// (0x00054ad8) main_fs_bigclock_swipe_pane_g

0xeb42,	// (0x00053915) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xeb42,	// (0x00053915) main_fs_bigclock_swipe_pane_t1

0x3cac,	// (0x00048a7f) call_type_pane_ParamLimits

0x128d,	// (0x00046060) main_btmg_pane

0xd28d,	// (0x00052060) list_single_cale_mrui_row_pane_g2_ParamLimits

0xd28d,	// (0x00052060) list_single_cale_mrui_row_pane_g2

0x0002,

0xfc8c,	// (0x00054a5f) list_single_cale_mrui_row_pane_g_ParamLimits

0xfc8c,	// (0x00054a5f) list_single_cale_mrui_row_pane_g

0xd313,	// (0x000520e6) list_recal_vselct_arw_lo_pane

0xe979,	// (0x0005374c) list_recal_vselct_arw_up_pane

0xd31b,	// (0x000520ee) list_recal_vselct_pane

0x871a,	// (0x0004d4ed) btmg_button_pane

0x8724,	// (0x0004d4f7) main_btmg_pane_g1

0x128d,	// (0x00046060) bg_button_pane_cp044

0xeb5f,	// (0x00053932) btmg_button_pane_t1

0xbe94,	// (0x00050c67) aid_listscroll_gen

0x1451,	// (0x00046224) main_cntbar_detail_pane

0xe660,	// (0x00053433) list_cmail_folder_pane

0xe2b3,	// (0x00053086) sp_fs_scroll_pane_cp03_ParamLimits

0x830f,	// (0x0004d0e2) list_single_fs_dyc_pane_cp01_ParamLimits

0x830f,	// (0x0004d0e2) list_single_fs_dyc_pane_cp01

0xeb6d,	// (0x00053940) aid_size_cmail_indent

0xd392,	// (0x00052165) list_single_dyc_row_pane_cp01

0x8760,	// (0x0004d533) cntbar_detail_list_pane_ParamLimits

0x8760,	// (0x0004d533) cntbar_detail_list_pane

0x87ac,	// (0x0004d57f) main_cntbar_detail_cont_pane_ParamLimits

0x87ac,	// (0x0004d57f) main_cntbar_detail_cont_pane

0xe2b3,	// (0x00053086) scroll_pane_cp032_ParamLimits

0xe2b3,	// (0x00053086) scroll_pane_cp032

0x87c0,	// (0x0004d593) cntbar_detail_list_event_pane_ParamLimits

0x87c0,	// (0x0004d593) cntbar_detail_list_event_pane

0x8770,	// (0x0004d543) cntbar_detail_list_shct_pane

0x2ea0,	// (0x00047c73) aid_list_gen

0xeb76,	// (0x00053949) aid_scroll

0xeb7f,	// (0x00053952) aid_size_touch_scroll_bar

0xeb88,	// (0x0005395b) aid_list_double

0x87d0,	// (0x0004d5a3) aid_list_single

0x87d0,	// (0x0004d5a3) aid_list_single_lg

0xd39b,	// (0x0005216e) aid_list_z_g_a_sm

0xd3a3,	// (0x00052176) aid_list_z_g_d

0xd3ab,	// (0x0005217e) aid_txt_z_prm

0xd3b9,	// (0x0005218c) aid_txt_z_prm_cp01

0xd3c7,	// (0x0005219a) aid_txt_z_sec

0x87d9,	// (0x0004d5ac) main_cntbar_detail_cont_pane_g1_ParamLimits

0x87d9,	// (0x0004d5ac) main_cntbar_detail_cont_pane_g1

0x87ed,	// (0x0004d5c0) main_cntbar_detail_cont_pane_g2_ParamLimits

0x87ed,	// (0x0004d5c0) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd0a,	// (0x00054add) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd0a,	// (0x00054add) main_cntbar_detail_cont_pane_g

0xeb91,	// (0x00053964) main_cntbar_detail_cont_pane_t1

0xeb9f,	// (0x00053972) main_cntbar_detail_cont_pane_t2

0xebad,	// (0x00053980) main_cntbar_detail_cont_pane_t3

0x0002,

0x085c,	// (0x0004562f) main_cntbar_detail_cont_pane_t

0x87fd,	// (0x0004d5d0) cell_cntbar_detail_list_shct_pane_ParamLimits

0x87fd,	// (0x0004d5d0) cell_cntbar_detail_list_shct_pane

0xebbb,	// (0x0005398e) cntbar_detail_list_shct_pane_g1

0xebc4,	// (0x00053997) cntbar_detail_list_shct_pane_g2

0x0001,

0x0863,	// (0x00045636) cntbar_detail_list_shct_pane_g

0x8811,	// (0x0004d5e4) cntbar_detail_list_event_pane_g1_ParamLimits

0x8811,	// (0x0004d5e4) cntbar_detail_list_event_pane_g1

0x881d,	// (0x0004d5f0) cntbar_detail_list_event_pane_g2_ParamLimits

0x881d,	// (0x0004d5f0) cntbar_detail_list_event_pane_g2

0x0005,

0xfd0f,	// (0x00054ae2) cntbar_detail_list_event_pane_g_ParamLimits

0xfd0f,	// (0x00054ae2) cntbar_detail_list_event_pane_g

0x8889,	// (0x0004d65c) cntbar_detail_list_event_pane_t1_ParamLimits

0x8889,	// (0x0004d65c) cntbar_detail_list_event_pane_t1

0x889e,	// (0x0004d671) cntbar_detail_list_event_pane_t2_ParamLimits

0x889e,	// (0x0004d671) cntbar_detail_list_event_pane_t2

0x0002,

0xfd1c,	// (0x00054aef) cntbar_detail_list_event_pane_t_ParamLimits

0xfd1c,	// (0x00054aef) cntbar_detail_list_event_pane_t

0x1cd1,	// (0x00046aa4) cell_cntbar_detail_list_shct_pane_g1

0xaa68,	// (0x0004f83b) navi_pane_mv_g3

0x1451,	// (0x00046224) main_cntbar_detail_pane_ParamLimits

0x128d,	// (0x00046060) main_notif_wgt_pane

0xcb65,	// (0x00051938) aid_tch_main_mp4_pane_g4

0xcddd,	// (0x00051bb0) popup_slider_window_cp02

0xd309,	// (0x000520dc) list_recal_day_event_pane

0x872e,	// (0x0004d501) cntbar_detail_btn_pane_ParamLimits

0x872e,	// (0x0004d501) cntbar_detail_btn_pane

0x8747,	// (0x0004d51a) cntbar_detail_btn_pane_cp01_ParamLimits

0x8747,	// (0x0004d51a) cntbar_detail_btn_pane_cp01

0x8770,	// (0x0004d543) cntbar_detail_list_shct_pane_ParamLimits

0x8780,	// (0x0004d553) cntbar_detail_pane_g1_ParamLimits

0x8780,	// (0x0004d553) cntbar_detail_pane_g1

0x8790,	// (0x0004d563) cntbar_detail_pane_t1_ParamLimits

0x8790,	// (0x0004d563) cntbar_detail_pane_t1

0x8829,	// (0x0004d5fc) cntbar_detail_list_event_pane_g3_ParamLimits

0x8829,	// (0x0004d5fc) cntbar_detail_list_event_pane_g3

0x8841,	// (0x0004d614) cntbar_detail_list_event_pane_g4_ParamLimits

0x8841,	// (0x0004d614) cntbar_detail_list_event_pane_g4

0x8859,	// (0x0004d62c) cntbar_detail_list_event_pane_g5_ParamLimits

0x8859,	// (0x0004d62c) cntbar_detail_list_event_pane_g5

0x8871,	// (0x0004d644) cntbar_detail_list_event_pane_g6_ParamLimits

0x8871,	// (0x0004d644) cntbar_detail_list_event_pane_g6

0x88b3,	// (0x0004d686) cntbar_detail_list_event_pane_t3_ParamLimits

0x88b3,	// (0x0004d686) cntbar_detail_list_event_pane_t3

0x88c5,	// (0x0004d698) popup_notif_wgt_window_ParamLimits

0x88c5,	// (0x0004d698) popup_notif_wgt_window

0x88de,	// (0x0004d6b1) popup_submenu_window_cp01_ParamLimits

0x88de,	// (0x0004d6b1) popup_submenu_window_cp01

0x2610,	// (0x000473e3) bg_popup_window_pane_cp10

0xebcd,	// (0x000539a0) listscroll_notif_wgt_pane

0xebdf,	// (0x000539b2) list_notif_wgt_window

0xebe8,	// (0x000539bb) scroll_pane_cp033

0x88f0,	// (0x0004d6c3) list_notif_wgt_row_pane_ParamLimits

0x88f0,	// (0x0004d6c3) list_notif_wgt_row_pane

0xebf1,	// (0x000539c4) aid_size_list_notif_wgt_del

0xebfe,	// (0x000539d1) list_notif_wgt_row_pane_g1

0xec0a,	// (0x000539dd) list_notif_wgt_row_pane_g2

0xec46,	// (0x00053a19) list_notif_wgt_row_pane_g3

0x0002,

0xfd23,	// (0x00054af6) list_notif_wgt_row_pane_g

0xec53,	// (0x00053a26) list_notif_wgt_row_pane_t1

0xec69,	// (0x00053a3c) list_notif_wgt_row_pane_t2

0xec7b,	// (0x00053a4e) list_notif_wgt_row_pane_t3

0x0002,

0xfd2a,	// (0x00054afd) list_notif_wgt_row_pane_t

0xd760,	// (0x00052533) list_recal_day_event_pane_g1

0xec8d,	// (0x00053a60) list_recal_day_event_pane_t1

0x128d,	// (0x00046060) bg_button_pane_cp045

0x8900,	// (0x0004d6d3) cntbar_detail_btn_pane_t1

0xab9b,	// (0x0004f96e) main_callh_pane_ParamLimits

0xab9b,	// (0x0004f96e) main_callh_pane

0x128d,	// (0x00046060) main_coverflow0_pane

0x128d,	// (0x00046060) main_wgtman_pane

0x7f2d,	// (0x0004cd00) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x7f2d,	// (0x0004cd00) main_fs_bigclock_unlock_btn_pane

0x828a,	// (0x0004d05d) bg_button_pane_cp16

0x829a,	// (0x0004d06d) cell_tport_appsw_pane_g3

0x890e,	// (0x0004d6e1) cf0_flow_pane_ParamLimits

0x890e,	// (0x0004d6e1) cf0_flow_pane

0xec9c,	// (0x00053a6f) listscroll_cf0_pane

0xeca7,	// (0x00053a7a) main_cf0_pane_g1

0x8923,	// (0x0004d6f6) main_cf0_pane_t1_ParamLimits

0x8923,	// (0x0004d6f6) main_cf0_pane_t1

0x893a,	// (0x0004d70d) main_cf0_pane_t2_ParamLimits

0x893a,	// (0x0004d70d) main_cf0_pane_t2

0x0001,

0xfd36,	// (0x00054b09) main_cf0_pane_t_ParamLimits

0xfd36,	// (0x00054b09) main_cf0_pane_t

0xecb9,	// (0x00053a8c) scroll_pane_cp11

0x8951,	// (0x0004d724) cf0_flow_pane_g1

0x8959,	// (0x0004d72c) cf0_flow_pane_g2

0x0001,

0xfd3b,	// (0x00054b0e) cf0_flow_pane_g

0x8961,	// (0x0004d734) cf0_flow_pane_t1

0x128d,	// (0x00046060) main_call6_pane

0x128d,	// (0x00046060) main_calllock_pane

0x896f,	// (0x0004d742) call6_btn_grp_pane_ParamLimits

0x896f,	// (0x0004d742) call6_btn_grp_pane

0x8989,	// (0x0004d75c) call6_pane_g1_ParamLimits

0x8989,	// (0x0004d75c) call6_pane_g1

0x899f,	// (0x0004d772) popup_call6_1st_window_ParamLimits

0x899f,	// (0x0004d772) popup_call6_1st_window

0x89b0,	// (0x0004d783) popup_call6_2nd_window_ParamLimits

0x89b0,	// (0x0004d783) popup_call6_2nd_window

0x89c1,	// (0x0004d794) cell_call6_btn_pane_ParamLimits

0x89c1,	// (0x0004d794) cell_call6_btn_pane

0x2610,	// (0x000473e3) bg_popup_call2_in_pane_cp03

0xecc4,	// (0x00053a97) popup_call6_1st_window_g1

0xeccc,	// (0x00053a9f) popup_call6_1st_window_g2

0xecd4,	// (0x00053aa7) popup_call6_1st_window_g3

0x0002,

0xfd40,	// (0x00054b13) popup_call6_1st_window_g

0xecdc,	// (0x00053aaf) popup_call6_1st_window_t1

0xeceb,	// (0x00053abe) popup_call6_1st_window_t2

0xecf9,	// (0x00053acc) popup_call6_1st_window_t3

0x0002,

0xfd47,	// (0x00054b1a) popup_call6_1st_window_t

0x2610,	// (0x000473e3) bg_popup_call2_in_pane_cp04

0xed07,	// (0x00053ada) popup_call6_2nd_window_g1

0xed0f,	// (0x00053ae2) popup_call6_2nd_window_g2

0xed17,	// (0x00053aea) popup_call6_2nd_window_g3

0x0002,

0xfd4e,	// (0x00054b21) popup_call6_2nd_window_g

0xed1f,	// (0x00053af2) popup_call6_2nd_window_t1

0x128d,	// (0x00046060) bg_button_pane_cp15

0xed2e,	// (0x00053b01) cell_call6_btn_pane_g1

0xed37,	// (0x00053b0a) cell_call6_btn_pane_t1

0x89d5,	// (0x0004d7a8) listscroll_wgtman_pane_ParamLimits

0x89d5,	// (0x0004d7a8) listscroll_wgtman_pane

0x89f6,	// (0x0004d7c9) wgtman_btn_pane_ParamLimits

0x89f6,	// (0x0004d7c9) wgtman_btn_pane

0xa87c,	// (0x0004f64f) aid_scroll_copy1

0xed46,	// (0x00053b19) list_wgtman_pane

0x8a39,	// (0x0004d80c) wgtman_btn_pane_g1_ParamLimits

0x8a39,	// (0x0004d80c) wgtman_btn_pane_g1

0x8a65,	// (0x0004d838) wgtman_btn_pane_t1_ParamLimits

0x8a65,	// (0x0004d838) wgtman_btn_pane_t1

0xed50,	// (0x00053b23) wgtman_btn_pane_t2_ParamLimits

0xed50,	// (0x00053b23) wgtman_btn_pane_t2

0x0001,

0xfd55,	// (0x00054b28) wgtman_btn_pane_t_ParamLimits

0xfd55,	// (0x00054b28) wgtman_btn_pane_t

0x8aa2,	// (0x0004d875) listrow_wgtman_pane_ParamLimits

0x8aa2,	// (0x0004d875) listrow_wgtman_pane

0x8ab5,	// (0x0004d888) listrow_wgtman_pane_g1

0x8ac2,	// (0x0004d895) listrow_wgtman_pane_g2

0x0001,

0xfd5a,	// (0x00054b2d) listrow_wgtman_pane_g

0x1153,	// (0x00045f26) listrow_wgtman_pane_t1

0x116b,	// (0x00045f3e) listrow_wgtman_pane_t2

0x0001,

0xfd5f,	// (0x00054b32) listrow_wgtman_pane_t

0x1191,	// (0x00045f64) wait_bar_pane_cp09

0xed67,	// (0x00053b3a) main_calllock_btn_pane

0xed71,	// (0x00053b44) main_calllock_pane_g1

0x128d,	// (0x00046060) bg_button_pane_cp17

0xed2e,	// (0x00053b01) main_calllock_btn_pane_g1

0xed79,	// (0x00053b4c) main_calllock_btn_pane_t1

0x128d,	// (0x00046060) main_dialer3_pane

0x128d,	// (0x00046060) main_fmrd2_pane

0x1cd1,	// (0x00046aa4) main_fs_bigclock_unlock_btn_pane_g1

0x8ae8,	// (0x0004d8bb) main_fs_bigclock_unlock_btn_pane_t1

0x8af6,	// (0x0004d8c9) area_fmrd2_info_pane_ParamLimits

0x8af6,	// (0x0004d8c9) area_fmrd2_info_pane

0x8b07,	// (0x0004d8da) area_fmrd2_visual_pane_ParamLimits

0x8b07,	// (0x0004d8da) area_fmrd2_visual_pane

0x8b15,	// (0x0004d8e8) fmrd2_indi_pane_ParamLimits

0x8b15,	// (0x0004d8e8) fmrd2_indi_pane

0x8b22,	// (0x0004d8f5) area_fmrd2_visual_pane_g1

0x8b2a,	// (0x0004d8fd) area_fmrd2_visual_pane_t1

0x8b3a,	// (0x0004d90d) area_fmrd2_visual_pane_t2

0x8b4a,	// (0x0004d91d) area_fmrd2_visual_pane_t3

0x0002,

0xfd69,	// (0x00054b3c) area_fmrd2_visual_pane_t

0x8b5a,	// (0x0004d92d) area_fmrd2_info_pane_g1

0x8b62,	// (0x0004d935) area_fmrd2_info_pane_t1

0x8b72,	// (0x0004d945) area_fmrd2_info_pane_t2

0x8b82,	// (0x0004d955) area_fmrd2_info_pane_t3

0x8b92,	// (0x0004d965) area_fmrd2_info_pane_t4

0x0003,

0xfd70,	// (0x00054b43) area_fmrd2_info_pane_t

0x8ba0,	// (0x0004d973) fmrd2_indi_pane_t1

0x8bb0,	// (0x0004d983) fmrd2_indi_pane_t2

0x8bc0,	// (0x0004d993) fmrd2_indi_pane_t3

0x0002,

0xfd79,	// (0x00054b4c) fmrd2_indi_pane_t

0xe2e8,	// (0x000530bb) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe2e8,	// (0x000530bb) list_single_fs_bigclock_indicator_pane_g5

0xe399,	// (0x0005316c) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe399,	// (0x0005316c) list_single_fs_bigclock_indicator_pane_t5

0x8414,	// (0x0004d1e7) aid_cell_bcale_month_pane_ParamLimits

0x8414,	// (0x0004d1e7) aid_cell_bcale_month_pane

0x8432,	// (0x0004d205) bcale_month_pane_ParamLimits

0x8432,	// (0x0004d205) bcale_month_pane

0x8456,	// (0x0004d229) bcale_preview_pane_ParamLimits

0x8456,	// (0x0004d229) bcale_preview_pane

0xeaf7,	// (0x000538ca) list_single_fs_bigclock_pane_t1_ParamLimits

0xeb16,	// (0x000538e9) list_single_fs_bigclock_pane_t2_ParamLimits

0xeb16,	// (0x000538e9) list_single_fs_bigclock_pane_t2

0x0001,

0x084d,	// (0x00045620) list_single_fs_bigclock_pane_t_ParamLimits

0x084d,	// (0x00045620) list_single_fs_bigclock_pane_t

0x8ae0,	// (0x0004d8b3) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfd64,	// (0x00054b37) main_fs_bigclock_unlock_btn_pane_g

0x8bd0,	// (0x0004d9a3) aid_dia3_key_size_ParamLimits

0x8bd0,	// (0x0004d9a3) aid_dia3_key_size

0x8bdf,	// (0x0004d9b2) aid_dia3_listrow_size_ParamLimits

0x8bdf,	// (0x0004d9b2) aid_dia3_listrow_size

0x8bf4,	// (0x0004d9c7) dia3_keypad_fun_pane_ParamLimits

0x8bf4,	// (0x0004d9c7) dia3_keypad_fun_pane

0x8c10,	// (0x0004d9e3) dia3_keypad_num_pane_ParamLimits

0x8c10,	// (0x0004d9e3) dia3_keypad_num_pane

0x8c2b,	// (0x0004d9fe) dia3_listscroll_pane_ParamLimits

0x8c2b,	// (0x0004d9fe) dia3_listscroll_pane

0x8c3e,	// (0x0004da11) dia3_numentry_pane_ParamLimits

0x8c3e,	// (0x0004da11) dia3_numentry_pane

0xed88,	// (0x00053b5b) dia3_list_pane

0xed93,	// (0x00053b66) scroll_pane_cp12

0x128d,	// (0x00046060) bg_dia3_numentry_pane

0x8c56,	// (0x0004da29) dia3_numentry_pane_t1

0x8c65,	// (0x0004da38) cell_dia3_key_num_pane

0x8c6d,	// (0x0004da40) cell_dia3_key0_fun_pane_ParamLimits

0x8c6d,	// (0x0004da40) cell_dia3_key0_fun_pane

0x8c81,	// (0x0004da54) cell_dia3_key1_fun_pane_ParamLimits

0x8c81,	// (0x0004da54) cell_dia3_key1_fun_pane

0x8c99,	// (0x0004da6c) dia3_listrow_pane

0xe02f,	// (0x00052e02) bg_dia3_numentry_pane_g1

0x128d,	// (0x00046060) bg_button_pane_cp21

0xed9e,	// (0x00053b71) cell_dia3_key_num_pane_t1

0xedac,	// (0x00053b7f) cell_dia3_key_num_pane_t2

0xedbb,	// (0x00053b8e) cell_dia3_key_num_pane_t3

0xedca,	// (0x00053b9d) cell_dia3_key_num_pane_t4

0x0003,

0xfd80,	// (0x00054b53) cell_dia3_key_num_pane_t

0x128d,	// (0x00046060) bg_button_pane_cp19

0x8cab,	// (0x0004da7e) cell_dia3_key0_fun_pane_g1

0x128d,	// (0x00046060) bg_button_pane_cp20

0x8cb3,	// (0x0004da86) cell_dia3_key1_fun_pane_g1

0x8cbb,	// (0x0004da8e) area_left_week_number_pane

0x8cc7,	// (0x0004da9a) area_top_day_name_pane

0x8cda,	// (0x0004daad) frame_month_view_pane

0xedd9,	// (0x00053bac) grid_month_view_pane

0x8ced,	// (0x0004dac0) cell_top_day_name_pane_ParamLimits

0x8ced,	// (0x0004dac0) cell_top_day_name_pane

0x8d1a,	// (0x0004daed) cell_area_left_week_number_pane_ParamLimits

0x8d1a,	// (0x0004daed) cell_area_left_week_number_pane

0x8d2e,	// (0x0004db01) cell_month_view_pane_ParamLimits

0x8d2e,	// (0x0004db01) cell_month_view_pane

0xede7,	// (0x00053bba) frm_month_g1

0x8d5b,	// (0x0004db2e) frm_month_g2

0x8d6e,	// (0x0004db41) frm_month_g3

0x8d81,	// (0x0004db54) frm_month_g4

0x8d94,	// (0x0004db67) frm_month_g5

0x8da7,	// (0x0004db7a) frm_month_g6

0x8dba,	// (0x0004db8d) frm_month_g7

0xedf4,	// (0x00053bc7) frm_month_g8

0x8dcd,	// (0x0004dba0) frm_month_g9

0x8ddd,	// (0x0004dbb0) frm_month_g10

0x8ded,	// (0x0004dbc0) frm_month_g11

0x8dfd,	// (0x0004dbd0) frm_month_g12

0x8e0f,	// (0x0004dbe2) frm_month_g13

0x8e21,	// (0x0004dbf4) frm_month_g14

0x8e35,	// (0x0004dc08) frm_month_g15

0x8e49,	// (0x0004dc1c) frm_month_g16

0x000f,

0xfd89,	// (0x00054b5c) frm_month_g

0xee01,	// (0x00053bd4) cell_top_day_name_pane_t1

0x8e5d,	// (0x0004dc30) cell_area_left_week_number_pane_g1

0x8e69,	// (0x0004dc3c) cell_area_left_week_number_pane_t1

0x1bff,	// (0x000469d2) cell_month_view_pane_g1

0x8e7c,	// (0x0004dc4f) cell_month_view_pane_t1

0x128d,	// (0x00046060) main_fps_pane

0xe55d,	// (0x00053330) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe55d,	// (0x00053330) cmail_ddmenu_btn02_pane_cp1

0xe579,	// (0x0005334c) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe579,	// (0x0005334c) cmail_ddmenu_btn02_pane_cp2

0x85fa,	// (0x0004d3cd) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x85fa,	// (0x0004d3cd) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfcc7,	// (0x00054a9a) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfcc7,	// (0x00054a9a) cmail_ddmenu_btn02_pane_g

0x8618,	// (0x0004d3eb) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8618,	// (0x0004d3eb) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfccc,	// (0x00054a9f) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfccc,	// (0x00054a9f) cmail_ddmenu_btn02_pane_t

0x8e8f,	// (0x0004dc62) fps_text_pane_ParamLimits

0x8e8f,	// (0x0004dc62) fps_text_pane

0x8ea6,	// (0x0004dc79) main_fps_pane_g1_ParamLimits

0x8ea6,	// (0x0004dc79) main_fps_pane_g1

0x8ec0,	// (0x0004dc93) wait_bar_pane_cp010_ParamLimits

0x8ec0,	// (0x0004dc93) wait_bar_pane_cp010

0x8ed1,	// (0x0004dca4) fps_text_pane_t1_ParamLimits

0x8ed1,	// (0x0004dca4) fps_text_pane_t1

0xec19,	// (0x000539ec) cam4_image_uncrop_pane_g1

0xec22,	// (0x000539f5) cam4_image_uncrop_pane_g2

0x6480,	// (0x0004b253) cam4_image_uncrop_pane_g3

0x6489,	// (0x0004b25c) cam4_image_uncrop_pane_g4

0x0003,

0xf829,	// (0x000545fc) cam4_image_uncrop_pane_g

0x8c99,	// (0x0004da6c) dia3_listrow_pane_ParamLimits

0x128d,	// (0x00046060) main_phob2_pane

0x825b,	// (0x0004d02e) cell_tport_appsw_pane_cp02_ParamLimits

0x825b,	// (0x0004d02e) cell_tport_appsw_pane_cp02

0x826f,	// (0x0004d042) cell_tport_appsw_pane_cp03_ParamLimits

0x826f,	// (0x0004d042) cell_tport_appsw_pane_cp03

0x128d,	// (0x00046060) phob2_contact_card_pane

0x128d,	// (0x00046060) phob2_listscroll_pane

0xee14,	// (0x00053be7) phob2_list_pane

0xe93d,	// (0x00053710) scroll_pane_cp034

0x8ee9,	// (0x0004dcbc) phob2_cc_data_pane_ParamLimits

0x8ee9,	// (0x0004dcbc) phob2_cc_data_pane

0x8f08,	// (0x0004dcdb) phob2_cc_listscroll_pane_ParamLimits

0x8f08,	// (0x0004dcdb) phob2_cc_listscroll_pane

0x8aa2,	// (0x0004d875) list_double_large_graphic_phob2_pane_ParamLimits

0x8aa2,	// (0x0004d875) list_double_large_graphic_phob2_pane

0x8f26,	// (0x0004dcf9) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x8f26,	// (0x0004dcf9) list_double_large_graphic_phob2_pane_g1

0x11a3,	// (0x00045f76) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x11a3,	// (0x00045f76) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfdaa,	// (0x00054b7d) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfdaa,	// (0x00054b7d) list_double_large_graphic_phob2_pane_g

0x11c9,	// (0x00045f9c) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x11c9,	// (0x00045f9c) list_double_large_graphic_phob2_pane_t1

0x11de,	// (0x00045fb1) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x11de,	// (0x00045fb1) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfdb3,	// (0x00054b86) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfdb3,	// (0x00054b86) list_double_large_graphic_phob2_pane_t

0x128d,	// (0x00046060) list_highlight_pane_cp024

0xee1c,	// (0x00053bef) phob2_cc_button_pane

0x8f33,	// (0x0004dd06) phob2_cc_data_pane_g1_ParamLimits

0x8f33,	// (0x0004dd06) phob2_cc_data_pane_g1

0x8f4a,	// (0x0004dd1d) phob2_cc_data_pane_g2_ParamLimits

0x8f4a,	// (0x0004dd1d) phob2_cc_data_pane_g2

0x0001,

0xfdb8,	// (0x00054b8b) phob2_cc_data_pane_g_ParamLimits

0xfdb8,	// (0x00054b8b) phob2_cc_data_pane_g

0x8f5c,	// (0x0004dd2f) phob2_cc_data_pane_t1_ParamLimits

0x8f5c,	// (0x0004dd2f) phob2_cc_data_pane_t1

0x8f74,	// (0x0004dd47) phob2_cc_data_pane_t2_ParamLimits

0x8f74,	// (0x0004dd47) phob2_cc_data_pane_t2

0x8f8c,	// (0x0004dd5f) phob2_cc_data_pane_t3_ParamLimits

0x8f8c,	// (0x0004dd5f) phob2_cc_data_pane_t3

0x0002,

0xfdbd,	// (0x00054b90) phob2_cc_data_pane_t_ParamLimits

0xfdbd,	// (0x00054b90) phob2_cc_data_pane_t

0xee24,	// (0x00053bf7) phob2_cc_list_pane_ParamLimits

0xee24,	// (0x00053bf7) phob2_cc_list_pane

0xddde,	// (0x00052bb1) scroll_pane_cp035_ParamLimits

0xddde,	// (0x00052bb1) scroll_pane_cp035

0x1451,	// (0x00046224) bg_button_pane_cp033

0xee30,	// (0x00053c03) phob2_cc_button_pane_g1

0xee3c,	// (0x00053c0f) phob2_cc_button_pane_t1

0xee51,	// (0x00053c24) phob2_cc_button_pane_t2

0x0001,

0x091d,	// (0x000456f0) phob2_cc_button_pane_t

0x8fa4,	// (0x0004dd77) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x8fa4,	// (0x0004dd77) list_double_large_graphic_phob2_cc_pane

0x8fd6,	// (0x0004dda9) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x8fd6,	// (0x0004dda9) list_double_large_graphic_phob2_cc_pane_g1

0x11f3,	// (0x00045fc6) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x11f3,	// (0x00045fc6) list_double_large_graphic_phob2_cc_pane_g2

0x11ff,	// (0x00045fd2) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x11ff,	// (0x00045fd2) list_double_large_graphic_phob2_cc_pane_g3

0x120b,	// (0x00045fde) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x120b,	// (0x00045fde) list_double_large_graphic_phob2_cc_pane_g4

0x1217,	// (0x00045fea) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x1217,	// (0x00045fea) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfdc4,	// (0x00054b97) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfdc4,	// (0x00054b97) list_double_large_graphic_phob2_cc_pane_g

0x1223,	// (0x00045ff6) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x1223,	// (0x00045ff6) list_double_large_graphic_phob2_cc_pane_t1

0x124c,	// (0x0004601f) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x124c,	// (0x0004601f) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfdcf,	// (0x00054ba2) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfdcf,	// (0x00054ba2) list_double_large_graphic_phob2_cc_pane_t

0xee63,	// (0x00053c36) list_highlight_pane_cp025_ParamLimits

0xee63,	// (0x00053c36) list_highlight_pane_cp025

0x1451,	// (0x00046224) bg_button_pane_cp033_ParamLimits

0xee30,	// (0x00053c03) phob2_cc_button_pane_g1_ParamLimits

0xee3c,	// (0x00053c0f) phob2_cc_button_pane_t1_ParamLimits

0xee51,	// (0x00053c24) phob2_cc_button_pane_t2_ParamLimits

0x091d,	// (0x000456f0) phob2_cc_button_pane_t_ParamLimits

0x145f,	// (0x00046232) popup_wgtman_window

0xd629,	// (0x000523fc) scroll_pane_cp038

0x8a1b,	// (0x0004d7ee) wgtman_btn_pane_cp_01_ParamLimits

0x8a1b,	// (0x0004d7ee) wgtman_btn_pane_cp_01

0xee71,	// (0x00053c44) wgtman_content_pane

0xee7a,	// (0x00053c4d) wgtman_heading_pane

0x128d,	// (0x00046060) bg_heading_pane_cp02

0xee83,	// (0x00053c56) wgtman_heading_pane_g1

0xee8b,	// (0x00053c5e) wgtman_heading_pane_t1

0xee99,	// (0x00053c6c) scroll_pane_cp036

0xeea1,	// (0x00053c74) wgtman_list_pane

0xec2b,	// (0x000539fe) wgtman_list_pane_t1_ParamLimits

0xec2b,	// (0x000539fe) wgtman_list_pane_t1

0xce59,	// (0x00051c2c) cam4_grid_pane

0x0be2,	// (0x000459b5) bg_button_pane_cp015_ParamLimits

0x7075,	// (0x0004be48) bg_button_pane_cp016_ParamLimits

0x7081,	// (0x0004be54) bg_button_pane_cp017_ParamLimits

0x709c,	// (0x0004be6f) popup_vitu2_query_window_g3_ParamLimits

0x709c,	// (0x0004be6f) popup_vitu2_query_window_g3

0x0c99,	// (0x00045a6c) popup_vitu2_query_window_t6_ParamLimits

0x0c99,	// (0x00045a6c) popup_vitu2_query_window_t6

0x0cc4,	// (0x00045a97) popup_vitu2_query_window_t7_ParamLimits

0x0cc4,	// (0x00045a97) popup_vitu2_query_window_t7

0xec19,	// (0x000539ec) cam4_grid_pane_g1

0xec22,	// (0x000539f5) cam4_grid_pane_g2

0xeea9,	// (0x00053c7c) cam4_grid_pane_g3

0xeeb2,	// (0x00053c85) cam4_grid_pane_g4

0x0003,

0xfdd4,	// (0x00054ba7) cam4_grid_pane_g

0x28a4,	// (0x00047677) aid_placing_vt_slider_lsc_ParamLimits

0x2bf1,	// (0x000479c4) vidtel_button_pane_ParamLimits

0x2bf1,	// (0x000479c4) vidtel_button_pane

0x128d,	// (0x00046060) bg_button_pane_cp034

0xeebd,	// (0x00053c90) vidtel_button_pane_g1

0xeec5,	// (0x00053c98) vidtel_button_pane_t1

0xd750,	// (0x00052523) aid_size_vtel_slider_touch

0xddde,	// (0x00052bb1) scroll_pane_cp039

0x7cc4,	// (0x0004ca97) ncim_query_button_pane_cp01_ParamLimits

0x7ce3,	// (0x0004cab6) ncimui_query_pane_g1_ParamLimits

0x1451,	// (0x00046224) input_focus_pane_cp012_ParamLimits

0xe075,	// (0x00052e48) ncim_query_entry_pane_t1_ParamLimits

0xddde,	// (0x00052bb1) scroll_pane_cp039_ParamLimits

0xa953,	// (0x0004f726) navi_pane_bcale_mc_g1

0xa95b,	// (0x0004f72e) navi_pane_bcale_mc_t1

0xe5ad,	// (0x00053380) main_sp_fs_email_pane_g1

0xe5b9,	// (0x0005338c) main_sp_fs_email_pane_g2

0x0001,

0xfc15,	// (0x000549e8) main_sp_fs_email_pane_g

0xe854,	// (0x00053627) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe854,	// (0x00053627) list_single_cale_mrui_row_pane_g3

0x1149,	// (0x00045f1c) list_single_recal_day_pane_g5_event_pane

0xd366,	// (0x00052139) list_single_recal_day_pane_g7

0xeedb,	// (0x00053cae) list_recal_day_event_pane_cp01

0xeee4,	// (0x00053cb7) list_recal_vselct_arw_lo_pane_cp01

0xeeec,	// (0x00053cbf) list_recal_vselct_arw_up_pane_cp01

0xeef4,	// (0x00053cc7) list_recal_vselct_pane_cp01

0xd760,	// (0x00052533) list_recal_day_event_pane_cp01_g1

0xd3d5,	// (0x000521a8) list_recal_day_event_pane_cp01_t1

0xd36e,	// (0x00052141) list_single_recal_day_pane_t1_ParamLimits

0xd380,	// (0x00052153) list_single_recal_day_pane_t2_ParamLimits

0xfcdc,	// (0x00054aaf) list_single_recal_day_pane_t_ParamLimits

0x1b84,	// (0x00046957) bg_notes_pane_ParamLimits

0x1d0d,	// (0x00046ae0) list_notes_pane_ParamLimits

0x1d1b,	// (0x00046aee) scroll_pane_cp06_ParamLimits

0x1d43,	// (0x00046b16) main_notes_pane_ParamLimits

0x1451,	// (0x00046224) main_welc_pane

0x900f,	// (0x0004dde2) main_welc_body_pane_ParamLimits

0x900f,	// (0x0004dde2) main_welc_body_pane

0x902c,	// (0x0004ddff) main_welc_opti_pane_ParamLimits

0x902c,	// (0x0004ddff) main_welc_opti_pane

0x90a3,	// (0x0004de76) main_welc_pane_t1_ParamLimits

0x90a3,	// (0x0004de76) main_welc_pane_t1

0x929b,	// (0x0004e06e) main_welc_body_row_pane_ParamLimits

0x929b,	// (0x0004e06e) main_welc_body_row_pane

0x1bf1,	// (0x000469c4) main_welc_opti_row_pane_ParamLimits

0x1bf1,	// (0x000469c4) main_welc_opti_row_pane

0xef0e,	// (0x00053ce1) main_welc_opti_row_pane_g1

0x92b0,	// (0x0004e083) main_welc_opti_row_pane_t1

0xef16,	// (0x00053ce9) main_welc_body_row_pane_t1

0xebd7,	// (0x000539aa) popup_notif_wgt_heading_pane

0xebf1,	// (0x000539c4) aid_size_list_notif_wgt_del_ParamLimits

0xebfe,	// (0x000539d1) list_notif_wgt_row_pane_g1_ParamLimits

0xec0a,	// (0x000539dd) list_notif_wgt_row_pane_g2_ParamLimits

0xec46,	// (0x00053a19) list_notif_wgt_row_pane_g3_ParamLimits

0xfd23,	// (0x00054af6) list_notif_wgt_row_pane_g_ParamLimits

0xec53,	// (0x00053a26) list_notif_wgt_row_pane_t1_ParamLimits

0xec69,	// (0x00053a3c) list_notif_wgt_row_pane_t2_ParamLimits

0xec7b,	// (0x00053a4e) list_notif_wgt_row_pane_t3_ParamLimits

0xfd2a,	// (0x00054afd) list_notif_wgt_row_pane_t_ParamLimits

0x8ab5,	// (0x0004d888) listrow_wgtman_pane_g1_ParamLimits

0x8ac2,	// (0x0004d895) listrow_wgtman_pane_g2_ParamLimits

0xfd5a,	// (0x00054b2d) listrow_wgtman_pane_g_ParamLimits

0x1153,	// (0x00045f26) listrow_wgtman_pane_t1_ParamLimits

0x116b,	// (0x00045f3e) listrow_wgtman_pane_t2_ParamLimits

0xfd5f,	// (0x00054b32) listrow_wgtman_pane_t_ParamLimits

0x1191,	// (0x00045f64) wait_bar_pane_cp09_ParamLimits

0x128d,	// (0x00046060) bg_popup_heading_pane_cp02

0xef25,	// (0x00053cf8) popup_notif_wgt_heading_pane_g1

0xef2d,	// (0x00053d00) popup_notif_wgt_heading_pane_t1

0x128d,	// (0x00046060) main_vids_pane

0x128d,	// (0x00046060) vids_listscroll_pane

0x92bf,	// (0x0004e092) scroll_pane_cp040

0x128d,	// (0x00046060) vids_list_pane

0x92ca,	// (0x0004e09d) vids_list_double_pane_ParamLimits

0x92ca,	// (0x0004e09d) vids_list_double_pane

0x92db,	// (0x0004e0ae) vids_list_double_pane_g1

0x92e4,	// (0x0004e0b7) vids_list_double_pane_t1

0x92f3,	// (0x0004e0c6) vids_list_double_pane_t2

0x0001,

0xfdf3,	// (0x00054bc6) vids_list_double_pane_t

0x1451,	// (0x00046224) main_ncimui_pane_ParamLimits

0x7afa,	// (0x0004c8cd) main_ncimui_pane_g1_ParamLimits

0x7b06,	// (0x0004c8d9) main_ncimui_pane_g2_ParamLimits

0x7b06,	// (0x0004c8d9) main_ncimui_pane_g2

0x0001,

0xfb1b,	// (0x000548ee) main_ncimui_pane_g_ParamLimits

0xfb1b,	// (0x000548ee) main_ncimui_pane_g

0x9047,	// (0x0004de1a) main_welc_pane_g1_ParamLimits

0x9047,	// (0x0004de1a) main_welc_pane_g1

0x905c,	// (0x0004de2f) main_welc_pane_g2_ParamLimits

0x905c,	// (0x0004de2f) main_welc_pane_g2

0x0003,

0xfddd,	// (0x00054bb0) main_welc_pane_g_ParamLimits

0xfddd,	// (0x00054bb0) main_welc_pane_g

0x1b84,	// (0x00046957) listscroll_mce_pane_ParamLimits

0xaaa8,	// (0x0004f87b) wait_bar_pane_cp10

0xbe9c,	// (0x00050c6f) main_cale_day_pane_ParamLimits

0xbe9c,	// (0x00050c6f) main_cale_week_pane_ParamLimits

0x1b84,	// (0x00046957) main_messa_pane_ParamLimits

0x594c,	// (0x0004a71f) main_clock2_btn_pane_ParamLimits

0x594c,	// (0x0004a71f) main_clock2_btn_pane

0xc7b7,	// (0x0005158a) main_clock2_btn_pane_cp01_ParamLimits

0xc7b7,	// (0x0005158a) main_clock2_btn_pane_cp01

0xe825,	// (0x000535f8) list_cale_mrui_pane_ParamLimits

0xecb1,	// (0x00053a84) main_cf0_pane_g2

0x0001,

0xfd31,	// (0x00054b04) main_cf0_pane_g

0x8cbb,	// (0x0004da8e) area_left_week_number_pane_ParamLimits

0x8cc7,	// (0x0004da9a) area_top_day_name_pane_ParamLimits

0x8cda,	// (0x0004daad) frame_month_view_pane_ParamLimits

0xedd9,	// (0x00053bac) grid_month_view_pane_ParamLimits

0xede7,	// (0x00053bba) frm_month_g1_ParamLimits

0x8d5b,	// (0x0004db2e) frm_month_g2_ParamLimits

0x8d6e,	// (0x0004db41) frm_month_g3_ParamLimits

0x8d81,	// (0x0004db54) frm_month_g4_ParamLimits

0x8d94,	// (0x0004db67) frm_month_g5_ParamLimits

0x8da7,	// (0x0004db7a) frm_month_g6_ParamLimits

0x8dba,	// (0x0004db8d) frm_month_g7_ParamLimits

0xedf4,	// (0x00053bc7) frm_month_g8_ParamLimits

0x8dcd,	// (0x0004dba0) frm_month_g9_ParamLimits

0x8ddd,	// (0x0004dbb0) frm_month_g10_ParamLimits

0x8ded,	// (0x0004dbc0) frm_month_g11_ParamLimits

0x8dfd,	// (0x0004dbd0) frm_month_g12_ParamLimits

0x8e0f,	// (0x0004dbe2) frm_month_g13_ParamLimits

0x8e21,	// (0x0004dbf4) frm_month_g14_ParamLimits

0x8e35,	// (0x0004dc08) frm_month_g15_ParamLimits

0x8e49,	// (0x0004dc1c) frm_month_g16_ParamLimits

0xfd89,	// (0x00054b5c) frm_month_g_ParamLimits

0xee01,	// (0x00053bd4) cell_top_day_name_pane_t1_ParamLimits

0x8e5d,	// (0x0004dc30) cell_area_left_week_number_pane_g1_ParamLimits

0x8e69,	// (0x0004dc3c) cell_area_left_week_number_pane_t1_ParamLimits

0x1bff,	// (0x000469d2) cell_month_view_pane_g1_ParamLimits

0x8e7c,	// (0x0004dc4f) cell_month_view_pane_t1_ParamLimits

0x1b7c,	// (0x0004694f) main_clock2_btn_pane_g1

0xef3b,	// (0x00053d0e) main_clock2_btn_pane_t1

0x1451,	// (0x00046224) listscroll_cmail_pane_ParamLimits

0xe5ad,	// (0x00053380) main_sp_fs_email_pane_g1_ParamLimits

0xe5b9,	// (0x0005338c) main_sp_fs_email_pane_g2_ParamLimits

0xfc15,	// (0x000549e8) main_sp_fs_email_pane_g_ParamLimits

0xe95a,	// (0x0005372d) list_recal_day_pane_ParamLimits

0xe96b,	// (0x0005373e) mian_recal_day_pane_t1

0x0f36,	// (0x00045d09) list_single_dyc_row_text_pane_t4_ParamLimits

0x0f36,	// (0x00045d09) list_single_dyc_row_text_pane_t4

0x0f7f,	// (0x00045d52) list_single_dyc_row_text_pane_t5_ParamLimits

0x0f7f,	// (0x00045d52) list_single_dyc_row_text_pane_t5

0xd145,	// (0x00051f18) list_single_dyc_row_text_pane_t6_ParamLimits

0xd145,	// (0x00051f18) list_single_dyc_row_text_pane_t6

0x3991,	// (0x00048764) aid_mgn_list_cale_time_pane

0x1451,	// (0x00046224) main_gallery2_pane_ParamLimits

0xc7cd,	// (0x000515a0) main_clock2_pane_cp01_t1

0xc7db,	// (0x000515ae) main_clock2_pane_cp01_t3

0x0001,

0xf705,	// (0x000544d8) main_clock2_pane_cp01_t

0x2205,	// (0x00046fd8) cale_week_scroll_pane_g16_ParamLimits

0x2205,	// (0x00046fd8) cale_week_scroll_pane_g16

0x2610,	// (0x000473e3) vorec_slider_pane

0xeec5,	// (0x00053c98) vidtel_button_pane_t1_ParamLimits

0x8686,	// (0x0004d459) main_fs_bigclock_clock_pane_g1_ParamLimits

0x8686,	// (0x0004d459) main_fs_bigclock_clock_pane_g2_ParamLimits

0x8697,	// (0x0004d46a) main_fs_bigclock_clock_pane_g3_ParamLimits

0x8697,	// (0x0004d46a) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfcf0,	// (0x00054ac3) main_fs_bigclock_clock_pane_g_ParamLimits

0x86aa,	// (0x0004d47d) main_fs_bigclock_clock_pane_t1_ParamLimits

0x86c0,	// (0x0004d493) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfcf9,	// (0x00054acc) main_fs_bigclock_clock_pane_t_ParamLimits

0x5228,	// (0x00049ffb) main_mup3_lyrics_pane_ParamLimits

0x5228,	// (0x00049ffb) main_mup3_lyrics_pane

0x931b,	// (0x0004e0ee) main_mup3_lyrics_pane_t1_ParamLimits

0x931b,	// (0x0004e0ee) main_mup3_lyrics_pane_t1

0xcb4f,	// (0x00051922) aid_main_mp4_pane_t1_area

0xcb59,	// (0x0005192c) aid_main_mp4_pane_t2_area

0xcc03,	// (0x000519d6) main_mp4_pane_g7_ParamLimits

0xcc03,	// (0x000519d6) main_mp4_pane_g7

0xcc0f,	// (0x000519e2) main_mp4_pane_g8_ParamLimits

0xcc0f,	// (0x000519e2) main_mp4_pane_g8

0x6251,	// (0x0004b024) aid_call6_pane_g1_size

0x8fbf,	// (0x0004dd92) list_double_large_graphic_phob2_other_pane_ParamLimits

0x8fbf,	// (0x0004dd92) list_double_large_graphic_phob2_other_pane

0xa884,	// (0x0004f657) list_double_large_graphic_phob2_other_pane_g1

0x128d,	// (0x00046060) list_highlight_pane_cp026

0x1451,	// (0x00046224) main_welc_pane_ParamLimits

0x80fc,	// (0x0004cecf) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x80fc,	// (0x0004cecf) main_sp_fs_ctrlbar_pane_g3

0x8116,	// (0x0004cee9) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x8116,	// (0x0004cee9) main_sp_fs_ctrlbar_pane_g4

0x814a,	// (0x0004cf1d) toolbar2_fixed_button_pane_cp01

0x8155,	// (0x0004cf28) toolbar2_fixed_button_pane_cp02

0x8162,	// (0x0004cf35) toolbar2_fixed_button_pane_cp03

0x8ff5,	// (0x0004ddc8) list_welc_entry_pane_ParamLimits

0x8ff5,	// (0x0004ddc8) list_welc_entry_pane

0x9071,	// (0x0004de44) main_welc_pane_g3_ParamLimits

0x9071,	// (0x0004de44) main_welc_pane_g3

0x90c1,	// (0x0004de94) main_welc_pane_t2_ParamLimits

0x90c1,	// (0x0004de94) main_welc_pane_t2

0x90dc,	// (0x0004deaf) main_welc_pane_t3_ParamLimits

0x90dc,	// (0x0004deaf) main_welc_pane_t3

0x0005,

0xfde6,	// (0x00054bb9) main_welc_pane_t_ParamLimits

0xfde6,	// (0x00054bb9) main_welc_pane_t

0x920c,	// (0x0004dfdf) welc_button_pane_ParamLimits

0x920c,	// (0x0004dfdf) welc_button_pane

0x9286,	// (0x0004e059) welc_service_logo_pane_ParamLimits

0x9286,	// (0x0004e059) welc_service_logo_pane

0x9337,	// (0x0004e10a) list_single_welc_entry_pane_ParamLimits

0x9337,	// (0x0004e10a) list_single_welc_entry_pane

0x9348,	// (0x0004e11b) list_single_welc_entry_pane_g1

0x9350,	// (0x0004e123) list_single_welc_entry_pane_t1

0x935e,	// (0x0004e131) list_single_welc_entry_pane_t2

0x0001,

0xfdf8,	// (0x00054bcb) list_single_welc_entry_pane_t

0x128d,	// (0x00046060) bg_button_pane_cp035

0x936c,	// (0x0004e13f) welc_button_pane_t1

0xef49,	// (0x00053d1c) welc_service_logo_pane_g1

0xef52,	// (0x00053d25) welc_service_logo_pane_g2

0x0001,

0x095b,	// (0x0004572e) welc_service_logo_pane_g

0x128d,	// (0x00046060) main_int_radio_pane

0xdf13,	// (0x00052ce6) list_single_fs_dyc_pane_g1

0x11af,	// (0x00045f82) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x11af,	// (0x00045f82) list_double_large_graphic_phob2_pane_g3

0x11bb,	// (0x00045f8e) list_double_large_graphic_phob2_pane_g4_ParamLimits

0x11bb,	// (0x00045f8e) list_double_large_graphic_phob2_pane_g4

0x937a,	// (0x0004e14d) main_int_radio1_pane_ParamLimits

0x937a,	// (0x0004e14d) main_int_radio1_pane

0xef5b,	// (0x00053d2e) find_pane_cp02

0x9397,	// (0x0004e16a) input_focus_pane_cp12_ParamLimits

0x9397,	// (0x0004e16a) input_focus_pane_cp12

0x93a7,	// (0x0004e17a) input_focus_pane_cp13_ParamLimits

0x93a7,	// (0x0004e17a) input_focus_pane_cp13

0x93bb,	// (0x0004e18e) input_focus_pane_cp14_ParamLimits

0x93bb,	// (0x0004e18e) input_focus_pane_cp14

0xef64,	// (0x00053d37) int_radio1_listscroll_pane

0x93cf,	// (0x0004e1a2) main_int_radio1_pane_g1_ParamLimits

0x93cf,	// (0x0004e1a2) main_int_radio1_pane_g1

0x93e7,	// (0x0004e1ba) main_int_radio1_pane_t1_ParamLimits

0x93e7,	// (0x0004e1ba) main_int_radio1_pane_t1

0x9402,	// (0x0004e1d5) main_int_radio1_pane_t2_ParamLimits

0x9402,	// (0x0004e1d5) main_int_radio1_pane_t2

0x941d,	// (0x0004e1f0) main_int_radio1_pane_t3_ParamLimits

0x941d,	// (0x0004e1f0) main_int_radio1_pane_t3

0x9438,	// (0x0004e20b) main_int_radio1_pane_t4_ParamLimits

0x9438,	// (0x0004e20b) main_int_radio1_pane_t4

0xef6e,	// (0x00053d41) main_int_radio1_pane_t5_ParamLimits

0xef6e,	// (0x00053d41) main_int_radio1_pane_t5

0x944a,	// (0x0004e21d) main_int_radio1_pane_t6_ParamLimits

0x944a,	// (0x0004e21d) main_int_radio1_pane_t6

0x945f,	// (0x0004e232) main_int_radio1_pane_t7_ParamLimits

0x945f,	// (0x0004e232) main_int_radio1_pane_t7

0x9474,	// (0x0004e247) main_int_radio1_pane_t8_ParamLimits

0x9474,	// (0x0004e247) main_int_radio1_pane_t8

0x9493,	// (0x0004e266) main_int_radio1_pane_t9_ParamLimits

0x9493,	// (0x0004e266) main_int_radio1_pane_t9

0x94a5,	// (0x0004e278) main_int_radio1_pane_t10_ParamLimits

0x94a5,	// (0x0004e278) main_int_radio1_pane_t10

0x94cb,	// (0x0004e29e) main_int_radio1_pane_t11_ParamLimits

0x94cb,	// (0x0004e29e) main_int_radio1_pane_t11

0x94f1,	// (0x0004e2c4) main_int_radio1_pane_t12_ParamLimits

0x94f1,	// (0x0004e2c4) main_int_radio1_pane_t12

0x000b,

0xfdfd,	// (0x00054bd0) main_int_radio1_pane_t_ParamLimits

0xfdfd,	// (0x00054bd0) main_int_radio1_pane_t

0xef80,	// (0x00053d53) int_radio_list_pane

0xe93d,	// (0x00053710) scroll_pane_cp037

0xef88,	// (0x00053d5b) list_double_large_graphic_int_radio_pane_ParamLimits

0xef88,	// (0x00053d5b) list_double_large_graphic_int_radio_pane

0xefa1,	// (0x00053d74) list_double_large_graphic_int_radio_pane_g1

0xd3e3,	// (0x000521b6) list_double_large_graphic_int_radio_pane_t1

0xd3f1,	// (0x000521c4) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfe16,	// (0x00054be9) list_double_large_graphic_int_radio_pane_t

0x128d,	// (0x00046060) list_highlight_pane_cp027

0xeefe,	// (0x00053cd1) main_button_pane_4

0x9084,	// (0x0004de57) main_welc_pane_g4_ParamLimits

0x9084,	// (0x0004de57) main_welc_pane_g4

0x90f5,	// (0x0004dec8) main_welc_pane_t4_ParamLimits

0x90f5,	// (0x0004dec8) main_welc_pane_t4

0x910c,	// (0x0004dedf) main_welc_pane_t5_ParamLimits

0x910c,	// (0x0004dedf) main_welc_pane_t5

0x9149,	// (0x0004df1c) main_welc_pane_t6_ParamLimits

0x9149,	// (0x0004df1c) main_welc_pane_t6

0x9223,	// (0x0004dff6) welc_button_pane_2_ParamLimits

0x9223,	// (0x0004dff6) welc_button_pane_2

0x923f,	// (0x0004e012) welc_button_pane_3_ParamLimits

0x923f,	// (0x0004e012) welc_button_pane_3

0xef06,	// (0x00053cd9) welc_button_pane_4

0x925e,	// (0x0004e031) welc_button_pane_5_ParamLimits

0x925e,	// (0x0004e031) welc_button_pane_5

0x12bb,	// (0x0004608e) main_popup_welc_pane

0xefc2,	// (0x00053d95) main_welc_sk_g3

0xefcc,	// (0x00053d9f) main_welc_sk_g4

0xefd6,	// (0x00053da9) main_welc_sk_t3

0xefe6,	// (0x00053db9) main_welc_sk_t4

0xeff6,	// (0x00053dc9) popup_welc_pane_t4

0xf004,	// (0x00053dd7) popup_welc_pane_t5

0xf012,	// (0x00053de5) popup_welc_pane_t6

0x128d,	// (0x00046060) main_acti_pane

0x128d,	// (0x00046060) main_sso_pane

0x9513,	// (0x0004e2e6) sso_body_pane_ParamLimits

0x9513,	// (0x0004e2e6) sso_body_pane

0x9527,	// (0x0004e2fa) sso_logo_pane_ParamLimits

0x9527,	// (0x0004e2fa) sso_logo_pane

0x9560,	// (0x0004e333) sso_sk_pane_ParamLimits

0x9560,	// (0x0004e333) sso_sk_pane

0x9572,	// (0x0004e345) main_sso_logo_pane_g1

0x957d,	// (0x0004e350) sso_sk_pane_t1_ParamLimits

0x957d,	// (0x0004e350) sso_sk_pane_t1

0x9597,	// (0x0004e36a) sso_sk_pane_t2_ParamLimits

0x9597,	// (0x0004e36a) sso_sk_pane_t2

0x0001,

0xfe1b,	// (0x00054bee) sso_sk_pane_t_ParamLimits

0xfe1b,	// (0x00054bee) sso_sk_pane_t

0x95ad,	// (0x0004e380) aid_sso_gap

0x95b6,	// (0x0004e389) aid_sso_txt1

0x95c0,	// (0x0004e393) aid_sso_txt2

0x95ca,	// (0x0004e39d) aid_sso_txt3

0x0002,

0xfe20,	// (0x00054bf3) aid_sso_txt

0x95d4,	// (0x0004e3a7) aid_sso_widget

0x9632,	// (0x0004e405) sso_btn_pane_ParamLimits

0x9632,	// (0x0004e405) sso_btn_pane

0x96b6,	// (0x0004e489) sso_option_pane_ParamLimits

0x96b6,	// (0x0004e489) sso_option_pane

0x976c,	// (0x0004e53f) sso_query_pane_ParamLimits

0x976c,	// (0x0004e53f) sso_query_pane

0x97c2,	// (0x0004e595) sso_query_pane_cp01_ParamLimits

0x97c2,	// (0x0004e595) sso_query_pane_cp01

0x981c,	// (0x0004e5ef) sso_t_hdr_pane_ParamLimits

0x981c,	// (0x0004e5ef) sso_t_hdr_pane

0x9846,	// (0x0004e619) sso_t_nml_pane_ParamLimits

0x9846,	// (0x0004e619) sso_t_nml_pane

0x989c,	// (0x0004e66f) sso_t_sub_pane

0x9534,	// (0x0004e307) sso_popup_window_ParamLimits

0x9534,	// (0x0004e307) sso_popup_window

0x95de,	// (0x0004e3b1) sso_apps_pane_ParamLimits

0x95de,	// (0x0004e3b1) sso_apps_pane

0x9608,	// (0x0004e3db) sso_body_pane_g1

0x9612,	// (0x0004e3e5) sso_body_pane_t1

0x9622,	// (0x0004e3f5) sso_body_pane_t2

0x0001,

0xfe27,	// (0x00054bfa) sso_body_pane_t

0x967e,	// (0x0004e451) sso_btn_pane_cp01_ParamLimits

0x967e,	// (0x0004e451) sso_btn_pane_cp01

0x9740,	// (0x0004e513) sso_prog_pane_ParamLimits

0x9740,	// (0x0004e513) sso_prog_pane

0x98b1,	// (0x0004e684) sso_t_hdr_pane_t1_ParamLimits

0x98b1,	// (0x0004e684) sso_t_hdr_pane_t1

0x98c4,	// (0x0004e697) input_focus_pane_cp10_ParamLimits

0x98c4,	// (0x0004e697) input_focus_pane_cp10

0x98d8,	// (0x0004e6ab) sso_query_pane_t1_ParamLimits

0x98d8,	// (0x0004e6ab) sso_query_pane_t1

0x98eb,	// (0x0004e6be) sso_query_pane_t2_ParamLimits

0x98eb,	// (0x0004e6be) sso_query_pane_t2

0x9904,	// (0x0004e6d7) sso_query_pane_t3_ParamLimits

0x9904,	// (0x0004e6d7) sso_query_pane_t3

0x992e,	// (0x0004e701) sso_query_pane_t4_ParamLimits

0x992e,	// (0x0004e701) sso_query_pane_t4

0x0003,

0xfe2c,	// (0x00054bff) sso_query_pane_t_ParamLimits

0xfe2c,	// (0x00054bff) sso_query_pane_t

0xefb9,	// (0x00053d8c) bg_button_pane_cp22

0xefaa,	// (0x00053d7d) sso_btn_pane_t1

0x9952,	// (0x0004e725) sso_t_nml_pane_t1_ParamLimits

0x9952,	// (0x0004e725) sso_t_nml_pane_t1

0x996d,	// (0x0004e740) sso_option_row_pane_ParamLimits

0x996d,	// (0x0004e740) sso_option_row_pane

0x997a,	// (0x0004e74d) sso_t_sub_pane_t1_ParamLimits

0x997a,	// (0x0004e74d) sso_t_sub_pane_t1

0x1451,	// (0x00046224) bg_popup_window_pane_cp11_ParamLimits

0x1451,	// (0x00046224) bg_popup_window_pane_cp11

0x9997,	// (0x0004e76a) popup_sk_window_cp01_ParamLimits

0x9997,	// (0x0004e76a) popup_sk_window_cp01

0x99a4,	// (0x0004e777) sso_popup_body_pane_ParamLimits

0x99a4,	// (0x0004e777) sso_popup_body_pane

0x99b1,	// (0x0004e784) scroll_pane_cp21_ParamLimits

0x99b1,	// (0x0004e784) scroll_pane_cp21

0x99be,	// (0x0004e791) sso_popup_body_t_pane_ParamLimits

0x99be,	// (0x0004e791) sso_popup_body_t_pane

0x99cb,	// (0x0004e79e) sso_popup_body_t_hdr_pane_ParamLimits

0x99cb,	// (0x0004e79e) sso_popup_body_t_hdr_pane

0x99dd,	// (0x0004e7b0) sso_popup_body_t_nml_pane_ParamLimits

0x99dd,	// (0x0004e7b0) sso_popup_body_t_nml_pane

0x9a04,	// (0x0004e7d7) sso_popup_body_t_sub_pane_ParamLimits

0x9a04,	// (0x0004e7d7) sso_popup_body_t_sub_pane

0x9a27,	// (0x0004e7fa) sso_popup_body_t_hdr_pane_t1

0x9a37,	// (0x0004e80a) sso_popup_body_t_nml_pane_t1_ParamLimits

0x9a37,	// (0x0004e80a) sso_popup_body_t_nml_pane_t1

0x9a70,	// (0x0004e843) sso_popup_body_t_sub_pane_t1_ParamLimits

0x9a70,	// (0x0004e843) sso_popup_body_t_sub_pane_t1

0x1cd1,	// (0x00046aa4) sso_prog_pane_g1

0x9a95,	// (0x0004e868) sso_apps_pane_comp1_ParamLimits

0x9a95,	// (0x0004e868) sso_apps_pane_comp1

0x9aaf,	// (0x0004e882) sso_apps_pane_comp1_g1

0x9ab7,	// (0x0004e88a) sso_apps_pane_comp1_t1

0x9ad3,	// (0x0004e8a6) sso_option_row_pane_g1

0x9adb,	// (0x0004e8ae) sso_option_row_pane_t1

0xe668,	// (0x0005343b) list_cmail_pane_ParamLimits

0x128d,	// (0x00046060) main_call7_pane

0x8fe2,	// (0x0004ddb5) bg_welc_area_ParamLimits

0x8fe2,	// (0x0004ddb5) bg_welc_area

0x9187,	// (0x0004df5a) sso_t_hdr_pane_a_t1_ParamLimits

0x9187,	// (0x0004df5a) sso_t_hdr_pane_a_t1

0x91a2,	// (0x0004df75) sso_t_nml_pane_a_t1_ParamLimits

0x91a2,	// (0x0004df75) sso_t_nml_pane_a_t1

0x91d1,	// (0x0004dfa4) sso_t_sub_pane_a_t1_ParamLimits

0x91d1,	// (0x0004dfa4) sso_t_sub_pane_a_t1

0x9274,	// (0x0004e047) welc_button_pane_cp01_ParamLimits

0x9274,	// (0x0004e047) welc_button_pane_cp01

0xefaa,	// (0x00053d7d) sso_btn_pane_t1_copy1

0xefb9,	// (0x00053d8c) welc_button_pane_2_comp1

0xf020,	// (0x00053df3) sso_t_hdr_pane_p_t1

0xf030,	// (0x00053e03) sso_t_nml_pane_p_t1

0x9503,	// (0x0004e2d6) sso_t_sub_pane_p_t1

0x128d,	// (0x00046060) main_att_pane

0x128d,	// (0x00046060) main_vod_pane

0x989c,	// (0x0004e66f) sso_t_sub_pane_ParamLimits

0x9ac5,	// (0x0004e898) input_focus_pane_cp10_t1

0x9adb,	// (0x0004e8ae) sso_option_row_pane_t1_ParamLimits

0x9af4,	// (0x0004e8c7) main_att_body_pane_ParamLimits

0x9af4,	// (0x0004e8c7) main_att_body_pane

0x9b0a,	// (0x0004e8dd) att_btn_emg_pane_ParamLimits

0x9b0a,	// (0x0004e8dd) att_btn_emg_pane

0x9b29,	// (0x0004e8fc) att_btn_pane_ParamLimits

0x9b29,	// (0x0004e8fc) att_btn_pane

0x9b9a,	// (0x0004e96d) att_btn_pane_cp01_ParamLimits

0x9b9a,	// (0x0004e96d) att_btn_pane_cp01

0x9bba,	// (0x0004e98d) att_li_srv_pane_ParamLimits

0x9bba,	// (0x0004e98d) att_li_srv_pane

0x9bd7,	// (0x0004e9aa) att_opt_pane_ParamLimits

0x9bd7,	// (0x0004e9aa) att_opt_pane

0x9c21,	// (0x0004e9f4) att_query_pane_ParamLimits

0x9c21,	// (0x0004e9f4) att_query_pane

0x9c9a,	// (0x0004ea6d) att_query_pane_cp01_ParamLimits

0x9c9a,	// (0x0004ea6d) att_query_pane_cp01

0x9ce6,	// (0x0004eab9) att_t_hdr_pane_ParamLimits

0x9ce6,	// (0x0004eab9) att_t_hdr_pane

0x9d52,	// (0x0004eb25) att_t_nml_pane_ParamLimits

0x9d52,	// (0x0004eb25) att_t_nml_pane

0x9dc2,	// (0x0004eb95) att_t_nml_pane_cp01_ParamLimits

0x9dc2,	// (0x0004eb95) att_t_nml_pane_cp01

0x9dee,	// (0x0004ebc1) att_t_nmlb_pane_ParamLimits

0x9dee,	// (0x0004ebc1) att_t_nmlb_pane

0x9e5b,	// (0x0004ec2e) att_term_pane_ParamLimits

0x9e5b,	// (0x0004ec2e) att_term_pane

0x9ea5,	// (0x0004ec78) main_att_body_pane_g1_ParamLimits

0x9ea5,	// (0x0004ec78) main_att_body_pane_g1

0x9ed1,	// (0x0004eca4) att_t_hdr_pane_t1_ParamLimits

0x9ed1,	// (0x0004eca4) att_t_hdr_pane_t1

0x9eea,	// (0x0004ecbd) att_t_nml_pane_t1_ParamLimits

0x9eea,	// (0x0004ecbd) att_t_nml_pane_t1

0x9f0f,	// (0x0004ece2) att_btn_pane_t1

0xefb9,	// (0x00053d8c) bg_button_pane_cp23

0x9f1f,	// (0x0004ecf2) att_li_srv_row_pane_ParamLimits

0x9f1f,	// (0x0004ecf2) att_li_srv_row_pane

0x9f2f,	// (0x0004ed02) att_t_nmlb_pane_t1_ParamLimits

0x9f2f,	// (0x0004ed02) att_t_nmlb_pane_t1

0x9f4d,	// (0x0004ed20) att_query_pane_t1

0x9f5c,	// (0x0004ed2f) att_query_pane_t2

0x9f6b,	// (0x0004ed3e) att_query_pane_t3

0x0002,

0xfe35,	// (0x00054c08) att_query_pane_t

0x9f7a,	// (0x0004ed4d) input_focus_pane_cp11

0x9f83,	// (0x0004ed56) att_term_pane_t1_ParamLimits

0x9f83,	// (0x0004ed56) att_term_pane_t1

0x128d,	// (0x00046060) att_opt_row_pane

0x9ad3,	// (0x0004e8a6) att_opt_row_pane_g1

0x9fa0,	// (0x0004ed73) att_opt_row_pane_t1_ParamLimits

0x9fa0,	// (0x0004ed73) att_opt_row_pane_t1

0x9fb9,	// (0x0004ed8c) att_li_srv_row_pane_g1

0x9fc1,	// (0x0004ed94) att_li_srv_row_pane_t1_ParamLimits

0x9fc1,	// (0x0004ed94) att_li_srv_row_pane_t1

0x9fd6,	// (0x0004eda9) att_li_srv_row_pane_t2_ParamLimits

0x9fd6,	// (0x0004eda9) att_li_srv_row_pane_t2

0x0001,

0xfe3c,	// (0x00054c0f) att_li_srv_row_pane_t_ParamLimits

0xfe3c,	// (0x00054c0f) att_li_srv_row_pane_t

0x9feb,	// (0x0004edbe) att_btn_close_pane_g1

0x128d,	// (0x00046060) bg_button_pane_cp24

0x9ff3,	// (0x0004edc6) main_vod_body_pane_ParamLimits

0x9ff3,	// (0x0004edc6) main_vod_body_pane

0xa007,	// (0x0004edda) main_vod_body_pane_g1_ParamLimits

0xa007,	// (0x0004edda) main_vod_body_pane_g1

0xa03b,	// (0x0004ee0e) scroll_pane_cp24_ParamLimits

0xa03b,	// (0x0004ee0e) scroll_pane_cp24

0xa089,	// (0x0004ee5c) vod_btn_pane_ParamLimits

0xa089,	// (0x0004ee5c) vod_btn_pane

0xa0cb,	// (0x0004ee9e) vod_det_pane_ParamLimits

0xa0cb,	// (0x0004ee9e) vod_det_pane

0xa0fb,	// (0x0004eece) vod_logo_g1_ParamLimits

0xa0fb,	// (0x0004eece) vod_logo_g1

0xa139,	// (0x0004ef0c) vod_opt_pane_ParamLimits

0xa139,	// (0x0004ef0c) vod_opt_pane

0xa16c,	// (0x0004ef3f) vod_opt_pane_cp01_ParamLimits

0xa16c,	// (0x0004ef3f) vod_opt_pane_cp01

0xa198,	// (0x0004ef6b) vod_query_pane_ParamLimits

0xa198,	// (0x0004ef6b) vod_query_pane

0xa1c3,	// (0x0004ef96) vod_query_pane_cp01_ParamLimits

0xa1c3,	// (0x0004ef96) vod_query_pane_cp01

0xa1cf,	// (0x0004efa2) vod_t_nml_pane_ParamLimits

0xa1cf,	// (0x0004efa2) vod_t_nml_pane

0xa278,	// (0x0004f04b) vod_t_nml_pane_cp01_ParamLimits

0xa278,	// (0x0004f04b) vod_t_nml_pane_cp01

0xa2b4,	// (0x0004f087) vod_t_sub_pane_ParamLimits

0xa2b4,	// (0x0004f087) vod_t_sub_pane

0xa2e5,	// (0x0004f0b8) vod_t_sub_pane_cp01_ParamLimits

0xa2e5,	// (0x0004f0b8) vod_t_sub_pane_cp01

0x9f7a,	// (0x0004ed4d) vod_query_field_pane

0xa311,	// (0x0004f0e4) vod_query_pane_t1

0xefb9,	// (0x00053d8c) bg_button_pane_cp25

0xefaa,	// (0x00053d7d) sso_btn_pane_t1_copy2

0xa320,	// (0x0004f0f3) vod_t_nml_pane_t1_ParamLimits

0xa320,	// (0x0004f0f3) vod_t_nml_pane_t1

0xa34f,	// (0x0004f122) vod_opt_row_pane_ParamLimits

0xa34f,	// (0x0004f122) vod_opt_row_pane

0xa361,	// (0x0004f134) vod_t_sub_pane_t1_ParamLimits

0xa361,	// (0x0004f134) vod_t_sub_pane_t1

0xa37a,	// (0x0004f14d) vod_det_cell_pane_ParamLimits

0xa37a,	// (0x0004f14d) vod_det_cell_pane

0x128d,	// (0x00046060) input_focus_pane_cp15

0xa38b,	// (0x0004f15e) vod_query_field_pane_t1

0xa399,	// (0x0004f16c) vod_opt_row_pane_g1_ParamLimits

0xa399,	// (0x0004f16c) vod_opt_row_pane_g1

0xa3a5,	// (0x0004f178) vod_opt_row_pane_t1_ParamLimits

0xa3a5,	// (0x0004f178) vod_opt_row_pane_t1

0xa3c4,	// (0x0004f197) vod_det_cell_field_pane

0xa3cd,	// (0x0004f1a0) vod_det_cell_pane_g1

0xa3d5,	// (0x0004f1a8) vod_det_cell_pane_t1

0x128d,	// (0x00046060) input_focus_pane_cp16

0xa3e4,	// (0x0004f1b7) vod_det_cell_field_pane_t1

0x896f,	// (0x0004d742) call7_btn_grp_pane_ParamLimits

0x896f,	// (0x0004d742) call7_btn_grp_pane

0xa3f2,	// (0x0004f1c5) call7_bubble_pane_ParamLimits

0xa3f2,	// (0x0004f1c5) call7_bubble_pane

0xa409,	// (0x0004f1dc) cell_call7_btn_pane_ParamLimits

0xa409,	// (0x0004f1dc) cell_call7_btn_pane

0xa41d,	// (0x0004f1f0) call7_pane_g1_ParamLimits

0xa41d,	// (0x0004f1f0) call7_pane_g1

0xa42c,	// (0x0004f1ff) call7_windows_conf_pane_ParamLimits

0xa42c,	// (0x0004f1ff) call7_windows_conf_pane

0xa446,	// (0x0004f219) popup_call7_1st_window_ParamLimits

0xa446,	// (0x0004f219) popup_call7_1st_window

0xa457,	// (0x0004f22a) popup_call7_2nd_window_ParamLimits

0xa457,	// (0x0004f22a) popup_call7_2nd_window

0xa468,	// (0x0004f23b) popup_call7_3rd_window_ParamLimits

0xa468,	// (0x0004f23b) popup_call7_3rd_window

0x128d,	// (0x00046060) bg_button_pane_cp26

0xed2e,	// (0x00053b01) cell_call7_btn_pane_g1

0xed37,	// (0x00053b0a) cell_call7_btn_pane_t1

0x128d,	// (0x00046060) bg_popup_window_pane_cp12

0xa479,	// (0x0004f24c) popup_call7_1st_window_g1

0xa481,	// (0x0004f254) popup_call7_1st_window_g2

0xa489,	// (0x0004f25c) popup_call7_1st_window_g3

0x0002,

0xfe41,	// (0x00054c14) popup_call7_1st_window_g

0xa491,	// (0x0004f264) popup_call7_1st_window_t1

0xa4a0,	// (0x0004f273) popup_call7_1st_window_t2

0xa4ae,	// (0x0004f281) popup_call7_1st_window_t3

0x0002,

0xfe48,	// (0x00054c1b) popup_call7_1st_window_t

0x128d,	// (0x00046060) bg_popup_window_pane_cp13

0xa4bc,	// (0x0004f28f) popup_call7_2nd_window_g1

0xa4c4,	// (0x0004f297) popup_call7_2nd_window_g2

0xa4cc,	// (0x0004f29f) popup_call7_2nd_window_g3

0x0002,

0xfe4f,	// (0x00054c22) popup_call7_2nd_window_g

0xa4d4,	// (0x0004f2a7) popup_call7_2nd_window_t1

0x128d,	// (0x00046060) bg_popup_window_pane_cp14

0xa4e3,	// (0x0004f2b6) call7_list_conf_pane

0xa4eb,	// (0x0004f2be) call7_list_conf_row_pane_ParamLimits

0xa4eb,	// (0x0004f2be) call7_list_conf_row_pane

0xa4fe,	// (0x0004f2d1) call7_list_conf_row_pane_g1

0xa506,	// (0x0004f2d9) call7_list_conf_row_pane_g2

0x0001,

0xfe56,	// (0x00054c29) call7_list_conf_row_pane_g

0xa50e,	// (0x0004f2e1) call7_list_conf_row_pane_t1

0x128d,	// (0x00046060) list_highlight_pane_cp22

0x970c,	// (0x0004e4df) sso_option_pane_cp01_ParamLimits

0x970c,	// (0x0004e4df) sso_option_pane_cp01

0x1b84,	// (0x00046957) msg_header_pane_ParamLimits

0xac46,	// (0x0004fa19) bg_button_pane_cp01_ParamLimits

0xac5a,	// (0x0004fa2d) input_focus_pane_cp07_ParamLimits

0x81b3,	// (0x0004cf86) popup_email_progress_window

0x1cd1,	// (0x00046aa4) popup_email_progress_window_g1

0xa51c,	// (0x0004f2ef) popup_email_progress_window_g2

0x0001,

0xfe5b,	// (0x00054c2e) popup_email_progress_window_g

0xa524,	// (0x0004f2f7) popup_email_progress_window_t1
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

} // end of namespace AknLayoutScalable_Elaf_pnl4_apps_nhd4_lsc_tch_Small

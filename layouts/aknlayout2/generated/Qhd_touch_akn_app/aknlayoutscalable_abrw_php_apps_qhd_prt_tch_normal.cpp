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

#include "aknlayoutscalable_abrw_php_apps_qhd_prt_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_php_apps_qhd_prt_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0001e023 };

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
0x26d3,	// (0x000206f6) Screen

0x26df,	// (0x00020702) application_window

0x26eb,	// (0x0002070e) area_bottom_pane_ParamLimits

0x26eb,	// (0x0002070e) area_bottom_pane

0x0eb8,	// (0x0001eedb) area_top_pane_ParamLimits

0x0eb8,	// (0x0001eedb) area_top_pane

0x0f1c,	// (0x0001ef3f) call_video_uplink_pane_ParamLimits

0x0f1c,	// (0x0001ef3f) call_video_uplink_pane

0x0f5b,	// (0x0001ef7e) main_pane_ParamLimits

0x0f5b,	// (0x0001ef7e) main_pane

0xc3ef,	// (0x0002a412) context_pane

0x559b,	// (0x000235be) navi_pane

0x55c1,	// (0x000235e4) popup_cale_events_window_ParamLimits

0x55c1,	// (0x000235e4) popup_cale_events_window

0xc402,	// (0x0002a425) popup_mup_playback_window

0x55d9,	// (0x000235fc) signal_pane

0xa337,	// (0x0002835a) main_browser_pane

0xa4fc,	// (0x0002851f) main_burst_pane

0x151b,	// (0x0001f53e) main_calc_pane

0xc3d5,	// (0x0002a3f8) main_cale_day_pane

0x2b04,	// (0x00020b27) main_cale_month_pane

0xc3d5,	// (0x0002a3f8) main_cale_week_pane

0xa4fc,	// (0x0002851f) main_call_pane

0xa009,	// (0x0002802c) main_call_poc_pane

0xa4fc,	// (0x0002851f) main_camera_pane

0xa4fc,	// (0x0002851f) main_chi_dic_pane

0xacd3,	// (0x00028cf6) main_clock_pane

0xa009,	// (0x0002802c) main_fmradio_pane

0xa4fc,	// (0x0002851f) main_graph_messa_pane

0xa009,	// (0x0002802c) main_help_pane

0xa337,	// (0x0002835a) main_im_pane

0xa264,	// (0x00028287) main_image_pane_ParamLimits

0xa264,	// (0x00028287) main_image_pane

0xa009,	// (0x0002802c) main_location2_pane

0xa4fc,	// (0x0002851f) main_location_pane

0xa264,	// (0x00028287) main_messa_pane

0xa009,	// (0x0002802c) main_mp2_pane

0xa4fc,	// (0x0002851f) main_mp_pane

0xa009,	// (0x0002802c) main_msg_pane

0xa009,	// (0x0002802c) main_mup_eq_pane

0xa009,	// (0x0002802c) main_mup_pane

0xa337,	// (0x0002835a) main_notes_pane

0xa009,	// (0x0002802c) main_pec_pane

0xa009,	// (0x0002802c) main_phob_pane

0xa009,	// (0x0002802c) main_pinb_pane

0xa009,	// (0x0002802c) main_postcard_pane

0xa009,	// (0x0002802c) main_qdial_pane

0xa4fc,	// (0x0002851f) main_skin_pane

0xa009,	// (0x0002802c) main_smil2_pane

0xa4fc,	// (0x0002851f) main_smil_pane

0xa4fc,	// (0x0002851f) main_video_pane

0xa4fc,	// (0x0002851f) main_video_tele_pane

0xa264,	// (0x00028287) main_viewer_pane_ParamLimits

0xa264,	// (0x00028287) main_viewer_pane

0xa4fc,	// (0x0002851f) main_vorec_pane

0x1567,	// (0x0001f58a) popup_blid_sat_info_window_ParamLimits

0x1567,	// (0x0001f58a) popup_blid_sat_info_window

0x1587,	// (0x0001f5aa) popup_dyc_status_message_window_ParamLimits

0x1587,	// (0x0001f5aa) popup_dyc_status_message_window

0x1597,	// (0x0001f5ba) popup_grid_large_graphic_window_ParamLimits

0x1597,	// (0x0001f5ba) popup_grid_large_graphic_window

0x1628,	// (0x0001f64b) popup_loc_request_window_ParamLimits

0x1628,	// (0x0001f64b) popup_loc_request_window

0x1675,	// (0x0001f698) popup_wml_address_window_ParamLimits

0x1675,	// (0x0001f698) popup_wml_address_window

0x547d,	// (0x000234a0) call_muted_g1

0x513f,	// (0x00023162) popup_call_audio_conf_window_ParamLimits

0x513f,	// (0x00023162) popup_call_audio_conf_window

0x548d,	// (0x000234b0) popup_call_audio_first_window_ParamLimits

0x548d,	// (0x000234b0) popup_call_audio_first_window

0x54cd,	// (0x000234f0) popup_call_audio_in_window_ParamLimits

0x54cd,	// (0x000234f0) popup_call_audio_in_window

0x54f1,	// (0x00023514) popup_call_audio_out_window_ParamLimits

0x54f1,	// (0x00023514) popup_call_audio_out_window

0x5513,	// (0x00023536) popup_call_audio_second_window_ParamLimits

0x5513,	// (0x00023536) popup_call_audio_second_window

0x5543,	// (0x00023566) popup_call_audio_wait_window_ParamLimits

0x5543,	// (0x00023566) popup_call_audio_wait_window

0x5564,	// (0x00023587) popup_number_entry_window_ParamLimits

0x5564,	// (0x00023587) popup_number_entry_window

0x9bf6,	// (0x00027c19) bg_popup_call_pane_cp05_ParamLimits

0x9bf6,	// (0x00027c19) bg_popup_call_pane_cp05

0x9c16,	// (0x00027c39) popup_number_entry_window_t1

0x9c29,	// (0x00027c4c) popup_number_entry_window_t2

0x9c3b,	// (0x00027c5e) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x0002d0ed) popup_number_entry_window_t

0x9c4d,	// (0x00027c70) text_title_cp2

0x9c60,	// (0x00027c83) bg_popup_call_pane_cp_ParamLimits

0x9c60,	// (0x00027c83) bg_popup_call_pane_cp

0x9c6e,	// (0x00027c91) call_thumbnail_pane

0x9c76,	// (0x00027c99) popup_call_audio_in_window_g1_ParamLimits

0x9c76,	// (0x00027c99) popup_call_audio_in_window_g1

0x9c82,	// (0x00027ca5) popup_call_audio_in_window_g2_ParamLimits

0x9c82,	// (0x00027ca5) popup_call_audio_in_window_g2

0x9c8e,	// (0x00027cb1) popup_call_audio_in_window_g3_ParamLimits

0x9c8e,	// (0x00027cb1) popup_call_audio_in_window_g3

0x0002,

0xf0d3,	// (0x0002d0f6) popup_call_audio_in_window_g_ParamLimits

0xf0d3,	// (0x0002d0f6) popup_call_audio_in_window_g

0x9c9a,	// (0x00027cbd) popup_call_audio_in_window_t1_ParamLimits

0x9c9a,	// (0x00027cbd) popup_call_audio_in_window_t1

0x9cb6,	// (0x00027cd9) popup_call_audio_in_window_t2_ParamLimits

0x9cb6,	// (0x00027cd9) popup_call_audio_in_window_t2

0x9cd2,	// (0x00027cf5) popup_call_audio_in_window_t3_ParamLimits

0x9cd2,	// (0x00027cf5) popup_call_audio_in_window_t3

0x0002,

0xf0da,	// (0x0002d0fd) popup_call_audio_in_window_t_ParamLimits

0xf0da,	// (0x0002d0fd) popup_call_audio_in_window_t

0x9c60,	// (0x00027c83) bg_popup_call_pane_cp01_ParamLimits

0x9c60,	// (0x00027c83) bg_popup_call_pane_cp01

0x9c6e,	// (0x00027c91) call_thumbnail_pane_cp02

0x9ce5,	// (0x00027d08) call_type_pane_cp022

0x9ced,	// (0x00027d10) popup_call_audio_out_window_g1_ParamLimits

0x9ced,	// (0x00027d10) popup_call_audio_out_window_g1

0x9cff,	// (0x00027d22) popup_call_audio_out_window_g2_ParamLimits

0x9cff,	// (0x00027d22) popup_call_audio_out_window_g2

0x9d0b,	// (0x00027d2e) popup_call_audio_out_window_g3_ParamLimits

0x9d0b,	// (0x00027d2e) popup_call_audio_out_window_g3

0x0002,

0xf0e1,	// (0x0002d104) popup_call_audio_out_window_g_ParamLimits

0xf0e1,	// (0x0002d104) popup_call_audio_out_window_g

0x9d1d,	// (0x00027d40) popup_call_audio_out_window_t1_ParamLimits

0x9d1d,	// (0x00027d40) popup_call_audio_out_window_t1

0x9d35,	// (0x00027d58) popup_call_audio_out_window_t2_ParamLimits

0x9d35,	// (0x00027d58) popup_call_audio_out_window_t2

0x0001,

0xf0e8,	// (0x0002d10b) popup_call_audio_out_window_t_ParamLimits

0xf0e8,	// (0x0002d10b) popup_call_audio_out_window_t

0x9d4a,	// (0x00027d6d) bg_popup_call_pane_ParamLimits

0x9d4a,	// (0x00027d6d) bg_popup_call_pane

0x2765,	// (0x00020788) call_thumbnail_pane_cp_ParamLimits

0x2765,	// (0x00020788) call_thumbnail_pane_cp

0x9dce,	// (0x00027df1) call_type_pane_cp01_ParamLimits

0x9dce,	// (0x00027df1) call_type_pane_cp01

0x9e12,	// (0x00027e35) popup_call_audio_first_window_g1_ParamLimits

0x9e12,	// (0x00027e35) popup_call_audio_first_window_g1

0x9e5e,	// (0x00027e81) popup_call_audio_first_window_g2_ParamLimits

0x9e5e,	// (0x00027e81) popup_call_audio_first_window_g2

0x0001,

0xf0ed,	// (0x0002d110) popup_call_audio_first_window_g_ParamLimits

0xf0ed,	// (0x0002d110) popup_call_audio_first_window_g

0x9ea2,	// (0x00027ec5) popup_call_audio_first_window_t1_ParamLimits

0x9ea2,	// (0x00027ec5) popup_call_audio_first_window_t1

0x9f4e,	// (0x00027f71) popup_call_audio_first_window_t4_ParamLimits

0x9f4e,	// (0x00027f71) popup_call_audio_first_window_t4

0x9fda,	// (0x00027ffd) popup_call_audio_first_window_t5_ParamLimits

0x9fda,	// (0x00027ffd) popup_call_audio_first_window_t5

0x0002,

0xf0f2,	// (0x0002d115) popup_call_audio_first_window_t_ParamLimits

0xf0f2,	// (0x0002d115) popup_call_audio_first_window_t

0xa009,	// (0x0002802c) bg_popup_call_pane_cp02

0xa013,	// (0x00028036) call_type_pane_cp023

0xa01b,	// (0x0002803e) popup_call_audio_wait_window_g1

0xa023,	// (0x00028046) popup_call_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0002d11c) popup_call_audio_wait_window_g

0xa02b,	// (0x0002804e) popup_call_audio_wait_window_t3

0xa039,	// (0x0002805c) bg_popup_call_pane_cp03_ParamLimits

0xa039,	// (0x0002805c) bg_popup_call_pane_cp03

0xa099,	// (0x000280bc) call_thumbnail_pane_cp011_ParamLimits

0xa099,	// (0x000280bc) call_thumbnail_pane_cp011

0xa0a5,	// (0x000280c8) call_type_pane_cp034_ParamLimits

0xa0a5,	// (0x000280c8) call_type_pane_cp034

0xa0e1,	// (0x00028104) popup_call_audio_second_window_g1_ParamLimits

0xa0e1,	// (0x00028104) popup_call_audio_second_window_g1

0xa11d,	// (0x00028140) popup_call_audio_second_window_g2_ParamLimits

0xa11d,	// (0x00028140) popup_call_audio_second_window_g2

0x0001,

0xf0fe,	// (0x0002d121) popup_call_audio_second_window_g_ParamLimits

0xf0fe,	// (0x0002d121) popup_call_audio_second_window_g

0xa159,	// (0x0002817c) popup_call_audio_second_window_t1_ParamLimits

0xa159,	// (0x0002817c) popup_call_audio_second_window_t1

0xa1da,	// (0x000281fd) popup_call_audio_second_window_t2_ParamLimits

0xa1da,	// (0x000281fd) popup_call_audio_second_window_t2

0xa210,	// (0x00028233) popup_call_audio_second_window_t3_ParamLimits

0xa210,	// (0x00028233) popup_call_audio_second_window_t3

0x0002,

0xf103,	// (0x0002d126) popup_call_audio_second_window_t_ParamLimits

0xf103,	// (0x0002d126) popup_call_audio_second_window_t

0xa009,	// (0x0002802c) bg_popup_call_pane_cp04

0xa246,	// (0x00028269) list_conf_pane

0xa24e,	// (0x00028271) popup_call_audio_conf_window_t1

0xa25c,	// (0x0002827f) call_thumbnail_pane_g1

0xa264,	// (0x00028287) bg_pinb_pane_ParamLimits

0xa264,	// (0x00028287) bg_pinb_pane

0xa272,	// (0x00028295) find_pinb_pane

0xa27b,	// (0x0002829e) listscroll_pinb_pane_ParamLimits

0xa27b,	// (0x0002829e) listscroll_pinb_pane

0xa28a,	// (0x000282ad) pinb_bg_pane_g1

0x2789,	// (0x000207ac) pinb_bg_pane_g2

0x2795,	// (0x000207b8) pinb_bg_pane_g3

0x27a1,	// (0x000207c4) pinb_bg_pane_g4

0x27ad,	// (0x000207d0) pinb_bg_pane_g5

0x27b9,	// (0x000207dc) pinb_bg_pane_g6

0x27c4,	// (0x000207e7) pinb_bg_pane_g7

0x27cf,	// (0x000207f2) pinb_bg_pane_g8

0x27da,	// (0x000207fd) pinb_bg_pane_g9

0x27e4,	// (0x00020807) pinb_bg_pane_g10

0x0009,

0xf10a,	// (0x0002d12d) pinb_bg_pane_g

0x2801,	// (0x00020824) grid_pinb_pane

0x280c,	// (0x0002082f) list_pinb_pane

0x2817,	// (0x0002083a) scroll_pane_cp01_ParamLimits

0x2817,	// (0x0002083a) scroll_pane_cp01

0xa294,	// (0x000282b7) find_pinb_pane_g1_ParamLimits

0xa294,	// (0x000282b7) find_pinb_pane_g1

0xa2ac,	// (0x000282cf) find_pinb_pane_t1

0xa2be,	// (0x000282e1) find_pinb_pane_t2

0x0001,

0xf124,	// (0x0002d147) find_pinb_pane_t

0xa2d3,	// (0x000282f6) input_focus_pane_cp01_ParamLimits

0xa2d3,	// (0x000282f6) input_focus_pane_cp01

0x2829,	// (0x0002084c) cell_pinb_pane_ParamLimits

0x2829,	// (0x0002084c) cell_pinb_pane

0x2851,	// (0x00020874) cell_pinb_pane_g1_ParamLimits

0x2851,	// (0x00020874) cell_pinb_pane_g1

0x2866,	// (0x00020889) cell_pinb_pane_g2_ParamLimits

0x2866,	// (0x00020889) cell_pinb_pane_g2

0xa2df,	// (0x00028302) cell_pinb_pane_g3_ParamLimits

0xa2df,	// (0x00028302) cell_pinb_pane_g3

0x0002,

0xf129,	// (0x0002d14c) cell_pinb_pane_g_ParamLimits

0xf129,	// (0x0002d14c) cell_pinb_pane_g

0xa009,	// (0x0002802c) grid_highlight_pane_cp01

0x2872,	// (0x00020895) list_pinb_item_pane_ParamLimits

0x2872,	// (0x00020895) list_pinb_item_pane

0xa009,	// (0x0002802c) list_highlight_pane_cp02

0x2898,	// (0x000208bb) list_pinb_item_pane_g1_ParamLimits

0x2898,	// (0x000208bb) list_pinb_item_pane_g1

0x28a5,	// (0x000208c8) list_pinb_item_pane_g2_ParamLimits

0x28a5,	// (0x000208c8) list_pinb_item_pane_g2

0x28b1,	// (0x000208d4) list_pinb_item_pane_g3_ParamLimits

0x28b1,	// (0x000208d4) list_pinb_item_pane_g3

0x28c2,	// (0x000208e5) list_pinb_item_pane_g4_ParamLimits

0x28c2,	// (0x000208e5) list_pinb_item_pane_g4

0x0003,

0xf130,	// (0x0002d153) list_pinb_item_pane_g_ParamLimits

0xf130,	// (0x0002d153) list_pinb_item_pane_g

0x28ce,	// (0x000208f1) list_pinb_item_pane_t1_ParamLimits

0x28ce,	// (0x000208f1) list_pinb_item_pane_t1

0x1149,	// (0x0001f16c) calc_display_pane

0x1167,	// (0x0001f18a) calc_paper_pane

0x1183,	// (0x0001f1a6) grid_calc_pane

0xa009,	// (0x0002802c) bg_list_pane_cp01

0x28e5,	// (0x00020908) clock_g1

0x28ed,	// (0x00020910) clock_g2

0x0001,

0xf139,	// (0x0002d15c) clock_g

0x28f7,	// (0x0002091a) clock_t1_ParamLimits

0x28f7,	// (0x0002091a) clock_t1

0x290c,	// (0x0002092f) clock_t2_ParamLimits

0x290c,	// (0x0002092f) clock_t2

0x291e,	// (0x00020941) clock_t3_ParamLimits

0x291e,	// (0x00020941) clock_t3

0x2930,	// (0x00020953) clock_t4_ParamLimits

0x2930,	// (0x00020953) clock_t4

0x2942,	// (0x00020965) clock_t5_ParamLimits

0x2942,	// (0x00020965) clock_t5

0x2957,	// (0x0002097a) clock_t6_ParamLimits

0x2957,	// (0x0002097a) clock_t6

0x2969,	// (0x0002098c) clock_t7_ParamLimits

0x2969,	// (0x0002098c) clock_t7

0x297b,	// (0x0002099e) clock_t8_ParamLimits

0x297b,	// (0x0002099e) clock_t8

0x2991,	// (0x000209b4) clock_t9_ParamLimits

0x2991,	// (0x000209b4) clock_t9

0x0008,

0xf13e,	// (0x0002d161) clock_t_ParamLimits

0xf13e,	// (0x0002d161) clock_t

0xa2eb,	// (0x0002830e) popup_clock_analogue_window_cp02

0xa2eb,	// (0x0002830e) popup_clock_digital_window_cp01

0xa2f3,	// (0x00028316) listscroll_help_pane

0xa009,	// (0x0002802c) phob_pre_status_pane

0xa2fd,	// (0x00028320) grid_qdial_pane

0xa264,	// (0x00028287) listscroll_mce_pane

0xa264,	// (0x00028287) bg_notes_pane

0xa307,	// (0x0002832a) list_notes_pane

0x29a7,	// (0x000209ca) scroll_pane_cp06

0xa315,	// (0x00028338) bg_calc_paper_pane

0x11af,	// (0x0001f1d2) list_calc_pane

0xa337,	// (0x0002835a) bg_calc_display_pane

0x11c9,	// (0x0001f1ec) calc_display_pane_t1

0x11de,	// (0x0001f201) calc_display_pane_t2

0x11f3,	// (0x0001f216) calc_display_pane_t3

0x0002,

0xf151,	// (0x0002d174) calc_display_pane_t

0x1205,	// (0x0001f228) cell_calc_pane_ParamLimits

0x1205,	// (0x0001f228) cell_calc_pane

0xa343,	// (0x00028366) bg_calc_paper_pane_g1

0xa34f,	// (0x00028372) bg_calc_paper_pane_g2

0xa35b,	// (0x0002837e) bg_calc_paper_pane_g3

0xa367,	// (0x0002838a) bg_calc_paper_pane_g4

0xa373,	// (0x00028396) bg_calc_paper_pane_g5

0x29b6,	// (0x000209d9) bg_calc_paper_pane_g6

0x29c7,	// (0x000209ea) bg_calc_paper_pane_g7

0x29d8,	// (0x000209fb) bg_calc_paper_pane_g8

0x0007,

0xf158,	// (0x0002d17b) bg_calc_paper_pane_g

0x29e9,	// (0x00020a0c) calc_bg_paper_pane_g9

0x29fa,	// (0x00020a1d) list_calc_item_pane_ParamLimits

0x29fa,	// (0x00020a1d) list_calc_item_pane

0xa37f,	// (0x000283a2) list_calc_item_pane_g1

0x1232,	// (0x0001f255) list_calc_item_pane_t1_ParamLimits

0x1232,	// (0x0001f255) list_calc_item_pane_t1

0x1244,	// (0x0001f267) list_calc_item_pane_t2_ParamLimits

0x1244,	// (0x0001f267) list_calc_item_pane_t2

0x0001,

0xf169,	// (0x0002d18c) list_calc_item_pane_t_ParamLimits

0xf169,	// (0x0002d18c) list_calc_item_pane_t

0xa38c,	// (0x000283af) cell_calc_pane_g1

0xa396,	// (0x000283b9) grid_highlight_pane_cp02

0x2a29,	// (0x00020a4c) bg_calc_display_pane_g1

0x1274,	// (0x0001f297) bg_calc_display_pane_g2

0xc6f1,	// (0x0002a714) bg_calc_display_pane_g3

0x0002,

0xf173,	// (0x0002d196) bg_calc_display_pane_g

0x127e,	// (0x0001f2a1) cell_qdial_pane_ParamLimits

0x127e,	// (0x0001f2a1) cell_qdial_pane

0x2a32,	// (0x00020a55) cell_qdial_pane_g1_ParamLimits

0x2a32,	// (0x00020a55) cell_qdial_pane_g1

0x2a3f,	// (0x00020a62) cell_qdial_pane_g2_ParamLimits

0x2a3f,	// (0x00020a62) cell_qdial_pane_g2

0xa3b8,	// (0x000283db) cell_qdial_pane_g3_ParamLimits

0xa3b8,	// (0x000283db) cell_qdial_pane_g3

0x0003,

0xf17a,	// (0x0002d19d) cell_qdial_pane_g_ParamLimits

0xf17a,	// (0x0002d19d) cell_qdial_pane_g

0x2a5d,	// (0x00020a80) cell_qdial_pane_t1_ParamLimits

0x2a5d,	// (0x00020a80) cell_qdial_pane_t1

0x2a75,	// (0x00020a98) cell_qdial_pane_t2_ParamLimits

0x2a75,	// (0x00020a98) cell_qdial_pane_t2

0x2a88,	// (0x00020aab) cell_qdial_pane_t3_ParamLimits

0x2a88,	// (0x00020aab) cell_qdial_pane_t3

0x0002,

0xf183,	// (0x0002d1a6) cell_qdial_pane_t_ParamLimits

0xf183,	// (0x0002d1a6) cell_qdial_pane_t

0xa009,	// (0x0002802c) grid_highlight_pane_cp04

0xa3c4,	// (0x000283e7) thumbnail_qdial_pane_ParamLimits

0xa3c4,	// (0x000283e7) thumbnail_qdial_pane

0xa420,	// (0x00028443) list_help_pane

0xa429,	// (0x0002844c) scroll_pane_cp02

0x2a9b,	// (0x00020abe) help_list_pane_t1_ParamLimits

0x2a9b,	// (0x00020abe) help_list_pane_t1

0x1292,	// (0x0001f2b5) bg_notes_pane_g2

0x129a,	// (0x0001f2bd) bg_notes_pane_g3

0x12a2,	// (0x0001f2c5) notes_bg_pane_g1

0x12aa,	// (0x0001f2cd) notes_bg_pane_g4

0x12b2,	// (0x0001f2d5) notes_bg_pane_g5

0x12ba,	// (0x0001f2dd) notes_bg_pane_g6

0x12c2,	// (0x0001f2e5) notes_bg_pane_g7

0x12ca,	// (0x0001f2ed) notes_bg_pane_g8

0x12d2,	// (0x0001f2f5) notes_bg_pane_g9

0x0006,

0xf1a1,	// (0x0002d1c4) notes_bg_pane_g

0x2ace,	// (0x00020af1) list_notes_text_pane_ParamLimits

0x2ace,	// (0x00020af1) list_notes_text_pane

0xa432,	// (0x00028455) list_notes_text_pane_g1

0x2af6,	// (0x00020b19) list_notes_text_pane_t1

0x2b04,	// (0x00020b27) listscroll_cale_week_pane

0x2b29,	// (0x00020b4c) bg_cale_heading_pane

0xa455,	// (0x00028478) bg_cale_pane_cp01

0x2b4b,	// (0x00020b6e) cale_week_corner_pane

0x2b65,	// (0x00020b88) cale_week_day_heading_pane

0x2b87,	// (0x00020baa) cale_week_scroll_pane_g1

0x2ba4,	// (0x00020bc7) cale_week_scroll_pane_g2

0x2bb7,	// (0x00020bda) cale_week_scroll_pane_g3

0x2bca,	// (0x00020bed) cale_week_scroll_pane_g4

0x2bdd,	// (0x00020c00) cale_week_scroll_pane_g5

0x2bf0,	// (0x00020c13) cale_week_scroll_pane_g6

0x2c03,	// (0x00020c26) cale_week_scroll_pane_g7

0x2c16,	// (0x00020c39) cale_week_scroll_pane_g8

0x2c2b,	// (0x00020c4e) cale_week_scroll_pane_g9

0x2c3e,	// (0x00020c61) cale_week_scroll_pane_g10

0x2c51,	// (0x00020c74) cale_week_scroll_pane_g11

0x2c64,	// (0x00020c87) cale_week_scroll_pane_g12

0x2c7b,	// (0x00020c9e) cale_week_scroll_pane_g13

0x2c96,	// (0x00020cb9) cale_week_scroll_pane_g14

0x2cb1,	// (0x00020cd4) cale_week_scroll_pane_g15

0x000f,

0xf1b0,	// (0x0002d1d3) cale_week_scroll_pane_g

0x2ce1,	// (0x00020d04) cale_week_time_pane

0x2cf6,	// (0x00020d19) grid_cale_week_pane

0xa484,	// (0x000284a7) scroll_pane_cp08

0x2d15,	// (0x00020d38) cell_cale_week_pane_ParamLimits

0x2d15,	// (0x00020d38) cell_cale_week_pane

0x2d77,	// (0x00020d9a) cale_week_day_heading_pane_t1

0x2db2,	// (0x00020dd5) cale_week_day_heading_pane_t2

0x2ded,	// (0x00020e10) cale_week_day_heading_pane_t3

0x2e28,	// (0x00020e4b) cale_week_day_heading_pane_t4

0x2e63,	// (0x00020e86) cale_week_day_heading_pane_t5

0x2e9e,	// (0x00020ec1) cale_week_day_heading_pane_t6

0x2ed9,	// (0x00020efc) cale_week_day_heading_pane_t7

0x0006,

0xf1d1,	// (0x0002d1f4) cale_week_day_heading_pane_t

0xa4a1,	// (0x000284c4) bg_cale_side_pane

0x12da,	// (0x0001f2fd) cale_week_time_pane_t1

0x12f4,	// (0x0001f317) cale_week_time_pane_t2

0x130e,	// (0x0001f331) cale_week_time_pane_t3

0x1328,	// (0x0001f34b) cale_week_time_pane_t4

0x1342,	// (0x0001f365) cale_week_time_pane_t5

0x135c,	// (0x0001f37f) cale_week_time_pane_t6

0x137c,	// (0x0001f39f) cale_week_time_pane_t7

0x139e,	// (0x0001f3c1) cale_week_time_pane_t8

0x0007,

0xf1e0,	// (0x0002d203) cale_week_time_pane_t

0x2f14,	// (0x00020f37) cell_cale_week_pane_g2

0x2f38,	// (0x00020f5b) cell_cale_week_pane_g3_ParamLimits

0x2f38,	// (0x00020f5b) cell_cale_week_pane_g3

0xa4af,	// (0x000284d2) grid_highlight_pane_cp07

0xa4b7,	// (0x000284da) listscroll_gms_pane

0xa4c1,	// (0x000284e4) grid_gms_pane

0xa4ca,	// (0x000284ed) listscroll_gms_pane_g1

0xa4d2,	// (0x000284f5) listscroll_gms_pane_g2

0x0001,

0xf1f1,	// (0x0002d214) listscroll_gms_pane_g

0x2f50,	// (0x00020f73) scroll_pane_cp010

0x2f5b,	// (0x00020f7e) cell_gms_pane_ParamLimits

0x2f5b,	// (0x00020f7e) cell_gms_pane

0x2f6e,	// (0x00020f91) cell_gms_pane_g1

0xa4da,	// (0x000284fd) cell_gms_pane_g2

0xa4e2,	// (0x00028505) cell_gms_pane_g3

0xa4eb,	// (0x0002850e) cell_gms_pane_g4

0x0003,

0xf1f6,	// (0x0002d219) cell_gms_pane_g

0xa4f4,	// (0x00028517) grid_highlight_pane_cp09

0x5425,	// (0x00023448) phob_pre_status_pane_g1

0x542d,	// (0x00023450) phob_pre_status_pane_g2

0x5435,	// (0x00023458) phob_pre_status_pane_g3

0x543d,	// (0x00023460) phob_pre_status_pane_g4

0x0004,

0xf5e1,	// (0x0002d604) phob_pre_status_pane_g

0x544d,	// (0x00023470) phob_pre_status_pane_t1

0x545d,	// (0x00023480) phob_pre_status_pane_t2

0x546d,	// (0x00023490) phob_pre_status_pane_t3

0x0002,

0xf5ec,	// (0x0002d60f) phob_pre_status_pane_t

0xa4fc,	// (0x0002851f) bg_list_pane_cp05

0x2f7e,	// (0x00020fa1) grid_vorec_pane

0x2f88,	// (0x00020fab) vorec_t1

0x2f96,	// (0x00020fb9) vorec_t2

0x2fa4,	// (0x00020fc7) vorec_t3

0x2fb2,	// (0x00020fd5) vorec_t4

0x26ad,	// (0x000206d0) vorec_t5

0x26bb,	// (0x000206de) vorec_t6

0x0004,

0xf1ff,	// (0x0002d222) vorec_t

0x26c9,	// (0x000206ec) wait_bar_pane_cp01

0x2fce,	// (0x00020ff1) cell_vorec_pane_ParamLimits

0x2fce,	// (0x00020ff1) cell_vorec_pane

0x13c2,	// (0x0001f3e5) cell_vorec_pane_g1

0xa009,	// (0x0002802c) grid_highlight_pane_cp05

0x2ff1,	// (0x00021014) cams_zoom_pane

0x2ffd,	// (0x00021020) image_vga_pane

0x300c,	// (0x0002102f) main_camera_pane_g1

0x301a,	// (0x0002103d) main_camera_pane_g2

0x3026,	// (0x00021049) main_camera_pane_g3

0x3032,	// (0x00021055) main_camera_pane_g4

0x303e,	// (0x00021061) main_camera_pane_g5

0x304a,	// (0x0002106d) main_camera_pane_g6

0x3056,	// (0x00021079) main_camera_pane_g7

0x0007,

0xf20a,	// (0x0002d22d) main_camera_pane_g

0x3062,	// (0x00021085) main_camera_pane_t1

0x3074,	// (0x00021097) main_camera_pane_t2

0x0001,

0xf21b,	// (0x0002d23e) main_camera_pane_t

0x3095,	// (0x000210b8) cams_zoom_pane_cp_ParamLimits

0x3095,	// (0x000210b8) cams_zoom_pane_cp

0x30b9,	// (0x000210dc) image_cif_pane_ParamLimits

0x30b9,	// (0x000210dc) image_cif_pane

0x30d7,	// (0x000210fa) image_subqcif_pane

0x30df,	// (0x00021102) main_video_pane_g1_ParamLimits

0x30df,	// (0x00021102) main_video_pane_g1

0x30ff,	// (0x00021122) main_video_pane_g2_ParamLimits

0x30ff,	// (0x00021122) main_video_pane_g2

0x312f,	// (0x00021152) main_video_pane_g3_ParamLimits

0x312f,	// (0x00021152) main_video_pane_g3

0x3158,	// (0x0002117b) main_video_pane_g4_ParamLimits

0x3158,	// (0x0002117b) main_video_pane_g4

0x3181,	// (0x000211a4) main_video_pane_g5_ParamLimits

0x3181,	// (0x000211a4) main_video_pane_g5

0xa510,	// (0x00028533) main_video_pane_g6_ParamLimits

0xa510,	// (0x00028533) main_video_pane_g6

0x0006,

0xf220,	// (0x0002d243) main_video_pane_g_ParamLimits

0xf220,	// (0x0002d243) main_video_pane_g

0x31a3,	// (0x000211c6) main_video_pane_t1_ParamLimits

0x31a3,	// (0x000211c6) main_video_pane_t1

0xa52a,	// (0x0002854d) cams_zoom_pane_g1

0xa533,	// (0x00028556) cams_zoom_pane_g2

0xa53c,	// (0x0002855f) cams_zoom_pane_g3

0xa545,	// (0x00028568) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x0002d252) cams_zoom_pane_g

0x31ed,	// (0x00021210) grid_cams_pane

0x31fb,	// (0x0002121e) linegrid_cams_pane

0x3209,	// (0x0002122c) cell_cams_pane_ParamLimits

0x3209,	// (0x0002122c) cell_cams_pane

0xa54e,	// (0x00028571) cams_burst_image_pane

0xa556,	// (0x00028579) cell_cams_pane_g1

0xa009,	// (0x0002802c) grid_highlight_pane_cp03

0xa38c,	// (0x000283af) mp_bg_pane_g1

0xa009,	// (0x0002802c) bg_list_pane_cp03

0xc2fa,	// (0x0002a31d) bg_mp_pane

0xc302,	// (0x0002a325) grid_mp_pane

0xc30a,	// (0x0002a32d) media_player_g1

0xc312,	// (0x0002a335) media_player_t1

0xc320,	// (0x0002a343) media_player_t2

0xc32e,	// (0x0002a351) media_player_t3

0xc33c,	// (0x0002a35f) media_player_t4

0xc34a,	// (0x0002a36d) media_player_t5

0xc358,	// (0x0002a37b) media_player_t6

0xc366,	// (0x0002a389) media_player_t7

0x0006,

0xf5cb,	// (0x0002d5ee) media_player_t

0xc374,	// (0x0002a397) wait_bar_pane_cp02

0xf5b0,	// (0x0002d5d3) main_usb_pane_t

0x541c,	// (0x0002343f) cell_mp_pane

0xa38c,	// (0x000283af) cell_mp_pane_g1

0xa009,	// (0x0002802c) grid_highlight_pane_cp06

0xa55e,	// (0x00028581) grid_skin_colour_pane

0xa566,	// (0x00028589) list_highlight_pane_cp03

0x3330,	// (0x00021353) skin_g1

0xa56e,	// (0x00028591) skin_t1

0xa57d,	// (0x000285a0) skin_t2

0x0001,

0xf264,	// (0x0002d287) skin_t

0x333a,	// (0x0002135d) cell_skin_colour_pane_ParamLimits

0x333a,	// (0x0002135d) cell_skin_colour_pane

0xa58b,	// (0x000285ae) cell_skin_colour_pane_g1

0x33be,	// (0x000213e1) call_video_g1_ParamLimits

0x33be,	// (0x000213e1) call_video_g1

0x33ce,	// (0x000213f1) call_video_g2_ParamLimits

0x33ce,	// (0x000213f1) call_video_g2

0x0001,

0xf269,	// (0x0002d28c) call_video_g_ParamLimits

0xf269,	// (0x0002d28c) call_video_g

0x3428,	// (0x0002144b) call_video_uplink_pane_cp1_ParamLimits

0x3428,	// (0x0002144b) call_video_uplink_pane_cp1

0xa59d,	// (0x000285c0) call_video_uplink_pane_cp2

0x34f4,	// (0x00021517) video_down_crop_pane_ParamLimits

0x34f4,	// (0x00021517) video_down_crop_pane

0x35f2,	// (0x00021615) video_down_pane_ParamLimits

0x35f2,	// (0x00021615) video_down_pane

0xa5a5,	// (0x000285c8) video_down_subqcif_pane_ParamLimits

0xa5a5,	// (0x000285c8) video_down_subqcif_pane

0xa5bd,	// (0x000285e0) video_down_subqcif_pane_cp_ParamLimits

0xa5bd,	// (0x000285e0) video_down_subqcif_pane_cp

0xa5e3,	// (0x00028606) im_reading_pane_ParamLimits

0xa5e3,	// (0x00028606) im_reading_pane

0x3712,	// (0x00021735) im_writing_pane_ParamLimits

0x3712,	// (0x00021735) im_writing_pane

0x3730,	// (0x00021753) im_reading_pane_t1

0xa5fd,	// (0x00028620) list_im_pane

0xa60e,	// (0x00028631) scroll_pane_cp07

0x3784,	// (0x000217a7) im_writing_pane_t1_ParamLimits

0x3784,	// (0x000217a7) im_writing_pane_t1

0xa627,	// (0x0002864a) im_writing_pane_t2_ParamLimits

0xa627,	// (0x0002864a) im_writing_pane_t2

0x0001,

0xf273,	// (0x0002d296) im_writing_pane_t_ParamLimits

0xf273,	// (0x0002d296) im_writing_pane_t

0xa009,	// (0x0002802c) input_focus_pane_cp04

0xa009,	// (0x0002802c) input_focus_pane_cp05

0x3799,	// (0x000217bc) list_im_single_pane_ParamLimits

0x3799,	// (0x000217bc) list_im_single_pane

0x37bd,	// (0x000217e0) list_single_im_pane_t1

0x53e0,	// (0x00023403) blid_accuracy_pane

0x53e8,	// (0x0002340b) blid_compass_pane

0x53f2,	// (0x00023415) main_location_t1

0x5400,	// (0x00023423) main_location_t2

0x540e,	// (0x00023431) main_location_t3

0x0002,

0xf5da,	// (0x0002d5fd) main_location_t

0xa009,	// (0x0002802c) aid_levels_location

0xa38c,	// (0x000283af) blid_accuracy_pane_g1

0xa38c,	// (0x000283af) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x0002d2f8) blid_accuracy_pane_g

0xa66f,	// (0x00028692) wml_content_pane

0xa6ad,	// (0x000286d0) wml_button_pane_ParamLimits

0xa6ad,	// (0x000286d0) wml_button_pane

0x37cc,	// (0x000217ef) wml_list_single_large_pane_ParamLimits

0x37cc,	// (0x000217ef) wml_list_single_large_pane

0x37f6,	// (0x00021819) wml_list_single_medium_pane_ParamLimits

0x37f6,	// (0x00021819) wml_list_single_medium_pane

0x3827,	// (0x0002184a) wml_list_single_small_pane_ParamLimits

0x3827,	// (0x0002184a) wml_list_single_small_pane

0xa6c1,	// (0x000286e4) wml_selection_box_pane_ParamLimits

0xa6c1,	// (0x000286e4) wml_selection_box_pane

0xa6d4,	// (0x000286f7) wml_list_single_pane_t1

0xa6e3,	// (0x00028706) wml_list_single_medium_pane_t1

0xa6f2,	// (0x00028715) wml_list_single_large_pane_t1

0xa701,	// (0x00028724) input_focus_pane_cp02_ParamLimits

0xa701,	// (0x00028724) input_focus_pane_cp02

0xa714,	// (0x00028737) wml_selection_box_pane_g1

0xa71d,	// (0x00028740) wml_selection_box_pane_t1_ParamLimits

0xa71d,	// (0x00028740) wml_selection_box_pane_t1

0xa264,	// (0x00028287) bg_wml_button_pane_ParamLimits

0xa264,	// (0x00028287) bg_wml_button_pane

0xa735,	// (0x00028758) wml_button_pane_g1

0xa73d,	// (0x00028760) wml_button_pane_t1

0xa735,	// (0x00028758) wml_button_bg_pane_g1

0xa74d,	// (0x00028770) wml_button_bg_pane_g2

0xa755,	// (0x00028778) wml_button_bg_pane_g3

0xa75d,	// (0x00028780) wml_button_bg_pane_g4

0xa765,	// (0x00028788) wml_button_bg_pane_g5

0xa76d,	// (0x00028790) wml_button_bg_pane_g6

0xa775,	// (0x00028798) wml_button_bg_pane_g7

0xa77d,	// (0x000287a0) wml_button_bg_pane_g8

0xa785,	// (0x000287a8) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x0002d29b) wml_button_bg_pane_g

0x3861,	// (0x00021884) bg_list_pane_cp02

0xa78d,	// (0x000287b0) mce_header_pane_ParamLimits

0xa78d,	// (0x000287b0) mce_header_pane

0xa7a3,	// (0x000287c6) mce_icon_pane

0xa7a3,	// (0x000287c6) mce_image_pane

0xa7ac,	// (0x000287cf) mce_text_pane_ParamLimits

0xa7ac,	// (0x000287cf) mce_text_pane

0x386b,	// (0x0002188e) scroll_pane_cp03

0xa6a5,	// (0x000286c8) scroll_pane_cp04

0xa7bf,	// (0x000287e2) scroll_pane_cp05_ParamLimits

0xa7bf,	// (0x000287e2) scroll_pane_cp05

0x3875,	// (0x00021898) mce_header_field_pane_ParamLimits

0x3875,	// (0x00021898) mce_header_field_pane

0x3895,	// (0x000218b8) mce_header_field_pane_2_ParamLimits

0x3895,	// (0x000218b8) mce_header_field_pane_2

0x38ab,	// (0x000218ce) mce_header_field_pane_3

0x38b3,	// (0x000218d6) list_single_mce_message_pane_ParamLimits

0x38b3,	// (0x000218d6) list_single_mce_message_pane

0x38de,	// (0x00021901) list_single_mce_smart_pane_ParamLimits

0x38de,	// (0x00021901) list_single_mce_smart_pane

0xa7cb,	// (0x000287ee) input_focus_pane_cp03

0xa7d4,	// (0x000287f7) list_header_data_pane

0x3914,	// (0x00021937) mce_header_field_pane_t1

0x3922,	// (0x00021945) list_single_mce_header_pane_ParamLimits

0x3922,	// (0x00021945) list_single_mce_header_pane

0xa7dc,	// (0x000287ff) list_single_mce_header_pane_t1

0xa7eb,	// (0x0002880e) list_single_mce_message_pane_g1

0xa7f3,	// (0x00028816) list_single_mce_message_pane_t1

0x3974,	// (0x00021997) bg_cale_heading_pane_cp01_ParamLimits

0x3974,	// (0x00021997) bg_cale_heading_pane_cp01

0xa801,	// (0x00028824) bg_cale_pane_cp02_ParamLimits

0xa801,	// (0x00028824) bg_cale_pane_cp02

0x39b7,	// (0x000219da) cale_month_corner_pane

0x39d1,	// (0x000219f4) cale_month_day_heading_pane_ParamLimits

0x39d1,	// (0x000219f4) cale_month_day_heading_pane

0x3a2c,	// (0x00021a4f) cale_month_pane_g1_ParamLimits

0x3a2c,	// (0x00021a4f) cale_month_pane_g1

0x3a64,	// (0x00021a87) cale_month_pane_g2_ParamLimits

0x3a64,	// (0x00021a87) cale_month_pane_g2

0x3a8d,	// (0x00021ab0) cale_month_pane_g3_ParamLimits

0x3a8d,	// (0x00021ab0) cale_month_pane_g3

0x3ad9,	// (0x00021afc) cale_month_pane_g4_ParamLimits

0x3ad9,	// (0x00021afc) cale_month_pane_g4

0x3b25,	// (0x00021b48) cale_month_pane_g5_ParamLimits

0x3b25,	// (0x00021b48) cale_month_pane_g5

0x3b71,	// (0x00021b94) cale_month_pane_g6_ParamLimits

0x3b71,	// (0x00021b94) cale_month_pane_g6

0x3bbd,	// (0x00021be0) cale_month_pane_g7_ParamLimits

0x3bbd,	// (0x00021be0) cale_month_pane_g7

0x3c21,	// (0x00021c44) cale_month_pane_g8_ParamLimits

0x3c21,	// (0x00021c44) cale_month_pane_g8

0x3c85,	// (0x00021ca8) cale_month_pane_g9_ParamLimits

0x3c85,	// (0x00021ca8) cale_month_pane_g9

0x3ce3,	// (0x00021d06) cale_month_pane_g10_ParamLimits

0x3ce3,	// (0x00021d06) cale_month_pane_g10

0x3d3f,	// (0x00021d62) cale_month_pane_g11_ParamLimits

0x3d3f,	// (0x00021d62) cale_month_pane_g11

0x3d93,	// (0x00021db6) cale_month_pane_g12_ParamLimits

0x3d93,	// (0x00021db6) cale_month_pane_g12

0x3de9,	// (0x00021e0c) cale_month_pane_g13_ParamLimits

0x3de9,	// (0x00021e0c) cale_month_pane_g13

0x000c,

0xf28b,	// (0x0002d2ae) cale_month_pane_g_ParamLimits

0xf28b,	// (0x0002d2ae) cale_month_pane_g

0x3e3f,	// (0x00021e62) cale_month_week_pane

0x3e54,	// (0x00021e77) grid_cale_month_pane_ParamLimits

0x3e54,	// (0x00021e77) grid_cale_month_pane

0x3ea2,	// (0x00021ec5) cale_month_day_heading_pane_t1

0x3f28,	// (0x00021f4b) cale_month_day_heading_pane_t2

0x3fb9,	// (0x00021fdc) cale_month_day_heading_pane_t3

0x404a,	// (0x0002206d) cale_month_day_heading_pane_t4

0x40db,	// (0x000220fe) cale_month_day_heading_pane_t5

0x416c,	// (0x0002218f) cale_month_day_heading_pane_t6

0x41fd,	// (0x00022220) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x0002d2c9) cale_month_day_heading_pane_t

0xa4a1,	// (0x000284c4) bg_cale_side_pane_cp01

0x42a6,	// (0x000222c9) cale_month_week_pane_t1

0x42bf,	// (0x000222e2) cale_month_week_pane_t2

0x42d8,	// (0x000222fb) cale_month_week_pane_t3

0x42f1,	// (0x00022314) cale_month_week_pane_t4

0x430a,	// (0x0002232d) cale_month_week_pane_t5

0x432b,	// (0x0002234e) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x0002d2d8) cale_month_week_pane_t

0x434c,	// (0x0002236f) cell_cale_month_pane_ParamLimits

0x434c,	// (0x0002236f) cell_cale_month_pane

0x13cc,	// (0x0001f3ef) cell_cale_month_pane_g1

0x13d8,	// (0x0001f3fb) cell_cale_month_pane_t1_ParamLimits

0x13d8,	// (0x0001f3fb) cell_cale_month_pane_t1

0xa4af,	// (0x000284d2) grid_highlight_pane_cp08

0xa38c,	// (0x000283af) main_smil_g1

0x4498,	// (0x000224bb) smil_status_pane

0xa840,	// (0x00028863) smil_text_pane

0xc21a,	// (0x0002a23d) bg_popup_call3_rect_pane_g8

0xc222,	// (0x0002a245) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x0002d591) bg_popup_call3_rect_pane_g

0xc469,	// (0x0002a48c) smil_status_volume_pane_g1

0xa84a,	// (0x0002886d) smil_status_pane_t1

0x16aa,	// (0x0001f6cd) volume_smil_pane

0xa861,	// (0x00028884) list_smil_text_pane

0x44ab,	// (0x000224ce) scroll_pane_cp011

0x44b6,	// (0x000224d9) smil_text_list_pane_t1_ParamLimits

0x44b6,	// (0x000224d9) smil_text_list_pane_t1

0x1404,	// (0x0001f427) aid_volume_smil_ParamLimits

0x1404,	// (0x0001f427) aid_volume_smil

0xa38c,	// (0x000283af) smil_volume_pane_g1

0xa38c,	// (0x000283af) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x0002d2f8) smil_volume_pane_g

0x2b04,	// (0x00020b27) listscroll_cale_day_pane

0xa86b,	// (0x0002888e) bg_cale_pane

0xa883,	// (0x000288a6) list_cale_pane

0xa8a6,	// (0x000288c9) scroll_pane_cp09

0xa8b7,	// (0x000288da) cale_bg_pane_g1

0xa8bf,	// (0x000288e2) cale_bg_pane_g2

0xa8c7,	// (0x000288ea) cale_bg_pane_g3

0xa8cf,	// (0x000288f2) cale_bg_pane_g4

0xa8d7,	// (0x000288fa) cale_bg_pane_g5

0xa8df,	// (0x00028902) cale_bg_pane_g6

0xa8e7,	// (0x0002890a) cale_bg_pane_g7

0xa8ef,	// (0x00028912) cale_bg_pane_g8

0xa8f7,	// (0x0002891a) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x0002d2fd) cale_bg_pane_g

0x4536,	// (0x00022559) list_cale_time_pane_ParamLimits

0x4536,	// (0x00022559) list_cale_time_pane

0xa8ff,	// (0x00028922) list_cale_time_pane_g1_ParamLimits

0xa8ff,	// (0x00028922) list_cale_time_pane_g1

0xa90b,	// (0x0002892e) list_cale_time_pane_g2_ParamLimits

0xa90b,	// (0x0002892e) list_cale_time_pane_g2

0x4558,	// (0x0002257b) list_cale_time_pane_g3_ParamLimits

0x4558,	// (0x0002257b) list_cale_time_pane_g3

0x4566,	// (0x00022589) list_cale_time_pane_g4_ParamLimits

0x4566,	// (0x00022589) list_cale_time_pane_g4

0x4574,	// (0x00022597) list_cale_time_pane_g5_ParamLimits

0x4574,	// (0x00022597) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x0002d310) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x0002d310) list_cale_time_pane_g

0xa925,	// (0x00028948) list_cale_time_pane_t1_ParamLimits

0xa925,	// (0x00028948) list_cale_time_pane_t1

0xa94d,	// (0x00028970) list_cale_time_pane_t2_ParamLimits

0xa94d,	// (0x00028970) list_cale_time_pane_t2

0x48a3,	// (0x000228c6) aid_blid_cardinal_pane

0x48e5,	// (0x00022908) compass_pane_t4

0xa975,	// (0x00028998) list_cale_time_pane_t4_ParamLimits

0xa975,	// (0x00028998) list_cale_time_pane_t4

0x48f3,	// (0x00022916) compass_pane_t5

0x4903,	// (0x00022926) compass_pane_t6

0x4911,	// (0x00022934) compass_pane_t7

0xae18,	// (0x00028e3b) navi_pane_cc_t1

0xb00f,	// (0x00029032) aid_phob_thumbnail_center_pane

0x4ee6,	// (0x00022f09) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x0002d31d) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x0002d31d) list_cale_time_pane_t

0x9c60,	// (0x00027c83) bg_popup_window_pane_cp02_ParamLimits

0x9c60,	// (0x00027c83) bg_popup_window_pane_cp02

0xa99d,	// (0x000289c0) heading_pane_cp01_ParamLimits

0xa99d,	// (0x000289c0) heading_pane_cp01

0xa9a9,	// (0x000289cc) loc_req_pane_ParamLimits

0xa9a9,	// (0x000289cc) loc_req_pane

0xa9b9,	// (0x000289dc) loc_type_pane_ParamLimits

0xa9b9,	// (0x000289dc) loc_type_pane

0xa9cb,	// (0x000289ee) loc_type_pane_t1_ParamLimits

0xa9cb,	// (0x000289ee) loc_type_pane_t1

0xa9dd,	// (0x00028a00) loc_type_pane_t2_ParamLimits

0xa9dd,	// (0x00028a00) loc_type_pane_t2

0xa9ef,	// (0x00028a12) loc_type_pane_t3_ParamLimits

0xa9ef,	// (0x00028a12) loc_type_pane_t3

0x0002,

0xf301,	// (0x0002d324) loc_type_pane_t_ParamLimits

0xf301,	// (0x0002d324) loc_type_pane_t

0xaa01,	// (0x00028a24) list_loc_req_pane

0xaa0b,	// (0x00028a2e) scroll_pane_cp012

0x4582,	// (0x000225a5) list_single_loc_request_popup_menu_pane_ParamLimits

0x4582,	// (0x000225a5) list_single_loc_request_popup_menu_pane

0xaa16,	// (0x00028a39) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xaa16,	// (0x00028a39) list_single_loc_request_popup_menu_pane_g1

0xaa22,	// (0x00028a45) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xaa22,	// (0x00028a45) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x0002d32b) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x0002d32b) list_single_loc_request_popup_menu_pane_g

0xaa2e,	// (0x00028a51) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xaa2e,	// (0x00028a51) list_single_loc_request_popup_menu_pane_t1

0x4594,	// (0x000225b7) bg_popup_window_pane_cp03_ParamLimits

0x4594,	// (0x000225b7) bg_popup_window_pane_cp03

0x45a2,	// (0x000225c5) heading_loc_req_pane_ParamLimits

0x45a2,	// (0x000225c5) heading_loc_req_pane

0x45ae,	// (0x000225d1) popup_dyc_status_message_window_g1_ParamLimits

0x45ae,	// (0x000225d1) popup_dyc_status_message_window_g1

0x45ba,	// (0x000225dd) popup_dyc_status_message_window_t1_ParamLimits

0x45ba,	// (0x000225dd) popup_dyc_status_message_window_t1

0x45cc,	// (0x000225ef) popup_dyc_status_message_window_t2_ParamLimits

0x45cc,	// (0x000225ef) popup_dyc_status_message_window_t2

0x45de,	// (0x00022601) popup_dyc_status_message_window_t3_ParamLimits

0x45de,	// (0x00022601) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x0002d330) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x0002d330) popup_dyc_status_message_window_t

0xa009,	// (0x0002802c) bg_heading_pane_cp01

0xaa44,	// (0x00028a67) heading_loc_req_pane_g1

0xaa4c,	// (0x00028a6f) heading_loc_req_pane_g2

0xaa54,	// (0x00028a77) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x0002d337) heading_loc_req_pane_g

0xaa5c,	// (0x00028a7f) heading_loc_req_pane_t1

0xaa6b,	// (0x00028a8e) bg_popup_sub_pane_cp01_ParamLimits

0xaa6b,	// (0x00028a8e) bg_popup_sub_pane_cp01

0xaa79,	// (0x00028a9c) popup_cale_events_window_g1_ParamLimits

0xaa79,	// (0x00028a9c) popup_cale_events_window_g1

0xaa99,	// (0x00028abc) popup_cale_events_window_g2_ParamLimits

0xaa99,	// (0x00028abc) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x0002d36b) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x0002d36b) popup_cale_events_window_g

0xaab9,	// (0x00028adc) popup_cale_events_window_t1_ParamLimits

0xaab9,	// (0x00028adc) popup_cale_events_window_t1

0xaacb,	// (0x00028aee) popup_cale_events_window_t2_ParamLimits

0xaacb,	// (0x00028aee) popup_cale_events_window_t2

0xab09,	// (0x00028b2c) popup_cale_events_window_t3_ParamLimits

0xab09,	// (0x00028b2c) popup_cale_events_window_t3

0xab43,	// (0x00028b66) popup_cale_events_window_t4_ParamLimits

0xab43,	// (0x00028b66) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x0002d370) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x0002d370) popup_cale_events_window_t

0x46e3,	// (0x00022706) call_type_pane

0xaff8,	// (0x0002901b) popup_call_status_window_g1

0x46ef,	// (0x00022712) popup_call_status_window_g2

0x46fb,	// (0x0002271e) popup_call_status_window_g3

0x0002,

0xf356,	// (0x0002d379) popup_call_status_window_g

0xab79,	// (0x00028b9c) call_type_pane_g1

0xab82,	// (0x00028ba5) call_type_pane_g2

0x0001,

0xf35d,	// (0x0002d380) call_type_pane_g

0xa009,	// (0x0002802c) bg_popup_sub_pane_cp02

0xab8b,	// (0x00028bae) listscroll_popup_wml_pane

0xab93,	// (0x00028bb6) list_wml_pane

0xab9d,	// (0x00028bc0) scroll_pane_cp013

0xaba8,	// (0x00028bcb) list_single_graphic_popup_wml_pane_ParamLimits

0xaba8,	// (0x00028bcb) list_single_graphic_popup_wml_pane

0xa38c,	// (0x000283af) list_single_graphic_popup_wml_pane_g1

0xabbc,	// (0x00028bdf) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x0002d385) list_single_graphic_popup_wml_pane_g

0xabc4,	// (0x00028be7) list_single_graphic_popup_wml_pane_t1

0xabda,	// (0x00028bfd) aid_call_pane

0xa25c,	// (0x0002827f) popup_clock_analogue_window_g1

0xa25c,	// (0x0002827f) popup_clock_analogue_window_g2

0x1426,	// (0x0001f449) popup_clock_analogue_window_g3

0x1426,	// (0x0001f449) popup_clock_analogue_window_g4

0xa38c,	// (0x000283af) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x0002d38a) popup_clock_analogue_window_g

0x142e,	// (0x0001f451) popup_clock_analogue_window_t1

0x143c,	// (0x0001f45f) clock_digital_number_pane_ParamLimits

0x143c,	// (0x0001f45f) clock_digital_number_pane

0x1448,	// (0x0001f46b) clock_digital_number_pane_cp02_ParamLimits

0x1448,	// (0x0001f46b) clock_digital_number_pane_cp02

0x1454,	// (0x0001f477) clock_digital_number_pane_cp03_ParamLimits

0x1454,	// (0x0001f477) clock_digital_number_pane_cp03

0x1460,	// (0x0001f483) clock_digital_number_pane_cp04_ParamLimits

0x1460,	// (0x0001f483) clock_digital_number_pane_cp04

0x1470,	// (0x0001f493) clock_digital_separator_pane_ParamLimits

0x1470,	// (0x0001f493) clock_digital_separator_pane

0x147c,	// (0x0001f49f) popup_clock_digital_window_t1

0xa38c,	// (0x000283af) clock_digital_number_pane_g1

0xa38c,	// (0x000283af) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x0002d2f8) clock_digital_number_pane_g

0xa38c,	// (0x000283af) clock_digital_separator_pane_g1

0xa38c,	// (0x000283af) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x0002d2f8) clock_digital_separator_pane_g

0xa009,	// (0x0002802c) bg_popup_window_pane_cp04

0xabe2,	// (0x00028c05) heading_pane_cp03

0xabea,	// (0x00028c0d) listscroll_popup_gms_pane

0xabf2,	// (0x00028c15) grid_large_graphic_popup_pane

0xabfc,	// (0x00028c1f) listscroll_popup_gms_pane_g1

0xac04,	// (0x00028c27) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x0002d395) listscroll_popup_gms_pane_g

0xa6a5,	// (0x000286c8) scroll_pane_cp014

0x4707,	// (0x0002272a) cell_large_graphic_popup_pane_ParamLimits

0x4707,	// (0x0002272a) cell_large_graphic_popup_pane

0x471f,	// (0x00022742) cell_large_graphic_popup_pane_g1_ParamLimits

0x471f,	// (0x00022742) cell_large_graphic_popup_pane_g1

0xac0c,	// (0x00028c2f) cell_large_graphic_popup_pane_g2_ParamLimits

0xac0c,	// (0x00028c2f) cell_large_graphic_popup_pane_g2

0xac18,	// (0x00028c3b) cell_large_graphic_popup_pane_g3_ParamLimits

0xac18,	// (0x00028c3b) cell_large_graphic_popup_pane_g3

0xac25,	// (0x00028c48) cell_large_graphic_popup_pane_g4_ParamLimits

0xac25,	// (0x00028c48) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x0002d39a) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x0002d39a) cell_large_graphic_popup_pane_g

0xac35,	// (0x00028c58) grid_highlight_pane_cp010

0xa38c,	// (0x000283af) bg_popup_call_pane_g1

0xac3f,	// (0x00028c62) list_single_graphic_popup_conf_pane_ParamLimits

0xac3f,	// (0x00028c62) list_single_graphic_popup_conf_pane

0xac52,	// (0x00028c75) list_highlight_pane_cp01

0xac5b,	// (0x00028c7e) list_single_graphic_popup_conf_pane_g1

0xac63,	// (0x00028c86) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x0002d3a3) list_single_graphic_popup_conf_pane_g

0xac6b,	// (0x00028c8e) list_single_graphic_popup_conf_pane_t1

0xac79,	// (0x00028c9c) linegrid_cams_pane_g1

0x472b,	// (0x0002274e) linegrid_cams_pane_g2

0xa4e2,	// (0x00028505) linegrid_cams_pane_g3

0xac82,	// (0x00028ca5) linegrid_cams_pane_g4

0x4734,	// (0x00022757) linegrid_cams_pane_g5

0x473d,	// (0x00022760) linegrid_cams_pane_g6

0xa4eb,	// (0x0002850e) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x0002d3a8) linegrid_cams_pane_g

0xac8b,	// (0x00028cae) popup_clock_analogue_window

0xac8b,	// (0x00028cae) popup_clock_digital_window

0xa009,	// (0x0002802c) popup_phob_thumbnail_window

0xa38c,	// (0x000283af) call_video_uplink_pane_g1

0xac94,	// (0x00028cb7) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x0002d3b7) call_video_uplink_pane_g

0xac9c,	// (0x00028cbf) video_uplink_pane

0xaca4,	// (0x00028cc7) mce_image_pane_g1

0x4746,	// (0x00022769) mce_image_pane_g2

0x4750,	// (0x00022773) mce_image_pane_g3

0x4758,	// (0x0002277b) mce_image_pane_g4

0x4760,	// (0x00022783) mce_image_pane_g5

0x0004,

0xf399,	// (0x0002d3bc) mce_image_pane_g

0xacae,	// (0x00028cd1) control_top_pane_stacon_cp01_ParamLimits

0xacae,	// (0x00028cd1) control_top_pane_stacon_cp01

0xacc2,	// (0x00028ce5) uni_indicator_pane_stacon_cp01_ParamLimits

0xacc2,	// (0x00028ce5) uni_indicator_pane_stacon_cp01

0xacd3,	// (0x00028cf6) bg_popup_sub_pane_cp03

0xacdd,	// (0x00028d00) chi_dic_find_pane

0x4768,	// (0x0002278b) listscroll_chi_dic_pane

0xace5,	// (0x00028d08) main_pane_chidic_g1

0xaced,	// (0x00028d10) chi_dic_find_pane_t1

0xacfb,	// (0x00028d1e) find_chidic_pane

0xad04,	// (0x00028d27) chi_dic_list_pane_ParamLimits

0xad04,	// (0x00028d27) chi_dic_list_pane

0xad15,	// (0x00028d38) scroll_pane_cp020

0xad1d,	// (0x00028d40) find_chidic_pane_t1

0xa009,	// (0x0002802c) input_focus_pane_cp06

0x477c,	// (0x0002279f) list_chi_dic_pane_ParamLimits

0x477c,	// (0x0002279f) list_chi_dic_pane

0x4796,	// (0x000227b9) list_chi_dic_pane_t1_ParamLimits

0x4796,	// (0x000227b9) list_chi_dic_pane_t1

0xa009,	// (0x0002802c) list_highlight_pane_cp020

0xad2c,	// (0x00028d4f) bg_cale_heading_pane_g1

0x47a9,	// (0x000227cc) bg_cale_heading_pane_g2

0x47b1,	// (0x000227d4) bg_cale_heading_pane_g3

0x47b9,	// (0x000227dc) bg_cale_heading_pane_g4

0x47c3,	// (0x000227e6) bg_cale_heading_pane_g5

0x47cd,	// (0x000227f0) bg_cale_heading_pane_g6

0x47d5,	// (0x000227f8) bg_cale_heading_pane_g7

0x47dd,	// (0x00022800) bg_cale_heading_pane_g8

0x47e7,	// (0x0002280a) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x0002d3c7) bg_cale_heading_pane_g

0xad2c,	// (0x00028d4f) bg_cale_side_pane_g1

0x47f1,	// (0x00022814) bg_cale_side_pane_g2

0x47fb,	// (0x0002281e) bg_cale_side_pane_g3

0x4805,	// (0x00022828) bg_cale_side_pane_g4

0x480f,	// (0x00022832) bg_cale_side_pane_g5

0x4819,	// (0x0002283c) bg_cale_side_pane_g6

0x4823,	// (0x00022846) bg_cale_side_pane_g7

0x482d,	// (0x00022850) bg_cale_side_pane_g8

0x4835,	// (0x00022858) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x0002d3da) bg_cale_side_pane_g

0x483d,	// (0x00022860) popup_call_status_window_ParamLimits

0x483d,	// (0x00022860) popup_call_status_window

0xad34,	// (0x00028d57) stacon_top_pane

0xad3c,	// (0x00028d5f) status_pane_ParamLimits

0xad3c,	// (0x00028d5f) status_pane

0xad51,	// (0x00028d74) status_small_pane

0xad59,	// (0x00028d7c) control_pane

0xa009,	// (0x0002802c) stacon_bottom_pane

0xad61,	// (0x00028d84) list_single_mce_smart_pane_t1_ParamLimits

0xad61,	// (0x00028d84) list_single_mce_smart_pane_t1

0xad74,	// (0x00028d97) list_single_mce_smart_pane_t2_ParamLimits

0xad74,	// (0x00028d97) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x0002d3ed) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x0002d3ed) list_single_mce_smart_pane_t

0x4849,	// (0x0002286c) compass_pane

0x4855,	// (0x00022878) main_location2_pane_t1

0x4869,	// (0x0002288c) main_location2_pane_t2

0x487d,	// (0x000228a0) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x0002d3f2) main_location2_pane_t

0xad93,	// (0x00028db6) compass_pane_g1_ParamLimits

0xad93,	// (0x00028db6) compass_pane_g1

0x48c7,	// (0x000228ea) compass_pane_t1

0x48d6,	// (0x000228f9) compass_pane_t2

0x0005,

0xf3d8,	// (0x0002d3fb) compass_pane_t

0x4921,	// (0x00022944) text_secondary_cp61

0xae0f,	// (0x00028e32) navi_pane_cams_g5

0xae8b,	// (0x00028eae) navi_pane_im_t1

0xae99,	// (0x00028ebc) navi_pane_mp_g1_ParamLimits

0xae99,	// (0x00028ebc) navi_pane_mp_g1

0xaead,	// (0x00028ed0) navi_pane_mp_g2_ParamLimits

0xaead,	// (0x00028ed0) navi_pane_mp_g2

0xaeb9,	// (0x00028edc) navi_pane_mp_g3_ParamLimits

0xaeb9,	// (0x00028edc) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x0002d40f) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x0002d40f) navi_pane_mp_g

0xaec5,	// (0x00028ee8) navi_pane_mp_t1

0xaed3,	// (0x00028ef6) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x0002d416) navi_pane_mp_t

0xaf3e,	// (0x00028f61) navi_pane_vt_g1

0xaec5,	// (0x00028ee8) navi_pane_vt_t1

0xaf46,	// (0x00028f69) navi_slider_pane

0xa4fc,	// (0x0002851f) zooming_pane

0xaf56,	// (0x00028f79) navi_slider_pane_g1

0x1499,	// (0x0001f4bc) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x0002d41d) navi_slider_pane_g

0xaf7a,	// (0x00028f9d) aid_levels_zoom

0xaf82,	// (0x00028fa5) zooming_pane_g1

0xaf8a,	// (0x00028fad) zooming_pane_g2

0xaf8a,	// (0x00028fad) zooming_pane_g3

0x0002,

0xf409,	// (0x0002d42c) zooming_pane_g

0xaf92,	// (0x00028fb5) level_10_zoom

0xaf9b,	// (0x00028fbe) level_11_zoom

0xafa4,	// (0x00028fc7) level_1_zoom

0xafad,	// (0x00028fd0) level_2_zoom

0xafb6,	// (0x00028fd9) level_3_zoom

0xafbf,	// (0x00028fe2) level_4_zoom

0xafc8,	// (0x00028feb) level_5_zoom

0xafd1,	// (0x00028ff4) level_6_zoom

0xafda,	// (0x00028ffd) level_7_zoom

0xafe3,	// (0x00029006) level_8_zoom

0xb006,	// (0x00029029) level_9_zoom

0xb017,	// (0x0002903a) popup_phob_thumbnail_window_g1

0xb01f,	// (0x00029042) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x0002d433) popup_phob_thumbnail_window_g

0xc37c,	// (0x0002a39f) level_1_location

0xc384,	// (0x0002a3a7) level_2_location

0xc38c,	// (0x0002a3af) level_3_location

0xc394,	// (0x0002a3b7) level_4_location

0xa4fc,	// (0x0002851f) level_5_location

0x495c,	// (0x0002297f) mce_icon_pane_g1

0x4964,	// (0x00022987) mce_icon_pane_g2

0x0001,

0xf415,	// (0x0002d438) mce_icon_pane_g

0x496c,	// (0x0002298f) main_mup_pane_g1_ParamLimits

0x496c,	// (0x0002298f) main_mup_pane_g1

0x4984,	// (0x000229a7) main_mup_pane_g2_ParamLimits

0x4984,	// (0x000229a7) main_mup_pane_g2

0x49a0,	// (0x000229c3) main_mup_pane_g3_ParamLimits

0x49a0,	// (0x000229c3) main_mup_pane_g3

0x49bc,	// (0x000229df) main_mup_pane_g4_ParamLimits

0x49bc,	// (0x000229df) main_mup_pane_g4

0x49d8,	// (0x000229fb) main_mup_pane_g5_ParamLimits

0x49d8,	// (0x000229fb) main_mup_pane_g5

0x49f9,	// (0x00022a1c) main_mup_pane_g6_ParamLimits

0x49f9,	// (0x00022a1c) main_mup_pane_g6

0x4a15,	// (0x00022a38) main_mup_pane_g7_ParamLimits

0x4a15,	// (0x00022a38) main_mup_pane_g7

0x4a31,	// (0x00022a54) main_mup_pane_g8_ParamLimits

0x4a31,	// (0x00022a54) main_mup_pane_g8

0x4a51,	// (0x00022a74) main_mup_pane_g9_ParamLimits

0x4a51,	// (0x00022a74) main_mup_pane_g9

0x4a70,	// (0x00022a93) main_mup_pane_g10_ParamLimits

0x4a70,	// (0x00022a93) main_mup_pane_g10

0x4a8f,	// (0x00022ab2) main_mup_pane_g11_ParamLimits

0x4a8f,	// (0x00022ab2) main_mup_pane_g11

0x4aa7,	// (0x00022aca) main_mup_pane_g12_ParamLimits

0x4aa7,	// (0x00022aca) main_mup_pane_g12

0x4ab5,	// (0x00022ad8) main_mup_pane_g13_ParamLimits

0x4ab5,	// (0x00022ad8) main_mup_pane_g13

0x000c,

0xf41a,	// (0x0002d43d) main_mup_pane_g_ParamLimits

0xf41a,	// (0x0002d43d) main_mup_pane_g

0x4acb,	// (0x00022aee) main_mup_pane_t1_ParamLimits

0x4acb,	// (0x00022aee) main_mup_pane_t1

0x4ae8,	// (0x00022b0b) main_mup_pane_t2_ParamLimits

0x4ae8,	// (0x00022b0b) main_mup_pane_t2

0x4b02,	// (0x00022b25) main_mup_pane_t3_ParamLimits

0x4b02,	// (0x00022b25) main_mup_pane_t3

0x4b1c,	// (0x00022b3f) main_mup_pane_t4_ParamLimits

0x4b1c,	// (0x00022b3f) main_mup_pane_t4

0x4b2e,	// (0x00022b51) main_mup_pane_t5_ParamLimits

0x4b2e,	// (0x00022b51) main_mup_pane_t5

0x4b40,	// (0x00022b63) main_mup_pane_t6_ParamLimits

0x4b40,	// (0x00022b63) main_mup_pane_t6

0x0005,

0xf435,	// (0x0002d458) main_mup_pane_t_ParamLimits

0xf435,	// (0x0002d458) main_mup_pane_t

0x4b56,	// (0x00022b79) mup_progress_pane_ParamLimits

0x4b56,	// (0x00022b79) mup_progress_pane

0x4b62,	// (0x00022b85) mup_visualizer_pane_ParamLimits

0x4b62,	// (0x00022b85) mup_visualizer_pane

0x4b9c,	// (0x00022bbf) mup_volume_pane_ParamLimits

0x4b9c,	// (0x00022bbf) mup_volume_pane

0xaff8,	// (0x0002901b) mup_visualizer_pane_g1_ParamLimits

0xaff8,	// (0x0002901b) mup_visualizer_pane_g1

0xaff8,	// (0x0002901b) mup_visualizer_pane_g2_ParamLimits

0xaff8,	// (0x0002901b) mup_visualizer_pane_g2

0xad93,	// (0x00028db6) mup_visualizer_pane_g3_ParamLimits

0xad93,	// (0x00028db6) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x0002d465) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x0002d465) mup_visualizer_pane_g

0xa38c,	// (0x000283af) mup_volume_pane_g1

0xb02f,	// (0x00029052) mup_volume_pane_g2

0x0001,

0xf449,	// (0x0002d46c) mup_volume_pane_g

0xa38c,	// (0x000283af) mup_progress_pane_g1

0xb038,	// (0x0002905b) mup_progress_pane_g2

0xb041,	// (0x00029064) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x0002d471) mup_progress_pane_g

0xa009,	// (0x0002802c) bg_popup_window_pane_cp05

0xb04a,	// (0x0002906d) heading_pane_cp02_ParamLimits

0xb04a,	// (0x0002906d) heading_pane_cp02

0xb064,	// (0x00029087) list_popup_blid_pane

0xb06c,	// (0x0002908f) list_blid_sat_info_pane_ParamLimits

0xb06c,	// (0x0002908f) list_blid_sat_info_pane

0xb07f,	// (0x000290a2) list_blid_sat_info_pane_g1

0xb087,	// (0x000290aa) list_blid_sat_info_pane_t1

0x4ca9,	// (0x00022ccc) mup_equalizer_pane_ParamLimits

0x4ca9,	// (0x00022ccc) mup_equalizer_pane

0x4cca,	// (0x00022ced) mup_equalizer_pane_cp1_ParamLimits

0x4cca,	// (0x00022ced) mup_equalizer_pane_cp1

0x4ceb,	// (0x00022d0e) mup_equalizer_pane_cp2_ParamLimits

0x4ceb,	// (0x00022d0e) mup_equalizer_pane_cp2

0x4d0c,	// (0x00022d2f) mup_equalizer_pane_cp3_ParamLimits

0x4d0c,	// (0x00022d2f) mup_equalizer_pane_cp3

0x4d2d,	// (0x00022d50) mup_equalizer_pane_cp4_ParamLimits

0x4d2d,	// (0x00022d50) mup_equalizer_pane_cp4

0x4d4e,	// (0x00022d71) mup_equalizer_pane_cp5

0x4d64,	// (0x00022d87) mup_equalizer_pane_cp6

0x4d7c,	// (0x00022d9f) mup_equalizer_pane_cp7

0xc29a,	// (0x0002a2bd) bg_popup_call_poc_act_pane_g9

0xc2a2,	// (0x0002a2c5) bg_popup_call_poc_act_pane_g10

0xc2aa,	// (0x0002a2cd) bg_popup_call_poc_act_pane_g11

0x000a,

0xa264,	// (0x00028287) mup_scale_pane

0xa38c,	// (0x000283af) mup_scale_pane_g1

0xb095,	// (0x000290b8) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x0002d48d) mup_scale_pane_g

0xb0b9,	// (0x000290dc) msg_data_pane

0xb0c1,	// (0x000290e4) scroll_pane_cp017

0x4da6,	// (0x00022dc9) bg_list_pane_cp04_ParamLimits

0x4da6,	// (0x00022dc9) bg_list_pane_cp04

0xb0d1,	// (0x000290f4) msg_data_pane_g1

0x4dc2,	// (0x00022de5) msg_data_pane_g2

0x4dcc,	// (0x00022def) msg_data_pane_g3

0x4dd4,	// (0x00022df7) msg_data_pane_g4

0x4ddc,	// (0x00022dff) msg_data_pane_g5

0x4de4,	// (0x00022e07) msg_data_pane_g6

0x4dec,	// (0x00022e0f) msg_data_pane_g7

0x0006,

0xf479,	// (0x0002d49c) msg_data_pane_g

0x4df4,	// (0x00022e17) msg_text_pane_ParamLimits

0x4df4,	// (0x00022e17) msg_text_pane

0x4e30,	// (0x00022e53) qrid_highlight_pane_cp011_ParamLimits

0x4e30,	// (0x00022e53) qrid_highlight_pane_cp011

0xa009,	// (0x0002802c) msg_body_pane

0xa009,	// (0x0002802c) msg_header_pane

0xb0e2,	// (0x00029105) input_focus_pane_cp07

0xb0f7,	// (0x0002911a) msg_header_pane_t1_ParamLimits

0xb0f7,	// (0x0002911a) msg_header_pane_t1

0xb109,	// (0x0002912c) msg_header_pane_t2_ParamLimits

0xb109,	// (0x0002912c) msg_header_pane_t2

0x0001,

0xf48d,	// (0x0002d4b0) msg_header_pane_t_ParamLimits

0xf48d,	// (0x0002d4b0) msg_header_pane_t

0xb11b,	// (0x0002913e) msg_body_pane_g1

0xb123,	// (0x00029146) msg_body_pane_t1_ParamLimits

0xb123,	// (0x00029146) msg_body_pane_t1

0xb154,	// (0x00029177) msg_body_pane_t2_ParamLimits

0xb154,	// (0x00029177) msg_body_pane_t2

0xb166,	// (0x00029189) msg_body_pane_t3_ParamLimits

0xb166,	// (0x00029189) msg_body_pane_t3

0x0002,

0xf492,	// (0x0002d4b5) msg_body_pane_t_ParamLimits

0xf492,	// (0x0002d4b5) msg_body_pane_t

0x14db,	// (0x0001f4fe) main_viewer_pane_g1_ParamLimits

0x14db,	// (0x0001f4fe) main_viewer_pane_g1

0x14e7,	// (0x0001f50a) main_viewer_pane_g2_ParamLimits

0x14e7,	// (0x0001f50a) main_viewer_pane_g2

0x4e78,	// (0x00022e9b) main_viewer_pane_g3_ParamLimits

0x4e78,	// (0x00022e9b) main_viewer_pane_g3

0x4e89,	// (0x00022eac) main_viewer_pane_g4_ParamLimits

0x4e89,	// (0x00022eac) main_viewer_pane_g4

0x14f3,	// (0x0001f516) main_viewer_pane_g5_ParamLimits

0x14f3,	// (0x0001f516) main_viewer_pane_g5

0x14f3,	// (0x0001f516) main_viewer_pane_g7_ParamLimits

0x14f3,	// (0x0001f516) main_viewer_pane_g7

0xaa16,	// (0x00028a39) main_viewer_pane_g8_ParamLimits

0xaa16,	// (0x00028a39) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x0002d4c5) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x0002d4c5) main_viewer_pane_g

0xb178,	// (0x0002919b) viewer_content_pane_ParamLimits

0xb178,	// (0x0002919b) viewer_content_pane

0x4eba,	// (0x00022edd) main_postcard_pane_g1_ParamLimits

0x4eba,	// (0x00022edd) main_postcard_pane_g1

0x4ec8,	// (0x00022eeb) main_postcard_pane_g2_ParamLimits

0x4ec8,	// (0x00022eeb) main_postcard_pane_g2

0x4ed6,	// (0x00022ef9) main_postcard_pane_g3_ParamLimits

0x4ed6,	// (0x00022ef9) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x0002d4d6) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x0002d4d6) main_postcard_pane_g

0x4ee6,	// (0x00022f09) main_postcard_pane_g4

0xc47c,	// (0x0002a49f) smil_status_volume_pane_g2

0x4f12,	// (0x00022f35) postcard_pane_ParamLimits

0x4f12,	// (0x00022f35) postcard_pane

0xaff8,	// (0x0002901b) postcard_pane_g1_ParamLimits

0xaff8,	// (0x0002901b) postcard_pane_g1

0x4f44,	// (0x00022f67) postcard_pane_g2_ParamLimits

0x4f44,	// (0x00022f67) postcard_pane_g2

0x4f50,	// (0x00022f73) postcard_pane_g3_ParamLimits

0x4f50,	// (0x00022f73) postcard_pane_g3

0xb186,	// (0x000291a9) postcard_pane_g4_ParamLimits

0xb186,	// (0x000291a9) postcard_pane_g4

0x4f5c,	// (0x00022f7f) postcard_pane_g5_ParamLimits

0x4f5c,	// (0x00022f7f) postcard_pane_g5

0x4f68,	// (0x00022f8b) postcard_pane_g6_ParamLimits

0x4f68,	// (0x00022f8b) postcard_pane_g6

0xb194,	// (0x000291b7) postcard_pane_g7_ParamLimits

0xb194,	// (0x000291b7) postcard_pane_g7

0x0006,

0xf4c0,	// (0x0002d4e3) postcard_pane_g_ParamLimits

0xf4c0,	// (0x0002d4e3) postcard_pane_g

0x4f74,	// (0x00022f97) main_mp2_pane_g1_ParamLimits

0x4f74,	// (0x00022f97) main_mp2_pane_g1

0x4f80,	// (0x00022fa3) main_mp2_pane_g2_ParamLimits

0x4f80,	// (0x00022fa3) main_mp2_pane_g2

0x4f8c,	// (0x00022faf) main_mp2_pane_g3_ParamLimits

0x4f8c,	// (0x00022faf) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x0002d4f2) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x0002d4f2) main_mp2_pane_g

0x4f98,	// (0x00022fbb) main_mp2_pane_t1_ParamLimits

0x4f98,	// (0x00022fbb) main_mp2_pane_t1

0x4faf,	// (0x00022fd2) main_mp2_pane_t2_ParamLimits

0x4faf,	// (0x00022fd2) main_mp2_pane_t2

0x4fc3,	// (0x00022fe6) main_mp2_pane_t3_ParamLimits

0x4fc3,	// (0x00022fe6) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x0002d4f9) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x0002d4f9) main_mp2_pane_t

0xb1a2,	// (0x000291c5) pec_content_pane_ParamLimits

0xb1a2,	// (0x000291c5) pec_content_pane

0xa6a5,	// (0x000286c8) scroll_pane_cp015

0xb1b4,	// (0x000291d7) pec_attribute_pane_ParamLimits

0xb1b4,	// (0x000291d7) pec_attribute_pane

0x4fd5,	// (0x00022ff8) pec_content_pane_g1_ParamLimits

0x4fd5,	// (0x00022ff8) pec_content_pane_g1

0xb1c4,	// (0x000291e7) pec_content_pane_t1_ParamLimits

0xb1c4,	// (0x000291e7) pec_content_pane_t1

0xb1d6,	// (0x000291f9) pec_content_pane_t2_ParamLimits

0xb1d6,	// (0x000291f9) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x0002d500) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x0002d500) pec_content_pane_t

0x4fe1,	// (0x00023004) list_single_graphic_pane_cp01_ParamLimits

0x4fe1,	// (0x00023004) list_single_graphic_pane_cp01

0xa264,	// (0x00028287) bg_popup_sub_pane_cp04

0xb1e8,	// (0x0002920b) popup_mup_playback_window_g1

0xb1f4,	// (0x00029217) popup_mup_playback_window_t1

0xb209,	// (0x0002922c) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x0002d505) popup_mup_playback_window_t

0xb240,	// (0x00029263) main_image_pane_g1_ParamLimits

0xb240,	// (0x00029263) main_image_pane_g1

0xb283,	// (0x000292a6) scroll_pane_cp018_ParamLimits

0xb283,	// (0x000292a6) scroll_pane_cp018

0xb29b,	// (0x000292be) scroll_pane_cp016_ParamLimits

0xb29b,	// (0x000292be) scroll_pane_cp016

0x507a,	// (0x0002309d) smil2_image_pane_ParamLimits

0x507a,	// (0x0002309d) smil2_image_pane

0x50aa,	// (0x000230cd) smil2_root_pane_ParamLimits

0x50aa,	// (0x000230cd) smil2_root_pane

0x50d6,	// (0x000230f9) smil2_text_pane_ParamLimits

0x50d6,	// (0x000230f9) smil2_text_pane

0xa009,	// (0x0002802c) bg_list_pane_cp06

0xb2d7,	// (0x000292fa) grid_radio_pane

0xa009,	// (0x0002802c) bg_popup_window_pane_cp06

0xb2df,	// (0x00029302) main_fmradio_pane_t1

0xabe2,	// (0x00028c05) heading_pane_cp04

0xb2ed,	// (0x00029310) main_fmradio_pane_t2

0xc2b2,	// (0x0002a2d5) popup_cale_lunar_info_window_g1

0xb2fb,	// (0x0002931e) main_fmradio_pane_t3

0xc2ba,	// (0x0002a2dd) popup_cale_lunar_info_window_g2

0xb309,	// (0x0002932c) main_fmradio_pane_t4

0x0001,

0xb317,	// (0x0002933a) main_fmradio_pane_t5

0x0004,

0xf5bd,	// (0x0002d5e0) popup_cale_lunar_info_window_g

0xf4f7,	// (0x0002d51a) main_fmradio_pane_t

0xb325,	// (0x00029348) wait_bar_pane_cp03

0xb32d,	// (0x00029350) cell_fmradio_pane_ParamLimits

0xb32d,	// (0x00029350) cell_fmradio_pane

0xb194,	// (0x000291b7) cell_fmradio_pane_g1_ParamLimits

0xb194,	// (0x000291b7) cell_fmradio_pane_g1

0xa009,	// (0x0002802c) grid_highlight_pane_cp011

0xb340,	// (0x00029363) poc_content_pane_ParamLimits

0xb340,	// (0x00029363) poc_content_pane

0xb352,	// (0x00029375) scroll_pane_cp019

0x5116,	// (0x00023139) popup_call_poc_act_window_ParamLimits

0x5116,	// (0x00023139) popup_call_poc_act_window

0x5123,	// (0x00023146) popup_call_poc_inact_window_ParamLimits

0x5123,	// (0x00023146) popup_call_poc_inact_window

0xf594,	// (0x0002d5b7) bg_popup_call_poc_act_pane_g

0xc22a,	// (0x0002a24d) bg_popup_call_poc_inact_pane_g1

0xc232,	// (0x0002a255) bg_popup_call_poc_inact_pane_g2

0xb35a,	// (0x0002937d) popup_call_poc_act_window_g2

0xc23a,	// (0x0002a25d) bg_popup_call_poc_inact_pane_g3

0xc242,	// (0x0002a265) bg_popup_call_poc_inact_pane_g4

0xc24a,	// (0x0002a26d) bg_popup_call_poc_inact_pane_g5

0xb362,	// (0x00029385) popup_call_poc_act_window_t1_ParamLimits

0xb362,	// (0x00029385) popup_call_poc_act_window_t1

0xb38a,	// (0x000293ad) popup_call_poc_act_window_t2_ParamLimits

0xb38a,	// (0x000293ad) popup_call_poc_act_window_t2

0xb3b2,	// (0x000293d5) popup_call_poc_act_window_t3_ParamLimits

0xb3b2,	// (0x000293d5) popup_call_poc_act_window_t3

0xb3da,	// (0x000293fd) popup_call_poc_act_window_t4_ParamLimits

0xb3da,	// (0x000293fd) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x0002d525) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x0002d525) popup_call_poc_act_window_t

0xc252,	// (0x0002a275) bg_popup_call_poc_inact_pane_g6

0xc25a,	// (0x0002a27d) bg_popup_call_poc_inact_pane_g7

0xc262,	// (0x0002a285) bg_popup_call_poc_inact_pane_g8

0xb3ec,	// (0x0002940f) popup_call_poc_inact_window_g2

0xc26a,	// (0x0002a28d) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf581,	// (0x0002d5a4) bg_popup_call_poc_inact_pane_g

0xb3f4,	// (0x00029417) popup_call_poc_inact_window_t1_ParamLimits

0xb3f4,	// (0x00029417) popup_call_poc_inact_window_t1

0xb409,	// (0x0002942c) popup_call_poc_inact_window_t2_ParamLimits

0xb409,	// (0x0002942c) popup_call_poc_inact_window_t2

0xb41e,	// (0x00029441) popup_call_poc_inact_window_t3_ParamLimits

0xb41e,	// (0x00029441) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x0002d52e) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x0002d52e) popup_call_poc_inact_window_t

0xc3ef,	// (0x0002a412) context_pane_ParamLimits

0x55d9,	// (0x000235fc) signal_pane_ParamLimits

0xa4fc,	// (0x0002851f) main_call2_pane

0x164e,	// (0x0001f671) popup_phob_thumbnail2_window_ParamLimits

0x164e,	// (0x0001f671) popup_phob_thumbnail2_window

0x14ab,	// (0x0001f4ce) aid_hotspot_pointer_arrow_pane

0x14b3,	// (0x0001f4d6) aid_hotspot_pointer_hand_pane

0x5445,	// (0x00023468) phob_pre_status_pane_g5

0x2ff1,	// (0x00021014) cams_zoom_pane_ParamLimits

0x2ffd,	// (0x00021020) image_vga_pane_ParamLimits

0x300c,	// (0x0002102f) main_camera_pane_g1_ParamLimits

0x301a,	// (0x0002103d) main_camera_pane_g2_ParamLimits

0x3026,	// (0x00021049) main_camera_pane_g3_ParamLimits

0x3032,	// (0x00021055) main_camera_pane_g4_ParamLimits

0x303e,	// (0x00021061) main_camera_pane_g5_ParamLimits

0x304a,	// (0x0002106d) main_camera_pane_g6_ParamLimits

0x3056,	// (0x00021079) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x0002d22d) main_camera_pane_g_ParamLimits

0x3062,	// (0x00021085) main_camera_pane_t1_ParamLimits

0x3074,	// (0x00021097) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x0002d23e) main_camera_pane_t_ParamLimits

0xa264,	// (0x00028287) bg_popup_preview_window_pane_cp01_ParamLimits

0xa264,	// (0x00028287) bg_popup_preview_window_pane_cp01

0xb433,	// (0x00029456) popup_phob_thumbnail2_window_g1_ParamLimits

0xb433,	// (0x00029456) popup_phob_thumbnail2_window_g1

0xa009,	// (0x0002802c) call2_cli_visual_pane

0x513f,	// (0x00023162) popup_call2_audio_conf_window_ParamLimits

0x513f,	// (0x00023162) popup_call2_audio_conf_window

0x5154,	// (0x00023177) popup_call2_audio_first_window_ParamLimits

0x5154,	// (0x00023177) popup_call2_audio_first_window

0x51f2,	// (0x00023215) popup_call2_audio_in_window_ParamLimits

0x51f2,	// (0x00023215) popup_call2_audio_in_window

0x5234,	// (0x00023257) popup_call2_audio_out_window_ParamLimits

0x5234,	// (0x00023257) popup_call2_audio_out_window

0x5296,	// (0x000232b9) popup_call2_audio_second_window_ParamLimits

0x5296,	// (0x000232b9) popup_call2_audio_second_window

0x52f4,	// (0x00023317) popup_call2_audio_wait_window_ParamLimits

0x52f4,	// (0x00023317) popup_call2_audio_wait_window

0xa009,	// (0x0002802c) bg_popup_call2_act_pane_cp03

0xa246,	// (0x00028269) list_conf_pane_cp

0xb43f,	// (0x00029462) popup_call2_audio_conf_window_t1

0xac3f,	// (0x00028c62) list_single_graphic_popup_conf2_pane_ParamLimits

0xac3f,	// (0x00028c62) list_single_graphic_popup_conf2_pane

0xac52,	// (0x00028c75) list_highlight_pane_cp04

0xb44d,	// (0x00029470) list_single_graphic_popup_conf2_pane_g1

0xac63,	// (0x00028c86) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x0002d535) list_single_graphic_popup_conf2_pane_g

0xb457,	// (0x0002947a) list_single_graphic_popup_conf2_pane_t1

0xb465,	// (0x00029488) bg_popup_call2_act_pane_cp01_ParamLimits

0xb465,	// (0x00029488) bg_popup_call2_act_pane_cp01

0xb4ef,	// (0x00029512) call_type_pane_cp05_ParamLimits

0xb4ef,	// (0x00029512) call_type_pane_cp05

0xb543,	// (0x00029566) popup_call2_audio_second_window_g1_ParamLimits

0xb543,	// (0x00029566) popup_call2_audio_second_window_g1

0xb597,	// (0x000295ba) popup_call2_audio_second_window_g2_ParamLimits

0xb597,	// (0x000295ba) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x0002d53a) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x0002d53a) popup_call2_audio_second_window_g

0xb5fc,	// (0x0002961f) popup_call2_audio_second_window_t1_ParamLimits

0xb5fc,	// (0x0002961f) popup_call2_audio_second_window_t1

0xb6b7,	// (0x000296da) popup_call2_audio_second_window_t2_ParamLimits

0xb6b7,	// (0x000296da) popup_call2_audio_second_window_t2

0xb70a,	// (0x0002972d) popup_call2_audio_second_window_t3_ParamLimits

0xb70a,	// (0x0002972d) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x0002d541) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x0002d541) popup_call2_audio_second_window_t

0xa009,	// (0x0002802c) bg_popup_call2_in_pane_cp02

0xa013,	// (0x00028036) call_type_pane_cp04

0xa01b,	// (0x0002803e) popup_call2_audio_wait_window_g1

0xa023,	// (0x00028046) popup_call2_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0002d11c) popup_call2_audio_wait_window_g

0xa02b,	// (0x0002804e) popup_call2_audio_wait_window_t3

0xb7fd,	// (0x00029820) bg_popup_call2_act_pane_ParamLimits

0xb7fd,	// (0x00029820) bg_popup_call2_act_pane

0xb8bd,	// (0x000298e0) call_type_pane_cp03_ParamLimits

0xb8bd,	// (0x000298e0) call_type_pane_cp03

0xb921,	// (0x00029944) popup_call2_audio_first_window_g1_ParamLimits

0xb921,	// (0x00029944) popup_call2_audio_first_window_g1

0xb991,	// (0x000299b4) popup_call2_audio_first_window_g2_ParamLimits

0xb991,	// (0x000299b4) popup_call2_audio_first_window_g2

0xaff8,	// (0x0002901b) popup_call2_audio_first_window_g3_ParamLimits

0xaff8,	// (0x0002901b) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x0002d54a) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x0002d54a) popup_call2_audio_first_window_g

0xba6f,	// (0x00029a92) popup_call2_audio_first_window_t1_ParamLimits

0xba6f,	// (0x00029a92) popup_call2_audio_first_window_t1

0xbb72,	// (0x00029b95) popup_call2_audio_first_window_t4_ParamLimits

0xbb72,	// (0x00029b95) popup_call2_audio_first_window_t4

0xbc55,	// (0x00029c78) popup_call2_audio_first_window_t5_ParamLimits

0xbc55,	// (0x00029c78) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x0002d555) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x0002d555) popup_call2_audio_first_window_t

0xa25c,	// (0x0002827f) bg_popup_call2_act_pane_g1

0xc2c2,	// (0x0002a2e5) popup_cale_lunar_info_window_t1

0xc2d0,	// (0x0002a2f3) popup_cale_lunar_info_window_t2

0xc2de,	// (0x0002a301) popup_cale_lunar_info_window_t3

0xa009,	// (0x0002802c) bg_popup_call2_bubble_pane

0xbd56,	// (0x00029d79) bg_popup_call2_in_pane_cp01_ParamLimits

0xbd56,	// (0x00029d79) bg_popup_call2_in_pane_cp01

0x9ce5,	// (0x00027d08) call_type_pane_cp02

0xbd9e,	// (0x00029dc1) popup_call2_audio_out_window_g1_ParamLimits

0xbd9e,	// (0x00029dc1) popup_call2_audio_out_window_g1

0xbdca,	// (0x00029ded) popup_call2_audio_out_window_g2_ParamLimits

0xbdca,	// (0x00029ded) popup_call2_audio_out_window_g2

0xbdf2,	// (0x00029e15) popup_call2_audio_out_window_g3_ParamLimits

0xbdf2,	// (0x00029e15) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x0002d55e) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x0002d55e) popup_call2_audio_out_window_g

0xbe2d,	// (0x00029e50) popup_call2_audio_out_window_t1_ParamLimits

0xbe2d,	// (0x00029e50) popup_call2_audio_out_window_t1

0xbe8c,	// (0x00029eaf) popup_call2_audio_out_window_t2_ParamLimits

0xbe8c,	// (0x00029eaf) popup_call2_audio_out_window_t2

0xbee0,	// (0x00029f03) popup_call2_audio_out_window_t3_ParamLimits

0xbee0,	// (0x00029f03) popup_call2_audio_out_window_t3

0xbef6,	// (0x00029f19) popup_call2_audio_out_window_t4_ParamLimits

0xbef6,	// (0x00029f19) popup_call2_audio_out_window_t4

0xbf0c,	// (0x00029f2f) popup_call2_audio_out_window_t5_ParamLimits

0xbf0c,	// (0x00029f2f) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x0002d567) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x0002d567) popup_call2_audio_out_window_t

0xbf70,	// (0x00029f93) bg_popup_call2_in_pane_ParamLimits

0xbf70,	// (0x00029f93) bg_popup_call2_in_pane

0xbfcc,	// (0x00029fef) popup_call2_audio_in_window_g1_ParamLimits

0xbfcc,	// (0x00029fef) popup_call2_audio_in_window_g1

0xc004,	// (0x0002a027) popup_call2_audio_in_window_g2_ParamLimits

0xc004,	// (0x0002a027) popup_call2_audio_in_window_g2

0xc03c,	// (0x0002a05f) popup_call2_audio_in_window_g3_ParamLimits

0xc03c,	// (0x0002a05f) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x0002d574) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x0002d574) popup_call2_audio_in_window_g

0xc094,	// (0x0002a0b7) popup_call2_audio_in_window_t1_ParamLimits

0xc094,	// (0x0002a0b7) popup_call2_audio_in_window_t1

0xc114,	// (0x0002a137) popup_call2_audio_in_window_t2_ParamLimits

0xc114,	// (0x0002a137) popup_call2_audio_in_window_t2

0xc194,	// (0x0002a1b7) popup_call2_audio_in_window_t3_ParamLimits

0xc194,	// (0x0002a1b7) popup_call2_audio_in_window_t3

0xc1ae,	// (0x0002a1d1) popup_call2_audio_in_window_t4_ParamLimits

0xc1ae,	// (0x0002a1d1) popup_call2_audio_in_window_t4

0xc1c0,	// (0x0002a1e3) popup_call2_audio_in_window_t5_ParamLimits

0xc1c0,	// (0x0002a1e3) popup_call2_audio_in_window_t5

0xc1d5,	// (0x0002a1f8) popup_call2_audio_in_window_t6_ParamLimits

0xc1d5,	// (0x0002a1f8) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x0002d57d) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x0002d57d) popup_call2_audio_in_window_t

0xa25c,	// (0x0002827f) bg_popup_call2_in_pane_g1

0xc2ec,	// (0x0002a30f) popup_cale_lunar_info_window_t4

0x0003,

0xf5c2,	// (0x0002d5e5) popup_cale_lunar_info_window_t

0xa264,	// (0x00028287) bg_popup_call2_rect_pane_ParamLimits

0xa264,	// (0x00028287) bg_popup_call2_rect_pane

0xa009,	// (0x0002802c) call2_cli_visual_graphic_pane

0xa009,	// (0x0002802c) call2_cli_visual_text_pane

0x169d,	// (0x0001f6c0) smil_status_volume_pane_g3

0x0002,

0xa38c,	// (0x000283af) call2_cli_visual_graphic_pane_g1

0xa38c,	// (0x000283af) call2_cli_visual_graphic_pane_g2

0xa38c,	// (0x000283af) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x0002d58a) call2_cli_visual_graphic_pane_g

0xc1ea,	// (0x0002a20d) bg_popup_call2_rect_pane_g1

0xa418,	// (0x0002843b) bg_popup_call2_rect_pane_g2

0xc1f2,	// (0x0002a215) bg_popup_call2_rect_pane_g3

0xc1fa,	// (0x0002a21d) bg_popup_call2_rect_pane_g4

0xc202,	// (0x0002a225) bg_popup_call2_rect_pane_g5

0xc20a,	// (0x0002a22d) bg_popup_call2_rect_pane_g6

0xc212,	// (0x0002a235) bg_popup_call2_rect_pane_g7

0xc21a,	// (0x0002a23d) bg_popup_call2_rect_pane_g8

0xc222,	// (0x0002a245) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x0002d591) bg_popup_call2_rect_pane_g

0xc22a,	// (0x0002a24d) bg_popup_call2_bubble_pane_g1

0xc232,	// (0x0002a255) bg_popup_call2_bubble_pane_g2

0xc23a,	// (0x0002a25d) bg_popup_call2_bubble_pane_g3

0xc242,	// (0x0002a265) bg_popup_call2_bubble_pane_g4

0xc24a,	// (0x0002a26d) bg_popup_call2_bubble_pane_g5

0xc252,	// (0x0002a275) bg_popup_call2_bubble_pane_g6

0xc25a,	// (0x0002a27d) bg_popup_call2_bubble_pane_g7

0xc262,	// (0x0002a285) bg_popup_call2_bubble_pane_g8

0xc26a,	// (0x0002a28d) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x0002d5a4) bg_popup_call2_bubble_pane_g

0x2b14,	// (0x00020b37) aid_cale_week_size_cell_pane

0x3086,	// (0x000210a9) aid_cams_cif_uncrop_pane_ParamLimits

0x3086,	// (0x000210a9) aid_cams_cif_uncrop_pane

0x31e1,	// (0x00021204) aid_cams_size_cell_ParamLimits

0x31e1,	// (0x00021204) aid_cams_size_cell

0x31ed,	// (0x00021210) grid_cams_pane_ParamLimits

0x31fb,	// (0x0002121e) linegrid_cams_pane_ParamLimits

0x33e6,	// (0x00021409) call_video_pane_t1

0x3407,	// (0x0002142a) call_video_pane_t2

0x0001,

0xf26e,	// (0x0002d291) call_video_pane_t

0x394e,	// (0x00021971) aid_cale_month_size_cell_pane_ParamLimits

0x394e,	// (0x00021971) aid_cale_month_size_cell_pane

0xf60b,	// (0x0002d62e) smil_status_volume_pane_g

0x16aa,	// (0x0001f6cd) volume_smil_pane_ParamLimits

0x0e44,	// (0x0001ee67) aid_popup2_width_pane

0x2a50,	// (0x00020a73) cell_qdial_pane_g4_ParamLimits

0x2a50,	// (0x00020a73) cell_qdial_pane_g4

0x48a3,	// (0x000228c6) aid_blid_cardinal_pane_ParamLimits

0x48b3,	// (0x000228d6) aid_blid_destination_pane_ParamLimits

0x48b3,	// (0x000228d6) aid_blid_destination_pane

0xa264,	// (0x00028287) bg_popup_call_poc_act_pane_ParamLimits

0xa264,	// (0x00028287) bg_popup_call_poc_act_pane

0xa264,	// (0x00028287) bg_popup_call_poc_inact_pane_ParamLimits

0xa264,	// (0x00028287) bg_popup_call_poc_inact_pane

0xc272,	// (0x0002a295) bg_popup_call_poc_act_pane_g1

0xc27a,	// (0x0002a29d) bg_popup_call_poc_act_pane_g2

0xc282,	// (0x0002a2a5) bg_popup_call_poc_act_pane_g3

0xc242,	// (0x0002a265) bg_popup_call_poc_act_pane_g4

0xc24a,	// (0x0002a26d) bg_popup_call_poc_act_pane_g5

0xc28a,	// (0x0002a2ad) bg_popup_call_poc_act_pane_g6

0xc25a,	// (0x0002a27d) bg_popup_call_poc_act_pane_g7

0xc292,	// (0x0002a2b5) bg_popup_call_poc_act_pane_g8

0xa009,	// (0x0002802c) main_usb_pane

0x157d,	// (0x0001f5a0) popup_cale_lunar_info_window

0x3730,	// (0x00021753) im_reading_pane_t1_ParamLimits

0xa5fd,	// (0x00028620) list_im_pane_ParamLimits

0xa60e,	// (0x00028631) scroll_pane_cp07_ParamLimits

0xa009,	// (0x0002802c) grid_highlight_pane_cp012

0xa264,	// (0x00028287) mup_scale_pane_ParamLimits

0xaff8,	// (0x0002901b) main_usb_pane_g1_ParamLimits

0xaff8,	// (0x0002901b) main_usb_pane_g1

0x5368,	// (0x0002338b) main_usb_pane_g2_ParamLimits

0x5368,	// (0x0002338b) main_usb_pane_g2

0x0001,

0xf5ab,	// (0x0002d5ce) main_usb_pane_g_ParamLimits

0xf5ab,	// (0x0002d5ce) main_usb_pane_g

0x5374,	// (0x00023397) main_usb_pane_t1_ParamLimits

0x5374,	// (0x00023397) main_usb_pane_t1

0x5386,	// (0x000233a9) main_usb_pane_t2_ParamLimits

0x5386,	// (0x000233a9) main_usb_pane_t2

0x5398,	// (0x000233bb) main_usb_pane_t3_ParamLimits

0x5398,	// (0x000233bb) main_usb_pane_t3

0x53aa,	// (0x000233cd) main_usb_pane_t4_ParamLimits

0x53aa,	// (0x000233cd) main_usb_pane_t4

0x53bc,	// (0x000233df) main_usb_pane_t5_ParamLimits

0x53bc,	// (0x000233df) main_usb_pane_t5

0x53ce,	// (0x000233f1) main_usb_pane_t6_ParamLimits

0x53ce,	// (0x000233f1) main_usb_pane_t6

0x0005,

0xf5b0,	// (0x0002d5d3) main_usb_pane_t_ParamLimits

0x4849,	// (0x0002286c) aid_text_placing

0x4855,	// (0x00022878) main_location2_pane_t1_ParamLimits

0x4869,	// (0x0002288c) main_location2_pane_t2_ParamLimits

0x487d,	// (0x000228a0) main_location2_pane_t3_ParamLimits

0x4891,	// (0x000228b4) main_location2_pane_t4_ParamLimits

0x4891,	// (0x000228b4) main_location2_pane_t4

0xf3cf,	// (0x0002d3f2) main_location2_pane_t_ParamLimits

0xa2a0,	// (0x000282c3) find_pinb_pane_g2_ParamLimits

0xa2a0,	// (0x000282c3) find_pinb_pane_g2

0x0001,

0xf11f,	// (0x0002d142) find_pinb_pane_g_ParamLimits

0xf11f,	// (0x0002d142) find_pinb_pane_g

0xa2ac,	// (0x000282cf) find_pinb_pane_t1_ParamLimits

0xa2be,	// (0x000282e1) find_pinb_pane_t2_ParamLimits

0xf124,	// (0x0002d147) find_pinb_pane_t_ParamLimits

0xa009,	// (0x0002802c) main_call3_pane

0x3ea2,	// (0x00021ec5) cale_month_day_heading_pane_t1_ParamLimits

0x3f28,	// (0x00021f4b) cale_month_day_heading_pane_t2_ParamLimits

0x3fb9,	// (0x00021fdc) cale_month_day_heading_pane_t3_ParamLimits

0x404a,	// (0x0002206d) cale_month_day_heading_pane_t4_ParamLimits

0x40db,	// (0x000220fe) cale_month_day_heading_pane_t5_ParamLimits

0x416c,	// (0x0002218f) cale_month_day_heading_pane_t6_ParamLimits

0x41fd,	// (0x00022220) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x0002d2c9) cale_month_day_heading_pane_t_ParamLimits

0xa858,	// (0x0002887b) smil_status_volume_pane

0x4f2c,	// (0x00022f4f) postcard_address_pane_ParamLimits

0x4f2c,	// (0x00022f4f) postcard_address_pane

0x4f38,	// (0x00022f5b) postcard_message_pane_ParamLimits

0x4f38,	// (0x00022f5b) postcard_message_pane

0x5333,	// (0x00023356) call2_cli_visual_pane_t1_ParamLimits

0x5333,	// (0x00023356) call2_cli_visual_pane_t1

0x57c1,	// (0x000237e4) postcard_message_pane_t1_ParamLimits

0x57c1,	// (0x000237e4) postcard_message_pane_t1

0x57aa,	// (0x000237cd) postcard_address_pane_t1_ParamLimits

0x57aa,	// (0x000237cd) postcard_address_pane_t1

0x579b,	// (0x000237be) popup_call3_audio_in_window_ParamLimits

0x579b,	// (0x000237be) popup_call3_audio_in_window

0x567f,	// (0x000236a2) bg_popup_call3_in_pane_ParamLimits

0x567f,	// (0x000236a2) bg_popup_call3_in_pane

0x56e1,	// (0x00023704) popup_call3_audio_in_window_g1_ParamLimits

0x56e1,	// (0x00023704) popup_call3_audio_in_window_g1

0x56f9,	// (0x0002371c) popup_call3_audio_in_window_g2_ParamLimits

0x56f9,	// (0x0002371c) popup_call3_audio_in_window_g2

0x5711,	// (0x00023734) popup_call3_audio_in_window_g3_ParamLimits

0x5711,	// (0x00023734) popup_call3_audio_in_window_g3

0x0003,

0xf612,	// (0x0002d635) popup_call3_audio_in_window_g_ParamLimits

0xf612,	// (0x0002d635) popup_call3_audio_in_window_g

0x5739,	// (0x0002375c) popup_call3_audio_in_window_t1_ParamLimits

0x5739,	// (0x0002375c) popup_call3_audio_in_window_t1

0x5761,	// (0x00023784) popup_call3_audio_in_window_t2_ParamLimits

0x5761,	// (0x00023784) popup_call3_audio_in_window_t2

0x5789,	// (0x000237ac) popup_call3_audio_in_window_t3_ParamLimits

0x5789,	// (0x000237ac) popup_call3_audio_in_window_t3

0x0002,

0xf61b,	// (0x0002d63e) popup_call3_audio_in_window_t_ParamLimits

0xf61b,	// (0x0002d63e) popup_call3_audio_in_window_t

0xa4fc,	// (0x0002851f) bg_popup_call3_rect_pane

0xc1ea,	// (0x0002a20d) bg_popup_call3_rect_pane_g1

0xa418,	// (0x0002843b) bg_popup_call3_rect_pane_g2

0xc1f2,	// (0x0002a215) bg_popup_call3_rect_pane_g3

0xc1fa,	// (0x0002a21d) bg_popup_call3_rect_pane_g4

0xc202,	// (0x0002a225) bg_popup_call3_rect_pane_g5

0xc20a,	// (0x0002a22d) bg_popup_call3_rect_pane_g6

0xc212,	// (0x0002a235) bg_popup_call3_rect_pane_g7

0x4bb7,	// (0x00022bda) mup_visualizer_osc_pane

0xb027,	// (0x0002904a) mup_visualizer_spec_pane

0x569f,	// (0x000236c2) call3_video_qcif_pane_ParamLimits

0x569f,	// (0x000236c2) call3_video_qcif_pane

0x56b1,	// (0x000236d4) call3_video_qcif_uncrop_pane_ParamLimits

0x56b1,	// (0x000236d4) call3_video_qcif_uncrop_pane

0x56bf,	// (0x000236e2) call3_video_subqcif_pane_ParamLimits

0x56bf,	// (0x000236e2) call3_video_subqcif_pane

0x56d1,	// (0x000236f4) call3_video_subqcif_uncrop_pane_ParamLimits

0x56d1,	// (0x000236f4) call3_video_subqcif_uncrop_pane

0x5729,	// (0x0002374c) popup_call3_audio_in_window_g4_ParamLimits

0x5729,	// (0x0002374c) popup_call3_audio_in_window_g4

0x566e,	// (0x00023691) mup_spec_half_pane

0x5677,	// (0x0002369a) mup_spec_half_pane_cp

0xc44f,	// (0x0002a472) mup_osc_middle_pane

0xc458,	// (0x0002a47b) mup_visualizer_osc_pane_g1

0x564f,	// (0x00023672) mup_spec_bar_pane_ParamLimits

0x564f,	// (0x00023672) mup_spec_bar_pane

0xc43c,	// (0x0002a45f) mup_spec_bar_pane_g1

0xc446,	// (0x0002a469) mup_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0002d629) mup_spec_bar_pane_g

0x2b14,	// (0x00020b37) aid_cale_week_size_cell_pane_ParamLimits

0x2b29,	// (0x00020b4c) bg_cale_heading_pane_ParamLimits

0xa455,	// (0x00028478) bg_cale_pane_cp01_ParamLimits

0x2b4b,	// (0x00020b6e) cale_week_corner_pane_ParamLimits

0x2b65,	// (0x00020b88) cale_week_day_heading_pane_ParamLimits

0x2b87,	// (0x00020baa) cale_week_scroll_pane_g1_ParamLimits

0x2ba4,	// (0x00020bc7) cale_week_scroll_pane_g2_ParamLimits

0x2bb7,	// (0x00020bda) cale_week_scroll_pane_g3_ParamLimits

0x2bca,	// (0x00020bed) cale_week_scroll_pane_g4_ParamLimits

0x2bdd,	// (0x00020c00) cale_week_scroll_pane_g5_ParamLimits

0x2bf0,	// (0x00020c13) cale_week_scroll_pane_g6_ParamLimits

0x2c03,	// (0x00020c26) cale_week_scroll_pane_g7_ParamLimits

0x2c16,	// (0x00020c39) cale_week_scroll_pane_g8_ParamLimits

0x2c2b,	// (0x00020c4e) cale_week_scroll_pane_g9_ParamLimits

0x2c3e,	// (0x00020c61) cale_week_scroll_pane_g10_ParamLimits

0x2c51,	// (0x00020c74) cale_week_scroll_pane_g11_ParamLimits

0x2c64,	// (0x00020c87) cale_week_scroll_pane_g12_ParamLimits

0x2c7b,	// (0x00020c9e) cale_week_scroll_pane_g13_ParamLimits

0x2c96,	// (0x00020cb9) cale_week_scroll_pane_g14_ParamLimits

0x2cb1,	// (0x00020cd4) cale_week_scroll_pane_g15_ParamLimits

0xf1b0,	// (0x0002d1d3) cale_week_scroll_pane_g_ParamLimits

0x2ce1,	// (0x00020d04) cale_week_time_pane_ParamLimits

0x2cf6,	// (0x00020d19) grid_cale_week_pane_ParamLimits

0xa472,	// (0x00028495) listscroll_cale_week_pane_t1

0xa484,	// (0x000284a7) scroll_pane_cp08_ParamLimits

0x39b7,	// (0x000219da) cale_month_corner_pane_ParamLimits

0xa82e,	// (0x00028851) cale_month_pane_t1

0x3e3f,	// (0x00021e62) cale_month_week_pane_ParamLimits

0xaff8,	// (0x0002901b) popup_call_status_window_g1_ParamLimits

0x46ef,	// (0x00022712) popup_call_status_window_g2_ParamLimits

0x46fb,	// (0x0002271e) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x0002d379) popup_call_status_window_g_ParamLimits

0xabd2,	// (0x00028bf5) aid_call2_pane

0x4e4a,	// (0x00022e6d) msg_header_pane_g1

0x4f2c,	// (0x00022f4f) postcard_address2_pane_ParamLimits

0x4f2c,	// (0x00022f4f) postcard_address2_pane

0x4f38,	// (0x00022f5b) postcard_message2_pane_ParamLimits

0x4f38,	// (0x00022f5b) postcard_message2_pane

0x55e7,	// (0x0002360a) message2_row_pane_ParamLimits

0x55e7,	// (0x0002360a) message2_row_pane

0x5602,	// (0x00023625) address2_row_pane_ParamLimits

0x5602,	// (0x00023625) address2_row_pane

0xc40a,	// (0x0002a42d) postcard_message2_row_pane_g1

0xc412,	// (0x0002a435) postcard_message2_row_pane_t1

0xc40a,	// (0x0002a42d) address2_row_pane_g1

0xc412,	// (0x0002a435) address2_row_pane_t1

0x2f76,	// (0x00020f99) aid_size_cell_vorec

0xa009,	// (0x0002802c) main_rss_pane

0x5615,	// (0x00023638) rss_list_single_pane_ParamLimits

0x5615,	// (0x00023638) rss_list_single_pane

0xc420,	// (0x0002a443) rss_list_single_pane_t1

0xc42e,	// (0x0002a451) rss_list_single_pane_t2

0x0001,

0xf601,	// (0x0002d624) rss_list_single_pane_t

0xa009,	// (0x0002802c) main_camera2_pane

0xa009,	// (0x0002802c) main_video2_pane

0x1708,	// (0x0001f72b) cams_zoom_pane_cp2_ParamLimits

0x1708,	// (0x0001f72b) cams_zoom_pane_cp2

0x1714,	// (0x0001f737) image2_vga_pane_ParamLimits

0x1714,	// (0x0001f737) image2_vga_pane

0x1723,	// (0x0001f746) main_camera2_pane_g1_ParamLimits

0x1723,	// (0x0001f746) main_camera2_pane_g1

0x172f,	// (0x0001f752) main_camera2_pane_g2_ParamLimits

0x172f,	// (0x0001f752) main_camera2_pane_g2

0x173b,	// (0x0001f75e) main_camera2_pane_g3_ParamLimits

0x173b,	// (0x0001f75e) main_camera2_pane_g3

0x1747,	// (0x0001f76a) main_camera2_pane_g4_ParamLimits

0x1747,	// (0x0001f76a) main_camera2_pane_g4

0x1753,	// (0x0001f776) main_camera2_pane_g5_ParamLimits

0x1753,	// (0x0001f776) main_camera2_pane_g5

0x175f,	// (0x0001f782) main_camera2_pane_g6_ParamLimits

0x175f,	// (0x0001f782) main_camera2_pane_g6

0x176b,	// (0x0001f78e) main_camera2_pane_g7_ParamLimits

0x176b,	// (0x0001f78e) main_camera2_pane_g7

0x1777,	// (0x0001f79a) main_camera2_pane_g8_ParamLimits

0x1777,	// (0x0001f79a) main_camera2_pane_g8

0x0008,

0xf622,	// (0x0002d645) main_camera2_pane_g_ParamLimits

0xf622,	// (0x0002d645) main_camera2_pane_g

0x178f,	// (0x0001f7b2) main_camera2_pane_t1_ParamLimits

0x178f,	// (0x0001f7b2) main_camera2_pane_t1

0x17a1,	// (0x0001f7c4) main_camera2_pane_t2_ParamLimits

0x17a1,	// (0x0001f7c4) main_camera2_pane_t2

0x17b3,	// (0x0001f7d6) main_camera2_pane_t3_ParamLimits

0x17b3,	// (0x0001f7d6) main_camera2_pane_t3

0x17c5,	// (0x0001f7e8) main_camera2_pane_t4_ParamLimits

0x17c5,	// (0x0001f7e8) main_camera2_pane_t4

0x0006,

0xf635,	// (0x0002d658) main_camera2_pane_t_ParamLimits

0xf635,	// (0x0002d658) main_camera2_pane_t

0x1827,	// (0x0001f84a) cams_zoom_pane_cp4_ParamLimits

0x1827,	// (0x0001f84a) cams_zoom_pane_cp4

0x1837,	// (0x0001f85a) image2_cif_pane_ParamLimits

0x1837,	// (0x0001f85a) image2_cif_pane

0x184c,	// (0x0001f86f) image2_subqcif_pane_ParamLimits

0x184c,	// (0x0001f86f) image2_subqcif_pane

0x185b,	// (0x0001f87e) main_video2_pane_g1_ParamLimits

0x185b,	// (0x0001f87e) main_video2_pane_g1

0x186d,	// (0x0001f890) main_video2_pane_g2_ParamLimits

0x186d,	// (0x0001f890) main_video2_pane_g2

0x187d,	// (0x0001f8a0) main_video2_pane_g3_ParamLimits

0x187d,	// (0x0001f8a0) main_video2_pane_g3

0x188d,	// (0x0001f8b0) main_video2_pane_g4_ParamLimits

0x188d,	// (0x0001f8b0) main_video2_pane_g4

0x189d,	// (0x0001f8c0) main_video2_pane_g5_ParamLimits

0x189d,	// (0x0001f8c0) main_video2_pane_g5

0x18ad,	// (0x0001f8d0) main_video2_pane_g6_ParamLimits

0x18ad,	// (0x0001f8d0) main_video2_pane_g6

0x0005,

0xf644,	// (0x0002d667) main_video2_pane_g_ParamLimits

0xf644,	// (0x0002d667) main_video2_pane_g

0x18bf,	// (0x0001f8e2) main_video2_pane_t1_ParamLimits

0x18bf,	// (0x0001f8e2) main_video2_pane_t1

0x18d9,	// (0x0001f8fc) main_video2_pane_t2_ParamLimits

0x18d9,	// (0x0001f8fc) main_video2_pane_t2

0x18ff,	// (0x0001f922) main_video2_pane_t3_ParamLimits

0x18ff,	// (0x0001f922) main_video2_pane_t3

0x0002,

0xf651,	// (0x0002d674) main_video2_pane_t_ParamLimits

0xf651,	// (0x0002d674) main_video2_pane_t

0x5485,	// (0x000234a8) call_muted_g2

0x0001,

0xf5f3,	// (0x0002d616) call_muted_g

0xa009,	// (0x0002802c) main_mup2_pane

0xc48f,	// (0x0002a4b2) main_mup2_pane_g1_ParamLimits

0xc48f,	// (0x0002a4b2) main_mup2_pane_g1

0x57dc,	// (0x000237ff) main_mup2_pane_g2_ParamLimits

0x57dc,	// (0x000237ff) main_mup2_pane_g2

0x194e,	// (0x0001f971) main_mup_pane_g13_cp1

0x1956,	// (0x0001f979) mup_volume_pane_cp1

0x57fc,	// (0x0002381f) main_mup2_pane_g4_ParamLimits

0x57fc,	// (0x0002381f) main_mup2_pane_g4

0x5811,	// (0x00023834) main_mup2_pane_g5_ParamLimits

0x5811,	// (0x00023834) main_mup2_pane_g5

0x5826,	// (0x00023849) main_mup2_pane_g6_ParamLimits

0x5826,	// (0x00023849) main_mup2_pane_g6

0x583b,	// (0x0002385e) main_mup2_pane_g7_ParamLimits

0x583b,	// (0x0002385e) main_mup2_pane_g7

0x0006,

0xf658,	// (0x0002d67b) main_mup2_pane_g_ParamLimits

0xf658,	// (0x0002d67b) main_mup2_pane_g

0x5857,	// (0x0002387a) main_mup2_pane_t1_ParamLimits

0x5857,	// (0x0002387a) main_mup2_pane_t1

0x586e,	// (0x00023891) main_mup2_pane_t2_ParamLimits

0x586e,	// (0x00023891) main_mup2_pane_t2

0x5885,	// (0x000238a8) main_mup2_pane_t3_ParamLimits

0x5885,	// (0x000238a8) main_mup2_pane_t3

0x589c,	// (0x000238bf) main_mup2_pane_t4_ParamLimits

0x589c,	// (0x000238bf) main_mup2_pane_t4

0x58b6,	// (0x000238d9) main_mup2_pane_t5_ParamLimits

0x58b6,	// (0x000238d9) main_mup2_pane_t5

0x58d0,	// (0x000238f3) main_mup2_pane_t6_ParamLimits

0x58d0,	// (0x000238f3) main_mup2_pane_t6

0x0005,

0xf667,	// (0x0002d68a) main_mup2_pane_t_ParamLimits

0xf667,	// (0x0002d68a) main_mup2_pane_t

0x5908,	// (0x0002392b) mup2_visualizer_pane_ParamLimits

0x5908,	// (0x0002392b) mup2_visualizer_pane

0x593e,	// (0x00023961) mup_progress_pane_cp_ParamLimits

0x593e,	// (0x00023961) mup_progress_pane_cp

0x1939,	// (0x0001f95c) mup_volume_pane_cp_ParamLimits

0x1939,	// (0x0001f95c) mup_volume_pane_cp

0x5955,	// (0x00023978) mup2_visualizer_pane_g1_ParamLimits

0x5955,	// (0x00023978) mup2_visualizer_pane_g1

0xc49b,	// (0x0002a4be) mup2_visualizer_pane_g2_ParamLimits

0xc49b,	// (0x0002a4be) mup2_visualizer_pane_g2

0x596a,	// (0x0002398d) mup2_visualizer_pane_g3_ParamLimits

0x596a,	// (0x0002398d) mup2_visualizer_pane_g3

0x0002,

0xf674,	// (0x0002d697) mup2_visualizer_pane_g_ParamLimits

0xf674,	// (0x0002d697) mup2_visualizer_pane_g

0xb2cf,	// (0x000292f2) aid_size_cell_fmradio

0x1511,	// (0x0001f534) aid_height_parent_landcape

0xa68c,	// (0x000286af) wml_content_pane_cp

0xa694,	// (0x000286b7) wml_tabs_pane

0xa69d,	// (0x000286c0) popup_wml_miniature_window

0xa6a5,	// (0x000286c8) scroll_pane_cp021

0xa6b9,	// (0x000286dc) wml_content_pane_comp8

0xa009,	// (0x0002802c) bg_popup_sub_pane_cp05

0xc4b9,	// (0x0002a4dc) popup_wml_miniature_window_g1

0xc4c1,	// (0x0002a4e4) wml_miniature_view_pane

0x5978,	// (0x0002399b) aid_size_wml_view

0x5980,	// (0x000239a3) wml_miniature_view_pane_g1

0x5989,	// (0x000239ac) wml_miniature_view_pane_g2

0x5992,	// (0x000239b5) wml_miniature_view_pane_g3

0x599a,	// (0x000239bd) wml_miniature_view_pane_g4

0x59a2,	// (0x000239c5) wml_miniature_view_pane_g5

0x59aa,	// (0x000239cd) wml_miniature_view_pane_g6

0x59b2,	// (0x000239d5) wml_miniature_view_pane_g7

0x59ba,	// (0x000239dd) wml_miniature_view_pane_g8

0x0007,

0xf67b,	// (0x0002d69e) wml_miniature_view_pane_g

0xc48f,	// (0x0002a4b2) background_graphic_ParamLimits

0xc48f,	// (0x0002a4b2) background_graphic

0xc4c9,	// (0x0002a4ec) wml_tabs_2_pane

0xc4d2,	// (0x0002a4f5) wml_tabs_3_pane_ParamLimits

0xc4d2,	// (0x0002a4f5) wml_tabs_3_pane

0xc4e4,	// (0x0002a507) wml_tabs_4_pane_ParamLimits

0xc4e4,	// (0x0002a507) wml_tabs_4_pane

0xc4fa,	// (0x0002a51d) wml_tabs_5_pane_ParamLimits

0xc4fa,	// (0x0002a51d) wml_tabs_5_pane

0xc514,	// (0x0002a537) wml_tabs_pane_g2_ParamLimits

0xc514,	// (0x0002a537) wml_tabs_pane_g2

0xc528,	// (0x0002a54b) wml_tabs_pane_g3_ParamLimits

0xc528,	// (0x0002a54b) wml_tabs_pane_g3

0x59c2,	// (0x000239e5) wml_tabs_2_active_pane_ParamLimits

0x59c2,	// (0x000239e5) wml_tabs_2_active_pane

0x59d2,	// (0x000239f5) wml_tabs_2_passive_pane_ParamLimits

0x59d2,	// (0x000239f5) wml_tabs_2_passive_pane

0x59e2,	// (0x00023a05) wml_tabs_3_active_pane_cp_ParamLimits

0x59e2,	// (0x00023a05) wml_tabs_3_active_pane_cp

0x59f3,	// (0x00023a16) wml_tabs_3_passive_pane_ParamLimits

0x59f3,	// (0x00023a16) wml_tabs_3_passive_pane

0x5a04,	// (0x00023a27) wml_tabs_3_passive_pane_cp_ParamLimits

0x5a04,	// (0x00023a27) wml_tabs_3_passive_pane_cp

0x5a15,	// (0x00023a38) tabs_4_active_pane

0x5a1d,	// (0x00023a40) tabs_4_passive_pane

0x5a25,	// (0x00023a48) tabs_4_passive_pane_cp

0x5a2d,	// (0x00023a50) tabs_4_passive_pane_cp2

0x5360,	// (0x00023383) aid_height_text

0x4b84,	// (0x00022ba7) mup_volume_cont_pane_ParamLimits

0x4b84,	// (0x00022ba7) mup_volume_cont_pane

0x27ef,	// (0x00020812) aid_size_cell_pinb

0x27f9,	// (0x0002081c) aid_size_list_pinb

0x5927,	// (0x0002394a) mup2_volume_cont_pane_ParamLimits

0x5927,	// (0x0002394a) mup2_volume_cont_pane

0x1925,	// (0x0001f948) mup2_volume_cont_pane_g1_ParamLimits

0x1925,	// (0x0001f948) mup2_volume_cont_pane_g1

0x0e50,	// (0x0001ee73) aid_size_cell_touch_ParamLimits

0x0e50,	// (0x0001ee73) aid_size_cell_touch

0x10d8,	// (0x0001f0fb) touch_pane_ParamLimits

0x10d8,	// (0x0001f0fb) touch_pane

0x10ce,	// (0x0001f0f1) main_rss2_pane

0xc545,	// (0x0002a568) listscroll_rss2_pane

0xc54e,	// (0x0002a571) rss2_navigation_pane

0xc556,	// (0x0002a579) list_rss2_pane

0xad15,	// (0x00028d38) scroll_pane_cp22

0xc55e,	// (0x0002a581) rss2_navigation_pane_g1

0xc567,	// (0x0002a58a) rss2_navigation_pane_g2

0xc56f,	// (0x0002a592) rss2_navigation_pane_g3

0x0002,

0xf68c,	// (0x0002d6af) rss2_navigation_pane_g

0xc577,	// (0x0002a59a) rss2_navigation_pane_t1

0x5a35,	// (0x00023a58) rss2_list_single_pane_ParamLimits

0x5a35,	// (0x00023a58) rss2_list_single_pane

0xc585,	// (0x0002a5a8) rss2_list_single_pane_t2

0xc593,	// (0x0002a5b6) rss2_list_single_pane_t3_ParamLimits

0xc593,	// (0x0002a5b6) rss2_list_single_pane_t3

0xc5b0,	// (0x0002a5d3) rss2_list_single_pane_t4

0x44a3,	// (0x000224c6) smil_status_pane_g1

0x1528,	// (0x0001f54b) main_image2_pane_ParamLimits

0x1528,	// (0x0001f54b) main_image2_pane

0x1783,	// (0x0001f7a6) main_camera2_pane_g9_ParamLimits

0x1783,	// (0x0001f7a6) main_camera2_pane_g9

0x17d7,	// (0x0001f7fa) main_camera2_pane_t5_ParamLimits

0x17d7,	// (0x0001f7fa) main_camera2_pane_t5

0x17e9,	// (0x0001f80c) main_camera2_pane_t6_ParamLimits

0x17e9,	// (0x0001f80c) main_camera2_pane_t6

0x5a66,	// (0x00023a89) main_image2_pane_g1_ParamLimits

0x5a66,	// (0x00023a89) main_image2_pane_g1

0x5100,	// (0x00023123) smil2_video_pane_ParamLimits

0x5100,	// (0x00023123) smil2_video_pane

0x0e84,	// (0x0001eea7) aid_zoom_text_primary_cp

0x1075,	// (0x0001f098) popup_preview_fixed_window

0xa5f5,	// (0x00028618) im_reading_pane_g1

0x16cd,	// (0x0001f6f0) cams2_bc_adjust_pane_cp_ParamLimits

0x16cd,	// (0x0001f6f0) cams2_bc_adjust_pane_cp

0x1819,	// (0x0001f83c) cams2_bc_adjust_pane_ParamLimits

0x1819,	// (0x0001f83c) cams2_bc_adjust_pane

0xd8fa,	// (0x0002b91d) cams2_bc_adjust_pane_g1

0x195e,	// (0x0001f981) cams2_slider_pane

0x1967,	// (0x0001f98a) cams2_slider_pane_g1

0x1970,	// (0x0001f993) cams2_slider_pane_g2

0x0006,

0xf693,	// (0x0002d6b6) cams2_slider_pane_g

0x1149,	// (0x0001f16c) calc_display_pane_ParamLimits

0x1167,	// (0x0001f18a) calc_paper_pane_ParamLimits

0x1183,	// (0x0001f1a6) grid_calc_pane_ParamLimits

0x147c,	// (0x0001f49f) popup_clock_digital_window_t1_ParamLimits

0xb26c,	// (0x0002928f) main_image_pane_t1

0x112f,	// (0x0001f152) aid_size_cell_calc_ParamLimits

0x112f,	// (0x0001f152) aid_size_cell_calc

0x1559,	// (0x0001f57c) popup_blid_sat_info2_window_ParamLimits

0x1559,	// (0x0001f57c) popup_blid_sat_info2_window

0xc5c6,	// (0x0002a5e9) aid_size_cell_blid

0xc5ce,	// (0x0002a5f1) bg_popup_window_pane_cp07

0xc5f1,	// (0x0002a614) grid_popup_blid_pane

0xc5fb,	// (0x0002a61e) heading_pane_cp05_ParamLimits

0xc5fb,	// (0x0002a61e) heading_pane_cp05

0xc6c5,	// (0x0002a6e8) cell_popup_blid_pane_ParamLimits

0xc6c5,	// (0x0002a6e8) cell_popup_blid_pane

0xc6e9,	// (0x0002a70c) cell_popup_blid_pane_g1

0xc6fa,	// (0x0002a71d) cell_popup_blid_pane_t1

0x58ed,	// (0x00023910) mup2_indicator_pane_ParamLimits

0x58ed,	// (0x00023910) mup2_indicator_pane

0xa4fc,	// (0x0002851f) mup2_visualizer_osc_pane

0xc4a7,	// (0x0002a4ca) mup2_visualizer_spec_pane_ParamLimits

0xc4a7,	// (0x0002a4ca) mup2_visualizer_spec_pane

0x5a72,	// (0x00023a95) mup2_spec_half_pane

0x5a7b,	// (0x00023a9e) mup2_spec_half_pane_cp

0x5a85,	// (0x00023aa8) mup2_spec_bar_pane_ParamLimits

0x5a85,	// (0x00023aa8) mup2_spec_bar_pane

0xc43c,	// (0x0002a45f) mup2_spec_bar_pane_g1

0xc446,	// (0x0002a469) mup2_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0002d629) mup2_spec_bar_pane_g

0x5aa4,	// (0x00023ac7) mup2_osc_middle_pane

0xc458,	// (0x0002a47b) mup2_visualizer_osc_pane_g1

0x9c16,	// (0x00027c39) popup_number_entry_window_t1_ParamLimits

0x9c29,	// (0x00027c4c) popup_number_entry_window_t2_ParamLimits

0x9c3b,	// (0x00027c5e) popup_number_entry_window_t3_ParamLimits

0x272c,	// (0x0002074f) popup_number_entry_window_t5_ParamLimits

0x272c,	// (0x0002074f) popup_number_entry_window_t5

0xf0ca,	// (0x0002d0ed) popup_number_entry_window_t_ParamLimits

0x9c4d,	// (0x00027c70) text_title_cp2_ParamLimits

0x14bb,	// (0x0001f4de) aid_hotspot_pointer_text2_pane

0x1505,	// (0x0001f528) main_viewer_pane_g9_ParamLimits

0x1505,	// (0x0001f528) main_viewer_pane_g9

0xa82e,	// (0x00028851) cale_month_pane_t1_ParamLimits

0xa86b,	// (0x0002888e) bg_cale_pane_ParamLimits

0xa883,	// (0x000288a6) list_cale_pane_ParamLimits

0xa894,	// (0x000288b7) listscroll_cale_day_pane_t1

0xa8a6,	// (0x000288c9) scroll_pane_cp09_ParamLimits

0x4bbf,	// (0x00022be2) main_mup_eq_pane_t1_ParamLimits

0x4bbf,	// (0x00022be2) main_mup_eq_pane_t1

0x4bd9,	// (0x00022bfc) main_mup_eq_pane_t2_ParamLimits

0x4bd9,	// (0x00022bfc) main_mup_eq_pane_t2

0x4bf3,	// (0x00022c16) main_mup_eq_pane_t3_ParamLimits

0x4bf3,	// (0x00022c16) main_mup_eq_pane_t3

0x4c0b,	// (0x00022c2e) main_mup_eq_pane_t4_ParamLimits

0x4c0b,	// (0x00022c2e) main_mup_eq_pane_t4

0x4c23,	// (0x00022c46) main_mup_eq_pane_t5_ParamLimits

0x4c23,	// (0x00022c46) main_mup_eq_pane_t5

0x4c3b,	// (0x00022c5e) main_mup_eq_pane_t6_ParamLimits

0x4c3b,	// (0x00022c5e) main_mup_eq_pane_t6

0x4c4f,	// (0x00022c72) main_mup_eq_pane_t7_ParamLimits

0x4c4f,	// (0x00022c72) main_mup_eq_pane_t7

0x4c63,	// (0x00022c86) main_mup_eq_pane_t8_ParamLimits

0x4c63,	// (0x00022c86) main_mup_eq_pane_t8

0x4c79,	// (0x00022c9c) main_mup_eq_pane_t9_ParamLimits

0x4c79,	// (0x00022c9c) main_mup_eq_pane_t9

0x4c91,	// (0x00022cb4) main_mup_eq_pane_t10_ParamLimits

0x4c91,	// (0x00022cb4) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x0002d478) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x0002d478) main_mup_eq_pane_t

0x4d4e,	// (0x00022d71) mup_equalizer_pane_cp5_ParamLimits

0x4d64,	// (0x00022d87) mup_equalizer_pane_cp6_ParamLimits

0x4d7c,	// (0x00022d9f) mup_equalizer_pane_cp7_ParamLimits

0x10ce,	// (0x0001f0f1) main_gallery_pane

0xc461,	// (0x0002a484) smil2_volume_pane

0xc469,	// (0x0002a48c) smil_status_volume_pane_g1_ParamLimits

0xc47c,	// (0x0002a49f) smil_status_volume_pane_g2_ParamLimits

0x169d,	// (0x0001f6c0) smil_status_volume_pane_g3_ParamLimits

0xf60b,	// (0x0002d62e) smil_status_volume_pane_g_ParamLimits

0xc5ce,	// (0x0002a5f1) bg_popup_window_pane_cp07_ParamLimits

0xc5dc,	// (0x0002a5ff) blid_firmament_pane

0x5aad,	// (0x00023ad0) aid_size_cell_gallery_ParamLimits

0x5aad,	// (0x00023ad0) aid_size_cell_gallery

0x5abb,	// (0x00023ade) grid_gallery_pane_ParamLimits

0x5abb,	// (0x00023ade) grid_gallery_pane

0x5acb,	// (0x00023aee) cell_gallery_pane_ParamLimits

0x5acb,	// (0x00023aee) cell_gallery_pane

0xc708,	// (0x0002a72b) bg_cell_gallery_focus_pane_ParamLimits

0xc708,	// (0x0002a72b) bg_cell_gallery_focus_pane

0xc71a,	// (0x0002a73d) cell_gallery_pane_g1_ParamLimits

0xc71a,	// (0x0002a73d) cell_gallery_pane_g1

0x5b19,	// (0x00023b3c) cell_gallery_pane_g2_ParamLimits

0x5b19,	// (0x00023b3c) cell_gallery_pane_g2

0x5b26,	// (0x00023b49) cell_gallery_pane_g3_ParamLimits

0x5b26,	// (0x00023b49) cell_gallery_pane_g3

0xc726,	// (0x0002a749) cell_gallery_pane_g4_ParamLimits

0xc726,	// (0x0002a749) cell_gallery_pane_g4

0x0003,

0xf6b9,	// (0x0002d6dc) cell_gallery_pane_g_ParamLimits

0xf6b9,	// (0x0002d6dc) cell_gallery_pane_g

0xc732,	// (0x0002a755) bg_cell_gallery_focus_pane_g1

0xc73a,	// (0x0002a75d) bg_cell_gallery_focus_pane_g2

0xc742,	// (0x0002a765) bg_cell_gallery_focus_pane_g3

0xc74a,	// (0x0002a76d) bg_cell_gallery_focus_pane_g4

0xc752,	// (0x0002a775) bg_cell_gallery_focus_pane_g5

0xc75a,	// (0x0002a77d) bg_cell_gallery_focus_pane_g6

0xc762,	// (0x0002a785) bg_cell_gallery_focus_pane_g7

0xc76a,	// (0x0002a78d) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c2,	// (0x0002d6e5) bg_cell_gallery_focus_pane_g

0xc772,	// (0x0002a795) aid_firma_cardinal

0xc786,	// (0x0002a7a9) blid_firmament_pane_t1

0xc79d,	// (0x0002a7c0) blid_firmament_pane_t2

0xc7b4,	// (0x0002a7d7) blid_firmament_pane_t3

0xc7cb,	// (0x0002a7ee) blid_firmament_pane_t4

0x0003,

0xf6d3,	// (0x0002d6f6) blid_firmament_pane_t

0xc7e2,	// (0x0002a805) blid_sat_info_pane

0xc7f2,	// (0x0002a815) blid_sat_info_pane_g1

0xc7f2,	// (0x0002a815) blid_sat_info_pane_g2

0x0001,

0xf6dc,	// (0x0002d6ff) blid_sat_info_pane_g

0xc7fc,	// (0x0002a81f) blid_sat_info_pane_t1

0xc80a,	// (0x0002a82d) smil2_volume_content_pane

0xc813,	// (0x0002a836) smil2_volume_pane_g1

0xc6f1,	// (0x0002a714) smil2_volume_content_pane_g1

0xc81b,	// (0x0002a83e) smil2_volume_content_pane_g2

0xc824,	// (0x0002a847) smil2_volume_content_pane_g3

0xc82d,	// (0x0002a850) smil2_volume_content_pane_g4

0xc836,	// (0x0002a859) smil2_volume_content_pane_g5

0xc83f,	// (0x0002a862) smil2_volume_content_pane_g6

0xc848,	// (0x0002a86b) smil2_volume_content_pane_g7

0xc851,	// (0x0002a874) smil2_volume_content_pane_g8

0xc85a,	// (0x0002a87d) smil2_volume_content_pane_g9

0xc863,	// (0x0002a886) smil2_volume_content_pane_g10

0x0009,

0xf6e1,	// (0x0002d704) smil2_volume_content_pane_g

0x2d77,	// (0x00020d9a) cale_week_day_heading_pane_t1_ParamLimits

0x2db2,	// (0x00020dd5) cale_week_day_heading_pane_t2_ParamLimits

0x2ded,	// (0x00020e10) cale_week_day_heading_pane_t3_ParamLimits

0x2e28,	// (0x00020e4b) cale_week_day_heading_pane_t4_ParamLimits

0x2e63,	// (0x00020e86) cale_week_day_heading_pane_t5_ParamLimits

0x2e9e,	// (0x00020ec1) cale_week_day_heading_pane_t6_ParamLimits

0x2ed9,	// (0x00020efc) cale_week_day_heading_pane_t7_ParamLimits

0xf1d1,	// (0x0002d1f4) cale_week_day_heading_pane_t_ParamLimits

0xa4a1,	// (0x000284c4) bg_cale_side_pane_ParamLimits

0x12da,	// (0x0001f2fd) cale_week_time_pane_t1_ParamLimits

0x12f4,	// (0x0001f317) cale_week_time_pane_t2_ParamLimits

0x130e,	// (0x0001f331) cale_week_time_pane_t3_ParamLimits

0x1328,	// (0x0001f34b) cale_week_time_pane_t4_ParamLimits

0x1342,	// (0x0001f365) cale_week_time_pane_t5_ParamLimits

0x135c,	// (0x0001f37f) cale_week_time_pane_t6_ParamLimits

0x137c,	// (0x0001f39f) cale_week_time_pane_t7_ParamLimits

0x139e,	// (0x0001f3c1) cale_week_time_pane_t8_ParamLimits

0xf1e0,	// (0x0002d203) cale_week_time_pane_t_ParamLimits

0x2f14,	// (0x00020f37) cell_cale_week_pane_g2_ParamLimits

0xa4a1,	// (0x000284c4) bg_cale_side_pane_cp01_ParamLimits

0x42a6,	// (0x000222c9) cale_month_week_pane_t1_ParamLimits

0x42bf,	// (0x000222e2) cale_month_week_pane_t2_ParamLimits

0x42d8,	// (0x000222fb) cale_month_week_pane_t3_ParamLimits

0x42f1,	// (0x00022314) cale_month_week_pane_t4_ParamLimits

0x430a,	// (0x0002232d) cale_month_week_pane_t5_ParamLimits

0x432b,	// (0x0002234e) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x0002d2d8) cale_month_week_pane_t_ParamLimits

0x13cc,	// (0x0001f3ef) cell_cale_month_pane_g1_ParamLimits

0x10ce,	// (0x0001f0f1) main_cale_event_viewer_pane

0x9bec,	// (0x00027c0f) listscroll_cale_event_viewer_pane

0xc86c,	// (0x0002a88f) list_cale_ev_pane

0xc874,	// (0x0002a897) scroll_pane_cp023

0xc880,	// (0x0002a8a3) field_cale_ev_pane_ParamLimits

0xc880,	// (0x0002a8a3) field_cale_ev_pane

0xc89e,	// (0x0002a8c1) field_cale_ev_content_pane_ParamLimits

0xc89e,	// (0x0002a8c1) field_cale_ev_content_pane

0xc8aa,	// (0x0002a8cd) field_cale_ev_pane_g1_ParamLimits

0xc8aa,	// (0x0002a8cd) field_cale_ev_pane_g1

0xc8b6,	// (0x0002a8d9) field_cale_ev_pane_g2_ParamLimits

0xc8b6,	// (0x0002a8d9) field_cale_ev_pane_g2

0xc8ce,	// (0x0002a8f1) field_cale_ev_pane_g3_ParamLimits

0xc8ce,	// (0x0002a8f1) field_cale_ev_pane_g3

0x0002,

0xf6f6,	// (0x0002d719) field_cale_ev_pane_g_ParamLimits

0xf6f6,	// (0x0002d719) field_cale_ev_pane_g

0xc8e6,	// (0x0002a909) field_cale_ev_pane_t1_ParamLimits

0xc8e6,	// (0x0002a909) field_cale_ev_pane_t1

0xc8fd,	// (0x0002a920) field_cale_ev_content_pane_t1_ParamLimits

0xc8fd,	// (0x0002a920) field_cale_ev_content_pane_t1

0xb0d9,	// (0x000290fc) bg_button_pane_cp01

0x2b04,	// (0x00020b27) listscroll_cale_week_pane_ParamLimits

0xa44c,	// (0x0002846f) popup_toolbar_window_cp01

0xa472,	// (0x00028495) listscroll_cale_week_pane_t1_ParamLimits

0x2b04,	// (0x00020b27) listscroll_cale_day_pane_ParamLimits

0xa44c,	// (0x0002846f) popup_toolbar_window_cp02

0xa894,	// (0x000288b7) listscroll_cale_day_pane_t1_ParamLimits

0x2b04,	// (0x00020b27) main_cale_month_pane_ParamLimits

0x1660,	// (0x0001f683) popup_toolbar_window_cp03_ParamLimits

0x1660,	// (0x0001f683) popup_toolbar_window_cp03

0x5016,	// (0x00023039) main_image_pane_g2_ParamLimits

0x5016,	// (0x00023039) main_image_pane_g2

0x5022,	// (0x00023045) main_image_pane_g3_ParamLimits

0x5022,	// (0x00023045) main_image_pane_g3

0x0002,

0xf4e7,	// (0x0002d50a) main_image_pane_g_ParamLimits

0xf4e7,	// (0x0002d50a) main_image_pane_g

0xb26c,	// (0x0002928f) main_image_pane_t1_ParamLimits

0x502e,	// (0x00023051) main_image_pane_t2_ParamLimits

0x502e,	// (0x00023051) main_image_pane_t2

0x5040,	// (0x00023063) main_image_pane_t3_ParamLimits

0x5040,	// (0x00023063) main_image_pane_t3

0x5052,	// (0x00023075) main_image_pane_t4_ParamLimits

0x5052,	// (0x00023075) main_image_pane_t4

0x0003,

0xf4ee,	// (0x0002d511) main_image_pane_t_ParamLimits

0xf4ee,	// (0x0002d511) main_image_pane_t

0x5064,	// (0x00023087) popup_image_details_window_cp01

0x506e,	// (0x00023091) popup_toobar_trans_pane_cp01_ParamLimits

0x506e,	// (0x00023091) popup_toobar_trans_pane_cp01

0x15b0,	// (0x0001f5d3) popup_image_details_window_ParamLimits

0x15b0,	// (0x0001f5d3) popup_image_details_window

0x15be,	// (0x0001f5e1) popup_image_focus_window

0x16bf,	// (0x0001f6e2) camera2_autofocus_pane_ParamLimits

0x16bf,	// (0x0001f6e2) camera2_autofocus_pane

0x9bec,	// (0x00027c0f) bg_popup_sub_pane_cp06

0xc91b,	// (0x0002a93e) popup_image_focus_window_g1

0xc923,	// (0x0002a946) popup_image_focus_window_g2

0xc92b,	// (0x0002a94e) popup_image_focus_window_g3

0xc933,	// (0x0002a956) popup_image_focus_window_g4

0x0003,

0xf6fd,	// (0x0002d720) popup_image_focus_window_g

0xc93b,	// (0x0002a95e) popup_image_focus_window_t1

0xc949,	// (0x0002a96c) popup_image_focus_window_t2

0xc959,	// (0x0002a97c) popup_image_focus_window_t3

0x0002,

0xf706,	// (0x0002d729) popup_image_focus_window_t

0xc967,	// (0x0002a98a) camera2_autofocus_pane_g1

0xa329,	// (0x0002834c) bg_tb_trans_pane_cp01

0xc975,	// (0x0002a998) popup_image_details_window_g1

0xc988,	// (0x0002a9ab) popup_image_details_window_g2

0x0002,

0xf718,	// (0x0002d73b) popup_image_details_window_g

0xc9b1,	// (0x0002a9d4) popup_image_details_window_t1

0xc9c3,	// (0x0002a9e6) popup_image_details_window_t2

0xc9dc,	// (0x0002a9ff) popup_image_details_window_t3

0xc9f0,	// (0x0002aa13) popup_image_details_window_t4

0xca0b,	// (0x0002aa2e) popup_image_details_window_t5

0x0004,

0xf71f,	// (0x0002d742) popup_image_details_window_t

0xa315,	// (0x00028338) bg_calc_paper_pane_ParamLimits

0x10ce,	// (0x0001f0f1) grid_highlight_pane_cp013

0x11af,	// (0x0001f1d2) list_calc_pane_ParamLimits

0x11c1,	// (0x0001f1e4) scroll_pane_cp024

0xa337,	// (0x0002835a) bg_calc_display_pane_ParamLimits

0x11c9,	// (0x0001f1ec) calc_display_pane_t1_ParamLimits

0x11de,	// (0x0001f201) calc_display_pane_t2_ParamLimits

0x11f3,	// (0x0001f216) calc_display_pane_t3_ParamLimits

0xf151,	// (0x0002d174) calc_display_pane_t_ParamLimits

0x125c,	// (0x0001f27f) cell_calc_pane_g2

0x0001,

0xf16e,	// (0x0002d191) cell_calc_pane_g

0x1265,	// (0x0001f288) cell_calc_pane_t1

0xa396,	// (0x000283b9) grid_highlight_pane_cp02_ParamLimits

0xa3ac,	// (0x000283cf) toolbar_button_pane_cp01_ParamLimits

0xa3ac,	// (0x000283cf) toolbar_button_pane_cp01

0xb2b1,	// (0x000292d4) temp_image_control_pane_ParamLimits

0xb2b1,	// (0x000292d4) temp_image_control_pane

0x1528,	// (0x0001f54b) main_mp3_pane

0xca25,	// (0x0002aa48) temp_image_control_pane_g1_ParamLimits

0xca25,	// (0x0002aa48) temp_image_control_pane_g1

0xca33,	// (0x0002aa56) temp_image_control_pane_g2_ParamLimits

0xca33,	// (0x0002aa56) temp_image_control_pane_g2

0xca45,	// (0x0002aa68) temp_image_control_pane_g3_ParamLimits

0xca45,	// (0x0002aa68) temp_image_control_pane_g3

0x5b63,	// (0x00023b86) temp_image_control_pane_g4_ParamLimits

0x5b63,	// (0x00023b86) temp_image_control_pane_g4

0x0003,

0xf72a,	// (0x0002d74d) temp_image_control_pane_g_ParamLimits

0xf72a,	// (0x0002d74d) temp_image_control_pane_g

0xca25,	// (0x0002aa48) main_mp3_pane_g1

0x5b74,	// (0x00023b97) main_mp3_pane_g2

0x0007,

0xf733,	// (0x0002d756) main_mp3_pane_g

0xca88,	// (0x0002aaab) main_mp3_pane_t1

0xa504,	// (0x00028527) main_camera_pane_g8_ParamLimits

0xa504,	// (0x00028527) main_camera_pane_g8

0x3197,	// (0x000211ba) main_video_pane_g7_ParamLimits

0x3197,	// (0x000211ba) main_video_pane_g7

0x1807,	// (0x0001f82a) main_camera2_pane_t7_ParamLimits

0x1807,	// (0x0001f82a) main_camera2_pane_t7

0xa64c,	// (0x0002866f) scroll_pane_cp025_ParamLimits

0xa64c,	// (0x0002866f) scroll_pane_cp025

0xa660,	// (0x00028683) scroll_pane_cp026_ParamLimits

0xa660,	// (0x00028683) scroll_pane_cp026

0xa66f,	// (0x00028692) wml_content_pane_ParamLimits

0x10ce,	// (0x0001f0f1) main_touch_calib_pane

0x5c18,	// (0x00023c3b) main_touch_calib_pane_g1

0x5c24,	// (0x00023c47) main_touch_calib_pane_g2

0x5c30,	// (0x00023c53) main_touch_calib_pane_g3

0x5c3c,	// (0x00023c5f) main_touch_calib_pane_g4

0x0003,

0xf751,	// (0x0002d774) main_touch_calib_pane_g

0x5c48,	// (0x00023c6b) main_touch_calib_pane_t1

0x5c61,	// (0x00023c84) main_touch_calib_pane_t2

0x0004,

0xf75a,	// (0x0002d77d) main_touch_calib_pane_t

0xadf1,	// (0x00028e14) mup_progress_pane_cp02

0xae26,	// (0x00028e49) navi_pane_g1

0xaee1,	// (0x00028f04) navi_pane_mp_t3

0x1528,	// (0x0001f54b) main_mp3_pane_ParamLimits

0x559b,	// (0x000235be) navi_pane_ParamLimits

0xca25,	// (0x0002aa48) main_mp3_pane_g1_ParamLimits

0x5b74,	// (0x00023b97) main_mp3_pane_g2_ParamLimits

0x5b80,	// (0x00023ba3) main_mp3_pane_g3_ParamLimits

0x5b80,	// (0x00023ba3) main_mp3_pane_g3

0x5b8c,	// (0x00023baf) main_mp3_pane_g4_ParamLimits

0x5b8c,	// (0x00023baf) main_mp3_pane_g4

0xca55,	// (0x0002aa78) main_mp3_pane_g5_ParamLimits

0xca55,	// (0x0002aa78) main_mp3_pane_g5

0xca63,	// (0x0002aa86) main_mp3_pane_g6_ParamLimits

0xca63,	// (0x0002aa86) main_mp3_pane_g6

0xca70,	// (0x0002aa93) main_mp3_pane_g7_ParamLimits

0xca70,	// (0x0002aa93) main_mp3_pane_g7

0xca7c,	// (0x0002aa9f) main_mp3_pane_g8_ParamLimits

0xca7c,	// (0x0002aa9f) main_mp3_pane_g8

0xf733,	// (0x0002d756) main_mp3_pane_g_ParamLimits

0x5b98,	// (0x00023bbb) main_mp3_pane_t2

0x5ba8,	// (0x00023bcb) main_mp3_pane_t3

0xca96,	// (0x0002aab9) main_mp3_pane_t4

0xcaa4,	// (0x0002aac7) main_mp3_pane_t5

0x0005,

0xf744,	// (0x0002d767) main_mp3_pane_t

0xcab2,	// (0x0002aad5) mup_progress_pane_cp01

0x0e84,	// (0x0001eea7) aid_zoom_text_secondary2

0xc86c,	// (0x0002a88f) list_cale_ev2_pane

0xc874,	// (0x0002a897) scroll_pane_cp023_ParamLimits

0x5cbc,	// (0x00023cdf) field_cale_ev2_pane_ParamLimits

0x5cbc,	// (0x00023cdf) field_cale_ev2_pane

0x5ce5,	// (0x00023d08) field_cale_ev2_pane_g1_ParamLimits

0x5ce5,	// (0x00023d08) field_cale_ev2_pane_g1

0x5cf1,	// (0x00023d14) field_cale_ev2_pane_g2_ParamLimits

0x5cf1,	// (0x00023d14) field_cale_ev2_pane_g2

0x5d09,	// (0x00023d2c) field_cale_ev2_pane_g3_ParamLimits

0x5d09,	// (0x00023d2c) field_cale_ev2_pane_g3

0x0003,

0xf765,	// (0x0002d788) field_cale_ev2_pane_g_ParamLimits

0xf765,	// (0x0002d788) field_cale_ev2_pane_g

0x5d21,	// (0x00023d44) field_cale_ev2_pane_t1_ParamLimits

0x5d21,	// (0x00023d44) field_cale_ev2_pane_t1

0x5d38,	// (0x00023d5b) field_cale_ev2_pane_t2_ParamLimits

0x5d38,	// (0x00023d5b) field_cale_ev2_pane_t2

0x0001,

0xf76e,	// (0x0002d791) field_cale_ev2_pane_t_ParamLimits

0xf76e,	// (0x0002d791) field_cale_ev2_pane_t

0x4ef6,	// (0x00022f19) main_postcard_pane_g5_ParamLimits

0x4ef6,	// (0x00022f19) main_postcard_pane_g5

0x4f04,	// (0x00022f27) main_postcard_pane_g6_ParamLimits

0x4f04,	// (0x00022f27) main_postcard_pane_g6

0x2fe1,	// (0x00021004) camera2_autofocus_pane_cp_ParamLimits

0x2fe1,	// (0x00021004) camera2_autofocus_pane_cp

0x1528,	// (0x0001f54b) main_mup3_pane

0x5d4d,	// (0x00023d70) main_mup3_pane_g1_ParamLimits

0x5d4d,	// (0x00023d70) main_mup3_pane_g1

0x5d6e,	// (0x00023d91) main_mup3_pane_g2_ParamLimits

0x5d6e,	// (0x00023d91) main_mup3_pane_g2

0x5de6,	// (0x00023e09) main_mup3_pane_g3_ParamLimits

0x5de6,	// (0x00023e09) main_mup3_pane_g3

0x5e29,	// (0x00023e4c) main_mup3_pane_g4_ParamLimits

0x5e29,	// (0x00023e4c) main_mup3_pane_g4

0x5e6c,	// (0x00023e8f) main_mup3_pane_g5_ParamLimits

0x5e6c,	// (0x00023e8f) main_mup3_pane_g5

0x5eaf,	// (0x00023ed2) main_mup3_pane_g6_ParamLimits

0x5eaf,	// (0x00023ed2) main_mup3_pane_g6

0xcae6,	// (0x0002ab09) main_mup3_pane_g7_ParamLimits

0xcae6,	// (0x0002ab09) main_mup3_pane_g7

0x0007,

0xf77e,	// (0x0002d7a1) main_mup3_pane_g_ParamLimits

0xf77e,	// (0x0002d7a1) main_mup3_pane_g

0x5f25,	// (0x00023f48) main_mup3_pane_t1_ParamLimits

0x5f25,	// (0x00023f48) main_mup3_pane_t1

0x5f94,	// (0x00023fb7) main_mup3_pane_t2_ParamLimits

0x5f94,	// (0x00023fb7) main_mup3_pane_t2

0x605d,	// (0x00024080) main_mup3_pane_t4_ParamLimits

0x605d,	// (0x00024080) main_mup3_pane_t4

0x60ab,	// (0x000240ce) main_mup3_pane_t5_ParamLimits

0x60ab,	// (0x000240ce) main_mup3_pane_t5

0x615b,	// (0x0002417e) main_mup3_pane_t6_ParamLimits

0x615b,	// (0x0002417e) main_mup3_pane_t6

0x0005,

0xf78f,	// (0x0002d7b2) main_mup3_pane_t_ParamLimits

0xf78f,	// (0x0002d7b2) main_mup3_pane_t

0x6207,	// (0x0002422a) mup3_progress_pane_ParamLimits

0x6207,	// (0x0002422a) mup3_progress_pane

0x6285,	// (0x000242a8) popup_mup3_control_window_ParamLimits

0x6285,	// (0x000242a8) popup_mup3_control_window

0xcaf4,	// (0x0002ab17) popup_mup3_text_window

0x629e,	// (0x000242c1) mup3_progress_pane_t1

0x62bd,	// (0x000242e0) mup3_progress_pane_t2

0xcafc,	// (0x0002ab1f) mup3_progress_pane_t3

0x0002,

0xf79c,	// (0x0002d7bf) mup3_progress_pane_t

0xcb19,	// (0x0002ab3c) mup_progress_pane_cp03

0x9bec,	// (0x00027c0f) bg_tb_trans_pane_cp04

0x62dc,	// (0x000242ff) mup3_volume_pane

0x62e4,	// (0x00024307) popup_mup3_control_window_g1

0x62ed,	// (0x00024310) mup3_volume_pane_g1

0x62f6,	// (0x00024319) mup3_volume_pane_g2

0x62ff,	// (0x00024322) mup3_volume_pane_g3

0x0002,

0xf7a3,	// (0x0002d7c6) mup3_volume_pane_g

0x9bec,	// (0x00027c0f) bg_tb_trans_pane_cp03

0xcb29,	// (0x0002ab4c) popup_mup3_text_window_g1

0xcb31,	// (0x0002ab54) popup_mup3_text_window_t1

0xa37f,	// (0x000283a2) list_calc_item_pane_g1_ParamLimits

0xc53c,	// (0x0002a55f) mup_volume_pane_cp_g1

0x5c7a,	// (0x00023c9d) main_touch_calib_pane_t3

0x5c90,	// (0x00023cb3) main_touch_calib_pane_t4

0x5ca6,	// (0x00023cc9) main_touch_calib_pane_t5

0x0e3c,	// (0x0001ee5f) aid_cell_size_toolbar2

0x0e44,	// (0x0001ee67) aid_popup3_width_pane

0x0e84,	// (0x0001eea7) aid_zoom_text_msg_primary

0x2fc0,	// (0x00020fe3) vorec_t7

0xa343,	// (0x00028366) bg_calc_paper_pane_g1_ParamLimits

0xa34f,	// (0x00028372) bg_calc_paper_pane_g2_ParamLimits

0xa35b,	// (0x0002837e) bg_calc_paper_pane_g3_ParamLimits

0xa367,	// (0x0002838a) bg_calc_paper_pane_g4_ParamLimits

0xa373,	// (0x00028396) bg_calc_paper_pane_g5_ParamLimits

0x29b6,	// (0x000209d9) bg_calc_paper_pane_g6_ParamLimits

0x29c7,	// (0x000209ea) bg_calc_paper_pane_g7_ParamLimits

0x29d8,	// (0x000209fb) bg_calc_paper_pane_g8_ParamLimits

0xf158,	// (0x0002d17b) bg_calc_paper_pane_g_ParamLimits

0x29e9,	// (0x00020a0c) calc_bg_paper_pane_g9_ParamLimits

0x30c8,	// (0x000210eb) image_qvga_pane_ParamLimits

0x30c8,	// (0x000210eb) image_qvga_pane

0xa264,	// (0x00028287) bg_popup_sub_pane_cp04_ParamLimits

0xb1e8,	// (0x0002920b) popup_mup_playback_window_g1_ParamLimits

0xb1f4,	// (0x00029217) popup_mup_playback_window_t1_ParamLimits

0xb209,	// (0x0002922c) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x0002d505) popup_mup_playback_window_t_ParamLimits

0x57ed,	// (0x00023810) main_mup2_pane_g3_ParamLimits

0x57ed,	// (0x00023810) main_mup2_pane_g3

0x3494,	// (0x000214b7) popup_toolbar_window_cp04

0xb5eb,	// (0x0002960e) popup_call2_audio_second_window_g3_ParamLimits

0xb5eb,	// (0x0002960e) popup_call2_audio_second_window_g3

0xb9f5,	// (0x00029a18) popup_call2_audio_first_window_g4_ParamLimits

0xb9f5,	// (0x00029a18) popup_call2_audio_first_window_g4

0xc074,	// (0x0002a097) popup_call2_audio_in_window_g4_ParamLimits

0xc074,	// (0x0002a097) popup_call2_audio_in_window_g4

0x5009,	// (0x0002302c) aid_area_sk_bg_cut_ParamLimits

0x5009,	// (0x0002302c) aid_area_sk_bg_cut

0xb21e,	// (0x00029241) aid_area_sk_bg_cut_2_ParamLimits

0xb21e,	// (0x00029241) aid_area_sk_bg_cut_2

0x5b09,	// (0x00023b2c) aid_placing_details_win

0x5b11,	// (0x00023b34) aid_placing_details_win_2

0xc967,	// (0x0002a98a) camera2_autofocus_pane_g1_ParamLimits

0x1066,	// (0x0001f089) popup_fixed_preview_cale_window_ParamLimits

0x1066,	// (0x0001f089) popup_fixed_preview_cale_window

0xaf5f,	// (0x00028f82) navi_slider_pane_g3

0xaf68,	// (0x00028f8b) navi_slider_pane_g4

0xaf71,	// (0x00028f94) navi_slider_pane_g5

0xaf5f,	// (0x00028f82) navi_slider_pane_g6

0x14a2,	// (0x0001f4c5) navi_slider_pane_g7

0xb09e,	// (0x000290c1) mup_scale_pane_g3

0xb0a7,	// (0x000290ca) mup_scale_pane_g4

0xb0b0,	// (0x000290d3) mup_scale_pane_g5

0x4d94,	// (0x00022db7) mup_scale_pane_g6

0x4d9d,	// (0x00022dc0) mup_scale_pane_g7

0xaf5f,	// (0x00028f82) cams2_slider_pane_g3

0xc5be,	// (0x0002a5e1) cams2_slider_pane_g4

0x1979,	// (0x0001f99c) cams2_slider_pane_g5

0xaf5f,	// (0x00028f82) cams2_slider_pane_g6

0x1981,	// (0x0001f9a4) cams2_slider_pane_g7

0xc7f2,	// (0x0002a815) camera2_autofocus_pane_cp_g1

0xc3d5,	// (0x0002a3f8) bg_popup_preview_window_pane_cp02_ParamLimits

0xc3d5,	// (0x0002a3f8) bg_popup_preview_window_pane_cp02

0xcb3f,	// (0x0002ab62) list_fp_cale_pane_ParamLimits

0xcb3f,	// (0x0002ab62) list_fp_cale_pane

0xcb4b,	// (0x0002ab6e) popup_fixed_preview_cale_window_t1_ParamLimits

0xcb4b,	// (0x0002ab6e) popup_fixed_preview_cale_window_t1

0x6308,	// (0x0002432b) popup_fixed_preview_cale_window_t2_ParamLimits

0x6308,	// (0x0002432b) popup_fixed_preview_cale_window_t2

0x631d,	// (0x00024340) popup_fixed_preview_cale_window_t3_ParamLimits

0x631d,	// (0x00024340) popup_fixed_preview_cale_window_t3

0x0002,

0xf7aa,	// (0x0002d7cd) popup_fixed_preview_cale_window_t_ParamLimits

0xf7aa,	// (0x0002d7cd) popup_fixed_preview_cale_window_t

0x6332,	// (0x00024355) list_single_fp_cale_pane_ParamLimits

0x6332,	// (0x00024355) list_single_fp_cale_pane

0xcb69,	// (0x0002ab8c) list_single_fp_cale_pane_g1_ParamLimits

0xcb69,	// (0x0002ab8c) list_single_fp_cale_pane_g1

0xcb75,	// (0x0002ab98) list_single_fp_cale_pane_g2_ParamLimits

0xcb75,	// (0x0002ab98) list_single_fp_cale_pane_g2

0x0002,

0xf7b1,	// (0x0002d7d4) list_single_fp_cale_pane_g_ParamLimits

0xf7b1,	// (0x0002d7d4) list_single_fp_cale_pane_g

0xcb8e,	// (0x0002abb1) list_single_fp_cale_pane_t1_ParamLimits

0xcb8e,	// (0x0002abb1) list_single_fp_cale_pane_t1

0xcba0,	// (0x0002abc3) list_single_fp_cale_pane_t2_ParamLimits

0xcba0,	// (0x0002abc3) list_single_fp_cale_pane_t2

0x0001,

0xf7b8,	// (0x0002d7db) list_single_fp_cale_pane_t_ParamLimits

0xf7b8,	// (0x0002d7db) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x10ce,	// (0x0001f0f1) main_dialer_pane

0x6345,	// (0x00024368) aid_cell_size_keypad

0x634f,	// (0x00024372) dialer_ne_pane

0x6359,	// (0x0002437c) grid_dialer_command_1_pane

0x6361,	// (0x00024384) grid_dialer_command_2_pane

0x6369,	// (0x0002438c) grid_dialer_keypad_pane

0x637b,	// (0x0002439e) bg_popup_call_pane_cp06_ParamLimits

0x637b,	// (0x0002439e) bg_popup_call_pane_cp06

0x6387,	// (0x000243aa) dialer_ne_clear_pane_ParamLimits

0x6387,	// (0x000243aa) dialer_ne_clear_pane

0xcbd3,	// (0x0002abf6) dialer_ne_pane_g1

0xcbdb,	// (0x0002abfe) dialer_ne_pane_t1_ParamLimits

0xcbdb,	// (0x0002abfe) dialer_ne_pane_t1

0x6393,	// (0x000243b6) dialer_ne_pane_t2_ParamLimits

0x6393,	// (0x000243b6) dialer_ne_pane_t2

0x63b0,	// (0x000243d3) dialer_ne_pane_t3_ParamLimits

0x63b0,	// (0x000243d3) dialer_ne_pane_t3

0x0002,

0xf7bd,	// (0x0002d7e0) dialer_ne_pane_t_ParamLimits

0xf7bd,	// (0x0002d7e0) dialer_ne_pane_t

0x63d4,	// (0x000243f7) dialer_ne_pane_t3_copy1_ParamLimits

0x63d4,	// (0x000243f7) dialer_ne_pane_t3_copy1

0x63f8,	// (0x0002441b) cell_dialer_keypad_pane_ParamLimits

0x63f8,	// (0x0002441b) cell_dialer_keypad_pane

0x640f,	// (0x00024432) cell_dialer_command_1_pane_ParamLimits

0x640f,	// (0x00024432) cell_dialer_command_1_pane

0x6425,	// (0x00024448) cell_dialer_command_2_pane_ParamLimits

0x6425,	// (0x00024448) cell_dialer_command_2_pane

0xcbed,	// (0x0002ac10) bg_button_pane_cp02_ParamLimits

0xcbed,	// (0x0002ac10) bg_button_pane_cp02

0x6434,	// (0x00024457) cell_dialer_keypad_pane_g1_ParamLimits

0x6434,	// (0x00024457) cell_dialer_keypad_pane_g1

0xcbed,	// (0x0002ac10) bg_button_pane_cp03_ParamLimits

0xcbed,	// (0x0002ac10) bg_button_pane_cp03

0x6449,	// (0x0002446c) cell_dialer_command_1_pane_g1_ParamLimits

0x6449,	// (0x0002446c) cell_dialer_command_1_pane_g1

0xcbf9,	// (0x0002ac1c) bg_button_pane_cp04

0x645d,	// (0x00024480) cell_dialer_command_2_pane_g1

0xa4fc,	// (0x0002851f) bg_button_pane_cp06

0xcc01,	// (0x0002ac24) dialer_ne_clear_pane_g1

0xae32,	// (0x00028e55) navi_pane_g2

0xae60,	// (0x00028e83) navi_pane_g3

0x0002,

0xf3e5,	// (0x0002d408) navi_pane_g

0xaeef,	// (0x00028f12) navi_pane_mv_g2

0xaf16,	// (0x00028f39) navi_pane_mv_g5

0x4930,	// (0x00022953) navi_pane_mv_t1

0xa337,	// (0x0002835a) main_clock2_pane

0x649b,	// (0x000244be) main_clock2_list_pane_ParamLimits

0x649b,	// (0x000244be) main_clock2_list_pane

0x64c3,	// (0x000244e6) main_clock2_pane_t1_ParamLimits

0x64c3,	// (0x000244e6) main_clock2_pane_t1

0x64e5,	// (0x00024508) main_clock2_pane_t2_ParamLimits

0x64e5,	// (0x00024508) main_clock2_pane_t2

0x0004,

0xf7c9,	// (0x0002d7ec) main_clock2_pane_t_ParamLimits

0xf7c9,	// (0x0002d7ec) main_clock2_pane_t

0x6540,	// (0x00024563) popup_clock_analogue_window_cp03_ParamLimits

0x6540,	// (0x00024563) popup_clock_analogue_window_cp03

0x655e,	// (0x00024581) popup_clock_digital_window_cp02_ParamLimits

0x655e,	// (0x00024581) popup_clock_digital_window_cp02

0x65cb,	// (0x000245ee) main_clock2_list_single_pane_ParamLimits

0x65cb,	// (0x000245ee) main_clock2_list_single_pane

0xa4fc,	// (0x0002851f) list_highlight_pane_cp05

0xcc3f,	// (0x0002ac62) main_clock2_list_single_pane_t1

0x3494,	// (0x000214b7) popup_toolbar_window_cp04_ParamLimits

0x5b33,	// (0x00023b56) camera2_autofocus_pane_g2_ParamLimits

0x5b33,	// (0x00023b56) camera2_autofocus_pane_g2

0x5b3f,	// (0x00023b62) camera2_autofocus_pane_g3_ParamLimits

0x5b3f,	// (0x00023b62) camera2_autofocus_pane_g3

0x5b4b,	// (0x00023b6e) camera2_autofocus_pane_g4_ParamLimits

0x5b4b,	// (0x00023b6e) camera2_autofocus_pane_g4

0x5b57,	// (0x00023b7a) camera2_autofocus_pane_g5_ParamLimits

0x5b57,	// (0x00023b7a) camera2_autofocus_pane_g5

0x0004,

0xf70d,	// (0x0002d730) camera2_autofocus_pane_g_ParamLimits

0xf70d,	// (0x0002d730) camera2_autofocus_pane_g

0xcac6,	// (0x0002aae9) camera2_autofocus_pane_cp_g2

0xcace,	// (0x0002aaf1) camera2_autofocus_pane_cp_g3

0xcad6,	// (0x0002aaf9) camera2_autofocus_pane_cp_g4

0xcade,	// (0x0002ab01) camera2_autofocus_pane_cp_g5

0x0004,

0xf773,	// (0x0002d796) camera2_autofocus_pane_cp_g

0x6373,	// (0x00024396) popup_dialer_spcha_window

0x9bec,	// (0x00027c0f) bg_popup_sub_pane_cp07

0xcc4d,	// (0x0002ac70) list_spcha_pane

0xcc55,	// (0x0002ac78) list_single_spcha_pane_ParamLimits

0xcc55,	// (0x0002ac78) list_single_spcha_pane

0x9bec,	// (0x00027c0f) list_highlight_pane_cp06

0xcc66,	// (0x0002ac89) list_single_spcha_pane_t1

0xbe1e,	// (0x00029e41) popup_call2_audio_out_window_g4_ParamLimits

0xbe1e,	// (0x00029e41) popup_call2_audio_out_window_g4

0x10ce,	// (0x0001f0f1) main_imed2_pane

0x15c6,	// (0x0001f5e9) popup_imed_adjust2_window

0x15d9,	// (0x0001f5fc) popup_imed_trans_window_ParamLimits

0x15d9,	// (0x0001f5fc) popup_imed_trans_window

0xc627,	// (0x0002a64a) popup_blid_sat_info2_window_t1

0xc635,	// (0x0002a658) popup_blid_sat_info2_window_t2

0x000a,

0xf6a2,	// (0x0002d6c5) popup_blid_sat_info2_window_t

0x65fd,	// (0x00024620) aid_size_cell_colour_35

0x6617,	// (0x0002463a) aid_size_cell_colour_112

0x662e,	// (0x00024651) aid_size_cell_effect

0xa329,	// (0x0002834c) bg_tb_trans_pane_cp02

0xafec,	// (0x0002900f) heading_imed_pane

0x6648,	// (0x0002466b) listscroll_imed_pane

0xcc74,	// (0x0002ac97) heading_imed_pane_g1

0xcc7c,	// (0x0002ac9f) heading_imed_pane_t1

0xcc8a,	// (0x0002acad) grid_imed_colour_35_pane_ParamLimits

0xcc8a,	// (0x0002acad) grid_imed_colour_35_pane

0x6654,	// (0x00024677) grid_imed_effect_pane

0xcca1,	// (0x0002acc4) list_imed_aspect_pane

0x6664,	// (0x00024687) scroll_pane_cp027_ParamLimits

0x6664,	// (0x00024687) scroll_pane_cp027

0x6670,	// (0x00024693) cell_imed_effect_pane_ParamLimits

0x6670,	// (0x00024693) cell_imed_effect_pane

0xcca9,	// (0x0002accc) cell_imed_colour_pane_ParamLimits

0xcca9,	// (0x0002accc) cell_imed_colour_pane

0xcceb,	// (0x0002ad0e) cell_imed_colour_pane_g1_ParamLimits

0xcceb,	// (0x0002ad0e) cell_imed_colour_pane_g1

0xccfc,	// (0x0002ad1f) hgihlgiht_grid_pane_cp016_ParamLimits

0xccfc,	// (0x0002ad1f) hgihlgiht_grid_pane_cp016

0x6688,	// (0x000246ab) cell_imed_effect_pane_g1

0x6690,	// (0x000246b3) grid_highlight_pane_cp017

0xcd0d,	// (0x0002ad30) list_imed_single_pane_ParamLimits

0xcd0d,	// (0x0002ad30) list_imed_single_pane

0x9bec,	// (0x00027c0f) list_highlight_pane_cp07

0xcd22,	// (0x0002ad45) list_imed_aspect_pane_comp1_t1

0xc3e1,	// (0x0002a404) bg_tb_trans_pane_cp05

0xcd44,	// (0x0002ad67) popup_imed_adjust2_window_g1

0xcd6b,	// (0x0002ad8e) popup_imed_adjust2_window_t1

0xcd83,	// (0x0002ada6) slider_imed_adjust_pane

0xcd97,	// (0x0002adba) slider_imed_adjust_pane_g1

0xcda7,	// (0x0002adca) slider_imed_adjust_pane_g2

0xcdb7,	// (0x0002adda) slider_imed_adjust_pane_g3

0xcdc8,	// (0x0002adeb) slider_imed_adjust_pane_g4

0x0003,

0xf7e6,	// (0x0002d809) slider_imed_adjust_pane_g

0x6699,	// (0x000246bc) aid_size_cell_clipart2

0x66a5,	// (0x000246c8) grid_imed_clipart_pane

0xcdd9,	// (0x0002adfc) scroll_pane_cp031

0x66af,	// (0x000246d2) cell_imed_clipart_pane_ParamLimits

0x66af,	// (0x000246d2) cell_imed_clipart_pane

0x66d1,	// (0x000246f4) cell_imed_clipart_pane_g1

0x9bec,	// (0x00027c0f) grid_highlight_pane_cp014

0x64a7,	// (0x000244ca) main_clock2_pane_g1_ParamLimits

0x64a7,	// (0x000244ca) main_clock2_pane_g1

0x6576,	// (0x00024599) aid_call2_pane_cp10

0x6588,	// (0x000245ab) aid_call_pane_cp10

0xad93,	// (0x00028db6) popup_clock_analogue_window_cp10_g1

0xad93,	// (0x00028db6) popup_clock_analogue_window_cp10_g2

0x659a,	// (0x000245bd) popup_clock_analogue_window_cp10_g3

0x659a,	// (0x000245bd) popup_clock_analogue_window_cp10_g4

0xad93,	// (0x00028db6) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d4,	// (0x0002d7f7) popup_clock_analogue_window_cp10_g

0x65ac,	// (0x000245cf) popup_clock_analogue_window_cp10_t1

0x198a,	// (0x0001f9ad) clock_digital_number_pane_cp10_ParamLimits

0x198a,	// (0x0001f9ad) clock_digital_number_pane_cp10

0x19a2,	// (0x0001f9c5) clock_digital_number_pane_cp11_ParamLimits

0x19a2,	// (0x0001f9c5) clock_digital_number_pane_cp11

0x19ba,	// (0x0001f9dd) clock_digital_number_pane_cp12_ParamLimits

0x19ba,	// (0x0001f9dd) clock_digital_number_pane_cp12

0x19d2,	// (0x0001f9f5) clock_digital_number_pane_cp13_ParamLimits

0x19d2,	// (0x0001f9f5) clock_digital_number_pane_cp13

0x19ea,	// (0x0001fa0d) clock_digital_separator_pane_cp10_ParamLimits

0x19ea,	// (0x0001fa0d) clock_digital_separator_pane_cp10

0x65dd,	// (0x00024600) popup_clock_digital_window_cp02_t1_ParamLimits

0x65dd,	// (0x00024600) popup_clock_digital_window_cp02_t1

0xa25c,	// (0x0002827f) clock_digital_number_pane_cp10_g1

0xa25c,	// (0x0002827f) clock_digital_number_pane_cp10_g2

0x0001,

0xf7ef,	// (0x0002d812) clock_digital_number_pane_cp10_g

0xa25c,	// (0x0002827f) clock_digital_separator_pane_cp10_g1

0xa25c,	// (0x0002827f) clock_digital_separator_pane_g2_cp10

0xaf1e,	// (0x00028f41) navi_pane_vded_g4

0xaf27,	// (0x00028f4a) navi_pane_vded_g5

0xaf30,	// (0x00028f53) navi_pane_vded_t1

0x10ce,	// (0x0001f0f1) main_vded_pane

0x66da,	// (0x000246fd) main_vded_pane_g1

0x66e6,	// (0x00024709) main_vded_pane_g2

0x66f0,	// (0x00024713) main_vded_pane_g3

0x0002,

0xf7f4,	// (0x0002d817) main_vded_pane_g

0x66fa,	// (0x0002471d) main_vded_pane_t1

0x6708,	// (0x0002472b) main_vded_pane_t2

0x0001,

0xf7fb,	// (0x0002d81e) main_vded_pane_t

0x6716,	// (0x00024739) vded_slider_pane

0x6720,	// (0x00024743) vded_video_pane

0xcde1,	// (0x0002ae04) vded_video_pane_g1

0x672a,	// (0x0002474d) vded_video_pane_g2

0xc7f2,	// (0x0002a815) vded_video_pane_g3

0x0002,

0xf800,	// (0x0002d823) vded_video_pane_g

0xcdeb,	// (0x0002ae0e) vded_slider_pane_g1

0xc53c,	// (0x0002a55f) vded_slider_pane_g2

0xcdf4,	// (0x0002ae17) vded_slider_pane_g3

0xcdfd,	// (0x0002ae20) vded_slider_pane_g4

0xce06,	// (0x0002ae29) vded_slider_pane_g5

0x0004,

0xf807,	// (0x0002d82a) vded_slider_pane_g

0x6277,	// (0x0002429a) mup3_rocker_pane_ParamLimits

0x6277,	// (0x0002429a) mup3_rocker_pane

0x6733,	// (0x00024756) mup3_control_keys_pane_g1

0x673b,	// (0x0002475e) mup3_control_keys_pane_g2

0x6743,	// (0x00024766) mup3_control_keys_pane_g3

0x674b,	// (0x0002476e) mup3_control_keys_pane_g4

0x0003,

0xf812,	// (0x0002d835) mup3_control_keys_pane_g

0x108e,	// (0x0001f0b1) popup_toolbar2_fixed_window_cp01_ParamLimits

0x108e,	// (0x0001f0b1) popup_toolbar2_fixed_window_cp01

0x6291,	// (0x000242b4) popup_toolbar2_fixed_window_cp02_ParamLimits

0x6291,	// (0x000242b4) popup_toolbar2_fixed_window_cp02

0xb75d,	// (0x00029780) popup_call2_audio_second_window_t4_ParamLimits

0xb75d,	// (0x00029780) popup_call2_audio_second_window_t4

0xbc8b,	// (0x00029cae) popup_call2_audio_first_window_t6_ParamLimits

0xbc8b,	// (0x00029cae) popup_call2_audio_first_window_t6

0xbf21,	// (0x00029f44) popup_call2_audio_out_window_t6_ParamLimits

0xbf21,	// (0x00029f44) popup_call2_audio_out_window_t6

0x10ce,	// (0x0001f0f1) main_vitu_pane

0x675b,	// (0x0002477e) aid_size_cell_itu_ParamLimits

0x675b,	// (0x0002477e) aid_size_cell_itu

0xd230,	// (0x0002b253) bg_popup_window_pane_cp08_ParamLimits

0xd230,	// (0x0002b253) bg_popup_window_pane_cp08

0x6769,	// (0x0002478c) field_vitu_entry_pane_ParamLimits

0x6769,	// (0x0002478c) field_vitu_entry_pane

0x6778,	// (0x0002479b) grid_vitu_function_pane_ParamLimits

0x6778,	// (0x0002479b) grid_vitu_function_pane

0x6788,	// (0x000247ab) grid_vitu_itu_pane_ParamLimits

0x6788,	// (0x000247ab) grid_vitu_itu_pane

0x6798,	// (0x000247bb) cell_vitu_itu_pane_ParamLimits

0x6798,	// (0x000247bb) cell_vitu_itu_pane

0x67ad,	// (0x000247d0) cell_vitu_function_pane_ParamLimits

0x67ad,	// (0x000247d0) cell_vitu_function_pane

0xa329,	// (0x0002834c) bg_popup_sub_pane_cp08_ParamLimits

0xa329,	// (0x0002834c) bg_popup_sub_pane_cp08

0x67bf,	// (0x000247e2) field_vitu_entry_pane_t1_ParamLimits

0x67bf,	// (0x000247e2) field_vitu_entry_pane_t1

0xce27,	// (0x0002ae4a) field_vitu_entry_pane_t2_ParamLimits

0xce27,	// (0x0002ae4a) field_vitu_entry_pane_t2

0x0001,

0xf820,	// (0x0002d843) field_vitu_entry_pane_t_ParamLimits

0xf820,	// (0x0002d843) field_vitu_entry_pane_t

0xce44,	// (0x0002ae67) bg_button_pane_cp05_ParamLimits

0xce44,	// (0x0002ae67) bg_button_pane_cp05

0x67db,	// (0x000247fe) cell_vitu_itu_pane_g1

0x67f3,	// (0x00024816) cell_vitu_itu_pane_t1_ParamLimits

0x67f3,	// (0x00024816) cell_vitu_itu_pane_t1

0x6805,	// (0x00024828) cell_vitu_itu_pane_t2_ParamLimits

0x6805,	// (0x00024828) cell_vitu_itu_pane_t2

0x0002,

0xf825,	// (0x0002d848) cell_vitu_itu_pane_t_ParamLimits

0xf825,	// (0x0002d848) cell_vitu_itu_pane_t

0xce52,	// (0x0002ae75) bg_button_pane_cp07

0x683a,	// (0x0002485d) cell_vitu_function_pane_g1

0x11a7,	// (0x0001f1ca) main_calc_pane_g1

0x0e78,	// (0x0001ee9b) aid_visual_content_pane

0x10ce,	// (0x0001f0f1) main_vradio_pane

0x6843,	// (0x00024866) main_vradio_pane_g1_ParamLimits

0x6843,	// (0x00024866) main_vradio_pane_g1

0xce5c,	// (0x0002ae7f) main_vradio_pane_g2_ParamLimits

0xce5c,	// (0x0002ae7f) main_vradio_pane_g2

0x0001,

0xf82c,	// (0x0002d84f) main_vradio_pane_g_ParamLimits

0xf82c,	// (0x0002d84f) main_vradio_pane_g

0x6853,	// (0x00024876) main_vradio_pane_t1_ParamLimits

0x6853,	// (0x00024876) main_vradio_pane_t1

0x6865,	// (0x00024888) main_vradio_pane_t2_ParamLimits

0x6865,	// (0x00024888) main_vradio_pane_t2

0xce69,	// (0x0002ae8c) main_vradio_pane_t3_ParamLimits

0xce69,	// (0x0002ae8c) main_vradio_pane_t3

0x0002,

0xf831,	// (0x0002d854) main_vradio_pane_t_ParamLimits

0xf831,	// (0x0002d854) main_vradio_pane_t

0x6877,	// (0x0002489a) vradio_rocker_control_pane_ParamLimits

0x6877,	// (0x0002489a) vradio_rocker_control_pane

0x6883,	// (0x000248a6) vradio_station_info_pane_ParamLimits

0x6883,	// (0x000248a6) vradio_station_info_pane

0xce7d,	// (0x0002aea0) vradio_frequency_info_pane_ParamLimits

0xce7d,	// (0x0002aea0) vradio_frequency_info_pane

0xc7f2,	// (0x0002a815) vradio_station_info_pane_g1

0xce8c,	// (0x0002aeaf) vradio_station_info_pane_t1_ParamLimits

0xce8c,	// (0x0002aeaf) vradio_station_info_pane_t1

0xceae,	// (0x0002aed1) vradio_station_info_pane_t2_ParamLimits

0xceae,	// (0x0002aed1) vradio_station_info_pane_t2

0x0001,

0xf838,	// (0x0002d85b) vradio_station_info_pane_t_ParamLimits

0xf838,	// (0x0002d85b) vradio_station_info_pane_t

0xcec0,	// (0x0002aee3) vradio_tuning_pane

0xcec8,	// (0x0002aeeb) vradio_rocker_control_pane_g1

0xced0,	// (0x0002aef3) vradio_rocker_control_pane_g2

0xced8,	// (0x0002aefb) vradio_rocker_control_pane_g3

0xcee0,	// (0x0002af03) vradio_rocker_control_pane_g4

0xcee8,	// (0x0002af0b) vradio_rocker_control_pane_g5

0x0004,

0xf83d,	// (0x0002d860) vradio_rocker_control_pane_g

0x6892,	// (0x000248b5) vradio_frequency_info_pane_g1

0xcef0,	// (0x0002af13) vradio_frequency_info_pane_t1_ParamLimits

0xcef0,	// (0x0002af13) vradio_frequency_info_pane_t1

0x689c,	// (0x000248bf) vradio_tuning_pane_g1

0x68a5,	// (0x000248c8) vradio_tuning_pane_t1

0x0e94,	// (0x0001eeb7) area_side_right_pane_ParamLimits

0x0e94,	// (0x0001eeb7) area_side_right_pane

0xc39c,	// (0x0002a3bf) status_small_pane_g1

0xc3a4,	// (0x0002a3c7) status_small_pane_g2

0xc3ad,	// (0x0002a3d0) status_small_pane_g3

0xc3b6,	// (0x0002a3d9) status_small_pane_g4

0x0003,

0xf5f8,	// (0x0002d61b) status_small_pane_g

0xc3bf,	// (0x0002a3e2) status_small_pane_t1

0x10ce,	// (0x0001f0f1) main_video3_pane

0xcf04,	// (0x0002af27) cams_zoom_vslider_pane

0xcf0c,	// (0x0002af2f) image3_wide_pane_ParamLimits

0xcf0c,	// (0x0002af2f) image3_wide_pane

0xcf26,	// (0x0002af49) image3_wide_small_pane

0xcf32,	// (0x0002af55) main_video3_pane_g1_ParamLimits

0xcf32,	// (0x0002af55) main_video3_pane_g1

0xcf4e,	// (0x0002af71) main_video3_pane_g2_ParamLimits

0xcf4e,	// (0x0002af71) main_video3_pane_g2

0x0001,

0xf848,	// (0x0002d86b) main_video3_pane_g_ParamLimits

0xf848,	// (0x0002d86b) main_video3_pane_g

0xcf6a,	// (0x0002af8d) main_video3_pane_t1_ParamLimits

0xcf6a,	// (0x0002af8d) main_video3_pane_t1

0xcf95,	// (0x0002afb8) main_video3_pane_t2_ParamLimits

0xcf95,	// (0x0002afb8) main_video3_pane_t2

0xcfc0,	// (0x0002afe3) main_video3_pane_t3_ParamLimits

0xcfc0,	// (0x0002afe3) main_video3_pane_t3

0x0002,

0xf84d,	// (0x0002d870) main_video3_pane_t_ParamLimits

0xf84d,	// (0x0002d870) main_video3_pane_t

0xcfed,	// (0x0002b010) cams_zoom_vslider_pane_g1

0xcff6,	// (0x0002b019) cams_zoom_vslider_pane_g2

0x0001,

0xf854,	// (0x0002d877) cams_zoom_vslider_pane_g

0xcffe,	// (0x0002b021) small_slider_vertical_pane

0xc7f2,	// (0x0002a815) small_slider_vertical_pane_g1

0xc7f2,	// (0x0002a815) small_slider_vertical_pane_g2

0xd006,	// (0x0002b029) small_slider_vertical_pane_g3

0x0002,

0xf859,	// (0x0002d87c) small_slider_vertical_pane_g

0x10ce,	// (0x0001f0f1) main_hwr_training_pane

0xd00f,	// (0x0002b032) hwr_training_instruct_pane_ParamLimits

0xd00f,	// (0x0002b032) hwr_training_instruct_pane

0x68b4,	// (0x000248d7) hwr_training_navi_pane_ParamLimits

0x68b4,	// (0x000248d7) hwr_training_navi_pane

0x68ce,	// (0x000248f1) hwr_training_write_pane_ParamLimits

0x68ce,	// (0x000248f1) hwr_training_write_pane

0x9bec,	// (0x00027c0f) bg_frame_shadow_pane

0xd046,	// (0x0002b069) hwr_training_write_pane_g1

0xd04e,	// (0x0002b071) hwr_training_write_pane_g2

0xd056,	// (0x0002b079) hwr_training_write_pane_g3

0xd05e,	// (0x0002b081) hwr_training_write_pane_g4

0xd066,	// (0x0002b089) hwr_training_write_pane_g5

0xd06e,	// (0x0002b091) hwr_training_write_pane_g6

0xd076,	// (0x0002b099) hwr_training_write_pane_g7

0x0006,

0xf860,	// (0x0002d883) hwr_training_write_pane_g

0x1a02,	// (0x0001fa25) hwr_training_navi_pane_g1_ParamLimits

0x1a02,	// (0x0001fa25) hwr_training_navi_pane_g1

0x1a14,	// (0x0001fa37) hwr_training_navi_pane_g2_ParamLimits

0x1a14,	// (0x0001fa37) hwr_training_navi_pane_g2

0x1a26,	// (0x0001fa49) hwr_training_navi_pane_g3_ParamLimits

0x1a26,	// (0x0001fa49) hwr_training_navi_pane_g3

0x1a36,	// (0x0001fa59) hwr_training_navi_pane_g4_ParamLimits

0x1a36,	// (0x0001fa59) hwr_training_navi_pane_g4

0x0004,

0xf86f,	// (0x0002d892) hwr_training_navi_pane_g_ParamLimits

0xf86f,	// (0x0002d892) hwr_training_navi_pane_g

0x1a50,	// (0x0001fa73) hwr_training_navi_pane_t1

0x6906,	// (0x00024929) list_single_hwr_training_instruct_pane_ParamLimits

0x6906,	// (0x00024929) list_single_hwr_training_instruct_pane

0xd07e,	// (0x0002b0a1) list_single_hwr_training_instruct_pane_t1

0xc732,	// (0x0002a755) bg_frame_shadow_pane_g1

0xd08d,	// (0x0002b0b0) bg_frame_shadow_pane_g2

0xd095,	// (0x0002b0b8) bg_frame_shadow_pane_g3

0xd09d,	// (0x0002b0c0) bg_frame_shadow_pane_g4

0xd0a5,	// (0x0002b0c8) bg_frame_shadow_pane_g5

0xd0ad,	// (0x0002b0d0) bg_frame_shadow_pane_g6

0xd0b5,	// (0x0002b0d8) bg_frame_shadow_pane_g7

0xa3f0,	// (0x00028413) bg_frame_shadow_pane_g8

0x0007,

0xf87a,	// (0x0002d89d) bg_frame_shadow_pane_g

0x10ce,	// (0x0001f0f1) main_video_tele_dialer_pane

0x1a5e,	// (0x0001fa81) aid_size_cell_video_keypad_ParamLimits

0x1a5e,	// (0x0001fa81) aid_size_cell_video_keypad

0x1a6e,	// (0x0001fa91) grid_video_dialer_keypad_pane_ParamLimits

0x1a6e,	// (0x0001fa91) grid_video_dialer_keypad_pane

0x1aa2,	// (0x0001fac5) video_down_pane_cp_ParamLimits

0x1aa2,	// (0x0001fac5) video_down_pane_cp

0x1ab0,	// (0x0001fad3) cell_video_dialer_keypad_pane_ParamLimits

0x1ab0,	// (0x0001fad3) cell_video_dialer_keypad_pane

0xd0bd,	// (0x0002b0e0) bg_button_pane_cp08_ParamLimits

0xd0bd,	// (0x0002b0e0) bg_button_pane_cp08

0x6947,	// (0x0002496a) cell_video_dialer_keypad_pane_g1_ParamLimits

0x6947,	// (0x0002496a) cell_video_dialer_keypad_pane_g1

0x626b,	// (0x0002428e) mup3_rocker2_pane_ParamLimits

0x626b,	// (0x0002428e) mup3_rocker2_pane

0xc7f2,	// (0x0002a815) mup3_rocker2_pane_g1

0x1536,	// (0x0001f559) main_dialer2_pane

0x10ce,	// (0x0001f0f1) main_mp4_pane

0x1acd,	// (0x0001faf0) main_mp4_pane_g1_ParamLimits

0x1acd,	// (0x0001faf0) main_mp4_pane_g1

0x1adb,	// (0x0001fafe) main_mp4_pane_g2_ParamLimits

0x1adb,	// (0x0001fafe) main_mp4_pane_g2

0x1ae9,	// (0x0001fb0c) main_mp4_pane_g3_ParamLimits

0x1ae9,	// (0x0001fb0c) main_mp4_pane_g3

0x1b2e,	// (0x0001fb51) main_mp4_pane_g4_ParamLimits

0x1b2e,	// (0x0001fb51) main_mp4_pane_g4

0x1b56,	// (0x0001fb79) main_mp4_pane_g5_ParamLimits

0x1b56,	// (0x0001fb79) main_mp4_pane_g5

0x0005,

0xf89a,	// (0x0002d8bd) main_mp4_pane_g_ParamLimits

0xf89a,	// (0x0002d8bd) main_mp4_pane_g

0x1ba6,	// (0x0001fbc9) main_mp4_pane_t1_ParamLimits

0x1ba6,	// (0x0001fbc9) main_mp4_pane_t1

0x1c02,	// (0x0001fc25) main_mp4_pane_t2_ParamLimits

0x1c02,	// (0x0001fc25) main_mp4_pane_t2

0xd0c9,	// (0x0002b0ec) main_mp4_pane_t3_ParamLimits

0xd0c9,	// (0x0002b0ec) main_mp4_pane_t3

0x1c54,	// (0x0001fc77) main_mp4_pane_t4_ParamLimits

0x1c54,	// (0x0001fc77) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x0002d8ca) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x0002d8ca) main_mp4_pane_t

0x1c98,	// (0x0001fcbb) mp4_progress_pane_ParamLimits

0x1c98,	// (0x0001fcbb) mp4_progress_pane

0x1ce2,	// (0x0001fd05) mp4_rocker_pane_ParamLimits

0x1ce2,	// (0x0001fd05) mp4_rocker_pane

0xd0f1,	// (0x0002b114) mp4_progress_pane_t1

0xd10a,	// (0x0002b12d) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x0002d8d3) mp4_progress_pane_t

0xd123,	// (0x0002b146) mup_progress_pane_cp04

0xd96a,	// (0x0002b98d) mp4_rocker_pane_g1

0x1d02,	// (0x0001fd25) aid_cell_size_keypad2_ParamLimits

0x1d02,	// (0x0001fd25) aid_cell_size_keypad2

0x1d12,	// (0x0001fd35) dialer2_ne_pane_ParamLimits

0x1d12,	// (0x0001fd35) dialer2_ne_pane

0x1d20,	// (0x0001fd43) grid_dialer2_keypad_pane_ParamLimits

0x1d20,	// (0x0001fd43) grid_dialer2_keypad_pane

0xd23e,	// (0x0002b261) bg_popup_call_pane_cp07_ParamLimits

0xd23e,	// (0x0002b261) bg_popup_call_pane_cp07

0x697e,	// (0x000249a1) dialer2_ne_pane_t1_ParamLimits

0x697e,	// (0x000249a1) dialer2_ne_pane_t1

0x1d30,	// (0x0001fd53) cell_dialer2_keypad_pane_ParamLimits

0x1d30,	// (0x0001fd53) cell_dialer2_keypad_pane

0xd141,	// (0x0002b164) bg_button_pane_pane_cp04_ParamLimits

0xd141,	// (0x0002b164) bg_button_pane_pane_cp04

0x69a3,	// (0x000249c6) cell_dialer2_keypad_pane_g1_ParamLimits

0x69a3,	// (0x000249c6) cell_dialer2_keypad_pane_g1

0x3356,	// (0x00021379) aid_placing_vt_set_content_ParamLimits

0x3356,	// (0x00021379) aid_placing_vt_set_content

0x3382,	// (0x000213a5) aid_placing_vt_set_title_ParamLimits

0x3382,	// (0x000213a5) aid_placing_vt_set_title

0x10ce,	// (0x0001f0f1) main_image3_pane

0x1d77,	// (0x0001fd9a) area_side_right_pane_cp01_ParamLimits

0x1d77,	// (0x0001fd9a) area_side_right_pane_cp01

0x1da4,	// (0x0001fdc7) main_image3_pane_g1_ParamLimits

0x1da4,	// (0x0001fdc7) main_image3_pane_g1

0x1db2,	// (0x0001fdd5) main_image3_pane_g2_ParamLimits

0x1db2,	// (0x0001fdd5) main_image3_pane_g2

0x1dcb,	// (0x0001fdee) main_image3_pane_g3_ParamLimits

0x1dcb,	// (0x0001fdee) main_image3_pane_g3

0x1de4,	// (0x0001fe07) main_image3_pane_g4_ParamLimits

0x1de4,	// (0x0001fe07) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x0002d8e2) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x0002d8e2) main_image3_pane_g

0x1dfd,	// (0x0001fe20) main_image3_pane_t1_ParamLimits

0x1dfd,	// (0x0001fe20) main_image3_pane_t1

0x1e22,	// (0x0001fe45) main_image3_pane_t2_ParamLimits

0x1e22,	// (0x0001fe45) main_image3_pane_t2

0x1e41,	// (0x0001fe64) main_image3_pane_t3_ParamLimits

0x1e41,	// (0x0001fe64) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x0002d8eb) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x0002d8eb) main_image3_pane_t

0xd230,	// (0x0002b253) grid_sctrl_middle_pane_cp01_ParamLimits

0xd230,	// (0x0002b253) grid_sctrl_middle_pane_cp01

0x6a0b,	// (0x00024a2e) cell_sctrl_middle_pane_cp01_ParamLimits

0x6a0b,	// (0x00024a2e) cell_sctrl_middle_pane_cp01

0x6a1c,	// (0x00024a3f) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x6a1c,	// (0x00024a3f) cell_sctrl_middle_pane_cp01_g1

0x10ce,	// (0x0001f0f1) main_call4_pane

0x6a29,	// (0x00024a4c) aid_size_button_call4_ParamLimits

0x6a29,	// (0x00024a4c) aid_size_button_call4

0x6a59,	// (0x00024a7c) call4_windows_pane_ParamLimits

0x6a59,	// (0x00024a7c) call4_windows_pane

0x6a73,	// (0x00024a96) grid_call4_button_pane_ParamLimits

0x6a73,	// (0x00024a96) grid_call4_button_pane

0xd14d,	// (0x0002b170) call4_windows_conf_pane

0xd164,	// (0x0002b187) popup_call4_audio_first_window_ParamLimits

0xd164,	// (0x0002b187) popup_call4_audio_first_window

0xd1b0,	// (0x0002b1d3) popup_call4_audio_second_window_ParamLimits

0xd1b0,	// (0x0002b1d3) popup_call4_audio_second_window

0xd1c4,	// (0x0002b1e7) popup_call4_audio_wait_window_ParamLimits

0xd1c4,	// (0x0002b1e7) popup_call4_audio_wait_window

0x6a97,	// (0x00024aba) cell_call4_button_pane_ParamLimits

0x6a97,	// (0x00024aba) cell_call4_button_pane

0x6abc,	// (0x00024adf) bg_button_pane_cp09_ParamLimits

0x6abc,	// (0x00024adf) bg_button_pane_cp09

0x6ac8,	// (0x00024aeb) cell_call4_button_pane_g1_ParamLimits

0x6ac8,	// (0x00024aeb) cell_call4_button_pane_g1

0x6ad5,	// (0x00024af8) cell_call4_button_pane_t1_ParamLimits

0x6ad5,	// (0x00024af8) cell_call4_button_pane_t1

0xd20c,	// (0x0002b22f) popup_call4_audio_conf_window_ParamLimits

0xd20c,	// (0x0002b22f) popup_call4_audio_conf_window

0x629e,	// (0x000242c1) mup3_progress_pane_t1_ParamLimits

0x62bd,	// (0x000242e0) mup3_progress_pane_t2_ParamLimits

0xcafc,	// (0x0002ab1f) mup3_progress_pane_t3_ParamLimits

0xf79c,	// (0x0002d7bf) mup3_progress_pane_t_ParamLimits

0xcb19,	// (0x0002ab3c) mup_progress_pane_cp03_ParamLimits

0x6753,	// (0x00024776) mup3_control_keys_pane_g4_copy1

0x1cc6,	// (0x0001fce9) mp4_rocker2_pane_ParamLimits

0x1cc6,	// (0x0001fce9) mp4_rocker2_pane

0xd220,	// (0x0002b243) mp4_rocker2_pane_g1

0xd228,	// (0x0002b24b) mp4_rocker2_pane_g2

0x1ea2,	// (0x0001fec5) mp4_rocker2_pane_g3

0x1eaa,	// (0x0001fecd) mp4_rocker2_pane_g4

0x1eb2,	// (0x0001fed5) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x0002d8f4) mp4_rocker2_pane_g

0x10ce,	// (0x0001f0f1) main_camera4_pane

0x10ce,	// (0x0001f0f1) main_video4_pane

0x1a7e,	// (0x0001faa1) main_video_tele_dialer_pane_t1_ParamLimits

0x1a7e,	// (0x0001faa1) main_video_tele_dialer_pane_t1

0x1a90,	// (0x0001fab3) main_video_tele_dialer_pane_t2_ParamLimits

0x1a90,	// (0x0001fab3) main_video_tele_dialer_pane_t2

0x0001,

0xf88b,	// (0x0002d8ae) main_video_tele_dialer_pane_t_ParamLimits

0xf88b,	// (0x0002d8ae) main_video_tele_dialer_pane_t

0x1ed2,	// (0x0001fef5) cam4_autofocus_pane_ParamLimits

0x1ed2,	// (0x0001fef5) cam4_autofocus_pane

0x1eec,	// (0x0001ff0f) cam4_image_uncrop_pane_ParamLimits

0x1eec,	// (0x0001ff0f) cam4_image_uncrop_pane

0x1f03,	// (0x0001ff26) cam4_indicators_pane_ParamLimits

0x1f03,	// (0x0001ff26) cam4_indicators_pane

0x1f1f,	// (0x0001ff42) main_camera4_pane_g1_ParamLimits

0x1f1f,	// (0x0001ff42) main_camera4_pane_g1

0x1f2b,	// (0x0001ff4e) main_camera4_pane_g2_ParamLimits

0x1f2b,	// (0x0001ff4e) main_camera4_pane_g2

0x1f2b,	// (0x0001ff4e) main_camera4_pane_g3_ParamLimits

0x1f2b,	// (0x0001ff4e) main_camera4_pane_g3

0x1f37,	// (0x0001ff5a) main_camera4_pane_g4_ParamLimits

0x1f37,	// (0x0001ff5a) main_camera4_pane_g4

0x1f43,	// (0x0001ff66) main_camera4_pane_g5_ParamLimits

0x1f43,	// (0x0001ff66) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x0002d8ff) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x0002d8ff) main_camera4_pane_g

0x1f5d,	// (0x0001ff80) main_camera4_pane_t1_ParamLimits

0x1f5d,	// (0x0001ff80) main_camera4_pane_t1

0x1f81,	// (0x0001ffa4) bg_tb_trans_pane_cp06

0x1f97,	// (0x0001ffba) cam4_indicators_pane_g1

0x1fa8,	// (0x0001ffcb) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x0002d91a) cam4_indicators_pane_g

0x1fc6,	// (0x0001ffe9) cam4_indicators_pane_t1

0x1ff0,	// (0x00020013) main_video4_pane_g1_ParamLimits

0x1ff0,	// (0x00020013) main_video4_pane_g1

0x1ffc,	// (0x0002001f) main_video4_pane_g2_ParamLimits

0x1ffc,	// (0x0002001f) main_video4_pane_g2

0x2008,	// (0x0002002b) main_video4_pane_g3_ParamLimits

0x2008,	// (0x0002002b) main_video4_pane_g3

0x2014,	// (0x00020037) main_video4_pane_g4_ParamLimits

0x2014,	// (0x00020037) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x0002d921) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x0002d921) main_video4_pane_g

0x2034,	// (0x00020057) vid4_indicators_pane_ParamLimits

0x2034,	// (0x00020057) vid4_indicators_pane

0x2053,	// (0x00020076) video4_image_uncrop_cif_pane_ParamLimits

0x2053,	// (0x00020076) video4_image_uncrop_cif_pane

0x2062,	// (0x00020085) video4_image_uncrop_nhd_pane_ParamLimits

0x2062,	// (0x00020085) video4_image_uncrop_nhd_pane

0x1eec,	// (0x0001ff0f) video4_image_uncrop_vga_pane_ParamLimits

0x1eec,	// (0x0001ff0f) video4_image_uncrop_vga_pane

0x1528,	// (0x0001f54b) bg_tb_trans_pane_cp07

0x2079,	// (0x0002009c) vid4_indicators_pane_g1

0x208d,	// (0x000200b0) vid4_indicators_pane_g2

0x20a1,	// (0x000200c4) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x0002d92c) vid4_indicators_pane_g

0x20d0,	// (0x000200f3) vid4_indicators_pane_t1

0x6b0b,	// (0x00024b2e) cam4_autofocus_pane_g1

0x6b13,	// (0x00024b36) cam4_autofocus_pane_g2

0x6b1b,	// (0x00024b3e) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x0002d937) cam4_autofocus_pane_g

0x6b23,	// (0x00024b46) cam4_autofocus_pane_g3_copy1

0x692b,	// (0x0002494e) video_down_pane_cp_t1

0x6939,	// (0x0002495c) video_down_pane_cp_t2

0x0001,

0xf890,	// (0x0002d8b3) video_down_pane_cp_t

0x10c0,	// (0x0001f0e3) popup_vitu2_window_ParamLimits

0x10c0,	// (0x0001f0e3) popup_vitu2_window

0x20e7,	// (0x0002010a) aid_size_cell2_itu2_ParamLimits

0x20e7,	// (0x0002010a) aid_size_cell2_itu2

0x2109,	// (0x0002012c) aid_size_cell_itu2_ParamLimits

0x2109,	// (0x0002012c) aid_size_cell_itu2

0x214d,	// (0x00020170) bg_popup_window_pane_cp09_ParamLimits

0x214d,	// (0x00020170) bg_popup_window_pane_cp09

0x215b,	// (0x0002017e) field_vitu2_entry_pane_ParamLimits

0x215b,	// (0x0002017e) field_vitu2_entry_pane

0x217b,	// (0x0002019e) grid_vitu2_function_pane_ParamLimits

0x217b,	// (0x0002019e) grid_vitu2_function_pane

0x21bf,	// (0x000201e2) grid_vitu2_itu_pane_ParamLimits

0x21bf,	// (0x000201e2) grid_vitu2_itu_pane

0x223b,	// (0x0002025e) cell_vitu2_itu_pane_ParamLimits

0x223b,	// (0x0002025e) cell_vitu2_itu_pane

0x2254,	// (0x00020277) cell_vitu2_function_pane_ParamLimits

0x2254,	// (0x00020277) cell_vitu2_function_pane

0xd24c,	// (0x0002b26f) bg_popup_call_pane_cp08_ParamLimits

0xd24c,	// (0x0002b26f) bg_popup_call_pane_cp08

0xd263,	// (0x0002b286) field_vitu2_entry_pane_g1

0xd26f,	// (0x0002b292) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x0002d93e) field_vitu2_entry_pane_g

0x6b2b,	// (0x00024b4e) field_vitu2_entry_pane_t1_ParamLimits

0x6b2b,	// (0x00024b4e) field_vitu2_entry_pane_t1

0xd289,	// (0x0002b2ac) field_vitu2_entry_pane_t2_ParamLimits

0xd289,	// (0x0002b2ac) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x0002d945) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x0002d945) field_vitu2_entry_pane_t

0x2295,	// (0x000202b8) bg_button_pane_cp010_ParamLimits

0x2295,	// (0x000202b8) bg_button_pane_cp010

0x22a3,	// (0x000202c6) cell_vitu2_itu_pane_g1

0x22c3,	// (0x000202e6) cell_vitu2_itu_pane_t1_ParamLimits

0x22c3,	// (0x000202e6) cell_vitu2_itu_pane_t1

0x230f,	// (0x00020332) cell_vitu2_itu_pane_t2_ParamLimits

0x230f,	// (0x00020332) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x0002d94f) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x0002d94f) cell_vitu2_itu_pane_t

0x1528,	// (0x0001f54b) bg_button_pane_cp011

0x23d7,	// (0x000203fa) cell_vitu2_function_pane_g1

0x10ce,	// (0x0001f0f1) main_myfav_hc_pane

0x1e83,	// (0x0001fea6) popup_image3_note_pane_ParamLimits

0x1e83,	// (0x0001fea6) popup_image3_note_pane

0x1e91,	// (0x0001feb4) popup_image3_tool_bar_pane_ParamLimits

0x1e91,	// (0x0001feb4) popup_image3_tool_bar_pane

0x2385,	// (0x000203a8) cell_vitu2_itu_pane_t3_ParamLimits

0x2385,	// (0x000203a8) cell_vitu2_itu_pane_t3

0x9bec,	// (0x00027c0f) bg_popup_trans_pane

0xd2ae,	// (0x0002b2d1) grid_image3_tool_bar_pane

0xd2b8,	// (0x0002b2db) bg_popup_trans_pane_g1

0xa755,	// (0x00028778) bg_popup_trans_pane_g2

0xd2c0,	// (0x0002b2e3) bg_popup_trans_pane_g3

0xd2c8,	// (0x0002b2eb) bg_popup_trans_pane_g4

0xd2d0,	// (0x0002b2f3) bg_popup_trans_pane_g5

0xd2d8,	// (0x0002b2fb) bg_popup_trans_pane_g6

0xd2e0,	// (0x0002b303) bg_popup_trans_pane_g7

0xd2e8,	// (0x0002b30b) bg_popup_trans_pane_g8

0xa735,	// (0x00028758) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x0002d956) bg_popup_trans_pane_g

0xd2f0,	// (0x0002b313) cell_image3_tool_bar_pane_ParamLimits

0xd2f0,	// (0x0002b313) cell_image3_tool_bar_pane

0xc7f2,	// (0x0002a815) cell_image3_tool_bar_pane_g1

0x9bec,	// (0x00027c0f) bg_popup_trans_pane_cp1

0xd304,	// (0x0002b327) popup_image3_note_pane_t1

0xd312,	// (0x0002b335) popup_image3_note_pane_t2

0xd320,	// (0x0002b343) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x0002d969) popup_image3_note_pane_t

0xd32e,	// (0x0002b351) popup_image3_note_pane_t3_copy1

0x6b5b,	// (0x00024b7e) bg_myfav_hc_instruction_pane_ParamLimits

0x6b5b,	// (0x00024b7e) bg_myfav_hc_instruction_pane

0x6b73,	// (0x00024b96) cell_myfav_contact_pane_ParamLimits

0x6b73,	// (0x00024b96) cell_myfav_contact_pane

0x6b8d,	// (0x00024bb0) cell_myfav_contact_pane_cp1_ParamLimits

0x6b8d,	// (0x00024bb0) cell_myfav_contact_pane_cp1

0x6ba5,	// (0x00024bc8) cell_myfav_contact_pane_cp2_ParamLimits

0x6ba5,	// (0x00024bc8) cell_myfav_contact_pane_cp2

0x6bbd,	// (0x00024be0) cell_myfav_contact_pane_cp3_ParamLimits

0x6bbd,	// (0x00024be0) cell_myfav_contact_pane_cp3

0x6bd4,	// (0x00024bf7) cell_myfav_contact_pane_cp4_ParamLimits

0x6bd4,	// (0x00024bf7) cell_myfav_contact_pane_cp4

0x6bea,	// (0x00024c0d) cell_myfav_contact_pane_cp5_ParamLimits

0x6bea,	// (0x00024c0d) cell_myfav_contact_pane_cp5

0x6bfe,	// (0x00024c21) cell_myfav_contact_pane_cp6_ParamLimits

0x6bfe,	// (0x00024c21) cell_myfav_contact_pane_cp6

0x6c12,	// (0x00024c35) cell_myfav_contact_pane_cp7_ParamLimits

0x6c12,	// (0x00024c35) cell_myfav_contact_pane_cp7

0xd33c,	// (0x0002b35f) listscroll_gen_pane_cp05

0x6c2a,	// (0x00024c4d) main_myfav_hc_pane_g1_ParamLimits

0x6c2a,	// (0x00024c4d) main_myfav_hc_pane_g1

0x6c40,	// (0x00024c63) main_myfav_hc_pane_g2_ParamLimits

0x6c40,	// (0x00024c63) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x0002d970) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x0002d970) main_myfav_hc_pane_g

0x6c6e,	// (0x00024c91) main_myfav_hc_pane_t1_ParamLimits

0x6c6e,	// (0x00024c91) main_myfav_hc_pane_t1

0xd345,	// (0x0002b368) main_myfav_hc_pane_t2_ParamLimits

0xd345,	// (0x0002b368) main_myfav_hc_pane_t2

0xd357,	// (0x0002b37a) main_myfav_hc_pane_t3_ParamLimits

0xd357,	// (0x0002b37a) main_myfav_hc_pane_t3

0x6c85,	// (0x00024ca8) main_myfav_hc_pane_t4_ParamLimits

0x6c85,	// (0x00024ca8) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x0002d977) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x0002d977) main_myfav_hc_pane_t

0xc7f2,	// (0x0002a815) bg_myfav_hc_instruction_pane_g1

0xd369,	// (0x0002b38c) cell_myfav_contact_pane_g1_ParamLimits

0xd369,	// (0x0002b38c) cell_myfav_contact_pane_g1

0xd369,	// (0x0002b38c) cell_myfav_contact_pane_g2_ParamLimits

0xd369,	// (0x0002b38c) cell_myfav_contact_pane_g2

0xd375,	// (0x0002b398) cell_myfav_contact_pane_g3_ParamLimits

0xd375,	// (0x0002b398) cell_myfav_contact_pane_g3

0xcae6,	// (0x0002ab09) cell_myfav_contact_pane_g4_ParamLimits

0xcae6,	// (0x0002ab09) cell_myfav_contact_pane_g4

0xd382,	// (0x0002b3a5) cell_myfav_contact_pane_g5_ParamLimits

0xd382,	// (0x0002b3a5) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x0002d982) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x0002d982) cell_myfav_contact_pane_g

0x6c56,	// (0x00024c79) main_myfav_hc_pane_g3_ParamLimits

0x6c56,	// (0x00024c79) main_myfav_hc_pane_g3

0x0fc9,	// (0x0001efec) popup_adpt_find_window

0x6caf,	// (0x00024cd2) afind_page_pane_ParamLimits

0x6caf,	// (0x00024cd2) afind_page_pane

0x6cbc,	// (0x00024cdf) aid_size_cell_afind_ParamLimits

0x6cbc,	// (0x00024cdf) aid_size_cell_afind

0x6cd6,	// (0x00024cf9) bg_popup_sub_pane_cp09_ParamLimits

0x6cd6,	// (0x00024cf9) bg_popup_sub_pane_cp09

0x6ce3,	// (0x00024d06) find_pane_cp01_ParamLimits

0x6ce3,	// (0x00024d06) find_pane_cp01

0xd38e,	// (0x0002b3b1) grid_afind_control_pane_ParamLimits

0xd38e,	// (0x0002b3b1) grid_afind_control_pane

0x6cf0,	// (0x00024d13) grid_afind_pane_ParamLimits

0x6cf0,	// (0x00024d13) grid_afind_pane

0x6d0c,	// (0x00024d2f) cell_afind_pane_ParamLimits

0x6d0c,	// (0x00024d2f) cell_afind_pane

0xc7f2,	// (0x0002a815) afind_page_pane_g1

0x6d54,	// (0x00024d77) afind_page_pane_g2

0x6d5d,	// (0x00024d80) afind_page_pane_g3

0x0002,

0xf96a,	// (0x0002d98d) afind_page_pane_g

0x6d66,	// (0x00024d89) afind_page_pane_t1

0xd3a2,	// (0x0002b3c5) cell_afind_grid_control_pane_ParamLimits

0xd3a2,	// (0x0002b3c5) cell_afind_grid_control_pane

0xd141,	// (0x0002b164) bg_button_pane_cp69_ParamLimits

0xd141,	// (0x0002b164) bg_button_pane_cp69

0x6d86,	// (0x00024da9) cell_afind_pane_g1_ParamLimits

0x6d86,	// (0x00024da9) cell_afind_pane_g1

0x6d93,	// (0x00024db6) cell_afind_pane_t1_ParamLimits

0x6d93,	// (0x00024db6) cell_afind_pane_t1

0xa54e,	// (0x00028571) bg_button_pane_cp72

0xd3b1,	// (0x0002b3d4) cell_afind_grid_control_pane_g1

0x5130,	// (0x00023153) aid_image_placing_area_ParamLimits

0x5130,	// (0x00023153) aid_image_placing_area

0xce0f,	// (0x0002ae32) field_vitu_entry_pane_g1_ParamLimits

0xce0f,	// (0x0002ae32) field_vitu_entry_pane_g1

0xce1b,	// (0x0002ae3e) field_vitu_entry_pane_g2_ParamLimits

0xce1b,	// (0x0002ae3e) field_vitu_entry_pane_g2

0x0001,

0xf81b,	// (0x0002d83e) field_vitu_entry_pane_g_ParamLimits

0xf81b,	// (0x0002d83e) field_vitu_entry_pane_g

0x67db,	// (0x000247fe) cell_vitu_itu_pane_g1_ParamLimits

0x681d,	// (0x00024840) cell_vitu_itu_pane_t3_ParamLimits

0x681d,	// (0x00024840) cell_vitu_itu_pane_t3

0xd0f1,	// (0x0002b114) mp4_progress_pane_t1_ParamLimits

0xd10a,	// (0x0002b12d) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x0002d8d3) mp4_progress_pane_t_ParamLimits

0xd123,	// (0x0002b146) mup_progress_pane_cp04_ParamLimits

0x6c99,	// (0x00024cbc) main_myfav_hc_pane_t5_ParamLimits

0x6c99,	// (0x00024cbc) main_myfav_hc_pane_t5

0x0e8c,	// (0x0001eeaf) aid_zoom_text_primary

0x0fc9,	// (0x0001efec) popup_adpt_find_window_ParamLimits

0x1528,	// (0x0001f54b) main_cam_set_pane

0x1f11,	// (0x0001ff34) cam4_zoom_pane_ParamLimits

0x1f11,	// (0x0001ff34) cam4_zoom_pane

0x6da5,	// (0x00024dc8) main_cam_set_pane_g1_ParamLimits

0x6da5,	// (0x00024dc8) main_cam_set_pane_g1

0x6db3,	// (0x00024dd6) main_cam_set_pane_g2_ParamLimits

0x6db3,	// (0x00024dd6) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x0002d994) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x0002d994) main_cam_set_pane_g

0x6dbf,	// (0x00024de2) main_cam_set_pane_t1_ParamLimits

0x6dbf,	// (0x00024de2) main_cam_set_pane_t1

0x6ddb,	// (0x00024dfe) main_cset_listscroll_pane_ParamLimits

0x6ddb,	// (0x00024dfe) main_cset_listscroll_pane

0x6e06,	// (0x00024e29) main_cset_slider_pane_ParamLimits

0x6e06,	// (0x00024e29) main_cset_slider_pane

0xd3c2,	// (0x0002b3e5) main_cset_list_pane_ParamLimits

0xd3c2,	// (0x0002b3e5) main_cset_list_pane

0xd3d2,	// (0x0002b3f5) scroll_pane_cp028

0x6e25,	// (0x00024e48) aid_area_touch_slider

0x6e41,	// (0x00024e64) cset_slider_pane

0x6e6b,	// (0x00024e8e) main_cset_slider_pane_g1

0x6e80,	// (0x00024ea3) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x0002d999) main_cset_slider_pane_g

0xd40b,	// (0x0002b42e) main_cset_slider_pane_t1

0x6f42,	// (0x00024f65) main_cset_slider_pane_t2

0x6f5c,	// (0x00024f7f) main_cset_slider_pane_t3

0x6f76,	// (0x00024f99) main_cset_slider_pane_t4

0x6f90,	// (0x00024fb3) main_cset_slider_pane_t5

0x6fae,	// (0x00024fd1) main_cset_slider_pane_t6

0x6fc5,	// (0x00024fe8) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x0002d9be) main_cset_slider_pane_t

0x70d1,	// (0x000250f4) cset_list_set_pane_ParamLimits

0x70d1,	// (0x000250f4) cset_list_set_pane

0x70e7,	// (0x0002510a) aid_position_infowindow_above

0x70ef,	// (0x00025112) aid_position_infowindow_below

0xd4b7,	// (0x0002b4da) cset_list_set_pane_g1_ParamLimits

0xd4b7,	// (0x0002b4da) cset_list_set_pane_g1

0xd4c3,	// (0x0002b4e6) cset_list_set_pane_g3_ParamLimits

0xd4c3,	// (0x0002b4e6) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x0002d9dd) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x0002d9dd) cset_list_set_pane_g

0xd4d2,	// (0x0002b4f5) cset_list_set_pane_t1_ParamLimits

0xd4d2,	// (0x0002b4f5) cset_list_set_pane_t1

0xa329,	// (0x0002834c) list_highlight_pane_cp021_ParamLimits

0xa329,	// (0x0002834c) list_highlight_pane_cp021

0xb09e,	// (0x000290c1) cset_slider_pane_g1

0xb0b0,	// (0x000290d3) cset_slider_pane_g2

0xb0a7,	// (0x000290ca) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x0002d9e2) cset_slider_pane_g

0x23eb,	// (0x0002040e) aid_area_touch_cam4_zoom

0x23f3,	// (0x00020416) cam4_zoom_cont_pane

0x23fb,	// (0x0002041e) cam4_zoom_pane_g1

0x2403,	// (0x00020426) cam4_zoom_pane_g2

0x240b,	// (0x0002042e) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x0002d9e9) cam4_zoom_pane_g

0x2413,	// (0x00020436) cam4_zoom_cont_pane_g1

0x241c,	// (0x0002043f) cam4_zoom_cont_pane_g2

0x2425,	// (0x00020448) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x0002d9f0) cam4_zoom_cont_pane_g

0x6a43,	// (0x00024a66) call4_image_pane_ParamLimits

0x6a43,	// (0x00024a66) call4_image_pane

0xd14d,	// (0x0002b170) call4_windows_conf_pane_ParamLimits

0xd18e,	// (0x0002b1b1) popup_call4_audio_in_window_ParamLimits

0xd18e,	// (0x0002b1b1) popup_call4_audio_in_window

0x9bec,	// (0x00027c0f) bg_popup_call2_act_pane_cp02

0xd204,	// (0x0002b227) call4_list_conf_pane

0xc7f2,	// (0x0002a815) call4_image_pane_g1

0xc7f2,	// (0x0002a815) call4_image_pane_g2

0x0001,

0xf6dc,	// (0x0002d6ff) call4_image_pane_g

0xd4e7,	// (0x0002b50a) list_single_graphic_popup_conf4_pane_ParamLimits

0xd4e7,	// (0x0002b50a) list_single_graphic_popup_conf4_pane

0x9bec,	// (0x00027c0f) list_highlight_pane_cp022

0xd4fa,	// (0x0002b51d) list_single_graphic_popup_conf4_pane_g1

0xac63,	// (0x00028c86) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x0002d9f7) list_single_graphic_popup_conf4_pane_g

0xd502,	// (0x0002b525) list_single_graphic_popup_conf4_pane_t1

0x34e6,	// (0x00021509) popup_vtel_slider_window_ParamLimits

0x34e6,	// (0x00021509) popup_vtel_slider_window

0xd12f,	// (0x0002b152) dialer2_ne_pane_t2_ParamLimits

0xd12f,	// (0x0002b152) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x0002d8d8) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x0002d8d8) dialer2_ne_pane_t

0xa329,	// (0x0002834c) bg_popup_sub_pane_cp010_ParamLimits

0xa329,	// (0x0002834c) bg_popup_sub_pane_cp010

0x70f7,	// (0x0002511a) popup_vtel_slider_window_g1_ParamLimits

0x70f7,	// (0x0002511a) popup_vtel_slider_window_g1

0x7103,	// (0x00025126) popup_vtel_slider_window_g2_ParamLimits

0x7103,	// (0x00025126) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x0002d9fc) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x0002d9fc) popup_vtel_slider_window_g

0x714b,	// (0x0002516e) vtel_slider_pane_ParamLimits

0x714b,	// (0x0002516e) vtel_slider_pane

0x715a,	// (0x0002517d) vtel_slider_pane_g1_ParamLimits

0x715a,	// (0x0002517d) vtel_slider_pane_g1

0x7167,	// (0x0002518a) vtel_slider_pane_g2_ParamLimits

0x7167,	// (0x0002518a) vtel_slider_pane_g2

0x7174,	// (0x00025197) vtel_slider_pane_g3_ParamLimits

0x7174,	// (0x00025197) vtel_slider_pane_g3

0x715a,	// (0x0002517d) vtel_slider_pane_g4_ParamLimits

0x715a,	// (0x0002517d) vtel_slider_pane_g4

0x7181,	// (0x000251a4) vtel_slider_pane_g5_ParamLimits

0x7181,	// (0x000251a4) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x0002da05) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x0002da05) vtel_slider_pane_g

0x1528,	// (0x0001f54b) main_gallery2_pane

0x212f,	// (0x00020152) aid_size_row_itut2_dropdow_list_ParamLimits

0x212f,	// (0x00020152) aid_size_row_itut2_dropdow_list

0x219d,	// (0x000201c0) grid_vitu2_function_top_pane_ParamLimits

0x219d,	// (0x000201c0) grid_vitu2_function_top_pane

0x21f7,	// (0x0002021a) popup_vitu2_dropdown_list_window_ParamLimits

0x21f7,	// (0x0002021a) popup_vitu2_dropdown_list_window

0x2217,	// (0x0002023a) popup_vitu2_match_list_window

0x242e,	// (0x00020451) cell_vitu2_function_top_pane_ParamLimits

0x242e,	// (0x00020451) cell_vitu2_function_top_pane

0x2448,	// (0x0002046b) cell_vitu2_function_top_pane_cp01_ParamLimits

0x2448,	// (0x0002046b) cell_vitu2_function_top_pane_cp01

0x2464,	// (0x00020487) cell_vitu2_function_top_wide_pane_ParamLimits

0x2464,	// (0x00020487) cell_vitu2_function_top_wide_pane

0x1528,	// (0x0001f54b) bg_button_pane_cp012

0x2480,	// (0x000204a3) cell_vitu2_function_top_pane_g1

0x2494,	// (0x000204b7) bg_button_pane_cp013_ParamLimits

0x2494,	// (0x000204b7) bg_button_pane_cp013

0x719c,	// (0x000251bf) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x719c,	// (0x000251bf) cell_vitu2_function_top_wide_pane_g1

0x10c0,	// (0x0001f0e3) bg_popup_sub_pane_cp20

0x24b0,	// (0x000204d3) list_vitu2_match_list_pane

0xd2b8,	// (0x0002b2db) bg_popup_sub_pane_cp20_g1

0xd2c0,	// (0x0002b2e3) bg_popup_sub_pane_cp20_g2

0xa755,	// (0x00028778) bg_popup_sub_pane_cp20_g3

0xd2c8,	// (0x0002b2eb) bg_popup_sub_pane_cp20_g4

0xa735,	// (0x00028758) bg_popup_sub_pane_cp20_g5

0xd518,	// (0x0002b53b) bg_popup_sub_pane_cp20_g6

0xd2d8,	// (0x0002b2fb) bg_popup_sub_pane_cp20_g7

0xd2e0,	// (0x0002b303) bg_popup_sub_pane_cp20_g8

0xd2e8,	// (0x0002b30b) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x0002da10) bg_popup_sub_pane_cp20_g

0x24c8,	// (0x000204eb) list_vitu2_match_list_item_pane_ParamLimits

0x24c8,	// (0x000204eb) list_vitu2_match_list_item_pane

0x24da,	// (0x000204fd) list_vitu2_match_list_item_pane_t1

0x10ce,	// (0x0001f0f1) bg_popup_sub_pane_cp21

0x24e8,	// (0x0002050b) grid_vitu2_dropdown_list_pane

0x24f0,	// (0x00020513) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x24f0,	// (0x00020513) cell_vitu2_dropdown_list_char_pane

0x2511,	// (0x00020534) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x2511,	// (0x00020534) cell_vitu2_dropdown_list_ctrl_pane

0xd520,	// (0x0002b543) cell_vitu2_dropdown_list_char_pane_g1

0xd529,	// (0x0002b54c) cell_vitu2_dropdown_list_char_pane_g2

0xd532,	// (0x0002b555) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x0002da2d) cell_vitu2_dropdown_list_char_pane_g

0x253d,	// (0x00020560) cell_vitu2_dropdown_list_char_pane_t1

0x71fc,	// (0x0002521f) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x71fc,	// (0x0002521f) cell_vitu2_dropdown_list_ctrl_pane_g1

0x720c,	// (0x0002522f) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x720c,	// (0x0002522f) cell_vitu2_dropdown_list_ctrl_pane_g2

0x721d,	// (0x00025240) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x721d,	// (0x00025240) cell_vitu2_dropdown_list_ctrl_pane_g3

0x254b,	// (0x0002056e) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x254b,	// (0x0002056e) cell_vitu2_dropdown_list_ctrl_pane_g4

0x1f81,	// (0x0001ffa4) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x1f81,	// (0x0001ffa4) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x0002da34) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x0002da34) cell_vitu2_dropdown_list_ctrl_pane_g

0x722d,	// (0x00025250) aid_size_cell_gallery2_ParamLimits

0x722d,	// (0x00025250) aid_size_cell_gallery2

0x7247,	// (0x0002526a) grid_gallery2_pane_ParamLimits

0x7247,	// (0x0002526a) grid_gallery2_pane

0x6664,	// (0x00024687) scroll_pane_cp029_ParamLimits

0x6664,	// (0x00024687) scroll_pane_cp029

0x725e,	// (0x00025281) cell_gallery2_pane_ParamLimits

0x725e,	// (0x00025281) cell_gallery2_pane

0xd53b,	// (0x0002b55e) cell_gallery2_pane_g2

0xe967,	// (0x0002c98a) cell_gallery2_pane_g3

0xd543,	// (0x0002b566) cell_gallery2_pane_g4

0xd54b,	// (0x0002b56e) cell_gallery2_pane_g5

0xa4fc,	// (0x0002851f) grid_highlight_pane_cp10

0x2217,	// (0x0002023a) popup_vitu2_match_list_window_ParamLimits

0x222b,	// (0x0002024e) popup_vitu2_query_window_ParamLimits

0x222b,	// (0x0002024e) popup_vitu2_query_window

0x10ce,	// (0x0001f0f1) bg_vitu2_candi_button_pane

0xd520,	// (0x0002b543) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd529,	// (0x0002b54c) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd532,	// (0x0002b555) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x72b0,	// (0x000252d3) bg_button_pane_cp015

0x72c2,	// (0x000252e5) bg_button_pane_cp016

0x72d5,	// (0x000252f8) bg_button_pane_cp017

0xc3e1,	// (0x0002a404) bg_popup_sub_pane_cp22

0xd553,	// (0x0002b576) popup_vitu2_query_window_g1

0x731a,	// (0x0002533d) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x0002da3f) popup_vitu2_query_window_g

0x7337,	// (0x0002535a) popup_vitu2_query_window_t1_ParamLimits

0x7337,	// (0x0002535a) popup_vitu2_query_window_t1

0x736a,	// (0x0002538d) popup_vitu2_query_window_t2_ParamLimits

0x736a,	// (0x0002538d) popup_vitu2_query_window_t2

0x737c,	// (0x0002539f) popup_vitu2_query_window_t3_ParamLimits

0x737c,	// (0x0002539f) popup_vitu2_query_window_t3

0x73a4,	// (0x000253c7) popup_vitu2_query_window_t4_ParamLimits

0x73a4,	// (0x000253c7) popup_vitu2_query_window_t4

0x73c5,	// (0x000253e8) popup_vitu2_query_window_t5_ParamLimits

0x73c5,	// (0x000253e8) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x0002da46) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x0002da46) popup_vitu2_query_window_t

0xd3ba,	// (0x0002b3dd) main_cset_text_pane

0x6e25,	// (0x00024e48) aid_area_touch_slider_ParamLimits

0x6e41,	// (0x00024e64) cset_slider_pane_ParamLimits

0x6e6b,	// (0x00024e8e) main_cset_slider_pane_g1_ParamLimits

0x6e80,	// (0x00024ea3) main_cset_slider_pane_g2_ParamLimits

0xd3db,	// (0x0002b3fe) main_cset_slider_pane_g3_ParamLimits

0xd3db,	// (0x0002b3fe) main_cset_slider_pane_g3

0x6e95,	// (0x00024eb8) main_cset_slider_pane_g4_ParamLimits

0x6e95,	// (0x00024eb8) main_cset_slider_pane_g4

0x6ea4,	// (0x00024ec7) main_cset_slider_pane_g5_ParamLimits

0x6ea4,	// (0x00024ec7) main_cset_slider_pane_g5

0x6eb2,	// (0x00024ed5) main_cset_slider_pane_g6_ParamLimits

0x6eb2,	// (0x00024ed5) main_cset_slider_pane_g6

0xf976,	// (0x0002d999) main_cset_slider_pane_g_ParamLimits

0xd40b,	// (0x0002b42e) main_cset_slider_pane_t1_ParamLimits

0x6f42,	// (0x00024f65) main_cset_slider_pane_t2_ParamLimits

0x6f5c,	// (0x00024f7f) main_cset_slider_pane_t3_ParamLimits

0x6f76,	// (0x00024f99) main_cset_slider_pane_t4_ParamLimits

0x6f90,	// (0x00024fb3) main_cset_slider_pane_t5_ParamLimits

0x6fae,	// (0x00024fd1) main_cset_slider_pane_t6_ParamLimits

0x6fc5,	// (0x00024fe8) main_cset_slider_pane_t7_ParamLimits

0x6ff3,	// (0x00025016) main_cset_slider_pane_t8_ParamLimits

0x6ff3,	// (0x00025016) main_cset_slider_pane_t8

0x701b,	// (0x0002503e) main_cset_slider_pane_t9_ParamLimits

0x701b,	// (0x0002503e) main_cset_slider_pane_t9

0x7043,	// (0x00025066) main_cset_slider_pane_t10_ParamLimits

0x7043,	// (0x00025066) main_cset_slider_pane_t10

0x706b,	// (0x0002508e) main_cset_slider_pane_t11_ParamLimits

0x706b,	// (0x0002508e) main_cset_slider_pane_t11

0x7095,	// (0x000250b8) main_cset_slider_pane_t12_ParamLimits

0x7095,	// (0x000250b8) main_cset_slider_pane_t12

0x70b2,	// (0x000250d5) main_cset_slider_pane_t13_ParamLimits

0x70b2,	// (0x000250d5) main_cset_slider_pane_t13

0xf99b,	// (0x0002d9be) main_cset_slider_pane_t_ParamLimits

0x9bec,	// (0x00027c0f) bg_popup_sub_pane_cp011

0xd55f,	// (0x0002b582) main_cset_text_pane_g1

0xd567,	// (0x0002b58a) main_cset_text_pane_t1

0xd590,	// (0x0002b5b3) main_cset_text_pane_t2

0xd59e,	// (0x0002b5c1) main_cset_text_pane_t3

0xd5ac,	// (0x0002b5cf) main_cset_text_pane_t4

0xd5ba,	// (0x0002b5dd) main_cset_text_pane_t5

0xd5c8,	// (0x0002b5eb) main_cset_text_pane_t6

0xd5d6,	// (0x0002b5f9) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x0002da55) main_cset_text_pane_t

0x10ce,	// (0x0001f0f1) main_cam4_burst_pane

0x10ce,	// (0x0001f0f1) main_cam5_pane

0x6d74,	// (0x00024d97) bg_button_pane_cp019

0x6d7d,	// (0x00024da0) bg_button_pane_cp020

0xd3e7,	// (0x0002b40a) main_cset_slider_pane_g7_ParamLimits

0xd3e7,	// (0x0002b40a) main_cset_slider_pane_g7

0xd3f3,	// (0x0002b416) main_cset_slider_pane_g8_ParamLimits

0xd3f3,	// (0x0002b416) main_cset_slider_pane_g8

0x6ec6,	// (0x00024ee9) main_cset_slider_pane_g9_ParamLimits

0x6ec6,	// (0x00024ee9) main_cset_slider_pane_g9

0x6ed2,	// (0x00024ef5) main_cset_slider_pane_g10_ParamLimits

0x6ed2,	// (0x00024ef5) main_cset_slider_pane_g10

0x6ede,	// (0x00024f01) main_cset_slider_pane_g11_ParamLimits

0x6ede,	// (0x00024f01) main_cset_slider_pane_g11

0x6eea,	// (0x00024f0d) main_cset_slider_pane_g12_ParamLimits

0x6eea,	// (0x00024f0d) main_cset_slider_pane_g12

0x6ef6,	// (0x00024f19) main_cset_slider_pane_g13_ParamLimits

0x6ef6,	// (0x00024f19) main_cset_slider_pane_g13

0x6f02,	// (0x00024f25) main_cset_slider_pane_g14_ParamLimits

0x6f02,	// (0x00024f25) main_cset_slider_pane_g14

0x6f0e,	// (0x00024f31) main_cset_slider_pane_g15_ParamLimits

0x6f0e,	// (0x00024f31) main_cset_slider_pane_g15

0xd439,	// (0x0002b45c) main_cset_slider_pane_t14_ParamLimits

0xd439,	// (0x0002b45c) main_cset_slider_pane_t14

0xd472,	// (0x0002b495) main_cset_slider_pane_t15_ParamLimits

0xd472,	// (0x0002b495) main_cset_slider_pane_t15

0x743c,	// (0x0002545f) aid_cam4_burst_size_cell_ParamLimits

0x743c,	// (0x0002545f) aid_cam4_burst_size_cell

0x7458,	// (0x0002547b) grid_cam4_burst_pane_ParamLimits

0x7458,	// (0x0002547b) grid_cam4_burst_pane

0x7488,	// (0x000254ab) linegrid_cam4_burst_pane_ParamLimits

0x7488,	// (0x000254ab) linegrid_cam4_burst_pane

0x74a8,	// (0x000254cb) scroll_pane_cp30_ParamLimits

0x74a8,	// (0x000254cb) scroll_pane_cp30

0x74b4,	// (0x000254d7) cell_cam4_burst_pane_ParamLimits

0x74b4,	// (0x000254d7) cell_cam4_burst_pane

0xd5e4,	// (0x0002b607) linegrid_cam4_burst_pane_g1_ParamLimits

0xd5e4,	// (0x0002b607) linegrid_cam4_burst_pane_g1

0x74f0,	// (0x00025513) linegrid_cam4_burst_pane_g2_ParamLimits

0x74f0,	// (0x00025513) linegrid_cam4_burst_pane_g2

0xd5f1,	// (0x0002b614) linegrid_cam4_burst_pane_g3_ParamLimits

0xd5f1,	// (0x0002b614) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x0002da64) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x0002da64) linegrid_cam4_burst_pane_g

0x7501,	// (0x00025524) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x7501,	// (0x00025524) linegrid_cam4_burst_pane_g3_copy1

0xd5fe,	// (0x0002b621) linegrid_cam4_burst_pane_g4_ParamLimits

0xd5fe,	// (0x0002b621) linegrid_cam4_burst_pane_g4

0x751b,	// (0x0002553e) linegrid_cam4_burst_pane_g5_ParamLimits

0x751b,	// (0x0002553e) linegrid_cam4_burst_pane_g5

0x752c,	// (0x0002554f) linegrid_cam4_burst_pane_g6_ParamLimits

0x752c,	// (0x0002554f) linegrid_cam4_burst_pane_g6

0xd60b,	// (0x0002b62e) linegrid_cam4_burst_pane_g7_ParamLimits

0xd60b,	// (0x0002b62e) linegrid_cam4_burst_pane_g7

0x753d,	// (0x00025560) cell_cam4_burst_pane_g1

0xd624,	// (0x0002b647) main_cam5_pane_t1_ParamLimits

0xd624,	// (0x0002b647) main_cam5_pane_t1

0xd636,	// (0x0002b659) main_cam5_pane_t2_ParamLimits

0xd636,	// (0x0002b659) main_cam5_pane_t2

0xd648,	// (0x0002b66b) main_cam5_pane_t3_ParamLimits

0xd648,	// (0x0002b66b) main_cam5_pane_t3

0xd666,	// (0x0002b689) main_cam5_pane_t4_ParamLimits

0xd666,	// (0x0002b689) main_cam5_pane_t4

0xd67e,	// (0x0002b6a1) main_cam5_pane_t5_ParamLimits

0xd67e,	// (0x0002b6a1) main_cam5_pane_t5

0xd692,	// (0x0002b6b5) main_cam5_pane_t6_ParamLimits

0xd692,	// (0x0002b6b5) main_cam5_pane_t6

0xd6a6,	// (0x0002b6c9) main_cam5_pane_t7_ParamLimits

0xd6a6,	// (0x0002b6c9) main_cam5_pane_t7

0xd6b8,	// (0x0002b6db) main_cam5_pane_t8_ParamLimits

0xd6b8,	// (0x0002b6db) main_cam5_pane_t8

0xd6d4,	// (0x0002b6f7) main_cam5_pane_t9_ParamLimits

0xd6d4,	// (0x0002b6f7) main_cam5_pane_t9

0xd6e6,	// (0x0002b709) main_cam5_pane_t10_ParamLimits

0xd6e6,	// (0x0002b709) main_cam5_pane_t10

0xd6f8,	// (0x0002b71b) main_cam5_pane_t11_ParamLimits

0xd6f8,	// (0x0002b71b) main_cam5_pane_t11

0xd70a,	// (0x0002b72d) main_cam5_pane_t12_ParamLimits

0xd70a,	// (0x0002b72d) main_cam5_pane_t12

0xd71f,	// (0x0002b742) main_cam5_pane_t13_ParamLimits

0xd71f,	// (0x0002b742) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x0002da70) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x0002da70) main_cam5_pane_t

0x107f,	// (0x0001f0a2) popup_scut_keymap_window_ParamLimits

0x107f,	// (0x0001f0a2) popup_scut_keymap_window

0x7550,	// (0x00025573) aid_size_cell_brow_shortcut

0xa4fc,	// (0x0002851f) bg_popup_window_pane_cp010

0x755c,	// (0x0002557f) grid_scut_pane

0x7568,	// (0x0002558b) cell_scut_pane_ParamLimits

0x7568,	// (0x0002558b) cell_scut_pane

0x757f,	// (0x000255a2) cell_scut_pane_g1

0xd73c,	// (0x0002b75f) cell_scut_pane_t1

0xd74b,	// (0x0002b76e) cell_scut_pane_t2

0x7588,	// (0x000255ab) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x0002da8b) cell_scut_pane_t

0x5ebd,	// (0x00023ee0) main_mup3_pane_g8_ParamLimits

0x5ebd,	// (0x00023ee0) main_mup3_pane_g8

0x213d,	// (0x00020160) area_vitu2_query_pane_ParamLimits

0x213d,	// (0x00020160) area_vitu2_query_pane

0x72e8,	// (0x0002530b) input_focus_pane_cp08

0xd75a,	// (0x0002b77d) area_vitu2_query_pane_g1

0x7596,	// (0x000255b9) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x0002da92) area_vitu2_query_pane_g

0x75a7,	// (0x000255ca) area_vitu2_query_pane_t1_ParamLimits

0x75a7,	// (0x000255ca) area_vitu2_query_pane_t1

0x75bb,	// (0x000255de) area_vitu2_query_pane_t2_ParamLimits

0x75bb,	// (0x000255de) area_vitu2_query_pane_t2

0x75cf,	// (0x000255f2) area_vitu2_query_pane_t3_ParamLimits

0x75cf,	// (0x000255f2) area_vitu2_query_pane_t3

0xd766,	// (0x0002b789) area_vitu2_query_pane_t4_ParamLimits

0xd766,	// (0x0002b789) area_vitu2_query_pane_t4

0xd78e,	// (0x0002b7b1) area_vitu2_query_pane_t5_ParamLimits

0xd78e,	// (0x0002b7b1) area_vitu2_query_pane_t5

0xd7b6,	// (0x0002b7d9) area_vitu2_query_pane_t6_ParamLimits

0xd7b6,	// (0x0002b7d9) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x0002da97) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x0002da97) area_vitu2_query_pane_t

0x75f7,	// (0x0002561a) bg_button_pane_cp018

0x7605,	// (0x00025628) bg_button_pane_cp021

0x7611,	// (0x00025634) bg_button_pane_cp022

0x7622,	// (0x00025645) input_focus_pane_cp09

0xad9f,	// (0x00028dc2) aid_size_touch_mv_arrow_left

0xadc8,	// (0x00028deb) aid_size_touch_mv_arrow_right

0x6f26,	// (0x00024f49) main_cset_slider_pane_g16_ParamLimits

0x6f26,	// (0x00024f49) main_cset_slider_pane_g16

0x6f34,	// (0x00024f57) main_cset_slider_pane_g17_ParamLimits

0x6f34,	// (0x00024f57) main_cset_slider_pane_g17

0x753d,	// (0x00025560) cell_cam4_burst_pane_g1_ParamLimits

0x9bec,	// (0x00027c0f) compa_mode_pane

0x710f,	// (0x00025132) popup_vtel_slider_window_g3_ParamLimits

0x710f,	// (0x00025132) popup_vtel_slider_window_g3

0x7123,	// (0x00025146) popup_vtel_slider_window_g4_ParamLimits

0x7123,	// (0x00025146) popup_vtel_slider_window_g4

0x7137,	// (0x0002515a) popup_vtel_slider_window_t1_ParamLimits

0x7137,	// (0x0002515a) popup_vtel_slider_window_t1

0x10ce,	// (0x0001f0f1) main_cl_pane

0x15c6,	// (0x0001f5e9) popup_imed_adjust2_window_ParamLimits

0xc3e1,	// (0x0002a404) bg_tb_trans_pane_cp05_ParamLimits

0xcd44,	// (0x0002ad67) popup_imed_adjust2_window_g1_ParamLimits

0xcd53,	// (0x0002ad76) popup_imed_adjust2_window_g2_ParamLimits

0xcd53,	// (0x0002ad76) popup_imed_adjust2_window_g2

0xcd5f,	// (0x0002ad82) popup_imed_adjust2_window_g3_ParamLimits

0xcd5f,	// (0x0002ad82) popup_imed_adjust2_window_g3

0x0002,

0xf7df,	// (0x0002d802) popup_imed_adjust2_window_g_ParamLimits

0xf7df,	// (0x0002d802) popup_imed_adjust2_window_g

0xcd6b,	// (0x0002ad8e) popup_imed_adjust2_window_t1_ParamLimits

0xcd83,	// (0x0002ada6) slider_imed_adjust_pane_ParamLimits

0xcd97,	// (0x0002adba) slider_imed_adjust_pane_g1_ParamLimits

0xcda7,	// (0x0002adca) slider_imed_adjust_pane_g2_ParamLimits

0xcdb7,	// (0x0002adda) slider_imed_adjust_pane_g3_ParamLimits

0xcdc8,	// (0x0002adeb) slider_imed_adjust_pane_g4_ParamLimits

0xf7e6,	// (0x0002d809) slider_imed_adjust_pane_g_ParamLimits

0x1eba,	// (0x0001fedd) aid_touch_area_cam4_ParamLimits

0x1eba,	// (0x0001fedd) aid_touch_area_cam4

0x1eca,	// (0x0001feed) battery_pane_cp01

0x1f51,	// (0x0001ff74) main_camera4_pane_g6_ParamLimits

0x1f51,	// (0x0001ff74) main_camera4_pane_g6

0x1f6f,	// (0x0001ff92) main_camera4_pane_t2_ParamLimits

0x1f6f,	// (0x0001ff92) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x0002d90c) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x0002d90c) main_camera4_pane_t

0x1fe0,	// (0x00020003) aid_touch_area_vid4_ParamLimits

0x1fe0,	// (0x00020003) aid_touch_area_vid4

0x2020,	// (0x00020043) main_video4_pane_g5_ParamLimits

0x2020,	// (0x00020043) main_video4_pane_g5

0x2044,	// (0x00020067) vid4_progress_pane_ParamLimits

0x2044,	// (0x00020067) vid4_progress_pane

0xd3ff,	// (0x0002b422) main_cset_slider_pane_g18_ParamLimits

0xd3ff,	// (0x0002b422) main_cset_slider_pane_g18

0xd618,	// (0x0002b63b) cell_cam4_burst_pane_g2_ParamLimits

0xd618,	// (0x0002b63b) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x0002da6b) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x0002da6b) cell_cam4_burst_pane_g

0x7633,	// (0x00025656) bg_cl_pane_ParamLimits

0x7633,	// (0x00025656) bg_cl_pane

0x763f,	// (0x00025662) cl_header_pane_ParamLimits

0x763f,	// (0x00025662) cl_header_pane

0x764b,	// (0x0002566e) cl_listscroll_pane_ParamLimits

0x764b,	// (0x0002566e) cl_listscroll_pane

0xd802,	// (0x0002b825) bg_cl_pane_g1

0xd80a,	// (0x0002b82d) bg_cl_pane_g2

0xd812,	// (0x0002b835) bg_cl_pane_g3

0xd81a,	// (0x0002b83d) bg_cl_pane_g4

0xd822,	// (0x0002b845) bg_cl_pane_g5

0xd82a,	// (0x0002b84d) bg_cl_pane_g6

0xd832,	// (0x0002b855) bg_cl_pane_g7

0xd83a,	// (0x0002b85d) bg_cl_pane_g8

0xd842,	// (0x0002b865) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x0002daa6) bg_cl_pane_g

0x7657,	// (0x0002567a) aid_height_cl_leading_ParamLimits

0x7657,	// (0x0002567a) aid_height_cl_leading

0x7663,	// (0x00025686) aid_height_cl_text_ParamLimits

0x7663,	// (0x00025686) aid_height_cl_text

0xd230,	// (0x0002b253) bg_cl_header_pane_ParamLimits

0xd230,	// (0x0002b253) bg_cl_header_pane

0x767b,	// (0x0002569e) cl_header_pane_g1_ParamLimits

0x767b,	// (0x0002569e) cl_header_pane_g1

0x7688,	// (0x000256ab) cl_header_pane_t1_ParamLimits

0x7688,	// (0x000256ab) cl_header_pane_t1

0xd84a,	// (0x0002b86d) cl_list_pane

0xd3d2,	// (0x0002b3f5) hc_scroll_pane_cp01

0xa735,	// (0x00028758) bg_cl_header_pane_g1

0xd2b8,	// (0x0002b2db) bg_cl_header_pane_g2

0xa755,	// (0x00028778) bg_cl_header_pane_g3

0xd2c8,	// (0x0002b2eb) bg_cl_header_pane_g4

0xd2c0,	// (0x0002b2e3) bg_cl_header_pane_g5

0xd518,	// (0x0002b53b) bg_cl_header_pane_g6

0xd2e0,	// (0x0002b303) bg_cl_header_pane_g7

0xd2e8,	// (0x0002b30b) bg_cl_header_pane_g8

0xd2d8,	// (0x0002b2fb) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x0002dab9) bg_cl_header_pane_g

0x769a,	// (0x000256bd) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x769a,	// (0x000256bd) hc_cl_list_double_graphic_heading_pane

0x76ab,	// (0x000256ce) hc_cl_list_single_graphic_pane_ParamLimits

0x76ab,	// (0x000256ce) hc_cl_list_single_graphic_pane

0x76c4,	// (0x000256e7) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x76c4,	// (0x000256e7) hc_cl_list_single_graphic_pane_g1

0x76d0,	// (0x000256f3) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x76d0,	// (0x000256f3) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x0002dacc) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x0002dacc) hc_cl_list_single_graphic_pane_g

0x76e4,	// (0x00025707) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x76e4,	// (0x00025707) hc_cl_list_single_graphic_pane_t1

0x76c4,	// (0x000256e7) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x76c4,	// (0x000256e7) hc_cl_list_double_graphic_heading_pane_g1

0x76f9,	// (0x0002571c) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x76f9,	// (0x0002571c) hc_cl_list_double_graphic_heading_pane_g2

0x770d,	// (0x00025730) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x770d,	// (0x00025730) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x0002dad1) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x0002dad1) hc_cl_list_double_graphic_heading_pane_g

0x7721,	// (0x00025744) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x7721,	// (0x00025744) hc_cl_list_double_graphic_heading_pane_t1

0x7736,	// (0x00025759) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x7736,	// (0x00025759) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x0002dad8) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x0002dad8) hc_cl_list_double_graphic_heading_pane_t

0x256f,	// (0x00020592) vid4_progress_pane_g1

0x257f,	// (0x000205a2) vid4_progress_pane_g2

0x258f,	// (0x000205b2) vid4_progress_pane_g3

0x25a1,	// (0x000205c4) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x0002dadd) vid4_progress_pane_g

0x25b9,	// (0x000205dc) vid4_progress_pane_t1

0x25cf,	// (0x000205f2) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x0002dae8) vid4_progress_pane_t

0x25f9,	// (0x0002061c) wait_bar_pane_cp07

0xc5dc,	// (0x0002a5ff) blid_firmament_pane_ParamLimits

0xc61f,	// (0x0002a642) popup_blid_sat_info2_window_g1

0xc643,	// (0x0002a666) popup_blid_sat_info2_window_t3

0xc651,	// (0x0002a674) popup_blid_sat_info2_window_t4

0xc65f,	// (0x0002a682) popup_blid_sat_info2_window_t5

0xc66d,	// (0x0002a690) popup_blid_sat_info2_window_t6

0xc67d,	// (0x0002a6a0) popup_blid_sat_info2_window_t7

0xc68b,	// (0x0002a6ae) popup_blid_sat_info2_window_t8

0xc699,	// (0x0002a6bc) popup_blid_sat_info2_window_t9

0xc6a7,	// (0x0002a6ca) popup_blid_sat_info2_window_t10

0xc772,	// (0x0002a795) aid_firma_cardinal_ParamLimits

0xc786,	// (0x0002a7a9) blid_firmament_pane_t1_ParamLimits

0xc79d,	// (0x0002a7c0) blid_firmament_pane_t2_ParamLimits

0xc7b4,	// (0x0002a7d7) blid_firmament_pane_t3_ParamLimits

0xc7cb,	// (0x0002a7ee) blid_firmament_pane_t4_ParamLimits

0xf6d3,	// (0x0002d6f6) blid_firmament_pane_t_ParamLimits

0xc7e2,	// (0x0002a805) blid_sat_info_pane_ParamLimits

0x1528,	// (0x0001f54b) main_cam_set_pane_ParamLimits

0x65fd,	// (0x00024620) aid_size_cell_colour_35_ParamLimits

0x6617,	// (0x0002463a) aid_size_cell_colour_112_ParamLimits

0x662e,	// (0x00024651) aid_size_cell_effect_ParamLimits

0xa329,	// (0x0002834c) bg_tb_trans_pane_cp02_ParamLimits

0xafec,	// (0x0002900f) heading_imed_pane_ParamLimits

0x6648,	// (0x0002466b) listscroll_imed_pane_ParamLimits

0xba07,	// (0x00029a2a) popup_call2_audio_first_window_g5_ParamLimits

0xba07,	// (0x00029a2a) popup_call2_audio_first_window_g5

0x1d45,	// (0x0001fd68) aid_size_touch_image3_arrow_left_ParamLimits

0x1d45,	// (0x0001fd68) aid_size_touch_image3_arrow_left

0x1d5b,	// (0x0001fd7e) aid_size_touch_image3_arrow_right_ParamLimits

0x1d5b,	// (0x0001fd7e) aid_size_touch_image3_arrow_right

0x25e4,	// (0x00020607) vid4_progress_pane_t3

0x68e6,	// (0x00024909) main_hwr_training_symbol_option_pane_ParamLimits

0x68e6,	// (0x00024909) main_hwr_training_symbol_option_pane

0xd031,	// (0x0002b054) popup_hwr_training_preview_window_ParamLimits

0xd031,	// (0x0002b054) popup_hwr_training_preview_window

0x1a43,	// (0x0001fa66) hwr_training_navi_pane_g5_ParamLimits

0x1a43,	// (0x0001fa66) hwr_training_navi_pane_g5

0xd2a6,	// (0x0002b2c9) popup_char_count_window

0x10c0,	// (0x0001f0e3) bg_popup_sub_pane_cp20_ParamLimits

0x24b0,	// (0x000204d3) list_vitu2_match_list_pane_ParamLimits

0x24bc,	// (0x000204df) vitu2_page_scroll_pane_ParamLimits

0x24bc,	// (0x000204df) vitu2_page_scroll_pane

0xd875,	// (0x0002b898) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd875,	// (0x0002b898) list_single_hwr_training_symbol_option_pane

0xd888,	// (0x0002b8ab) list_single_hwr_training_symbol_option_pane_g1

0xd890,	// (0x0002b8b3) list_single_hwr_training_symbol_option_pane_t1

0xd89e,	// (0x0002b8c1) bg_button_pane_cp023

0xd8a7,	// (0x0002b8ca) bg_button_pane_cp024

0x777a,	// (0x0002579d) vitu2_page_scroll_pane_g1

0x7782,	// (0x000257a5) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x0002daef) vitu2_page_scroll_pane_g

0x778a,	// (0x000257ad) vitu2_page_scroll_pane_t1

0xc53c,	// (0x0002a55f) popup_char_count_window_g1

0xd8da,	// (0x0002b8fd) popup_char_count_window_g2

0xd8e3,	// (0x0002b906) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x0002daf4) popup_char_count_window_g

0xd8ec,	// (0x0002b90f) popup_char_count_window_t1

0x10ce,	// (0x0001f0f1) main_vded2_pane

0xcd30,	// (0x0002ad53) aid_size_cell_imed_line

0xcd3a,	// (0x0002ad5d) grid_imed_line_width_pane

0x20b2,	// (0x000200d5) vid4_indicators_pane_g4

0xd902,	// (0x0002b925) cell_imed_line_width_pane_ParamLimits

0xd902,	// (0x0002b925) cell_imed_line_width_pane

0xd916,	// (0x0002b939) cell_imed_line_width_pane_g1

0xd8fa,	// (0x0002b91d) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x0002dafb) cell_imed_line_width_pane_g

0x7799,	// (0x000257bc) main_vded2_pane_g1_ParamLimits

0x7799,	// (0x000257bc) main_vded2_pane_g1

0x77a6,	// (0x000257c9) main_vded2_pane_g2_ParamLimits

0x77a6,	// (0x000257c9) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x0002db00) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x0002db00) main_vded2_pane_g

0x77b4,	// (0x000257d7) vded2_slider_pane_ParamLimits

0x77b4,	// (0x000257d7) vded2_slider_pane

0x77c1,	// (0x000257e4) aid_size_touch_vded2_end

0x77cb,	// (0x000257ee) aid_size_touch_vded2_playhead

0xd91f,	// (0x0002b942) aid_size_touch_vded2_start

0xd927,	// (0x0002b94a) vded2_slider_bg_pane

0xd930,	// (0x0002b953) vded2_slider_pane_g1

0xd939,	// (0x0002b95c) vded2_slider_pane_g2

0x77d3,	// (0x000257f6) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x0002db05) vded2_slider_pane_g

0xd941,	// (0x0002b964) vded2_slider_bg_pane_g1

0xd94a,	// (0x0002b96d) vded2_slider_bg_pane_g2

0xd953,	// (0x0002b976) vded2_slider_bg_pane_g3

0x0002,

0xfae9,	// (0x0002db0c) vded2_slider_bg_pane_g

0x4e9a,	// (0x00022ebd) aid_postcard_touch_down_pane_ParamLimits

0x4e9a,	// (0x00022ebd) aid_postcard_touch_down_pane

0x4eaa,	// (0x00022ecd) aid_postcard_touch_up_pane_ParamLimits

0x4eaa,	// (0x00022ecd) aid_postcard_touch_up_pane

0x10ce,	// (0x0001f0f1) main_blid2_pane

0x1551,	// (0x0001f574) popup_blid2_search_window

0x9bec,	// (0x00027c0f) blid2_gps_pane

0x9bec,	// (0x00027c0f) blid2_navig_pane

0x9bec,	// (0x00027c0f) blid2_search_pane

0x9bec,	// (0x00027c0f) blid2_tripm_pane

0x77dc,	// (0x000257ff) blid2_search_pane_g1_ParamLimits

0x77dc,	// (0x000257ff) blid2_search_pane_g1

0x77ec,	// (0x0002580f) blid2_search_pane_t1_ParamLimits

0x77ec,	// (0x0002580f) blid2_search_pane_t1

0x77fe,	// (0x00025821) aid_size_cell_blid2_gps_ParamLimits

0x77fe,	// (0x00025821) aid_size_cell_blid2_gps

0x780e,	// (0x00025831) blid2_gps_pane_g1_ParamLimits

0x780e,	// (0x00025831) blid2_gps_pane_g1

0x781a,	// (0x0002583d) grid_blid2_satellite_pane_ParamLimits

0x781a,	// (0x0002583d) grid_blid2_satellite_pane

0x782a,	// (0x0002584d) blid2_navig_pane_g1_ParamLimits

0x782a,	// (0x0002584d) blid2_navig_pane_g1

0x7836,	// (0x00025859) blid2_navig_pane_t1_ParamLimits

0x7836,	// (0x00025859) blid2_navig_pane_t1

0x7848,	// (0x0002586b) blid2_navig_pane_t2_ParamLimits

0x7848,	// (0x0002586b) blid2_navig_pane_t2

0x0001,

0xfaf0,	// (0x0002db13) blid2_navig_pane_t_ParamLimits

0xfaf0,	// (0x0002db13) blid2_navig_pane_t

0x785a,	// (0x0002587d) blid2_navig_ring_pane_ParamLimits

0x785a,	// (0x0002587d) blid2_navig_ring_pane

0x786a,	// (0x0002588d) blid2_speed_pane_ParamLimits

0x786a,	// (0x0002588d) blid2_speed_pane

0x7876,	// (0x00025899) blid2_tripm_pane_g1_ParamLimits

0x7876,	// (0x00025899) blid2_tripm_pane_g1

0x7886,	// (0x000258a9) blid2_tripm_pane_g2_ParamLimits

0x7886,	// (0x000258a9) blid2_tripm_pane_g2

0x7892,	// (0x000258b5) blid2_tripm_pane_g3_ParamLimits

0x7892,	// (0x000258b5) blid2_tripm_pane_g3

0x789e,	// (0x000258c1) blid2_tripm_pane_g4_ParamLimits

0x789e,	// (0x000258c1) blid2_tripm_pane_g4

0x78aa,	// (0x000258cd) blid2_tripm_pane_g5_ParamLimits

0x78aa,	// (0x000258cd) blid2_tripm_pane_g5

0x0005,

0xfaf5,	// (0x0002db18) blid2_tripm_pane_g_ParamLimits

0xfaf5,	// (0x0002db18) blid2_tripm_pane_g

0x78c6,	// (0x000258e9) blid2_tripm_pane_t1_ParamLimits

0x78c6,	// (0x000258e9) blid2_tripm_pane_t1

0x78da,	// (0x000258fd) blid2_tripm_pane_t2_ParamLimits

0x78da,	// (0x000258fd) blid2_tripm_pane_t2

0x78ec,	// (0x0002590f) blid2_tripm_pane_t3_ParamLimits

0x78ec,	// (0x0002590f) blid2_tripm_pane_t3

0x0003,

0xfb02,	// (0x0002db25) blid2_tripm_pane_t_ParamLimits

0xfb02,	// (0x0002db25) blid2_tripm_pane_t

0x791e,	// (0x00025941) cell_blid2_satellite_pane_ParamLimits

0x791e,	// (0x00025941) cell_blid2_satellite_pane

0x7938,	// (0x0002595b) cell_blid2_satellite_pane_g1

0xd95c,	// (0x0002b97f) cell_blid2_satellite_pane_t1

0xc7f2,	// (0x0002a815) blid2_speed_pane_g1

0xd974,	// (0x0002b997) blid2_speed_pane_t1

0xd982,	// (0x0002b9a5) blid2_speed_pane_t2

0x0001,

0xfb0b,	// (0x0002db2e) blid2_speed_pane_t

0xc7f2,	// (0x0002a815) blid2_navig_ring_pane_g1

0x7941,	// (0x00025964) blid2_navig_ring_pane_g2

0x7949,	// (0x0002596c) blid2_navig_ring_pane_g3

0x7951,	// (0x00025974) blid2_navig_ring_pane_g4

0x7959,	// (0x0002597c) blid2_navig_ring_pane_g5

0x0004,

0xfb10,	// (0x0002db33) blid2_navig_ring_pane_g

0x9bec,	// (0x00027c0f) bg_popup_window_pane_cp011

0xd990,	// (0x0002b9b3) popup_blid2_search_window_g1

0xd998,	// (0x0002b9bb) popup_blid2_search_window_t1

0xd9a6,	// (0x0002b9c9) popup_blid2_search_window_t2

0x0001,

0xfb1b,	// (0x0002db3e) popup_blid2_search_window_t

0xa644,	// (0x00028667) main_browser_pane_g1

0xa337,	// (0x0002835a) main_browser_pane_ParamLimits

0x1528,	// (0x0001f54b) bg_button_pane_cp011_ParamLimits

0x23d7,	// (0x000203fa) cell_vitu2_function_pane_g1_ParamLimits

0xc3e1,	// (0x0002a404) bg_popup_sub_pane_cp22_ParamLimits

0x72e8,	// (0x0002530b) input_focus_pane_cp08_ParamLimits

0x72ff,	// (0x00025322) popup_vitu2_query_button_pane_ParamLimits

0x72ff,	// (0x00025322) popup_vitu2_query_button_pane

0x7310,	// (0x00025333) popup_vitu2_query_input_button_pane

0xd553,	// (0x0002b576) popup_vitu2_query_window_g1_ParamLimits

0x731a,	// (0x0002533d) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x0002da3f) popup_vitu2_query_window_g_ParamLimits

0x9bec,	// (0x00027c0f) bg_button_pane_cp026

0x7961,	// (0x00025984) popup_vitu2_query_input_button_pane_g1

0x9bec,	// (0x00027c0f) bg_button_pane_cp025

0xd9b4,	// (0x0002b9d7) popup_vitu2_query_button_pane_t1

0x5bb8,	// (0x00023bdb) main_mp3_pane_t6

0x5bc8,	// (0x00023beb) popup_slider_window_cp01

0x1f8f,	// (0x0001ffb2) cam4_battery_pane

0x206f,	// (0x00020092) cam4_battery_pane_cp02

0x2567,	// (0x0002058a) cam4_battery_pane_cp01

0x2567,	// (0x0002058a) cam4_battery_pane_cp03

0xd96a,	// (0x0002b98d) cam4_battery_pane_g1

0xc7f2,	// (0x0002a815) cam4_battery_pane_g2

0x0001,

0xfb20,	// (0x0002db43) cam4_battery_pane_g

0xc6b5,	// (0x0002a6d8) popup_blid_sat_info2_window_t11

0xad9f,	// (0x00028dc2) aid_size_touch_mv_arrow_left_ParamLimits

0xadc8,	// (0x00028deb) aid_size_touch_mv_arrow_right_ParamLimits

0xae26,	// (0x00028e49) navi_pane_g1_ParamLimits

0xae32,	// (0x00028e55) navi_pane_g2_ParamLimits

0xae60,	// (0x00028e83) navi_pane_g3_ParamLimits

0xf3e5,	// (0x0002d408) navi_pane_g_ParamLimits

0x4930,	// (0x00022953) navi_pane_mv_t1_ParamLimits

0x6654,	// (0x00024677) grid_imed_effect_pane_ParamLimits

0x33a6,	// (0x000213c9) aid_placing_vt_slider_lsc

0xa593,	// (0x000285b6) aid_placing_vt_slider_prt

0xa329,	// (0x0002834c) bg_tb_trans_pane_cp01_ParamLimits

0xc975,	// (0x0002a998) popup_image_details_window_g1_ParamLimits

0xc988,	// (0x0002a9ab) popup_image_details_window_g2_ParamLimits

0xc99d,	// (0x0002a9c0) popup_image_details_window_g3_ParamLimits

0xc99d,	// (0x0002a9c0) popup_image_details_window_g3

0xf718,	// (0x0002d73b) popup_image_details_window_g_ParamLimits

0xc9b1,	// (0x0002a9d4) popup_image_details_window_t1_ParamLimits

0xc9c3,	// (0x0002a9e6) popup_image_details_window_t2_ParamLimits

0xc9dc,	// (0x0002a9ff) popup_image_details_window_t3_ParamLimits

0xc9f0,	// (0x0002aa13) popup_image_details_window_t4_ParamLimits

0xca0b,	// (0x0002aa2e) popup_image_details_window_t5_ParamLimits

0xf71f,	// (0x0002d742) popup_image_details_window_t_ParamLimits

0x766f,	// (0x00025692) cl_header_name_pane_ParamLimits

0x766f,	// (0x00025692) cl_header_name_pane

0x7969,	// (0x0002598c) cl_header_name_pane_t1_ParamLimits

0x7969,	// (0x0002598c) cl_header_name_pane_t1

0x7980,	// (0x000259a3) cl_header_name_pane_t2_ParamLimits

0x7980,	// (0x000259a3) cl_header_name_pane_t2

0x79aa,	// (0x000259cd) cl_header_name_pane_t3_ParamLimits

0x79aa,	// (0x000259cd) cl_header_name_pane_t3

0x0002,

0xfb25,	// (0x0002db48) cl_header_name_pane_t_ParamLimits

0xfb25,	// (0x0002db48) cl_header_name_pane_t

0xaeef,	// (0x00028f12) navi_pane_mv_g2_ParamLimits

0xd263,	// (0x0002b286) field_vitu2_entry_pane_g1_ParamLimits

0xd26f,	// (0x0002b292) field_vitu2_entry_pane_g2_ParamLimits

0xd27b,	// (0x0002b29e) field_vitu2_entry_pane_g3_ParamLimits

0xd27b,	// (0x0002b29e) field_vitu2_entry_pane_g3

0xf91b,	// (0x0002d93e) field_vitu2_entry_pane_g_ParamLimits

0x22a3,	// (0x000202c6) cell_vitu2_itu_pane_g1_ParamLimits

0x22b5,	// (0x000202d8) cell_vitu2_itu_pane_g2_ParamLimits

0x22b5,	// (0x000202d8) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x0002d94a) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x0002d94a) cell_vitu2_itu_pane_g

0x1528,	// (0x0001f54b) bg_vkb2_func_pane_cp05_ParamLimits

0x1528,	// (0x0001f54b) bg_vkb2_func_pane_cp05

0x1528,	// (0x0001f54b) bg_vkb2_func_pane_cp03

0x1528,	// (0x0001f54b) bg_vkb2_func_pane_cp04

0x1528,	// (0x0001f54b) bg_vkb2_func_pane_cp10_ParamLimits

0x1528,	// (0x0001f54b) bg_vkb2_func_pane_cp10

0x7611,	// (0x00025634) bg_vkb2_func_pane_cp08

0x75f7,	// (0x0002561a) bg_vkb2_func_pane_cp06

0x7605,	// (0x00025628) bg_vkb2_func_pane_cp07

0xd8b0,	// (0x0002b8d3) bg_vkb2_func_pane_cp11_ParamLimits

0xd8b0,	// (0x0002b8d3) bg_vkb2_func_pane_cp11

0xd8c5,	// (0x0002b8e8) bg_vkb2_func_pane_cp12_ParamLimits

0xd8c5,	// (0x0002b8e8) bg_vkb2_func_pane_cp12

0x9bec,	// (0x00027c0f) bg_vkb2_func_pane_cp09

0xd2b8,	// (0x0002b2db) bg_vkb2_func_pane_g1

0xa755,	// (0x00028778) bg_vkb2_func_pane_g2

0xd2c0,	// (0x0002b2e3) bg_vkb2_func_pane_g3

0xd2c8,	// (0x0002b2eb) bg_vkb2_func_pane_g4

0xd518,	// (0x0002b53b) bg_vkb2_func_pane_g5

0xd2e0,	// (0x0002b303) bg_vkb2_func_pane_g6

0xd2e8,	// (0x0002b30b) bg_vkb2_func_pane_g7

0xd2d8,	// (0x0002b2fb) bg_vkb2_func_pane_g8

0xa735,	// (0x00028758) bg_vkb2_func_pane_g9

0x0008,

0xfb2c,	// (0x0002db4f) bg_vkb2_func_pane_g

0x78b8,	// (0x000258db) blid2_tripm_pane_g6_ParamLimits

0x78b8,	// (0x000258db) blid2_tripm_pane_g6

0xd0e9,	// (0x0002b10c) mp4_progress_pane_g1

0x7912,	// (0x00025935) blid2_tripm_values_pane_ParamLimits

0x7912,	// (0x00025935) blid2_tripm_values_pane

0x79cf,	// (0x000259f2) blid2_tripm_values_pane_t1

0x79dd,	// (0x00025a00) blid2_tripm_values_pane_t2

0x79eb,	// (0x00025a0e) blid2_tripm_values_pane_t3

0x79f9,	// (0x00025a1c) blid2_tripm_values_pane_t4

0x7a07,	// (0x00025a2a) blid2_tripm_values_pane_t5

0x7a15,	// (0x00025a38) blid2_tripm_values_pane_t6

0x7a23,	// (0x00025a46) blid2_tripm_values_pane_t7

0x7a31,	// (0x00025a54) blid2_tripm_values_pane_t8

0x7a3f,	// (0x00025a62) blid2_tripm_values_pane_t9

0x0008,

0xfb3f,	// (0x0002db62) blid2_tripm_values_pane_t

0x33e6,	// (0x00021409) call_video_pane_t1_ParamLimits

0x3407,	// (0x0002142a) call_video_pane_t2_ParamLimits

0xf26e,	// (0x0002d291) call_video_pane_t_ParamLimits

0x4e4a,	// (0x00022e6d) msg_header_pane_g1_ParamLimits

0xb0eb,	// (0x0002910e) msg_header_pane_g2_ParamLimits

0xb0eb,	// (0x0002910e) msg_header_pane_g2

0x0001,

0xf488,	// (0x0002d4ab) msg_header_pane_g_ParamLimits

0xf488,	// (0x0002d4ab) msg_header_pane_g

0xa337,	// (0x0002835a) main_clock2_pane_ParamLimits

0x6465,	// (0x00024488) grid_clock2_toolbar_pane_ParamLimits

0x6465,	// (0x00024488) grid_clock2_toolbar_pane

0x6465,	// (0x00024488) listscroll_clock2_pane_ParamLimits

0x6465,	// (0x00024488) listscroll_clock2_pane

0x6509,	// (0x0002452c) main_clock2_pane_t3_ParamLimits

0x6509,	// (0x0002452c) main_clock2_pane_t3

0x651b,	// (0x0002453e) main_clock2_pane_t4_ParamLimits

0x651b,	// (0x0002453e) main_clock2_pane_t4

0xd9c2,	// (0x0002b9e5) cell_clock2_toolbar_pane

0xd9ca,	// (0x0002b9ed) cell_clock2_toolbar_pane_cp01

0xd9ca,	// (0x0002b9ed) cell_clock2_toolbar_pane_cp02

0xd9d2,	// (0x0002b9f5) cell_clock2_toolbar_pane_cp03

0xd9da,	// (0x0002b9fd) list_clock2_pane

0xad15,	// (0x00028d38) scroll_pane_cp10

0xd9e2,	// (0x0002ba05) list_single_clock2_pane_ParamLimits

0xd9e2,	// (0x0002ba05) list_single_clock2_pane

0xa4fc,	// (0x0002851f) list_highlight_pane_cp08

0xd9ef,	// (0x0002ba12) list_single_clock2_pane_t1

0xd9fd,	// (0x0002ba20) list_single_clock2_pane_t2

0x0001,

0xfb52,	// (0x0002db75) list_single_clock2_pane_t

0x9bec,	// (0x00027c0f) bg_button_pane_cp10

0xda0b,	// (0x0002ba2e) cell_clock2_toolbar_pane_g1

0x14c3,	// (0x0001f4e6) aid_main_viewer_pane_g1_ParamLimits

0x14c3,	// (0x0001f4e6) aid_main_viewer_pane_g1

0x14cf,	// (0x0001f4f2) aid_main_viewer_pane_g2_ParamLimits

0x14cf,	// (0x0001f4f2) aid_main_viewer_pane_g2

0x4e56,	// (0x00022e79) aid_main_viewer_pane_g3_ParamLimits

0x4e56,	// (0x00022e79) aid_main_viewer_pane_g3

0x4e67,	// (0x00022e8a) aid_main_viewer_pane_g4_ParamLimits

0x4e67,	// (0x00022e8a) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x0002d4bc) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x0002d4bc) aid_main_viewer_pane_g

0x151b,	// (0x0001f53e) main_calc_pane_ParamLimits

0x1536,	// (0x0001f559) main_dialer2_pane_ParamLimits

0x10ce,	// (0x0001f0f1) main_cam6_pane

0x10ce,	// (0x0001f0f1) main_vid6_pane

0x6471,	// (0x00024494) listscroll_gen_pane_cp06_ParamLimits

0x6471,	// (0x00024494) listscroll_gen_pane_cp06

0x652d,	// (0x00024550) main_clock2_pane_t5_ParamLimits

0x652d,	// (0x00024550) main_clock2_pane_t5

0x6576,	// (0x00024599) aid_call2_pane_cp10_ParamLimits

0x6588,	// (0x000245ab) aid_call_pane_cp10_ParamLimits

0xad93,	// (0x00028db6) popup_clock_analogue_window_cp10_g1_ParamLimits

0xad93,	// (0x00028db6) popup_clock_analogue_window_cp10_g2_ParamLimits

0x659a,	// (0x000245bd) popup_clock_analogue_window_cp10_g3_ParamLimits

0x659a,	// (0x000245bd) popup_clock_analogue_window_cp10_g4_ParamLimits

0xad93,	// (0x00028db6) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d4,	// (0x0002d7f7) popup_clock_analogue_window_cp10_g_ParamLimits

0x65ac,	// (0x000245cf) popup_clock_analogue_window_cp10_t1_ParamLimits

0x69b8,	// (0x000249db) cell_dialer2_keypad_pane_g2_ParamLimits

0x69b8,	// (0x000249db) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x0002d8dd) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x0002d8dd) cell_dialer2_keypad_pane_g

0x69d4,	// (0x000249f7) cell_dialer2_keypad_pane_t1

0x6e12,	// (0x00024e35) main_cset_text2_pane_ParamLimits

0x6e12,	// (0x00024e35) main_cset_text2_pane

0xd75a,	// (0x0002b77d) area_vitu2_query_pane_g1_ParamLimits

0x7596,	// (0x000255b9) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x0002da92) area_vitu2_query_pane_g_ParamLimits

0xd7de,	// (0x0002b801) area_vitu2_query_pane_t7_ParamLimits

0xd7de,	// (0x0002b801) area_vitu2_query_pane_t7

0x75f7,	// (0x0002561a) bg_button_pane_cp018_ParamLimits

0x7605,	// (0x00025628) bg_button_pane_cp021_ParamLimits

0x7611,	// (0x00025634) bg_button_pane_cp022_ParamLimits

0x7611,	// (0x00025634) bg_vkb2_func_pane_cp08_ParamLimits

0x75f7,	// (0x0002561a) bg_vkb2_func_pane_cp06_ParamLimits

0x7605,	// (0x00025628) bg_vkb2_func_pane_cp07_ParamLimits

0x7622,	// (0x00025645) input_focus_pane_cp09_ParamLimits

0x260c,	// (0x0002062f) cam6_autofocus_pane_ParamLimits

0x260c,	// (0x0002062f) cam6_autofocus_pane

0x262e,	// (0x00020651) cam6_image_uncrop_pane_ParamLimits

0x262e,	// (0x00020651) cam6_image_uncrop_pane

0x265b,	// (0x0002067e) cam6_indi_pane_ParamLimits

0x265b,	// (0x0002067e) cam6_indi_pane

0x2675,	// (0x00020698) cam6_mode_pane_ParamLimits

0x2675,	// (0x00020698) cam6_mode_pane

0x2689,	// (0x000206ac) cam6_timer_pane_ParamLimits

0x2689,	// (0x000206ac) cam6_timer_pane

0x2695,	// (0x000206b8) cam6_zoom_pane_ParamLimits

0x2695,	// (0x000206b8) cam6_zoom_pane

0x7a4d,	// (0x00025a70) cam6_mode_pane_g1_ParamLimits

0x7a4d,	// (0x00025a70) cam6_mode_pane_g1

0x7a59,	// (0x00025a7c) cam6_mode_pane_g2_ParamLimits

0x7a59,	// (0x00025a7c) cam6_mode_pane_g2

0x7a65,	// (0x00025a88) cam6_mode_pane_g3_ParamLimits

0x7a65,	// (0x00025a88) cam6_mode_pane_g3

0x7a71,	// (0x00025a94) cam6_mode_pane_g4_ParamLimits

0x7a71,	// (0x00025a94) cam6_mode_pane_g4

0x0003,

0xfb57,	// (0x0002db7a) cam6_mode_pane_g_ParamLimits

0xfb57,	// (0x0002db7a) cam6_mode_pane_g

0xd23e,	// (0x0002b261) bg_tb_trans_pane_cp08_ParamLimits

0xd23e,	// (0x0002b261) bg_tb_trans_pane_cp08

0xda13,	// (0x0002ba36) cam6_battery_pane_ParamLimits

0xda13,	// (0x0002ba36) cam6_battery_pane

0xda29,	// (0x0002ba4c) cam6_indi_pane_g1_ParamLimits

0xda29,	// (0x0002ba4c) cam6_indi_pane_g1

0xda3b,	// (0x0002ba5e) cam6_indi_pane_g2_ParamLimits

0xda3b,	// (0x0002ba5e) cam6_indi_pane_g2

0xda4d,	// (0x0002ba70) cam6_indi_pane_g3_ParamLimits

0xda4d,	// (0x0002ba70) cam6_indi_pane_g3

0x0002,

0x0a3a,	// (0x0001ea5d) cam6_indi_pane_g_ParamLimits

0x0a3a,	// (0x0001ea5d) cam6_indi_pane_g

0xda5f,	// (0x0002ba82) cam6_indi_pane_t1_ParamLimits

0xda5f,	// (0x0002ba82) cam6_indi_pane_t1

0x6b13,	// (0x00024b36) cam6_autofocus_pane_g1

0x6b0b,	// (0x00024b2e) cam6_autofocus_pane_g2

0x6b23,	// (0x00024b46) cam6_autofocus_pane_g3

0x6b1b,	// (0x00024b3e) cam6_autofocus_pane_g4

0x0003,

0xfb60,	// (0x0002db83) cam6_autofocus_pane_g

0xda85,	// (0x0002baa8) cam6_timer_pane_g1

0xda8d,	// (0x0002bab0) cam6_timer_pane_t1

0xda9b,	// (0x0002babe) cam6_zoom_cont_pane

0xdaa3,	// (0x0002bac6) cam6_zoom_pane_g1

0xdaab,	// (0x0002bace) cam6_zoom_pane_g2

0x7a7d,	// (0x00025aa0) cam6_zoom_pane_g3

0x0002,

0xfb69,	// (0x0002db8c) cam6_zoom_pane_g

0xc7f2,	// (0x0002a815) cam6_battery_pane_g1

0xc7f2,	// (0x0002a815) cam6_battery_pane_g2

0x0001,

0xf6dc,	// (0x0002d6ff) cam6_battery_pane_g

0xdab3,	// (0x0002bad6) cam6_zoom_cont_pane_g1

0xdabc,	// (0x0002badf) cam6_zoom_cont_pane_g2

0xdac5,	// (0x0002bae8) cam6_zoom_cont_pane_g3

0x0002,

0x0a51,	// (0x0001ea74) cam6_zoom_cont_pane_g

0x7a9a,	// (0x00025abd) cam6_mode_pane_cp_ParamLimits

0x7a9a,	// (0x00025abd) cam6_mode_pane_cp

0x7aae,	// (0x00025ad1) cam6_zoom_pane_cp_ParamLimits

0x7aae,	// (0x00025ad1) cam6_zoom_pane_cp

0x7ac6,	// (0x00025ae9) vid6_image_uncrop_cif_pane_ParamLimits

0x7ac6,	// (0x00025ae9) vid6_image_uncrop_cif_pane

0x7af2,	// (0x00025b15) vid6_image_uncrop_nhd_pane_ParamLimits

0x7af2,	// (0x00025b15) vid6_image_uncrop_nhd_pane

0x7b0f,	// (0x00025b32) vid6_image_uncrop_vga_pane_ParamLimits

0x7b0f,	// (0x00025b32) vid6_image_uncrop_vga_pane

0x7b2e,	// (0x00025b51) vid6_image_uncrop_wvga_pane_ParamLimits

0x7b2e,	// (0x00025b51) vid6_image_uncrop_wvga_pane

0x7b4b,	// (0x00025b6e) vid6_indi_pane_ParamLimits

0x7b4b,	// (0x00025b6e) vid6_indi_pane

0xd23e,	// (0x0002b261) bg_tb_trans_pane_cp09_ParamLimits

0xd23e,	// (0x0002b261) bg_tb_trans_pane_cp09

0xdadd,	// (0x0002bb00) cam6_battery_pane_cp_ParamLimits

0xdadd,	// (0x0002bb00) cam6_battery_pane_cp

0xdae9,	// (0x0002bb0c) vid6_indi_pane_g1_ParamLimits

0xdae9,	// (0x0002bb0c) vid6_indi_pane_g1

0xdafb,	// (0x0002bb1e) vid6_indi_pane_g2_ParamLimits

0xdafb,	// (0x0002bb1e) vid6_indi_pane_g2

0xdb0d,	// (0x0002bb30) vid6_indi_pane_g3_ParamLimits

0xdb0d,	// (0x0002bb30) vid6_indi_pane_g3

0xdb22,	// (0x0002bb45) vid6_indi_pane_g4_ParamLimits

0xdb22,	// (0x0002bb45) vid6_indi_pane_g4

0xdb37,	// (0x0002bb5a) vid6_indi_pane_g5_ParamLimits

0xdb37,	// (0x0002bb5a) vid6_indi_pane_g5

0x0004,

0x0a58,	// (0x0001ea7b) vid6_indi_pane_g_ParamLimits

0x0a58,	// (0x0001ea7b) vid6_indi_pane_g

0xdb51,	// (0x0002bb74) vid6_indi_pane_t1_ParamLimits

0xdb51,	// (0x0002bb74) vid6_indi_pane_t1

0xdb67,	// (0x0002bb8a) vid6_indi_pane_t2_ParamLimits

0xdb67,	// (0x0002bb8a) vid6_indi_pane_t2

0xdb8f,	// (0x0002bbb2) vid6_indi_pane_t3_ParamLimits

0xdb8f,	// (0x0002bbb2) vid6_indi_pane_t3

0xdbb7,	// (0x0002bbda) vid6_indi_pane_t4_ParamLimits

0xdbb7,	// (0x0002bbda) vid6_indi_pane_t4

0x0003,

0x0a63,	// (0x0001ea86) vid6_indi_pane_t_ParamLimits

0x0a63,	// (0x0001ea86) vid6_indi_pane_t

0xdbdb,	// (0x0002bbfe) wait_bar_pane_cp08

0x7b70,	// (0x00025b93) main_cset_text2_pane_t1_ParamLimits

0x7b70,	// (0x00025b93) main_cset_text2_pane_t1

0x7a85,	// (0x00025aa8) listscroll_gen_pane_cp06_t1_ParamLimits

0x7a85,	// (0x00025aa8) listscroll_gen_pane_cp06_t1

0x10ce,	// (0x0001f0f1) main_cam6_set_pane

0x1f81,	// (0x0001ffa4) bg_tb_trans_pane_cp06_ParamLimits

0x1f97,	// (0x0001ffba) cam4_indicators_pane_g1_ParamLimits

0x1fa8,	// (0x0001ffcb) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x0002d91a) cam4_indicators_pane_g_ParamLimits

0x1fc6,	// (0x0001ffe9) cam4_indicators_pane_t1_ParamLimits

0x1528,	// (0x0001f54b) bg_tb_trans_pane_cp07_ParamLimits

0x2079,	// (0x0002009c) vid4_indicators_pane_g1_ParamLimits

0x208d,	// (0x000200b0) vid4_indicators_pane_g2_ParamLimits

0x20a1,	// (0x000200c4) vid4_indicators_pane_g3_ParamLimits

0x20b2,	// (0x000200d5) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x0002d92c) vid4_indicators_pane_g_ParamLimits

0x20d0,	// (0x000200f3) vid4_indicators_pane_t1_ParamLimits

0x256f,	// (0x00020592) vid4_progress_pane_g1_ParamLimits

0x257f,	// (0x000205a2) vid4_progress_pane_g2_ParamLimits

0x258f,	// (0x000205b2) vid4_progress_pane_g3_ParamLimits

0x25a1,	// (0x000205c4) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x0002dadd) vid4_progress_pane_g_ParamLimits

0x25b9,	// (0x000205dc) vid4_progress_pane_t1_ParamLimits

0x25cf,	// (0x000205f2) vid4_progress_pane_t2_ParamLimits

0x25e4,	// (0x00020607) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x0002dae8) vid4_progress_pane_t_ParamLimits

0x25f9,	// (0x0002061c) wait_bar_pane_cp07_ParamLimits

0x7ba3,	// (0x00025bc6) main_cam6_set_pane_g2_ParamLimits

0x7ba3,	// (0x00025bc6) main_cam6_set_pane_g2

0x7baf,	// (0x00025bd2) main_cset6_listscroll_pane_ParamLimits

0x7baf,	// (0x00025bd2) main_cset6_listscroll_pane

0x7bda,	// (0x00025bfd) main_cset6_slider_pane_ParamLimits

0x7bda,	// (0x00025bfd) main_cset6_slider_pane

0x7be6,	// (0x00025c09) main_cset6_text2_pane_ParamLimits

0x7be6,	// (0x00025c09) main_cset6_text2_pane

0xdbea,	// (0x0002bc0d) main_cset6_text_pane

0xdbf2,	// (0x0002bc15) main_cset_list_pane_copy1_ParamLimits

0xdbf2,	// (0x0002bc15) main_cset_list_pane_copy1

0xdc02,	// (0x0002bc25) scroll_pane_cp028_copy1

0x7bf9,	// (0x00025c1c) cset_list_set_pane_copy1

0x7c0c,	// (0x00025c2f) aid_position_infowindow_above_copy1

0x7c14,	// (0x00025c37) aid_position_infowindow_below_copy1

0x7c1c,	// (0x00025c3f) cset_list_set_pane_g1_copy1

0xd4c3,	// (0x0002b4e6) cset_list_set_pane_g3_copy1_ParamLimits

0xd4c3,	// (0x0002b4e6) cset_list_set_pane_g3_copy1

0xd4d2,	// (0x0002b4f5) cset_list_set_pane_t1_copy1_ParamLimits

0xd4d2,	// (0x0002b4f5) cset_list_set_pane_t1_copy1

0xa329,	// (0x0002834c) list_highlight_pane_cp021_copy1_ParamLimits

0xa329,	// (0x0002834c) list_highlight_pane_cp021_copy1

0xdc0b,	// (0x0002bc2e) cset6_slider_pane_ParamLimits

0xdc0b,	// (0x0002bc2e) cset6_slider_pane

0xdc37,	// (0x0002bc5a) main_cset6_slider_pane_g1_ParamLimits

0xdc37,	// (0x0002bc5a) main_cset6_slider_pane_g1

0x7c24,	// (0x00025c47) main_cset6_slider_pane_g2_ParamLimits

0x7c24,	// (0x00025c47) main_cset6_slider_pane_g2

0xdc5f,	// (0x0002bc82) main_cset6_slider_pane_g3_ParamLimits

0xdc5f,	// (0x0002bc82) main_cset6_slider_pane_g3

0x7c4c,	// (0x00025c6f) main_cset6_slider_pane_g4_ParamLimits

0x7c4c,	// (0x00025c6f) main_cset6_slider_pane_g4

0x7c58,	// (0x00025c7b) main_cset6_slider_pane_g5_ParamLimits

0x7c58,	// (0x00025c7b) main_cset6_slider_pane_g5

0xd3e7,	// (0x0002b40a) main_cset6_slider_pane_g7_ParamLimits

0xd3e7,	// (0x0002b40a) main_cset6_slider_pane_g7

0xd3f3,	// (0x0002b416) main_cset6_slider_pane_g8_ParamLimits

0xd3f3,	// (0x0002b416) main_cset6_slider_pane_g8

0x7c66,	// (0x00025c89) main_cset6_slider_pane_g9_ParamLimits

0x7c66,	// (0x00025c89) main_cset6_slider_pane_g9

0x7c72,	// (0x00025c95) main_cset6_slider_pane_g10_ParamLimits

0x7c72,	// (0x00025c95) main_cset6_slider_pane_g10

0x7c7e,	// (0x00025ca1) main_cset6_slider_pane_g11_ParamLimits

0x7c7e,	// (0x00025ca1) main_cset6_slider_pane_g11

0x7c8a,	// (0x00025cad) main_cset6_slider_pane_g12_ParamLimits

0x7c8a,	// (0x00025cad) main_cset6_slider_pane_g12

0x7c96,	// (0x00025cb9) main_cset6_slider_pane_g13_ParamLimits

0x7c96,	// (0x00025cb9) main_cset6_slider_pane_g13

0x7ca2,	// (0x00025cc5) main_cset6_slider_pane_g14_ParamLimits

0x7ca2,	// (0x00025cc5) main_cset6_slider_pane_g14

0x7cae,	// (0x00025cd1) main_cset6_slider_pane_g15_ParamLimits

0x7cae,	// (0x00025cd1) main_cset6_slider_pane_g15

0x7cc6,	// (0x00025ce9) main_cset6_slider_pane_g16_ParamLimits

0x7cc6,	// (0x00025ce9) main_cset6_slider_pane_g16

0x7cd4,	// (0x00025cf7) main_cset6_slider_pane_g17_ParamLimits

0x7cd4,	// (0x00025cf7) main_cset6_slider_pane_g17

0x0011,

0xfb70,	// (0x0002db93) main_cset6_slider_pane_g_ParamLimits

0xfb70,	// (0x0002db93) main_cset6_slider_pane_g

0xdc6b,	// (0x0002bc8e) main_cset6_slider_pane_t1_ParamLimits

0xdc6b,	// (0x0002bc8e) main_cset6_slider_pane_t1

0x7cfa,	// (0x00025d1d) main_cset6_slider_pane_t2_ParamLimits

0x7cfa,	// (0x00025d1d) main_cset6_slider_pane_t2

0x7d25,	// (0x00025d48) main_cset6_slider_pane_t3_ParamLimits

0x7d25,	// (0x00025d48) main_cset6_slider_pane_t3

0x7d50,	// (0x00025d73) main_cset6_slider_pane_t4_ParamLimits

0x7d50,	// (0x00025d73) main_cset6_slider_pane_t4

0x7d7b,	// (0x00025d9e) main_cset6_slider_pane_t5_ParamLimits

0x7d7b,	// (0x00025d9e) main_cset6_slider_pane_t5

0xdcac,	// (0x0002bccf) main_cset6_slider_pane_t7_ParamLimits

0xdcac,	// (0x0002bccf) main_cset6_slider_pane_t7

0x7da8,	// (0x00025dcb) main_cset6_slider_pane_t8_ParamLimits

0x7da8,	// (0x00025dcb) main_cset6_slider_pane_t8

0x7dcc,	// (0x00025def) main_cset6_slider_pane_t9_ParamLimits

0x7dcc,	// (0x00025def) main_cset6_slider_pane_t9

0x7df0,	// (0x00025e13) main_cset6_slider_pane_t10_ParamLimits

0x7df0,	// (0x00025e13) main_cset6_slider_pane_t10

0x7e14,	// (0x00025e37) main_cset6_slider_pane_t11_ParamLimits

0x7e14,	// (0x00025e37) main_cset6_slider_pane_t11

0xdce2,	// (0x0002bd05) main_cset6_slider_pane_t14_ParamLimits

0xdce2,	// (0x0002bd05) main_cset6_slider_pane_t14

0xdd1b,	// (0x0002bd3e) main_cset6_slider_pane_t15_ParamLimits

0xdd1b,	// (0x0002bd3e) main_cset6_slider_pane_t15

0x000b,

0xfb95,	// (0x0002dbb8) main_cset6_slider_pane_t_ParamLimits

0xfb95,	// (0x0002dbb8) main_cset6_slider_pane_t

0xd575,	// (0x0002b598) cset_slider_pane_g1_copy1

0xd57e,	// (0x0002b5a1) cset_slider_pane_g2_copy1

0xd587,	// (0x0002b5aa) cset_slider_pane_g3_copy1

0x9bec,	// (0x00027c0f) bg_popup_sub_pane_cp011_copy1

0xdd54,	// (0x0002bd77) main_cset_text_pane_g1_copy1

0xd567,	// (0x0002b58a) main_cset_text_pane_t1_copy1

0xd590,	// (0x0002b5b3) main_cset_text_pane_t2_copy1

0xd59e,	// (0x0002b5c1) main_cset_text_pane_t3_copy1

0xd5ac,	// (0x0002b5cf) main_cset_text_pane_t4_copy1

0xd5ba,	// (0x0002b5dd) main_cset_text_pane_t5_copy1

0xdd5c,	// (0x0002bd7f) main_cset_text_pane_t6_copy1

0xdd6a,	// (0x0002bd8d) main_cset_text_pane_t7_copy1

0x7f09,	// (0x00025f2c) main_cset_text2_pane_t1_copy1

0x1528,	// (0x0001f54b) main_ncimui_pane

0x1587,	// (0x0001f5aa) popup_query_ncimui_window_ParamLimits

0x1587,	// (0x0001f5aa) popup_query_ncimui_window

0xcaba,	// (0x0002aadd) field_cale_ev2_pane_g4_ParamLimits

0xcaba,	// (0x0002aadd) field_cale_ev2_pane_g4

0x6958,	// (0x0002497b) cell_video_dialer_keypad_pane_g2_ParamLimits

0x6958,	// (0x0002497b) cell_video_dialer_keypad_pane_g2

0x0001,

0xf895,	// (0x0002d8b8) cell_video_dialer_keypad_pane_g_ParamLimits

0xf895,	// (0x0002d8b8) cell_video_dialer_keypad_pane_g

0x6970,	// (0x00024993) cell_video_dialer_keypad_pane_t1

0x9bec,	// (0x00027c0f) bg_popup_window_pane_cp012

0xabe2,	// (0x00028c05) heading_pane_cp06

0xdd96,	// (0x0002bdb9) ncim_query_content_pane

0x9bec,	// (0x00027c0f) bg_popup_heading_pane_cp01

0xdd9e,	// (0x0002bdc1) ncim_heading_pane_t1

0xddac,	// (0x0002bdcf) ncim_indicator_popup_pane

0xddbe,	// (0x0002bde1) ncim_query_button_pane

0xddd2,	// (0x0002bdf5) ncim_query_content_pane_t1

0xdde4,	// (0x0002be07) ncim_query_content_pane_t2

0x0005,

0xfbd9,	// (0x0002dbfc) ncim_query_content_pane_t

0xde1e,	// (0x0002be41) ncim_query_list_pane

0xde30,	// (0x0002be53) ncim_query_popup_pane

0xddac,	// (0x0002bdcf) ncim_indicator_popup_pane_ParamLimits

0x805c,	// (0x0002607f) ncim_query_content_pane_g1_ParamLimits

0x805c,	// (0x0002607f) ncim_query_content_pane_g1

0xddd2,	// (0x0002bdf5) ncim_query_content_pane_t1_ParamLimits

0xdde4,	// (0x0002be07) ncim_query_content_pane_t2_ParamLimits

0x8068,	// (0x0002608b) ncim_query_content_pane_t3_ParamLimits

0x8068,	// (0x0002608b) ncim_query_content_pane_t3

0x8085,	// (0x000260a8) ncim_query_content_pane_t4_ParamLimits

0x8085,	// (0x000260a8) ncim_query_content_pane_t4

0x80a2,	// (0x000260c5) ncim_query_content_pane_t5_ParamLimits

0x80a2,	// (0x000260c5) ncim_query_content_pane_t5

0xddf6,	// (0x0002be19) ncim_query_content_pane_t6_ParamLimits

0xddf6,	// (0x0002be19) ncim_query_content_pane_t6

0xfbd9,	// (0x0002dbfc) ncim_query_content_pane_t_ParamLimits

0xde1e,	// (0x0002be41) ncim_query_list_pane_ParamLimits

0xde30,	// (0x0002be53) ncim_query_popup_pane_ParamLimits

0xde44,	// (0x0002be67) wait_bar_pane_cp04

0x9bec,	// (0x00027c0f) input_focus_pane_cp011

0xde4c,	// (0x0002be6f) ncim_query_popup_pane_t1

0xde5a,	// (0x0002be7d) ncim_list_query_list_pane_ParamLimits

0xde5a,	// (0x0002be7d) ncim_list_query_list_pane

0x9bec,	// (0x00027c0f) bg_button_pane_cp027

0xde67,	// (0x0002be8a) ncim_query_button_pane_g1

0x9bec,	// (0x00027c0f) list_highlight_pane_cp012

0xde71,	// (0x0002be94) ncim_list_query_list_pane_g1

0xde79,	// (0x0002be9c) ncim_list_query_list_pane_t1

0x1fb7,	// (0x0001ffda) cam4_indicators_pane_g3_ParamLimits

0x1fb7,	// (0x0001ffda) cam4_indicators_pane_g3

0x20be,	// (0x000200e1) vid4_indicators_pane_g5_ParamLimits

0x20be,	// (0x000200e1) vid4_indicators_pane_g5

0x25ad,	// (0x000205d0) vid4_progress_pane_g5_ParamLimits

0x25ad,	// (0x000205d0) vid4_progress_pane_g5

0x7f48,	// (0x00025f6b) main_ncimui_pane_g1

0x7fb0,	// (0x00025fd3) ncimui_group_query_pane_ParamLimits

0x7fb0,	// (0x00025fd3) ncimui_group_query_pane

0x7ff8,	// (0x0002601b) ncimui_list_pane_ParamLimits

0x7ff8,	// (0x0002601b) ncimui_list_pane

0x801f,	// (0x00026042) ncimui_text_pane_ParamLimits

0x801f,	// (0x00026042) ncimui_text_pane

0x80bf,	// (0x000260e2) ncimui_text_pane_t1_ParamLimits

0x80bf,	// (0x000260e2) ncimui_text_pane_t1

0xde87,	// (0x0002beaa) ncimui_list_single_graphic_pane_ParamLimits

0xde87,	// (0x0002beaa) ncimui_list_single_graphic_pane

0x80de,	// (0x00026101) ncimui_query_pane_ParamLimits

0x80de,	// (0x00026101) ncimui_query_pane

0x9bec,	// (0x00027c0f) list_highlight_pane_cp013

0xde97,	// (0x0002beba) ncim_list_query_list_pane_t1_copy1

0xde71,	// (0x0002be94) ncim_list_single_graphic_pane_g1

0xdea5,	// (0x0002bec8) ncim_query_button_pane_cp01

0xdeb1,	// (0x0002bed4) ncim_query_entry_pane_ParamLimits

0xdeb1,	// (0x0002bed4) ncim_query_entry_pane

0xdec4,	// (0x0002bee7) ncimui_query_pane_g1

0xded0,	// (0x0002bef3) ncimui_query_pane_t1_ParamLimits

0xded0,	// (0x0002bef3) ncimui_query_pane_t1

0xa329,	// (0x0002834c) input_focus_pane_cp012

0xdee9,	// (0x0002bf0c) ncim_query_entry_pane_t1

0xa337,	// (0x0002835a) main_im_pane_ParamLimits

0x1528,	// (0x0001f54b) main_mobtv_pane_ParamLimits

0x1528,	// (0x0001f54b) main_mobtv_pane

0x7ce2,	// (0x00025d05) main_cset6_slider_pane_g18_ParamLimits

0x7ce2,	// (0x00025d05) main_cset6_slider_pane_g18

0x7cee,	// (0x00025d11) main_cset6_slider_pane_g19_ParamLimits

0x7cee,	// (0x00025d11) main_cset6_slider_pane_g19

0xd27b,	// (0x0002b29e) bg_main_mobtv_pane_ParamLimits

0xd27b,	// (0x0002b29e) bg_main_mobtv_pane

0x80f1,	// (0x00026114) main_mobtv_info_pane

0x80fc,	// (0x0002611f) main_mobtv_loading_pane_ParamLimits

0x80fc,	// (0x0002611f) main_mobtv_loading_pane

0xdefb,	// (0x0002bf1e) main_mobtv_pg_channel_list_pane

0xdf05,	// (0x0002bf28) main_mobtv_pg_hdr_pane

0x8109,	// (0x0002612c) main_mobtv_programe_curr_pane_ParamLimits

0x8109,	// (0x0002612c) main_mobtv_programe_curr_pane

0x8116,	// (0x00026139) main_mobtv_programe_next_pane_ParamLimits

0x8116,	// (0x00026139) main_mobtv_programe_next_pane

0xdf0e,	// (0x0002bf31) popup_mobtv_noti_window

0xc7f2,	// (0x0002a815) main_tv_pg_hdr_pane_g1

0xdf16,	// (0x0002bf39) main_tv_pg_hdr_pane_g2

0xdf1e,	// (0x0002bf41) main_tv_pg_hdr_pane_g3

0xdf26,	// (0x0002bf49) main_tv_pg_hdr_pane_g4

0xdf2e,	// (0x0002bf51) main_tv_pg_hdr_pane_g5

0xdf38,	// (0x0002bf5b) main_tv_pg_hdr_pane_g6

0xdf42,	// (0x0002bf65) main_tv_pg_hdr_pane_g7

0xdf4c,	// (0x0002bf6f) main_tv_pg_hdr_pane_g8

0xdf56,	// (0x0002bf79) main_tv_pg_hdr_pane_g9

0xdf60,	// (0x0002bf83) main_tv_pg_hdr_pane_g10

0xdf6a,	// (0x0002bf8d) main_tv_pg_hdr_pane_g11

0x000a,

0xfbe6,	// (0x0002dc09) main_tv_pg_hdr_pane_g

0xdf74,	// (0x0002bf97) main_tv_pg_hdr_pane_t1

0xdf82,	// (0x0002bfa5) main_tv_pg_hdr_pane_t2

0xdf90,	// (0x0002bfb3) main_tv_pg_hdr_pane_t3

0xdfa0,	// (0x0002bfc3) main_tv_pg_hdr_pane_t4

0xdfb0,	// (0x0002bfd3) main_tv_pg_hdr_pane_t5

0x0004,

0x0af9,	// (0x0001eb1c) main_tv_pg_hdr_pane_t

0xdfc0,	// (0x0002bfe3) single_mobtv_pg_channel_pane_ParamLimits

0xdfc0,	// (0x0002bfe3) single_mobtv_pg_channel_pane

0xdfd2,	// (0x0002bff5) single_mobtv_pg_channel_table_pane

0xdfdb,	// (0x0002bffe) single_mobtv_pg_channel_thumb_pane

0xdfe4,	// (0x0002c007) single_tv_pg_channel_pane_g1

0xdfed,	// (0x0002c010) single_tv_pg_channel_pane_g2

0x0001,

0x0b04,	// (0x0001eb27) single_tv_pg_channel_pane_g

0xca55,	// (0x0002aa78) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xca55,	// (0x0002aa78) bg_single_mobtv_pg_channel_thumb_pane

0xdff6,	// (0x0002c019) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdff6,	// (0x0002c019) single_mobtv_pg_channel_thumb_pane_g1

0xe004,	// (0x0002c027) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe004,	// (0x0002c027) single_mobtv_pg_channel_thumb_pane_g2

0xe010,	// (0x0002c033) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe010,	// (0x0002c033) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0x0b09,	// (0x0001eb2c) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0x0b09,	// (0x0001eb2c) single_mobtv_pg_channel_thumb_pane_g

0xe01c,	// (0x0002c03f) single_mobtv_pg_channel_thumb_pane_t1

0xe02a,	// (0x0002c04d) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0x0b10,	// (0x0001eb33) single_mobtv_pg_channel_thumb_pane_t

0xc7f2,	// (0x0002a815) bg_single_mobtv_pg_channel_table_pane_g1

0xc7f2,	// (0x0002a815) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6dc,	// (0x0002d6ff) bg_single_mobtv_pg_channel_table_pane_g

0xe038,	// (0x0002c05b) single_mobtv_pg_channel_table_pane_t1

0xe046,	// (0x0002c069) single_mobtv_pg_channel_table_pane_t2

0x0001,

0x0b15,	// (0x0001eb38) single_mobtv_pg_channel_table_pane_t

0x812b,	// (0x0002614e) main_mobtv_info_pane_g1_ParamLimits

0x812b,	// (0x0002614e) main_mobtv_info_pane_g1

0x8147,	// (0x0002616a) main_mobtv_info_pane_t1_ParamLimits

0x8147,	// (0x0002616a) main_mobtv_info_pane_t1

0x81bf,	// (0x000261e2) main_mobtv_info_pane_t2_ParamLimits

0x81bf,	// (0x000261e2) main_mobtv_info_pane_t2

0x0002,

0xfc02,	// (0x0002dc25) main_mobtv_info_pane_t_ParamLimits

0xfc02,	// (0x0002dc25) main_mobtv_info_pane_t

0x824e,	// (0x00026271) wait_bar_pane_cp05

0x8260,	// (0x00026283) main_mobtv_loading_pane_g1_ParamLimits

0x8260,	// (0x00026283) main_mobtv_loading_pane_g1

0x826e,	// (0x00026291) main_mobtv_loading_pane_g2_ParamLimits

0x826e,	// (0x00026291) main_mobtv_loading_pane_g2

0x827a,	// (0x0002629d) main_mobtv_loading_pane_g3_ParamLimits

0x827a,	// (0x0002629d) main_mobtv_loading_pane_g3

0x0002,

0xfc09,	// (0x0002dc2c) main_mobtv_loading_pane_g_ParamLimits

0xfc09,	// (0x0002dc2c) main_mobtv_loading_pane_g

0xe054,	// (0x0002c077) main_mobtv_loading_pane_t1_ParamLimits

0xe054,	// (0x0002c077) main_mobtv_loading_pane_t1

0xe06c,	// (0x0002c08f) main_mobtv_loading_pane_t2_ParamLimits

0xe06c,	// (0x0002c08f) main_mobtv_loading_pane_t2

0x0001,

0x0b2d,	// (0x0001eb50) main_mobtv_loading_pane_t_ParamLimits

0x0b2d,	// (0x0001eb50) main_mobtv_loading_pane_t

0x8288,	// (0x000262ab) wait_bar_pane_cp06_ParamLimits

0x8288,	// (0x000262ab) wait_bar_pane_cp06

0xe090,	// (0x0002c0b3) main_mobtv_programe_curr_pane_t1

0xe09e,	// (0x0002c0c1) main_mobtv_programe_curr_pane_t2

0x0001,

0x0b32,	// (0x0001eb55) main_mobtv_programe_curr_pane_t

0xe0ac,	// (0x0002c0cf) main_mobtv_programe_next_pane_t1

0xe0ba,	// (0x0002c0dd) main_mobtv_programe_next_pane_t2

0xe0c8,	// (0x0002c0eb) main_mobtv_programe_next_pane_t3

0x0002,

0x0b37,	// (0x0001eb5a) main_mobtv_programe_next_pane_t

0x9bec,	// (0x00027c0f) bg_popup_mobtv_noti_window_pane

0xe0d6,	// (0x0002c0f9) popup_mobtv_noti_window_g1

0xe0de,	// (0x0002c101) popup_mobtv_noti_window_t1

0xe0ec,	// (0x0002c10f) popup_mobtv_noti_window_t2

0x0001,

0x0b3e,	// (0x0001eb61) popup_mobtv_noti_window_t

0xc7f2,	// (0x0002a815) bg_popup_mobtv_noti_window_pane_g1

0x10ce,	// (0x0001f0f1) sc_clock_pane

0x10ce,	// (0x0001f0f1) main_fs_bigclock_pane

0x7900,	// (0x00025923) blid2_tripm_pane_t4_ParamLimits

0x7900,	// (0x00025923) blid2_tripm_pane_t4

0x8294,	// (0x000262b7) sc_clock_pane_g1_ParamLimits

0x8294,	// (0x000262b7) sc_clock_pane_g1

0x82a2,	// (0x000262c5) sc_clock_pane_t1_ParamLimits

0x82a2,	// (0x000262c5) sc_clock_pane_t1

0x82b5,	// (0x000262d8) sc_clock_pane_t2_ParamLimits

0x82b5,	// (0x000262d8) sc_clock_pane_t2

0x82c7,	// (0x000262ea) sc_clock_pane_t3_ParamLimits

0x82c7,	// (0x000262ea) sc_clock_pane_t3

0x0004,

0xfc10,	// (0x0002dc33) sc_clock_pane_t_ParamLimits

0xfc10,	// (0x0002dc33) sc_clock_pane_t

0x91d3,	// (0x000271f6) main_fs_bigclock_indicator_pane_ParamLimits

0x91d3,	// (0x000271f6) main_fs_bigclock_indicator_pane

0x8350,	// (0x00026373) main_fs_bigclock_pane_g1_ParamLimits

0x8350,	// (0x00026373) main_fs_bigclock_pane_g1

0x91df,	// (0x00027202) main_fs_bigclock_pane_t1_ParamLimits

0x91df,	// (0x00027202) main_fs_bigclock_pane_t1

0x91f1,	// (0x00027214) main_fs_bigclock_pane_t2_ParamLimits

0x91f1,	// (0x00027214) main_fs_bigclock_pane_t2

0x9205,	// (0x00027228) main_fs_bigclock_pane_t3_ParamLimits

0x9205,	// (0x00027228) main_fs_bigclock_pane_t3

0x0002,

0xfd8e,	// (0x0002ddb1) main_fs_bigclock_pane_t_ParamLimits

0xfd8e,	// (0x0002ddb1) main_fs_bigclock_pane_t

0xec70,	// (0x0002cc93) main_fs_bigclock_indicator_pane_g1

0xddc6,	// (0x0002bde9) ncim_query_content_pane_g2_ParamLimits

0xddc6,	// (0x0002bde9) ncim_query_content_pane_g2

0x0001,

0xfbd4,	// (0x0002dbf7) ncim_query_content_pane_g_ParamLimits

0xfbd4,	// (0x0002dbf7) ncim_query_content_pane_g

0x82db,	// (0x000262fe) sc_clock_pane_t4_ParamLimits

0x82db,	// (0x000262fe) sc_clock_pane_t4

0x1528,	// (0x0001f54b) main_radioblah_pane

0xd1d2,	// (0x0002b1f5) cell_call4_button_pane_t1_copy1_ParamLimits

0xd1d2,	// (0x0002b1f5) cell_call4_button_pane_t1_copy1

0x7f62,	// (0x00025f85) main_ncimui_pane_t1_ParamLimits

0x7f62,	// (0x00025f85) main_ncimui_pane_t1

0x7f7c,	// (0x00025f9f) main_ncimui_pane_t2_ParamLimits

0x7f7c,	// (0x00025f9f) main_ncimui_pane_t2

0x0002,

0xfbcd,	// (0x0002dbf0) main_ncimui_pane_t_ParamLimits

0xfbcd,	// (0x0002dbf0) main_ncimui_pane_t

0xe230,	// (0x0002c253) main_radioblah_anim_pane_ParamLimits

0xe230,	// (0x0002c253) main_radioblah_anim_pane

0xe241,	// (0x0002c264) main_radioblah_info_pane_ParamLimits

0xe241,	// (0x0002c264) main_radioblah_info_pane

0xe255,	// (0x0002c278) main_radioblah_pane_t1_ParamLimits

0xe255,	// (0x0002c278) main_radioblah_pane_t1

0xe271,	// (0x0002c294) main_radioblah_pane_t2_ParamLimits

0xe271,	// (0x0002c294) main_radioblah_pane_t2

0x0003,

0xfc1b,	// (0x0002dc3e) main_radioblah_pane_t_ParamLimits

0xfc1b,	// (0x0002dc3e) main_radioblah_pane_t

0x83a2,	// (0x000263c5) main_radioblah_rocker_ctrl_pane_ParamLimits

0x83a2,	// (0x000263c5) main_radioblah_rocker_ctrl_pane

0xe2c2,	// (0x0002c2e5) main_radioblah_info_pane_t1_ParamLimits

0xe2c2,	// (0x0002c2e5) main_radioblah_info_pane_t1

0x83e7,	// (0x0002640a) main_radioblah_info_pane_t2_ParamLimits

0x83e7,	// (0x0002640a) main_radioblah_info_pane_t2

0x0003,

0xfc24,	// (0x0002dc47) main_radioblah_info_pane_t_ParamLimits

0xfc24,	// (0x0002dc47) main_radioblah_info_pane_t

0xc7f2,	// (0x0002a815) main_radioblah_rocker_ctrl_pane_g1

0x8497,	// (0x000264ba) main_radioblah_rocker_ctrl_pane_g2

0x849f,	// (0x000264c2) main_radioblah_rocker_ctrl_pane_g3

0x84a7,	// (0x000264ca) main_radioblah_rocker_ctrl_pane_g4

0x84af,	// (0x000264d2) main_radioblah_rocker_ctrl_pane_g5

0x84b7,	// (0x000264da) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc2d,	// (0x0002dc50) main_radioblah_rocker_ctrl_pane_g

0x7f09,	// (0x00025f2c) main_cset_text2_pane_t1_copy1_ParamLimits

0x1efb,	// (0x0001ff1e) cam4_image_uncrop_qvga_pane

0x202c,	// (0x0002004f) vid4_image_uncrop_qcif_pane

0x264d,	// (0x00020670) cam6_image_uncrop_qvga_pane_ParamLimits

0x264d,	// (0x00020670) cam6_image_uncrop_qvga_pane

0xdacd,	// (0x0002baf0) vid6_image_uncrop_qcif_pane_ParamLimits

0xdacd,	// (0x0002baf0) vid6_image_uncrop_qcif_pane

0x9bec,	// (0x00027c0f) bg_popup_preview_window_pane_cp03

0xdd78,	// (0x0002bd9b) list_cset_text2_pane

0xdd80,	// (0x0002bda3) main_cset6_text2_pane_g1

0xdd88,	// (0x0002bdab) main_cset6_text2_pane_t1

0x84bf,	// (0x000264e2) list_cset_text2_pane_t1_ParamLimits

0x84bf,	// (0x000264e2) list_cset_text2_pane_t1

0x1528,	// (0x0001f54b) main_radioblah_pane_ParamLimits

0x823a,	// (0x0002625d) main_mobtv_info_pane_t3_ParamLimits

0x823a,	// (0x0002625d) main_mobtv_info_pane_t3

0x8390,	// (0x000263b3) main_radioblah_pane_g1

0x83bb,	// (0x000263de) main_radioblah_info_pane_g1

0x843c,	// (0x0002645f) main_radioblah_info_pane_t3_ParamLimits

0x843c,	// (0x0002645f) main_radioblah_info_pane_t3

0x4448,	// (0x0002246b) highlight_cell_cale_month_pane_ParamLimits

0x4448,	// (0x0002246b) highlight_cell_cale_month_pane

0x10ce,	// (0x0001f0f1) main_phob_fisheye_pane

0xcb5d,	// (0x0002ab80) scroll_pane_cp0031_ParamLimits

0xcb5d,	// (0x0002ab80) scroll_pane_cp0031

0xdbdb,	// (0x0002bbfe) wait_bar_pane_cp08_ParamLimits

0x7bf9,	// (0x00025c1c) cset_list_set_pane_copy1_ParamLimits

0xe2fc,	// (0x0002c31f) highlight_cell_cale_month_pane_g1

0x84dc,	// (0x000264ff) highlight_cell_cale_month_pane_t1

0xd84a,	// (0x0002b86d) list_gen_pane_cp01

0xd3d2,	// (0x0002b3f5) scroll_pane_01

0x84ea,	// (0x0002650d) list_single_double_fisheye_pane

0x84f3,	// (0x00026516) list_double_fisheye_pane_g1_ParamLimits

0x84f3,	// (0x00026516) list_double_fisheye_pane_g1

0x84ff,	// (0x00026522) list_double_fisheye_pane_g2_ParamLimits

0x84ff,	// (0x00026522) list_double_fisheye_pane_g2

0x8513,	// (0x00026536) list_double_fisheye_pane_g3_ParamLimits

0x8513,	// (0x00026536) list_double_fisheye_pane_g3

0x0004,

0xfc3a,	// (0x0002dc5d) list_double_fisheye_pane_g_ParamLimits

0xfc3a,	// (0x0002dc5d) list_double_fisheye_pane_g

0x853c,	// (0x0002655f) list_double_fisheye_pane_t1_ParamLimits

0x853c,	// (0x0002655f) list_double_fisheye_pane_t1

0x8557,	// (0x0002657a) list_double_fisheye_pane_t2_ParamLimits

0x8557,	// (0x0002657a) list_double_fisheye_pane_t2

0x0001,

0xfc45,	// (0x0002dc68) list_double_fisheye_pane_t_ParamLimits

0xfc45,	// (0x0002dc68) list_double_fisheye_pane_t

0x10ce,	// (0x0001f0f1) main_call5_pane

0x8301,	// (0x00026324) sc_swipe_pane_ParamLimits

0x8301,	// (0x00026324) sc_swipe_pane

0x8585,	// (0x000265a8) call5_image_pane_ParamLimits

0x8585,	// (0x000265a8) call5_image_pane

0x8595,	// (0x000265b8) call5_swipe_1_pane_ParamLimits

0x8595,	// (0x000265b8) call5_swipe_1_pane

0x85a1,	// (0x000265c4) call5_swipe_2_pane_ParamLimits

0x85a1,	// (0x000265c4) call5_swipe_2_pane

0x85bb,	// (0x000265de) popup_call5_audio_first_window_ParamLimits

0x85bb,	// (0x000265de) popup_call5_audio_first_window

0xca55,	// (0x0002aa78) call5_swipe_1_pane_g1_ParamLimits

0xca55,	// (0x0002aa78) call5_swipe_1_pane_g1

0xe304,	// (0x0002c327) call5_swipe_1_pane_g2_ParamLimits

0xe304,	// (0x0002c327) call5_swipe_1_pane_g2

0x0001,

0xfc4a,	// (0x0002dc6d) call5_swipe_1_pane_g_ParamLimits

0xfc4a,	// (0x0002dc6d) call5_swipe_1_pane_g

0xe310,	// (0x0002c333) call5_swipe_1_pane_t1_ParamLimits

0xe310,	// (0x0002c333) call5_swipe_1_pane_t1

0xca55,	// (0x0002aa78) call5_swipe_2_pane_g1_ParamLimits

0xca55,	// (0x0002aa78) call5_swipe_2_pane_g1

0xe325,	// (0x0002c348) call5_swipe_2_pane_g2_ParamLimits

0xe325,	// (0x0002c348) call5_swipe_2_pane_g2

0x0001,

0xfc4f,	// (0x0002dc72) call5_swipe_2_pane_g_ParamLimits

0xfc4f,	// (0x0002dc72) call5_swipe_2_pane_g

0xe331,	// (0x0002c354) call5_swipe_2_pane_t1_ParamLimits

0xe331,	// (0x0002c354) call5_swipe_2_pane_t1

0xe346,	// (0x0002c369) sc_swipe_pane_g1_ParamLimits

0xe346,	// (0x0002c369) sc_swipe_pane_g1

0xe353,	// (0x0002c376) sc_swipe_pane_g2_ParamLimits

0xe353,	// (0x0002c376) sc_swipe_pane_g2

0x0001,

0x0b9d,	// (0x0001ebc0) sc_swipe_pane_g_ParamLimits

0x0b9d,	// (0x0001ebc0) sc_swipe_pane_g

0xe35f,	// (0x0002c382) sc_swipe_pane_t1_ParamLimits

0xe35f,	// (0x0002c382) sc_swipe_pane_t1

0x10ce,	// (0x0001f0f1) main_cmail_launcher_pane

0x85c9,	// (0x000265ec) aid_size_cell_cmail_l_ParamLimits

0x85c9,	// (0x000265ec) aid_size_cell_cmail_l

0x85d9,	// (0x000265fc) grid_cmail_l_pane_ParamLimits

0x85d9,	// (0x000265fc) grid_cmail_l_pane

0x85e9,	// (0x0002660c) cell_cmail_l_pane_ParamLimits

0x85e9,	// (0x0002660c) cell_cmail_l_pane

0x85fd,	// (0x00026620) cell_cmail_l_pane_g1_ParamLimits

0x85fd,	// (0x00026620) cell_cmail_l_pane_g1

0x8609,	// (0x0002662c) cell_cmail_l_pane_t1_ParamLimits

0x8609,	// (0x0002662c) cell_cmail_l_pane_t1

0xe374,	// (0x0002c397) cell_cmail_l_pane_t2_ParamLimits

0xe374,	// (0x0002c397) cell_cmail_l_pane_t2

0x0001,

0xfc54,	// (0x0002dc77) cell_cmail_l_pane_t_ParamLimits

0xfc54,	// (0x0002dc77) cell_cmail_l_pane_t

0xa329,	// (0x0002834c) grid_highlight_pane_cp018_ParamLimits

0xa329,	// (0x0002834c) grid_highlight_pane_cp018

0x0f30,	// (0x0001ef53) main2_pane_ParamLimits

0x0f30,	// (0x0001ef53) main2_pane

0xa3d0,	// (0x000283f3) popup_sp_fs_action_menu_bg_pane_g1

0xa3d8,	// (0x000283fb) popup_sp_fs_action_menu_bg_pane_g2

0xa3e0,	// (0x00028403) popup_sp_fs_action_menu_bg_pane_g3

0xa3e8,	// (0x0002840b) popup_sp_fs_action_menu_bg_pane_g4

0xa3f0,	// (0x00028413) popup_sp_fs_action_menu_bg_pane_g5

0xa3f8,	// (0x0002841b) popup_sp_fs_action_menu_bg_pane_g6

0xa400,	// (0x00028423) popup_sp_fs_action_menu_bg_pane_g7

0xa408,	// (0x0002842b) popup_sp_fs_action_menu_bg_pane_g8

0xa410,	// (0x00028433) popup_sp_fs_action_menu_bg_pane_g9

0xa418,	// (0x0002843b) popup_sp_fs_action_menu_bg_pane_g10

0xa418,	// (0x0002843b) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18a,	// (0x0002d1ad) popup_sp_fs_action_menu_bg_pane_g

0x321c,	// (0x0002123f) list_medium_line_x2_t3_g3_g1_ParamLimits

0x321c,	// (0x0002123f) list_medium_line_x2_t3_g3_g1

0x3228,	// (0x0002124b) list_medium_line_x2_t3_g3_g2_ParamLimits

0x3228,	// (0x0002124b) list_medium_line_x2_t3_g3_g2

0x3234,	// (0x00021257) list_medium_line_x2_t3_g3_g3_ParamLimits

0x3234,	// (0x00021257) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x0002d25b) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x0002d25b) list_medium_line_x2_t3_g3_g

0x3240,	// (0x00021263) list_medium_line_x2_t3_g3_t1_ParamLimits

0x3240,	// (0x00021263) list_medium_line_x2_t3_g3_t1

0x3255,	// (0x00021278) list_medium_line_x2_t3_g3_t2_ParamLimits

0x3255,	// (0x00021278) list_medium_line_x2_t3_g3_t2

0x3267,	// (0x0002128a) list_medium_line_x2_t3_g3_t3_ParamLimits

0x3267,	// (0x0002128a) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x0002d262) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x0002d262) list_medium_line_x2_t3_g3_t

0x321c,	// (0x0002123f) list_medium_line_x2_t3_g2_g1_ParamLimits

0x321c,	// (0x0002123f) list_medium_line_x2_t3_g2_g1

0x3234,	// (0x00021257) list_medium_line_x2_t3_g2_g2_ParamLimits

0x3234,	// (0x00021257) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x0002d269) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x0002d269) list_medium_line_x2_t3_g2_g

0x327c,	// (0x0002129f) list_medium_line_x2_t3_g2_t1_ParamLimits

0x327c,	// (0x0002129f) list_medium_line_x2_t3_g2_t1

0x3292,	// (0x000212b5) list_medium_line_x2_t3_g2_t2_ParamLimits

0x3292,	// (0x000212b5) list_medium_line_x2_t3_g2_t2

0x32a4,	// (0x000212c7) list_medium_line_x2_t3_g2_t3_ParamLimits

0x32a4,	// (0x000212c7) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x0002d26e) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x0002d26e) list_medium_line_x2_t3_g2_t

0x321c,	// (0x0002123f) list_medium_line_x2_t4_g4_g1_ParamLimits

0x321c,	// (0x0002123f) list_medium_line_x2_t4_g4_g1

0x32c1,	// (0x000212e4) list_medium_line_x2_t4_g4_g2_ParamLimits

0x32c1,	// (0x000212e4) list_medium_line_x2_t4_g4_g2

0x3228,	// (0x0002124b) list_medium_line_x2_t4_g4_g3_ParamLimits

0x3228,	// (0x0002124b) list_medium_line_x2_t4_g4_g3

0x32cd,	// (0x000212f0) list_medium_line_x2_t4_g4_g4_ParamLimits

0x32cd,	// (0x000212f0) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x0002d275) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x0002d275) list_medium_line_x2_t4_g4_g

0x32d9,	// (0x000212fc) list_medium_line_x2_t4_g4_t1_ParamLimits

0x32d9,	// (0x000212fc) list_medium_line_x2_t4_g4_t1

0x32f3,	// (0x00021316) list_medium_line_x2_t4_g4_t2_ParamLimits

0x32f3,	// (0x00021316) list_medium_line_x2_t4_g4_t2

0x3309,	// (0x0002132c) list_medium_line_x2_t4_g4_t3_ParamLimits

0x3309,	// (0x0002132c) list_medium_line_x2_t4_g4_t3

0x331e,	// (0x00021341) list_medium_line_x2_t4_g4_t4_ParamLimits

0x331e,	// (0x00021341) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x0002d27e) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x0002d27e) list_medium_line_x2_t4_g4_t

0x321c,	// (0x0002123f) list_medium_line_x2_t2_g4_g1_ParamLimits

0x321c,	// (0x0002123f) list_medium_line_x2_t2_g4_g1

0x32c1,	// (0x000212e4) list_medium_line_x2_t2_g4_g2_ParamLimits

0x32c1,	// (0x000212e4) list_medium_line_x2_t2_g4_g2

0x3228,	// (0x0002124b) list_medium_line_x2_t2_g4_g3_ParamLimits

0x3228,	// (0x0002124b) list_medium_line_x2_t2_g4_g3

0x3234,	// (0x00021257) list_medium_line_x2_t2_g4_g4_ParamLimits

0x3234,	// (0x00021257) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x0002d2e5) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x0002d2e5) list_medium_line_x2_t2_g4_g

0x446e,	// (0x00022491) list_medium_line_x2_t2_g4_t1_ParamLimits

0x446e,	// (0x00022491) list_medium_line_x2_t2_g4_t1

0x3267,	// (0x0002128a) list_medium_line_x2_t2_g4_t2_ParamLimits

0x3267,	// (0x0002128a) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x0002d2ee) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x0002d2ee) list_medium_line_x2_t2_g4_t

0x321c,	// (0x0002123f) list_medium_line_x2_t2_g3_g1_ParamLimits

0x321c,	// (0x0002123f) list_medium_line_x2_t2_g3_g1

0x3228,	// (0x0002124b) list_medium_line_x2_t2_g3_g2_ParamLimits

0x3228,	// (0x0002124b) list_medium_line_x2_t2_g3_g2

0x3234,	// (0x00021257) list_medium_line_x2_t2_g3_g3_ParamLimits

0x3234,	// (0x00021257) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x0002d25b) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x0002d25b) list_medium_line_x2_t2_g3_g

0x4483,	// (0x000224a6) list_medium_line_x2_t2_g3_t1_ParamLimits

0x4483,	// (0x000224a6) list_medium_line_x2_t2_g3_t1

0x3267,	// (0x0002128a) list_medium_line_x2_t2_g3_t2_ParamLimits

0x3267,	// (0x0002128a) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x0002d2f3) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x0002d2f3) list_medium_line_x2_t2_g3_t

0x45f0,	// (0x00022613) main_sp_fs_list_pane_ParamLimits

0x45f0,	// (0x00022613) main_sp_fs_list_pane

0x45fc,	// (0x0002261f) sp_fs_scroll_pane_ParamLimits

0x45fc,	// (0x0002261f) sp_fs_scroll_pane

0x4608,	// (0x0002262b) list_medium_line_x2_t3_t1

0x4618,	// (0x0002263b) list_medium_line_x2_t3_t2

0x4626,	// (0x00022649) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x0002d33e) list_medium_line_x2_t3_t

0x4634,	// (0x00022657) list_medium_line_x3_t4_t1

0x4644,	// (0x00022667) list_medium_line_x3_t4_t2

0x4652,	// (0x00022675) list_medium_line_x3_t4_t3

0x4626,	// (0x00022649) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x0002d345) list_medium_line_x3_t4_t

0x4660,	// (0x00022683) list_medium_line_x4_t5_t1

0x4670,	// (0x00022693) list_medium_line_x4_t5_t2

0x4652,	// (0x00022675) list_medium_line_x4_t5_t3

0x467e,	// (0x000226a1) list_medium_line_x4_t5_t4

0x4626,	// (0x00022649) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x0002d34e) list_medium_line_x4_t5_t

0x321c,	// (0x0002123f) list_medium_line_t4_g4_g1_ParamLimits

0x321c,	// (0x0002123f) list_medium_line_t4_g4_g1

0x468c,	// (0x000226af) list_medium_line_t4_g4_g2_ParamLimits

0x468c,	// (0x000226af) list_medium_line_t4_g4_g2

0x4698,	// (0x000226bb) list_medium_line_t4_g4_g3_ParamLimits

0x4698,	// (0x000226bb) list_medium_line_t4_g4_g3

0x3234,	// (0x00021257) list_medium_line_t4_g4_g4_ParamLimits

0x3234,	// (0x00021257) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x0002d359) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x0002d359) list_medium_line_t4_g4_g

0x46a4,	// (0x000226c7) list_medium_line_t4_g4_t1_ParamLimits

0x46a4,	// (0x000226c7) list_medium_line_t4_g4_t1

0x46b9,	// (0x000226dc) list_medium_line_t4_g4_t2_ParamLimits

0x46b9,	// (0x000226dc) list_medium_line_t4_g4_t2

0x46ce,	// (0x000226f1) list_medium_line_t4_g4_t3_ParamLimits

0x46ce,	// (0x000226f1) list_medium_line_t4_g4_t3

0x3267,	// (0x0002128a) list_medium_line_t4_g4_t4_ParamLimits

0x3267,	// (0x0002128a) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x0002d362) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x0002d362) list_medium_line_t4_g4_t

0x4771,	// (0x00022794) chi_dic_find_pane_g1

0x1544,	// (0x0001f567) main_tport_pane

0x718e,	// (0x000251b1) list_medium_line_plain_t1

0x71b4,	// (0x000251d7) list_medium_line_t2_g2_g1_ParamLimits

0x71b4,	// (0x000251d7) list_medium_line_t2_g2_g1

0x71c0,	// (0x000251e3) list_medium_line_t2_g2_g2_ParamLimits

0x71c0,	// (0x000251e3) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x0002da23) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x0002da23) list_medium_line_t2_g2_g

0x71cc,	// (0x000251ef) list_medium_line_t2_g2_t1_ParamLimits

0x71cc,	// (0x000251ef) list_medium_line_t2_g2_t1

0x71e6,	// (0x00025209) list_medium_line_t2_g2_t2_ParamLimits

0x71e6,	// (0x00025209) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x0002da28) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x0002da28) list_medium_line_t2_g2_t

0xd853,	// (0x0002b876) aid_sp_fs_list_icon_a_sm

0xd85b,	// (0x0002b87e) aid_sp_fs_list_icon_d

0xd863,	// (0x0002b886) aid_sp_fs_text_primary

0xd86c,	// (0x0002b88f) aid_sp_fs_text_secondary

0x774b,	// (0x0002576e) list_medium_line

0x774b,	// (0x0002576e) list_medium_line_g2

0x774b,	// (0x0002576e) list_medium_line_g3

0x774b,	// (0x0002576e) list_medium_line_plain

0x774b,	// (0x0002576e) list_medium_line_plain_t2

0x774b,	// (0x0002576e) list_medium_line_plain_t3

0x774b,	// (0x0002576e) list_medium_line_right_icon

0x774b,	// (0x0002576e) list_medium_line_right_iconx2

0x774b,	// (0x0002576e) list_medium_line_t2

0x774b,	// (0x0002576e) list_medium_line_t2_g2

0x774b,	// (0x0002576e) list_medium_line_t2_g3

0x774b,	// (0x0002576e) list_medium_line_t2_right_icon

0x774b,	// (0x0002576e) list_medium_line_t2_right_iconx2

0x774b,	// (0x0002576e) list_medium_line_t3

0x774b,	// (0x0002576e) list_medium_line_t3_g2

0x774b,	// (0x0002576e) list_medium_line_t3_g3

0x774b,	// (0x0002576e) list_medium_line_t3_right_iconx2

0x7754,	// (0x00025777) list_medium_line_t4_g4

0xe2a1,	// (0x0002c2c4) list_medium_line_x2

0xe2a1,	// (0x0002c2c4) list_medium_line_x2_t2_g2

0xe2a1,	// (0x0002c2c4) list_medium_line_x2_t2_g3

0xe2a1,	// (0x0002c2c4) list_medium_line_x2_t2_g4

0xe2a1,	// (0x0002c2c4) list_medium_line_x2_t3

0xe2a1,	// (0x0002c2c4) list_medium_line_x2_t3_g2

0xe2a1,	// (0x0002c2c4) list_medium_line_x2_t3_g3

0xe2a1,	// (0x0002c2c4) list_medium_line_x2_t3_g4

0xe2a1,	// (0x0002c2c4) list_medium_line_x2_t4_g2

0xe2a1,	// (0x0002c2c4) list_medium_line_x2_t4_g4

0x775d,	// (0x00025780) list_medium_line_x3

0x775d,	// (0x00025780) list_medium_line_x3_t4

0x775d,	// (0x00025780) list_medium_line_x3_t4_g4

0x7754,	// (0x00025777) list_medium_line_x4_t4

0x7754,	// (0x00025777) list_medium_line_x4_t4_g7

0x7754,	// (0x00025777) list_medium_line_x4_t5

0x7766,	// (0x00025789) list_single_fs_dyc_pane_ParamLimits

0x7766,	// (0x00025789) list_single_fs_dyc_pane

0x321c,	// (0x0002123f) list_medium_line_x4_t4_g7_g1_ParamLimits

0x321c,	// (0x0002123f) list_medium_line_x4_t4_g7_g1

0x7e38,	// (0x00025e5b) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7e38,	// (0x00025e5b) list_medium_line_x4_t4_g7_g2

0x7e44,	// (0x00025e67) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7e44,	// (0x00025e67) list_medium_line_x4_t4_g7_g3

0x7e53,	// (0x00025e76) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7e53,	// (0x00025e76) list_medium_line_x4_t4_g7_g4

0x7e5f,	// (0x00025e82) list_medium_line_x4_t4_g7_g5_ParamLimits

0x7e5f,	// (0x00025e82) list_medium_line_x4_t4_g7_g5

0x7e6e,	// (0x00025e91) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7e6e,	// (0x00025e91) list_medium_line_x4_t4_g7_g6

0x7e7d,	// (0x00025ea0) list_medium_line_x4_t4_g7_g7_ParamLimits

0x7e7d,	// (0x00025ea0) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbae,	// (0x0002dbd1) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbae,	// (0x0002dbd1) list_medium_line_x4_t4_g7_g

0x7e89,	// (0x00025eac) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7e89,	// (0x00025eac) list_medium_line_x4_t4_g7_t1

0x7e9e,	// (0x00025ec1) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7e9e,	// (0x00025ec1) list_medium_line_x4_t4_g7_t2

0x7eb3,	// (0x00025ed6) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7eb3,	// (0x00025ed6) list_medium_line_x4_t4_g7_t3

0x7ec8,	// (0x00025eeb) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7ec8,	// (0x00025eeb) list_medium_line_x4_t4_g7_t4

0x7eda,	// (0x00025efd) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7eda,	// (0x00025efd) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbbd,	// (0x0002dbe0) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbbd,	// (0x0002dbe0) list_medium_line_x4_t4_g7_t

0x7eec,	// (0x00025f0f) list_single_dyc_row_pane_ParamLimits

0x7eec,	// (0x00025f0f) list_single_dyc_row_pane

0x8579,	// (0x0002659c) call5_gesture_pane_ParamLimits

0x8579,	// (0x0002659c) call5_gesture_pane

0x85ad,	// (0x000265d0) call5_windows_pane_ParamLimits

0x85ad,	// (0x000265d0) call5_windows_pane

0x861f,	// (0x00026642) call5_swipe_1_pane_cp_ParamLimits

0x861f,	// (0x00026642) call5_swipe_1_pane_cp

0x862b,	// (0x0002664e) call5_swipe_2_pane_cp_ParamLimits

0x862b,	// (0x0002664e) call5_swipe_2_pane_cp

0xa4fc,	// (0x0002851f) call5_image_pane_cp

0x8637,	// (0x0002665a) popup_call5_audio_first_window_cp_ParamLimits

0x8637,	// (0x0002665a) popup_call5_audio_first_window_cp

0xe346,	// (0x0002c369) call5_swipe_1_pane_g1_cp_ParamLimits

0xe346,	// (0x0002c369) call5_swipe_1_pane_g1_cp

0xe386,	// (0x0002c3a9) call5_swipe_1_pane_g2_cp

0xe35f,	// (0x0002c382) call5_swipe_1_pane_t1_cp_ParamLimits

0xe35f,	// (0x0002c382) call5_swipe_1_pane_t1_cp

0xe346,	// (0x0002c369) call5_swipe_2_pane_g1_cp_ParamLimits

0xe346,	// (0x0002c369) call5_swipe_2_pane_g1_cp

0xe38e,	// (0x0002c3b1) call5_swipe_2_pane_g2_cp

0xe396,	// (0x0002c3b9) call5_swipe_2_pane_t1_cp_ParamLimits

0xe396,	// (0x0002c3b9) call5_swipe_2_pane_t1_cp

0xa329,	// (0x0002834c) main_sp_fs_email_pane

0xe3ab,	// (0x0002c3ce) main_sp_fs_listscroll_pane_te

0x8645,	// (0x00026668) popup_sp_fs_action_menu_pane_ParamLimits

0x8645,	// (0x00026668) popup_sp_fs_action_menu_pane

0xc7f2,	// (0x0002a815) bg_sp_fs_ctrlbar_pane_g1

0xe3b4,	// (0x0002c3d7) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe3bd,	// (0x0002c3e0) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe3c6,	// (0x0002c3e9) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc7f2,	// (0x0002a815) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc59,	// (0x0002dc7c) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc5ce,	// (0x0002a5f1) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc5ce,	// (0x0002a5f1) bg_sp_fs_ctrlbar_ddmenu_pane

0xe3cf,	// (0x0002c3f2) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe3cf,	// (0x0002c3f2) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe3db,	// (0x0002c3fe) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe3db,	// (0x0002c3fe) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0x0bb0,	// (0x0001ebd3) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0x0bb0,	// (0x0001ebd3) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe3e7,	// (0x0002c40a) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe3e7,	// (0x0002c40a) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x8689,	// (0x000266ac) list_medium_line_t2_right_icon_g1

0x8691,	// (0x000266b4) list_medium_line_t2_right_icon_t1

0x86a1,	// (0x000266c4) list_medium_line_t2_right_icon_t2

0x0001,

0xfc62,	// (0x0002dc85) list_medium_line_t2_right_icon_t

0xc3e1,	// (0x0002a404) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc3e1,	// (0x0002a404) bg_sp_fs_ctrlbar_pane

0x8706,	// (0x00026729) main_sp_fs_ctrlbar_button_pane_cp01

0x870e,	// (0x00026731) main_sp_fs_ctrlbar_ddmenu_pane

0xe439,	// (0x0002c45c) main_sp_fs_ctrlbar_pane_g1

0xe445,	// (0x0002c468) main_sp_fs_ctrlbar_pane_g2

0x0001,

0x0bba,	// (0x0001ebdd) main_sp_fs_ctrlbar_pane_g

0xe451,	// (0x0002c474) main_sp_fs_ctrlbar_pane_t1

0x8718,	// (0x0002673b) main_sp_fs_ctrlbar_pane

0x872e,	// (0x00026751) main_sp_fs_listscroll_pane_te_cp01

0x873f,	// (0x00026762) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x873f,	// (0x00026762) popup_sp_fs_action_menu_pane_cp01

0xa329,	// (0x0002834c) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa329,	// (0x0002834c) bg_sp_fs_highlight_list_pane_cp01

0xe481,	// (0x0002c4a4) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe481,	// (0x0002c4a4) sp_fs_action_menu_list_gene_pane_g1

0xe490,	// (0x0002c4b3) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe490,	// (0x0002c4b3) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0x0bc4,	// (0x0001ebe7) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0x0bc4,	// (0x0001ebe7) sp_fs_action_menu_list_gene_pane_g

0xe49d,	// (0x0002c4c0) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe49d,	// (0x0002c4c0) sp_fs_action_menu_list_gene_pane_t1

0xe4b5,	// (0x0002c4d8) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe4b5,	// (0x0002c4d8) sp_fs_action_menu_list_gene_pane

0xe4d6,	// (0x0002c4f9) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe4d6,	// (0x0002c4f9) popup_sp_fs_action_menu_bg_pane

0xe4e4,	// (0x0002c507) sp_fs_action_menu_list_pane_ParamLimits

0xe4e4,	// (0x0002c507) sp_fs_action_menu_list_pane

0x8769,	// (0x0002678c) sp_fs_scroll_pane_cp01_ParamLimits

0x8769,	// (0x0002678c) sp_fs_scroll_pane_cp01

0x878f,	// (0x000267b2) list_medium_line_plain_t2_t1

0x879f,	// (0x000267c2) list_medium_line_plain_t2_t2

0x0001,

0xfc67,	// (0x0002dc8a) list_medium_line_plain_t2_t

0x87ad,	// (0x000267d0) list_medium_line_plain_t3_t1

0x87bd,	// (0x000267e0) list_medium_line_plain_t3_t2

0x87cb,	// (0x000267ee) list_medium_line_plain_t3_t3

0x0002,

0xfc6c,	// (0x0002dc8f) list_medium_line_plain_t3_t

0x321c,	// (0x0002123f) list_medium_line_x2_t2_g2_g1_ParamLimits

0x321c,	// (0x0002123f) list_medium_line_x2_t2_g2_g1

0x3234,	// (0x00021257) list_medium_line_x2_t2_g2_g2_ParamLimits

0x3234,	// (0x00021257) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x0002d269) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x0002d269) list_medium_line_x2_t2_g2_g

0x46a4,	// (0x000226c7) list_medium_line_x2_t2_g2_t1_ParamLimits

0x46a4,	// (0x000226c7) list_medium_line_x2_t2_g2_t1

0x3267,	// (0x0002128a) list_medium_line_x2_t2_g2_t2_ParamLimits

0x3267,	// (0x0002128a) list_medium_line_x2_t2_g2_t2

0x0001,

0xfc73,	// (0x0002dc96) list_medium_line_x2_t2_g2_t_ParamLimits

0xfc73,	// (0x0002dc96) list_medium_line_x2_t2_g2_t

0x321c,	// (0x0002123f) list_medium_line_x2_t4_g2_g1_ParamLimits

0x321c,	// (0x0002123f) list_medium_line_x2_t4_g2_g1

0x3234,	// (0x00021257) list_medium_line_x2_t4_g2_g2_ParamLimits

0x3234,	// (0x00021257) list_medium_line_x2_t4_g2_g2

0x0001,

0xf246,	// (0x0002d269) list_medium_line_x2_t4_g2_g_ParamLimits

0xf246,	// (0x0002d269) list_medium_line_x2_t4_g2_g

0x87d9,	// (0x000267fc) list_medium_line_x2_t4_g2_t1_ParamLimits

0x87d9,	// (0x000267fc) list_medium_line_x2_t4_g2_t1

0x87f0,	// (0x00026813) list_medium_line_x2_t4_g2_t2_ParamLimits

0x87f0,	// (0x00026813) list_medium_line_x2_t4_g2_t2

0x8805,	// (0x00026828) list_medium_line_x2_t4_g2_t3_ParamLimits

0x8805,	// (0x00026828) list_medium_line_x2_t4_g2_t3

0x3267,	// (0x0002128a) list_medium_line_x2_t4_g2_t4_ParamLimits

0x3267,	// (0x0002128a) list_medium_line_x2_t4_g2_t4

0x0003,

0xfc78,	// (0x0002dc9b) list_medium_line_x2_t4_g2_t_ParamLimits

0xfc78,	// (0x0002dc9b) list_medium_line_x2_t4_g2_t

0x8817,	// (0x0002683a) list_medium_line_t3_right_iconx2_g1

0x8689,	// (0x000266ac) list_medium_line_t3_right_iconx2_g2

0x881f,	// (0x00026842) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfc81,	// (0x0002dca4) list_medium_line_t3_right_iconx2_g

0x8827,	// (0x0002684a) list_medium_line_t3_right_iconx2_t1

0x8837,	// (0x0002685a) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc88,	// (0x0002dcab) list_medium_line_t3_right_iconx2_t

0x321c,	// (0x0002123f) list_medium_line_x3_t4_g4_g1_ParamLimits

0x321c,	// (0x0002123f) list_medium_line_x3_t4_g4_g1

0x3228,	// (0x0002124b) list_medium_line_x3_t4_g4_g2_ParamLimits

0x3228,	// (0x0002124b) list_medium_line_x3_t4_g4_g2

0x468c,	// (0x000226af) list_medium_line_x3_t4_g4_g3_ParamLimits

0x468c,	// (0x000226af) list_medium_line_x3_t4_g4_g3

0x8845,	// (0x00026868) list_medium_line_x3_t4_g4_g4_ParamLimits

0x8845,	// (0x00026868) list_medium_line_x3_t4_g4_g4

0x0003,

0xfc8d,	// (0x0002dcb0) list_medium_line_x3_t4_g4_g_ParamLimits

0xfc8d,	// (0x0002dcb0) list_medium_line_x3_t4_g4_g

0x8851,	// (0x00026874) list_medium_line_x3_t4_g4_t1_ParamLimits

0x8851,	// (0x00026874) list_medium_line_x3_t4_g4_t1

0x8868,	// (0x0002688b) list_medium_line_x3_t4_g4_t2_ParamLimits

0x8868,	// (0x0002688b) list_medium_line_x3_t4_g4_t2

0x46b9,	// (0x000226dc) list_medium_line_x3_t4_g4_t3_ParamLimits

0x46b9,	// (0x000226dc) list_medium_line_x3_t4_g4_t3

0x887d,	// (0x000268a0) list_medium_line_x3_t4_g4_t4_ParamLimits

0x887d,	// (0x000268a0) list_medium_line_x3_t4_g4_t4

0x0003,

0xfc96,	// (0x0002dcb9) list_medium_line_x3_t4_g4_t_ParamLimits

0xfc96,	// (0x0002dcb9) list_medium_line_x3_t4_g4_t

0x889a,	// (0x000268bd) list_single_dyc_row_text_pane_t1_ParamLimits

0x889a,	// (0x000268bd) list_single_dyc_row_text_pane_t1

0x88d1,	// (0x000268f4) list_single_dyc_row_text_pane_t2_ParamLimits

0x88d1,	// (0x000268f4) list_single_dyc_row_text_pane_t2

0xe506,	// (0x0002c529) list_single_dyc_row_text_pane_t3_ParamLimits

0xe506,	// (0x0002c529) list_single_dyc_row_text_pane_t3

0x0005,

0xfc9f,	// (0x0002dcc2) list_single_dyc_row_text_pane_t_ParamLimits

0xfc9f,	// (0x0002dcc2) list_single_dyc_row_text_pane_t

0xe52a,	// (0x0002c54d) list_single_dyc_row_pane_g1_ParamLimits

0xe52a,	// (0x0002c54d) list_single_dyc_row_pane_g1

0xe536,	// (0x0002c559) list_single_dyc_row_pane_g2_ParamLimits

0xe536,	// (0x0002c559) list_single_dyc_row_pane_g2

0xe542,	// (0x0002c565) list_single_dyc_row_pane_g3_ParamLimits

0xe542,	// (0x0002c565) list_single_dyc_row_pane_g3

0xe54e,	// (0x0002c571) list_single_dyc_row_pane_g4_ParamLimits

0xe54e,	// (0x0002c571) list_single_dyc_row_pane_g4

0x0003,

0x0c0e,	// (0x0001ec31) list_single_dyc_row_pane_g_ParamLimits

0x0c0e,	// (0x0001ec31) list_single_dyc_row_pane_g

0xe55a,	// (0x0002c57d) list_single_dyc_row_text_pane_ParamLimits

0xe55a,	// (0x0002c57d) list_single_dyc_row_text_pane

0x9bec,	// (0x00027c0f) bg_sp_fs_scroll_pane

0xe579,	// (0x0002c59c) thumb_sp_fs_scroll_pane

0x71b4,	// (0x000251d7) list_medium_line_g1_ParamLimits

0x71b4,	// (0x000251d7) list_medium_line_g1

0x89f4,	// (0x00026a17) list_medium_line_t1_ParamLimits

0x89f4,	// (0x00026a17) list_medium_line_t1

0x321c,	// (0x0002123f) list_medium_line_x2_g1_ParamLimits

0x321c,	// (0x0002123f) list_medium_line_x2_g1

0x3228,	// (0x0002124b) list_medium_line_x2_g2_ParamLimits

0x3228,	// (0x0002124b) list_medium_line_x2_g2

0x0001,

0xfcac,	// (0x0002dccf) list_medium_line_x2_g_ParamLimits

0xfcac,	// (0x0002dccf) list_medium_line_x2_g

0xe582,	// (0x0002c5a5) list_medium_line_x2_t1_ParamLimits

0xe582,	// (0x0002c5a5) list_medium_line_x2_t1

0x321c,	// (0x0002123f) list_medium_line_x3_g1_ParamLimits

0x321c,	// (0x0002123f) list_medium_line_x3_g1

0x3228,	// (0x0002124b) list_medium_line_x3_g2_ParamLimits

0x3228,	// (0x0002124b) list_medium_line_x3_g2

0x0001,

0xfcac,	// (0x0002dccf) list_medium_line_x3_g_ParamLimits

0xfcac,	// (0x0002dccf) list_medium_line_x3_g

0xe582,	// (0x0002c5a5) list_medium_line_x3_t1_ParamLimits

0xe582,	// (0x0002c5a5) list_medium_line_x3_t1

0xe598,	// (0x0002c5bb) thumb_sp_fs_scroll_pane_g1

0xe5a1,	// (0x0002c5c4) thumb_sp_fs_scroll_pane_g2

0xe5aa,	// (0x0002c5cd) thumb_sp_fs_scroll_pane_g3

0x0002,

0x0c1c,	// (0x0001ec3f) thumb_sp_fs_scroll_pane_g

0xe598,	// (0x0002c5bb) bg_sp_fs_scroll_pane_g1

0xe5a1,	// (0x0002c5c4) bg_sp_fs_scroll_pane_g2

0xe5aa,	// (0x0002c5cd) bg_sp_fs_scroll_pane_g3

0x0002,

0x0c1c,	// (0x0001ec3f) bg_sp_fs_scroll_pane_g

0x321c,	// (0x0002123f) list_medium_line_x2_t3_g4_g1_ParamLimits

0x321c,	// (0x0002123f) list_medium_line_x2_t3_g4_g1

0x32c1,	// (0x000212e4) list_medium_line_x2_t3_g4_g2_ParamLimits

0x32c1,	// (0x000212e4) list_medium_line_x2_t3_g4_g2

0x3228,	// (0x0002124b) list_medium_line_x2_t3_g4_g3_ParamLimits

0x3228,	// (0x0002124b) list_medium_line_x2_t3_g4_g3

0x3234,	// (0x00021257) list_medium_line_x2_t3_g4_g4_ParamLimits

0x3234,	// (0x00021257) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x0002d2e5) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x0002d2e5) list_medium_line_x2_t3_g4_g

0x8a09,	// (0x00026a2c) list_medium_line_x2_t3_g4_t1_ParamLimits

0x8a09,	// (0x00026a2c) list_medium_line_x2_t3_g4_t1

0x8a1f,	// (0x00026a42) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8a1f,	// (0x00026a42) list_medium_line_x2_t3_g4_t2

0x3267,	// (0x0002128a) list_medium_line_x2_t3_g4_t3_ParamLimits

0x3267,	// (0x0002128a) list_medium_line_x2_t3_g4_t3

0x0002,

0xfcb1,	// (0x0002dcd4) list_medium_line_x2_t3_g4_t_ParamLimits

0xfcb1,	// (0x0002dcd4) list_medium_line_x2_t3_g4_t

0x71b4,	// (0x000251d7) list_medium_line_g2_g1_ParamLimits

0x71b4,	// (0x000251d7) list_medium_line_g2_g1

0x71c0,	// (0x000251e3) list_medium_line_g2_g2_ParamLimits

0x71c0,	// (0x000251e3) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x0002da23) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x0002da23) list_medium_line_g2_g

0x8a38,	// (0x00026a5b) list_medium_line_g2_t1_ParamLimits

0x8a38,	// (0x00026a5b) list_medium_line_g2_t1

0x71b4,	// (0x000251d7) list_medium_line_t3_g2_g1_ParamLimits

0x71b4,	// (0x000251d7) list_medium_line_t3_g2_g1

0x71c0,	// (0x000251e3) list_medium_line_t3_g2_g2_ParamLimits

0x71c0,	// (0x000251e3) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x0002da23) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x0002da23) list_medium_line_t3_g2_g

0x8a4d,	// (0x00026a70) list_medium_line_t3_g2_t1_ParamLimits

0x8a4d,	// (0x00026a70) list_medium_line_t3_g2_t1

0x8a67,	// (0x00026a8a) list_medium_line_t3_g2_t2_ParamLimits

0x8a67,	// (0x00026a8a) list_medium_line_t3_g2_t2

0x8a7d,	// (0x00026aa0) list_medium_line_t3_g2_t3_ParamLimits

0x8a7d,	// (0x00026aa0) list_medium_line_t3_g2_t3

0x0002,

0xfcb8,	// (0x0002dcdb) list_medium_line_t3_g2_t_ParamLimits

0xfcb8,	// (0x0002dcdb) list_medium_line_t3_g2_t

0x8689,	// (0x000266ac) list_medium_line_right_icon_g1

0x8a92,	// (0x00026ab5) list_medium_line_right_icon_t1

0x71b4,	// (0x000251d7) list_medium_line_t2_g1_ParamLimits

0x71b4,	// (0x000251d7) list_medium_line_t2_g1

0x8aa0,	// (0x00026ac3) list_medium_line_t2_t1_ParamLimits

0x8aa0,	// (0x00026ac3) list_medium_line_t2_t1

0x8aba,	// (0x00026add) list_medium_line_t2_t2_ParamLimits

0x8aba,	// (0x00026add) list_medium_line_t2_t2

0x0001,

0xfcbf,	// (0x0002dce2) list_medium_line_t2_t_ParamLimits

0xfcbf,	// (0x0002dce2) list_medium_line_t2_t

0x71b4,	// (0x000251d7) list_medium_line_t3_g1_ParamLimits

0x71b4,	// (0x000251d7) list_medium_line_t3_g1

0x8acf,	// (0x00026af2) list_medium_line_t3_t1_ParamLimits

0x8acf,	// (0x00026af2) list_medium_line_t3_t1

0x8ae6,	// (0x00026b09) list_medium_line_t3_t2_ParamLimits

0x8ae6,	// (0x00026b09) list_medium_line_t3_t2

0x8afb,	// (0x00026b1e) list_medium_line_t3_t3_ParamLimits

0x8afb,	// (0x00026b1e) list_medium_line_t3_t3

0x0002,

0xfcc4,	// (0x0002dce7) list_medium_line_t3_t_ParamLimits

0xfcc4,	// (0x0002dce7) list_medium_line_t3_t

0x71b4,	// (0x000251d7) list_medium_line_g3_g1_ParamLimits

0x71b4,	// (0x000251d7) list_medium_line_g3_g1

0x8b0d,	// (0x00026b30) list_medium_line_g3_g2_ParamLimits

0x8b0d,	// (0x00026b30) list_medium_line_g3_g2

0x71c0,	// (0x000251e3) list_medium_line_g3_g3_ParamLimits

0x71c0,	// (0x000251e3) list_medium_line_g3_g3

0x0002,

0xfccb,	// (0x0002dcee) list_medium_line_g3_g_ParamLimits

0xfccb,	// (0x0002dcee) list_medium_line_g3_g

0x8b19,	// (0x00026b3c) list_medium_line_g3_t1_ParamLimits

0x8b19,	// (0x00026b3c) list_medium_line_g3_t1

0x71b4,	// (0x000251d7) list_medium_line_t2_g3_g1_ParamLimits

0x71b4,	// (0x000251d7) list_medium_line_t2_g3_g1

0x8b0d,	// (0x00026b30) list_medium_line_t2_g3_g2_ParamLimits

0x8b0d,	// (0x00026b30) list_medium_line_t2_g3_g2

0x71c0,	// (0x000251e3) list_medium_line_t2_g3_g3_ParamLimits

0x71c0,	// (0x000251e3) list_medium_line_t2_g3_g3

0x0002,

0xfccb,	// (0x0002dcee) list_medium_line_t2_g3_g_ParamLimits

0xfccb,	// (0x0002dcee) list_medium_line_t2_g3_g

0x8b2e,	// (0x00026b51) list_medium_line_t2_g3_t1_ParamLimits

0x8b2e,	// (0x00026b51) list_medium_line_t2_g3_t1

0x8b48,	// (0x00026b6b) list_medium_line_t2_g3_t2_ParamLimits

0x8b48,	// (0x00026b6b) list_medium_line_t2_g3_t2

0x0001,

0xfcd2,	// (0x0002dcf5) list_medium_line_t2_g3_t_ParamLimits

0xfcd2,	// (0x0002dcf5) list_medium_line_t2_g3_t

0x71b4,	// (0x000251d7) list_medium_line_t3_g3_g1_ParamLimits

0x71b4,	// (0x000251d7) list_medium_line_t3_g3_g1

0x8b0d,	// (0x00026b30) list_medium_line_t3_g3_g2_ParamLimits

0x8b0d,	// (0x00026b30) list_medium_line_t3_g3_g2

0x71c0,	// (0x000251e3) list_medium_line_t3_g3_g3_ParamLimits

0x71c0,	// (0x000251e3) list_medium_line_t3_g3_g3

0x0002,

0xfccb,	// (0x0002dcee) list_medium_line_t3_g3_g_ParamLimits

0xfccb,	// (0x0002dcee) list_medium_line_t3_g3_g

0x8b5e,	// (0x00026b81) list_medium_line_t3_g3_t1_ParamLimits

0x8b5e,	// (0x00026b81) list_medium_line_t3_g3_t1

0x8b77,	// (0x00026b9a) list_medium_line_t3_g3_t2_ParamLimits

0x8b77,	// (0x00026b9a) list_medium_line_t3_g3_t2

0x8b8d,	// (0x00026bb0) list_medium_line_t3_g3_t3_ParamLimits

0x8b8d,	// (0x00026bb0) list_medium_line_t3_g3_t3

0x0002,

0xfcd7,	// (0x0002dcfa) list_medium_line_t3_g3_t_ParamLimits

0xfcd7,	// (0x0002dcfa) list_medium_line_t3_g3_t

0x8817,	// (0x0002683a) list_medium_line_right_iconx2_g1

0x8689,	// (0x000266ac) list_medium_line_right_iconx2_g2

0x0001,

0xfcde,	// (0x0002dd01) list_medium_line_right_iconx2_g

0x8ba3,	// (0x00026bc6) list_medium_line_right_iconx2_t1

0x8817,	// (0x0002683a) list_medium_line_t2_right_iconx2_g1

0x8689,	// (0x000266ac) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfcde,	// (0x0002dd01) list_medium_line_t2_right_iconx2_g

0x8bb1,	// (0x00026bd4) list_medium_line_t2_right_iconx2_t1

0x8bc1,	// (0x00026be4) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfce3,	// (0x0002dd06) list_medium_line_t2_right_iconx2_t

0x8bcf,	// (0x00026bf2) list_medium_line_x4_t4_t1

0x8bdd,	// (0x00026c00) list_medium_line_x4_t4_t2

0x8bed,	// (0x00026c10) list_medium_line_x4_t4_t3

0x8bfd,	// (0x00026c20) list_medium_line_x4_t4_t4

0x0003,

0xfce8,	// (0x0002dd0b) list_medium_line_x4_t4_t

0x8c37,	// (0x00026c5a) tport_appsw_pane_ParamLimits

0x8c37,	// (0x00026c5a) tport_appsw_pane

0x8c45,	// (0x00026c68) tport_contact_pane_ParamLimits

0x8c45,	// (0x00026c68) tport_contact_pane

0x8c55,	// (0x00026c78) tport_listscroll_pane_ParamLimits

0x8c55,	// (0x00026c78) tport_listscroll_pane

0x8c65,	// (0x00026c88) cell_tport_appsw_pane_ParamLimits

0x8c65,	// (0x00026c88) cell_tport_appsw_pane

0xcae6,	// (0x0002ab09) tport_appsw_pane_g1_ParamLimits

0xcae6,	// (0x0002ab09) tport_appsw_pane_g1

0xe5b3,	// (0x0002c5d6) tport_contact_pane_g1

0xde4c,	// (0x0002be6f) tport_contact_pane_t1

0xe5bc,	// (0x0002c5df) tport_contact_pane_t2

0x0001,

0x0c63,	// (0x0001ec86) tport_contact_pane_t

0xe5ca,	// (0x0002c5ed) list_tport_pane

0xe5d3,	// (0x0002c5f6) scroll_pane_cp_030

0x8c98,	// (0x00026cbb) cell_tport_appsw_pane_g1

0x8ca8,	// (0x00026ccb) cell_tport_appsw_pane_t1

0x8cb6,	// (0x00026cd9) grid_highlight_pane_cp019

0x8cbe,	// (0x00026ce1) list_tport_double_graphic_pane_ParamLimits

0x8cbe,	// (0x00026ce1) list_tport_double_graphic_pane

0xa329,	// (0x0002834c) list_highlight_pane_cp023_ParamLimits

0xa329,	// (0x0002834c) list_highlight_pane_cp023

0x8ccf,	// (0x00026cf2) list_tport_double_graphic_pane_g1_ParamLimits

0x8ccf,	// (0x00026cf2) list_tport_double_graphic_pane_g1

0x8cdc,	// (0x00026cff) list_tport_double_graphic_pane_t1_ParamLimits

0x8cdc,	// (0x00026cff) list_tport_double_graphic_pane_t1

0x8cf1,	// (0x00026d14) list_tport_double_graphic_pane_t2_ParamLimits

0x8cf1,	// (0x00026d14) list_tport_double_graphic_pane_t2

0x0001,

0xfcf8,	// (0x0002dd1b) list_tport_double_graphic_pane_t_ParamLimits

0xfcf8,	// (0x0002dd1b) list_tport_double_graphic_pane_t

0x9bec,	// (0x00027c0f) main_cale_note_pane

0x227b,	// (0x0002029e) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x227b,	// (0x0002029e) cell_vitu2_function_top_wide_pane_cp01

0x824e,	// (0x00026271) wait_bar_pane_cp05_ParamLimits

0xa329,	// (0x0002834c) listscroll_cmail_pane

0xe5dc,	// (0x0002c5ff) list_cmail_pane

0x8d03,	// (0x00026d26) list_cmail_body_pane

0x8d23,	// (0x00026d46) list_single_cmail_header_caption_pane

0x8d4e,	// (0x00026d71) list_single_cmail_header_detail_pane_ParamLimits

0x8d4e,	// (0x00026d71) list_single_cmail_header_detail_pane

0xe5ec,	// (0x0002c60f) list_single_cmail_header_caption_pane_t1

0x8d84,	// (0x00026da7) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8d84,	// (0x00026da7) list_single_cmail_header_detail_pane_g1

0xe603,	// (0x0002c626) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe603,	// (0x0002c626) list_single_cmail_header_detail_pane_g2

0x0002,

0xfcfd,	// (0x0002dd20) list_single_cmail_header_detail_pane_g_ParamLimits

0xfcfd,	// (0x0002dd20) list_single_cmail_header_detail_pane_g

0xe61c,	// (0x0002c63f) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe61c,	// (0x0002c63f) list_single_cmail_header_detail_pane_t1

0xe67c,	// (0x0002c69f) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe67c,	// (0x0002c69f) list_single_cmail_header_editor_pane_bg

0xdfed,	// (0x0002c010) list_cmail_body_pane_g1

0xe693,	// (0x0002c6b6) list_cmail_body_pane_t1

0xd2b8,	// (0x0002b2db) list_single_cmail_header_editor_pane_bg_g1

0xa755,	// (0x00028778) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd2c8,	// (0x0002b2eb) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd2c0,	// (0x0002b2e3) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd518,	// (0x0002b53b) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd2e8,	// (0x0002b30b) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd2d8,	// (0x0002b2fb) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd2e0,	// (0x0002b303) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa735,	// (0x00028758) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8d9a,	// (0x00026dbd) calenote_gesture_pane_ParamLimits

0x8d9a,	// (0x00026dbd) calenote_gesture_pane

0x8db4,	// (0x00026dd7) calenote_window_pane_ParamLimits

0x8db4,	// (0x00026dd7) calenote_window_pane

0xe6a1,	// (0x0002c6c4) popup_note_window_cp01

0x8dcc,	// (0x00026def) calenote_swipe_1_pane_ParamLimits

0x8dcc,	// (0x00026def) calenote_swipe_1_pane

0x862b,	// (0x0002664e) calenote_swipe_2_pane_ParamLimits

0x862b,	// (0x0002664e) calenote_swipe_2_pane

0xe346,	// (0x0002c369) calenote_swipe_1_pane_g1_ParamLimits

0xe346,	// (0x0002c369) calenote_swipe_1_pane_g1

0xe353,	// (0x0002c376) calenote_swipe_1_pane_g2_ParamLimits

0xe353,	// (0x0002c376) calenote_swipe_1_pane_g2

0x0001,

0x0b9d,	// (0x0001ebc0) calenote_swipe_1_pane_g_ParamLimits

0x0b9d,	// (0x0001ebc0) calenote_swipe_1_pane_g

0xe6b3,	// (0x0002c6d6) calenote_swipe_1_pane_t1_ParamLimits

0xe6b3,	// (0x0002c6d6) calenote_swipe_1_pane_t1

0xe346,	// (0x0002c369) calenote_swipe_2_pane_g1_ParamLimits

0xe346,	// (0x0002c369) calenote_swipe_2_pane_g1

0xe6d2,	// (0x0002c6f5) calenote_swipe_2_pane_g2_ParamLimits

0xe6d2,	// (0x0002c6f5) calenote_swipe_2_pane_g2

0x0001,

0x0c80,	// (0x0001eca3) calenote_swipe_2_pane_g_ParamLimits

0x0c80,	// (0x0001eca3) calenote_swipe_2_pane_g

0xe6de,	// (0x0002c701) calenote_swipe_2_pane_t1_ParamLimits

0xe6de,	// (0x0002c701) calenote_swipe_2_pane_t1

0x9bec,	// (0x00027c0f) main_mup_navstr_pane

0x616d,	// (0x00024190) main_mup3_pane_t7_ParamLimits

0x616d,	// (0x00024190) main_mup3_pane_t7

0x1b7e,	// (0x0001fba1) main_mp4_pane_g6_ParamLimits

0x1b7e,	// (0x0001fba1) main_mp4_pane_g6

0x1e71,	// (0x0001fe94) main_image3_pane_t4_ParamLimits

0x1e71,	// (0x0001fe94) main_image3_pane_t4

0x8ddf,	// (0x00026e02) popup_navstr_preview_pane_ParamLimits

0x8ddf,	// (0x00026e02) popup_navstr_preview_pane

0x8deb,	// (0x00026e0e) scroll_navstr_pane_ParamLimits

0x8deb,	// (0x00026e0e) scroll_navstr_pane

0x9bec,	// (0x00027c0f) bg_popup_preview_window_pane_cp04

0xe705,	// (0x0002c728) popup_navstr_preview_pane_t1

0x8df7,	// (0x00026e1a) scroll_navstr_pane_g1_ParamLimits

0x8df7,	// (0x00026e1a) scroll_navstr_pane_g1

0x8e04,	// (0x00026e27) scroll_navstr_pane_t1_ParamLimits

0x8e04,	// (0x00026e27) scroll_navstr_pane_t1

0xe6aa,	// (0x0002c6cd) bg_button_pane_cp014

0xe6aa,	// (0x0002c6cd) bg_button_pane_cp030

0x851f,	// (0x00026542) list_double_fisheye_pane_g4_ParamLimits

0x851f,	// (0x00026542) list_double_fisheye_pane_g4

0x852b,	// (0x0002654e) list_double_fisheye_pane_g5_ParamLimits

0x852b,	// (0x0002654e) list_double_fisheye_pane_g5

0xd4ab,	// (0x0002b4ce) sp_fs_scroll_pane_cp03

0xe439,	// (0x0002c45c) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe445,	// (0x0002c468) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0x0bba,	// (0x0001ebdd) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe451,	// (0x0002c474) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe5e4,	// (0x0002c607) sp_fs_scroll_pane_cp02

0xa43b,	// (0x0002845e) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa43b,	// (0x0002845e) popup_sp_fs_calendar_preview_list_single_pane

0x9bec,	// (0x00027c0f) main_cam6_pano_pane

0x1528,	// (0x0001f54b) main_mup3_pane_ParamLimits

0x9bec,	// (0x00027c0f) main_phacti_pane

0x8123,	// (0x00026146) bg_button_pane_cp11

0x813b,	// (0x0002615e) main_mobtv_info_pane_g2_ParamLimits

0x813b,	// (0x0002615e) main_mobtv_info_pane_g2

0x0001,

0xfbfd,	// (0x0002dc20) main_mobtv_info_pane_g_ParamLimits

0xfbfd,	// (0x0002dc20) main_mobtv_info_pane_g

0x82ed,	// (0x00026310) sc_clock_pane_t5_ParamLimits

0x82ed,	// (0x00026310) sc_clock_pane_t5

0x8390,	// (0x000263b3) main_radioblah_pane_g1_ParamLimits

0xe289,	// (0x0002c2ac) main_radioblah_pane_t3_ParamLimits

0xe289,	// (0x0002c2ac) main_radioblah_pane_t3

0xe2aa,	// (0x0002c2cd) main_radioblah_pane_t4_ParamLimits

0xe2aa,	// (0x0002c2cd) main_radioblah_pane_t4

0x83ae,	// (0x000263d1) main_radioblah_text_pane_ParamLimits

0x83ae,	// (0x000263d1) main_radioblah_text_pane

0x83bb,	// (0x000263de) main_radioblah_info_pane_g1_ParamLimits

0x8450,	// (0x00026473) main_radioblah_info_pane_t4_ParamLimits

0x8450,	// (0x00026473) main_radioblah_info_pane_t4

0xa329,	// (0x0002834c) main_sp_fs_calendar_pane

0x8e16,	// (0x00026e39) main_phacti_pane_g1

0x8e1e,	// (0x00026e41) phacti_note_pane_ParamLimits

0x8e1e,	// (0x00026e41) phacti_note_pane

0xe71c,	// (0x0002c73f) phacti_term_pane_ParamLimits

0xe71c,	// (0x0002c73f) phacti_term_pane

0xe731,	// (0x0002c754) phacti_note_pane_t1_ParamLimits

0xe731,	// (0x0002c754) phacti_note_pane_t1

0xe748,	// (0x0002c76b) phacti_term_pane_g1

0xe750,	// (0x0002c773) phacti_term_pane_t1_ParamLimits

0xe750,	// (0x0002c773) phacti_term_pane_t1

0xe77a,	// (0x0002c79d) popup_sp_fs_calendar_preview_list_single_pane_g1

0xa556,	// (0x00028579) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfd04,	// (0x0002dd27) popup_sp_fs_calendar_preview_list_single_pane_g

0xe782,	// (0x0002c7a5) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe782,	// (0x0002c7a5) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe798,	// (0x0002c7bb) aid_popup_sp_fs_bg_corner_pane

0xc7f2,	// (0x0002a815) popup_sp_fs_calendar_preview_bg_pane_g1

0x9bec,	// (0x00027c0f) popup_sp_fs_calendar_preview_bg_pane

0xe7a0,	// (0x0002c7c3) popup_sp_fs_calendar_preview_list_pane

0xc3e1,	// (0x0002a404) bg_main_sp_fs_cale_pane_ParamLimits

0xc3e1,	// (0x0002a404) bg_main_sp_fs_cale_pane

0xe7b1,	// (0x0002c7d4) listscroll_cale_mrui_pane_ParamLimits

0xe7b1,	// (0x0002c7d4) listscroll_cale_mrui_pane

0xd33c,	// (0x0002b35f) listscroll_sp_fs_schedule_track_pane

0xe7c6,	// (0x0002c7e9) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe7c6,	// (0x0002c7e9) main_sp_fs_ctrlbar_pane_cp01

0xe7d9,	// (0x0002c7fc) main_sp_fs_ribbon_pane

0xe7e1,	// (0x0002c804) popup_sp_fs_cale_preview_window

0x8e81,	// (0x00026ea4) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8e81,	// (0x00026ea4) list_single_sp_fs_schedule_track_pane

0xd230,	// (0x0002b253) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xd230,	// (0x0002b253) bg_sp_fs_highlight_list_pane_cp03

0x8ea3,	// (0x00026ec6) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8ea3,	// (0x00026ec6) list_single_sp_fs_schedule_track_pane_g1

0x8eaf,	// (0x00026ed2) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8eaf,	// (0x00026ed2) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfd09,	// (0x0002dd2c) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfd09,	// (0x0002dd2c) list_single_sp_fs_schedule_track_pane_g

0x8ebb,	// (0x00026ede) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8ebb,	// (0x00026ede) list_single_sp_fs_schedule_track_pane_t1

0x8ed3,	// (0x00026ef6) sp_fs_schedule_track_pane_ParamLimits

0x8ed3,	// (0x00026ef6) sp_fs_schedule_track_pane

0xe7f3,	// (0x0002c816) sp_fs_schedule_track_pane_g1

0xe7fb,	// (0x0002c81e) sp_fs_schedule_track_pane_g2

0xe803,	// (0x0002c826) sp_fs_schedule_track_pane_g3

0xe80b,	// (0x0002c82e) sp_fs_schedule_track_pane_g4

0xe813,	// (0x0002c836) sp_fs_schedule_track_pane_g5

0x0004,

0x0c94,	// (0x0001ecb7) sp_fs_schedule_track_pane_g

0xd2b8,	// (0x0002b2db) bg_sp_fs_schedule_viewer_highlight_g1

0xa755,	// (0x00028778) bg_sp_fs_schedule_viewer_highlight_g2

0xd2c0,	// (0x0002b2e3) bg_sp_fs_schedule_viewer_highlight_g3

0xd2c8,	// (0x0002b2eb) bg_sp_fs_schedule_viewer_highlight_g4

0xd518,	// (0x0002b53b) bg_sp_fs_schedule_viewer_highlight_g5

0xd2d8,	// (0x0002b2fb) bg_sp_fs_schedule_viewer_highlight_g6

0xd2e0,	// (0x0002b303) bg_sp_fs_schedule_viewer_highlight_g7

0xd2e8,	// (0x0002b30b) bg_sp_fs_schedule_viewer_highlight_g8

0xa735,	// (0x00028758) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfd0e,	// (0x0002dd31) bg_sp_fs_schedule_viewer_highlight_g

0x9bec,	// (0x00027c0f) bg_main_sp_fs_ribbon_pane

0x8ee3,	// (0x00026f06) main_sp_fs_ribbon_pane_g1

0xe81b,	// (0x0002c83e) main_sp_fs_ribbon_pane_t1

0x8eec,	// (0x00026f0f) main_sp_fs_ribbon_pane_t2

0xe82a,	// (0x0002c84d) main_sp_fs_ribbon_pane_t3

0x0002,

0xfd21,	// (0x0002dd44) main_sp_fs_ribbon_pane_t

0xe839,	// (0x0002c85c) main_sp_fs_ribbon_scheduler_pane

0xe841,	// (0x0002c864) bg_main_sp_fs_ribbon_pane_g1

0xe84a,	// (0x0002c86d) bg_main_sp_fs_ribbon_pane_g2

0xe853,	// (0x0002c876) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0x0cb9,	// (0x0001ecdc) bg_main_sp_fs_ribbon_pane_g

0xe85b,	// (0x0002c87e) main_sp_fs_ribbon_scheduler_pane_g1

0xe864,	// (0x0002c887) main_sp_fs_ribbon_scheduler_pane_g2

0xe86d,	// (0x0002c890) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0x0cc0,	// (0x0001ece3) main_sp_fs_ribbon_scheduler_pane_g

0xe876,	// (0x0002c899) list_cale_mrui_pane

0x8efb,	// (0x00026f1e) sp_fs_scroll_pane_cp07_ParamLimits

0x8efb,	// (0x00026f1e) sp_fs_scroll_pane_cp07

0x8f17,	// (0x00026f3a) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8f17,	// (0x00026f3a) bg_sp_fs_schedule_viewer_highlight

0xe883,	// (0x0002c8a6) list_single_sp_fs_schedule_track_pane_cp01

0xe88b,	// (0x0002c8ae) list_sp_fs_schedule_track_pane

0xe893,	// (0x0002c8b6) sp_fs_scroll_pane_cp06_ParamLimits

0xe893,	// (0x0002c8b6) sp_fs_scroll_pane_cp06

0xc7f2,	// (0x0002a815) bgmain_sp_fs_calendar_pane_g1

0x8f24,	// (0x00026f47) list_single_cale_mrui_pane_ParamLimits

0x8f24,	// (0x00026f47) list_single_cale_mrui_pane

0xe8a5,	// (0x0002c8c8) list_single_cale_mrui_row_pane_ParamLimits

0xe8a5,	// (0x0002c8c8) list_single_cale_mrui_row_pane

0xe8b2,	// (0x0002c8d5) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe8b2,	// (0x0002c8d5) list_single_cale_mrui_row_pane_g1

0xe8f7,	// (0x0002c91a) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe8f7,	// (0x0002c91a) list_single_cale_mrui_row_pane_t1

0x8f51,	// (0x00026f74) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8f51,	// (0x00026f74) list_single_cale_mrui_row_pane_t2

0xe909,	// (0x0002c92c) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe909,	// (0x0002c92c) list_single_cale_mrui_row_pane_t3

0xe938,	// (0x0002c95b) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe938,	// (0x0002c95b) list_single_cale_mrui_row_pane_t4

0x0003,

0xfd28,	// (0x0002dd4b) list_single_cale_mrui_row_pane_t_ParamLimits

0xfd28,	// (0x0002dd4b) list_single_cale_mrui_row_pane_t

0x8fb7,	// (0x00026fda) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8fb7,	// (0x00026fda) list_single_cmail_header_editor_pane_bg_cp01

0x8fd7,	// (0x00026ffa) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8fd7,	// (0x00026ffa) list_single_cmail_header_editor_pane_bg_cp02

0x8ff3,	// (0x00027016) main_radioblah_text_pane_t1_ParamLimits

0x8ff3,	// (0x00027016) main_radioblah_text_pane_t1

0xe96f,	// (0x0002c992) cam6_indi_pane_cp01

0xe977,	// (0x0002c99a) cam6_mode_pane_cp01

0xe97f,	// (0x0002c9a2) cam6_pano_pane

0xe988,	// (0x0002c9ab) cam6_zoom_pane_cp01

0xe990,	// (0x0002c9b3) cam6_pano_image_pane

0xe99b,	// (0x0002c9be) cam6_pano_pane_g1

0xdfed,	// (0x0002c010) cam6_pano_pane_g2

0xe9a4,	// (0x0002c9c7) cam6_pano_pane_g3

0xe9ad,	// (0x0002c9d0) cam6_pano_pane_g4

0xcde1,	// (0x0002ae04) cam6_pano_pane_g5

0xe9b6,	// (0x0002c9d9) cam6_pano_pane_g6

0xe967,	// (0x0002c98a) cam6_pano_pane_g7

0xe9c0,	// (0x0002c9e3) cam6_pano_pane_g8

0xe9c9,	// (0x0002c9ec) cam6_pano_pane_g9

0x0008,

0xfd31,	// (0x0002dd54) cam6_pano_pane_g

0x9bec,	// (0x00027c0f) main_browser_tag_pane

0xe6fd,	// (0x0002c720) grid_navstr_albumart_pane

0xe9d4,	// (0x0002c9f7) cell_navstr_albumart_pane_ParamLimits

0xe9d4,	// (0x0002c9f7) cell_navstr_albumart_pane

0xe9f4,	// (0x0002ca17) cell_navstr_albumart_pane_g1

0xc1f2,	// (0x0002a215) cell_navstr_albumart_pane_g2

0xc202,	// (0x0002a225) cell_navstr_albumart_pane_g3

0xc1fa,	// (0x0002a21d) cell_navstr_albumart_pane_g4

0x0003,

0xfd44,	// (0x0002dd67) cell_navstr_albumart_pane_g

0x900e,	// (0x00027031) bt_list_pane_ParamLimits

0x900e,	// (0x00027031) bt_list_pane

0x902e,	// (0x00027051) bt_list_pane_t1

0x903d,	// (0x00027060) bt_list_pane_t2

0x0001,

0xfd4d,	// (0x0002dd70) bt_list_pane_t

0x9bec,	// (0x00027c0f) main_cale_prevew_pane

0x904c,	// (0x0002706f) popup_cale_preview_window_ParamLimits

0x904c,	// (0x0002706f) popup_cale_preview_window

0xa329,	// (0x0002834c) bg_popup_preview_window_pane_cp05_ParamLimits

0xa329,	// (0x0002834c) bg_popup_preview_window_pane_cp05

0xe9fc,	// (0x0002ca1f) list_cale_preview_pane_ParamLimits

0xe9fc,	// (0x0002ca1f) list_cale_preview_pane

0x9065,	// (0x00027088) list_double_cale_preview_pane_ParamLimits

0x9065,	// (0x00027088) list_double_cale_preview_pane

0x9077,	// (0x0002709a) list_single_cale_preview_pane_ParamLimits

0x9077,	// (0x0002709a) list_single_cale_preview_pane

0x908d,	// (0x000270b0) list_single_cale_preview_pane_g1

0x9095,	// (0x000270b8) list_single_cale_preview_pane_t1_ParamLimits

0x9095,	// (0x000270b8) list_single_cale_preview_pane_t1

0x90aa,	// (0x000270cd) list_double_cale_preview_pane_g1

0x90b2,	// (0x000270d5) list_double_cale_preview_pane_t1_ParamLimits

0x90b2,	// (0x000270d5) list_double_cale_preview_pane_t1

0x90c7,	// (0x000270ea) list_double_cale_preview_pane_t2_ParamLimits

0x90c7,	// (0x000270ea) list_double_cale_preview_pane_t2

0x0001,

0xfd52,	// (0x0002dd75) list_double_cale_preview_pane_t_ParamLimits

0xfd52,	// (0x0002dd75) list_double_cale_preview_pane_t

0x9bec,	// (0x00027c0f) main_ezdial_pane

0xa329,	// (0x0002834c) main_sp_fs_email_pane_ParamLimits

0x86af,	// (0x000266d2) cmail_ddmenu_btn01_pane_ParamLimits

0x86af,	// (0x000266d2) cmail_ddmenu_btn01_pane

0x86cc,	// (0x000266ef) cmail_ddmenu_btn02_pane_ParamLimits

0x86cc,	// (0x000266ef) cmail_ddmenu_btn02_pane

0x86ea,	// (0x0002670d) cmail_ddmenu_btn03_pane_ParamLimits

0x86ea,	// (0x0002670d) cmail_ddmenu_btn03_pane

0x8718,	// (0x0002673b) main_sp_fs_ctrlbar_pane_ParamLimits

0x872e,	// (0x00026751) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8d03,	// (0x00026d26) list_cmail_body_pane_ParamLimits

0xe5fa,	// (0x0002c61d) bg_button_pane_cp12

0xe60f,	// (0x0002c632) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe60f,	// (0x0002c632) list_single_cmail_header_detail_pane_g3

0xe658,	// (0x0002c67b) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe658,	// (0x0002c67b) list_single_cmail_header_detail_pane_t2

0x0001,

0x0c7b,	// (0x0001ec9e) list_single_cmail_header_detail_pane_t_ParamLimits

0x0c7b,	// (0x0001ec9e) list_single_cmail_header_detail_pane_t

0xe765,	// (0x0002c788) phacti_term_pane_t2_ParamLimits

0xe765,	// (0x0002c788) phacti_term_pane_t2

0x0001,

0x0c85,	// (0x0001eca8) phacti_term_pane_t_ParamLimits

0x0c85,	// (0x0001eca8) phacti_term_pane_t

0xea08,	// (0x0002ca2b) aid_size_list_single_double

0x90df,	// (0x00027102) popup_ezdial_listscroll_window

0x9100,	// (0x00027123) popup_number_entry_window_cp01

0xa4fc,	// (0x0002851f) bg_popup_call_pane_cp09

0xea14,	// (0x0002ca37) ezdial_list_pane

0xea1c,	// (0x0002ca3f) scroll_pane_cp23

0xc5ce,	// (0x0002a5f1) bg_button_pane_cp028_ParamLimits

0xc5ce,	// (0x0002a5f1) bg_button_pane_cp028

0x910e,	// (0x00027131) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x910e,	// (0x00027131) cmail_ddmenu_btn01_pane_g1

0x911e,	// (0x00027141) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x911e,	// (0x00027141) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd57,	// (0x0002dd7a) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd57,	// (0x0002dd7a) cmail_ddmenu_btn01_pane_g

0xea24,	// (0x0002ca47) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xea24,	// (0x0002ca47) cmail_ddmenu_btn01_pane_t1

0xc3e1,	// (0x0002a404) bg_button_pane_cp029_ParamLimits

0xc3e1,	// (0x0002a404) bg_button_pane_cp029

0x911e,	// (0x00027141) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x911e,	// (0x00027141) cmail_ddmenu_btn02_pane_g1

0x9137,	// (0x0002715a) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x9137,	// (0x0002715a) cmail_ddmenu_btn02_pane_t1

0xd230,	// (0x0002b253) bg_button_pane_cp031_ParamLimits

0xd230,	// (0x0002b253) bg_button_pane_cp031

0x911e,	// (0x00027141) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x911e,	// (0x00027141) cmail_ddmenu_btn03_pane_g1

0x9137,	// (0x0002715a) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x9137,	// (0x0002715a) cmail_ddmenu_btn03_pane_t1

0x69d4,	// (0x000249f7) cell_dialer2_keypad_pane_t1_ParamLimits

0x69ee,	// (0x00024a11) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x69ee,	// (0x00024a11) cell_dialer2_keypad_pane_t1_copy1

0x7fa8,	// (0x00025fcb) ncimui_group_button_pane

0xa329,	// (0x0002834c) main_sp_fs_calendar_pane_ParamLimits

0x8d23,	// (0x00026d46) list_single_cmail_header_caption_pane_ParamLimits

0xe7a8,	// (0x0002c7cb) aid_recal_txt_sm_pane

0x9bec,	// (0x00027c0f) mian_recal_day_pane

0xe7e1,	// (0x0002c804) popup_sp_fs_cale_preview_window_ParamLimits

0xea39,	// (0x0002ca5c) list_recal_day_pane

0xea7b,	// (0x0002ca9e) list_single_recal_day_pane_ParamLimits

0xea7b,	// (0x0002ca9e) list_single_recal_day_pane

0xea9f,	// (0x0002cac2) list_single_recal_day_pane_g1_ParamLimits

0xea9f,	// (0x0002cac2) list_single_recal_day_pane_g1

0xeaab,	// (0x0002cace) list_single_recal_day_pane_g2_ParamLimits

0xeaab,	// (0x0002cace) list_single_recal_day_pane_g2

0xeab7,	// (0x0002cada) list_single_recal_day_pane_g3_ParamLimits

0xeab7,	// (0x0002cada) list_single_recal_day_pane_g3

0x915b,	// (0x0002717e) list_single_recal_day_pane_g4_ParamLimits

0x915b,	// (0x0002717e) list_single_recal_day_pane_g4

0xeac3,	// (0x0002cae6) list_single_recal_day_pane_g5_ParamLimits

0xeac3,	// (0x0002cae6) list_single_recal_day_pane_g5

0xeacf,	// (0x0002caf2) list_single_recal_day_pane_g6_ParamLimits

0xeacf,	// (0x0002caf2) list_single_recal_day_pane_g6

0x0004,

0xfd66,	// (0x0002dd89) list_single_recal_day_pane_g_ParamLimits

0xfd66,	// (0x0002dd89) list_single_recal_day_pane_g

0xeae3,	// (0x0002cb06) list_single_recal_day_pane_t1

0xeaf5,	// (0x0002cb18) list_single_recal_day_pane_t2

0x0001,

0x0d17,	// (0x0001ed3a) list_single_recal_day_pane_t

0x9173,	// (0x00027196) ncimui_query_button_pane_ParamLimits

0x9173,	// (0x00027196) ncimui_query_button_pane

0x9183,	// (0x000271a6) ncimui_query_button_pane_t1_ParamLimits

0x9183,	// (0x000271a6) ncimui_query_button_pane_t1

0xeb07,	// (0x0002cb2a) ncimui_query_button_pane_t2_ParamLimits

0xeb07,	// (0x0002cb2a) ncimui_query_button_pane_t2

0x0001,

0xfd71,	// (0x0002dd94) ncimui_query_button_pane_t_ParamLimits

0xfd71,	// (0x0002dd94) ncimui_query_button_pane_t

0x9196,	// (0x000271b9) query_button_pane_ParamLimits

0x9196,	// (0x000271b9) query_button_pane

0x9bec,	// (0x00027c0f) bg_button_pane_cp0028

0xeb1a,	// (0x0002cb3d) query_button_pane_t1

0x1544,	// (0x0001f567) main_tport_pane_ParamLimits

0x8c0d,	// (0x00026c30) bg_popup_window_pane_cp01_ParamLimits

0x8c0d,	// (0x00026c30) bg_popup_window_pane_cp01

0x8c1b,	// (0x00026c3e) heading_pane_cp08_ParamLimits

0x8c1b,	// (0x00026c3e) heading_pane_cp08

0x8c29,	// (0x00026c4c) heading_pane_cp07_ParamLimits

0x8c29,	// (0x00026c4c) heading_pane_cp07

0x8c98,	// (0x00026cbb) cell_tport_appsw_pane_g2

0x0002,

0xfcf1,	// (0x0002dd14) cell_tport_appsw_pane_g

0xb0c9,	// (0x000290ec) input_candi_list_open_g1

0xa918,	// (0x0002893b) list_cale_time_pane_g6_ParamLimits

0xa918,	// (0x0002893b) list_cale_time_pane_g6

0x5bd2,	// (0x00023bf5) aid_size_touch_calib_1_ParamLimits

0x5bd2,	// (0x00023bf5) aid_size_touch_calib_1

0x5bde,	// (0x00023c01) aid_size_touch_calib_2_ParamLimits

0x5bde,	// (0x00023c01) aid_size_touch_calib_2

0x5bec,	// (0x00023c0f) aid_size_touch_calib_3_ParamLimits

0x5bec,	// (0x00023c0f) aid_size_touch_calib_3

0x5bfc,	// (0x00023c1f) aid_size_touch_calib_4_ParamLimits

0x5bfc,	// (0x00023c1f) aid_size_touch_calib_4

0x5c0a,	// (0x00023c2d) main_touch_calib_button_group_pane_ParamLimits

0x5c0a,	// (0x00023c2d) main_touch_calib_button_group_pane

0x5c18,	// (0x00023c3b) main_touch_calib_pane_g1_ParamLimits

0x5c24,	// (0x00023c47) main_touch_calib_pane_g2_ParamLimits

0x5c30,	// (0x00023c53) main_touch_calib_pane_g3_ParamLimits

0x5c3c,	// (0x00023c5f) main_touch_calib_pane_g4_ParamLimits

0xf751,	// (0x0002d774) main_touch_calib_pane_g_ParamLimits

0x5c48,	// (0x00023c6b) main_touch_calib_pane_t1_ParamLimits

0x5c61,	// (0x00023c84) main_touch_calib_pane_t2_ParamLimits

0x5c7a,	// (0x00023c9d) main_touch_calib_pane_t3_ParamLimits

0x5c90,	// (0x00023cb3) main_touch_calib_pane_t4_ParamLimits

0x5ca6,	// (0x00023cc9) main_touch_calib_pane_t5_ParamLimits

0xf75a,	// (0x0002d77d) main_touch_calib_pane_t_ParamLimits

0xcb81,	// (0x0002aba4) list_single_fp_cale_pane_g3_ParamLimits

0xcb81,	// (0x0002aba4) list_single_fp_cale_pane_g3

0x1528,	// (0x0001f54b) bg_button_pane_cp012_ParamLimits

0x1528,	// (0x0001f54b) bg_vkb2_func_pane_cp03_ParamLimits

0x2480,	// (0x000204a3) cell_vitu2_function_top_pane_g1_ParamLimits

0x1528,	// (0x0001f54b) bg_vkb2_func_pane_cp04_ParamLimits

0x7f30,	// (0x00025f53) main_ncimui_button_group_pane_ParamLimits

0x7f30,	// (0x00025f53) main_ncimui_button_group_pane

0x7f96,	// (0x00025fb9) main_ncimui_pane_t3_ParamLimits

0x7f96,	// (0x00025fb9) main_ncimui_pane_t3

0xe713,	// (0x0002c736) phacti_button_group_pane

0xea08,	// (0x0002ca2b) aid_size_list_single_double_ParamLimits

0x90df,	// (0x00027102) popup_ezdial_listscroll_window_ParamLimits

0x9100,	// (0x00027123) popup_number_entry_window_cp01_ParamLimits

0x91a3,	// (0x000271c6) phacti_button_pane_ParamLimits

0x91a3,	// (0x000271c6) phacti_button_pane

0x9bec,	// (0x00027c0f) bg_button_pane_cp14

0xeb28,	// (0x0002cb4b) phacti_button_pane_t1

0x91b4,	// (0x000271d7) main_touch_calib_button_pane_ParamLimits

0x91b4,	// (0x000271d7) main_touch_calib_button_pane

0xa337,	// (0x0002835a) bg_button_pane_cp18_ParamLimits

0xa337,	// (0x0002835a) bg_button_pane_cp18

0xeb36,	// (0x0002cb59) main_touch_calib_button_pane_t1_ParamLimits

0xeb36,	// (0x0002cb59) main_touch_calib_button_pane_t1

0xeb4c,	// (0x0002cb6f) main_touch_calib_button_pane_t2_ParamLimits

0xeb4c,	// (0x0002cb6f) main_touch_calib_button_pane_t2

0x0001,

0x0d21,	// (0x0001ed44) main_touch_calib_button_pane_t_ParamLimits

0x0d21,	// (0x0001ed44) main_touch_calib_button_pane_t

0x9bec,	// (0x00027c0f) cell_ncimui_button_pane

0x9bec,	// (0x00027c0f) bg_button_pane_cp032

0xeb6a,	// (0x0002cb8d) cell_ncimui_button_pane_t1

0x1d84,	// (0x0001fda7) image3_infobar_pane_ParamLimits

0x1d84,	// (0x0001fda7) image3_infobar_pane

0x830f,	// (0x00026332) fs_bigclock_status_pane_ParamLimits

0x830f,	// (0x00026332) fs_bigclock_status_pane

0x831c,	// (0x0002633f) main_fs_bigclock_clock_pane_ParamLimits

0x831c,	// (0x0002633f) main_fs_bigclock_clock_pane

0x8336,	// (0x00026359) main_fs_bigclock_indi_pane_ParamLimits

0x8336,	// (0x00026359) main_fs_bigclock_indi_pane

0x835e,	// (0x00026381) main_fs_bigclock_swipe_pane_ParamLimits

0x835e,	// (0x00026381) main_fs_bigclock_swipe_pane

0x9bec,	// (0x00027c0f) main_fs_clock_dumped_data

0xe0fa,	// (0x0002c11d) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe0fa,	// (0x0002c11d) list_single_fs_bigclock_indicator_pane_g1

0xe115,	// (0x0002c138) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe115,	// (0x0002c138) list_single_fs_bigclock_indicator_pane_g2

0xe12f,	// (0x0002c152) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe12f,	// (0x0002c152) list_single_fs_bigclock_indicator_pane_g3

0xe149,	// (0x0002c16c) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe149,	// (0x0002c16c) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0x0b4e,	// (0x0001eb71) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0x0b4e,	// (0x0001eb71) list_single_fs_bigclock_indicator_pane_g

0xe174,	// (0x0002c197) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe174,	// (0x0002c197) list_single_fs_bigclock_indicator_pane_t1

0xe19c,	// (0x0002c1bf) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe19c,	// (0x0002c1bf) list_single_fs_bigclock_indicator_pane_t2

0xe1c4,	// (0x0002c1e7) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe1c4,	// (0x0002c1e7) list_single_fs_bigclock_indicator_pane_t3

0xe1ec,	// (0x0002c20f) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe1ec,	// (0x0002c20f) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0x0b59,	// (0x0001eb7c) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0x0b59,	// (0x0001eb7c) list_single_fs_bigclock_indicator_pane_t

0xeb78,	// (0x0002cb9b) image3_infobar_fav_pane_ParamLimits

0xeb78,	// (0x0002cb9b) image3_infobar_fav_pane

0xeb88,	// (0x0002cbab) image3_infobar_loc_pane_ParamLimits

0xeb88,	// (0x0002cbab) image3_infobar_loc_pane

0xeb9c,	// (0x0002cbbf) image3_infobar_time_pane_ParamLimits

0xeb9c,	// (0x0002cbbf) image3_infobar_time_pane

0xc7f2,	// (0x0002a815) image3_infobar_time_pane_g1

0xebac,	// (0x0002cbcf) image3_infobar_time_pane_t1

0xc7f2,	// (0x0002a815) image3_infobar_loc_pane_g1

0xebba,	// (0x0002cbdd) image3_infobar_loc_pane_g2

0x0001,

0xfd76,	// (0x0002dd99) image3_infobar_loc_pane_g

0xebc2,	// (0x0002cbe5) image3_infobar_loc_pane_t1

0xc7f2,	// (0x0002a815) image3_infobar_fav_pane_g1

0xebd0,	// (0x0002cbf3) image3_infobar_fav_pane_g2

0x0001,

0xfd7b,	// (0x0002dd9e) image3_infobar_fav_pane_g

0xebd8,	// (0x0002cbfb) fs_bigclock_status_battery_pane

0xebe1,	// (0x0002cc04) fs_bigclock_status_signal_pane

0xebea,	// (0x0002cc0d) fs_bigclock_status_title_pane

0xebf3,	// (0x0002cc16) fs_bigclock_status_signal_pane_g1

0xebfc,	// (0x0002cc1f) fs_bigclock_status_signal_pane_g2

0x0001,

0x0d30,	// (0x0001ed53) fs_bigclock_status_signal_pane_g

0xec04,	// (0x0002cc27) fs_bigclock_status_battery_pane_g1

0xec0d,	// (0x0002cc30) fs_bigclock_status_battery_pane_g2

0x0001,

0x0d35,	// (0x0001ed58) fs_bigclock_status_battery_pane_g

0xec15,	// (0x0002cc38) fs_bigclock_status_title_pane_t1

0xc7f2,	// (0x0002a815) main_fs_bigclock_clock_pane_g1

0xec23,	// (0x0002cc46) main_fs_bigclock_clock_pane_g2

0xec2c,	// (0x0002cc4f) main_fs_bigclock_clock_pane_g3

0xec2c,	// (0x0002cc4f) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd80,	// (0x0002dda3) main_fs_bigclock_clock_pane_g

0xec34,	// (0x0002cc57) main_fs_bigclock_clock_pane_t1

0x91c4,	// (0x000271e7) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd89,	// (0x0002ddac) main_fs_bigclock_clock_pane_t

0xec42,	// (0x0002cc65) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec42,	// (0x0002cc65) list_single_fs_bigclock_indicator_pane

0xec53,	// (0x0002cc76) list_single_fs_bigclock_pane_ParamLimits

0xec53,	// (0x0002cc76) list_single_fs_bigclock_pane

0xec79,	// (0x0002cc9c) main_fs_bigclock_indicator_pane_t1

0xec88,	// (0x0002ccab) list_single_fs_bigclock_pane_g1

0xec90,	// (0x0002ccb3) list_single_fs_bigclock_pane_t1

0xc7f2,	// (0x0002a815) main_fs_bigclock_swipe_pane_g1

0xecd3,	// (0x0002ccf6) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd95,	// (0x0002ddb8) main_fs_bigclock_swipe_pane_g

0xecdb,	// (0x0002ccfe) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xecdb,	// (0x0002ccfe) main_fs_bigclock_swipe_pane_t1

0x46e3,	// (0x00022706) call_type_pane_ParamLimits

0x9bec,	// (0x00027c0f) main_btmg_pane

0xe8de,	// (0x0002c901) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe8de,	// (0x0002c901) list_single_cale_mrui_row_pane_g2

0x0002,

0x0cc7,	// (0x0001ecea) list_single_cale_mrui_row_pane_g_ParamLimits

0x0cc7,	// (0x0001ecea) list_single_cale_mrui_row_pane_g

0xea62,	// (0x0002ca85) list_recal_vselct_arw_lo_pane

0xea6a,	// (0x0002ca8d) list_recal_vselct_arw_up_pane

0xea72,	// (0x0002ca95) list_recal_vselct_pane

0x9217,	// (0x0002723a) btmg_button_pane

0x9223,	// (0x00027246) main_btmg_pane_g1

0x9bec,	// (0x00027c0f) bg_button_pane_cp044

0xecf8,	// (0x0002cd1b) btmg_button_pane_t1

0xc3cd,	// (0x0002a3f0) aid_listscroll_gen

0xa329,	// (0x0002834c) main_cntbar_detail_pane

0xe5dc,	// (0x0002c5ff) list_cmail_folder_pane

0xd4ab,	// (0x0002b4ce) sp_fs_scroll_pane_cp03_ParamLimits

0x8d23,	// (0x00026d46) list_single_fs_dyc_pane_cp01_ParamLimits

0x8d23,	// (0x00026d46) list_single_fs_dyc_pane_cp01

0xed06,	// (0x0002cd29) aid_size_cmail_indent

0xed0f,	// (0x0002cd32) list_single_dyc_row_pane_cp01

0x924b,	// (0x0002726e) cntbar_detail_list_pane_ParamLimits

0x924b,	// (0x0002726e) cntbar_detail_list_pane

0x9285,	// (0x000272a8) main_cntbar_detail_cont_pane_ParamLimits

0x9285,	// (0x000272a8) main_cntbar_detail_cont_pane

0x45fc,	// (0x0002261f) scroll_pane_cp032_ParamLimits

0x45fc,	// (0x0002261f) scroll_pane_cp032

0x9291,	// (0x000272b4) cntbar_detail_list_event_pane_ParamLimits

0x9291,	// (0x000272b4) cntbar_detail_list_event_pane

0x9257,	// (0x0002727a) cntbar_detail_list_shct_pane

0xa7a3,	// (0x000287c6) aid_list_gen

0xed18,	// (0x0002cd3b) aid_scroll

0xed21,	// (0x0002cd44) aid_size_touch_scroll_bar

0xe2a1,	// (0x0002c2c4) aid_list_double

0x92a5,	// (0x000272c8) aid_list_single

0x774b,	// (0x0002576e) aid_list_single_lg

0x92ae,	// (0x000272d1) aid_list_z_g_a_sm

0x92b6,	// (0x000272d9) aid_list_z_g_d

0x92be,	// (0x000272e1) aid_txt_z_prm

0x92cc,	// (0x000272ef) aid_txt_z_prm_cp01

0x92da,	// (0x000272fd) aid_txt_z_sec

0x92e8,	// (0x0002730b) main_cntbar_detail_cont_pane_g1_ParamLimits

0x92e8,	// (0x0002730b) main_cntbar_detail_cont_pane_g1

0x92f5,	// (0x00027318) main_cntbar_detail_cont_pane_g2_ParamLimits

0x92f5,	// (0x00027318) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd9a,	// (0x0002ddbd) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd9a,	// (0x0002ddbd) main_cntbar_detail_cont_pane_g

0xed2a,	// (0x0002cd4d) main_cntbar_detail_cont_pane_t1

0xed38,	// (0x0002cd5b) main_cntbar_detail_cont_pane_t2

0xed46,	// (0x0002cd69) main_cntbar_detail_cont_pane_t3

0x0002,

0x0d5e,	// (0x0001ed81) main_cntbar_detail_cont_pane_t

0x9301,	// (0x00027324) cell_cntbar_detail_list_shct_pane_ParamLimits

0x9301,	// (0x00027324) cell_cntbar_detail_list_shct_pane

0xed54,	// (0x0002cd77) cntbar_detail_list_shct_pane_g1

0xed5d,	// (0x0002cd80) cntbar_detail_list_shct_pane_g2

0x0001,

0x0d65,	// (0x0001ed88) cntbar_detail_list_shct_pane_g

0x9315,	// (0x00027338) cntbar_detail_list_event_pane_g1_ParamLimits

0x9315,	// (0x00027338) cntbar_detail_list_event_pane_g1

0x9321,	// (0x00027344) cntbar_detail_list_event_pane_g2_ParamLimits

0x9321,	// (0x00027344) cntbar_detail_list_event_pane_g2

0x0005,

0xfd9f,	// (0x0002ddc2) cntbar_detail_list_event_pane_g_ParamLimits

0xfd9f,	// (0x0002ddc2) cntbar_detail_list_event_pane_g

0x938d,	// (0x000273b0) cntbar_detail_list_event_pane_t1_ParamLimits

0x938d,	// (0x000273b0) cntbar_detail_list_event_pane_t1

0x93a2,	// (0x000273c5) cntbar_detail_list_event_pane_t2_ParamLimits

0x93a2,	// (0x000273c5) cntbar_detail_list_event_pane_t2

0x0002,

0xfdac,	// (0x0002ddcf) cntbar_detail_list_event_pane_t_ParamLimits

0xfdac,	// (0x0002ddcf) cntbar_detail_list_event_pane_t

0xc7f2,	// (0x0002a815) cell_cntbar_detail_list_shct_pane_g1

0xaf0e,	// (0x00028f31) navi_pane_mv_g3

0xa329,	// (0x0002834c) main_cntbar_detail_pane_ParamLimits

0x9bec,	// (0x00027c0f) main_notif_wgt_pane

0x1ac5,	// (0x0001fae8) aid_tch_main_mp4_pane_g4

0x1cfa,	// (0x0001fd1d) popup_slider_window_cp02

0xea58,	// (0x0002ca7b) list_recal_day_event_pane

0x922b,	// (0x0002724e) cntbar_detail_btn_pane_ParamLimits

0x922b,	// (0x0002724e) cntbar_detail_btn_pane

0x923b,	// (0x0002725e) cntbar_detail_btn_pane_cp01_ParamLimits

0x923b,	// (0x0002725e) cntbar_detail_btn_pane_cp01

0x9257,	// (0x0002727a) cntbar_detail_list_shct_pane_ParamLimits

0x9263,	// (0x00027286) cntbar_detail_pane_g1_ParamLimits

0x9263,	// (0x00027286) cntbar_detail_pane_g1

0x926f,	// (0x00027292) cntbar_detail_pane_t1_ParamLimits

0x926f,	// (0x00027292) cntbar_detail_pane_t1

0x932d,	// (0x00027350) cntbar_detail_list_event_pane_g3_ParamLimits

0x932d,	// (0x00027350) cntbar_detail_list_event_pane_g3

0x9345,	// (0x00027368) cntbar_detail_list_event_pane_g4_ParamLimits

0x9345,	// (0x00027368) cntbar_detail_list_event_pane_g4

0x935d,	// (0x00027380) cntbar_detail_list_event_pane_g5_ParamLimits

0x935d,	// (0x00027380) cntbar_detail_list_event_pane_g5

0x9375,	// (0x00027398) cntbar_detail_list_event_pane_g6_ParamLimits

0x9375,	// (0x00027398) cntbar_detail_list_event_pane_g6

0x93b7,	// (0x000273da) cntbar_detail_list_event_pane_t3_ParamLimits

0x93b7,	// (0x000273da) cntbar_detail_list_event_pane_t3

0x93c9,	// (0x000273ec) popup_notif_wgt_window_ParamLimits

0x93c9,	// (0x000273ec) popup_notif_wgt_window

0x93d9,	// (0x000273fc) popup_submenu_window_cp01_ParamLimits

0x93d9,	// (0x000273fc) popup_submenu_window_cp01

0xa4fc,	// (0x0002851f) bg_popup_window_pane_cp10

0xed66,	// (0x0002cd89) listscroll_notif_wgt_pane

0xed78,	// (0x0002cd9b) list_notif_wgt_window

0xed81,	// (0x0002cda4) scroll_pane_cp033

0x93eb,	// (0x0002740e) list_notif_wgt_row_pane_ParamLimits

0x93eb,	// (0x0002740e) list_notif_wgt_row_pane

0xed8a,	// (0x0002cdad) aid_size_list_notif_wgt_del

0xed97,	// (0x0002cdba) list_notif_wgt_row_pane_g1

0xeda3,	// (0x0002cdc6) list_notif_wgt_row_pane_g2

0xedb7,	// (0x0002cdda) list_notif_wgt_row_pane_g3

0x0002,

0x0d7e,	// (0x0001eda1) list_notif_wgt_row_pane_g

0xedc4,	// (0x0002cde7) list_notif_wgt_row_pane_t1

0xedda,	// (0x0002cdfd) list_notif_wgt_row_pane_t2

0xedec,	// (0x0002ce0f) list_notif_wgt_row_pane_t3

0x0002,

0x0d85,	// (0x0001eda8) list_notif_wgt_row_pane_t

0xd532,	// (0x0002b555) list_recal_day_event_pane_g1

0xedfe,	// (0x0002ce21) list_recal_day_event_pane_t1

0x9bec,	// (0x00027c0f) bg_button_pane_cp045

0x93fd,	// (0x00027420) cntbar_detail_btn_pane_t1

0xc3e1,	// (0x0002a404) main_callh_pane_ParamLimits

0xc3e1,	// (0x0002a404) main_callh_pane

0x9bec,	// (0x00027c0f) main_coverflow0_pane

0x9bec,	// (0x00027c0f) main_wgtman_pane

0x8376,	// (0x00026399) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x8376,	// (0x00026399) main_fs_bigclock_unlock_btn_pane

0x8c90,	// (0x00026cb3) bg_button_pane_cp16

0x8ca0,	// (0x00026cc3) cell_tport_appsw_pane_g3

0x940b,	// (0x0002742e) cf0_flow_pane_ParamLimits

0x940b,	// (0x0002742e) cf0_flow_pane

0xee0d,	// (0x0002ce30) listscroll_cf0_pane

0xee18,	// (0x0002ce3b) main_cf0_pane_g1

0x941a,	// (0x0002743d) main_cf0_pane_t1_ParamLimits

0x941a,	// (0x0002743d) main_cf0_pane_t1

0x942e,	// (0x00027451) main_cf0_pane_t2_ParamLimits

0x942e,	// (0x00027451) main_cf0_pane_t2

0x0001,

0xfdb3,	// (0x0002ddd6) main_cf0_pane_t_ParamLimits

0xfdb3,	// (0x0002ddd6) main_cf0_pane_t

0xee2a,	// (0x0002ce4d) scroll_pane_cp11

0x9442,	// (0x00027465) cf0_flow_pane_g1

0x944a,	// (0x0002746d) cf0_flow_pane_g2

0x0001,

0xfdb8,	// (0x0002dddb) cf0_flow_pane_g

0x9452,	// (0x00027475) cf0_flow_pane_t1

0x9bec,	// (0x00027c0f) main_call6_pane

0x9bec,	// (0x00027c0f) main_calllock_pane

0x9460,	// (0x00027483) call6_btn_grp_pane_ParamLimits

0x9460,	// (0x00027483) call6_btn_grp_pane

0x946f,	// (0x00027492) call6_pane_g1_ParamLimits

0x946f,	// (0x00027492) call6_pane_g1

0x947e,	// (0x000274a1) popup_call6_1st_window_ParamLimits

0x947e,	// (0x000274a1) popup_call6_1st_window

0x948c,	// (0x000274af) popup_call6_2nd_window_ParamLimits

0x948c,	// (0x000274af) popup_call6_2nd_window

0x949a,	// (0x000274bd) cell_call6_btn_pane_ParamLimits

0x949a,	// (0x000274bd) cell_call6_btn_pane

0xa4fc,	// (0x0002851f) bg_popup_call2_in_pane_cp03

0xee35,	// (0x0002ce58) popup_call6_1st_window_g1

0xee3d,	// (0x0002ce60) popup_call6_1st_window_g2

0xee45,	// (0x0002ce68) popup_call6_1st_window_g3

0x0002,

0x0d9b,	// (0x0001edbe) popup_call6_1st_window_g

0xee4d,	// (0x0002ce70) popup_call6_1st_window_t1

0xee5c,	// (0x0002ce7f) popup_call6_1st_window_t2

0xee6c,	// (0x0002ce8f) popup_call6_1st_window_t3

0x0002,

0x0da2,	// (0x0001edc5) popup_call6_1st_window_t

0xa4fc,	// (0x0002851f) bg_popup_call2_in_pane_cp04

0xee35,	// (0x0002ce58) popup_call6_2nd_window_g1

0xee3d,	// (0x0002ce60) popup_call6_2nd_window_g2

0xee45,	// (0x0002ce68) popup_call6_2nd_window_g3

0x0002,

0x0d9b,	// (0x0001edbe) popup_call6_2nd_window_g

0xee4d,	// (0x0002ce70) popup_call6_2nd_window_t1

0x9bec,	// (0x00027c0f) bg_button_pane_cp15

0xee7c,	// (0x0002ce9f) cell_call6_btn_pane_g1

0xee85,	// (0x0002cea8) cell_call6_btn_pane_t1

0x94a9,	// (0x000274cc) listscroll_wgtman_pane_ParamLimits

0x94a9,	// (0x000274cc) listscroll_wgtman_pane

0x94c5,	// (0x000274e8) wgtman_btn_pane_ParamLimits

0x94c5,	// (0x000274e8) wgtman_btn_pane

0xad15,	// (0x00028d38) aid_scroll_copy1

0xee94,	// (0x0002ceb7) list_wgtman_pane

0x94fa,	// (0x0002751d) wgtman_btn_pane_g1_ParamLimits

0x94fa,	// (0x0002751d) wgtman_btn_pane_g1

0x9522,	// (0x00027545) wgtman_btn_pane_t1_ParamLimits

0x9522,	// (0x00027545) wgtman_btn_pane_t1

0xee9e,	// (0x0002cec1) wgtman_btn_pane_t2_ParamLimits

0xee9e,	// (0x0002cec1) wgtman_btn_pane_t2

0x0001,

0xfdbd,	// (0x0002dde0) wgtman_btn_pane_t_ParamLimits

0xfdbd,	// (0x0002dde0) wgtman_btn_pane_t

0x9559,	// (0x0002757c) listrow_wgtman_pane_ParamLimits

0x9559,	// (0x0002757c) listrow_wgtman_pane

0x9574,	// (0x00027597) listrow_wgtman_pane_g1

0x9581,	// (0x000275a4) listrow_wgtman_pane_g2

0x0001,

0xfdc2,	// (0x0002dde5) listrow_wgtman_pane_g

0x959f,	// (0x000275c2) listrow_wgtman_pane_t1

0x95b7,	// (0x000275da) listrow_wgtman_pane_t2

0x0001,

0xfdc7,	// (0x0002ddea) listrow_wgtman_pane_t

0x95dd,	// (0x00027600) wait_bar_pane_cp09

0xeeb5,	// (0x0002ced8) main_calllock_btn_pane

0xeebf,	// (0x0002cee2) main_calllock_pane_g1

0x9bec,	// (0x00027c0f) bg_button_pane_cp17

0xeecb,	// (0x0002ceee) main_calllock_btn_pane_g1

0xeed4,	// (0x0002cef7) main_calllock_btn_pane_t1

0x9bec,	// (0x00027c0f) main_dialer3_pane

0x9bec,	// (0x00027c0f) main_fmrd2_pane

0xc7f2,	// (0x0002a815) main_fs_bigclock_unlock_btn_pane_g1

0xeeeb,	// (0x0002cf0e) main_fs_bigclock_unlock_btn_pane_t1

0x95ef,	// (0x00027612) area_fmrd2_info_pane_ParamLimits

0x95ef,	// (0x00027612) area_fmrd2_info_pane

0x95fd,	// (0x00027620) area_fmrd2_visual_pane_ParamLimits

0x95fd,	// (0x00027620) area_fmrd2_visual_pane

0x960b,	// (0x0002762e) fmrd2_indi_pane_ParamLimits

0x960b,	// (0x0002762e) fmrd2_indi_pane

0x9618,	// (0x0002763b) area_fmrd2_visual_pane_g1

0x9620,	// (0x00027643) area_fmrd2_visual_pane_t1

0x9630,	// (0x00027653) area_fmrd2_visual_pane_t2

0x9640,	// (0x00027663) area_fmrd2_visual_pane_t3

0x0002,

0xfdd1,	// (0x0002ddf4) area_fmrd2_visual_pane_t

0x9650,	// (0x00027673) area_fmrd2_info_pane_g1

0x9658,	// (0x0002767b) area_fmrd2_info_pane_t1

0x9668,	// (0x0002768b) area_fmrd2_info_pane_t2

0x9678,	// (0x0002769b) area_fmrd2_info_pane_t3

0x9688,	// (0x000276ab) area_fmrd2_info_pane_t4

0x0003,

0xfdd8,	// (0x0002ddfb) area_fmrd2_info_pane_t

0x9696,	// (0x000276b9) fmrd2_indi_pane_t1

0x96a6,	// (0x000276c9) fmrd2_indi_pane_t2

0x96b6,	// (0x000276d9) fmrd2_indi_pane_t3

0x0002,

0xfde1,	// (0x0002de04) fmrd2_indi_pane_t

0xe158,	// (0x0002c17b) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe158,	// (0x0002c17b) list_single_fs_bigclock_indicator_pane_g5

0xe208,	// (0x0002c22b) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe208,	// (0x0002c22b) list_single_fs_bigclock_indicator_pane_t5

0x8e34,	// (0x00026e57) aid_cell_bcale_month_pane_ParamLimits

0x8e34,	// (0x00026e57) aid_cell_bcale_month_pane

0x8e52,	// (0x00026e75) bcale_month_pane_ParamLimits

0x8e52,	// (0x00026e75) bcale_month_pane

0x8e70,	// (0x00026e93) bcale_preview_pane_ParamLimits

0x8e70,	// (0x00026e93) bcale_preview_pane

0xec90,	// (0x0002ccb3) list_single_fs_bigclock_pane_t1_ParamLimits

0xecaf,	// (0x0002ccd2) list_single_fs_bigclock_pane_t2_ParamLimits

0xecaf,	// (0x0002ccd2) list_single_fs_bigclock_pane_t2

0x0001,

0x0d4f,	// (0x0001ed72) list_single_fs_bigclock_pane_t_ParamLimits

0x0d4f,	// (0x0001ed72) list_single_fs_bigclock_pane_t

0xeee3,	// (0x0002cf06) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfdcc,	// (0x0002ddef) main_fs_bigclock_unlock_btn_pane_g

0x96c4,	// (0x000276e7) aid_dia3_key_size_ParamLimits

0x96c4,	// (0x000276e7) aid_dia3_key_size

0x96d0,	// (0x000276f3) aid_dia3_listrow_size_ParamLimits

0x96d0,	// (0x000276f3) aid_dia3_listrow_size

0x96e0,	// (0x00027703) dia3_keypad_fun_pane_ParamLimits

0x96e0,	// (0x00027703) dia3_keypad_fun_pane

0x96f2,	// (0x00027715) dia3_keypad_num_pane_ParamLimits

0x96f2,	// (0x00027715) dia3_keypad_num_pane

0x9704,	// (0x00027727) dia3_listscroll_pane_ParamLimits

0x9704,	// (0x00027727) dia3_listscroll_pane

0x9712,	// (0x00027735) dia3_numentry_pane_ParamLimits

0x9712,	// (0x00027735) dia3_numentry_pane

0xeef9,	// (0x0002cf1c) dia3_list_pane

0xef04,	// (0x0002cf27) scroll_pane_cp12

0x9bec,	// (0x00027c0f) bg_dia3_numentry_pane

0x9720,	// (0x00027743) dia3_numentry_pane_t1

0x972f,	// (0x00027752) cell_dia3_key_num_pane

0x9737,	// (0x0002775a) cell_dia3_key0_fun_pane_ParamLimits

0x9737,	// (0x0002775a) cell_dia3_key0_fun_pane

0x9744,	// (0x00027767) cell_dia3_key1_fun_pane_ParamLimits

0x9744,	// (0x00027767) cell_dia3_key1_fun_pane

0x9751,	// (0x00027774) dia3_listrow_pane

0xde67,	// (0x0002be8a) bg_dia3_numentry_pane_g1

0x9bec,	// (0x00027c0f) bg_button_pane_cp21

0xef0f,	// (0x0002cf32) cell_dia3_key_num_pane_t1

0xef1d,	// (0x0002cf40) cell_dia3_key_num_pane_t2

0xef2c,	// (0x0002cf4f) cell_dia3_key_num_pane_t3

0xef3b,	// (0x0002cf5e) cell_dia3_key_num_pane_t4

0x0003,

0x0dd4,	// (0x0001edf7) cell_dia3_key_num_pane_t

0x9bec,	// (0x00027c0f) bg_button_pane_cp19

0x975e,	// (0x00027781) cell_dia3_key0_fun_pane_g1

0x9bec,	// (0x00027c0f) bg_button_pane_cp20

0x9766,	// (0x00027789) cell_dia3_key1_fun_pane_g1

0x976e,	// (0x00027791) area_left_week_number_pane

0x9781,	// (0x000277a4) area_top_day_name_pane

0x978f,	// (0x000277b2) frame_month_view_pane

0xef4a,	// (0x0002cf6d) grid_month_view_pane

0x97a4,	// (0x000277c7) cell_top_day_name_pane_ParamLimits

0x97a4,	// (0x000277c7) cell_top_day_name_pane

0x97be,	// (0x000277e1) cell_area_left_week_number_pane_ParamLimits

0x97be,	// (0x000277e1) cell_area_left_week_number_pane

0x97e1,	// (0x00027804) cell_month_view_pane_ParamLimits

0x97e1,	// (0x00027804) cell_month_view_pane

0xef58,	// (0x0002cf7b) frm_month_g1

0x980d,	// (0x00027830) frm_month_g2

0x981e,	// (0x00027841) frm_month_g3

0x982f,	// (0x00027852) frm_month_g4

0x9840,	// (0x00027863) frm_month_g5

0x9853,	// (0x00027876) frm_month_g6

0x9866,	// (0x00027889) frm_month_g7

0xef65,	// (0x0002cf88) frm_month_g8

0x9879,	// (0x0002789c) frm_month_g9

0x9886,	// (0x000278a9) frm_month_g10

0x9893,	// (0x000278b6) frm_month_g11

0x98a0,	// (0x000278c3) frm_month_g12

0x98ad,	// (0x000278d0) frm_month_g13

0x98ba,	// (0x000278dd) frm_month_g14

0x98c9,	// (0x000278ec) frm_month_g15

0x98d8,	// (0x000278fb) frm_month_g16

0x000f,

0xfde8,	// (0x0002de0b) frm_month_g

0xef72,	// (0x0002cf95) cell_top_day_name_pane_t1

0x98e7,	// (0x0002790a) cell_area_left_week_number_pane_g1

0x98f6,	// (0x00027919) cell_area_left_week_number_pane_t1

0xca55,	// (0x0002aa78) cell_month_view_pane_g1

0x990c,	// (0x0002792f) cell_month_view_pane_t1

0x9bec,	// (0x00027c0f) main_fps_pane

0xe401,	// (0x0002c424) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe401,	// (0x0002c424) cmail_ddmenu_btn02_pane_cp1

0xe41d,	// (0x0002c440) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe41d,	// (0x0002c440) cmail_ddmenu_btn02_pane_cp2

0x912a,	// (0x0002714d) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x912a,	// (0x0002714d) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfd5c,	// (0x0002dd7f) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfd5c,	// (0x0002dd7f) cmail_ddmenu_btn02_pane_g

0x9149,	// (0x0002716c) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x9149,	// (0x0002716c) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfd61,	// (0x0002dd84) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfd61,	// (0x0002dd84) cmail_ddmenu_btn02_pane_t

0x9922,	// (0x00027945) fps_text_pane_ParamLimits

0x9922,	// (0x00027945) fps_text_pane

0x992f,	// (0x00027952) main_fps_pane_g1_ParamLimits

0x992f,	// (0x00027952) main_fps_pane_g1

0x993d,	// (0x00027960) wait_bar_pane_cp010_ParamLimits

0x993d,	// (0x00027960) wait_bar_pane_cp010

0x9949,	// (0x0002796c) fps_text_pane_t1_ParamLimits

0x9949,	// (0x0002796c) fps_text_pane_t1

0x6ae7,	// (0x00024b0a) cam4_image_uncrop_pane_g1

0x6af0,	// (0x00024b13) cam4_image_uncrop_pane_g2

0x6af9,	// (0x00024b1c) cam4_image_uncrop_pane_g3

0x6b02,	// (0x00024b25) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x0002d911) cam4_image_uncrop_pane_g

0x9751,	// (0x00027774) dia3_listrow_pane_ParamLimits

0x9bec,	// (0x00027c0f) main_phob2_pane

0x8c72,	// (0x00026c95) cell_tport_appsw_pane_cp02_ParamLimits

0x8c72,	// (0x00026c95) cell_tport_appsw_pane_cp02

0x8c81,	// (0x00026ca4) cell_tport_appsw_pane_cp03_ParamLimits

0x8c81,	// (0x00026ca4) cell_tport_appsw_pane_cp03

0x9bec,	// (0x00027c0f) phob2_contact_card_pane

0x9bec,	// (0x00027c0f) phob2_listscroll_pane

0xef85,	// (0x0002cfa8) phob2_list_pane

0xef8d,	// (0x0002cfb0) scroll_pane_cp034

0x9962,	// (0x00027985) phob2_cc_data_pane_ParamLimits

0x9962,	// (0x00027985) phob2_cc_data_pane

0x997c,	// (0x0002799f) phob2_cc_listscroll_pane_ParamLimits

0x997c,	// (0x0002799f) phob2_cc_listscroll_pane

0x9559,	// (0x0002757c) list_double_large_graphic_phob2_pane_ParamLimits

0x9559,	// (0x0002757c) list_double_large_graphic_phob2_pane

0x9996,	// (0x000279b9) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9996,	// (0x000279b9) list_double_large_graphic_phob2_pane_g1

0x99ac,	// (0x000279cf) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x99ac,	// (0x000279cf) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfe09,	// (0x0002de2c) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfe09,	// (0x0002de2c) list_double_large_graphic_phob2_pane_g

0x99b8,	// (0x000279db) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x99b8,	// (0x000279db) list_double_large_graphic_phob2_pane_t1

0x99cd,	// (0x000279f0) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x99cd,	// (0x000279f0) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfe0e,	// (0x0002de31) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfe0e,	// (0x0002de31) list_double_large_graphic_phob2_pane_t

0x9bec,	// (0x00027c0f) list_highlight_pane_cp024

0x99df,	// (0x00027a02) phob2_cc_button_pane

0x99e7,	// (0x00027a0a) phob2_cc_data_pane_g1_ParamLimits

0x99e7,	// (0x00027a0a) phob2_cc_data_pane_g1

0x99f3,	// (0x00027a16) phob2_cc_data_pane_g2_ParamLimits

0x99f3,	// (0x00027a16) phob2_cc_data_pane_g2

0x0001,

0xfe13,	// (0x0002de36) phob2_cc_data_pane_g_ParamLimits

0xfe13,	// (0x0002de36) phob2_cc_data_pane_g

0x99ff,	// (0x00027a22) phob2_cc_data_pane_t1_ParamLimits

0x99ff,	// (0x00027a22) phob2_cc_data_pane_t1

0x9a11,	// (0x00027a34) phob2_cc_data_pane_t2_ParamLimits

0x9a11,	// (0x00027a34) phob2_cc_data_pane_t2

0x9a23,	// (0x00027a46) phob2_cc_data_pane_t3_ParamLimits

0x9a23,	// (0x00027a46) phob2_cc_data_pane_t3

0x0002,

0xfe18,	// (0x0002de3b) phob2_cc_data_pane_t_ParamLimits

0xfe18,	// (0x0002de3b) phob2_cc_data_pane_t

0xef95,	// (0x0002cfb8) phob2_cc_list_pane_ParamLimits

0xef95,	// (0x0002cfb8) phob2_cc_list_pane

0xd65a,	// (0x0002b67d) scroll_pane_cp035_ParamLimits

0xd65a,	// (0x0002b67d) scroll_pane_cp035

0xa329,	// (0x0002834c) bg_button_pane_cp033

0xefa1,	// (0x0002cfc4) phob2_cc_button_pane_g1

0xefad,	// (0x0002cfd0) phob2_cc_button_pane_t1

0xefc2,	// (0x0002cfe5) phob2_cc_button_pane_t2

0x0001,

0x0e14,	// (0x0001ee37) phob2_cc_button_pane_t

0x9a35,	// (0x00027a58) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9a35,	// (0x00027a58) list_double_large_graphic_phob2_cc_pane

0x9a5c,	// (0x00027a7f) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9a5c,	// (0x00027a7f) list_double_large_graphic_phob2_cc_pane_g1

0x9a6d,	// (0x00027a90) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9a6d,	// (0x00027a90) list_double_large_graphic_phob2_cc_pane_g2

0x9a7c,	// (0x00027a9f) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9a7c,	// (0x00027a9f) list_double_large_graphic_phob2_cc_pane_g3

0x9a8b,	// (0x00027aae) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9a8b,	// (0x00027aae) list_double_large_graphic_phob2_cc_pane_g4

0x9a9c,	// (0x00027abf) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9a9c,	// (0x00027abf) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe1f,	// (0x0002de42) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe1f,	// (0x0002de42) list_double_large_graphic_phob2_cc_pane_g

0x9aab,	// (0x00027ace) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9aab,	// (0x00027ace) list_double_large_graphic_phob2_cc_pane_t1

0x9ad4,	// (0x00027af7) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9ad4,	// (0x00027af7) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe2a,	// (0x0002de4d) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe2a,	// (0x0002de4d) list_double_large_graphic_phob2_cc_pane_t

0xefd4,	// (0x0002cff7) list_highlight_pane_cp025_ParamLimits

0xefd4,	// (0x0002cff7) list_highlight_pane_cp025

0xa329,	// (0x0002834c) bg_button_pane_cp033_ParamLimits

0xefa1,	// (0x0002cfc4) phob2_cc_button_pane_g1_ParamLimits

0xefad,	// (0x0002cfd0) phob2_cc_button_pane_t1_ParamLimits

0xefc2,	// (0x0002cfe5) phob2_cc_button_pane_t2_ParamLimits

0x0e14,	// (0x0001ee37) phob2_cc_button_pane_t_ParamLimits

0x2720,	// (0x00020743) popup_wgtman_window

0xd3d2,	// (0x0002b3f5) scroll_pane_cp038

0x94e2,	// (0x00027505) wgtman_btn_pane_cp_01_ParamLimits

0x94e2,	// (0x00027505) wgtman_btn_pane_cp_01

0xefe2,	// (0x0002d005) wgtman_content_pane

0xefeb,	// (0x0002d00e) wgtman_heading_pane

0x9bec,	// (0x00027c0f) bg_heading_pane_cp02

0xeff4,	// (0x0002d017) wgtman_heading_pane_g1

0xeffc,	// (0x0002d01f) wgtman_heading_pane_t1

0xf00a,	// (0x0002d02d) scroll_pane_cp036

0xf012,	// (0x0002d035) wgtman_list_pane

0xf01a,	// (0x0002d03d) wgtman_list_pane_t1_ParamLimits

0xf01a,	// (0x0002d03d) wgtman_list_pane_t1

0x1ee0,	// (0x0001ff03) cam4_grid_pane

0x72b0,	// (0x000252d3) bg_button_pane_cp015_ParamLimits

0x72c2,	// (0x000252e5) bg_button_pane_cp016_ParamLimits

0x72d5,	// (0x000252f8) bg_button_pane_cp017_ParamLimits

0x732b,	// (0x0002534e) popup_vitu2_query_window_g3_ParamLimits

0x732b,	// (0x0002534e) popup_vitu2_query_window_g3

0x73e6,	// (0x00025409) popup_vitu2_query_window_t6_ParamLimits

0x73e6,	// (0x00025409) popup_vitu2_query_window_t6

0x7411,	// (0x00025434) popup_vitu2_query_window_t7_ParamLimits

0x7411,	// (0x00025434) popup_vitu2_query_window_t7

0xea8d,	// (0x0002cab0) cam4_grid_pane_g1

0xea96,	// (0x0002cab9) cam4_grid_pane_g2

0xf034,	// (0x0002d057) cam4_grid_pane_g3

0xf03d,	// (0x0002d060) cam4_grid_pane_g4

0x0003,

0xfe2f,	// (0x0002de52) cam4_grid_pane_g

0x33a6,	// (0x000213c9) aid_placing_vt_slider_lsc_ParamLimits

0x36f2,	// (0x00021715) vidtel_button_pane_ParamLimits

0x36f2,	// (0x00021715) vidtel_button_pane

0x9bec,	// (0x00027c0f) bg_button_pane_cp034

0x9afd,	// (0x00027b20) vidtel_button_pane_g1

0xf048,	// (0x0002d06b) vidtel_button_pane_t1

0xd510,	// (0x0002b533) aid_size_vtel_slider_touch

0xd65a,	// (0x0002b67d) scroll_pane_cp039

0xdea5,	// (0x0002bec8) ncim_query_button_pane_cp01_ParamLimits

0xdec4,	// (0x0002bee7) ncimui_query_pane_g1_ParamLimits

0xa329,	// (0x0002834c) input_focus_pane_cp012_ParamLimits

0xdee9,	// (0x0002bf0c) ncim_query_entry_pane_t1_ParamLimits

0xd65a,	// (0x0002b67d) scroll_pane_cp039_ParamLimits

0xadf9,	// (0x00028e1c) navi_pane_bcale_mc_g1

0xae01,	// (0x00028e24) navi_pane_bcale_mc_t1

0xe466,	// (0x0002c489) main_sp_fs_email_pane_g1

0xe472,	// (0x0002c495) main_sp_fs_email_pane_g2

0x0001,

0x0bbf,	// (0x0001ebe2) main_sp_fs_email_pane_g

0xe8ea,	// (0x0002c90d) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe8ea,	// (0x0002c90d) list_single_cale_mrui_row_pane_g3

0x9169,	// (0x0002718c) list_single_recal_day_pane_g5_event_pane

0xeadb,	// (0x0002cafe) list_single_recal_day_pane_g7

0xf05e,	// (0x0002d081) list_recal_day_event_pane_cp01

0xf067,	// (0x0002d08a) list_recal_vselct_arw_lo_pane_cp01

0xf06f,	// (0x0002d092) list_recal_vselct_arw_up_pane_cp01

0xf077,	// (0x0002d09a) list_recal_vselct_pane_cp01

0xd532,	// (0x0002b555) list_recal_day_event_pane_cp01_g1

0xf081,	// (0x0002d0a4) list_recal_day_event_pane_cp01_t1

0xeae3,	// (0x0002cb06) list_single_recal_day_pane_t1_ParamLimits

0xeaf5,	// (0x0002cb18) list_single_recal_day_pane_t2_ParamLimits

0x0d17,	// (0x0001ed3a) list_single_recal_day_pane_t_ParamLimits

0xa264,	// (0x00028287) bg_notes_pane_ParamLimits

0xa307,	// (0x0002832a) list_notes_pane_ParamLimits

0x29a7,	// (0x000209ca) scroll_pane_cp06_ParamLimits

0xa337,	// (0x0002835a) main_notes_pane_ParamLimits

0x9bec,	// (0x00027c0f) main_welc_pane

0x9b05,	// (0x00027b28) main_welc_body_pane_ParamLimits

0x9b05,	// (0x00027b28) main_welc_body_pane

0x9b1f,	// (0x00027b42) main_welc_opti_pane_ParamLimits

0x9b1f,	// (0x00027b42) main_welc_opti_pane

0x9b52,	// (0x00027b75) main_welc_pane_t1_ParamLimits

0x9b52,	// (0x00027b75) main_welc_pane_t1

0x9b6c,	// (0x00027b8f) main_welc_body_row_pane_ParamLimits

0x9b6c,	// (0x00027b8f) main_welc_body_row_pane

0xd230,	// (0x0002b253) main_welc_opti_row_pane_ParamLimits

0xd230,	// (0x0002b253) main_welc_opti_row_pane

0xf08f,	// (0x0002d0b2) main_welc_opti_row_pane_g1

0x9b91,	// (0x00027bb4) main_welc_opti_row_pane_t1

0xf097,	// (0x0002d0ba) main_welc_body_row_pane_t1

0xed70,	// (0x0002cd93) popup_notif_wgt_heading_pane

0xed8a,	// (0x0002cdad) aid_size_list_notif_wgt_del_ParamLimits

0xed97,	// (0x0002cdba) list_notif_wgt_row_pane_g1_ParamLimits

0xeda3,	// (0x0002cdc6) list_notif_wgt_row_pane_g2_ParamLimits

0xedb7,	// (0x0002cdda) list_notif_wgt_row_pane_g3_ParamLimits

0x0d7e,	// (0x0001eda1) list_notif_wgt_row_pane_g_ParamLimits

0xedc4,	// (0x0002cde7) list_notif_wgt_row_pane_t1_ParamLimits

0xedda,	// (0x0002cdfd) list_notif_wgt_row_pane_t2_ParamLimits

0xedec,	// (0x0002ce0f) list_notif_wgt_row_pane_t3_ParamLimits

0x0d85,	// (0x0001eda8) list_notif_wgt_row_pane_t_ParamLimits

0x9574,	// (0x00027597) listrow_wgtman_pane_g1_ParamLimits

0x9581,	// (0x000275a4) listrow_wgtman_pane_g2_ParamLimits

0xfdc2,	// (0x0002dde5) listrow_wgtman_pane_g_ParamLimits

0x959f,	// (0x000275c2) listrow_wgtman_pane_t1_ParamLimits

0x95b7,	// (0x000275da) listrow_wgtman_pane_t2_ParamLimits

0xfdc7,	// (0x0002ddea) listrow_wgtman_pane_t_ParamLimits

0x95dd,	// (0x00027600) wait_bar_pane_cp09_ParamLimits

0x9bec,	// (0x00027c0f) bg_popup_heading_pane_cp02

0xf0a6,	// (0x0002d0c9) popup_notif_wgt_heading_pane_g1

0xf0ae,	// (0x0002d0d1) popup_notif_wgt_heading_pane_t1

0x9bec,	// (0x00027c0f) main_vids_pane

0x9bec,	// (0x00027c0f) vids_listscroll_pane

0x9ba0,	// (0x00027bc3) scroll_pane_cp040

0x9bec,	// (0x00027c0f) vids_list_pane

0x9bab,	// (0x00027bce) vids_list_double_pane_ParamLimits

0x9bab,	// (0x00027bce) vids_list_double_pane

0x9bc5,	// (0x00027be8) vids_list_double_pane_g1

0x9bce,	// (0x00027bf1) vids_list_double_pane_t1

0x9bde,	// (0x00027c01) vids_list_double_pane_t2

0x0001,

0xfe3d,	// (0x0002de60) vids_list_double_pane_t

0x1528,	// (0x0001f54b) main_ncimui_pane_ParamLimits

0x7f48,	// (0x00025f6b) main_ncimui_pane_g1_ParamLimits

0x7f54,	// (0x00025f77) main_ncimui_pane_g2_ParamLimits

0x7f54,	// (0x00025f77) main_ncimui_pane_g2

0x0001,

0xfbc8,	// (0x0002dbeb) main_ncimui_pane_g_ParamLimits

0xfbc8,	// (0x0002dbeb) main_ncimui_pane_g

0x9b38,	// (0x00027b5b) main_welc_pane_g1_ParamLimits

0x9b38,	// (0x00027b5b) main_welc_pane_g1

0x9b44,	// (0x00027b67) main_welc_pane_g2_ParamLimits

0x9b44,	// (0x00027b67) main_welc_pane_g2

0x0001,

0xfe38,	// (0x0002de5b) main_welc_pane_g_ParamLimits

0xfe38,	// (0x0002de5b) main_welc_pane_g

0xa264,	// (0x00028287) listscroll_mce_pane_ParamLimits

0xaf4e,	// (0x00028f71) wait_bar_pane_cp10

0xc3d5,	// (0x0002a3f8) main_cale_day_pane_ParamLimits

0xc3d5,	// (0x0002a3f8) main_cale_week_pane_ParamLimits

0xa264,	// (0x00028287) main_messa_pane_ParamLimits

0x648f,	// (0x000244b2) main_clock2_btn_pane_ParamLimits

0x648f,	// (0x000244b2) main_clock2_btn_pane

0xcc09,	// (0x0002ac2c) main_clock2_btn_pane_cp01_ParamLimits

0xcc09,	// (0x0002ac2c) main_clock2_btn_pane_cp01

0xe876,	// (0x0002c899) list_cale_mrui_pane_ParamLimits

0xee22,	// (0x0002ce45) main_cf0_pane_g2

0x0001,

0x0d8c,	// (0x0001edaf) main_cf0_pane_g

0x976e,	// (0x00027791) area_left_week_number_pane_ParamLimits

0x9781,	// (0x000277a4) area_top_day_name_pane_ParamLimits

0x978f,	// (0x000277b2) frame_month_view_pane_ParamLimits

0xef4a,	// (0x0002cf6d) grid_month_view_pane_ParamLimits

0xef58,	// (0x0002cf7b) frm_month_g1_ParamLimits

0x980d,	// (0x00027830) frm_month_g2_ParamLimits

0x981e,	// (0x00027841) frm_month_g3_ParamLimits

0x982f,	// (0x00027852) frm_month_g4_ParamLimits

0x9840,	// (0x00027863) frm_month_g5_ParamLimits

0x9853,	// (0x00027876) frm_month_g6_ParamLimits

0x9866,	// (0x00027889) frm_month_g7_ParamLimits

0xef65,	// (0x0002cf88) frm_month_g8_ParamLimits

0x9879,	// (0x0002789c) frm_month_g9_ParamLimits

0x9886,	// (0x000278a9) frm_month_g10_ParamLimits

0x9893,	// (0x000278b6) frm_month_g11_ParamLimits

0x98a0,	// (0x000278c3) frm_month_g12_ParamLimits

0x98ad,	// (0x000278d0) frm_month_g13_ParamLimits

0x98ba,	// (0x000278dd) frm_month_g14_ParamLimits

0x98c9,	// (0x000278ec) frm_month_g15_ParamLimits

0x98d8,	// (0x000278fb) frm_month_g16_ParamLimits

0xfde8,	// (0x0002de0b) frm_month_g_ParamLimits

0xef72,	// (0x0002cf95) cell_top_day_name_pane_t1_ParamLimits

0x98e7,	// (0x0002790a) cell_area_left_week_number_pane_g1_ParamLimits

0x98f6,	// (0x00027919) cell_area_left_week_number_pane_t1_ParamLimits

0xca55,	// (0x0002aa78) cell_month_view_pane_g1_ParamLimits

0x990c,	// (0x0002792f) cell_month_view_pane_t1_ParamLimits

0xa25c,	// (0x0002827f) main_clock2_btn_pane_g1

0xf0bc,	// (0x0002d0df) main_clock2_btn_pane_t1

0xa329,	// (0x0002834c) listscroll_cmail_pane_ParamLimits

0xe466,	// (0x0002c489) main_sp_fs_email_pane_g1_ParamLimits

0xe472,	// (0x0002c495) main_sp_fs_email_pane_g2_ParamLimits

0x0bbf,	// (0x0001ebe2) main_sp_fs_email_pane_g_ParamLimits

0xea39,	// (0x0002ca5c) list_recal_day_pane_ParamLimits

0xea4a,	// (0x0002ca6d) mian_recal_day_pane_t1

0x8947,	// (0x0002696a) list_single_dyc_row_text_pane_t4_ParamLimits

0x8947,	// (0x0002696a) list_single_dyc_row_text_pane_t4

0x897e,	// (0x000269a1) list_single_dyc_row_text_pane_t5_ParamLimits

0x897e,	// (0x000269a1) list_single_dyc_row_text_pane_t5

0xe518,	// (0x0002c53b) list_single_dyc_row_text_pane_t6_ParamLimits

0xe518,	// (0x0002c53b) list_single_dyc_row_text_pane_t6

0x452e,	// (0x00022551) aid_mgn_list_cale_time_pane

0x1528,	// (0x0001f54b) main_gallery2_pane_ParamLimits

0xcc1f,	// (0x0002ac42) main_clock2_pane_cp01_t1

0xcc2f,	// (0x0002ac52) main_clock2_pane_cp01_t3

0x0001,

0xf7c4,	// (0x0002d7e7) main_clock2_pane_cp01_t

0x2ccc,	// (0x00020cef) cale_week_scroll_pane_g16_ParamLimits

0x2ccc,	// (0x00020cef) cale_week_scroll_pane_g16

0xa4fc,	// (0x0002851f) vorec_slider_pane

0xf048,	// (0x0002d06b) vidtel_button_pane_t1_ParamLimits
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

} // end of namespace AknLayoutScalable_Abrw_php_apps_qhd_prt_tch_Normal

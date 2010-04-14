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

#include "aknlayoutscalable_elaf_phl_apps_qhd_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_phl_apps_qhd_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0004cbd1 };

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
0x10bc,	// (0x0004dc8d) Screen

0x10c8,	// (0x0004dc99) application_window

0x1114,	// (0x0004dce5) area_bottom_pane_ParamLimits

0x1114,	// (0x0004dce5) area_bottom_pane

0x114d,	// (0x0004dd1e) area_top_pane_ParamLimits

0x114d,	// (0x0004dd1e) area_top_pane

0x97c7,	// (0x00056398) call_video_uplink_pane_ParamLimits

0x97c7,	// (0x00056398) call_video_uplink_pane

0x11db,	// (0x0004ddac) main_pane_ParamLimits

0x11db,	// (0x0004ddac) main_pane

0xc869,	// (0x0005943a) context_pane

0x45ab,	// (0x0005117c) navi_pane

0x45dd,	// (0x000511ae) popup_cale_events_window_ParamLimits

0x45dd,	// (0x000511ae) popup_cale_events_window

0xc87c,	// (0x0005944d) popup_mup_playback_window

0x45f5,	// (0x000511c6) signal_pane

0xa823,	// (0x000573f4) main_browser_pane

0xb463,	// (0x00058034) main_burst_pane

0x430b,	// (0x00050edc) main_calc_pane

0xc84f,	// (0x00059420) main_cale_day_pane

0x1823,	// (0x0004e3f4) main_cale_month_pane

0xc84f,	// (0x00059420) main_cale_week_pane

0xb463,	// (0x00058034) main_call_pane

0xa503,	// (0x000570d4) main_call_poc_pane

0xb463,	// (0x00058034) main_camera_pane

0xb463,	// (0x00058034) main_chi_dic_pane

0xb1e0,	// (0x00057db1) main_clock_pane

0xa503,	// (0x000570d4) main_fmradio_pane

0xb463,	// (0x00058034) main_graph_messa_pane

0xa503,	// (0x000570d4) main_help_pane

0xa823,	// (0x000573f4) main_im_pane

0xa75e,	// (0x0005732f) main_image_pane_ParamLimits

0xa75e,	// (0x0005732f) main_image_pane

0xa503,	// (0x000570d4) main_location2_pane

0xb463,	// (0x00058034) main_location_pane

0xa75e,	// (0x0005732f) main_messa_pane

0xa503,	// (0x000570d4) main_mp2_pane

0xb463,	// (0x00058034) main_mp_pane

0xa503,	// (0x000570d4) main_msg_pane

0xa503,	// (0x000570d4) main_mup_eq_pane

0xa503,	// (0x000570d4) main_mup_pane

0xa823,	// (0x000573f4) main_notes_pane

0xa503,	// (0x000570d4) main_pec_pane

0xa503,	// (0x000570d4) main_phob_pane

0xa503,	// (0x000570d4) main_pinb_pane

0xa503,	// (0x000570d4) main_postcard_pane

0xa503,	// (0x000570d4) main_qdial_pane

0xb463,	// (0x00058034) main_skin_pane

0xa503,	// (0x000570d4) main_smil2_pane

0xb463,	// (0x00058034) main_smil_pane

0xb463,	// (0x00058034) main_video_pane

0xb463,	// (0x00058034) main_video_tele_pane

0xa75e,	// (0x0005732f) main_viewer_pane_ParamLimits

0xa75e,	// (0x0005732f) main_viewer_pane

0xb463,	// (0x00058034) main_vorec_pane

0x435f,	// (0x00050f30) popup_blid_sat_info_window_ParamLimits

0x435f,	// (0x00050f30) popup_blid_sat_info_window

0x43b7,	// (0x00050f88) popup_dyc_status_message_window_ParamLimits

0x43b7,	// (0x00050f88) popup_dyc_status_message_window

0x43d1,	// (0x00050fa2) popup_grid_large_graphic_window_ParamLimits

0x43d1,	// (0x00050fa2) popup_grid_large_graphic_window

0x448d,	// (0x0005105e) popup_loc_request_window_ParamLimits

0x448d,	// (0x0005105e) popup_loc_request_window

0x4583,	// (0x00051154) popup_wml_address_window_ParamLimits

0x4583,	// (0x00051154) popup_wml_address_window

0x4145,	// (0x00050d16) call_muted_g1

0x3dfa,	// (0x000509cb) popup_call_audio_conf_window_ParamLimits

0x3dfa,	// (0x000509cb) popup_call_audio_conf_window

0x4159,	// (0x00050d2a) popup_call_audio_first_window_ParamLimits

0x4159,	// (0x00050d2a) popup_call_audio_first_window

0x41cf,	// (0x00050da0) popup_call_audio_in_window_ParamLimits

0x41cf,	// (0x00050da0) popup_call_audio_in_window

0x420b,	// (0x00050ddc) popup_call_audio_out_window_ParamLimits

0x420b,	// (0x00050ddc) popup_call_audio_out_window

0x4245,	// (0x00050e16) popup_call_audio_second_window_ParamLimits

0x4245,	// (0x00050e16) popup_call_audio_second_window

0x429b,	// (0x00050e6c) popup_call_audio_wait_window_ParamLimits

0x429b,	// (0x00050e6c) popup_call_audio_wait_window

0x42d0,	// (0x00050ea1) popup_number_entry_window_ParamLimits

0x42d0,	// (0x00050ea1) popup_number_entry_window

0x97e5,	// (0x000563b6) bg_popup_call_pane_cp05_ParamLimits

0x97e5,	// (0x000563b6) bg_popup_call_pane_cp05

0x9805,	// (0x000563d6) popup_number_entry_window_t1

0x9818,	// (0x000563e9) popup_number_entry_window_t2

0x982a,	// (0x000563fb) popup_number_entry_window_t3

0x0003,

0xf0c6,	// (0x0005bc97) popup_number_entry_window_t

0x983c,	// (0x0005640d) text_title_cp2

0x984f,	// (0x00056420) bg_popup_call_pane_cp_ParamLimits

0x984f,	// (0x00056420) bg_popup_call_pane_cp

0x985d,	// (0x0005642e) call_thumbnail_pane

0x9865,	// (0x00056436) popup_call_audio_in_window_g1_ParamLimits

0x9865,	// (0x00056436) popup_call_audio_in_window_g1

0x9871,	// (0x00056442) popup_call_audio_in_window_g2_ParamLimits

0x9871,	// (0x00056442) popup_call_audio_in_window_g2

0x987d,	// (0x0005644e) popup_call_audio_in_window_g3_ParamLimits

0x987d,	// (0x0005644e) popup_call_audio_in_window_g3

0x0002,

0xf0cf,	// (0x0005bca0) popup_call_audio_in_window_g_ParamLimits

0xf0cf,	// (0x0005bca0) popup_call_audio_in_window_g

0x9889,	// (0x0005645a) popup_call_audio_in_window_t1_ParamLimits

0x9889,	// (0x0005645a) popup_call_audio_in_window_t1

0x98a5,	// (0x00056476) popup_call_audio_in_window_t2_ParamLimits

0x98a5,	// (0x00056476) popup_call_audio_in_window_t2

0x98c1,	// (0x00056492) popup_call_audio_in_window_t3_ParamLimits

0x98c1,	// (0x00056492) popup_call_audio_in_window_t3

0x0002,

0xf0d6,	// (0x0005bca7) popup_call_audio_in_window_t_ParamLimits

0xf0d6,	// (0x0005bca7) popup_call_audio_in_window_t

0x984f,	// (0x00056420) bg_popup_call_pane_cp01_ParamLimits

0x984f,	// (0x00056420) bg_popup_call_pane_cp01

0x985d,	// (0x0005642e) call_thumbnail_pane_cp02

0x98d4,	// (0x000564a5) call_type_pane_cp022

0x98dc,	// (0x000564ad) popup_call_audio_out_window_g1_ParamLimits

0x98dc,	// (0x000564ad) popup_call_audio_out_window_g1

0x98ee,	// (0x000564bf) popup_call_audio_out_window_g2_ParamLimits

0x98ee,	// (0x000564bf) popup_call_audio_out_window_g2

0x98fa,	// (0x000564cb) popup_call_audio_out_window_g3_ParamLimits

0x98fa,	// (0x000564cb) popup_call_audio_out_window_g3

0x0002,

0xf0dd,	// (0x0005bcae) popup_call_audio_out_window_g_ParamLimits

0xf0dd,	// (0x0005bcae) popup_call_audio_out_window_g

0x990c,	// (0x000564dd) popup_call_audio_out_window_t1_ParamLimits

0x990c,	// (0x000564dd) popup_call_audio_out_window_t1

0x9924,	// (0x000564f5) popup_call_audio_out_window_t2_ParamLimits

0x9924,	// (0x000564f5) popup_call_audio_out_window_t2

0x0001,

0xf0e4,	// (0x0005bcb5) popup_call_audio_out_window_t_ParamLimits

0xf0e4,	// (0x0005bcb5) popup_call_audio_out_window_t

0x9939,	// (0x0005650a) bg_popup_call_pane_ParamLimits

0x9939,	// (0x0005650a) bg_popup_call_pane

0x1397,	// (0x0004df68) call_thumbnail_pane_cp_ParamLimits

0x1397,	// (0x0004df68) call_thumbnail_pane_cp

0x99bd,	// (0x0005658e) call_type_pane_cp01_ParamLimits

0x99bd,	// (0x0005658e) call_type_pane_cp01

0x9a01,	// (0x000565d2) popup_call_audio_first_window_g1_ParamLimits

0x9a01,	// (0x000565d2) popup_call_audio_first_window_g1

0x9a4d,	// (0x0005661e) popup_call_audio_first_window_g2_ParamLimits

0x9a4d,	// (0x0005661e) popup_call_audio_first_window_g2

0x0001,

0xf0e9,	// (0x0005bcba) popup_call_audio_first_window_g_ParamLimits

0xf0e9,	// (0x0005bcba) popup_call_audio_first_window_g

0x9a91,	// (0x00056662) popup_call_audio_first_window_t1_ParamLimits

0x9a91,	// (0x00056662) popup_call_audio_first_window_t1

0x9b3d,	// (0x0005670e) popup_call_audio_first_window_t4_ParamLimits

0x9b3d,	// (0x0005670e) popup_call_audio_first_window_t4

0xa4d4,	// (0x000570a5) popup_call_audio_first_window_t5_ParamLimits

0xa4d4,	// (0x000570a5) popup_call_audio_first_window_t5

0x0002,

0xf0ee,	// (0x0005bcbf) popup_call_audio_first_window_t_ParamLimits

0xf0ee,	// (0x0005bcbf) popup_call_audio_first_window_t

0xa503,	// (0x000570d4) bg_popup_call_pane_cp02

0xa50d,	// (0x000570de) call_type_pane_cp023

0xa515,	// (0x000570e6) popup_call_audio_wait_window_g1

0xa51d,	// (0x000570ee) popup_call_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x0005bcc6) popup_call_audio_wait_window_g

0xa525,	// (0x000570f6) popup_call_audio_wait_window_t3

0xa533,	// (0x00057104) bg_popup_call_pane_cp03_ParamLimits

0xa533,	// (0x00057104) bg_popup_call_pane_cp03

0xa593,	// (0x00057164) call_thumbnail_pane_cp011_ParamLimits

0xa593,	// (0x00057164) call_thumbnail_pane_cp011

0xa59f,	// (0x00057170) call_type_pane_cp034_ParamLimits

0xa59f,	// (0x00057170) call_type_pane_cp034

0xa5db,	// (0x000571ac) popup_call_audio_second_window_g1_ParamLimits

0xa5db,	// (0x000571ac) popup_call_audio_second_window_g1

0xa617,	// (0x000571e8) popup_call_audio_second_window_g2_ParamLimits

0xa617,	// (0x000571e8) popup_call_audio_second_window_g2

0x0001,

0xf0fa,	// (0x0005bccb) popup_call_audio_second_window_g_ParamLimits

0xf0fa,	// (0x0005bccb) popup_call_audio_second_window_g

0xa653,	// (0x00057224) popup_call_audio_second_window_t1_ParamLimits

0xa653,	// (0x00057224) popup_call_audio_second_window_t1

0xa6d4,	// (0x000572a5) popup_call_audio_second_window_t2_ParamLimits

0xa6d4,	// (0x000572a5) popup_call_audio_second_window_t2

0xa70a,	// (0x000572db) popup_call_audio_second_window_t3_ParamLimits

0xa70a,	// (0x000572db) popup_call_audio_second_window_t3

0x0002,

0xf0ff,	// (0x0005bcd0) popup_call_audio_second_window_t_ParamLimits

0xf0ff,	// (0x0005bcd0) popup_call_audio_second_window_t

0xa503,	// (0x000570d4) bg_popup_call_pane_cp04

0xa740,	// (0x00057311) list_conf_pane

0xa748,	// (0x00057319) popup_call_audio_conf_window_t1

0xa756,	// (0x00057327) call_thumbnail_pane_g1

0xa75e,	// (0x0005732f) bg_pinb_pane_ParamLimits

0xa75e,	// (0x0005732f) bg_pinb_pane

0xa76c,	// (0x0005733d) find_pinb_pane

0xa775,	// (0x00057346) listscroll_pinb_pane_ParamLimits

0xa775,	// (0x00057346) listscroll_pinb_pane

0xa784,	// (0x00057355) pinb_bg_pane_g1

0x13bb,	// (0x0004df8c) pinb_bg_pane_g2

0x13c7,	// (0x0004df98) pinb_bg_pane_g3

0x13d3,	// (0x0004dfa4) pinb_bg_pane_g4

0x13df,	// (0x0004dfb0) pinb_bg_pane_g5

0x13eb,	// (0x0004dfbc) pinb_bg_pane_g6

0x13f6,	// (0x0004dfc7) pinb_bg_pane_g7

0x1401,	// (0x0004dfd2) pinb_bg_pane_g8

0x140c,	// (0x0004dfdd) pinb_bg_pane_g9

0x1416,	// (0x0004dfe7) pinb_bg_pane_g10

0x0009,

0xf106,	// (0x0005bcd7) pinb_bg_pane_g

0x1433,	// (0x0004e004) grid_pinb_pane

0x143c,	// (0x0004e00d) list_pinb_pane

0x1445,	// (0x0004e016) scroll_pane_cp01_ParamLimits

0x1445,	// (0x0004e016) scroll_pane_cp01

0xa78e,	// (0x0005735f) find_pinb_pane_g1_ParamLimits

0xa78e,	// (0x0005735f) find_pinb_pane_g1

0xa7a6,	// (0x00057377) find_pinb_pane_t1

0xa7b8,	// (0x00057389) find_pinb_pane_t2

0x0001,

0xf120,	// (0x0005bcf1) find_pinb_pane_t

0xa7cd,	// (0x0005739e) input_focus_pane_cp01_ParamLimits

0xa7cd,	// (0x0005739e) input_focus_pane_cp01

0x1457,	// (0x0004e028) cell_pinb_pane_ParamLimits

0x1457,	// (0x0004e028) cell_pinb_pane

0x1480,	// (0x0004e051) cell_pinb_pane_g1_ParamLimits

0x1480,	// (0x0004e051) cell_pinb_pane_g1

0x1490,	// (0x0004e061) cell_pinb_pane_g2_ParamLimits

0x1490,	// (0x0004e061) cell_pinb_pane_g2

0xa7d9,	// (0x000573aa) cell_pinb_pane_g3_ParamLimits

0xa7d9,	// (0x000573aa) cell_pinb_pane_g3

0x0002,

0xf125,	// (0x0005bcf6) cell_pinb_pane_g_ParamLimits

0xf125,	// (0x0005bcf6) cell_pinb_pane_g

0xa503,	// (0x000570d4) grid_highlight_pane_cp01

0x149c,	// (0x0004e06d) list_pinb_item_pane_ParamLimits

0x149c,	// (0x0004e06d) list_pinb_item_pane

0xa503,	// (0x000570d4) list_highlight_pane_cp02

0x14ae,	// (0x0004e07f) list_pinb_item_pane_g1_ParamLimits

0x14ae,	// (0x0004e07f) list_pinb_item_pane_g1

0x14bb,	// (0x0004e08c) list_pinb_item_pane_g2_ParamLimits

0x14bb,	// (0x0004e08c) list_pinb_item_pane_g2

0x14c7,	// (0x0004e098) list_pinb_item_pane_g3_ParamLimits

0x14c7,	// (0x0004e098) list_pinb_item_pane_g3

0x14d8,	// (0x0004e0a9) list_pinb_item_pane_g4_ParamLimits

0x14d8,	// (0x0004e0a9) list_pinb_item_pane_g4

0x0003,

0xf12c,	// (0x0005bcfd) list_pinb_item_pane_g_ParamLimits

0xf12c,	// (0x0005bcfd) list_pinb_item_pane_g

0x14e4,	// (0x0004e0b5) list_pinb_item_pane_t1_ParamLimits

0x14e4,	// (0x0004e0b5) list_pinb_item_pane_t1

0x1519,	// (0x0004e0ea) calc_display_pane

0x1541,	// (0x0004e112) calc_paper_pane

0x1564,	// (0x0004e135) grid_calc_pane

0xa503,	// (0x000570d4) bg_list_pane_cp01

0x1592,	// (0x0004e163) clock_g1

0x159a,	// (0x0004e16b) clock_g2

0x0001,

0xf135,	// (0x0005bd06) clock_g

0x15a2,	// (0x0004e173) clock_t1_ParamLimits

0x15a2,	// (0x0004e173) clock_t1

0x15b7,	// (0x0004e188) clock_t2_ParamLimits

0x15b7,	// (0x0004e188) clock_t2

0x15c9,	// (0x0004e19a) clock_t3_ParamLimits

0x15c9,	// (0x0004e19a) clock_t3

0x15db,	// (0x0004e1ac) clock_t4_ParamLimits

0x15db,	// (0x0004e1ac) clock_t4

0x15ed,	// (0x0004e1be) clock_t5_ParamLimits

0x15ed,	// (0x0004e1be) clock_t5

0x1602,	// (0x0004e1d3) clock_t6_ParamLimits

0x1602,	// (0x0004e1d3) clock_t6

0x1614,	// (0x0004e1e5) clock_t7_ParamLimits

0x1614,	// (0x0004e1e5) clock_t7

0x1626,	// (0x0004e1f7) clock_t8_ParamLimits

0x1626,	// (0x0004e1f7) clock_t8

0x163a,	// (0x0004e20b) clock_t9_ParamLimits

0x163a,	// (0x0004e20b) clock_t9

0x0008,

0xf13a,	// (0x0005bd0b) clock_t_ParamLimits

0xf13a,	// (0x0005bd0b) clock_t

0xa7e5,	// (0x000573b6) popup_clock_analogue_window_cp02

0xa7e5,	// (0x000573b6) popup_clock_digital_window_cp01

0xa7ed,	// (0x000573be) listscroll_help_pane

0xa503,	// (0x000570d4) phob_pre_status_pane

0xa7f7,	// (0x000573c8) grid_qdial_pane

0xa75e,	// (0x0005732f) listscroll_mce_pane

0xa75e,	// (0x0005732f) bg_notes_pane

0xa801,	// (0x000573d2) list_notes_pane

0x164e,	// (0x0004e21f) scroll_pane_cp06

0xa80f,	// (0x000573e0) bg_calc_paper_pane

0x9bd1,	// (0x000567a2) list_calc_pane

0xa823,	// (0x000573f4) bg_calc_display_pane

0x1662,	// (0x0004e233) calc_display_pane_t1

0x1674,	// (0x0004e245) calc_display_pane_t2

0x9beb,	// (0x000567bc) calc_display_pane_t3

0x0002,

0xf14d,	// (0x0005bd1e) calc_display_pane_t

0x1686,	// (0x0004e257) cell_calc_pane_ParamLimits

0x1686,	// (0x0004e257) cell_calc_pane

0xa82f,	// (0x00057400) bg_calc_paper_pane_g1

0xa83b,	// (0x0005740c) bg_calc_paper_pane_g2

0xa847,	// (0x00057418) bg_calc_paper_pane_g3

0xa853,	// (0x00057424) bg_calc_paper_pane_g4

0xa85f,	// (0x00057430) bg_calc_paper_pane_g5

0x16bb,	// (0x0004e28c) bg_calc_paper_pane_g6

0x16ca,	// (0x0004e29b) bg_calc_paper_pane_g7

0x16d9,	// (0x0004e2aa) bg_calc_paper_pane_g8

0x0007,

0xf154,	// (0x0005bd25) bg_calc_paper_pane_g

0x16ec,	// (0x0004e2bd) calc_bg_paper_pane_g9

0x16ff,	// (0x0004e2d0) list_calc_item_pane_ParamLimits

0x16ff,	// (0x0004e2d0) list_calc_item_pane

0xa86b,	// (0x0005743c) list_calc_item_pane_g1

0x9bfd,	// (0x000567ce) list_calc_item_pane_t1_ParamLimits

0x9bfd,	// (0x000567ce) list_calc_item_pane_t1

0x1714,	// (0x0004e2e5) list_calc_item_pane_t2_ParamLimits

0x1714,	// (0x0004e2e5) list_calc_item_pane_t2

0x0001,

0xf165,	// (0x0005bd36) list_calc_item_pane_t_ParamLimits

0xf165,	// (0x0005bd36) list_calc_item_pane_t

0xa878,	// (0x00057449) cell_calc_pane_g1

0xa882,	// (0x00057453) grid_highlight_pane_cp02

0x1746,	// (0x0004e317) bg_calc_display_pane_g1

0x174f,	// (0x0004e320) bg_calc_display_pane_g2

0x1759,	// (0x0004e32a) bg_calc_display_pane_g3

0x0002,

0xf16f,	// (0x0005bd40) bg_calc_display_pane_g

0x1762,	// (0x0004e333) cell_qdial_pane_ParamLimits

0x1762,	// (0x0004e333) cell_qdial_pane

0x1776,	// (0x0004e347) cell_qdial_pane_g1_ParamLimits

0x1776,	// (0x0004e347) cell_qdial_pane_g1

0x178c,	// (0x0004e35d) cell_qdial_pane_g2_ParamLimits

0x178c,	// (0x0004e35d) cell_qdial_pane_g2

0xa8a4,	// (0x00057475) cell_qdial_pane_g3_ParamLimits

0xa8a4,	// (0x00057475) cell_qdial_pane_g3

0x0003,

0xf176,	// (0x0005bd47) cell_qdial_pane_g_ParamLimits

0xf176,	// (0x0005bd47) cell_qdial_pane_g

0x17b3,	// (0x0004e384) cell_qdial_pane_t1_ParamLimits

0x17b3,	// (0x0004e384) cell_qdial_pane_t1

0x17cb,	// (0x0004e39c) cell_qdial_pane_t2_ParamLimits

0x17cb,	// (0x0004e39c) cell_qdial_pane_t2

0x17de,	// (0x0004e3af) cell_qdial_pane_t3_ParamLimits

0x17de,	// (0x0004e3af) cell_qdial_pane_t3

0x0002,

0xf17f,	// (0x0005bd50) cell_qdial_pane_t_ParamLimits

0xf17f,	// (0x0005bd50) cell_qdial_pane_t

0xa503,	// (0x000570d4) grid_highlight_pane_cp04

0xa8b0,	// (0x00057481) thumbnail_qdial_pane_ParamLimits

0xa8b0,	// (0x00057481) thumbnail_qdial_pane

0xa90c,	// (0x000574dd) list_help_pane

0xa915,	// (0x000574e6) scroll_pane_cp02

0x17f1,	// (0x0004e3c2) help_list_pane_t1_ParamLimits

0x17f1,	// (0x0004e3c2) help_list_pane_t1

0x9c0f,	// (0x000567e0) bg_notes_pane_g2

0x9c17,	// (0x000567e8) bg_notes_pane_g3

0x9c1f,	// (0x000567f0) notes_bg_pane_g1

0x9c27,	// (0x000567f8) notes_bg_pane_g4

0x9c2f,	// (0x00056800) notes_bg_pane_g5

0x9c37,	// (0x00056808) notes_bg_pane_g6

0x9c3f,	// (0x00056810) notes_bg_pane_g7

0x9c47,	// (0x00056818) notes_bg_pane_g8

0x9c4f,	// (0x00056820) notes_bg_pane_g9

0x0006,

0xf19d,	// (0x0005bd6e) notes_bg_pane_g

0x180e,	// (0x0004e3df) list_notes_text_pane_ParamLimits

0x180e,	// (0x0004e3df) list_notes_text_pane

0xa91e,	// (0x000574ef) list_notes_text_pane_g1

0x0194,	// (0x0004cd65) list_notes_text_pane_t1

0x1823,	// (0x0004e3f4) listscroll_cale_week_pane

0x184f,	// (0x0004e420) bg_cale_heading_pane

0xa941,	// (0x00057512) bg_cale_pane_cp01

0x1867,	// (0x0004e438) cale_week_corner_pane

0x1886,	// (0x0004e457) cale_week_day_heading_pane

0x18a3,	// (0x0004e474) cale_week_scroll_pane_g1

0x18b6,	// (0x0004e487) cale_week_scroll_pane_g2

0x18ce,	// (0x0004e49f) cale_week_scroll_pane_g3

0x18e6,	// (0x0004e4b7) cale_week_scroll_pane_g4

0x18fe,	// (0x0004e4cf) cale_week_scroll_pane_g5

0x191e,	// (0x0004e4ef) cale_week_scroll_pane_g6

0x193e,	// (0x0004e50f) cale_week_scroll_pane_g7

0x195e,	// (0x0004e52f) cale_week_scroll_pane_g8

0x1982,	// (0x0004e553) cale_week_scroll_pane_g9

0x199a,	// (0x0004e56b) cale_week_scroll_pane_g10

0x19b2,	// (0x0004e583) cale_week_scroll_pane_g11

0x19ca,	// (0x0004e59b) cale_week_scroll_pane_g12

0x19e2,	// (0x0004e5b3) cale_week_scroll_pane_g13

0x19e2,	// (0x0004e5b3) cale_week_scroll_pane_g14

0x19e2,	// (0x0004e5b3) cale_week_scroll_pane_g15

0x000f,

0xf1ac,	// (0x0005bd7d) cale_week_scroll_pane_g

0x1a1e,	// (0x0004e5ef) cale_week_time_pane

0x1a42,	// (0x0004e613) grid_cale_week_pane

0xa971,	// (0x00057542) scroll_pane_cp08

0x1a68,	// (0x0004e639) cell_cale_week_pane_ParamLimits

0x1a68,	// (0x0004e639) cell_cale_week_pane

0x1af6,	// (0x0004e6c7) cale_week_day_heading_pane_t1

0x1b3b,	// (0x0004e70c) cale_week_day_heading_pane_t2

0x1b85,	// (0x0004e756) cale_week_day_heading_pane_t3

0x1bcf,	// (0x0004e7a0) cale_week_day_heading_pane_t4

0x1c19,	// (0x0004e7ea) cale_week_day_heading_pane_t5

0x1c6b,	// (0x0004e83c) cale_week_day_heading_pane_t6

0x1cbd,	// (0x0004e88e) cale_week_day_heading_pane_t7

0x0006,

0xf1cd,	// (0x0005bd9e) cale_week_day_heading_pane_t

0xa98e,	// (0x0005755f) bg_cale_side_pane

0x1d02,	// (0x0004e8d3) cale_week_time_pane_t1

0x1d1c,	// (0x0004e8ed) cale_week_time_pane_t2

0x1d36,	// (0x0004e907) cale_week_time_pane_t3

0x1d50,	// (0x0004e921) cale_week_time_pane_t4

0x1d6a,	// (0x0004e93b) cale_week_time_pane_t5

0x1d84,	// (0x0004e955) cale_week_time_pane_t6

0x1d9e,	// (0x0004e96f) cale_week_time_pane_t7

0x1db8,	// (0x0004e989) cale_week_time_pane_t8

0x0007,

0xf1dc,	// (0x0005bdad) cale_week_time_pane_t

0x1dd8,	// (0x0004e9a9) cell_cale_week_pane_g2

0x1df7,	// (0x0004e9c8) cell_cale_week_pane_g3_ParamLimits

0x1df7,	// (0x0004e9c8) cell_cale_week_pane_g3

0xa99c,	// (0x0005756d) grid_highlight_pane_cp07

0xa9a4,	// (0x00057575) listscroll_gms_pane

0xa9ae,	// (0x0005757f) grid_gms_pane

0xa9b7,	// (0x00057588) listscroll_gms_pane_g1

0xa9bf,	// (0x00057590) listscroll_gms_pane_g2

0x0001,

0xf1ed,	// (0x0005bdbe) listscroll_gms_pane_g

0x1e0f,	// (0x0004e9e0) scroll_pane_cp010

0x1e1a,	// (0x0004e9eb) cell_gms_pane_ParamLimits

0x1e1a,	// (0x0004e9eb) cell_gms_pane

0x1e2d,	// (0x0004e9fe) cell_gms_pane_g1

0xa9c7,	// (0x00057598) cell_gms_pane_g2

0xa9cf,	// (0x000575a0) cell_gms_pane_g3

0xa9d8,	// (0x000575a9) cell_gms_pane_g4

0x0003,

0xf1f2,	// (0x0005bdc3) cell_gms_pane_g

0xa9e1,	// (0x000575b2) grid_highlight_pane_cp09

0x40ef,	// (0x00050cc0) phob_pre_status_pane_g1

0x40f7,	// (0x00050cc8) phob_pre_status_pane_g2

0x40ff,	// (0x00050cd0) phob_pre_status_pane_g3

0x4107,	// (0x00050cd8) phob_pre_status_pane_g4

0x0004,

0xf5e1,	// (0x0005c1b2) phob_pre_status_pane_g

0x4117,	// (0x00050ce8) phob_pre_status_pane_t1

0x4125,	// (0x00050cf6) phob_pre_status_pane_t2

0x4135,	// (0x00050d06) phob_pre_status_pane_t3

0x0002,

0xf5ec,	// (0x0005c1bd) phob_pre_status_pane_t

0xa503,	// (0x000570d4) bg_list_pane_cp05

0x1e3d,	// (0x0004ea0e) grid_vorec_pane

0x1e45,	// (0x0004ea16) vorec_t1

0x1e53,	// (0x0004ea24) vorec_t2

0x1e61,	// (0x0004ea32) vorec_t3

0x1e6f,	// (0x0004ea40) vorec_t4

0x9c57,	// (0x00056828) vorec_t5

0x1e7d,	// (0x0004ea4e) vorec_t6

0x0006,

0xf1fb,	// (0x0005bdcc) vorec_t

0x1e99,	// (0x0004ea6a) wait_bar_pane_cp01

0x1ea1,	// (0x0004ea72) cell_vorec_pane_ParamLimits

0x1ea1,	// (0x0004ea72) cell_vorec_pane

0x9c65,	// (0x00056836) cell_vorec_pane_g1

0xa503,	// (0x000570d4) grid_highlight_pane_cp05

0x1ec9,	// (0x0004ea9a) cams_zoom_pane

0x1ed8,	// (0x0004eaa9) image_vga_pane

0x1ef2,	// (0x0004eac3) main_camera_pane_g1

0x1f04,	// (0x0004ead5) main_camera_pane_g2

0x1f14,	// (0x0004eae5) main_camera_pane_g3

0x1f24,	// (0x0004eaf5) main_camera_pane_g4

0x1f34,	// (0x0004eb05) main_camera_pane_g5

0x1f44,	// (0x0004eb15) main_camera_pane_g6

0x1f56,	// (0x0004eb27) main_camera_pane_g7

0x0007,

0xf20a,	// (0x0005bddb) main_camera_pane_g

0x1f66,	// (0x0004eb37) main_camera_pane_t1

0x1f7c,	// (0x0004eb4d) main_camera_pane_t2

0x0001,

0xf21b,	// (0x0005bdec) main_camera_pane_t

0x1fb6,	// (0x0004eb87) cams_zoom_pane_cp_ParamLimits

0x1fb6,	// (0x0004eb87) cams_zoom_pane_cp

0x1fde,	// (0x0004ebaf) image_cif_pane_ParamLimits

0x1fde,	// (0x0004ebaf) image_cif_pane

0x2014,	// (0x0004ebe5) image_subqcif_pane

0x201c,	// (0x0004ebed) main_video_pane_g1_ParamLimits

0x201c,	// (0x0004ebed) main_video_pane_g1

0x2040,	// (0x0004ec11) main_video_pane_g2_ParamLimits

0x2040,	// (0x0004ec11) main_video_pane_g2

0x2074,	// (0x0004ec45) main_video_pane_g3_ParamLimits

0x2074,	// (0x0004ec45) main_video_pane_g3

0x20a2,	// (0x0004ec73) main_video_pane_g4_ParamLimits

0x20a2,	// (0x0004ec73) main_video_pane_g4

0x20d0,	// (0x0004eca1) main_video_pane_g5_ParamLimits

0x20d0,	// (0x0004eca1) main_video_pane_g5

0xa9f5,	// (0x000575c6) main_video_pane_g6_ParamLimits

0xa9f5,	// (0x000575c6) main_video_pane_g6

0x0006,

0xf220,	// (0x0005bdf1) main_video_pane_g_ParamLimits

0xf220,	// (0x0005bdf1) main_video_pane_g

0x20f9,	// (0x0004ecca) main_video_pane_t1_ParamLimits

0x20f9,	// (0x0004ecca) main_video_pane_t1

0xaa0f,	// (0x000575e0) cams_zoom_pane_g1

0xaa18,	// (0x000575e9) cams_zoom_pane_g2

0xaa21,	// (0x000575f2) cams_zoom_pane_g3

0xaa2a,	// (0x000575fb) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x0005be00) cams_zoom_pane_g

0x2156,	// (0x0004ed27) grid_cams_pane

0x2170,	// (0x0004ed41) linegrid_cams_pane

0x2184,	// (0x0004ed55) cell_cams_pane_ParamLimits

0x2184,	// (0x0004ed55) cell_cams_pane

0xaa33,	// (0x00057604) cams_burst_image_pane

0xaa3b,	// (0x0005760c) cell_cams_pane_g1

0xa503,	// (0x000570d4) grid_highlight_pane_cp03

0xa878,	// (0x00057449) mp_bg_pane_g1

0xa503,	// (0x000570d4) bg_list_pane_cp03

0xc774,	// (0x00059345) bg_mp_pane

0xc77c,	// (0x0005934d) grid_mp_pane

0xc784,	// (0x00059355) media_player_g1

0xc78c,	// (0x0005935d) media_player_t1

0xc79a,	// (0x0005936b) media_player_t2

0xc7a8,	// (0x00059379) media_player_t3

0xc7b6,	// (0x00059387) media_player_t4

0xc7c4,	// (0x00059395) media_player_t5

0xc7d2,	// (0x000593a3) media_player_t6

0xc7e0,	// (0x000593b1) media_player_t7

0x0006,

0xf5cb,	// (0x0005c19c) media_player_t

0xc7ee,	// (0x000593bf) wait_bar_pane_cp02

0xf5b0,	// (0x0005c181) main_usb_pane_t

0x40e6,	// (0x00050cb7) cell_mp_pane

0xa878,	// (0x00057449) cell_mp_pane_g1

0xa503,	// (0x000570d4) grid_highlight_pane_cp06

0xaa43,	// (0x00057614) grid_skin_colour_pane

0xaa4b,	// (0x0005761c) list_highlight_pane_cp03

0x21a4,	// (0x0004ed75) skin_g1

0xaa53,	// (0x00057624) skin_t1

0xaa62,	// (0x00057633) skin_t2

0x0001,

0xf264,	// (0x0005be35) skin_t

0x21ac,	// (0x0004ed7d) cell_skin_colour_pane_ParamLimits

0x21ac,	// (0x0004ed7d) cell_skin_colour_pane

0xaa70,	// (0x00057641) cell_skin_colour_pane_g1

0x2225,	// (0x0004edf6) call_video_g1_ParamLimits

0x2225,	// (0x0004edf6) call_video_g1

0x2241,	// (0x0004ee12) call_video_g2_ParamLimits

0x2241,	// (0x0004ee12) call_video_g2

0x0001,

0xf269,	// (0x0005be3a) call_video_g_ParamLimits

0xf269,	// (0x0005be3a) call_video_g

0x2293,	// (0x0004ee64) call_video_uplink_pane_cp1_ParamLimits

0x2293,	// (0x0004ee64) call_video_uplink_pane_cp1

0xaa82,	// (0x00057653) call_video_uplink_pane_cp2

0x2332,	// (0x0004ef03) video_down_crop_pane_ParamLimits

0x2332,	// (0x0004ef03) video_down_crop_pane

0x2429,	// (0x0004effa) video_down_pane_ParamLimits

0x2429,	// (0x0004effa) video_down_pane

0xaa8a,	// (0x0005765b) video_down_subqcif_pane_ParamLimits

0xaa8a,	// (0x0005765b) video_down_subqcif_pane

0xaaa2,	// (0x00057673) video_down_subqcif_pane_cp_ParamLimits

0xaaa2,	// (0x00057673) video_down_subqcif_pane_cp

0xaac8,	// (0x00057699) im_reading_pane_ParamLimits

0xaac8,	// (0x00057699) im_reading_pane

0x2537,	// (0x0004f108) im_writing_pane_ParamLimits

0x2537,	// (0x0004f108) im_writing_pane

0x254d,	// (0x0004f11e) im_reading_pane_t1

0xaae2,	// (0x000576b3) list_im_pane

0xaaf3,	// (0x000576c4) scroll_pane_cp07

0x2586,	// (0x0004f157) im_writing_pane_t1_ParamLimits

0x2586,	// (0x0004f157) im_writing_pane_t1

0xab0c,	// (0x000576dd) im_writing_pane_t2_ParamLimits

0xab0c,	// (0x000576dd) im_writing_pane_t2

0x0001,

0xf273,	// (0x0005be44) im_writing_pane_t_ParamLimits

0xf273,	// (0x0005be44) im_writing_pane_t

0xa503,	// (0x000570d4) input_focus_pane_cp04

0xa503,	// (0x000570d4) input_focus_pane_cp05

0x259b,	// (0x0004f16c) list_im_single_pane_ParamLimits

0x259b,	// (0x0004f16c) list_im_single_pane

0x25af,	// (0x0004f180) list_single_im_pane_t1

0x40a6,	// (0x00050c77) blid_accuracy_pane

0x40ae,	// (0x00050c7f) blid_compass_pane

0x40b8,	// (0x00050c89) main_location_t1

0x40c8,	// (0x00050c99) main_location_t2

0x40d8,	// (0x00050ca9) main_location_t3

0x0002,

0xf5da,	// (0x0005c1ab) main_location_t

0xa503,	// (0x000570d4) aid_levels_location

0xa878,	// (0x00057449) blid_accuracy_pane_g1

0xa878,	// (0x00057449) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x0005bea6) blid_accuracy_pane_g

0xab54,	// (0x00057725) wml_content_pane

0xab92,	// (0x00057763) wml_button_pane_ParamLimits

0xab92,	// (0x00057763) wml_button_pane

0x25be,	// (0x0004f18f) wml_list_single_large_pane_ParamLimits

0x25be,	// (0x0004f18f) wml_list_single_large_pane

0x25d3,	// (0x0004f1a4) wml_list_single_medium_pane_ParamLimits

0x25d3,	// (0x0004f1a4) wml_list_single_medium_pane

0x25e9,	// (0x0004f1ba) wml_list_single_small_pane_ParamLimits

0x25e9,	// (0x0004f1ba) wml_list_single_small_pane

0xaba6,	// (0x00057777) wml_selection_box_pane_ParamLimits

0xaba6,	// (0x00057777) wml_selection_box_pane

0xabb9,	// (0x0005778a) wml_list_single_pane_t1

0xabc8,	// (0x00057799) wml_list_single_medium_pane_t1

0xabd7,	// (0x000577a8) wml_list_single_large_pane_t1

0xabe6,	// (0x000577b7) input_focus_pane_cp02_ParamLimits

0xabe6,	// (0x000577b7) input_focus_pane_cp02

0xabf9,	// (0x000577ca) wml_selection_box_pane_g1

0xac02,	// (0x000577d3) wml_selection_box_pane_t1_ParamLimits

0xac02,	// (0x000577d3) wml_selection_box_pane_t1

0xa75e,	// (0x0005732f) bg_wml_button_pane_ParamLimits

0xa75e,	// (0x0005732f) bg_wml_button_pane

0xac1a,	// (0x000577eb) wml_button_pane_g1

0xac22,	// (0x000577f3) wml_button_pane_t1

0xac1a,	// (0x000577eb) wml_button_bg_pane_g1

0xac32,	// (0x00057803) wml_button_bg_pane_g2

0xac3a,	// (0x0005780b) wml_button_bg_pane_g3

0xac42,	// (0x00057813) wml_button_bg_pane_g4

0xac4a,	// (0x0005781b) wml_button_bg_pane_g5

0xac52,	// (0x00057823) wml_button_bg_pane_g6

0xac5a,	// (0x0005782b) wml_button_bg_pane_g7

0xac62,	// (0x00057833) wml_button_bg_pane_g8

0xac6a,	// (0x0005783b) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x0005be49) wml_button_bg_pane_g

0x2601,	// (0x0004f1d2) bg_list_pane_cp02

0xac72,	// (0x00057843) mce_header_pane_ParamLimits

0xac72,	// (0x00057843) mce_header_pane

0xac88,	// (0x00057859) mce_icon_pane

0xac88,	// (0x00057859) mce_image_pane

0xac91,	// (0x00057862) mce_text_pane_ParamLimits

0xac91,	// (0x00057862) mce_text_pane

0x2609,	// (0x0004f1da) scroll_pane_cp03

0xab8a,	// (0x0005775b) scroll_pane_cp04

0xaca4,	// (0x00057875) scroll_pane_cp05_ParamLimits

0xaca4,	// (0x00057875) scroll_pane_cp05

0x2613,	// (0x0004f1e4) mce_header_field_pane_ParamLimits

0x2613,	// (0x0004f1e4) mce_header_field_pane

0x262a,	// (0x0004f1fb) mce_header_field_pane_2_ParamLimits

0x262a,	// (0x0004f1fb) mce_header_field_pane_2

0x2640,	// (0x0004f211) mce_header_field_pane_3

0x2648,	// (0x0004f219) list_single_mce_message_pane_ParamLimits

0x2648,	// (0x0004f219) list_single_mce_message_pane

0x265d,	// (0x0004f22e) list_single_mce_smart_pane_ParamLimits

0x265d,	// (0x0004f22e) list_single_mce_smart_pane

0xacb0,	// (0x00057881) input_focus_pane_cp03

0xacb9,	// (0x0005788a) list_header_data_pane

0x267d,	// (0x0004f24e) mce_header_field_pane_t1

0x268d,	// (0x0004f25e) list_single_mce_header_pane_ParamLimits

0x268d,	// (0x0004f25e) list_single_mce_header_pane

0xacc1,	// (0x00057892) list_single_mce_header_pane_t1

0xacd0,	// (0x000578a1) list_single_mce_message_pane_g1

0xacd8,	// (0x000578a9) list_single_mce_message_pane_t1

0x26c7,	// (0x0004f298) bg_cale_heading_pane_cp01_ParamLimits

0x26c7,	// (0x0004f298) bg_cale_heading_pane_cp01

0xace6,	// (0x000578b7) bg_cale_pane_cp02_ParamLimits

0xace6,	// (0x000578b7) bg_cale_pane_cp02

0x26f6,	// (0x0004f2c7) cale_month_corner_pane

0x2715,	// (0x0004f2e6) cale_month_day_heading_pane_ParamLimits

0x2715,	// (0x0004f2e6) cale_month_day_heading_pane

0x275c,	// (0x0004f32d) cale_month_pane_g1_ParamLimits

0x275c,	// (0x0004f32d) cale_month_pane_g1

0x2780,	// (0x0004f351) cale_month_pane_g2_ParamLimits

0x2780,	// (0x0004f351) cale_month_pane_g2

0x27b0,	// (0x0004f381) cale_month_pane_g3_ParamLimits

0x27b0,	// (0x0004f381) cale_month_pane_g3

0x27ec,	// (0x0004f3bd) cale_month_pane_g4_ParamLimits

0x27ec,	// (0x0004f3bd) cale_month_pane_g4

0x2828,	// (0x0004f3f9) cale_month_pane_g5_ParamLimits

0x2828,	// (0x0004f3f9) cale_month_pane_g5

0x2870,	// (0x0004f441) cale_month_pane_g6_ParamLimits

0x2870,	// (0x0004f441) cale_month_pane_g6

0x28bc,	// (0x0004f48d) cale_month_pane_g7_ParamLimits

0x28bc,	// (0x0004f48d) cale_month_pane_g7

0x2910,	// (0x0004f4e1) cale_month_pane_g8_ParamLimits

0x2910,	// (0x0004f4e1) cale_month_pane_g8

0x2964,	// (0x0004f535) cale_month_pane_g9_ParamLimits

0x2964,	// (0x0004f535) cale_month_pane_g9

0x29b6,	// (0x0004f587) cale_month_pane_g10_ParamLimits

0x29b6,	// (0x0004f587) cale_month_pane_g10

0x2a08,	// (0x0004f5d9) cale_month_pane_g11_ParamLimits

0x2a08,	// (0x0004f5d9) cale_month_pane_g11

0x2a5a,	// (0x0004f62b) cale_month_pane_g12_ParamLimits

0x2a5a,	// (0x0004f62b) cale_month_pane_g12

0x2aac,	// (0x0004f67d) cale_month_pane_g13_ParamLimits

0x2aac,	// (0x0004f67d) cale_month_pane_g13

0x000c,

0xf28b,	// (0x0005be5c) cale_month_pane_g_ParamLimits

0xf28b,	// (0x0005be5c) cale_month_pane_g

0x2afe,	// (0x0004f6cf) cale_month_week_pane

0x2b22,	// (0x0004f6f3) grid_cale_month_pane_ParamLimits

0x2b22,	// (0x0004f6f3) grid_cale_month_pane

0x2b60,	// (0x0004f731) cale_month_day_heading_pane_t1

0x2be6,	// (0x0004f7b7) cale_month_day_heading_pane_t2

0x2c77,	// (0x0004f848) cale_month_day_heading_pane_t3

0x2d08,	// (0x0004f8d9) cale_month_day_heading_pane_t4

0x2d9d,	// (0x0004f96e) cale_month_day_heading_pane_t5

0x2e3e,	// (0x0004fa0f) cale_month_day_heading_pane_t6

0x2edf,	// (0x0004fab0) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x0005be77) cale_month_day_heading_pane_t

0xa98e,	// (0x0005755f) bg_cale_side_pane_cp01

0x2f88,	// (0x0004fb59) cale_month_week_pane_t1

0x2fa1,	// (0x0004fb72) cale_month_week_pane_t2

0x2fba,	// (0x0004fb8b) cale_month_week_pane_t3

0x2fd3,	// (0x0004fba4) cale_month_week_pane_t4

0x2fec,	// (0x0004fbbd) cale_month_week_pane_t5

0x3005,	// (0x0004fbd6) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x0005be86) cale_month_week_pane_t

0x301e,	// (0x0004fbef) cell_cale_month_pane_ParamLimits

0x301e,	// (0x0004fbef) cell_cale_month_pane

0x9c6f,	// (0x00056840) cell_cale_month_pane_g1

0x3148,	// (0x0004fd19) cell_cale_month_pane_t1_ParamLimits

0x3148,	// (0x0004fd19) cell_cale_month_pane_t1

0xa99c,	// (0x0005756d) grid_highlight_pane_cp08

0xa878,	// (0x00057449) main_smil_g1

0x3168,	// (0x0004fd39) smil_status_pane

0xad25,	// (0x000578f6) smil_text_pane

0xc694,	// (0x00059265) bg_popup_call3_rect_pane_g8

0xc69c,	// (0x0005926d) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x0005c13f) bg_popup_call3_rect_pane_g

0xc8e3,	// (0x000594b4) smil_status_volume_pane_g1

0xad2f,	// (0x00057900) smil_status_pane_t1

0x9dc5,	// (0x00056996) volume_smil_pane

0xad46,	// (0x00057917) list_smil_text_pane

0x317b,	// (0x0004fd4c) scroll_pane_cp011

0x3186,	// (0x0004fd57) smil_text_list_pane_t1_ParamLimits

0x3186,	// (0x0004fd57) smil_text_list_pane_t1

0x9c7b,	// (0x0005684c) aid_volume_smil_ParamLimits

0x9c7b,	// (0x0005684c) aid_volume_smil

0xa878,	// (0x00057449) smil_volume_pane_g1

0xa878,	// (0x00057449) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x0005bea6) smil_volume_pane_g

0x1823,	// (0x0004e3f4) listscroll_cale_day_pane

0xad50,	// (0x00057921) bg_cale_pane

0xad68,	// (0x00057939) list_cale_pane

0xad8b,	// (0x0005795c) scroll_pane_cp09

0xad9c,	// (0x0005796d) cale_bg_pane_g1

0xada4,	// (0x00057975) cale_bg_pane_g2

0xadac,	// (0x0005797d) cale_bg_pane_g3

0xadb4,	// (0x00057985) cale_bg_pane_g4

0xadbc,	// (0x0005798d) cale_bg_pane_g5

0xadc4,	// (0x00057995) cale_bg_pane_g6

0xadcc,	// (0x0005799d) cale_bg_pane_g7

0xadd4,	// (0x000579a5) cale_bg_pane_g8

0xaddc,	// (0x000579ad) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x0005beab) cale_bg_pane_g

0x31ca,	// (0x0004fd9b) list_cale_time_pane_ParamLimits

0x31ca,	// (0x0004fd9b) list_cale_time_pane

0xade4,	// (0x000579b5) list_cale_time_pane_g1_ParamLimits

0xade4,	// (0x000579b5) list_cale_time_pane_g1

0xadf0,	// (0x000579c1) list_cale_time_pane_g2_ParamLimits

0xadf0,	// (0x000579c1) list_cale_time_pane_g2

0x31df,	// (0x0004fdb0) list_cale_time_pane_g3_ParamLimits

0x31df,	// (0x0004fdb0) list_cale_time_pane_g3

0x31ed,	// (0x0004fdbe) list_cale_time_pane_g4_ParamLimits

0x31ed,	// (0x0004fdbe) list_cale_time_pane_g4

0x31fb,	// (0x0004fdcc) list_cale_time_pane_g5_ParamLimits

0x31fb,	// (0x0004fdcc) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x0005bebe) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x0005bebe) list_cale_time_pane_g

0xae0a,	// (0x000579db) list_cale_time_pane_t1_ParamLimits

0xae0a,	// (0x000579db) list_cale_time_pane_t1

0xae32,	// (0x00057a03) list_cale_time_pane_t2_ParamLimits

0xae32,	// (0x00057a03) list_cale_time_pane_t2

0x3481,	// (0x00050052) aid_blid_cardinal_pane

0x34bf,	// (0x00050090) compass_pane_t4

0xae5a,	// (0x00057a2b) list_cale_time_pane_t4_ParamLimits

0xae5a,	// (0x00057a2b) list_cale_time_pane_t4

0x34cd,	// (0x0005009e) compass_pane_t5

0x34db,	// (0x000500ac) compass_pane_t6

0x34e9,	// (0x000500ba) compass_pane_t7

0xb325,	// (0x00057ef6) navi_pane_cc_t1

0xb50a,	// (0x000580db) aid_phob_thumbnail_center_pane

0x3abe,	// (0x0005068f) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x0005becb) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x0005becb) list_cale_time_pane_t

0x984f,	// (0x00056420) bg_popup_window_pane_cp02_ParamLimits

0x984f,	// (0x00056420) bg_popup_window_pane_cp02

0xae82,	// (0x00057a53) heading_pane_cp01_ParamLimits

0xae82,	// (0x00057a53) heading_pane_cp01

0xae8e,	// (0x00057a5f) loc_req_pane_ParamLimits

0xae8e,	// (0x00057a5f) loc_req_pane

0xae9e,	// (0x00057a6f) loc_type_pane_ParamLimits

0xae9e,	// (0x00057a6f) loc_type_pane

0xaeb0,	// (0x00057a81) loc_type_pane_t1_ParamLimits

0xaeb0,	// (0x00057a81) loc_type_pane_t1

0xaec2,	// (0x00057a93) loc_type_pane_t2_ParamLimits

0xaec2,	// (0x00057a93) loc_type_pane_t2

0xaed4,	// (0x00057aa5) loc_type_pane_t3_ParamLimits

0xaed4,	// (0x00057aa5) loc_type_pane_t3

0x0002,

0xf301,	// (0x0005bed2) loc_type_pane_t_ParamLimits

0xf301,	// (0x0005bed2) loc_type_pane_t

0xaee6,	// (0x00057ab7) list_loc_req_pane

0xaef0,	// (0x00057ac1) scroll_pane_cp012

0x3209,	// (0x0004fdda) list_single_loc_request_popup_menu_pane_ParamLimits

0x3209,	// (0x0004fdda) list_single_loc_request_popup_menu_pane

0xaefb,	// (0x00057acc) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xaefb,	// (0x00057acc) list_single_loc_request_popup_menu_pane_g1

0xaf07,	// (0x00057ad8) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xaf07,	// (0x00057ad8) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x0005bed9) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x0005bed9) list_single_loc_request_popup_menu_pane_g

0xaf13,	// (0x00057ae4) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xaf13,	// (0x00057ae4) list_single_loc_request_popup_menu_pane_t1

0xa75e,	// (0x0005732f) bg_popup_window_pane_cp03_ParamLimits

0xa75e,	// (0x0005732f) bg_popup_window_pane_cp03

0xaf29,	// (0x00057afa) heading_loc_req_pane_ParamLimits

0xaf29,	// (0x00057afa) heading_loc_req_pane

0x3216,	// (0x0004fde7) popup_dyc_status_message_window_g1_ParamLimits

0x3216,	// (0x0004fde7) popup_dyc_status_message_window_g1

0x322a,	// (0x0004fdfb) popup_dyc_status_message_window_t1_ParamLimits

0x322a,	// (0x0004fdfb) popup_dyc_status_message_window_t1

0x323f,	// (0x0004fe10) popup_dyc_status_message_window_t2_ParamLimits

0x323f,	// (0x0004fe10) popup_dyc_status_message_window_t2

0x3254,	// (0x0004fe25) popup_dyc_status_message_window_t3_ParamLimits

0x3254,	// (0x0004fe25) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x0005bede) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x0005bede) popup_dyc_status_message_window_t

0xa503,	// (0x000570d4) bg_heading_pane_cp01

0xaf35,	// (0x00057b06) heading_loc_req_pane_g1

0xaf3d,	// (0x00057b0e) heading_loc_req_pane_g2

0xaf45,	// (0x00057b16) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x0005bee5) heading_loc_req_pane_g

0xaf4d,	// (0x00057b1e) heading_loc_req_pane_t1

0xaf5c,	// (0x00057b2d) bg_popup_sub_pane_cp01_ParamLimits

0xaf5c,	// (0x00057b2d) bg_popup_sub_pane_cp01

0xaf6a,	// (0x00057b3b) popup_cale_events_window_g1_ParamLimits

0xaf6a,	// (0x00057b3b) popup_cale_events_window_g1

0xaf8a,	// (0x00057b5b) popup_cale_events_window_g2_ParamLimits

0xaf8a,	// (0x00057b5b) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x0005bf19) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x0005bf19) popup_cale_events_window_g

0xafaa,	// (0x00057b7b) popup_cale_events_window_t1_ParamLimits

0xafaa,	// (0x00057b7b) popup_cale_events_window_t1

0xafbc,	// (0x00057b8d) popup_cale_events_window_t2_ParamLimits

0xafbc,	// (0x00057b8d) popup_cale_events_window_t2

0xaffa,	// (0x00057bcb) popup_cale_events_window_t3_ParamLimits

0xaffa,	// (0x00057bcb) popup_cale_events_window_t3

0xb034,	// (0x00057c05) popup_cale_events_window_t4_ParamLimits

0xb034,	// (0x00057c05) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x0005bf1e) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x0005bf1e) popup_cale_events_window_t

0x327c,	// (0x0004fe4d) call_type_pane

0x328c,	// (0x0004fe5d) popup_call_status_window_g1

0x32a0,	// (0x0004fe71) popup_call_status_window_g2

0x32b4,	// (0x0004fe85) popup_call_status_window_g3

0x0002,

0xf356,	// (0x0005bf27) popup_call_status_window_g

0xb06a,	// (0x00057c3b) call_type_pane_g1

0xb073,	// (0x00057c44) call_type_pane_g2

0x0001,

0xf35d,	// (0x0005bf2e) call_type_pane_g

0xa503,	// (0x000570d4) bg_popup_sub_pane_cp02

0xb07c,	// (0x00057c4d) listscroll_popup_wml_pane

0xb084,	// (0x00057c55) list_wml_pane

0xb08e,	// (0x00057c5f) scroll_pane_cp013

0xb099,	// (0x00057c6a) list_single_graphic_popup_wml_pane_ParamLimits

0xb099,	// (0x00057c6a) list_single_graphic_popup_wml_pane

0xa878,	// (0x00057449) list_single_graphic_popup_wml_pane_g1

0xb0ad,	// (0x00057c7e) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x0005bf33) list_single_graphic_popup_wml_pane_g

0xb0b5,	// (0x00057c86) list_single_graphic_popup_wml_pane_t1

0xb0cb,	// (0x00057c9c) aid_call_pane

0xa756,	// (0x00057327) popup_clock_analogue_window_g1

0xa756,	// (0x00057327) popup_clock_analogue_window_g2

0x9c9d,	// (0x0005686e) popup_clock_analogue_window_g3

0x9c9d,	// (0x0005686e) popup_clock_analogue_window_g4

0xa878,	// (0x00057449) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x0005bf38) popup_clock_analogue_window_g

0x9ca5,	// (0x00056876) popup_clock_analogue_window_t1

0x9cb3,	// (0x00056884) clock_digital_number_pane_ParamLimits

0x9cb3,	// (0x00056884) clock_digital_number_pane

0x9cbf,	// (0x00056890) clock_digital_number_pane_cp02_ParamLimits

0x9cbf,	// (0x00056890) clock_digital_number_pane_cp02

0x9ccb,	// (0x0005689c) clock_digital_number_pane_cp03_ParamLimits

0x9ccb,	// (0x0005689c) clock_digital_number_pane_cp03

0x9cd7,	// (0x000568a8) clock_digital_number_pane_cp04_ParamLimits

0x9cd7,	// (0x000568a8) clock_digital_number_pane_cp04

0x9ce7,	// (0x000568b8) clock_digital_separator_pane_ParamLimits

0x9ce7,	// (0x000568b8) clock_digital_separator_pane

0x9cf3,	// (0x000568c4) popup_clock_digital_window_t1

0xa878,	// (0x00057449) clock_digital_number_pane_g1

0xa878,	// (0x00057449) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x0005bea6) clock_digital_number_pane_g

0xa878,	// (0x00057449) clock_digital_separator_pane_g1

0xa878,	// (0x00057449) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x0005bea6) clock_digital_separator_pane_g

0xa503,	// (0x000570d4) bg_popup_window_pane_cp04

0xb0d3,	// (0x00057ca4) heading_pane_cp03

0xb0db,	// (0x00057cac) listscroll_popup_gms_pane

0xb0e3,	// (0x00057cb4) grid_large_graphic_popup_pane

0xb0ed,	// (0x00057cbe) listscroll_popup_gms_pane_g1

0xb0f5,	// (0x00057cc6) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x0005bf43) listscroll_popup_gms_pane_g

0xab8a,	// (0x0005775b) scroll_pane_cp014

0x32c3,	// (0x0004fe94) cell_large_graphic_popup_pane_ParamLimits

0x32c3,	// (0x0004fe94) cell_large_graphic_popup_pane

0x32db,	// (0x0004feac) cell_large_graphic_popup_pane_g1_ParamLimits

0x32db,	// (0x0004feac) cell_large_graphic_popup_pane_g1

0xb0fd,	// (0x00057cce) cell_large_graphic_popup_pane_g2_ParamLimits

0xb0fd,	// (0x00057cce) cell_large_graphic_popup_pane_g2

0xb109,	// (0x00057cda) cell_large_graphic_popup_pane_g3_ParamLimits

0xb109,	// (0x00057cda) cell_large_graphic_popup_pane_g3

0xb116,	// (0x00057ce7) cell_large_graphic_popup_pane_g4_ParamLimits

0xb116,	// (0x00057ce7) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x0005bf48) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x0005bf48) cell_large_graphic_popup_pane_g

0xb126,	// (0x00057cf7) grid_highlight_pane_cp010

0xa878,	// (0x00057449) bg_popup_call_pane_g1

0xb130,	// (0x00057d01) list_single_graphic_popup_conf_pane_ParamLimits

0xb130,	// (0x00057d01) list_single_graphic_popup_conf_pane

0xb143,	// (0x00057d14) list_highlight_pane_cp01

0xb14c,	// (0x00057d1d) list_single_graphic_popup_conf_pane_g1

0xb154,	// (0x00057d25) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x0005bf51) list_single_graphic_popup_conf_pane_g

0xb15c,	// (0x00057d2d) list_single_graphic_popup_conf_pane_t1

0xb16a,	// (0x00057d3b) linegrid_cams_pane_g1

0x32e7,	// (0x0004feb8) linegrid_cams_pane_g2

0xa9cf,	// (0x000575a0) linegrid_cams_pane_g3

0xb173,	// (0x00057d44) linegrid_cams_pane_g4

0x32f0,	// (0x0004fec1) linegrid_cams_pane_g5

0x32f9,	// (0x0004feca) linegrid_cams_pane_g6

0xa9d8,	// (0x000575a9) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x0005bf56) linegrid_cams_pane_g

0xb17c,	// (0x00057d4d) popup_clock_analogue_window

0xb17c,	// (0x00057d4d) popup_clock_digital_window

0xa503,	// (0x000570d4) popup_phob_thumbnail_window

0xa878,	// (0x00057449) call_video_uplink_pane_g1

0xb185,	// (0x00057d56) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x0005bf65) call_video_uplink_pane_g

0xb18d,	// (0x00057d5e) video_uplink_pane

0xb195,	// (0x00057d66) mce_image_pane_g1

0x3304,	// (0x0004fed5) mce_image_pane_g2

0x330e,	// (0x0004fedf) mce_image_pane_g3

0x3316,	// (0x0004fee7) mce_image_pane_g4

0x331e,	// (0x0004feef) mce_image_pane_g5

0x0004,

0xf399,	// (0x0005bf6a) mce_image_pane_g

0xb19f,	// (0x00057d70) control_top_pane_stacon_cp01_ParamLimits

0xb19f,	// (0x00057d70) control_top_pane_stacon_cp01

0xb1b3,	// (0x00057d84) uni_indicator_pane_stacon_cp01_ParamLimits

0xb1b3,	// (0x00057d84) uni_indicator_pane_stacon_cp01

0xb1e0,	// (0x00057db1) bg_popup_sub_pane_cp03

0xb1ea,	// (0x00057dbb) chi_dic_find_pane

0x3326,	// (0x0004fef7) listscroll_chi_dic_pane

0xb1f2,	// (0x00057dc3) main_pane_chidic_g1

0xb1fa,	// (0x00057dcb) chi_dic_find_pane_t1

0xb208,	// (0x00057dd9) find_chidic_pane

0xb211,	// (0x00057de2) chi_dic_list_pane_ParamLimits

0xb211,	// (0x00057de2) chi_dic_list_pane

0xb222,	// (0x00057df3) scroll_pane_cp020

0xb22a,	// (0x00057dfb) find_chidic_pane_t1

0xa503,	// (0x000570d4) input_focus_pane_cp06

0x333a,	// (0x0004ff0b) list_chi_dic_pane_ParamLimits

0x333a,	// (0x0004ff0b) list_chi_dic_pane

0x334c,	// (0x0004ff1d) list_chi_dic_pane_t1_ParamLimits

0x334c,	// (0x0004ff1d) list_chi_dic_pane_t1

0xa503,	// (0x000570d4) list_highlight_pane_cp020

0xb239,	// (0x00057e0a) bg_cale_heading_pane_g1

0x335f,	// (0x0004ff30) bg_cale_heading_pane_g2

0x3367,	// (0x0004ff38) bg_cale_heading_pane_g3

0x336f,	// (0x0004ff40) bg_cale_heading_pane_g4

0x3379,	// (0x0004ff4a) bg_cale_heading_pane_g5

0x3383,	// (0x0004ff54) bg_cale_heading_pane_g6

0x338b,	// (0x0004ff5c) bg_cale_heading_pane_g7

0x3393,	// (0x0004ff64) bg_cale_heading_pane_g8

0x339d,	// (0x0004ff6e) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x0005bf75) bg_cale_heading_pane_g

0xb239,	// (0x00057e0a) bg_cale_side_pane_g1

0x33a7,	// (0x0004ff78) bg_cale_side_pane_g2

0x33af,	// (0x0004ff80) bg_cale_side_pane_g3

0x33b7,	// (0x0004ff88) bg_cale_side_pane_g4

0x33bf,	// (0x0004ff90) bg_cale_side_pane_g5

0x33c7,	// (0x0004ff98) bg_cale_side_pane_g6

0x33cf,	// (0x0004ffa0) bg_cale_side_pane_g7

0x33d7,	// (0x0004ffa8) bg_cale_side_pane_g8

0x33df,	// (0x0004ffb0) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x0005bf88) bg_cale_side_pane_g

0x33e7,	// (0x0004ffb8) popup_call_status_window_ParamLimits

0x33e7,	// (0x0004ffb8) popup_call_status_window

0xb241,	// (0x00057e12) stacon_top_pane

0xb249,	// (0x00057e1a) status_pane_ParamLimits

0xb249,	// (0x00057e1a) status_pane

0xb25e,	// (0x00057e2f) status_small_pane

0xb266,	// (0x00057e37) control_pane

0xa503,	// (0x000570d4) stacon_bottom_pane

0xb26e,	// (0x00057e3f) list_single_mce_smart_pane_t1_ParamLimits

0xb26e,	// (0x00057e3f) list_single_mce_smart_pane_t1

0xb281,	// (0x00057e52) list_single_mce_smart_pane_t2_ParamLimits

0xb281,	// (0x00057e52) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x0005bf9b) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x0005bf9b) list_single_mce_smart_pane_t

0x3430,	// (0x00050001) compass_pane

0x3439,	// (0x0005000a) main_location2_pane_t1

0x344b,	// (0x0005001c) main_location2_pane_t2

0x345d,	// (0x0005002e) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x0005bfa0) main_location2_pane_t

0xb2a0,	// (0x00057e71) compass_pane_g1_ParamLimits

0xb2a0,	// (0x00057e71) compass_pane_g1

0x34a1,	// (0x00050072) compass_pane_t1

0x34b0,	// (0x00050081) compass_pane_t2

0x0005,

0xf3d8,	// (0x0005bfa9) compass_pane_t

0x34f7,	// (0x000500c8) text_secondary_cp61

0xb31c,	// (0x00057eed) navi_pane_cams_g5

0xb398,	// (0x00057f69) navi_pane_im_t1

0xb3a6,	// (0x00057f77) navi_pane_mp_g1_ParamLimits

0xb3a6,	// (0x00057f77) navi_pane_mp_g1

0xb3ba,	// (0x00057f8b) navi_pane_mp_g2_ParamLimits

0xb3ba,	// (0x00057f8b) navi_pane_mp_g2

0xb3c6,	// (0x00057f97) navi_pane_mp_g3_ParamLimits

0xb3c6,	// (0x00057f97) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x0005bfbd) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x0005bfbd) navi_pane_mp_g

0xb3d2,	// (0x00057fa3) navi_pane_mp_t1

0xb3e0,	// (0x00057fb1) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x0005bfc4) navi_pane_mp_t

0xb44b,	// (0x0005801c) navi_pane_vt_g1

0xb3d2,	// (0x00057fa3) navi_pane_vt_t1

0xb453,	// (0x00058024) navi_slider_pane

0xb463,	// (0x00058034) zooming_pane

0xb46b,	// (0x0005803c) navi_slider_pane_g1

0x9d10,	// (0x000568e1) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x0005bfcb) navi_slider_pane_g

0xb48f,	// (0x00058060) aid_levels_zoom

0xb497,	// (0x00058068) zooming_pane_g1

0xb49f,	// (0x00058070) zooming_pane_g2

0xb49f,	// (0x00058070) zooming_pane_g3

0x0002,

0xf409,	// (0x0005bfda) zooming_pane_g

0xb4a7,	// (0x00058078) level_10_zoom

0xb4b0,	// (0x00058081) level_11_zoom

0xb4b9,	// (0x0005808a) level_1_zoom

0xb4c2,	// (0x00058093) level_2_zoom

0xb4cb,	// (0x0005809c) level_3_zoom

0xb4d4,	// (0x000580a5) level_4_zoom

0xb4dd,	// (0x000580ae) level_5_zoom

0xb4e6,	// (0x000580b7) level_6_zoom

0xb4ef,	// (0x000580c0) level_7_zoom

0xb4f8,	// (0x000580c9) level_8_zoom

0xb501,	// (0x000580d2) level_9_zoom

0xb512,	// (0x000580e3) popup_phob_thumbnail_window_g1

0xb51a,	// (0x000580eb) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x0005bfe1) popup_phob_thumbnail_window_g

0xc7f6,	// (0x000593c7) level_1_location

0xc7fe,	// (0x000593cf) level_2_location

0xc806,	// (0x000593d7) level_3_location

0xc80e,	// (0x000593df) level_4_location

0xb463,	// (0x00058034) level_5_location

0x3548,	// (0x00050119) mce_icon_pane_g1

0x3552,	// (0x00050123) mce_icon_pane_g2

0x0001,

0xf415,	// (0x0005bfe6) mce_icon_pane_g

0x355a,	// (0x0005012b) main_mup_pane_g1_ParamLimits

0x355a,	// (0x0005012b) main_mup_pane_g1

0x3570,	// (0x00050141) main_mup_pane_g2_ParamLimits

0x3570,	// (0x00050141) main_mup_pane_g2

0x3588,	// (0x00050159) main_mup_pane_g3_ParamLimits

0x3588,	// (0x00050159) main_mup_pane_g3

0x35a0,	// (0x00050171) main_mup_pane_g4_ParamLimits

0x35a0,	// (0x00050171) main_mup_pane_g4

0x35b8,	// (0x00050189) main_mup_pane_g5_ParamLimits

0x35b8,	// (0x00050189) main_mup_pane_g5

0x35d4,	// (0x000501a5) main_mup_pane_g6_ParamLimits

0x35d4,	// (0x000501a5) main_mup_pane_g6

0x35ec,	// (0x000501bd) main_mup_pane_g7_ParamLimits

0x35ec,	// (0x000501bd) main_mup_pane_g7

0x3604,	// (0x000501d5) main_mup_pane_g8_ParamLimits

0x3604,	// (0x000501d5) main_mup_pane_g8

0x361e,	// (0x000501ef) main_mup_pane_g9_ParamLimits

0x361e,	// (0x000501ef) main_mup_pane_g9

0x3638,	// (0x00050209) main_mup_pane_g10_ParamLimits

0x3638,	// (0x00050209) main_mup_pane_g10

0x3652,	// (0x00050223) main_mup_pane_g11_ParamLimits

0x3652,	// (0x00050223) main_mup_pane_g11

0x3666,	// (0x00050237) main_mup_pane_g12_ParamLimits

0x3666,	// (0x00050237) main_mup_pane_g12

0x367c,	// (0x0005024d) main_mup_pane_g13_ParamLimits

0x367c,	// (0x0005024d) main_mup_pane_g13

0x000c,

0xf41a,	// (0x0005bfeb) main_mup_pane_g_ParamLimits

0xf41a,	// (0x0005bfeb) main_mup_pane_g

0x3690,	// (0x00050261) main_mup_pane_t1_ParamLimits

0x3690,	// (0x00050261) main_mup_pane_t1

0x36aa,	// (0x0005027b) main_mup_pane_t2_ParamLimits

0x36aa,	// (0x0005027b) main_mup_pane_t2

0x36c2,	// (0x00050293) main_mup_pane_t3_ParamLimits

0x36c2,	// (0x00050293) main_mup_pane_t3

0x36da,	// (0x000502ab) main_mup_pane_t4_ParamLimits

0x36da,	// (0x000502ab) main_mup_pane_t4

0x36f8,	// (0x000502c9) main_mup_pane_t5_ParamLimits

0x36f8,	// (0x000502c9) main_mup_pane_t5

0x370d,	// (0x000502de) main_mup_pane_t6_ParamLimits

0x370d,	// (0x000502de) main_mup_pane_t6

0x0005,

0xf435,	// (0x0005c006) main_mup_pane_t_ParamLimits

0xf435,	// (0x0005c006) main_mup_pane_t

0x371f,	// (0x000502f0) mup_progress_pane_ParamLimits

0x371f,	// (0x000502f0) mup_progress_pane

0x372b,	// (0x000502fc) mup_visualizer_pane_ParamLimits

0x372b,	// (0x000502fc) mup_visualizer_pane

0x375b,	// (0x0005032c) mup_volume_pane_ParamLimits

0x375b,	// (0x0005032c) mup_volume_pane

0xb1c4,	// (0x00057d95) mup_visualizer_pane_g1_ParamLimits

0xb1c4,	// (0x00057d95) mup_visualizer_pane_g1

0xb1c4,	// (0x00057d95) mup_visualizer_pane_g2_ParamLimits

0xb1c4,	// (0x00057d95) mup_visualizer_pane_g2

0xb2a0,	// (0x00057e71) mup_visualizer_pane_g3_ParamLimits

0xb2a0,	// (0x00057e71) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x0005c013) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x0005c013) mup_visualizer_pane_g

0xa878,	// (0x00057449) mup_volume_pane_g1

0xb52a,	// (0x000580fb) mup_volume_pane_g2

0x0001,

0xf449,	// (0x0005c01a) mup_volume_pane_g

0xa878,	// (0x00057449) mup_progress_pane_g1

0xb533,	// (0x00058104) mup_progress_pane_g2

0xb53c,	// (0x0005810d) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x0005c01f) mup_progress_pane_g

0xa503,	// (0x000570d4) bg_popup_window_pane_cp05

0xb545,	// (0x00058116) heading_pane_cp02_ParamLimits

0xb545,	// (0x00058116) heading_pane_cp02

0xb55f,	// (0x00058130) list_popup_blid_pane

0xb567,	// (0x00058138) list_blid_sat_info_pane_ParamLimits

0xb567,	// (0x00058138) list_blid_sat_info_pane

0xb57a,	// (0x0005814b) list_blid_sat_info_pane_g1

0xb582,	// (0x00058153) list_blid_sat_info_pane_t1

0x3871,	// (0x00050442) mup_equalizer_pane_ParamLimits

0x3871,	// (0x00050442) mup_equalizer_pane

0x388a,	// (0x0005045b) mup_equalizer_pane_cp1_ParamLimits

0x388a,	// (0x0005045b) mup_equalizer_pane_cp1

0x38a7,	// (0x00050478) mup_equalizer_pane_cp2_ParamLimits

0x38a7,	// (0x00050478) mup_equalizer_pane_cp2

0x38c4,	// (0x00050495) mup_equalizer_pane_cp3_ParamLimits

0x38c4,	// (0x00050495) mup_equalizer_pane_cp3

0x38e5,	// (0x000504b6) mup_equalizer_pane_cp4_ParamLimits

0x38e5,	// (0x000504b6) mup_equalizer_pane_cp4

0x3906,	// (0x000504d7) mup_equalizer_pane_cp5

0x391a,	// (0x000504eb) mup_equalizer_pane_cp6

0x392e,	// (0x000504ff) mup_equalizer_pane_cp7

0xc714,	// (0x000592e5) bg_popup_call_poc_act_pane_g9

0xc71c,	// (0x000592ed) bg_popup_call_poc_act_pane_g10

0xc724,	// (0x000592f5) bg_popup_call_poc_act_pane_g11

0x000a,

0xa75e,	// (0x0005732f) mup_scale_pane

0xa878,	// (0x00057449) mup_scale_pane_g1

0xb590,	// (0x00058161) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x0005c03b) mup_scale_pane_g

0xb5b4,	// (0x00058185) msg_data_pane

0xb5bc,	// (0x0005818d) scroll_pane_cp017

0x03bd,	// (0x0004cf8e) bg_list_pane_cp04_ParamLimits

0x03bd,	// (0x0004cf8e) bg_list_pane_cp04

0xb5c4,	// (0x00058195) msg_data_pane_g1

0x395c,	// (0x0005052d) msg_data_pane_g2

0x3966,	// (0x00050537) msg_data_pane_g3

0x396e,	// (0x0005053f) msg_data_pane_g4

0x3976,	// (0x00050547) msg_data_pane_g5

0x397e,	// (0x0005054f) msg_data_pane_g6

0x3986,	// (0x00050557) msg_data_pane_g7

0x0006,

0xf479,	// (0x0005c04a) msg_data_pane_g

0x03d5,	// (0x0004cfa6) msg_text_pane_ParamLimits

0x03d5,	// (0x0004cfa6) msg_text_pane

0x398e,	// (0x0005055f) qrid_highlight_pane_cp011_ParamLimits

0x398e,	// (0x0005055f) qrid_highlight_pane_cp011

0xa503,	// (0x000570d4) msg_body_pane

0xa503,	// (0x000570d4) msg_header_pane

0xb5d5,	// (0x000581a6) input_focus_pane_cp07

0x0408,	// (0x0004cfd9) msg_header_pane_t1_ParamLimits

0x0408,	// (0x0004cfd9) msg_header_pane_t1

0x39a4,	// (0x00050575) msg_header_pane_t2_ParamLimits

0x39a4,	// (0x00050575) msg_header_pane_t2

0x0001,

0xf48d,	// (0x0005c05e) msg_header_pane_t_ParamLimits

0xf48d,	// (0x0005c05e) msg_header_pane_t

0xb5ea,	// (0x000581bb) msg_body_pane_g1

0x041a,	// (0x0004cfeb) msg_body_pane_t1_ParamLimits

0x041a,	// (0x0004cfeb) msg_body_pane_t1

0x39b6,	// (0x00050587) msg_body_pane_t2_ParamLimits

0x39b6,	// (0x00050587) msg_body_pane_t2

0x39c8,	// (0x00050599) msg_body_pane_t3_ParamLimits

0x39c8,	// (0x00050599) msg_body_pane_t3

0x0002,

0xf492,	// (0x0005c063) msg_body_pane_t_ParamLimits

0xf492,	// (0x0005c063) msg_body_pane_t

0x3a14,	// (0x000505e5) main_viewer_pane_g1_ParamLimits

0x3a14,	// (0x000505e5) main_viewer_pane_g1

0x3a22,	// (0x000505f3) main_viewer_pane_g2_ParamLimits

0x3a22,	// (0x000505f3) main_viewer_pane_g2

0x3a30,	// (0x00050601) main_viewer_pane_g3_ParamLimits

0x3a30,	// (0x00050601) main_viewer_pane_g3

0x3a3f,	// (0x00050610) main_viewer_pane_g4_ParamLimits

0x3a3f,	// (0x00050610) main_viewer_pane_g4

0x9d3a,	// (0x0005690b) main_viewer_pane_g5_ParamLimits

0x9d3a,	// (0x0005690b) main_viewer_pane_g5

0x9d3a,	// (0x0005690b) main_viewer_pane_g7_ParamLimits

0x9d3a,	// (0x0005690b) main_viewer_pane_g7

0x9d4c,	// (0x0005691d) main_viewer_pane_g8_ParamLimits

0x9d4c,	// (0x0005691d) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x0005c073) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x0005c073) main_viewer_pane_g

0xb5f2,	// (0x000581c3) viewer_content_pane_ParamLimits

0xb5f2,	// (0x000581c3) viewer_content_pane

0x3a7b,	// (0x0005064c) main_postcard_pane_g1_ParamLimits

0x3a7b,	// (0x0005064c) main_postcard_pane_g1

0x3a91,	// (0x00050662) main_postcard_pane_g2_ParamLimits

0x3a91,	// (0x00050662) main_postcard_pane_g2

0x3aa7,	// (0x00050678) main_postcard_pane_g3_ParamLimits

0x3aa7,	// (0x00050678) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x0005c084) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x0005c084) main_postcard_pane_g

0x3abe,	// (0x0005068f) main_postcard_pane_g4

0xc8f6,	// (0x000594c7) smil_status_volume_pane_g2

0x3b01,	// (0x000506d2) postcard_pane_ParamLimits

0x3b01,	// (0x000506d2) postcard_pane

0xb600,	// (0x000581d1) postcard_pane_g1_ParamLimits

0xb600,	// (0x000581d1) postcard_pane_g1

0x3b43,	// (0x00050714) postcard_pane_g2_ParamLimits

0x3b43,	// (0x00050714) postcard_pane_g2

0x3b4f,	// (0x00050720) postcard_pane_g3_ParamLimits

0x3b4f,	// (0x00050720) postcard_pane_g3

0xb60e,	// (0x000581df) postcard_pane_g4_ParamLimits

0xb60e,	// (0x000581df) postcard_pane_g4

0x3b5b,	// (0x0005072c) postcard_pane_g5_ParamLimits

0x3b5b,	// (0x0005072c) postcard_pane_g5

0x3b70,	// (0x00050741) postcard_pane_g6_ParamLimits

0x3b70,	// (0x00050741) postcard_pane_g6

0xb600,	// (0x000581d1) postcard_pane_g7_ParamLimits

0xb600,	// (0x000581d1) postcard_pane_g7

0x0006,

0xf4c0,	// (0x0005c091) postcard_pane_g_ParamLimits

0xf4c0,	// (0x0005c091) postcard_pane_g

0x3b84,	// (0x00050755) main_mp2_pane_g1_ParamLimits

0x3b84,	// (0x00050755) main_mp2_pane_g1

0x3b90,	// (0x00050761) main_mp2_pane_g2_ParamLimits

0x3b90,	// (0x00050761) main_mp2_pane_g2

0x3b9c,	// (0x0005076d) main_mp2_pane_g3_ParamLimits

0x3b9c,	// (0x0005076d) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x0005c0a0) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x0005c0a0) main_mp2_pane_g

0x3ba8,	// (0x00050779) main_mp2_pane_t1_ParamLimits

0x3ba8,	// (0x00050779) main_mp2_pane_t1

0x3bbd,	// (0x0005078e) main_mp2_pane_t2_ParamLimits

0x3bbd,	// (0x0005078e) main_mp2_pane_t2

0x3bcf,	// (0x000507a0) main_mp2_pane_t3_ParamLimits

0x3bcf,	// (0x000507a0) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x0005c0a7) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x0005c0a7) main_mp2_pane_t

0xb61c,	// (0x000581ed) pec_content_pane_ParamLimits

0xb61c,	// (0x000581ed) pec_content_pane

0xab8a,	// (0x0005775b) scroll_pane_cp015

0xb62e,	// (0x000581ff) pec_attribute_pane_ParamLimits

0xb62e,	// (0x000581ff) pec_attribute_pane

0x3be1,	// (0x000507b2) pec_content_pane_g1_ParamLimits

0x3be1,	// (0x000507b2) pec_content_pane_g1

0xb63e,	// (0x0005820f) pec_content_pane_t1_ParamLimits

0xb63e,	// (0x0005820f) pec_content_pane_t1

0xb650,	// (0x00058221) pec_content_pane_t2_ParamLimits

0xb650,	// (0x00058221) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x0005c0ae) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x0005c0ae) pec_content_pane_t

0x3bed,	// (0x000507be) list_single_graphic_pane_cp01_ParamLimits

0x3bed,	// (0x000507be) list_single_graphic_pane_cp01

0xa75e,	// (0x0005732f) bg_popup_sub_pane_cp04

0xb662,	// (0x00058233) popup_mup_playback_window_g1

0xb66e,	// (0x0005823f) popup_mup_playback_window_t1

0xb683,	// (0x00058254) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x0005c0b3) popup_mup_playback_window_t

0xb6ba,	// (0x0005828b) main_image_pane_g1_ParamLimits

0xb6ba,	// (0x0005828b) main_image_pane_g1

0xb6fd,	// (0x000582ce) scroll_pane_cp018_ParamLimits

0xb6fd,	// (0x000582ce) scroll_pane_cp018

0xb715,	// (0x000582e6) scroll_pane_cp016_ParamLimits

0xb715,	// (0x000582e6) scroll_pane_cp016

0x3cba,	// (0x0005088b) smil2_image_pane_ParamLimits

0x3cba,	// (0x0005088b) smil2_image_pane

0x3cea,	// (0x000508bb) smil2_root_pane_ParamLimits

0x3cea,	// (0x000508bb) smil2_root_pane

0x3d22,	// (0x000508f3) smil2_text_pane_ParamLimits

0x3d22,	// (0x000508f3) smil2_text_pane

0xa503,	// (0x000570d4) bg_list_pane_cp06

0xb751,	// (0x00058322) grid_radio_pane

0xa503,	// (0x000570d4) bg_popup_window_pane_cp06

0xb759,	// (0x0005832a) main_fmradio_pane_t1

0xb0d3,	// (0x00057ca4) heading_pane_cp04

0xb767,	// (0x00058338) main_fmradio_pane_t2

0xc72c,	// (0x000592fd) popup_cale_lunar_info_window_g1

0xb775,	// (0x00058346) main_fmradio_pane_t3

0xc734,	// (0x00059305) popup_cale_lunar_info_window_g2

0xb783,	// (0x00058354) main_fmradio_pane_t4

0x0001,

0xb791,	// (0x00058362) main_fmradio_pane_t5

0x0004,

0xf5bd,	// (0x0005c18e) popup_cale_lunar_info_window_g

0xf4f7,	// (0x0005c0c8) main_fmradio_pane_t

0xb79f,	// (0x00058370) wait_bar_pane_cp03

0xb7a7,	// (0x00058378) cell_fmradio_pane_ParamLimits

0xb7a7,	// (0x00058378) cell_fmradio_pane

0xb600,	// (0x000581d1) cell_fmradio_pane_g1_ParamLimits

0xb600,	// (0x000581d1) cell_fmradio_pane_g1

0xa503,	// (0x000570d4) grid_highlight_pane_cp011

0xb7ba,	// (0x0005838b) poc_content_pane_ParamLimits

0xb7ba,	// (0x0005838b) poc_content_pane

0xb7cc,	// (0x0005839d) scroll_pane_cp019

0x3da2,	// (0x00050973) popup_call_poc_act_window_ParamLimits

0x3da2,	// (0x00050973) popup_call_poc_act_window

0x3dc6,	// (0x00050997) popup_call_poc_inact_window_ParamLimits

0x3dc6,	// (0x00050997) popup_call_poc_inact_window

0xf594,	// (0x0005c165) bg_popup_call_poc_act_pane_g

0xc6a4,	// (0x00059275) bg_popup_call_poc_inact_pane_g1

0xc6ac,	// (0x0005927d) bg_popup_call_poc_inact_pane_g2

0xb7d4,	// (0x000583a5) popup_call_poc_act_window_g2

0xc6b4,	// (0x00059285) bg_popup_call_poc_inact_pane_g3

0xc6bc,	// (0x0005928d) bg_popup_call_poc_inact_pane_g4

0xc6c4,	// (0x00059295) bg_popup_call_poc_inact_pane_g5

0xb7dc,	// (0x000583ad) popup_call_poc_act_window_t1_ParamLimits

0xb7dc,	// (0x000583ad) popup_call_poc_act_window_t1

0xb804,	// (0x000583d5) popup_call_poc_act_window_t2_ParamLimits

0xb804,	// (0x000583d5) popup_call_poc_act_window_t2

0xb82c,	// (0x000583fd) popup_call_poc_act_window_t3_ParamLimits

0xb82c,	// (0x000583fd) popup_call_poc_act_window_t3

0xb854,	// (0x00058425) popup_call_poc_act_window_t4_ParamLimits

0xb854,	// (0x00058425) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x0005c0d3) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x0005c0d3) popup_call_poc_act_window_t

0xc6cc,	// (0x0005929d) bg_popup_call_poc_inact_pane_g6

0xc6d4,	// (0x000592a5) bg_popup_call_poc_inact_pane_g7

0xc6dc,	// (0x000592ad) bg_popup_call_poc_inact_pane_g8

0xb866,	// (0x00058437) popup_call_poc_inact_window_g2

0xc6e4,	// (0x000592b5) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf581,	// (0x0005c152) bg_popup_call_poc_inact_pane_g

0xb86e,	// (0x0005843f) popup_call_poc_inact_window_t1_ParamLimits

0xb86e,	// (0x0005843f) popup_call_poc_inact_window_t1

0xb883,	// (0x00058454) popup_call_poc_inact_window_t2_ParamLimits

0xb883,	// (0x00058454) popup_call_poc_inact_window_t2

0xb898,	// (0x00058469) popup_call_poc_inact_window_t3_ParamLimits

0xb898,	// (0x00058469) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x0005c0dc) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x0005c0dc) popup_call_poc_inact_window_t

0xc869,	// (0x0005943a) context_pane_ParamLimits

0x45f5,	// (0x000511c6) signal_pane_ParamLimits

0xb463,	// (0x00058034) main_call2_pane

0x9d91,	// (0x00056962) popup_phob_thumbnail2_window_ParamLimits

0x9d91,	// (0x00056962) popup_phob_thumbnail2_window

0x9d22,	// (0x000568f3) aid_hotspot_pointer_arrow_pane

0x9d2a,	// (0x000568fb) aid_hotspot_pointer_hand_pane

0x410f,	// (0x00050ce0) phob_pre_status_pane_g5

0x1ec9,	// (0x0004ea9a) cams_zoom_pane_ParamLimits

0x1ed8,	// (0x0004eaa9) image_vga_pane_ParamLimits

0x1ef2,	// (0x0004eac3) main_camera_pane_g1_ParamLimits

0x1f04,	// (0x0004ead5) main_camera_pane_g2_ParamLimits

0x1f14,	// (0x0004eae5) main_camera_pane_g3_ParamLimits

0x1f24,	// (0x0004eaf5) main_camera_pane_g4_ParamLimits

0x1f34,	// (0x0004eb05) main_camera_pane_g5_ParamLimits

0x1f44,	// (0x0004eb15) main_camera_pane_g6_ParamLimits

0x1f56,	// (0x0004eb27) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x0005bddb) main_camera_pane_g_ParamLimits

0x1f66,	// (0x0004eb37) main_camera_pane_t1_ParamLimits

0x1f7c,	// (0x0004eb4d) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x0005bdec) main_camera_pane_t_ParamLimits

0xa75e,	// (0x0005732f) bg_popup_preview_window_pane_cp01_ParamLimits

0xa75e,	// (0x0005732f) bg_popup_preview_window_pane_cp01

0xb8ad,	// (0x0005847e) popup_phob_thumbnail2_window_g1_ParamLimits

0xb8ad,	// (0x0005847e) popup_phob_thumbnail2_window_g1

0xa503,	// (0x000570d4) call2_cli_visual_pane

0x3dfa,	// (0x000509cb) popup_call2_audio_conf_window_ParamLimits

0x3dfa,	// (0x000509cb) popup_call2_audio_conf_window

0x3e1a,	// (0x000509eb) popup_call2_audio_first_window_ParamLimits

0x3e1a,	// (0x000509eb) popup_call2_audio_first_window

0x3eb0,	// (0x00050a81) popup_call2_audio_in_window_ParamLimits

0x3eb0,	// (0x00050a81) popup_call2_audio_in_window

0x3ef8,	// (0x00050ac9) popup_call2_audio_out_window_ParamLimits

0x3ef8,	// (0x00050ac9) popup_call2_audio_out_window

0x3f62,	// (0x00050b33) popup_call2_audio_second_window_ParamLimits

0x3f62,	// (0x00050b33) popup_call2_audio_second_window

0x3fc8,	// (0x00050b99) popup_call2_audio_wait_window_ParamLimits

0x3fc8,	// (0x00050b99) popup_call2_audio_wait_window

0xa503,	// (0x000570d4) bg_popup_call2_act_pane_cp03

0xa740,	// (0x00057311) list_conf_pane_cp

0xb8b9,	// (0x0005848a) popup_call2_audio_conf_window_t1

0xb130,	// (0x00057d01) list_single_graphic_popup_conf2_pane_ParamLimits

0xb130,	// (0x00057d01) list_single_graphic_popup_conf2_pane

0xb143,	// (0x00057d14) list_highlight_pane_cp04

0xb8c7,	// (0x00058498) list_single_graphic_popup_conf2_pane_g1

0xb154,	// (0x00057d25) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x0005c0e3) list_single_graphic_popup_conf2_pane_g

0xb8d1,	// (0x000584a2) list_single_graphic_popup_conf2_pane_t1

0xb8df,	// (0x000584b0) bg_popup_call2_act_pane_cp01_ParamLimits

0xb8df,	// (0x000584b0) bg_popup_call2_act_pane_cp01

0xb969,	// (0x0005853a) call_type_pane_cp05_ParamLimits

0xb969,	// (0x0005853a) call_type_pane_cp05

0xb9bd,	// (0x0005858e) popup_call2_audio_second_window_g1_ParamLimits

0xb9bd,	// (0x0005858e) popup_call2_audio_second_window_g1

0xba11,	// (0x000585e2) popup_call2_audio_second_window_g2_ParamLimits

0xba11,	// (0x000585e2) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x0005c0e8) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x0005c0e8) popup_call2_audio_second_window_g

0xba76,	// (0x00058647) popup_call2_audio_second_window_t1_ParamLimits

0xba76,	// (0x00058647) popup_call2_audio_second_window_t1

0xbb31,	// (0x00058702) popup_call2_audio_second_window_t2_ParamLimits

0xbb31,	// (0x00058702) popup_call2_audio_second_window_t2

0xbb84,	// (0x00058755) popup_call2_audio_second_window_t3_ParamLimits

0xbb84,	// (0x00058755) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x0005c0ef) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x0005c0ef) popup_call2_audio_second_window_t

0xa503,	// (0x000570d4) bg_popup_call2_in_pane_cp02

0xa50d,	// (0x000570de) call_type_pane_cp04

0xa515,	// (0x000570e6) popup_call2_audio_wait_window_g1

0xa51d,	// (0x000570ee) popup_call2_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x0005bcc6) popup_call2_audio_wait_window_g

0xa525,	// (0x000570f6) popup_call2_audio_wait_window_t3

0xbc77,	// (0x00058848) bg_popup_call2_act_pane_ParamLimits

0xbc77,	// (0x00058848) bg_popup_call2_act_pane

0xbd37,	// (0x00058908) call_type_pane_cp03_ParamLimits

0xbd37,	// (0x00058908) call_type_pane_cp03

0xbd9b,	// (0x0005896c) popup_call2_audio_first_window_g1_ParamLimits

0xbd9b,	// (0x0005896c) popup_call2_audio_first_window_g1

0xbe0b,	// (0x000589dc) popup_call2_audio_first_window_g2_ParamLimits

0xbe0b,	// (0x000589dc) popup_call2_audio_first_window_g2

0xb1c4,	// (0x00057d95) popup_call2_audio_first_window_g3_ParamLimits

0xb1c4,	// (0x00057d95) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x0005c0f8) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x0005c0f8) popup_call2_audio_first_window_g

0xbee9,	// (0x00058aba) popup_call2_audio_first_window_t1_ParamLimits

0xbee9,	// (0x00058aba) popup_call2_audio_first_window_t1

0xbfec,	// (0x00058bbd) popup_call2_audio_first_window_t4_ParamLimits

0xbfec,	// (0x00058bbd) popup_call2_audio_first_window_t4

0xc0cf,	// (0x00058ca0) popup_call2_audio_first_window_t5_ParamLimits

0xc0cf,	// (0x00058ca0) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x0005c103) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x0005c103) popup_call2_audio_first_window_t

0xa756,	// (0x00057327) bg_popup_call2_act_pane_g1

0xc73c,	// (0x0005930d) popup_cale_lunar_info_window_t1

0xc74a,	// (0x0005931b) popup_cale_lunar_info_window_t2

0xc758,	// (0x00059329) popup_cale_lunar_info_window_t3

0xa503,	// (0x000570d4) bg_popup_call2_bubble_pane

0xc1d0,	// (0x00058da1) bg_popup_call2_in_pane_cp01_ParamLimits

0xc1d0,	// (0x00058da1) bg_popup_call2_in_pane_cp01

0x98d4,	// (0x000564a5) call_type_pane_cp02

0xc218,	// (0x00058de9) popup_call2_audio_out_window_g1_ParamLimits

0xc218,	// (0x00058de9) popup_call2_audio_out_window_g1

0xc244,	// (0x00058e15) popup_call2_audio_out_window_g2_ParamLimits

0xc244,	// (0x00058e15) popup_call2_audio_out_window_g2

0xc26c,	// (0x00058e3d) popup_call2_audio_out_window_g3_ParamLimits

0xc26c,	// (0x00058e3d) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x0005c10c) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x0005c10c) popup_call2_audio_out_window_g

0xc2a7,	// (0x00058e78) popup_call2_audio_out_window_t1_ParamLimits

0xc2a7,	// (0x00058e78) popup_call2_audio_out_window_t1

0xc306,	// (0x00058ed7) popup_call2_audio_out_window_t2_ParamLimits

0xc306,	// (0x00058ed7) popup_call2_audio_out_window_t2

0xc35a,	// (0x00058f2b) popup_call2_audio_out_window_t3_ParamLimits

0xc35a,	// (0x00058f2b) popup_call2_audio_out_window_t3

0xc370,	// (0x00058f41) popup_call2_audio_out_window_t4_ParamLimits

0xc370,	// (0x00058f41) popup_call2_audio_out_window_t4

0xc386,	// (0x00058f57) popup_call2_audio_out_window_t5_ParamLimits

0xc386,	// (0x00058f57) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x0005c115) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x0005c115) popup_call2_audio_out_window_t

0xc3ea,	// (0x00058fbb) bg_popup_call2_in_pane_ParamLimits

0xc3ea,	// (0x00058fbb) bg_popup_call2_in_pane

0xc446,	// (0x00059017) popup_call2_audio_in_window_g1_ParamLimits

0xc446,	// (0x00059017) popup_call2_audio_in_window_g1

0xc47e,	// (0x0005904f) popup_call2_audio_in_window_g2_ParamLimits

0xc47e,	// (0x0005904f) popup_call2_audio_in_window_g2

0xc4b6,	// (0x00059087) popup_call2_audio_in_window_g3_ParamLimits

0xc4b6,	// (0x00059087) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x0005c122) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x0005c122) popup_call2_audio_in_window_g

0xc50e,	// (0x000590df) popup_call2_audio_in_window_t1_ParamLimits

0xc50e,	// (0x000590df) popup_call2_audio_in_window_t1

0xc58e,	// (0x0005915f) popup_call2_audio_in_window_t2_ParamLimits

0xc58e,	// (0x0005915f) popup_call2_audio_in_window_t2

0xc60e,	// (0x000591df) popup_call2_audio_in_window_t3_ParamLimits

0xc60e,	// (0x000591df) popup_call2_audio_in_window_t3

0xc628,	// (0x000591f9) popup_call2_audio_in_window_t4_ParamLimits

0xc628,	// (0x000591f9) popup_call2_audio_in_window_t4

0xc63a,	// (0x0005920b) popup_call2_audio_in_window_t5_ParamLimits

0xc63a,	// (0x0005920b) popup_call2_audio_in_window_t5

0xc64f,	// (0x00059220) popup_call2_audio_in_window_t6_ParamLimits

0xc64f,	// (0x00059220) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x0005c12b) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x0005c12b) popup_call2_audio_in_window_t

0xa756,	// (0x00057327) bg_popup_call2_in_pane_g1

0xc766,	// (0x00059337) popup_cale_lunar_info_window_t4

0x0003,

0xf5c2,	// (0x0005c193) popup_cale_lunar_info_window_t

0xa75e,	// (0x0005732f) bg_popup_call2_rect_pane_ParamLimits

0xa75e,	// (0x0005732f) bg_popup_call2_rect_pane

0xa503,	// (0x000570d4) call2_cli_visual_graphic_pane

0xa503,	// (0x000570d4) call2_cli_visual_text_pane

0x9db8,	// (0x00056989) smil_status_volume_pane_g3

0x0002,

0xa878,	// (0x00057449) call2_cli_visual_graphic_pane_g1

0xa878,	// (0x00057449) call2_cli_visual_graphic_pane_g2

0xa878,	// (0x00057449) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x0005c138) call2_cli_visual_graphic_pane_g

0xc664,	// (0x00059235) bg_popup_call2_rect_pane_g1

0xa904,	// (0x000574d5) bg_popup_call2_rect_pane_g2

0xc66c,	// (0x0005923d) bg_popup_call2_rect_pane_g3

0xc674,	// (0x00059245) bg_popup_call2_rect_pane_g4

0xc67c,	// (0x0005924d) bg_popup_call2_rect_pane_g5

0xc684,	// (0x00059255) bg_popup_call2_rect_pane_g6

0xc68c,	// (0x0005925d) bg_popup_call2_rect_pane_g7

0xc694,	// (0x00059265) bg_popup_call2_rect_pane_g8

0xc69c,	// (0x0005926d) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x0005c13f) bg_popup_call2_rect_pane_g

0xc6a4,	// (0x00059275) bg_popup_call2_bubble_pane_g1

0xc6ac,	// (0x0005927d) bg_popup_call2_bubble_pane_g2

0xc6b4,	// (0x00059285) bg_popup_call2_bubble_pane_g3

0xc6bc,	// (0x0005928d) bg_popup_call2_bubble_pane_g4

0xc6c4,	// (0x00059295) bg_popup_call2_bubble_pane_g5

0xc6cc,	// (0x0005929d) bg_popup_call2_bubble_pane_g6

0xc6d4,	// (0x000592a5) bg_popup_call2_bubble_pane_g7

0xc6dc,	// (0x000592ad) bg_popup_call2_bubble_pane_g8

0xc6e4,	// (0x000592b5) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x0005c152) bg_popup_call2_bubble_pane_g

0x1835,	// (0x0004e406) aid_cale_week_size_cell_pane

0x1f92,	// (0x0004eb63) aid_cams_cif_uncrop_pane_ParamLimits

0x1f92,	// (0x0004eb63) aid_cams_cif_uncrop_pane

0x2142,	// (0x0004ed13) aid_cams_size_cell_ParamLimits

0x2142,	// (0x0004ed13) aid_cams_size_cell

0x2156,	// (0x0004ed27) grid_cams_pane_ParamLimits

0x2170,	// (0x0004ed41) linegrid_cams_pane_ParamLimits

0x2257,	// (0x0004ee28) call_video_pane_t1

0x2275,	// (0x0004ee46) call_video_pane_t2

0x0001,

0xf26e,	// (0x0005be3f) call_video_pane_t

0x26a1,	// (0x0004f272) aid_cale_month_size_cell_pane_ParamLimits

0x26a1,	// (0x0004f272) aid_cale_month_size_cell_pane

0xf60b,	// (0x0005c1dc) smil_status_volume_pane_g

0x9dc5,	// (0x00056996) volume_smil_pane_ParamLimits

0x978f,	// (0x00056360) aid_popup2_width_pane

0x179d,	// (0x0004e36e) cell_qdial_pane_g4_ParamLimits

0x179d,	// (0x0004e36e) cell_qdial_pane_g4

0x3481,	// (0x00050052) aid_blid_cardinal_pane_ParamLimits

0x348d,	// (0x0005005e) aid_blid_destination_pane_ParamLimits

0x348d,	// (0x0005005e) aid_blid_destination_pane

0xa75e,	// (0x0005732f) bg_popup_call_poc_act_pane_ParamLimits

0xa75e,	// (0x0005732f) bg_popup_call_poc_act_pane

0xa75e,	// (0x0005732f) bg_popup_call_poc_inact_pane_ParamLimits

0xa75e,	// (0x0005732f) bg_popup_call_poc_inact_pane

0xc6ec,	// (0x000592bd) bg_popup_call_poc_act_pane_g1

0xc6f4,	// (0x000592c5) bg_popup_call_poc_act_pane_g2

0xc6fc,	// (0x000592cd) bg_popup_call_poc_act_pane_g3

0xc6bc,	// (0x0005928d) bg_popup_call_poc_act_pane_g4

0xc6c4,	// (0x00059295) bg_popup_call_poc_act_pane_g5

0xc704,	// (0x000592d5) bg_popup_call_poc_act_pane_g6

0xc6d4,	// (0x000592a5) bg_popup_call_poc_act_pane_g7

0xc70c,	// (0x000592dd) bg_popup_call_poc_act_pane_g8

0xa503,	// (0x000570d4) main_usb_pane

0x9d6c,	// (0x0005693d) popup_cale_lunar_info_window

0x254d,	// (0x0004f11e) im_reading_pane_t1_ParamLimits

0xaae2,	// (0x000576b3) list_im_pane_ParamLimits

0xaaf3,	// (0x000576c4) scroll_pane_cp07_ParamLimits

0xa503,	// (0x000570d4) grid_highlight_pane_cp012

0xa75e,	// (0x0005732f) mup_scale_pane_ParamLimits

0xb600,	// (0x000581d1) main_usb_pane_g1_ParamLimits

0xb600,	// (0x000581d1) main_usb_pane_g1

0x4024,	// (0x00050bf5) main_usb_pane_g2_ParamLimits

0x4024,	// (0x00050bf5) main_usb_pane_g2

0x0001,

0xf5ab,	// (0x0005c17c) main_usb_pane_g_ParamLimits

0xf5ab,	// (0x0005c17c) main_usb_pane_g

0x403a,	// (0x00050c0b) main_usb_pane_t1_ParamLimits

0x403a,	// (0x00050c0b) main_usb_pane_t1

0x404c,	// (0x00050c1d) main_usb_pane_t2_ParamLimits

0x404c,	// (0x00050c1d) main_usb_pane_t2

0x405e,	// (0x00050c2f) main_usb_pane_t3_ParamLimits

0x405e,	// (0x00050c2f) main_usb_pane_t3

0x4070,	// (0x00050c41) main_usb_pane_t4_ParamLimits

0x4070,	// (0x00050c41) main_usb_pane_t4

0x4082,	// (0x00050c53) main_usb_pane_t5_ParamLimits

0x4082,	// (0x00050c53) main_usb_pane_t5

0x4094,	// (0x00050c65) main_usb_pane_t6_ParamLimits

0x4094,	// (0x00050c65) main_usb_pane_t6

0x0005,

0xf5b0,	// (0x0005c181) main_usb_pane_t_ParamLimits

0x3430,	// (0x00050001) aid_text_placing

0x3439,	// (0x0005000a) main_location2_pane_t1_ParamLimits

0x344b,	// (0x0005001c) main_location2_pane_t2_ParamLimits

0x345d,	// (0x0005002e) main_location2_pane_t3_ParamLimits

0x346f,	// (0x00050040) main_location2_pane_t4_ParamLimits

0x346f,	// (0x00050040) main_location2_pane_t4

0xf3cf,	// (0x0005bfa0) main_location2_pane_t_ParamLimits

0xa79a,	// (0x0005736b) find_pinb_pane_g2_ParamLimits

0xa79a,	// (0x0005736b) find_pinb_pane_g2

0x0001,

0xf11b,	// (0x0005bcec) find_pinb_pane_g_ParamLimits

0xf11b,	// (0x0005bcec) find_pinb_pane_g

0xa7a6,	// (0x00057377) find_pinb_pane_t1_ParamLimits

0xa7b8,	// (0x00057389) find_pinb_pane_t2_ParamLimits

0xf120,	// (0x0005bcf1) find_pinb_pane_t_ParamLimits

0xa503,	// (0x000570d4) main_call3_pane

0x2b60,	// (0x0004f731) cale_month_day_heading_pane_t1_ParamLimits

0x2be6,	// (0x0004f7b7) cale_month_day_heading_pane_t2_ParamLimits

0x2c77,	// (0x0004f848) cale_month_day_heading_pane_t3_ParamLimits

0x2d08,	// (0x0004f8d9) cale_month_day_heading_pane_t4_ParamLimits

0x2d9d,	// (0x0004f96e) cale_month_day_heading_pane_t5_ParamLimits

0x2e3e,	// (0x0004fa0f) cale_month_day_heading_pane_t6_ParamLimits

0x2edf,	// (0x0004fab0) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x0005be77) cale_month_day_heading_pane_t_ParamLimits

0xad3d,	// (0x0005790e) smil_status_volume_pane

0x3b1f,	// (0x000506f0) postcard_address_pane_ParamLimits

0x3b1f,	// (0x000506f0) postcard_address_pane

0x3b31,	// (0x00050702) postcard_message_pane_ParamLimits

0x3b31,	// (0x00050702) postcard_message_pane

0x4002,	// (0x00050bd3) call2_cli_visual_pane_t1_ParamLimits

0x4002,	// (0x00050bd3) call2_cli_visual_pane_t1

0x4822,	// (0x000513f3) postcard_message_pane_t1_ParamLimits

0x4822,	// (0x000513f3) postcard_message_pane_t1

0x480b,	// (0x000513dc) postcard_address_pane_t1_ParamLimits

0x480b,	// (0x000513dc) postcard_address_pane_t1

0x47f7,	// (0x000513c8) popup_call3_audio_in_window_ParamLimits

0x47f7,	// (0x000513c8) popup_call3_audio_in_window

0x4682,	// (0x00051253) bg_popup_call3_in_pane_ParamLimits

0x4682,	// (0x00051253) bg_popup_call3_in_pane

0x46f8,	// (0x000512c9) popup_call3_audio_in_window_g1_ParamLimits

0x46f8,	// (0x000512c9) popup_call3_audio_in_window_g1

0x4718,	// (0x000512e9) popup_call3_audio_in_window_g2_ParamLimits

0x4718,	// (0x000512e9) popup_call3_audio_in_window_g2

0x4738,	// (0x00051309) popup_call3_audio_in_window_g3_ParamLimits

0x4738,	// (0x00051309) popup_call3_audio_in_window_g3

0x0003,

0xf612,	// (0x0005c1e3) popup_call3_audio_in_window_g_ParamLimits

0xf612,	// (0x0005c1e3) popup_call3_audio_in_window_g

0x4769,	// (0x0005133a) popup_call3_audio_in_window_t1_ParamLimits

0x4769,	// (0x0005133a) popup_call3_audio_in_window_t1

0x47a7,	// (0x00051378) popup_call3_audio_in_window_t2_ParamLimits

0x47a7,	// (0x00051378) popup_call3_audio_in_window_t2

0x47e5,	// (0x000513b6) popup_call3_audio_in_window_t3_ParamLimits

0x47e5,	// (0x000513b6) popup_call3_audio_in_window_t3

0x0002,

0xf61b,	// (0x0005c1ec) popup_call3_audio_in_window_t_ParamLimits

0xf61b,	// (0x0005c1ec) popup_call3_audio_in_window_t

0xb463,	// (0x00058034) bg_popup_call3_rect_pane

0xc664,	// (0x00059235) bg_popup_call3_rect_pane_g1

0xa904,	// (0x000574d5) bg_popup_call3_rect_pane_g2

0xc66c,	// (0x0005923d) bg_popup_call3_rect_pane_g3

0xc674,	// (0x00059245) bg_popup_call3_rect_pane_g4

0xc67c,	// (0x0005924d) bg_popup_call3_rect_pane_g5

0xc684,	// (0x00059255) bg_popup_call3_rect_pane_g6

0xc68c,	// (0x0005925d) bg_popup_call3_rect_pane_g7

0x3771,	// (0x00050342) mup_visualizer_osc_pane

0xb522,	// (0x000580f3) mup_visualizer_spec_pane

0x46b2,	// (0x00051283) call3_video_qcif_pane_ParamLimits

0x46b2,	// (0x00051283) call3_video_qcif_pane

0x46c5,	// (0x00051296) call3_video_qcif_uncrop_pane_ParamLimits

0x46c5,	// (0x00051296) call3_video_qcif_uncrop_pane

0x46d3,	// (0x000512a4) call3_video_subqcif_pane_ParamLimits

0x46d3,	// (0x000512a4) call3_video_subqcif_pane

0x46e7,	// (0x000512b8) call3_video_subqcif_uncrop_pane_ParamLimits

0x46e7,	// (0x000512b8) call3_video_subqcif_uncrop_pane

0x4758,	// (0x00051329) popup_call3_audio_in_window_g4_ParamLimits

0x4758,	// (0x00051329) popup_call3_audio_in_window_g4

0x4671,	// (0x00051242) mup_spec_half_pane

0x467a,	// (0x0005124b) mup_spec_half_pane_cp

0xc8c9,	// (0x0005949a) mup_osc_middle_pane

0xc8d2,	// (0x000594a3) mup_visualizer_osc_pane_g1

0x4651,	// (0x00051222) mup_spec_bar_pane_ParamLimits

0x4651,	// (0x00051222) mup_spec_bar_pane

0xc8b6,	// (0x00059487) mup_spec_bar_pane_g1

0xc8c0,	// (0x00059491) mup_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0005c1d7) mup_spec_bar_pane_g

0x1835,	// (0x0004e406) aid_cale_week_size_cell_pane_ParamLimits

0x184f,	// (0x0004e420) bg_cale_heading_pane_ParamLimits

0xa941,	// (0x00057512) bg_cale_pane_cp01_ParamLimits

0x1867,	// (0x0004e438) cale_week_corner_pane_ParamLimits

0x1886,	// (0x0004e457) cale_week_day_heading_pane_ParamLimits

0x18a3,	// (0x0004e474) cale_week_scroll_pane_g1_ParamLimits

0x18b6,	// (0x0004e487) cale_week_scroll_pane_g2_ParamLimits

0x18ce,	// (0x0004e49f) cale_week_scroll_pane_g3_ParamLimits

0x18e6,	// (0x0004e4b7) cale_week_scroll_pane_g4_ParamLimits

0x18fe,	// (0x0004e4cf) cale_week_scroll_pane_g5_ParamLimits

0x191e,	// (0x0004e4ef) cale_week_scroll_pane_g6_ParamLimits

0x193e,	// (0x0004e50f) cale_week_scroll_pane_g7_ParamLimits

0x195e,	// (0x0004e52f) cale_week_scroll_pane_g8_ParamLimits

0x1982,	// (0x0004e553) cale_week_scroll_pane_g9_ParamLimits

0x199a,	// (0x0004e56b) cale_week_scroll_pane_g10_ParamLimits

0x19b2,	// (0x0004e583) cale_week_scroll_pane_g11_ParamLimits

0x19ca,	// (0x0004e59b) cale_week_scroll_pane_g12_ParamLimits

0x19e2,	// (0x0004e5b3) cale_week_scroll_pane_g13_ParamLimits

0x19e2,	// (0x0004e5b3) cale_week_scroll_pane_g14_ParamLimits

0x19e2,	// (0x0004e5b3) cale_week_scroll_pane_g15_ParamLimits

0xf1ac,	// (0x0005bd7d) cale_week_scroll_pane_g_ParamLimits

0x1a1e,	// (0x0004e5ef) cale_week_time_pane_ParamLimits

0x1a42,	// (0x0004e613) grid_cale_week_pane_ParamLimits

0xa95f,	// (0x00057530) listscroll_cale_week_pane_t1

0xa971,	// (0x00057542) scroll_pane_cp08_ParamLimits

0x26f6,	// (0x0004f2c7) cale_month_corner_pane_ParamLimits

0xad13,	// (0x000578e4) cale_month_pane_t1

0x2afe,	// (0x0004f6cf) cale_month_week_pane_ParamLimits

0x328c,	// (0x0004fe5d) popup_call_status_window_g1_ParamLimits

0x32a0,	// (0x0004fe71) popup_call_status_window_g2_ParamLimits

0x32b4,	// (0x0004fe85) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x0005bf27) popup_call_status_window_g_ParamLimits

0xb0c3,	// (0x00057c94) aid_call2_pane

0x03fa,	// (0x0004cfcb) msg_header_pane_g1

0x3b1f,	// (0x000506f0) postcard_address2_pane_ParamLimits

0x3b1f,	// (0x000506f0) postcard_address2_pane

0x3b31,	// (0x00050702) postcard_message2_pane_ParamLimits

0x3b31,	// (0x00050702) postcard_message2_pane

0x4603,	// (0x000511d4) message2_row_pane_ParamLimits

0x4603,	// (0x000511d4) message2_row_pane

0x461f,	// (0x000511f0) address2_row_pane_ParamLimits

0x461f,	// (0x000511f0) address2_row_pane

0xc884,	// (0x00059455) postcard_message2_row_pane_g1

0xc88c,	// (0x0005945d) postcard_message2_row_pane_t1

0xc884,	// (0x00059455) address2_row_pane_g1

0xc88c,	// (0x0005945d) address2_row_pane_t1

0x1e35,	// (0x0004ea06) aid_size_cell_vorec

0xa503,	// (0x000570d4) main_rss_pane

0x4632,	// (0x00051203) rss_list_single_pane_ParamLimits

0x4632,	// (0x00051203) rss_list_single_pane

0xc89a,	// (0x0005946b) rss_list_single_pane_t1

0xc8a8,	// (0x00059479) rss_list_single_pane_t2

0x0001,

0xf601,	// (0x0005c1d2) rss_list_single_pane_t

0xa503,	// (0x000570d4) main_camera2_pane

0xa503,	// (0x000570d4) main_video2_pane

0x489b,	// (0x0005146c) cams_zoom_pane_cp2_ParamLimits

0x489b,	// (0x0005146c) cams_zoom_pane_cp2

0x48bb,	// (0x0005148c) image2_vga_pane_ParamLimits

0x48bb,	// (0x0005148c) image2_vga_pane

0x490c,	// (0x000514dd) main_camera2_pane_g1_ParamLimits

0x490c,	// (0x000514dd) main_camera2_pane_g1

0x492c,	// (0x000514fd) main_camera2_pane_g2_ParamLimits

0x492c,	// (0x000514fd) main_camera2_pane_g2

0x494c,	// (0x0005151d) main_camera2_pane_g3_ParamLimits

0x494c,	// (0x0005151d) main_camera2_pane_g3

0x496c,	// (0x0005153d) main_camera2_pane_g4_ParamLimits

0x496c,	// (0x0005153d) main_camera2_pane_g4

0x498c,	// (0x0005155d) main_camera2_pane_g5_ParamLimits

0x498c,	// (0x0005155d) main_camera2_pane_g5

0x49ac,	// (0x0005157d) main_camera2_pane_g6_ParamLimits

0x49ac,	// (0x0005157d) main_camera2_pane_g6

0x49cc,	// (0x0005159d) main_camera2_pane_g7_ParamLimits

0x49cc,	// (0x0005159d) main_camera2_pane_g7

0x49ec,	// (0x000515bd) main_camera2_pane_g8_ParamLimits

0x49ec,	// (0x000515bd) main_camera2_pane_g8

0x0008,

0xf622,	// (0x0005c1f3) main_camera2_pane_g_ParamLimits

0xf622,	// (0x0005c1f3) main_camera2_pane_g

0x4a2c,	// (0x000515fd) main_camera2_pane_t1_ParamLimits

0x4a2c,	// (0x000515fd) main_camera2_pane_t1

0x4a61,	// (0x00051632) main_camera2_pane_t2_ParamLimits

0x4a61,	// (0x00051632) main_camera2_pane_t2

0x4a87,	// (0x00051658) main_camera2_pane_t3_ParamLimits

0x4a87,	// (0x00051658) main_camera2_pane_t3

0x4ae5,	// (0x000516b6) main_camera2_pane_t4_ParamLimits

0x4ae5,	// (0x000516b6) main_camera2_pane_t4

0x0006,

0xf635,	// (0x0005c206) main_camera2_pane_t_ParamLimits

0xf635,	// (0x0005c206) main_camera2_pane_t

0x4b77,	// (0x00051748) cams_zoom_pane_cp4_ParamLimits

0x4b77,	// (0x00051748) cams_zoom_pane_cp4

0x4b8d,	// (0x0005175e) image2_cif_pane_ParamLimits

0x4b8d,	// (0x0005175e) image2_cif_pane

0x4bb8,	// (0x00051789) image2_subqcif_pane_ParamLimits

0x4bb8,	// (0x00051789) image2_subqcif_pane

0x4bd2,	// (0x000517a3) main_video2_pane_g1_ParamLimits

0x4bd2,	// (0x000517a3) main_video2_pane_g1

0x4bec,	// (0x000517bd) main_video2_pane_g2_ParamLimits

0x4bec,	// (0x000517bd) main_video2_pane_g2

0x4c02,	// (0x000517d3) main_video2_pane_g3_ParamLimits

0x4c02,	// (0x000517d3) main_video2_pane_g3

0x4c18,	// (0x000517e9) main_video2_pane_g4_ParamLimits

0x4c18,	// (0x000517e9) main_video2_pane_g4

0x4c2e,	// (0x000517ff) main_video2_pane_g5_ParamLimits

0x4c2e,	// (0x000517ff) main_video2_pane_g5

0x4c44,	// (0x00051815) main_video2_pane_g6_ParamLimits

0x4c44,	// (0x00051815) main_video2_pane_g6

0x0005,

0xf644,	// (0x0005c215) main_video2_pane_g_ParamLimits

0xf644,	// (0x0005c215) main_video2_pane_g

0x4c5e,	// (0x0005182f) main_video2_pane_t1_ParamLimits

0x4c5e,	// (0x0005182f) main_video2_pane_t1

0x4c82,	// (0x00051853) main_video2_pane_t2_ParamLimits

0x4c82,	// (0x00051853) main_video2_pane_t2

0x4cd0,	// (0x000518a1) main_video2_pane_t3_ParamLimits

0x4cd0,	// (0x000518a1) main_video2_pane_t3

0x0002,

0xf651,	// (0x0005c222) main_video2_pane_t_ParamLimits

0xf651,	// (0x0005c222) main_video2_pane_t

0x414f,	// (0x00050d20) call_muted_g2

0x0001,

0xf5f3,	// (0x0005c1c4) call_muted_g

0xa503,	// (0x000570d4) main_mup2_pane

0x4d14,	// (0x000518e5) main_mup2_pane_g1_ParamLimits

0x4d14,	// (0x000518e5) main_mup2_pane_g1

0x4d20,	// (0x000518f1) main_mup2_pane_g2_ParamLimits

0x4d20,	// (0x000518f1) main_mup2_pane_g2

0x9e33,	// (0x00056a04) main_mup_pane_g13_cp1

0x9e3b,	// (0x00056a0c) mup_volume_pane_cp1

0x4d3c,	// (0x0005190d) main_mup2_pane_g4_ParamLimits

0x4d3c,	// (0x0005190d) main_mup2_pane_g4

0x4d4e,	// (0x0005191f) main_mup2_pane_g5_ParamLimits

0x4d4e,	// (0x0005191f) main_mup2_pane_g5

0x4d60,	// (0x00051931) main_mup2_pane_g6_ParamLimits

0x4d60,	// (0x00051931) main_mup2_pane_g6

0x4d72,	// (0x00051943) main_mup2_pane_g7_ParamLimits

0x4d72,	// (0x00051943) main_mup2_pane_g7

0x0006,

0xf658,	// (0x0005c229) main_mup2_pane_g_ParamLimits

0xf658,	// (0x0005c229) main_mup2_pane_g

0x4d8a,	// (0x0005195b) main_mup2_pane_t1_ParamLimits

0x4d8a,	// (0x0005195b) main_mup2_pane_t1

0x4da0,	// (0x00051971) main_mup2_pane_t2_ParamLimits

0x4da0,	// (0x00051971) main_mup2_pane_t2

0x4db6,	// (0x00051987) main_mup2_pane_t3_ParamLimits

0x4db6,	// (0x00051987) main_mup2_pane_t3

0x4dcc,	// (0x0005199d) main_mup2_pane_t4_ParamLimits

0x4dcc,	// (0x0005199d) main_mup2_pane_t4

0x4de4,	// (0x000519b5) main_mup2_pane_t5_ParamLimits

0x4de4,	// (0x000519b5) main_mup2_pane_t5

0x4dfc,	// (0x000519cd) main_mup2_pane_t6_ParamLimits

0x4dfc,	// (0x000519cd) main_mup2_pane_t6

0x0005,

0xf667,	// (0x0005c238) main_mup2_pane_t_ParamLimits

0xf667,	// (0x0005c238) main_mup2_pane_t

0x4e2c,	// (0x000519fd) mup2_visualizer_pane_ParamLimits

0x4e2c,	// (0x000519fd) mup2_visualizer_pane

0x4e5a,	// (0x00051a2b) mup_progress_pane_cp_ParamLimits

0x4e5a,	// (0x00051a2b) mup_progress_pane_cp

0x9e1e,	// (0x000569ef) mup_volume_pane_cp_ParamLimits

0x9e1e,	// (0x000569ef) mup_volume_pane_cp

0x4e6e,	// (0x00051a3f) mup2_visualizer_pane_g1_ParamLimits

0x4e6e,	// (0x00051a3f) mup2_visualizer_pane_g1

0xc909,	// (0x000594da) mup2_visualizer_pane_g2_ParamLimits

0xc909,	// (0x000594da) mup2_visualizer_pane_g2

0x4e85,	// (0x00051a56) mup2_visualizer_pane_g3_ParamLimits

0x4e85,	// (0x00051a56) mup2_visualizer_pane_g3

0x0002,

0xf674,	// (0x0005c245) mup2_visualizer_pane_g_ParamLimits

0xf674,	// (0x0005c245) mup2_visualizer_pane_g

0xb749,	// (0x0005831a) aid_size_cell_fmradio

0x4301,	// (0x00050ed2) aid_height_parent_landcape

0xab71,	// (0x00057742) wml_content_pane_cp

0xab79,	// (0x0005774a) wml_tabs_pane

0xab82,	// (0x00057753) popup_wml_miniature_window

0xab8a,	// (0x0005775b) scroll_pane_cp021

0xab9e,	// (0x0005776f) wml_content_pane_comp8

0xa503,	// (0x000570d4) bg_popup_sub_pane_cp05

0xc927,	// (0x000594f8) popup_wml_miniature_window_g1

0xc92f,	// (0x00059500) wml_miniature_view_pane

0x4e91,	// (0x00051a62) aid_size_wml_view

0x4e99,	// (0x00051a6a) wml_miniature_view_pane_g1

0x4ea2,	// (0x00051a73) wml_miniature_view_pane_g2

0x4eab,	// (0x00051a7c) wml_miniature_view_pane_g3

0x4eb3,	// (0x00051a84) wml_miniature_view_pane_g4

0x4ebb,	// (0x00051a8c) wml_miniature_view_pane_g5

0x4ec3,	// (0x00051a94) wml_miniature_view_pane_g6

0x4ecb,	// (0x00051a9c) wml_miniature_view_pane_g7

0x4ed3,	// (0x00051aa4) wml_miniature_view_pane_g8

0x0007,

0xf67b,	// (0x0005c24c) wml_miniature_view_pane_g

0xc937,	// (0x00059508) background_graphic_ParamLimits

0xc937,	// (0x00059508) background_graphic

0xc943,	// (0x00059514) wml_tabs_2_pane

0xc94c,	// (0x0005951d) wml_tabs_3_pane_ParamLimits

0xc94c,	// (0x0005951d) wml_tabs_3_pane

0xc95e,	// (0x0005952f) wml_tabs_4_pane_ParamLimits

0xc95e,	// (0x0005952f) wml_tabs_4_pane

0xc974,	// (0x00059545) wml_tabs_5_pane_ParamLimits

0xc974,	// (0x00059545) wml_tabs_5_pane

0xc98e,	// (0x0005955f) wml_tabs_pane_g2_ParamLimits

0xc98e,	// (0x0005955f) wml_tabs_pane_g2

0xc9a2,	// (0x00059573) wml_tabs_pane_g3_ParamLimits

0xc9a2,	// (0x00059573) wml_tabs_pane_g3

0x4edb,	// (0x00051aac) wml_tabs_2_active_pane_ParamLimits

0x4edb,	// (0x00051aac) wml_tabs_2_active_pane

0x4eef,	// (0x00051ac0) wml_tabs_2_passive_pane_ParamLimits

0x4eef,	// (0x00051ac0) wml_tabs_2_passive_pane

0x4f03,	// (0x00051ad4) wml_tabs_3_active_pane_cp_ParamLimits

0x4f03,	// (0x00051ad4) wml_tabs_3_active_pane_cp

0x4f18,	// (0x00051ae9) wml_tabs_3_passive_pane_ParamLimits

0x4f18,	// (0x00051ae9) wml_tabs_3_passive_pane

0x4f2b,	// (0x00051afc) wml_tabs_3_passive_pane_cp_ParamLimits

0x4f2b,	// (0x00051afc) wml_tabs_3_passive_pane_cp

0x4f42,	// (0x00051b13) tabs_4_active_pane

0x4f4a,	// (0x00051b1b) tabs_4_passive_pane

0x4f54,	// (0x00051b25) tabs_4_passive_pane_cp

0x4f5c,	// (0x00051b2d) tabs_4_passive_pane_cp2

0x401c,	// (0x00050bed) aid_height_text

0x3747,	// (0x00050318) mup_volume_cont_pane_ParamLimits

0x3747,	// (0x00050318) mup_volume_cont_pane

0x1421,	// (0x0004dff2) aid_size_cell_pinb

0x142b,	// (0x0004dffc) aid_size_list_pinb

0x4e46,	// (0x00051a17) mup2_volume_cont_pane_ParamLimits

0x4e46,	// (0x00051a17) mup2_volume_cont_pane

0x9e0a,	// (0x000569db) mup2_volume_cont_pane_g1_ParamLimits

0x9e0a,	// (0x000569db) mup2_volume_cont_pane_g1

0x10d4,	// (0x0004dca5) aid_size_cell_touch_ParamLimits

0x10d4,	// (0x0004dca5) aid_size_cell_touch

0x1311,	// (0x0004dee2) touch_pane_ParamLimits

0x1311,	// (0x0004dee2) touch_pane

0x977d,	// (0x0005634e) main_rss2_pane

0xc9bf,	// (0x00059590) listscroll_rss2_pane

0xc9c8,	// (0x00059599) rss2_navigation_pane

0xc9d0,	// (0x000595a1) list_rss2_pane

0xb222,	// (0x00057df3) scroll_pane_cp22

0xc9d8,	// (0x000595a9) rss2_navigation_pane_g1

0xc9e1,	// (0x000595b2) rss2_navigation_pane_g2

0xc9e9,	// (0x000595ba) rss2_navigation_pane_g3

0x0002,

0xf68c,	// (0x0005c25d) rss2_navigation_pane_g

0xc9f1,	// (0x000595c2) rss2_navigation_pane_t1

0x4f66,	// (0x00051b37) rss2_list_single_pane_ParamLimits

0x4f66,	// (0x00051b37) rss2_list_single_pane

0xc9ff,	// (0x000595d0) rss2_list_single_pane_t2

0xca0d,	// (0x000595de) rss2_list_single_pane_t3_ParamLimits

0xca0d,	// (0x000595de) rss2_list_single_pane_t3

0xca2a,	// (0x000595fb) rss2_list_single_pane_t4

0x3171,	// (0x0004fd42) smil_status_pane_g1

0xa4c6,	// (0x00057097) main_image2_pane_ParamLimits

0xa4c6,	// (0x00057097) main_image2_pane

0x4a0c,	// (0x000515dd) main_camera2_pane_g9_ParamLimits

0x4a0c,	// (0x000515dd) main_camera2_pane_g9

0x4b3a,	// (0x0005170b) main_camera2_pane_t5_ParamLimits

0x4b3a,	// (0x0005170b) main_camera2_pane_t5

0x9dda,	// (0x000569ab) main_camera2_pane_t6_ParamLimits

0x9dda,	// (0x000569ab) main_camera2_pane_t6

0x4f7b,	// (0x00051b4c) main_image2_pane_g1_ParamLimits

0x4f7b,	// (0x00051b4c) main_image2_pane_g1

0x3d58,	// (0x00050929) smil2_video_pane_ParamLimits

0x3d58,	// (0x00050929) smil2_video_pane

0x110c,	// (0x0004dcdd) aid_zoom_text_primary_cp

0x97db,	// (0x000563ac) popup_preview_fixed_window

0xaada,	// (0x000576ab) im_reading_pane_g1

0x4883,	// (0x00051454) cams2_bc_adjust_pane_cp_ParamLimits

0x4883,	// (0x00051454) cams2_bc_adjust_pane_cp

0x4b69,	// (0x0005173a) cams2_bc_adjust_pane_ParamLimits

0x4b69,	// (0x0005173a) cams2_bc_adjust_pane

0x9e43,	// (0x00056a14) cams2_bc_adjust_pane_g1

0x9e4b,	// (0x00056a1c) cams2_slider_pane

0x9e54,	// (0x00056a25) cams2_slider_pane_g1

0x9e5d,	// (0x00056a2e) cams2_slider_pane_g2

0x0006,

0xf693,	// (0x0005c264) cams2_slider_pane_g

0x1519,	// (0x0004e0ea) calc_display_pane_ParamLimits

0x1541,	// (0x0004e112) calc_paper_pane_ParamLimits

0x1564,	// (0x0004e135) grid_calc_pane_ParamLimits

0x9cf3,	// (0x000568c4) popup_clock_digital_window_t1_ParamLimits

0xb6e6,	// (0x000582b7) main_image_pane_t1

0x14fb,	// (0x0004e0cc) aid_size_cell_calc_ParamLimits

0x14fb,	// (0x0004e0cc) aid_size_cell_calc

0x4347,	// (0x00050f18) popup_blid_sat_info2_window_ParamLimits

0x4347,	// (0x00050f18) popup_blid_sat_info2_window

0xca40,	// (0x00059611) aid_size_cell_blid

0xca48,	// (0x00059619) bg_popup_window_pane_cp07

0xca6b,	// (0x0005963c) grid_popup_blid_pane

0xca75,	// (0x00059646) heading_pane_cp05_ParamLimits

0xca75,	// (0x00059646) heading_pane_cp05

0xcb3f,	// (0x00059710) cell_popup_blid_pane_ParamLimits

0xcb3f,	// (0x00059710) cell_popup_blid_pane

0xcb63,	// (0x00059734) cell_popup_blid_pane_g1

0xcb6b,	// (0x0005973c) cell_popup_blid_pane_t1

0x4e16,	// (0x000519e7) mup2_indicator_pane_ParamLimits

0x4e16,	// (0x000519e7) mup2_indicator_pane

0xb463,	// (0x00058034) mup2_visualizer_osc_pane

0xc915,	// (0x000594e6) mup2_visualizer_spec_pane_ParamLimits

0xc915,	// (0x000594e6) mup2_visualizer_spec_pane

0x4f91,	// (0x00051b62) mup2_spec_half_pane

0x4f9a,	// (0x00051b6b) mup2_spec_half_pane_cp

0x4fa2,	// (0x00051b73) mup2_spec_bar_pane_ParamLimits

0x4fa2,	// (0x00051b73) mup2_spec_bar_pane

0xc8b6,	// (0x00059487) mup2_spec_bar_pane_g1

0xc8c0,	// (0x00059491) mup2_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0005c1d7) mup2_spec_bar_pane_g

0x4fc2,	// (0x00051b93) mup2_osc_middle_pane

0xc8d2,	// (0x000594a3) mup2_visualizer_osc_pane_g1

0x9805,	// (0x000563d6) popup_number_entry_window_t1_ParamLimits

0x9818,	// (0x000563e9) popup_number_entry_window_t2_ParamLimits

0x982a,	// (0x000563fb) popup_number_entry_window_t3_ParamLimits

0x1363,	// (0x0004df34) popup_number_entry_window_t5_ParamLimits

0x1363,	// (0x0004df34) popup_number_entry_window_t5

0xf0c6,	// (0x0005bc97) popup_number_entry_window_t_ParamLimits

0x983c,	// (0x0005640d) text_title_cp2_ParamLimits

0x9d32,	// (0x00056903) aid_hotspot_pointer_text2_pane

0x9d58,	// (0x00056929) main_viewer_pane_g9_ParamLimits

0x9d58,	// (0x00056929) main_viewer_pane_g9

0xad13,	// (0x000578e4) cale_month_pane_t1_ParamLimits

0xad50,	// (0x00057921) bg_cale_pane_ParamLimits

0xad68,	// (0x00057939) list_cale_pane_ParamLimits

0xad79,	// (0x0005794a) listscroll_cale_day_pane_t1

0xad8b,	// (0x0005795c) scroll_pane_cp09_ParamLimits

0x3779,	// (0x0005034a) main_mup_eq_pane_t1_ParamLimits

0x3779,	// (0x0005034a) main_mup_eq_pane_t1

0x3793,	// (0x00050364) main_mup_eq_pane_t2_ParamLimits

0x3793,	// (0x00050364) main_mup_eq_pane_t2

0x37ad,	// (0x0005037e) main_mup_eq_pane_t3_ParamLimits

0x37ad,	// (0x0005037e) main_mup_eq_pane_t3

0x37c9,	// (0x0005039a) main_mup_eq_pane_t4_ParamLimits

0x37c9,	// (0x0005039a) main_mup_eq_pane_t4

0x37e5,	// (0x000503b6) main_mup_eq_pane_t5_ParamLimits

0x37e5,	// (0x000503b6) main_mup_eq_pane_t5

0x3801,	// (0x000503d2) main_mup_eq_pane_t6_ParamLimits

0x3801,	// (0x000503d2) main_mup_eq_pane_t6

0x3815,	// (0x000503e6) main_mup_eq_pane_t7_ParamLimits

0x3815,	// (0x000503e6) main_mup_eq_pane_t7

0x3829,	// (0x000503fa) main_mup_eq_pane_t8_ParamLimits

0x3829,	// (0x000503fa) main_mup_eq_pane_t8

0x383d,	// (0x0005040e) main_mup_eq_pane_t9_ParamLimits

0x383d,	// (0x0005040e) main_mup_eq_pane_t9

0x3857,	// (0x00050428) main_mup_eq_pane_t10_ParamLimits

0x3857,	// (0x00050428) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x0005c026) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x0005c026) main_mup_eq_pane_t

0x3906,	// (0x000504d7) mup_equalizer_pane_cp5_ParamLimits

0x391a,	// (0x000504eb) mup_equalizer_pane_cp6_ParamLimits

0x392e,	// (0x000504ff) mup_equalizer_pane_cp7_ParamLimits

0x977d,	// (0x0005634e) main_gallery_pane

0xc8db,	// (0x000594ac) smil2_volume_pane

0xc8e3,	// (0x000594b4) smil_status_volume_pane_g1_ParamLimits

0xc8f6,	// (0x000594c7) smil_status_volume_pane_g2_ParamLimits

0x9db8,	// (0x00056989) smil_status_volume_pane_g3_ParamLimits

0xf60b,	// (0x0005c1dc) smil_status_volume_pane_g_ParamLimits

0xca48,	// (0x00059619) bg_popup_window_pane_cp07_ParamLimits

0xca56,	// (0x00059627) blid_firmament_pane

0x4fcb,	// (0x00051b9c) aid_size_cell_gallery_ParamLimits

0x4fcb,	// (0x00051b9c) aid_size_cell_gallery

0x4fe1,	// (0x00051bb2) grid_gallery_pane_ParamLimits

0x4fe1,	// (0x00051bb2) grid_gallery_pane

0x4ffa,	// (0x00051bcb) cell_gallery_pane_ParamLimits

0x4ffa,	// (0x00051bcb) cell_gallery_pane

0xcb79,	// (0x0005974a) bg_cell_gallery_focus_pane_ParamLimits

0xcb79,	// (0x0005974a) bg_cell_gallery_focus_pane

0xcb8b,	// (0x0005975c) cell_gallery_pane_g1_ParamLimits

0xcb8b,	// (0x0005975c) cell_gallery_pane_g1

0x5043,	// (0x00051c14) cell_gallery_pane_g2_ParamLimits

0x5043,	// (0x00051c14) cell_gallery_pane_g2

0x5050,	// (0x00051c21) cell_gallery_pane_g3_ParamLimits

0x5050,	// (0x00051c21) cell_gallery_pane_g3

0xcb97,	// (0x00059768) cell_gallery_pane_g4_ParamLimits

0xcb97,	// (0x00059768) cell_gallery_pane_g4

0x0003,

0xf6b9,	// (0x0005c28a) cell_gallery_pane_g_ParamLimits

0xf6b9,	// (0x0005c28a) cell_gallery_pane_g

0xcba3,	// (0x00059774) bg_cell_gallery_focus_pane_g1

0xcbab,	// (0x0005977c) bg_cell_gallery_focus_pane_g2

0xcbb3,	// (0x00059784) bg_cell_gallery_focus_pane_g3

0xcbbb,	// (0x0005978c) bg_cell_gallery_focus_pane_g4

0xcbc3,	// (0x00059794) bg_cell_gallery_focus_pane_g5

0xcbcb,	// (0x0005979c) bg_cell_gallery_focus_pane_g6

0xcbd3,	// (0x000597a4) bg_cell_gallery_focus_pane_g7

0xcbdb,	// (0x000597ac) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c2,	// (0x0005c293) bg_cell_gallery_focus_pane_g

0xcbe3,	// (0x000597b4) aid_firma_cardinal

0xcbf7,	// (0x000597c8) blid_firmament_pane_t1

0xcc0e,	// (0x000597df) blid_firmament_pane_t2

0xcc25,	// (0x000597f6) blid_firmament_pane_t3

0xcc3c,	// (0x0005980d) blid_firmament_pane_t4

0x0003,

0xf6d3,	// (0x0005c2a4) blid_firmament_pane_t

0xcc53,	// (0x00059824) blid_sat_info_pane

0xcc63,	// (0x00059834) blid_sat_info_pane_g1

0xcc63,	// (0x00059834) blid_sat_info_pane_g2

0x0001,

0xf6dc,	// (0x0005c2ad) blid_sat_info_pane_g

0xcc6d,	// (0x0005983e) blid_sat_info_pane_t1

0xcc7b,	// (0x0005984c) smil2_volume_content_pane

0xcc84,	// (0x00059855) smil2_volume_pane_g1

0xcc8c,	// (0x0005985d) smil2_volume_content_pane_g1

0xcc95,	// (0x00059866) smil2_volume_content_pane_g2

0xcc9e,	// (0x0005986f) smil2_volume_content_pane_g3

0xcca7,	// (0x00059878) smil2_volume_content_pane_g4

0xccb0,	// (0x00059881) smil2_volume_content_pane_g5

0xccb9,	// (0x0005988a) smil2_volume_content_pane_g6

0xccc2,	// (0x00059893) smil2_volume_content_pane_g7

0xcccb,	// (0x0005989c) smil2_volume_content_pane_g8

0xccd4,	// (0x000598a5) smil2_volume_content_pane_g9

0xccdd,	// (0x000598ae) smil2_volume_content_pane_g10

0x0009,

0xf6e1,	// (0x0005c2b2) smil2_volume_content_pane_g

0x1af6,	// (0x0004e6c7) cale_week_day_heading_pane_t1_ParamLimits

0x1b3b,	// (0x0004e70c) cale_week_day_heading_pane_t2_ParamLimits

0x1b85,	// (0x0004e756) cale_week_day_heading_pane_t3_ParamLimits

0x1bcf,	// (0x0004e7a0) cale_week_day_heading_pane_t4_ParamLimits

0x1c19,	// (0x0004e7ea) cale_week_day_heading_pane_t5_ParamLimits

0x1c6b,	// (0x0004e83c) cale_week_day_heading_pane_t6_ParamLimits

0x1cbd,	// (0x0004e88e) cale_week_day_heading_pane_t7_ParamLimits

0xf1cd,	// (0x0005bd9e) cale_week_day_heading_pane_t_ParamLimits

0xa98e,	// (0x0005755f) bg_cale_side_pane_ParamLimits

0x1d02,	// (0x0004e8d3) cale_week_time_pane_t1_ParamLimits

0x1d1c,	// (0x0004e8ed) cale_week_time_pane_t2_ParamLimits

0x1d36,	// (0x0004e907) cale_week_time_pane_t3_ParamLimits

0x1d50,	// (0x0004e921) cale_week_time_pane_t4_ParamLimits

0x1d6a,	// (0x0004e93b) cale_week_time_pane_t5_ParamLimits

0x1d84,	// (0x0004e955) cale_week_time_pane_t6_ParamLimits

0x1d9e,	// (0x0004e96f) cale_week_time_pane_t7_ParamLimits

0x1db8,	// (0x0004e989) cale_week_time_pane_t8_ParamLimits

0xf1dc,	// (0x0005bdad) cale_week_time_pane_t_ParamLimits

0x1dd8,	// (0x0004e9a9) cell_cale_week_pane_g2_ParamLimits

0xa98e,	// (0x0005755f) bg_cale_side_pane_cp01_ParamLimits

0x2f88,	// (0x0004fb59) cale_month_week_pane_t1_ParamLimits

0x2fa1,	// (0x0004fb72) cale_month_week_pane_t2_ParamLimits

0x2fba,	// (0x0004fb8b) cale_month_week_pane_t3_ParamLimits

0x2fd3,	// (0x0004fba4) cale_month_week_pane_t4_ParamLimits

0x2fec,	// (0x0004fbbd) cale_month_week_pane_t5_ParamLimits

0x3005,	// (0x0004fbd6) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x0005be86) cale_month_week_pane_t_ParamLimits

0x9c6f,	// (0x00056840) cell_cale_month_pane_g1_ParamLimits

0x977d,	// (0x0005634e) main_cale_event_viewer_pane

0x977d,	// (0x0005634e) listscroll_cale_event_viewer_pane

0xcce6,	// (0x000598b7) list_cale_ev_pane

0xccee,	// (0x000598bf) scroll_pane_cp023

0xcd06,	// (0x000598d7) field_cale_ev_pane_ParamLimits

0xcd06,	// (0x000598d7) field_cale_ev_pane

0xcd24,	// (0x000598f5) field_cale_ev_content_pane_ParamLimits

0xcd24,	// (0x000598f5) field_cale_ev_content_pane

0xcd30,	// (0x00059901) field_cale_ev_pane_g1_ParamLimits

0xcd30,	// (0x00059901) field_cale_ev_pane_g1

0xcd3c,	// (0x0005990d) field_cale_ev_pane_g2_ParamLimits

0xcd3c,	// (0x0005990d) field_cale_ev_pane_g2

0xcd54,	// (0x00059925) field_cale_ev_pane_g3_ParamLimits

0xcd54,	// (0x00059925) field_cale_ev_pane_g3

0x0002,

0xf6f6,	// (0x0005c2c7) field_cale_ev_pane_g_ParamLimits

0xf6f6,	// (0x0005c2c7) field_cale_ev_pane_g

0xcd6c,	// (0x0005993d) field_cale_ev_pane_t1_ParamLimits

0xcd6c,	// (0x0005993d) field_cale_ev_pane_t1

0xcd83,	// (0x00059954) field_cale_ev_content_pane_t1_ParamLimits

0xcd83,	// (0x00059954) field_cale_ev_content_pane_t1

0xb5cc,	// (0x0005819d) bg_button_pane_cp01

0x1823,	// (0x0004e3f4) listscroll_cale_week_pane_ParamLimits

0xa938,	// (0x00057509) popup_toolbar_window_cp01

0xa95f,	// (0x00057530) listscroll_cale_week_pane_t1_ParamLimits

0x1823,	// (0x0004e3f4) listscroll_cale_day_pane_ParamLimits

0xa938,	// (0x00057509) popup_toolbar_window_cp02

0xad79,	// (0x0005794a) listscroll_cale_day_pane_t1_ParamLimits

0x1823,	// (0x0004e3f4) main_cale_month_pane_ParamLimits

0x9da3,	// (0x00056974) popup_toolbar_window_cp03_ParamLimits

0x9da3,	// (0x00056974) popup_toolbar_window_cp03

0x3c20,	// (0x000507f1) main_image_pane_g2_ParamLimits

0x3c20,	// (0x000507f1) main_image_pane_g2

0x3c31,	// (0x00050802) main_image_pane_g3_ParamLimits

0x3c31,	// (0x00050802) main_image_pane_g3

0x0002,

0xf4e7,	// (0x0005c0b8) main_image_pane_g_ParamLimits

0xf4e7,	// (0x0005c0b8) main_image_pane_g

0xb6e6,	// (0x000582b7) main_image_pane_t1_ParamLimits

0x3c42,	// (0x00050813) main_image_pane_t2_ParamLimits

0x3c42,	// (0x00050813) main_image_pane_t2

0x3c54,	// (0x00050825) main_image_pane_t3_ParamLimits

0x3c54,	// (0x00050825) main_image_pane_t3

0x3c7c,	// (0x0005084d) main_image_pane_t4_ParamLimits

0x3c7c,	// (0x0005084d) main_image_pane_t4

0x0003,

0xf4ee,	// (0x0005c0bf) main_image_pane_t_ParamLimits

0xf4ee,	// (0x0005c0bf) main_image_pane_t

0x3c9c,	// (0x0005086d) popup_image_details_window_cp01

0x3ca6,	// (0x00050877) popup_toobar_trans_pane_cp01_ParamLimits

0x3ca6,	// (0x00050877) popup_toobar_trans_pane_cp01

0x4426,	// (0x00050ff7) popup_image_details_window_ParamLimits

0x4426,	// (0x00050ff7) popup_image_details_window

0x9d76,	// (0x00056947) popup_image_focus_window

0x483d,	// (0x0005140e) camera2_autofocus_pane_ParamLimits

0x483d,	// (0x0005140e) camera2_autofocus_pane

0x977d,	// (0x0005634e) bg_popup_sub_pane_cp06

0xcda1,	// (0x00059972) popup_image_focus_window_g1

0xcda9,	// (0x0005997a) popup_image_focus_window_g2

0xcdb1,	// (0x00059982) popup_image_focus_window_g3

0xcdb9,	// (0x0005998a) popup_image_focus_window_g4

0x0003,

0xf6fd,	// (0x0005c2ce) popup_image_focus_window_g

0xcdc1,	// (0x00059992) popup_image_focus_window_t1

0xcdcf,	// (0x000599a0) popup_image_focus_window_t2

0xcddf,	// (0x000599b0) popup_image_focus_window_t3

0x0002,

0xf706,	// (0x0005c2d7) popup_image_focus_window_t

0xcded,	// (0x000599be) camera2_autofocus_pane_g1

0xa4c6,	// (0x00057097) bg_tb_trans_pane_cp01

0xcdfb,	// (0x000599cc) popup_image_details_window_g1

0xce0e,	// (0x000599df) popup_image_details_window_g2

0x0002,

0xf718,	// (0x0005c2e9) popup_image_details_window_g

0xce37,	// (0x00059a08) popup_image_details_window_t1

0xce49,	// (0x00059a1a) popup_image_details_window_t2

0xce62,	// (0x00059a33) popup_image_details_window_t3

0xce76,	// (0x00059a47) popup_image_details_window_t4

0xce91,	// (0x00059a62) popup_image_details_window_t5

0x0004,

0xf71f,	// (0x0005c2f0) popup_image_details_window_t

0xa80f,	// (0x000573e0) bg_calc_paper_pane_ParamLimits

0x977d,	// (0x0005634e) grid_highlight_pane_cp013

0x9bd1,	// (0x000567a2) list_calc_pane_ParamLimits

0x9be3,	// (0x000567b4) scroll_pane_cp024

0xa823,	// (0x000573f4) bg_calc_display_pane_ParamLimits

0x1662,	// (0x0004e233) calc_display_pane_t1_ParamLimits

0x1674,	// (0x0004e245) calc_display_pane_t2_ParamLimits

0x9beb,	// (0x000567bc) calc_display_pane_t3_ParamLimits

0xf14d,	// (0x0005bd1e) calc_display_pane_t_ParamLimits

0x172e,	// (0x0004e2ff) cell_calc_pane_g2

0x0001,

0xf16a,	// (0x0005bd3b) cell_calc_pane_g

0x1737,	// (0x0004e308) cell_calc_pane_t1

0xa882,	// (0x00057453) grid_highlight_pane_cp02_ParamLimits

0xa898,	// (0x00057469) toolbar_button_pane_cp01_ParamLimits

0xa898,	// (0x00057469) toolbar_button_pane_cp01

0xb72b,	// (0x000582fc) temp_image_control_pane_ParamLimits

0xb72b,	// (0x000582fc) temp_image_control_pane

0xa4c6,	// (0x00057097) main_mp3_pane

0xceab,	// (0x00059a7c) temp_image_control_pane_g1_ParamLimits

0xceab,	// (0x00059a7c) temp_image_control_pane_g1

0xceb9,	// (0x00059a8a) temp_image_control_pane_g2_ParamLimits

0xceb9,	// (0x00059a8a) temp_image_control_pane_g2

0xcecb,	// (0x00059a9c) temp_image_control_pane_g3_ParamLimits

0xcecb,	// (0x00059a9c) temp_image_control_pane_g3

0x508d,	// (0x00051c5e) temp_image_control_pane_g4_ParamLimits

0x508d,	// (0x00051c5e) temp_image_control_pane_g4

0x0003,

0xf72a,	// (0x0005c2fb) temp_image_control_pane_g_ParamLimits

0xf72a,	// (0x0005c2fb) temp_image_control_pane_g

0xceab,	// (0x00059a7c) main_mp3_pane_g1

0x50a0,	// (0x00051c71) main_mp3_pane_g2

0x0007,

0xf733,	// (0x0005c304) main_mp3_pane_g

0xcf0e,	// (0x00059adf) main_mp3_pane_t1

0xa9e9,	// (0x000575ba) main_camera_pane_g8_ParamLimits

0xa9e9,	// (0x000575ba) main_camera_pane_g8

0x20e8,	// (0x0004ecb9) main_video_pane_g7_ParamLimits

0x20e8,	// (0x0004ecb9) main_video_pane_g7

0x9df8,	// (0x000569c9) main_camera2_pane_t7_ParamLimits

0x9df8,	// (0x000569c9) main_camera2_pane_t7

0xab31,	// (0x00057702) scroll_pane_cp025_ParamLimits

0xab31,	// (0x00057702) scroll_pane_cp025

0xab45,	// (0x00057716) scroll_pane_cp026_ParamLimits

0xab45,	// (0x00057716) scroll_pane_cp026

0xab54,	// (0x00057725) wml_content_pane_ParamLimits

0x977d,	// (0x0005634e) main_touch_calib_pane

0x5174,	// (0x00051d45) main_touch_calib_pane_g1

0x5186,	// (0x00051d57) main_touch_calib_pane_g2

0x5198,	// (0x00051d69) main_touch_calib_pane_g3

0x51aa,	// (0x00051d7b) main_touch_calib_pane_g4

0x0003,

0xf751,	// (0x0005c322) main_touch_calib_pane_g

0x51bc,	// (0x00051d8d) main_touch_calib_pane_t1

0x51d6,	// (0x00051da7) main_touch_calib_pane_t2

0x0004,

0xf75a,	// (0x0005c32b) main_touch_calib_pane_t

0xb2fe,	// (0x00057ecf) mup_progress_pane_cp02

0xb333,	// (0x00057f04) navi_pane_g1

0xb3ee,	// (0x00057fbf) navi_pane_mp_t3

0xa4c6,	// (0x00057097) main_mp3_pane_ParamLimits

0x45ab,	// (0x0005117c) navi_pane_ParamLimits

0xceab,	// (0x00059a7c) main_mp3_pane_g1_ParamLimits

0x50a0,	// (0x00051c71) main_mp3_pane_g2_ParamLimits

0x50ae,	// (0x00051c7f) main_mp3_pane_g3_ParamLimits

0x50ae,	// (0x00051c7f) main_mp3_pane_g3

0x50bc,	// (0x00051c8d) main_mp3_pane_g4_ParamLimits

0x50bc,	// (0x00051c8d) main_mp3_pane_g4

0xcedb,	// (0x00059aac) main_mp3_pane_g5_ParamLimits

0xcedb,	// (0x00059aac) main_mp3_pane_g5

0xcee9,	// (0x00059aba) main_mp3_pane_g6_ParamLimits

0xcee9,	// (0x00059aba) main_mp3_pane_g6

0xcef6,	// (0x00059ac7) main_mp3_pane_g7_ParamLimits

0xcef6,	// (0x00059ac7) main_mp3_pane_g7

0xcf02,	// (0x00059ad3) main_mp3_pane_g8_ParamLimits

0xcf02,	// (0x00059ad3) main_mp3_pane_g8

0xf733,	// (0x0005c304) main_mp3_pane_g_ParamLimits

0x50c8,	// (0x00051c99) main_mp3_pane_t2

0x50d6,	// (0x00051ca7) main_mp3_pane_t3

0xcf1c,	// (0x00059aed) main_mp3_pane_t4

0xcf2a,	// (0x00059afb) main_mp3_pane_t5

0x0005,

0xf744,	// (0x0005c315) main_mp3_pane_t

0xcf38,	// (0x00059b09) mup_progress_pane_cp01

0x110c,	// (0x0004dcdd) aid_zoom_text_secondary2

0xcce6,	// (0x000598b7) list_cale_ev2_pane

0xccee,	// (0x000598bf) scroll_pane_cp023_ParamLimits

0x522c,	// (0x00051dfd) field_cale_ev2_pane_ParamLimits

0x522c,	// (0x00051dfd) field_cale_ev2_pane

0x524c,	// (0x00051e1d) field_cale_ev2_pane_g1_ParamLimits

0x524c,	// (0x00051e1d) field_cale_ev2_pane_g1

0x5258,	// (0x00051e29) field_cale_ev2_pane_g2_ParamLimits

0x5258,	// (0x00051e29) field_cale_ev2_pane_g2

0x5270,	// (0x00051e41) field_cale_ev2_pane_g3_ParamLimits

0x5270,	// (0x00051e41) field_cale_ev2_pane_g3

0x0003,

0xf765,	// (0x0005c336) field_cale_ev2_pane_g_ParamLimits

0xf765,	// (0x0005c336) field_cale_ev2_pane_g

0x044b,	// (0x0004d01c) field_cale_ev2_pane_t1_ParamLimits

0x044b,	// (0x0004d01c) field_cale_ev2_pane_t1

0x0462,	// (0x0004d033) field_cale_ev2_pane_t2_ParamLimits

0x0462,	// (0x0004d033) field_cale_ev2_pane_t2

0x0001,

0xf76e,	// (0x0005c33f) field_cale_ev2_pane_t_ParamLimits

0xf76e,	// (0x0005c33f) field_cale_ev2_pane_t

0x3ad5,	// (0x000506a6) main_postcard_pane_g5_ParamLimits

0x3ad5,	// (0x000506a6) main_postcard_pane_g5

0x3aeb,	// (0x000506bc) main_postcard_pane_g6_ParamLimits

0x3aeb,	// (0x000506bc) main_postcard_pane_g6

0x1eb4,	// (0x0004ea85) camera2_autofocus_pane_cp_ParamLimits

0x1eb4,	// (0x0004ea85) camera2_autofocus_pane_cp

0xa4c6,	// (0x00057097) main_mup3_pane

0x5294,	// (0x00051e65) main_mup3_pane_g1_ParamLimits

0x5294,	// (0x00051e65) main_mup3_pane_g1

0x52b6,	// (0x00051e87) main_mup3_pane_g2_ParamLimits

0x52b6,	// (0x00051e87) main_mup3_pane_g2

0x5334,	// (0x00051f05) main_mup3_pane_g3_ParamLimits

0x5334,	// (0x00051f05) main_mup3_pane_g3

0x537a,	// (0x00051f4b) main_mup3_pane_g4_ParamLimits

0x537a,	// (0x00051f4b) main_mup3_pane_g4

0x53c0,	// (0x00051f91) main_mup3_pane_g5_ParamLimits

0x53c0,	// (0x00051f91) main_mup3_pane_g5

0x5406,	// (0x00051fd7) main_mup3_pane_g6_ParamLimits

0x5406,	// (0x00051fd7) main_mup3_pane_g6

0xcf60,	// (0x00059b31) main_mup3_pane_g7_ParamLimits

0xcf60,	// (0x00059b31) main_mup3_pane_g7

0x0007,

0xf77e,	// (0x0005c34f) main_mup3_pane_g_ParamLimits

0xf77e,	// (0x0005c34f) main_mup3_pane_g

0x5484,	// (0x00052055) main_mup3_pane_t1_ParamLimits

0x5484,	// (0x00052055) main_mup3_pane_t1

0x54f8,	// (0x000520c9) main_mup3_pane_t2_ParamLimits

0x54f8,	// (0x000520c9) main_mup3_pane_t2

0x55cc,	// (0x0005219d) main_mup3_pane_t4_ParamLimits

0x55cc,	// (0x0005219d) main_mup3_pane_t4

0x5622,	// (0x000521f3) main_mup3_pane_t5_ParamLimits

0x5622,	// (0x000521f3) main_mup3_pane_t5

0x56de,	// (0x000522af) main_mup3_pane_t6_ParamLimits

0x56de,	// (0x000522af) main_mup3_pane_t6

0x0005,

0xf78f,	// (0x0005c360) main_mup3_pane_t_ParamLimits

0xf78f,	// (0x0005c360) main_mup3_pane_t

0x5796,	// (0x00052367) mup3_progress_pane_ParamLimits

0x5796,	// (0x00052367) mup3_progress_pane

0x582c,	// (0x000523fd) popup_mup3_control_window_ParamLimits

0x582c,	// (0x000523fd) popup_mup3_control_window

0xcf6e,	// (0x00059b3f) popup_mup3_text_window

0x585e,	// (0x0005242f) mup3_progress_pane_t1

0x587d,	// (0x0005244e) mup3_progress_pane_t2

0xcf76,	// (0x00059b47) mup3_progress_pane_t3

0x0002,

0xf79c,	// (0x0005c36d) mup3_progress_pane_t

0xcf93,	// (0x00059b64) mup_progress_pane_cp03

0x977d,	// (0x0005634e) bg_tb_trans_pane_cp04

0x589c,	// (0x0005246d) mup3_volume_pane

0x58a4,	// (0x00052475) popup_mup3_control_window_g1

0x58ad,	// (0x0005247e) mup3_volume_pane_g1

0x58b6,	// (0x00052487) mup3_volume_pane_g2

0x58bf,	// (0x00052490) mup3_volume_pane_g3

0x0002,

0xf7a3,	// (0x0005c374) mup3_volume_pane_g

0x977d,	// (0x0005634e) bg_tb_trans_pane_cp03

0xcfa3,	// (0x00059b74) popup_mup3_text_window_g1

0xcfab,	// (0x00059b7c) popup_mup3_text_window_t1

0xa86b,	// (0x0005743c) list_calc_item_pane_g1_ParamLimits

0xc9b6,	// (0x00059587) mup_volume_pane_cp_g1

0x51f0,	// (0x00051dc1) main_touch_calib_pane_t3

0x5204,	// (0x00051dd5) main_touch_calib_pane_t4

0x5218,	// (0x00051de9) main_touch_calib_pane_t5

0x9787,	// (0x00056358) aid_cell_size_toolbar2

0x978f,	// (0x00056360) aid_popup3_width_pane

0x1104,	// (0x0004dcd5) aid_zoom_text_msg_primary

0x1e8b,	// (0x0004ea5c) vorec_t7

0xa82f,	// (0x00057400) bg_calc_paper_pane_g1_ParamLimits

0xa83b,	// (0x0005740c) bg_calc_paper_pane_g2_ParamLimits

0xa847,	// (0x00057418) bg_calc_paper_pane_g3_ParamLimits

0xa853,	// (0x00057424) bg_calc_paper_pane_g4_ParamLimits

0xa85f,	// (0x00057430) bg_calc_paper_pane_g5_ParamLimits

0x16bb,	// (0x0004e28c) bg_calc_paper_pane_g6_ParamLimits

0x16ca,	// (0x0004e29b) bg_calc_paper_pane_g7_ParamLimits

0x16d9,	// (0x0004e2aa) bg_calc_paper_pane_g8_ParamLimits

0xf154,	// (0x0005bd25) bg_calc_paper_pane_g_ParamLimits

0x16ec,	// (0x0004e2bd) calc_bg_paper_pane_g9_ParamLimits

0x1fff,	// (0x0004ebd0) image_qvga_pane_ParamLimits

0x1fff,	// (0x0004ebd0) image_qvga_pane

0xa75e,	// (0x0005732f) bg_popup_sub_pane_cp04_ParamLimits

0xb662,	// (0x00058233) popup_mup_playback_window_g1_ParamLimits

0xb66e,	// (0x0005823f) popup_mup_playback_window_t1_ParamLimits

0xb683,	// (0x00058254) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x0005c0b3) popup_mup_playback_window_t_ParamLimits

0x4d30,	// (0x00051901) main_mup2_pane_g3_ParamLimits

0x4d30,	// (0x00051901) main_mup2_pane_g3

0x22f8,	// (0x0004eec9) popup_toolbar_window_cp04

0xba65,	// (0x00058636) popup_call2_audio_second_window_g3_ParamLimits

0xba65,	// (0x00058636) popup_call2_audio_second_window_g3

0xbe6f,	// (0x00058a40) popup_call2_audio_first_window_g4_ParamLimits

0xbe6f,	// (0x00058a40) popup_call2_audio_first_window_g4

0xc4ee,	// (0x000590bf) popup_call2_audio_in_window_g4_ParamLimits

0xc4ee,	// (0x000590bf) popup_call2_audio_in_window_g4

0x3c02,	// (0x000507d3) aid_area_sk_bg_cut_ParamLimits

0x3c02,	// (0x000507d3) aid_area_sk_bg_cut

0xb698,	// (0x00058269) aid_area_sk_bg_cut_2_ParamLimits

0xb698,	// (0x00058269) aid_area_sk_bg_cut_2

0x5033,	// (0x00051c04) aid_placing_details_win

0x503b,	// (0x00051c0c) aid_placing_details_win_2

0xcded,	// (0x000599be) camera2_autofocus_pane_g1_ParamLimits

0x12aa,	// (0x0004de7b) popup_fixed_preview_cale_window_ParamLimits

0x12aa,	// (0x0004de7b) popup_fixed_preview_cale_window

0xb474,	// (0x00058045) navi_slider_pane_g3

0xb47d,	// (0x0005804e) navi_slider_pane_g4

0xb486,	// (0x00058057) navi_slider_pane_g5

0xb474,	// (0x00058045) navi_slider_pane_g6

0x9d19,	// (0x000568ea) navi_slider_pane_g7

0xb599,	// (0x0005816a) mup_scale_pane_g3

0xb5a2,	// (0x00058173) mup_scale_pane_g4

0xb5ab,	// (0x0005817c) mup_scale_pane_g5

0x3942,	// (0x00050513) mup_scale_pane_g6

0x394b,	// (0x0005051c) mup_scale_pane_g7

0xb474,	// (0x00058045) cams2_slider_pane_g3

0xca38,	// (0x00059609) cams2_slider_pane_g4

0x9e66,	// (0x00056a37) cams2_slider_pane_g5

0xb474,	// (0x00058045) cams2_slider_pane_g6

0x9e6e,	// (0x00056a3f) cams2_slider_pane_g7

0xcc63,	// (0x00059834) camera2_autofocus_pane_cp_g1

0xc84f,	// (0x00059420) bg_popup_preview_window_pane_cp02_ParamLimits

0xc84f,	// (0x00059420) bg_popup_preview_window_pane_cp02

0xcfb9,	// (0x00059b8a) list_fp_cale_pane_ParamLimits

0xcfb9,	// (0x00059b8a) list_fp_cale_pane

0xcfc5,	// (0x00059b96) popup_fixed_preview_cale_window_t1_ParamLimits

0xcfc5,	// (0x00059b96) popup_fixed_preview_cale_window_t1

0x58c8,	// (0x00052499) popup_fixed_preview_cale_window_t2_ParamLimits

0x58c8,	// (0x00052499) popup_fixed_preview_cale_window_t2

0x58dd,	// (0x000524ae) popup_fixed_preview_cale_window_t3_ParamLimits

0x58dd,	// (0x000524ae) popup_fixed_preview_cale_window_t3

0x0002,

0xf7aa,	// (0x0005c37b) popup_fixed_preview_cale_window_t_ParamLimits

0xf7aa,	// (0x0005c37b) popup_fixed_preview_cale_window_t

0x58f2,	// (0x000524c3) list_single_fp_cale_pane_ParamLimits

0x58f2,	// (0x000524c3) list_single_fp_cale_pane

0xcfe3,	// (0x00059bb4) list_single_fp_cale_pane_g1_ParamLimits

0xcfe3,	// (0x00059bb4) list_single_fp_cale_pane_g1

0xcfef,	// (0x00059bc0) list_single_fp_cale_pane_g2_ParamLimits

0xcfef,	// (0x00059bc0) list_single_fp_cale_pane_g2

0x0002,

0xf7b1,	// (0x0005c382) list_single_fp_cale_pane_g_ParamLimits

0xf7b1,	// (0x0005c382) list_single_fp_cale_pane_g

0xd008,	// (0x00059bd9) list_single_fp_cale_pane_t1_ParamLimits

0xd008,	// (0x00059bd9) list_single_fp_cale_pane_t1

0xd01a,	// (0x00059beb) list_single_fp_cale_pane_t2_ParamLimits

0xd01a,	// (0x00059beb) list_single_fp_cale_pane_t2

0x0001,

0xf7b8,	// (0x0005c389) list_single_fp_cale_pane_t_ParamLimits

0xf7b8,	// (0x0005c389) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x977d,	// (0x0005634e) main_dialer_pane

0x5907,	// (0x000524d8) aid_cell_size_keypad

0x5911,	// (0x000524e2) dialer_ne_pane

0x5919,	// (0x000524ea) grid_dialer_command_1_pane

0x5921,	// (0x000524f2) grid_dialer_command_2_pane

0x5929,	// (0x000524fa) grid_dialer_keypad_pane

0x593b,	// (0x0005250c) bg_popup_call_pane_cp06_ParamLimits

0x593b,	// (0x0005250c) bg_popup_call_pane_cp06

0x5947,	// (0x00052518) dialer_ne_clear_pane_ParamLimits

0x5947,	// (0x00052518) dialer_ne_clear_pane

0xd04d,	// (0x00059c1e) dialer_ne_pane_g1

0xd055,	// (0x00059c26) dialer_ne_pane_t1_ParamLimits

0xd055,	// (0x00059c26) dialer_ne_pane_t1

0x5953,	// (0x00052524) dialer_ne_pane_t2_ParamLimits

0x5953,	// (0x00052524) dialer_ne_pane_t2

0x597d,	// (0x0005254e) dialer_ne_pane_t3_ParamLimits

0x597d,	// (0x0005254e) dialer_ne_pane_t3

0x0002,

0xf7bd,	// (0x0005c38e) dialer_ne_pane_t_ParamLimits

0xf7bd,	// (0x0005c38e) dialer_ne_pane_t

0x59ad,	// (0x0005257e) dialer_ne_pane_t3_copy1_ParamLimits

0x59ad,	// (0x0005257e) dialer_ne_pane_t3_copy1

0x59dc,	// (0x000525ad) cell_dialer_keypad_pane_ParamLimits

0x59dc,	// (0x000525ad) cell_dialer_keypad_pane

0x59f3,	// (0x000525c4) cell_dialer_command_1_pane_ParamLimits

0x59f3,	// (0x000525c4) cell_dialer_command_1_pane

0x5a09,	// (0x000525da) cell_dialer_command_2_pane_ParamLimits

0x5a09,	// (0x000525da) cell_dialer_command_2_pane

0xd067,	// (0x00059c38) bg_button_pane_cp02_ParamLimits

0xd067,	// (0x00059c38) bg_button_pane_cp02

0x5a18,	// (0x000525e9) cell_dialer_keypad_pane_g1_ParamLimits

0x5a18,	// (0x000525e9) cell_dialer_keypad_pane_g1

0xd067,	// (0x00059c38) bg_button_pane_cp03_ParamLimits

0xd067,	// (0x00059c38) bg_button_pane_cp03

0x5a2c,	// (0x000525fd) cell_dialer_command_1_pane_g1_ParamLimits

0x5a2c,	// (0x000525fd) cell_dialer_command_1_pane_g1

0xd073,	// (0x00059c44) bg_button_pane_cp04

0x5a40,	// (0x00052611) cell_dialer_command_2_pane_g1

0xb463,	// (0x00058034) bg_button_pane_cp06

0xd07b,	// (0x00059c4c) dialer_ne_clear_pane_g1

0xb33f,	// (0x00057f10) navi_pane_g2

0xb36d,	// (0x00057f3e) navi_pane_g3

0x0002,

0xf3e5,	// (0x0005bfb6) navi_pane_g

0xb3fc,	// (0x00057fcd) navi_pane_mv_g2

0xb423,	// (0x00057ff4) navi_pane_mv_g5

0x3506,	// (0x000500d7) navi_pane_mv_t1

0xa823,	// (0x000573f4) main_clock2_pane

0x5a8b,	// (0x0005265c) main_clock2_list_pane_ParamLimits

0x5a8b,	// (0x0005265c) main_clock2_list_pane

0x5ac1,	// (0x00052692) main_clock2_pane_t1_ParamLimits

0x5ac1,	// (0x00052692) main_clock2_pane_t1

0x5afd,	// (0x000526ce) main_clock2_pane_t2_ParamLimits

0x5afd,	// (0x000526ce) main_clock2_pane_t2

0x0004,

0xf7c9,	// (0x0005c39a) main_clock2_pane_t_ParamLimits

0xf7c9,	// (0x0005c39a) main_clock2_pane_t

0x5b9b,	// (0x0005276c) popup_clock_analogue_window_cp03_ParamLimits

0x5b9b,	// (0x0005276c) popup_clock_analogue_window_cp03

0x5bc0,	// (0x00052791) popup_clock_digital_window_cp02_ParamLimits

0x5bc0,	// (0x00052791) popup_clock_digital_window_cp02

0x5c31,	// (0x00052802) main_clock2_list_single_pane_ParamLimits

0x5c31,	// (0x00052802) main_clock2_list_single_pane

0xb463,	// (0x00058034) list_highlight_pane_cp05

0xd0b9,	// (0x00059c8a) main_clock2_list_single_pane_t1

0x22f8,	// (0x0004eec9) popup_toolbar_window_cp04_ParamLimits

0x505d,	// (0x00051c2e) camera2_autofocus_pane_g2_ParamLimits

0x505d,	// (0x00051c2e) camera2_autofocus_pane_g2

0x5069,	// (0x00051c3a) camera2_autofocus_pane_g3_ParamLimits

0x5069,	// (0x00051c3a) camera2_autofocus_pane_g3

0x5075,	// (0x00051c46) camera2_autofocus_pane_g4_ParamLimits

0x5075,	// (0x00051c46) camera2_autofocus_pane_g4

0x5081,	// (0x00051c52) camera2_autofocus_pane_g5_ParamLimits

0x5081,	// (0x00051c52) camera2_autofocus_pane_g5

0x0004,

0xf70d,	// (0x0005c2de) camera2_autofocus_pane_g_ParamLimits

0xf70d,	// (0x0005c2de) camera2_autofocus_pane_g

0xcf40,	// (0x00059b11) camera2_autofocus_pane_cp_g2

0xcf48,	// (0x00059b19) camera2_autofocus_pane_cp_g3

0xcf50,	// (0x00059b21) camera2_autofocus_pane_cp_g4

0xcf58,	// (0x00059b29) camera2_autofocus_pane_cp_g5

0x0004,

0xf773,	// (0x0005c344) camera2_autofocus_pane_cp_g

0x5933,	// (0x00052504) popup_dialer_spcha_window

0x977d,	// (0x0005634e) bg_popup_sub_pane_cp07

0xd0c7,	// (0x00059c98) list_spcha_pane

0xd0cf,	// (0x00059ca0) list_single_spcha_pane_ParamLimits

0xd0cf,	// (0x00059ca0) list_single_spcha_pane

0x977d,	// (0x0005634e) list_highlight_pane_cp06

0xd0e0,	// (0x00059cb1) list_single_spcha_pane_t1

0xc298,	// (0x00058e69) popup_call2_audio_out_window_g4_ParamLimits

0xc298,	// (0x00058e69) popup_call2_audio_out_window_g4

0x977d,	// (0x0005634e) main_imed2_pane

0x9d7e,	// (0x0005694f) popup_imed_adjust2_window

0x443e,	// (0x0005100f) popup_imed_trans_window_ParamLimits

0x443e,	// (0x0005100f) popup_imed_trans_window

0xcaa1,	// (0x00059672) popup_blid_sat_info2_window_t1

0xcaaf,	// (0x00059680) popup_blid_sat_info2_window_t2

0x000a,

0xf6a2,	// (0x0005c273) popup_blid_sat_info2_window_t

0x5cdb,	// (0x000528ac) aid_size_cell_colour_35

0x5cfb,	// (0x000528cc) aid_size_cell_colour_112

0x5d1b,	// (0x000528ec) aid_size_cell_effect

0xc85b,	// (0x0005942c) bg_tb_trans_pane_cp02

0xae82,	// (0x00057a53) heading_imed_pane

0x5d3b,	// (0x0005290c) listscroll_imed_pane

0xd0ee,	// (0x00059cbf) heading_imed_pane_g1

0xd0f6,	// (0x00059cc7) heading_imed_pane_t1

0xd104,	// (0x00059cd5) grid_imed_colour_35_pane_ParamLimits

0xd104,	// (0x00059cd5) grid_imed_colour_35_pane

0x5d47,	// (0x00052918) grid_imed_effect_pane

0xd11b,	// (0x00059cec) list_imed_aspect_pane

0x5d5d,	// (0x0005292e) scroll_pane_cp027_ParamLimits

0x5d5d,	// (0x0005292e) scroll_pane_cp027

0x5d6e,	// (0x0005293f) cell_imed_effect_pane_ParamLimits

0x5d6e,	// (0x0005293f) cell_imed_effect_pane

0xd123,	// (0x00059cf4) cell_imed_colour_pane_ParamLimits

0xd123,	// (0x00059cf4) cell_imed_colour_pane

0xd165,	// (0x00059d36) cell_imed_colour_pane_g1_ParamLimits

0xd165,	// (0x00059d36) cell_imed_colour_pane_g1

0xd176,	// (0x00059d47) hgihlgiht_grid_pane_cp016_ParamLimits

0xd176,	// (0x00059d47) hgihlgiht_grid_pane_cp016

0x5d95,	// (0x00052966) cell_imed_effect_pane_g1

0x5d9d,	// (0x0005296e) grid_highlight_pane_cp017

0xd187,	// (0x00059d58) list_imed_single_pane_ParamLimits

0xd187,	// (0x00059d58) list_imed_single_pane

0x977d,	// (0x0005634e) list_highlight_pane_cp07

0xd19c,	// (0x00059d6d) list_imed_aspect_pane_comp1_t1

0xc85b,	// (0x0005942c) bg_tb_trans_pane_cp05

0xd1be,	// (0x00059d8f) popup_imed_adjust2_window_g1

0xd1e5,	// (0x00059db6) popup_imed_adjust2_window_t1

0xd1fd,	// (0x00059dce) slider_imed_adjust_pane

0xd211,	// (0x00059de2) slider_imed_adjust_pane_g1

0xd221,	// (0x00059df2) slider_imed_adjust_pane_g2

0xd231,	// (0x00059e02) slider_imed_adjust_pane_g3

0xd242,	// (0x00059e13) slider_imed_adjust_pane_g4

0x0003,

0xf7e6,	// (0x0005c3b7) slider_imed_adjust_pane_g

0x5da6,	// (0x00052977) aid_size_cell_clipart2

0x5db2,	// (0x00052983) grid_imed_clipart_pane

0xd253,	// (0x00059e24) scroll_pane_cp031

0x5dbc,	// (0x0005298d) cell_imed_clipart_pane_ParamLimits

0x5dbc,	// (0x0005298d) cell_imed_clipart_pane

0x5dde,	// (0x000529af) cell_imed_clipart_pane_g1

0x977d,	// (0x0005634e) grid_highlight_pane_cp014

0x5aa0,	// (0x00052671) main_clock2_pane_g1_ParamLimits

0x5aa0,	// (0x00052671) main_clock2_pane_g1

0x5bdc,	// (0x000527ad) aid_call2_pane_cp10

0x5bee,	// (0x000527bf) aid_call_pane_cp10

0xb2a0,	// (0x00057e71) popup_clock_analogue_window_cp10_g1

0xb2a0,	// (0x00057e71) popup_clock_analogue_window_cp10_g2

0x5c00,	// (0x000527d1) popup_clock_analogue_window_cp10_g3

0x5c00,	// (0x000527d1) popup_clock_analogue_window_cp10_g4

0xb2a0,	// (0x00057e71) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d4,	// (0x0005c3a5) popup_clock_analogue_window_cp10_g

0x5c12,	// (0x000527e3) popup_clock_analogue_window_cp10_t1

0x5c43,	// (0x00052814) clock_digital_number_pane_cp10_ParamLimits

0x5c43,	// (0x00052814) clock_digital_number_pane_cp10

0x5c5b,	// (0x0005282c) clock_digital_number_pane_cp11_ParamLimits

0x5c5b,	// (0x0005282c) clock_digital_number_pane_cp11

0x5c73,	// (0x00052844) clock_digital_number_pane_cp12_ParamLimits

0x5c73,	// (0x00052844) clock_digital_number_pane_cp12

0x5c8b,	// (0x0005285c) clock_digital_number_pane_cp13_ParamLimits

0x5c8b,	// (0x0005285c) clock_digital_number_pane_cp13

0x5ca3,	// (0x00052874) clock_digital_separator_pane_cp10_ParamLimits

0x5ca3,	// (0x00052874) clock_digital_separator_pane_cp10

0x5cbb,	// (0x0005288c) popup_clock_digital_window_cp02_t1_ParamLimits

0x5cbb,	// (0x0005288c) popup_clock_digital_window_cp02_t1

0xa756,	// (0x00057327) clock_digital_number_pane_cp10_g1

0xa756,	// (0x00057327) clock_digital_number_pane_cp10_g2

0x0001,

0xf7ef,	// (0x0005c3c0) clock_digital_number_pane_cp10_g

0xa756,	// (0x00057327) clock_digital_separator_pane_cp10_g1

0xa756,	// (0x00057327) clock_digital_separator_pane_g2_cp10

0xb42b,	// (0x00057ffc) navi_pane_vded_g4

0xb434,	// (0x00058005) navi_pane_vded_g5

0xb43d,	// (0x0005800e) navi_pane_vded_t1

0x977d,	// (0x0005634e) main_vded_pane

0x5de7,	// (0x000529b8) main_vded_pane_g1

0x5df1,	// (0x000529c2) main_vded_pane_g2

0x5dfb,	// (0x000529cc) main_vded_pane_g3

0x0002,

0xf7f4,	// (0x0005c3c5) main_vded_pane_g

0x5e05,	// (0x000529d6) main_vded_pane_t1

0x5e13,	// (0x000529e4) main_vded_pane_t2

0x0001,

0xf7fb,	// (0x0005c3cc) main_vded_pane_t

0x5e21,	// (0x000529f2) vded_slider_pane

0x5e29,	// (0x000529fa) vded_video_pane

0xd25b,	// (0x00059e2c) vded_video_pane_g1

0x5e31,	// (0x00052a02) vded_video_pane_g2

0xcc63,	// (0x00059834) vded_video_pane_g3

0x0002,

0xf800,	// (0x0005c3d1) vded_video_pane_g

0xd265,	// (0x00059e36) vded_slider_pane_g1

0xc9b6,	// (0x00059587) vded_slider_pane_g2

0xd26e,	// (0x00059e3f) vded_slider_pane_g3

0xd277,	// (0x00059e48) vded_slider_pane_g4

0xd280,	// (0x00059e51) vded_slider_pane_g5

0x0004,

0xf807,	// (0x0005c3d8) vded_slider_pane_g

0x5814,	// (0x000523e5) mup3_rocker_pane_ParamLimits

0x5814,	// (0x000523e5) mup3_rocker_pane

0x5e3a,	// (0x00052a0b) mup3_control_keys_pane_g1

0x5e42,	// (0x00052a13) mup3_control_keys_pane_g2

0x5e4a,	// (0x00052a1b) mup3_control_keys_pane_g3

0x5e52,	// (0x00052a23) mup3_control_keys_pane_g4

0x0003,

0xf812,	// (0x0005c3e3) mup3_control_keys_pane_g

0x12e1,	// (0x0004deb2) popup_toolbar2_fixed_window_cp01_ParamLimits

0x12e1,	// (0x0004deb2) popup_toolbar2_fixed_window_cp01

0x5848,	// (0x00052419) popup_toolbar2_fixed_window_cp02_ParamLimits

0x5848,	// (0x00052419) popup_toolbar2_fixed_window_cp02

0xbbd7,	// (0x000587a8) popup_call2_audio_second_window_t4_ParamLimits

0xbbd7,	// (0x000587a8) popup_call2_audio_second_window_t4

0xc105,	// (0x00058cd6) popup_call2_audio_first_window_t6_ParamLimits

0xc105,	// (0x00058cd6) popup_call2_audio_first_window_t6

0xc39b,	// (0x00058f6c) popup_call2_audio_out_window_t6_ParamLimits

0xc39b,	// (0x00058f6c) popup_call2_audio_out_window_t6

0x977d,	// (0x0005634e) main_vitu_pane

0x5e62,	// (0x00052a33) aid_size_cell_itu_ParamLimits

0x5e62,	// (0x00052a33) aid_size_cell_itu

0xa4c6,	// (0x00057097) bg_popup_window_pane_cp08_ParamLimits

0xa4c6,	// (0x00057097) bg_popup_window_pane_cp08

0x5e78,	// (0x00052a49) field_vitu_entry_pane_ParamLimits

0x5e78,	// (0x00052a49) field_vitu_entry_pane

0x5e8f,	// (0x00052a60) grid_vitu_function_pane_ParamLimits

0x5e8f,	// (0x00052a60) grid_vitu_function_pane

0x5eaa,	// (0x00052a7b) grid_vitu_itu_pane_ParamLimits

0x5eaa,	// (0x00052a7b) grid_vitu_itu_pane

0x5ec8,	// (0x00052a99) cell_vitu_itu_pane_ParamLimits

0x5ec8,	// (0x00052a99) cell_vitu_itu_pane

0x5eea,	// (0x00052abb) cell_vitu_function_pane_ParamLimits

0x5eea,	// (0x00052abb) cell_vitu_function_pane

0xa4c6,	// (0x00057097) bg_popup_sub_pane_cp08_ParamLimits

0xa4c6,	// (0x00057097) bg_popup_sub_pane_cp08

0x5f03,	// (0x00052ad4) field_vitu_entry_pane_t1_ParamLimits

0x5f03,	// (0x00052ad4) field_vitu_entry_pane_t1

0xd2a1,	// (0x00059e72) field_vitu_entry_pane_t2_ParamLimits

0xd2a1,	// (0x00059e72) field_vitu_entry_pane_t2

0x0001,

0xf820,	// (0x0005c3f1) field_vitu_entry_pane_t_ParamLimits

0xf820,	// (0x0005c3f1) field_vitu_entry_pane_t

0xd2be,	// (0x00059e8f) bg_button_pane_cp05_ParamLimits

0xd2be,	// (0x00059e8f) bg_button_pane_cp05

0x5f21,	// (0x00052af2) cell_vitu_itu_pane_g1

0x5f39,	// (0x00052b0a) cell_vitu_itu_pane_t1_ParamLimits

0x5f39,	// (0x00052b0a) cell_vitu_itu_pane_t1

0x5f4b,	// (0x00052b1c) cell_vitu_itu_pane_t2_ParamLimits

0x5f4b,	// (0x00052b1c) cell_vitu_itu_pane_t2

0x0002,

0xf825,	// (0x0005c3f6) cell_vitu_itu_pane_t_ParamLimits

0xf825,	// (0x0005c3f6) cell_vitu_itu_pane_t

0xd2cc,	// (0x00059e9d) bg_button_pane_cp07

0x5f80,	// (0x00052b51) cell_vitu_function_pane_g1

0x9bc9,	// (0x0005679a) main_calc_pane_g1

0x10f8,	// (0x0004dcc9) aid_visual_content_pane

0x977d,	// (0x0005634e) main_vradio_pane

0x5f89,	// (0x00052b5a) main_vradio_pane_g1_ParamLimits

0x5f89,	// (0x00052b5a) main_vradio_pane_g1

0xd2d6,	// (0x00059ea7) main_vradio_pane_g2_ParamLimits

0xd2d6,	// (0x00059ea7) main_vradio_pane_g2

0x0001,

0xf82c,	// (0x0005c3fd) main_vradio_pane_g_ParamLimits

0xf82c,	// (0x0005c3fd) main_vradio_pane_g

0x5fa2,	// (0x00052b73) main_vradio_pane_t1_ParamLimits

0x5fa2,	// (0x00052b73) main_vradio_pane_t1

0x5fb7,	// (0x00052b88) main_vradio_pane_t2_ParamLimits

0x5fb7,	// (0x00052b88) main_vradio_pane_t2

0xd2e3,	// (0x00059eb4) main_vradio_pane_t3_ParamLimits

0xd2e3,	// (0x00059eb4) main_vradio_pane_t3

0x0002,

0xf831,	// (0x0005c402) main_vradio_pane_t_ParamLimits

0xf831,	// (0x0005c402) main_vradio_pane_t

0x5fcc,	// (0x00052b9d) vradio_rocker_control_pane_ParamLimits

0x5fcc,	// (0x00052b9d) vradio_rocker_control_pane

0x5fde,	// (0x00052baf) vradio_station_info_pane_ParamLimits

0x5fde,	// (0x00052baf) vradio_station_info_pane

0xd2f7,	// (0x00059ec8) vradio_frequency_info_pane_ParamLimits

0xd2f7,	// (0x00059ec8) vradio_frequency_info_pane

0xcc63,	// (0x00059834) vradio_station_info_pane_g1

0xd306,	// (0x00059ed7) vradio_station_info_pane_t1_ParamLimits

0xd306,	// (0x00059ed7) vradio_station_info_pane_t1

0xd328,	// (0x00059ef9) vradio_station_info_pane_t2_ParamLimits

0xd328,	// (0x00059ef9) vradio_station_info_pane_t2

0x0001,

0xf838,	// (0x0005c409) vradio_station_info_pane_t_ParamLimits

0xf838,	// (0x0005c409) vradio_station_info_pane_t

0xd33a,	// (0x00059f0b) vradio_tuning_pane

0xd342,	// (0x00059f13) vradio_rocker_control_pane_g1

0xd34a,	// (0x00059f1b) vradio_rocker_control_pane_g2

0xd352,	// (0x00059f23) vradio_rocker_control_pane_g3

0xd35a,	// (0x00059f2b) vradio_rocker_control_pane_g4

0xd362,	// (0x00059f33) vradio_rocker_control_pane_g5

0x0004,

0xf83d,	// (0x0005c40e) vradio_rocker_control_pane_g

0x5ff0,	// (0x00052bc1) vradio_frequency_info_pane_g1

0xd36a,	// (0x00059f3b) vradio_frequency_info_pane_t1_ParamLimits

0xd36a,	// (0x00059f3b) vradio_frequency_info_pane_t1

0x5ffa,	// (0x00052bcb) vradio_tuning_pane_g1

0x6005,	// (0x00052bd6) vradio_tuning_pane_t1

0x97a3,	// (0x00056374) area_side_right_pane_ParamLimits

0x97a3,	// (0x00056374) area_side_right_pane

0xc816,	// (0x000593e7) status_small_pane_g1

0xc81e,	// (0x000593ef) status_small_pane_g2

0xc827,	// (0x000593f8) status_small_pane_g3

0xc830,	// (0x00059401) status_small_pane_g4

0x0003,

0xf5f8,	// (0x0005c1c9) status_small_pane_g

0xc839,	// (0x0005940a) status_small_pane_t1

0x977d,	// (0x0005634e) main_video3_pane

0xd37e,	// (0x00059f4f) cams_zoom_vslider_pane

0xd386,	// (0x00059f57) image3_wide_pane_ParamLimits

0xd386,	// (0x00059f57) image3_wide_pane

0xd3a0,	// (0x00059f71) image3_wide_small_pane

0xd3ac,	// (0x00059f7d) main_video3_pane_g1_ParamLimits

0xd3ac,	// (0x00059f7d) main_video3_pane_g1

0xd3c8,	// (0x00059f99) main_video3_pane_g2_ParamLimits

0xd3c8,	// (0x00059f99) main_video3_pane_g2

0x0001,

0xf848,	// (0x0005c419) main_video3_pane_g_ParamLimits

0xf848,	// (0x0005c419) main_video3_pane_g

0xd3e4,	// (0x00059fb5) main_video3_pane_t1_ParamLimits

0xd3e4,	// (0x00059fb5) main_video3_pane_t1

0xd40f,	// (0x00059fe0) main_video3_pane_t2_ParamLimits

0xd40f,	// (0x00059fe0) main_video3_pane_t2

0xd43a,	// (0x0005a00b) main_video3_pane_t3_ParamLimits

0xd43a,	// (0x0005a00b) main_video3_pane_t3

0x0002,

0xf84d,	// (0x0005c41e) main_video3_pane_t_ParamLimits

0xf84d,	// (0x0005c41e) main_video3_pane_t

0xd467,	// (0x0005a038) cams_zoom_vslider_pane_g1

0xd470,	// (0x0005a041) cams_zoom_vslider_pane_g2

0x0001,

0xf854,	// (0x0005c425) cams_zoom_vslider_pane_g

0xd478,	// (0x0005a049) small_slider_vertical_pane

0xcc63,	// (0x00059834) small_slider_vertical_pane_g1

0xcc63,	// (0x00059834) small_slider_vertical_pane_g2

0xd480,	// (0x0005a051) small_slider_vertical_pane_g3

0x0002,

0xf859,	// (0x0005c42a) small_slider_vertical_pane_g

0x977d,	// (0x0005634e) main_hwr_training_pane

0xd489,	// (0x0005a05a) hwr_training_instruct_pane_ParamLimits

0xd489,	// (0x0005a05a) hwr_training_instruct_pane

0x6014,	// (0x00052be5) hwr_training_navi_pane_ParamLimits

0x6014,	// (0x00052be5) hwr_training_navi_pane

0x6033,	// (0x00052c04) hwr_training_write_pane_ParamLimits

0x6033,	// (0x00052c04) hwr_training_write_pane

0x977d,	// (0x0005634e) bg_frame_shadow_pane

0xd4c0,	// (0x0005a091) hwr_training_write_pane_g1

0xd4c8,	// (0x0005a099) hwr_training_write_pane_g2

0xd4d0,	// (0x0005a0a1) hwr_training_write_pane_g3

0xd4d8,	// (0x0005a0a9) hwr_training_write_pane_g4

0xd4e0,	// (0x0005a0b1) hwr_training_write_pane_g5

0xd4e8,	// (0x0005a0b9) hwr_training_write_pane_g6

0xd4f0,	// (0x0005a0c1) hwr_training_write_pane_g7

0x0006,

0xf860,	// (0x0005c431) hwr_training_write_pane_g

0x9e77,	// (0x00056a48) hwr_training_navi_pane_g1_ParamLimits

0x9e77,	// (0x00056a48) hwr_training_navi_pane_g1

0x9e89,	// (0x00056a5a) hwr_training_navi_pane_g2_ParamLimits

0x9e89,	// (0x00056a5a) hwr_training_navi_pane_g2

0x9e9b,	// (0x00056a6c) hwr_training_navi_pane_g3_ParamLimits

0x9e9b,	// (0x00056a6c) hwr_training_navi_pane_g3

0x9eab,	// (0x00056a7c) hwr_training_navi_pane_g4_ParamLimits

0x9eab,	// (0x00056a7c) hwr_training_navi_pane_g4

0x0004,

0xf86f,	// (0x0005c440) hwr_training_navi_pane_g_ParamLimits

0xf86f,	// (0x0005c440) hwr_training_navi_pane_g

0x9eb8,	// (0x00056a89) hwr_training_navi_pane_t1

0x607b,	// (0x00052c4c) list_single_hwr_training_instruct_pane_ParamLimits

0x607b,	// (0x00052c4c) list_single_hwr_training_instruct_pane

0xd4f8,	// (0x0005a0c9) list_single_hwr_training_instruct_pane_t1

0xcba3,	// (0x00059774) bg_frame_shadow_pane_g1

0xd507,	// (0x0005a0d8) bg_frame_shadow_pane_g2

0xd50f,	// (0x0005a0e0) bg_frame_shadow_pane_g3

0xd517,	// (0x0005a0e8) bg_frame_shadow_pane_g4

0xd51f,	// (0x0005a0f0) bg_frame_shadow_pane_g5

0xd527,	// (0x0005a0f8) bg_frame_shadow_pane_g6

0xd52f,	// (0x0005a100) bg_frame_shadow_pane_g7

0xa8dc,	// (0x000574ad) bg_frame_shadow_pane_g8

0x0007,

0xf87a,	// (0x0005c44b) bg_frame_shadow_pane_g

0x977d,	// (0x0005634e) main_video_tele_dialer_pane

0x6090,	// (0x00052c61) aid_size_cell_video_keypad_ParamLimits

0x6090,	// (0x00052c61) aid_size_cell_video_keypad

0x60aa,	// (0x00052c7b) grid_video_dialer_keypad_pane_ParamLimits

0x60aa,	// (0x00052c7b) grid_video_dialer_keypad_pane

0x60f6,	// (0x00052cc7) video_down_pane_cp_ParamLimits

0x60f6,	// (0x00052cc7) video_down_pane_cp

0x6128,	// (0x00052cf9) cell_video_dialer_keypad_pane_ParamLimits

0x6128,	// (0x00052cf9) cell_video_dialer_keypad_pane

0xd537,	// (0x0005a108) bg_button_pane_cp08_ParamLimits

0xd537,	// (0x0005a108) bg_button_pane_cp08

0x614a,	// (0x00052d1b) cell_video_dialer_keypad_pane_g1_ParamLimits

0x614a,	// (0x00052d1b) cell_video_dialer_keypad_pane_g1

0x57fe,	// (0x000523cf) mup3_rocker2_pane_ParamLimits

0x57fe,	// (0x000523cf) mup3_rocker2_pane

0xcc63,	// (0x00059834) mup3_rocker2_pane_g1

0x431f,	// (0x00050ef0) main_dialer2_pane

0x977d,	// (0x0005634e) main_mp4_pane

0x9ece,	// (0x00056a9f) main_mp4_pane_g1_ParamLimits

0x9ece,	// (0x00056a9f) main_mp4_pane_g1

0x9ece,	// (0x00056a9f) main_mp4_pane_g2_ParamLimits

0x9ece,	// (0x00056a9f) main_mp4_pane_g2

0x6181,	// (0x00052d52) main_mp4_pane_g3_ParamLimits

0x6181,	// (0x00052d52) main_mp4_pane_g3

0x9edc,	// (0x00056aad) main_mp4_pane_g4_ParamLimits

0x9edc,	// (0x00056aad) main_mp4_pane_g4

0x9f04,	// (0x00056ad5) main_mp4_pane_g5_ParamLimits

0x9f04,	// (0x00056ad5) main_mp4_pane_g5

0x0005,

0xf89a,	// (0x0005c46b) main_mp4_pane_g_ParamLimits

0xf89a,	// (0x0005c46b) main_mp4_pane_g

0x9f54,	// (0x00056b25) main_mp4_pane_t1_ParamLimits

0x9f54,	// (0x00056b25) main_mp4_pane_t1

0x9fb0,	// (0x00056b81) main_mp4_pane_t2_ParamLimits

0x9fb0,	// (0x00056b81) main_mp4_pane_t2

0xd543,	// (0x0005a114) main_mp4_pane_t3_ParamLimits

0xd543,	// (0x0005a114) main_mp4_pane_t3

0xa002,	// (0x00056bd3) main_mp4_pane_t4_ParamLimits

0xa002,	// (0x00056bd3) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x0005c478) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x0005c478) main_mp4_pane_t

0xa046,	// (0x00056c17) mp4_progress_pane_ParamLimits

0xa046,	// (0x00056c17) mp4_progress_pane

0xa090,	// (0x00056c61) mp4_rocker_pane_ParamLimits

0xa090,	// (0x00056c61) mp4_rocker_pane

0xd56b,	// (0x0005a13c) mp4_progress_pane_t1

0xd584,	// (0x0005a155) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x0005c481) mp4_progress_pane_t

0xd59d,	// (0x0005a16e) mup_progress_pane_cp04

0xcc63,	// (0x00059834) mp4_rocker_pane_g1

0x61bd,	// (0x00052d8e) aid_cell_size_keypad2_ParamLimits

0x61bd,	// (0x00052d8e) aid_cell_size_keypad2

0x61d3,	// (0x00052da4) dialer2_ne_pane_ParamLimits

0x61d3,	// (0x00052da4) dialer2_ne_pane

0x61ed,	// (0x00052dbe) grid_dialer2_keypad_pane_ParamLimits

0x61ed,	// (0x00052dbe) grid_dialer2_keypad_pane

0xca48,	// (0x00059619) bg_popup_call_pane_cp07_ParamLimits

0xca48,	// (0x00059619) bg_popup_call_pane_cp07

0x6209,	// (0x00052dda) dialer2_ne_pane_t1_ParamLimits

0x6209,	// (0x00052dda) dialer2_ne_pane_t1

0x6244,	// (0x00052e15) cell_dialer2_keypad_pane_ParamLimits

0x6244,	// (0x00052e15) cell_dialer2_keypad_pane

0xd5bb,	// (0x0005a18c) bg_button_pane_pane_cp04_ParamLimits

0xd5bb,	// (0x0005a18c) bg_button_pane_pane_cp04

0x6266,	// (0x00052e37) cell_dialer2_keypad_pane_g1_ParamLimits

0x6266,	// (0x00052e37) cell_dialer2_keypad_pane_g1

0x21cc,	// (0x0004ed9d) aid_placing_vt_set_content_ParamLimits

0x21cc,	// (0x0004ed9d) aid_placing_vt_set_content

0x21f4,	// (0x0004edc5) aid_placing_vt_set_title_ParamLimits

0x21f4,	// (0x0004edc5) aid_placing_vt_set_title

0x977d,	// (0x0005634e) main_image3_pane

0x632c,	// (0x00052efd) area_side_right_pane_cp01_ParamLimits

0x632c,	// (0x00052efd) area_side_right_pane_cp01

0x9ece,	// (0x00056a9f) main_image3_pane_g1_ParamLimits

0x9ece,	// (0x00056a9f) main_image3_pane_g1

0x6343,	// (0x00052f14) main_image3_pane_g2_ParamLimits

0x6343,	// (0x00052f14) main_image3_pane_g2

0x636b,	// (0x00052f3c) main_image3_pane_g3_ParamLimits

0x636b,	// (0x00052f3c) main_image3_pane_g3

0x6395,	// (0x00052f66) main_image3_pane_g4_ParamLimits

0x6395,	// (0x00052f66) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x0005c490) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x0005c490) main_image3_pane_g

0x63bf,	// (0x00052f90) main_image3_pane_t1_ParamLimits

0x63bf,	// (0x00052f90) main_image3_pane_t1

0x6417,	// (0x00052fe8) main_image3_pane_t2_ParamLimits

0x6417,	// (0x00052fe8) main_image3_pane_t2

0x6469,	// (0x0005303a) main_image3_pane_t3_ParamLimits

0x6469,	// (0x0005303a) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x0005c499) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x0005c499) main_image3_pane_t

0xa4c6,	// (0x00057097) grid_sctrl_middle_pane_cp01_ParamLimits

0xa4c6,	// (0x00057097) grid_sctrl_middle_pane_cp01

0x64f1,	// (0x000530c2) cell_sctrl_middle_pane_cp01_ParamLimits

0x64f1,	// (0x000530c2) cell_sctrl_middle_pane_cp01

0x650e,	// (0x000530df) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x650e,	// (0x000530df) cell_sctrl_middle_pane_cp01_g1

0x977d,	// (0x0005634e) main_call4_pane

0x6524,	// (0x000530f5) aid_size_button_call4_ParamLimits

0x6524,	// (0x000530f5) aid_size_button_call4

0x6555,	// (0x00053126) call4_windows_pane_ParamLimits

0x6555,	// (0x00053126) call4_windows_pane

0x6575,	// (0x00053146) grid_call4_button_pane_ParamLimits

0x6575,	// (0x00053146) grid_call4_button_pane

0xd5c7,	// (0x0005a198) call4_windows_conf_pane

0xd5de,	// (0x0005a1af) popup_call4_audio_first_window_ParamLimits

0xd5de,	// (0x0005a1af) popup_call4_audio_first_window

0xd62a,	// (0x0005a1fb) popup_call4_audio_second_window_ParamLimits

0xd62a,	// (0x0005a1fb) popup_call4_audio_second_window

0xd63e,	// (0x0005a20f) popup_call4_audio_wait_window_ParamLimits

0xd63e,	// (0x0005a20f) popup_call4_audio_wait_window

0x65a2,	// (0x00053173) cell_call4_button_pane_ParamLimits

0x65a2,	// (0x00053173) cell_call4_button_pane

0x65cb,	// (0x0005319c) bg_button_pane_cp09_ParamLimits

0x65cb,	// (0x0005319c) bg_button_pane_cp09

0x65d7,	// (0x000531a8) cell_call4_button_pane_g1_ParamLimits

0x65d7,	// (0x000531a8) cell_call4_button_pane_g1

0x65fd,	// (0x000531ce) cell_call4_button_pane_t1_ParamLimits

0x65fd,	// (0x000531ce) cell_call4_button_pane_t1

0xd686,	// (0x0005a257) popup_call4_audio_conf_window_ParamLimits

0xd686,	// (0x0005a257) popup_call4_audio_conf_window

0x585e,	// (0x0005242f) mup3_progress_pane_t1_ParamLimits

0x587d,	// (0x0005244e) mup3_progress_pane_t2_ParamLimits

0xcf76,	// (0x00059b47) mup3_progress_pane_t3_ParamLimits

0xf79c,	// (0x0005c36d) mup3_progress_pane_t_ParamLimits

0xcf93,	// (0x00059b64) mup_progress_pane_cp03_ParamLimits

0x5e5a,	// (0x00052a2b) mup3_control_keys_pane_g4_copy1

0xa074,	// (0x00056c45) mp4_rocker2_pane_ParamLimits

0xa074,	// (0x00056c45) mp4_rocker2_pane

0xd69a,	// (0x0005a26b) mp4_rocker2_pane_g1

0xd6a2,	// (0x0005a273) mp4_rocker2_pane_g2

0xa0e2,	// (0x00056cb3) mp4_rocker2_pane_g3

0xa0ea,	// (0x00056cbb) mp4_rocker2_pane_g4

0xa0f2,	// (0x00056cc3) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x0005c4a2) mp4_rocker2_pane_g

0x977d,	// (0x0005634e) main_camera4_pane

0x977d,	// (0x0005634e) main_video4_pane

0x60c4,	// (0x00052c95) main_video_tele_dialer_pane_t1_ParamLimits

0x60c4,	// (0x00052c95) main_video_tele_dialer_pane_t1

0x60dd,	// (0x00052cae) main_video_tele_dialer_pane_t2_ParamLimits

0x60dd,	// (0x00052cae) main_video_tele_dialer_pane_t2

0x0001,

0xf88b,	// (0x0005c45c) main_video_tele_dialer_pane_t_ParamLimits

0xf88b,	// (0x0005c45c) main_video_tele_dialer_pane_t

0x663b,	// (0x0005320c) cam4_autofocus_pane_ParamLimits

0x663b,	// (0x0005320c) cam4_autofocus_pane

0x6651,	// (0x00053222) cam4_image_uncrop_pane_ParamLimits

0x6651,	// (0x00053222) cam4_image_uncrop_pane

0x666b,	// (0x0005323c) cam4_indicators_pane_ParamLimits

0x666b,	// (0x0005323c) cam4_indicators_pane

0x6696,	// (0x00053267) main_camera4_pane_g1_ParamLimits

0x6696,	// (0x00053267) main_camera4_pane_g1

0x66a8,	// (0x00053279) main_camera4_pane_g2_ParamLimits

0x66a8,	// (0x00053279) main_camera4_pane_g2

0x66bb,	// (0x0005328c) main_camera4_pane_g3_ParamLimits

0x66bb,	// (0x0005328c) main_camera4_pane_g3

0x66ce,	// (0x0005329f) main_camera4_pane_g4_ParamLimits

0x66ce,	// (0x0005329f) main_camera4_pane_g4

0x66e1,	// (0x000532b2) main_camera4_pane_g5_ParamLimits

0x66e1,	// (0x000532b2) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x0005c4ad) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x0005c4ad) main_camera4_pane_g

0x6705,	// (0x000532d6) main_camera4_pane_t1_ParamLimits

0x6705,	// (0x000532d6) main_camera4_pane_t1

0xcedb,	// (0x00059aac) bg_tb_trans_pane_cp06

0xa11e,	// (0x00056cef) cam4_indicators_pane_g1

0xa12f,	// (0x00056d00) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x0005c4c8) cam4_indicators_pane_g

0xa14d,	// (0x00056d1e) cam4_indicators_pane_t1

0x6769,	// (0x0005333a) main_video4_pane_g1_ParamLimits

0x6769,	// (0x0005333a) main_video4_pane_g1

0x6778,	// (0x00053349) main_video4_pane_g2_ParamLimits

0x6778,	// (0x00053349) main_video4_pane_g2

0x6787,	// (0x00053358) main_video4_pane_g3_ParamLimits

0x6787,	// (0x00053358) main_video4_pane_g3

0x6796,	// (0x00053367) main_video4_pane_g4_ParamLimits

0x6796,	// (0x00053367) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x0005c4cf) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x0005c4cf) main_video4_pane_g

0x67b4,	// (0x00053385) vid4_indicators_pane_ParamLimits

0x67b4,	// (0x00053385) vid4_indicators_pane

0x67e2,	// (0x000533b3) video4_image_uncrop_cif_pane_ParamLimits

0x67e2,	// (0x000533b3) video4_image_uncrop_cif_pane

0x67fc,	// (0x000533cd) video4_image_uncrop_nhd_pane_ParamLimits

0x67fc,	// (0x000533cd) video4_image_uncrop_nhd_pane

0x6651,	// (0x00053222) video4_image_uncrop_vga_pane_ParamLimits

0x6651,	// (0x00053222) video4_image_uncrop_vga_pane

0xa4c6,	// (0x00057097) bg_tb_trans_pane_cp07

0xa179,	// (0x00056d4a) vid4_indicators_pane_g1

0xa18d,	// (0x00056d5e) vid4_indicators_pane_g2

0xa1a1,	// (0x00056d72) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x0005c4da) vid4_indicators_pane_g

0xa1d0,	// (0x00056da1) vid4_indicators_pane_t1

0x6810,	// (0x000533e1) cam4_autofocus_pane_g1

0x6818,	// (0x000533e9) cam4_autofocus_pane_g2

0x6820,	// (0x000533f1) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x0005c4e5) cam4_autofocus_pane_g

0x6828,	// (0x000533f9) cam4_autofocus_pane_g3_copy1

0x610c,	// (0x00052cdd) video_down_pane_cp_t1

0x611a,	// (0x00052ceb) video_down_pane_cp_t2

0x0001,

0xf890,	// (0x0005c461) video_down_pane_cp_t

0xa4c6,	// (0x00057097) popup_vitu2_window_ParamLimits

0xa4c6,	// (0x00057097) popup_vitu2_window

0x6830,	// (0x00053401) aid_size_cell2_itu2_ParamLimits

0x6830,	// (0x00053401) aid_size_cell2_itu2

0x6856,	// (0x00053427) aid_size_cell_itu2_ParamLimits

0x6856,	// (0x00053427) aid_size_cell_itu2

0x68b2,	// (0x00053483) bg_popup_window_pane_cp09_ParamLimits

0x68b2,	// (0x00053483) bg_popup_window_pane_cp09

0x68c0,	// (0x00053491) field_vitu2_entry_pane_ParamLimits

0x68c0,	// (0x00053491) field_vitu2_entry_pane

0x68e6,	// (0x000534b7) grid_vitu2_function_pane_ParamLimits

0x68e6,	// (0x000534b7) grid_vitu2_function_pane

0x6937,	// (0x00053508) grid_vitu2_itu_pane_ParamLimits

0x6937,	// (0x00053508) grid_vitu2_itu_pane

0x69ca,	// (0x0005359b) cell_vitu2_itu_pane_ParamLimits

0x69ca,	// (0x0005359b) cell_vitu2_itu_pane

0x69ee,	// (0x000535bf) cell_vitu2_function_pane_ParamLimits

0x69ee,	// (0x000535bf) cell_vitu2_function_pane

0xd6aa,	// (0x0005a27b) bg_popup_call_pane_cp08_ParamLimits

0xd6aa,	// (0x0005a27b) bg_popup_call_pane_cp08

0xd6c1,	// (0x0005a292) field_vitu2_entry_pane_g1

0xd6cd,	// (0x0005a29e) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x0005c4ec) field_vitu2_entry_pane_g

0x0477,	// (0x0004d048) field_vitu2_entry_pane_t1_ParamLimits

0x0477,	// (0x0004d048) field_vitu2_entry_pane_t1

0x6a2d,	// (0x000535fe) field_vitu2_entry_pane_t2_ParamLimits

0x6a2d,	// (0x000535fe) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x0005c4f3) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x0005c4f3) field_vitu2_entry_pane_t

0x6a4a,	// (0x0005361b) bg_button_pane_cp010_ParamLimits

0x6a4a,	// (0x0005361b) bg_button_pane_cp010

0x6a58,	// (0x00053629) cell_vitu2_itu_pane_g1

0x6a83,	// (0x00053654) cell_vitu2_itu_pane_t1_ParamLimits

0x6a83,	// (0x00053654) cell_vitu2_itu_pane_t1

0x04a3,	// (0x0004d074) cell_vitu2_itu_pane_t2_ParamLimits

0x04a3,	// (0x0004d074) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x0005c4fd) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x0005c4fd) cell_vitu2_itu_pane_t

0xa4c6,	// (0x00057097) bg_button_pane_cp011

0x6ae1,	// (0x000536b2) cell_vitu2_function_pane_g1

0x977d,	// (0x0005634e) main_myfav_hc_pane

0x64b9,	// (0x0005308a) popup_image3_note_pane_ParamLimits

0x64b9,	// (0x0005308a) popup_image3_note_pane

0x64d5,	// (0x000530a6) popup_image3_tool_bar_pane_ParamLimits

0x64d5,	// (0x000530a6) popup_image3_tool_bar_pane

0x0527,	// (0x0004d0f8) cell_vitu2_itu_pane_t3_ParamLimits

0x0527,	// (0x0004d0f8) cell_vitu2_itu_pane_t3

0x977d,	// (0x0005634e) bg_popup_trans_pane

0xd6ef,	// (0x0005a2c0) grid_image3_tool_bar_pane

0xd6f9,	// (0x0005a2ca) bg_popup_trans_pane_g1

0xac3a,	// (0x0005780b) bg_popup_trans_pane_g2

0xd701,	// (0x0005a2d2) bg_popup_trans_pane_g3

0xd709,	// (0x0005a2da) bg_popup_trans_pane_g4

0xd711,	// (0x0005a2e2) bg_popup_trans_pane_g5

0xd719,	// (0x0005a2ea) bg_popup_trans_pane_g6

0xd721,	// (0x0005a2f2) bg_popup_trans_pane_g7

0xd729,	// (0x0005a2fa) bg_popup_trans_pane_g8

0xac1a,	// (0x000577eb) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x0005c504) bg_popup_trans_pane_g

0xd731,	// (0x0005a302) cell_image3_tool_bar_pane_ParamLimits

0xd731,	// (0x0005a302) cell_image3_tool_bar_pane

0xcc63,	// (0x00059834) cell_image3_tool_bar_pane_g1

0x977d,	// (0x0005634e) bg_popup_trans_pane_cp1

0xd745,	// (0x0005a316) popup_image3_note_pane_t1

0xd753,	// (0x0005a324) popup_image3_note_pane_t2

0xd761,	// (0x0005a332) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x0005c517) popup_image3_note_pane_t

0xd76f,	// (0x0005a340) popup_image3_note_pane_t3_copy1

0x6af5,	// (0x000536c6) bg_myfav_hc_instruction_pane_ParamLimits

0x6af5,	// (0x000536c6) bg_myfav_hc_instruction_pane

0x6b09,	// (0x000536da) cell_myfav_contact_pane_ParamLimits

0x6b09,	// (0x000536da) cell_myfav_contact_pane

0x6b27,	// (0x000536f8) cell_myfav_contact_pane_cp1_ParamLimits

0x6b27,	// (0x000536f8) cell_myfav_contact_pane_cp1

0x6b3f,	// (0x00053710) cell_myfav_contact_pane_cp2_ParamLimits

0x6b3f,	// (0x00053710) cell_myfav_contact_pane_cp2

0x6b57,	// (0x00053728) cell_myfav_contact_pane_cp3_ParamLimits

0x6b57,	// (0x00053728) cell_myfav_contact_pane_cp3

0x6b6e,	// (0x0005373f) cell_myfav_contact_pane_cp4_ParamLimits

0x6b6e,	// (0x0005373f) cell_myfav_contact_pane_cp4

0x6b86,	// (0x00053757) cell_myfav_contact_pane_cp5_ParamLimits

0x6b86,	// (0x00053757) cell_myfav_contact_pane_cp5

0x6b9a,	// (0x0005376b) cell_myfav_contact_pane_cp6_ParamLimits

0x6b9a,	// (0x0005376b) cell_myfav_contact_pane_cp6

0x6bb0,	// (0x00053781) cell_myfav_contact_pane_cp7_ParamLimits

0x6bb0,	// (0x00053781) cell_myfav_contact_pane_cp7

0xd77d,	// (0x0005a34e) listscroll_gen_pane_cp05

0x6bca,	// (0x0005379b) main_myfav_hc_pane_g1_ParamLimits

0x6bca,	// (0x0005379b) main_myfav_hc_pane_g1

0x6be4,	// (0x000537b5) main_myfav_hc_pane_g2_ParamLimits

0x6be4,	// (0x000537b5) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x0005c51e) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x0005c51e) main_myfav_hc_pane_g

0x6c16,	// (0x000537e7) main_myfav_hc_pane_t1_ParamLimits

0x6c16,	// (0x000537e7) main_myfav_hc_pane_t1

0xd786,	// (0x0005a357) main_myfav_hc_pane_t2_ParamLimits

0xd786,	// (0x0005a357) main_myfav_hc_pane_t2

0xd798,	// (0x0005a369) main_myfav_hc_pane_t3_ParamLimits

0xd798,	// (0x0005a369) main_myfav_hc_pane_t3

0x6c2d,	// (0x000537fe) main_myfav_hc_pane_t4_ParamLimits

0x6c2d,	// (0x000537fe) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x0005c525) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x0005c525) main_myfav_hc_pane_t

0xcc63,	// (0x00059834) bg_myfav_hc_instruction_pane_g1

0xd7aa,	// (0x0005a37b) cell_myfav_contact_pane_g1_ParamLimits

0xd7aa,	// (0x0005a37b) cell_myfav_contact_pane_g1

0xd7aa,	// (0x0005a37b) cell_myfav_contact_pane_g2_ParamLimits

0xd7aa,	// (0x0005a37b) cell_myfav_contact_pane_g2

0xd7b6,	// (0x0005a387) cell_myfav_contact_pane_g3_ParamLimits

0xd7b6,	// (0x0005a387) cell_myfav_contact_pane_g3

0xcf60,	// (0x00059b31) cell_myfav_contact_pane_g4_ParamLimits

0xcf60,	// (0x00059b31) cell_myfav_contact_pane_g4

0xd7c3,	// (0x0005a394) cell_myfav_contact_pane_g5_ParamLimits

0xd7c3,	// (0x0005a394) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x0005c530) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x0005c530) cell_myfav_contact_pane_g

0x6bfe,	// (0x000537cf) main_myfav_hc_pane_g3_ParamLimits

0x6bfe,	// (0x000537cf) main_myfav_hc_pane_g3

0x1243,	// (0x0004de14) popup_adpt_find_window

0x6c55,	// (0x00053826) afind_page_pane_ParamLimits

0x6c55,	// (0x00053826) afind_page_pane

0x6c6a,	// (0x0005383b) aid_size_cell_afind_ParamLimits

0x6c6a,	// (0x0005383b) aid_size_cell_afind

0x6c88,	// (0x00053859) bg_popup_sub_pane_cp09_ParamLimits

0x6c88,	// (0x00053859) bg_popup_sub_pane_cp09

0x6c95,	// (0x00053866) find_pane_cp01_ParamLimits

0x6c95,	// (0x00053866) find_pane_cp01

0xd7cf,	// (0x0005a3a0) grid_afind_control_pane_ParamLimits

0xd7cf,	// (0x0005a3a0) grid_afind_control_pane

0x6ca2,	// (0x00053873) grid_afind_pane_ParamLimits

0x6ca2,	// (0x00053873) grid_afind_pane

0x6cc4,	// (0x00053895) cell_afind_pane_ParamLimits

0x6cc4,	// (0x00053895) cell_afind_pane

0xcc63,	// (0x00059834) afind_page_pane_g1

0x6d25,	// (0x000538f6) afind_page_pane_g2

0x6d2e,	// (0x000538ff) afind_page_pane_g3

0x0002,

0xf96a,	// (0x0005c53b) afind_page_pane_g

0x6d37,	// (0x00053908) afind_page_pane_t1

0xd7e3,	// (0x0005a3b4) cell_afind_grid_control_pane_ParamLimits

0xd7e3,	// (0x0005a3b4) cell_afind_grid_control_pane

0xd5bb,	// (0x0005a18c) bg_button_pane_cp69_ParamLimits

0xd5bb,	// (0x0005a18c) bg_button_pane_cp69

0x6d57,	// (0x00053928) cell_afind_pane_g1_ParamLimits

0x6d57,	// (0x00053928) cell_afind_pane_g1

0x6d64,	// (0x00053935) cell_afind_pane_t1_ParamLimits

0x6d64,	// (0x00053935) cell_afind_pane_t1

0xaa33,	// (0x00057604) bg_button_pane_cp72

0xd7f2,	// (0x0005a3c3) cell_afind_grid_control_pane_g1

0x3ddf,	// (0x000509b0) aid_image_placing_area_ParamLimits

0x3ddf,	// (0x000509b0) aid_image_placing_area

0xd289,	// (0x00059e5a) field_vitu_entry_pane_g1_ParamLimits

0xd289,	// (0x00059e5a) field_vitu_entry_pane_g1

0xd295,	// (0x00059e66) field_vitu_entry_pane_g2_ParamLimits

0xd295,	// (0x00059e66) field_vitu_entry_pane_g2

0x0001,

0xf81b,	// (0x0005c3ec) field_vitu_entry_pane_g_ParamLimits

0xf81b,	// (0x0005c3ec) field_vitu_entry_pane_g

0x5f21,	// (0x00052af2) cell_vitu_itu_pane_g1_ParamLimits

0x5f63,	// (0x00052b34) cell_vitu_itu_pane_t3_ParamLimits

0x5f63,	// (0x00052b34) cell_vitu_itu_pane_t3

0xd56b,	// (0x0005a13c) mp4_progress_pane_t1_ParamLimits

0xd584,	// (0x0005a155) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x0005c481) mp4_progress_pane_t_ParamLimits

0xd59d,	// (0x0005a16e) mup_progress_pane_cp04_ParamLimits

0x6c41,	// (0x00053812) main_myfav_hc_pane_t5_ParamLimits

0x6c41,	// (0x00053812) main_myfav_hc_pane_t5

0x979b,	// (0x0005636c) aid_zoom_text_primary

0x1243,	// (0x0004de14) popup_adpt_find_window_ParamLimits

0xa4c6,	// (0x00057097) main_cam_set_pane

0x6682,	// (0x00053253) cam4_zoom_pane_ParamLimits

0x6682,	// (0x00053253) cam4_zoom_pane

0x6d76,	// (0x00053947) main_cam_set_pane_g1_ParamLimits

0x6d76,	// (0x00053947) main_cam_set_pane_g1

0x6d84,	// (0x00053955) main_cam_set_pane_g2_ParamLimits

0x6d84,	// (0x00053955) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x0005c542) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x0005c542) main_cam_set_pane_g

0x6da5,	// (0x00053976) main_cam_set_pane_t1_ParamLimits

0x6da5,	// (0x00053976) main_cam_set_pane_t1

0x6dc0,	// (0x00053991) main_cset_listscroll_pane_ParamLimits

0x6dc0,	// (0x00053991) main_cset_listscroll_pane

0x6de0,	// (0x000539b1) main_cset_slider_pane_ParamLimits

0x6de0,	// (0x000539b1) main_cset_slider_pane

0xd803,	// (0x0005a3d4) main_cset_list_pane_ParamLimits

0xd803,	// (0x0005a3d4) main_cset_list_pane

0xd813,	// (0x0005a3e4) scroll_pane_cp028

0x6e06,	// (0x000539d7) aid_area_touch_slider

0x6e22,	// (0x000539f3) cset_slider_pane

0x6e4c,	// (0x00053a1d) main_cset_slider_pane_g1

0x6e61,	// (0x00053a32) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x0005c547) main_cset_slider_pane_g

0xd84c,	// (0x0005a41d) main_cset_slider_pane_t1

0x6f1d,	// (0x00053aee) main_cset_slider_pane_t2

0x6f37,	// (0x00053b08) main_cset_slider_pane_t3

0x6f51,	// (0x00053b22) main_cset_slider_pane_t4

0x6f6b,	// (0x00053b3c) main_cset_slider_pane_t5

0x6f85,	// (0x00053b56) main_cset_slider_pane_t6

0x6f9a,	// (0x00053b6b) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x0005c56c) main_cset_slider_pane_t

0x709e,	// (0x00053c6f) cset_list_set_pane_ParamLimits

0x709e,	// (0x00053c6f) cset_list_set_pane

0x70b0,	// (0x00053c81) aid_position_infowindow_above

0x70b8,	// (0x00053c89) aid_position_infowindow_below

0x70c0,	// (0x00053c91) cset_list_set_pane_g1_ParamLimits

0x70c0,	// (0x00053c91) cset_list_set_pane_g1

0x70cc,	// (0x00053c9d) cset_list_set_pane_g3_ParamLimits

0x70cc,	// (0x00053c9d) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x0005c58b) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x0005c58b) cset_list_set_pane_g

0x70db,	// (0x00053cac) cset_list_set_pane_t1_ParamLimits

0x70db,	// (0x00053cac) cset_list_set_pane_t1

0xa4c6,	// (0x00057097) list_highlight_pane_cp021_ParamLimits

0xa4c6,	// (0x00057097) list_highlight_pane_cp021

0xb599,	// (0x0005816a) cset_slider_pane_g1

0xb5ab,	// (0x0005817c) cset_slider_pane_g2

0xb5a2,	// (0x00058173) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x0005c590) cset_slider_pane_g

0xa1e7,	// (0x00056db8) aid_area_touch_cam4_zoom

0xa1ef,	// (0x00056dc0) cam4_zoom_cont_pane

0xa1f7,	// (0x00056dc8) cam4_zoom_pane_g1

0xa1ff,	// (0x00056dd0) cam4_zoom_pane_g2

0x70f0,	// (0x00053cc1) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x0005c597) cam4_zoom_pane_g

0xda0e,	// (0x0005a5df) cam4_zoom_cont_pane_g1

0xda17,	// (0x0005a5e8) cam4_zoom_cont_pane_g2

0xda20,	// (0x0005a5f1) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x0005c59e) cam4_zoom_cont_pane_g

0x6542,	// (0x00053113) call4_image_pane_ParamLimits

0x6542,	// (0x00053113) call4_image_pane

0xd5c7,	// (0x0005a198) call4_windows_conf_pane_ParamLimits

0xd608,	// (0x0005a1d9) popup_call4_audio_in_window_ParamLimits

0xd608,	// (0x0005a1d9) popup_call4_audio_in_window

0x977d,	// (0x0005634e) bg_popup_call2_act_pane_cp02

0xd67e,	// (0x0005a24f) call4_list_conf_pane

0xcc63,	// (0x00059834) call4_image_pane_g1

0xcc63,	// (0x00059834) call4_image_pane_g2

0x0001,

0xf6dc,	// (0x0005c2ad) call4_image_pane_g

0xd8ec,	// (0x0005a4bd) list_single_graphic_popup_conf4_pane_ParamLimits

0xd8ec,	// (0x0005a4bd) list_single_graphic_popup_conf4_pane

0x977d,	// (0x0005634e) list_highlight_pane_cp022

0xd8ff,	// (0x0005a4d0) list_single_graphic_popup_conf4_pane_g1

0xb154,	// (0x00057d25) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x0005c5a5) list_single_graphic_popup_conf4_pane_g

0xd907,	// (0x0005a4d8) list_single_graphic_popup_conf4_pane_t1

0x2318,	// (0x0004eee9) popup_vtel_slider_window_ParamLimits

0x2318,	// (0x0004eee9) popup_vtel_slider_window

0xd5a9,	// (0x0005a17a) dialer2_ne_pane_t2_ParamLimits

0xd5a9,	// (0x0005a17a) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x0005c486) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x0005c486) dialer2_ne_pane_t

0xca48,	// (0x00059619) bg_popup_sub_pane_cp010_ParamLimits

0xca48,	// (0x00059619) bg_popup_sub_pane_cp010

0x70f8,	// (0x00053cc9) popup_vtel_slider_window_g1_ParamLimits

0x70f8,	// (0x00053cc9) popup_vtel_slider_window_g1

0x710b,	// (0x00053cdc) popup_vtel_slider_window_g2_ParamLimits

0x710b,	// (0x00053cdc) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x0005c5aa) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x0005c5aa) popup_vtel_slider_window_g

0x7161,	// (0x00053d32) vtel_slider_pane_ParamLimits

0x7161,	// (0x00053d32) vtel_slider_pane

0x7183,	// (0x00053d54) vtel_slider_pane_g1_ParamLimits

0x7183,	// (0x00053d54) vtel_slider_pane_g1

0x7197,	// (0x00053d68) vtel_slider_pane_g2_ParamLimits

0x7197,	// (0x00053d68) vtel_slider_pane_g2

0x71af,	// (0x00053d80) vtel_slider_pane_g3_ParamLimits

0x71af,	// (0x00053d80) vtel_slider_pane_g3

0x7183,	// (0x00053d54) vtel_slider_pane_g4_ParamLimits

0x7183,	// (0x00053d54) vtel_slider_pane_g4

0x71c5,	// (0x00053d96) vtel_slider_pane_g5_ParamLimits

0x71c5,	// (0x00053d96) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x0005c5b3) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x0005c5b3) vtel_slider_pane_g

0xa4c6,	// (0x00057097) main_gallery2_pane

0x6882,	// (0x00053453) aid_size_row_itut2_dropdow_list_ParamLimits

0x6882,	// (0x00053453) aid_size_row_itut2_dropdow_list

0x690e,	// (0x000534df) grid_vitu2_function_top_pane_ParamLimits

0x690e,	// (0x000534df) grid_vitu2_function_top_pane

0x6973,	// (0x00053544) popup_vitu2_dropdown_list_window_ParamLimits

0x6973,	// (0x00053544) popup_vitu2_dropdown_list_window

0x699c,	// (0x0005356d) popup_vitu2_match_list_window

0x71db,	// (0x00053dac) cell_vitu2_function_top_pane_ParamLimits

0x71db,	// (0x00053dac) cell_vitu2_function_top_pane

0x71f9,	// (0x00053dca) cell_vitu2_function_top_pane_cp01_ParamLimits

0x71f9,	// (0x00053dca) cell_vitu2_function_top_pane_cp01

0x7217,	// (0x00053de8) cell_vitu2_function_top_wide_pane_ParamLimits

0x7217,	// (0x00053de8) cell_vitu2_function_top_wide_pane

0xa4c6,	// (0x00057097) bg_button_pane_cp012

0x7235,	// (0x00053e06) cell_vitu2_function_top_pane_g1

0xa207,	// (0x00056dd8) bg_button_pane_cp013_ParamLimits

0xa207,	// (0x00056dd8) bg_button_pane_cp013

0x7249,	// (0x00053e1a) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x7249,	// (0x00053e1a) cell_vitu2_function_top_wide_pane_g1

0xa4c6,	// (0x00057097) bg_popup_sub_pane_cp20

0x7261,	// (0x00053e32) list_vitu2_match_list_pane

0xd6f9,	// (0x0005a2ca) bg_popup_sub_pane_cp20_g1

0xd701,	// (0x0005a2d2) bg_popup_sub_pane_cp20_g2

0xac3a,	// (0x0005780b) bg_popup_sub_pane_cp20_g3

0xd709,	// (0x0005a2da) bg_popup_sub_pane_cp20_g4

0xac1a,	// (0x000577eb) bg_popup_sub_pane_cp20_g5

0xd91d,	// (0x0005a4ee) bg_popup_sub_pane_cp20_g6

0xd719,	// (0x0005a2ea) bg_popup_sub_pane_cp20_g7

0xd721,	// (0x0005a2f2) bg_popup_sub_pane_cp20_g8

0xd729,	// (0x0005a2fa) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x0005c5be) bg_popup_sub_pane_cp20_g

0xa223,	// (0x00056df4) list_vitu2_match_list_item_pane_ParamLimits

0xa223,	// (0x00056df4) list_vitu2_match_list_item_pane

0xa235,	// (0x00056e06) list_vitu2_match_list_item_pane_t1

0x977d,	// (0x0005634e) bg_popup_sub_pane_cp21

0xb07c,	// (0x00057c4d) grid_vitu2_dropdown_list_pane

0x727f,	// (0x00053e50) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x727f,	// (0x00053e50) cell_vitu2_dropdown_list_char_pane

0x72a0,	// (0x00053e71) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x72a0,	// (0x00053e71) cell_vitu2_dropdown_list_ctrl_pane

0xd925,	// (0x0005a4f6) cell_vitu2_dropdown_list_char_pane_g1

0xd92e,	// (0x0005a4ff) cell_vitu2_dropdown_list_char_pane_g2

0xd937,	// (0x0005a508) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x0005c5db) cell_vitu2_dropdown_list_char_pane_g

0x72cc,	// (0x00053e9d) cell_vitu2_dropdown_list_char_pane_t1

0x72da,	// (0x00053eab) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x72da,	// (0x00053eab) cell_vitu2_dropdown_list_ctrl_pane_g1

0x72e7,	// (0x00053eb8) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x72e7,	// (0x00053eb8) cell_vitu2_dropdown_list_ctrl_pane_g2

0x72f4,	// (0x00053ec5) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x72f4,	// (0x00053ec5) cell_vitu2_dropdown_list_ctrl_pane_g3

0x7301,	// (0x00053ed2) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x7301,	// (0x00053ed2) cell_vitu2_dropdown_list_ctrl_pane_g4

0xcedb,	// (0x00059aac) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xcedb,	// (0x00059aac) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x0005c5e2) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x0005c5e2) cell_vitu2_dropdown_list_ctrl_pane_g

0x731d,	// (0x00053eee) aid_size_cell_gallery2_ParamLimits

0x731d,	// (0x00053eee) aid_size_cell_gallery2

0x733b,	// (0x00053f0c) grid_gallery2_pane_ParamLimits

0x733b,	// (0x00053f0c) grid_gallery2_pane

0x7355,	// (0x00053f26) scroll_pane_cp029_ParamLimits

0x7355,	// (0x00053f26) scroll_pane_cp029

0x7361,	// (0x00053f32) cell_gallery2_pane_ParamLimits

0x7361,	// (0x00053f32) cell_gallery2_pane

0xd940,	// (0x0005a511) cell_gallery2_pane_g2

0x73bc,	// (0x00053f8d) cell_gallery2_pane_g3

0xd948,	// (0x0005a519) cell_gallery2_pane_g4

0xd950,	// (0x0005a521) cell_gallery2_pane_g5

0xb463,	// (0x00058034) grid_highlight_pane_cp10

0x699c,	// (0x0005356d) popup_vitu2_match_list_window_ParamLimits

0x69b3,	// (0x00053584) popup_vitu2_query_window_ParamLimits

0x69b3,	// (0x00053584) popup_vitu2_query_window

0x977d,	// (0x0005634e) bg_vitu2_candi_button_pane

0xd925,	// (0x0005a4f6) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd92e,	// (0x0005a4ff) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd937,	// (0x0005a508) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x05d7,	// (0x0004d1a8) bg_button_pane_cp015

0x73c4,	// (0x00053f95) bg_button_pane_cp016

0x73d7,	// (0x00053fa8) bg_button_pane_cp017

0xc85b,	// (0x0005942c) bg_popup_sub_pane_cp22

0xd958,	// (0x0005a529) popup_vitu2_query_window_g1

0x060a,	// (0x0004d1db) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x0005c5ed) popup_vitu2_query_window_g

0x0629,	// (0x0004d1fa) popup_vitu2_query_window_t1_ParamLimits

0x0629,	// (0x0004d1fa) popup_vitu2_query_window_t1

0x065e,	// (0x0004d22f) popup_vitu2_query_window_t2_ParamLimits

0x065e,	// (0x0004d22f) popup_vitu2_query_window_t2

0x0670,	// (0x0004d241) popup_vitu2_query_window_t3_ParamLimits

0x0670,	// (0x0004d241) popup_vitu2_query_window_t3

0x73fb,	// (0x00053fcc) popup_vitu2_query_window_t4_ParamLimits

0x73fb,	// (0x00053fcc) popup_vitu2_query_window_t4

0x741c,	// (0x00053fed) popup_vitu2_query_window_t5_ParamLimits

0x741c,	// (0x00053fed) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x0005c5f4) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x0005c5f4) popup_vitu2_query_window_t

0xd7fb,	// (0x0005a3cc) main_cset_text_pane

0x6e06,	// (0x000539d7) aid_area_touch_slider_ParamLimits

0x6e22,	// (0x000539f3) cset_slider_pane_ParamLimits

0x6e4c,	// (0x00053a1d) main_cset_slider_pane_g1_ParamLimits

0x6e61,	// (0x00053a32) main_cset_slider_pane_g2_ParamLimits

0xd81c,	// (0x0005a3ed) main_cset_slider_pane_g3_ParamLimits

0xd81c,	// (0x0005a3ed) main_cset_slider_pane_g3

0x6e76,	// (0x00053a47) main_cset_slider_pane_g4_ParamLimits

0x6e76,	// (0x00053a47) main_cset_slider_pane_g4

0x6e85,	// (0x00053a56) main_cset_slider_pane_g5_ParamLimits

0x6e85,	// (0x00053a56) main_cset_slider_pane_g5

0x6e91,	// (0x00053a62) main_cset_slider_pane_g6_ParamLimits

0x6e91,	// (0x00053a62) main_cset_slider_pane_g6

0xf976,	// (0x0005c547) main_cset_slider_pane_g_ParamLimits

0xd84c,	// (0x0005a41d) main_cset_slider_pane_t1_ParamLimits

0x6f1d,	// (0x00053aee) main_cset_slider_pane_t2_ParamLimits

0x6f37,	// (0x00053b08) main_cset_slider_pane_t3_ParamLimits

0x6f51,	// (0x00053b22) main_cset_slider_pane_t4_ParamLimits

0x6f6b,	// (0x00053b3c) main_cset_slider_pane_t5_ParamLimits

0x6f85,	// (0x00053b56) main_cset_slider_pane_t6_ParamLimits

0x6f9a,	// (0x00053b6b) main_cset_slider_pane_t7_ParamLimits

0x6fc4,	// (0x00053b95) main_cset_slider_pane_t8_ParamLimits

0x6fc4,	// (0x00053b95) main_cset_slider_pane_t8

0x6fec,	// (0x00053bbd) main_cset_slider_pane_t9_ParamLimits

0x6fec,	// (0x00053bbd) main_cset_slider_pane_t9

0x7014,	// (0x00053be5) main_cset_slider_pane_t10_ParamLimits

0x7014,	// (0x00053be5) main_cset_slider_pane_t10

0x703c,	// (0x00053c0d) main_cset_slider_pane_t11_ParamLimits

0x703c,	// (0x00053c0d) main_cset_slider_pane_t11

0x7064,	// (0x00053c35) main_cset_slider_pane_t12_ParamLimits

0x7064,	// (0x00053c35) main_cset_slider_pane_t12

0x7081,	// (0x00053c52) main_cset_slider_pane_t13_ParamLimits

0x7081,	// (0x00053c52) main_cset_slider_pane_t13

0xf99b,	// (0x0005c56c) main_cset_slider_pane_t_ParamLimits

0x977d,	// (0x0005634e) bg_popup_sub_pane_cp011

0xd964,	// (0x0005a535) main_cset_text_pane_g1

0xd96c,	// (0x0005a53d) main_cset_text_pane_t1

0xd97a,	// (0x0005a54b) main_cset_text_pane_t2

0xd988,	// (0x0005a559) main_cset_text_pane_t3

0xd996,	// (0x0005a567) main_cset_text_pane_t4

0xd9a4,	// (0x0005a575) main_cset_text_pane_t5

0xd9b2,	// (0x0005a583) main_cset_text_pane_t6

0xd9c0,	// (0x0005a591) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x0005c603) main_cset_text_pane_t

0x977d,	// (0x0005634e) main_cam4_burst_pane

0x977d,	// (0x0005634e) main_cam5_pane

0x6d45,	// (0x00053916) bg_button_pane_cp019

0x6d4e,	// (0x0005391f) bg_button_pane_cp020

0xd828,	// (0x0005a3f9) main_cset_slider_pane_g7_ParamLimits

0xd828,	// (0x0005a3f9) main_cset_slider_pane_g7

0xd834,	// (0x0005a405) main_cset_slider_pane_g8_ParamLimits

0xd834,	// (0x0005a405) main_cset_slider_pane_g8

0x6ea5,	// (0x00053a76) main_cset_slider_pane_g9_ParamLimits

0x6ea5,	// (0x00053a76) main_cset_slider_pane_g9

0x6eb1,	// (0x00053a82) main_cset_slider_pane_g10_ParamLimits

0x6eb1,	// (0x00053a82) main_cset_slider_pane_g10

0x6ebd,	// (0x00053a8e) main_cset_slider_pane_g11_ParamLimits

0x6ebd,	// (0x00053a8e) main_cset_slider_pane_g11

0x6ec9,	// (0x00053a9a) main_cset_slider_pane_g12_ParamLimits

0x6ec9,	// (0x00053a9a) main_cset_slider_pane_g12

0x6ed5,	// (0x00053aa6) main_cset_slider_pane_g13_ParamLimits

0x6ed5,	// (0x00053aa6) main_cset_slider_pane_g13

0x6ee1,	// (0x00053ab2) main_cset_slider_pane_g14_ParamLimits

0x6ee1,	// (0x00053ab2) main_cset_slider_pane_g14

0x6eed,	// (0x00053abe) main_cset_slider_pane_g15_ParamLimits

0x6eed,	// (0x00053abe) main_cset_slider_pane_g15

0xd87a,	// (0x0005a44b) main_cset_slider_pane_t14_ParamLimits

0xd87a,	// (0x0005a44b) main_cset_slider_pane_t14

0xd8b3,	// (0x0005a484) main_cset_slider_pane_t15_ParamLimits

0xd8b3,	// (0x0005a484) main_cset_slider_pane_t15

0x743d,	// (0x0005400e) aid_cam4_burst_size_cell_ParamLimits

0x743d,	// (0x0005400e) aid_cam4_burst_size_cell

0x745d,	// (0x0005402e) grid_cam4_burst_pane_ParamLimits

0x745d,	// (0x0005402e) grid_cam4_burst_pane

0x7495,	// (0x00054066) linegrid_cam4_burst_pane_ParamLimits

0x7495,	// (0x00054066) linegrid_cam4_burst_pane

0xda29,	// (0x0005a5fa) scroll_pane_cp30_ParamLimits

0xda29,	// (0x0005a5fa) scroll_pane_cp30

0x74b9,	// (0x0005408a) cell_cam4_burst_pane_ParamLimits

0x74b9,	// (0x0005408a) cell_cam4_burst_pane

0xd9ce,	// (0x0005a59f) linegrid_cam4_burst_pane_g1_ParamLimits

0xd9ce,	// (0x0005a59f) linegrid_cam4_burst_pane_g1

0x7506,	// (0x000540d7) linegrid_cam4_burst_pane_g2_ParamLimits

0x7506,	// (0x000540d7) linegrid_cam4_burst_pane_g2

0xd9db,	// (0x0005a5ac) linegrid_cam4_burst_pane_g3_ParamLimits

0xd9db,	// (0x0005a5ac) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x0005c612) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x0005c612) linegrid_cam4_burst_pane_g

0x7517,	// (0x000540e8) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x7517,	// (0x000540e8) linegrid_cam4_burst_pane_g3_copy1

0xd9e8,	// (0x0005a5b9) linegrid_cam4_burst_pane_g4_ParamLimits

0xd9e8,	// (0x0005a5b9) linegrid_cam4_burst_pane_g4

0x7531,	// (0x00054102) linegrid_cam4_burst_pane_g5_ParamLimits

0x7531,	// (0x00054102) linegrid_cam4_burst_pane_g5

0x7542,	// (0x00054113) linegrid_cam4_burst_pane_g6_ParamLimits

0x7542,	// (0x00054113) linegrid_cam4_burst_pane_g6

0xd9f5,	// (0x0005a5c6) linegrid_cam4_burst_pane_g7_ParamLimits

0xd9f5,	// (0x0005a5c6) linegrid_cam4_burst_pane_g7

0x7559,	// (0x0005412a) cell_cam4_burst_pane_g1

0xda35,	// (0x0005a606) main_cam5_pane_t1_ParamLimits

0xda35,	// (0x0005a606) main_cam5_pane_t1

0xda47,	// (0x0005a618) main_cam5_pane_t2_ParamLimits

0xda47,	// (0x0005a618) main_cam5_pane_t2

0xda59,	// (0x0005a62a) main_cam5_pane_t3_ParamLimits

0xda59,	// (0x0005a62a) main_cam5_pane_t3

0xda6b,	// (0x0005a63c) main_cam5_pane_t4_ParamLimits

0xda6b,	// (0x0005a63c) main_cam5_pane_t4

0xda83,	// (0x0005a654) main_cam5_pane_t5_ParamLimits

0xda83,	// (0x0005a654) main_cam5_pane_t5

0xda97,	// (0x0005a668) main_cam5_pane_t6_ParamLimits

0xda97,	// (0x0005a668) main_cam5_pane_t6

0xdaab,	// (0x0005a67c) main_cam5_pane_t7_ParamLimits

0xdaab,	// (0x0005a67c) main_cam5_pane_t7

0xdabd,	// (0x0005a68e) main_cam5_pane_t8_ParamLimits

0xdabd,	// (0x0005a68e) main_cam5_pane_t8

0xdad9,	// (0x0005a6aa) main_cam5_pane_t9_ParamLimits

0xdad9,	// (0x0005a6aa) main_cam5_pane_t9

0xdaeb,	// (0x0005a6bc) main_cam5_pane_t10_ParamLimits

0xdaeb,	// (0x0005a6bc) main_cam5_pane_t10

0xdafd,	// (0x0005a6ce) main_cam5_pane_t11_ParamLimits

0xdafd,	// (0x0005a6ce) main_cam5_pane_t11

0xdb0f,	// (0x0005a6e0) main_cam5_pane_t12_ParamLimits

0xdb0f,	// (0x0005a6e0) main_cam5_pane_t12

0xdb24,	// (0x0005a6f5) main_cam5_pane_t13_ParamLimits

0xdb24,	// (0x0005a6f5) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x0005c61e) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x0005c61e) main_cam5_pane_t

0x12c5,	// (0x0004de96) popup_scut_keymap_window_ParamLimits

0x12c5,	// (0x0004de96) popup_scut_keymap_window

0x756c,	// (0x0005413d) aid_size_cell_brow_shortcut

0xb463,	// (0x00058034) bg_popup_window_pane_cp010

0x7578,	// (0x00054149) grid_scut_pane

0x7584,	// (0x00054155) cell_scut_pane_ParamLimits

0x7584,	// (0x00054155) cell_scut_pane

0x759b,	// (0x0005416c) cell_scut_pane_g1

0xdb41,	// (0x0005a712) cell_scut_pane_t1

0xdb50,	// (0x0005a721) cell_scut_pane_t2

0x75a4,	// (0x00054175) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x0005c639) cell_scut_pane_t

0x5417,	// (0x00051fe8) main_mup3_pane_g8_ParamLimits

0x5417,	// (0x00051fe8) main_mup3_pane_g8

0x689a,	// (0x0005346b) area_vitu2_query_pane_ParamLimits

0x689a,	// (0x0005346b) area_vitu2_query_pane

0x05e9,	// (0x0004d1ba) input_focus_pane_cp08

0xdb5f,	// (0x0005a730) area_vitu2_query_pane_g1

0x06ee,	// (0x0004d2bf) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x0005c640) area_vitu2_query_pane_g

0x75b2,	// (0x00054183) area_vitu2_query_pane_t1_ParamLimits

0x75b2,	// (0x00054183) area_vitu2_query_pane_t1

0x75c6,	// (0x00054197) area_vitu2_query_pane_t2_ParamLimits

0x75c6,	// (0x00054197) area_vitu2_query_pane_t2

0x06ff,	// (0x0004d2d0) area_vitu2_query_pane_t3_ParamLimits

0x06ff,	// (0x0004d2d0) area_vitu2_query_pane_t3

0x75da,	// (0x000541ab) area_vitu2_query_pane_t4_ParamLimits

0x75da,	// (0x000541ab) area_vitu2_query_pane_t4

0x7602,	// (0x000541d3) area_vitu2_query_pane_t5_ParamLimits

0x7602,	// (0x000541d3) area_vitu2_query_pane_t5

0x762a,	// (0x000541fb) area_vitu2_query_pane_t6_ParamLimits

0x762a,	// (0x000541fb) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x0005c645) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x0005c645) area_vitu2_query_pane_t

0x7676,	// (0x00054247) bg_button_pane_cp018

0x7684,	// (0x00054255) bg_button_pane_cp021

0x0727,	// (0x0004d2f8) bg_button_pane_cp022

0x0736,	// (0x0004d307) input_focus_pane_cp09

0xb2ac,	// (0x00057e7d) aid_size_touch_mv_arrow_left

0xb2d5,	// (0x00057ea6) aid_size_touch_mv_arrow_right

0x6f05,	// (0x00053ad6) main_cset_slider_pane_g16_ParamLimits

0x6f05,	// (0x00053ad6) main_cset_slider_pane_g16

0x6f11,	// (0x00053ae2) main_cset_slider_pane_g17_ParamLimits

0x6f11,	// (0x00053ae2) main_cset_slider_pane_g17

0x7559,	// (0x0005412a) cell_cam4_burst_pane_g1_ParamLimits

0x977d,	// (0x0005634e) compa_mode_pane

0x711b,	// (0x00053cec) popup_vtel_slider_window_g3_ParamLimits

0x711b,	// (0x00053cec) popup_vtel_slider_window_g3

0x7132,	// (0x00053d03) popup_vtel_slider_window_g4_ParamLimits

0x7132,	// (0x00053d03) popup_vtel_slider_window_g4

0x7149,	// (0x00053d1a) popup_vtel_slider_window_t1_ParamLimits

0x7149,	// (0x00053d1a) popup_vtel_slider_window_t1

0x977d,	// (0x0005634e) main_cl_pane

0x9d7e,	// (0x0005694f) popup_imed_adjust2_window_ParamLimits

0xc85b,	// (0x0005942c) bg_tb_trans_pane_cp05_ParamLimits

0xd1be,	// (0x00059d8f) popup_imed_adjust2_window_g1_ParamLimits

0xd1cd,	// (0x00059d9e) popup_imed_adjust2_window_g2_ParamLimits

0xd1cd,	// (0x00059d9e) popup_imed_adjust2_window_g2

0xd1d9,	// (0x00059daa) popup_imed_adjust2_window_g3_ParamLimits

0xd1d9,	// (0x00059daa) popup_imed_adjust2_window_g3

0x0002,

0xf7df,	// (0x0005c3b0) popup_imed_adjust2_window_g_ParamLimits

0xf7df,	// (0x0005c3b0) popup_imed_adjust2_window_g

0xd1e5,	// (0x00059db6) popup_imed_adjust2_window_t1_ParamLimits

0xd1fd,	// (0x00059dce) slider_imed_adjust_pane_ParamLimits

0xd211,	// (0x00059de2) slider_imed_adjust_pane_g1_ParamLimits

0xd221,	// (0x00059df2) slider_imed_adjust_pane_g2_ParamLimits

0xd231,	// (0x00059e02) slider_imed_adjust_pane_g3_ParamLimits

0xd242,	// (0x00059e13) slider_imed_adjust_pane_g4_ParamLimits

0xf7e6,	// (0x0005c3b7) slider_imed_adjust_pane_g_ParamLimits

0x6623,	// (0x000531f4) aid_touch_area_cam4_ParamLimits

0x6623,	// (0x000531f4) aid_touch_area_cam4

0xa0fa,	// (0x00056ccb) battery_pane_cp01

0x66f2,	// (0x000532c3) main_camera4_pane_g6_ParamLimits

0x66f2,	// (0x000532c3) main_camera4_pane_g6

0x671c,	// (0x000532ed) main_camera4_pane_t2_ParamLimits

0x671c,	// (0x000532ed) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x0005c4ba) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x0005c4ba) main_camera4_pane_t

0x6751,	// (0x00053322) aid_touch_area_vid4_ParamLimits

0x6751,	// (0x00053322) aid_touch_area_vid4

0x67a5,	// (0x00053376) main_video4_pane_g5_ParamLimits

0x67a5,	// (0x00053376) main_video4_pane_g5

0x67ca,	// (0x0005339b) vid4_progress_pane_ParamLimits

0x67ca,	// (0x0005339b) vid4_progress_pane

0xd840,	// (0x0005a411) main_cset_slider_pane_g18_ParamLimits

0xd840,	// (0x0005a411) main_cset_slider_pane_g18

0xda02,	// (0x0005a5d3) cell_cam4_burst_pane_g2_ParamLimits

0xda02,	// (0x0005a5d3) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x0005c619) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x0005c619) cell_cam4_burst_pane_g

0xa823,	// (0x000573f4) bg_cl_pane_ParamLimits

0xa823,	// (0x000573f4) bg_cl_pane

0x7690,	// (0x00054261) cl_header_pane_ParamLimits

0x7690,	// (0x00054261) cl_header_pane

0x76a4,	// (0x00054275) cl_listscroll_pane_ParamLimits

0x76a4,	// (0x00054275) cl_listscroll_pane

0xdb6b,	// (0x0005a73c) bg_cl_pane_g1

0xdb73,	// (0x0005a744) bg_cl_pane_g2

0xdb7b,	// (0x0005a74c) bg_cl_pane_g3

0xdb83,	// (0x0005a754) bg_cl_pane_g4

0xdb8b,	// (0x0005a75c) bg_cl_pane_g5

0xdb93,	// (0x0005a764) bg_cl_pane_g6

0xdb9b,	// (0x0005a76c) bg_cl_pane_g7

0xdba3,	// (0x0005a774) bg_cl_pane_g8

0xdbab,	// (0x0005a77c) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x0005c654) bg_cl_pane_g

0x76b4,	// (0x00054285) aid_height_cl_leading_ParamLimits

0x76b4,	// (0x00054285) aid_height_cl_leading

0x76c0,	// (0x00054291) aid_height_cl_text_ParamLimits

0x76c0,	// (0x00054291) aid_height_cl_text

0xa4c6,	// (0x00057097) bg_cl_header_pane_ParamLimits

0xa4c6,	// (0x00057097) bg_cl_header_pane

0x76df,	// (0x000542b0) cl_header_pane_g1_ParamLimits

0x76df,	// (0x000542b0) cl_header_pane_g1

0x76f5,	// (0x000542c6) cl_header_pane_t1_ParamLimits

0x76f5,	// (0x000542c6) cl_header_pane_t1

0xdbb3,	// (0x0005a784) cl_list_pane

0xd813,	// (0x0005a3e4) hc_scroll_pane_cp01

0xac1a,	// (0x000577eb) bg_cl_header_pane_g1

0xd6f9,	// (0x0005a2ca) bg_cl_header_pane_g2

0xac3a,	// (0x0005780b) bg_cl_header_pane_g3

0xd709,	// (0x0005a2da) bg_cl_header_pane_g4

0xd701,	// (0x0005a2d2) bg_cl_header_pane_g5

0xd91d,	// (0x0005a4ee) bg_cl_header_pane_g6

0xd721,	// (0x0005a2f2) bg_cl_header_pane_g7

0xd729,	// (0x0005a2fa) bg_cl_header_pane_g8

0xd719,	// (0x0005a2ea) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x0005c667) bg_cl_header_pane_g

0x770e,	// (0x000542df) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x770e,	// (0x000542df) hc_cl_list_double_graphic_heading_pane

0x771f,	// (0x000542f0) hc_cl_list_single_graphic_pane_ParamLimits

0x771f,	// (0x000542f0) hc_cl_list_single_graphic_pane

0x7735,	// (0x00054306) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x7735,	// (0x00054306) hc_cl_list_single_graphic_pane_g1

0x7741,	// (0x00054312) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x7741,	// (0x00054312) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x0005c67a) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x0005c67a) hc_cl_list_single_graphic_pane_g

0x7755,	// (0x00054326) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x7755,	// (0x00054326) hc_cl_list_single_graphic_pane_t1

0x7735,	// (0x00054306) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x7735,	// (0x00054306) hc_cl_list_double_graphic_heading_pane_g1

0x776a,	// (0x0005433b) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x776a,	// (0x0005433b) hc_cl_list_double_graphic_heading_pane_g2

0x777e,	// (0x0005434f) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x777e,	// (0x0005434f) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x0005c67f) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x0005c67f) hc_cl_list_double_graphic_heading_pane_g

0x7792,	// (0x00054363) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x7792,	// (0x00054363) hc_cl_list_double_graphic_heading_pane_t1

0x77a7,	// (0x00054378) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x77a7,	// (0x00054378) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x0005c686) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x0005c686) hc_cl_list_double_graphic_heading_pane_t

0xa24b,	// (0x00056e1c) vid4_progress_pane_g1

0xa25b,	// (0x00056e2c) vid4_progress_pane_g2

0x77bc,	// (0x0005438d) vid4_progress_pane_g3

0xa26b,	// (0x00056e3c) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x0005c68b) vid4_progress_pane_g

0x77ce,	// (0x0005439f) vid4_progress_pane_t1

0xa283,	// (0x00056e54) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x0005c696) vid4_progress_pane_t

0x77e6,	// (0x000543b7) wait_bar_pane_cp07

0xca56,	// (0x00059627) blid_firmament_pane_ParamLimits

0xca99,	// (0x0005966a) popup_blid_sat_info2_window_g1

0xcabd,	// (0x0005968e) popup_blid_sat_info2_window_t3

0xcacb,	// (0x0005969c) popup_blid_sat_info2_window_t4

0xcad9,	// (0x000596aa) popup_blid_sat_info2_window_t5

0xcae7,	// (0x000596b8) popup_blid_sat_info2_window_t6

0xcaf7,	// (0x000596c8) popup_blid_sat_info2_window_t7

0xcb05,	// (0x000596d6) popup_blid_sat_info2_window_t8

0xcb13,	// (0x000596e4) popup_blid_sat_info2_window_t9

0xcb21,	// (0x000596f2) popup_blid_sat_info2_window_t10

0xcbe3,	// (0x000597b4) aid_firma_cardinal_ParamLimits

0xcbf7,	// (0x000597c8) blid_firmament_pane_t1_ParamLimits

0xcc0e,	// (0x000597df) blid_firmament_pane_t2_ParamLimits

0xcc25,	// (0x000597f6) blid_firmament_pane_t3_ParamLimits

0xcc3c,	// (0x0005980d) blid_firmament_pane_t4_ParamLimits

0xf6d3,	// (0x0005c2a4) blid_firmament_pane_t_ParamLimits

0xcc53,	// (0x00059824) blid_sat_info_pane_ParamLimits

0xa4c6,	// (0x00057097) main_cam_set_pane_ParamLimits

0x5cdb,	// (0x000528ac) aid_size_cell_colour_35_ParamLimits

0x5cfb,	// (0x000528cc) aid_size_cell_colour_112_ParamLimits

0x5d1b,	// (0x000528ec) aid_size_cell_effect_ParamLimits

0xc85b,	// (0x0005942c) bg_tb_trans_pane_cp02_ParamLimits

0xae82,	// (0x00057a53) heading_imed_pane_ParamLimits

0x5d3b,	// (0x0005290c) listscroll_imed_pane_ParamLimits

0xbe81,	// (0x00058a52) popup_call2_audio_first_window_g5_ParamLimits

0xbe81,	// (0x00058a52) popup_call2_audio_first_window_g5

0x62ce,	// (0x00052e9f) aid_size_touch_image3_arrow_left_ParamLimits

0x62ce,	// (0x00052e9f) aid_size_touch_image3_arrow_left

0x62fa,	// (0x00052ecb) aid_size_touch_image3_arrow_right_ParamLimits

0x62fa,	// (0x00052ecb) aid_size_touch_image3_arrow_right

0xa298,	// (0x00056e69) vid4_progress_pane_t3

0x604e,	// (0x00052c1f) main_hwr_training_symbol_option_pane_ParamLimits

0x604e,	// (0x00052c1f) main_hwr_training_symbol_option_pane

0xd4ab,	// (0x0005a07c) popup_hwr_training_preview_window_ParamLimits

0xd4ab,	// (0x0005a07c) popup_hwr_training_preview_window

0x606e,	// (0x00052c3f) hwr_training_navi_pane_g5_ParamLimits

0x606e,	// (0x00052c3f) hwr_training_navi_pane_g5

0xd6e7,	// (0x0005a2b8) popup_char_count_window

0xa4c6,	// (0x00057097) bg_popup_sub_pane_cp20_ParamLimits

0x7261,	// (0x00053e32) list_vitu2_match_list_pane_ParamLimits

0x7270,	// (0x00053e41) vitu2_page_scroll_pane_ParamLimits

0x7270,	// (0x00053e41) vitu2_page_scroll_pane

0xdbbc,	// (0x0005a78d) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdbbc,	// (0x0005a78d) list_single_hwr_training_symbol_option_pane

0xdbcf,	// (0x0005a7a0) list_single_hwr_training_symbol_option_pane_g1

0xdbd7,	// (0x0005a7a8) list_single_hwr_training_symbol_option_pane_t1

0xdbe5,	// (0x0005a7b6) bg_button_pane_cp023

0xdbee,	// (0x0005a7bf) bg_button_pane_cp024

0x783f,	// (0x00054410) vitu2_page_scroll_pane_g1

0x7847,	// (0x00054418) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x0005c69d) vitu2_page_scroll_pane_g

0x784f,	// (0x00054420) vitu2_page_scroll_pane_t1

0xdc21,	// (0x0005a7f2) popup_char_count_window_g1

0xdc2a,	// (0x0005a7fb) popup_char_count_window_g2

0xdc33,	// (0x0005a804) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x0005c6a2) popup_char_count_window_g

0xdc3c,	// (0x0005a80d) popup_char_count_window_t1

0x977d,	// (0x0005634e) main_vded2_pane

0xd1aa,	// (0x00059d7b) aid_size_cell_imed_line

0xd1b4,	// (0x00059d85) grid_imed_line_width_pane

0xa1b2,	// (0x00056d83) vid4_indicators_pane_g4

0xdc4a,	// (0x0005a81b) cell_imed_line_width_pane_ParamLimits

0xdc4a,	// (0x0005a81b) cell_imed_line_width_pane

0xdc5e,	// (0x0005a82f) cell_imed_line_width_pane_g1

0xdc67,	// (0x0005a838) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x0005c6a9) cell_imed_line_width_pane_g

0x785e,	// (0x0005442f) main_vded2_pane_g1_ParamLimits

0x785e,	// (0x0005442f) main_vded2_pane_g1

0x7874,	// (0x00054445) main_vded2_pane_g2_ParamLimits

0x7874,	// (0x00054445) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x0005c6ae) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x0005c6ae) main_vded2_pane_g

0x7886,	// (0x00054457) vded2_slider_pane_ParamLimits

0x7886,	// (0x00054457) vded2_slider_pane

0x7896,	// (0x00054467) aid_size_touch_vded2_end

0x78a0,	// (0x00054471) aid_size_touch_vded2_playhead

0xdc6f,	// (0x0005a840) aid_size_touch_vded2_start

0xdc77,	// (0x0005a848) vded2_slider_bg_pane

0xdc80,	// (0x0005a851) vded2_slider_pane_g1

0xdc89,	// (0x0005a85a) vded2_slider_pane_g2

0x78aa,	// (0x0005447b) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x0005c6b3) vded2_slider_pane_g

0xdc91,	// (0x0005a862) vded2_slider_bg_pane_g1

0xdc9a,	// (0x0005a86b) vded2_slider_bg_pane_g2

0xdca3,	// (0x0005a874) vded2_slider_bg_pane_g3

0x0002,

0xfae9,	// (0x0005c6ba) vded2_slider_bg_pane_g

0x3a4e,	// (0x0005061f) aid_postcard_touch_down_pane_ParamLimits

0x3a4e,	// (0x0005061f) aid_postcard_touch_down_pane

0x3a64,	// (0x00050635) aid_postcard_touch_up_pane_ParamLimits

0x3a64,	// (0x00050635) aid_postcard_touch_up_pane

0x977d,	// (0x0005634e) main_blid2_pane

0x9d64,	// (0x00056935) popup_blid2_search_window

0x977d,	// (0x0005634e) blid2_gps_pane

0x977d,	// (0x0005634e) blid2_navig_pane

0x977d,	// (0x0005634e) blid2_search_pane

0x977d,	// (0x0005634e) blid2_tripm_pane

0x78b5,	// (0x00054486) blid2_search_pane_g1_ParamLimits

0x78b5,	// (0x00054486) blid2_search_pane_g1

0x78cf,	// (0x000544a0) blid2_search_pane_t1_ParamLimits

0x78cf,	// (0x000544a0) blid2_search_pane_t1

0x78e1,	// (0x000544b2) aid_size_cell_blid2_gps_ParamLimits

0x78e1,	// (0x000544b2) aid_size_cell_blid2_gps

0x78f9,	// (0x000544ca) blid2_gps_pane_g1_ParamLimits

0x78f9,	// (0x000544ca) blid2_gps_pane_g1

0x790d,	// (0x000544de) grid_blid2_satellite_pane_ParamLimits

0x790d,	// (0x000544de) grid_blid2_satellite_pane

0x7927,	// (0x000544f8) blid2_navig_pane_g1_ParamLimits

0x7927,	// (0x000544f8) blid2_navig_pane_g1

0x7933,	// (0x00054504) blid2_navig_pane_t1_ParamLimits

0x7933,	// (0x00054504) blid2_navig_pane_t1

0x794e,	// (0x0005451f) blid2_navig_pane_t2_ParamLimits

0x794e,	// (0x0005451f) blid2_navig_pane_t2

0x0001,

0xfaf0,	// (0x0005c6c1) blid2_navig_pane_t_ParamLimits

0xfaf0,	// (0x0005c6c1) blid2_navig_pane_t

0x7969,	// (0x0005453a) blid2_navig_ring_pane_ParamLimits

0x7969,	// (0x0005453a) blid2_navig_ring_pane

0x7982,	// (0x00054553) blid2_speed_pane_ParamLimits

0x7982,	// (0x00054553) blid2_speed_pane

0x798e,	// (0x0005455f) blid2_tripm_pane_g1_ParamLimits

0x798e,	// (0x0005455f) blid2_tripm_pane_g1

0x79a7,	// (0x00054578) blid2_tripm_pane_g2_ParamLimits

0x79a7,	// (0x00054578) blid2_tripm_pane_g2

0x79bb,	// (0x0005458c) blid2_tripm_pane_g3_ParamLimits

0x79bb,	// (0x0005458c) blid2_tripm_pane_g3

0x79cf,	// (0x000545a0) blid2_tripm_pane_g4_ParamLimits

0x79cf,	// (0x000545a0) blid2_tripm_pane_g4

0x79e3,	// (0x000545b4) blid2_tripm_pane_g5_ParamLimits

0x79e3,	// (0x000545b4) blid2_tripm_pane_g5

0x0005,

0xfaf5,	// (0x0005c6c6) blid2_tripm_pane_g_ParamLimits

0xfaf5,	// (0x0005c6c6) blid2_tripm_pane_g

0x7a09,	// (0x000545da) blid2_tripm_pane_t1_ParamLimits

0x7a09,	// (0x000545da) blid2_tripm_pane_t1

0x7a24,	// (0x000545f5) blid2_tripm_pane_t2_ParamLimits

0x7a24,	// (0x000545f5) blid2_tripm_pane_t2

0x7a3d,	// (0x0005460e) blid2_tripm_pane_t3_ParamLimits

0x7a3d,	// (0x0005460e) blid2_tripm_pane_t3

0x0003,

0xfb02,	// (0x0005c6d3) blid2_tripm_pane_t_ParamLimits

0xfb02,	// (0x0005c6d3) blid2_tripm_pane_t

0x7a84,	// (0x00054655) cell_blid2_satellite_pane_ParamLimits

0x7a84,	// (0x00054655) cell_blid2_satellite_pane

0x7aa2,	// (0x00054673) cell_blid2_satellite_pane_g1

0xdcac,	// (0x0005a87d) cell_blid2_satellite_pane_t1

0xcc63,	// (0x00059834) blid2_speed_pane_g1

0xdcba,	// (0x0005a88b) blid2_speed_pane_t1

0xdcc8,	// (0x0005a899) blid2_speed_pane_t2

0x0001,

0xfb0b,	// (0x0005c6dc) blid2_speed_pane_t

0xcc63,	// (0x00059834) blid2_navig_ring_pane_g1

0x7aab,	// (0x0005467c) blid2_navig_ring_pane_g2

0x7ab3,	// (0x00054684) blid2_navig_ring_pane_g3

0x7abb,	// (0x0005468c) blid2_navig_ring_pane_g4

0x7ac3,	// (0x00054694) blid2_navig_ring_pane_g5

0x0004,

0xfb10,	// (0x0005c6e1) blid2_navig_ring_pane_g

0x977d,	// (0x0005634e) bg_popup_window_pane_cp011

0xdcd6,	// (0x0005a8a7) popup_blid2_search_window_g1

0xdcde,	// (0x0005a8af) popup_blid2_search_window_t1

0xdcec,	// (0x0005a8bd) popup_blid2_search_window_t2

0x0001,

0xfb1b,	// (0x0005c6ec) popup_blid2_search_window_t

0xab29,	// (0x000576fa) main_browser_pane_g1

0xa823,	// (0x000573f4) main_browser_pane_ParamLimits

0xa4c6,	// (0x00057097) bg_button_pane_cp011_ParamLimits

0x6ae1,	// (0x000536b2) cell_vitu2_function_pane_g1_ParamLimits

0xc85b,	// (0x0005942c) bg_popup_sub_pane_cp22_ParamLimits

0x05e9,	// (0x0004d1ba) input_focus_pane_cp08_ParamLimits

0x73ea,	// (0x00053fbb) popup_vitu2_query_button_pane_ParamLimits

0x73ea,	// (0x00053fbb) popup_vitu2_query_button_pane

0x0600,	// (0x0004d1d1) popup_vitu2_query_input_button_pane

0xd958,	// (0x0005a529) popup_vitu2_query_window_g1_ParamLimits

0x060a,	// (0x0004d1db) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x0005c5ed) popup_vitu2_query_window_g_ParamLimits

0x977d,	// (0x0005634e) bg_button_pane_cp026

0x7acb,	// (0x0005469c) popup_vitu2_query_input_button_pane_g1

0x977d,	// (0x0005634e) bg_button_pane_cp025

0xdcfa,	// (0x0005a8cb) popup_vitu2_query_button_pane_t1

0x50e4,	// (0x00051cb5) main_mp3_pane_t6

0x50f2,	// (0x00051cc3) popup_slider_window_cp01

0xa116,	// (0x00056ce7) cam4_battery_pane

0xa16f,	// (0x00056d40) cam4_battery_pane_cp02

0xa243,	// (0x00056e14) cam4_battery_pane_cp01

0xa243,	// (0x00056e14) cam4_battery_pane_cp03

0xcc63,	// (0x00059834) cam4_battery_pane_g1

0xdd08,	// (0x0005a8d9) cam4_battery_pane_g2

0x0001,

0xfb20,	// (0x0005c6f1) cam4_battery_pane_g

0xcb2f,	// (0x00059700) popup_blid_sat_info2_window_t11

0xb2ac,	// (0x00057e7d) aid_size_touch_mv_arrow_left_ParamLimits

0xb2d5,	// (0x00057ea6) aid_size_touch_mv_arrow_right_ParamLimits

0xb333,	// (0x00057f04) navi_pane_g1_ParamLimits

0xb33f,	// (0x00057f10) navi_pane_g2_ParamLimits

0xb36d,	// (0x00057f3e) navi_pane_g3_ParamLimits

0xf3e5,	// (0x0005bfb6) navi_pane_g_ParamLimits

0x3506,	// (0x000500d7) navi_pane_mv_t1_ParamLimits

0x5d47,	// (0x00052918) grid_imed_effect_pane_ParamLimits

0x2215,	// (0x0004ede6) aid_placing_vt_slider_lsc

0xaa78,	// (0x00057649) aid_placing_vt_slider_prt

0xa4c6,	// (0x00057097) bg_tb_trans_pane_cp01_ParamLimits

0xcdfb,	// (0x000599cc) popup_image_details_window_g1_ParamLimits

0xce0e,	// (0x000599df) popup_image_details_window_g2_ParamLimits

0xce23,	// (0x000599f4) popup_image_details_window_g3_ParamLimits

0xce23,	// (0x000599f4) popup_image_details_window_g3

0xf718,	// (0x0005c2e9) popup_image_details_window_g_ParamLimits

0xce37,	// (0x00059a08) popup_image_details_window_t1_ParamLimits

0xce49,	// (0x00059a1a) popup_image_details_window_t2_ParamLimits

0xce62,	// (0x00059a33) popup_image_details_window_t3_ParamLimits

0xce76,	// (0x00059a47) popup_image_details_window_t4_ParamLimits

0xce91,	// (0x00059a62) popup_image_details_window_t5_ParamLimits

0xf71f,	// (0x0005c2f0) popup_image_details_window_t_ParamLimits

0x76cc,	// (0x0005429d) cl_header_name_pane_ParamLimits

0x76cc,	// (0x0005429d) cl_header_name_pane

0x7ad3,	// (0x000546a4) cl_header_name_pane_t1_ParamLimits

0x7ad3,	// (0x000546a4) cl_header_name_pane_t1

0x7af4,	// (0x000546c5) cl_header_name_pane_t2_ParamLimits

0x7af4,	// (0x000546c5) cl_header_name_pane_t2

0x7b36,	// (0x00054707) cl_header_name_pane_t3_ParamLimits

0x7b36,	// (0x00054707) cl_header_name_pane_t3

0x0002,

0xfb25,	// (0x0005c6f6) cl_header_name_pane_t_ParamLimits

0xfb25,	// (0x0005c6f6) cl_header_name_pane_t

0xb3fc,	// (0x00057fcd) navi_pane_mv_g2_ParamLimits

0xd6c1,	// (0x0005a292) field_vitu2_entry_pane_g1_ParamLimits

0xd6cd,	// (0x0005a29e) field_vitu2_entry_pane_g2_ParamLimits

0xd6d9,	// (0x0005a2aa) field_vitu2_entry_pane_g3_ParamLimits

0xd6d9,	// (0x0005a2aa) field_vitu2_entry_pane_g3

0xf91b,	// (0x0005c4ec) field_vitu2_entry_pane_g_ParamLimits

0x6a58,	// (0x00053629) cell_vitu2_itu_pane_g1_ParamLimits

0x6a68,	// (0x00053639) cell_vitu2_itu_pane_g2_ParamLimits

0x6a68,	// (0x00053639) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x0005c4f8) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x0005c4f8) cell_vitu2_itu_pane_g

0xa4c6,	// (0x00057097) bg_vkb2_func_pane_cp05_ParamLimits

0xa4c6,	// (0x00057097) bg_vkb2_func_pane_cp05

0xa4c6,	// (0x00057097) bg_vkb2_func_pane_cp03

0xa4c6,	// (0x00057097) bg_vkb2_func_pane_cp04

0xa4c6,	// (0x00057097) bg_vkb2_func_pane_cp10_ParamLimits

0xa4c6,	// (0x00057097) bg_vkb2_func_pane_cp10

0x0727,	// (0x0004d2f8) bg_vkb2_func_pane_cp08

0x7676,	// (0x00054247) bg_vkb2_func_pane_cp06

0x7684,	// (0x00054255) bg_vkb2_func_pane_cp07

0xdbf7,	// (0x0005a7c8) bg_vkb2_func_pane_cp11_ParamLimits

0xdbf7,	// (0x0005a7c8) bg_vkb2_func_pane_cp11

0xdc0c,	// (0x0005a7dd) bg_vkb2_func_pane_cp12_ParamLimits

0xdc0c,	// (0x0005a7dd) bg_vkb2_func_pane_cp12

0x977d,	// (0x0005634e) bg_vkb2_func_pane_cp09

0xd6f9,	// (0x0005a2ca) bg_vkb2_func_pane_g1

0xac3a,	// (0x0005780b) bg_vkb2_func_pane_g2

0xd701,	// (0x0005a2d2) bg_vkb2_func_pane_g3

0xd709,	// (0x0005a2da) bg_vkb2_func_pane_g4

0xd91d,	// (0x0005a4ee) bg_vkb2_func_pane_g5

0xd721,	// (0x0005a2f2) bg_vkb2_func_pane_g6

0xd729,	// (0x0005a2fa) bg_vkb2_func_pane_g7

0xd719,	// (0x0005a2ea) bg_vkb2_func_pane_g8

0xac1a,	// (0x000577eb) bg_vkb2_func_pane_g9

0x0008,

0xfb2c,	// (0x0005c6fd) bg_vkb2_func_pane_g

0x79f7,	// (0x000545c8) blid2_tripm_pane_g6_ParamLimits

0x79f7,	// (0x000545c8) blid2_tripm_pane_g6

0xd563,	// (0x0005a134) mp4_progress_pane_g1

0x7a70,	// (0x00054641) blid2_tripm_values_pane_ParamLimits

0x7a70,	// (0x00054641) blid2_tripm_values_pane

0x7b67,	// (0x00054738) blid2_tripm_values_pane_t1

0x7b75,	// (0x00054746) blid2_tripm_values_pane_t2

0x7b83,	// (0x00054754) blid2_tripm_values_pane_t3

0x7b91,	// (0x00054762) blid2_tripm_values_pane_t4

0x7b9f,	// (0x00054770) blid2_tripm_values_pane_t5

0x7bad,	// (0x0005477e) blid2_tripm_values_pane_t6

0x7bbb,	// (0x0005478c) blid2_tripm_values_pane_t7

0x7bc9,	// (0x0005479a) blid2_tripm_values_pane_t8

0x7bd7,	// (0x000547a8) blid2_tripm_values_pane_t9

0x0008,

0xfb3f,	// (0x0005c710) blid2_tripm_values_pane_t

0x2257,	// (0x0004ee28) call_video_pane_t1_ParamLimits

0x2275,	// (0x0004ee46) call_video_pane_t2_ParamLimits

0xf26e,	// (0x0005be3f) call_video_pane_t_ParamLimits

0x03fa,	// (0x0004cfcb) msg_header_pane_g1_ParamLimits

0xb5de,	// (0x000581af) msg_header_pane_g2_ParamLimits

0xb5de,	// (0x000581af) msg_header_pane_g2

0x0001,

0xf488,	// (0x0005c059) msg_header_pane_g_ParamLimits

0xf488,	// (0x0005c059) msg_header_pane_g

0xa823,	// (0x000573f4) main_clock2_pane_ParamLimits

0x5a48,	// (0x00052619) grid_clock2_toolbar_pane_ParamLimits

0x5a48,	// (0x00052619) grid_clock2_toolbar_pane

0x5a48,	// (0x00052619) listscroll_clock2_pane_ParamLimits

0x5a48,	// (0x00052619) listscroll_clock2_pane

0x5b3b,	// (0x0005270c) main_clock2_pane_t3_ParamLimits

0x5b3b,	// (0x0005270c) main_clock2_pane_t3

0x5b5f,	// (0x00052730) main_clock2_pane_t4_ParamLimits

0x5b5f,	// (0x00052730) main_clock2_pane_t4

0xdd12,	// (0x0005a8e3) cell_clock2_toolbar_pane

0xdd1a,	// (0x0005a8eb) cell_clock2_toolbar_pane_cp01

0xdd1a,	// (0x0005a8eb) cell_clock2_toolbar_pane_cp02

0xdd22,	// (0x0005a8f3) cell_clock2_toolbar_pane_cp03

0xdd2a,	// (0x0005a8fb) list_clock2_pane

0xb222,	// (0x00057df3) scroll_pane_cp10

0xdd32,	// (0x0005a903) list_single_clock2_pane_ParamLimits

0xdd32,	// (0x0005a903) list_single_clock2_pane

0xb463,	// (0x00058034) list_highlight_pane_cp08

0xdd3f,	// (0x0005a910) list_single_clock2_pane_t1

0xdd4d,	// (0x0005a91e) list_single_clock2_pane_t2

0x0001,

0xfb52,	// (0x0005c723) list_single_clock2_pane_t

0x977d,	// (0x0005634e) bg_button_pane_cp10

0xdd5b,	// (0x0005a92c) cell_clock2_toolbar_pane_g1

0x39da,	// (0x000505ab) aid_main_viewer_pane_g1_ParamLimits

0x39da,	// (0x000505ab) aid_main_viewer_pane_g1

0x39e8,	// (0x000505b9) aid_main_viewer_pane_g2_ParamLimits

0x39e8,	// (0x000505b9) aid_main_viewer_pane_g2

0x39f6,	// (0x000505c7) aid_main_viewer_pane_g3_ParamLimits

0x39f6,	// (0x000505c7) aid_main_viewer_pane_g3

0x3a05,	// (0x000505d6) aid_main_viewer_pane_g4_ParamLimits

0x3a05,	// (0x000505d6) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x0005c06a) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x0005c06a) aid_main_viewer_pane_g

0x430b,	// (0x00050edc) main_calc_pane_ParamLimits

0x431f,	// (0x00050ef0) main_dialer2_pane_ParamLimits

0x977d,	// (0x0005634e) main_cam6_pane

0x977d,	// (0x0005634e) main_vid6_pane

0x5a54,	// (0x00052625) listscroll_gen_pane_cp06_ParamLimits

0x5a54,	// (0x00052625) listscroll_gen_pane_cp06

0x5b82,	// (0x00052753) main_clock2_pane_t5_ParamLimits

0x5b82,	// (0x00052753) main_clock2_pane_t5

0x5bdc,	// (0x000527ad) aid_call2_pane_cp10_ParamLimits

0x5bee,	// (0x000527bf) aid_call_pane_cp10_ParamLimits

0xb2a0,	// (0x00057e71) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb2a0,	// (0x00057e71) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5c00,	// (0x000527d1) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5c00,	// (0x000527d1) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb2a0,	// (0x00057e71) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d4,	// (0x0005c3a5) popup_clock_analogue_window_cp10_g_ParamLimits

0x5c12,	// (0x000527e3) popup_clock_analogue_window_cp10_t1_ParamLimits

0x627b,	// (0x00052e4c) cell_dialer2_keypad_pane_g2_ParamLimits

0x627b,	// (0x00052e4c) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x0005c48b) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x0005c48b) cell_dialer2_keypad_pane_g

0x6297,	// (0x00052e68) cell_dialer2_keypad_pane_t1

0x6df8,	// (0x000539c9) main_cset_text2_pane_ParamLimits

0x6df8,	// (0x000539c9) main_cset_text2_pane

0xdb5f,	// (0x0005a730) area_vitu2_query_pane_g1_ParamLimits

0x06ee,	// (0x0004d2bf) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x0005c640) area_vitu2_query_pane_g_ParamLimits

0x7652,	// (0x00054223) area_vitu2_query_pane_t7_ParamLimits

0x7652,	// (0x00054223) area_vitu2_query_pane_t7

0x7676,	// (0x00054247) bg_button_pane_cp018_ParamLimits

0x7684,	// (0x00054255) bg_button_pane_cp021_ParamLimits

0x0727,	// (0x0004d2f8) bg_button_pane_cp022_ParamLimits

0x0727,	// (0x0004d2f8) bg_vkb2_func_pane_cp08_ParamLimits

0x7676,	// (0x00054247) bg_vkb2_func_pane_cp06_ParamLimits

0x7684,	// (0x00054255) bg_vkb2_func_pane_cp07_ParamLimits

0x0736,	// (0x0004d307) input_focus_pane_cp09_ParamLimits

0xa2ad,	// (0x00056e7e) cam6_autofocus_pane_ParamLimits

0xa2ad,	// (0x00056e7e) cam6_autofocus_pane

0x7be5,	// (0x000547b6) cam6_image_uncrop_pane_ParamLimits

0x7be5,	// (0x000547b6) cam6_image_uncrop_pane

0x7bf4,	// (0x000547c5) cam6_indi_pane_ParamLimits

0x7bf4,	// (0x000547c5) cam6_indi_pane

0x7c0a,	// (0x000547db) cam6_mode_pane_ParamLimits

0x7c0a,	// (0x000547db) cam6_mode_pane

0x7c1c,	// (0x000547ed) cam6_timer_pane_ParamLimits

0x7c1c,	// (0x000547ed) cam6_timer_pane

0x7c28,	// (0x000547f9) cam6_zoom_pane_ParamLimits

0x7c28,	// (0x000547f9) cam6_zoom_pane

0x7c34,	// (0x00054805) cam6_mode_pane_g1_ParamLimits

0x7c34,	// (0x00054805) cam6_mode_pane_g1

0x7c44,	// (0x00054815) cam6_mode_pane_g2_ParamLimits

0x7c44,	// (0x00054815) cam6_mode_pane_g2

0x7c54,	// (0x00054825) cam6_mode_pane_g3_ParamLimits

0x7c54,	// (0x00054825) cam6_mode_pane_g3

0x7c64,	// (0x00054835) cam6_mode_pane_g4_ParamLimits

0x7c64,	// (0x00054835) cam6_mode_pane_g4

0x0003,

0xfb57,	// (0x0005c728) cam6_mode_pane_g_ParamLimits

0xfb57,	// (0x0005c728) cam6_mode_pane_g

0xdd63,	// (0x0005a934) bg_tb_trans_pane_cp08_ParamLimits

0xdd63,	// (0x0005a934) bg_tb_trans_pane_cp08

0xdd71,	// (0x0005a942) cam6_battery_pane_ParamLimits

0xdd71,	// (0x0005a942) cam6_battery_pane

0xdd87,	// (0x0005a958) cam6_indi_pane_g1_ParamLimits

0xdd87,	// (0x0005a958) cam6_indi_pane_g1

0xdd99,	// (0x0005a96a) cam6_indi_pane_g2_ParamLimits

0xdd99,	// (0x0005a96a) cam6_indi_pane_g2

0xddab,	// (0x0005a97c) cam6_indi_pane_g3_ParamLimits

0xddab,	// (0x0005a97c) cam6_indi_pane_g3

0x0002,

0xfb60,	// (0x0005c731) cam6_indi_pane_g_ParamLimits

0xfb60,	// (0x0005c731) cam6_indi_pane_g

0xddbd,	// (0x0005a98e) cam6_indi_pane_t1_ParamLimits

0xddbd,	// (0x0005a98e) cam6_indi_pane_t1

0x7c74,	// (0x00054845) cam6_autofocus_pane_g1

0x7c7c,	// (0x0005484d) cam6_autofocus_pane_g2

0x7c84,	// (0x00054855) cam6_autofocus_pane_g3

0x7c8c,	// (0x0005485d) cam6_autofocus_pane_g4

0x0003,

0xfb67,	// (0x0005c738) cam6_autofocus_pane_g

0xdde3,	// (0x0005a9b4) cam6_timer_pane_g1

0xddeb,	// (0x0005a9bc) cam6_timer_pane_t1

0xddf9,	// (0x0005a9ca) cam6_zoom_cont_pane

0xde01,	// (0x0005a9d2) cam6_zoom_pane_g1

0xde09,	// (0x0005a9da) cam6_zoom_pane_g2

0x7c94,	// (0x00054865) cam6_zoom_pane_g3

0x0002,

0xfb70,	// (0x0005c741) cam6_zoom_pane_g

0xcc63,	// (0x00059834) cam6_battery_pane_g1

0xcc63,	// (0x00059834) cam6_battery_pane_g2

0x0001,

0xf6dc,	// (0x0005c2ad) cam6_battery_pane_g

0xde11,	// (0x0005a9e2) cam6_zoom_cont_pane_g1

0xde1a,	// (0x0005a9eb) cam6_zoom_cont_pane_g2

0xde23,	// (0x0005a9f4) cam6_zoom_cont_pane_g3

0x0002,

0xfb77,	// (0x0005c748) cam6_zoom_cont_pane_g

0x7cb1,	// (0x00054882) cam6_mode_pane_cp_ParamLimits

0x7cb1,	// (0x00054882) cam6_mode_pane_cp

0x7c28,	// (0x000547f9) cam6_zoom_pane_cp_ParamLimits

0x7c28,	// (0x000547f9) cam6_zoom_pane_cp

0x7cc3,	// (0x00054894) vid6_image_uncrop_cif_pane_ParamLimits

0x7cc3,	// (0x00054894) vid6_image_uncrop_cif_pane

0x7cd3,	// (0x000548a4) vid6_image_uncrop_nhd_pane_ParamLimits

0x7cd3,	// (0x000548a4) vid6_image_uncrop_nhd_pane

0x7be5,	// (0x000547b6) vid6_image_uncrop_vga_pane_ParamLimits

0x7be5,	// (0x000547b6) vid6_image_uncrop_vga_pane

0x7ce2,	// (0x000548b3) vid6_image_uncrop_wvga_pane_ParamLimits

0x7ce2,	// (0x000548b3) vid6_image_uncrop_wvga_pane

0x7cf1,	// (0x000548c2) vid6_indi_pane_ParamLimits

0x7cf1,	// (0x000548c2) vid6_indi_pane

0xdd63,	// (0x0005a934) bg_tb_trans_pane_cp09_ParamLimits

0xdd63,	// (0x0005a934) bg_tb_trans_pane_cp09

0xde3b,	// (0x0005aa0c) cam6_battery_pane_cp_ParamLimits

0xde3b,	// (0x0005aa0c) cam6_battery_pane_cp

0xde47,	// (0x0005aa18) vid6_indi_pane_g1_ParamLimits

0xde47,	// (0x0005aa18) vid6_indi_pane_g1

0xde59,	// (0x0005aa2a) vid6_indi_pane_g2_ParamLimits

0xde59,	// (0x0005aa2a) vid6_indi_pane_g2

0xde6b,	// (0x0005aa3c) vid6_indi_pane_g3_ParamLimits

0xde6b,	// (0x0005aa3c) vid6_indi_pane_g3

0xde80,	// (0x0005aa51) vid6_indi_pane_g4_ParamLimits

0xde80,	// (0x0005aa51) vid6_indi_pane_g4

0xde95,	// (0x0005aa66) vid6_indi_pane_g5_ParamLimits

0xde95,	// (0x0005aa66) vid6_indi_pane_g5

0x0004,

0xfb7e,	// (0x0005c74f) vid6_indi_pane_g_ParamLimits

0xfb7e,	// (0x0005c74f) vid6_indi_pane_g

0xdeaf,	// (0x0005aa80) vid6_indi_pane_t1_ParamLimits

0xdeaf,	// (0x0005aa80) vid6_indi_pane_t1

0xdec5,	// (0x0005aa96) vid6_indi_pane_t2_ParamLimits

0xdec5,	// (0x0005aa96) vid6_indi_pane_t2

0xdeed,	// (0x0005aabe) vid6_indi_pane_t3_ParamLimits

0xdeed,	// (0x0005aabe) vid6_indi_pane_t3

0xdf15,	// (0x0005aae6) vid6_indi_pane_t4_ParamLimits

0xdf15,	// (0x0005aae6) vid6_indi_pane_t4

0x0003,

0xfb89,	// (0x0005c75a) vid6_indi_pane_t_ParamLimits

0xfb89,	// (0x0005c75a) vid6_indi_pane_t

0xdf39,	// (0x0005ab0a) wait_bar_pane_cp08

0x7d09,	// (0x000548da) main_cset_text2_pane_t1_ParamLimits

0x7d09,	// (0x000548da) main_cset_text2_pane_t1

0x7c9c,	// (0x0005486d) listscroll_gen_pane_cp06_t1_ParamLimits

0x7c9c,	// (0x0005486d) listscroll_gen_pane_cp06_t1

0x977d,	// (0x0005634e) main_cam6_set_pane

0xcedb,	// (0x00059aac) bg_tb_trans_pane_cp06_ParamLimits

0xa11e,	// (0x00056cef) cam4_indicators_pane_g1_ParamLimits

0xa12f,	// (0x00056d00) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x0005c4c8) cam4_indicators_pane_g_ParamLimits

0xa14d,	// (0x00056d1e) cam4_indicators_pane_t1_ParamLimits

0xa4c6,	// (0x00057097) bg_tb_trans_pane_cp07_ParamLimits

0xa179,	// (0x00056d4a) vid4_indicators_pane_g1_ParamLimits

0xa18d,	// (0x00056d5e) vid4_indicators_pane_g2_ParamLimits

0xa1a1,	// (0x00056d72) vid4_indicators_pane_g3_ParamLimits

0xa1b2,	// (0x00056d83) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x0005c4da) vid4_indicators_pane_g_ParamLimits

0xa1d0,	// (0x00056da1) vid4_indicators_pane_t1_ParamLimits

0xa24b,	// (0x00056e1c) vid4_progress_pane_g1_ParamLimits

0xa25b,	// (0x00056e2c) vid4_progress_pane_g2_ParamLimits

0x77bc,	// (0x0005438d) vid4_progress_pane_g3_ParamLimits

0xa26b,	// (0x00056e3c) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x0005c68b) vid4_progress_pane_g_ParamLimits

0x77ce,	// (0x0005439f) vid4_progress_pane_t1_ParamLimits

0xa283,	// (0x00056e54) vid4_progress_pane_t2_ParamLimits

0xa298,	// (0x00056e69) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x0005c696) vid4_progress_pane_t_ParamLimits

0x77e6,	// (0x000543b7) wait_bar_pane_cp07_ParamLimits

0x7d26,	// (0x000548f7) main_cam6_set_pane_g2_ParamLimits

0x7d26,	// (0x000548f7) main_cam6_set_pane_g2

0x7d4a,	// (0x0005491b) main_cset6_listscroll_pane_ParamLimits

0x7d4a,	// (0x0005491b) main_cset6_listscroll_pane

0x7d6a,	// (0x0005493b) main_cset6_slider_pane_ParamLimits

0x7d6a,	// (0x0005493b) main_cset6_slider_pane

0x7d80,	// (0x00054951) main_cset6_text2_pane_ParamLimits

0x7d80,	// (0x00054951) main_cset6_text2_pane

0xdf48,	// (0x0005ab19) main_cset6_text_pane

0xdf50,	// (0x0005ab21) main_cset_list_pane_copy1_ParamLimits

0xdf50,	// (0x0005ab21) main_cset_list_pane_copy1

0xdf60,	// (0x0005ab31) scroll_pane_cp028_copy1

0x7d8e,	// (0x0005495f) cset_list_set_pane_copy1

0x7d9f,	// (0x00054970) aid_position_infowindow_above_copy1

0x7da7,	// (0x00054978) aid_position_infowindow_below_copy1

0x0759,	// (0x0004d32a) cset_list_set_pane_g1_copy1

0x0761,	// (0x0004d332) cset_list_set_pane_g3_copy1_ParamLimits

0x0761,	// (0x0004d332) cset_list_set_pane_g3_copy1

0x0770,	// (0x0004d341) cset_list_set_pane_t1_copy1_ParamLimits

0x0770,	// (0x0004d341) cset_list_set_pane_t1_copy1

0xa4c6,	// (0x00057097) list_highlight_pane_cp021_copy1_ParamLimits

0xa4c6,	// (0x00057097) list_highlight_pane_cp021_copy1

0xdf69,	// (0x0005ab3a) cset6_slider_pane_ParamLimits

0xdf69,	// (0x0005ab3a) cset6_slider_pane

0xdf95,	// (0x0005ab66) main_cset6_slider_pane_g1_ParamLimits

0xdf95,	// (0x0005ab66) main_cset6_slider_pane_g1

0x7daf,	// (0x00054980) main_cset6_slider_pane_g2_ParamLimits

0x7daf,	// (0x00054980) main_cset6_slider_pane_g2

0xdfbd,	// (0x0005ab8e) main_cset6_slider_pane_g3_ParamLimits

0xdfbd,	// (0x0005ab8e) main_cset6_slider_pane_g3

0x7dd7,	// (0x000549a8) main_cset6_slider_pane_g4_ParamLimits

0x7dd7,	// (0x000549a8) main_cset6_slider_pane_g4

0x7de3,	// (0x000549b4) main_cset6_slider_pane_g5_ParamLimits

0x7de3,	// (0x000549b4) main_cset6_slider_pane_g5

0xd828,	// (0x0005a3f9) main_cset6_slider_pane_g7_ParamLimits

0xd828,	// (0x0005a3f9) main_cset6_slider_pane_g7

0xd834,	// (0x0005a405) main_cset6_slider_pane_g8_ParamLimits

0xd834,	// (0x0005a405) main_cset6_slider_pane_g8

0x6ea5,	// (0x00053a76) main_cset6_slider_pane_g9_ParamLimits

0x6ea5,	// (0x00053a76) main_cset6_slider_pane_g9

0x6eb1,	// (0x00053a82) main_cset6_slider_pane_g10_ParamLimits

0x6eb1,	// (0x00053a82) main_cset6_slider_pane_g10

0x6ebd,	// (0x00053a8e) main_cset6_slider_pane_g11_ParamLimits

0x6ebd,	// (0x00053a8e) main_cset6_slider_pane_g11

0x6ec9,	// (0x00053a9a) main_cset6_slider_pane_g12_ParamLimits

0x6ec9,	// (0x00053a9a) main_cset6_slider_pane_g12

0x6ed5,	// (0x00053aa6) main_cset6_slider_pane_g13_ParamLimits

0x6ed5,	// (0x00053aa6) main_cset6_slider_pane_g13

0x6ee1,	// (0x00053ab2) main_cset6_slider_pane_g14_ParamLimits

0x6ee1,	// (0x00053ab2) main_cset6_slider_pane_g14

0x7def,	// (0x000549c0) main_cset6_slider_pane_g15_ParamLimits

0x7def,	// (0x000549c0) main_cset6_slider_pane_g15

0x6f05,	// (0x00053ad6) main_cset6_slider_pane_g16_ParamLimits

0x6f05,	// (0x00053ad6) main_cset6_slider_pane_g16

0x6f11,	// (0x00053ae2) main_cset6_slider_pane_g17_ParamLimits

0x6f11,	// (0x00053ae2) main_cset6_slider_pane_g17

0x0011,

0xfb92,	// (0x0005c763) main_cset6_slider_pane_g_ParamLimits

0xfb92,	// (0x0005c763) main_cset6_slider_pane_g

0xdfc9,	// (0x0005ab9a) main_cset6_slider_pane_t1_ParamLimits

0xdfc9,	// (0x0005ab9a) main_cset6_slider_pane_t1

0x7e1f,	// (0x000549f0) main_cset6_slider_pane_t2_ParamLimits

0x7e1f,	// (0x000549f0) main_cset6_slider_pane_t2

0x7e4a,	// (0x00054a1b) main_cset6_slider_pane_t3_ParamLimits

0x7e4a,	// (0x00054a1b) main_cset6_slider_pane_t3

0x7e75,	// (0x00054a46) main_cset6_slider_pane_t4_ParamLimits

0x7e75,	// (0x00054a46) main_cset6_slider_pane_t4

0x7ea0,	// (0x00054a71) main_cset6_slider_pane_t5_ParamLimits

0x7ea0,	// (0x00054a71) main_cset6_slider_pane_t5

0xe00a,	// (0x0005abdb) main_cset6_slider_pane_t7_ParamLimits

0xe00a,	// (0x0005abdb) main_cset6_slider_pane_t7

0x7ecb,	// (0x00054a9c) main_cset6_slider_pane_t8_ParamLimits

0x7ecb,	// (0x00054a9c) main_cset6_slider_pane_t8

0x7eef,	// (0x00054ac0) main_cset6_slider_pane_t9_ParamLimits

0x7eef,	// (0x00054ac0) main_cset6_slider_pane_t9

0x7f13,	// (0x00054ae4) main_cset6_slider_pane_t10_ParamLimits

0x7f13,	// (0x00054ae4) main_cset6_slider_pane_t10

0x7f37,	// (0x00054b08) main_cset6_slider_pane_t11_ParamLimits

0x7f37,	// (0x00054b08) main_cset6_slider_pane_t11

0xe040,	// (0x0005ac11) main_cset6_slider_pane_t14_ParamLimits

0xe040,	// (0x0005ac11) main_cset6_slider_pane_t14

0xe079,	// (0x0005ac4a) main_cset6_slider_pane_t15_ParamLimits

0xe079,	// (0x0005ac4a) main_cset6_slider_pane_t15

0x000b,

0xfbb7,	// (0x0005c788) main_cset6_slider_pane_t_ParamLimits

0xfbb7,	// (0x0005c788) main_cset6_slider_pane_t

0xda0e,	// (0x0005a5df) cset_slider_pane_g1_copy1

0xda17,	// (0x0005a5e8) cset_slider_pane_g2_copy1

0xda20,	// (0x0005a5f1) cset_slider_pane_g3_copy1

0x977d,	// (0x0005634e) bg_popup_sub_pane_cp011_copy1

0xe0b2,	// (0x0005ac83) main_cset_text_pane_g1_copy1

0xd96c,	// (0x0005a53d) main_cset_text_pane_t1_copy1

0xd97a,	// (0x0005a54b) main_cset_text_pane_t2_copy1

0xd988,	// (0x0005a559) main_cset_text_pane_t3_copy1

0xd996,	// (0x0005a567) main_cset_text_pane_t4_copy1

0xd9a4,	// (0x0005a575) main_cset_text_pane_t5_copy1

0xe0ba,	// (0x0005ac8b) main_cset_text_pane_t6_copy1

0xd9c0,	// (0x0005a591) main_cset_text_pane_t7_copy1

0x7d09,	// (0x000548da) main_cset_text2_pane_t1_copy1

0xa4c6,	// (0x00057097) main_ncimui_pane

0x4569,	// (0x0005113a) popup_query_ncimui_window_ParamLimits

0x4569,	// (0x0005113a) popup_query_ncimui_window

0x5288,	// (0x00051e59) field_cale_ev2_pane_g4_ParamLimits

0x5288,	// (0x00051e59) field_cale_ev2_pane_g4

0x615b,	// (0x00052d2c) cell_video_dialer_keypad_pane_g2_ParamLimits

0x615b,	// (0x00052d2c) cell_video_dialer_keypad_pane_g2

0x0001,

0xf895,	// (0x0005c466) cell_video_dialer_keypad_pane_g_ParamLimits

0xf895,	// (0x0005c466) cell_video_dialer_keypad_pane_g

0x6173,	// (0x00052d44) cell_video_dialer_keypad_pane_t1

0x977d,	// (0x0005634e) bg_popup_window_pane_cp012

0xb0d3,	// (0x00057ca4) heading_pane_cp06

0xe0e6,	// (0x0005acb7) ncim_query_content_pane

0x977d,	// (0x0005634e) bg_popup_heading_pane_cp01

0xe0ee,	// (0x0005acbf) ncim_heading_pane_t1

0xe0fc,	// (0x0005accd) ncim_indicator_popup_pane

0xe10e,	// (0x0005acdf) ncim_query_button_pane

0xe122,	// (0x0005acf3) ncim_query_content_pane_t1

0xe134,	// (0x0005ad05) ncim_query_content_pane_t2

0x0005,

0xfbfb,	// (0x0005c7cc) ncim_query_content_pane_t

0xe16e,	// (0x0005ad3f) ncim_query_list_pane

0xe180,	// (0x0005ad51) ncim_query_popup_pane

0xe0fc,	// (0x0005accd) ncim_indicator_popup_pane_ParamLimits

0x8081,	// (0x00054c52) ncim_query_content_pane_g1_ParamLimits

0x8081,	// (0x00054c52) ncim_query_content_pane_g1

0xe122,	// (0x0005acf3) ncim_query_content_pane_t1_ParamLimits

0xe134,	// (0x0005ad05) ncim_query_content_pane_t2_ParamLimits

0x808d,	// (0x00054c5e) ncim_query_content_pane_t3_ParamLimits

0x808d,	// (0x00054c5e) ncim_query_content_pane_t3

0x80b5,	// (0x00054c86) ncim_query_content_pane_t4_ParamLimits

0x80b5,	// (0x00054c86) ncim_query_content_pane_t4

0x80dd,	// (0x00054cae) ncim_query_content_pane_t5_ParamLimits

0x80dd,	// (0x00054cae) ncim_query_content_pane_t5

0xe146,	// (0x0005ad17) ncim_query_content_pane_t6_ParamLimits

0xe146,	// (0x0005ad17) ncim_query_content_pane_t6

0xfbfb,	// (0x0005c7cc) ncim_query_content_pane_t_ParamLimits

0xe16e,	// (0x0005ad3f) ncim_query_list_pane_ParamLimits

0xe180,	// (0x0005ad51) ncim_query_popup_pane_ParamLimits

0xe194,	// (0x0005ad65) wait_bar_pane_cp04

0x977d,	// (0x0005634e) input_focus_pane_cp011

0xe19c,	// (0x0005ad6d) ncim_query_popup_pane_t1

0xe1aa,	// (0x0005ad7b) ncim_list_query_list_pane_ParamLimits

0xe1aa,	// (0x0005ad7b) ncim_list_query_list_pane

0x977d,	// (0x0005634e) bg_button_pane_cp027

0xe1b7,	// (0x0005ad88) ncim_query_button_pane_g1

0x977d,	// (0x0005634e) list_highlight_pane_cp012

0xe1c1,	// (0x0005ad92) ncim_list_query_list_pane_g1

0xe1c9,	// (0x0005ad9a) ncim_list_query_list_pane_t1

0xa13e,	// (0x00056d0f) cam4_indicators_pane_g3_ParamLimits

0xa13e,	// (0x00056d0f) cam4_indicators_pane_g3

0xa1be,	// (0x00056d8f) vid4_indicators_pane_g5_ParamLimits

0xa1be,	// (0x00056d8f) vid4_indicators_pane_g5

0xa277,	// (0x00056e48) vid4_progress_pane_g5_ParamLimits

0xa277,	// (0x00056e48) vid4_progress_pane_g5

0x7f6f,	// (0x00054b40) main_ncimui_pane_g1

0x7fd5,	// (0x00054ba6) ncimui_group_query_pane_ParamLimits

0x7fd5,	// (0x00054ba6) ncimui_group_query_pane

0x801d,	// (0x00054bee) ncimui_list_pane_ParamLimits

0x801d,	// (0x00054bee) ncimui_list_pane

0x8044,	// (0x00054c15) ncimui_text_pane_ParamLimits

0x8044,	// (0x00054c15) ncimui_text_pane

0x8105,	// (0x00054cd6) ncimui_text_pane_t1_ParamLimits

0x8105,	// (0x00054cd6) ncimui_text_pane_t1

0xe1d7,	// (0x0005ada8) ncimui_list_single_graphic_pane_ParamLimits

0xe1d7,	// (0x0005ada8) ncimui_list_single_graphic_pane

0x8123,	// (0x00054cf4) ncimui_query_pane_ParamLimits

0x8123,	// (0x00054cf4) ncimui_query_pane

0x977d,	// (0x0005634e) list_highlight_pane_cp013

0xe1e7,	// (0x0005adb8) ncim_list_query_list_pane_t1_copy1

0xe1c1,	// (0x0005ad92) ncim_list_single_graphic_pane_g1

0xe1f5,	// (0x0005adc6) ncim_query_button_pane_cp01

0xe201,	// (0x0005add2) ncim_query_entry_pane_ParamLimits

0xe201,	// (0x0005add2) ncim_query_entry_pane

0xe214,	// (0x0005ade5) ncimui_query_pane_g1

0xe220,	// (0x0005adf1) ncimui_query_pane_t1_ParamLimits

0xe220,	// (0x0005adf1) ncimui_query_pane_t1

0xa4c6,	// (0x00057097) input_focus_pane_cp012

0xe239,	// (0x0005ae0a) ncim_query_entry_pane_t1

0xa823,	// (0x000573f4) main_im_pane_ParamLimits

0xa4c6,	// (0x00057097) main_mobtv_pane_ParamLimits

0xa4c6,	// (0x00057097) main_mobtv_pane

0x7e07,	// (0x000549d8) main_cset6_slider_pane_g18_ParamLimits

0x7e07,	// (0x000549d8) main_cset6_slider_pane_g18

0x7e13,	// (0x000549e4) main_cset6_slider_pane_g19_ParamLimits

0x7e13,	// (0x000549e4) main_cset6_slider_pane_g19

0xb1d2,	// (0x00057da3) bg_main_mobtv_pane_ParamLimits

0xb1d2,	// (0x00057da3) bg_main_mobtv_pane

0x8136,	// (0x00054d07) main_mobtv_info_pane

0x813f,	// (0x00054d10) main_mobtv_loading_pane_ParamLimits

0x813f,	// (0x00054d10) main_mobtv_loading_pane

0xe24b,	// (0x0005ae1c) main_mobtv_pg_channel_list_pane

0xe255,	// (0x0005ae26) main_mobtv_pg_hdr_pane

0x814c,	// (0x00054d1d) main_mobtv_programe_curr_pane_ParamLimits

0x814c,	// (0x00054d1d) main_mobtv_programe_curr_pane

0x8159,	// (0x00054d2a) main_mobtv_programe_next_pane_ParamLimits

0x8159,	// (0x00054d2a) main_mobtv_programe_next_pane

0xe25e,	// (0x0005ae2f) popup_mobtv_noti_window

0xcc63,	// (0x00059834) main_tv_pg_hdr_pane_g1

0xe266,	// (0x0005ae37) main_tv_pg_hdr_pane_g2

0xe26e,	// (0x0005ae3f) main_tv_pg_hdr_pane_g3

0xe276,	// (0x0005ae47) main_tv_pg_hdr_pane_g4

0xe27e,	// (0x0005ae4f) main_tv_pg_hdr_pane_g5

0xe288,	// (0x0005ae59) main_tv_pg_hdr_pane_g6

0xe292,	// (0x0005ae63) main_tv_pg_hdr_pane_g7

0xe29c,	// (0x0005ae6d) main_tv_pg_hdr_pane_g8

0xe2a6,	// (0x0005ae77) main_tv_pg_hdr_pane_g9

0xe2b0,	// (0x0005ae81) main_tv_pg_hdr_pane_g10

0xe2ba,	// (0x0005ae8b) main_tv_pg_hdr_pane_g11

0x000a,

0xfc08,	// (0x0005c7d9) main_tv_pg_hdr_pane_g

0xe2c4,	// (0x0005ae95) main_tv_pg_hdr_pane_t1

0xe2d2,	// (0x0005aea3) main_tv_pg_hdr_pane_t2

0xe2e0,	// (0x0005aeb1) main_tv_pg_hdr_pane_t3

0xe2f0,	// (0x0005aec1) main_tv_pg_hdr_pane_t4

0xe300,	// (0x0005aed1) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1f,	// (0x0005c7f0) main_tv_pg_hdr_pane_t

0xe310,	// (0x0005aee1) single_mobtv_pg_channel_pane_ParamLimits

0xe310,	// (0x0005aee1) single_mobtv_pg_channel_pane

0xe322,	// (0x0005aef3) single_mobtv_pg_channel_table_pane

0xe32b,	// (0x0005aefc) single_mobtv_pg_channel_thumb_pane

0xe334,	// (0x0005af05) single_tv_pg_channel_pane_g1

0xe33d,	// (0x0005af0e) single_tv_pg_channel_pane_g2

0x0001,

0xfc2a,	// (0x0005c7fb) single_tv_pg_channel_pane_g

0xcedb,	// (0x00059aac) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xcedb,	// (0x00059aac) bg_single_mobtv_pg_channel_thumb_pane

0xe346,	// (0x0005af17) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe346,	// (0x0005af17) single_mobtv_pg_channel_thumb_pane_g1

0xe354,	// (0x0005af25) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe354,	// (0x0005af25) single_mobtv_pg_channel_thumb_pane_g2

0xe360,	// (0x0005af31) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe360,	// (0x0005af31) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2f,	// (0x0005c800) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2f,	// (0x0005c800) single_mobtv_pg_channel_thumb_pane_g

0xe36c,	// (0x0005af3d) single_mobtv_pg_channel_thumb_pane_t1

0xe37a,	// (0x0005af4b) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc36,	// (0x0005c807) single_mobtv_pg_channel_thumb_pane_t

0xcc63,	// (0x00059834) bg_single_mobtv_pg_channel_table_pane_g1

0xcc63,	// (0x00059834) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6dc,	// (0x0005c2ad) bg_single_mobtv_pg_channel_table_pane_g

0xe388,	// (0x0005af59) single_mobtv_pg_channel_table_pane_t1

0xe396,	// (0x0005af67) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc3b,	// (0x0005c80c) single_mobtv_pg_channel_table_pane_t

0x816e,	// (0x00054d3f) main_mobtv_info_pane_g1_ParamLimits

0x816e,	// (0x00054d3f) main_mobtv_info_pane_g1

0x818c,	// (0x00054d5d) main_mobtv_info_pane_t1_ParamLimits

0x818c,	// (0x00054d5d) main_mobtv_info_pane_t1

0x8204,	// (0x00054dd5) main_mobtv_info_pane_t2_ParamLimits

0x8204,	// (0x00054dd5) main_mobtv_info_pane_t2

0x0002,

0xfc45,	// (0x0005c816) main_mobtv_info_pane_t_ParamLimits

0xfc45,	// (0x0005c816) main_mobtv_info_pane_t

0x8293,	// (0x00054e64) wait_bar_pane_cp05

0x82a5,	// (0x00054e76) main_mobtv_loading_pane_g1_ParamLimits

0x82a5,	// (0x00054e76) main_mobtv_loading_pane_g1

0x82b8,	// (0x00054e89) main_mobtv_loading_pane_g2_ParamLimits

0x82b8,	// (0x00054e89) main_mobtv_loading_pane_g2

0x82c4,	// (0x00054e95) main_mobtv_loading_pane_g3_ParamLimits

0x82c4,	// (0x00054e95) main_mobtv_loading_pane_g3

0x0002,

0xfc4c,	// (0x0005c81d) main_mobtv_loading_pane_g_ParamLimits

0xfc4c,	// (0x0005c81d) main_mobtv_loading_pane_g

0xe3a4,	// (0x0005af75) main_mobtv_loading_pane_t1_ParamLimits

0xe3a4,	// (0x0005af75) main_mobtv_loading_pane_t1

0xe3bc,	// (0x0005af8d) main_mobtv_loading_pane_t2_ParamLimits

0xe3bc,	// (0x0005af8d) main_mobtv_loading_pane_t2

0x0001,

0xfc53,	// (0x0005c824) main_mobtv_loading_pane_t_ParamLimits

0xfc53,	// (0x0005c824) main_mobtv_loading_pane_t

0x82d7,	// (0x00054ea8) wait_bar_pane_cp06_ParamLimits

0x82d7,	// (0x00054ea8) wait_bar_pane_cp06

0xe3e0,	// (0x0005afb1) main_mobtv_programe_curr_pane_t1

0xe3ee,	// (0x0005afbf) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc58,	// (0x0005c829) main_mobtv_programe_curr_pane_t

0xe3fc,	// (0x0005afcd) main_mobtv_programe_next_pane_t1

0xe40a,	// (0x0005afdb) main_mobtv_programe_next_pane_t2

0xe418,	// (0x0005afe9) main_mobtv_programe_next_pane_t3

0x0002,

0xfc5d,	// (0x0005c82e) main_mobtv_programe_next_pane_t

0x977d,	// (0x0005634e) bg_popup_mobtv_noti_window_pane

0xe426,	// (0x0005aff7) popup_mobtv_noti_window_g1

0xe42e,	// (0x0005afff) popup_mobtv_noti_window_t1

0xe43c,	// (0x0005b00d) popup_mobtv_noti_window_t2

0x0001,

0xfc64,	// (0x0005c835) popup_mobtv_noti_window_t

0xcc63,	// (0x00059834) bg_popup_mobtv_noti_window_pane_g1

0x977d,	// (0x0005634e) sc_clock_pane

0x977d,	// (0x0005634e) main_fs_bigclock_pane

0x7a5a,	// (0x0005462b) blid2_tripm_pane_t4_ParamLimits

0x7a5a,	// (0x0005462b) blid2_tripm_pane_t4

0x82e6,	// (0x00054eb7) sc_clock_pane_g1_ParamLimits

0x82e6,	// (0x00054eb7) sc_clock_pane_g1

0x82f8,	// (0x00054ec9) sc_clock_pane_t1_ParamLimits

0x82f8,	// (0x00054ec9) sc_clock_pane_t1

0x831a,	// (0x00054eeb) sc_clock_pane_t2_ParamLimits

0x831a,	// (0x00054eeb) sc_clock_pane_t2

0x8332,	// (0x00054f03) sc_clock_pane_t3_ParamLimits

0x8332,	// (0x00054f03) sc_clock_pane_t3

0x0004,

0xfc69,	// (0x0005c83a) sc_clock_pane_t_ParamLimits

0xfc69,	// (0x0005c83a) sc_clock_pane_t

0x8da2,	// (0x00055973) main_fs_bigclock_indicator_pane_ParamLimits

0x8da2,	// (0x00055973) main_fs_bigclock_indicator_pane

0x83d2,	// (0x00054fa3) main_fs_bigclock_pane_g1_ParamLimits

0x83d2,	// (0x00054fa3) main_fs_bigclock_pane_g1

0x8dae,	// (0x0005597f) main_fs_bigclock_pane_t1_ParamLimits

0x8dae,	// (0x0005597f) main_fs_bigclock_pane_t1

0x8dc0,	// (0x00055991) main_fs_bigclock_pane_t2_ParamLimits

0x8dc0,	// (0x00055991) main_fs_bigclock_pane_t2

0x8dd4,	// (0x000559a5) main_fs_bigclock_pane_t3_ParamLimits

0x8dd4,	// (0x000559a5) main_fs_bigclock_pane_t3

0x0002,

0xfe4d,	// (0x0005ca1e) main_fs_bigclock_pane_t_ParamLimits

0xfe4d,	// (0x0005ca1e) main_fs_bigclock_pane_t

0xec81,	// (0x0005b852) main_fs_bigclock_indicator_pane_g1

0xe116,	// (0x0005ace7) ncim_query_content_pane_g2_ParamLimits

0xe116,	// (0x0005ace7) ncim_query_content_pane_g2

0x0001,

0xfbf6,	// (0x0005c7c7) ncim_query_content_pane_g_ParamLimits

0xfbf6,	// (0x0005c7c7) ncim_query_content_pane_g

0x834b,	// (0x00054f1c) sc_clock_pane_t4_ParamLimits

0x834b,	// (0x00054f1c) sc_clock_pane_t4

0xa4c6,	// (0x00057097) main_radioblah_pane

0xd64c,	// (0x0005a21d) cell_call4_button_pane_t1_copy1_ParamLimits

0xd64c,	// (0x0005a21d) cell_call4_button_pane_t1_copy1

0x7f87,	// (0x00054b58) main_ncimui_pane_t1_ParamLimits

0x7f87,	// (0x00054b58) main_ncimui_pane_t1

0x7fa1,	// (0x00054b72) main_ncimui_pane_t2_ParamLimits

0x7fa1,	// (0x00054b72) main_ncimui_pane_t2

0x0002,

0xfbef,	// (0x0005c7c0) main_ncimui_pane_t_ParamLimits

0xfbef,	// (0x0005c7c0) main_ncimui_pane_t

0xe580,	// (0x0005b151) main_radioblah_anim_pane_ParamLimits

0xe580,	// (0x0005b151) main_radioblah_anim_pane

0xe591,	// (0x0005b162) main_radioblah_info_pane_ParamLimits

0xe591,	// (0x0005b162) main_radioblah_info_pane

0xe5a5,	// (0x0005b176) main_radioblah_pane_t1_ParamLimits

0xe5a5,	// (0x0005b176) main_radioblah_pane_t1

0xe5c1,	// (0x0005b192) main_radioblah_pane_t2_ParamLimits

0xe5c1,	// (0x0005b192) main_radioblah_pane_t2

0x0003,

0xfc8a,	// (0x0005c85b) main_radioblah_pane_t_ParamLimits

0xfc8a,	// (0x0005c85b) main_radioblah_pane_t

0x842a,	// (0x00054ffb) main_radioblah_rocker_ctrl_pane_ParamLimits

0x842a,	// (0x00054ffb) main_radioblah_rocker_ctrl_pane

0xe609,	// (0x0005b1da) main_radioblah_info_pane_t1_ParamLimits

0xe609,	// (0x0005b1da) main_radioblah_info_pane_t1

0x8482,	// (0x00055053) main_radioblah_info_pane_t2_ParamLimits

0x8482,	// (0x00055053) main_radioblah_info_pane_t2

0x0003,

0xfc93,	// (0x0005c864) main_radioblah_info_pane_t_ParamLimits

0xfc93,	// (0x0005c864) main_radioblah_info_pane_t

0xcc63,	// (0x00059834) main_radioblah_rocker_ctrl_pane_g1

0x8532,	// (0x00055103) main_radioblah_rocker_ctrl_pane_g2

0x853a,	// (0x0005510b) main_radioblah_rocker_ctrl_pane_g3

0x8542,	// (0x00055113) main_radioblah_rocker_ctrl_pane_g4

0x854a,	// (0x0005511b) main_radioblah_rocker_ctrl_pane_g5

0x8552,	// (0x00055123) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc9c,	// (0x0005c86d) main_radioblah_rocker_ctrl_pane_g

0x7d09,	// (0x000548da) main_cset_text2_pane_t1_copy1_ParamLimits

0xa10e,	// (0x00056cdf) cam4_image_uncrop_qvga_pane

0xa167,	// (0x00056d38) vid4_image_uncrop_qcif_pane

0xa2ad,	// (0x00056e7e) cam6_image_uncrop_qvga_pane_ParamLimits

0xa2ad,	// (0x00056e7e) cam6_image_uncrop_qvga_pane

0xde2b,	// (0x0005a9fc) vid6_image_uncrop_qcif_pane_ParamLimits

0xde2b,	// (0x0005a9fc) vid6_image_uncrop_qcif_pane

0x977d,	// (0x0005634e) bg_popup_preview_window_pane_cp03

0xe0c8,	// (0x0005ac99) list_cset_text2_pane

0xe0d0,	// (0x0005aca1) main_cset6_text2_pane_g1

0xe0d8,	// (0x0005aca9) main_cset6_text2_pane_t1

0x855a,	// (0x0005512b) list_cset_text2_pane_t1_ParamLimits

0x855a,	// (0x0005512b) list_cset_text2_pane_t1

0xa4c6,	// (0x00057097) main_radioblah_pane_ParamLimits

0x827f,	// (0x00054e50) main_mobtv_info_pane_t3_ParamLimits

0x827f,	// (0x00054e50) main_mobtv_info_pane_t3

0x8418,	// (0x00054fe9) main_radioblah_pane_g1

0x8452,	// (0x00055023) main_radioblah_info_pane_g1

0x84d7,	// (0x000550a8) main_radioblah_info_pane_t3_ParamLimits

0x84d7,	// (0x000550a8) main_radioblah_info_pane_t3

0x3122,	// (0x0004fcf3) highlight_cell_cale_month_pane_ParamLimits

0x3122,	// (0x0004fcf3) highlight_cell_cale_month_pane

0x977d,	// (0x0005634e) main_phob_fisheye_pane

0xcfd7,	// (0x00059ba8) scroll_pane_cp0031_ParamLimits

0xcfd7,	// (0x00059ba8) scroll_pane_cp0031

0xdf39,	// (0x0005ab0a) wait_bar_pane_cp08_ParamLimits

0x7d8e,	// (0x0005495f) cset_list_set_pane_copy1_ParamLimits

0xe643,	// (0x0005b214) highlight_cell_cale_month_pane_g1

0x8573,	// (0x00055144) highlight_cell_cale_month_pane_t1

0xdbb3,	// (0x0005a784) list_gen_pane_cp01

0xd813,	// (0x0005a3e4) scroll_pane_01

0x8581,	// (0x00055152) list_single_double_fisheye_pane

0x0856,	// (0x0004d427) list_double_fisheye_pane_g1_ParamLimits

0x0856,	// (0x0004d427) list_double_fisheye_pane_g1

0x0862,	// (0x0004d433) list_double_fisheye_pane_g2_ParamLimits

0x0862,	// (0x0004d433) list_double_fisheye_pane_g2

0x858a,	// (0x0005515b) list_double_fisheye_pane_g3_ParamLimits

0x858a,	// (0x0005515b) list_double_fisheye_pane_g3

0x0004,

0xfca9,	// (0x0005c87a) list_double_fisheye_pane_g_ParamLimits

0xfca9,	// (0x0005c87a) list_double_fisheye_pane_g

0x0893,	// (0x0004d464) list_double_fisheye_pane_t1_ParamLimits

0x0893,	// (0x0004d464) list_double_fisheye_pane_t1

0x08ae,	// (0x0004d47f) list_double_fisheye_pane_t2_ParamLimits

0x08ae,	// (0x0004d47f) list_double_fisheye_pane_t2

0x0001,

0xfcb4,	// (0x0005c885) list_double_fisheye_pane_t_ParamLimits

0xfcb4,	// (0x0005c885) list_double_fisheye_pane_t

0x977d,	// (0x0005634e) main_call5_pane

0x8376,	// (0x00054f47) sc_swipe_pane_ParamLimits

0x8376,	// (0x00054f47) sc_swipe_pane

0x85a9,	// (0x0005517a) call5_image_pane_ParamLimits

0x85a9,	// (0x0005517a) call5_image_pane

0x85c6,	// (0x00055197) call5_swipe_1_pane_ParamLimits

0x85c6,	// (0x00055197) call5_swipe_1_pane

0x85d9,	// (0x000551aa) call5_swipe_2_pane_ParamLimits

0x85d9,	// (0x000551aa) call5_swipe_2_pane

0x8604,	// (0x000551d5) popup_call5_audio_first_window_ParamLimits

0x8604,	// (0x000551d5) popup_call5_audio_first_window

0xcedb,	// (0x00059aac) call5_swipe_1_pane_g1_ParamLimits

0xcedb,	// (0x00059aac) call5_swipe_1_pane_g1

0xe64b,	// (0x0005b21c) call5_swipe_1_pane_g2_ParamLimits

0xe64b,	// (0x0005b21c) call5_swipe_1_pane_g2

0x0001,

0xfcb9,	// (0x0005c88a) call5_swipe_1_pane_g_ParamLimits

0xfcb9,	// (0x0005c88a) call5_swipe_1_pane_g

0xe657,	// (0x0005b228) call5_swipe_1_pane_t1_ParamLimits

0xe657,	// (0x0005b228) call5_swipe_1_pane_t1

0xcedb,	// (0x00059aac) call5_swipe_2_pane_g1_ParamLimits

0xcedb,	// (0x00059aac) call5_swipe_2_pane_g1

0xe66c,	// (0x0005b23d) call5_swipe_2_pane_g2_ParamLimits

0xe66c,	// (0x0005b23d) call5_swipe_2_pane_g2

0x0001,

0xfcbe,	// (0x0005c88f) call5_swipe_2_pane_g_ParamLimits

0xfcbe,	// (0x0005c88f) call5_swipe_2_pane_g

0xe678,	// (0x0005b249) call5_swipe_2_pane_t1_ParamLimits

0xe678,	// (0x0005b249) call5_swipe_2_pane_t1

0xe68d,	// (0x0005b25e) sc_swipe_pane_g1_ParamLimits

0xe68d,	// (0x0005b25e) sc_swipe_pane_g1

0xe69a,	// (0x0005b26b) sc_swipe_pane_g2_ParamLimits

0xe69a,	// (0x0005b26b) sc_swipe_pane_g2

0x0001,

0xfcc3,	// (0x0005c894) sc_swipe_pane_g_ParamLimits

0xfcc3,	// (0x0005c894) sc_swipe_pane_g

0xe6a6,	// (0x0005b277) sc_swipe_pane_t1_ParamLimits

0xe6a6,	// (0x0005b277) sc_swipe_pane_t1

0x977d,	// (0x0005634e) main_cmail_launcher_pane

0x8615,	// (0x000551e6) aid_size_cell_cmail_l_ParamLimits

0x8615,	// (0x000551e6) aid_size_cell_cmail_l

0x862f,	// (0x00055200) grid_cmail_l_pane_ParamLimits

0x862f,	// (0x00055200) grid_cmail_l_pane

0x864a,	// (0x0005521b) cell_cmail_l_pane_ParamLimits

0x864a,	// (0x0005521b) cell_cmail_l_pane

0x8670,	// (0x00055241) cell_cmail_l_pane_g1_ParamLimits

0x8670,	// (0x00055241) cell_cmail_l_pane_g1

0x867c,	// (0x0005524d) cell_cmail_l_pane_t1_ParamLimits

0x867c,	// (0x0005524d) cell_cmail_l_pane_t1

0xe6bb,	// (0x0005b28c) cell_cmail_l_pane_t2_ParamLimits

0xe6bb,	// (0x0005b28c) cell_cmail_l_pane_t2

0x0001,

0xfcc8,	// (0x0005c899) cell_cmail_l_pane_t_ParamLimits

0xfcc8,	// (0x0005c899) cell_cmail_l_pane_t

0xa4c6,	// (0x00057097) grid_highlight_pane_cp018_ParamLimits

0xa4c6,	// (0x00057097) grid_highlight_pane_cp018

0x11aa,	// (0x0004dd7b) main2_pane_ParamLimits

0x11aa,	// (0x0004dd7b) main2_pane

0xa8bc,	// (0x0005748d) popup_sp_fs_action_menu_bg_pane_g1

0xa8c4,	// (0x00057495) popup_sp_fs_action_menu_bg_pane_g2

0xa8cc,	// (0x0005749d) popup_sp_fs_action_menu_bg_pane_g3

0xa8d4,	// (0x000574a5) popup_sp_fs_action_menu_bg_pane_g4

0xa8dc,	// (0x000574ad) popup_sp_fs_action_menu_bg_pane_g5

0xa8e4,	// (0x000574b5) popup_sp_fs_action_menu_bg_pane_g6

0xa8ec,	// (0x000574bd) popup_sp_fs_action_menu_bg_pane_g7

0xa8f4,	// (0x000574c5) popup_sp_fs_action_menu_bg_pane_g8

0xa8fc,	// (0x000574cd) popup_sp_fs_action_menu_bg_pane_g9

0xa904,	// (0x000574d5) popup_sp_fs_action_menu_bg_pane_g10

0xa904,	// (0x000574d5) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf186,	// (0x0005bd57) popup_sp_fs_action_menu_bg_pane_g

0x01a2,	// (0x0004cd73) list_medium_line_x2_t3_g3_g1_ParamLimits

0x01a2,	// (0x0004cd73) list_medium_line_x2_t3_g3_g1

0x01ae,	// (0x0004cd7f) list_medium_line_x2_t3_g3_g2_ParamLimits

0x01ae,	// (0x0004cd7f) list_medium_line_x2_t3_g3_g2

0x01ba,	// (0x0004cd8b) list_medium_line_x2_t3_g3_g3_ParamLimits

0x01ba,	// (0x0004cd8b) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x0005be09) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x0005be09) list_medium_line_x2_t3_g3_g

0x01c6,	// (0x0004cd97) list_medium_line_x2_t3_g3_t1_ParamLimits

0x01c6,	// (0x0004cd97) list_medium_line_x2_t3_g3_t1

0x01db,	// (0x0004cdac) list_medium_line_x2_t3_g3_t2_ParamLimits

0x01db,	// (0x0004cdac) list_medium_line_x2_t3_g3_t2

0x01ef,	// (0x0004cdc0) list_medium_line_x2_t3_g3_t3_ParamLimits

0x01ef,	// (0x0004cdc0) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x0005be10) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x0005be10) list_medium_line_x2_t3_g3_t

0x01a2,	// (0x0004cd73) list_medium_line_x2_t3_g2_g1_ParamLimits

0x01a2,	// (0x0004cd73) list_medium_line_x2_t3_g2_g1

0x01ba,	// (0x0004cd8b) list_medium_line_x2_t3_g2_g2_ParamLimits

0x01ba,	// (0x0004cd8b) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x0005be17) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x0005be17) list_medium_line_x2_t3_g2_g

0x0204,	// (0x0004cdd5) list_medium_line_x2_t3_g2_t1_ParamLimits

0x0204,	// (0x0004cdd5) list_medium_line_x2_t3_g2_t1

0x021a,	// (0x0004cdeb) list_medium_line_x2_t3_g2_t2_ParamLimits

0x021a,	// (0x0004cdeb) list_medium_line_x2_t3_g2_t2

0x022c,	// (0x0004cdfd) list_medium_line_x2_t3_g2_t3_ParamLimits

0x022c,	// (0x0004cdfd) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x0005be1c) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x0005be1c) list_medium_line_x2_t3_g2_t

0x01a2,	// (0x0004cd73) list_medium_line_x2_t4_g4_g1_ParamLimits

0x01a2,	// (0x0004cd73) list_medium_line_x2_t4_g4_g1

0x0249,	// (0x0004ce1a) list_medium_line_x2_t4_g4_g2_ParamLimits

0x0249,	// (0x0004ce1a) list_medium_line_x2_t4_g4_g2

0x01ae,	// (0x0004cd7f) list_medium_line_x2_t4_g4_g3_ParamLimits

0x01ae,	// (0x0004cd7f) list_medium_line_x2_t4_g4_g3

0x0255,	// (0x0004ce26) list_medium_line_x2_t4_g4_g4_ParamLimits

0x0255,	// (0x0004ce26) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x0005be23) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x0005be23) list_medium_line_x2_t4_g4_g

0x0261,	// (0x0004ce32) list_medium_line_x2_t4_g4_t1_ParamLimits

0x0261,	// (0x0004ce32) list_medium_line_x2_t4_g4_t1

0x027b,	// (0x0004ce4c) list_medium_line_x2_t4_g4_t2_ParamLimits

0x027b,	// (0x0004ce4c) list_medium_line_x2_t4_g4_t2

0x0291,	// (0x0004ce62) list_medium_line_x2_t4_g4_t3_ParamLimits

0x0291,	// (0x0004ce62) list_medium_line_x2_t4_g4_t3

0x02a6,	// (0x0004ce77) list_medium_line_x2_t4_g4_t4_ParamLimits

0x02a6,	// (0x0004ce77) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x0005be2c) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x0005be2c) list_medium_line_x2_t4_g4_t

0x01a2,	// (0x0004cd73) list_medium_line_x2_t2_g4_g1_ParamLimits

0x01a2,	// (0x0004cd73) list_medium_line_x2_t2_g4_g1

0x0249,	// (0x0004ce1a) list_medium_line_x2_t2_g4_g2_ParamLimits

0x0249,	// (0x0004ce1a) list_medium_line_x2_t2_g4_g2

0x01ae,	// (0x0004cd7f) list_medium_line_x2_t2_g4_g3_ParamLimits

0x01ae,	// (0x0004cd7f) list_medium_line_x2_t2_g4_g3

0x01ba,	// (0x0004cd8b) list_medium_line_x2_t2_g4_g4_ParamLimits

0x01ba,	// (0x0004cd8b) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x0005be93) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x0005be93) list_medium_line_x2_t2_g4_g

0x02b8,	// (0x0004ce89) list_medium_line_x2_t2_g4_t1_ParamLimits

0x02b8,	// (0x0004ce89) list_medium_line_x2_t2_g4_t1

0x01ef,	// (0x0004cdc0) list_medium_line_x2_t2_g4_t2_ParamLimits

0x01ef,	// (0x0004cdc0) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x0005be9c) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x0005be9c) list_medium_line_x2_t2_g4_t

0x01a2,	// (0x0004cd73) list_medium_line_x2_t2_g3_g1_ParamLimits

0x01a2,	// (0x0004cd73) list_medium_line_x2_t2_g3_g1

0x01ae,	// (0x0004cd7f) list_medium_line_x2_t2_g3_g2_ParamLimits

0x01ae,	// (0x0004cd7f) list_medium_line_x2_t2_g3_g2

0x01ba,	// (0x0004cd8b) list_medium_line_x2_t2_g3_g3_ParamLimits

0x01ba,	// (0x0004cd8b) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x0005be09) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x0005be09) list_medium_line_x2_t2_g3_g

0x02cd,	// (0x0004ce9e) list_medium_line_x2_t2_g3_t1_ParamLimits

0x02cd,	// (0x0004ce9e) list_medium_line_x2_t2_g3_t1

0x01ef,	// (0x0004cdc0) list_medium_line_x2_t2_g3_t2_ParamLimits

0x01ef,	// (0x0004cdc0) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x0005bea1) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x0005bea1) list_medium_line_x2_t2_g3_t

0x3270,	// (0x0004fe41) main_sp_fs_list_pane_ParamLimits

0x3270,	// (0x0004fe41) main_sp_fs_list_pane

0xccfa,	// (0x000598cb) sp_fs_scroll_pane_ParamLimits

0xccfa,	// (0x000598cb) sp_fs_scroll_pane

0x02e2,	// (0x0004ceb3) list_medium_line_x2_t3_t1

0x02f2,	// (0x0004cec3) list_medium_line_x2_t3_t2

0x0300,	// (0x0004ced1) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x0005beec) list_medium_line_x2_t3_t

0x030e,	// (0x0004cedf) list_medium_line_x3_t4_t1

0x031e,	// (0x0004ceef) list_medium_line_x3_t4_t2

0x032c,	// (0x0004cefd) list_medium_line_x3_t4_t3

0x0300,	// (0x0004ced1) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x0005bef3) list_medium_line_x3_t4_t

0x033a,	// (0x0004cf0b) list_medium_line_x4_t5_t1

0x034a,	// (0x0004cf1b) list_medium_line_x4_t5_t2

0x032c,	// (0x0004cefd) list_medium_line_x4_t5_t3

0x0358,	// (0x0004cf29) list_medium_line_x4_t5_t4

0x0300,	// (0x0004ced1) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x0005befc) list_medium_line_x4_t5_t

0x01a2,	// (0x0004cd73) list_medium_line_t4_g4_g1_ParamLimits

0x01a2,	// (0x0004cd73) list_medium_line_t4_g4_g1

0x0366,	// (0x0004cf37) list_medium_line_t4_g4_g2_ParamLimits

0x0366,	// (0x0004cf37) list_medium_line_t4_g4_g2

0x0372,	// (0x0004cf43) list_medium_line_t4_g4_g3_ParamLimits

0x0372,	// (0x0004cf43) list_medium_line_t4_g4_g3

0x01ba,	// (0x0004cd8b) list_medium_line_t4_g4_g4_ParamLimits

0x01ba,	// (0x0004cd8b) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x0005bf07) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x0005bf07) list_medium_line_t4_g4_g

0x037e,	// (0x0004cf4f) list_medium_line_t4_g4_t1_ParamLimits

0x037e,	// (0x0004cf4f) list_medium_line_t4_g4_t1

0x0393,	// (0x0004cf64) list_medium_line_t4_g4_t2_ParamLimits

0x0393,	// (0x0004cf64) list_medium_line_t4_g4_t2

0x03a8,	// (0x0004cf79) list_medium_line_t4_g4_t3_ParamLimits

0x03a8,	// (0x0004cf79) list_medium_line_t4_g4_t3

0x01ef,	// (0x0004cdc0) list_medium_line_t4_g4_t4_ParamLimits

0x01ef,	// (0x0004cdc0) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x0005bf10) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x0005bf10) list_medium_line_t4_g4_t

0x332f,	// (0x0004ff00) chi_dic_find_pane_g1

0x4333,	// (0x00050f04) main_tport_pane

0x057f,	// (0x0004d150) list_medium_line_plain_t1

0x058d,	// (0x0004d15e) list_medium_line_t2_g2_g1_ParamLimits

0x058d,	// (0x0004d15e) list_medium_line_t2_g2_g1

0x0599,	// (0x0004d16a) list_medium_line_t2_g2_g2_ParamLimits

0x0599,	// (0x0004d16a) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x0005c5d1) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x0005c5d1) list_medium_line_t2_g2_g

0x05a5,	// (0x0004d176) list_medium_line_t2_g2_t1_ParamLimits

0x05a5,	// (0x0004d176) list_medium_line_t2_g2_t1

0x05bc,	// (0x0004d18d) list_medium_line_t2_g2_t2_ParamLimits

0x05bc,	// (0x0004d18d) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x0005c5d6) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x0005c5d6) list_medium_line_t2_g2_t

0x77f9,	// (0x000543ca) aid_sp_fs_list_icon_a_sm

0x7801,	// (0x000543d2) aid_sp_fs_list_icon_d

0x7809,	// (0x000543da) aid_sp_fs_text_primary

0x7812,	// (0x000543e3) aid_sp_fs_text_secondary

0x781b,	// (0x000543ec) list_medium_line

0x781b,	// (0x000543ec) list_medium_line_g2

0x781b,	// (0x000543ec) list_medium_line_g3

0x781b,	// (0x000543ec) list_medium_line_plain

0x781b,	// (0x000543ec) list_medium_line_plain_t2

0x781b,	// (0x000543ec) list_medium_line_plain_t3

0x781b,	// (0x000543ec) list_medium_line_right_icon

0x781b,	// (0x000543ec) list_medium_line_right_iconx2

0x781b,	// (0x000543ec) list_medium_line_t2

0x781b,	// (0x000543ec) list_medium_line_t2_g2

0x781b,	// (0x000543ec) list_medium_line_t2_g3

0x781b,	// (0x000543ec) list_medium_line_t2_right_icon

0x781b,	// (0x000543ec) list_medium_line_t2_right_iconx2

0x781b,	// (0x000543ec) list_medium_line_t3

0x781b,	// (0x000543ec) list_medium_line_t3_g2

0x781b,	// (0x000543ec) list_medium_line_t3_g3

0x781b,	// (0x000543ec) list_medium_line_t3_right_iconx2

0x7824,	// (0x000543f5) list_medium_line_t4_g4

0x782d,	// (0x000543fe) list_medium_line_x2

0x782d,	// (0x000543fe) list_medium_line_x2_t2_g2

0x782d,	// (0x000543fe) list_medium_line_x2_t2_g3

0x782d,	// (0x000543fe) list_medium_line_x2_t2_g4

0x782d,	// (0x000543fe) list_medium_line_x2_t3

0x782d,	// (0x000543fe) list_medium_line_x2_t3_g2

0x782d,	// (0x000543fe) list_medium_line_x2_t3_g3

0x782d,	// (0x000543fe) list_medium_line_x2_t3_g4

0x782d,	// (0x000543fe) list_medium_line_x2_t4_g2

0x782d,	// (0x000543fe) list_medium_line_x2_t4_g4

0x7836,	// (0x00054407) list_medium_line_x3

0x7836,	// (0x00054407) list_medium_line_x3_t4

0x7836,	// (0x00054407) list_medium_line_x3_t4_g4

0x7824,	// (0x000543f5) list_medium_line_x4_t4

0x7824,	// (0x000543f5) list_medium_line_x4_t4_g7

0x7824,	// (0x000543f5) list_medium_line_x4_t5

0x0745,	// (0x0004d316) list_single_fs_dyc_pane_ParamLimits

0x0745,	// (0x0004d316) list_single_fs_dyc_pane

0x01a2,	// (0x0004cd73) list_medium_line_x4_t4_g7_g1_ParamLimits

0x01a2,	// (0x0004cd73) list_medium_line_x4_t4_g7_g1

0x0785,	// (0x0004d356) list_medium_line_x4_t4_g7_g2_ParamLimits

0x0785,	// (0x0004d356) list_medium_line_x4_t4_g7_g2

0x0791,	// (0x0004d362) list_medium_line_x4_t4_g7_g3_ParamLimits

0x0791,	// (0x0004d362) list_medium_line_x4_t4_g7_g3

0x07a0,	// (0x0004d371) list_medium_line_x4_t4_g7_g4_ParamLimits

0x07a0,	// (0x0004d371) list_medium_line_x4_t4_g7_g4

0x07ac,	// (0x0004d37d) list_medium_line_x4_t4_g7_g5_ParamLimits

0x07ac,	// (0x0004d37d) list_medium_line_x4_t4_g7_g5

0x07bb,	// (0x0004d38c) list_medium_line_x4_t4_g7_g6_ParamLimits

0x07bb,	// (0x0004d38c) list_medium_line_x4_t4_g7_g6

0x07ca,	// (0x0004d39b) list_medium_line_x4_t4_g7_g7_ParamLimits

0x07ca,	// (0x0004d39b) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd0,	// (0x0005c7a1) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd0,	// (0x0005c7a1) list_medium_line_x4_t4_g7_g

0x07d6,	// (0x0004d3a7) list_medium_line_x4_t4_g7_t1_ParamLimits

0x07d6,	// (0x0004d3a7) list_medium_line_x4_t4_g7_t1

0x07eb,	// (0x0004d3bc) list_medium_line_x4_t4_g7_t2_ParamLimits

0x07eb,	// (0x0004d3bc) list_medium_line_x4_t4_g7_t2

0x0800,	// (0x0004d3d1) list_medium_line_x4_t4_g7_t3_ParamLimits

0x0800,	// (0x0004d3d1) list_medium_line_x4_t4_g7_t3

0x0815,	// (0x0004d3e6) list_medium_line_x4_t4_g7_t4_ParamLimits

0x0815,	// (0x0004d3e6) list_medium_line_x4_t4_g7_t4

0x0827,	// (0x0004d3f8) list_medium_line_x4_t4_g7_t5_ParamLimits

0x0827,	// (0x0004d3f8) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdf,	// (0x0005c7b0) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdf,	// (0x0005c7b0) list_medium_line_x4_t4_g7_t

0x0839,	// (0x0004d40a) list_single_dyc_row_pane_ParamLimits

0x0839,	// (0x0004d40a) list_single_dyc_row_pane

0x8596,	// (0x00055167) call5_gesture_pane_ParamLimits

0x8596,	// (0x00055167) call5_gesture_pane

0x85ec,	// (0x000551bd) call5_windows_pane_ParamLimits

0x85ec,	// (0x000551bd) call5_windows_pane

0x8692,	// (0x00055263) call5_swipe_1_pane_cp_ParamLimits

0x8692,	// (0x00055263) call5_swipe_1_pane_cp

0x869e,	// (0x0005526f) call5_swipe_2_pane_cp_ParamLimits

0x869e,	// (0x0005526f) call5_swipe_2_pane_cp

0xb463,	// (0x00058034) call5_image_pane_cp

0x86aa,	// (0x0005527b) popup_call5_audio_first_window_cp_ParamLimits

0x86aa,	// (0x0005527b) popup_call5_audio_first_window_cp

0xe68d,	// (0x0005b25e) call5_swipe_1_pane_g1_cp_ParamLimits

0xe68d,	// (0x0005b25e) call5_swipe_1_pane_g1_cp

0xe6cd,	// (0x0005b29e) call5_swipe_1_pane_g2_cp

0xe6a6,	// (0x0005b277) call5_swipe_1_pane_t1_cp_ParamLimits

0xe6a6,	// (0x0005b277) call5_swipe_1_pane_t1_cp

0xe68d,	// (0x0005b25e) call5_swipe_2_pane_g1_cp_ParamLimits

0xe68d,	// (0x0005b25e) call5_swipe_2_pane_g1_cp

0xe6d5,	// (0x0005b2a6) call5_swipe_2_pane_g2_cp

0xe6dd,	// (0x0005b2ae) call5_swipe_2_pane_t1_cp_ParamLimits

0xe6dd,	// (0x0005b2ae) call5_swipe_2_pane_t1_cp

0xa4c6,	// (0x00057097) main_sp_fs_email_pane

0xe6f2,	// (0x0005b2c3) main_sp_fs_listscroll_pane_te

0x86b8,	// (0x00055289) popup_sp_fs_action_menu_pane_ParamLimits

0x86b8,	// (0x00055289) popup_sp_fs_action_menu_pane

0xcc63,	// (0x00059834) bg_sp_fs_ctrlbar_pane_g1

0xd26e,	// (0x00059e3f) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xd280,	// (0x00059e51) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xd277,	// (0x00059e48) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcc63,	// (0x00059834) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfccd,	// (0x0005c89e) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xca48,	// (0x00059619) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xca48,	// (0x00059619) bg_sp_fs_ctrlbar_ddmenu_pane

0xe6fb,	// (0x0005b2cc) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe6fb,	// (0x0005b2cc) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe707,	// (0x0005b2d8) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe707,	// (0x0005b2d8) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd6,	// (0x0005c8a7) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd6,	// (0x0005c8a7) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe733,	// (0x0005b304) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe733,	// (0x0005b304) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x08d0,	// (0x0004d4a1) list_medium_line_t2_right_icon_g1

0x08d8,	// (0x0004d4a9) list_medium_line_t2_right_icon_t1

0x08e8,	// (0x0004d4b9) list_medium_line_t2_right_icon_t2

0x0001,

0xfcdb,	// (0x0005c8ac) list_medium_line_t2_right_icon_t

0xc85b,	// (0x0005942c) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc85b,	// (0x0005942c) bg_sp_fs_ctrlbar_pane

0x8744,	// (0x00055315) main_sp_fs_ctrlbar_button_pane_cp01

0x874e,	// (0x0005531f) main_sp_fs_ctrlbar_ddmenu_pane

0xe785,	// (0x0005b356) main_sp_fs_ctrlbar_pane_g1

0xe791,	// (0x0005b362) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce0,	// (0x0005c8b1) main_sp_fs_ctrlbar_pane_g

0xe79d,	// (0x0005b36e) main_sp_fs_ctrlbar_pane_t1

0x8758,	// (0x00055329) main_sp_fs_ctrlbar_pane

0x877c,	// (0x0005534d) main_sp_fs_listscroll_pane_te_cp01

0x08fa,	// (0x0004d4cb) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x08fa,	// (0x0004d4cb) popup_sp_fs_action_menu_pane_cp01

0xa4c6,	// (0x00057097) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa4c6,	// (0x00057097) bg_sp_fs_highlight_list_pane_cp01

0x879c,	// (0x0005536d) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x879c,	// (0x0005536d) sp_fs_action_menu_list_gene_pane_g1

0xe7cd,	// (0x0005b39e) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe7cd,	// (0x0005b39e) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x0005c8bb) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x0005c8bb) sp_fs_action_menu_list_gene_pane_g

0x87ab,	// (0x0005537c) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x87ab,	// (0x0005537c) sp_fs_action_menu_list_gene_pane_t1

0x87c3,	// (0x00055394) sp_fs_action_menu_list_gene_pane_ParamLimits

0x87c3,	// (0x00055394) sp_fs_action_menu_list_gene_pane

0xe7da,	// (0x0005b3ab) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe7da,	// (0x0005b3ab) popup_sp_fs_action_menu_bg_pane

0x87e2,	// (0x000553b3) sp_fs_action_menu_list_pane_ParamLimits

0x87e2,	// (0x000553b3) sp_fs_action_menu_list_pane

0x092a,	// (0x0004d4fb) sp_fs_scroll_pane_cp01_ParamLimits

0x092a,	// (0x0004d4fb) sp_fs_scroll_pane_cp01

0x0950,	// (0x0004d521) list_medium_line_plain_t2_t1

0x0960,	// (0x0004d531) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x0005c8c0) list_medium_line_plain_t2_t

0x0970,	// (0x0004d541) list_medium_line_plain_t3_t1

0x0980,	// (0x0004d551) list_medium_line_plain_t3_t2

0x098e,	// (0x0004d55f) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x0005c8c5) list_medium_line_plain_t3_t

0x01a2,	// (0x0004cd73) list_medium_line_x2_t2_g2_g1_ParamLimits

0x01a2,	// (0x0004cd73) list_medium_line_x2_t2_g2_g1

0x01ba,	// (0x0004cd8b) list_medium_line_x2_t2_g2_g2_ParamLimits

0x01ba,	// (0x0004cd8b) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x0005be17) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x0005be17) list_medium_line_x2_t2_g2_g

0x037e,	// (0x0004cf4f) list_medium_line_x2_t2_g2_t1_ParamLimits

0x037e,	// (0x0004cf4f) list_medium_line_x2_t2_g2_t1

0x01ef,	// (0x0004cdc0) list_medium_line_x2_t2_g2_t2_ParamLimits

0x01ef,	// (0x0004cdc0) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x0005c8cc) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x0005c8cc) list_medium_line_x2_t2_g2_t

0x01a2,	// (0x0004cd73) list_medium_line_x2_t4_g2_g1_ParamLimits

0x01a2,	// (0x0004cd73) list_medium_line_x2_t4_g2_g1

0x099c,	// (0x0004d56d) list_medium_line_x2_t4_g2_g2_ParamLimits

0x099c,	// (0x0004d56d) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd00,	// (0x0005c8d1) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd00,	// (0x0005c8d1) list_medium_line_x2_t4_g2_g

0x09ad,	// (0x0004d57e) list_medium_line_x2_t4_g2_t1_ParamLimits

0x09ad,	// (0x0004d57e) list_medium_line_x2_t4_g2_t1

0x09c4,	// (0x0004d595) list_medium_line_x2_t4_g2_t2_ParamLimits

0x09c4,	// (0x0004d595) list_medium_line_x2_t4_g2_t2

0x09d9,	// (0x0004d5aa) list_medium_line_x2_t4_g2_t3_ParamLimits

0x09d9,	// (0x0004d5aa) list_medium_line_x2_t4_g2_t3

0x01ef,	// (0x0004cdc0) list_medium_line_x2_t4_g2_t4_ParamLimits

0x01ef,	// (0x0004cdc0) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd05,	// (0x0005c8d6) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd05,	// (0x0005c8d6) list_medium_line_x2_t4_g2_t

0x09eb,	// (0x0004d5bc) list_medium_line_t3_right_iconx2_g1

0x08d0,	// (0x0004d4a1) list_medium_line_t3_right_iconx2_g2

0x09f3,	// (0x0004d5c4) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd0e,	// (0x0005c8df) list_medium_line_t3_right_iconx2_g

0x09fd,	// (0x0004d5ce) list_medium_line_t3_right_iconx2_t1

0x0a0d,	// (0x0004d5de) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd15,	// (0x0005c8e6) list_medium_line_t3_right_iconx2_t

0x01a2,	// (0x0004cd73) list_medium_line_x3_t4_g4_g1_ParamLimits

0x01a2,	// (0x0004cd73) list_medium_line_x3_t4_g4_g1

0x01ae,	// (0x0004cd7f) list_medium_line_x3_t4_g4_g2_ParamLimits

0x01ae,	// (0x0004cd7f) list_medium_line_x3_t4_g4_g2

0x0366,	// (0x0004cf37) list_medium_line_x3_t4_g4_g3_ParamLimits

0x0366,	// (0x0004cf37) list_medium_line_x3_t4_g4_g3

0x0a1b,	// (0x0004d5ec) list_medium_line_x3_t4_g4_g4_ParamLimits

0x0a1b,	// (0x0004d5ec) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd1a,	// (0x0005c8eb) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd1a,	// (0x0005c8eb) list_medium_line_x3_t4_g4_g

0x0a27,	// (0x0004d5f8) list_medium_line_x3_t4_g4_t1_ParamLimits

0x0a27,	// (0x0004d5f8) list_medium_line_x3_t4_g4_t1

0x0a3e,	// (0x0004d60f) list_medium_line_x3_t4_g4_t2_ParamLimits

0x0a3e,	// (0x0004d60f) list_medium_line_x3_t4_g4_t2

0x0393,	// (0x0004cf64) list_medium_line_x3_t4_g4_t3_ParamLimits

0x0393,	// (0x0004cf64) list_medium_line_x3_t4_g4_t3

0x0a59,	// (0x0004d62a) list_medium_line_x3_t4_g4_t4_ParamLimits

0x0a59,	// (0x0004d62a) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd23,	// (0x0005c8f4) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd23,	// (0x0005c8f4) list_medium_line_x3_t4_g4_t

0x0a76,	// (0x0004d647) list_single_dyc_row_text_pane_t1_ParamLimits

0x0a76,	// (0x0004d647) list_single_dyc_row_text_pane_t1

0x0abf,	// (0x0004d690) list_single_dyc_row_text_pane_t2_ParamLimits

0x0abf,	// (0x0004d690) list_single_dyc_row_text_pane_t2

0x8802,	// (0x000553d3) list_single_dyc_row_text_pane_t3_ParamLimits

0x8802,	// (0x000553d3) list_single_dyc_row_text_pane_t3

0x0005,

0xfd2c,	// (0x0005c8fd) list_single_dyc_row_text_pane_t_ParamLimits

0xfd2c,	// (0x0005c8fd) list_single_dyc_row_text_pane_t

0x8826,	// (0x000553f7) list_single_dyc_row_pane_g1_ParamLimits

0x8826,	// (0x000553f7) list_single_dyc_row_pane_g1

0x8832,	// (0x00055403) list_single_dyc_row_pane_g2_ParamLimits

0x8832,	// (0x00055403) list_single_dyc_row_pane_g2

0x883e,	// (0x0005540f) list_single_dyc_row_pane_g3_ParamLimits

0x883e,	// (0x0005540f) list_single_dyc_row_pane_g3

0x884a,	// (0x0005541b) list_single_dyc_row_pane_g4_ParamLimits

0x884a,	// (0x0005541b) list_single_dyc_row_pane_g4

0x0003,

0xfd39,	// (0x0005c90a) list_single_dyc_row_pane_g_ParamLimits

0xfd39,	// (0x0005c90a) list_single_dyc_row_pane_g

0x8856,	// (0x00055427) list_single_dyc_row_text_pane_ParamLimits

0x8856,	// (0x00055427) list_single_dyc_row_text_pane

0x977d,	// (0x0005634e) bg_sp_fs_scroll_pane

0xe7e8,	// (0x0005b3b9) thumb_sp_fs_scroll_pane

0x058d,	// (0x0004d15e) list_medium_line_g1_ParamLimits

0x058d,	// (0x0004d15e) list_medium_line_g1

0x0bf4,	// (0x0004d7c5) list_medium_line_t1_ParamLimits

0x0bf4,	// (0x0004d7c5) list_medium_line_t1

0x01a2,	// (0x0004cd73) list_medium_line_x2_g1_ParamLimits

0x01a2,	// (0x0004cd73) list_medium_line_x2_g1

0x01ae,	// (0x0004cd7f) list_medium_line_x2_g2_ParamLimits

0x01ae,	// (0x0004cd7f) list_medium_line_x2_g2

0x0001,

0xfd42,	// (0x0005c913) list_medium_line_x2_g_ParamLimits

0xfd42,	// (0x0005c913) list_medium_line_x2_g

0x8875,	// (0x00055446) list_medium_line_x2_t1_ParamLimits

0x8875,	// (0x00055446) list_medium_line_x2_t1

0x01a2,	// (0x0004cd73) list_medium_line_x3_g1_ParamLimits

0x01a2,	// (0x0004cd73) list_medium_line_x3_g1

0x01ae,	// (0x0004cd7f) list_medium_line_x3_g2_ParamLimits

0x01ae,	// (0x0004cd7f) list_medium_line_x3_g2

0x0001,

0xfd42,	// (0x0005c913) list_medium_line_x3_g_ParamLimits

0xfd42,	// (0x0005c913) list_medium_line_x3_g

0x8875,	// (0x00055446) list_medium_line_x3_t1_ParamLimits

0x8875,	// (0x00055446) list_medium_line_x3_t1

0xe7f1,	// (0x0005b3c2) thumb_sp_fs_scroll_pane_g1

0xe7fa,	// (0x0005b3cb) thumb_sp_fs_scroll_pane_g2

0xe803,	// (0x0005b3d4) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x0005c918) thumb_sp_fs_scroll_pane_g

0xe7f1,	// (0x0005b3c2) bg_sp_fs_scroll_pane_g1

0xe7fa,	// (0x0005b3cb) bg_sp_fs_scroll_pane_g2

0xe803,	// (0x0005b3d4) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x0005c918) bg_sp_fs_scroll_pane_g

0x01a2,	// (0x0004cd73) list_medium_line_x2_t3_g4_g1_ParamLimits

0x01a2,	// (0x0004cd73) list_medium_line_x2_t3_g4_g1

0x0249,	// (0x0004ce1a) list_medium_line_x2_t3_g4_g2_ParamLimits

0x0249,	// (0x0004ce1a) list_medium_line_x2_t3_g4_g2

0x01ae,	// (0x0004cd7f) list_medium_line_x2_t3_g4_g3_ParamLimits

0x01ae,	// (0x0004cd7f) list_medium_line_x2_t3_g4_g3

0x01ba,	// (0x0004cd8b) list_medium_line_x2_t3_g4_g4_ParamLimits

0x01ba,	// (0x0004cd8b) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x0005be93) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x0005be93) list_medium_line_x2_t3_g4_g

0x0c09,	// (0x0004d7da) list_medium_line_x2_t3_g4_t1_ParamLimits

0x0c09,	// (0x0004d7da) list_medium_line_x2_t3_g4_t1

0x0c23,	// (0x0004d7f4) list_medium_line_x2_t3_g4_t2_ParamLimits

0x0c23,	// (0x0004d7f4) list_medium_line_x2_t3_g4_t2

0x01ef,	// (0x0004cdc0) list_medium_line_x2_t3_g4_t3_ParamLimits

0x01ef,	// (0x0004cdc0) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd4e,	// (0x0005c91f) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd4e,	// (0x0005c91f) list_medium_line_x2_t3_g4_t

0x058d,	// (0x0004d15e) list_medium_line_g2_g1_ParamLimits

0x058d,	// (0x0004d15e) list_medium_line_g2_g1

0x0599,	// (0x0004d16a) list_medium_line_g2_g2_ParamLimits

0x0599,	// (0x0004d16a) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x0005c5d1) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x0005c5d1) list_medium_line_g2_g

0x0c3d,	// (0x0004d80e) list_medium_line_g2_t1_ParamLimits

0x0c3d,	// (0x0004d80e) list_medium_line_g2_t1

0x058d,	// (0x0004d15e) list_medium_line_t3_g2_g1_ParamLimits

0x058d,	// (0x0004d15e) list_medium_line_t3_g2_g1

0x0599,	// (0x0004d16a) list_medium_line_t3_g2_g2_ParamLimits

0x0599,	// (0x0004d16a) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x0005c5d1) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x0005c5d1) list_medium_line_t3_g2_g

0x0c52,	// (0x0004d823) list_medium_line_t3_g2_t1_ParamLimits

0x0c52,	// (0x0004d823) list_medium_line_t3_g2_t1

0x0c69,	// (0x0004d83a) list_medium_line_t3_g2_t2_ParamLimits

0x0c69,	// (0x0004d83a) list_medium_line_t3_g2_t2

0x0c7e,	// (0x0004d84f) list_medium_line_t3_g2_t3_ParamLimits

0x0c7e,	// (0x0004d84f) list_medium_line_t3_g2_t3

0x0002,

0xfd55,	// (0x0005c926) list_medium_line_t3_g2_t_ParamLimits

0xfd55,	// (0x0005c926) list_medium_line_t3_g2_t

0x08d0,	// (0x0004d4a1) list_medium_line_right_icon_g1

0x0c97,	// (0x0004d868) list_medium_line_right_icon_t1

0x058d,	// (0x0004d15e) list_medium_line_t2_g1_ParamLimits

0x058d,	// (0x0004d15e) list_medium_line_t2_g1

0x0ca5,	// (0x0004d876) list_medium_line_t2_t1_ParamLimits

0x0ca5,	// (0x0004d876) list_medium_line_t2_t1

0x0cbf,	// (0x0004d890) list_medium_line_t2_t2_ParamLimits

0x0cbf,	// (0x0004d890) list_medium_line_t2_t2

0x0001,

0xfd5c,	// (0x0005c92d) list_medium_line_t2_t_ParamLimits

0xfd5c,	// (0x0005c92d) list_medium_line_t2_t

0x058d,	// (0x0004d15e) list_medium_line_t3_g1_ParamLimits

0x058d,	// (0x0004d15e) list_medium_line_t3_g1

0x0cd8,	// (0x0004d8a9) list_medium_line_t3_t1_ParamLimits

0x0cd8,	// (0x0004d8a9) list_medium_line_t3_t1

0x0cef,	// (0x0004d8c0) list_medium_line_t3_t2_ParamLimits

0x0cef,	// (0x0004d8c0) list_medium_line_t3_t2

0x0d04,	// (0x0004d8d5) list_medium_line_t3_t3_ParamLimits

0x0d04,	// (0x0004d8d5) list_medium_line_t3_t3

0x0002,

0xfd61,	// (0x0005c932) list_medium_line_t3_t_ParamLimits

0xfd61,	// (0x0005c932) list_medium_line_t3_t

0x058d,	// (0x0004d15e) list_medium_line_g3_g1_ParamLimits

0x058d,	// (0x0004d15e) list_medium_line_g3_g1

0x0d16,	// (0x0004d8e7) list_medium_line_g3_g2_ParamLimits

0x0d16,	// (0x0004d8e7) list_medium_line_g3_g2

0x0599,	// (0x0004d16a) list_medium_line_g3_g3_ParamLimits

0x0599,	// (0x0004d16a) list_medium_line_g3_g3

0x0002,

0xfd68,	// (0x0005c939) list_medium_line_g3_g_ParamLimits

0xfd68,	// (0x0005c939) list_medium_line_g3_g

0x0d22,	// (0x0004d8f3) list_medium_line_g3_t1_ParamLimits

0x0d22,	// (0x0004d8f3) list_medium_line_g3_t1

0x058d,	// (0x0004d15e) list_medium_line_t2_g3_g1_ParamLimits

0x058d,	// (0x0004d15e) list_medium_line_t2_g3_g1

0x0d16,	// (0x0004d8e7) list_medium_line_t2_g3_g2_ParamLimits

0x0d16,	// (0x0004d8e7) list_medium_line_t2_g3_g2

0x0599,	// (0x0004d16a) list_medium_line_t2_g3_g3_ParamLimits

0x0599,	// (0x0004d16a) list_medium_line_t2_g3_g3

0x0002,

0xfd68,	// (0x0005c939) list_medium_line_t2_g3_g_ParamLimits

0xfd68,	// (0x0005c939) list_medium_line_t2_g3_g

0x0d37,	// (0x0004d908) list_medium_line_t2_g3_t1_ParamLimits

0x0d37,	// (0x0004d908) list_medium_line_t2_g3_t1

0x0d51,	// (0x0004d922) list_medium_line_t2_g3_t2_ParamLimits

0x0d51,	// (0x0004d922) list_medium_line_t2_g3_t2

0x0001,

0xfd6f,	// (0x0005c940) list_medium_line_t2_g3_t_ParamLimits

0xfd6f,	// (0x0005c940) list_medium_line_t2_g3_t

0x058d,	// (0x0004d15e) list_medium_line_t3_g3_g1_ParamLimits

0x058d,	// (0x0004d15e) list_medium_line_t3_g3_g1

0x0d16,	// (0x0004d8e7) list_medium_line_t3_g3_g2_ParamLimits

0x0d16,	// (0x0004d8e7) list_medium_line_t3_g3_g2

0x0599,	// (0x0004d16a) list_medium_line_t3_g3_g3_ParamLimits

0x0599,	// (0x0004d16a) list_medium_line_t3_g3_g3

0x0002,

0xfd68,	// (0x0005c939) list_medium_line_t3_g3_g_ParamLimits

0xfd68,	// (0x0005c939) list_medium_line_t3_g3_g

0x0d6c,	// (0x0004d93d) list_medium_line_t3_g3_t1_ParamLimits

0x0d6c,	// (0x0004d93d) list_medium_line_t3_g3_t1

0x0d80,	// (0x0004d951) list_medium_line_t3_g3_t2_ParamLimits

0x0d80,	// (0x0004d951) list_medium_line_t3_g3_t2

0x0d92,	// (0x0004d963) list_medium_line_t3_g3_t3_ParamLimits

0x0d92,	// (0x0004d963) list_medium_line_t3_g3_t3

0x0002,

0xfd74,	// (0x0005c945) list_medium_line_t3_g3_t_ParamLimits

0xfd74,	// (0x0005c945) list_medium_line_t3_g3_t

0x09eb,	// (0x0004d5bc) list_medium_line_right_iconx2_g1

0x08d0,	// (0x0004d4a1) list_medium_line_right_iconx2_g2

0x0001,

0xfd7b,	// (0x0005c94c) list_medium_line_right_iconx2_g

0x0da6,	// (0x0004d977) list_medium_line_right_iconx2_t1

0x09eb,	// (0x0004d5bc) list_medium_line_t2_right_iconx2_g1

0x08d0,	// (0x0004d4a1) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd7b,	// (0x0005c94c) list_medium_line_t2_right_iconx2_g

0x0db4,	// (0x0004d985) list_medium_line_t2_right_iconx2_t1

0x0dc4,	// (0x0004d995) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd80,	// (0x0005c951) list_medium_line_t2_right_iconx2_t

0x0dd6,	// (0x0004d9a7) list_medium_line_x4_t4_t1

0x0de4,	// (0x0004d9b5) list_medium_line_x4_t4_t2

0x0df4,	// (0x0004d9c5) list_medium_line_x4_t4_t3

0x0e04,	// (0x0004d9d5) list_medium_line_x4_t4_t4

0x0003,

0xfd85,	// (0x0005c956) list_medium_line_x4_t4_t

0x88ce,	// (0x0005549f) tport_appsw_pane_ParamLimits

0x88ce,	// (0x0005549f) tport_appsw_pane

0x88e6,	// (0x000554b7) tport_contact_pane_ParamLimits

0x88e6,	// (0x000554b7) tport_contact_pane

0x88fe,	// (0x000554cf) tport_listscroll_pane_ParamLimits

0x88fe,	// (0x000554cf) tport_listscroll_pane

0x8918,	// (0x000554e9) cell_tport_appsw_pane_ParamLimits

0x8918,	// (0x000554e9) cell_tport_appsw_pane

0xd6d9,	// (0x0005a2aa) tport_appsw_pane_g1_ParamLimits

0xd6d9,	// (0x0005a2aa) tport_appsw_pane_g1

0xe80c,	// (0x0005b3dd) tport_contact_pane_g1

0xe19c,	// (0x0005ad6d) tport_contact_pane_t1

0xe815,	// (0x0005b3e6) tport_contact_pane_t2

0x0001,

0xfd8e,	// (0x0005c95f) tport_contact_pane_t

0xe823,	// (0x0005b3f4) list_tport_pane

0xe82c,	// (0x0005b3fd) scroll_pane_cp_030

0x8960,	// (0x00055531) cell_tport_appsw_pane_g1

0x8970,	// (0x00055541) cell_tport_appsw_pane_t1

0x897e,	// (0x0005554f) grid_highlight_pane_cp019

0x8986,	// (0x00055557) list_tport_double_graphic_pane_ParamLimits

0x8986,	// (0x00055557) list_tport_double_graphic_pane

0xa4c6,	// (0x00057097) list_highlight_pane_cp023_ParamLimits

0xa4c6,	// (0x00057097) list_highlight_pane_cp023

0x8993,	// (0x00055564) list_tport_double_graphic_pane_g1_ParamLimits

0x8993,	// (0x00055564) list_tport_double_graphic_pane_g1

0x89a0,	// (0x00055571) list_tport_double_graphic_pane_t1_ParamLimits

0x89a0,	// (0x00055571) list_tport_double_graphic_pane_t1

0x89b5,	// (0x00055586) list_tport_double_graphic_pane_t2_ParamLimits

0x89b5,	// (0x00055586) list_tport_double_graphic_pane_t2

0x0001,

0xfd9a,	// (0x0005c96b) list_tport_double_graphic_pane_t_ParamLimits

0xfd9a,	// (0x0005c96b) list_tport_double_graphic_pane_t

0x977d,	// (0x0005634e) main_cale_note_pane

0x6a13,	// (0x000535e4) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x6a13,	// (0x000535e4) cell_vitu2_function_top_wide_pane_cp01

0x8293,	// (0x00054e64) wait_bar_pane_cp05_ParamLimits

0xa4c6,	// (0x00057097) listscroll_cmail_pane

0xe835,	// (0x0005b406) list_cmail_pane

0xd731,	// (0x0005a302) list_cmail_body_pane

0x89c7,	// (0x00055598) list_single_cmail_header_caption_pane

0x89de,	// (0x000555af) list_single_cmail_header_detail_pane_ParamLimits

0x89de,	// (0x000555af) list_single_cmail_header_detail_pane

0xe845,	// (0x0005b416) list_single_cmail_header_caption_pane_t1

0x0e14,	// (0x0004d9e5) list_single_cmail_header_detail_pane_g1_ParamLimits

0x0e14,	// (0x0004d9e5) list_single_cmail_header_detail_pane_g1

0x8a08,	// (0x000555d9) list_single_cmail_header_detail_pane_g2_ParamLimits

0x8a08,	// (0x000555d9) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9f,	// (0x0005c970) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9f,	// (0x0005c970) list_single_cmail_header_detail_pane_g

0x0e2c,	// (0x0004d9fd) list_single_cmail_header_detail_pane_t1_ParamLimits

0x0e2c,	// (0x0004d9fd) list_single_cmail_header_detail_pane_t1

0x0e6a,	// (0x0004da3b) list_single_cmail_header_editor_pane_bg_ParamLimits

0x0e6a,	// (0x0004da3b) list_single_cmail_header_editor_pane_bg

0xe33d,	// (0x0005af0e) list_cmail_body_pane_g1

0xe869,	// (0x0005b43a) list_cmail_body_pane_t1

0xd6f9,	// (0x0005a2ca) list_single_cmail_header_editor_pane_bg_g1

0xac3a,	// (0x0005780b) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd709,	// (0x0005a2da) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd701,	// (0x0005a2d2) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd91d,	// (0x0005a4ee) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd729,	// (0x0005a2fa) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd719,	// (0x0005a2ea) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd721,	// (0x0005a2f2) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xac1a,	// (0x000577eb) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8a14,	// (0x000555e5) calenote_gesture_pane_ParamLimits

0x8a14,	// (0x000555e5) calenote_gesture_pane

0x8a34,	// (0x00055605) calenote_window_pane_ParamLimits

0x8a34,	// (0x00055605) calenote_window_pane

0xe877,	// (0x0005b448) popup_note_window_cp01

0x8a50,	// (0x00055621) calenote_swipe_1_pane_ParamLimits

0x8a50,	// (0x00055621) calenote_swipe_1_pane

0x869e,	// (0x0005526f) calenote_swipe_2_pane_ParamLimits

0x869e,	// (0x0005526f) calenote_swipe_2_pane

0xe68d,	// (0x0005b25e) calenote_swipe_1_pane_g1_ParamLimits

0xe68d,	// (0x0005b25e) calenote_swipe_1_pane_g1

0xe69a,	// (0x0005b26b) calenote_swipe_1_pane_g2_ParamLimits

0xe69a,	// (0x0005b26b) calenote_swipe_1_pane_g2

0x0001,

0xfcc3,	// (0x0005c894) calenote_swipe_1_pane_g_ParamLimits

0xfcc3,	// (0x0005c894) calenote_swipe_1_pane_g

0xe889,	// (0x0005b45a) calenote_swipe_1_pane_t1_ParamLimits

0xe889,	// (0x0005b45a) calenote_swipe_1_pane_t1

0xe68d,	// (0x0005b25e) calenote_swipe_2_pane_g1_ParamLimits

0xe68d,	// (0x0005b25e) calenote_swipe_2_pane_g1

0xe8a8,	// (0x0005b479) calenote_swipe_2_pane_g2_ParamLimits

0xe8a8,	// (0x0005b479) calenote_swipe_2_pane_g2

0x0001,

0xfdab,	// (0x0005c97c) calenote_swipe_2_pane_g_ParamLimits

0xfdab,	// (0x0005c97c) calenote_swipe_2_pane_g

0xe8b4,	// (0x0005b485) calenote_swipe_2_pane_t1_ParamLimits

0xe8b4,	// (0x0005b485) calenote_swipe_2_pane_t1

0x977d,	// (0x0005634e) main_mup_navstr_pane

0x56f0,	// (0x000522c1) main_mup3_pane_t7_ParamLimits

0x56f0,	// (0x000522c1) main_mup3_pane_t7

0x9f2c,	// (0x00056afd) main_mp4_pane_g6_ParamLimits

0x9f2c,	// (0x00056afd) main_mp4_pane_g6

0xa0d0,	// (0x00056ca1) main_image3_pane_t4_ParamLimits

0xa0d0,	// (0x00056ca1) main_image3_pane_t4

0x8a65,	// (0x00055636) popup_navstr_preview_pane_ParamLimits

0x8a65,	// (0x00055636) popup_navstr_preview_pane

0x8a79,	// (0x0005564a) scroll_navstr_pane_ParamLimits

0x8a79,	// (0x0005564a) scroll_navstr_pane

0x977d,	// (0x0005634e) bg_popup_preview_window_pane_cp04

0xe8db,	// (0x0005b4ac) popup_navstr_preview_pane_t1

0x8a8d,	// (0x0005565e) scroll_navstr_pane_g1_ParamLimits

0x8a8d,	// (0x0005565e) scroll_navstr_pane_g1

0x8aa1,	// (0x00055672) scroll_navstr_pane_t1_ParamLimits

0x8aa1,	// (0x00055672) scroll_navstr_pane_t1

0xe880,	// (0x0005b451) bg_button_pane_cp014

0xe880,	// (0x0005b451) bg_button_pane_cp030

0x0876,	// (0x0004d447) list_double_fisheye_pane_g4_ParamLimits

0x0876,	// (0x0004d447) list_double_fisheye_pane_g4

0x0882,	// (0x0004d453) list_double_fisheye_pane_g5_ParamLimits

0x0882,	// (0x0004d453) list_double_fisheye_pane_g5

0xccfa,	// (0x000598cb) sp_fs_scroll_pane_cp03

0xe785,	// (0x0005b356) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe791,	// (0x0005b362) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce0,	// (0x0005c8b1) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe79d,	// (0x0005b36e) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe83d,	// (0x0005b40e) sp_fs_scroll_pane_cp02

0xa927,	// (0x000574f8) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa927,	// (0x000574f8) popup_sp_fs_calendar_preview_list_single_pane

0x977d,	// (0x0005634e) main_cam6_pano_pane

0xa4c6,	// (0x00057097) main_mup3_pane_ParamLimits

0x977d,	// (0x0005634e) main_phacti_pane

0x8166,	// (0x00054d37) bg_button_pane_cp11

0x8180,	// (0x00054d51) main_mobtv_info_pane_g2_ParamLimits

0x8180,	// (0x00054d51) main_mobtv_info_pane_g2

0x0001,

0xfc40,	// (0x0005c811) main_mobtv_info_pane_g_ParamLimits

0xfc40,	// (0x0005c811) main_mobtv_info_pane_g

0x835d,	// (0x00054f2e) sc_clock_pane_t5_ParamLimits

0x835d,	// (0x00054f2e) sc_clock_pane_t5

0x8418,	// (0x00054fe9) main_radioblah_pane_g1_ParamLimits

0xe5d9,	// (0x0005b1aa) main_radioblah_pane_t3_ParamLimits

0xe5d9,	// (0x0005b1aa) main_radioblah_pane_t3

0xe5f1,	// (0x0005b1c2) main_radioblah_pane_t4_ParamLimits

0xe5f1,	// (0x0005b1c2) main_radioblah_pane_t4

0x8440,	// (0x00055011) main_radioblah_text_pane_ParamLimits

0x8440,	// (0x00055011) main_radioblah_text_pane

0x8452,	// (0x00055023) main_radioblah_info_pane_g1_ParamLimits

0x84eb,	// (0x000550bc) main_radioblah_info_pane_t4_ParamLimits

0x84eb,	// (0x000550bc) main_radioblah_info_pane_t4

0xa4c6,	// (0x00057097) main_sp_fs_calendar_pane

0x8ab8,	// (0x00055689) main_phacti_pane_g1

0x8ac0,	// (0x00055691) phacti_note_pane_ParamLimits

0x8ac0,	// (0x00055691) phacti_note_pane

0xe8f2,	// (0x0005b4c3) phacti_term_pane_ParamLimits

0xe8f2,	// (0x0005b4c3) phacti_term_pane

0xe907,	// (0x0005b4d8) phacti_note_pane_t1_ParamLimits

0xe907,	// (0x0005b4d8) phacti_note_pane_t1

0xa2df,	// (0x00056eb0) phacti_term_pane_g1

0xa2e7,	// (0x00056eb8) phacti_term_pane_t1_ParamLimits

0xa2e7,	// (0x00056eb8) phacti_term_pane_t1

0xe91e,	// (0x0005b4ef) popup_sp_fs_calendar_preview_list_single_pane_g1

0xaa3b,	// (0x0005760c) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb5,	// (0x0005c986) popup_sp_fs_calendar_preview_list_single_pane_g

0xe926,	// (0x0005b4f7) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe926,	// (0x0005b4f7) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe93b,	// (0x0005b50c) aid_popup_sp_fs_bg_corner_pane

0xcc63,	// (0x00059834) popup_sp_fs_calendar_preview_bg_pane_g1

0x977d,	// (0x0005634e) popup_sp_fs_calendar_preview_bg_pane

0xe943,	// (0x0005b514) popup_sp_fs_calendar_preview_list_pane

0xc85b,	// (0x0005942c) bg_main_sp_fs_cale_pane_ParamLimits

0xc85b,	// (0x0005942c) bg_main_sp_fs_cale_pane

0xa31a,	// (0x00056eeb) listscroll_cale_mrui_pane_ParamLimits

0xa31a,	// (0x00056eeb) listscroll_cale_mrui_pane

0xa32f,	// (0x00056f00) listscroll_sp_fs_schedule_track_pane

0xa338,	// (0x00056f09) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xa338,	// (0x00056f09) main_sp_fs_ctrlbar_pane_cp01

0xe94b,	// (0x0005b51c) main_sp_fs_ribbon_pane

0xa34b,	// (0x00056f1c) popup_sp_fs_cale_preview_window

0x8b35,	// (0x00055706) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8b35,	// (0x00055706) list_single_sp_fs_schedule_track_pane

0xa4c6,	// (0x00057097) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xa4c6,	// (0x00057097) bg_sp_fs_highlight_list_pane_cp03

0x8b49,	// (0x0005571a) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8b49,	// (0x0005571a) list_single_sp_fs_schedule_track_pane_g1

0x8b55,	// (0x00055726) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8b55,	// (0x00055726) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdba,	// (0x0005c98b) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdba,	// (0x0005c98b) list_single_sp_fs_schedule_track_pane_g

0x8b61,	// (0x00055732) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8b61,	// (0x00055732) list_single_sp_fs_schedule_track_pane_t1

0x8b7b,	// (0x0005574c) sp_fs_schedule_track_pane_ParamLimits

0x8b7b,	// (0x0005574c) sp_fs_schedule_track_pane

0xe953,	// (0x0005b524) sp_fs_schedule_track_pane_g1

0xe95b,	// (0x0005b52c) sp_fs_schedule_track_pane_g2

0xe963,	// (0x0005b534) sp_fs_schedule_track_pane_g3

0xe96b,	// (0x0005b53c) sp_fs_schedule_track_pane_g4

0xe973,	// (0x0005b544) sp_fs_schedule_track_pane_g5

0x0004,

0xfdbf,	// (0x0005c990) sp_fs_schedule_track_pane_g

0xd6f9,	// (0x0005a2ca) bg_sp_fs_schedule_viewer_highlight_g1

0xac3a,	// (0x0005780b) bg_sp_fs_schedule_viewer_highlight_g2

0xd701,	// (0x0005a2d2) bg_sp_fs_schedule_viewer_highlight_g3

0xd709,	// (0x0005a2da) bg_sp_fs_schedule_viewer_highlight_g4

0xd91d,	// (0x0005a4ee) bg_sp_fs_schedule_viewer_highlight_g5

0xd719,	// (0x0005a2ea) bg_sp_fs_schedule_viewer_highlight_g6

0xd721,	// (0x0005a2f2) bg_sp_fs_schedule_viewer_highlight_g7

0xd729,	// (0x0005a2fa) bg_sp_fs_schedule_viewer_highlight_g8

0xac1a,	// (0x000577eb) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdca,	// (0x0005c99b) bg_sp_fs_schedule_viewer_highlight_g

0x977d,	// (0x0005634e) bg_main_sp_fs_ribbon_pane

0x8b8c,	// (0x0005575d) main_sp_fs_ribbon_pane_g1

0xe97b,	// (0x0005b54c) main_sp_fs_ribbon_pane_t1

0x8b95,	// (0x00055766) main_sp_fs_ribbon_pane_t2

0xe98a,	// (0x0005b55b) main_sp_fs_ribbon_pane_t3

0x0002,

0xfddd,	// (0x0005c9ae) main_sp_fs_ribbon_pane_t

0xe999,	// (0x0005b56a) main_sp_fs_ribbon_scheduler_pane

0xe9a1,	// (0x0005b572) bg_main_sp_fs_ribbon_pane_g1

0xe9aa,	// (0x0005b57b) bg_main_sp_fs_ribbon_pane_g2

0xe9b3,	// (0x0005b584) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0x0011,	// (0x0004cbe2) bg_main_sp_fs_ribbon_pane_g

0xe9bb,	// (0x0005b58c) main_sp_fs_ribbon_scheduler_pane_g1

0xe9c4,	// (0x0005b595) main_sp_fs_ribbon_scheduler_pane_g2

0xe9cd,	// (0x0005b59e) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0x0018,	// (0x0004cbe9) main_sp_fs_ribbon_scheduler_pane_g

0xe9d6,	// (0x0005b5a7) list_cale_mrui_pane

0x8ba4,	// (0x00055775) sp_fs_scroll_pane_cp07_ParamLimits

0x8ba4,	// (0x00055775) sp_fs_scroll_pane_cp07

0x8bc0,	// (0x00055791) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8bc0,	// (0x00055791) bg_sp_fs_schedule_viewer_highlight

0xe9e3,	// (0x0005b5b4) list_single_sp_fs_schedule_track_pane_cp01

0xe9eb,	// (0x0005b5bc) list_sp_fs_schedule_track_pane

0xe9f3,	// (0x0005b5c4) sp_fs_scroll_pane_cp06_ParamLimits

0xe9f3,	// (0x0005b5c4) sp_fs_scroll_pane_cp06

0xcc63,	// (0x00059834) bgmain_sp_fs_calendar_pane_g1

0x0e83,	// (0x0004da54) list_single_cale_mrui_pane_ParamLimits

0x0e83,	// (0x0004da54) list_single_cale_mrui_pane

0xa35d,	// (0x00056f2e) list_single_cale_mrui_row_pane_ParamLimits

0xa35d,	// (0x00056f2e) list_single_cale_mrui_row_pane

0xa36a,	// (0x00056f3b) list_single_cale_mrui_row_pane_g1_ParamLimits

0xa36a,	// (0x00056f3b) list_single_cale_mrui_row_pane_g1

0xa3a2,	// (0x00056f73) list_single_cale_mrui_row_pane_t1_ParamLimits

0xa3a2,	// (0x00056f73) list_single_cale_mrui_row_pane_t1

0x0ea4,	// (0x0004da75) list_single_cale_mrui_row_pane_t2_ParamLimits

0x0ea4,	// (0x0004da75) list_single_cale_mrui_row_pane_t2

0xa3b4,	// (0x00056f85) list_single_cale_mrui_row_pane_t3_ParamLimits

0xa3b4,	// (0x00056f85) list_single_cale_mrui_row_pane_t3

0xa3e3,	// (0x00056fb4) list_single_cale_mrui_row_pane_t4_ParamLimits

0xa3e3,	// (0x00056fb4) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdeb,	// (0x0005c9bc) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdeb,	// (0x0005c9bc) list_single_cale_mrui_row_pane_t

0x0f0c,	// (0x0004dadd) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x0f0c,	// (0x0004dadd) list_single_cmail_header_editor_pane_bg_cp01

0x0f32,	// (0x0004db03) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x0f32,	// (0x0004db03) list_single_cmail_header_editor_pane_bg_cp02

0x8bd0,	// (0x000557a1) main_radioblah_text_pane_t1_ParamLimits

0x8bd0,	// (0x000557a1) main_radioblah_text_pane_t1

0xea12,	// (0x0005b5e3) cam6_indi_pane_cp01

0xea1a,	// (0x0005b5eb) cam6_mode_pane_cp01

0xea22,	// (0x0005b5f3) cam6_pano_pane

0xea2b,	// (0x0005b5fc) cam6_zoom_pane_cp01

0xea33,	// (0x0005b604) cam6_pano_image_pane

0xea3e,	// (0x0005b60f) cam6_pano_pane_g1

0xe33d,	// (0x0005af0e) cam6_pano_pane_g2

0xea47,	// (0x0005b618) cam6_pano_pane_g3

0xea50,	// (0x0005b621) cam6_pano_pane_g4

0xd25b,	// (0x00059e2c) cam6_pano_pane_g5

0xea59,	// (0x0005b62a) cam6_pano_pane_g6

0xea63,	// (0x0005b634) cam6_pano_pane_g7

0xea6b,	// (0x0005b63c) cam6_pano_pane_g8

0xea74,	// (0x0005b645) cam6_pano_pane_g9

0x0008,

0xfdf4,	// (0x0005c9c5) cam6_pano_pane_g

0x977d,	// (0x0005634e) main_browser_tag_pane

0xe8d3,	// (0x0005b4a4) grid_navstr_albumart_pane

0xea7f,	// (0x0005b650) cell_navstr_albumart_pane_ParamLimits

0xea7f,	// (0x0005b650) cell_navstr_albumart_pane

0xea9f,	// (0x0005b670) cell_navstr_albumart_pane_g1

0xc66c,	// (0x0005923d) cell_navstr_albumart_pane_g2

0xc67c,	// (0x0005924d) cell_navstr_albumart_pane_g3

0xc674,	// (0x00059245) cell_navstr_albumart_pane_g4

0x0003,

0x0042,	// (0x0004cc13) cell_navstr_albumart_pane_g

0x8bea,	// (0x000557bb) bt_list_pane_ParamLimits

0x8bea,	// (0x000557bb) bt_list_pane

0x8bfe,	// (0x000557cf) bt_list_pane_t1

0x8c0d,	// (0x000557de) bt_list_pane_t2

0x0001,

0xfe07,	// (0x0005c9d8) bt_list_pane_t

0x977d,	// (0x0005634e) main_cale_prevew_pane

0x8c1c,	// (0x000557ed) popup_cale_preview_window_ParamLimits

0x8c1c,	// (0x000557ed) popup_cale_preview_window

0xa4c6,	// (0x00057097) bg_popup_preview_window_pane_cp05_ParamLimits

0xa4c6,	// (0x00057097) bg_popup_preview_window_pane_cp05

0xeaa7,	// (0x0005b678) list_cale_preview_pane_ParamLimits

0xeaa7,	// (0x0005b678) list_cale_preview_pane

0x8c37,	// (0x00055808) list_double_cale_preview_pane_ParamLimits

0x8c37,	// (0x00055808) list_double_cale_preview_pane

0x8c49,	// (0x0005581a) list_single_cale_preview_pane_ParamLimits

0x8c49,	// (0x0005581a) list_single_cale_preview_pane

0x8c5f,	// (0x00055830) list_single_cale_preview_pane_g1

0x8c67,	// (0x00055838) list_single_cale_preview_pane_t1_ParamLimits

0x8c67,	// (0x00055838) list_single_cale_preview_pane_t1

0x8c7c,	// (0x0005584d) list_double_cale_preview_pane_g1

0x8c84,	// (0x00055855) list_double_cale_preview_pane_t1_ParamLimits

0x8c84,	// (0x00055855) list_double_cale_preview_pane_t1

0x8c99,	// (0x0005586a) list_double_cale_preview_pane_t2_ParamLimits

0x8c99,	// (0x0005586a) list_double_cale_preview_pane_t2

0x0001,

0xfe0c,	// (0x0005c9dd) list_double_cale_preview_pane_t_ParamLimits

0xfe0c,	// (0x0005c9dd) list_double_cale_preview_pane_t

0x977d,	// (0x0005634e) main_ezdial_pane

0xa4c6,	// (0x00057097) main_sp_fs_email_pane_ParamLimits

0x86fc,	// (0x000552cd) cmail_ddmenu_btn01_pane_ParamLimits

0x86fc,	// (0x000552cd) cmail_ddmenu_btn01_pane

0x870f,	// (0x000552e0) cmail_ddmenu_btn02_pane_ParamLimits

0x870f,	// (0x000552e0) cmail_ddmenu_btn02_pane

0x8732,	// (0x00055303) cmail_ddmenu_btn03_pane_ParamLimits

0x8732,	// (0x00055303) cmail_ddmenu_btn03_pane

0x8758,	// (0x00055329) main_sp_fs_ctrlbar_pane_ParamLimits

0x877c,	// (0x0005534d) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xd731,	// (0x0005a302) list_cmail_body_pane_ParamLimits

0xe853,	// (0x0005b424) bg_button_pane_cp12

0xe85c,	// (0x0005b42d) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe85c,	// (0x0005b42d) list_single_cmail_header_detail_pane_g3

0xa2bb,	// (0x00056e8c) list_single_cmail_header_detail_pane_t2_ParamLimits

0xa2bb,	// (0x00056e8c) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda6,	// (0x0005c977) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda6,	// (0x0005c977) list_single_cmail_header_detail_pane_t

0xa2fc,	// (0x00056ecd) phacti_term_pane_t2_ParamLimits

0xa2fc,	// (0x00056ecd) phacti_term_pane_t2

0x0001,

0xfdb0,	// (0x0005c981) phacti_term_pane_t_ParamLimits

0xfdb0,	// (0x0005c981) phacti_term_pane_t

0xeab3,	// (0x0005b684) aid_size_list_single_double

0x8cb1,	// (0x00055882) popup_ezdial_listscroll_window

0x8ccd,	// (0x0005589e) popup_number_entry_window_cp01

0xb463,	// (0x00058034) bg_popup_call_pane_cp09

0xeabf,	// (0x0005b690) ezdial_list_pane

0xeac7,	// (0x0005b698) scroll_pane_cp23

0xc85b,	// (0x0005942c) bg_button_pane_cp028_ParamLimits

0xc85b,	// (0x0005942c) bg_button_pane_cp028

0x8cdb,	// (0x000558ac) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8cdb,	// (0x000558ac) cmail_ddmenu_btn01_pane_g1

0x8ce7,	// (0x000558b8) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8ce7,	// (0x000558b8) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe11,	// (0x0005c9e2) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe11,	// (0x0005c9e2) cmail_ddmenu_btn01_pane_g

0xeacf,	// (0x0005b6a0) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeacf,	// (0x0005b6a0) cmail_ddmenu_btn01_pane_t1

0xc85b,	// (0x0005942c) bg_button_pane_cp029_ParamLimits

0xc85b,	// (0x0005942c) bg_button_pane_cp029

0x8cfb,	// (0x000558cc) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8cfb,	// (0x000558cc) cmail_ddmenu_btn02_pane_g1

0x8d13,	// (0x000558e4) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8d13,	// (0x000558e4) cmail_ddmenu_btn02_pane_t1

0xa4c6,	// (0x00057097) bg_button_pane_cp031_ParamLimits

0xa4c6,	// (0x00057097) bg_button_pane_cp031

0x8cfb,	// (0x000558cc) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8cfb,	// (0x000558cc) cmail_ddmenu_btn03_pane_g1

0x8d13,	// (0x000558e4) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8d13,	// (0x000558e4) cmail_ddmenu_btn03_pane_t1

0x6297,	// (0x00052e68) cell_dialer2_keypad_pane_t1_ParamLimits

0x62b1,	// (0x00052e82) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x62b1,	// (0x00052e82) cell_dialer2_keypad_pane_t1_copy1

0x7fcd,	// (0x00054b9e) ncimui_group_button_pane

0xa4c6,	// (0x00057097) main_sp_fs_calendar_pane_ParamLimits

0x89c7,	// (0x00055598) list_single_cmail_header_caption_pane_ParamLimits

0xa311,	// (0x00056ee2) aid_recal_txt_sm_pane

0x977d,	// (0x0005634e) mian_recal_day_pane

0xa34b,	// (0x00056f1c) popup_sp_fs_cale_preview_window_ParamLimits

0xeae5,	// (0x0005b6b6) list_recal_day_pane

0xa42d,	// (0x00056ffe) list_single_recal_day_pane_ParamLimits

0xa42d,	// (0x00056ffe) list_single_recal_day_pane

0xeb0c,	// (0x0005b6dd) list_single_recal_day_pane_g1_ParamLimits

0xeb0c,	// (0x0005b6dd) list_single_recal_day_pane_g1

0xa43f,	// (0x00057010) list_single_recal_day_pane_g2_ParamLimits

0xa43f,	// (0x00057010) list_single_recal_day_pane_g2

0xa44f,	// (0x00057020) list_single_recal_day_pane_g3_ParamLimits

0xa44f,	// (0x00057020) list_single_recal_day_pane_g3

0x0f52,	// (0x0004db23) list_single_recal_day_pane_g4_ParamLimits

0x0f52,	// (0x0004db23) list_single_recal_day_pane_g4

0xa45b,	// (0x0005702c) list_single_recal_day_pane_g5_ParamLimits

0xa45b,	// (0x0005702c) list_single_recal_day_pane_g5

0xa46b,	// (0x0005703c) list_single_recal_day_pane_g6_ParamLimits

0xa46b,	// (0x0005703c) list_single_recal_day_pane_g6

0x0004,

0xfe20,	// (0x0005c9f1) list_single_recal_day_pane_g_ParamLimits

0xfe20,	// (0x0005c9f1) list_single_recal_day_pane_g

0xa47f,	// (0x00057050) list_single_recal_day_pane_t1

0xa491,	// (0x00057062) list_single_recal_day_pane_t2

0x0001,

0xfe2b,	// (0x0005c9fc) list_single_recal_day_pane_t

0x8d37,	// (0x00055908) ncimui_query_button_pane_ParamLimits

0x8d37,	// (0x00055908) ncimui_query_button_pane

0x8d47,	// (0x00055918) ncimui_query_button_pane_t1_ParamLimits

0x8d47,	// (0x00055918) ncimui_query_button_pane_t1

0xeb18,	// (0x0005b6e9) ncimui_query_button_pane_t2_ParamLimits

0xeb18,	// (0x0005b6e9) ncimui_query_button_pane_t2

0x0001,

0xfe30,	// (0x0005ca01) ncimui_query_button_pane_t_ParamLimits

0xfe30,	// (0x0005ca01) ncimui_query_button_pane_t

0x8d5a,	// (0x0005592b) query_button_pane_ParamLimits

0x8d5a,	// (0x0005592b) query_button_pane

0x977d,	// (0x0005634e) bg_button_pane_cp0028

0xeb2b,	// (0x0005b6fc) query_button_pane_t1

0x4333,	// (0x00050f04) main_tport_pane_ParamLimits

0x888b,	// (0x0005545c) bg_popup_window_pane_cp01_ParamLimits

0x888b,	// (0x0005545c) bg_popup_window_pane_cp01

0x88a6,	// (0x00055477) heading_pane_cp08_ParamLimits

0x88a6,	// (0x00055477) heading_pane_cp08

0x88b9,	// (0x0005548a) heading_pane_cp07_ParamLimits

0x88b9,	// (0x0005548a) heading_pane_cp07

0x8960,	// (0x00055531) cell_tport_appsw_pane_g2

0x0002,

0xfd93,	// (0x0005c964) cell_tport_appsw_pane_g

0x3954,	// (0x00050525) input_candi_list_open_g1

0xadfd,	// (0x000579ce) list_cale_time_pane_g6_ParamLimits

0xadfd,	// (0x000579ce) list_cale_time_pane_g6

0x50fc,	// (0x00051ccd) aid_size_touch_calib_1_ParamLimits

0x50fc,	// (0x00051ccd) aid_size_touch_calib_1

0x510e,	// (0x00051cdf) aid_size_touch_calib_2_ParamLimits

0x510e,	// (0x00051cdf) aid_size_touch_calib_2

0x5126,	// (0x00051cf7) aid_size_touch_calib_3_ParamLimits

0x5126,	// (0x00051cf7) aid_size_touch_calib_3

0x5144,	// (0x00051d15) aid_size_touch_calib_4_ParamLimits

0x5144,	// (0x00051d15) aid_size_touch_calib_4

0x515c,	// (0x00051d2d) main_touch_calib_button_group_pane_ParamLimits

0x515c,	// (0x00051d2d) main_touch_calib_button_group_pane

0x5174,	// (0x00051d45) main_touch_calib_pane_g1_ParamLimits

0x5186,	// (0x00051d57) main_touch_calib_pane_g2_ParamLimits

0x5198,	// (0x00051d69) main_touch_calib_pane_g3_ParamLimits

0x51aa,	// (0x00051d7b) main_touch_calib_pane_g4_ParamLimits

0xf751,	// (0x0005c322) main_touch_calib_pane_g_ParamLimits

0x51bc,	// (0x00051d8d) main_touch_calib_pane_t1_ParamLimits

0x51d6,	// (0x00051da7) main_touch_calib_pane_t2_ParamLimits

0x51f0,	// (0x00051dc1) main_touch_calib_pane_t3_ParamLimits

0x5204,	// (0x00051dd5) main_touch_calib_pane_t4_ParamLimits

0x5218,	// (0x00051de9) main_touch_calib_pane_t5_ParamLimits

0xf75a,	// (0x0005c32b) main_touch_calib_pane_t_ParamLimits

0xcffb,	// (0x00059bcc) list_single_fp_cale_pane_g3_ParamLimits

0xcffb,	// (0x00059bcc) list_single_fp_cale_pane_g3

0xa4c6,	// (0x00057097) bg_button_pane_cp012_ParamLimits

0xa4c6,	// (0x00057097) bg_vkb2_func_pane_cp03_ParamLimits

0x7235,	// (0x00053e06) cell_vitu2_function_top_pane_g1_ParamLimits

0xa4c6,	// (0x00057097) bg_vkb2_func_pane_cp04_ParamLimits

0x7f5b,	// (0x00054b2c) main_ncimui_button_group_pane_ParamLimits

0x7f5b,	// (0x00054b2c) main_ncimui_button_group_pane

0x7fbb,	// (0x00054b8c) main_ncimui_pane_t3_ParamLimits

0x7fbb,	// (0x00054b8c) main_ncimui_pane_t3

0xe8e9,	// (0x0005b4ba) phacti_button_group_pane

0xeab3,	// (0x0005b684) aid_size_list_single_double_ParamLimits

0x8cb1,	// (0x00055882) popup_ezdial_listscroll_window_ParamLimits

0x8ccd,	// (0x0005589e) popup_number_entry_window_cp01_ParamLimits

0x8d6d,	// (0x0005593e) phacti_button_pane_ParamLimits

0x8d6d,	// (0x0005593e) phacti_button_pane

0x977d,	// (0x0005634e) bg_button_pane_cp14

0xeb39,	// (0x0005b70a) phacti_button_pane_t1

0x8d7e,	// (0x0005594f) main_touch_calib_button_pane_ParamLimits

0x8d7e,	// (0x0005594f) main_touch_calib_button_pane

0xa823,	// (0x000573f4) bg_button_pane_cp18_ParamLimits

0xa823,	// (0x000573f4) bg_button_pane_cp18

0xeb47,	// (0x0005b718) main_touch_calib_button_pane_t1_ParamLimits

0xeb47,	// (0x0005b718) main_touch_calib_button_pane_t1

0xeb5d,	// (0x0005b72e) main_touch_calib_button_pane_t2_ParamLimits

0xeb5d,	// (0x0005b72e) main_touch_calib_button_pane_t2

0x0001,

0x0079,	// (0x0004cc4a) main_touch_calib_button_pane_t_ParamLimits

0x0079,	// (0x0004cc4a) main_touch_calib_button_pane_t

0x977d,	// (0x0005634e) cell_ncimui_button_pane

0x977d,	// (0x0005634e) bg_button_pane_cp032

0xeb7b,	// (0x0005b74c) cell_ncimui_button_pane_t1

0xa0b0,	// (0x00056c81) image3_infobar_pane_ParamLimits

0xa0b0,	// (0x00056c81) image3_infobar_pane

0x8389,	// (0x00054f5a) fs_bigclock_status_pane_ParamLimits

0x8389,	// (0x00054f5a) fs_bigclock_status_pane

0x8396,	// (0x00054f67) main_fs_bigclock_clock_pane_ParamLimits

0x8396,	// (0x00054f67) main_fs_bigclock_clock_pane

0x83b6,	// (0x00054f87) main_fs_bigclock_indi_pane_ParamLimits

0x83b6,	// (0x00054f87) main_fs_bigclock_indi_pane

0x83e0,	// (0x00054fb1) main_fs_bigclock_swipe_pane_ParamLimits

0x83e0,	// (0x00054fb1) main_fs_bigclock_swipe_pane

0x977d,	// (0x0005634e) main_fs_clock_dumped_data

0xe44a,	// (0x0005b01b) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe44a,	// (0x0005b01b) list_single_fs_bigclock_indicator_pane_g1

0xe465,	// (0x0005b036) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe465,	// (0x0005b036) list_single_fs_bigclock_indicator_pane_g2

0xe47f,	// (0x0005b050) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe47f,	// (0x0005b050) list_single_fs_bigclock_indicator_pane_g3

0xe499,	// (0x0005b06a) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe499,	// (0x0005b06a) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc74,	// (0x0005c845) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc74,	// (0x0005c845) list_single_fs_bigclock_indicator_pane_g

0xe4c4,	// (0x0005b095) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe4c4,	// (0x0005b095) list_single_fs_bigclock_indicator_pane_t1

0xe4ec,	// (0x0005b0bd) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe4ec,	// (0x0005b0bd) list_single_fs_bigclock_indicator_pane_t2

0xe514,	// (0x0005b0e5) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe514,	// (0x0005b0e5) list_single_fs_bigclock_indicator_pane_t3

0xe53c,	// (0x0005b10d) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe53c,	// (0x0005b10d) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7f,	// (0x0005c850) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7f,	// (0x0005c850) list_single_fs_bigclock_indicator_pane_t

0xeb89,	// (0x0005b75a) image3_infobar_fav_pane_ParamLimits

0xeb89,	// (0x0005b75a) image3_infobar_fav_pane

0xeb99,	// (0x0005b76a) image3_infobar_loc_pane_ParamLimits

0xeb99,	// (0x0005b76a) image3_infobar_loc_pane

0xebad,	// (0x0005b77e) image3_infobar_time_pane_ParamLimits

0xebad,	// (0x0005b77e) image3_infobar_time_pane

0xcc63,	// (0x00059834) image3_infobar_time_pane_g1

0xebbd,	// (0x0005b78e) image3_infobar_time_pane_t1

0xcc63,	// (0x00059834) image3_infobar_loc_pane_g1

0xebcb,	// (0x0005b79c) image3_infobar_loc_pane_g2

0x0001,

0xfe35,	// (0x0005ca06) image3_infobar_loc_pane_g

0xebd3,	// (0x0005b7a4) image3_infobar_loc_pane_t1

0xcc63,	// (0x00059834) image3_infobar_fav_pane_g1

0xebe1,	// (0x0005b7b2) image3_infobar_fav_pane_g2

0x0001,

0xfe3a,	// (0x0005ca0b) image3_infobar_fav_pane_g

0xebe9,	// (0x0005b7ba) fs_bigclock_status_battery_pane

0xebf2,	// (0x0005b7c3) fs_bigclock_status_signal_pane

0xebfb,	// (0x0005b7cc) fs_bigclock_status_title_pane

0xec04,	// (0x0005b7d5) fs_bigclock_status_signal_pane_g1

0xec0d,	// (0x0005b7de) fs_bigclock_status_signal_pane_g2

0x0001,

0x0088,	// (0x0004cc59) fs_bigclock_status_signal_pane_g

0xec15,	// (0x0005b7e6) fs_bigclock_status_battery_pane_g1

0xec1e,	// (0x0005b7ef) fs_bigclock_status_battery_pane_g2

0x0001,

0x008d,	// (0x0004cc5e) fs_bigclock_status_battery_pane_g

0xec26,	// (0x0005b7f7) fs_bigclock_status_title_pane_t1

0xcc63,	// (0x00059834) main_fs_bigclock_clock_pane_g1

0xec34,	// (0x0005b805) main_fs_bigclock_clock_pane_g2

0xec3d,	// (0x0005b80e) main_fs_bigclock_clock_pane_g3

0xec3d,	// (0x0005b80e) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe3f,	// (0x0005ca10) main_fs_bigclock_clock_pane_g

0xec45,	// (0x0005b816) main_fs_bigclock_clock_pane_t1

0x8d93,	// (0x00055964) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe48,	// (0x0005ca19) main_fs_bigclock_clock_pane_t

0xec53,	// (0x0005b824) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec53,	// (0x0005b824) list_single_fs_bigclock_indicator_pane

0xec64,	// (0x0005b835) list_single_fs_bigclock_pane_ParamLimits

0xec64,	// (0x0005b835) list_single_fs_bigclock_pane

0xec8a,	// (0x0005b85b) main_fs_bigclock_indicator_pane_t1

0xec99,	// (0x0005b86a) list_single_fs_bigclock_pane_g1

0xeca1,	// (0x0005b872) list_single_fs_bigclock_pane_t1

0xcc63,	// (0x00059834) main_fs_bigclock_swipe_pane_g1

0xece4,	// (0x0005b8b5) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe54,	// (0x0005ca25) main_fs_bigclock_swipe_pane_g

0xecec,	// (0x0005b8bd) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xecec,	// (0x0005b8bd) main_fs_bigclock_swipe_pane_t1

0x327c,	// (0x0004fe4d) call_type_pane_ParamLimits

0x977d,	// (0x0005634e) main_btmg_pane

0xa396,	// (0x00056f67) list_single_cale_mrui_row_pane_g2_ParamLimits

0xa396,	// (0x00056f67) list_single_cale_mrui_row_pane_g2

0x0002,

0xfde4,	// (0x0005c9b5) list_single_cale_mrui_row_pane_g_ParamLimits

0xfde4,	// (0x0005c9b5) list_single_cale_mrui_row_pane_g

0xa41c,	// (0x00056fed) list_recal_vselct_arw_lo_pane

0xeb04,	// (0x0005b6d5) list_recal_vselct_arw_up_pane

0xa424,	// (0x00056ff5) list_recal_vselct_pane

0x8de6,	// (0x000559b7) btmg_button_pane

0x8df0,	// (0x000559c1) main_btmg_pane_g1

0x977d,	// (0x0005634e) bg_button_pane_cp044

0xed09,	// (0x0005b8da) btmg_button_pane_t1

0xc847,	// (0x00059418) aid_listscroll_gen

0xa4c6,	// (0x00057097) main_cntbar_detail_pane

0xe835,	// (0x0005b406) list_cmail_folder_pane

0xccfa,	// (0x000598cb) sp_fs_scroll_pane_cp03_ParamLimits

0x0f72,	// (0x0004db43) list_single_fs_dyc_pane_cp01_ParamLimits

0x0f72,	// (0x0004db43) list_single_fs_dyc_pane_cp01

0xed17,	// (0x0005b8e8) aid_size_cmail_indent

0xa4a3,	// (0x00057074) list_single_dyc_row_pane_cp01

0x8e2c,	// (0x000559fd) cntbar_detail_list_pane_ParamLimits

0x8e2c,	// (0x000559fd) cntbar_detail_list_pane

0x8e78,	// (0x00055a49) main_cntbar_detail_cont_pane_ParamLimits

0x8e78,	// (0x00055a49) main_cntbar_detail_cont_pane

0xccfa,	// (0x000598cb) scroll_pane_cp032_ParamLimits

0xccfa,	// (0x000598cb) scroll_pane_cp032

0x8e8c,	// (0x00055a5d) cntbar_detail_list_event_pane_ParamLimits

0x8e8c,	// (0x00055a5d) cntbar_detail_list_event_pane

0x8e3c,	// (0x00055a0d) cntbar_detail_list_shct_pane

0xac88,	// (0x00057859) aid_list_gen

0xed20,	// (0x0005b8f1) aid_scroll

0xed29,	// (0x0005b8fa) aid_size_touch_scroll_bar

0x782d,	// (0x000543fe) aid_list_double

0x781b,	// (0x000543ec) aid_list_single

0x781b,	// (0x000543ec) aid_list_single_lg

0x0f89,	// (0x0004db5a) aid_list_z_g_a_sm

0x0f91,	// (0x0004db62) aid_list_z_g_d

0x0f99,	// (0x0004db6a) aid_txt_z_prm

0x0fa7,	// (0x0004db78) aid_txt_z_prm_cp01

0x0fb5,	// (0x0004db86) aid_txt_z_sec

0x8e9c,	// (0x00055a6d) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8e9c,	// (0x00055a6d) main_cntbar_detail_cont_pane_g1

0x8eb0,	// (0x00055a81) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8eb0,	// (0x00055a81) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe59,	// (0x0005ca2a) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe59,	// (0x0005ca2a) main_cntbar_detail_cont_pane_g

0xed32,	// (0x0005b903) main_cntbar_detail_cont_pane_t1

0xed40,	// (0x0005b911) main_cntbar_detail_cont_pane_t2

0xed4e,	// (0x0005b91f) main_cntbar_detail_cont_pane_t3

0x0002,

0x00b6,	// (0x0004cc87) main_cntbar_detail_cont_pane_t

0x8ec0,	// (0x00055a91) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8ec0,	// (0x00055a91) cell_cntbar_detail_list_shct_pane

0xed5c,	// (0x0005b92d) cntbar_detail_list_shct_pane_g1

0xed65,	// (0x0005b936) cntbar_detail_list_shct_pane_g2

0x0001,

0x00bd,	// (0x0004cc8e) cntbar_detail_list_shct_pane_g

0x8ed4,	// (0x00055aa5) cntbar_detail_list_event_pane_g1_ParamLimits

0x8ed4,	// (0x00055aa5) cntbar_detail_list_event_pane_g1

0x8ee0,	// (0x00055ab1) cntbar_detail_list_event_pane_g2_ParamLimits

0x8ee0,	// (0x00055ab1) cntbar_detail_list_event_pane_g2

0x0005,

0xfe5e,	// (0x0005ca2f) cntbar_detail_list_event_pane_g_ParamLimits

0xfe5e,	// (0x0005ca2f) cntbar_detail_list_event_pane_g

0x8f4c,	// (0x00055b1d) cntbar_detail_list_event_pane_t1_ParamLimits

0x8f4c,	// (0x00055b1d) cntbar_detail_list_event_pane_t1

0x8f61,	// (0x00055b32) cntbar_detail_list_event_pane_t2_ParamLimits

0x8f61,	// (0x00055b32) cntbar_detail_list_event_pane_t2

0x0002,

0xfe6b,	// (0x0005ca3c) cntbar_detail_list_event_pane_t_ParamLimits

0xfe6b,	// (0x0005ca3c) cntbar_detail_list_event_pane_t

0xcc63,	// (0x00059834) cell_cntbar_detail_list_shct_pane_g1

0xb41b,	// (0x00057fec) navi_pane_mv_g3

0xa4c6,	// (0x00057097) main_cntbar_detail_pane_ParamLimits

0x977d,	// (0x0005634e) main_notif_wgt_pane

0x9ec6,	// (0x00056a97) aid_tch_main_mp4_pane_g4

0xa0a8,	// (0x00056c79) popup_slider_window_cp02

0xa412,	// (0x00056fe3) list_recal_day_event_pane

0x8dfa,	// (0x000559cb) cntbar_detail_btn_pane_ParamLimits

0x8dfa,	// (0x000559cb) cntbar_detail_btn_pane

0x8e13,	// (0x000559e4) cntbar_detail_btn_pane_cp01_ParamLimits

0x8e13,	// (0x000559e4) cntbar_detail_btn_pane_cp01

0x8e3c,	// (0x00055a0d) cntbar_detail_list_shct_pane_ParamLimits

0x8e4c,	// (0x00055a1d) cntbar_detail_pane_g1_ParamLimits

0x8e4c,	// (0x00055a1d) cntbar_detail_pane_g1

0x8e5c,	// (0x00055a2d) cntbar_detail_pane_t1_ParamLimits

0x8e5c,	// (0x00055a2d) cntbar_detail_pane_t1

0x8eec,	// (0x00055abd) cntbar_detail_list_event_pane_g3_ParamLimits

0x8eec,	// (0x00055abd) cntbar_detail_list_event_pane_g3

0x8f04,	// (0x00055ad5) cntbar_detail_list_event_pane_g4_ParamLimits

0x8f04,	// (0x00055ad5) cntbar_detail_list_event_pane_g4

0x8f1c,	// (0x00055aed) cntbar_detail_list_event_pane_g5_ParamLimits

0x8f1c,	// (0x00055aed) cntbar_detail_list_event_pane_g5

0x8f34,	// (0x00055b05) cntbar_detail_list_event_pane_g6_ParamLimits

0x8f34,	// (0x00055b05) cntbar_detail_list_event_pane_g6

0x8f76,	// (0x00055b47) cntbar_detail_list_event_pane_t3_ParamLimits

0x8f76,	// (0x00055b47) cntbar_detail_list_event_pane_t3

0x8f88,	// (0x00055b59) popup_notif_wgt_window_ParamLimits

0x8f88,	// (0x00055b59) popup_notif_wgt_window

0x8fa1,	// (0x00055b72) popup_submenu_window_cp01_ParamLimits

0x8fa1,	// (0x00055b72) popup_submenu_window_cp01

0xb463,	// (0x00058034) bg_popup_window_pane_cp10

0xed6e,	// (0x0005b93f) listscroll_notif_wgt_pane

0xed80,	// (0x0005b951) list_notif_wgt_window

0xed89,	// (0x0005b95a) scroll_pane_cp033

0x8fb7,	// (0x00055b88) list_notif_wgt_row_pane_ParamLimits

0x8fb7,	// (0x00055b88) list_notif_wgt_row_pane

0xed92,	// (0x0005b963) aid_size_list_notif_wgt_del

0xed9f,	// (0x0005b970) list_notif_wgt_row_pane_g1

0xedab,	// (0x0005b97c) list_notif_wgt_row_pane_g2

0xedbf,	// (0x0005b990) list_notif_wgt_row_pane_g3

0x0002,

0x00d6,	// (0x0004cca7) list_notif_wgt_row_pane_g

0xedcc,	// (0x0005b99d) list_notif_wgt_row_pane_t1

0xede2,	// (0x0005b9b3) list_notif_wgt_row_pane_t2

0xedf4,	// (0x0005b9c5) list_notif_wgt_row_pane_t3

0x0002,

0x00dd,	// (0x0004ccae) list_notif_wgt_row_pane_t

0xd925,	// (0x0005a4f6) list_recal_day_event_pane_g1

0xee06,	// (0x0005b9d7) list_recal_day_event_pane_t1

0x977d,	// (0x0005634e) bg_button_pane_cp045

0x8fc7,	// (0x00055b98) cntbar_detail_btn_pane_t1

0xc85b,	// (0x0005942c) main_callh_pane_ParamLimits

0xc85b,	// (0x0005942c) main_callh_pane

0x977d,	// (0x0005634e) main_coverflow0_pane

0x977d,	// (0x0005634e) main_wgtman_pane

0x83f8,	// (0x00054fc9) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x83f8,	// (0x00054fc9) main_fs_bigclock_unlock_btn_pane

0x8958,	// (0x00055529) bg_button_pane_cp16

0x8968,	// (0x00055539) cell_tport_appsw_pane_g3

0x8fd5,	// (0x00055ba6) cf0_flow_pane_ParamLimits

0x8fd5,	// (0x00055ba6) cf0_flow_pane

0xee15,	// (0x0005b9e6) listscroll_cf0_pane

0xee20,	// (0x0005b9f1) main_cf0_pane_g1

0x8fea,	// (0x00055bbb) main_cf0_pane_t1_ParamLimits

0x8fea,	// (0x00055bbb) main_cf0_pane_t1

0x9001,	// (0x00055bd2) main_cf0_pane_t2_ParamLimits

0x9001,	// (0x00055bd2) main_cf0_pane_t2

0x0001,

0xfe72,	// (0x0005ca43) main_cf0_pane_t_ParamLimits

0xfe72,	// (0x0005ca43) main_cf0_pane_t

0xee32,	// (0x0005ba03) scroll_pane_cp11

0x9018,	// (0x00055be9) cf0_flow_pane_g1

0x9020,	// (0x00055bf1) cf0_flow_pane_g2

0x0001,

0xfe77,	// (0x0005ca48) cf0_flow_pane_g

0x9028,	// (0x00055bf9) cf0_flow_pane_t1

0x977d,	// (0x0005634e) main_call6_pane

0x977d,	// (0x0005634e) main_calllock_pane

0x9036,	// (0x00055c07) call6_btn_grp_pane_ParamLimits

0x9036,	// (0x00055c07) call6_btn_grp_pane

0x9050,	// (0x00055c21) call6_pane_g1_ParamLimits

0x9050,	// (0x00055c21) call6_pane_g1

0x9065,	// (0x00055c36) popup_call6_1st_window_ParamLimits

0x9065,	// (0x00055c36) popup_call6_1st_window

0x9076,	// (0x00055c47) popup_call6_2nd_window_ParamLimits

0x9076,	// (0x00055c47) popup_call6_2nd_window

0x9087,	// (0x00055c58) cell_call6_btn_pane_ParamLimits

0x9087,	// (0x00055c58) cell_call6_btn_pane

0xb463,	// (0x00058034) bg_popup_call2_in_pane_cp03

0xee3d,	// (0x0005ba0e) popup_call6_1st_window_g1

0xee45,	// (0x0005ba16) popup_call6_1st_window_g2

0xee4d,	// (0x0005ba1e) popup_call6_1st_window_g3

0x0002,

0x00f3,	// (0x0004ccc4) popup_call6_1st_window_g

0xee55,	// (0x0005ba26) popup_call6_1st_window_t1

0xee64,	// (0x0005ba35) popup_call6_1st_window_t2

0xee74,	// (0x0005ba45) popup_call6_1st_window_t3

0x0002,

0x00fa,	// (0x0004cccb) popup_call6_1st_window_t

0xb463,	// (0x00058034) bg_popup_call2_in_pane_cp04

0xee3d,	// (0x0005ba0e) popup_call6_2nd_window_g1

0xee45,	// (0x0005ba16) popup_call6_2nd_window_g2

0xee4d,	// (0x0005ba1e) popup_call6_2nd_window_g3

0x0002,

0x00f3,	// (0x0004ccc4) popup_call6_2nd_window_g

0xee55,	// (0x0005ba26) popup_call6_2nd_window_t1

0x977d,	// (0x0005634e) bg_button_pane_cp15

0xee84,	// (0x0005ba55) cell_call6_btn_pane_g1

0xee8d,	// (0x0005ba5e) cell_call6_btn_pane_t1

0x909b,	// (0x00055c6c) listscroll_wgtman_pane_ParamLimits

0x909b,	// (0x00055c6c) listscroll_wgtman_pane

0x90bc,	// (0x00055c8d) wgtman_btn_pane_ParamLimits

0x90bc,	// (0x00055c8d) wgtman_btn_pane

0xb222,	// (0x00057df3) aid_scroll_copy1

0xee9c,	// (0x0005ba6d) list_wgtman_pane

0x90ff,	// (0x00055cd0) wgtman_btn_pane_g1_ParamLimits

0x90ff,	// (0x00055cd0) wgtman_btn_pane_g1

0x912b,	// (0x00055cfc) wgtman_btn_pane_t1_ParamLimits

0x912b,	// (0x00055cfc) wgtman_btn_pane_t1

0xeea6,	// (0x0005ba77) wgtman_btn_pane_t2_ParamLimits

0xeea6,	// (0x0005ba77) wgtman_btn_pane_t2

0x0001,

0xfe7c,	// (0x0005ca4d) wgtman_btn_pane_t_ParamLimits

0xfe7c,	// (0x0005ca4d) wgtman_btn_pane_t

0x9168,	// (0x00055d39) listrow_wgtman_pane_ParamLimits

0x9168,	// (0x00055d39) listrow_wgtman_pane

0x917a,	// (0x00055d4b) listrow_wgtman_pane_g1

0x9187,	// (0x00055d58) listrow_wgtman_pane_g2

0x0001,

0xfe81,	// (0x0005ca52) listrow_wgtman_pane_g

0x0fc3,	// (0x0004db94) listrow_wgtman_pane_t1

0x0fdb,	// (0x0004dbac) listrow_wgtman_pane_t2

0x0001,

0xfe86,	// (0x0005ca57) listrow_wgtman_pane_t

0x1001,	// (0x0004dbd2) wait_bar_pane_cp09

0xeebd,	// (0x0005ba8e) main_calllock_btn_pane

0xeec7,	// (0x0005ba98) main_calllock_pane_g1

0x977d,	// (0x0005634e) bg_button_pane_cp17

0xeed3,	// (0x0005baa4) main_calllock_btn_pane_g1

0xeedc,	// (0x0005baad) main_calllock_btn_pane_t1

0x977d,	// (0x0005634e) main_dialer3_pane

0x977d,	// (0x0005634e) main_fmrd2_pane

0xcc63,	// (0x00059834) main_fs_bigclock_unlock_btn_pane_g1

0xeef3,	// (0x0005bac4) main_fs_bigclock_unlock_btn_pane_t1

0x91a5,	// (0x00055d76) area_fmrd2_info_pane_ParamLimits

0x91a5,	// (0x00055d76) area_fmrd2_info_pane

0x91b6,	// (0x00055d87) area_fmrd2_visual_pane_ParamLimits

0x91b6,	// (0x00055d87) area_fmrd2_visual_pane

0x91c4,	// (0x00055d95) fmrd2_indi_pane_ParamLimits

0x91c4,	// (0x00055d95) fmrd2_indi_pane

0x91d1,	// (0x00055da2) area_fmrd2_visual_pane_g1

0x91d9,	// (0x00055daa) area_fmrd2_visual_pane_t1

0x91e9,	// (0x00055dba) area_fmrd2_visual_pane_t2

0x91f9,	// (0x00055dca) area_fmrd2_visual_pane_t3

0x0002,

0xfe90,	// (0x0005ca61) area_fmrd2_visual_pane_t

0x9209,	// (0x00055dda) area_fmrd2_info_pane_g1

0x9211,	// (0x00055de2) area_fmrd2_info_pane_t1

0x9221,	// (0x00055df2) area_fmrd2_info_pane_t2

0x9231,	// (0x00055e02) area_fmrd2_info_pane_t3

0x9241,	// (0x00055e12) area_fmrd2_info_pane_t4

0x0003,

0xfe97,	// (0x0005ca68) area_fmrd2_info_pane_t

0x924f,	// (0x00055e20) fmrd2_indi_pane_t1

0x925f,	// (0x00055e30) fmrd2_indi_pane_t2

0x926f,	// (0x00055e40) fmrd2_indi_pane_t3

0x0002,

0xfea0,	// (0x0005ca71) fmrd2_indi_pane_t

0xe4a8,	// (0x0005b079) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe4a8,	// (0x0005b079) list_single_fs_bigclock_indicator_pane_g5

0xe558,	// (0x0005b129) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe558,	// (0x0005b129) list_single_fs_bigclock_indicator_pane_t5

0x8ad4,	// (0x000556a5) aid_cell_bcale_month_pane_ParamLimits

0x8ad4,	// (0x000556a5) aid_cell_bcale_month_pane

0x8af2,	// (0x000556c3) bcale_month_pane_ParamLimits

0x8af2,	// (0x000556c3) bcale_month_pane

0x8b16,	// (0x000556e7) bcale_preview_pane_ParamLimits

0x8b16,	// (0x000556e7) bcale_preview_pane

0xeca1,	// (0x0005b872) list_single_fs_bigclock_pane_t1_ParamLimits

0xecc0,	// (0x0005b891) list_single_fs_bigclock_pane_t2_ParamLimits

0xecc0,	// (0x0005b891) list_single_fs_bigclock_pane_t2

0x0001,

0x00a7,	// (0x0004cc78) list_single_fs_bigclock_pane_t_ParamLimits

0x00a7,	// (0x0004cc78) list_single_fs_bigclock_pane_t

0xeeeb,	// (0x0005babc) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfe8b,	// (0x0005ca5c) main_fs_bigclock_unlock_btn_pane_g

0x927f,	// (0x00055e50) aid_dia3_key_size_ParamLimits

0x927f,	// (0x00055e50) aid_dia3_key_size

0x928e,	// (0x00055e5f) aid_dia3_listrow_size_ParamLimits

0x928e,	// (0x00055e5f) aid_dia3_listrow_size

0x92a3,	// (0x00055e74) dia3_keypad_fun_pane_ParamLimits

0x92a3,	// (0x00055e74) dia3_keypad_fun_pane

0x92bf,	// (0x00055e90) dia3_keypad_num_pane_ParamLimits

0x92bf,	// (0x00055e90) dia3_keypad_num_pane

0x92da,	// (0x00055eab) dia3_listscroll_pane_ParamLimits

0x92da,	// (0x00055eab) dia3_listscroll_pane

0x92ed,	// (0x00055ebe) dia3_numentry_pane_ParamLimits

0x92ed,	// (0x00055ebe) dia3_numentry_pane

0xef01,	// (0x0005bad2) dia3_list_pane

0xef0c,	// (0x0005badd) scroll_pane_cp12

0x977d,	// (0x0005634e) bg_dia3_numentry_pane

0x9301,	// (0x00055ed2) dia3_numentry_pane_t1

0x9310,	// (0x00055ee1) cell_dia3_key_num_pane

0x9318,	// (0x00055ee9) cell_dia3_key0_fun_pane_ParamLimits

0x9318,	// (0x00055ee9) cell_dia3_key0_fun_pane

0x932c,	// (0x00055efd) cell_dia3_key1_fun_pane_ParamLimits

0x932c,	// (0x00055efd) cell_dia3_key1_fun_pane

0x9344,	// (0x00055f15) dia3_listrow_pane

0xe1b7,	// (0x0005ad88) bg_dia3_numentry_pane_g1

0x977d,	// (0x0005634e) bg_button_pane_cp21

0xef17,	// (0x0005bae8) cell_dia3_key_num_pane_t1

0xef25,	// (0x0005baf6) cell_dia3_key_num_pane_t2

0xef34,	// (0x0005bb05) cell_dia3_key_num_pane_t3

0xef43,	// (0x0005bb14) cell_dia3_key_num_pane_t4

0x0003,

0x012c,	// (0x0004ccfd) cell_dia3_key_num_pane_t

0x977d,	// (0x0005634e) bg_button_pane_cp19

0x9356,	// (0x00055f27) cell_dia3_key0_fun_pane_g1

0x977d,	// (0x0005634e) bg_button_pane_cp20

0x935e,	// (0x00055f2f) cell_dia3_key1_fun_pane_g1

0x9366,	// (0x00055f37) area_left_week_number_pane

0x9372,	// (0x00055f43) area_top_day_name_pane

0x9385,	// (0x00055f56) frame_month_view_pane

0xef52,	// (0x0005bb23) grid_month_view_pane

0x9398,	// (0x00055f69) cell_top_day_name_pane_ParamLimits

0x9398,	// (0x00055f69) cell_top_day_name_pane

0x93c5,	// (0x00055f96) cell_area_left_week_number_pane_ParamLimits

0x93c5,	// (0x00055f96) cell_area_left_week_number_pane

0x93d9,	// (0x00055faa) cell_month_view_pane_ParamLimits

0x93d9,	// (0x00055faa) cell_month_view_pane

0xef60,	// (0x0005bb31) frm_month_g1

0x9406,	// (0x00055fd7) frm_month_g2

0x9419,	// (0x00055fea) frm_month_g3

0x942c,	// (0x00055ffd) frm_month_g4

0x943f,	// (0x00056010) frm_month_g5

0x9452,	// (0x00056023) frm_month_g6

0x9465,	// (0x00056036) frm_month_g7

0xef6d,	// (0x0005bb3e) frm_month_g8

0x9478,	// (0x00056049) frm_month_g9

0x9488,	// (0x00056059) frm_month_g10

0x9498,	// (0x00056069) frm_month_g11

0x94a8,	// (0x00056079) frm_month_g12

0x94ba,	// (0x0005608b) frm_month_g13

0x94cc,	// (0x0005609d) frm_month_g14

0x94e0,	// (0x000560b1) frm_month_g15

0x94f4,	// (0x000560c5) frm_month_g16

0x000f,

0xfea7,	// (0x0005ca78) frm_month_g

0xef7a,	// (0x0005bb4b) cell_top_day_name_pane_t1

0x9508,	// (0x000560d9) cell_area_left_week_number_pane_g1

0x9514,	// (0x000560e5) cell_area_left_week_number_pane_t1

0xcedb,	// (0x00059aac) cell_month_view_pane_g1

0x9527,	// (0x000560f8) cell_month_view_pane_t1

0x977d,	// (0x0005634e) main_fps_pane

0xe74d,	// (0x0005b31e) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe74d,	// (0x0005b31e) cmail_ddmenu_btn02_pane_cp1

0xe769,	// (0x0005b33a) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe769,	// (0x0005b33a) cmail_ddmenu_btn02_pane_cp2

0x8d07,	// (0x000558d8) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8d07,	// (0x000558d8) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe16,	// (0x0005c9e7) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe16,	// (0x0005c9e7) cmail_ddmenu_btn02_pane_g

0x8d25,	// (0x000558f6) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8d25,	// (0x000558f6) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe1b,	// (0x0005c9ec) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe1b,	// (0x0005c9ec) cmail_ddmenu_btn02_pane_t

0x953a,	// (0x0005610b) fps_text_pane_ParamLimits

0x953a,	// (0x0005610b) fps_text_pane

0x9551,	// (0x00056122) main_fps_pane_g1_ParamLimits

0x9551,	// (0x00056122) main_fps_pane_g1

0x956b,	// (0x0005613c) wait_bar_pane_cp010_ParamLimits

0x956b,	// (0x0005613c) wait_bar_pane_cp010

0x957c,	// (0x0005614d) fps_text_pane_t1_ParamLimits

0x957c,	// (0x0005614d) fps_text_pane_t1

0xe721,	// (0x0005b2f2) cam4_image_uncrop_pane_g1

0xe72a,	// (0x0005b2fb) cam4_image_uncrop_pane_g2

0x673d,	// (0x0005330e) cam4_image_uncrop_pane_g3

0x6746,	// (0x00053317) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x0005c4bf) cam4_image_uncrop_pane_g

0x9344,	// (0x00055f15) dia3_listrow_pane_ParamLimits

0x977d,	// (0x0005634e) main_phob2_pane

0x8929,	// (0x000554fa) cell_tport_appsw_pane_cp02_ParamLimits

0x8929,	// (0x000554fa) cell_tport_appsw_pane_cp02

0x893d,	// (0x0005550e) cell_tport_appsw_pane_cp03_ParamLimits

0x893d,	// (0x0005550e) cell_tport_appsw_pane_cp03

0x977d,	// (0x0005634e) phob2_contact_card_pane

0x977d,	// (0x0005634e) phob2_listscroll_pane

0xef8d,	// (0x0005bb5e) phob2_list_pane

0xef95,	// (0x0005bb66) scroll_pane_cp034

0x9594,	// (0x00056165) phob2_cc_data_pane_ParamLimits

0x9594,	// (0x00056165) phob2_cc_data_pane

0x95b3,	// (0x00056184) phob2_cc_listscroll_pane_ParamLimits

0x95b3,	// (0x00056184) phob2_cc_listscroll_pane

0x95d1,	// (0x000561a2) list_double_large_graphic_phob2_pane_ParamLimits

0x95d1,	// (0x000561a2) list_double_large_graphic_phob2_pane

0x95e3,	// (0x000561b4) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x95e3,	// (0x000561b4) list_double_large_graphic_phob2_pane_g1

0x1013,	// (0x0004dbe4) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x1013,	// (0x0004dbe4) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfec8,	// (0x0005ca99) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfec8,	// (0x0005ca99) list_double_large_graphic_phob2_pane_g

0x101f,	// (0x0004dbf0) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x101f,	// (0x0004dbf0) list_double_large_graphic_phob2_pane_t1

0x1034,	// (0x0004dc05) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x1034,	// (0x0004dc05) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfecd,	// (0x0005ca9e) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfecd,	// (0x0005ca9e) list_double_large_graphic_phob2_pane_t

0x977d,	// (0x0005634e) list_highlight_pane_cp024

0x95f9,	// (0x000561ca) phob2_cc_button_pane

0x9601,	// (0x000561d2) phob2_cc_data_pane_g1_ParamLimits

0x9601,	// (0x000561d2) phob2_cc_data_pane_g1

0x9616,	// (0x000561e7) phob2_cc_data_pane_g2_ParamLimits

0x9616,	// (0x000561e7) phob2_cc_data_pane_g2

0x0001,

0xfed2,	// (0x0005caa3) phob2_cc_data_pane_g_ParamLimits

0xfed2,	// (0x0005caa3) phob2_cc_data_pane_g

0x9626,	// (0x000561f7) phob2_cc_data_pane_t1_ParamLimits

0x9626,	// (0x000561f7) phob2_cc_data_pane_t1

0x963e,	// (0x0005620f) phob2_cc_data_pane_t2_ParamLimits

0x963e,	// (0x0005620f) phob2_cc_data_pane_t2

0x9656,	// (0x00056227) phob2_cc_data_pane_t3_ParamLimits

0x9656,	// (0x00056227) phob2_cc_data_pane_t3

0x0002,

0xfed7,	// (0x0005caa8) phob2_cc_data_pane_t_ParamLimits

0xfed7,	// (0x0005caa8) phob2_cc_data_pane_t

0xef9d,	// (0x0005bb6e) phob2_cc_list_pane_ParamLimits

0xef9d,	// (0x0005bb6e) phob2_cc_list_pane

0xda29,	// (0x0005a5fa) scroll_pane_cp035_ParamLimits

0xda29,	// (0x0005a5fa) scroll_pane_cp035

0xa4c6,	// (0x00057097) bg_button_pane_cp033

0xefa9,	// (0x0005bb7a) phob2_cc_button_pane_g1

0xefb5,	// (0x0005bb86) phob2_cc_button_pane_t1

0xefca,	// (0x0005bb9b) phob2_cc_button_pane_t2

0x0001,

0x016c,	// (0x0004cd3d) phob2_cc_button_pane_t

0x966e,	// (0x0005623f) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x966e,	// (0x0005623f) list_double_large_graphic_phob2_cc_pane

0x9680,	// (0x00056251) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9680,	// (0x00056251) list_double_large_graphic_phob2_cc_pane_g1

0x1046,	// (0x0004dc17) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x1046,	// (0x0004dc17) list_double_large_graphic_phob2_cc_pane_g2

0x1052,	// (0x0004dc23) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x1052,	// (0x0004dc23) list_double_large_graphic_phob2_cc_pane_g3

0x105e,	// (0x0004dc2f) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x105e,	// (0x0004dc2f) list_double_large_graphic_phob2_cc_pane_g4

0xa4ac,	// (0x0005707d) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xa4ac,	// (0x0005707d) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfede,	// (0x0005caaf) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfede,	// (0x0005caaf) list_double_large_graphic_phob2_cc_pane_g

0x106a,	// (0x0004dc3b) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x106a,	// (0x0004dc3b) list_double_large_graphic_phob2_cc_pane_t1

0x1093,	// (0x0004dc64) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x1093,	// (0x0004dc64) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfee9,	// (0x0005caba) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfee9,	// (0x0005caba) list_double_large_graphic_phob2_cc_pane_t

0xefdc,	// (0x0005bbad) list_highlight_pane_cp025_ParamLimits

0xefdc,	// (0x0005bbad) list_highlight_pane_cp025

0xa4c6,	// (0x00057097) bg_button_pane_cp033_ParamLimits

0xefa9,	// (0x0005bb7a) phob2_cc_button_pane_g1_ParamLimits

0xefb5,	// (0x0005bb86) phob2_cc_button_pane_t1_ParamLimits

0xefca,	// (0x0005bb9b) phob2_cc_button_pane_t2_ParamLimits

0x016c,	// (0x0004cd3d) phob2_cc_button_pane_t_ParamLimits

0x1305,	// (0x0004ded6) popup_wgtman_window

0xd813,	// (0x0005a3e4) scroll_pane_cp038

0x90e1,	// (0x00055cb2) wgtman_btn_pane_cp_01_ParamLimits

0x90e1,	// (0x00055cb2) wgtman_btn_pane_cp_01

0xefea,	// (0x0005bbbb) wgtman_content_pane

0xeff3,	// (0x0005bbc4) wgtman_heading_pane

0x977d,	// (0x0005634e) bg_heading_pane_cp02

0xeffc,	// (0x0005bbcd) wgtman_heading_pane_g1

0xf004,	// (0x0005bbd5) wgtman_heading_pane_t1

0xf012,	// (0x0005bbe3) scroll_pane_cp036

0xf01a,	// (0x0005bbeb) wgtman_list_pane

0xf022,	// (0x0005bbf3) wgtman_list_pane_t1_ParamLimits

0xf022,	// (0x0005bbf3) wgtman_list_pane_t1

0xa102,	// (0x00056cd3) cam4_grid_pane

0x05d7,	// (0x0004d1a8) bg_button_pane_cp015_ParamLimits

0x73c4,	// (0x00053f95) bg_button_pane_cp016_ParamLimits

0x73d7,	// (0x00053fa8) bg_button_pane_cp017_ParamLimits

0x061d,	// (0x0004d1ee) popup_vitu2_query_window_g3_ParamLimits

0x061d,	// (0x0004d1ee) popup_vitu2_query_window_g3

0x0698,	// (0x0004d269) popup_vitu2_query_window_t6_ParamLimits

0x0698,	// (0x0004d269) popup_vitu2_query_window_t6

0x06c3,	// (0x0004d294) popup_vitu2_query_window_t7_ParamLimits

0x06c3,	// (0x0004d294) popup_vitu2_query_window_t7

0xe721,	// (0x0005b2f2) cam4_grid_pane_g1

0xe72a,	// (0x0005b2fb) cam4_grid_pane_g2

0xf03c,	// (0x0005bc0d) cam4_grid_pane_g3

0xf045,	// (0x0005bc16) cam4_grid_pane_g4

0x0003,

0xfeee,	// (0x0005cabf) cam4_grid_pane_g

0x2215,	// (0x0004ede6) aid_placing_vt_slider_lsc_ParamLimits

0x2520,	// (0x0004f0f1) vidtel_button_pane_ParamLimits

0x2520,	// (0x0004f0f1) vidtel_button_pane

0xf050,	// (0x0005bc21) bg_button_pane_cp034

0x968c,	// (0x0005625d) vidtel_button_pane_g1

0xf05a,	// (0x0005bc2b) vidtel_button_pane_t1

0xd915,	// (0x0005a4e6) aid_size_vtel_slider_touch

0xda29,	// (0x0005a5fa) scroll_pane_cp039

0xe1f5,	// (0x0005adc6) ncim_query_button_pane_cp01_ParamLimits

0xe214,	// (0x0005ade5) ncimui_query_pane_g1_ParamLimits

0xa4c6,	// (0x00057097) input_focus_pane_cp012_ParamLimits

0xe239,	// (0x0005ae0a) ncim_query_entry_pane_t1_ParamLimits

0xda29,	// (0x0005a5fa) scroll_pane_cp039_ParamLimits

0xb306,	// (0x00057ed7) navi_pane_bcale_mc_g1

0xb30e,	// (0x00057edf) navi_pane_bcale_mc_t1

0xe7b2,	// (0x0005b383) main_sp_fs_email_pane_g1

0xe7be,	// (0x0005b38f) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x0005c8b6) main_sp_fs_email_pane_g

0xea05,	// (0x0005b5d6) list_single_cale_mrui_row_pane_g3_ParamLimits

0xea05,	// (0x0005b5d6) list_single_cale_mrui_row_pane_g3

0x0f68,	// (0x0004db39) list_single_recal_day_pane_g5_event_pane

0xa477,	// (0x00057048) list_single_recal_day_pane_g7

0xf068,	// (0x0005bc39) list_recal_day_event_pane_cp01

0xf071,	// (0x0005bc42) list_recal_vselct_arw_lo_pane_cp01

0xf079,	// (0x0005bc4a) list_recal_vselct_arw_up_pane_cp01

0xf081,	// (0x0005bc52) list_recal_vselct_pane_cp01

0xd925,	// (0x0005a4f6) list_recal_day_event_pane_cp01_g1

0xa4b8,	// (0x00057089) list_recal_day_event_pane_cp01_t1

0xa47f,	// (0x00057050) list_single_recal_day_pane_t1_ParamLimits

0xa491,	// (0x00057062) list_single_recal_day_pane_t2_ParamLimits

0xfe2b,	// (0x0005c9fc) list_single_recal_day_pane_t_ParamLimits

0xa75e,	// (0x0005732f) bg_notes_pane_ParamLimits

0xa801,	// (0x000573d2) list_notes_pane_ParamLimits

0x164e,	// (0x0004e21f) scroll_pane_cp06_ParamLimits

0xa823,	// (0x000573f4) main_notes_pane_ParamLimits

0x977d,	// (0x0005634e) main_welc_pane

0x9694,	// (0x00056265) main_welc_body_pane_ParamLimits

0x9694,	// (0x00056265) main_welc_body_pane

0x96b2,	// (0x00056283) main_welc_opti_pane_ParamLimits

0x96b2,	// (0x00056283) main_welc_opti_pane

0x96f7,	// (0x000562c8) main_welc_pane_t1_ParamLimits

0x96f7,	// (0x000562c8) main_welc_pane_t1

0x9715,	// (0x000562e6) main_welc_body_row_pane_ParamLimits

0x9715,	// (0x000562e6) main_welc_body_row_pane

0xe713,	// (0x0005b2e4) main_welc_opti_row_pane_ParamLimits

0xe713,	// (0x0005b2e4) main_welc_opti_row_pane

0xf08b,	// (0x0005bc5c) main_welc_opti_row_pane_g1

0x9729,	// (0x000562fa) main_welc_opti_row_pane_t1

0xf093,	// (0x0005bc64) main_welc_body_row_pane_t1

0xed78,	// (0x0005b949) popup_notif_wgt_heading_pane

0xed92,	// (0x0005b963) aid_size_list_notif_wgt_del_ParamLimits

0xed9f,	// (0x0005b970) list_notif_wgt_row_pane_g1_ParamLimits

0xedab,	// (0x0005b97c) list_notif_wgt_row_pane_g2_ParamLimits

0xedbf,	// (0x0005b990) list_notif_wgt_row_pane_g3_ParamLimits

0x00d6,	// (0x0004cca7) list_notif_wgt_row_pane_g_ParamLimits

0xedcc,	// (0x0005b99d) list_notif_wgt_row_pane_t1_ParamLimits

0xede2,	// (0x0005b9b3) list_notif_wgt_row_pane_t2_ParamLimits

0xedf4,	// (0x0005b9c5) list_notif_wgt_row_pane_t3_ParamLimits

0x00dd,	// (0x0004ccae) list_notif_wgt_row_pane_t_ParamLimits

0x917a,	// (0x00055d4b) listrow_wgtman_pane_g1_ParamLimits

0x9187,	// (0x00055d58) listrow_wgtman_pane_g2_ParamLimits

0xfe81,	// (0x0005ca52) listrow_wgtman_pane_g_ParamLimits

0x0fc3,	// (0x0004db94) listrow_wgtman_pane_t1_ParamLimits

0x0fdb,	// (0x0004dbac) listrow_wgtman_pane_t2_ParamLimits

0xfe86,	// (0x0005ca57) listrow_wgtman_pane_t_ParamLimits

0x1001,	// (0x0004dbd2) wait_bar_pane_cp09_ParamLimits

0x977d,	// (0x0005634e) bg_popup_heading_pane_cp02

0xf0a2,	// (0x0005bc73) popup_notif_wgt_heading_pane_g1

0xf0aa,	// (0x0005bc7b) popup_notif_wgt_heading_pane_t1

0x977d,	// (0x0005634e) main_vids_pane

0x977d,	// (0x0005634e) vids_listscroll_pane

0x9738,	// (0x00056309) scroll_pane_cp040

0x977d,	// (0x0005634e) vids_list_pane

0x9743,	// (0x00056314) vids_list_double_pane_ParamLimits

0x9743,	// (0x00056314) vids_list_double_pane

0x9754,	// (0x00056325) vids_list_double_pane_g1

0x975d,	// (0x0005632e) vids_list_double_pane_t1

0x976d,	// (0x0005633e) vids_list_double_pane_t2

0x0001,

0xfefc,	// (0x0005cacd) vids_list_double_pane_t

0xa4c6,	// (0x00057097) main_ncimui_pane_ParamLimits

0x7f6f,	// (0x00054b40) main_ncimui_pane_g1_ParamLimits

0x7f7b,	// (0x00054b4c) main_ncimui_pane_g2_ParamLimits

0x7f7b,	// (0x00054b4c) main_ncimui_pane_g2

0x0001,

0xfbea,	// (0x0005c7bb) main_ncimui_pane_g_ParamLimits

0xfbea,	// (0x0005c7bb) main_ncimui_pane_g

0x96cd,	// (0x0005629e) main_welc_pane_g1_ParamLimits

0x96cd,	// (0x0005629e) main_welc_pane_g1

0x96e2,	// (0x000562b3) main_welc_pane_g2_ParamLimits

0x96e2,	// (0x000562b3) main_welc_pane_g2

0x0001,

0xfef7,	// (0x0005cac8) main_welc_pane_g_ParamLimits

0xfef7,	// (0x0005cac8) main_welc_pane_g

0xa75e,	// (0x0005732f) listscroll_mce_pane_ParamLimits

0xb45b,	// (0x0005802c) wait_bar_pane_cp10

0xc84f,	// (0x00059420) main_cale_day_pane_ParamLimits

0xc84f,	// (0x00059420) main_cale_week_pane_ParamLimits

0xa75e,	// (0x0005732f) main_messa_pane_ParamLimits

0x5a79,	// (0x0005264a) main_clock2_btn_pane_ParamLimits

0x5a79,	// (0x0005264a) main_clock2_btn_pane

0xd083,	// (0x00059c54) main_clock2_btn_pane_cp01_ParamLimits

0xd083,	// (0x00059c54) main_clock2_btn_pane_cp01

0xe9d6,	// (0x0005b5a7) list_cale_mrui_pane_ParamLimits

0xee2a,	// (0x0005b9fb) main_cf0_pane_g2

0x0001,

0x00e4,	// (0x0004ccb5) main_cf0_pane_g

0x9366,	// (0x00055f37) area_left_week_number_pane_ParamLimits

0x9372,	// (0x00055f43) area_top_day_name_pane_ParamLimits

0x9385,	// (0x00055f56) frame_month_view_pane_ParamLimits

0xef52,	// (0x0005bb23) grid_month_view_pane_ParamLimits

0xef60,	// (0x0005bb31) frm_month_g1_ParamLimits

0x9406,	// (0x00055fd7) frm_month_g2_ParamLimits

0x9419,	// (0x00055fea) frm_month_g3_ParamLimits

0x942c,	// (0x00055ffd) frm_month_g4_ParamLimits

0x943f,	// (0x00056010) frm_month_g5_ParamLimits

0x9452,	// (0x00056023) frm_month_g6_ParamLimits

0x9465,	// (0x00056036) frm_month_g7_ParamLimits

0xef6d,	// (0x0005bb3e) frm_month_g8_ParamLimits

0x9478,	// (0x00056049) frm_month_g9_ParamLimits

0x9488,	// (0x00056059) frm_month_g10_ParamLimits

0x9498,	// (0x00056069) frm_month_g11_ParamLimits

0x94a8,	// (0x00056079) frm_month_g12_ParamLimits

0x94ba,	// (0x0005608b) frm_month_g13_ParamLimits

0x94cc,	// (0x0005609d) frm_month_g14_ParamLimits

0x94e0,	// (0x000560b1) frm_month_g15_ParamLimits

0x94f4,	// (0x000560c5) frm_month_g16_ParamLimits

0xfea7,	// (0x0005ca78) frm_month_g_ParamLimits

0xef7a,	// (0x0005bb4b) cell_top_day_name_pane_t1_ParamLimits

0x9508,	// (0x000560d9) cell_area_left_week_number_pane_g1_ParamLimits

0x9514,	// (0x000560e5) cell_area_left_week_number_pane_t1_ParamLimits

0xcedb,	// (0x00059aac) cell_month_view_pane_g1_ParamLimits

0x9527,	// (0x000560f8) cell_month_view_pane_t1_ParamLimits

0xa756,	// (0x00057327) main_clock2_btn_pane_g1

0xf0b8,	// (0x0005bc89) main_clock2_btn_pane_t1

0xa4c6,	// (0x00057097) listscroll_cmail_pane_ParamLimits

0xe7b2,	// (0x0005b383) main_sp_fs_email_pane_g1_ParamLimits

0xe7be,	// (0x0005b38f) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x0005c8b6) main_sp_fs_email_pane_g_ParamLimits

0xeae5,	// (0x0005b6b6) list_recal_day_pane_ParamLimits

0xeaf6,	// (0x0005b6c7) mian_recal_day_pane_t1

0x0b35,	// (0x0004d706) list_single_dyc_row_text_pane_t4_ParamLimits

0x0b35,	// (0x0004d706) list_single_dyc_row_text_pane_t4

0x0b7e,	// (0x0004d74f) list_single_dyc_row_text_pane_t5_ParamLimits

0x0b7e,	// (0x0004d74f) list_single_dyc_row_text_pane_t5

0x8814,	// (0x000553e5) list_single_dyc_row_text_pane_t6_ParamLimits

0x8814,	// (0x000553e5) list_single_dyc_row_text_pane_t6

0x31c2,	// (0x0004fd93) aid_mgn_list_cale_time_pane

0xa4c6,	// (0x00057097) main_gallery2_pane_ParamLimits

0xd099,	// (0x00059c6a) main_clock2_pane_cp01_t1

0xd0a9,	// (0x00059c7a) main_clock2_pane_cp01_t3

0x0001,

0xf7c4,	// (0x0005c395) main_clock2_pane_cp01_t

0x19fa,	// (0x0004e5cb) cale_week_scroll_pane_g16_ParamLimits

0x19fa,	// (0x0004e5cb) cale_week_scroll_pane_g16
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
	};

} // end of namespace AknLayoutScalable_Elaf_phl_apps_qhd_lsc_tch_Small

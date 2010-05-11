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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0008b02e };

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
0x0ef2,	// (0x0008bf20) Screen

0x0efe,	// (0x0008bf2c) application_window

0x0f4a,	// (0x0008bf78) area_bottom_pane_ParamLimits

0x0f4a,	// (0x0008bf78) area_bottom_pane

0x0f83,	// (0x0008bfb1) area_top_pane_ParamLimits

0x0f83,	// (0x0008bfb1) area_top_pane

0x96b8,	// (0x000946e6) call_video_uplink_pane_ParamLimits

0x96b8,	// (0x000946e6) call_video_uplink_pane

0x1011,	// (0x0008c03f) main_pane_ParamLimits

0x1011,	// (0x0008c03f) main_pane

0xc867,	// (0x00097895) context_pane

0x4454,	// (0x0008f482) navi_pane

0x4486,	// (0x0008f4b4) popup_cale_events_window_ParamLimits

0x4486,	// (0x0008f4b4) popup_cale_events_window

0xc87a,	// (0x000978a8) popup_mup_playback_window

0x449e,	// (0x0008f4cc) signal_pane

0xa7b8,	// (0x000957e6) main_browser_pane

0xa9ad,	// (0x000959db) main_burst_pane

0x41bc,	// (0x0008f1ea) main_calc_pane

0xc84d,	// (0x0009787b) main_cale_day_pane

0x162f,	// (0x0008c65d) main_cale_month_pane

0xc84d,	// (0x0009787b) main_cale_week_pane

0xa9ad,	// (0x000959db) main_call_pane

0xa48c,	// (0x000954ba) main_call_poc_pane

0xa9ad,	// (0x000959db) main_camera_pane

0xa9ad,	// (0x000959db) main_chi_dic_pane

0xb1b0,	// (0x000961de) main_clock_pane

0xa48c,	// (0x000954ba) main_fmradio_pane

0xa9ad,	// (0x000959db) main_graph_messa_pane

0xa48c,	// (0x000954ba) main_help_pane

0xa7b8,	// (0x000957e6) main_im_pane

0xa6e7,	// (0x00095715) main_image_pane_ParamLimits

0xa6e7,	// (0x00095715) main_image_pane

0xa48c,	// (0x000954ba) main_location2_pane

0xa9ad,	// (0x000959db) main_location_pane

0xa6e7,	// (0x00095715) main_messa_pane

0xa48c,	// (0x000954ba) main_mp2_pane

0xa9ad,	// (0x000959db) main_mp_pane

0xa48c,	// (0x000954ba) main_msg_pane

0xa48c,	// (0x000954ba) main_mup_eq_pane

0xa48c,	// (0x000954ba) main_mup_pane

0xa7b8,	// (0x000957e6) main_notes_pane

0xa48c,	// (0x000954ba) main_pec_pane

0xa48c,	// (0x000954ba) main_phob_pane

0xa48c,	// (0x000954ba) main_pinb_pane

0xa48c,	// (0x000954ba) main_postcard_pane

0xa48c,	// (0x000954ba) main_qdial_pane

0xa9ad,	// (0x000959db) main_skin_pane

0xa48c,	// (0x000954ba) main_smil2_pane

0xa9ad,	// (0x000959db) main_smil_pane

0xa9ad,	// (0x000959db) main_video_pane

0xa9ad,	// (0x000959db) main_video_tele_pane

0xa6e7,	// (0x00095715) main_viewer_pane_ParamLimits

0xa6e7,	// (0x00095715) main_viewer_pane

0xa9ad,	// (0x000959db) main_vorec_pane

0x4210,	// (0x0008f23e) popup_blid_sat_info_window_ParamLimits

0x4210,	// (0x0008f23e) popup_blid_sat_info_window

0x4268,	// (0x0008f296) popup_dyc_status_message_window_ParamLimits

0x4268,	// (0x0008f296) popup_dyc_status_message_window

0x4280,	// (0x0008f2ae) popup_grid_large_graphic_window_ParamLimits

0x4280,	// (0x0008f2ae) popup_grid_large_graphic_window

0x4330,	// (0x0008f35e) popup_loc_request_window_ParamLimits

0x4330,	// (0x0008f35e) popup_loc_request_window

0x442c,	// (0x0008f45a) popup_wml_address_window_ParamLimits

0x442c,	// (0x0008f45a) popup_wml_address_window

0x3ff6,	// (0x0008f024) call_muted_g1

0x3caa,	// (0x0008ecd8) popup_call_audio_conf_window_ParamLimits

0x3caa,	// (0x0008ecd8) popup_call_audio_conf_window

0x400a,	// (0x0008f038) popup_call_audio_first_window_ParamLimits

0x400a,	// (0x0008f038) popup_call_audio_first_window

0x4080,	// (0x0008f0ae) popup_call_audio_in_window_ParamLimits

0x4080,	// (0x0008f0ae) popup_call_audio_in_window

0x40bc,	// (0x0008f0ea) popup_call_audio_out_window_ParamLimits

0x40bc,	// (0x0008f0ea) popup_call_audio_out_window

0x40f6,	// (0x0008f124) popup_call_audio_second_window_ParamLimits

0x40f6,	// (0x0008f124) popup_call_audio_second_window

0x414c,	// (0x0008f17a) popup_call_audio_wait_window_ParamLimits

0x414c,	// (0x0008f17a) popup_call_audio_wait_window

0x4181,	// (0x0008f1af) popup_number_entry_window_ParamLimits

0x4181,	// (0x0008f1af) popup_number_entry_window

0x96d6,	// (0x00094704) bg_popup_call_pane_cp05_ParamLimits

0x96d6,	// (0x00094704) bg_popup_call_pane_cp05

0x96f6,	// (0x00094724) popup_number_entry_window_t1

0x9709,	// (0x00094737) popup_number_entry_window_t2

0x971b,	// (0x00094749) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x0009a0f8) popup_number_entry_window_t

0x972d,	// (0x0009475b) text_title_cp2

0x9740,	// (0x0009476e) bg_popup_call_pane_cp_ParamLimits

0x9740,	// (0x0009476e) bg_popup_call_pane_cp

0x974e,	// (0x0009477c) call_thumbnail_pane

0x9756,	// (0x00094784) popup_call_audio_in_window_g1_ParamLimits

0x9756,	// (0x00094784) popup_call_audio_in_window_g1

0x9762,	// (0x00094790) popup_call_audio_in_window_g2_ParamLimits

0x9762,	// (0x00094790) popup_call_audio_in_window_g2

0x976e,	// (0x0009479c) popup_call_audio_in_window_g3_ParamLimits

0x976e,	// (0x0009479c) popup_call_audio_in_window_g3

0x0002,

0xf0d3,	// (0x0009a101) popup_call_audio_in_window_g_ParamLimits

0xf0d3,	// (0x0009a101) popup_call_audio_in_window_g

0x977a,	// (0x000947a8) popup_call_audio_in_window_t1_ParamLimits

0x977a,	// (0x000947a8) popup_call_audio_in_window_t1

0x9796,	// (0x000947c4) popup_call_audio_in_window_t2_ParamLimits

0x9796,	// (0x000947c4) popup_call_audio_in_window_t2

0x97b2,	// (0x000947e0) popup_call_audio_in_window_t3_ParamLimits

0x97b2,	// (0x000947e0) popup_call_audio_in_window_t3

0x0002,

0xf0da,	// (0x0009a108) popup_call_audio_in_window_t_ParamLimits

0xf0da,	// (0x0009a108) popup_call_audio_in_window_t

0x9740,	// (0x0009476e) bg_popup_call_pane_cp01_ParamLimits

0x9740,	// (0x0009476e) bg_popup_call_pane_cp01

0x974e,	// (0x0009477c) call_thumbnail_pane_cp02

0x97c5,	// (0x000947f3) call_type_pane_cp022

0x97cd,	// (0x000947fb) popup_call_audio_out_window_g1_ParamLimits

0x97cd,	// (0x000947fb) popup_call_audio_out_window_g1

0x97df,	// (0x0009480d) popup_call_audio_out_window_g2_ParamLimits

0x97df,	// (0x0009480d) popup_call_audio_out_window_g2

0x97eb,	// (0x00094819) popup_call_audio_out_window_g3_ParamLimits

0x97eb,	// (0x00094819) popup_call_audio_out_window_g3

0x0002,

0xf0e1,	// (0x0009a10f) popup_call_audio_out_window_g_ParamLimits

0xf0e1,	// (0x0009a10f) popup_call_audio_out_window_g

0x97fd,	// (0x0009482b) popup_call_audio_out_window_t1_ParamLimits

0x97fd,	// (0x0009482b) popup_call_audio_out_window_t1

0x9815,	// (0x00094843) popup_call_audio_out_window_t2_ParamLimits

0x9815,	// (0x00094843) popup_call_audio_out_window_t2

0x0001,

0xf0e8,	// (0x0009a116) popup_call_audio_out_window_t_ParamLimits

0xf0e8,	// (0x0009a116) popup_call_audio_out_window_t

0x982a,	// (0x00094858) bg_popup_call_pane_ParamLimits

0x982a,	// (0x00094858) bg_popup_call_pane

0x11ce,	// (0x0008c1fc) call_thumbnail_pane_cp_ParamLimits

0x11ce,	// (0x0008c1fc) call_thumbnail_pane_cp

0x98ae,	// (0x000948dc) call_type_pane_cp01_ParamLimits

0x98ae,	// (0x000948dc) call_type_pane_cp01

0x98f2,	// (0x00094920) popup_call_audio_first_window_g1_ParamLimits

0x98f2,	// (0x00094920) popup_call_audio_first_window_g1

0x993e,	// (0x0009496c) popup_call_audio_first_window_g2_ParamLimits

0x993e,	// (0x0009496c) popup_call_audio_first_window_g2

0x0001,

0xf0ed,	// (0x0009a11b) popup_call_audio_first_window_g_ParamLimits

0xf0ed,	// (0x0009a11b) popup_call_audio_first_window_g

0x9982,	// (0x000949b0) popup_call_audio_first_window_t1_ParamLimits

0x9982,	// (0x000949b0) popup_call_audio_first_window_t1

0xa3d1,	// (0x000953ff) popup_call_audio_first_window_t4_ParamLimits

0xa3d1,	// (0x000953ff) popup_call_audio_first_window_t4

0xa45d,	// (0x0009548b) popup_call_audio_first_window_t5_ParamLimits

0xa45d,	// (0x0009548b) popup_call_audio_first_window_t5

0x0002,

0xf0f2,	// (0x0009a120) popup_call_audio_first_window_t_ParamLimits

0xf0f2,	// (0x0009a120) popup_call_audio_first_window_t

0xa48c,	// (0x000954ba) bg_popup_call_pane_cp02

0xa496,	// (0x000954c4) call_type_pane_cp023

0xa49e,	// (0x000954cc) popup_call_audio_wait_window_g1

0xa4a6,	// (0x000954d4) popup_call_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0009a127) popup_call_audio_wait_window_g

0xa4ae,	// (0x000954dc) popup_call_audio_wait_window_t3

0xa4bc,	// (0x000954ea) bg_popup_call_pane_cp03_ParamLimits

0xa4bc,	// (0x000954ea) bg_popup_call_pane_cp03

0xa51c,	// (0x0009554a) call_thumbnail_pane_cp011_ParamLimits

0xa51c,	// (0x0009554a) call_thumbnail_pane_cp011

0xa528,	// (0x00095556) call_type_pane_cp034_ParamLimits

0xa528,	// (0x00095556) call_type_pane_cp034

0xa564,	// (0x00095592) popup_call_audio_second_window_g1_ParamLimits

0xa564,	// (0x00095592) popup_call_audio_second_window_g1

0xa5a0,	// (0x000955ce) popup_call_audio_second_window_g2_ParamLimits

0xa5a0,	// (0x000955ce) popup_call_audio_second_window_g2

0x0001,

0xf0fe,	// (0x0009a12c) popup_call_audio_second_window_g_ParamLimits

0xf0fe,	// (0x0009a12c) popup_call_audio_second_window_g

0xa5dc,	// (0x0009560a) popup_call_audio_second_window_t1_ParamLimits

0xa5dc,	// (0x0009560a) popup_call_audio_second_window_t1

0xa65d,	// (0x0009568b) popup_call_audio_second_window_t2_ParamLimits

0xa65d,	// (0x0009568b) popup_call_audio_second_window_t2

0xa693,	// (0x000956c1) popup_call_audio_second_window_t3_ParamLimits

0xa693,	// (0x000956c1) popup_call_audio_second_window_t3

0x0002,

0xf103,	// (0x0009a131) popup_call_audio_second_window_t_ParamLimits

0xf103,	// (0x0009a131) popup_call_audio_second_window_t

0xa48c,	// (0x000954ba) bg_popup_call_pane_cp04

0xa6c9,	// (0x000956f7) list_conf_pane

0xa6d1,	// (0x000956ff) popup_call_audio_conf_window_t1

0xa6df,	// (0x0009570d) call_thumbnail_pane_g1

0xa6e7,	// (0x00095715) bg_pinb_pane_ParamLimits

0xa6e7,	// (0x00095715) bg_pinb_pane

0xa6f5,	// (0x00095723) find_pinb_pane

0xa6fe,	// (0x0009572c) listscroll_pinb_pane_ParamLimits

0xa6fe,	// (0x0009572c) listscroll_pinb_pane

0xa70d,	// (0x0009573b) pinb_bg_pane_g1

0x11f2,	// (0x0008c220) pinb_bg_pane_g2

0x11fe,	// (0x0008c22c) pinb_bg_pane_g3

0x120a,	// (0x0008c238) pinb_bg_pane_g4

0x1216,	// (0x0008c244) pinb_bg_pane_g5

0x1222,	// (0x0008c250) pinb_bg_pane_g6

0x122d,	// (0x0008c25b) pinb_bg_pane_g7

0x1238,	// (0x0008c266) pinb_bg_pane_g8

0x1243,	// (0x0008c271) pinb_bg_pane_g9

0x124d,	// (0x0008c27b) pinb_bg_pane_g10

0x0009,

0xf10a,	// (0x0009a138) pinb_bg_pane_g

0x126a,	// (0x0008c298) grid_pinb_pane

0x1273,	// (0x0008c2a1) list_pinb_pane

0x127c,	// (0x0008c2aa) scroll_pane_cp01_ParamLimits

0x127c,	// (0x0008c2aa) scroll_pane_cp01

0xa717,	// (0x00095745) find_pinb_pane_g1_ParamLimits

0xa717,	// (0x00095745) find_pinb_pane_g1

0xa72f,	// (0x0009575d) find_pinb_pane_t1

0xa741,	// (0x0009576f) find_pinb_pane_t2

0x0001,

0xf124,	// (0x0009a152) find_pinb_pane_t

0xa756,	// (0x00095784) input_focus_pane_cp01_ParamLimits

0xa756,	// (0x00095784) input_focus_pane_cp01

0x128e,	// (0x0008c2bc) cell_pinb_pane_ParamLimits

0x128e,	// (0x0008c2bc) cell_pinb_pane

0x12b9,	// (0x0008c2e7) cell_pinb_pane_g1_ParamLimits

0x12b9,	// (0x0008c2e7) cell_pinb_pane_g1

0xa762,	// (0x00095790) cell_pinb_pane_g2_ParamLimits

0xa762,	// (0x00095790) cell_pinb_pane_g2

0xa76e,	// (0x0009579c) cell_pinb_pane_g3_ParamLimits

0xa76e,	// (0x0009579c) cell_pinb_pane_g3

0x0002,

0xf129,	// (0x0009a157) cell_pinb_pane_g_ParamLimits

0xf129,	// (0x0009a157) cell_pinb_pane_g

0xa48c,	// (0x000954ba) grid_highlight_pane_cp01

0x12cc,	// (0x0008c2fa) list_pinb_item_pane_ParamLimits

0x12cc,	// (0x0008c2fa) list_pinb_item_pane

0xa48c,	// (0x000954ba) list_highlight_pane_cp02

0x12df,	// (0x0008c30d) list_pinb_item_pane_g1_ParamLimits

0x12df,	// (0x0008c30d) list_pinb_item_pane_g1

0x12ec,	// (0x0008c31a) list_pinb_item_pane_g2_ParamLimits

0x12ec,	// (0x0008c31a) list_pinb_item_pane_g2

0x12f8,	// (0x0008c326) list_pinb_item_pane_g3_ParamLimits

0x12f8,	// (0x0008c326) list_pinb_item_pane_g3

0x1309,	// (0x0008c337) list_pinb_item_pane_g4_ParamLimits

0x1309,	// (0x0008c337) list_pinb_item_pane_g4

0x0003,

0xf130,	// (0x0009a15e) list_pinb_item_pane_g_ParamLimits

0xf130,	// (0x0009a15e) list_pinb_item_pane_g

0x1315,	// (0x0008c343) list_pinb_item_pane_t1_ParamLimits

0x1315,	// (0x0008c343) list_pinb_item_pane_t1

0x134a,	// (0x0008c378) calc_display_pane

0x1372,	// (0x0008c3a0) calc_paper_pane

0x1395,	// (0x0008c3c3) grid_calc_pane

0xa48c,	// (0x000954ba) bg_list_pane_cp01

0x13c3,	// (0x0008c3f1) clock_g1

0x13cb,	// (0x0008c3f9) clock_g2

0x0001,

0xf139,	// (0x0009a167) clock_g

0x13d3,	// (0x0008c401) clock_t1_ParamLimits

0x13d3,	// (0x0008c401) clock_t1

0x13e8,	// (0x0008c416) clock_t2_ParamLimits

0x13e8,	// (0x0008c416) clock_t2

0x13fa,	// (0x0008c428) clock_t3_ParamLimits

0x13fa,	// (0x0008c428) clock_t3

0x140c,	// (0x0008c43a) clock_t4_ParamLimits

0x140c,	// (0x0008c43a) clock_t4

0x141e,	// (0x0008c44c) clock_t5_ParamLimits

0x141e,	// (0x0008c44c) clock_t5

0x1433,	// (0x0008c461) clock_t6_ParamLimits

0x1433,	// (0x0008c461) clock_t6

0x1445,	// (0x0008c473) clock_t7_ParamLimits

0x1445,	// (0x0008c473) clock_t7

0x1457,	// (0x0008c485) clock_t8_ParamLimits

0x1457,	// (0x0008c485) clock_t8

0x146b,	// (0x0008c499) clock_t9_ParamLimits

0x146b,	// (0x0008c499) clock_t9

0x0008,

0xf13e,	// (0x0009a16c) clock_t_ParamLimits

0xf13e,	// (0x0009a16c) clock_t

0xa77a,	// (0x000957a8) popup_clock_analogue_window_cp02

0xa77a,	// (0x000957a8) popup_clock_digital_window_cp01

0xa782,	// (0x000957b0) listscroll_help_pane

0xa48c,	// (0x000954ba) phob_pre_status_pane

0xa78c,	// (0x000957ba) grid_qdial_pane

0xa6e7,	// (0x00095715) listscroll_mce_pane

0xa6e7,	// (0x00095715) bg_notes_pane

0xa796,	// (0x000957c4) list_notes_pane

0x147f,	// (0x0008c4ad) scroll_pane_cp06

0xa7a4,	// (0x000957d2) bg_calc_paper_pane

0x9a36,	// (0x00094a64) list_calc_pane

0xa7b8,	// (0x000957e6) bg_calc_display_pane

0x1493,	// (0x0008c4c1) calc_display_pane_t1

0x14a5,	// (0x0008c4d3) calc_display_pane_t2

0x9a50,	// (0x00094a7e) calc_display_pane_t3

0x0002,

0xf151,	// (0x0009a17f) calc_display_pane_t

0x14b7,	// (0x0008c4e5) cell_calc_pane_ParamLimits

0x14b7,	// (0x0008c4e5) cell_calc_pane

0xa7c4,	// (0x000957f2) bg_calc_paper_pane_g1

0xa7d0,	// (0x000957fe) bg_calc_paper_pane_g2

0xa7dc,	// (0x0009580a) bg_calc_paper_pane_g3

0xa7e8,	// (0x00095816) bg_calc_paper_pane_g4

0xa7f4,	// (0x00095822) bg_calc_paper_pane_g5

0x14ee,	// (0x0008c51c) bg_calc_paper_pane_g6

0x14fd,	// (0x0008c52b) bg_calc_paper_pane_g7

0x150c,	// (0x0008c53a) bg_calc_paper_pane_g8

0x0007,

0xf158,	// (0x0009a186) bg_calc_paper_pane_g

0x151f,	// (0x0008c54d) calc_bg_paper_pane_g9

0x1532,	// (0x0008c560) list_calc_item_pane_ParamLimits

0x1532,	// (0x0008c560) list_calc_item_pane

0xa800,	// (0x0009582e) list_calc_item_pane_g1

0x9a62,	// (0x00094a90) list_calc_item_pane_t1_ParamLimits

0x9a62,	// (0x00094a90) list_calc_item_pane_t1

0x154b,	// (0x0008c579) list_calc_item_pane_t2_ParamLimits

0x154b,	// (0x0008c579) list_calc_item_pane_t2

0x0001,

0xf169,	// (0x0009a197) list_calc_item_pane_t_ParamLimits

0xf169,	// (0x0009a197) list_calc_item_pane_t

0xa80d,	// (0x0009583b) cell_calc_pane_g1

0xa817,	// (0x00095845) grid_highlight_pane_cp02

0xa839,	// (0x00095867) bg_calc_display_pane_g1

0x9a74,	// (0x00094aa2) bg_calc_display_pane_g2

0xa842,	// (0x00095870) bg_calc_display_pane_g3

0x0002,

0xf173,	// (0x0009a1a1) bg_calc_display_pane_g

0x157d,	// (0x0008c5ab) cell_qdial_pane_ParamLimits

0x157d,	// (0x0008c5ab) cell_qdial_pane

0x1591,	// (0x0008c5bf) cell_qdial_pane_g1_ParamLimits

0x1591,	// (0x0008c5bf) cell_qdial_pane_g1

0x15a7,	// (0x0008c5d5) cell_qdial_pane_g2_ParamLimits

0x15a7,	// (0x0008c5d5) cell_qdial_pane_g2

0xa84b,	// (0x00095879) cell_qdial_pane_g3_ParamLimits

0xa84b,	// (0x00095879) cell_qdial_pane_g3

0x0003,

0xf17a,	// (0x0009a1a8) cell_qdial_pane_g_ParamLimits

0xf17a,	// (0x0009a1a8) cell_qdial_pane_g

0x15cd,	// (0x0008c5fb) cell_qdial_pane_t1_ParamLimits

0x15cd,	// (0x0008c5fb) cell_qdial_pane_t1

0x15e5,	// (0x0008c613) cell_qdial_pane_t2_ParamLimits

0x15e5,	// (0x0008c613) cell_qdial_pane_t2

0x15f8,	// (0x0008c626) cell_qdial_pane_t3_ParamLimits

0x15f8,	// (0x0008c626) cell_qdial_pane_t3

0x0002,

0xf183,	// (0x0009a1b1) cell_qdial_pane_t_ParamLimits

0xf183,	// (0x0009a1b1) cell_qdial_pane_t

0xa48c,	// (0x000954ba) grid_highlight_pane_cp04

0xa857,	// (0x00095885) thumbnail_qdial_pane_ParamLimits

0xa857,	// (0x00095885) thumbnail_qdial_pane

0xa8b3,	// (0x000958e1) list_help_pane

0xa8bc,	// (0x000958ea) scroll_pane_cp02

0xa8c5,	// (0x000958f3) help_list_pane_t1_ParamLimits

0xa8c5,	// (0x000958f3) help_list_pane_t1

0x9a7e,	// (0x00094aac) bg_notes_pane_g2

0x9a86,	// (0x00094ab4) bg_notes_pane_g3

0x9a8e,	// (0x00094abc) notes_bg_pane_g1

0x9a96,	// (0x00094ac4) notes_bg_pane_g4

0x9a9e,	// (0x00094acc) notes_bg_pane_g5

0x9aa6,	// (0x00094ad4) notes_bg_pane_g6

0x9aae,	// (0x00094adc) notes_bg_pane_g7

0x9ab6,	// (0x00094ae4) notes_bg_pane_g8

0x9abe,	// (0x00094aec) notes_bg_pane_g9

0x0006,

0xf1a1,	// (0x0009a1cf) notes_bg_pane_g

0x160b,	// (0x0008c639) list_notes_text_pane_ParamLimits

0x160b,	// (0x0008c639) list_notes_text_pane

0xa8e3,	// (0x00095911) list_notes_text_pane_g1

0x1621,	// (0x0008c64f) list_notes_text_pane_t1

0x162f,	// (0x0008c65d) listscroll_cale_week_pane

0x165b,	// (0x0008c689) bg_cale_heading_pane

0xa906,	// (0x00095934) bg_cale_pane_cp01

0x1673,	// (0x0008c6a1) cale_week_corner_pane

0x1692,	// (0x0008c6c0) cale_week_day_heading_pane

0x16af,	// (0x0008c6dd) cale_week_scroll_pane_g1

0x16c2,	// (0x0008c6f0) cale_week_scroll_pane_g2

0x16da,	// (0x0008c708) cale_week_scroll_pane_g3

0x16f2,	// (0x0008c720) cale_week_scroll_pane_g4

0x170a,	// (0x0008c738) cale_week_scroll_pane_g5

0x172a,	// (0x0008c758) cale_week_scroll_pane_g6

0x174a,	// (0x0008c778) cale_week_scroll_pane_g7

0x176a,	// (0x0008c798) cale_week_scroll_pane_g8

0x178e,	// (0x0008c7bc) cale_week_scroll_pane_g9

0x17a6,	// (0x0008c7d4) cale_week_scroll_pane_g10

0x17be,	// (0x0008c7ec) cale_week_scroll_pane_g11

0x17d6,	// (0x0008c804) cale_week_scroll_pane_g12

0x17ee,	// (0x0008c81c) cale_week_scroll_pane_g13

0x17ee,	// (0x0008c81c) cale_week_scroll_pane_g14

0x17ee,	// (0x0008c81c) cale_week_scroll_pane_g15

0x000f,

0xf1b0,	// (0x0009a1de) cale_week_scroll_pane_g

0x182a,	// (0x0008c858) cale_week_time_pane

0x184e,	// (0x0008c87c) grid_cale_week_pane

0xa935,	// (0x00095963) scroll_pane_cp08

0x1874,	// (0x0008c8a2) cell_cale_week_pane_ParamLimits

0x1874,	// (0x0008c8a2) cell_cale_week_pane

0x1902,	// (0x0008c930) cale_week_day_heading_pane_t1

0x194c,	// (0x0008c97a) cale_week_day_heading_pane_t2

0x199b,	// (0x0008c9c9) cale_week_day_heading_pane_t3

0x19ea,	// (0x0008ca18) cale_week_day_heading_pane_t4

0x1a39,	// (0x0008ca67) cale_week_day_heading_pane_t5

0x1a90,	// (0x0008cabe) cale_week_day_heading_pane_t6

0x1ae7,	// (0x0008cb15) cale_week_day_heading_pane_t7

0x0006,

0xf1d1,	// (0x0009a1ff) cale_week_day_heading_pane_t

0xa952,	// (0x00095980) bg_cale_side_pane

0x1b31,	// (0x0008cb5f) cale_week_time_pane_t1

0x1b4b,	// (0x0008cb79) cale_week_time_pane_t2

0x1b65,	// (0x0008cb93) cale_week_time_pane_t3

0x1b7f,	// (0x0008cbad) cale_week_time_pane_t4

0x1b99,	// (0x0008cbc7) cale_week_time_pane_t5

0x1bb3,	// (0x0008cbe1) cale_week_time_pane_t6

0x1bcd,	// (0x0008cbfb) cale_week_time_pane_t7

0x1be7,	// (0x0008cc15) cale_week_time_pane_t8

0x0007,

0xf1e0,	// (0x0009a20e) cale_week_time_pane_t

0x1c07,	// (0x0008cc35) cell_cale_week_pane_g2

0x1c2b,	// (0x0008cc59) cell_cale_week_pane_g3_ParamLimits

0x1c2b,	// (0x0008cc59) cell_cale_week_pane_g3

0xa960,	// (0x0009598e) grid_highlight_pane_cp07

0xa968,	// (0x00095996) listscroll_gms_pane

0xa972,	// (0x000959a0) grid_gms_pane

0xa97b,	// (0x000959a9) listscroll_gms_pane_g1

0xa983,	// (0x000959b1) listscroll_gms_pane_g2

0x0001,

0xf1f1,	// (0x0009a21f) listscroll_gms_pane_g

0x1c43,	// (0x0008cc71) scroll_pane_cp010

0x1c4e,	// (0x0008cc7c) cell_gms_pane_ParamLimits

0x1c4e,	// (0x0008cc7c) cell_gms_pane

0x1c60,	// (0x0008cc8e) cell_gms_pane_g1

0xa98b,	// (0x000959b9) cell_gms_pane_g2

0xa993,	// (0x000959c1) cell_gms_pane_g3

0xa99c,	// (0x000959ca) cell_gms_pane_g4

0x0003,

0xf1f6,	// (0x0009a224) cell_gms_pane_g

0xa9a5,	// (0x000959d3) grid_highlight_pane_cp09

0x3fa0,	// (0x0008efce) phob_pre_status_pane_g1

0x3fa8,	// (0x0008efd6) phob_pre_status_pane_g2

0x3fb0,	// (0x0008efde) phob_pre_status_pane_g3

0x3fb8,	// (0x0008efe6) phob_pre_status_pane_g4

0x0004,

0xf5f4,	// (0x0009a622) phob_pre_status_pane_g

0x3fc8,	// (0x0008eff6) phob_pre_status_pane_t1

0x3fd6,	// (0x0008f004) phob_pre_status_pane_t2

0x3fe6,	// (0x0008f014) phob_pre_status_pane_t3

0x0002,

0xf5ff,	// (0x0009a62d) phob_pre_status_pane_t

0xa9ad,	// (0x000959db) bg_list_pane_cp05

0x1c70,	// (0x0008cc9e) grid_vorec_pane

0x1c78,	// (0x0008cca6) vorec_t1

0x1c86,	// (0x0008ccb4) vorec_t2

0x1c94,	// (0x0008ccc2) vorec_t3

0x1ca2,	// (0x0008ccd0) vorec_t4

0x9648,	// (0x00094676) vorec_t5

0x9656,	// (0x00094684) vorec_t6

0x0004,

0xf1ff,	// (0x0009a22d) vorec_t

0x9664,	// (0x00094692) wait_bar_pane_cp01

0x1cbe,	// (0x0008ccec) cell_vorec_pane_ParamLimits

0x1cbe,	// (0x0008ccec) cell_vorec_pane

0x9ac6,	// (0x00094af4) cell_vorec_pane_g1

0xa48c,	// (0x000954ba) grid_highlight_pane_cp05

0x1ce9,	// (0x0008cd17) cams_zoom_pane

0x1cf8,	// (0x0008cd26) image_vga_pane

0x1d12,	// (0x0008cd40) main_camera_pane_g1

0x1d24,	// (0x0008cd52) main_camera_pane_g2

0x1d34,	// (0x0008cd62) main_camera_pane_g3

0x1d44,	// (0x0008cd72) main_camera_pane_g4

0x1d54,	// (0x0008cd82) main_camera_pane_g5

0x1d64,	// (0x0008cd92) main_camera_pane_g6

0x1d74,	// (0x0008cda2) main_camera_pane_g7

0x0007,

0xf20a,	// (0x0009a238) main_camera_pane_g

0x1d84,	// (0x0008cdb2) main_camera_pane_t1

0x1d9a,	// (0x0008cdc8) main_camera_pane_t2

0x0001,

0xf21b,	// (0x0009a249) main_camera_pane_t

0x1dd4,	// (0x0008ce02) cams_zoom_pane_cp_ParamLimits

0x1dd4,	// (0x0008ce02) cams_zoom_pane_cp

0x1dfc,	// (0x0008ce2a) image_cif_pane_ParamLimits

0x1dfc,	// (0x0008ce2a) image_cif_pane

0x1e37,	// (0x0008ce65) image_subqcif_pane

0x1e3f,	// (0x0008ce6d) main_video_pane_g1_ParamLimits

0x1e3f,	// (0x0008ce6d) main_video_pane_g1

0x1e63,	// (0x0008ce91) main_video_pane_g2_ParamLimits

0x1e63,	// (0x0008ce91) main_video_pane_g2

0x1e97,	// (0x0008cec5) main_video_pane_g3_ParamLimits

0x1e97,	// (0x0008cec5) main_video_pane_g3

0x1ec5,	// (0x0008cef3) main_video_pane_g4_ParamLimits

0x1ec5,	// (0x0008cef3) main_video_pane_g4

0x1ef3,	// (0x0008cf21) main_video_pane_g5_ParamLimits

0x1ef3,	// (0x0008cf21) main_video_pane_g5

0xa9c1,	// (0x000959ef) main_video_pane_g6_ParamLimits

0xa9c1,	// (0x000959ef) main_video_pane_g6

0x0006,

0xf220,	// (0x0009a24e) main_video_pane_g_ParamLimits

0xf220,	// (0x0009a24e) main_video_pane_g

0x1f1c,	// (0x0008cf4a) main_video_pane_t1_ParamLimits

0x1f1c,	// (0x0008cf4a) main_video_pane_t1

0xa9db,	// (0x00095a09) cams_zoom_pane_g1

0xa9e4,	// (0x00095a12) cams_zoom_pane_g2

0xa9ed,	// (0x00095a1b) cams_zoom_pane_g3

0xa9f6,	// (0x00095a24) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x0009a25d) cams_zoom_pane_g

0x1f79,	// (0x0008cfa7) grid_cams_pane

0x1f93,	// (0x0008cfc1) linegrid_cams_pane

0x1fa6,	// (0x0008cfd4) cell_cams_pane_ParamLimits

0x1fa6,	// (0x0008cfd4) cell_cams_pane

0xa9ff,	// (0x00095a2d) cams_burst_image_pane

0xaa07,	// (0x00095a35) cell_cams_pane_g1

0xa48c,	// (0x000954ba) grid_highlight_pane_cp03

0xa80d,	// (0x0009583b) mp_bg_pane_g1

0xa48c,	// (0x000954ba) bg_list_pane_cp03

0xc772,	// (0x000977a0) bg_mp_pane

0xc77a,	// (0x000977a8) grid_mp_pane

0xc782,	// (0x000977b0) media_player_g1

0xc78a,	// (0x000977b8) media_player_t1

0xc798,	// (0x000977c6) media_player_t2

0xc7a6,	// (0x000977d4) media_player_t3

0xc7b4,	// (0x000977e2) media_player_t4

0xc7c2,	// (0x000977f0) media_player_t5

0xc7d0,	// (0x000977fe) media_player_t6

0xc7de,	// (0x0009780c) media_player_t7

0x0006,

0xf5de,	// (0x0009a60c) media_player_t

0xc7ec,	// (0x0009781a) wait_bar_pane_cp02

0xf5c3,	// (0x0009a5f1) main_usb_pane_t

0x3f97,	// (0x0008efc5) cell_mp_pane

0xa80d,	// (0x0009583b) cell_mp_pane_g1

0xa48c,	// (0x000954ba) grid_highlight_pane_cp06

0xaa0f,	// (0x00095a3d) grid_skin_colour_pane

0xaa17,	// (0x00095a45) list_highlight_pane_cp03

0x1fde,	// (0x0008d00c) skin_g1

0xaa1f,	// (0x00095a4d) skin_t1

0xaa2e,	// (0x00095a5c) skin_t2

0x0001,

0xf264,	// (0x0009a292) skin_t

0x1fe6,	// (0x0008d014) cell_skin_colour_pane_ParamLimits

0x1fe6,	// (0x0008d014) cell_skin_colour_pane

0xaa3c,	// (0x00095a6a) cell_skin_colour_pane_g1

0x205f,	// (0x0008d08d) call_video_g1_ParamLimits

0x205f,	// (0x0008d08d) call_video_g1

0x207b,	// (0x0008d0a9) call_video_g2_ParamLimits

0x207b,	// (0x0008d0a9) call_video_g2

0x0001,

0xf269,	// (0x0009a297) call_video_g_ParamLimits

0xf269,	// (0x0009a297) call_video_g

0x20cd,	// (0x0008d0fb) call_video_uplink_pane_cp1_ParamLimits

0x20cd,	// (0x0008d0fb) call_video_uplink_pane_cp1

0xaa4e,	// (0x00095a7c) call_video_uplink_pane_cp2

0x216c,	// (0x0008d19a) video_down_crop_pane_ParamLimits

0x216c,	// (0x0008d19a) video_down_crop_pane

0x2255,	// (0x0008d283) video_down_pane_ParamLimits

0x2255,	// (0x0008d283) video_down_pane

0xaa56,	// (0x00095a84) video_down_subqcif_pane_ParamLimits

0xaa56,	// (0x00095a84) video_down_subqcif_pane

0xaa6e,	// (0x00095a9c) video_down_subqcif_pane_cp_ParamLimits

0xaa6e,	// (0x00095a9c) video_down_subqcif_pane_cp

0xaa94,	// (0x00095ac2) im_reading_pane_ParamLimits

0xaa94,	// (0x00095ac2) im_reading_pane

0x2363,	// (0x0008d391) im_writing_pane_ParamLimits

0x2363,	// (0x0008d391) im_writing_pane

0x2379,	// (0x0008d3a7) im_reading_pane_t1

0xaaae,	// (0x00095adc) list_im_pane

0xaabf,	// (0x00095aed) scroll_pane_cp07

0x23b3,	// (0x0008d3e1) im_writing_pane_t1_ParamLimits

0x23b3,	// (0x0008d3e1) im_writing_pane_t1

0xaad8,	// (0x00095b06) im_writing_pane_t2_ParamLimits

0xaad8,	// (0x00095b06) im_writing_pane_t2

0x0001,

0xf273,	// (0x0009a2a1) im_writing_pane_t_ParamLimits

0xf273,	// (0x0009a2a1) im_writing_pane_t

0xa48c,	// (0x000954ba) input_focus_pane_cp04

0xa48c,	// (0x000954ba) input_focus_pane_cp05

0x23c8,	// (0x0008d3f6) list_im_single_pane_ParamLimits

0x23c8,	// (0x0008d3f6) list_im_single_pane

0x23dd,	// (0x0008d40b) list_single_im_pane_t1

0x3f57,	// (0x0008ef85) blid_accuracy_pane

0x3f5f,	// (0x0008ef8d) blid_compass_pane

0x3f69,	// (0x0008ef97) main_location_t1

0x3f79,	// (0x0008efa7) main_location_t2

0x3f89,	// (0x0008efb7) main_location_t3

0x0002,

0xf5ed,	// (0x0009a61b) main_location_t

0xa48c,	// (0x000954ba) aid_levels_location

0xa80d,	// (0x0009583b) blid_accuracy_pane_g1

0xa80d,	// (0x0009583b) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x0009a303) blid_accuracy_pane_g

0xab20,	// (0x00095b4e) wml_content_pane

0xab5e,	// (0x00095b8c) wml_button_pane_ParamLimits

0xab5e,	// (0x00095b8c) wml_button_pane

0x23ec,	// (0x0008d41a) wml_list_single_large_pane_ParamLimits

0x23ec,	// (0x0008d41a) wml_list_single_large_pane

0x2401,	// (0x0008d42f) wml_list_single_medium_pane_ParamLimits

0x2401,	// (0x0008d42f) wml_list_single_medium_pane

0x2418,	// (0x0008d446) wml_list_single_small_pane_ParamLimits

0x2418,	// (0x0008d446) wml_list_single_small_pane

0xab72,	// (0x00095ba0) wml_selection_box_pane_ParamLimits

0xab72,	// (0x00095ba0) wml_selection_box_pane

0xab85,	// (0x00095bb3) wml_list_single_pane_t1

0xab94,	// (0x00095bc2) wml_list_single_medium_pane_t1

0xaba3,	// (0x00095bd1) wml_list_single_large_pane_t1

0xabb2,	// (0x00095be0) input_focus_pane_cp02_ParamLimits

0xabb2,	// (0x00095be0) input_focus_pane_cp02

0xabc5,	// (0x00095bf3) wml_selection_box_pane_g1

0xabce,	// (0x00095bfc) wml_selection_box_pane_t1_ParamLimits

0xabce,	// (0x00095bfc) wml_selection_box_pane_t1

0xa6e7,	// (0x00095715) bg_wml_button_pane_ParamLimits

0xa6e7,	// (0x00095715) bg_wml_button_pane

0xabe6,	// (0x00095c14) wml_button_pane_g1

0xabee,	// (0x00095c1c) wml_button_pane_t1

0xabe6,	// (0x00095c14) wml_button_bg_pane_g1

0xabfe,	// (0x00095c2c) wml_button_bg_pane_g2

0xac06,	// (0x00095c34) wml_button_bg_pane_g3

0xac0e,	// (0x00095c3c) wml_button_bg_pane_g4

0xac16,	// (0x00095c44) wml_button_bg_pane_g5

0xac1e,	// (0x00095c4c) wml_button_bg_pane_g6

0xac26,	// (0x00095c54) wml_button_bg_pane_g7

0xac2e,	// (0x00095c5c) wml_button_bg_pane_g8

0xac36,	// (0x00095c64) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x0009a2a6) wml_button_bg_pane_g

0x2431,	// (0x0008d45f) bg_list_pane_cp02

0xac3e,	// (0x00095c6c) mce_header_pane_ParamLimits

0xac3e,	// (0x00095c6c) mce_header_pane

0xac54,	// (0x00095c82) mce_icon_pane

0xac54,	// (0x00095c82) mce_image_pane

0xac5d,	// (0x00095c8b) mce_text_pane_ParamLimits

0xac5d,	// (0x00095c8b) mce_text_pane

0x2439,	// (0x0008d467) scroll_pane_cp03

0xab56,	// (0x00095b84) scroll_pane_cp04

0xac70,	// (0x00095c9e) scroll_pane_cp05_ParamLimits

0xac70,	// (0x00095c9e) scroll_pane_cp05

0x2443,	// (0x0008d471) mce_header_field_pane_ParamLimits

0x2443,	// (0x0008d471) mce_header_field_pane

0x245a,	// (0x0008d488) mce_header_field_pane_2_ParamLimits

0x245a,	// (0x0008d488) mce_header_field_pane_2

0x2470,	// (0x0008d49e) mce_header_field_pane_3

0x2478,	// (0x0008d4a6) list_single_mce_message_pane_ParamLimits

0x2478,	// (0x0008d4a6) list_single_mce_message_pane

0x248e,	// (0x0008d4bc) list_single_mce_smart_pane_ParamLimits

0x248e,	// (0x0008d4bc) list_single_mce_smart_pane

0xac7c,	// (0x00095caa) input_focus_pane_cp03

0xac85,	// (0x00095cb3) list_header_data_pane

0x24af,	// (0x0008d4dd) mce_header_field_pane_t1

0x24bf,	// (0x0008d4ed) list_single_mce_header_pane_ParamLimits

0x24bf,	// (0x0008d4ed) list_single_mce_header_pane

0xac8d,	// (0x00095cbb) list_single_mce_header_pane_t1

0xac9c,	// (0x00095cca) list_single_mce_message_pane_g1

0xaca4,	// (0x00095cd2) list_single_mce_message_pane_t1

0x24f9,	// (0x0008d527) bg_cale_heading_pane_cp01_ParamLimits

0x24f9,	// (0x0008d527) bg_cale_heading_pane_cp01

0xacb2,	// (0x00095ce0) bg_cale_pane_cp02_ParamLimits

0xacb2,	// (0x00095ce0) bg_cale_pane_cp02

0x2528,	// (0x0008d556) cale_month_corner_pane

0x2547,	// (0x0008d575) cale_month_day_heading_pane_ParamLimits

0x2547,	// (0x0008d575) cale_month_day_heading_pane

0x258e,	// (0x0008d5bc) cale_month_pane_g1_ParamLimits

0x258e,	// (0x0008d5bc) cale_month_pane_g1

0x25b2,	// (0x0008d5e0) cale_month_pane_g2_ParamLimits

0x25b2,	// (0x0008d5e0) cale_month_pane_g2

0x25e2,	// (0x0008d610) cale_month_pane_g3_ParamLimits

0x25e2,	// (0x0008d610) cale_month_pane_g3

0x261e,	// (0x0008d64c) cale_month_pane_g4_ParamLimits

0x261e,	// (0x0008d64c) cale_month_pane_g4

0x265a,	// (0x0008d688) cale_month_pane_g5_ParamLimits

0x265a,	// (0x0008d688) cale_month_pane_g5

0x26a2,	// (0x0008d6d0) cale_month_pane_g6_ParamLimits

0x26a2,	// (0x0008d6d0) cale_month_pane_g6

0x26ee,	// (0x0008d71c) cale_month_pane_g7_ParamLimits

0x26ee,	// (0x0008d71c) cale_month_pane_g7

0x273e,	// (0x0008d76c) cale_month_pane_g8_ParamLimits

0x273e,	// (0x0008d76c) cale_month_pane_g8

0x2792,	// (0x0008d7c0) cale_month_pane_g9_ParamLimits

0x2792,	// (0x0008d7c0) cale_month_pane_g9

0x27e4,	// (0x0008d812) cale_month_pane_g10_ParamLimits

0x27e4,	// (0x0008d812) cale_month_pane_g10

0x2836,	// (0x0008d864) cale_month_pane_g11_ParamLimits

0x2836,	// (0x0008d864) cale_month_pane_g11

0x2888,	// (0x0008d8b6) cale_month_pane_g12_ParamLimits

0x2888,	// (0x0008d8b6) cale_month_pane_g12

0x28da,	// (0x0008d908) cale_month_pane_g13_ParamLimits

0x28da,	// (0x0008d908) cale_month_pane_g13

0x000c,

0xf28b,	// (0x0009a2b9) cale_month_pane_g_ParamLimits

0xf28b,	// (0x0009a2b9) cale_month_pane_g

0x292c,	// (0x0008d95a) cale_month_week_pane

0x2950,	// (0x0008d97e) grid_cale_month_pane_ParamLimits

0x2950,	// (0x0008d97e) grid_cale_month_pane

0x298e,	// (0x0008d9bc) cale_month_day_heading_pane_t1

0x2a14,	// (0x0008da42) cale_month_day_heading_pane_t2

0x2aa5,	// (0x0008dad3) cale_month_day_heading_pane_t3

0x2b36,	// (0x0008db64) cale_month_day_heading_pane_t4

0x2bcf,	// (0x0008dbfd) cale_month_day_heading_pane_t5

0x2c70,	// (0x0008dc9e) cale_month_day_heading_pane_t6

0x2d11,	// (0x0008dd3f) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x0009a2d4) cale_month_day_heading_pane_t

0xa952,	// (0x00095980) bg_cale_side_pane_cp01

0x2dba,	// (0x0008dde8) cale_month_week_pane_t1

0x2dd3,	// (0x0008de01) cale_month_week_pane_t2

0x2dec,	// (0x0008de1a) cale_month_week_pane_t3

0x2e05,	// (0x0008de33) cale_month_week_pane_t4

0x2e1e,	// (0x0008de4c) cale_month_week_pane_t5

0x2e37,	// (0x0008de65) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x0009a2e3) cale_month_week_pane_t

0x2e50,	// (0x0008de7e) cell_cale_month_pane_ParamLimits

0x2e50,	// (0x0008de7e) cell_cale_month_pane

0x9ad0,	// (0x00094afe) cell_cale_month_pane_g1

0x2f7e,	// (0x0008dfac) cell_cale_month_pane_t1_ParamLimits

0x2f7e,	// (0x0008dfac) cell_cale_month_pane_t1

0xa960,	// (0x0009598e) grid_highlight_pane_cp08

0xa80d,	// (0x0009583b) main_smil_g1

0x2faa,	// (0x0008dfd8) smil_status_pane

0xacf1,	// (0x00095d1f) smil_text_pane

0xc652,	// (0x00097680) bg_popup_call3_rect_pane_g8

0xc65a,	// (0x00097688) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x0009a59c) bg_popup_call3_rect_pane_g

0xc8e1,	// (0x0009790f) smil_status_volume_pane_g1

0xacfb,	// (0x00095d29) smil_status_pane_t1

0x9c3c,	// (0x00094c6a) volume_smil_pane

0xad12,	// (0x00095d40) list_smil_text_pane

0x2fbf,	// (0x0008dfed) scroll_pane_cp011

0x2fca,	// (0x0008dff8) smil_text_list_pane_t1_ParamLimits

0x2fca,	// (0x0008dff8) smil_text_list_pane_t1

0x9af6,	// (0x00094b24) aid_volume_smil_ParamLimits

0x9af6,	// (0x00094b24) aid_volume_smil

0xa80d,	// (0x0009583b) smil_volume_pane_g1

0xa80d,	// (0x0009583b) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x0009a303) smil_volume_pane_g

0x162f,	// (0x0008c65d) listscroll_cale_day_pane

0xad1c,	// (0x00095d4a) bg_cale_pane

0xad34,	// (0x00095d62) list_cale_pane

0xad57,	// (0x00095d85) scroll_pane_cp09

0xad68,	// (0x00095d96) cale_bg_pane_g1

0xad70,	// (0x00095d9e) cale_bg_pane_g2

0xad78,	// (0x00095da6) cale_bg_pane_g3

0xad80,	// (0x00095dae) cale_bg_pane_g4

0xad88,	// (0x00095db6) cale_bg_pane_g5

0xad90,	// (0x00095dbe) cale_bg_pane_g6

0xad98,	// (0x00095dc6) cale_bg_pane_g7

0xada0,	// (0x00095dce) cale_bg_pane_g8

0xada8,	// (0x00095dd6) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x0009a308) cale_bg_pane_g

0x3016,	// (0x0008e044) list_cale_time_pane_ParamLimits

0x3016,	// (0x0008e044) list_cale_time_pane

0xadb0,	// (0x00095dde) list_cale_time_pane_g1_ParamLimits

0xadb0,	// (0x00095dde) list_cale_time_pane_g1

0xadbc,	// (0x00095dea) list_cale_time_pane_g2_ParamLimits

0xadbc,	// (0x00095dea) list_cale_time_pane_g2

0x302c,	// (0x0008e05a) list_cale_time_pane_g3_ParamLimits

0x302c,	// (0x0008e05a) list_cale_time_pane_g3

0x303a,	// (0x0008e068) list_cale_time_pane_g4_ParamLimits

0x303a,	// (0x0008e068) list_cale_time_pane_g4

0x3048,	// (0x0008e076) list_cale_time_pane_g5_ParamLimits

0x3048,	// (0x0008e076) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x0009a31b) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x0009a31b) list_cale_time_pane_g

0xadd6,	// (0x00095e04) list_cale_time_pane_t1_ParamLimits

0xadd6,	// (0x00095e04) list_cale_time_pane_t1

0xadfe,	// (0x00095e2c) list_cale_time_pane_t2_ParamLimits

0xadfe,	// (0x00095e2c) list_cale_time_pane_t2

0x32f9,	// (0x0008e327) aid_blid_cardinal_pane

0x3337,	// (0x0008e365) compass_pane_t4

0xae26,	// (0x00095e54) list_cale_time_pane_t4_ParamLimits

0xae26,	// (0x00095e54) list_cale_time_pane_t4

0x3345,	// (0x0008e373) compass_pane_t5

0x3353,	// (0x0008e381) compass_pane_t6

0x3361,	// (0x0008e38f) compass_pane_t7

0xb2ca,	// (0x000962f8) navi_pane_cc_t1

0xb4a7,	// (0x000964d5) aid_phob_thumbnail_center_pane

0x396d,	// (0x0008e99b) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x0009a328) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x0009a328) list_cale_time_pane_t

0x9740,	// (0x0009476e) bg_popup_window_pane_cp02_ParamLimits

0x9740,	// (0x0009476e) bg_popup_window_pane_cp02

0xae4e,	// (0x00095e7c) heading_pane_cp01_ParamLimits

0xae4e,	// (0x00095e7c) heading_pane_cp01

0xae5a,	// (0x00095e88) loc_req_pane_ParamLimits

0xae5a,	// (0x00095e88) loc_req_pane

0xae6a,	// (0x00095e98) loc_type_pane_ParamLimits

0xae6a,	// (0x00095e98) loc_type_pane

0xae7c,	// (0x00095eaa) loc_type_pane_t1_ParamLimits

0xae7c,	// (0x00095eaa) loc_type_pane_t1

0xae8e,	// (0x00095ebc) loc_type_pane_t2_ParamLimits

0xae8e,	// (0x00095ebc) loc_type_pane_t2

0xaea0,	// (0x00095ece) loc_type_pane_t3_ParamLimits

0xaea0,	// (0x00095ece) loc_type_pane_t3

0x0002,

0xf301,	// (0x0009a32f) loc_type_pane_t_ParamLimits

0xf301,	// (0x0009a32f) loc_type_pane_t

0xaeb2,	// (0x00095ee0) list_loc_req_pane

0xaebc,	// (0x00095eea) scroll_pane_cp012

0x3056,	// (0x0008e084) list_single_loc_request_popup_menu_pane_ParamLimits

0x3056,	// (0x0008e084) list_single_loc_request_popup_menu_pane

0xaec7,	// (0x00095ef5) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xaec7,	// (0x00095ef5) list_single_loc_request_popup_menu_pane_g1

0xaed3,	// (0x00095f01) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xaed3,	// (0x00095f01) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x0009a336) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x0009a336) list_single_loc_request_popup_menu_pane_g

0xaedf,	// (0x00095f0d) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xaedf,	// (0x00095f0d) list_single_loc_request_popup_menu_pane_t1

0xa6e7,	// (0x00095715) bg_popup_window_pane_cp03_ParamLimits

0xa6e7,	// (0x00095715) bg_popup_window_pane_cp03

0xaef5,	// (0x00095f23) heading_loc_req_pane_ParamLimits

0xaef5,	// (0x00095f23) heading_loc_req_pane

0x3063,	// (0x0008e091) popup_dyc_status_message_window_g1_ParamLimits

0x3063,	// (0x0008e091) popup_dyc_status_message_window_g1

0x3077,	// (0x0008e0a5) popup_dyc_status_message_window_t1_ParamLimits

0x3077,	// (0x0008e0a5) popup_dyc_status_message_window_t1

0x308c,	// (0x0008e0ba) popup_dyc_status_message_window_t2_ParamLimits

0x308c,	// (0x0008e0ba) popup_dyc_status_message_window_t2

0x30a1,	// (0x0008e0cf) popup_dyc_status_message_window_t3_ParamLimits

0x30a1,	// (0x0008e0cf) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x0009a33b) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x0009a33b) popup_dyc_status_message_window_t

0xa48c,	// (0x000954ba) bg_heading_pane_cp01

0xaf01,	// (0x00095f2f) heading_loc_req_pane_g1

0xaf09,	// (0x00095f37) heading_loc_req_pane_g2

0xaf11,	// (0x00095f3f) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x0009a342) heading_loc_req_pane_g

0xaf19,	// (0x00095f47) heading_loc_req_pane_t1

0xaf28,	// (0x00095f56) bg_popup_sub_pane_cp01_ParamLimits

0xaf28,	// (0x00095f56) bg_popup_sub_pane_cp01

0xaf36,	// (0x00095f64) popup_cale_events_window_g1_ParamLimits

0xaf36,	// (0x00095f64) popup_cale_events_window_g1

0xaf56,	// (0x00095f84) popup_cale_events_window_g2_ParamLimits

0xaf56,	// (0x00095f84) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x0009a376) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x0009a376) popup_cale_events_window_g

0xaf76,	// (0x00095fa4) popup_cale_events_window_t1_ParamLimits

0xaf76,	// (0x00095fa4) popup_cale_events_window_t1

0xaf88,	// (0x00095fb6) popup_cale_events_window_t2_ParamLimits

0xaf88,	// (0x00095fb6) popup_cale_events_window_t2

0xafc6,	// (0x00095ff4) popup_cale_events_window_t3_ParamLimits

0xafc6,	// (0x00095ff4) popup_cale_events_window_t3

0xb000,	// (0x0009602e) popup_cale_events_window_t4_ParamLimits

0xb000,	// (0x0009602e) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x0009a37b) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x0009a37b) popup_cale_events_window_t

0x30c9,	// (0x0008e0f7) call_type_pane

0x30d9,	// (0x0008e107) popup_call_status_window_g1

0x30ed,	// (0x0008e11b) popup_call_status_window_g2

0x3101,	// (0x0008e12f) popup_call_status_window_g3

0x0002,

0xf356,	// (0x0009a384) popup_call_status_window_g

0xb036,	// (0x00096064) call_type_pane_g1

0xb03f,	// (0x0009606d) call_type_pane_g2

0x0001,

0xf35d,	// (0x0009a38b) call_type_pane_g

0xa48c,	// (0x000954ba) bg_popup_sub_pane_cp02

0xb048,	// (0x00096076) listscroll_popup_wml_pane

0xb070,	// (0x0009609e) list_wml_pane

0xb07a,	// (0x000960a8) scroll_pane_cp013

0xb085,	// (0x000960b3) list_single_graphic_popup_wml_pane_ParamLimits

0xb085,	// (0x000960b3) list_single_graphic_popup_wml_pane

0xa80d,	// (0x0009583b) list_single_graphic_popup_wml_pane_g1

0xb099,	// (0x000960c7) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x0009a390) list_single_graphic_popup_wml_pane_g

0xb0a1,	// (0x000960cf) list_single_graphic_popup_wml_pane_t1

0xb0b7,	// (0x000960e5) aid_call_pane

0xa6df,	// (0x0009570d) popup_clock_analogue_window_g1

0xa6df,	// (0x0009570d) popup_clock_analogue_window_g2

0x9b18,	// (0x00094b46) popup_clock_analogue_window_g3

0x9b18,	// (0x00094b46) popup_clock_analogue_window_g4

0xa80d,	// (0x0009583b) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x0009a395) popup_clock_analogue_window_g

0x9b20,	// (0x00094b4e) popup_clock_analogue_window_t1

0x9b2e,	// (0x00094b5c) clock_digital_number_pane_ParamLimits

0x9b2e,	// (0x00094b5c) clock_digital_number_pane

0x9b3a,	// (0x00094b68) clock_digital_number_pane_cp02_ParamLimits

0x9b3a,	// (0x00094b68) clock_digital_number_pane_cp02

0x9b46,	// (0x00094b74) clock_digital_number_pane_cp03_ParamLimits

0x9b46,	// (0x00094b74) clock_digital_number_pane_cp03

0x9b52,	// (0x00094b80) clock_digital_number_pane_cp04_ParamLimits

0x9b52,	// (0x00094b80) clock_digital_number_pane_cp04

0x9b5e,	// (0x00094b8c) clock_digital_separator_pane_ParamLimits

0x9b5e,	// (0x00094b8c) clock_digital_separator_pane

0x9b6a,	// (0x00094b98) popup_clock_digital_window_t1

0xa80d,	// (0x0009583b) clock_digital_number_pane_g1

0xa80d,	// (0x0009583b) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x0009a303) clock_digital_number_pane_g

0xa80d,	// (0x0009583b) clock_digital_separator_pane_g1

0xa80d,	// (0x0009583b) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x0009a303) clock_digital_separator_pane_g

0xa48c,	// (0x000954ba) bg_popup_window_pane_cp04

0xb0bf,	// (0x000960ed) heading_pane_cp03

0xb0c7,	// (0x000960f5) listscroll_popup_gms_pane

0xb0cf,	// (0x000960fd) grid_large_graphic_popup_pane

0xb0d9,	// (0x00096107) listscroll_popup_gms_pane_g1

0xb0e1,	// (0x0009610f) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x0009a3a0) listscroll_popup_gms_pane_g

0xab56,	// (0x00095b84) scroll_pane_cp014

0x3110,	// (0x0008e13e) cell_large_graphic_popup_pane_ParamLimits

0x3110,	// (0x0008e13e) cell_large_graphic_popup_pane

0x3128,	// (0x0008e156) cell_large_graphic_popup_pane_g1_ParamLimits

0x3128,	// (0x0008e156) cell_large_graphic_popup_pane_g1

0xb0e9,	// (0x00096117) cell_large_graphic_popup_pane_g2_ParamLimits

0xb0e9,	// (0x00096117) cell_large_graphic_popup_pane_g2

0xb0f5,	// (0x00096123) cell_large_graphic_popup_pane_g3_ParamLimits

0xb0f5,	// (0x00096123) cell_large_graphic_popup_pane_g3

0xb102,	// (0x00096130) cell_large_graphic_popup_pane_g4_ParamLimits

0xb102,	// (0x00096130) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x0009a3a5) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x0009a3a5) cell_large_graphic_popup_pane_g

0xb112,	// (0x00096140) grid_highlight_pane_cp010

0xa80d,	// (0x0009583b) bg_popup_call_pane_g1

0xb11c,	// (0x0009614a) list_single_graphic_popup_conf_pane_ParamLimits

0xb11c,	// (0x0009614a) list_single_graphic_popup_conf_pane

0xb12f,	// (0x0009615d) list_highlight_pane_cp01

0xb138,	// (0x00096166) list_single_graphic_popup_conf_pane_g1

0xb140,	// (0x0009616e) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x0009a3ae) list_single_graphic_popup_conf_pane_g

0xb148,	// (0x00096176) list_single_graphic_popup_conf_pane_t1

0xb156,	// (0x00096184) linegrid_cams_pane_g1

0x3134,	// (0x0008e162) linegrid_cams_pane_g2

0xa993,	// (0x000959c1) linegrid_cams_pane_g3

0xb15f,	// (0x0009618d) linegrid_cams_pane_g4

0x313d,	// (0x0008e16b) linegrid_cams_pane_g5

0x3146,	// (0x0008e174) linegrid_cams_pane_g6

0xa99c,	// (0x000959ca) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x0009a3b3) linegrid_cams_pane_g

0xb168,	// (0x00096196) popup_clock_analogue_window

0xb168,	// (0x00096196) popup_clock_digital_window

0xa48c,	// (0x000954ba) popup_phob_thumbnail_window

0xa80d,	// (0x0009583b) call_video_uplink_pane_g1

0xb171,	// (0x0009619f) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x0009a3c2) call_video_uplink_pane_g

0xb179,	// (0x000961a7) video_uplink_pane

0xb181,	// (0x000961af) mce_image_pane_g1

0x3151,	// (0x0008e17f) mce_image_pane_g2

0x3159,	// (0x0008e187) mce_image_pane_g3

0x3161,	// (0x0008e18f) mce_image_pane_g4

0x316b,	// (0x0008e199) mce_image_pane_g5

0x0004,

0xf399,	// (0x0009a3c7) mce_image_pane_g

0xb18b,	// (0x000961b9) control_top_pane_stacon_cp01_ParamLimits

0xb18b,	// (0x000961b9) control_top_pane_stacon_cp01

0xb19f,	// (0x000961cd) uni_indicator_pane_stacon_cp01_ParamLimits

0xb19f,	// (0x000961cd) uni_indicator_pane_stacon_cp01

0xb1b0,	// (0x000961de) bg_popup_sub_pane_cp03

0x3173,	// (0x0008e1a1) chi_dic_find_pane

0x317b,	// (0x0008e1a9) listscroll_chi_dic_pane

0x3184,	// (0x0008e1b2) main_pane_chidic_g1

0x3197,	// (0x0008e1c5) chi_dic_find_pane_t1

0xb1ba,	// (0x000961e8) find_chidic_pane

0xb1c3,	// (0x000961f1) chi_dic_list_pane_ParamLimits

0xb1c3,	// (0x000961f1) chi_dic_list_pane

0xb1d4,	// (0x00096202) scroll_pane_cp020

0x31a5,	// (0x0008e1d3) find_chidic_pane_t1

0xa48c,	// (0x000954ba) input_focus_pane_cp06

0x31b4,	// (0x0008e1e2) list_chi_dic_pane_ParamLimits

0x31b4,	// (0x0008e1e2) list_chi_dic_pane

0x31c6,	// (0x0008e1f4) list_chi_dic_pane_t1_ParamLimits

0x31c6,	// (0x0008e1f4) list_chi_dic_pane_t1

0xa48c,	// (0x000954ba) list_highlight_pane_cp020

0xb1dc,	// (0x0009620a) bg_cale_heading_pane_g1

0x31d9,	// (0x0008e207) bg_cale_heading_pane_g2

0x31e1,	// (0x0008e20f) bg_cale_heading_pane_g3

0x31e9,	// (0x0008e217) bg_cale_heading_pane_g4

0x31f3,	// (0x0008e221) bg_cale_heading_pane_g5

0x31fd,	// (0x0008e22b) bg_cale_heading_pane_g6

0x3205,	// (0x0008e233) bg_cale_heading_pane_g7

0x320d,	// (0x0008e23b) bg_cale_heading_pane_g8

0x3217,	// (0x0008e245) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x0009a3d2) bg_cale_heading_pane_g

0xb1dc,	// (0x0009620a) bg_cale_side_pane_g1

0x3221,	// (0x0008e24f) bg_cale_side_pane_g2

0x3229,	// (0x0008e257) bg_cale_side_pane_g3

0x3231,	// (0x0008e25f) bg_cale_side_pane_g4

0x3239,	// (0x0008e267) bg_cale_side_pane_g5

0x3241,	// (0x0008e26f) bg_cale_side_pane_g6

0x3249,	// (0x0008e277) bg_cale_side_pane_g7

0x3251,	// (0x0008e27f) bg_cale_side_pane_g8

0x3259,	// (0x0008e287) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x0009a3e5) bg_cale_side_pane_g

0x3261,	// (0x0008e28f) popup_call_status_window_ParamLimits

0x3261,	// (0x0008e28f) popup_call_status_window

0xb1e4,	// (0x00096212) stacon_top_pane

0xb1ec,	// (0x0009621a) status_pane_ParamLimits

0xb1ec,	// (0x0009621a) status_pane

0xb201,	// (0x0009622f) status_small_pane

0xb209,	// (0x00096237) control_pane

0xa48c,	// (0x000954ba) stacon_bottom_pane

0xb211,	// (0x0009623f) list_single_mce_smart_pane_t1_ParamLimits

0xb211,	// (0x0009623f) list_single_mce_smart_pane_t1

0xb224,	// (0x00096252) list_single_mce_smart_pane_t2_ParamLimits

0xb224,	// (0x00096252) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x0009a3f8) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x0009a3f8) list_single_mce_smart_pane_t

0x32a8,	// (0x0008e2d6) compass_pane

0x32b1,	// (0x0008e2df) main_location2_pane_t1

0x32c3,	// (0x0008e2f1) main_location2_pane_t2

0x32d5,	// (0x0008e303) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x0009a3fd) main_location2_pane_t

0xb243,	// (0x00096271) compass_pane_g1_ParamLimits

0xb243,	// (0x00096271) compass_pane_g1

0x3319,	// (0x0008e347) compass_pane_t1

0x3328,	// (0x0008e356) compass_pane_t2

0x0005,

0xf3d8,	// (0x0009a406) compass_pane_t

0x336f,	// (0x0008e39d) text_secondary_cp61

0xb2c1,	// (0x000962ef) navi_pane_cams_g5

0xb33d,	// (0x0009636b) navi_pane_im_t1

0xb34b,	// (0x00096379) navi_pane_mp_g1_ParamLimits

0xb34b,	// (0x00096379) navi_pane_mp_g1

0xb35f,	// (0x0009638d) navi_pane_mp_g2_ParamLimits

0xb35f,	// (0x0009638d) navi_pane_mp_g2

0xb36b,	// (0x00096399) navi_pane_mp_g3_ParamLimits

0xb36b,	// (0x00096399) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x0009a41a) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x0009a41a) navi_pane_mp_g

0xb377,	// (0x000963a5) navi_pane_mp_t1

0xb385,	// (0x000963b3) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x0009a421) navi_pane_mp_t

0xb3f0,	// (0x0009641e) navi_pane_vt_g1

0xb377,	// (0x000963a5) navi_pane_vt_t1

0xb3f8,	// (0x00096426) navi_slider_pane

0xa9ad,	// (0x000959db) zooming_pane

0xb408,	// (0x00096436) navi_slider_pane_g1

0x9b87,	// (0x00094bb5) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x0009a428) navi_slider_pane_g

0xb42c,	// (0x0009645a) aid_levels_zoom

0xb434,	// (0x00096462) zooming_pane_g1

0xb43c,	// (0x0009646a) zooming_pane_g2

0xb43c,	// (0x0009646a) zooming_pane_g3

0x0002,

0xf409,	// (0x0009a437) zooming_pane_g

0xb444,	// (0x00096472) level_10_zoom

0xb44d,	// (0x0009647b) level_11_zoom

0xb456,	// (0x00096484) level_1_zoom

0xb45f,	// (0x0009648d) level_2_zoom

0xb468,	// (0x00096496) level_3_zoom

0xb471,	// (0x0009649f) level_4_zoom

0xb47a,	// (0x000964a8) level_5_zoom

0xb483,	// (0x000964b1) level_6_zoom

0xb48c,	// (0x000964ba) level_7_zoom

0xb495,	// (0x000964c3) level_8_zoom

0xb49e,	// (0x000964cc) level_9_zoom

0xb4af,	// (0x000964dd) popup_phob_thumbnail_window_g1

0xb4b7,	// (0x000964e5) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x0009a43e) popup_phob_thumbnail_window_g

0xc7f4,	// (0x00097822) level_1_location

0xc7fc,	// (0x0009782a) level_2_location

0xc804,	// (0x00097832) level_3_location

0xc80c,	// (0x0009783a) level_4_location

0xa9ad,	// (0x000959db) level_5_location

0x33c0,	// (0x0008e3ee) mce_icon_pane_g1

0x33ca,	// (0x0008e3f8) mce_icon_pane_g2

0x0001,

0xf415,	// (0x0009a443) mce_icon_pane_g

0x33d2,	// (0x0008e400) main_mup_pane_g1_ParamLimits

0x33d2,	// (0x0008e400) main_mup_pane_g1

0x33e8,	// (0x0008e416) main_mup_pane_g2_ParamLimits

0x33e8,	// (0x0008e416) main_mup_pane_g2

0x33fa,	// (0x0008e428) main_mup_pane_g3_ParamLimits

0x33fa,	// (0x0008e428) main_mup_pane_g3

0x340c,	// (0x0008e43a) main_mup_pane_g4_ParamLimits

0x340c,	// (0x0008e43a) main_mup_pane_g4

0x3424,	// (0x0008e452) main_mup_pane_g5_ParamLimits

0x3424,	// (0x0008e452) main_mup_pane_g5

0x3440,	// (0x0008e46e) main_mup_pane_g6_ParamLimits

0x3440,	// (0x0008e46e) main_mup_pane_g6

0x3458,	// (0x0008e486) main_mup_pane_g7_ParamLimits

0x3458,	// (0x0008e486) main_mup_pane_g7

0x3470,	// (0x0008e49e) main_mup_pane_g8_ParamLimits

0x3470,	// (0x0008e49e) main_mup_pane_g8

0x3488,	// (0x0008e4b6) main_mup_pane_g9_ParamLimits

0x3488,	// (0x0008e4b6) main_mup_pane_g9

0x34a2,	// (0x0008e4d0) main_mup_pane_g10_ParamLimits

0x34a2,	// (0x0008e4d0) main_mup_pane_g10

0x34bc,	// (0x0008e4ea) main_mup_pane_g11_ParamLimits

0x34bc,	// (0x0008e4ea) main_mup_pane_g11

0x34d0,	// (0x0008e4fe) main_mup_pane_g12_ParamLimits

0x34d0,	// (0x0008e4fe) main_mup_pane_g12

0x34e6,	// (0x0008e514) main_mup_pane_g13_ParamLimits

0x34e6,	// (0x0008e514) main_mup_pane_g13

0x000c,

0xf41a,	// (0x0009a448) main_mup_pane_g_ParamLimits

0xf41a,	// (0x0009a448) main_mup_pane_g

0x34fa,	// (0x0008e528) main_mup_pane_t1_ParamLimits

0x34fa,	// (0x0008e528) main_mup_pane_t1

0x3514,	// (0x0008e542) main_mup_pane_t2_ParamLimits

0x3514,	// (0x0008e542) main_mup_pane_t2

0x352c,	// (0x0008e55a) main_mup_pane_t3_ParamLimits

0x352c,	// (0x0008e55a) main_mup_pane_t3

0x3544,	// (0x0008e572) main_mup_pane_t4_ParamLimits

0x3544,	// (0x0008e572) main_mup_pane_t4

0x3562,	// (0x0008e590) main_mup_pane_t5_ParamLimits

0x3562,	// (0x0008e590) main_mup_pane_t5

0x3577,	// (0x0008e5a5) main_mup_pane_t6_ParamLimits

0x3577,	// (0x0008e5a5) main_mup_pane_t6

0x0005,

0xf435,	// (0x0009a463) main_mup_pane_t_ParamLimits

0xf435,	// (0x0009a463) main_mup_pane_t

0x3589,	// (0x0008e5b7) mup_progress_pane_ParamLimits

0x3589,	// (0x0008e5b7) mup_progress_pane

0x3595,	// (0x0008e5c3) mup_visualizer_pane_ParamLimits

0x3595,	// (0x0008e5c3) mup_visualizer_pane

0x35c9,	// (0x0008e5f7) mup_volume_pane_ParamLimits

0x35c9,	// (0x0008e5f7) mup_volume_pane

0xb4bf,	// (0x000964ed) mup_visualizer_pane_g1_ParamLimits

0xb4bf,	// (0x000964ed) mup_visualizer_pane_g1

0xb4bf,	// (0x000964ed) mup_visualizer_pane_g2_ParamLimits

0xb4bf,	// (0x000964ed) mup_visualizer_pane_g2

0xb243,	// (0x00096271) mup_visualizer_pane_g3_ParamLimits

0xb243,	// (0x00096271) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x0009a470) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x0009a470) mup_visualizer_pane_g

0xa80d,	// (0x0009583b) mup_volume_pane_g1

0xb4d5,	// (0x00096503) mup_volume_pane_g2

0x0001,

0xf449,	// (0x0009a477) mup_volume_pane_g

0xa80d,	// (0x0009583b) mup_progress_pane_g1

0xb4de,	// (0x0009650c) mup_progress_pane_g2

0xb4e7,	// (0x00096515) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x0009a47c) mup_progress_pane_g

0xa48c,	// (0x000954ba) bg_popup_window_pane_cp05

0xb4f0,	// (0x0009651e) heading_pane_cp02_ParamLimits

0xb4f0,	// (0x0009651e) heading_pane_cp02

0xb50a,	// (0x00096538) list_popup_blid_pane

0xb512,	// (0x00096540) list_blid_sat_info_pane_ParamLimits

0xb512,	// (0x00096540) list_blid_sat_info_pane

0xb525,	// (0x00096553) list_blid_sat_info_pane_g1

0xb52d,	// (0x0009655b) list_blid_sat_info_pane_t1

0x36df,	// (0x0008e70d) mup_equalizer_pane_ParamLimits

0x36df,	// (0x0008e70d) mup_equalizer_pane

0x36f8,	// (0x0008e726) mup_equalizer_pane_cp1_ParamLimits

0x36f8,	// (0x0008e726) mup_equalizer_pane_cp1

0x3715,	// (0x0008e743) mup_equalizer_pane_cp2_ParamLimits

0x3715,	// (0x0008e743) mup_equalizer_pane_cp2

0x3732,	// (0x0008e760) mup_equalizer_pane_cp3_ParamLimits

0x3732,	// (0x0008e760) mup_equalizer_pane_cp3

0x3753,	// (0x0008e781) mup_equalizer_pane_cp4_ParamLimits

0x3753,	// (0x0008e781) mup_equalizer_pane_cp4

0x3774,	// (0x0008e7a2) mup_equalizer_pane_cp5

0x3788,	// (0x0008e7b6) mup_equalizer_pane_cp6

0x379c,	// (0x0008e7ca) mup_equalizer_pane_cp7

0xc6d2,	// (0x00097700) bg_popup_call_poc_act_pane_g9

0xc6da,	// (0x00097708) bg_popup_call_poc_act_pane_g10

0xc6e2,	// (0x00097710) bg_popup_call_poc_act_pane_g11

0x000a,

0xa6e7,	// (0x00095715) mup_scale_pane

0xa80d,	// (0x0009583b) mup_scale_pane_g1

0xb53b,	// (0x00096569) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x0009a498) mup_scale_pane_g

0xb55f,	// (0x0009658d) msg_data_pane

0xb567,	// (0x00096595) scroll_pane_cp017

0x02ec,	// (0x0008b31a) bg_list_pane_cp04_ParamLimits

0x02ec,	// (0x0008b31a) bg_list_pane_cp04

0xb56f,	// (0x0009659d) msg_data_pane_g1

0x37ca,	// (0x0008e7f8) msg_data_pane_g2

0x37d2,	// (0x0008e800) msg_data_pane_g3

0x37da,	// (0x0008e808) msg_data_pane_g4

0x37e2,	// (0x0008e810) msg_data_pane_g5

0x37ea,	// (0x0008e818) msg_data_pane_g6

0x37f2,	// (0x0008e820) msg_data_pane_g7

0x0006,

0xf479,	// (0x0009a4a7) msg_data_pane_g

0x0304,	// (0x0008b332) msg_text_pane_ParamLimits

0x0304,	// (0x0008b332) msg_text_pane

0x37fa,	// (0x0008e828) qrid_highlight_pane_cp011_ParamLimits

0x37fa,	// (0x0008e828) qrid_highlight_pane_cp011

0xa48c,	// (0x000954ba) msg_body_pane

0xa48c,	// (0x000954ba) msg_header_pane

0xb580,	// (0x000965ae) input_focus_pane_cp07

0x3810,	// (0x0008e83e) msg_header_pane_t1_ParamLimits

0x3810,	// (0x0008e83e) msg_header_pane_t1

0x3822,	// (0x0008e850) msg_header_pane_t2_ParamLimits

0x3822,	// (0x0008e850) msg_header_pane_t2

0x0001,

0xf48d,	// (0x0009a4bb) msg_header_pane_t_ParamLimits

0xf48d,	// (0x0009a4bb) msg_header_pane_t

0xb595,	// (0x000965c3) msg_body_pane_g1

0x3834,	// (0x0008e862) msg_body_pane_t1_ParamLimits

0x3834,	// (0x0008e862) msg_body_pane_t1

0x3865,	// (0x0008e893) msg_body_pane_t2_ParamLimits

0x3865,	// (0x0008e893) msg_body_pane_t2

0x3877,	// (0x0008e8a5) msg_body_pane_t3_ParamLimits

0x3877,	// (0x0008e8a5) msg_body_pane_t3

0x0002,

0xf492,	// (0x0009a4c0) msg_body_pane_t_ParamLimits

0xf492,	// (0x0009a4c0) msg_body_pane_t

0x38c3,	// (0x0008e8f1) main_viewer_pane_g1_ParamLimits

0x38c3,	// (0x0008e8f1) main_viewer_pane_g1

0x38d1,	// (0x0008e8ff) main_viewer_pane_g2_ParamLimits

0x38d1,	// (0x0008e8ff) main_viewer_pane_g2

0x38df,	// (0x0008e90d) main_viewer_pane_g3_ParamLimits

0x38df,	// (0x0008e90d) main_viewer_pane_g3

0x38ee,	// (0x0008e91c) main_viewer_pane_g4_ParamLimits

0x38ee,	// (0x0008e91c) main_viewer_pane_g4

0x9bb1,	// (0x00094bdf) main_viewer_pane_g5_ParamLimits

0x9bb1,	// (0x00094bdf) main_viewer_pane_g5

0x9bb1,	// (0x00094bdf) main_viewer_pane_g7_ParamLimits

0x9bb1,	// (0x00094bdf) main_viewer_pane_g7

0x9bc3,	// (0x00094bf1) main_viewer_pane_g8_ParamLimits

0x9bc3,	// (0x00094bf1) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x0009a4d0) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x0009a4d0) main_viewer_pane_g

0xb59d,	// (0x000965cb) viewer_content_pane_ParamLimits

0xb59d,	// (0x000965cb) viewer_content_pane

0x392a,	// (0x0008e958) main_postcard_pane_g1_ParamLimits

0x392a,	// (0x0008e958) main_postcard_pane_g1

0x3940,	// (0x0008e96e) main_postcard_pane_g2_ParamLimits

0x3940,	// (0x0008e96e) main_postcard_pane_g2

0x3956,	// (0x0008e984) main_postcard_pane_g3_ParamLimits

0x3956,	// (0x0008e984) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x0009a4e1) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x0009a4e1) main_postcard_pane_g

0x396d,	// (0x0008e99b) main_postcard_pane_g4

0xc8f4,	// (0x00097922) smil_status_volume_pane_g2

0x39b0,	// (0x0008e9de) postcard_pane_ParamLimits

0x39b0,	// (0x0008e9de) postcard_pane

0xb5ab,	// (0x000965d9) postcard_pane_g1_ParamLimits

0xb5ab,	// (0x000965d9) postcard_pane_g1

0x39f2,	// (0x0008ea20) postcard_pane_g2_ParamLimits

0x39f2,	// (0x0008ea20) postcard_pane_g2

0x39fe,	// (0x0008ea2c) postcard_pane_g3_ParamLimits

0x39fe,	// (0x0008ea2c) postcard_pane_g3

0xb5b9,	// (0x000965e7) postcard_pane_g4_ParamLimits

0xb5b9,	// (0x000965e7) postcard_pane_g4

0x3a0a,	// (0x0008ea38) postcard_pane_g5_ParamLimits

0x3a0a,	// (0x0008ea38) postcard_pane_g5

0x3a1f,	// (0x0008ea4d) postcard_pane_g6_ParamLimits

0x3a1f,	// (0x0008ea4d) postcard_pane_g6

0xb5ab,	// (0x000965d9) postcard_pane_g7_ParamLimits

0xb5ab,	// (0x000965d9) postcard_pane_g7

0x0006,

0xf4c0,	// (0x0009a4ee) postcard_pane_g_ParamLimits

0xf4c0,	// (0x0009a4ee) postcard_pane_g

0x3a33,	// (0x0008ea61) main_mp2_pane_g1_ParamLimits

0x3a33,	// (0x0008ea61) main_mp2_pane_g1

0x3a3f,	// (0x0008ea6d) main_mp2_pane_g2_ParamLimits

0x3a3f,	// (0x0008ea6d) main_mp2_pane_g2

0x3a4b,	// (0x0008ea79) main_mp2_pane_g3_ParamLimits

0x3a4b,	// (0x0008ea79) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x0009a4fd) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x0009a4fd) main_mp2_pane_g

0x3a57,	// (0x0008ea85) main_mp2_pane_t1_ParamLimits

0x3a57,	// (0x0008ea85) main_mp2_pane_t1

0x3a6c,	// (0x0008ea9a) main_mp2_pane_t2_ParamLimits

0x3a6c,	// (0x0008ea9a) main_mp2_pane_t2

0x3a7e,	// (0x0008eaac) main_mp2_pane_t3_ParamLimits

0x3a7e,	// (0x0008eaac) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x0009a504) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x0009a504) main_mp2_pane_t

0xb5c7,	// (0x000965f5) pec_content_pane_ParamLimits

0xb5c7,	// (0x000965f5) pec_content_pane

0xab56,	// (0x00095b84) scroll_pane_cp015

0xb5d9,	// (0x00096607) pec_attribute_pane_ParamLimits

0xb5d9,	// (0x00096607) pec_attribute_pane

0x3a90,	// (0x0008eabe) pec_content_pane_g1_ParamLimits

0x3a90,	// (0x0008eabe) pec_content_pane_g1

0xb5e9,	// (0x00096617) pec_content_pane_t1_ParamLimits

0xb5e9,	// (0x00096617) pec_content_pane_t1

0xb5fb,	// (0x00096629) pec_content_pane_t2_ParamLimits

0xb5fb,	// (0x00096629) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x0009a50b) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x0009a50b) pec_content_pane_t

0x3a9c,	// (0x0008eaca) list_single_graphic_pane_cp01_ParamLimits

0x3a9c,	// (0x0008eaca) list_single_graphic_pane_cp01

0xa6e7,	// (0x00095715) bg_popup_sub_pane_cp04

0xb60d,	// (0x0009663b) popup_mup_playback_window_g1

0xb619,	// (0x00096647) popup_mup_playback_window_t1

0xb62e,	// (0x0009665c) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x0009a510) popup_mup_playback_window_t

0xb665,	// (0x00096693) main_image_pane_g1_ParamLimits

0xb665,	// (0x00096693) main_image_pane_g1

0xb6a8,	// (0x000966d6) scroll_pane_cp018_ParamLimits

0xb6a8,	// (0x000966d6) scroll_pane_cp018

0xb6c0,	// (0x000966ee) scroll_pane_cp016_ParamLimits

0xb6c0,	// (0x000966ee) scroll_pane_cp016

0x3b6a,	// (0x0008eb98) smil2_image_pane_ParamLimits

0x3b6a,	// (0x0008eb98) smil2_image_pane

0x3b9a,	// (0x0008ebc8) smil2_root_pane_ParamLimits

0x3b9a,	// (0x0008ebc8) smil2_root_pane

0x3bd2,	// (0x0008ec00) smil2_text_pane_ParamLimits

0x3bd2,	// (0x0008ec00) smil2_text_pane

0xa48c,	// (0x000954ba) bg_list_pane_cp06

0xb6fc,	// (0x0009672a) grid_radio_pane

0xa48c,	// (0x000954ba) bg_popup_window_pane_cp06

0xb704,	// (0x00096732) main_fmradio_pane_t1

0xb0bf,	// (0x000960ed) heading_pane_cp04

0xb712,	// (0x00096740) main_fmradio_pane_t2

0xc72a,	// (0x00097758) popup_cale_lunar_info_window_g1

0xb720,	// (0x0009674e) main_fmradio_pane_t3

0xc732,	// (0x00097760) popup_cale_lunar_info_window_g2

0xb72e,	// (0x0009675c) main_fmradio_pane_t4

0x0001,

0xb73c,	// (0x0009676a) main_fmradio_pane_t5

0x0004,

0xf5d0,	// (0x0009a5fe) popup_cale_lunar_info_window_g

0xf4f7,	// (0x0009a525) main_fmradio_pane_t

0xb74a,	// (0x00096778) wait_bar_pane_cp03

0xb752,	// (0x00096780) cell_fmradio_pane_ParamLimits

0xb752,	// (0x00096780) cell_fmradio_pane

0xb5ab,	// (0x000965d9) cell_fmradio_pane_g1_ParamLimits

0xb5ab,	// (0x000965d9) cell_fmradio_pane_g1

0xa48c,	// (0x000954ba) grid_highlight_pane_cp011

0xb765,	// (0x00096793) poc_content_pane_ParamLimits

0xb765,	// (0x00096793) poc_content_pane

0xb777,	// (0x000967a5) scroll_pane_cp019

0x3c52,	// (0x0008ec80) popup_call_poc_act_window_ParamLimits

0x3c52,	// (0x0008ec80) popup_call_poc_act_window

0x3c76,	// (0x0008eca4) popup_call_poc_inact_window_ParamLimits

0x3c76,	// (0x0008eca4) popup_call_poc_inact_window

0xf594,	// (0x0009a5c2) bg_popup_call_poc_act_pane_g

0xc6ea,	// (0x00097718) bg_popup_call_poc_inact_pane_g1

0xc6f2,	// (0x00097720) bg_popup_call_poc_inact_pane_g2

0xb77f,	// (0x000967ad) popup_call_poc_act_window_g2

0xc6fa,	// (0x00097728) bg_popup_call_poc_inact_pane_g3

0xc67a,	// (0x000976a8) bg_popup_call_poc_inact_pane_g4

0xc702,	// (0x00097730) bg_popup_call_poc_inact_pane_g5

0xb787,	// (0x000967b5) popup_call_poc_act_window_t1_ParamLimits

0xb787,	// (0x000967b5) popup_call_poc_act_window_t1

0xb7af,	// (0x000967dd) popup_call_poc_act_window_t2_ParamLimits

0xb7af,	// (0x000967dd) popup_call_poc_act_window_t2

0xb7d7,	// (0x00096805) popup_call_poc_act_window_t3_ParamLimits

0xb7d7,	// (0x00096805) popup_call_poc_act_window_t3

0xb7ff,	// (0x0009682d) popup_call_poc_act_window_t4_ParamLimits

0xb7ff,	// (0x0009682d) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x0009a530) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x0009a530) popup_call_poc_act_window_t

0xc70a,	// (0x00097738) bg_popup_call_poc_inact_pane_g6

0xc712,	// (0x00097740) bg_popup_call_poc_inact_pane_g7

0xc71a,	// (0x00097748) bg_popup_call_poc_inact_pane_g8

0xb811,	// (0x0009683f) popup_call_poc_inact_window_g2

0xc722,	// (0x00097750) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5ab,	// (0x0009a5d9) bg_popup_call_poc_inact_pane_g

0xb819,	// (0x00096847) popup_call_poc_inact_window_t1_ParamLimits

0xb819,	// (0x00096847) popup_call_poc_inact_window_t1

0xb82e,	// (0x0009685c) popup_call_poc_inact_window_t2_ParamLimits

0xb82e,	// (0x0009685c) popup_call_poc_inact_window_t2

0xb843,	// (0x00096871) popup_call_poc_inact_window_t3_ParamLimits

0xb843,	// (0x00096871) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x0009a539) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x0009a539) popup_call_poc_inact_window_t

0xc867,	// (0x00097895) context_pane_ParamLimits

0x449e,	// (0x0008f4cc) signal_pane_ParamLimits

0xa9ad,	// (0x000959db) main_call2_pane

0x9c08,	// (0x00094c36) popup_phob_thumbnail2_window_ParamLimits

0x9c08,	// (0x00094c36) popup_phob_thumbnail2_window

0x9b99,	// (0x00094bc7) aid_hotspot_pointer_arrow_pane

0x9ba1,	// (0x00094bcf) aid_hotspot_pointer_hand_pane

0x3fc0,	// (0x0008efee) phob_pre_status_pane_g5

0x1ce9,	// (0x0008cd17) cams_zoom_pane_ParamLimits

0x1cf8,	// (0x0008cd26) image_vga_pane_ParamLimits

0x1d12,	// (0x0008cd40) main_camera_pane_g1_ParamLimits

0x1d24,	// (0x0008cd52) main_camera_pane_g2_ParamLimits

0x1d34,	// (0x0008cd62) main_camera_pane_g3_ParamLimits

0x1d44,	// (0x0008cd72) main_camera_pane_g4_ParamLimits

0x1d54,	// (0x0008cd82) main_camera_pane_g5_ParamLimits

0x1d64,	// (0x0008cd92) main_camera_pane_g6_ParamLimits

0x1d74,	// (0x0008cda2) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x0009a238) main_camera_pane_g_ParamLimits

0x1d84,	// (0x0008cdb2) main_camera_pane_t1_ParamLimits

0x1d9a,	// (0x0008cdc8) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x0009a249) main_camera_pane_t_ParamLimits

0xa6e7,	// (0x00095715) bg_popup_preview_window_pane_cp01_ParamLimits

0xa6e7,	// (0x00095715) bg_popup_preview_window_pane_cp01

0xb858,	// (0x00096886) popup_phob_thumbnail2_window_g1_ParamLimits

0xb858,	// (0x00096886) popup_phob_thumbnail2_window_g1

0xa48c,	// (0x000954ba) call2_cli_visual_pane

0x3caa,	// (0x0008ecd8) popup_call2_audio_conf_window_ParamLimits

0x3caa,	// (0x0008ecd8) popup_call2_audio_conf_window

0x3cca,	// (0x0008ecf8) popup_call2_audio_first_window_ParamLimits

0x3cca,	// (0x0008ecf8) popup_call2_audio_first_window

0x3d60,	// (0x0008ed8e) popup_call2_audio_in_window_ParamLimits

0x3d60,	// (0x0008ed8e) popup_call2_audio_in_window

0x3da8,	// (0x0008edd6) popup_call2_audio_out_window_ParamLimits

0x3da8,	// (0x0008edd6) popup_call2_audio_out_window

0x3e12,	// (0x0008ee40) popup_call2_audio_second_window_ParamLimits

0x3e12,	// (0x0008ee40) popup_call2_audio_second_window

0x3e78,	// (0x0008eea6) popup_call2_audio_wait_window_ParamLimits

0x3e78,	// (0x0008eea6) popup_call2_audio_wait_window

0xa48c,	// (0x000954ba) bg_popup_call2_act_pane_cp03

0xa6c9,	// (0x000956f7) list_conf_pane_cp

0xb864,	// (0x00096892) popup_call2_audio_conf_window_t1

0xb872,	// (0x000968a0) list_single_graphic_popup_conf2_pane_ParamLimits

0xb872,	// (0x000968a0) list_single_graphic_popup_conf2_pane

0xb12f,	// (0x0009615d) list_highlight_pane_cp04

0xb885,	// (0x000968b3) list_single_graphic_popup_conf2_pane_g1

0xb140,	// (0x0009616e) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x0009a540) list_single_graphic_popup_conf2_pane_g

0xb88f,	// (0x000968bd) list_single_graphic_popup_conf2_pane_t1

0xb89d,	// (0x000968cb) bg_popup_call2_act_pane_cp01_ParamLimits

0xb89d,	// (0x000968cb) bg_popup_call2_act_pane_cp01

0xb927,	// (0x00096955) call_type_pane_cp05_ParamLimits

0xb927,	// (0x00096955) call_type_pane_cp05

0xb97b,	// (0x000969a9) popup_call2_audio_second_window_g1_ParamLimits

0xb97b,	// (0x000969a9) popup_call2_audio_second_window_g1

0xb9cf,	// (0x000969fd) popup_call2_audio_second_window_g2_ParamLimits

0xb9cf,	// (0x000969fd) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x0009a545) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x0009a545) popup_call2_audio_second_window_g

0xba34,	// (0x00096a62) popup_call2_audio_second_window_t1_ParamLimits

0xba34,	// (0x00096a62) popup_call2_audio_second_window_t1

0xbaef,	// (0x00096b1d) popup_call2_audio_second_window_t2_ParamLimits

0xbaef,	// (0x00096b1d) popup_call2_audio_second_window_t2

0xbb42,	// (0x00096b70) popup_call2_audio_second_window_t3_ParamLimits

0xbb42,	// (0x00096b70) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x0009a54c) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x0009a54c) popup_call2_audio_second_window_t

0xa48c,	// (0x000954ba) bg_popup_call2_in_pane_cp02

0xa496,	// (0x000954c4) call_type_pane_cp04

0xa49e,	// (0x000954cc) popup_call2_audio_wait_window_g1

0xa4a6,	// (0x000954d4) popup_call2_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0009a127) popup_call2_audio_wait_window_g

0xa4ae,	// (0x000954dc) popup_call2_audio_wait_window_t3

0xbc35,	// (0x00096c63) bg_popup_call2_act_pane_ParamLimits

0xbc35,	// (0x00096c63) bg_popup_call2_act_pane

0xbcf5,	// (0x00096d23) call_type_pane_cp03_ParamLimits

0xbcf5,	// (0x00096d23) call_type_pane_cp03

0xbd59,	// (0x00096d87) popup_call2_audio_first_window_g1_ParamLimits

0xbd59,	// (0x00096d87) popup_call2_audio_first_window_g1

0xbdc9,	// (0x00096df7) popup_call2_audio_first_window_g2_ParamLimits

0xbdc9,	// (0x00096df7) popup_call2_audio_first_window_g2

0xb4bf,	// (0x000964ed) popup_call2_audio_first_window_g3_ParamLimits

0xb4bf,	// (0x000964ed) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x0009a555) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x0009a555) popup_call2_audio_first_window_g

0xbea7,	// (0x00096ed5) popup_call2_audio_first_window_t1_ParamLimits

0xbea7,	// (0x00096ed5) popup_call2_audio_first_window_t1

0xbfaa,	// (0x00096fd8) popup_call2_audio_first_window_t4_ParamLimits

0xbfaa,	// (0x00096fd8) popup_call2_audio_first_window_t4

0xc08d,	// (0x000970bb) popup_call2_audio_first_window_t5_ParamLimits

0xc08d,	// (0x000970bb) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x0009a560) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x0009a560) popup_call2_audio_first_window_t

0xa6df,	// (0x0009570d) bg_popup_call2_act_pane_g1

0xc73a,	// (0x00097768) popup_cale_lunar_info_window_t1

0xc748,	// (0x00097776) popup_cale_lunar_info_window_t2

0xc756,	// (0x00097784) popup_cale_lunar_info_window_t3

0xa48c,	// (0x000954ba) bg_popup_call2_bubble_pane

0xc18e,	// (0x000971bc) bg_popup_call2_in_pane_cp01_ParamLimits

0xc18e,	// (0x000971bc) bg_popup_call2_in_pane_cp01

0x97c5,	// (0x000947f3) call_type_pane_cp02

0xc1d6,	// (0x00097204) popup_call2_audio_out_window_g1_ParamLimits

0xc1d6,	// (0x00097204) popup_call2_audio_out_window_g1

0xc202,	// (0x00097230) popup_call2_audio_out_window_g2_ParamLimits

0xc202,	// (0x00097230) popup_call2_audio_out_window_g2

0xc22a,	// (0x00097258) popup_call2_audio_out_window_g3_ParamLimits

0xc22a,	// (0x00097258) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x0009a569) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x0009a569) popup_call2_audio_out_window_g

0xc265,	// (0x00097293) popup_call2_audio_out_window_t1_ParamLimits

0xc265,	// (0x00097293) popup_call2_audio_out_window_t1

0xc2c4,	// (0x000972f2) popup_call2_audio_out_window_t2_ParamLimits

0xc2c4,	// (0x000972f2) popup_call2_audio_out_window_t2

0xc318,	// (0x00097346) popup_call2_audio_out_window_t3_ParamLimits

0xc318,	// (0x00097346) popup_call2_audio_out_window_t3

0xc32e,	// (0x0009735c) popup_call2_audio_out_window_t4_ParamLimits

0xc32e,	// (0x0009735c) popup_call2_audio_out_window_t4

0xc344,	// (0x00097372) popup_call2_audio_out_window_t5_ParamLimits

0xc344,	// (0x00097372) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x0009a572) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x0009a572) popup_call2_audio_out_window_t

0xc3a8,	// (0x000973d6) bg_popup_call2_in_pane_ParamLimits

0xc3a8,	// (0x000973d6) bg_popup_call2_in_pane

0xc404,	// (0x00097432) popup_call2_audio_in_window_g1_ParamLimits

0xc404,	// (0x00097432) popup_call2_audio_in_window_g1

0xc43c,	// (0x0009746a) popup_call2_audio_in_window_g2_ParamLimits

0xc43c,	// (0x0009746a) popup_call2_audio_in_window_g2

0xc474,	// (0x000974a2) popup_call2_audio_in_window_g3_ParamLimits

0xc474,	// (0x000974a2) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x0009a57f) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x0009a57f) popup_call2_audio_in_window_g

0xc4cc,	// (0x000974fa) popup_call2_audio_in_window_t1_ParamLimits

0xc4cc,	// (0x000974fa) popup_call2_audio_in_window_t1

0xc54c,	// (0x0009757a) popup_call2_audio_in_window_t2_ParamLimits

0xc54c,	// (0x0009757a) popup_call2_audio_in_window_t2

0xc5cc,	// (0x000975fa) popup_call2_audio_in_window_t3_ParamLimits

0xc5cc,	// (0x000975fa) popup_call2_audio_in_window_t3

0xc5e6,	// (0x00097614) popup_call2_audio_in_window_t4_ParamLimits

0xc5e6,	// (0x00097614) popup_call2_audio_in_window_t4

0xc5f8,	// (0x00097626) popup_call2_audio_in_window_t5_ParamLimits

0xc5f8,	// (0x00097626) popup_call2_audio_in_window_t5

0xc60d,	// (0x0009763b) popup_call2_audio_in_window_t6_ParamLimits

0xc60d,	// (0x0009763b) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x0009a588) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x0009a588) popup_call2_audio_in_window_t

0xa6df,	// (0x0009570d) bg_popup_call2_in_pane_g1

0xc764,	// (0x00097792) popup_cale_lunar_info_window_t4

0x0003,

0xf5d5,	// (0x0009a603) popup_cale_lunar_info_window_t

0xa6e7,	// (0x00095715) bg_popup_call2_rect_pane_ParamLimits

0xa6e7,	// (0x00095715) bg_popup_call2_rect_pane

0xa48c,	// (0x000954ba) call2_cli_visual_graphic_pane

0xa48c,	// (0x000954ba) call2_cli_visual_text_pane

0x9c2f,	// (0x00094c5d) smil_status_volume_pane_g3

0x0002,

0xa80d,	// (0x0009583b) call2_cli_visual_graphic_pane_g1

0xa80d,	// (0x0009583b) call2_cli_visual_graphic_pane_g2

0xa80d,	// (0x0009583b) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x0009a595) call2_cli_visual_graphic_pane_g

0xc622,	// (0x00097650) bg_popup_call2_rect_pane_g1

0xa8ab,	// (0x000958d9) bg_popup_call2_rect_pane_g2

0xc62a,	// (0x00097658) bg_popup_call2_rect_pane_g3

0xc632,	// (0x00097660) bg_popup_call2_rect_pane_g4

0xc63a,	// (0x00097668) bg_popup_call2_rect_pane_g5

0xc642,	// (0x00097670) bg_popup_call2_rect_pane_g6

0xc64a,	// (0x00097678) bg_popup_call2_rect_pane_g7

0xc652,	// (0x00097680) bg_popup_call2_rect_pane_g8

0xc65a,	// (0x00097688) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x0009a59c) bg_popup_call2_rect_pane_g

0xc662,	// (0x00097690) bg_popup_call2_bubble_pane_g1

0xc66a,	// (0x00097698) bg_popup_call2_bubble_pane_g2

0xc672,	// (0x000976a0) bg_popup_call2_bubble_pane_g3

0xc67a,	// (0x000976a8) bg_popup_call2_bubble_pane_g4

0xc682,	// (0x000976b0) bg_popup_call2_bubble_pane_g5

0xc68a,	// (0x000976b8) bg_popup_call2_bubble_pane_g6

0xc692,	// (0x000976c0) bg_popup_call2_bubble_pane_g7

0xc69a,	// (0x000976c8) bg_popup_call2_bubble_pane_g8

0xc6a2,	// (0x000976d0) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x0009a5af) bg_popup_call2_bubble_pane_g

0x1641,	// (0x0008c66f) aid_cale_week_size_cell_pane

0x1db0,	// (0x0008cdde) aid_cams_cif_uncrop_pane_ParamLimits

0x1db0,	// (0x0008cdde) aid_cams_cif_uncrop_pane

0x1f65,	// (0x0008cf93) aid_cams_size_cell_ParamLimits

0x1f65,	// (0x0008cf93) aid_cams_size_cell

0x1f79,	// (0x0008cfa7) grid_cams_pane_ParamLimits

0x1f93,	// (0x0008cfc1) linegrid_cams_pane_ParamLimits

0x2091,	// (0x0008d0bf) call_video_pane_t1

0x20af,	// (0x0008d0dd) call_video_pane_t2

0x0001,

0xf26e,	// (0x0009a29c) call_video_pane_t

0x24d3,	// (0x0008d501) aid_cale_month_size_cell_pane_ParamLimits

0x24d3,	// (0x0008d501) aid_cale_month_size_cell_pane

0xf61e,	// (0x0009a64c) smil_status_volume_pane_g

0x9c3c,	// (0x00094c6a) volume_smil_pane_ParamLimits

0x9680,	// (0x000946ae) aid_popup2_width_pane

0x15b7,	// (0x0008c5e5) cell_qdial_pane_g4_ParamLimits

0x15b7,	// (0x0008c5e5) cell_qdial_pane_g4

0x32f9,	// (0x0008e327) aid_blid_cardinal_pane_ParamLimits

0x3305,	// (0x0008e333) aid_blid_destination_pane_ParamLimits

0x3305,	// (0x0008e333) aid_blid_destination_pane

0xa6e7,	// (0x00095715) bg_popup_call_poc_act_pane_ParamLimits

0xa6e7,	// (0x00095715) bg_popup_call_poc_act_pane

0xa6e7,	// (0x00095715) bg_popup_call_poc_inact_pane_ParamLimits

0xa6e7,	// (0x00095715) bg_popup_call_poc_inact_pane

0xc6aa,	// (0x000976d8) bg_popup_call_poc_act_pane_g1

0xc6b2,	// (0x000976e0) bg_popup_call_poc_act_pane_g2

0xc6ba,	// (0x000976e8) bg_popup_call_poc_act_pane_g3

0xc67a,	// (0x000976a8) bg_popup_call_poc_act_pane_g4

0xc682,	// (0x000976b0) bg_popup_call_poc_act_pane_g5

0xc6c2,	// (0x000976f0) bg_popup_call_poc_act_pane_g6

0xc692,	// (0x000976c0) bg_popup_call_poc_act_pane_g7

0xc6ca,	// (0x000976f8) bg_popup_call_poc_act_pane_g8

0xa48c,	// (0x000954ba) main_usb_pane

0x9be3,	// (0x00094c11) popup_cale_lunar_info_window

0x2379,	// (0x0008d3a7) im_reading_pane_t1_ParamLimits

0xaaae,	// (0x00095adc) list_im_pane_ParamLimits

0xaabf,	// (0x00095aed) scroll_pane_cp07_ParamLimits

0xa48c,	// (0x000954ba) grid_highlight_pane_cp012

0xa6e7,	// (0x00095715) mup_scale_pane_ParamLimits

0xb5ab,	// (0x000965d9) main_usb_pane_g1_ParamLimits

0xb5ab,	// (0x000965d9) main_usb_pane_g1

0x3ed5,	// (0x0008ef03) main_usb_pane_g2_ParamLimits

0x3ed5,	// (0x0008ef03) main_usb_pane_g2

0x0001,

0xf5be,	// (0x0009a5ec) main_usb_pane_g_ParamLimits

0xf5be,	// (0x0009a5ec) main_usb_pane_g

0x3eeb,	// (0x0008ef19) main_usb_pane_t1_ParamLimits

0x3eeb,	// (0x0008ef19) main_usb_pane_t1

0x3efd,	// (0x0008ef2b) main_usb_pane_t2_ParamLimits

0x3efd,	// (0x0008ef2b) main_usb_pane_t2

0x3f0f,	// (0x0008ef3d) main_usb_pane_t3_ParamLimits

0x3f0f,	// (0x0008ef3d) main_usb_pane_t3

0x3f21,	// (0x0008ef4f) main_usb_pane_t4_ParamLimits

0x3f21,	// (0x0008ef4f) main_usb_pane_t4

0x3f33,	// (0x0008ef61) main_usb_pane_t5_ParamLimits

0x3f33,	// (0x0008ef61) main_usb_pane_t5

0x3f45,	// (0x0008ef73) main_usb_pane_t6_ParamLimits

0x3f45,	// (0x0008ef73) main_usb_pane_t6

0x0005,

0xf5c3,	// (0x0009a5f1) main_usb_pane_t_ParamLimits

0x32a8,	// (0x0008e2d6) aid_text_placing

0x32b1,	// (0x0008e2df) main_location2_pane_t1_ParamLimits

0x32c3,	// (0x0008e2f1) main_location2_pane_t2_ParamLimits

0x32d5,	// (0x0008e303) main_location2_pane_t3_ParamLimits

0x32e7,	// (0x0008e315) main_location2_pane_t4_ParamLimits

0x32e7,	// (0x0008e315) main_location2_pane_t4

0xf3cf,	// (0x0009a3fd) main_location2_pane_t_ParamLimits

0xa723,	// (0x00095751) find_pinb_pane_g2_ParamLimits

0xa723,	// (0x00095751) find_pinb_pane_g2

0x0001,

0xf11f,	// (0x0009a14d) find_pinb_pane_g_ParamLimits

0xf11f,	// (0x0009a14d) find_pinb_pane_g

0xa72f,	// (0x0009575d) find_pinb_pane_t1_ParamLimits

0xa741,	// (0x0009576f) find_pinb_pane_t2_ParamLimits

0xf124,	// (0x0009a152) find_pinb_pane_t_ParamLimits

0xa48c,	// (0x000954ba) main_call3_pane

0x298e,	// (0x0008d9bc) cale_month_day_heading_pane_t1_ParamLimits

0x2a14,	// (0x0008da42) cale_month_day_heading_pane_t2_ParamLimits

0x2aa5,	// (0x0008dad3) cale_month_day_heading_pane_t3_ParamLimits

0x2b36,	// (0x0008db64) cale_month_day_heading_pane_t4_ParamLimits

0x2bcf,	// (0x0008dbfd) cale_month_day_heading_pane_t5_ParamLimits

0x2c70,	// (0x0008dc9e) cale_month_day_heading_pane_t6_ParamLimits

0x2d11,	// (0x0008dd3f) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x0009a2d4) cale_month_day_heading_pane_t_ParamLimits

0xad09,	// (0x00095d37) smil_status_volume_pane

0x39ce,	// (0x0008e9fc) postcard_address_pane_ParamLimits

0x39ce,	// (0x0008e9fc) postcard_address_pane

0x39e0,	// (0x0008ea0e) postcard_message_pane_ParamLimits

0x39e0,	// (0x0008ea0e) postcard_message_pane

0x3eb2,	// (0x0008eee0) call2_cli_visual_pane_t1_ParamLimits

0x3eb2,	// (0x0008eee0) call2_cli_visual_pane_t1

0x46cd,	// (0x0008f6fb) postcard_message_pane_t1_ParamLimits

0x46cd,	// (0x0008f6fb) postcard_message_pane_t1

0x46b6,	// (0x0008f6e4) postcard_address_pane_t1_ParamLimits

0x46b6,	// (0x0008f6e4) postcard_address_pane_t1

0x46a2,	// (0x0008f6d0) popup_call3_audio_in_window_ParamLimits

0x46a2,	// (0x0008f6d0) popup_call3_audio_in_window

0x452d,	// (0x0008f55b) bg_popup_call3_in_pane_ParamLimits

0x452d,	// (0x0008f55b) bg_popup_call3_in_pane

0x45a3,	// (0x0008f5d1) popup_call3_audio_in_window_g1_ParamLimits

0x45a3,	// (0x0008f5d1) popup_call3_audio_in_window_g1

0x45c3,	// (0x0008f5f1) popup_call3_audio_in_window_g2_ParamLimits

0x45c3,	// (0x0008f5f1) popup_call3_audio_in_window_g2

0x45e3,	// (0x0008f611) popup_call3_audio_in_window_g3_ParamLimits

0x45e3,	// (0x0008f611) popup_call3_audio_in_window_g3

0x0003,

0xf625,	// (0x0009a653) popup_call3_audio_in_window_g_ParamLimits

0xf625,	// (0x0009a653) popup_call3_audio_in_window_g

0x4614,	// (0x0008f642) popup_call3_audio_in_window_t1_ParamLimits

0x4614,	// (0x0008f642) popup_call3_audio_in_window_t1

0x4652,	// (0x0008f680) popup_call3_audio_in_window_t2_ParamLimits

0x4652,	// (0x0008f680) popup_call3_audio_in_window_t2

0x4690,	// (0x0008f6be) popup_call3_audio_in_window_t3_ParamLimits

0x4690,	// (0x0008f6be) popup_call3_audio_in_window_t3

0x0002,

0xf62e,	// (0x0009a65c) popup_call3_audio_in_window_t_ParamLimits

0xf62e,	// (0x0009a65c) popup_call3_audio_in_window_t

0xa9ad,	// (0x000959db) bg_popup_call3_rect_pane

0xc622,	// (0x00097650) bg_popup_call3_rect_pane_g1

0xa8ab,	// (0x000958d9) bg_popup_call3_rect_pane_g2

0xc62a,	// (0x00097658) bg_popup_call3_rect_pane_g3

0xc632,	// (0x00097660) bg_popup_call3_rect_pane_g4

0xc63a,	// (0x00097668) bg_popup_call3_rect_pane_g5

0xc642,	// (0x00097670) bg_popup_call3_rect_pane_g6

0xc64a,	// (0x00097678) bg_popup_call3_rect_pane_g7

0x35df,	// (0x0008e60d) mup_visualizer_osc_pane

0xb4cd,	// (0x000964fb) mup_visualizer_spec_pane

0x455d,	// (0x0008f58b) call3_video_qcif_pane_ParamLimits

0x455d,	// (0x0008f58b) call3_video_qcif_pane

0x4570,	// (0x0008f59e) call3_video_qcif_uncrop_pane_ParamLimits

0x4570,	// (0x0008f59e) call3_video_qcif_uncrop_pane

0x457e,	// (0x0008f5ac) call3_video_subqcif_pane_ParamLimits

0x457e,	// (0x0008f5ac) call3_video_subqcif_pane

0x4592,	// (0x0008f5c0) call3_video_subqcif_uncrop_pane_ParamLimits

0x4592,	// (0x0008f5c0) call3_video_subqcif_uncrop_pane

0x4603,	// (0x0008f631) popup_call3_audio_in_window_g4_ParamLimits

0x4603,	// (0x0008f631) popup_call3_audio_in_window_g4

0x451c,	// (0x0008f54a) mup_spec_half_pane

0x4525,	// (0x0008f553) mup_spec_half_pane_cp

0xc8c7,	// (0x000978f5) mup_osc_middle_pane

0xc8d0,	// (0x000978fe) mup_visualizer_osc_pane_g1

0x44fc,	// (0x0008f52a) mup_spec_bar_pane_ParamLimits

0x44fc,	// (0x0008f52a) mup_spec_bar_pane

0xc8b4,	// (0x000978e2) mup_spec_bar_pane_g1

0xc8be,	// (0x000978ec) mup_spec_bar_pane_g2

0x0001,

0xf619,	// (0x0009a647) mup_spec_bar_pane_g

0x1641,	// (0x0008c66f) aid_cale_week_size_cell_pane_ParamLimits

0x165b,	// (0x0008c689) bg_cale_heading_pane_ParamLimits

0xa906,	// (0x00095934) bg_cale_pane_cp01_ParamLimits

0x1673,	// (0x0008c6a1) cale_week_corner_pane_ParamLimits

0x1692,	// (0x0008c6c0) cale_week_day_heading_pane_ParamLimits

0x16af,	// (0x0008c6dd) cale_week_scroll_pane_g1_ParamLimits

0x16c2,	// (0x0008c6f0) cale_week_scroll_pane_g2_ParamLimits

0x16da,	// (0x0008c708) cale_week_scroll_pane_g3_ParamLimits

0x16f2,	// (0x0008c720) cale_week_scroll_pane_g4_ParamLimits

0x170a,	// (0x0008c738) cale_week_scroll_pane_g5_ParamLimits

0x172a,	// (0x0008c758) cale_week_scroll_pane_g6_ParamLimits

0x174a,	// (0x0008c778) cale_week_scroll_pane_g7_ParamLimits

0x176a,	// (0x0008c798) cale_week_scroll_pane_g8_ParamLimits

0x178e,	// (0x0008c7bc) cale_week_scroll_pane_g9_ParamLimits

0x17a6,	// (0x0008c7d4) cale_week_scroll_pane_g10_ParamLimits

0x17be,	// (0x0008c7ec) cale_week_scroll_pane_g11_ParamLimits

0x17d6,	// (0x0008c804) cale_week_scroll_pane_g12_ParamLimits

0x17ee,	// (0x0008c81c) cale_week_scroll_pane_g13_ParamLimits

0x17ee,	// (0x0008c81c) cale_week_scroll_pane_g14_ParamLimits

0x17ee,	// (0x0008c81c) cale_week_scroll_pane_g15_ParamLimits

0xf1b0,	// (0x0009a1de) cale_week_scroll_pane_g_ParamLimits

0x182a,	// (0x0008c858) cale_week_time_pane_ParamLimits

0x184e,	// (0x0008c87c) grid_cale_week_pane_ParamLimits

0xa923,	// (0x00095951) listscroll_cale_week_pane_t1

0xa935,	// (0x00095963) scroll_pane_cp08_ParamLimits

0x2528,	// (0x0008d556) cale_month_corner_pane_ParamLimits

0xacdf,	// (0x00095d0d) cale_month_pane_t1

0x292c,	// (0x0008d95a) cale_month_week_pane_ParamLimits

0x30d9,	// (0x0008e107) popup_call_status_window_g1_ParamLimits

0x30ed,	// (0x0008e11b) popup_call_status_window_g2_ParamLimits

0x3101,	// (0x0008e12f) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x0009a384) popup_call_status_window_g_ParamLimits

0xb0af,	// (0x000960dd) aid_call2_pane

0x0328,	// (0x0008b356) msg_header_pane_g1

0x39ce,	// (0x0008e9fc) postcard_address2_pane_ParamLimits

0x39ce,	// (0x0008e9fc) postcard_address2_pane

0x39e0,	// (0x0008ea0e) postcard_message2_pane_ParamLimits

0x39e0,	// (0x0008ea0e) postcard_message2_pane

0x44ac,	// (0x0008f4da) message2_row_pane_ParamLimits

0x44ac,	// (0x0008f4da) message2_row_pane

0x44c9,	// (0x0008f4f7) address2_row_pane_ParamLimits

0x44c9,	// (0x0008f4f7) address2_row_pane

0xc882,	// (0x000978b0) postcard_message2_row_pane_g1

0xc88a,	// (0x000978b8) postcard_message2_row_pane_t1

0xc882,	// (0x000978b0) address2_row_pane_g1

0xc88a,	// (0x000978b8) address2_row_pane_t1

0x1c68,	// (0x0008cc96) aid_size_cell_vorec

0xa48c,	// (0x000954ba) main_rss_pane

0x44dc,	// (0x0008f50a) rss_list_single_pane_ParamLimits

0x44dc,	// (0x0008f50a) rss_list_single_pane

0xc898,	// (0x000978c6) rss_list_single_pane_t1

0xc8a6,	// (0x000978d4) rss_list_single_pane_t2

0x0001,

0xf614,	// (0x0009a642) rss_list_single_pane_t

0xa48c,	// (0x000954ba) main_camera2_pane

0xa48c,	// (0x000954ba) main_video2_pane

0x4746,	// (0x0008f774) cams_zoom_pane_cp2_ParamLimits

0x4746,	// (0x0008f774) cams_zoom_pane_cp2

0x4766,	// (0x0008f794) image2_vga_pane_ParamLimits

0x4766,	// (0x0008f794) image2_vga_pane

0x47b7,	// (0x0008f7e5) main_camera2_pane_g1_ParamLimits

0x47b7,	// (0x0008f7e5) main_camera2_pane_g1

0x47d7,	// (0x0008f805) main_camera2_pane_g2_ParamLimits

0x47d7,	// (0x0008f805) main_camera2_pane_g2

0x47f7,	// (0x0008f825) main_camera2_pane_g3_ParamLimits

0x47f7,	// (0x0008f825) main_camera2_pane_g3

0x4817,	// (0x0008f845) main_camera2_pane_g4_ParamLimits

0x4817,	// (0x0008f845) main_camera2_pane_g4

0x4837,	// (0x0008f865) main_camera2_pane_g5_ParamLimits

0x4837,	// (0x0008f865) main_camera2_pane_g5

0x4857,	// (0x0008f885) main_camera2_pane_g6_ParamLimits

0x4857,	// (0x0008f885) main_camera2_pane_g6

0x4877,	// (0x0008f8a5) main_camera2_pane_g7_ParamLimits

0x4877,	// (0x0008f8a5) main_camera2_pane_g7

0x4897,	// (0x0008f8c5) main_camera2_pane_g8_ParamLimits

0x4897,	// (0x0008f8c5) main_camera2_pane_g8

0x0008,

0xf635,	// (0x0009a663) main_camera2_pane_g_ParamLimits

0xf635,	// (0x0009a663) main_camera2_pane_g

0x48d7,	// (0x0008f905) main_camera2_pane_t1_ParamLimits

0x48d7,	// (0x0008f905) main_camera2_pane_t1

0x490c,	// (0x0008f93a) main_camera2_pane_t2_ParamLimits

0x490c,	// (0x0008f93a) main_camera2_pane_t2

0x4932,	// (0x0008f960) main_camera2_pane_t3_ParamLimits

0x4932,	// (0x0008f960) main_camera2_pane_t3

0x4990,	// (0x0008f9be) main_camera2_pane_t4_ParamLimits

0x4990,	// (0x0008f9be) main_camera2_pane_t4

0x0006,

0xf648,	// (0x0009a676) main_camera2_pane_t_ParamLimits

0xf648,	// (0x0009a676) main_camera2_pane_t

0x4a22,	// (0x0008fa50) cams_zoom_pane_cp4_ParamLimits

0x4a22,	// (0x0008fa50) cams_zoom_pane_cp4

0x4a38,	// (0x0008fa66) image2_cif_pane_ParamLimits

0x4a38,	// (0x0008fa66) image2_cif_pane

0x4a63,	// (0x0008fa91) image2_subqcif_pane_ParamLimits

0x4a63,	// (0x0008fa91) image2_subqcif_pane

0x4a7d,	// (0x0008faab) main_video2_pane_g1_ParamLimits

0x4a7d,	// (0x0008faab) main_video2_pane_g1

0x4a97,	// (0x0008fac5) main_video2_pane_g2_ParamLimits

0x4a97,	// (0x0008fac5) main_video2_pane_g2

0x4aad,	// (0x0008fadb) main_video2_pane_g3_ParamLimits

0x4aad,	// (0x0008fadb) main_video2_pane_g3

0x4ac3,	// (0x0008faf1) main_video2_pane_g4_ParamLimits

0x4ac3,	// (0x0008faf1) main_video2_pane_g4

0x4ad9,	// (0x0008fb07) main_video2_pane_g5_ParamLimits

0x4ad9,	// (0x0008fb07) main_video2_pane_g5

0x4aef,	// (0x0008fb1d) main_video2_pane_g6_ParamLimits

0x4aef,	// (0x0008fb1d) main_video2_pane_g6

0x0005,

0xf657,	// (0x0009a685) main_video2_pane_g_ParamLimits

0xf657,	// (0x0009a685) main_video2_pane_g

0x4b09,	// (0x0008fb37) main_video2_pane_t1_ParamLimits

0x4b09,	// (0x0008fb37) main_video2_pane_t1

0x4b2d,	// (0x0008fb5b) main_video2_pane_t2_ParamLimits

0x4b2d,	// (0x0008fb5b) main_video2_pane_t2

0x4b7b,	// (0x0008fba9) main_video2_pane_t3_ParamLimits

0x4b7b,	// (0x0008fba9) main_video2_pane_t3

0x0002,

0xf664,	// (0x0009a692) main_video2_pane_t_ParamLimits

0xf664,	// (0x0009a692) main_video2_pane_t

0x4000,	// (0x0008f02e) call_muted_g2

0x0001,

0xf606,	// (0x0009a634) call_muted_g

0xa48c,	// (0x000954ba) main_mup2_pane

0x4bc3,	// (0x0008fbf1) main_mup2_pane_g1_ParamLimits

0x4bc3,	// (0x0008fbf1) main_mup2_pane_g1

0x4bcf,	// (0x0008fbfd) main_mup2_pane_g2_ParamLimits

0x4bcf,	// (0x0008fbfd) main_mup2_pane_g2

0x9caa,	// (0x00094cd8) main_mup_pane_g13_cp1

0x9cb2,	// (0x00094ce0) mup_volume_pane_cp1

0x4beb,	// (0x0008fc19) main_mup2_pane_g4_ParamLimits

0x4beb,	// (0x0008fc19) main_mup2_pane_g4

0x4bfd,	// (0x0008fc2b) main_mup2_pane_g5_ParamLimits

0x4bfd,	// (0x0008fc2b) main_mup2_pane_g5

0x4c0f,	// (0x0008fc3d) main_mup2_pane_g6_ParamLimits

0x4c0f,	// (0x0008fc3d) main_mup2_pane_g6

0x4c21,	// (0x0008fc4f) main_mup2_pane_g7_ParamLimits

0x4c21,	// (0x0008fc4f) main_mup2_pane_g7

0x0006,

0xf66b,	// (0x0009a699) main_mup2_pane_g_ParamLimits

0xf66b,	// (0x0009a699) main_mup2_pane_g

0x4c39,	// (0x0008fc67) main_mup2_pane_t1_ParamLimits

0x4c39,	// (0x0008fc67) main_mup2_pane_t1

0x4c4f,	// (0x0008fc7d) main_mup2_pane_t2_ParamLimits

0x4c4f,	// (0x0008fc7d) main_mup2_pane_t2

0x4c65,	// (0x0008fc93) main_mup2_pane_t3_ParamLimits

0x4c65,	// (0x0008fc93) main_mup2_pane_t3

0x4c7b,	// (0x0008fca9) main_mup2_pane_t4_ParamLimits

0x4c7b,	// (0x0008fca9) main_mup2_pane_t4

0x4c93,	// (0x0008fcc1) main_mup2_pane_t5_ParamLimits

0x4c93,	// (0x0008fcc1) main_mup2_pane_t5

0x4cab,	// (0x0008fcd9) main_mup2_pane_t6_ParamLimits

0x4cab,	// (0x0008fcd9) main_mup2_pane_t6

0x0005,

0xf67a,	// (0x0009a6a8) main_mup2_pane_t_ParamLimits

0xf67a,	// (0x0009a6a8) main_mup2_pane_t

0x4cdb,	// (0x0008fd09) mup2_visualizer_pane_ParamLimits

0x4cdb,	// (0x0008fd09) mup2_visualizer_pane

0x4d09,	// (0x0008fd37) mup_progress_pane_cp_ParamLimits

0x4d09,	// (0x0008fd37) mup_progress_pane_cp

0x9c95,	// (0x00094cc3) mup_volume_pane_cp_ParamLimits

0x9c95,	// (0x00094cc3) mup_volume_pane_cp

0x4d1d,	// (0x0008fd4b) mup2_visualizer_pane_g1_ParamLimits

0x4d1d,	// (0x0008fd4b) mup2_visualizer_pane_g1

0xc907,	// (0x00097935) mup2_visualizer_pane_g2_ParamLimits

0xc907,	// (0x00097935) mup2_visualizer_pane_g2

0x4d34,	// (0x0008fd62) mup2_visualizer_pane_g3_ParamLimits

0x4d34,	// (0x0008fd62) mup2_visualizer_pane_g3

0x0002,

0xf687,	// (0x0009a6b5) mup2_visualizer_pane_g_ParamLimits

0xf687,	// (0x0009a6b5) mup2_visualizer_pane_g

0xb6f4,	// (0x00096722) aid_size_cell_fmradio

0x41b2,	// (0x0008f1e0) aid_height_parent_landcape

0xab3d,	// (0x00095b6b) wml_content_pane_cp

0xab45,	// (0x00095b73) wml_tabs_pane

0xab4e,	// (0x00095b7c) popup_wml_miniature_window

0xab56,	// (0x00095b84) scroll_pane_cp021

0xab6a,	// (0x00095b98) wml_content_pane_comp8

0xa48c,	// (0x000954ba) bg_popup_sub_pane_cp05

0xc925,	// (0x00097953) popup_wml_miniature_window_g1

0xc92d,	// (0x0009795b) wml_miniature_view_pane

0x4d40,	// (0x0008fd6e) aid_size_wml_view

0x4d48,	// (0x0008fd76) wml_miniature_view_pane_g1

0x4d51,	// (0x0008fd7f) wml_miniature_view_pane_g2

0x4d5a,	// (0x0008fd88) wml_miniature_view_pane_g3

0x4d62,	// (0x0008fd90) wml_miniature_view_pane_g4

0x4d6a,	// (0x0008fd98) wml_miniature_view_pane_g5

0x4d72,	// (0x0008fda0) wml_miniature_view_pane_g6

0x4d7a,	// (0x0008fda8) wml_miniature_view_pane_g7

0x4d82,	// (0x0008fdb0) wml_miniature_view_pane_g8

0x0007,

0xf68e,	// (0x0009a6bc) wml_miniature_view_pane_g

0xc935,	// (0x00097963) background_graphic_ParamLimits

0xc935,	// (0x00097963) background_graphic

0xc941,	// (0x0009796f) wml_tabs_2_pane

0xc94a,	// (0x00097978) wml_tabs_3_pane_ParamLimits

0xc94a,	// (0x00097978) wml_tabs_3_pane

0xc95c,	// (0x0009798a) wml_tabs_4_pane_ParamLimits

0xc95c,	// (0x0009798a) wml_tabs_4_pane

0xc972,	// (0x000979a0) wml_tabs_5_pane_ParamLimits

0xc972,	// (0x000979a0) wml_tabs_5_pane

0xc98c,	// (0x000979ba) wml_tabs_pane_g2_ParamLimits

0xc98c,	// (0x000979ba) wml_tabs_pane_g2

0xc9a0,	// (0x000979ce) wml_tabs_pane_g3_ParamLimits

0xc9a0,	// (0x000979ce) wml_tabs_pane_g3

0x4d8a,	// (0x0008fdb8) wml_tabs_2_active_pane_ParamLimits

0x4d8a,	// (0x0008fdb8) wml_tabs_2_active_pane

0x4d9e,	// (0x0008fdcc) wml_tabs_2_passive_pane_ParamLimits

0x4d9e,	// (0x0008fdcc) wml_tabs_2_passive_pane

0x4db2,	// (0x0008fde0) wml_tabs_3_active_pane_cp_ParamLimits

0x4db2,	// (0x0008fde0) wml_tabs_3_active_pane_cp

0x4dc7,	// (0x0008fdf5) wml_tabs_3_passive_pane_ParamLimits

0x4dc7,	// (0x0008fdf5) wml_tabs_3_passive_pane

0x4dda,	// (0x0008fe08) wml_tabs_3_passive_pane_cp_ParamLimits

0x4dda,	// (0x0008fe08) wml_tabs_3_passive_pane_cp

0x4df1,	// (0x0008fe1f) tabs_4_active_pane

0x4df9,	// (0x0008fe27) tabs_4_passive_pane

0x4e03,	// (0x0008fe31) tabs_4_passive_pane_cp

0x4e0b,	// (0x0008fe39) tabs_4_passive_pane_cp2

0x3ecd,	// (0x0008eefb) aid_height_text

0x35b1,	// (0x0008e5df) mup_volume_cont_pane_ParamLimits

0x35b1,	// (0x0008e5df) mup_volume_cont_pane

0x1258,	// (0x0008c286) aid_size_cell_pinb

0x1262,	// (0x0008c290) aid_size_list_pinb

0x4cf5,	// (0x0008fd23) mup2_volume_cont_pane_ParamLimits

0x4cf5,	// (0x0008fd23) mup2_volume_cont_pane

0x9c81,	// (0x00094caf) mup2_volume_cont_pane_g1_ParamLimits

0x9c81,	// (0x00094caf) mup2_volume_cont_pane_g1

0x0f0a,	// (0x0008bf38) aid_size_cell_touch_ParamLimits

0x0f0a,	// (0x0008bf38) aid_size_cell_touch

0x1147,	// (0x0008c175) touch_pane_ParamLimits

0x1147,	// (0x0008c175) touch_pane

0x966e,	// (0x0009469c) main_rss2_pane

0xc9bd,	// (0x000979eb) listscroll_rss2_pane

0xc9c6,	// (0x000979f4) rss2_navigation_pane

0xc9ce,	// (0x000979fc) list_rss2_pane

0xb1d4,	// (0x00096202) scroll_pane_cp22

0xc9d6,	// (0x00097a04) rss2_navigation_pane_g1

0xc9df,	// (0x00097a0d) rss2_navigation_pane_g2

0xc9e7,	// (0x00097a15) rss2_navigation_pane_g3

0x0002,

0xf69f,	// (0x0009a6cd) rss2_navigation_pane_g

0xc9ef,	// (0x00097a1d) rss2_navigation_pane_t1

0x4e15,	// (0x0008fe43) rss2_list_single_pane_ParamLimits

0x4e15,	// (0x0008fe43) rss2_list_single_pane

0xc9fd,	// (0x00097a2b) rss2_list_single_pane_t2

0xca17,	// (0x00097a45) rss2_list_single_pane_t3_ParamLimits

0xca17,	// (0x00097a45) rss2_list_single_pane_t3

0xca34,	// (0x00097a62) rss2_list_single_pane_t4

0x2fb5,	// (0x0008dfe3) smil_status_pane_g1

0xa3c3,	// (0x000953f1) main_image2_pane_ParamLimits

0xa3c3,	// (0x000953f1) main_image2_pane

0x48b7,	// (0x0008f8e5) main_camera2_pane_g9_ParamLimits

0x48b7,	// (0x0008f8e5) main_camera2_pane_g9

0x49e5,	// (0x0008fa13) main_camera2_pane_t5_ParamLimits

0x49e5,	// (0x0008fa13) main_camera2_pane_t5

0x9c51,	// (0x00094c7f) main_camera2_pane_t6_ParamLimits

0x9c51,	// (0x00094c7f) main_camera2_pane_t6

0x4e2b,	// (0x0008fe59) main_image2_pane_g1_ParamLimits

0x4e2b,	// (0x0008fe59) main_image2_pane_g1

0x3c08,	// (0x0008ec36) smil2_video_pane_ParamLimits

0x3c08,	// (0x0008ec36) smil2_video_pane

0x968c,	// (0x000946ba) aid_zoom_text_primary_cp

0x96cc,	// (0x000946fa) popup_preview_fixed_window

0xaaa6,	// (0x00095ad4) im_reading_pane_g1

0x472e,	// (0x0008f75c) cams2_bc_adjust_pane_cp_ParamLimits

0x472e,	// (0x0008f75c) cams2_bc_adjust_pane_cp

0x4a14,	// (0x0008fa42) cams2_bc_adjust_pane_ParamLimits

0x4a14,	// (0x0008fa42) cams2_bc_adjust_pane

0x9cba,	// (0x00094ce8) cams2_bc_adjust_pane_g1

0x9cc2,	// (0x00094cf0) cams2_slider_pane

0x9ccb,	// (0x00094cf9) cams2_slider_pane_g1

0x9cd4,	// (0x00094d02) cams2_slider_pane_g2

0x0006,

0xf6a6,	// (0x0009a6d4) cams2_slider_pane_g

0x134a,	// (0x0008c378) calc_display_pane_ParamLimits

0x1372,	// (0x0008c3a0) calc_paper_pane_ParamLimits

0x1395,	// (0x0008c3c3) grid_calc_pane_ParamLimits

0x9b6a,	// (0x00094b98) popup_clock_digital_window_t1_ParamLimits

0xb691,	// (0x000966bf) main_image_pane_t1

0x132c,	// (0x0008c35a) aid_size_cell_calc_ParamLimits

0x132c,	// (0x0008c35a) aid_size_cell_calc

0x41f8,	// (0x0008f226) popup_blid_sat_info2_window_ParamLimits

0x41f8,	// (0x0008f226) popup_blid_sat_info2_window

0xca4a,	// (0x00097a78) aid_size_cell_blid

0xca52,	// (0x00097a80) bg_popup_window_pane_cp07

0xca75,	// (0x00097aa3) grid_popup_blid_pane

0xca7f,	// (0x00097aad) heading_pane_cp05_ParamLimits

0xca7f,	// (0x00097aad) heading_pane_cp05

0xcb49,	// (0x00097b77) cell_popup_blid_pane_ParamLimits

0xcb49,	// (0x00097b77) cell_popup_blid_pane

0xcb6d,	// (0x00097b9b) cell_popup_blid_pane_g1

0xcb75,	// (0x00097ba3) cell_popup_blid_pane_t1

0x4cc5,	// (0x0008fcf3) mup2_indicator_pane_ParamLimits

0x4cc5,	// (0x0008fcf3) mup2_indicator_pane

0xa9ad,	// (0x000959db) mup2_visualizer_osc_pane

0xc913,	// (0x00097941) mup2_visualizer_spec_pane_ParamLimits

0xc913,	// (0x00097941) mup2_visualizer_spec_pane

0x4e41,	// (0x0008fe6f) mup2_spec_half_pane

0x4e4a,	// (0x0008fe78) mup2_spec_half_pane_cp

0x4e52,	// (0x0008fe80) mup2_spec_bar_pane_ParamLimits

0x4e52,	// (0x0008fe80) mup2_spec_bar_pane

0xc8b4,	// (0x000978e2) mup2_spec_bar_pane_g1

0xc8be,	// (0x000978ec) mup2_spec_bar_pane_g2

0x0001,

0xf619,	// (0x0009a647) mup2_spec_bar_pane_g

0x4e72,	// (0x0008fea0) mup2_osc_middle_pane

0xc8d0,	// (0x000978fe) mup2_visualizer_osc_pane_g1

0x96f6,	// (0x00094724) popup_number_entry_window_t1_ParamLimits

0x9709,	// (0x00094737) popup_number_entry_window_t2_ParamLimits

0x971b,	// (0x00094749) popup_number_entry_window_t3_ParamLimits

0x1199,	// (0x0008c1c7) popup_number_entry_window_t5_ParamLimits

0x1199,	// (0x0008c1c7) popup_number_entry_window_t5

0xf0ca,	// (0x0009a0f8) popup_number_entry_window_t_ParamLimits

0x972d,	// (0x0009475b) text_title_cp2_ParamLimits

0x9ba9,	// (0x00094bd7) aid_hotspot_pointer_text2_pane

0x9bcf,	// (0x00094bfd) main_viewer_pane_g9_ParamLimits

0x9bcf,	// (0x00094bfd) main_viewer_pane_g9

0xacdf,	// (0x00095d0d) cale_month_pane_t1_ParamLimits

0xad1c,	// (0x00095d4a) bg_cale_pane_ParamLimits

0xad34,	// (0x00095d62) list_cale_pane_ParamLimits

0xad45,	// (0x00095d73) listscroll_cale_day_pane_t1

0xad57,	// (0x00095d85) scroll_pane_cp09_ParamLimits

0x35e7,	// (0x0008e615) main_mup_eq_pane_t1_ParamLimits

0x35e7,	// (0x0008e615) main_mup_eq_pane_t1

0x3601,	// (0x0008e62f) main_mup_eq_pane_t2_ParamLimits

0x3601,	// (0x0008e62f) main_mup_eq_pane_t2

0x361b,	// (0x0008e649) main_mup_eq_pane_t3_ParamLimits

0x361b,	// (0x0008e649) main_mup_eq_pane_t3

0x3637,	// (0x0008e665) main_mup_eq_pane_t4_ParamLimits

0x3637,	// (0x0008e665) main_mup_eq_pane_t4

0x3653,	// (0x0008e681) main_mup_eq_pane_t5_ParamLimits

0x3653,	// (0x0008e681) main_mup_eq_pane_t5

0x366f,	// (0x0008e69d) main_mup_eq_pane_t6_ParamLimits

0x366f,	// (0x0008e69d) main_mup_eq_pane_t6

0x3683,	// (0x0008e6b1) main_mup_eq_pane_t7_ParamLimits

0x3683,	// (0x0008e6b1) main_mup_eq_pane_t7

0x3697,	// (0x0008e6c5) main_mup_eq_pane_t8_ParamLimits

0x3697,	// (0x0008e6c5) main_mup_eq_pane_t8

0x36ab,	// (0x0008e6d9) main_mup_eq_pane_t9_ParamLimits

0x36ab,	// (0x0008e6d9) main_mup_eq_pane_t9

0x36c5,	// (0x0008e6f3) main_mup_eq_pane_t10_ParamLimits

0x36c5,	// (0x0008e6f3) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x0009a483) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x0009a483) main_mup_eq_pane_t

0x3774,	// (0x0008e7a2) mup_equalizer_pane_cp5_ParamLimits

0x3788,	// (0x0008e7b6) mup_equalizer_pane_cp6_ParamLimits

0x379c,	// (0x0008e7ca) mup_equalizer_pane_cp7_ParamLimits

0x966e,	// (0x0009469c) main_gallery_pane

0xc8d9,	// (0x00097907) smil2_volume_pane

0xc8e1,	// (0x0009790f) smil_status_volume_pane_g1_ParamLimits

0xc8f4,	// (0x00097922) smil_status_volume_pane_g2_ParamLimits

0x9c2f,	// (0x00094c5d) smil_status_volume_pane_g3_ParamLimits

0xf61e,	// (0x0009a64c) smil_status_volume_pane_g_ParamLimits

0xca52,	// (0x00097a80) bg_popup_window_pane_cp07_ParamLimits

0xca60,	// (0x00097a8e) blid_firmament_pane

0x4e7b,	// (0x0008fea9) aid_size_cell_gallery_ParamLimits

0x4e7b,	// (0x0008fea9) aid_size_cell_gallery

0x4e91,	// (0x0008febf) grid_gallery_pane_ParamLimits

0x4e91,	// (0x0008febf) grid_gallery_pane

0x4eaa,	// (0x0008fed8) cell_gallery_pane_ParamLimits

0x4eaa,	// (0x0008fed8) cell_gallery_pane

0xcb83,	// (0x00097bb1) bg_cell_gallery_focus_pane_ParamLimits

0xcb83,	// (0x00097bb1) bg_cell_gallery_focus_pane

0xcb95,	// (0x00097bc3) cell_gallery_pane_g1_ParamLimits

0xcb95,	// (0x00097bc3) cell_gallery_pane_g1

0x4ef3,	// (0x0008ff21) cell_gallery_pane_g2_ParamLimits

0x4ef3,	// (0x0008ff21) cell_gallery_pane_g2

0x4f00,	// (0x0008ff2e) cell_gallery_pane_g3_ParamLimits

0x4f00,	// (0x0008ff2e) cell_gallery_pane_g3

0xcba1,	// (0x00097bcf) cell_gallery_pane_g4_ParamLimits

0xcba1,	// (0x00097bcf) cell_gallery_pane_g4

0x0003,

0xf6cc,	// (0x0009a6fa) cell_gallery_pane_g_ParamLimits

0xf6cc,	// (0x0009a6fa) cell_gallery_pane_g

0xcbad,	// (0x00097bdb) bg_cell_gallery_focus_pane_g1

0xcbb5,	// (0x00097be3) bg_cell_gallery_focus_pane_g2

0xcbbd,	// (0x00097beb) bg_cell_gallery_focus_pane_g3

0xcbc5,	// (0x00097bf3) bg_cell_gallery_focus_pane_g4

0xcbcd,	// (0x00097bfb) bg_cell_gallery_focus_pane_g5

0xcbd5,	// (0x00097c03) bg_cell_gallery_focus_pane_g6

0xcbdd,	// (0x00097c0b) bg_cell_gallery_focus_pane_g7

0xcbe5,	// (0x00097c13) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6d5,	// (0x0009a703) bg_cell_gallery_focus_pane_g

0xcbed,	// (0x00097c1b) aid_firma_cardinal

0xcc01,	// (0x00097c2f) blid_firmament_pane_t1

0xcc18,	// (0x00097c46) blid_firmament_pane_t2

0xcc2f,	// (0x00097c5d) blid_firmament_pane_t3

0xcc46,	// (0x00097c74) blid_firmament_pane_t4

0x0003,

0xf6e6,	// (0x0009a714) blid_firmament_pane_t

0xcc5d,	// (0x00097c8b) blid_sat_info_pane

0xcc6d,	// (0x00097c9b) blid_sat_info_pane_g1

0xcc6d,	// (0x00097c9b) blid_sat_info_pane_g2

0x0001,

0xf6ef,	// (0x0009a71d) blid_sat_info_pane_g

0xcc77,	// (0x00097ca5) blid_sat_info_pane_t1

0xcc85,	// (0x00097cb3) smil2_volume_content_pane

0xcc8e,	// (0x00097cbc) smil2_volume_pane_g1

0xcc96,	// (0x00097cc4) smil2_volume_content_pane_g1

0xcc9f,	// (0x00097ccd) smil2_volume_content_pane_g2

0xcca8,	// (0x00097cd6) smil2_volume_content_pane_g3

0xccb1,	// (0x00097cdf) smil2_volume_content_pane_g4

0xccba,	// (0x00097ce8) smil2_volume_content_pane_g5

0xccc3,	// (0x00097cf1) smil2_volume_content_pane_g6

0xcccc,	// (0x00097cfa) smil2_volume_content_pane_g7

0xccd5,	// (0x00097d03) smil2_volume_content_pane_g8

0xccde,	// (0x00097d0c) smil2_volume_content_pane_g9

0xcce7,	// (0x00097d15) smil2_volume_content_pane_g10

0x0009,

0xf6f4,	// (0x0009a722) smil2_volume_content_pane_g

0x1902,	// (0x0008c930) cale_week_day_heading_pane_t1_ParamLimits

0x194c,	// (0x0008c97a) cale_week_day_heading_pane_t2_ParamLimits

0x199b,	// (0x0008c9c9) cale_week_day_heading_pane_t3_ParamLimits

0x19ea,	// (0x0008ca18) cale_week_day_heading_pane_t4_ParamLimits

0x1a39,	// (0x0008ca67) cale_week_day_heading_pane_t5_ParamLimits

0x1a90,	// (0x0008cabe) cale_week_day_heading_pane_t6_ParamLimits

0x1ae7,	// (0x0008cb15) cale_week_day_heading_pane_t7_ParamLimits

0xf1d1,	// (0x0009a1ff) cale_week_day_heading_pane_t_ParamLimits

0xa952,	// (0x00095980) bg_cale_side_pane_ParamLimits

0x1b31,	// (0x0008cb5f) cale_week_time_pane_t1_ParamLimits

0x1b4b,	// (0x0008cb79) cale_week_time_pane_t2_ParamLimits

0x1b65,	// (0x0008cb93) cale_week_time_pane_t3_ParamLimits

0x1b7f,	// (0x0008cbad) cale_week_time_pane_t4_ParamLimits

0x1b99,	// (0x0008cbc7) cale_week_time_pane_t5_ParamLimits

0x1bb3,	// (0x0008cbe1) cale_week_time_pane_t6_ParamLimits

0x1bcd,	// (0x0008cbfb) cale_week_time_pane_t7_ParamLimits

0x1be7,	// (0x0008cc15) cale_week_time_pane_t8_ParamLimits

0xf1e0,	// (0x0009a20e) cale_week_time_pane_t_ParamLimits

0x1c07,	// (0x0008cc35) cell_cale_week_pane_g2_ParamLimits

0xa952,	// (0x00095980) bg_cale_side_pane_cp01_ParamLimits

0x2dba,	// (0x0008dde8) cale_month_week_pane_t1_ParamLimits

0x2dd3,	// (0x0008de01) cale_month_week_pane_t2_ParamLimits

0x2dec,	// (0x0008de1a) cale_month_week_pane_t3_ParamLimits

0x2e05,	// (0x0008de33) cale_month_week_pane_t4_ParamLimits

0x2e1e,	// (0x0008de4c) cale_month_week_pane_t5_ParamLimits

0x2e37,	// (0x0008de65) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x0009a2e3) cale_month_week_pane_t_ParamLimits

0x9ad0,	// (0x00094afe) cell_cale_month_pane_g1_ParamLimits

0x966e,	// (0x0009469c) main_cale_event_viewer_pane

0x966e,	// (0x0009469c) listscroll_cale_event_viewer_pane

0xccf0,	// (0x00097d1e) list_cale_ev_pane

0xccf8,	// (0x00097d26) scroll_pane_cp023

0xcd04,	// (0x00097d32) field_cale_ev_pane_ParamLimits

0xcd04,	// (0x00097d32) field_cale_ev_pane

0xcd22,	// (0x00097d50) field_cale_ev_content_pane_ParamLimits

0xcd22,	// (0x00097d50) field_cale_ev_content_pane

0xcd2e,	// (0x00097d5c) field_cale_ev_pane_g1_ParamLimits

0xcd2e,	// (0x00097d5c) field_cale_ev_pane_g1

0xcd3a,	// (0x00097d68) field_cale_ev_pane_g2_ParamLimits

0xcd3a,	// (0x00097d68) field_cale_ev_pane_g2

0xcd52,	// (0x00097d80) field_cale_ev_pane_g3_ParamLimits

0xcd52,	// (0x00097d80) field_cale_ev_pane_g3

0x0002,

0xf709,	// (0x0009a737) field_cale_ev_pane_g_ParamLimits

0xf709,	// (0x0009a737) field_cale_ev_pane_g

0xcd6a,	// (0x00097d98) field_cale_ev_pane_t1_ParamLimits

0xcd6a,	// (0x00097d98) field_cale_ev_pane_t1

0xa8c5,	// (0x000958f3) field_cale_ev_content_pane_t1_ParamLimits

0xa8c5,	// (0x000958f3) field_cale_ev_content_pane_t1

0xb577,	// (0x000965a5) bg_button_pane_cp01

0x162f,	// (0x0008c65d) listscroll_cale_week_pane_ParamLimits

0xa8fd,	// (0x0009592b) popup_toolbar_window_cp01

0xa923,	// (0x00095951) listscroll_cale_week_pane_t1_ParamLimits

0x162f,	// (0x0008c65d) listscroll_cale_day_pane_ParamLimits

0xa8fd,	// (0x0009592b) popup_toolbar_window_cp02

0xad45,	// (0x00095d73) listscroll_cale_day_pane_t1_ParamLimits

0x162f,	// (0x0008c65d) main_cale_month_pane_ParamLimits

0x9c1a,	// (0x00094c48) popup_toolbar_window_cp03_ParamLimits

0x9c1a,	// (0x00094c48) popup_toolbar_window_cp03

0x3ad0,	// (0x0008eafe) main_image_pane_g2_ParamLimits

0x3ad0,	// (0x0008eafe) main_image_pane_g2

0x3ae1,	// (0x0008eb0f) main_image_pane_g3_ParamLimits

0x3ae1,	// (0x0008eb0f) main_image_pane_g3

0x0002,

0xf4e7,	// (0x0009a515) main_image_pane_g_ParamLimits

0xf4e7,	// (0x0009a515) main_image_pane_g

0xb691,	// (0x000966bf) main_image_pane_t1_ParamLimits

0x3af2,	// (0x0008eb20) main_image_pane_t2_ParamLimits

0x3af2,	// (0x0008eb20) main_image_pane_t2

0x3b04,	// (0x0008eb32) main_image_pane_t3_ParamLimits

0x3b04,	// (0x0008eb32) main_image_pane_t3

0x3b2c,	// (0x0008eb5a) main_image_pane_t4_ParamLimits

0x3b2c,	// (0x0008eb5a) main_image_pane_t4

0x0003,

0xf4ee,	// (0x0009a51c) main_image_pane_t_ParamLimits

0xf4ee,	// (0x0009a51c) main_image_pane_t

0x3b4c,	// (0x0008eb7a) popup_image_details_window_cp01

0x3b56,	// (0x0008eb84) popup_toobar_trans_pane_cp01_ParamLimits

0x3b56,	// (0x0008eb84) popup_toobar_trans_pane_cp01

0x42c9,	// (0x0008f2f7) popup_image_details_window_ParamLimits

0x42c9,	// (0x0008f2f7) popup_image_details_window

0x9bed,	// (0x00094c1b) popup_image_focus_window

0x46e8,	// (0x0008f716) camera2_autofocus_pane_ParamLimits

0x46e8,	// (0x0008f716) camera2_autofocus_pane

0x966e,	// (0x0009469c) bg_popup_sub_pane_cp06

0xcd81,	// (0x00097daf) popup_image_focus_window_g1

0xcd89,	// (0x00097db7) popup_image_focus_window_g2

0xcd91,	// (0x00097dbf) popup_image_focus_window_g3

0xcd99,	// (0x00097dc7) popup_image_focus_window_g4

0x0003,

0xf710,	// (0x0009a73e) popup_image_focus_window_g

0xcda1,	// (0x00097dcf) popup_image_focus_window_t1

0xcdaf,	// (0x00097ddd) popup_image_focus_window_t2

0xcdbf,	// (0x00097ded) popup_image_focus_window_t3

0x0002,

0xf719,	// (0x0009a747) popup_image_focus_window_t

0xcdcd,	// (0x00097dfb) camera2_autofocus_pane_g1

0xa3c3,	// (0x000953f1) bg_tb_trans_pane_cp01

0xcddb,	// (0x00097e09) popup_image_details_window_g1

0xcdee,	// (0x00097e1c) popup_image_details_window_g2

0x0002,

0xf72b,	// (0x0009a759) popup_image_details_window_g

0xce17,	// (0x00097e45) popup_image_details_window_t1

0xce29,	// (0x00097e57) popup_image_details_window_t2

0xce42,	// (0x00097e70) popup_image_details_window_t3

0xce56,	// (0x00097e84) popup_image_details_window_t4

0xce71,	// (0x00097e9f) popup_image_details_window_t5

0x0004,

0xf732,	// (0x0009a760) popup_image_details_window_t

0xa7a4,	// (0x000957d2) bg_calc_paper_pane_ParamLimits

0x966e,	// (0x0009469c) grid_highlight_pane_cp013

0x9a36,	// (0x00094a64) list_calc_pane_ParamLimits

0x9a48,	// (0x00094a76) scroll_pane_cp024

0xa7b8,	// (0x000957e6) bg_calc_display_pane_ParamLimits

0x1493,	// (0x0008c4c1) calc_display_pane_t1_ParamLimits

0x14a5,	// (0x0008c4d3) calc_display_pane_t2_ParamLimits

0x9a50,	// (0x00094a7e) calc_display_pane_t3_ParamLimits

0xf151,	// (0x0009a17f) calc_display_pane_t_ParamLimits

0x1565,	// (0x0008c593) cell_calc_pane_g2

0x0001,

0xf16e,	// (0x0009a19c) cell_calc_pane_g

0x156e,	// (0x0008c59c) cell_calc_pane_t1

0xa817,	// (0x00095845) grid_highlight_pane_cp02_ParamLimits

0xa82d,	// (0x0009585b) toolbar_button_pane_cp01_ParamLimits

0xa82d,	// (0x0009585b) toolbar_button_pane_cp01

0xb6d6,	// (0x00096704) temp_image_control_pane_ParamLimits

0xb6d6,	// (0x00096704) temp_image_control_pane

0xa3c3,	// (0x000953f1) main_mp3_pane

0xce8b,	// (0x00097eb9) temp_image_control_pane_g1_ParamLimits

0xce8b,	// (0x00097eb9) temp_image_control_pane_g1

0xce99,	// (0x00097ec7) temp_image_control_pane_g2_ParamLimits

0xce99,	// (0x00097ec7) temp_image_control_pane_g2

0xceab,	// (0x00097ed9) temp_image_control_pane_g3_ParamLimits

0xceab,	// (0x00097ed9) temp_image_control_pane_g3

0x4f3d,	// (0x0008ff6b) temp_image_control_pane_g4_ParamLimits

0x4f3d,	// (0x0008ff6b) temp_image_control_pane_g4

0x0003,

0xf73d,	// (0x0009a76b) temp_image_control_pane_g_ParamLimits

0xf73d,	// (0x0009a76b) temp_image_control_pane_g

0xce8b,	// (0x00097eb9) main_mp3_pane_g1

0x4f50,	// (0x0008ff7e) main_mp3_pane_g2

0x0007,

0xf746,	// (0x0009a774) main_mp3_pane_g

0xceee,	// (0x00097f1c) main_mp3_pane_t1

0xa9b5,	// (0x000959e3) main_camera_pane_g8_ParamLimits

0xa9b5,	// (0x000959e3) main_camera_pane_g8

0x1f0b,	// (0x0008cf39) main_video_pane_g7_ParamLimits

0x1f0b,	// (0x0008cf39) main_video_pane_g7

0x9c6f,	// (0x00094c9d) main_camera2_pane_t7_ParamLimits

0x9c6f,	// (0x00094c9d) main_camera2_pane_t7

0xaafd,	// (0x00095b2b) scroll_pane_cp025_ParamLimits

0xaafd,	// (0x00095b2b) scroll_pane_cp025

0xab11,	// (0x00095b3f) scroll_pane_cp026_ParamLimits

0xab11,	// (0x00095b3f) scroll_pane_cp026

0xab20,	// (0x00095b4e) wml_content_pane_ParamLimits

0x966e,	// (0x0009469c) main_touch_calib_pane

0x5024,	// (0x00090052) main_touch_calib_pane_g1

0x5036,	// (0x00090064) main_touch_calib_pane_g2

0x5048,	// (0x00090076) main_touch_calib_pane_g3

0x505a,	// (0x00090088) main_touch_calib_pane_g4

0x0003,

0xf764,	// (0x0009a792) main_touch_calib_pane_g

0x506c,	// (0x0009009a) main_touch_calib_pane_t1

0x5086,	// (0x000900b4) main_touch_calib_pane_t2

0x0004,

0xf76d,	// (0x0009a79b) main_touch_calib_pane_t

0xb2a3,	// (0x000962d1) mup_progress_pane_cp02

0xb2d8,	// (0x00096306) navi_pane_g1

0xb393,	// (0x000963c1) navi_pane_mp_t3

0xa3c3,	// (0x000953f1) main_mp3_pane_ParamLimits

0x4454,	// (0x0008f482) navi_pane_ParamLimits

0xce8b,	// (0x00097eb9) main_mp3_pane_g1_ParamLimits

0x4f50,	// (0x0008ff7e) main_mp3_pane_g2_ParamLimits

0x4f5e,	// (0x0008ff8c) main_mp3_pane_g3_ParamLimits

0x4f5e,	// (0x0008ff8c) main_mp3_pane_g3

0x4f6c,	// (0x0008ff9a) main_mp3_pane_g4_ParamLimits

0x4f6c,	// (0x0008ff9a) main_mp3_pane_g4

0xcebb,	// (0x00097ee9) main_mp3_pane_g5_ParamLimits

0xcebb,	// (0x00097ee9) main_mp3_pane_g5

0xcec9,	// (0x00097ef7) main_mp3_pane_g6_ParamLimits

0xcec9,	// (0x00097ef7) main_mp3_pane_g6

0xced6,	// (0x00097f04) main_mp3_pane_g7_ParamLimits

0xced6,	// (0x00097f04) main_mp3_pane_g7

0xcee2,	// (0x00097f10) main_mp3_pane_g8_ParamLimits

0xcee2,	// (0x00097f10) main_mp3_pane_g8

0xf746,	// (0x0009a774) main_mp3_pane_g_ParamLimits

0x4f78,	// (0x0008ffa6) main_mp3_pane_t2

0x4f86,	// (0x0008ffb4) main_mp3_pane_t3

0xcefc,	// (0x00097f2a) main_mp3_pane_t4

0xcf0a,	// (0x00097f38) main_mp3_pane_t5

0x0005,

0xf757,	// (0x0009a785) main_mp3_pane_t

0xcf18,	// (0x00097f46) mup_progress_pane_cp01

0x968c,	// (0x000946ba) aid_zoom_text_secondary2

0xccf0,	// (0x00097d1e) list_cale_ev2_pane

0xccf8,	// (0x00097d26) scroll_pane_cp023_ParamLimits

0x50dc,	// (0x0009010a) field_cale_ev2_pane_ParamLimits

0x50dc,	// (0x0009010a) field_cale_ev2_pane

0x9cee,	// (0x00094d1c) field_cale_ev2_pane_g1_ParamLimits

0x9cee,	// (0x00094d1c) field_cale_ev2_pane_g1

0x9cfa,	// (0x00094d28) field_cale_ev2_pane_g2_ParamLimits

0x9cfa,	// (0x00094d28) field_cale_ev2_pane_g2

0x9d12,	// (0x00094d40) field_cale_ev2_pane_g3_ParamLimits

0x9d12,	// (0x00094d40) field_cale_ev2_pane_g3

0x0003,

0xf778,	// (0x0009a7a6) field_cale_ev2_pane_g_ParamLimits

0xf778,	// (0x0009a7a6) field_cale_ev2_pane_g

0x50fd,	// (0x0009012b) field_cale_ev2_pane_t1_ParamLimits

0x50fd,	// (0x0009012b) field_cale_ev2_pane_t1

0x5114,	// (0x00090142) field_cale_ev2_pane_t2_ParamLimits

0x5114,	// (0x00090142) field_cale_ev2_pane_t2

0x0001,

0xf781,	// (0x0009a7af) field_cale_ev2_pane_t_ParamLimits

0xf781,	// (0x0009a7af) field_cale_ev2_pane_t

0x3984,	// (0x0008e9b2) main_postcard_pane_g5_ParamLimits

0x3984,	// (0x0008e9b2) main_postcard_pane_g5

0x399a,	// (0x0008e9c8) main_postcard_pane_g6_ParamLimits

0x399a,	// (0x0008e9c8) main_postcard_pane_g6

0x1cd1,	// (0x0008ccff) camera2_autofocus_pane_cp_ParamLimits

0x1cd1,	// (0x0008ccff) camera2_autofocus_pane_cp

0xa3c3,	// (0x000953f1) main_mup3_pane

0x5149,	// (0x00090177) main_mup3_pane_g1_ParamLimits

0x5149,	// (0x00090177) main_mup3_pane_g1

0x516b,	// (0x00090199) main_mup3_pane_g2_ParamLimits

0x516b,	// (0x00090199) main_mup3_pane_g2

0x51eb,	// (0x00090219) main_mup3_pane_g3_ParamLimits

0x51eb,	// (0x00090219) main_mup3_pane_g3

0x5231,	// (0x0009025f) main_mup3_pane_g4_ParamLimits

0x5231,	// (0x0009025f) main_mup3_pane_g4

0x5277,	// (0x000902a5) main_mup3_pane_g5_ParamLimits

0x5277,	// (0x000902a5) main_mup3_pane_g5

0x52bd,	// (0x000902eb) main_mup3_pane_g6_ParamLimits

0x52bd,	// (0x000902eb) main_mup3_pane_g6

0xcf20,	// (0x00097f4e) main_mup3_pane_g7_ParamLimits

0xcf20,	// (0x00097f4e) main_mup3_pane_g7

0x0007,

0xf791,	// (0x0009a7bf) main_mup3_pane_g_ParamLimits

0xf791,	// (0x0009a7bf) main_mup3_pane_g

0x533b,	// (0x00090369) main_mup3_pane_t1_ParamLimits

0x533b,	// (0x00090369) main_mup3_pane_t1

0x53af,	// (0x000903dd) main_mup3_pane_t2_ParamLimits

0x53af,	// (0x000903dd) main_mup3_pane_t2

0x5483,	// (0x000904b1) main_mup3_pane_t4_ParamLimits

0x5483,	// (0x000904b1) main_mup3_pane_t4

0x54d9,	// (0x00090507) main_mup3_pane_t5_ParamLimits

0x54d9,	// (0x00090507) main_mup3_pane_t5

0x5595,	// (0x000905c3) main_mup3_pane_t6_ParamLimits

0x5595,	// (0x000905c3) main_mup3_pane_t6

0x0005,

0xf7a2,	// (0x0009a7d0) main_mup3_pane_t_ParamLimits

0xf7a2,	// (0x0009a7d0) main_mup3_pane_t

0x564d,	// (0x0009067b) mup3_progress_pane_ParamLimits

0x564d,	// (0x0009067b) mup3_progress_pane

0x56d9,	// (0x00090707) popup_mup3_control_window_ParamLimits

0x56d9,	// (0x00090707) popup_mup3_control_window

0xcf2e,	// (0x00097f5c) popup_mup3_text_window

0x570b,	// (0x00090739) mup3_progress_pane_t1

0x572a,	// (0x00090758) mup3_progress_pane_t2

0xcf36,	// (0x00097f64) mup3_progress_pane_t3

0x0002,

0xf7af,	// (0x0009a7dd) mup3_progress_pane_t

0xcf53,	// (0x00097f81) mup_progress_pane_cp03

0x966e,	// (0x0009469c) bg_tb_trans_pane_cp04

0x5749,	// (0x00090777) mup3_volume_pane

0x5751,	// (0x0009077f) popup_mup3_control_window_g1

0x575a,	// (0x00090788) mup3_volume_pane_g1

0x5763,	// (0x00090791) mup3_volume_pane_g2

0x576c,	// (0x0009079a) mup3_volume_pane_g3

0x0002,

0xf7b6,	// (0x0009a7e4) mup3_volume_pane_g

0x966e,	// (0x0009469c) bg_tb_trans_pane_cp03

0xcf63,	// (0x00097f91) popup_mup3_text_window_g1

0xcf6b,	// (0x00097f99) popup_mup3_text_window_t1

0xa800,	// (0x0009582e) list_calc_item_pane_g1_ParamLimits

0xc9b4,	// (0x000979e2) mup_volume_pane_cp_g1

0x50a0,	// (0x000900ce) main_touch_calib_pane_t3

0x50b4,	// (0x000900e2) main_touch_calib_pane_t4

0x50c8,	// (0x000900f6) main_touch_calib_pane_t5

0x9678,	// (0x000946a6) aid_cell_size_toolbar2

0x9680,	// (0x000946ae) aid_popup3_width_pane

0x0f3a,	// (0x0008bf68) aid_zoom_text_msg_primary

0x1cb0,	// (0x0008ccde) vorec_t7

0xa7c4,	// (0x000957f2) bg_calc_paper_pane_g1_ParamLimits

0xa7d0,	// (0x000957fe) bg_calc_paper_pane_g2_ParamLimits

0xa7dc,	// (0x0009580a) bg_calc_paper_pane_g3_ParamLimits

0xa7e8,	// (0x00095816) bg_calc_paper_pane_g4_ParamLimits

0xa7f4,	// (0x00095822) bg_calc_paper_pane_g5_ParamLimits

0x14ee,	// (0x0008c51c) bg_calc_paper_pane_g6_ParamLimits

0x14fd,	// (0x0008c52b) bg_calc_paper_pane_g7_ParamLimits

0x150c,	// (0x0008c53a) bg_calc_paper_pane_g8_ParamLimits

0xf158,	// (0x0009a186) bg_calc_paper_pane_g_ParamLimits

0x151f,	// (0x0008c54d) calc_bg_paper_pane_g9_ParamLimits

0x1e1d,	// (0x0008ce4b) image_qvga_pane_ParamLimits

0x1e1d,	// (0x0008ce4b) image_qvga_pane

0xa6e7,	// (0x00095715) bg_popup_sub_pane_cp04_ParamLimits

0xb60d,	// (0x0009663b) popup_mup_playback_window_g1_ParamLimits

0xb619,	// (0x00096647) popup_mup_playback_window_t1_ParamLimits

0xb62e,	// (0x0009665c) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x0009a510) popup_mup_playback_window_t_ParamLimits

0x4bdf,	// (0x0008fc0d) main_mup2_pane_g3_ParamLimits

0x4bdf,	// (0x0008fc0d) main_mup2_pane_g3

0x2132,	// (0x0008d160) popup_toolbar_window_cp04

0xba23,	// (0x00096a51) popup_call2_audio_second_window_g3_ParamLimits

0xba23,	// (0x00096a51) popup_call2_audio_second_window_g3

0xbe2d,	// (0x00096e5b) popup_call2_audio_first_window_g4_ParamLimits

0xbe2d,	// (0x00096e5b) popup_call2_audio_first_window_g4

0xc4ac,	// (0x000974da) popup_call2_audio_in_window_g4_ParamLimits

0xc4ac,	// (0x000974da) popup_call2_audio_in_window_g4

0x3ab2,	// (0x0008eae0) aid_area_sk_bg_cut_ParamLimits

0x3ab2,	// (0x0008eae0) aid_area_sk_bg_cut

0xb643,	// (0x00096671) aid_area_sk_bg_cut_2_ParamLimits

0xb643,	// (0x00096671) aid_area_sk_bg_cut_2

0x4ee3,	// (0x0008ff11) aid_placing_details_win

0x4eeb,	// (0x0008ff19) aid_placing_details_win_2

0xcdcd,	// (0x00097dfb) camera2_autofocus_pane_g1_ParamLimits

0x10e0,	// (0x0008c10e) popup_fixed_preview_cale_window_ParamLimits

0x10e0,	// (0x0008c10e) popup_fixed_preview_cale_window

0xb411,	// (0x0009643f) navi_slider_pane_g3

0xb41a,	// (0x00096448) navi_slider_pane_g4

0xb423,	// (0x00096451) navi_slider_pane_g5

0xb411,	// (0x0009643f) navi_slider_pane_g6

0x9b90,	// (0x00094bbe) navi_slider_pane_g7

0xb544,	// (0x00096572) mup_scale_pane_g3

0xb54d,	// (0x0009657b) mup_scale_pane_g4

0xb556,	// (0x00096584) mup_scale_pane_g5

0x37b0,	// (0x0008e7de) mup_scale_pane_g6

0x37b9,	// (0x0008e7e7) mup_scale_pane_g7

0xb411,	// (0x0009643f) cams2_slider_pane_g3

0xca42,	// (0x00097a70) cams2_slider_pane_g4

0x9cdd,	// (0x00094d0b) cams2_slider_pane_g5

0xb411,	// (0x0009643f) cams2_slider_pane_g6

0x9ce5,	// (0x00094d13) cams2_slider_pane_g7

0xcc6d,	// (0x00097c9b) camera2_autofocus_pane_cp_g1

0xc84d,	// (0x0009787b) bg_popup_preview_window_pane_cp02_ParamLimits

0xc84d,	// (0x0009787b) bg_popup_preview_window_pane_cp02

0xcf79,	// (0x00097fa7) list_fp_cale_pane_ParamLimits

0xcf79,	// (0x00097fa7) list_fp_cale_pane

0xcf85,	// (0x00097fb3) popup_fixed_preview_cale_window_t1_ParamLimits

0xcf85,	// (0x00097fb3) popup_fixed_preview_cale_window_t1

0x5775,	// (0x000907a3) popup_fixed_preview_cale_window_t2_ParamLimits

0x5775,	// (0x000907a3) popup_fixed_preview_cale_window_t2

0x578a,	// (0x000907b8) popup_fixed_preview_cale_window_t3_ParamLimits

0x578a,	// (0x000907b8) popup_fixed_preview_cale_window_t3

0x0002,

0xf7bd,	// (0x0009a7eb) popup_fixed_preview_cale_window_t_ParamLimits

0xf7bd,	// (0x0009a7eb) popup_fixed_preview_cale_window_t

0x579f,	// (0x000907cd) list_single_fp_cale_pane_ParamLimits

0x579f,	// (0x000907cd) list_single_fp_cale_pane

0xcfa3,	// (0x00097fd1) list_single_fp_cale_pane_g1_ParamLimits

0xcfa3,	// (0x00097fd1) list_single_fp_cale_pane_g1

0xcfaf,	// (0x00097fdd) list_single_fp_cale_pane_g2_ParamLimits

0xcfaf,	// (0x00097fdd) list_single_fp_cale_pane_g2

0x0002,

0xf7c4,	// (0x0009a7f2) list_single_fp_cale_pane_g_ParamLimits

0xf7c4,	// (0x0009a7f2) list_single_fp_cale_pane_g

0xcfc8,	// (0x00097ff6) list_single_fp_cale_pane_t1_ParamLimits

0xcfc8,	// (0x00097ff6) list_single_fp_cale_pane_t1

0xcfda,	// (0x00098008) list_single_fp_cale_pane_t2_ParamLimits

0xcfda,	// (0x00098008) list_single_fp_cale_pane_t2

0x0001,

0xf7cb,	// (0x0009a7f9) list_single_fp_cale_pane_t_ParamLimits

0xf7cb,	// (0x0009a7f9) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x966e,	// (0x0009469c) main_dialer_pane

0x57b5,	// (0x000907e3) aid_cell_size_keypad

0x57bf,	// (0x000907ed) dialer_ne_pane

0x57c7,	// (0x000907f5) grid_dialer_command_1_pane

0x57cf,	// (0x000907fd) grid_dialer_command_2_pane

0x57d7,	// (0x00090805) grid_dialer_keypad_pane

0x57e9,	// (0x00090817) bg_popup_call_pane_cp06_ParamLimits

0x57e9,	// (0x00090817) bg_popup_call_pane_cp06

0x57f5,	// (0x00090823) dialer_ne_clear_pane_ParamLimits

0x57f5,	// (0x00090823) dialer_ne_clear_pane

0xd00d,	// (0x0009803b) dialer_ne_pane_g1

0xd015,	// (0x00098043) dialer_ne_pane_t1_ParamLimits

0xd015,	// (0x00098043) dialer_ne_pane_t1

0x5801,	// (0x0009082f) dialer_ne_pane_t2_ParamLimits

0x5801,	// (0x0009082f) dialer_ne_pane_t2

0x582b,	// (0x00090859) dialer_ne_pane_t3_ParamLimits

0x582b,	// (0x00090859) dialer_ne_pane_t3

0x0002,

0xf7d0,	// (0x0009a7fe) dialer_ne_pane_t_ParamLimits

0xf7d0,	// (0x0009a7fe) dialer_ne_pane_t

0x585b,	// (0x00090889) dialer_ne_pane_t3_copy1_ParamLimits

0x585b,	// (0x00090889) dialer_ne_pane_t3_copy1

0x588a,	// (0x000908b8) cell_dialer_keypad_pane_ParamLimits

0x588a,	// (0x000908b8) cell_dialer_keypad_pane

0x58a1,	// (0x000908cf) cell_dialer_command_1_pane_ParamLimits

0x58a1,	// (0x000908cf) cell_dialer_command_1_pane

0x58b7,	// (0x000908e5) cell_dialer_command_2_pane_ParamLimits

0x58b7,	// (0x000908e5) cell_dialer_command_2_pane

0xd027,	// (0x00098055) bg_button_pane_cp02_ParamLimits

0xd027,	// (0x00098055) bg_button_pane_cp02

0x58c6,	// (0x000908f4) cell_dialer_keypad_pane_g1_ParamLimits

0x58c6,	// (0x000908f4) cell_dialer_keypad_pane_g1

0xd027,	// (0x00098055) bg_button_pane_cp03_ParamLimits

0xd027,	// (0x00098055) bg_button_pane_cp03

0x58da,	// (0x00090908) cell_dialer_command_1_pane_g1_ParamLimits

0x58da,	// (0x00090908) cell_dialer_command_1_pane_g1

0xd033,	// (0x00098061) bg_button_pane_cp04

0x58ee,	// (0x0009091c) cell_dialer_command_2_pane_g1

0xa9ad,	// (0x000959db) bg_button_pane_cp06

0xd03b,	// (0x00098069) dialer_ne_clear_pane_g1

0xb2e4,	// (0x00096312) navi_pane_g2

0xb312,	// (0x00096340) navi_pane_g3

0x0002,

0xf3e5,	// (0x0009a413) navi_pane_g

0xb3a1,	// (0x000963cf) navi_pane_mv_g2

0xb3c8,	// (0x000963f6) navi_pane_mv_g5

0x337e,	// (0x0008e3ac) navi_pane_mv_t1

0xa7b8,	// (0x000957e6) main_clock2_pane

0x5939,	// (0x00090967) main_clock2_list_pane_ParamLimits

0x5939,	// (0x00090967) main_clock2_list_pane

0x5971,	// (0x0009099f) main_clock2_pane_t1_ParamLimits

0x5971,	// (0x0009099f) main_clock2_pane_t1

0x59af,	// (0x000909dd) main_clock2_pane_t2_ParamLimits

0x59af,	// (0x000909dd) main_clock2_pane_t2

0x0004,

0xf7dc,	// (0x0009a80a) main_clock2_pane_t_ParamLimits

0xf7dc,	// (0x0009a80a) main_clock2_pane_t

0x5a4d,	// (0x00090a7b) popup_clock_analogue_window_cp03_ParamLimits

0x5a4d,	// (0x00090a7b) popup_clock_analogue_window_cp03

0x5a72,	// (0x00090aa0) popup_clock_digital_window_cp02_ParamLimits

0x5a72,	// (0x00090aa0) popup_clock_digital_window_cp02

0x5ae3,	// (0x00090b11) main_clock2_list_single_pane_ParamLimits

0x5ae3,	// (0x00090b11) main_clock2_list_single_pane

0xa9ad,	// (0x000959db) list_highlight_pane_cp05

0xd075,	// (0x000980a3) main_clock2_list_single_pane_t1

0x2132,	// (0x0008d160) popup_toolbar_window_cp04_ParamLimits

0x4f0d,	// (0x0008ff3b) camera2_autofocus_pane_g2_ParamLimits

0x4f0d,	// (0x0008ff3b) camera2_autofocus_pane_g2

0x4f19,	// (0x0008ff47) camera2_autofocus_pane_g3_ParamLimits

0x4f19,	// (0x0008ff47) camera2_autofocus_pane_g3

0x4f25,	// (0x0008ff53) camera2_autofocus_pane_g4_ParamLimits

0x4f25,	// (0x0008ff53) camera2_autofocus_pane_g4

0x4f31,	// (0x0008ff5f) camera2_autofocus_pane_g5_ParamLimits

0x4f31,	// (0x0008ff5f) camera2_autofocus_pane_g5

0x0004,

0xf720,	// (0x0009a74e) camera2_autofocus_pane_g_ParamLimits

0xf720,	// (0x0009a74e) camera2_autofocus_pane_g

0x5129,	// (0x00090157) camera2_autofocus_pane_cp_g2

0x5131,	// (0x0009015f) camera2_autofocus_pane_cp_g3

0x5139,	// (0x00090167) camera2_autofocus_pane_cp_g4

0x5141,	// (0x0009016f) camera2_autofocus_pane_cp_g5

0x0004,

0xf786,	// (0x0009a7b4) camera2_autofocus_pane_cp_g

0x57e1,	// (0x0009080f) popup_dialer_spcha_window

0x966e,	// (0x0009469c) bg_popup_sub_pane_cp07

0xd083,	// (0x000980b1) list_spcha_pane

0xd08b,	// (0x000980b9) list_single_spcha_pane_ParamLimits

0xd08b,	// (0x000980b9) list_single_spcha_pane

0x966e,	// (0x0009469c) list_highlight_pane_cp06

0xd09c,	// (0x000980ca) list_single_spcha_pane_t1

0xc256,	// (0x00097284) popup_call2_audio_out_window_g4_ParamLimits

0xc256,	// (0x00097284) popup_call2_audio_out_window_g4

0x966e,	// (0x0009469c) main_imed2_pane

0x9bf5,	// (0x00094c23) popup_imed_adjust2_window

0x42e1,	// (0x0008f30f) popup_imed_trans_window_ParamLimits

0x42e1,	// (0x0008f30f) popup_imed_trans_window

0xcaab,	// (0x00097ad9) popup_blid_sat_info2_window_t1

0xcab9,	// (0x00097ae7) popup_blid_sat_info2_window_t2

0x000a,

0xf6b5,	// (0x0009a6e3) popup_blid_sat_info2_window_t

0x5b8d,	// (0x00090bbb) aid_size_cell_colour_35

0x5bad,	// (0x00090bdb) aid_size_cell_colour_112

0x5bcd,	// (0x00090bfb) aid_size_cell_effect

0xc859,	// (0x00097887) bg_tb_trans_pane_cp02

0xae4e,	// (0x00095e7c) heading_imed_pane

0x5bed,	// (0x00090c1b) listscroll_imed_pane

0xd0aa,	// (0x000980d8) heading_imed_pane_g1

0xd0b2,	// (0x000980e0) heading_imed_pane_t1

0xd0c0,	// (0x000980ee) grid_imed_colour_35_pane_ParamLimits

0xd0c0,	// (0x000980ee) grid_imed_colour_35_pane

0x5bf9,	// (0x00090c27) grid_imed_effect_pane

0xd0d8,	// (0x00098106) list_imed_aspect_pane

0x5c0f,	// (0x00090c3d) scroll_pane_cp027_ParamLimits

0x5c0f,	// (0x00090c3d) scroll_pane_cp027

0x5c20,	// (0x00090c4e) cell_imed_effect_pane_ParamLimits

0x5c20,	// (0x00090c4e) cell_imed_effect_pane

0xd0e0,	// (0x0009810e) cell_imed_colour_pane_ParamLimits

0xd0e0,	// (0x0009810e) cell_imed_colour_pane

0xd122,	// (0x00098150) cell_imed_colour_pane_g1_ParamLimits

0xd122,	// (0x00098150) cell_imed_colour_pane_g1

0xd133,	// (0x00098161) hgihlgiht_grid_pane_cp016_ParamLimits

0xd133,	// (0x00098161) hgihlgiht_grid_pane_cp016

0x5c47,	// (0x00090c75) cell_imed_effect_pane_g1

0x5c4f,	// (0x00090c7d) grid_highlight_pane_cp017

0xd144,	// (0x00098172) list_imed_single_pane_ParamLimits

0xd144,	// (0x00098172) list_imed_single_pane

0x966e,	// (0x0009469c) list_highlight_pane_cp07

0xd159,	// (0x00098187) list_imed_aspect_pane_comp1_t1

0xc859,	// (0x00097887) bg_tb_trans_pane_cp05

0xd17b,	// (0x000981a9) popup_imed_adjust2_window_g1

0xd1a2,	// (0x000981d0) popup_imed_adjust2_window_t1

0xd1ba,	// (0x000981e8) slider_imed_adjust_pane

0xd1ce,	// (0x000981fc) slider_imed_adjust_pane_g1

0xd1de,	// (0x0009820c) slider_imed_adjust_pane_g2

0xd1ee,	// (0x0009821c) slider_imed_adjust_pane_g3

0xd1ff,	// (0x0009822d) slider_imed_adjust_pane_g4

0x0003,

0xf7f9,	// (0x0009a827) slider_imed_adjust_pane_g

0x5c58,	// (0x00090c86) aid_size_cell_clipart2

0x5c64,	// (0x00090c92) grid_imed_clipart_pane

0xd210,	// (0x0009823e) scroll_pane_cp031

0x5c6e,	// (0x00090c9c) cell_imed_clipart_pane_ParamLimits

0x5c6e,	// (0x00090c9c) cell_imed_clipart_pane

0x5c90,	// (0x00090cbe) cell_imed_clipart_pane_g1

0x966e,	// (0x0009469c) grid_highlight_pane_cp014

0x594e,	// (0x0009097c) main_clock2_pane_g1_ParamLimits

0x594e,	// (0x0009097c) main_clock2_pane_g1

0x5a8e,	// (0x00090abc) aid_call2_pane_cp10

0x5aa0,	// (0x00090ace) aid_call_pane_cp10

0xb243,	// (0x00096271) popup_clock_analogue_window_cp10_g1

0xb243,	// (0x00096271) popup_clock_analogue_window_cp10_g2

0x5ab2,	// (0x00090ae0) popup_clock_analogue_window_cp10_g3

0x5ab2,	// (0x00090ae0) popup_clock_analogue_window_cp10_g4

0xb243,	// (0x00096271) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7e7,	// (0x0009a815) popup_clock_analogue_window_cp10_g

0x5ac4,	// (0x00090af2) popup_clock_analogue_window_cp10_t1

0x5af5,	// (0x00090b23) clock_digital_number_pane_cp10_ParamLimits

0x5af5,	// (0x00090b23) clock_digital_number_pane_cp10

0x5b0d,	// (0x00090b3b) clock_digital_number_pane_cp11_ParamLimits

0x5b0d,	// (0x00090b3b) clock_digital_number_pane_cp11

0x5b25,	// (0x00090b53) clock_digital_number_pane_cp12_ParamLimits

0x5b25,	// (0x00090b53) clock_digital_number_pane_cp12

0x5b3d,	// (0x00090b6b) clock_digital_number_pane_cp13_ParamLimits

0x5b3d,	// (0x00090b6b) clock_digital_number_pane_cp13

0x5b55,	// (0x00090b83) clock_digital_separator_pane_cp10_ParamLimits

0x5b55,	// (0x00090b83) clock_digital_separator_pane_cp10

0x5b6d,	// (0x00090b9b) popup_clock_digital_window_cp02_t1_ParamLimits

0x5b6d,	// (0x00090b9b) popup_clock_digital_window_cp02_t1

0xa6df,	// (0x0009570d) clock_digital_number_pane_cp10_g1

0xa6df,	// (0x0009570d) clock_digital_number_pane_cp10_g2

0x0001,

0xf802,	// (0x0009a830) clock_digital_number_pane_cp10_g

0xa6df,	// (0x0009570d) clock_digital_separator_pane_cp10_g1

0xa6df,	// (0x0009570d) clock_digital_separator_pane_g2_cp10

0xb3d0,	// (0x000963fe) navi_pane_vded_g4

0xb3d9,	// (0x00096407) navi_pane_vded_g5

0xb3e2,	// (0x00096410) navi_pane_vded_t1

0x966e,	// (0x0009469c) main_vded_pane

0x5c99,	// (0x00090cc7) main_vded_pane_g1

0x5ca3,	// (0x00090cd1) main_vded_pane_g2

0x5cad,	// (0x00090cdb) main_vded_pane_g3

0x0002,

0xf807,	// (0x0009a835) main_vded_pane_g

0x5cb7,	// (0x00090ce5) main_vded_pane_t1

0x5cc5,	// (0x00090cf3) main_vded_pane_t2

0x0001,

0xf80e,	// (0x0009a83c) main_vded_pane_t

0x5cd3,	// (0x00090d01) vded_slider_pane

0x5cdb,	// (0x00090d09) vded_video_pane

0xd218,	// (0x00098246) vded_video_pane_g1

0x5ce3,	// (0x00090d11) vded_video_pane_g2

0xcc6d,	// (0x00097c9b) vded_video_pane_g3

0x0002,

0xf813,	// (0x0009a841) vded_video_pane_g

0xd222,	// (0x00098250) vded_slider_pane_g1

0xc9b4,	// (0x000979e2) vded_slider_pane_g2

0xd22b,	// (0x00098259) vded_slider_pane_g3

0xd234,	// (0x00098262) vded_slider_pane_g4

0xd23d,	// (0x0009826b) vded_slider_pane_g5

0x0004,

0xf81a,	// (0x0009a848) vded_slider_pane_g

0x56c1,	// (0x000906ef) mup3_rocker_pane_ParamLimits

0x56c1,	// (0x000906ef) mup3_rocker_pane

0x5cec,	// (0x00090d1a) mup3_control_keys_pane_g1

0x5cf4,	// (0x00090d22) mup3_control_keys_pane_g2

0x5cfc,	// (0x00090d2a) mup3_control_keys_pane_g3

0x5d04,	// (0x00090d32) mup3_control_keys_pane_g4

0x0003,

0xf825,	// (0x0009a853) mup3_control_keys_pane_g

0x1117,	// (0x0008c145) popup_toolbar2_fixed_window_cp01_ParamLimits

0x1117,	// (0x0008c145) popup_toolbar2_fixed_window_cp01

0x56f5,	// (0x00090723) popup_toolbar2_fixed_window_cp02_ParamLimits

0x56f5,	// (0x00090723) popup_toolbar2_fixed_window_cp02

0xbb95,	// (0x00096bc3) popup_call2_audio_second_window_t4_ParamLimits

0xbb95,	// (0x00096bc3) popup_call2_audio_second_window_t4

0xc0c3,	// (0x000970f1) popup_call2_audio_first_window_t6_ParamLimits

0xc0c3,	// (0x000970f1) popup_call2_audio_first_window_t6

0xc359,	// (0x00097387) popup_call2_audio_out_window_t6_ParamLimits

0xc359,	// (0x00097387) popup_call2_audio_out_window_t6

0x966e,	// (0x0009469c) main_vitu_pane

0x5d14,	// (0x00090d42) aid_size_cell_itu_ParamLimits

0x5d14,	// (0x00090d42) aid_size_cell_itu

0xa3c3,	// (0x000953f1) bg_popup_window_pane_cp08_ParamLimits

0xa3c3,	// (0x000953f1) bg_popup_window_pane_cp08

0x5d2a,	// (0x00090d58) field_vitu_entry_pane_ParamLimits

0x5d2a,	// (0x00090d58) field_vitu_entry_pane

0x5d42,	// (0x00090d70) grid_vitu_function_pane_ParamLimits

0x5d42,	// (0x00090d70) grid_vitu_function_pane

0x5d5d,	// (0x00090d8b) grid_vitu_itu_pane_ParamLimits

0x5d5d,	// (0x00090d8b) grid_vitu_itu_pane

0x5d7b,	// (0x00090da9) cell_vitu_itu_pane_ParamLimits

0x5d7b,	// (0x00090da9) cell_vitu_itu_pane

0x5d9d,	// (0x00090dcb) cell_vitu_function_pane_ParamLimits

0x5d9d,	// (0x00090dcb) cell_vitu_function_pane

0xa3c3,	// (0x000953f1) bg_popup_sub_pane_cp08_ParamLimits

0xa3c3,	// (0x000953f1) bg_popup_sub_pane_cp08

0x5db6,	// (0x00090de4) field_vitu_entry_pane_t1_ParamLimits

0x5db6,	// (0x00090de4) field_vitu_entry_pane_t1

0xd25e,	// (0x0009828c) field_vitu_entry_pane_t2_ParamLimits

0xd25e,	// (0x0009828c) field_vitu_entry_pane_t2

0x0001,

0xf833,	// (0x0009a861) field_vitu_entry_pane_t_ParamLimits

0xf833,	// (0x0009a861) field_vitu_entry_pane_t

0xd27b,	// (0x000982a9) bg_button_pane_cp05_ParamLimits

0xd27b,	// (0x000982a9) bg_button_pane_cp05

0x5dd5,	// (0x00090e03) cell_vitu_itu_pane_g1

0x5ded,	// (0x00090e1b) cell_vitu_itu_pane_t1_ParamLimits

0x5ded,	// (0x00090e1b) cell_vitu_itu_pane_t1

0x5dff,	// (0x00090e2d) cell_vitu_itu_pane_t2_ParamLimits

0x5dff,	// (0x00090e2d) cell_vitu_itu_pane_t2

0x0002,

0xf838,	// (0x0009a866) cell_vitu_itu_pane_t_ParamLimits

0xf838,	// (0x0009a866) cell_vitu_itu_pane_t

0xd289,	// (0x000982b7) bg_button_pane_cp07

0x5e34,	// (0x00090e62) cell_vitu_function_pane_g1

0x9a2e,	// (0x00094a5c) main_calc_pane_g1

0x0f2e,	// (0x0008bf5c) aid_visual_content_pane

0x966e,	// (0x0009469c) main_vradio_pane

0x5e3d,	// (0x00090e6b) main_vradio_pane_g1_ParamLimits

0x5e3d,	// (0x00090e6b) main_vradio_pane_g1

0xd293,	// (0x000982c1) main_vradio_pane_g2_ParamLimits

0xd293,	// (0x000982c1) main_vradio_pane_g2

0x0001,

0xf83f,	// (0x0009a86d) main_vradio_pane_g_ParamLimits

0xf83f,	// (0x0009a86d) main_vradio_pane_g

0x5e56,	// (0x00090e84) main_vradio_pane_t1_ParamLimits

0x5e56,	// (0x00090e84) main_vradio_pane_t1

0x5e6b,	// (0x00090e99) main_vradio_pane_t2_ParamLimits

0x5e6b,	// (0x00090e99) main_vradio_pane_t2

0xd2a0,	// (0x000982ce) main_vradio_pane_t3_ParamLimits

0xd2a0,	// (0x000982ce) main_vradio_pane_t3

0x0002,

0xf844,	// (0x0009a872) main_vradio_pane_t_ParamLimits

0xf844,	// (0x0009a872) main_vradio_pane_t

0x5e80,	// (0x00090eae) vradio_rocker_control_pane_ParamLimits

0x5e80,	// (0x00090eae) vradio_rocker_control_pane

0x5e92,	// (0x00090ec0) vradio_station_info_pane_ParamLimits

0x5e92,	// (0x00090ec0) vradio_station_info_pane

0xd2b4,	// (0x000982e2) vradio_frequency_info_pane_ParamLimits

0xd2b4,	// (0x000982e2) vradio_frequency_info_pane

0xcc6d,	// (0x00097c9b) vradio_station_info_pane_g1

0xd2c3,	// (0x000982f1) vradio_station_info_pane_t1_ParamLimits

0xd2c3,	// (0x000982f1) vradio_station_info_pane_t1

0xd2e5,	// (0x00098313) vradio_station_info_pane_t2_ParamLimits

0xd2e5,	// (0x00098313) vradio_station_info_pane_t2

0x0001,

0xf84b,	// (0x0009a879) vradio_station_info_pane_t_ParamLimits

0xf84b,	// (0x0009a879) vradio_station_info_pane_t

0xd2f7,	// (0x00098325) vradio_tuning_pane

0xd2ff,	// (0x0009832d) vradio_rocker_control_pane_g1

0xd307,	// (0x00098335) vradio_rocker_control_pane_g2

0xd30f,	// (0x0009833d) vradio_rocker_control_pane_g3

0xd317,	// (0x00098345) vradio_rocker_control_pane_g4

0xd31f,	// (0x0009834d) vradio_rocker_control_pane_g5

0x0004,

0xf850,	// (0x0009a87e) vradio_rocker_control_pane_g

0x5ea4,	// (0x00090ed2) vradio_frequency_info_pane_g1

0xd327,	// (0x00098355) vradio_frequency_info_pane_t1_ParamLimits

0xd327,	// (0x00098355) vradio_frequency_info_pane_t1

0x5eae,	// (0x00090edc) vradio_tuning_pane_g1

0x5eb9,	// (0x00090ee7) vradio_tuning_pane_t1

0x9694,	// (0x000946c2) area_side_right_pane_ParamLimits

0x9694,	// (0x000946c2) area_side_right_pane

0xc814,	// (0x00097842) status_small_pane_g1

0xc81c,	// (0x0009784a) status_small_pane_g2

0xc825,	// (0x00097853) status_small_pane_g3

0xc82e,	// (0x0009785c) status_small_pane_g4

0x0003,

0xf60b,	// (0x0009a639) status_small_pane_g

0xc837,	// (0x00097865) status_small_pane_t1

0x966e,	// (0x0009469c) main_video3_pane

0xd33b,	// (0x00098369) cams_zoom_vslider_pane

0xd343,	// (0x00098371) image3_wide_pane_ParamLimits

0xd343,	// (0x00098371) image3_wide_pane

0xd35d,	// (0x0009838b) image3_wide_small_pane

0xd369,	// (0x00098397) main_video3_pane_g1_ParamLimits

0xd369,	// (0x00098397) main_video3_pane_g1

0xd385,	// (0x000983b3) main_video3_pane_g2_ParamLimits

0xd385,	// (0x000983b3) main_video3_pane_g2

0x0001,

0xf85b,	// (0x0009a889) main_video3_pane_g_ParamLimits

0xf85b,	// (0x0009a889) main_video3_pane_g

0xd3a1,	// (0x000983cf) main_video3_pane_t1_ParamLimits

0xd3a1,	// (0x000983cf) main_video3_pane_t1

0xd3cc,	// (0x000983fa) main_video3_pane_t2_ParamLimits

0xd3cc,	// (0x000983fa) main_video3_pane_t2

0xd3f7,	// (0x00098425) main_video3_pane_t3_ParamLimits

0xd3f7,	// (0x00098425) main_video3_pane_t3

0x0002,

0xf860,	// (0x0009a88e) main_video3_pane_t_ParamLimits

0xf860,	// (0x0009a88e) main_video3_pane_t

0xd424,	// (0x00098452) cams_zoom_vslider_pane_g1

0xd42d,	// (0x0009845b) cams_zoom_vslider_pane_g2

0x0001,

0xf867,	// (0x0009a895) cams_zoom_vslider_pane_g

0xd435,	// (0x00098463) small_slider_vertical_pane

0xcc6d,	// (0x00097c9b) small_slider_vertical_pane_g1

0xcc6d,	// (0x00097c9b) small_slider_vertical_pane_g2

0xd43d,	// (0x0009846b) small_slider_vertical_pane_g3

0x0002,

0xf86c,	// (0x0009a89a) small_slider_vertical_pane_g

0x966e,	// (0x0009469c) main_hwr_training_pane

0xd446,	// (0x00098474) hwr_training_instruct_pane_ParamLimits

0xd446,	// (0x00098474) hwr_training_instruct_pane

0x5ec8,	// (0x00090ef6) hwr_training_navi_pane_ParamLimits

0x5ec8,	// (0x00090ef6) hwr_training_navi_pane

0x5ee7,	// (0x00090f15) hwr_training_write_pane_ParamLimits

0x5ee7,	// (0x00090f15) hwr_training_write_pane

0x966e,	// (0x0009469c) bg_frame_shadow_pane

0xd47d,	// (0x000984ab) hwr_training_write_pane_g1

0xd485,	// (0x000984b3) hwr_training_write_pane_g2

0xd48d,	// (0x000984bb) hwr_training_write_pane_g3

0xd495,	// (0x000984c3) hwr_training_write_pane_g4

0xd49d,	// (0x000984cb) hwr_training_write_pane_g5

0xd4a5,	// (0x000984d3) hwr_training_write_pane_g6

0xd4ad,	// (0x000984db) hwr_training_write_pane_g7

0x0006,

0xf873,	// (0x0009a8a1) hwr_training_write_pane_g

0x9d36,	// (0x00094d64) hwr_training_navi_pane_g1_ParamLimits

0x9d36,	// (0x00094d64) hwr_training_navi_pane_g1

0x9d48,	// (0x00094d76) hwr_training_navi_pane_g2_ParamLimits

0x9d48,	// (0x00094d76) hwr_training_navi_pane_g2

0x9d5a,	// (0x00094d88) hwr_training_navi_pane_g3_ParamLimits

0x9d5a,	// (0x00094d88) hwr_training_navi_pane_g3

0x9d6a,	// (0x00094d98) hwr_training_navi_pane_g4_ParamLimits

0x9d6a,	// (0x00094d98) hwr_training_navi_pane_g4

0x0004,

0xf882,	// (0x0009a8b0) hwr_training_navi_pane_g_ParamLimits

0xf882,	// (0x0009a8b0) hwr_training_navi_pane_g

0x9d77,	// (0x00094da5) hwr_training_navi_pane_t1

0x5f31,	// (0x00090f5f) list_single_hwr_training_instruct_pane_ParamLimits

0x5f31,	// (0x00090f5f) list_single_hwr_training_instruct_pane

0xd4b5,	// (0x000984e3) list_single_hwr_training_instruct_pane_t1

0xcbad,	// (0x00097bdb) bg_frame_shadow_pane_g1

0xd4c4,	// (0x000984f2) bg_frame_shadow_pane_g2

0xd4cc,	// (0x000984fa) bg_frame_shadow_pane_g3

0xd4d4,	// (0x00098502) bg_frame_shadow_pane_g4

0xd4dc,	// (0x0009850a) bg_frame_shadow_pane_g5

0xd4e4,	// (0x00098512) bg_frame_shadow_pane_g6

0xd4ec,	// (0x0009851a) bg_frame_shadow_pane_g7

0xa883,	// (0x000958b1) bg_frame_shadow_pane_g8

0x0007,

0xf88d,	// (0x0009a8bb) bg_frame_shadow_pane_g

0x966e,	// (0x0009469c) main_video_tele_dialer_pane

0x5f47,	// (0x00090f75) aid_size_cell_video_keypad_ParamLimits

0x5f47,	// (0x00090f75) aid_size_cell_video_keypad

0x5f61,	// (0x00090f8f) grid_video_dialer_keypad_pane_ParamLimits

0x5f61,	// (0x00090f8f) grid_video_dialer_keypad_pane

0x5faf,	// (0x00090fdd) video_down_pane_cp_ParamLimits

0x5faf,	// (0x00090fdd) video_down_pane_cp

0x5fe1,	// (0x0009100f) cell_video_dialer_keypad_pane_ParamLimits

0x5fe1,	// (0x0009100f) cell_video_dialer_keypad_pane

0xd4f4,	// (0x00098522) bg_button_pane_cp08_ParamLimits

0xd4f4,	// (0x00098522) bg_button_pane_cp08

0x6003,	// (0x00091031) cell_video_dialer_keypad_pane_g1_ParamLimits

0x6003,	// (0x00091031) cell_video_dialer_keypad_pane_g1

0x56ab,	// (0x000906d9) mup3_rocker2_pane_ParamLimits

0x56ab,	// (0x000906d9) mup3_rocker2_pane

0xcc6d,	// (0x00097c9b) mup3_rocker2_pane_g1

0x41d0,	// (0x0008f1fe) main_dialer2_pane

0x966e,	// (0x0009469c) main_mp4_pane

0x9d8d,	// (0x00094dbb) main_mp4_pane_g1_ParamLimits

0x9d8d,	// (0x00094dbb) main_mp4_pane_g1

0x9d8d,	// (0x00094dbb) main_mp4_pane_g2_ParamLimits

0x9d8d,	// (0x00094dbb) main_mp4_pane_g2

0x603d,	// (0x0009106b) main_mp4_pane_g3_ParamLimits

0x603d,	// (0x0009106b) main_mp4_pane_g3

0x9d9b,	// (0x00094dc9) main_mp4_pane_g4_ParamLimits

0x9d9b,	// (0x00094dc9) main_mp4_pane_g4

0x9dc3,	// (0x00094df1) main_mp4_pane_g5_ParamLimits

0x9dc3,	// (0x00094df1) main_mp4_pane_g5

0x0005,

0xf8ad,	// (0x0009a8db) main_mp4_pane_g_ParamLimits

0xf8ad,	// (0x0009a8db) main_mp4_pane_g

0x9e13,	// (0x00094e41) main_mp4_pane_t1_ParamLimits

0x9e13,	// (0x00094e41) main_mp4_pane_t1

0x9e6f,	// (0x00094e9d) main_mp4_pane_t2_ParamLimits

0x9e6f,	// (0x00094e9d) main_mp4_pane_t2

0xd500,	// (0x0009852e) main_mp4_pane_t3_ParamLimits

0xd500,	// (0x0009852e) main_mp4_pane_t3

0x9ec1,	// (0x00094eef) main_mp4_pane_t4_ParamLimits

0x9ec1,	// (0x00094eef) main_mp4_pane_t4

0x0003,

0xf8ba,	// (0x0009a8e8) main_mp4_pane_t_ParamLimits

0xf8ba,	// (0x0009a8e8) main_mp4_pane_t

0x9f05,	// (0x00094f33) mp4_progress_pane_ParamLimits

0x9f05,	// (0x00094f33) mp4_progress_pane

0x9f4f,	// (0x00094f7d) mp4_rocker_pane_ParamLimits

0x9f4f,	// (0x00094f7d) mp4_rocker_pane

0xd528,	// (0x00098556) mp4_progress_pane_t1

0xd541,	// (0x0009856f) mp4_progress_pane_t2

0x0001,

0xf8c3,	// (0x0009a8f1) mp4_progress_pane_t

0xd55a,	// (0x00098588) mup_progress_pane_cp04

0xcc6d,	// (0x00097c9b) mp4_rocker_pane_g1

0x6079,	// (0x000910a7) aid_cell_size_keypad2_ParamLimits

0x6079,	// (0x000910a7) aid_cell_size_keypad2

0x608f,	// (0x000910bd) dialer2_ne_pane_ParamLimits

0x608f,	// (0x000910bd) dialer2_ne_pane

0x60a9,	// (0x000910d7) grid_dialer2_keypad_pane_ParamLimits

0x60a9,	// (0x000910d7) grid_dialer2_keypad_pane

0xca52,	// (0x00097a80) bg_popup_call_pane_cp07_ParamLimits

0xca52,	// (0x00097a80) bg_popup_call_pane_cp07

0x60c5,	// (0x000910f3) dialer2_ne_pane_t1_ParamLimits

0x60c5,	// (0x000910f3) dialer2_ne_pane_t1

0x6101,	// (0x0009112f) cell_dialer2_keypad_pane_ParamLimits

0x6101,	// (0x0009112f) cell_dialer2_keypad_pane

0xd578,	// (0x000985a6) bg_button_pane_pane_cp04_ParamLimits

0xd578,	// (0x000985a6) bg_button_pane_pane_cp04

0x6123,	// (0x00091151) cell_dialer2_keypad_pane_g1_ParamLimits

0x6123,	// (0x00091151) cell_dialer2_keypad_pane_g1

0x2006,	// (0x0008d034) aid_placing_vt_set_content_ParamLimits

0x2006,	// (0x0008d034) aid_placing_vt_set_content

0x202e,	// (0x0008d05c) aid_placing_vt_set_title_ParamLimits

0x202e,	// (0x0008d05c) aid_placing_vt_set_title

0x966e,	// (0x0009469c) main_image3_pane

0x61e9,	// (0x00091217) area_side_right_pane_cp01_ParamLimits

0x61e9,	// (0x00091217) area_side_right_pane_cp01

0x9d8d,	// (0x00094dbb) main_image3_pane_g1_ParamLimits

0x9d8d,	// (0x00094dbb) main_image3_pane_g1

0x6200,	// (0x0009122e) main_image3_pane_g2_ParamLimits

0x6200,	// (0x0009122e) main_image3_pane_g2

0x6228,	// (0x00091256) main_image3_pane_g3_ParamLimits

0x6228,	// (0x00091256) main_image3_pane_g3

0x6252,	// (0x00091280) main_image3_pane_g4_ParamLimits

0x6252,	// (0x00091280) main_image3_pane_g4

0x0003,

0xf8d2,	// (0x0009a900) main_image3_pane_g_ParamLimits

0xf8d2,	// (0x0009a900) main_image3_pane_g

0x627c,	// (0x000912aa) main_image3_pane_t1_ParamLimits

0x627c,	// (0x000912aa) main_image3_pane_t1

0x62d4,	// (0x00091302) main_image3_pane_t2_ParamLimits

0x62d4,	// (0x00091302) main_image3_pane_t2

0x6326,	// (0x00091354) main_image3_pane_t3_ParamLimits

0x6326,	// (0x00091354) main_image3_pane_t3

0x0003,

0xf8db,	// (0x0009a909) main_image3_pane_t_ParamLimits

0xf8db,	// (0x0009a909) main_image3_pane_t

0xa3c3,	// (0x000953f1) grid_sctrl_middle_pane_cp01_ParamLimits

0xa3c3,	// (0x000953f1) grid_sctrl_middle_pane_cp01

0x63ae,	// (0x000913dc) cell_sctrl_middle_pane_cp01_ParamLimits

0x63ae,	// (0x000913dc) cell_sctrl_middle_pane_cp01

0x63cb,	// (0x000913f9) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x63cb,	// (0x000913f9) cell_sctrl_middle_pane_cp01_g1

0x966e,	// (0x0009469c) main_call4_pane

0x63e1,	// (0x0009140f) aid_size_button_call4_ParamLimits

0x63e1,	// (0x0009140f) aid_size_button_call4

0x6412,	// (0x00091440) call4_windows_pane_ParamLimits

0x6412,	// (0x00091440) call4_windows_pane

0x6432,	// (0x00091460) grid_call4_button_pane_ParamLimits

0x6432,	// (0x00091460) grid_call4_button_pane

0xd584,	// (0x000985b2) call4_windows_conf_pane

0xd59b,	// (0x000985c9) popup_call4_audio_first_window_ParamLimits

0xd59b,	// (0x000985c9) popup_call4_audio_first_window

0xd5e7,	// (0x00098615) popup_call4_audio_second_window_ParamLimits

0xd5e7,	// (0x00098615) popup_call4_audio_second_window

0xd5fb,	// (0x00098629) popup_call4_audio_wait_window_ParamLimits

0xd5fb,	// (0x00098629) popup_call4_audio_wait_window

0x645f,	// (0x0009148d) cell_call4_button_pane_ParamLimits

0x645f,	// (0x0009148d) cell_call4_button_pane

0x6488,	// (0x000914b6) bg_button_pane_cp09_ParamLimits

0x6488,	// (0x000914b6) bg_button_pane_cp09

0x6494,	// (0x000914c2) cell_call4_button_pane_g1_ParamLimits

0x6494,	// (0x000914c2) cell_call4_button_pane_g1

0x64ba,	// (0x000914e8) cell_call4_button_pane_t1_ParamLimits

0x64ba,	// (0x000914e8) cell_call4_button_pane_t1

0xd643,	// (0x00098671) popup_call4_audio_conf_window_ParamLimits

0xd643,	// (0x00098671) popup_call4_audio_conf_window

0x570b,	// (0x00090739) mup3_progress_pane_t1_ParamLimits

0x572a,	// (0x00090758) mup3_progress_pane_t2_ParamLimits

0xcf36,	// (0x00097f64) mup3_progress_pane_t3_ParamLimits

0xf7af,	// (0x0009a7dd) mup3_progress_pane_t_ParamLimits

0xcf53,	// (0x00097f81) mup_progress_pane_cp03_ParamLimits

0x5d0c,	// (0x00090d3a) mup3_control_keys_pane_g4_copy1

0x9f33,	// (0x00094f61) mp4_rocker2_pane_ParamLimits

0x9f33,	// (0x00094f61) mp4_rocker2_pane

0xd657,	// (0x00098685) mp4_rocker2_pane_g1

0xd65f,	// (0x0009868d) mp4_rocker2_pane_g2

0x9fa1,	// (0x00094fcf) mp4_rocker2_pane_g3

0x9fa9,	// (0x00094fd7) mp4_rocker2_pane_g4

0x9fb1,	// (0x00094fdf) mp4_rocker2_pane_g5

0x0004,

0xf8e4,	// (0x0009a912) mp4_rocker2_pane_g

0x966e,	// (0x0009469c) main_camera4_pane

0x966e,	// (0x0009469c) main_video4_pane

0x5f7d,	// (0x00090fab) main_video_tele_dialer_pane_t1_ParamLimits

0x5f7d,	// (0x00090fab) main_video_tele_dialer_pane_t1

0x5f96,	// (0x00090fc4) main_video_tele_dialer_pane_t2_ParamLimits

0x5f96,	// (0x00090fc4) main_video_tele_dialer_pane_t2

0x0001,

0xf89e,	// (0x0009a8cc) main_video_tele_dialer_pane_t_ParamLimits

0xf89e,	// (0x0009a8cc) main_video_tele_dialer_pane_t

0x64fc,	// (0x0009152a) cam4_autofocus_pane_ParamLimits

0x64fc,	// (0x0009152a) cam4_autofocus_pane

0x6512,	// (0x00091540) cam4_image_uncrop_pane_ParamLimits

0x6512,	// (0x00091540) cam4_image_uncrop_pane

0x652c,	// (0x0009155a) cam4_indicators_pane_ParamLimits

0x652c,	// (0x0009155a) cam4_indicators_pane

0x6557,	// (0x00091585) main_camera4_pane_g1_ParamLimits

0x6557,	// (0x00091585) main_camera4_pane_g1

0x6569,	// (0x00091597) main_camera4_pane_g2_ParamLimits

0x6569,	// (0x00091597) main_camera4_pane_g2

0x657c,	// (0x000915aa) main_camera4_pane_g3_ParamLimits

0x657c,	// (0x000915aa) main_camera4_pane_g3

0x658f,	// (0x000915bd) main_camera4_pane_g4_ParamLimits

0x658f,	// (0x000915bd) main_camera4_pane_g4

0x65a2,	// (0x000915d0) main_camera4_pane_g5_ParamLimits

0x65a2,	// (0x000915d0) main_camera4_pane_g5

0x0005,

0xf8ef,	// (0x0009a91d) main_camera4_pane_g_ParamLimits

0xf8ef,	// (0x0009a91d) main_camera4_pane_g

0x65c6,	// (0x000915f4) main_camera4_pane_t1_ParamLimits

0x65c6,	// (0x000915f4) main_camera4_pane_t1

0xcebb,	// (0x00097ee9) bg_tb_trans_pane_cp06

0x9fdd,	// (0x0009500b) cam4_indicators_pane_g1

0x9fee,	// (0x0009501c) cam4_indicators_pane_g2

0x0002,

0xf90a,	// (0x0009a938) cam4_indicators_pane_g

0xa006,	// (0x00095034) cam4_indicators_pane_t1

0x662a,	// (0x00091658) main_video4_pane_g1_ParamLimits

0x662a,	// (0x00091658) main_video4_pane_g1

0x6639,	// (0x00091667) main_video4_pane_g2_ParamLimits

0x6639,	// (0x00091667) main_video4_pane_g2

0x6648,	// (0x00091676) main_video4_pane_g3_ParamLimits

0x6648,	// (0x00091676) main_video4_pane_g3

0x6657,	// (0x00091685) main_video4_pane_g4_ParamLimits

0x6657,	// (0x00091685) main_video4_pane_g4

0x0004,

0xf911,	// (0x0009a93f) main_video4_pane_g_ParamLimits

0xf911,	// (0x0009a93f) main_video4_pane_g

0x6675,	// (0x000916a3) vid4_indicators_pane_ParamLimits

0x6675,	// (0x000916a3) vid4_indicators_pane

0x66a3,	// (0x000916d1) video4_image_uncrop_cif_pane_ParamLimits

0x66a3,	// (0x000916d1) video4_image_uncrop_cif_pane

0x66bd,	// (0x000916eb) video4_image_uncrop_nhd_pane_ParamLimits

0x66bd,	// (0x000916eb) video4_image_uncrop_nhd_pane

0x6512,	// (0x00091540) video4_image_uncrop_vga_pane_ParamLimits

0x6512,	// (0x00091540) video4_image_uncrop_vga_pane

0xa3c3,	// (0x000953f1) bg_tb_trans_pane_cp07

0xa030,	// (0x0009505e) vid4_indicators_pane_g1

0xa044,	// (0x00095072) vid4_indicators_pane_g2

0xa058,	// (0x00095086) vid4_indicators_pane_g3

0x0004,

0xf91c,	// (0x0009a94a) vid4_indicators_pane_g

0xa085,	// (0x000950b3) vid4_indicators_pane_t1

0x66d1,	// (0x000916ff) cam4_autofocus_pane_g1

0x66d9,	// (0x00091707) cam4_autofocus_pane_g2

0x66e1,	// (0x0009170f) cam4_autofocus_pane_g3

0x0002,

0xf927,	// (0x0009a955) cam4_autofocus_pane_g

0x66e9,	// (0x00091717) cam4_autofocus_pane_g3_copy1

0x5fc5,	// (0x00090ff3) video_down_pane_cp_t1

0x5fd3,	// (0x00091001) video_down_pane_cp_t2

0x0001,

0xf8a3,	// (0x0009a8d1) video_down_pane_cp_t

0xa3c3,	// (0x000953f1) popup_vitu2_window_ParamLimits

0xa3c3,	// (0x000953f1) popup_vitu2_window

0x66f1,	// (0x0009171f) aid_size_cell2_itu2_ParamLimits

0x66f1,	// (0x0009171f) aid_size_cell2_itu2

0x6717,	// (0x00091745) aid_size_cell_itu2_ParamLimits

0x6717,	// (0x00091745) aid_size_cell_itu2

0x6773,	// (0x000917a1) bg_popup_window_pane_cp09_ParamLimits

0x6773,	// (0x000917a1) bg_popup_window_pane_cp09

0x6781,	// (0x000917af) field_vitu2_entry_pane_ParamLimits

0x6781,	// (0x000917af) field_vitu2_entry_pane

0x67a7,	// (0x000917d5) grid_vitu2_function_pane_ParamLimits

0x67a7,	// (0x000917d5) grid_vitu2_function_pane

0x67f8,	// (0x00091826) grid_vitu2_itu_pane_ParamLimits

0x67f8,	// (0x00091826) grid_vitu2_itu_pane

0x688e,	// (0x000918bc) cell_vitu2_itu_pane_ParamLimits

0x688e,	// (0x000918bc) cell_vitu2_itu_pane

0x68ba,	// (0x000918e8) cell_vitu2_function_pane_ParamLimits

0x68ba,	// (0x000918e8) cell_vitu2_function_pane

0xd667,	// (0x00098695) bg_popup_call_pane_cp08_ParamLimits

0xd667,	// (0x00098695) bg_popup_call_pane_cp08

0xd67e,	// (0x000986ac) field_vitu2_entry_pane_g1

0xd68a,	// (0x000986b8) field_vitu2_entry_pane_g2

0x0002,

0xf92e,	// (0x0009a95c) field_vitu2_entry_pane_g

0x0336,	// (0x0008b364) field_vitu2_entry_pane_t1_ParamLimits

0x0336,	// (0x0008b364) field_vitu2_entry_pane_t1

0x68f9,	// (0x00091927) field_vitu2_entry_pane_t2_ParamLimits

0x68f9,	// (0x00091927) field_vitu2_entry_pane_t2

0x0001,

0xf935,	// (0x0009a963) field_vitu2_entry_pane_t_ParamLimits

0xf935,	// (0x0009a963) field_vitu2_entry_pane_t

0x6916,	// (0x00091944) bg_button_pane_cp010_ParamLimits

0x6916,	// (0x00091944) bg_button_pane_cp010

0xa09c,	// (0x000950ca) cell_vitu2_itu_pane_g1

0x6932,	// (0x00091960) cell_vitu2_itu_pane_t1_ParamLimits

0x6932,	// (0x00091960) cell_vitu2_itu_pane_t1

0x0365,	// (0x0008b393) cell_vitu2_itu_pane_t2_ParamLimits

0x0365,	// (0x0008b393) cell_vitu2_itu_pane_t2

0x0002,

0xf93f,	// (0x0009a96d) cell_vitu2_itu_pane_t_ParamLimits

0xf93f,	// (0x0009a96d) cell_vitu2_itu_pane_t

0xa3c3,	// (0x000953f1) bg_button_pane_cp011

0x6990,	// (0x000919be) cell_vitu2_function_pane_g1

0x966e,	// (0x0009469c) main_myfav_hc_pane

0x6376,	// (0x000913a4) popup_image3_note_pane_ParamLimits

0x6376,	// (0x000913a4) popup_image3_note_pane

0x6392,	// (0x000913c0) popup_image3_tool_bar_pane_ParamLimits

0x6392,	// (0x000913c0) popup_image3_tool_bar_pane

0x03f3,	// (0x0008b421) cell_vitu2_itu_pane_t3_ParamLimits

0x03f3,	// (0x0008b421) cell_vitu2_itu_pane_t3

0x966e,	// (0x0009469c) bg_popup_trans_pane

0xd6ac,	// (0x000986da) grid_image3_tool_bar_pane

0xd6c8,	// (0x000986f6) bg_popup_trans_pane_g1

0xac06,	// (0x00095c34) bg_popup_trans_pane_g2

0xd6d0,	// (0x000986fe) bg_popup_trans_pane_g3

0xd6d8,	// (0x00098706) bg_popup_trans_pane_g4

0xd6e0,	// (0x0009870e) bg_popup_trans_pane_g5

0xd6e8,	// (0x00098716) bg_popup_trans_pane_g6

0xd6f0,	// (0x0009871e) bg_popup_trans_pane_g7

0xd6f8,	// (0x00098726) bg_popup_trans_pane_g8

0xabe6,	// (0x00095c14) bg_popup_trans_pane_g9

0x0008,

0xf946,	// (0x0009a974) bg_popup_trans_pane_g

0xd700,	// (0x0009872e) cell_image3_tool_bar_pane_ParamLimits

0xd700,	// (0x0009872e) cell_image3_tool_bar_pane

0xcc6d,	// (0x00097c9b) cell_image3_tool_bar_pane_g1

0x966e,	// (0x0009469c) bg_popup_trans_pane_cp1

0xd714,	// (0x00098742) popup_image3_note_pane_t1

0xd722,	// (0x00098750) popup_image3_note_pane_t2

0xd730,	// (0x0009875e) popup_image3_note_pane_t3

0x0002,

0xf959,	// (0x0009a987) popup_image3_note_pane_t

0xd73e,	// (0x0009876c) popup_image3_note_pane_t3_copy1

0x69a4,	// (0x000919d2) bg_myfav_hc_instruction_pane_ParamLimits

0x69a4,	// (0x000919d2) bg_myfav_hc_instruction_pane

0x69b8,	// (0x000919e6) cell_myfav_contact_pane_ParamLimits

0x69b8,	// (0x000919e6) cell_myfav_contact_pane

0x69d6,	// (0x00091a04) cell_myfav_contact_pane_cp1_ParamLimits

0x69d6,	// (0x00091a04) cell_myfav_contact_pane_cp1

0x69ee,	// (0x00091a1c) cell_myfav_contact_pane_cp2_ParamLimits

0x69ee,	// (0x00091a1c) cell_myfav_contact_pane_cp2

0x6a06,	// (0x00091a34) cell_myfav_contact_pane_cp3_ParamLimits

0x6a06,	// (0x00091a34) cell_myfav_contact_pane_cp3

0x6a1d,	// (0x00091a4b) cell_myfav_contact_pane_cp4_ParamLimits

0x6a1d,	// (0x00091a4b) cell_myfav_contact_pane_cp4

0x6a35,	// (0x00091a63) cell_myfav_contact_pane_cp5_ParamLimits

0x6a35,	// (0x00091a63) cell_myfav_contact_pane_cp5

0x6a49,	// (0x00091a77) cell_myfav_contact_pane_cp6_ParamLimits

0x6a49,	// (0x00091a77) cell_myfav_contact_pane_cp6

0x6a5f,	// (0x00091a8d) cell_myfav_contact_pane_cp7_ParamLimits

0x6a5f,	// (0x00091a8d) cell_myfav_contact_pane_cp7

0xd74c,	// (0x0009877a) listscroll_gen_pane_cp05

0x6a79,	// (0x00091aa7) main_myfav_hc_pane_g1_ParamLimits

0x6a79,	// (0x00091aa7) main_myfav_hc_pane_g1

0x6a93,	// (0x00091ac1) main_myfav_hc_pane_g2_ParamLimits

0x6a93,	// (0x00091ac1) main_myfav_hc_pane_g2

0x0002,

0xf960,	// (0x0009a98e) main_myfav_hc_pane_g_ParamLimits

0xf960,	// (0x0009a98e) main_myfav_hc_pane_g

0x6ac5,	// (0x00091af3) main_myfav_hc_pane_t1_ParamLimits

0x6ac5,	// (0x00091af3) main_myfav_hc_pane_t1

0xd755,	// (0x00098783) main_myfav_hc_pane_t2_ParamLimits

0xd755,	// (0x00098783) main_myfav_hc_pane_t2

0xd767,	// (0x00098795) main_myfav_hc_pane_t3_ParamLimits

0xd767,	// (0x00098795) main_myfav_hc_pane_t3

0x6adc,	// (0x00091b0a) main_myfav_hc_pane_t4_ParamLimits

0x6adc,	// (0x00091b0a) main_myfav_hc_pane_t4

0x0004,

0xf967,	// (0x0009a995) main_myfav_hc_pane_t_ParamLimits

0xf967,	// (0x0009a995) main_myfav_hc_pane_t

0xcc6d,	// (0x00097c9b) bg_myfav_hc_instruction_pane_g1

0xd779,	// (0x000987a7) cell_myfav_contact_pane_g1_ParamLimits

0xd779,	// (0x000987a7) cell_myfav_contact_pane_g1

0xd779,	// (0x000987a7) cell_myfav_contact_pane_g2_ParamLimits

0xd779,	// (0x000987a7) cell_myfav_contact_pane_g2

0xd785,	// (0x000987b3) cell_myfav_contact_pane_g3_ParamLimits

0xd785,	// (0x000987b3) cell_myfav_contact_pane_g3

0xcf20,	// (0x00097f4e) cell_myfav_contact_pane_g4_ParamLimits

0xcf20,	// (0x00097f4e) cell_myfav_contact_pane_g4

0xd792,	// (0x000987c0) cell_myfav_contact_pane_g5_ParamLimits

0xd792,	// (0x000987c0) cell_myfav_contact_pane_g5

0x0004,

0xf972,	// (0x0009a9a0) cell_myfav_contact_pane_g_ParamLimits

0xf972,	// (0x0009a9a0) cell_myfav_contact_pane_g

0x6aad,	// (0x00091adb) main_myfav_hc_pane_g3_ParamLimits

0x6aad,	// (0x00091adb) main_myfav_hc_pane_g3

0x1079,	// (0x0008c0a7) popup_adpt_find_window

0x6b04,	// (0x00091b32) afind_page_pane_ParamLimits

0x6b04,	// (0x00091b32) afind_page_pane

0x6b19,	// (0x00091b47) aid_size_cell_afind_ParamLimits

0x6b19,	// (0x00091b47) aid_size_cell_afind

0x6b37,	// (0x00091b65) bg_popup_sub_pane_cp09_ParamLimits

0x6b37,	// (0x00091b65) bg_popup_sub_pane_cp09

0x6b44,	// (0x00091b72) find_pane_cp01_ParamLimits

0x6b44,	// (0x00091b72) find_pane_cp01

0xd79e,	// (0x000987cc) grid_afind_control_pane_ParamLimits

0xd79e,	// (0x000987cc) grid_afind_control_pane

0x6b51,	// (0x00091b7f) grid_afind_pane_ParamLimits

0x6b51,	// (0x00091b7f) grid_afind_pane

0x6b70,	// (0x00091b9e) cell_afind_pane_ParamLimits

0x6b70,	// (0x00091b9e) cell_afind_pane

0xcc6d,	// (0x00097c9b) afind_page_pane_g1

0x6bd7,	// (0x00091c05) afind_page_pane_g2

0x6be0,	// (0x00091c0e) afind_page_pane_g3

0x0002,

0xf97d,	// (0x0009a9ab) afind_page_pane_g

0x6be9,	// (0x00091c17) afind_page_pane_t1

0xd7b2,	// (0x000987e0) cell_afind_grid_control_pane_ParamLimits

0xd7b2,	// (0x000987e0) cell_afind_grid_control_pane

0xd578,	// (0x000985a6) bg_button_pane_cp69_ParamLimits

0xd578,	// (0x000985a6) bg_button_pane_cp69

0x6c09,	// (0x00091c37) cell_afind_pane_g1_ParamLimits

0x6c09,	// (0x00091c37) cell_afind_pane_g1

0x6c16,	// (0x00091c44) cell_afind_pane_t1_ParamLimits

0x6c16,	// (0x00091c44) cell_afind_pane_t1

0xa9ff,	// (0x00095a2d) bg_button_pane_cp72

0xd7c1,	// (0x000987ef) cell_afind_grid_control_pane_g1

0x3c8f,	// (0x0008ecbd) aid_image_placing_area_ParamLimits

0x3c8f,	// (0x0008ecbd) aid_image_placing_area

0xd246,	// (0x00098274) field_vitu_entry_pane_g1_ParamLimits

0xd246,	// (0x00098274) field_vitu_entry_pane_g1

0xd252,	// (0x00098280) field_vitu_entry_pane_g2_ParamLimits

0xd252,	// (0x00098280) field_vitu_entry_pane_g2

0x0001,

0xf82e,	// (0x0009a85c) field_vitu_entry_pane_g_ParamLimits

0xf82e,	// (0x0009a85c) field_vitu_entry_pane_g

0x5dd5,	// (0x00090e03) cell_vitu_itu_pane_g1_ParamLimits

0x5e17,	// (0x00090e45) cell_vitu_itu_pane_t3_ParamLimits

0x5e17,	// (0x00090e45) cell_vitu_itu_pane_t3

0xd528,	// (0x00098556) mp4_progress_pane_t1_ParamLimits

0xd541,	// (0x0009856f) mp4_progress_pane_t2_ParamLimits

0xf8c3,	// (0x0009a8f1) mp4_progress_pane_t_ParamLimits

0xd55a,	// (0x00098588) mup_progress_pane_cp04_ParamLimits

0x6af0,	// (0x00091b1e) main_myfav_hc_pane_t5_ParamLimits

0x6af0,	// (0x00091b1e) main_myfav_hc_pane_t5

0x0f42,	// (0x0008bf70) aid_zoom_text_primary

0x1079,	// (0x0008c0a7) popup_adpt_find_window_ParamLimits

0xa3c3,	// (0x000953f1) main_cam_set_pane

0x6543,	// (0x00091571) cam4_zoom_pane_ParamLimits

0x6543,	// (0x00091571) cam4_zoom_pane

0x6c28,	// (0x00091c56) main_cam_set_pane_g1_ParamLimits

0x6c28,	// (0x00091c56) main_cam_set_pane_g1

0x6c36,	// (0x00091c64) main_cam_set_pane_g2_ParamLimits

0x6c36,	// (0x00091c64) main_cam_set_pane_g2

0x0001,

0xf984,	// (0x0009a9b2) main_cam_set_pane_g_ParamLimits

0xf984,	// (0x0009a9b2) main_cam_set_pane_g

0x6c57,	// (0x00091c85) main_cam_set_pane_t1_ParamLimits

0x6c57,	// (0x00091c85) main_cam_set_pane_t1

0x6c72,	// (0x00091ca0) main_cset_listscroll_pane_ParamLimits

0x6c72,	// (0x00091ca0) main_cset_listscroll_pane

0x6c92,	// (0x00091cc0) main_cset_slider_pane_ParamLimits

0x6c92,	// (0x00091cc0) main_cset_slider_pane

0xd7d2,	// (0x00098800) main_cset_list_pane_ParamLimits

0xd7d2,	// (0x00098800) main_cset_list_pane

0xd7e2,	// (0x00098810) scroll_pane_cp028

0x6cb8,	// (0x00091ce6) aid_area_touch_slider

0x6cd4,	// (0x00091d02) cset_slider_pane

0x6cfe,	// (0x00091d2c) main_cset_slider_pane_g1

0x6d13,	// (0x00091d41) main_cset_slider_pane_g2

0x0011,

0xf989,	// (0x0009a9b7) main_cset_slider_pane_g

0xd833,	// (0x00098861) main_cset_slider_pane_t1

0x6db7,	// (0x00091de5) main_cset_slider_pane_t2

0x6dd1,	// (0x00091dff) main_cset_slider_pane_t3

0x6deb,	// (0x00091e19) main_cset_slider_pane_t4

0x6e05,	// (0x00091e33) main_cset_slider_pane_t5

0x6e1f,	// (0x00091e4d) main_cset_slider_pane_t6

0x6e34,	// (0x00091e62) main_cset_slider_pane_t7

0x000e,

0xf9ae,	// (0x0009a9dc) main_cset_slider_pane_t

0x6f38,	// (0x00091f66) cset_list_set_pane_ParamLimits

0x6f38,	// (0x00091f66) cset_list_set_pane

0x6f4a,	// (0x00091f78) aid_position_infowindow_above

0x6f52,	// (0x00091f80) aid_position_infowindow_below

0x6f5a,	// (0x00091f88) cset_list_set_pane_g1_ParamLimits

0x6f5a,	// (0x00091f88) cset_list_set_pane_g1

0x0451,	// (0x0008b47f) cset_list_set_pane_g3_ParamLimits

0x0451,	// (0x0008b47f) cset_list_set_pane_g3

0x0001,

0xf9cd,	// (0x0009a9fb) cset_list_set_pane_g_ParamLimits

0xf9cd,	// (0x0009a9fb) cset_list_set_pane_g

0x0460,	// (0x0008b48e) cset_list_set_pane_t1_ParamLimits

0x0460,	// (0x0008b48e) cset_list_set_pane_t1

0xa3c3,	// (0x000953f1) list_highlight_pane_cp021_ParamLimits

0xa3c3,	// (0x000953f1) list_highlight_pane_cp021

0xb544,	// (0x00096572) cset_slider_pane_g1

0xb556,	// (0x00096584) cset_slider_pane_g2

0xb54d,	// (0x0009657b) cset_slider_pane_g3

0x0002,

0xf9d2,	// (0x0009aa00) cset_slider_pane_g

0xa0ae,	// (0x000950dc) aid_area_touch_cam4_zoom

0xa0b6,	// (0x000950e4) cam4_zoom_cont_pane

0xa0be,	// (0x000950ec) cam4_zoom_pane_g1

0xa0c6,	// (0x000950f4) cam4_zoom_pane_g2

0x6f66,	// (0x00091f94) cam4_zoom_pane_g3

0x0002,

0xf9d9,	// (0x0009aa07) cam4_zoom_pane_g

0xd43d,	// (0x0009846b) cam4_zoom_cont_pane_g1

0xd8d3,	// (0x00098901) cam4_zoom_cont_pane_g2

0xd8dc,	// (0x0009890a) cam4_zoom_cont_pane_g3

0x0002,

0xf9e0,	// (0x0009aa0e) cam4_zoom_cont_pane_g

0x63ff,	// (0x0009142d) call4_image_pane_ParamLimits

0x63ff,	// (0x0009142d) call4_image_pane

0xd584,	// (0x000985b2) call4_windows_conf_pane_ParamLimits

0xd5c5,	// (0x000985f3) popup_call4_audio_in_window_ParamLimits

0xd5c5,	// (0x000985f3) popup_call4_audio_in_window

0x966e,	// (0x0009469c) bg_popup_call2_act_pane_cp02

0xd63b,	// (0x00098669) call4_list_conf_pane

0xcc6d,	// (0x00097c9b) call4_image_pane_g1

0xcc6d,	// (0x00097c9b) call4_image_pane_g2

0x0001,

0xf6ef,	// (0x0009a71d) call4_image_pane_g

0xd8e5,	// (0x00098913) list_single_graphic_popup_conf4_pane_ParamLimits

0xd8e5,	// (0x00098913) list_single_graphic_popup_conf4_pane

0x966e,	// (0x0009469c) list_highlight_pane_cp022

0xd8f8,	// (0x00098926) list_single_graphic_popup_conf4_pane_g1

0xb140,	// (0x0009616e) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9e7,	// (0x0009aa15) list_single_graphic_popup_conf4_pane_g

0xd900,	// (0x0009892e) list_single_graphic_popup_conf4_pane_t1

0x2152,	// (0x0008d180) popup_vtel_slider_window_ParamLimits

0x2152,	// (0x0008d180) popup_vtel_slider_window

0xd566,	// (0x00098594) dialer2_ne_pane_t2_ParamLimits

0xd566,	// (0x00098594) dialer2_ne_pane_t2

0x0001,

0xf8c8,	// (0x0009a8f6) dialer2_ne_pane_t_ParamLimits

0xf8c8,	// (0x0009a8f6) dialer2_ne_pane_t

0xca52,	// (0x00097a80) bg_popup_sub_pane_cp010_ParamLimits

0xca52,	// (0x00097a80) bg_popup_sub_pane_cp010

0x6f6e,	// (0x00091f9c) popup_vtel_slider_window_g1_ParamLimits

0x6f6e,	// (0x00091f9c) popup_vtel_slider_window_g1

0x6f81,	// (0x00091faf) popup_vtel_slider_window_g2_ParamLimits

0x6f81,	// (0x00091faf) popup_vtel_slider_window_g2

0x0003,

0xf9ec,	// (0x0009aa1a) popup_vtel_slider_window_g_ParamLimits

0xf9ec,	// (0x0009aa1a) popup_vtel_slider_window_g

0x6fd7,	// (0x00092005) vtel_slider_pane_ParamLimits

0x6fd7,	// (0x00092005) vtel_slider_pane

0x6ff9,	// (0x00092027) vtel_slider_pane_g1_ParamLimits

0x6ff9,	// (0x00092027) vtel_slider_pane_g1

0x700d,	// (0x0009203b) vtel_slider_pane_g2_ParamLimits

0x700d,	// (0x0009203b) vtel_slider_pane_g2

0x7025,	// (0x00092053) vtel_slider_pane_g3_ParamLimits

0x7025,	// (0x00092053) vtel_slider_pane_g3

0x6ff9,	// (0x00092027) vtel_slider_pane_g4_ParamLimits

0x6ff9,	// (0x00092027) vtel_slider_pane_g4

0x703b,	// (0x00092069) vtel_slider_pane_g5_ParamLimits

0x703b,	// (0x00092069) vtel_slider_pane_g5

0x0004,

0xf9f5,	// (0x0009aa23) vtel_slider_pane_g_ParamLimits

0xf9f5,	// (0x0009aa23) vtel_slider_pane_g

0xa3c3,	// (0x000953f1) main_gallery2_pane

0x6743,	// (0x00091771) aid_size_row_itut2_dropdow_list_ParamLimits

0x6743,	// (0x00091771) aid_size_row_itut2_dropdow_list

0x67cf,	// (0x000917fd) grid_vitu2_function_top_pane_ParamLimits

0x67cf,	// (0x000917fd) grid_vitu2_function_top_pane

0x6839,	// (0x00091867) popup_vitu2_dropdown_list_window_ParamLimits

0x6839,	// (0x00091867) popup_vitu2_dropdown_list_window

0x6862,	// (0x00091890) popup_vitu2_match_list_window

0x7051,	// (0x0009207f) cell_vitu2_function_top_pane_ParamLimits

0x7051,	// (0x0009207f) cell_vitu2_function_top_pane

0x7069,	// (0x00092097) cell_vitu2_function_top_pane_cp01_ParamLimits

0x7069,	// (0x00092097) cell_vitu2_function_top_pane_cp01

0x7085,	// (0x000920b3) cell_vitu2_function_top_wide_pane_ParamLimits

0x7085,	// (0x000920b3) cell_vitu2_function_top_wide_pane

0xa3c3,	// (0x000953f1) bg_button_pane_cp012

0x70a1,	// (0x000920cf) cell_vitu2_function_top_pane_g1

0xa0ce,	// (0x000950fc) bg_button_pane_cp013_ParamLimits

0xa0ce,	// (0x000950fc) bg_button_pane_cp013

0x70b5,	// (0x000920e3) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x70b5,	// (0x000920e3) cell_vitu2_function_top_wide_pane_g1

0xa3c3,	// (0x000953f1) bg_popup_sub_pane_cp20

0x70cd,	// (0x000920fb) list_vitu2_match_list_pane

0xd6c8,	// (0x000986f6) bg_popup_sub_pane_cp20_g1

0xd6d0,	// (0x000986fe) bg_popup_sub_pane_cp20_g2

0xac06,	// (0x00095c34) bg_popup_sub_pane_cp20_g3

0xd6d8,	// (0x00098706) bg_popup_sub_pane_cp20_g4

0xabe6,	// (0x00095c14) bg_popup_sub_pane_cp20_g5

0xd916,	// (0x00098944) bg_popup_sub_pane_cp20_g6

0xd6e8,	// (0x00098716) bg_popup_sub_pane_cp20_g7

0xd6f0,	// (0x0009871e) bg_popup_sub_pane_cp20_g8

0xd6f8,	// (0x00098726) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa00,	// (0x0009aa2e) bg_popup_sub_pane_cp20_g

0xa0ea,	// (0x00095118) list_vitu2_match_list_item_pane_ParamLimits

0xa0ea,	// (0x00095118) list_vitu2_match_list_item_pane

0xa0fc,	// (0x0009512a) list_vitu2_match_list_item_pane_t1

0x966e,	// (0x0009469c) bg_popup_sub_pane_cp21

0xb048,	// (0x00096076) grid_vitu2_dropdown_list_pane

0x70f7,	// (0x00092125) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x70f7,	// (0x00092125) cell_vitu2_dropdown_list_char_pane

0x7118,	// (0x00092146) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x7118,	// (0x00092146) cell_vitu2_dropdown_list_ctrl_pane

0xd91e,	// (0x0009894c) cell_vitu2_dropdown_list_char_pane_g1

0xd927,	// (0x00098955) cell_vitu2_dropdown_list_char_pane_g2

0xd930,	// (0x0009895e) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa1d,	// (0x0009aa4b) cell_vitu2_dropdown_list_char_pane_g

0x7144,	// (0x00092172) cell_vitu2_dropdown_list_char_pane_t1

0x7152,	// (0x00092180) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x7152,	// (0x00092180) cell_vitu2_dropdown_list_ctrl_pane_g1

0x715f,	// (0x0009218d) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x715f,	// (0x0009218d) cell_vitu2_dropdown_list_ctrl_pane_g2

0x716c,	// (0x0009219a) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x716c,	// (0x0009219a) cell_vitu2_dropdown_list_ctrl_pane_g3

0x7179,	// (0x000921a7) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x7179,	// (0x000921a7) cell_vitu2_dropdown_list_ctrl_pane_g4

0xcebb,	// (0x00097ee9) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xcebb,	// (0x00097ee9) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa24,	// (0x0009aa52) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa24,	// (0x0009aa52) cell_vitu2_dropdown_list_ctrl_pane_g

0x7195,	// (0x000921c3) aid_size_cell_gallery2_ParamLimits

0x7195,	// (0x000921c3) aid_size_cell_gallery2

0x71b3,	// (0x000921e1) grid_gallery2_pane_ParamLimits

0x71b3,	// (0x000921e1) grid_gallery2_pane

0x71cd,	// (0x000921fb) scroll_pane_cp029_ParamLimits

0x71cd,	// (0x000921fb) scroll_pane_cp029

0x71d9,	// (0x00092207) cell_gallery2_pane_ParamLimits

0x71d9,	// (0x00092207) cell_gallery2_pane

0xd939,	// (0x00098967) cell_gallery2_pane_g2

0x7235,	// (0x00092263) cell_gallery2_pane_g3

0xd941,	// (0x0009896f) cell_gallery2_pane_g4

0xd949,	// (0x00098977) cell_gallery2_pane_g5

0xa9ad,	// (0x000959db) grid_highlight_pane_cp10

0x6862,	// (0x00091890) popup_vitu2_match_list_window_ParamLimits

0x6877,	// (0x000918a5) popup_vitu2_query_window_ParamLimits

0x6877,	// (0x000918a5) popup_vitu2_query_window

0x966e,	// (0x0009469c) bg_vitu2_candi_button_pane

0xd91e,	// (0x0009894c) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd927,	// (0x00098955) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd930,	// (0x0009895e) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x04c7,	// (0x0008b4f5) bg_button_pane_cp015

0x723d,	// (0x0009226b) bg_button_pane_cp016

0x7250,	// (0x0009227e) bg_button_pane_cp017

0xc859,	// (0x00097887) bg_popup_sub_pane_cp22

0xd951,	// (0x0009897f) popup_vitu2_query_window_g1

0x04fc,	// (0x0008b52a) popup_vitu2_query_window_g2

0x0002,

0xfa2f,	// (0x0009aa5d) popup_vitu2_query_window_g

0x051b,	// (0x0008b549) popup_vitu2_query_window_t1_ParamLimits

0x051b,	// (0x0008b549) popup_vitu2_query_window_t1

0x0550,	// (0x0008b57e) popup_vitu2_query_window_t2_ParamLimits

0x0550,	// (0x0008b57e) popup_vitu2_query_window_t2

0x0562,	// (0x0008b590) popup_vitu2_query_window_t3_ParamLimits

0x0562,	// (0x0008b590) popup_vitu2_query_window_t3

0x7274,	// (0x000922a2) popup_vitu2_query_window_t4_ParamLimits

0x7274,	// (0x000922a2) popup_vitu2_query_window_t4

0x7295,	// (0x000922c3) popup_vitu2_query_window_t5_ParamLimits

0x7295,	// (0x000922c3) popup_vitu2_query_window_t5

0x0006,

0xfa36,	// (0x0009aa64) popup_vitu2_query_window_t_ParamLimits

0xfa36,	// (0x0009aa64) popup_vitu2_query_window_t

0xd7ca,	// (0x000987f8) main_cset_text_pane

0x6cb8,	// (0x00091ce6) aid_area_touch_slider_ParamLimits

0x6cd4,	// (0x00091d02) cset_slider_pane_ParamLimits

0x6cfe,	// (0x00091d2c) main_cset_slider_pane_g1_ParamLimits

0x6d13,	// (0x00091d41) main_cset_slider_pane_g2_ParamLimits

0xd7eb,	// (0x00098819) main_cset_slider_pane_g3_ParamLimits

0xd7eb,	// (0x00098819) main_cset_slider_pane_g3

0x6d28,	// (0x00091d56) main_cset_slider_pane_g4_ParamLimits

0x6d28,	// (0x00091d56) main_cset_slider_pane_g4

0x6d37,	// (0x00091d65) main_cset_slider_pane_g5_ParamLimits

0x6d37,	// (0x00091d65) main_cset_slider_pane_g5

0x6d43,	// (0x00091d71) main_cset_slider_pane_g6_ParamLimits

0x6d43,	// (0x00091d71) main_cset_slider_pane_g6

0xf989,	// (0x0009a9b7) main_cset_slider_pane_g_ParamLimits

0xd833,	// (0x00098861) main_cset_slider_pane_t1_ParamLimits

0x6db7,	// (0x00091de5) main_cset_slider_pane_t2_ParamLimits

0x6dd1,	// (0x00091dff) main_cset_slider_pane_t3_ParamLimits

0x6deb,	// (0x00091e19) main_cset_slider_pane_t4_ParamLimits

0x6e05,	// (0x00091e33) main_cset_slider_pane_t5_ParamLimits

0x6e1f,	// (0x00091e4d) main_cset_slider_pane_t6_ParamLimits

0x6e34,	// (0x00091e62) main_cset_slider_pane_t7_ParamLimits

0x6e5e,	// (0x00091e8c) main_cset_slider_pane_t8_ParamLimits

0x6e5e,	// (0x00091e8c) main_cset_slider_pane_t8

0x6e86,	// (0x00091eb4) main_cset_slider_pane_t9_ParamLimits

0x6e86,	// (0x00091eb4) main_cset_slider_pane_t9

0x6eae,	// (0x00091edc) main_cset_slider_pane_t10_ParamLimits

0x6eae,	// (0x00091edc) main_cset_slider_pane_t10

0x6ed6,	// (0x00091f04) main_cset_slider_pane_t11_ParamLimits

0x6ed6,	// (0x00091f04) main_cset_slider_pane_t11

0x6efe,	// (0x00091f2c) main_cset_slider_pane_t12_ParamLimits

0x6efe,	// (0x00091f2c) main_cset_slider_pane_t12

0x6f1b,	// (0x00091f49) main_cset_slider_pane_t13_ParamLimits

0x6f1b,	// (0x00091f49) main_cset_slider_pane_t13

0xf9ae,	// (0x0009a9dc) main_cset_slider_pane_t_ParamLimits

0x966e,	// (0x0009469c) bg_popup_sub_pane_cp011

0xd95d,	// (0x0009898b) main_cset_text_pane_g1

0xd965,	// (0x00098993) main_cset_text_pane_t1

0xd973,	// (0x000989a1) main_cset_text_pane_t2

0xd981,	// (0x000989af) main_cset_text_pane_t3

0xd98f,	// (0x000989bd) main_cset_text_pane_t4

0xd99d,	// (0x000989cb) main_cset_text_pane_t5

0xd9ab,	// (0x000989d9) main_cset_text_pane_t6

0xd9b9,	// (0x000989e7) main_cset_text_pane_t7

0x0006,

0xfa45,	// (0x0009aa73) main_cset_text_pane_t

0x966e,	// (0x0009469c) main_cam4_burst_pane

0x966e,	// (0x0009469c) main_cam5_pane

0x6bf7,	// (0x00091c25) bg_button_pane_cp019

0x6c00,	// (0x00091c2e) bg_button_pane_cp020

0xd7f7,	// (0x00098825) main_cset_slider_pane_g7_ParamLimits

0xd7f7,	// (0x00098825) main_cset_slider_pane_g7

0xd803,	// (0x00098831) main_cset_slider_pane_g8_ParamLimits

0xd803,	// (0x00098831) main_cset_slider_pane_g8

0x6d57,	// (0x00091d85) main_cset_slider_pane_g9_ParamLimits

0x6d57,	// (0x00091d85) main_cset_slider_pane_g9

0x6d63,	// (0x00091d91) main_cset_slider_pane_g10_ParamLimits

0x6d63,	// (0x00091d91) main_cset_slider_pane_g10

0x6d6f,	// (0x00091d9d) main_cset_slider_pane_g11_ParamLimits

0x6d6f,	// (0x00091d9d) main_cset_slider_pane_g11

0x6d7b,	// (0x00091da9) main_cset_slider_pane_g12_ParamLimits

0x6d7b,	// (0x00091da9) main_cset_slider_pane_g12

0x6d87,	// (0x00091db5) main_cset_slider_pane_g13_ParamLimits

0x6d87,	// (0x00091db5) main_cset_slider_pane_g13

0x6d93,	// (0x00091dc1) main_cset_slider_pane_g14_ParamLimits

0x6d93,	// (0x00091dc1) main_cset_slider_pane_g14

0x6d9f,	// (0x00091dcd) main_cset_slider_pane_g15_ParamLimits

0x6d9f,	// (0x00091dcd) main_cset_slider_pane_g15

0xd861,	// (0x0009888f) main_cset_slider_pane_t14_ParamLimits

0xd861,	// (0x0009888f) main_cset_slider_pane_t14

0xd89a,	// (0x000988c8) main_cset_slider_pane_t15_ParamLimits

0xd89a,	// (0x000988c8) main_cset_slider_pane_t15

0x72b6,	// (0x000922e4) aid_cam4_burst_size_cell_ParamLimits

0x72b6,	// (0x000922e4) aid_cam4_burst_size_cell

0x72d6,	// (0x00092304) grid_cam4_burst_pane_ParamLimits

0x72d6,	// (0x00092304) grid_cam4_burst_pane

0x730e,	// (0x0009233c) linegrid_cam4_burst_pane_ParamLimits

0x730e,	// (0x0009233c) linegrid_cam4_burst_pane

0xd9c7,	// (0x000989f5) scroll_pane_cp30_ParamLimits

0xd9c7,	// (0x000989f5) scroll_pane_cp30

0x7332,	// (0x00092360) cell_cam4_burst_pane_ParamLimits

0x7332,	// (0x00092360) cell_cam4_burst_pane

0xd9d3,	// (0x00098a01) linegrid_cam4_burst_pane_g1_ParamLimits

0xd9d3,	// (0x00098a01) linegrid_cam4_burst_pane_g1

0x737f,	// (0x000923ad) linegrid_cam4_burst_pane_g2_ParamLimits

0x737f,	// (0x000923ad) linegrid_cam4_burst_pane_g2

0xd9e0,	// (0x00098a0e) linegrid_cam4_burst_pane_g3_ParamLimits

0xd9e0,	// (0x00098a0e) linegrid_cam4_burst_pane_g3

0x0002,

0xfa54,	// (0x0009aa82) linegrid_cam4_burst_pane_g_ParamLimits

0xfa54,	// (0x0009aa82) linegrid_cam4_burst_pane_g

0x7390,	// (0x000923be) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x7390,	// (0x000923be) linegrid_cam4_burst_pane_g3_copy1

0xd9ed,	// (0x00098a1b) linegrid_cam4_burst_pane_g4_ParamLimits

0xd9ed,	// (0x00098a1b) linegrid_cam4_burst_pane_g4

0x73aa,	// (0x000923d8) linegrid_cam4_burst_pane_g5_ParamLimits

0x73aa,	// (0x000923d8) linegrid_cam4_burst_pane_g5

0x73bb,	// (0x000923e9) linegrid_cam4_burst_pane_g6_ParamLimits

0x73bb,	// (0x000923e9) linegrid_cam4_burst_pane_g6

0xd9fa,	// (0x00098a28) linegrid_cam4_burst_pane_g7_ParamLimits

0xd9fa,	// (0x00098a28) linegrid_cam4_burst_pane_g7

0x73d2,	// (0x00092400) cell_cam4_burst_pane_g1

0xda13,	// (0x00098a41) main_cam5_pane_t1_ParamLimits

0xda13,	// (0x00098a41) main_cam5_pane_t1

0xda25,	// (0x00098a53) main_cam5_pane_t2_ParamLimits

0xda25,	// (0x00098a53) main_cam5_pane_t2

0xda37,	// (0x00098a65) main_cam5_pane_t3_ParamLimits

0xda37,	// (0x00098a65) main_cam5_pane_t3

0xda49,	// (0x00098a77) main_cam5_pane_t4_ParamLimits

0xda49,	// (0x00098a77) main_cam5_pane_t4

0xda61,	// (0x00098a8f) main_cam5_pane_t5_ParamLimits

0xda61,	// (0x00098a8f) main_cam5_pane_t5

0xda75,	// (0x00098aa3) main_cam5_pane_t6_ParamLimits

0xda75,	// (0x00098aa3) main_cam5_pane_t6

0xda89,	// (0x00098ab7) main_cam5_pane_t7_ParamLimits

0xda89,	// (0x00098ab7) main_cam5_pane_t7

0xda9b,	// (0x00098ac9) main_cam5_pane_t8_ParamLimits

0xda9b,	// (0x00098ac9) main_cam5_pane_t8

0xdab7,	// (0x00098ae5) main_cam5_pane_t9_ParamLimits

0xdab7,	// (0x00098ae5) main_cam5_pane_t9

0xdac9,	// (0x00098af7) main_cam5_pane_t10_ParamLimits

0xdac9,	// (0x00098af7) main_cam5_pane_t10

0xdadb,	// (0x00098b09) main_cam5_pane_t11_ParamLimits

0xdadb,	// (0x00098b09) main_cam5_pane_t11

0xdaed,	// (0x00098b1b) main_cam5_pane_t12_ParamLimits

0xdaed,	// (0x00098b1b) main_cam5_pane_t12

0xdb02,	// (0x00098b30) main_cam5_pane_t13_ParamLimits

0xdb02,	// (0x00098b30) main_cam5_pane_t13

0x000c,

0xfa60,	// (0x0009aa8e) main_cam5_pane_t_ParamLimits

0xfa60,	// (0x0009aa8e) main_cam5_pane_t

0x10fb,	// (0x0008c129) popup_scut_keymap_window_ParamLimits

0x10fb,	// (0x0008c129) popup_scut_keymap_window

0x73e5,	// (0x00092413) aid_size_cell_brow_shortcut

0xa9ad,	// (0x000959db) bg_popup_window_pane_cp010

0x73f1,	// (0x0009241f) grid_scut_pane

0x73fd,	// (0x0009242b) cell_scut_pane_ParamLimits

0x73fd,	// (0x0009242b) cell_scut_pane

0x7414,	// (0x00092442) cell_scut_pane_g1

0xdb1f,	// (0x00098b4d) cell_scut_pane_t1

0xdb2e,	// (0x00098b5c) cell_scut_pane_t2

0x741d,	// (0x0009244b) cell_scut_pane_t3

0x0002,

0xfa7b,	// (0x0009aaa9) cell_scut_pane_t

0x52ce,	// (0x000902fc) main_mup3_pane_g8_ParamLimits

0x52ce,	// (0x000902fc) main_mup3_pane_g8

0x675b,	// (0x00091789) area_vitu2_query_pane_ParamLimits

0x675b,	// (0x00091789) area_vitu2_query_pane

0x04db,	// (0x0008b509) input_focus_pane_cp08

0xdb3d,	// (0x00098b6b) area_vitu2_query_pane_g1

0x05e0,	// (0x0008b60e) area_vitu2_query_pane_g2

0x0001,

0xfa82,	// (0x0009aab0) area_vitu2_query_pane_g

0x742b,	// (0x00092459) area_vitu2_query_pane_t1_ParamLimits

0x742b,	// (0x00092459) area_vitu2_query_pane_t1

0x743f,	// (0x0009246d) area_vitu2_query_pane_t2_ParamLimits

0x743f,	// (0x0009246d) area_vitu2_query_pane_t2

0x05f1,	// (0x0008b61f) area_vitu2_query_pane_t3_ParamLimits

0x05f1,	// (0x0008b61f) area_vitu2_query_pane_t3

0x7453,	// (0x00092481) area_vitu2_query_pane_t4_ParamLimits

0x7453,	// (0x00092481) area_vitu2_query_pane_t4

0x747b,	// (0x000924a9) area_vitu2_query_pane_t5_ParamLimits

0x747b,	// (0x000924a9) area_vitu2_query_pane_t5

0x74a3,	// (0x000924d1) area_vitu2_query_pane_t6_ParamLimits

0x74a3,	// (0x000924d1) area_vitu2_query_pane_t6

0x0006,

0xfa87,	// (0x0009aab5) area_vitu2_query_pane_t_ParamLimits

0xfa87,	// (0x0009aab5) area_vitu2_query_pane_t

0x74ef,	// (0x0009251d) bg_button_pane_cp018

0x74fd,	// (0x0009252b) bg_button_pane_cp021

0x0619,	// (0x0008b647) bg_button_pane_cp022

0x062a,	// (0x0008b658) input_focus_pane_cp09

0xb24f,	// (0x0009627d) aid_size_touch_mv_arrow_left

0xb27a,	// (0x000962a8) aid_size_touch_mv_arrow_right

0xd80f,	// (0x0009883d) main_cset_slider_pane_g16_ParamLimits

0xd80f,	// (0x0009883d) main_cset_slider_pane_g16

0xd81b,	// (0x00098849) main_cset_slider_pane_g17_ParamLimits

0xd81b,	// (0x00098849) main_cset_slider_pane_g17

0x73d2,	// (0x00092400) cell_cam4_burst_pane_g1_ParamLimits

0x966e,	// (0x0009469c) compa_mode_pane

0x6f91,	// (0x00091fbf) popup_vtel_slider_window_g3_ParamLimits

0x6f91,	// (0x00091fbf) popup_vtel_slider_window_g3

0x6fa8,	// (0x00091fd6) popup_vtel_slider_window_g4_ParamLimits

0x6fa8,	// (0x00091fd6) popup_vtel_slider_window_g4

0x6fbf,	// (0x00091fed) popup_vtel_slider_window_t1_ParamLimits

0x6fbf,	// (0x00091fed) popup_vtel_slider_window_t1

0x966e,	// (0x0009469c) main_cl_pane

0x9bf5,	// (0x00094c23) popup_imed_adjust2_window_ParamLimits

0xc859,	// (0x00097887) bg_tb_trans_pane_cp05_ParamLimits

0xd17b,	// (0x000981a9) popup_imed_adjust2_window_g1_ParamLimits

0xd18a,	// (0x000981b8) popup_imed_adjust2_window_g2_ParamLimits

0xd18a,	// (0x000981b8) popup_imed_adjust2_window_g2

0xd196,	// (0x000981c4) popup_imed_adjust2_window_g3_ParamLimits

0xd196,	// (0x000981c4) popup_imed_adjust2_window_g3

0x0002,

0xf7f2,	// (0x0009a820) popup_imed_adjust2_window_g_ParamLimits

0xf7f2,	// (0x0009a820) popup_imed_adjust2_window_g

0xd1a2,	// (0x000981d0) popup_imed_adjust2_window_t1_ParamLimits

0xd1ba,	// (0x000981e8) slider_imed_adjust_pane_ParamLimits

0xd1ce,	// (0x000981fc) slider_imed_adjust_pane_g1_ParamLimits

0xd1de,	// (0x0009820c) slider_imed_adjust_pane_g2_ParamLimits

0xd1ee,	// (0x0009821c) slider_imed_adjust_pane_g3_ParamLimits

0xd1ff,	// (0x0009822d) slider_imed_adjust_pane_g4_ParamLimits

0xf7f9,	// (0x0009a827) slider_imed_adjust_pane_g_ParamLimits

0x64e4,	// (0x00091512) aid_touch_area_cam4_ParamLimits

0x64e4,	// (0x00091512) aid_touch_area_cam4

0x9fb9,	// (0x00094fe7) battery_pane_cp01

0x65b3,	// (0x000915e1) main_camera4_pane_g6_ParamLimits

0x65b3,	// (0x000915e1) main_camera4_pane_g6

0x65dd,	// (0x0009160b) main_camera4_pane_t2_ParamLimits

0x65dd,	// (0x0009160b) main_camera4_pane_t2

0x0001,

0xf8fc,	// (0x0009a92a) main_camera4_pane_t_ParamLimits

0xf8fc,	// (0x0009a92a) main_camera4_pane_t

0x6612,	// (0x00091640) aid_touch_area_vid4_ParamLimits

0x6612,	// (0x00091640) aid_touch_area_vid4

0x6666,	// (0x00091694) main_video4_pane_g5_ParamLimits

0x6666,	// (0x00091694) main_video4_pane_g5

0x668b,	// (0x000916b9) vid4_progress_pane_ParamLimits

0x668b,	// (0x000916b9) vid4_progress_pane

0xd827,	// (0x00098855) main_cset_slider_pane_g18_ParamLimits

0xd827,	// (0x00098855) main_cset_slider_pane_g18

0xda07,	// (0x00098a35) cell_cam4_burst_pane_g2_ParamLimits

0xda07,	// (0x00098a35) cell_cam4_burst_pane_g2

0x0001,

0xfa5b,	// (0x0009aa89) cell_cam4_burst_pane_g_ParamLimits

0xfa5b,	// (0x0009aa89) cell_cam4_burst_pane_g

0xa7b8,	// (0x000957e6) bg_cl_pane_ParamLimits

0xa7b8,	// (0x000957e6) bg_cl_pane

0x7509,	// (0x00092537) cl_header_pane_ParamLimits

0x7509,	// (0x00092537) cl_header_pane

0x751d,	// (0x0009254b) cl_listscroll_pane_ParamLimits

0x751d,	// (0x0009254b) cl_listscroll_pane

0xdb49,	// (0x00098b77) bg_cl_pane_g1

0xdb51,	// (0x00098b7f) bg_cl_pane_g2

0xdb59,	// (0x00098b87) bg_cl_pane_g3

0xdb61,	// (0x00098b8f) bg_cl_pane_g4

0xdb69,	// (0x00098b97) bg_cl_pane_g5

0xdb71,	// (0x00098b9f) bg_cl_pane_g6

0xdb79,	// (0x00098ba7) bg_cl_pane_g7

0xdb81,	// (0x00098baf) bg_cl_pane_g8

0xdb89,	// (0x00098bb7) bg_cl_pane_g9

0x0008,

0xfa96,	// (0x0009aac4) bg_cl_pane_g

0x752d,	// (0x0009255b) aid_height_cl_leading_ParamLimits

0x752d,	// (0x0009255b) aid_height_cl_leading

0x7539,	// (0x00092567) aid_height_cl_text_ParamLimits

0x7539,	// (0x00092567) aid_height_cl_text

0xa3c3,	// (0x000953f1) bg_cl_header_pane_ParamLimits

0xa3c3,	// (0x000953f1) bg_cl_header_pane

0x7558,	// (0x00092586) cl_header_pane_g1_ParamLimits

0x7558,	// (0x00092586) cl_header_pane_g1

0x756e,	// (0x0009259c) cl_header_pane_t1_ParamLimits

0x756e,	// (0x0009259c) cl_header_pane_t1

0xdb91,	// (0x00098bbf) cl_list_pane

0xd7e2,	// (0x00098810) hc_scroll_pane_cp01

0xabe6,	// (0x00095c14) bg_cl_header_pane_g1

0xd6c8,	// (0x000986f6) bg_cl_header_pane_g2

0xac06,	// (0x00095c34) bg_cl_header_pane_g3

0xd6d8,	// (0x00098706) bg_cl_header_pane_g4

0xd6d0,	// (0x000986fe) bg_cl_header_pane_g5

0xd916,	// (0x00098944) bg_cl_header_pane_g6

0xd6f0,	// (0x0009871e) bg_cl_header_pane_g7

0xd6f8,	// (0x00098726) bg_cl_header_pane_g8

0xd6e8,	// (0x00098716) bg_cl_header_pane_g9

0x0008,

0xfaa9,	// (0x0009aad7) bg_cl_header_pane_g

0x7587,	// (0x000925b5) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x7587,	// (0x000925b5) hc_cl_list_double_graphic_heading_pane

0x7598,	// (0x000925c6) hc_cl_list_single_graphic_pane_ParamLimits

0x7598,	// (0x000925c6) hc_cl_list_single_graphic_pane

0x75b1,	// (0x000925df) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x75b1,	// (0x000925df) hc_cl_list_single_graphic_pane_g1

0x75bd,	// (0x000925eb) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x75bd,	// (0x000925eb) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfabc,	// (0x0009aaea) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfabc,	// (0x0009aaea) hc_cl_list_single_graphic_pane_g

0x75d1,	// (0x000925ff) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x75d1,	// (0x000925ff) hc_cl_list_single_graphic_pane_t1

0x75b1,	// (0x000925df) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x75b1,	// (0x000925df) hc_cl_list_double_graphic_heading_pane_g1

0x75e6,	// (0x00092614) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x75e6,	// (0x00092614) hc_cl_list_double_graphic_heading_pane_g2

0x75fa,	// (0x00092628) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x75fa,	// (0x00092628) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfac1,	// (0x0009aaef) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfac1,	// (0x0009aaef) hc_cl_list_double_graphic_heading_pane_g

0x760e,	// (0x0009263c) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x760e,	// (0x0009263c) hc_cl_list_double_graphic_heading_pane_t1

0x7623,	// (0x00092651) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x7623,	// (0x00092651) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfac8,	// (0x0009aaf6) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfac8,	// (0x0009aaf6) hc_cl_list_double_graphic_heading_pane_t

0xa112,	// (0x00095140) vid4_progress_pane_g1

0xa122,	// (0x00095150) vid4_progress_pane_g2

0x7638,	// (0x00092666) vid4_progress_pane_g3

0xa132,	// (0x00095160) vid4_progress_pane_g4

0x0004,

0xfacd,	// (0x0009aafb) vid4_progress_pane_g

0x764a,	// (0x00092678) vid4_progress_pane_t1

0xa14a,	// (0x00095178) vid4_progress_pane_t2

0x0002,

0xfad8,	// (0x0009ab06) vid4_progress_pane_t

0x7660,	// (0x0009268e) wait_bar_pane_cp07

0xca60,	// (0x00097a8e) blid_firmament_pane_ParamLimits

0xcaa3,	// (0x00097ad1) popup_blid_sat_info2_window_g1

0xcac7,	// (0x00097af5) popup_blid_sat_info2_window_t3

0xcad5,	// (0x00097b03) popup_blid_sat_info2_window_t4

0xcae3,	// (0x00097b11) popup_blid_sat_info2_window_t5

0xcaf1,	// (0x00097b1f) popup_blid_sat_info2_window_t6

0xcb01,	// (0x00097b2f) popup_blid_sat_info2_window_t7

0xcb0f,	// (0x00097b3d) popup_blid_sat_info2_window_t8

0xcb1d,	// (0x00097b4b) popup_blid_sat_info2_window_t9

0xcb2b,	// (0x00097b59) popup_blid_sat_info2_window_t10

0xcbed,	// (0x00097c1b) aid_firma_cardinal_ParamLimits

0xcc01,	// (0x00097c2f) blid_firmament_pane_t1_ParamLimits

0xcc18,	// (0x00097c46) blid_firmament_pane_t2_ParamLimits

0xcc2f,	// (0x00097c5d) blid_firmament_pane_t3_ParamLimits

0xcc46,	// (0x00097c74) blid_firmament_pane_t4_ParamLimits

0xf6e6,	// (0x0009a714) blid_firmament_pane_t_ParamLimits

0xcc5d,	// (0x00097c8b) blid_sat_info_pane_ParamLimits

0xa3c3,	// (0x000953f1) main_cam_set_pane_ParamLimits

0x5b8d,	// (0x00090bbb) aid_size_cell_colour_35_ParamLimits

0x5bad,	// (0x00090bdb) aid_size_cell_colour_112_ParamLimits

0x5bcd,	// (0x00090bfb) aid_size_cell_effect_ParamLimits

0xc859,	// (0x00097887) bg_tb_trans_pane_cp02_ParamLimits

0xae4e,	// (0x00095e7c) heading_imed_pane_ParamLimits

0x5bed,	// (0x00090c1b) listscroll_imed_pane_ParamLimits

0xbe3f,	// (0x00096e6d) popup_call2_audio_first_window_g5_ParamLimits

0xbe3f,	// (0x00096e6d) popup_call2_audio_first_window_g5

0x618b,	// (0x000911b9) aid_size_touch_image3_arrow_left_ParamLimits

0x618b,	// (0x000911b9) aid_size_touch_image3_arrow_left

0x61b7,	// (0x000911e5) aid_size_touch_image3_arrow_right_ParamLimits

0x61b7,	// (0x000911e5) aid_size_touch_image3_arrow_right

0xa15f,	// (0x0009518d) vid4_progress_pane_t3

0x5f02,	// (0x00090f30) main_hwr_training_symbol_option_pane_ParamLimits

0x5f02,	// (0x00090f30) main_hwr_training_symbol_option_pane

0xd468,	// (0x00098496) popup_hwr_training_preview_window_ParamLimits

0xd468,	// (0x00098496) popup_hwr_training_preview_window

0x5f22,	// (0x00090f50) hwr_training_navi_pane_g5_ParamLimits

0x5f22,	// (0x00090f50) hwr_training_navi_pane_g5

0xd6a4,	// (0x000986d2) popup_char_count_window

0xa3c3,	// (0x000953f1) bg_popup_sub_pane_cp20_ParamLimits

0x70cd,	// (0x000920fb) list_vitu2_match_list_pane_ParamLimits

0x70dc,	// (0x0009210a) vitu2_page_scroll_pane_ParamLimits

0x70dc,	// (0x0009210a) vitu2_page_scroll_pane

0xdb9a,	// (0x00098bc8) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdb9a,	// (0x00098bc8) list_single_hwr_training_symbol_option_pane

0xdbad,	// (0x00098bdb) list_single_hwr_training_symbol_option_pane_g1

0xdbb5,	// (0x00098be3) list_single_hwr_training_symbol_option_pane_t1

0xdbc3,	// (0x00098bf1) bg_button_pane_cp023

0xdbcc,	// (0x00098bfa) bg_button_pane_cp024

0x769d,	// (0x000926cb) vitu2_page_scroll_pane_g1

0x76a5,	// (0x000926d3) vitu2_page_scroll_pane_g2

0x0001,

0xfadf,	// (0x0009ab0d) vitu2_page_scroll_pane_g

0x76ad,	// (0x000926db) vitu2_page_scroll_pane_t1

0xcc96,	// (0x00097cc4) popup_char_count_window_g1

0xdbff,	// (0x00098c2d) popup_char_count_window_g2

0xdc08,	// (0x00098c36) popup_char_count_window_g3

0x0002,

0xfae4,	// (0x0009ab12) popup_char_count_window_g

0xdc11,	// (0x00098c3f) popup_char_count_window_t1

0x966e,	// (0x0009469c) main_vded2_pane

0xd167,	// (0x00098195) aid_size_cell_imed_line

0xd171,	// (0x0009819f) grid_imed_line_width_pane

0xa069,	// (0x00095097) vid4_indicators_pane_g4

0xdc1f,	// (0x00098c4d) cell_imed_line_width_pane_ParamLimits

0xdc1f,	// (0x00098c4d) cell_imed_line_width_pane

0xdc33,	// (0x00098c61) cell_imed_line_width_pane_g1

0xdc3c,	// (0x00098c6a) cell_imed_line_width_pane_g2

0x0001,

0xfaeb,	// (0x0009ab19) cell_imed_line_width_pane_g

0x76bc,	// (0x000926ea) main_vded2_pane_g1_ParamLimits

0x76bc,	// (0x000926ea) main_vded2_pane_g1

0x76d2,	// (0x00092700) main_vded2_pane_g2_ParamLimits

0x76d2,	// (0x00092700) main_vded2_pane_g2

0x0001,

0xfaf0,	// (0x0009ab1e) main_vded2_pane_g_ParamLimits

0xfaf0,	// (0x0009ab1e) main_vded2_pane_g

0x76e4,	// (0x00092712) vded2_slider_pane_ParamLimits

0x76e4,	// (0x00092712) vded2_slider_pane

0x76f4,	// (0x00092722) aid_size_touch_vded2_end

0x76fe,	// (0x0009272c) aid_size_touch_vded2_playhead

0xdc44,	// (0x00098c72) aid_size_touch_vded2_start

0xdc4c,	// (0x00098c7a) vded2_slider_bg_pane

0xdc55,	// (0x00098c83) vded2_slider_pane_g1

0xdc5e,	// (0x00098c8c) vded2_slider_pane_g2

0x7708,	// (0x00092736) vded2_slider_pane_g3

0x0002,

0xfaf5,	// (0x0009ab23) vded2_slider_pane_g

0xdc66,	// (0x00098c94) vded2_slider_bg_pane_g1

0xdc6f,	// (0x00098c9d) vded2_slider_bg_pane_g2

0xdc78,	// (0x00098ca6) vded2_slider_bg_pane_g3

0x0002,

0xfafc,	// (0x0009ab2a) vded2_slider_bg_pane_g

0x38fd,	// (0x0008e92b) aid_postcard_touch_down_pane_ParamLimits

0x38fd,	// (0x0008e92b) aid_postcard_touch_down_pane

0x3913,	// (0x0008e941) aid_postcard_touch_up_pane_ParamLimits

0x3913,	// (0x0008e941) aid_postcard_touch_up_pane

0x966e,	// (0x0009469c) main_blid2_pane

0x9bdb,	// (0x00094c09) popup_blid2_search_window

0x966e,	// (0x0009469c) blid2_gps_pane

0x966e,	// (0x0009469c) blid2_navig_pane

0x966e,	// (0x0009469c) blid2_search_pane

0x966e,	// (0x0009469c) blid2_tripm_pane

0x7713,	// (0x00092741) blid2_search_pane_g1_ParamLimits

0x7713,	// (0x00092741) blid2_search_pane_g1

0x772b,	// (0x00092759) blid2_search_pane_t1_ParamLimits

0x772b,	// (0x00092759) blid2_search_pane_t1

0x773d,	// (0x0009276b) aid_size_cell_blid2_gps_ParamLimits

0x773d,	// (0x0009276b) aid_size_cell_blid2_gps

0x7755,	// (0x00092783) blid2_gps_pane_g1_ParamLimits

0x7755,	// (0x00092783) blid2_gps_pane_g1

0x7769,	// (0x00092797) grid_blid2_satellite_pane_ParamLimits

0x7769,	// (0x00092797) grid_blid2_satellite_pane

0x7783,	// (0x000927b1) blid2_navig_pane_g1_ParamLimits

0x7783,	// (0x000927b1) blid2_navig_pane_g1

0x778f,	// (0x000927bd) blid2_navig_pane_t1_ParamLimits

0x778f,	// (0x000927bd) blid2_navig_pane_t1

0x77aa,	// (0x000927d8) blid2_navig_pane_t2_ParamLimits

0x77aa,	// (0x000927d8) blid2_navig_pane_t2

0x0001,

0xfb03,	// (0x0009ab31) blid2_navig_pane_t_ParamLimits

0xfb03,	// (0x0009ab31) blid2_navig_pane_t

0x77c5,	// (0x000927f3) blid2_navig_ring_pane_ParamLimits

0x77c5,	// (0x000927f3) blid2_navig_ring_pane

0x77de,	// (0x0009280c) blid2_speed_pane_ParamLimits

0x77de,	// (0x0009280c) blid2_speed_pane

0x77ea,	// (0x00092818) blid2_tripm_pane_g1_ParamLimits

0x77ea,	// (0x00092818) blid2_tripm_pane_g1

0x7805,	// (0x00092833) blid2_tripm_pane_g2_ParamLimits

0x7805,	// (0x00092833) blid2_tripm_pane_g2

0x7819,	// (0x00092847) blid2_tripm_pane_g3_ParamLimits

0x7819,	// (0x00092847) blid2_tripm_pane_g3

0x782d,	// (0x0009285b) blid2_tripm_pane_g4_ParamLimits

0x782d,	// (0x0009285b) blid2_tripm_pane_g4

0x7841,	// (0x0009286f) blid2_tripm_pane_g5_ParamLimits

0x7841,	// (0x0009286f) blid2_tripm_pane_g5

0x0005,

0xfb08,	// (0x0009ab36) blid2_tripm_pane_g_ParamLimits

0xfb08,	// (0x0009ab36) blid2_tripm_pane_g

0x7867,	// (0x00092895) blid2_tripm_pane_t1_ParamLimits

0x7867,	// (0x00092895) blid2_tripm_pane_t1

0x7882,	// (0x000928b0) blid2_tripm_pane_t2_ParamLimits

0x7882,	// (0x000928b0) blid2_tripm_pane_t2

0x789b,	// (0x000928c9) blid2_tripm_pane_t3_ParamLimits

0x789b,	// (0x000928c9) blid2_tripm_pane_t3

0x0003,

0xfb15,	// (0x0009ab43) blid2_tripm_pane_t_ParamLimits

0xfb15,	// (0x0009ab43) blid2_tripm_pane_t

0x78e2,	// (0x00092910) cell_blid2_satellite_pane_ParamLimits

0x78e2,	// (0x00092910) cell_blid2_satellite_pane

0x7900,	// (0x0009292e) cell_blid2_satellite_pane_g1

0xdc81,	// (0x00098caf) cell_blid2_satellite_pane_t1

0xcc6d,	// (0x00097c9b) blid2_speed_pane_g1

0xdc8f,	// (0x00098cbd) blid2_speed_pane_t1

0xdc9d,	// (0x00098ccb) blid2_speed_pane_t2

0x0001,

0xfb1e,	// (0x0009ab4c) blid2_speed_pane_t

0xcc6d,	// (0x00097c9b) blid2_navig_ring_pane_g1

0x7909,	// (0x00092937) blid2_navig_ring_pane_g2

0x7911,	// (0x0009293f) blid2_navig_ring_pane_g3

0x7919,	// (0x00092947) blid2_navig_ring_pane_g4

0x7921,	// (0x0009294f) blid2_navig_ring_pane_g5

0x0004,

0xfb23,	// (0x0009ab51) blid2_navig_ring_pane_g

0x966e,	// (0x0009469c) bg_popup_window_pane_cp011

0xdcab,	// (0x00098cd9) popup_blid2_search_window_g1

0xdcb3,	// (0x00098ce1) popup_blid2_search_window_t1

0xdcc1,	// (0x00098cef) popup_blid2_search_window_t2

0x0001,

0xfb2e,	// (0x0009ab5c) popup_blid2_search_window_t

0xaaf5,	// (0x00095b23) main_browser_pane_g1

0xa7b8,	// (0x000957e6) main_browser_pane_ParamLimits

0xa3c3,	// (0x000953f1) bg_button_pane_cp011_ParamLimits

0x6990,	// (0x000919be) cell_vitu2_function_pane_g1_ParamLimits

0xc859,	// (0x00097887) bg_popup_sub_pane_cp22_ParamLimits

0x04db,	// (0x0008b509) input_focus_pane_cp08_ParamLimits

0x7263,	// (0x00092291) popup_vitu2_query_button_pane_ParamLimits

0x7263,	// (0x00092291) popup_vitu2_query_button_pane

0x04f2,	// (0x0008b520) popup_vitu2_query_input_button_pane

0xd951,	// (0x0009897f) popup_vitu2_query_window_g1_ParamLimits

0x04fc,	// (0x0008b52a) popup_vitu2_query_window_g2_ParamLimits

0xfa2f,	// (0x0009aa5d) popup_vitu2_query_window_g_ParamLimits

0x966e,	// (0x0009469c) bg_button_pane_cp026

0x7929,	// (0x00092957) popup_vitu2_query_input_button_pane_g1

0x966e,	// (0x0009469c) bg_button_pane_cp025

0xdccf,	// (0x00098cfd) popup_vitu2_query_button_pane_t1

0x4f94,	// (0x0008ffc2) main_mp3_pane_t6

0x4fa2,	// (0x0008ffd0) popup_slider_window_cp01

0x9fd5,	// (0x00095003) cam4_battery_pane

0xa028,	// (0x00095056) cam4_battery_pane_cp02

0xa10a,	// (0x00095138) cam4_battery_pane_cp01

0xa10a,	// (0x00095138) cam4_battery_pane_cp03

0xcc6d,	// (0x00097c9b) cam4_battery_pane_g1

0xdcdd,	// (0x00098d0b) cam4_battery_pane_g2

0x0001,

0xfb33,	// (0x0009ab61) cam4_battery_pane_g

0xcb39,	// (0x00097b67) popup_blid_sat_info2_window_t11

0xb24f,	// (0x0009627d) aid_size_touch_mv_arrow_left_ParamLimits

0xb27a,	// (0x000962a8) aid_size_touch_mv_arrow_right_ParamLimits

0xb2d8,	// (0x00096306) navi_pane_g1_ParamLimits

0xb2e4,	// (0x00096312) navi_pane_g2_ParamLimits

0xb312,	// (0x00096340) navi_pane_g3_ParamLimits

0xf3e5,	// (0x0009a413) navi_pane_g_ParamLimits

0x337e,	// (0x0008e3ac) navi_pane_mv_t1_ParamLimits

0x5bf9,	// (0x00090c27) grid_imed_effect_pane_ParamLimits

0x204f,	// (0x0008d07d) aid_placing_vt_slider_lsc

0xaa44,	// (0x00095a72) aid_placing_vt_slider_prt

0xa3c3,	// (0x000953f1) bg_tb_trans_pane_cp01_ParamLimits

0xcddb,	// (0x00097e09) popup_image_details_window_g1_ParamLimits

0xcdee,	// (0x00097e1c) popup_image_details_window_g2_ParamLimits

0xce03,	// (0x00097e31) popup_image_details_window_g3_ParamLimits

0xce03,	// (0x00097e31) popup_image_details_window_g3

0xf72b,	// (0x0009a759) popup_image_details_window_g_ParamLimits

0xce17,	// (0x00097e45) popup_image_details_window_t1_ParamLimits

0xce29,	// (0x00097e57) popup_image_details_window_t2_ParamLimits

0xce42,	// (0x00097e70) popup_image_details_window_t3_ParamLimits

0xce56,	// (0x00097e84) popup_image_details_window_t4_ParamLimits

0xce71,	// (0x00097e9f) popup_image_details_window_t5_ParamLimits

0xf732,	// (0x0009a760) popup_image_details_window_t_ParamLimits

0x7545,	// (0x00092573) cl_header_name_pane_ParamLimits

0x7545,	// (0x00092573) cl_header_name_pane

0x7931,	// (0x0009295f) cl_header_name_pane_t1_ParamLimits

0x7931,	// (0x0009295f) cl_header_name_pane_t1

0x7952,	// (0x00092980) cl_header_name_pane_t2_ParamLimits

0x7952,	// (0x00092980) cl_header_name_pane_t2

0x7994,	// (0x000929c2) cl_header_name_pane_t3_ParamLimits

0x7994,	// (0x000929c2) cl_header_name_pane_t3

0x0002,

0xfb38,	// (0x0009ab66) cl_header_name_pane_t_ParamLimits

0xfb38,	// (0x0009ab66) cl_header_name_pane_t

0xb3a1,	// (0x000963cf) navi_pane_mv_g2_ParamLimits

0xd67e,	// (0x000986ac) field_vitu2_entry_pane_g1_ParamLimits

0xd68a,	// (0x000986b8) field_vitu2_entry_pane_g2_ParamLimits

0xd696,	// (0x000986c4) field_vitu2_entry_pane_g3_ParamLimits

0xd696,	// (0x000986c4) field_vitu2_entry_pane_g3

0xf92e,	// (0x0009a95c) field_vitu2_entry_pane_g_ParamLimits

0xa09c,	// (0x000950ca) cell_vitu2_itu_pane_g1_ParamLimits

0x6924,	// (0x00091952) cell_vitu2_itu_pane_g2_ParamLimits

0x6924,	// (0x00091952) cell_vitu2_itu_pane_g2

0x0001,

0xf93a,	// (0x0009a968) cell_vitu2_itu_pane_g_ParamLimits

0xf93a,	// (0x0009a968) cell_vitu2_itu_pane_g

0xa3c3,	// (0x000953f1) bg_vkb2_func_pane_cp05_ParamLimits

0xa3c3,	// (0x000953f1) bg_vkb2_func_pane_cp05

0xa3c3,	// (0x000953f1) bg_vkb2_func_pane_cp03

0xa3c3,	// (0x000953f1) bg_vkb2_func_pane_cp04

0xa3c3,	// (0x000953f1) bg_vkb2_func_pane_cp10_ParamLimits

0xa3c3,	// (0x000953f1) bg_vkb2_func_pane_cp10

0x0619,	// (0x0008b647) bg_vkb2_func_pane_cp08

0x74ef,	// (0x0009251d) bg_vkb2_func_pane_cp06

0x74fd,	// (0x0009252b) bg_vkb2_func_pane_cp07

0xdbd5,	// (0x00098c03) bg_vkb2_func_pane_cp11_ParamLimits

0xdbd5,	// (0x00098c03) bg_vkb2_func_pane_cp11

0xdbea,	// (0x00098c18) bg_vkb2_func_pane_cp12_ParamLimits

0xdbea,	// (0x00098c18) bg_vkb2_func_pane_cp12

0x966e,	// (0x0009469c) bg_vkb2_func_pane_cp09

0xd6c8,	// (0x000986f6) bg_vkb2_func_pane_g1

0xac06,	// (0x00095c34) bg_vkb2_func_pane_g2

0xd6d0,	// (0x000986fe) bg_vkb2_func_pane_g3

0xd6d8,	// (0x00098706) bg_vkb2_func_pane_g4

0xd916,	// (0x00098944) bg_vkb2_func_pane_g5

0xd6f0,	// (0x0009871e) bg_vkb2_func_pane_g6

0xd6f8,	// (0x00098726) bg_vkb2_func_pane_g7

0xd6e8,	// (0x00098716) bg_vkb2_func_pane_g8

0xabe6,	// (0x00095c14) bg_vkb2_func_pane_g9

0x0008,

0xfb3f,	// (0x0009ab6d) bg_vkb2_func_pane_g

0x7855,	// (0x00092883) blid2_tripm_pane_g6_ParamLimits

0x7855,	// (0x00092883) blid2_tripm_pane_g6

0xd520,	// (0x0009854e) mp4_progress_pane_g1

0x78ce,	// (0x000928fc) blid2_tripm_values_pane_ParamLimits

0x78ce,	// (0x000928fc) blid2_tripm_values_pane

0x79c5,	// (0x000929f3) blid2_tripm_values_pane_t1

0x79d3,	// (0x00092a01) blid2_tripm_values_pane_t2

0x79e1,	// (0x00092a0f) blid2_tripm_values_pane_t3

0x79ef,	// (0x00092a1d) blid2_tripm_values_pane_t4

0x79fd,	// (0x00092a2b) blid2_tripm_values_pane_t5

0x7a0b,	// (0x00092a39) blid2_tripm_values_pane_t6

0x7a19,	// (0x00092a47) blid2_tripm_values_pane_t7

0x7a27,	// (0x00092a55) blid2_tripm_values_pane_t8

0x7a35,	// (0x00092a63) blid2_tripm_values_pane_t9

0x0008,

0xfb52,	// (0x0009ab80) blid2_tripm_values_pane_t

0x2091,	// (0x0008d0bf) call_video_pane_t1_ParamLimits

0x20af,	// (0x0008d0dd) call_video_pane_t2_ParamLimits

0xf26e,	// (0x0009a29c) call_video_pane_t_ParamLimits

0x0328,	// (0x0008b356) msg_header_pane_g1_ParamLimits

0xb589,	// (0x000965b7) msg_header_pane_g2_ParamLimits

0xb589,	// (0x000965b7) msg_header_pane_g2

0x0001,

0xf488,	// (0x0009a4b6) msg_header_pane_g_ParamLimits

0xf488,	// (0x0009a4b6) msg_header_pane_g

0xa7b8,	// (0x000957e6) main_clock2_pane_ParamLimits

0x58f6,	// (0x00090924) grid_clock2_toolbar_pane_ParamLimits

0x58f6,	// (0x00090924) grid_clock2_toolbar_pane

0x58f6,	// (0x00090924) listscroll_clock2_pane_ParamLimits

0x58f6,	// (0x00090924) listscroll_clock2_pane

0x59ed,	// (0x00090a1b) main_clock2_pane_t3_ParamLimits

0x59ed,	// (0x00090a1b) main_clock2_pane_t3

0x5a11,	// (0x00090a3f) main_clock2_pane_t4_ParamLimits

0x5a11,	// (0x00090a3f) main_clock2_pane_t4

0xdce7,	// (0x00098d15) cell_clock2_toolbar_pane

0xdcef,	// (0x00098d1d) cell_clock2_toolbar_pane_cp01

0xdcef,	// (0x00098d1d) cell_clock2_toolbar_pane_cp02

0xdcf7,	// (0x00098d25) cell_clock2_toolbar_pane_cp03

0xdcff,	// (0x00098d2d) list_clock2_pane

0xb1d4,	// (0x00096202) scroll_pane_cp10

0xdd07,	// (0x00098d35) list_single_clock2_pane_ParamLimits

0xdd07,	// (0x00098d35) list_single_clock2_pane

0xa9ad,	// (0x000959db) list_highlight_pane_cp08

0xdd14,	// (0x00098d42) list_single_clock2_pane_t1

0xdd22,	// (0x00098d50) list_single_clock2_pane_t2

0x0001,

0xfb65,	// (0x0009ab93) list_single_clock2_pane_t

0x966e,	// (0x0009469c) bg_button_pane_cp10

0xdd30,	// (0x00098d5e) cell_clock2_toolbar_pane_g1

0x3889,	// (0x0008e8b7) aid_main_viewer_pane_g1_ParamLimits

0x3889,	// (0x0008e8b7) aid_main_viewer_pane_g1

0x3897,	// (0x0008e8c5) aid_main_viewer_pane_g2_ParamLimits

0x3897,	// (0x0008e8c5) aid_main_viewer_pane_g2

0x38a5,	// (0x0008e8d3) aid_main_viewer_pane_g3_ParamLimits

0x38a5,	// (0x0008e8d3) aid_main_viewer_pane_g3

0x38b4,	// (0x0008e8e2) aid_main_viewer_pane_g4_ParamLimits

0x38b4,	// (0x0008e8e2) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x0009a4c7) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x0009a4c7) aid_main_viewer_pane_g

0x41bc,	// (0x0008f1ea) main_calc_pane_ParamLimits

0x41d0,	// (0x0008f1fe) main_dialer2_pane_ParamLimits

0x966e,	// (0x0009469c) main_cam6_pane

0x966e,	// (0x0009469c) main_vid6_pane

0x5902,	// (0x00090930) listscroll_gen_pane_cp06_ParamLimits

0x5902,	// (0x00090930) listscroll_gen_pane_cp06

0x5a34,	// (0x00090a62) main_clock2_pane_t5_ParamLimits

0x5a34,	// (0x00090a62) main_clock2_pane_t5

0x5a8e,	// (0x00090abc) aid_call2_pane_cp10_ParamLimits

0x5aa0,	// (0x00090ace) aid_call_pane_cp10_ParamLimits

0xb243,	// (0x00096271) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb243,	// (0x00096271) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5ab2,	// (0x00090ae0) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5ab2,	// (0x00090ae0) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb243,	// (0x00096271) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7e7,	// (0x0009a815) popup_clock_analogue_window_cp10_g_ParamLimits

0x5ac4,	// (0x00090af2) popup_clock_analogue_window_cp10_t1_ParamLimits

0x6138,	// (0x00091166) cell_dialer2_keypad_pane_g2_ParamLimits

0x6138,	// (0x00091166) cell_dialer2_keypad_pane_g2

0x0001,

0xf8cd,	// (0x0009a8fb) cell_dialer2_keypad_pane_g_ParamLimits

0xf8cd,	// (0x0009a8fb) cell_dialer2_keypad_pane_g

0x6154,	// (0x00091182) cell_dialer2_keypad_pane_t1

0x6caa,	// (0x00091cd8) main_cset_text2_pane_ParamLimits

0x6caa,	// (0x00091cd8) main_cset_text2_pane

0xdb3d,	// (0x00098b6b) area_vitu2_query_pane_g1_ParamLimits

0x05e0,	// (0x0008b60e) area_vitu2_query_pane_g2_ParamLimits

0xfa82,	// (0x0009aab0) area_vitu2_query_pane_g_ParamLimits

0x74cb,	// (0x000924f9) area_vitu2_query_pane_t7_ParamLimits

0x74cb,	// (0x000924f9) area_vitu2_query_pane_t7

0x74ef,	// (0x0009251d) bg_button_pane_cp018_ParamLimits

0x74fd,	// (0x0009252b) bg_button_pane_cp021_ParamLimits

0x0619,	// (0x0008b647) bg_button_pane_cp022_ParamLimits

0x0619,	// (0x0008b647) bg_vkb2_func_pane_cp08_ParamLimits

0x74ef,	// (0x0009251d) bg_vkb2_func_pane_cp06_ParamLimits

0x74fd,	// (0x0009252b) bg_vkb2_func_pane_cp07_ParamLimits

0x062a,	// (0x0008b658) input_focus_pane_cp09_ParamLimits

0xa17d,	// (0x000951ab) cam6_autofocus_pane_ParamLimits

0xa17d,	// (0x000951ab) cam6_autofocus_pane

0x7a43,	// (0x00092a71) cam6_image_uncrop_pane_ParamLimits

0x7a43,	// (0x00092a71) cam6_image_uncrop_pane

0x7a52,	// (0x00092a80) cam6_indi_pane_ParamLimits

0x7a52,	// (0x00092a80) cam6_indi_pane

0x7a68,	// (0x00092a96) cam6_mode_pane_ParamLimits

0x7a68,	// (0x00092a96) cam6_mode_pane

0x7a7a,	// (0x00092aa8) cam6_timer_pane_ParamLimits

0x7a7a,	// (0x00092aa8) cam6_timer_pane

0x7a8a,	// (0x00092ab8) cam6_zoom_pane_ParamLimits

0x7a8a,	// (0x00092ab8) cam6_zoom_pane

0x7a96,	// (0x00092ac4) cam6_mode_pane_g1_ParamLimits

0x7a96,	// (0x00092ac4) cam6_mode_pane_g1

0x7aa6,	// (0x00092ad4) cam6_mode_pane_g2_ParamLimits

0x7aa6,	// (0x00092ad4) cam6_mode_pane_g2

0x7ab6,	// (0x00092ae4) cam6_mode_pane_g3_ParamLimits

0x7ab6,	// (0x00092ae4) cam6_mode_pane_g3

0x7ac6,	// (0x00092af4) cam6_mode_pane_g4_ParamLimits

0x7ac6,	// (0x00092af4) cam6_mode_pane_g4

0x0003,

0xfb6a,	// (0x0009ab98) cam6_mode_pane_g_ParamLimits

0xfb6a,	// (0x0009ab98) cam6_mode_pane_g

0xdd38,	// (0x00098d66) bg_tb_trans_pane_cp08_ParamLimits

0xdd38,	// (0x00098d66) bg_tb_trans_pane_cp08

0xdd46,	// (0x00098d74) cam6_battery_pane_ParamLimits

0xdd46,	// (0x00098d74) cam6_battery_pane

0xdd5c,	// (0x00098d8a) cam6_indi_pane_g1_ParamLimits

0xdd5c,	// (0x00098d8a) cam6_indi_pane_g1

0xdd6e,	// (0x00098d9c) cam6_indi_pane_g2_ParamLimits

0xdd6e,	// (0x00098d9c) cam6_indi_pane_g2

0xdd80,	// (0x00098dae) cam6_indi_pane_g3_ParamLimits

0xdd80,	// (0x00098dae) cam6_indi_pane_g3

0x0002,

0xfb73,	// (0x0009aba1) cam6_indi_pane_g_ParamLimits

0xfb73,	// (0x0009aba1) cam6_indi_pane_g

0xdd92,	// (0x00098dc0) cam6_indi_pane_t1_ParamLimits

0xdd92,	// (0x00098dc0) cam6_indi_pane_t1

0x7ad6,	// (0x00092b04) cam6_autofocus_pane_g1

0x7ade,	// (0x00092b0c) cam6_autofocus_pane_g2

0x7ae6,	// (0x00092b14) cam6_autofocus_pane_g3

0x7aee,	// (0x00092b1c) cam6_autofocus_pane_g4

0x0003,

0xfb7a,	// (0x0009aba8) cam6_autofocus_pane_g

0xddb8,	// (0x00098de6) cam6_timer_pane_g1

0xddc0,	// (0x00098dee) cam6_timer_pane_t1

0xddce,	// (0x00098dfc) cam6_zoom_cont_pane

0xddd6,	// (0x00098e04) cam6_zoom_pane_g1

0xddde,	// (0x00098e0c) cam6_zoom_pane_g2

0x7af6,	// (0x00092b24) cam6_zoom_pane_g3

0x0002,

0xfb83,	// (0x0009abb1) cam6_zoom_pane_g

0xcc6d,	// (0x00097c9b) cam6_battery_pane_g1

0xcc6d,	// (0x00097c9b) cam6_battery_pane_g2

0x0001,

0xf6ef,	// (0x0009a71d) cam6_battery_pane_g

0xdde6,	// (0x00098e14) cam6_zoom_cont_pane_g1

0xddef,	// (0x00098e1d) cam6_zoom_cont_pane_g2

0xddf8,	// (0x00098e26) cam6_zoom_cont_pane_g3

0x0002,

0xfb8a,	// (0x0009abb8) cam6_zoom_cont_pane_g

0x7b13,	// (0x00092b41) cam6_mode_pane_cp_ParamLimits

0x7b13,	// (0x00092b41) cam6_mode_pane_cp

0x7a8a,	// (0x00092ab8) cam6_zoom_pane_cp_ParamLimits

0x7a8a,	// (0x00092ab8) cam6_zoom_pane_cp

0x7b25,	// (0x00092b53) vid6_image_uncrop_cif_pane_ParamLimits

0x7b25,	// (0x00092b53) vid6_image_uncrop_cif_pane

0x7b35,	// (0x00092b63) vid6_image_uncrop_nhd_pane_ParamLimits

0x7b35,	// (0x00092b63) vid6_image_uncrop_nhd_pane

0x7a43,	// (0x00092a71) vid6_image_uncrop_vga_pane_ParamLimits

0x7a43,	// (0x00092a71) vid6_image_uncrop_vga_pane

0x7b44,	// (0x00092b72) vid6_image_uncrop_wvga_pane_ParamLimits

0x7b44,	// (0x00092b72) vid6_image_uncrop_wvga_pane

0x7b53,	// (0x00092b81) vid6_indi_pane_ParamLimits

0x7b53,	// (0x00092b81) vid6_indi_pane

0xdd38,	// (0x00098d66) bg_tb_trans_pane_cp09_ParamLimits

0xdd38,	// (0x00098d66) bg_tb_trans_pane_cp09

0xde10,	// (0x00098e3e) cam6_battery_pane_cp_ParamLimits

0xde10,	// (0x00098e3e) cam6_battery_pane_cp

0xde1c,	// (0x00098e4a) vid6_indi_pane_g1_ParamLimits

0xde1c,	// (0x00098e4a) vid6_indi_pane_g1

0xde2e,	// (0x00098e5c) vid6_indi_pane_g2_ParamLimits

0xde2e,	// (0x00098e5c) vid6_indi_pane_g2

0xde40,	// (0x00098e6e) vid6_indi_pane_g3_ParamLimits

0xde40,	// (0x00098e6e) vid6_indi_pane_g3

0xde55,	// (0x00098e83) vid6_indi_pane_g4_ParamLimits

0xde55,	// (0x00098e83) vid6_indi_pane_g4

0xde6a,	// (0x00098e98) vid6_indi_pane_g5_ParamLimits

0xde6a,	// (0x00098e98) vid6_indi_pane_g5

0x0004,

0xfb91,	// (0x0009abbf) vid6_indi_pane_g_ParamLimits

0xfb91,	// (0x0009abbf) vid6_indi_pane_g

0xde84,	// (0x00098eb2) vid6_indi_pane_t1_ParamLimits

0xde84,	// (0x00098eb2) vid6_indi_pane_t1

0xde9a,	// (0x00098ec8) vid6_indi_pane_t2_ParamLimits

0xde9a,	// (0x00098ec8) vid6_indi_pane_t2

0xdec2,	// (0x00098ef0) vid6_indi_pane_t3_ParamLimits

0xdec2,	// (0x00098ef0) vid6_indi_pane_t3

0xdeea,	// (0x00098f18) vid6_indi_pane_t4_ParamLimits

0xdeea,	// (0x00098f18) vid6_indi_pane_t4

0x0003,

0xfb9c,	// (0x0009abca) vid6_indi_pane_t_ParamLimits

0xfb9c,	// (0x0009abca) vid6_indi_pane_t

0xdf0e,	// (0x00098f3c) wait_bar_pane_cp08

0x7b6b,	// (0x00092b99) main_cset_text2_pane_t1_ParamLimits

0x7b6b,	// (0x00092b99) main_cset_text2_pane_t1

0x7afe,	// (0x00092b2c) listscroll_gen_pane_cp06_t1_ParamLimits

0x7afe,	// (0x00092b2c) listscroll_gen_pane_cp06_t1

0x966e,	// (0x0009469c) main_cam6_set_pane

0xcebb,	// (0x00097ee9) bg_tb_trans_pane_cp06_ParamLimits

0x9fdd,	// (0x0009500b) cam4_indicators_pane_g1_ParamLimits

0x9fee,	// (0x0009501c) cam4_indicators_pane_g2_ParamLimits

0xf90a,	// (0x0009a938) cam4_indicators_pane_g_ParamLimits

0xa006,	// (0x00095034) cam4_indicators_pane_t1_ParamLimits

0xa3c3,	// (0x000953f1) bg_tb_trans_pane_cp07_ParamLimits

0xa030,	// (0x0009505e) vid4_indicators_pane_g1_ParamLimits

0xa044,	// (0x00095072) vid4_indicators_pane_g2_ParamLimits

0xa058,	// (0x00095086) vid4_indicators_pane_g3_ParamLimits

0xa069,	// (0x00095097) vid4_indicators_pane_g4_ParamLimits

0xf91c,	// (0x0009a94a) vid4_indicators_pane_g_ParamLimits

0xa085,	// (0x000950b3) vid4_indicators_pane_t1_ParamLimits

0xa112,	// (0x00095140) vid4_progress_pane_g1_ParamLimits

0xa122,	// (0x00095150) vid4_progress_pane_g2_ParamLimits

0x7638,	// (0x00092666) vid4_progress_pane_g3_ParamLimits

0xa132,	// (0x00095160) vid4_progress_pane_g4_ParamLimits

0xfacd,	// (0x0009aafb) vid4_progress_pane_g_ParamLimits

0x764a,	// (0x00092678) vid4_progress_pane_t1_ParamLimits

0xa14a,	// (0x00095178) vid4_progress_pane_t2_ParamLimits

0xa15f,	// (0x0009518d) vid4_progress_pane_t3_ParamLimits

0xfad8,	// (0x0009ab06) vid4_progress_pane_t_ParamLimits

0x7660,	// (0x0009268e) wait_bar_pane_cp07_ParamLimits

0x7b89,	// (0x00092bb7) main_cam6_set_pane_g2_ParamLimits

0x7b89,	// (0x00092bb7) main_cam6_set_pane_g2

0x7bad,	// (0x00092bdb) main_cset6_listscroll_pane_ParamLimits

0x7bad,	// (0x00092bdb) main_cset6_listscroll_pane

0x7bc9,	// (0x00092bf7) main_cset6_slider_pane_ParamLimits

0x7bc9,	// (0x00092bf7) main_cset6_slider_pane

0x7bdf,	// (0x00092c0d) main_cset6_text2_pane_ParamLimits

0x7bdf,	// (0x00092c0d) main_cset6_text2_pane

0xdf1d,	// (0x00098f4b) main_cset6_text_pane

0xdf25,	// (0x00098f53) main_cset_list_pane_copy1_ParamLimits

0xdf25,	// (0x00098f53) main_cset_list_pane_copy1

0xdf35,	// (0x00098f63) scroll_pane_cp028_copy1

0x7bed,	// (0x00092c1b) cset_list_set_pane_copy1

0x7bff,	// (0x00092c2d) aid_position_infowindow_above_copy1

0x7c07,	// (0x00092c35) aid_position_infowindow_below_copy1

0xa18b,	// (0x000951b9) cset_list_set_pane_g1_copy1

0x7c0f,	// (0x00092c3d) cset_list_set_pane_g3_copy1_ParamLimits

0x7c0f,	// (0x00092c3d) cset_list_set_pane_g3_copy1

0x7c1e,	// (0x00092c4c) cset_list_set_pane_t1_copy1_ParamLimits

0x7c1e,	// (0x00092c4c) cset_list_set_pane_t1_copy1

0xa3c3,	// (0x000953f1) list_highlight_pane_cp021_copy1_ParamLimits

0xa3c3,	// (0x000953f1) list_highlight_pane_cp021_copy1

0xdf3e,	// (0x00098f6c) cset6_slider_pane_ParamLimits

0xdf3e,	// (0x00098f6c) cset6_slider_pane

0xdf6a,	// (0x00098f98) main_cset6_slider_pane_g1_ParamLimits

0xdf6a,	// (0x00098f98) main_cset6_slider_pane_g1

0x7c33,	// (0x00092c61) main_cset6_slider_pane_g2_ParamLimits

0x7c33,	// (0x00092c61) main_cset6_slider_pane_g2

0xdf92,	// (0x00098fc0) main_cset6_slider_pane_g3_ParamLimits

0xdf92,	// (0x00098fc0) main_cset6_slider_pane_g3

0x7c5b,	// (0x00092c89) main_cset6_slider_pane_g4_ParamLimits

0x7c5b,	// (0x00092c89) main_cset6_slider_pane_g4

0xdf9e,	// (0x00098fcc) main_cset6_slider_pane_g5_ParamLimits

0xdf9e,	// (0x00098fcc) main_cset6_slider_pane_g5

0xd7f7,	// (0x00098825) main_cset6_slider_pane_g7_ParamLimits

0xd7f7,	// (0x00098825) main_cset6_slider_pane_g7

0xd803,	// (0x00098831) main_cset6_slider_pane_g8_ParamLimits

0xd803,	// (0x00098831) main_cset6_slider_pane_g8

0x6d57,	// (0x00091d85) main_cset6_slider_pane_g9_ParamLimits

0x6d57,	// (0x00091d85) main_cset6_slider_pane_g9

0x6d63,	// (0x00091d91) main_cset6_slider_pane_g10_ParamLimits

0x6d63,	// (0x00091d91) main_cset6_slider_pane_g10

0x6d6f,	// (0x00091d9d) main_cset6_slider_pane_g11_ParamLimits

0x6d6f,	// (0x00091d9d) main_cset6_slider_pane_g11

0x6d7b,	// (0x00091da9) main_cset6_slider_pane_g12_ParamLimits

0x6d7b,	// (0x00091da9) main_cset6_slider_pane_g12

0x6d87,	// (0x00091db5) main_cset6_slider_pane_g13_ParamLimits

0x6d87,	// (0x00091db5) main_cset6_slider_pane_g13

0x6d93,	// (0x00091dc1) main_cset6_slider_pane_g14_ParamLimits

0x6d93,	// (0x00091dc1) main_cset6_slider_pane_g14

0x7c67,	// (0x00092c95) main_cset6_slider_pane_g15_ParamLimits

0x7c67,	// (0x00092c95) main_cset6_slider_pane_g15

0xd80f,	// (0x0009883d) main_cset6_slider_pane_g16_ParamLimits

0xd80f,	// (0x0009883d) main_cset6_slider_pane_g16

0xd81b,	// (0x00098849) main_cset6_slider_pane_g17_ParamLimits

0xd81b,	// (0x00098849) main_cset6_slider_pane_g17

0x0011,

0xfba5,	// (0x0009abd3) main_cset6_slider_pane_g_ParamLimits

0xfba5,	// (0x0009abd3) main_cset6_slider_pane_g

0xdfaa,	// (0x00098fd8) main_cset6_slider_pane_t1_ParamLimits

0xdfaa,	// (0x00098fd8) main_cset6_slider_pane_t1

0x7c97,	// (0x00092cc5) main_cset6_slider_pane_t2_ParamLimits

0x7c97,	// (0x00092cc5) main_cset6_slider_pane_t2

0x7cc2,	// (0x00092cf0) main_cset6_slider_pane_t3_ParamLimits

0x7cc2,	// (0x00092cf0) main_cset6_slider_pane_t3

0x7ced,	// (0x00092d1b) main_cset6_slider_pane_t4_ParamLimits

0x7ced,	// (0x00092d1b) main_cset6_slider_pane_t4

0x7d18,	// (0x00092d46) main_cset6_slider_pane_t5_ParamLimits

0x7d18,	// (0x00092d46) main_cset6_slider_pane_t5

0xdfeb,	// (0x00099019) main_cset6_slider_pane_t7_ParamLimits

0xdfeb,	// (0x00099019) main_cset6_slider_pane_t7

0x7d43,	// (0x00092d71) main_cset6_slider_pane_t8_ParamLimits

0x7d43,	// (0x00092d71) main_cset6_slider_pane_t8

0x7d67,	// (0x00092d95) main_cset6_slider_pane_t9_ParamLimits

0x7d67,	// (0x00092d95) main_cset6_slider_pane_t9

0x7d8b,	// (0x00092db9) main_cset6_slider_pane_t10_ParamLimits

0x7d8b,	// (0x00092db9) main_cset6_slider_pane_t10

0x7daf,	// (0x00092ddd) main_cset6_slider_pane_t11_ParamLimits

0x7daf,	// (0x00092ddd) main_cset6_slider_pane_t11

0xe021,	// (0x0009904f) main_cset6_slider_pane_t14_ParamLimits

0xe021,	// (0x0009904f) main_cset6_slider_pane_t14

0xe05a,	// (0x00099088) main_cset6_slider_pane_t15_ParamLimits

0xe05a,	// (0x00099088) main_cset6_slider_pane_t15

0x000b,

0xfbca,	// (0x0009abf8) main_cset6_slider_pane_t_ParamLimits

0xfbca,	// (0x0009abf8) main_cset6_slider_pane_t

0xd43d,	// (0x0009846b) cset_slider_pane_g1_copy1

0xd8d3,	// (0x00098901) cset_slider_pane_g2_copy1

0xd8dc,	// (0x0009890a) cset_slider_pane_g3_copy1

0x966e,	// (0x0009469c) bg_popup_sub_pane_cp011_copy1

0xe093,	// (0x000990c1) main_cset_text_pane_g1_copy1

0xd965,	// (0x00098993) main_cset_text_pane_t1_copy1

0xd973,	// (0x000989a1) main_cset_text_pane_t2_copy1

0xd981,	// (0x000989af) main_cset_text_pane_t3_copy1

0xd98f,	// (0x000989bd) main_cset_text_pane_t4_copy1

0xd99d,	// (0x000989cb) main_cset_text_pane_t5_copy1

0xe09b,	// (0x000990c9) main_cset_text_pane_t6_copy1

0xe0a9,	// (0x000990d7) main_cset_text_pane_t7_copy1

0x7b6b,	// (0x00092b99) main_cset_text2_pane_t1_copy1

0xa3c3,	// (0x000953f1) main_ncimui_pane

0x4414,	// (0x0008f442) popup_query_ncimui_window_ParamLimits

0x4414,	// (0x0008f442) popup_query_ncimui_window

0x9d2a,	// (0x00094d58) field_cale_ev2_pane_g4_ParamLimits

0x9d2a,	// (0x00094d58) field_cale_ev2_pane_g4

0x6017,	// (0x00091045) cell_video_dialer_keypad_pane_g2_ParamLimits

0x6017,	// (0x00091045) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8a8,	// (0x0009a8d6) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8a8,	// (0x0009a8d6) cell_video_dialer_keypad_pane_g

0x602f,	// (0x0009105d) cell_video_dialer_keypad_pane_t1

0x966e,	// (0x0009469c) bg_popup_window_pane_cp012

0xb0bf,	// (0x000960ed) heading_pane_cp06

0xe0d5,	// (0x00099103) ncim_query_content_pane

0x966e,	// (0x0009469c) bg_popup_heading_pane_cp01

0xe0dd,	// (0x0009910b) ncim_heading_pane_t1

0xe0eb,	// (0x00099119) ncim_indicator_popup_pane

0xe0fd,	// (0x0009912b) ncim_query_button_pane

0xe111,	// (0x0009913f) ncim_query_content_pane_t1

0xe123,	// (0x00099151) ncim_query_content_pane_t2

0x0005,

0xfc0e,	// (0x0009ac3c) ncim_query_content_pane_t

0xe15d,	// (0x0009918b) ncim_query_list_pane

0xe16f,	// (0x0009919d) ncim_query_popup_pane

0xe0eb,	// (0x00099119) ncim_indicator_popup_pane_ParamLimits

0x7f14,	// (0x00092f42) ncim_query_content_pane_g1_ParamLimits

0x7f14,	// (0x00092f42) ncim_query_content_pane_g1

0xe111,	// (0x0009913f) ncim_query_content_pane_t1_ParamLimits

0xe123,	// (0x00099151) ncim_query_content_pane_t2_ParamLimits

0x7f20,	// (0x00092f4e) ncim_query_content_pane_t3_ParamLimits

0x7f20,	// (0x00092f4e) ncim_query_content_pane_t3

0x7f48,	// (0x00092f76) ncim_query_content_pane_t4_ParamLimits

0x7f48,	// (0x00092f76) ncim_query_content_pane_t4

0x7f70,	// (0x00092f9e) ncim_query_content_pane_t5_ParamLimits

0x7f70,	// (0x00092f9e) ncim_query_content_pane_t5

0xe135,	// (0x00099163) ncim_query_content_pane_t6_ParamLimits

0xe135,	// (0x00099163) ncim_query_content_pane_t6

0xfc0e,	// (0x0009ac3c) ncim_query_content_pane_t_ParamLimits

0xe15d,	// (0x0009918b) ncim_query_list_pane_ParamLimits

0xe16f,	// (0x0009919d) ncim_query_popup_pane_ParamLimits

0xe183,	// (0x000991b1) wait_bar_pane_cp04

0x966e,	// (0x0009469c) input_focus_pane_cp011

0xe18b,	// (0x000991b9) ncim_query_popup_pane_t1

0xe199,	// (0x000991c7) ncim_list_query_list_pane_ParamLimits

0xe199,	// (0x000991c7) ncim_list_query_list_pane

0x966e,	// (0x0009469c) bg_button_pane_cp027

0xe1a6,	// (0x000991d4) ncim_query_button_pane_g1

0x966e,	// (0x0009469c) list_highlight_pane_cp012

0xe1b0,	// (0x000991de) ncim_list_query_list_pane_g1

0xe1b8,	// (0x000991e6) ncim_list_query_list_pane_t1

0x9ffa,	// (0x00095028) cam4_indicators_pane_g3_ParamLimits

0x9ffa,	// (0x00095028) cam4_indicators_pane_g3

0xa075,	// (0x000950a3) vid4_indicators_pane_g5_ParamLimits

0xa075,	// (0x000950a3) vid4_indicators_pane_g5

0xa13e,	// (0x0009516c) vid4_progress_pane_g5_ParamLimits

0xa13e,	// (0x0009516c) vid4_progress_pane_g5

0x7e02,	// (0x00092e30) main_ncimui_pane_g1

0x7e68,	// (0x00092e96) ncimui_group_query_pane_ParamLimits

0x7e68,	// (0x00092e96) ncimui_group_query_pane

0x7eb0,	// (0x00092ede) ncimui_list_pane_ParamLimits

0x7eb0,	// (0x00092ede) ncimui_list_pane

0x7ed7,	// (0x00092f05) ncimui_text_pane_ParamLimits

0x7ed7,	// (0x00092f05) ncimui_text_pane

0x7f98,	// (0x00092fc6) ncimui_text_pane_t1_ParamLimits

0x7f98,	// (0x00092fc6) ncimui_text_pane_t1

0xe1c6,	// (0x000991f4) ncimui_list_single_graphic_pane_ParamLimits

0xe1c6,	// (0x000991f4) ncimui_list_single_graphic_pane

0x7fb6,	// (0x00092fe4) ncimui_query_pane_ParamLimits

0x7fb6,	// (0x00092fe4) ncimui_query_pane

0x966e,	// (0x0009469c) list_highlight_pane_cp013

0xe1d6,	// (0x00099204) ncim_list_query_list_pane_t1_copy1

0xe1e4,	// (0x00099212) ncim_list_single_graphic_pane_g1

0xe1ec,	// (0x0009921a) ncim_query_button_pane_cp01

0xe1f8,	// (0x00099226) ncim_query_entry_pane_ParamLimits

0xe1f8,	// (0x00099226) ncim_query_entry_pane

0xe20b,	// (0x00099239) ncimui_query_pane_g1

0xe217,	// (0x00099245) ncimui_query_pane_t1_ParamLimits

0xe217,	// (0x00099245) ncimui_query_pane_t1

0xa3c3,	// (0x000953f1) input_focus_pane_cp012

0xe230,	// (0x0009925e) ncim_query_entry_pane_t1

0xa7b8,	// (0x000957e6) main_im_pane_ParamLimits

0xa3c3,	// (0x000953f1) main_mobtv_pane_ParamLimits

0xa3c3,	// (0x000953f1) main_mobtv_pane

0x7c7f,	// (0x00092cad) main_cset6_slider_pane_g18_ParamLimits

0x7c7f,	// (0x00092cad) main_cset6_slider_pane_g18

0x7c8b,	// (0x00092cb9) main_cset6_slider_pane_g19_ParamLimits

0x7c8b,	// (0x00092cb9) main_cset6_slider_pane_g19

0xb062,	// (0x00096090) bg_main_mobtv_pane_ParamLimits

0xb062,	// (0x00096090) bg_main_mobtv_pane

0x7fc9,	// (0x00092ff7) main_mobtv_info_pane

0x7fd2,	// (0x00093000) main_mobtv_loading_pane_ParamLimits

0x7fd2,	// (0x00093000) main_mobtv_loading_pane

0xe242,	// (0x00099270) main_mobtv_pg_channel_list_pane

0xe24c,	// (0x0009927a) main_mobtv_pg_hdr_pane

0x7fdf,	// (0x0009300d) main_mobtv_programe_curr_pane_ParamLimits

0x7fdf,	// (0x0009300d) main_mobtv_programe_curr_pane

0x7fec,	// (0x0009301a) main_mobtv_programe_next_pane_ParamLimits

0x7fec,	// (0x0009301a) main_mobtv_programe_next_pane

0xe255,	// (0x00099283) popup_mobtv_noti_window

0xcc6d,	// (0x00097c9b) main_tv_pg_hdr_pane_g1

0xe25d,	// (0x0009928b) main_tv_pg_hdr_pane_g2

0xe265,	// (0x00099293) main_tv_pg_hdr_pane_g3

0xe26d,	// (0x0009929b) main_tv_pg_hdr_pane_g4

0xe275,	// (0x000992a3) main_tv_pg_hdr_pane_g5

0xe27f,	// (0x000992ad) main_tv_pg_hdr_pane_g6

0xe289,	// (0x000992b7) main_tv_pg_hdr_pane_g7

0xe293,	// (0x000992c1) main_tv_pg_hdr_pane_g8

0xe29d,	// (0x000992cb) main_tv_pg_hdr_pane_g9

0xe2a7,	// (0x000992d5) main_tv_pg_hdr_pane_g10

0xe2b1,	// (0x000992df) main_tv_pg_hdr_pane_g11

0x000a,

0xfc1b,	// (0x0009ac49) main_tv_pg_hdr_pane_g

0xe2bb,	// (0x000992e9) main_tv_pg_hdr_pane_t1

0xe2c9,	// (0x000992f7) main_tv_pg_hdr_pane_t2

0xe2d7,	// (0x00099305) main_tv_pg_hdr_pane_t3

0xe2e7,	// (0x00099315) main_tv_pg_hdr_pane_t4

0xe2f7,	// (0x00099325) main_tv_pg_hdr_pane_t5

0x0004,

0xfc32,	// (0x0009ac60) main_tv_pg_hdr_pane_t

0xe307,	// (0x00099335) single_mobtv_pg_channel_pane_ParamLimits

0xe307,	// (0x00099335) single_mobtv_pg_channel_pane

0xe319,	// (0x00099347) single_mobtv_pg_channel_table_pane

0xad09,	// (0x00095d37) single_mobtv_pg_channel_thumb_pane

0xe322,	// (0x00099350) single_tv_pg_channel_pane_g1

0xe32b,	// (0x00099359) single_tv_pg_channel_pane_g2

0x0001,

0xfc3d,	// (0x0009ac6b) single_tv_pg_channel_pane_g

0xcebb,	// (0x00097ee9) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xcebb,	// (0x00097ee9) bg_single_mobtv_pg_channel_thumb_pane

0xe334,	// (0x00099362) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe334,	// (0x00099362) single_mobtv_pg_channel_thumb_pane_g1

0xe342,	// (0x00099370) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe342,	// (0x00099370) single_mobtv_pg_channel_thumb_pane_g2

0xe34e,	// (0x0009937c) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe34e,	// (0x0009937c) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc42,	// (0x0009ac70) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc42,	// (0x0009ac70) single_mobtv_pg_channel_thumb_pane_g

0xe35a,	// (0x00099388) single_mobtv_pg_channel_thumb_pane_t1

0xe368,	// (0x00099396) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc49,	// (0x0009ac77) single_mobtv_pg_channel_thumb_pane_t

0xcc6d,	// (0x00097c9b) bg_single_mobtv_pg_channel_table_pane_g1

0xcc6d,	// (0x00097c9b) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6ef,	// (0x0009a71d) bg_single_mobtv_pg_channel_table_pane_g

0xe376,	// (0x000993a4) single_mobtv_pg_channel_table_pane_t1

0xe384,	// (0x000993b2) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc4e,	// (0x0009ac7c) single_mobtv_pg_channel_table_pane_t

0x8001,	// (0x0009302f) main_mobtv_info_pane_g1_ParamLimits

0x8001,	// (0x0009302f) main_mobtv_info_pane_g1

0x801f,	// (0x0009304d) main_mobtv_info_pane_t1_ParamLimits

0x801f,	// (0x0009304d) main_mobtv_info_pane_t1

0x8097,	// (0x000930c5) main_mobtv_info_pane_t2_ParamLimits

0x8097,	// (0x000930c5) main_mobtv_info_pane_t2

0x0002,

0xfc58,	// (0x0009ac86) main_mobtv_info_pane_t_ParamLimits

0xfc58,	// (0x0009ac86) main_mobtv_info_pane_t

0x8126,	// (0x00093154) wait_bar_pane_cp05

0x8138,	// (0x00093166) main_mobtv_loading_pane_g1_ParamLimits

0x8138,	// (0x00093166) main_mobtv_loading_pane_g1

0x814b,	// (0x00093179) main_mobtv_loading_pane_g2_ParamLimits

0x814b,	// (0x00093179) main_mobtv_loading_pane_g2

0x8157,	// (0x00093185) main_mobtv_loading_pane_g3_ParamLimits

0x8157,	// (0x00093185) main_mobtv_loading_pane_g3

0x0002,

0xfc5f,	// (0x0009ac8d) main_mobtv_loading_pane_g_ParamLimits

0xfc5f,	// (0x0009ac8d) main_mobtv_loading_pane_g

0xe392,	// (0x000993c0) main_mobtv_loading_pane_t1_ParamLimits

0xe392,	// (0x000993c0) main_mobtv_loading_pane_t1

0xe3aa,	// (0x000993d8) main_mobtv_loading_pane_t2_ParamLimits

0xe3aa,	// (0x000993d8) main_mobtv_loading_pane_t2

0x0001,

0xfc66,	// (0x0009ac94) main_mobtv_loading_pane_t_ParamLimits

0xfc66,	// (0x0009ac94) main_mobtv_loading_pane_t

0x816a,	// (0x00093198) wait_bar_pane_cp06_ParamLimits

0x816a,	// (0x00093198) wait_bar_pane_cp06

0xe3ce,	// (0x000993fc) main_mobtv_programe_curr_pane_t1

0xe3dc,	// (0x0009940a) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc6b,	// (0x0009ac99) main_mobtv_programe_curr_pane_t

0xe3ea,	// (0x00099418) main_mobtv_programe_next_pane_t1

0xe3f8,	// (0x00099426) main_mobtv_programe_next_pane_t2

0xe406,	// (0x00099434) main_mobtv_programe_next_pane_t3

0x0002,

0xfc70,	// (0x0009ac9e) main_mobtv_programe_next_pane_t

0x966e,	// (0x0009469c) bg_popup_mobtv_noti_window_pane

0xe414,	// (0x00099442) popup_mobtv_noti_window_g1

0xe41c,	// (0x0009944a) popup_mobtv_noti_window_t1

0xe42a,	// (0x00099458) popup_mobtv_noti_window_t2

0x0001,

0xfc77,	// (0x0009aca5) popup_mobtv_noti_window_t

0xcc6d,	// (0x00097c9b) bg_popup_mobtv_noti_window_pane_g1

0x966e,	// (0x0009469c) sc_clock_pane

0x966e,	// (0x0009469c) main_fs_bigclock_pane

0x78b8,	// (0x000928e6) blid2_tripm_pane_t4_ParamLimits

0x78b8,	// (0x000928e6) blid2_tripm_pane_t4

0x8179,	// (0x000931a7) sc_clock_pane_g1_ParamLimits

0x8179,	// (0x000931a7) sc_clock_pane_g1

0x818b,	// (0x000931b9) sc_clock_pane_t1_ParamLimits

0x818b,	// (0x000931b9) sc_clock_pane_t1

0x81ad,	// (0x000931db) sc_clock_pane_t2_ParamLimits

0x81ad,	// (0x000931db) sc_clock_pane_t2

0x81c5,	// (0x000931f3) sc_clock_pane_t3_ParamLimits

0x81c5,	// (0x000931f3) sc_clock_pane_t3

0x0004,

0xfc7c,	// (0x0009acaa) sc_clock_pane_t_ParamLimits

0xfc7c,	// (0x0009acaa) sc_clock_pane_t

0x8c6e,	// (0x00093c9c) main_fs_bigclock_indicator_pane_ParamLimits

0x8c6e,	// (0x00093c9c) main_fs_bigclock_indicator_pane

0x8265,	// (0x00093293) main_fs_bigclock_pane_g1_ParamLimits

0x8265,	// (0x00093293) main_fs_bigclock_pane_g1

0x8c7a,	// (0x00093ca8) main_fs_bigclock_pane_t1_ParamLimits

0x8c7a,	// (0x00093ca8) main_fs_bigclock_pane_t1

0x8c8c,	// (0x00093cba) main_fs_bigclock_pane_t2_ParamLimits

0x8c8c,	// (0x00093cba) main_fs_bigclock_pane_t2

0x8ca0,	// (0x00093cce) main_fs_bigclock_pane_t3_ParamLimits

0x8ca0,	// (0x00093cce) main_fs_bigclock_pane_t3

0x0002,

0xfe73,	// (0x0009aea1) main_fs_bigclock_pane_t_ParamLimits

0xfe73,	// (0x0009aea1) main_fs_bigclock_pane_t

0xec94,	// (0x00099cc2) main_fs_bigclock_indicator_pane_g1

0xe105,	// (0x00099133) ncim_query_content_pane_g2_ParamLimits

0xe105,	// (0x00099133) ncim_query_content_pane_g2

0x0001,

0xfc09,	// (0x0009ac37) ncim_query_content_pane_g_ParamLimits

0xfc09,	// (0x0009ac37) ncim_query_content_pane_g

0x81de,	// (0x0009320c) sc_clock_pane_t4_ParamLimits

0x81de,	// (0x0009320c) sc_clock_pane_t4

0xa3c3,	// (0x000953f1) main_radioblah_pane

0xd609,	// (0x00098637) cell_call4_button_pane_t1_copy1_ParamLimits

0xd609,	// (0x00098637) cell_call4_button_pane_t1_copy1

0x7e1a,	// (0x00092e48) main_ncimui_pane_t1_ParamLimits

0x7e1a,	// (0x00092e48) main_ncimui_pane_t1

0x7e34,	// (0x00092e62) main_ncimui_pane_t2_ParamLimits

0x7e34,	// (0x00092e62) main_ncimui_pane_t2

0x0002,

0xfc02,	// (0x0009ac30) main_ncimui_pane_t_ParamLimits

0xfc02,	// (0x0009ac30) main_ncimui_pane_t

0xe56f,	// (0x0009959d) main_radioblah_anim_pane_ParamLimits

0xe56f,	// (0x0009959d) main_radioblah_anim_pane

0xe580,	// (0x000995ae) main_radioblah_info_pane_ParamLimits

0xe580,	// (0x000995ae) main_radioblah_info_pane

0xe594,	// (0x000995c2) main_radioblah_pane_t1_ParamLimits

0xe594,	// (0x000995c2) main_radioblah_pane_t1

0xe5b0,	// (0x000995de) main_radioblah_pane_t2_ParamLimits

0xe5b0,	// (0x000995de) main_radioblah_pane_t2

0x0003,

0xfc9d,	// (0x0009accb) main_radioblah_pane_t_ParamLimits

0xfc9d,	// (0x0009accb) main_radioblah_pane_t

0x82bd,	// (0x000932eb) main_radioblah_rocker_ctrl_pane_ParamLimits

0x82bd,	// (0x000932eb) main_radioblah_rocker_ctrl_pane

0xe5f8,	// (0x00099626) main_radioblah_info_pane_t1_ParamLimits

0xe5f8,	// (0x00099626) main_radioblah_info_pane_t1

0x8315,	// (0x00093343) main_radioblah_info_pane_t2_ParamLimits

0x8315,	// (0x00093343) main_radioblah_info_pane_t2

0x0003,

0xfca6,	// (0x0009acd4) main_radioblah_info_pane_t_ParamLimits

0xfca6,	// (0x0009acd4) main_radioblah_info_pane_t

0xcc6d,	// (0x00097c9b) main_radioblah_rocker_ctrl_pane_g1

0x83c5,	// (0x000933f3) main_radioblah_rocker_ctrl_pane_g2

0x83cd,	// (0x000933fb) main_radioblah_rocker_ctrl_pane_g3

0x83d5,	// (0x00093403) main_radioblah_rocker_ctrl_pane_g4

0x83dd,	// (0x0009340b) main_radioblah_rocker_ctrl_pane_g5

0x83e5,	// (0x00093413) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcaf,	// (0x0009acdd) main_radioblah_rocker_ctrl_pane_g

0x7b6b,	// (0x00092b99) main_cset_text2_pane_t1_copy1_ParamLimits

0x9fcd,	// (0x00094ffb) cam4_image_uncrop_qvga_pane

0xa020,	// (0x0009504e) vid4_image_uncrop_qcif_pane

0xa17d,	// (0x000951ab) cam6_image_uncrop_qvga_pane_ParamLimits

0xa17d,	// (0x000951ab) cam6_image_uncrop_qvga_pane

0xde00,	// (0x00098e2e) vid6_image_uncrop_qcif_pane_ParamLimits

0xde00,	// (0x00098e2e) vid6_image_uncrop_qcif_pane

0x966e,	// (0x0009469c) bg_popup_preview_window_pane_cp03

0xe0b7,	// (0x000990e5) list_cset_text2_pane

0xe0bf,	// (0x000990ed) main_cset6_text2_pane_g1

0xe0c7,	// (0x000990f5) main_cset6_text2_pane_t1

0xe632,	// (0x00099660) list_cset_text2_pane_t1_ParamLimits

0xe632,	// (0x00099660) list_cset_text2_pane_t1

0xa3c3,	// (0x000953f1) main_radioblah_pane_ParamLimits

0x8112,	// (0x00093140) main_mobtv_info_pane_t3_ParamLimits

0x8112,	// (0x00093140) main_mobtv_info_pane_t3

0x82ab,	// (0x000932d9) main_radioblah_pane_g1

0x82e5,	// (0x00093313) main_radioblah_info_pane_g1

0x836a,	// (0x00093398) main_radioblah_info_pane_t3_ParamLimits

0x836a,	// (0x00093398) main_radioblah_info_pane_t3

0x2f58,	// (0x0008df86) highlight_cell_cale_month_pane_ParamLimits

0x2f58,	// (0x0008df86) highlight_cell_cale_month_pane

0x966e,	// (0x0009469c) main_phob_fisheye_pane

0xcf97,	// (0x00097fc5) scroll_pane_cp0031_ParamLimits

0xcf97,	// (0x00097fc5) scroll_pane_cp0031

0xdf0e,	// (0x00098f3c) wait_bar_pane_cp08_ParamLimits

0x7bed,	// (0x00092c1b) cset_list_set_pane_copy1_ParamLimits

0xe64d,	// (0x0009967b) highlight_cell_cale_month_pane_g1

0x83ed,	// (0x0009341b) highlight_cell_cale_month_pane_t1

0xdb91,	// (0x00098bbf) list_gen_pane_cp01

0xd7e2,	// (0x00098810) scroll_pane_01

0x83fb,	// (0x00093429) list_single_double_fisheye_pane

0x0703,	// (0x0008b731) list_double_fisheye_pane_g1_ParamLimits

0x0703,	// (0x0008b731) list_double_fisheye_pane_g1

0x070f,	// (0x0008b73d) list_double_fisheye_pane_g2_ParamLimits

0x070f,	// (0x0008b73d) list_double_fisheye_pane_g2

0x8404,	// (0x00093432) list_double_fisheye_pane_g3_ParamLimits

0x8404,	// (0x00093432) list_double_fisheye_pane_g3

0x0004,

0xfcbc,	// (0x0009acea) list_double_fisheye_pane_g_ParamLimits

0xfcbc,	// (0x0009acea) list_double_fisheye_pane_g

0x0740,	// (0x0008b76e) list_double_fisheye_pane_t1_ParamLimits

0x0740,	// (0x0008b76e) list_double_fisheye_pane_t1

0x075b,	// (0x0008b789) list_double_fisheye_pane_t2_ParamLimits

0x075b,	// (0x0008b789) list_double_fisheye_pane_t2

0x0001,

0xfcc7,	// (0x0009acf5) list_double_fisheye_pane_t_ParamLimits

0xfcc7,	// (0x0009acf5) list_double_fisheye_pane_t

0x966e,	// (0x0009469c) main_call5_pane

0x8209,	// (0x00093237) sc_swipe_pane_ParamLimits

0x8209,	// (0x00093237) sc_swipe_pane

0x8423,	// (0x00093451) call5_image_pane_ParamLimits

0x8423,	// (0x00093451) call5_image_pane

0x8440,	// (0x0009346e) call5_swipe_1_pane_ParamLimits

0x8440,	// (0x0009346e) call5_swipe_1_pane

0x8453,	// (0x00093481) call5_swipe_2_pane_ParamLimits

0x8453,	// (0x00093481) call5_swipe_2_pane

0x847e,	// (0x000934ac) popup_call5_audio_first_window_ParamLimits

0x847e,	// (0x000934ac) popup_call5_audio_first_window

0xcebb,	// (0x00097ee9) call5_swipe_1_pane_g1_ParamLimits

0xcebb,	// (0x00097ee9) call5_swipe_1_pane_g1

0xe655,	// (0x00099683) call5_swipe_1_pane_g2_ParamLimits

0xe655,	// (0x00099683) call5_swipe_1_pane_g2

0x0001,

0xfccc,	// (0x0009acfa) call5_swipe_1_pane_g_ParamLimits

0xfccc,	// (0x0009acfa) call5_swipe_1_pane_g

0xe661,	// (0x0009968f) call5_swipe_1_pane_t1_ParamLimits

0xe661,	// (0x0009968f) call5_swipe_1_pane_t1

0xcebb,	// (0x00097ee9) call5_swipe_2_pane_g1_ParamLimits

0xcebb,	// (0x00097ee9) call5_swipe_2_pane_g1

0xe676,	// (0x000996a4) call5_swipe_2_pane_g2_ParamLimits

0xe676,	// (0x000996a4) call5_swipe_2_pane_g2

0x0001,

0xfcd1,	// (0x0009acff) call5_swipe_2_pane_g_ParamLimits

0xfcd1,	// (0x0009acff) call5_swipe_2_pane_g

0xe682,	// (0x000996b0) call5_swipe_2_pane_t1_ParamLimits

0xe682,	// (0x000996b0) call5_swipe_2_pane_t1

0xe697,	// (0x000996c5) sc_swipe_pane_g1_ParamLimits

0xe697,	// (0x000996c5) sc_swipe_pane_g1

0xe6a4,	// (0x000996d2) sc_swipe_pane_g2_ParamLimits

0xe6a4,	// (0x000996d2) sc_swipe_pane_g2

0x0001,

0xfcd6,	// (0x0009ad04) sc_swipe_pane_g_ParamLimits

0xfcd6,	// (0x0009ad04) sc_swipe_pane_g

0xe6b0,	// (0x000996de) sc_swipe_pane_t1_ParamLimits

0xe6b0,	// (0x000996de) sc_swipe_pane_t1

0x966e,	// (0x0009469c) main_cmail_launcher_pane

0x848f,	// (0x000934bd) aid_size_cell_cmail_l_ParamLimits

0x848f,	// (0x000934bd) aid_size_cell_cmail_l

0x84a9,	// (0x000934d7) grid_cmail_l_pane_ParamLimits

0x84a9,	// (0x000934d7) grid_cmail_l_pane

0x84c3,	// (0x000934f1) cell_cmail_l_pane_ParamLimits

0x84c3,	// (0x000934f1) cell_cmail_l_pane

0x84e9,	// (0x00093517) cell_cmail_l_pane_g1_ParamLimits

0x84e9,	// (0x00093517) cell_cmail_l_pane_g1

0x84fa,	// (0x00093528) cell_cmail_l_pane_t1_ParamLimits

0x84fa,	// (0x00093528) cell_cmail_l_pane_t1

0xe6c5,	// (0x000996f3) cell_cmail_l_pane_t2_ParamLimits

0xe6c5,	// (0x000996f3) cell_cmail_l_pane_t2

0x0001,

0xfcdb,	// (0x0009ad09) cell_cmail_l_pane_t_ParamLimits

0xfcdb,	// (0x0009ad09) cell_cmail_l_pane_t

0xa3c3,	// (0x000953f1) grid_highlight_pane_cp018_ParamLimits

0xa3c3,	// (0x000953f1) grid_highlight_pane_cp018

0x0fe0,	// (0x0008c00e) main2_pane_ParamLimits

0x0fe0,	// (0x0008c00e) main2_pane

0xa863,	// (0x00095891) popup_sp_fs_action_menu_bg_pane_g1

0xa86b,	// (0x00095899) popup_sp_fs_action_menu_bg_pane_g2

0xa873,	// (0x000958a1) popup_sp_fs_action_menu_bg_pane_g3

0xa87b,	// (0x000958a9) popup_sp_fs_action_menu_bg_pane_g4

0xa883,	// (0x000958b1) popup_sp_fs_action_menu_bg_pane_g5

0xa88b,	// (0x000958b9) popup_sp_fs_action_menu_bg_pane_g6

0xa893,	// (0x000958c1) popup_sp_fs_action_menu_bg_pane_g7

0xa89b,	// (0x000958c9) popup_sp_fs_action_menu_bg_pane_g8

0xa8a3,	// (0x000958d1) popup_sp_fs_action_menu_bg_pane_g9

0xa8ab,	// (0x000958d9) popup_sp_fs_action_menu_bg_pane_g10

0xa8ab,	// (0x000958d9) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18a,	// (0x0009a1b8) popup_sp_fs_action_menu_bg_pane_g

0x0112,	// (0x0008b140) list_medium_line_x2_t3_g3_g1_ParamLimits

0x0112,	// (0x0008b140) list_medium_line_x2_t3_g3_g1

0x1fc6,	// (0x0008cff4) list_medium_line_x2_t3_g3_g2_ParamLimits

0x1fc6,	// (0x0008cff4) list_medium_line_x2_t3_g3_g2

0x011e,	// (0x0008b14c) list_medium_line_x2_t3_g3_g3_ParamLimits

0x011e,	// (0x0008b14c) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x0009a266) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x0009a266) list_medium_line_x2_t3_g3_g

0x012a,	// (0x0008b158) list_medium_line_x2_t3_g3_t1_ParamLimits

0x012a,	// (0x0008b158) list_medium_line_x2_t3_g3_t1

0x013f,	// (0x0008b16d) list_medium_line_x2_t3_g3_t2_ParamLimits

0x013f,	// (0x0008b16d) list_medium_line_x2_t3_g3_t2

0x0153,	// (0x0008b181) list_medium_line_x2_t3_g3_t3_ParamLimits

0x0153,	// (0x0008b181) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x0009a26d) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x0009a26d) list_medium_line_x2_t3_g3_t

0x0112,	// (0x0008b140) list_medium_line_x2_t3_g2_g1_ParamLimits

0x0112,	// (0x0008b140) list_medium_line_x2_t3_g2_g1

0x011e,	// (0x0008b14c) list_medium_line_x2_t3_g2_g2_ParamLimits

0x011e,	// (0x0008b14c) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x0009a274) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x0009a274) list_medium_line_x2_t3_g2_g

0x0168,	// (0x0008b196) list_medium_line_x2_t3_g2_t1_ParamLimits

0x0168,	// (0x0008b196) list_medium_line_x2_t3_g2_t1

0x017e,	// (0x0008b1ac) list_medium_line_x2_t3_g2_t2_ParamLimits

0x017e,	// (0x0008b1ac) list_medium_line_x2_t3_g2_t2

0x0153,	// (0x0008b181) list_medium_line_x2_t3_g2_t3_ParamLimits

0x0153,	// (0x0008b181) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x0009a279) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x0009a279) list_medium_line_x2_t3_g2_t

0x0112,	// (0x0008b140) list_medium_line_x2_t4_g4_g1_ParamLimits

0x0112,	// (0x0008b140) list_medium_line_x2_t4_g4_g1

0x1fd2,	// (0x0008d000) list_medium_line_x2_t4_g4_g2_ParamLimits

0x1fd2,	// (0x0008d000) list_medium_line_x2_t4_g4_g2

0x1fc6,	// (0x0008cff4) list_medium_line_x2_t4_g4_g3_ParamLimits

0x1fc6,	// (0x0008cff4) list_medium_line_x2_t4_g4_g3

0x0190,	// (0x0008b1be) list_medium_line_x2_t4_g4_g4_ParamLimits

0x0190,	// (0x0008b1be) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x0009a280) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x0009a280) list_medium_line_x2_t4_g4_g

0x019c,	// (0x0008b1ca) list_medium_line_x2_t4_g4_t1_ParamLimits

0x019c,	// (0x0008b1ca) list_medium_line_x2_t4_g4_t1

0x01b6,	// (0x0008b1e4) list_medium_line_x2_t4_g4_t2_ParamLimits

0x01b6,	// (0x0008b1e4) list_medium_line_x2_t4_g4_t2

0x01cc,	// (0x0008b1fa) list_medium_line_x2_t4_g4_t3_ParamLimits

0x01cc,	// (0x0008b1fa) list_medium_line_x2_t4_g4_t3

0x01e1,	// (0x0008b20f) list_medium_line_x2_t4_g4_t4_ParamLimits

0x01e1,	// (0x0008b20f) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x0009a289) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x0009a289) list_medium_line_x2_t4_g4_t

0x0112,	// (0x0008b140) list_medium_line_x2_t2_g4_g1_ParamLimits

0x0112,	// (0x0008b140) list_medium_line_x2_t2_g4_g1

0x1fd2,	// (0x0008d000) list_medium_line_x2_t2_g4_g2_ParamLimits

0x1fd2,	// (0x0008d000) list_medium_line_x2_t2_g4_g2

0x1fc6,	// (0x0008cff4) list_medium_line_x2_t2_g4_g3_ParamLimits

0x1fc6,	// (0x0008cff4) list_medium_line_x2_t2_g4_g3

0x011e,	// (0x0008b14c) list_medium_line_x2_t2_g4_g4_ParamLimits

0x011e,	// (0x0008b14c) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x0009a2f0) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x0009a2f0) list_medium_line_x2_t2_g4_g

0x01f3,	// (0x0008b221) list_medium_line_x2_t2_g4_t1_ParamLimits

0x01f3,	// (0x0008b221) list_medium_line_x2_t2_g4_t1

0x0153,	// (0x0008b181) list_medium_line_x2_t2_g4_t2_ParamLimits

0x0153,	// (0x0008b181) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x0009a2f9) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x0009a2f9) list_medium_line_x2_t2_g4_t

0x0112,	// (0x0008b140) list_medium_line_x2_t2_g3_g1_ParamLimits

0x0112,	// (0x0008b140) list_medium_line_x2_t2_g3_g1

0x1fc6,	// (0x0008cff4) list_medium_line_x2_t2_g3_g2_ParamLimits

0x1fc6,	// (0x0008cff4) list_medium_line_x2_t2_g3_g2

0x011e,	// (0x0008b14c) list_medium_line_x2_t2_g3_g3_ParamLimits

0x011e,	// (0x0008b14c) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x0009a266) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x0009a266) list_medium_line_x2_t2_g3_g

0x0208,	// (0x0008b236) list_medium_line_x2_t2_g3_t1_ParamLimits

0x0208,	// (0x0008b236) list_medium_line_x2_t2_g3_t1

0x0153,	// (0x0008b181) list_medium_line_x2_t2_g3_t2_ParamLimits

0x0153,	// (0x0008b181) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x0009a2fe) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x0009a2fe) list_medium_line_x2_t2_g3_t

0x30bd,	// (0x0008e0eb) main_sp_fs_list_pane_ParamLimits

0x30bd,	// (0x0008e0eb) main_sp_fs_list_pane

0xca0b,	// (0x00097a39) sp_fs_scroll_pane_ParamLimits

0xca0b,	// (0x00097a39) sp_fs_scroll_pane

0x021d,	// (0x0008b24b) list_medium_line_x2_t3_t1

0x022d,	// (0x0008b25b) list_medium_line_x2_t3_t2

0x023b,	// (0x0008b269) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x0009a349) list_medium_line_x2_t3_t

0x0249,	// (0x0008b277) list_medium_line_x3_t4_t1

0x0259,	// (0x0008b287) list_medium_line_x3_t4_t2

0x0267,	// (0x0008b295) list_medium_line_x3_t4_t3

0x023b,	// (0x0008b269) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x0009a350) list_medium_line_x3_t4_t

0x0275,	// (0x0008b2a3) list_medium_line_x4_t5_t1

0x0285,	// (0x0008b2b3) list_medium_line_x4_t5_t2

0x0267,	// (0x0008b295) list_medium_line_x4_t5_t3

0x0293,	// (0x0008b2c1) list_medium_line_x4_t5_t4

0x023b,	// (0x0008b269) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x0009a359) list_medium_line_x4_t5_t

0x0112,	// (0x0008b140) list_medium_line_t4_g4_g1_ParamLimits

0x0112,	// (0x0008b140) list_medium_line_t4_g4_g1

0x0190,	// (0x0008b1be) list_medium_line_t4_g4_g2_ParamLimits

0x0190,	// (0x0008b1be) list_medium_line_t4_g4_g2

0x02a1,	// (0x0008b2cf) list_medium_line_t4_g4_g3_ParamLimits

0x02a1,	// (0x0008b2cf) list_medium_line_t4_g4_g3

0x011e,	// (0x0008b14c) list_medium_line_t4_g4_g4_ParamLimits

0x011e,	// (0x0008b14c) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x0009a364) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x0009a364) list_medium_line_t4_g4_g

0x02ad,	// (0x0008b2db) list_medium_line_t4_g4_t1_ParamLimits

0x02ad,	// (0x0008b2db) list_medium_line_t4_g4_t1

0x02c2,	// (0x0008b2f0) list_medium_line_t4_g4_t2_ParamLimits

0x02c2,	// (0x0008b2f0) list_medium_line_t4_g4_t2

0x02d7,	// (0x0008b305) list_medium_line_t4_g4_t3_ParamLimits

0x02d7,	// (0x0008b305) list_medium_line_t4_g4_t3

0x0153,	// (0x0008b181) list_medium_line_t4_g4_t4_ParamLimits

0x0153,	// (0x0008b181) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x0009a36d) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x0009a36d) list_medium_line_t4_g4_t

0x318c,	// (0x0008e1ba) chi_dic_find_pane_g1

0x41e4,	// (0x0008f212) main_tport_pane

0x0475,	// (0x0008b4a3) list_medium_line_plain_t1

0x0483,	// (0x0008b4b1) list_medium_line_t2_g2_g1_ParamLimits

0x0483,	// (0x0008b4b1) list_medium_line_t2_g2_g1

0x70eb,	// (0x00092119) list_medium_line_t2_g2_g2_ParamLimits

0x70eb,	// (0x00092119) list_medium_line_t2_g2_g2

0x0001,

0xfa13,	// (0x0009aa41) list_medium_line_t2_g2_g_ParamLimits

0xfa13,	// (0x0009aa41) list_medium_line_t2_g2_g

0x048f,	// (0x0008b4bd) list_medium_line_t2_g2_t1_ParamLimits

0x048f,	// (0x0008b4bd) list_medium_line_t2_g2_t1

0x04a9,	// (0x0008b4d7) list_medium_line_t2_g2_t2_ParamLimits

0x04a9,	// (0x0008b4d7) list_medium_line_t2_g2_t2

0x0001,

0xfa18,	// (0x0009aa46) list_medium_line_t2_g2_t_ParamLimits

0xfa18,	// (0x0009aa46) list_medium_line_t2_g2_t

0x7671,	// (0x0009269f) aid_sp_fs_list_icon_a_sm

0xa175,	// (0x000951a3) aid_sp_fs_list_icon_d

0xb050,	// (0x0009607e) aid_sp_fs_text_primary

0xb059,	// (0x00096087) aid_sp_fs_text_secondary

0x7679,	// (0x000926a7) list_medium_line

0x7679,	// (0x000926a7) list_medium_line_g2

0x7679,	// (0x000926a7) list_medium_line_g3

0x7679,	// (0x000926a7) list_medium_line_plain

0x7679,	// (0x000926a7) list_medium_line_plain_t2

0x7679,	// (0x000926a7) list_medium_line_plain_t3

0x7679,	// (0x000926a7) list_medium_line_right_icon

0x7679,	// (0x000926a7) list_medium_line_right_iconx2

0x7679,	// (0x000926a7) list_medium_line_t2

0x7679,	// (0x000926a7) list_medium_line_t2_g2

0x7679,	// (0x000926a7) list_medium_line_t2_g3

0x7679,	// (0x000926a7) list_medium_line_t2_right_icon

0x7679,	// (0x000926a7) list_medium_line_t2_right_iconx2

0x7679,	// (0x000926a7) list_medium_line_t3

0x7679,	// (0x000926a7) list_medium_line_t3_g2

0x7679,	// (0x000926a7) list_medium_line_t3_g3

0x7679,	// (0x000926a7) list_medium_line_t3_right_iconx2

0x7682,	// (0x000926b0) list_medium_line_t4_g4

0x768b,	// (0x000926b9) list_medium_line_x2

0x768b,	// (0x000926b9) list_medium_line_x2_t2_g2

0x768b,	// (0x000926b9) list_medium_line_x2_t2_g3

0x768b,	// (0x000926b9) list_medium_line_x2_t2_g4

0x768b,	// (0x000926b9) list_medium_line_x2_t3

0x768b,	// (0x000926b9) list_medium_line_x2_t3_g2

0x768b,	// (0x000926b9) list_medium_line_x2_t3_g3

0x768b,	// (0x000926b9) list_medium_line_x2_t3_g4

0x768b,	// (0x000926b9) list_medium_line_x2_t4_g2

0x768b,	// (0x000926b9) list_medium_line_x2_t4_g4

0x7694,	// (0x000926c2) list_medium_line_x3

0x7694,	// (0x000926c2) list_medium_line_x3_t4

0x7694,	// (0x000926c2) list_medium_line_x3_t4_g4

0x7682,	// (0x000926b0) list_medium_line_x4_t4

0x7682,	// (0x000926b0) list_medium_line_x4_t4_g7

0x7682,	// (0x000926b0) list_medium_line_x4_t5

0x063b,	// (0x0008b669) list_single_fs_dyc_pane_ParamLimits

0x063b,	// (0x0008b669) list_single_fs_dyc_pane

0x0112,	// (0x0008b140) list_medium_line_x4_t4_g7_g1_ParamLimits

0x0112,	// (0x0008b140) list_medium_line_x4_t4_g7_g1

0x064f,	// (0x0008b67d) list_medium_line_x4_t4_g7_g2_ParamLimits

0x064f,	// (0x0008b67d) list_medium_line_x4_t4_g7_g2

0x7dd3,	// (0x00092e01) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7dd3,	// (0x00092e01) list_medium_line_x4_t4_g7_g3

0x7de2,	// (0x00092e10) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7de2,	// (0x00092e10) list_medium_line_x4_t4_g7_g4

0x065b,	// (0x0008b689) list_medium_line_x4_t4_g7_g5_ParamLimits

0x065b,	// (0x0008b689) list_medium_line_x4_t4_g7_g5

0x066a,	// (0x0008b698) list_medium_line_x4_t4_g7_g6_ParamLimits

0x066a,	// (0x0008b698) list_medium_line_x4_t4_g7_g6

0x0679,	// (0x0008b6a7) list_medium_line_x4_t4_g7_g7_ParamLimits

0x0679,	// (0x0008b6a7) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbe3,	// (0x0009ac11) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbe3,	// (0x0009ac11) list_medium_line_x4_t4_g7_g

0x0685,	// (0x0008b6b3) list_medium_line_x4_t4_g7_t1_ParamLimits

0x0685,	// (0x0008b6b3) list_medium_line_x4_t4_g7_t1

0x069a,	// (0x0008b6c8) list_medium_line_x4_t4_g7_t2_ParamLimits

0x069a,	// (0x0008b6c8) list_medium_line_x4_t4_g7_t2

0x06af,	// (0x0008b6dd) list_medium_line_x4_t4_g7_t3_ParamLimits

0x06af,	// (0x0008b6dd) list_medium_line_x4_t4_g7_t3

0x06c4,	// (0x0008b6f2) list_medium_line_x4_t4_g7_t4_ParamLimits

0x06c4,	// (0x0008b6f2) list_medium_line_x4_t4_g7_t4

0x06d6,	// (0x0008b704) list_medium_line_x4_t4_g7_t5_ParamLimits

0x06d6,	// (0x0008b704) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbf2,	// (0x0009ac20) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbf2,	// (0x0009ac20) list_medium_line_x4_t4_g7_t

0x06e8,	// (0x0008b716) list_single_dyc_row_pane_ParamLimits

0x06e8,	// (0x0008b716) list_single_dyc_row_pane

0x8410,	// (0x0009343e) call5_gesture_pane_ParamLimits

0x8410,	// (0x0009343e) call5_gesture_pane

0x8466,	// (0x00093494) call5_windows_pane_ParamLimits

0x8466,	// (0x00093494) call5_windows_pane

0x8510,	// (0x0009353e) call5_swipe_1_pane_cp_ParamLimits

0x8510,	// (0x0009353e) call5_swipe_1_pane_cp

0x851c,	// (0x0009354a) call5_swipe_2_pane_cp_ParamLimits

0x851c,	// (0x0009354a) call5_swipe_2_pane_cp

0xa9ad,	// (0x000959db) call5_image_pane_cp

0x8528,	// (0x00093556) popup_call5_audio_first_window_cp_ParamLimits

0x8528,	// (0x00093556) popup_call5_audio_first_window_cp

0xe697,	// (0x000996c5) call5_swipe_1_pane_g1_cp_ParamLimits

0xe697,	// (0x000996c5) call5_swipe_1_pane_g1_cp

0xe6d7,	// (0x00099705) call5_swipe_1_pane_g2_cp

0xe6b0,	// (0x000996de) call5_swipe_1_pane_t1_cp_ParamLimits

0xe6b0,	// (0x000996de) call5_swipe_1_pane_t1_cp

0xe697,	// (0x000996c5) call5_swipe_2_pane_g1_cp_ParamLimits

0xe697,	// (0x000996c5) call5_swipe_2_pane_g1_cp

0xe6df,	// (0x0009970d) call5_swipe_2_pane_g2_cp

0xe6e7,	// (0x00099715) call5_swipe_2_pane_t1_cp_ParamLimits

0xe6e7,	// (0x00099715) call5_swipe_2_pane_t1_cp

0xa3c3,	// (0x000953f1) main_sp_fs_email_pane

0xe6fc,	// (0x0009972a) main_sp_fs_listscroll_pane_te

0x8536,	// (0x00093564) popup_sp_fs_action_menu_pane_ParamLimits

0x8536,	// (0x00093564) popup_sp_fs_action_menu_pane

0xcc6d,	// (0x00097c9b) bg_sp_fs_ctrlbar_pane_g1

0xe705,	// (0x00099733) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe70e,	// (0x0009973c) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe717,	// (0x00099745) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcc6d,	// (0x00097c9b) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfce0,	// (0x0009ad0e) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xca52,	// (0x00097a80) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xca52,	// (0x00097a80) bg_sp_fs_ctrlbar_ddmenu_pane

0xe720,	// (0x0009974e) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe720,	// (0x0009974e) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe72c,	// (0x0009975a) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe72c,	// (0x0009975a) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfce9,	// (0x0009ad17) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfce9,	// (0x0009ad17) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe738,	// (0x00099766) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe738,	// (0x00099766) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x857a,	// (0x000935a8) list_medium_line_t2_right_icon_g1

0x077d,	// (0x0008b7ab) list_medium_line_t2_right_icon_t1

0x078d,	// (0x0008b7bb) list_medium_line_t2_right_icon_t2

0x0001,

0xfcee,	// (0x0009ad1c) list_medium_line_t2_right_icon_t

0xc859,	// (0x00097887) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc859,	// (0x00097887) bg_sp_fs_ctrlbar_pane

0x85ca,	// (0x000935f8) main_sp_fs_ctrlbar_button_pane_cp01

0x85d4,	// (0x00093602) main_sp_fs_ctrlbar_ddmenu_pane

0xe78a,	// (0x000997b8) main_sp_fs_ctrlbar_pane_g1

0xe796,	// (0x000997c4) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcf3,	// (0x0009ad21) main_sp_fs_ctrlbar_pane_g

0xe7a2,	// (0x000997d0) main_sp_fs_ctrlbar_pane_t1

0x85de,	// (0x0009360c) main_sp_fs_ctrlbar_pane

0x8602,	// (0x00093630) main_sp_fs_listscroll_pane_te_cp01

0x079f,	// (0x0008b7cd) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x079f,	// (0x0008b7cd) popup_sp_fs_action_menu_pane_cp01

0xa3c3,	// (0x000953f1) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa3c3,	// (0x000953f1) bg_sp_fs_highlight_list_pane_cp01

0x8622,	// (0x00093650) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x8622,	// (0x00093650) sp_fs_action_menu_list_gene_pane_g1

0xe7d2,	// (0x00099800) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe7d2,	// (0x00099800) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcfd,	// (0x0009ad2b) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcfd,	// (0x0009ad2b) sp_fs_action_menu_list_gene_pane_g

0x8631,	// (0x0009365f) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x8631,	// (0x0009365f) sp_fs_action_menu_list_gene_pane_t1

0x8649,	// (0x00093677) sp_fs_action_menu_list_gene_pane_ParamLimits

0x8649,	// (0x00093677) sp_fs_action_menu_list_gene_pane

0xe7df,	// (0x0009980d) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe7df,	// (0x0009980d) popup_sp_fs_action_menu_bg_pane

0x8668,	// (0x00093696) sp_fs_action_menu_list_pane_ParamLimits

0x8668,	// (0x00093696) sp_fs_action_menu_list_pane

0x07cf,	// (0x0008b7fd) sp_fs_scroll_pane_cp01_ParamLimits

0x07cf,	// (0x0008b7fd) sp_fs_scroll_pane_cp01

0x07f5,	// (0x0008b823) list_medium_line_plain_t2_t1

0x0805,	// (0x0008b833) list_medium_line_plain_t2_t2

0x0001,

0xfd02,	// (0x0009ad30) list_medium_line_plain_t2_t

0x0815,	// (0x0008b843) list_medium_line_plain_t3_t1

0x0825,	// (0x0008b853) list_medium_line_plain_t3_t2

0x0833,	// (0x0008b861) list_medium_line_plain_t3_t3

0x0002,

0xfd07,	// (0x0009ad35) list_medium_line_plain_t3_t

0x0112,	// (0x0008b140) list_medium_line_x2_t2_g2_g1_ParamLimits

0x0112,	// (0x0008b140) list_medium_line_x2_t2_g2_g1

0x011e,	// (0x0008b14c) list_medium_line_x2_t2_g2_g2_ParamLimits

0x011e,	// (0x0008b14c) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x0009a274) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x0009a274) list_medium_line_x2_t2_g2_g

0x02ad,	// (0x0008b2db) list_medium_line_x2_t2_g2_t1_ParamLimits

0x02ad,	// (0x0008b2db) list_medium_line_x2_t2_g2_t1

0x0153,	// (0x0008b181) list_medium_line_x2_t2_g2_t2_ParamLimits

0x0153,	// (0x0008b181) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd0e,	// (0x0009ad3c) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd0e,	// (0x0009ad3c) list_medium_line_x2_t2_g2_t

0x0112,	// (0x0008b140) list_medium_line_x2_t4_g2_g1_ParamLimits

0x0112,	// (0x0008b140) list_medium_line_x2_t4_g2_g1

0x0841,	// (0x0008b86f) list_medium_line_x2_t4_g2_g2_ParamLimits

0x0841,	// (0x0008b86f) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd13,	// (0x0009ad41) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd13,	// (0x0009ad41) list_medium_line_x2_t4_g2_g

0x0853,	// (0x0008b881) list_medium_line_x2_t4_g2_t1_ParamLimits

0x0853,	// (0x0008b881) list_medium_line_x2_t4_g2_t1

0x086a,	// (0x0008b898) list_medium_line_x2_t4_g2_t2_ParamLimits

0x086a,	// (0x0008b898) list_medium_line_x2_t4_g2_t2

0x087f,	// (0x0008b8ad) list_medium_line_x2_t4_g2_t3_ParamLimits

0x087f,	// (0x0008b8ad) list_medium_line_x2_t4_g2_t3

0x0153,	// (0x0008b181) list_medium_line_x2_t4_g2_t4_ParamLimits

0x0153,	// (0x0008b181) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd18,	// (0x0009ad46) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd18,	// (0x0009ad46) list_medium_line_x2_t4_g2_t

0x8688,	// (0x000936b6) list_medium_line_t3_right_iconx2_g1

0x857a,	// (0x000935a8) list_medium_line_t3_right_iconx2_g2

0x0891,	// (0x0008b8bf) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd21,	// (0x0009ad4f) list_medium_line_t3_right_iconx2_g

0x089b,	// (0x0008b8c9) list_medium_line_t3_right_iconx2_t1

0x08ab,	// (0x0008b8d9) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd28,	// (0x0009ad56) list_medium_line_t3_right_iconx2_t

0x0112,	// (0x0008b140) list_medium_line_x3_t4_g4_g1_ParamLimits

0x0112,	// (0x0008b140) list_medium_line_x3_t4_g4_g1

0x1fc6,	// (0x0008cff4) list_medium_line_x3_t4_g4_g2_ParamLimits

0x1fc6,	// (0x0008cff4) list_medium_line_x3_t4_g4_g2

0x0190,	// (0x0008b1be) list_medium_line_x3_t4_g4_g3_ParamLimits

0x0190,	// (0x0008b1be) list_medium_line_x3_t4_g4_g3

0x8690,	// (0x000936be) list_medium_line_x3_t4_g4_g4_ParamLimits

0x8690,	// (0x000936be) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd2d,	// (0x0009ad5b) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd2d,	// (0x0009ad5b) list_medium_line_x3_t4_g4_g

0x08b9,	// (0x0008b8e7) list_medium_line_x3_t4_g4_t1_ParamLimits

0x08b9,	// (0x0008b8e7) list_medium_line_x3_t4_g4_t1

0x08d0,	// (0x0008b8fe) list_medium_line_x3_t4_g4_t2_ParamLimits

0x08d0,	// (0x0008b8fe) list_medium_line_x3_t4_g4_t2

0x02c2,	// (0x0008b2f0) list_medium_line_x3_t4_g4_t3_ParamLimits

0x02c2,	// (0x0008b2f0) list_medium_line_x3_t4_g4_t3

0x08eb,	// (0x0008b919) list_medium_line_x3_t4_g4_t4_ParamLimits

0x08eb,	// (0x0008b919) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd36,	// (0x0009ad64) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd36,	// (0x0009ad64) list_medium_line_x3_t4_g4_t

0x0908,	// (0x0008b936) list_single_dyc_row_text_pane_t1_ParamLimits

0x0908,	// (0x0008b936) list_single_dyc_row_text_pane_t1

0x0951,	// (0x0008b97f) list_single_dyc_row_text_pane_t2_ParamLimits

0x0951,	// (0x0008b97f) list_single_dyc_row_text_pane_t2

0x869c,	// (0x000936ca) list_single_dyc_row_text_pane_t3_ParamLimits

0x869c,	// (0x000936ca) list_single_dyc_row_text_pane_t3

0x0005,

0xfd3f,	// (0x0009ad6d) list_single_dyc_row_text_pane_t_ParamLimits

0xfd3f,	// (0x0009ad6d) list_single_dyc_row_text_pane_t

0x86c0,	// (0x000936ee) list_single_dyc_row_pane_g1_ParamLimits

0x86c0,	// (0x000936ee) list_single_dyc_row_pane_g1

0x86cc,	// (0x000936fa) list_single_dyc_row_pane_g2_ParamLimits

0x86cc,	// (0x000936fa) list_single_dyc_row_pane_g2

0x86d8,	// (0x00093706) list_single_dyc_row_pane_g3_ParamLimits

0x86d8,	// (0x00093706) list_single_dyc_row_pane_g3

0x86e4,	// (0x00093712) list_single_dyc_row_pane_g4_ParamLimits

0x86e4,	// (0x00093712) list_single_dyc_row_pane_g4

0x0003,

0xfd4c,	// (0x0009ad7a) list_single_dyc_row_pane_g_ParamLimits

0xfd4c,	// (0x0009ad7a) list_single_dyc_row_pane_g

0x86f0,	// (0x0009371e) list_single_dyc_row_text_pane_ParamLimits

0x86f0,	// (0x0009371e) list_single_dyc_row_text_pane

0x966e,	// (0x0009469c) bg_sp_fs_scroll_pane

0xe7ed,	// (0x0009981b) thumb_sp_fs_scroll_pane

0x0483,	// (0x0008b4b1) list_medium_line_g1_ParamLimits

0x0483,	// (0x0008b4b1) list_medium_line_g1

0x0a86,	// (0x0008bab4) list_medium_line_t1_ParamLimits

0x0a86,	// (0x0008bab4) list_medium_line_t1

0x0112,	// (0x0008b140) list_medium_line_x2_g1_ParamLimits

0x0112,	// (0x0008b140) list_medium_line_x2_g1

0x1fc6,	// (0x0008cff4) list_medium_line_x2_g2_ParamLimits

0x1fc6,	// (0x0008cff4) list_medium_line_x2_g2

0x0001,

0xfd55,	// (0x0009ad83) list_medium_line_x2_g_ParamLimits

0xfd55,	// (0x0009ad83) list_medium_line_x2_g

0x870f,	// (0x0009373d) list_medium_line_x2_t1_ParamLimits

0x870f,	// (0x0009373d) list_medium_line_x2_t1

0x0112,	// (0x0008b140) list_medium_line_x3_g1_ParamLimits

0x0112,	// (0x0008b140) list_medium_line_x3_g1

0x1fc6,	// (0x0008cff4) list_medium_line_x3_g2_ParamLimits

0x1fc6,	// (0x0008cff4) list_medium_line_x3_g2

0x0001,

0xfd55,	// (0x0009ad83) list_medium_line_x3_g_ParamLimits

0xfd55,	// (0x0009ad83) list_medium_line_x3_g

0x870f,	// (0x0009373d) list_medium_line_x3_t1_ParamLimits

0x870f,	// (0x0009373d) list_medium_line_x3_t1

0xe7f6,	// (0x00099824) thumb_sp_fs_scroll_pane_g1

0xe7ff,	// (0x0009982d) thumb_sp_fs_scroll_pane_g2

0xe808,	// (0x00099836) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd5a,	// (0x0009ad88) thumb_sp_fs_scroll_pane_g

0xe7f6,	// (0x00099824) bg_sp_fs_scroll_pane_g1

0xe7ff,	// (0x0009982d) bg_sp_fs_scroll_pane_g2

0xe808,	// (0x00099836) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd5a,	// (0x0009ad88) bg_sp_fs_scroll_pane_g

0x0112,	// (0x0008b140) list_medium_line_x2_t3_g4_g1_ParamLimits

0x0112,	// (0x0008b140) list_medium_line_x2_t3_g4_g1

0x1fd2,	// (0x0008d000) list_medium_line_x2_t3_g4_g2_ParamLimits

0x1fd2,	// (0x0008d000) list_medium_line_x2_t3_g4_g2

0x1fc6,	// (0x0008cff4) list_medium_line_x2_t3_g4_g3_ParamLimits

0x1fc6,	// (0x0008cff4) list_medium_line_x2_t3_g4_g3

0x011e,	// (0x0008b14c) list_medium_line_x2_t3_g4_g4_ParamLimits

0x011e,	// (0x0008b14c) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x0009a2f0) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x0009a2f0) list_medium_line_x2_t3_g4_g

0x0a9b,	// (0x0008bac9) list_medium_line_x2_t3_g4_t1_ParamLimits

0x0a9b,	// (0x0008bac9) list_medium_line_x2_t3_g4_t1

0x0ab5,	// (0x0008bae3) list_medium_line_x2_t3_g4_t2_ParamLimits

0x0ab5,	// (0x0008bae3) list_medium_line_x2_t3_g4_t2

0x0153,	// (0x0008b181) list_medium_line_x2_t3_g4_t3_ParamLimits

0x0153,	// (0x0008b181) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd61,	// (0x0009ad8f) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd61,	// (0x0009ad8f) list_medium_line_x2_t3_g4_t

0x0483,	// (0x0008b4b1) list_medium_line_g2_g1_ParamLimits

0x0483,	// (0x0008b4b1) list_medium_line_g2_g1

0x70eb,	// (0x00092119) list_medium_line_g2_g2_ParamLimits

0x70eb,	// (0x00092119) list_medium_line_g2_g2

0x0001,

0xfa13,	// (0x0009aa41) list_medium_line_g2_g_ParamLimits

0xfa13,	// (0x0009aa41) list_medium_line_g2_g

0x0ace,	// (0x0008bafc) list_medium_line_g2_t1_ParamLimits

0x0ace,	// (0x0008bafc) list_medium_line_g2_t1

0x0483,	// (0x0008b4b1) list_medium_line_t3_g2_g1_ParamLimits

0x0483,	// (0x0008b4b1) list_medium_line_t3_g2_g1

0x70eb,	// (0x00092119) list_medium_line_t3_g2_g2_ParamLimits

0x70eb,	// (0x00092119) list_medium_line_t3_g2_g2

0x0001,

0xfa13,	// (0x0009aa41) list_medium_line_t3_g2_g_ParamLimits

0xfa13,	// (0x0009aa41) list_medium_line_t3_g2_g

0x0ae3,	// (0x0008bb11) list_medium_line_t3_g2_t1_ParamLimits

0x0ae3,	// (0x0008bb11) list_medium_line_t3_g2_t1

0x0afd,	// (0x0008bb2b) list_medium_line_t3_g2_t2_ParamLimits

0x0afd,	// (0x0008bb2b) list_medium_line_t3_g2_t2

0x0b13,	// (0x0008bb41) list_medium_line_t3_g2_t3_ParamLimits

0x0b13,	// (0x0008bb41) list_medium_line_t3_g2_t3

0x0002,

0xfd68,	// (0x0009ad96) list_medium_line_t3_g2_t_ParamLimits

0xfd68,	// (0x0009ad96) list_medium_line_t3_g2_t

0x857a,	// (0x000935a8) list_medium_line_right_icon_g1

0x0b2a,	// (0x0008bb58) list_medium_line_right_icon_t1

0x0483,	// (0x0008b4b1) list_medium_line_t2_g1_ParamLimits

0x0483,	// (0x0008b4b1) list_medium_line_t2_g1

0x0b38,	// (0x0008bb66) list_medium_line_t2_t1_ParamLimits

0x0b38,	// (0x0008bb66) list_medium_line_t2_t1

0x0b52,	// (0x0008bb80) list_medium_line_t2_t2_ParamLimits

0x0b52,	// (0x0008bb80) list_medium_line_t2_t2

0x0001,

0xfd6f,	// (0x0009ad9d) list_medium_line_t2_t_ParamLimits

0xfd6f,	// (0x0009ad9d) list_medium_line_t2_t

0x0483,	// (0x0008b4b1) list_medium_line_t3_g1_ParamLimits

0x0483,	// (0x0008b4b1) list_medium_line_t3_g1

0x0b6b,	// (0x0008bb99) list_medium_line_t3_t1_ParamLimits

0x0b6b,	// (0x0008bb99) list_medium_line_t3_t1

0x0b85,	// (0x0008bbb3) list_medium_line_t3_t2_ParamLimits

0x0b85,	// (0x0008bbb3) list_medium_line_t3_t2

0x0b9b,	// (0x0008bbc9) list_medium_line_t3_t3_ParamLimits

0x0b9b,	// (0x0008bbc9) list_medium_line_t3_t3

0x0002,

0xfd74,	// (0x0009ada2) list_medium_line_t3_t_ParamLimits

0xfd74,	// (0x0009ada2) list_medium_line_t3_t

0x0483,	// (0x0008b4b1) list_medium_line_g3_g1_ParamLimits

0x0483,	// (0x0008b4b1) list_medium_line_g3_g1

0x8725,	// (0x00093753) list_medium_line_g3_g2_ParamLimits

0x8725,	// (0x00093753) list_medium_line_g3_g2

0x70eb,	// (0x00092119) list_medium_line_g3_g3_ParamLimits

0x70eb,	// (0x00092119) list_medium_line_g3_g3

0x0002,

0xfd7b,	// (0x0009ada9) list_medium_line_g3_g_ParamLimits

0xfd7b,	// (0x0009ada9) list_medium_line_g3_g

0x0bb0,	// (0x0008bbde) list_medium_line_g3_t1_ParamLimits

0x0bb0,	// (0x0008bbde) list_medium_line_g3_t1

0x0483,	// (0x0008b4b1) list_medium_line_t2_g3_g1_ParamLimits

0x0483,	// (0x0008b4b1) list_medium_line_t2_g3_g1

0x8725,	// (0x00093753) list_medium_line_t2_g3_g2_ParamLimits

0x8725,	// (0x00093753) list_medium_line_t2_g3_g2

0x70eb,	// (0x00092119) list_medium_line_t2_g3_g3_ParamLimits

0x70eb,	// (0x00092119) list_medium_line_t2_g3_g3

0x0002,

0xfd7b,	// (0x0009ada9) list_medium_line_t2_g3_g_ParamLimits

0xfd7b,	// (0x0009ada9) list_medium_line_t2_g3_g

0x0bc5,	// (0x0008bbf3) list_medium_line_t2_g3_t1_ParamLimits

0x0bc5,	// (0x0008bbf3) list_medium_line_t2_g3_t1

0x0bdf,	// (0x0008bc0d) list_medium_line_t2_g3_t2_ParamLimits

0x0bdf,	// (0x0008bc0d) list_medium_line_t2_g3_t2

0x0001,

0xfd82,	// (0x0009adb0) list_medium_line_t2_g3_t_ParamLimits

0xfd82,	// (0x0009adb0) list_medium_line_t2_g3_t

0x0483,	// (0x0008b4b1) list_medium_line_t3_g3_g1_ParamLimits

0x0483,	// (0x0008b4b1) list_medium_line_t3_g3_g1

0x8725,	// (0x00093753) list_medium_line_t3_g3_g2_ParamLimits

0x8725,	// (0x00093753) list_medium_line_t3_g3_g2

0x70eb,	// (0x00092119) list_medium_line_t3_g3_g3_ParamLimits

0x70eb,	// (0x00092119) list_medium_line_t3_g3_g3

0x0002,

0xfd7b,	// (0x0009ada9) list_medium_line_t3_g3_g_ParamLimits

0xfd7b,	// (0x0009ada9) list_medium_line_t3_g3_g

0x0bfd,	// (0x0008bc2b) list_medium_line_t3_g3_t1_ParamLimits

0x0bfd,	// (0x0008bc2b) list_medium_line_t3_g3_t1

0x0c16,	// (0x0008bc44) list_medium_line_t3_g3_t2_ParamLimits

0x0c16,	// (0x0008bc44) list_medium_line_t3_g3_t2

0x0c2c,	// (0x0008bc5a) list_medium_line_t3_g3_t3_ParamLimits

0x0c2c,	// (0x0008bc5a) list_medium_line_t3_g3_t3

0x0002,

0xfd87,	// (0x0009adb5) list_medium_line_t3_g3_t_ParamLimits

0xfd87,	// (0x0009adb5) list_medium_line_t3_g3_t

0x8688,	// (0x000936b6) list_medium_line_right_iconx2_g1

0x857a,	// (0x000935a8) list_medium_line_right_iconx2_g2

0x0001,

0xfd8e,	// (0x0009adbc) list_medium_line_right_iconx2_g

0xa193,	// (0x000951c1) list_medium_line_right_iconx2_t1

0x8688,	// (0x000936b6) list_medium_line_t2_right_iconx2_g1

0x857a,	// (0x000935a8) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd8e,	// (0x0009adbc) list_medium_line_t2_right_iconx2_g

0x0c46,	// (0x0008bc74) list_medium_line_t2_right_iconx2_t1

0x0c56,	// (0x0008bc84) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd93,	// (0x0009adc1) list_medium_line_t2_right_iconx2_t

0x0c68,	// (0x0008bc96) list_medium_line_x4_t4_t1

0x0c76,	// (0x0008bca4) list_medium_line_x4_t4_t2

0x0c86,	// (0x0008bcb4) list_medium_line_x4_t4_t3

0x0c96,	// (0x0008bcc4) list_medium_line_x4_t4_t4

0x0003,

0xfd98,	// (0x0009adc6) list_medium_line_x4_t4_t

0x8774,	// (0x000937a2) tport_appsw_pane_ParamLimits

0x8774,	// (0x000937a2) tport_appsw_pane

0x878c,	// (0x000937ba) tport_contact_pane_ParamLimits

0x878c,	// (0x000937ba) tport_contact_pane

0x87a4,	// (0x000937d2) tport_listscroll_pane_ParamLimits

0x87a4,	// (0x000937d2) tport_listscroll_pane

0x87be,	// (0x000937ec) cell_tport_appsw_pane_ParamLimits

0x87be,	// (0x000937ec) cell_tport_appsw_pane

0xd696,	// (0x000986c4) tport_appsw_pane_g1_ParamLimits

0xd696,	// (0x000986c4) tport_appsw_pane_g1

0xe811,	// (0x0009983f) tport_contact_pane_g1

0xe81a,	// (0x00099848) tport_contact_pane_t1

0xe828,	// (0x00099856) tport_contact_pane_t2

0x0001,

0xfda1,	// (0x0009adcf) tport_contact_pane_t

0xe836,	// (0x00099864) list_tport_pane

0xe83f,	// (0x0009986d) scroll_pane_cp_030

0x8806,	// (0x00093834) cell_tport_appsw_pane_g1

0x8816,	// (0x00093844) cell_tport_appsw_pane_t1

0x8824,	// (0x00093852) grid_highlight_pane_cp019

0x882c,	// (0x0009385a) list_tport_double_graphic_pane_ParamLimits

0x882c,	// (0x0009385a) list_tport_double_graphic_pane

0xa3c3,	// (0x000953f1) list_highlight_pane_cp023_ParamLimits

0xa3c3,	// (0x000953f1) list_highlight_pane_cp023

0x8839,	// (0x00093867) list_tport_double_graphic_pane_g1_ParamLimits

0x8839,	// (0x00093867) list_tport_double_graphic_pane_g1

0x8846,	// (0x00093874) list_tport_double_graphic_pane_t1_ParamLimits

0x8846,	// (0x00093874) list_tport_double_graphic_pane_t1

0x885b,	// (0x00093889) list_tport_double_graphic_pane_t2_ParamLimits

0x885b,	// (0x00093889) list_tport_double_graphic_pane_t2

0x0001,

0xfdad,	// (0x0009addb) list_tport_double_graphic_pane_t_ParamLimits

0xfdad,	// (0x0009addb) list_tport_double_graphic_pane_t

0x966e,	// (0x0009469c) main_cale_note_pane

0x68df,	// (0x0009190d) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x68df,	// (0x0009190d) cell_vitu2_function_top_wide_pane_cp01

0x8126,	// (0x00093154) wait_bar_pane_cp05_ParamLimits

0xa3c3,	// (0x000953f1) listscroll_cmail_pane

0xe848,	// (0x00099876) list_cmail_pane

0x886d,	// (0x0009389b) list_cmail_body_pane

0x8881,	// (0x000938af) list_single_cmail_header_caption_pane

0x8898,	// (0x000938c6) list_single_cmail_header_detail_pane_ParamLimits

0x8898,	// (0x000938c6) list_single_cmail_header_detail_pane

0xe858,	// (0x00099886) list_single_cmail_header_caption_pane_t1

0x0ca6,	// (0x0008bcd4) list_single_cmail_header_detail_pane_g1_ParamLimits

0x0ca6,	// (0x0008bcd4) list_single_cmail_header_detail_pane_g1

0xa1a1,	// (0x000951cf) list_single_cmail_header_detail_pane_g2_ParamLimits

0xa1a1,	// (0x000951cf) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdb2,	// (0x0009ade0) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdb2,	// (0x0009ade0) list_single_cmail_header_detail_pane_g

0x88c2,	// (0x000938f0) list_single_cmail_header_detail_pane_t1_ParamLimits

0x88c2,	// (0x000938f0) list_single_cmail_header_detail_pane_t1

0xa1d1,	// (0x000951ff) list_single_cmail_header_editor_pane_bg_ParamLimits

0xa1d1,	// (0x000951ff) list_single_cmail_header_editor_pane_bg

0xe32b,	// (0x00099359) list_cmail_body_pane_g1

0xe87c,	// (0x000998aa) list_cmail_body_pane_t1

0xd6c8,	// (0x000986f6) list_single_cmail_header_editor_pane_bg_g1

0xac06,	// (0x00095c34) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd6d8,	// (0x00098706) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd6d0,	// (0x000986fe) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd916,	// (0x00098944) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd6f8,	// (0x00098726) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd6e8,	// (0x00098716) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd6f0,	// (0x0009871e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xabe6,	// (0x00095c14) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x88fe,	// (0x0009392c) calenote_gesture_pane_ParamLimits

0x88fe,	// (0x0009392c) calenote_gesture_pane

0x891e,	// (0x0009394c) calenote_window_pane_ParamLimits

0x891e,	// (0x0009394c) calenote_window_pane

0xe88a,	// (0x000998b8) popup_note_window_cp01

0x893a,	// (0x00093968) calenote_swipe_1_pane_ParamLimits

0x893a,	// (0x00093968) calenote_swipe_1_pane

0x851c,	// (0x0009354a) calenote_swipe_2_pane_ParamLimits

0x851c,	// (0x0009354a) calenote_swipe_2_pane

0xe697,	// (0x000996c5) calenote_swipe_1_pane_g1_ParamLimits

0xe697,	// (0x000996c5) calenote_swipe_1_pane_g1

0xe6a4,	// (0x000996d2) calenote_swipe_1_pane_g2_ParamLimits

0xe6a4,	// (0x000996d2) calenote_swipe_1_pane_g2

0x0001,

0xfcd6,	// (0x0009ad04) calenote_swipe_1_pane_g_ParamLimits

0xfcd6,	// (0x0009ad04) calenote_swipe_1_pane_g

0xe89c,	// (0x000998ca) calenote_swipe_1_pane_t1_ParamLimits

0xe89c,	// (0x000998ca) calenote_swipe_1_pane_t1

0xe697,	// (0x000996c5) calenote_swipe_2_pane_g1_ParamLimits

0xe697,	// (0x000996c5) calenote_swipe_2_pane_g1

0xe8bb,	// (0x000998e9) calenote_swipe_2_pane_g2_ParamLimits

0xe8bb,	// (0x000998e9) calenote_swipe_2_pane_g2

0x0001,

0xfdbe,	// (0x0009adec) calenote_swipe_2_pane_g_ParamLimits

0xfdbe,	// (0x0009adec) calenote_swipe_2_pane_g

0xe8c7,	// (0x000998f5) calenote_swipe_2_pane_t1_ParamLimits

0xe8c7,	// (0x000998f5) calenote_swipe_2_pane_t1

0x966e,	// (0x0009469c) main_mup_navstr_pane

0x55a7,	// (0x000905d5) main_mup3_pane_t7_ParamLimits

0x55a7,	// (0x000905d5) main_mup3_pane_t7

0x9deb,	// (0x00094e19) main_mp4_pane_g6_ParamLimits

0x9deb,	// (0x00094e19) main_mp4_pane_g6

0x9f8f,	// (0x00094fbd) main_image3_pane_t4_ParamLimits

0x9f8f,	// (0x00094fbd) main_image3_pane_t4

0x894f,	// (0x0009397d) popup_navstr_preview_pane_ParamLimits

0x894f,	// (0x0009397d) popup_navstr_preview_pane

0x8963,	// (0x00093991) scroll_navstr_pane_ParamLimits

0x8963,	// (0x00093991) scroll_navstr_pane

0x966e,	// (0x0009469c) bg_popup_preview_window_pane_cp04

0xe8ee,	// (0x0009991c) popup_navstr_preview_pane_t1

0x8977,	// (0x000939a5) scroll_navstr_pane_g1_ParamLimits

0x8977,	// (0x000939a5) scroll_navstr_pane_g1

0x898b,	// (0x000939b9) scroll_navstr_pane_t1_ParamLimits

0x898b,	// (0x000939b9) scroll_navstr_pane_t1

0xe893,	// (0x000998c1) bg_button_pane_cp014

0xe893,	// (0x000998c1) bg_button_pane_cp030

0x0723,	// (0x0008b751) list_double_fisheye_pane_g4_ParamLimits

0x0723,	// (0x0008b751) list_double_fisheye_pane_g4

0x072f,	// (0x0008b75d) list_double_fisheye_pane_g5_ParamLimits

0x072f,	// (0x0008b75d) list_double_fisheye_pane_g5

0xca0b,	// (0x00097a39) sp_fs_scroll_pane_cp03

0xe78a,	// (0x000997b8) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe796,	// (0x000997c4) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcf3,	// (0x0009ad21) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe7a2,	// (0x000997d0) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe850,	// (0x0009987e) sp_fs_scroll_pane_cp02

0xa8ec,	// (0x0009591a) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa8ec,	// (0x0009591a) popup_sp_fs_calendar_preview_list_single_pane

0x966e,	// (0x0009469c) main_cam6_pano_pane

0xa3c3,	// (0x000953f1) main_mup3_pane_ParamLimits

0x966e,	// (0x0009469c) main_phacti_pane

0x7ff9,	// (0x00093027) bg_button_pane_cp11

0x8013,	// (0x00093041) main_mobtv_info_pane_g2_ParamLimits

0x8013,	// (0x00093041) main_mobtv_info_pane_g2

0x0001,

0xfc53,	// (0x0009ac81) main_mobtv_info_pane_g_ParamLimits

0xfc53,	// (0x0009ac81) main_mobtv_info_pane_g

0x81f0,	// (0x0009321e) sc_clock_pane_t5_ParamLimits

0x81f0,	// (0x0009321e) sc_clock_pane_t5

0x82ab,	// (0x000932d9) main_radioblah_pane_g1_ParamLimits

0xe5c8,	// (0x000995f6) main_radioblah_pane_t3_ParamLimits

0xe5c8,	// (0x000995f6) main_radioblah_pane_t3

0xe5e0,	// (0x0009960e) main_radioblah_pane_t4_ParamLimits

0xe5e0,	// (0x0009960e) main_radioblah_pane_t4

0x82d3,	// (0x00093301) main_radioblah_text_pane_ParamLimits

0x82d3,	// (0x00093301) main_radioblah_text_pane

0x82e5,	// (0x00093313) main_radioblah_info_pane_g1_ParamLimits

0x837e,	// (0x000933ac) main_radioblah_info_pane_t4_ParamLimits

0x837e,	// (0x000933ac) main_radioblah_info_pane_t4

0xa3c3,	// (0x000953f1) main_sp_fs_calendar_pane

0x89a2,	// (0x000939d0) main_phacti_pane_g1

0x89aa,	// (0x000939d8) phacti_note_pane_ParamLimits

0x89aa,	// (0x000939d8) phacti_note_pane

0xe905,	// (0x00099933) phacti_term_pane_ParamLimits

0xe905,	// (0x00099933) phacti_term_pane

0xe91a,	// (0x00099948) phacti_note_pane_t1_ParamLimits

0xe91a,	// (0x00099948) phacti_note_pane_t1

0xa1e8,	// (0x00095216) phacti_term_pane_g1

0xa1f0,	// (0x0009521e) phacti_term_pane_t1_ParamLimits

0xa1f0,	// (0x0009521e) phacti_term_pane_t1

0xe931,	// (0x0009995f) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe939,	// (0x00099967) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdc8,	// (0x0009adf6) popup_sp_fs_calendar_preview_list_single_pane_g

0xe941,	// (0x0009996f) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe941,	// (0x0009996f) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe957,	// (0x00099985) aid_popup_sp_fs_bg_corner_pane

0xcc6d,	// (0x00097c9b) popup_sp_fs_calendar_preview_bg_pane_g1

0x966e,	// (0x0009469c) popup_sp_fs_calendar_preview_bg_pane

0x1e4f,	// (0x0008ce7d) popup_sp_fs_calendar_preview_list_pane

0xc859,	// (0x00097887) bg_main_sp_fs_cale_pane_ParamLimits

0xc859,	// (0x00097887) bg_main_sp_fs_cale_pane

0xa223,	// (0x00095251) listscroll_cale_mrui_pane_ParamLimits

0xa223,	// (0x00095251) listscroll_cale_mrui_pane

0xa238,	// (0x00095266) listscroll_sp_fs_schedule_track_pane

0xa241,	// (0x0009526f) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xa241,	// (0x0009526f) main_sp_fs_ctrlbar_pane_cp01

0xe95f,	// (0x0009998d) main_sp_fs_ribbon_pane

0xa254,	// (0x00095282) popup_sp_fs_cale_preview_window

0x8a1f,	// (0x00093a4d) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8a1f,	// (0x00093a4d) list_single_sp_fs_schedule_track_pane

0xa3c3,	// (0x000953f1) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xa3c3,	// (0x000953f1) bg_sp_fs_highlight_list_pane_cp03

0x8a33,	// (0x00093a61) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8a33,	// (0x00093a61) list_single_sp_fs_schedule_track_pane_g1

0x8a3f,	// (0x00093a6d) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8a3f,	// (0x00093a6d) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdcd,	// (0x0009adfb) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdcd,	// (0x0009adfb) list_single_sp_fs_schedule_track_pane_g

0x8a4b,	// (0x00093a79) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8a4b,	// (0x00093a79) list_single_sp_fs_schedule_track_pane_t1

0x8a65,	// (0x00093a93) sp_fs_schedule_track_pane_ParamLimits

0x8a65,	// (0x00093a93) sp_fs_schedule_track_pane

0xe967,	// (0x00099995) sp_fs_schedule_track_pane_g1

0xe96f,	// (0x0009999d) sp_fs_schedule_track_pane_g2

0xe977,	// (0x000999a5) sp_fs_schedule_track_pane_g3

0xe97f,	// (0x000999ad) sp_fs_schedule_track_pane_g4

0xe987,	// (0x000999b5) sp_fs_schedule_track_pane_g5

0x0004,

0xfdd2,	// (0x0009ae00) sp_fs_schedule_track_pane_g

0xd6c8,	// (0x000986f6) bg_sp_fs_schedule_viewer_highlight_g1

0xac06,	// (0x00095c34) bg_sp_fs_schedule_viewer_highlight_g2

0xd6d0,	// (0x000986fe) bg_sp_fs_schedule_viewer_highlight_g3

0xd6d8,	// (0x00098706) bg_sp_fs_schedule_viewer_highlight_g4

0xd916,	// (0x00098944) bg_sp_fs_schedule_viewer_highlight_g5

0xd6e8,	// (0x00098716) bg_sp_fs_schedule_viewer_highlight_g6

0xd6f0,	// (0x0009871e) bg_sp_fs_schedule_viewer_highlight_g7

0xd6f8,	// (0x00098726) bg_sp_fs_schedule_viewer_highlight_g8

0xabe6,	// (0x00095c14) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfddd,	// (0x0009ae0b) bg_sp_fs_schedule_viewer_highlight_g

0x966e,	// (0x0009469c) bg_main_sp_fs_ribbon_pane

0x8a76,	// (0x00093aa4) main_sp_fs_ribbon_pane_g1

0xe98f,	// (0x000999bd) main_sp_fs_ribbon_pane_t1

0x8a7f,	// (0x00093aad) main_sp_fs_ribbon_pane_t2

0xe99e,	// (0x000999cc) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdf0,	// (0x0009ae1e) main_sp_fs_ribbon_pane_t

0xe9ad,	// (0x000999db) main_sp_fs_ribbon_scheduler_pane

0xe9b5,	// (0x000999e3) bg_main_sp_fs_ribbon_pane_g1

0xe9be,	// (0x000999ec) bg_main_sp_fs_ribbon_pane_g2

0xe9c7,	// (0x000999f5) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdf7,	// (0x0009ae25) bg_main_sp_fs_ribbon_pane_g

0xe9cf,	// (0x000999fd) main_sp_fs_ribbon_scheduler_pane_g1

0xe9d8,	// (0x00099a06) main_sp_fs_ribbon_scheduler_pane_g2

0xe9e1,	// (0x00099a0f) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdfe,	// (0x0009ae2c) main_sp_fs_ribbon_scheduler_pane_g

0xe9ea,	// (0x00099a18) list_cale_mrui_pane

0x8a8e,	// (0x00093abc) sp_fs_scroll_pane_cp07_ParamLimits

0x8a8e,	// (0x00093abc) sp_fs_scroll_pane_cp07

0x8aaa,	// (0x00093ad8) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8aaa,	// (0x00093ad8) bg_sp_fs_schedule_viewer_highlight

0xe9f7,	// (0x00099a25) list_single_sp_fs_schedule_track_pane_cp01

0xe9ff,	// (0x00099a2d) list_sp_fs_schedule_track_pane

0xea07,	// (0x00099a35) sp_fs_scroll_pane_cp06_ParamLimits

0xea07,	// (0x00099a35) sp_fs_scroll_pane_cp06

0xcc6d,	// (0x00097c9b) bgmain_sp_fs_calendar_pane_g1

0x0cbe,	// (0x0008bcec) list_single_cale_mrui_pane_ParamLimits

0x0cbe,	// (0x0008bcec) list_single_cale_mrui_pane

0xa266,	// (0x00095294) list_single_cale_mrui_row_pane_ParamLimits

0xa266,	// (0x00095294) list_single_cale_mrui_row_pane

0xa273,	// (0x000952a1) list_single_cale_mrui_row_pane_g1_ParamLimits

0xa273,	// (0x000952a1) list_single_cale_mrui_row_pane_g1

0xa2ab,	// (0x000952d9) list_single_cale_mrui_row_pane_t1_ParamLimits

0xa2ab,	// (0x000952d9) list_single_cale_mrui_row_pane_t1

0x0cdf,	// (0x0008bd0d) list_single_cale_mrui_row_pane_t2_ParamLimits

0x0cdf,	// (0x0008bd0d) list_single_cale_mrui_row_pane_t2

0xa2bd,	// (0x000952eb) list_single_cale_mrui_row_pane_t3_ParamLimits

0xa2bd,	// (0x000952eb) list_single_cale_mrui_row_pane_t3

0xa2ec,	// (0x0009531a) list_single_cale_mrui_row_pane_t4_ParamLimits

0xa2ec,	// (0x0009531a) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe0c,	// (0x0009ae3a) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe0c,	// (0x0009ae3a) list_single_cale_mrui_row_pane_t

0x0d47,	// (0x0008bd75) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x0d47,	// (0x0008bd75) list_single_cmail_header_editor_pane_bg_cp01

0x0d6d,	// (0x0008bd9b) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x0d6d,	// (0x0008bd9b) list_single_cmail_header_editor_pane_bg_cp02

0x8aba,	// (0x00093ae8) main_radioblah_text_pane_t1_ParamLimits

0x8aba,	// (0x00093ae8) main_radioblah_text_pane_t1

0xea26,	// (0x00099a54) cam6_indi_pane_cp01

0xea2e,	// (0x00099a5c) cam6_mode_pane_cp01

0xea36,	// (0x00099a64) cam6_pano_pane

0xea3f,	// (0x00099a6d) cam6_zoom_pane_cp01

0xea47,	// (0x00099a75) cam6_pano_image_pane

0xea52,	// (0x00099a80) cam6_pano_pane_g1

0xe32b,	// (0x00099359) cam6_pano_pane_g2

0xea5b,	// (0x00099a89) cam6_pano_pane_g3

0xea64,	// (0x00099a92) cam6_pano_pane_g4

0xd218,	// (0x00098246) cam6_pano_pane_g5

0xea6d,	// (0x00099a9b) cam6_pano_pane_g6

0xea77,	// (0x00099aa5) cam6_pano_pane_g7

0xea7f,	// (0x00099aad) cam6_pano_pane_g8

0xea88,	// (0x00099ab6) cam6_pano_pane_g9

0x0008,

0xfe15,	// (0x0009ae43) cam6_pano_pane_g

0x966e,	// (0x0009469c) main_browser_tag_pane

0xe8e6,	// (0x00099914) grid_navstr_albumart_pane

0xea93,	// (0x00099ac1) cell_navstr_albumart_pane_ParamLimits

0xea93,	// (0x00099ac1) cell_navstr_albumart_pane

0xeab3,	// (0x00099ae1) cell_navstr_albumart_pane_g1

0xc62a,	// (0x00097658) cell_navstr_albumart_pane_g2

0xc63a,	// (0x00097668) cell_navstr_albumart_pane_g3

0xc632,	// (0x00097660) cell_navstr_albumart_pane_g4

0x0003,

0xfe28,	// (0x0009ae56) cell_navstr_albumart_pane_g

0x8ad5,	// (0x00093b03) bt_list_pane_ParamLimits

0x8ad5,	// (0x00093b03) bt_list_pane

0x8ae9,	// (0x00093b17) bt_list_pane_t1

0x8af8,	// (0x00093b26) bt_list_pane_t2

0x0001,

0xfe31,	// (0x0009ae5f) bt_list_pane_t

0x966e,	// (0x0009469c) main_cale_prevew_pane

0x8b07,	// (0x00093b35) popup_cale_preview_window_ParamLimits

0x8b07,	// (0x00093b35) popup_cale_preview_window

0xa3c3,	// (0x000953f1) bg_popup_preview_window_pane_cp05_ParamLimits

0xa3c3,	// (0x000953f1) bg_popup_preview_window_pane_cp05

0xeabb,	// (0x00099ae9) list_cale_preview_pane_ParamLimits

0xeabb,	// (0x00099ae9) list_cale_preview_pane

0x8b20,	// (0x00093b4e) list_double_cale_preview_pane_ParamLimits

0x8b20,	// (0x00093b4e) list_double_cale_preview_pane

0xd700,	// (0x0009872e) list_single_cale_preview_pane_ParamLimits

0xd700,	// (0x0009872e) list_single_cale_preview_pane

0x8b32,	// (0x00093b60) list_single_cale_preview_pane_g1

0x8b3a,	// (0x00093b68) list_single_cale_preview_pane_t1_ParamLimits

0x8b3a,	// (0x00093b68) list_single_cale_preview_pane_t1

0x8b4f,	// (0x00093b7d) list_double_cale_preview_pane_g1

0x8b57,	// (0x00093b85) list_double_cale_preview_pane_t1_ParamLimits

0x8b57,	// (0x00093b85) list_double_cale_preview_pane_t1

0x8b6c,	// (0x00093b9a) list_double_cale_preview_pane_t2_ParamLimits

0x8b6c,	// (0x00093b9a) list_double_cale_preview_pane_t2

0x0001,

0xfe36,	// (0x0009ae64) list_double_cale_preview_pane_t_ParamLimits

0xfe36,	// (0x0009ae64) list_double_cale_preview_pane_t

0x966e,	// (0x0009469c) main_ezdial_pane

0xa3c3,	// (0x000953f1) main_sp_fs_email_pane_ParamLimits

0x8582,	// (0x000935b0) cmail_ddmenu_btn01_pane_ParamLimits

0x8582,	// (0x000935b0) cmail_ddmenu_btn01_pane

0x8595,	// (0x000935c3) cmail_ddmenu_btn02_pane_ParamLimits

0x8595,	// (0x000935c3) cmail_ddmenu_btn02_pane

0x85b8,	// (0x000935e6) cmail_ddmenu_btn03_pane_ParamLimits

0x85b8,	// (0x000935e6) cmail_ddmenu_btn03_pane

0x85de,	// (0x0009360c) main_sp_fs_ctrlbar_pane_ParamLimits

0x8602,	// (0x00093630) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x886d,	// (0x0009389b) list_cmail_body_pane_ParamLimits

0xe866,	// (0x00099894) bg_button_pane_cp12

0xe86f,	// (0x0009989d) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe86f,	// (0x0009989d) list_single_cmail_header_detail_pane_g3

0xa1ad,	// (0x000951db) list_single_cmail_header_detail_pane_t2_ParamLimits

0xa1ad,	// (0x000951db) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdb9,	// (0x0009ade7) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdb9,	// (0x0009ade7) list_single_cmail_header_detail_pane_t

0xa205,	// (0x00095233) phacti_term_pane_t2_ParamLimits

0xa205,	// (0x00095233) phacti_term_pane_t2

0x0001,

0xfdc3,	// (0x0009adf1) phacti_term_pane_t_ParamLimits

0xfdc3,	// (0x0009adf1) phacti_term_pane_t

0xeac7,	// (0x00099af5) aid_size_list_single_double

0x8b84,	// (0x00093bb2) popup_ezdial_listscroll_window

0x8ba0,	// (0x00093bce) popup_number_entry_window_cp01

0xa9ad,	// (0x000959db) bg_popup_call_pane_cp09

0xead3,	// (0x00099b01) ezdial_list_pane

0xeadb,	// (0x00099b09) scroll_pane_cp23

0xc859,	// (0x00097887) bg_button_pane_cp028_ParamLimits

0xc859,	// (0x00097887) bg_button_pane_cp028

0x8bae,	// (0x00093bdc) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8bae,	// (0x00093bdc) cmail_ddmenu_btn01_pane_g1

0x8bba,	// (0x00093be8) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8bba,	// (0x00093be8) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe3b,	// (0x0009ae69) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe3b,	// (0x0009ae69) cmail_ddmenu_btn01_pane_g

0xeae3,	// (0x00099b11) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeae3,	// (0x00099b11) cmail_ddmenu_btn01_pane_t1

0xc859,	// (0x00097887) bg_button_pane_cp029_ParamLimits

0xc859,	// (0x00097887) bg_button_pane_cp029

0x8bc6,	// (0x00093bf4) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8bc6,	// (0x00093bf4) cmail_ddmenu_btn02_pane_g1

0x8bdf,	// (0x00093c0d) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8bdf,	// (0x00093c0d) cmail_ddmenu_btn02_pane_t1

0xa3c3,	// (0x000953f1) bg_button_pane_cp031_ParamLimits

0xa3c3,	// (0x000953f1) bg_button_pane_cp031

0x8bc6,	// (0x00093bf4) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8bc6,	// (0x00093bf4) cmail_ddmenu_btn03_pane_g1

0x8bdf,	// (0x00093c0d) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8bdf,	// (0x00093c0d) cmail_ddmenu_btn03_pane_t1

0x6154,	// (0x00091182) cell_dialer2_keypad_pane_t1_ParamLimits

0x616e,	// (0x0009119c) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x616e,	// (0x0009119c) cell_dialer2_keypad_pane_t1_copy1

0x7e60,	// (0x00092e8e) ncimui_group_button_pane

0xa3c3,	// (0x000953f1) main_sp_fs_calendar_pane_ParamLimits

0x8881,	// (0x000938af) list_single_cmail_header_caption_pane_ParamLimits

0xa21a,	// (0x00095248) aid_recal_txt_sm_pane

0x966e,	// (0x0009469c) mian_recal_day_pane

0xa254,	// (0x00095282) popup_sp_fs_cale_preview_window_ParamLimits

0xeaf8,	// (0x00099b26) list_recal_day_pane

0xa336,	// (0x00095364) list_single_recal_day_pane_ParamLimits

0xa336,	// (0x00095364) list_single_recal_day_pane

0xeb1f,	// (0x00099b4d) list_single_recal_day_pane_g1_ParamLimits

0xeb1f,	// (0x00099b4d) list_single_recal_day_pane_g1

0xa348,	// (0x00095376) list_single_recal_day_pane_g2_ParamLimits

0xa348,	// (0x00095376) list_single_recal_day_pane_g2

0xa358,	// (0x00095386) list_single_recal_day_pane_g3_ParamLimits

0xa358,	// (0x00095386) list_single_recal_day_pane_g3

0x0d8d,	// (0x0008bdbb) list_single_recal_day_pane_g4_ParamLimits

0x0d8d,	// (0x0008bdbb) list_single_recal_day_pane_g4

0xa364,	// (0x00095392) list_single_recal_day_pane_g5_ParamLimits

0xa364,	// (0x00095392) list_single_recal_day_pane_g5

0xa374,	// (0x000953a2) list_single_recal_day_pane_g6_ParamLimits

0xa374,	// (0x000953a2) list_single_recal_day_pane_g6

0x0004,

0xfe4a,	// (0x0009ae78) list_single_recal_day_pane_g_ParamLimits

0xfe4a,	// (0x0009ae78) list_single_recal_day_pane_g

0xa388,	// (0x000953b6) list_single_recal_day_pane_t1

0xa39a,	// (0x000953c8) list_single_recal_day_pane_t2

0x0001,

0xfe55,	// (0x0009ae83) list_single_recal_day_pane_t

0x8c03,	// (0x00093c31) ncimui_query_button_pane_ParamLimits

0x8c03,	// (0x00093c31) ncimui_query_button_pane

0x8c13,	// (0x00093c41) ncimui_query_button_pane_t1_ParamLimits

0x8c13,	// (0x00093c41) ncimui_query_button_pane_t1

0xeb2b,	// (0x00099b59) ncimui_query_button_pane_t2_ParamLimits

0xeb2b,	// (0x00099b59) ncimui_query_button_pane_t2

0x0001,

0xfe5a,	// (0x0009ae88) ncimui_query_button_pane_t_ParamLimits

0xfe5a,	// (0x0009ae88) ncimui_query_button_pane_t

0x8c26,	// (0x00093c54) query_button_pane_ParamLimits

0x8c26,	// (0x00093c54) query_button_pane

0x966e,	// (0x0009469c) bg_button_pane_cp0028

0xeb3e,	// (0x00099b6c) query_button_pane_t1

0x41e4,	// (0x0008f212) main_tport_pane_ParamLimits

0x8731,	// (0x0009375f) bg_popup_window_pane_cp01_ParamLimits

0x8731,	// (0x0009375f) bg_popup_window_pane_cp01

0x874c,	// (0x0009377a) heading_pane_cp08_ParamLimits

0x874c,	// (0x0009377a) heading_pane_cp08

0x875f,	// (0x0009378d) heading_pane_cp07_ParamLimits

0x875f,	// (0x0009378d) heading_pane_cp07

0x8806,	// (0x00093834) cell_tport_appsw_pane_g2

0x0002,

0xfda6,	// (0x0009add4) cell_tport_appsw_pane_g

0x37c2,	// (0x0008e7f0) input_candi_list_open_g1

0xadc9,	// (0x00095df7) list_cale_time_pane_g6_ParamLimits

0xadc9,	// (0x00095df7) list_cale_time_pane_g6

0x4fac,	// (0x0008ffda) aid_size_touch_calib_1_ParamLimits

0x4fac,	// (0x0008ffda) aid_size_touch_calib_1

0x4fbe,	// (0x0008ffec) aid_size_touch_calib_2_ParamLimits

0x4fbe,	// (0x0008ffec) aid_size_touch_calib_2

0x4fd6,	// (0x00090004) aid_size_touch_calib_3_ParamLimits

0x4fd6,	// (0x00090004) aid_size_touch_calib_3

0x4ff4,	// (0x00090022) aid_size_touch_calib_4_ParamLimits

0x4ff4,	// (0x00090022) aid_size_touch_calib_4

0x500c,	// (0x0009003a) main_touch_calib_button_group_pane_ParamLimits

0x500c,	// (0x0009003a) main_touch_calib_button_group_pane

0x5024,	// (0x00090052) main_touch_calib_pane_g1_ParamLimits

0x5036,	// (0x00090064) main_touch_calib_pane_g2_ParamLimits

0x5048,	// (0x00090076) main_touch_calib_pane_g3_ParamLimits

0x505a,	// (0x00090088) main_touch_calib_pane_g4_ParamLimits

0xf764,	// (0x0009a792) main_touch_calib_pane_g_ParamLimits

0x506c,	// (0x0009009a) main_touch_calib_pane_t1_ParamLimits

0x5086,	// (0x000900b4) main_touch_calib_pane_t2_ParamLimits

0x50a0,	// (0x000900ce) main_touch_calib_pane_t3_ParamLimits

0x50b4,	// (0x000900e2) main_touch_calib_pane_t4_ParamLimits

0x50c8,	// (0x000900f6) main_touch_calib_pane_t5_ParamLimits

0xf76d,	// (0x0009a79b) main_touch_calib_pane_t_ParamLimits

0xcfbb,	// (0x00097fe9) list_single_fp_cale_pane_g3_ParamLimits

0xcfbb,	// (0x00097fe9) list_single_fp_cale_pane_g3

0xa3c3,	// (0x000953f1) bg_button_pane_cp012_ParamLimits

0xa3c3,	// (0x000953f1) bg_vkb2_func_pane_cp03_ParamLimits

0x70a1,	// (0x000920cf) cell_vitu2_function_top_pane_g1_ParamLimits

0xa3c3,	// (0x000953f1) bg_vkb2_func_pane_cp04_ParamLimits

0x7dee,	// (0x00092e1c) main_ncimui_button_group_pane_ParamLimits

0x7dee,	// (0x00092e1c) main_ncimui_button_group_pane

0x7e4e,	// (0x00092e7c) main_ncimui_pane_t3_ParamLimits

0x7e4e,	// (0x00092e7c) main_ncimui_pane_t3

0xe8fc,	// (0x0009992a) phacti_button_group_pane

0xeac7,	// (0x00099af5) aid_size_list_single_double_ParamLimits

0x8b84,	// (0x00093bb2) popup_ezdial_listscroll_window_ParamLimits

0x8ba0,	// (0x00093bce) popup_number_entry_window_cp01_ParamLimits

0x8c39,	// (0x00093c67) phacti_button_pane_ParamLimits

0x8c39,	// (0x00093c67) phacti_button_pane

0x966e,	// (0x0009469c) bg_button_pane_cp14

0xeb4c,	// (0x00099b7a) phacti_button_pane_t1

0x8c4a,	// (0x00093c78) main_touch_calib_button_pane_ParamLimits

0x8c4a,	// (0x00093c78) main_touch_calib_button_pane

0xa7b8,	// (0x000957e6) bg_button_pane_cp18_ParamLimits

0xa7b8,	// (0x000957e6) bg_button_pane_cp18

0xeb5a,	// (0x00099b88) main_touch_calib_button_pane_t1_ParamLimits

0xeb5a,	// (0x00099b88) main_touch_calib_button_pane_t1

0xeb70,	// (0x00099b9e) main_touch_calib_button_pane_t2_ParamLimits

0xeb70,	// (0x00099b9e) main_touch_calib_button_pane_t2

0x0001,

0xfe5f,	// (0x0009ae8d) main_touch_calib_button_pane_t_ParamLimits

0xfe5f,	// (0x0009ae8d) main_touch_calib_button_pane_t

0x966e,	// (0x0009469c) cell_ncimui_button_pane

0x966e,	// (0x0009469c) bg_button_pane_cp032

0xeb8e,	// (0x00099bbc) cell_ncimui_button_pane_t1

0x9f6f,	// (0x00094f9d) image3_infobar_pane_ParamLimits

0x9f6f,	// (0x00094f9d) image3_infobar_pane

0x821c,	// (0x0009324a) fs_bigclock_status_pane_ParamLimits

0x821c,	// (0x0009324a) fs_bigclock_status_pane

0x8229,	// (0x00093257) main_fs_bigclock_clock_pane_ParamLimits

0x8229,	// (0x00093257) main_fs_bigclock_clock_pane

0x8249,	// (0x00093277) main_fs_bigclock_indi_pane_ParamLimits

0x8249,	// (0x00093277) main_fs_bigclock_indi_pane

0x8273,	// (0x000932a1) main_fs_bigclock_swipe_pane_ParamLimits

0x8273,	// (0x000932a1) main_fs_bigclock_swipe_pane

0x966e,	// (0x0009469c) main_fs_clock_dumped_data

0xe438,	// (0x00099466) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe438,	// (0x00099466) list_single_fs_bigclock_indicator_pane_g1

0xe454,	// (0x00099482) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe454,	// (0x00099482) list_single_fs_bigclock_indicator_pane_g2

0xe46e,	// (0x0009949c) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe46e,	// (0x0009949c) list_single_fs_bigclock_indicator_pane_g3

0xe488,	// (0x000994b6) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe488,	// (0x000994b6) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc87,	// (0x0009acb5) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc87,	// (0x0009acb5) list_single_fs_bigclock_indicator_pane_g

0xe4b3,	// (0x000994e1) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe4b3,	// (0x000994e1) list_single_fs_bigclock_indicator_pane_t1

0xe4db,	// (0x00099509) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe4db,	// (0x00099509) list_single_fs_bigclock_indicator_pane_t2

0xe503,	// (0x00099531) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe503,	// (0x00099531) list_single_fs_bigclock_indicator_pane_t3

0xe52b,	// (0x00099559) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe52b,	// (0x00099559) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc92,	// (0x0009acc0) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc92,	// (0x0009acc0) list_single_fs_bigclock_indicator_pane_t

0xeb9c,	// (0x00099bca) image3_infobar_fav_pane_ParamLimits

0xeb9c,	// (0x00099bca) image3_infobar_fav_pane

0xebac,	// (0x00099bda) image3_infobar_loc_pane_ParamLimits

0xebac,	// (0x00099bda) image3_infobar_loc_pane

0xebc0,	// (0x00099bee) image3_infobar_time_pane_ParamLimits

0xebc0,	// (0x00099bee) image3_infobar_time_pane

0xcc6d,	// (0x00097c9b) image3_infobar_time_pane_g1

0xebd0,	// (0x00099bfe) image3_infobar_time_pane_t1

0xcc6d,	// (0x00097c9b) image3_infobar_loc_pane_g1

0xebde,	// (0x00099c0c) image3_infobar_loc_pane_g2

0x0001,

0x0025,	// (0x0008b053) image3_infobar_loc_pane_g

0xebe6,	// (0x00099c14) image3_infobar_loc_pane_t1

0xcc6d,	// (0x00097c9b) image3_infobar_fav_pane_g1

0xebf4,	// (0x00099c22) image3_infobar_fav_pane_g2

0x0001,

0x002a,	// (0x0008b058) image3_infobar_fav_pane_g

0xebfc,	// (0x00099c2a) fs_bigclock_status_battery_pane

0xec05,	// (0x00099c33) fs_bigclock_status_signal_pane

0xec0e,	// (0x00099c3c) fs_bigclock_status_title_pane

0xec17,	// (0x00099c45) fs_bigclock_status_signal_pane_g1

0xec20,	// (0x00099c4e) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe64,	// (0x0009ae92) fs_bigclock_status_signal_pane_g

0xec28,	// (0x00099c56) fs_bigclock_status_battery_pane_g1

0xec31,	// (0x00099c5f) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe69,	// (0x0009ae97) fs_bigclock_status_battery_pane_g

0xec39,	// (0x00099c67) fs_bigclock_status_title_pane_t1

0xcc6d,	// (0x00097c9b) main_fs_bigclock_clock_pane_g1

0xec47,	// (0x00099c75) main_fs_bigclock_clock_pane_g2

0xec50,	// (0x00099c7e) main_fs_bigclock_clock_pane_g3

0xec50,	// (0x00099c7e) main_fs_bigclock_clock_pane_g4

0x0003,

0x002f,	// (0x0008b05d) main_fs_bigclock_clock_pane_g

0xec58,	// (0x00099c86) main_fs_bigclock_clock_pane_t1

0x8c5f,	// (0x00093c8d) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe6e,	// (0x0009ae9c) main_fs_bigclock_clock_pane_t

0xec66,	// (0x00099c94) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec66,	// (0x00099c94) list_single_fs_bigclock_indicator_pane

0xec77,	// (0x00099ca5) list_single_fs_bigclock_pane_ParamLimits

0xec77,	// (0x00099ca5) list_single_fs_bigclock_pane

0xec9d,	// (0x00099ccb) main_fs_bigclock_indicator_pane_t1

0xecac,	// (0x00099cda) list_single_fs_bigclock_pane_g1

0xecb4,	// (0x00099ce2) list_single_fs_bigclock_pane_t1

0xcc6d,	// (0x00097c9b) main_fs_bigclock_swipe_pane_g1

0xecf7,	// (0x00099d25) main_fs_bigclock_swipe_pane_g2

0x0001,

0x0044,	// (0x0008b072) main_fs_bigclock_swipe_pane_g

0xecff,	// (0x00099d2d) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xecff,	// (0x00099d2d) main_fs_bigclock_swipe_pane_t1

0x30c9,	// (0x0008e0f7) call_type_pane_ParamLimits

0x966e,	// (0x0009469c) main_btmg_pane

0xa29f,	// (0x000952cd) list_single_cale_mrui_row_pane_g2_ParamLimits

0xa29f,	// (0x000952cd) list_single_cale_mrui_row_pane_g2

0x0002,

0xfe05,	// (0x0009ae33) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe05,	// (0x0009ae33) list_single_cale_mrui_row_pane_g

0xa325,	// (0x00095353) list_recal_vselct_arw_lo_pane

0xeb17,	// (0x00099b45) list_recal_vselct_arw_up_pane

0xa32d,	// (0x0009535b) list_recal_vselct_pane

0x8cb2,	// (0x00093ce0) btmg_button_pane

0x8cbc,	// (0x00093cea) main_btmg_pane_g1

0x966e,	// (0x0009469c) bg_button_pane_cp044

0xed1c,	// (0x00099d4a) btmg_button_pane_t1

0xc845,	// (0x00097873) aid_listscroll_gen

0xa3c3,	// (0x000953f1) main_cntbar_detail_pane

0xe848,	// (0x00099876) list_cmail_folder_pane

0xca0b,	// (0x00097a39) sp_fs_scroll_pane_cp03_ParamLimits

0x0dad,	// (0x0008bddb) list_single_fs_dyc_pane_cp01_ParamLimits

0x0dad,	// (0x0008bddb) list_single_fs_dyc_pane_cp01

0xed2a,	// (0x00099d58) aid_size_cmail_indent

0xa3ac,	// (0x000953da) list_single_dyc_row_pane_cp01

0x8cf8,	// (0x00093d26) cntbar_detail_list_pane_ParamLimits

0x8cf8,	// (0x00093d26) cntbar_detail_list_pane

0x8d44,	// (0x00093d72) main_cntbar_detail_cont_pane_ParamLimits

0x8d44,	// (0x00093d72) main_cntbar_detail_cont_pane

0xca0b,	// (0x00097a39) scroll_pane_cp032_ParamLimits

0xca0b,	// (0x00097a39) scroll_pane_cp032

0x8d58,	// (0x00093d86) cntbar_detail_list_event_pane_ParamLimits

0x8d58,	// (0x00093d86) cntbar_detail_list_event_pane

0x8d08,	// (0x00093d36) cntbar_detail_list_shct_pane

0xac54,	// (0x00095c82) aid_list_gen

0xed33,	// (0x00099d61) aid_scroll

0xed3c,	// (0x00099d6a) aid_size_touch_scroll_bar

0x768b,	// (0x000926b9) aid_list_double

0x7679,	// (0x000926a7) aid_list_single

0x7679,	// (0x000926a7) aid_list_single_lg

0x0dc3,	// (0x0008bdf1) aid_list_z_g_a_sm

0x8d68,	// (0x00093d96) aid_list_z_g_d

0x0dcb,	// (0x0008bdf9) aid_txt_z_prm

0x0dd9,	// (0x0008be07) aid_txt_z_prm_cp01

0x0de7,	// (0x0008be15) aid_txt_z_sec

0x8d70,	// (0x00093d9e) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8d70,	// (0x00093d9e) main_cntbar_detail_cont_pane_g1

0x8d84,	// (0x00093db2) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8d84,	// (0x00093db2) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe7f,	// (0x0009aead) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe7f,	// (0x0009aead) main_cntbar_detail_cont_pane_g

0xed45,	// (0x00099d73) main_cntbar_detail_cont_pane_t1

0xed53,	// (0x00099d81) main_cntbar_detail_cont_pane_t2

0xed61,	// (0x00099d8f) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe84,	// (0x0009aeb2) main_cntbar_detail_cont_pane_t

0x8d94,	// (0x00093dc2) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8d94,	// (0x00093dc2) cell_cntbar_detail_list_shct_pane

0xed6f,	// (0x00099d9d) cntbar_detail_list_shct_pane_g1

0xed78,	// (0x00099da6) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe8b,	// (0x0009aeb9) cntbar_detail_list_shct_pane_g

0x8da8,	// (0x00093dd6) cntbar_detail_list_event_pane_g1_ParamLimits

0x8da8,	// (0x00093dd6) cntbar_detail_list_event_pane_g1

0x8db4,	// (0x00093de2) cntbar_detail_list_event_pane_g2_ParamLimits

0x8db4,	// (0x00093de2) cntbar_detail_list_event_pane_g2

0x0005,

0xfe90,	// (0x0009aebe) cntbar_detail_list_event_pane_g_ParamLimits

0xfe90,	// (0x0009aebe) cntbar_detail_list_event_pane_g

0x8e20,	// (0x00093e4e) cntbar_detail_list_event_pane_t1_ParamLimits

0x8e20,	// (0x00093e4e) cntbar_detail_list_event_pane_t1

0x8e35,	// (0x00093e63) cntbar_detail_list_event_pane_t2_ParamLimits

0x8e35,	// (0x00093e63) cntbar_detail_list_event_pane_t2

0x0002,

0xfe9d,	// (0x0009aecb) cntbar_detail_list_event_pane_t_ParamLimits

0xfe9d,	// (0x0009aecb) cntbar_detail_list_event_pane_t

0xcc6d,	// (0x00097c9b) cell_cntbar_detail_list_shct_pane_g1

0xb3c0,	// (0x000963ee) navi_pane_mv_g3

0xa3c3,	// (0x000953f1) main_cntbar_detail_pane_ParamLimits

0x966e,	// (0x0009469c) main_notif_wgt_pane

0x9d85,	// (0x00094db3) aid_tch_main_mp4_pane_g4

0x9f67,	// (0x00094f95) popup_slider_window_cp02

0xa31b,	// (0x00095349) list_recal_day_event_pane

0x8cc6,	// (0x00093cf4) cntbar_detail_btn_pane_ParamLimits

0x8cc6,	// (0x00093cf4) cntbar_detail_btn_pane

0x8cdf,	// (0x00093d0d) cntbar_detail_btn_pane_cp01_ParamLimits

0x8cdf,	// (0x00093d0d) cntbar_detail_btn_pane_cp01

0x8d08,	// (0x00093d36) cntbar_detail_list_shct_pane_ParamLimits

0x8d18,	// (0x00093d46) cntbar_detail_pane_g1_ParamLimits

0x8d18,	// (0x00093d46) cntbar_detail_pane_g1

0x8d28,	// (0x00093d56) cntbar_detail_pane_t1_ParamLimits

0x8d28,	// (0x00093d56) cntbar_detail_pane_t1

0x8dc0,	// (0x00093dee) cntbar_detail_list_event_pane_g3_ParamLimits

0x8dc0,	// (0x00093dee) cntbar_detail_list_event_pane_g3

0x8dd8,	// (0x00093e06) cntbar_detail_list_event_pane_g4_ParamLimits

0x8dd8,	// (0x00093e06) cntbar_detail_list_event_pane_g4

0x8df0,	// (0x00093e1e) cntbar_detail_list_event_pane_g5_ParamLimits

0x8df0,	// (0x00093e1e) cntbar_detail_list_event_pane_g5

0x8e08,	// (0x00093e36) cntbar_detail_list_event_pane_g6_ParamLimits

0x8e08,	// (0x00093e36) cntbar_detail_list_event_pane_g6

0x8e4a,	// (0x00093e78) cntbar_detail_list_event_pane_t3_ParamLimits

0x8e4a,	// (0x00093e78) cntbar_detail_list_event_pane_t3

0x8e5c,	// (0x00093e8a) popup_notif_wgt_window_ParamLimits

0x8e5c,	// (0x00093e8a) popup_notif_wgt_window

0x8e75,	// (0x00093ea3) popup_submenu_window_cp01_ParamLimits

0x8e75,	// (0x00093ea3) popup_submenu_window_cp01

0xa9ad,	// (0x000959db) bg_popup_window_pane_cp10

0xed81,	// (0x00099daf) listscroll_notif_wgt_pane

0xed93,	// (0x00099dc1) list_notif_wgt_window

0xed9c,	// (0x00099dca) scroll_pane_cp033

0x8e87,	// (0x00093eb5) list_notif_wgt_row_pane_ParamLimits

0x8e87,	// (0x00093eb5) list_notif_wgt_row_pane

0xeda5,	// (0x00099dd3) aid_size_list_notif_wgt_del

0xedb2,	// (0x00099de0) list_notif_wgt_row_pane_g1

0xedbe,	// (0x00099dec) list_notif_wgt_row_pane_g2

0xedd2,	// (0x00099e00) list_notif_wgt_row_pane_g3

0x0002,

0xfea4,	// (0x0009aed2) list_notif_wgt_row_pane_g

0xeddf,	// (0x00099e0d) list_notif_wgt_row_pane_t1

0xedf5,	// (0x00099e23) list_notif_wgt_row_pane_t2

0xee07,	// (0x00099e35) list_notif_wgt_row_pane_t3

0x0002,

0xfeab,	// (0x0009aed9) list_notif_wgt_row_pane_t

0xd91e,	// (0x0009894c) list_recal_day_event_pane_g1

0xee19,	// (0x00099e47) list_recal_day_event_pane_t1

0x966e,	// (0x0009469c) bg_button_pane_cp045

0x8e97,	// (0x00093ec5) cntbar_detail_btn_pane_t1

0xc859,	// (0x00097887) main_callh_pane_ParamLimits

0xc859,	// (0x00097887) main_callh_pane

0x966e,	// (0x0009469c) main_coverflow0_pane

0x966e,	// (0x0009469c) main_wgtman_pane

0x828b,	// (0x000932b9) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x828b,	// (0x000932b9) main_fs_bigclock_unlock_btn_pane

0x87fe,	// (0x0009382c) bg_button_pane_cp16

0x880e,	// (0x0009383c) cell_tport_appsw_pane_g3

0x8ea5,	// (0x00093ed3) cf0_flow_pane_ParamLimits

0x8ea5,	// (0x00093ed3) cf0_flow_pane

0xee28,	// (0x00099e56) listscroll_cf0_pane

0xee33,	// (0x00099e61) main_cf0_pane_g1

0x8eba,	// (0x00093ee8) main_cf0_pane_t1_ParamLimits

0x8eba,	// (0x00093ee8) main_cf0_pane_t1

0x8ed1,	// (0x00093eff) main_cf0_pane_t2_ParamLimits

0x8ed1,	// (0x00093eff) main_cf0_pane_t2

0x0001,

0xfeb7,	// (0x0009aee5) main_cf0_pane_t_ParamLimits

0xfeb7,	// (0x0009aee5) main_cf0_pane_t

0xee45,	// (0x00099e73) scroll_pane_cp11

0x8ee8,	// (0x00093f16) cf0_flow_pane_g1

0x8ef0,	// (0x00093f1e) cf0_flow_pane_g2

0x0001,

0xfebc,	// (0x0009aeea) cf0_flow_pane_g

0x8ef8,	// (0x00093f26) cf0_flow_pane_t1

0x966e,	// (0x0009469c) main_call6_pane

0x966e,	// (0x0009469c) main_calllock_pane

0x8f06,	// (0x00093f34) call6_btn_grp_pane_ParamLimits

0x8f06,	// (0x00093f34) call6_btn_grp_pane

0x8f20,	// (0x00093f4e) call6_pane_g1_ParamLimits

0x8f20,	// (0x00093f4e) call6_pane_g1

0x8f35,	// (0x00093f63) popup_call6_1st_window_ParamLimits

0x8f35,	// (0x00093f63) popup_call6_1st_window

0x8f46,	// (0x00093f74) popup_call6_2nd_window_ParamLimits

0x8f46,	// (0x00093f74) popup_call6_2nd_window

0x8f57,	// (0x00093f85) cell_call6_btn_pane_ParamLimits

0x8f57,	// (0x00093f85) cell_call6_btn_pane

0xa9ad,	// (0x000959db) bg_popup_call2_in_pane_cp03

0xee50,	// (0x00099e7e) popup_call6_1st_window_g1

0xee58,	// (0x00099e86) popup_call6_1st_window_g2

0xee60,	// (0x00099e8e) popup_call6_1st_window_g3

0x0002,

0xfec1,	// (0x0009aeef) popup_call6_1st_window_g

0xee68,	// (0x00099e96) popup_call6_1st_window_t1

0xee77,	// (0x00099ea5) popup_call6_1st_window_t2

0xee87,	// (0x00099eb5) popup_call6_1st_window_t3

0x0002,

0xfec8,	// (0x0009aef6) popup_call6_1st_window_t

0xa9ad,	// (0x000959db) bg_popup_call2_in_pane_cp04

0xee50,	// (0x00099e7e) popup_call6_2nd_window_g1

0xee58,	// (0x00099e86) popup_call6_2nd_window_g2

0xee60,	// (0x00099e8e) popup_call6_2nd_window_g3

0x0002,

0xfec1,	// (0x0009aeef) popup_call6_2nd_window_g

0xee68,	// (0x00099e96) popup_call6_2nd_window_t1

0x966e,	// (0x0009469c) bg_button_pane_cp15

0xee97,	// (0x00099ec5) cell_call6_btn_pane_g1

0xeea0,	// (0x00099ece) cell_call6_btn_pane_t1

0x8f6b,	// (0x00093f99) listscroll_wgtman_pane_ParamLimits

0x8f6b,	// (0x00093f99) listscroll_wgtman_pane

0x8f8c,	// (0x00093fba) wgtman_btn_pane_ParamLimits

0x8f8c,	// (0x00093fba) wgtman_btn_pane

0xb1d4,	// (0x00096202) aid_scroll_copy1

0xeeaf,	// (0x00099edd) list_wgtman_pane

0x8fcf,	// (0x00093ffd) wgtman_btn_pane_g1_ParamLimits

0x8fcf,	// (0x00093ffd) wgtman_btn_pane_g1

0x8ffb,	// (0x00094029) wgtman_btn_pane_t1_ParamLimits

0x8ffb,	// (0x00094029) wgtman_btn_pane_t1

0xeeb9,	// (0x00099ee7) wgtman_btn_pane_t2_ParamLimits

0xeeb9,	// (0x00099ee7) wgtman_btn_pane_t2

0x0001,

0xfecf,	// (0x0009aefd) wgtman_btn_pane_t_ParamLimits

0xfecf,	// (0x0009aefd) wgtman_btn_pane_t

0x9038,	// (0x00094066) listrow_wgtman_pane_ParamLimits

0x9038,	// (0x00094066) listrow_wgtman_pane

0x904a,	// (0x00094078) listrow_wgtman_pane_g1

0x9057,	// (0x00094085) listrow_wgtman_pane_g2

0x0001,

0xfed4,	// (0x0009af02) listrow_wgtman_pane_g

0x0df5,	// (0x0008be23) listrow_wgtman_pane_t1

0x0e0d,	// (0x0008be3b) listrow_wgtman_pane_t2

0x0001,

0xfed9,	// (0x0009af07) listrow_wgtman_pane_t

0x0e33,	// (0x0008be61) wait_bar_pane_cp09

0xeed0,	// (0x00099efe) main_calllock_btn_pane

0xeeda,	// (0x00099f08) main_calllock_pane_g1

0x966e,	// (0x0009469c) bg_button_pane_cp17

0xeee5,	// (0x00099f13) main_calllock_btn_pane_g1

0xeeee,	// (0x00099f1c) main_calllock_btn_pane_t1

0x966e,	// (0x0009469c) main_dialer3_pane

0x966e,	// (0x0009469c) main_fmrd2_pane

0xcc6d,	// (0x00097c9b) main_fs_bigclock_unlock_btn_pane_g1

0xef05,	// (0x00099f33) main_fs_bigclock_unlock_btn_pane_t1

0x9075,	// (0x000940a3) area_fmrd2_info_pane_ParamLimits

0x9075,	// (0x000940a3) area_fmrd2_info_pane

0x9086,	// (0x000940b4) area_fmrd2_visual_pane_ParamLimits

0x9086,	// (0x000940b4) area_fmrd2_visual_pane

0x9094,	// (0x000940c2) fmrd2_indi_pane_ParamLimits

0x9094,	// (0x000940c2) fmrd2_indi_pane

0x90a1,	// (0x000940cf) area_fmrd2_visual_pane_g1

0x90a9,	// (0x000940d7) area_fmrd2_visual_pane_t1

0x90b9,	// (0x000940e7) area_fmrd2_visual_pane_t2

0x90c9,	// (0x000940f7) area_fmrd2_visual_pane_t3

0x0002,

0xfee3,	// (0x0009af11) area_fmrd2_visual_pane_t

0x90d9,	// (0x00094107) area_fmrd2_info_pane_g1

0x90e1,	// (0x0009410f) area_fmrd2_info_pane_t1

0x90f1,	// (0x0009411f) area_fmrd2_info_pane_t2

0x9101,	// (0x0009412f) area_fmrd2_info_pane_t3

0x9111,	// (0x0009413f) area_fmrd2_info_pane_t4

0x0003,

0xfeea,	// (0x0009af18) area_fmrd2_info_pane_t

0x911f,	// (0x0009414d) fmrd2_indi_pane_t1

0x912f,	// (0x0009415d) fmrd2_indi_pane_t2

0x913f,	// (0x0009416d) fmrd2_indi_pane_t3

0x0002,

0xfef3,	// (0x0009af21) fmrd2_indi_pane_t

0xe497,	// (0x000994c5) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe497,	// (0x000994c5) list_single_fs_bigclock_indicator_pane_g5

0xe547,	// (0x00099575) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe547,	// (0x00099575) list_single_fs_bigclock_indicator_pane_t5

0x89be,	// (0x000939ec) aid_cell_bcale_month_pane_ParamLimits

0x89be,	// (0x000939ec) aid_cell_bcale_month_pane

0x89dc,	// (0x00093a0a) bcale_month_pane_ParamLimits

0x89dc,	// (0x00093a0a) bcale_month_pane

0x8a00,	// (0x00093a2e) bcale_preview_pane_ParamLimits

0x8a00,	// (0x00093a2e) bcale_preview_pane

0xecb4,	// (0x00099ce2) list_single_fs_bigclock_pane_t1_ParamLimits

0xecd3,	// (0x00099d01) list_single_fs_bigclock_pane_t2_ParamLimits

0xecd3,	// (0x00099d01) list_single_fs_bigclock_pane_t2

0x0001,

0xfe7a,	// (0x0009aea8) list_single_fs_bigclock_pane_t_ParamLimits

0xfe7a,	// (0x0009aea8) list_single_fs_bigclock_pane_t

0xeefd,	// (0x00099f2b) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfede,	// (0x0009af0c) main_fs_bigclock_unlock_btn_pane_g

0x914f,	// (0x0009417d) aid_dia3_key_size_ParamLimits

0x914f,	// (0x0009417d) aid_dia3_key_size

0x915e,	// (0x0009418c) aid_dia3_listrow_size_ParamLimits

0x915e,	// (0x0009418c) aid_dia3_listrow_size

0x9173,	// (0x000941a1) dia3_keypad_fun_pane_ParamLimits

0x9173,	// (0x000941a1) dia3_keypad_fun_pane

0x918f,	// (0x000941bd) dia3_keypad_num_pane_ParamLimits

0x918f,	// (0x000941bd) dia3_keypad_num_pane

0x91aa,	// (0x000941d8) dia3_listscroll_pane_ParamLimits

0x91aa,	// (0x000941d8) dia3_listscroll_pane

0x91bd,	// (0x000941eb) dia3_numentry_pane_ParamLimits

0x91bd,	// (0x000941eb) dia3_numentry_pane

0xef13,	// (0x00099f41) dia3_list_pane

0xef1e,	// (0x00099f4c) scroll_pane_cp12

0x966e,	// (0x0009469c) bg_dia3_numentry_pane

0x91d1,	// (0x000941ff) dia3_numentry_pane_t1

0x91e0,	// (0x0009420e) cell_dia3_key_num_pane

0x91e8,	// (0x00094216) cell_dia3_key0_fun_pane_ParamLimits

0x91e8,	// (0x00094216) cell_dia3_key0_fun_pane

0x91fc,	// (0x0009422a) cell_dia3_key1_fun_pane_ParamLimits

0x91fc,	// (0x0009422a) cell_dia3_key1_fun_pane

0x9214,	// (0x00094242) dia3_listrow_pane

0xe1a6,	// (0x000991d4) bg_dia3_numentry_pane_g1

0x966e,	// (0x0009469c) bg_button_pane_cp21

0xef29,	// (0x00099f57) cell_dia3_key_num_pane_t1

0xef37,	// (0x00099f65) cell_dia3_key_num_pane_t2

0xef46,	// (0x00099f74) cell_dia3_key_num_pane_t3

0xef55,	// (0x00099f83) cell_dia3_key_num_pane_t4

0x0003,

0xfefa,	// (0x0009af28) cell_dia3_key_num_pane_t

0x966e,	// (0x0009469c) bg_button_pane_cp19

0x9226,	// (0x00094254) cell_dia3_key0_fun_pane_g1

0x966e,	// (0x0009469c) bg_button_pane_cp20

0x922e,	// (0x0009425c) cell_dia3_key1_fun_pane_g1

0x9236,	// (0x00094264) area_left_week_number_pane

0x9242,	// (0x00094270) area_top_day_name_pane

0x9255,	// (0x00094283) frame_month_view_pane

0xef64,	// (0x00099f92) grid_month_view_pane

0x9268,	// (0x00094296) cell_top_day_name_pane_ParamLimits

0x9268,	// (0x00094296) cell_top_day_name_pane

0x9295,	// (0x000942c3) cell_area_left_week_number_pane_ParamLimits

0x9295,	// (0x000942c3) cell_area_left_week_number_pane

0x92a9,	// (0x000942d7) cell_month_view_pane_ParamLimits

0x92a9,	// (0x000942d7) cell_month_view_pane

0xef72,	// (0x00099fa0) frm_month_g1

0x92d6,	// (0x00094304) frm_month_g2

0x92e9,	// (0x00094317) frm_month_g3

0x92fc,	// (0x0009432a) frm_month_g4

0x930f,	// (0x0009433d) frm_month_g5

0x9322,	// (0x00094350) frm_month_g6

0x9335,	// (0x00094363) frm_month_g7

0xef7f,	// (0x00099fad) frm_month_g8

0x9348,	// (0x00094376) frm_month_g9

0x9358,	// (0x00094386) frm_month_g10

0x9368,	// (0x00094396) frm_month_g11

0x9378,	// (0x000943a6) frm_month_g12

0x938a,	// (0x000943b8) frm_month_g13

0x939c,	// (0x000943ca) frm_month_g14

0x93b0,	// (0x000943de) frm_month_g15

0x93c4,	// (0x000943f2) frm_month_g16

0x000f,

0xff03,	// (0x0009af31) frm_month_g

0xef8c,	// (0x00099fba) cell_top_day_name_pane_t1

0x93d8,	// (0x00094406) cell_area_left_week_number_pane_g1

0x93e4,	// (0x00094412) cell_area_left_week_number_pane_t1

0xcebb,	// (0x00097ee9) cell_month_view_pane_g1

0x93f7,	// (0x00094425) cell_month_view_pane_t1

0x966e,	// (0x0009469c) main_fps_pane

0xe752,	// (0x00099780) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe752,	// (0x00099780) cmail_ddmenu_btn02_pane_cp1

0xe76e,	// (0x0009979c) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe76e,	// (0x0009979c) cmail_ddmenu_btn02_pane_cp2

0x8bd2,	// (0x00093c00) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8bd2,	// (0x00093c00) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe40,	// (0x0009ae6e) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe40,	// (0x0009ae6e) cmail_ddmenu_btn02_pane_g

0x8bf1,	// (0x00093c1f) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8bf1,	// (0x00093c1f) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe45,	// (0x0009ae73) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe45,	// (0x0009ae73) cmail_ddmenu_btn02_pane_t

0x940a,	// (0x00094438) fps_text_pane_ParamLimits

0x940a,	// (0x00094438) fps_text_pane

0x9421,	// (0x0009444f) main_fps_pane_g1_ParamLimits

0x9421,	// (0x0009444f) main_fps_pane_g1

0x943b,	// (0x00094469) wait_bar_pane_cp010_ParamLimits

0x943b,	// (0x00094469) wait_bar_pane_cp010

0x944c,	// (0x0009447a) fps_text_pane_t1_ParamLimits

0x944c,	// (0x0009447a) fps_text_pane_t1

0xd6b6,	// (0x000986e4) cam4_image_uncrop_pane_g1

0xd6bf,	// (0x000986ed) cam4_image_uncrop_pane_g2

0x65fe,	// (0x0009162c) cam4_image_uncrop_pane_g3

0x6607,	// (0x00091635) cam4_image_uncrop_pane_g4

0x0003,

0xf901,	// (0x0009a92f) cam4_image_uncrop_pane_g

0x9214,	// (0x00094242) dia3_listrow_pane_ParamLimits

0x966e,	// (0x0009469c) main_phob2_pane

0x87cf,	// (0x000937fd) cell_tport_appsw_pane_cp02_ParamLimits

0x87cf,	// (0x000937fd) cell_tport_appsw_pane_cp02

0x87e3,	// (0x00093811) cell_tport_appsw_pane_cp03_ParamLimits

0x87e3,	// (0x00093811) cell_tport_appsw_pane_cp03

0x966e,	// (0x0009469c) phob2_contact_card_pane

0x966e,	// (0x0009469c) phob2_listscroll_pane

0xef9f,	// (0x00099fcd) phob2_list_pane

0xefa7,	// (0x00099fd5) scroll_pane_cp034

0x9464,	// (0x00094492) phob2_cc_data_pane_ParamLimits

0x9464,	// (0x00094492) phob2_cc_data_pane

0x9483,	// (0x000944b1) phob2_cc_listscroll_pane_ParamLimits

0x9483,	// (0x000944b1) phob2_cc_listscroll_pane

0x9038,	// (0x00094066) list_double_large_graphic_phob2_pane_ParamLimits

0x9038,	// (0x00094066) list_double_large_graphic_phob2_pane

0x94a1,	// (0x000944cf) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x94a1,	// (0x000944cf) list_double_large_graphic_phob2_pane_g1

0x0e45,	// (0x0008be73) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x0e45,	// (0x0008be73) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff24,	// (0x0009af52) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff24,	// (0x0009af52) list_double_large_graphic_phob2_pane_g

0x0e51,	// (0x0008be7f) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x0e51,	// (0x0008be7f) list_double_large_graphic_phob2_pane_t1

0x0e67,	// (0x0008be95) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x0e67,	// (0x0008be95) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff29,	// (0x0009af57) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff29,	// (0x0009af57) list_double_large_graphic_phob2_pane_t

0x966e,	// (0x0009469c) list_highlight_pane_cp024

0x94b7,	// (0x000944e5) phob2_cc_button_pane

0x94bf,	// (0x000944ed) phob2_cc_data_pane_g1_ParamLimits

0x94bf,	// (0x000944ed) phob2_cc_data_pane_g1

0x94d4,	// (0x00094502) phob2_cc_data_pane_g2_ParamLimits

0x94d4,	// (0x00094502) phob2_cc_data_pane_g2

0x0001,

0xff2e,	// (0x0009af5c) phob2_cc_data_pane_g_ParamLimits

0xff2e,	// (0x0009af5c) phob2_cc_data_pane_g

0x94e4,	// (0x00094512) phob2_cc_data_pane_t1_ParamLimits

0x94e4,	// (0x00094512) phob2_cc_data_pane_t1

0x94fc,	// (0x0009452a) phob2_cc_data_pane_t2_ParamLimits

0x94fc,	// (0x0009452a) phob2_cc_data_pane_t2

0x9514,	// (0x00094542) phob2_cc_data_pane_t3_ParamLimits

0x9514,	// (0x00094542) phob2_cc_data_pane_t3

0x0002,

0xff33,	// (0x0009af61) phob2_cc_data_pane_t_ParamLimits

0xff33,	// (0x0009af61) phob2_cc_data_pane_t

0xefaf,	// (0x00099fdd) phob2_cc_list_pane_ParamLimits

0xefaf,	// (0x00099fdd) phob2_cc_list_pane

0xd9c7,	// (0x000989f5) scroll_pane_cp035_ParamLimits

0xd9c7,	// (0x000989f5) scroll_pane_cp035

0xa3c3,	// (0x000953f1) bg_button_pane_cp033

0xefbb,	// (0x00099fe9) phob2_cc_button_pane_g1

0xefc7,	// (0x00099ff5) phob2_cc_button_pane_t1

0xefdc,	// (0x0009a00a) phob2_cc_button_pane_t2

0x0001,

0xff3a,	// (0x0009af68) phob2_cc_button_pane_t

0x952c,	// (0x0009455a) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x952c,	// (0x0009455a) list_double_large_graphic_phob2_cc_pane

0x953f,	// (0x0009456d) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x953f,	// (0x0009456d) list_double_large_graphic_phob2_cc_pane_g1

0x0e7c,	// (0x0008beaa) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x0e7c,	// (0x0008beaa) list_double_large_graphic_phob2_cc_pane_g2

0x954b,	// (0x00094579) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x954b,	// (0x00094579) list_double_large_graphic_phob2_cc_pane_g3

0x0e88,	// (0x0008beb6) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x0e88,	// (0x0008beb6) list_double_large_graphic_phob2_cc_pane_g4

0x0e94,	// (0x0008bec2) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x0e94,	// (0x0008bec2) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff3f,	// (0x0009af6d) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff3f,	// (0x0009af6d) list_double_large_graphic_phob2_cc_pane_g

0x0ea0,	// (0x0008bece) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x0ea0,	// (0x0008bece) list_double_large_graphic_phob2_cc_pane_t1

0x0ec9,	// (0x0008bef7) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x0ec9,	// (0x0008bef7) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4a,	// (0x0009af78) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4a,	// (0x0009af78) list_double_large_graphic_phob2_cc_pane_t

0xefee,	// (0x0009a01c) list_highlight_pane_cp025_ParamLimits

0xefee,	// (0x0009a01c) list_highlight_pane_cp025

0xa3c3,	// (0x000953f1) bg_button_pane_cp033_ParamLimits

0xefbb,	// (0x00099fe9) phob2_cc_button_pane_g1_ParamLimits

0xefc7,	// (0x00099ff5) phob2_cc_button_pane_t1_ParamLimits

0xefdc,	// (0x0009a00a) phob2_cc_button_pane_t2_ParamLimits

0xff3a,	// (0x0009af68) phob2_cc_button_pane_t_ParamLimits

0x113b,	// (0x0008c169) popup_wgtman_window

0xd7e2,	// (0x00098810) scroll_pane_cp038

0x8fb1,	// (0x00093fdf) wgtman_btn_pane_cp_01_ParamLimits

0x8fb1,	// (0x00093fdf) wgtman_btn_pane_cp_01

0xeffc,	// (0x0009a02a) wgtman_content_pane

0xf013,	// (0x0009a041) wgtman_heading_pane

0x966e,	// (0x0009469c) bg_heading_pane_cp02

0xf01c,	// (0x0009a04a) wgtman_heading_pane_g1

0xf024,	// (0x0009a052) wgtman_heading_pane_t1

0xf032,	// (0x0009a060) scroll_pane_cp036

0xf03a,	// (0x0009a068) wgtman_list_pane

0xe632,	// (0x00099660) wgtman_list_pane_t1_ParamLimits

0xe632,	// (0x00099660) wgtman_list_pane_t1

0x9fc1,	// (0x00094fef) cam4_grid_pane

0x04c7,	// (0x0008b4f5) bg_button_pane_cp015_ParamLimits

0x723d,	// (0x0009226b) bg_button_pane_cp016_ParamLimits

0x7250,	// (0x0009227e) bg_button_pane_cp017_ParamLimits

0x050f,	// (0x0008b53d) popup_vitu2_query_window_g3_ParamLimits

0x050f,	// (0x0008b53d) popup_vitu2_query_window_g3

0x058a,	// (0x0008b5b8) popup_vitu2_query_window_t6_ParamLimits

0x058a,	// (0x0008b5b8) popup_vitu2_query_window_t6

0x05b5,	// (0x0008b5e3) popup_vitu2_query_window_t7_ParamLimits

0x05b5,	// (0x0008b5e3) popup_vitu2_query_window_t7

0xd6b6,	// (0x000986e4) cam4_grid_pane_g1

0xd6bf,	// (0x000986ed) cam4_grid_pane_g2

0xf042,	// (0x0009a070) cam4_grid_pane_g3

0xf04b,	// (0x0009a079) cam4_grid_pane_g4

0x0003,

0xff4f,	// (0x0009af7d) cam4_grid_pane_g

0x204f,	// (0x0008d07d) aid_placing_vt_slider_lsc_ParamLimits

0x234c,	// (0x0008d37a) vidtel_button_pane_ParamLimits

0x234c,	// (0x0008d37a) vidtel_button_pane

0x966e,	// (0x0009469c) bg_button_pane_cp034

0x9557,	// (0x00094585) vidtel_button_pane_g1

0xf056,	// (0x0009a084) vidtel_button_pane_t1

0xd90e,	// (0x0009893c) aid_size_vtel_slider_touch

0xd9c7,	// (0x000989f5) scroll_pane_cp039

0xe1ec,	// (0x0009921a) ncim_query_button_pane_cp01_ParamLimits

0xe20b,	// (0x00099239) ncimui_query_pane_g1_ParamLimits

0xa3c3,	// (0x000953f1) input_focus_pane_cp012_ParamLimits

0xe230,	// (0x0009925e) ncim_query_entry_pane_t1_ParamLimits

0xd9c7,	// (0x000989f5) scroll_pane_cp039_ParamLimits

0xb2ab,	// (0x000962d9) navi_pane_bcale_mc_g1

0xb2b3,	// (0x000962e1) navi_pane_bcale_mc_t1

0xe7b7,	// (0x000997e5) main_sp_fs_email_pane_g1

0xe7c3,	// (0x000997f1) main_sp_fs_email_pane_g2

0x0001,

0xfcf8,	// (0x0009ad26) main_sp_fs_email_pane_g

0xea19,	// (0x00099a47) list_single_cale_mrui_row_pane_g3_ParamLimits

0xea19,	// (0x00099a47) list_single_cale_mrui_row_pane_g3

0x0da3,	// (0x0008bdd1) list_single_recal_day_pane_g5_event_pane

0xa380,	// (0x000953ae) list_single_recal_day_pane_g7

0xf06c,	// (0x0009a09a) list_recal_day_event_pane_cp01

0xf075,	// (0x0009a0a3) list_recal_vselct_arw_lo_pane_cp01

0xf07d,	// (0x0009a0ab) list_recal_vselct_arw_up_pane_cp01

0xf085,	// (0x0009a0b3) list_recal_vselct_pane_cp01

0xd91e,	// (0x0009894c) list_recal_day_event_pane_cp01_g1

0xa3b5,	// (0x000953e3) list_recal_day_event_pane_cp01_t1

0xa388,	// (0x000953b6) list_single_recal_day_pane_t1_ParamLimits

0xa39a,	// (0x000953c8) list_single_recal_day_pane_t2_ParamLimits

0xfe55,	// (0x0009ae83) list_single_recal_day_pane_t_ParamLimits

0xa6e7,	// (0x00095715) bg_notes_pane_ParamLimits

0xa796,	// (0x000957c4) list_notes_pane_ParamLimits

0x147f,	// (0x0008c4ad) scroll_pane_cp06_ParamLimits

0xa7b8,	// (0x000957e6) main_notes_pane_ParamLimits

0x966e,	// (0x0009469c) main_welc_pane

0x955f,	// (0x0009458d) main_welc_body_pane_ParamLimits

0x955f,	// (0x0009458d) main_welc_body_pane

0x957c,	// (0x000945aa) main_welc_opti_pane_ParamLimits

0x957c,	// (0x000945aa) main_welc_opti_pane

0x95c1,	// (0x000945ef) main_welc_pane_t1_ParamLimits

0x95c1,	// (0x000945ef) main_welc_pane_t1

0x95df,	// (0x0009460d) main_welc_body_row_pane_ParamLimits

0x95df,	// (0x0009460d) main_welc_body_row_pane

0xf005,	// (0x0009a033) main_welc_opti_row_pane_ParamLimits

0xf005,	// (0x0009a033) main_welc_opti_row_pane

0xf08f,	// (0x0009a0bd) main_welc_opti_row_pane_g1

0x95f4,	// (0x00094622) main_welc_opti_row_pane_t1

0xf097,	// (0x0009a0c5) main_welc_body_row_pane_t1

0xed8b,	// (0x00099db9) popup_notif_wgt_heading_pane

0xeda5,	// (0x00099dd3) aid_size_list_notif_wgt_del_ParamLimits

0xedb2,	// (0x00099de0) list_notif_wgt_row_pane_g1_ParamLimits

0xedbe,	// (0x00099dec) list_notif_wgt_row_pane_g2_ParamLimits

0xedd2,	// (0x00099e00) list_notif_wgt_row_pane_g3_ParamLimits

0xfea4,	// (0x0009aed2) list_notif_wgt_row_pane_g_ParamLimits

0xeddf,	// (0x00099e0d) list_notif_wgt_row_pane_t1_ParamLimits

0xedf5,	// (0x00099e23) list_notif_wgt_row_pane_t2_ParamLimits

0xee07,	// (0x00099e35) list_notif_wgt_row_pane_t3_ParamLimits

0xfeab,	// (0x0009aed9) list_notif_wgt_row_pane_t_ParamLimits

0x904a,	// (0x00094078) listrow_wgtman_pane_g1_ParamLimits

0x9057,	// (0x00094085) listrow_wgtman_pane_g2_ParamLimits

0xfed4,	// (0x0009af02) listrow_wgtman_pane_g_ParamLimits

0x0df5,	// (0x0008be23) listrow_wgtman_pane_t1_ParamLimits

0x0e0d,	// (0x0008be3b) listrow_wgtman_pane_t2_ParamLimits

0xfed9,	// (0x0009af07) listrow_wgtman_pane_t_ParamLimits

0x0e33,	// (0x0008be61) wait_bar_pane_cp09_ParamLimits

0x966e,	// (0x0009469c) bg_popup_heading_pane_cp02

0xf0a6,	// (0x0009a0d4) popup_notif_wgt_heading_pane_g1

0xf0ae,	// (0x0009a0dc) popup_notif_wgt_heading_pane_t1

0x966e,	// (0x0009469c) main_vids_pane

0x966e,	// (0x0009469c) vids_listscroll_pane

0x9603,	// (0x00094631) scroll_pane_cp040

0x966e,	// (0x0009469c) vids_list_pane

0x960e,	// (0x0009463c) vids_list_double_pane_ParamLimits

0x960e,	// (0x0009463c) vids_list_double_pane

0x961f,	// (0x0009464d) vids_list_double_pane_g1

0x9628,	// (0x00094656) vids_list_double_pane_t1

0x9638,	// (0x00094666) vids_list_double_pane_t2

0x0001,

0xff5d,	// (0x0009af8b) vids_list_double_pane_t

0xa3c3,	// (0x000953f1) main_ncimui_pane_ParamLimits

0x7e02,	// (0x00092e30) main_ncimui_pane_g1_ParamLimits

0x7e0e,	// (0x00092e3c) main_ncimui_pane_g2_ParamLimits

0x7e0e,	// (0x00092e3c) main_ncimui_pane_g2

0x0001,

0xfbfd,	// (0x0009ac2b) main_ncimui_pane_g_ParamLimits

0xfbfd,	// (0x0009ac2b) main_ncimui_pane_g

0x9597,	// (0x000945c5) main_welc_pane_g1_ParamLimits

0x9597,	// (0x000945c5) main_welc_pane_g1

0x95ac,	// (0x000945da) main_welc_pane_g2_ParamLimits

0x95ac,	// (0x000945da) main_welc_pane_g2

0x0001,

0xff58,	// (0x0009af86) main_welc_pane_g_ParamLimits

0xff58,	// (0x0009af86) main_welc_pane_g

0xa6e7,	// (0x00095715) listscroll_mce_pane_ParamLimits

0xb400,	// (0x0009642e) wait_bar_pane_cp10

0xc84d,	// (0x0009787b) main_cale_day_pane_ParamLimits

0xc84d,	// (0x0009787b) main_cale_week_pane_ParamLimits

0xa6e7,	// (0x00095715) main_messa_pane_ParamLimits

0x5927,	// (0x00090955) main_clock2_btn_pane_ParamLimits

0x5927,	// (0x00090955) main_clock2_btn_pane

0xd043,	// (0x00098071) main_clock2_btn_pane_cp01_ParamLimits

0xd043,	// (0x00098071) main_clock2_btn_pane_cp01

0xe9ea,	// (0x00099a18) list_cale_mrui_pane_ParamLimits

0xee3d,	// (0x00099e6b) main_cf0_pane_g2

0x0001,

0xfeb2,	// (0x0009aee0) main_cf0_pane_g

0x9236,	// (0x00094264) area_left_week_number_pane_ParamLimits

0x9242,	// (0x00094270) area_top_day_name_pane_ParamLimits

0x9255,	// (0x00094283) frame_month_view_pane_ParamLimits

0xef64,	// (0x00099f92) grid_month_view_pane_ParamLimits

0xef72,	// (0x00099fa0) frm_month_g1_ParamLimits

0x92d6,	// (0x00094304) frm_month_g2_ParamLimits

0x92e9,	// (0x00094317) frm_month_g3_ParamLimits

0x92fc,	// (0x0009432a) frm_month_g4_ParamLimits

0x930f,	// (0x0009433d) frm_month_g5_ParamLimits

0x9322,	// (0x00094350) frm_month_g6_ParamLimits

0x9335,	// (0x00094363) frm_month_g7_ParamLimits

0xef7f,	// (0x00099fad) frm_month_g8_ParamLimits

0x9348,	// (0x00094376) frm_month_g9_ParamLimits

0x9358,	// (0x00094386) frm_month_g10_ParamLimits

0x9368,	// (0x00094396) frm_month_g11_ParamLimits

0x9378,	// (0x000943a6) frm_month_g12_ParamLimits

0x938a,	// (0x000943b8) frm_month_g13_ParamLimits

0x939c,	// (0x000943ca) frm_month_g14_ParamLimits

0x93b0,	// (0x000943de) frm_month_g15_ParamLimits

0x93c4,	// (0x000943f2) frm_month_g16_ParamLimits

0xff03,	// (0x0009af31) frm_month_g_ParamLimits

0xef8c,	// (0x00099fba) cell_top_day_name_pane_t1_ParamLimits

0x93d8,	// (0x00094406) cell_area_left_week_number_pane_g1_ParamLimits

0x93e4,	// (0x00094412) cell_area_left_week_number_pane_t1_ParamLimits

0xcebb,	// (0x00097ee9) cell_month_view_pane_g1_ParamLimits

0x93f7,	// (0x00094425) cell_month_view_pane_t1_ParamLimits

0xa6df,	// (0x0009570d) main_clock2_btn_pane_g1

0xf0bc,	// (0x0009a0ea) main_clock2_btn_pane_t1

0xa3c3,	// (0x000953f1) listscroll_cmail_pane_ParamLimits

0xe7b7,	// (0x000997e5) main_sp_fs_email_pane_g1_ParamLimits

0xe7c3,	// (0x000997f1) main_sp_fs_email_pane_g2_ParamLimits

0xfcf8,	// (0x0009ad26) main_sp_fs_email_pane_g_ParamLimits

0xeaf8,	// (0x00099b26) list_recal_day_pane_ParamLimits

0xeb09,	// (0x00099b37) mian_recal_day_pane_t1

0x09c7,	// (0x0008b9f5) list_single_dyc_row_text_pane_t4_ParamLimits

0x09c7,	// (0x0008b9f5) list_single_dyc_row_text_pane_t4

0x0a10,	// (0x0008ba3e) list_single_dyc_row_text_pane_t5_ParamLimits

0x0a10,	// (0x0008ba3e) list_single_dyc_row_text_pane_t5

0x86ae,	// (0x000936dc) list_single_dyc_row_text_pane_t6_ParamLimits

0x86ae,	// (0x000936dc) list_single_dyc_row_text_pane_t6

0x300e,	// (0x0008e03c) aid_mgn_list_cale_time_pane

0xa3c3,	// (0x000953f1) main_gallery2_pane_ParamLimits

0xd059,	// (0x00098087) main_clock2_pane_cp01_t1

0xd067,	// (0x00098095) main_clock2_pane_cp01_t3

0x0001,

0xf7d7,	// (0x0009a805) main_clock2_pane_cp01_t

0x1806,	// (0x0008c834) cale_week_scroll_pane_g16_ParamLimits

0x1806,	// (0x0008c834) cale_week_scroll_pane_g16

0xa9ad,	// (0x000959db) vorec_slider_pane

0xf056,	// (0x0009a084) vidtel_button_pane_t1_ParamLimits
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

} // end of namespace AknLayoutScalable_Elaf_pnl4_apps_nhd4_lsc_tch_Large

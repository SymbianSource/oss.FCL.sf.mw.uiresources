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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0004cbc1 };

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
0x1223,	// (0x0004dde4) Screen

0x122f,	// (0x0004ddf0) application_window

0x127b,	// (0x0004de3c) area_bottom_pane_ParamLimits

0x127b,	// (0x0004de3c) area_bottom_pane

0x12b4,	// (0x0004de75) area_top_pane_ParamLimits

0x12b4,	// (0x0004de75) area_top_pane

0x9891,	// (0x00056452) call_video_uplink_pane_ParamLimits

0x9891,	// (0x00056452) call_video_uplink_pane

0x1342,	// (0x0004df03) main_pane_ParamLimits

0x1342,	// (0x0004df03) main_pane

0xc970,	// (0x00059531) context_pane

0x4442,	// (0x00051003) navi_pane

0x4474,	// (0x00051035) popup_cale_events_window_ParamLimits

0x4474,	// (0x00051035) popup_cale_events_window

0xc983,	// (0x00059544) popup_mup_playback_window

0x448c,	// (0x0005104d) signal_pane

0xa8e2,	// (0x000574a3) main_browser_pane

0xaace,	// (0x0005768f) main_burst_pane

0x41aa,	// (0x00050d6b) main_calc_pane

0xc956,	// (0x00059517) main_cale_day_pane

0x1953,	// (0x0004e514) main_cale_month_pane

0xc956,	// (0x00059517) main_cale_week_pane

0xaace,	// (0x0005768f) main_call_pane

0xa5b6,	// (0x00057177) main_call_poc_pane

0xaace,	// (0x0005768f) main_camera_pane

0xaace,	// (0x0005768f) main_chi_dic_pane

0xb2bf,	// (0x00057e80) main_clock_pane

0xa5b6,	// (0x00057177) main_fmradio_pane

0xaace,	// (0x0005768f) main_graph_messa_pane

0xa5b6,	// (0x00057177) main_help_pane

0xa8e2,	// (0x000574a3) main_im_pane

0xa811,	// (0x000573d2) main_image_pane_ParamLimits

0xa811,	// (0x000573d2) main_image_pane

0xa5b6,	// (0x00057177) main_location2_pane

0xaace,	// (0x0005768f) main_location_pane

0xa811,	// (0x000573d2) main_messa_pane

0xa5b6,	// (0x00057177) main_mp2_pane

0xaace,	// (0x0005768f) main_mp_pane

0xa5b6,	// (0x00057177) main_msg_pane

0xa5b6,	// (0x00057177) main_mup_eq_pane

0xa5b6,	// (0x00057177) main_mup_pane

0xa8e2,	// (0x000574a3) main_notes_pane

0xa5b6,	// (0x00057177) main_pec_pane

0xa5b6,	// (0x00057177) main_phob_pane

0xa5b6,	// (0x00057177) main_pinb_pane

0xa5b6,	// (0x00057177) main_postcard_pane

0xa5b6,	// (0x00057177) main_qdial_pane

0xaace,	// (0x0005768f) main_skin_pane

0xa5b6,	// (0x00057177) main_smil2_pane

0xaace,	// (0x0005768f) main_smil_pane

0xaace,	// (0x0005768f) main_video_pane

0xaace,	// (0x0005768f) main_video_tele_pane

0xa811,	// (0x000573d2) main_viewer_pane_ParamLimits

0xa811,	// (0x000573d2) main_viewer_pane

0xaace,	// (0x0005768f) main_vorec_pane

0x41fe,	// (0x00050dbf) popup_blid_sat_info_window_ParamLimits

0x41fe,	// (0x00050dbf) popup_blid_sat_info_window

0x4256,	// (0x00050e17) popup_dyc_status_message_window_ParamLimits

0x4256,	// (0x00050e17) popup_dyc_status_message_window

0x426e,	// (0x00050e2f) popup_grid_large_graphic_window_ParamLimits

0x426e,	// (0x00050e2f) popup_grid_large_graphic_window

0x431e,	// (0x00050edf) popup_loc_request_window_ParamLimits

0x431e,	// (0x00050edf) popup_loc_request_window

0x441a,	// (0x00050fdb) popup_wml_address_window_ParamLimits

0x441a,	// (0x00050fdb) popup_wml_address_window

0x3fe4,	// (0x00050ba5) call_muted_g1

0x3c98,	// (0x00050859) popup_call_audio_conf_window_ParamLimits

0x3c98,	// (0x00050859) popup_call_audio_conf_window

0x3ff8,	// (0x00050bb9) popup_call_audio_first_window_ParamLimits

0x3ff8,	// (0x00050bb9) popup_call_audio_first_window

0x406e,	// (0x00050c2f) popup_call_audio_in_window_ParamLimits

0x406e,	// (0x00050c2f) popup_call_audio_in_window

0x40aa,	// (0x00050c6b) popup_call_audio_out_window_ParamLimits

0x40aa,	// (0x00050c6b) popup_call_audio_out_window

0x40e4,	// (0x00050ca5) popup_call_audio_second_window_ParamLimits

0x40e4,	// (0x00050ca5) popup_call_audio_second_window

0x413a,	// (0x00050cfb) popup_call_audio_wait_window_ParamLimits

0x413a,	// (0x00050cfb) popup_call_audio_wait_window

0x416f,	// (0x00050d30) popup_number_entry_window_ParamLimits

0x416f,	// (0x00050d30) popup_number_entry_window

0x98af,	// (0x00056470) bg_popup_call_pane_cp05_ParamLimits

0x98af,	// (0x00056470) bg_popup_call_pane_cp05

0x98cf,	// (0x00056490) popup_number_entry_window_t1

0x98e2,	// (0x000564a3) popup_number_entry_window_t2

0x98f4,	// (0x000564b5) popup_number_entry_window_t3

0x0003,

0xf0c6,	// (0x0005bc87) popup_number_entry_window_t

0x9906,	// (0x000564c7) text_title_cp2

0x9919,	// (0x000564da) bg_popup_call_pane_cp_ParamLimits

0x9919,	// (0x000564da) bg_popup_call_pane_cp

0x9927,	// (0x000564e8) call_thumbnail_pane

0x992f,	// (0x000564f0) popup_call_audio_in_window_g1_ParamLimits

0x992f,	// (0x000564f0) popup_call_audio_in_window_g1

0x993b,	// (0x000564fc) popup_call_audio_in_window_g2_ParamLimits

0x993b,	// (0x000564fc) popup_call_audio_in_window_g2

0x9947,	// (0x00056508) popup_call_audio_in_window_g3_ParamLimits

0x9947,	// (0x00056508) popup_call_audio_in_window_g3

0x0002,

0xf0cf,	// (0x0005bc90) popup_call_audio_in_window_g_ParamLimits

0xf0cf,	// (0x0005bc90) popup_call_audio_in_window_g

0x9953,	// (0x00056514) popup_call_audio_in_window_t1_ParamLimits

0x9953,	// (0x00056514) popup_call_audio_in_window_t1

0x996f,	// (0x00056530) popup_call_audio_in_window_t2_ParamLimits

0x996f,	// (0x00056530) popup_call_audio_in_window_t2

0x998b,	// (0x0005654c) popup_call_audio_in_window_t3_ParamLimits

0x998b,	// (0x0005654c) popup_call_audio_in_window_t3

0x0002,

0xf0d6,	// (0x0005bc97) popup_call_audio_in_window_t_ParamLimits

0xf0d6,	// (0x0005bc97) popup_call_audio_in_window_t

0x9919,	// (0x000564da) bg_popup_call_pane_cp01_ParamLimits

0x9919,	// (0x000564da) bg_popup_call_pane_cp01

0x9927,	// (0x000564e8) call_thumbnail_pane_cp02

0x999e,	// (0x0005655f) call_type_pane_cp022

0x99a6,	// (0x00056567) popup_call_audio_out_window_g1_ParamLimits

0x99a6,	// (0x00056567) popup_call_audio_out_window_g1

0x99b8,	// (0x00056579) popup_call_audio_out_window_g2_ParamLimits

0x99b8,	// (0x00056579) popup_call_audio_out_window_g2

0x99c4,	// (0x00056585) popup_call_audio_out_window_g3_ParamLimits

0x99c4,	// (0x00056585) popup_call_audio_out_window_g3

0x0002,

0xf0dd,	// (0x0005bc9e) popup_call_audio_out_window_g_ParamLimits

0xf0dd,	// (0x0005bc9e) popup_call_audio_out_window_g

0x99d6,	// (0x00056597) popup_call_audio_out_window_t1_ParamLimits

0x99d6,	// (0x00056597) popup_call_audio_out_window_t1

0x99ee,	// (0x000565af) popup_call_audio_out_window_t2_ParamLimits

0x99ee,	// (0x000565af) popup_call_audio_out_window_t2

0x0001,

0xf0e4,	// (0x0005bca5) popup_call_audio_out_window_t_ParamLimits

0xf0e4,	// (0x0005bca5) popup_call_audio_out_window_t

0x9a03,	// (0x000565c4) bg_popup_call_pane_ParamLimits

0x9a03,	// (0x000565c4) bg_popup_call_pane

0x14ff,	// (0x0004e0c0) call_thumbnail_pane_cp_ParamLimits

0x14ff,	// (0x0004e0c0) call_thumbnail_pane_cp

0x9a87,	// (0x00056648) call_type_pane_cp01_ParamLimits

0x9a87,	// (0x00056648) call_type_pane_cp01

0xa3bf,	// (0x00056f80) popup_call_audio_first_window_g1_ParamLimits

0xa3bf,	// (0x00056f80) popup_call_audio_first_window_g1

0xa40b,	// (0x00056fcc) popup_call_audio_first_window_g2_ParamLimits

0xa40b,	// (0x00056fcc) popup_call_audio_first_window_g2

0x0001,

0xf0e9,	// (0x0005bcaa) popup_call_audio_first_window_g_ParamLimits

0xf0e9,	// (0x0005bcaa) popup_call_audio_first_window_g

0xa44f,	// (0x00057010) popup_call_audio_first_window_t1_ParamLimits

0xa44f,	// (0x00057010) popup_call_audio_first_window_t1

0xa4fb,	// (0x000570bc) popup_call_audio_first_window_t4_ParamLimits

0xa4fb,	// (0x000570bc) popup_call_audio_first_window_t4

0xa587,	// (0x00057148) popup_call_audio_first_window_t5_ParamLimits

0xa587,	// (0x00057148) popup_call_audio_first_window_t5

0x0002,

0xf0ee,	// (0x0005bcaf) popup_call_audio_first_window_t_ParamLimits

0xf0ee,	// (0x0005bcaf) popup_call_audio_first_window_t

0xa5b6,	// (0x00057177) bg_popup_call_pane_cp02

0xa5c0,	// (0x00057181) call_type_pane_cp023

0xa5c8,	// (0x00057189) popup_call_audio_wait_window_g1

0xa5d0,	// (0x00057191) popup_call_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x0005bcb6) popup_call_audio_wait_window_g

0xa5d8,	// (0x00057199) popup_call_audio_wait_window_t3

0xa5e6,	// (0x000571a7) bg_popup_call_pane_cp03_ParamLimits

0xa5e6,	// (0x000571a7) bg_popup_call_pane_cp03

0xa646,	// (0x00057207) call_thumbnail_pane_cp011_ParamLimits

0xa646,	// (0x00057207) call_thumbnail_pane_cp011

0xa652,	// (0x00057213) call_type_pane_cp034_ParamLimits

0xa652,	// (0x00057213) call_type_pane_cp034

0xa68e,	// (0x0005724f) popup_call_audio_second_window_g1_ParamLimits

0xa68e,	// (0x0005724f) popup_call_audio_second_window_g1

0xa6ca,	// (0x0005728b) popup_call_audio_second_window_g2_ParamLimits

0xa6ca,	// (0x0005728b) popup_call_audio_second_window_g2

0x0001,

0xf0fa,	// (0x0005bcbb) popup_call_audio_second_window_g_ParamLimits

0xf0fa,	// (0x0005bcbb) popup_call_audio_second_window_g

0xa706,	// (0x000572c7) popup_call_audio_second_window_t1_ParamLimits

0xa706,	// (0x000572c7) popup_call_audio_second_window_t1

0xa787,	// (0x00057348) popup_call_audio_second_window_t2_ParamLimits

0xa787,	// (0x00057348) popup_call_audio_second_window_t2

0xa7bd,	// (0x0005737e) popup_call_audio_second_window_t3_ParamLimits

0xa7bd,	// (0x0005737e) popup_call_audio_second_window_t3

0x0002,

0xf0ff,	// (0x0005bcc0) popup_call_audio_second_window_t_ParamLimits

0xf0ff,	// (0x0005bcc0) popup_call_audio_second_window_t

0xa5b6,	// (0x00057177) bg_popup_call_pane_cp04

0xa7f3,	// (0x000573b4) list_conf_pane

0xa7fb,	// (0x000573bc) popup_call_audio_conf_window_t1

0xa809,	// (0x000573ca) call_thumbnail_pane_g1

0xa811,	// (0x000573d2) bg_pinb_pane_ParamLimits

0xa811,	// (0x000573d2) bg_pinb_pane

0xa81f,	// (0x000573e0) find_pinb_pane

0xa828,	// (0x000573e9) listscroll_pinb_pane_ParamLimits

0xa828,	// (0x000573e9) listscroll_pinb_pane

0xa837,	// (0x000573f8) pinb_bg_pane_g1

0x1523,	// (0x0004e0e4) pinb_bg_pane_g2

0x152f,	// (0x0004e0f0) pinb_bg_pane_g3

0x153b,	// (0x0004e0fc) pinb_bg_pane_g4

0x1547,	// (0x0004e108) pinb_bg_pane_g5

0x1553,	// (0x0004e114) pinb_bg_pane_g6

0x155e,	// (0x0004e11f) pinb_bg_pane_g7

0x1569,	// (0x0004e12a) pinb_bg_pane_g8

0x1574,	// (0x0004e135) pinb_bg_pane_g9

0x157e,	// (0x0004e13f) pinb_bg_pane_g10

0x0009,

0xf106,	// (0x0005bcc7) pinb_bg_pane_g

0x159b,	// (0x0004e15c) grid_pinb_pane

0x15a4,	// (0x0004e165) list_pinb_pane

0x15ad,	// (0x0004e16e) scroll_pane_cp01_ParamLimits

0x15ad,	// (0x0004e16e) scroll_pane_cp01

0xa841,	// (0x00057402) find_pinb_pane_g1_ParamLimits

0xa841,	// (0x00057402) find_pinb_pane_g1

0xa859,	// (0x0005741a) find_pinb_pane_t1

0xa86b,	// (0x0005742c) find_pinb_pane_t2

0x0001,

0xf120,	// (0x0005bce1) find_pinb_pane_t

0xa880,	// (0x00057441) input_focus_pane_cp01_ParamLimits

0xa880,	// (0x00057441) input_focus_pane_cp01

0x15bf,	// (0x0004e180) cell_pinb_pane_ParamLimits

0x15bf,	// (0x0004e180) cell_pinb_pane

0x15ea,	// (0x0004e1ab) cell_pinb_pane_g1_ParamLimits

0x15ea,	// (0x0004e1ab) cell_pinb_pane_g1

0xa88c,	// (0x0005744d) cell_pinb_pane_g2_ParamLimits

0xa88c,	// (0x0005744d) cell_pinb_pane_g2

0xa898,	// (0x00057459) cell_pinb_pane_g3_ParamLimits

0xa898,	// (0x00057459) cell_pinb_pane_g3

0x0002,

0xf125,	// (0x0005bce6) cell_pinb_pane_g_ParamLimits

0xf125,	// (0x0005bce6) cell_pinb_pane_g

0xa5b6,	// (0x00057177) grid_highlight_pane_cp01

0x15fd,	// (0x0004e1be) list_pinb_item_pane_ParamLimits

0x15fd,	// (0x0004e1be) list_pinb_item_pane

0xa5b6,	// (0x00057177) list_highlight_pane_cp02

0x1610,	// (0x0004e1d1) list_pinb_item_pane_g1_ParamLimits

0x1610,	// (0x0004e1d1) list_pinb_item_pane_g1

0x161d,	// (0x0004e1de) list_pinb_item_pane_g2_ParamLimits

0x161d,	// (0x0004e1de) list_pinb_item_pane_g2

0x1629,	// (0x0004e1ea) list_pinb_item_pane_g3_ParamLimits

0x1629,	// (0x0004e1ea) list_pinb_item_pane_g3

0x163a,	// (0x0004e1fb) list_pinb_item_pane_g4_ParamLimits

0x163a,	// (0x0004e1fb) list_pinb_item_pane_g4

0x0003,

0xf12c,	// (0x0005bced) list_pinb_item_pane_g_ParamLimits

0xf12c,	// (0x0005bced) list_pinb_item_pane_g

0x1646,	// (0x0004e207) list_pinb_item_pane_t1_ParamLimits

0x1646,	// (0x0004e207) list_pinb_item_pane_t1

0x167b,	// (0x0004e23c) calc_display_pane

0x16a0,	// (0x0004e261) calc_paper_pane

0x16c3,	// (0x0004e284) grid_calc_pane

0xa5b6,	// (0x00057177) bg_list_pane_cp01

0x16f1,	// (0x0004e2b2) clock_g1

0x16f9,	// (0x0004e2ba) clock_g2

0x0001,

0xf135,	// (0x0005bcf6) clock_g

0x1701,	// (0x0004e2c2) clock_t1_ParamLimits

0x1701,	// (0x0004e2c2) clock_t1

0x1716,	// (0x0004e2d7) clock_t2_ParamLimits

0x1716,	// (0x0004e2d7) clock_t2

0x1728,	// (0x0004e2e9) clock_t3_ParamLimits

0x1728,	// (0x0004e2e9) clock_t3

0x173a,	// (0x0004e2fb) clock_t4_ParamLimits

0x173a,	// (0x0004e2fb) clock_t4

0x174c,	// (0x0004e30d) clock_t5_ParamLimits

0x174c,	// (0x0004e30d) clock_t5

0x1761,	// (0x0004e322) clock_t6_ParamLimits

0x1761,	// (0x0004e322) clock_t6

0x1773,	// (0x0004e334) clock_t7_ParamLimits

0x1773,	// (0x0004e334) clock_t7

0x1785,	// (0x0004e346) clock_t8_ParamLimits

0x1785,	// (0x0004e346) clock_t8

0x1799,	// (0x0004e35a) clock_t9_ParamLimits

0x1799,	// (0x0004e35a) clock_t9

0x0008,

0xf13a,	// (0x0005bcfb) clock_t_ParamLimits

0xf13a,	// (0x0005bcfb) clock_t

0xa8a4,	// (0x00057465) popup_clock_analogue_window_cp02

0xa8a4,	// (0x00057465) popup_clock_digital_window_cp01

0xa8ac,	// (0x0005746d) listscroll_help_pane

0xa5b6,	// (0x00057177) phob_pre_status_pane

0xa8b6,	// (0x00057477) grid_qdial_pane

0xa811,	// (0x000573d2) listscroll_mce_pane

0xa811,	// (0x000573d2) bg_notes_pane

0xa8c0,	// (0x00057481) list_notes_pane

0x17ad,	// (0x0004e36e) scroll_pane_cp06

0xa8ce,	// (0x0005748f) bg_calc_paper_pane

0x9ad3,	// (0x00056694) list_calc_pane

0xa8e2,	// (0x000574a3) bg_calc_display_pane

0x17c1,	// (0x0004e382) calc_display_pane_t1

0x17d3,	// (0x0004e394) calc_display_pane_t2

0x9aed,	// (0x000566ae) calc_display_pane_t3

0x0002,

0xf14d,	// (0x0005bd0e) calc_display_pane_t

0x17e5,	// (0x0004e3a6) cell_calc_pane_ParamLimits

0x17e5,	// (0x0004e3a6) cell_calc_pane

0xa8ee,	// (0x000574af) bg_calc_paper_pane_g1

0xa8fa,	// (0x000574bb) bg_calc_paper_pane_g2

0xa906,	// (0x000574c7) bg_calc_paper_pane_g3

0xa912,	// (0x000574d3) bg_calc_paper_pane_g4

0xa91e,	// (0x000574df) bg_calc_paper_pane_g5

0x181a,	// (0x0004e3db) bg_calc_paper_pane_g6

0x1829,	// (0x0004e3ea) bg_calc_paper_pane_g7

0x1838,	// (0x0004e3f9) bg_calc_paper_pane_g8

0x0007,

0xf154,	// (0x0005bd15) bg_calc_paper_pane_g

0x184b,	// (0x0004e40c) calc_bg_paper_pane_g9

0x185e,	// (0x0004e41f) list_calc_item_pane_ParamLimits

0x185e,	// (0x0004e41f) list_calc_item_pane

0xa92a,	// (0x000574eb) list_calc_item_pane_g1

0x9aff,	// (0x000566c0) list_calc_item_pane_t1_ParamLimits

0x9aff,	// (0x000566c0) list_calc_item_pane_t1

0x1873,	// (0x0004e434) list_calc_item_pane_t2_ParamLimits

0x1873,	// (0x0004e434) list_calc_item_pane_t2

0x0001,

0xf165,	// (0x0005bd26) list_calc_item_pane_t_ParamLimits

0xf165,	// (0x0005bd26) list_calc_item_pane_t

0xa937,	// (0x000574f8) cell_calc_pane_g1

0xa941,	// (0x00057502) grid_highlight_pane_cp02

0xa963,	// (0x00057524) bg_calc_display_pane_g1

0x18a5,	// (0x0004e466) bg_calc_display_pane_g2

0xd1cc,	// (0x00059d8d) bg_calc_display_pane_g3

0x0002,

0xf16f,	// (0x0005bd30) bg_calc_display_pane_g

0x18af,	// (0x0004e470) cell_qdial_pane_ParamLimits

0x18af,	// (0x0004e470) cell_qdial_pane

0x18c3,	// (0x0004e484) cell_qdial_pane_g1_ParamLimits

0x18c3,	// (0x0004e484) cell_qdial_pane_g1

0x18d9,	// (0x0004e49a) cell_qdial_pane_g2_ParamLimits

0x18d9,	// (0x0004e49a) cell_qdial_pane_g2

0xa96c,	// (0x0005752d) cell_qdial_pane_g3_ParamLimits

0xa96c,	// (0x0005752d) cell_qdial_pane_g3

0x0003,

0xf176,	// (0x0005bd37) cell_qdial_pane_g_ParamLimits

0xf176,	// (0x0005bd37) cell_qdial_pane_g

0x18ff,	// (0x0004e4c0) cell_qdial_pane_t1_ParamLimits

0x18ff,	// (0x0004e4c0) cell_qdial_pane_t1

0x1917,	// (0x0004e4d8) cell_qdial_pane_t2_ParamLimits

0x1917,	// (0x0004e4d8) cell_qdial_pane_t2

0x192a,	// (0x0004e4eb) cell_qdial_pane_t3_ParamLimits

0x192a,	// (0x0004e4eb) cell_qdial_pane_t3

0x0002,

0xf17f,	// (0x0005bd40) cell_qdial_pane_t_ParamLimits

0xf17f,	// (0x0005bd40) cell_qdial_pane_t

0xa5b6,	// (0x00057177) grid_highlight_pane_cp04

0xa978,	// (0x00057539) thumbnail_qdial_pane_ParamLimits

0xa978,	// (0x00057539) thumbnail_qdial_pane

0xa9d4,	// (0x00057595) list_help_pane

0xa9dd,	// (0x0005759e) scroll_pane_cp02

0xa9e6,	// (0x000575a7) help_list_pane_t1_ParamLimits

0xa9e6,	// (0x000575a7) help_list_pane_t1

0x9b11,	// (0x000566d2) bg_notes_pane_g2

0x9b19,	// (0x000566da) bg_notes_pane_g3

0x9b21,	// (0x000566e2) notes_bg_pane_g1

0x9b29,	// (0x000566ea) notes_bg_pane_g4

0x9b31,	// (0x000566f2) notes_bg_pane_g5

0x9b39,	// (0x000566fa) notes_bg_pane_g6

0x9b41,	// (0x00056702) notes_bg_pane_g7

0x9b49,	// (0x0005670a) notes_bg_pane_g8

0x9b51,	// (0x00056712) notes_bg_pane_g9

0x0006,

0xf19d,	// (0x0005bd5e) notes_bg_pane_g

0x193d,	// (0x0004e4fe) list_notes_text_pane_ParamLimits

0x193d,	// (0x0004e4fe) list_notes_text_pane

0xaa04,	// (0x000575c5) list_notes_text_pane_g1

0x035a,	// (0x0004cf1b) list_notes_text_pane_t1

0x1953,	// (0x0004e514) listscroll_cale_week_pane

0x197f,	// (0x0004e540) bg_cale_heading_pane

0xaa27,	// (0x000575e8) bg_cale_pane_cp01

0x1997,	// (0x0004e558) cale_week_corner_pane

0x19b6,	// (0x0004e577) cale_week_day_heading_pane

0x19d3,	// (0x0004e594) cale_week_scroll_pane_g1

0x19e6,	// (0x0004e5a7) cale_week_scroll_pane_g2

0x19fe,	// (0x0004e5bf) cale_week_scroll_pane_g3

0x1a16,	// (0x0004e5d7) cale_week_scroll_pane_g4

0x1a2e,	// (0x0004e5ef) cale_week_scroll_pane_g5

0x1a4e,	// (0x0004e60f) cale_week_scroll_pane_g6

0x1a6e,	// (0x0004e62f) cale_week_scroll_pane_g7

0x1a8e,	// (0x0004e64f) cale_week_scroll_pane_g8

0x1ab2,	// (0x0004e673) cale_week_scroll_pane_g9

0x1aca,	// (0x0004e68b) cale_week_scroll_pane_g10

0x1ae2,	// (0x0004e6a3) cale_week_scroll_pane_g11

0x1afa,	// (0x0004e6bb) cale_week_scroll_pane_g12

0x1b12,	// (0x0004e6d3) cale_week_scroll_pane_g13

0x1b12,	// (0x0004e6d3) cale_week_scroll_pane_g14

0x1b12,	// (0x0004e6d3) cale_week_scroll_pane_g15

0x000f,

0xf1ac,	// (0x0005bd6d) cale_week_scroll_pane_g

0x1b4e,	// (0x0004e70f) cale_week_time_pane

0x1b72,	// (0x0004e733) grid_cale_week_pane

0xaa56,	// (0x00057617) scroll_pane_cp08

0x1b98,	// (0x0004e759) cell_cale_week_pane_ParamLimits

0x1b98,	// (0x0004e759) cell_cale_week_pane

0x1c26,	// (0x0004e7e7) cale_week_day_heading_pane_t1

0x1c50,	// (0x0004e811) cale_week_day_heading_pane_t2

0x1c7f,	// (0x0004e840) cale_week_day_heading_pane_t3

0x1cae,	// (0x0004e86f) cale_week_day_heading_pane_t4

0x1cdd,	// (0x0004e89e) cale_week_day_heading_pane_t5

0x1d14,	// (0x0004e8d5) cale_week_day_heading_pane_t6

0x1d4b,	// (0x0004e90c) cale_week_day_heading_pane_t7

0x0006,

0xf1cd,	// (0x0005bd8e) cale_week_day_heading_pane_t

0xaa73,	// (0x00057634) bg_cale_side_pane

0x1d75,	// (0x0004e936) cale_week_time_pane_t1

0x1d8f,	// (0x0004e950) cale_week_time_pane_t2

0x1da9,	// (0x0004e96a) cale_week_time_pane_t3

0x1dc3,	// (0x0004e984) cale_week_time_pane_t4

0x1ddd,	// (0x0004e99e) cale_week_time_pane_t5

0x1df7,	// (0x0004e9b8) cale_week_time_pane_t6

0x1e11,	// (0x0004e9d2) cale_week_time_pane_t7

0x1e2b,	// (0x0004e9ec) cale_week_time_pane_t8

0x0007,

0xf1dc,	// (0x0005bd9d) cale_week_time_pane_t

0x1e4b,	// (0x0004ea0c) cell_cale_week_pane_g2

0x1e6f,	// (0x0004ea30) cell_cale_week_pane_g3_ParamLimits

0x1e6f,	// (0x0004ea30) cell_cale_week_pane_g3

0xaa81,	// (0x00057642) grid_highlight_pane_cp07

0xaa89,	// (0x0005764a) listscroll_gms_pane

0xaa93,	// (0x00057654) grid_gms_pane

0xaa9c,	// (0x0005765d) listscroll_gms_pane_g1

0xaaa4,	// (0x00057665) listscroll_gms_pane_g2

0x0001,

0xf1ed,	// (0x0005bdae) listscroll_gms_pane_g

0x1e87,	// (0x0004ea48) scroll_pane_cp010

0x1e92,	// (0x0004ea53) cell_gms_pane_ParamLimits

0x1e92,	// (0x0004ea53) cell_gms_pane

0x1ea4,	// (0x0004ea65) cell_gms_pane_g1

0xaaac,	// (0x0005766d) cell_gms_pane_g2

0xaab4,	// (0x00057675) cell_gms_pane_g3

0xaabd,	// (0x0005767e) cell_gms_pane_g4

0x0003,

0xf1f2,	// (0x0005bdb3) cell_gms_pane_g

0xaac6,	// (0x00057687) grid_highlight_pane_cp09

0x3f8e,	// (0x00050b4f) phob_pre_status_pane_g1

0x3f96,	// (0x00050b57) phob_pre_status_pane_g2

0x3f9e,	// (0x00050b5f) phob_pre_status_pane_g3

0x3fa6,	// (0x00050b67) phob_pre_status_pane_g4

0x0004,

0xf5f0,	// (0x0005c1b1) phob_pre_status_pane_g

0x3fb6,	// (0x00050b77) phob_pre_status_pane_t1

0x3fc4,	// (0x00050b85) phob_pre_status_pane_t2

0x3fd4,	// (0x00050b95) phob_pre_status_pane_t3

0x0002,

0xf5fb,	// (0x0005c1bc) phob_pre_status_pane_t

0xaace,	// (0x0005768f) bg_list_pane_cp05

0x1eb4,	// (0x0004ea75) grid_vorec_pane

0x1ebc,	// (0x0004ea7d) vorec_t1

0x1eca,	// (0x0004ea8b) vorec_t2

0x1ed8,	// (0x0004ea99) vorec_t3

0x1ee6,	// (0x0004eaa7) vorec_t4

0x9805,	// (0x000563c6) vorec_t5

0x9813,	// (0x000563d4) vorec_t6

0x0004,

0xf1fb,	// (0x0005bdbc) vorec_t

0x9821,	// (0x000563e2) wait_bar_pane_cp01

0x1f02,	// (0x0004eac3) cell_vorec_pane_ParamLimits

0x1f02,	// (0x0004eac3) cell_vorec_pane

0x9b59,	// (0x0005671a) cell_vorec_pane_g1

0xa5b6,	// (0x00057177) grid_highlight_pane_cp05

0x1f2d,	// (0x0004eaee) cams_zoom_pane

0x1f3c,	// (0x0004eafd) image_vga_pane

0x1f56,	// (0x0004eb17) main_camera_pane_g1

0x1f68,	// (0x0004eb29) main_camera_pane_g2

0x1f78,	// (0x0004eb39) main_camera_pane_g3

0x1f88,	// (0x0004eb49) main_camera_pane_g4

0x1f98,	// (0x0004eb59) main_camera_pane_g5

0x1fa8,	// (0x0004eb69) main_camera_pane_g6

0x1fb8,	// (0x0004eb79) main_camera_pane_g7

0x0007,

0xf206,	// (0x0005bdc7) main_camera_pane_g

0x1fc8,	// (0x0004eb89) main_camera_pane_t1

0x1fde,	// (0x0004eb9f) main_camera_pane_t2

0x0001,

0xf217,	// (0x0005bdd8) main_camera_pane_t

0x2018,	// (0x0004ebd9) cams_zoom_pane_cp_ParamLimits

0x2018,	// (0x0004ebd9) cams_zoom_pane_cp

0x2040,	// (0x0004ec01) image_cif_pane_ParamLimits

0x2040,	// (0x0004ec01) image_cif_pane

0x207b,	// (0x0004ec3c) image_subqcif_pane

0x2083,	// (0x0004ec44) main_video_pane_g1_ParamLimits

0x2083,	// (0x0004ec44) main_video_pane_g1

0x20a7,	// (0x0004ec68) main_video_pane_g2_ParamLimits

0x20a7,	// (0x0004ec68) main_video_pane_g2

0x20db,	// (0x0004ec9c) main_video_pane_g3_ParamLimits

0x20db,	// (0x0004ec9c) main_video_pane_g3

0x2109,	// (0x0004ecca) main_video_pane_g4_ParamLimits

0x2109,	// (0x0004ecca) main_video_pane_g4

0x2137,	// (0x0004ecf8) main_video_pane_g5_ParamLimits

0x2137,	// (0x0004ecf8) main_video_pane_g5

0xaae2,	// (0x000576a3) main_video_pane_g6_ParamLimits

0xaae2,	// (0x000576a3) main_video_pane_g6

0x0006,

0xf21c,	// (0x0005bddd) main_video_pane_g_ParamLimits

0xf21c,	// (0x0005bddd) main_video_pane_g

0x2160,	// (0x0004ed21) main_video_pane_t1_ParamLimits

0x2160,	// (0x0004ed21) main_video_pane_t1

0xaafc,	// (0x000576bd) cams_zoom_pane_g1

0xab05,	// (0x000576c6) cams_zoom_pane_g2

0xab0e,	// (0x000576cf) cams_zoom_pane_g3

0xab17,	// (0x000576d8) cams_zoom_pane_g4

0x0003,

0xf22b,	// (0x0005bdec) cams_zoom_pane_g

0x21bd,	// (0x0004ed7e) grid_cams_pane

0x21d7,	// (0x0004ed98) linegrid_cams_pane

0x21ea,	// (0x0004edab) cell_cams_pane_ParamLimits

0x21ea,	// (0x0004edab) cell_cams_pane

0xab20,	// (0x000576e1) cams_burst_image_pane

0xab28,	// (0x000576e9) cell_cams_pane_g1

0xa5b6,	// (0x00057177) grid_highlight_pane_cp03

0xa937,	// (0x000574f8) mp_bg_pane_g1

0xa5b6,	// (0x00057177) bg_list_pane_cp03

0xc87b,	// (0x0005943c) bg_mp_pane

0xc883,	// (0x00059444) grid_mp_pane

0xc88b,	// (0x0005944c) media_player_g1

0xc893,	// (0x00059454) media_player_t1

0xc8a1,	// (0x00059462) media_player_t2

0xc8af,	// (0x00059470) media_player_t3

0xc8bd,	// (0x0005947e) media_player_t4

0xc8cb,	// (0x0005948c) media_player_t5

0xc8d9,	// (0x0005949a) media_player_t6

0xc8e7,	// (0x000594a8) media_player_t7

0x0006,

0xf5da,	// (0x0005c19b) media_player_t

0xc8f5,	// (0x000594b6) wait_bar_pane_cp02

0xf5bf,	// (0x0005c180) main_usb_pane_t

0x3f85,	// (0x00050b46) cell_mp_pane

0xa937,	// (0x000574f8) cell_mp_pane_g1

0xa5b6,	// (0x00057177) grid_highlight_pane_cp06

0xab30,	// (0x000576f1) grid_skin_colour_pane

0xab38,	// (0x000576f9) list_highlight_pane_cp03

0x220a,	// (0x0004edcb) skin_g1

0xab40,	// (0x00057701) skin_t1

0xab4f,	// (0x00057710) skin_t2

0x0001,

0xf260,	// (0x0005be21) skin_t

0x2212,	// (0x0004edd3) cell_skin_colour_pane_ParamLimits

0x2212,	// (0x0004edd3) cell_skin_colour_pane

0xab5d,	// (0x0005771e) cell_skin_colour_pane_g1

0x228b,	// (0x0004ee4c) call_video_g1_ParamLimits

0x228b,	// (0x0004ee4c) call_video_g1

0x22a7,	// (0x0004ee68) call_video_g2_ParamLimits

0x22a7,	// (0x0004ee68) call_video_g2

0x0001,

0xf265,	// (0x0005be26) call_video_g_ParamLimits

0xf265,	// (0x0005be26) call_video_g

0x22f9,	// (0x0004eeba) call_video_uplink_pane_cp1_ParamLimits

0x22f9,	// (0x0004eeba) call_video_uplink_pane_cp1

0xab6f,	// (0x00057730) call_video_uplink_pane_cp2

0x2398,	// (0x0004ef59) video_down_crop_pane_ParamLimits

0x2398,	// (0x0004ef59) video_down_crop_pane

0x2481,	// (0x0004f042) video_down_pane_ParamLimits

0x2481,	// (0x0004f042) video_down_pane

0xab77,	// (0x00057738) video_down_subqcif_pane_ParamLimits

0xab77,	// (0x00057738) video_down_subqcif_pane

0xab8f,	// (0x00057750) video_down_subqcif_pane_cp_ParamLimits

0xab8f,	// (0x00057750) video_down_subqcif_pane_cp

0xabb5,	// (0x00057776) im_reading_pane_ParamLimits

0xabb5,	// (0x00057776) im_reading_pane

0x2591,	// (0x0004f152) im_writing_pane_ParamLimits

0x2591,	// (0x0004f152) im_writing_pane

0x25a7,	// (0x0004f168) im_reading_pane_t1

0xabcf,	// (0x00057790) list_im_pane

0xabe0,	// (0x000577a1) scroll_pane_cp07

0x25e1,	// (0x0004f1a2) im_writing_pane_t1_ParamLimits

0x25e1,	// (0x0004f1a2) im_writing_pane_t1

0xabf9,	// (0x000577ba) im_writing_pane_t2_ParamLimits

0xabf9,	// (0x000577ba) im_writing_pane_t2

0x0001,

0xf26f,	// (0x0005be30) im_writing_pane_t_ParamLimits

0xf26f,	// (0x0005be30) im_writing_pane_t

0xa5b6,	// (0x00057177) input_focus_pane_cp04

0xa5b6,	// (0x00057177) input_focus_pane_cp05

0x25f6,	// (0x0004f1b7) list_im_single_pane_ParamLimits

0x25f6,	// (0x0004f1b7) list_im_single_pane

0x260b,	// (0x0004f1cc) list_single_im_pane_t1

0x3f45,	// (0x00050b06) blid_accuracy_pane

0x3f4d,	// (0x00050b0e) blid_compass_pane

0x3f57,	// (0x00050b18) main_location_t1

0x3f67,	// (0x00050b28) main_location_t2

0x3f77,	// (0x00050b38) main_location_t3

0x0002,

0xf5e9,	// (0x0005c1aa) main_location_t

0xa5b6,	// (0x00057177) aid_levels_location

0xa937,	// (0x000574f8) blid_accuracy_pane_g1

0xa937,	// (0x000574f8) blid_accuracy_pane_g2

0x0001,

0xf2d1,	// (0x0005be92) blid_accuracy_pane_g

0xac41,	// (0x00057802) wml_content_pane

0xac7f,	// (0x00057840) wml_button_pane_ParamLimits

0xac7f,	// (0x00057840) wml_button_pane

0x261a,	// (0x0004f1db) wml_list_single_large_pane_ParamLimits

0x261a,	// (0x0004f1db) wml_list_single_large_pane

0x262f,	// (0x0004f1f0) wml_list_single_medium_pane_ParamLimits

0x262f,	// (0x0004f1f0) wml_list_single_medium_pane

0x2646,	// (0x0004f207) wml_list_single_small_pane_ParamLimits

0x2646,	// (0x0004f207) wml_list_single_small_pane

0xac93,	// (0x00057854) wml_selection_box_pane_ParamLimits

0xac93,	// (0x00057854) wml_selection_box_pane

0xaca6,	// (0x00057867) wml_list_single_pane_t1

0xacb5,	// (0x00057876) wml_list_single_medium_pane_t1

0xacc4,	// (0x00057885) wml_list_single_large_pane_t1

0xacd3,	// (0x00057894) input_focus_pane_cp02_ParamLimits

0xacd3,	// (0x00057894) input_focus_pane_cp02

0xace6,	// (0x000578a7) wml_selection_box_pane_g1

0xacef,	// (0x000578b0) wml_selection_box_pane_t1_ParamLimits

0xacef,	// (0x000578b0) wml_selection_box_pane_t1

0xa811,	// (0x000573d2) bg_wml_button_pane_ParamLimits

0xa811,	// (0x000573d2) bg_wml_button_pane

0xad07,	// (0x000578c8) wml_button_pane_g1

0xad0f,	// (0x000578d0) wml_button_pane_t1

0xad07,	// (0x000578c8) wml_button_bg_pane_g1

0xad1f,	// (0x000578e0) wml_button_bg_pane_g2

0xad27,	// (0x000578e8) wml_button_bg_pane_g3

0xad2f,	// (0x000578f0) wml_button_bg_pane_g4

0xad37,	// (0x000578f8) wml_button_bg_pane_g5

0xad3f,	// (0x00057900) wml_button_bg_pane_g6

0xad47,	// (0x00057908) wml_button_bg_pane_g7

0xad4f,	// (0x00057910) wml_button_bg_pane_g8

0xad57,	// (0x00057918) wml_button_bg_pane_g9

0x0008,

0xf274,	// (0x0005be35) wml_button_bg_pane_g

0x265f,	// (0x0004f220) bg_list_pane_cp02

0xad5f,	// (0x00057920) mce_header_pane_ParamLimits

0xad5f,	// (0x00057920) mce_header_pane

0xad75,	// (0x00057936) mce_icon_pane

0xad75,	// (0x00057936) mce_image_pane

0xad7e,	// (0x0005793f) mce_text_pane_ParamLimits

0xad7e,	// (0x0005793f) mce_text_pane

0x2667,	// (0x0004f228) scroll_pane_cp03

0xac77,	// (0x00057838) scroll_pane_cp04

0xad91,	// (0x00057952) scroll_pane_cp05_ParamLimits

0xad91,	// (0x00057952) scroll_pane_cp05

0x2671,	// (0x0004f232) mce_header_field_pane_ParamLimits

0x2671,	// (0x0004f232) mce_header_field_pane

0x2688,	// (0x0004f249) mce_header_field_pane_2_ParamLimits

0x2688,	// (0x0004f249) mce_header_field_pane_2

0x269e,	// (0x0004f25f) mce_header_field_pane_3

0x26a6,	// (0x0004f267) list_single_mce_message_pane_ParamLimits

0x26a6,	// (0x0004f267) list_single_mce_message_pane

0x26bc,	// (0x0004f27d) list_single_mce_smart_pane_ParamLimits

0x26bc,	// (0x0004f27d) list_single_mce_smart_pane

0xad9d,	// (0x0005795e) input_focus_pane_cp03

0xada6,	// (0x00057967) list_header_data_pane

0x26dd,	// (0x0004f29e) mce_header_field_pane_t1

0x26ed,	// (0x0004f2ae) list_single_mce_header_pane_ParamLimits

0x26ed,	// (0x0004f2ae) list_single_mce_header_pane

0xadae,	// (0x0005796f) list_single_mce_header_pane_t1

0xadbd,	// (0x0005797e) list_single_mce_message_pane_g1

0xadc5,	// (0x00057986) list_single_mce_message_pane_t1

0x2727,	// (0x0004f2e8) bg_cale_heading_pane_cp01_ParamLimits

0x2727,	// (0x0004f2e8) bg_cale_heading_pane_cp01

0xadd3,	// (0x00057994) bg_cale_pane_cp02_ParamLimits

0xadd3,	// (0x00057994) bg_cale_pane_cp02

0x2761,	// (0x0004f322) cale_month_corner_pane

0x2780,	// (0x0004f341) cale_month_day_heading_pane_ParamLimits

0x2780,	// (0x0004f341) cale_month_day_heading_pane

0x27d2,	// (0x0004f393) cale_month_pane_g1_ParamLimits

0x27d2,	// (0x0004f393) cale_month_pane_g1

0x2801,	// (0x0004f3c2) cale_month_pane_g2_ParamLimits

0x2801,	// (0x0004f3c2) cale_month_pane_g2

0x2831,	// (0x0004f3f2) cale_month_pane_g3_ParamLimits

0x2831,	// (0x0004f3f2) cale_month_pane_g3

0x286d,	// (0x0004f42e) cale_month_pane_g4_ParamLimits

0x286d,	// (0x0004f42e) cale_month_pane_g4

0x28a9,	// (0x0004f46a) cale_month_pane_g5_ParamLimits

0x28a9,	// (0x0004f46a) cale_month_pane_g5

0x28f1,	// (0x0004f4b2) cale_month_pane_g6_ParamLimits

0x28f1,	// (0x0004f4b2) cale_month_pane_g6

0x293d,	// (0x0004f4fe) cale_month_pane_g7_ParamLimits

0x293d,	// (0x0004f4fe) cale_month_pane_g7

0x298d,	// (0x0004f54e) cale_month_pane_g8_ParamLimits

0x298d,	// (0x0004f54e) cale_month_pane_g8

0x29e1,	// (0x0004f5a2) cale_month_pane_g9_ParamLimits

0x29e1,	// (0x0004f5a2) cale_month_pane_g9

0x2a33,	// (0x0004f5f4) cale_month_pane_g10_ParamLimits

0x2a33,	// (0x0004f5f4) cale_month_pane_g10

0x2a85,	// (0x0004f646) cale_month_pane_g11_ParamLimits

0x2a85,	// (0x0004f646) cale_month_pane_g11

0x2ad7,	// (0x0004f698) cale_month_pane_g12_ParamLimits

0x2ad7,	// (0x0004f698) cale_month_pane_g12

0x2b29,	// (0x0004f6ea) cale_month_pane_g13_ParamLimits

0x2b29,	// (0x0004f6ea) cale_month_pane_g13

0x000c,

0xf287,	// (0x0005be48) cale_month_pane_g_ParamLimits

0xf287,	// (0x0005be48) cale_month_pane_g

0x2b7b,	// (0x0004f73c) cale_month_week_pane

0x2b9f,	// (0x0004f760) grid_cale_month_pane_ParamLimits

0x2b9f,	// (0x0004f760) grid_cale_month_pane

0x2be8,	// (0x0004f7a9) cale_month_day_heading_pane_t1

0x2c2a,	// (0x0004f7eb) cale_month_day_heading_pane_t2

0x2c5f,	// (0x0004f820) cale_month_day_heading_pane_t3

0x2c94,	// (0x0004f855) cale_month_day_heading_pane_t4

0x2cd1,	// (0x0004f892) cale_month_day_heading_pane_t5

0x2d16,	// (0x0004f8d7) cale_month_day_heading_pane_t6

0x2d5b,	// (0x0004f91c) cale_month_day_heading_pane_t7

0x0006,

0xf2a2,	// (0x0005be63) cale_month_day_heading_pane_t

0xaa73,	// (0x00057634) bg_cale_side_pane_cp01

0x2da8,	// (0x0004f969) cale_month_week_pane_t1

0x2dc1,	// (0x0004f982) cale_month_week_pane_t2

0x2dda,	// (0x0004f99b) cale_month_week_pane_t3

0x2df3,	// (0x0004f9b4) cale_month_week_pane_t4

0x2e0c,	// (0x0004f9cd) cale_month_week_pane_t5

0x2e25,	// (0x0004f9e6) cale_month_week_pane_t6

0x0005,

0xf2b1,	// (0x0005be72) cale_month_week_pane_t

0x2e3e,	// (0x0004f9ff) cell_cale_month_pane_ParamLimits

0x2e3e,	// (0x0004f9ff) cell_cale_month_pane

0x9b63,	// (0x00056724) cell_cale_month_pane_g1

0x2f6c,	// (0x0004fb2d) cell_cale_month_pane_t1_ParamLimits

0x2f6c,	// (0x0004fb2d) cell_cale_month_pane_t1

0xaa81,	// (0x00057642) grid_highlight_pane_cp08

0xa937,	// (0x000574f8) main_smil_g1

0x2f98,	// (0x0004fb59) smil_status_pane

0xae12,	// (0x000579d3) smil_text_pane

0xc75b,	// (0x0005931c) bg_popup_call3_rect_pane_g8

0xc763,	// (0x00059324) bg_popup_call3_rect_pane_g9

0x0008,

0xf56a,	// (0x0005c12b) bg_popup_call3_rect_pane_g

0xc9ea,	// (0x000595ab) smil_status_volume_pane_g1

0xae1c,	// (0x000579dd) smil_status_pane_t1

0x9cb5,	// (0x00056876) volume_smil_pane

0xae33,	// (0x000579f4) list_smil_text_pane

0x2fad,	// (0x0004fb6e) scroll_pane_cp011

0x2fb8,	// (0x0004fb79) smil_text_list_pane_t1_ParamLimits

0x2fb8,	// (0x0004fb79) smil_text_list_pane_t1

0x9b6f,	// (0x00056730) aid_volume_smil_ParamLimits

0x9b6f,	// (0x00056730) aid_volume_smil

0xa937,	// (0x000574f8) smil_volume_pane_g1

0xa937,	// (0x000574f8) smil_volume_pane_g2

0x0001,

0xf2d1,	// (0x0005be92) smil_volume_pane_g

0x1953,	// (0x0004e514) listscroll_cale_day_pane

0xae3d,	// (0x000579fe) bg_cale_pane

0xae55,	// (0x00057a16) list_cale_pane

0xae78,	// (0x00057a39) scroll_pane_cp09

0xae89,	// (0x00057a4a) cale_bg_pane_g1

0xae91,	// (0x00057a52) cale_bg_pane_g2

0xae99,	// (0x00057a5a) cale_bg_pane_g3

0xaea1,	// (0x00057a62) cale_bg_pane_g4

0xaea9,	// (0x00057a6a) cale_bg_pane_g5

0xaeb1,	// (0x00057a72) cale_bg_pane_g6

0xaeb9,	// (0x00057a7a) cale_bg_pane_g7

0xaec1,	// (0x00057a82) cale_bg_pane_g8

0xaec9,	// (0x00057a8a) cale_bg_pane_g9

0x0008,

0xf2d6,	// (0x0005be97) cale_bg_pane_g

0x3004,	// (0x0004fbc5) list_cale_time_pane_ParamLimits

0x3004,	// (0x0004fbc5) list_cale_time_pane

0xaed1,	// (0x00057a92) list_cale_time_pane_g1_ParamLimits

0xaed1,	// (0x00057a92) list_cale_time_pane_g1

0xaedd,	// (0x00057a9e) list_cale_time_pane_g2_ParamLimits

0xaedd,	// (0x00057a9e) list_cale_time_pane_g2

0x301a,	// (0x0004fbdb) list_cale_time_pane_g3_ParamLimits

0x301a,	// (0x0004fbdb) list_cale_time_pane_g3

0x3028,	// (0x0004fbe9) list_cale_time_pane_g4_ParamLimits

0x3028,	// (0x0004fbe9) list_cale_time_pane_g4

0x3036,	// (0x0004fbf7) list_cale_time_pane_g5_ParamLimits

0x3036,	// (0x0004fbf7) list_cale_time_pane_g5

0x0005,

0xf2e9,	// (0x0005beaa) list_cale_time_pane_g_ParamLimits

0xf2e9,	// (0x0005beaa) list_cale_time_pane_g

0xaef7,	// (0x00057ab8) list_cale_time_pane_t1_ParamLimits

0xaef7,	// (0x00057ab8) list_cale_time_pane_t1

0xaf2d,	// (0x00057aee) list_cale_time_pane_t2_ParamLimits

0xaf2d,	// (0x00057aee) list_cale_time_pane_t2

0x32e7,	// (0x0004fea8) aid_blid_cardinal_pane

0x3325,	// (0x0004fee6) compass_pane_t4

0xaf55,	// (0x00057b16) list_cale_time_pane_t4_ParamLimits

0xaf55,	// (0x00057b16) list_cale_time_pane_t4

0x3333,	// (0x0004fef4) compass_pane_t5

0x3341,	// (0x0004ff02) compass_pane_t6

0x334f,	// (0x0004ff10) compass_pane_t7

0xb3d9,	// (0x00057f9a) navi_pane_cc_t1

0xb5b6,	// (0x00058177) aid_phob_thumbnail_center_pane

0x395b,	// (0x0005051c) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2f6,	// (0x0005beb7) list_cale_time_pane_t_ParamLimits

0xf2f6,	// (0x0005beb7) list_cale_time_pane_t

0x9919,	// (0x000564da) bg_popup_window_pane_cp02_ParamLimits

0x9919,	// (0x000564da) bg_popup_window_pane_cp02

0xaf7d,	// (0x00057b3e) heading_pane_cp01_ParamLimits

0xaf7d,	// (0x00057b3e) heading_pane_cp01

0xaf89,	// (0x00057b4a) loc_req_pane_ParamLimits

0xaf89,	// (0x00057b4a) loc_req_pane

0xaf99,	// (0x00057b5a) loc_type_pane_ParamLimits

0xaf99,	// (0x00057b5a) loc_type_pane

0xafab,	// (0x00057b6c) loc_type_pane_t1_ParamLimits

0xafab,	// (0x00057b6c) loc_type_pane_t1

0xafbd,	// (0x00057b7e) loc_type_pane_t2_ParamLimits

0xafbd,	// (0x00057b7e) loc_type_pane_t2

0xafcf,	// (0x00057b90) loc_type_pane_t3_ParamLimits

0xafcf,	// (0x00057b90) loc_type_pane_t3

0x0002,

0xf2fd,	// (0x0005bebe) loc_type_pane_t_ParamLimits

0xf2fd,	// (0x0005bebe) loc_type_pane_t

0xafe1,	// (0x00057ba2) list_loc_req_pane

0xafeb,	// (0x00057bac) scroll_pane_cp012

0x3044,	// (0x0004fc05) list_single_loc_request_popup_menu_pane_ParamLimits

0x3044,	// (0x0004fc05) list_single_loc_request_popup_menu_pane

0xaff6,	// (0x00057bb7) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xaff6,	// (0x00057bb7) list_single_loc_request_popup_menu_pane_g1

0xb002,	// (0x00057bc3) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xb002,	// (0x00057bc3) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf304,	// (0x0005bec5) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf304,	// (0x0005bec5) list_single_loc_request_popup_menu_pane_g

0xb00e,	// (0x00057bcf) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xb00e,	// (0x00057bcf) list_single_loc_request_popup_menu_pane_t1

0xa811,	// (0x000573d2) bg_popup_window_pane_cp03_ParamLimits

0xa811,	// (0x000573d2) bg_popup_window_pane_cp03

0xb024,	// (0x00057be5) heading_loc_req_pane_ParamLimits

0xb024,	// (0x00057be5) heading_loc_req_pane

0x3051,	// (0x0004fc12) popup_dyc_status_message_window_g1_ParamLimits

0x3051,	// (0x0004fc12) popup_dyc_status_message_window_g1

0x3065,	// (0x0004fc26) popup_dyc_status_message_window_t1_ParamLimits

0x3065,	// (0x0004fc26) popup_dyc_status_message_window_t1

0x307a,	// (0x0004fc3b) popup_dyc_status_message_window_t2_ParamLimits

0x307a,	// (0x0004fc3b) popup_dyc_status_message_window_t2

0x308f,	// (0x0004fc50) popup_dyc_status_message_window_t3_ParamLimits

0x308f,	// (0x0004fc50) popup_dyc_status_message_window_t3

0x0002,

0xf309,	// (0x0005beca) popup_dyc_status_message_window_t_ParamLimits

0xf309,	// (0x0005beca) popup_dyc_status_message_window_t

0xa5b6,	// (0x00057177) bg_heading_pane_cp01

0xb030,	// (0x00057bf1) heading_loc_req_pane_g1

0xb038,	// (0x00057bf9) heading_loc_req_pane_g2

0xb040,	// (0x00057c01) heading_loc_req_pane_g3

0x0002,

0xf310,	// (0x0005bed1) heading_loc_req_pane_g

0xb048,	// (0x00057c09) heading_loc_req_pane_t1

0xb057,	// (0x00057c18) bg_popup_sub_pane_cp01_ParamLimits

0xb057,	// (0x00057c18) bg_popup_sub_pane_cp01

0xb065,	// (0x00057c26) popup_cale_events_window_g1_ParamLimits

0xb065,	// (0x00057c26) popup_cale_events_window_g1

0xb085,	// (0x00057c46) popup_cale_events_window_g2_ParamLimits

0xb085,	// (0x00057c46) popup_cale_events_window_g2

0x0001,

0xf344,	// (0x0005bf05) popup_cale_events_window_g_ParamLimits

0xf344,	// (0x0005bf05) popup_cale_events_window_g

0xb0a5,	// (0x00057c66) popup_cale_events_window_t1_ParamLimits

0xb0a5,	// (0x00057c66) popup_cale_events_window_t1

0xb0b7,	// (0x00057c78) popup_cale_events_window_t2_ParamLimits

0xb0b7,	// (0x00057c78) popup_cale_events_window_t2

0xb0f5,	// (0x00057cb6) popup_cale_events_window_t3_ParamLimits

0xb0f5,	// (0x00057cb6) popup_cale_events_window_t3

0xb12f,	// (0x00057cf0) popup_cale_events_window_t4_ParamLimits

0xb12f,	// (0x00057cf0) popup_cale_events_window_t4

0x0003,

0xf349,	// (0x0005bf0a) popup_cale_events_window_t_ParamLimits

0xf349,	// (0x0005bf0a) popup_cale_events_window_t

0x30b7,	// (0x0004fc78) call_type_pane

0x30c7,	// (0x0004fc88) popup_call_status_window_g1

0x30db,	// (0x0004fc9c) popup_call_status_window_g2

0x30ef,	// (0x0004fcb0) popup_call_status_window_g3

0x0002,

0xf352,	// (0x0005bf13) popup_call_status_window_g

0xb165,	// (0x00057d26) call_type_pane_g1

0xb16e,	// (0x00057d2f) call_type_pane_g2

0x0001,

0xf359,	// (0x0005bf1a) call_type_pane_g

0xa5b6,	// (0x00057177) bg_popup_sub_pane_cp02

0xb177,	// (0x00057d38) listscroll_popup_wml_pane

0xb17f,	// (0x00057d40) list_wml_pane

0xb189,	// (0x00057d4a) scroll_pane_cp013

0xb194,	// (0x00057d55) list_single_graphic_popup_wml_pane_ParamLimits

0xb194,	// (0x00057d55) list_single_graphic_popup_wml_pane

0xa937,	// (0x000574f8) list_single_graphic_popup_wml_pane_g1

0xb1a8,	// (0x00057d69) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf35e,	// (0x0005bf1f) list_single_graphic_popup_wml_pane_g

0xb1b0,	// (0x00057d71) list_single_graphic_popup_wml_pane_t1

0xb1c6,	// (0x00057d87) aid_call_pane

0xa809,	// (0x000573ca) popup_clock_analogue_window_g1

0xa809,	// (0x000573ca) popup_clock_analogue_window_g2

0x9b91,	// (0x00056752) popup_clock_analogue_window_g3

0x9b91,	// (0x00056752) popup_clock_analogue_window_g4

0xa937,	// (0x000574f8) popup_clock_analogue_window_g5

0x0004,

0xf363,	// (0x0005bf24) popup_clock_analogue_window_g

0x9b99,	// (0x0005675a) popup_clock_analogue_window_t1

0x9ba7,	// (0x00056768) clock_digital_number_pane_ParamLimits

0x9ba7,	// (0x00056768) clock_digital_number_pane

0x9bb3,	// (0x00056774) clock_digital_number_pane_cp02_ParamLimits

0x9bb3,	// (0x00056774) clock_digital_number_pane_cp02

0x9bbf,	// (0x00056780) clock_digital_number_pane_cp03_ParamLimits

0x9bbf,	// (0x00056780) clock_digital_number_pane_cp03

0x9bcb,	// (0x0005678c) clock_digital_number_pane_cp04_ParamLimits

0x9bcb,	// (0x0005678c) clock_digital_number_pane_cp04

0x9bd7,	// (0x00056798) clock_digital_separator_pane_ParamLimits

0x9bd7,	// (0x00056798) clock_digital_separator_pane

0x9be3,	// (0x000567a4) popup_clock_digital_window_t1

0xa937,	// (0x000574f8) clock_digital_number_pane_g1

0xa937,	// (0x000574f8) clock_digital_number_pane_g2

0x0001,

0xf2d1,	// (0x0005be92) clock_digital_number_pane_g

0xa937,	// (0x000574f8) clock_digital_separator_pane_g1

0xa937,	// (0x000574f8) clock_digital_separator_pane_g2

0x0001,

0xf2d1,	// (0x0005be92) clock_digital_separator_pane_g

0xa5b6,	// (0x00057177) bg_popup_window_pane_cp04

0xb1ce,	// (0x00057d8f) heading_pane_cp03

0xb1d6,	// (0x00057d97) listscroll_popup_gms_pane

0xb1de,	// (0x00057d9f) grid_large_graphic_popup_pane

0xb1e8,	// (0x00057da9) listscroll_popup_gms_pane_g1

0xb1f0,	// (0x00057db1) listscroll_popup_gms_pane_g2

0x0001,

0xf36e,	// (0x0005bf2f) listscroll_popup_gms_pane_g

0xac77,	// (0x00057838) scroll_pane_cp014

0x30fe,	// (0x0004fcbf) cell_large_graphic_popup_pane_ParamLimits

0x30fe,	// (0x0004fcbf) cell_large_graphic_popup_pane

0x3116,	// (0x0004fcd7) cell_large_graphic_popup_pane_g1_ParamLimits

0x3116,	// (0x0004fcd7) cell_large_graphic_popup_pane_g1

0xb1f8,	// (0x00057db9) cell_large_graphic_popup_pane_g2_ParamLimits

0xb1f8,	// (0x00057db9) cell_large_graphic_popup_pane_g2

0xb204,	// (0x00057dc5) cell_large_graphic_popup_pane_g3_ParamLimits

0xb204,	// (0x00057dc5) cell_large_graphic_popup_pane_g3

0xb211,	// (0x00057dd2) cell_large_graphic_popup_pane_g4_ParamLimits

0xb211,	// (0x00057dd2) cell_large_graphic_popup_pane_g4

0x0003,

0xf373,	// (0x0005bf34) cell_large_graphic_popup_pane_g_ParamLimits

0xf373,	// (0x0005bf34) cell_large_graphic_popup_pane_g

0xb221,	// (0x00057de2) grid_highlight_pane_cp010

0xa937,	// (0x000574f8) bg_popup_call_pane_g1

0xb22b,	// (0x00057dec) list_single_graphic_popup_conf_pane_ParamLimits

0xb22b,	// (0x00057dec) list_single_graphic_popup_conf_pane

0xb23e,	// (0x00057dff) list_highlight_pane_cp01

0xb247,	// (0x00057e08) list_single_graphic_popup_conf_pane_g1

0xb24f,	// (0x00057e10) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf37c,	// (0x0005bf3d) list_single_graphic_popup_conf_pane_g

0xb257,	// (0x00057e18) list_single_graphic_popup_conf_pane_t1

0xb265,	// (0x00057e26) linegrid_cams_pane_g1

0x3122,	// (0x0004fce3) linegrid_cams_pane_g2

0xaab4,	// (0x00057675) linegrid_cams_pane_g3

0xb26e,	// (0x00057e2f) linegrid_cams_pane_g4

0x312b,	// (0x0004fcec) linegrid_cams_pane_g5

0x3134,	// (0x0004fcf5) linegrid_cams_pane_g6

0xaabd,	// (0x0005767e) linegrid_cams_pane_g7

0x0006,

0xf381,	// (0x0005bf42) linegrid_cams_pane_g

0xb277,	// (0x00057e38) popup_clock_analogue_window

0xb277,	// (0x00057e38) popup_clock_digital_window

0xa5b6,	// (0x00057177) popup_phob_thumbnail_window

0xa937,	// (0x000574f8) call_video_uplink_pane_g1

0xb280,	// (0x00057e41) call_video_uplink_pane_g2

0x0001,

0xf390,	// (0x0005bf51) call_video_uplink_pane_g

0xb288,	// (0x00057e49) video_uplink_pane

0xb290,	// (0x00057e51) mce_image_pane_g1

0x313f,	// (0x0004fd00) mce_image_pane_g2

0x3147,	// (0x0004fd08) mce_image_pane_g3

0x314f,	// (0x0004fd10) mce_image_pane_g4

0x3159,	// (0x0004fd1a) mce_image_pane_g5

0x0004,

0xf395,	// (0x0005bf56) mce_image_pane_g

0xb29a,	// (0x00057e5b) control_top_pane_stacon_cp01_ParamLimits

0xb29a,	// (0x00057e5b) control_top_pane_stacon_cp01

0xb2ae,	// (0x00057e6f) uni_indicator_pane_stacon_cp01_ParamLimits

0xb2ae,	// (0x00057e6f) uni_indicator_pane_stacon_cp01

0xb2bf,	// (0x00057e80) bg_popup_sub_pane_cp03

0x3161,	// (0x0004fd22) chi_dic_find_pane

0x3169,	// (0x0004fd2a) listscroll_chi_dic_pane

0x3172,	// (0x0004fd33) main_pane_chidic_g1

0x3185,	// (0x0004fd46) chi_dic_find_pane_t1

0xb2c9,	// (0x00057e8a) find_chidic_pane

0xb2d2,	// (0x00057e93) chi_dic_list_pane_ParamLimits

0xb2d2,	// (0x00057e93) chi_dic_list_pane

0xb2e3,	// (0x00057ea4) scroll_pane_cp020

0x3193,	// (0x0004fd54) find_chidic_pane_t1

0xa5b6,	// (0x00057177) input_focus_pane_cp06

0x31a2,	// (0x0004fd63) list_chi_dic_pane_ParamLimits

0x31a2,	// (0x0004fd63) list_chi_dic_pane

0x31b4,	// (0x0004fd75) list_chi_dic_pane_t1_ParamLimits

0x31b4,	// (0x0004fd75) list_chi_dic_pane_t1

0xa5b6,	// (0x00057177) list_highlight_pane_cp020

0xb2eb,	// (0x00057eac) bg_cale_heading_pane_g1

0x31c7,	// (0x0004fd88) bg_cale_heading_pane_g2

0x31cf,	// (0x0004fd90) bg_cale_heading_pane_g3

0x31d7,	// (0x0004fd98) bg_cale_heading_pane_g4

0x31e1,	// (0x0004fda2) bg_cale_heading_pane_g5

0x31eb,	// (0x0004fdac) bg_cale_heading_pane_g6

0x31f3,	// (0x0004fdb4) bg_cale_heading_pane_g7

0x31fb,	// (0x0004fdbc) bg_cale_heading_pane_g8

0x3205,	// (0x0004fdc6) bg_cale_heading_pane_g9

0x0008,

0xf3a0,	// (0x0005bf61) bg_cale_heading_pane_g

0xb2eb,	// (0x00057eac) bg_cale_side_pane_g1

0x320f,	// (0x0004fdd0) bg_cale_side_pane_g2

0x3217,	// (0x0004fdd8) bg_cale_side_pane_g3

0x321f,	// (0x0004fde0) bg_cale_side_pane_g4

0x3227,	// (0x0004fde8) bg_cale_side_pane_g5

0x322f,	// (0x0004fdf0) bg_cale_side_pane_g6

0x3237,	// (0x0004fdf8) bg_cale_side_pane_g7

0x323f,	// (0x0004fe00) bg_cale_side_pane_g8

0x3247,	// (0x0004fe08) bg_cale_side_pane_g9

0x0008,

0xf3b3,	// (0x0005bf74) bg_cale_side_pane_g

0x324f,	// (0x0004fe10) popup_call_status_window_ParamLimits

0x324f,	// (0x0004fe10) popup_call_status_window

0xb2f3,	// (0x00057eb4) stacon_top_pane

0xb2fb,	// (0x00057ebc) status_pane_ParamLimits

0xb2fb,	// (0x00057ebc) status_pane

0xb310,	// (0x00057ed1) status_small_pane

0xb318,	// (0x00057ed9) control_pane

0xa5b6,	// (0x00057177) stacon_bottom_pane

0xb320,	// (0x00057ee1) list_single_mce_smart_pane_t1_ParamLimits

0xb320,	// (0x00057ee1) list_single_mce_smart_pane_t1

0xb333,	// (0x00057ef4) list_single_mce_smart_pane_t2_ParamLimits

0xb333,	// (0x00057ef4) list_single_mce_smart_pane_t2

0x0001,

0xf3c6,	// (0x0005bf87) list_single_mce_smart_pane_t_ParamLimits

0xf3c6,	// (0x0005bf87) list_single_mce_smart_pane_t

0x3296,	// (0x0004fe57) compass_pane

0x329f,	// (0x0004fe60) main_location2_pane_t1

0x32b1,	// (0x0004fe72) main_location2_pane_t2

0x32c3,	// (0x0004fe84) main_location2_pane_t3

0x0003,

0xf3cb,	// (0x0005bf8c) main_location2_pane_t

0xb352,	// (0x00057f13) compass_pane_g1_ParamLimits

0xb352,	// (0x00057f13) compass_pane_g1

0x3307,	// (0x0004fec8) compass_pane_t1

0x3316,	// (0x0004fed7) compass_pane_t2

0x0005,

0xf3d4,	// (0x0005bf95) compass_pane_t

0x335d,	// (0x0004ff1e) text_secondary_cp61

0xb3d0,	// (0x00057f91) navi_pane_cams_g5

0xb44c,	// (0x0005800d) navi_pane_im_t1

0xb45a,	// (0x0005801b) navi_pane_mp_g1_ParamLimits

0xb45a,	// (0x0005801b) navi_pane_mp_g1

0xb46e,	// (0x0005802f) navi_pane_mp_g2_ParamLimits

0xb46e,	// (0x0005802f) navi_pane_mp_g2

0xb47a,	// (0x0005803b) navi_pane_mp_g3_ParamLimits

0xb47a,	// (0x0005803b) navi_pane_mp_g3

0x0002,

0xf3e8,	// (0x0005bfa9) navi_pane_mp_g_ParamLimits

0xf3e8,	// (0x0005bfa9) navi_pane_mp_g

0xb486,	// (0x00058047) navi_pane_mp_t1

0xb494,	// (0x00058055) navi_pane_mp_t2

0x0002,

0xf3ef,	// (0x0005bfb0) navi_pane_mp_t

0xb4ff,	// (0x000580c0) navi_pane_vt_g1

0xb486,	// (0x00058047) navi_pane_vt_t1

0xb507,	// (0x000580c8) navi_slider_pane

0xaace,	// (0x0005768f) zooming_pane

0xb517,	// (0x000580d8) navi_slider_pane_g1

0x9c00,	// (0x000567c1) navi_slider_pane_g2

0x0006,

0xf3f6,	// (0x0005bfb7) navi_slider_pane_g

0xb53b,	// (0x000580fc) aid_levels_zoom

0xb543,	// (0x00058104) zooming_pane_g1

0xb54b,	// (0x0005810c) zooming_pane_g2

0xb54b,	// (0x0005810c) zooming_pane_g3

0x0002,

0xf405,	// (0x0005bfc6) zooming_pane_g

0xb553,	// (0x00058114) level_10_zoom

0xb55c,	// (0x0005811d) level_11_zoom

0xb565,	// (0x00058126) level_1_zoom

0xb56e,	// (0x0005812f) level_2_zoom

0xb577,	// (0x00058138) level_3_zoom

0xb580,	// (0x00058141) level_4_zoom

0xb589,	// (0x0005814a) level_5_zoom

0xb592,	// (0x00058153) level_6_zoom

0xb59b,	// (0x0005815c) level_7_zoom

0xb5a4,	// (0x00058165) level_8_zoom

0xb5ad,	// (0x0005816e) level_9_zoom

0xb5be,	// (0x0005817f) popup_phob_thumbnail_window_g1

0xb5c6,	// (0x00058187) popup_phob_thumbnail_window_g2

0x0001,

0xf40c,	// (0x0005bfcd) popup_phob_thumbnail_window_g

0xc8fd,	// (0x000594be) level_1_location

0xc905,	// (0x000594c6) level_2_location

0xc90d,	// (0x000594ce) level_3_location

0xc915,	// (0x000594d6) level_4_location

0xaace,	// (0x0005768f) level_5_location

0x33ae,	// (0x0004ff6f) mce_icon_pane_g1

0x33b8,	// (0x0004ff79) mce_icon_pane_g2

0x0001,

0xf411,	// (0x0005bfd2) mce_icon_pane_g

0x33c0,	// (0x0004ff81) main_mup_pane_g1_ParamLimits

0x33c0,	// (0x0004ff81) main_mup_pane_g1

0x33d6,	// (0x0004ff97) main_mup_pane_g2_ParamLimits

0x33d6,	// (0x0004ff97) main_mup_pane_g2

0x33e8,	// (0x0004ffa9) main_mup_pane_g3_ParamLimits

0x33e8,	// (0x0004ffa9) main_mup_pane_g3

0x33fa,	// (0x0004ffbb) main_mup_pane_g4_ParamLimits

0x33fa,	// (0x0004ffbb) main_mup_pane_g4

0x3412,	// (0x0004ffd3) main_mup_pane_g5_ParamLimits

0x3412,	// (0x0004ffd3) main_mup_pane_g5

0x342e,	// (0x0004ffef) main_mup_pane_g6_ParamLimits

0x342e,	// (0x0004ffef) main_mup_pane_g6

0x3446,	// (0x00050007) main_mup_pane_g7_ParamLimits

0x3446,	// (0x00050007) main_mup_pane_g7

0x345e,	// (0x0005001f) main_mup_pane_g8_ParamLimits

0x345e,	// (0x0005001f) main_mup_pane_g8

0x3476,	// (0x00050037) main_mup_pane_g9_ParamLimits

0x3476,	// (0x00050037) main_mup_pane_g9

0x3490,	// (0x00050051) main_mup_pane_g10_ParamLimits

0x3490,	// (0x00050051) main_mup_pane_g10

0x34aa,	// (0x0005006b) main_mup_pane_g11_ParamLimits

0x34aa,	// (0x0005006b) main_mup_pane_g11

0x34be,	// (0x0005007f) main_mup_pane_g12_ParamLimits

0x34be,	// (0x0005007f) main_mup_pane_g12

0x34d4,	// (0x00050095) main_mup_pane_g13_ParamLimits

0x34d4,	// (0x00050095) main_mup_pane_g13

0x000c,

0xf416,	// (0x0005bfd7) main_mup_pane_g_ParamLimits

0xf416,	// (0x0005bfd7) main_mup_pane_g

0x34e8,	// (0x000500a9) main_mup_pane_t1_ParamLimits

0x34e8,	// (0x000500a9) main_mup_pane_t1

0x3502,	// (0x000500c3) main_mup_pane_t2_ParamLimits

0x3502,	// (0x000500c3) main_mup_pane_t2

0x351a,	// (0x000500db) main_mup_pane_t3_ParamLimits

0x351a,	// (0x000500db) main_mup_pane_t3

0x3532,	// (0x000500f3) main_mup_pane_t4_ParamLimits

0x3532,	// (0x000500f3) main_mup_pane_t4

0x3550,	// (0x00050111) main_mup_pane_t5_ParamLimits

0x3550,	// (0x00050111) main_mup_pane_t5

0x3565,	// (0x00050126) main_mup_pane_t6_ParamLimits

0x3565,	// (0x00050126) main_mup_pane_t6

0x0005,

0xf431,	// (0x0005bff2) main_mup_pane_t_ParamLimits

0xf431,	// (0x0005bff2) main_mup_pane_t

0x3577,	// (0x00050138) mup_progress_pane_ParamLimits

0x3577,	// (0x00050138) mup_progress_pane

0x3583,	// (0x00050144) mup_visualizer_pane_ParamLimits

0x3583,	// (0x00050144) mup_visualizer_pane

0x35b7,	// (0x00050178) mup_volume_pane_ParamLimits

0x35b7,	// (0x00050178) mup_volume_pane

0xb5ce,	// (0x0005818f) mup_visualizer_pane_g1_ParamLimits

0xb5ce,	// (0x0005818f) mup_visualizer_pane_g1

0xb5ce,	// (0x0005818f) mup_visualizer_pane_g2_ParamLimits

0xb5ce,	// (0x0005818f) mup_visualizer_pane_g2

0xb352,	// (0x00057f13) mup_visualizer_pane_g3_ParamLimits

0xb352,	// (0x00057f13) mup_visualizer_pane_g3

0x0002,

0xf43e,	// (0x0005bfff) mup_visualizer_pane_g_ParamLimits

0xf43e,	// (0x0005bfff) mup_visualizer_pane_g

0xa937,	// (0x000574f8) mup_volume_pane_g1

0xb5e4,	// (0x000581a5) mup_volume_pane_g2

0x0001,

0xf445,	// (0x0005c006) mup_volume_pane_g

0xa937,	// (0x000574f8) mup_progress_pane_g1

0xb5ed,	// (0x000581ae) mup_progress_pane_g2

0xb5f6,	// (0x000581b7) mup_progress_pane_g3

0x0002,

0xf44a,	// (0x0005c00b) mup_progress_pane_g

0xa5b6,	// (0x00057177) bg_popup_window_pane_cp05

0xb5ff,	// (0x000581c0) heading_pane_cp02_ParamLimits

0xb5ff,	// (0x000581c0) heading_pane_cp02

0xb619,	// (0x000581da) list_popup_blid_pane

0xb621,	// (0x000581e2) list_blid_sat_info_pane_ParamLimits

0xb621,	// (0x000581e2) list_blid_sat_info_pane

0xb634,	// (0x000581f5) list_blid_sat_info_pane_g1

0xb63c,	// (0x000581fd) list_blid_sat_info_pane_t1

0x36cd,	// (0x0005028e) mup_equalizer_pane_ParamLimits

0x36cd,	// (0x0005028e) mup_equalizer_pane

0x36e6,	// (0x000502a7) mup_equalizer_pane_cp1_ParamLimits

0x36e6,	// (0x000502a7) mup_equalizer_pane_cp1

0x3703,	// (0x000502c4) mup_equalizer_pane_cp2_ParamLimits

0x3703,	// (0x000502c4) mup_equalizer_pane_cp2

0x3720,	// (0x000502e1) mup_equalizer_pane_cp3_ParamLimits

0x3720,	// (0x000502e1) mup_equalizer_pane_cp3

0x3741,	// (0x00050302) mup_equalizer_pane_cp4_ParamLimits

0x3741,	// (0x00050302) mup_equalizer_pane_cp4

0x3762,	// (0x00050323) mup_equalizer_pane_cp5

0x3776,	// (0x00050337) mup_equalizer_pane_cp6

0x378a,	// (0x0005034b) mup_equalizer_pane_cp7

0xc7db,	// (0x0005939c) bg_popup_call_poc_act_pane_g9

0xc7e3,	// (0x000593a4) bg_popup_call_poc_act_pane_g10

0xc7eb,	// (0x000593ac) bg_popup_call_poc_act_pane_g11

0x000a,

0xa811,	// (0x000573d2) mup_scale_pane

0xa937,	// (0x000574f8) mup_scale_pane_g1

0xb64a,	// (0x0005820b) mup_scale_pane_g2

0x0006,

0xf466,	// (0x0005c027) mup_scale_pane_g

0xb66e,	// (0x0005822f) msg_data_pane

0xb676,	// (0x00058237) scroll_pane_cp017

0x0579,	// (0x0004d13a) bg_list_pane_cp04_ParamLimits

0x0579,	// (0x0004d13a) bg_list_pane_cp04

0xb67e,	// (0x0005823f) msg_data_pane_g1

0x37b8,	// (0x00050379) msg_data_pane_g2

0x37c0,	// (0x00050381) msg_data_pane_g3

0x37c8,	// (0x00050389) msg_data_pane_g4

0x37d0,	// (0x00050391) msg_data_pane_g5

0x37d8,	// (0x00050399) msg_data_pane_g6

0x37e0,	// (0x000503a1) msg_data_pane_g7

0x0006,

0xf475,	// (0x0005c036) msg_data_pane_g

0x0591,	// (0x0004d152) msg_text_pane_ParamLimits

0x0591,	// (0x0004d152) msg_text_pane

0x37e8,	// (0x000503a9) qrid_highlight_pane_cp011_ParamLimits

0x37e8,	// (0x000503a9) qrid_highlight_pane_cp011

0xa5b6,	// (0x00057177) msg_body_pane

0xa5b6,	// (0x00057177) msg_header_pane

0xb68f,	// (0x00058250) input_focus_pane_cp07

0x37fe,	// (0x000503bf) msg_header_pane_t1_ParamLimits

0x37fe,	// (0x000503bf) msg_header_pane_t1

0x3810,	// (0x000503d1) msg_header_pane_t2_ParamLimits

0x3810,	// (0x000503d1) msg_header_pane_t2

0x0001,

0xf489,	// (0x0005c04a) msg_header_pane_t_ParamLimits

0xf489,	// (0x0005c04a) msg_header_pane_t

0xb6a4,	// (0x00058265) msg_body_pane_g1

0x3822,	// (0x000503e3) msg_body_pane_t1_ParamLimits

0x3822,	// (0x000503e3) msg_body_pane_t1

0x3853,	// (0x00050414) msg_body_pane_t2_ParamLimits

0x3853,	// (0x00050414) msg_body_pane_t2

0x3865,	// (0x00050426) msg_body_pane_t3_ParamLimits

0x3865,	// (0x00050426) msg_body_pane_t3

0x0002,

0xf48e,	// (0x0005c04f) msg_body_pane_t_ParamLimits

0xf48e,	// (0x0005c04f) msg_body_pane_t

0x38b1,	// (0x00050472) main_viewer_pane_g1_ParamLimits

0x38b1,	// (0x00050472) main_viewer_pane_g1

0x38bf,	// (0x00050480) main_viewer_pane_g2_ParamLimits

0x38bf,	// (0x00050480) main_viewer_pane_g2

0x38cd,	// (0x0005048e) main_viewer_pane_g3_ParamLimits

0x38cd,	// (0x0005048e) main_viewer_pane_g3

0x38dc,	// (0x0005049d) main_viewer_pane_g4_ParamLimits

0x38dc,	// (0x0005049d) main_viewer_pane_g4

0x9c2a,	// (0x000567eb) main_viewer_pane_g5_ParamLimits

0x9c2a,	// (0x000567eb) main_viewer_pane_g5

0x9c2a,	// (0x000567eb) main_viewer_pane_g7_ParamLimits

0x9c2a,	// (0x000567eb) main_viewer_pane_g7

0x9c3c,	// (0x000567fd) main_viewer_pane_g8_ParamLimits

0x9c3c,	// (0x000567fd) main_viewer_pane_g8

0x0007,

0xf49e,	// (0x0005c05f) main_viewer_pane_g_ParamLimits

0xf49e,	// (0x0005c05f) main_viewer_pane_g

0xb6ac,	// (0x0005826d) viewer_content_pane_ParamLimits

0xb6ac,	// (0x0005826d) viewer_content_pane

0x3918,	// (0x000504d9) main_postcard_pane_g1_ParamLimits

0x3918,	// (0x000504d9) main_postcard_pane_g1

0x392e,	// (0x000504ef) main_postcard_pane_g2_ParamLimits

0x392e,	// (0x000504ef) main_postcard_pane_g2

0x3944,	// (0x00050505) main_postcard_pane_g3_ParamLimits

0x3944,	// (0x00050505) main_postcard_pane_g3

0x0005,

0xf4af,	// (0x0005c070) main_postcard_pane_g_ParamLimits

0xf4af,	// (0x0005c070) main_postcard_pane_g

0x395b,	// (0x0005051c) main_postcard_pane_g4

0xc9fd,	// (0x000595be) smil_status_volume_pane_g2

0x399e,	// (0x0005055f) postcard_pane_ParamLimits

0x399e,	// (0x0005055f) postcard_pane

0xb6ba,	// (0x0005827b) postcard_pane_g1_ParamLimits

0xb6ba,	// (0x0005827b) postcard_pane_g1

0x39e0,	// (0x000505a1) postcard_pane_g2_ParamLimits

0x39e0,	// (0x000505a1) postcard_pane_g2

0x39ec,	// (0x000505ad) postcard_pane_g3_ParamLimits

0x39ec,	// (0x000505ad) postcard_pane_g3

0xb6c8,	// (0x00058289) postcard_pane_g4_ParamLimits

0xb6c8,	// (0x00058289) postcard_pane_g4

0x39f8,	// (0x000505b9) postcard_pane_g5_ParamLimits

0x39f8,	// (0x000505b9) postcard_pane_g5

0x3a0d,	// (0x000505ce) postcard_pane_g6_ParamLimits

0x3a0d,	// (0x000505ce) postcard_pane_g6

0xb6ba,	// (0x0005827b) postcard_pane_g7_ParamLimits

0xb6ba,	// (0x0005827b) postcard_pane_g7

0x0006,

0xf4bc,	// (0x0005c07d) postcard_pane_g_ParamLimits

0xf4bc,	// (0x0005c07d) postcard_pane_g

0x3a21,	// (0x000505e2) main_mp2_pane_g1_ParamLimits

0x3a21,	// (0x000505e2) main_mp2_pane_g1

0x3a2d,	// (0x000505ee) main_mp2_pane_g2_ParamLimits

0x3a2d,	// (0x000505ee) main_mp2_pane_g2

0x3a39,	// (0x000505fa) main_mp2_pane_g3_ParamLimits

0x3a39,	// (0x000505fa) main_mp2_pane_g3

0x0002,

0xf4cb,	// (0x0005c08c) main_mp2_pane_g_ParamLimits

0xf4cb,	// (0x0005c08c) main_mp2_pane_g

0x3a45,	// (0x00050606) main_mp2_pane_t1_ParamLimits

0x3a45,	// (0x00050606) main_mp2_pane_t1

0x3a5a,	// (0x0005061b) main_mp2_pane_t2_ParamLimits

0x3a5a,	// (0x0005061b) main_mp2_pane_t2

0x3a6c,	// (0x0005062d) main_mp2_pane_t3_ParamLimits

0x3a6c,	// (0x0005062d) main_mp2_pane_t3

0x0002,

0xf4d2,	// (0x0005c093) main_mp2_pane_t_ParamLimits

0xf4d2,	// (0x0005c093) main_mp2_pane_t

0xb6d6,	// (0x00058297) pec_content_pane_ParamLimits

0xb6d6,	// (0x00058297) pec_content_pane

0xac77,	// (0x00057838) scroll_pane_cp015

0xb6e8,	// (0x000582a9) pec_attribute_pane_ParamLimits

0xb6e8,	// (0x000582a9) pec_attribute_pane

0x3a7e,	// (0x0005063f) pec_content_pane_g1_ParamLimits

0x3a7e,	// (0x0005063f) pec_content_pane_g1

0xb6f8,	// (0x000582b9) pec_content_pane_t1_ParamLimits

0xb6f8,	// (0x000582b9) pec_content_pane_t1

0xb70a,	// (0x000582cb) pec_content_pane_t2_ParamLimits

0xb70a,	// (0x000582cb) pec_content_pane_t2

0x0001,

0xf4d9,	// (0x0005c09a) pec_content_pane_t_ParamLimits

0xf4d9,	// (0x0005c09a) pec_content_pane_t

0x3a8a,	// (0x0005064b) list_single_graphic_pane_cp01_ParamLimits

0x3a8a,	// (0x0005064b) list_single_graphic_pane_cp01

0xa811,	// (0x000573d2) bg_popup_sub_pane_cp04

0xb71c,	// (0x000582dd) popup_mup_playback_window_g1

0xb728,	// (0x000582e9) popup_mup_playback_window_t1

0xb73d,	// (0x000582fe) popup_mup_playback_window_t2

0x0001,

0xf4de,	// (0x0005c09f) popup_mup_playback_window_t

0xb774,	// (0x00058335) main_image_pane_g1_ParamLimits

0xb774,	// (0x00058335) main_image_pane_g1

0xb7b7,	// (0x00058378) scroll_pane_cp018_ParamLimits

0xb7b7,	// (0x00058378) scroll_pane_cp018

0xb7cf,	// (0x00058390) scroll_pane_cp016_ParamLimits

0xb7cf,	// (0x00058390) scroll_pane_cp016

0x3b58,	// (0x00050719) smil2_image_pane_ParamLimits

0x3b58,	// (0x00050719) smil2_image_pane

0x3b88,	// (0x00050749) smil2_root_pane_ParamLimits

0x3b88,	// (0x00050749) smil2_root_pane

0x3bc0,	// (0x00050781) smil2_text_pane_ParamLimits

0x3bc0,	// (0x00050781) smil2_text_pane

0xa5b6,	// (0x00057177) bg_list_pane_cp06

0xb80b,	// (0x000583cc) grid_radio_pane

0xa5b6,	// (0x00057177) bg_popup_window_pane_cp06

0xb813,	// (0x000583d4) main_fmradio_pane_t1

0xb1ce,	// (0x00057d8f) heading_pane_cp04

0xb821,	// (0x000583e2) main_fmradio_pane_t2

0xc833,	// (0x000593f4) popup_cale_lunar_info_window_g1

0xb82f,	// (0x000583f0) main_fmradio_pane_t3

0xc83b,	// (0x000593fc) popup_cale_lunar_info_window_g2

0xb83d,	// (0x000583fe) main_fmradio_pane_t4

0x0001,

0xb84b,	// (0x0005840c) main_fmradio_pane_t5

0x0004,

0xf5cc,	// (0x0005c18d) popup_cale_lunar_info_window_g

0xf4f3,	// (0x0005c0b4) main_fmradio_pane_t

0xb859,	// (0x0005841a) wait_bar_pane_cp03

0xb861,	// (0x00058422) cell_fmradio_pane_ParamLimits

0xb861,	// (0x00058422) cell_fmradio_pane

0xb6ba,	// (0x0005827b) cell_fmradio_pane_g1_ParamLimits

0xb6ba,	// (0x0005827b) cell_fmradio_pane_g1

0xa5b6,	// (0x00057177) grid_highlight_pane_cp011

0xb874,	// (0x00058435) poc_content_pane_ParamLimits

0xb874,	// (0x00058435) poc_content_pane

0xb886,	// (0x00058447) scroll_pane_cp019

0x3c40,	// (0x00050801) popup_call_poc_act_window_ParamLimits

0x3c40,	// (0x00050801) popup_call_poc_act_window

0x3c64,	// (0x00050825) popup_call_poc_inact_window_ParamLimits

0x3c64,	// (0x00050825) popup_call_poc_inact_window

0xf590,	// (0x0005c151) bg_popup_call_poc_act_pane_g

0xc7f3,	// (0x000593b4) bg_popup_call_poc_inact_pane_g1

0xc7fb,	// (0x000593bc) bg_popup_call_poc_inact_pane_g2

0xb88e,	// (0x0005844f) popup_call_poc_act_window_g2

0xc803,	// (0x000593c4) bg_popup_call_poc_inact_pane_g3

0xc783,	// (0x00059344) bg_popup_call_poc_inact_pane_g4

0xc80b,	// (0x000593cc) bg_popup_call_poc_inact_pane_g5

0xb896,	// (0x00058457) popup_call_poc_act_window_t1_ParamLimits

0xb896,	// (0x00058457) popup_call_poc_act_window_t1

0xb8be,	// (0x0005847f) popup_call_poc_act_window_t2_ParamLimits

0xb8be,	// (0x0005847f) popup_call_poc_act_window_t2

0xb8e6,	// (0x000584a7) popup_call_poc_act_window_t3_ParamLimits

0xb8e6,	// (0x000584a7) popup_call_poc_act_window_t3

0xb90e,	// (0x000584cf) popup_call_poc_act_window_t4_ParamLimits

0xb90e,	// (0x000584cf) popup_call_poc_act_window_t4

0x0003,

0xf4fe,	// (0x0005c0bf) popup_call_poc_act_window_t_ParamLimits

0xf4fe,	// (0x0005c0bf) popup_call_poc_act_window_t

0xc813,	// (0x000593d4) bg_popup_call_poc_inact_pane_g6

0xc81b,	// (0x000593dc) bg_popup_call_poc_inact_pane_g7

0xc823,	// (0x000593e4) bg_popup_call_poc_inact_pane_g8

0xb920,	// (0x000584e1) popup_call_poc_inact_window_g2

0xc82b,	// (0x000593ec) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5a7,	// (0x0005c168) bg_popup_call_poc_inact_pane_g

0xb928,	// (0x000584e9) popup_call_poc_inact_window_t1_ParamLimits

0xb928,	// (0x000584e9) popup_call_poc_inact_window_t1

0xb93d,	// (0x000584fe) popup_call_poc_inact_window_t2_ParamLimits

0xb93d,	// (0x000584fe) popup_call_poc_inact_window_t2

0xb952,	// (0x00058513) popup_call_poc_inact_window_t3_ParamLimits

0xb952,	// (0x00058513) popup_call_poc_inact_window_t3

0x0002,

0xf507,	// (0x0005c0c8) popup_call_poc_inact_window_t_ParamLimits

0xf507,	// (0x0005c0c8) popup_call_poc_inact_window_t

0xc970,	// (0x00059531) context_pane_ParamLimits

0x448c,	// (0x0005104d) signal_pane_ParamLimits

0xaace,	// (0x0005768f) main_call2_pane

0x9c81,	// (0x00056842) popup_phob_thumbnail2_window_ParamLimits

0x9c81,	// (0x00056842) popup_phob_thumbnail2_window

0x9c12,	// (0x000567d3) aid_hotspot_pointer_arrow_pane

0x9c1a,	// (0x000567db) aid_hotspot_pointer_hand_pane

0x3fae,	// (0x00050b6f) phob_pre_status_pane_g5

0x1f2d,	// (0x0004eaee) cams_zoom_pane_ParamLimits

0x1f3c,	// (0x0004eafd) image_vga_pane_ParamLimits

0x1f56,	// (0x0004eb17) main_camera_pane_g1_ParamLimits

0x1f68,	// (0x0004eb29) main_camera_pane_g2_ParamLimits

0x1f78,	// (0x0004eb39) main_camera_pane_g3_ParamLimits

0x1f88,	// (0x0004eb49) main_camera_pane_g4_ParamLimits

0x1f98,	// (0x0004eb59) main_camera_pane_g5_ParamLimits

0x1fa8,	// (0x0004eb69) main_camera_pane_g6_ParamLimits

0x1fb8,	// (0x0004eb79) main_camera_pane_g7_ParamLimits

0xf206,	// (0x0005bdc7) main_camera_pane_g_ParamLimits

0x1fc8,	// (0x0004eb89) main_camera_pane_t1_ParamLimits

0x1fde,	// (0x0004eb9f) main_camera_pane_t2_ParamLimits

0xf217,	// (0x0005bdd8) main_camera_pane_t_ParamLimits

0xa811,	// (0x000573d2) bg_popup_preview_window_pane_cp01_ParamLimits

0xa811,	// (0x000573d2) bg_popup_preview_window_pane_cp01

0xb967,	// (0x00058528) popup_phob_thumbnail2_window_g1_ParamLimits

0xb967,	// (0x00058528) popup_phob_thumbnail2_window_g1

0xa5b6,	// (0x00057177) call2_cli_visual_pane

0x3c98,	// (0x00050859) popup_call2_audio_conf_window_ParamLimits

0x3c98,	// (0x00050859) popup_call2_audio_conf_window

0x3cb8,	// (0x00050879) popup_call2_audio_first_window_ParamLimits

0x3cb8,	// (0x00050879) popup_call2_audio_first_window

0x3d4e,	// (0x0005090f) popup_call2_audio_in_window_ParamLimits

0x3d4e,	// (0x0005090f) popup_call2_audio_in_window

0x3d96,	// (0x00050957) popup_call2_audio_out_window_ParamLimits

0x3d96,	// (0x00050957) popup_call2_audio_out_window

0x3e00,	// (0x000509c1) popup_call2_audio_second_window_ParamLimits

0x3e00,	// (0x000509c1) popup_call2_audio_second_window

0x3e66,	// (0x00050a27) popup_call2_audio_wait_window_ParamLimits

0x3e66,	// (0x00050a27) popup_call2_audio_wait_window

0xa5b6,	// (0x00057177) bg_popup_call2_act_pane_cp03

0xa7f3,	// (0x000573b4) list_conf_pane_cp

0xb973,	// (0x00058534) popup_call2_audio_conf_window_t1

0xb981,	// (0x00058542) list_single_graphic_popup_conf2_pane_ParamLimits

0xb981,	// (0x00058542) list_single_graphic_popup_conf2_pane

0xb23e,	// (0x00057dff) list_highlight_pane_cp04

0xb994,	// (0x00058555) list_single_graphic_popup_conf2_pane_g1

0xb24f,	// (0x00057e10) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf50e,	// (0x0005c0cf) list_single_graphic_popup_conf2_pane_g

0xb99e,	// (0x0005855f) list_single_graphic_popup_conf2_pane_t1

0xb9ac,	// (0x0005856d) bg_popup_call2_act_pane_cp01_ParamLimits

0xb9ac,	// (0x0005856d) bg_popup_call2_act_pane_cp01

0xba36,	// (0x000585f7) call_type_pane_cp05_ParamLimits

0xba36,	// (0x000585f7) call_type_pane_cp05

0xba8a,	// (0x0005864b) popup_call2_audio_second_window_g1_ParamLimits

0xba8a,	// (0x0005864b) popup_call2_audio_second_window_g1

0xbade,	// (0x0005869f) popup_call2_audio_second_window_g2_ParamLimits

0xbade,	// (0x0005869f) popup_call2_audio_second_window_g2

0x0002,

0xf513,	// (0x0005c0d4) popup_call2_audio_second_window_g_ParamLimits

0xf513,	// (0x0005c0d4) popup_call2_audio_second_window_g

0xbb43,	// (0x00058704) popup_call2_audio_second_window_t1_ParamLimits

0xbb43,	// (0x00058704) popup_call2_audio_second_window_t1

0xbbfe,	// (0x000587bf) popup_call2_audio_second_window_t2_ParamLimits

0xbbfe,	// (0x000587bf) popup_call2_audio_second_window_t2

0xbc51,	// (0x00058812) popup_call2_audio_second_window_t3_ParamLimits

0xbc51,	// (0x00058812) popup_call2_audio_second_window_t3

0x0003,

0xf51a,	// (0x0005c0db) popup_call2_audio_second_window_t_ParamLimits

0xf51a,	// (0x0005c0db) popup_call2_audio_second_window_t

0xa5b6,	// (0x00057177) bg_popup_call2_in_pane_cp02

0xa5c0,	// (0x00057181) call_type_pane_cp04

0xa5c8,	// (0x00057189) popup_call2_audio_wait_window_g1

0xa5d0,	// (0x00057191) popup_call2_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x0005bcb6) popup_call2_audio_wait_window_g

0xa5d8,	// (0x00057199) popup_call2_audio_wait_window_t3

0xbd44,	// (0x00058905) bg_popup_call2_act_pane_ParamLimits

0xbd44,	// (0x00058905) bg_popup_call2_act_pane

0xbe04,	// (0x000589c5) call_type_pane_cp03_ParamLimits

0xbe04,	// (0x000589c5) call_type_pane_cp03

0xbe68,	// (0x00058a29) popup_call2_audio_first_window_g1_ParamLimits

0xbe68,	// (0x00058a29) popup_call2_audio_first_window_g1

0xbed8,	// (0x00058a99) popup_call2_audio_first_window_g2_ParamLimits

0xbed8,	// (0x00058a99) popup_call2_audio_first_window_g2

0xb5ce,	// (0x0005818f) popup_call2_audio_first_window_g3_ParamLimits

0xb5ce,	// (0x0005818f) popup_call2_audio_first_window_g3

0x0004,

0xf523,	// (0x0005c0e4) popup_call2_audio_first_window_g_ParamLimits

0xf523,	// (0x0005c0e4) popup_call2_audio_first_window_g

0xbfb6,	// (0x00058b77) popup_call2_audio_first_window_t1_ParamLimits

0xbfb6,	// (0x00058b77) popup_call2_audio_first_window_t1

0xc0b9,	// (0x00058c7a) popup_call2_audio_first_window_t4_ParamLimits

0xc0b9,	// (0x00058c7a) popup_call2_audio_first_window_t4

0xc19c,	// (0x00058d5d) popup_call2_audio_first_window_t5_ParamLimits

0xc19c,	// (0x00058d5d) popup_call2_audio_first_window_t5

0x0003,

0xf52e,	// (0x0005c0ef) popup_call2_audio_first_window_t_ParamLimits

0xf52e,	// (0x0005c0ef) popup_call2_audio_first_window_t

0xa809,	// (0x000573ca) bg_popup_call2_act_pane_g1

0xc843,	// (0x00059404) popup_cale_lunar_info_window_t1

0xc851,	// (0x00059412) popup_cale_lunar_info_window_t2

0xc85f,	// (0x00059420) popup_cale_lunar_info_window_t3

0xa5b6,	// (0x00057177) bg_popup_call2_bubble_pane

0xc29d,	// (0x00058e5e) bg_popup_call2_in_pane_cp01_ParamLimits

0xc29d,	// (0x00058e5e) bg_popup_call2_in_pane_cp01

0x999e,	// (0x0005655f) call_type_pane_cp02

0xc2e5,	// (0x00058ea6) popup_call2_audio_out_window_g1_ParamLimits

0xc2e5,	// (0x00058ea6) popup_call2_audio_out_window_g1

0xc311,	// (0x00058ed2) popup_call2_audio_out_window_g2_ParamLimits

0xc311,	// (0x00058ed2) popup_call2_audio_out_window_g2

0xc339,	// (0x00058efa) popup_call2_audio_out_window_g3_ParamLimits

0xc339,	// (0x00058efa) popup_call2_audio_out_window_g3

0x0003,

0xf537,	// (0x0005c0f8) popup_call2_audio_out_window_g_ParamLimits

0xf537,	// (0x0005c0f8) popup_call2_audio_out_window_g

0xc374,	// (0x00058f35) popup_call2_audio_out_window_t1_ParamLimits

0xc374,	// (0x00058f35) popup_call2_audio_out_window_t1

0xc3d3,	// (0x00058f94) popup_call2_audio_out_window_t2_ParamLimits

0xc3d3,	// (0x00058f94) popup_call2_audio_out_window_t2

0xc427,	// (0x00058fe8) popup_call2_audio_out_window_t3_ParamLimits

0xc427,	// (0x00058fe8) popup_call2_audio_out_window_t3

0xc43d,	// (0x00058ffe) popup_call2_audio_out_window_t4_ParamLimits

0xc43d,	// (0x00058ffe) popup_call2_audio_out_window_t4

0xc453,	// (0x00059014) popup_call2_audio_out_window_t5_ParamLimits

0xc453,	// (0x00059014) popup_call2_audio_out_window_t5

0x0005,

0xf540,	// (0x0005c101) popup_call2_audio_out_window_t_ParamLimits

0xf540,	// (0x0005c101) popup_call2_audio_out_window_t

0xc4b7,	// (0x00059078) bg_popup_call2_in_pane_ParamLimits

0xc4b7,	// (0x00059078) bg_popup_call2_in_pane

0xc513,	// (0x000590d4) popup_call2_audio_in_window_g1_ParamLimits

0xc513,	// (0x000590d4) popup_call2_audio_in_window_g1

0xc54b,	// (0x0005910c) popup_call2_audio_in_window_g2_ParamLimits

0xc54b,	// (0x0005910c) popup_call2_audio_in_window_g2

0xc583,	// (0x00059144) popup_call2_audio_in_window_g3_ParamLimits

0xc583,	// (0x00059144) popup_call2_audio_in_window_g3

0x0003,

0xf54d,	// (0x0005c10e) popup_call2_audio_in_window_g_ParamLimits

0xf54d,	// (0x0005c10e) popup_call2_audio_in_window_g

0xc5db,	// (0x0005919c) popup_call2_audio_in_window_t1_ParamLimits

0xc5db,	// (0x0005919c) popup_call2_audio_in_window_t1

0xc65b,	// (0x0005921c) popup_call2_audio_in_window_t2_ParamLimits

0xc65b,	// (0x0005921c) popup_call2_audio_in_window_t2

0xc6db,	// (0x0005929c) popup_call2_audio_in_window_t3_ParamLimits

0xc6db,	// (0x0005929c) popup_call2_audio_in_window_t3

0xc6f5,	// (0x000592b6) popup_call2_audio_in_window_t4_ParamLimits

0xc6f5,	// (0x000592b6) popup_call2_audio_in_window_t4

0xc707,	// (0x000592c8) popup_call2_audio_in_window_t5_ParamLimits

0xc707,	// (0x000592c8) popup_call2_audio_in_window_t5

0xc719,	// (0x000592da) popup_call2_audio_in_window_t6_ParamLimits

0xc719,	// (0x000592da) popup_call2_audio_in_window_t6

0x0005,

0xf556,	// (0x0005c117) popup_call2_audio_in_window_t_ParamLimits

0xf556,	// (0x0005c117) popup_call2_audio_in_window_t

0xa809,	// (0x000573ca) bg_popup_call2_in_pane_g1

0xc86d,	// (0x0005942e) popup_cale_lunar_info_window_t4

0x0003,

0xf5d1,	// (0x0005c192) popup_cale_lunar_info_window_t

0xa811,	// (0x000573d2) bg_popup_call2_rect_pane_ParamLimits

0xa811,	// (0x000573d2) bg_popup_call2_rect_pane

0xa5b6,	// (0x00057177) call2_cli_visual_graphic_pane

0xa5b6,	// (0x00057177) call2_cli_visual_text_pane

0x9ca8,	// (0x00056869) smil_status_volume_pane_g3

0x0002,

0xa937,	// (0x000574f8) call2_cli_visual_graphic_pane_g1

0xa937,	// (0x000574f8) call2_cli_visual_graphic_pane_g2

0xa937,	// (0x000574f8) call2_cli_visual_graphic_pane_g3

0x0002,

0xf563,	// (0x0005c124) call2_cli_visual_graphic_pane_g

0xc72b,	// (0x000592ec) bg_popup_call2_rect_pane_g1

0xa9cc,	// (0x0005758d) bg_popup_call2_rect_pane_g2

0xc733,	// (0x000592f4) bg_popup_call2_rect_pane_g3

0xc73b,	// (0x000592fc) bg_popup_call2_rect_pane_g4

0xc743,	// (0x00059304) bg_popup_call2_rect_pane_g5

0xc74b,	// (0x0005930c) bg_popup_call2_rect_pane_g6

0xc753,	// (0x00059314) bg_popup_call2_rect_pane_g7

0xc75b,	// (0x0005931c) bg_popup_call2_rect_pane_g8

0xc763,	// (0x00059324) bg_popup_call2_rect_pane_g9

0x0008,

0xf56a,	// (0x0005c12b) bg_popup_call2_rect_pane_g

0xc76b,	// (0x0005932c) bg_popup_call2_bubble_pane_g1

0xc773,	// (0x00059334) bg_popup_call2_bubble_pane_g2

0xc77b,	// (0x0005933c) bg_popup_call2_bubble_pane_g3

0xc783,	// (0x00059344) bg_popup_call2_bubble_pane_g4

0xc78b,	// (0x0005934c) bg_popup_call2_bubble_pane_g5

0xc793,	// (0x00059354) bg_popup_call2_bubble_pane_g6

0xc79b,	// (0x0005935c) bg_popup_call2_bubble_pane_g7

0xc7a3,	// (0x00059364) bg_popup_call2_bubble_pane_g8

0xc7ab,	// (0x0005936c) bg_popup_call2_bubble_pane_g9

0x0008,

0xf57d,	// (0x0005c13e) bg_popup_call2_bubble_pane_g

0x1965,	// (0x0004e526) aid_cale_week_size_cell_pane

0x1ff4,	// (0x0004ebb5) aid_cams_cif_uncrop_pane_ParamLimits

0x1ff4,	// (0x0004ebb5) aid_cams_cif_uncrop_pane

0x21a9,	// (0x0004ed6a) aid_cams_size_cell_ParamLimits

0x21a9,	// (0x0004ed6a) aid_cams_size_cell

0x21bd,	// (0x0004ed7e) grid_cams_pane_ParamLimits

0x21d7,	// (0x0004ed98) linegrid_cams_pane_ParamLimits

0x22bd,	// (0x0004ee7e) call_video_pane_t1

0x22db,	// (0x0004ee9c) call_video_pane_t2

0x0001,

0xf26a,	// (0x0005be2b) call_video_pane_t

0x2701,	// (0x0004f2c2) aid_cale_month_size_cell_pane_ParamLimits

0x2701,	// (0x0004f2c2) aid_cale_month_size_cell_pane

0xf61a,	// (0x0005c1db) smil_status_volume_pane_g

0x9cb5,	// (0x00056876) volume_smil_pane_ParamLimits

0x9859,	// (0x0005641a) aid_popup2_width_pane

0x18e9,	// (0x0004e4aa) cell_qdial_pane_g4_ParamLimits

0x18e9,	// (0x0004e4aa) cell_qdial_pane_g4

0x32e7,	// (0x0004fea8) aid_blid_cardinal_pane_ParamLimits

0x32f3,	// (0x0004feb4) aid_blid_destination_pane_ParamLimits

0x32f3,	// (0x0004feb4) aid_blid_destination_pane

0xa811,	// (0x000573d2) bg_popup_call_poc_act_pane_ParamLimits

0xa811,	// (0x000573d2) bg_popup_call_poc_act_pane

0xa811,	// (0x000573d2) bg_popup_call_poc_inact_pane_ParamLimits

0xa811,	// (0x000573d2) bg_popup_call_poc_inact_pane

0xc7b3,	// (0x00059374) bg_popup_call_poc_act_pane_g1

0xc7bb,	// (0x0005937c) bg_popup_call_poc_act_pane_g2

0xc7c3,	// (0x00059384) bg_popup_call_poc_act_pane_g3

0xc783,	// (0x00059344) bg_popup_call_poc_act_pane_g4

0xc78b,	// (0x0005934c) bg_popup_call_poc_act_pane_g5

0xc7cb,	// (0x0005938c) bg_popup_call_poc_act_pane_g6

0xc79b,	// (0x0005935c) bg_popup_call_poc_act_pane_g7

0xc7d3,	// (0x00059394) bg_popup_call_poc_act_pane_g8

0xa5b6,	// (0x00057177) main_usb_pane

0x9c5c,	// (0x0005681d) popup_cale_lunar_info_window

0x25a7,	// (0x0004f168) im_reading_pane_t1_ParamLimits

0xabcf,	// (0x00057790) list_im_pane_ParamLimits

0xabe0,	// (0x000577a1) scroll_pane_cp07_ParamLimits

0xa5b6,	// (0x00057177) grid_highlight_pane_cp012

0xa811,	// (0x000573d2) mup_scale_pane_ParamLimits

0xb6ba,	// (0x0005827b) main_usb_pane_g1_ParamLimits

0xb6ba,	// (0x0005827b) main_usb_pane_g1

0x3ec3,	// (0x00050a84) main_usb_pane_g2_ParamLimits

0x3ec3,	// (0x00050a84) main_usb_pane_g2

0x0001,

0xf5ba,	// (0x0005c17b) main_usb_pane_g_ParamLimits

0xf5ba,	// (0x0005c17b) main_usb_pane_g

0x3ed9,	// (0x00050a9a) main_usb_pane_t1_ParamLimits

0x3ed9,	// (0x00050a9a) main_usb_pane_t1

0x3eeb,	// (0x00050aac) main_usb_pane_t2_ParamLimits

0x3eeb,	// (0x00050aac) main_usb_pane_t2

0x3efd,	// (0x00050abe) main_usb_pane_t3_ParamLimits

0x3efd,	// (0x00050abe) main_usb_pane_t3

0x3f0f,	// (0x00050ad0) main_usb_pane_t4_ParamLimits

0x3f0f,	// (0x00050ad0) main_usb_pane_t4

0x3f21,	// (0x00050ae2) main_usb_pane_t5_ParamLimits

0x3f21,	// (0x00050ae2) main_usb_pane_t5

0x3f33,	// (0x00050af4) main_usb_pane_t6_ParamLimits

0x3f33,	// (0x00050af4) main_usb_pane_t6

0x0005,

0xf5bf,	// (0x0005c180) main_usb_pane_t_ParamLimits

0x3296,	// (0x0004fe57) aid_text_placing

0x329f,	// (0x0004fe60) main_location2_pane_t1_ParamLimits

0x32b1,	// (0x0004fe72) main_location2_pane_t2_ParamLimits

0x32c3,	// (0x0004fe84) main_location2_pane_t3_ParamLimits

0x32d5,	// (0x0004fe96) main_location2_pane_t4_ParamLimits

0x32d5,	// (0x0004fe96) main_location2_pane_t4

0xf3cb,	// (0x0005bf8c) main_location2_pane_t_ParamLimits

0xa84d,	// (0x0005740e) find_pinb_pane_g2_ParamLimits

0xa84d,	// (0x0005740e) find_pinb_pane_g2

0x0001,

0xf11b,	// (0x0005bcdc) find_pinb_pane_g_ParamLimits

0xf11b,	// (0x0005bcdc) find_pinb_pane_g

0xa859,	// (0x0005741a) find_pinb_pane_t1_ParamLimits

0xa86b,	// (0x0005742c) find_pinb_pane_t2_ParamLimits

0xf120,	// (0x0005bce1) find_pinb_pane_t_ParamLimits

0xa5b6,	// (0x00057177) main_call3_pane

0x2be8,	// (0x0004f7a9) cale_month_day_heading_pane_t1_ParamLimits

0x2c2a,	// (0x0004f7eb) cale_month_day_heading_pane_t2_ParamLimits

0x2c5f,	// (0x0004f820) cale_month_day_heading_pane_t3_ParamLimits

0x2c94,	// (0x0004f855) cale_month_day_heading_pane_t4_ParamLimits

0x2cd1,	// (0x0004f892) cale_month_day_heading_pane_t5_ParamLimits

0x2d16,	// (0x0004f8d7) cale_month_day_heading_pane_t6_ParamLimits

0x2d5b,	// (0x0004f91c) cale_month_day_heading_pane_t7_ParamLimits

0xf2a2,	// (0x0005be63) cale_month_day_heading_pane_t_ParamLimits

0xae2a,	// (0x000579eb) smil_status_volume_pane

0x39bc,	// (0x0005057d) postcard_address_pane_ParamLimits

0x39bc,	// (0x0005057d) postcard_address_pane

0x39ce,	// (0x0005058f) postcard_message_pane_ParamLimits

0x39ce,	// (0x0005058f) postcard_message_pane

0x3ea0,	// (0x00050a61) call2_cli_visual_pane_t1_ParamLimits

0x3ea0,	// (0x00050a61) call2_cli_visual_pane_t1

0x46bb,	// (0x0005127c) postcard_message_pane_t1_ParamLimits

0x46bb,	// (0x0005127c) postcard_message_pane_t1

0x46a4,	// (0x00051265) postcard_address_pane_t1_ParamLimits

0x46a4,	// (0x00051265) postcard_address_pane_t1

0x4690,	// (0x00051251) popup_call3_audio_in_window_ParamLimits

0x4690,	// (0x00051251) popup_call3_audio_in_window

0x451b,	// (0x000510dc) bg_popup_call3_in_pane_ParamLimits

0x451b,	// (0x000510dc) bg_popup_call3_in_pane

0x4591,	// (0x00051152) popup_call3_audio_in_window_g1_ParamLimits

0x4591,	// (0x00051152) popup_call3_audio_in_window_g1

0x45b1,	// (0x00051172) popup_call3_audio_in_window_g2_ParamLimits

0x45b1,	// (0x00051172) popup_call3_audio_in_window_g2

0x45d1,	// (0x00051192) popup_call3_audio_in_window_g3_ParamLimits

0x45d1,	// (0x00051192) popup_call3_audio_in_window_g3

0x0003,

0xf621,	// (0x0005c1e2) popup_call3_audio_in_window_g_ParamLimits

0xf621,	// (0x0005c1e2) popup_call3_audio_in_window_g

0x4602,	// (0x000511c3) popup_call3_audio_in_window_t1_ParamLimits

0x4602,	// (0x000511c3) popup_call3_audio_in_window_t1

0x4640,	// (0x00051201) popup_call3_audio_in_window_t2_ParamLimits

0x4640,	// (0x00051201) popup_call3_audio_in_window_t2

0x467e,	// (0x0005123f) popup_call3_audio_in_window_t3_ParamLimits

0x467e,	// (0x0005123f) popup_call3_audio_in_window_t3

0x0002,

0xf62a,	// (0x0005c1eb) popup_call3_audio_in_window_t_ParamLimits

0xf62a,	// (0x0005c1eb) popup_call3_audio_in_window_t

0xaace,	// (0x0005768f) bg_popup_call3_rect_pane

0xc72b,	// (0x000592ec) bg_popup_call3_rect_pane_g1

0xa9cc,	// (0x0005758d) bg_popup_call3_rect_pane_g2

0xc733,	// (0x000592f4) bg_popup_call3_rect_pane_g3

0xc73b,	// (0x000592fc) bg_popup_call3_rect_pane_g4

0xc743,	// (0x00059304) bg_popup_call3_rect_pane_g5

0xc74b,	// (0x0005930c) bg_popup_call3_rect_pane_g6

0xc753,	// (0x00059314) bg_popup_call3_rect_pane_g7

0x35cd,	// (0x0005018e) mup_visualizer_osc_pane

0xb5dc,	// (0x0005819d) mup_visualizer_spec_pane

0x454b,	// (0x0005110c) call3_video_qcif_pane_ParamLimits

0x454b,	// (0x0005110c) call3_video_qcif_pane

0x455e,	// (0x0005111f) call3_video_qcif_uncrop_pane_ParamLimits

0x455e,	// (0x0005111f) call3_video_qcif_uncrop_pane

0x456c,	// (0x0005112d) call3_video_subqcif_pane_ParamLimits

0x456c,	// (0x0005112d) call3_video_subqcif_pane

0x4580,	// (0x00051141) call3_video_subqcif_uncrop_pane_ParamLimits

0x4580,	// (0x00051141) call3_video_subqcif_uncrop_pane

0x45f1,	// (0x000511b2) popup_call3_audio_in_window_g4_ParamLimits

0x45f1,	// (0x000511b2) popup_call3_audio_in_window_g4

0x450a,	// (0x000510cb) mup_spec_half_pane

0x4513,	// (0x000510d4) mup_spec_half_pane_cp

0xc9d0,	// (0x00059591) mup_osc_middle_pane

0xc9d9,	// (0x0005959a) mup_visualizer_osc_pane_g1

0x44ea,	// (0x000510ab) mup_spec_bar_pane_ParamLimits

0x44ea,	// (0x000510ab) mup_spec_bar_pane

0xc9bd,	// (0x0005957e) mup_spec_bar_pane_g1

0xc9c7,	// (0x00059588) mup_spec_bar_pane_g2

0x0001,

0xf615,	// (0x0005c1d6) mup_spec_bar_pane_g

0x1965,	// (0x0004e526) aid_cale_week_size_cell_pane_ParamLimits

0x197f,	// (0x0004e540) bg_cale_heading_pane_ParamLimits

0xaa27,	// (0x000575e8) bg_cale_pane_cp01_ParamLimits

0x1997,	// (0x0004e558) cale_week_corner_pane_ParamLimits

0x19b6,	// (0x0004e577) cale_week_day_heading_pane_ParamLimits

0x19d3,	// (0x0004e594) cale_week_scroll_pane_g1_ParamLimits

0x19e6,	// (0x0004e5a7) cale_week_scroll_pane_g2_ParamLimits

0x19fe,	// (0x0004e5bf) cale_week_scroll_pane_g3_ParamLimits

0x1a16,	// (0x0004e5d7) cale_week_scroll_pane_g4_ParamLimits

0x1a2e,	// (0x0004e5ef) cale_week_scroll_pane_g5_ParamLimits

0x1a4e,	// (0x0004e60f) cale_week_scroll_pane_g6_ParamLimits

0x1a6e,	// (0x0004e62f) cale_week_scroll_pane_g7_ParamLimits

0x1a8e,	// (0x0004e64f) cale_week_scroll_pane_g8_ParamLimits

0x1ab2,	// (0x0004e673) cale_week_scroll_pane_g9_ParamLimits

0x1aca,	// (0x0004e68b) cale_week_scroll_pane_g10_ParamLimits

0x1ae2,	// (0x0004e6a3) cale_week_scroll_pane_g11_ParamLimits

0x1afa,	// (0x0004e6bb) cale_week_scroll_pane_g12_ParamLimits

0x1b12,	// (0x0004e6d3) cale_week_scroll_pane_g13_ParamLimits

0x1b12,	// (0x0004e6d3) cale_week_scroll_pane_g14_ParamLimits

0x1b12,	// (0x0004e6d3) cale_week_scroll_pane_g15_ParamLimits

0xf1ac,	// (0x0005bd6d) cale_week_scroll_pane_g_ParamLimits

0x1b4e,	// (0x0004e70f) cale_week_time_pane_ParamLimits

0x1b72,	// (0x0004e733) grid_cale_week_pane_ParamLimits

0xaa44,	// (0x00057605) listscroll_cale_week_pane_t1

0xaa56,	// (0x00057617) scroll_pane_cp08_ParamLimits

0x2761,	// (0x0004f322) cale_month_corner_pane_ParamLimits

0xae00,	// (0x000579c1) cale_month_pane_t1

0x2b7b,	// (0x0004f73c) cale_month_week_pane_ParamLimits

0x30c7,	// (0x0004fc88) popup_call_status_window_g1_ParamLimits

0x30db,	// (0x0004fc9c) popup_call_status_window_g2_ParamLimits

0x30ef,	// (0x0004fcb0) popup_call_status_window_g3_ParamLimits

0xf352,	// (0x0005bf13) popup_call_status_window_g_ParamLimits

0xb1be,	// (0x00057d7f) aid_call2_pane

0x05c0,	// (0x0004d181) msg_header_pane_g1

0x39bc,	// (0x0005057d) postcard_address2_pane_ParamLimits

0x39bc,	// (0x0005057d) postcard_address2_pane

0x39ce,	// (0x0005058f) postcard_message2_pane_ParamLimits

0x39ce,	// (0x0005058f) postcard_message2_pane

0x449a,	// (0x0005105b) message2_row_pane_ParamLimits

0x449a,	// (0x0005105b) message2_row_pane

0x44b7,	// (0x00051078) address2_row_pane_ParamLimits

0x44b7,	// (0x00051078) address2_row_pane

0xc98b,	// (0x0005954c) postcard_message2_row_pane_g1

0xc993,	// (0x00059554) postcard_message2_row_pane_t1

0xc98b,	// (0x0005954c) address2_row_pane_g1

0xc993,	// (0x00059554) address2_row_pane_t1

0x1eac,	// (0x0004ea6d) aid_size_cell_vorec

0xa5b6,	// (0x00057177) main_rss_pane

0x44ca,	// (0x0005108b) rss_list_single_pane_ParamLimits

0x44ca,	// (0x0005108b) rss_list_single_pane

0xc9a1,	// (0x00059562) rss_list_single_pane_t1

0xc9af,	// (0x00059570) rss_list_single_pane_t2

0x0001,

0xf610,	// (0x0005c1d1) rss_list_single_pane_t

0xa5b6,	// (0x00057177) main_camera2_pane

0xa5b6,	// (0x00057177) main_video2_pane

0x4734,	// (0x000512f5) cams_zoom_pane_cp2_ParamLimits

0x4734,	// (0x000512f5) cams_zoom_pane_cp2

0x4754,	// (0x00051315) image2_vga_pane_ParamLimits

0x4754,	// (0x00051315) image2_vga_pane

0x47a5,	// (0x00051366) main_camera2_pane_g1_ParamLimits

0x47a5,	// (0x00051366) main_camera2_pane_g1

0x47c5,	// (0x00051386) main_camera2_pane_g2_ParamLimits

0x47c5,	// (0x00051386) main_camera2_pane_g2

0x47e5,	// (0x000513a6) main_camera2_pane_g3_ParamLimits

0x47e5,	// (0x000513a6) main_camera2_pane_g3

0x4805,	// (0x000513c6) main_camera2_pane_g4_ParamLimits

0x4805,	// (0x000513c6) main_camera2_pane_g4

0x4825,	// (0x000513e6) main_camera2_pane_g5_ParamLimits

0x4825,	// (0x000513e6) main_camera2_pane_g5

0x4845,	// (0x00051406) main_camera2_pane_g6_ParamLimits

0x4845,	// (0x00051406) main_camera2_pane_g6

0x4865,	// (0x00051426) main_camera2_pane_g7_ParamLimits

0x4865,	// (0x00051426) main_camera2_pane_g7

0x4885,	// (0x00051446) main_camera2_pane_g8_ParamLimits

0x4885,	// (0x00051446) main_camera2_pane_g8

0x0008,

0xf631,	// (0x0005c1f2) main_camera2_pane_g_ParamLimits

0xf631,	// (0x0005c1f2) main_camera2_pane_g

0x48c5,	// (0x00051486) main_camera2_pane_t1_ParamLimits

0x48c5,	// (0x00051486) main_camera2_pane_t1

0x48fa,	// (0x000514bb) main_camera2_pane_t2_ParamLimits

0x48fa,	// (0x000514bb) main_camera2_pane_t2

0x4920,	// (0x000514e1) main_camera2_pane_t3_ParamLimits

0x4920,	// (0x000514e1) main_camera2_pane_t3

0x497e,	// (0x0005153f) main_camera2_pane_t4_ParamLimits

0x497e,	// (0x0005153f) main_camera2_pane_t4

0x0006,

0xf644,	// (0x0005c205) main_camera2_pane_t_ParamLimits

0xf644,	// (0x0005c205) main_camera2_pane_t

0x4a10,	// (0x000515d1) cams_zoom_pane_cp4_ParamLimits

0x4a10,	// (0x000515d1) cams_zoom_pane_cp4

0x4a26,	// (0x000515e7) image2_cif_pane_ParamLimits

0x4a26,	// (0x000515e7) image2_cif_pane

0x4a51,	// (0x00051612) image2_subqcif_pane_ParamLimits

0x4a51,	// (0x00051612) image2_subqcif_pane

0x4a6b,	// (0x0005162c) main_video2_pane_g1_ParamLimits

0x4a6b,	// (0x0005162c) main_video2_pane_g1

0x4a85,	// (0x00051646) main_video2_pane_g2_ParamLimits

0x4a85,	// (0x00051646) main_video2_pane_g2

0x4a9b,	// (0x0005165c) main_video2_pane_g3_ParamLimits

0x4a9b,	// (0x0005165c) main_video2_pane_g3

0x4ab1,	// (0x00051672) main_video2_pane_g4_ParamLimits

0x4ab1,	// (0x00051672) main_video2_pane_g4

0x4ac7,	// (0x00051688) main_video2_pane_g5_ParamLimits

0x4ac7,	// (0x00051688) main_video2_pane_g5

0x4add,	// (0x0005169e) main_video2_pane_g6_ParamLimits

0x4add,	// (0x0005169e) main_video2_pane_g6

0x0005,

0xf653,	// (0x0005c214) main_video2_pane_g_ParamLimits

0xf653,	// (0x0005c214) main_video2_pane_g

0x4af7,	// (0x000516b8) main_video2_pane_t1_ParamLimits

0x4af7,	// (0x000516b8) main_video2_pane_t1

0x4b1b,	// (0x000516dc) main_video2_pane_t2_ParamLimits

0x4b1b,	// (0x000516dc) main_video2_pane_t2

0x4b69,	// (0x0005172a) main_video2_pane_t3_ParamLimits

0x4b69,	// (0x0005172a) main_video2_pane_t3

0x0002,

0xf660,	// (0x0005c221) main_video2_pane_t_ParamLimits

0xf660,	// (0x0005c221) main_video2_pane_t

0x3fee,	// (0x00050baf) call_muted_g2

0x0001,

0xf602,	// (0x0005c1c3) call_muted_g

0xa5b6,	// (0x00057177) main_mup2_pane

0x4bb1,	// (0x00051772) main_mup2_pane_g1_ParamLimits

0x4bb1,	// (0x00051772) main_mup2_pane_g1

0x4bbd,	// (0x0005177e) main_mup2_pane_g2_ParamLimits

0x4bbd,	// (0x0005177e) main_mup2_pane_g2

0x9d23,	// (0x000568e4) main_mup_pane_g13_cp1

0x9d2b,	// (0x000568ec) mup_volume_pane_cp1

0x4bd9,	// (0x0005179a) main_mup2_pane_g4_ParamLimits

0x4bd9,	// (0x0005179a) main_mup2_pane_g4

0x4beb,	// (0x000517ac) main_mup2_pane_g5_ParamLimits

0x4beb,	// (0x000517ac) main_mup2_pane_g5

0x4bfd,	// (0x000517be) main_mup2_pane_g6_ParamLimits

0x4bfd,	// (0x000517be) main_mup2_pane_g6

0x4c0f,	// (0x000517d0) main_mup2_pane_g7_ParamLimits

0x4c0f,	// (0x000517d0) main_mup2_pane_g7

0x0006,

0xf667,	// (0x0005c228) main_mup2_pane_g_ParamLimits

0xf667,	// (0x0005c228) main_mup2_pane_g

0x4c27,	// (0x000517e8) main_mup2_pane_t1_ParamLimits

0x4c27,	// (0x000517e8) main_mup2_pane_t1

0x4c3d,	// (0x000517fe) main_mup2_pane_t2_ParamLimits

0x4c3d,	// (0x000517fe) main_mup2_pane_t2

0x4c53,	// (0x00051814) main_mup2_pane_t3_ParamLimits

0x4c53,	// (0x00051814) main_mup2_pane_t3

0x4c69,	// (0x0005182a) main_mup2_pane_t4_ParamLimits

0x4c69,	// (0x0005182a) main_mup2_pane_t4

0x4c81,	// (0x00051842) main_mup2_pane_t5_ParamLimits

0x4c81,	// (0x00051842) main_mup2_pane_t5

0x4c99,	// (0x0005185a) main_mup2_pane_t6_ParamLimits

0x4c99,	// (0x0005185a) main_mup2_pane_t6

0x0005,

0xf676,	// (0x0005c237) main_mup2_pane_t_ParamLimits

0xf676,	// (0x0005c237) main_mup2_pane_t

0x4cc9,	// (0x0005188a) mup2_visualizer_pane_ParamLimits

0x4cc9,	// (0x0005188a) mup2_visualizer_pane

0x4cf7,	// (0x000518b8) mup_progress_pane_cp_ParamLimits

0x4cf7,	// (0x000518b8) mup_progress_pane_cp

0x9d0e,	// (0x000568cf) mup_volume_pane_cp_ParamLimits

0x9d0e,	// (0x000568cf) mup_volume_pane_cp

0x4d0b,	// (0x000518cc) mup2_visualizer_pane_g1_ParamLimits

0x4d0b,	// (0x000518cc) mup2_visualizer_pane_g1

0xca10,	// (0x000595d1) mup2_visualizer_pane_g2_ParamLimits

0xca10,	// (0x000595d1) mup2_visualizer_pane_g2

0x4d22,	// (0x000518e3) mup2_visualizer_pane_g3_ParamLimits

0x4d22,	// (0x000518e3) mup2_visualizer_pane_g3

0x0002,

0xf683,	// (0x0005c244) mup2_visualizer_pane_g_ParamLimits

0xf683,	// (0x0005c244) mup2_visualizer_pane_g

0xb803,	// (0x000583c4) aid_size_cell_fmradio

0x41a0,	// (0x00050d61) aid_height_parent_landcape

0xac5e,	// (0x0005781f) wml_content_pane_cp

0xac66,	// (0x00057827) wml_tabs_pane

0xac6f,	// (0x00057830) popup_wml_miniature_window

0xac77,	// (0x00057838) scroll_pane_cp021

0xac8b,	// (0x0005784c) wml_content_pane_comp8

0xa5b6,	// (0x00057177) bg_popup_sub_pane_cp05

0xca2e,	// (0x000595ef) popup_wml_miniature_window_g1

0xca36,	// (0x000595f7) wml_miniature_view_pane

0x4d2e,	// (0x000518ef) aid_size_wml_view

0x4d36,	// (0x000518f7) wml_miniature_view_pane_g1

0x4d3f,	// (0x00051900) wml_miniature_view_pane_g2

0x4d48,	// (0x00051909) wml_miniature_view_pane_g3

0x4d50,	// (0x00051911) wml_miniature_view_pane_g4

0x4d58,	// (0x00051919) wml_miniature_view_pane_g5

0x4d60,	// (0x00051921) wml_miniature_view_pane_g6

0x4d68,	// (0x00051929) wml_miniature_view_pane_g7

0x4d70,	// (0x00051931) wml_miniature_view_pane_g8

0x0007,

0xf68a,	// (0x0005c24b) wml_miniature_view_pane_g

0xca3e,	// (0x000595ff) background_graphic_ParamLimits

0xca3e,	// (0x000595ff) background_graphic

0xca4a,	// (0x0005960b) wml_tabs_2_pane

0xca53,	// (0x00059614) wml_tabs_3_pane_ParamLimits

0xca53,	// (0x00059614) wml_tabs_3_pane

0xca65,	// (0x00059626) wml_tabs_4_pane_ParamLimits

0xca65,	// (0x00059626) wml_tabs_4_pane

0xca7b,	// (0x0005963c) wml_tabs_5_pane_ParamLimits

0xca7b,	// (0x0005963c) wml_tabs_5_pane

0xca95,	// (0x00059656) wml_tabs_pane_g2_ParamLimits

0xca95,	// (0x00059656) wml_tabs_pane_g2

0xcaa9,	// (0x0005966a) wml_tabs_pane_g3_ParamLimits

0xcaa9,	// (0x0005966a) wml_tabs_pane_g3

0x4d78,	// (0x00051939) wml_tabs_2_active_pane_ParamLimits

0x4d78,	// (0x00051939) wml_tabs_2_active_pane

0x4d8c,	// (0x0005194d) wml_tabs_2_passive_pane_ParamLimits

0x4d8c,	// (0x0005194d) wml_tabs_2_passive_pane

0x4da0,	// (0x00051961) wml_tabs_3_active_pane_cp_ParamLimits

0x4da0,	// (0x00051961) wml_tabs_3_active_pane_cp

0x4db5,	// (0x00051976) wml_tabs_3_passive_pane_ParamLimits

0x4db5,	// (0x00051976) wml_tabs_3_passive_pane

0x4dc8,	// (0x00051989) wml_tabs_3_passive_pane_cp_ParamLimits

0x4dc8,	// (0x00051989) wml_tabs_3_passive_pane_cp

0x4ddf,	// (0x000519a0) tabs_4_active_pane

0x4de7,	// (0x000519a8) tabs_4_passive_pane

0x4df1,	// (0x000519b2) tabs_4_passive_pane_cp

0x4df9,	// (0x000519ba) tabs_4_passive_pane_cp2

0x3ebb,	// (0x00050a7c) aid_height_text

0x359f,	// (0x00050160) mup_volume_cont_pane_ParamLimits

0x359f,	// (0x00050160) mup_volume_cont_pane

0x1589,	// (0x0004e14a) aid_size_cell_pinb

0x1593,	// (0x0004e154) aid_size_list_pinb

0x4ce3,	// (0x000518a4) mup2_volume_cont_pane_ParamLimits

0x4ce3,	// (0x000518a4) mup2_volume_cont_pane

0x9cfa,	// (0x000568bb) mup2_volume_cont_pane_g1_ParamLimits

0x9cfa,	// (0x000568bb) mup2_volume_cont_pane_g1

0x123b,	// (0x0004ddfc) aid_size_cell_touch_ParamLimits

0x123b,	// (0x0004ddfc) aid_size_cell_touch

0x1478,	// (0x0004e039) touch_pane_ParamLimits

0x1478,	// (0x0004e039) touch_pane

0x9847,	// (0x00056408) main_rss2_pane

0xcac6,	// (0x00059687) listscroll_rss2_pane

0xcacf,	// (0x00059690) rss2_navigation_pane

0xcad7,	// (0x00059698) list_rss2_pane

0xb2e3,	// (0x00057ea4) scroll_pane_cp22

0xcadf,	// (0x000596a0) rss2_navigation_pane_g1

0xcae8,	// (0x000596a9) rss2_navigation_pane_g2

0xcaf0,	// (0x000596b1) rss2_navigation_pane_g3

0x0002,

0xf69b,	// (0x0005c25c) rss2_navigation_pane_g

0xcaf8,	// (0x000596b9) rss2_navigation_pane_t1

0x4e03,	// (0x000519c4) rss2_list_single_pane_ParamLimits

0x4e03,	// (0x000519c4) rss2_list_single_pane

0xcb06,	// (0x000596c7) rss2_list_single_pane_t2

0xcb14,	// (0x000596d5) rss2_list_single_pane_t3_ParamLimits

0xcb14,	// (0x000596d5) rss2_list_single_pane_t3

0xcb31,	// (0x000596f2) rss2_list_single_pane_t4

0x2fa3,	// (0x0004fb64) smil_status_pane_g1

0xa3b1,	// (0x00056f72) main_image2_pane_ParamLimits

0xa3b1,	// (0x00056f72) main_image2_pane

0x48a5,	// (0x00051466) main_camera2_pane_g9_ParamLimits

0x48a5,	// (0x00051466) main_camera2_pane_g9

0x49d3,	// (0x00051594) main_camera2_pane_t5_ParamLimits

0x49d3,	// (0x00051594) main_camera2_pane_t5

0x9cca,	// (0x0005688b) main_camera2_pane_t6_ParamLimits

0x9cca,	// (0x0005688b) main_camera2_pane_t6

0x4e19,	// (0x000519da) main_image2_pane_g1_ParamLimits

0x4e19,	// (0x000519da) main_image2_pane_g1

0x3bf6,	// (0x000507b7) smil2_video_pane_ParamLimits

0x3bf6,	// (0x000507b7) smil2_video_pane

0x1273,	// (0x0004de34) aid_zoom_text_primary_cp

0x98a5,	// (0x00056466) popup_preview_fixed_window

0xabc7,	// (0x00057788) im_reading_pane_g1

0x471c,	// (0x000512dd) cams2_bc_adjust_pane_cp_ParamLimits

0x471c,	// (0x000512dd) cams2_bc_adjust_pane_cp

0x4a02,	// (0x000515c3) cams2_bc_adjust_pane_ParamLimits

0x4a02,	// (0x000515c3) cams2_bc_adjust_pane

0x9d33,	// (0x000568f4) cams2_bc_adjust_pane_g1

0x9d3b,	// (0x000568fc) cams2_slider_pane

0x9d44,	// (0x00056905) cams2_slider_pane_g1

0x9d4d,	// (0x0005690e) cams2_slider_pane_g2

0x0006,

0xf6a2,	// (0x0005c263) cams2_slider_pane_g

0x167b,	// (0x0004e23c) calc_display_pane_ParamLimits

0x16a0,	// (0x0004e261) calc_paper_pane_ParamLimits

0x16c3,	// (0x0004e284) grid_calc_pane_ParamLimits

0x9be3,	// (0x000567a4) popup_clock_digital_window_t1_ParamLimits

0xb7a0,	// (0x00058361) main_image_pane_t1

0x165d,	// (0x0004e21e) aid_size_cell_calc_ParamLimits

0x165d,	// (0x0004e21e) aid_size_cell_calc

0x41e6,	// (0x00050da7) popup_blid_sat_info2_window_ParamLimits

0x41e6,	// (0x00050da7) popup_blid_sat_info2_window

0xcb47,	// (0x00059708) aid_size_cell_blid

0xcb4f,	// (0x00059710) bg_popup_window_pane_cp07

0xcb72,	// (0x00059733) grid_popup_blid_pane

0xcb7c,	// (0x0005973d) heading_pane_cp05_ParamLimits

0xcb7c,	// (0x0005973d) heading_pane_cp05

0xcc46,	// (0x00059807) cell_popup_blid_pane_ParamLimits

0xcc46,	// (0x00059807) cell_popup_blid_pane

0xcc6a,	// (0x0005982b) cell_popup_blid_pane_g1

0xcc72,	// (0x00059833) cell_popup_blid_pane_t1

0x4cb3,	// (0x00051874) mup2_indicator_pane_ParamLimits

0x4cb3,	// (0x00051874) mup2_indicator_pane

0xaace,	// (0x0005768f) mup2_visualizer_osc_pane

0xca1c,	// (0x000595dd) mup2_visualizer_spec_pane_ParamLimits

0xca1c,	// (0x000595dd) mup2_visualizer_spec_pane

0x4e2f,	// (0x000519f0) mup2_spec_half_pane

0x4e38,	// (0x000519f9) mup2_spec_half_pane_cp

0x4e40,	// (0x00051a01) mup2_spec_bar_pane_ParamLimits

0x4e40,	// (0x00051a01) mup2_spec_bar_pane

0xc9bd,	// (0x0005957e) mup2_spec_bar_pane_g1

0xc9c7,	// (0x00059588) mup2_spec_bar_pane_g2

0x0001,

0xf615,	// (0x0005c1d6) mup2_spec_bar_pane_g

0x4e60,	// (0x00051a21) mup2_osc_middle_pane

0xc9d9,	// (0x0005959a) mup2_visualizer_osc_pane_g1

0x98cf,	// (0x00056490) popup_number_entry_window_t1_ParamLimits

0x98e2,	// (0x000564a3) popup_number_entry_window_t2_ParamLimits

0x98f4,	// (0x000564b5) popup_number_entry_window_t3_ParamLimits

0x14ca,	// (0x0004e08b) popup_number_entry_window_t5_ParamLimits

0x14ca,	// (0x0004e08b) popup_number_entry_window_t5

0xf0c6,	// (0x0005bc87) popup_number_entry_window_t_ParamLimits

0x9906,	// (0x000564c7) text_title_cp2_ParamLimits

0x9c22,	// (0x000567e3) aid_hotspot_pointer_text2_pane

0x9c48,	// (0x00056809) main_viewer_pane_g9_ParamLimits

0x9c48,	// (0x00056809) main_viewer_pane_g9

0xae00,	// (0x000579c1) cale_month_pane_t1_ParamLimits

0xae3d,	// (0x000579fe) bg_cale_pane_ParamLimits

0xae55,	// (0x00057a16) list_cale_pane_ParamLimits

0xae66,	// (0x00057a27) listscroll_cale_day_pane_t1

0xae78,	// (0x00057a39) scroll_pane_cp09_ParamLimits

0x35d5,	// (0x00050196) main_mup_eq_pane_t1_ParamLimits

0x35d5,	// (0x00050196) main_mup_eq_pane_t1

0x35ef,	// (0x000501b0) main_mup_eq_pane_t2_ParamLimits

0x35ef,	// (0x000501b0) main_mup_eq_pane_t2

0x3609,	// (0x000501ca) main_mup_eq_pane_t3_ParamLimits

0x3609,	// (0x000501ca) main_mup_eq_pane_t3

0x3625,	// (0x000501e6) main_mup_eq_pane_t4_ParamLimits

0x3625,	// (0x000501e6) main_mup_eq_pane_t4

0x3641,	// (0x00050202) main_mup_eq_pane_t5_ParamLimits

0x3641,	// (0x00050202) main_mup_eq_pane_t5

0x365d,	// (0x0005021e) main_mup_eq_pane_t6_ParamLimits

0x365d,	// (0x0005021e) main_mup_eq_pane_t6

0x3671,	// (0x00050232) main_mup_eq_pane_t7_ParamLimits

0x3671,	// (0x00050232) main_mup_eq_pane_t7

0x3685,	// (0x00050246) main_mup_eq_pane_t8_ParamLimits

0x3685,	// (0x00050246) main_mup_eq_pane_t8

0x3699,	// (0x0005025a) main_mup_eq_pane_t9_ParamLimits

0x3699,	// (0x0005025a) main_mup_eq_pane_t9

0x36b3,	// (0x00050274) main_mup_eq_pane_t10_ParamLimits

0x36b3,	// (0x00050274) main_mup_eq_pane_t10

0x0009,

0xf451,	// (0x0005c012) main_mup_eq_pane_t_ParamLimits

0xf451,	// (0x0005c012) main_mup_eq_pane_t

0x3762,	// (0x00050323) mup_equalizer_pane_cp5_ParamLimits

0x3776,	// (0x00050337) mup_equalizer_pane_cp6_ParamLimits

0x378a,	// (0x0005034b) mup_equalizer_pane_cp7_ParamLimits

0x9847,	// (0x00056408) main_gallery_pane

0xc9e2,	// (0x000595a3) smil2_volume_pane

0xc9ea,	// (0x000595ab) smil_status_volume_pane_g1_ParamLimits

0xc9fd,	// (0x000595be) smil_status_volume_pane_g2_ParamLimits

0x9ca8,	// (0x00056869) smil_status_volume_pane_g3_ParamLimits

0xf61a,	// (0x0005c1db) smil_status_volume_pane_g_ParamLimits

0xcb4f,	// (0x00059710) bg_popup_window_pane_cp07_ParamLimits

0xcb5d,	// (0x0005971e) blid_firmament_pane

0x4e69,	// (0x00051a2a) aid_size_cell_gallery_ParamLimits

0x4e69,	// (0x00051a2a) aid_size_cell_gallery

0x4e7f,	// (0x00051a40) grid_gallery_pane_ParamLimits

0x4e7f,	// (0x00051a40) grid_gallery_pane

0x4e98,	// (0x00051a59) cell_gallery_pane_ParamLimits

0x4e98,	// (0x00051a59) cell_gallery_pane

0xcc80,	// (0x00059841) bg_cell_gallery_focus_pane_ParamLimits

0xcc80,	// (0x00059841) bg_cell_gallery_focus_pane

0xcc92,	// (0x00059853) cell_gallery_pane_g1_ParamLimits

0xcc92,	// (0x00059853) cell_gallery_pane_g1

0x4ee1,	// (0x00051aa2) cell_gallery_pane_g2_ParamLimits

0x4ee1,	// (0x00051aa2) cell_gallery_pane_g2

0x4eee,	// (0x00051aaf) cell_gallery_pane_g3_ParamLimits

0x4eee,	// (0x00051aaf) cell_gallery_pane_g3

0xcc9e,	// (0x0005985f) cell_gallery_pane_g4_ParamLimits

0xcc9e,	// (0x0005985f) cell_gallery_pane_g4

0x0003,

0xf6c8,	// (0x0005c289) cell_gallery_pane_g_ParamLimits

0xf6c8,	// (0x0005c289) cell_gallery_pane_g

0xccaa,	// (0x0005986b) bg_cell_gallery_focus_pane_g1

0xccb2,	// (0x00059873) bg_cell_gallery_focus_pane_g2

0xccba,	// (0x0005987b) bg_cell_gallery_focus_pane_g3

0xccc2,	// (0x00059883) bg_cell_gallery_focus_pane_g4

0xccca,	// (0x0005988b) bg_cell_gallery_focus_pane_g5

0xccd2,	// (0x00059893) bg_cell_gallery_focus_pane_g6

0xccda,	// (0x0005989b) bg_cell_gallery_focus_pane_g7

0xcce2,	// (0x000598a3) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6d1,	// (0x0005c292) bg_cell_gallery_focus_pane_g

0xccea,	// (0x000598ab) aid_firma_cardinal

0xccfe,	// (0x000598bf) blid_firmament_pane_t1

0xcd15,	// (0x000598d6) blid_firmament_pane_t2

0xcd2c,	// (0x000598ed) blid_firmament_pane_t3

0xcd43,	// (0x00059904) blid_firmament_pane_t4

0x0003,

0xf6e2,	// (0x0005c2a3) blid_firmament_pane_t

0xcd5a,	// (0x0005991b) blid_sat_info_pane

0xcd6a,	// (0x0005992b) blid_sat_info_pane_g1

0xcd6a,	// (0x0005992b) blid_sat_info_pane_g2

0x0001,

0xf6eb,	// (0x0005c2ac) blid_sat_info_pane_g

0xcd74,	// (0x00059935) blid_sat_info_pane_t1

0xcd82,	// (0x00059943) smil2_volume_content_pane

0xcd8b,	// (0x0005994c) smil2_volume_pane_g1

0xa963,	// (0x00057524) smil2_volume_content_pane_g1

0xcd93,	// (0x00059954) smil2_volume_content_pane_g2

0xcd9c,	// (0x0005995d) smil2_volume_content_pane_g3

0xcda5,	// (0x00059966) smil2_volume_content_pane_g4

0xcdae,	// (0x0005996f) smil2_volume_content_pane_g5

0xcdb7,	// (0x00059978) smil2_volume_content_pane_g6

0xcdc0,	// (0x00059981) smil2_volume_content_pane_g7

0xcdc9,	// (0x0005998a) smil2_volume_content_pane_g8

0xcdd2,	// (0x00059993) smil2_volume_content_pane_g9

0xcddb,	// (0x0005999c) smil2_volume_content_pane_g10

0x0009,

0xf6f0,	// (0x0005c2b1) smil2_volume_content_pane_g

0x1c26,	// (0x0004e7e7) cale_week_day_heading_pane_t1_ParamLimits

0x1c50,	// (0x0004e811) cale_week_day_heading_pane_t2_ParamLimits

0x1c7f,	// (0x0004e840) cale_week_day_heading_pane_t3_ParamLimits

0x1cae,	// (0x0004e86f) cale_week_day_heading_pane_t4_ParamLimits

0x1cdd,	// (0x0004e89e) cale_week_day_heading_pane_t5_ParamLimits

0x1d14,	// (0x0004e8d5) cale_week_day_heading_pane_t6_ParamLimits

0x1d4b,	// (0x0004e90c) cale_week_day_heading_pane_t7_ParamLimits

0xf1cd,	// (0x0005bd8e) cale_week_day_heading_pane_t_ParamLimits

0xaa73,	// (0x00057634) bg_cale_side_pane_ParamLimits

0x1d75,	// (0x0004e936) cale_week_time_pane_t1_ParamLimits

0x1d8f,	// (0x0004e950) cale_week_time_pane_t2_ParamLimits

0x1da9,	// (0x0004e96a) cale_week_time_pane_t3_ParamLimits

0x1dc3,	// (0x0004e984) cale_week_time_pane_t4_ParamLimits

0x1ddd,	// (0x0004e99e) cale_week_time_pane_t5_ParamLimits

0x1df7,	// (0x0004e9b8) cale_week_time_pane_t6_ParamLimits

0x1e11,	// (0x0004e9d2) cale_week_time_pane_t7_ParamLimits

0x1e2b,	// (0x0004e9ec) cale_week_time_pane_t8_ParamLimits

0xf1dc,	// (0x0005bd9d) cale_week_time_pane_t_ParamLimits

0x1e4b,	// (0x0004ea0c) cell_cale_week_pane_g2_ParamLimits

0xaa73,	// (0x00057634) bg_cale_side_pane_cp01_ParamLimits

0x2da8,	// (0x0004f969) cale_month_week_pane_t1_ParamLimits

0x2dc1,	// (0x0004f982) cale_month_week_pane_t2_ParamLimits

0x2dda,	// (0x0004f99b) cale_month_week_pane_t3_ParamLimits

0x2df3,	// (0x0004f9b4) cale_month_week_pane_t4_ParamLimits

0x2e0c,	// (0x0004f9cd) cale_month_week_pane_t5_ParamLimits

0x2e25,	// (0x0004f9e6) cale_month_week_pane_t6_ParamLimits

0xf2b1,	// (0x0005be72) cale_month_week_pane_t_ParamLimits

0x9b63,	// (0x00056724) cell_cale_month_pane_g1_ParamLimits

0x9847,	// (0x00056408) main_cale_event_viewer_pane

0x9847,	// (0x00056408) listscroll_cale_event_viewer_pane

0xcde4,	// (0x000599a5) list_cale_ev_pane

0xcdec,	// (0x000599ad) scroll_pane_cp023

0xcdf8,	// (0x000599b9) field_cale_ev_pane_ParamLimits

0xcdf8,	// (0x000599b9) field_cale_ev_pane

0xce16,	// (0x000599d7) field_cale_ev_content_pane_ParamLimits

0xce16,	// (0x000599d7) field_cale_ev_content_pane

0xce22,	// (0x000599e3) field_cale_ev_pane_g1_ParamLimits

0xce22,	// (0x000599e3) field_cale_ev_pane_g1

0xce2e,	// (0x000599ef) field_cale_ev_pane_g2_ParamLimits

0xce2e,	// (0x000599ef) field_cale_ev_pane_g2

0xce46,	// (0x00059a07) field_cale_ev_pane_g3_ParamLimits

0xce46,	// (0x00059a07) field_cale_ev_pane_g3

0x0002,

0xf705,	// (0x0005c2c6) field_cale_ev_pane_g_ParamLimits

0xf705,	// (0x0005c2c6) field_cale_ev_pane_g

0xce5e,	// (0x00059a1f) field_cale_ev_pane_t1_ParamLimits

0xce5e,	// (0x00059a1f) field_cale_ev_pane_t1

0xa9e6,	// (0x000575a7) field_cale_ev_content_pane_t1_ParamLimits

0xa9e6,	// (0x000575a7) field_cale_ev_content_pane_t1

0xb686,	// (0x00058247) bg_button_pane_cp01

0x1953,	// (0x0004e514) listscroll_cale_week_pane_ParamLimits

0xaa1e,	// (0x000575df) popup_toolbar_window_cp01

0xaa44,	// (0x00057605) listscroll_cale_week_pane_t1_ParamLimits

0x1953,	// (0x0004e514) listscroll_cale_day_pane_ParamLimits

0xaa1e,	// (0x000575df) popup_toolbar_window_cp02

0xae66,	// (0x00057a27) listscroll_cale_day_pane_t1_ParamLimits

0x1953,	// (0x0004e514) main_cale_month_pane_ParamLimits

0x9c93,	// (0x00056854) popup_toolbar_window_cp03_ParamLimits

0x9c93,	// (0x00056854) popup_toolbar_window_cp03

0x3abe,	// (0x0005067f) main_image_pane_g2_ParamLimits

0x3abe,	// (0x0005067f) main_image_pane_g2

0x3acf,	// (0x00050690) main_image_pane_g3_ParamLimits

0x3acf,	// (0x00050690) main_image_pane_g3

0x0002,

0xf4e3,	// (0x0005c0a4) main_image_pane_g_ParamLimits

0xf4e3,	// (0x0005c0a4) main_image_pane_g

0xb7a0,	// (0x00058361) main_image_pane_t1_ParamLimits

0x3ae0,	// (0x000506a1) main_image_pane_t2_ParamLimits

0x3ae0,	// (0x000506a1) main_image_pane_t2

0x3af2,	// (0x000506b3) main_image_pane_t3_ParamLimits

0x3af2,	// (0x000506b3) main_image_pane_t3

0x3b1a,	// (0x000506db) main_image_pane_t4_ParamLimits

0x3b1a,	// (0x000506db) main_image_pane_t4

0x0003,

0xf4ea,	// (0x0005c0ab) main_image_pane_t_ParamLimits

0xf4ea,	// (0x0005c0ab) main_image_pane_t

0x3b3a,	// (0x000506fb) popup_image_details_window_cp01

0x3b44,	// (0x00050705) popup_toobar_trans_pane_cp01_ParamLimits

0x3b44,	// (0x00050705) popup_toobar_trans_pane_cp01

0x42b7,	// (0x00050e78) popup_image_details_window_ParamLimits

0x42b7,	// (0x00050e78) popup_image_details_window

0x9c66,	// (0x00056827) popup_image_focus_window

0x46d6,	// (0x00051297) camera2_autofocus_pane_ParamLimits

0x46d6,	// (0x00051297) camera2_autofocus_pane

0x9847,	// (0x00056408) bg_popup_sub_pane_cp06

0xce75,	// (0x00059a36) popup_image_focus_window_g1

0xce7d,	// (0x00059a3e) popup_image_focus_window_g2

0xce85,	// (0x00059a46) popup_image_focus_window_g3

0xce8d,	// (0x00059a4e) popup_image_focus_window_g4

0x0003,

0xf70c,	// (0x0005c2cd) popup_image_focus_window_g

0xce95,	// (0x00059a56) popup_image_focus_window_t1

0xcea3,	// (0x00059a64) popup_image_focus_window_t2

0xceb3,	// (0x00059a74) popup_image_focus_window_t3

0x0002,

0xf715,	// (0x0005c2d6) popup_image_focus_window_t

0xcec1,	// (0x00059a82) camera2_autofocus_pane_g1

0xa3b1,	// (0x00056f72) bg_tb_trans_pane_cp01

0xcecf,	// (0x00059a90) popup_image_details_window_g1

0xcee2,	// (0x00059aa3) popup_image_details_window_g2

0x0002,

0xf727,	// (0x0005c2e8) popup_image_details_window_g

0xcf0b,	// (0x00059acc) popup_image_details_window_t1

0xcf1d,	// (0x00059ade) popup_image_details_window_t2

0xcf36,	// (0x00059af7) popup_image_details_window_t3

0xcf4a,	// (0x00059b0b) popup_image_details_window_t4

0xcf65,	// (0x00059b26) popup_image_details_window_t5

0x0004,

0xf72e,	// (0x0005c2ef) popup_image_details_window_t

0xa8ce,	// (0x0005748f) bg_calc_paper_pane_ParamLimits

0x9847,	// (0x00056408) grid_highlight_pane_cp013

0x9ad3,	// (0x00056694) list_calc_pane_ParamLimits

0x9ae5,	// (0x000566a6) scroll_pane_cp024

0xa8e2,	// (0x000574a3) bg_calc_display_pane_ParamLimits

0x17c1,	// (0x0004e382) calc_display_pane_t1_ParamLimits

0x17d3,	// (0x0004e394) calc_display_pane_t2_ParamLimits

0x9aed,	// (0x000566ae) calc_display_pane_t3_ParamLimits

0xf14d,	// (0x0005bd0e) calc_display_pane_t_ParamLimits

0x188d,	// (0x0004e44e) cell_calc_pane_g2

0x0001,

0xf16a,	// (0x0005bd2b) cell_calc_pane_g

0x1896,	// (0x0004e457) cell_calc_pane_t1

0xa941,	// (0x00057502) grid_highlight_pane_cp02_ParamLimits

0xa957,	// (0x00057518) toolbar_button_pane_cp01_ParamLimits

0xa957,	// (0x00057518) toolbar_button_pane_cp01

0xb7e5,	// (0x000583a6) temp_image_control_pane_ParamLimits

0xb7e5,	// (0x000583a6) temp_image_control_pane

0xa3b1,	// (0x00056f72) main_mp3_pane

0xcf7f,	// (0x00059b40) temp_image_control_pane_g1_ParamLimits

0xcf7f,	// (0x00059b40) temp_image_control_pane_g1

0xcf8d,	// (0x00059b4e) temp_image_control_pane_g2_ParamLimits

0xcf8d,	// (0x00059b4e) temp_image_control_pane_g2

0xcf9f,	// (0x00059b60) temp_image_control_pane_g3_ParamLimits

0xcf9f,	// (0x00059b60) temp_image_control_pane_g3

0x4f2b,	// (0x00051aec) temp_image_control_pane_g4_ParamLimits

0x4f2b,	// (0x00051aec) temp_image_control_pane_g4

0x0003,

0xf739,	// (0x0005c2fa) temp_image_control_pane_g_ParamLimits

0xf739,	// (0x0005c2fa) temp_image_control_pane_g

0xcf7f,	// (0x00059b40) main_mp3_pane_g1

0x4f3e,	// (0x00051aff) main_mp3_pane_g2

0x0007,

0xf742,	// (0x0005c303) main_mp3_pane_g

0xcfe2,	// (0x00059ba3) main_mp3_pane_t1

0xaad6,	// (0x00057697) main_camera_pane_g8_ParamLimits

0xaad6,	// (0x00057697) main_camera_pane_g8

0x214f,	// (0x0004ed10) main_video_pane_g7_ParamLimits

0x214f,	// (0x0004ed10) main_video_pane_g7

0x9ce8,	// (0x000568a9) main_camera2_pane_t7_ParamLimits

0x9ce8,	// (0x000568a9) main_camera2_pane_t7

0xac1e,	// (0x000577df) scroll_pane_cp025_ParamLimits

0xac1e,	// (0x000577df) scroll_pane_cp025

0xac32,	// (0x000577f3) scroll_pane_cp026_ParamLimits

0xac32,	// (0x000577f3) scroll_pane_cp026

0xac41,	// (0x00057802) wml_content_pane_ParamLimits

0x9847,	// (0x00056408) main_touch_calib_pane

0x5012,	// (0x00051bd3) main_touch_calib_pane_g1

0x5024,	// (0x00051be5) main_touch_calib_pane_g2

0x5036,	// (0x00051bf7) main_touch_calib_pane_g3

0x5048,	// (0x00051c09) main_touch_calib_pane_g4

0x0003,

0xf760,	// (0x0005c321) main_touch_calib_pane_g

0x505a,	// (0x00051c1b) main_touch_calib_pane_t1

0x5074,	// (0x00051c35) main_touch_calib_pane_t2

0x0004,

0xf769,	// (0x0005c32a) main_touch_calib_pane_t

0xb3b2,	// (0x00057f73) mup_progress_pane_cp02

0xb3e7,	// (0x00057fa8) navi_pane_g1

0xb4a2,	// (0x00058063) navi_pane_mp_t3

0xa3b1,	// (0x00056f72) main_mp3_pane_ParamLimits

0x4442,	// (0x00051003) navi_pane_ParamLimits

0xcf7f,	// (0x00059b40) main_mp3_pane_g1_ParamLimits

0x4f3e,	// (0x00051aff) main_mp3_pane_g2_ParamLimits

0x4f4c,	// (0x00051b0d) main_mp3_pane_g3_ParamLimits

0x4f4c,	// (0x00051b0d) main_mp3_pane_g3

0x4f5a,	// (0x00051b1b) main_mp3_pane_g4_ParamLimits

0x4f5a,	// (0x00051b1b) main_mp3_pane_g4

0xcfaf,	// (0x00059b70) main_mp3_pane_g5_ParamLimits

0xcfaf,	// (0x00059b70) main_mp3_pane_g5

0xcfbd,	// (0x00059b7e) main_mp3_pane_g6_ParamLimits

0xcfbd,	// (0x00059b7e) main_mp3_pane_g6

0xcfca,	// (0x00059b8b) main_mp3_pane_g7_ParamLimits

0xcfca,	// (0x00059b8b) main_mp3_pane_g7

0xcfd6,	// (0x00059b97) main_mp3_pane_g8_ParamLimits

0xcfd6,	// (0x00059b97) main_mp3_pane_g8

0xf742,	// (0x0005c303) main_mp3_pane_g_ParamLimits

0x4f66,	// (0x00051b27) main_mp3_pane_t2

0x4f74,	// (0x00051b35) main_mp3_pane_t3

0xcff0,	// (0x00059bb1) main_mp3_pane_t4

0xcffe,	// (0x00059bbf) main_mp3_pane_t5

0x0005,

0xf753,	// (0x0005c314) main_mp3_pane_t

0xd00c,	// (0x00059bcd) mup_progress_pane_cp01

0x1273,	// (0x0004de34) aid_zoom_text_secondary2

0xcde4,	// (0x000599a5) list_cale_ev2_pane

0xcdec,	// (0x000599ad) scroll_pane_cp023_ParamLimits

0x50ca,	// (0x00051c8b) field_cale_ev2_pane_ParamLimits

0x50ca,	// (0x00051c8b) field_cale_ev2_pane

0x50eb,	// (0x00051cac) field_cale_ev2_pane_g1_ParamLimits

0x50eb,	// (0x00051cac) field_cale_ev2_pane_g1

0x50f7,	// (0x00051cb8) field_cale_ev2_pane_g2_ParamLimits

0x50f7,	// (0x00051cb8) field_cale_ev2_pane_g2

0x510f,	// (0x00051cd0) field_cale_ev2_pane_g3_ParamLimits

0x510f,	// (0x00051cd0) field_cale_ev2_pane_g3

0x0003,

0xf774,	// (0x0005c335) field_cale_ev2_pane_g_ParamLimits

0xf774,	// (0x0005c335) field_cale_ev2_pane_g

0x5133,	// (0x00051cf4) field_cale_ev2_pane_t1_ParamLimits

0x5133,	// (0x00051cf4) field_cale_ev2_pane_t1

0x514a,	// (0x00051d0b) field_cale_ev2_pane_t2_ParamLimits

0x514a,	// (0x00051d0b) field_cale_ev2_pane_t2

0x0001,

0xf77d,	// (0x0005c33e) field_cale_ev2_pane_t_ParamLimits

0xf77d,	// (0x0005c33e) field_cale_ev2_pane_t

0x3972,	// (0x00050533) main_postcard_pane_g5_ParamLimits

0x3972,	// (0x00050533) main_postcard_pane_g5

0x3988,	// (0x00050549) main_postcard_pane_g6_ParamLimits

0x3988,	// (0x00050549) main_postcard_pane_g6

0x1f15,	// (0x0004ead6) camera2_autofocus_pane_cp_ParamLimits

0x1f15,	// (0x0004ead6) camera2_autofocus_pane_cp

0xa3b1,	// (0x00056f72) main_mup3_pane

0x51a3,	// (0x00051d64) main_mup3_pane_g1_ParamLimits

0x51a3,	// (0x00051d64) main_mup3_pane_g1

0x51c5,	// (0x00051d86) main_mup3_pane_g2_ParamLimits

0x51c5,	// (0x00051d86) main_mup3_pane_g2

0x5245,	// (0x00051e06) main_mup3_pane_g3_ParamLimits

0x5245,	// (0x00051e06) main_mup3_pane_g3

0x528b,	// (0x00051e4c) main_mup3_pane_g4_ParamLimits

0x528b,	// (0x00051e4c) main_mup3_pane_g4

0x52d1,	// (0x00051e92) main_mup3_pane_g5_ParamLimits

0x52d1,	// (0x00051e92) main_mup3_pane_g5

0x5317,	// (0x00051ed8) main_mup3_pane_g6_ParamLimits

0x5317,	// (0x00051ed8) main_mup3_pane_g6

0xd014,	// (0x00059bd5) main_mup3_pane_g7_ParamLimits

0xd014,	// (0x00059bd5) main_mup3_pane_g7

0x0007,

0xf78d,	// (0x0005c34e) main_mup3_pane_g_ParamLimits

0xf78d,	// (0x0005c34e) main_mup3_pane_g

0x5395,	// (0x00051f56) main_mup3_pane_t1_ParamLimits

0x5395,	// (0x00051f56) main_mup3_pane_t1

0x5409,	// (0x00051fca) main_mup3_pane_t2_ParamLimits

0x5409,	// (0x00051fca) main_mup3_pane_t2

0x54dd,	// (0x0005209e) main_mup3_pane_t4_ParamLimits

0x54dd,	// (0x0005209e) main_mup3_pane_t4

0x5533,	// (0x000520f4) main_mup3_pane_t5_ParamLimits

0x5533,	// (0x000520f4) main_mup3_pane_t5

0x55ef,	// (0x000521b0) main_mup3_pane_t6_ParamLimits

0x55ef,	// (0x000521b0) main_mup3_pane_t6

0x0005,

0xf79e,	// (0x0005c35f) main_mup3_pane_t_ParamLimits

0xf79e,	// (0x0005c35f) main_mup3_pane_t

0x56a7,	// (0x00052268) mup3_progress_pane_ParamLimits

0x56a7,	// (0x00052268) mup3_progress_pane

0x5733,	// (0x000522f4) popup_mup3_control_window_ParamLimits

0x5733,	// (0x000522f4) popup_mup3_control_window

0xd022,	// (0x00059be3) popup_mup3_text_window

0x5765,	// (0x00052326) mup3_progress_pane_t1

0x5784,	// (0x00052345) mup3_progress_pane_t2

0xd02a,	// (0x00059beb) mup3_progress_pane_t3

0x0002,

0xf7ab,	// (0x0005c36c) mup3_progress_pane_t

0xd047,	// (0x00059c08) mup_progress_pane_cp03

0x9847,	// (0x00056408) bg_tb_trans_pane_cp04

0x57a3,	// (0x00052364) mup3_volume_pane

0x57ab,	// (0x0005236c) popup_mup3_control_window_g1

0x57b4,	// (0x00052375) mup3_volume_pane_g1

0x57bd,	// (0x0005237e) mup3_volume_pane_g2

0x57c6,	// (0x00052387) mup3_volume_pane_g3

0x0002,

0xf7b2,	// (0x0005c373) mup3_volume_pane_g

0x9847,	// (0x00056408) bg_tb_trans_pane_cp03

0xd057,	// (0x00059c18) popup_mup3_text_window_g1

0xd05f,	// (0x00059c20) popup_mup3_text_window_t1

0xa92a,	// (0x000574eb) list_calc_item_pane_g1_ParamLimits

0xcabd,	// (0x0005967e) mup_volume_pane_cp_g1

0x508e,	// (0x00051c4f) main_touch_calib_pane_t3

0x50a2,	// (0x00051c63) main_touch_calib_pane_t4

0x50b6,	// (0x00051c77) main_touch_calib_pane_t5

0x9851,	// (0x00056412) aid_cell_size_toolbar2

0x9859,	// (0x0005641a) aid_popup3_width_pane

0x126b,	// (0x0004de2c) aid_zoom_text_msg_primary

0x1ef4,	// (0x0004eab5) vorec_t7

0xa8ee,	// (0x000574af) bg_calc_paper_pane_g1_ParamLimits

0xa8fa,	// (0x000574bb) bg_calc_paper_pane_g2_ParamLimits

0xa906,	// (0x000574c7) bg_calc_paper_pane_g3_ParamLimits

0xa912,	// (0x000574d3) bg_calc_paper_pane_g4_ParamLimits

0xa91e,	// (0x000574df) bg_calc_paper_pane_g5_ParamLimits

0x181a,	// (0x0004e3db) bg_calc_paper_pane_g6_ParamLimits

0x1829,	// (0x0004e3ea) bg_calc_paper_pane_g7_ParamLimits

0x1838,	// (0x0004e3f9) bg_calc_paper_pane_g8_ParamLimits

0xf154,	// (0x0005bd15) bg_calc_paper_pane_g_ParamLimits

0x184b,	// (0x0004e40c) calc_bg_paper_pane_g9_ParamLimits

0x2061,	// (0x0004ec22) image_qvga_pane_ParamLimits

0x2061,	// (0x0004ec22) image_qvga_pane

0xa811,	// (0x000573d2) bg_popup_sub_pane_cp04_ParamLimits

0xb71c,	// (0x000582dd) popup_mup_playback_window_g1_ParamLimits

0xb728,	// (0x000582e9) popup_mup_playback_window_t1_ParamLimits

0xb73d,	// (0x000582fe) popup_mup_playback_window_t2_ParamLimits

0xf4de,	// (0x0005c09f) popup_mup_playback_window_t_ParamLimits

0x4bcd,	// (0x0005178e) main_mup2_pane_g3_ParamLimits

0x4bcd,	// (0x0005178e) main_mup2_pane_g3

0x235e,	// (0x0004ef1f) popup_toolbar_window_cp04

0xbb32,	// (0x000586f3) popup_call2_audio_second_window_g3_ParamLimits

0xbb32,	// (0x000586f3) popup_call2_audio_second_window_g3

0xbf3c,	// (0x00058afd) popup_call2_audio_first_window_g4_ParamLimits

0xbf3c,	// (0x00058afd) popup_call2_audio_first_window_g4

0xc5bb,	// (0x0005917c) popup_call2_audio_in_window_g4_ParamLimits

0xc5bb,	// (0x0005917c) popup_call2_audio_in_window_g4

0x3aa0,	// (0x00050661) aid_area_sk_bg_cut_ParamLimits

0x3aa0,	// (0x00050661) aid_area_sk_bg_cut

0xb752,	// (0x00058313) aid_area_sk_bg_cut_2_ParamLimits

0xb752,	// (0x00058313) aid_area_sk_bg_cut_2

0x4ed1,	// (0x00051a92) aid_placing_details_win

0x4ed9,	// (0x00051a9a) aid_placing_details_win_2

0xcec1,	// (0x00059a82) camera2_autofocus_pane_g1_ParamLimits

0x1411,	// (0x0004dfd2) popup_fixed_preview_cale_window_ParamLimits

0x1411,	// (0x0004dfd2) popup_fixed_preview_cale_window

0xb520,	// (0x000580e1) navi_slider_pane_g3

0xb529,	// (0x000580ea) navi_slider_pane_g4

0xb532,	// (0x000580f3) navi_slider_pane_g5

0xb520,	// (0x000580e1) navi_slider_pane_g6

0x9c09,	// (0x000567ca) navi_slider_pane_g7

0xb653,	// (0x00058214) mup_scale_pane_g3

0xb65c,	// (0x0005821d) mup_scale_pane_g4

0xb665,	// (0x00058226) mup_scale_pane_g5

0x379e,	// (0x0005035f) mup_scale_pane_g6

0x37a7,	// (0x00050368) mup_scale_pane_g7

0xb520,	// (0x000580e1) cams2_slider_pane_g3

0xcb3f,	// (0x00059700) cams2_slider_pane_g4

0x9d56,	// (0x00056917) cams2_slider_pane_g5

0xb520,	// (0x000580e1) cams2_slider_pane_g6

0x9d5e,	// (0x0005691f) cams2_slider_pane_g7

0xcd6a,	// (0x0005992b) camera2_autofocus_pane_cp_g1

0xc956,	// (0x00059517) bg_popup_preview_window_pane_cp02_ParamLimits

0xc956,	// (0x00059517) bg_popup_preview_window_pane_cp02

0xd06d,	// (0x00059c2e) list_fp_cale_pane_ParamLimits

0xd06d,	// (0x00059c2e) list_fp_cale_pane

0xd079,	// (0x00059c3a) popup_fixed_preview_cale_window_t1_ParamLimits

0xd079,	// (0x00059c3a) popup_fixed_preview_cale_window_t1

0x57cf,	// (0x00052390) popup_fixed_preview_cale_window_t2_ParamLimits

0x57cf,	// (0x00052390) popup_fixed_preview_cale_window_t2

0x57e4,	// (0x000523a5) popup_fixed_preview_cale_window_t3_ParamLimits

0x57e4,	// (0x000523a5) popup_fixed_preview_cale_window_t3

0x0002,

0xf7b9,	// (0x0005c37a) popup_fixed_preview_cale_window_t_ParamLimits

0xf7b9,	// (0x0005c37a) popup_fixed_preview_cale_window_t

0x57f9,	// (0x000523ba) list_single_fp_cale_pane_ParamLimits

0x57f9,	// (0x000523ba) list_single_fp_cale_pane

0xd097,	// (0x00059c58) list_single_fp_cale_pane_g1_ParamLimits

0xd097,	// (0x00059c58) list_single_fp_cale_pane_g1

0xd0a3,	// (0x00059c64) list_single_fp_cale_pane_g2_ParamLimits

0xd0a3,	// (0x00059c64) list_single_fp_cale_pane_g2

0x0002,

0xf7c0,	// (0x0005c381) list_single_fp_cale_pane_g_ParamLimits

0xf7c0,	// (0x0005c381) list_single_fp_cale_pane_g

0xd0bc,	// (0x00059c7d) list_single_fp_cale_pane_t1_ParamLimits

0xd0bc,	// (0x00059c7d) list_single_fp_cale_pane_t1

0xd0ce,	// (0x00059c8f) list_single_fp_cale_pane_t2_ParamLimits

0xd0ce,	// (0x00059c8f) list_single_fp_cale_pane_t2

0x0001,

0xf7c7,	// (0x0005c388) list_single_fp_cale_pane_t_ParamLimits

0xf7c7,	// (0x0005c388) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9847,	// (0x00056408) main_dialer_pane

0x580f,	// (0x000523d0) aid_cell_size_keypad

0x5819,	// (0x000523da) dialer_ne_pane

0x5821,	// (0x000523e2) grid_dialer_command_1_pane

0x5829,	// (0x000523ea) grid_dialer_command_2_pane

0x5831,	// (0x000523f2) grid_dialer_keypad_pane

0x5843,	// (0x00052404) bg_popup_call_pane_cp06_ParamLimits

0x5843,	// (0x00052404) bg_popup_call_pane_cp06

0x584f,	// (0x00052410) dialer_ne_clear_pane_ParamLimits

0x584f,	// (0x00052410) dialer_ne_clear_pane

0xd101,	// (0x00059cc2) dialer_ne_pane_g1

0xd109,	// (0x00059cca) dialer_ne_pane_t1_ParamLimits

0xd109,	// (0x00059cca) dialer_ne_pane_t1

0x585b,	// (0x0005241c) dialer_ne_pane_t2_ParamLimits

0x585b,	// (0x0005241c) dialer_ne_pane_t2

0x5885,	// (0x00052446) dialer_ne_pane_t3_ParamLimits

0x5885,	// (0x00052446) dialer_ne_pane_t3

0x0002,

0xf7cc,	// (0x0005c38d) dialer_ne_pane_t_ParamLimits

0xf7cc,	// (0x0005c38d) dialer_ne_pane_t

0x58b5,	// (0x00052476) dialer_ne_pane_t3_copy1_ParamLimits

0x58b5,	// (0x00052476) dialer_ne_pane_t3_copy1

0x58e4,	// (0x000524a5) cell_dialer_keypad_pane_ParamLimits

0x58e4,	// (0x000524a5) cell_dialer_keypad_pane

0x58fb,	// (0x000524bc) cell_dialer_command_1_pane_ParamLimits

0x58fb,	// (0x000524bc) cell_dialer_command_1_pane

0x5911,	// (0x000524d2) cell_dialer_command_2_pane_ParamLimits

0x5911,	// (0x000524d2) cell_dialer_command_2_pane

0xd11b,	// (0x00059cdc) bg_button_pane_cp02_ParamLimits

0xd11b,	// (0x00059cdc) bg_button_pane_cp02

0x5920,	// (0x000524e1) cell_dialer_keypad_pane_g1_ParamLimits

0x5920,	// (0x000524e1) cell_dialer_keypad_pane_g1

0xd11b,	// (0x00059cdc) bg_button_pane_cp03_ParamLimits

0xd11b,	// (0x00059cdc) bg_button_pane_cp03

0x5934,	// (0x000524f5) cell_dialer_command_1_pane_g1_ParamLimits

0x5934,	// (0x000524f5) cell_dialer_command_1_pane_g1

0xd127,	// (0x00059ce8) bg_button_pane_cp04

0x5948,	// (0x00052509) cell_dialer_command_2_pane_g1

0xaace,	// (0x0005768f) bg_button_pane_cp06

0xd12f,	// (0x00059cf0) dialer_ne_clear_pane_g1

0xb3f3,	// (0x00057fb4) navi_pane_g2

0xb421,	// (0x00057fe2) navi_pane_g3

0x0002,

0xf3e1,	// (0x0005bfa2) navi_pane_g

0xb4b0,	// (0x00058071) navi_pane_mv_g2

0xb4d7,	// (0x00058098) navi_pane_mv_g5

0x336c,	// (0x0004ff2d) navi_pane_mv_t1

0xa8e2,	// (0x000574a3) main_clock2_pane

0xa3b1,	// (0x00056f72) main_clock2_list_pane_ParamLimits

0xa3b1,	// (0x00056f72) main_clock2_list_pane

0x59b9,	// (0x0005257a) main_clock2_pane_t1_ParamLimits

0x59b9,	// (0x0005257a) main_clock2_pane_t1

0x59f4,	// (0x000525b5) main_clock2_pane_t2_ParamLimits

0x59f4,	// (0x000525b5) main_clock2_pane_t2

0x0004,

0xf7d8,	// (0x0005c399) main_clock2_pane_t_ParamLimits

0xf7d8,	// (0x0005c399) main_clock2_pane_t

0x5a94,	// (0x00052655) popup_clock_analogue_window_cp03_ParamLimits

0x5a94,	// (0x00052655) popup_clock_analogue_window_cp03

0x5ab9,	// (0x0005267a) popup_clock_digital_window_cp02_ParamLimits

0x5ab9,	// (0x0005267a) popup_clock_digital_window_cp02

0x5b32,	// (0x000526f3) main_clock2_list_single_pane_ParamLimits

0x5b32,	// (0x000526f3) main_clock2_list_single_pane

0xaace,	// (0x0005768f) list_highlight_pane_cp05

0xd169,	// (0x00059d2a) main_clock2_list_single_pane_t1

0x235e,	// (0x0004ef1f) popup_toolbar_window_cp04_ParamLimits

0x4efb,	// (0x00051abc) camera2_autofocus_pane_g2_ParamLimits

0x4efb,	// (0x00051abc) camera2_autofocus_pane_g2

0x4f07,	// (0x00051ac8) camera2_autofocus_pane_g3_ParamLimits

0x4f07,	// (0x00051ac8) camera2_autofocus_pane_g3

0x4f13,	// (0x00051ad4) camera2_autofocus_pane_g4_ParamLimits

0x4f13,	// (0x00051ad4) camera2_autofocus_pane_g4

0x4f1f,	// (0x00051ae0) camera2_autofocus_pane_g5_ParamLimits

0x4f1f,	// (0x00051ae0) camera2_autofocus_pane_g5

0x0004,

0xf71c,	// (0x0005c2dd) camera2_autofocus_pane_g_ParamLimits

0xf71c,	// (0x0005c2dd) camera2_autofocus_pane_g

0x515f,	// (0x00051d20) camera2_autofocus_pane_cp_g2

0x5167,	// (0x00051d28) camera2_autofocus_pane_cp_g3

0x516f,	// (0x00051d30) camera2_autofocus_pane_cp_g4

0x5177,	// (0x00051d38) camera2_autofocus_pane_cp_g5

0x0004,

0xf782,	// (0x0005c343) camera2_autofocus_pane_cp_g

0x583b,	// (0x000523fc) popup_dialer_spcha_window

0x9847,	// (0x00056408) bg_popup_sub_pane_cp07

0xd177,	// (0x00059d38) list_spcha_pane

0xd17f,	// (0x00059d40) list_single_spcha_pane_ParamLimits

0xd17f,	// (0x00059d40) list_single_spcha_pane

0x9847,	// (0x00056408) list_highlight_pane_cp06

0xd190,	// (0x00059d51) list_single_spcha_pane_t1

0xc365,	// (0x00058f26) popup_call2_audio_out_window_g4_ParamLimits

0xc365,	// (0x00058f26) popup_call2_audio_out_window_g4

0x9847,	// (0x00056408) main_imed2_pane

0x9c6e,	// (0x0005682f) popup_imed_adjust2_window

0x42cf,	// (0x00050e90) popup_imed_trans_window_ParamLimits

0x42cf,	// (0x00050e90) popup_imed_trans_window

0xcba8,	// (0x00059769) popup_blid_sat_info2_window_t1

0xcbb6,	// (0x00059777) popup_blid_sat_info2_window_t2

0x000a,

0xf6b1,	// (0x0005c272) popup_blid_sat_info2_window_t

0x5be3,	// (0x000527a4) aid_size_cell_colour_35

0x5c03,	// (0x000527c4) aid_size_cell_colour_112

0x5c23,	// (0x000527e4) aid_size_cell_effect

0xc962,	// (0x00059523) bg_tb_trans_pane_cp02

0xaf7d,	// (0x00057b3e) heading_imed_pane

0x5c43,	// (0x00052804) listscroll_imed_pane

0xd19e,	// (0x00059d5f) heading_imed_pane_g1

0xd1a6,	// (0x00059d67) heading_imed_pane_t1

0xd1b4,	// (0x00059d75) grid_imed_colour_35_pane_ParamLimits

0xd1b4,	// (0x00059d75) grid_imed_colour_35_pane

0x5c4f,	// (0x00052810) grid_imed_effect_pane

0xd1e1,	// (0x00059da2) list_imed_aspect_pane

0x5c65,	// (0x00052826) scroll_pane_cp027_ParamLimits

0x5c65,	// (0x00052826) scroll_pane_cp027

0x5c76,	// (0x00052837) cell_imed_effect_pane_ParamLimits

0x5c76,	// (0x00052837) cell_imed_effect_pane

0xd1e9,	// (0x00059daa) cell_imed_colour_pane_ParamLimits

0xd1e9,	// (0x00059daa) cell_imed_colour_pane

0xd22b,	// (0x00059dec) cell_imed_colour_pane_g1_ParamLimits

0xd22b,	// (0x00059dec) cell_imed_colour_pane_g1

0xd23c,	// (0x00059dfd) hgihlgiht_grid_pane_cp016_ParamLimits

0xd23c,	// (0x00059dfd) hgihlgiht_grid_pane_cp016

0x5c9d,	// (0x0005285e) cell_imed_effect_pane_g1

0x5ca5,	// (0x00052866) grid_highlight_pane_cp017

0xd24d,	// (0x00059e0e) list_imed_single_pane_ParamLimits

0xd24d,	// (0x00059e0e) list_imed_single_pane

0x9847,	// (0x00056408) list_highlight_pane_cp07

0xd262,	// (0x00059e23) list_imed_aspect_pane_comp1_t1

0xc962,	// (0x00059523) bg_tb_trans_pane_cp05

0xd284,	// (0x00059e45) popup_imed_adjust2_window_g1

0xd2ab,	// (0x00059e6c) popup_imed_adjust2_window_t1

0xd2c3,	// (0x00059e84) slider_imed_adjust_pane

0xd2d7,	// (0x00059e98) slider_imed_adjust_pane_g1

0xd2e7,	// (0x00059ea8) slider_imed_adjust_pane_g2

0xd2f7,	// (0x00059eb8) slider_imed_adjust_pane_g3

0xd308,	// (0x00059ec9) slider_imed_adjust_pane_g4

0x0003,

0xf7f5,	// (0x0005c3b6) slider_imed_adjust_pane_g

0x5cae,	// (0x0005286f) aid_size_cell_clipart2

0x5cba,	// (0x0005287b) grid_imed_clipart_pane

0xd319,	// (0x00059eda) scroll_pane_cp031

0x5cc4,	// (0x00052885) cell_imed_clipart_pane_ParamLimits

0x5cc4,	// (0x00052885) cell_imed_clipart_pane

0x5ce6,	// (0x000528a7) cell_imed_clipart_pane_g1

0x9847,	// (0x00056408) grid_highlight_pane_cp014

0x5995,	// (0x00052556) main_clock2_pane_g1_ParamLimits

0x5995,	// (0x00052556) main_clock2_pane_g1

0x5ad9,	// (0x0005269a) aid_call2_pane_cp10

0x5aeb,	// (0x000526ac) aid_call_pane_cp10

0xb352,	// (0x00057f13) popup_clock_analogue_window_cp10_g1

0xb352,	// (0x00057f13) popup_clock_analogue_window_cp10_g2

0x5afd,	// (0x000526be) popup_clock_analogue_window_cp10_g3

0x5afd,	// (0x000526be) popup_clock_analogue_window_cp10_g4

0xb352,	// (0x00057f13) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7e3,	// (0x0005c3a4) popup_clock_analogue_window_cp10_g

0x5b13,	// (0x000526d4) popup_clock_analogue_window_cp10_t1

0x5b44,	// (0x00052705) clock_digital_number_pane_cp10_ParamLimits

0x5b44,	// (0x00052705) clock_digital_number_pane_cp10

0x5b5c,	// (0x0005271d) clock_digital_number_pane_cp11_ParamLimits

0x5b5c,	// (0x0005271d) clock_digital_number_pane_cp11

0x5b74,	// (0x00052735) clock_digital_number_pane_cp12_ParamLimits

0x5b74,	// (0x00052735) clock_digital_number_pane_cp12

0x5b8e,	// (0x0005274f) clock_digital_number_pane_cp13_ParamLimits

0x5b8e,	// (0x0005274f) clock_digital_number_pane_cp13

0x5ba8,	// (0x00052769) clock_digital_separator_pane_cp10_ParamLimits

0x5ba8,	// (0x00052769) clock_digital_separator_pane_cp10

0x5bc2,	// (0x00052783) popup_clock_digital_window_cp02_t1_ParamLimits

0x5bc2,	// (0x00052783) popup_clock_digital_window_cp02_t1

0xa809,	// (0x000573ca) clock_digital_number_pane_cp10_g1

0xa809,	// (0x000573ca) clock_digital_number_pane_cp10_g2

0x0001,

0xf7fe,	// (0x0005c3bf) clock_digital_number_pane_cp10_g

0xa809,	// (0x000573ca) clock_digital_separator_pane_cp10_g1

0xa809,	// (0x000573ca) clock_digital_separator_pane_g2_cp10

0xb4df,	// (0x000580a0) navi_pane_vded_g4

0xb4e8,	// (0x000580a9) navi_pane_vded_g5

0xb4f1,	// (0x000580b2) navi_pane_vded_t1

0x9847,	// (0x00056408) main_vded_pane

0x5cef,	// (0x000528b0) main_vded_pane_g1

0x5cf9,	// (0x000528ba) main_vded_pane_g2

0x5d03,	// (0x000528c4) main_vded_pane_g3

0x0002,

0xf803,	// (0x0005c3c4) main_vded_pane_g

0x5d0d,	// (0x000528ce) main_vded_pane_t1

0x5d1b,	// (0x000528dc) main_vded_pane_t2

0x0001,

0xf80a,	// (0x0005c3cb) main_vded_pane_t

0x5d29,	// (0x000528ea) vded_slider_pane

0x5d31,	// (0x000528f2) vded_video_pane

0xd321,	// (0x00059ee2) vded_video_pane_g1

0x5d39,	// (0x000528fa) vded_video_pane_g2

0xcd6a,	// (0x0005992b) vded_video_pane_g3

0x0002,

0xf80f,	// (0x0005c3d0) vded_video_pane_g

0xd32b,	// (0x00059eec) vded_slider_pane_g1

0xcabd,	// (0x0005967e) vded_slider_pane_g2

0xd334,	// (0x00059ef5) vded_slider_pane_g3

0xd33d,	// (0x00059efe) vded_slider_pane_g4

0xd346,	// (0x00059f07) vded_slider_pane_g5

0x0004,

0xf816,	// (0x0005c3d7) vded_slider_pane_g

0x571b,	// (0x000522dc) mup3_rocker_pane_ParamLimits

0x571b,	// (0x000522dc) mup3_rocker_pane

0x5d42,	// (0x00052903) mup3_control_keys_pane_g1

0x5d4a,	// (0x0005290b) mup3_control_keys_pane_g2

0x5d52,	// (0x00052913) mup3_control_keys_pane_g3

0x5d5a,	// (0x0005291b) mup3_control_keys_pane_g4

0x0003,

0xf821,	// (0x0005c3e2) mup3_control_keys_pane_g

0x1448,	// (0x0004e009) popup_toolbar2_fixed_window_cp01_ParamLimits

0x1448,	// (0x0004e009) popup_toolbar2_fixed_window_cp01

0x574f,	// (0x00052310) popup_toolbar2_fixed_window_cp02_ParamLimits

0x574f,	// (0x00052310) popup_toolbar2_fixed_window_cp02

0xbca4,	// (0x00058865) popup_call2_audio_second_window_t4_ParamLimits

0xbca4,	// (0x00058865) popup_call2_audio_second_window_t4

0xc1d2,	// (0x00058d93) popup_call2_audio_first_window_t6_ParamLimits

0xc1d2,	// (0x00058d93) popup_call2_audio_first_window_t6

0xc468,	// (0x00059029) popup_call2_audio_out_window_t6_ParamLimits

0xc468,	// (0x00059029) popup_call2_audio_out_window_t6

0x9847,	// (0x00056408) main_vitu_pane

0x5d6a,	// (0x0005292b) aid_size_cell_itu_ParamLimits

0x5d6a,	// (0x0005292b) aid_size_cell_itu

0xa3b1,	// (0x00056f72) bg_popup_window_pane_cp08_ParamLimits

0xa3b1,	// (0x00056f72) bg_popup_window_pane_cp08

0x5d80,	// (0x00052941) field_vitu_entry_pane_ParamLimits

0x5d80,	// (0x00052941) field_vitu_entry_pane

0x5d98,	// (0x00052959) grid_vitu_function_pane_ParamLimits

0x5d98,	// (0x00052959) grid_vitu_function_pane

0x5db3,	// (0x00052974) grid_vitu_itu_pane_ParamLimits

0x5db3,	// (0x00052974) grid_vitu_itu_pane

0x5dd1,	// (0x00052992) cell_vitu_itu_pane_ParamLimits

0x5dd1,	// (0x00052992) cell_vitu_itu_pane

0x5df3,	// (0x000529b4) cell_vitu_function_pane_ParamLimits

0x5df3,	// (0x000529b4) cell_vitu_function_pane

0xa3b1,	// (0x00056f72) bg_popup_sub_pane_cp08_ParamLimits

0xa3b1,	// (0x00056f72) bg_popup_sub_pane_cp08

0x5e0c,	// (0x000529cd) field_vitu_entry_pane_t1_ParamLimits

0x5e0c,	// (0x000529cd) field_vitu_entry_pane_t1

0xd367,	// (0x00059f28) field_vitu_entry_pane_t2_ParamLimits

0xd367,	// (0x00059f28) field_vitu_entry_pane_t2

0x0001,

0xf82f,	// (0x0005c3f0) field_vitu_entry_pane_t_ParamLimits

0xf82f,	// (0x0005c3f0) field_vitu_entry_pane_t

0xd384,	// (0x00059f45) bg_button_pane_cp05_ParamLimits

0xd384,	// (0x00059f45) bg_button_pane_cp05

0x5e2b,	// (0x000529ec) cell_vitu_itu_pane_g1

0x5e43,	// (0x00052a04) cell_vitu_itu_pane_t1_ParamLimits

0x5e43,	// (0x00052a04) cell_vitu_itu_pane_t1

0x5e55,	// (0x00052a16) cell_vitu_itu_pane_t2_ParamLimits

0x5e55,	// (0x00052a16) cell_vitu_itu_pane_t2

0x0002,

0xf834,	// (0x0005c3f5) cell_vitu_itu_pane_t_ParamLimits

0xf834,	// (0x0005c3f5) cell_vitu_itu_pane_t

0xd392,	// (0x00059f53) bg_button_pane_cp07

0x5e8a,	// (0x00052a4b) cell_vitu_function_pane_g1

0x9acb,	// (0x0005668c) main_calc_pane_g1

0x125f,	// (0x0004de20) aid_visual_content_pane

0x9847,	// (0x00056408) main_vradio_pane

0x5e93,	// (0x00052a54) main_vradio_pane_g1_ParamLimits

0x5e93,	// (0x00052a54) main_vradio_pane_g1

0xd39c,	// (0x00059f5d) main_vradio_pane_g2_ParamLimits

0xd39c,	// (0x00059f5d) main_vradio_pane_g2

0x0001,

0xf83b,	// (0x0005c3fc) main_vradio_pane_g_ParamLimits

0xf83b,	// (0x0005c3fc) main_vradio_pane_g

0x5eac,	// (0x00052a6d) main_vradio_pane_t1_ParamLimits

0x5eac,	// (0x00052a6d) main_vradio_pane_t1

0x5ec1,	// (0x00052a82) main_vradio_pane_t2_ParamLimits

0x5ec1,	// (0x00052a82) main_vradio_pane_t2

0xd3a9,	// (0x00059f6a) main_vradio_pane_t3_ParamLimits

0xd3a9,	// (0x00059f6a) main_vradio_pane_t3

0x0002,

0xf840,	// (0x0005c401) main_vradio_pane_t_ParamLimits

0xf840,	// (0x0005c401) main_vradio_pane_t

0x5ed6,	// (0x00052a97) vradio_rocker_control_pane_ParamLimits

0x5ed6,	// (0x00052a97) vradio_rocker_control_pane

0x5ee8,	// (0x00052aa9) vradio_station_info_pane_ParamLimits

0x5ee8,	// (0x00052aa9) vradio_station_info_pane

0xd3bd,	// (0x00059f7e) vradio_frequency_info_pane_ParamLimits

0xd3bd,	// (0x00059f7e) vradio_frequency_info_pane

0xcd6a,	// (0x0005992b) vradio_station_info_pane_g1

0xd3cc,	// (0x00059f8d) vradio_station_info_pane_t1_ParamLimits

0xd3cc,	// (0x00059f8d) vradio_station_info_pane_t1

0xd3ee,	// (0x00059faf) vradio_station_info_pane_t2_ParamLimits

0xd3ee,	// (0x00059faf) vradio_station_info_pane_t2

0x0001,

0xf847,	// (0x0005c408) vradio_station_info_pane_t_ParamLimits

0xf847,	// (0x0005c408) vradio_station_info_pane_t

0xd400,	// (0x00059fc1) vradio_tuning_pane

0xd408,	// (0x00059fc9) vradio_rocker_control_pane_g1

0xd410,	// (0x00059fd1) vradio_rocker_control_pane_g2

0xd418,	// (0x00059fd9) vradio_rocker_control_pane_g3

0xd420,	// (0x00059fe1) vradio_rocker_control_pane_g4

0xd428,	// (0x00059fe9) vradio_rocker_control_pane_g5

0x0004,

0xf84c,	// (0x0005c40d) vradio_rocker_control_pane_g

0x5efa,	// (0x00052abb) vradio_frequency_info_pane_g1

0xd430,	// (0x00059ff1) vradio_frequency_info_pane_t1_ParamLimits

0xd430,	// (0x00059ff1) vradio_frequency_info_pane_t1

0x5f04,	// (0x00052ac5) vradio_tuning_pane_g1

0x5f0f,	// (0x00052ad0) vradio_tuning_pane_t1

0x986d,	// (0x0005642e) area_side_right_pane_ParamLimits

0x986d,	// (0x0005642e) area_side_right_pane

0xc91d,	// (0x000594de) status_small_pane_g1

0xc925,	// (0x000594e6) status_small_pane_g2

0xc92e,	// (0x000594ef) status_small_pane_g3

0xc937,	// (0x000594f8) status_small_pane_g4

0x0003,

0xf607,	// (0x0005c1c8) status_small_pane_g

0xc940,	// (0x00059501) status_small_pane_t1

0x9847,	// (0x00056408) main_video3_pane

0xd444,	// (0x0005a005) cams_zoom_vslider_pane

0xd44c,	// (0x0005a00d) image3_wide_pane_ParamLimits

0xd44c,	// (0x0005a00d) image3_wide_pane

0xd466,	// (0x0005a027) image3_wide_small_pane

0xd472,	// (0x0005a033) main_video3_pane_g1_ParamLimits

0xd472,	// (0x0005a033) main_video3_pane_g1

0xd48e,	// (0x0005a04f) main_video3_pane_g2_ParamLimits

0xd48e,	// (0x0005a04f) main_video3_pane_g2

0x0001,

0xf857,	// (0x0005c418) main_video3_pane_g_ParamLimits

0xf857,	// (0x0005c418) main_video3_pane_g

0xd4aa,	// (0x0005a06b) main_video3_pane_t1_ParamLimits

0xd4aa,	// (0x0005a06b) main_video3_pane_t1

0xd4d5,	// (0x0005a096) main_video3_pane_t2_ParamLimits

0xd4d5,	// (0x0005a096) main_video3_pane_t2

0xd500,	// (0x0005a0c1) main_video3_pane_t3_ParamLimits

0xd500,	// (0x0005a0c1) main_video3_pane_t3

0x0002,

0xf85c,	// (0x0005c41d) main_video3_pane_t_ParamLimits

0xf85c,	// (0x0005c41d) main_video3_pane_t

0xd52d,	// (0x0005a0ee) cams_zoom_vslider_pane_g1

0xd536,	// (0x0005a0f7) cams_zoom_vslider_pane_g2

0x0001,

0xf863,	// (0x0005c424) cams_zoom_vslider_pane_g

0xd53e,	// (0x0005a0ff) small_slider_vertical_pane

0xcd6a,	// (0x0005992b) small_slider_vertical_pane_g1

0xcd6a,	// (0x0005992b) small_slider_vertical_pane_g2

0xd546,	// (0x0005a107) small_slider_vertical_pane_g3

0x0002,

0xf868,	// (0x0005c429) small_slider_vertical_pane_g

0x9847,	// (0x00056408) main_hwr_training_pane

0xd54f,	// (0x0005a110) hwr_training_instruct_pane_ParamLimits

0xd54f,	// (0x0005a110) hwr_training_instruct_pane

0x5f1e,	// (0x00052adf) hwr_training_navi_pane_ParamLimits

0x5f1e,	// (0x00052adf) hwr_training_navi_pane

0x5f3d,	// (0x00052afe) hwr_training_write_pane_ParamLimits

0x5f3d,	// (0x00052afe) hwr_training_write_pane

0x9847,	// (0x00056408) bg_frame_shadow_pane

0xd586,	// (0x0005a147) hwr_training_write_pane_g1

0xd58e,	// (0x0005a14f) hwr_training_write_pane_g2

0xd596,	// (0x0005a157) hwr_training_write_pane_g3

0xd59e,	// (0x0005a15f) hwr_training_write_pane_g4

0xd5a6,	// (0x0005a167) hwr_training_write_pane_g5

0xd5ae,	// (0x0005a16f) hwr_training_write_pane_g6

0xd5b6,	// (0x0005a177) hwr_training_write_pane_g7

0x0006,

0xf86f,	// (0x0005c430) hwr_training_write_pane_g

0x9d67,	// (0x00056928) hwr_training_navi_pane_g1_ParamLimits

0x9d67,	// (0x00056928) hwr_training_navi_pane_g1

0x9d79,	// (0x0005693a) hwr_training_navi_pane_g2_ParamLimits

0x9d79,	// (0x0005693a) hwr_training_navi_pane_g2

0x9d8b,	// (0x0005694c) hwr_training_navi_pane_g3_ParamLimits

0x9d8b,	// (0x0005694c) hwr_training_navi_pane_g3

0x9d9b,	// (0x0005695c) hwr_training_navi_pane_g4_ParamLimits

0x9d9b,	// (0x0005695c) hwr_training_navi_pane_g4

0x0004,

0xf87e,	// (0x0005c43f) hwr_training_navi_pane_g_ParamLimits

0xf87e,	// (0x0005c43f) hwr_training_navi_pane_g

0x9da8,	// (0x00056969) hwr_training_navi_pane_t1

0x5f87,	// (0x00052b48) list_single_hwr_training_instruct_pane_ParamLimits

0x5f87,	// (0x00052b48) list_single_hwr_training_instruct_pane

0xd5be,	// (0x0005a17f) list_single_hwr_training_instruct_pane_t1

0xccaa,	// (0x0005986b) bg_frame_shadow_pane_g1

0xd5cd,	// (0x0005a18e) bg_frame_shadow_pane_g2

0xd5d5,	// (0x0005a196) bg_frame_shadow_pane_g3

0xd5dd,	// (0x0005a19e) bg_frame_shadow_pane_g4

0xd5e5,	// (0x0005a1a6) bg_frame_shadow_pane_g5

0xd5ed,	// (0x0005a1ae) bg_frame_shadow_pane_g6

0xd5f5,	// (0x0005a1b6) bg_frame_shadow_pane_g7

0xa9a4,	// (0x00057565) bg_frame_shadow_pane_g8

0x0007,

0xf889,	// (0x0005c44a) bg_frame_shadow_pane_g

0x9847,	// (0x00056408) main_video_tele_dialer_pane

0x5f9d,	// (0x00052b5e) aid_size_cell_video_keypad_ParamLimits

0x5f9d,	// (0x00052b5e) aid_size_cell_video_keypad

0x5fb7,	// (0x00052b78) grid_video_dialer_keypad_pane_ParamLimits

0x5fb7,	// (0x00052b78) grid_video_dialer_keypad_pane

0x6005,	// (0x00052bc6) video_down_pane_cp_ParamLimits

0x6005,	// (0x00052bc6) video_down_pane_cp

0x6037,	// (0x00052bf8) cell_video_dialer_keypad_pane_ParamLimits

0x6037,	// (0x00052bf8) cell_video_dialer_keypad_pane

0xd5fd,	// (0x0005a1be) bg_button_pane_cp08_ParamLimits

0xd5fd,	// (0x0005a1be) bg_button_pane_cp08

0x6059,	// (0x00052c1a) cell_video_dialer_keypad_pane_g1_ParamLimits

0x6059,	// (0x00052c1a) cell_video_dialer_keypad_pane_g1

0x5705,	// (0x000522c6) mup3_rocker2_pane_ParamLimits

0x5705,	// (0x000522c6) mup3_rocker2_pane

0xcd6a,	// (0x0005992b) mup3_rocker2_pane_g1

0x41be,	// (0x00050d7f) main_dialer2_pane

0x9847,	// (0x00056408) main_mp4_pane

0x9dd4,	// (0x00056995) main_mp4_pane_g1_ParamLimits

0x9dd4,	// (0x00056995) main_mp4_pane_g1

0x9dd4,	// (0x00056995) main_mp4_pane_g2_ParamLimits

0x9dd4,	// (0x00056995) main_mp4_pane_g2

0x6093,	// (0x00052c54) main_mp4_pane_g3_ParamLimits

0x6093,	// (0x00052c54) main_mp4_pane_g3

0x9de2,	// (0x000569a3) main_mp4_pane_g4_ParamLimits

0x9de2,	// (0x000569a3) main_mp4_pane_g4

0x9e10,	// (0x000569d1) main_mp4_pane_g5_ParamLimits

0x9e10,	// (0x000569d1) main_mp4_pane_g5

0x0007,

0xf8a9,	// (0x0005c46a) main_mp4_pane_g_ParamLimits

0xf8a9,	// (0x0005c46a) main_mp4_pane_g

0x9e84,	// (0x00056a45) main_mp4_pane_t1_ParamLimits

0x9e84,	// (0x00056a45) main_mp4_pane_t1

0x9ee0,	// (0x00056aa1) main_mp4_pane_t2_ParamLimits

0x9ee0,	// (0x00056aa1) main_mp4_pane_t2

0xd609,	// (0x0005a1ca) main_mp4_pane_t3_ParamLimits

0xd609,	// (0x0005a1ca) main_mp4_pane_t3

0x9f32,	// (0x00056af3) main_mp4_pane_t4_ParamLimits

0x9f32,	// (0x00056af3) main_mp4_pane_t4

0x0003,

0xf8ba,	// (0x0005c47b) main_mp4_pane_t_ParamLimits

0xf8ba,	// (0x0005c47b) main_mp4_pane_t

0x9f76,	// (0x00056b37) mp4_progress_pane_ParamLimits

0x9f76,	// (0x00056b37) mp4_progress_pane

0x9fc0,	// (0x00056b81) mp4_rocker_pane_ParamLimits

0x9fc0,	// (0x00056b81) mp4_rocker_pane

0xd637,	// (0x0005a1f8) mp4_progress_pane_t1

0xd650,	// (0x0005a211) mp4_progress_pane_t2

0x0001,

0xf8c3,	// (0x0005c484) mp4_progress_pane_t

0xd669,	// (0x0005a22a) mup_progress_pane_cp04

0xcd6a,	// (0x0005992b) mp4_rocker_pane_g1

0x60cf,	// (0x00052c90) aid_cell_size_keypad2_ParamLimits

0x60cf,	// (0x00052c90) aid_cell_size_keypad2

0x60e5,	// (0x00052ca6) dialer2_ne_pane_ParamLimits

0x60e5,	// (0x00052ca6) dialer2_ne_pane

0x60ff,	// (0x00052cc0) grid_dialer2_keypad_pane_ParamLimits

0x60ff,	// (0x00052cc0) grid_dialer2_keypad_pane

0xcb4f,	// (0x00059710) bg_popup_call_pane_cp07_ParamLimits

0xcb4f,	// (0x00059710) bg_popup_call_pane_cp07

0x611b,	// (0x00052cdc) dialer2_ne_pane_t1_ParamLimits

0x611b,	// (0x00052cdc) dialer2_ne_pane_t1

0x6157,	// (0x00052d18) cell_dialer2_keypad_pane_ParamLimits

0x6157,	// (0x00052d18) cell_dialer2_keypad_pane

0xd68e,	// (0x0005a24f) bg_button_pane_pane_cp04_ParamLimits

0xd68e,	// (0x0005a24f) bg_button_pane_pane_cp04

0x6179,	// (0x00052d3a) cell_dialer2_keypad_pane_g1_ParamLimits

0x6179,	// (0x00052d3a) cell_dialer2_keypad_pane_g1

0x2232,	// (0x0004edf3) aid_placing_vt_set_content_ParamLimits

0x2232,	// (0x0004edf3) aid_placing_vt_set_content

0x225a,	// (0x0004ee1b) aid_placing_vt_set_title_ParamLimits

0x225a,	// (0x0004ee1b) aid_placing_vt_set_title

0x9847,	// (0x00056408) main_image3_pane

0x623f,	// (0x00052e00) area_side_right_pane_cp01_ParamLimits

0x623f,	// (0x00052e00) area_side_right_pane_cp01

0x9dd4,	// (0x00056995) main_image3_pane_g1_ParamLimits

0x9dd4,	// (0x00056995) main_image3_pane_g1

0x6256,	// (0x00052e17) main_image3_pane_g2_ParamLimits

0x6256,	// (0x00052e17) main_image3_pane_g2

0x627e,	// (0x00052e3f) main_image3_pane_g3_ParamLimits

0x627e,	// (0x00052e3f) main_image3_pane_g3

0x62a8,	// (0x00052e69) main_image3_pane_g4_ParamLimits

0x62a8,	// (0x00052e69) main_image3_pane_g4

0x0003,

0xf8d2,	// (0x0005c493) main_image3_pane_g_ParamLimits

0xf8d2,	// (0x0005c493) main_image3_pane_g

0x62d2,	// (0x00052e93) main_image3_pane_t1_ParamLimits

0x62d2,	// (0x00052e93) main_image3_pane_t1

0x632a,	// (0x00052eeb) main_image3_pane_t2_ParamLimits

0x632a,	// (0x00052eeb) main_image3_pane_t2

0x637c,	// (0x00052f3d) main_image3_pane_t3_ParamLimits

0x637c,	// (0x00052f3d) main_image3_pane_t3

0x0003,

0xf8db,	// (0x0005c49c) main_image3_pane_t_ParamLimits

0xf8db,	// (0x0005c49c) main_image3_pane_t

0xa3b1,	// (0x00056f72) grid_sctrl_middle_pane_cp01_ParamLimits

0xa3b1,	// (0x00056f72) grid_sctrl_middle_pane_cp01

0x6404,	// (0x00052fc5) cell_sctrl_middle_pane_cp01_ParamLimits

0x6404,	// (0x00052fc5) cell_sctrl_middle_pane_cp01

0x6421,	// (0x00052fe2) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x6421,	// (0x00052fe2) cell_sctrl_middle_pane_cp01_g1

0x9847,	// (0x00056408) main_call4_pane

0x6437,	// (0x00052ff8) aid_size_button_call4_ParamLimits

0x6437,	// (0x00052ff8) aid_size_button_call4

0x646a,	// (0x0005302b) call4_windows_pane_ParamLimits

0x646a,	// (0x0005302b) call4_windows_pane

0x6489,	// (0x0005304a) grid_call4_button_pane_ParamLimits

0x6489,	// (0x0005304a) grid_call4_button_pane

0x64bc,	// (0x0005307d) call4_windows_conf_pane

0x64d3,	// (0x00053094) popup_call4_audio_first_window_ParamLimits

0x64d3,	// (0x00053094) popup_call4_audio_first_window

0x6523,	// (0x000530e4) popup_call4_audio_second_window_ParamLimits

0x6523,	// (0x000530e4) popup_call4_audio_second_window

0x653a,	// (0x000530fb) popup_call4_audio_wait_window_ParamLimits

0x653a,	// (0x000530fb) popup_call4_audio_wait_window

0x6548,	// (0x00053109) cell_call4_button_pane_ParamLimits

0x6548,	// (0x00053109) cell_call4_button_pane

0x656d,	// (0x0005312e) bg_button_pane_cp09_ParamLimits

0x656d,	// (0x0005312e) bg_button_pane_cp09

0x6579,	// (0x0005313a) cell_call4_button_pane_g1_ParamLimits

0x6579,	// (0x0005313a) cell_call4_button_pane_g1

0x659f,	// (0x00053160) cell_call4_button_pane_t1_ParamLimits

0x659f,	// (0x00053160) cell_call4_button_pane_t1

0xd6a2,	// (0x0005a263) popup_call4_audio_conf_window_ParamLimits

0xd6a2,	// (0x0005a263) popup_call4_audio_conf_window

0x5765,	// (0x00052326) mup3_progress_pane_t1_ParamLimits

0x5784,	// (0x00052345) mup3_progress_pane_t2_ParamLimits

0xd02a,	// (0x00059beb) mup3_progress_pane_t3_ParamLimits

0xf7ab,	// (0x0005c36c) mup3_progress_pane_t_ParamLimits

0xd047,	// (0x00059c08) mup_progress_pane_cp03_ParamLimits

0x5d62,	// (0x00052923) mup3_control_keys_pane_g4_copy1

0x9fa4,	// (0x00056b65) mp4_rocker2_pane_ParamLimits

0x9fa4,	// (0x00056b65) mp4_rocker2_pane

0xd6b6,	// (0x0005a277) mp4_rocker2_pane_g1

0xd6be,	// (0x0005a27f) mp4_rocker2_pane_g2

0xa044,	// (0x00056c05) mp4_rocker2_pane_g3

0xa04c,	// (0x00056c0d) mp4_rocker2_pane_g4

0xa054,	// (0x00056c15) mp4_rocker2_pane_g5

0x0004,

0xf8e4,	// (0x0005c4a5) mp4_rocker2_pane_g

0x9847,	// (0x00056408) main_camera4_pane

0x9847,	// (0x00056408) main_video4_pane

0x5fd3,	// (0x00052b94) main_video_tele_dialer_pane_t1_ParamLimits

0x5fd3,	// (0x00052b94) main_video_tele_dialer_pane_t1

0x5fec,	// (0x00052bad) main_video_tele_dialer_pane_t2_ParamLimits

0x5fec,	// (0x00052bad) main_video_tele_dialer_pane_t2

0x0001,

0xf89a,	// (0x0005c45b) main_video_tele_dialer_pane_t_ParamLimits

0xf89a,	// (0x0005c45b) main_video_tele_dialer_pane_t

0x65e1,	// (0x000531a2) cam4_autofocus_pane_ParamLimits

0x65e1,	// (0x000531a2) cam4_autofocus_pane

0x65f7,	// (0x000531b8) cam4_image_uncrop_pane_ParamLimits

0x65f7,	// (0x000531b8) cam4_image_uncrop_pane

0x6611,	// (0x000531d2) cam4_indicators_pane_ParamLimits

0x6611,	// (0x000531d2) cam4_indicators_pane

0x663c,	// (0x000531fd) main_camera4_pane_g1_ParamLimits

0x663c,	// (0x000531fd) main_camera4_pane_g1

0x664e,	// (0x0005320f) main_camera4_pane_g2_ParamLimits

0x664e,	// (0x0005320f) main_camera4_pane_g2

0x6661,	// (0x00053222) main_camera4_pane_g3_ParamLimits

0x6661,	// (0x00053222) main_camera4_pane_g3

0x6674,	// (0x00053235) main_camera4_pane_g4_ParamLimits

0x6674,	// (0x00053235) main_camera4_pane_g4

0x6687,	// (0x00053248) main_camera4_pane_g5_ParamLimits

0x6687,	// (0x00053248) main_camera4_pane_g5

0x0005,

0xf8ef,	// (0x0005c4b0) main_camera4_pane_g_ParamLimits

0xf8ef,	// (0x0005c4b0) main_camera4_pane_g

0x66ab,	// (0x0005326c) main_camera4_pane_t1_ParamLimits

0x66ab,	// (0x0005326c) main_camera4_pane_t1

0xcfaf,	// (0x00059b70) bg_tb_trans_pane_cp06

0xa080,	// (0x00056c41) cam4_indicators_pane_g1

0xa091,	// (0x00056c52) cam4_indicators_pane_g2

0x0002,

0xf90a,	// (0x0005c4cb) cam4_indicators_pane_g

0xa0a9,	// (0x00056c6a) cam4_indicators_pane_t1

0x670f,	// (0x000532d0) main_video4_pane_g1_ParamLimits

0x670f,	// (0x000532d0) main_video4_pane_g1

0x671e,	// (0x000532df) main_video4_pane_g2_ParamLimits

0x671e,	// (0x000532df) main_video4_pane_g2

0x672d,	// (0x000532ee) main_video4_pane_g3_ParamLimits

0x672d,	// (0x000532ee) main_video4_pane_g3

0x673c,	// (0x000532fd) main_video4_pane_g4_ParamLimits

0x673c,	// (0x000532fd) main_video4_pane_g4

0x0004,

0xf911,	// (0x0005c4d2) main_video4_pane_g_ParamLimits

0xf911,	// (0x0005c4d2) main_video4_pane_g

0x675a,	// (0x0005331b) vid4_indicators_pane_ParamLimits

0x675a,	// (0x0005331b) vid4_indicators_pane

0x6788,	// (0x00053349) video4_image_uncrop_cif_pane_ParamLimits

0x6788,	// (0x00053349) video4_image_uncrop_cif_pane

0x67a2,	// (0x00053363) video4_image_uncrop_nhd_pane_ParamLimits

0x67a2,	// (0x00053363) video4_image_uncrop_nhd_pane

0x65f7,	// (0x000531b8) video4_image_uncrop_vga_pane_ParamLimits

0x65f7,	// (0x000531b8) video4_image_uncrop_vga_pane

0xa3b1,	// (0x00056f72) bg_tb_trans_pane_cp07

0xa0d3,	// (0x00056c94) vid4_indicators_pane_g1

0xa0e7,	// (0x00056ca8) vid4_indicators_pane_g2

0xa0fb,	// (0x00056cbc) vid4_indicators_pane_g3

0x0004,

0xf91c,	// (0x0005c4dd) vid4_indicators_pane_g

0xa128,	// (0x00056ce9) vid4_indicators_pane_t1

0x67b6,	// (0x00053377) cam4_autofocus_pane_g1

0x67be,	// (0x0005337f) cam4_autofocus_pane_g2

0x67c6,	// (0x00053387) cam4_autofocus_pane_g3

0x0002,

0xf927,	// (0x0005c4e8) cam4_autofocus_pane_g

0x67ce,	// (0x0005338f) cam4_autofocus_pane_g3_copy1

0x601b,	// (0x00052bdc) video_down_pane_cp_t1

0x6029,	// (0x00052bea) video_down_pane_cp_t2

0x0001,

0xf89f,	// (0x0005c460) video_down_pane_cp_t

0xa3b1,	// (0x00056f72) popup_vitu2_window_ParamLimits

0xa3b1,	// (0x00056f72) popup_vitu2_window

0x67d6,	// (0x00053397) aid_size_cell2_itu2_ParamLimits

0x67d6,	// (0x00053397) aid_size_cell2_itu2

0x67fc,	// (0x000533bd) aid_size_cell_itu2_ParamLimits

0x67fc,	// (0x000533bd) aid_size_cell_itu2

0x6858,	// (0x00053419) bg_popup_window_pane_cp09_ParamLimits

0x6858,	// (0x00053419) bg_popup_window_pane_cp09

0x6866,	// (0x00053427) field_vitu2_entry_pane_ParamLimits

0x6866,	// (0x00053427) field_vitu2_entry_pane

0x688c,	// (0x0005344d) grid_vitu2_function_pane_ParamLimits

0x688c,	// (0x0005344d) grid_vitu2_function_pane

0x68dd,	// (0x0005349e) grid_vitu2_itu_pane_ParamLimits

0x68dd,	// (0x0005349e) grid_vitu2_itu_pane

0x6973,	// (0x00053534) cell_vitu2_itu_pane_ParamLimits

0x6973,	// (0x00053534) cell_vitu2_itu_pane

0x699f,	// (0x00053560) cell_vitu2_function_pane_ParamLimits

0x699f,	// (0x00053560) cell_vitu2_function_pane

0xd6c6,	// (0x0005a287) bg_popup_call_pane_cp08_ParamLimits

0xd6c6,	// (0x0005a287) bg_popup_call_pane_cp08

0xd6dd,	// (0x0005a29e) field_vitu2_entry_pane_g1

0xd6e9,	// (0x0005a2aa) field_vitu2_entry_pane_g2

0x0002,

0xf92e,	// (0x0005c4ef) field_vitu2_entry_pane_g

0x05ce,	// (0x0004d18f) field_vitu2_entry_pane_t1_ParamLimits

0x05ce,	// (0x0004d18f) field_vitu2_entry_pane_t1

0x69de,	// (0x0005359f) field_vitu2_entry_pane_t2_ParamLimits

0x69de,	// (0x0005359f) field_vitu2_entry_pane_t2

0x0001,

0xf935,	// (0x0005c4f6) field_vitu2_entry_pane_t_ParamLimits

0xf935,	// (0x0005c4f6) field_vitu2_entry_pane_t

0x69fb,	// (0x000535bc) bg_button_pane_cp010_ParamLimits

0x69fb,	// (0x000535bc) bg_button_pane_cp010

0xa13f,	// (0x00056d00) cell_vitu2_itu_pane_g1

0x6a17,	// (0x000535d8) cell_vitu2_itu_pane_t1_ParamLimits

0x6a17,	// (0x000535d8) cell_vitu2_itu_pane_t1

0x05fe,	// (0x0004d1bf) cell_vitu2_itu_pane_t2_ParamLimits

0x05fe,	// (0x0004d1bf) cell_vitu2_itu_pane_t2

0x0002,

0xf93f,	// (0x0005c500) cell_vitu2_itu_pane_t_ParamLimits

0xf93f,	// (0x0005c500) cell_vitu2_itu_pane_t

0xa3b1,	// (0x00056f72) bg_button_pane_cp011

0x6a75,	// (0x00053636) cell_vitu2_function_pane_g1

0x9847,	// (0x00056408) main_myfav_hc_pane

0x63cc,	// (0x00052f8d) popup_image3_note_pane_ParamLimits

0x63cc,	// (0x00052f8d) popup_image3_note_pane

0x63e8,	// (0x00052fa9) popup_image3_tool_bar_pane_ParamLimits

0x63e8,	// (0x00052fa9) popup_image3_tool_bar_pane

0x068c,	// (0x0004d24d) cell_vitu2_itu_pane_t3_ParamLimits

0x068c,	// (0x0004d24d) cell_vitu2_itu_pane_t3

0x9847,	// (0x00056408) bg_popup_trans_pane

0xd70b,	// (0x0005a2cc) grid_image3_tool_bar_pane

0xd715,	// (0x0005a2d6) bg_popup_trans_pane_g1

0xad27,	// (0x000578e8) bg_popup_trans_pane_g2

0xd71d,	// (0x0005a2de) bg_popup_trans_pane_g3

0xd725,	// (0x0005a2e6) bg_popup_trans_pane_g4

0xd72d,	// (0x0005a2ee) bg_popup_trans_pane_g5

0xd735,	// (0x0005a2f6) bg_popup_trans_pane_g6

0xd73d,	// (0x0005a2fe) bg_popup_trans_pane_g7

0xd745,	// (0x0005a306) bg_popup_trans_pane_g8

0xad07,	// (0x000578c8) bg_popup_trans_pane_g9

0x0008,

0xf946,	// (0x0005c507) bg_popup_trans_pane_g

0xd74d,	// (0x0005a30e) cell_image3_tool_bar_pane_ParamLimits

0xd74d,	// (0x0005a30e) cell_image3_tool_bar_pane

0xcd6a,	// (0x0005992b) cell_image3_tool_bar_pane_g1

0x9847,	// (0x00056408) bg_popup_trans_pane_cp1

0xd761,	// (0x0005a322) popup_image3_note_pane_t1

0xd76f,	// (0x0005a330) popup_image3_note_pane_t2

0xd77d,	// (0x0005a33e) popup_image3_note_pane_t3

0x0002,

0xf959,	// (0x0005c51a) popup_image3_note_pane_t

0xd78b,	// (0x0005a34c) popup_image3_note_pane_t3_copy1

0x6a89,	// (0x0005364a) bg_myfav_hc_instruction_pane_ParamLimits

0x6a89,	// (0x0005364a) bg_myfav_hc_instruction_pane

0x6a9d,	// (0x0005365e) cell_myfav_contact_pane_ParamLimits

0x6a9d,	// (0x0005365e) cell_myfav_contact_pane

0x6abb,	// (0x0005367c) cell_myfav_contact_pane_cp1_ParamLimits

0x6abb,	// (0x0005367c) cell_myfav_contact_pane_cp1

0x6ad3,	// (0x00053694) cell_myfav_contact_pane_cp2_ParamLimits

0x6ad3,	// (0x00053694) cell_myfav_contact_pane_cp2

0x6aeb,	// (0x000536ac) cell_myfav_contact_pane_cp3_ParamLimits

0x6aeb,	// (0x000536ac) cell_myfav_contact_pane_cp3

0x6b02,	// (0x000536c3) cell_myfav_contact_pane_cp4_ParamLimits

0x6b02,	// (0x000536c3) cell_myfav_contact_pane_cp4

0x6b1a,	// (0x000536db) cell_myfav_contact_pane_cp5_ParamLimits

0x6b1a,	// (0x000536db) cell_myfav_contact_pane_cp5

0x6b2e,	// (0x000536ef) cell_myfav_contact_pane_cp6_ParamLimits

0x6b2e,	// (0x000536ef) cell_myfav_contact_pane_cp6

0x6b44,	// (0x00053705) cell_myfav_contact_pane_cp7_ParamLimits

0x6b44,	// (0x00053705) cell_myfav_contact_pane_cp7

0xd799,	// (0x0005a35a) listscroll_gen_pane_cp05

0x6b5e,	// (0x0005371f) main_myfav_hc_pane_g1_ParamLimits

0x6b5e,	// (0x0005371f) main_myfav_hc_pane_g1

0x6b78,	// (0x00053739) main_myfav_hc_pane_g2_ParamLimits

0x6b78,	// (0x00053739) main_myfav_hc_pane_g2

0x0002,

0xf960,	// (0x0005c521) main_myfav_hc_pane_g_ParamLimits

0xf960,	// (0x0005c521) main_myfav_hc_pane_g

0x6baa,	// (0x0005376b) main_myfav_hc_pane_t1_ParamLimits

0x6baa,	// (0x0005376b) main_myfav_hc_pane_t1

0xd7a2,	// (0x0005a363) main_myfav_hc_pane_t2_ParamLimits

0xd7a2,	// (0x0005a363) main_myfav_hc_pane_t2

0xd7b4,	// (0x0005a375) main_myfav_hc_pane_t3_ParamLimits

0xd7b4,	// (0x0005a375) main_myfav_hc_pane_t3

0x6bc1,	// (0x00053782) main_myfav_hc_pane_t4_ParamLimits

0x6bc1,	// (0x00053782) main_myfav_hc_pane_t4

0x0004,

0xf967,	// (0x0005c528) main_myfav_hc_pane_t_ParamLimits

0xf967,	// (0x0005c528) main_myfav_hc_pane_t

0xcd6a,	// (0x0005992b) bg_myfav_hc_instruction_pane_g1

0xd7c6,	// (0x0005a387) cell_myfav_contact_pane_g1_ParamLimits

0xd7c6,	// (0x0005a387) cell_myfav_contact_pane_g1

0xd7c6,	// (0x0005a387) cell_myfav_contact_pane_g2_ParamLimits

0xd7c6,	// (0x0005a387) cell_myfav_contact_pane_g2

0xd7d2,	// (0x0005a393) cell_myfav_contact_pane_g3_ParamLimits

0xd7d2,	// (0x0005a393) cell_myfav_contact_pane_g3

0xd014,	// (0x00059bd5) cell_myfav_contact_pane_g4_ParamLimits

0xd014,	// (0x00059bd5) cell_myfav_contact_pane_g4

0xd7df,	// (0x0005a3a0) cell_myfav_contact_pane_g5_ParamLimits

0xd7df,	// (0x0005a3a0) cell_myfav_contact_pane_g5

0x0004,

0xf972,	// (0x0005c533) cell_myfav_contact_pane_g_ParamLimits

0xf972,	// (0x0005c533) cell_myfav_contact_pane_g

0x6b92,	// (0x00053753) main_myfav_hc_pane_g3_ParamLimits

0x6b92,	// (0x00053753) main_myfav_hc_pane_g3

0x13aa,	// (0x0004df6b) popup_adpt_find_window

0x6be9,	// (0x000537aa) afind_page_pane_ParamLimits

0x6be9,	// (0x000537aa) afind_page_pane

0x6bfe,	// (0x000537bf) aid_size_cell_afind_ParamLimits

0x6bfe,	// (0x000537bf) aid_size_cell_afind

0x6c1c,	// (0x000537dd) bg_popup_sub_pane_cp09_ParamLimits

0x6c1c,	// (0x000537dd) bg_popup_sub_pane_cp09

0x6c29,	// (0x000537ea) find_pane_cp01_ParamLimits

0x6c29,	// (0x000537ea) find_pane_cp01

0xd7eb,	// (0x0005a3ac) grid_afind_control_pane_ParamLimits

0xd7eb,	// (0x0005a3ac) grid_afind_control_pane

0x6c36,	// (0x000537f7) grid_afind_pane_ParamLimits

0x6c36,	// (0x000537f7) grid_afind_pane

0x6c55,	// (0x00053816) cell_afind_pane_ParamLimits

0x6c55,	// (0x00053816) cell_afind_pane

0xcd6a,	// (0x0005992b) afind_page_pane_g1

0x6cbc,	// (0x0005387d) afind_page_pane_g2

0x6cc5,	// (0x00053886) afind_page_pane_g3

0x0002,

0xf97d,	// (0x0005c53e) afind_page_pane_g

0x6cce,	// (0x0005388f) afind_page_pane_t1

0xd7ff,	// (0x0005a3c0) cell_afind_grid_control_pane_ParamLimits

0xd7ff,	// (0x0005a3c0) cell_afind_grid_control_pane

0xd68e,	// (0x0005a24f) bg_button_pane_cp69_ParamLimits

0xd68e,	// (0x0005a24f) bg_button_pane_cp69

0x6cee,	// (0x000538af) cell_afind_pane_g1_ParamLimits

0x6cee,	// (0x000538af) cell_afind_pane_g1

0x6cfb,	// (0x000538bc) cell_afind_pane_t1_ParamLimits

0x6cfb,	// (0x000538bc) cell_afind_pane_t1

0xab20,	// (0x000576e1) bg_button_pane_cp72

0xd80e,	// (0x0005a3cf) cell_afind_grid_control_pane_g1

0x3c7d,	// (0x0005083e) aid_image_placing_area_ParamLimits

0x3c7d,	// (0x0005083e) aid_image_placing_area

0xd34f,	// (0x00059f10) field_vitu_entry_pane_g1_ParamLimits

0xd34f,	// (0x00059f10) field_vitu_entry_pane_g1

0xd35b,	// (0x00059f1c) field_vitu_entry_pane_g2_ParamLimits

0xd35b,	// (0x00059f1c) field_vitu_entry_pane_g2

0x0001,

0xf82a,	// (0x0005c3eb) field_vitu_entry_pane_g_ParamLimits

0xf82a,	// (0x0005c3eb) field_vitu_entry_pane_g

0x5e2b,	// (0x000529ec) cell_vitu_itu_pane_g1_ParamLimits

0x5e6d,	// (0x00052a2e) cell_vitu_itu_pane_t3_ParamLimits

0x5e6d,	// (0x00052a2e) cell_vitu_itu_pane_t3

0xd637,	// (0x0005a1f8) mp4_progress_pane_t1_ParamLimits

0xd650,	// (0x0005a211) mp4_progress_pane_t2_ParamLimits

0xf8c3,	// (0x0005c484) mp4_progress_pane_t_ParamLimits

0xd669,	// (0x0005a22a) mup_progress_pane_cp04_ParamLimits

0x6bd5,	// (0x00053796) main_myfav_hc_pane_t5_ParamLimits

0x6bd5,	// (0x00053796) main_myfav_hc_pane_t5

0x9865,	// (0x00056426) aid_zoom_text_primary

0x13aa,	// (0x0004df6b) popup_adpt_find_window_ParamLimits

0xa3b1,	// (0x00056f72) main_cam_set_pane

0x6628,	// (0x000531e9) cam4_zoom_pane_ParamLimits

0x6628,	// (0x000531e9) cam4_zoom_pane

0x6d0d,	// (0x000538ce) main_cam_set_pane_g1_ParamLimits

0x6d0d,	// (0x000538ce) main_cam_set_pane_g1

0x6d1b,	// (0x000538dc) main_cam_set_pane_g2_ParamLimits

0x6d1b,	// (0x000538dc) main_cam_set_pane_g2

0x0001,

0xf984,	// (0x0005c545) main_cam_set_pane_g_ParamLimits

0xf984,	// (0x0005c545) main_cam_set_pane_g

0x6d3c,	// (0x000538fd) main_cam_set_pane_t1_ParamLimits

0x6d3c,	// (0x000538fd) main_cam_set_pane_t1

0x6d57,	// (0x00053918) main_cset_listscroll_pane_ParamLimits

0x6d57,	// (0x00053918) main_cset_listscroll_pane

0x6d77,	// (0x00053938) main_cset_slider_pane_ParamLimits

0x6d77,	// (0x00053938) main_cset_slider_pane

0xd81f,	// (0x0005a3e0) main_cset_list_pane_ParamLimits

0xd81f,	// (0x0005a3e0) main_cset_list_pane

0xd82f,	// (0x0005a3f0) scroll_pane_cp028

0x6d9d,	// (0x0005395e) aid_area_touch_slider

0x6db9,	// (0x0005397a) cset_slider_pane

0x6de3,	// (0x000539a4) main_cset_slider_pane_g1

0x6df8,	// (0x000539b9) main_cset_slider_pane_g2

0x0011,

0xf989,	// (0x0005c54a) main_cset_slider_pane_g

0xd880,	// (0x0005a441) main_cset_slider_pane_t1

0x6e9c,	// (0x00053a5d) main_cset_slider_pane_t2

0x6eb6,	// (0x00053a77) main_cset_slider_pane_t3

0x6ed0,	// (0x00053a91) main_cset_slider_pane_t4

0x6eea,	// (0x00053aab) main_cset_slider_pane_t5

0x6f04,	// (0x00053ac5) main_cset_slider_pane_t6

0x6f19,	// (0x00053ada) main_cset_slider_pane_t7

0x000e,

0xf9ae,	// (0x0005c56f) main_cset_slider_pane_t

0x701d,	// (0x00053bde) cset_list_set_pane_ParamLimits

0x701d,	// (0x00053bde) cset_list_set_pane

0x702f,	// (0x00053bf0) aid_position_infowindow_above

0x7037,	// (0x00053bf8) aid_position_infowindow_below

0x06ea,	// (0x0004d2ab) cset_list_set_pane_g1_ParamLimits

0x06ea,	// (0x0004d2ab) cset_list_set_pane_g1

0x06f6,	// (0x0004d2b7) cset_list_set_pane_g3_ParamLimits

0x06f6,	// (0x0004d2b7) cset_list_set_pane_g3

0x0001,

0xf9cd,	// (0x0005c58e) cset_list_set_pane_g_ParamLimits

0xf9cd,	// (0x0005c58e) cset_list_set_pane_g

0x0705,	// (0x0004d2c6) cset_list_set_pane_t1_ParamLimits

0x0705,	// (0x0004d2c6) cset_list_set_pane_t1

0xa3b1,	// (0x00056f72) list_highlight_pane_cp021_ParamLimits

0xa3b1,	// (0x00056f72) list_highlight_pane_cp021

0xb653,	// (0x00058214) cset_slider_pane_g1

0xb665,	// (0x00058226) cset_slider_pane_g2

0xb65c,	// (0x0005821d) cset_slider_pane_g3

0x0002,

0xf9d2,	// (0x0005c593) cset_slider_pane_g

0xa151,	// (0x00056d12) aid_area_touch_cam4_zoom

0xa159,	// (0x00056d1a) cam4_zoom_cont_pane

0xa161,	// (0x00056d22) cam4_zoom_pane_g1

0xa169,	// (0x00056d2a) cam4_zoom_pane_g2

0x703f,	// (0x00053c00) cam4_zoom_pane_g3

0x0002,

0xf9d9,	// (0x0005c59a) cam4_zoom_pane_g

0xd546,	// (0x0005a107) cam4_zoom_cont_pane_g1

0xdd3b,	// (0x0005a8fc) cam4_zoom_cont_pane_g2

0xdd44,	// (0x0005a905) cam4_zoom_cont_pane_g3

0x0002,

0xf9e0,	// (0x0005c5a1) cam4_zoom_cont_pane_g

0x6455,	// (0x00053016) call4_image_pane_ParamLimits

0x6455,	// (0x00053016) call4_image_pane

0x64bc,	// (0x0005307d) call4_windows_conf_pane_ParamLimits

0x6501,	// (0x000530c2) popup_call4_audio_in_window_ParamLimits

0x6501,	// (0x000530c2) popup_call4_audio_in_window

0x9847,	// (0x00056408) bg_popup_call2_act_pane_cp02

0xd69a,	// (0x0005a25b) call4_list_conf_pane

0xcd6a,	// (0x0005992b) call4_image_pane_g1

0xcd6a,	// (0x0005992b) call4_image_pane_g2

0x0001,

0xf6eb,	// (0x0005c2ac) call4_image_pane_g

0xd920,	// (0x0005a4e1) list_single_graphic_popup_conf4_pane_ParamLimits

0xd920,	// (0x0005a4e1) list_single_graphic_popup_conf4_pane

0x9847,	// (0x00056408) list_highlight_pane_cp022

0xd933,	// (0x0005a4f4) list_single_graphic_popup_conf4_pane_g1

0xb24f,	// (0x00057e10) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9e7,	// (0x0005c5a8) list_single_graphic_popup_conf4_pane_g

0xd93b,	// (0x0005a4fc) list_single_graphic_popup_conf4_pane_t1

0x237e,	// (0x0004ef3f) popup_vtel_slider_window_ParamLimits

0x237e,	// (0x0004ef3f) popup_vtel_slider_window

0xd67c,	// (0x0005a23d) dialer2_ne_pane_t2_ParamLimits

0xd67c,	// (0x0005a23d) dialer2_ne_pane_t2

0x0001,

0xf8c8,	// (0x0005c489) dialer2_ne_pane_t_ParamLimits

0xf8c8,	// (0x0005c489) dialer2_ne_pane_t

0xcb4f,	// (0x00059710) bg_popup_sub_pane_cp010_ParamLimits

0xcb4f,	// (0x00059710) bg_popup_sub_pane_cp010

0x7047,	// (0x00053c08) popup_vtel_slider_window_g1_ParamLimits

0x7047,	// (0x00053c08) popup_vtel_slider_window_g1

0x705a,	// (0x00053c1b) popup_vtel_slider_window_g2_ParamLimits

0x705a,	// (0x00053c1b) popup_vtel_slider_window_g2

0x0003,

0xf9ec,	// (0x0005c5ad) popup_vtel_slider_window_g_ParamLimits

0xf9ec,	// (0x0005c5ad) popup_vtel_slider_window_g

0x70b0,	// (0x00053c71) vtel_slider_pane_ParamLimits

0x70b0,	// (0x00053c71) vtel_slider_pane

0x70d2,	// (0x00053c93) vtel_slider_pane_g1_ParamLimits

0x70d2,	// (0x00053c93) vtel_slider_pane_g1

0x70e6,	// (0x00053ca7) vtel_slider_pane_g2_ParamLimits

0x70e6,	// (0x00053ca7) vtel_slider_pane_g2

0x70fe,	// (0x00053cbf) vtel_slider_pane_g3_ParamLimits

0x70fe,	// (0x00053cbf) vtel_slider_pane_g3

0x70d2,	// (0x00053c93) vtel_slider_pane_g4_ParamLimits

0x70d2,	// (0x00053c93) vtel_slider_pane_g4

0x7114,	// (0x00053cd5) vtel_slider_pane_g5_ParamLimits

0x7114,	// (0x00053cd5) vtel_slider_pane_g5

0x0004,

0xf9f5,	// (0x0005c5b6) vtel_slider_pane_g_ParamLimits

0xf9f5,	// (0x0005c5b6) vtel_slider_pane_g

0xa3b1,	// (0x00056f72) main_gallery2_pane

0x6828,	// (0x000533e9) aid_size_row_itut2_dropdow_list_ParamLimits

0x6828,	// (0x000533e9) aid_size_row_itut2_dropdow_list

0x68b4,	// (0x00053475) grid_vitu2_function_top_pane_ParamLimits

0x68b4,	// (0x00053475) grid_vitu2_function_top_pane

0x691e,	// (0x000534df) popup_vitu2_dropdown_list_window_ParamLimits

0x691e,	// (0x000534df) popup_vitu2_dropdown_list_window

0x6947,	// (0x00053508) popup_vitu2_match_list_window

0x712a,	// (0x00053ceb) cell_vitu2_function_top_pane_ParamLimits

0x712a,	// (0x00053ceb) cell_vitu2_function_top_pane

0x7142,	// (0x00053d03) cell_vitu2_function_top_pane_cp01_ParamLimits

0x7142,	// (0x00053d03) cell_vitu2_function_top_pane_cp01

0x715e,	// (0x00053d1f) cell_vitu2_function_top_wide_pane_ParamLimits

0x715e,	// (0x00053d1f) cell_vitu2_function_top_wide_pane

0xa3b1,	// (0x00056f72) bg_button_pane_cp012

0x717a,	// (0x00053d3b) cell_vitu2_function_top_pane_g1

0xa171,	// (0x00056d32) bg_button_pane_cp013_ParamLimits

0xa171,	// (0x00056d32) bg_button_pane_cp013

0x718e,	// (0x00053d4f) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x718e,	// (0x00053d4f) cell_vitu2_function_top_wide_pane_g1

0xa3b1,	// (0x00056f72) bg_popup_sub_pane_cp20

0x71a6,	// (0x00053d67) list_vitu2_match_list_pane

0xd715,	// (0x0005a2d6) bg_popup_sub_pane_cp20_g1

0xd71d,	// (0x0005a2de) bg_popup_sub_pane_cp20_g2

0xad27,	// (0x000578e8) bg_popup_sub_pane_cp20_g3

0xd725,	// (0x0005a2e6) bg_popup_sub_pane_cp20_g4

0xad07,	// (0x000578c8) bg_popup_sub_pane_cp20_g5

0xd951,	// (0x0005a512) bg_popup_sub_pane_cp20_g6

0xd735,	// (0x0005a2f6) bg_popup_sub_pane_cp20_g7

0xd73d,	// (0x0005a2fe) bg_popup_sub_pane_cp20_g8

0xd745,	// (0x0005a306) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa00,	// (0x0005c5c1) bg_popup_sub_pane_cp20_g

0xa18d,	// (0x00056d4e) list_vitu2_match_list_item_pane_ParamLimits

0xa18d,	// (0x00056d4e) list_vitu2_match_list_item_pane

0xa19f,	// (0x00056d60) list_vitu2_match_list_item_pane_t1

0x9847,	// (0x00056408) bg_popup_sub_pane_cp21

0xb177,	// (0x00057d38) grid_vitu2_dropdown_list_pane

0x71c4,	// (0x00053d85) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x71c4,	// (0x00053d85) cell_vitu2_dropdown_list_char_pane

0x71e5,	// (0x00053da6) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x71e5,	// (0x00053da6) cell_vitu2_dropdown_list_ctrl_pane

0xd959,	// (0x0005a51a) cell_vitu2_dropdown_list_char_pane_g1

0xd962,	// (0x0005a523) cell_vitu2_dropdown_list_char_pane_g2

0xd96b,	// (0x0005a52c) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa1d,	// (0x0005c5de) cell_vitu2_dropdown_list_char_pane_g

0x7211,	// (0x00053dd2) cell_vitu2_dropdown_list_char_pane_t1

0x721f,	// (0x00053de0) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x721f,	// (0x00053de0) cell_vitu2_dropdown_list_ctrl_pane_g1

0x722c,	// (0x00053ded) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x722c,	// (0x00053ded) cell_vitu2_dropdown_list_ctrl_pane_g2

0x7239,	// (0x00053dfa) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x7239,	// (0x00053dfa) cell_vitu2_dropdown_list_ctrl_pane_g3

0x7246,	// (0x00053e07) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x7246,	// (0x00053e07) cell_vitu2_dropdown_list_ctrl_pane_g4

0xcfaf,	// (0x00059b70) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xcfaf,	// (0x00059b70) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa24,	// (0x0005c5e5) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa24,	// (0x0005c5e5) cell_vitu2_dropdown_list_ctrl_pane_g

0x7262,	// (0x00053e23) aid_size_cell_gallery2_ParamLimits

0x7262,	// (0x00053e23) aid_size_cell_gallery2

0x7280,	// (0x00053e41) grid_gallery2_pane_ParamLimits

0x7280,	// (0x00053e41) grid_gallery2_pane

0x729a,	// (0x00053e5b) scroll_pane_cp029_ParamLimits

0x729a,	// (0x00053e5b) scroll_pane_cp029

0x72ab,	// (0x00053e6c) cell_gallery2_pane_ParamLimits

0x72ab,	// (0x00053e6c) cell_gallery2_pane

0xd974,	// (0x0005a535) cell_gallery2_pane_g2

0x730a,	// (0x00053ecb) cell_gallery2_pane_g3

0xd97c,	// (0x0005a53d) cell_gallery2_pane_g4

0xd984,	// (0x0005a545) cell_gallery2_pane_g5

0xaace,	// (0x0005768f) grid_highlight_pane_cp10

0x6947,	// (0x00053508) popup_vitu2_match_list_window_ParamLimits

0x695c,	// (0x0005351d) popup_vitu2_query_window_ParamLimits

0x695c,	// (0x0005351d) popup_vitu2_query_window

0x9847,	// (0x00056408) bg_vitu2_candi_button_pane

0xd959,	// (0x0005a51a) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd962,	// (0x0005a523) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd96b,	// (0x0005a52c) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x0778,	// (0x0004d339) bg_button_pane_cp015

0x7312,	// (0x00053ed3) bg_button_pane_cp016

0x7325,	// (0x00053ee6) bg_button_pane_cp017

0xc962,	// (0x00059523) bg_popup_sub_pane_cp22

0xd98c,	// (0x0005a54d) popup_vitu2_query_window_g1

0x07ad,	// (0x0004d36e) popup_vitu2_query_window_g2

0x0002,

0xfa2f,	// (0x0005c5f0) popup_vitu2_query_window_g

0x07cc,	// (0x0004d38d) popup_vitu2_query_window_t1_ParamLimits

0x07cc,	// (0x0004d38d) popup_vitu2_query_window_t1

0x0801,	// (0x0004d3c2) popup_vitu2_query_window_t2_ParamLimits

0x0801,	// (0x0004d3c2) popup_vitu2_query_window_t2

0x0813,	// (0x0004d3d4) popup_vitu2_query_window_t3_ParamLimits

0x0813,	// (0x0004d3d4) popup_vitu2_query_window_t3

0x7349,	// (0x00053f0a) popup_vitu2_query_window_t4_ParamLimits

0x7349,	// (0x00053f0a) popup_vitu2_query_window_t4

0x736a,	// (0x00053f2b) popup_vitu2_query_window_t5_ParamLimits

0x736a,	// (0x00053f2b) popup_vitu2_query_window_t5

0x0006,

0xfa36,	// (0x0005c5f7) popup_vitu2_query_window_t_ParamLimits

0xfa36,	// (0x0005c5f7) popup_vitu2_query_window_t

0xd817,	// (0x0005a3d8) main_cset_text_pane

0x6d9d,	// (0x0005395e) aid_area_touch_slider_ParamLimits

0x6db9,	// (0x0005397a) cset_slider_pane_ParamLimits

0x6de3,	// (0x000539a4) main_cset_slider_pane_g1_ParamLimits

0x6df8,	// (0x000539b9) main_cset_slider_pane_g2_ParamLimits

0xd838,	// (0x0005a3f9) main_cset_slider_pane_g3_ParamLimits

0xd838,	// (0x0005a3f9) main_cset_slider_pane_g3

0x6e0d,	// (0x000539ce) main_cset_slider_pane_g4_ParamLimits

0x6e0d,	// (0x000539ce) main_cset_slider_pane_g4

0x6e1c,	// (0x000539dd) main_cset_slider_pane_g5_ParamLimits

0x6e1c,	// (0x000539dd) main_cset_slider_pane_g5

0x6e28,	// (0x000539e9) main_cset_slider_pane_g6_ParamLimits

0x6e28,	// (0x000539e9) main_cset_slider_pane_g6

0xf989,	// (0x0005c54a) main_cset_slider_pane_g_ParamLimits

0xd880,	// (0x0005a441) main_cset_slider_pane_t1_ParamLimits

0x6e9c,	// (0x00053a5d) main_cset_slider_pane_t2_ParamLimits

0x6eb6,	// (0x00053a77) main_cset_slider_pane_t3_ParamLimits

0x6ed0,	// (0x00053a91) main_cset_slider_pane_t4_ParamLimits

0x6eea,	// (0x00053aab) main_cset_slider_pane_t5_ParamLimits

0x6f04,	// (0x00053ac5) main_cset_slider_pane_t6_ParamLimits

0x6f19,	// (0x00053ada) main_cset_slider_pane_t7_ParamLimits

0x6f43,	// (0x00053b04) main_cset_slider_pane_t8_ParamLimits

0x6f43,	// (0x00053b04) main_cset_slider_pane_t8

0x6f6b,	// (0x00053b2c) main_cset_slider_pane_t9_ParamLimits

0x6f6b,	// (0x00053b2c) main_cset_slider_pane_t9

0x6f93,	// (0x00053b54) main_cset_slider_pane_t10_ParamLimits

0x6f93,	// (0x00053b54) main_cset_slider_pane_t10

0x6fbb,	// (0x00053b7c) main_cset_slider_pane_t11_ParamLimits

0x6fbb,	// (0x00053b7c) main_cset_slider_pane_t11

0x6fe3,	// (0x00053ba4) main_cset_slider_pane_t12_ParamLimits

0x6fe3,	// (0x00053ba4) main_cset_slider_pane_t12

0x7000,	// (0x00053bc1) main_cset_slider_pane_t13_ParamLimits

0x7000,	// (0x00053bc1) main_cset_slider_pane_t13

0xf9ae,	// (0x0005c56f) main_cset_slider_pane_t_ParamLimits

0x9847,	// (0x00056408) bg_popup_sub_pane_cp011

0xd998,	// (0x0005a559) main_cset_text_pane_g1

0xd9a0,	// (0x0005a561) main_cset_text_pane_t1

0xd9ae,	// (0x0005a56f) main_cset_text_pane_t2

0xd9bc,	// (0x0005a57d) main_cset_text_pane_t3

0xd9ca,	// (0x0005a58b) main_cset_text_pane_t4

0xd9d8,	// (0x0005a599) main_cset_text_pane_t5

0xd9e6,	// (0x0005a5a7) main_cset_text_pane_t6

0xd9f4,	// (0x0005a5b5) main_cset_text_pane_t7

0x0006,

0xfa45,	// (0x0005c606) main_cset_text_pane_t

0x9847,	// (0x00056408) main_cam4_burst_pane

0x9847,	// (0x00056408) main_cam5_pane

0x6cdc,	// (0x0005389d) bg_button_pane_cp019

0x6ce5,	// (0x000538a6) bg_button_pane_cp020

0xd844,	// (0x0005a405) main_cset_slider_pane_g7_ParamLimits

0xd844,	// (0x0005a405) main_cset_slider_pane_g7

0xd850,	// (0x0005a411) main_cset_slider_pane_g8_ParamLimits

0xd850,	// (0x0005a411) main_cset_slider_pane_g8

0x6e3c,	// (0x000539fd) main_cset_slider_pane_g9_ParamLimits

0x6e3c,	// (0x000539fd) main_cset_slider_pane_g9

0x6e48,	// (0x00053a09) main_cset_slider_pane_g10_ParamLimits

0x6e48,	// (0x00053a09) main_cset_slider_pane_g10

0x6e54,	// (0x00053a15) main_cset_slider_pane_g11_ParamLimits

0x6e54,	// (0x00053a15) main_cset_slider_pane_g11

0x6e60,	// (0x00053a21) main_cset_slider_pane_g12_ParamLimits

0x6e60,	// (0x00053a21) main_cset_slider_pane_g12

0x6e6c,	// (0x00053a2d) main_cset_slider_pane_g13_ParamLimits

0x6e6c,	// (0x00053a2d) main_cset_slider_pane_g13

0x6e78,	// (0x00053a39) main_cset_slider_pane_g14_ParamLimits

0x6e78,	// (0x00053a39) main_cset_slider_pane_g14

0x6e84,	// (0x00053a45) main_cset_slider_pane_g15_ParamLimits

0x6e84,	// (0x00053a45) main_cset_slider_pane_g15

0xd8ae,	// (0x0005a46f) main_cset_slider_pane_t14_ParamLimits

0xd8ae,	// (0x0005a46f) main_cset_slider_pane_t14

0xd8e7,	// (0x0005a4a8) main_cset_slider_pane_t15_ParamLimits

0xd8e7,	// (0x0005a4a8) main_cset_slider_pane_t15

0x738b,	// (0x00053f4c) aid_cam4_burst_size_cell_ParamLimits

0x738b,	// (0x00053f4c) aid_cam4_burst_size_cell

0x73ab,	// (0x00053f6c) grid_cam4_burst_pane_ParamLimits

0x73ab,	// (0x00053f6c) grid_cam4_burst_pane

0x73e3,	// (0x00053fa4) linegrid_cam4_burst_pane_ParamLimits

0x73e3,	// (0x00053fa4) linegrid_cam4_burst_pane

0xdd4d,	// (0x0005a90e) scroll_pane_cp30_ParamLimits

0xdd4d,	// (0x0005a90e) scroll_pane_cp30

0x7407,	// (0x00053fc8) cell_cam4_burst_pane_ParamLimits

0x7407,	// (0x00053fc8) cell_cam4_burst_pane

0xda02,	// (0x0005a5c3) linegrid_cam4_burst_pane_g1_ParamLimits

0xda02,	// (0x0005a5c3) linegrid_cam4_burst_pane_g1

0x7454,	// (0x00054015) linegrid_cam4_burst_pane_g2_ParamLimits

0x7454,	// (0x00054015) linegrid_cam4_burst_pane_g2

0xda0f,	// (0x0005a5d0) linegrid_cam4_burst_pane_g3_ParamLimits

0xda0f,	// (0x0005a5d0) linegrid_cam4_burst_pane_g3

0x0002,

0xfa54,	// (0x0005c615) linegrid_cam4_burst_pane_g_ParamLimits

0xfa54,	// (0x0005c615) linegrid_cam4_burst_pane_g

0x7465,	// (0x00054026) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x7465,	// (0x00054026) linegrid_cam4_burst_pane_g3_copy1

0xda1c,	// (0x0005a5dd) linegrid_cam4_burst_pane_g4_ParamLimits

0xda1c,	// (0x0005a5dd) linegrid_cam4_burst_pane_g4

0x747f,	// (0x00054040) linegrid_cam4_burst_pane_g5_ParamLimits

0x747f,	// (0x00054040) linegrid_cam4_burst_pane_g5

0x7490,	// (0x00054051) linegrid_cam4_burst_pane_g6_ParamLimits

0x7490,	// (0x00054051) linegrid_cam4_burst_pane_g6

0xda29,	// (0x0005a5ea) linegrid_cam4_burst_pane_g7_ParamLimits

0xda29,	// (0x0005a5ea) linegrid_cam4_burst_pane_g7

0x74a7,	// (0x00054068) cell_cam4_burst_pane_g1

0xda42,	// (0x0005a603) main_cam5_pane_t1_ParamLimits

0xda42,	// (0x0005a603) main_cam5_pane_t1

0xda54,	// (0x0005a615) main_cam5_pane_t2_ParamLimits

0xda54,	// (0x0005a615) main_cam5_pane_t2

0xda66,	// (0x0005a627) main_cam5_pane_t3_ParamLimits

0xda66,	// (0x0005a627) main_cam5_pane_t3

0xda78,	// (0x0005a639) main_cam5_pane_t4_ParamLimits

0xda78,	// (0x0005a639) main_cam5_pane_t4

0xda90,	// (0x0005a651) main_cam5_pane_t5_ParamLimits

0xda90,	// (0x0005a651) main_cam5_pane_t5

0xdaa4,	// (0x0005a665) main_cam5_pane_t6_ParamLimits

0xdaa4,	// (0x0005a665) main_cam5_pane_t6

0xdab8,	// (0x0005a679) main_cam5_pane_t7_ParamLimits

0xdab8,	// (0x0005a679) main_cam5_pane_t7

0xdaca,	// (0x0005a68b) main_cam5_pane_t8_ParamLimits

0xdaca,	// (0x0005a68b) main_cam5_pane_t8

0xdae6,	// (0x0005a6a7) main_cam5_pane_t9_ParamLimits

0xdae6,	// (0x0005a6a7) main_cam5_pane_t9

0xdaf8,	// (0x0005a6b9) main_cam5_pane_t10_ParamLimits

0xdaf8,	// (0x0005a6b9) main_cam5_pane_t10

0xdb0a,	// (0x0005a6cb) main_cam5_pane_t11_ParamLimits

0xdb0a,	// (0x0005a6cb) main_cam5_pane_t11

0xdb1c,	// (0x0005a6dd) main_cam5_pane_t12_ParamLimits

0xdb1c,	// (0x0005a6dd) main_cam5_pane_t12

0xdb31,	// (0x0005a6f2) main_cam5_pane_t13_ParamLimits

0xdb31,	// (0x0005a6f2) main_cam5_pane_t13

0x000c,

0xfa60,	// (0x0005c621) main_cam5_pane_t_ParamLimits

0xfa60,	// (0x0005c621) main_cam5_pane_t

0x142c,	// (0x0004dfed) popup_scut_keymap_window_ParamLimits

0x142c,	// (0x0004dfed) popup_scut_keymap_window

0x74ba,	// (0x0005407b) aid_size_cell_brow_shortcut

0xaace,	// (0x0005768f) bg_popup_window_pane_cp010

0x74c6,	// (0x00054087) grid_scut_pane

0x74d2,	// (0x00054093) cell_scut_pane_ParamLimits

0x74d2,	// (0x00054093) cell_scut_pane

0x74e9,	// (0x000540aa) cell_scut_pane_g1

0xdb4e,	// (0x0005a70f) cell_scut_pane_t1

0xdb5d,	// (0x0005a71e) cell_scut_pane_t2

0x74f2,	// (0x000540b3) cell_scut_pane_t3

0x0002,

0xfa7b,	// (0x0005c63c) cell_scut_pane_t

0x5328,	// (0x00051ee9) main_mup3_pane_g8_ParamLimits

0x5328,	// (0x00051ee9) main_mup3_pane_g8

0x6840,	// (0x00053401) area_vitu2_query_pane_ParamLimits

0x6840,	// (0x00053401) area_vitu2_query_pane

0x078c,	// (0x0004d34d) input_focus_pane_cp08

0xdb6c,	// (0x0005a72d) area_vitu2_query_pane_g1

0x0891,	// (0x0004d452) area_vitu2_query_pane_g2

0x0001,

0xfa82,	// (0x0005c643) area_vitu2_query_pane_g

0x7500,	// (0x000540c1) area_vitu2_query_pane_t1_ParamLimits

0x7500,	// (0x000540c1) area_vitu2_query_pane_t1

0x7514,	// (0x000540d5) area_vitu2_query_pane_t2_ParamLimits

0x7514,	// (0x000540d5) area_vitu2_query_pane_t2

0x08a2,	// (0x0004d463) area_vitu2_query_pane_t3_ParamLimits

0x08a2,	// (0x0004d463) area_vitu2_query_pane_t3

0x7528,	// (0x000540e9) area_vitu2_query_pane_t4_ParamLimits

0x7528,	// (0x000540e9) area_vitu2_query_pane_t4

0x7550,	// (0x00054111) area_vitu2_query_pane_t5_ParamLimits

0x7550,	// (0x00054111) area_vitu2_query_pane_t5

0x7578,	// (0x00054139) area_vitu2_query_pane_t6_ParamLimits

0x7578,	// (0x00054139) area_vitu2_query_pane_t6

0x0006,

0xfa87,	// (0x0005c648) area_vitu2_query_pane_t_ParamLimits

0xfa87,	// (0x0005c648) area_vitu2_query_pane_t

0x75c4,	// (0x00054185) bg_button_pane_cp018

0x75d2,	// (0x00054193) bg_button_pane_cp021

0x08ca,	// (0x0004d48b) bg_button_pane_cp022

0x08db,	// (0x0004d49c) input_focus_pane_cp09

0xb35e,	// (0x00057f1f) aid_size_touch_mv_arrow_left

0xb389,	// (0x00057f4a) aid_size_touch_mv_arrow_right

0xd85c,	// (0x0005a41d) main_cset_slider_pane_g16_ParamLimits

0xd85c,	// (0x0005a41d) main_cset_slider_pane_g16

0xd868,	// (0x0005a429) main_cset_slider_pane_g17_ParamLimits

0xd868,	// (0x0005a429) main_cset_slider_pane_g17

0x74a7,	// (0x00054068) cell_cam4_burst_pane_g1_ParamLimits

0x9847,	// (0x00056408) compa_mode_pane

0x706a,	// (0x00053c2b) popup_vtel_slider_window_g3_ParamLimits

0x706a,	// (0x00053c2b) popup_vtel_slider_window_g3

0x7081,	// (0x00053c42) popup_vtel_slider_window_g4_ParamLimits

0x7081,	// (0x00053c42) popup_vtel_slider_window_g4

0x7098,	// (0x00053c59) popup_vtel_slider_window_t1_ParamLimits

0x7098,	// (0x00053c59) popup_vtel_slider_window_t1

0x9847,	// (0x00056408) main_cl_pane

0x9c6e,	// (0x0005682f) popup_imed_adjust2_window_ParamLimits

0xc962,	// (0x00059523) bg_tb_trans_pane_cp05_ParamLimits

0xd284,	// (0x00059e45) popup_imed_adjust2_window_g1_ParamLimits

0xd293,	// (0x00059e54) popup_imed_adjust2_window_g2_ParamLimits

0xd293,	// (0x00059e54) popup_imed_adjust2_window_g2

0xd29f,	// (0x00059e60) popup_imed_adjust2_window_g3_ParamLimits

0xd29f,	// (0x00059e60) popup_imed_adjust2_window_g3

0x0002,

0xf7ee,	// (0x0005c3af) popup_imed_adjust2_window_g_ParamLimits

0xf7ee,	// (0x0005c3af) popup_imed_adjust2_window_g

0xd2ab,	// (0x00059e6c) popup_imed_adjust2_window_t1_ParamLimits

0xd2c3,	// (0x00059e84) slider_imed_adjust_pane_ParamLimits

0xd2d7,	// (0x00059e98) slider_imed_adjust_pane_g1_ParamLimits

0xd2e7,	// (0x00059ea8) slider_imed_adjust_pane_g2_ParamLimits

0xd2f7,	// (0x00059eb8) slider_imed_adjust_pane_g3_ParamLimits

0xd308,	// (0x00059ec9) slider_imed_adjust_pane_g4_ParamLimits

0xf7f5,	// (0x0005c3b6) slider_imed_adjust_pane_g_ParamLimits

0x65c9,	// (0x0005318a) aid_touch_area_cam4_ParamLimits

0x65c9,	// (0x0005318a) aid_touch_area_cam4

0xa05c,	// (0x00056c1d) battery_pane_cp01

0x6698,	// (0x00053259) main_camera4_pane_g6_ParamLimits

0x6698,	// (0x00053259) main_camera4_pane_g6

0x66c2,	// (0x00053283) main_camera4_pane_t2_ParamLimits

0x66c2,	// (0x00053283) main_camera4_pane_t2

0x0001,

0xf8fc,	// (0x0005c4bd) main_camera4_pane_t_ParamLimits

0xf8fc,	// (0x0005c4bd) main_camera4_pane_t

0x66f7,	// (0x000532b8) aid_touch_area_vid4_ParamLimits

0x66f7,	// (0x000532b8) aid_touch_area_vid4

0x674b,	// (0x0005330c) main_video4_pane_g5_ParamLimits

0x674b,	// (0x0005330c) main_video4_pane_g5

0x6770,	// (0x00053331) vid4_progress_pane_ParamLimits

0x6770,	// (0x00053331) vid4_progress_pane

0xd874,	// (0x0005a435) main_cset_slider_pane_g18_ParamLimits

0xd874,	// (0x0005a435) main_cset_slider_pane_g18

0xda36,	// (0x0005a5f7) cell_cam4_burst_pane_g2_ParamLimits

0xda36,	// (0x0005a5f7) cell_cam4_burst_pane_g2

0x0001,

0xfa5b,	// (0x0005c61c) cell_cam4_burst_pane_g_ParamLimits

0xfa5b,	// (0x0005c61c) cell_cam4_burst_pane_g

0xa8e2,	// (0x000574a3) bg_cl_pane_ParamLimits

0xa8e2,	// (0x000574a3) bg_cl_pane

0x75de,	// (0x0005419f) cl_header_pane_ParamLimits

0x75de,	// (0x0005419f) cl_header_pane

0x75f2,	// (0x000541b3) cl_listscroll_pane_ParamLimits

0x75f2,	// (0x000541b3) cl_listscroll_pane

0xdb78,	// (0x0005a739) bg_cl_pane_g1

0xdb80,	// (0x0005a741) bg_cl_pane_g2

0xdb88,	// (0x0005a749) bg_cl_pane_g3

0xdb90,	// (0x0005a751) bg_cl_pane_g4

0xdb98,	// (0x0005a759) bg_cl_pane_g5

0xdba0,	// (0x0005a761) bg_cl_pane_g6

0xdba8,	// (0x0005a769) bg_cl_pane_g7

0xdbb0,	// (0x0005a771) bg_cl_pane_g8

0xdbb8,	// (0x0005a779) bg_cl_pane_g9

0x0008,

0xfa96,	// (0x0005c657) bg_cl_pane_g

0x7602,	// (0x000541c3) aid_height_cl_leading_ParamLimits

0x7602,	// (0x000541c3) aid_height_cl_leading

0x760e,	// (0x000541cf) aid_height_cl_text_ParamLimits

0x760e,	// (0x000541cf) aid_height_cl_text

0xa3b1,	// (0x00056f72) bg_cl_header_pane_ParamLimits

0xa3b1,	// (0x00056f72) bg_cl_header_pane

0x762d,	// (0x000541ee) cl_header_pane_g1_ParamLimits

0x762d,	// (0x000541ee) cl_header_pane_g1

0x7643,	// (0x00054204) cl_header_pane_t1_ParamLimits

0x7643,	// (0x00054204) cl_header_pane_t1

0xdbc0,	// (0x0005a781) cl_list_pane

0xd82f,	// (0x0005a3f0) hc_scroll_pane_cp01

0xad07,	// (0x000578c8) bg_cl_header_pane_g1

0xd715,	// (0x0005a2d6) bg_cl_header_pane_g2

0xad27,	// (0x000578e8) bg_cl_header_pane_g3

0xd725,	// (0x0005a2e6) bg_cl_header_pane_g4

0xd71d,	// (0x0005a2de) bg_cl_header_pane_g5

0xd951,	// (0x0005a512) bg_cl_header_pane_g6

0xd73d,	// (0x0005a2fe) bg_cl_header_pane_g7

0xd745,	// (0x0005a306) bg_cl_header_pane_g8

0xd735,	// (0x0005a2f6) bg_cl_header_pane_g9

0x0008,

0xfaa9,	// (0x0005c66a) bg_cl_header_pane_g

0x765c,	// (0x0005421d) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x765c,	// (0x0005421d) hc_cl_list_double_graphic_heading_pane

0x766d,	// (0x0005422e) hc_cl_list_single_graphic_pane_ParamLimits

0x766d,	// (0x0005422e) hc_cl_list_single_graphic_pane

0x7686,	// (0x00054247) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x7686,	// (0x00054247) hc_cl_list_single_graphic_pane_g1

0x7692,	// (0x00054253) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x7692,	// (0x00054253) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfabc,	// (0x0005c67d) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfabc,	// (0x0005c67d) hc_cl_list_single_graphic_pane_g

0x76a6,	// (0x00054267) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x76a6,	// (0x00054267) hc_cl_list_single_graphic_pane_t1

0x7686,	// (0x00054247) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x7686,	// (0x00054247) hc_cl_list_double_graphic_heading_pane_g1

0x76bb,	// (0x0005427c) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x76bb,	// (0x0005427c) hc_cl_list_double_graphic_heading_pane_g2

0x76cf,	// (0x00054290) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x76cf,	// (0x00054290) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfac1,	// (0x0005c682) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfac1,	// (0x0005c682) hc_cl_list_double_graphic_heading_pane_g

0x76e3,	// (0x000542a4) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x76e3,	// (0x000542a4) hc_cl_list_double_graphic_heading_pane_t1

0x76f8,	// (0x000542b9) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x76f8,	// (0x000542b9) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfac8,	// (0x0005c689) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfac8,	// (0x0005c689) hc_cl_list_double_graphic_heading_pane_t

0xa1b5,	// (0x00056d76) vid4_progress_pane_g1

0xa1c5,	// (0x00056d86) vid4_progress_pane_g2

0x770d,	// (0x000542ce) vid4_progress_pane_g3

0xa1d5,	// (0x00056d96) vid4_progress_pane_g4

0x0004,

0xfacd,	// (0x0005c68e) vid4_progress_pane_g

0x771f,	// (0x000542e0) vid4_progress_pane_t1

0xa1ed,	// (0x00056dae) vid4_progress_pane_t2

0x0002,

0xfad8,	// (0x0005c699) vid4_progress_pane_t

0x7735,	// (0x000542f6) wait_bar_pane_cp07

0xcb5d,	// (0x0005971e) blid_firmament_pane_ParamLimits

0xcba0,	// (0x00059761) popup_blid_sat_info2_window_g1

0xcbc4,	// (0x00059785) popup_blid_sat_info2_window_t3

0xcbd2,	// (0x00059793) popup_blid_sat_info2_window_t4

0xcbe0,	// (0x000597a1) popup_blid_sat_info2_window_t5

0xcbee,	// (0x000597af) popup_blid_sat_info2_window_t6

0xcbfe,	// (0x000597bf) popup_blid_sat_info2_window_t7

0xcc0c,	// (0x000597cd) popup_blid_sat_info2_window_t8

0xcc1a,	// (0x000597db) popup_blid_sat_info2_window_t9

0xcc28,	// (0x000597e9) popup_blid_sat_info2_window_t10

0xccea,	// (0x000598ab) aid_firma_cardinal_ParamLimits

0xccfe,	// (0x000598bf) blid_firmament_pane_t1_ParamLimits

0xcd15,	// (0x000598d6) blid_firmament_pane_t2_ParamLimits

0xcd2c,	// (0x000598ed) blid_firmament_pane_t3_ParamLimits

0xcd43,	// (0x00059904) blid_firmament_pane_t4_ParamLimits

0xf6e2,	// (0x0005c2a3) blid_firmament_pane_t_ParamLimits

0xcd5a,	// (0x0005991b) blid_sat_info_pane_ParamLimits

0xa3b1,	// (0x00056f72) main_cam_set_pane_ParamLimits

0x5be3,	// (0x000527a4) aid_size_cell_colour_35_ParamLimits

0x5c03,	// (0x000527c4) aid_size_cell_colour_112_ParamLimits

0x5c23,	// (0x000527e4) aid_size_cell_effect_ParamLimits

0xc962,	// (0x00059523) bg_tb_trans_pane_cp02_ParamLimits

0xaf7d,	// (0x00057b3e) heading_imed_pane_ParamLimits

0x5c43,	// (0x00052804) listscroll_imed_pane_ParamLimits

0xbf4e,	// (0x00058b0f) popup_call2_audio_first_window_g5_ParamLimits

0xbf4e,	// (0x00058b0f) popup_call2_audio_first_window_g5

0x61e1,	// (0x00052da2) aid_size_touch_image3_arrow_left_ParamLimits

0x61e1,	// (0x00052da2) aid_size_touch_image3_arrow_left

0x620d,	// (0x00052dce) aid_size_touch_image3_arrow_right_ParamLimits

0x620d,	// (0x00052dce) aid_size_touch_image3_arrow_right

0xa202,	// (0x00056dc3) vid4_progress_pane_t3

0x5f58,	// (0x00052b19) main_hwr_training_symbol_option_pane_ParamLimits

0x5f58,	// (0x00052b19) main_hwr_training_symbol_option_pane

0xd571,	// (0x0005a132) popup_hwr_training_preview_window_ParamLimits

0xd571,	// (0x0005a132) popup_hwr_training_preview_window

0x5f78,	// (0x00052b39) hwr_training_navi_pane_g5_ParamLimits

0x5f78,	// (0x00052b39) hwr_training_navi_pane_g5

0xd703,	// (0x0005a2c4) popup_char_count_window

0xa3b1,	// (0x00056f72) bg_popup_sub_pane_cp20_ParamLimits

0x71a6,	// (0x00053d67) list_vitu2_match_list_pane_ParamLimits

0x71b5,	// (0x00053d76) vitu2_page_scroll_pane_ParamLimits

0x71b5,	// (0x00053d76) vitu2_page_scroll_pane

0xdbc9,	// (0x0005a78a) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdbc9,	// (0x0005a78a) list_single_hwr_training_symbol_option_pane

0xdbdc,	// (0x0005a79d) list_single_hwr_training_symbol_option_pane_g1

0xdbe4,	// (0x0005a7a5) list_single_hwr_training_symbol_option_pane_t1

0xdbf2,	// (0x0005a7b3) bg_button_pane_cp023

0xdbfb,	// (0x0005a7bc) bg_button_pane_cp024

0x7768,	// (0x00054329) vitu2_page_scroll_pane_g1

0x7770,	// (0x00054331) vitu2_page_scroll_pane_g2

0x0001,

0xfadf,	// (0x0005c6a0) vitu2_page_scroll_pane_g

0x7778,	// (0x00054339) vitu2_page_scroll_pane_t1

0xa963,	// (0x00057524) popup_char_count_window_g1

0xdc2e,	// (0x0005a7ef) popup_char_count_window_g2

0xd1cc,	// (0x00059d8d) popup_char_count_window_g3

0x0002,

0xfae4,	// (0x0005c6a5) popup_char_count_window_g

0xdc37,	// (0x0005a7f8) popup_char_count_window_t1

0x9847,	// (0x00056408) main_vded2_pane

0xd270,	// (0x00059e31) aid_size_cell_imed_line

0xd27a,	// (0x00059e3b) grid_imed_line_width_pane

0xa10c,	// (0x00056ccd) vid4_indicators_pane_g4

0xdc45,	// (0x0005a806) cell_imed_line_width_pane_ParamLimits

0xdc45,	// (0x0005a806) cell_imed_line_width_pane

0xdc59,	// (0x0005a81a) cell_imed_line_width_pane_g1

0xdc62,	// (0x0005a823) cell_imed_line_width_pane_g2

0x0001,

0xfaeb,	// (0x0005c6ac) cell_imed_line_width_pane_g

0x7787,	// (0x00054348) main_vded2_pane_g1_ParamLimits

0x7787,	// (0x00054348) main_vded2_pane_g1

0x779d,	// (0x0005435e) main_vded2_pane_g2_ParamLimits

0x779d,	// (0x0005435e) main_vded2_pane_g2

0x0001,

0xfaf0,	// (0x0005c6b1) main_vded2_pane_g_ParamLimits

0xfaf0,	// (0x0005c6b1) main_vded2_pane_g

0x77af,	// (0x00054370) vded2_slider_pane_ParamLimits

0x77af,	// (0x00054370) vded2_slider_pane

0x77bf,	// (0x00054380) aid_size_touch_vded2_end

0x77c9,	// (0x0005438a) aid_size_touch_vded2_playhead

0xdc6a,	// (0x0005a82b) aid_size_touch_vded2_start

0xdc72,	// (0x0005a833) vded2_slider_bg_pane

0xdc7b,	// (0x0005a83c) vded2_slider_pane_g1

0xdc84,	// (0x0005a845) vded2_slider_pane_g2

0x77d3,	// (0x00054394) vded2_slider_pane_g3

0x0002,

0xfaf5,	// (0x0005c6b6) vded2_slider_pane_g

0xdc8c,	// (0x0005a84d) vded2_slider_bg_pane_g1

0xdc95,	// (0x0005a856) vded2_slider_bg_pane_g2

0xdc9e,	// (0x0005a85f) vded2_slider_bg_pane_g3

0x0002,

0xfafc,	// (0x0005c6bd) vded2_slider_bg_pane_g

0x38eb,	// (0x000504ac) aid_postcard_touch_down_pane_ParamLimits

0x38eb,	// (0x000504ac) aid_postcard_touch_down_pane

0x3901,	// (0x000504c2) aid_postcard_touch_up_pane_ParamLimits

0x3901,	// (0x000504c2) aid_postcard_touch_up_pane

0x9847,	// (0x00056408) main_blid2_pane

0x9c54,	// (0x00056815) popup_blid2_search_window

0x9847,	// (0x00056408) blid2_gps_pane

0x9847,	// (0x00056408) blid2_navig_pane

0x9847,	// (0x00056408) blid2_search_pane

0x9847,	// (0x00056408) blid2_tripm_pane

0x77de,	// (0x0005439f) blid2_search_pane_g1_ParamLimits

0x77de,	// (0x0005439f) blid2_search_pane_g1

0x77f6,	// (0x000543b7) blid2_search_pane_t1_ParamLimits

0x77f6,	// (0x000543b7) blid2_search_pane_t1

0x7808,	// (0x000543c9) aid_size_cell_blid2_gps_ParamLimits

0x7808,	// (0x000543c9) aid_size_cell_blid2_gps

0x7820,	// (0x000543e1) blid2_gps_pane_g1_ParamLimits

0x7820,	// (0x000543e1) blid2_gps_pane_g1

0x7834,	// (0x000543f5) grid_blid2_satellite_pane_ParamLimits

0x7834,	// (0x000543f5) grid_blid2_satellite_pane

0x784e,	// (0x0005440f) blid2_navig_pane_g1_ParamLimits

0x784e,	// (0x0005440f) blid2_navig_pane_g1

0x785a,	// (0x0005441b) blid2_navig_pane_t1_ParamLimits

0x785a,	// (0x0005441b) blid2_navig_pane_t1

0x7875,	// (0x00054436) blid2_navig_pane_t2_ParamLimits

0x7875,	// (0x00054436) blid2_navig_pane_t2

0x0001,

0xfb03,	// (0x0005c6c4) blid2_navig_pane_t_ParamLimits

0xfb03,	// (0x0005c6c4) blid2_navig_pane_t

0x7890,	// (0x00054451) blid2_navig_ring_pane_ParamLimits

0x7890,	// (0x00054451) blid2_navig_ring_pane

0x78a9,	// (0x0005446a) blid2_speed_pane_ParamLimits

0x78a9,	// (0x0005446a) blid2_speed_pane

0x78b5,	// (0x00054476) blid2_tripm_pane_g1_ParamLimits

0x78b5,	// (0x00054476) blid2_tripm_pane_g1

0x78d0,	// (0x00054491) blid2_tripm_pane_g2_ParamLimits

0x78d0,	// (0x00054491) blid2_tripm_pane_g2

0x78e4,	// (0x000544a5) blid2_tripm_pane_g3_ParamLimits

0x78e4,	// (0x000544a5) blid2_tripm_pane_g3

0x78f8,	// (0x000544b9) blid2_tripm_pane_g4_ParamLimits

0x78f8,	// (0x000544b9) blid2_tripm_pane_g4

0x790c,	// (0x000544cd) blid2_tripm_pane_g5_ParamLimits

0x790c,	// (0x000544cd) blid2_tripm_pane_g5

0x0005,

0xfb08,	// (0x0005c6c9) blid2_tripm_pane_g_ParamLimits

0xfb08,	// (0x0005c6c9) blid2_tripm_pane_g

0x7932,	// (0x000544f3) blid2_tripm_pane_t1_ParamLimits

0x7932,	// (0x000544f3) blid2_tripm_pane_t1

0x794d,	// (0x0005450e) blid2_tripm_pane_t2_ParamLimits

0x794d,	// (0x0005450e) blid2_tripm_pane_t2

0x7966,	// (0x00054527) blid2_tripm_pane_t3_ParamLimits

0x7966,	// (0x00054527) blid2_tripm_pane_t3

0x0003,

0xfb15,	// (0x0005c6d6) blid2_tripm_pane_t_ParamLimits

0xfb15,	// (0x0005c6d6) blid2_tripm_pane_t

0x79ad,	// (0x0005456e) cell_blid2_satellite_pane_ParamLimits

0x79ad,	// (0x0005456e) cell_blid2_satellite_pane

0x79cb,	// (0x0005458c) cell_blid2_satellite_pane_g1

0xdca7,	// (0x0005a868) cell_blid2_satellite_pane_t1

0xcd6a,	// (0x0005992b) blid2_speed_pane_g1

0xdcb5,	// (0x0005a876) blid2_speed_pane_t1

0xdcc3,	// (0x0005a884) blid2_speed_pane_t2

0x0001,

0xfb1e,	// (0x0005c6df) blid2_speed_pane_t

0xcd6a,	// (0x0005992b) blid2_navig_ring_pane_g1

0x79d4,	// (0x00054595) blid2_navig_ring_pane_g2

0x79dc,	// (0x0005459d) blid2_navig_ring_pane_g3

0x79e4,	// (0x000545a5) blid2_navig_ring_pane_g4

0x79ec,	// (0x000545ad) blid2_navig_ring_pane_g5

0x0004,

0xfb23,	// (0x0005c6e4) blid2_navig_ring_pane_g

0x9847,	// (0x00056408) bg_popup_window_pane_cp011

0xdcd1,	// (0x0005a892) popup_blid2_search_window_g1

0xdcd9,	// (0x0005a89a) popup_blid2_search_window_t1

0xdce7,	// (0x0005a8a8) popup_blid2_search_window_t2

0x0001,

0xfb2e,	// (0x0005c6ef) popup_blid2_search_window_t

0xac16,	// (0x000577d7) main_browser_pane_g1

0xa8e2,	// (0x000574a3) main_browser_pane_ParamLimits

0xa3b1,	// (0x00056f72) bg_button_pane_cp011_ParamLimits

0x6a75,	// (0x00053636) cell_vitu2_function_pane_g1_ParamLimits

0xc962,	// (0x00059523) bg_popup_sub_pane_cp22_ParamLimits

0x078c,	// (0x0004d34d) input_focus_pane_cp08_ParamLimits

0x7338,	// (0x00053ef9) popup_vitu2_query_button_pane_ParamLimits

0x7338,	// (0x00053ef9) popup_vitu2_query_button_pane

0x07a3,	// (0x0004d364) popup_vitu2_query_input_button_pane

0xd98c,	// (0x0005a54d) popup_vitu2_query_window_g1_ParamLimits

0x07ad,	// (0x0004d36e) popup_vitu2_query_window_g2_ParamLimits

0xfa2f,	// (0x0005c5f0) popup_vitu2_query_window_g_ParamLimits

0x9847,	// (0x00056408) bg_button_pane_cp026

0x79f4,	// (0x000545b5) popup_vitu2_query_input_button_pane_g1

0x9847,	// (0x00056408) bg_button_pane_cp025

0xdcf5,	// (0x0005a8b6) popup_vitu2_query_button_pane_t1

0x4f82,	// (0x00051b43) main_mp3_pane_t6

0x4f90,	// (0x00051b51) popup_slider_window_cp01

0xa078,	// (0x00056c39) cam4_battery_pane

0xa0cb,	// (0x00056c8c) cam4_battery_pane_cp02

0xa1ad,	// (0x00056d6e) cam4_battery_pane_cp01

0xa1ad,	// (0x00056d6e) cam4_battery_pane_cp03

0xcd6a,	// (0x0005992b) cam4_battery_pane_g1

0xdd03,	// (0x0005a8c4) cam4_battery_pane_g2

0x0001,

0xfb33,	// (0x0005c6f4) cam4_battery_pane_g

0xcc36,	// (0x000597f7) popup_blid_sat_info2_window_t11

0xb35e,	// (0x00057f1f) aid_size_touch_mv_arrow_left_ParamLimits

0xb389,	// (0x00057f4a) aid_size_touch_mv_arrow_right_ParamLimits

0xb3e7,	// (0x00057fa8) navi_pane_g1_ParamLimits

0xb3f3,	// (0x00057fb4) navi_pane_g2_ParamLimits

0xb421,	// (0x00057fe2) navi_pane_g3_ParamLimits

0xf3e1,	// (0x0005bfa2) navi_pane_g_ParamLimits

0x336c,	// (0x0004ff2d) navi_pane_mv_t1_ParamLimits

0x5c4f,	// (0x00052810) grid_imed_effect_pane_ParamLimits

0x227b,	// (0x0004ee3c) aid_placing_vt_slider_lsc

0xab65,	// (0x00057726) aid_placing_vt_slider_prt

0xa3b1,	// (0x00056f72) bg_tb_trans_pane_cp01_ParamLimits

0xcecf,	// (0x00059a90) popup_image_details_window_g1_ParamLimits

0xcee2,	// (0x00059aa3) popup_image_details_window_g2_ParamLimits

0xcef7,	// (0x00059ab8) popup_image_details_window_g3_ParamLimits

0xcef7,	// (0x00059ab8) popup_image_details_window_g3

0xf727,	// (0x0005c2e8) popup_image_details_window_g_ParamLimits

0xcf0b,	// (0x00059acc) popup_image_details_window_t1_ParamLimits

0xcf1d,	// (0x00059ade) popup_image_details_window_t2_ParamLimits

0xcf36,	// (0x00059af7) popup_image_details_window_t3_ParamLimits

0xcf4a,	// (0x00059b0b) popup_image_details_window_t4_ParamLimits

0xcf65,	// (0x00059b26) popup_image_details_window_t5_ParamLimits

0xf72e,	// (0x0005c2ef) popup_image_details_window_t_ParamLimits

0x761a,	// (0x000541db) cl_header_name_pane_ParamLimits

0x761a,	// (0x000541db) cl_header_name_pane

0x79fc,	// (0x000545bd) cl_header_name_pane_t1_ParamLimits

0x79fc,	// (0x000545bd) cl_header_name_pane_t1

0x7a1d,	// (0x000545de) cl_header_name_pane_t2_ParamLimits

0x7a1d,	// (0x000545de) cl_header_name_pane_t2

0x7a5f,	// (0x00054620) cl_header_name_pane_t3_ParamLimits

0x7a5f,	// (0x00054620) cl_header_name_pane_t3

0x0002,

0xfb38,	// (0x0005c6f9) cl_header_name_pane_t_ParamLimits

0xfb38,	// (0x0005c6f9) cl_header_name_pane_t

0xb4b0,	// (0x00058071) navi_pane_mv_g2_ParamLimits

0xd6dd,	// (0x0005a29e) field_vitu2_entry_pane_g1_ParamLimits

0xd6e9,	// (0x0005a2aa) field_vitu2_entry_pane_g2_ParamLimits

0xd6f5,	// (0x0005a2b6) field_vitu2_entry_pane_g3_ParamLimits

0xd6f5,	// (0x0005a2b6) field_vitu2_entry_pane_g3

0xf92e,	// (0x0005c4ef) field_vitu2_entry_pane_g_ParamLimits

0xa13f,	// (0x00056d00) cell_vitu2_itu_pane_g1_ParamLimits

0x6a09,	// (0x000535ca) cell_vitu2_itu_pane_g2_ParamLimits

0x6a09,	// (0x000535ca) cell_vitu2_itu_pane_g2

0x0001,

0xf93a,	// (0x0005c4fb) cell_vitu2_itu_pane_g_ParamLimits

0xf93a,	// (0x0005c4fb) cell_vitu2_itu_pane_g

0xa3b1,	// (0x00056f72) bg_vkb2_func_pane_cp05_ParamLimits

0xa3b1,	// (0x00056f72) bg_vkb2_func_pane_cp05

0xa3b1,	// (0x00056f72) bg_vkb2_func_pane_cp03

0xa3b1,	// (0x00056f72) bg_vkb2_func_pane_cp04

0xa3b1,	// (0x00056f72) bg_vkb2_func_pane_cp10_ParamLimits

0xa3b1,	// (0x00056f72) bg_vkb2_func_pane_cp10

0x08ca,	// (0x0004d48b) bg_vkb2_func_pane_cp08

0x75c4,	// (0x00054185) bg_vkb2_func_pane_cp06

0x75d2,	// (0x00054193) bg_vkb2_func_pane_cp07

0xdc04,	// (0x0005a7c5) bg_vkb2_func_pane_cp11_ParamLimits

0xdc04,	// (0x0005a7c5) bg_vkb2_func_pane_cp11

0xdc19,	// (0x0005a7da) bg_vkb2_func_pane_cp12_ParamLimits

0xdc19,	// (0x0005a7da) bg_vkb2_func_pane_cp12

0x9847,	// (0x00056408) bg_vkb2_func_pane_cp09

0xd715,	// (0x0005a2d6) bg_vkb2_func_pane_g1

0xad27,	// (0x000578e8) bg_vkb2_func_pane_g2

0xd71d,	// (0x0005a2de) bg_vkb2_func_pane_g3

0xd725,	// (0x0005a2e6) bg_vkb2_func_pane_g4

0xd951,	// (0x0005a512) bg_vkb2_func_pane_g5

0xd73d,	// (0x0005a2fe) bg_vkb2_func_pane_g6

0xd745,	// (0x0005a306) bg_vkb2_func_pane_g7

0xd735,	// (0x0005a2f6) bg_vkb2_func_pane_g8

0xad07,	// (0x000578c8) bg_vkb2_func_pane_g9

0x0008,

0xfb3f,	// (0x0005c700) bg_vkb2_func_pane_g

0x7920,	// (0x000544e1) blid2_tripm_pane_g6_ParamLimits

0x7920,	// (0x000544e1) blid2_tripm_pane_g6

0xd62f,	// (0x0005a1f0) mp4_progress_pane_g1

0x7999,	// (0x0005455a) blid2_tripm_values_pane_ParamLimits

0x7999,	// (0x0005455a) blid2_tripm_values_pane

0x7a90,	// (0x00054651) blid2_tripm_values_pane_t1

0x7a9e,	// (0x0005465f) blid2_tripm_values_pane_t2

0x7aac,	// (0x0005466d) blid2_tripm_values_pane_t3

0x7aba,	// (0x0005467b) blid2_tripm_values_pane_t4

0x7ac8,	// (0x00054689) blid2_tripm_values_pane_t5

0x7ad6,	// (0x00054697) blid2_tripm_values_pane_t6

0x7ae4,	// (0x000546a5) blid2_tripm_values_pane_t7

0x7af2,	// (0x000546b3) blid2_tripm_values_pane_t8

0x7b00,	// (0x000546c1) blid2_tripm_values_pane_t9

0x0008,

0xfb52,	// (0x0005c713) blid2_tripm_values_pane_t

0x22bd,	// (0x0004ee7e) call_video_pane_t1_ParamLimits

0x22db,	// (0x0004ee9c) call_video_pane_t2_ParamLimits

0xf26a,	// (0x0005be2b) call_video_pane_t_ParamLimits

0x05c0,	// (0x0004d181) msg_header_pane_g1_ParamLimits

0xb698,	// (0x00058259) msg_header_pane_g2_ParamLimits

0xb698,	// (0x00058259) msg_header_pane_g2

0x0001,

0xf484,	// (0x0005c045) msg_header_pane_g_ParamLimits

0xf484,	// (0x0005c045) msg_header_pane_g

0xa8e2,	// (0x000574a3) main_clock2_pane_ParamLimits

0x5950,	// (0x00052511) grid_clock2_toolbar_pane_ParamLimits

0x5950,	// (0x00052511) grid_clock2_toolbar_pane

0x5950,	// (0x00052511) listscroll_clock2_pane_ParamLimits

0x5950,	// (0x00052511) listscroll_clock2_pane

0x5a34,	// (0x000525f5) main_clock2_pane_t3_ParamLimits

0x5a34,	// (0x000525f5) main_clock2_pane_t3

0x5a58,	// (0x00052619) main_clock2_pane_t4_ParamLimits

0x5a58,	// (0x00052619) main_clock2_pane_t4

0xdd59,	// (0x0005a91a) cell_clock2_toolbar_pane

0xdd61,	// (0x0005a922) cell_clock2_toolbar_pane_cp01

0xdd61,	// (0x0005a922) cell_clock2_toolbar_pane_cp02

0xdd69,	// (0x0005a92a) cell_clock2_toolbar_pane_cp03

0xdd71,	// (0x0005a932) list_clock2_pane

0xb2e3,	// (0x00057ea4) scroll_pane_cp10

0xdd79,	// (0x0005a93a) list_single_clock2_pane_ParamLimits

0xdd79,	// (0x0005a93a) list_single_clock2_pane

0xaace,	// (0x0005768f) list_highlight_pane_cp08

0xdd86,	// (0x0005a947) list_single_clock2_pane_t1

0xdd94,	// (0x0005a955) list_single_clock2_pane_t2

0x0001,

0xfb65,	// (0x0005c726) list_single_clock2_pane_t

0x9847,	// (0x00056408) bg_button_pane_cp10

0xdda2,	// (0x0005a963) cell_clock2_toolbar_pane_g1

0x3877,	// (0x00050438) aid_main_viewer_pane_g1_ParamLimits

0x3877,	// (0x00050438) aid_main_viewer_pane_g1

0x3885,	// (0x00050446) aid_main_viewer_pane_g2_ParamLimits

0x3885,	// (0x00050446) aid_main_viewer_pane_g2

0x3893,	// (0x00050454) aid_main_viewer_pane_g3_ParamLimits

0x3893,	// (0x00050454) aid_main_viewer_pane_g3

0x38a2,	// (0x00050463) aid_main_viewer_pane_g4_ParamLimits

0x38a2,	// (0x00050463) aid_main_viewer_pane_g4

0x0003,

0xf495,	// (0x0005c056) aid_main_viewer_pane_g_ParamLimits

0xf495,	// (0x0005c056) aid_main_viewer_pane_g

0x41aa,	// (0x00050d6b) main_calc_pane_ParamLimits

0x41be,	// (0x00050d7f) main_dialer2_pane_ParamLimits

0x9847,	// (0x00056408) main_cam6_pane

0x9847,	// (0x00056408) main_vid6_pane

0x595c,	// (0x0005251d) listscroll_gen_pane_cp06_ParamLimits

0x595c,	// (0x0005251d) listscroll_gen_pane_cp06

0x5a7b,	// (0x0005263c) main_clock2_pane_t5_ParamLimits

0x5a7b,	// (0x0005263c) main_clock2_pane_t5

0x5ad9,	// (0x0005269a) aid_call2_pane_cp10_ParamLimits

0x5aeb,	// (0x000526ac) aid_call_pane_cp10_ParamLimits

0xb352,	// (0x00057f13) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb352,	// (0x00057f13) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5afd,	// (0x000526be) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5afd,	// (0x000526be) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb352,	// (0x00057f13) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7e3,	// (0x0005c3a4) popup_clock_analogue_window_cp10_g_ParamLimits

0x5b13,	// (0x000526d4) popup_clock_analogue_window_cp10_t1_ParamLimits

0x618e,	// (0x00052d4f) cell_dialer2_keypad_pane_g2_ParamLimits

0x618e,	// (0x00052d4f) cell_dialer2_keypad_pane_g2

0x0001,

0xf8cd,	// (0x0005c48e) cell_dialer2_keypad_pane_g_ParamLimits

0xf8cd,	// (0x0005c48e) cell_dialer2_keypad_pane_g

0x61aa,	// (0x00052d6b) cell_dialer2_keypad_pane_t1

0x6d8f,	// (0x00053950) main_cset_text2_pane_ParamLimits

0x6d8f,	// (0x00053950) main_cset_text2_pane

0xdb6c,	// (0x0005a72d) area_vitu2_query_pane_g1_ParamLimits

0x0891,	// (0x0004d452) area_vitu2_query_pane_g2_ParamLimits

0xfa82,	// (0x0005c643) area_vitu2_query_pane_g_ParamLimits

0x75a0,	// (0x00054161) area_vitu2_query_pane_t7_ParamLimits

0x75a0,	// (0x00054161) area_vitu2_query_pane_t7

0x75c4,	// (0x00054185) bg_button_pane_cp018_ParamLimits

0x75d2,	// (0x00054193) bg_button_pane_cp021_ParamLimits

0x08ca,	// (0x0004d48b) bg_button_pane_cp022_ParamLimits

0x08ca,	// (0x0004d48b) bg_vkb2_func_pane_cp08_ParamLimits

0x75c4,	// (0x00054185) bg_vkb2_func_pane_cp06_ParamLimits

0x75d2,	// (0x00054193) bg_vkb2_func_pane_cp07_ParamLimits

0x08db,	// (0x0004d49c) input_focus_pane_cp09_ParamLimits

0xa218,	// (0x00056dd9) cam6_autofocus_pane_ParamLimits

0xa218,	// (0x00056dd9) cam6_autofocus_pane

0x7b0e,	// (0x000546cf) cam6_image_uncrop_pane_ParamLimits

0x7b0e,	// (0x000546cf) cam6_image_uncrop_pane

0x7b1d,	// (0x000546de) cam6_indi_pane_ParamLimits

0x7b1d,	// (0x000546de) cam6_indi_pane

0x7b33,	// (0x000546f4) cam6_mode_pane_ParamLimits

0x7b33,	// (0x000546f4) cam6_mode_pane

0x7b45,	// (0x00054706) cam6_timer_pane_ParamLimits

0x7b45,	// (0x00054706) cam6_timer_pane

0x7b55,	// (0x00054716) cam6_zoom_pane_ParamLimits

0x7b55,	// (0x00054716) cam6_zoom_pane

0x7b61,	// (0x00054722) cam6_mode_pane_g1_ParamLimits

0x7b61,	// (0x00054722) cam6_mode_pane_g1

0x7b71,	// (0x00054732) cam6_mode_pane_g2_ParamLimits

0x7b71,	// (0x00054732) cam6_mode_pane_g2

0x7b81,	// (0x00054742) cam6_mode_pane_g3_ParamLimits

0x7b81,	// (0x00054742) cam6_mode_pane_g3

0x7b91,	// (0x00054752) cam6_mode_pane_g4_ParamLimits

0x7b91,	// (0x00054752) cam6_mode_pane_g4

0x0003,

0xfb6a,	// (0x0005c72b) cam6_mode_pane_g_ParamLimits

0xfb6a,	// (0x0005c72b) cam6_mode_pane_g

0xdd0d,	// (0x0005a8ce) bg_tb_trans_pane_cp08_ParamLimits

0xdd0d,	// (0x0005a8ce) bg_tb_trans_pane_cp08

0xddaa,	// (0x0005a96b) cam6_battery_pane_ParamLimits

0xddaa,	// (0x0005a96b) cam6_battery_pane

0xddc0,	// (0x0005a981) cam6_indi_pane_g1_ParamLimits

0xddc0,	// (0x0005a981) cam6_indi_pane_g1

0xddd2,	// (0x0005a993) cam6_indi_pane_g2_ParamLimits

0xddd2,	// (0x0005a993) cam6_indi_pane_g2

0xdde4,	// (0x0005a9a5) cam6_indi_pane_g3_ParamLimits

0xdde4,	// (0x0005a9a5) cam6_indi_pane_g3

0x0002,

0xfb73,	// (0x0005c734) cam6_indi_pane_g_ParamLimits

0xfb73,	// (0x0005c734) cam6_indi_pane_g

0xddf6,	// (0x0005a9b7) cam6_indi_pane_t1_ParamLimits

0xddf6,	// (0x0005a9b7) cam6_indi_pane_t1

0x7ba1,	// (0x00054762) cam6_autofocus_pane_g1

0x7ba9,	// (0x0005476a) cam6_autofocus_pane_g2

0x7bb1,	// (0x00054772) cam6_autofocus_pane_g3

0x7bb9,	// (0x0005477a) cam6_autofocus_pane_g4

0x0003,

0xfb7a,	// (0x0005c73b) cam6_autofocus_pane_g

0xde1c,	// (0x0005a9dd) cam6_timer_pane_g1

0xde24,	// (0x0005a9e5) cam6_timer_pane_t1

0xde32,	// (0x0005a9f3) cam6_zoom_cont_pane

0xde3a,	// (0x0005a9fb) cam6_zoom_pane_g1

0xde42,	// (0x0005aa03) cam6_zoom_pane_g2

0x7bc1,	// (0x00054782) cam6_zoom_pane_g3

0x0002,

0xfb83,	// (0x0005c744) cam6_zoom_pane_g

0xcd6a,	// (0x0005992b) cam6_battery_pane_g1

0xcd6a,	// (0x0005992b) cam6_battery_pane_g2

0x0001,

0xf6eb,	// (0x0005c2ac) cam6_battery_pane_g

0xde4a,	// (0x0005aa0b) cam6_zoom_cont_pane_g1

0xde53,	// (0x0005aa14) cam6_zoom_cont_pane_g2

0xde5c,	// (0x0005aa1d) cam6_zoom_cont_pane_g3

0x0002,

0xfb8a,	// (0x0005c74b) cam6_zoom_cont_pane_g

0x7bde,	// (0x0005479f) cam6_mode_pane_cp_ParamLimits

0x7bde,	// (0x0005479f) cam6_mode_pane_cp

0x7b55,	// (0x00054716) cam6_zoom_pane_cp_ParamLimits

0x7b55,	// (0x00054716) cam6_zoom_pane_cp

0x7bf0,	// (0x000547b1) vid6_image_uncrop_cif_pane_ParamLimits

0x7bf0,	// (0x000547b1) vid6_image_uncrop_cif_pane

0x7c00,	// (0x000547c1) vid6_image_uncrop_nhd_pane_ParamLimits

0x7c00,	// (0x000547c1) vid6_image_uncrop_nhd_pane

0x7b0e,	// (0x000546cf) vid6_image_uncrop_vga_pane_ParamLimits

0x7b0e,	// (0x000546cf) vid6_image_uncrop_vga_pane

0x7c0f,	// (0x000547d0) vid6_image_uncrop_wvga_pane_ParamLimits

0x7c0f,	// (0x000547d0) vid6_image_uncrop_wvga_pane

0x7c1e,	// (0x000547df) vid6_indi_pane_ParamLimits

0x7c1e,	// (0x000547df) vid6_indi_pane

0xdd0d,	// (0x0005a8ce) bg_tb_trans_pane_cp09_ParamLimits

0xdd0d,	// (0x0005a8ce) bg_tb_trans_pane_cp09

0xde74,	// (0x0005aa35) cam6_battery_pane_cp_ParamLimits

0xde74,	// (0x0005aa35) cam6_battery_pane_cp

0xde80,	// (0x0005aa41) vid6_indi_pane_g1_ParamLimits

0xde80,	// (0x0005aa41) vid6_indi_pane_g1

0xde92,	// (0x0005aa53) vid6_indi_pane_g2_ParamLimits

0xde92,	// (0x0005aa53) vid6_indi_pane_g2

0xdea4,	// (0x0005aa65) vid6_indi_pane_g3_ParamLimits

0xdea4,	// (0x0005aa65) vid6_indi_pane_g3

0xdeb9,	// (0x0005aa7a) vid6_indi_pane_g4_ParamLimits

0xdeb9,	// (0x0005aa7a) vid6_indi_pane_g4

0xdece,	// (0x0005aa8f) vid6_indi_pane_g5_ParamLimits

0xdece,	// (0x0005aa8f) vid6_indi_pane_g5

0x0004,

0xfb91,	// (0x0005c752) vid6_indi_pane_g_ParamLimits

0xfb91,	// (0x0005c752) vid6_indi_pane_g

0xdee8,	// (0x0005aaa9) vid6_indi_pane_t1_ParamLimits

0xdee8,	// (0x0005aaa9) vid6_indi_pane_t1

0xdefe,	// (0x0005aabf) vid6_indi_pane_t2_ParamLimits

0xdefe,	// (0x0005aabf) vid6_indi_pane_t2

0xdf26,	// (0x0005aae7) vid6_indi_pane_t3_ParamLimits

0xdf26,	// (0x0005aae7) vid6_indi_pane_t3

0xdf4e,	// (0x0005ab0f) vid6_indi_pane_t4_ParamLimits

0xdf4e,	// (0x0005ab0f) vid6_indi_pane_t4

0x0003,

0xfb9c,	// (0x0005c75d) vid6_indi_pane_t_ParamLimits

0xfb9c,	// (0x0005c75d) vid6_indi_pane_t

0xdf72,	// (0x0005ab33) wait_bar_pane_cp08

0x7c36,	// (0x000547f7) main_cset_text2_pane_t1_ParamLimits

0x7c36,	// (0x000547f7) main_cset_text2_pane_t1

0x7bc9,	// (0x0005478a) listscroll_gen_pane_cp06_t1_ParamLimits

0x7bc9,	// (0x0005478a) listscroll_gen_pane_cp06_t1

0x9847,	// (0x00056408) main_cam6_set_pane

0xcfaf,	// (0x00059b70) bg_tb_trans_pane_cp06_ParamLimits

0xa080,	// (0x00056c41) cam4_indicators_pane_g1_ParamLimits

0xa091,	// (0x00056c52) cam4_indicators_pane_g2_ParamLimits

0xf90a,	// (0x0005c4cb) cam4_indicators_pane_g_ParamLimits

0xa0a9,	// (0x00056c6a) cam4_indicators_pane_t1_ParamLimits

0xa3b1,	// (0x00056f72) bg_tb_trans_pane_cp07_ParamLimits

0xa0d3,	// (0x00056c94) vid4_indicators_pane_g1_ParamLimits

0xa0e7,	// (0x00056ca8) vid4_indicators_pane_g2_ParamLimits

0xa0fb,	// (0x00056cbc) vid4_indicators_pane_g3_ParamLimits

0xa10c,	// (0x00056ccd) vid4_indicators_pane_g4_ParamLimits

0xf91c,	// (0x0005c4dd) vid4_indicators_pane_g_ParamLimits

0xa128,	// (0x00056ce9) vid4_indicators_pane_t1_ParamLimits

0xa1b5,	// (0x00056d76) vid4_progress_pane_g1_ParamLimits

0xa1c5,	// (0x00056d86) vid4_progress_pane_g2_ParamLimits

0x770d,	// (0x000542ce) vid4_progress_pane_g3_ParamLimits

0xa1d5,	// (0x00056d96) vid4_progress_pane_g4_ParamLimits

0xfacd,	// (0x0005c68e) vid4_progress_pane_g_ParamLimits

0x771f,	// (0x000542e0) vid4_progress_pane_t1_ParamLimits

0xa1ed,	// (0x00056dae) vid4_progress_pane_t2_ParamLimits

0xa202,	// (0x00056dc3) vid4_progress_pane_t3_ParamLimits

0xfad8,	// (0x0005c699) vid4_progress_pane_t_ParamLimits

0x7735,	// (0x000542f6) wait_bar_pane_cp07_ParamLimits

0x7c54,	// (0x00054815) main_cam6_set_pane_g2_ParamLimits

0x7c54,	// (0x00054815) main_cam6_set_pane_g2

0x7c78,	// (0x00054839) main_cset6_listscroll_pane_ParamLimits

0x7c78,	// (0x00054839) main_cset6_listscroll_pane

0x7c94,	// (0x00054855) main_cset6_slider_pane_ParamLimits

0x7c94,	// (0x00054855) main_cset6_slider_pane

0x7caa,	// (0x0005486b) main_cset6_text2_pane_ParamLimits

0x7caa,	// (0x0005486b) main_cset6_text2_pane

0xdf81,	// (0x0005ab42) main_cset6_text_pane

0xdf89,	// (0x0005ab4a) main_cset_list_pane_copy1_ParamLimits

0xdf89,	// (0x0005ab4a) main_cset_list_pane_copy1

0xdf99,	// (0x0005ab5a) scroll_pane_cp028_copy1

0x7cb8,	// (0x00054879) cset_list_set_pane_copy1

0x7cca,	// (0x0005488b) aid_position_infowindow_above_copy1

0x7cd2,	// (0x00054893) aid_position_infowindow_below_copy1

0x0912,	// (0x0004d4d3) cset_list_set_pane_g1_copy1

0x091a,	// (0x0004d4db) cset_list_set_pane_g3_copy1_ParamLimits

0x091a,	// (0x0004d4db) cset_list_set_pane_g3_copy1

0x0929,	// (0x0004d4ea) cset_list_set_pane_t1_copy1_ParamLimits

0x0929,	// (0x0004d4ea) cset_list_set_pane_t1_copy1

0xa3b1,	// (0x00056f72) list_highlight_pane_cp021_copy1_ParamLimits

0xa3b1,	// (0x00056f72) list_highlight_pane_cp021_copy1

0xdfa2,	// (0x0005ab63) cset6_slider_pane_ParamLimits

0xdfa2,	// (0x0005ab63) cset6_slider_pane

0xdfce,	// (0x0005ab8f) main_cset6_slider_pane_g1_ParamLimits

0xdfce,	// (0x0005ab8f) main_cset6_slider_pane_g1

0x7cda,	// (0x0005489b) main_cset6_slider_pane_g2_ParamLimits

0x7cda,	// (0x0005489b) main_cset6_slider_pane_g2

0xdff6,	// (0x0005abb7) main_cset6_slider_pane_g3_ParamLimits

0xdff6,	// (0x0005abb7) main_cset6_slider_pane_g3

0x7d02,	// (0x000548c3) main_cset6_slider_pane_g4_ParamLimits

0x7d02,	// (0x000548c3) main_cset6_slider_pane_g4

0xe002,	// (0x0005abc3) main_cset6_slider_pane_g5_ParamLimits

0xe002,	// (0x0005abc3) main_cset6_slider_pane_g5

0xd844,	// (0x0005a405) main_cset6_slider_pane_g7_ParamLimits

0xd844,	// (0x0005a405) main_cset6_slider_pane_g7

0xd850,	// (0x0005a411) main_cset6_slider_pane_g8_ParamLimits

0xd850,	// (0x0005a411) main_cset6_slider_pane_g8

0x6e3c,	// (0x000539fd) main_cset6_slider_pane_g9_ParamLimits

0x6e3c,	// (0x000539fd) main_cset6_slider_pane_g9

0x6e48,	// (0x00053a09) main_cset6_slider_pane_g10_ParamLimits

0x6e48,	// (0x00053a09) main_cset6_slider_pane_g10

0x6e54,	// (0x00053a15) main_cset6_slider_pane_g11_ParamLimits

0x6e54,	// (0x00053a15) main_cset6_slider_pane_g11

0x6e60,	// (0x00053a21) main_cset6_slider_pane_g12_ParamLimits

0x6e60,	// (0x00053a21) main_cset6_slider_pane_g12

0x6e6c,	// (0x00053a2d) main_cset6_slider_pane_g13_ParamLimits

0x6e6c,	// (0x00053a2d) main_cset6_slider_pane_g13

0x6e78,	// (0x00053a39) main_cset6_slider_pane_g14_ParamLimits

0x6e78,	// (0x00053a39) main_cset6_slider_pane_g14

0x7d0e,	// (0x000548cf) main_cset6_slider_pane_g15_ParamLimits

0x7d0e,	// (0x000548cf) main_cset6_slider_pane_g15

0xd85c,	// (0x0005a41d) main_cset6_slider_pane_g16_ParamLimits

0xd85c,	// (0x0005a41d) main_cset6_slider_pane_g16

0xd868,	// (0x0005a429) main_cset6_slider_pane_g17_ParamLimits

0xd868,	// (0x0005a429) main_cset6_slider_pane_g17

0x0011,

0xfba5,	// (0x0005c766) main_cset6_slider_pane_g_ParamLimits

0xfba5,	// (0x0005c766) main_cset6_slider_pane_g

0xe00e,	// (0x0005abcf) main_cset6_slider_pane_t1_ParamLimits

0xe00e,	// (0x0005abcf) main_cset6_slider_pane_t1

0x7d3e,	// (0x000548ff) main_cset6_slider_pane_t2_ParamLimits

0x7d3e,	// (0x000548ff) main_cset6_slider_pane_t2

0x7d69,	// (0x0005492a) main_cset6_slider_pane_t3_ParamLimits

0x7d69,	// (0x0005492a) main_cset6_slider_pane_t3

0x7d94,	// (0x00054955) main_cset6_slider_pane_t4_ParamLimits

0x7d94,	// (0x00054955) main_cset6_slider_pane_t4

0x7dbf,	// (0x00054980) main_cset6_slider_pane_t5_ParamLimits

0x7dbf,	// (0x00054980) main_cset6_slider_pane_t5

0xe04f,	// (0x0005ac10) main_cset6_slider_pane_t7_ParamLimits

0xe04f,	// (0x0005ac10) main_cset6_slider_pane_t7

0x7dea,	// (0x000549ab) main_cset6_slider_pane_t8_ParamLimits

0x7dea,	// (0x000549ab) main_cset6_slider_pane_t8

0x7e0e,	// (0x000549cf) main_cset6_slider_pane_t9_ParamLimits

0x7e0e,	// (0x000549cf) main_cset6_slider_pane_t9

0x7e32,	// (0x000549f3) main_cset6_slider_pane_t10_ParamLimits

0x7e32,	// (0x000549f3) main_cset6_slider_pane_t10

0x7e56,	// (0x00054a17) main_cset6_slider_pane_t11_ParamLimits

0x7e56,	// (0x00054a17) main_cset6_slider_pane_t11

0xe085,	// (0x0005ac46) main_cset6_slider_pane_t14_ParamLimits

0xe085,	// (0x0005ac46) main_cset6_slider_pane_t14

0xe0be,	// (0x0005ac7f) main_cset6_slider_pane_t15_ParamLimits

0xe0be,	// (0x0005ac7f) main_cset6_slider_pane_t15

0x000b,

0xfbca,	// (0x0005c78b) main_cset6_slider_pane_t_ParamLimits

0xfbca,	// (0x0005c78b) main_cset6_slider_pane_t

0xd546,	// (0x0005a107) cset_slider_pane_g1_copy1

0xdd3b,	// (0x0005a8fc) cset_slider_pane_g2_copy1

0xdd44,	// (0x0005a905) cset_slider_pane_g3_copy1

0x9847,	// (0x00056408) bg_popup_sub_pane_cp011_copy1

0xe0f7,	// (0x0005acb8) main_cset_text_pane_g1_copy1

0xd9a0,	// (0x0005a561) main_cset_text_pane_t1_copy1

0xd9ae,	// (0x0005a56f) main_cset_text_pane_t2_copy1

0xd9bc,	// (0x0005a57d) main_cset_text_pane_t3_copy1

0xd9ca,	// (0x0005a58b) main_cset_text_pane_t4_copy1

0xd9d8,	// (0x0005a599) main_cset_text_pane_t5_copy1

0xe0ff,	// (0x0005acc0) main_cset_text_pane_t6_copy1

0xe10d,	// (0x0005acce) main_cset_text_pane_t7_copy1

0x7c36,	// (0x000547f7) main_cset_text2_pane_t1_copy1

0xa3b1,	// (0x00056f72) main_ncimui_pane

0x4402,	// (0x00050fc3) popup_query_ncimui_window_ParamLimits

0x4402,	// (0x00050fc3) popup_query_ncimui_window

0x5127,	// (0x00051ce8) field_cale_ev2_pane_g4_ParamLimits

0x5127,	// (0x00051ce8) field_cale_ev2_pane_g4

0x606d,	// (0x00052c2e) cell_video_dialer_keypad_pane_g2_ParamLimits

0x606d,	// (0x00052c2e) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8a4,	// (0x0005c465) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8a4,	// (0x0005c465) cell_video_dialer_keypad_pane_g

0x6085,	// (0x00052c46) cell_video_dialer_keypad_pane_t1

0x9847,	// (0x00056408) bg_popup_window_pane_cp012

0xb1ce,	// (0x00057d8f) heading_pane_cp06

0xe139,	// (0x0005acfa) ncim_query_content_pane

0x9847,	// (0x00056408) bg_popup_heading_pane_cp01

0xe141,	// (0x0005ad02) ncim_heading_pane_t1

0xe14f,	// (0x0005ad10) ncim_indicator_popup_pane

0xe161,	// (0x0005ad22) ncim_query_button_pane

0xe175,	// (0x0005ad36) ncim_query_content_pane_t1

0xe187,	// (0x0005ad48) ncim_query_content_pane_t2

0x0005,

0xfc0e,	// (0x0005c7cf) ncim_query_content_pane_t

0xe1c1,	// (0x0005ad82) ncim_query_list_pane

0xe1d3,	// (0x0005ad94) ncim_query_popup_pane

0xe14f,	// (0x0005ad10) ncim_indicator_popup_pane_ParamLimits

0x7fa3,	// (0x00054b64) ncim_query_content_pane_g1_ParamLimits

0x7fa3,	// (0x00054b64) ncim_query_content_pane_g1

0xe175,	// (0x0005ad36) ncim_query_content_pane_t1_ParamLimits

0xe187,	// (0x0005ad48) ncim_query_content_pane_t2_ParamLimits

0x7faf,	// (0x00054b70) ncim_query_content_pane_t3_ParamLimits

0x7faf,	// (0x00054b70) ncim_query_content_pane_t3

0x7fd7,	// (0x00054b98) ncim_query_content_pane_t4_ParamLimits

0x7fd7,	// (0x00054b98) ncim_query_content_pane_t4

0x7fff,	// (0x00054bc0) ncim_query_content_pane_t5_ParamLimits

0x7fff,	// (0x00054bc0) ncim_query_content_pane_t5

0xe199,	// (0x0005ad5a) ncim_query_content_pane_t6_ParamLimits

0xe199,	// (0x0005ad5a) ncim_query_content_pane_t6

0xfc0e,	// (0x0005c7cf) ncim_query_content_pane_t_ParamLimits

0xe1c1,	// (0x0005ad82) ncim_query_list_pane_ParamLimits

0xe1d3,	// (0x0005ad94) ncim_query_popup_pane_ParamLimits

0xe1e7,	// (0x0005ada8) wait_bar_pane_cp04

0x9847,	// (0x00056408) input_focus_pane_cp011

0xe1ef,	// (0x0005adb0) ncim_query_popup_pane_t1

0xe1fd,	// (0x0005adbe) ncim_list_query_list_pane_ParamLimits

0xe1fd,	// (0x0005adbe) ncim_list_query_list_pane

0x9847,	// (0x00056408) bg_button_pane_cp027

0xe20a,	// (0x0005adcb) ncim_query_button_pane_g1

0x9847,	// (0x00056408) list_highlight_pane_cp012

0xe214,	// (0x0005add5) ncim_list_query_list_pane_g1

0xe21c,	// (0x0005addd) ncim_list_query_list_pane_t1

0xa09d,	// (0x00056c5e) cam4_indicators_pane_g3_ParamLimits

0xa09d,	// (0x00056c5e) cam4_indicators_pane_g3

0xa118,	// (0x00056cd9) vid4_indicators_pane_g5_ParamLimits

0xa118,	// (0x00056cd9) vid4_indicators_pane_g5

0xa1e1,	// (0x00056da2) vid4_progress_pane_g5_ParamLimits

0xa1e1,	// (0x00056da2) vid4_progress_pane_g5

0x7e8e,	// (0x00054a4f) main_ncimui_pane_g1

0x7ef7,	// (0x00054ab8) ncimui_group_query_pane_ParamLimits

0x7ef7,	// (0x00054ab8) ncimui_group_query_pane

0x7f3f,	// (0x00054b00) ncimui_list_pane_ParamLimits

0x7f3f,	// (0x00054b00) ncimui_list_pane

0x7f66,	// (0x00054b27) ncimui_text_pane_ParamLimits

0x7f66,	// (0x00054b27) ncimui_text_pane

0x8027,	// (0x00054be8) ncimui_text_pane_t1_ParamLimits

0x8027,	// (0x00054be8) ncimui_text_pane_t1

0xe22a,	// (0x0005adeb) ncimui_list_single_graphic_pane_ParamLimits

0xe22a,	// (0x0005adeb) ncimui_list_single_graphic_pane

0x8045,	// (0x00054c06) ncimui_query_pane_ParamLimits

0x8045,	// (0x00054c06) ncimui_query_pane

0x9847,	// (0x00056408) list_highlight_pane_cp013

0xe23a,	// (0x0005adfb) ncim_list_query_list_pane_t1_copy1

0xe248,	// (0x0005ae09) ncim_list_single_graphic_pane_g1

0x8058,	// (0x00054c19) ncim_query_button_pane_cp01

0x8064,	// (0x00054c25) ncim_query_entry_pane_ParamLimits

0x8064,	// (0x00054c25) ncim_query_entry_pane

0x8077,	// (0x00054c38) ncimui_query_pane_g1

0x8083,	// (0x00054c44) ncimui_query_pane_t1_ParamLimits

0x8083,	// (0x00054c44) ncimui_query_pane_t1

0xa3b1,	// (0x00056f72) input_focus_pane_cp012

0xe250,	// (0x0005ae11) ncim_query_entry_pane_t1

0xa8e2,	// (0x000574a3) main_im_pane_ParamLimits

0xa3b1,	// (0x00056f72) main_mobtv_pane_ParamLimits

0xa3b1,	// (0x00056f72) main_mobtv_pane

0x7d26,	// (0x000548e7) main_cset6_slider_pane_g18_ParamLimits

0x7d26,	// (0x000548e7) main_cset6_slider_pane_g18

0x7d32,	// (0x000548f3) main_cset6_slider_pane_g19_ParamLimits

0x7d32,	// (0x000548f3) main_cset6_slider_pane_g19

0xaf1f,	// (0x00057ae0) bg_main_mobtv_pane_ParamLimits

0xaf1f,	// (0x00057ae0) bg_main_mobtv_pane

0x809c,	// (0x00054c5d) main_mobtv_info_pane

0x80a5,	// (0x00054c66) main_mobtv_loading_pane_ParamLimits

0x80a5,	// (0x00054c66) main_mobtv_loading_pane

0xe262,	// (0x0005ae23) main_mobtv_pg_channel_list_pane

0xe26c,	// (0x0005ae2d) main_mobtv_pg_hdr_pane

0x80b2,	// (0x00054c73) main_mobtv_programe_curr_pane_ParamLimits

0x80b2,	// (0x00054c73) main_mobtv_programe_curr_pane

0x80bf,	// (0x00054c80) main_mobtv_programe_next_pane_ParamLimits

0x80bf,	// (0x00054c80) main_mobtv_programe_next_pane

0xe275,	// (0x0005ae36) popup_mobtv_noti_window

0xcd6a,	// (0x0005992b) main_tv_pg_hdr_pane_g1

0xe27d,	// (0x0005ae3e) main_tv_pg_hdr_pane_g2

0xe285,	// (0x0005ae46) main_tv_pg_hdr_pane_g3

0xe28d,	// (0x0005ae4e) main_tv_pg_hdr_pane_g4

0xe295,	// (0x0005ae56) main_tv_pg_hdr_pane_g5

0xe29f,	// (0x0005ae60) main_tv_pg_hdr_pane_g6

0xe2a9,	// (0x0005ae6a) main_tv_pg_hdr_pane_g7

0xe2b3,	// (0x0005ae74) main_tv_pg_hdr_pane_g8

0xe2bd,	// (0x0005ae7e) main_tv_pg_hdr_pane_g9

0xe2c7,	// (0x0005ae88) main_tv_pg_hdr_pane_g10

0xe2d1,	// (0x0005ae92) main_tv_pg_hdr_pane_g11

0x000a,

0xfc1b,	// (0x0005c7dc) main_tv_pg_hdr_pane_g

0xe2db,	// (0x0005ae9c) main_tv_pg_hdr_pane_t1

0xe2e9,	// (0x0005aeaa) main_tv_pg_hdr_pane_t2

0xe2f7,	// (0x0005aeb8) main_tv_pg_hdr_pane_t3

0xe307,	// (0x0005aec8) main_tv_pg_hdr_pane_t4

0xe317,	// (0x0005aed8) main_tv_pg_hdr_pane_t5

0x0004,

0xfc32,	// (0x0005c7f3) main_tv_pg_hdr_pane_t

0xe327,	// (0x0005aee8) single_mobtv_pg_channel_pane_ParamLimits

0xe327,	// (0x0005aee8) single_mobtv_pg_channel_pane

0xe339,	// (0x0005aefa) single_mobtv_pg_channel_table_pane

0xae2a,	// (0x000579eb) single_mobtv_pg_channel_thumb_pane

0xe342,	// (0x0005af03) single_tv_pg_channel_pane_g1

0xe34b,	// (0x0005af0c) single_tv_pg_channel_pane_g2

0x0001,

0xfc3d,	// (0x0005c7fe) single_tv_pg_channel_pane_g

0xcfaf,	// (0x00059b70) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xcfaf,	// (0x00059b70) bg_single_mobtv_pg_channel_thumb_pane

0xe354,	// (0x0005af15) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe354,	// (0x0005af15) single_mobtv_pg_channel_thumb_pane_g1

0xe362,	// (0x0005af23) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe362,	// (0x0005af23) single_mobtv_pg_channel_thumb_pane_g2

0xe36e,	// (0x0005af2f) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe36e,	// (0x0005af2f) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc42,	// (0x0005c803) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc42,	// (0x0005c803) single_mobtv_pg_channel_thumb_pane_g

0xe37a,	// (0x0005af3b) single_mobtv_pg_channel_thumb_pane_t1

0xe388,	// (0x0005af49) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc49,	// (0x0005c80a) single_mobtv_pg_channel_thumb_pane_t

0xcd6a,	// (0x0005992b) bg_single_mobtv_pg_channel_table_pane_g1

0xcd6a,	// (0x0005992b) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6eb,	// (0x0005c2ac) bg_single_mobtv_pg_channel_table_pane_g

0xe396,	// (0x0005af57) single_mobtv_pg_channel_table_pane_t1

0xe3a4,	// (0x0005af65) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc4e,	// (0x0005c80f) single_mobtv_pg_channel_table_pane_t

0x80d4,	// (0x00054c95) main_mobtv_info_pane_g1_ParamLimits

0x80d4,	// (0x00054c95) main_mobtv_info_pane_g1

0x80f2,	// (0x00054cb3) main_mobtv_info_pane_t1_ParamLimits

0x80f2,	// (0x00054cb3) main_mobtv_info_pane_t1

0x816a,	// (0x00054d2b) main_mobtv_info_pane_t2_ParamLimits

0x816a,	// (0x00054d2b) main_mobtv_info_pane_t2

0x0002,

0xfc58,	// (0x0005c819) main_mobtv_info_pane_t_ParamLimits

0xfc58,	// (0x0005c819) main_mobtv_info_pane_t

0x81f9,	// (0x00054dba) wait_bar_pane_cp05

0x820b,	// (0x00054dcc) main_mobtv_loading_pane_g1_ParamLimits

0x820b,	// (0x00054dcc) main_mobtv_loading_pane_g1

0x821e,	// (0x00054ddf) main_mobtv_loading_pane_g2_ParamLimits

0x821e,	// (0x00054ddf) main_mobtv_loading_pane_g2

0x822a,	// (0x00054deb) main_mobtv_loading_pane_g3_ParamLimits

0x822a,	// (0x00054deb) main_mobtv_loading_pane_g3

0x0002,

0xfc5f,	// (0x0005c820) main_mobtv_loading_pane_g_ParamLimits

0xfc5f,	// (0x0005c820) main_mobtv_loading_pane_g

0xe3b2,	// (0x0005af73) main_mobtv_loading_pane_t1_ParamLimits

0xe3b2,	// (0x0005af73) main_mobtv_loading_pane_t1

0xe3ca,	// (0x0005af8b) main_mobtv_loading_pane_t2_ParamLimits

0xe3ca,	// (0x0005af8b) main_mobtv_loading_pane_t2

0x0001,

0xfc66,	// (0x0005c827) main_mobtv_loading_pane_t_ParamLimits

0xfc66,	// (0x0005c827) main_mobtv_loading_pane_t

0x823d,	// (0x00054dfe) wait_bar_pane_cp06_ParamLimits

0x823d,	// (0x00054dfe) wait_bar_pane_cp06

0xe3ee,	// (0x0005afaf) main_mobtv_programe_curr_pane_t1

0xe3fc,	// (0x0005afbd) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc6b,	// (0x0005c82c) main_mobtv_programe_curr_pane_t

0xe40a,	// (0x0005afcb) main_mobtv_programe_next_pane_t1

0xe418,	// (0x0005afd9) main_mobtv_programe_next_pane_t2

0xe426,	// (0x0005afe7) main_mobtv_programe_next_pane_t3

0x0002,

0xfc70,	// (0x0005c831) main_mobtv_programe_next_pane_t

0x9847,	// (0x00056408) bg_popup_mobtv_noti_window_pane

0xe434,	// (0x0005aff5) popup_mobtv_noti_window_g1

0xe43c,	// (0x0005affd) popup_mobtv_noti_window_t1

0xe44a,	// (0x0005b00b) popup_mobtv_noti_window_t2

0x0001,

0xfc77,	// (0x0005c838) popup_mobtv_noti_window_t

0xcd6a,	// (0x0005992b) bg_popup_mobtv_noti_window_pane_g1

0x9847,	// (0x00056408) sc_clock_pane

0x9847,	// (0x00056408) main_fs_bigclock_pane

0x7983,	// (0x00054544) blid2_tripm_pane_t4_ParamLimits

0x7983,	// (0x00054544) blid2_tripm_pane_t4

0x824c,	// (0x00054e0d) sc_clock_pane_g1_ParamLimits

0x824c,	// (0x00054e0d) sc_clock_pane_g1

0x825e,	// (0x00054e1f) sc_clock_pane_t1_ParamLimits

0x825e,	// (0x00054e1f) sc_clock_pane_t1

0x8280,	// (0x00054e41) sc_clock_pane_t2_ParamLimits

0x8280,	// (0x00054e41) sc_clock_pane_t2

0x8298,	// (0x00054e59) sc_clock_pane_t3_ParamLimits

0x8298,	// (0x00054e59) sc_clock_pane_t3

0x0004,

0xfc7c,	// (0x0005c83d) sc_clock_pane_t_ParamLimits

0xfc7c,	// (0x0005c83d) sc_clock_pane_t

0x8e11,	// (0x000559d2) main_fs_bigclock_indicator_pane_ParamLimits

0x8e11,	// (0x000559d2) main_fs_bigclock_indicator_pane

0x833e,	// (0x00054eff) main_fs_bigclock_pane_g1_ParamLimits

0x833e,	// (0x00054eff) main_fs_bigclock_pane_g1

0x8e1d,	// (0x000559de) main_fs_bigclock_pane_t1_ParamLimits

0x8e1d,	// (0x000559de) main_fs_bigclock_pane_t1

0x8e2f,	// (0x000559f0) main_fs_bigclock_pane_t2_ParamLimits

0x8e2f,	// (0x000559f0) main_fs_bigclock_pane_t2

0x8e43,	// (0x00055a04) main_fs_bigclock_pane_t3_ParamLimits

0x8e43,	// (0x00055a04) main_fs_bigclock_pane_t3

0x0002,

0xfe13,	// (0x0005c9d4) main_fs_bigclock_pane_t_ParamLimits

0xfe13,	// (0x0005c9d4) main_fs_bigclock_pane_t

0xeccc,	// (0x0005b88d) main_fs_bigclock_indicator_pane_g1

0xe169,	// (0x0005ad2a) ncim_query_content_pane_g2_ParamLimits

0xe169,	// (0x0005ad2a) ncim_query_content_pane_g2

0x0001,

0xfc09,	// (0x0005c7ca) ncim_query_content_pane_g_ParamLimits

0xfc09,	// (0x0005c7ca) ncim_query_content_pane_g

0x82b1,	// (0x00054e72) sc_clock_pane_t4_ParamLimits

0x82b1,	// (0x00054e72) sc_clock_pane_t4

0xa3b1,	// (0x00056f72) main_radioblah_pane

0xa012,	// (0x00056bd3) cell_call4_button_pane_t1_copy1_ParamLimits

0xa012,	// (0x00056bd3) cell_call4_button_pane_t1_copy1

0x7ea6,	// (0x00054a67) main_ncimui_pane_t1_ParamLimits

0x7ea6,	// (0x00054a67) main_ncimui_pane_t1

0x7ec0,	// (0x00054a81) main_ncimui_pane_t2_ParamLimits

0x7ec0,	// (0x00054a81) main_ncimui_pane_t2

0x0002,

0xfc02,	// (0x0005c7c3) main_ncimui_pane_t_ParamLimits

0xfc02,	// (0x0005c7c3) main_ncimui_pane_t

0xe590,	// (0x0005b151) main_radioblah_anim_pane_ParamLimits

0xe590,	// (0x0005b151) main_radioblah_anim_pane

0xe5a1,	// (0x0005b162) main_radioblah_info_pane_ParamLimits

0xe5a1,	// (0x0005b162) main_radioblah_info_pane

0xe5b5,	// (0x0005b176) main_radioblah_pane_t1_ParamLimits

0xe5b5,	// (0x0005b176) main_radioblah_pane_t1

0xe5d1,	// (0x0005b192) main_radioblah_pane_t2_ParamLimits

0xe5d1,	// (0x0005b192) main_radioblah_pane_t2

0x0003,

0xfc9d,	// (0x0005c85e) main_radioblah_pane_t_ParamLimits

0xfc9d,	// (0x0005c85e) main_radioblah_pane_t

0x839d,	// (0x00054f5e) main_radioblah_rocker_ctrl_pane_ParamLimits

0x839d,	// (0x00054f5e) main_radioblah_rocker_ctrl_pane

0xe619,	// (0x0005b1da) main_radioblah_info_pane_t1_ParamLimits

0xe619,	// (0x0005b1da) main_radioblah_info_pane_t1

0x83f5,	// (0x00054fb6) main_radioblah_info_pane_t2_ParamLimits

0x83f5,	// (0x00054fb6) main_radioblah_info_pane_t2

0x0003,

0xfca6,	// (0x0005c867) main_radioblah_info_pane_t_ParamLimits

0xfca6,	// (0x0005c867) main_radioblah_info_pane_t

0xcd6a,	// (0x0005992b) main_radioblah_rocker_ctrl_pane_g1

0x84a5,	// (0x00055066) main_radioblah_rocker_ctrl_pane_g2

0x84ad,	// (0x0005506e) main_radioblah_rocker_ctrl_pane_g3

0x84b5,	// (0x00055076) main_radioblah_rocker_ctrl_pane_g4

0x84bd,	// (0x0005507e) main_radioblah_rocker_ctrl_pane_g5

0x84c5,	// (0x00055086) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcaf,	// (0x0005c870) main_radioblah_rocker_ctrl_pane_g

0x7c36,	// (0x000547f7) main_cset_text2_pane_t1_copy1_ParamLimits

0xa070,	// (0x00056c31) cam4_image_uncrop_qvga_pane

0xa0c3,	// (0x00056c84) vid4_image_uncrop_qcif_pane

0xa218,	// (0x00056dd9) cam6_image_uncrop_qvga_pane_ParamLimits

0xa218,	// (0x00056dd9) cam6_image_uncrop_qvga_pane

0xde64,	// (0x0005aa25) vid6_image_uncrop_qcif_pane_ParamLimits

0xde64,	// (0x0005aa25) vid6_image_uncrop_qcif_pane

0x9847,	// (0x00056408) bg_popup_preview_window_pane_cp03

0xe11b,	// (0x0005acdc) list_cset_text2_pane

0xe123,	// (0x0005ace4) main_cset6_text2_pane_g1

0xe12b,	// (0x0005acec) main_cset6_text2_pane_t1

0xe653,	// (0x0005b214) list_cset_text2_pane_t1_ParamLimits

0xe653,	// (0x0005b214) list_cset_text2_pane_t1

0xa3b1,	// (0x00056f72) main_radioblah_pane_ParamLimits

0x81e5,	// (0x00054da6) main_mobtv_info_pane_t3_ParamLimits

0x81e5,	// (0x00054da6) main_mobtv_info_pane_t3

0x838b,	// (0x00054f4c) main_radioblah_pane_g1

0x83c5,	// (0x00054f86) main_radioblah_info_pane_g1

0x844a,	// (0x0005500b) main_radioblah_info_pane_t3_ParamLimits

0x844a,	// (0x0005500b) main_radioblah_info_pane_t3

0x2f46,	// (0x0004fb07) highlight_cell_cale_month_pane_ParamLimits

0x2f46,	// (0x0004fb07) highlight_cell_cale_month_pane

0x9847,	// (0x00056408) main_phob_fisheye_pane

0xd08b,	// (0x00059c4c) scroll_pane_cp0031_ParamLimits

0xd08b,	// (0x00059c4c) scroll_pane_cp0031

0xdf72,	// (0x0005ab33) wait_bar_pane_cp08_ParamLimits

0x7cb8,	// (0x00054879) cset_list_set_pane_copy1_ParamLimits

0xe66e,	// (0x0005b22f) highlight_cell_cale_month_pane_g1

0x84cd,	// (0x0005508e) highlight_cell_cale_month_pane_t1

0xdbc0,	// (0x0005a781) list_gen_pane_cp01

0xd82f,	// (0x0005a3f0) scroll_pane_01

0x84db,	// (0x0005509c) list_single_double_fisheye_pane

0x0a14,	// (0x0004d5d5) list_double_fisheye_pane_g1_ParamLimits

0x0a14,	// (0x0004d5d5) list_double_fisheye_pane_g1

0x0a20,	// (0x0004d5e1) list_double_fisheye_pane_g2_ParamLimits

0x0a20,	// (0x0004d5e1) list_double_fisheye_pane_g2

0x84e4,	// (0x000550a5) list_double_fisheye_pane_g3_ParamLimits

0x84e4,	// (0x000550a5) list_double_fisheye_pane_g3

0x0004,

0xfcbc,	// (0x0005c87d) list_double_fisheye_pane_g_ParamLimits

0xfcbc,	// (0x0005c87d) list_double_fisheye_pane_g

0x0a51,	// (0x0004d612) list_double_fisheye_pane_t1_ParamLimits

0x0a51,	// (0x0004d612) list_double_fisheye_pane_t1

0x0a6c,	// (0x0004d62d) list_double_fisheye_pane_t2_ParamLimits

0x0a6c,	// (0x0004d62d) list_double_fisheye_pane_t2

0x0001,

0xfcc7,	// (0x0005c888) list_double_fisheye_pane_t_ParamLimits

0xfcc7,	// (0x0005c888) list_double_fisheye_pane_t

0x9847,	// (0x00056408) main_call5_pane

0x82dc,	// (0x00054e9d) sc_swipe_pane_ParamLimits

0x82dc,	// (0x00054e9d) sc_swipe_pane

0x8503,	// (0x000550c4) call5_image_pane_ParamLimits

0x8503,	// (0x000550c4) call5_image_pane

0x8520,	// (0x000550e1) call5_swipe_1_pane_ParamLimits

0x8520,	// (0x000550e1) call5_swipe_1_pane

0x8533,	// (0x000550f4) call5_swipe_2_pane_ParamLimits

0x8533,	// (0x000550f4) call5_swipe_2_pane

0x855e,	// (0x0005511f) popup_call5_audio_first_window_ParamLimits

0x855e,	// (0x0005511f) popup_call5_audio_first_window

0xcfaf,	// (0x00059b70) call5_swipe_1_pane_g1_ParamLimits

0xcfaf,	// (0x00059b70) call5_swipe_1_pane_g1

0xe676,	// (0x0005b237) call5_swipe_1_pane_g2_ParamLimits

0xe676,	// (0x0005b237) call5_swipe_1_pane_g2

0x0001,

0xfccc,	// (0x0005c88d) call5_swipe_1_pane_g_ParamLimits

0xfccc,	// (0x0005c88d) call5_swipe_1_pane_g

0xe682,	// (0x0005b243) call5_swipe_1_pane_t1_ParamLimits

0xe682,	// (0x0005b243) call5_swipe_1_pane_t1

0xcfaf,	// (0x00059b70) call5_swipe_2_pane_g1_ParamLimits

0xcfaf,	// (0x00059b70) call5_swipe_2_pane_g1

0xe697,	// (0x0005b258) call5_swipe_2_pane_g2_ParamLimits

0xe697,	// (0x0005b258) call5_swipe_2_pane_g2

0x0001,

0x00b1,	// (0x0004cc72) call5_swipe_2_pane_g_ParamLimits

0x00b1,	// (0x0004cc72) call5_swipe_2_pane_g

0xe6a3,	// (0x0005b264) call5_swipe_2_pane_t1_ParamLimits

0xe6a3,	// (0x0005b264) call5_swipe_2_pane_t1

0xe6b8,	// (0x0005b279) sc_swipe_pane_g1_ParamLimits

0xe6b8,	// (0x0005b279) sc_swipe_pane_g1

0xe6c5,	// (0x0005b286) sc_swipe_pane_g2_ParamLimits

0xe6c5,	// (0x0005b286) sc_swipe_pane_g2

0x0001,

0x00b6,	// (0x0004cc77) sc_swipe_pane_g_ParamLimits

0x00b6,	// (0x0004cc77) sc_swipe_pane_g

0xe6d1,	// (0x0005b292) sc_swipe_pane_t1_ParamLimits

0xe6d1,	// (0x0005b292) sc_swipe_pane_t1

0x9847,	// (0x00056408) main_cmail_launcher_pane

0x856f,	// (0x00055130) aid_size_cell_cmail_l_ParamLimits

0x856f,	// (0x00055130) aid_size_cell_cmail_l

0x857d,	// (0x0005513e) grid_cmail_l_pane_ParamLimits

0x857d,	// (0x0005513e) grid_cmail_l_pane

0x8597,	// (0x00055158) cell_cmail_l_pane_ParamLimits

0x8597,	// (0x00055158) cell_cmail_l_pane

0xe6e6,	// (0x0005b2a7) cell_cmail_l_pane_g1_ParamLimits

0xe6e6,	// (0x0005b2a7) cell_cmail_l_pane_g1

0xe6f2,	// (0x0005b2b3) cell_cmail_l_pane_t1_ParamLimits

0xe6f2,	// (0x0005b2b3) cell_cmail_l_pane_t1

0xe708,	// (0x0005b2c9) cell_cmail_l_pane_t2_ParamLimits

0xe708,	// (0x0005b2c9) cell_cmail_l_pane_t2

0x0001,

0x00bb,	// (0x0004cc7c) cell_cmail_l_pane_t_ParamLimits

0x00bb,	// (0x0004cc7c) cell_cmail_l_pane_t

0xa3b1,	// (0x00056f72) grid_highlight_pane_cp018_ParamLimits

0xa3b1,	// (0x00056f72) grid_highlight_pane_cp018

0x1311,	// (0x0004ded2) main2_pane_ParamLimits

0x1311,	// (0x0004ded2) main2_pane

0xa984,	// (0x00057545) popup_sp_fs_action_menu_bg_pane_g1

0xa98c,	// (0x0005754d) popup_sp_fs_action_menu_bg_pane_g2

0xa994,	// (0x00057555) popup_sp_fs_action_menu_bg_pane_g3

0xa99c,	// (0x0005755d) popup_sp_fs_action_menu_bg_pane_g4

0xa9a4,	// (0x00057565) popup_sp_fs_action_menu_bg_pane_g5

0xa9ac,	// (0x0005756d) popup_sp_fs_action_menu_bg_pane_g6

0xa9b4,	// (0x00057575) popup_sp_fs_action_menu_bg_pane_g7

0xa9bc,	// (0x0005757d) popup_sp_fs_action_menu_bg_pane_g8

0xa9c4,	// (0x00057585) popup_sp_fs_action_menu_bg_pane_g9

0xa9cc,	// (0x0005758d) popup_sp_fs_action_menu_bg_pane_g10

0xa9cc,	// (0x0005758d) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf186,	// (0x0005bd47) popup_sp_fs_action_menu_bg_pane_g

0x0368,	// (0x0004cf29) list_medium_line_x2_t3_g3_g1_ParamLimits

0x0368,	// (0x0004cf29) list_medium_line_x2_t3_g3_g1

0x0374,	// (0x0004cf35) list_medium_line_x2_t3_g3_g2_ParamLimits

0x0374,	// (0x0004cf35) list_medium_line_x2_t3_g3_g2

0x0380,	// (0x0004cf41) list_medium_line_x2_t3_g3_g3_ParamLimits

0x0380,	// (0x0004cf41) list_medium_line_x2_t3_g3_g3

0x0002,

0xf234,	// (0x0005bdf5) list_medium_line_x2_t3_g3_g_ParamLimits

0xf234,	// (0x0005bdf5) list_medium_line_x2_t3_g3_g

0x038c,	// (0x0004cf4d) list_medium_line_x2_t3_g3_t1_ParamLimits

0x038c,	// (0x0004cf4d) list_medium_line_x2_t3_g3_t1

0x03a1,	// (0x0004cf62) list_medium_line_x2_t3_g3_t2_ParamLimits

0x03a1,	// (0x0004cf62) list_medium_line_x2_t3_g3_t2

0x03b5,	// (0x0004cf76) list_medium_line_x2_t3_g3_t3_ParamLimits

0x03b5,	// (0x0004cf76) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23b,	// (0x0005bdfc) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23b,	// (0x0005bdfc) list_medium_line_x2_t3_g3_t

0x0368,	// (0x0004cf29) list_medium_line_x2_t3_g2_g1_ParamLimits

0x0368,	// (0x0004cf29) list_medium_line_x2_t3_g2_g1

0x0380,	// (0x0004cf41) list_medium_line_x2_t3_g2_g2_ParamLimits

0x0380,	// (0x0004cf41) list_medium_line_x2_t3_g2_g2

0x0001,

0xf242,	// (0x0005be03) list_medium_line_x2_t3_g2_g_ParamLimits

0xf242,	// (0x0005be03) list_medium_line_x2_t3_g2_g

0x03ca,	// (0x0004cf8b) list_medium_line_x2_t3_g2_t1_ParamLimits

0x03ca,	// (0x0004cf8b) list_medium_line_x2_t3_g2_t1

0x03df,	// (0x0004cfa0) list_medium_line_x2_t3_g2_t2_ParamLimits

0x03df,	// (0x0004cfa0) list_medium_line_x2_t3_g2_t2

0x03f1,	// (0x0004cfb2) list_medium_line_x2_t3_g2_t3_ParamLimits

0x03f1,	// (0x0004cfb2) list_medium_line_x2_t3_g2_t3

0x0002,

0xf247,	// (0x0005be08) list_medium_line_x2_t3_g2_t_ParamLimits

0xf247,	// (0x0005be08) list_medium_line_x2_t3_g2_t

0x0368,	// (0x0004cf29) list_medium_line_x2_t4_g4_g1_ParamLimits

0x0368,	// (0x0004cf29) list_medium_line_x2_t4_g4_g1

0x040f,	// (0x0004cfd0) list_medium_line_x2_t4_g4_g2_ParamLimits

0x040f,	// (0x0004cfd0) list_medium_line_x2_t4_g4_g2

0x0374,	// (0x0004cf35) list_medium_line_x2_t4_g4_g3_ParamLimits

0x0374,	// (0x0004cf35) list_medium_line_x2_t4_g4_g3

0x041b,	// (0x0004cfdc) list_medium_line_x2_t4_g4_g4_ParamLimits

0x041b,	// (0x0004cfdc) list_medium_line_x2_t4_g4_g4

0x0003,

0xf24e,	// (0x0005be0f) list_medium_line_x2_t4_g4_g_ParamLimits

0xf24e,	// (0x0005be0f) list_medium_line_x2_t4_g4_g

0x0427,	// (0x0004cfe8) list_medium_line_x2_t4_g4_t1_ParamLimits

0x0427,	// (0x0004cfe8) list_medium_line_x2_t4_g4_t1

0x0441,	// (0x0004d002) list_medium_line_x2_t4_g4_t2_ParamLimits

0x0441,	// (0x0004d002) list_medium_line_x2_t4_g4_t2

0x0457,	// (0x0004d018) list_medium_line_x2_t4_g4_t3_ParamLimits

0x0457,	// (0x0004d018) list_medium_line_x2_t4_g4_t3

0x046c,	// (0x0004d02d) list_medium_line_x2_t4_g4_t4_ParamLimits

0x046c,	// (0x0004d02d) list_medium_line_x2_t4_g4_t4

0x0003,

0xf257,	// (0x0005be18) list_medium_line_x2_t4_g4_t_ParamLimits

0xf257,	// (0x0005be18) list_medium_line_x2_t4_g4_t

0x0368,	// (0x0004cf29) list_medium_line_x2_t2_g4_g1_ParamLimits

0x0368,	// (0x0004cf29) list_medium_line_x2_t2_g4_g1

0x040f,	// (0x0004cfd0) list_medium_line_x2_t2_g4_g2_ParamLimits

0x040f,	// (0x0004cfd0) list_medium_line_x2_t2_g4_g2

0x0374,	// (0x0004cf35) list_medium_line_x2_t2_g4_g3_ParamLimits

0x0374,	// (0x0004cf35) list_medium_line_x2_t2_g4_g3

0x0380,	// (0x0004cf41) list_medium_line_x2_t2_g4_g4_ParamLimits

0x0380,	// (0x0004cf41) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2be,	// (0x0005be7f) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2be,	// (0x0005be7f) list_medium_line_x2_t2_g4_g

0x047e,	// (0x0004d03f) list_medium_line_x2_t2_g4_t1_ParamLimits

0x047e,	// (0x0004d03f) list_medium_line_x2_t2_g4_t1

0x03b5,	// (0x0004cf76) list_medium_line_x2_t2_g4_t2_ParamLimits

0x03b5,	// (0x0004cf76) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2c7,	// (0x0005be88) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2c7,	// (0x0005be88) list_medium_line_x2_t2_g4_t

0x0368,	// (0x0004cf29) list_medium_line_x2_t2_g3_g1_ParamLimits

0x0368,	// (0x0004cf29) list_medium_line_x2_t2_g3_g1

0x0374,	// (0x0004cf35) list_medium_line_x2_t2_g3_g2_ParamLimits

0x0374,	// (0x0004cf35) list_medium_line_x2_t2_g3_g2

0x0380,	// (0x0004cf41) list_medium_line_x2_t2_g3_g3_ParamLimits

0x0380,	// (0x0004cf41) list_medium_line_x2_t2_g3_g3

0x0002,

0xf234,	// (0x0005bdf5) list_medium_line_x2_t2_g3_g_ParamLimits

0xf234,	// (0x0005bdf5) list_medium_line_x2_t2_g3_g

0x0493,	// (0x0004d054) list_medium_line_x2_t2_g3_t1_ParamLimits

0x0493,	// (0x0004d054) list_medium_line_x2_t2_g3_t1

0x03b5,	// (0x0004cf76) list_medium_line_x2_t2_g3_t2_ParamLimits

0x03b5,	// (0x0004cf76) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2cc,	// (0x0005be8d) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2cc,	// (0x0005be8d) list_medium_line_x2_t2_g3_t

0x30ab,	// (0x0004fc6c) main_sp_fs_list_pane_ParamLimits

0x30ab,	// (0x0004fc6c) main_sp_fs_list_pane

0xd1d5,	// (0x00059d96) sp_fs_scroll_pane_ParamLimits

0xd1d5,	// (0x00059d96) sp_fs_scroll_pane

0x04a8,	// (0x0004d069) list_medium_line_x2_t3_t1

0x04b8,	// (0x0004d079) list_medium_line_x2_t3_t2

0x04c6,	// (0x0004d087) list_medium_line_x2_t3_t3

0x0002,

0xf317,	// (0x0005bed8) list_medium_line_x2_t3_t

0x04d4,	// (0x0004d095) list_medium_line_x3_t4_t1

0x04e4,	// (0x0004d0a5) list_medium_line_x3_t4_t2

0x04f2,	// (0x0004d0b3) list_medium_line_x3_t4_t3

0x04c6,	// (0x0004d087) list_medium_line_x3_t4_t4

0x0003,

0xf31e,	// (0x0005bedf) list_medium_line_x3_t4_t

0x0500,	// (0x0004d0c1) list_medium_line_x4_t5_t1

0x0510,	// (0x0004d0d1) list_medium_line_x4_t5_t2

0x04f2,	// (0x0004d0b3) list_medium_line_x4_t5_t3

0x051e,	// (0x0004d0df) list_medium_line_x4_t5_t4

0x04c6,	// (0x0004d087) list_medium_line_x4_t5_t5

0x0004,

0xf327,	// (0x0005bee8) list_medium_line_x4_t5_t

0x0368,	// (0x0004cf29) list_medium_line_t4_g4_g1_ParamLimits

0x0368,	// (0x0004cf29) list_medium_line_t4_g4_g1

0x041b,	// (0x0004cfdc) list_medium_line_t4_g4_g2_ParamLimits

0x041b,	// (0x0004cfdc) list_medium_line_t4_g4_g2

0x052c,	// (0x0004d0ed) list_medium_line_t4_g4_g3_ParamLimits

0x052c,	// (0x0004d0ed) list_medium_line_t4_g4_g3

0x0380,	// (0x0004cf41) list_medium_line_t4_g4_g4_ParamLimits

0x0380,	// (0x0004cf41) list_medium_line_t4_g4_g4

0x0003,

0xf332,	// (0x0005bef3) list_medium_line_t4_g4_g_ParamLimits

0xf332,	// (0x0005bef3) list_medium_line_t4_g4_g

0x0538,	// (0x0004d0f9) list_medium_line_t4_g4_t1_ParamLimits

0x0538,	// (0x0004d0f9) list_medium_line_t4_g4_t1

0x054d,	// (0x0004d10e) list_medium_line_t4_g4_t2_ParamLimits

0x054d,	// (0x0004d10e) list_medium_line_t4_g4_t2

0x0563,	// (0x0004d124) list_medium_line_t4_g4_t3_ParamLimits

0x0563,	// (0x0004d124) list_medium_line_t4_g4_t3

0x03b5,	// (0x0004cf76) list_medium_line_t4_g4_t4_ParamLimits

0x03b5,	// (0x0004cf76) list_medium_line_t4_g4_t4

0x0003,

0xf33b,	// (0x0005befc) list_medium_line_t4_g4_t_ParamLimits

0xf33b,	// (0x0005befc) list_medium_line_t4_g4_t

0x317a,	// (0x0004fd3b) chi_dic_find_pane_g1

0x41d2,	// (0x00050d93) main_tport_pane

0x071a,	// (0x0004d2db) list_medium_line_plain_t1

0x0728,	// (0x0004d2e9) list_medium_line_t2_g2_g1_ParamLimits

0x0728,	// (0x0004d2e9) list_medium_line_t2_g2_g1

0x0734,	// (0x0004d2f5) list_medium_line_t2_g2_g2_ParamLimits

0x0734,	// (0x0004d2f5) list_medium_line_t2_g2_g2

0x0001,

0xfa13,	// (0x0005c5d4) list_medium_line_t2_g2_g_ParamLimits

0xfa13,	// (0x0005c5d4) list_medium_line_t2_g2_g

0x0740,	// (0x0004d301) list_medium_line_t2_g2_t1_ParamLimits

0x0740,	// (0x0004d301) list_medium_line_t2_g2_t1

0x075a,	// (0x0004d31b) list_medium_line_t2_g2_t2_ParamLimits

0x075a,	// (0x0004d31b) list_medium_line_t2_g2_t2

0x0001,

0xfa18,	// (0x0005c5d9) list_medium_line_t2_g2_t_ParamLimits

0xfa18,	// (0x0005c5d9) list_medium_line_t2_g2_t

0x7746,	// (0x00054307) aid_sp_fs_list_icon_a_sm

0x774e,	// (0x0005430f) aid_sp_fs_list_icon_d

0x7756,	// (0x00054317) aid_sp_fs_text_primary

0xe884,	// (0x0005b445) aid_sp_fs_text_secondary

0x775f,	// (0x00054320) list_medium_line

0x775f,	// (0x00054320) list_medium_line_g2

0x775f,	// (0x00054320) list_medium_line_g3

0x775f,	// (0x00054320) list_medium_line_plain

0x775f,	// (0x00054320) list_medium_line_plain_t2

0x775f,	// (0x00054320) list_medium_line_plain_t3

0x775f,	// (0x00054320) list_medium_line_right_icon

0x775f,	// (0x00054320) list_medium_line_right_iconx2

0x775f,	// (0x00054320) list_medium_line_t2

0x775f,	// (0x00054320) list_medium_line_t2_g2

0x775f,	// (0x00054320) list_medium_line_t2_g3

0x775f,	// (0x00054320) list_medium_line_t2_right_icon

0x775f,	// (0x00054320) list_medium_line_t2_right_iconx2

0x775f,	// (0x00054320) list_medium_line_t3

0x775f,	// (0x00054320) list_medium_line_t3_g2

0x775f,	// (0x00054320) list_medium_line_t3_g3

0x775f,	// (0x00054320) list_medium_line_t3_right_iconx2

0x08ec,	// (0x0004d4ad) list_medium_line_t4_g4

0x775f,	// (0x00054320) list_medium_line_x2

0x775f,	// (0x00054320) list_medium_line_x2_t2_g2

0x775f,	// (0x00054320) list_medium_line_x2_t2_g3

0x775f,	// (0x00054320) list_medium_line_x2_t2_g4

0x775f,	// (0x00054320) list_medium_line_x2_t3

0x775f,	// (0x00054320) list_medium_line_x2_t3_g2

0x775f,	// (0x00054320) list_medium_line_x2_t3_g3

0x775f,	// (0x00054320) list_medium_line_x2_t3_g4

0x775f,	// (0x00054320) list_medium_line_x2_t4_g2

0x775f,	// (0x00054320) list_medium_line_x2_t4_g4

0x08f5,	// (0x0004d4b6) list_medium_line_x3

0x08f5,	// (0x0004d4b6) list_medium_line_x3_t4

0x08f5,	// (0x0004d4b6) list_medium_line_x3_t4_g4

0x08ec,	// (0x0004d4ad) list_medium_line_x4_t4

0x08ec,	// (0x0004d4ad) list_medium_line_x4_t4_g7

0x08ec,	// (0x0004d4ad) list_medium_line_x4_t5

0x08fe,	// (0x0004d4bf) list_single_fs_dyc_pane_ParamLimits

0x08fe,	// (0x0004d4bf) list_single_fs_dyc_pane

0x0368,	// (0x0004cf29) list_medium_line_x4_t4_g7_g1_ParamLimits

0x0368,	// (0x0004cf29) list_medium_line_x4_t4_g7_g1

0x093e,	// (0x0004d4ff) list_medium_line_x4_t4_g7_g2_ParamLimits

0x093e,	// (0x0004d4ff) list_medium_line_x4_t4_g7_g2

0x094a,	// (0x0004d50b) list_medium_line_x4_t4_g7_g3_ParamLimits

0x094a,	// (0x0004d50b) list_medium_line_x4_t4_g7_g3

0x0959,	// (0x0004d51a) list_medium_line_x4_t4_g7_g4_ParamLimits

0x0959,	// (0x0004d51a) list_medium_line_x4_t4_g7_g4

0x0965,	// (0x0004d526) list_medium_line_x4_t4_g7_g5_ParamLimits

0x0965,	// (0x0004d526) list_medium_line_x4_t4_g7_g5

0x0974,	// (0x0004d535) list_medium_line_x4_t4_g7_g6_ParamLimits

0x0974,	// (0x0004d535) list_medium_line_x4_t4_g7_g6

0x0983,	// (0x0004d544) list_medium_line_x4_t4_g7_g7_ParamLimits

0x0983,	// (0x0004d544) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbe3,	// (0x0005c7a4) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbe3,	// (0x0005c7a4) list_medium_line_x4_t4_g7_g

0x098f,	// (0x0004d550) list_medium_line_x4_t4_g7_t1_ParamLimits

0x098f,	// (0x0004d550) list_medium_line_x4_t4_g7_t1

0x09a4,	// (0x0004d565) list_medium_line_x4_t4_g7_t2_ParamLimits

0x09a4,	// (0x0004d565) list_medium_line_x4_t4_g7_t2

0x09b9,	// (0x0004d57a) list_medium_line_x4_t4_g7_t3_ParamLimits

0x09b9,	// (0x0004d57a) list_medium_line_x4_t4_g7_t3

0x09ce,	// (0x0004d58f) list_medium_line_x4_t4_g7_t4_ParamLimits

0x09ce,	// (0x0004d58f) list_medium_line_x4_t4_g7_t4

0x09e0,	// (0x0004d5a1) list_medium_line_x4_t4_g7_t5_ParamLimits

0x09e0,	// (0x0004d5a1) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbf2,	// (0x0005c7b3) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbf2,	// (0x0005c7b3) list_medium_line_x4_t4_g7_t

0x09f2,	// (0x0004d5b3) list_single_dyc_row_pane_ParamLimits

0x09f2,	// (0x0004d5b3) list_single_dyc_row_pane

0x84f0,	// (0x000550b1) call5_gesture_pane_ParamLimits

0x84f0,	// (0x000550b1) call5_gesture_pane

0x8546,	// (0x00055107) call5_windows_pane_ParamLimits

0x8546,	// (0x00055107) call5_windows_pane

0x85b1,	// (0x00055172) call5_swipe_1_pane_cp_ParamLimits

0x85b1,	// (0x00055172) call5_swipe_1_pane_cp

0x85bd,	// (0x0005517e) call5_swipe_2_pane_cp_ParamLimits

0x85bd,	// (0x0005517e) call5_swipe_2_pane_cp

0xaace,	// (0x0005768f) call5_image_pane_cp

0x85c9,	// (0x0005518a) popup_call5_audio_first_window_cp_ParamLimits

0x85c9,	// (0x0005518a) popup_call5_audio_first_window_cp

0xe6b8,	// (0x0005b279) call5_swipe_1_pane_g1_cp_ParamLimits

0xe6b8,	// (0x0005b279) call5_swipe_1_pane_g1_cp

0xe725,	// (0x0005b2e6) call5_swipe_1_pane_g2_cp

0xe6d1,	// (0x0005b292) call5_swipe_1_pane_t1_cp_ParamLimits

0xe6d1,	// (0x0005b292) call5_swipe_1_pane_t1_cp

0xe6b8,	// (0x0005b279) call5_swipe_2_pane_g1_cp_ParamLimits

0xe6b8,	// (0x0005b279) call5_swipe_2_pane_g1_cp

0xe72d,	// (0x0005b2ee) call5_swipe_2_pane_g2_cp

0xe735,	// (0x0005b2f6) call5_swipe_2_pane_t1_cp_ParamLimits

0xe735,	// (0x0005b2f6) call5_swipe_2_pane_t1_cp

0xa3b1,	// (0x00056f72) main_sp_fs_email_pane

0xe74a,	// (0x0005b30b) main_sp_fs_listscroll_pane_te

0x85d7,	// (0x00055198) popup_sp_fs_action_menu_pane_ParamLimits

0x85d7,	// (0x00055198) popup_sp_fs_action_menu_pane

0xcd6a,	// (0x0005992b) bg_sp_fs_ctrlbar_pane_g1

0xe753,	// (0x0005b314) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe75c,	// (0x0005b31d) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe765,	// (0x0005b326) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcd6a,	// (0x0005992b) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0x00c0,	// (0x0004cc81) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xcb4f,	// (0x00059710) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xcb4f,	// (0x00059710) bg_sp_fs_ctrlbar_ddmenu_pane

0xe76e,	// (0x0005b32f) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe76e,	// (0x0005b32f) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe77a,	// (0x0005b33b) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe77a,	// (0x0005b33b) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0x00c9,	// (0x0004cc8a) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0x00c9,	// (0x0004cc8a) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe786,	// (0x0005b347) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe786,	// (0x0005b347) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x0a8e,	// (0x0004d64f) list_medium_line_t2_right_icon_g1

0x0a96,	// (0x0004d657) list_medium_line_t2_right_icon_t1

0x0aa6,	// (0x0004d667) list_medium_line_t2_right_icon_t2

0x0001,

0xfcd1,	// (0x0005c892) list_medium_line_t2_right_icon_t

0xc962,	// (0x00059523) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc962,	// (0x00059523) bg_sp_fs_ctrlbar_pane

0x8661,	// (0x00055222) main_sp_fs_ctrlbar_button_pane_cp01

0x866b,	// (0x0005522c) main_sp_fs_ctrlbar_ddmenu_pane

0xe7d8,	// (0x0005b399) main_sp_fs_ctrlbar_pane_g1

0xe7e4,	// (0x0005b3a5) main_sp_fs_ctrlbar_pane_g2

0x0001,

0x00d3,	// (0x0004cc94) main_sp_fs_ctrlbar_pane_g

0xe7f0,	// (0x0005b3b1) main_sp_fs_ctrlbar_pane_t1

0x8675,	// (0x00055236) main_sp_fs_ctrlbar_pane

0x8699,	// (0x0005525a) main_sp_fs_listscroll_pane_te_cp01

0x0ab8,	// (0x0004d679) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x0ab8,	// (0x0004d679) popup_sp_fs_action_menu_pane_cp01

0xa3b1,	// (0x00056f72) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa3b1,	// (0x00056f72) bg_sp_fs_highlight_list_pane_cp01

0x86b9,	// (0x0005527a) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x86b9,	// (0x0005527a) sp_fs_action_menu_list_gene_pane_g1

0xe820,	// (0x0005b3e1) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe820,	// (0x0005b3e1) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcd6,	// (0x0005c897) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcd6,	// (0x0005c897) sp_fs_action_menu_list_gene_pane_g

0x86c8,	// (0x00055289) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x86c8,	// (0x00055289) sp_fs_action_menu_list_gene_pane_t1

0x86e0,	// (0x000552a1) sp_fs_action_menu_list_gene_pane_ParamLimits

0x86e0,	// (0x000552a1) sp_fs_action_menu_list_gene_pane

0xe82d,	// (0x0005b3ee) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe82d,	// (0x0005b3ee) popup_sp_fs_action_menu_bg_pane

0x86ff,	// (0x000552c0) sp_fs_action_menu_list_pane_ParamLimits

0x86ff,	// (0x000552c0) sp_fs_action_menu_list_pane

0x871f,	// (0x000552e0) sp_fs_scroll_pane_cp01_ParamLimits

0x871f,	// (0x000552e0) sp_fs_scroll_pane_cp01

0x0ae8,	// (0x0004d6a9) list_medium_line_plain_t2_t1

0x0af8,	// (0x0004d6b9) list_medium_line_plain_t2_t2

0x0001,

0xfcdb,	// (0x0005c89c) list_medium_line_plain_t2_t

0x0b08,	// (0x0004d6c9) list_medium_line_plain_t3_t1

0x0b18,	// (0x0004d6d9) list_medium_line_plain_t3_t2

0x0b26,	// (0x0004d6e7) list_medium_line_plain_t3_t3

0x0002,

0xfce0,	// (0x0005c8a1) list_medium_line_plain_t3_t

0x0368,	// (0x0004cf29) list_medium_line_x2_t2_g2_g1_ParamLimits

0x0368,	// (0x0004cf29) list_medium_line_x2_t2_g2_g1

0x0380,	// (0x0004cf41) list_medium_line_x2_t2_g2_g2_ParamLimits

0x0380,	// (0x0004cf41) list_medium_line_x2_t2_g2_g2

0x0001,

0xf242,	// (0x0005be03) list_medium_line_x2_t2_g2_g_ParamLimits

0xf242,	// (0x0005be03) list_medium_line_x2_t2_g2_g

0x0538,	// (0x0004d0f9) list_medium_line_x2_t2_g2_t1_ParamLimits

0x0538,	// (0x0004d0f9) list_medium_line_x2_t2_g2_t1

0x03b5,	// (0x0004cf76) list_medium_line_x2_t2_g2_t2_ParamLimits

0x03b5,	// (0x0004cf76) list_medium_line_x2_t2_g2_t2

0x0001,

0xfce7,	// (0x0005c8a8) list_medium_line_x2_t2_g2_t_ParamLimits

0xfce7,	// (0x0005c8a8) list_medium_line_x2_t2_g2_t

0x0368,	// (0x0004cf29) list_medium_line_x2_t4_g2_g1_ParamLimits

0x0368,	// (0x0004cf29) list_medium_line_x2_t4_g2_g1

0x0b34,	// (0x0004d6f5) list_medium_line_x2_t4_g2_g2_ParamLimits

0x0b34,	// (0x0004d6f5) list_medium_line_x2_t4_g2_g2

0x0001,

0xfcec,	// (0x0005c8ad) list_medium_line_x2_t4_g2_g_ParamLimits

0xfcec,	// (0x0005c8ad) list_medium_line_x2_t4_g2_g

0x0b46,	// (0x0004d707) list_medium_line_x2_t4_g2_t1_ParamLimits

0x0b46,	// (0x0004d707) list_medium_line_x2_t4_g2_t1

0x0b60,	// (0x0004d721) list_medium_line_x2_t4_g2_t2_ParamLimits

0x0b60,	// (0x0004d721) list_medium_line_x2_t4_g2_t2

0x0b76,	// (0x0004d737) list_medium_line_x2_t4_g2_t3_ParamLimits

0x0b76,	// (0x0004d737) list_medium_line_x2_t4_g2_t3

0x03b5,	// (0x0004cf76) list_medium_line_x2_t4_g2_t4_ParamLimits

0x03b5,	// (0x0004cf76) list_medium_line_x2_t4_g2_t4

0x0003,

0xfcf1,	// (0x0005c8b2) list_medium_line_x2_t4_g2_t_ParamLimits

0xfcf1,	// (0x0005c8b2) list_medium_line_x2_t4_g2_t

0x0b8b,	// (0x0004d74c) list_medium_line_t3_right_iconx2_g1

0x0a8e,	// (0x0004d64f) list_medium_line_t3_right_iconx2_g2

0x0b93,	// (0x0004d754) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfcfa,	// (0x0005c8bb) list_medium_line_t3_right_iconx2_g

0x0b9d,	// (0x0004d75e) list_medium_line_t3_right_iconx2_t1

0x0bad,	// (0x0004d76e) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd01,	// (0x0005c8c2) list_medium_line_t3_right_iconx2_t

0x0368,	// (0x0004cf29) list_medium_line_x3_t4_g4_g1_ParamLimits

0x0368,	// (0x0004cf29) list_medium_line_x3_t4_g4_g1

0x0374,	// (0x0004cf35) list_medium_line_x3_t4_g4_g2_ParamLimits

0x0374,	// (0x0004cf35) list_medium_line_x3_t4_g4_g2

0x041b,	// (0x0004cfdc) list_medium_line_x3_t4_g4_g3_ParamLimits

0x041b,	// (0x0004cfdc) list_medium_line_x3_t4_g4_g3

0x0bbb,	// (0x0004d77c) list_medium_line_x3_t4_g4_g4_ParamLimits

0x0bbb,	// (0x0004d77c) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd06,	// (0x0005c8c7) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd06,	// (0x0005c8c7) list_medium_line_x3_t4_g4_g

0x0bc7,	// (0x0004d788) list_medium_line_x3_t4_g4_t1_ParamLimits

0x0bc7,	// (0x0004d788) list_medium_line_x3_t4_g4_t1

0x0bde,	// (0x0004d79f) list_medium_line_x3_t4_g4_t2_ParamLimits

0x0bde,	// (0x0004d79f) list_medium_line_x3_t4_g4_t2

0x0bf9,	// (0x0004d7ba) list_medium_line_x3_t4_g4_t3_ParamLimits

0x0bf9,	// (0x0004d7ba) list_medium_line_x3_t4_g4_t3

0x0c0e,	// (0x0004d7cf) list_medium_line_x3_t4_g4_t4_ParamLimits

0x0c0e,	// (0x0004d7cf) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd0f,	// (0x0005c8d0) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd0f,	// (0x0005c8d0) list_medium_line_x3_t4_g4_t

0x0c2b,	// (0x0004d7ec) list_single_dyc_row_text_pane_t1_ParamLimits

0x0c2b,	// (0x0004d7ec) list_single_dyc_row_text_pane_t1

0x0c74,	// (0x0004d835) list_single_dyc_row_text_pane_t2_ParamLimits

0x0c74,	// (0x0004d835) list_single_dyc_row_text_pane_t2

0x8745,	// (0x00055306) list_single_dyc_row_text_pane_t3_ParamLimits

0x8745,	// (0x00055306) list_single_dyc_row_text_pane_t3

0x0005,

0xfd18,	// (0x0005c8d9) list_single_dyc_row_text_pane_t_ParamLimits

0xfd18,	// (0x0005c8d9) list_single_dyc_row_text_pane_t

0x8769,	// (0x0005532a) list_single_dyc_row_pane_g1_ParamLimits

0x8769,	// (0x0005532a) list_single_dyc_row_pane_g1

0x8775,	// (0x00055336) list_single_dyc_row_pane_g2_ParamLimits

0x8775,	// (0x00055336) list_single_dyc_row_pane_g2

0x8781,	// (0x00055342) list_single_dyc_row_pane_g3_ParamLimits

0x8781,	// (0x00055342) list_single_dyc_row_pane_g3

0x878d,	// (0x0005534e) list_single_dyc_row_pane_g4_ParamLimits

0x878d,	// (0x0005534e) list_single_dyc_row_pane_g4

0x0003,

0xfd25,	// (0x0005c8e6) list_single_dyc_row_pane_g_ParamLimits

0xfd25,	// (0x0005c8e6) list_single_dyc_row_pane_g

0x8799,	// (0x0005535a) list_single_dyc_row_text_pane_ParamLimits

0x8799,	// (0x0005535a) list_single_dyc_row_text_pane

0x9847,	// (0x00056408) bg_sp_fs_scroll_pane

0xe83b,	// (0x0005b3fc) thumb_sp_fs_scroll_pane

0x0728,	// (0x0004d2e9) list_medium_line_g1_ParamLimits

0x0728,	// (0x0004d2e9) list_medium_line_g1

0x0da9,	// (0x0004d96a) list_medium_line_t1_ParamLimits

0x0da9,	// (0x0004d96a) list_medium_line_t1

0x0368,	// (0x0004cf29) list_medium_line_x2_g1_ParamLimits

0x0368,	// (0x0004cf29) list_medium_line_x2_g1

0x0374,	// (0x0004cf35) list_medium_line_x2_g2_ParamLimits

0x0374,	// (0x0004cf35) list_medium_line_x2_g2

0x0001,

0xfd2e,	// (0x0005c8ef) list_medium_line_x2_g_ParamLimits

0xfd2e,	// (0x0005c8ef) list_medium_line_x2_g

0x87b8,	// (0x00055379) list_medium_line_x2_t1_ParamLimits

0x87b8,	// (0x00055379) list_medium_line_x2_t1

0x0368,	// (0x0004cf29) list_medium_line_x3_g1_ParamLimits

0x0368,	// (0x0004cf29) list_medium_line_x3_g1

0x0374,	// (0x0004cf35) list_medium_line_x3_g2_ParamLimits

0x0374,	// (0x0004cf35) list_medium_line_x3_g2

0x0001,

0xfd2e,	// (0x0005c8ef) list_medium_line_x3_g_ParamLimits

0xfd2e,	// (0x0005c8ef) list_medium_line_x3_g

0x87b8,	// (0x00055379) list_medium_line_x3_t1_ParamLimits

0x87b8,	// (0x00055379) list_medium_line_x3_t1

0xe844,	// (0x0005b405) thumb_sp_fs_scroll_pane_g1

0xe84d,	// (0x0005b40e) thumb_sp_fs_scroll_pane_g2

0xe856,	// (0x0005b417) thumb_sp_fs_scroll_pane_g3

0x0002,

0x013a,	// (0x0004ccfb) thumb_sp_fs_scroll_pane_g

0xe844,	// (0x0005b405) bg_sp_fs_scroll_pane_g1

0xe84d,	// (0x0005b40e) bg_sp_fs_scroll_pane_g2

0xe856,	// (0x0005b417) bg_sp_fs_scroll_pane_g3

0x0002,

0x013a,	// (0x0004ccfb) bg_sp_fs_scroll_pane_g

0x0368,	// (0x0004cf29) list_medium_line_x2_t3_g4_g1_ParamLimits

0x0368,	// (0x0004cf29) list_medium_line_x2_t3_g4_g1

0x040f,	// (0x0004cfd0) list_medium_line_x2_t3_g4_g2_ParamLimits

0x040f,	// (0x0004cfd0) list_medium_line_x2_t3_g4_g2

0x0374,	// (0x0004cf35) list_medium_line_x2_t3_g4_g3_ParamLimits

0x0374,	// (0x0004cf35) list_medium_line_x2_t3_g4_g3

0x0380,	// (0x0004cf41) list_medium_line_x2_t3_g4_g4_ParamLimits

0x0380,	// (0x0004cf41) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2be,	// (0x0005be7f) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2be,	// (0x0005be7f) list_medium_line_x2_t3_g4_g

0x0dbe,	// (0x0004d97f) list_medium_line_x2_t3_g4_t1_ParamLimits

0x0dbe,	// (0x0004d97f) list_medium_line_x2_t3_g4_t1

0x0dd8,	// (0x0004d999) list_medium_line_x2_t3_g4_t2_ParamLimits

0x0dd8,	// (0x0004d999) list_medium_line_x2_t3_g4_t2

0x03b5,	// (0x0004cf76) list_medium_line_x2_t3_g4_t3_ParamLimits

0x03b5,	// (0x0004cf76) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd33,	// (0x0005c8f4) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd33,	// (0x0005c8f4) list_medium_line_x2_t3_g4_t

0x0728,	// (0x0004d2e9) list_medium_line_g2_g1_ParamLimits

0x0728,	// (0x0004d2e9) list_medium_line_g2_g1

0x0734,	// (0x0004d2f5) list_medium_line_g2_g2_ParamLimits

0x0734,	// (0x0004d2f5) list_medium_line_g2_g2

0x0001,

0xfa13,	// (0x0005c5d4) list_medium_line_g2_g_ParamLimits

0xfa13,	// (0x0005c5d4) list_medium_line_g2_g

0x0df2,	// (0x0004d9b3) list_medium_line_g2_t1_ParamLimits

0x0df2,	// (0x0004d9b3) list_medium_line_g2_t1

0x0728,	// (0x0004d2e9) list_medium_line_t3_g2_g1_ParamLimits

0x0728,	// (0x0004d2e9) list_medium_line_t3_g2_g1

0x0734,	// (0x0004d2f5) list_medium_line_t3_g2_g2_ParamLimits

0x0734,	// (0x0004d2f5) list_medium_line_t3_g2_g2

0x0001,

0xfa13,	// (0x0005c5d4) list_medium_line_t3_g2_g_ParamLimits

0xfa13,	// (0x0005c5d4) list_medium_line_t3_g2_g

0x0e07,	// (0x0004d9c8) list_medium_line_t3_g2_t1_ParamLimits

0x0e07,	// (0x0004d9c8) list_medium_line_t3_g2_t1

0x0e21,	// (0x0004d9e2) list_medium_line_t3_g2_t2_ParamLimits

0x0e21,	// (0x0004d9e2) list_medium_line_t3_g2_t2

0x0e37,	// (0x0004d9f8) list_medium_line_t3_g2_t3_ParamLimits

0x0e37,	// (0x0004d9f8) list_medium_line_t3_g2_t3

0x0002,

0xfd3a,	// (0x0005c8fb) list_medium_line_t3_g2_t_ParamLimits

0xfd3a,	// (0x0005c8fb) list_medium_line_t3_g2_t

0x0a8e,	// (0x0004d64f) list_medium_line_right_icon_g1

0x0e51,	// (0x0004da12) list_medium_line_right_icon_t1

0x0728,	// (0x0004d2e9) list_medium_line_t2_g1_ParamLimits

0x0728,	// (0x0004d2e9) list_medium_line_t2_g1

0x0e5f,	// (0x0004da20) list_medium_line_t2_t1_ParamLimits

0x0e5f,	// (0x0004da20) list_medium_line_t2_t1

0x0e79,	// (0x0004da3a) list_medium_line_t2_t2_ParamLimits

0x0e79,	// (0x0004da3a) list_medium_line_t2_t2

0x0001,

0xfd41,	// (0x0005c902) list_medium_line_t2_t_ParamLimits

0xfd41,	// (0x0005c902) list_medium_line_t2_t

0x0728,	// (0x0004d2e9) list_medium_line_t3_g1_ParamLimits

0x0728,	// (0x0004d2e9) list_medium_line_t3_g1

0x0e92,	// (0x0004da53) list_medium_line_t3_t1_ParamLimits

0x0e92,	// (0x0004da53) list_medium_line_t3_t1

0x0eac,	// (0x0004da6d) list_medium_line_t3_t2_ParamLimits

0x0eac,	// (0x0004da6d) list_medium_line_t3_t2

0x0ec2,	// (0x0004da83) list_medium_line_t3_t3_ParamLimits

0x0ec2,	// (0x0004da83) list_medium_line_t3_t3

0x0002,

0xfd46,	// (0x0005c907) list_medium_line_t3_t_ParamLimits

0xfd46,	// (0x0005c907) list_medium_line_t3_t

0x0728,	// (0x0004d2e9) list_medium_line_g3_g1_ParamLimits

0x0728,	// (0x0004d2e9) list_medium_line_g3_g1

0x0ed7,	// (0x0004da98) list_medium_line_g3_g2_ParamLimits

0x0ed7,	// (0x0004da98) list_medium_line_g3_g2

0x0734,	// (0x0004d2f5) list_medium_line_g3_g3_ParamLimits

0x0734,	// (0x0004d2f5) list_medium_line_g3_g3

0x0002,

0xfd4d,	// (0x0005c90e) list_medium_line_g3_g_ParamLimits

0xfd4d,	// (0x0005c90e) list_medium_line_g3_g

0x0ee3,	// (0x0004daa4) list_medium_line_g3_t1_ParamLimits

0x0ee3,	// (0x0004daa4) list_medium_line_g3_t1

0x0728,	// (0x0004d2e9) list_medium_line_t2_g3_g1_ParamLimits

0x0728,	// (0x0004d2e9) list_medium_line_t2_g3_g1

0x0ed7,	// (0x0004da98) list_medium_line_t2_g3_g2_ParamLimits

0x0ed7,	// (0x0004da98) list_medium_line_t2_g3_g2

0x0734,	// (0x0004d2f5) list_medium_line_t2_g3_g3_ParamLimits

0x0734,	// (0x0004d2f5) list_medium_line_t2_g3_g3

0x0002,

0xfd4d,	// (0x0005c90e) list_medium_line_t2_g3_g_ParamLimits

0xfd4d,	// (0x0005c90e) list_medium_line_t2_g3_g

0x0ef8,	// (0x0004dab9) list_medium_line_t2_g3_t1_ParamLimits

0x0ef8,	// (0x0004dab9) list_medium_line_t2_g3_t1

0x0f12,	// (0x0004dad3) list_medium_line_t2_g3_t2_ParamLimits

0x0f12,	// (0x0004dad3) list_medium_line_t2_g3_t2

0x0001,

0xfd54,	// (0x0005c915) list_medium_line_t2_g3_t_ParamLimits

0xfd54,	// (0x0005c915) list_medium_line_t2_g3_t

0x0728,	// (0x0004d2e9) list_medium_line_t3_g3_g1_ParamLimits

0x0728,	// (0x0004d2e9) list_medium_line_t3_g3_g1

0x0ed7,	// (0x0004da98) list_medium_line_t3_g3_g2_ParamLimits

0x0ed7,	// (0x0004da98) list_medium_line_t3_g3_g2

0x0734,	// (0x0004d2f5) list_medium_line_t3_g3_g3_ParamLimits

0x0734,	// (0x0004d2f5) list_medium_line_t3_g3_g3

0x0002,

0xfd4d,	// (0x0005c90e) list_medium_line_t3_g3_g_ParamLimits

0xfd4d,	// (0x0005c90e) list_medium_line_t3_g3_g

0x0f30,	// (0x0004daf1) list_medium_line_t3_g3_t1_ParamLimits

0x0f30,	// (0x0004daf1) list_medium_line_t3_g3_t1

0x0f49,	// (0x0004db0a) list_medium_line_t3_g3_t2_ParamLimits

0x0f49,	// (0x0004db0a) list_medium_line_t3_g3_t2

0x0f5f,	// (0x0004db20) list_medium_line_t3_g3_t3_ParamLimits

0x0f5f,	// (0x0004db20) list_medium_line_t3_g3_t3

0x0002,

0xfd59,	// (0x0005c91a) list_medium_line_t3_g3_t_ParamLimits

0xfd59,	// (0x0005c91a) list_medium_line_t3_g3_t

0x0b8b,	// (0x0004d74c) list_medium_line_right_iconx2_g1

0x0a8e,	// (0x0004d64f) list_medium_line_right_iconx2_g2

0x0001,

0xfd60,	// (0x0005c921) list_medium_line_right_iconx2_g

0x0f79,	// (0x0004db3a) list_medium_line_right_iconx2_t1

0x0b8b,	// (0x0004d74c) list_medium_line_t2_right_iconx2_g1

0x0a8e,	// (0x0004d64f) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd60,	// (0x0005c921) list_medium_line_t2_right_iconx2_g

0x0f87,	// (0x0004db48) list_medium_line_t2_right_iconx2_t1

0x0f97,	// (0x0004db58) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd65,	// (0x0005c926) list_medium_line_t2_right_iconx2_t

0x0fa9,	// (0x0004db6a) list_medium_line_x4_t4_t1

0x0fb7,	// (0x0004db78) list_medium_line_x4_t4_t2

0x0fc7,	// (0x0004db88) list_medium_line_x4_t4_t3

0x0fd7,	// (0x0004db98) list_medium_line_x4_t4_t4

0x0003,

0xfd6a,	// (0x0005c92b) list_medium_line_x4_t4_t

0x8811,	// (0x000553d2) tport_appsw_pane_ParamLimits

0x8811,	// (0x000553d2) tport_appsw_pane

0x8829,	// (0x000553ea) tport_contact_pane_ParamLimits

0x8829,	// (0x000553ea) tport_contact_pane

0x8841,	// (0x00055402) tport_listscroll_pane_ParamLimits

0x8841,	// (0x00055402) tport_listscroll_pane

0x885b,	// (0x0005541c) cell_tport_appsw_pane_ParamLimits

0x885b,	// (0x0005541c) cell_tport_appsw_pane

0xd6f5,	// (0x0005a2b6) tport_appsw_pane_g1_ParamLimits

0xd6f5,	// (0x0005a2b6) tport_appsw_pane_g1

0xe85f,	// (0x0005b420) tport_contact_pane_g1

0xe868,	// (0x0005b429) tport_contact_pane_t1

0xe876,	// (0x0005b437) tport_contact_pane_t2

0x0001,

0x0181,	// (0x0004cd42) tport_contact_pane_t

0xe88d,	// (0x0005b44e) list_tport_pane

0xe896,	// (0x0005b457) scroll_pane_cp_030

0x88a3,	// (0x00055464) cell_tport_appsw_pane_g1

0x88b3,	// (0x00055474) cell_tport_appsw_pane_t1

0x88c1,	// (0x00055482) grid_highlight_pane_cp019

0x88c9,	// (0x0005548a) list_tport_double_graphic_pane_ParamLimits

0x88c9,	// (0x0005548a) list_tport_double_graphic_pane

0xa3b1,	// (0x00056f72) list_highlight_pane_cp023_ParamLimits

0xa3b1,	// (0x00056f72) list_highlight_pane_cp023

0x88d6,	// (0x00055497) list_tport_double_graphic_pane_g1_ParamLimits

0x88d6,	// (0x00055497) list_tport_double_graphic_pane_g1

0x88e3,	// (0x000554a4) list_tport_double_graphic_pane_t1_ParamLimits

0x88e3,	// (0x000554a4) list_tport_double_graphic_pane_t1

0x88f8,	// (0x000554b9) list_tport_double_graphic_pane_t2_ParamLimits

0x88f8,	// (0x000554b9) list_tport_double_graphic_pane_t2

0x0001,

0xfd7a,	// (0x0005c93b) list_tport_double_graphic_pane_t_ParamLimits

0xfd7a,	// (0x0005c93b) list_tport_double_graphic_pane_t

0x9847,	// (0x00056408) main_cale_note_pane

0x69c4,	// (0x00053585) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x69c4,	// (0x00053585) cell_vitu2_function_top_wide_pane_cp01

0x81f9,	// (0x00054dba) wait_bar_pane_cp05_ParamLimits

0xa3b1,	// (0x00056f72) listscroll_cmail_pane

0xe89f,	// (0x0005b460) list_cmail_pane

0x890a,	// (0x000554cb) list_cmail_body_pane

0x891f,	// (0x000554e0) list_single_cmail_header_caption_pane

0x8936,	// (0x000554f7) list_single_cmail_header_detail_pane_ParamLimits

0x8936,	// (0x000554f7) list_single_cmail_header_detail_pane

0xe8af,	// (0x0005b470) list_single_cmail_header_caption_pane_t1

0x0fe7,	// (0x0004dba8) list_single_cmail_header_detail_pane_g1_ParamLimits

0x0fe7,	// (0x0004dba8) list_single_cmail_header_detail_pane_g1

0x8960,	// (0x00055521) list_single_cmail_header_detail_pane_g2_ParamLimits

0x8960,	// (0x00055521) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd7f,	// (0x0005c940) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd7f,	// (0x0005c940) list_single_cmail_header_detail_pane_g

0x896c,	// (0x0005552d) list_single_cmail_header_detail_pane_t1_ParamLimits

0x896c,	// (0x0005552d) list_single_cmail_header_detail_pane_t1

0x89cc,	// (0x0005558d) list_single_cmail_header_editor_pane_bg_ParamLimits

0x89cc,	// (0x0005558d) list_single_cmail_header_editor_pane_bg

0xe34b,	// (0x0005af0c) list_cmail_body_pane_g1

0xe8d3,	// (0x0005b494) list_cmail_body_pane_t1

0xd715,	// (0x0005a2d6) list_single_cmail_header_editor_pane_bg_g1

0xad27,	// (0x000578e8) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd725,	// (0x0005a2e6) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd71d,	// (0x0005a2de) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd951,	// (0x0005a512) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd745,	// (0x0005a306) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd735,	// (0x0005a2f6) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd73d,	// (0x0005a2fe) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xad07,	// (0x000578c8) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x89e3,	// (0x000555a4) calenote_gesture_pane_ParamLimits

0x89e3,	// (0x000555a4) calenote_gesture_pane

0x8a03,	// (0x000555c4) calenote_window_pane_ParamLimits

0x8a03,	// (0x000555c4) calenote_window_pane

0xe8e1,	// (0x0005b4a2) popup_note_window_cp01

0x8a1f,	// (0x000555e0) calenote_swipe_1_pane_ParamLimits

0x8a1f,	// (0x000555e0) calenote_swipe_1_pane

0x85bd,	// (0x0005517e) calenote_swipe_2_pane_ParamLimits

0x85bd,	// (0x0005517e) calenote_swipe_2_pane

0xe6b8,	// (0x0005b279) calenote_swipe_1_pane_g1_ParamLimits

0xe6b8,	// (0x0005b279) calenote_swipe_1_pane_g1

0xe6c5,	// (0x0005b286) calenote_swipe_1_pane_g2_ParamLimits

0xe6c5,	// (0x0005b286) calenote_swipe_1_pane_g2

0x0001,

0x00b6,	// (0x0004cc77) calenote_swipe_1_pane_g_ParamLimits

0x00b6,	// (0x0004cc77) calenote_swipe_1_pane_g

0xe8f3,	// (0x0005b4b4) calenote_swipe_1_pane_t1_ParamLimits

0xe8f3,	// (0x0005b4b4) calenote_swipe_1_pane_t1

0xe6b8,	// (0x0005b279) calenote_swipe_2_pane_g1_ParamLimits

0xe6b8,	// (0x0005b279) calenote_swipe_2_pane_g1

0xe912,	// (0x0005b4d3) calenote_swipe_2_pane_g2_ParamLimits

0xe912,	// (0x0005b4d3) calenote_swipe_2_pane_g2

0x0001,

0xfd8b,	// (0x0005c94c) calenote_swipe_2_pane_g_ParamLimits

0xfd8b,	// (0x0005c94c) calenote_swipe_2_pane_g

0xe91e,	// (0x0005b4df) calenote_swipe_2_pane_t1_ParamLimits

0xe91e,	// (0x0005b4df) calenote_swipe_2_pane_t1

0x9847,	// (0x00056408) main_mup_navstr_pane

0x5601,	// (0x000521c2) main_mup3_pane_t7_ParamLimits

0x5601,	// (0x000521c2) main_mup3_pane_t7

0x9e3e,	// (0x000569ff) main_mp4_pane_g6_ParamLimits

0x9e3e,	// (0x000569ff) main_mp4_pane_g6

0xa000,	// (0x00056bc1) main_image3_pane_t4_ParamLimits

0xa000,	// (0x00056bc1) main_image3_pane_t4

0x8a34,	// (0x000555f5) popup_navstr_preview_pane_ParamLimits

0x8a34,	// (0x000555f5) popup_navstr_preview_pane

0x8a48,	// (0x00055609) scroll_navstr_pane_ParamLimits

0x8a48,	// (0x00055609) scroll_navstr_pane

0x9847,	// (0x00056408) bg_popup_preview_window_pane_cp04

0xe945,	// (0x0005b506) popup_navstr_preview_pane_t1

0x8a5c,	// (0x0005561d) scroll_navstr_pane_g1_ParamLimits

0x8a5c,	// (0x0005561d) scroll_navstr_pane_g1

0x8a70,	// (0x00055631) scroll_navstr_pane_t1_ParamLimits

0x8a70,	// (0x00055631) scroll_navstr_pane_t1

0xe8ea,	// (0x0005b4ab) bg_button_pane_cp014

0xe8ea,	// (0x0005b4ab) bg_button_pane_cp030

0x0a34,	// (0x0004d5f5) list_double_fisheye_pane_g4_ParamLimits

0x0a34,	// (0x0004d5f5) list_double_fisheye_pane_g4

0x0a40,	// (0x0004d601) list_double_fisheye_pane_g5_ParamLimits

0x0a40,	// (0x0004d601) list_double_fisheye_pane_g5

0xd1d5,	// (0x00059d96) sp_fs_scroll_pane_cp03

0xe7d8,	// (0x0005b399) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe7e4,	// (0x0005b3a5) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0x00d3,	// (0x0004cc94) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe7f0,	// (0x0005b3b1) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe8a7,	// (0x0005b468) sp_fs_scroll_pane_cp02

0xaa0d,	// (0x000575ce) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xaa0d,	// (0x000575ce) popup_sp_fs_calendar_preview_list_single_pane

0x9847,	// (0x00056408) main_cam6_pano_pane

0xa3b1,	// (0x00056f72) main_mup3_pane_ParamLimits

0x9847,	// (0x00056408) main_phacti_pane

0x80cc,	// (0x00054c8d) bg_button_pane_cp11

0x80e6,	// (0x00054ca7) main_mobtv_info_pane_g2_ParamLimits

0x80e6,	// (0x00054ca7) main_mobtv_info_pane_g2

0x0001,

0xfc53,	// (0x0005c814) main_mobtv_info_pane_g_ParamLimits

0xfc53,	// (0x0005c814) main_mobtv_info_pane_g

0x82c3,	// (0x00054e84) sc_clock_pane_t5_ParamLimits

0x82c3,	// (0x00054e84) sc_clock_pane_t5

0x838b,	// (0x00054f4c) main_radioblah_pane_g1_ParamLimits

0xe5e9,	// (0x0005b1aa) main_radioblah_pane_t3_ParamLimits

0xe5e9,	// (0x0005b1aa) main_radioblah_pane_t3

0xe601,	// (0x0005b1c2) main_radioblah_pane_t4_ParamLimits

0xe601,	// (0x0005b1c2) main_radioblah_pane_t4

0x83b3,	// (0x00054f74) main_radioblah_text_pane_ParamLimits

0x83b3,	// (0x00054f74) main_radioblah_text_pane

0x83c5,	// (0x00054f86) main_radioblah_info_pane_g1_ParamLimits

0x845e,	// (0x0005501f) main_radioblah_info_pane_t4_ParamLimits

0x845e,	// (0x0005501f) main_radioblah_info_pane_t4

0xa3b1,	// (0x00056f72) main_sp_fs_calendar_pane

0x8a87,	// (0x00055648) main_phacti_pane_g1

0x8a8f,	// (0x00055650) phacti_note_pane_ParamLimits

0x8a8f,	// (0x00055650) phacti_note_pane

0xe95c,	// (0x0005b51d) phacti_term_pane_ParamLimits

0xe95c,	// (0x0005b51d) phacti_term_pane

0xe971,	// (0x0005b532) phacti_note_pane_t1_ParamLimits

0xe971,	// (0x0005b532) phacti_note_pane_t1

0x8aa3,	// (0x00055664) phacti_term_pane_g1

0x8aab,	// (0x0005566c) phacti_term_pane_t1_ParamLimits

0x8aab,	// (0x0005566c) phacti_term_pane_t1

0xe988,	// (0x0005b549) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe990,	// (0x0005b551) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0x01a8,	// (0x0004cd69) popup_sp_fs_calendar_preview_list_single_pane_g

0xe998,	// (0x0005b559) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe998,	// (0x0005b559) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe9ae,	// (0x0005b56f) aid_popup_sp_fs_bg_corner_pane

0xcd6a,	// (0x0005992b) popup_sp_fs_calendar_preview_bg_pane_g1

0x9847,	// (0x00056408) popup_sp_fs_calendar_preview_bg_pane

0x2093,	// (0x0004ec54) popup_sp_fs_calendar_preview_list_pane

0xc962,	// (0x00059523) bg_main_sp_fs_cale_pane_ParamLimits

0xc962,	// (0x00059523) bg_main_sp_fs_cale_pane

0x8b3f,	// (0x00055700) listscroll_cale_mrui_pane_ParamLimits

0x8b3f,	// (0x00055700) listscroll_cale_mrui_pane

0x8b54,	// (0x00055715) listscroll_sp_fs_schedule_track_pane

0x8b5d,	// (0x0005571e) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x8b5d,	// (0x0005571e) main_sp_fs_ctrlbar_pane_cp01

0xe9b6,	// (0x0005b577) main_sp_fs_ribbon_pane

0x8b70,	// (0x00055731) popup_sp_fs_cale_preview_window

0x8b82,	// (0x00055743) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8b82,	// (0x00055743) list_single_sp_fs_schedule_track_pane

0xa3b1,	// (0x00056f72) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xa3b1,	// (0x00056f72) bg_sp_fs_highlight_list_pane_cp03

0x8b96,	// (0x00055757) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8b96,	// (0x00055757) list_single_sp_fs_schedule_track_pane_g1

0x8ba2,	// (0x00055763) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8ba2,	// (0x00055763) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfd95,	// (0x0005c956) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfd95,	// (0x0005c956) list_single_sp_fs_schedule_track_pane_g

0x8bae,	// (0x0005576f) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8bae,	// (0x0005576f) list_single_sp_fs_schedule_track_pane_t1

0x8bc8,	// (0x00055789) sp_fs_schedule_track_pane_ParamLimits

0x8bc8,	// (0x00055789) sp_fs_schedule_track_pane

0xe9be,	// (0x0005b57f) sp_fs_schedule_track_pane_g1

0xe9c6,	// (0x0005b587) sp_fs_schedule_track_pane_g2

0xe9ce,	// (0x0005b58f) sp_fs_schedule_track_pane_g3

0xe9d6,	// (0x0005b597) sp_fs_schedule_track_pane_g4

0xe9de,	// (0x0005b59f) sp_fs_schedule_track_pane_g5

0x0004,

0x01b2,	// (0x0004cd73) sp_fs_schedule_track_pane_g

0xd715,	// (0x0005a2d6) bg_sp_fs_schedule_viewer_highlight_g1

0xad27,	// (0x000578e8) bg_sp_fs_schedule_viewer_highlight_g2

0xd71d,	// (0x0005a2de) bg_sp_fs_schedule_viewer_highlight_g3

0xd725,	// (0x0005a2e6) bg_sp_fs_schedule_viewer_highlight_g4

0xd951,	// (0x0005a512) bg_sp_fs_schedule_viewer_highlight_g5

0xd735,	// (0x0005a2f6) bg_sp_fs_schedule_viewer_highlight_g6

0xd73d,	// (0x0005a2fe) bg_sp_fs_schedule_viewer_highlight_g7

0xd745,	// (0x0005a306) bg_sp_fs_schedule_viewer_highlight_g8

0xad07,	// (0x000578c8) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfd9a,	// (0x0005c95b) bg_sp_fs_schedule_viewer_highlight_g

0x9847,	// (0x00056408) bg_main_sp_fs_ribbon_pane

0x8bd9,	// (0x0005579a) main_sp_fs_ribbon_pane_g1

0xe9e6,	// (0x0005b5a7) main_sp_fs_ribbon_pane_t1

0x8be2,	// (0x000557a3) main_sp_fs_ribbon_pane_t2

0xe9f5,	// (0x0005b5b6) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdad,	// (0x0005c96e) main_sp_fs_ribbon_pane_t

0xea04,	// (0x0005b5c5) main_sp_fs_ribbon_scheduler_pane

0xea0c,	// (0x0005b5cd) bg_main_sp_fs_ribbon_pane_g1

0xea15,	// (0x0005b5d6) bg_main_sp_fs_ribbon_pane_g2

0xea1e,	// (0x0005b5df) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0x01d7,	// (0x0004cd98) bg_main_sp_fs_ribbon_pane_g

0xea26,	// (0x0005b5e7) main_sp_fs_ribbon_scheduler_pane_g1

0xea2f,	// (0x0005b5f0) main_sp_fs_ribbon_scheduler_pane_g2

0xea38,	// (0x0005b5f9) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0x01de,	// (0x0004cd9f) main_sp_fs_ribbon_scheduler_pane_g

0xea41,	// (0x0005b602) list_cale_mrui_pane

0x8bf1,	// (0x000557b2) sp_fs_scroll_pane_cp07_ParamLimits

0x8bf1,	// (0x000557b2) sp_fs_scroll_pane_cp07

0x8c0d,	// (0x000557ce) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8c0d,	// (0x000557ce) bg_sp_fs_schedule_viewer_highlight

0xea4e,	// (0x0005b60f) list_single_sp_fs_schedule_track_pane_cp01

0xea56,	// (0x0005b617) list_sp_fs_schedule_track_pane

0xea5e,	// (0x0005b61f) sp_fs_scroll_pane_cp06_ParamLimits

0xea5e,	// (0x0005b61f) sp_fs_scroll_pane_cp06

0xcd6a,	// (0x0005992b) bgmain_sp_fs_calendar_pane_g1

0x0fff,	// (0x0004dbc0) list_single_cale_mrui_pane_ParamLimits

0x0fff,	// (0x0004dbc0) list_single_cale_mrui_pane

0xa226,	// (0x00056de7) list_single_cale_mrui_row_pane_ParamLimits

0xa226,	// (0x00056de7) list_single_cale_mrui_row_pane

0xa233,	// (0x00056df4) list_single_cale_mrui_row_pane_g1_ParamLimits

0xa233,	// (0x00056df4) list_single_cale_mrui_row_pane_g1

0xa26b,	// (0x00056e2c) list_single_cale_mrui_row_pane_t1_ParamLimits

0xa26b,	// (0x00056e2c) list_single_cale_mrui_row_pane_t1

0x1021,	// (0x0004dbe2) list_single_cale_mrui_row_pane_t2_ParamLimits

0x1021,	// (0x0004dbe2) list_single_cale_mrui_row_pane_t2

0xa27d,	// (0x00056e3e) list_single_cale_mrui_row_pane_t3_ParamLimits

0xa27d,	// (0x00056e3e) list_single_cale_mrui_row_pane_t3

0xa2ac,	// (0x00056e6d) list_single_cale_mrui_row_pane_t4_ParamLimits

0xa2ac,	// (0x00056e6d) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdbb,	// (0x0005c97c) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdbb,	// (0x0005c97c) list_single_cale_mrui_row_pane_t

0x1089,	// (0x0004dc4a) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x1089,	// (0x0004dc4a) list_single_cmail_header_editor_pane_bg_cp01

0x10af,	// (0x0004dc70) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x10af,	// (0x0004dc70) list_single_cmail_header_editor_pane_bg_cp02

0x8c1d,	// (0x000557de) main_radioblah_text_pane_t1_ParamLimits

0x8c1d,	// (0x000557de) main_radioblah_text_pane_t1

0xea7d,	// (0x0005b63e) cam6_indi_pane_cp01

0xea85,	// (0x0005b646) cam6_mode_pane_cp01

0xea8d,	// (0x0005b64e) cam6_pano_pane

0xea96,	// (0x0005b657) cam6_zoom_pane_cp01

0xea9e,	// (0x0005b65f) cam6_pano_image_pane

0xeaa9,	// (0x0005b66a) cam6_pano_pane_g1

0xe34b,	// (0x0005af0c) cam6_pano_pane_g2

0xeab2,	// (0x0005b673) cam6_pano_pane_g3

0xeabb,	// (0x0005b67c) cam6_pano_pane_g4

0xd321,	// (0x00059ee2) cam6_pano_pane_g5

0xeac4,	// (0x0005b685) cam6_pano_pane_g6

0xeace,	// (0x0005b68f) cam6_pano_pane_g7

0xead6,	// (0x0005b697) cam6_pano_pane_g8

0xeadf,	// (0x0005b6a0) cam6_pano_pane_g9

0x0008,

0xfdc4,	// (0x0005c985) cam6_pano_pane_g

0x9847,	// (0x00056408) main_browser_tag_pane

0xe93d,	// (0x0005b4fe) grid_navstr_albumart_pane

0xeaea,	// (0x0005b6ab) cell_navstr_albumart_pane_ParamLimits

0xeaea,	// (0x0005b6ab) cell_navstr_albumart_pane

0xeb0a,	// (0x0005b6cb) cell_navstr_albumart_pane_g1

0xc733,	// (0x000592f4) cell_navstr_albumart_pane_g2

0xc743,	// (0x00059304) cell_navstr_albumart_pane_g3

0xc73b,	// (0x000592fc) cell_navstr_albumart_pane_g4

0x0003,

0x0208,	// (0x0004cdc9) cell_navstr_albumart_pane_g

0x8c38,	// (0x000557f9) bt_list_pane_ParamLimits

0x8c38,	// (0x000557f9) bt_list_pane

0x8c4c,	// (0x0005580d) bt_list_pane_t1

0x8c5b,	// (0x0005581c) bt_list_pane_t2

0x0001,

0xfdd7,	// (0x0005c998) bt_list_pane_t

0x9847,	// (0x00056408) main_cale_prevew_pane

0x8c6a,	// (0x0005582b) popup_cale_preview_window_ParamLimits

0x8c6a,	// (0x0005582b) popup_cale_preview_window

0xa3b1,	// (0x00056f72) bg_popup_preview_window_pane_cp05_ParamLimits

0xa3b1,	// (0x00056f72) bg_popup_preview_window_pane_cp05

0xeb12,	// (0x0005b6d3) list_cale_preview_pane_ParamLimits

0xeb12,	// (0x0005b6d3) list_cale_preview_pane

0x8c83,	// (0x00055844) list_double_cale_preview_pane_ParamLimits

0x8c83,	// (0x00055844) list_double_cale_preview_pane

0xd74d,	// (0x0005a30e) list_single_cale_preview_pane_ParamLimits

0xd74d,	// (0x0005a30e) list_single_cale_preview_pane

0x8c95,	// (0x00055856) list_single_cale_preview_pane_g1

0x8c9d,	// (0x0005585e) list_single_cale_preview_pane_t1_ParamLimits

0x8c9d,	// (0x0005585e) list_single_cale_preview_pane_t1

0x8cb2,	// (0x00055873) list_double_cale_preview_pane_g1

0x8cba,	// (0x0005587b) list_double_cale_preview_pane_t1_ParamLimits

0x8cba,	// (0x0005587b) list_double_cale_preview_pane_t1

0x8ccf,	// (0x00055890) list_double_cale_preview_pane_t2_ParamLimits

0x8ccf,	// (0x00055890) list_double_cale_preview_pane_t2

0x0001,

0xfddc,	// (0x0005c99d) list_double_cale_preview_pane_t_ParamLimits

0xfddc,	// (0x0005c99d) list_double_cale_preview_pane_t

0x9847,	// (0x00056408) main_ezdial_pane

0xa3b1,	// (0x00056f72) main_sp_fs_email_pane_ParamLimits

0x8619,	// (0x000551da) cmail_ddmenu_btn01_pane_ParamLimits

0x8619,	// (0x000551da) cmail_ddmenu_btn01_pane

0x862c,	// (0x000551ed) cmail_ddmenu_btn02_pane_ParamLimits

0x862c,	// (0x000551ed) cmail_ddmenu_btn02_pane

0x864f,	// (0x00055210) cmail_ddmenu_btn03_pane_ParamLimits

0x864f,	// (0x00055210) cmail_ddmenu_btn03_pane

0x8675,	// (0x00055236) main_sp_fs_ctrlbar_pane_ParamLimits

0x8699,	// (0x0005525a) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x890a,	// (0x000554cb) list_cmail_body_pane_ParamLimits

0xe8bd,	// (0x0005b47e) bg_button_pane_cp12

0xe8c6,	// (0x0005b487) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe8c6,	// (0x0005b487) list_single_cmail_header_detail_pane_g3

0x89a8,	// (0x00055569) list_single_cmail_header_detail_pane_t2_ParamLimits

0x89a8,	// (0x00055569) list_single_cmail_header_detail_pane_t2

0x0001,

0xfd86,	// (0x0005c947) list_single_cmail_header_detail_pane_t_ParamLimits

0xfd86,	// (0x0005c947) list_single_cmail_header_detail_pane_t

0x8ac0,	// (0x00055681) phacti_term_pane_t2_ParamLimits

0x8ac0,	// (0x00055681) phacti_term_pane_t2

0x0001,

0xfd90,	// (0x0005c951) phacti_term_pane_t_ParamLimits

0xfd90,	// (0x0005c951) phacti_term_pane_t

0xeb1e,	// (0x0005b6df) aid_size_list_single_double

0x8ce7,	// (0x000558a8) popup_ezdial_listscroll_window

0x8d03,	// (0x000558c4) popup_number_entry_window_cp01

0xaace,	// (0x0005768f) bg_popup_call_pane_cp09

0xeb2a,	// (0x0005b6eb) ezdial_list_pane

0xeb32,	// (0x0005b6f3) scroll_pane_cp23

0xc962,	// (0x00059523) bg_button_pane_cp028_ParamLimits

0xc962,	// (0x00059523) bg_button_pane_cp028

0x8d11,	// (0x000558d2) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8d11,	// (0x000558d2) cmail_ddmenu_btn01_pane_g1

0x8d1d,	// (0x000558de) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8d1d,	// (0x000558de) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfde1,	// (0x0005c9a2) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfde1,	// (0x0005c9a2) cmail_ddmenu_btn01_pane_g

0xeb3a,	// (0x0005b6fb) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeb3a,	// (0x0005b6fb) cmail_ddmenu_btn01_pane_t1

0xc962,	// (0x00059523) bg_button_pane_cp029_ParamLimits

0xc962,	// (0x00059523) bg_button_pane_cp029

0x8d29,	// (0x000558ea) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8d29,	// (0x000558ea) cmail_ddmenu_btn02_pane_g1

0x8d41,	// (0x00055902) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8d41,	// (0x00055902) cmail_ddmenu_btn02_pane_t1

0xa3b1,	// (0x00056f72) bg_button_pane_cp031_ParamLimits

0xa3b1,	// (0x00056f72) bg_button_pane_cp031

0x8d29,	// (0x000558ea) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8d29,	// (0x000558ea) cmail_ddmenu_btn03_pane_g1

0x8d41,	// (0x00055902) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8d41,	// (0x00055902) cmail_ddmenu_btn03_pane_t1

0x61aa,	// (0x00052d6b) cell_dialer2_keypad_pane_t1_ParamLimits

0x61c4,	// (0x00052d85) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x61c4,	// (0x00052d85) cell_dialer2_keypad_pane_t1_copy1

0x7eef,	// (0x00054ab0) ncimui_group_button_pane

0xa3b1,	// (0x00056f72) main_sp_fs_calendar_pane_ParamLimits

0x891f,	// (0x000554e0) list_single_cmail_header_caption_pane_ParamLimits

0x8af3,	// (0x000556b4) aid_recal_txt_sm_pane

0x9847,	// (0x00056408) mian_recal_day_pane

0x8b70,	// (0x00055731) popup_sp_fs_cale_preview_window_ParamLimits

0xeb4f,	// (0x0005b710) list_recal_day_pane

0xa2f6,	// (0x00056eb7) list_single_recal_day_pane_ParamLimits

0xa2f6,	// (0x00056eb7) list_single_recal_day_pane

0xeb76,	// (0x0005b737) list_single_recal_day_pane_g1_ParamLimits

0xeb76,	// (0x0005b737) list_single_recal_day_pane_g1

0xa308,	// (0x00056ec9) list_single_recal_day_pane_g2_ParamLimits

0xa308,	// (0x00056ec9) list_single_recal_day_pane_g2

0xa314,	// (0x00056ed5) list_single_recal_day_pane_g3_ParamLimits

0xa314,	// (0x00056ed5) list_single_recal_day_pane_g3

0x10cf,	// (0x0004dc90) list_single_recal_day_pane_g4_ParamLimits

0x10cf,	// (0x0004dc90) list_single_recal_day_pane_g4

0xa320,	// (0x00056ee1) list_single_recal_day_pane_g5_ParamLimits

0xa320,	// (0x00056ee1) list_single_recal_day_pane_g5

0xa32c,	// (0x00056eed) list_single_recal_day_pane_g6_ParamLimits

0xa32c,	// (0x00056eed) list_single_recal_day_pane_g6

0x0004,

0xfdf0,	// (0x0005c9b1) list_single_recal_day_pane_g_ParamLimits

0xfdf0,	// (0x0005c9b1) list_single_recal_day_pane_g

0xa340,	// (0x00056f01) list_single_recal_day_pane_t1

0xa352,	// (0x00056f13) list_single_recal_day_pane_t2

0x0001,

0xfdfb,	// (0x0005c9bc) list_single_recal_day_pane_t

0x8d65,	// (0x00055926) ncimui_query_button_pane_ParamLimits

0x8d65,	// (0x00055926) ncimui_query_button_pane

0x8d75,	// (0x00055936) ncimui_query_button_pane_t1_ParamLimits

0x8d75,	// (0x00055936) ncimui_query_button_pane_t1

0xeb82,	// (0x0005b743) ncimui_query_button_pane_t2_ParamLimits

0xeb82,	// (0x0005b743) ncimui_query_button_pane_t2

0x0001,

0xfe00,	// (0x0005c9c1) ncimui_query_button_pane_t_ParamLimits

0xfe00,	// (0x0005c9c1) ncimui_query_button_pane_t

0x8d88,	// (0x00055949) query_button_pane_ParamLimits

0x8d88,	// (0x00055949) query_button_pane

0x9847,	// (0x00056408) bg_button_pane_cp0028

0xeb95,	// (0x0005b756) query_button_pane_t1

0x41d2,	// (0x00050d93) main_tport_pane_ParamLimits

0x87ce,	// (0x0005538f) bg_popup_window_pane_cp01_ParamLimits

0x87ce,	// (0x0005538f) bg_popup_window_pane_cp01

0x87e9,	// (0x000553aa) heading_pane_cp08_ParamLimits

0x87e9,	// (0x000553aa) heading_pane_cp08

0x87fc,	// (0x000553bd) heading_pane_cp07_ParamLimits

0x87fc,	// (0x000553bd) heading_pane_cp07

0x88a3,	// (0x00055464) cell_tport_appsw_pane_g2

0x0002,

0xfd73,	// (0x0005c934) cell_tport_appsw_pane_g

0x37b0,	// (0x00050371) input_candi_list_open_g1

0xaeea,	// (0x00057aab) list_cale_time_pane_g6_ParamLimits

0xaeea,	// (0x00057aab) list_cale_time_pane_g6

0x4f9a,	// (0x00051b5b) aid_size_touch_calib_1_ParamLimits

0x4f9a,	// (0x00051b5b) aid_size_touch_calib_1

0x4fac,	// (0x00051b6d) aid_size_touch_calib_2_ParamLimits

0x4fac,	// (0x00051b6d) aid_size_touch_calib_2

0x4fc4,	// (0x00051b85) aid_size_touch_calib_3_ParamLimits

0x4fc4,	// (0x00051b85) aid_size_touch_calib_3

0x4fe2,	// (0x00051ba3) aid_size_touch_calib_4_ParamLimits

0x4fe2,	// (0x00051ba3) aid_size_touch_calib_4

0x4ffa,	// (0x00051bbb) main_touch_calib_button_group_pane_ParamLimits

0x4ffa,	// (0x00051bbb) main_touch_calib_button_group_pane

0x5012,	// (0x00051bd3) main_touch_calib_pane_g1_ParamLimits

0x5024,	// (0x00051be5) main_touch_calib_pane_g2_ParamLimits

0x5036,	// (0x00051bf7) main_touch_calib_pane_g3_ParamLimits

0x5048,	// (0x00051c09) main_touch_calib_pane_g4_ParamLimits

0xf760,	// (0x0005c321) main_touch_calib_pane_g_ParamLimits

0x505a,	// (0x00051c1b) main_touch_calib_pane_t1_ParamLimits

0x5074,	// (0x00051c35) main_touch_calib_pane_t2_ParamLimits

0x508e,	// (0x00051c4f) main_touch_calib_pane_t3_ParamLimits

0x50a2,	// (0x00051c63) main_touch_calib_pane_t4_ParamLimits

0x50b6,	// (0x00051c77) main_touch_calib_pane_t5_ParamLimits

0xf769,	// (0x0005c32a) main_touch_calib_pane_t_ParamLimits

0xd0af,	// (0x00059c70) list_single_fp_cale_pane_g3_ParamLimits

0xd0af,	// (0x00059c70) list_single_fp_cale_pane_g3

0xa3b1,	// (0x00056f72) bg_button_pane_cp012_ParamLimits

0xa3b1,	// (0x00056f72) bg_vkb2_func_pane_cp03_ParamLimits

0x717a,	// (0x00053d3b) cell_vitu2_function_top_pane_g1_ParamLimits

0xa3b1,	// (0x00056f72) bg_vkb2_func_pane_cp04_ParamLimits

0x7e7a,	// (0x00054a3b) main_ncimui_button_group_pane_ParamLimits

0x7e7a,	// (0x00054a3b) main_ncimui_button_group_pane

0x7eda,	// (0x00054a9b) main_ncimui_pane_t3_ParamLimits

0x7eda,	// (0x00054a9b) main_ncimui_pane_t3

0xe953,	// (0x0005b514) phacti_button_group_pane

0xeb1e,	// (0x0005b6df) aid_size_list_single_double_ParamLimits

0x8ce7,	// (0x000558a8) popup_ezdial_listscroll_window_ParamLimits

0x8d03,	// (0x000558c4) popup_number_entry_window_cp01_ParamLimits

0x8d9b,	// (0x0005595c) phacti_button_pane_ParamLimits

0x8d9b,	// (0x0005595c) phacti_button_pane

0x9847,	// (0x00056408) bg_button_pane_cp14

0xeba3,	// (0x0005b764) phacti_button_pane_t1

0x8dac,	// (0x0005596d) main_touch_calib_button_pane_ParamLimits

0x8dac,	// (0x0005596d) main_touch_calib_button_pane

0xa8e2,	// (0x000574a3) bg_button_pane_cp18_ParamLimits

0xa8e2,	// (0x000574a3) bg_button_pane_cp18

0xebb1,	// (0x0005b772) main_touch_calib_button_pane_t1_ParamLimits

0xebb1,	// (0x0005b772) main_touch_calib_button_pane_t1

0xebc7,	// (0x0005b788) main_touch_calib_button_pane_t2_ParamLimits

0xebc7,	// (0x0005b788) main_touch_calib_button_pane_t2

0x0001,

0x023f,	// (0x0004ce00) main_touch_calib_button_pane_t_ParamLimits

0x023f,	// (0x0004ce00) main_touch_calib_button_pane_t

0x9847,	// (0x00056408) cell_ncimui_button_pane

0x9847,	// (0x00056408) bg_button_pane_cp032

0xebe5,	// (0x0005b7a6) cell_ncimui_button_pane_t1

0x9fe0,	// (0x00056ba1) image3_infobar_pane_ParamLimits

0x9fe0,	// (0x00056ba1) image3_infobar_pane

0x82ef,	// (0x00054eb0) fs_bigclock_status_pane_ParamLimits

0x82ef,	// (0x00054eb0) fs_bigclock_status_pane

0x82fc,	// (0x00054ebd) main_fs_bigclock_clock_pane_ParamLimits

0x82fc,	// (0x00054ebd) main_fs_bigclock_clock_pane

0x831a,	// (0x00054edb) main_fs_bigclock_indi_pane_ParamLimits

0x831a,	// (0x00054edb) main_fs_bigclock_indi_pane

0x834c,	// (0x00054f0d) main_fs_bigclock_swipe_pane_ParamLimits

0x834c,	// (0x00054f0d) main_fs_bigclock_swipe_pane

0x9847,	// (0x00056408) main_fs_clock_dumped_data

0xe458,	// (0x0005b019) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe458,	// (0x0005b019) list_single_fs_bigclock_indicator_pane_g1

0xe474,	// (0x0005b035) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe474,	// (0x0005b035) list_single_fs_bigclock_indicator_pane_g2

0xe48e,	// (0x0005b04f) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe48e,	// (0x0005b04f) list_single_fs_bigclock_indicator_pane_g3

0xe4a8,	// (0x0005b069) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe4a8,	// (0x0005b069) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc87,	// (0x0005c848) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc87,	// (0x0005c848) list_single_fs_bigclock_indicator_pane_g

0xe4d3,	// (0x0005b094) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe4d3,	// (0x0005b094) list_single_fs_bigclock_indicator_pane_t1

0xe4fb,	// (0x0005b0bc) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe4fb,	// (0x0005b0bc) list_single_fs_bigclock_indicator_pane_t2

0xe523,	// (0x0005b0e4) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe523,	// (0x0005b0e4) list_single_fs_bigclock_indicator_pane_t3

0xe54b,	// (0x0005b10c) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe54b,	// (0x0005b10c) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc92,	// (0x0005c853) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc92,	// (0x0005c853) list_single_fs_bigclock_indicator_pane_t

0xebf3,	// (0x0005b7b4) image3_infobar_fav_pane_ParamLimits

0xebf3,	// (0x0005b7b4) image3_infobar_fav_pane

0xec03,	// (0x0005b7c4) image3_infobar_loc_pane_ParamLimits

0xec03,	// (0x0005b7c4) image3_infobar_loc_pane

0xec17,	// (0x0005b7d8) image3_infobar_time_pane_ParamLimits

0xec17,	// (0x0005b7d8) image3_infobar_time_pane

0xcd6a,	// (0x0005992b) image3_infobar_time_pane_g1

0xec27,	// (0x0005b7e8) image3_infobar_time_pane_t1

0xcd6a,	// (0x0005992b) image3_infobar_loc_pane_g1

0xec35,	// (0x0005b7f6) image3_infobar_loc_pane_g2

0x0001,

0x0244,	// (0x0004ce05) image3_infobar_loc_pane_g

0xec3d,	// (0x0005b7fe) image3_infobar_loc_pane_t1

0xcd6a,	// (0x0005992b) image3_infobar_fav_pane_g1

0xec4b,	// (0x0005b80c) image3_infobar_fav_pane_g2

0x0001,

0x0249,	// (0x0004ce0a) image3_infobar_fav_pane_g

0xec53,	// (0x0005b814) fs_bigclock_status_battery_pane

0xec5c,	// (0x0005b81d) fs_bigclock_status_signal_pane

0xec65,	// (0x0005b826) fs_bigclock_status_title_pane

0xec6e,	// (0x0005b82f) fs_bigclock_status_signal_pane_g1

0xec77,	// (0x0005b838) fs_bigclock_status_signal_pane_g2

0x0001,

0x024e,	// (0x0004ce0f) fs_bigclock_status_signal_pane_g

0xec7f,	// (0x0005b840) fs_bigclock_status_battery_pane_g1

0xec88,	// (0x0005b849) fs_bigclock_status_battery_pane_g2

0x0001,

0x0253,	// (0x0004ce14) fs_bigclock_status_battery_pane_g

0xec90,	// (0x0005b851) fs_bigclock_status_title_pane_t1

0x8dc1,	// (0x00055982) main_fs_bigclock_clock_pane_g1

0x8dc1,	// (0x00055982) main_fs_bigclock_clock_pane_g2

0x8dd2,	// (0x00055993) main_fs_bigclock_clock_pane_g3

0x8dd2,	// (0x00055993) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe05,	// (0x0005c9c6) main_fs_bigclock_clock_pane_g

0x8de5,	// (0x000559a6) main_fs_bigclock_clock_pane_t1

0x8dfb,	// (0x000559bc) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe0e,	// (0x0005c9cf) main_fs_bigclock_clock_pane_t

0xec9e,	// (0x0005b85f) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec9e,	// (0x0005b85f) list_single_fs_bigclock_indicator_pane

0xecaf,	// (0x0005b870) list_single_fs_bigclock_pane_ParamLimits

0xecaf,	// (0x0005b870) list_single_fs_bigclock_pane

0xecd5,	// (0x0005b896) main_fs_bigclock_indicator_pane_t1

0xece4,	// (0x0005b8a5) list_single_fs_bigclock_pane_g1

0xecec,	// (0x0005b8ad) list_single_fs_bigclock_pane_t1

0xcd6a,	// (0x0005992b) main_fs_bigclock_swipe_pane_g1

0xed2f,	// (0x0005b8f0) main_fs_bigclock_swipe_pane_g2

0x0001,

0x0272,	// (0x0004ce33) main_fs_bigclock_swipe_pane_g

0xed37,	// (0x0005b8f8) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xed37,	// (0x0005b8f8) main_fs_bigclock_swipe_pane_t1

0x30b7,	// (0x0004fc78) call_type_pane_ParamLimits

0x9847,	// (0x00056408) main_btmg_pane

0xa25f,	// (0x00056e20) list_single_cale_mrui_row_pane_g2_ParamLimits

0xa25f,	// (0x00056e20) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdb4,	// (0x0005c975) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdb4,	// (0x0005c975) list_single_cale_mrui_row_pane_g

0xa2e5,	// (0x00056ea6) list_recal_vselct_arw_lo_pane

0xeb6e,	// (0x0005b72f) list_recal_vselct_arw_up_pane

0xa2ed,	// (0x00056eae) list_recal_vselct_pane

0x8e55,	// (0x00055a16) btmg_button_pane

0x8e5f,	// (0x00055a20) main_btmg_pane_g1

0x9847,	// (0x00056408) bg_button_pane_cp044

0xed54,	// (0x0005b915) btmg_button_pane_t1

0xc94e,	// (0x0005950f) aid_listscroll_gen

0xa3b1,	// (0x00056f72) main_cntbar_detail_pane

0xe89f,	// (0x0005b460) list_cmail_folder_pane

0xd1d5,	// (0x00059d96) sp_fs_scroll_pane_cp03_ParamLimits

0x10e7,	// (0x0004dca8) list_single_fs_dyc_pane_cp01_ParamLimits

0x10e7,	// (0x0004dca8) list_single_fs_dyc_pane_cp01

0xed62,	// (0x0005b923) aid_size_cmail_indent

0xa364,	// (0x00056f25) list_single_dyc_row_pane_cp01

0x8e9b,	// (0x00055a5c) cntbar_detail_list_pane_ParamLimits

0x8e9b,	// (0x00055a5c) cntbar_detail_list_pane

0x8ee7,	// (0x00055aa8) main_cntbar_detail_cont_pane_ParamLimits

0x8ee7,	// (0x00055aa8) main_cntbar_detail_cont_pane

0xd1d5,	// (0x00059d96) scroll_pane_cp032_ParamLimits

0xd1d5,	// (0x00059d96) scroll_pane_cp032

0x8efb,	// (0x00055abc) cntbar_detail_list_event_pane_ParamLimits

0x8efb,	// (0x00055abc) cntbar_detail_list_event_pane

0x8eab,	// (0x00055a6c) cntbar_detail_list_shct_pane

0xad75,	// (0x00057936) aid_list_gen

0xed6b,	// (0x0005b92c) aid_scroll

0xed74,	// (0x0005b935) aid_size_touch_scroll_bar

0x775f,	// (0x00054320) aid_list_double

0xa36d,	// (0x00056f2e) aid_list_single

0x775f,	// (0x00054320) aid_list_single_lg

0xa376,	// (0x00056f37) aid_list_z_g_a_sm

0xa37e,	// (0x00056f3f) aid_list_z_g_d

0xa386,	// (0x00056f47) aid_txt_z_prm

0x10fe,	// (0x0004dcbf) aid_txt_z_prm_cp01

0x110c,	// (0x0004dccd) aid_txt_z_sec

0x8f0b,	// (0x00055acc) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8f0b,	// (0x00055acc) main_cntbar_detail_cont_pane_g1

0x8f1f,	// (0x00055ae0) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8f1f,	// (0x00055ae0) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe1a,	// (0x0005c9db) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe1a,	// (0x0005c9db) main_cntbar_detail_cont_pane_g

0xed7d,	// (0x0005b93e) main_cntbar_detail_cont_pane_t1

0xed8b,	// (0x0005b94c) main_cntbar_detail_cont_pane_t2

0xed99,	// (0x0005b95a) main_cntbar_detail_cont_pane_t3

0x0002,

0x027c,	// (0x0004ce3d) main_cntbar_detail_cont_pane_t

0x8f2f,	// (0x00055af0) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8f2f,	// (0x00055af0) cell_cntbar_detail_list_shct_pane

0xeda7,	// (0x0005b968) cntbar_detail_list_shct_pane_g1

0xedb0,	// (0x0005b971) cntbar_detail_list_shct_pane_g2

0x0001,

0x0283,	// (0x0004ce44) cntbar_detail_list_shct_pane_g

0x8f43,	// (0x00055b04) cntbar_detail_list_event_pane_g1_ParamLimits

0x8f43,	// (0x00055b04) cntbar_detail_list_event_pane_g1

0x8f4f,	// (0x00055b10) cntbar_detail_list_event_pane_g2_ParamLimits

0x8f4f,	// (0x00055b10) cntbar_detail_list_event_pane_g2

0x0005,

0xfe1f,	// (0x0005c9e0) cntbar_detail_list_event_pane_g_ParamLimits

0xfe1f,	// (0x0005c9e0) cntbar_detail_list_event_pane_g

0x8fbb,	// (0x00055b7c) cntbar_detail_list_event_pane_t1_ParamLimits

0x8fbb,	// (0x00055b7c) cntbar_detail_list_event_pane_t1

0x8fd0,	// (0x00055b91) cntbar_detail_list_event_pane_t2_ParamLimits

0x8fd0,	// (0x00055b91) cntbar_detail_list_event_pane_t2

0x0002,

0xfe2c,	// (0x0005c9ed) cntbar_detail_list_event_pane_t_ParamLimits

0xfe2c,	// (0x0005c9ed) cntbar_detail_list_event_pane_t

0xcd6a,	// (0x0005992b) cell_cntbar_detail_list_shct_pane_g1

0xb4cf,	// (0x00058090) navi_pane_mv_g3

0xa3b1,	// (0x00056f72) main_cntbar_detail_pane_ParamLimits

0x9847,	// (0x00056408) main_notif_wgt_pane

0x9dcc,	// (0x0005698d) aid_tch_main_mp4_pane_g4

0x9fd8,	// (0x00056b99) popup_slider_window_cp02

0xa2db,	// (0x00056e9c) list_recal_day_event_pane

0x8e69,	// (0x00055a2a) cntbar_detail_btn_pane_ParamLimits

0x8e69,	// (0x00055a2a) cntbar_detail_btn_pane

0x8e82,	// (0x00055a43) cntbar_detail_btn_pane_cp01_ParamLimits

0x8e82,	// (0x00055a43) cntbar_detail_btn_pane_cp01

0x8eab,	// (0x00055a6c) cntbar_detail_list_shct_pane_ParamLimits

0x8ebb,	// (0x00055a7c) cntbar_detail_pane_g1_ParamLimits

0x8ebb,	// (0x00055a7c) cntbar_detail_pane_g1

0x8ecb,	// (0x00055a8c) cntbar_detail_pane_t1_ParamLimits

0x8ecb,	// (0x00055a8c) cntbar_detail_pane_t1

0x8f5b,	// (0x00055b1c) cntbar_detail_list_event_pane_g3_ParamLimits

0x8f5b,	// (0x00055b1c) cntbar_detail_list_event_pane_g3

0x8f73,	// (0x00055b34) cntbar_detail_list_event_pane_g4_ParamLimits

0x8f73,	// (0x00055b34) cntbar_detail_list_event_pane_g4

0x8f8b,	// (0x00055b4c) cntbar_detail_list_event_pane_g5_ParamLimits

0x8f8b,	// (0x00055b4c) cntbar_detail_list_event_pane_g5

0x8fa3,	// (0x00055b64) cntbar_detail_list_event_pane_g6_ParamLimits

0x8fa3,	// (0x00055b64) cntbar_detail_list_event_pane_g6

0x8fe5,	// (0x00055ba6) cntbar_detail_list_event_pane_t3_ParamLimits

0x8fe5,	// (0x00055ba6) cntbar_detail_list_event_pane_t3

0x8ff7,	// (0x00055bb8) popup_notif_wgt_window_ParamLimits

0x8ff7,	// (0x00055bb8) popup_notif_wgt_window

0x9010,	// (0x00055bd1) popup_submenu_window_cp01_ParamLimits

0x9010,	// (0x00055bd1) popup_submenu_window_cp01

0xaace,	// (0x0005768f) bg_popup_window_pane_cp10

0xedb9,	// (0x0005b97a) listscroll_notif_wgt_pane

0xedcb,	// (0x0005b98c) list_notif_wgt_window

0xedd4,	// (0x0005b995) scroll_pane_cp033

0x9022,	// (0x00055be3) list_notif_wgt_row_pane_ParamLimits

0x9022,	// (0x00055be3) list_notif_wgt_row_pane

0xeddd,	// (0x0005b99e) aid_size_list_notif_wgt_del

0xedea,	// (0x0005b9ab) list_notif_wgt_row_pane_g1

0xedf6,	// (0x0005b9b7) list_notif_wgt_row_pane_g2

0xee05,	// (0x0005b9c6) list_notif_wgt_row_pane_g3

0x0002,

0x029c,	// (0x0004ce5d) list_notif_wgt_row_pane_g

0xee12,	// (0x0005b9d3) list_notif_wgt_row_pane_t1

0xee28,	// (0x0005b9e9) list_notif_wgt_row_pane_t2

0xee3a,	// (0x0005b9fb) list_notif_wgt_row_pane_t3

0x0002,

0x02a3,	// (0x0004ce64) list_notif_wgt_row_pane_t

0xd959,	// (0x0005a51a) list_recal_day_event_pane_g1

0xee4c,	// (0x0005ba0d) list_recal_day_event_pane_t1

0x9847,	// (0x00056408) bg_button_pane_cp045

0x9032,	// (0x00055bf3) cntbar_detail_btn_pane_t1

0xc962,	// (0x00059523) main_callh_pane_ParamLimits

0xc962,	// (0x00059523) main_callh_pane

0x9847,	// (0x00056408) main_coverflow0_pane

0x9847,	// (0x00056408) main_wgtman_pane

0x8364,	// (0x00054f25) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x8364,	// (0x00054f25) main_fs_bigclock_unlock_btn_pane

0x889b,	// (0x0005545c) bg_button_pane_cp16

0x88ab,	// (0x0005546c) cell_tport_appsw_pane_g3

0x9040,	// (0x00055c01) cf0_flow_pane_ParamLimits

0x9040,	// (0x00055c01) cf0_flow_pane

0xee5b,	// (0x0005ba1c) listscroll_cf0_pane

0xee66,	// (0x0005ba27) main_cf0_pane_g1

0x9055,	// (0x00055c16) main_cf0_pane_t1_ParamLimits

0x9055,	// (0x00055c16) main_cf0_pane_t1

0x906c,	// (0x00055c2d) main_cf0_pane_t2_ParamLimits

0x906c,	// (0x00055c2d) main_cf0_pane_t2

0x0001,

0xfe33,	// (0x0005c9f4) main_cf0_pane_t_ParamLimits

0xfe33,	// (0x0005c9f4) main_cf0_pane_t

0xee78,	// (0x0005ba39) scroll_pane_cp11

0x9083,	// (0x00055c44) cf0_flow_pane_g1

0x908b,	// (0x00055c4c) cf0_flow_pane_g2

0x0001,

0xfe38,	// (0x0005c9f9) cf0_flow_pane_g

0x9093,	// (0x00055c54) cf0_flow_pane_t1

0x9847,	// (0x00056408) main_call6_pane

0x9847,	// (0x00056408) main_calllock_pane

0x90a1,	// (0x00055c62) call6_btn_grp_pane_ParamLimits

0x90a1,	// (0x00055c62) call6_btn_grp_pane

0x90bb,	// (0x00055c7c) call6_pane_g1_ParamLimits

0x90bb,	// (0x00055c7c) call6_pane_g1

0x90d1,	// (0x00055c92) popup_call6_1st_window_ParamLimits

0x90d1,	// (0x00055c92) popup_call6_1st_window

0x90e2,	// (0x00055ca3) popup_call6_2nd_window_ParamLimits

0x90e2,	// (0x00055ca3) popup_call6_2nd_window

0x90f3,	// (0x00055cb4) cell_call6_btn_pane_ParamLimits

0x90f3,	// (0x00055cb4) cell_call6_btn_pane

0xaace,	// (0x0005768f) bg_popup_call2_in_pane_cp03

0xee83,	// (0x0005ba44) popup_call6_1st_window_g1

0xee8b,	// (0x0005ba4c) popup_call6_1st_window_g2

0xee93,	// (0x0005ba54) popup_call6_1st_window_g3

0x0002,

0x02b9,	// (0x0004ce7a) popup_call6_1st_window_g

0xee9b,	// (0x0005ba5c) popup_call6_1st_window_t1

0xeeaa,	// (0x0005ba6b) popup_call6_1st_window_t2

0xeeb8,	// (0x0005ba79) popup_call6_1st_window_t3

0x0002,

0x02c0,	// (0x0004ce81) popup_call6_1st_window_t

0xaace,	// (0x0005768f) bg_popup_call2_in_pane_cp04

0xee83,	// (0x0005ba44) popup_call6_2nd_window_g1

0xee8b,	// (0x0005ba4c) popup_call6_2nd_window_g2

0xee93,	// (0x0005ba54) popup_call6_2nd_window_g3

0x0002,

0x02b9,	// (0x0004ce7a) popup_call6_2nd_window_g

0xee9b,	// (0x0005ba5c) popup_call6_2nd_window_t1

0x9847,	// (0x00056408) bg_button_pane_cp15

0xeec6,	// (0x0005ba87) cell_call6_btn_pane_g1

0xa394,	// (0x00056f55) cell_call6_btn_pane_t1

0x9107,	// (0x00055cc8) listscroll_wgtman_pane_ParamLimits

0x9107,	// (0x00055cc8) listscroll_wgtman_pane

0x9128,	// (0x00055ce9) wgtman_btn_pane_ParamLimits

0x9128,	// (0x00055ce9) wgtman_btn_pane

0xb2e3,	// (0x00057ea4) aid_scroll_copy1

0xeecf,	// (0x0005ba90) list_wgtman_pane

0x916b,	// (0x00055d2c) wgtman_btn_pane_g1_ParamLimits

0x916b,	// (0x00055d2c) wgtman_btn_pane_g1

0x9197,	// (0x00055d58) wgtman_btn_pane_t1_ParamLimits

0x9197,	// (0x00055d58) wgtman_btn_pane_t1

0xeed9,	// (0x0005ba9a) wgtman_btn_pane_t2_ParamLimits

0xeed9,	// (0x0005ba9a) wgtman_btn_pane_t2

0x0001,

0xfe3d,	// (0x0005c9fe) wgtman_btn_pane_t_ParamLimits

0xfe3d,	// (0x0005c9fe) wgtman_btn_pane_t

0x91d4,	// (0x00055d95) listrow_wgtman_pane_ParamLimits

0x91d4,	// (0x00055d95) listrow_wgtman_pane

0x91e6,	// (0x00055da7) listrow_wgtman_pane_g1

0x91f3,	// (0x00055db4) listrow_wgtman_pane_g2

0x0001,

0xfe42,	// (0x0005ca03) listrow_wgtman_pane_g

0x111a,	// (0x0004dcdb) listrow_wgtman_pane_t1

0x1132,	// (0x0004dcf3) listrow_wgtman_pane_t2

0x0001,

0xfe47,	// (0x0005ca08) listrow_wgtman_pane_t

0x1158,	// (0x0004dd19) wait_bar_pane_cp09

0xeef0,	// (0x0005bab1) main_calllock_btn_pane

0xeefa,	// (0x0005babb) main_calllock_pane_g1

0x9847,	// (0x00056408) bg_button_pane_cp17

0xeec6,	// (0x0005ba87) main_calllock_btn_pane_g1

0xef06,	// (0x0005bac7) main_calllock_btn_pane_t1

0x9847,	// (0x00056408) main_dialer3_pane

0x9847,	// (0x00056408) main_fmrd2_pane

0xcd6a,	// (0x0005992b) main_fs_bigclock_unlock_btn_pane_g1

0x9219,	// (0x00055dda) main_fs_bigclock_unlock_btn_pane_t1

0x9227,	// (0x00055de8) area_fmrd2_info_pane_ParamLimits

0x9227,	// (0x00055de8) area_fmrd2_info_pane

0x9238,	// (0x00055df9) area_fmrd2_visual_pane_ParamLimits

0x9238,	// (0x00055df9) area_fmrd2_visual_pane

0x9246,	// (0x00055e07) fmrd2_indi_pane_ParamLimits

0x9246,	// (0x00055e07) fmrd2_indi_pane

0x9253,	// (0x00055e14) area_fmrd2_visual_pane_g1

0x925b,	// (0x00055e1c) area_fmrd2_visual_pane_t1

0x926b,	// (0x00055e2c) area_fmrd2_visual_pane_t2

0x927b,	// (0x00055e3c) area_fmrd2_visual_pane_t3

0x0002,

0xfe51,	// (0x0005ca12) area_fmrd2_visual_pane_t

0x928b,	// (0x00055e4c) area_fmrd2_info_pane_g1

0x9293,	// (0x00055e54) area_fmrd2_info_pane_t1

0x92a3,	// (0x00055e64) area_fmrd2_info_pane_t2

0x92b3,	// (0x00055e74) area_fmrd2_info_pane_t3

0x92c3,	// (0x00055e84) area_fmrd2_info_pane_t4

0x0003,

0xfe58,	// (0x0005ca19) area_fmrd2_info_pane_t

0x92d1,	// (0x00055e92) fmrd2_indi_pane_t1

0x92e1,	// (0x00055ea2) fmrd2_indi_pane_t2

0x92f1,	// (0x00055eb2) fmrd2_indi_pane_t3

0x0002,

0xfe61,	// (0x0005ca22) fmrd2_indi_pane_t

0xe4b7,	// (0x0005b078) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe4b7,	// (0x0005b078) list_single_fs_bigclock_indicator_pane_g5

0xe568,	// (0x0005b129) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe568,	// (0x0005b129) list_single_fs_bigclock_indicator_pane_t5

0x8ad5,	// (0x00055696) aid_cell_bcale_month_pane_ParamLimits

0x8ad5,	// (0x00055696) aid_cell_bcale_month_pane

0x8afc,	// (0x000556bd) bcale_month_pane_ParamLimits

0x8afc,	// (0x000556bd) bcale_month_pane

0x8b20,	// (0x000556e1) bcale_preview_pane_ParamLimits

0x8b20,	// (0x000556e1) bcale_preview_pane

0xecec,	// (0x0005b8ad) list_single_fs_bigclock_pane_t1_ParamLimits

0xed0b,	// (0x0005b8cc) list_single_fs_bigclock_pane_t2_ParamLimits

0xed0b,	// (0x0005b8cc) list_single_fs_bigclock_pane_t2

0x0001,

0x026d,	// (0x0004ce2e) list_single_fs_bigclock_pane_t_ParamLimits

0x026d,	// (0x0004ce2e) list_single_fs_bigclock_pane_t

0x9211,	// (0x00055dd2) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfe4c,	// (0x0005ca0d) main_fs_bigclock_unlock_btn_pane_g

0x9301,	// (0x00055ec2) aid_dia3_key_size_ParamLimits

0x9301,	// (0x00055ec2) aid_dia3_key_size

0x9310,	// (0x00055ed1) aid_dia3_listrow_size_ParamLimits

0x9310,	// (0x00055ed1) aid_dia3_listrow_size

0x9325,	// (0x00055ee6) dia3_keypad_fun_pane_ParamLimits

0x9325,	// (0x00055ee6) dia3_keypad_fun_pane

0x9341,	// (0x00055f02) dia3_keypad_num_pane_ParamLimits

0x9341,	// (0x00055f02) dia3_keypad_num_pane

0x935c,	// (0x00055f1d) dia3_listscroll_pane_ParamLimits

0x935c,	// (0x00055f1d) dia3_listscroll_pane

0x936f,	// (0x00055f30) dia3_numentry_pane_ParamLimits

0x936f,	// (0x00055f30) dia3_numentry_pane

0xef15,	// (0x0005bad6) dia3_list_pane

0xef20,	// (0x0005bae1) scroll_pane_cp12

0x9847,	// (0x00056408) bg_dia3_numentry_pane

0x9383,	// (0x00055f44) dia3_numentry_pane_t1

0x9392,	// (0x00055f53) cell_dia3_key_num_pane

0x939a,	// (0x00055f5b) cell_dia3_key0_fun_pane_ParamLimits

0x939a,	// (0x00055f5b) cell_dia3_key0_fun_pane

0x93ae,	// (0x00055f6f) cell_dia3_key1_fun_pane_ParamLimits

0x93ae,	// (0x00055f6f) cell_dia3_key1_fun_pane

0x93c6,	// (0x00055f87) dia3_listrow_pane

0xe20a,	// (0x0005adcb) bg_dia3_numentry_pane_g1

0x9847,	// (0x00056408) bg_button_pane_cp21

0xef2b,	// (0x0005baec) cell_dia3_key_num_pane_t1

0xef39,	// (0x0005bafa) cell_dia3_key_num_pane_t2

0xef48,	// (0x0005bb09) cell_dia3_key_num_pane_t3

0xef57,	// (0x0005bb18) cell_dia3_key_num_pane_t4

0x0003,

0x02f2,	// (0x0004ceb3) cell_dia3_key_num_pane_t

0x9847,	// (0x00056408) bg_button_pane_cp19

0x93d8,	// (0x00055f99) cell_dia3_key0_fun_pane_g1

0x9847,	// (0x00056408) bg_button_pane_cp20

0x93e0,	// (0x00055fa1) cell_dia3_key1_fun_pane_g1

0x93e8,	// (0x00055fa9) area_left_week_number_pane

0x93f4,	// (0x00055fb5) area_top_day_name_pane

0x9407,	// (0x00055fc8) frame_month_view_pane

0xef66,	// (0x0005bb27) grid_month_view_pane

0x941a,	// (0x00055fdb) cell_top_day_name_pane_ParamLimits

0x941a,	// (0x00055fdb) cell_top_day_name_pane

0x9447,	// (0x00056008) cell_area_left_week_number_pane_ParamLimits

0x9447,	// (0x00056008) cell_area_left_week_number_pane

0x945b,	// (0x0005601c) cell_month_view_pane_ParamLimits

0x945b,	// (0x0005601c) cell_month_view_pane

0xef74,	// (0x0005bb35) frm_month_g1

0x9488,	// (0x00056049) frm_month_g2

0x949b,	// (0x0005605c) frm_month_g3

0x94ae,	// (0x0005606f) frm_month_g4

0x94c1,	// (0x00056082) frm_month_g5

0x94d4,	// (0x00056095) frm_month_g6

0x94e7,	// (0x000560a8) frm_month_g7

0xef81,	// (0x0005bb42) frm_month_g8

0x94fa,	// (0x000560bb) frm_month_g9

0x950a,	// (0x000560cb) frm_month_g10

0x951a,	// (0x000560db) frm_month_g11

0x952a,	// (0x000560eb) frm_month_g12

0x953c,	// (0x000560fd) frm_month_g13

0x954e,	// (0x0005610f) frm_month_g14

0x9562,	// (0x00056123) frm_month_g15

0x9576,	// (0x00056137) frm_month_g16

0x000f,

0xfe68,	// (0x0005ca29) frm_month_g

0xef8e,	// (0x0005bb4f) cell_top_day_name_pane_t1

0x958a,	// (0x0005614b) cell_area_left_week_number_pane_g1

0x9596,	// (0x00056157) cell_area_left_week_number_pane_t1

0xcfaf,	// (0x00059b70) cell_month_view_pane_g1

0x95a9,	// (0x0005616a) cell_month_view_pane_t1

0x9847,	// (0x00056408) main_fps_pane

0xe7a0,	// (0x0005b361) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe7a0,	// (0x0005b361) cmail_ddmenu_btn02_pane_cp1

0xe7bc,	// (0x0005b37d) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe7bc,	// (0x0005b37d) cmail_ddmenu_btn02_pane_cp2

0x8d35,	// (0x000558f6) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8d35,	// (0x000558f6) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfde6,	// (0x0005c9a7) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfde6,	// (0x0005c9a7) cmail_ddmenu_btn02_pane_g

0x8d53,	// (0x00055914) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8d53,	// (0x00055914) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfdeb,	// (0x0005c9ac) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfdeb,	// (0x0005c9ac) cmail_ddmenu_btn02_pane_t

0x95bc,	// (0x0005617d) fps_text_pane_ParamLimits

0x95bc,	// (0x0005617d) fps_text_pane

0x95d3,	// (0x00056194) main_fps_pane_g1_ParamLimits

0x95d3,	// (0x00056194) main_fps_pane_g1

0x95ed,	// (0x000561ae) wait_bar_pane_cp010_ParamLimits

0x95ed,	// (0x000561ae) wait_bar_pane_cp010

0x95fe,	// (0x000561bf) fps_text_pane_t1_ParamLimits

0x95fe,	// (0x000561bf) fps_text_pane_t1

0xdd29,	// (0x0005a8ea) cam4_image_uncrop_pane_g1

0xdd32,	// (0x0005a8f3) cam4_image_uncrop_pane_g2

0x66e3,	// (0x000532a4) cam4_image_uncrop_pane_g3

0x66ec,	// (0x000532ad) cam4_image_uncrop_pane_g4

0x0003,

0xf901,	// (0x0005c4c2) cam4_image_uncrop_pane_g

0x93c6,	// (0x00055f87) dia3_listrow_pane_ParamLimits

0x9847,	// (0x00056408) main_phob2_pane

0x886c,	// (0x0005542d) cell_tport_appsw_pane_cp02_ParamLimits

0x886c,	// (0x0005542d) cell_tport_appsw_pane_cp02

0x8880,	// (0x00055441) cell_tport_appsw_pane_cp03_ParamLimits

0x8880,	// (0x00055441) cell_tport_appsw_pane_cp03

0x9847,	// (0x00056408) phob2_contact_card_pane

0x9847,	// (0x00056408) phob2_listscroll_pane

0xefa1,	// (0x0005bb62) phob2_list_pane

0xefa9,	// (0x0005bb6a) scroll_pane_cp034

0x9616,	// (0x000561d7) phob2_cc_data_pane_ParamLimits

0x9616,	// (0x000561d7) phob2_cc_data_pane

0x9635,	// (0x000561f6) phob2_cc_listscroll_pane_ParamLimits

0x9635,	// (0x000561f6) phob2_cc_listscroll_pane

0x91d4,	// (0x00055d95) list_double_large_graphic_phob2_pane_ParamLimits

0x91d4,	// (0x00055d95) list_double_large_graphic_phob2_pane

0x9653,	// (0x00056214) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9653,	// (0x00056214) list_double_large_graphic_phob2_pane_g1

0x116a,	// (0x0004dd2b) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x116a,	// (0x0004dd2b) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfe89,	// (0x0005ca4a) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfe89,	// (0x0005ca4a) list_double_large_graphic_phob2_pane_g

0x1176,	// (0x0004dd37) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x1176,	// (0x0004dd37) list_double_large_graphic_phob2_pane_t1

0x118c,	// (0x0004dd4d) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x118c,	// (0x0004dd4d) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfe8e,	// (0x0005ca4f) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfe8e,	// (0x0005ca4f) list_double_large_graphic_phob2_pane_t

0x9847,	// (0x00056408) list_highlight_pane_cp024

0x9669,	// (0x0005622a) phob2_cc_button_pane

0x9671,	// (0x00056232) phob2_cc_data_pane_g1_ParamLimits

0x9671,	// (0x00056232) phob2_cc_data_pane_g1

0x9686,	// (0x00056247) phob2_cc_data_pane_g2_ParamLimits

0x9686,	// (0x00056247) phob2_cc_data_pane_g2

0x0001,

0xfe93,	// (0x0005ca54) phob2_cc_data_pane_g_ParamLimits

0xfe93,	// (0x0005ca54) phob2_cc_data_pane_g

0x9696,	// (0x00056257) phob2_cc_data_pane_t1_ParamLimits

0x9696,	// (0x00056257) phob2_cc_data_pane_t1

0x96ae,	// (0x0005626f) phob2_cc_data_pane_t2_ParamLimits

0x96ae,	// (0x0005626f) phob2_cc_data_pane_t2

0x96c6,	// (0x00056287) phob2_cc_data_pane_t3_ParamLimits

0x96c6,	// (0x00056287) phob2_cc_data_pane_t3

0x0002,

0xfe98,	// (0x0005ca59) phob2_cc_data_pane_t_ParamLimits

0xfe98,	// (0x0005ca59) phob2_cc_data_pane_t

0xefb1,	// (0x0005bb72) phob2_cc_list_pane_ParamLimits

0xefb1,	// (0x0005bb72) phob2_cc_list_pane

0xdd4d,	// (0x0005a90e) scroll_pane_cp035_ParamLimits

0xdd4d,	// (0x0005a90e) scroll_pane_cp035

0xa3b1,	// (0x00056f72) bg_button_pane_cp033

0xefbd,	// (0x0005bb7e) phob2_cc_button_pane_g1

0xefc9,	// (0x0005bb8a) phob2_cc_button_pane_t1

0xefde,	// (0x0005bb9f) phob2_cc_button_pane_t2

0x0001,

0x0332,	// (0x0004cef3) phob2_cc_button_pane_t

0x96de,	// (0x0005629f) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x96de,	// (0x0005629f) list_double_large_graphic_phob2_cc_pane

0x9710,	// (0x000562d1) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9710,	// (0x000562d1) list_double_large_graphic_phob2_cc_pane_g1

0x11a1,	// (0x0004dd62) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x11a1,	// (0x0004dd62) list_double_large_graphic_phob2_cc_pane_g2

0x11ad,	// (0x0004dd6e) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x11ad,	// (0x0004dd6e) list_double_large_graphic_phob2_cc_pane_g3

0x11b9,	// (0x0004dd7a) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x11b9,	// (0x0004dd7a) list_double_large_graphic_phob2_cc_pane_g4

0x11c5,	// (0x0004dd86) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x11c5,	// (0x0004dd86) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe9f,	// (0x0005ca60) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe9f,	// (0x0005ca60) list_double_large_graphic_phob2_cc_pane_g

0x11d1,	// (0x0004dd92) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x11d1,	// (0x0004dd92) list_double_large_graphic_phob2_cc_pane_t1

0x11fa,	// (0x0004ddbb) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x11fa,	// (0x0004ddbb) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfeaa,	// (0x0005ca6b) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfeaa,	// (0x0005ca6b) list_double_large_graphic_phob2_cc_pane_t

0xeff0,	// (0x0005bbb1) list_highlight_pane_cp025_ParamLimits

0xeff0,	// (0x0005bbb1) list_highlight_pane_cp025

0xa3b1,	// (0x00056f72) bg_button_pane_cp033_ParamLimits

0xefbd,	// (0x0005bb7e) phob2_cc_button_pane_g1_ParamLimits

0xefc9,	// (0x0005bb8a) phob2_cc_button_pane_t1_ParamLimits

0xefde,	// (0x0005bb9f) phob2_cc_button_pane_t2_ParamLimits

0x0332,	// (0x0004cef3) phob2_cc_button_pane_t_ParamLimits

0x146c,	// (0x0004e02d) popup_wgtman_window

0xd82f,	// (0x0005a3f0) scroll_pane_cp038

0x914d,	// (0x00055d0e) wgtman_btn_pane_cp_01_ParamLimits

0x914d,	// (0x00055d0e) wgtman_btn_pane_cp_01

0xeffe,	// (0x0005bbbf) wgtman_content_pane

0xf007,	// (0x0005bbc8) wgtman_heading_pane

0x9847,	// (0x00056408) bg_heading_pane_cp02

0xf010,	// (0x0005bbd1) wgtman_heading_pane_g1

0xf018,	// (0x0005bbd9) wgtman_heading_pane_t1

0xf026,	// (0x0005bbe7) scroll_pane_cp036

0xf02e,	// (0x0005bbef) wgtman_list_pane

0xe653,	// (0x0005b214) wgtman_list_pane_t1_ParamLimits

0xe653,	// (0x0005b214) wgtman_list_pane_t1

0xa064,	// (0x00056c25) cam4_grid_pane

0x0778,	// (0x0004d339) bg_button_pane_cp015_ParamLimits

0x7312,	// (0x00053ed3) bg_button_pane_cp016_ParamLimits

0x7325,	// (0x00053ee6) bg_button_pane_cp017_ParamLimits

0x07c0,	// (0x0004d381) popup_vitu2_query_window_g3_ParamLimits

0x07c0,	// (0x0004d381) popup_vitu2_query_window_g3

0x083b,	// (0x0004d3fc) popup_vitu2_query_window_t6_ParamLimits

0x083b,	// (0x0004d3fc) popup_vitu2_query_window_t6

0x0866,	// (0x0004d427) popup_vitu2_query_window_t7_ParamLimits

0x0866,	// (0x0004d427) popup_vitu2_query_window_t7

0xdd29,	// (0x0005a8ea) cam4_grid_pane_g1

0xdd32,	// (0x0005a8f3) cam4_grid_pane_g2

0xf036,	// (0x0005bbf7) cam4_grid_pane_g3

0xf03f,	// (0x0005bc00) cam4_grid_pane_g4

0x0003,

0xfeaf,	// (0x0005ca70) cam4_grid_pane_g

0x227b,	// (0x0004ee3c) aid_placing_vt_slider_lsc_ParamLimits

0x2578,	// (0x0004f139) vidtel_button_pane_ParamLimits

0x2578,	// (0x0004f139) vidtel_button_pane

0x9847,	// (0x00056408) bg_button_pane_cp034

0xf04a,	// (0x0005bc0b) vidtel_button_pane_g1

0xf052,	// (0x0005bc13) vidtel_button_pane_t1

0xd949,	// (0x0005a50a) aid_size_vtel_slider_touch

0xdd4d,	// (0x0005a90e) scroll_pane_cp039

0x8058,	// (0x00054c19) ncim_query_button_pane_cp01_ParamLimits

0x8077,	// (0x00054c38) ncimui_query_pane_g1_ParamLimits

0xa3b1,	// (0x00056f72) input_focus_pane_cp012_ParamLimits

0xe250,	// (0x0005ae11) ncim_query_entry_pane_t1_ParamLimits

0xdd4d,	// (0x0005a90e) scroll_pane_cp039_ParamLimits

0xb3ba,	// (0x00057f7b) navi_pane_bcale_mc_g1

0xb3c2,	// (0x00057f83) navi_pane_bcale_mc_t1

0xe805,	// (0x0005b3c6) main_sp_fs_email_pane_g1

0xe811,	// (0x0005b3d2) main_sp_fs_email_pane_g2

0x0001,

0x00d8,	// (0x0004cc99) main_sp_fs_email_pane_g

0xea70,	// (0x0005b631) list_single_cale_mrui_row_pane_g3_ParamLimits

0xea70,	// (0x0005b631) list_single_cale_mrui_row_pane_g3

0x10dd,	// (0x0004dc9e) list_single_recal_day_pane_g5_event_pane

0xa338,	// (0x00056ef9) list_single_recal_day_pane_g7

0xf068,	// (0x0005bc29) list_recal_day_event_pane_cp01

0xf071,	// (0x0005bc32) list_recal_vselct_arw_lo_pane_cp01

0xf079,	// (0x0005bc3a) list_recal_vselct_arw_up_pane_cp01

0xf081,	// (0x0005bc42) list_recal_vselct_pane_cp01

0xd959,	// (0x0005a51a) list_recal_day_event_pane_cp01_g1

0xa3a3,	// (0x00056f64) list_recal_day_event_pane_cp01_t1

0xa340,	// (0x00056f01) list_single_recal_day_pane_t1_ParamLimits

0xa352,	// (0x00056f13) list_single_recal_day_pane_t2_ParamLimits

0xfdfb,	// (0x0005c9bc) list_single_recal_day_pane_t_ParamLimits

0xa811,	// (0x000573d2) bg_notes_pane_ParamLimits

0xa8c0,	// (0x00057481) list_notes_pane_ParamLimits

0x17ad,	// (0x0004e36e) scroll_pane_cp06_ParamLimits

0xa8e2,	// (0x000574a3) main_notes_pane_ParamLimits

0x9847,	// (0x00056408) main_welc_pane

0x971c,	// (0x000562dd) main_welc_body_pane_ParamLimits

0x971c,	// (0x000562dd) main_welc_body_pane

0x9739,	// (0x000562fa) main_welc_opti_pane_ParamLimits

0x9739,	// (0x000562fa) main_welc_opti_pane

0x977e,	// (0x0005633f) main_welc_pane_t1_ParamLimits

0x977e,	// (0x0005633f) main_welc_pane_t1

0x979c,	// (0x0005635d) main_welc_body_row_pane_ParamLimits

0x979c,	// (0x0005635d) main_welc_body_row_pane

0xdd1b,	// (0x0005a8dc) main_welc_opti_row_pane_ParamLimits

0xdd1b,	// (0x0005a8dc) main_welc_opti_row_pane

0xf08b,	// (0x0005bc4c) main_welc_opti_row_pane_g1

0x97b1,	// (0x00056372) main_welc_opti_row_pane_t1

0xf093,	// (0x0005bc54) main_welc_body_row_pane_t1

0xedc3,	// (0x0005b984) popup_notif_wgt_heading_pane

0xeddd,	// (0x0005b99e) aid_size_list_notif_wgt_del_ParamLimits

0xedea,	// (0x0005b9ab) list_notif_wgt_row_pane_g1_ParamLimits

0xedf6,	// (0x0005b9b7) list_notif_wgt_row_pane_g2_ParamLimits

0xee05,	// (0x0005b9c6) list_notif_wgt_row_pane_g3_ParamLimits

0x029c,	// (0x0004ce5d) list_notif_wgt_row_pane_g_ParamLimits

0xee12,	// (0x0005b9d3) list_notif_wgt_row_pane_t1_ParamLimits

0xee28,	// (0x0005b9e9) list_notif_wgt_row_pane_t2_ParamLimits

0xee3a,	// (0x0005b9fb) list_notif_wgt_row_pane_t3_ParamLimits

0x02a3,	// (0x0004ce64) list_notif_wgt_row_pane_t_ParamLimits

0x91e6,	// (0x00055da7) listrow_wgtman_pane_g1_ParamLimits

0x91f3,	// (0x00055db4) listrow_wgtman_pane_g2_ParamLimits

0xfe42,	// (0x0005ca03) listrow_wgtman_pane_g_ParamLimits

0x111a,	// (0x0004dcdb) listrow_wgtman_pane_t1_ParamLimits

0x1132,	// (0x0004dcf3) listrow_wgtman_pane_t2_ParamLimits

0xfe47,	// (0x0005ca08) listrow_wgtman_pane_t_ParamLimits

0x1158,	// (0x0004dd19) wait_bar_pane_cp09_ParamLimits

0x9847,	// (0x00056408) bg_popup_heading_pane_cp02

0xf0a2,	// (0x0005bc63) popup_notif_wgt_heading_pane_g1

0xf0aa,	// (0x0005bc6b) popup_notif_wgt_heading_pane_t1

0x9847,	// (0x00056408) main_vids_pane

0x9847,	// (0x00056408) vids_listscroll_pane

0x97c0,	// (0x00056381) scroll_pane_cp040

0x9847,	// (0x00056408) vids_list_pane

0x97cb,	// (0x0005638c) vids_list_double_pane_ParamLimits

0x97cb,	// (0x0005638c) vids_list_double_pane

0x97dc,	// (0x0005639d) vids_list_double_pane_g1

0x97e5,	// (0x000563a6) vids_list_double_pane_t1

0x97f5,	// (0x000563b6) vids_list_double_pane_t2

0x0001,

0xfebd,	// (0x0005ca7e) vids_list_double_pane_t

0xa3b1,	// (0x00056f72) main_ncimui_pane_ParamLimits

0x7e8e,	// (0x00054a4f) main_ncimui_pane_g1_ParamLimits

0x7e9a,	// (0x00054a5b) main_ncimui_pane_g2_ParamLimits

0x7e9a,	// (0x00054a5b) main_ncimui_pane_g2

0x0001,

0xfbfd,	// (0x0005c7be) main_ncimui_pane_g_ParamLimits

0xfbfd,	// (0x0005c7be) main_ncimui_pane_g

0x9754,	// (0x00056315) main_welc_pane_g1_ParamLimits

0x9754,	// (0x00056315) main_welc_pane_g1

0x9769,	// (0x0005632a) main_welc_pane_g2_ParamLimits

0x9769,	// (0x0005632a) main_welc_pane_g2

0x0001,

0xfeb8,	// (0x0005ca79) main_welc_pane_g_ParamLimits

0xfeb8,	// (0x0005ca79) main_welc_pane_g

0xa811,	// (0x000573d2) listscroll_mce_pane_ParamLimits

0xb50f,	// (0x000580d0) wait_bar_pane_cp10

0xc956,	// (0x00059517) main_cale_day_pane_ParamLimits

0xc956,	// (0x00059517) main_cale_week_pane_ParamLimits

0xa811,	// (0x000573d2) main_messa_pane_ParamLimits

0x5981,	// (0x00052542) main_clock2_btn_pane_ParamLimits

0x5981,	// (0x00052542) main_clock2_btn_pane

0xd137,	// (0x00059cf8) main_clock2_btn_pane_cp01_ParamLimits

0xd137,	// (0x00059cf8) main_clock2_btn_pane_cp01

0xea41,	// (0x0005b602) list_cale_mrui_pane_ParamLimits

0xee70,	// (0x0005ba31) main_cf0_pane_g2

0x0001,

0x02aa,	// (0x0004ce6b) main_cf0_pane_g

0x93e8,	// (0x00055fa9) area_left_week_number_pane_ParamLimits

0x93f4,	// (0x00055fb5) area_top_day_name_pane_ParamLimits

0x9407,	// (0x00055fc8) frame_month_view_pane_ParamLimits

0xef66,	// (0x0005bb27) grid_month_view_pane_ParamLimits

0xef74,	// (0x0005bb35) frm_month_g1_ParamLimits

0x9488,	// (0x00056049) frm_month_g2_ParamLimits

0x949b,	// (0x0005605c) frm_month_g3_ParamLimits

0x94ae,	// (0x0005606f) frm_month_g4_ParamLimits

0x94c1,	// (0x00056082) frm_month_g5_ParamLimits

0x94d4,	// (0x00056095) frm_month_g6_ParamLimits

0x94e7,	// (0x000560a8) frm_month_g7_ParamLimits

0xef81,	// (0x0005bb42) frm_month_g8_ParamLimits

0x94fa,	// (0x000560bb) frm_month_g9_ParamLimits

0x950a,	// (0x000560cb) frm_month_g10_ParamLimits

0x951a,	// (0x000560db) frm_month_g11_ParamLimits

0x952a,	// (0x000560eb) frm_month_g12_ParamLimits

0x953c,	// (0x000560fd) frm_month_g13_ParamLimits

0x954e,	// (0x0005610f) frm_month_g14_ParamLimits

0x9562,	// (0x00056123) frm_month_g15_ParamLimits

0x9576,	// (0x00056137) frm_month_g16_ParamLimits

0xfe68,	// (0x0005ca29) frm_month_g_ParamLimits

0xef8e,	// (0x0005bb4f) cell_top_day_name_pane_t1_ParamLimits

0x958a,	// (0x0005614b) cell_area_left_week_number_pane_g1_ParamLimits

0x9596,	// (0x00056157) cell_area_left_week_number_pane_t1_ParamLimits

0xcfaf,	// (0x00059b70) cell_month_view_pane_g1_ParamLimits

0x95a9,	// (0x0005616a) cell_month_view_pane_t1_ParamLimits

0xa809,	// (0x000573ca) main_clock2_btn_pane_g1

0xf0b8,	// (0x0005bc79) main_clock2_btn_pane_t1

0xa3b1,	// (0x00056f72) listscroll_cmail_pane_ParamLimits

0xe805,	// (0x0005b3c6) main_sp_fs_email_pane_g1_ParamLimits

0xe811,	// (0x0005b3d2) main_sp_fs_email_pane_g2_ParamLimits

0x00d8,	// (0x0004cc99) main_sp_fs_email_pane_g_ParamLimits

0xeb4f,	// (0x0005b710) list_recal_day_pane_ParamLimits

0xeb60,	// (0x0005b721) mian_recal_day_pane_t1

0x0cea,	// (0x0004d8ab) list_single_dyc_row_text_pane_t4_ParamLimits

0x0cea,	// (0x0004d8ab) list_single_dyc_row_text_pane_t4

0x0d33,	// (0x0004d8f4) list_single_dyc_row_text_pane_t5_ParamLimits

0x0d33,	// (0x0004d8f4) list_single_dyc_row_text_pane_t5

0x8757,	// (0x00055318) list_single_dyc_row_text_pane_t6_ParamLimits

0x8757,	// (0x00055318) list_single_dyc_row_text_pane_t6

0x2ffc,	// (0x0004fbbd) aid_mgn_list_cale_time_pane

0xa3b1,	// (0x00056f72) main_gallery2_pane_ParamLimits

0xd14d,	// (0x00059d0e) main_clock2_pane_cp01_t1

0xd15b,	// (0x00059d1c) main_clock2_pane_cp01_t3

0x0001,

0xf7d3,	// (0x0005c394) main_clock2_pane_cp01_t

0x1b2a,	// (0x0004e6eb) cale_week_scroll_pane_g16_ParamLimits

0x1b2a,	// (0x0004e6eb) cale_week_scroll_pane_g16

0xaace,	// (0x0005768f) vorec_slider_pane

0xf052,	// (0x0005bc13) vidtel_button_pane_t1_ParamLimits

0x8dc1,	// (0x00055982) main_fs_bigclock_clock_pane_g1_ParamLimits

0x8dc1,	// (0x00055982) main_fs_bigclock_clock_pane_g2_ParamLimits

0x8dd2,	// (0x00055993) main_fs_bigclock_clock_pane_g3_ParamLimits

0x8dd2,	// (0x00055993) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe05,	// (0x0005c9c6) main_fs_bigclock_clock_pane_g_ParamLimits

0x8de5,	// (0x000559a6) main_fs_bigclock_clock_pane_t1_ParamLimits

0x8dfb,	// (0x000559bc) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe0e,	// (0x0005c9cf) main_fs_bigclock_clock_pane_t_ParamLimits

0x517f,	// (0x00051d40) main_mup3_lyrics_pane_ParamLimits

0x517f,	// (0x00051d40) main_mup3_lyrics_pane

0x982b,	// (0x000563ec) main_mup3_lyrics_pane_t1_ParamLimits

0x982b,	// (0x000563ec) main_mup3_lyrics_pane_t1

0x9db6,	// (0x00056977) aid_main_mp4_pane_t1_area

0x9dc0,	// (0x00056981) aid_main_mp4_pane_t2_area

0x9e6c,	// (0x00056a2d) main_mp4_pane_g7_ParamLimits

0x9e6c,	// (0x00056a2d) main_mp4_pane_g7

0x9e78,	// (0x00056a39) main_mp4_pane_g8_ParamLimits

0x9e78,	// (0x00056a39) main_mp4_pane_g8

0x64b2,	// (0x00053073) aid_call6_pane_g1_size

0x96f9,	// (0x000562ba) list_double_large_graphic_phob2_other_pane_ParamLimits

0x96f9,	// (0x000562ba) list_double_large_graphic_phob2_other_pane

0xb2eb,	// (0x00057eac) list_double_large_graphic_phob2_other_pane_g1

0x9847,	// (0x00056408) list_highlight_pane_cp026
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
	};

} // end of namespace AknLayoutScalable_Elaf_pnl4_apps_nhd4_lsc_tch_Small

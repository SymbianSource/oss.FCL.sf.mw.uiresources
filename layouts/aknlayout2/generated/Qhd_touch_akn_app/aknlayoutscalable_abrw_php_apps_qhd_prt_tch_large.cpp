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

#include "aknlayoutscalable_abrw_php_apps_qhd_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_php_apps_qhd_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0007cf7d };

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
0x5978,	// (0x000828f5) Screen

0x5984,	// (0x00082901) application_window

0x59c4,	// (0x00082941) area_bottom_pane_ParamLimits

0x59c4,	// (0x00082941) area_bottom_pane

0x59f9,	// (0x00082976) area_top_pane_ParamLimits

0x59f9,	// (0x00082976) area_top_pane

0xda70,	// (0x0008a9ed) call_video_uplink_pane_ParamLimits

0xda70,	// (0x0008a9ed) call_video_uplink_pane

0x5a86,	// (0x00082a03) main_pane_ParamLimits

0x5a86,	// (0x00082a03) main_pane

0x1740,	// (0x0007e6bd) context_pane

0x8b4f,	// (0x00085acc) navi_pane

0x8b6f,	// (0x00085aec) popup_cale_events_window_ParamLimits

0x8b6f,	// (0x00085aec) popup_cale_events_window

0x1753,	// (0x0007e6d0) popup_mup_playback_window

0x8b87,	// (0x00085b04) signal_pane

0xe1d3,	// (0x0008b150) main_browser_pane

0xecb2,	// (0x0008bc2f) main_burst_pane

0x8a19,	// (0x00085996) main_calc_pane

0xecb2,	// (0x0008bc2f) main_cale_day_pane

0xe1d3,	// (0x0008b150) main_cale_month_pane

0xecb2,	// (0x0008bc2f) main_cale_week_pane

0xecb2,	// (0x0008bc2f) main_call_pane

0xdea1,	// (0x0008ae1e) main_call_poc_pane

0xecb2,	// (0x0008bc2f) main_camera_pane

0xecb2,	// (0x0008bc2f) main_chi_dic_pane

0xeb37,	// (0x0008bab4) main_clock_pane

0xdea1,	// (0x0008ae1e) main_fmradio_pane

0xecb2,	// (0x0008bc2f) main_graph_messa_pane

0xdea1,	// (0x0008ae1e) main_help_pane

0xe1d3,	// (0x0008b150) main_im_pane

0xe0fc,	// (0x0008b079) main_image_pane_ParamLimits

0xe0fc,	// (0x0008b079) main_image_pane

0xdea1,	// (0x0008ae1e) main_location2_pane

0xecb2,	// (0x0008bc2f) main_location_pane

0xdea1,	// (0x0008ae1e) main_messa_pane

0xdea1,	// (0x0008ae1e) main_mp2_pane

0xecb2,	// (0x0008bc2f) main_mp_pane

0xdea1,	// (0x0008ae1e) main_msg_pane

0xdea1,	// (0x0008ae1e) main_mup_eq_pane

0xdea1,	// (0x0008ae1e) main_mup_pane

0xecb2,	// (0x0008bc2f) main_notes_pane

0xdea1,	// (0x0008ae1e) main_pec_pane

0xdea1,	// (0x0008ae1e) main_phob_pane

0xdea1,	// (0x0008ae1e) main_pinb_pane

0xdea1,	// (0x0008ae1e) main_postcard_pane

0xdea1,	// (0x0008ae1e) main_qdial_pane

0xecb2,	// (0x0008bc2f) main_skin_pane

0xdea1,	// (0x0008ae1e) main_smil2_pane

0xecb2,	// (0x0008bc2f) main_smil_pane

0xecb2,	// (0x0008bc2f) main_video_pane

0xecb2,	// (0x0008bc2f) main_video_tele_pane

0xe0fc,	// (0x0008b079) main_viewer_pane_ParamLimits

0xe0fc,	// (0x0008b079) main_viewer_pane

0xecb2,	// (0x0008bc2f) main_vorec_pane

0x8a4f,	// (0x000859cc) popup_blid_sat_info_window_ParamLimits

0x8a4f,	// (0x000859cc) popup_blid_sat_info_window

0x8a65,	// (0x000859e2) popup_dyc_status_message_window_ParamLimits

0x8a65,	// (0x000859e2) popup_dyc_status_message_window

0x8a75,	// (0x000859f2) popup_grid_large_graphic_window_ParamLimits

0x8a75,	// (0x000859f2) popup_grid_large_graphic_window

0x8aeb,	// (0x00085a68) popup_loc_request_window_ParamLimits

0x8aeb,	// (0x00085a68) popup_loc_request_window

0x8b27,	// (0x00085aa4) popup_wml_address_window_ParamLimits

0x8b27,	// (0x00085aa4) popup_wml_address_window

0x88f1,	// (0x0008586e) call_muted_g1

0x85b3,	// (0x00085530) popup_call_audio_conf_window_ParamLimits

0x85b3,	// (0x00085530) popup_call_audio_conf_window

0x8901,	// (0x0008587e) popup_call_audio_first_window_ParamLimits

0x8901,	// (0x0008587e) popup_call_audio_first_window

0x8941,	// (0x000858be) popup_call_audio_in_window_ParamLimits

0x8941,	// (0x000858be) popup_call_audio_in_window

0x8965,	// (0x000858e2) popup_call_audio_out_window_ParamLimits

0x8965,	// (0x000858e2) popup_call_audio_out_window

0x8987,	// (0x00085904) popup_call_audio_second_window_ParamLimits

0x8987,	// (0x00085904) popup_call_audio_second_window

0x89b7,	// (0x00085934) popup_call_audio_wait_window_ParamLimits

0x89b7,	// (0x00085934) popup_call_audio_wait_window

0x89d8,	// (0x00085955) popup_number_entry_window_ParamLimits

0x89d8,	// (0x00085955) popup_number_entry_window

0xda8e,	// (0x0008aa0b) bg_popup_call_pane_cp05_ParamLimits

0xda8e,	// (0x0008aa0b) bg_popup_call_pane_cp05

0xdaae,	// (0x0008aa2b) popup_number_entry_window_t1

0xdac1,	// (0x0008aa3e) popup_number_entry_window_t2

0xdad3,	// (0x0008aa50) popup_number_entry_window_t3

0x0003,

0xf0ec,	// (0x0008c069) popup_number_entry_window_t

0xdae5,	// (0x0008aa62) text_title_cp2

0xdaf8,	// (0x0008aa75) bg_popup_call_pane_cp_ParamLimits

0xdaf8,	// (0x0008aa75) bg_popup_call_pane_cp

0xdb06,	// (0x0008aa83) call_thumbnail_pane

0xdb0e,	// (0x0008aa8b) popup_call_audio_in_window_g1_ParamLimits

0xdb0e,	// (0x0008aa8b) popup_call_audio_in_window_g1

0xdb1a,	// (0x0008aa97) popup_call_audio_in_window_g2_ParamLimits

0xdb1a,	// (0x0008aa97) popup_call_audio_in_window_g2

0xdb26,	// (0x0008aaa3) popup_call_audio_in_window_g3_ParamLimits

0xdb26,	// (0x0008aaa3) popup_call_audio_in_window_g3

0x0002,

0xf0f5,	// (0x0008c072) popup_call_audio_in_window_g_ParamLimits

0xf0f5,	// (0x0008c072) popup_call_audio_in_window_g

0xdb32,	// (0x0008aaaf) popup_call_audio_in_window_t1_ParamLimits

0xdb32,	// (0x0008aaaf) popup_call_audio_in_window_t1

0xdb4e,	// (0x0008aacb) popup_call_audio_in_window_t2_ParamLimits

0xdb4e,	// (0x0008aacb) popup_call_audio_in_window_t2

0xdb6a,	// (0x0008aae7) popup_call_audio_in_window_t3_ParamLimits

0xdb6a,	// (0x0008aae7) popup_call_audio_in_window_t3

0x0002,

0xf0fc,	// (0x0008c079) popup_call_audio_in_window_t_ParamLimits

0xf0fc,	// (0x0008c079) popup_call_audio_in_window_t

0xdaf8,	// (0x0008aa75) bg_popup_call_pane_cp01_ParamLimits

0xdaf8,	// (0x0008aa75) bg_popup_call_pane_cp01

0xdb06,	// (0x0008aa83) call_thumbnail_pane_cp02

0xdb7d,	// (0x0008aafa) call_type_pane_cp022

0xdb85,	// (0x0008ab02) popup_call_audio_out_window_g1_ParamLimits

0xdb85,	// (0x0008ab02) popup_call_audio_out_window_g1

0xdb97,	// (0x0008ab14) popup_call_audio_out_window_g2_ParamLimits

0xdb97,	// (0x0008ab14) popup_call_audio_out_window_g2

0xdba3,	// (0x0008ab20) popup_call_audio_out_window_g3_ParamLimits

0xdba3,	// (0x0008ab20) popup_call_audio_out_window_g3

0x0002,

0xf103,	// (0x0008c080) popup_call_audio_out_window_g_ParamLimits

0xf103,	// (0x0008c080) popup_call_audio_out_window_g

0xdbb5,	// (0x0008ab32) popup_call_audio_out_window_t1_ParamLimits

0xdbb5,	// (0x0008ab32) popup_call_audio_out_window_t1

0xdbcd,	// (0x0008ab4a) popup_call_audio_out_window_t2_ParamLimits

0xdbcd,	// (0x0008ab4a) popup_call_audio_out_window_t2

0x0001,

0xf10a,	// (0x0008c087) popup_call_audio_out_window_t_ParamLimits

0xf10a,	// (0x0008c087) popup_call_audio_out_window_t

0xdbe2,	// (0x0008ab5f) bg_popup_call_pane_ParamLimits

0xdbe2,	// (0x0008ab5f) bg_popup_call_pane

0x5c73,	// (0x00082bf0) call_thumbnail_pane_cp_ParamLimits

0x5c73,	// (0x00082bf0) call_thumbnail_pane_cp

0xdc66,	// (0x0008abe3) call_type_pane_cp01_ParamLimits

0xdc66,	// (0x0008abe3) call_type_pane_cp01

0xdcaa,	// (0x0008ac27) popup_call_audio_first_window_g1_ParamLimits

0xdcaa,	// (0x0008ac27) popup_call_audio_first_window_g1

0xdcf6,	// (0x0008ac73) popup_call_audio_first_window_g2_ParamLimits

0xdcf6,	// (0x0008ac73) popup_call_audio_first_window_g2

0x0001,

0xf10f,	// (0x0008c08c) popup_call_audio_first_window_g_ParamLimits

0xf10f,	// (0x0008c08c) popup_call_audio_first_window_g

0xdd3a,	// (0x0008acb7) popup_call_audio_first_window_t1_ParamLimits

0xdd3a,	// (0x0008acb7) popup_call_audio_first_window_t1

0xdde6,	// (0x0008ad63) popup_call_audio_first_window_t4_ParamLimits

0xdde6,	// (0x0008ad63) popup_call_audio_first_window_t4

0xde72,	// (0x0008adef) popup_call_audio_first_window_t5_ParamLimits

0xde72,	// (0x0008adef) popup_call_audio_first_window_t5

0x0002,

0xf114,	// (0x0008c091) popup_call_audio_first_window_t_ParamLimits

0xf114,	// (0x0008c091) popup_call_audio_first_window_t

0xdea1,	// (0x0008ae1e) bg_popup_call_pane_cp02

0xdeab,	// (0x0008ae28) call_type_pane_cp023

0xdeb3,	// (0x0008ae30) popup_call_audio_wait_window_g1

0xdebb,	// (0x0008ae38) popup_call_audio_wait_window_g2

0x0001,

0xf11b,	// (0x0008c098) popup_call_audio_wait_window_g

0xdec3,	// (0x0008ae40) popup_call_audio_wait_window_t3

0xded1,	// (0x0008ae4e) bg_popup_call_pane_cp03_ParamLimits

0xded1,	// (0x0008ae4e) bg_popup_call_pane_cp03

0xdf31,	// (0x0008aeae) call_thumbnail_pane_cp011_ParamLimits

0xdf31,	// (0x0008aeae) call_thumbnail_pane_cp011

0xdf3d,	// (0x0008aeba) call_type_pane_cp034_ParamLimits

0xdf3d,	// (0x0008aeba) call_type_pane_cp034

0xdf79,	// (0x0008aef6) popup_call_audio_second_window_g1_ParamLimits

0xdf79,	// (0x0008aef6) popup_call_audio_second_window_g1

0xdfb5,	// (0x0008af32) popup_call_audio_second_window_g2_ParamLimits

0xdfb5,	// (0x0008af32) popup_call_audio_second_window_g2

0x0001,

0xf120,	// (0x0008c09d) popup_call_audio_second_window_g_ParamLimits

0xf120,	// (0x0008c09d) popup_call_audio_second_window_g

0xdff1,	// (0x0008af6e) popup_call_audio_second_window_t1_ParamLimits

0xdff1,	// (0x0008af6e) popup_call_audio_second_window_t1

0xe072,	// (0x0008afef) popup_call_audio_second_window_t2_ParamLimits

0xe072,	// (0x0008afef) popup_call_audio_second_window_t2

0xe0a8,	// (0x0008b025) popup_call_audio_second_window_t3_ParamLimits

0xe0a8,	// (0x0008b025) popup_call_audio_second_window_t3

0x0002,

0xf125,	// (0x0008c0a2) popup_call_audio_second_window_t_ParamLimits

0xf125,	// (0x0008c0a2) popup_call_audio_second_window_t

0xdea1,	// (0x0008ae1e) bg_popup_call_pane_cp04

0xe0de,	// (0x0008b05b) list_conf_pane

0xe0e6,	// (0x0008b063) popup_call_audio_conf_window_t1

0xe0f4,	// (0x0008b071) call_thumbnail_pane_g1

0xe0fc,	// (0x0008b079) bg_pinb_pane_ParamLimits

0xe0fc,	// (0x0008b079) bg_pinb_pane

0xe10a,	// (0x0008b087) find_pinb_pane

0xe113,	// (0x0008b090) listscroll_pinb_pane_ParamLimits

0xe113,	// (0x0008b090) listscroll_pinb_pane

0xe122,	// (0x0008b09f) pinb_bg_pane_g1

0x5c97,	// (0x00082c14) pinb_bg_pane_g2

0x5ca3,	// (0x00082c20) pinb_bg_pane_g3

0x5caf,	// (0x00082c2c) pinb_bg_pane_g4

0x5cbb,	// (0x00082c38) pinb_bg_pane_g5

0x5cc7,	// (0x00082c44) pinb_bg_pane_g6

0x5cd2,	// (0x00082c4f) pinb_bg_pane_g7

0x5cdd,	// (0x00082c5a) pinb_bg_pane_g8

0x5ce8,	// (0x00082c65) pinb_bg_pane_g9

0x5cf2,	// (0x00082c6f) pinb_bg_pane_g10

0x0009,

0xf12c,	// (0x0008c0a9) pinb_bg_pane_g

0x5d0f,	// (0x00082c8c) grid_pinb_pane

0x5d1a,	// (0x00082c97) list_pinb_pane

0x5d25,	// (0x00082ca2) scroll_pane_cp01_ParamLimits

0x5d25,	// (0x00082ca2) scroll_pane_cp01

0xe12c,	// (0x0008b0a9) find_pinb_pane_g1_ParamLimits

0xe12c,	// (0x0008b0a9) find_pinb_pane_g1

0xe144,	// (0x0008b0c1) find_pinb_pane_t1

0xe156,	// (0x0008b0d3) find_pinb_pane_t2

0x0001,

0xf146,	// (0x0008c0c3) find_pinb_pane_t

0xe16b,	// (0x0008b0e8) input_focus_pane_cp01_ParamLimits

0xe16b,	// (0x0008b0e8) input_focus_pane_cp01

0x5d37,	// (0x00082cb4) cell_pinb_pane_ParamLimits

0x5d37,	// (0x00082cb4) cell_pinb_pane

0x5d5c,	// (0x00082cd9) cell_pinb_pane_g1_ParamLimits

0x5d5c,	// (0x00082cd9) cell_pinb_pane_g1

0x5d71,	// (0x00082cee) cell_pinb_pane_g2_ParamLimits

0x5d71,	// (0x00082cee) cell_pinb_pane_g2

0xe177,	// (0x0008b0f4) cell_pinb_pane_g3_ParamLimits

0xe177,	// (0x0008b0f4) cell_pinb_pane_g3

0x0002,

0xf14b,	// (0x0008c0c8) cell_pinb_pane_g_ParamLimits

0xf14b,	// (0x0008c0c8) cell_pinb_pane_g

0xdea1,	// (0x0008ae1e) grid_highlight_pane_cp01

0x5d7d,	// (0x00082cfa) list_pinb_item_pane_ParamLimits

0x5d7d,	// (0x00082cfa) list_pinb_item_pane

0xdea1,	// (0x0008ae1e) list_highlight_pane_cp02

0x5d9d,	// (0x00082d1a) list_pinb_item_pane_g1_ParamLimits

0x5d9d,	// (0x00082d1a) list_pinb_item_pane_g1

0xe183,	// (0x0008b100) list_pinb_item_pane_g2_ParamLimits

0xe183,	// (0x0008b100) list_pinb_item_pane_g2

0x5daa,	// (0x00082d27) list_pinb_item_pane_g3_ParamLimits

0x5daa,	// (0x00082d27) list_pinb_item_pane_g3

0x5dbb,	// (0x00082d38) list_pinb_item_pane_g4_ParamLimits

0x5dbb,	// (0x00082d38) list_pinb_item_pane_g4

0x0003,

0xf152,	// (0x0008c0cf) list_pinb_item_pane_g_ParamLimits

0xf152,	// (0x0008c0cf) list_pinb_item_pane_g

0x5dc7,	// (0x00082d44) list_pinb_item_pane_t1_ParamLimits

0x5dc7,	// (0x00082d44) list_pinb_item_pane_t1

0x5df8,	// (0x00082d75) calc_display_pane

0x5e16,	// (0x00082d93) calc_paper_pane

0x5e32,	// (0x00082daf) grid_calc_pane

0xdea1,	// (0x0008ae1e) bg_list_pane_cp01

0x5e5c,	// (0x00082dd9) clock_g1

0x5e64,	// (0x00082de1) clock_g2

0x0001,

0xf15b,	// (0x0008c0d8) clock_g

0x5e6e,	// (0x00082deb) clock_t1_ParamLimits

0x5e6e,	// (0x00082deb) clock_t1

0x5e83,	// (0x00082e00) clock_t2_ParamLimits

0x5e83,	// (0x00082e00) clock_t2

0x5e95,	// (0x00082e12) clock_t3_ParamLimits

0x5e95,	// (0x00082e12) clock_t3

0x5ea7,	// (0x00082e24) clock_t4_ParamLimits

0x5ea7,	// (0x00082e24) clock_t4

0x5eb9,	// (0x00082e36) clock_t5_ParamLimits

0x5eb9,	// (0x00082e36) clock_t5

0x5ece,	// (0x00082e4b) clock_t6_ParamLimits

0x5ece,	// (0x00082e4b) clock_t6

0x5ee0,	// (0x00082e5d) clock_t7_ParamLimits

0x5ee0,	// (0x00082e5d) clock_t7

0x5ef2,	// (0x00082e6f) clock_t8_ParamLimits

0x5ef2,	// (0x00082e6f) clock_t8

0x5f08,	// (0x00082e85) clock_t9_ParamLimits

0x5f08,	// (0x00082e85) clock_t9

0x0008,

0xf160,	// (0x0008c0dd) clock_t_ParamLimits

0xf160,	// (0x0008c0dd) clock_t

0xe18f,	// (0x0008b10c) popup_clock_analogue_window_cp02

0xe18f,	// (0x0008b10c) popup_clock_digital_window_cp01

0xe197,	// (0x0008b114) listscroll_help_pane

0xdea1,	// (0x0008ae1e) phob_pre_status_pane

0xe1a1,	// (0x0008b11e) grid_qdial_pane

0xdea1,	// (0x0008ae1e) listscroll_mce_pane

0xe1ab,	// (0x0008b128) bg_notes_pane

0xe1b5,	// (0x0008b132) list_notes_pane

0x5f1e,	// (0x00082e9b) scroll_pane_cp06

0xe1bf,	// (0x0008b13c) bg_calc_paper_pane

0x5f33,	// (0x00082eb0) list_calc_pane

0xe1d3,	// (0x0008b150) bg_calc_display_pane

0x5f4d,	// (0x00082eca) calc_display_pane_t1

0x5f62,	// (0x00082edf) calc_display_pane_t2

0x5f77,	// (0x00082ef4) calc_display_pane_t3

0x0002,

0xf173,	// (0x0008c0f0) calc_display_pane_t

0x5f89,	// (0x00082f06) cell_calc_pane_ParamLimits

0x5f89,	// (0x00082f06) cell_calc_pane

0xe1df,	// (0x0008b15c) bg_calc_paper_pane_g1

0xe1eb,	// (0x0008b168) bg_calc_paper_pane_g2

0xe1f7,	// (0x0008b174) bg_calc_paper_pane_g3

0xe203,	// (0x0008b180) bg_calc_paper_pane_g4

0xe20f,	// (0x0008b18c) bg_calc_paper_pane_g5

0x5fb6,	// (0x00082f33) bg_calc_paper_pane_g6

0x5fc7,	// (0x00082f44) bg_calc_paper_pane_g7

0x5fd8,	// (0x00082f55) bg_calc_paper_pane_g8

0x0007,

0xf17a,	// (0x0008c0f7) bg_calc_paper_pane_g

0x5fe9,	// (0x00082f66) calc_bg_paper_pane_g9

0x5ffa,	// (0x00082f77) list_calc_item_pane_ParamLimits

0x5ffa,	// (0x00082f77) list_calc_item_pane

0xe21b,	// (0x0008b198) list_calc_item_pane_g1

0x6029,	// (0x00082fa6) list_calc_item_pane_t1_ParamLimits

0x6029,	// (0x00082fa6) list_calc_item_pane_t1

0x603b,	// (0x00082fb8) list_calc_item_pane_t2_ParamLimits

0x603b,	// (0x00082fb8) list_calc_item_pane_t2

0x0001,

0xf18b,	// (0x0008c108) list_calc_item_pane_t_ParamLimits

0xf18b,	// (0x0008c108) list_calc_item_pane_t

0xe228,	// (0x0008b1a5) cell_calc_pane_g1

0xe232,	// (0x0008b1af) grid_highlight_pane_cp02

0x606b,	// (0x00082fe8) bg_calc_display_pane_g1

0x6074,	// (0x00082ff1) bg_calc_display_pane_g2

0x1b85,	// (0x0007eb02) bg_calc_display_pane_g3

0x0002,

0xf195,	// (0x0008c112) bg_calc_display_pane_g

0x607e,	// (0x00082ffb) cell_qdial_pane_ParamLimits

0x607e,	// (0x00082ffb) cell_qdial_pane

0x6092,	// (0x0008300f) cell_qdial_pane_g1_ParamLimits

0x6092,	// (0x0008300f) cell_qdial_pane_g1

0x609f,	// (0x0008301c) cell_qdial_pane_g2_ParamLimits

0x609f,	// (0x0008301c) cell_qdial_pane_g2

0xe254,	// (0x0008b1d1) cell_qdial_pane_g3_ParamLimits

0xe254,	// (0x0008b1d1) cell_qdial_pane_g3

0x0003,

0xf19c,	// (0x0008c119) cell_qdial_pane_g_ParamLimits

0xf19c,	// (0x0008c119) cell_qdial_pane_g

0x60bd,	// (0x0008303a) cell_qdial_pane_t1_ParamLimits

0x60bd,	// (0x0008303a) cell_qdial_pane_t1

0x60d5,	// (0x00083052) cell_qdial_pane_t2_ParamLimits

0x60d5,	// (0x00083052) cell_qdial_pane_t2

0x60e8,	// (0x00083065) cell_qdial_pane_t3_ParamLimits

0x60e8,	// (0x00083065) cell_qdial_pane_t3

0x0002,

0xf1a5,	// (0x0008c122) cell_qdial_pane_t_ParamLimits

0xf1a5,	// (0x0008c122) cell_qdial_pane_t

0xdea1,	// (0x0008ae1e) grid_highlight_pane_cp04

0xe260,	// (0x0008b1dd) thumbnail_qdial_pane_ParamLimits

0xe260,	// (0x0008b1dd) thumbnail_qdial_pane

0xe2bc,	// (0x0008b239) list_help_pane

0xe2c5,	// (0x0008b242) scroll_pane_cp02

0x60fb,	// (0x00083078) help_list_pane_t1_ParamLimits

0x60fb,	// (0x00083078) help_list_pane_t1

0x612e,	// (0x000830ab) bg_notes_pane_g2

0x6136,	// (0x000830b3) bg_notes_pane_g3

0x613e,	// (0x000830bb) notes_bg_pane_g1

0x6146,	// (0x000830c3) notes_bg_pane_g4

0x614e,	// (0x000830cb) notes_bg_pane_g5

0x6156,	// (0x000830d3) notes_bg_pane_g6

0x615e,	// (0x000830db) notes_bg_pane_g7

0x6166,	// (0x000830e3) notes_bg_pane_g8

0x616e,	// (0x000830eb) notes_bg_pane_g9

0x0006,

0xf1c3,	// (0x0008c140) notes_bg_pane_g

0x6176,	// (0x000830f3) list_notes_text_pane_ParamLimits

0x6176,	// (0x000830f3) list_notes_text_pane

0xe2ce,	// (0x0008b24b) list_notes_text_pane_g1

0x619b,	// (0x00083118) list_notes_text_pane_t1

0xe1d3,	// (0x0008b150) listscroll_cale_week_pane

0x61c6,	// (0x00083143) bg_cale_heading_pane

0xe2e8,	// (0x0008b265) bg_cale_pane_cp01

0x61e2,	// (0x0008315f) cale_week_corner_pane

0x61f8,	// (0x00083175) cale_week_day_heading_pane

0x6214,	// (0x00083191) cale_week_scroll_pane_g1

0x622d,	// (0x000831aa) cale_week_scroll_pane_g2

0x623e,	// (0x000831bb) cale_week_scroll_pane_g3

0x624f,	// (0x000831cc) cale_week_scroll_pane_g4

0x6260,	// (0x000831dd) cale_week_scroll_pane_g5

0x6271,	// (0x000831ee) cale_week_scroll_pane_g6

0x6282,	// (0x000831ff) cale_week_scroll_pane_g7

0x6295,	// (0x00083212) cale_week_scroll_pane_g8

0x62a8,	// (0x00083225) cale_week_scroll_pane_g9

0x62b9,	// (0x00083236) cale_week_scroll_pane_g10

0x62ca,	// (0x00083247) cale_week_scroll_pane_g11

0x62db,	// (0x00083258) cale_week_scroll_pane_g12

0x62ec,	// (0x00083269) cale_week_scroll_pane_g13

0x6305,	// (0x00083282) cale_week_scroll_pane_g14

0x631e,	// (0x0008329b) cale_week_scroll_pane_g15

0x000e,

0xf1d2,	// (0x0008c14f) cale_week_scroll_pane_g

0x6337,	// (0x000832b4) cale_week_time_pane

0x634a,	// (0x000832c7) grid_cale_week_pane

0x6367,	// (0x000832e4) scroll_pane_cp08

0x6381,	// (0x000832fe) cell_cale_week_pane_ParamLimits

0x6381,	// (0x000832fe) cell_cale_week_pane

0x63cd,	// (0x0008334a) cale_week_day_heading_pane_t1

0x63e6,	// (0x00083363) cale_week_day_heading_pane_t2

0x63ff,	// (0x0008337c) cale_week_day_heading_pane_t3

0x6418,	// (0x00083395) cale_week_day_heading_pane_t4

0x6431,	// (0x000833ae) cale_week_day_heading_pane_t5

0x644a,	// (0x000833c7) cale_week_day_heading_pane_t6

0x6463,	// (0x000833e0) cale_week_day_heading_pane_t7

0x0006,

0xf1f1,	// (0x0008c16e) cale_week_day_heading_pane_t

0xe313,	// (0x0008b290) bg_cale_side_pane

0x647c,	// (0x000833f9) cale_week_time_pane_t1

0x6494,	// (0x00083411) cale_week_time_pane_t2

0x64ac,	// (0x00083429) cale_week_time_pane_t3

0x64c4,	// (0x00083441) cale_week_time_pane_t4

0x64dc,	// (0x00083459) cale_week_time_pane_t5

0x64f4,	// (0x00083471) cale_week_time_pane_t6

0x650c,	// (0x00083489) cale_week_time_pane_t7

0x652c,	// (0x000834a9) cale_week_time_pane_t8

0x0007,

0xf200,	// (0x0008c17d) cale_week_time_pane_t

0x654c,	// (0x000834c9) cell_cale_week_pane_g2

0x655d,	// (0x000834da) cell_cale_week_pane_g3_ParamLimits

0x655d,	// (0x000834da) cell_cale_week_pane_g3

0xe321,	// (0x0008b29e) grid_highlight_pane_cp07

0xe329,	// (0x0008b2a6) listscroll_gms_pane

0xe333,	// (0x0008b2b0) grid_gms_pane

0xe33c,	// (0x0008b2b9) listscroll_gms_pane_g1

0xe344,	// (0x0008b2c1) listscroll_gms_pane_g2

0x0001,

0xf211,	// (0x0008c18e) listscroll_gms_pane_g

0x6575,	// (0x000834f2) scroll_pane_cp010

0x6580,	// (0x000834fd) cell_gms_pane_ParamLimits

0x6580,	// (0x000834fd) cell_gms_pane

0x6593,	// (0x00083510) cell_gms_pane_g1

0xe34c,	// (0x0008b2c9) cell_gms_pane_g2

0xe354,	// (0x0008b2d1) cell_gms_pane_g3

0xe35d,	// (0x0008b2da) cell_gms_pane_g4

0x0003,

0xf216,	// (0x0008c193) cell_gms_pane_g

0xe366,	// (0x0008b2e3) grid_highlight_pane_cp09

0x8899,	// (0x00085816) phob_pre_status_pane_g1

0x88a1,	// (0x0008581e) phob_pre_status_pane_g2

0x88a9,	// (0x00085826) phob_pre_status_pane_g3

0x88b1,	// (0x0008582e) phob_pre_status_pane_g4

0x0004,

0xf605,	// (0x0008c582) phob_pre_status_pane_g

0x88c1,	// (0x0008583e) phob_pre_status_pane_t1

0x88d1,	// (0x0008584e) phob_pre_status_pane_t2

0x88e1,	// (0x0008585e) phob_pre_status_pane_t3

0x0002,

0xf610,	// (0x0008c58d) phob_pre_status_pane_t

0xdea1,	// (0x0008ae1e) bg_list_pane_cp05

0x65a3,	// (0x00083520) grid_vorec_pane

0x65ad,	// (0x0008352a) vorec_t1

0x65bb,	// (0x00083538) vorec_t2

0x65c9,	// (0x00083546) vorec_t3

0x65d7,	// (0x00083554) vorec_t4

0x65e5,	// (0x00083562) vorec_t5

0x65f3,	// (0x00083570) vorec_t6

0x0006,

0xf21f,	// (0x0008c19c) vorec_t

0x660f,	// (0x0008358c) wait_bar_pane_cp01

0x6617,	// (0x00083594) cell_vorec_pane_ParamLimits

0x6617,	// (0x00083594) cell_vorec_pane

0xe36e,	// (0x0008b2eb) cell_vorec_pane_g1

0xdea1,	// (0x0008ae1e) grid_highlight_pane_cp05

0x663a,	// (0x000835b7) cams_zoom_pane

0x6646,	// (0x000835c3) image_vga_pane

0x6655,	// (0x000835d2) main_camera_pane_g1

0x6663,	// (0x000835e0) main_camera_pane_g2

0x666f,	// (0x000835ec) main_camera_pane_g3

0x667b,	// (0x000835f8) main_camera_pane_g4

0x6687,	// (0x00083604) main_camera_pane_g5

0x6693,	// (0x00083610) main_camera_pane_g6

0x669f,	// (0x0008361c) main_camera_pane_g7

0x0007,

0xf22e,	// (0x0008c1ab) main_camera_pane_g

0x66ab,	// (0x00083628) main_camera_pane_t1

0x66bd,	// (0x0008363a) main_camera_pane_t2

0x0001,

0xf23f,	// (0x0008c1bc) main_camera_pane_t

0x66de,	// (0x0008365b) cams_zoom_pane_cp_ParamLimits

0x66de,	// (0x0008365b) cams_zoom_pane_cp

0x6702,	// (0x0008367f) image_cif_pane_ParamLimits

0x6702,	// (0x0008367f) image_cif_pane

0x6720,	// (0x0008369d) image_subqcif_pane

0x6728,	// (0x000836a5) main_video_pane_g1_ParamLimits

0x6728,	// (0x000836a5) main_video_pane_g1

0x6748,	// (0x000836c5) main_video_pane_g2_ParamLimits

0x6748,	// (0x000836c5) main_video_pane_g2

0x6778,	// (0x000836f5) main_video_pane_g3_ParamLimits

0x6778,	// (0x000836f5) main_video_pane_g3

0x67a1,	// (0x0008371e) main_video_pane_g4_ParamLimits

0x67a1,	// (0x0008371e) main_video_pane_g4

0x67ca,	// (0x00083747) main_video_pane_g5_ParamLimits

0x67ca,	// (0x00083747) main_video_pane_g5

0xe384,	// (0x0008b301) main_video_pane_g6_ParamLimits

0xe384,	// (0x0008b301) main_video_pane_g6

0x0006,

0xf244,	// (0x0008c1c1) main_video_pane_g_ParamLimits

0xf244,	// (0x0008c1c1) main_video_pane_g

0x67ee,	// (0x0008376b) main_video_pane_t1_ParamLimits

0x67ee,	// (0x0008376b) main_video_pane_t1

0xe39e,	// (0x0008b31b) cams_zoom_pane_g1

0xe3a7,	// (0x0008b324) cams_zoom_pane_g2

0xe3b0,	// (0x0008b32d) cams_zoom_pane_g3

0xe3b9,	// (0x0008b336) cams_zoom_pane_g4

0x0003,

0xf253,	// (0x0008c1d0) cams_zoom_pane_g

0x6838,	// (0x000837b5) grid_cams_pane

0x6846,	// (0x000837c3) linegrid_cams_pane

0x6854,	// (0x000837d1) cell_cams_pane_ParamLimits

0x6854,	// (0x000837d1) cell_cams_pane

0xe3c2,	// (0x0008b33f) cams_burst_image_pane

0xe3ca,	// (0x0008b347) cell_cams_pane_g1

0xdea1,	// (0x0008ae1e) grid_highlight_pane_cp03

0xe228,	// (0x0008b1a5) mp_bg_pane_g1

0xdea1,	// (0x0008ae1e) bg_list_pane_cp03

0x1618,	// (0x0007e595) bg_mp_pane

0x1620,	// (0x0007e59d) grid_mp_pane

0x1628,	// (0x0007e5a5) media_player_g1

0x1630,	// (0x0007e5ad) media_player_t1

0x163e,	// (0x0007e5bb) media_player_t2

0x164c,	// (0x0007e5c9) media_player_t3

0x165a,	// (0x0007e5d7) media_player_t4

0x1668,	// (0x0007e5e5) media_player_t5

0x1676,	// (0x0007e5f3) media_player_t6

0x1684,	// (0x0007e601) media_player_t7

0x0006,

0xf5ef,	// (0x0008c56c) media_player_t

0x1692,	// (0x0007e60f) wait_bar_pane_cp02

0xf5d4,	// (0x0008c551) main_usb_pane_t

0x8890,	// (0x0008580d) cell_mp_pane

0xe228,	// (0x0008b1a5) cell_mp_pane_g1

0xdea1,	// (0x0008ae1e) grid_highlight_pane_cp06

0xe3d2,	// (0x0008b34f) grid_skin_colour_pane

0xe3da,	// (0x0008b357) list_highlight_pane_cp03

0x68be,	// (0x0008383b) skin_g1

0xe3e2,	// (0x0008b35f) skin_t1

0xe3f1,	// (0x0008b36e) skin_t2

0x0001,

0xf288,	// (0x0008c205) skin_t

0x68c8,	// (0x00083845) cell_skin_colour_pane_ParamLimits

0x68c8,	// (0x00083845) cell_skin_colour_pane

0xe3ff,	// (0x0008b37c) cell_skin_colour_pane_g1

0x694a,	// (0x000838c7) call_video_g1_ParamLimits

0x694a,	// (0x000838c7) call_video_g1

0x695a,	// (0x000838d7) call_video_g2_ParamLimits

0x695a,	// (0x000838d7) call_video_g2

0x0001,

0xf28d,	// (0x0008c20a) call_video_g_ParamLimits

0xf28d,	// (0x0008c20a) call_video_g

0x69b4,	// (0x00083931) call_video_uplink_pane_cp1_ParamLimits

0x69b4,	// (0x00083931) call_video_uplink_pane_cp1

0xe411,	// (0x0008b38e) call_video_uplink_pane_cp2

0x6a80,	// (0x000839fd) video_down_crop_pane_ParamLimits

0x6a80,	// (0x000839fd) video_down_crop_pane

0x6b7e,	// (0x00083afb) video_down_pane_ParamLimits

0x6b7e,	// (0x00083afb) video_down_pane

0xe419,	// (0x0008b396) video_down_subqcif_pane_ParamLimits

0xe419,	// (0x0008b396) video_down_subqcif_pane

0xe431,	// (0x0008b3ae) video_down_subqcif_pane_cp_ParamLimits

0xe431,	// (0x0008b3ae) video_down_subqcif_pane_cp

0xe455,	// (0x0008b3d2) im_reading_pane_ParamLimits

0xe455,	// (0x0008b3d2) im_reading_pane

0x6ca0,	// (0x00083c1d) im_writing_pane_ParamLimits

0x6ca0,	// (0x00083c1d) im_writing_pane

0x6cbe,	// (0x00083c3b) im_reading_pane_t1

0xe46f,	// (0x0008b3ec) list_im_pane

0xe480,	// (0x0008b3fd) scroll_pane_cp07

0x6d12,	// (0x00083c8f) im_writing_pane_t1_ParamLimits

0x6d12,	// (0x00083c8f) im_writing_pane_t1

0xe499,	// (0x0008b416) im_writing_pane_t2_ParamLimits

0xe499,	// (0x0008b416) im_writing_pane_t2

0x0001,

0xf297,	// (0x0008c214) im_writing_pane_t_ParamLimits

0xf297,	// (0x0008c214) im_writing_pane_t

0xdea1,	// (0x0008ae1e) input_focus_pane_cp04

0xdea1,	// (0x0008ae1e) input_focus_pane_cp05

0x6d27,	// (0x00083ca4) list_im_single_pane_ParamLimits

0x6d27,	// (0x00083ca4) list_im_single_pane

0x6d4b,	// (0x00083cc8) list_single_im_pane_t1

0x8854,	// (0x000857d1) blid_accuracy_pane

0x885c,	// (0x000857d9) blid_compass_pane

0x8866,	// (0x000857e3) main_location_t1

0x8874,	// (0x000857f1) main_location_t2

0x8882,	// (0x000857ff) main_location_t3

0x0002,

0xf5fe,	// (0x0008c57b) main_location_t

0xdea1,	// (0x0008ae1e) aid_levels_location

0xe228,	// (0x0008b1a5) blid_accuracy_pane_g1

0xe228,	// (0x0008b1a5) blid_accuracy_pane_g2

0x0001,

0xf2f9,	// (0x0008c276) blid_accuracy_pane_g

0xe4e1,	// (0x0008b45e) wml_content_pane

0xe51f,	// (0x0008b49c) wml_button_pane_ParamLimits

0xe51f,	// (0x0008b49c) wml_button_pane

0x6d5a,	// (0x00083cd7) wml_list_single_large_pane_ParamLimits

0x6d5a,	// (0x00083cd7) wml_list_single_large_pane

0x6d84,	// (0x00083d01) wml_list_single_medium_pane_ParamLimits

0x6d84,	// (0x00083d01) wml_list_single_medium_pane

0x6db5,	// (0x00083d32) wml_list_single_small_pane_ParamLimits

0x6db5,	// (0x00083d32) wml_list_single_small_pane

0xe533,	// (0x0008b4b0) wml_selection_box_pane_ParamLimits

0xe533,	// (0x0008b4b0) wml_selection_box_pane

0xe546,	// (0x0008b4c3) wml_list_single_pane_t1

0xe555,	// (0x0008b4d2) wml_list_single_medium_pane_t1

0xe564,	// (0x0008b4e1) wml_list_single_large_pane_t1

0xe573,	// (0x0008b4f0) input_focus_pane_cp02_ParamLimits

0xe573,	// (0x0008b4f0) input_focus_pane_cp02

0xe586,	// (0x0008b503) wml_selection_box_pane_g1

0xe58f,	// (0x0008b50c) wml_selection_box_pane_t1_ParamLimits

0xe58f,	// (0x0008b50c) wml_selection_box_pane_t1

0xe0fc,	// (0x0008b079) bg_wml_button_pane_ParamLimits

0xe0fc,	// (0x0008b079) bg_wml_button_pane

0xe5a7,	// (0x0008b524) wml_button_pane_g1

0xe5af,	// (0x0008b52c) wml_button_pane_t1

0xe5a7,	// (0x0008b524) wml_button_bg_pane_g1

0xe5bf,	// (0x0008b53c) wml_button_bg_pane_g2

0xe5c7,	// (0x0008b544) wml_button_bg_pane_g3

0xe5cf,	// (0x0008b54c) wml_button_bg_pane_g4

0xe5d7,	// (0x0008b554) wml_button_bg_pane_g5

0xe5df,	// (0x0008b55c) wml_button_bg_pane_g6

0xe5e7,	// (0x0008b564) wml_button_bg_pane_g7

0xe5ef,	// (0x0008b56c) wml_button_bg_pane_g8

0xe5f7,	// (0x0008b574) wml_button_bg_pane_g9

0x0008,

0xf29c,	// (0x0008c219) wml_button_bg_pane_g

0x6def,	// (0x00083d6c) bg_list_pane_cp02

0xe5ff,	// (0x0008b57c) mce_header_pane_ParamLimits

0xe5ff,	// (0x0008b57c) mce_header_pane

0xe615,	// (0x0008b592) mce_icon_pane

0xe615,	// (0x0008b592) mce_image_pane

0xe61e,	// (0x0008b59b) mce_text_pane_ParamLimits

0xe61e,	// (0x0008b59b) mce_text_pane

0x6df9,	// (0x00083d76) scroll_pane_cp03

0xe517,	// (0x0008b494) scroll_pane_cp04

0xe631,	// (0x0008b5ae) scroll_pane_cp05_ParamLimits

0xe631,	// (0x0008b5ae) scroll_pane_cp05

0x6e03,	// (0x00083d80) mce_header_field_pane_ParamLimits

0x6e03,	// (0x00083d80) mce_header_field_pane

0x6e23,	// (0x00083da0) mce_header_field_pane_2_ParamLimits

0x6e23,	// (0x00083da0) mce_header_field_pane_2

0x6e39,	// (0x00083db6) mce_header_field_pane_3

0x6e41,	// (0x00083dbe) list_single_mce_message_pane_ParamLimits

0x6e41,	// (0x00083dbe) list_single_mce_message_pane

0x6e66,	// (0x00083de3) list_single_mce_smart_pane_ParamLimits

0x6e66,	// (0x00083de3) list_single_mce_smart_pane

0xe63d,	// (0x0008b5ba) input_focus_pane_cp03

0xe646,	// (0x0008b5c3) list_header_data_pane

0x6e96,	// (0x00083e13) mce_header_field_pane_t1

0x6ea4,	// (0x00083e21) list_single_mce_header_pane_ParamLimits

0x6ea4,	// (0x00083e21) list_single_mce_header_pane

0xe64e,	// (0x0008b5cb) list_single_mce_header_pane_t1

0xe65d,	// (0x0008b5da) list_single_mce_message_pane_g1

0xe665,	// (0x0008b5e2) list_single_mce_message_pane_t1

0x6ee8,	// (0x00083e65) bg_cale_heading_pane_cp01_ParamLimits

0x6ee8,	// (0x00083e65) bg_cale_heading_pane_cp01

0xe673,	// (0x0008b5f0) bg_cale_pane_cp02_ParamLimits

0xe673,	// (0x0008b5f0) bg_cale_pane_cp02

0x6f1b,	// (0x00083e98) cale_month_corner_pane

0x6f31,	// (0x00083eae) cale_month_day_heading_pane_ParamLimits

0x6f31,	// (0x00083eae) cale_month_day_heading_pane

0x6f74,	// (0x00083ef1) cale_month_pane_g1_ParamLimits

0x6f74,	// (0x00083ef1) cale_month_pane_g1

0x6fa0,	// (0x00083f1d) cale_month_pane_g2_ParamLimits

0x6fa0,	// (0x00083f1d) cale_month_pane_g2

0x6fc3,	// (0x00083f40) cale_month_pane_g3_ParamLimits

0x6fc3,	// (0x00083f40) cale_month_pane_g3

0x6fff,	// (0x00083f7c) cale_month_pane_g4_ParamLimits

0x6fff,	// (0x00083f7c) cale_month_pane_g4

0x703b,	// (0x00083fb8) cale_month_pane_g5_ParamLimits

0x703b,	// (0x00083fb8) cale_month_pane_g5

0x7077,	// (0x00083ff4) cale_month_pane_g6_ParamLimits

0x7077,	// (0x00083ff4) cale_month_pane_g6

0x70b3,	// (0x00084030) cale_month_pane_g7_ParamLimits

0x70b3,	// (0x00084030) cale_month_pane_g7

0x70ff,	// (0x0008407c) cale_month_pane_g8_ParamLimits

0x70ff,	// (0x0008407c) cale_month_pane_g8

0x714b,	// (0x000840c8) cale_month_pane_g9_ParamLimits

0x714b,	// (0x000840c8) cale_month_pane_g9

0x7191,	// (0x0008410e) cale_month_pane_g10_ParamLimits

0x7191,	// (0x0008410e) cale_month_pane_g10

0x71cb,	// (0x00084148) cale_month_pane_g11_ParamLimits

0x71cb,	// (0x00084148) cale_month_pane_g11

0x7209,	// (0x00084186) cale_month_pane_g12_ParamLimits

0x7209,	// (0x00084186) cale_month_pane_g12

0x7247,	// (0x000841c4) cale_month_pane_g13_ParamLimits

0x7247,	// (0x000841c4) cale_month_pane_g13

0x000c,

0xf2af,	// (0x0008c22c) cale_month_pane_g_ParamLimits

0xf2af,	// (0x0008c22c) cale_month_pane_g

0x7285,	// (0x00084202) cale_month_week_pane

0x7298,	// (0x00084215) grid_cale_month_pane_ParamLimits

0x7298,	// (0x00084215) grid_cale_month_pane

0x72d6,	// (0x00084253) cale_month_day_heading_pane_t1

0x7334,	// (0x000842b1) cale_month_day_heading_pane_t2

0x7399,	// (0x00084316) cale_month_day_heading_pane_t3

0x73fe,	// (0x0008437b) cale_month_day_heading_pane_t4

0x7463,	// (0x000843e0) cale_month_day_heading_pane_t5

0x74c8,	// (0x00084445) cale_month_day_heading_pane_t6

0x752d,	// (0x000844aa) cale_month_day_heading_pane_t7

0x0006,

0xf2ca,	// (0x0008c247) cale_month_day_heading_pane_t

0xe313,	// (0x0008b290) bg_cale_side_pane_cp01

0x75a2,	// (0x0008451f) cale_month_week_pane_t1

0x75b9,	// (0x00084536) cale_month_week_pane_t2

0x75d0,	// (0x0008454d) cale_month_week_pane_t3

0x75e7,	// (0x00084564) cale_month_week_pane_t4

0x75fe,	// (0x0008457b) cale_month_week_pane_t5

0x7619,	// (0x00084596) cale_month_week_pane_t6

0x0005,

0xf2d9,	// (0x0008c256) cale_month_week_pane_t

0x7638,	// (0x000845b5) cell_cale_month_pane_ParamLimits

0x7638,	// (0x000845b5) cell_cale_month_pane

0x76fe,	// (0x0008467b) cell_cale_month_pane_g1

0x770a,	// (0x00084687) cell_cale_month_pane_t1_ParamLimits

0x770a,	// (0x00084687) cell_cale_month_pane_t1

0xe321,	// (0x0008b29e) grid_highlight_pane_cp08

0xe228,	// (0x0008b1a5) main_smil_g1

0x7726,	// (0x000846a3) smil_status_pane

0xe6a8,	// (0x0008b625) smil_text_pane

0x1538,	// (0x0007e4b5) bg_popup_call3_rect_pane_g8

0x1540,	// (0x0007e4bd) bg_popup_call3_rect_pane_g9

0x0008,

0xf592,	// (0x0008c50f) bg_popup_call3_rect_pane_g

0x17cd,	// (0x0007e74a) smil_status_volume_pane_g1

0xe6b2,	// (0x0008b62f) smil_status_pane_t1

0x8c3a,	// (0x00085bb7) volume_smil_pane

0xe6c9,	// (0x0008b646) list_smil_text_pane

0x7739,	// (0x000846b6) scroll_pane_cp011

0x7744,	// (0x000846c1) smil_text_list_pane_t1_ParamLimits

0x7744,	// (0x000846c1) smil_text_list_pane_t1

0x77bc,	// (0x00084739) aid_volume_smil_ParamLimits

0x77bc,	// (0x00084739) aid_volume_smil

0xe228,	// (0x0008b1a5) smil_volume_pane_g1

0xe228,	// (0x0008b1a5) smil_volume_pane_g2

0x0001,

0xf2f9,	// (0x0008c276) smil_volume_pane_g

0xe1d3,	// (0x0008b150) listscroll_cale_day_pane

0xe6d3,	// (0x0008b650) bg_cale_pane

0xe6eb,	// (0x0008b668) list_cale_pane

0xe6fc,	// (0x0008b679) scroll_pane_cp09

0xe70d,	// (0x0008b68a) cale_bg_pane_g1

0xe715,	// (0x0008b692) cale_bg_pane_g2

0xe71d,	// (0x0008b69a) cale_bg_pane_g3

0xe725,	// (0x0008b6a2) cale_bg_pane_g4

0xe72d,	// (0x0008b6aa) cale_bg_pane_g5

0xe735,	// (0x0008b6b2) cale_bg_pane_g6

0xe73d,	// (0x0008b6ba) cale_bg_pane_g7

0xe745,	// (0x0008b6c2) cale_bg_pane_g8

0xe74d,	// (0x0008b6ca) cale_bg_pane_g9

0x0008,

0xf2fe,	// (0x0008c27b) cale_bg_pane_g

0x77de,	// (0x0008475b) list_cale_time_pane_ParamLimits

0x77de,	// (0x0008475b) list_cale_time_pane

0xe755,	// (0x0008b6d2) list_cale_time_pane_g1_ParamLimits

0xe755,	// (0x0008b6d2) list_cale_time_pane_g1

0xe761,	// (0x0008b6de) list_cale_time_pane_g2_ParamLimits

0xe761,	// (0x0008b6de) list_cale_time_pane_g2

0x77fa,	// (0x00084777) list_cale_time_pane_g3_ParamLimits

0x77fa,	// (0x00084777) list_cale_time_pane_g3

0x7808,	// (0x00084785) list_cale_time_pane_g4_ParamLimits

0x7808,	// (0x00084785) list_cale_time_pane_g4

0x7816,	// (0x00084793) list_cale_time_pane_g5_ParamLimits

0x7816,	// (0x00084793) list_cale_time_pane_g5

0x0005,

0xf311,	// (0x0008c28e) list_cale_time_pane_g_ParamLimits

0xf311,	// (0x0008c28e) list_cale_time_pane_g

0xe77b,	// (0x0008b6f8) list_cale_time_pane_t1_ParamLimits

0xe77b,	// (0x0008b6f8) list_cale_time_pane_t1

0xe7a3,	// (0x0008b720) list_cale_time_pane_t2_ParamLimits

0xe7a3,	// (0x0008b720) list_cale_time_pane_t2

0x7b47,	// (0x00084ac4) aid_blid_cardinal_pane

0x7b89,	// (0x00084b06) compass_pane_t4

0xe7cb,	// (0x0008b748) list_cale_time_pane_t4_ParamLimits

0xe7cb,	// (0x0008b748) list_cale_time_pane_t4

0x7b97,	// (0x00084b14) compass_pane_t5

0x7ba7,	// (0x00084b24) compass_pane_t6

0x7bb5,	// (0x00084b32) compass_pane_t7

0xec04,	// (0x0008bb81) navi_pane_cc_t1

0xed59,	// (0x0008bcd6) aid_phob_thumbnail_center_pane

0x835a,	// (0x000852d7) main_postcard_pane_g4_ParamLimits

0x0002,

0xf31e,	// (0x0008c29b) list_cale_time_pane_t_ParamLimits

0xf31e,	// (0x0008c29b) list_cale_time_pane_t

0xdaf8,	// (0x0008aa75) bg_popup_window_pane_cp02_ParamLimits

0xdaf8,	// (0x0008aa75) bg_popup_window_pane_cp02

0xe7f3,	// (0x0008b770) heading_pane_cp01_ParamLimits

0xe7f3,	// (0x0008b770) heading_pane_cp01

0xe7ff,	// (0x0008b77c) loc_req_pane_ParamLimits

0xe7ff,	// (0x0008b77c) loc_req_pane

0xe80f,	// (0x0008b78c) loc_type_pane_ParamLimits

0xe80f,	// (0x0008b78c) loc_type_pane

0xe821,	// (0x0008b79e) loc_type_pane_t1_ParamLimits

0xe821,	// (0x0008b79e) loc_type_pane_t1

0xe833,	// (0x0008b7b0) loc_type_pane_t2_ParamLimits

0xe833,	// (0x0008b7b0) loc_type_pane_t2

0xe845,	// (0x0008b7c2) loc_type_pane_t3_ParamLimits

0xe845,	// (0x0008b7c2) loc_type_pane_t3

0x0002,

0xf325,	// (0x0008c2a2) loc_type_pane_t_ParamLimits

0xf325,	// (0x0008c2a2) loc_type_pane_t

0xe857,	// (0x0008b7d4) list_loc_req_pane

0xe861,	// (0x0008b7de) scroll_pane_cp012

0x7824,	// (0x000847a1) list_single_loc_request_popup_menu_pane_ParamLimits

0x7824,	// (0x000847a1) list_single_loc_request_popup_menu_pane

0xe86c,	// (0x0008b7e9) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xe86c,	// (0x0008b7e9) list_single_loc_request_popup_menu_pane_g1

0xe878,	// (0x0008b7f5) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xe878,	// (0x0008b7f5) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf32c,	// (0x0008c2a9) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf32c,	// (0x0008c2a9) list_single_loc_request_popup_menu_pane_g

0xe884,	// (0x0008b801) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xe884,	// (0x0008b801) list_single_loc_request_popup_menu_pane_t1

0x7836,	// (0x000847b3) bg_popup_window_pane_cp03_ParamLimits

0x7836,	// (0x000847b3) bg_popup_window_pane_cp03

0x7844,	// (0x000847c1) heading_loc_req_pane_ParamLimits

0x7844,	// (0x000847c1) heading_loc_req_pane

0x7850,	// (0x000847cd) popup_dyc_status_message_window_g1_ParamLimits

0x7850,	// (0x000847cd) popup_dyc_status_message_window_g1

0x785c,	// (0x000847d9) popup_dyc_status_message_window_t1_ParamLimits

0x785c,	// (0x000847d9) popup_dyc_status_message_window_t1

0x786e,	// (0x000847eb) popup_dyc_status_message_window_t2_ParamLimits

0x786e,	// (0x000847eb) popup_dyc_status_message_window_t2

0x7880,	// (0x000847fd) popup_dyc_status_message_window_t3_ParamLimits

0x7880,	// (0x000847fd) popup_dyc_status_message_window_t3

0x0002,

0xf331,	// (0x0008c2ae) popup_dyc_status_message_window_t_ParamLimits

0xf331,	// (0x0008c2ae) popup_dyc_status_message_window_t

0xdea1,	// (0x0008ae1e) bg_heading_pane_cp01

0xe89a,	// (0x0008b817) heading_loc_req_pane_g1

0xe8a2,	// (0x0008b81f) heading_loc_req_pane_g2

0xe8aa,	// (0x0008b827) heading_loc_req_pane_g3

0x0002,

0xf338,	// (0x0008c2b5) heading_loc_req_pane_g

0xe8b2,	// (0x0008b82f) heading_loc_req_pane_t1

0xe8c1,	// (0x0008b83e) bg_popup_sub_pane_cp01_ParamLimits

0xe8c1,	// (0x0008b83e) bg_popup_sub_pane_cp01

0xe8cf,	// (0x0008b84c) popup_cale_events_window_g1_ParamLimits

0xe8cf,	// (0x0008b84c) popup_cale_events_window_g1

0xe8ef,	// (0x0008b86c) popup_cale_events_window_g2_ParamLimits

0xe8ef,	// (0x0008b86c) popup_cale_events_window_g2

0x0001,

0xf36c,	// (0x0008c2e9) popup_cale_events_window_g_ParamLimits

0xf36c,	// (0x0008c2e9) popup_cale_events_window_g

0xe90f,	// (0x0008b88c) popup_cale_events_window_t1_ParamLimits

0xe90f,	// (0x0008b88c) popup_cale_events_window_t1

0xe921,	// (0x0008b89e) popup_cale_events_window_t2_ParamLimits

0xe921,	// (0x0008b89e) popup_cale_events_window_t2

0xe95f,	// (0x0008b8dc) popup_cale_events_window_t3_ParamLimits

0xe95f,	// (0x0008b8dc) popup_cale_events_window_t3

0xe999,	// (0x0008b916) popup_cale_events_window_t4_ParamLimits

0xe999,	// (0x0008b916) popup_cale_events_window_t4

0x0003,

0xf371,	// (0x0008c2ee) popup_cale_events_window_t_ParamLimits

0xf371,	// (0x0008c2ee) popup_cale_events_window_t

0x7904,	// (0x00084881) call_type_pane

0xe9cf,	// (0x0008b94c) popup_call_status_window_g1

0x7910,	// (0x0008488d) popup_call_status_window_g2

0x791c,	// (0x00084899) popup_call_status_window_g3

0x0002,

0xf37a,	// (0x0008c2f7) popup_call_status_window_g

0xe9dd,	// (0x0008b95a) call_type_pane_g1

0xe9e6,	// (0x0008b963) call_type_pane_g2

0x0001,

0xf381,	// (0x0008c2fe) call_type_pane_g

0xdea1,	// (0x0008ae1e) bg_popup_sub_pane_cp02

0xe9ef,	// (0x0008b96c) listscroll_popup_wml_pane

0xe9f7,	// (0x0008b974) list_wml_pane

0xea01,	// (0x0008b97e) scroll_pane_cp013

0xea0c,	// (0x0008b989) list_single_graphic_popup_wml_pane_ParamLimits

0xea0c,	// (0x0008b989) list_single_graphic_popup_wml_pane

0xe228,	// (0x0008b1a5) list_single_graphic_popup_wml_pane_g1

0xea20,	// (0x0008b99d) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf386,	// (0x0008c303) list_single_graphic_popup_wml_pane_g

0xea28,	// (0x0008b9a5) list_single_graphic_popup_wml_pane_t1

0xea3e,	// (0x0008b9bb) aid_call_pane

0xe0f4,	// (0x0008b071) popup_clock_analogue_window_g1

0xe0f4,	// (0x0008b071) popup_clock_analogue_window_g2

0x7928,	// (0x000848a5) popup_clock_analogue_window_g3

0x7928,	// (0x000848a5) popup_clock_analogue_window_g4

0xe228,	// (0x0008b1a5) popup_clock_analogue_window_g5

0x0004,

0xf38b,	// (0x0008c308) popup_clock_analogue_window_g

0x7930,	// (0x000848ad) popup_clock_analogue_window_t1

0x793e,	// (0x000848bb) clock_digital_number_pane_ParamLimits

0x793e,	// (0x000848bb) clock_digital_number_pane

0x794a,	// (0x000848c7) clock_digital_number_pane_cp02_ParamLimits

0x794a,	// (0x000848c7) clock_digital_number_pane_cp02

0x7956,	// (0x000848d3) clock_digital_number_pane_cp03_ParamLimits

0x7956,	// (0x000848d3) clock_digital_number_pane_cp03

0x7962,	// (0x000848df) clock_digital_number_pane_cp04_ParamLimits

0x7962,	// (0x000848df) clock_digital_number_pane_cp04

0x7972,	// (0x000848ef) clock_digital_separator_pane_ParamLimits

0x7972,	// (0x000848ef) clock_digital_separator_pane

0x797e,	// (0x000848fb) popup_clock_digital_window_t1

0xe228,	// (0x0008b1a5) clock_digital_number_pane_g1

0xe228,	// (0x0008b1a5) clock_digital_number_pane_g2

0x0001,

0xf2f9,	// (0x0008c276) clock_digital_number_pane_g

0xe228,	// (0x0008b1a5) clock_digital_separator_pane_g1

0xe228,	// (0x0008b1a5) clock_digital_separator_pane_g2

0x0001,

0xf2f9,	// (0x0008c276) clock_digital_separator_pane_g

0xdea1,	// (0x0008ae1e) bg_popup_window_pane_cp04

0xea46,	// (0x0008b9c3) heading_pane_cp03

0xea4e,	// (0x0008b9cb) listscroll_popup_gms_pane

0xea56,	// (0x0008b9d3) grid_large_graphic_popup_pane

0xea60,	// (0x0008b9dd) listscroll_popup_gms_pane_g1

0xea68,	// (0x0008b9e5) listscroll_popup_gms_pane_g2

0x0001,

0xf396,	// (0x0008c313) listscroll_popup_gms_pane_g

0xe517,	// (0x0008b494) scroll_pane_cp014

0x799b,	// (0x00084918) cell_large_graphic_popup_pane_ParamLimits

0x799b,	// (0x00084918) cell_large_graphic_popup_pane

0x79b3,	// (0x00084930) cell_large_graphic_popup_pane_g1_ParamLimits

0x79b3,	// (0x00084930) cell_large_graphic_popup_pane_g1

0xea70,	// (0x0008b9ed) cell_large_graphic_popup_pane_g2_ParamLimits

0xea70,	// (0x0008b9ed) cell_large_graphic_popup_pane_g2

0xea7c,	// (0x0008b9f9) cell_large_graphic_popup_pane_g3_ParamLimits

0xea7c,	// (0x0008b9f9) cell_large_graphic_popup_pane_g3

0xea89,	// (0x0008ba06) cell_large_graphic_popup_pane_g4_ParamLimits

0xea89,	// (0x0008ba06) cell_large_graphic_popup_pane_g4

0x0003,

0xf39b,	// (0x0008c318) cell_large_graphic_popup_pane_g_ParamLimits

0xf39b,	// (0x0008c318) cell_large_graphic_popup_pane_g

0xea99,	// (0x0008ba16) grid_highlight_pane_cp010

0xe228,	// (0x0008b1a5) bg_popup_call_pane_g1

0xeaa3,	// (0x0008ba20) list_single_graphic_popup_conf_pane_ParamLimits

0xeaa3,	// (0x0008ba20) list_single_graphic_popup_conf_pane

0xeab6,	// (0x0008ba33) list_highlight_pane_cp01

0xeabf,	// (0x0008ba3c) list_single_graphic_popup_conf_pane_g1

0xeac7,	// (0x0008ba44) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3a4,	// (0x0008c321) list_single_graphic_popup_conf_pane_g

0xeacf,	// (0x0008ba4c) list_single_graphic_popup_conf_pane_t1

0xeadd,	// (0x0008ba5a) linegrid_cams_pane_g1

0x79bf,	// (0x0008493c) linegrid_cams_pane_g2

0xe354,	// (0x0008b2d1) linegrid_cams_pane_g3

0xeae6,	// (0x0008ba63) linegrid_cams_pane_g4

0x79c8,	// (0x00084945) linegrid_cams_pane_g5

0x79d1,	// (0x0008494e) linegrid_cams_pane_g6

0xe35d,	// (0x0008b2da) linegrid_cams_pane_g7

0x0006,

0xf3a9,	// (0x0008c326) linegrid_cams_pane_g

0xeaef,	// (0x0008ba6c) popup_clock_analogue_window

0xeaef,	// (0x0008ba6c) popup_clock_digital_window

0xdea1,	// (0x0008ae1e) popup_phob_thumbnail_window

0xe228,	// (0x0008b1a5) call_video_uplink_pane_g1

0xeaf8,	// (0x0008ba75) call_video_uplink_pane_g2

0x0001,

0xf3b8,	// (0x0008c335) call_video_uplink_pane_g

0xeb00,	// (0x0008ba7d) video_uplink_pane

0xeb08,	// (0x0008ba85) mce_image_pane_g1

0x79da,	// (0x00084957) mce_image_pane_g2

0x79e4,	// (0x00084961) mce_image_pane_g3

0x79ec,	// (0x00084969) mce_image_pane_g4

0x79f4,	// (0x00084971) mce_image_pane_g5

0x0004,

0xf3bd,	// (0x0008c33a) mce_image_pane_g

0xeb12,	// (0x0008ba8f) control_top_pane_stacon_cp01_ParamLimits

0xeb12,	// (0x0008ba8f) control_top_pane_stacon_cp01

0xeb26,	// (0x0008baa3) uni_indicator_pane_stacon_cp01_ParamLimits

0xeb26,	// (0x0008baa3) uni_indicator_pane_stacon_cp01

0xeb37,	// (0x0008bab4) bg_popup_sub_pane_cp03

0x79fc,	// (0x00084979) chi_dic_find_pane

0x7a04,	// (0x00084981) listscroll_chi_dic_pane

0x7a0d,	// (0x0008498a) main_pane_chidic_g1

0xeb41,	// (0x0008babe) chi_dic_find_pane_t1

0xeb4f,	// (0x0008bacc) find_chidic_pane

0xeb58,	// (0x0008bad5) chi_dic_list_pane_ParamLimits

0xeb58,	// (0x0008bad5) chi_dic_list_pane

0xeb69,	// (0x0008bae6) scroll_pane_cp020

0xeb71,	// (0x0008baee) find_chidic_pane_t1

0xdea1,	// (0x0008ae1e) input_focus_pane_cp06

0x7a20,	// (0x0008499d) list_chi_dic_pane_ParamLimits

0x7a20,	// (0x0008499d) list_chi_dic_pane

0x7a3a,	// (0x000849b7) list_chi_dic_pane_t1_ParamLimits

0x7a3a,	// (0x000849b7) list_chi_dic_pane_t1

0xdea1,	// (0x0008ae1e) list_highlight_pane_cp020

0xeb80,	// (0x0008bafd) bg_cale_heading_pane_g1

0x7a4d,	// (0x000849ca) bg_cale_heading_pane_g2

0x7a55,	// (0x000849d2) bg_cale_heading_pane_g3

0x7a5d,	// (0x000849da) bg_cale_heading_pane_g4

0x7a67,	// (0x000849e4) bg_cale_heading_pane_g5

0x7a71,	// (0x000849ee) bg_cale_heading_pane_g6

0x7a79,	// (0x000849f6) bg_cale_heading_pane_g7

0x7a81,	// (0x000849fe) bg_cale_heading_pane_g8

0x7a8b,	// (0x00084a08) bg_cale_heading_pane_g9

0x0008,

0xf3c8,	// (0x0008c345) bg_cale_heading_pane_g

0xeb80,	// (0x0008bafd) bg_cale_side_pane_g1

0x7a95,	// (0x00084a12) bg_cale_side_pane_g2

0x7a9f,	// (0x00084a1c) bg_cale_side_pane_g3

0x7aa9,	// (0x00084a26) bg_cale_side_pane_g4

0x7ab3,	// (0x00084a30) bg_cale_side_pane_g5

0x7abd,	// (0x00084a3a) bg_cale_side_pane_g6

0x7ac7,	// (0x00084a44) bg_cale_side_pane_g7

0x7ad1,	// (0x00084a4e) bg_cale_side_pane_g8

0x7ad9,	// (0x00084a56) bg_cale_side_pane_g9

0x0008,

0xf3db,	// (0x0008c358) bg_cale_side_pane_g

0x7ae1,	// (0x00084a5e) popup_call_status_window_ParamLimits

0x7ae1,	// (0x00084a5e) popup_call_status_window

0xeb88,	// (0x0008bb05) stacon_top_pane

0xeb90,	// (0x0008bb0d) status_pane_ParamLimits

0xeb90,	// (0x0008bb0d) status_pane

0xeba5,	// (0x0008bb22) status_small_pane

0xebad,	// (0x0008bb2a) control_pane

0xdea1,	// (0x0008ae1e) stacon_bottom_pane

0xebb5,	// (0x0008bb32) list_single_mce_smart_pane_t1_ParamLimits

0xebb5,	// (0x0008bb32) list_single_mce_smart_pane_t1

0xebc8,	// (0x0008bb45) list_single_mce_smart_pane_t2_ParamLimits

0xebc8,	// (0x0008bb45) list_single_mce_smart_pane_t2

0x0001,

0xf3ee,	// (0x0008c36b) list_single_mce_smart_pane_t_ParamLimits

0xf3ee,	// (0x0008c36b) list_single_mce_smart_pane_t

0x7aed,	// (0x00084a6a) compass_pane

0x7af9,	// (0x00084a76) main_location2_pane_t1

0x7b0d,	// (0x00084a8a) main_location2_pane_t2

0x7b21,	// (0x00084a9e) main_location2_pane_t3

0x0003,

0xf3f3,	// (0x0008c370) main_location2_pane_t

0xebe7,	// (0x0008bb64) compass_pane_g1_ParamLimits

0xebe7,	// (0x0008bb64) compass_pane_g1

0x7b6b,	// (0x00084ae8) compass_pane_t1

0x7b7a,	// (0x00084af7) compass_pane_t2

0x0005,

0xf3fc,	// (0x0008c379) compass_pane_t

0x7bc5,	// (0x00084b42) text_secondary_cp61

0xebfb,	// (0x0008bb78) navi_pane_cams_g5

0xec1e,	// (0x0008bb9b) navi_pane_im_t1

0xec2c,	// (0x0008bba9) navi_pane_mp_g1_ParamLimits

0xec2c,	// (0x0008bba9) navi_pane_mp_g1

0xec40,	// (0x0008bbbd) navi_pane_mp_g2_ParamLimits

0xec40,	// (0x0008bbbd) navi_pane_mp_g2

0xec4c,	// (0x0008bbc9) navi_pane_mp_g3_ParamLimits

0xec4c,	// (0x0008bbc9) navi_pane_mp_g3

0x0002,

0xf410,	// (0x0008c38d) navi_pane_mp_g_ParamLimits

0xf410,	// (0x0008c38d) navi_pane_mp_g

0xec58,	// (0x0008bbd5) navi_pane_mp_t1

0xec66,	// (0x0008bbe3) navi_pane_mp_t2

0x0002,

0xf417,	// (0x0008c394) navi_pane_mp_t

0xeca2,	// (0x0008bc1f) navi_pane_vt_g1

0xec58,	// (0x0008bbd5) navi_pane_vt_t1

0xecaa,	// (0x0008bc27) navi_slider_pane

0xecb2,	// (0x0008bc2f) zooming_pane

0xecba,	// (0x0008bc37) navi_slider_pane_g1

0x7cda,	// (0x00084c57) navi_slider_pane_g2

0x0006,

0xf41e,	// (0x0008c39b) navi_slider_pane_g

0xecde,	// (0x0008bc5b) aid_levels_zoom

0xece6,	// (0x0008bc63) zooming_pane_g1

0xecee,	// (0x0008bc6b) zooming_pane_g2

0xecee,	// (0x0008bc6b) zooming_pane_g3

0x0002,

0xf42d,	// (0x0008c3aa) zooming_pane_g

0xecf6,	// (0x0008bc73) level_10_zoom

0xecff,	// (0x0008bc7c) level_11_zoom

0xed08,	// (0x0008bc85) level_1_zoom

0xed11,	// (0x0008bc8e) level_2_zoom

0xed1a,	// (0x0008bc97) level_3_zoom

0xed23,	// (0x0008bca0) level_4_zoom

0xed2c,	// (0x0008bca9) level_5_zoom

0xed35,	// (0x0008bcb2) level_6_zoom

0xed3e,	// (0x0008bcbb) level_7_zoom

0xed47,	// (0x0008bcc4) level_8_zoom

0xed50,	// (0x0008bccd) level_9_zoom

0xed61,	// (0x0008bcde) popup_phob_thumbnail_window_g1

0xed69,	// (0x0008bce6) popup_phob_thumbnail_window_g2

0x0001,

0xf434,	// (0x0008c3b1) popup_phob_thumbnail_window_g

0x169a,	// (0x0007e617) level_1_location

0x16a2,	// (0x0007e61f) level_2_location

0x16aa,	// (0x0007e627) level_3_location

0x16b2,	// (0x0007e62f) level_4_location

0xecb2,	// (0x0008bc2f) level_5_location

0x7cec,	// (0x00084c69) mce_icon_pane_g1

0x7cf4,	// (0x00084c71) mce_icon_pane_g2

0x0001,

0xf439,	// (0x0008c3b6) mce_icon_pane_g

0x7cfc,	// (0x00084c79) main_mup_pane_g1_ParamLimits

0x7cfc,	// (0x00084c79) main_mup_pane_g1

0x7d14,	// (0x00084c91) main_mup_pane_g2_ParamLimits

0x7d14,	// (0x00084c91) main_mup_pane_g2

0x7d30,	// (0x00084cad) main_mup_pane_g3_ParamLimits

0x7d30,	// (0x00084cad) main_mup_pane_g3

0x7d4c,	// (0x00084cc9) main_mup_pane_g4_ParamLimits

0x7d4c,	// (0x00084cc9) main_mup_pane_g4

0x7d68,	// (0x00084ce5) main_mup_pane_g5_ParamLimits

0x7d68,	// (0x00084ce5) main_mup_pane_g5

0x7d89,	// (0x00084d06) main_mup_pane_g6_ParamLimits

0x7d89,	// (0x00084d06) main_mup_pane_g6

0x7da5,	// (0x00084d22) main_mup_pane_g7_ParamLimits

0x7da5,	// (0x00084d22) main_mup_pane_g7

0x7dc1,	// (0x00084d3e) main_mup_pane_g8_ParamLimits

0x7dc1,	// (0x00084d3e) main_mup_pane_g8

0x7de1,	// (0x00084d5e) main_mup_pane_g9_ParamLimits

0x7de1,	// (0x00084d5e) main_mup_pane_g9

0x7e00,	// (0x00084d7d) main_mup_pane_g10_ParamLimits

0x7e00,	// (0x00084d7d) main_mup_pane_g10

0x7e1f,	// (0x00084d9c) main_mup_pane_g11_ParamLimits

0x7e1f,	// (0x00084d9c) main_mup_pane_g11

0x7e37,	// (0x00084db4) main_mup_pane_g12_ParamLimits

0x7e37,	// (0x00084db4) main_mup_pane_g12

0x7e45,	// (0x00084dc2) main_mup_pane_g13_ParamLimits

0x7e45,	// (0x00084dc2) main_mup_pane_g13

0x000c,

0xf43e,	// (0x0008c3bb) main_mup_pane_g_ParamLimits

0xf43e,	// (0x0008c3bb) main_mup_pane_g

0x7e5b,	// (0x00084dd8) main_mup_pane_t1_ParamLimits

0x7e5b,	// (0x00084dd8) main_mup_pane_t1

0x7e78,	// (0x00084df5) main_mup_pane_t2_ParamLimits

0x7e78,	// (0x00084df5) main_mup_pane_t2

0x7e92,	// (0x00084e0f) main_mup_pane_t3_ParamLimits

0x7e92,	// (0x00084e0f) main_mup_pane_t3

0x7eac,	// (0x00084e29) main_mup_pane_t4_ParamLimits

0x7eac,	// (0x00084e29) main_mup_pane_t4

0x7ebe,	// (0x00084e3b) main_mup_pane_t5_ParamLimits

0x7ebe,	// (0x00084e3b) main_mup_pane_t5

0x7ed0,	// (0x00084e4d) main_mup_pane_t6_ParamLimits

0x7ed0,	// (0x00084e4d) main_mup_pane_t6

0x0005,

0xf459,	// (0x0008c3d6) main_mup_pane_t_ParamLimits

0xf459,	// (0x0008c3d6) main_mup_pane_t

0x7ee6,	// (0x00084e63) mup_progress_pane_ParamLimits

0x7ee6,	// (0x00084e63) mup_progress_pane

0x7ef2,	// (0x00084e6f) mup_visualizer_pane_ParamLimits

0x7ef2,	// (0x00084e6f) mup_visualizer_pane

0x7f2c,	// (0x00084ea9) mup_volume_pane_ParamLimits

0x7f2c,	// (0x00084ea9) mup_volume_pane

0xe9cf,	// (0x0008b94c) mup_visualizer_pane_g1_ParamLimits

0xe9cf,	// (0x0008b94c) mup_visualizer_pane_g1

0xe9cf,	// (0x0008b94c) mup_visualizer_pane_g2_ParamLimits

0xe9cf,	// (0x0008b94c) mup_visualizer_pane_g2

0xebe7,	// (0x0008bb64) mup_visualizer_pane_g3_ParamLimits

0xebe7,	// (0x0008bb64) mup_visualizer_pane_g3

0x0002,

0xf466,	// (0x0008c3e3) mup_visualizer_pane_g_ParamLimits

0xf466,	// (0x0008c3e3) mup_visualizer_pane_g

0xe228,	// (0x0008b1a5) mup_volume_pane_g1

0xed79,	// (0x0008bcf6) mup_volume_pane_g2

0x0001,

0xf46d,	// (0x0008c3ea) mup_volume_pane_g

0xe228,	// (0x0008b1a5) mup_progress_pane_g1

0xed82,	// (0x0008bcff) mup_progress_pane_g2

0xed8b,	// (0x0008bd08) mup_progress_pane_g3

0x0002,

0xf472,	// (0x0008c3ef) mup_progress_pane_g

0xdea1,	// (0x0008ae1e) bg_popup_window_pane_cp05

0xed94,	// (0x0008bd11) heading_pane_cp02_ParamLimits

0xed94,	// (0x0008bd11) heading_pane_cp02

0xedae,	// (0x0008bd2b) list_popup_blid_pane

0xedb6,	// (0x0008bd33) list_blid_sat_info_pane_ParamLimits

0xedb6,	// (0x0008bd33) list_blid_sat_info_pane

0xedc9,	// (0x0008bd46) list_blid_sat_info_pane_g1

0xedd1,	// (0x0008bd4e) list_blid_sat_info_pane_t1

0x8039,	// (0x00084fb6) mup_equalizer_pane_ParamLimits

0x8039,	// (0x00084fb6) mup_equalizer_pane

0x805a,	// (0x00084fd7) mup_equalizer_pane_cp1_ParamLimits

0x805a,	// (0x00084fd7) mup_equalizer_pane_cp1

0x807b,	// (0x00084ff8) mup_equalizer_pane_cp2_ParamLimits

0x807b,	// (0x00084ff8) mup_equalizer_pane_cp2

0x809c,	// (0x00085019) mup_equalizer_pane_cp3_ParamLimits

0x809c,	// (0x00085019) mup_equalizer_pane_cp3

0x80bd,	// (0x0008503a) mup_equalizer_pane_cp4_ParamLimits

0x80bd,	// (0x0008503a) mup_equalizer_pane_cp4

0x80de,	// (0x0008505b) mup_equalizer_pane_cp5

0x80f4,	// (0x00085071) mup_equalizer_pane_cp6

0x810c,	// (0x00085089) mup_equalizer_pane_cp7

0x15b8,	// (0x0007e535) bg_popup_call_poc_act_pane_g9

0x15c0,	// (0x0007e53d) bg_popup_call_poc_act_pane_g10

0x15c8,	// (0x0007e545) bg_popup_call_poc_act_pane_g11

0x000a,

0xe0fc,	// (0x0008b079) mup_scale_pane

0xe228,	// (0x0008b1a5) mup_scale_pane_g1

0xeddf,	// (0x0008bd5c) mup_scale_pane_g2

0x0006,

0xf48e,	// (0x0008c40b) mup_scale_pane_g

0xee03,	// (0x0008bd80) msg_data_pane

0xee0b,	// (0x0008bd88) scroll_pane_cp017

0x8136,	// (0x000850b3) bg_list_pane_cp04_ParamLimits

0x8136,	// (0x000850b3) bg_list_pane_cp04

0xee13,	// (0x0008bd90) msg_data_pane_g1

0x815c,	// (0x000850d9) msg_data_pane_g2

0x8166,	// (0x000850e3) msg_data_pane_g3

0x816e,	// (0x000850eb) msg_data_pane_g4

0x8176,	// (0x000850f3) msg_data_pane_g5

0x817e,	// (0x000850fb) msg_data_pane_g6

0x8186,	// (0x00085103) msg_data_pane_g7

0x0006,

0xf49d,	// (0x0008c41a) msg_data_pane_g

0x818e,	// (0x0008510b) msg_text_pane_ParamLimits

0x818e,	// (0x0008510b) msg_text_pane

0x81c5,	// (0x00085142) qrid_highlight_pane_cp011_ParamLimits

0x81c5,	// (0x00085142) qrid_highlight_pane_cp011

0xdea1,	// (0x0008ae1e) msg_body_pane

0xdea1,	// (0x0008ae1e) msg_header_pane

0xee24,	// (0x0008bda1) input_focus_pane_cp07

0x81eb,	// (0x00085168) msg_header_pane_t1_ParamLimits

0x81eb,	// (0x00085168) msg_header_pane_t1

0x81fd,	// (0x0008517a) msg_header_pane_t2_ParamLimits

0x81fd,	// (0x0008517a) msg_header_pane_t2

0x0001,

0xf4b1,	// (0x0008c42e) msg_header_pane_t_ParamLimits

0xf4b1,	// (0x0008c42e) msg_header_pane_t

0xee39,	// (0x0008bdb6) msg_body_pane_g1

0x820f,	// (0x0008518c) msg_body_pane_t1_ParamLimits

0x820f,	// (0x0008518c) msg_body_pane_t1

0x8240,	// (0x000851bd) msg_body_pane_t2_ParamLimits

0x8240,	// (0x000851bd) msg_body_pane_t2

0x8252,	// (0x000851cf) msg_body_pane_t3_ParamLimits

0x8252,	// (0x000851cf) msg_body_pane_t3

0x0002,

0xf4b6,	// (0x0008c433) msg_body_pane_t_ParamLimits

0xf4b6,	// (0x0008c433) msg_body_pane_t

0x82b6,	// (0x00085233) main_viewer_pane_g1_ParamLimits

0x82b6,	// (0x00085233) main_viewer_pane_g1

0x82c2,	// (0x0008523f) main_viewer_pane_g2_ParamLimits

0x82c2,	// (0x0008523f) main_viewer_pane_g2

0x82ce,	// (0x0008524b) main_viewer_pane_g3_ParamLimits

0x82ce,	// (0x0008524b) main_viewer_pane_g3

0x82df,	// (0x0008525c) main_viewer_pane_g4_ParamLimits

0x82df,	// (0x0008525c) main_viewer_pane_g4

0x82f0,	// (0x0008526d) main_viewer_pane_g5_ParamLimits

0x82f0,	// (0x0008526d) main_viewer_pane_g5

0x82f0,	// (0x0008526d) main_viewer_pane_g7_ParamLimits

0x82f0,	// (0x0008526d) main_viewer_pane_g7

0xe86c,	// (0x0008b7e9) main_viewer_pane_g8_ParamLimits

0xe86c,	// (0x0008b7e9) main_viewer_pane_g8

0x0007,

0xf4c6,	// (0x0008c443) main_viewer_pane_g_ParamLimits

0xf4c6,	// (0x0008c443) main_viewer_pane_g

0xee41,	// (0x0008bdbe) viewer_content_pane_ParamLimits

0xee41,	// (0x0008bdbe) viewer_content_pane

0x832e,	// (0x000852ab) main_postcard_pane_g1_ParamLimits

0x832e,	// (0x000852ab) main_postcard_pane_g1

0x833c,	// (0x000852b9) main_postcard_pane_g2_ParamLimits

0x833c,	// (0x000852b9) main_postcard_pane_g2

0x834a,	// (0x000852c7) main_postcard_pane_g3_ParamLimits

0x834a,	// (0x000852c7) main_postcard_pane_g3

0x0005,

0xf4d7,	// (0x0008c454) main_postcard_pane_g_ParamLimits

0xf4d7,	// (0x0008c454) main_postcard_pane_g

0x835a,	// (0x000852d7) main_postcard_pane_g4

0x17ba,	// (0x0007e737) smil_status_volume_pane_g2

0x8386,	// (0x00085303) postcard_pane_ParamLimits

0x8386,	// (0x00085303) postcard_pane

0xe9cf,	// (0x0008b94c) postcard_pane_g1_ParamLimits

0xe9cf,	// (0x0008b94c) postcard_pane_g1

0x83b8,	// (0x00085335) postcard_pane_g2_ParamLimits

0x83b8,	// (0x00085335) postcard_pane_g2

0x83c4,	// (0x00085341) postcard_pane_g3_ParamLimits

0x83c4,	// (0x00085341) postcard_pane_g3

0xee4f,	// (0x0008bdcc) postcard_pane_g4_ParamLimits

0xee4f,	// (0x0008bdcc) postcard_pane_g4

0x83d0,	// (0x0008534d) postcard_pane_g5_ParamLimits

0x83d0,	// (0x0008534d) postcard_pane_g5

0x83dc,	// (0x00085359) postcard_pane_g6_ParamLimits

0x83dc,	// (0x00085359) postcard_pane_g6

0xee5d,	// (0x0008bdda) postcard_pane_g7_ParamLimits

0xee5d,	// (0x0008bdda) postcard_pane_g7

0x0006,

0xf4e4,	// (0x0008c461) postcard_pane_g_ParamLimits

0xf4e4,	// (0x0008c461) postcard_pane_g

0x83e8,	// (0x00085365) main_mp2_pane_g1_ParamLimits

0x83e8,	// (0x00085365) main_mp2_pane_g1

0x83f4,	// (0x00085371) main_mp2_pane_g2_ParamLimits

0x83f4,	// (0x00085371) main_mp2_pane_g2

0x8400,	// (0x0008537d) main_mp2_pane_g3_ParamLimits

0x8400,	// (0x0008537d) main_mp2_pane_g3

0x0002,

0xf4f3,	// (0x0008c470) main_mp2_pane_g_ParamLimits

0xf4f3,	// (0x0008c470) main_mp2_pane_g

0x840c,	// (0x00085389) main_mp2_pane_t1_ParamLimits

0x840c,	// (0x00085389) main_mp2_pane_t1

0x8423,	// (0x000853a0) main_mp2_pane_t2_ParamLimits

0x8423,	// (0x000853a0) main_mp2_pane_t2

0x8437,	// (0x000853b4) main_mp2_pane_t3_ParamLimits

0x8437,	// (0x000853b4) main_mp2_pane_t3

0x0002,

0xf4fa,	// (0x0008c477) main_mp2_pane_t_ParamLimits

0xf4fa,	// (0x0008c477) main_mp2_pane_t

0xee6b,	// (0x0008bde8) pec_content_pane_ParamLimits

0xee6b,	// (0x0008bde8) pec_content_pane

0xe517,	// (0x0008b494) scroll_pane_cp015

0xee7d,	// (0x0008bdfa) pec_attribute_pane_ParamLimits

0xee7d,	// (0x0008bdfa) pec_attribute_pane

0x8449,	// (0x000853c6) pec_content_pane_g1_ParamLimits

0x8449,	// (0x000853c6) pec_content_pane_g1

0xee8d,	// (0x0008be0a) pec_content_pane_t1_ParamLimits

0xee8d,	// (0x0008be0a) pec_content_pane_t1

0xee9f,	// (0x0008be1c) pec_content_pane_t2_ParamLimits

0xee9f,	// (0x0008be1c) pec_content_pane_t2

0x0001,

0xf501,	// (0x0008c47e) pec_content_pane_t_ParamLimits

0xf501,	// (0x0008c47e) pec_content_pane_t

0x8455,	// (0x000853d2) list_single_graphic_pane_cp01_ParamLimits

0x8455,	// (0x000853d2) list_single_graphic_pane_cp01

0xe0fc,	// (0x0008b079) bg_popup_sub_pane_cp04

0xeeb1,	// (0x0008be2e) popup_mup_playback_window_g1

0xeebd,	// (0x0008be3a) popup_mup_playback_window_t1

0xeed2,	// (0x0008be4f) popup_mup_playback_window_t2

0x0001,

0xf506,	// (0x0008c483) popup_mup_playback_window_t

0xef09,	// (0x0008be86) main_image_pane_g1_ParamLimits

0xef09,	// (0x0008be86) main_image_pane_g1

0xef4c,	// (0x0008bec9) scroll_pane_cp018_ParamLimits

0xef4c,	// (0x0008bec9) scroll_pane_cp018

0xef64,	// (0x0008bee1) scroll_pane_cp016_ParamLimits

0xef64,	// (0x0008bee1) scroll_pane_cp016

0x84ee,	// (0x0008546b) smil2_image_pane_ParamLimits

0x84ee,	// (0x0008546b) smil2_image_pane

0x851e,	// (0x0008549b) smil2_root_pane_ParamLimits

0x851e,	// (0x0008549b) smil2_root_pane

0x854a,	// (0x000854c7) smil2_text_pane_ParamLimits

0x854a,	// (0x000854c7) smil2_text_pane

0xdea1,	// (0x0008ae1e) bg_list_pane_cp06

0xefa0,	// (0x0008bf1d) grid_radio_pane

0xdea1,	// (0x0008ae1e) bg_popup_window_pane_cp06

0xefa8,	// (0x0008bf25) main_fmradio_pane_t1

0xea46,	// (0x0008b9c3) heading_pane_cp04

0xefb6,	// (0x0008bf33) main_fmradio_pane_t2

0x15d0,	// (0x0007e54d) popup_cale_lunar_info_window_g1

0xefc4,	// (0x0008bf41) main_fmradio_pane_t3

0x15d8,	// (0x0007e555) popup_cale_lunar_info_window_g2

0xefd2,	// (0x0008bf4f) main_fmradio_pane_t4

0x0001,

0xefe0,	// (0x0008bf5d) main_fmradio_pane_t5

0x0004,

0xf5e1,	// (0x0008c55e) popup_cale_lunar_info_window_g

0xf51b,	// (0x0008c498) main_fmradio_pane_t

0xefee,	// (0x0008bf6b) wait_bar_pane_cp03

0xeff6,	// (0x0008bf73) cell_fmradio_pane_ParamLimits

0xeff6,	// (0x0008bf73) cell_fmradio_pane

0xee5d,	// (0x0008bdda) cell_fmradio_pane_g1_ParamLimits

0xee5d,	// (0x0008bdda) cell_fmradio_pane_g1

0xdea1,	// (0x0008ae1e) grid_highlight_pane_cp011

0xf009,	// (0x0008bf86) poc_content_pane_ParamLimits

0xf009,	// (0x0008bf86) poc_content_pane

0xf01b,	// (0x0008bf98) scroll_pane_cp019

0x858a,	// (0x00085507) popup_call_poc_act_window_ParamLimits

0x858a,	// (0x00085507) popup_call_poc_act_window

0x8597,	// (0x00085514) popup_call_poc_inact_window_ParamLimits

0x8597,	// (0x00085514) popup_call_poc_inact_window

0xf5b8,	// (0x0008c535) bg_popup_call_poc_act_pane_g

0x1548,	// (0x0007e4c5) bg_popup_call_poc_inact_pane_g1

0x1550,	// (0x0007e4cd) bg_popup_call_poc_inact_pane_g2

0xf023,	// (0x0008bfa0) popup_call_poc_act_window_g2

0x1558,	// (0x0007e4d5) bg_popup_call_poc_inact_pane_g3

0x1560,	// (0x0007e4dd) bg_popup_call_poc_inact_pane_g4

0x1568,	// (0x0007e4e5) bg_popup_call_poc_inact_pane_g5

0xf02b,	// (0x0008bfa8) popup_call_poc_act_window_t1_ParamLimits

0xf02b,	// (0x0008bfa8) popup_call_poc_act_window_t1

0xf053,	// (0x0008bfd0) popup_call_poc_act_window_t2_ParamLimits

0xf053,	// (0x0008bfd0) popup_call_poc_act_window_t2

0xf07b,	// (0x0008bff8) popup_call_poc_act_window_t3_ParamLimits

0xf07b,	// (0x0008bff8) popup_call_poc_act_window_t3

0xf0a3,	// (0x0008c020) popup_call_poc_act_window_t4_ParamLimits

0xf0a3,	// (0x0008c020) popup_call_poc_act_window_t4

0x0003,

0xf526,	// (0x0008c4a3) popup_call_poc_act_window_t_ParamLimits

0xf526,	// (0x0008c4a3) popup_call_poc_act_window_t

0x1570,	// (0x0007e4ed) bg_popup_call_poc_inact_pane_g6

0x1578,	// (0x0007e4f5) bg_popup_call_poc_inact_pane_g7

0x1580,	// (0x0007e4fd) bg_popup_call_poc_inact_pane_g8

0xf0b5,	// (0x0008c032) popup_call_poc_inact_window_g2

0x1588,	// (0x0007e505) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5a5,	// (0x0008c522) bg_popup_call_poc_inact_pane_g

0xf0bd,	// (0x0008c03a) popup_call_poc_inact_window_t1_ParamLimits

0xf0bd,	// (0x0008c03a) popup_call_poc_inact_window_t1

0x0727,	// (0x0007d6a4) popup_call_poc_inact_window_t2_ParamLimits

0x0727,	// (0x0007d6a4) popup_call_poc_inact_window_t2

0x073c,	// (0x0007d6b9) popup_call_poc_inact_window_t3_ParamLimits

0x073c,	// (0x0007d6b9) popup_call_poc_inact_window_t3

0x0002,

0xf52f,	// (0x0008c4ac) popup_call_poc_inact_window_t_ParamLimits

0xf52f,	// (0x0008c4ac) popup_call_poc_inact_window_t

0x1740,	// (0x0007e6bd) context_pane_ParamLimits

0x8b87,	// (0x00085b04) signal_pane_ParamLimits

0xecb2,	// (0x0008bc2f) main_call2_pane

0x172e,	// (0x0007e6ab) popup_phob_thumbnail2_window_ParamLimits

0x172e,	// (0x0007e6ab) popup_phob_thumbnail2_window

0x8264,	// (0x000851e1) aid_hotspot_pointer_arrow_pane

0x826c,	// (0x000851e9) aid_hotspot_pointer_hand_pane

0x88b9,	// (0x00085836) phob_pre_status_pane_g5

0x663a,	// (0x000835b7) cams_zoom_pane_ParamLimits

0x6646,	// (0x000835c3) image_vga_pane_ParamLimits

0x6655,	// (0x000835d2) main_camera_pane_g1_ParamLimits

0x6663,	// (0x000835e0) main_camera_pane_g2_ParamLimits

0x666f,	// (0x000835ec) main_camera_pane_g3_ParamLimits

0x667b,	// (0x000835f8) main_camera_pane_g4_ParamLimits

0x6687,	// (0x00083604) main_camera_pane_g5_ParamLimits

0x6693,	// (0x00083610) main_camera_pane_g6_ParamLimits

0x669f,	// (0x0008361c) main_camera_pane_g7_ParamLimits

0xf22e,	// (0x0008c1ab) main_camera_pane_g_ParamLimits

0x66ab,	// (0x00083628) main_camera_pane_t1_ParamLimits

0x66bd,	// (0x0008363a) main_camera_pane_t2_ParamLimits

0xf23f,	// (0x0008c1bc) main_camera_pane_t_ParamLimits

0xe0fc,	// (0x0008b079) bg_popup_preview_window_pane_cp01_ParamLimits

0xe0fc,	// (0x0008b079) bg_popup_preview_window_pane_cp01

0x0751,	// (0x0007d6ce) popup_phob_thumbnail2_window_g1_ParamLimits

0x0751,	// (0x0007d6ce) popup_phob_thumbnail2_window_g1

0xdea1,	// (0x0008ae1e) call2_cli_visual_pane

0x85b3,	// (0x00085530) popup_call2_audio_conf_window_ParamLimits

0x85b3,	// (0x00085530) popup_call2_audio_conf_window

0x85c8,	// (0x00085545) popup_call2_audio_first_window_ParamLimits

0x85c8,	// (0x00085545) popup_call2_audio_first_window

0x8666,	// (0x000855e3) popup_call2_audio_in_window_ParamLimits

0x8666,	// (0x000855e3) popup_call2_audio_in_window

0x86a8,	// (0x00085625) popup_call2_audio_out_window_ParamLimits

0x86a8,	// (0x00085625) popup_call2_audio_out_window

0x870a,	// (0x00085687) popup_call2_audio_second_window_ParamLimits

0x870a,	// (0x00085687) popup_call2_audio_second_window

0x8768,	// (0x000856e5) popup_call2_audio_wait_window_ParamLimits

0x8768,	// (0x000856e5) popup_call2_audio_wait_window

0xdea1,	// (0x0008ae1e) bg_popup_call2_act_pane_cp03

0xe0de,	// (0x0008b05b) list_conf_pane_cp

0x075d,	// (0x0007d6da) popup_call2_audio_conf_window_t1

0xeaa3,	// (0x0008ba20) list_single_graphic_popup_conf2_pane_ParamLimits

0xeaa3,	// (0x0008ba20) list_single_graphic_popup_conf2_pane

0xeab6,	// (0x0008ba33) list_highlight_pane_cp04

0x076b,	// (0x0007d6e8) list_single_graphic_popup_conf2_pane_g1

0xeac7,	// (0x0008ba44) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf536,	// (0x0008c4b3) list_single_graphic_popup_conf2_pane_g

0x0775,	// (0x0007d6f2) list_single_graphic_popup_conf2_pane_t1

0x0783,	// (0x0007d700) bg_popup_call2_act_pane_cp01_ParamLimits

0x0783,	// (0x0007d700) bg_popup_call2_act_pane_cp01

0x080d,	// (0x0007d78a) call_type_pane_cp05_ParamLimits

0x080d,	// (0x0007d78a) call_type_pane_cp05

0x0861,	// (0x0007d7de) popup_call2_audio_second_window_g1_ParamLimits

0x0861,	// (0x0007d7de) popup_call2_audio_second_window_g1

0x08b5,	// (0x0007d832) popup_call2_audio_second_window_g2_ParamLimits

0x08b5,	// (0x0007d832) popup_call2_audio_second_window_g2

0x0002,

0xf53b,	// (0x0008c4b8) popup_call2_audio_second_window_g_ParamLimits

0xf53b,	// (0x0008c4b8) popup_call2_audio_second_window_g

0x091a,	// (0x0007d897) popup_call2_audio_second_window_t1_ParamLimits

0x091a,	// (0x0007d897) popup_call2_audio_second_window_t1

0x09d5,	// (0x0007d952) popup_call2_audio_second_window_t2_ParamLimits

0x09d5,	// (0x0007d952) popup_call2_audio_second_window_t2

0x0a28,	// (0x0007d9a5) popup_call2_audio_second_window_t3_ParamLimits

0x0a28,	// (0x0007d9a5) popup_call2_audio_second_window_t3

0x0003,

0xf542,	// (0x0008c4bf) popup_call2_audio_second_window_t_ParamLimits

0xf542,	// (0x0008c4bf) popup_call2_audio_second_window_t

0xdea1,	// (0x0008ae1e) bg_popup_call2_in_pane_cp02

0xdeab,	// (0x0008ae28) call_type_pane_cp04

0xdeb3,	// (0x0008ae30) popup_call2_audio_wait_window_g1

0xdebb,	// (0x0008ae38) popup_call2_audio_wait_window_g2

0x0001,

0xf11b,	// (0x0008c098) popup_call2_audio_wait_window_g

0xdec3,	// (0x0008ae40) popup_call2_audio_wait_window_t3

0x0b1b,	// (0x0007da98) bg_popup_call2_act_pane_ParamLimits

0x0b1b,	// (0x0007da98) bg_popup_call2_act_pane

0x0bdb,	// (0x0007db58) call_type_pane_cp03_ParamLimits

0x0bdb,	// (0x0007db58) call_type_pane_cp03

0x0c3f,	// (0x0007dbbc) popup_call2_audio_first_window_g1_ParamLimits

0x0c3f,	// (0x0007dbbc) popup_call2_audio_first_window_g1

0x0caf,	// (0x0007dc2c) popup_call2_audio_first_window_g2_ParamLimits

0x0caf,	// (0x0007dc2c) popup_call2_audio_first_window_g2

0xe9cf,	// (0x0008b94c) popup_call2_audio_first_window_g3_ParamLimits

0xe9cf,	// (0x0008b94c) popup_call2_audio_first_window_g3

0x0004,

0xf54b,	// (0x0008c4c8) popup_call2_audio_first_window_g_ParamLimits

0xf54b,	// (0x0008c4c8) popup_call2_audio_first_window_g

0x0d8d,	// (0x0007dd0a) popup_call2_audio_first_window_t1_ParamLimits

0x0d8d,	// (0x0007dd0a) popup_call2_audio_first_window_t1

0x0e90,	// (0x0007de0d) popup_call2_audio_first_window_t4_ParamLimits

0x0e90,	// (0x0007de0d) popup_call2_audio_first_window_t4

0x0f73,	// (0x0007def0) popup_call2_audio_first_window_t5_ParamLimits

0x0f73,	// (0x0007def0) popup_call2_audio_first_window_t5

0x0003,

0xf556,	// (0x0008c4d3) popup_call2_audio_first_window_t_ParamLimits

0xf556,	// (0x0008c4d3) popup_call2_audio_first_window_t

0xe0f4,	// (0x0008b071) bg_popup_call2_act_pane_g1

0x15e0,	// (0x0007e55d) popup_cale_lunar_info_window_t1

0x15ee,	// (0x0007e56b) popup_cale_lunar_info_window_t2

0x15fc,	// (0x0007e579) popup_cale_lunar_info_window_t3

0xdea1,	// (0x0008ae1e) bg_popup_call2_bubble_pane

0x1074,	// (0x0007dff1) bg_popup_call2_in_pane_cp01_ParamLimits

0x1074,	// (0x0007dff1) bg_popup_call2_in_pane_cp01

0xdb7d,	// (0x0008aafa) call_type_pane_cp02

0x10bc,	// (0x0007e039) popup_call2_audio_out_window_g1_ParamLimits

0x10bc,	// (0x0007e039) popup_call2_audio_out_window_g1

0x10e8,	// (0x0007e065) popup_call2_audio_out_window_g2_ParamLimits

0x10e8,	// (0x0007e065) popup_call2_audio_out_window_g2

0x1110,	// (0x0007e08d) popup_call2_audio_out_window_g3_ParamLimits

0x1110,	// (0x0007e08d) popup_call2_audio_out_window_g3

0x0003,

0xf55f,	// (0x0008c4dc) popup_call2_audio_out_window_g_ParamLimits

0xf55f,	// (0x0008c4dc) popup_call2_audio_out_window_g

0x114b,	// (0x0007e0c8) popup_call2_audio_out_window_t1_ParamLimits

0x114b,	// (0x0007e0c8) popup_call2_audio_out_window_t1

0x11aa,	// (0x0007e127) popup_call2_audio_out_window_t2_ParamLimits

0x11aa,	// (0x0007e127) popup_call2_audio_out_window_t2

0x11fe,	// (0x0007e17b) popup_call2_audio_out_window_t3_ParamLimits

0x11fe,	// (0x0007e17b) popup_call2_audio_out_window_t3

0x1214,	// (0x0007e191) popup_call2_audio_out_window_t4_ParamLimits

0x1214,	// (0x0007e191) popup_call2_audio_out_window_t4

0x122a,	// (0x0007e1a7) popup_call2_audio_out_window_t5_ParamLimits

0x122a,	// (0x0007e1a7) popup_call2_audio_out_window_t5

0x0005,

0xf568,	// (0x0008c4e5) popup_call2_audio_out_window_t_ParamLimits

0xf568,	// (0x0008c4e5) popup_call2_audio_out_window_t

0x128e,	// (0x0007e20b) bg_popup_call2_in_pane_ParamLimits

0x128e,	// (0x0007e20b) bg_popup_call2_in_pane

0x12ea,	// (0x0007e267) popup_call2_audio_in_window_g1_ParamLimits

0x12ea,	// (0x0007e267) popup_call2_audio_in_window_g1

0x1322,	// (0x0007e29f) popup_call2_audio_in_window_g2_ParamLimits

0x1322,	// (0x0007e29f) popup_call2_audio_in_window_g2

0x135a,	// (0x0007e2d7) popup_call2_audio_in_window_g3_ParamLimits

0x135a,	// (0x0007e2d7) popup_call2_audio_in_window_g3

0x0003,

0xf575,	// (0x0008c4f2) popup_call2_audio_in_window_g_ParamLimits

0xf575,	// (0x0008c4f2) popup_call2_audio_in_window_g

0x13b2,	// (0x0007e32f) popup_call2_audio_in_window_t1_ParamLimits

0x13b2,	// (0x0007e32f) popup_call2_audio_in_window_t1

0x1432,	// (0x0007e3af) popup_call2_audio_in_window_t2_ParamLimits

0x1432,	// (0x0007e3af) popup_call2_audio_in_window_t2

0x14b2,	// (0x0007e42f) popup_call2_audio_in_window_t3_ParamLimits

0x14b2,	// (0x0007e42f) popup_call2_audio_in_window_t3

0x14cc,	// (0x0007e449) popup_call2_audio_in_window_t4_ParamLimits

0x14cc,	// (0x0007e449) popup_call2_audio_in_window_t4

0x14de,	// (0x0007e45b) popup_call2_audio_in_window_t5_ParamLimits

0x14de,	// (0x0007e45b) popup_call2_audio_in_window_t5

0x14f3,	// (0x0007e470) popup_call2_audio_in_window_t6_ParamLimits

0x14f3,	// (0x0007e470) popup_call2_audio_in_window_t6

0x0005,

0xf57e,	// (0x0008c4fb) popup_call2_audio_in_window_t_ParamLimits

0xf57e,	// (0x0008c4fb) popup_call2_audio_in_window_t

0xe0f4,	// (0x0008b071) bg_popup_call2_in_pane_g1

0x160a,	// (0x0007e587) popup_cale_lunar_info_window_t4

0x0003,

0xf5e6,	// (0x0008c563) popup_cale_lunar_info_window_t

0xe0fc,	// (0x0008b079) bg_popup_call2_rect_pane_ParamLimits

0xe0fc,	// (0x0008b079) bg_popup_call2_rect_pane

0xdea1,	// (0x0008ae1e) call2_cli_visual_graphic_pane

0xdea1,	// (0x0008ae1e) call2_cli_visual_text_pane

0x8c2d,	// (0x00085baa) smil_status_volume_pane_g3

0x0002,

0xe228,	// (0x0008b1a5) call2_cli_visual_graphic_pane_g1

0xe228,	// (0x0008b1a5) call2_cli_visual_graphic_pane_g2

0xe228,	// (0x0008b1a5) call2_cli_visual_graphic_pane_g3

0x0002,

0xf58b,	// (0x0008c508) call2_cli_visual_graphic_pane_g

0x1508,	// (0x0007e485) bg_popup_call2_rect_pane_g1

0xe2b4,	// (0x0008b231) bg_popup_call2_rect_pane_g2

0x1510,	// (0x0007e48d) bg_popup_call2_rect_pane_g3

0x1518,	// (0x0007e495) bg_popup_call2_rect_pane_g4

0x1520,	// (0x0007e49d) bg_popup_call2_rect_pane_g5

0x1528,	// (0x0007e4a5) bg_popup_call2_rect_pane_g6

0x1530,	// (0x0007e4ad) bg_popup_call2_rect_pane_g7

0x1538,	// (0x0007e4b5) bg_popup_call2_rect_pane_g8

0x1540,	// (0x0007e4bd) bg_popup_call2_rect_pane_g9

0x0008,

0xf592,	// (0x0008c50f) bg_popup_call2_rect_pane_g

0x1548,	// (0x0007e4c5) bg_popup_call2_bubble_pane_g1

0x1550,	// (0x0007e4cd) bg_popup_call2_bubble_pane_g2

0x1558,	// (0x0007e4d5) bg_popup_call2_bubble_pane_g3

0x1560,	// (0x0007e4dd) bg_popup_call2_bubble_pane_g4

0x1568,	// (0x0007e4e5) bg_popup_call2_bubble_pane_g5

0x1570,	// (0x0007e4ed) bg_popup_call2_bubble_pane_g6

0x1578,	// (0x0007e4f5) bg_popup_call2_bubble_pane_g7

0x1580,	// (0x0007e4fd) bg_popup_call2_bubble_pane_g8

0x1588,	// (0x0007e505) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5a5,	// (0x0008c522) bg_popup_call2_bubble_pane_g

0x61b3,	// (0x00083130) aid_cale_week_size_cell_pane

0x66cf,	// (0x0008364c) aid_cams_cif_uncrop_pane_ParamLimits

0x66cf,	// (0x0008364c) aid_cams_cif_uncrop_pane

0x682c,	// (0x000837a9) aid_cams_size_cell_ParamLimits

0x682c,	// (0x000837a9) aid_cams_size_cell

0x6838,	// (0x000837b5) grid_cams_pane_ParamLimits

0x6846,	// (0x000837c3) linegrid_cams_pane_ParamLimits

0x6972,	// (0x000838ef) call_video_pane_t1

0x6993,	// (0x00083910) call_video_pane_t2

0x0001,

0xf292,	// (0x0008c20f) call_video_pane_t

0x6eca,	// (0x00083e47) aid_cale_month_size_cell_pane_ParamLimits

0x6eca,	// (0x00083e47) aid_cale_month_size_cell_pane

0xf62f,	// (0x0008c5ac) smil_status_volume_pane_g

0x8c3a,	// (0x00085bb7) volume_smil_pane_ParamLimits

0x0396,	// (0x0007d313) aid_popup2_width_pane

0x60b0,	// (0x0008302d) cell_qdial_pane_g4_ParamLimits

0x60b0,	// (0x0008302d) cell_qdial_pane_g4

0x7b47,	// (0x00084ac4) aid_blid_cardinal_pane_ParamLimits

0x7b57,	// (0x00084ad4) aid_blid_destination_pane_ParamLimits

0x7b57,	// (0x00084ad4) aid_blid_destination_pane

0xe0fc,	// (0x0008b079) bg_popup_call_poc_act_pane_ParamLimits

0xe0fc,	// (0x0008b079) bg_popup_call_poc_act_pane

0xe0fc,	// (0x0008b079) bg_popup_call_poc_inact_pane_ParamLimits

0xe0fc,	// (0x0008b079) bg_popup_call_poc_inact_pane

0x1590,	// (0x0007e50d) bg_popup_call_poc_act_pane_g1

0x1598,	// (0x0007e515) bg_popup_call_poc_act_pane_g2

0x15a0,	// (0x0007e51d) bg_popup_call_poc_act_pane_g3

0x1560,	// (0x0007e4dd) bg_popup_call_poc_act_pane_g4

0x1568,	// (0x0007e4e5) bg_popup_call_poc_act_pane_g5

0x15a8,	// (0x0007e525) bg_popup_call_poc_act_pane_g6

0x1578,	// (0x0007e4f5) bg_popup_call_poc_act_pane_g7

0x15b0,	// (0x0007e52d) bg_popup_call_poc_act_pane_g8

0xdea1,	// (0x0008ae1e) main_usb_pane

0x1709,	// (0x0007e686) popup_cale_lunar_info_window

0x6cbe,	// (0x00083c3b) im_reading_pane_t1_ParamLimits

0xe46f,	// (0x0008b3ec) list_im_pane_ParamLimits

0xe480,	// (0x0008b3fd) scroll_pane_cp07_ParamLimits

0xdea1,	// (0x0008ae1e) grid_highlight_pane_cp012

0xe0fc,	// (0x0008b079) mup_scale_pane_ParamLimits

0xe9cf,	// (0x0008b94c) main_usb_pane_g1_ParamLimits

0xe9cf,	// (0x0008b94c) main_usb_pane_g1

0x87dc,	// (0x00085759) main_usb_pane_g2_ParamLimits

0x87dc,	// (0x00085759) main_usb_pane_g2

0x0001,

0xf5cf,	// (0x0008c54c) main_usb_pane_g_ParamLimits

0xf5cf,	// (0x0008c54c) main_usb_pane_g

0x87e8,	// (0x00085765) main_usb_pane_t1_ParamLimits

0x87e8,	// (0x00085765) main_usb_pane_t1

0x87fa,	// (0x00085777) main_usb_pane_t2_ParamLimits

0x87fa,	// (0x00085777) main_usb_pane_t2

0x880c,	// (0x00085789) main_usb_pane_t3_ParamLimits

0x880c,	// (0x00085789) main_usb_pane_t3

0x881e,	// (0x0008579b) main_usb_pane_t4_ParamLimits

0x881e,	// (0x0008579b) main_usb_pane_t4

0x8830,	// (0x000857ad) main_usb_pane_t5_ParamLimits

0x8830,	// (0x000857ad) main_usb_pane_t5

0x8842,	// (0x000857bf) main_usb_pane_t6_ParamLimits

0x8842,	// (0x000857bf) main_usb_pane_t6

0x0005,

0xf5d4,	// (0x0008c551) main_usb_pane_t_ParamLimits

0x7aed,	// (0x00084a6a) aid_text_placing

0x7af9,	// (0x00084a76) main_location2_pane_t1_ParamLimits

0x7b0d,	// (0x00084a8a) main_location2_pane_t2_ParamLimits

0x7b21,	// (0x00084a9e) main_location2_pane_t3_ParamLimits

0x7b35,	// (0x00084ab2) main_location2_pane_t4_ParamLimits

0x7b35,	// (0x00084ab2) main_location2_pane_t4

0xf3f3,	// (0x0008c370) main_location2_pane_t_ParamLimits

0xe138,	// (0x0008b0b5) find_pinb_pane_g2_ParamLimits

0xe138,	// (0x0008b0b5) find_pinb_pane_g2

0x0001,

0xf141,	// (0x0008c0be) find_pinb_pane_g_ParamLimits

0xf141,	// (0x0008c0be) find_pinb_pane_g

0xe144,	// (0x0008b0c1) find_pinb_pane_t1_ParamLimits

0xe156,	// (0x0008b0d3) find_pinb_pane_t2_ParamLimits

0xf146,	// (0x0008c0c3) find_pinb_pane_t_ParamLimits

0xdea1,	// (0x0008ae1e) main_call3_pane

0x72d6,	// (0x00084253) cale_month_day_heading_pane_t1_ParamLimits

0x7334,	// (0x000842b1) cale_month_day_heading_pane_t2_ParamLimits

0x7399,	// (0x00084316) cale_month_day_heading_pane_t3_ParamLimits

0x73fe,	// (0x0008437b) cale_month_day_heading_pane_t4_ParamLimits

0x7463,	// (0x000843e0) cale_month_day_heading_pane_t5_ParamLimits

0x74c8,	// (0x00084445) cale_month_day_heading_pane_t6_ParamLimits

0x752d,	// (0x000844aa) cale_month_day_heading_pane_t7_ParamLimits

0xf2ca,	// (0x0008c247) cale_month_day_heading_pane_t_ParamLimits

0xe6c0,	// (0x0008b63d) smil_status_volume_pane

0x83a0,	// (0x0008531d) postcard_address_pane_ParamLimits

0x83a0,	// (0x0008531d) postcard_address_pane

0x83ac,	// (0x00085329) postcard_message_pane_ParamLimits

0x83ac,	// (0x00085329) postcard_message_pane

0x87a7,	// (0x00085724) call2_cli_visual_pane_t1_ParamLimits

0x87a7,	// (0x00085724) call2_cli_visual_pane_t1

0x8d91,	// (0x00085d0e) postcard_message_pane_t1_ParamLimits

0x8d91,	// (0x00085d0e) postcard_message_pane_t1

0x8d7a,	// (0x00085cf7) postcard_address_pane_t1_ParamLimits

0x8d7a,	// (0x00085cf7) postcard_address_pane_t1

0x8d6b,	// (0x00085ce8) popup_call3_audio_in_window_ParamLimits

0x8d6b,	// (0x00085ce8) popup_call3_audio_in_window

0x8c4f,	// (0x00085bcc) bg_popup_call3_in_pane_ParamLimits

0x8c4f,	// (0x00085bcc) bg_popup_call3_in_pane

0x8cb1,	// (0x00085c2e) popup_call3_audio_in_window_g1_ParamLimits

0x8cb1,	// (0x00085c2e) popup_call3_audio_in_window_g1

0x8cc9,	// (0x00085c46) popup_call3_audio_in_window_g2_ParamLimits

0x8cc9,	// (0x00085c46) popup_call3_audio_in_window_g2

0x8ce1,	// (0x00085c5e) popup_call3_audio_in_window_g3_ParamLimits

0x8ce1,	// (0x00085c5e) popup_call3_audio_in_window_g3

0x0003,

0xf636,	// (0x0008c5b3) popup_call3_audio_in_window_g_ParamLimits

0xf636,	// (0x0008c5b3) popup_call3_audio_in_window_g

0x8d09,	// (0x00085c86) popup_call3_audio_in_window_t1_ParamLimits

0x8d09,	// (0x00085c86) popup_call3_audio_in_window_t1

0x8d31,	// (0x00085cae) popup_call3_audio_in_window_t2_ParamLimits

0x8d31,	// (0x00085cae) popup_call3_audio_in_window_t2

0x8d59,	// (0x00085cd6) popup_call3_audio_in_window_t3_ParamLimits

0x8d59,	// (0x00085cd6) popup_call3_audio_in_window_t3

0x0002,

0xf63f,	// (0x0008c5bc) popup_call3_audio_in_window_t_ParamLimits

0xf63f,	// (0x0008c5bc) popup_call3_audio_in_window_t

0xecb2,	// (0x0008bc2f) bg_popup_call3_rect_pane

0x1508,	// (0x0007e485) bg_popup_call3_rect_pane_g1

0xe2b4,	// (0x0008b231) bg_popup_call3_rect_pane_g2

0x1510,	// (0x0007e48d) bg_popup_call3_rect_pane_g3

0x1518,	// (0x0007e495) bg_popup_call3_rect_pane_g4

0x1520,	// (0x0007e49d) bg_popup_call3_rect_pane_g5

0x1528,	// (0x0007e4a5) bg_popup_call3_rect_pane_g6

0x1530,	// (0x0007e4ad) bg_popup_call3_rect_pane_g7

0x7f47,	// (0x00084ec4) mup_visualizer_osc_pane

0xed71,	// (0x0008bcee) mup_visualizer_spec_pane

0x8c6f,	// (0x00085bec) call3_video_qcif_pane_ParamLimits

0x8c6f,	// (0x00085bec) call3_video_qcif_pane

0x8c81,	// (0x00085bfe) call3_video_qcif_uncrop_pane_ParamLimits

0x8c81,	// (0x00085bfe) call3_video_qcif_uncrop_pane

0x8c8f,	// (0x00085c0c) call3_video_subqcif_pane_ParamLimits

0x8c8f,	// (0x00085c0c) call3_video_subqcif_pane

0x8ca1,	// (0x00085c1e) call3_video_subqcif_uncrop_pane_ParamLimits

0x8ca1,	// (0x00085c1e) call3_video_subqcif_uncrop_pane

0x8cf9,	// (0x00085c76) popup_call3_audio_in_window_g4_ParamLimits

0x8cf9,	// (0x00085c76) popup_call3_audio_in_window_g4

0x8c1c,	// (0x00085b99) mup_spec_half_pane

0x8c25,	// (0x00085ba2) mup_spec_half_pane_cp

0x17a0,	// (0x0007e71d) mup_osc_middle_pane

0x17a9,	// (0x0007e726) mup_visualizer_osc_pane_g1

0x8bfd,	// (0x00085b7a) mup_spec_bar_pane_ParamLimits

0x8bfd,	// (0x00085b7a) mup_spec_bar_pane

0x178d,	// (0x0007e70a) mup_spec_bar_pane_g1

0x1797,	// (0x0007e714) mup_spec_bar_pane_g2

0x0001,

0xf62a,	// (0x0008c5a7) mup_spec_bar_pane_g

0x61b3,	// (0x00083130) aid_cale_week_size_cell_pane_ParamLimits

0x61c6,	// (0x00083143) bg_cale_heading_pane_ParamLimits

0xe2e8,	// (0x0008b265) bg_cale_pane_cp01_ParamLimits

0x61e2,	// (0x0008315f) cale_week_corner_pane_ParamLimits

0x61f8,	// (0x00083175) cale_week_day_heading_pane_ParamLimits

0x6214,	// (0x00083191) cale_week_scroll_pane_g1_ParamLimits

0x622d,	// (0x000831aa) cale_week_scroll_pane_g2_ParamLimits

0x623e,	// (0x000831bb) cale_week_scroll_pane_g3_ParamLimits

0x624f,	// (0x000831cc) cale_week_scroll_pane_g4_ParamLimits

0x6260,	// (0x000831dd) cale_week_scroll_pane_g5_ParamLimits

0x6271,	// (0x000831ee) cale_week_scroll_pane_g6_ParamLimits

0x6282,	// (0x000831ff) cale_week_scroll_pane_g7_ParamLimits

0x6295,	// (0x00083212) cale_week_scroll_pane_g8_ParamLimits

0x62a8,	// (0x00083225) cale_week_scroll_pane_g9_ParamLimits

0x62b9,	// (0x00083236) cale_week_scroll_pane_g10_ParamLimits

0x62ca,	// (0x00083247) cale_week_scroll_pane_g11_ParamLimits

0x62db,	// (0x00083258) cale_week_scroll_pane_g12_ParamLimits

0x62ec,	// (0x00083269) cale_week_scroll_pane_g13_ParamLimits

0x6305,	// (0x00083282) cale_week_scroll_pane_g14_ParamLimits

0x631e,	// (0x0008329b) cale_week_scroll_pane_g15_ParamLimits

0xf1d2,	// (0x0008c14f) cale_week_scroll_pane_g_ParamLimits

0x6337,	// (0x000832b4) cale_week_time_pane_ParamLimits

0x634a,	// (0x000832c7) grid_cale_week_pane_ParamLimits

0xe301,	// (0x0008b27e) listscroll_cale_week_pane_t1

0x6367,	// (0x000832e4) scroll_pane_cp08_ParamLimits

0x6f1b,	// (0x00083e98) cale_month_corner_pane_ParamLimits

0xe696,	// (0x0008b613) cale_month_pane_t1

0x7285,	// (0x00084202) cale_month_week_pane_ParamLimits

0xe9cf,	// (0x0008b94c) popup_call_status_window_g1_ParamLimits

0x7910,	// (0x0008488d) popup_call_status_window_g2_ParamLimits

0x791c,	// (0x00084899) popup_call_status_window_g3_ParamLimits

0xf37a,	// (0x0008c2f7) popup_call_status_window_g_ParamLimits

0xea36,	// (0x0008b9b3) aid_call2_pane

0x81df,	// (0x0008515c) msg_header_pane_g1

0x83a0,	// (0x0008531d) postcard_address2_pane_ParamLimits

0x83a0,	// (0x0008531d) postcard_address2_pane

0x83ac,	// (0x00085329) postcard_message2_pane_ParamLimits

0x83ac,	// (0x00085329) postcard_message2_pane

0x8b95,	// (0x00085b12) message2_row_pane_ParamLimits

0x8b95,	// (0x00085b12) message2_row_pane

0x8bb0,	// (0x00085b2d) address2_row_pane_ParamLimits

0x8bb0,	// (0x00085b2d) address2_row_pane

0x175b,	// (0x0007e6d8) postcard_message2_row_pane_g1

0x1763,	// (0x0007e6e0) postcard_message2_row_pane_t1

0x175b,	// (0x0007e6d8) address2_row_pane_g1

0x1763,	// (0x0007e6e0) address2_row_pane_t1

0x659b,	// (0x00083518) aid_size_cell_vorec

0xdea1,	// (0x0008ae1e) main_rss_pane

0x8bc3,	// (0x00085b40) rss_list_single_pane_ParamLimits

0x8bc3,	// (0x00085b40) rss_list_single_pane

0x1771,	// (0x0007e6ee) rss_list_single_pane_t1

0x177f,	// (0x0007e6fc) rss_list_single_pane_t2

0x0001,

0xf625,	// (0x0008c5a2) rss_list_single_pane_t

0xdea1,	// (0x0008ae1e) main_camera2_pane

0xdea1,	// (0x0008ae1e) main_video2_pane

0x8df5,	// (0x00085d72) cams_zoom_pane_cp2_ParamLimits

0x8df5,	// (0x00085d72) cams_zoom_pane_cp2

0x8e01,	// (0x00085d7e) image2_vga_pane_ParamLimits

0x8e01,	// (0x00085d7e) image2_vga_pane

0x8e10,	// (0x00085d8d) main_camera2_pane_g1_ParamLimits

0x8e10,	// (0x00085d8d) main_camera2_pane_g1

0x8e1c,	// (0x00085d99) main_camera2_pane_g2_ParamLimits

0x8e1c,	// (0x00085d99) main_camera2_pane_g2

0x8e28,	// (0x00085da5) main_camera2_pane_g3_ParamLimits

0x8e28,	// (0x00085da5) main_camera2_pane_g3

0x8e34,	// (0x00085db1) main_camera2_pane_g4_ParamLimits

0x8e34,	// (0x00085db1) main_camera2_pane_g4

0x8e40,	// (0x00085dbd) main_camera2_pane_g5_ParamLimits

0x8e40,	// (0x00085dbd) main_camera2_pane_g5

0x8e4c,	// (0x00085dc9) main_camera2_pane_g6_ParamLimits

0x8e4c,	// (0x00085dc9) main_camera2_pane_g6

0x8e58,	// (0x00085dd5) main_camera2_pane_g7_ParamLimits

0x8e58,	// (0x00085dd5) main_camera2_pane_g7

0x8e64,	// (0x00085de1) main_camera2_pane_g8_ParamLimits

0x8e64,	// (0x00085de1) main_camera2_pane_g8

0x0008,

0xf646,	// (0x0008c5c3) main_camera2_pane_g_ParamLimits

0xf646,	// (0x0008c5c3) main_camera2_pane_g

0x8e7c,	// (0x00085df9) main_camera2_pane_t1_ParamLimits

0x8e7c,	// (0x00085df9) main_camera2_pane_t1

0x8e8e,	// (0x00085e0b) main_camera2_pane_t2_ParamLimits

0x8e8e,	// (0x00085e0b) main_camera2_pane_t2

0x8ea0,	// (0x00085e1d) main_camera2_pane_t3_ParamLimits

0x8ea0,	// (0x00085e1d) main_camera2_pane_t3

0x8eb2,	// (0x00085e2f) main_camera2_pane_t4_ParamLimits

0x8eb2,	// (0x00085e2f) main_camera2_pane_t4

0x0006,

0xf659,	// (0x0008c5d6) main_camera2_pane_t_ParamLimits

0xf659,	// (0x0008c5d6) main_camera2_pane_t

0x8f14,	// (0x00085e91) cams_zoom_pane_cp4_ParamLimits

0x8f14,	// (0x00085e91) cams_zoom_pane_cp4

0x8f24,	// (0x00085ea1) image2_cif_pane_ParamLimits

0x8f24,	// (0x00085ea1) image2_cif_pane

0x8f39,	// (0x00085eb6) image2_subqcif_pane_ParamLimits

0x8f39,	// (0x00085eb6) image2_subqcif_pane

0x8f48,	// (0x00085ec5) main_video2_pane_g1_ParamLimits

0x8f48,	// (0x00085ec5) main_video2_pane_g1

0x8f5a,	// (0x00085ed7) main_video2_pane_g2_ParamLimits

0x8f5a,	// (0x00085ed7) main_video2_pane_g2

0x8f6a,	// (0x00085ee7) main_video2_pane_g3_ParamLimits

0x8f6a,	// (0x00085ee7) main_video2_pane_g3

0x8f7a,	// (0x00085ef7) main_video2_pane_g4_ParamLimits

0x8f7a,	// (0x00085ef7) main_video2_pane_g4

0x8f8a,	// (0x00085f07) main_video2_pane_g5_ParamLimits

0x8f8a,	// (0x00085f07) main_video2_pane_g5

0x8f9a,	// (0x00085f17) main_video2_pane_g6_ParamLimits

0x8f9a,	// (0x00085f17) main_video2_pane_g6

0x0005,

0xf668,	// (0x0008c5e5) main_video2_pane_g_ParamLimits

0xf668,	// (0x0008c5e5) main_video2_pane_g

0x8fac,	// (0x00085f29) main_video2_pane_t1_ParamLimits

0x8fac,	// (0x00085f29) main_video2_pane_t1

0x8fc6,	// (0x00085f43) main_video2_pane_t2_ParamLimits

0x8fc6,	// (0x00085f43) main_video2_pane_t2

0x8fec,	// (0x00085f69) main_video2_pane_t3_ParamLimits

0x8fec,	// (0x00085f69) main_video2_pane_t3

0x0002,

0xf675,	// (0x0008c5f2) main_video2_pane_t_ParamLimits

0xf675,	// (0x0008c5f2) main_video2_pane_t

0x88f9,	// (0x00085876) call_muted_g2

0x0001,

0xf617,	// (0x0008c594) call_muted_g

0xdea1,	// (0x0008ae1e) main_mup2_pane

0x1830,	// (0x0007e7ad) main_mup2_pane_g1_ParamLimits

0x1830,	// (0x0007e7ad) main_mup2_pane_g1

0x9012,	// (0x00085f8f) main_mup2_pane_g2_ParamLimits

0x9012,	// (0x00085f8f) main_mup2_pane_g2

0x9294,	// (0x00086211) main_mup_pane_g13_cp1

0x929c,	// (0x00086219) mup_volume_pane_cp1

0x9032,	// (0x00085faf) main_mup2_pane_g4_ParamLimits

0x9032,	// (0x00085faf) main_mup2_pane_g4

0x9047,	// (0x00085fc4) main_mup2_pane_g5_ParamLimits

0x9047,	// (0x00085fc4) main_mup2_pane_g5

0x905c,	// (0x00085fd9) main_mup2_pane_g6_ParamLimits

0x905c,	// (0x00085fd9) main_mup2_pane_g6

0x9071,	// (0x00085fee) main_mup2_pane_g7_ParamLimits

0x9071,	// (0x00085fee) main_mup2_pane_g7

0x0006,

0xf67c,	// (0x0008c5f9) main_mup2_pane_g_ParamLimits

0xf67c,	// (0x0008c5f9) main_mup2_pane_g

0x908d,	// (0x0008600a) main_mup2_pane_t1_ParamLimits

0x908d,	// (0x0008600a) main_mup2_pane_t1

0x90a4,	// (0x00086021) main_mup2_pane_t2_ParamLimits

0x90a4,	// (0x00086021) main_mup2_pane_t2

0x90bb,	// (0x00086038) main_mup2_pane_t3_ParamLimits

0x90bb,	// (0x00086038) main_mup2_pane_t3

0x90d2,	// (0x0008604f) main_mup2_pane_t4_ParamLimits

0x90d2,	// (0x0008604f) main_mup2_pane_t4

0x90ec,	// (0x00086069) main_mup2_pane_t5_ParamLimits

0x90ec,	// (0x00086069) main_mup2_pane_t5

0x9106,	// (0x00086083) main_mup2_pane_t6_ParamLimits

0x9106,	// (0x00086083) main_mup2_pane_t6

0x0005,

0xf68b,	// (0x0008c608) main_mup2_pane_t_ParamLimits

0xf68b,	// (0x0008c608) main_mup2_pane_t

0x913e,	// (0x000860bb) mup2_visualizer_pane_ParamLimits

0x913e,	// (0x000860bb) mup2_visualizer_pane

0x9174,	// (0x000860f1) mup_progress_pane_cp_ParamLimits

0x9174,	// (0x000860f1) mup_progress_pane_cp

0x927f,	// (0x000861fc) mup_volume_pane_cp_ParamLimits

0x927f,	// (0x000861fc) mup_volume_pane_cp

0x918b,	// (0x00086108) mup2_visualizer_pane_g1_ParamLimits

0x918b,	// (0x00086108) mup2_visualizer_pane_g1

0x1802,	// (0x0007e77f) mup2_visualizer_pane_g2_ParamLimits

0x1802,	// (0x0007e77f) mup2_visualizer_pane_g2

0x91a0,	// (0x0008611d) mup2_visualizer_pane_g3_ParamLimits

0x91a0,	// (0x0008611d) mup2_visualizer_pane_g3

0x0002,

0xf698,	// (0x0008c615) mup2_visualizer_pane_g_ParamLimits

0xf698,	// (0x0008c615) mup2_visualizer_pane_g

0xef98,	// (0x0008bf15) aid_size_cell_fmradio

0x8a0f,	// (0x0008598c) aid_height_parent_landcape

0xe4fe,	// (0x0008b47b) wml_content_pane_cp

0xe506,	// (0x0008b483) wml_tabs_pane

0xe50f,	// (0x0008b48c) popup_wml_miniature_window

0xe517,	// (0x0008b494) scroll_pane_cp021

0xe52b,	// (0x0008b4a8) wml_content_pane_comp8

0xdea1,	// (0x0008ae1e) bg_popup_sub_pane_cp05

0x1820,	// (0x0007e79d) popup_wml_miniature_window_g1

0x1828,	// (0x0007e7a5) wml_miniature_view_pane

0x91ae,	// (0x0008612b) aid_size_wml_view

0x91b6,	// (0x00086133) wml_miniature_view_pane_g1

0x91bf,	// (0x0008613c) wml_miniature_view_pane_g2

0x91c8,	// (0x00086145) wml_miniature_view_pane_g3

0x91d0,	// (0x0008614d) wml_miniature_view_pane_g4

0x91d8,	// (0x00086155) wml_miniature_view_pane_g5

0x91e0,	// (0x0008615d) wml_miniature_view_pane_g6

0x91e8,	// (0x00086165) wml_miniature_view_pane_g7

0x91f0,	// (0x0008616d) wml_miniature_view_pane_g8

0x0007,

0xf69f,	// (0x0008c61c) wml_miniature_view_pane_g

0x1830,	// (0x0007e7ad) background_graphic_ParamLimits

0x1830,	// (0x0007e7ad) background_graphic

0x183c,	// (0x0007e7b9) wml_tabs_2_pane

0x1845,	// (0x0007e7c2) wml_tabs_3_pane_ParamLimits

0x1845,	// (0x0007e7c2) wml_tabs_3_pane

0x1857,	// (0x0007e7d4) wml_tabs_4_pane_ParamLimits

0x1857,	// (0x0007e7d4) wml_tabs_4_pane

0x186d,	// (0x0007e7ea) wml_tabs_5_pane_ParamLimits

0x186d,	// (0x0007e7ea) wml_tabs_5_pane

0x1887,	// (0x0007e804) wml_tabs_pane_g2_ParamLimits

0x1887,	// (0x0007e804) wml_tabs_pane_g2

0x189b,	// (0x0007e818) wml_tabs_pane_g3_ParamLimits

0x189b,	// (0x0007e818) wml_tabs_pane_g3

0x91f8,	// (0x00086175) wml_tabs_2_active_pane_ParamLimits

0x91f8,	// (0x00086175) wml_tabs_2_active_pane

0x9208,	// (0x00086185) wml_tabs_2_passive_pane_ParamLimits

0x9208,	// (0x00086185) wml_tabs_2_passive_pane

0x9218,	// (0x00086195) wml_tabs_3_active_pane_cp_ParamLimits

0x9218,	// (0x00086195) wml_tabs_3_active_pane_cp

0x9229,	// (0x000861a6) wml_tabs_3_passive_pane_ParamLimits

0x9229,	// (0x000861a6) wml_tabs_3_passive_pane

0x923a,	// (0x000861b7) wml_tabs_3_passive_pane_cp_ParamLimits

0x923a,	// (0x000861b7) wml_tabs_3_passive_pane_cp

0x924b,	// (0x000861c8) tabs_4_active_pane

0x9253,	// (0x000861d0) tabs_4_passive_pane

0x925b,	// (0x000861d8) tabs_4_passive_pane_cp

0x9263,	// (0x000861e0) tabs_4_passive_pane_cp2

0x87d4,	// (0x00085751) aid_height_text

0x7f14,	// (0x00084e91) mup_volume_cont_pane_ParamLimits

0x7f14,	// (0x00084e91) mup_volume_cont_pane

0x5cfd,	// (0x00082c7a) aid_size_cell_pinb

0x5d07,	// (0x00082c84) aid_size_list_pinb

0x915d,	// (0x000860da) mup2_volume_cont_pane_ParamLimits

0x915d,	// (0x000860da) mup2_volume_cont_pane

0x926b,	// (0x000861e8) mup2_volume_cont_pane_g1_ParamLimits

0x926b,	// (0x000861e8) mup2_volume_cont_pane_g1

0x5990,	// (0x0008290d) aid_size_cell_touch_ParamLimits

0x5990,	// (0x0008290d) aid_size_cell_touch

0x5be3,	// (0x00082b60) touch_pane_ParamLimits

0x5be3,	// (0x00082b60) touch_pane

0x0384,	// (0x0007d301) main_rss2_pane

0x18b8,	// (0x0007e835) listscroll_rss2_pane

0x18c1,	// (0x0007e83e) rss2_navigation_pane

0x18c9,	// (0x0007e846) list_rss2_pane

0xeb69,	// (0x0008bae6) scroll_pane_cp22

0x18d1,	// (0x0007e84e) rss2_navigation_pane_g1

0x18da,	// (0x0007e857) rss2_navigation_pane_g2

0x18e2,	// (0x0007e85f) rss2_navigation_pane_g3

0x0002,

0xf6b0,	// (0x0008c62d) rss2_navigation_pane_g

0x18ea,	// (0x0007e867) rss2_navigation_pane_t1

0x92a4,	// (0x00086221) rss2_list_single_pane_ParamLimits

0x92a4,	// (0x00086221) rss2_list_single_pane

0x18f8,	// (0x0007e875) rss2_list_single_pane_t2

0x1906,	// (0x0007e883) rss2_list_single_pane_t3_ParamLimits

0x1906,	// (0x0007e883) rss2_list_single_pane_t3

0x1923,	// (0x0007e8a0) rss2_list_single_pane_t4

0x7731,	// (0x000846ae) smil_status_pane_g1

0xf0d2,	// (0x0008c04f) main_image2_pane_ParamLimits

0xf0d2,	// (0x0008c04f) main_image2_pane

0x8e70,	// (0x00085ded) main_camera2_pane_g9_ParamLimits

0x8e70,	// (0x00085ded) main_camera2_pane_g9

0x8ec4,	// (0x00085e41) main_camera2_pane_t5_ParamLimits

0x8ec4,	// (0x00085e41) main_camera2_pane_t5

0x8ed6,	// (0x00085e53) main_camera2_pane_t6_ParamLimits

0x8ed6,	// (0x00085e53) main_camera2_pane_t6

0x92d5,	// (0x00086252) main_image2_pane_g1_ParamLimits

0x92d5,	// (0x00086252) main_image2_pane_g1

0x8574,	// (0x000854f1) smil2_video_pane_ParamLimits

0x8574,	// (0x000854f1) smil2_video_pane

0x03b2,	// (0x0007d32f) aid_zoom_text_primary_cp

0xda84,	// (0x0008aa01) popup_preview_fixed_window

0xe467,	// (0x0008b3e4) im_reading_pane_g1

0x8dba,	// (0x00085d37) cams2_bc_adjust_pane_cp_ParamLimits

0x8dba,	// (0x00085d37) cams2_bc_adjust_pane_cp

0x8f06,	// (0x00085e83) cams2_bc_adjust_pane_ParamLimits

0x8f06,	// (0x00085e83) cams2_bc_adjust_pane

0x2c69,	// (0x0007fbe6) cams2_bc_adjust_pane_g1

0x92e1,	// (0x0008625e) cams2_slider_pane

0x92ea,	// (0x00086267) cams2_slider_pane_g1

0x92f3,	// (0x00086270) cams2_slider_pane_g2

0x0006,

0xf6b7,	// (0x0008c634) cams2_slider_pane_g

0x5df8,	// (0x00082d75) calc_display_pane_ParamLimits

0x5e16,	// (0x00082d93) calc_paper_pane_ParamLimits

0x5e32,	// (0x00082daf) grid_calc_pane_ParamLimits

0x797e,	// (0x000848fb) popup_clock_digital_window_t1_ParamLimits

0xef35,	// (0x0008beb2) main_image_pane_t1

0x5dde,	// (0x00082d5b) aid_size_cell_calc_ParamLimits

0x5dde,	// (0x00082d5b) aid_size_cell_calc

0x8a41,	// (0x000859be) popup_blid_sat_info2_window_ParamLimits

0x8a41,	// (0x000859be) popup_blid_sat_info2_window

0x1939,	// (0x0007e8b6) aid_size_cell_blid

0x1941,	// (0x0007e8be) bg_popup_window_pane_cp07

0x1964,	// (0x0007e8e1) grid_popup_blid_pane

0x196e,	// (0x0007e8eb) heading_pane_cp05_ParamLimits

0x196e,	// (0x0007e8eb) heading_pane_cp05

0x1a38,	// (0x0007e9b5) cell_popup_blid_pane_ParamLimits

0x1a38,	// (0x0007e9b5) cell_popup_blid_pane

0x1a5c,	// (0x0007e9d9) cell_popup_blid_pane_g1

0x1a64,	// (0x0007e9e1) cell_popup_blid_pane_t1

0x9123,	// (0x000860a0) mup2_indicator_pane_ParamLimits

0x9123,	// (0x000860a0) mup2_indicator_pane

0xecb2,	// (0x0008bc2f) mup2_visualizer_osc_pane

0x180e,	// (0x0007e78b) mup2_visualizer_spec_pane_ParamLimits

0x180e,	// (0x0007e78b) mup2_visualizer_spec_pane

0x930d,	// (0x0008628a) mup2_spec_half_pane

0x9316,	// (0x00086293) mup2_spec_half_pane_cp

0x9320,	// (0x0008629d) mup2_spec_bar_pane_ParamLimits

0x9320,	// (0x0008629d) mup2_spec_bar_pane

0x178d,	// (0x0007e70a) mup2_spec_bar_pane_g1

0x1797,	// (0x0007e714) mup2_spec_bar_pane_g2

0x0001,

0xf62a,	// (0x0008c5a7) mup2_spec_bar_pane_g

0x933f,	// (0x000862bc) mup2_osc_middle_pane

0x17a9,	// (0x0007e726) mup2_visualizer_osc_pane_g1

0xdaae,	// (0x0008aa2b) popup_number_entry_window_t1_ParamLimits

0xdac1,	// (0x0008aa3e) popup_number_entry_window_t2_ParamLimits

0xdad3,	// (0x0008aa50) popup_number_entry_window_t3_ParamLimits

0x5c3a,	// (0x00082bb7) popup_number_entry_window_t5_ParamLimits

0x5c3a,	// (0x00082bb7) popup_number_entry_window_t5

0xf0ec,	// (0x0008c069) popup_number_entry_window_t_ParamLimits

0xdae5,	// (0x0008aa62) text_title_cp2_ParamLimits

0x8274,	// (0x000851f1) aid_hotspot_pointer_text2_pane

0x8302,	// (0x0008527f) main_viewer_pane_g9_ParamLimits

0x8302,	// (0x0008527f) main_viewer_pane_g9

0xe696,	// (0x0008b613) cale_month_pane_t1_ParamLimits

0xe6d3,	// (0x0008b650) bg_cale_pane_ParamLimits

0xe6eb,	// (0x0008b668) list_cale_pane_ParamLimits

0xe301,	// (0x0008b27e) listscroll_cale_day_pane_t1

0xe6fc,	// (0x0008b679) scroll_pane_cp09_ParamLimits

0x7f4f,	// (0x00084ecc) main_mup_eq_pane_t1_ParamLimits

0x7f4f,	// (0x00084ecc) main_mup_eq_pane_t1

0x7f69,	// (0x00084ee6) main_mup_eq_pane_t2_ParamLimits

0x7f69,	// (0x00084ee6) main_mup_eq_pane_t2

0x7f83,	// (0x00084f00) main_mup_eq_pane_t3_ParamLimits

0x7f83,	// (0x00084f00) main_mup_eq_pane_t3

0x7f9b,	// (0x00084f18) main_mup_eq_pane_t4_ParamLimits

0x7f9b,	// (0x00084f18) main_mup_eq_pane_t4

0x7fb3,	// (0x00084f30) main_mup_eq_pane_t5_ParamLimits

0x7fb3,	// (0x00084f30) main_mup_eq_pane_t5

0x7fcb,	// (0x00084f48) main_mup_eq_pane_t6_ParamLimits

0x7fcb,	// (0x00084f48) main_mup_eq_pane_t6

0x7fdf,	// (0x00084f5c) main_mup_eq_pane_t7_ParamLimits

0x7fdf,	// (0x00084f5c) main_mup_eq_pane_t7

0x7ff3,	// (0x00084f70) main_mup_eq_pane_t8_ParamLimits

0x7ff3,	// (0x00084f70) main_mup_eq_pane_t8

0x8009,	// (0x00084f86) main_mup_eq_pane_t9_ParamLimits

0x8009,	// (0x00084f86) main_mup_eq_pane_t9

0x8021,	// (0x00084f9e) main_mup_eq_pane_t10_ParamLimits

0x8021,	// (0x00084f9e) main_mup_eq_pane_t10

0x0009,

0xf479,	// (0x0008c3f6) main_mup_eq_pane_t_ParamLimits

0xf479,	// (0x0008c3f6) main_mup_eq_pane_t

0x80de,	// (0x0008505b) mup_equalizer_pane_cp5_ParamLimits

0x80f4,	// (0x00085071) mup_equalizer_pane_cp6_ParamLimits

0x810c,	// (0x00085089) mup_equalizer_pane_cp7_ParamLimits

0x0384,	// (0x0007d301) main_gallery_pane

0x17b2,	// (0x0007e72f) smil2_volume_pane

0x17cd,	// (0x0007e74a) smil_status_volume_pane_g1_ParamLimits

0x17ba,	// (0x0007e737) smil_status_volume_pane_g2_ParamLimits

0x8c2d,	// (0x00085baa) smil_status_volume_pane_g3_ParamLimits

0xf62f,	// (0x0008c5ac) smil_status_volume_pane_g_ParamLimits

0x1941,	// (0x0007e8be) bg_popup_window_pane_cp07_ParamLimits

0x194f,	// (0x0007e8cc) blid_firmament_pane

0x9348,	// (0x000862c5) aid_size_cell_gallery_ParamLimits

0x9348,	// (0x000862c5) aid_size_cell_gallery

0x9356,	// (0x000862d3) grid_gallery_pane_ParamLimits

0x9356,	// (0x000862d3) grid_gallery_pane

0x9366,	// (0x000862e3) cell_gallery_pane_ParamLimits

0x9366,	// (0x000862e3) cell_gallery_pane

0x1a72,	// (0x0007e9ef) bg_cell_gallery_focus_pane_ParamLimits

0x1a72,	// (0x0007e9ef) bg_cell_gallery_focus_pane

0x1a84,	// (0x0007ea01) cell_gallery_pane_g1_ParamLimits

0x1a84,	// (0x0007ea01) cell_gallery_pane_g1

0x93b4,	// (0x00086331) cell_gallery_pane_g2_ParamLimits

0x93b4,	// (0x00086331) cell_gallery_pane_g2

0x93c1,	// (0x0008633e) cell_gallery_pane_g3_ParamLimits

0x93c1,	// (0x0008633e) cell_gallery_pane_g3

0x1a90,	// (0x0007ea0d) cell_gallery_pane_g4_ParamLimits

0x1a90,	// (0x0007ea0d) cell_gallery_pane_g4

0x0003,

0xf6dd,	// (0x0008c65a) cell_gallery_pane_g_ParamLimits

0xf6dd,	// (0x0008c65a) cell_gallery_pane_g

0x1a9c,	// (0x0007ea19) bg_cell_gallery_focus_pane_g1

0x1aa4,	// (0x0007ea21) bg_cell_gallery_focus_pane_g2

0x1aac,	// (0x0007ea29) bg_cell_gallery_focus_pane_g3

0x1ab4,	// (0x0007ea31) bg_cell_gallery_focus_pane_g4

0x1abc,	// (0x0007ea39) bg_cell_gallery_focus_pane_g5

0x1ac4,	// (0x0007ea41) bg_cell_gallery_focus_pane_g6

0x1acc,	// (0x0007ea49) bg_cell_gallery_focus_pane_g7

0x1ad4,	// (0x0007ea51) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6e6,	// (0x0008c663) bg_cell_gallery_focus_pane_g

0x1adc,	// (0x0007ea59) aid_firma_cardinal

0x1af0,	// (0x0007ea6d) blid_firmament_pane_t1

0x1b07,	// (0x0007ea84) blid_firmament_pane_t2

0x1b1e,	// (0x0007ea9b) blid_firmament_pane_t3

0x1b35,	// (0x0007eab2) blid_firmament_pane_t4

0x0003,

0xf6f7,	// (0x0008c674) blid_firmament_pane_t

0x1b4c,	// (0x0007eac9) blid_sat_info_pane

0x1b5c,	// (0x0007ead9) blid_sat_info_pane_g1

0x1b5c,	// (0x0007ead9) blid_sat_info_pane_g2

0x0001,

0xf700,	// (0x0008c67d) blid_sat_info_pane_g

0x1b66,	// (0x0007eae3) blid_sat_info_pane_t1

0x1b74,	// (0x0007eaf1) smil2_volume_content_pane

0x1b7d,	// (0x0007eafa) smil2_volume_pane_g1

0x1b85,	// (0x0007eb02) smil2_volume_content_pane_g1

0x1b8e,	// (0x0007eb0b) smil2_volume_content_pane_g2

0x1b97,	// (0x0007eb14) smil2_volume_content_pane_g3

0x1ba0,	// (0x0007eb1d) smil2_volume_content_pane_g4

0x1ba9,	// (0x0007eb26) smil2_volume_content_pane_g5

0x1bb2,	// (0x0007eb2f) smil2_volume_content_pane_g6

0x1bbb,	// (0x0007eb38) smil2_volume_content_pane_g7

0x1bc4,	// (0x0007eb41) smil2_volume_content_pane_g8

0x1bcd,	// (0x0007eb4a) smil2_volume_content_pane_g9

0x1bd6,	// (0x0007eb53) smil2_volume_content_pane_g10

0x0009,

0xf705,	// (0x0008c682) smil2_volume_content_pane_g

0x63cd,	// (0x0008334a) cale_week_day_heading_pane_t1_ParamLimits

0x63e6,	// (0x00083363) cale_week_day_heading_pane_t2_ParamLimits

0x63ff,	// (0x0008337c) cale_week_day_heading_pane_t3_ParamLimits

0x6418,	// (0x00083395) cale_week_day_heading_pane_t4_ParamLimits

0x6431,	// (0x000833ae) cale_week_day_heading_pane_t5_ParamLimits

0x644a,	// (0x000833c7) cale_week_day_heading_pane_t6_ParamLimits

0x6463,	// (0x000833e0) cale_week_day_heading_pane_t7_ParamLimits

0xf1f1,	// (0x0008c16e) cale_week_day_heading_pane_t_ParamLimits

0xe313,	// (0x0008b290) bg_cale_side_pane_ParamLimits

0x647c,	// (0x000833f9) cale_week_time_pane_t1_ParamLimits

0x6494,	// (0x00083411) cale_week_time_pane_t2_ParamLimits

0x64ac,	// (0x00083429) cale_week_time_pane_t3_ParamLimits

0x64c4,	// (0x00083441) cale_week_time_pane_t4_ParamLimits

0x64dc,	// (0x00083459) cale_week_time_pane_t5_ParamLimits

0x64f4,	// (0x00083471) cale_week_time_pane_t6_ParamLimits

0x650c,	// (0x00083489) cale_week_time_pane_t7_ParamLimits

0x652c,	// (0x000834a9) cale_week_time_pane_t8_ParamLimits

0xf200,	// (0x0008c17d) cale_week_time_pane_t_ParamLimits

0x654c,	// (0x000834c9) cell_cale_week_pane_g2_ParamLimits

0xe313,	// (0x0008b290) bg_cale_side_pane_cp01_ParamLimits

0x75a2,	// (0x0008451f) cale_month_week_pane_t1_ParamLimits

0x75b9,	// (0x00084536) cale_month_week_pane_t2_ParamLimits

0x75d0,	// (0x0008454d) cale_month_week_pane_t3_ParamLimits

0x75e7,	// (0x00084564) cale_month_week_pane_t4_ParamLimits

0x75fe,	// (0x0008457b) cale_month_week_pane_t5_ParamLimits

0x7619,	// (0x00084596) cale_month_week_pane_t6_ParamLimits

0xf2d9,	// (0x0008c256) cale_month_week_pane_t_ParamLimits

0x76fe,	// (0x0008467b) cell_cale_month_pane_g1_ParamLimits

0x0384,	// (0x0007d301) main_cale_event_viewer_pane

0x0384,	// (0x0007d301) listscroll_cale_event_viewer_pane

0x1bdf,	// (0x0007eb5c) list_cale_ev_pane

0x1be7,	// (0x0007eb64) scroll_pane_cp023

0x1bf3,	// (0x0007eb70) field_cale_ev_pane_ParamLimits

0x1bf3,	// (0x0007eb70) field_cale_ev_pane

0x1c11,	// (0x0007eb8e) field_cale_ev_content_pane_ParamLimits

0x1c11,	// (0x0007eb8e) field_cale_ev_content_pane

0x1c1d,	// (0x0007eb9a) field_cale_ev_pane_g1_ParamLimits

0x1c1d,	// (0x0007eb9a) field_cale_ev_pane_g1

0x1c29,	// (0x0007eba6) field_cale_ev_pane_g2_ParamLimits

0x1c29,	// (0x0007eba6) field_cale_ev_pane_g2

0x1c41,	// (0x0007ebbe) field_cale_ev_pane_g3_ParamLimits

0x1c41,	// (0x0007ebbe) field_cale_ev_pane_g3

0x0002,

0xf71a,	// (0x0008c697) field_cale_ev_pane_g_ParamLimits

0xf71a,	// (0x0008c697) field_cale_ev_pane_g

0x1c59,	// (0x0007ebd6) field_cale_ev_pane_t1_ParamLimits

0x1c59,	// (0x0007ebd6) field_cale_ev_pane_t1

0x1c70,	// (0x0007ebed) field_cale_ev_content_pane_t1_ParamLimits

0x1c70,	// (0x0007ebed) field_cale_ev_content_pane_t1

0xee1b,	// (0x0008bd98) bg_button_pane_cp01

0xe1d3,	// (0x0008b150) listscroll_cale_week_pane_ParamLimits

0x61a9,	// (0x00083126) popup_toolbar_window_cp01

0xe301,	// (0x0008b27e) listscroll_cale_week_pane_t1_ParamLimits

0xe1d3,	// (0x0008b150) listscroll_cale_day_pane_ParamLimits

0x61a9,	// (0x00083126) popup_toolbar_window_cp02

0xe301,	// (0x0008b27e) listscroll_cale_day_pane_t1_ParamLimits

0xe1d3,	// (0x0008b150) main_cale_month_pane_ParamLimits

0x8b11,	// (0x00085a8e) popup_toolbar_window_cp03_ParamLimits

0x8b11,	// (0x00085a8e) popup_toolbar_window_cp03

0x848a,	// (0x00085407) main_image_pane_g2_ParamLimits

0x848a,	// (0x00085407) main_image_pane_g2

0x8496,	// (0x00085413) main_image_pane_g3_ParamLimits

0x8496,	// (0x00085413) main_image_pane_g3

0x0002,

0xf50b,	// (0x0008c488) main_image_pane_g_ParamLimits

0xf50b,	// (0x0008c488) main_image_pane_g

0xef35,	// (0x0008beb2) main_image_pane_t1_ParamLimits

0x84a2,	// (0x0008541f) main_image_pane_t2_ParamLimits

0x84a2,	// (0x0008541f) main_image_pane_t2

0x84b4,	// (0x00085431) main_image_pane_t3_ParamLimits

0x84b4,	// (0x00085431) main_image_pane_t3

0x84c6,	// (0x00085443) main_image_pane_t4_ParamLimits

0x84c6,	// (0x00085443) main_image_pane_t4

0x0003,

0xf512,	// (0x0008c48f) main_image_pane_t_ParamLimits

0xf512,	// (0x0008c48f) main_image_pane_t

0x84d8,	// (0x00085455) popup_image_details_window_cp01

0x84e2,	// (0x0008545f) popup_toobar_trans_pane_cp01_ParamLimits

0x84e2,	// (0x0008545f) popup_toobar_trans_pane_cp01

0x8a8e,	// (0x00085a0b) popup_image_details_window_ParamLimits

0x8a8e,	// (0x00085a0b) popup_image_details_window

0x1713,	// (0x0007e690) popup_image_focus_window

0x8dac,	// (0x00085d29) camera2_autofocus_pane_ParamLimits

0x8dac,	// (0x00085d29) camera2_autofocus_pane

0x0384,	// (0x0007d301) bg_popup_sub_pane_cp06

0x1c8e,	// (0x0007ec0b) popup_image_focus_window_g1

0x1c96,	// (0x0007ec13) popup_image_focus_window_g2

0x1c9e,	// (0x0007ec1b) popup_image_focus_window_g3

0x1ca6,	// (0x0007ec23) popup_image_focus_window_g4

0x0003,

0xf721,	// (0x0008c69e) popup_image_focus_window_g

0x1cae,	// (0x0007ec2b) popup_image_focus_window_t1

0x1cbc,	// (0x0007ec39) popup_image_focus_window_t2

0x1ccc,	// (0x0007ec49) popup_image_focus_window_t3

0x0002,

0xf72a,	// (0x0008c6a7) popup_image_focus_window_t

0x1cda,	// (0x0007ec57) camera2_autofocus_pane_g1

0xf0d2,	// (0x0008c04f) bg_tb_trans_pane_cp01

0x1ce8,	// (0x0007ec65) popup_image_details_window_g1

0x1cfb,	// (0x0007ec78) popup_image_details_window_g2

0x0002,

0xf73c,	// (0x0008c6b9) popup_image_details_window_g

0x1d24,	// (0x0007eca1) popup_image_details_window_t1

0x1d36,	// (0x0007ecb3) popup_image_details_window_t2

0x1d4f,	// (0x0007eccc) popup_image_details_window_t3

0x1d63,	// (0x0007ece0) popup_image_details_window_t4

0x1d7e,	// (0x0007ecfb) popup_image_details_window_t5

0x0004,

0xf743,	// (0x0008c6c0) popup_image_details_window_t

0xe1bf,	// (0x0008b13c) bg_calc_paper_pane_ParamLimits

0x5f29,	// (0x00082ea6) grid_highlight_pane_cp013

0x5f33,	// (0x00082eb0) list_calc_pane_ParamLimits

0x5f45,	// (0x00082ec2) scroll_pane_cp024

0xe1d3,	// (0x0008b150) bg_calc_display_pane_ParamLimits

0x5f4d,	// (0x00082eca) calc_display_pane_t1_ParamLimits

0x5f62,	// (0x00082edf) calc_display_pane_t2_ParamLimits

0x5f77,	// (0x00082ef4) calc_display_pane_t3_ParamLimits

0xf173,	// (0x0008c0f0) calc_display_pane_t_ParamLimits

0x6053,	// (0x00082fd0) cell_calc_pane_g2

0x0001,

0xf190,	// (0x0008c10d) cell_calc_pane_g

0x605c,	// (0x00082fd9) cell_calc_pane_t1

0xe232,	// (0x0008b1af) grid_highlight_pane_cp02_ParamLimits

0xe248,	// (0x0008b1c5) toolbar_button_pane_cp01_ParamLimits

0xe248,	// (0x0008b1c5) toolbar_button_pane_cp01

0xef7a,	// (0x0008bef7) temp_image_control_pane_ParamLimits

0xef7a,	// (0x0008bef7) temp_image_control_pane

0xf0d2,	// (0x0008c04f) main_mp3_pane

0x1d98,	// (0x0007ed15) temp_image_control_pane_g1_ParamLimits

0x1d98,	// (0x0007ed15) temp_image_control_pane_g1

0x1da6,	// (0x0007ed23) temp_image_control_pane_g2_ParamLimits

0x1da6,	// (0x0007ed23) temp_image_control_pane_g2

0x1db8,	// (0x0007ed35) temp_image_control_pane_g3_ParamLimits

0x1db8,	// (0x0007ed35) temp_image_control_pane_g3

0x93fe,	// (0x0008637b) temp_image_control_pane_g4_ParamLimits

0x93fe,	// (0x0008637b) temp_image_control_pane_g4

0x0003,

0xf74e,	// (0x0008c6cb) temp_image_control_pane_g_ParamLimits

0xf74e,	// (0x0008c6cb) temp_image_control_pane_g

0x1d98,	// (0x0007ed15) main_mp3_pane_g1

0x940f,	// (0x0008638c) main_mp3_pane_g2

0x0007,

0xf757,	// (0x0008c6d4) main_mp3_pane_g

0x1dfb,	// (0x0007ed78) main_mp3_pane_t1

0xe378,	// (0x0008b2f5) main_camera_pane_g8_ParamLimits

0xe378,	// (0x0008b2f5) main_camera_pane_g8

0x67e2,	// (0x0008375f) main_video_pane_g7_ParamLimits

0x67e2,	// (0x0008375f) main_video_pane_g7

0x8ef4,	// (0x00085e71) main_camera2_pane_t7_ParamLimits

0x8ef4,	// (0x00085e71) main_camera2_pane_t7

0xe4be,	// (0x0008b43b) scroll_pane_cp025_ParamLimits

0xe4be,	// (0x0008b43b) scroll_pane_cp025

0xe4d2,	// (0x0008b44f) scroll_pane_cp026_ParamLimits

0xe4d2,	// (0x0008b44f) scroll_pane_cp026

0xe4e1,	// (0x0008b45e) wml_content_pane_ParamLimits

0x0384,	// (0x0007d301) main_touch_calib_pane

0x94b3,	// (0x00086430) main_touch_calib_pane_g1

0x94bf,	// (0x0008643c) main_touch_calib_pane_g2

0x94cb,	// (0x00086448) main_touch_calib_pane_g3

0x94d7,	// (0x00086454) main_touch_calib_pane_g4

0x0003,

0xf775,	// (0x0008c6f2) main_touch_calib_pane_g

0x94e3,	// (0x00086460) main_touch_calib_pane_t1

0x94fa,	// (0x00086477) main_touch_calib_pane_t2

0x0004,

0xf77e,	// (0x0008c6fb) main_touch_calib_pane_t

0xebf3,	// (0x0008bb70) mup_progress_pane_cp02

0xec12,	// (0x0008bb8f) navi_pane_g1

0xec74,	// (0x0008bbf1) navi_pane_mp_t3

0xf0d2,	// (0x0008c04f) main_mp3_pane_ParamLimits

0x8b4f,	// (0x00085acc) navi_pane_ParamLimits

0x1d98,	// (0x0007ed15) main_mp3_pane_g1_ParamLimits

0x940f,	// (0x0008638c) main_mp3_pane_g2_ParamLimits

0x941b,	// (0x00086398) main_mp3_pane_g3_ParamLimits

0x941b,	// (0x00086398) main_mp3_pane_g3

0x9427,	// (0x000863a4) main_mp3_pane_g4_ParamLimits

0x9427,	// (0x000863a4) main_mp3_pane_g4

0x1dc8,	// (0x0007ed45) main_mp3_pane_g5_ParamLimits

0x1dc8,	// (0x0007ed45) main_mp3_pane_g5

0x1dd6,	// (0x0007ed53) main_mp3_pane_g6_ParamLimits

0x1dd6,	// (0x0007ed53) main_mp3_pane_g6

0x1de3,	// (0x0007ed60) main_mp3_pane_g7_ParamLimits

0x1de3,	// (0x0007ed60) main_mp3_pane_g7

0x1def,	// (0x0007ed6c) main_mp3_pane_g8_ParamLimits

0x1def,	// (0x0007ed6c) main_mp3_pane_g8

0xf757,	// (0x0008c6d4) main_mp3_pane_g_ParamLimits

0x9433,	// (0x000863b0) main_mp3_pane_t2

0x9443,	// (0x000863c0) main_mp3_pane_t3

0x1e09,	// (0x0007ed86) main_mp3_pane_t4

0x1e17,	// (0x0007ed94) main_mp3_pane_t5

0x0005,

0xf768,	// (0x0008c6e5) main_mp3_pane_t

0x1e25,	// (0x0007eda2) mup_progress_pane_cp01

0x03b2,	// (0x0007d32f) aid_zoom_text_secondary2

0x1bdf,	// (0x0007eb5c) list_cale_ev2_pane

0x1be7,	// (0x0007eb64) scroll_pane_cp023_ParamLimits

0x954f,	// (0x000864cc) field_cale_ev2_pane_ParamLimits

0x954f,	// (0x000864cc) field_cale_ev2_pane

0x9578,	// (0x000864f5) field_cale_ev2_pane_g1_ParamLimits

0x9578,	// (0x000864f5) field_cale_ev2_pane_g1

0x9584,	// (0x00086501) field_cale_ev2_pane_g2_ParamLimits

0x9584,	// (0x00086501) field_cale_ev2_pane_g2

0x959c,	// (0x00086519) field_cale_ev2_pane_g3_ParamLimits

0x959c,	// (0x00086519) field_cale_ev2_pane_g3

0x0003,

0xf789,	// (0x0008c706) field_cale_ev2_pane_g_ParamLimits

0xf789,	// (0x0008c706) field_cale_ev2_pane_g

0x1e2d,	// (0x0007edaa) field_cale_ev2_pane_t1_ParamLimits

0x1e2d,	// (0x0007edaa) field_cale_ev2_pane_t1

0x1e44,	// (0x0007edc1) field_cale_ev2_pane_t2_ParamLimits

0x1e44,	// (0x0007edc1) field_cale_ev2_pane_t2

0x0001,

0xf792,	// (0x0008c70f) field_cale_ev2_pane_t_ParamLimits

0xf792,	// (0x0008c70f) field_cale_ev2_pane_t

0x836a,	// (0x000852e7) main_postcard_pane_g5_ParamLimits

0x836a,	// (0x000852e7) main_postcard_pane_g5

0x8378,	// (0x000852f5) main_postcard_pane_g6_ParamLimits

0x8378,	// (0x000852f5) main_postcard_pane_g6

0x662a,	// (0x000835a7) camera2_autofocus_pane_cp_ParamLimits

0x662a,	// (0x000835a7) camera2_autofocus_pane_cp

0xf0d2,	// (0x0008c04f) main_mup3_pane

0x95d4,	// (0x00086551) main_mup3_pane_g1_ParamLimits

0x95d4,	// (0x00086551) main_mup3_pane_g1

0x95f5,	// (0x00086572) main_mup3_pane_g2_ParamLimits

0x95f5,	// (0x00086572) main_mup3_pane_g2

0x966d,	// (0x000865ea) main_mup3_pane_g3_ParamLimits

0x966d,	// (0x000865ea) main_mup3_pane_g3

0x96ac,	// (0x00086629) main_mup3_pane_g4_ParamLimits

0x96ac,	// (0x00086629) main_mup3_pane_g4

0x96eb,	// (0x00086668) main_mup3_pane_g5_ParamLimits

0x96eb,	// (0x00086668) main_mup3_pane_g5

0x972a,	// (0x000866a7) main_mup3_pane_g6_ParamLimits

0x972a,	// (0x000866a7) main_mup3_pane_g6

0x1e59,	// (0x0007edd6) main_mup3_pane_g7_ParamLimits

0x1e59,	// (0x0007edd6) main_mup3_pane_g7

0x0007,

0xf7a2,	// (0x0008c71f) main_mup3_pane_g_ParamLimits

0xf7a2,	// (0x0008c71f) main_mup3_pane_g

0x979c,	// (0x00086719) main_mup3_pane_t1_ParamLimits

0x979c,	// (0x00086719) main_mup3_pane_t1

0x9807,	// (0x00086784) main_mup3_pane_t2_ParamLimits

0x9807,	// (0x00086784) main_mup3_pane_t2

0x98cc,	// (0x00086849) main_mup3_pane_t4_ParamLimits

0x98cc,	// (0x00086849) main_mup3_pane_t4

0x991a,	// (0x00086897) main_mup3_pane_t5_ParamLimits

0x991a,	// (0x00086897) main_mup3_pane_t5

0x99c2,	// (0x0008693f) main_mup3_pane_t6_ParamLimits

0x99c2,	// (0x0008693f) main_mup3_pane_t6

0x0005,

0xf7b3,	// (0x0008c730) main_mup3_pane_t_ParamLimits

0xf7b3,	// (0x0008c730) main_mup3_pane_t

0x9a6a,	// (0x000869e7) mup3_progress_pane_ParamLimits

0x9a6a,	// (0x000869e7) mup3_progress_pane

0x9ad5,	// (0x00086a52) popup_mup3_control_window_ParamLimits

0x9ad5,	// (0x00086a52) popup_mup3_control_window

0x1e67,	// (0x0007ede4) popup_mup3_text_window

0x9aee,	// (0x00086a6b) mup3_progress_pane_t1

0x9b05,	// (0x00086a82) mup3_progress_pane_t2

0x1e6f,	// (0x0007edec) mup3_progress_pane_t3

0x0002,

0xf7c0,	// (0x0008c73d) mup3_progress_pane_t

0x1e86,	// (0x0007ee03) mup_progress_pane_cp03

0x0384,	// (0x0007d301) bg_tb_trans_pane_cp04

0x9b1c,	// (0x00086a99) mup3_volume_pane

0x9b24,	// (0x00086aa1) popup_mup3_control_window_g1

0x9b2d,	// (0x00086aaa) mup3_volume_pane_g1

0x9b36,	// (0x00086ab3) mup3_volume_pane_g2

0x9b3f,	// (0x00086abc) mup3_volume_pane_g3

0x0002,

0xf7c7,	// (0x0008c744) mup3_volume_pane_g

0x0384,	// (0x0007d301) bg_tb_trans_pane_cp03

0x1e96,	// (0x0007ee13) popup_mup3_text_window_g1

0x1e9e,	// (0x0007ee1b) popup_mup3_text_window_t1

0xe21b,	// (0x0008b198) list_calc_item_pane_g1_ParamLimits

0x18af,	// (0x0007e82c) mup_volume_pane_cp_g1

0x9511,	// (0x0008648e) main_touch_calib_pane_t3

0x9525,	// (0x000864a2) main_touch_calib_pane_t4

0x9539,	// (0x000864b6) main_touch_calib_pane_t5

0x038e,	// (0x0007d30b) aid_cell_size_toolbar2

0x0396,	// (0x0007d313) aid_popup3_width_pane

0x03a2,	// (0x0007d31f) aid_zoom_text_msg_primary

0x6601,	// (0x0008357e) vorec_t7

0xe1df,	// (0x0008b15c) bg_calc_paper_pane_g1_ParamLimits

0xe1eb,	// (0x0008b168) bg_calc_paper_pane_g2_ParamLimits

0xe1f7,	// (0x0008b174) bg_calc_paper_pane_g3_ParamLimits

0xe203,	// (0x0008b180) bg_calc_paper_pane_g4_ParamLimits

0xe20f,	// (0x0008b18c) bg_calc_paper_pane_g5_ParamLimits

0x5fb6,	// (0x00082f33) bg_calc_paper_pane_g6_ParamLimits

0x5fc7,	// (0x00082f44) bg_calc_paper_pane_g7_ParamLimits

0x5fd8,	// (0x00082f55) bg_calc_paper_pane_g8_ParamLimits

0xf17a,	// (0x0008c0f7) bg_calc_paper_pane_g_ParamLimits

0x5fe9,	// (0x00082f66) calc_bg_paper_pane_g9_ParamLimits

0x6711,	// (0x0008368e) image_qvga_pane_ParamLimits

0x6711,	// (0x0008368e) image_qvga_pane

0xe0fc,	// (0x0008b079) bg_popup_sub_pane_cp04_ParamLimits

0xeeb1,	// (0x0008be2e) popup_mup_playback_window_g1_ParamLimits

0xeebd,	// (0x0008be3a) popup_mup_playback_window_t1_ParamLimits

0xeed2,	// (0x0008be4f) popup_mup_playback_window_t2_ParamLimits

0xf506,	// (0x0008c483) popup_mup_playback_window_t_ParamLimits

0x9023,	// (0x00085fa0) main_mup2_pane_g3_ParamLimits

0x9023,	// (0x00085fa0) main_mup2_pane_g3

0x6a20,	// (0x0008399d) popup_toolbar_window_cp04

0x0909,	// (0x0007d886) popup_call2_audio_second_window_g3_ParamLimits

0x0909,	// (0x0007d886) popup_call2_audio_second_window_g3

0x0d13,	// (0x0007dc90) popup_call2_audio_first_window_g4_ParamLimits

0x0d13,	// (0x0007dc90) popup_call2_audio_first_window_g4

0x1392,	// (0x0007e30f) popup_call2_audio_in_window_g4_ParamLimits

0x1392,	// (0x0007e30f) popup_call2_audio_in_window_g4

0x847d,	// (0x000853fa) aid_area_sk_bg_cut_ParamLimits

0x847d,	// (0x000853fa) aid_area_sk_bg_cut

0xeee7,	// (0x0008be64) aid_area_sk_bg_cut_2_ParamLimits

0xeee7,	// (0x0008be64) aid_area_sk_bg_cut_2

0x93a4,	// (0x00086321) aid_placing_details_win

0x93ac,	// (0x00086329) aid_placing_details_win_2

0x1cda,	// (0x0007ec57) camera2_autofocus_pane_g1_ParamLimits

0x5b91,	// (0x00082b0e) popup_fixed_preview_cale_window_ParamLimits

0x5b91,	// (0x00082b0e) popup_fixed_preview_cale_window

0xecc3,	// (0x0008bc40) navi_slider_pane_g3

0xeccc,	// (0x0008bc49) navi_slider_pane_g4

0xecd5,	// (0x0008bc52) navi_slider_pane_g5

0xecc3,	// (0x0008bc40) navi_slider_pane_g6

0x7ce3,	// (0x00084c60) navi_slider_pane_g7

0xede8,	// (0x0008bd65) mup_scale_pane_g3

0xedf1,	// (0x0008bd6e) mup_scale_pane_g4

0xedfa,	// (0x0008bd77) mup_scale_pane_g5

0x8124,	// (0x000850a1) mup_scale_pane_g6

0x812d,	// (0x000850aa) mup_scale_pane_g7

0xecc3,	// (0x0008bc40) cams2_slider_pane_g3

0x1931,	// (0x0007e8ae) cams2_slider_pane_g4

0x92fc,	// (0x00086279) cams2_slider_pane_g5

0xecc3,	// (0x0008bc40) cams2_slider_pane_g6

0x9304,	// (0x00086281) cams2_slider_pane_g7

0x1b5c,	// (0x0007ead9) camera2_autofocus_pane_cp_g1

0x1eac,	// (0x0007ee29) bg_popup_preview_window_pane_cp02_ParamLimits

0x1eac,	// (0x0007ee29) bg_popup_preview_window_pane_cp02

0x1eb8,	// (0x0007ee35) list_fp_cale_pane_ParamLimits

0x1eb8,	// (0x0007ee35) list_fp_cale_pane

0x1ec4,	// (0x0007ee41) popup_fixed_preview_cale_window_t1_ParamLimits

0x1ec4,	// (0x0007ee41) popup_fixed_preview_cale_window_t1

0x9b48,	// (0x00086ac5) popup_fixed_preview_cale_window_t2_ParamLimits

0x9b48,	// (0x00086ac5) popup_fixed_preview_cale_window_t2

0x9b5d,	// (0x00086ada) popup_fixed_preview_cale_window_t3_ParamLimits

0x9b5d,	// (0x00086ada) popup_fixed_preview_cale_window_t3

0x0002,

0xf7ce,	// (0x0008c74b) popup_fixed_preview_cale_window_t_ParamLimits

0xf7ce,	// (0x0008c74b) popup_fixed_preview_cale_window_t

0x9b72,	// (0x00086aef) list_single_fp_cale_pane_ParamLimits

0x9b72,	// (0x00086aef) list_single_fp_cale_pane

0x1ee2,	// (0x0007ee5f) list_single_fp_cale_pane_g1_ParamLimits

0x1ee2,	// (0x0007ee5f) list_single_fp_cale_pane_g1

0x1eee,	// (0x0007ee6b) list_single_fp_cale_pane_g2_ParamLimits

0x1eee,	// (0x0007ee6b) list_single_fp_cale_pane_g2

0x0002,

0xf7d5,	// (0x0008c752) list_single_fp_cale_pane_g_ParamLimits

0xf7d5,	// (0x0008c752) list_single_fp_cale_pane_g

0x1f07,	// (0x0007ee84) list_single_fp_cale_pane_t1_ParamLimits

0x1f07,	// (0x0007ee84) list_single_fp_cale_pane_t1

0x1f19,	// (0x0007ee96) list_single_fp_cale_pane_t2_ParamLimits

0x1f19,	// (0x0007ee96) list_single_fp_cale_pane_t2

0x0001,

0xf7dc,	// (0x0008c759) list_single_fp_cale_pane_t_ParamLimits

0xf7dc,	// (0x0008c759) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x0384,	// (0x0007d301) main_dialer_pane

0x9b84,	// (0x00086b01) aid_cell_size_keypad

0x9b8e,	// (0x00086b0b) dialer_ne_pane

0x9b98,	// (0x00086b15) grid_dialer_command_1_pane

0x9ba0,	// (0x00086b1d) grid_dialer_command_2_pane

0x9ba8,	// (0x00086b25) grid_dialer_keypad_pane

0x9bba,	// (0x00086b37) bg_popup_call_pane_cp06_ParamLimits

0x9bba,	// (0x00086b37) bg_popup_call_pane_cp06

0x9bc6,	// (0x00086b43) dialer_ne_clear_pane_ParamLimits

0x9bc6,	// (0x00086b43) dialer_ne_clear_pane

0x1f4c,	// (0x0007eec9) dialer_ne_pane_g1

0x1f54,	// (0x0007eed1) dialer_ne_pane_t1_ParamLimits

0x1f54,	// (0x0007eed1) dialer_ne_pane_t1

0x9bd2,	// (0x00086b4f) dialer_ne_pane_t2_ParamLimits

0x9bd2,	// (0x00086b4f) dialer_ne_pane_t2

0x9bef,	// (0x00086b6c) dialer_ne_pane_t3_ParamLimits

0x9bef,	// (0x00086b6c) dialer_ne_pane_t3

0x0002,

0xf7e1,	// (0x0008c75e) dialer_ne_pane_t_ParamLimits

0xf7e1,	// (0x0008c75e) dialer_ne_pane_t

0x9c13,	// (0x00086b90) dialer_ne_pane_t3_copy1_ParamLimits

0x9c13,	// (0x00086b90) dialer_ne_pane_t3_copy1

0x9c37,	// (0x00086bb4) cell_dialer_keypad_pane_ParamLimits

0x9c37,	// (0x00086bb4) cell_dialer_keypad_pane

0x9c4e,	// (0x00086bcb) cell_dialer_command_1_pane_ParamLimits

0x9c4e,	// (0x00086bcb) cell_dialer_command_1_pane

0x9c64,	// (0x00086be1) cell_dialer_command_2_pane_ParamLimits

0x9c64,	// (0x00086be1) cell_dialer_command_2_pane

0x1f66,	// (0x0007eee3) bg_button_pane_cp02_ParamLimits

0x1f66,	// (0x0007eee3) bg_button_pane_cp02

0x9c73,	// (0x00086bf0) cell_dialer_keypad_pane_g1_ParamLimits

0x9c73,	// (0x00086bf0) cell_dialer_keypad_pane_g1

0x1f66,	// (0x0007eee3) bg_button_pane_cp03_ParamLimits

0x1f66,	// (0x0007eee3) bg_button_pane_cp03

0x9c88,	// (0x00086c05) cell_dialer_command_1_pane_g1_ParamLimits

0x9c88,	// (0x00086c05) cell_dialer_command_1_pane_g1

0x1f72,	// (0x0007eeef) bg_button_pane_cp04

0x9c9c,	// (0x00086c19) cell_dialer_command_2_pane_g1

0xecb2,	// (0x0008bc2f) bg_button_pane_cp06

0x1f7a,	// (0x0007eef7) dialer_ne_clear_pane_g1

0x7c26,	// (0x00084ba3) navi_pane_g2

0x7c54,	// (0x00084bd1) navi_pane_g3

0x0002,

0xf409,	// (0x0008c386) navi_pane_g

0x7c7f,	// (0x00084bfc) navi_pane_mv_g2

0x7ca6,	// (0x00084c23) navi_pane_mv_g5

0x7cae,	// (0x00084c2b) navi_pane_mv_t1

0xe1d3,	// (0x0008b150) main_clock2_pane

0x9ccb,	// (0x00086c48) main_clock2_list_pane_ParamLimits

0x9ccb,	// (0x00086c48) main_clock2_list_pane

0x9cf3,	// (0x00086c70) main_clock2_pane_t1_ParamLimits

0x9cf3,	// (0x00086c70) main_clock2_pane_t1

0x9d21,	// (0x00086c9e) main_clock2_pane_t2_ParamLimits

0x9d21,	// (0x00086c9e) main_clock2_pane_t2

0x0004,

0xf7e8,	// (0x0008c765) main_clock2_pane_t_ParamLimits

0xf7e8,	// (0x0008c765) main_clock2_pane_t

0x9d88,	// (0x00086d05) popup_clock_analogue_window_cp03_ParamLimits

0x9d88,	// (0x00086d05) popup_clock_analogue_window_cp03

0x9da6,	// (0x00086d23) popup_clock_digital_window_cp02_ParamLimits

0x9da6,	// (0x00086d23) popup_clock_digital_window_cp02

0x9e13,	// (0x00086d90) main_clock2_list_single_pane_ParamLimits

0x9e13,	// (0x00086d90) main_clock2_list_single_pane

0xecb2,	// (0x0008bc2f) list_highlight_pane_cp05

0x1f82,	// (0x0007eeff) main_clock2_list_single_pane_t1

0x6a20,	// (0x0008399d) popup_toolbar_window_cp04_ParamLimits

0x93ce,	// (0x0008634b) camera2_autofocus_pane_g2_ParamLimits

0x93ce,	// (0x0008634b) camera2_autofocus_pane_g2

0x93da,	// (0x00086357) camera2_autofocus_pane_g3_ParamLimits

0x93da,	// (0x00086357) camera2_autofocus_pane_g3

0x93e6,	// (0x00086363) camera2_autofocus_pane_g4_ParamLimits

0x93e6,	// (0x00086363) camera2_autofocus_pane_g4

0x93f2,	// (0x0008636f) camera2_autofocus_pane_g5_ParamLimits

0x93f2,	// (0x0008636f) camera2_autofocus_pane_g5

0x0004,

0xf731,	// (0x0008c6ae) camera2_autofocus_pane_g_ParamLimits

0xf731,	// (0x0008c6ae) camera2_autofocus_pane_g

0x95b4,	// (0x00086531) camera2_autofocus_pane_cp_g2

0x95bc,	// (0x00086539) camera2_autofocus_pane_cp_g3

0x95c4,	// (0x00086541) camera2_autofocus_pane_cp_g4

0x95cc,	// (0x00086549) camera2_autofocus_pane_cp_g5

0x0004,

0xf797,	// (0x0008c714) camera2_autofocus_pane_cp_g

0x9bb2,	// (0x00086b2f) popup_dialer_spcha_window

0x0384,	// (0x0007d301) bg_popup_sub_pane_cp07

0x1f90,	// (0x0007ef0d) list_spcha_pane

0x1f98,	// (0x0007ef15) list_single_spcha_pane_ParamLimits

0x1f98,	// (0x0007ef15) list_single_spcha_pane

0x0384,	// (0x0007d301) list_highlight_pane_cp06

0x1fa9,	// (0x0007ef26) list_single_spcha_pane_t1

0x113c,	// (0x0007e0b9) popup_call2_audio_out_window_g4_ParamLimits

0x113c,	// (0x0007e0b9) popup_call2_audio_out_window_g4

0x0384,	// (0x0007d301) main_imed2_pane

0x171b,	// (0x0007e698) popup_imed_adjust2_window

0x8a9c,	// (0x00085a19) popup_imed_trans_window_ParamLimits

0x8a9c,	// (0x00085a19) popup_imed_trans_window

0x199a,	// (0x0007e917) popup_blid_sat_info2_window_t1

0x19a8,	// (0x0007e925) popup_blid_sat_info2_window_t2

0x000a,

0xf6c6,	// (0x0008c643) popup_blid_sat_info2_window_t

0x9ebd,	// (0x00086e3a) aid_size_cell_colour_35

0x9ed7,	// (0x00086e54) aid_size_cell_colour_112

0x9eee,	// (0x00086e6b) aid_size_cell_effect

0xf0d2,	// (0x0008c04f) bg_tb_trans_pane_cp02

0xf0e0,	// (0x0008c05d) heading_imed_pane

0x9f08,	// (0x00086e85) listscroll_imed_pane

0x1fb7,	// (0x0007ef34) heading_imed_pane_g1

0x1fbf,	// (0x0007ef3c) heading_imed_pane_t1

0x1fcd,	// (0x0007ef4a) grid_imed_colour_35_pane_ParamLimits

0x1fcd,	// (0x0007ef4a) grid_imed_colour_35_pane

0x9f14,	// (0x00086e91) grid_imed_effect_pane

0x1fe4,	// (0x0007ef61) list_imed_aspect_pane

0x9f24,	// (0x00086ea1) scroll_pane_cp027_ParamLimits

0x9f24,	// (0x00086ea1) scroll_pane_cp027

0x9f30,	// (0x00086ead) cell_imed_effect_pane_ParamLimits

0x9f30,	// (0x00086ead) cell_imed_effect_pane

0x1fec,	// (0x0007ef69) cell_imed_colour_pane_ParamLimits

0x1fec,	// (0x0007ef69) cell_imed_colour_pane

0x202e,	// (0x0007efab) cell_imed_colour_pane_g1_ParamLimits

0x202e,	// (0x0007efab) cell_imed_colour_pane_g1

0x203f,	// (0x0007efbc) hgihlgiht_grid_pane_cp016_ParamLimits

0x203f,	// (0x0007efbc) hgihlgiht_grid_pane_cp016

0x9f48,	// (0x00086ec5) cell_imed_effect_pane_g1

0x9f50,	// (0x00086ecd) grid_highlight_pane_cp017

0x2050,	// (0x0007efcd) list_imed_single_pane_ParamLimits

0x2050,	// (0x0007efcd) list_imed_single_pane

0x0384,	// (0x0007d301) list_highlight_pane_cp07

0x2065,	// (0x0007efe2) list_imed_aspect_pane_comp1_t1

0x16f3,	// (0x0007e670) bg_tb_trans_pane_cp05

0x2087,	// (0x0007f004) popup_imed_adjust2_window_g1

0x20ae,	// (0x0007f02b) popup_imed_adjust2_window_t1

0x20c6,	// (0x0007f043) slider_imed_adjust_pane

0x20da,	// (0x0007f057) slider_imed_adjust_pane_g1

0x20ea,	// (0x0007f067) slider_imed_adjust_pane_g2

0x20fa,	// (0x0007f077) slider_imed_adjust_pane_g3

0x210b,	// (0x0007f088) slider_imed_adjust_pane_g4

0x0003,

0xf805,	// (0x0008c782) slider_imed_adjust_pane_g

0x9f59,	// (0x00086ed6) aid_size_cell_clipart2

0x9f65,	// (0x00086ee2) grid_imed_clipart_pane

0x211c,	// (0x0007f099) scroll_pane_cp031

0x9f6f,	// (0x00086eec) cell_imed_clipart_pane_ParamLimits

0x9f6f,	// (0x00086eec) cell_imed_clipart_pane

0x9f91,	// (0x00086f0e) cell_imed_clipart_pane_g1

0x0384,	// (0x0007d301) grid_highlight_pane_cp014

0x9cd7,	// (0x00086c54) main_clock2_pane_g1_ParamLimits

0x9cd7,	// (0x00086c54) main_clock2_pane_g1

0x9dbe,	// (0x00086d3b) aid_call2_pane_cp10

0x9dd0,	// (0x00086d4d) aid_call_pane_cp10

0xebe7,	// (0x0008bb64) popup_clock_analogue_window_cp10_g1

0xebe7,	// (0x0008bb64) popup_clock_analogue_window_cp10_g2

0x9de2,	// (0x00086d5f) popup_clock_analogue_window_cp10_g3

0x9de2,	// (0x00086d5f) popup_clock_analogue_window_cp10_g4

0xebe7,	// (0x0008bb64) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7f3,	// (0x0008c770) popup_clock_analogue_window_cp10_g

0x9df4,	// (0x00086d71) popup_clock_analogue_window_cp10_t1

0x9e25,	// (0x00086da2) clock_digital_number_pane_cp10_ParamLimits

0x9e25,	// (0x00086da2) clock_digital_number_pane_cp10

0x9e3d,	// (0x00086dba) clock_digital_number_pane_cp11_ParamLimits

0x9e3d,	// (0x00086dba) clock_digital_number_pane_cp11

0x9e55,	// (0x00086dd2) clock_digital_number_pane_cp12_ParamLimits

0x9e55,	// (0x00086dd2) clock_digital_number_pane_cp12

0x9e6d,	// (0x00086dea) clock_digital_number_pane_cp13_ParamLimits

0x9e6d,	// (0x00086dea) clock_digital_number_pane_cp13

0x9e85,	// (0x00086e02) clock_digital_separator_pane_cp10_ParamLimits

0x9e85,	// (0x00086e02) clock_digital_separator_pane_cp10

0x9e9d,	// (0x00086e1a) popup_clock_digital_window_cp02_t1_ParamLimits

0x9e9d,	// (0x00086e1a) popup_clock_digital_window_cp02_t1

0xe0f4,	// (0x0008b071) clock_digital_number_pane_cp10_g1

0xe0f4,	// (0x0008b071) clock_digital_number_pane_cp10_g2

0x0001,

0xf80e,	// (0x0008c78b) clock_digital_number_pane_cp10_g

0xe0f4,	// (0x0008b071) clock_digital_separator_pane_cp10_g1

0xe0f4,	// (0x0008b071) clock_digital_separator_pane_g2_cp10

0xec82,	// (0x0008bbff) navi_pane_vded_g4

0xec8b,	// (0x0008bc08) navi_pane_vded_g5

0xec94,	// (0x0008bc11) navi_pane_vded_t1

0x0384,	// (0x0007d301) main_vded_pane

0x9f9a,	// (0x00086f17) main_vded_pane_g1

0x9fa6,	// (0x00086f23) main_vded_pane_g2

0x9fb0,	// (0x00086f2d) main_vded_pane_g3

0x0002,

0xf813,	// (0x0008c790) main_vded_pane_g

0x9fba,	// (0x00086f37) main_vded_pane_t1

0x9fc8,	// (0x00086f45) main_vded_pane_t2

0x0001,

0xf81a,	// (0x0008c797) main_vded_pane_t

0x9fd6,	// (0x00086f53) vded_slider_pane

0x9fe0,	// (0x00086f5d) vded_video_pane

0x2124,	// (0x0007f0a1) vded_video_pane_g1

0x9fea,	// (0x00086f67) vded_video_pane_g2

0x1b5c,	// (0x0007ead9) vded_video_pane_g3

0x0002,

0xf81f,	// (0x0008c79c) vded_video_pane_g

0x212e,	// (0x0007f0ab) vded_slider_pane_g1

0x18af,	// (0x0007e82c) vded_slider_pane_g2

0x2137,	// (0x0007f0b4) vded_slider_pane_g3

0x2140,	// (0x0007f0bd) vded_slider_pane_g4

0x2149,	// (0x0007f0c6) vded_slider_pane_g5

0x0004,

0xf826,	// (0x0008c7a3) vded_slider_pane_g

0x9ac7,	// (0x00086a44) mup3_rocker_pane_ParamLimits

0x9ac7,	// (0x00086a44) mup3_rocker_pane

0x9ff3,	// (0x00086f70) mup3_control_keys_pane_g1

0x9ffb,	// (0x00086f78) mup3_control_keys_pane_g2

0xa003,	// (0x00086f80) mup3_control_keys_pane_g3

0xa00b,	// (0x00086f88) mup3_control_keys_pane_g4

0x0003,

0xf831,	// (0x0008c7ae) mup3_control_keys_pane_g

0x5baf,	// (0x00082b2c) popup_toolbar2_fixed_window_cp01_ParamLimits

0x5baf,	// (0x00082b2c) popup_toolbar2_fixed_window_cp01

0x9ae1,	// (0x00086a5e) popup_toolbar2_fixed_window_cp02_ParamLimits

0x9ae1,	// (0x00086a5e) popup_toolbar2_fixed_window_cp02

0x0a7b,	// (0x0007d9f8) popup_call2_audio_second_window_t4_ParamLimits

0x0a7b,	// (0x0007d9f8) popup_call2_audio_second_window_t4

0x0fa9,	// (0x0007df26) popup_call2_audio_first_window_t6_ParamLimits

0x0fa9,	// (0x0007df26) popup_call2_audio_first_window_t6

0x123f,	// (0x0007e1bc) popup_call2_audio_out_window_t6_ParamLimits

0x123f,	// (0x0007e1bc) popup_call2_audio_out_window_t6

0x0384,	// (0x0007d301) main_vitu_pane

0xa01b,	// (0x00086f98) aid_size_cell_itu_ParamLimits

0xa01b,	// (0x00086f98) aid_size_cell_itu

0x25a1,	// (0x0007f51e) bg_popup_window_pane_cp08_ParamLimits

0x25a1,	// (0x0007f51e) bg_popup_window_pane_cp08

0xa029,	// (0x00086fa6) field_vitu_entry_pane_ParamLimits

0xa029,	// (0x00086fa6) field_vitu_entry_pane

0xa038,	// (0x00086fb5) grid_vitu_function_pane_ParamLimits

0xa038,	// (0x00086fb5) grid_vitu_function_pane

0xa048,	// (0x00086fc5) grid_vitu_itu_pane_ParamLimits

0xa048,	// (0x00086fc5) grid_vitu_itu_pane

0xa058,	// (0x00086fd5) cell_vitu_itu_pane_ParamLimits

0xa058,	// (0x00086fd5) cell_vitu_itu_pane

0xa06d,	// (0x00086fea) cell_vitu_function_pane_ParamLimits

0xa06d,	// (0x00086fea) cell_vitu_function_pane

0xf0d2,	// (0x0008c04f) bg_popup_sub_pane_cp08_ParamLimits

0xf0d2,	// (0x0008c04f) bg_popup_sub_pane_cp08

0xa07f,	// (0x00086ffc) field_vitu_entry_pane_t1_ParamLimits

0xa07f,	// (0x00086ffc) field_vitu_entry_pane_t1

0x216a,	// (0x0007f0e7) field_vitu_entry_pane_t2_ParamLimits

0x216a,	// (0x0007f0e7) field_vitu_entry_pane_t2

0x0001,

0xf83f,	// (0x0008c7bc) field_vitu_entry_pane_t_ParamLimits

0xf83f,	// (0x0008c7bc) field_vitu_entry_pane_t

0x2187,	// (0x0007f104) bg_button_pane_cp05_ParamLimits

0x2187,	// (0x0007f104) bg_button_pane_cp05

0xa09a,	// (0x00087017) cell_vitu_itu_pane_g1

0xa0b2,	// (0x0008702f) cell_vitu_itu_pane_t1_ParamLimits

0xa0b2,	// (0x0008702f) cell_vitu_itu_pane_t1

0xa0c4,	// (0x00087041) cell_vitu_itu_pane_t2_ParamLimits

0xa0c4,	// (0x00087041) cell_vitu_itu_pane_t2

0x0002,

0xf844,	// (0x0008c7c1) cell_vitu_itu_pane_t_ParamLimits

0xf844,	// (0x0008c7c1) cell_vitu_itu_pane_t

0x2195,	// (0x0007f112) bg_button_pane_cp07

0xa0f9,	// (0x00087076) cell_vitu_function_pane_g1

0x5e54,	// (0x00082dd1) main_calc_pane_g1

0x59b8,	// (0x00082935) aid_visual_content_pane

0x0384,	// (0x0007d301) main_vradio_pane

0xa102,	// (0x0008707f) main_vradio_pane_g1_ParamLimits

0xa102,	// (0x0008707f) main_vradio_pane_g1

0x219f,	// (0x0007f11c) main_vradio_pane_g2_ParamLimits

0x219f,	// (0x0007f11c) main_vradio_pane_g2

0x0001,

0xf84b,	// (0x0008c7c8) main_vradio_pane_g_ParamLimits

0xf84b,	// (0x0008c7c8) main_vradio_pane_g

0xa112,	// (0x0008708f) main_vradio_pane_t1_ParamLimits

0xa112,	// (0x0008708f) main_vradio_pane_t1

0xa124,	// (0x000870a1) main_vradio_pane_t2_ParamLimits

0xa124,	// (0x000870a1) main_vradio_pane_t2

0x21ac,	// (0x0007f129) main_vradio_pane_t3_ParamLimits

0x21ac,	// (0x0007f129) main_vradio_pane_t3

0x0002,

0xf850,	// (0x0008c7cd) main_vradio_pane_t_ParamLimits

0xf850,	// (0x0008c7cd) main_vradio_pane_t

0xa136,	// (0x000870b3) vradio_rocker_control_pane_ParamLimits

0xa136,	// (0x000870b3) vradio_rocker_control_pane

0xa142,	// (0x000870bf) vradio_station_info_pane_ParamLimits

0xa142,	// (0x000870bf) vradio_station_info_pane

0x21c0,	// (0x0007f13d) vradio_frequency_info_pane_ParamLimits

0x21c0,	// (0x0007f13d) vradio_frequency_info_pane

0x1b5c,	// (0x0007ead9) vradio_station_info_pane_g1

0x21cf,	// (0x0007f14c) vradio_station_info_pane_t1_ParamLimits

0x21cf,	// (0x0007f14c) vradio_station_info_pane_t1

0x21f1,	// (0x0007f16e) vradio_station_info_pane_t2_ParamLimits

0x21f1,	// (0x0007f16e) vradio_station_info_pane_t2

0x0001,

0xf857,	// (0x0008c7d4) vradio_station_info_pane_t_ParamLimits

0xf857,	// (0x0008c7d4) vradio_station_info_pane_t

0x2203,	// (0x0007f180) vradio_tuning_pane

0x220b,	// (0x0007f188) vradio_rocker_control_pane_g1

0x2213,	// (0x0007f190) vradio_rocker_control_pane_g2

0x221b,	// (0x0007f198) vradio_rocker_control_pane_g3

0x2223,	// (0x0007f1a0) vradio_rocker_control_pane_g4

0x222b,	// (0x0007f1a8) vradio_rocker_control_pane_g5

0x0004,

0xf85c,	// (0x0008c7d9) vradio_rocker_control_pane_g

0xa151,	// (0x000870ce) vradio_frequency_info_pane_g1

0x2233,	// (0x0007f1b0) vradio_frequency_info_pane_t1_ParamLimits

0x2233,	// (0x0007f1b0) vradio_frequency_info_pane_t1

0xa15b,	// (0x000870d8) vradio_tuning_pane_g1

0xa164,	// (0x000870e1) vradio_tuning_pane_t1

0x03ba,	// (0x0007d337) area_side_right_pane_ParamLimits

0x03ba,	// (0x0007d337) area_side_right_pane

0x16ba,	// (0x0007e637) status_small_pane_g1

0x16c2,	// (0x0007e63f) status_small_pane_g2

0x16cb,	// (0x0007e648) status_small_pane_g3

0x16d4,	// (0x0007e651) status_small_pane_g4

0x0003,

0xf61c,	// (0x0008c599) status_small_pane_g

0x16dd,	// (0x0007e65a) status_small_pane_t1

0x0384,	// (0x0007d301) main_video3_pane

0x2247,	// (0x0007f1c4) cams_zoom_vslider_pane

0x224f,	// (0x0007f1cc) image3_wide_pane_ParamLimits

0x224f,	// (0x0007f1cc) image3_wide_pane

0x2269,	// (0x0007f1e6) image3_wide_small_pane

0x2275,	// (0x0007f1f2) main_video3_pane_g1_ParamLimits

0x2275,	// (0x0007f1f2) main_video3_pane_g1

0x2291,	// (0x0007f20e) main_video3_pane_g2_ParamLimits

0x2291,	// (0x0007f20e) main_video3_pane_g2

0x0001,

0xf867,	// (0x0008c7e4) main_video3_pane_g_ParamLimits

0xf867,	// (0x0008c7e4) main_video3_pane_g

0x22ad,	// (0x0007f22a) main_video3_pane_t1_ParamLimits

0x22ad,	// (0x0007f22a) main_video3_pane_t1

0x22d8,	// (0x0007f255) main_video3_pane_t2_ParamLimits

0x22d8,	// (0x0007f255) main_video3_pane_t2

0x2303,	// (0x0007f280) main_video3_pane_t3_ParamLimits

0x2303,	// (0x0007f280) main_video3_pane_t3

0x0002,

0xf86c,	// (0x0008c7e9) main_video3_pane_t_ParamLimits

0xf86c,	// (0x0008c7e9) main_video3_pane_t

0x2330,	// (0x0007f2ad) cams_zoom_vslider_pane_g1

0x2339,	// (0x0007f2b6) cams_zoom_vslider_pane_g2

0x0001,

0xf873,	// (0x0008c7f0) cams_zoom_vslider_pane_g

0x2341,	// (0x0007f2be) small_slider_vertical_pane

0x1b5c,	// (0x0007ead9) small_slider_vertical_pane_g1

0x1b5c,	// (0x0007ead9) small_slider_vertical_pane_g2

0x2349,	// (0x0007f2c6) small_slider_vertical_pane_g3

0x0002,

0xf878,	// (0x0008c7f5) small_slider_vertical_pane_g

0x0384,	// (0x0007d301) main_hwr_training_pane

0x2352,	// (0x0007f2cf) hwr_training_instruct_pane_ParamLimits

0x2352,	// (0x0007f2cf) hwr_training_instruct_pane

0xa173,	// (0x000870f0) hwr_training_navi_pane_ParamLimits

0xa173,	// (0x000870f0) hwr_training_navi_pane

0xa18d,	// (0x0008710a) hwr_training_write_pane_ParamLimits

0xa18d,	// (0x0008710a) hwr_training_write_pane

0x0384,	// (0x0007d301) bg_frame_shadow_pane

0x2389,	// (0x0007f306) hwr_training_write_pane_g1

0x2391,	// (0x0007f30e) hwr_training_write_pane_g2

0x2399,	// (0x0007f316) hwr_training_write_pane_g3

0x23a1,	// (0x0007f31e) hwr_training_write_pane_g4

0x23a9,	// (0x0007f326) hwr_training_write_pane_g5

0x23b1,	// (0x0007f32e) hwr_training_write_pane_g6

0x23b9,	// (0x0007f336) hwr_training_write_pane_g7

0x0006,

0xf87f,	// (0x0008c7fc) hwr_training_write_pane_g

0xa1c5,	// (0x00087142) hwr_training_navi_pane_g1_ParamLimits

0xa1c5,	// (0x00087142) hwr_training_navi_pane_g1

0xa1d7,	// (0x00087154) hwr_training_navi_pane_g2_ParamLimits

0xa1d7,	// (0x00087154) hwr_training_navi_pane_g2

0xa1e9,	// (0x00087166) hwr_training_navi_pane_g3_ParamLimits

0xa1e9,	// (0x00087166) hwr_training_navi_pane_g3

0xa1f9,	// (0x00087176) hwr_training_navi_pane_g4_ParamLimits

0xa1f9,	// (0x00087176) hwr_training_navi_pane_g4

0x0004,

0xf88e,	// (0x0008c80b) hwr_training_navi_pane_g_ParamLimits

0xf88e,	// (0x0008c80b) hwr_training_navi_pane_g

0xa213,	// (0x00087190) hwr_training_navi_pane_t1

0xa221,	// (0x0008719e) list_single_hwr_training_instruct_pane_ParamLimits

0xa221,	// (0x0008719e) list_single_hwr_training_instruct_pane

0x23c1,	// (0x0007f33e) list_single_hwr_training_instruct_pane_t1

0x1a9c,	// (0x0007ea19) bg_frame_shadow_pane_g1

0x23d0,	// (0x0007f34d) bg_frame_shadow_pane_g2

0x23d8,	// (0x0007f355) bg_frame_shadow_pane_g3

0x23e0,	// (0x0007f35d) bg_frame_shadow_pane_g4

0x23e8,	// (0x0007f365) bg_frame_shadow_pane_g5

0x23f0,	// (0x0007f36d) bg_frame_shadow_pane_g6

0x23f8,	// (0x0007f375) bg_frame_shadow_pane_g7

0xe28c,	// (0x0008b209) bg_frame_shadow_pane_g8

0x0007,

0xf899,	// (0x0008c816) bg_frame_shadow_pane_g

0x0384,	// (0x0007d301) main_video_tele_dialer_pane

0xa246,	// (0x000871c3) aid_size_cell_video_keypad_ParamLimits

0xa246,	// (0x000871c3) aid_size_cell_video_keypad

0xa256,	// (0x000871d3) grid_video_dialer_keypad_pane_ParamLimits

0xa256,	// (0x000871d3) grid_video_dialer_keypad_pane

0xa288,	// (0x00087205) video_down_pane_cp_ParamLimits

0xa288,	// (0x00087205) video_down_pane_cp

0xa294,	// (0x00087211) cell_video_dialer_keypad_pane_ParamLimits

0xa294,	// (0x00087211) cell_video_dialer_keypad_pane

0x241c,	// (0x0007f399) bg_button_pane_cp08_ParamLimits

0x241c,	// (0x0007f399) bg_button_pane_cp08

0xa2a9,	// (0x00087226) cell_video_dialer_keypad_pane_g1_ParamLimits

0xa2a9,	// (0x00087226) cell_video_dialer_keypad_pane_g1

0x9abb,	// (0x00086a38) mup3_rocker2_pane_ParamLimits

0x9abb,	// (0x00086a38) mup3_rocker2_pane

0x1b5c,	// (0x0007ead9) mup3_rocker2_pane_g1

0x8a26,	// (0x000859a3) main_dialer2_pane

0x0384,	// (0x0007d301) main_mp4_pane

0xa2eb,	// (0x00087268) main_mp4_pane_g1_ParamLimits

0xa2eb,	// (0x00087268) main_mp4_pane_g1

0xa2f9,	// (0x00087276) main_mp4_pane_g2_ParamLimits

0xa2f9,	// (0x00087276) main_mp4_pane_g2

0xa307,	// (0x00087284) main_mp4_pane_g3_ParamLimits

0xa307,	// (0x00087284) main_mp4_pane_g3

0xa34c,	// (0x000872c9) main_mp4_pane_g4_ParamLimits

0xa34c,	// (0x000872c9) main_mp4_pane_g4

0xa374,	// (0x000872f1) main_mp4_pane_g5_ParamLimits

0xa374,	// (0x000872f1) main_mp4_pane_g5

0x0005,

0xf8b9,	// (0x0008c836) main_mp4_pane_g_ParamLimits

0xf8b9,	// (0x0008c836) main_mp4_pane_g

0xa3c4,	// (0x00087341) main_mp4_pane_t1_ParamLimits

0xa3c4,	// (0x00087341) main_mp4_pane_t1

0xa420,	// (0x0008739d) main_mp4_pane_t2_ParamLimits

0xa420,	// (0x0008739d) main_mp4_pane_t2

0x2428,	// (0x0007f3a5) main_mp4_pane_t3_ParamLimits

0x2428,	// (0x0007f3a5) main_mp4_pane_t3

0xa472,	// (0x000873ef) main_mp4_pane_t4_ParamLimits

0xa472,	// (0x000873ef) main_mp4_pane_t4

0x0003,

0xf8c6,	// (0x0008c843) main_mp4_pane_t_ParamLimits

0xf8c6,	// (0x0008c843) main_mp4_pane_t

0xa4b6,	// (0x00087433) mp4_progress_pane_ParamLimits

0xa4b6,	// (0x00087433) mp4_progress_pane

0xa500,	// (0x0008747d) mp4_rocker_pane_ParamLimits

0xa500,	// (0x0008747d) mp4_rocker_pane

0x2450,	// (0x0007f3cd) mp4_progress_pane_t1

0x2469,	// (0x0007f3e6) mp4_progress_pane_t2

0x0001,

0xf8cf,	// (0x0008c84c) mp4_progress_pane_t

0x2482,	// (0x0007f3ff) mup_progress_pane_cp04

0x2c71,	// (0x0007fbee) mp4_rocker_pane_g1

0xa520,	// (0x0008749d) aid_cell_size_keypad2_ParamLimits

0xa520,	// (0x0008749d) aid_cell_size_keypad2

0xa530,	// (0x000874ad) dialer2_ne_pane_ParamLimits

0xa530,	// (0x000874ad) dialer2_ne_pane

0xa53e,	// (0x000874bb) grid_dialer2_keypad_pane_ParamLimits

0xa53e,	// (0x000874bb) grid_dialer2_keypad_pane

0x2c91,	// (0x0007fc0e) bg_popup_call_pane_cp07_ParamLimits

0x2c91,	// (0x0007fc0e) bg_popup_call_pane_cp07

0xa54e,	// (0x000874cb) dialer2_ne_pane_t1_ParamLimits

0xa54e,	// (0x000874cb) dialer2_ne_pane_t1

0xa573,	// (0x000874f0) cell_dialer2_keypad_pane_ParamLimits

0xa573,	// (0x000874f0) cell_dialer2_keypad_pane

0x24a0,	// (0x0007f41d) bg_button_pane_pane_cp04_ParamLimits

0x24a0,	// (0x0007f41d) bg_button_pane_pane_cp04

0xa588,	// (0x00087505) cell_dialer2_keypad_pane_g1_ParamLimits

0xa588,	// (0x00087505) cell_dialer2_keypad_pane_g1

0x68e4,	// (0x00083861) aid_placing_vt_set_content_ParamLimits

0x68e4,	// (0x00083861) aid_placing_vt_set_content

0x690e,	// (0x0008388b) aid_placing_vt_set_title_ParamLimits

0x690e,	// (0x0008388b) aid_placing_vt_set_title

0x0384,	// (0x0007d301) main_image3_pane

0xa622,	// (0x0008759f) area_side_right_pane_cp01_ParamLimits

0xa622,	// (0x0008759f) area_side_right_pane_cp01

0xa64f,	// (0x000875cc) main_image3_pane_g1_ParamLimits

0xa64f,	// (0x000875cc) main_image3_pane_g1

0xa65d,	// (0x000875da) main_image3_pane_g2_ParamLimits

0xa65d,	// (0x000875da) main_image3_pane_g2

0xa676,	// (0x000875f3) main_image3_pane_g3_ParamLimits

0xa676,	// (0x000875f3) main_image3_pane_g3

0xa68f,	// (0x0008760c) main_image3_pane_g4_ParamLimits

0xa68f,	// (0x0008760c) main_image3_pane_g4

0x0003,

0xf8de,	// (0x0008c85b) main_image3_pane_g_ParamLimits

0xf8de,	// (0x0008c85b) main_image3_pane_g

0xa6a8,	// (0x00087625) main_image3_pane_t1_ParamLimits

0xa6a8,	// (0x00087625) main_image3_pane_t1

0xa6cd,	// (0x0008764a) main_image3_pane_t2_ParamLimits

0xa6cd,	// (0x0008764a) main_image3_pane_t2

0xa6ec,	// (0x00087669) main_image3_pane_t3_ParamLimits

0xa6ec,	// (0x00087669) main_image3_pane_t3

0x0003,

0xf8e7,	// (0x0008c864) main_image3_pane_t_ParamLimits

0xf8e7,	// (0x0008c864) main_image3_pane_t

0x25a1,	// (0x0007f51e) grid_sctrl_middle_pane_cp01_ParamLimits

0x25a1,	// (0x0007f51e) grid_sctrl_middle_pane_cp01

0xa74d,	// (0x000876ca) cell_sctrl_middle_pane_cp01_ParamLimits

0xa74d,	// (0x000876ca) cell_sctrl_middle_pane_cp01

0xa75e,	// (0x000876db) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xa75e,	// (0x000876db) cell_sctrl_middle_pane_cp01_g1

0x0384,	// (0x0007d301) main_call4_pane

0xa76b,	// (0x000876e8) aid_size_button_call4_ParamLimits

0xa76b,	// (0x000876e8) aid_size_button_call4

0xa79b,	// (0x00087718) call4_windows_pane_ParamLimits

0xa79b,	// (0x00087718) call4_windows_pane

0xa7b5,	// (0x00087732) grid_call4_button_pane_ParamLimits

0xa7b5,	// (0x00087732) grid_call4_button_pane

0x24ac,	// (0x0007f429) call4_windows_conf_pane

0x24c3,	// (0x0007f440) popup_call4_audio_first_window_ParamLimits

0x24c3,	// (0x0007f440) popup_call4_audio_first_window

0x250f,	// (0x0007f48c) popup_call4_audio_second_window_ParamLimits

0x250f,	// (0x0007f48c) popup_call4_audio_second_window

0x2523,	// (0x0007f4a0) popup_call4_audio_wait_window_ParamLimits

0x2523,	// (0x0007f4a0) popup_call4_audio_wait_window

0xa7d9,	// (0x00087756) cell_call4_button_pane_ParamLimits

0xa7d9,	// (0x00087756) cell_call4_button_pane

0xa7fe,	// (0x0008777b) bg_button_pane_cp09_ParamLimits

0xa7fe,	// (0x0008777b) bg_button_pane_cp09

0xa80a,	// (0x00087787) cell_call4_button_pane_g1_ParamLimits

0xa80a,	// (0x00087787) cell_call4_button_pane_g1

0xa817,	// (0x00087794) cell_call4_button_pane_t1_ParamLimits

0xa817,	// (0x00087794) cell_call4_button_pane_t1

0x256b,	// (0x0007f4e8) popup_call4_audio_conf_window_ParamLimits

0x256b,	// (0x0007f4e8) popup_call4_audio_conf_window

0x9aee,	// (0x00086a6b) mup3_progress_pane_t1_ParamLimits

0x9b05,	// (0x00086a82) mup3_progress_pane_t2_ParamLimits

0x1e6f,	// (0x0007edec) mup3_progress_pane_t3_ParamLimits

0xf7c0,	// (0x0008c73d) mup3_progress_pane_t_ParamLimits

0x1e86,	// (0x0007ee03) mup_progress_pane_cp03_ParamLimits

0xa013,	// (0x00086f90) mup3_control_keys_pane_g4_copy1

0xa4e4,	// (0x00087461) mp4_rocker2_pane_ParamLimits

0xa4e4,	// (0x00087461) mp4_rocker2_pane

0x2587,	// (0x0007f504) mp4_rocker2_pane_g1

0x257f,	// (0x0007f4fc) mp4_rocker2_pane_g2

0xa829,	// (0x000877a6) mp4_rocker2_pane_g3

0xa831,	// (0x000877ae) mp4_rocker2_pane_g4

0xa839,	// (0x000877b6) mp4_rocker2_pane_g5

0x0004,

0xf8f0,	// (0x0008c86d) mp4_rocker2_pane_g

0x0384,	// (0x0007d301) main_camera4_pane

0x0384,	// (0x0007d301) main_video4_pane

0xa264,	// (0x000871e1) main_video_tele_dialer_pane_t1_ParamLimits

0xa264,	// (0x000871e1) main_video_tele_dialer_pane_t1

0xa276,	// (0x000871f3) main_video_tele_dialer_pane_t2_ParamLimits

0xa276,	// (0x000871f3) main_video_tele_dialer_pane_t2

0x0001,

0xf8aa,	// (0x0008c827) main_video_tele_dialer_pane_t_ParamLimits

0xf8aa,	// (0x0008c827) main_video_tele_dialer_pane_t

0xa859,	// (0x000877d6) cam4_autofocus_pane_ParamLimits

0xa859,	// (0x000877d6) cam4_autofocus_pane

0xa873,	// (0x000877f0) cam4_image_uncrop_pane_ParamLimits

0xa873,	// (0x000877f0) cam4_image_uncrop_pane

0xa88a,	// (0x00087807) cam4_indicators_pane_ParamLimits

0xa88a,	// (0x00087807) cam4_indicators_pane

0xa8a6,	// (0x00087823) main_camera4_pane_g1_ParamLimits

0xa8a6,	// (0x00087823) main_camera4_pane_g1

0xa8b2,	// (0x0008782f) main_camera4_pane_g2_ParamLimits

0xa8b2,	// (0x0008782f) main_camera4_pane_g2

0xa8b2,	// (0x0008782f) main_camera4_pane_g3_ParamLimits

0xa8b2,	// (0x0008782f) main_camera4_pane_g3

0xa8be,	// (0x0008783b) main_camera4_pane_g4_ParamLimits

0xa8be,	// (0x0008783b) main_camera4_pane_g4

0xa8ca,	// (0x00087847) main_camera4_pane_g5_ParamLimits

0xa8ca,	// (0x00087847) main_camera4_pane_g5

0x0005,

0xf8fb,	// (0x0008c878) main_camera4_pane_g_ParamLimits

0xf8fb,	// (0x0008c878) main_camera4_pane_g

0xa8e4,	// (0x00087861) main_camera4_pane_t1_ParamLimits

0xa8e4,	// (0x00087861) main_camera4_pane_t1

0xa92c,	// (0x000878a9) bg_tb_trans_pane_cp06

0xa942,	// (0x000878bf) cam4_indicators_pane_g1

0xa953,	// (0x000878d0) cam4_indicators_pane_g2

0x0002,

0xf916,	// (0x0008c893) cam4_indicators_pane_g

0xa971,	// (0x000878ee) cam4_indicators_pane_t1

0xa99b,	// (0x00087918) main_video4_pane_g1_ParamLimits

0xa99b,	// (0x00087918) main_video4_pane_g1

0xa9a7,	// (0x00087924) main_video4_pane_g2_ParamLimits

0xa9a7,	// (0x00087924) main_video4_pane_g2

0xa9b3,	// (0x00087930) main_video4_pane_g3_ParamLimits

0xa9b3,	// (0x00087930) main_video4_pane_g3

0xa9bf,	// (0x0008793c) main_video4_pane_g4_ParamLimits

0xa9bf,	// (0x0008793c) main_video4_pane_g4

0x0004,

0xf91d,	// (0x0008c89a) main_video4_pane_g_ParamLimits

0xf91d,	// (0x0008c89a) main_video4_pane_g

0xa9df,	// (0x0008795c) vid4_indicators_pane_ParamLimits

0xa9df,	// (0x0008795c) vid4_indicators_pane

0xa9fd,	// (0x0008797a) video4_image_uncrop_cif_pane_ParamLimits

0xa9fd,	// (0x0008797a) video4_image_uncrop_cif_pane

0xaa0c,	// (0x00087989) video4_image_uncrop_nhd_pane_ParamLimits

0xaa0c,	// (0x00087989) video4_image_uncrop_nhd_pane

0xa873,	// (0x000877f0) video4_image_uncrop_vga_pane_ParamLimits

0xa873,	// (0x000877f0) video4_image_uncrop_vga_pane

0xaa19,	// (0x00087996) bg_tb_trans_pane_cp07

0xaa31,	// (0x000879ae) vid4_indicators_pane_g1

0xaa42,	// (0x000879bf) vid4_indicators_pane_g2

0xaa53,	// (0x000879d0) vid4_indicators_pane_g3

0x0004,

0xf928,	// (0x0008c8a5) vid4_indicators_pane_g

0xaa80,	// (0x000879fd) vid4_indicators_pane_t1

0xaa99,	// (0x00087a16) cam4_autofocus_pane_g1

0xaaa1,	// (0x00087a1e) cam4_autofocus_pane_g2

0xaaa9,	// (0x00087a26) cam4_autofocus_pane_g3

0x0002,

0xf933,	// (0x0008c8b0) cam4_autofocus_pane_g

0xaab1,	// (0x00087a2e) cam4_autofocus_pane_g3_copy1

0x2400,	// (0x0007f37d) video_down_pane_cp_t1

0x240e,	// (0x0007f38b) video_down_pane_cp_t2

0x0001,

0xf8af,	// (0x0008c82c) video_down_pane_cp_t

0x25a1,	// (0x0007f51e) popup_vitu2_window_ParamLimits

0x25a1,	// (0x0007f51e) popup_vitu2_window

0xaab9,	// (0x00087a36) aid_size_cell2_itu2_ParamLimits

0xaab9,	// (0x00087a36) aid_size_cell2_itu2

0xaadb,	// (0x00087a58) aid_size_cell_itu2_ParamLimits

0xaadb,	// (0x00087a58) aid_size_cell_itu2

0xab1f,	// (0x00087a9c) bg_popup_window_pane_cp09_ParamLimits

0xab1f,	// (0x00087a9c) bg_popup_window_pane_cp09

0xab2d,	// (0x00087aaa) field_vitu2_entry_pane_ParamLimits

0xab2d,	// (0x00087aaa) field_vitu2_entry_pane

0xab4d,	// (0x00087aca) grid_vitu2_function_pane_ParamLimits

0xab4d,	// (0x00087aca) grid_vitu2_function_pane

0xab91,	// (0x00087b0e) grid_vitu2_itu_pane_ParamLimits

0xab91,	// (0x00087b0e) grid_vitu2_itu_pane

0xac09,	// (0x00087b86) cell_vitu2_itu_pane_ParamLimits

0xac09,	// (0x00087b86) cell_vitu2_itu_pane

0xac1e,	// (0x00087b9b) cell_vitu2_function_pane_ParamLimits

0xac1e,	// (0x00087b9b) cell_vitu2_function_pane

0x25af,	// (0x0007f52c) bg_popup_call_pane_cp08_ParamLimits

0x25af,	// (0x0007f52c) bg_popup_call_pane_cp08

0x25c8,	// (0x0007f545) field_vitu2_entry_pane_g1

0x25d4,	// (0x0007f551) field_vitu2_entry_pane_g2

0x0002,

0xf93a,	// (0x0008c8b7) field_vitu2_entry_pane_g

0x25ee,	// (0x0007f56b) field_vitu2_entry_pane_t1_ParamLimits

0x25ee,	// (0x0007f56b) field_vitu2_entry_pane_t1

0x261d,	// (0x0007f59a) field_vitu2_entry_pane_t2_ParamLimits

0x261d,	// (0x0007f59a) field_vitu2_entry_pane_t2

0x0001,

0xf941,	// (0x0008c8be) field_vitu2_entry_pane_t_ParamLimits

0xf941,	// (0x0008c8be) field_vitu2_entry_pane_t

0xac5d,	// (0x00087bda) bg_button_pane_cp010_ParamLimits

0xac5d,	// (0x00087bda) bg_button_pane_cp010

0xac6b,	// (0x00087be8) cell_vitu2_itu_pane_g1

0xac89,	// (0x00087c06) cell_vitu2_itu_pane_t1_ParamLimits

0xac89,	// (0x00087c06) cell_vitu2_itu_pane_t1

0x58bd,	// (0x0008283a) cell_vitu2_itu_pane_t2_ParamLimits

0x58bd,	// (0x0008283a) cell_vitu2_itu_pane_t2

0x0002,

0xf94b,	// (0x0008c8c8) cell_vitu2_itu_pane_t_ParamLimits

0xf94b,	// (0x0008c8c8) cell_vitu2_itu_pane_t

0xaa19,	// (0x00087996) bg_button_pane_cp011

0xacdb,	// (0x00087c58) cell_vitu2_function_pane_g1

0x0384,	// (0x0007d301) main_myfav_hc_pane

0xa72e,	// (0x000876ab) popup_image3_note_pane_ParamLimits

0xa72e,	// (0x000876ab) popup_image3_note_pane

0xa73c,	// (0x000876b9) popup_image3_tool_bar_pane_ParamLimits

0xa73c,	// (0x000876b9) popup_image3_tool_bar_pane

0x592b,	// (0x000828a8) cell_vitu2_itu_pane_t3_ParamLimits

0x592b,	// (0x000828a8) cell_vitu2_itu_pane_t3

0x0384,	// (0x0007d301) bg_popup_trans_pane

0x2642,	// (0x0007f5bf) grid_image3_tool_bar_pane

0x264c,	// (0x0007f5c9) bg_popup_trans_pane_g1

0xe5c7,	// (0x0008b544) bg_popup_trans_pane_g2

0x2654,	// (0x0007f5d1) bg_popup_trans_pane_g3

0x265c,	// (0x0007f5d9) bg_popup_trans_pane_g4

0x2664,	// (0x0007f5e1) bg_popup_trans_pane_g5

0x266c,	// (0x0007f5e9) bg_popup_trans_pane_g6

0x2674,	// (0x0007f5f1) bg_popup_trans_pane_g7

0x267c,	// (0x0007f5f9) bg_popup_trans_pane_g8

0xe5a7,	// (0x0008b524) bg_popup_trans_pane_g9

0x0008,

0xf952,	// (0x0008c8cf) bg_popup_trans_pane_g

0x2684,	// (0x0007f601) cell_image3_tool_bar_pane_ParamLimits

0x2684,	// (0x0007f601) cell_image3_tool_bar_pane

0x1b5c,	// (0x0007ead9) cell_image3_tool_bar_pane_g1

0x0384,	// (0x0007d301) bg_popup_trans_pane_cp1

0x2698,	// (0x0007f615) popup_image3_note_pane_t1

0x26a6,	// (0x0007f623) popup_image3_note_pane_t2

0x26b4,	// (0x0007f631) popup_image3_note_pane_t3

0x0002,

0xf965,	// (0x0008c8e2) popup_image3_note_pane_t

0x26c2,	// (0x0007f63f) popup_image3_note_pane_t3_copy1

0xacef,	// (0x00087c6c) bg_myfav_hc_instruction_pane_ParamLimits

0xacef,	// (0x00087c6c) bg_myfav_hc_instruction_pane

0xad07,	// (0x00087c84) cell_myfav_contact_pane_ParamLimits

0xad07,	// (0x00087c84) cell_myfav_contact_pane

0xad21,	// (0x00087c9e) cell_myfav_contact_pane_cp1_ParamLimits

0xad21,	// (0x00087c9e) cell_myfav_contact_pane_cp1

0xad39,	// (0x00087cb6) cell_myfav_contact_pane_cp2_ParamLimits

0xad39,	// (0x00087cb6) cell_myfav_contact_pane_cp2

0xad51,	// (0x00087cce) cell_myfav_contact_pane_cp3_ParamLimits

0xad51,	// (0x00087cce) cell_myfav_contact_pane_cp3

0xad68,	// (0x00087ce5) cell_myfav_contact_pane_cp4_ParamLimits

0xad68,	// (0x00087ce5) cell_myfav_contact_pane_cp4

0xad7e,	// (0x00087cfb) cell_myfav_contact_pane_cp5_ParamLimits

0xad7e,	// (0x00087cfb) cell_myfav_contact_pane_cp5

0xad92,	// (0x00087d0f) cell_myfav_contact_pane_cp6_ParamLimits

0xad92,	// (0x00087d0f) cell_myfav_contact_pane_cp6

0xada6,	// (0x00087d23) cell_myfav_contact_pane_cp7_ParamLimits

0xada6,	// (0x00087d23) cell_myfav_contact_pane_cp7

0x26d0,	// (0x0007f64d) listscroll_gen_pane_cp05

0xadbe,	// (0x00087d3b) main_myfav_hc_pane_g1_ParamLimits

0xadbe,	// (0x00087d3b) main_myfav_hc_pane_g1

0xadd4,	// (0x00087d51) main_myfav_hc_pane_g2_ParamLimits

0xadd4,	// (0x00087d51) main_myfav_hc_pane_g2

0x0002,

0xf96c,	// (0x0008c8e9) main_myfav_hc_pane_g_ParamLimits

0xf96c,	// (0x0008c8e9) main_myfav_hc_pane_g

0xae02,	// (0x00087d7f) main_myfav_hc_pane_t1_ParamLimits

0xae02,	// (0x00087d7f) main_myfav_hc_pane_t1

0x26d9,	// (0x0007f656) main_myfav_hc_pane_t2_ParamLimits

0x26d9,	// (0x0007f656) main_myfav_hc_pane_t2

0x26eb,	// (0x0007f668) main_myfav_hc_pane_t3_ParamLimits

0x26eb,	// (0x0007f668) main_myfav_hc_pane_t3

0xae19,	// (0x00087d96) main_myfav_hc_pane_t4_ParamLimits

0xae19,	// (0x00087d96) main_myfav_hc_pane_t4

0x0004,

0xf973,	// (0x0008c8f0) main_myfav_hc_pane_t_ParamLimits

0xf973,	// (0x0008c8f0) main_myfav_hc_pane_t

0x1b5c,	// (0x0007ead9) bg_myfav_hc_instruction_pane_g1

0x26fd,	// (0x0007f67a) cell_myfav_contact_pane_g1_ParamLimits

0x26fd,	// (0x0007f67a) cell_myfav_contact_pane_g1

0x26fd,	// (0x0007f67a) cell_myfav_contact_pane_g2_ParamLimits

0x26fd,	// (0x0007f67a) cell_myfav_contact_pane_g2

0x2709,	// (0x0007f686) cell_myfav_contact_pane_g3_ParamLimits

0x2709,	// (0x0007f686) cell_myfav_contact_pane_g3

0x1e59,	// (0x0007edd6) cell_myfav_contact_pane_g4_ParamLimits

0x1e59,	// (0x0007edd6) cell_myfav_contact_pane_g4

0x2716,	// (0x0007f693) cell_myfav_contact_pane_g5_ParamLimits

0x2716,	// (0x0007f693) cell_myfav_contact_pane_g5

0x0004,

0xf97e,	// (0x0008c8fb) cell_myfav_contact_pane_g_ParamLimits

0xf97e,	// (0x0008c8fb) cell_myfav_contact_pane_g

0xadea,	// (0x00087d67) main_myfav_hc_pane_g3_ParamLimits

0xadea,	// (0x00087d67) main_myfav_hc_pane_g3

0x5af4,	// (0x00082a71) popup_adpt_find_window

0xae43,	// (0x00087dc0) afind_page_pane_ParamLimits

0xae43,	// (0x00087dc0) afind_page_pane

0xae50,	// (0x00087dcd) aid_size_cell_afind_ParamLimits

0xae50,	// (0x00087dcd) aid_size_cell_afind

0xae6a,	// (0x00087de7) bg_popup_sub_pane_cp09_ParamLimits

0xae6a,	// (0x00087de7) bg_popup_sub_pane_cp09

0xae77,	// (0x00087df4) find_pane_cp01_ParamLimits

0xae77,	// (0x00087df4) find_pane_cp01

0x2722,	// (0x0007f69f) grid_afind_control_pane_ParamLimits

0x2722,	// (0x0007f69f) grid_afind_control_pane

0xae84,	// (0x00087e01) grid_afind_pane_ParamLimits

0xae84,	// (0x00087e01) grid_afind_pane

0xaea0,	// (0x00087e1d) cell_afind_pane_ParamLimits

0xaea0,	// (0x00087e1d) cell_afind_pane

0x1b5c,	// (0x0007ead9) afind_page_pane_g1

0xaee8,	// (0x00087e65) afind_page_pane_g2

0xaef1,	// (0x00087e6e) afind_page_pane_g3

0x0002,

0xf989,	// (0x0008c906) afind_page_pane_g

0xaefa,	// (0x00087e77) afind_page_pane_t1

0x2736,	// (0x0007f6b3) cell_afind_grid_control_pane_ParamLimits

0x2736,	// (0x0007f6b3) cell_afind_grid_control_pane

0x24a0,	// (0x0007f41d) bg_button_pane_cp69_ParamLimits

0x24a0,	// (0x0007f41d) bg_button_pane_cp69

0xaf1a,	// (0x00087e97) cell_afind_pane_g1_ParamLimits

0xaf1a,	// (0x00087e97) cell_afind_pane_g1

0xaf27,	// (0x00087ea4) cell_afind_pane_t1_ParamLimits

0xaf27,	// (0x00087ea4) cell_afind_pane_t1

0xe3c2,	// (0x0008b33f) bg_button_pane_cp72

0x2745,	// (0x0007f6c2) cell_afind_grid_control_pane_g1

0x85a4,	// (0x00085521) aid_image_placing_area_ParamLimits

0x85a4,	// (0x00085521) aid_image_placing_area

0x2152,	// (0x0007f0cf) field_vitu_entry_pane_g1_ParamLimits

0x2152,	// (0x0007f0cf) field_vitu_entry_pane_g1

0x215e,	// (0x0007f0db) field_vitu_entry_pane_g2_ParamLimits

0x215e,	// (0x0007f0db) field_vitu_entry_pane_g2

0x0001,

0xf83a,	// (0x0008c7b7) field_vitu_entry_pane_g_ParamLimits

0xf83a,	// (0x0008c7b7) field_vitu_entry_pane_g

0xa09a,	// (0x00087017) cell_vitu_itu_pane_g1_ParamLimits

0xa0dc,	// (0x00087059) cell_vitu_itu_pane_t3_ParamLimits

0xa0dc,	// (0x00087059) cell_vitu_itu_pane_t3

0x2450,	// (0x0007f3cd) mp4_progress_pane_t1_ParamLimits

0x2469,	// (0x0007f3e6) mp4_progress_pane_t2_ParamLimits

0xf8cf,	// (0x0008c84c) mp4_progress_pane_t_ParamLimits

0x2482,	// (0x0007f3ff) mup_progress_pane_cp04_ParamLimits

0xae2d,	// (0x00087daa) main_myfav_hc_pane_t5_ParamLimits

0xae2d,	// (0x00087daa) main_myfav_hc_pane_t5

0x03aa,	// (0x0007d327) aid_zoom_text_primary

0x5af4,	// (0x00082a71) popup_adpt_find_window_ParamLimits

0xf0d2,	// (0x0008c04f) main_cam_set_pane

0xa898,	// (0x00087815) cam4_zoom_pane_ParamLimits

0xa898,	// (0x00087815) cam4_zoom_pane

0xaf39,	// (0x00087eb6) main_cam_set_pane_g1_ParamLimits

0xaf39,	// (0x00087eb6) main_cam_set_pane_g1

0xaf47,	// (0x00087ec4) main_cam_set_pane_g2_ParamLimits

0xaf47,	// (0x00087ec4) main_cam_set_pane_g2

0x0001,

0xf990,	// (0x0008c90d) main_cam_set_pane_g_ParamLimits

0xf990,	// (0x0008c90d) main_cam_set_pane_g

0xaf53,	// (0x00087ed0) main_cam_set_pane_t1_ParamLimits

0xaf53,	// (0x00087ed0) main_cam_set_pane_t1

0xaf6f,	// (0x00087eec) main_cset_listscroll_pane_ParamLimits

0xaf6f,	// (0x00087eec) main_cset_listscroll_pane

0xaf9a,	// (0x00087f17) main_cset_slider_pane_ParamLimits

0xaf9a,	// (0x00087f17) main_cset_slider_pane

0x2756,	// (0x0007f6d3) main_cset_list_pane_ParamLimits

0x2756,	// (0x0007f6d3) main_cset_list_pane

0x2766,	// (0x0007f6e3) scroll_pane_cp028

0xafb9,	// (0x00087f36) aid_area_touch_slider

0xafd5,	// (0x00087f52) cset_slider_pane

0xafff,	// (0x00087f7c) main_cset_slider_pane_g1

0xb014,	// (0x00087f91) main_cset_slider_pane_g2

0x0011,

0xf995,	// (0x0008c912) main_cset_slider_pane_g

0x279f,	// (0x0007f71c) main_cset_slider_pane_t1

0xb0d6,	// (0x00088053) main_cset_slider_pane_t2

0xb0f0,	// (0x0008806d) main_cset_slider_pane_t3

0xb10a,	// (0x00088087) main_cset_slider_pane_t4

0xb124,	// (0x000880a1) main_cset_slider_pane_t5

0xb142,	// (0x000880bf) main_cset_slider_pane_t6

0xb159,	// (0x000880d6) main_cset_slider_pane_t7

0x000e,

0xf9ba,	// (0x0008c937) main_cset_slider_pane_t

0xb265,	// (0x000881e2) cset_list_set_pane_ParamLimits

0xb265,	// (0x000881e2) cset_list_set_pane

0xb27b,	// (0x000881f8) aid_position_infowindow_above

0xb283,	// (0x00088200) aid_position_infowindow_below

0xb28b,	// (0x00088208) cset_list_set_pane_g1_ParamLimits

0xb28b,	// (0x00088208) cset_list_set_pane_g1

0x283f,	// (0x0007f7bc) cset_list_set_pane_g3_ParamLimits

0x283f,	// (0x0007f7bc) cset_list_set_pane_g3

0x0001,

0xf9d9,	// (0x0008c956) cset_list_set_pane_g_ParamLimits

0xf9d9,	// (0x0008c956) cset_list_set_pane_g

0x284e,	// (0x0007f7cb) cset_list_set_pane_t1_ParamLimits

0x284e,	// (0x0007f7cb) cset_list_set_pane_t1

0xf0d2,	// (0x0008c04f) list_highlight_pane_cp021_ParamLimits

0xf0d2,	// (0x0008c04f) list_highlight_pane_cp021

0xede8,	// (0x0008bd65) cset_slider_pane_g1

0xedfa,	// (0x0008bd77) cset_slider_pane_g2

0xedf1,	// (0x0008bd6e) cset_slider_pane_g3

0x0002,

0xf9de,	// (0x0008c95b) cset_slider_pane_g

0xb297,	// (0x00088214) aid_area_touch_cam4_zoom

0xb29f,	// (0x0008821c) cam4_zoom_cont_pane

0xb2a7,	// (0x00088224) cam4_zoom_pane_g1

0xb2af,	// (0x0008822c) cam4_zoom_pane_g2

0xb2b7,	// (0x00088234) cam4_zoom_pane_g3

0x0002,

0xf9e5,	// (0x0008c962) cam4_zoom_pane_g

0xb2bf,	// (0x0008823c) cam4_zoom_cont_pane_g1

0xb2c8,	// (0x00088245) cam4_zoom_cont_pane_g2

0xb2d1,	// (0x0008824e) cam4_zoom_cont_pane_g3

0x0002,

0xf9ec,	// (0x0008c969) cam4_zoom_cont_pane_g

0xa785,	// (0x00087702) call4_image_pane_ParamLimits

0xa785,	// (0x00087702) call4_image_pane

0x24ac,	// (0x0007f429) call4_windows_conf_pane_ParamLimits

0x24ed,	// (0x0007f46a) popup_call4_audio_in_window_ParamLimits

0x24ed,	// (0x0007f46a) popup_call4_audio_in_window

0x0384,	// (0x0007d301) bg_popup_call2_act_pane_cp02

0x2563,	// (0x0007f4e0) call4_list_conf_pane

0x1b5c,	// (0x0007ead9) call4_image_pane_g1

0x1b5c,	// (0x0007ead9) call4_image_pane_g2

0x0001,

0xf700,	// (0x0008c67d) call4_image_pane_g

0x2863,	// (0x0007f7e0) list_single_graphic_popup_conf4_pane_ParamLimits

0x2863,	// (0x0007f7e0) list_single_graphic_popup_conf4_pane

0x0384,	// (0x0007d301) list_highlight_pane_cp022

0x2876,	// (0x0007f7f3) list_single_graphic_popup_conf4_pane_g1

0xeac7,	// (0x0008ba44) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9f3,	// (0x0008c970) list_single_graphic_popup_conf4_pane_g

0x287e,	// (0x0007f7fb) list_single_graphic_popup_conf4_pane_t1

0x6a72,	// (0x000839ef) popup_vtel_slider_window_ParamLimits

0x6a72,	// (0x000839ef) popup_vtel_slider_window

0x248e,	// (0x0007f40b) dialer2_ne_pane_t2_ParamLimits

0x248e,	// (0x0007f40b) dialer2_ne_pane_t2

0x0001,

0xf8d4,	// (0x0008c851) dialer2_ne_pane_t_ParamLimits

0xf8d4,	// (0x0008c851) dialer2_ne_pane_t

0xf0d2,	// (0x0008c04f) bg_popup_sub_pane_cp010_ParamLimits

0xf0d2,	// (0x0008c04f) bg_popup_sub_pane_cp010

0xb2da,	// (0x00088257) popup_vtel_slider_window_g1_ParamLimits

0xb2da,	// (0x00088257) popup_vtel_slider_window_g1

0xb2e6,	// (0x00088263) popup_vtel_slider_window_g2_ParamLimits

0xb2e6,	// (0x00088263) popup_vtel_slider_window_g2

0x0003,

0xf9f8,	// (0x0008c975) popup_vtel_slider_window_g_ParamLimits

0xf9f8,	// (0x0008c975) popup_vtel_slider_window_g

0xb32e,	// (0x000882ab) vtel_slider_pane_ParamLimits

0xb32e,	// (0x000882ab) vtel_slider_pane

0xb33d,	// (0x000882ba) vtel_slider_pane_g1_ParamLimits

0xb33d,	// (0x000882ba) vtel_slider_pane_g1

0xb34a,	// (0x000882c7) vtel_slider_pane_g2_ParamLimits

0xb34a,	// (0x000882c7) vtel_slider_pane_g2

0xb357,	// (0x000882d4) vtel_slider_pane_g3_ParamLimits

0xb357,	// (0x000882d4) vtel_slider_pane_g3

0xb33d,	// (0x000882ba) vtel_slider_pane_g4_ParamLimits

0xb33d,	// (0x000882ba) vtel_slider_pane_g4

0xb364,	// (0x000882e1) vtel_slider_pane_g5_ParamLimits

0xb364,	// (0x000882e1) vtel_slider_pane_g5

0x0004,

0xfa01,	// (0x0008c97e) vtel_slider_pane_g_ParamLimits

0xfa01,	// (0x0008c97e) vtel_slider_pane_g

0x0384,	// (0x0007d301) main_gallery2_pane

0xab01,	// (0x00087a7e) aid_size_row_itut2_dropdow_list_ParamLimits

0xab01,	// (0x00087a7e) aid_size_row_itut2_dropdow_list

0xab6f,	// (0x00087aec) grid_vitu2_function_top_pane_ParamLimits

0xab6f,	// (0x00087aec) grid_vitu2_function_top_pane

0xabc5,	// (0x00087b42) popup_vitu2_dropdown_list_window_ParamLimits

0xabc5,	// (0x00087b42) popup_vitu2_dropdown_list_window

0xabe5,	// (0x00087b62) popup_vitu2_match_list_window

0xb371,	// (0x000882ee) cell_vitu2_function_top_pane_ParamLimits

0xb371,	// (0x000882ee) cell_vitu2_function_top_pane

0xb391,	// (0x0008830e) cell_vitu2_function_top_pane_cp01_ParamLimits

0xb391,	// (0x0008830e) cell_vitu2_function_top_pane_cp01

0xb3af,	// (0x0008832c) cell_vitu2_function_top_wide_pane_ParamLimits

0xb3af,	// (0x0008832c) cell_vitu2_function_top_wide_pane

0xaa19,	// (0x00087996) bg_button_pane_cp012

0xb3cd,	// (0x0008834a) cell_vitu2_function_top_pane_g1

0xb3dc,	// (0x00088359) bg_button_pane_cp013_ParamLimits

0xb3dc,	// (0x00088359) bg_button_pane_cp013

0xb3f8,	// (0x00088375) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xb3f8,	// (0x00088375) cell_vitu2_function_top_wide_pane_g1

0xb410,	// (0x0008838d) bg_popup_sub_pane_cp20

0xb41e,	// (0x0008839b) list_vitu2_match_list_pane

0x264c,	// (0x0007f5c9) bg_popup_sub_pane_cp20_g1

0x2654,	// (0x0007f5d1) bg_popup_sub_pane_cp20_g2

0xe5c7,	// (0x0008b544) bg_popup_sub_pane_cp20_g3

0x265c,	// (0x0007f5d9) bg_popup_sub_pane_cp20_g4

0xe5a7,	// (0x0008b524) bg_popup_sub_pane_cp20_g5

0x28a2,	// (0x0007f81f) bg_popup_sub_pane_cp20_g6

0x266c,	// (0x0007f5e9) bg_popup_sub_pane_cp20_g7

0x2674,	// (0x0007f5f1) bg_popup_sub_pane_cp20_g8

0x267c,	// (0x0007f5f9) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa0c,	// (0x0008c989) bg_popup_sub_pane_cp20_g

0xb436,	// (0x000883b3) list_vitu2_match_list_item_pane_ParamLimits

0xb436,	// (0x000883b3) list_vitu2_match_list_item_pane

0xb448,	// (0x000883c5) list_vitu2_match_list_item_pane_t1

0x5f29,	// (0x00082ea6) bg_popup_sub_pane_cp21

0xb485,	// (0x00088402) grid_vitu2_dropdown_list_pane

0xb48d,	// (0x0008840a) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xb48d,	// (0x0008840a) cell_vitu2_dropdown_list_char_pane

0xb4ae,	// (0x0008842b) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xb4ae,	// (0x0008842b) cell_vitu2_dropdown_list_ctrl_pane

0x28d4,	// (0x0007f851) cell_vitu2_dropdown_list_char_pane_g1

0x28cb,	// (0x0007f848) cell_vitu2_dropdown_list_char_pane_g2

0x28c2,	// (0x0007f83f) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa29,	// (0x0008c9a6) cell_vitu2_dropdown_list_char_pane_g

0xb4da,	// (0x00088457) cell_vitu2_dropdown_list_char_pane_t1

0xb4e8,	// (0x00088465) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xb4e8,	// (0x00088465) cell_vitu2_dropdown_list_ctrl_pane_g1

0xb4f8,	// (0x00088475) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xb4f8,	// (0x00088475) cell_vitu2_dropdown_list_ctrl_pane_g2

0xb509,	// (0x00088486) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xb509,	// (0x00088486) cell_vitu2_dropdown_list_ctrl_pane_g3

0xb519,	// (0x00088496) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xb519,	// (0x00088496) cell_vitu2_dropdown_list_ctrl_pane_g4

0xa92c,	// (0x000878a9) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xa92c,	// (0x000878a9) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa30,	// (0x0008c9ad) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa30,	// (0x0008c9ad) cell_vitu2_dropdown_list_ctrl_pane_g

0xb535,	// (0x000884b2) aid_size_cell_gallery2_ParamLimits

0xb535,	// (0x000884b2) aid_size_cell_gallery2

0xb543,	// (0x000884c0) grid_gallery2_pane_ParamLimits

0xb543,	// (0x000884c0) grid_gallery2_pane

0xb552,	// (0x000884cf) scroll_pane_cp029_ParamLimits

0xb552,	// (0x000884cf) scroll_pane_cp029

0xb55e,	// (0x000884db) cell_gallery2_pane_ParamLimits

0xb55e,	// (0x000884db) cell_gallery2_pane

0x28dd,	// (0x0007f85a) cell_gallery2_pane_g2

0x3db9,	// (0x00080d36) cell_gallery2_pane_g3

0x28e7,	// (0x0007f864) cell_gallery2_pane_g4

0x28ef,	// (0x0007f86c) cell_gallery2_pane_g5

0xecb2,	// (0x0008bc2f) grid_highlight_pane_cp10

0xabe5,	// (0x00087b62) popup_vitu2_match_list_window_ParamLimits

0xabf9,	// (0x00087b76) popup_vitu2_query_window_ParamLimits

0xabf9,	// (0x00087b76) popup_vitu2_query_window

0x5f29,	// (0x00082ea6) bg_vitu2_candi_button_pane

0x28d4,	// (0x0007f851) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x28cb,	// (0x0007f848) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x28c2,	// (0x0007f83f) cell_vitu2_dropdown_list_char_pane_g2_copy2

0xb58c,	// (0x00088509) bg_button_pane_cp015

0xb59e,	// (0x0008851b) bg_button_pane_cp016

0xb5b1,	// (0x0008852e) bg_button_pane_cp017

0x16f3,	// (0x0007e670) bg_popup_sub_pane_cp22

0x28f7,	// (0x0007f874) popup_vitu2_query_window_g1

0xb5f6,	// (0x00088573) popup_vitu2_query_window_g2

0x0002,

0xfa3b,	// (0x0008c9b8) popup_vitu2_query_window_g

0xb613,	// (0x00088590) popup_vitu2_query_window_t1_ParamLimits

0xb613,	// (0x00088590) popup_vitu2_query_window_t1

0xb646,	// (0x000885c3) popup_vitu2_query_window_t2_ParamLimits

0xb646,	// (0x000885c3) popup_vitu2_query_window_t2

0xb658,	// (0x000885d5) popup_vitu2_query_window_t3_ParamLimits

0xb658,	// (0x000885d5) popup_vitu2_query_window_t3

0xb680,	// (0x000885fd) popup_vitu2_query_window_t4_ParamLimits

0xb680,	// (0x000885fd) popup_vitu2_query_window_t4

0xb6a1,	// (0x0008861e) popup_vitu2_query_window_t5_ParamLimits

0xb6a1,	// (0x0008861e) popup_vitu2_query_window_t5

0x0006,

0xfa42,	// (0x0008c9bf) popup_vitu2_query_window_t_ParamLimits

0xfa42,	// (0x0008c9bf) popup_vitu2_query_window_t

0x274e,	// (0x0007f6cb) main_cset_text_pane

0xafb9,	// (0x00087f36) aid_area_touch_slider_ParamLimits

0xafd5,	// (0x00087f52) cset_slider_pane_ParamLimits

0xafff,	// (0x00087f7c) main_cset_slider_pane_g1_ParamLimits

0xb014,	// (0x00087f91) main_cset_slider_pane_g2_ParamLimits

0x276f,	// (0x0007f6ec) main_cset_slider_pane_g3_ParamLimits

0x276f,	// (0x0007f6ec) main_cset_slider_pane_g3

0xb029,	// (0x00087fa6) main_cset_slider_pane_g4_ParamLimits

0xb029,	// (0x00087fa6) main_cset_slider_pane_g4

0xb038,	// (0x00087fb5) main_cset_slider_pane_g5_ParamLimits

0xb038,	// (0x00087fb5) main_cset_slider_pane_g5

0xb046,	// (0x00087fc3) main_cset_slider_pane_g6_ParamLimits

0xb046,	// (0x00087fc3) main_cset_slider_pane_g6

0xf995,	// (0x0008c912) main_cset_slider_pane_g_ParamLimits

0x279f,	// (0x0007f71c) main_cset_slider_pane_t1_ParamLimits

0xb0d6,	// (0x00088053) main_cset_slider_pane_t2_ParamLimits

0xb0f0,	// (0x0008806d) main_cset_slider_pane_t3_ParamLimits

0xb10a,	// (0x00088087) main_cset_slider_pane_t4_ParamLimits

0xb124,	// (0x000880a1) main_cset_slider_pane_t5_ParamLimits

0xb142,	// (0x000880bf) main_cset_slider_pane_t6_ParamLimits

0xb159,	// (0x000880d6) main_cset_slider_pane_t7_ParamLimits

0xb187,	// (0x00088104) main_cset_slider_pane_t8_ParamLimits

0xb187,	// (0x00088104) main_cset_slider_pane_t8

0xb1af,	// (0x0008812c) main_cset_slider_pane_t9_ParamLimits

0xb1af,	// (0x0008812c) main_cset_slider_pane_t9

0xb1d7,	// (0x00088154) main_cset_slider_pane_t10_ParamLimits

0xb1d7,	// (0x00088154) main_cset_slider_pane_t10

0xb1ff,	// (0x0008817c) main_cset_slider_pane_t11_ParamLimits

0xb1ff,	// (0x0008817c) main_cset_slider_pane_t11

0xb229,	// (0x000881a6) main_cset_slider_pane_t12_ParamLimits

0xb229,	// (0x000881a6) main_cset_slider_pane_t12

0xb246,	// (0x000881c3) main_cset_slider_pane_t13_ParamLimits

0xb246,	// (0x000881c3) main_cset_slider_pane_t13

0xf9ba,	// (0x0008c937) main_cset_slider_pane_t_ParamLimits

0x0384,	// (0x0007d301) bg_popup_sub_pane_cp011

0x2903,	// (0x0007f880) main_cset_text_pane_g1

0x290b,	// (0x0007f888) main_cset_text_pane_t1

0x2919,	// (0x0007f896) main_cset_text_pane_t2

0x2927,	// (0x0007f8a4) main_cset_text_pane_t3

0x2935,	// (0x0007f8b2) main_cset_text_pane_t4

0x2943,	// (0x0007f8c0) main_cset_text_pane_t5

0x2951,	// (0x0007f8ce) main_cset_text_pane_t6

0x295f,	// (0x0007f8dc) main_cset_text_pane_t7

0x0006,

0xfa51,	// (0x0008c9ce) main_cset_text_pane_t

0x0384,	// (0x0007d301) main_cam4_burst_pane

0x0384,	// (0x0007d301) main_cam5_pane

0xaf08,	// (0x00087e85) bg_button_pane_cp019

0xaf11,	// (0x00087e8e) bg_button_pane_cp020

0x277b,	// (0x0007f6f8) main_cset_slider_pane_g7_ParamLimits

0x277b,	// (0x0007f6f8) main_cset_slider_pane_g7

0x2787,	// (0x0007f704) main_cset_slider_pane_g8_ParamLimits

0x2787,	// (0x0007f704) main_cset_slider_pane_g8

0xb05a,	// (0x00087fd7) main_cset_slider_pane_g9_ParamLimits

0xb05a,	// (0x00087fd7) main_cset_slider_pane_g9

0xb066,	// (0x00087fe3) main_cset_slider_pane_g10_ParamLimits

0xb066,	// (0x00087fe3) main_cset_slider_pane_g10

0xb072,	// (0x00087fef) main_cset_slider_pane_g11_ParamLimits

0xb072,	// (0x00087fef) main_cset_slider_pane_g11

0xb07e,	// (0x00087ffb) main_cset_slider_pane_g12_ParamLimits

0xb07e,	// (0x00087ffb) main_cset_slider_pane_g12

0xb08a,	// (0x00088007) main_cset_slider_pane_g13_ParamLimits

0xb08a,	// (0x00088007) main_cset_slider_pane_g13

0xb096,	// (0x00088013) main_cset_slider_pane_g14_ParamLimits

0xb096,	// (0x00088013) main_cset_slider_pane_g14

0xb0a2,	// (0x0008801f) main_cset_slider_pane_g15_ParamLimits

0xb0a2,	// (0x0008801f) main_cset_slider_pane_g15

0x27cd,	// (0x0007f74a) main_cset_slider_pane_t14_ParamLimits

0x27cd,	// (0x0007f74a) main_cset_slider_pane_t14

0x2806,	// (0x0007f783) main_cset_slider_pane_t15_ParamLimits

0x2806,	// (0x0007f783) main_cset_slider_pane_t15

0xb718,	// (0x00088695) aid_cam4_burst_size_cell_ParamLimits

0xb718,	// (0x00088695) aid_cam4_burst_size_cell

0xb734,	// (0x000886b1) grid_cam4_burst_pane_ParamLimits

0xb734,	// (0x000886b1) grid_cam4_burst_pane

0xb764,	// (0x000886e1) linegrid_cam4_burst_pane_ParamLimits

0xb764,	// (0x000886e1) linegrid_cam4_burst_pane

0xb784,	// (0x00088701) scroll_pane_cp30_ParamLimits

0xb784,	// (0x00088701) scroll_pane_cp30

0xb790,	// (0x0008870d) cell_cam4_burst_pane_ParamLimits

0xb790,	// (0x0008870d) cell_cam4_burst_pane

0x2979,	// (0x0007f8f6) linegrid_cam4_burst_pane_g1_ParamLimits

0x2979,	// (0x0007f8f6) linegrid_cam4_burst_pane_g1

0xb7cc,	// (0x00088749) linegrid_cam4_burst_pane_g2_ParamLimits

0xb7cc,	// (0x00088749) linegrid_cam4_burst_pane_g2

0x2986,	// (0x0007f903) linegrid_cam4_burst_pane_g3_ParamLimits

0x2986,	// (0x0007f903) linegrid_cam4_burst_pane_g3

0x0002,

0xfa60,	// (0x0008c9dd) linegrid_cam4_burst_pane_g_ParamLimits

0xfa60,	// (0x0008c9dd) linegrid_cam4_burst_pane_g

0xb7dd,	// (0x0008875a) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xb7dd,	// (0x0008875a) linegrid_cam4_burst_pane_g3_copy1

0x2993,	// (0x0007f910) linegrid_cam4_burst_pane_g4_ParamLimits

0x2993,	// (0x0007f910) linegrid_cam4_burst_pane_g4

0xb7f7,	// (0x00088774) linegrid_cam4_burst_pane_g5_ParamLimits

0xb7f7,	// (0x00088774) linegrid_cam4_burst_pane_g5

0xb808,	// (0x00088785) linegrid_cam4_burst_pane_g6_ParamLimits

0xb808,	// (0x00088785) linegrid_cam4_burst_pane_g6

0x29a0,	// (0x0007f91d) linegrid_cam4_burst_pane_g7_ParamLimits

0x29a0,	// (0x0007f91d) linegrid_cam4_burst_pane_g7

0xb819,	// (0x00088796) cell_cam4_burst_pane_g1

0x29b9,	// (0x0007f936) main_cam5_pane_t1_ParamLimits

0x29b9,	// (0x0007f936) main_cam5_pane_t1

0x29cb,	// (0x0007f948) main_cam5_pane_t2_ParamLimits

0x29cb,	// (0x0007f948) main_cam5_pane_t2

0x29dd,	// (0x0007f95a) main_cam5_pane_t3_ParamLimits

0x29dd,	// (0x0007f95a) main_cam5_pane_t3

0x29ef,	// (0x0007f96c) main_cam5_pane_t4_ParamLimits

0x29ef,	// (0x0007f96c) main_cam5_pane_t4

0x2a07,	// (0x0007f984) main_cam5_pane_t5_ParamLimits

0x2a07,	// (0x0007f984) main_cam5_pane_t5

0x2a1b,	// (0x0007f998) main_cam5_pane_t6_ParamLimits

0x2a1b,	// (0x0007f998) main_cam5_pane_t6

0x2a2f,	// (0x0007f9ac) main_cam5_pane_t7_ParamLimits

0x2a2f,	// (0x0007f9ac) main_cam5_pane_t7

0x2a41,	// (0x0007f9be) main_cam5_pane_t8_ParamLimits

0x2a41,	// (0x0007f9be) main_cam5_pane_t8

0x2a5d,	// (0x0007f9da) main_cam5_pane_t9_ParamLimits

0x2a5d,	// (0x0007f9da) main_cam5_pane_t9

0x2a6f,	// (0x0007f9ec) main_cam5_pane_t10_ParamLimits

0x2a6f,	// (0x0007f9ec) main_cam5_pane_t10

0x2a81,	// (0x0007f9fe) main_cam5_pane_t11_ParamLimits

0x2a81,	// (0x0007f9fe) main_cam5_pane_t11

0x2a93,	// (0x0007fa10) main_cam5_pane_t12_ParamLimits

0x2a93,	// (0x0007fa10) main_cam5_pane_t12

0x2aa8,	// (0x0007fa25) main_cam5_pane_t13_ParamLimits

0x2aa8,	// (0x0007fa25) main_cam5_pane_t13

0x000c,

0xfa6c,	// (0x0008c9e9) main_cam5_pane_t_ParamLimits

0xfa6c,	// (0x0008c9e9) main_cam5_pane_t

0x5ba0,	// (0x00082b1d) popup_scut_keymap_window_ParamLimits

0x5ba0,	// (0x00082b1d) popup_scut_keymap_window

0xb82c,	// (0x000887a9) aid_size_cell_brow_shortcut

0xecb2,	// (0x0008bc2f) bg_popup_window_pane_cp010

0xb838,	// (0x000887b5) grid_scut_pane

0xb844,	// (0x000887c1) cell_scut_pane_ParamLimits

0xb844,	// (0x000887c1) cell_scut_pane

0xb85b,	// (0x000887d8) cell_scut_pane_g1

0x2ac5,	// (0x0007fa42) cell_scut_pane_t1

0x2ad4,	// (0x0007fa51) cell_scut_pane_t2

0xb864,	// (0x000887e1) cell_scut_pane_t3

0x0002,

0xfa87,	// (0x0008ca04) cell_scut_pane_t

0x9738,	// (0x000866b5) main_mup3_pane_g8_ParamLimits

0x9738,	// (0x000866b5) main_mup3_pane_g8

0xab0f,	// (0x00087a8c) area_vitu2_query_pane_ParamLimits

0xab0f,	// (0x00087a8c) area_vitu2_query_pane

0xb5c4,	// (0x00088541) input_focus_pane_cp08

0x2ae3,	// (0x0007fa60) area_vitu2_query_pane_g1

0xb872,	// (0x000887ef) area_vitu2_query_pane_g2

0x0001,

0xfa8e,	// (0x0008ca0b) area_vitu2_query_pane_g

0xb883,	// (0x00088800) area_vitu2_query_pane_t1_ParamLimits

0xb883,	// (0x00088800) area_vitu2_query_pane_t1

0xb897,	// (0x00088814) area_vitu2_query_pane_t2_ParamLimits

0xb897,	// (0x00088814) area_vitu2_query_pane_t2

0xb8ab,	// (0x00088828) area_vitu2_query_pane_t3_ParamLimits

0xb8ab,	// (0x00088828) area_vitu2_query_pane_t3

0x2aef,	// (0x0007fa6c) area_vitu2_query_pane_t4_ParamLimits

0x2aef,	// (0x0007fa6c) area_vitu2_query_pane_t4

0x2b17,	// (0x0007fa94) area_vitu2_query_pane_t5_ParamLimits

0x2b17,	// (0x0007fa94) area_vitu2_query_pane_t5

0x2b3f,	// (0x0007fabc) area_vitu2_query_pane_t6_ParamLimits

0x2b3f,	// (0x0007fabc) area_vitu2_query_pane_t6

0x0006,

0xfa93,	// (0x0008ca10) area_vitu2_query_pane_t_ParamLimits

0xfa93,	// (0x0008ca10) area_vitu2_query_pane_t

0xb8d3,	// (0x00088850) bg_button_pane_cp018

0xb8e1,	// (0x0008885e) bg_button_pane_cp021

0xb8ed,	// (0x0008886a) bg_button_pane_cp022

0xb8fe,	// (0x0008887b) input_focus_pane_cp09

0x7bd4,	// (0x00084b51) aid_size_touch_mv_arrow_left

0x7bfd,	// (0x00084b7a) aid_size_touch_mv_arrow_right

0xb0ba,	// (0x00088037) main_cset_slider_pane_g16_ParamLimits

0xb0ba,	// (0x00088037) main_cset_slider_pane_g16

0xb0c8,	// (0x00088045) main_cset_slider_pane_g17_ParamLimits

0xb0c8,	// (0x00088045) main_cset_slider_pane_g17

0xb819,	// (0x00088796) cell_cam4_burst_pane_g1_ParamLimits

0x0384,	// (0x0007d301) compa_mode_pane

0xb2f2,	// (0x0008826f) popup_vtel_slider_window_g3_ParamLimits

0xb2f2,	// (0x0008826f) popup_vtel_slider_window_g3

0xb306,	// (0x00088283) popup_vtel_slider_window_g4_ParamLimits

0xb306,	// (0x00088283) popup_vtel_slider_window_g4

0xb31a,	// (0x00088297) popup_vtel_slider_window_t1_ParamLimits

0xb31a,	// (0x00088297) popup_vtel_slider_window_t1

0x0384,	// (0x0007d301) main_cl_pane

0x171b,	// (0x0007e698) popup_imed_adjust2_window_ParamLimits

0x16f3,	// (0x0007e670) bg_tb_trans_pane_cp05_ParamLimits

0x2087,	// (0x0007f004) popup_imed_adjust2_window_g1_ParamLimits

0x2096,	// (0x0007f013) popup_imed_adjust2_window_g2_ParamLimits

0x2096,	// (0x0007f013) popup_imed_adjust2_window_g2

0x20a2,	// (0x0007f01f) popup_imed_adjust2_window_g3_ParamLimits

0x20a2,	// (0x0007f01f) popup_imed_adjust2_window_g3

0x0002,

0xf7fe,	// (0x0008c77b) popup_imed_adjust2_window_g_ParamLimits

0xf7fe,	// (0x0008c77b) popup_imed_adjust2_window_g

0x20ae,	// (0x0007f02b) popup_imed_adjust2_window_t1_ParamLimits

0x20c6,	// (0x0007f043) slider_imed_adjust_pane_ParamLimits

0x20da,	// (0x0007f057) slider_imed_adjust_pane_g1_ParamLimits

0x20ea,	// (0x0007f067) slider_imed_adjust_pane_g2_ParamLimits

0x20fa,	// (0x0007f077) slider_imed_adjust_pane_g3_ParamLimits

0x210b,	// (0x0007f088) slider_imed_adjust_pane_g4_ParamLimits

0xf805,	// (0x0008c782) slider_imed_adjust_pane_g_ParamLimits

0xa841,	// (0x000877be) aid_touch_area_cam4_ParamLimits

0xa841,	// (0x000877be) aid_touch_area_cam4

0xa851,	// (0x000877ce) battery_pane_cp01

0xa8d8,	// (0x00087855) main_camera4_pane_g6_ParamLimits

0xa8d8,	// (0x00087855) main_camera4_pane_g6

0xa8f6,	// (0x00087873) main_camera4_pane_t2_ParamLimits

0xa8f6,	// (0x00087873) main_camera4_pane_t2

0x0001,

0xf908,	// (0x0008c885) main_camera4_pane_t_ParamLimits

0xf908,	// (0x0008c885) main_camera4_pane_t

0xa98b,	// (0x00087908) aid_touch_area_vid4_ParamLimits

0xa98b,	// (0x00087908) aid_touch_area_vid4

0xa9cb,	// (0x00087948) main_video4_pane_g5_ParamLimits

0xa9cb,	// (0x00087948) main_video4_pane_g5

0xa9ed,	// (0x0008796a) vid4_progress_pane_ParamLimits

0xa9ed,	// (0x0008796a) vid4_progress_pane

0x2793,	// (0x0007f710) main_cset_slider_pane_g18_ParamLimits

0x2793,	// (0x0007f710) main_cset_slider_pane_g18

0x29ad,	// (0x0007f92a) cell_cam4_burst_pane_g2_ParamLimits

0x29ad,	// (0x0007f92a) cell_cam4_burst_pane_g2

0x0001,

0xfa67,	// (0x0008c9e4) cell_cam4_burst_pane_g_ParamLimits

0xfa67,	// (0x0008c9e4) cell_cam4_burst_pane_g

0xb90f,	// (0x0008888c) bg_cl_pane_ParamLimits

0xb90f,	// (0x0008888c) bg_cl_pane

0xb91b,	// (0x00088898) cl_header_pane_ParamLimits

0xb91b,	// (0x00088898) cl_header_pane

0xb927,	// (0x000888a4) cl_listscroll_pane_ParamLimits

0xb927,	// (0x000888a4) cl_listscroll_pane

0x2b8b,	// (0x0007fb08) bg_cl_pane_g1

0x2b93,	// (0x0007fb10) bg_cl_pane_g2

0x2b9b,	// (0x0007fb18) bg_cl_pane_g3

0x2ba3,	// (0x0007fb20) bg_cl_pane_g4

0x2bab,	// (0x0007fb28) bg_cl_pane_g5

0x2bb3,	// (0x0007fb30) bg_cl_pane_g6

0x2bbb,	// (0x0007fb38) bg_cl_pane_g7

0x2bc3,	// (0x0007fb40) bg_cl_pane_g8

0x2bcb,	// (0x0007fb48) bg_cl_pane_g9

0x0008,

0xfaa2,	// (0x0008ca1f) bg_cl_pane_g

0xb933,	// (0x000888b0) aid_height_cl_leading_ParamLimits

0xb933,	// (0x000888b0) aid_height_cl_leading

0xb93f,	// (0x000888bc) aid_height_cl_text_ParamLimits

0xb93f,	// (0x000888bc) aid_height_cl_text

0x25a1,	// (0x0007f51e) bg_cl_header_pane_ParamLimits

0x25a1,	// (0x0007f51e) bg_cl_header_pane

0xb957,	// (0x000888d4) cl_header_pane_g1_ParamLimits

0xb957,	// (0x000888d4) cl_header_pane_g1

0xb964,	// (0x000888e1) cl_header_pane_t1_ParamLimits

0xb964,	// (0x000888e1) cl_header_pane_t1

0x2bd3,	// (0x0007fb50) cl_list_pane

0x2766,	// (0x0007f6e3) hc_scroll_pane_cp01

0xe5a7,	// (0x0008b524) bg_cl_header_pane_g1

0x264c,	// (0x0007f5c9) bg_cl_header_pane_g2

0xe5c7,	// (0x0008b544) bg_cl_header_pane_g3

0x265c,	// (0x0007f5d9) bg_cl_header_pane_g4

0x2654,	// (0x0007f5d1) bg_cl_header_pane_g5

0x28a2,	// (0x0007f81f) bg_cl_header_pane_g6

0x2674,	// (0x0007f5f1) bg_cl_header_pane_g7

0x267c,	// (0x0007f5f9) bg_cl_header_pane_g8

0x266c,	// (0x0007f5e9) bg_cl_header_pane_g9

0x0008,

0xfab5,	// (0x0008ca32) bg_cl_header_pane_g

0xb976,	// (0x000888f3) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xb976,	// (0x000888f3) hc_cl_list_double_graphic_heading_pane

0xb987,	// (0x00088904) hc_cl_list_single_graphic_pane_ParamLimits

0xb987,	// (0x00088904) hc_cl_list_single_graphic_pane

0xb9a0,	// (0x0008891d) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xb9a0,	// (0x0008891d) hc_cl_list_single_graphic_pane_g1

0xb9ac,	// (0x00088929) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xb9ac,	// (0x00088929) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfac8,	// (0x0008ca45) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfac8,	// (0x0008ca45) hc_cl_list_single_graphic_pane_g

0xb9c0,	// (0x0008893d) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xb9c0,	// (0x0008893d) hc_cl_list_single_graphic_pane_t1

0xb9a0,	// (0x0008891d) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xb9a0,	// (0x0008891d) hc_cl_list_double_graphic_heading_pane_g1

0xb9d5,	// (0x00088952) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xb9d5,	// (0x00088952) hc_cl_list_double_graphic_heading_pane_g2

0xb9e9,	// (0x00088966) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xb9e9,	// (0x00088966) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfacd,	// (0x0008ca4a) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfacd,	// (0x0008ca4a) hc_cl_list_double_graphic_heading_pane_g

0xb9fd,	// (0x0008897a) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xb9fd,	// (0x0008897a) hc_cl_list_double_graphic_heading_pane_t1

0xba12,	// (0x0008898f) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xba12,	// (0x0008898f) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfad4,	// (0x0008ca51) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfad4,	// (0x0008ca51) hc_cl_list_double_graphic_heading_pane_t

0xba2f,	// (0x000889ac) vid4_progress_pane_g1

0xba3f,	// (0x000889bc) vid4_progress_pane_g2

0xe86c,	// (0x0008b7e9) vid4_progress_pane_g3

0xba4f,	// (0x000889cc) vid4_progress_pane_g4

0x0004,

0xfad9,	// (0x0008ca56) vid4_progress_pane_g

0xba6d,	// (0x000889ea) vid4_progress_pane_t1

0xba82,	// (0x000889ff) vid4_progress_pane_t2

0x0002,

0xfae4,	// (0x0008ca61) vid4_progress_pane_t

0xbaad,	// (0x00088a2a) wait_bar_pane_cp07

0x194f,	// (0x0007e8cc) blid_firmament_pane_ParamLimits

0x1992,	// (0x0007e90f) popup_blid_sat_info2_window_g1

0x19b6,	// (0x0007e933) popup_blid_sat_info2_window_t3

0x19c4,	// (0x0007e941) popup_blid_sat_info2_window_t4

0x19d2,	// (0x0007e94f) popup_blid_sat_info2_window_t5

0x19e0,	// (0x0007e95d) popup_blid_sat_info2_window_t6

0x19f0,	// (0x0007e96d) popup_blid_sat_info2_window_t7

0x19fe,	// (0x0007e97b) popup_blid_sat_info2_window_t8

0x1a0c,	// (0x0007e989) popup_blid_sat_info2_window_t9

0x1a1a,	// (0x0007e997) popup_blid_sat_info2_window_t10

0x1adc,	// (0x0007ea59) aid_firma_cardinal_ParamLimits

0x1af0,	// (0x0007ea6d) blid_firmament_pane_t1_ParamLimits

0x1b07,	// (0x0007ea84) blid_firmament_pane_t2_ParamLimits

0x1b1e,	// (0x0007ea9b) blid_firmament_pane_t3_ParamLimits

0x1b35,	// (0x0007eab2) blid_firmament_pane_t4_ParamLimits

0xf6f7,	// (0x0008c674) blid_firmament_pane_t_ParamLimits

0x1b4c,	// (0x0007eac9) blid_sat_info_pane_ParamLimits

0xf0d2,	// (0x0008c04f) main_cam_set_pane_ParamLimits

0x9ebd,	// (0x00086e3a) aid_size_cell_colour_35_ParamLimits

0x9ed7,	// (0x00086e54) aid_size_cell_colour_112_ParamLimits

0x9eee,	// (0x00086e6b) aid_size_cell_effect_ParamLimits

0xf0d2,	// (0x0008c04f) bg_tb_trans_pane_cp02_ParamLimits

0xf0e0,	// (0x0008c05d) heading_imed_pane_ParamLimits

0x9f08,	// (0x00086e85) listscroll_imed_pane_ParamLimits

0x0d25,	// (0x0007dca2) popup_call2_audio_first_window_g5_ParamLimits

0x0d25,	// (0x0007dca2) popup_call2_audio_first_window_g5

0xa5f0,	// (0x0008756d) aid_size_touch_image3_arrow_left_ParamLimits

0xa5f0,	// (0x0008756d) aid_size_touch_image3_arrow_left

0xa606,	// (0x00087583) aid_size_touch_image3_arrow_right_ParamLimits

0xa606,	// (0x00087583) aid_size_touch_image3_arrow_right

0xba98,	// (0x00088a15) vid4_progress_pane_t3

0xa1a5,	// (0x00087122) main_hwr_training_symbol_option_pane_ParamLimits

0xa1a5,	// (0x00087122) main_hwr_training_symbol_option_pane

0x2374,	// (0x0007f2f1) popup_hwr_training_preview_window_ParamLimits

0x2374,	// (0x0007f2f1) popup_hwr_training_preview_window

0xa206,	// (0x00087183) hwr_training_navi_pane_g5_ParamLimits

0xa206,	// (0x00087183) hwr_training_navi_pane_g5

0x263a,	// (0x0007f5b7) popup_char_count_window

0xb410,	// (0x0008838d) bg_popup_sub_pane_cp20_ParamLimits

0xb41e,	// (0x0008839b) list_vitu2_match_list_pane_ParamLimits

0xb42a,	// (0x000883a7) vitu2_page_scroll_pane_ParamLimits

0xb42a,	// (0x000883a7) vitu2_page_scroll_pane

0x2c2e,	// (0x0007fbab) list_single_hwr_training_symbol_option_pane_ParamLimits

0x2c2e,	// (0x0007fbab) list_single_hwr_training_symbol_option_pane

0x2c41,	// (0x0007fbbe) list_single_hwr_training_symbol_option_pane_g1

0x2c49,	// (0x0007fbc6) list_single_hwr_training_symbol_option_pane_t1

0x2c57,	// (0x0007fbd4) bg_button_pane_cp023

0x2c60,	// (0x0007fbdd) bg_button_pane_cp024

0xbabf,	// (0x00088a3c) vitu2_page_scroll_pane_g1

0xbac7,	// (0x00088a44) vitu2_page_scroll_pane_g2

0x0001,

0xfaeb,	// (0x0008ca68) vitu2_page_scroll_pane_g

0xbacf,	// (0x00088a4c) vitu2_page_scroll_pane_t1

0x4935,	// (0x000818b2) popup_char_count_window_g1

0x493e,	// (0x000818bb) popup_char_count_window_g2

0x4947,	// (0x000818c4) popup_char_count_window_g3

0x0002,

0xfaf0,	// (0x0008ca6d) popup_char_count_window_g

0x4950,	// (0x000818cd) popup_char_count_window_t1

0x0384,	// (0x0007d301) main_vded2_pane

0x2073,	// (0x0007eff0) aid_size_cell_imed_line

0x207d,	// (0x0007effa) grid_imed_line_width_pane

0xaa64,	// (0x000879e1) vid4_indicators_pane_g4

0x495e,	// (0x000818db) cell_imed_line_width_pane_ParamLimits

0x495e,	// (0x000818db) cell_imed_line_width_pane

0x4972,	// (0x000818ef) cell_imed_line_width_pane_g1

0x2c69,	// (0x0007fbe6) cell_imed_line_width_pane_g2

0x0001,

0xfaf7,	// (0x0008ca74) cell_imed_line_width_pane_g

0xbade,	// (0x00088a5b) main_vded2_pane_g1_ParamLimits

0xbade,	// (0x00088a5b) main_vded2_pane_g1

0xbaeb,	// (0x00088a68) main_vded2_pane_g2_ParamLimits

0xbaeb,	// (0x00088a68) main_vded2_pane_g2

0x0001,

0xfafc,	// (0x0008ca79) main_vded2_pane_g_ParamLimits

0xfafc,	// (0x0008ca79) main_vded2_pane_g

0xbaf9,	// (0x00088a76) vded2_slider_pane_ParamLimits

0xbaf9,	// (0x00088a76) vded2_slider_pane

0xbb06,	// (0x00088a83) aid_size_touch_vded2_end

0xbb10,	// (0x00088a8d) aid_size_touch_vded2_playhead

0x497b,	// (0x000818f8) aid_size_touch_vded2_start

0x4983,	// (0x00081900) vded2_slider_bg_pane

0x498c,	// (0x00081909) vded2_slider_pane_g1

0x4995,	// (0x00081912) vded2_slider_pane_g2

0xbb18,	// (0x00088a95) vded2_slider_pane_g3

0x0002,

0xfb01,	// (0x0008ca7e) vded2_slider_pane_g

0x499d,	// (0x0008191a) vded2_slider_bg_pane_g1

0x49a6,	// (0x00081923) vded2_slider_bg_pane_g2

0x49af,	// (0x0008192c) vded2_slider_bg_pane_g3

0x0002,

0xfb08,	// (0x0008ca85) vded2_slider_bg_pane_g

0x830e,	// (0x0008528b) aid_postcard_touch_down_pane_ParamLimits

0x830e,	// (0x0008528b) aid_postcard_touch_down_pane

0x831e,	// (0x0008529b) aid_postcard_touch_up_pane_ParamLimits

0x831e,	// (0x0008529b) aid_postcard_touch_up_pane

0x0384,	// (0x0007d301) main_blid2_pane

0x1701,	// (0x0007e67e) popup_blid2_search_window

0x0384,	// (0x0007d301) blid2_gps_pane

0x0384,	// (0x0007d301) blid2_navig_pane

0x0384,	// (0x0007d301) blid2_search_pane

0x0384,	// (0x0007d301) blid2_tripm_pane

0xbb21,	// (0x00088a9e) blid2_search_pane_g1_ParamLimits

0xbb21,	// (0x00088a9e) blid2_search_pane_g1

0xbb31,	// (0x00088aae) blid2_search_pane_t1_ParamLimits

0xbb31,	// (0x00088aae) blid2_search_pane_t1

0xbb43,	// (0x00088ac0) aid_size_cell_blid2_gps_ParamLimits

0xbb43,	// (0x00088ac0) aid_size_cell_blid2_gps

0xbb53,	// (0x00088ad0) blid2_gps_pane_g1_ParamLimits

0xbb53,	// (0x00088ad0) blid2_gps_pane_g1

0xbb5f,	// (0x00088adc) grid_blid2_satellite_pane_ParamLimits

0xbb5f,	// (0x00088adc) grid_blid2_satellite_pane

0xbb6f,	// (0x00088aec) blid2_navig_pane_g1_ParamLimits

0xbb6f,	// (0x00088aec) blid2_navig_pane_g1

0xbb7b,	// (0x00088af8) blid2_navig_pane_t1_ParamLimits

0xbb7b,	// (0x00088af8) blid2_navig_pane_t1

0xbb8d,	// (0x00088b0a) blid2_navig_pane_t2_ParamLimits

0xbb8d,	// (0x00088b0a) blid2_navig_pane_t2

0x0001,

0xfb0f,	// (0x0008ca8c) blid2_navig_pane_t_ParamLimits

0xfb0f,	// (0x0008ca8c) blid2_navig_pane_t

0xbb9f,	// (0x00088b1c) blid2_navig_ring_pane_ParamLimits

0xbb9f,	// (0x00088b1c) blid2_navig_ring_pane

0xbbaf,	// (0x00088b2c) blid2_speed_pane_ParamLimits

0xbbaf,	// (0x00088b2c) blid2_speed_pane

0xbbbb,	// (0x00088b38) blid2_tripm_pane_g1_ParamLimits

0xbbbb,	// (0x00088b38) blid2_tripm_pane_g1

0xbbcb,	// (0x00088b48) blid2_tripm_pane_g2_ParamLimits

0xbbcb,	// (0x00088b48) blid2_tripm_pane_g2

0xbbd7,	// (0x00088b54) blid2_tripm_pane_g3_ParamLimits

0xbbd7,	// (0x00088b54) blid2_tripm_pane_g3

0xbbe3,	// (0x00088b60) blid2_tripm_pane_g4_ParamLimits

0xbbe3,	// (0x00088b60) blid2_tripm_pane_g4

0xbbef,	// (0x00088b6c) blid2_tripm_pane_g5_ParamLimits

0xbbef,	// (0x00088b6c) blid2_tripm_pane_g5

0x0005,

0xfb14,	// (0x0008ca91) blid2_tripm_pane_g_ParamLimits

0xfb14,	// (0x0008ca91) blid2_tripm_pane_g

0xbc0b,	// (0x00088b88) blid2_tripm_pane_t1_ParamLimits

0xbc0b,	// (0x00088b88) blid2_tripm_pane_t1

0xbc1f,	// (0x00088b9c) blid2_tripm_pane_t2_ParamLimits

0xbc1f,	// (0x00088b9c) blid2_tripm_pane_t2

0xbc31,	// (0x00088bae) blid2_tripm_pane_t3_ParamLimits

0xbc31,	// (0x00088bae) blid2_tripm_pane_t3

0x0003,

0xfb21,	// (0x0008ca9e) blid2_tripm_pane_t_ParamLimits

0xfb21,	// (0x0008ca9e) blid2_tripm_pane_t

0xbc63,	// (0x00088be0) cell_blid2_satellite_pane_ParamLimits

0xbc63,	// (0x00088be0) cell_blid2_satellite_pane

0xbc7d,	// (0x00088bfa) cell_blid2_satellite_pane_g1

0x49b8,	// (0x00081935) cell_blid2_satellite_pane_t1

0x1b5c,	// (0x0007ead9) blid2_speed_pane_g1

0x49c6,	// (0x00081943) blid2_speed_pane_t1

0x49d4,	// (0x00081951) blid2_speed_pane_t2

0x0001,

0xfb2a,	// (0x0008caa7) blid2_speed_pane_t

0x1b5c,	// (0x0007ead9) blid2_navig_ring_pane_g1

0xbc86,	// (0x00088c03) blid2_navig_ring_pane_g2

0xbc8e,	// (0x00088c0b) blid2_navig_ring_pane_g3

0xbc96,	// (0x00088c13) blid2_navig_ring_pane_g4

0xbc9e,	// (0x00088c1b) blid2_navig_ring_pane_g5

0x0004,

0xfb2f,	// (0x0008caac) blid2_navig_ring_pane_g

0x0384,	// (0x0007d301) bg_popup_window_pane_cp011

0x49e2,	// (0x0008195f) popup_blid2_search_window_g1

0x49ea,	// (0x00081967) popup_blid2_search_window_t1

0x49f8,	// (0x00081975) popup_blid2_search_window_t2

0x0001,

0xfb3a,	// (0x0008cab7) popup_blid2_search_window_t

0xe4b6,	// (0x0008b433) main_browser_pane_g1

0xe1d3,	// (0x0008b150) main_browser_pane_ParamLimits

0xaa19,	// (0x00087996) bg_button_pane_cp011_ParamLimits

0xacdb,	// (0x00087c58) cell_vitu2_function_pane_g1_ParamLimits

0x16f3,	// (0x0007e670) bg_popup_sub_pane_cp22_ParamLimits

0xb5c4,	// (0x00088541) input_focus_pane_cp08_ParamLimits

0xb5db,	// (0x00088558) popup_vitu2_query_button_pane_ParamLimits

0xb5db,	// (0x00088558) popup_vitu2_query_button_pane

0xb5ec,	// (0x00088569) popup_vitu2_query_input_button_pane

0x28f7,	// (0x0007f874) popup_vitu2_query_window_g1_ParamLimits

0xb5f6,	// (0x00088573) popup_vitu2_query_window_g2_ParamLimits

0xfa3b,	// (0x0008c9b8) popup_vitu2_query_window_g_ParamLimits

0x0384,	// (0x0007d301) bg_button_pane_cp026

0xbca6,	// (0x00088c23) popup_vitu2_query_input_button_pane_g1

0x0384,	// (0x0007d301) bg_button_pane_cp025

0x4a06,	// (0x00081983) popup_vitu2_query_button_pane_t1

0x9453,	// (0x000863d0) main_mp3_pane_t6

0x9463,	// (0x000863e0) popup_slider_window_cp01

0xa93a,	// (0x000878b7) cam4_battery_pane

0xaa27,	// (0x000879a4) cam4_battery_pane_cp02

0xba27,	// (0x000889a4) cam4_battery_pane_cp01

0xba27,	// (0x000889a4) cam4_battery_pane_cp03

0x2c71,	// (0x0007fbee) cam4_battery_pane_g1

0x1b5c,	// (0x0007ead9) cam4_battery_pane_g2

0x0001,

0xfb3f,	// (0x0008cabc) cam4_battery_pane_g

0x1a28,	// (0x0007e9a5) popup_blid_sat_info2_window_t11

0x7bd4,	// (0x00084b51) aid_size_touch_mv_arrow_left_ParamLimits

0x7bfd,	// (0x00084b7a) aid_size_touch_mv_arrow_right_ParamLimits

0xec12,	// (0x0008bb8f) navi_pane_g1_ParamLimits

0x7c26,	// (0x00084ba3) navi_pane_g2_ParamLimits

0x7c54,	// (0x00084bd1) navi_pane_g3_ParamLimits

0xf409,	// (0x0008c386) navi_pane_g_ParamLimits

0x7cae,	// (0x00084c2b) navi_pane_mv_t1_ParamLimits

0x9f14,	// (0x00086e91) grid_imed_effect_pane_ParamLimits

0x6932,	// (0x000838af) aid_placing_vt_slider_lsc

0xe407,	// (0x0008b384) aid_placing_vt_slider_prt

0xf0d2,	// (0x0008c04f) bg_tb_trans_pane_cp01_ParamLimits

0x1ce8,	// (0x0007ec65) popup_image_details_window_g1_ParamLimits

0x1cfb,	// (0x0007ec78) popup_image_details_window_g2_ParamLimits

0x1d10,	// (0x0007ec8d) popup_image_details_window_g3_ParamLimits

0x1d10,	// (0x0007ec8d) popup_image_details_window_g3

0xf73c,	// (0x0008c6b9) popup_image_details_window_g_ParamLimits

0x1d24,	// (0x0007eca1) popup_image_details_window_t1_ParamLimits

0x1d36,	// (0x0007ecb3) popup_image_details_window_t2_ParamLimits

0x1d4f,	// (0x0007eccc) popup_image_details_window_t3_ParamLimits

0x1d63,	// (0x0007ece0) popup_image_details_window_t4_ParamLimits

0x1d7e,	// (0x0007ecfb) popup_image_details_window_t5_ParamLimits

0xf743,	// (0x0008c6c0) popup_image_details_window_t_ParamLimits

0xb94b,	// (0x000888c8) cl_header_name_pane_ParamLimits

0xb94b,	// (0x000888c8) cl_header_name_pane

0xbcae,	// (0x00088c2b) cl_header_name_pane_t1_ParamLimits

0xbcae,	// (0x00088c2b) cl_header_name_pane_t1

0xbcc5,	// (0x00088c42) cl_header_name_pane_t2_ParamLimits

0xbcc5,	// (0x00088c42) cl_header_name_pane_t2

0xbcef,	// (0x00088c6c) cl_header_name_pane_t3_ParamLimits

0xbcef,	// (0x00088c6c) cl_header_name_pane_t3

0x0002,

0xfb44,	// (0x0008cac1) cl_header_name_pane_t_ParamLimits

0xfb44,	// (0x0008cac1) cl_header_name_pane_t

0x7c7f,	// (0x00084bfc) navi_pane_mv_g2_ParamLimits

0x25c8,	// (0x0007f545) field_vitu2_entry_pane_g1_ParamLimits

0x25d4,	// (0x0007f551) field_vitu2_entry_pane_g2_ParamLimits

0x25e0,	// (0x0007f55d) field_vitu2_entry_pane_g3_ParamLimits

0x25e0,	// (0x0007f55d) field_vitu2_entry_pane_g3

0xf93a,	// (0x0008c8b7) field_vitu2_entry_pane_g_ParamLimits

0xac6b,	// (0x00087be8) cell_vitu2_itu_pane_g1_ParamLimits

0xac7b,	// (0x00087bf8) cell_vitu2_itu_pane_g2_ParamLimits

0xac7b,	// (0x00087bf8) cell_vitu2_itu_pane_g2

0x0001,

0xf946,	// (0x0008c8c3) cell_vitu2_itu_pane_g_ParamLimits

0xf946,	// (0x0008c8c3) cell_vitu2_itu_pane_g

0xaa19,	// (0x00087996) bg_vkb2_func_pane_cp05_ParamLimits

0xaa19,	// (0x00087996) bg_vkb2_func_pane_cp05

0xaa19,	// (0x00087996) bg_vkb2_func_pane_cp03

0xaa19,	// (0x00087996) bg_vkb2_func_pane_cp04

0xaa19,	// (0x00087996) bg_vkb2_func_pane_cp10_ParamLimits

0xaa19,	// (0x00087996) bg_vkb2_func_pane_cp10

0xb8ed,	// (0x0008886a) bg_vkb2_func_pane_cp08

0xb8d3,	// (0x00088850) bg_vkb2_func_pane_cp06

0xb8e1,	// (0x0008885e) bg_vkb2_func_pane_cp07

0x490b,	// (0x00081888) bg_vkb2_func_pane_cp11_ParamLimits

0x490b,	// (0x00081888) bg_vkb2_func_pane_cp11

0x4920,	// (0x0008189d) bg_vkb2_func_pane_cp12_ParamLimits

0x4920,	// (0x0008189d) bg_vkb2_func_pane_cp12

0x0384,	// (0x0007d301) bg_vkb2_func_pane_cp09

0x264c,	// (0x0007f5c9) bg_vkb2_func_pane_g1

0xe5c7,	// (0x0008b544) bg_vkb2_func_pane_g2

0x2654,	// (0x0007f5d1) bg_vkb2_func_pane_g3

0x265c,	// (0x0007f5d9) bg_vkb2_func_pane_g4

0x28a2,	// (0x0007f81f) bg_vkb2_func_pane_g5

0x2674,	// (0x0007f5f1) bg_vkb2_func_pane_g6

0x267c,	// (0x0007f5f9) bg_vkb2_func_pane_g7

0x266c,	// (0x0007f5e9) bg_vkb2_func_pane_g8

0xe5a7,	// (0x0008b524) bg_vkb2_func_pane_g9

0x0008,

0xfb4b,	// (0x0008cac8) bg_vkb2_func_pane_g

0xbbfd,	// (0x00088b7a) blid2_tripm_pane_g6_ParamLimits

0xbbfd,	// (0x00088b7a) blid2_tripm_pane_g6

0x2448,	// (0x0007f3c5) mp4_progress_pane_g1

0xbc57,	// (0x00088bd4) blid2_tripm_values_pane_ParamLimits

0xbc57,	// (0x00088bd4) blid2_tripm_values_pane

0xbd14,	// (0x00088c91) blid2_tripm_values_pane_t1

0xbd22,	// (0x00088c9f) blid2_tripm_values_pane_t2

0xbd30,	// (0x00088cad) blid2_tripm_values_pane_t3

0xbd3e,	// (0x00088cbb) blid2_tripm_values_pane_t4

0xbd4c,	// (0x00088cc9) blid2_tripm_values_pane_t5

0xbd5a,	// (0x00088cd7) blid2_tripm_values_pane_t6

0xbd68,	// (0x00088ce5) blid2_tripm_values_pane_t7

0xbd76,	// (0x00088cf3) blid2_tripm_values_pane_t8

0xbd84,	// (0x00088d01) blid2_tripm_values_pane_t9

0x0008,

0xfb5e,	// (0x0008cadb) blid2_tripm_values_pane_t

0x6972,	// (0x000838ef) call_video_pane_t1_ParamLimits

0x6993,	// (0x00083910) call_video_pane_t2_ParamLimits

0xf292,	// (0x0008c20f) call_video_pane_t_ParamLimits

0x81df,	// (0x0008515c) msg_header_pane_g1_ParamLimits

0xee2d,	// (0x0008bdaa) msg_header_pane_g2_ParamLimits

0xee2d,	// (0x0008bdaa) msg_header_pane_g2

0x0001,

0xf4ac,	// (0x0008c429) msg_header_pane_g_ParamLimits

0xf4ac,	// (0x0008c429) msg_header_pane_g

0xe1d3,	// (0x0008b150) main_clock2_pane_ParamLimits

0x9ca4,	// (0x00086c21) grid_clock2_toolbar_pane_ParamLimits

0x9ca4,	// (0x00086c21) grid_clock2_toolbar_pane

0x9ca4,	// (0x00086c21) listscroll_clock2_pane_ParamLimits

0x9ca4,	// (0x00086c21) listscroll_clock2_pane

0x9d51,	// (0x00086cce) main_clock2_pane_t3_ParamLimits

0x9d51,	// (0x00086cce) main_clock2_pane_t3

0x9d63,	// (0x00086ce0) main_clock2_pane_t4_ParamLimits

0x9d63,	// (0x00086ce0) main_clock2_pane_t4

0x4a14,	// (0x00081991) cell_clock2_toolbar_pane

0x4a1c,	// (0x00081999) cell_clock2_toolbar_pane_cp01

0x4a1c,	// (0x00081999) cell_clock2_toolbar_pane_cp02

0x4a24,	// (0x000819a1) cell_clock2_toolbar_pane_cp03

0x4a2c,	// (0x000819a9) list_clock2_pane

0xeb69,	// (0x0008bae6) scroll_pane_cp10

0x4a34,	// (0x000819b1) list_single_clock2_pane_ParamLimits

0x4a34,	// (0x000819b1) list_single_clock2_pane

0xecb2,	// (0x0008bc2f) list_highlight_pane_cp08

0x4a41,	// (0x000819be) list_single_clock2_pane_t1

0x2c7b,	// (0x0007fbf8) list_single_clock2_pane_t2

0x0001,

0xfb71,	// (0x0008caee) list_single_clock2_pane_t

0x0384,	// (0x0007d301) bg_button_pane_cp10

0x2c89,	// (0x0007fc06) cell_clock2_toolbar_pane_g1

0x827c,	// (0x000851f9) aid_main_viewer_pane_g1_ParamLimits

0x827c,	// (0x000851f9) aid_main_viewer_pane_g1

0x8288,	// (0x00085205) aid_main_viewer_pane_g2_ParamLimits

0x8288,	// (0x00085205) aid_main_viewer_pane_g2

0x8294,	// (0x00085211) aid_main_viewer_pane_g3_ParamLimits

0x8294,	// (0x00085211) aid_main_viewer_pane_g3

0x82a5,	// (0x00085222) aid_main_viewer_pane_g4_ParamLimits

0x82a5,	// (0x00085222) aid_main_viewer_pane_g4

0x0003,

0xf4bd,	// (0x0008c43a) aid_main_viewer_pane_g_ParamLimits

0xf4bd,	// (0x0008c43a) aid_main_viewer_pane_g

0x8a19,	// (0x00085996) main_calc_pane_ParamLimits

0x8a26,	// (0x000859a3) main_dialer2_pane_ParamLimits

0x0384,	// (0x0007d301) main_cam6_pane

0x0384,	// (0x0007d301) main_vid6_pane

0x9cb0,	// (0x00086c2d) listscroll_gen_pane_cp06_ParamLimits

0x9cb0,	// (0x00086c2d) listscroll_gen_pane_cp06

0x9d75,	// (0x00086cf2) main_clock2_pane_t5_ParamLimits

0x9d75,	// (0x00086cf2) main_clock2_pane_t5

0x9dbe,	// (0x00086d3b) aid_call2_pane_cp10_ParamLimits

0x9dd0,	// (0x00086d4d) aid_call_pane_cp10_ParamLimits

0xebe7,	// (0x0008bb64) popup_clock_analogue_window_cp10_g1_ParamLimits

0xebe7,	// (0x0008bb64) popup_clock_analogue_window_cp10_g2_ParamLimits

0x9de2,	// (0x00086d5f) popup_clock_analogue_window_cp10_g3_ParamLimits

0x9de2,	// (0x00086d5f) popup_clock_analogue_window_cp10_g4_ParamLimits

0xebe7,	// (0x0008bb64) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7f3,	// (0x0008c770) popup_clock_analogue_window_cp10_g_ParamLimits

0x9df4,	// (0x00086d71) popup_clock_analogue_window_cp10_t1_ParamLimits

0xa59d,	// (0x0008751a) cell_dialer2_keypad_pane_g2_ParamLimits

0xa59d,	// (0x0008751a) cell_dialer2_keypad_pane_g2

0x0001,

0xf8d9,	// (0x0008c856) cell_dialer2_keypad_pane_g_ParamLimits

0xf8d9,	// (0x0008c856) cell_dialer2_keypad_pane_g

0xa5b9,	// (0x00087536) cell_dialer2_keypad_pane_t1

0xafa6,	// (0x00087f23) main_cset_text2_pane_ParamLimits

0xafa6,	// (0x00087f23) main_cset_text2_pane

0x2ae3,	// (0x0007fa60) area_vitu2_query_pane_g1_ParamLimits

0xb872,	// (0x000887ef) area_vitu2_query_pane_g2_ParamLimits

0xfa8e,	// (0x0008ca0b) area_vitu2_query_pane_g_ParamLimits

0x2b67,	// (0x0007fae4) area_vitu2_query_pane_t7_ParamLimits

0x2b67,	// (0x0007fae4) area_vitu2_query_pane_t7

0xb8d3,	// (0x00088850) bg_button_pane_cp018_ParamLimits

0xb8e1,	// (0x0008885e) bg_button_pane_cp021_ParamLimits

0xb8ed,	// (0x0008886a) bg_button_pane_cp022_ParamLimits

0xb8ed,	// (0x0008886a) bg_vkb2_func_pane_cp08_ParamLimits

0xb8d3,	// (0x00088850) bg_vkb2_func_pane_cp06_ParamLimits

0xb8e1,	// (0x0008885e) bg_vkb2_func_pane_cp07_ParamLimits

0xb8fe,	// (0x0008887b) input_focus_pane_cp09_ParamLimits

0xbd92,	// (0x00088d0f) cam6_autofocus_pane_ParamLimits

0xbd92,	// (0x00088d0f) cam6_autofocus_pane

0xbdb4,	// (0x00088d31) cam6_image_uncrop_pane_ParamLimits

0xbdb4,	// (0x00088d31) cam6_image_uncrop_pane

0xbde1,	// (0x00088d5e) cam6_indi_pane_ParamLimits

0xbde1,	// (0x00088d5e) cam6_indi_pane

0xbdfb,	// (0x00088d78) cam6_mode_pane_ParamLimits

0xbdfb,	// (0x00088d78) cam6_mode_pane

0xbe0f,	// (0x00088d8c) cam6_timer_pane_ParamLimits

0xbe0f,	// (0x00088d8c) cam6_timer_pane

0xbe1b,	// (0x00088d98) cam6_zoom_pane_ParamLimits

0xbe1b,	// (0x00088d98) cam6_zoom_pane

0xbe33,	// (0x00088db0) cam6_mode_pane_g1_ParamLimits

0xbe33,	// (0x00088db0) cam6_mode_pane_g1

0xbe3f,	// (0x00088dbc) cam6_mode_pane_g2_ParamLimits

0xbe3f,	// (0x00088dbc) cam6_mode_pane_g2

0xbe4b,	// (0x00088dc8) cam6_mode_pane_g3_ParamLimits

0xbe4b,	// (0x00088dc8) cam6_mode_pane_g3

0xbe57,	// (0x00088dd4) cam6_mode_pane_g4_ParamLimits

0xbe57,	// (0x00088dd4) cam6_mode_pane_g4

0x0003,

0xfb76,	// (0x0008caf3) cam6_mode_pane_g_ParamLimits

0xfb76,	// (0x0008caf3) cam6_mode_pane_g

0x2c91,	// (0x0007fc0e) bg_tb_trans_pane_cp08_ParamLimits

0x2c91,	// (0x0007fc0e) bg_tb_trans_pane_cp08

0x2c9f,	// (0x0007fc1c) cam6_battery_pane_ParamLimits

0x2c9f,	// (0x0007fc1c) cam6_battery_pane

0x2cb5,	// (0x0007fc32) cam6_indi_pane_g1_ParamLimits

0x2cb5,	// (0x0007fc32) cam6_indi_pane_g1

0x2cc7,	// (0x0007fc44) cam6_indi_pane_g2_ParamLimits

0x2cc7,	// (0x0007fc44) cam6_indi_pane_g2

0x2cd9,	// (0x0007fc56) cam6_indi_pane_g3_ParamLimits

0x2cd9,	// (0x0007fc56) cam6_indi_pane_g3

0x0002,

0xfb7f,	// (0x0008cafc) cam6_indi_pane_g_ParamLimits

0xfb7f,	// (0x0008cafc) cam6_indi_pane_g

0x2ceb,	// (0x0007fc68) cam6_indi_pane_t1_ParamLimits

0x2ceb,	// (0x0007fc68) cam6_indi_pane_t1

0xaaa1,	// (0x00087a1e) cam6_autofocus_pane_g1

0xaa99,	// (0x00087a16) cam6_autofocus_pane_g2

0xaab1,	// (0x00087a2e) cam6_autofocus_pane_g3

0xaaa9,	// (0x00087a26) cam6_autofocus_pane_g4

0x0003,

0xfb86,	// (0x0008cb03) cam6_autofocus_pane_g

0x2d11,	// (0x0007fc8e) cam6_timer_pane_g1

0x2d19,	// (0x0007fc96) cam6_timer_pane_t1

0x2d27,	// (0x0007fca4) cam6_zoom_cont_pane

0x2d2f,	// (0x0007fcac) cam6_zoom_pane_g1

0x2d37,	// (0x0007fcb4) cam6_zoom_pane_g2

0xbe63,	// (0x00088de0) cam6_zoom_pane_g3

0x0002,

0xfb8f,	// (0x0008cb0c) cam6_zoom_pane_g

0x1b5c,	// (0x0007ead9) cam6_battery_pane_g1

0x1b5c,	// (0x0007ead9) cam6_battery_pane_g2

0x0001,

0xf700,	// (0x0008c67d) cam6_battery_pane_g

0x2d3f,	// (0x0007fcbc) cam6_zoom_cont_pane_g1

0x2d48,	// (0x0007fcc5) cam6_zoom_cont_pane_g2

0x2d51,	// (0x0007fcce) cam6_zoom_cont_pane_g3

0x0002,

0xfb96,	// (0x0008cb13) cam6_zoom_cont_pane_g

0xbe80,	// (0x00088dfd) cam6_mode_pane_cp_ParamLimits

0xbe80,	// (0x00088dfd) cam6_mode_pane_cp

0xbe94,	// (0x00088e11) cam6_zoom_pane_cp_ParamLimits

0xbe94,	// (0x00088e11) cam6_zoom_pane_cp

0xbeac,	// (0x00088e29) vid6_image_uncrop_cif_pane_ParamLimits

0xbeac,	// (0x00088e29) vid6_image_uncrop_cif_pane

0xbed8,	// (0x00088e55) vid6_image_uncrop_nhd_pane_ParamLimits

0xbed8,	// (0x00088e55) vid6_image_uncrop_nhd_pane

0xbef5,	// (0x00088e72) vid6_image_uncrop_vga_pane_ParamLimits

0xbef5,	// (0x00088e72) vid6_image_uncrop_vga_pane

0xbf14,	// (0x00088e91) vid6_image_uncrop_wvga_pane_ParamLimits

0xbf14,	// (0x00088e91) vid6_image_uncrop_wvga_pane

0xbf31,	// (0x00088eae) vid6_indi_pane_ParamLimits

0xbf31,	// (0x00088eae) vid6_indi_pane

0x2c91,	// (0x0007fc0e) bg_tb_trans_pane_cp09_ParamLimits

0x2c91,	// (0x0007fc0e) bg_tb_trans_pane_cp09

0x2d69,	// (0x0007fce6) cam6_battery_pane_cp_ParamLimits

0x2d69,	// (0x0007fce6) cam6_battery_pane_cp

0x2d75,	// (0x0007fcf2) vid6_indi_pane_g1_ParamLimits

0x2d75,	// (0x0007fcf2) vid6_indi_pane_g1

0x2d87,	// (0x0007fd04) vid6_indi_pane_g2_ParamLimits

0x2d87,	// (0x0007fd04) vid6_indi_pane_g2

0x2d99,	// (0x0007fd16) vid6_indi_pane_g3_ParamLimits

0x2d99,	// (0x0007fd16) vid6_indi_pane_g3

0x2dae,	// (0x0007fd2b) vid6_indi_pane_g4_ParamLimits

0x2dae,	// (0x0007fd2b) vid6_indi_pane_g4

0x2dc3,	// (0x0007fd40) vid6_indi_pane_g5_ParamLimits

0x2dc3,	// (0x0007fd40) vid6_indi_pane_g5

0x0004,

0xfb9d,	// (0x0008cb1a) vid6_indi_pane_g_ParamLimits

0xfb9d,	// (0x0008cb1a) vid6_indi_pane_g

0x2ddd,	// (0x0007fd5a) vid6_indi_pane_t1_ParamLimits

0x2ddd,	// (0x0007fd5a) vid6_indi_pane_t1

0x2df3,	// (0x0007fd70) vid6_indi_pane_t2_ParamLimits

0x2df3,	// (0x0007fd70) vid6_indi_pane_t2

0x2e1b,	// (0x0007fd98) vid6_indi_pane_t3_ParamLimits

0x2e1b,	// (0x0007fd98) vid6_indi_pane_t3

0x2e43,	// (0x0007fdc0) vid6_indi_pane_t4_ParamLimits

0x2e43,	// (0x0007fdc0) vid6_indi_pane_t4

0x0003,

0xfba8,	// (0x0008cb25) vid6_indi_pane_t_ParamLimits

0xfba8,	// (0x0008cb25) vid6_indi_pane_t

0x2e67,	// (0x0007fde4) wait_bar_pane_cp08

0xbf56,	// (0x00088ed3) main_cset_text2_pane_t1_ParamLimits

0xbf56,	// (0x00088ed3) main_cset_text2_pane_t1

0xbe6b,	// (0x00088de8) listscroll_gen_pane_cp06_t1_ParamLimits

0xbe6b,	// (0x00088de8) listscroll_gen_pane_cp06_t1

0x0384,	// (0x0007d301) main_cam6_set_pane

0xa92c,	// (0x000878a9) bg_tb_trans_pane_cp06_ParamLimits

0xa942,	// (0x000878bf) cam4_indicators_pane_g1_ParamLimits

0xa953,	// (0x000878d0) cam4_indicators_pane_g2_ParamLimits

0xf916,	// (0x0008c893) cam4_indicators_pane_g_ParamLimits

0xa971,	// (0x000878ee) cam4_indicators_pane_t1_ParamLimits

0xaa19,	// (0x00087996) bg_tb_trans_pane_cp07_ParamLimits

0xaa31,	// (0x000879ae) vid4_indicators_pane_g1_ParamLimits

0xaa42,	// (0x000879bf) vid4_indicators_pane_g2_ParamLimits

0xaa53,	// (0x000879d0) vid4_indicators_pane_g3_ParamLimits

0xaa64,	// (0x000879e1) vid4_indicators_pane_g4_ParamLimits

0xf928,	// (0x0008c8a5) vid4_indicators_pane_g_ParamLimits

0xaa80,	// (0x000879fd) vid4_indicators_pane_t1_ParamLimits

0xba2f,	// (0x000889ac) vid4_progress_pane_g1_ParamLimits

0xba3f,	// (0x000889bc) vid4_progress_pane_g2_ParamLimits

0xe86c,	// (0x0008b7e9) vid4_progress_pane_g3_ParamLimits

0xba4f,	// (0x000889cc) vid4_progress_pane_g4_ParamLimits

0xfad9,	// (0x0008ca56) vid4_progress_pane_g_ParamLimits

0xba6d,	// (0x000889ea) vid4_progress_pane_t1_ParamLimits

0xba82,	// (0x000889ff) vid4_progress_pane_t2_ParamLimits

0xba98,	// (0x00088a15) vid4_progress_pane_t3_ParamLimits

0xfae4,	// (0x0008ca61) vid4_progress_pane_t_ParamLimits

0xbaad,	// (0x00088a2a) wait_bar_pane_cp07_ParamLimits

0xbf89,	// (0x00088f06) main_cam6_set_pane_g2_ParamLimits

0xbf89,	// (0x00088f06) main_cam6_set_pane_g2

0xbf95,	// (0x00088f12) main_cset6_listscroll_pane_ParamLimits

0xbf95,	// (0x00088f12) main_cset6_listscroll_pane

0xbfc0,	// (0x00088f3d) main_cset6_slider_pane_ParamLimits

0xbfc0,	// (0x00088f3d) main_cset6_slider_pane

0xbfcc,	// (0x00088f49) main_cset6_text2_pane_ParamLimits

0xbfcc,	// (0x00088f49) main_cset6_text2_pane

0x2e76,	// (0x0007fdf3) main_cset6_text_pane

0x2e7e,	// (0x0007fdfb) main_cset_list_pane_copy1_ParamLimits

0x2e7e,	// (0x0007fdfb) main_cset_list_pane_copy1

0x2e8e,	// (0x0007fe0b) scroll_pane_cp028_copy1

0xbfdf,	// (0x00088f5c) cset_list_set_pane_copy1

0xbff2,	// (0x00088f6f) aid_position_infowindow_above_copy1

0xbffa,	// (0x00088f77) aid_position_infowindow_below_copy1

0xc002,	// (0x00088f7f) cset_list_set_pane_g1_copy1

0x283f,	// (0x0007f7bc) cset_list_set_pane_g3_copy1_ParamLimits

0x283f,	// (0x0007f7bc) cset_list_set_pane_g3_copy1

0x284e,	// (0x0007f7cb) cset_list_set_pane_t1_copy1_ParamLimits

0x284e,	// (0x0007f7cb) cset_list_set_pane_t1_copy1

0xf0d2,	// (0x0008c04f) list_highlight_pane_cp021_copy1_ParamLimits

0xf0d2,	// (0x0008c04f) list_highlight_pane_cp021_copy1

0x2e97,	// (0x0007fe14) cset6_slider_pane_ParamLimits

0x2e97,	// (0x0007fe14) cset6_slider_pane

0x2ec3,	// (0x0007fe40) main_cset6_slider_pane_g1_ParamLimits

0x2ec3,	// (0x0007fe40) main_cset6_slider_pane_g1

0xc00a,	// (0x00088f87) main_cset6_slider_pane_g2_ParamLimits

0xc00a,	// (0x00088f87) main_cset6_slider_pane_g2

0x2eeb,	// (0x0007fe68) main_cset6_slider_pane_g3_ParamLimits

0x2eeb,	// (0x0007fe68) main_cset6_slider_pane_g3

0xc032,	// (0x00088faf) main_cset6_slider_pane_g4_ParamLimits

0xc032,	// (0x00088faf) main_cset6_slider_pane_g4

0xc03e,	// (0x00088fbb) main_cset6_slider_pane_g5_ParamLimits

0xc03e,	// (0x00088fbb) main_cset6_slider_pane_g5

0x277b,	// (0x0007f6f8) main_cset6_slider_pane_g7_ParamLimits

0x277b,	// (0x0007f6f8) main_cset6_slider_pane_g7

0x2787,	// (0x0007f704) main_cset6_slider_pane_g8_ParamLimits

0x2787,	// (0x0007f704) main_cset6_slider_pane_g8

0xc04c,	// (0x00088fc9) main_cset6_slider_pane_g9_ParamLimits

0xc04c,	// (0x00088fc9) main_cset6_slider_pane_g9

0xc058,	// (0x00088fd5) main_cset6_slider_pane_g10_ParamLimits

0xc058,	// (0x00088fd5) main_cset6_slider_pane_g10

0xc064,	// (0x00088fe1) main_cset6_slider_pane_g11_ParamLimits

0xc064,	// (0x00088fe1) main_cset6_slider_pane_g11

0xc070,	// (0x00088fed) main_cset6_slider_pane_g12_ParamLimits

0xc070,	// (0x00088fed) main_cset6_slider_pane_g12

0xc07c,	// (0x00088ff9) main_cset6_slider_pane_g13_ParamLimits

0xc07c,	// (0x00088ff9) main_cset6_slider_pane_g13

0xc088,	// (0x00089005) main_cset6_slider_pane_g14_ParamLimits

0xc088,	// (0x00089005) main_cset6_slider_pane_g14

0xc094,	// (0x00089011) main_cset6_slider_pane_g15_ParamLimits

0xc094,	// (0x00089011) main_cset6_slider_pane_g15

0xc0ac,	// (0x00089029) main_cset6_slider_pane_g16_ParamLimits

0xc0ac,	// (0x00089029) main_cset6_slider_pane_g16

0xc0ba,	// (0x00089037) main_cset6_slider_pane_g17_ParamLimits

0xc0ba,	// (0x00089037) main_cset6_slider_pane_g17

0x0011,

0xfbb1,	// (0x0008cb2e) main_cset6_slider_pane_g_ParamLimits

0xfbb1,	// (0x0008cb2e) main_cset6_slider_pane_g

0x2ef7,	// (0x0007fe74) main_cset6_slider_pane_t1_ParamLimits

0x2ef7,	// (0x0007fe74) main_cset6_slider_pane_t1

0xc0e0,	// (0x0008905d) main_cset6_slider_pane_t2_ParamLimits

0xc0e0,	// (0x0008905d) main_cset6_slider_pane_t2

0xc10b,	// (0x00089088) main_cset6_slider_pane_t3_ParamLimits

0xc10b,	// (0x00089088) main_cset6_slider_pane_t3

0xc136,	// (0x000890b3) main_cset6_slider_pane_t4_ParamLimits

0xc136,	// (0x000890b3) main_cset6_slider_pane_t4

0xc161,	// (0x000890de) main_cset6_slider_pane_t5_ParamLimits

0xc161,	// (0x000890de) main_cset6_slider_pane_t5

0x2f38,	// (0x0007feb5) main_cset6_slider_pane_t7_ParamLimits

0x2f38,	// (0x0007feb5) main_cset6_slider_pane_t7

0xc18e,	// (0x0008910b) main_cset6_slider_pane_t8_ParamLimits

0xc18e,	// (0x0008910b) main_cset6_slider_pane_t8

0xc1b2,	// (0x0008912f) main_cset6_slider_pane_t9_ParamLimits

0xc1b2,	// (0x0008912f) main_cset6_slider_pane_t9

0xc1d6,	// (0x00089153) main_cset6_slider_pane_t10_ParamLimits

0xc1d6,	// (0x00089153) main_cset6_slider_pane_t10

0xc1fa,	// (0x00089177) main_cset6_slider_pane_t11_ParamLimits

0xc1fa,	// (0x00089177) main_cset6_slider_pane_t11

0x2f6e,	// (0x0007feeb) main_cset6_slider_pane_t14_ParamLimits

0x2f6e,	// (0x0007feeb) main_cset6_slider_pane_t14

0x2fa7,	// (0x0007ff24) main_cset6_slider_pane_t15_ParamLimits

0x2fa7,	// (0x0007ff24) main_cset6_slider_pane_t15

0x000b,

0xfbd6,	// (0x0008cb53) main_cset6_slider_pane_t_ParamLimits

0xfbd6,	// (0x0008cb53) main_cset6_slider_pane_t

0x48f0,	// (0x0008186d) cset_slider_pane_g1_copy1

0x48f9,	// (0x00081876) cset_slider_pane_g2_copy1

0x4902,	// (0x0008187f) cset_slider_pane_g3_copy1

0x0384,	// (0x0007d301) bg_popup_sub_pane_cp011_copy1

0x2903,	// (0x0007f880) main_cset_text_pane_g1_copy1

0x290b,	// (0x0007f888) main_cset_text_pane_t1_copy1

0x2919,	// (0x0007f896) main_cset_text_pane_t2_copy1

0x2927,	// (0x0007f8a4) main_cset_text_pane_t3_copy1

0x2935,	// (0x0007f8b2) main_cset_text_pane_t4_copy1

0x2943,	// (0x0007f8c0) main_cset_text_pane_t5_copy1

0x2951,	// (0x0007f8ce) main_cset_text_pane_t6_copy1

0x295f,	// (0x0007f8dc) main_cset_text_pane_t7_copy1

0xc21e,	// (0x0008919b) main_cset_text2_pane_t1_copy1

0x0384,	// (0x0007d301) main_ncimui_pane

0x8a65,	// (0x000859e2) popup_query_ncimui_window_ParamLimits

0x8a65,	// (0x000859e2) popup_query_ncimui_window

0x44bb,	// (0x00081438) field_cale_ev2_pane_g4_ParamLimits

0x44bb,	// (0x00081438) field_cale_ev2_pane_g4

0xa2bd,	// (0x0008723a) cell_video_dialer_keypad_pane_g2_ParamLimits

0xa2bd,	// (0x0008723a) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8b4,	// (0x0008c831) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8b4,	// (0x0008c831) cell_video_dialer_keypad_pane_g

0xa2d5,	// (0x00087252) cell_video_dialer_keypad_pane_t1

0x0384,	// (0x0007d301) bg_popup_window_pane_cp012

0xea46,	// (0x0008b9c3) heading_pane_cp06

0x30cf,	// (0x0008004c) ncim_query_content_pane

0x0384,	// (0x0007d301) bg_popup_heading_pane_cp01

0x30d7,	// (0x00080054) ncim_heading_pane_t1

0x30e5,	// (0x00080062) ncim_indicator_popup_pane

0x30f7,	// (0x00080074) ncim_query_button_pane

0x310b,	// (0x00080088) ncim_query_content_pane_t1

0x311d,	// (0x0008009a) ncim_query_content_pane_t2

0x0005,

0xfc15,	// (0x0008cb92) ncim_query_content_pane_t

0x3157,	// (0x000800d4) ncim_query_list_pane

0x3169,	// (0x000800e6) ncim_query_popup_pane

0x30e5,	// (0x00080062) ncim_indicator_popup_pane_ParamLimits

0xc340,	// (0x000892bd) ncim_query_content_pane_g1_ParamLimits

0xc340,	// (0x000892bd) ncim_query_content_pane_g1

0x310b,	// (0x00080088) ncim_query_content_pane_t1_ParamLimits

0x311d,	// (0x0008009a) ncim_query_content_pane_t2_ParamLimits

0xc34c,	// (0x000892c9) ncim_query_content_pane_t3_ParamLimits

0xc34c,	// (0x000892c9) ncim_query_content_pane_t3

0xc369,	// (0x000892e6) ncim_query_content_pane_t4_ParamLimits

0xc369,	// (0x000892e6) ncim_query_content_pane_t4

0xc386,	// (0x00089303) ncim_query_content_pane_t5_ParamLimits

0xc386,	// (0x00089303) ncim_query_content_pane_t5

0x312f,	// (0x000800ac) ncim_query_content_pane_t6_ParamLimits

0x312f,	// (0x000800ac) ncim_query_content_pane_t6

0xfc15,	// (0x0008cb92) ncim_query_content_pane_t_ParamLimits

0x3157,	// (0x000800d4) ncim_query_list_pane_ParamLimits

0x3169,	// (0x000800e6) ncim_query_popup_pane_ParamLimits

0x317d,	// (0x000800fa) wait_bar_pane_cp04

0x0384,	// (0x0007d301) input_focus_pane_cp011

0x3185,	// (0x00080102) ncim_query_popup_pane_t1

0x3193,	// (0x00080110) ncim_list_query_list_pane_ParamLimits

0x3193,	// (0x00080110) ncim_list_query_list_pane

0x0384,	// (0x0007d301) bg_button_pane_cp027

0x31a0,	// (0x0008011d) ncim_query_button_pane_g1

0x0384,	// (0x0007d301) list_highlight_pane_cp012

0x31aa,	// (0x00080127) ncim_list_query_list_pane_g1

0x31b2,	// (0x0008012f) ncim_list_query_list_pane_t1

0xa962,	// (0x000878df) cam4_indicators_pane_g3_ParamLimits

0xa962,	// (0x000878df) cam4_indicators_pane_g3

0xaa70,	// (0x000879ed) vid4_indicators_pane_g5_ParamLimits

0xaa70,	// (0x000879ed) vid4_indicators_pane_g5

0xba5e,	// (0x000889db) vid4_progress_pane_g5_ParamLimits

0xba5e,	// (0x000889db) vid4_progress_pane_g5

0xc259,	// (0x000891d6) main_ncimui_pane_g1

0xc2af,	// (0x0008922c) ncimui_group_query_pane_ParamLimits

0xc2af,	// (0x0008922c) ncimui_group_query_pane

0xc2eb,	// (0x00089268) ncimui_list_pane_ParamLimits

0xc2eb,	// (0x00089268) ncimui_list_pane

0xc30c,	// (0x00089289) ncimui_text_pane_ParamLimits

0xc30c,	// (0x00089289) ncimui_text_pane

0xc3a3,	// (0x00089320) ncimui_text_pane_t1_ParamLimits

0xc3a3,	// (0x00089320) ncimui_text_pane_t1

0x31c0,	// (0x0008013d) ncimui_list_single_graphic_pane_ParamLimits

0x31c0,	// (0x0008013d) ncimui_list_single_graphic_pane

0xc3c2,	// (0x0008933f) ncimui_query_pane_ParamLimits

0xc3c2,	// (0x0008933f) ncimui_query_pane

0x0384,	// (0x0007d301) list_highlight_pane_cp013

0x31d0,	// (0x0008014d) ncim_list_query_list_pane_t1_copy1

0x31aa,	// (0x00080127) ncim_list_single_graphic_pane_g1

0x31de,	// (0x0008015b) ncim_query_button_pane_cp01

0x31ea,	// (0x00080167) ncim_query_entry_pane_ParamLimits

0x31ea,	// (0x00080167) ncim_query_entry_pane

0x31fd,	// (0x0008017a) ncimui_query_pane_g1

0x3209,	// (0x00080186) ncimui_query_pane_t1_ParamLimits

0x3209,	// (0x00080186) ncimui_query_pane_t1

0xf0d2,	// (0x0008c04f) input_focus_pane_cp012

0x3222,	// (0x0008019f) ncim_query_entry_pane_t1

0xe1d3,	// (0x0008b150) main_im_pane_ParamLimits

0xf0d2,	// (0x0008c04f) main_mobtv_pane_ParamLimits

0xf0d2,	// (0x0008c04f) main_mobtv_pane

0xc0c8,	// (0x00089045) main_cset6_slider_pane_g18_ParamLimits

0xc0c8,	// (0x00089045) main_cset6_slider_pane_g18

0xc0d4,	// (0x00089051) main_cset6_slider_pane_g19_ParamLimits

0xc0d4,	// (0x00089051) main_cset6_slider_pane_g19

0x25e0,	// (0x0007f55d) bg_main_mobtv_pane_ParamLimits

0x25e0,	// (0x0007f55d) bg_main_mobtv_pane

0xc3d5,	// (0x00089352) main_mobtv_info_pane

0xc3e0,	// (0x0008935d) main_mobtv_loading_pane_ParamLimits

0xc3e0,	// (0x0008935d) main_mobtv_loading_pane

0x3242,	// (0x000801bf) main_mobtv_pg_channel_list_pane

0x324c,	// (0x000801c9) main_mobtv_pg_hdr_pane

0xc3ed,	// (0x0008936a) main_mobtv_programe_curr_pane_ParamLimits

0xc3ed,	// (0x0008936a) main_mobtv_programe_curr_pane

0xc3fa,	// (0x00089377) main_mobtv_programe_next_pane_ParamLimits

0xc3fa,	// (0x00089377) main_mobtv_programe_next_pane

0x3255,	// (0x000801d2) popup_mobtv_noti_window

0x1b5c,	// (0x0007ead9) main_tv_pg_hdr_pane_g1

0x325d,	// (0x000801da) main_tv_pg_hdr_pane_g2

0x3265,	// (0x000801e2) main_tv_pg_hdr_pane_g3

0x326d,	// (0x000801ea) main_tv_pg_hdr_pane_g4

0x3275,	// (0x000801f2) main_tv_pg_hdr_pane_g5

0x327f,	// (0x000801fc) main_tv_pg_hdr_pane_g6

0x3289,	// (0x00080206) main_tv_pg_hdr_pane_g7

0x3293,	// (0x00080210) main_tv_pg_hdr_pane_g8

0x329d,	// (0x0008021a) main_tv_pg_hdr_pane_g9

0x32a7,	// (0x00080224) main_tv_pg_hdr_pane_g10

0x32b1,	// (0x0008022e) main_tv_pg_hdr_pane_g11

0x000a,

0xfc22,	// (0x0008cb9f) main_tv_pg_hdr_pane_g

0x32bb,	// (0x00080238) main_tv_pg_hdr_pane_t1

0x32c9,	// (0x00080246) main_tv_pg_hdr_pane_t2

0x32d7,	// (0x00080254) main_tv_pg_hdr_pane_t3

0x32e7,	// (0x00080264) main_tv_pg_hdr_pane_t4

0x32f7,	// (0x00080274) main_tv_pg_hdr_pane_t5

0x0004,

0xfc39,	// (0x0008cbb6) main_tv_pg_hdr_pane_t

0x3307,	// (0x00080284) single_mobtv_pg_channel_pane_ParamLimits

0x3307,	// (0x00080284) single_mobtv_pg_channel_pane

0x3319,	// (0x00080296) single_mobtv_pg_channel_table_pane

0x3322,	// (0x0008029f) single_mobtv_pg_channel_thumb_pane

0x332b,	// (0x000802a8) single_tv_pg_channel_pane_g1

0x3334,	// (0x000802b1) single_tv_pg_channel_pane_g2

0x0001,

0xfc44,	// (0x0008cbc1) single_tv_pg_channel_pane_g

0x1dc8,	// (0x0007ed45) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x1dc8,	// (0x0007ed45) bg_single_mobtv_pg_channel_thumb_pane

0x333d,	// (0x000802ba) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x333d,	// (0x000802ba) single_mobtv_pg_channel_thumb_pane_g1

0x334b,	// (0x000802c8) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x334b,	// (0x000802c8) single_mobtv_pg_channel_thumb_pane_g2

0x3357,	// (0x000802d4) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x3357,	// (0x000802d4) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc49,	// (0x0008cbc6) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc49,	// (0x0008cbc6) single_mobtv_pg_channel_thumb_pane_g

0x3363,	// (0x000802e0) single_mobtv_pg_channel_thumb_pane_t1

0x3371,	// (0x000802ee) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc50,	// (0x0008cbcd) single_mobtv_pg_channel_thumb_pane_t

0x1b5c,	// (0x0007ead9) bg_single_mobtv_pg_channel_table_pane_g1

0x1b5c,	// (0x0007ead9) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf700,	// (0x0008c67d) bg_single_mobtv_pg_channel_table_pane_g

0x337f,	// (0x000802fc) single_mobtv_pg_channel_table_pane_t1

0x338d,	// (0x0008030a) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc55,	// (0x0008cbd2) single_mobtv_pg_channel_table_pane_t

0xc40f,	// (0x0008938c) main_mobtv_info_pane_g1_ParamLimits

0xc40f,	// (0x0008938c) main_mobtv_info_pane_g1

0xc42b,	// (0x000893a8) main_mobtv_info_pane_t1_ParamLimits

0xc42b,	// (0x000893a8) main_mobtv_info_pane_t1

0xc4a3,	// (0x00089420) main_mobtv_info_pane_t2_ParamLimits

0xc4a3,	// (0x00089420) main_mobtv_info_pane_t2

0x0002,

0xfc5f,	// (0x0008cbdc) main_mobtv_info_pane_t_ParamLimits

0xfc5f,	// (0x0008cbdc) main_mobtv_info_pane_t

0xc532,	// (0x000894af) wait_bar_pane_cp05

0xc544,	// (0x000894c1) main_mobtv_loading_pane_g1_ParamLimits

0xc544,	// (0x000894c1) main_mobtv_loading_pane_g1

0xc552,	// (0x000894cf) main_mobtv_loading_pane_g2_ParamLimits

0xc552,	// (0x000894cf) main_mobtv_loading_pane_g2

0xc55e,	// (0x000894db) main_mobtv_loading_pane_g3_ParamLimits

0xc55e,	// (0x000894db) main_mobtv_loading_pane_g3

0x0002,

0xfc66,	// (0x0008cbe3) main_mobtv_loading_pane_g_ParamLimits

0xfc66,	// (0x0008cbe3) main_mobtv_loading_pane_g

0x339b,	// (0x00080318) main_mobtv_loading_pane_t1_ParamLimits

0x339b,	// (0x00080318) main_mobtv_loading_pane_t1

0x33b3,	// (0x00080330) main_mobtv_loading_pane_t2_ParamLimits

0x33b3,	// (0x00080330) main_mobtv_loading_pane_t2

0x0001,

0xfc6d,	// (0x0008cbea) main_mobtv_loading_pane_t_ParamLimits

0xfc6d,	// (0x0008cbea) main_mobtv_loading_pane_t

0xc56c,	// (0x000894e9) wait_bar_pane_cp06_ParamLimits

0xc56c,	// (0x000894e9) wait_bar_pane_cp06

0x33d7,	// (0x00080354) main_mobtv_programe_curr_pane_t1

0x33e5,	// (0x00080362) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc72,	// (0x0008cbef) main_mobtv_programe_curr_pane_t

0x33f3,	// (0x00080370) main_mobtv_programe_next_pane_t1

0x3401,	// (0x0008037e) main_mobtv_programe_next_pane_t2

0x340f,	// (0x0008038c) main_mobtv_programe_next_pane_t3

0x0002,

0xfc77,	// (0x0008cbf4) main_mobtv_programe_next_pane_t

0x0384,	// (0x0007d301) bg_popup_mobtv_noti_window_pane

0x341d,	// (0x0008039a) popup_mobtv_noti_window_g1

0x3425,	// (0x000803a2) popup_mobtv_noti_window_t1

0x3433,	// (0x000803b0) popup_mobtv_noti_window_t2

0x0001,

0xfc7e,	// (0x0008cbfb) popup_mobtv_noti_window_t

0x1b5c,	// (0x0007ead9) bg_popup_mobtv_noti_window_pane_g1

0x0384,	// (0x0007d301) sc_clock_pane

0x0384,	// (0x0007d301) main_fs_bigclock_pane

0xbc45,	// (0x00088bc2) blid2_tripm_pane_t4_ParamLimits

0xbc45,	// (0x00088bc2) blid2_tripm_pane_t4

0xc578,	// (0x000894f5) sc_clock_pane_g1_ParamLimits

0xc578,	// (0x000894f5) sc_clock_pane_g1

0xc586,	// (0x00089503) sc_clock_pane_t1_ParamLimits

0xc586,	// (0x00089503) sc_clock_pane_t1

0xc599,	// (0x00089516) sc_clock_pane_t2_ParamLimits

0xc599,	// (0x00089516) sc_clock_pane_t2

0xc5ab,	// (0x00089528) sc_clock_pane_t3_ParamLimits

0xc5ab,	// (0x00089528) sc_clock_pane_t3

0x0004,

0xfc83,	// (0x0008cc00) sc_clock_pane_t_ParamLimits

0xfc83,	// (0x0008cc00) sc_clock_pane_t

0xd274,	// (0x0008a1f1) main_fs_bigclock_indicator_pane_ParamLimits

0xd274,	// (0x0008a1f1) main_fs_bigclock_indicator_pane

0xc62f,	// (0x000895ac) main_fs_bigclock_pane_g1_ParamLimits

0xc62f,	// (0x000895ac) main_fs_bigclock_pane_g1

0xd280,	// (0x0008a1fd) main_fs_bigclock_pane_t1_ParamLimits

0xd280,	// (0x0008a1fd) main_fs_bigclock_pane_t1

0xd292,	// (0x0008a20f) main_fs_bigclock_pane_t2_ParamLimits

0xd292,	// (0x0008a20f) main_fs_bigclock_pane_t2

0xd2a6,	// (0x0008a223) main_fs_bigclock_pane_t3_ParamLimits

0xd2a6,	// (0x0008a223) main_fs_bigclock_pane_t3

0x0002,

0xfe82,	// (0x0008cdff) main_fs_bigclock_pane_t_ParamLimits

0xfe82,	// (0x0008cdff) main_fs_bigclock_pane_t

0x4018,	// (0x00080f95) main_fs_bigclock_indicator_pane_g1

0x30ff,	// (0x0008007c) ncim_query_content_pane_g2_ParamLimits

0x30ff,	// (0x0008007c) ncim_query_content_pane_g2

0x0001,

0xfc10,	// (0x0008cb8d) ncim_query_content_pane_g_ParamLimits

0xfc10,	// (0x0008cb8d) ncim_query_content_pane_g

0xc5bf,	// (0x0008953c) sc_clock_pane_t4_ParamLimits

0xc5bf,	// (0x0008953c) sc_clock_pane_t4

0xf0d2,	// (0x0008c04f) main_radioblah_pane

0x2531,	// (0x0007f4ae) cell_call4_button_pane_t1_copy1_ParamLimits

0x2531,	// (0x0007f4ae) cell_call4_button_pane_t1_copy1

0xc261,	// (0x000891de) main_ncimui_pane_t1_ParamLimits

0xc261,	// (0x000891de) main_ncimui_pane_t1

0xc27b,	// (0x000891f8) main_ncimui_pane_t2_ParamLimits

0xc27b,	// (0x000891f8) main_ncimui_pane_t2

0x0002,

0xfc09,	// (0x0008cb86) main_ncimui_pane_t_ParamLimits

0xfc09,	// (0x0008cb86) main_ncimui_pane_t

0x3561,	// (0x000804de) main_radioblah_anim_pane_ParamLimits

0x3561,	// (0x000804de) main_radioblah_anim_pane

0x3572,	// (0x000804ef) main_radioblah_info_pane_ParamLimits

0x3572,	// (0x000804ef) main_radioblah_info_pane

0x3586,	// (0x00080503) main_radioblah_pane_t1_ParamLimits

0x3586,	// (0x00080503) main_radioblah_pane_t1

0x35a2,	// (0x0008051f) main_radioblah_pane_t2_ParamLimits

0x35a2,	// (0x0008051f) main_radioblah_pane_t2

0x0003,

0xfca4,	// (0x0008cc21) main_radioblah_pane_t_ParamLimits

0xfca4,	// (0x0008cc21) main_radioblah_pane_t

0xc681,	// (0x000895fe) main_radioblah_rocker_ctrl_pane_ParamLimits

0xc681,	// (0x000895fe) main_radioblah_rocker_ctrl_pane

0x35ea,	// (0x00080567) main_radioblah_info_pane_t1_ParamLimits

0x35ea,	// (0x00080567) main_radioblah_info_pane_t1

0xc6c6,	// (0x00089643) main_radioblah_info_pane_t2_ParamLimits

0xc6c6,	// (0x00089643) main_radioblah_info_pane_t2

0x0003,

0xfcad,	// (0x0008cc2a) main_radioblah_info_pane_t_ParamLimits

0xfcad,	// (0x0008cc2a) main_radioblah_info_pane_t

0x1b5c,	// (0x0007ead9) main_radioblah_rocker_ctrl_pane_g1

0xc776,	// (0x000896f3) main_radioblah_rocker_ctrl_pane_g2

0xc77e,	// (0x000896fb) main_radioblah_rocker_ctrl_pane_g3

0xc786,	// (0x00089703) main_radioblah_rocker_ctrl_pane_g4

0xc78e,	// (0x0008970b) main_radioblah_rocker_ctrl_pane_g5

0xc796,	// (0x00089713) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcb6,	// (0x0008cc33) main_radioblah_rocker_ctrl_pane_g

0xc21e,	// (0x0008919b) main_cset_text2_pane_t1_copy1_ParamLimits

0xa882,	// (0x000877ff) cam4_image_uncrop_qvga_pane

0xa9d7,	// (0x00087954) vid4_image_uncrop_qcif_pane

0xbdd3,	// (0x00088d50) cam6_image_uncrop_qvga_pane_ParamLimits

0xbdd3,	// (0x00088d50) cam6_image_uncrop_qvga_pane

0x2d59,	// (0x0007fcd6) vid6_image_uncrop_qcif_pane_ParamLimits

0x2d59,	// (0x0007fcd6) vid6_image_uncrop_qcif_pane

0x0384,	// (0x0007d301) bg_popup_preview_window_pane_cp03

0x30b1,	// (0x0008002e) list_cset_text2_pane

0x30b9,	// (0x00080036) main_cset6_text2_pane_g1

0x30c1,	// (0x0008003e) main_cset6_text2_pane_t1

0xc79e,	// (0x0008971b) list_cset_text2_pane_t1_ParamLimits

0xc79e,	// (0x0008971b) list_cset_text2_pane_t1

0xf0d2,	// (0x0008c04f) main_radioblah_pane_ParamLimits

0xc51e,	// (0x0008949b) main_mobtv_info_pane_t3_ParamLimits

0xc51e,	// (0x0008949b) main_mobtv_info_pane_t3

0xc66f,	// (0x000895ec) main_radioblah_pane_g1

0xc69a,	// (0x00089617) main_radioblah_info_pane_g1

0xc71b,	// (0x00089698) main_radioblah_info_pane_t3_ParamLimits

0xc71b,	// (0x00089698) main_radioblah_info_pane_t3

0x76e0,	// (0x0008465d) highlight_cell_cale_month_pane_ParamLimits

0x76e0,	// (0x0008465d) highlight_cell_cale_month_pane

0x0384,	// (0x0007d301) main_phob_fisheye_pane

0x1ed6,	// (0x0007ee53) scroll_pane_cp0031_ParamLimits

0x1ed6,	// (0x0007ee53) scroll_pane_cp0031

0x2e67,	// (0x0007fde4) wait_bar_pane_cp08_ParamLimits

0xbfdf,	// (0x00088f5c) cset_list_set_pane_copy1_ParamLimits

0x3624,	// (0x000805a1) highlight_cell_cale_month_pane_g1

0xc7bb,	// (0x00089738) highlight_cell_cale_month_pane_t1

0x2bd3,	// (0x0007fb50) list_gen_pane_cp01

0x2766,	// (0x0007f6e3) scroll_pane_01

0xc7c9,	// (0x00089746) list_single_double_fisheye_pane

0xc7d2,	// (0x0008974f) list_double_fisheye_pane_g1_ParamLimits

0xc7d2,	// (0x0008974f) list_double_fisheye_pane_g1

0xc7de,	// (0x0008975b) list_double_fisheye_pane_g2_ParamLimits

0xc7de,	// (0x0008975b) list_double_fisheye_pane_g2

0xc7f2,	// (0x0008976f) list_double_fisheye_pane_g3_ParamLimits

0xc7f2,	// (0x0008976f) list_double_fisheye_pane_g3

0x0004,

0xfcc3,	// (0x0008cc40) list_double_fisheye_pane_g_ParamLimits

0xfcc3,	// (0x0008cc40) list_double_fisheye_pane_g

0xc81b,	// (0x00089798) list_double_fisheye_pane_t1_ParamLimits

0xc81b,	// (0x00089798) list_double_fisheye_pane_t1

0xc836,	// (0x000897b3) list_double_fisheye_pane_t2_ParamLimits

0xc836,	// (0x000897b3) list_double_fisheye_pane_t2

0x0001,

0xfcce,	// (0x0008cc4b) list_double_fisheye_pane_t_ParamLimits

0xfcce,	// (0x0008cc4b) list_double_fisheye_pane_t

0x0384,	// (0x0007d301) main_call5_pane

0xc5e5,	// (0x00089562) sc_swipe_pane_ParamLimits

0xc5e5,	// (0x00089562) sc_swipe_pane

0xc864,	// (0x000897e1) call5_image_pane_ParamLimits

0xc864,	// (0x000897e1) call5_image_pane

0xc874,	// (0x000897f1) call5_swipe_1_pane_ParamLimits

0xc874,	// (0x000897f1) call5_swipe_1_pane

0xc880,	// (0x000897fd) call5_swipe_2_pane_ParamLimits

0xc880,	// (0x000897fd) call5_swipe_2_pane

0xc89a,	// (0x00089817) popup_call5_audio_first_window_ParamLimits

0xc89a,	// (0x00089817) popup_call5_audio_first_window

0x1dc8,	// (0x0007ed45) call5_swipe_1_pane_g1_ParamLimits

0x1dc8,	// (0x0007ed45) call5_swipe_1_pane_g1

0x362c,	// (0x000805a9) call5_swipe_1_pane_g2_ParamLimits

0x362c,	// (0x000805a9) call5_swipe_1_pane_g2

0x0001,

0xfcd3,	// (0x0008cc50) call5_swipe_1_pane_g_ParamLimits

0xfcd3,	// (0x0008cc50) call5_swipe_1_pane_g

0x3638,	// (0x000805b5) call5_swipe_1_pane_t1_ParamLimits

0x3638,	// (0x000805b5) call5_swipe_1_pane_t1

0x1dc8,	// (0x0007ed45) call5_swipe_2_pane_g1_ParamLimits

0x1dc8,	// (0x0007ed45) call5_swipe_2_pane_g1

0x364d,	// (0x000805ca) call5_swipe_2_pane_g2_ParamLimits

0x364d,	// (0x000805ca) call5_swipe_2_pane_g2

0x0001,

0xfcd8,	// (0x0008cc55) call5_swipe_2_pane_g_ParamLimits

0xfcd8,	// (0x0008cc55) call5_swipe_2_pane_g

0x3659,	// (0x000805d6) call5_swipe_2_pane_t1_ParamLimits

0x3659,	// (0x000805d6) call5_swipe_2_pane_t1

0x366e,	// (0x000805eb) sc_swipe_pane_g1_ParamLimits

0x366e,	// (0x000805eb) sc_swipe_pane_g1

0x367b,	// (0x000805f8) sc_swipe_pane_g2_ParamLimits

0x367b,	// (0x000805f8) sc_swipe_pane_g2

0x0001,

0xfcdd,	// (0x0008cc5a) sc_swipe_pane_g_ParamLimits

0xfcdd,	// (0x0008cc5a) sc_swipe_pane_g

0x3687,	// (0x00080604) sc_swipe_pane_t1_ParamLimits

0x3687,	// (0x00080604) sc_swipe_pane_t1

0x0384,	// (0x0007d301) main_cmail_launcher_pane

0xc8a8,	// (0x00089825) aid_size_cell_cmail_l_ParamLimits

0xc8a8,	// (0x00089825) aid_size_cell_cmail_l

0xc8b8,	// (0x00089835) grid_cmail_l_pane_ParamLimits

0xc8b8,	// (0x00089835) grid_cmail_l_pane

0xc8c8,	// (0x00089845) cell_cmail_l_pane_ParamLimits

0xc8c8,	// (0x00089845) cell_cmail_l_pane

0xc8dc,	// (0x00089859) cell_cmail_l_pane_g1_ParamLimits

0xc8dc,	// (0x00089859) cell_cmail_l_pane_g1

0xc8e8,	// (0x00089865) cell_cmail_l_pane_t1_ParamLimits

0xc8e8,	// (0x00089865) cell_cmail_l_pane_t1

0x369c,	// (0x00080619) cell_cmail_l_pane_t2_ParamLimits

0x369c,	// (0x00080619) cell_cmail_l_pane_t2

0x0001,

0xfce2,	// (0x0008cc5f) cell_cmail_l_pane_t_ParamLimits

0xfce2,	// (0x0008cc5f) cell_cmail_l_pane_t

0xf0d2,	// (0x0008c04f) grid_highlight_pane_cp018_ParamLimits

0xf0d2,	// (0x0008c04f) grid_highlight_pane_cp018

0x5a5d,	// (0x000829da) main2_pane_ParamLimits

0x5a5d,	// (0x000829da) main2_pane

0xe26c,	// (0x0008b1e9) popup_sp_fs_action_menu_bg_pane_g1

0xe274,	// (0x0008b1f1) popup_sp_fs_action_menu_bg_pane_g2

0xe27c,	// (0x0008b1f9) popup_sp_fs_action_menu_bg_pane_g3

0xe284,	// (0x0008b201) popup_sp_fs_action_menu_bg_pane_g4

0xe28c,	// (0x0008b209) popup_sp_fs_action_menu_bg_pane_g5

0xe294,	// (0x0008b211) popup_sp_fs_action_menu_bg_pane_g6

0xe29c,	// (0x0008b219) popup_sp_fs_action_menu_bg_pane_g7

0xe2a4,	// (0x0008b221) popup_sp_fs_action_menu_bg_pane_g8

0xe2ac,	// (0x0008b229) popup_sp_fs_action_menu_bg_pane_g9

0xe2b4,	// (0x0008b231) popup_sp_fs_action_menu_bg_pane_g10

0xe2b4,	// (0x0008b231) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1ac,	// (0x0008c129) popup_sp_fs_action_menu_bg_pane_g

0x04d6,	// (0x0007d453) list_medium_line_x2_t3_g3_g1_ParamLimits

0x04d6,	// (0x0007d453) list_medium_line_x2_t3_g3_g1

0x04e2,	// (0x0007d45f) list_medium_line_x2_t3_g3_g2_ParamLimits

0x04e2,	// (0x0007d45f) list_medium_line_x2_t3_g3_g2

0x04ee,	// (0x0007d46b) list_medium_line_x2_t3_g3_g3_ParamLimits

0x04ee,	// (0x0007d46b) list_medium_line_x2_t3_g3_g3

0x0002,

0xf25c,	// (0x0008c1d9) list_medium_line_x2_t3_g3_g_ParamLimits

0xf25c,	// (0x0008c1d9) list_medium_line_x2_t3_g3_g

0x04fa,	// (0x0007d477) list_medium_line_x2_t3_g3_t1_ParamLimits

0x04fa,	// (0x0007d477) list_medium_line_x2_t3_g3_t1

0x6867,	// (0x000837e4) list_medium_line_x2_t3_g3_t2_ParamLimits

0x6867,	// (0x000837e4) list_medium_line_x2_t3_g3_t2

0x050f,	// (0x0007d48c) list_medium_line_x2_t3_g3_t3_ParamLimits

0x050f,	// (0x0007d48c) list_medium_line_x2_t3_g3_t3

0x0002,

0xf263,	// (0x0008c1e0) list_medium_line_x2_t3_g3_t_ParamLimits

0xf263,	// (0x0008c1e0) list_medium_line_x2_t3_g3_t

0x04d6,	// (0x0007d453) list_medium_line_x2_t3_g2_g1_ParamLimits

0x04d6,	// (0x0007d453) list_medium_line_x2_t3_g2_g1

0x04ee,	// (0x0007d46b) list_medium_line_x2_t3_g2_g2_ParamLimits

0x04ee,	// (0x0007d46b) list_medium_line_x2_t3_g2_g2

0x0001,

0xf26a,	// (0x0008c1e7) list_medium_line_x2_t3_g2_g_ParamLimits

0xf26a,	// (0x0008c1e7) list_medium_line_x2_t3_g2_g

0x0524,	// (0x0007d4a1) list_medium_line_x2_t3_g2_t1_ParamLimits

0x0524,	// (0x0007d4a1) list_medium_line_x2_t3_g2_t1

0x053a,	// (0x0007d4b7) list_medium_line_x2_t3_g2_t2_ParamLimits

0x053a,	// (0x0007d4b7) list_medium_line_x2_t3_g2_t2

0x054c,	// (0x0007d4c9) list_medium_line_x2_t3_g2_t3_ParamLimits

0x054c,	// (0x0007d4c9) list_medium_line_x2_t3_g2_t3

0x0002,

0xf26f,	// (0x0008c1ec) list_medium_line_x2_t3_g2_t_ParamLimits

0xf26f,	// (0x0008c1ec) list_medium_line_x2_t3_g2_t

0x04d6,	// (0x0007d453) list_medium_line_x2_t4_g4_g1_ParamLimits

0x04d6,	// (0x0007d453) list_medium_line_x2_t4_g4_g1

0x0569,	// (0x0007d4e6) list_medium_line_x2_t4_g4_g2_ParamLimits

0x0569,	// (0x0007d4e6) list_medium_line_x2_t4_g4_g2

0x04e2,	// (0x0007d45f) list_medium_line_x2_t4_g4_g3_ParamLimits

0x04e2,	// (0x0007d45f) list_medium_line_x2_t4_g4_g3

0x0575,	// (0x0007d4f2) list_medium_line_x2_t4_g4_g4_ParamLimits

0x0575,	// (0x0007d4f2) list_medium_line_x2_t4_g4_g4

0x0003,

0xf276,	// (0x0008c1f3) list_medium_line_x2_t4_g4_g_ParamLimits

0xf276,	// (0x0008c1f3) list_medium_line_x2_t4_g4_g

0x6879,	// (0x000837f6) list_medium_line_x2_t4_g4_t1_ParamLimits

0x6879,	// (0x000837f6) list_medium_line_x2_t4_g4_t1

0x6893,	// (0x00083810) list_medium_line_x2_t4_g4_t2_ParamLimits

0x6893,	// (0x00083810) list_medium_line_x2_t4_g4_t2

0x68a9,	// (0x00083826) list_medium_line_x2_t4_g4_t3_ParamLimits

0x68a9,	// (0x00083826) list_medium_line_x2_t4_g4_t3

0x0581,	// (0x0007d4fe) list_medium_line_x2_t4_g4_t4_ParamLimits

0x0581,	// (0x0007d4fe) list_medium_line_x2_t4_g4_t4

0x0003,

0xf27f,	// (0x0008c1fc) list_medium_line_x2_t4_g4_t_ParamLimits

0xf27f,	// (0x0008c1fc) list_medium_line_x2_t4_g4_t

0x04d6,	// (0x0007d453) list_medium_line_x2_t2_g4_g1_ParamLimits

0x04d6,	// (0x0007d453) list_medium_line_x2_t2_g4_g1

0x0569,	// (0x0007d4e6) list_medium_line_x2_t2_g4_g2_ParamLimits

0x0569,	// (0x0007d4e6) list_medium_line_x2_t2_g4_g2

0x04e2,	// (0x0007d45f) list_medium_line_x2_t2_g4_g3_ParamLimits

0x04e2,	// (0x0007d45f) list_medium_line_x2_t2_g4_g3

0x04ee,	// (0x0007d46b) list_medium_line_x2_t2_g4_g4_ParamLimits

0x04ee,	// (0x0007d46b) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2e6,	// (0x0008c263) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2e6,	// (0x0008c263) list_medium_line_x2_t2_g4_g

0x0593,	// (0x0007d510) list_medium_line_x2_t2_g4_t1_ParamLimits

0x0593,	// (0x0007d510) list_medium_line_x2_t2_g4_t1

0x050f,	// (0x0007d48c) list_medium_line_x2_t2_g4_t2_ParamLimits

0x050f,	// (0x0007d48c) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2ef,	// (0x0008c26c) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2ef,	// (0x0008c26c) list_medium_line_x2_t2_g4_t

0x04d6,	// (0x0007d453) list_medium_line_x2_t2_g3_g1_ParamLimits

0x04d6,	// (0x0007d453) list_medium_line_x2_t2_g3_g1

0x04e2,	// (0x0007d45f) list_medium_line_x2_t2_g3_g2_ParamLimits

0x04e2,	// (0x0007d45f) list_medium_line_x2_t2_g3_g2

0x04ee,	// (0x0007d46b) list_medium_line_x2_t2_g3_g3_ParamLimits

0x04ee,	// (0x0007d46b) list_medium_line_x2_t2_g3_g3

0x0002,

0xf25c,	// (0x0008c1d9) list_medium_line_x2_t2_g3_g_ParamLimits

0xf25c,	// (0x0008c1d9) list_medium_line_x2_t2_g3_g

0x05a8,	// (0x0007d525) list_medium_line_x2_t2_g3_t1_ParamLimits

0x05a8,	// (0x0007d525) list_medium_line_x2_t2_g3_t1

0x050f,	// (0x0007d48c) list_medium_line_x2_t2_g3_t2_ParamLimits

0x050f,	// (0x0007d48c) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2f4,	// (0x0008c271) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2f4,	// (0x0008c271) list_medium_line_x2_t2_g3_t

0x7892,	// (0x0008480f) main_sp_fs_list_pane_ParamLimits

0x7892,	// (0x0008480f) main_sp_fs_list_pane

0x789e,	// (0x0008481b) sp_fs_scroll_pane_ParamLimits

0x789e,	// (0x0008481b) sp_fs_scroll_pane

0x78aa,	// (0x00084827) list_medium_line_x2_t3_t1

0x78ba,	// (0x00084837) list_medium_line_x2_t3_t2

0x05eb,	// (0x0007d568) list_medium_line_x2_t3_t3

0x0002,

0xf33f,	// (0x0008c2bc) list_medium_line_x2_t3_t

0x78c8,	// (0x00084845) list_medium_line_x3_t4_t1

0x78d8,	// (0x00084855) list_medium_line_x3_t4_t2

0x05f9,	// (0x0007d576) list_medium_line_x3_t4_t3

0x05eb,	// (0x0007d568) list_medium_line_x3_t4_t4

0x0003,

0xf346,	// (0x0008c2c3) list_medium_line_x3_t4_t

0x78e6,	// (0x00084863) list_medium_line_x4_t5_t1

0x78f6,	// (0x00084873) list_medium_line_x4_t5_t2

0x05f9,	// (0x0007d576) list_medium_line_x4_t5_t3

0x0607,	// (0x0007d584) list_medium_line_x4_t5_t4

0x05eb,	// (0x0007d568) list_medium_line_x4_t5_t5

0x0004,

0xf34f,	// (0x0008c2cc) list_medium_line_x4_t5_t

0x04d6,	// (0x0007d453) list_medium_line_t4_g4_g1_ParamLimits

0x04d6,	// (0x0007d453) list_medium_line_t4_g4_g1

0x0575,	// (0x0007d4f2) list_medium_line_t4_g4_g2_ParamLimits

0x0575,	// (0x0007d4f2) list_medium_line_t4_g4_g2

0x0615,	// (0x0007d592) list_medium_line_t4_g4_g3_ParamLimits

0x0615,	// (0x0007d592) list_medium_line_t4_g4_g3

0x04ee,	// (0x0007d46b) list_medium_line_t4_g4_g4_ParamLimits

0x04ee,	// (0x0007d46b) list_medium_line_t4_g4_g4

0x0003,

0xf35a,	// (0x0008c2d7) list_medium_line_t4_g4_g_ParamLimits

0xf35a,	// (0x0008c2d7) list_medium_line_t4_g4_g

0x0621,	// (0x0007d59e) list_medium_line_t4_g4_t1_ParamLimits

0x0621,	// (0x0007d59e) list_medium_line_t4_g4_t1

0x0636,	// (0x0007d5b3) list_medium_line_t4_g4_t2_ParamLimits

0x0636,	// (0x0007d5b3) list_medium_line_t4_g4_t2

0x064b,	// (0x0007d5c8) list_medium_line_t4_g4_t3_ParamLimits

0x064b,	// (0x0007d5c8) list_medium_line_t4_g4_t3

0x050f,	// (0x0007d48c) list_medium_line_t4_g4_t4_ParamLimits

0x050f,	// (0x0007d48c) list_medium_line_t4_g4_t4

0x0003,

0xf363,	// (0x0008c2e0) list_medium_line_t4_g4_t_ParamLimits

0xf363,	// (0x0008c2e0) list_medium_line_t4_g4_t

0x7a15,	// (0x00084992) chi_dic_find_pane_g1

0x8a34,	// (0x000859b1) main_tport_pane

0x2894,	// (0x0007f811) list_medium_line_plain_t1

0x28aa,	// (0x0007f827) list_medium_line_t2_g2_g1_ParamLimits

0x28aa,	// (0x0007f827) list_medium_line_t2_g2_g1

0x28b6,	// (0x0007f833) list_medium_line_t2_g2_g2_ParamLimits

0x28b6,	// (0x0007f833) list_medium_line_t2_g2_g2

0x0001,

0xfa1f,	// (0x0008c99c) list_medium_line_t2_g2_g_ParamLimits

0xfa1f,	// (0x0008c99c) list_medium_line_t2_g2_g

0xb456,	// (0x000883d3) list_medium_line_t2_g2_t1_ParamLimits

0xb456,	// (0x000883d3) list_medium_line_t2_g2_t1

0xb470,	// (0x000883ed) list_medium_line_t2_g2_t2_ParamLimits

0xb470,	// (0x000883ed) list_medium_line_t2_g2_t2

0x0001,

0xfa24,	// (0x0008c9a1) list_medium_line_t2_g2_t_ParamLimits

0xfa24,	// (0x0008c9a1) list_medium_line_t2_g2_t

0x2bdc,	// (0x0007fb59) aid_sp_fs_list_icon_a_sm

0x48bd,	// (0x0008183a) aid_sp_fs_list_icon_d

0x2be4,	// (0x0007fb61) aid_sp_fs_text_primary

0x2bed,	// (0x0007fb6a) aid_sp_fs_text_secondary

0x2bf6,	// (0x0007fb73) list_medium_line

0x2bf6,	// (0x0007fb73) list_medium_line_g2

0x2bf6,	// (0x0007fb73) list_medium_line_g3

0x2bf6,	// (0x0007fb73) list_medium_line_plain

0x2bf6,	// (0x0007fb73) list_medium_line_plain_t2

0x2bf6,	// (0x0007fb73) list_medium_line_plain_t3

0x2bf6,	// (0x0007fb73) list_medium_line_right_icon

0x2bf6,	// (0x0007fb73) list_medium_line_right_iconx2

0x2bf6,	// (0x0007fb73) list_medium_line_t2

0x2bf6,	// (0x0007fb73) list_medium_line_t2_g2

0x2bf6,	// (0x0007fb73) list_medium_line_t2_g3

0x2bf6,	// (0x0007fb73) list_medium_line_t2_right_icon

0x2bf6,	// (0x0007fb73) list_medium_line_t2_right_iconx2

0x2bf6,	// (0x0007fb73) list_medium_line_t3

0x2bf6,	// (0x0007fb73) list_medium_line_t3_g2

0x2bf6,	// (0x0007fb73) list_medium_line_t3_g3

0x2bf6,	// (0x0007fb73) list_medium_line_t3_right_iconx2

0x2bff,	// (0x0007fb7c) list_medium_line_t4_g4

0x2c08,	// (0x0007fb85) list_medium_line_x2

0x2c08,	// (0x0007fb85) list_medium_line_x2_t2_g2

0x2c08,	// (0x0007fb85) list_medium_line_x2_t2_g3

0x2c08,	// (0x0007fb85) list_medium_line_x2_t2_g4

0x2c08,	// (0x0007fb85) list_medium_line_x2_t3

0x2c08,	// (0x0007fb85) list_medium_line_x2_t3_g2

0x2c08,	// (0x0007fb85) list_medium_line_x2_t3_g3

0x2c08,	// (0x0007fb85) list_medium_line_x2_t3_g4

0x2c08,	// (0x0007fb85) list_medium_line_x2_t4_g2

0x2c08,	// (0x0007fb85) list_medium_line_x2_t4_g4

0x2c11,	// (0x0007fb8e) list_medium_line_x3

0x2c11,	// (0x0007fb8e) list_medium_line_x3_t4

0x2c11,	// (0x0007fb8e) list_medium_line_x3_t4_g4

0x2bff,	// (0x0007fb7c) list_medium_line_x4_t4

0x2bff,	// (0x0007fb7c) list_medium_line_x4_t4_g7

0x2bff,	// (0x0007fb7c) list_medium_line_x4_t5

0x2c1a,	// (0x0007fb97) list_single_fs_dyc_pane_ParamLimits

0x2c1a,	// (0x0007fb97) list_single_fs_dyc_pane

0x04d6,	// (0x0007d453) list_medium_line_x4_t4_g7_g1_ParamLimits

0x04d6,	// (0x0007d453) list_medium_line_x4_t4_g7_g1

0x2fe0,	// (0x0007ff5d) list_medium_line_x4_t4_g7_g2_ParamLimits

0x2fe0,	// (0x0007ff5d) list_medium_line_x4_t4_g7_g2

0x2fec,	// (0x0007ff69) list_medium_line_x4_t4_g7_g3_ParamLimits

0x2fec,	// (0x0007ff69) list_medium_line_x4_t4_g7_g3

0x2ffb,	// (0x0007ff78) list_medium_line_x4_t4_g7_g4_ParamLimits

0x2ffb,	// (0x0007ff78) list_medium_line_x4_t4_g7_g4

0x3007,	// (0x0007ff84) list_medium_line_x4_t4_g7_g5_ParamLimits

0x3007,	// (0x0007ff84) list_medium_line_x4_t4_g7_g5

0x3016,	// (0x0007ff93) list_medium_line_x4_t4_g7_g6_ParamLimits

0x3016,	// (0x0007ff93) list_medium_line_x4_t4_g7_g6

0x3025,	// (0x0007ffa2) list_medium_line_x4_t4_g7_g7_ParamLimits

0x3025,	// (0x0007ffa2) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbef,	// (0x0008cb6c) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbef,	// (0x0008cb6c) list_medium_line_x4_t4_g7_g

0x3031,	// (0x0007ffae) list_medium_line_x4_t4_g7_t1_ParamLimits

0x3031,	// (0x0007ffae) list_medium_line_x4_t4_g7_t1

0x3046,	// (0x0007ffc3) list_medium_line_x4_t4_g7_t2_ParamLimits

0x3046,	// (0x0007ffc3) list_medium_line_x4_t4_g7_t2

0x305b,	// (0x0007ffd8) list_medium_line_x4_t4_g7_t3_ParamLimits

0x305b,	// (0x0007ffd8) list_medium_line_x4_t4_g7_t3

0x3070,	// (0x0007ffed) list_medium_line_x4_t4_g7_t4_ParamLimits

0x3070,	// (0x0007ffed) list_medium_line_x4_t4_g7_t4

0x3082,	// (0x0007ffff) list_medium_line_x4_t4_g7_t5_ParamLimits

0x3082,	// (0x0007ffff) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbfe,	// (0x0008cb7b) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbfe,	// (0x0008cb7b) list_medium_line_x4_t4_g7_t

0x3094,	// (0x00080011) list_single_dyc_row_pane_ParamLimits

0x3094,	// (0x00080011) list_single_dyc_row_pane

0xc858,	// (0x000897d5) call5_gesture_pane_ParamLimits

0xc858,	// (0x000897d5) call5_gesture_pane

0xc88c,	// (0x00089809) call5_windows_pane_ParamLimits

0xc88c,	// (0x00089809) call5_windows_pane

0xc8fe,	// (0x0008987b) call5_swipe_1_pane_cp_ParamLimits

0xc8fe,	// (0x0008987b) call5_swipe_1_pane_cp

0xc90a,	// (0x00089887) call5_swipe_2_pane_cp_ParamLimits

0xc90a,	// (0x00089887) call5_swipe_2_pane_cp

0xecb2,	// (0x0008bc2f) call5_image_pane_cp

0xc916,	// (0x00089893) popup_call5_audio_first_window_cp_ParamLimits

0xc916,	// (0x00089893) popup_call5_audio_first_window_cp

0x366e,	// (0x000805eb) call5_swipe_1_pane_g1_cp_ParamLimits

0x366e,	// (0x000805eb) call5_swipe_1_pane_g1_cp

0x36ae,	// (0x0008062b) call5_swipe_1_pane_g2_cp

0x3687,	// (0x00080604) call5_swipe_1_pane_t1_cp_ParamLimits

0x3687,	// (0x00080604) call5_swipe_1_pane_t1_cp

0x366e,	// (0x000805eb) call5_swipe_2_pane_g1_cp_ParamLimits

0x366e,	// (0x000805eb) call5_swipe_2_pane_g1_cp

0x36b6,	// (0x00080633) call5_swipe_2_pane_g2_cp

0x36be,	// (0x0008063b) call5_swipe_2_pane_t1_cp_ParamLimits

0x36be,	// (0x0008063b) call5_swipe_2_pane_t1_cp

0xf0d2,	// (0x0008c04f) main_sp_fs_email_pane

0x36d3,	// (0x00080650) main_sp_fs_listscroll_pane_te

0x36dc,	// (0x00080659) popup_sp_fs_action_menu_pane_ParamLimits

0x36dc,	// (0x00080659) popup_sp_fs_action_menu_pane

0x1b5c,	// (0x0007ead9) bg_sp_fs_ctrlbar_pane_g1

0x3720,	// (0x0008069d) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x3729,	// (0x000806a6) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x3732,	// (0x000806af) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x1b5c,	// (0x0007ead9) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfce7,	// (0x0008cc64) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x1941,	// (0x0007e8be) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x1941,	// (0x0007e8be) bg_sp_fs_ctrlbar_ddmenu_pane

0x373b,	// (0x000806b8) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x373b,	// (0x000806b8) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x3747,	// (0x000806c4) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x3747,	// (0x000806c4) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcf0,	// (0x0008cc6d) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcf0,	// (0x0008cc6d) main_sp_fs_ctrlbar_ddmenu_pane_g

0x3753,	// (0x000806d0) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x3753,	// (0x000806d0) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x376d,	// (0x000806ea) list_medium_line_t2_right_icon_g1

0xc924,	// (0x000898a1) list_medium_line_t2_right_icon_t1

0xc934,	// (0x000898b1) list_medium_line_t2_right_icon_t2

0x0001,

0xfcf5,	// (0x0008cc72) list_medium_line_t2_right_icon_t

0x16f3,	// (0x0007e670) bg_sp_fs_ctrlbar_pane_ParamLimits

0x16f3,	// (0x0007e670) bg_sp_fs_ctrlbar_pane

0xc999,	// (0x00089916) main_sp_fs_ctrlbar_button_pane_cp01

0xc9a1,	// (0x0008991e) main_sp_fs_ctrlbar_ddmenu_pane

0x37ad,	// (0x0008072a) main_sp_fs_ctrlbar_pane_g1

0x37b9,	// (0x00080736) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcfa,	// (0x0008cc77) main_sp_fs_ctrlbar_pane_g

0x37c5,	// (0x00080742) main_sp_fs_ctrlbar_pane_t1

0xc9ab,	// (0x00089928) main_sp_fs_ctrlbar_pane

0xc9c7,	// (0x00089944) main_sp_fs_listscroll_pane_te_cp01

0xc9d8,	// (0x00089955) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0xc9d8,	// (0x00089955) popup_sp_fs_action_menu_pane_cp01

0xf0d2,	// (0x0008c04f) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xf0d2,	// (0x0008c04f) bg_sp_fs_highlight_list_pane_cp01

0x37da,	// (0x00080757) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x37da,	// (0x00080757) sp_fs_action_menu_list_gene_pane_g1

0x37e9,	// (0x00080766) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x37e9,	// (0x00080766) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcff,	// (0x0008cc7c) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcff,	// (0x0008cc7c) sp_fs_action_menu_list_gene_pane_g

0x37f6,	// (0x00080773) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x37f6,	// (0x00080773) sp_fs_action_menu_list_gene_pane_t1

0x380e,	// (0x0008078b) sp_fs_action_menu_list_gene_pane_ParamLimits

0x380e,	// (0x0008078b) sp_fs_action_menu_list_gene_pane

0x382f,	// (0x000807ac) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x382f,	// (0x000807ac) popup_sp_fs_action_menu_bg_pane

0x383d,	// (0x000807ba) sp_fs_action_menu_list_pane_ParamLimits

0x383d,	// (0x000807ba) sp_fs_action_menu_list_pane

0x385f,	// (0x000807dc) sp_fs_scroll_pane_cp01_ParamLimits

0x385f,	// (0x000807dc) sp_fs_scroll_pane_cp01

0xc9f2,	// (0x0008996f) list_medium_line_plain_t2_t1

0xca02,	// (0x0008997f) list_medium_line_plain_t2_t2

0x0001,

0xfd04,	// (0x0008cc81) list_medium_line_plain_t2_t

0xca10,	// (0x0008998d) list_medium_line_plain_t3_t1

0xca20,	// (0x0008999d) list_medium_line_plain_t3_t2

0xca2e,	// (0x000899ab) list_medium_line_plain_t3_t3

0x0002,

0xfd09,	// (0x0008cc86) list_medium_line_plain_t3_t

0x04d6,	// (0x0007d453) list_medium_line_x2_t2_g2_g1_ParamLimits

0x04d6,	// (0x0007d453) list_medium_line_x2_t2_g2_g1

0x04ee,	// (0x0007d46b) list_medium_line_x2_t2_g2_g2_ParamLimits

0x04ee,	// (0x0007d46b) list_medium_line_x2_t2_g2_g2

0x0001,

0xf26a,	// (0x0008c1e7) list_medium_line_x2_t2_g2_g_ParamLimits

0xf26a,	// (0x0008c1e7) list_medium_line_x2_t2_g2_g

0x0621,	// (0x0007d59e) list_medium_line_x2_t2_g2_t1_ParamLimits

0x0621,	// (0x0007d59e) list_medium_line_x2_t2_g2_t1

0x050f,	// (0x0007d48c) list_medium_line_x2_t2_g2_t2_ParamLimits

0x050f,	// (0x0007d48c) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd10,	// (0x0008cc8d) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd10,	// (0x0008cc8d) list_medium_line_x2_t2_g2_t

0x04d6,	// (0x0007d453) list_medium_line_x2_t4_g2_g1_ParamLimits

0x04d6,	// (0x0007d453) list_medium_line_x2_t4_g2_g1

0x3885,	// (0x00080802) list_medium_line_x2_t4_g2_g2_ParamLimits

0x3885,	// (0x00080802) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd15,	// (0x0008cc92) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd15,	// (0x0008cc92) list_medium_line_x2_t4_g2_g

0xca3c,	// (0x000899b9) list_medium_line_x2_t4_g2_t1_ParamLimits

0xca3c,	// (0x000899b9) list_medium_line_x2_t4_g2_t1

0xca53,	// (0x000899d0) list_medium_line_x2_t4_g2_t2_ParamLimits

0xca53,	// (0x000899d0) list_medium_line_x2_t4_g2_t2

0xca68,	// (0x000899e5) list_medium_line_x2_t4_g2_t3_ParamLimits

0xca68,	// (0x000899e5) list_medium_line_x2_t4_g2_t3

0x050f,	// (0x0007d48c) list_medium_line_x2_t4_g2_t4_ParamLimits

0x050f,	// (0x0007d48c) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd1a,	// (0x0008cc97) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd1a,	// (0x0008cc97) list_medium_line_x2_t4_g2_t

0x3897,	// (0x00080814) list_medium_line_t3_right_iconx2_g1

0x376d,	// (0x000806ea) list_medium_line_t3_right_iconx2_g2

0xca7a,	// (0x000899f7) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd23,	// (0x0008cca0) list_medium_line_t3_right_iconx2_g

0xca82,	// (0x000899ff) list_medium_line_t3_right_iconx2_t1

0xca92,	// (0x00089a0f) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd2a,	// (0x0008cca7) list_medium_line_t3_right_iconx2_t

0x04d6,	// (0x0007d453) list_medium_line_x3_t4_g4_g1_ParamLimits

0x04d6,	// (0x0007d453) list_medium_line_x3_t4_g4_g1

0x04e2,	// (0x0007d45f) list_medium_line_x3_t4_g4_g2_ParamLimits

0x04e2,	// (0x0007d45f) list_medium_line_x3_t4_g4_g2

0x0575,	// (0x0007d4f2) list_medium_line_x3_t4_g4_g3_ParamLimits

0x0575,	// (0x0007d4f2) list_medium_line_x3_t4_g4_g3

0x389f,	// (0x0008081c) list_medium_line_x3_t4_g4_g4_ParamLimits

0x389f,	// (0x0008081c) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd2f,	// (0x0008ccac) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd2f,	// (0x0008ccac) list_medium_line_x3_t4_g4_g

0xcaa0,	// (0x00089a1d) list_medium_line_x3_t4_g4_t1_ParamLimits

0xcaa0,	// (0x00089a1d) list_medium_line_x3_t4_g4_t1

0xcab7,	// (0x00089a34) list_medium_line_x3_t4_g4_t2_ParamLimits

0xcab7,	// (0x00089a34) list_medium_line_x3_t4_g4_t2

0x0636,	// (0x0007d5b3) list_medium_line_x3_t4_g4_t3_ParamLimits

0x0636,	// (0x0007d5b3) list_medium_line_x3_t4_g4_t3

0x38ab,	// (0x00080828) list_medium_line_x3_t4_g4_t4_ParamLimits

0x38ab,	// (0x00080828) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd38,	// (0x0008ccb5) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd38,	// (0x0008ccb5) list_medium_line_x3_t4_g4_t

0xcacc,	// (0x00089a49) list_single_dyc_row_text_pane_t1_ParamLimits

0xcacc,	// (0x00089a49) list_single_dyc_row_text_pane_t1

0xcb03,	// (0x00089a80) list_single_dyc_row_text_pane_t2_ParamLimits

0xcb03,	// (0x00089a80) list_single_dyc_row_text_pane_t2

0x38c8,	// (0x00080845) list_single_dyc_row_text_pane_t3_ParamLimits

0x38c8,	// (0x00080845) list_single_dyc_row_text_pane_t3

0x0002,

0xfd41,	// (0x0008ccbe) list_single_dyc_row_text_pane_t_ParamLimits

0xfd41,	// (0x0008ccbe) list_single_dyc_row_text_pane_t

0x38da,	// (0x00080857) list_single_dyc_row_pane_g1_ParamLimits

0x38da,	// (0x00080857) list_single_dyc_row_pane_g1

0x38e6,	// (0x00080863) list_single_dyc_row_pane_g2_ParamLimits

0x38e6,	// (0x00080863) list_single_dyc_row_pane_g2

0x38f2,	// (0x0008086f) list_single_dyc_row_pane_g3_ParamLimits

0x38f2,	// (0x0008086f) list_single_dyc_row_pane_g3

0x38fe,	// (0x0008087b) list_single_dyc_row_pane_g4_ParamLimits

0x38fe,	// (0x0008087b) list_single_dyc_row_pane_g4

0x0003,

0xfd48,	// (0x0008ccc5) list_single_dyc_row_pane_g_ParamLimits

0xfd48,	// (0x0008ccc5) list_single_dyc_row_pane_g

0x390a,	// (0x00080887) list_single_dyc_row_text_pane_ParamLimits

0x390a,	// (0x00080887) list_single_dyc_row_text_pane

0x0384,	// (0x0007d301) bg_sp_fs_scroll_pane

0x3929,	// (0x000808a6) thumb_sp_fs_scroll_pane

0x28aa,	// (0x0007f827) list_medium_line_g1_ParamLimits

0x28aa,	// (0x0007f827) list_medium_line_g1

0x3932,	// (0x000808af) list_medium_line_t1_ParamLimits

0x3932,	// (0x000808af) list_medium_line_t1

0x04d6,	// (0x0007d453) list_medium_line_x2_g1_ParamLimits

0x04d6,	// (0x0007d453) list_medium_line_x2_g1

0x04e2,	// (0x0007d45f) list_medium_line_x2_g2_ParamLimits

0x04e2,	// (0x0007d45f) list_medium_line_x2_g2

0x0001,

0xfd51,	// (0x0008ccce) list_medium_line_x2_g_ParamLimits

0xfd51,	// (0x0008ccce) list_medium_line_x2_g

0x3947,	// (0x000808c4) list_medium_line_x2_t1_ParamLimits

0x3947,	// (0x000808c4) list_medium_line_x2_t1

0x04d6,	// (0x0007d453) list_medium_line_x3_g1_ParamLimits

0x04d6,	// (0x0007d453) list_medium_line_x3_g1

0x04e2,	// (0x0007d45f) list_medium_line_x3_g2_ParamLimits

0x04e2,	// (0x0007d45f) list_medium_line_x3_g2

0x0001,

0xfd51,	// (0x0008ccce) list_medium_line_x3_g_ParamLimits

0xfd51,	// (0x0008ccce) list_medium_line_x3_g

0x3947,	// (0x000808c4) list_medium_line_x3_t1_ParamLimits

0x3947,	// (0x000808c4) list_medium_line_x3_t1

0x395d,	// (0x000808da) thumb_sp_fs_scroll_pane_g1

0x3966,	// (0x000808e3) thumb_sp_fs_scroll_pane_g2

0x396f,	// (0x000808ec) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd56,	// (0x0008ccd3) thumb_sp_fs_scroll_pane_g

0x395d,	// (0x000808da) bg_sp_fs_scroll_pane_g1

0x3966,	// (0x000808e3) bg_sp_fs_scroll_pane_g2

0x396f,	// (0x000808ec) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd56,	// (0x0008ccd3) bg_sp_fs_scroll_pane_g

0x04d6,	// (0x0007d453) list_medium_line_x2_t3_g4_g1_ParamLimits

0x04d6,	// (0x0007d453) list_medium_line_x2_t3_g4_g1

0x0569,	// (0x0007d4e6) list_medium_line_x2_t3_g4_g2_ParamLimits

0x0569,	// (0x0007d4e6) list_medium_line_x2_t3_g4_g2

0x04e2,	// (0x0007d45f) list_medium_line_x2_t3_g4_g3_ParamLimits

0x04e2,	// (0x0007d45f) list_medium_line_x2_t3_g4_g3

0x04ee,	// (0x0007d46b) list_medium_line_x2_t3_g4_g4_ParamLimits

0x04ee,	// (0x0007d46b) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2e6,	// (0x0008c263) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2e6,	// (0x0008c263) list_medium_line_x2_t3_g4_g

0xcb5d,	// (0x00089ada) list_medium_line_x2_t3_g4_t1_ParamLimits

0xcb5d,	// (0x00089ada) list_medium_line_x2_t3_g4_t1

0xcb73,	// (0x00089af0) list_medium_line_x2_t3_g4_t2_ParamLimits

0xcb73,	// (0x00089af0) list_medium_line_x2_t3_g4_t2

0x050f,	// (0x0007d48c) list_medium_line_x2_t3_g4_t3_ParamLimits

0x050f,	// (0x0007d48c) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd5d,	// (0x0008ccda) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd5d,	// (0x0008ccda) list_medium_line_x2_t3_g4_t

0x28aa,	// (0x0007f827) list_medium_line_g2_g1_ParamLimits

0x28aa,	// (0x0007f827) list_medium_line_g2_g1

0x28b6,	// (0x0007f833) list_medium_line_g2_g2_ParamLimits

0x28b6,	// (0x0007f833) list_medium_line_g2_g2

0x0001,

0xfa1f,	// (0x0008c99c) list_medium_line_g2_g_ParamLimits

0xfa1f,	// (0x0008c99c) list_medium_line_g2_g

0x3978,	// (0x000808f5) list_medium_line_g2_t1_ParamLimits

0x3978,	// (0x000808f5) list_medium_line_g2_t1

0x28aa,	// (0x0007f827) list_medium_line_t3_g2_g1_ParamLimits

0x28aa,	// (0x0007f827) list_medium_line_t3_g2_g1

0x28b6,	// (0x0007f833) list_medium_line_t3_g2_g2_ParamLimits

0x28b6,	// (0x0007f833) list_medium_line_t3_g2_g2

0x0001,

0xfa1f,	// (0x0008c99c) list_medium_line_t3_g2_g_ParamLimits

0xfa1f,	// (0x0008c99c) list_medium_line_t3_g2_g

0xcb8d,	// (0x00089b0a) list_medium_line_t3_g2_t1_ParamLimits

0xcb8d,	// (0x00089b0a) list_medium_line_t3_g2_t1

0xcba4,	// (0x00089b21) list_medium_line_t3_g2_t2_ParamLimits

0xcba4,	// (0x00089b21) list_medium_line_t3_g2_t2

0xcbb9,	// (0x00089b36) list_medium_line_t3_g2_t3_ParamLimits

0xcbb9,	// (0x00089b36) list_medium_line_t3_g2_t3

0x0002,

0xfd64,	// (0x0008cce1) list_medium_line_t3_g2_t_ParamLimits

0xfd64,	// (0x0008cce1) list_medium_line_t3_g2_t

0x376d,	// (0x000806ea) list_medium_line_right_icon_g1

0x398d,	// (0x0008090a) list_medium_line_right_icon_t1

0x28aa,	// (0x0007f827) list_medium_line_t2_g1_ParamLimits

0x28aa,	// (0x0007f827) list_medium_line_t2_g1

0xcbce,	// (0x00089b4b) list_medium_line_t2_t1_ParamLimits

0xcbce,	// (0x00089b4b) list_medium_line_t2_t1

0xcbe8,	// (0x00089b65) list_medium_line_t2_t2_ParamLimits

0xcbe8,	// (0x00089b65) list_medium_line_t2_t2

0x0001,

0xfd6b,	// (0x0008cce8) list_medium_line_t2_t_ParamLimits

0xfd6b,	// (0x0008cce8) list_medium_line_t2_t

0x28aa,	// (0x0007f827) list_medium_line_t3_g1_ParamLimits

0x28aa,	// (0x0007f827) list_medium_line_t3_g1

0xcbfd,	// (0x00089b7a) list_medium_line_t3_t1_ParamLimits

0xcbfd,	// (0x00089b7a) list_medium_line_t3_t1

0xcc14,	// (0x00089b91) list_medium_line_t3_t2_ParamLimits

0xcc14,	// (0x00089b91) list_medium_line_t3_t2

0xcc29,	// (0x00089ba6) list_medium_line_t3_t3_ParamLimits

0xcc29,	// (0x00089ba6) list_medium_line_t3_t3

0x0002,

0xfd70,	// (0x0008cced) list_medium_line_t3_t_ParamLimits

0xfd70,	// (0x0008cced) list_medium_line_t3_t

0x28aa,	// (0x0007f827) list_medium_line_g3_g1_ParamLimits

0x28aa,	// (0x0007f827) list_medium_line_g3_g1

0x399b,	// (0x00080918) list_medium_line_g3_g2_ParamLimits

0x399b,	// (0x00080918) list_medium_line_g3_g2

0x28b6,	// (0x0007f833) list_medium_line_g3_g3_ParamLimits

0x28b6,	// (0x0007f833) list_medium_line_g3_g3

0x0002,

0xfd77,	// (0x0008ccf4) list_medium_line_g3_g_ParamLimits

0xfd77,	// (0x0008ccf4) list_medium_line_g3_g

0x39a7,	// (0x00080924) list_medium_line_g3_t1_ParamLimits

0x39a7,	// (0x00080924) list_medium_line_g3_t1

0x28aa,	// (0x0007f827) list_medium_line_t2_g3_g1_ParamLimits

0x28aa,	// (0x0007f827) list_medium_line_t2_g3_g1

0x399b,	// (0x00080918) list_medium_line_t2_g3_g2_ParamLimits

0x399b,	// (0x00080918) list_medium_line_t2_g3_g2

0x28b6,	// (0x0007f833) list_medium_line_t2_g3_g3_ParamLimits

0x28b6,	// (0x0007f833) list_medium_line_t2_g3_g3

0x0002,

0xfd77,	// (0x0008ccf4) list_medium_line_t2_g3_g_ParamLimits

0xfd77,	// (0x0008ccf4) list_medium_line_t2_g3_g

0xcc3b,	// (0x00089bb8) list_medium_line_t2_g3_t1_ParamLimits

0xcc3b,	// (0x00089bb8) list_medium_line_t2_g3_t1

0xcc55,	// (0x00089bd2) list_medium_line_t2_g3_t2_ParamLimits

0xcc55,	// (0x00089bd2) list_medium_line_t2_g3_t2

0x0001,

0xfd7e,	// (0x0008ccfb) list_medium_line_t2_g3_t_ParamLimits

0xfd7e,	// (0x0008ccfb) list_medium_line_t2_g3_t

0x28aa,	// (0x0007f827) list_medium_line_t3_g3_g1_ParamLimits

0x28aa,	// (0x0007f827) list_medium_line_t3_g3_g1

0x399b,	// (0x00080918) list_medium_line_t3_g3_g2_ParamLimits

0x399b,	// (0x00080918) list_medium_line_t3_g3_g2

0x28b6,	// (0x0007f833) list_medium_line_t3_g3_g3_ParamLimits

0x28b6,	// (0x0007f833) list_medium_line_t3_g3_g3

0x0002,

0xfd77,	// (0x0008ccf4) list_medium_line_t3_g3_g_ParamLimits

0xfd77,	// (0x0008ccf4) list_medium_line_t3_g3_g

0xcc6a,	// (0x00089be7) list_medium_line_t3_g3_t1_ParamLimits

0xcc6a,	// (0x00089be7) list_medium_line_t3_g3_t1

0xcc7e,	// (0x00089bfb) list_medium_line_t3_g3_t2_ParamLimits

0xcc7e,	// (0x00089bfb) list_medium_line_t3_g3_t2

0xcc90,	// (0x00089c0d) list_medium_line_t3_g3_t3_ParamLimits

0xcc90,	// (0x00089c0d) list_medium_line_t3_g3_t3

0x0002,

0xfd83,	// (0x0008cd00) list_medium_line_t3_g3_t_ParamLimits

0xfd83,	// (0x0008cd00) list_medium_line_t3_g3_t

0x3897,	// (0x00080814) list_medium_line_right_iconx2_g1

0x376d,	// (0x000806ea) list_medium_line_right_iconx2_g2

0x0001,

0xfd8a,	// (0x0008cd07) list_medium_line_right_iconx2_g

0x39bc,	// (0x00080939) list_medium_line_right_iconx2_t1

0x3897,	// (0x00080814) list_medium_line_t2_right_iconx2_g1

0x376d,	// (0x000806ea) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd8a,	// (0x0008cd07) list_medium_line_t2_right_iconx2_g

0xcca2,	// (0x00089c1f) list_medium_line_t2_right_iconx2_t1

0xccb2,	// (0x00089c2f) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd8f,	// (0x0008cd0c) list_medium_line_t2_right_iconx2_t

0x39ca,	// (0x00080947) list_medium_line_x4_t4_t1

0xccc0,	// (0x00089c3d) list_medium_line_x4_t4_t2

0xccd0,	// (0x00089c4d) list_medium_line_x4_t4_t3

0xcce0,	// (0x00089c5d) list_medium_line_x4_t4_t4

0x0003,

0xfd94,	// (0x0008cd11) list_medium_line_x4_t4_t

0xcd19,	// (0x00089c96) tport_appsw_pane_ParamLimits

0xcd19,	// (0x00089c96) tport_appsw_pane

0xcd25,	// (0x00089ca2) tport_contact_pane_ParamLimits

0xcd25,	// (0x00089ca2) tport_contact_pane

0xcd35,	// (0x00089cb2) tport_listscroll_pane_ParamLimits

0xcd35,	// (0x00089cb2) tport_listscroll_pane

0xcd45,	// (0x00089cc2) cell_tport_appsw_pane_ParamLimits

0xcd45,	// (0x00089cc2) cell_tport_appsw_pane

0x1e59,	// (0x0007edd6) tport_appsw_pane_g1_ParamLimits

0x1e59,	// (0x0007edd6) tport_appsw_pane_g1

0x39d8,	// (0x00080955) tport_contact_pane_g1

0x3185,	// (0x00080102) tport_contact_pane_t1

0x39e1,	// (0x0008095e) tport_contact_pane_t2

0x0001,

0xfd9d,	// (0x0008cd1a) tport_contact_pane_t

0x39ef,	// (0x0008096c) list_tport_pane

0x39f8,	// (0x00080975) scroll_pane_cp_030

0x3a09,	// (0x00080986) cell_tport_appsw_pane_g1

0x3a19,	// (0x00080996) cell_tport_appsw_pane_t1

0x0384,	// (0x0007d301) grid_highlight_pane_cp019

0xcd70,	// (0x00089ced) list_tport_double_graphic_pane_ParamLimits

0xcd70,	// (0x00089ced) list_tport_double_graphic_pane

0xf0d2,	// (0x0008c04f) list_highlight_pane_cp023_ParamLimits

0xf0d2,	// (0x0008c04f) list_highlight_pane_cp023

0xcd82,	// (0x00089cff) list_tport_double_graphic_pane_g1_ParamLimits

0xcd82,	// (0x00089cff) list_tport_double_graphic_pane_g1

0xcd8f,	// (0x00089d0c) list_tport_double_graphic_pane_t1_ParamLimits

0xcd8f,	// (0x00089d0c) list_tport_double_graphic_pane_t1

0xcda4,	// (0x00089d21) list_tport_double_graphic_pane_t2_ParamLimits

0xcda4,	// (0x00089d21) list_tport_double_graphic_pane_t2

0x0001,

0xfda9,	// (0x0008cd26) list_tport_double_graphic_pane_t_ParamLimits

0xfda9,	// (0x0008cd26) list_tport_double_graphic_pane_t

0x0384,	// (0x0007d301) main_cale_note_pane

0xac43,	// (0x00087bc0) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xac43,	// (0x00087bc0) cell_vitu2_function_top_wide_pane_cp01

0xc532,	// (0x000894af) wait_bar_pane_cp05_ParamLimits

0x0384,	// (0x0007d301) listscroll_cmail_pane

0x3a2f,	// (0x000809ac) list_cmail_pane

0xcdc0,	// (0x00089d3d) list_cmail_body_pane

0xcddd,	// (0x00089d5a) list_single_cmail_header_caption_pane

0xce02,	// (0x00089d7f) list_single_cmail_header_detail_pane_ParamLimits

0xce02,	// (0x00089d7f) list_single_cmail_header_detail_pane

0xce35,	// (0x00089db2) list_single_cmail_header_caption_pane_t1

0xce43,	// (0x00089dc0) list_single_cmail_header_detail_pane_g1_ParamLimits

0xce43,	// (0x00089dc0) list_single_cmail_header_detail_pane_g1

0x48d3,	// (0x00081850) list_single_cmail_header_detail_pane_g2_ParamLimits

0x48d3,	// (0x00081850) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdae,	// (0x0008cd2b) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdae,	// (0x0008cd2b) list_single_cmail_header_detail_pane_g

0x3a5d,	// (0x000809da) list_single_cmail_header_detail_pane_t1_ParamLimits

0x3a5d,	// (0x000809da) list_single_cmail_header_detail_pane_t1

0x3a97,	// (0x00080a14) list_single_cmail_header_editor_pane_bg_ParamLimits

0x3a97,	// (0x00080a14) list_single_cmail_header_editor_pane_bg

0x3334,	// (0x000802b1) list_cmail_body_pane_g1

0x3aa9,	// (0x00080a26) list_cmail_body_pane_t1

0x264c,	// (0x0007f5c9) list_single_cmail_header_editor_pane_bg_g1

0xe5c7,	// (0x0008b544) list_single_cmail_header_editor_pane_bg_g1_copy1

0x265c,	// (0x0007f5d9) list_single_cmail_header_editor_pane_bg_g1_copy2

0x2654,	// (0x0007f5d1) list_single_cmail_header_editor_pane_bg_g1_copy3

0x28a2,	// (0x0007f81f) list_single_cmail_header_editor_pane_bg_g1_copy4

0x267c,	// (0x0007f5f9) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x266c,	// (0x0007f5e9) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x2674,	// (0x0007f5f1) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xe5a7,	// (0x0008b524) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xce7d,	// (0x00089dfa) calenote_gesture_pane_ParamLimits

0xce7d,	// (0x00089dfa) calenote_gesture_pane

0xce97,	// (0x00089e14) calenote_window_pane_ParamLimits

0xce97,	// (0x00089e14) calenote_window_pane

0x3ab7,	// (0x00080a34) popup_note_window_cp01

0xceaf,	// (0x00089e2c) calenote_swipe_1_pane_ParamLimits

0xceaf,	// (0x00089e2c) calenote_swipe_1_pane

0xc90a,	// (0x00089887) calenote_swipe_2_pane_ParamLimits

0xc90a,	// (0x00089887) calenote_swipe_2_pane

0x366e,	// (0x000805eb) calenote_swipe_1_pane_g1_ParamLimits

0x366e,	// (0x000805eb) calenote_swipe_1_pane_g1

0x367b,	// (0x000805f8) calenote_swipe_1_pane_g2_ParamLimits

0x367b,	// (0x000805f8) calenote_swipe_1_pane_g2

0x0001,

0xfcdd,	// (0x0008cc5a) calenote_swipe_1_pane_g_ParamLimits

0xfcdd,	// (0x0008cc5a) calenote_swipe_1_pane_g

0x3ac9,	// (0x00080a46) calenote_swipe_1_pane_t1_ParamLimits

0x3ac9,	// (0x00080a46) calenote_swipe_1_pane_t1

0x366e,	// (0x000805eb) calenote_swipe_2_pane_g1_ParamLimits

0x366e,	// (0x000805eb) calenote_swipe_2_pane_g1

0x3ae8,	// (0x00080a65) calenote_swipe_2_pane_g2_ParamLimits

0x3ae8,	// (0x00080a65) calenote_swipe_2_pane_g2

0x0001,

0xfdba,	// (0x0008cd37) calenote_swipe_2_pane_g_ParamLimits

0xfdba,	// (0x0008cd37) calenote_swipe_2_pane_g

0x3af4,	// (0x00080a71) calenote_swipe_2_pane_t1_ParamLimits

0x3af4,	// (0x00080a71) calenote_swipe_2_pane_t1

0x0384,	// (0x0007d301) main_mup_navstr_pane

0x99d4,	// (0x00086951) main_mup3_pane_t7_ParamLimits

0x99d4,	// (0x00086951) main_mup3_pane_t7

0xa39c,	// (0x00087319) main_mp4_pane_g6_ParamLimits

0xa39c,	// (0x00087319) main_mp4_pane_g6

0xa71c,	// (0x00087699) main_image3_pane_t4_ParamLimits

0xa71c,	// (0x00087699) main_image3_pane_t4

0xcec2,	// (0x00089e3f) popup_navstr_preview_pane_ParamLimits

0xcec2,	// (0x00089e3f) popup_navstr_preview_pane

0xcece,	// (0x00089e4b) scroll_navstr_pane_ParamLimits

0xcece,	// (0x00089e4b) scroll_navstr_pane

0x0384,	// (0x0007d301) bg_popup_preview_window_pane_cp04

0x3b1b,	// (0x00080a98) popup_navstr_preview_pane_t1

0xceda,	// (0x00089e57) scroll_navstr_pane_g1_ParamLimits

0xceda,	// (0x00089e57) scroll_navstr_pane_g1

0xcee7,	// (0x00089e64) scroll_navstr_pane_t1_ParamLimits

0xcee7,	// (0x00089e64) scroll_navstr_pane_t1

0x3ac0,	// (0x00080a3d) bg_button_pane_cp014

0x3ac0,	// (0x00080a3d) bg_button_pane_cp030

0xc7fe,	// (0x0008977b) list_double_fisheye_pane_g4_ParamLimits

0xc7fe,	// (0x0008977b) list_double_fisheye_pane_g4

0xc80a,	// (0x00089787) list_double_fisheye_pane_g5_ParamLimits

0xc80a,	// (0x00089787) list_double_fisheye_pane_g5

0x3a37,	// (0x000809b4) sp_fs_scroll_pane_cp03

0x37ad,	// (0x0008072a) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x37b9,	// (0x00080736) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcfa,	// (0x0008cc77) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x37c5,	// (0x00080742) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xcdb6,	// (0x00089d33) sp_fs_scroll_pane_cp02

0xe2d7,	// (0x0008b254) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xe2d7,	// (0x0008b254) popup_sp_fs_calendar_preview_list_single_pane

0x0384,	// (0x0007d301) main_cam6_pano_pane

0xf0d2,	// (0x0008c04f) main_mup3_pane_ParamLimits

0x0384,	// (0x0007d301) main_phacti_pane

0xc407,	// (0x00089384) bg_button_pane_cp11

0xc41f,	// (0x0008939c) main_mobtv_info_pane_g2_ParamLimits

0xc41f,	// (0x0008939c) main_mobtv_info_pane_g2

0x0001,

0xfc5a,	// (0x0008cbd7) main_mobtv_info_pane_g_ParamLimits

0xfc5a,	// (0x0008cbd7) main_mobtv_info_pane_g

0xc5d1,	// (0x0008954e) sc_clock_pane_t5_ParamLimits

0xc5d1,	// (0x0008954e) sc_clock_pane_t5

0xc66f,	// (0x000895ec) main_radioblah_pane_g1_ParamLimits

0x35ba,	// (0x00080537) main_radioblah_pane_t3_ParamLimits

0x35ba,	// (0x00080537) main_radioblah_pane_t3

0x35d2,	// (0x0008054f) main_radioblah_pane_t4_ParamLimits

0x35d2,	// (0x0008054f) main_radioblah_pane_t4

0xc68d,	// (0x0008960a) main_radioblah_text_pane_ParamLimits

0xc68d,	// (0x0008960a) main_radioblah_text_pane

0xc69a,	// (0x00089617) main_radioblah_info_pane_g1_ParamLimits

0xc72f,	// (0x000896ac) main_radioblah_info_pane_t4_ParamLimits

0xc72f,	// (0x000896ac) main_radioblah_info_pane_t4

0xf0d2,	// (0x0008c04f) main_sp_fs_calendar_pane

0xcef9,	// (0x00089e76) main_phacti_pane_g1

0xcf01,	// (0x00089e7e) phacti_note_pane_ParamLimits

0xcf01,	// (0x00089e7e) phacti_note_pane

0x3b32,	// (0x00080aaf) phacti_term_pane_ParamLimits

0x3b32,	// (0x00080aaf) phacti_term_pane

0x3b47,	// (0x00080ac4) phacti_note_pane_t1_ParamLimits

0x3b47,	// (0x00080ac4) phacti_note_pane_t1

0x3b5e,	// (0x00080adb) phacti_term_pane_g1

0x3b66,	// (0x00080ae3) phacti_term_pane_t1_ParamLimits

0x3b66,	// (0x00080ae3) phacti_term_pane_t1

0x3b90,	// (0x00080b0d) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe3ca,	// (0x0008b347) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdc4,	// (0x0008cd41) popup_sp_fs_calendar_preview_list_single_pane_g

0x3b98,	// (0x00080b15) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x3b98,	// (0x00080b15) popup_sp_fs_calendar_preview_list_single_pane_t1

0x3bad,	// (0x00080b2a) aid_popup_sp_fs_bg_corner_pane

0x1b5c,	// (0x0007ead9) popup_sp_fs_calendar_preview_bg_pane_g1

0x0384,	// (0x0007d301) popup_sp_fs_calendar_preview_bg_pane

0x3bb5,	// (0x00080b32) popup_sp_fs_calendar_preview_list_pane

0xf0d2,	// (0x0008c04f) bg_main_sp_fs_cale_pane_ParamLimits

0xf0d2,	// (0x0008c04f) bg_main_sp_fs_cale_pane

0x3bbd,	// (0x00080b3a) listscroll_cale_mrui_pane_ParamLimits

0x3bbd,	// (0x00080b3a) listscroll_cale_mrui_pane

0x3bd1,	// (0x00080b4e) listscroll_sp_fs_schedule_track_pane

0x3bda,	// (0x00080b57) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x3bda,	// (0x00080b57) main_sp_fs_ctrlbar_pane_cp01

0x3beb,	// (0x00080b68) main_sp_fs_ribbon_pane

0x3bf3,	// (0x00080b70) popup_sp_fs_cale_preview_window

0xcf40,	// (0x00089ebd) list_single_sp_fs_schedule_track_pane_ParamLimits

0xcf40,	// (0x00089ebd) list_single_sp_fs_schedule_track_pane

0x25a1,	// (0x0007f51e) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x25a1,	// (0x0007f51e) bg_sp_fs_highlight_list_pane_cp03

0xcf59,	// (0x00089ed6) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xcf59,	// (0x00089ed6) list_single_sp_fs_schedule_track_pane_g1

0xcf65,	// (0x00089ee2) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xcf65,	// (0x00089ee2) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdc9,	// (0x0008cd46) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdc9,	// (0x0008cd46) list_single_sp_fs_schedule_track_pane_g

0xcf71,	// (0x00089eee) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xcf71,	// (0x00089eee) list_single_sp_fs_schedule_track_pane_t1

0xcf89,	// (0x00089f06) sp_fs_schedule_track_pane_ParamLimits

0xcf89,	// (0x00089f06) sp_fs_schedule_track_pane

0x3c05,	// (0x00080b82) sp_fs_schedule_track_pane_g1

0x3c0d,	// (0x00080b8a) sp_fs_schedule_track_pane_g2

0x3c15,	// (0x00080b92) sp_fs_schedule_track_pane_g3

0x3c1d,	// (0x00080b9a) sp_fs_schedule_track_pane_g4

0x3c25,	// (0x00080ba2) sp_fs_schedule_track_pane_g5

0x0004,

0xfdce,	// (0x0008cd4b) sp_fs_schedule_track_pane_g

0x264c,	// (0x0007f5c9) bg_sp_fs_schedule_viewer_highlight_g1

0xe5c7,	// (0x0008b544) bg_sp_fs_schedule_viewer_highlight_g2

0x2654,	// (0x0007f5d1) bg_sp_fs_schedule_viewer_highlight_g3

0x265c,	// (0x0007f5d9) bg_sp_fs_schedule_viewer_highlight_g4

0x28a2,	// (0x0007f81f) bg_sp_fs_schedule_viewer_highlight_g5

0x266c,	// (0x0007f5e9) bg_sp_fs_schedule_viewer_highlight_g6

0x2674,	// (0x0007f5f1) bg_sp_fs_schedule_viewer_highlight_g7

0x267c,	// (0x0007f5f9) bg_sp_fs_schedule_viewer_highlight_g8

0xe5a7,	// (0x0008b524) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdd9,	// (0x0008cd56) bg_sp_fs_schedule_viewer_highlight_g

0x0384,	// (0x0007d301) bg_main_sp_fs_ribbon_pane

0xcf99,	// (0x00089f16) main_sp_fs_ribbon_pane_g1

0x3c2d,	// (0x00080baa) main_sp_fs_ribbon_pane_t1

0xcfa2,	// (0x00089f1f) main_sp_fs_ribbon_pane_t2

0x3c3c,	// (0x00080bb9) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdec,	// (0x0008cd69) main_sp_fs_ribbon_pane_t

0x3c4b,	// (0x00080bc8) main_sp_fs_ribbon_scheduler_pane

0x3c53,	// (0x00080bd0) bg_main_sp_fs_ribbon_pane_g1

0x3c5c,	// (0x00080bd9) bg_main_sp_fs_ribbon_pane_g2

0x3c65,	// (0x00080be2) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdf3,	// (0x0008cd70) bg_main_sp_fs_ribbon_pane_g

0x3c6d,	// (0x00080bea) main_sp_fs_ribbon_scheduler_pane_g1

0x3c76,	// (0x00080bf3) main_sp_fs_ribbon_scheduler_pane_g2

0x3c7f,	// (0x00080bfc) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdfa,	// (0x0008cd77) main_sp_fs_ribbon_scheduler_pane_g

0x3c88,	// (0x00080c05) list_cale_mrui_pane

0xcfb1,	// (0x00089f2e) sp_fs_scroll_pane_cp07_ParamLimits

0xcfb1,	// (0x00089f2e) sp_fs_scroll_pane_cp07

0xcfc7,	// (0x00089f44) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xcfc7,	// (0x00089f44) bg_sp_fs_schedule_viewer_highlight

0x3c91,	// (0x00080c0e) list_single_sp_fs_schedule_track_pane_cp01

0x3c99,	// (0x00080c16) list_sp_fs_schedule_track_pane

0x3ca1,	// (0x00080c1e) sp_fs_scroll_pane_cp06_ParamLimits

0x3ca1,	// (0x00080c1e) sp_fs_scroll_pane_cp06

0x1b5c,	// (0x0007ead9) bgmain_sp_fs_calendar_pane_g1

0xcfd4,	// (0x00089f51) list_single_cale_mrui_pane_ParamLimits

0xcfd4,	// (0x00089f51) list_single_cale_mrui_pane

0x3cb3,	// (0x00080c30) list_single_cale_mrui_row_pane_ParamLimits

0x3cb3,	// (0x00080c30) list_single_cale_mrui_row_pane

0x3cc0,	// (0x00080c3d) list_single_cale_mrui_row_pane_g1_ParamLimits

0x3cc0,	// (0x00080c3d) list_single_cale_mrui_row_pane_g1

0x3cf8,	// (0x00080c75) list_single_cale_mrui_row_pane_t1_ParamLimits

0x3cf8,	// (0x00080c75) list_single_cale_mrui_row_pane_t1

0xcff9,	// (0x00089f76) list_single_cale_mrui_row_pane_t2_ParamLimits

0xcff9,	// (0x00089f76) list_single_cale_mrui_row_pane_t2

0x3d0a,	// (0x00080c87) list_single_cale_mrui_row_pane_t3_ParamLimits

0x3d0a,	// (0x00080c87) list_single_cale_mrui_row_pane_t3

0x3d39,	// (0x00080cb6) list_single_cale_mrui_row_pane_t4_ParamLimits

0x3d39,	// (0x00080cb6) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe06,	// (0x0008cd83) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe06,	// (0x0008cd83) list_single_cale_mrui_row_pane_t

0xd05f,	// (0x00089fdc) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xd05f,	// (0x00089fdc) list_single_cmail_header_editor_pane_bg_cp01

0xd07f,	// (0x00089ffc) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xd07f,	// (0x00089ffc) list_single_cmail_header_editor_pane_bg_cp02

0xd09b,	// (0x0008a018) main_radioblah_text_pane_t1_ParamLimits

0xd09b,	// (0x0008a018) main_radioblah_text_pane_t1

0x3d68,	// (0x00080ce5) cam6_indi_pane_cp01

0x3d70,	// (0x00080ced) cam6_mode_pane_cp01

0x3d78,	// (0x00080cf5) cam6_pano_pane

0x3d81,	// (0x00080cfe) cam6_zoom_pane_cp01

0x3d89,	// (0x00080d06) cam6_pano_image_pane

0x3d94,	// (0x00080d11) cam6_pano_pane_g1

0x3334,	// (0x000802b1) cam6_pano_pane_g2

0x3d9d,	// (0x00080d1a) cam6_pano_pane_g3

0x3da6,	// (0x00080d23) cam6_pano_pane_g4

0x2124,	// (0x0007f0a1) cam6_pano_pane_g5

0x3daf,	// (0x00080d2c) cam6_pano_pane_g6

0x3db9,	// (0x00080d36) cam6_pano_pane_g7

0x3dc1,	// (0x00080d3e) cam6_pano_pane_g8

0x3dca,	// (0x00080d47) cam6_pano_pane_g9

0x0008,

0xfe0f,	// (0x0008cd8c) cam6_pano_pane_g

0x0384,	// (0x0007d301) main_browser_tag_pane

0x3b13,	// (0x00080a90) grid_navstr_albumart_pane

0x3dd5,	// (0x00080d52) cell_navstr_albumart_pane_ParamLimits

0x3dd5,	// (0x00080d52) cell_navstr_albumart_pane

0x3df8,	// (0x00080d75) cell_navstr_albumart_pane_g1

0x1510,	// (0x0007e48d) cell_navstr_albumart_pane_g2

0x1520,	// (0x0007e49d) cell_navstr_albumart_pane_g3

0x1518,	// (0x0007e495) cell_navstr_albumart_pane_g4

0x0003,

0xfe22,	// (0x0008cd9f) cell_navstr_albumart_pane_g

0xd0b6,	// (0x0008a033) bt_list_pane_ParamLimits

0xd0b6,	// (0x0008a033) bt_list_pane

0xd0d6,	// (0x0008a053) bt_list_pane_t1

0xd0e5,	// (0x0008a062) bt_list_pane_t2

0x0001,

0xfe2b,	// (0x0008cda8) bt_list_pane_t

0x0384,	// (0x0007d301) main_cale_prevew_pane

0xd0f4,	// (0x0008a071) popup_cale_preview_window_ParamLimits

0xd0f4,	// (0x0008a071) popup_cale_preview_window

0xf0d2,	// (0x0008c04f) bg_popup_preview_window_pane_cp05_ParamLimits

0xf0d2,	// (0x0008c04f) bg_popup_preview_window_pane_cp05

0x3e00,	// (0x00080d7d) list_cale_preview_pane_ParamLimits

0x3e00,	// (0x00080d7d) list_cale_preview_pane

0x4145,	// (0x000810c2) list_double_cale_preview_pane_ParamLimits

0x4145,	// (0x000810c2) list_double_cale_preview_pane

0xd10d,	// (0x0008a08a) list_single_cale_preview_pane_ParamLimits

0xd10d,	// (0x0008a08a) list_single_cale_preview_pane

0xd123,	// (0x0008a0a0) list_single_cale_preview_pane_g1

0xd12b,	// (0x0008a0a8) list_single_cale_preview_pane_t1_ParamLimits

0xd12b,	// (0x0008a0a8) list_single_cale_preview_pane_t1

0xd140,	// (0x0008a0bd) list_double_cale_preview_pane_g1

0xd148,	// (0x0008a0c5) list_double_cale_preview_pane_t1_ParamLimits

0xd148,	// (0x0008a0c5) list_double_cale_preview_pane_t1

0xd15d,	// (0x0008a0da) list_double_cale_preview_pane_t2_ParamLimits

0xd15d,	// (0x0008a0da) list_double_cale_preview_pane_t2

0x0001,

0xfe30,	// (0x0008cdad) list_double_cale_preview_pane_t_ParamLimits

0xfe30,	// (0x0008cdad) list_double_cale_preview_pane_t

0x0384,	// (0x0007d301) main_ezdial_pane

0xf0d2,	// (0x0008c04f) main_sp_fs_email_pane_ParamLimits

0xc942,	// (0x000898bf) cmail_ddmenu_btn01_pane_ParamLimits

0xc942,	// (0x000898bf) cmail_ddmenu_btn01_pane

0xc95f,	// (0x000898dc) cmail_ddmenu_btn02_pane_ParamLimits

0xc95f,	// (0x000898dc) cmail_ddmenu_btn02_pane

0xc97d,	// (0x000898fa) cmail_ddmenu_btn03_pane_ParamLimits

0xc97d,	// (0x000898fa) cmail_ddmenu_btn03_pane

0xc9ab,	// (0x00089928) main_sp_fs_ctrlbar_pane_ParamLimits

0xc9c7,	// (0x00089944) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xcdc0,	// (0x00089d3d) list_cmail_body_pane_ParamLimits

0x3a47,	// (0x000809c4) bg_button_pane_cp12

0x3a50,	// (0x000809cd) list_single_cmail_header_detail_pane_g3_ParamLimits

0x3a50,	// (0x000809cd) list_single_cmail_header_detail_pane_g3

0xce59,	// (0x00089dd6) list_single_cmail_header_detail_pane_t2_ParamLimits

0xce59,	// (0x00089dd6) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdb5,	// (0x0008cd32) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdb5,	// (0x0008cd32) list_single_cmail_header_detail_pane_t

0x3b7b,	// (0x00080af8) phacti_term_pane_t2_ParamLimits

0x3b7b,	// (0x00080af8) phacti_term_pane_t2

0x0001,

0xfdbf,	// (0x0008cd3c) phacti_term_pane_t_ParamLimits

0xfdbf,	// (0x0008cd3c) phacti_term_pane_t

0x3e0c,	// (0x00080d89) aid_size_list_single_double

0xd175,	// (0x0008a0f2) popup_ezdial_listscroll_window

0xd195,	// (0x0008a112) popup_number_entry_window_cp01

0xecb2,	// (0x0008bc2f) bg_popup_call_pane_cp09

0x3e18,	// (0x00080d95) ezdial_list_pane

0x3e20,	// (0x00080d9d) scroll_pane_cp23

0x1941,	// (0x0007e8be) bg_button_pane_cp028_ParamLimits

0x1941,	// (0x0007e8be) bg_button_pane_cp028

0xd1a3,	// (0x0008a120) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xd1a3,	// (0x0008a120) cmail_ddmenu_btn01_pane_g1

0xd1b3,	// (0x0008a130) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xd1b3,	// (0x0008a130) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe35,	// (0x0008cdb2) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe35,	// (0x0008cdb2) cmail_ddmenu_btn01_pane_g

0x3e28,	// (0x00080da5) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x3e28,	// (0x00080da5) cmail_ddmenu_btn01_pane_t1

0x16f3,	// (0x0007e670) bg_button_pane_cp029_ParamLimits

0x16f3,	// (0x0007e670) bg_button_pane_cp029

0xd1b3,	// (0x0008a130) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xd1b3,	// (0x0008a130) cmail_ddmenu_btn02_pane_g1

0xd1cb,	// (0x0008a148) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xd1cb,	// (0x0008a148) cmail_ddmenu_btn02_pane_t1

0x25a1,	// (0x0007f51e) bg_button_pane_cp031_ParamLimits

0x25a1,	// (0x0007f51e) bg_button_pane_cp031

0xd1b3,	// (0x0008a130) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xd1b3,	// (0x0008a130) cmail_ddmenu_btn03_pane_g1

0xd1cb,	// (0x0008a148) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xd1cb,	// (0x0008a148) cmail_ddmenu_btn03_pane_t1

0xa5b9,	// (0x00087536) cell_dialer2_keypad_pane_t1_ParamLimits

0xa5d3,	// (0x00087550) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xa5d3,	// (0x00087550) cell_dialer2_keypad_pane_t1_copy1

0xc2a7,	// (0x00089224) ncimui_group_button_pane

0xf0d2,	// (0x0008c04f) main_sp_fs_calendar_pane_ParamLimits

0xcddd,	// (0x00089d5a) list_single_cmail_header_caption_pane_ParamLimits

0x4a4f,	// (0x000819cc) aid_recal_txt_sm_pane

0x0384,	// (0x0007d301) mian_recal_day_pane

0x3bf3,	// (0x00080b70) popup_sp_fs_cale_preview_window_ParamLimits

0x0384,	// (0x0007d301) list_recal_day_pane

0x3e56,	// (0x00080dd3) list_single_recal_day_pane_ParamLimits

0x3e56,	// (0x00080dd3) list_single_recal_day_pane

0x3e68,	// (0x00080de5) list_single_recal_day_pane_g1_ParamLimits

0x3e68,	// (0x00080de5) list_single_recal_day_pane_g1

0x3e74,	// (0x00080df1) list_single_recal_day_pane_g2_ParamLimits

0x3e74,	// (0x00080df1) list_single_recal_day_pane_g2

0x3e83,	// (0x00080e00) list_single_recal_day_pane_g3_ParamLimits

0x3e83,	// (0x00080e00) list_single_recal_day_pane_g3

0xd1ef,	// (0x0008a16c) list_single_recal_day_pane_g4_ParamLimits

0xd1ef,	// (0x0008a16c) list_single_recal_day_pane_g4

0x3e8f,	// (0x00080e0c) list_single_recal_day_pane_g5_ParamLimits

0x3e8f,	// (0x00080e0c) list_single_recal_day_pane_g5

0x3e9e,	// (0x00080e1b) list_single_recal_day_pane_g6_ParamLimits

0x3e9e,	// (0x00080e1b) list_single_recal_day_pane_g6

0x0005,

0xfe44,	// (0x0008cdc1) list_single_recal_day_pane_g_ParamLimits

0xfe44,	// (0x0008cdc1) list_single_recal_day_pane_g

0x3eaa,	// (0x00080e27) list_single_recal_day_pane_t1

0x3eb8,	// (0x00080e35) list_single_recal_day_pane_t2

0x0001,

0xfe51,	// (0x0008cdce) list_single_recal_day_pane_t

0xd202,	// (0x0008a17f) ncimui_query_button_pane_ParamLimits

0xd202,	// (0x0008a17f) ncimui_query_button_pane

0xd212,	// (0x0008a18f) ncimui_query_button_pane_t1_ParamLimits

0xd212,	// (0x0008a18f) ncimui_query_button_pane_t1

0x3ec6,	// (0x00080e43) ncimui_query_button_pane_t2_ParamLimits

0x3ec6,	// (0x00080e43) ncimui_query_button_pane_t2

0x0001,

0xfe56,	// (0x0008cdd3) ncimui_query_button_pane_t_ParamLimits

0xfe56,	// (0x0008cdd3) ncimui_query_button_pane_t

0xd225,	// (0x0008a1a2) query_button_pane_ParamLimits

0xd225,	// (0x0008a1a2) query_button_pane

0x0384,	// (0x0007d301) bg_button_pane_cp0028

0x3ed9,	// (0x00080e56) query_button_pane_t1

0x8a34,	// (0x000859b1) main_tport_pane_ParamLimits

0xccf0,	// (0x00089c6d) bg_popup_window_pane_cp01_ParamLimits

0xccf0,	// (0x00089c6d) bg_popup_window_pane_cp01

0xccfd,	// (0x00089c7a) heading_pane_cp08_ParamLimits

0xccfd,	// (0x00089c7a) heading_pane_cp08

0xcd0b,	// (0x00089c88) heading_pane_cp07_ParamLimits

0xcd0b,	// (0x00089c88) heading_pane_cp07

0x3a09,	// (0x00080986) cell_tport_appsw_pane_g2

0x0002,

0xfda2,	// (0x0008cd1f) cell_tport_appsw_pane_g

0x8154,	// (0x000850d1) input_candi_list_open_g1

0xe76e,	// (0x0008b6eb) list_cale_time_pane_g6_ParamLimits

0xe76e,	// (0x0008b6eb) list_cale_time_pane_g6

0x946d,	// (0x000863ea) aid_size_touch_calib_1_ParamLimits

0x946d,	// (0x000863ea) aid_size_touch_calib_1

0x9479,	// (0x000863f6) aid_size_touch_calib_2_ParamLimits

0x9479,	// (0x000863f6) aid_size_touch_calib_2

0x9487,	// (0x00086404) aid_size_touch_calib_3_ParamLimits

0x9487,	// (0x00086404) aid_size_touch_calib_3

0x9497,	// (0x00086414) aid_size_touch_calib_4_ParamLimits

0x9497,	// (0x00086414) aid_size_touch_calib_4

0x94a5,	// (0x00086422) main_touch_calib_button_group_pane_ParamLimits

0x94a5,	// (0x00086422) main_touch_calib_button_group_pane

0x94b3,	// (0x00086430) main_touch_calib_pane_g1_ParamLimits

0x94bf,	// (0x0008643c) main_touch_calib_pane_g2_ParamLimits

0x94cb,	// (0x00086448) main_touch_calib_pane_g3_ParamLimits

0x94d7,	// (0x00086454) main_touch_calib_pane_g4_ParamLimits

0xf775,	// (0x0008c6f2) main_touch_calib_pane_g_ParamLimits

0x94e3,	// (0x00086460) main_touch_calib_pane_t1_ParamLimits

0x94fa,	// (0x00086477) main_touch_calib_pane_t2_ParamLimits

0x9511,	// (0x0008648e) main_touch_calib_pane_t3_ParamLimits

0x9525,	// (0x000864a2) main_touch_calib_pane_t4_ParamLimits

0x9539,	// (0x000864b6) main_touch_calib_pane_t5_ParamLimits

0xf77e,	// (0x0008c6fb) main_touch_calib_pane_t_ParamLimits

0x1efa,	// (0x0007ee77) list_single_fp_cale_pane_g3_ParamLimits

0x1efa,	// (0x0007ee77) list_single_fp_cale_pane_g3

0xaa19,	// (0x00087996) bg_button_pane_cp012_ParamLimits

0xaa19,	// (0x00087996) bg_vkb2_func_pane_cp03_ParamLimits

0xb3cd,	// (0x0008834a) cell_vitu2_function_top_pane_g1_ParamLimits

0xaa19,	// (0x00087996) bg_vkb2_func_pane_cp04_ParamLimits

0xc245,	// (0x000891c2) main_ncimui_button_group_pane_ParamLimits

0xc245,	// (0x000891c2) main_ncimui_button_group_pane

0xc295,	// (0x00089212) main_ncimui_pane_t3_ParamLimits

0xc295,	// (0x00089212) main_ncimui_pane_t3

0x3b29,	// (0x00080aa6) phacti_button_group_pane

0x3e0c,	// (0x00080d89) aid_size_list_single_double_ParamLimits

0xd175,	// (0x0008a0f2) popup_ezdial_listscroll_window_ParamLimits

0xd195,	// (0x0008a112) popup_number_entry_window_cp01_ParamLimits

0xd232,	// (0x0008a1af) phacti_button_pane_ParamLimits

0xd232,	// (0x0008a1af) phacti_button_pane

0x0384,	// (0x0007d301) bg_button_pane_cp14

0x3ee7,	// (0x00080e64) phacti_button_pane_t1

0xd243,	// (0x0008a1c0) main_touch_calib_button_pane_ParamLimits

0xd243,	// (0x0008a1c0) main_touch_calib_button_pane

0xe1d3,	// (0x0008b150) bg_button_pane_cp18_ParamLimits

0xe1d3,	// (0x0008b150) bg_button_pane_cp18

0x3ef5,	// (0x00080e72) main_touch_calib_button_pane_t1_ParamLimits

0x3ef5,	// (0x00080e72) main_touch_calib_button_pane_t1

0x3f0b,	// (0x00080e88) main_touch_calib_button_pane_t2_ParamLimits

0x3f0b,	// (0x00080e88) main_touch_calib_button_pane_t2

0x0001,

0xfe5b,	// (0x0008cdd8) main_touch_calib_button_pane_t_ParamLimits

0xfe5b,	// (0x0008cdd8) main_touch_calib_button_pane_t

0x0384,	// (0x0007d301) cell_ncimui_button_pane

0x0384,	// (0x0007d301) bg_button_pane_cp032

0x3f29,	// (0x00080ea6) cell_ncimui_button_pane_t1

0xa62f,	// (0x000875ac) image3_infobar_pane_ParamLimits

0xa62f,	// (0x000875ac) image3_infobar_pane

0xc5f3,	// (0x00089570) fs_bigclock_status_pane_ParamLimits

0xc5f3,	// (0x00089570) fs_bigclock_status_pane

0xc600,	// (0x0008957d) main_fs_bigclock_clock_pane_ParamLimits

0xc600,	// (0x0008957d) main_fs_bigclock_clock_pane

0xc610,	// (0x0008958d) main_fs_bigclock_indi_pane_ParamLimits

0xc610,	// (0x0008958d) main_fs_bigclock_indi_pane

0xc63d,	// (0x000895ba) main_fs_bigclock_swipe_pane_ParamLimits

0xc63d,	// (0x000895ba) main_fs_bigclock_swipe_pane

0x0384,	// (0x0007d301) main_fs_clock_dumped_data

0x3441,	// (0x000803be) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x3441,	// (0x000803be) list_single_fs_bigclock_indicator_pane_g1

0x345d,	// (0x000803da) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x345d,	// (0x000803da) list_single_fs_bigclock_indicator_pane_g2

0x3477,	// (0x000803f4) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x3477,	// (0x000803f4) list_single_fs_bigclock_indicator_pane_g3

0x3491,	// (0x0008040e) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x3491,	// (0x0008040e) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc8e,	// (0x0008cc0b) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc8e,	// (0x0008cc0b) list_single_fs_bigclock_indicator_pane_g

0x34b7,	// (0x00080434) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x34b7,	// (0x00080434) list_single_fs_bigclock_indicator_pane_t1

0x34df,	// (0x0008045c) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x34df,	// (0x0008045c) list_single_fs_bigclock_indicator_pane_t2

0x3507,	// (0x00080484) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x3507,	// (0x00080484) list_single_fs_bigclock_indicator_pane_t3

0x352f,	// (0x000804ac) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x352f,	// (0x000804ac) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc99,	// (0x0008cc16) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc99,	// (0x0008cc16) list_single_fs_bigclock_indicator_pane_t

0x3f37,	// (0x00080eb4) image3_infobar_fav_pane_ParamLimits

0x3f37,	// (0x00080eb4) image3_infobar_fav_pane

0x3f47,	// (0x00080ec4) image3_infobar_loc_pane_ParamLimits

0x3f47,	// (0x00080ec4) image3_infobar_loc_pane

0x3f5b,	// (0x00080ed8) image3_infobar_time_pane_ParamLimits

0x3f5b,	// (0x00080ed8) image3_infobar_time_pane

0x1b5c,	// (0x0007ead9) image3_infobar_time_pane_g1

0x3f6b,	// (0x00080ee8) image3_infobar_time_pane_t1

0x1b5c,	// (0x0007ead9) image3_infobar_loc_pane_g1

0x3f79,	// (0x00080ef6) image3_infobar_loc_pane_g2

0x0001,

0xfe60,	// (0x0008cddd) image3_infobar_loc_pane_g

0x3f81,	// (0x00080efe) image3_infobar_loc_pane_t1

0x1b5c,	// (0x0007ead9) image3_infobar_fav_pane_g1

0x3f8f,	// (0x00080f0c) image3_infobar_fav_pane_g2

0x0001,

0xfe65,	// (0x0008cde2) image3_infobar_fav_pane_g

0x3f97,	// (0x00080f14) fs_bigclock_status_battery_pane

0x3fa0,	// (0x00080f1d) fs_bigclock_status_signal_pane

0x3fa9,	// (0x00080f26) fs_bigclock_status_title_pane

0x3fb2,	// (0x00080f2f) fs_bigclock_status_signal_pane_g1

0x3fbb,	// (0x00080f38) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe6a,	// (0x0008cde7) fs_bigclock_status_signal_pane_g

0x3fc3,	// (0x00080f40) fs_bigclock_status_battery_pane_g1

0x3fcc,	// (0x00080f49) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe6f,	// (0x0008cdec) fs_bigclock_status_battery_pane_g

0x3fd4,	// (0x00080f51) fs_bigclock_status_title_pane_t1

0x1b5c,	// (0x0007ead9) main_fs_bigclock_clock_pane_g1

0x3fe2,	// (0x00080f5f) main_fs_bigclock_clock_pane_g2

0x3fe2,	// (0x00080f5f) main_fs_bigclock_clock_pane_g3

0x3fe2,	// (0x00080f5f) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe74,	// (0x0008cdf1) main_fs_bigclock_clock_pane_g

0x3fea,	// (0x00080f67) main_fs_bigclock_clock_pane_t1

0x3ff8,	// (0x00080f75) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe7d,	// (0x0008cdfa) main_fs_bigclock_clock_pane_t

0x4007,	// (0x00080f84) list_single_fs_bigclock_indicator_pane_ParamLimits

0x4007,	// (0x00080f84) list_single_fs_bigclock_indicator_pane

0xd255,	// (0x0008a1d2) list_single_fs_bigclock_pane_ParamLimits

0xd255,	// (0x0008a1d2) list_single_fs_bigclock_pane

0x4021,	// (0x00080f9e) main_fs_bigclock_indicator_pane_t1

0x4030,	// (0x00080fad) list_single_fs_bigclock_pane_g1

0x4038,	// (0x00080fb5) list_single_fs_bigclock_pane_t1

0x1b5c,	// (0x0007ead9) main_fs_bigclock_swipe_pane_g1

0x4076,	// (0x00080ff3) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe8e,	// (0x0008ce0b) main_fs_bigclock_swipe_pane_g

0x407e,	// (0x00080ffb) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x407e,	// (0x00080ffb) main_fs_bigclock_swipe_pane_t1

0x7904,	// (0x00084881) call_type_pane_ParamLimits

0x0384,	// (0x0007d301) main_btmg_pane

0x3cec,	// (0x00080c69) list_single_cale_mrui_row_pane_g2_ParamLimits

0x3cec,	// (0x00080c69) list_single_cale_mrui_row_pane_g2

0x0001,

0xfe01,	// (0x0008cd7e) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe01,	// (0x0008cd7e) list_single_cale_mrui_row_pane_g

0x3e46,	// (0x00080dc3) list_recal_vselct_arw_lo_pane

0x3e4e,	// (0x00080dcb) list_recal_vselct_arw_up_pane

0x4a58,	// (0x000819d5) list_recal_vselct_pane

0x409b,	// (0x00081018) btmg_button_pane

0xd2b8,	// (0x0008a235) main_btmg_pane_g1

0x0384,	// (0x0007d301) bg_button_pane_cp044

0x40a5,	// (0x00081022) btmg_button_pane_t1

0x16eb,	// (0x0007e668) aid_listscroll_gen

0xf0d2,	// (0x0008c04f) main_cntbar_detail_pane

0x3a27,	// (0x000809a4) list_cmail_folder_pane

0x3a37,	// (0x000809b4) sp_fs_scroll_pane_cp03_ParamLimits

0xd2c0,	// (0x0008a23d) list_single_fs_dyc_pane_cp01_ParamLimits

0xd2c0,	// (0x0008a23d) list_single_fs_dyc_pane_cp01

0x40b3,	// (0x00081030) aid_size_cmail_indent

0x48df,	// (0x0008185c) list_single_dyc_row_pane_cp01

0xd302,	// (0x0008a27f) cntbar_detail_list_pane_ParamLimits

0xd302,	// (0x0008a27f) cntbar_detail_list_pane

0xd33c,	// (0x0008a2b9) main_cntbar_detail_cont_pane_ParamLimits

0xd33c,	// (0x0008a2b9) main_cntbar_detail_cont_pane

0x789e,	// (0x0008481b) scroll_pane_cp032_ParamLimits

0x789e,	// (0x0008481b) scroll_pane_cp032

0xd348,	// (0x0008a2c5) cntbar_detail_list_event_pane_ParamLimits

0xd348,	// (0x0008a2c5) cntbar_detail_list_event_pane

0xd30e,	// (0x0008a28b) cntbar_detail_list_shct_pane

0xe615,	// (0x0008b592) aid_list_gen

0x40bc,	// (0x00081039) aid_scroll

0x40c5,	// (0x00081042) aid_size_touch_scroll_bar

0xd35c,	// (0x0008a2d9) aid_list_double

0x40ce,	// (0x0008104b) aid_list_single

0xd365,	// (0x0008a2e2) aid_list_single_lg

0x40d7,	// (0x00081054) aid_list_z_g_a_sm

0x48e8,	// (0x00081865) aid_list_z_g_d

0x40df,	// (0x0008105c) aid_txt_z_prm

0xd36e,	// (0x0008a2eb) aid_txt_z_prm_cp01

0xd37c,	// (0x0008a2f9) aid_txt_z_sec

0xd38a,	// (0x0008a307) main_cntbar_detail_cont_pane_g1_ParamLimits

0xd38a,	// (0x0008a307) main_cntbar_detail_cont_pane_g1

0xd397,	// (0x0008a314) main_cntbar_detail_cont_pane_g2_ParamLimits

0xd397,	// (0x0008a314) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe93,	// (0x0008ce10) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe93,	// (0x0008ce10) main_cntbar_detail_cont_pane_g

0x40ed,	// (0x0008106a) main_cntbar_detail_cont_pane_t1

0x40fb,	// (0x00081078) main_cntbar_detail_cont_pane_t2

0x4109,	// (0x00081086) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe98,	// (0x0008ce15) main_cntbar_detail_cont_pane_t

0xd3a3,	// (0x0008a320) cell_cntbar_detail_list_shct_pane_ParamLimits

0xd3a3,	// (0x0008a320) cell_cntbar_detail_list_shct_pane

0x4117,	// (0x00081094) cntbar_detail_list_shct_pane_g1

0x4120,	// (0x0008109d) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe9f,	// (0x0008ce1c) cntbar_detail_list_shct_pane_g

0xd3b7,	// (0x0008a334) cntbar_detail_list_event_pane_g1_ParamLimits

0xd3b7,	// (0x0008a334) cntbar_detail_list_event_pane_g1

0xd3c3,	// (0x0008a340) cntbar_detail_list_event_pane_g2_ParamLimits

0xd3c3,	// (0x0008a340) cntbar_detail_list_event_pane_g2

0x0005,

0xfea4,	// (0x0008ce21) cntbar_detail_list_event_pane_g_ParamLimits

0xfea4,	// (0x0008ce21) cntbar_detail_list_event_pane_g

0xd42f,	// (0x0008a3ac) cntbar_detail_list_event_pane_t1_ParamLimits

0xd42f,	// (0x0008a3ac) cntbar_detail_list_event_pane_t1

0xd444,	// (0x0008a3c1) cntbar_detail_list_event_pane_t2_ParamLimits

0xd444,	// (0x0008a3c1) cntbar_detail_list_event_pane_t2

0x0002,

0xfeb1,	// (0x0008ce2e) cntbar_detail_list_event_pane_t_ParamLimits

0xfeb1,	// (0x0008ce2e) cntbar_detail_list_event_pane_t

0x1b5c,	// (0x0007ead9) cell_cntbar_detail_list_shct_pane_g1

0x7c9e,	// (0x00084c1b) navi_pane_mv_g3

0xf0d2,	// (0x0008c04f) main_cntbar_detail_pane_ParamLimits

0x0384,	// (0x0007d301) main_notif_wgt_pane

0xa2e3,	// (0x00087260) aid_tch_main_mp4_pane_g4

0xa518,	// (0x00087495) popup_slider_window_cp02

0x3e3d,	// (0x00080dba) list_recal_day_event_pane

0xd2e2,	// (0x0008a25f) cntbar_detail_btn_pane_ParamLimits

0xd2e2,	// (0x0008a25f) cntbar_detail_btn_pane

0xd2f2,	// (0x0008a26f) cntbar_detail_btn_pane_cp01_ParamLimits

0xd2f2,	// (0x0008a26f) cntbar_detail_btn_pane_cp01

0xd30e,	// (0x0008a28b) cntbar_detail_list_shct_pane_ParamLimits

0xd31a,	// (0x0008a297) cntbar_detail_pane_g1_ParamLimits

0xd31a,	// (0x0008a297) cntbar_detail_pane_g1

0xd326,	// (0x0008a2a3) cntbar_detail_pane_t1_ParamLimits

0xd326,	// (0x0008a2a3) cntbar_detail_pane_t1

0xd3cf,	// (0x0008a34c) cntbar_detail_list_event_pane_g3_ParamLimits

0xd3cf,	// (0x0008a34c) cntbar_detail_list_event_pane_g3

0xd3e7,	// (0x0008a364) cntbar_detail_list_event_pane_g4_ParamLimits

0xd3e7,	// (0x0008a364) cntbar_detail_list_event_pane_g4

0xd3ff,	// (0x0008a37c) cntbar_detail_list_event_pane_g5_ParamLimits

0xd3ff,	// (0x0008a37c) cntbar_detail_list_event_pane_g5

0xd417,	// (0x0008a394) cntbar_detail_list_event_pane_g6_ParamLimits

0xd417,	// (0x0008a394) cntbar_detail_list_event_pane_g6

0xd459,	// (0x0008a3d6) cntbar_detail_list_event_pane_t3_ParamLimits

0xd459,	// (0x0008a3d6) cntbar_detail_list_event_pane_t3

0xd46b,	// (0x0008a3e8) popup_notif_wgt_window_ParamLimits

0xd46b,	// (0x0008a3e8) popup_notif_wgt_window

0xd47b,	// (0x0008a3f8) popup_submenu_window_cp01_ParamLimits

0xd47b,	// (0x0008a3f8) popup_submenu_window_cp01

0xecb2,	// (0x0008bc2f) bg_popup_window_pane_cp10

0x4129,	// (0x000810a6) listscroll_notif_wgt_pane

0x4133,	// (0x000810b0) list_notif_wgt_window

0x413c,	// (0x000810b9) scroll_pane_cp033

0x4145,	// (0x000810c2) list_notif_wgt_row_pane_ParamLimits

0x4145,	// (0x000810c2) list_notif_wgt_row_pane

0x4157,	// (0x000810d4) aid_size_list_notif_wgt_del

0x4160,	// (0x000810dd) list_notif_wgt_row_pane_g1

0x4168,	// (0x000810e5) list_notif_wgt_row_pane_g2

0x4170,	// (0x000810ed) list_notif_wgt_row_pane_g3

0x0002,

0xfeb8,	// (0x0008ce35) list_notif_wgt_row_pane_g

0x4179,	// (0x000810f6) list_notif_wgt_row_pane_t1

0x4187,	// (0x00081104) list_notif_wgt_row_pane_t2

0x4195,	// (0x00081112) list_notif_wgt_row_pane_t3

0x0002,

0xfebf,	// (0x0008ce3c) list_notif_wgt_row_pane_t

0x28c2,	// (0x0007f83f) list_recal_day_event_pane_g1

0x41a3,	// (0x00081120) list_recal_day_event_pane_t1

0x0384,	// (0x0007d301) bg_button_pane_cp045

0x41b2,	// (0x0008112f) cntbar_detail_btn_pane_t1

0x16f3,	// (0x0007e670) main_callh_pane_ParamLimits

0x16f3,	// (0x0007e670) main_callh_pane

0x0384,	// (0x0007d301) main_coverflow0_pane

0x0384,	// (0x0007d301) main_wgtman_pane

0xc655,	// (0x000895d2) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xc655,	// (0x000895d2) main_fs_bigclock_unlock_btn_pane

0x3a01,	// (0x0008097e) bg_button_pane_cp16

0x3a11,	// (0x0008098e) cell_tport_appsw_pane_g3

0xd489,	// (0x0008a406) cf0_flow_pane_ParamLimits

0xd489,	// (0x0008a406) cf0_flow_pane

0x41c0,	// (0x0008113d) listscroll_cf0_pane

0x41c9,	// (0x00081146) main_cf0_pane_g1

0xd498,	// (0x0008a415) main_cf0_pane_t1_ParamLimits

0xd498,	// (0x0008a415) main_cf0_pane_t1

0xd4ac,	// (0x0008a429) main_cf0_pane_t2_ParamLimits

0xd4ac,	// (0x0008a429) main_cf0_pane_t2

0x0001,

0xfec6,	// (0x0008ce43) main_cf0_pane_t_ParamLimits

0xfec6,	// (0x0008ce43) main_cf0_pane_t

0x41d3,	// (0x00081150) scroll_pane_cp11

0xd4c0,	// (0x0008a43d) cf0_flow_pane_g1

0xd4c8,	// (0x0008a445) cf0_flow_pane_g2

0x0001,

0xfecb,	// (0x0008ce48) cf0_flow_pane_g

0xd4d0,	// (0x0008a44d) cf0_flow_pane_t1

0x0384,	// (0x0007d301) main_call6_pane

0x0384,	// (0x0007d301) main_calllock_pane

0xd4de,	// (0x0008a45b) call6_btn_grp_pane_ParamLimits

0xd4de,	// (0x0008a45b) call6_btn_grp_pane

0xd4ed,	// (0x0008a46a) call6_pane_g1_ParamLimits

0xd4ed,	// (0x0008a46a) call6_pane_g1

0xd4fc,	// (0x0008a479) popup_call6_1st_window_ParamLimits

0xd4fc,	// (0x0008a479) popup_call6_1st_window

0xd50a,	// (0x0008a487) popup_call6_2nd_window_ParamLimits

0xd50a,	// (0x0008a487) popup_call6_2nd_window

0xd518,	// (0x0008a495) cell_call6_btn_pane_ParamLimits

0xd518,	// (0x0008a495) cell_call6_btn_pane

0xecb2,	// (0x0008bc2f) bg_popup_call2_in_pane_cp03

0x41de,	// (0x0008115b) popup_call6_1st_window_g1

0x41e6,	// (0x00081163) popup_call6_1st_window_g2

0x41ee,	// (0x0008116b) popup_call6_1st_window_g3

0x0002,

0xfed0,	// (0x0008ce4d) popup_call6_1st_window_g

0x41f6,	// (0x00081173) popup_call6_1st_window_t1

0x4205,	// (0x00081182) popup_call6_1st_window_t2

0x4215,	// (0x00081192) popup_call6_1st_window_t3

0x0002,

0xfed7,	// (0x0008ce54) popup_call6_1st_window_t

0xecb2,	// (0x0008bc2f) bg_popup_call2_in_pane_cp04

0x41de,	// (0x0008115b) popup_call6_2nd_window_g1

0x41e6,	// (0x00081163) popup_call6_2nd_window_g2

0x41ee,	// (0x0008116b) popup_call6_2nd_window_g3

0x0002,

0xfed0,	// (0x0008ce4d) popup_call6_2nd_window_g

0x41f6,	// (0x00081173) popup_call6_2nd_window_t1

0x0384,	// (0x0007d301) bg_button_pane_cp15

0x4225,	// (0x000811a2) cell_call6_btn_pane_g1

0x422e,	// (0x000811ab) cell_call6_btn_pane_t1

0xd527,	// (0x0008a4a4) listscroll_wgtman_pane_ParamLimits

0xd527,	// (0x0008a4a4) listscroll_wgtman_pane

0xd545,	// (0x0008a4c2) wgtman_btn_pane_ParamLimits

0xd545,	// (0x0008a4c2) wgtman_btn_pane

0xeb69,	// (0x0008bae6) aid_scroll_copy1

0x423d,	// (0x000811ba) list_wgtman_pane

0xd57a,	// (0x0008a4f7) wgtman_btn_pane_g1_ParamLimits

0xd57a,	// (0x0008a4f7) wgtman_btn_pane_g1

0xd5a2,	// (0x0008a51f) wgtman_btn_pane_t1_ParamLimits

0xd5a2,	// (0x0008a51f) wgtman_btn_pane_t1

0x4247,	// (0x000811c4) wgtman_btn_pane_t2_ParamLimits

0x4247,	// (0x000811c4) wgtman_btn_pane_t2

0x0001,

0xfede,	// (0x0008ce5b) wgtman_btn_pane_t_ParamLimits

0xfede,	// (0x0008ce5b) wgtman_btn_pane_t

0xd5d9,	// (0x0008a556) listrow_wgtman_pane_ParamLimits

0xd5d9,	// (0x0008a556) listrow_wgtman_pane

0xd5f4,	// (0x0008a571) listrow_wgtman_pane_g1

0xd5fd,	// (0x0008a57a) listrow_wgtman_pane_g2

0x0001,

0xfee3,	// (0x0008ce60) listrow_wgtman_pane_g

0xd607,	// (0x0008a584) listrow_wgtman_pane_t1

0xd615,	// (0x0008a592) listrow_wgtman_pane_t2

0x0001,

0xfee8,	// (0x0008ce65) listrow_wgtman_pane_t

0xd623,	// (0x0008a5a0) wait_bar_pane_cp09

0x425e,	// (0x000811db) main_calllock_btn_pane

0x4268,	// (0x000811e5) main_calllock_pane_g1

0x0384,	// (0x0007d301) bg_button_pane_cp17

0x4274,	// (0x000811f1) main_calllock_btn_pane_g1

0x427d,	// (0x000811fa) main_calllock_btn_pane_t1

0x0384,	// (0x0007d301) main_dialer3_pane

0x0384,	// (0x0007d301) main_fmrd2_pane

0x1b5c,	// (0x0007ead9) main_fs_bigclock_unlock_btn_pane_g1

0x4294,	// (0x00081211) main_fs_bigclock_unlock_btn_pane_t1

0xd62b,	// (0x0008a5a8) area_fmrd2_info_pane_ParamLimits

0xd62b,	// (0x0008a5a8) area_fmrd2_info_pane

0xd639,	// (0x0008a5b6) area_fmrd2_visual_pane_ParamLimits

0xd639,	// (0x0008a5b6) area_fmrd2_visual_pane

0xd647,	// (0x0008a5c4) fmrd2_indi_pane_ParamLimits

0xd647,	// (0x0008a5c4) fmrd2_indi_pane

0xd654,	// (0x0008a5d1) area_fmrd2_visual_pane_g1

0xd65c,	// (0x0008a5d9) area_fmrd2_visual_pane_t1

0xd66c,	// (0x0008a5e9) area_fmrd2_visual_pane_t2

0xd67c,	// (0x0008a5f9) area_fmrd2_visual_pane_t3

0x0002,

0xfef2,	// (0x0008ce6f) area_fmrd2_visual_pane_t

0xd68c,	// (0x0008a609) area_fmrd2_info_pane_g1

0xd694,	// (0x0008a611) area_fmrd2_info_pane_t1

0xd6a4,	// (0x0008a621) area_fmrd2_info_pane_t2

0xd6b4,	// (0x0008a631) area_fmrd2_info_pane_t3

0xd6c4,	// (0x0008a641) area_fmrd2_info_pane_t4

0x0003,

0xfef9,	// (0x0008ce76) area_fmrd2_info_pane_t

0xd6d2,	// (0x0008a64f) fmrd2_indi_pane_t1

0xd6e2,	// (0x0008a65f) fmrd2_indi_pane_t2

0xd6f2,	// (0x0008a66f) fmrd2_indi_pane_t3

0x0002,

0xff02,	// (0x0008ce7f) fmrd2_indi_pane_t

0x34a0,	// (0x0008041d) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x34a0,	// (0x0008041d) list_single_fs_bigclock_indicator_pane_g5

0x3544,	// (0x000804c1) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x3544,	// (0x000804c1) list_single_fs_bigclock_indicator_pane_t5

0xcf17,	// (0x00089e94) aid_cell_bcale_month_pane_ParamLimits

0xcf17,	// (0x00089e94) aid_cell_bcale_month_pane

0xcf23,	// (0x00089ea0) bcale_month_pane_ParamLimits

0xcf23,	// (0x00089ea0) bcale_month_pane

0xcf31,	// (0x00089eae) bcale_preview_pane_ParamLimits

0xcf31,	// (0x00089eae) bcale_preview_pane

0x4038,	// (0x00080fb5) list_single_fs_bigclock_pane_t1_ParamLimits

0x4052,	// (0x00080fcf) list_single_fs_bigclock_pane_t2_ParamLimits

0x4052,	// (0x00080fcf) list_single_fs_bigclock_pane_t2

0x0001,

0xfe89,	// (0x0008ce06) list_single_fs_bigclock_pane_t_ParamLimits

0xfe89,	// (0x0008ce06) list_single_fs_bigclock_pane_t

0x428c,	// (0x00081209) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfeed,	// (0x0008ce6a) main_fs_bigclock_unlock_btn_pane_g

0xd700,	// (0x0008a67d) aid_dia3_key_size_ParamLimits

0xd700,	// (0x0008a67d) aid_dia3_key_size

0xd70c,	// (0x0008a689) aid_dia3_listrow_size_ParamLimits

0xd70c,	// (0x0008a689) aid_dia3_listrow_size

0xd71c,	// (0x0008a699) dia3_keypad_fun_pane_ParamLimits

0xd71c,	// (0x0008a699) dia3_keypad_fun_pane

0xd72e,	// (0x0008a6ab) dia3_keypad_num_pane_ParamLimits

0xd72e,	// (0x0008a6ab) dia3_keypad_num_pane

0xd740,	// (0x0008a6bd) dia3_listscroll_pane_ParamLimits

0xd740,	// (0x0008a6bd) dia3_listscroll_pane

0xd74e,	// (0x0008a6cb) dia3_numentry_pane_ParamLimits

0xd74e,	// (0x0008a6cb) dia3_numentry_pane

0x42a2,	// (0x0008121f) dia3_list_pane

0x42ad,	// (0x0008122a) scroll_pane_cp12

0x0384,	// (0x0007d301) bg_dia3_numentry_pane

0xd75c,	// (0x0008a6d9) dia3_numentry_pane_t1

0xd76b,	// (0x0008a6e8) cell_dia3_key_num_pane

0xd773,	// (0x0008a6f0) cell_dia3_key0_fun_pane_ParamLimits

0xd773,	// (0x0008a6f0) cell_dia3_key0_fun_pane

0xd780,	// (0x0008a6fd) cell_dia3_key1_fun_pane_ParamLimits

0xd780,	// (0x0008a6fd) cell_dia3_key1_fun_pane

0xd78d,	// (0x0008a70a) dia3_listrow_pane

0x31a0,	// (0x0008011d) bg_dia3_numentry_pane_g1

0x0384,	// (0x0007d301) bg_button_pane_cp21

0x42b8,	// (0x00081235) cell_dia3_key_num_pane_t1

0x42c6,	// (0x00081243) cell_dia3_key_num_pane_t2

0x42d5,	// (0x00081252) cell_dia3_key_num_pane_t3

0x42e4,	// (0x00081261) cell_dia3_key_num_pane_t4

0x0003,

0xff09,	// (0x0008ce86) cell_dia3_key_num_pane_t

0x0384,	// (0x0007d301) bg_button_pane_cp19

0xd79a,	// (0x0008a717) cell_dia3_key0_fun_pane_g1

0x0384,	// (0x0007d301) bg_button_pane_cp20

0xd7a2,	// (0x0008a71f) cell_dia3_key1_fun_pane_g1

0xd7aa,	// (0x0008a727) area_left_week_number_pane

0x48df,	// (0x0008185c) area_top_day_name_pane

0xd7b3,	// (0x0008a730) frame_month_view_pane

0xd7bd,	// (0x0008a73a) grid_month_view_pane

0xd7c7,	// (0x0008a744) cell_top_day_name_pane_ParamLimits

0xd7c7,	// (0x0008a744) cell_top_day_name_pane

0xd7e1,	// (0x0008a75e) cell_area_left_week_number_pane_ParamLimits

0xd7e1,	// (0x0008a75e) cell_area_left_week_number_pane

0xd7f5,	// (0x0008a772) cell_month_view_pane_ParamLimits

0xd7f5,	// (0x0008a772) cell_month_view_pane

0x42f3,	// (0x00081270) frm_month_g1

0xd812,	// (0x0008a78f) frm_month_g2

0xd81c,	// (0x0008a799) frm_month_g3

0xd826,	// (0x0008a7a3) frm_month_g4

0xd830,	// (0x0008a7ad) frm_month_g5

0xd83a,	// (0x0008a7b7) frm_month_g6

0xd844,	// (0x0008a7c1) frm_month_g7

0x42fc,	// (0x00081279) frm_month_g8

0xd84e,	// (0x0008a7cb) frm_month_g9

0xd857,	// (0x0008a7d4) frm_month_g10

0xd860,	// (0x0008a7dd) frm_month_g11

0xd869,	// (0x0008a7e6) frm_month_g12

0xd872,	// (0x0008a7ef) frm_month_g13

0xd87b,	// (0x0008a7f8) frm_month_g14

0xd884,	// (0x0008a801) frm_month_g15

0xd88f,	// (0x0008a80c) frm_month_g16

0x000f,

0xff12,	// (0x0008ce8f) frm_month_g

0xd89a,	// (0x0008a817) cell_top_day_name_pane_t1

0xd8a9,	// (0x0008a826) cell_area_left_week_number_pane_g1

0xd89a,	// (0x0008a817) cell_area_left_week_number_pane_t1

0x1b5c,	// (0x0007ead9) cell_month_view_pane_g1

0xd8b1,	// (0x0008a82e) cell_month_view_pane_t1

0x0384,	// (0x0007d301) main_fps_pane

0x3775,	// (0x000806f2) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x3775,	// (0x000806f2) cmail_ddmenu_btn02_pane_cp1

0x3791,	// (0x0008070e) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x3791,	// (0x0008070e) cmail_ddmenu_btn02_pane_cp2

0xd1bf,	// (0x0008a13c) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xd1bf,	// (0x0008a13c) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe3a,	// (0x0008cdb7) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe3a,	// (0x0008cdb7) cmail_ddmenu_btn02_pane_g

0xd1dd,	// (0x0008a15a) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xd1dd,	// (0x0008a15a) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe3f,	// (0x0008cdbc) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe3f,	// (0x0008cdbc) cmail_ddmenu_btn02_pane_t

0xd8c0,	// (0x0008a83d) fps_text_pane_ParamLimits

0xd8c0,	// (0x0008a83d) fps_text_pane

0xd8cd,	// (0x0008a84a) main_fps_pane_g1_ParamLimits

0xd8cd,	// (0x0008a84a) main_fps_pane_g1

0xd8db,	// (0x0008a858) wait_bar_pane_cp010_ParamLimits

0xd8db,	// (0x0008a858) wait_bar_pane_cp010

0xd8e7,	// (0x0008a864) fps_text_pane_t1_ParamLimits

0xd8e7,	// (0x0008a864) fps_text_pane_t1

0xa908,	// (0x00087885) cam4_image_uncrop_pane_g1

0xa911,	// (0x0008788e) cam4_image_uncrop_pane_g2

0xa91a,	// (0x00087897) cam4_image_uncrop_pane_g3

0xa923,	// (0x000878a0) cam4_image_uncrop_pane_g4

0x0003,

0xf90d,	// (0x0008c88a) cam4_image_uncrop_pane_g

0xd78d,	// (0x0008a70a) dia3_listrow_pane_ParamLimits

0x0384,	// (0x0007d301) main_phob2_pane

0xcd52,	// (0x00089ccf) cell_tport_appsw_pane_cp02_ParamLimits

0xcd52,	// (0x00089ccf) cell_tport_appsw_pane_cp02

0xcd61,	// (0x00089cde) cell_tport_appsw_pane_cp03_ParamLimits

0xcd61,	// (0x00089cde) cell_tport_appsw_pane_cp03

0x0384,	// (0x0007d301) phob2_contact_card_pane

0x0384,	// (0x0007d301) phob2_listscroll_pane

0x4305,	// (0x00081282) phob2_list_pane

0x430d,	// (0x0008128a) scroll_pane_cp034

0xd900,	// (0x0008a87d) phob2_cc_data_pane_ParamLimits

0xd900,	// (0x0008a87d) phob2_cc_data_pane

0xd91a,	// (0x0008a897) phob2_cc_listscroll_pane_ParamLimits

0xd91a,	// (0x0008a897) phob2_cc_listscroll_pane

0xd934,	// (0x0008a8b1) list_double_large_graphic_phob2_pane_ParamLimits

0xd934,	// (0x0008a8b1) list_double_large_graphic_phob2_pane

0x4315,	// (0x00081292) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x4315,	// (0x00081292) list_double_large_graphic_phob2_pane_g1

0x4322,	// (0x0008129f) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x4322,	// (0x0008129f) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff33,	// (0x0008ceb0) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff33,	// (0x0008ceb0) list_double_large_graphic_phob2_pane_g

0x432e,	// (0x000812ab) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x432e,	// (0x000812ab) list_double_large_graphic_phob2_pane_t1

0x4343,	// (0x000812c0) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x4343,	// (0x000812c0) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff38,	// (0x0008ceb5) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff38,	// (0x0008ceb5) list_double_large_graphic_phob2_pane_t

0x0384,	// (0x0007d301) list_highlight_pane_cp024

0x4355,	// (0x000812d2) phob2_cc_button_pane

0xd952,	// (0x0008a8cf) phob2_cc_data_pane_g1_ParamLimits

0xd952,	// (0x0008a8cf) phob2_cc_data_pane_g1

0xd95e,	// (0x0008a8db) phob2_cc_data_pane_g2_ParamLimits

0xd95e,	// (0x0008a8db) phob2_cc_data_pane_g2

0x0001,

0xff3d,	// (0x0008ceba) phob2_cc_data_pane_g_ParamLimits

0xff3d,	// (0x0008ceba) phob2_cc_data_pane_g

0xd96a,	// (0x0008a8e7) phob2_cc_data_pane_t1_ParamLimits

0xd96a,	// (0x0008a8e7) phob2_cc_data_pane_t1

0xd97c,	// (0x0008a8f9) phob2_cc_data_pane_t2_ParamLimits

0xd97c,	// (0x0008a8f9) phob2_cc_data_pane_t2

0xd98e,	// (0x0008a90b) phob2_cc_data_pane_t3_ParamLimits

0xd98e,	// (0x0008a90b) phob2_cc_data_pane_t3

0x0002,

0xff42,	// (0x0008cebf) phob2_cc_data_pane_t_ParamLimits

0xff42,	// (0x0008cebf) phob2_cc_data_pane_t

0x435d,	// (0x000812da) phob2_cc_list_pane_ParamLimits

0x435d,	// (0x000812da) phob2_cc_list_pane

0x296d,	// (0x0007f8ea) scroll_pane_cp035_ParamLimits

0x296d,	// (0x0007f8ea) scroll_pane_cp035

0xf0d2,	// (0x0008c04f) bg_button_pane_cp033

0x4369,	// (0x000812e6) phob2_cc_button_pane_g1

0x4375,	// (0x000812f2) phob2_cc_button_pane_t1

0x438a,	// (0x00081307) phob2_cc_button_pane_t2

0x0001,

0xff49,	// (0x0008cec6) phob2_cc_button_pane_t

0xd9a0,	// (0x0008a91d) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xd9a0,	// (0x0008a91d) list_double_large_graphic_phob2_cc_pane

0xd9c7,	// (0x0008a944) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xd9c7,	// (0x0008a944) list_double_large_graphic_phob2_cc_pane_g1

0xd9d8,	// (0x0008a955) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xd9d8,	// (0x0008a955) list_double_large_graphic_phob2_cc_pane_g2

0xd9e7,	// (0x0008a964) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xd9e7,	// (0x0008a964) list_double_large_graphic_phob2_cc_pane_g3

0xd9f6,	// (0x0008a973) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xd9f6,	// (0x0008a973) list_double_large_graphic_phob2_cc_pane_g4

0xda07,	// (0x0008a984) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xda07,	// (0x0008a984) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff4e,	// (0x0008cecb) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff4e,	// (0x0008cecb) list_double_large_graphic_phob2_cc_pane_g

0xda16,	// (0x0008a993) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xda16,	// (0x0008a993) list_double_large_graphic_phob2_cc_pane_t1

0xda3f,	// (0x0008a9bc) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xda3f,	// (0x0008a9bc) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff59,	// (0x0008ced6) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff59,	// (0x0008ced6) list_double_large_graphic_phob2_cc_pane_t

0x439c,	// (0x00081319) list_highlight_pane_cp025_ParamLimits

0x439c,	// (0x00081319) list_highlight_pane_cp025

0xf0d2,	// (0x0008c04f) bg_button_pane_cp033_ParamLimits

0x4369,	// (0x000812e6) phob2_cc_button_pane_g1_ParamLimits

0x4375,	// (0x000812f2) phob2_cc_button_pane_t1_ParamLimits

0x438a,	// (0x00081307) phob2_cc_button_pane_t2_ParamLimits

0xff49,	// (0x0008cec6) phob2_cc_button_pane_t_ParamLimits

0x5bd7,	// (0x00082b54) popup_wgtman_window

0x2766,	// (0x0007f6e3) scroll_pane_cp038

0xd562,	// (0x0008a4df) wgtman_btn_pane_cp_01_ParamLimits

0xd562,	// (0x0008a4df) wgtman_btn_pane_cp_01

0x43aa,	// (0x00081327) wgtman_content_pane

0x43b3,	// (0x00081330) wgtman_heading_pane

0x0384,	// (0x0007d301) bg_heading_pane_cp02

0x43bc,	// (0x00081339) wgtman_heading_pane_g1

0x43c4,	// (0x00081341) wgtman_heading_pane_t1

0x43d2,	// (0x0008134f) scroll_pane_cp036

0x43da,	// (0x00081357) wgtman_list_pane

0x43e2,	// (0x0008135f) wgtman_list_pane_t1_ParamLimits

0x43e2,	// (0x0008135f) wgtman_list_pane_t1

0xa867,	// (0x000877e4) cam4_grid_pane

0xb58c,	// (0x00088509) bg_button_pane_cp015_ParamLimits

0xb59e,	// (0x0008851b) bg_button_pane_cp016_ParamLimits

0xb5b1,	// (0x0008852e) bg_button_pane_cp017_ParamLimits

0xb607,	// (0x00088584) popup_vitu2_query_window_g3_ParamLimits

0xb607,	// (0x00088584) popup_vitu2_query_window_g3

0xb6c2,	// (0x0008863f) popup_vitu2_query_window_t6_ParamLimits

0xb6c2,	// (0x0008863f) popup_vitu2_query_window_t6

0xb6ed,	// (0x0008866a) popup_vitu2_query_window_t7_ParamLimits

0xb6ed,	// (0x0008866a) popup_vitu2_query_window_t7

0x258f,	// (0x0007f50c) cam4_grid_pane_g1

0x2598,	// (0x0007f515) cam4_grid_pane_g2

0x43fc,	// (0x00081379) cam4_grid_pane_g3

0x4405,	// (0x00081382) cam4_grid_pane_g4

0x0003,

0xff5e,	// (0x0008cedb) cam4_grid_pane_g

0x6932,	// (0x000838af) aid_placing_vt_slider_lsc_ParamLimits

0x6c7e,	// (0x00083bfb) vidtel_button_pane_ParamLimits

0x6c7e,	// (0x00083bfb) vidtel_button_pane

0x0384,	// (0x0007d301) bg_button_pane_cp034

0xda68,	// (0x0008a9e5) vidtel_button_pane_g1

0x4410,	// (0x0008138d) vidtel_button_pane_t1

0x288c,	// (0x0007f809) aid_size_vtel_slider_touch

0x296d,	// (0x0007f8ea) scroll_pane_cp039

0x31de,	// (0x0008015b) ncim_query_button_pane_cp01_ParamLimits

0x31fd,	// (0x0008017a) ncimui_query_pane_g1_ParamLimits

0xf0d2,	// (0x0008c04f) input_focus_pane_cp012_ParamLimits

0x3222,	// (0x0008019f) ncim_query_entry_pane_t1_ParamLimits

0x296d,	// (0x0007f8ea) scroll_pane_cp039_ParamLimits
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

} // end of namespace AknLayoutScalable_Abrw_php_apps_qhd_prt_tch_Large

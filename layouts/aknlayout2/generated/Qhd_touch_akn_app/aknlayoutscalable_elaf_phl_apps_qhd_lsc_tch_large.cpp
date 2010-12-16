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

#include "aknlayoutscalable_elaf_phl_apps_qhd_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_phl_apps_qhd_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x00078f4d };

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
0x0f38,	// (0x00079e85) Screen

0x0f44,	// (0x00079e91) application_window

0x0f80,	// (0x00079ecd) area_bottom_pane_ParamLimits

0x0f80,	// (0x00079ecd) area_bottom_pane

0x0fb9,	// (0x00079f06) area_top_pane_ParamLimits

0x0fb9,	// (0x00079f06) area_top_pane

0xa306,	// (0x00083253) call_video_uplink_pane_ParamLimits

0xa306,	// (0x00083253) call_video_uplink_pane

0x1047,	// (0x00079f94) main_pane_ParamLimits

0x1047,	// (0x00079f94) main_pane

0xe4de,	// (0x0008742b) context_pane

0x3c63,	// (0x0007cbb0) navi_pane

0x3c95,	// (0x0007cbe2) popup_cale_events_window_ParamLimits

0x3c95,	// (0x0007cbe2) popup_cale_events_window

0xe4f1,	// (0x0008743e) popup_mup_playback_window

0x3cad,	// (0x0007cbfa) signal_pane

0xaad9,	// (0x00083a26) main_browser_pane

0xad1e,	// (0x00083c6b) main_burst_pane

0x39c3,	// (0x0007c910) main_calc_pane

0xe4d2,	// (0x0008741f) main_cale_day_pane

0x1472,	// (0x0007a3bf) main_cale_month_pane

0xe4d2,	// (0x0008741f) main_cale_week_pane

0xad1e,	// (0x00083c6b) main_call_pane

0xa745,	// (0x00083692) main_call_poc_pane

0xad1e,	// (0x00083c6b) main_camera_pane

0xad1e,	// (0x00083c6b) main_chi_dic_pane

0xb531,	// (0x0008447e) main_clock_pane

0xa745,	// (0x00083692) main_fmradio_pane

0xad1e,	// (0x00083c6b) main_graph_messa_pane

0xa745,	// (0x00083692) main_help_pane

0xaad9,	// (0x00083a26) main_im_pane

0xa9a0,	// (0x000838ed) main_image_pane_ParamLimits

0xa9a0,	// (0x000838ed) main_image_pane

0xa745,	// (0x00083692) main_location2_pane

0xad1e,	// (0x00083c6b) main_location_pane

0xa9a0,	// (0x000838ed) main_messa_pane

0xa745,	// (0x00083692) main_mp2_pane

0xad1e,	// (0x00083c6b) main_mp_pane

0xa745,	// (0x00083692) main_msg_pane

0xa745,	// (0x00083692) main_mup_eq_pane

0xa745,	// (0x00083692) main_mup_pane

0xaad9,	// (0x00083a26) main_notes_pane

0xa745,	// (0x00083692) main_pec_pane

0xa745,	// (0x00083692) main_phob_pane

0xa745,	// (0x00083692) main_pinb_pane

0xa745,	// (0x00083692) main_postcard_pane

0xa745,	// (0x00083692) main_qdial_pane

0xad1e,	// (0x00083c6b) main_skin_pane

0xa745,	// (0x00083692) main_smil2_pane

0xad1e,	// (0x00083c6b) main_smil_pane

0xad1e,	// (0x00083c6b) main_video_pane

0xad1e,	// (0x00083c6b) main_video_tele_pane

0xa9a0,	// (0x000838ed) main_viewer_pane_ParamLimits

0xa9a0,	// (0x000838ed) main_viewer_pane

0xad1e,	// (0x00083c6b) main_vorec_pane

0x3a17,	// (0x0007c964) popup_blid_sat_info_window_ParamLimits

0x3a17,	// (0x0007c964) popup_blid_sat_info_window

0x3a6f,	// (0x0007c9bc) popup_dyc_status_message_window_ParamLimits

0x3a6f,	// (0x0007c9bc) popup_dyc_status_message_window

0x3a89,	// (0x0007c9d6) popup_grid_large_graphic_window_ParamLimits

0x3a89,	// (0x0007c9d6) popup_grid_large_graphic_window

0x3b45,	// (0x0007ca92) popup_loc_request_window_ParamLimits

0x3b45,	// (0x0007ca92) popup_loc_request_window

0x3c3b,	// (0x0007cb88) popup_wml_address_window_ParamLimits

0x3c3b,	// (0x0007cb88) popup_wml_address_window

0x37fd,	// (0x0007c74a) call_muted_g1

0x34f3,	// (0x0007c440) popup_call_audio_conf_window_ParamLimits

0x34f3,	// (0x0007c440) popup_call_audio_conf_window

0x3811,	// (0x0007c75e) popup_call_audio_first_window_ParamLimits

0x3811,	// (0x0007c75e) popup_call_audio_first_window

0x3887,	// (0x0007c7d4) popup_call_audio_in_window_ParamLimits

0x3887,	// (0x0007c7d4) popup_call_audio_in_window

0x38c3,	// (0x0007c810) popup_call_audio_out_window_ParamLimits

0x38c3,	// (0x0007c810) popup_call_audio_out_window

0x38fd,	// (0x0007c84a) popup_call_audio_second_window_ParamLimits

0x38fd,	// (0x0007c84a) popup_call_audio_second_window

0x3953,	// (0x0007c8a0) popup_call_audio_wait_window_ParamLimits

0x3953,	// (0x0007c8a0) popup_call_audio_wait_window

0x3988,	// (0x0007c8d5) popup_number_entry_window_ParamLimits

0x3988,	// (0x0007c8d5) popup_number_entry_window

0xa332,	// (0x0008327f) bg_popup_call_pane_cp05_ParamLimits

0xa332,	// (0x0008327f) bg_popup_call_pane_cp05

0xa352,	// (0x0008329f) popup_number_entry_window_t1

0xa365,	// (0x000832b2) popup_number_entry_window_t2

0xa377,	// (0x000832c4) popup_number_entry_window_t3

0x0003,

0xf01d,	// (0x00087f6a) popup_number_entry_window_t

0xa389,	// (0x000832d6) text_title_cp2

0xa39c,	// (0x000832e9) bg_popup_call_pane_cp_ParamLimits

0xa39c,	// (0x000832e9) bg_popup_call_pane_cp

0xa3aa,	// (0x000832f7) call_thumbnail_pane

0xa3b2,	// (0x000832ff) popup_call_audio_in_window_g1_ParamLimits

0xa3b2,	// (0x000832ff) popup_call_audio_in_window_g1

0xa3be,	// (0x0008330b) popup_call_audio_in_window_g2_ParamLimits

0xa3be,	// (0x0008330b) popup_call_audio_in_window_g2

0xa3ca,	// (0x00083317) popup_call_audio_in_window_g3_ParamLimits

0xa3ca,	// (0x00083317) popup_call_audio_in_window_g3

0x0002,

0xf026,	// (0x00087f73) popup_call_audio_in_window_g_ParamLimits

0xf026,	// (0x00087f73) popup_call_audio_in_window_g

0xa3d6,	// (0x00083323) popup_call_audio_in_window_t1_ParamLimits

0xa3d6,	// (0x00083323) popup_call_audio_in_window_t1

0xa3f2,	// (0x0008333f) popup_call_audio_in_window_t2_ParamLimits

0xa3f2,	// (0x0008333f) popup_call_audio_in_window_t2

0xa40e,	// (0x0008335b) popup_call_audio_in_window_t3_ParamLimits

0xa40e,	// (0x0008335b) popup_call_audio_in_window_t3

0x0002,

0xf02d,	// (0x00087f7a) popup_call_audio_in_window_t_ParamLimits

0xf02d,	// (0x00087f7a) popup_call_audio_in_window_t

0xa39c,	// (0x000832e9) bg_popup_call_pane_cp01_ParamLimits

0xa39c,	// (0x000832e9) bg_popup_call_pane_cp01

0xa3aa,	// (0x000832f7) call_thumbnail_pane_cp02

0xa421,	// (0x0008336e) call_type_pane_cp022

0xa429,	// (0x00083376) popup_call_audio_out_window_g1_ParamLimits

0xa429,	// (0x00083376) popup_call_audio_out_window_g1

0xa43b,	// (0x00083388) popup_call_audio_out_window_g2_ParamLimits

0xa43b,	// (0x00083388) popup_call_audio_out_window_g2

0xa447,	// (0x00083394) popup_call_audio_out_window_g3_ParamLimits

0xa447,	// (0x00083394) popup_call_audio_out_window_g3

0x0002,

0xf034,	// (0x00087f81) popup_call_audio_out_window_g_ParamLimits

0xf034,	// (0x00087f81) popup_call_audio_out_window_g

0xa459,	// (0x000833a6) popup_call_audio_out_window_t1_ParamLimits

0xa459,	// (0x000833a6) popup_call_audio_out_window_t1

0xa471,	// (0x000833be) popup_call_audio_out_window_t2_ParamLimits

0xa471,	// (0x000833be) popup_call_audio_out_window_t2

0x0001,

0xf03b,	// (0x00087f88) popup_call_audio_out_window_t_ParamLimits

0xf03b,	// (0x00087f88) popup_call_audio_out_window_t

0xa486,	// (0x000833d3) bg_popup_call_pane_ParamLimits

0xa486,	// (0x000833d3) bg_popup_call_pane

0x1202,	// (0x0007a14f) call_thumbnail_pane_cp_ParamLimits

0x1202,	// (0x0007a14f) call_thumbnail_pane_cp

0xa50a,	// (0x00083457) call_type_pane_cp01_ParamLimits

0xa50a,	// (0x00083457) call_type_pane_cp01

0xa54e,	// (0x0008349b) popup_call_audio_first_window_g1_ParamLimits

0xa54e,	// (0x0008349b) popup_call_audio_first_window_g1

0xa59a,	// (0x000834e7) popup_call_audio_first_window_g2_ParamLimits

0xa59a,	// (0x000834e7) popup_call_audio_first_window_g2

0x0001,

0xf040,	// (0x00087f8d) popup_call_audio_first_window_g_ParamLimits

0xf040,	// (0x00087f8d) popup_call_audio_first_window_g

0xa5de,	// (0x0008352b) popup_call_audio_first_window_t1_ParamLimits

0xa5de,	// (0x0008352b) popup_call_audio_first_window_t1

0xa68a,	// (0x000835d7) popup_call_audio_first_window_t4_ParamLimits

0xa68a,	// (0x000835d7) popup_call_audio_first_window_t4

0xa716,	// (0x00083663) popup_call_audio_first_window_t5_ParamLimits

0xa716,	// (0x00083663) popup_call_audio_first_window_t5

0x0002,

0xf045,	// (0x00087f92) popup_call_audio_first_window_t_ParamLimits

0xf045,	// (0x00087f92) popup_call_audio_first_window_t

0xa745,	// (0x00083692) bg_popup_call_pane_cp02

0xa74f,	// (0x0008369c) call_type_pane_cp023

0xa757,	// (0x000836a4) popup_call_audio_wait_window_g1

0xa75f,	// (0x000836ac) popup_call_audio_wait_window_g2

0x0001,

0xf04c,	// (0x00087f99) popup_call_audio_wait_window_g

0xa767,	// (0x000836b4) popup_call_audio_wait_window_t3

0xa775,	// (0x000836c2) bg_popup_call_pane_cp03_ParamLimits

0xa775,	// (0x000836c2) bg_popup_call_pane_cp03

0xa7d5,	// (0x00083722) call_thumbnail_pane_cp011_ParamLimits

0xa7d5,	// (0x00083722) call_thumbnail_pane_cp011

0xa7e1,	// (0x0008372e) call_type_pane_cp034_ParamLimits

0xa7e1,	// (0x0008372e) call_type_pane_cp034

0xa81d,	// (0x0008376a) popup_call_audio_second_window_g1_ParamLimits

0xa81d,	// (0x0008376a) popup_call_audio_second_window_g1

0xa859,	// (0x000837a6) popup_call_audio_second_window_g2_ParamLimits

0xa859,	// (0x000837a6) popup_call_audio_second_window_g2

0x0001,

0xf051,	// (0x00087f9e) popup_call_audio_second_window_g_ParamLimits

0xf051,	// (0x00087f9e) popup_call_audio_second_window_g

0xa895,	// (0x000837e2) popup_call_audio_second_window_t1_ParamLimits

0xa895,	// (0x000837e2) popup_call_audio_second_window_t1

0xa916,	// (0x00083863) popup_call_audio_second_window_t2_ParamLimits

0xa916,	// (0x00083863) popup_call_audio_second_window_t2

0xa94c,	// (0x00083899) popup_call_audio_second_window_t3_ParamLimits

0xa94c,	// (0x00083899) popup_call_audio_second_window_t3

0x0002,

0xf056,	// (0x00087fa3) popup_call_audio_second_window_t_ParamLimits

0xf056,	// (0x00087fa3) popup_call_audio_second_window_t

0xa745,	// (0x00083692) bg_popup_call_pane_cp04

0xa982,	// (0x000838cf) list_conf_pane

0xa98a,	// (0x000838d7) popup_call_audio_conf_window_t1

0xa998,	// (0x000838e5) call_thumbnail_pane_g1

0xa9a0,	// (0x000838ed) bg_pinb_pane_ParamLimits

0xa9a0,	// (0x000838ed) bg_pinb_pane

0xa9ae,	// (0x000838fb) find_pinb_pane

0xa9a0,	// (0x000838ed) listscroll_pinb_pane_ParamLimits

0xa9a0,	// (0x000838ed) listscroll_pinb_pane

0xa9b8,	// (0x00083905) pinb_bg_pane_g1

0xa9b8,	// (0x00083905) pinb_bg_pane_g2

0xa9b8,	// (0x00083905) pinb_bg_pane_g3

0xa9b8,	// (0x00083905) pinb_bg_pane_g4

0xa9b8,	// (0x00083905) pinb_bg_pane_g5

0xa9b8,	// (0x00083905) pinb_bg_pane_g6

0xa9b8,	// (0x00083905) pinb_bg_pane_g7

0xa9b8,	// (0x00083905) pinb_bg_pane_g8

0xa9b8,	// (0x00083905) pinb_bg_pane_g9

0xa9b8,	// (0x00083905) pinb_bg_pane_g10

0x0009,

0xf05d,	// (0x00087faa) pinb_bg_pane_g

0xa2ad,	// (0x000831fa) grid_pinb_pane

0xa2ad,	// (0x000831fa) list_pinb_pane

0xa324,	// (0x00083271) scroll_pane_cp01_ParamLimits

0xa324,	// (0x00083271) scroll_pane_cp01

0xa9c2,	// (0x0008390f) find_pinb_pane_g1_ParamLimits

0xa9c2,	// (0x0008390f) find_pinb_pane_g1

0xa9da,	// (0x00083927) find_pinb_pane_t1

0xa9ec,	// (0x00083939) find_pinb_pane_t2

0x0001,

0xf077,	// (0x00087fc4) find_pinb_pane_t

0xaa01,	// (0x0008394e) input_focus_pane_cp01_ParamLimits

0xaa01,	// (0x0008394e) input_focus_pane_cp01

0xaa0d,	// (0x0008395a) cell_pinb_pane_ParamLimits

0xaa0d,	// (0x0008395a) cell_pinb_pane

0xaa1b,	// (0x00083968) cell_pinb_pane_g1_ParamLimits

0xaa1b,	// (0x00083968) cell_pinb_pane_g1

0xaa29,	// (0x00083976) cell_pinb_pane_g2_ParamLimits

0xaa29,	// (0x00083976) cell_pinb_pane_g2

0xaa29,	// (0x00083976) cell_pinb_pane_g3_ParamLimits

0xaa29,	// (0x00083976) cell_pinb_pane_g3

0x0002,

0xf07c,	// (0x00087fc9) cell_pinb_pane_g_ParamLimits

0xf07c,	// (0x00087fc9) cell_pinb_pane_g

0xa745,	// (0x00083692) grid_highlight_pane_cp01

0xaa0d,	// (0x0008395a) list_pinb_item_pane_ParamLimits

0xaa0d,	// (0x0008395a) list_pinb_item_pane

0xa2ad,	// (0x000831fa) list_highlight_pane_cp02

0xaa37,	// (0x00083984) list_pinb_item_pane_g1_ParamLimits

0xaa37,	// (0x00083984) list_pinb_item_pane_g1

0xaa29,	// (0x00083976) list_pinb_item_pane_g2_ParamLimits

0xaa29,	// (0x00083976) list_pinb_item_pane_g2

0xaa1b,	// (0x00083968) list_pinb_item_pane_g3_ParamLimits

0xaa1b,	// (0x00083968) list_pinb_item_pane_g3

0xaa29,	// (0x00083976) list_pinb_item_pane_g4_ParamLimits

0xaa29,	// (0x00083976) list_pinb_item_pane_g4

0x0003,

0xf083,	// (0x00087fd0) list_pinb_item_pane_g_ParamLimits

0xf083,	// (0x00087fd0) list_pinb_item_pane_g

0xaa45,	// (0x00083992) list_pinb_item_pane_t1_ParamLimits

0xaa45,	// (0x00083992) list_pinb_item_pane_t1

0x1244,	// (0x0007a191) calc_display_pane

0x1269,	// (0x0007a1b6) calc_paper_pane

0x128c,	// (0x0007a1d9) grid_calc_pane

0xa2ad,	// (0x000831fa) bg_list_pane_cp01

0xaa61,	// (0x000839ae) clock_g1

0xaa61,	// (0x000839ae) clock_g2

0x0001,

0xf08c,	// (0x00087fd9) clock_g

0xaa6b,	// (0x000839b8) clock_t1_ParamLimits

0xaa6b,	// (0x000839b8) clock_t1

0xaa7f,	// (0x000839cc) clock_t2_ParamLimits

0xaa7f,	// (0x000839cc) clock_t2

0xaa7f,	// (0x000839cc) clock_t3_ParamLimits

0xaa7f,	// (0x000839cc) clock_t3

0xaa7f,	// (0x000839cc) clock_t4_ParamLimits

0xaa7f,	// (0x000839cc) clock_t4

0xaa6b,	// (0x000839b8) clock_t5_ParamLimits

0xaa6b,	// (0x000839b8) clock_t5

0xaa7f,	// (0x000839cc) clock_t6_ParamLimits

0xaa7f,	// (0x000839cc) clock_t6

0xaa7f,	// (0x000839cc) clock_t7_ParamLimits

0xaa7f,	// (0x000839cc) clock_t7

0xaa7f,	// (0x000839cc) clock_t8_ParamLimits

0xaa7f,	// (0x000839cc) clock_t8

0xaa7f,	// (0x000839cc) clock_t9_ParamLimits

0xaa7f,	// (0x000839cc) clock_t9

0x0008,

0xf091,	// (0x00087fde) clock_t_ParamLimits

0xf091,	// (0x00087fde) clock_t

0xa2ad,	// (0x000831fa) popup_clock_analogue_window_cp02

0xa2ad,	// (0x000831fa) popup_clock_digital_window_cp01

0xa745,	// (0x00083692) listscroll_help_pane

0xa745,	// (0x00083692) phob_pre_status_pane

0xaa93,	// (0x000839e0) grid_qdial_pane

0xa9a0,	// (0x000838ed) listscroll_mce_pane

0xa9a0,	// (0x000838ed) bg_notes_pane

0xaa9d,	// (0x000839ea) list_notes_pane

0x12ba,	// (0x0007a207) scroll_pane_cp06

0xaaab,	// (0x000839f8) bg_calc_paper_pane

0xaabf,	// (0x00083a0c) list_calc_pane

0xaad9,	// (0x00083a26) bg_calc_display_pane

0x12ce,	// (0x0007a21b) calc_display_pane_t1

0x12e3,	// (0x0007a230) calc_display_pane_t2

0xaae5,	// (0x00083a32) calc_display_pane_t3

0x0002,

0xf0a4,	// (0x00087ff1) calc_display_pane_t

0x12f8,	// (0x0007a245) cell_calc_pane_ParamLimits

0x12f8,	// (0x0007a245) cell_calc_pane

0xaaf7,	// (0x00083a44) bg_calc_paper_pane_g1

0xab03,	// (0x00083a50) bg_calc_paper_pane_g2

0xab0f,	// (0x00083a5c) bg_calc_paper_pane_g3

0xab1b,	// (0x00083a68) bg_calc_paper_pane_g4

0xab27,	// (0x00083a74) bg_calc_paper_pane_g5

0x132d,	// (0x0007a27a) bg_calc_paper_pane_g6

0x133c,	// (0x0007a289) bg_calc_paper_pane_g7

0x134b,	// (0x0007a298) bg_calc_paper_pane_g8

0x0007,

0xf0ab,	// (0x00087ff8) bg_calc_paper_pane_g

0x135e,	// (0x0007a2ab) calc_bg_paper_pane_g9

0x1371,	// (0x0007a2be) list_calc_item_pane_ParamLimits

0x1371,	// (0x0007a2be) list_calc_item_pane

0xab33,	// (0x00083a80) list_calc_item_pane_g1

0xab40,	// (0x00083a8d) list_calc_item_pane_t1_ParamLimits

0xab40,	// (0x00083a8d) list_calc_item_pane_t1

0x1389,	// (0x0007a2d6) list_calc_item_pane_t2_ParamLimits

0x1389,	// (0x0007a2d6) list_calc_item_pane_t2

0x0001,

0xf0bc,	// (0x00088009) list_calc_item_pane_t_ParamLimits

0xf0bc,	// (0x00088009) list_calc_item_pane_t

0xa9b8,	// (0x00083905) cell_calc_pane_g1

0xab52,	// (0x00083a9f) grid_highlight_pane_cp02

0xab74,	// (0x00083ac1) bg_calc_display_pane_g1

0x13bb,	// (0x0007a308) bg_calc_display_pane_g2

0x13c5,	// (0x0007a312) bg_calc_display_pane_g3

0x0002,

0xf0c6,	// (0x00088013) bg_calc_display_pane_g

0x13ce,	// (0x0007a31b) cell_qdial_pane_ParamLimits

0x13ce,	// (0x0007a31b) cell_qdial_pane

0x13e2,	// (0x0007a32f) cell_qdial_pane_g1_ParamLimits

0x13e2,	// (0x0007a32f) cell_qdial_pane_g1

0x13f8,	// (0x0007a345) cell_qdial_pane_g2_ParamLimits

0x13f8,	// (0x0007a345) cell_qdial_pane_g2

0xab7d,	// (0x00083aca) cell_qdial_pane_g3_ParamLimits

0xab7d,	// (0x00083aca) cell_qdial_pane_g3

0x0003,

0xf0cd,	// (0x0008801a) cell_qdial_pane_g_ParamLimits

0xf0cd,	// (0x0008801a) cell_qdial_pane_g

0x141f,	// (0x0007a36c) cell_qdial_pane_t1_ParamLimits

0x141f,	// (0x0007a36c) cell_qdial_pane_t1

0x1437,	// (0x0007a384) cell_qdial_pane_t2_ParamLimits

0x1437,	// (0x0007a384) cell_qdial_pane_t2

0x144a,	// (0x0007a397) cell_qdial_pane_t3_ParamLimits

0x144a,	// (0x0007a397) cell_qdial_pane_t3

0x0002,

0xf0d6,	// (0x00088023) cell_qdial_pane_t_ParamLimits

0xf0d6,	// (0x00088023) cell_qdial_pane_t

0xa745,	// (0x00083692) grid_highlight_pane_cp04

0xab89,	// (0x00083ad6) thumbnail_qdial_pane_ParamLimits

0xab89,	// (0x00083ad6) thumbnail_qdial_pane

0xabe5,	// (0x00083b32) list_help_pane

0xabee,	// (0x00083b3b) scroll_pane_cp02

0xabf7,	// (0x00083b44) help_list_pane_t1_ParamLimits

0xabf7,	// (0x00083b44) help_list_pane_t1

0xac15,	// (0x00083b62) bg_notes_pane_g2

0xac1d,	// (0x00083b6a) bg_notes_pane_g3

0xac25,	// (0x00083b72) notes_bg_pane_g1

0xac2d,	// (0x00083b7a) notes_bg_pane_g4

0xac35,	// (0x00083b82) notes_bg_pane_g5

0xac3d,	// (0x00083b8a) notes_bg_pane_g6

0xac45,	// (0x00083b92) notes_bg_pane_g7

0xac4d,	// (0x00083b9a) notes_bg_pane_g8

0xac55,	// (0x00083ba2) notes_bg_pane_g9

0x0006,

0xf0f4,	// (0x00088041) notes_bg_pane_g

0x145d,	// (0x0007a3aa) list_notes_text_pane_ParamLimits

0x145d,	// (0x0007a3aa) list_notes_text_pane

0xac5d,	// (0x00083baa) list_notes_text_pane_g1

0x0977,	// (0x000798c4) list_notes_text_pane_t1

0x1472,	// (0x0007a3bf) listscroll_cale_week_pane

0x149e,	// (0x0007a3eb) bg_cale_heading_pane

0xac80,	// (0x00083bcd) bg_cale_pane_cp01

0x14b6,	// (0x0007a403) cale_week_corner_pane

0x14d5,	// (0x0007a422) cale_week_day_heading_pane

0x14f2,	// (0x0007a43f) cale_week_scroll_pane_g1

0x1505,	// (0x0007a452) cale_week_scroll_pane_g2

0x151d,	// (0x0007a46a) cale_week_scroll_pane_g3

0x1535,	// (0x0007a482) cale_week_scroll_pane_g4

0x154d,	// (0x0007a49a) cale_week_scroll_pane_g5

0x156d,	// (0x0007a4ba) cale_week_scroll_pane_g6

0x158d,	// (0x0007a4da) cale_week_scroll_pane_g7

0x15ad,	// (0x0007a4fa) cale_week_scroll_pane_g8

0x15d1,	// (0x0007a51e) cale_week_scroll_pane_g9

0x15e9,	// (0x0007a536) cale_week_scroll_pane_g10

0x1601,	// (0x0007a54e) cale_week_scroll_pane_g11

0x1619,	// (0x0007a566) cale_week_scroll_pane_g12

0x1631,	// (0x0007a57e) cale_week_scroll_pane_g13

0x1631,	// (0x0007a57e) cale_week_scroll_pane_g14

0x1631,	// (0x0007a57e) cale_week_scroll_pane_g15

0x000f,

0xf103,	// (0x00088050) cale_week_scroll_pane_g

0x166d,	// (0x0007a5ba) cale_week_time_pane

0x1691,	// (0x0007a5de) grid_cale_week_pane

0xacaf,	// (0x00083bfc) scroll_pane_cp08

0x16b7,	// (0x0007a604) cell_cale_week_pane_ParamLimits

0x16b7,	// (0x0007a604) cell_cale_week_pane

0x1745,	// (0x0007a692) cale_week_day_heading_pane_t1

0x176f,	// (0x0007a6bc) cale_week_day_heading_pane_t2

0x179e,	// (0x0007a6eb) cale_week_day_heading_pane_t3

0x17cd,	// (0x0007a71a) cale_week_day_heading_pane_t4

0x17fc,	// (0x0007a749) cale_week_day_heading_pane_t5

0x1833,	// (0x0007a780) cale_week_day_heading_pane_t6

0x186a,	// (0x0007a7b7) cale_week_day_heading_pane_t7

0x0006,

0xf124,	// (0x00088071) cale_week_day_heading_pane_t

0xaccc,	// (0x00083c19) bg_cale_side_pane

0x1894,	// (0x0007a7e1) cale_week_time_pane_t1

0x18ae,	// (0x0007a7fb) cale_week_time_pane_t2

0x18c8,	// (0x0007a815) cale_week_time_pane_t3

0x18e2,	// (0x0007a82f) cale_week_time_pane_t4

0x18fc,	// (0x0007a849) cale_week_time_pane_t5

0x1916,	// (0x0007a863) cale_week_time_pane_t6

0x1930,	// (0x0007a87d) cale_week_time_pane_t7

0x194a,	// (0x0007a897) cale_week_time_pane_t8

0x0007,

0xf133,	// (0x00088080) cale_week_time_pane_t

0x1964,	// (0x0007a8b1) cell_cale_week_pane_g2

0x1983,	// (0x0007a8d0) cell_cale_week_pane_g3_ParamLimits

0x1983,	// (0x0007a8d0) cell_cale_week_pane_g3

0xacda,	// (0x00083c27) grid_highlight_pane_cp07

0xace2,	// (0x00083c2f) listscroll_gms_pane

0xacec,	// (0x00083c39) grid_gms_pane

0xacf5,	// (0x00083c42) listscroll_gms_pane_g1

0xacfd,	// (0x00083c4a) listscroll_gms_pane_g2

0x0001,

0xf144,	// (0x00088091) listscroll_gms_pane_g

0x199b,	// (0x0007a8e8) scroll_pane_cp010

0x19a6,	// (0x0007a8f3) cell_gms_pane_ParamLimits

0x19a6,	// (0x0007a8f3) cell_gms_pane

0x19b9,	// (0x0007a906) cell_gms_pane_g1

0xad05,	// (0x00083c52) cell_gms_pane_g2

0xac5d,	// (0x00083baa) cell_gms_pane_g3

0xad0d,	// (0x00083c5a) cell_gms_pane_g4

0x0003,

0xf149,	// (0x00088096) cell_gms_pane_g

0xad16,	// (0x00083c63) grid_highlight_pane_cp09

0x3785,	// (0x0007c6d2) phob_pre_status_pane_g1

0x378d,	// (0x0007c6da) phob_pre_status_pane_g2

0x3795,	// (0x0007c6e2) phob_pre_status_pane_g3

0x379d,	// (0x0007c6ea) phob_pre_status_pane_g4

0x0004,

0xf4e5,	// (0x00088432) phob_pre_status_pane_g

0x37ad,	// (0x0007c6fa) phob_pre_status_pane_t1

0x37bb,	// (0x0007c708) phob_pre_status_pane_t2

0x37cb,	// (0x0007c718) phob_pre_status_pane_t3

0x0002,

0xf4f0,	// (0x0008843d) phob_pre_status_pane_t

0xad1e,	// (0x00083c6b) bg_list_pane_cp05

0x19c9,	// (0x0007a916) grid_vorec_pane

0x19d1,	// (0x0007a91e) vorec_t1

0x19df,	// (0x0007a92c) vorec_t2

0x19ed,	// (0x0007a93a) vorec_t3

0x19fb,	// (0x0007a948) vorec_t4

0xd6db,	// (0x00086628) vorec_t5

0x9448,	// (0x00082395) vorec_t6

0x0004,

0xf152,	// (0x0008809f) vorec_t

0x9456,	// (0x000823a3) wait_bar_pane_cp01

0x1a17,	// (0x0007a964) cell_vorec_pane_ParamLimits

0x1a17,	// (0x0007a964) cell_vorec_pane

0xad26,	// (0x00083c73) cell_vorec_pane_g1

0xa745,	// (0x00083692) grid_highlight_pane_cp05

0xa324,	// (0x00083271) cams_zoom_pane

0xa324,	// (0x00083271) image_vga_pane

0xaa1b,	// (0x00083968) main_camera_pane_g1

0xaa1b,	// (0x00083968) main_camera_pane_g2

0xaa1b,	// (0x00083968) main_camera_pane_g3

0xaa1b,	// (0x00083968) main_camera_pane_g4

0xaa1b,	// (0x00083968) main_camera_pane_g5

0xaa1b,	// (0x00083968) main_camera_pane_g6

0xaa1b,	// (0x00083968) main_camera_pane_g7

0x0007,

0xf15d,	// (0x000880aa) main_camera_pane_g

0xaa6b,	// (0x000839b8) main_camera_pane_t1

0xaa6b,	// (0x000839b8) main_camera_pane_t2

0x0001,

0xf16e,	// (0x000880bb) main_camera_pane_t

0x1a3e,	// (0x0007a98b) cams_zoom_pane_cp_ParamLimits

0x1a3e,	// (0x0007a98b) cams_zoom_pane_cp

0x1a72,	// (0x0007a9bf) image_cif_pane_ParamLimits

0x1a72,	// (0x0007a9bf) image_cif_pane

0xa2ad,	// (0x000831fa) image_subqcif_pane

0x1a84,	// (0x0007a9d1) main_video_pane_g1_ParamLimits

0x1a84,	// (0x0007a9d1) main_video_pane_g1

0x1ab2,	// (0x0007a9ff) main_video_pane_g2_ParamLimits

0x1ab2,	// (0x0007a9ff) main_video_pane_g2

0x1aec,	// (0x0007aa39) main_video_pane_g3_ParamLimits

0x1aec,	// (0x0007aa39) main_video_pane_g3

0x1aec,	// (0x0007aa39) main_video_pane_g4_ParamLimits

0x1aec,	// (0x0007aa39) main_video_pane_g4

0x1b20,	// (0x0007aa6d) main_video_pane_g5_ParamLimits

0x1b20,	// (0x0007aa6d) main_video_pane_g5

0xad30,	// (0x00083c7d) main_video_pane_g6_ParamLimits

0xad30,	// (0x00083c7d) main_video_pane_g6

0x0006,

0xf173,	// (0x000880c0) main_video_pane_g_ParamLimits

0xf173,	// (0x000880c0) main_video_pane_g

0x1b3c,	// (0x0007aa89) main_video_pane_t1_ParamLimits

0x1b3c,	// (0x0007aa89) main_video_pane_t1

0xaa61,	// (0x000839ae) cams_zoom_pane_g1

0xaa61,	// (0x000839ae) cams_zoom_pane_g2

0xaa61,	// (0x000839ae) cams_zoom_pane_g3

0xaa61,	// (0x000839ae) cams_zoom_pane_g4

0x0003,

0xf182,	// (0x000880cf) cams_zoom_pane_g

0xa324,	// (0x00083271) grid_cams_pane

0xa324,	// (0x00083271) linegrid_cams_pane

0x1b80,	// (0x0007aacd) cell_cams_pane_ParamLimits

0x1b80,	// (0x0007aacd) cell_cams_pane

0xa2ad,	// (0x000831fa) cams_burst_image_pane

0xaa61,	// (0x000839ae) cell_cams_pane_g1

0xa2ad,	// (0x000831fa) grid_highlight_pane_cp03

0xa9b8,	// (0x00083905) mp_bg_pane_g1

0xa2ad,	// (0x000831fa) bg_list_pane_cp03

0xa2ad,	// (0x000831fa) bg_mp_pane

0xa2ad,	// (0x000831fa) grid_mp_pane

0xaa61,	// (0x000839ae) media_player_g1

0xb253,	// (0x000841a0) media_player_t1

0xb253,	// (0x000841a0) media_player_t2

0xb253,	// (0x000841a0) media_player_t3

0xb253,	// (0x000841a0) media_player_t4

0xb253,	// (0x000841a0) media_player_t5

0xb253,	// (0x000841a0) media_player_t6

0xb253,	// (0x000841a0) media_player_t7

0x0006,

0xf4cf,	// (0x0008841c) media_player_t

0xa2ad,	// (0x000831fa) wait_bar_pane_cp02

0xf4b4,	// (0x00088401) main_usb_pane_t

0xb531,	// (0x0008447e) cell_mp_pane

0xa9b8,	// (0x00083905) cell_mp_pane_g1

0xa745,	// (0x00083692) grid_highlight_pane_cp06

0xad4a,	// (0x00083c97) grid_skin_colour_pane

0xad52,	// (0x00083c9f) list_highlight_pane_cp03

0x1b95,	// (0x0007aae2) skin_g1

0xad5a,	// (0x00083ca7) skin_t1

0xad69,	// (0x00083cb6) skin_t2

0x0001,

0xf1b0,	// (0x000880fd) skin_t

0x1b9d,	// (0x0007aaea) cell_skin_colour_pane_ParamLimits

0x1b9d,	// (0x0007aaea) cell_skin_colour_pane

0xad77,	// (0x00083cc4) cell_skin_colour_pane_g1

0x1c16,	// (0x0007ab63) call_video_g1_ParamLimits

0x1c16,	// (0x0007ab63) call_video_g1

0x1c32,	// (0x0007ab7f) call_video_g2_ParamLimits

0x1c32,	// (0x0007ab7f) call_video_g2

0x0001,

0xf1b5,	// (0x00088102) call_video_g_ParamLimits

0xf1b5,	// (0x00088102) call_video_g

0x1c84,	// (0x0007abd1) call_video_uplink_pane_cp1_ParamLimits

0x1c84,	// (0x0007abd1) call_video_uplink_pane_cp1

0xad89,	// (0x00083cd6) call_video_uplink_pane_cp2

0x1d23,	// (0x0007ac70) video_down_crop_pane_ParamLimits

0x1d23,	// (0x0007ac70) video_down_crop_pane

0x1e1a,	// (0x0007ad67) video_down_pane_ParamLimits

0x1e1a,	// (0x0007ad67) video_down_pane

0xad91,	// (0x00083cde) video_down_subqcif_pane_ParamLimits

0xad91,	// (0x00083cde) video_down_subqcif_pane

0xada9,	// (0x00083cf6) video_down_subqcif_pane_cp_ParamLimits

0xada9,	// (0x00083cf6) video_down_subqcif_pane_cp

0xadcf,	// (0x00083d1c) im_reading_pane_ParamLimits

0xadcf,	// (0x00083d1c) im_reading_pane

0x1f2a,	// (0x0007ae77) im_writing_pane_ParamLimits

0x1f2a,	// (0x0007ae77) im_writing_pane

0x1f40,	// (0x0007ae8d) im_reading_pane_t1

0xade9,	// (0x00083d36) list_im_pane

0xadfa,	// (0x00083d47) scroll_pane_cp07

0x1f79,	// (0x0007aec6) im_writing_pane_t1_ParamLimits

0x1f79,	// (0x0007aec6) im_writing_pane_t1

0xae13,	// (0x00083d60) im_writing_pane_t2_ParamLimits

0xae13,	// (0x00083d60) im_writing_pane_t2

0x0001,

0xf1bf,	// (0x0008810c) im_writing_pane_t_ParamLimits

0xf1bf,	// (0x0008810c) im_writing_pane_t

0xa745,	// (0x00083692) input_focus_pane_cp04

0xa745,	// (0x00083692) input_focus_pane_cp05

0x1f8e,	// (0x0007aedb) list_im_single_pane_ParamLimits

0x1f8e,	// (0x0007aedb) list_im_single_pane

0x1fa2,	// (0x0007aeef) list_single_im_pane_t1

0xad1e,	// (0x00083c6b) blid_accuracy_pane

0xad1e,	// (0x00083c6b) blid_compass_pane

0xe48a,	// (0x000873d7) main_location_t1

0xe48a,	// (0x000873d7) main_location_t2

0xe48a,	// (0x000873d7) main_location_t3

0x0002,

0xf4de,	// (0x0008842b) main_location_t

0xa745,	// (0x00083692) aid_levels_location

0xa9b8,	// (0x00083905) blid_accuracy_pane_g1

0xa9b8,	// (0x00083905) blid_accuracy_pane_g2

0x0001,

0xf20e,	// (0x0008815b) blid_accuracy_pane_g

0xae5b,	// (0x00083da8) wml_content_pane

0xae99,	// (0x00083de6) wml_button_pane_ParamLimits

0xae99,	// (0x00083de6) wml_button_pane

0x1fb1,	// (0x0007aefe) wml_list_single_large_pane_ParamLimits

0x1fb1,	// (0x0007aefe) wml_list_single_large_pane

0x1fc6,	// (0x0007af13) wml_list_single_medium_pane_ParamLimits

0x1fc6,	// (0x0007af13) wml_list_single_medium_pane

0x1fdc,	// (0x0007af29) wml_list_single_small_pane_ParamLimits

0x1fdc,	// (0x0007af29) wml_list_single_small_pane

0xaead,	// (0x00083dfa) wml_selection_box_pane_ParamLimits

0xaead,	// (0x00083dfa) wml_selection_box_pane

0xaec0,	// (0x00083e0d) wml_list_single_pane_t1

0xaecf,	// (0x00083e1c) wml_list_single_medium_pane_t1

0xaede,	// (0x00083e2b) wml_list_single_large_pane_t1

0xaeed,	// (0x00083e3a) input_focus_pane_cp02_ParamLimits

0xaeed,	// (0x00083e3a) input_focus_pane_cp02

0xaf00,	// (0x00083e4d) wml_selection_box_pane_g1

0xaf09,	// (0x00083e56) wml_selection_box_pane_t1_ParamLimits

0xaf09,	// (0x00083e56) wml_selection_box_pane_t1

0xa9a0,	// (0x000838ed) bg_wml_button_pane_ParamLimits

0xa9a0,	// (0x000838ed) bg_wml_button_pane

0xaf21,	// (0x00083e6e) wml_button_pane_g1

0xaf29,	// (0x00083e76) wml_button_pane_t1

0xaf21,	// (0x00083e6e) wml_button_bg_pane_g1

0xaf39,	// (0x00083e86) wml_button_bg_pane_g2

0xaf41,	// (0x00083e8e) wml_button_bg_pane_g3

0xaf49,	// (0x00083e96) wml_button_bg_pane_g4

0xaf51,	// (0x00083e9e) wml_button_bg_pane_g5

0xaf59,	// (0x00083ea6) wml_button_bg_pane_g6

0xaf61,	// (0x00083eae) wml_button_bg_pane_g7

0xaf69,	// (0x00083eb6) wml_button_bg_pane_g8

0xaf71,	// (0x00083ebe) wml_button_bg_pane_g9

0x0008,

0xf1c4,	// (0x00088111) wml_button_bg_pane_g

0x1ff4,	// (0x0007af41) bg_list_pane_cp02

0xaf79,	// (0x00083ec6) mce_header_pane_ParamLimits

0xaf79,	// (0x00083ec6) mce_header_pane

0xaf8f,	// (0x00083edc) mce_icon_pane

0xaf8f,	// (0x00083edc) mce_image_pane

0xaf98,	// (0x00083ee5) mce_text_pane_ParamLimits

0xaf98,	// (0x00083ee5) mce_text_pane

0x1ffc,	// (0x0007af49) scroll_pane_cp03

0xae91,	// (0x00083dde) scroll_pane_cp04

0xafab,	// (0x00083ef8) scroll_pane_cp05_ParamLimits

0xafab,	// (0x00083ef8) scroll_pane_cp05

0x2006,	// (0x0007af53) mce_header_field_pane_ParamLimits

0x2006,	// (0x0007af53) mce_header_field_pane

0x201d,	// (0x0007af6a) mce_header_field_pane_2_ParamLimits

0x201d,	// (0x0007af6a) mce_header_field_pane_2

0x2033,	// (0x0007af80) mce_header_field_pane_3

0x203b,	// (0x0007af88) list_single_mce_message_pane_ParamLimits

0x203b,	// (0x0007af88) list_single_mce_message_pane

0x2050,	// (0x0007af9d) list_single_mce_smart_pane_ParamLimits

0x2050,	// (0x0007af9d) list_single_mce_smart_pane

0xafb7,	// (0x00083f04) input_focus_pane_cp03

0xafc0,	// (0x00083f0d) list_header_data_pane

0x2070,	// (0x0007afbd) mce_header_field_pane_t1

0x2080,	// (0x0007afcd) list_single_mce_header_pane_ParamLimits

0x2080,	// (0x0007afcd) list_single_mce_header_pane

0xafc8,	// (0x00083f15) list_single_mce_header_pane_t1

0xafd7,	// (0x00083f24) list_single_mce_message_pane_g1

0xafdf,	// (0x00083f2c) list_single_mce_message_pane_t1

0x20ba,	// (0x0007b007) bg_cale_heading_pane_cp01_ParamLimits

0x20ba,	// (0x0007b007) bg_cale_heading_pane_cp01

0xafed,	// (0x00083f3a) bg_cale_pane_cp02_ParamLimits

0xafed,	// (0x00083f3a) bg_cale_pane_cp02

0x20f4,	// (0x0007b041) cale_month_corner_pane

0x2113,	// (0x0007b060) cale_month_day_heading_pane_ParamLimits

0x2113,	// (0x0007b060) cale_month_day_heading_pane

0x2165,	// (0x0007b0b2) cale_month_pane_g1_ParamLimits

0x2165,	// (0x0007b0b2) cale_month_pane_g1

0x2194,	// (0x0007b0e1) cale_month_pane_g2_ParamLimits

0x2194,	// (0x0007b0e1) cale_month_pane_g2

0x21c4,	// (0x0007b111) cale_month_pane_g3_ParamLimits

0x21c4,	// (0x0007b111) cale_month_pane_g3

0x2200,	// (0x0007b14d) cale_month_pane_g4_ParamLimits

0x2200,	// (0x0007b14d) cale_month_pane_g4

0x223c,	// (0x0007b189) cale_month_pane_g5_ParamLimits

0x223c,	// (0x0007b189) cale_month_pane_g5

0x2284,	// (0x0007b1d1) cale_month_pane_g6_ParamLimits

0x2284,	// (0x0007b1d1) cale_month_pane_g6

0x22d0,	// (0x0007b21d) cale_month_pane_g7_ParamLimits

0x22d0,	// (0x0007b21d) cale_month_pane_g7

0x2324,	// (0x0007b271) cale_month_pane_g8_ParamLimits

0x2324,	// (0x0007b271) cale_month_pane_g8

0x2378,	// (0x0007b2c5) cale_month_pane_g9_ParamLimits

0x2378,	// (0x0007b2c5) cale_month_pane_g9

0x23ca,	// (0x0007b317) cale_month_pane_g10_ParamLimits

0x23ca,	// (0x0007b317) cale_month_pane_g10

0x241c,	// (0x0007b369) cale_month_pane_g11_ParamLimits

0x241c,	// (0x0007b369) cale_month_pane_g11

0x246e,	// (0x0007b3bb) cale_month_pane_g12_ParamLimits

0x246e,	// (0x0007b3bb) cale_month_pane_g12

0x24c0,	// (0x0007b40d) cale_month_pane_g13_ParamLimits

0x24c0,	// (0x0007b40d) cale_month_pane_g13

0x000c,

0xf1d7,	// (0x00088124) cale_month_pane_g_ParamLimits

0xf1d7,	// (0x00088124) cale_month_pane_g

0x2512,	// (0x0007b45f) cale_month_week_pane

0x2536,	// (0x0007b483) grid_cale_month_pane_ParamLimits

0x2536,	// (0x0007b483) grid_cale_month_pane

0x257f,	// (0x0007b4cc) cale_month_day_heading_pane_t1

0x2605,	// (0x0007b552) cale_month_day_heading_pane_t2

0x267e,	// (0x0007b5cb) cale_month_day_heading_pane_t3

0x26f7,	// (0x0007b644) cale_month_day_heading_pane_t4

0x2778,	// (0x0007b6c5) cale_month_day_heading_pane_t5

0x2801,	// (0x0007b74e) cale_month_day_heading_pane_t6

0x288a,	// (0x0007b7d7) cale_month_day_heading_pane_t7

0x0006,

0xf1f2,	// (0x0008813f) cale_month_day_heading_pane_t

0xaccc,	// (0x00083c19) bg_cale_side_pane_cp01

0x291b,	// (0x0007b868) cale_month_week_pane_t1

0x2934,	// (0x0007b881) cale_month_week_pane_t2

0x294d,	// (0x0007b89a) cale_month_week_pane_t3

0x2966,	// (0x0007b8b3) cale_month_week_pane_t4

0x297f,	// (0x0007b8cc) cale_month_week_pane_t5

0x2998,	// (0x0007b8e5) cale_month_week_pane_t6

0x0005,

0xf201,	// (0x0008814e) cale_month_week_pane_t

0x29b1,	// (0x0007b8fe) cell_cale_month_pane_ParamLimits

0x29b1,	// (0x0007b8fe) cell_cale_month_pane

0xb02c,	// (0x00083f79) cell_cale_month_pane_g1

0x2adf,	// (0x0007ba2c) cell_cale_month_pane_t1_ParamLimits

0x2adf,	// (0x0007ba2c) cell_cale_month_pane_t1

0xacda,	// (0x00083c27) grid_highlight_pane_cp08

0xa9b8,	// (0x00083905) main_smil_g1

0x2b0b,	// (0x0007ba58) smil_status_pane

0xb038,	// (0x00083f85) smil_text_pane

0xac4d,	// (0x00083b9a) bg_popup_call3_rect_pane_g8

0xac55,	// (0x00083ba2) bg_popup_call3_rect_pane_g9

0x0008,

0xf213,	// (0x00088160) bg_popup_call3_rect_pane_g

0xe553,	// (0x000874a0) smil_status_volume_pane_g1

0xb042,	// (0x00083f8f) smil_status_pane_t1

0xb8aa,	// (0x000847f7) volume_smil_pane

0xb059,	// (0x00083fa6) list_smil_text_pane

0x2b1e,	// (0x0007ba6b) scroll_pane_cp011

0x2b29,	// (0x0007ba76) smil_text_list_pane_t1_ParamLimits

0x2b29,	// (0x0007ba76) smil_text_list_pane_t1

0xb063,	// (0x00083fb0) aid_volume_smil_ParamLimits

0xb063,	// (0x00083fb0) aid_volume_smil

0xa9b8,	// (0x00083905) smil_volume_pane_g1

0xa9b8,	// (0x00083905) smil_volume_pane_g2

0x0001,

0xf20e,	// (0x0008815b) smil_volume_pane_g

0x1472,	// (0x0007a3bf) listscroll_cale_day_pane

0xb085,	// (0x00083fd2) bg_cale_pane

0xb09d,	// (0x00083fea) list_cale_pane

0xb0c0,	// (0x0008400d) scroll_pane_cp09

0xac25,	// (0x00083b72) cale_bg_pane_g1

0xac15,	// (0x00083b62) cale_bg_pane_g2

0xac1d,	// (0x00083b6a) cale_bg_pane_g3

0xac2d,	// (0x00083b7a) cale_bg_pane_g4

0xac35,	// (0x00083b82) cale_bg_pane_g5

0xac3d,	// (0x00083b8a) cale_bg_pane_g6

0xac45,	// (0x00083b92) cale_bg_pane_g7

0xac4d,	// (0x00083b9a) cale_bg_pane_g8

0xac55,	// (0x00083ba2) cale_bg_pane_g9

0x0008,

0xf213,	// (0x00088160) cale_bg_pane_g

0x2b65,	// (0x0007bab2) list_cale_time_pane_ParamLimits

0x2b65,	// (0x0007bab2) list_cale_time_pane

0xb0d9,	// (0x00084026) list_cale_time_pane_g1_ParamLimits

0xb0d9,	// (0x00084026) list_cale_time_pane_g1

0xb0e5,	// (0x00084032) list_cale_time_pane_g2_ParamLimits

0xb0e5,	// (0x00084032) list_cale_time_pane_g2

0x2b7a,	// (0x0007bac7) list_cale_time_pane_g3_ParamLimits

0x2b7a,	// (0x0007bac7) list_cale_time_pane_g3

0x2b88,	// (0x0007bad5) list_cale_time_pane_g4_ParamLimits

0x2b88,	// (0x0007bad5) list_cale_time_pane_g4

0x2b96,	// (0x0007bae3) list_cale_time_pane_g5_ParamLimits

0x2b96,	// (0x0007bae3) list_cale_time_pane_g5

0x0005,

0xf226,	// (0x00088173) list_cale_time_pane_g_ParamLimits

0xf226,	// (0x00088173) list_cale_time_pane_g

0xb0ff,	// (0x0008404c) list_cale_time_pane_t1_ParamLimits

0xb0ff,	// (0x0008404c) list_cale_time_pane_t1

0xb127,	// (0x00084074) list_cale_time_pane_t2_ParamLimits

0xb127,	// (0x00084074) list_cale_time_pane_t2

0x2df8,	// (0x0007bd45) aid_blid_cardinal_pane

0x2e36,	// (0x0007bd83) compass_pane_t4

0xb14f,	// (0x0008409c) list_cale_time_pane_t4_ParamLimits

0xb14f,	// (0x0008409c) list_cale_time_pane_t4

0x2e44,	// (0x0007bd91) compass_pane_t5

0x2e52,	// (0x0007bd9f) compass_pane_t6

0x2e60,	// (0x0007bdad) compass_pane_t7

0xb676,	// (0x000845c3) navi_pane_cc_t1

0xd22a,	// (0x00086177) aid_phob_thumbnail_center_pane

0x31d8,	// (0x0007c125) main_postcard_pane_g4_ParamLimits

0x0002,

0xf233,	// (0x00088180) list_cale_time_pane_t_ParamLimits

0xf233,	// (0x00088180) list_cale_time_pane_t

0xa39c,	// (0x000832e9) bg_popup_window_pane_cp02_ParamLimits

0xa39c,	// (0x000832e9) bg_popup_window_pane_cp02

0xb177,	// (0x000840c4) heading_pane_cp01_ParamLimits

0xb177,	// (0x000840c4) heading_pane_cp01

0xb183,	// (0x000840d0) loc_req_pane_ParamLimits

0xb183,	// (0x000840d0) loc_req_pane

0xb195,	// (0x000840e2) loc_type_pane_ParamLimits

0xb195,	// (0x000840e2) loc_type_pane

0xb1a7,	// (0x000840f4) loc_type_pane_t1_ParamLimits

0xb1a7,	// (0x000840f4) loc_type_pane_t1

0xb1b9,	// (0x00084106) loc_type_pane_t2_ParamLimits

0xb1b9,	// (0x00084106) loc_type_pane_t2

0xb1cb,	// (0x00084118) loc_type_pane_t3_ParamLimits

0xb1cb,	// (0x00084118) loc_type_pane_t3

0x0002,

0xf23a,	// (0x00088187) loc_type_pane_t_ParamLimits

0xf23a,	// (0x00088187) loc_type_pane_t

0xb1dd,	// (0x0008412a) list_loc_req_pane

0xb1e7,	// (0x00084134) scroll_pane_cp012

0x2ba4,	// (0x0007baf1) list_single_loc_request_popup_menu_pane_ParamLimits

0x2ba4,	// (0x0007baf1) list_single_loc_request_popup_menu_pane

0xb1f2,	// (0x0008413f) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xb1f2,	// (0x0008413f) list_single_loc_request_popup_menu_pane_g1

0xb1fe,	// (0x0008414b) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xb1fe,	// (0x0008414b) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf241,	// (0x0008818e) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf241,	// (0x0008818e) list_single_loc_request_popup_menu_pane_g

0xb20a,	// (0x00084157) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xb20a,	// (0x00084157) list_single_loc_request_popup_menu_pane_t1

0xa9a0,	// (0x000838ed) bg_popup_window_pane_cp03_ParamLimits

0xa9a0,	// (0x000838ed) bg_popup_window_pane_cp03

0xb220,	// (0x0008416d) heading_loc_req_pane_ParamLimits

0xb220,	// (0x0008416d) heading_loc_req_pane

0x2bb1,	// (0x0007bafe) popup_dyc_status_message_window_g1_ParamLimits

0x2bb1,	// (0x0007bafe) popup_dyc_status_message_window_g1

0x2bc5,	// (0x0007bb12) popup_dyc_status_message_window_t1_ParamLimits

0x2bc5,	// (0x0007bb12) popup_dyc_status_message_window_t1

0x2bda,	// (0x0007bb27) popup_dyc_status_message_window_t2_ParamLimits

0x2bda,	// (0x0007bb27) popup_dyc_status_message_window_t2

0x2bef,	// (0x0007bb3c) popup_dyc_status_message_window_t3_ParamLimits

0x2bef,	// (0x0007bb3c) popup_dyc_status_message_window_t3

0x0002,

0xf246,	// (0x00088193) popup_dyc_status_message_window_t_ParamLimits

0xf246,	// (0x00088193) popup_dyc_status_message_window_t

0xa745,	// (0x00083692) bg_heading_pane_cp01

0xb22c,	// (0x00084179) heading_loc_req_pane_g1

0xb234,	// (0x00084181) heading_loc_req_pane_g2

0xb23c,	// (0x00084189) heading_loc_req_pane_g3

0x0002,

0xf24d,	// (0x0008819a) heading_loc_req_pane_g

0xb244,	// (0x00084191) heading_loc_req_pane_t1

0xb263,	// (0x000841b0) bg_popup_sub_pane_cp01_ParamLimits

0xb263,	// (0x000841b0) bg_popup_sub_pane_cp01

0xb271,	// (0x000841be) popup_cale_events_window_g1_ParamLimits

0xb271,	// (0x000841be) popup_cale_events_window_g1

0xb291,	// (0x000841de) popup_cale_events_window_g2_ParamLimits

0xb291,	// (0x000841de) popup_cale_events_window_g2

0x0001,

0xf26f,	// (0x000881bc) popup_cale_events_window_g_ParamLimits

0xf26f,	// (0x000881bc) popup_cale_events_window_g

0xb2b1,	// (0x000841fe) popup_cale_events_window_t1_ParamLimits

0xb2b1,	// (0x000841fe) popup_cale_events_window_t1

0xb2c3,	// (0x00084210) popup_cale_events_window_t2_ParamLimits

0xb2c3,	// (0x00084210) popup_cale_events_window_t2

0xb301,	// (0x0008424e) popup_cale_events_window_t3_ParamLimits

0xb301,	// (0x0008424e) popup_cale_events_window_t3

0xb33b,	// (0x00084288) popup_cale_events_window_t4_ParamLimits

0xb33b,	// (0x00084288) popup_cale_events_window_t4

0x0003,

0xf274,	// (0x000881c1) popup_cale_events_window_t_ParamLimits

0xf274,	// (0x000881c1) popup_cale_events_window_t

0x2c17,	// (0x0007bb64) call_type_pane

0x2c27,	// (0x0007bb74) popup_call_status_window_g1

0x2c3b,	// (0x0007bb88) popup_call_status_window_g2

0x2c4f,	// (0x0007bb9c) popup_call_status_window_g3

0x0002,

0xf27d,	// (0x000881ca) popup_call_status_window_g

0xb371,	// (0x000842be) call_type_pane_g1

0xb37a,	// (0x000842c7) call_type_pane_g2

0x0001,

0xf284,	// (0x000881d1) call_type_pane_g

0xa745,	// (0x00083692) bg_popup_sub_pane_cp02

0xb383,	// (0x000842d0) listscroll_popup_wml_pane

0xb38b,	// (0x000842d8) list_wml_pane

0xb395,	// (0x000842e2) scroll_pane_cp013

0xb3a0,	// (0x000842ed) list_single_graphic_popup_wml_pane_ParamLimits

0xb3a0,	// (0x000842ed) list_single_graphic_popup_wml_pane

0xa9b8,	// (0x00083905) list_single_graphic_popup_wml_pane_g1

0xb3b4,	// (0x00084301) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf289,	// (0x000881d6) list_single_graphic_popup_wml_pane_g

0xb3bc,	// (0x00084309) list_single_graphic_popup_wml_pane_t1

0xb3d2,	// (0x0008431f) aid_call_pane

0xa998,	// (0x000838e5) popup_clock_analogue_window_g1

0xa998,	// (0x000838e5) popup_clock_analogue_window_g2

0xb3da,	// (0x00084327) popup_clock_analogue_window_g3

0xb3da,	// (0x00084327) popup_clock_analogue_window_g4

0xa9b8,	// (0x00083905) popup_clock_analogue_window_g5

0x0004,

0xf28e,	// (0x000881db) popup_clock_analogue_window_g

0xb3e2,	// (0x0008432f) popup_clock_analogue_window_t1

0xb3f0,	// (0x0008433d) clock_digital_number_pane_ParamLimits

0xb3f0,	// (0x0008433d) clock_digital_number_pane

0xb3fc,	// (0x00084349) clock_digital_number_pane_cp02_ParamLimits

0xb3fc,	// (0x00084349) clock_digital_number_pane_cp02

0xb408,	// (0x00084355) clock_digital_number_pane_cp03_ParamLimits

0xb408,	// (0x00084355) clock_digital_number_pane_cp03

0xb414,	// (0x00084361) clock_digital_number_pane_cp04_ParamLimits

0xb414,	// (0x00084361) clock_digital_number_pane_cp04

0xb424,	// (0x00084371) clock_digital_separator_pane_ParamLimits

0xb424,	// (0x00084371) clock_digital_separator_pane

0xb430,	// (0x0008437d) popup_clock_digital_window_t1

0xa9b8,	// (0x00083905) clock_digital_number_pane_g1

0xa9b8,	// (0x00083905) clock_digital_number_pane_g2

0x0001,

0xf20e,	// (0x0008815b) clock_digital_number_pane_g

0xa9b8,	// (0x00083905) clock_digital_separator_pane_g1

0xa9b8,	// (0x00083905) clock_digital_separator_pane_g2

0x0001,

0xf20e,	// (0x0008815b) clock_digital_separator_pane_g

0xa745,	// (0x00083692) bg_popup_window_pane_cp04

0xb44d,	// (0x0008439a) heading_pane_cp03

0xad1e,	// (0x00083c6b) listscroll_popup_gms_pane

0xa745,	// (0x00083692) grid_large_graphic_popup_pane

0xb455,	// (0x000843a2) listscroll_popup_gms_pane_g1

0xb45e,	// (0x000843ab) listscroll_popup_gms_pane_g2

0x0001,

0xf299,	// (0x000881e6) listscroll_popup_gms_pane_g

0xb467,	// (0x000843b4) scroll_pane_cp014

0xaa0d,	// (0x0008395a) cell_large_graphic_popup_pane_ParamLimits

0xaa0d,	// (0x0008395a) cell_large_graphic_popup_pane

0xaa1b,	// (0x00083968) cell_large_graphic_popup_pane_g1_ParamLimits

0xaa1b,	// (0x00083968) cell_large_graphic_popup_pane_g1

0xb470,	// (0x000843bd) cell_large_graphic_popup_pane_g2_ParamLimits

0xb470,	// (0x000843bd) cell_large_graphic_popup_pane_g2

0xb47e,	// (0x000843cb) cell_large_graphic_popup_pane_g3_ParamLimits

0xb47e,	// (0x000843cb) cell_large_graphic_popup_pane_g3

0xb48c,	// (0x000843d9) cell_large_graphic_popup_pane_g4_ParamLimits

0xb48c,	// (0x000843d9) cell_large_graphic_popup_pane_g4

0x0003,

0xf29e,	// (0x000881eb) cell_large_graphic_popup_pane_g_ParamLimits

0xf29e,	// (0x000881eb) cell_large_graphic_popup_pane_g

0xa745,	// (0x00083692) grid_highlight_pane_cp010

0xa9b8,	// (0x00083905) bg_popup_call_pane_g1

0xb49d,	// (0x000843ea) list_single_graphic_popup_conf_pane_ParamLimits

0xb49d,	// (0x000843ea) list_single_graphic_popup_conf_pane

0xb4b0,	// (0x000843fd) list_highlight_pane_cp01

0xb4b9,	// (0x00084406) list_single_graphic_popup_conf_pane_g1

0xb4c1,	// (0x0008440e) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2a7,	// (0x000881f4) list_single_graphic_popup_conf_pane_g

0xb4c9,	// (0x00084416) list_single_graphic_popup_conf_pane_t1

0xb4d7,	// (0x00084424) linegrid_cams_pane_g1

0x2c5e,	// (0x0007bbab) linegrid_cams_pane_g2

0xac5d,	// (0x00083baa) linegrid_cams_pane_g3

0xb4e0,	// (0x0008442d) linegrid_cams_pane_g4

0x2c67,	// (0x0007bbb4) linegrid_cams_pane_g5

0x2c70,	// (0x0007bbbd) linegrid_cams_pane_g6

0xad0d,	// (0x00083c5a) linegrid_cams_pane_g7

0x0006,

0xf2ac,	// (0x000881f9) linegrid_cams_pane_g

0xb4e9,	// (0x00084436) popup_clock_analogue_window

0xb4e9,	// (0x00084436) popup_clock_digital_window

0xa745,	// (0x00083692) popup_phob_thumbnail_window

0xa9b8,	// (0x00083905) call_video_uplink_pane_g1

0xb4f2,	// (0x0008443f) call_video_uplink_pane_g2

0x0001,

0xf2bb,	// (0x00088208) call_video_uplink_pane_g

0xb4fa,	// (0x00084447) video_uplink_pane

0xb502,	// (0x0008444f) mce_image_pane_g1

0x2c7b,	// (0x0007bbc8) mce_image_pane_g2

0x2c85,	// (0x0007bbd2) mce_image_pane_g3

0x2c8d,	// (0x0007bbda) mce_image_pane_g4

0x2c95,	// (0x0007bbe2) mce_image_pane_g5

0x0004,

0xf2c0,	// (0x0008820d) mce_image_pane_g

0xb50c,	// (0x00084459) control_top_pane_stacon_cp01_ParamLimits

0xb50c,	// (0x00084459) control_top_pane_stacon_cp01

0xb520,	// (0x0008446d) uni_indicator_pane_stacon_cp01_ParamLimits

0xb520,	// (0x0008446d) uni_indicator_pane_stacon_cp01

0xb531,	// (0x0008447e) bg_popup_sub_pane_cp03

0xb53b,	// (0x00084488) chi_dic_find_pane

0x2c9d,	// (0x0007bbea) listscroll_chi_dic_pane

0xb543,	// (0x00084490) main_pane_chidic_g1

0xb54b,	// (0x00084498) chi_dic_find_pane_t1

0xb559,	// (0x000844a6) find_chidic_pane

0xb562,	// (0x000844af) chi_dic_list_pane_ParamLimits

0xb562,	// (0x000844af) chi_dic_list_pane

0xb573,	// (0x000844c0) scroll_pane_cp020

0xb57b,	// (0x000844c8) find_chidic_pane_t1

0xa745,	// (0x00083692) input_focus_pane_cp06

0x2cb1,	// (0x0007bbfe) list_chi_dic_pane_ParamLimits

0x2cb1,	// (0x0007bbfe) list_chi_dic_pane

0x2cc3,	// (0x0007bc10) list_chi_dic_pane_t1_ParamLimits

0x2cc3,	// (0x0007bc10) list_chi_dic_pane_t1

0xa745,	// (0x00083692) list_highlight_pane_cp020

0xb58a,	// (0x000844d7) bg_cale_heading_pane_g1

0x2cd6,	// (0x0007bc23) bg_cale_heading_pane_g2

0x2cde,	// (0x0007bc2b) bg_cale_heading_pane_g3

0x2ce6,	// (0x0007bc33) bg_cale_heading_pane_g4

0x2cf0,	// (0x0007bc3d) bg_cale_heading_pane_g5

0x2cfa,	// (0x0007bc47) bg_cale_heading_pane_g6

0x2d02,	// (0x0007bc4f) bg_cale_heading_pane_g7

0x2d0a,	// (0x0007bc57) bg_cale_heading_pane_g8

0x2d14,	// (0x0007bc61) bg_cale_heading_pane_g9

0x0008,

0xf2cb,	// (0x00088218) bg_cale_heading_pane_g

0xb58a,	// (0x000844d7) bg_cale_side_pane_g1

0x2d1e,	// (0x0007bc6b) bg_cale_side_pane_g2

0x2d26,	// (0x0007bc73) bg_cale_side_pane_g3

0x2d2e,	// (0x0007bc7b) bg_cale_side_pane_g4

0x2d36,	// (0x0007bc83) bg_cale_side_pane_g5

0x2d3e,	// (0x0007bc8b) bg_cale_side_pane_g6

0x2d46,	// (0x0007bc93) bg_cale_side_pane_g7

0x2d4e,	// (0x0007bc9b) bg_cale_side_pane_g8

0x2d56,	// (0x0007bca3) bg_cale_side_pane_g9

0x0008,

0xf2de,	// (0x0008822b) bg_cale_side_pane_g

0x2d5e,	// (0x0007bcab) popup_call_status_window_ParamLimits

0x2d5e,	// (0x0007bcab) popup_call_status_window

0xb592,	// (0x000844df) stacon_top_pane

0xb59a,	// (0x000844e7) status_pane_ParamLimits

0xb59a,	// (0x000844e7) status_pane

0xb5af,	// (0x000844fc) status_small_pane

0xb5b7,	// (0x00084504) control_pane

0xa745,	// (0x00083692) stacon_bottom_pane

0xb5bf,	// (0x0008450c) list_single_mce_smart_pane_t1_ParamLimits

0xb5bf,	// (0x0008450c) list_single_mce_smart_pane_t1

0xb5d2,	// (0x0008451f) list_single_mce_smart_pane_t2_ParamLimits

0xb5d2,	// (0x0008451f) list_single_mce_smart_pane_t2

0x0001,

0xf2f1,	// (0x0008823e) list_single_mce_smart_pane_t_ParamLimits

0xf2f1,	// (0x0008823e) list_single_mce_smart_pane_t

0x2da7,	// (0x0007bcf4) compass_pane

0x2db0,	// (0x0007bcfd) main_location2_pane_t1

0x2dc2,	// (0x0007bd0f) main_location2_pane_t2

0x2dd4,	// (0x0007bd21) main_location2_pane_t3

0x0003,

0xf2f6,	// (0x00088243) main_location2_pane_t

0xb5f1,	// (0x0008453e) compass_pane_g1_ParamLimits

0xb5f1,	// (0x0008453e) compass_pane_g1

0x2e18,	// (0x0007bd65) compass_pane_t1

0x2e27,	// (0x0007bd74) compass_pane_t2

0x0005,

0xf2ff,	// (0x0008824c) compass_pane_t

0x2e6e,	// (0x0007bdbb) text_secondary_cp61

0xb66d,	// (0x000845ba) navi_pane_cams_g5

0xb6e9,	// (0x00084636) navi_pane_im_t1

0xb6f7,	// (0x00084644) navi_pane_mp_g1_ParamLimits

0xb6f7,	// (0x00084644) navi_pane_mp_g1

0xb70b,	// (0x00084658) navi_pane_mp_g2_ParamLimits

0xb70b,	// (0x00084658) navi_pane_mp_g2

0xb717,	// (0x00084664) navi_pane_mp_g3_ParamLimits

0xb717,	// (0x00084664) navi_pane_mp_g3

0x0002,

0xf313,	// (0x00088260) navi_pane_mp_g_ParamLimits

0xf313,	// (0x00088260) navi_pane_mp_g

0xb723,	// (0x00084670) navi_pane_mp_t1

0xb731,	// (0x0008467e) navi_pane_mp_t2

0x0002,

0xf31a,	// (0x00088267) navi_pane_mp_t

0xb79c,	// (0x000846e9) navi_pane_vt_g1

0xb723,	// (0x00084670) navi_pane_vt_t1

0xb7a4,	// (0x000846f1) navi_slider_pane

0xad1e,	// (0x00083c6b) zooming_pane

0xb7b4,	// (0x00084701) navi_slider_pane_g1

0xb7bd,	// (0x0008470a) navi_slider_pane_g2

0x0006,

0xf321,	// (0x0008826e) navi_slider_pane_g

0xd1af,	// (0x000860fc) aid_levels_zoom

0xd1b7,	// (0x00086104) zooming_pane_g1

0xd1bf,	// (0x0008610c) zooming_pane_g2

0xd1bf,	// (0x0008610c) zooming_pane_g3

0x0002,

0xf330,	// (0x0008827d) zooming_pane_g

0xd1c7,	// (0x00086114) level_10_zoom

0xd1d0,	// (0x0008611d) level_11_zoom

0xd1d9,	// (0x00086126) level_1_zoom

0xd1e2,	// (0x0008612f) level_2_zoom

0xd1eb,	// (0x00086138) level_3_zoom

0xd1f4,	// (0x00086141) level_4_zoom

0xd1fd,	// (0x0008614a) level_5_zoom

0xd206,	// (0x00086153) level_6_zoom

0xd20f,	// (0x0008615c) level_7_zoom

0xd218,	// (0x00086165) level_8_zoom

0xd221,	// (0x0008616e) level_9_zoom

0xd232,	// (0x0008617f) popup_phob_thumbnail_window_g1

0xd23a,	// (0x00086187) popup_phob_thumbnail_window_g2

0x0001,

0xf337,	// (0x00088284) popup_phob_thumbnail_window_g

0x37db,	// (0x0007c728) level_1_location

0x37e3,	// (0x0007c730) level_2_location

0x37eb,	// (0x0007c738) level_3_location

0x37f3,	// (0x0007c740) level_4_location

0xad1e,	// (0x00083c6b) level_5_location

0x2ebf,	// (0x0007be0c) mce_icon_pane_g1

0x2ec9,	// (0x0007be16) mce_icon_pane_g2

0x0001,

0xf33c,	// (0x00088289) mce_icon_pane_g

0xdbef,	// (0x00086b3c) main_mup_pane_g1_ParamLimits

0xdbef,	// (0x00086b3c) main_mup_pane_g1

0xdbef,	// (0x00086b3c) main_mup_pane_g2_ParamLimits

0xdbef,	// (0x00086b3c) main_mup_pane_g2

0xdbef,	// (0x00086b3c) main_mup_pane_g3_ParamLimits

0xdbef,	// (0x00086b3c) main_mup_pane_g3

0xdbef,	// (0x00086b3c) main_mup_pane_g4_ParamLimits

0xdbef,	// (0x00086b3c) main_mup_pane_g4

0xdbef,	// (0x00086b3c) main_mup_pane_g5_ParamLimits

0xdbef,	// (0x00086b3c) main_mup_pane_g5

0xdbef,	// (0x00086b3c) main_mup_pane_g6_ParamLimits

0xdbef,	// (0x00086b3c) main_mup_pane_g6

0xdbef,	// (0x00086b3c) main_mup_pane_g7_ParamLimits

0xdbef,	// (0x00086b3c) main_mup_pane_g7

0xdbef,	// (0x00086b3c) main_mup_pane_g8_ParamLimits

0xdbef,	// (0x00086b3c) main_mup_pane_g8

0xdbef,	// (0x00086b3c) main_mup_pane_g9_ParamLimits

0xdbef,	// (0x00086b3c) main_mup_pane_g9

0xdbef,	// (0x00086b3c) main_mup_pane_g10_ParamLimits

0xdbef,	// (0x00086b3c) main_mup_pane_g10

0xdbef,	// (0x00086b3c) main_mup_pane_g11_ParamLimits

0xdbef,	// (0x00086b3c) main_mup_pane_g11

0xaa1b,	// (0x00083968) main_mup_pane_g12_ParamLimits

0xaa1b,	// (0x00083968) main_mup_pane_g12

0xdbef,	// (0x00086b3c) main_mup_pane_g13_ParamLimits

0xdbef,	// (0x00086b3c) main_mup_pane_g13

0x000c,

0xf341,	// (0x0008828e) main_mup_pane_g_ParamLimits

0xf341,	// (0x0008828e) main_mup_pane_g

0xe0dd,	// (0x0008702a) main_mup_pane_t1_ParamLimits

0xe0dd,	// (0x0008702a) main_mup_pane_t1

0xe0dd,	// (0x0008702a) main_mup_pane_t2_ParamLimits

0xe0dd,	// (0x0008702a) main_mup_pane_t2

0xe0dd,	// (0x0008702a) main_mup_pane_t3_ParamLimits

0xe0dd,	// (0x0008702a) main_mup_pane_t3

0xaa6b,	// (0x000839b8) main_mup_pane_t4_ParamLimits

0xaa6b,	// (0x000839b8) main_mup_pane_t4

0xaa6b,	// (0x000839b8) main_mup_pane_t5_ParamLimits

0xaa6b,	// (0x000839b8) main_mup_pane_t5

0xaa7f,	// (0x000839cc) main_mup_pane_t6_ParamLimits

0xaa7f,	// (0x000839cc) main_mup_pane_t6

0x0005,

0xf35c,	// (0x000882a9) main_mup_pane_t_ParamLimits

0xf35c,	// (0x000882a9) main_mup_pane_t

0xaa0d,	// (0x0008395a) mup_progress_pane_ParamLimits

0xaa0d,	// (0x0008395a) mup_progress_pane

0xd242,	// (0x0008618f) mup_visualizer_pane_ParamLimits

0xd242,	// (0x0008618f) mup_visualizer_pane

0xd242,	// (0x0008618f) mup_volume_pane_ParamLimits

0xd242,	// (0x0008618f) mup_volume_pane

0xaa29,	// (0x00083976) mup_visualizer_pane_g1_ParamLimits

0xaa29,	// (0x00083976) mup_visualizer_pane_g1

0xd250,	// (0x0008619d) mup_visualizer_pane_g2_ParamLimits

0xd250,	// (0x0008619d) mup_visualizer_pane_g2

0xaa1b,	// (0x00083968) mup_visualizer_pane_g3_ParamLimits

0xaa1b,	// (0x00083968) mup_visualizer_pane_g3

0x0002,

0xf369,	// (0x000882b6) mup_visualizer_pane_g_ParamLimits

0xf369,	// (0x000882b6) mup_visualizer_pane_g

0xaa61,	// (0x000839ae) mup_volume_pane_g1

0xaa61,	// (0x000839ae) mup_volume_pane_g2

0x0001,

0xf08c,	// (0x00087fd9) mup_volume_pane_g

0xaa61,	// (0x000839ae) mup_progress_pane_g1

0xaa61,	// (0x000839ae) mup_progress_pane_g2

0xaa61,	// (0x000839ae) mup_progress_pane_g3

0x0002,

0xf370,	// (0x000882bd) mup_progress_pane_g

0xa745,	// (0x00083692) bg_popup_window_pane_cp05

0xd25e,	// (0x000861ab) heading_pane_cp02_ParamLimits

0xd25e,	// (0x000861ab) heading_pane_cp02

0xd278,	// (0x000861c5) list_popup_blid_pane

0xd280,	// (0x000861cd) list_blid_sat_info_pane_ParamLimits

0xd280,	// (0x000861cd) list_blid_sat_info_pane

0xd293,	// (0x000861e0) list_blid_sat_info_pane_g1

0xd29b,	// (0x000861e8) list_blid_sat_info_pane_t1

0x2fc9,	// (0x0007bf16) mup_equalizer_pane_ParamLimits

0x2fc9,	// (0x0007bf16) mup_equalizer_pane

0x2fe2,	// (0x0007bf2f) mup_equalizer_pane_cp1_ParamLimits

0x2fe2,	// (0x0007bf2f) mup_equalizer_pane_cp1

0x2fff,	// (0x0007bf4c) mup_equalizer_pane_cp2_ParamLimits

0x2fff,	// (0x0007bf4c) mup_equalizer_pane_cp2

0x301c,	// (0x0007bf69) mup_equalizer_pane_cp3_ParamLimits

0x301c,	// (0x0007bf69) mup_equalizer_pane_cp3

0x303d,	// (0x0007bf8a) mup_equalizer_pane_cp4_ParamLimits

0x303d,	// (0x0007bf8a) mup_equalizer_pane_cp4

0x305e,	// (0x0007bfab) mup_equalizer_pane_cp5

0x3072,	// (0x0007bfbf) mup_equalizer_pane_cp6

0x3086,	// (0x0007bfd3) mup_equalizer_pane_cp7

0xe42a,	// (0x00087377) bg_popup_call_poc_act_pane_g9

0xe432,	// (0x0008737f) bg_popup_call_poc_act_pane_g10

0xe43a,	// (0x00087387) bg_popup_call_poc_act_pane_g11

0x000a,

0xa9a0,	// (0x000838ed) mup_scale_pane

0xa9b8,	// (0x00083905) mup_scale_pane_g1

0xd2a9,	// (0x000861f6) mup_scale_pane_g2

0x0006,

0xf38c,	// (0x000882d9) mup_scale_pane_g

0xd2cd,	// (0x0008621a) msg_data_pane

0xd2d5,	// (0x00086222) scroll_pane_cp017

0x0985,	// (0x000798d2) bg_list_pane_cp04_ParamLimits

0x0985,	// (0x000798d2) bg_list_pane_cp04

0xd2dd,	// (0x0008622a) msg_data_pane_g1

0x30ac,	// (0x0007bff9) msg_data_pane_g2

0x30b6,	// (0x0007c003) msg_data_pane_g3

0x30be,	// (0x0007c00b) msg_data_pane_g4

0x30c6,	// (0x0007c013) msg_data_pane_g5

0x30ce,	// (0x0007c01b) msg_data_pane_g6

0x30d6,	// (0x0007c023) msg_data_pane_g7

0x0006,

0xf39b,	// (0x000882e8) msg_data_pane_g

0x09ab,	// (0x000798f8) msg_text_pane_ParamLimits

0x09ab,	// (0x000798f8) msg_text_pane

0x30de,	// (0x0007c02b) qrid_highlight_pane_cp011_ParamLimits

0x30de,	// (0x0007c02b) qrid_highlight_pane_cp011

0xa745,	// (0x00083692) msg_body_pane

0xa9a0,	// (0x000838ed) msg_header_pane

0xb7ea,	// (0x00084737) input_focus_pane_cp07

0x09e9,	// (0x00079936) msg_header_pane_t1_ParamLimits

0x09e9,	// (0x00079936) msg_header_pane_t1

0x0a05,	// (0x00079952) msg_header_pane_t2_ParamLimits

0x0a05,	// (0x00079952) msg_header_pane_t2

0x0001,

0xf3af,	// (0x000882fc) msg_header_pane_t_ParamLimits

0xf3af,	// (0x000882fc) msg_header_pane_t

0xd305,	// (0x00086252) msg_body_pane_g1

0x0a25,	// (0x00079972) msg_body_pane_t1_ParamLimits

0x0a25,	// (0x00079972) msg_body_pane_t1

0x0a56,	// (0x000799a3) msg_body_pane_t2_ParamLimits

0x0a56,	// (0x000799a3) msg_body_pane_t2

0x0a68,	// (0x000799b5) msg_body_pane_t3_ParamLimits

0x0a68,	// (0x000799b5) msg_body_pane_t3

0x0002,

0xf3b4,	// (0x00088301) msg_body_pane_t_ParamLimits

0xf3b4,	// (0x00088301) msg_body_pane_t

0x312e,	// (0x0007c07b) main_viewer_pane_g1_ParamLimits

0x312e,	// (0x0007c07b) main_viewer_pane_g1

0x313c,	// (0x0007c089) main_viewer_pane_g2_ParamLimits

0x313c,	// (0x0007c089) main_viewer_pane_g2

0x314a,	// (0x0007c097) main_viewer_pane_g3_ParamLimits

0x314a,	// (0x0007c097) main_viewer_pane_g3

0x3159,	// (0x0007c0a6) main_viewer_pane_g4_ParamLimits

0x3159,	// (0x0007c0a6) main_viewer_pane_g4

0xb817,	// (0x00084764) main_viewer_pane_g5_ParamLimits

0xb817,	// (0x00084764) main_viewer_pane_g5

0xb817,	// (0x00084764) main_viewer_pane_g7_ParamLimits

0xb817,	// (0x00084764) main_viewer_pane_g7

0xb829,	// (0x00084776) main_viewer_pane_g8_ParamLimits

0xb829,	// (0x00084776) main_viewer_pane_g8

0x0007,

0xf3c4,	// (0x00088311) main_viewer_pane_g_ParamLimits

0xf3c4,	// (0x00088311) main_viewer_pane_g

0xd30d,	// (0x0008625a) viewer_content_pane_ParamLimits

0xd30d,	// (0x0008625a) viewer_content_pane

0x3195,	// (0x0007c0e2) main_postcard_pane_g1_ParamLimits

0x3195,	// (0x0007c0e2) main_postcard_pane_g1

0x31ab,	// (0x0007c0f8) main_postcard_pane_g2_ParamLimits

0x31ab,	// (0x0007c0f8) main_postcard_pane_g2

0x31c1,	// (0x0007c10e) main_postcard_pane_g3_ParamLimits

0x31c1,	// (0x0007c10e) main_postcard_pane_g3

0x0005,

0xf3d5,	// (0x00088322) main_postcard_pane_g_ParamLimits

0xf3d5,	// (0x00088322) main_postcard_pane_g

0x31d8,	// (0x0007c125) main_postcard_pane_g4

0xe566,	// (0x000874b3) smil_status_volume_pane_g2

0x321b,	// (0x0007c168) postcard_pane_ParamLimits

0x321b,	// (0x0007c168) postcard_pane

0xd31b,	// (0x00086268) postcard_pane_g1_ParamLimits

0xd31b,	// (0x00086268) postcard_pane_g1

0x325d,	// (0x0007c1aa) postcard_pane_g2_ParamLimits

0x325d,	// (0x0007c1aa) postcard_pane_g2

0x3269,	// (0x0007c1b6) postcard_pane_g3_ParamLimits

0x3269,	// (0x0007c1b6) postcard_pane_g3

0xd329,	// (0x00086276) postcard_pane_g4_ParamLimits

0xd329,	// (0x00086276) postcard_pane_g4

0x3275,	// (0x0007c1c2) postcard_pane_g5_ParamLimits

0x3275,	// (0x0007c1c2) postcard_pane_g5

0x328a,	// (0x0007c1d7) postcard_pane_g6_ParamLimits

0x328a,	// (0x0007c1d7) postcard_pane_g6

0xd31b,	// (0x00086268) postcard_pane_g7_ParamLimits

0xd31b,	// (0x00086268) postcard_pane_g7

0x0006,

0xf3e2,	// (0x0008832f) postcard_pane_g_ParamLimits

0xf3e2,	// (0x0008832f) postcard_pane_g

0x329e,	// (0x0007c1eb) main_mp2_pane_g1_ParamLimits

0x329e,	// (0x0007c1eb) main_mp2_pane_g1

0x32aa,	// (0x0007c1f7) main_mp2_pane_g2_ParamLimits

0x32aa,	// (0x0007c1f7) main_mp2_pane_g2

0x32b6,	// (0x0007c203) main_mp2_pane_g3_ParamLimits

0x32b6,	// (0x0007c203) main_mp2_pane_g3

0x0002,

0xf3f1,	// (0x0008833e) main_mp2_pane_g_ParamLimits

0xf3f1,	// (0x0008833e) main_mp2_pane_g

0x32c2,	// (0x0007c20f) main_mp2_pane_t1_ParamLimits

0x32c2,	// (0x0007c20f) main_mp2_pane_t1

0x32d7,	// (0x0007c224) main_mp2_pane_t2_ParamLimits

0x32d7,	// (0x0007c224) main_mp2_pane_t2

0x32e9,	// (0x0007c236) main_mp2_pane_t3_ParamLimits

0x32e9,	// (0x0007c236) main_mp2_pane_t3

0x0002,

0xf3f8,	// (0x00088345) main_mp2_pane_t_ParamLimits

0xf3f8,	// (0x00088345) main_mp2_pane_t

0xa324,	// (0x00083271) pec_content_pane_ParamLimits

0xa324,	// (0x00083271) pec_content_pane

0xa2ad,	// (0x000831fa) scroll_pane_cp015

0xd242,	// (0x0008618f) pec_attribute_pane_ParamLimits

0xd242,	// (0x0008618f) pec_attribute_pane

0xaa1b,	// (0x00083968) pec_content_pane_g1_ParamLimits

0xaa1b,	// (0x00083968) pec_content_pane_g1

0xd337,	// (0x00086284) pec_content_pane_t1_ParamLimits

0xd337,	// (0x00086284) pec_content_pane_t1

0xd34b,	// (0x00086298) pec_content_pane_t2_ParamLimits

0xd34b,	// (0x00086298) pec_content_pane_t2

0x0001,

0xf3ff,	// (0x0008834c) pec_content_pane_t_ParamLimits

0xf3ff,	// (0x0008834c) pec_content_pane_t

0xaa0d,	// (0x0008395a) list_single_graphic_pane_cp01_ParamLimits

0xaa0d,	// (0x0008395a) list_single_graphic_pane_cp01

0xa9a0,	// (0x000838ed) bg_popup_sub_pane_cp04

0xd35f,	// (0x000862ac) popup_mup_playback_window_g1

0xd36b,	// (0x000862b8) popup_mup_playback_window_t1

0xd380,	// (0x000862cd) popup_mup_playback_window_t2

0x0001,

0xf404,	// (0x00088351) popup_mup_playback_window_t

0xd3b7,	// (0x00086304) main_image_pane_g1_ParamLimits

0xd3b7,	// (0x00086304) main_image_pane_g1

0xd3fa,	// (0x00086347) scroll_pane_cp018_ParamLimits

0xd3fa,	// (0x00086347) scroll_pane_cp018

0xd412,	// (0x0008635f) scroll_pane_cp016_ParamLimits

0xd412,	// (0x0008635f) scroll_pane_cp016

0x33b3,	// (0x0007c300) smil2_image_pane_ParamLimits

0x33b3,	// (0x0007c300) smil2_image_pane

0x33e3,	// (0x0007c330) smil2_root_pane_ParamLimits

0x33e3,	// (0x0007c330) smil2_root_pane

0x341b,	// (0x0007c368) smil2_text_pane_ParamLimits

0x341b,	// (0x0007c368) smil2_text_pane

0xa2ad,	// (0x000831fa) bg_list_pane_cp06

0xa2ad,	// (0x000831fa) grid_radio_pane

0xa745,	// (0x00083692) bg_popup_window_pane_cp06

0xb253,	// (0x000841a0) main_fmradio_pane_t1

0xb44d,	// (0x0008439a) heading_pane_cp04

0xb253,	// (0x000841a0) main_fmradio_pane_t2

0xe442,	// (0x0008738f) popup_cale_lunar_info_window_g1

0xb253,	// (0x000841a0) main_fmradio_pane_t3

0xe44a,	// (0x00087397) popup_cale_lunar_info_window_g2

0xb253,	// (0x000841a0) main_fmradio_pane_t4

0x0001,

0xb253,	// (0x000841a0) main_fmradio_pane_t5

0x0004,

0xf4c1,	// (0x0008840e) popup_cale_lunar_info_window_g

0xf264,	// (0x000881b1) main_fmradio_pane_t

0xa2ad,	// (0x000831fa) wait_bar_pane_cp03

0xaa0d,	// (0x0008395a) cell_fmradio_pane_ParamLimits

0xaa0d,	// (0x0008395a) cell_fmradio_pane

0xaa1b,	// (0x00083968) cell_fmradio_pane_g1_ParamLimits

0xaa1b,	// (0x00083968) cell_fmradio_pane_g1

0xa2ad,	// (0x000831fa) grid_highlight_pane_cp011

0xd446,	// (0x00086393) poc_content_pane_ParamLimits

0xd446,	// (0x00086393) poc_content_pane

0xd458,	// (0x000863a5) scroll_pane_cp019

0x349b,	// (0x0007c3e8) popup_call_poc_act_window_ParamLimits

0x349b,	// (0x0007c3e8) popup_call_poc_act_window

0x34bf,	// (0x0007c40c) popup_call_poc_inact_window_ParamLimits

0x34bf,	// (0x0007c40c) popup_call_poc_inact_window

0xf49d,	// (0x000883ea) bg_popup_call_poc_act_pane_g

0xe3ba,	// (0x00087307) bg_popup_call_poc_inact_pane_g1

0xe3c2,	// (0x0008730f) bg_popup_call_poc_inact_pane_g2

0xd460,	// (0x000863ad) popup_call_poc_act_window_g2

0xe3ca,	// (0x00087317) bg_popup_call_poc_inact_pane_g3

0xe3d2,	// (0x0008731f) bg_popup_call_poc_inact_pane_g4

0xe3da,	// (0x00087327) bg_popup_call_poc_inact_pane_g5

0xd468,	// (0x000863b5) popup_call_poc_act_window_t1_ParamLimits

0xd468,	// (0x000863b5) popup_call_poc_act_window_t1

0xd490,	// (0x000863dd) popup_call_poc_act_window_t2_ParamLimits

0xd490,	// (0x000863dd) popup_call_poc_act_window_t2

0xd4b8,	// (0x00086405) popup_call_poc_act_window_t3_ParamLimits

0xd4b8,	// (0x00086405) popup_call_poc_act_window_t3

0xd4e0,	// (0x0008642d) popup_call_poc_act_window_t4_ParamLimits

0xd4e0,	// (0x0008642d) popup_call_poc_act_window_t4

0x0003,

0xf419,	// (0x00088366) popup_call_poc_act_window_t_ParamLimits

0xf419,	// (0x00088366) popup_call_poc_act_window_t

0xe3e2,	// (0x0008732f) bg_popup_call_poc_inact_pane_g6

0xe3ea,	// (0x00087337) bg_popup_call_poc_inact_pane_g7

0xe3f2,	// (0x0008733f) bg_popup_call_poc_inact_pane_g8

0xd4f2,	// (0x0008643f) popup_call_poc_inact_window_g2

0xe3fa,	// (0x00087347) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf48a,	// (0x000883d7) bg_popup_call_poc_inact_pane_g

0xd4fa,	// (0x00086447) popup_call_poc_inact_window_t1_ParamLimits

0xd4fa,	// (0x00086447) popup_call_poc_inact_window_t1

0xd50f,	// (0x0008645c) popup_call_poc_inact_window_t2_ParamLimits

0xd50f,	// (0x0008645c) popup_call_poc_inact_window_t2

0xd524,	// (0x00086471) popup_call_poc_inact_window_t3_ParamLimits

0xd524,	// (0x00086471) popup_call_poc_inact_window_t3

0x0002,

0xf422,	// (0x0008836f) popup_call_poc_inact_window_t_ParamLimits

0xf422,	// (0x0008836f) popup_call_poc_inact_window_t

0xe4de,	// (0x0008742b) context_pane_ParamLimits

0x3cad,	// (0x0007cbfa) signal_pane_ParamLimits

0xad1e,	// (0x00083c6b) main_call2_pane

0xb876,	// (0x000847c3) popup_phob_thumbnail2_window_ParamLimits

0xb876,	// (0x000847c3) popup_phob_thumbnail2_window

0xb7ff,	// (0x0008474c) aid_hotspot_pointer_arrow_pane

0xb807,	// (0x00084754) aid_hotspot_pointer_hand_pane

0x37a5,	// (0x0007c6f2) phob_pre_status_pane_g5

0xa324,	// (0x00083271) cams_zoom_pane_ParamLimits

0xa324,	// (0x00083271) image_vga_pane_ParamLimits

0xaa1b,	// (0x00083968) main_camera_pane_g1_ParamLimits

0xaa1b,	// (0x00083968) main_camera_pane_g2_ParamLimits

0xaa1b,	// (0x00083968) main_camera_pane_g3_ParamLimits

0xaa1b,	// (0x00083968) main_camera_pane_g4_ParamLimits

0xaa1b,	// (0x00083968) main_camera_pane_g5_ParamLimits

0xaa1b,	// (0x00083968) main_camera_pane_g6_ParamLimits

0xaa1b,	// (0x00083968) main_camera_pane_g7_ParamLimits

0xf15d,	// (0x000880aa) main_camera_pane_g_ParamLimits

0xaa6b,	// (0x000839b8) main_camera_pane_t1_ParamLimits

0xaa6b,	// (0x000839b8) main_camera_pane_t2_ParamLimits

0xf16e,	// (0x000880bb) main_camera_pane_t_ParamLimits

0xa9a0,	// (0x000838ed) bg_popup_preview_window_pane_cp01_ParamLimits

0xa9a0,	// (0x000838ed) bg_popup_preview_window_pane_cp01

0xd539,	// (0x00086486) popup_phob_thumbnail2_window_g1_ParamLimits

0xd539,	// (0x00086486) popup_phob_thumbnail2_window_g1

0xa745,	// (0x00083692) call2_cli_visual_pane

0x34f3,	// (0x0007c440) popup_call2_audio_conf_window_ParamLimits

0x34f3,	// (0x0007c440) popup_call2_audio_conf_window

0x3513,	// (0x0007c460) popup_call2_audio_first_window_ParamLimits

0x3513,	// (0x0007c460) popup_call2_audio_first_window

0x35a9,	// (0x0007c4f6) popup_call2_audio_in_window_ParamLimits

0x35a9,	// (0x0007c4f6) popup_call2_audio_in_window

0x35f1,	// (0x0007c53e) popup_call2_audio_out_window_ParamLimits

0x35f1,	// (0x0007c53e) popup_call2_audio_out_window

0x365b,	// (0x0007c5a8) popup_call2_audio_second_window_ParamLimits

0x365b,	// (0x0007c5a8) popup_call2_audio_second_window

0x36c1,	// (0x0007c60e) popup_call2_audio_wait_window_ParamLimits

0x36c1,	// (0x0007c60e) popup_call2_audio_wait_window

0xa745,	// (0x00083692) bg_popup_call2_act_pane_cp03

0xa982,	// (0x000838cf) list_conf_pane_cp

0xd545,	// (0x00086492) popup_call2_audio_conf_window_t1

0xb49d,	// (0x000843ea) list_single_graphic_popup_conf2_pane_ParamLimits

0xb49d,	// (0x000843ea) list_single_graphic_popup_conf2_pane

0xb4b0,	// (0x000843fd) list_highlight_pane_cp04

0xd553,	// (0x000864a0) list_single_graphic_popup_conf2_pane_g1

0xb4c1,	// (0x0008440e) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf429,	// (0x00088376) list_single_graphic_popup_conf2_pane_g

0xd55d,	// (0x000864aa) list_single_graphic_popup_conf2_pane_t1

0xd56b,	// (0x000864b8) bg_popup_call2_act_pane_cp01_ParamLimits

0xd56b,	// (0x000864b8) bg_popup_call2_act_pane_cp01

0xd6e9,	// (0x00086636) call_type_pane_cp05_ParamLimits

0xd6e9,	// (0x00086636) call_type_pane_cp05

0xd73d,	// (0x0008668a) popup_call2_audio_second_window_g1_ParamLimits

0xd73d,	// (0x0008668a) popup_call2_audio_second_window_g1

0xd791,	// (0x000866de) popup_call2_audio_second_window_g2_ParamLimits

0xd791,	// (0x000866de) popup_call2_audio_second_window_g2

0x0002,

0xf42e,	// (0x0008837b) popup_call2_audio_second_window_g_ParamLimits

0xf42e,	// (0x0008837b) popup_call2_audio_second_window_g

0xd7f6,	// (0x00086743) popup_call2_audio_second_window_t1_ParamLimits

0xd7f6,	// (0x00086743) popup_call2_audio_second_window_t1

0xd8b1,	// (0x000867fe) popup_call2_audio_second_window_t2_ParamLimits

0xd8b1,	// (0x000867fe) popup_call2_audio_second_window_t2

0xd904,	// (0x00086851) popup_call2_audio_second_window_t3_ParamLimits

0xd904,	// (0x00086851) popup_call2_audio_second_window_t3

0x0003,

0xf435,	// (0x00088382) popup_call2_audio_second_window_t_ParamLimits

0xf435,	// (0x00088382) popup_call2_audio_second_window_t

0xa745,	// (0x00083692) bg_popup_call2_in_pane_cp02

0xa74f,	// (0x0008369c) call_type_pane_cp04

0x36fb,	// (0x0007c648) popup_call2_audio_wait_window_g1

0x3703,	// (0x0007c650) popup_call2_audio_wait_window_g2

0x0001,

0xf43e,	// (0x0008838b) popup_call2_audio_wait_window_g

0xa767,	// (0x000836b4) popup_call2_audio_wait_window_t3

0xd9f7,	// (0x00086944) bg_popup_call2_act_pane_ParamLimits

0xd9f7,	// (0x00086944) bg_popup_call2_act_pane

0xdab7,	// (0x00086a04) call_type_pane_cp03_ParamLimits

0xdab7,	// (0x00086a04) call_type_pane_cp03

0xdb1b,	// (0x00086a68) popup_call2_audio_first_window_g1_ParamLimits

0xdb1b,	// (0x00086a68) popup_call2_audio_first_window_g1

0xdb8b,	// (0x00086ad8) popup_call2_audio_first_window_g2_ParamLimits

0xdb8b,	// (0x00086ad8) popup_call2_audio_first_window_g2

0xd5f5,	// (0x00086542) popup_call2_audio_first_window_g3_ParamLimits

0xd5f5,	// (0x00086542) popup_call2_audio_first_window_g3

0x0004,

0xf443,	// (0x00088390) popup_call2_audio_first_window_g_ParamLimits

0xf443,	// (0x00088390) popup_call2_audio_first_window_g

0xdc77,	// (0x00086bc4) popup_call2_audio_first_window_t1_ParamLimits

0xdc77,	// (0x00086bc4) popup_call2_audio_first_window_t1

0xdd7a,	// (0x00086cc7) popup_call2_audio_first_window_t4_ParamLimits

0xdd7a,	// (0x00086cc7) popup_call2_audio_first_window_t4

0xde5d,	// (0x00086daa) popup_call2_audio_first_window_t5_ParamLimits

0xde5d,	// (0x00086daa) popup_call2_audio_first_window_t5

0x0003,

0xf44e,	// (0x0008839b) popup_call2_audio_first_window_t_ParamLimits

0xf44e,	// (0x0008839b) popup_call2_audio_first_window_t

0xa998,	// (0x000838e5) bg_popup_call2_act_pane_g1

0xe452,	// (0x0008739f) popup_cale_lunar_info_window_t1

0xe460,	// (0x000873ad) popup_cale_lunar_info_window_t2

0xe46e,	// (0x000873bb) popup_cale_lunar_info_window_t3

0xa745,	// (0x00083692) bg_popup_call2_bubble_pane

0xdf5e,	// (0x00086eab) bg_popup_call2_in_pane_cp01_ParamLimits

0xdf5e,	// (0x00086eab) bg_popup_call2_in_pane_cp01

0xa421,	// (0x0008336e) call_type_pane_cp02

0x370b,	// (0x0007c658) popup_call2_audio_out_window_g1_ParamLimits

0x370b,	// (0x0007c658) popup_call2_audio_out_window_g1

0xdfa6,	// (0x00086ef3) popup_call2_audio_out_window_g2_ParamLimits

0xdfa6,	// (0x00086ef3) popup_call2_audio_out_window_g2

0x3737,	// (0x0007c684) popup_call2_audio_out_window_g3_ParamLimits

0x3737,	// (0x0007c684) popup_call2_audio_out_window_g3

0x0003,

0xf457,	// (0x000883a4) popup_call2_audio_out_window_g_ParamLimits

0xf457,	// (0x000883a4) popup_call2_audio_out_window_g

0xdfdd,	// (0x00086f2a) popup_call2_audio_out_window_t1_ParamLimits

0xdfdd,	// (0x00086f2a) popup_call2_audio_out_window_t1

0xe03c,	// (0x00086f89) popup_call2_audio_out_window_t2_ParamLimits

0xe03c,	// (0x00086f89) popup_call2_audio_out_window_t2

0xe090,	// (0x00086fdd) popup_call2_audio_out_window_t3_ParamLimits

0xe090,	// (0x00086fdd) popup_call2_audio_out_window_t3

0xe0a6,	// (0x00086ff3) popup_call2_audio_out_window_t4_ParamLimits

0xe0a6,	// (0x00086ff3) popup_call2_audio_out_window_t4

0xe0bc,	// (0x00087009) popup_call2_audio_out_window_t5_ParamLimits

0xe0bc,	// (0x00087009) popup_call2_audio_out_window_t5

0x0005,

0xf460,	// (0x000883ad) popup_call2_audio_out_window_t_ParamLimits

0xf460,	// (0x000883ad) popup_call2_audio_out_window_t

0xe140,	// (0x0008708d) bg_popup_call2_in_pane_ParamLimits

0xe140,	// (0x0008708d) bg_popup_call2_in_pane

0xe19c,	// (0x000870e9) popup_call2_audio_in_window_g1_ParamLimits

0xe19c,	// (0x000870e9) popup_call2_audio_in_window_g1

0xe1d4,	// (0x00087121) popup_call2_audio_in_window_g2_ParamLimits

0xe1d4,	// (0x00087121) popup_call2_audio_in_window_g2

0xe20c,	// (0x00087159) popup_call2_audio_in_window_g3_ParamLimits

0xe20c,	// (0x00087159) popup_call2_audio_in_window_g3

0x0003,

0xf46d,	// (0x000883ba) popup_call2_audio_in_window_g_ParamLimits

0xf46d,	// (0x000883ba) popup_call2_audio_in_window_g

0xe264,	// (0x000871b1) popup_call2_audio_in_window_t1_ParamLimits

0xe264,	// (0x000871b1) popup_call2_audio_in_window_t1

0xe2e4,	// (0x00087231) popup_call2_audio_in_window_t2_ParamLimits

0xe2e4,	// (0x00087231) popup_call2_audio_in_window_t2

0xe364,	// (0x000872b1) popup_call2_audio_in_window_t3_ParamLimits

0xe364,	// (0x000872b1) popup_call2_audio_in_window_t3

0xe37e,	// (0x000872cb) popup_call2_audio_in_window_t4_ParamLimits

0xe37e,	// (0x000872cb) popup_call2_audio_in_window_t4

0xe390,	// (0x000872dd) popup_call2_audio_in_window_t5_ParamLimits

0xe390,	// (0x000872dd) popup_call2_audio_in_window_t5

0xe3a5,	// (0x000872f2) popup_call2_audio_in_window_t6_ParamLimits

0xe3a5,	// (0x000872f2) popup_call2_audio_in_window_t6

0x0005,

0xf476,	// (0x000883c3) popup_call2_audio_in_window_t_ParamLimits

0xf476,	// (0x000883c3) popup_call2_audio_in_window_t

0xa998,	// (0x000838e5) bg_popup_call2_in_pane_g1

0xe47c,	// (0x000873c9) popup_cale_lunar_info_window_t4

0x0003,

0xf4c6,	// (0x00088413) popup_cale_lunar_info_window_t

0xa9a0,	// (0x000838ed) bg_popup_call2_rect_pane_ParamLimits

0xa9a0,	// (0x000838ed) bg_popup_call2_rect_pane

0xa745,	// (0x00083692) call2_cli_visual_graphic_pane

0xa745,	// (0x00083692) call2_cli_visual_text_pane

0xb89d,	// (0x000847ea) smil_status_volume_pane_g3

0x0002,

0xa9b8,	// (0x00083905) call2_cli_visual_graphic_pane_g1

0xa9b8,	// (0x00083905) call2_cli_visual_graphic_pane_g2

0xa9b8,	// (0x00083905) call2_cli_visual_graphic_pane_g3

0x0002,

0xf483,	// (0x000883d0) call2_cli_visual_graphic_pane_g

0xac25,	// (0x00083b72) bg_popup_call2_rect_pane_g1

0xac15,	// (0x00083b62) bg_popup_call2_rect_pane_g2

0xac1d,	// (0x00083b6a) bg_popup_call2_rect_pane_g3

0xac2d,	// (0x00083b7a) bg_popup_call2_rect_pane_g4

0xac35,	// (0x00083b82) bg_popup_call2_rect_pane_g5

0xac3d,	// (0x00083b8a) bg_popup_call2_rect_pane_g6

0xac45,	// (0x00083b92) bg_popup_call2_rect_pane_g7

0xac4d,	// (0x00083b9a) bg_popup_call2_rect_pane_g8

0xac55,	// (0x00083ba2) bg_popup_call2_rect_pane_g9

0x0008,

0xf213,	// (0x00088160) bg_popup_call2_rect_pane_g

0xe3ba,	// (0x00087307) bg_popup_call2_bubble_pane_g1

0xe3c2,	// (0x0008730f) bg_popup_call2_bubble_pane_g2

0xe3ca,	// (0x00087317) bg_popup_call2_bubble_pane_g3

0xe3d2,	// (0x0008731f) bg_popup_call2_bubble_pane_g4

0xe3da,	// (0x00087327) bg_popup_call2_bubble_pane_g5

0xe3e2,	// (0x0008732f) bg_popup_call2_bubble_pane_g6

0xe3ea,	// (0x00087337) bg_popup_call2_bubble_pane_g7

0xe3f2,	// (0x0008733f) bg_popup_call2_bubble_pane_g8

0xe3fa,	// (0x00087347) bg_popup_call2_bubble_pane_g9

0x0008,

0xf48a,	// (0x000883d7) bg_popup_call2_bubble_pane_g

0x1484,	// (0x0007a3d1) aid_cale_week_size_cell_pane

0x1a2a,	// (0x0007a977) aid_cams_cif_uncrop_pane_ParamLimits

0x1a2a,	// (0x0007a977) aid_cams_cif_uncrop_pane

0xa324,	// (0x00083271) aid_cams_size_cell_ParamLimits

0xa324,	// (0x00083271) aid_cams_size_cell

0xa324,	// (0x00083271) grid_cams_pane_ParamLimits

0xa324,	// (0x00083271) linegrid_cams_pane_ParamLimits

0x1c48,	// (0x0007ab95) call_video_pane_t1

0x1c66,	// (0x0007abb3) call_video_pane_t2

0x0001,

0xf1ba,	// (0x00088107) call_video_pane_t

0x2094,	// (0x0007afe1) aid_cale_month_size_cell_pane_ParamLimits

0x2094,	// (0x0007afe1) aid_cale_month_size_cell_pane

0xf50a,	// (0x00088457) smil_status_volume_pane_g

0xb8aa,	// (0x000847f7) volume_smil_pane_ParamLimits

0xa2bf,	// (0x0008320c) aid_popup2_width_pane

0x1409,	// (0x0007a356) cell_qdial_pane_g4_ParamLimits

0x1409,	// (0x0007a356) cell_qdial_pane_g4

0x2df8,	// (0x0007bd45) aid_blid_cardinal_pane_ParamLimits

0x2e04,	// (0x0007bd51) aid_blid_destination_pane_ParamLimits

0x2e04,	// (0x0007bd51) aid_blid_destination_pane

0xa9a0,	// (0x000838ed) bg_popup_call_poc_act_pane_ParamLimits

0xa9a0,	// (0x000838ed) bg_popup_call_poc_act_pane

0xa9a0,	// (0x000838ed) bg_popup_call_poc_inact_pane_ParamLimits

0xa9a0,	// (0x000838ed) bg_popup_call_poc_inact_pane

0xe402,	// (0x0008734f) bg_popup_call_poc_act_pane_g1

0xe40a,	// (0x00087357) bg_popup_call_poc_act_pane_g2

0xe412,	// (0x0008735f) bg_popup_call_poc_act_pane_g3

0xe3d2,	// (0x0008731f) bg_popup_call_poc_act_pane_g4

0xe3da,	// (0x00087327) bg_popup_call_poc_act_pane_g5

0xe41a,	// (0x00087367) bg_popup_call_poc_act_pane_g6

0xe3ea,	// (0x00087337) bg_popup_call_poc_act_pane_g7

0xe422,	// (0x0008736f) bg_popup_call_poc_act_pane_g8

0xa745,	// (0x00083692) main_usb_pane

0xb851,	// (0x0008479e) popup_cale_lunar_info_window

0x1f40,	// (0x0007ae8d) im_reading_pane_t1_ParamLimits

0xade9,	// (0x00083d36) list_im_pane_ParamLimits

0xadfa,	// (0x00083d47) scroll_pane_cp07_ParamLimits

0xa745,	// (0x00083692) grid_highlight_pane_cp012

0xa9a0,	// (0x000838ed) mup_scale_pane_ParamLimits

0xaa1b,	// (0x00083968) main_usb_pane_g1_ParamLimits

0xaa1b,	// (0x00083968) main_usb_pane_g1

0xaa1b,	// (0x00083968) main_usb_pane_g2_ParamLimits

0xaa1b,	// (0x00083968) main_usb_pane_g2

0x0001,

0xf199,	// (0x000880e6) main_usb_pane_g_ParamLimits

0xf199,	// (0x000880e6) main_usb_pane_g

0xaa6b,	// (0x000839b8) main_usb_pane_t1_ParamLimits

0xaa6b,	// (0x000839b8) main_usb_pane_t1

0xaa6b,	// (0x000839b8) main_usb_pane_t2_ParamLimits

0xaa6b,	// (0x000839b8) main_usb_pane_t2

0xaa6b,	// (0x000839b8) main_usb_pane_t3_ParamLimits

0xaa6b,	// (0x000839b8) main_usb_pane_t3

0xaa6b,	// (0x000839b8) main_usb_pane_t4_ParamLimits

0xaa6b,	// (0x000839b8) main_usb_pane_t4

0xaa6b,	// (0x000839b8) main_usb_pane_t5_ParamLimits

0xaa6b,	// (0x000839b8) main_usb_pane_t5

0xaa6b,	// (0x000839b8) main_usb_pane_t6_ParamLimits

0xaa6b,	// (0x000839b8) main_usb_pane_t6

0x0005,

0xf4b4,	// (0x00088401) main_usb_pane_t_ParamLimits

0x2da7,	// (0x0007bcf4) aid_text_placing

0x2db0,	// (0x0007bcfd) main_location2_pane_t1_ParamLimits

0x2dc2,	// (0x0007bd0f) main_location2_pane_t2_ParamLimits

0x2dd4,	// (0x0007bd21) main_location2_pane_t3_ParamLimits

0x2de6,	// (0x0007bd33) main_location2_pane_t4_ParamLimits

0x2de6,	// (0x0007bd33) main_location2_pane_t4

0xf2f6,	// (0x00088243) main_location2_pane_t_ParamLimits

0xa9ce,	// (0x0008391b) find_pinb_pane_g2_ParamLimits

0xa9ce,	// (0x0008391b) find_pinb_pane_g2

0x0001,

0xf072,	// (0x00087fbf) find_pinb_pane_g_ParamLimits

0xf072,	// (0x00087fbf) find_pinb_pane_g

0xa9da,	// (0x00083927) find_pinb_pane_t1_ParamLimits

0xa9ec,	// (0x00083939) find_pinb_pane_t2_ParamLimits

0xf077,	// (0x00087fc4) find_pinb_pane_t_ParamLimits

0xa745,	// (0x00083692) main_call3_pane

0x257f,	// (0x0007b4cc) cale_month_day_heading_pane_t1_ParamLimits

0x2605,	// (0x0007b552) cale_month_day_heading_pane_t2_ParamLimits

0x267e,	// (0x0007b5cb) cale_month_day_heading_pane_t3_ParamLimits

0x26f7,	// (0x0007b644) cale_month_day_heading_pane_t4_ParamLimits

0x2778,	// (0x0007b6c5) cale_month_day_heading_pane_t5_ParamLimits

0x2801,	// (0x0007b74e) cale_month_day_heading_pane_t6_ParamLimits

0x288a,	// (0x0007b7d7) cale_month_day_heading_pane_t7_ParamLimits

0xf1f2,	// (0x0008813f) cale_month_day_heading_pane_t_ParamLimits

0xb050,	// (0x00083f9d) smil_status_volume_pane

0x3239,	// (0x0007c186) postcard_address_pane_ParamLimits

0x3239,	// (0x0007c186) postcard_address_pane

0x324b,	// (0x0007c198) postcard_message_pane_ParamLimits

0x324b,	// (0x0007c198) postcard_message_pane

0x3763,	// (0x0007c6b0) call2_cli_visual_pane_t1_ParamLimits

0x3763,	// (0x0007c6b0) call2_cli_visual_pane_t1

0xe591,	// (0x000874de) postcard_message_pane_t1_ParamLimits

0xe591,	// (0x000874de) postcard_message_pane_t1

0xe579,	// (0x000874c6) postcard_address_pane_t1_ParamLimits

0xe579,	// (0x000874c6) postcard_address_pane_t1

0x3e5f,	// (0x0007cdac) popup_call3_audio_in_window_ParamLimits

0x3e5f,	// (0x0007cdac) popup_call3_audio_in_window

0x3cea,	// (0x0007cc37) bg_popup_call3_in_pane_ParamLimits

0x3cea,	// (0x0007cc37) bg_popup_call3_in_pane

0x3d60,	// (0x0007ccad) popup_call3_audio_in_window_g1_ParamLimits

0x3d60,	// (0x0007ccad) popup_call3_audio_in_window_g1

0x3d80,	// (0x0007cccd) popup_call3_audio_in_window_g2_ParamLimits

0x3d80,	// (0x0007cccd) popup_call3_audio_in_window_g2

0x3da0,	// (0x0007cced) popup_call3_audio_in_window_g3_ParamLimits

0x3da0,	// (0x0007cced) popup_call3_audio_in_window_g3

0x0003,

0xf511,	// (0x0008845e) popup_call3_audio_in_window_g_ParamLimits

0xf511,	// (0x0008845e) popup_call3_audio_in_window_g

0x3dd1,	// (0x0007cd1e) popup_call3_audio_in_window_t1_ParamLimits

0x3dd1,	// (0x0007cd1e) popup_call3_audio_in_window_t1

0x3e0f,	// (0x0007cd5c) popup_call3_audio_in_window_t2_ParamLimits

0x3e0f,	// (0x0007cd5c) popup_call3_audio_in_window_t2

0x3e4d,	// (0x0007cd9a) popup_call3_audio_in_window_t3_ParamLimits

0x3e4d,	// (0x0007cd9a) popup_call3_audio_in_window_t3

0x0002,

0xf51a,	// (0x00088467) popup_call3_audio_in_window_t_ParamLimits

0xf51a,	// (0x00088467) popup_call3_audio_in_window_t

0xad1e,	// (0x00083c6b) bg_popup_call3_rect_pane

0xac25,	// (0x00083b72) bg_popup_call3_rect_pane_g1

0xac15,	// (0x00083b62) bg_popup_call3_rect_pane_g2

0xac1d,	// (0x00083b6a) bg_popup_call3_rect_pane_g3

0xac2d,	// (0x00083b7a) bg_popup_call3_rect_pane_g4

0xac35,	// (0x00083b82) bg_popup_call3_rect_pane_g5

0xac3d,	// (0x00083b8a) bg_popup_call3_rect_pane_g6

0xac45,	// (0x00083b92) bg_popup_call3_rect_pane_g7

0xa2ad,	// (0x000831fa) mup_visualizer_osc_pane

0xa2ad,	// (0x000831fa) mup_visualizer_spec_pane

0x3d1a,	// (0x0007cc67) call3_video_qcif_pane_ParamLimits

0x3d1a,	// (0x0007cc67) call3_video_qcif_pane

0x3d2d,	// (0x0007cc7a) call3_video_qcif_uncrop_pane_ParamLimits

0x3d2d,	// (0x0007cc7a) call3_video_qcif_uncrop_pane

0x3d3b,	// (0x0007cc88) call3_video_subqcif_pane_ParamLimits

0x3d3b,	// (0x0007cc88) call3_video_subqcif_pane

0x3d4f,	// (0x0007cc9c) call3_video_subqcif_uncrop_pane_ParamLimits

0x3d4f,	// (0x0007cc9c) call3_video_subqcif_uncrop_pane

0x3dc0,	// (0x0007cd0d) popup_call3_audio_in_window_g4_ParamLimits

0x3dc0,	// (0x0007cd0d) popup_call3_audio_in_window_g4

0xa2ad,	// (0x000831fa) mup_spec_half_pane

0xa2ad,	// (0x000831fa) mup_spec_half_pane_cp

0xa2ad,	// (0x000831fa) mup_osc_middle_pane

0xaa61,	// (0x000839ae) mup_visualizer_osc_pane_g1

0xe52c,	// (0x00087479) mup_spec_bar_pane_ParamLimits

0xe52c,	// (0x00087479) mup_spec_bar_pane

0xaa61,	// (0x000839ae) mup_spec_bar_pane_g1

0xaa61,	// (0x000839ae) mup_spec_bar_pane_g2

0x0001,

0xf08c,	// (0x00087fd9) mup_spec_bar_pane_g

0x1484,	// (0x0007a3d1) aid_cale_week_size_cell_pane_ParamLimits

0x149e,	// (0x0007a3eb) bg_cale_heading_pane_ParamLimits

0xac80,	// (0x00083bcd) bg_cale_pane_cp01_ParamLimits

0x14b6,	// (0x0007a403) cale_week_corner_pane_ParamLimits

0x14d5,	// (0x0007a422) cale_week_day_heading_pane_ParamLimits

0x14f2,	// (0x0007a43f) cale_week_scroll_pane_g1_ParamLimits

0x1505,	// (0x0007a452) cale_week_scroll_pane_g2_ParamLimits

0x151d,	// (0x0007a46a) cale_week_scroll_pane_g3_ParamLimits

0x1535,	// (0x0007a482) cale_week_scroll_pane_g4_ParamLimits

0x154d,	// (0x0007a49a) cale_week_scroll_pane_g5_ParamLimits

0x156d,	// (0x0007a4ba) cale_week_scroll_pane_g6_ParamLimits

0x158d,	// (0x0007a4da) cale_week_scroll_pane_g7_ParamLimits

0x15ad,	// (0x0007a4fa) cale_week_scroll_pane_g8_ParamLimits

0x15d1,	// (0x0007a51e) cale_week_scroll_pane_g9_ParamLimits

0x15e9,	// (0x0007a536) cale_week_scroll_pane_g10_ParamLimits

0x1601,	// (0x0007a54e) cale_week_scroll_pane_g11_ParamLimits

0x1619,	// (0x0007a566) cale_week_scroll_pane_g12_ParamLimits

0x1631,	// (0x0007a57e) cale_week_scroll_pane_g13_ParamLimits

0x1631,	// (0x0007a57e) cale_week_scroll_pane_g14_ParamLimits

0x1631,	// (0x0007a57e) cale_week_scroll_pane_g15_ParamLimits

0xf103,	// (0x00088050) cale_week_scroll_pane_g_ParamLimits

0x166d,	// (0x0007a5ba) cale_week_time_pane_ParamLimits

0x1691,	// (0x0007a5de) grid_cale_week_pane_ParamLimits

0xac9d,	// (0x00083bea) listscroll_cale_week_pane_t1

0xacaf,	// (0x00083bfc) scroll_pane_cp08_ParamLimits

0x20f4,	// (0x0007b041) cale_month_corner_pane_ParamLimits

0xb01a,	// (0x00083f67) cale_month_pane_t1

0x2512,	// (0x0007b45f) cale_month_week_pane_ParamLimits

0x2c27,	// (0x0007bb74) popup_call_status_window_g1_ParamLimits

0x2c3b,	// (0x0007bb88) popup_call_status_window_g2_ParamLimits

0x2c4f,	// (0x0007bb9c) popup_call_status_window_g3_ParamLimits

0xf27d,	// (0x000881ca) popup_call_status_window_g_ParamLimits

0xb3ca,	// (0x00084317) aid_call2_pane

0x09db,	// (0x00079928) msg_header_pane_g1

0x3239,	// (0x0007c186) postcard_address2_pane_ParamLimits

0x3239,	// (0x0007c186) postcard_address2_pane

0x324b,	// (0x0007c198) postcard_message2_pane_ParamLimits

0x324b,	// (0x0007c198) postcard_message2_pane

0x3cbb,	// (0x0007cc08) message2_row_pane_ParamLimits

0x3cbb,	// (0x0007cc08) message2_row_pane

0x3cd7,	// (0x0007cc24) address2_row_pane_ParamLimits

0x3cd7,	// (0x0007cc24) address2_row_pane

0xe4f9,	// (0x00087446) postcard_message2_row_pane_g1

0xe501,	// (0x0008744e) postcard_message2_row_pane_t1

0xe4f9,	// (0x00087446) address2_row_pane_g1

0xe501,	// (0x0008744e) address2_row_pane_t1

0x19c1,	// (0x0007a90e) aid_size_cell_vorec

0xa745,	// (0x00083692) main_rss_pane

0xe50f,	// (0x0008745c) rss_list_single_pane_ParamLimits

0xe50f,	// (0x0008745c) rss_list_single_pane

0xe51d,	// (0x0008746a) rss_list_single_pane_t1

0xe51d,	// (0x0008746a) rss_list_single_pane_t2

0x0001,

0xf505,	// (0x00088452) rss_list_single_pane_t

0xa745,	// (0x00083692) main_camera2_pane

0xa745,	// (0x00083692) main_video2_pane

0xb8bf,	// (0x0008480c) cams_zoom_pane_cp2_ParamLimits

0xb8bf,	// (0x0008480c) cams_zoom_pane_cp2

0xb8bf,	// (0x0008480c) image2_vga_pane_ParamLimits

0xb8bf,	// (0x0008480c) image2_vga_pane

0xb8cd,	// (0x0008481a) main_camera2_pane_g1_ParamLimits

0xb8cd,	// (0x0008481a) main_camera2_pane_g1

0xb8cd,	// (0x0008481a) main_camera2_pane_g2_ParamLimits

0xb8cd,	// (0x0008481a) main_camera2_pane_g2

0xb8cd,	// (0x0008481a) main_camera2_pane_g3_ParamLimits

0xb8cd,	// (0x0008481a) main_camera2_pane_g3

0xb8cd,	// (0x0008481a) main_camera2_pane_g4_ParamLimits

0xb8cd,	// (0x0008481a) main_camera2_pane_g4

0xb8cd,	// (0x0008481a) main_camera2_pane_g5_ParamLimits

0xb8cd,	// (0x0008481a) main_camera2_pane_g5

0xb8cd,	// (0x0008481a) main_camera2_pane_g6_ParamLimits

0xb8cd,	// (0x0008481a) main_camera2_pane_g6

0xb8cd,	// (0x0008481a) main_camera2_pane_g7_ParamLimits

0xb8cd,	// (0x0008481a) main_camera2_pane_g7

0xb8cd,	// (0x0008481a) main_camera2_pane_g8_ParamLimits

0xb8cd,	// (0x0008481a) main_camera2_pane_g8

0x0008,

0xf521,	// (0x0008846e) main_camera2_pane_g_ParamLimits

0xf521,	// (0x0008846e) main_camera2_pane_g

0x3e81,	// (0x0007cdce) main_camera2_pane_t1_ParamLimits

0x3e81,	// (0x0007cdce) main_camera2_pane_t1

0x3e81,	// (0x0007cdce) main_camera2_pane_t2_ParamLimits

0x3e81,	// (0x0007cdce) main_camera2_pane_t2

0x3e81,	// (0x0007cdce) main_camera2_pane_t3_ParamLimits

0x3e81,	// (0x0007cdce) main_camera2_pane_t3

0x3e81,	// (0x0007cdce) main_camera2_pane_t4_ParamLimits

0x3e81,	// (0x0007cdce) main_camera2_pane_t4

0x0006,

0xf534,	// (0x00088481) main_camera2_pane_t_ParamLimits

0xf534,	// (0x00088481) main_camera2_pane_t

0x3ea9,	// (0x0007cdf6) cams_zoom_pane_cp4_ParamLimits

0x3ea9,	// (0x0007cdf6) cams_zoom_pane_cp4

0xe5ad,	// (0x000874fa) image2_cif_pane_ParamLimits

0xe5ad,	// (0x000874fa) image2_cif_pane

0xa324,	// (0x00083271) image2_subqcif_pane_ParamLimits

0xa324,	// (0x00083271) image2_subqcif_pane

0x3eb7,	// (0x0007ce04) main_video2_pane_g1_ParamLimits

0x3eb7,	// (0x0007ce04) main_video2_pane_g1

0x3eb7,	// (0x0007ce04) main_video2_pane_g2_ParamLimits

0x3eb7,	// (0x0007ce04) main_video2_pane_g2

0x3eb7,	// (0x0007ce04) main_video2_pane_g3_ParamLimits

0x3eb7,	// (0x0007ce04) main_video2_pane_g3

0x3eb7,	// (0x0007ce04) main_video2_pane_g4_ParamLimits

0x3eb7,	// (0x0007ce04) main_video2_pane_g4

0x3eb7,	// (0x0007ce04) main_video2_pane_g5_ParamLimits

0x3eb7,	// (0x0007ce04) main_video2_pane_g5

0x3eb7,	// (0x0007ce04) main_video2_pane_g6_ParamLimits

0x3eb7,	// (0x0007ce04) main_video2_pane_g6

0x0005,

0xf543,	// (0x00088490) main_video2_pane_g_ParamLimits

0xf543,	// (0x00088490) main_video2_pane_g

0x3ec5,	// (0x0007ce12) main_video2_pane_t1_ParamLimits

0x3ec5,	// (0x0007ce12) main_video2_pane_t1

0x3ec5,	// (0x0007ce12) main_video2_pane_t2_ParamLimits

0x3ec5,	// (0x0007ce12) main_video2_pane_t2

0x3ec5,	// (0x0007ce12) main_video2_pane_t3_ParamLimits

0x3ec5,	// (0x0007ce12) main_video2_pane_t3

0x0002,

0xf550,	// (0x0008849d) main_video2_pane_t_ParamLimits

0xf550,	// (0x0008849d) main_video2_pane_t

0x3807,	// (0x0007c754) call_muted_g2

0x0001,

0xf4f7,	// (0x00088444) call_muted_g

0xa745,	// (0x00083692) main_mup2_pane

0xdbef,	// (0x00086b3c) main_mup2_pane_g1_ParamLimits

0xdbef,	// (0x00086b3c) main_mup2_pane_g1

0xdbef,	// (0x00086b3c) main_mup2_pane_g2_ParamLimits

0xdbef,	// (0x00086b3c) main_mup2_pane_g2

0xaa61,	// (0x000839ae) main_mup_pane_g13_cp1

0xa2ad,	// (0x000831fa) mup_volume_pane_cp1

0xdbef,	// (0x00086b3c) main_mup2_pane_g4_ParamLimits

0xdbef,	// (0x00086b3c) main_mup2_pane_g4

0xdbef,	// (0x00086b3c) main_mup2_pane_g5_ParamLimits

0xdbef,	// (0x00086b3c) main_mup2_pane_g5

0xdbef,	// (0x00086b3c) main_mup2_pane_g6_ParamLimits

0xdbef,	// (0x00086b3c) main_mup2_pane_g6

0xdbef,	// (0x00086b3c) main_mup2_pane_g7_ParamLimits

0xdbef,	// (0x00086b3c) main_mup2_pane_g7

0x0006,

0xf557,	// (0x000884a4) main_mup2_pane_g_ParamLimits

0xf557,	// (0x000884a4) main_mup2_pane_g

0xe0dd,	// (0x0008702a) main_mup2_pane_t1_ParamLimits

0xe0dd,	// (0x0008702a) main_mup2_pane_t1

0xe0dd,	// (0x0008702a) main_mup2_pane_t2_ParamLimits

0xe0dd,	// (0x0008702a) main_mup2_pane_t2

0xe0dd,	// (0x0008702a) main_mup2_pane_t3_ParamLimits

0xe0dd,	// (0x0008702a) main_mup2_pane_t3

0xe0dd,	// (0x0008702a) main_mup2_pane_t4_ParamLimits

0xe0dd,	// (0x0008702a) main_mup2_pane_t4

0xe0dd,	// (0x0008702a) main_mup2_pane_t5_ParamLimits

0xe0dd,	// (0x0008702a) main_mup2_pane_t5

0xe0dd,	// (0x0008702a) main_mup2_pane_t6_ParamLimits

0xe0dd,	// (0x0008702a) main_mup2_pane_t6

0x0005,

0xf566,	// (0x000884b3) main_mup2_pane_t_ParamLimits

0xf566,	// (0x000884b3) main_mup2_pane_t

0xd242,	// (0x0008618f) mup2_visualizer_pane_ParamLimits

0xd242,	// (0x0008618f) mup2_visualizer_pane

0xd242,	// (0x0008618f) mup_progress_pane_cp_ParamLimits

0xd242,	// (0x0008618f) mup_progress_pane_cp

0xe5bb,	// (0x00087508) mup_volume_pane_cp_ParamLimits

0xe5bb,	// (0x00087508) mup_volume_pane_cp

0xaa1b,	// (0x00083968) mup2_visualizer_pane_g1_ParamLimits

0xaa1b,	// (0x00083968) mup2_visualizer_pane_g1

0xaa29,	// (0x00083976) mup2_visualizer_pane_g2_ParamLimits

0xaa29,	// (0x00083976) mup2_visualizer_pane_g2

0xaa29,	// (0x00083976) mup2_visualizer_pane_g3_ParamLimits

0xaa29,	// (0x00083976) mup2_visualizer_pane_g3

0x0002,

0xf07c,	// (0x00087fc9) mup2_visualizer_pane_g_ParamLimits

0xf07c,	// (0x00087fc9) mup2_visualizer_pane_g

0xa2ad,	// (0x000831fa) aid_size_cell_fmradio

0x39b9,	// (0x0007c906) aid_height_parent_landcape

0xae78,	// (0x00083dc5) wml_content_pane_cp

0xae80,	// (0x00083dcd) wml_tabs_pane

0xae89,	// (0x00083dd6) popup_wml_miniature_window

0xae91,	// (0x00083dde) scroll_pane_cp021

0xaea5,	// (0x00083df2) wml_content_pane_comp8

0xa745,	// (0x00083692) bg_popup_sub_pane_cp05

0xe5d1,	// (0x0008751e) popup_wml_miniature_window_g1

0xe5d9,	// (0x00087526) wml_miniature_view_pane

0x3ed9,	// (0x0007ce26) aid_size_wml_view

0x3ee1,	// (0x0007ce2e) wml_miniature_view_pane_g1

0x3eea,	// (0x0007ce37) wml_miniature_view_pane_g2

0x3ef3,	// (0x0007ce40) wml_miniature_view_pane_g3

0x3efb,	// (0x0007ce48) wml_miniature_view_pane_g4

0x3f03,	// (0x0007ce50) wml_miniature_view_pane_g5

0x3f0b,	// (0x0007ce58) wml_miniature_view_pane_g6

0x3f13,	// (0x0007ce60) wml_miniature_view_pane_g7

0x3f1b,	// (0x0007ce68) wml_miniature_view_pane_g8

0x0007,

0xf573,	// (0x000884c0) wml_miniature_view_pane_g

0xe5e1,	// (0x0008752e) background_graphic_ParamLimits

0xe5e1,	// (0x0008752e) background_graphic

0xe5ed,	// (0x0008753a) wml_tabs_2_pane

0xe5f6,	// (0x00087543) wml_tabs_3_pane_ParamLimits

0xe5f6,	// (0x00087543) wml_tabs_3_pane

0xe608,	// (0x00087555) wml_tabs_4_pane_ParamLimits

0xe608,	// (0x00087555) wml_tabs_4_pane

0xe61e,	// (0x0008756b) wml_tabs_5_pane_ParamLimits

0xe61e,	// (0x0008756b) wml_tabs_5_pane

0xe638,	// (0x00087585) wml_tabs_pane_g2_ParamLimits

0xe638,	// (0x00087585) wml_tabs_pane_g2

0xe64d,	// (0x0008759a) wml_tabs_pane_g3_ParamLimits

0xe64d,	// (0x0008759a) wml_tabs_pane_g3

0xe662,	// (0x000875af) wml_tabs_2_active_pane_ParamLimits

0xe662,	// (0x000875af) wml_tabs_2_active_pane

0xe662,	// (0x000875af) wml_tabs_2_passive_pane_ParamLimits

0xe662,	// (0x000875af) wml_tabs_2_passive_pane

0x3f23,	// (0x0007ce70) wml_tabs_3_active_pane_cp_ParamLimits

0x3f23,	// (0x0007ce70) wml_tabs_3_active_pane_cp

0x3f38,	// (0x0007ce85) wml_tabs_3_passive_pane_ParamLimits

0x3f38,	// (0x0007ce85) wml_tabs_3_passive_pane

0x3f4b,	// (0x0007ce98) wml_tabs_3_passive_pane_cp_ParamLimits

0x3f4b,	// (0x0007ce98) wml_tabs_3_passive_pane_cp

0x3f62,	// (0x0007ceaf) tabs_4_active_pane

0x3f6a,	// (0x0007ceb7) tabs_4_passive_pane

0x3f74,	// (0x0007cec1) tabs_4_passive_pane_cp

0x3f7c,	// (0x0007cec9) tabs_4_passive_pane_cp2

0x377d,	// (0x0007c6ca) aid_height_text

0xd242,	// (0x0008618f) mup_volume_cont_pane_ParamLimits

0xd242,	// (0x0008618f) mup_volume_cont_pane

0xa2ad,	// (0x000831fa) aid_size_cell_pinb

0xa2ad,	// (0x000831fa) aid_size_list_pinb

0xd242,	// (0x0008618f) mup2_volume_cont_pane_ParamLimits

0xd242,	// (0x0008618f) mup2_volume_cont_pane

0xb8db,	// (0x00084828) mup2_volume_cont_pane_g1_ParamLimits

0xb8db,	// (0x00084828) mup2_volume_cont_pane_g1

0x0f50,	// (0x00079e9d) aid_size_cell_touch_ParamLimits

0x0f50,	// (0x00079e9d) aid_size_cell_touch

0x117c,	// (0x0007a0c9) touch_pane_ParamLimits

0x117c,	// (0x0007a0c9) touch_pane

0xa2ad,	// (0x000831fa) main_rss2_pane

0xe679,	// (0x000875c6) listscroll_rss2_pane

0xe682,	// (0x000875cf) rss2_navigation_pane

0xe68a,	// (0x000875d7) list_rss2_pane

0xb573,	// (0x000844c0) scroll_pane_cp22

0xe692,	// (0x000875df) rss2_navigation_pane_g1

0xe69b,	// (0x000875e8) rss2_navigation_pane_g2

0xe6a3,	// (0x000875f0) rss2_navigation_pane_g3

0x0002,

0x0092,	// (0x00078fdf) rss2_navigation_pane_g

0xe6ab,	// (0x000875f8) rss2_navigation_pane_t1

0x3f86,	// (0x0007ced3) rss2_list_single_pane_ParamLimits

0x3f86,	// (0x0007ced3) rss2_list_single_pane

0xe6b9,	// (0x00087606) rss2_list_single_pane_t2

0xe6c7,	// (0x00087614) rss2_list_single_pane_t3_ParamLimits

0xe6c7,	// (0x00087614) rss2_list_single_pane_t3

0xe6e4,	// (0x00087631) rss2_list_single_pane_t4

0x2b14,	// (0x0007ba61) smil_status_pane_g1

0xa324,	// (0x00083271) main_image2_pane_ParamLimits

0xa324,	// (0x00083271) main_image2_pane

0xb8cd,	// (0x0008481a) main_camera2_pane_g9_ParamLimits

0xb8cd,	// (0x0008481a) main_camera2_pane_g9

0x3e81,	// (0x0007cdce) main_camera2_pane_t5_ParamLimits

0x3e81,	// (0x0007cdce) main_camera2_pane_t5

0x3e95,	// (0x0007cde2) main_camera2_pane_t6_ParamLimits

0x3e95,	// (0x0007cde2) main_camera2_pane_t6

0x3f9b,	// (0x0007cee8) main_image2_pane_g1_ParamLimits

0x3f9b,	// (0x0007cee8) main_image2_pane_g1

0x3451,	// (0x0007c39e) smil2_video_pane_ParamLimits

0x3451,	// (0x0007c39e) smil2_video_pane

0xa2db,	// (0x00083228) aid_zoom_text_primary_cp

0xa31a,	// (0x00083267) popup_preview_fixed_window

0xade1,	// (0x00083d2e) im_reading_pane_g1

0x3e73,	// (0x0007cdc0) cams2_bc_adjust_pane_cp_ParamLimits

0x3e73,	// (0x0007cdc0) cams2_bc_adjust_pane_cp

0xd242,	// (0x0008618f) cams2_bc_adjust_pane_ParamLimits

0xd242,	// (0x0008618f) cams2_bc_adjust_pane

0xaa61,	// (0x000839ae) cams2_bc_adjust_pane_g1

0xa2ad,	// (0x000831fa) cams2_slider_pane

0xaa61,	// (0x000839ae) cams2_slider_pane_g1

0xaa61,	// (0x000839ae) cams2_slider_pane_g2

0x0006,

0xf584,	// (0x000884d1) cams2_slider_pane_g

0x1244,	// (0x0007a191) calc_display_pane_ParamLimits

0x1269,	// (0x0007a1b6) calc_paper_pane_ParamLimits

0x128c,	// (0x0007a1d9) grid_calc_pane_ParamLimits

0xb430,	// (0x0008437d) popup_clock_digital_window_t1_ParamLimits

0xd3e3,	// (0x00086330) main_image_pane_t1

0x1226,	// (0x0007a173) aid_size_cell_calc_ParamLimits

0x1226,	// (0x0007a173) aid_size_cell_calc

0x39ff,	// (0x0007c94c) popup_blid_sat_info2_window_ParamLimits

0x39ff,	// (0x0007c94c) popup_blid_sat_info2_window

0xe6f2,	// (0x0008763f) aid_size_cell_blid

0xe5ad,	// (0x000874fa) bg_popup_window_pane_cp07

0xe70f,	// (0x0008765c) grid_popup_blid_pane

0xe719,	// (0x00087666) heading_pane_cp05_ParamLimits

0xe719,	// (0x00087666) heading_pane_cp05

0xe7e3,	// (0x00087730) cell_popup_blid_pane_ParamLimits

0xe7e3,	// (0x00087730) cell_popup_blid_pane

0xe807,	// (0x00087754) cell_popup_blid_pane_g1

0xe80f,	// (0x0008775c) cell_popup_blid_pane_t1

0xd242,	// (0x0008618f) mup2_indicator_pane_ParamLimits

0xd242,	// (0x0008618f) mup2_indicator_pane

0xa2ad,	// (0x000831fa) mup2_visualizer_osc_pane

0xe5bb,	// (0x00087508) mup2_visualizer_spec_pane_ParamLimits

0xe5bb,	// (0x00087508) mup2_visualizer_spec_pane

0xa2ad,	// (0x000831fa) mup2_spec_half_pane

0xa2ad,	// (0x000831fa) mup2_spec_half_pane_cp

0xe81d,	// (0x0008776a) mup2_spec_bar_pane_ParamLimits

0xe81d,	// (0x0008776a) mup2_spec_bar_pane

0xaa61,	// (0x000839ae) mup2_spec_bar_pane_g1

0xe83c,	// (0x00087789) mup2_spec_bar_pane_g2

0x0001,

0xf5aa,	// (0x000884f7) mup2_spec_bar_pane_g

0xa2ad,	// (0x000831fa) mup2_osc_middle_pane

0xaa61,	// (0x000839ae) mup2_visualizer_osc_pane_g1

0xa352,	// (0x0008329f) popup_number_entry_window_t1_ParamLimits

0xa365,	// (0x000832b2) popup_number_entry_window_t2_ParamLimits

0xa377,	// (0x000832c4) popup_number_entry_window_t3_ParamLimits

0x11ce,	// (0x0007a11b) popup_number_entry_window_t5_ParamLimits

0x11ce,	// (0x0007a11b) popup_number_entry_window_t5

0xf01d,	// (0x00087f6a) popup_number_entry_window_t_ParamLimits

0xa389,	// (0x000832d6) text_title_cp2_ParamLimits

0xb80f,	// (0x0008475c) aid_hotspot_pointer_text2_pane

0xb835,	// (0x00084782) main_viewer_pane_g9_ParamLimits

0xb835,	// (0x00084782) main_viewer_pane_g9

0xb01a,	// (0x00083f67) cale_month_pane_t1_ParamLimits

0xb085,	// (0x00083fd2) bg_cale_pane_ParamLimits

0xb09d,	// (0x00083fea) list_cale_pane_ParamLimits

0xb0ae,	// (0x00083ffb) listscroll_cale_day_pane_t1

0xb0c0,	// (0x0008400d) scroll_pane_cp09_ParamLimits

0x2ed1,	// (0x0007be1e) main_mup_eq_pane_t1_ParamLimits

0x2ed1,	// (0x0007be1e) main_mup_eq_pane_t1

0x2eeb,	// (0x0007be38) main_mup_eq_pane_t2_ParamLimits

0x2eeb,	// (0x0007be38) main_mup_eq_pane_t2

0x2f05,	// (0x0007be52) main_mup_eq_pane_t3_ParamLimits

0x2f05,	// (0x0007be52) main_mup_eq_pane_t3

0x2f21,	// (0x0007be6e) main_mup_eq_pane_t4_ParamLimits

0x2f21,	// (0x0007be6e) main_mup_eq_pane_t4

0x2f3d,	// (0x0007be8a) main_mup_eq_pane_t5_ParamLimits

0x2f3d,	// (0x0007be8a) main_mup_eq_pane_t5

0x2f59,	// (0x0007bea6) main_mup_eq_pane_t6_ParamLimits

0x2f59,	// (0x0007bea6) main_mup_eq_pane_t6

0x2f6d,	// (0x0007beba) main_mup_eq_pane_t7_ParamLimits

0x2f6d,	// (0x0007beba) main_mup_eq_pane_t7

0x2f81,	// (0x0007bece) main_mup_eq_pane_t8_ParamLimits

0x2f81,	// (0x0007bece) main_mup_eq_pane_t8

0x2f95,	// (0x0007bee2) main_mup_eq_pane_t9_ParamLimits

0x2f95,	// (0x0007bee2) main_mup_eq_pane_t9

0x2faf,	// (0x0007befc) main_mup_eq_pane_t10_ParamLimits

0x2faf,	// (0x0007befc) main_mup_eq_pane_t10

0x0009,

0xf377,	// (0x000882c4) main_mup_eq_pane_t_ParamLimits

0xf377,	// (0x000882c4) main_mup_eq_pane_t

0x305e,	// (0x0007bfab) mup_equalizer_pane_cp5_ParamLimits

0x3072,	// (0x0007bfbf) mup_equalizer_pane_cp6_ParamLimits

0x3086,	// (0x0007bfd3) mup_equalizer_pane_cp7_ParamLimits

0xa2ad,	// (0x000831fa) main_gallery_pane

0xe54b,	// (0x00087498) smil2_volume_pane

0xe553,	// (0x000874a0) smil_status_volume_pane_g1_ParamLimits

0xe566,	// (0x000874b3) smil_status_volume_pane_g2_ParamLimits

0xb89d,	// (0x000847ea) smil_status_volume_pane_g3_ParamLimits

0xf50a,	// (0x00088457) smil_status_volume_pane_g_ParamLimits

0xe5ad,	// (0x000874fa) bg_popup_window_pane_cp07_ParamLimits

0xe6fa,	// (0x00087647) blid_firmament_pane

0xa324,	// (0x00083271) aid_size_cell_gallery_ParamLimits

0xa324,	// (0x00083271) aid_size_cell_gallery

0xa324,	// (0x00083271) grid_gallery_pane_ParamLimits

0xa324,	// (0x00083271) grid_gallery_pane

0xe5ad,	// (0x000874fa) cell_gallery_pane_ParamLimits

0xe5ad,	// (0x000874fa) cell_gallery_pane

0xa324,	// (0x00083271) bg_cell_gallery_focus_pane_ParamLimits

0xa324,	// (0x00083271) bg_cell_gallery_focus_pane

0xaa1b,	// (0x00083968) cell_gallery_pane_g1_ParamLimits

0xaa1b,	// (0x00083968) cell_gallery_pane_g1

0xaa1b,	// (0x00083968) cell_gallery_pane_g2_ParamLimits

0xaa1b,	// (0x00083968) cell_gallery_pane_g2

0xaa1b,	// (0x00083968) cell_gallery_pane_g3_ParamLimits

0xaa1b,	// (0x00083968) cell_gallery_pane_g3

0xaa29,	// (0x00083976) cell_gallery_pane_g4_ParamLimits

0xaa29,	// (0x00083976) cell_gallery_pane_g4

0x0003,

0xf5af,	// (0x000884fc) cell_gallery_pane_g_ParamLimits

0xf5af,	// (0x000884fc) cell_gallery_pane_g

0xe846,	// (0x00087793) bg_cell_gallery_focus_pane_g1

0xe84e,	// (0x0008779b) bg_cell_gallery_focus_pane_g2

0xe856,	// (0x000877a3) bg_cell_gallery_focus_pane_g3

0xe85e,	// (0x000877ab) bg_cell_gallery_focus_pane_g4

0xe866,	// (0x000877b3) bg_cell_gallery_focus_pane_g5

0xe86e,	// (0x000877bb) bg_cell_gallery_focus_pane_g6

0xe876,	// (0x000877c3) bg_cell_gallery_focus_pane_g7

0xe87e,	// (0x000877cb) bg_cell_gallery_focus_pane_g8

0x0007,

0xf5b8,	// (0x00088505) bg_cell_gallery_focus_pane_g

0xe886,	// (0x000877d3) aid_firma_cardinal

0xe89a,	// (0x000877e7) blid_firmament_pane_t1

0xe8b1,	// (0x000877fe) blid_firmament_pane_t2

0xe8c8,	// (0x00087815) blid_firmament_pane_t3

0xe8df,	// (0x0008782c) blid_firmament_pane_t4

0x0003,

0xf5c9,	// (0x00088516) blid_firmament_pane_t

0xe8f6,	// (0x00087843) blid_sat_info_pane

0xaa61,	// (0x000839ae) blid_sat_info_pane_g1

0xaa61,	// (0x000839ae) blid_sat_info_pane_g2

0x0001,

0xf08c,	// (0x00087fd9) blid_sat_info_pane_g

0xe906,	// (0x00087853) blid_sat_info_pane_t1

0xe914,	// (0x00087861) smil2_volume_content_pane

0xe91d,	// (0x0008786a) smil2_volume_pane_g1

0xab74,	// (0x00083ac1) smil2_volume_content_pane_g1

0xe925,	// (0x00087872) smil2_volume_content_pane_g2

0xe92e,	// (0x0008787b) smil2_volume_content_pane_g3

0xe937,	// (0x00087884) smil2_volume_content_pane_g4

0xe940,	// (0x0008788d) smil2_volume_content_pane_g5

0xe949,	// (0x00087896) smil2_volume_content_pane_g6

0xe952,	// (0x0008789f) smil2_volume_content_pane_g7

0xe95b,	// (0x000878a8) smil2_volume_content_pane_g8

0xe964,	// (0x000878b1) smil2_volume_content_pane_g9

0xe96d,	// (0x000878ba) smil2_volume_content_pane_g10

0x0009,

0xf5d2,	// (0x0008851f) smil2_volume_content_pane_g

0x1745,	// (0x0007a692) cale_week_day_heading_pane_t1_ParamLimits

0x176f,	// (0x0007a6bc) cale_week_day_heading_pane_t2_ParamLimits

0x179e,	// (0x0007a6eb) cale_week_day_heading_pane_t3_ParamLimits

0x17cd,	// (0x0007a71a) cale_week_day_heading_pane_t4_ParamLimits

0x17fc,	// (0x0007a749) cale_week_day_heading_pane_t5_ParamLimits

0x1833,	// (0x0007a780) cale_week_day_heading_pane_t6_ParamLimits

0x186a,	// (0x0007a7b7) cale_week_day_heading_pane_t7_ParamLimits

0xf124,	// (0x00088071) cale_week_day_heading_pane_t_ParamLimits

0xaccc,	// (0x00083c19) bg_cale_side_pane_ParamLimits

0x1894,	// (0x0007a7e1) cale_week_time_pane_t1_ParamLimits

0x18ae,	// (0x0007a7fb) cale_week_time_pane_t2_ParamLimits

0x18c8,	// (0x0007a815) cale_week_time_pane_t3_ParamLimits

0x18e2,	// (0x0007a82f) cale_week_time_pane_t4_ParamLimits

0x18fc,	// (0x0007a849) cale_week_time_pane_t5_ParamLimits

0x1916,	// (0x0007a863) cale_week_time_pane_t6_ParamLimits

0x1930,	// (0x0007a87d) cale_week_time_pane_t7_ParamLimits

0x194a,	// (0x0007a897) cale_week_time_pane_t8_ParamLimits

0xf133,	// (0x00088080) cale_week_time_pane_t_ParamLimits

0x1964,	// (0x0007a8b1) cell_cale_week_pane_g2_ParamLimits

0xaccc,	// (0x00083c19) bg_cale_side_pane_cp01_ParamLimits

0x291b,	// (0x0007b868) cale_month_week_pane_t1_ParamLimits

0x2934,	// (0x0007b881) cale_month_week_pane_t2_ParamLimits

0x294d,	// (0x0007b89a) cale_month_week_pane_t3_ParamLimits

0x2966,	// (0x0007b8b3) cale_month_week_pane_t4_ParamLimits

0x297f,	// (0x0007b8cc) cale_month_week_pane_t5_ParamLimits

0x2998,	// (0x0007b8e5) cale_month_week_pane_t6_ParamLimits

0xf201,	// (0x0008814e) cale_month_week_pane_t_ParamLimits

0xb02c,	// (0x00083f79) cell_cale_month_pane_g1_ParamLimits

0xa2ad,	// (0x000831fa) main_cale_event_viewer_pane

0xa2ad,	// (0x000831fa) listscroll_cale_event_viewer_pane

0xe976,	// (0x000878c3) list_cale_ev_pane

0xe97e,	// (0x000878cb) scroll_pane_cp023

0xe98a,	// (0x000878d7) field_cale_ev_pane_ParamLimits

0xe98a,	// (0x000878d7) field_cale_ev_pane

0xe9a8,	// (0x000878f5) field_cale_ev_content_pane_ParamLimits

0xe9a8,	// (0x000878f5) field_cale_ev_content_pane

0xe9b4,	// (0x00087901) field_cale_ev_pane_g1_ParamLimits

0xe9b4,	// (0x00087901) field_cale_ev_pane_g1

0xe9c0,	// (0x0008790d) field_cale_ev_pane_g2_ParamLimits

0xe9c0,	// (0x0008790d) field_cale_ev_pane_g2

0xe9d8,	// (0x00087925) field_cale_ev_pane_g3_ParamLimits

0xe9d8,	// (0x00087925) field_cale_ev_pane_g3

0x0002,

0xf5e7,	// (0x00088534) field_cale_ev_pane_g_ParamLimits

0xf5e7,	// (0x00088534) field_cale_ev_pane_g

0xe9f0,	// (0x0008793d) field_cale_ev_pane_t1_ParamLimits

0xe9f0,	// (0x0008793d) field_cale_ev_pane_t1

0xabf7,	// (0x00083b44) field_cale_ev_content_pane_t1_ParamLimits

0xabf7,	// (0x00083b44) field_cale_ev_content_pane_t1

0xd2e5,	// (0x00086232) bg_button_pane_cp01

0x1472,	// (0x0007a3bf) listscroll_cale_week_pane_ParamLimits

0xac77,	// (0x00083bc4) popup_toolbar_window_cp01

0xac9d,	// (0x00083bea) listscroll_cale_week_pane_t1_ParamLimits

0x1472,	// (0x0007a3bf) listscroll_cale_day_pane_ParamLimits

0xac77,	// (0x00083bc4) popup_toolbar_window_cp02

0xb0ae,	// (0x00083ffb) listscroll_cale_day_pane_t1_ParamLimits

0x1472,	// (0x0007a3bf) main_cale_month_pane_ParamLimits

0xb888,	// (0x000847d5) popup_toolbar_window_cp03_ParamLimits

0xb888,	// (0x000847d5) popup_toolbar_window_cp03

0x3319,	// (0x0007c266) main_image_pane_g2_ParamLimits

0x3319,	// (0x0007c266) main_image_pane_g2

0x332a,	// (0x0007c277) main_image_pane_g3_ParamLimits

0x332a,	// (0x0007c277) main_image_pane_g3

0x0002,

0xf409,	// (0x00088356) main_image_pane_g_ParamLimits

0xf409,	// (0x00088356) main_image_pane_g

0xd3e3,	// (0x00086330) main_image_pane_t1_ParamLimits

0x333b,	// (0x0007c288) main_image_pane_t2_ParamLimits

0x333b,	// (0x0007c288) main_image_pane_t2

0x334d,	// (0x0007c29a) main_image_pane_t3_ParamLimits

0x334d,	// (0x0007c29a) main_image_pane_t3

0x3375,	// (0x0007c2c2) main_image_pane_t4_ParamLimits

0x3375,	// (0x0007c2c2) main_image_pane_t4

0x0003,

0xf410,	// (0x0008835d) main_image_pane_t_ParamLimits

0xf410,	// (0x0008835d) main_image_pane_t

0x3395,	// (0x0007c2e2) popup_image_details_window_cp01

0x339f,	// (0x0007c2ec) popup_toobar_trans_pane_cp01_ParamLimits

0x339f,	// (0x0007c2ec) popup_toobar_trans_pane_cp01

0x3ade,	// (0x0007ca2b) popup_image_details_window_ParamLimits

0x3ade,	// (0x0007ca2b) popup_image_details_window

0xb85b,	// (0x000847a8) popup_image_focus_window

0xb8bf,	// (0x0008480c) camera2_autofocus_pane_ParamLimits

0xb8bf,	// (0x0008480c) camera2_autofocus_pane

0xa2ad,	// (0x000831fa) bg_popup_sub_pane_cp06

0xea07,	// (0x00087954) popup_image_focus_window_g1

0xea0f,	// (0x0008795c) popup_image_focus_window_g2

0xea17,	// (0x00087964) popup_image_focus_window_g3

0xea1f,	// (0x0008796c) popup_image_focus_window_g4

0x0003,

0xf5ee,	// (0x0008853b) popup_image_focus_window_g

0xea27,	// (0x00087974) popup_image_focus_window_t1

0xea35,	// (0x00087982) popup_image_focus_window_t2

0xea45,	// (0x00087992) popup_image_focus_window_t3

0x0002,

0xf5f7,	// (0x00088544) popup_image_focus_window_t

0xaa1b,	// (0x00083968) camera2_autofocus_pane_g1

0xa324,	// (0x00083271) bg_tb_trans_pane_cp01

0xea53,	// (0x000879a0) popup_image_details_window_g1

0xea66,	// (0x000879b3) popup_image_details_window_g2

0x0002,

0xf609,	// (0x00088556) popup_image_details_window_g

0xea8f,	// (0x000879dc) popup_image_details_window_t1

0xeaab,	// (0x000879f8) popup_image_details_window_t2

0xeac4,	// (0x00087a11) popup_image_details_window_t3

0xead8,	// (0x00087a25) popup_image_details_window_t4

0xeaf3,	// (0x00087a40) popup_image_details_window_t5

0x0004,

0xf610,	// (0x0008855d) popup_image_details_window_t

0xaaab,	// (0x000839f8) bg_calc_paper_pane_ParamLimits

0xa2ad,	// (0x000831fa) grid_highlight_pane_cp013

0xaabf,	// (0x00083a0c) list_calc_pane_ParamLimits

0xaad1,	// (0x00083a1e) scroll_pane_cp024

0xaad9,	// (0x00083a26) bg_calc_display_pane_ParamLimits

0x12ce,	// (0x0007a21b) calc_display_pane_t1_ParamLimits

0x12e3,	// (0x0007a230) calc_display_pane_t2_ParamLimits

0xaae5,	// (0x00083a32) calc_display_pane_t3_ParamLimits

0xf0a4,	// (0x00087ff1) calc_display_pane_t_ParamLimits

0x13a3,	// (0x0007a2f0) cell_calc_pane_g2

0x0001,

0xf0c1,	// (0x0008800e) cell_calc_pane_g

0x13ac,	// (0x0007a2f9) cell_calc_pane_t1

0xab52,	// (0x00083a9f) grid_highlight_pane_cp02_ParamLimits

0xab68,	// (0x00083ab5) toolbar_button_pane_cp01_ParamLimits

0xab68,	// (0x00083ab5) toolbar_button_pane_cp01

0xd428,	// (0x00086375) temp_image_control_pane_ParamLimits

0xd428,	// (0x00086375) temp_image_control_pane

0xa324,	// (0x00083271) main_mp3_pane

0xeb0d,	// (0x00087a5a) temp_image_control_pane_g1_ParamLimits

0xeb0d,	// (0x00087a5a) temp_image_control_pane_g1

0xeb1b,	// (0x00087a68) temp_image_control_pane_g2_ParamLimits

0xeb1b,	// (0x00087a68) temp_image_control_pane_g2

0xeb2d,	// (0x00087a7a) temp_image_control_pane_g3_ParamLimits

0xeb2d,	// (0x00087a7a) temp_image_control_pane_g3

0x3fb1,	// (0x0007cefe) temp_image_control_pane_g4_ParamLimits

0x3fb1,	// (0x0007cefe) temp_image_control_pane_g4

0x0003,

0xf61b,	// (0x00088568) temp_image_control_pane_g_ParamLimits

0xf61b,	// (0x00088568) temp_image_control_pane_g

0xeb0d,	// (0x00087a5a) main_mp3_pane_g1

0x3fc4,	// (0x0007cf11) main_mp3_pane_g2

0x0007,

0xf624,	// (0x00088571) main_mp3_pane_g

0xeb62,	// (0x00087aaf) main_mp3_pane_t1

0xaa29,	// (0x00083976) main_camera_pane_g8_ParamLimits

0xaa29,	// (0x00083976) main_camera_pane_g8

0x1b2e,	// (0x0007aa7b) main_video_pane_g7_ParamLimits

0x1b2e,	// (0x0007aa7b) main_video_pane_g7

0xaa7f,	// (0x000839cc) main_camera2_pane_t7_ParamLimits

0xaa7f,	// (0x000839cc) main_camera2_pane_t7

0xae38,	// (0x00083d85) scroll_pane_cp025_ParamLimits

0xae38,	// (0x00083d85) scroll_pane_cp025

0xae4c,	// (0x00083d99) scroll_pane_cp026_ParamLimits

0xae4c,	// (0x00083d99) scroll_pane_cp026

0xae5b,	// (0x00083da8) wml_content_pane_ParamLimits

0xa2ad,	// (0x000831fa) main_touch_calib_pane

0x4098,	// (0x0007cfe5) main_touch_calib_pane_g1

0x40aa,	// (0x0007cff7) main_touch_calib_pane_g2

0x40bc,	// (0x0007d009) main_touch_calib_pane_g3

0x40ce,	// (0x0007d01b) main_touch_calib_pane_g4

0x0003,

0xf642,	// (0x0008858f) main_touch_calib_pane_g

0x40e0,	// (0x0007d02d) main_touch_calib_pane_t1

0x40fa,	// (0x0007d047) main_touch_calib_pane_t2

0x0004,

0xf64b,	// (0x00088598) main_touch_calib_pane_t

0xb64f,	// (0x0008459c) mup_progress_pane_cp02

0xb684,	// (0x000845d1) navi_pane_g1

0xb73f,	// (0x0008468c) navi_pane_mp_t3

0xa324,	// (0x00083271) main_mp3_pane_ParamLimits

0x3c63,	// (0x0007cbb0) navi_pane_ParamLimits

0xeb0d,	// (0x00087a5a) main_mp3_pane_g1_ParamLimits

0x3fc4,	// (0x0007cf11) main_mp3_pane_g2_ParamLimits

0x3fd2,	// (0x0007cf1f) main_mp3_pane_g3_ParamLimits

0x3fd2,	// (0x0007cf1f) main_mp3_pane_g3

0x3fe0,	// (0x0007cf2d) main_mp3_pane_g4_ParamLimits

0x3fe0,	// (0x0007cf2d) main_mp3_pane_g4

0xaa1b,	// (0x00083968) main_mp3_pane_g5_ParamLimits

0xaa1b,	// (0x00083968) main_mp3_pane_g5

0xeb3d,	// (0x00087a8a) main_mp3_pane_g6_ParamLimits

0xeb3d,	// (0x00087a8a) main_mp3_pane_g6

0xeb4a,	// (0x00087a97) main_mp3_pane_g7_ParamLimits

0xeb4a,	// (0x00087a97) main_mp3_pane_g7

0xeb56,	// (0x00087aa3) main_mp3_pane_g8_ParamLimits

0xeb56,	// (0x00087aa3) main_mp3_pane_g8

0xf624,	// (0x00088571) main_mp3_pane_g_ParamLimits

0x3fec,	// (0x0007cf39) main_mp3_pane_t2

0x3ffa,	// (0x0007cf47) main_mp3_pane_t3

0xeb70,	// (0x00087abd) main_mp3_pane_t4

0xeb7e,	// (0x00087acb) main_mp3_pane_t5

0x0005,

0xf635,	// (0x00088582) main_mp3_pane_t

0xeb8c,	// (0x00087ad9) mup_progress_pane_cp01

0xb841,	// (0x0008478e) aid_zoom_text_secondary2

0xe976,	// (0x000878c3) list_cale_ev2_pane

0xe97e,	// (0x000878cb) scroll_pane_cp023_ParamLimits

0x4150,	// (0x0007d09d) field_cale_ev2_pane_ParamLimits

0x4150,	// (0x0007d09d) field_cale_ev2_pane

0x4170,	// (0x0007d0bd) field_cale_ev2_pane_g1_ParamLimits

0x4170,	// (0x0007d0bd) field_cale_ev2_pane_g1

0x417c,	// (0x0007d0c9) field_cale_ev2_pane_g2_ParamLimits

0x417c,	// (0x0007d0c9) field_cale_ev2_pane_g2

0x4194,	// (0x0007d0e1) field_cale_ev2_pane_g3_ParamLimits

0x4194,	// (0x0007d0e1) field_cale_ev2_pane_g3

0x0003,

0xf656,	// (0x000885a3) field_cale_ev2_pane_g_ParamLimits

0xf656,	// (0x000885a3) field_cale_ev2_pane_g

0xb8fd,	// (0x0008484a) field_cale_ev2_pane_t1_ParamLimits

0xb8fd,	// (0x0008484a) field_cale_ev2_pane_t1

0xb914,	// (0x00084861) field_cale_ev2_pane_t2_ParamLimits

0xb914,	// (0x00084861) field_cale_ev2_pane_t2

0x0001,

0xf65f,	// (0x000885ac) field_cale_ev2_pane_t_ParamLimits

0xf65f,	// (0x000885ac) field_cale_ev2_pane_t

0x31ef,	// (0x0007c13c) main_postcard_pane_g5_ParamLimits

0x31ef,	// (0x0007c13c) main_postcard_pane_g5

0x3205,	// (0x0007c152) main_postcard_pane_g6_ParamLimits

0x3205,	// (0x0007c152) main_postcard_pane_g6

0xa324,	// (0x00083271) camera2_autofocus_pane_cp_ParamLimits

0xa324,	// (0x00083271) camera2_autofocus_pane_cp

0xa324,	// (0x00083271) main_mup3_pane

0x41f0,	// (0x0007d13d) main_mup3_pane_g1_ParamLimits

0x41f0,	// (0x0007d13d) main_mup3_pane_g1

0x4242,	// (0x0007d18f) main_mup3_pane_g2_ParamLimits

0x4242,	// (0x0007d18f) main_mup3_pane_g2

0x42aa,	// (0x0007d1f7) main_mup3_pane_g3_ParamLimits

0x42aa,	// (0x0007d1f7) main_mup3_pane_g3

0x430e,	// (0x0007d25b) main_mup3_pane_g4_ParamLimits

0x430e,	// (0x0007d25b) main_mup3_pane_g4

0x4372,	// (0x0007d2bf) main_mup3_pane_g5_ParamLimits

0x4372,	// (0x0007d2bf) main_mup3_pane_g5

0xeb94,	// (0x00087ae1) main_mup3_pane_g6_ParamLimits

0xeb94,	// (0x00087ae1) main_mup3_pane_g6

0xaa29,	// (0x00083976) main_mup3_pane_g7_ParamLimits

0xaa29,	// (0x00083976) main_mup3_pane_g7

0x0007,

0xf66f,	// (0x000885bc) main_mup3_pane_g_ParamLimits

0xf66f,	// (0x000885bc) main_mup3_pane_g

0x443f,	// (0x0007d38c) main_mup3_pane_t1_ParamLimits

0x443f,	// (0x0007d38c) main_mup3_pane_t1

0x452d,	// (0x0007d47a) main_mup3_pane_t2_ParamLimits

0x452d,	// (0x0007d47a) main_mup3_pane_t2

0x461b,	// (0x0007d568) main_mup3_pane_t4_ParamLimits

0x461b,	// (0x0007d568) main_mup3_pane_t4

0x462d,	// (0x0007d57a) main_mup3_pane_t5_ParamLimits

0x462d,	// (0x0007d57a) main_mup3_pane_t5

0x46ff,	// (0x0007d64c) main_mup3_pane_t6_ParamLimits

0x46ff,	// (0x0007d64c) main_mup3_pane_t6

0x0005,

0xf680,	// (0x000885cd) main_mup3_pane_t_ParamLimits

0xf680,	// (0x000885cd) main_mup3_pane_t

0x47a7,	// (0x0007d6f4) mup3_progress_pane_ParamLimits

0x47a7,	// (0x0007d6f4) mup3_progress_pane

0x480f,	// (0x0007d75c) popup_mup3_control_window_ParamLimits

0x480f,	// (0x0007d75c) popup_mup3_control_window

0xebac,	// (0x00087af9) popup_mup3_text_window

0x4827,	// (0x0007d774) mup3_progress_pane_t1

0x4846,	// (0x0007d793) mup3_progress_pane_t2

0xebb4,	// (0x00087b01) mup3_progress_pane_t3

0x0002,

0xf68d,	// (0x000885da) mup3_progress_pane_t

0xebd1,	// (0x00087b1e) mup_progress_pane_cp03

0xebe1,	// (0x00087b2e) bg_tb_trans_pane_cp04

0xebe1,	// (0x00087b2e) mup3_volume_pane

0xebe9,	// (0x00087b36) popup_mup3_control_window_g1

0xebe9,	// (0x00087b36) mup3_volume_pane_g1

0xebe9,	// (0x00087b36) mup3_volume_pane_g2

0xebe9,	// (0x00087b36) mup3_volume_pane_g3

0x0002,

0xf694,	// (0x000885e1) mup3_volume_pane_g

0xa2ad,	// (0x000831fa) bg_tb_trans_pane_cp03

0xebf1,	// (0x00087b3e) popup_mup3_text_window_g1

0xebf9,	// (0x00087b46) popup_mup3_text_window_t1

0xab33,	// (0x00083a80) list_calc_item_pane_g1_ParamLimits

0xe670,	// (0x000875bd) mup_volume_pane_cp_g1

0x4114,	// (0x0007d061) main_touch_calib_pane_t3

0x4128,	// (0x0007d075) main_touch_calib_pane_t4

0x413c,	// (0x0007d089) main_touch_calib_pane_t5

0xa2b7,	// (0x00083204) aid_cell_size_toolbar2

0xa2bf,	// (0x0008320c) aid_popup3_width_pane

0xa2cb,	// (0x00083218) aid_zoom_text_msg_primary

0x1a09,	// (0x0007a956) vorec_t7

0xaaf7,	// (0x00083a44) bg_calc_paper_pane_g1_ParamLimits

0xab03,	// (0x00083a50) bg_calc_paper_pane_g2_ParamLimits

0xab0f,	// (0x00083a5c) bg_calc_paper_pane_g3_ParamLimits

0xab1b,	// (0x00083a68) bg_calc_paper_pane_g4_ParamLimits

0xab27,	// (0x00083a74) bg_calc_paper_pane_g5_ParamLimits

0x132d,	// (0x0007a27a) bg_calc_paper_pane_g6_ParamLimits

0x133c,	// (0x0007a289) bg_calc_paper_pane_g7_ParamLimits

0x134b,	// (0x0007a298) bg_calc_paper_pane_g8_ParamLimits

0xf0ab,	// (0x00087ff8) bg_calc_paper_pane_g_ParamLimits

0x135e,	// (0x0007a2ab) calc_bg_paper_pane_g9_ParamLimits

0xa324,	// (0x00083271) image_qvga_pane_ParamLimits

0xa324,	// (0x00083271) image_qvga_pane

0xa9a0,	// (0x000838ed) bg_popup_sub_pane_cp04_ParamLimits

0xd35f,	// (0x000862ac) popup_mup_playback_window_g1_ParamLimits

0xd36b,	// (0x000862b8) popup_mup_playback_window_t1_ParamLimits

0xd380,	// (0x000862cd) popup_mup_playback_window_t2_ParamLimits

0xf404,	// (0x00088351) popup_mup_playback_window_t_ParamLimits

0xaa29,	// (0x00083976) main_mup2_pane_g3_ParamLimits

0xaa29,	// (0x00083976) main_mup2_pane_g3

0x1ce9,	// (0x0007ac36) popup_toolbar_window_cp04

0xd7e5,	// (0x00086732) popup_call2_audio_second_window_g3_ParamLimits

0xd7e5,	// (0x00086732) popup_call2_audio_second_window_g3

0xdbfd,	// (0x00086b4a) popup_call2_audio_first_window_g4_ParamLimits

0xdbfd,	// (0x00086b4a) popup_call2_audio_first_window_g4

0xe244,	// (0x00087191) popup_call2_audio_in_window_g4_ParamLimits

0xe244,	// (0x00087191) popup_call2_audio_in_window_g4

0x32fb,	// (0x0007c248) aid_area_sk_bg_cut_ParamLimits

0x32fb,	// (0x0007c248) aid_area_sk_bg_cut

0xd395,	// (0x000862e2) aid_area_sk_bg_cut_2_ParamLimits

0xd395,	// (0x000862e2) aid_area_sk_bg_cut_2

0xa2ad,	// (0x000831fa) aid_placing_details_win

0xa2ad,	// (0x000831fa) aid_placing_details_win_2

0xaa1b,	// (0x00083968) camera2_autofocus_pane_g1_ParamLimits

0x1115,	// (0x0007a062) popup_fixed_preview_cale_window_ParamLimits

0x1115,	// (0x0007a062) popup_fixed_preview_cale_window

0xb7c6,	// (0x00084713) navi_slider_pane_g3

0xb7cf,	// (0x0008471c) navi_slider_pane_g4

0xb7d8,	// (0x00084725) navi_slider_pane_g5

0xb7c6,	// (0x00084713) navi_slider_pane_g6

0xb7e1,	// (0x0008472e) navi_slider_pane_g7

0xd2b2,	// (0x000861ff) mup_scale_pane_g3

0xd2bb,	// (0x00086208) mup_scale_pane_g4

0xd2c4,	// (0x00086211) mup_scale_pane_g5

0x309a,	// (0x0007bfe7) mup_scale_pane_g6

0x30a3,	// (0x0007bff0) mup_scale_pane_g7

0xaa61,	// (0x000839ae) cams2_slider_pane_g3

0xaa61,	// (0x000839ae) cams2_slider_pane_g4

0xaa61,	// (0x000839ae) cams2_slider_pane_g5

0xaa61,	// (0x000839ae) cams2_slider_pane_g6

0xaa61,	// (0x000839ae) cams2_slider_pane_g7

0xaa61,	// (0x000839ae) camera2_autofocus_pane_cp_g1

0xe4d2,	// (0x0008741f) bg_popup_preview_window_pane_cp02_ParamLimits

0xe4d2,	// (0x0008741f) bg_popup_preview_window_pane_cp02

0xec07,	// (0x00087b54) list_fp_cale_pane_ParamLimits

0xec07,	// (0x00087b54) list_fp_cale_pane

0xec13,	// (0x00087b60) popup_fixed_preview_cale_window_t1_ParamLimits

0xec13,	// (0x00087b60) popup_fixed_preview_cale_window_t1

0x4865,	// (0x0007d7b2) popup_fixed_preview_cale_window_t2_ParamLimits

0x4865,	// (0x0007d7b2) popup_fixed_preview_cale_window_t2

0x487a,	// (0x0007d7c7) popup_fixed_preview_cale_window_t3_ParamLimits

0x487a,	// (0x0007d7c7) popup_fixed_preview_cale_window_t3

0x0002,

0xf69b,	// (0x000885e8) popup_fixed_preview_cale_window_t_ParamLimits

0xf69b,	// (0x000885e8) popup_fixed_preview_cale_window_t

0x488f,	// (0x0007d7dc) list_single_fp_cale_pane_ParamLimits

0x488f,	// (0x0007d7dc) list_single_fp_cale_pane

0xec31,	// (0x00087b7e) list_single_fp_cale_pane_g1_ParamLimits

0xec31,	// (0x00087b7e) list_single_fp_cale_pane_g1

0xec3d,	// (0x00087b8a) list_single_fp_cale_pane_g2_ParamLimits

0xec3d,	// (0x00087b8a) list_single_fp_cale_pane_g2

0x0002,

0x01b7,	// (0x00079104) list_single_fp_cale_pane_g_ParamLimits

0x01b7,	// (0x00079104) list_single_fp_cale_pane_g

0xec56,	// (0x00087ba3) list_single_fp_cale_pane_t1_ParamLimits

0xec56,	// (0x00087ba3) list_single_fp_cale_pane_t1

0xec68,	// (0x00087bb5) list_single_fp_cale_pane_t2_ParamLimits

0xec68,	// (0x00087bb5) list_single_fp_cale_pane_t2

0x0001,

0x01be,	// (0x0007910b) list_single_fp_cale_pane_t_ParamLimits

0x01be,	// (0x0007910b) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xa2ad,	// (0x000831fa) main_dialer_pane

0xa2ad,	// (0x000831fa) aid_cell_size_keypad

0xa2ad,	// (0x000831fa) dialer_ne_pane

0xa2ad,	// (0x000831fa) grid_dialer_command_1_pane

0xa2ad,	// (0x000831fa) grid_dialer_command_2_pane

0xa2ad,	// (0x000831fa) grid_dialer_keypad_pane

0x48a4,	// (0x0007d7f1) bg_popup_call_pane_cp06_ParamLimits

0x48a4,	// (0x0007d7f1) bg_popup_call_pane_cp06

0x48a4,	// (0x0007d7f1) dialer_ne_clear_pane_ParamLimits

0x48a4,	// (0x0007d7f1) dialer_ne_clear_pane

0xaa61,	// (0x000839ae) dialer_ne_pane_g1

0xaa7f,	// (0x000839cc) dialer_ne_pane_t1_ParamLimits

0xaa7f,	// (0x000839cc) dialer_ne_pane_t1

0x48b2,	// (0x0007d7ff) dialer_ne_pane_t2_ParamLimits

0x48b2,	// (0x0007d7ff) dialer_ne_pane_t2

0x48da,	// (0x0007d827) dialer_ne_pane_t3_ParamLimits

0x48da,	// (0x0007d827) dialer_ne_pane_t3

0x0002,

0xf6a2,	// (0x000885ef) dialer_ne_pane_t_ParamLimits

0xf6a2,	// (0x000885ef) dialer_ne_pane_t

0x48da,	// (0x0007d827) dialer_ne_pane_t3_copy1_ParamLimits

0x48da,	// (0x0007d827) dialer_ne_pane_t3_copy1

0xec9b,	// (0x00087be8) cell_dialer_keypad_pane_ParamLimits

0xec9b,	// (0x00087be8) cell_dialer_keypad_pane

0xa324,	// (0x00083271) cell_dialer_command_1_pane_ParamLimits

0xa324,	// (0x00083271) cell_dialer_command_1_pane

0xecb2,	// (0x00087bff) cell_dialer_command_2_pane_ParamLimits

0xecb2,	// (0x00087bff) cell_dialer_command_2_pane

0xa324,	// (0x00083271) bg_button_pane_cp02_ParamLimits

0xa324,	// (0x00083271) bg_button_pane_cp02

0xaa1b,	// (0x00083968) cell_dialer_keypad_pane_g1_ParamLimits

0xaa1b,	// (0x00083968) cell_dialer_keypad_pane_g1

0xa324,	// (0x00083271) bg_button_pane_cp03_ParamLimits

0xa324,	// (0x00083271) bg_button_pane_cp03

0xaa1b,	// (0x00083968) cell_dialer_command_1_pane_g1_ParamLimits

0xaa1b,	// (0x00083968) cell_dialer_command_1_pane_g1

0xa2ad,	// (0x000831fa) bg_button_pane_cp04

0xaa61,	// (0x000839ae) cell_dialer_command_2_pane_g1

0xa2ad,	// (0x000831fa) bg_button_pane_cp06

0xaa61,	// (0x000839ae) dialer_ne_clear_pane_g1

0xb690,	// (0x000845dd) navi_pane_g2

0xb6be,	// (0x0008460b) navi_pane_g3

0x0002,

0xf30c,	// (0x00088259) navi_pane_g

0xb74d,	// (0x0008469a) navi_pane_mv_g2

0xb774,	// (0x000846c1) navi_pane_mv_g5

0x2e7d,	// (0x0007bdca) navi_pane_mv_t1

0xaad9,	// (0x00083a26) main_clock2_pane

0xa324,	// (0x00083271) main_clock2_list_pane_ParamLimits

0xa324,	// (0x00083271) main_clock2_list_pane

0x4970,	// (0x0007d8bd) main_clock2_pane_t1_ParamLimits

0x4970,	// (0x0007d8bd) main_clock2_pane_t1

0x49ab,	// (0x0007d8f8) main_clock2_pane_t2_ParamLimits

0x49ab,	// (0x0007d8f8) main_clock2_pane_t2

0x0004,

0xf6a9,	// (0x000885f6) main_clock2_pane_t_ParamLimits

0xf6a9,	// (0x000885f6) main_clock2_pane_t

0x4a4b,	// (0x0007d998) popup_clock_analogue_window_cp03_ParamLimits

0x4a4b,	// (0x0007d998) popup_clock_analogue_window_cp03

0x4a70,	// (0x0007d9bd) popup_clock_digital_window_cp02_ParamLimits

0x4a70,	// (0x0007d9bd) popup_clock_digital_window_cp02

0x4ae9,	// (0x0007da36) main_clock2_list_single_pane_ParamLimits

0x4ae9,	// (0x0007da36) main_clock2_list_single_pane

0xad1e,	// (0x00083c6b) list_highlight_pane_cp05

0xecf7,	// (0x00087c44) main_clock2_list_single_pane_t1

0x1ce9,	// (0x0007ac36) popup_toolbar_window_cp04_ParamLimits

0xaa29,	// (0x00083976) camera2_autofocus_pane_g2_ParamLimits

0xaa29,	// (0x00083976) camera2_autofocus_pane_g2

0xaa29,	// (0x00083976) camera2_autofocus_pane_g3_ParamLimits

0xaa29,	// (0x00083976) camera2_autofocus_pane_g3

0xaa29,	// (0x00083976) camera2_autofocus_pane_g4_ParamLimits

0xaa29,	// (0x00083976) camera2_autofocus_pane_g4

0xaa29,	// (0x00083976) camera2_autofocus_pane_g5_ParamLimits

0xaa29,	// (0x00083976) camera2_autofocus_pane_g5

0x0004,

0xf5fe,	// (0x0008854b) camera2_autofocus_pane_g_ParamLimits

0xf5fe,	// (0x0008854b) camera2_autofocus_pane_g

0x41ac,	// (0x0007d0f9) camera2_autofocus_pane_cp_g2

0x41b4,	// (0x0007d101) camera2_autofocus_pane_cp_g3

0x41bc,	// (0x0007d109) camera2_autofocus_pane_cp_g4

0x41c4,	// (0x0007d111) camera2_autofocus_pane_cp_g5

0x0004,

0xf664,	// (0x000885b1) camera2_autofocus_pane_cp_g

0xa2ad,	// (0x000831fa) popup_dialer_spcha_window

0xa2ad,	// (0x000831fa) bg_popup_sub_pane_cp07

0xa2ad,	// (0x000831fa) list_spcha_pane

0xed05,	// (0x00087c52) list_single_spcha_pane_ParamLimits

0xed05,	// (0x00087c52) list_single_spcha_pane

0xa2ad,	// (0x000831fa) list_highlight_pane_cp06

0xb253,	// (0x000841a0) list_single_spcha_pane_t1

0xdfce,	// (0x00086f1b) popup_call2_audio_out_window_g4_ParamLimits

0xdfce,	// (0x00086f1b) popup_call2_audio_out_window_g4

0xa2ad,	// (0x000831fa) main_imed2_pane

0xb863,	// (0x000847b0) popup_imed_adjust2_window

0x3af6,	// (0x0007ca43) popup_imed_trans_window_ParamLimits

0x3af6,	// (0x0007ca43) popup_imed_trans_window

0xe745,	// (0x00087692) popup_blid_sat_info2_window_t1

0xe753,	// (0x000876a0) popup_blid_sat_info2_window_t2

0x000a,

0xf593,	// (0x000884e0) popup_blid_sat_info2_window_t

0x4b9a,	// (0x0007dae7) aid_size_cell_colour_35

0x4bba,	// (0x0007db07) aid_size_cell_colour_112

0x4bda,	// (0x0007db27) aid_size_cell_effect

0xd242,	// (0x0008618f) bg_tb_trans_pane_cp02

0x4bfa,	// (0x0007db47) heading_imed_pane

0x4c06,	// (0x0007db53) listscroll_imed_pane

0xed17,	// (0x00087c64) heading_imed_pane_g1

0xed1f,	// (0x00087c6c) heading_imed_pane_t1

0xed2d,	// (0x00087c7a) grid_imed_colour_35_pane_ParamLimits

0xed2d,	// (0x00087c7a) grid_imed_colour_35_pane

0x4c12,	// (0x0007db5f) grid_imed_effect_pane

0xed44,	// (0x00087c91) list_imed_aspect_pane

0x4c28,	// (0x0007db75) scroll_pane_cp027_ParamLimits

0x4c28,	// (0x0007db75) scroll_pane_cp027

0x4c39,	// (0x0007db86) cell_imed_effect_pane_ParamLimits

0x4c39,	// (0x0007db86) cell_imed_effect_pane

0xed4c,	// (0x00087c99) cell_imed_colour_pane_ParamLimits

0xed4c,	// (0x00087c99) cell_imed_colour_pane

0xed8e,	// (0x00087cdb) cell_imed_colour_pane_g1_ParamLimits

0xed8e,	// (0x00087cdb) cell_imed_colour_pane_g1

0xed9f,	// (0x00087cec) hgihlgiht_grid_pane_cp016_ParamLimits

0xed9f,	// (0x00087cec) hgihlgiht_grid_pane_cp016

0x4c60,	// (0x0007dbad) cell_imed_effect_pane_g1

0x4c68,	// (0x0007dbb5) grid_highlight_pane_cp017

0xedb0,	// (0x00087cfd) list_imed_single_pane_ParamLimits

0xedb0,	// (0x00087cfd) list_imed_single_pane

0xa2ad,	// (0x000831fa) list_highlight_pane_cp07

0xedc5,	// (0x00087d12) list_imed_aspect_pane_comp1_t1

0xd242,	// (0x0008618f) bg_tb_trans_pane_cp05

0xede7,	// (0x00087d34) popup_imed_adjust2_window_g1

0xee0e,	// (0x00087d5b) popup_imed_adjust2_window_t1

0xee26,	// (0x00087d73) slider_imed_adjust_pane

0xee3a,	// (0x00087d87) slider_imed_adjust_pane_g1

0xee4a,	// (0x00087d97) slider_imed_adjust_pane_g2

0xee5a,	// (0x00087da7) slider_imed_adjust_pane_g3

0xee6b,	// (0x00087db8) slider_imed_adjust_pane_g4

0x0003,

0xf6bf,	// (0x0008860c) slider_imed_adjust_pane_g

0x4c71,	// (0x0007dbbe) aid_size_cell_clipart2

0x4c7d,	// (0x0007dbca) grid_imed_clipart_pane

0xd2d5,	// (0x00086222) scroll_pane_cp031

0x4c87,	// (0x0007dbd4) cell_imed_clipart_pane_ParamLimits

0x4c87,	// (0x0007dbd4) cell_imed_clipart_pane

0x4ca9,	// (0x0007dbf6) cell_imed_clipart_pane_g1

0xa2ad,	// (0x000831fa) grid_highlight_pane_cp014

0x494c,	// (0x0007d899) main_clock2_pane_g1_ParamLimits

0x494c,	// (0x0007d899) main_clock2_pane_g1

0x4a90,	// (0x0007d9dd) aid_call2_pane_cp10

0x4aa2,	// (0x0007d9ef) aid_call_pane_cp10

0xb5f1,	// (0x0008453e) popup_clock_analogue_window_cp10_g1

0xb5f1,	// (0x0008453e) popup_clock_analogue_window_cp10_g2

0x4ab4,	// (0x0007da01) popup_clock_analogue_window_cp10_g3

0x4ab4,	// (0x0007da01) popup_clock_analogue_window_cp10_g4

0xb5f1,	// (0x0008453e) popup_clock_analogue_window_cp10_g5

0x0004,

0xf6b4,	// (0x00088601) popup_clock_analogue_window_cp10_g

0x4aca,	// (0x0007da17) popup_clock_analogue_window_cp10_t1

0x4afb,	// (0x0007da48) clock_digital_number_pane_cp10_ParamLimits

0x4afb,	// (0x0007da48) clock_digital_number_pane_cp10

0x4b13,	// (0x0007da60) clock_digital_number_pane_cp11_ParamLimits

0x4b13,	// (0x0007da60) clock_digital_number_pane_cp11

0x4b2b,	// (0x0007da78) clock_digital_number_pane_cp12_ParamLimits

0x4b2b,	// (0x0007da78) clock_digital_number_pane_cp12

0x4b45,	// (0x0007da92) clock_digital_number_pane_cp13_ParamLimits

0x4b45,	// (0x0007da92) clock_digital_number_pane_cp13

0x4b5f,	// (0x0007daac) clock_digital_separator_pane_cp10_ParamLimits

0x4b5f,	// (0x0007daac) clock_digital_separator_pane_cp10

0x4b79,	// (0x0007dac6) popup_clock_digital_window_cp02_t1_ParamLimits

0x4b79,	// (0x0007dac6) popup_clock_digital_window_cp02_t1

0xa998,	// (0x000838e5) clock_digital_number_pane_cp10_g1

0xa998,	// (0x000838e5) clock_digital_number_pane_cp10_g2

0x0001,

0xf6c8,	// (0x00088615) clock_digital_number_pane_cp10_g

0xa998,	// (0x000838e5) clock_digital_separator_pane_cp10_g1

0xa998,	// (0x000838e5) clock_digital_separator_pane_g2_cp10

0xb77c,	// (0x000846c9) navi_pane_vded_g4

0xb785,	// (0x000846d2) navi_pane_vded_g5

0xb78e,	// (0x000846db) navi_pane_vded_t1

0xa2ad,	// (0x000831fa) main_vded_pane

0x4cb2,	// (0x0007dbff) main_vded_pane_g1

0x4cbc,	// (0x0007dc09) main_vded_pane_g2

0x4cc6,	// (0x0007dc13) main_vded_pane_g3

0x0002,

0xf6cd,	// (0x0008861a) main_vded_pane_g

0x4cd0,	// (0x0007dc1d) main_vded_pane_t1

0x4cde,	// (0x0007dc2b) main_vded_pane_t2

0x0001,

0xf6d4,	// (0x00088621) main_vded_pane_t

0x4cec,	// (0x0007dc39) vded_slider_pane

0x4cf4,	// (0x0007dc41) vded_video_pane

0xee7c,	// (0x00087dc9) vded_video_pane_g1

0x4cfc,	// (0x0007dc49) vded_video_pane_g2

0xaa61,	// (0x000839ae) vded_video_pane_g3

0x0002,

0xf6d9,	// (0x00088626) vded_video_pane_g

0xee86,	// (0x00087dd3) vded_slider_pane_g1

0xe670,	// (0x000875bd) vded_slider_pane_g2

0xee8f,	// (0x00087ddc) vded_slider_pane_g3

0xee98,	// (0x00087de5) vded_slider_pane_g4

0xeea1,	// (0x00087dee) vded_slider_pane_g5

0x0004,

0xf6e0,	// (0x0008862d) vded_slider_pane_g

0xeba0,	// (0x00087aed) mup3_rocker_pane_ParamLimits

0xeba0,	// (0x00087aed) mup3_rocker_pane

0xebe9,	// (0x00087b36) mup3_control_keys_pane_g1

0xeeaa,	// (0x00087df7) mup3_control_keys_pane_g2

0xebe9,	// (0x00087b36) mup3_control_keys_pane_g3

0xeeb2,	// (0x00087dff) mup3_control_keys_pane_g4

0x0003,

0xf6eb,	// (0x00088638) mup3_control_keys_pane_g

0x114c,	// (0x0007a099) popup_toolbar2_fixed_window_cp01_ParamLimits

0x114c,	// (0x0007a099) popup_toolbar2_fixed_window_cp01

0xeba0,	// (0x00087aed) popup_toolbar2_fixed_window_cp02_ParamLimits

0xeba0,	// (0x00087aed) popup_toolbar2_fixed_window_cp02

0xd957,	// (0x000868a4) popup_call2_audio_second_window_t4_ParamLimits

0xd957,	// (0x000868a4) popup_call2_audio_second_window_t4

0xde93,	// (0x00086de0) popup_call2_audio_first_window_t6_ParamLimits

0xde93,	// (0x00086de0) popup_call2_audio_first_window_t6

0xe0f1,	// (0x0008703e) popup_call2_audio_out_window_t6_ParamLimits

0xe0f1,	// (0x0008703e) popup_call2_audio_out_window_t6

0xa2ad,	// (0x000831fa) main_vitu_pane

0xa324,	// (0x00083271) aid_size_cell_itu_ParamLimits

0xa324,	// (0x00083271) aid_size_cell_itu

0xa324,	// (0x00083271) bg_popup_window_pane_cp08_ParamLimits

0xa324,	// (0x00083271) bg_popup_window_pane_cp08

0xa324,	// (0x00083271) field_vitu_entry_pane_ParamLimits

0xa324,	// (0x00083271) field_vitu_entry_pane

0xa324,	// (0x00083271) grid_vitu_function_pane_ParamLimits

0xa324,	// (0x00083271) grid_vitu_function_pane

0xa324,	// (0x00083271) grid_vitu_itu_pane_ParamLimits

0xa324,	// (0x00083271) grid_vitu_itu_pane

0xa324,	// (0x00083271) cell_vitu_itu_pane_ParamLimits

0xa324,	// (0x00083271) cell_vitu_itu_pane

0xa324,	// (0x00083271) cell_vitu_function_pane_ParamLimits

0xa324,	// (0x00083271) cell_vitu_function_pane

0xa324,	// (0x00083271) bg_popup_sub_pane_cp08_ParamLimits

0xa324,	// (0x00083271) bg_popup_sub_pane_cp08

0xaa6b,	// (0x000839b8) field_vitu_entry_pane_t1_ParamLimits

0xaa6b,	// (0x000839b8) field_vitu_entry_pane_t1

0xeeba,	// (0x00087e07) field_vitu_entry_pane_t2_ParamLimits

0xeeba,	// (0x00087e07) field_vitu_entry_pane_t2

0x0001,

0xf6f4,	// (0x00088641) field_vitu_entry_pane_t_ParamLimits

0xf6f4,	// (0x00088641) field_vitu_entry_pane_t

0xe5ad,	// (0x000874fa) bg_button_pane_cp05_ParamLimits

0xe5ad,	// (0x000874fa) bg_button_pane_cp05

0xeed7,	// (0x00087e24) cell_vitu_itu_pane_g1

0xe0dd,	// (0x0008702a) cell_vitu_itu_pane_t1_ParamLimits

0xe0dd,	// (0x0008702a) cell_vitu_itu_pane_t1

0xe0dd,	// (0x0008702a) cell_vitu_itu_pane_t2_ParamLimits

0xe0dd,	// (0x0008702a) cell_vitu_itu_pane_t2

0x0002,

0xf6f9,	// (0x00088646) cell_vitu_itu_pane_t_ParamLimits

0xf6f9,	// (0x00088646) cell_vitu_itu_pane_t

0xa2ad,	// (0x000831fa) bg_button_pane_cp07

0xaa61,	// (0x000839ae) cell_vitu_function_pane_g1

0xaa59,	// (0x000839a6) main_calc_pane_g1

0x0f74,	// (0x00079ec1) aid_visual_content_pane

0xa2ad,	// (0x000831fa) main_vradio_pane

0xaa1b,	// (0x00083968) main_vradio_pane_g1_ParamLimits

0xaa1b,	// (0x00083968) main_vradio_pane_g1

0xaa29,	// (0x00083976) main_vradio_pane_g2_ParamLimits

0xaa29,	// (0x00083976) main_vradio_pane_g2

0x0001,

0xf700,	// (0x0008864d) main_vradio_pane_g_ParamLimits

0xf700,	// (0x0008864d) main_vradio_pane_g

0xaa6b,	// (0x000839b8) main_vradio_pane_t1_ParamLimits

0xaa6b,	// (0x000839b8) main_vradio_pane_t1

0xaa6b,	// (0x000839b8) main_vradio_pane_t2_ParamLimits

0xaa6b,	// (0x000839b8) main_vradio_pane_t2

0xaa7f,	// (0x000839cc) main_vradio_pane_t3_ParamLimits

0xaa7f,	// (0x000839cc) main_vradio_pane_t3

0x0002,

0xf705,	// (0x00088652) main_vradio_pane_t_ParamLimits

0xf705,	// (0x00088652) main_vradio_pane_t

0xa324,	// (0x00083271) vradio_rocker_control_pane_ParamLimits

0xa324,	// (0x00083271) vradio_rocker_control_pane

0xa324,	// (0x00083271) vradio_station_info_pane_ParamLimits

0xa324,	// (0x00083271) vradio_station_info_pane

0xa324,	// (0x00083271) vradio_frequency_info_pane_ParamLimits

0xa324,	// (0x00083271) vradio_frequency_info_pane

0xaa61,	// (0x000839ae) vradio_station_info_pane_g1

0xe0dd,	// (0x0008702a) vradio_station_info_pane_t1_ParamLimits

0xe0dd,	// (0x0008702a) vradio_station_info_pane_t1

0xaa7f,	// (0x000839cc) vradio_station_info_pane_t2_ParamLimits

0xaa7f,	// (0x000839cc) vradio_station_info_pane_t2

0x0001,

0xf70c,	// (0x00088659) vradio_station_info_pane_t_ParamLimits

0xf70c,	// (0x00088659) vradio_station_info_pane_t

0xa2ad,	// (0x000831fa) vradio_tuning_pane

0x4d05,	// (0x0007dc52) vradio_rocker_control_pane_g1

0xeef3,	// (0x00087e40) vradio_rocker_control_pane_g2

0x4d0f,	// (0x0007dc5c) vradio_rocker_control_pane_g3

0x4d19,	// (0x0007dc66) vradio_rocker_control_pane_g4

0x4d23,	// (0x0007dc70) vradio_rocker_control_pane_g5

0x0004,

0xf711,	// (0x0008865e) vradio_rocker_control_pane_g

0xaa61,	// (0x000839ae) vradio_frequency_info_pane_g1

0xaa6b,	// (0x000839b8) vradio_frequency_info_pane_t1_ParamLimits

0xaa6b,	// (0x000839b8) vradio_frequency_info_pane_t1

0x4d2d,	// (0x0007dc7a) vradio_tuning_pane_g1

0x4d3a,	// (0x0007dc87) vradio_tuning_pane_t1

0xa2e3,	// (0x00083230) area_side_right_pane_ParamLimits

0xa2e3,	// (0x00083230) area_side_right_pane

0xe499,	// (0x000873e6) status_small_pane_g1

0xe4a1,	// (0x000873ee) status_small_pane_g2

0xe4aa,	// (0x000873f7) status_small_pane_g3

0xe4b3,	// (0x00087400) status_small_pane_g4

0x0003,

0xf4fc,	// (0x00088449) status_small_pane_g

0xe4bc,	// (0x00087409) status_small_pane_t1

0xa2ad,	// (0x000831fa) main_video3_pane

0xa2ad,	// (0x000831fa) cams_zoom_vslider_pane

0xeefb,	// (0x00087e48) image3_wide_pane_ParamLimits

0xeefb,	// (0x00087e48) image3_wide_pane

0xa2ad,	// (0x000831fa) image3_wide_small_pane

0xef15,	// (0x00087e62) main_video3_pane_g1_ParamLimits

0xef15,	// (0x00087e62) main_video3_pane_g1

0xef15,	// (0x00087e62) main_video3_pane_g2_ParamLimits

0xef15,	// (0x00087e62) main_video3_pane_g2

0x0001,

0x0244,	// (0x00079191) main_video3_pane_g_ParamLimits

0x0244,	// (0x00079191) main_video3_pane_g

0xef33,	// (0x00087e80) main_video3_pane_t1_ParamLimits

0xef33,	// (0x00087e80) main_video3_pane_t1

0xef33,	// (0x00087e80) main_video3_pane_t2_ParamLimits

0xef33,	// (0x00087e80) main_video3_pane_t2

0xef33,	// (0x00087e80) main_video3_pane_t3_ParamLimits

0xef33,	// (0x00087e80) main_video3_pane_t3

0x0002,

0x0249,	// (0x00079196) main_video3_pane_t_ParamLimits

0x0249,	// (0x00079196) main_video3_pane_t

0xaa61,	// (0x000839ae) cams_zoom_vslider_pane_g1

0xaa61,	// (0x000839ae) cams_zoom_vslider_pane_g2

0x0001,

0xf08c,	// (0x00087fd9) cams_zoom_vslider_pane_g

0xa2ad,	// (0x000831fa) small_slider_vertical_pane

0xaa61,	// (0x000839ae) small_slider_vertical_pane_g1

0xaa61,	// (0x000839ae) small_slider_vertical_pane_g2

0xef5a,	// (0x00087ea7) small_slider_vertical_pane_g3

0x0002,

0xf71c,	// (0x00088669) small_slider_vertical_pane_g

0xa2ad,	// (0x000831fa) main_hwr_training_pane

0xef63,	// (0x00087eb0) hwr_training_instruct_pane_ParamLimits

0xef63,	// (0x00087eb0) hwr_training_instruct_pane

0x4d49,	// (0x0007dc96) hwr_training_navi_pane_ParamLimits

0x4d49,	// (0x0007dc96) hwr_training_navi_pane

0x4d68,	// (0x0007dcb5) hwr_training_write_pane_ParamLimits

0x4d68,	// (0x0007dcb5) hwr_training_write_pane

0xa2ad,	// (0x000831fa) bg_frame_shadow_pane

0xef9a,	// (0x00087ee7) hwr_training_write_pane_g1

0xefa2,	// (0x00087eef) hwr_training_write_pane_g2

0xefaa,	// (0x00087ef7) hwr_training_write_pane_g3

0xefb2,	// (0x00087eff) hwr_training_write_pane_g4

0xefba,	// (0x00087f07) hwr_training_write_pane_g5

0xefc2,	// (0x00087f0f) hwr_training_write_pane_g6

0xefca,	// (0x00087f17) hwr_training_write_pane_g7

0x0006,

0x0257,	// (0x000791a4) hwr_training_write_pane_g

0xb929,	// (0x00084876) hwr_training_navi_pane_g1_ParamLimits

0xb929,	// (0x00084876) hwr_training_navi_pane_g1

0xb93b,	// (0x00084888) hwr_training_navi_pane_g2_ParamLimits

0xb93b,	// (0x00084888) hwr_training_navi_pane_g2

0xb94d,	// (0x0008489a) hwr_training_navi_pane_g3_ParamLimits

0xb94d,	// (0x0008489a) hwr_training_navi_pane_g3

0xb95d,	// (0x000848aa) hwr_training_navi_pane_g4_ParamLimits

0xb95d,	// (0x000848aa) hwr_training_navi_pane_g4

0x0004,

0xf723,	// (0x00088670) hwr_training_navi_pane_g_ParamLimits

0xf723,	// (0x00088670) hwr_training_navi_pane_g

0xb96a,	// (0x000848b7) hwr_training_navi_pane_t1

0x4db0,	// (0x0007dcfd) list_single_hwr_training_instruct_pane_ParamLimits

0x4db0,	// (0x0007dcfd) list_single_hwr_training_instruct_pane

0xefd2,	// (0x00087f1f) list_single_hwr_training_instruct_pane_t1

0xe846,	// (0x00087793) bg_frame_shadow_pane_g1

0xefe1,	// (0x00087f2e) bg_frame_shadow_pane_g2

0xefe9,	// (0x00087f36) bg_frame_shadow_pane_g3

0xeff1,	// (0x00087f3e) bg_frame_shadow_pane_g4

0xeff9,	// (0x00087f46) bg_frame_shadow_pane_g5

0xf001,	// (0x00087f4e) bg_frame_shadow_pane_g6

0xf009,	// (0x00087f56) bg_frame_shadow_pane_g7

0xabb5,	// (0x00083b02) bg_frame_shadow_pane_g8

0x0007,

0xf72e,	// (0x0008867b) bg_frame_shadow_pane_g

0xa2ad,	// (0x000831fa) main_video_tele_dialer_pane

0x4dc5,	// (0x0007dd12) aid_size_cell_video_keypad_ParamLimits

0x4dc5,	// (0x0007dd12) aid_size_cell_video_keypad

0x4ddf,	// (0x0007dd2c) grid_video_dialer_keypad_pane_ParamLimits

0x4ddf,	// (0x0007dd2c) grid_video_dialer_keypad_pane

0x4e2b,	// (0x0007dd78) video_down_pane_cp_ParamLimits

0x4e2b,	// (0x0007dd78) video_down_pane_cp

0x4e5d,	// (0x0007ddaa) cell_video_dialer_keypad_pane_ParamLimits

0x4e5d,	// (0x0007ddaa) cell_video_dialer_keypad_pane

0xf011,	// (0x00087f5e) bg_button_pane_cp08_ParamLimits

0xf011,	// (0x00087f5e) bg_button_pane_cp08

0x4e7f,	// (0x0007ddcc) cell_video_dialer_keypad_pane_g1_ParamLimits

0x4e7f,	// (0x0007ddcc) cell_video_dialer_keypad_pane_g1

0xeba0,	// (0x00087aed) mup3_rocker2_pane_ParamLimits

0xeba0,	// (0x00087aed) mup3_rocker2_pane

0xaa61,	// (0x000839ae) mup3_rocker2_pane_g1

0x39d7,	// (0x0007c924) main_dialer2_pane

0xa2ad,	// (0x000831fa) main_mp4_pane

0xb996,	// (0x000848e3) main_mp4_pane_g1_ParamLimits

0xb996,	// (0x000848e3) main_mp4_pane_g1

0xb996,	// (0x000848e3) main_mp4_pane_g2_ParamLimits

0xb996,	// (0x000848e3) main_mp4_pane_g2

0x4eb6,	// (0x0007de03) main_mp4_pane_g3_ParamLimits

0x4eb6,	// (0x0007de03) main_mp4_pane_g3

0xb9b4,	// (0x00084901) main_mp4_pane_g4_ParamLimits

0xb9b4,	// (0x00084901) main_mp4_pane_g4

0xb9dc,	// (0x00084929) main_mp4_pane_g5_ParamLimits

0xb9dc,	// (0x00084929) main_mp4_pane_g5

0x0007,

0xf74e,	// (0x0008869b) main_mp4_pane_g_ParamLimits

0xf74e,	// (0x0008869b) main_mp4_pane_g

0xba44,	// (0x00084991) main_mp4_pane_t1_ParamLimits

0xba44,	// (0x00084991) main_mp4_pane_t1

0xbaa6,	// (0x000849f3) main_mp4_pane_t2_ParamLimits

0xbaa6,	// (0x000849f3) main_mp4_pane_t2

0xbb0a,	// (0x00084a57) main_mp4_pane_t3_ParamLimits

0xbb0a,	// (0x00084a57) main_mp4_pane_t3

0xbb68,	// (0x00084ab5) main_mp4_pane_t4_ParamLimits

0xbb68,	// (0x00084ab5) main_mp4_pane_t4

0x0003,

0xf75f,	// (0x000886ac) main_mp4_pane_t_ParamLimits

0xf75f,	// (0x000886ac) main_mp4_pane_t

0xbbc6,	// (0x00084b13) mp4_progress_pane_ParamLimits

0xbbc6,	// (0x00084b13) mp4_progress_pane

0xbbfa,	// (0x00084b47) mp4_rocker_pane_ParamLimits

0xbbfa,	// (0x00084b47) mp4_rocker_pane

0x4eee,	// (0x0007de3b) mp4_progress_pane_t1

0x4f0d,	// (0x0007de5a) mp4_progress_pane_t2

0x0001,

0xf768,	// (0x000886b5) mp4_progress_pane_t

0x4f2c,	// (0x0007de79) mup_progress_pane_cp04

0xaa61,	// (0x000839ae) mp4_rocker_pane_g1

0xa324,	// (0x00083271) aid_cell_size_keypad2_ParamLimits

0xa324,	// (0x00083271) aid_cell_size_keypad2

0xa324,	// (0x00083271) dialer2_ne_pane_ParamLimits

0xa324,	// (0x00083271) dialer2_ne_pane

0xa324,	// (0x00083271) grid_dialer2_keypad_pane_ParamLimits

0xa324,	// (0x00083271) grid_dialer2_keypad_pane

0xe5ad,	// (0x000874fa) bg_popup_call_pane_cp07_ParamLimits

0xe5ad,	// (0x000874fa) bg_popup_call_pane_cp07

0x4f3f,	// (0x0007de8c) dialer2_ne_pane_t1_ParamLimits

0x4f3f,	// (0x0007de8c) dialer2_ne_pane_t1

0x4f8f,	// (0x0007dedc) cell_dialer2_keypad_pane_ParamLimits

0x4f8f,	// (0x0007dedc) cell_dialer2_keypad_pane

0xe5ad,	// (0x000874fa) bg_button_pane_pane_cp04_ParamLimits

0xe5ad,	// (0x000874fa) bg_button_pane_pane_cp04

0xaa1b,	// (0x00083968) cell_dialer2_keypad_pane_g1_ParamLimits

0xaa1b,	// (0x00083968) cell_dialer2_keypad_pane_g1

0x1bbd,	// (0x0007ab0a) aid_placing_vt_set_content_ParamLimits

0x1bbd,	// (0x0007ab0a) aid_placing_vt_set_content

0x1be5,	// (0x0007ab32) aid_placing_vt_set_title_ParamLimits

0x1be5,	// (0x0007ab32) aid_placing_vt_set_title

0xa2ad,	// (0x000831fa) main_image3_pane

0x5020,	// (0x0007df6d) area_side_right_pane_cp01_ParamLimits

0x5020,	// (0x0007df6d) area_side_right_pane_cp01

0x5037,	// (0x0007df84) main_image3_pane_g1_ParamLimits

0x5037,	// (0x0007df84) main_image3_pane_g1

0x5045,	// (0x0007df92) main_image3_pane_g2_ParamLimits

0x5045,	// (0x0007df92) main_image3_pane_g2

0x506d,	// (0x0007dfba) main_image3_pane_g3_ParamLimits

0x506d,	// (0x0007dfba) main_image3_pane_g3

0x5097,	// (0x0007dfe4) main_image3_pane_g4_ParamLimits

0x5097,	// (0x0007dfe4) main_image3_pane_g4

0x0003,

0xf777,	// (0x000886c4) main_image3_pane_g_ParamLimits

0xf777,	// (0x000886c4) main_image3_pane_g

0x50c1,	// (0x0007e00e) main_image3_pane_t1_ParamLimits

0x50c1,	// (0x0007e00e) main_image3_pane_t1

0x5119,	// (0x0007e066) main_image3_pane_t2_ParamLimits

0x5119,	// (0x0007e066) main_image3_pane_t2

0x516b,	// (0x0007e0b8) main_image3_pane_t3_ParamLimits

0x516b,	// (0x0007e0b8) main_image3_pane_t3

0x0003,

0xf780,	// (0x000886cd) main_image3_pane_t_ParamLimits

0xf780,	// (0x000886cd) main_image3_pane_t

0xa324,	// (0x00083271) grid_sctrl_middle_pane_cp01_ParamLimits

0xa324,	// (0x00083271) grid_sctrl_middle_pane_cp01

0x51f3,	// (0x0007e140) cell_sctrl_middle_pane_cp01_ParamLimits

0x51f3,	// (0x0007e140) cell_sctrl_middle_pane_cp01

0x5210,	// (0x0007e15d) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x5210,	// (0x0007e15d) cell_sctrl_middle_pane_cp01_g1

0xa2ad,	// (0x000831fa) main_call4_pane

0x5226,	// (0x0007e173) aid_size_button_call4_ParamLimits

0x5226,	// (0x0007e173) aid_size_button_call4

0x5259,	// (0x0007e1a6) call4_windows_pane_ParamLimits

0x5259,	// (0x0007e1a6) call4_windows_pane

0x5278,	// (0x0007e1c5) grid_call4_button_pane_ParamLimits

0x5278,	// (0x0007e1c5) grid_call4_button_pane

0x52ab,	// (0x0007e1f8) call4_windows_conf_pane

0x52c2,	// (0x0007e20f) popup_call4_audio_first_window_ParamLimits

0x52c2,	// (0x0007e20f) popup_call4_audio_first_window

0x5312,	// (0x0007e25f) popup_call4_audio_second_window_ParamLimits

0x5312,	// (0x0007e25f) popup_call4_audio_second_window

0x5329,	// (0x0007e276) popup_call4_audio_wait_window_ParamLimits

0x5329,	// (0x0007e276) popup_call4_audio_wait_window

0x5337,	// (0x0007e284) cell_call4_button_pane_ParamLimits

0x5337,	// (0x0007e284) cell_call4_button_pane

0x535c,	// (0x0007e2a9) bg_button_pane_cp09_ParamLimits

0x535c,	// (0x0007e2a9) bg_button_pane_cp09

0x5368,	// (0x0007e2b5) cell_call4_button_pane_g1_ParamLimits

0x5368,	// (0x0007e2b5) cell_call4_button_pane_g1

0x538e,	// (0x0007e2db) cell_call4_button_pane_t1_ParamLimits

0x538e,	// (0x0007e2db) cell_call4_button_pane_t1

0x53bc,	// (0x0007e309) popup_call4_audio_conf_window_ParamLimits

0x53bc,	// (0x0007e309) popup_call4_audio_conf_window

0x4827,	// (0x0007d774) mup3_progress_pane_t1_ParamLimits

0x4846,	// (0x0007d793) mup3_progress_pane_t2_ParamLimits

0xebb4,	// (0x00087b01) mup3_progress_pane_t3_ParamLimits

0xf68d,	// (0x000885da) mup3_progress_pane_t_ParamLimits

0xebd1,	// (0x00087b1e) mup_progress_pane_cp03_ParamLimits

0xebe9,	// (0x00087b36) mup3_control_keys_pane_g4_copy1

0xbbfa,	// (0x00084b47) mp4_rocker2_pane_ParamLimits

0xbbfa,	// (0x00084b47) mp4_rocker2_pane

0xebe9,	// (0x00087b36) mp4_rocker2_pane_g1

0xebe9,	// (0x00087b36) mp4_rocker2_pane_g2

0xebe9,	// (0x00087b36) mp4_rocker2_pane_g3

0xebe9,	// (0x00087b36) mp4_rocker2_pane_g4

0xebe9,	// (0x00087b36) mp4_rocker2_pane_g5

0x0004,

0xf789,	// (0x000886d6) mp4_rocker2_pane_g

0xa2ad,	// (0x000831fa) main_camera4_pane

0xa2ad,	// (0x000831fa) main_video4_pane

0x4df9,	// (0x0007dd46) main_video_tele_dialer_pane_t1_ParamLimits

0x4df9,	// (0x0007dd46) main_video_tele_dialer_pane_t1

0x4e12,	// (0x0007dd5f) main_video_tele_dialer_pane_t2_ParamLimits

0x4e12,	// (0x0007dd5f) main_video_tele_dialer_pane_t2

0x0001,

0xf73f,	// (0x0008868c) main_video_tele_dialer_pane_t_ParamLimits

0xf73f,	// (0x0008868c) main_video_tele_dialer_pane_t

0x53e8,	// (0x0007e335) cam4_autofocus_pane_ParamLimits

0x53e8,	// (0x0007e335) cam4_autofocus_pane

0x53fe,	// (0x0007e34b) cam4_image_uncrop_pane_ParamLimits

0x53fe,	// (0x0007e34b) cam4_image_uncrop_pane

0x5418,	// (0x0007e365) cam4_indicators_pane_ParamLimits

0x5418,	// (0x0007e365) cam4_indicators_pane

0x5443,	// (0x0007e390) main_camera4_pane_g1_ParamLimits

0x5443,	// (0x0007e390) main_camera4_pane_g1

0x5455,	// (0x0007e3a2) main_camera4_pane_g2_ParamLimits

0x5455,	// (0x0007e3a2) main_camera4_pane_g2

0x5468,	// (0x0007e3b5) main_camera4_pane_g3_ParamLimits

0x5468,	// (0x0007e3b5) main_camera4_pane_g3

0x547b,	// (0x0007e3c8) main_camera4_pane_g4_ParamLimits

0x547b,	// (0x0007e3c8) main_camera4_pane_g4

0x548e,	// (0x0007e3db) main_camera4_pane_g5_ParamLimits

0x548e,	// (0x0007e3db) main_camera4_pane_g5

0x0005,

0xf794,	// (0x000886e1) main_camera4_pane_g_ParamLimits

0xf794,	// (0x000886e1) main_camera4_pane_g

0x54b2,	// (0x0007e3ff) main_camera4_pane_t1_ParamLimits

0x54b2,	// (0x0007e3ff) main_camera4_pane_t1

0xaa1b,	// (0x00083968) bg_tb_trans_pane_cp06

0xbca8,	// (0x00084bf5) cam4_indicators_pane_g1

0xbcb9,	// (0x00084c06) cam4_indicators_pane_g2

0x0002,

0xf7af,	// (0x000886fc) cam4_indicators_pane_g

0xbcd7,	// (0x00084c24) cam4_indicators_pane_t1

0x5516,	// (0x0007e463) main_video4_pane_g1_ParamLimits

0x5516,	// (0x0007e463) main_video4_pane_g1

0x5525,	// (0x0007e472) main_video4_pane_g2_ParamLimits

0x5525,	// (0x0007e472) main_video4_pane_g2

0x5534,	// (0x0007e481) main_video4_pane_g3_ParamLimits

0x5534,	// (0x0007e481) main_video4_pane_g3

0x5543,	// (0x0007e490) main_video4_pane_g4_ParamLimits

0x5543,	// (0x0007e490) main_video4_pane_g4

0x0004,

0xf7b6,	// (0x00088703) main_video4_pane_g_ParamLimits

0xf7b6,	// (0x00088703) main_video4_pane_g

0x5561,	// (0x0007e4ae) vid4_indicators_pane_ParamLimits

0x5561,	// (0x0007e4ae) vid4_indicators_pane

0x558f,	// (0x0007e4dc) video4_image_uncrop_cif_pane_ParamLimits

0x558f,	// (0x0007e4dc) video4_image_uncrop_cif_pane

0x55a9,	// (0x0007e4f6) video4_image_uncrop_nhd_pane_ParamLimits

0x55a9,	// (0x0007e4f6) video4_image_uncrop_nhd_pane

0x53fe,	// (0x0007e34b) video4_image_uncrop_vga_pane_ParamLimits

0x53fe,	// (0x0007e34b) video4_image_uncrop_vga_pane

0xa324,	// (0x00083271) bg_tb_trans_pane_cp07

0xbd03,	// (0x00084c50) vid4_indicators_pane_g1

0xbd17,	// (0x00084c64) vid4_indicators_pane_g2

0xbd2b,	// (0x00084c78) vid4_indicators_pane_g3

0x0004,

0xf7c1,	// (0x0008870e) vid4_indicators_pane_g

0xbd5a,	// (0x00084ca7) vid4_indicators_pane_t1

0x55bd,	// (0x0007e50a) cam4_autofocus_pane_g1

0x55c5,	// (0x0007e512) cam4_autofocus_pane_g2

0x55cd,	// (0x0007e51a) cam4_autofocus_pane_g3

0x0002,

0xf7cc,	// (0x00088719) cam4_autofocus_pane_g

0x55d5,	// (0x0007e522) cam4_autofocus_pane_g3_copy1

0x4e41,	// (0x0007dd8e) video_down_pane_cp_t1

0x4e4f,	// (0x0007dd9c) video_down_pane_cp_t2

0x0001,

0xf744,	// (0x00088691) video_down_pane_cp_t

0xa324,	// (0x00083271) popup_vitu2_window_ParamLimits

0xa324,	// (0x00083271) popup_vitu2_window

0x55dd,	// (0x0007e52a) aid_size_cell2_itu2_ParamLimits

0x55dd,	// (0x0007e52a) aid_size_cell2_itu2

0x5603,	// (0x0007e550) aid_size_cell_itu2_ParamLimits

0x5603,	// (0x0007e550) aid_size_cell_itu2

0x48a4,	// (0x0007d7f1) bg_popup_window_pane_cp09_ParamLimits

0x48a4,	// (0x0007d7f1) bg_popup_window_pane_cp09

0x565f,	// (0x0007e5ac) field_vitu2_entry_pane_ParamLimits

0x565f,	// (0x0007e5ac) field_vitu2_entry_pane

0x5685,	// (0x0007e5d2) grid_vitu2_function_pane_ParamLimits

0x5685,	// (0x0007e5d2) grid_vitu2_function_pane

0x56d6,	// (0x0007e623) grid_vitu2_itu_pane_ParamLimits

0x56d6,	// (0x0007e623) grid_vitu2_itu_pane

0x576c,	// (0x0007e6b9) cell_vitu2_itu_pane_ParamLimits

0x576c,	// (0x0007e6b9) cell_vitu2_itu_pane

0x5798,	// (0x0007e6e5) cell_vitu2_function_pane_ParamLimits

0x5798,	// (0x0007e6e5) cell_vitu2_function_pane

0x57d7,	// (0x0007e724) bg_popup_call_pane_cp08_ParamLimits

0x57d7,	// (0x0007e724) bg_popup_call_pane_cp08

0x57ee,	// (0x0007e73b) field_vitu2_entry_pane_g1

0x57fa,	// (0x0007e747) field_vitu2_entry_pane_g2

0x0002,

0xf7d3,	// (0x00088720) field_vitu2_entry_pane_g

0x5806,	// (0x0007e753) field_vitu2_entry_pane_t1_ParamLimits

0x5806,	// (0x0007e753) field_vitu2_entry_pane_t1

0x5835,	// (0x0007e782) field_vitu2_entry_pane_t2_ParamLimits

0x5835,	// (0x0007e782) field_vitu2_entry_pane_t2

0x0001,

0xf7da,	// (0x00088727) field_vitu2_entry_pane_t_ParamLimits

0xf7da,	// (0x00088727) field_vitu2_entry_pane_t

0x585a,	// (0x0007e7a7) bg_button_pane_cp010_ParamLimits

0x585a,	// (0x0007e7a7) bg_button_pane_cp010

0x5868,	// (0x0007e7b5) cell_vitu2_itu_pane_g1

0x588e,	// (0x0007e7db) cell_vitu2_itu_pane_t1_ParamLimits

0x588e,	// (0x0007e7db) cell_vitu2_itu_pane_t1

0x58ec,	// (0x0007e839) cell_vitu2_itu_pane_t2_ParamLimits

0x58ec,	// (0x0007e839) cell_vitu2_itu_pane_t2

0x0002,

0xf7e4,	// (0x00088731) cell_vitu2_itu_pane_t_ParamLimits

0xf7e4,	// (0x00088731) cell_vitu2_itu_pane_t

0xa324,	// (0x00083271) bg_button_pane_cp011

0x59d8,	// (0x0007e925) cell_vitu2_function_pane_g1

0xa2ad,	// (0x000831fa) main_myfav_hc_pane

0x51bb,	// (0x0007e108) popup_image3_note_pane_ParamLimits

0x51bb,	// (0x0007e108) popup_image3_note_pane

0x51d7,	// (0x0007e124) popup_image3_tool_bar_pane_ParamLimits

0x51d7,	// (0x0007e124) popup_image3_tool_bar_pane

0x597a,	// (0x0007e8c7) cell_vitu2_itu_pane_t3_ParamLimits

0x597a,	// (0x0007e8c7) cell_vitu2_itu_pane_t3

0xa2ad,	// (0x000831fa) bg_popup_trans_pane

0x59ec,	// (0x0007e939) grid_image3_tool_bar_pane

0x59f6,	// (0x0007e943) bg_popup_trans_pane_g1

0xaf41,	// (0x00083e8e) bg_popup_trans_pane_g2

0x59fe,	// (0x0007e94b) bg_popup_trans_pane_g3

0x5a06,	// (0x0007e953) bg_popup_trans_pane_g4

0x5a0e,	// (0x0007e95b) bg_popup_trans_pane_g5

0x5a16,	// (0x0007e963) bg_popup_trans_pane_g6

0x5a1e,	// (0x0007e96b) bg_popup_trans_pane_g7

0x5a26,	// (0x0007e973) bg_popup_trans_pane_g8

0xaf21,	// (0x00083e6e) bg_popup_trans_pane_g9

0x0008,

0xf7eb,	// (0x00088738) bg_popup_trans_pane_g

0x5a2e,	// (0x0007e97b) cell_image3_tool_bar_pane_ParamLimits

0x5a2e,	// (0x0007e97b) cell_image3_tool_bar_pane

0xaa61,	// (0x000839ae) cell_image3_tool_bar_pane_g1

0xa2ad,	// (0x000831fa) bg_popup_trans_pane_cp1

0x5a42,	// (0x0007e98f) popup_image3_note_pane_t1

0x5a50,	// (0x0007e99d) popup_image3_note_pane_t2

0x5a5e,	// (0x0007e9ab) popup_image3_note_pane_t3

0x0002,

0xf7fe,	// (0x0008874b) popup_image3_note_pane_t

0x5a6c,	// (0x0007e9b9) popup_image3_note_pane_t3_copy1

0x5a7a,	// (0x0007e9c7) bg_myfav_hc_instruction_pane_ParamLimits

0x5a7a,	// (0x0007e9c7) bg_myfav_hc_instruction_pane

0x5a8e,	// (0x0007e9db) cell_myfav_contact_pane_ParamLimits

0x5a8e,	// (0x0007e9db) cell_myfav_contact_pane

0x5aac,	// (0x0007e9f9) cell_myfav_contact_pane_cp1_ParamLimits

0x5aac,	// (0x0007e9f9) cell_myfav_contact_pane_cp1

0x5ac4,	// (0x0007ea11) cell_myfav_contact_pane_cp2_ParamLimits

0x5ac4,	// (0x0007ea11) cell_myfav_contact_pane_cp2

0x5adc,	// (0x0007ea29) cell_myfav_contact_pane_cp3_ParamLimits

0x5adc,	// (0x0007ea29) cell_myfav_contact_pane_cp3

0x5af3,	// (0x0007ea40) cell_myfav_contact_pane_cp4_ParamLimits

0x5af3,	// (0x0007ea40) cell_myfav_contact_pane_cp4

0x5b0b,	// (0x0007ea58) cell_myfav_contact_pane_cp5_ParamLimits

0x5b0b,	// (0x0007ea58) cell_myfav_contact_pane_cp5

0x5b1f,	// (0x0007ea6c) cell_myfav_contact_pane_cp6_ParamLimits

0x5b1f,	// (0x0007ea6c) cell_myfav_contact_pane_cp6

0x5b35,	// (0x0007ea82) cell_myfav_contact_pane_cp7_ParamLimits

0x5b35,	// (0x0007ea82) cell_myfav_contact_pane_cp7

0x5b4f,	// (0x0007ea9c) listscroll_gen_pane_cp05

0x5b58,	// (0x0007eaa5) main_myfav_hc_pane_g1_ParamLimits

0x5b58,	// (0x0007eaa5) main_myfav_hc_pane_g1

0x5b72,	// (0x0007eabf) main_myfav_hc_pane_g2_ParamLimits

0x5b72,	// (0x0007eabf) main_myfav_hc_pane_g2

0x0002,

0xf805,	// (0x00088752) main_myfav_hc_pane_g_ParamLimits

0xf805,	// (0x00088752) main_myfav_hc_pane_g

0x5ba4,	// (0x0007eaf1) main_myfav_hc_pane_t1_ParamLimits

0x5ba4,	// (0x0007eaf1) main_myfav_hc_pane_t1

0x5bbb,	// (0x0007eb08) main_myfav_hc_pane_t2_ParamLimits

0x5bbb,	// (0x0007eb08) main_myfav_hc_pane_t2

0x5bcd,	// (0x0007eb1a) main_myfav_hc_pane_t3_ParamLimits

0x5bcd,	// (0x0007eb1a) main_myfav_hc_pane_t3

0x5bdf,	// (0x0007eb2c) main_myfav_hc_pane_t4_ParamLimits

0x5bdf,	// (0x0007eb2c) main_myfav_hc_pane_t4

0x0004,

0xf80c,	// (0x00088759) main_myfav_hc_pane_t_ParamLimits

0xf80c,	// (0x00088759) main_myfav_hc_pane_t

0xaa61,	// (0x000839ae) bg_myfav_hc_instruction_pane_g1

0x5c07,	// (0x0007eb54) cell_myfav_contact_pane_g1_ParamLimits

0x5c07,	// (0x0007eb54) cell_myfav_contact_pane_g1

0x5c07,	// (0x0007eb54) cell_myfav_contact_pane_g2_ParamLimits

0x5c07,	// (0x0007eb54) cell_myfav_contact_pane_g2

0x5c13,	// (0x0007eb60) cell_myfav_contact_pane_g3_ParamLimits

0x5c13,	// (0x0007eb60) cell_myfav_contact_pane_g3

0xaa29,	// (0x00083976) cell_myfav_contact_pane_g4_ParamLimits

0xaa29,	// (0x00083976) cell_myfav_contact_pane_g4

0x5c20,	// (0x0007eb6d) cell_myfav_contact_pane_g5_ParamLimits

0x5c20,	// (0x0007eb6d) cell_myfav_contact_pane_g5

0x0004,

0xf817,	// (0x00088764) cell_myfav_contact_pane_g_ParamLimits

0xf817,	// (0x00088764) cell_myfav_contact_pane_g

0x5b8c,	// (0x0007ead9) main_myfav_hc_pane_g3_ParamLimits

0x5b8c,	// (0x0007ead9) main_myfav_hc_pane_g3

0x10af,	// (0x00079ffc) popup_adpt_find_window

0x5c2c,	// (0x0007eb79) afind_page_pane_ParamLimits

0x5c2c,	// (0x0007eb79) afind_page_pane

0x5c41,	// (0x0007eb8e) aid_size_cell_afind_ParamLimits

0x5c41,	// (0x0007eb8e) aid_size_cell_afind

0x5c5f,	// (0x0007ebac) bg_popup_sub_pane_cp09_ParamLimits

0x5c5f,	// (0x0007ebac) bg_popup_sub_pane_cp09

0x5c6c,	// (0x0007ebb9) find_pane_cp01_ParamLimits

0x5c6c,	// (0x0007ebb9) find_pane_cp01

0x5c79,	// (0x0007ebc6) grid_afind_control_pane_ParamLimits

0x5c79,	// (0x0007ebc6) grid_afind_control_pane

0x5c8d,	// (0x0007ebda) grid_afind_pane_ParamLimits

0x5c8d,	// (0x0007ebda) grid_afind_pane

0x5caf,	// (0x0007ebfc) cell_afind_pane_ParamLimits

0x5caf,	// (0x0007ebfc) cell_afind_pane

0xaa61,	// (0x000839ae) afind_page_pane_g1

0x5d16,	// (0x0007ec63) afind_page_pane_g2

0x5d1e,	// (0x0007ec6b) afind_page_pane_g3

0x0002,

0xf822,	// (0x0008876f) afind_page_pane_g

0x5d26,	// (0x0007ec73) afind_page_pane_t1

0x5d46,	// (0x0007ec93) cell_afind_grid_control_pane_ParamLimits

0x5d46,	// (0x0007ec93) cell_afind_grid_control_pane

0x5d55,	// (0x0007eca2) bg_button_pane_cp69_ParamLimits

0x5d55,	// (0x0007eca2) bg_button_pane_cp69

0x5d61,	// (0x0007ecae) cell_afind_pane_g1_ParamLimits

0x5d61,	// (0x0007ecae) cell_afind_pane_g1

0x5d6e,	// (0x0007ecbb) cell_afind_pane_t1_ParamLimits

0x5d6e,	// (0x0007ecbb) cell_afind_pane_t1

0x5d80,	// (0x0007eccd) bg_button_pane_cp72

0x5d88,	// (0x0007ecd5) cell_afind_grid_control_pane_g1

0x34d8,	// (0x0007c425) aid_image_placing_area_ParamLimits

0x34d8,	// (0x0007c425) aid_image_placing_area

0xaa1b,	// (0x00083968) field_vitu_entry_pane_g1_ParamLimits

0xaa1b,	// (0x00083968) field_vitu_entry_pane_g1

0xaa1b,	// (0x00083968) field_vitu_entry_pane_g2_ParamLimits

0xaa1b,	// (0x00083968) field_vitu_entry_pane_g2

0x0001,

0xf199,	// (0x000880e6) field_vitu_entry_pane_g_ParamLimits

0xf199,	// (0x000880e6) field_vitu_entry_pane_g

0xeed7,	// (0x00087e24) cell_vitu_itu_pane_g1_ParamLimits

0xeeba,	// (0x00087e07) cell_vitu_itu_pane_t3_ParamLimits

0xeeba,	// (0x00087e07) cell_vitu_itu_pane_t3

0x4eee,	// (0x0007de3b) mp4_progress_pane_t1_ParamLimits

0x4f0d,	// (0x0007de5a) mp4_progress_pane_t2_ParamLimits

0xf768,	// (0x000886b5) mp4_progress_pane_t_ParamLimits

0x4f2c,	// (0x0007de79) mup_progress_pane_cp04_ParamLimits

0x5bf3,	// (0x0007eb40) main_myfav_hc_pane_t5_ParamLimits

0x5bf3,	// (0x0007eb40) main_myfav_hc_pane_t5

0xa2d3,	// (0x00083220) aid_zoom_text_primary

0x10af,	// (0x00079ffc) popup_adpt_find_window_ParamLimits

0xa324,	// (0x00083271) main_cam_set_pane

0x542f,	// (0x0007e37c) cam4_zoom_pane_ParamLimits

0x542f,	// (0x0007e37c) cam4_zoom_pane

0x5d91,	// (0x0007ecde) main_cam_set_pane_g1_ParamLimits

0x5d91,	// (0x0007ecde) main_cam_set_pane_g1

0x5d9f,	// (0x0007ecec) main_cam_set_pane_g2_ParamLimits

0x5d9f,	// (0x0007ecec) main_cam_set_pane_g2

0x0001,

0xf829,	// (0x00088776) main_cam_set_pane_g_ParamLimits

0xf829,	// (0x00088776) main_cam_set_pane_g

0x5dc0,	// (0x0007ed0d) main_cam_set_pane_t1_ParamLimits

0x5dc0,	// (0x0007ed0d) main_cam_set_pane_t1

0x5ddb,	// (0x0007ed28) main_cset_listscroll_pane_ParamLimits

0x5ddb,	// (0x0007ed28) main_cset_listscroll_pane

0x5e01,	// (0x0007ed4e) main_cset_slider_pane_ParamLimits

0x5e01,	// (0x0007ed4e) main_cset_slider_pane

0x5e2f,	// (0x0007ed7c) main_cset_list_pane_ParamLimits

0x5e2f,	// (0x0007ed7c) main_cset_list_pane

0x5e3f,	// (0x0007ed8c) scroll_pane_cp028

0x5e48,	// (0x0007ed95) aid_area_touch_slider

0x5e64,	// (0x0007edb1) cset_slider_pane

0x5e87,	// (0x0007edd4) main_cset_slider_pane_g1

0x5e9c,	// (0x0007ede9) main_cset_slider_pane_g2

0x0011,

0xf82e,	// (0x0008877b) main_cset_slider_pane_g

0x5f88,	// (0x0007eed5) main_cset_slider_pane_t1

0x5fb0,	// (0x0007eefd) main_cset_slider_pane_t2

0x5fca,	// (0x0007ef17) main_cset_slider_pane_t3

0x5fe4,	// (0x0007ef31) main_cset_slider_pane_t4

0x5ffe,	// (0x0007ef4b) main_cset_slider_pane_t5

0x6018,	// (0x0007ef65) main_cset_slider_pane_t6

0x602d,	// (0x0007ef7a) main_cset_slider_pane_t7

0x000e,

0xf853,	// (0x000887a0) main_cset_slider_pane_t

0x61a3,	// (0x0007f0f0) cset_list_set_pane_ParamLimits

0x61a3,	// (0x0007f0f0) cset_list_set_pane

0x61b5,	// (0x0007f102) aid_position_infowindow_above

0x61bd,	// (0x0007f10a) aid_position_infowindow_below

0xbd71,	// (0x00084cbe) cset_list_set_pane_g1_ParamLimits

0xbd71,	// (0x00084cbe) cset_list_set_pane_g1

0xbd7d,	// (0x00084cca) cset_list_set_pane_g3_ParamLimits

0xbd7d,	// (0x00084cca) cset_list_set_pane_g3

0x0001,

0xf872,	// (0x000887bf) cset_list_set_pane_g_ParamLimits

0xf872,	// (0x000887bf) cset_list_set_pane_g

0xbd8c,	// (0x00084cd9) cset_list_set_pane_t1_ParamLimits

0xbd8c,	// (0x00084cd9) cset_list_set_pane_t1

0xa324,	// (0x00083271) list_highlight_pane_cp021_ParamLimits

0xa324,	// (0x00083271) list_highlight_pane_cp021

0xd2b2,	// (0x000861ff) cset_slider_pane_g1

0xd2c4,	// (0x00086211) cset_slider_pane_g2

0xd2bb,	// (0x00086208) cset_slider_pane_g3

0x0002,

0xf877,	// (0x000887c4) cset_slider_pane_g

0xbda1,	// (0x00084cee) aid_area_touch_cam4_zoom

0xbda9,	// (0x00084cf6) cam4_zoom_cont_pane

0xbdb1,	// (0x00084cfe) cam4_zoom_pane_g1

0xbdb9,	// (0x00084d06) cam4_zoom_pane_g2

0x61c5,	// (0x0007f112) cam4_zoom_pane_g3

0x0002,

0xf87e,	// (0x000887cb) cam4_zoom_pane_g

0x61cd,	// (0x0007f11a) cam4_zoom_cont_pane_g1

0x61d6,	// (0x0007f123) cam4_zoom_cont_pane_g2

0x61df,	// (0x0007f12c) cam4_zoom_cont_pane_g3

0x0002,

0xf885,	// (0x000887d2) cam4_zoom_cont_pane_g

0x5244,	// (0x0007e191) call4_image_pane_ParamLimits

0x5244,	// (0x0007e191) call4_image_pane

0x52ab,	// (0x0007e1f8) call4_windows_conf_pane_ParamLimits

0x52f0,	// (0x0007e23d) popup_call4_audio_in_window_ParamLimits

0x52f0,	// (0x0007e23d) popup_call4_audio_in_window

0xa2ad,	// (0x000831fa) bg_popup_call2_act_pane_cp02

0x53b4,	// (0x0007e301) call4_list_conf_pane

0xaa61,	// (0x000839ae) call4_image_pane_g1

0xaa61,	// (0x000839ae) call4_image_pane_g2

0x0001,

0xf08c,	// (0x00087fd9) call4_image_pane_g

0x61e8,	// (0x0007f135) list_single_graphic_popup_conf4_pane_ParamLimits

0x61e8,	// (0x0007f135) list_single_graphic_popup_conf4_pane

0xa2ad,	// (0x000831fa) list_highlight_pane_cp022

0x61fb,	// (0x0007f148) list_single_graphic_popup_conf4_pane_g1

0xb4c1,	// (0x0008440e) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf88c,	// (0x000887d9) list_single_graphic_popup_conf4_pane_g

0x6203,	// (0x0007f150) list_single_graphic_popup_conf4_pane_t1

0x1d09,	// (0x0007ac56) popup_vtel_slider_window_ParamLimits

0x1d09,	// (0x0007ac56) popup_vtel_slider_window

0x4f7d,	// (0x0007deca) dialer2_ne_pane_t2_ParamLimits

0x4f7d,	// (0x0007deca) dialer2_ne_pane_t2

0x0001,

0xf76d,	// (0x000886ba) dialer2_ne_pane_t_ParamLimits

0xf76d,	// (0x000886ba) dialer2_ne_pane_t

0xe5ad,	// (0x000874fa) bg_popup_sub_pane_cp010_ParamLimits

0xe5ad,	// (0x000874fa) bg_popup_sub_pane_cp010

0x6219,	// (0x0007f166) popup_vtel_slider_window_g1_ParamLimits

0x6219,	// (0x0007f166) popup_vtel_slider_window_g1

0x622c,	// (0x0007f179) popup_vtel_slider_window_g2_ParamLimits

0x622c,	// (0x0007f179) popup_vtel_slider_window_g2

0x0003,

0xf891,	// (0x000887de) popup_vtel_slider_window_g_ParamLimits

0xf891,	// (0x000887de) popup_vtel_slider_window_g

0x6282,	// (0x0007f1cf) vtel_slider_pane_ParamLimits

0x6282,	// (0x0007f1cf) vtel_slider_pane

0x62a4,	// (0x0007f1f1) vtel_slider_pane_g1_ParamLimits

0x62a4,	// (0x0007f1f1) vtel_slider_pane_g1

0x62b8,	// (0x0007f205) vtel_slider_pane_g2_ParamLimits

0x62b8,	// (0x0007f205) vtel_slider_pane_g2

0x62d0,	// (0x0007f21d) vtel_slider_pane_g3_ParamLimits

0x62d0,	// (0x0007f21d) vtel_slider_pane_g3

0x62a4,	// (0x0007f1f1) vtel_slider_pane_g4_ParamLimits

0x62a4,	// (0x0007f1f1) vtel_slider_pane_g4

0x62e6,	// (0x0007f233) vtel_slider_pane_g5_ParamLimits

0x62e6,	// (0x0007f233) vtel_slider_pane_g5

0x0004,

0xf89a,	// (0x000887e7) vtel_slider_pane_g_ParamLimits

0xf89a,	// (0x000887e7) vtel_slider_pane_g

0xa324,	// (0x00083271) main_gallery2_pane

0x562f,	// (0x0007e57c) aid_size_row_itut2_dropdow_list_ParamLimits

0x562f,	// (0x0007e57c) aid_size_row_itut2_dropdow_list

0x56ad,	// (0x0007e5fa) grid_vitu2_function_top_pane_ParamLimits

0x56ad,	// (0x0007e5fa) grid_vitu2_function_top_pane

0x5717,	// (0x0007e664) popup_vitu2_dropdown_list_window_ParamLimits

0x5717,	// (0x0007e664) popup_vitu2_dropdown_list_window

0x573e,	// (0x0007e68b) popup_vitu2_match_list_window

0x62fc,	// (0x0007f249) cell_vitu2_function_top_pane_ParamLimits

0x62fc,	// (0x0007f249) cell_vitu2_function_top_pane

0x6314,	// (0x0007f261) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6314,	// (0x0007f261) cell_vitu2_function_top_pane_cp01

0x6330,	// (0x0007f27d) cell_vitu2_function_top_wide_pane_ParamLimits

0x6330,	// (0x0007f27d) cell_vitu2_function_top_wide_pane

0xa324,	// (0x00083271) bg_button_pane_cp012

0x634e,	// (0x0007f29b) cell_vitu2_function_top_pane_g1

0xbdc1,	// (0x00084d0e) bg_button_pane_cp013_ParamLimits

0xbdc1,	// (0x00084d0e) bg_button_pane_cp013

0x6362,	// (0x0007f2af) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6362,	// (0x0007f2af) cell_vitu2_function_top_wide_pane_g1

0xa324,	// (0x00083271) bg_popup_sub_pane_cp20

0x637a,	// (0x0007f2c7) list_vitu2_match_list_pane

0x59f6,	// (0x0007e943) bg_popup_sub_pane_cp20_g1

0x59fe,	// (0x0007e94b) bg_popup_sub_pane_cp20_g2

0xaf41,	// (0x00083e8e) bg_popup_sub_pane_cp20_g3

0x5a06,	// (0x0007e953) bg_popup_sub_pane_cp20_g4

0xaf21,	// (0x00083e6e) bg_popup_sub_pane_cp20_g5

0x6392,	// (0x0007f2df) bg_popup_sub_pane_cp20_g6

0x5a16,	// (0x0007e963) bg_popup_sub_pane_cp20_g7

0x5a1e,	// (0x0007e96b) bg_popup_sub_pane_cp20_g8

0x5a26,	// (0x0007e973) bg_popup_sub_pane_cp20_g9

0x0008,

0xf8a5,	// (0x000887f2) bg_popup_sub_pane_cp20_g

0xbddd,	// (0x00084d2a) list_vitu2_match_list_item_pane_ParamLimits

0xbddd,	// (0x00084d2a) list_vitu2_match_list_item_pane

0xbdef,	// (0x00084d3c) list_vitu2_match_list_item_pane_t1

0xa2ad,	// (0x000831fa) bg_popup_sub_pane_cp21

0xad1e,	// (0x00083c6b) grid_vitu2_dropdown_list_pane

0x639a,	// (0x0007f2e7) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x639a,	// (0x0007f2e7) cell_vitu2_dropdown_list_char_pane

0x63ba,	// (0x0007f307) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x63ba,	// (0x0007f307) cell_vitu2_dropdown_list_ctrl_pane

0x63e2,	// (0x0007f32f) cell_vitu2_dropdown_list_char_pane_g1

0x63eb,	// (0x0007f338) cell_vitu2_dropdown_list_char_pane_g2

0x63f4,	// (0x0007f341) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf8b8,	// (0x00088805) cell_vitu2_dropdown_list_char_pane_g

0x63fd,	// (0x0007f34a) cell_vitu2_dropdown_list_char_pane_t1

0x640b,	// (0x0007f358) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x640b,	// (0x0007f358) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6418,	// (0x0007f365) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6418,	// (0x0007f365) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6425,	// (0x0007f372) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6425,	// (0x0007f372) cell_vitu2_dropdown_list_ctrl_pane_g3

0x6432,	// (0x0007f37f) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x6432,	// (0x0007f37f) cell_vitu2_dropdown_list_ctrl_pane_g4

0xaa1b,	// (0x00083968) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xaa1b,	// (0x00083968) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf8bf,	// (0x0008880c) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf8bf,	// (0x0008880c) cell_vitu2_dropdown_list_ctrl_pane_g

0x644e,	// (0x0007f39b) aid_size_cell_gallery2_ParamLimits

0x644e,	// (0x0007f39b) aid_size_cell_gallery2

0x646c,	// (0x0007f3b9) grid_gallery2_pane_ParamLimits

0x646c,	// (0x0007f3b9) grid_gallery2_pane

0x6486,	// (0x0007f3d3) scroll_pane_cp029_ParamLimits

0x6486,	// (0x0007f3d3) scroll_pane_cp029

0x6497,	// (0x0007f3e4) cell_gallery2_pane_ParamLimits

0x6497,	// (0x0007f3e4) cell_gallery2_pane

0x64f6,	// (0x0007f443) cell_gallery2_pane_g2

0x64fe,	// (0x0007f44b) cell_gallery2_pane_g3

0x6506,	// (0x0007f453) cell_gallery2_pane_g4

0x650e,	// (0x0007f45b) cell_gallery2_pane_g5

0xad1e,	// (0x00083c6b) grid_highlight_pane_cp10

0x573e,	// (0x0007e68b) popup_vitu2_match_list_window_ParamLimits

0x5753,	// (0x0007e6a0) popup_vitu2_query_window_ParamLimits

0x5753,	// (0x0007e6a0) popup_vitu2_query_window

0xa2ad,	// (0x000831fa) bg_vitu2_candi_button_pane

0x63e2,	// (0x0007f32f) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x63eb,	// (0x0007f338) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x63f4,	// (0x0007f341) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x6516,	// (0x0007f463) bg_button_pane_cp015

0x6527,	// (0x0007f474) bg_button_pane_cp016

0x6533,	// (0x0007f480) bg_button_pane_cp017

0xd242,	// (0x0008618f) bg_popup_sub_pane_cp22

0x6571,	// (0x0007f4be) popup_vitu2_query_window_g1

0x657d,	// (0x0007f4ca) popup_vitu2_query_window_g2

0x0002,

0xf8ca,	// (0x00088817) popup_vitu2_query_window_g

0x659f,	// (0x0007f4ec) popup_vitu2_query_window_t1_ParamLimits

0x659f,	// (0x0007f4ec) popup_vitu2_query_window_t1

0x65d2,	// (0x0007f51f) popup_vitu2_query_window_t2_ParamLimits

0x65d2,	// (0x0007f51f) popup_vitu2_query_window_t2

0x65e4,	// (0x0007f531) popup_vitu2_query_window_t3_ParamLimits

0x65e4,	// (0x0007f531) popup_vitu2_query_window_t3

0x660c,	// (0x0007f559) popup_vitu2_query_window_t4_ParamLimits

0x660c,	// (0x0007f559) popup_vitu2_query_window_t4

0x6620,	// (0x0007f56d) popup_vitu2_query_window_t5_ParamLimits

0x6620,	// (0x0007f56d) popup_vitu2_query_window_t5

0x0006,

0xf8d1,	// (0x0008881e) popup_vitu2_query_window_t_ParamLimits

0xf8d1,	// (0x0008881e) popup_vitu2_query_window_t

0x5e27,	// (0x0007ed74) main_cset_text_pane

0x5e48,	// (0x0007ed95) aid_area_touch_slider_ParamLimits

0x5e64,	// (0x0007edb1) cset_slider_pane_ParamLimits

0x5e87,	// (0x0007edd4) main_cset_slider_pane_g1_ParamLimits

0x5e9c,	// (0x0007ede9) main_cset_slider_pane_g2_ParamLimits

0x5eb1,	// (0x0007edfe) main_cset_slider_pane_g3_ParamLimits

0x5eb1,	// (0x0007edfe) main_cset_slider_pane_g3

0x5ebd,	// (0x0007ee0a) main_cset_slider_pane_g4_ParamLimits

0x5ebd,	// (0x0007ee0a) main_cset_slider_pane_g4

0x5ecc,	// (0x0007ee19) main_cset_slider_pane_g5_ParamLimits

0x5ecc,	// (0x0007ee19) main_cset_slider_pane_g5

0x5ed8,	// (0x0007ee25) main_cset_slider_pane_g6_ParamLimits

0x5ed8,	// (0x0007ee25) main_cset_slider_pane_g6

0xf82e,	// (0x0008877b) main_cset_slider_pane_g_ParamLimits

0x5f88,	// (0x0007eed5) main_cset_slider_pane_t1_ParamLimits

0x5fb0,	// (0x0007eefd) main_cset_slider_pane_t2_ParamLimits

0x5fca,	// (0x0007ef17) main_cset_slider_pane_t3_ParamLimits

0x5fe4,	// (0x0007ef31) main_cset_slider_pane_t4_ParamLimits

0x5ffe,	// (0x0007ef4b) main_cset_slider_pane_t5_ParamLimits

0x6018,	// (0x0007ef65) main_cset_slider_pane_t6_ParamLimits

0x602d,	// (0x0007ef7a) main_cset_slider_pane_t7_ParamLimits

0x6057,	// (0x0007efa4) main_cset_slider_pane_t8_ParamLimits

0x6057,	// (0x0007efa4) main_cset_slider_pane_t8

0x607f,	// (0x0007efcc) main_cset_slider_pane_t9_ParamLimits

0x607f,	// (0x0007efcc) main_cset_slider_pane_t9

0x60a7,	// (0x0007eff4) main_cset_slider_pane_t10_ParamLimits

0x60a7,	// (0x0007eff4) main_cset_slider_pane_t10

0x60cf,	// (0x0007f01c) main_cset_slider_pane_t11_ParamLimits

0x60cf,	// (0x0007f01c) main_cset_slider_pane_t11

0x60f7,	// (0x0007f044) main_cset_slider_pane_t12_ParamLimits

0x60f7,	// (0x0007f044) main_cset_slider_pane_t12

0x6114,	// (0x0007f061) main_cset_slider_pane_t13_ParamLimits

0x6114,	// (0x0007f061) main_cset_slider_pane_t13

0xf853,	// (0x000887a0) main_cset_slider_pane_t_ParamLimits

0xa2ad,	// (0x000831fa) bg_popup_sub_pane_cp011

0x668a,	// (0x0007f5d7) main_cset_text_pane_g1

0x6692,	// (0x0007f5df) main_cset_text_pane_t1

0x66a0,	// (0x0007f5ed) main_cset_text_pane_t2

0x66ae,	// (0x0007f5fb) main_cset_text_pane_t3

0x66bc,	// (0x0007f609) main_cset_text_pane_t4

0x66ca,	// (0x0007f617) main_cset_text_pane_t5

0x66d8,	// (0x0007f625) main_cset_text_pane_t6

0x66e6,	// (0x0007f633) main_cset_text_pane_t7

0x0006,

0xf8e0,	// (0x0008882d) main_cset_text_pane_t

0xa2ad,	// (0x000831fa) main_cam4_burst_pane

0xa2ad,	// (0x000831fa) main_cam5_pane

0x5d34,	// (0x0007ec81) bg_button_pane_cp019

0x5d3d,	// (0x0007ec8a) bg_button_pane_cp020

0x5eec,	// (0x0007ee39) main_cset_slider_pane_g7_ParamLimits

0x5eec,	// (0x0007ee39) main_cset_slider_pane_g7

0x5ef8,	// (0x0007ee45) main_cset_slider_pane_g8_ParamLimits

0x5ef8,	// (0x0007ee45) main_cset_slider_pane_g8

0x5f04,	// (0x0007ee51) main_cset_slider_pane_g9_ParamLimits

0x5f04,	// (0x0007ee51) main_cset_slider_pane_g9

0x5f10,	// (0x0007ee5d) main_cset_slider_pane_g10_ParamLimits

0x5f10,	// (0x0007ee5d) main_cset_slider_pane_g10

0x5f1c,	// (0x0007ee69) main_cset_slider_pane_g11_ParamLimits

0x5f1c,	// (0x0007ee69) main_cset_slider_pane_g11

0x5f28,	// (0x0007ee75) main_cset_slider_pane_g12_ParamLimits

0x5f28,	// (0x0007ee75) main_cset_slider_pane_g12

0x5f34,	// (0x0007ee81) main_cset_slider_pane_g13_ParamLimits

0x5f34,	// (0x0007ee81) main_cset_slider_pane_g13

0x5f40,	// (0x0007ee8d) main_cset_slider_pane_g14_ParamLimits

0x5f40,	// (0x0007ee8d) main_cset_slider_pane_g14

0x5f4c,	// (0x0007ee99) main_cset_slider_pane_g15_ParamLimits

0x5f4c,	// (0x0007ee99) main_cset_slider_pane_g15

0x6131,	// (0x0007f07e) main_cset_slider_pane_t14_ParamLimits

0x6131,	// (0x0007f07e) main_cset_slider_pane_t14

0x616a,	// (0x0007f0b7) main_cset_slider_pane_t15_ParamLimits

0x616a,	// (0x0007f0b7) main_cset_slider_pane_t15

0x66f4,	// (0x0007f641) aid_cam4_burst_size_cell_ParamLimits

0x66f4,	// (0x0007f641) aid_cam4_burst_size_cell

0x6714,	// (0x0007f661) grid_cam4_burst_pane_ParamLimits

0x6714,	// (0x0007f661) grid_cam4_burst_pane

0x674c,	// (0x0007f699) linegrid_cam4_burst_pane_ParamLimits

0x674c,	// (0x0007f699) linegrid_cam4_burst_pane

0x6770,	// (0x0007f6bd) scroll_pane_cp30_ParamLimits

0x6770,	// (0x0007f6bd) scroll_pane_cp30

0x677c,	// (0x0007f6c9) cell_cam4_burst_pane_ParamLimits

0x677c,	// (0x0007f6c9) cell_cam4_burst_pane

0x67c9,	// (0x0007f716) linegrid_cam4_burst_pane_g1_ParamLimits

0x67c9,	// (0x0007f716) linegrid_cam4_burst_pane_g1

0x67d6,	// (0x0007f723) linegrid_cam4_burst_pane_g2_ParamLimits

0x67d6,	// (0x0007f723) linegrid_cam4_burst_pane_g2

0x67e7,	// (0x0007f734) linegrid_cam4_burst_pane_g3_ParamLimits

0x67e7,	// (0x0007f734) linegrid_cam4_burst_pane_g3

0x0002,

0xf8ef,	// (0x0008883c) linegrid_cam4_burst_pane_g_ParamLimits

0xf8ef,	// (0x0008883c) linegrid_cam4_burst_pane_g

0x67f4,	// (0x0007f741) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x67f4,	// (0x0007f741) linegrid_cam4_burst_pane_g3_copy1

0x680e,	// (0x0007f75b) linegrid_cam4_burst_pane_g4_ParamLimits

0x680e,	// (0x0007f75b) linegrid_cam4_burst_pane_g4

0x681b,	// (0x0007f768) linegrid_cam4_burst_pane_g5_ParamLimits

0x681b,	// (0x0007f768) linegrid_cam4_burst_pane_g5

0x682c,	// (0x0007f779) linegrid_cam4_burst_pane_g6_ParamLimits

0x682c,	// (0x0007f779) linegrid_cam4_burst_pane_g6

0x6843,	// (0x0007f790) linegrid_cam4_burst_pane_g7_ParamLimits

0x6843,	// (0x0007f790) linegrid_cam4_burst_pane_g7

0x6850,	// (0x0007f79d) cell_cam4_burst_pane_g1

0x686f,	// (0x0007f7bc) main_cam5_pane_t1_ParamLimits

0x686f,	// (0x0007f7bc) main_cam5_pane_t1

0x6881,	// (0x0007f7ce) main_cam5_pane_t2_ParamLimits

0x6881,	// (0x0007f7ce) main_cam5_pane_t2

0x6893,	// (0x0007f7e0) main_cam5_pane_t3_ParamLimits

0x6893,	// (0x0007f7e0) main_cam5_pane_t3

0x68a5,	// (0x0007f7f2) main_cam5_pane_t4_ParamLimits

0x68a5,	// (0x0007f7f2) main_cam5_pane_t4

0x68bd,	// (0x0007f80a) main_cam5_pane_t5_ParamLimits

0x68bd,	// (0x0007f80a) main_cam5_pane_t5

0x68d1,	// (0x0007f81e) main_cam5_pane_t6_ParamLimits

0x68d1,	// (0x0007f81e) main_cam5_pane_t6

0x68e5,	// (0x0007f832) main_cam5_pane_t7_ParamLimits

0x68e5,	// (0x0007f832) main_cam5_pane_t7

0x68f7,	// (0x0007f844) main_cam5_pane_t8_ParamLimits

0x68f7,	// (0x0007f844) main_cam5_pane_t8

0x6913,	// (0x0007f860) main_cam5_pane_t9_ParamLimits

0x6913,	// (0x0007f860) main_cam5_pane_t9

0x6925,	// (0x0007f872) main_cam5_pane_t10_ParamLimits

0x6925,	// (0x0007f872) main_cam5_pane_t10

0x6937,	// (0x0007f884) main_cam5_pane_t11_ParamLimits

0x6937,	// (0x0007f884) main_cam5_pane_t11

0x6949,	// (0x0007f896) main_cam5_pane_t12_ParamLimits

0x6949,	// (0x0007f896) main_cam5_pane_t12

0x695e,	// (0x0007f8ab) main_cam5_pane_t13_ParamLimits

0x695e,	// (0x0007f8ab) main_cam5_pane_t13

0x000c,

0xf8fb,	// (0x00088848) main_cam5_pane_t_ParamLimits

0xf8fb,	// (0x00088848) main_cam5_pane_t

0x1130,	// (0x0007a07d) popup_scut_keymap_window_ParamLimits

0x1130,	// (0x0007a07d) popup_scut_keymap_window

0x697b,	// (0x0007f8c8) aid_size_cell_brow_shortcut

0xad1e,	// (0x00083c6b) bg_popup_window_pane_cp010

0x6987,	// (0x0007f8d4) grid_scut_pane

0x6993,	// (0x0007f8e0) cell_scut_pane_ParamLimits

0x6993,	// (0x0007f8e0) cell_scut_pane

0x69aa,	// (0x0007f8f7) cell_scut_pane_g1

0x69b3,	// (0x0007f900) cell_scut_pane_t1

0x69c2,	// (0x0007f90f) cell_scut_pane_t2

0x69d1,	// (0x0007f91e) cell_scut_pane_t3

0x0002,

0xf916,	// (0x00088863) cell_scut_pane_t

0x43d6,	// (0x0007d323) main_mup3_pane_g8_ParamLimits

0x43d6,	// (0x0007d323) main_mup3_pane_g8

0x5647,	// (0x0007e594) area_vitu2_query_pane_ParamLimits

0x5647,	// (0x0007e594) area_vitu2_query_pane

0x653f,	// (0x0007f48c) input_focus_pane_cp08

0x69df,	// (0x0007f92c) area_vitu2_query_pane_g1

0x69eb,	// (0x0007f938) area_vitu2_query_pane_g2

0x0001,

0xf91d,	// (0x0008886a) area_vitu2_query_pane_g

0x69fa,	// (0x0007f947) area_vitu2_query_pane_t1_ParamLimits

0x69fa,	// (0x0007f947) area_vitu2_query_pane_t1

0x6a0e,	// (0x0007f95b) area_vitu2_query_pane_t2_ParamLimits

0x6a0e,	// (0x0007f95b) area_vitu2_query_pane_t2

0x6a22,	// (0x0007f96f) area_vitu2_query_pane_t3_ParamLimits

0x6a22,	// (0x0007f96f) area_vitu2_query_pane_t3

0x6a4a,	// (0x0007f997) area_vitu2_query_pane_t4_ParamLimits

0x6a4a,	// (0x0007f997) area_vitu2_query_pane_t4

0x6a72,	// (0x0007f9bf) area_vitu2_query_pane_t5_ParamLimits

0x6a72,	// (0x0007f9bf) area_vitu2_query_pane_t5

0x6a9a,	// (0x0007f9e7) area_vitu2_query_pane_t6_ParamLimits

0x6a9a,	// (0x0007f9e7) area_vitu2_query_pane_t6

0x0006,

0xf922,	// (0x0008886f) area_vitu2_query_pane_t_ParamLimits

0xf922,	// (0x0008886f) area_vitu2_query_pane_t

0x6ae6,	// (0x0007fa33) bg_button_pane_cp018

0x6af2,	// (0x0007fa3f) bg_button_pane_cp021

0x6afe,	// (0x0007fa4b) bg_button_pane_cp022

0x6b1d,	// (0x0007fa6a) input_focus_pane_cp09

0xb5fd,	// (0x0008454a) aid_size_touch_mv_arrow_left

0xb626,	// (0x00084573) aid_size_touch_mv_arrow_right

0x5f64,	// (0x0007eeb1) main_cset_slider_pane_g16_ParamLimits

0x5f64,	// (0x0007eeb1) main_cset_slider_pane_g16

0x5f70,	// (0x0007eebd) main_cset_slider_pane_g17_ParamLimits

0x5f70,	// (0x0007eebd) main_cset_slider_pane_g17

0x6850,	// (0x0007f79d) cell_cam4_burst_pane_g1_ParamLimits

0xa2ad,	// (0x000831fa) compa_mode_pane

0x623c,	// (0x0007f189) popup_vtel_slider_window_g3_ParamLimits

0x623c,	// (0x0007f189) popup_vtel_slider_window_g3

0x6253,	// (0x0007f1a0) popup_vtel_slider_window_g4_ParamLimits

0x6253,	// (0x0007f1a0) popup_vtel_slider_window_g4

0x626a,	// (0x0007f1b7) popup_vtel_slider_window_t1_ParamLimits

0x626a,	// (0x0007f1b7) popup_vtel_slider_window_t1

0xa2ad,	// (0x000831fa) main_cl_pane

0xb863,	// (0x000847b0) popup_imed_adjust2_window_ParamLimits

0xd242,	// (0x0008618f) bg_tb_trans_pane_cp05_ParamLimits

0xede7,	// (0x00087d34) popup_imed_adjust2_window_g1_ParamLimits

0xedf6,	// (0x00087d43) popup_imed_adjust2_window_g2_ParamLimits

0xedf6,	// (0x00087d43) popup_imed_adjust2_window_g2

0xee02,	// (0x00087d4f) popup_imed_adjust2_window_g3_ParamLimits

0xee02,	// (0x00087d4f) popup_imed_adjust2_window_g3

0x0002,

0x01e5,	// (0x00079132) popup_imed_adjust2_window_g_ParamLimits

0x01e5,	// (0x00079132) popup_imed_adjust2_window_g

0xee0e,	// (0x00087d5b) popup_imed_adjust2_window_t1_ParamLimits

0xee26,	// (0x00087d73) slider_imed_adjust_pane_ParamLimits

0xee3a,	// (0x00087d87) slider_imed_adjust_pane_g1_ParamLimits

0xee4a,	// (0x00087d97) slider_imed_adjust_pane_g2_ParamLimits

0xee5a,	// (0x00087da7) slider_imed_adjust_pane_g3_ParamLimits

0xee6b,	// (0x00087db8) slider_imed_adjust_pane_g4_ParamLimits

0xf6bf,	// (0x0008860c) slider_imed_adjust_pane_g_ParamLimits

0x53d0,	// (0x0007e31d) aid_touch_area_cam4_ParamLimits

0x53d0,	// (0x0007e31d) aid_touch_area_cam4

0xbc72,	// (0x00084bbf) battery_pane_cp01

0x549f,	// (0x0007e3ec) main_camera4_pane_g6_ParamLimits

0x549f,	// (0x0007e3ec) main_camera4_pane_g6

0x54c9,	// (0x0007e416) main_camera4_pane_t2_ParamLimits

0x54c9,	// (0x0007e416) main_camera4_pane_t2

0x0001,

0xf7a1,	// (0x000886ee) main_camera4_pane_t_ParamLimits

0xf7a1,	// (0x000886ee) main_camera4_pane_t

0x54fe,	// (0x0007e44b) aid_touch_area_vid4_ParamLimits

0x54fe,	// (0x0007e44b) aid_touch_area_vid4

0x5552,	// (0x0007e49f) main_video4_pane_g5_ParamLimits

0x5552,	// (0x0007e49f) main_video4_pane_g5

0x5577,	// (0x0007e4c4) vid4_progress_pane_ParamLimits

0x5577,	// (0x0007e4c4) vid4_progress_pane

0x5f7c,	// (0x0007eec9) main_cset_slider_pane_g18_ParamLimits

0x5f7c,	// (0x0007eec9) main_cset_slider_pane_g18

0x6863,	// (0x0007f7b0) cell_cam4_burst_pane_g2_ParamLimits

0x6863,	// (0x0007f7b0) cell_cam4_burst_pane_g2

0x0001,

0xf8f6,	// (0x00088843) cell_cam4_burst_pane_g_ParamLimits

0xf8f6,	// (0x00088843) cell_cam4_burst_pane_g

0xaad9,	// (0x00083a26) bg_cl_pane_ParamLimits

0xaad9,	// (0x00083a26) bg_cl_pane

0x6b2d,	// (0x0007fa7a) cl_header_pane_ParamLimits

0x6b2d,	// (0x0007fa7a) cl_header_pane

0x6b41,	// (0x0007fa8e) cl_listscroll_pane_ParamLimits

0x6b41,	// (0x0007fa8e) cl_listscroll_pane

0x6b51,	// (0x0007fa9e) bg_cl_pane_g1

0x6b59,	// (0x0007faa6) bg_cl_pane_g2

0x6b61,	// (0x0007faae) bg_cl_pane_g3

0x6b69,	// (0x0007fab6) bg_cl_pane_g4

0x6b71,	// (0x0007fabe) bg_cl_pane_g5

0x6b79,	// (0x0007fac6) bg_cl_pane_g6

0x6b81,	// (0x0007face) bg_cl_pane_g7

0x6b89,	// (0x0007fad6) bg_cl_pane_g8

0x6b91,	// (0x0007fade) bg_cl_pane_g9

0x0008,

0xf931,	// (0x0008887e) bg_cl_pane_g

0x6b99,	// (0x0007fae6) aid_height_cl_leading_ParamLimits

0x6b99,	// (0x0007fae6) aid_height_cl_leading

0x6ba5,	// (0x0007faf2) aid_height_cl_text_ParamLimits

0x6ba5,	// (0x0007faf2) aid_height_cl_text

0xa324,	// (0x00083271) bg_cl_header_pane_ParamLimits

0xa324,	// (0x00083271) bg_cl_header_pane

0x6bc4,	// (0x0007fb11) cl_header_pane_g1_ParamLimits

0x6bc4,	// (0x0007fb11) cl_header_pane_g1

0x6bda,	// (0x0007fb27) cl_header_pane_t1_ParamLimits

0x6bda,	// (0x0007fb27) cl_header_pane_t1

0x6bf3,	// (0x0007fb40) cl_list_pane

0x5e3f,	// (0x0007ed8c) hc_scroll_pane_cp01

0xaf21,	// (0x00083e6e) bg_cl_header_pane_g1

0x59f6,	// (0x0007e943) bg_cl_header_pane_g2

0xaf41,	// (0x00083e8e) bg_cl_header_pane_g3

0x5a06,	// (0x0007e953) bg_cl_header_pane_g4

0x59fe,	// (0x0007e94b) bg_cl_header_pane_g5

0x6392,	// (0x0007f2df) bg_cl_header_pane_g6

0x5a1e,	// (0x0007e96b) bg_cl_header_pane_g7

0x5a26,	// (0x0007e973) bg_cl_header_pane_g8

0x5a16,	// (0x0007e963) bg_cl_header_pane_g9

0x0008,

0xf944,	// (0x00088891) bg_cl_header_pane_g

0x6bfc,	// (0x0007fb49) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x6bfc,	// (0x0007fb49) hc_cl_list_double_graphic_heading_pane

0x6c0d,	// (0x0007fb5a) hc_cl_list_single_graphic_pane_ParamLimits

0x6c0d,	// (0x0007fb5a) hc_cl_list_single_graphic_pane

0x6c23,	// (0x0007fb70) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x6c23,	// (0x0007fb70) hc_cl_list_single_graphic_pane_g1

0x6c2f,	// (0x0007fb7c) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x6c2f,	// (0x0007fb7c) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf957,	// (0x000888a4) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf957,	// (0x000888a4) hc_cl_list_single_graphic_pane_g

0x6c43,	// (0x0007fb90) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x6c43,	// (0x0007fb90) hc_cl_list_single_graphic_pane_t1

0x6c23,	// (0x0007fb70) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x6c23,	// (0x0007fb70) hc_cl_list_double_graphic_heading_pane_g1

0x6c58,	// (0x0007fba5) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x6c58,	// (0x0007fba5) hc_cl_list_double_graphic_heading_pane_g2

0x6c6c,	// (0x0007fbb9) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x6c6c,	// (0x0007fbb9) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf95c,	// (0x000888a9) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf95c,	// (0x000888a9) hc_cl_list_double_graphic_heading_pane_g

0x6c80,	// (0x0007fbcd) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x6c80,	// (0x0007fbcd) hc_cl_list_double_graphic_heading_pane_t1

0x6c95,	// (0x0007fbe2) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x6c95,	// (0x0007fbe2) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf963,	// (0x000888b0) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf963,	// (0x000888b0) hc_cl_list_double_graphic_heading_pane_t

0xd60b,	// (0x00086558) vid4_progress_pane_g1

0xd61b,	// (0x00086568) vid4_progress_pane_g2

0x6caa,	// (0x0007fbf7) vid4_progress_pane_g3

0xd62b,	// (0x00086578) vid4_progress_pane_g4

0x0004,

0xf968,	// (0x000888b5) vid4_progress_pane_g

0x6cbc,	// (0x0007fc09) vid4_progress_pane_t1

0xd643,	// (0x00086590) vid4_progress_pane_t2

0x0002,

0xf973,	// (0x000888c0) vid4_progress_pane_t

0x6cd4,	// (0x0007fc21) wait_bar_pane_cp07

0xe6fa,	// (0x00087647) blid_firmament_pane_ParamLimits

0xe73d,	// (0x0008768a) popup_blid_sat_info2_window_g1

0xe761,	// (0x000876ae) popup_blid_sat_info2_window_t3

0xe76f,	// (0x000876bc) popup_blid_sat_info2_window_t4

0xe77d,	// (0x000876ca) popup_blid_sat_info2_window_t5

0xe78b,	// (0x000876d8) popup_blid_sat_info2_window_t6

0xe79b,	// (0x000876e8) popup_blid_sat_info2_window_t7

0xe7a9,	// (0x000876f6) popup_blid_sat_info2_window_t8

0xe7b7,	// (0x00087704) popup_blid_sat_info2_window_t9

0xe7c5,	// (0x00087712) popup_blid_sat_info2_window_t10

0xe886,	// (0x000877d3) aid_firma_cardinal_ParamLimits

0xe89a,	// (0x000877e7) blid_firmament_pane_t1_ParamLimits

0xe8b1,	// (0x000877fe) blid_firmament_pane_t2_ParamLimits

0xe8c8,	// (0x00087815) blid_firmament_pane_t3_ParamLimits

0xe8df,	// (0x0008782c) blid_firmament_pane_t4_ParamLimits

0xf5c9,	// (0x00088516) blid_firmament_pane_t_ParamLimits

0xe8f6,	// (0x00087843) blid_sat_info_pane_ParamLimits

0xa324,	// (0x00083271) main_cam_set_pane_ParamLimits

0x4b9a,	// (0x0007dae7) aid_size_cell_colour_35_ParamLimits

0x4bba,	// (0x0007db07) aid_size_cell_colour_112_ParamLimits

0x4bda,	// (0x0007db27) aid_size_cell_effect_ParamLimits

0xd242,	// (0x0008618f) bg_tb_trans_pane_cp02_ParamLimits

0x4bfa,	// (0x0007db47) heading_imed_pane_ParamLimits

0x4c06,	// (0x0007db53) listscroll_imed_pane_ParamLimits

0xdc0f,	// (0x00086b5c) popup_call2_audio_first_window_g5_ParamLimits

0xdc0f,	// (0x00086b5c) popup_call2_audio_first_window_g5

0x4fc2,	// (0x0007df0f) aid_size_touch_image3_arrow_left_ParamLimits

0x4fc2,	// (0x0007df0f) aid_size_touch_image3_arrow_left

0x4fee,	// (0x0007df3b) aid_size_touch_image3_arrow_right_ParamLimits

0x4fee,	// (0x0007df3b) aid_size_touch_image3_arrow_right

0xd658,	// (0x000865a5) vid4_progress_pane_t3

0x4d83,	// (0x0007dcd0) main_hwr_training_symbol_option_pane_ParamLimits

0x4d83,	// (0x0007dcd0) main_hwr_training_symbol_option_pane

0xef85,	// (0x00087ed2) popup_hwr_training_preview_window_ParamLimits

0xef85,	// (0x00087ed2) popup_hwr_training_preview_window

0x4da3,	// (0x0007dcf0) hwr_training_navi_pane_g5_ParamLimits

0x4da3,	// (0x0007dcf0) hwr_training_navi_pane_g5

0x5852,	// (0x0007e79f) popup_char_count_window

0xa324,	// (0x00083271) bg_popup_sub_pane_cp20_ParamLimits

0x637a,	// (0x0007f2c7) list_vitu2_match_list_pane_ParamLimits

0x6386,	// (0x0007f2d3) vitu2_page_scroll_pane_ParamLimits

0x6386,	// (0x0007f2d3) vitu2_page_scroll_pane

0x6ce7,	// (0x0007fc34) list_single_hwr_training_symbol_option_pane_ParamLimits

0x6ce7,	// (0x0007fc34) list_single_hwr_training_symbol_option_pane

0x6cfa,	// (0x0007fc47) list_single_hwr_training_symbol_option_pane_g1

0x6d02,	// (0x0007fc4f) list_single_hwr_training_symbol_option_pane_t1

0x6d10,	// (0x0007fc5d) bg_button_pane_cp023

0x6d19,	// (0x0007fc66) bg_button_pane_cp024

0x6d4c,	// (0x0007fc99) vitu2_page_scroll_pane_g1

0x6d54,	// (0x0007fca1) vitu2_page_scroll_pane_g2

0x0001,

0xf97a,	// (0x000888c7) vitu2_page_scroll_pane_g

0x6d5c,	// (0x0007fca9) vitu2_page_scroll_pane_t1

0xe670,	// (0x000875bd) popup_char_count_window_g1

0x6d6b,	// (0x0007fcb8) popup_char_count_window_g2

0x6d74,	// (0x0007fcc1) popup_char_count_window_g3

0x0002,

0xf97f,	// (0x000888cc) popup_char_count_window_g

0x6d7d,	// (0x0007fcca) popup_char_count_window_t1

0xa2ad,	// (0x000831fa) main_vded2_pane

0xedd3,	// (0x00087d20) aid_size_cell_imed_line

0xeddd,	// (0x00087d2a) grid_imed_line_width_pane

0xbd3c,	// (0x00084c89) vid4_indicators_pane_g4

0x6d8b,	// (0x0007fcd8) cell_imed_line_width_pane_ParamLimits

0x6d8b,	// (0x0007fcd8) cell_imed_line_width_pane

0x6d9f,	// (0x0007fcec) cell_imed_line_width_pane_g1

0x6da8,	// (0x0007fcf5) cell_imed_line_width_pane_g2

0x0001,

0xf986,	// (0x000888d3) cell_imed_line_width_pane_g

0x6db0,	// (0x0007fcfd) main_vded2_pane_g1_ParamLimits

0x6db0,	// (0x0007fcfd) main_vded2_pane_g1

0x6dc6,	// (0x0007fd13) main_vded2_pane_g2_ParamLimits

0x6dc6,	// (0x0007fd13) main_vded2_pane_g2

0x0001,

0xf98b,	// (0x000888d8) main_vded2_pane_g_ParamLimits

0xf98b,	// (0x000888d8) main_vded2_pane_g

0x6dd8,	// (0x0007fd25) vded2_slider_pane_ParamLimits

0x6dd8,	// (0x0007fd25) vded2_slider_pane

0x6de8,	// (0x0007fd35) aid_size_touch_vded2_end

0x6df2,	// (0x0007fd3f) aid_size_touch_vded2_playhead

0x6dfc,	// (0x0007fd49) aid_size_touch_vded2_start

0x6e04,	// (0x0007fd51) vded2_slider_bg_pane

0x6e0d,	// (0x0007fd5a) vded2_slider_pane_g1

0x6e16,	// (0x0007fd63) vded2_slider_pane_g2

0x6e1e,	// (0x0007fd6b) vded2_slider_pane_g3

0x0002,

0xf990,	// (0x000888dd) vded2_slider_pane_g

0x6e29,	// (0x0007fd76) vded2_slider_bg_pane_g1

0x6e32,	// (0x0007fd7f) vded2_slider_bg_pane_g2

0x6e3b,	// (0x0007fd88) vded2_slider_bg_pane_g3

0x0002,

0xf997,	// (0x000888e4) vded2_slider_bg_pane_g

0x3168,	// (0x0007c0b5) aid_postcard_touch_down_pane_ParamLimits

0x3168,	// (0x0007c0b5) aid_postcard_touch_down_pane

0x317e,	// (0x0007c0cb) aid_postcard_touch_up_pane_ParamLimits

0x317e,	// (0x0007c0cb) aid_postcard_touch_up_pane

0xa2ad,	// (0x000831fa) main_blid2_pane

0xb849,	// (0x00084796) popup_blid2_search_window

0xa2ad,	// (0x000831fa) blid2_gps_pane

0xa2ad,	// (0x000831fa) blid2_navig_pane

0xa2ad,	// (0x000831fa) blid2_search_pane

0xa2ad,	// (0x000831fa) blid2_tripm_pane

0x6e44,	// (0x0007fd91) blid2_search_pane_g1_ParamLimits

0x6e44,	// (0x0007fd91) blid2_search_pane_g1

0x6e5e,	// (0x0007fdab) blid2_search_pane_t1_ParamLimits

0x6e5e,	// (0x0007fdab) blid2_search_pane_t1

0x6e70,	// (0x0007fdbd) aid_size_cell_blid2_gps_ParamLimits

0x6e70,	// (0x0007fdbd) aid_size_cell_blid2_gps

0x6e88,	// (0x0007fdd5) blid2_gps_pane_g1_ParamLimits

0x6e88,	// (0x0007fdd5) blid2_gps_pane_g1

0x6e9c,	// (0x0007fde9) grid_blid2_satellite_pane_ParamLimits

0x6e9c,	// (0x0007fde9) grid_blid2_satellite_pane

0x6eb6,	// (0x0007fe03) blid2_navig_pane_g1_ParamLimits

0x6eb6,	// (0x0007fe03) blid2_navig_pane_g1

0x6ec2,	// (0x0007fe0f) blid2_navig_pane_t1_ParamLimits

0x6ec2,	// (0x0007fe0f) blid2_navig_pane_t1

0x6edd,	// (0x0007fe2a) blid2_navig_pane_t2_ParamLimits

0x6edd,	// (0x0007fe2a) blid2_navig_pane_t2

0x0001,

0xf99e,	// (0x000888eb) blid2_navig_pane_t_ParamLimits

0xf99e,	// (0x000888eb) blid2_navig_pane_t

0x6ef8,	// (0x0007fe45) blid2_navig_ring_pane_ParamLimits

0x6ef8,	// (0x0007fe45) blid2_navig_ring_pane

0x6f11,	// (0x0007fe5e) blid2_speed_pane_ParamLimits

0x6f11,	// (0x0007fe5e) blid2_speed_pane

0x6f1d,	// (0x0007fe6a) blid2_tripm_pane_g1_ParamLimits

0x6f1d,	// (0x0007fe6a) blid2_tripm_pane_g1

0x6f36,	// (0x0007fe83) blid2_tripm_pane_g2_ParamLimits

0x6f36,	// (0x0007fe83) blid2_tripm_pane_g2

0x6f4a,	// (0x0007fe97) blid2_tripm_pane_g3_ParamLimits

0x6f4a,	// (0x0007fe97) blid2_tripm_pane_g3

0x6f5e,	// (0x0007feab) blid2_tripm_pane_g4_ParamLimits

0x6f5e,	// (0x0007feab) blid2_tripm_pane_g4

0x6f72,	// (0x0007febf) blid2_tripm_pane_g5_ParamLimits

0x6f72,	// (0x0007febf) blid2_tripm_pane_g5

0x0005,

0xf9a3,	// (0x000888f0) blid2_tripm_pane_g_ParamLimits

0xf9a3,	// (0x000888f0) blid2_tripm_pane_g

0x6f98,	// (0x0007fee5) blid2_tripm_pane_t1_ParamLimits

0x6f98,	// (0x0007fee5) blid2_tripm_pane_t1

0x6fb3,	// (0x0007ff00) blid2_tripm_pane_t2_ParamLimits

0x6fb3,	// (0x0007ff00) blid2_tripm_pane_t2

0x6fcc,	// (0x0007ff19) blid2_tripm_pane_t3_ParamLimits

0x6fcc,	// (0x0007ff19) blid2_tripm_pane_t3

0x0003,

0xf9b0,	// (0x000888fd) blid2_tripm_pane_t_ParamLimits

0xf9b0,	// (0x000888fd) blid2_tripm_pane_t

0x7013,	// (0x0007ff60) cell_blid2_satellite_pane_ParamLimits

0x7013,	// (0x0007ff60) cell_blid2_satellite_pane

0x7031,	// (0x0007ff7e) cell_blid2_satellite_pane_g1

0x703a,	// (0x0007ff87) cell_blid2_satellite_pane_t1

0xaa61,	// (0x000839ae) blid2_speed_pane_g1

0x7048,	// (0x0007ff95) blid2_speed_pane_t1

0x7056,	// (0x0007ffa3) blid2_speed_pane_t2

0x0001,

0xf9b9,	// (0x00088906) blid2_speed_pane_t

0xaa61,	// (0x000839ae) blid2_navig_ring_pane_g1

0x7064,	// (0x0007ffb1) blid2_navig_ring_pane_g2

0x706c,	// (0x0007ffb9) blid2_navig_ring_pane_g3

0x7074,	// (0x0007ffc1) blid2_navig_ring_pane_g4

0x707c,	// (0x0007ffc9) blid2_navig_ring_pane_g5

0x0004,

0xf9be,	// (0x0008890b) blid2_navig_ring_pane_g

0xa2ad,	// (0x000831fa) bg_popup_window_pane_cp011

0x7084,	// (0x0007ffd1) popup_blid2_search_window_g1

0x708c,	// (0x0007ffd9) popup_blid2_search_window_t1

0x709a,	// (0x0007ffe7) popup_blid2_search_window_t2

0x0001,

0xf9c9,	// (0x00088916) popup_blid2_search_window_t

0xae30,	// (0x00083d7d) main_browser_pane_g1

0xaad9,	// (0x00083a26) main_browser_pane_ParamLimits

0xa324,	// (0x00083271) bg_button_pane_cp011_ParamLimits

0x59d8,	// (0x0007e925) cell_vitu2_function_pane_g1_ParamLimits

0xd242,	// (0x0008618f) bg_popup_sub_pane_cp22_ParamLimits

0x653f,	// (0x0007f48c) input_focus_pane_cp08_ParamLimits

0x655a,	// (0x0007f4a7) popup_vitu2_query_button_pane_ParamLimits

0x655a,	// (0x0007f4a7) popup_vitu2_query_button_pane

0x6569,	// (0x0007f4b6) popup_vitu2_query_input_button_pane

0x6571,	// (0x0007f4be) popup_vitu2_query_window_g1_ParamLimits

0x657d,	// (0x0007f4ca) popup_vitu2_query_window_g2_ParamLimits

0xf8ca,	// (0x00088817) popup_vitu2_query_window_g_ParamLimits

0xa2ad,	// (0x000831fa) bg_button_pane_cp026

0x70a8,	// (0x0007fff5) popup_vitu2_query_input_button_pane_g1

0xa2ad,	// (0x000831fa) bg_button_pane_cp025

0x70b0,	// (0x0007fffd) popup_vitu2_query_button_pane_t1

0x4008,	// (0x0007cf55) main_mp3_pane_t6

0x4016,	// (0x0007cf63) popup_slider_window_cp01

0xbca0,	// (0x00084bed) cam4_battery_pane

0xbcf9,	// (0x00084c46) cam4_battery_pane_cp02

0xd603,	// (0x00086550) cam4_battery_pane_cp01

0xd603,	// (0x00086550) cam4_battery_pane_cp03

0xaa61,	// (0x000839ae) cam4_battery_pane_g1

0xeaa1,	// (0x000879ee) cam4_battery_pane_g2

0x0001,

0xf9ce,	// (0x0008891b) cam4_battery_pane_g

0xe7d3,	// (0x00087720) popup_blid_sat_info2_window_t11

0xb5fd,	// (0x0008454a) aid_size_touch_mv_arrow_left_ParamLimits

0xb626,	// (0x00084573) aid_size_touch_mv_arrow_right_ParamLimits

0xb684,	// (0x000845d1) navi_pane_g1_ParamLimits

0xb690,	// (0x000845dd) navi_pane_g2_ParamLimits

0xb6be,	// (0x0008460b) navi_pane_g3_ParamLimits

0xf30c,	// (0x00088259) navi_pane_g_ParamLimits

0x2e7d,	// (0x0007bdca) navi_pane_mv_t1_ParamLimits

0x4c12,	// (0x0007db5f) grid_imed_effect_pane_ParamLimits

0x1c06,	// (0x0007ab53) aid_placing_vt_slider_lsc

0xad7f,	// (0x00083ccc) aid_placing_vt_slider_prt

0xa324,	// (0x00083271) bg_tb_trans_pane_cp01_ParamLimits

0xea53,	// (0x000879a0) popup_image_details_window_g1_ParamLimits

0xea66,	// (0x000879b3) popup_image_details_window_g2_ParamLimits

0xea7b,	// (0x000879c8) popup_image_details_window_g3_ParamLimits

0xea7b,	// (0x000879c8) popup_image_details_window_g3

0xf609,	// (0x00088556) popup_image_details_window_g_ParamLimits

0xea8f,	// (0x000879dc) popup_image_details_window_t1_ParamLimits

0xeaab,	// (0x000879f8) popup_image_details_window_t2_ParamLimits

0xeac4,	// (0x00087a11) popup_image_details_window_t3_ParamLimits

0xead8,	// (0x00087a25) popup_image_details_window_t4_ParamLimits

0xeaf3,	// (0x00087a40) popup_image_details_window_t5_ParamLimits

0xf610,	// (0x0008855d) popup_image_details_window_t_ParamLimits

0x6bb1,	// (0x0007fafe) cl_header_name_pane_ParamLimits

0x6bb1,	// (0x0007fafe) cl_header_name_pane

0x70be,	// (0x0008000b) cl_header_name_pane_t1_ParamLimits

0x70be,	// (0x0008000b) cl_header_name_pane_t1

0x70df,	// (0x0008002c) cl_header_name_pane_t2_ParamLimits

0x70df,	// (0x0008002c) cl_header_name_pane_t2

0x7121,	// (0x0008006e) cl_header_name_pane_t3_ParamLimits

0x7121,	// (0x0008006e) cl_header_name_pane_t3

0x0002,

0xf9d3,	// (0x00088920) cl_header_name_pane_t_ParamLimits

0xf9d3,	// (0x00088920) cl_header_name_pane_t

0xb74d,	// (0x0008469a) navi_pane_mv_g2_ParamLimits

0x57ee,	// (0x0007e73b) field_vitu2_entry_pane_g1_ParamLimits

0x57fa,	// (0x0007e747) field_vitu2_entry_pane_g2_ParamLimits

0xdbef,	// (0x00086b3c) field_vitu2_entry_pane_g3_ParamLimits

0xdbef,	// (0x00086b3c) field_vitu2_entry_pane_g3

0xf7d3,	// (0x00088720) field_vitu2_entry_pane_g_ParamLimits

0x5868,	// (0x0007e7b5) cell_vitu2_itu_pane_g1_ParamLimits

0x5880,	// (0x0007e7cd) cell_vitu2_itu_pane_g2_ParamLimits

0x5880,	// (0x0007e7cd) cell_vitu2_itu_pane_g2

0x0001,

0xf7df,	// (0x0008872c) cell_vitu2_itu_pane_g_ParamLimits

0xf7df,	// (0x0008872c) cell_vitu2_itu_pane_g

0xa324,	// (0x00083271) bg_vkb2_func_pane_cp05_ParamLimits

0xa324,	// (0x00083271) bg_vkb2_func_pane_cp05

0xa324,	// (0x00083271) bg_vkb2_func_pane_cp03

0xa324,	// (0x00083271) bg_vkb2_func_pane_cp04

0xa324,	// (0x00083271) bg_vkb2_func_pane_cp10_ParamLimits

0xa324,	// (0x00083271) bg_vkb2_func_pane_cp10

0x6b0d,	// (0x0007fa5a) bg_vkb2_func_pane_cp08

0x6ae6,	// (0x0007fa33) bg_vkb2_func_pane_cp06

0x6af2,	// (0x0007fa3f) bg_vkb2_func_pane_cp07

0x6d22,	// (0x0007fc6f) bg_vkb2_func_pane_cp11_ParamLimits

0x6d22,	// (0x0007fc6f) bg_vkb2_func_pane_cp11

0x6d37,	// (0x0007fc84) bg_vkb2_func_pane_cp12_ParamLimits

0x6d37,	// (0x0007fc84) bg_vkb2_func_pane_cp12

0xa2ad,	// (0x000831fa) bg_vkb2_func_pane_cp09

0x59f6,	// (0x0007e943) bg_vkb2_func_pane_g1

0xaf41,	// (0x00083e8e) bg_vkb2_func_pane_g2

0x59fe,	// (0x0007e94b) bg_vkb2_func_pane_g3

0x5a06,	// (0x0007e953) bg_vkb2_func_pane_g4

0x6392,	// (0x0007f2df) bg_vkb2_func_pane_g5

0x5a1e,	// (0x0007e96b) bg_vkb2_func_pane_g6

0x5a26,	// (0x0007e973) bg_vkb2_func_pane_g7

0x5a16,	// (0x0007e963) bg_vkb2_func_pane_g8

0xaf21,	// (0x00083e6e) bg_vkb2_func_pane_g9

0x0008,

0xf9da,	// (0x00088927) bg_vkb2_func_pane_g

0x6f86,	// (0x0007fed3) blid2_tripm_pane_g6_ParamLimits

0x6f86,	// (0x0007fed3) blid2_tripm_pane_g6

0x4ee6,	// (0x0007de33) mp4_progress_pane_g1

0x6fff,	// (0x0007ff4c) blid2_tripm_values_pane_ParamLimits

0x6fff,	// (0x0007ff4c) blid2_tripm_values_pane

0x7152,	// (0x0008009f) blid2_tripm_values_pane_t1

0x7160,	// (0x000800ad) blid2_tripm_values_pane_t2

0x716e,	// (0x000800bb) blid2_tripm_values_pane_t3

0x717c,	// (0x000800c9) blid2_tripm_values_pane_t4

0x718a,	// (0x000800d7) blid2_tripm_values_pane_t5

0x7198,	// (0x000800e5) blid2_tripm_values_pane_t6

0x71a6,	// (0x000800f3) blid2_tripm_values_pane_t7

0x71b4,	// (0x00080101) blid2_tripm_values_pane_t8

0x71c2,	// (0x0008010f) blid2_tripm_values_pane_t9

0x0008,

0xf9ed,	// (0x0008893a) blid2_tripm_values_pane_t

0x1c48,	// (0x0007ab95) call_video_pane_t1_ParamLimits

0x1c66,	// (0x0007abb3) call_video_pane_t2_ParamLimits

0xf1ba,	// (0x00088107) call_video_pane_t_ParamLimits

0x09db,	// (0x00079928) msg_header_pane_g1_ParamLimits

0xd2f9,	// (0x00086246) msg_header_pane_g2_ParamLimits

0xd2f9,	// (0x00086246) msg_header_pane_g2

0x0001,

0xf3aa,	// (0x000882f7) msg_header_pane_g_ParamLimits

0xf3aa,	// (0x000882f7) msg_header_pane_g

0xaad9,	// (0x00083a26) main_clock2_pane_ParamLimits

0x4907,	// (0x0007d854) grid_clock2_toolbar_pane_ParamLimits

0x4907,	// (0x0007d854) grid_clock2_toolbar_pane

0x4907,	// (0x0007d854) listscroll_clock2_pane_ParamLimits

0x4907,	// (0x0007d854) listscroll_clock2_pane

0x49eb,	// (0x0007d938) main_clock2_pane_t3_ParamLimits

0x49eb,	// (0x0007d938) main_clock2_pane_t3

0x4a0f,	// (0x0007d95c) main_clock2_pane_t4_ParamLimits

0x4a0f,	// (0x0007d95c) main_clock2_pane_t4

0x71d0,	// (0x0008011d) cell_clock2_toolbar_pane

0x71d8,	// (0x00080125) cell_clock2_toolbar_pane_cp01

0x71d8,	// (0x00080125) cell_clock2_toolbar_pane_cp02

0x71e0,	// (0x0008012d) cell_clock2_toolbar_pane_cp03

0x71e8,	// (0x00080135) list_clock2_pane

0xb573,	// (0x000844c0) scroll_pane_cp10

0x71f0,	// (0x0008013d) list_single_clock2_pane_ParamLimits

0x71f0,	// (0x0008013d) list_single_clock2_pane

0xad1e,	// (0x00083c6b) list_highlight_pane_cp08

0x71fd,	// (0x0008014a) list_single_clock2_pane_t1

0x720b,	// (0x00080158) list_single_clock2_pane_t2

0x0001,

0xfa00,	// (0x0008894d) list_single_clock2_pane_t

0xa2ad,	// (0x000831fa) bg_button_pane_cp10

0x7219,	// (0x00080166) cell_clock2_toolbar_pane_g1

0x30f4,	// (0x0007c041) aid_main_viewer_pane_g1_ParamLimits

0x30f4,	// (0x0007c041) aid_main_viewer_pane_g1

0x3102,	// (0x0007c04f) aid_main_viewer_pane_g2_ParamLimits

0x3102,	// (0x0007c04f) aid_main_viewer_pane_g2

0x3110,	// (0x0007c05d) aid_main_viewer_pane_g3_ParamLimits

0x3110,	// (0x0007c05d) aid_main_viewer_pane_g3

0x311f,	// (0x0007c06c) aid_main_viewer_pane_g4_ParamLimits

0x311f,	// (0x0007c06c) aid_main_viewer_pane_g4

0x0003,

0xf3bb,	// (0x00088308) aid_main_viewer_pane_g_ParamLimits

0xf3bb,	// (0x00088308) aid_main_viewer_pane_g

0x39c3,	// (0x0007c910) main_calc_pane_ParamLimits

0x39d7,	// (0x0007c924) main_dialer2_pane_ParamLimits

0xa2ad,	// (0x000831fa) main_cam6_pane

0xa2ad,	// (0x000831fa) main_vid6_pane

0x4913,	// (0x0007d860) listscroll_gen_pane_cp06_ParamLimits

0x4913,	// (0x0007d860) listscroll_gen_pane_cp06

0x4a32,	// (0x0007d97f) main_clock2_pane_t5_ParamLimits

0x4a32,	// (0x0007d97f) main_clock2_pane_t5

0x4a90,	// (0x0007d9dd) aid_call2_pane_cp10_ParamLimits

0x4aa2,	// (0x0007d9ef) aid_call_pane_cp10_ParamLimits

0xb5f1,	// (0x0008453e) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb5f1,	// (0x0008453e) popup_clock_analogue_window_cp10_g2_ParamLimits

0x4ab4,	// (0x0007da01) popup_clock_analogue_window_cp10_g3_ParamLimits

0x4ab4,	// (0x0007da01) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb5f1,	// (0x0008453e) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf6b4,	// (0x00088601) popup_clock_analogue_window_cp10_g_ParamLimits

0x4aca,	// (0x0007da17) popup_clock_analogue_window_cp10_t1_ParamLimits

0x4fa6,	// (0x0007def3) cell_dialer2_keypad_pane_g2_ParamLimits

0x4fa6,	// (0x0007def3) cell_dialer2_keypad_pane_g2

0x0001,

0xf772,	// (0x000886bf) cell_dialer2_keypad_pane_g_ParamLimits

0xf772,	// (0x000886bf) cell_dialer2_keypad_pane_g

0xaa6b,	// (0x000839b8) cell_dialer2_keypad_pane_t1

0x5e19,	// (0x0007ed66) main_cset_text2_pane_ParamLimits

0x5e19,	// (0x0007ed66) main_cset_text2_pane

0x69df,	// (0x0007f92c) area_vitu2_query_pane_g1_ParamLimits

0x69eb,	// (0x0007f938) area_vitu2_query_pane_g2_ParamLimits

0xf91d,	// (0x0008886a) area_vitu2_query_pane_g_ParamLimits

0x6ac2,	// (0x0007fa0f) area_vitu2_query_pane_t7_ParamLimits

0x6ac2,	// (0x0007fa0f) area_vitu2_query_pane_t7

0x6ae6,	// (0x0007fa33) bg_button_pane_cp018_ParamLimits

0x6af2,	// (0x0007fa3f) bg_button_pane_cp021_ParamLimits

0x6afe,	// (0x0007fa4b) bg_button_pane_cp022_ParamLimits

0x6b0d,	// (0x0007fa5a) bg_vkb2_func_pane_cp08_ParamLimits

0x6ae6,	// (0x0007fa33) bg_vkb2_func_pane_cp06_ParamLimits

0x6af2,	// (0x0007fa3f) bg_vkb2_func_pane_cp07_ParamLimits

0x6b1d,	// (0x0007fa6a) input_focus_pane_cp09_ParamLimits

0x7221,	// (0x0008016e) cam6_autofocus_pane_ParamLimits

0x7221,	// (0x0008016e) cam6_autofocus_pane

0x722d,	// (0x0008017a) cam6_image_uncrop_pane_ParamLimits

0x722d,	// (0x0008017a) cam6_image_uncrop_pane

0x723d,	// (0x0008018a) cam6_indi_pane_ParamLimits

0x723d,	// (0x0008018a) cam6_indi_pane

0x7253,	// (0x000801a0) cam6_mode_pane_ParamLimits

0x7253,	// (0x000801a0) cam6_mode_pane

0x7265,	// (0x000801b2) cam6_timer_pane_ParamLimits

0x7265,	// (0x000801b2) cam6_timer_pane

0x7271,	// (0x000801be) cam6_zoom_pane_ParamLimits

0x7271,	// (0x000801be) cam6_zoom_pane

0x727e,	// (0x000801cb) cam6_mode_pane_g1_ParamLimits

0x727e,	// (0x000801cb) cam6_mode_pane_g1

0x728e,	// (0x000801db) cam6_mode_pane_g2_ParamLimits

0x728e,	// (0x000801db) cam6_mode_pane_g2

0x729e,	// (0x000801eb) cam6_mode_pane_g3_ParamLimits

0x729e,	// (0x000801eb) cam6_mode_pane_g3

0x72ae,	// (0x000801fb) cam6_mode_pane_g4_ParamLimits

0x72ae,	// (0x000801fb) cam6_mode_pane_g4

0x0003,

0xfa05,	// (0x00088952) cam6_mode_pane_g_ParamLimits

0xfa05,	// (0x00088952) cam6_mode_pane_g

0x3ea9,	// (0x0007cdf6) bg_tb_trans_pane_cp08_ParamLimits

0x3ea9,	// (0x0007cdf6) bg_tb_trans_pane_cp08

0x72be,	// (0x0008020b) cam6_battery_pane_ParamLimits

0x72be,	// (0x0008020b) cam6_battery_pane

0x72d4,	// (0x00080221) cam6_indi_pane_g1_ParamLimits

0x72d4,	// (0x00080221) cam6_indi_pane_g1

0x72e6,	// (0x00080233) cam6_indi_pane_g2_ParamLimits

0x72e6,	// (0x00080233) cam6_indi_pane_g2

0x72f8,	// (0x00080245) cam6_indi_pane_g3_ParamLimits

0x72f8,	// (0x00080245) cam6_indi_pane_g3

0x0002,

0xfa0e,	// (0x0008895b) cam6_indi_pane_g_ParamLimits

0xfa0e,	// (0x0008895b) cam6_indi_pane_g

0x730a,	// (0x00080257) cam6_indi_pane_t1_ParamLimits

0x730a,	// (0x00080257) cam6_indi_pane_t1

0x55bd,	// (0x0007e50a) cam6_autofocus_pane_g1

0x55c5,	// (0x0007e512) cam6_autofocus_pane_g2

0x55cd,	// (0x0007e51a) cam6_autofocus_pane_g3

0x55d5,	// (0x0007e522) cam6_autofocus_pane_g4

0x0003,

0xfa15,	// (0x00088962) cam6_autofocus_pane_g

0x7330,	// (0x0008027d) cam6_timer_pane_g1

0x7338,	// (0x00080285) cam6_timer_pane_t1

0x7346,	// (0x00080293) cam6_zoom_cont_pane

0x734e,	// (0x0008029b) cam6_zoom_pane_g1

0x7357,	// (0x000802a4) cam6_zoom_pane_g2

0x7360,	// (0x000802ad) cam6_zoom_pane_g3

0x0002,

0xfa1e,	// (0x0008896b) cam6_zoom_pane_g

0xaa61,	// (0x000839ae) cam6_battery_pane_g1

0xaa61,	// (0x000839ae) cam6_battery_pane_g2

0x0001,

0xf08c,	// (0x00087fd9) cam6_battery_pane_g

0x734e,	// (0x0008029b) cam6_zoom_cont_pane_g1

0x7357,	// (0x000802a4) cam6_zoom_cont_pane_g2

0x7369,	// (0x000802b6) cam6_zoom_cont_pane_g3

0x0002,

0xfa25,	// (0x00088972) cam6_zoom_cont_pane_g

0x7383,	// (0x000802d0) cam6_mode_pane_cp_ParamLimits

0x7383,	// (0x000802d0) cam6_mode_pane_cp

0x7395,	// (0x000802e2) cam6_zoom_pane_cp_ParamLimits

0x7395,	// (0x000802e2) cam6_zoom_pane_cp

0x73a1,	// (0x000802ee) vid6_image_uncrop_cif_pane_ParamLimits

0x73a1,	// (0x000802ee) vid6_image_uncrop_cif_pane

0x73b1,	// (0x000802fe) vid6_image_uncrop_nhd_pane_ParamLimits

0x73b1,	// (0x000802fe) vid6_image_uncrop_nhd_pane

0x73d0,	// (0x0008031d) vid6_image_uncrop_vga_pane_ParamLimits

0x73d0,	// (0x0008031d) vid6_image_uncrop_vga_pane

0x73df,	// (0x0008032c) vid6_image_uncrop_wvga_pane_ParamLimits

0x73df,	// (0x0008032c) vid6_image_uncrop_wvga_pane

0x73ee,	// (0x0008033b) vid6_indi_pane_ParamLimits

0x73ee,	// (0x0008033b) vid6_indi_pane

0x3ea9,	// (0x0007cdf6) bg_tb_trans_pane_cp09_ParamLimits

0x3ea9,	// (0x0007cdf6) bg_tb_trans_pane_cp09

0x7406,	// (0x00080353) cam6_battery_pane_cp_ParamLimits

0x7406,	// (0x00080353) cam6_battery_pane_cp

0x7412,	// (0x0008035f) vid6_indi_pane_g1_ParamLimits

0x7412,	// (0x0008035f) vid6_indi_pane_g1

0x7424,	// (0x00080371) vid6_indi_pane_g2_ParamLimits

0x7424,	// (0x00080371) vid6_indi_pane_g2

0x7436,	// (0x00080383) vid6_indi_pane_g3_ParamLimits

0x7436,	// (0x00080383) vid6_indi_pane_g3

0x744b,	// (0x00080398) vid6_indi_pane_g4_ParamLimits

0x744b,	// (0x00080398) vid6_indi_pane_g4

0x7460,	// (0x000803ad) vid6_indi_pane_g5_ParamLimits

0x7460,	// (0x000803ad) vid6_indi_pane_g5

0x0004,

0xfa2c,	// (0x00088979) vid6_indi_pane_g_ParamLimits

0xfa2c,	// (0x00088979) vid6_indi_pane_g

0x747a,	// (0x000803c7) vid6_indi_pane_t1_ParamLimits

0x747a,	// (0x000803c7) vid6_indi_pane_t1

0x7490,	// (0x000803dd) vid6_indi_pane_t2_ParamLimits

0x7490,	// (0x000803dd) vid6_indi_pane_t2

0x74b8,	// (0x00080405) vid6_indi_pane_t3_ParamLimits

0x74b8,	// (0x00080405) vid6_indi_pane_t3

0x74e0,	// (0x0008042d) vid6_indi_pane_t4_ParamLimits

0x74e0,	// (0x0008042d) vid6_indi_pane_t4

0x0003,

0xfa37,	// (0x00088984) vid6_indi_pane_t_ParamLimits

0xfa37,	// (0x00088984) vid6_indi_pane_t

0x7504,	// (0x00080451) wait_bar_pane_cp08

0x7513,	// (0x00080460) main_cset_text2_pane_t1_ParamLimits

0x7513,	// (0x00080460) main_cset_text2_pane_t1

0x7371,	// (0x000802be) listscroll_gen_pane_cp06_t1_ParamLimits

0x7371,	// (0x000802be) listscroll_gen_pane_cp06_t1

0xa2ad,	// (0x000831fa) main_cam6_set_pane

0xaa1b,	// (0x00083968) bg_tb_trans_pane_cp06_ParamLimits

0xbca8,	// (0x00084bf5) cam4_indicators_pane_g1_ParamLimits

0xbcb9,	// (0x00084c06) cam4_indicators_pane_g2_ParamLimits

0xf7af,	// (0x000886fc) cam4_indicators_pane_g_ParamLimits

0xbcd7,	// (0x00084c24) cam4_indicators_pane_t1_ParamLimits

0xa324,	// (0x00083271) bg_tb_trans_pane_cp07_ParamLimits

0xbd03,	// (0x00084c50) vid4_indicators_pane_g1_ParamLimits

0xbd17,	// (0x00084c64) vid4_indicators_pane_g2_ParamLimits

0xbd2b,	// (0x00084c78) vid4_indicators_pane_g3_ParamLimits

0xbd3c,	// (0x00084c89) vid4_indicators_pane_g4_ParamLimits

0xf7c1,	// (0x0008870e) vid4_indicators_pane_g_ParamLimits

0xbd5a,	// (0x00084ca7) vid4_indicators_pane_t1_ParamLimits

0xd60b,	// (0x00086558) vid4_progress_pane_g1_ParamLimits

0xd61b,	// (0x00086568) vid4_progress_pane_g2_ParamLimits

0x6caa,	// (0x0007fbf7) vid4_progress_pane_g3_ParamLimits

0xd62b,	// (0x00086578) vid4_progress_pane_g4_ParamLimits

0xf968,	// (0x000888b5) vid4_progress_pane_g_ParamLimits

0x6cbc,	// (0x0007fc09) vid4_progress_pane_t1_ParamLimits

0xd643,	// (0x00086590) vid4_progress_pane_t2_ParamLimits

0xd658,	// (0x000865a5) vid4_progress_pane_t3_ParamLimits

0xf973,	// (0x000888c0) vid4_progress_pane_t_ParamLimits

0x6cd4,	// (0x0007fc21) wait_bar_pane_cp07_ParamLimits

0x7530,	// (0x0008047d) main_cam6_set_pane_g2_ParamLimits

0x7530,	// (0x0008047d) main_cam6_set_pane_g2

0x7554,	// (0x000804a1) main_cset6_listscroll_pane_ParamLimits

0x7554,	// (0x000804a1) main_cset6_listscroll_pane

0x7574,	// (0x000804c1) main_cset6_slider_pane_ParamLimits

0x7574,	// (0x000804c1) main_cset6_slider_pane

0x758a,	// (0x000804d7) main_cset6_text2_pane_ParamLimits

0x758a,	// (0x000804d7) main_cset6_text2_pane

0x7598,	// (0x000804e5) main_cset6_text_pane

0x75a0,	// (0x000804ed) main_cset_list_pane_copy1_ParamLimits

0x75a0,	// (0x000804ed) main_cset_list_pane_copy1

0x75b0,	// (0x000804fd) scroll_pane_cp028_copy1

0x75b9,	// (0x00080506) cset_list_set_pane_copy1

0x75ca,	// (0x00080517) aid_position_infowindow_above_copy1

0x75d2,	// (0x0008051f) aid_position_infowindow_below_copy1

0x75da,	// (0x00080527) cset_list_set_pane_g1_copy1

0x0a8e,	// (0x000799db) cset_list_set_pane_g3_copy1_ParamLimits

0x0a8e,	// (0x000799db) cset_list_set_pane_g3_copy1

0x0a9d,	// (0x000799ea) cset_list_set_pane_t1_copy1_ParamLimits

0x0a9d,	// (0x000799ea) cset_list_set_pane_t1_copy1

0xa324,	// (0x00083271) list_highlight_pane_cp021_copy1_ParamLimits

0xa324,	// (0x00083271) list_highlight_pane_cp021_copy1

0x75e2,	// (0x0008052f) cset6_slider_pane_ParamLimits

0x75e2,	// (0x0008052f) cset6_slider_pane

0x760e,	// (0x0008055b) main_cset6_slider_pane_g1_ParamLimits

0x760e,	// (0x0008055b) main_cset6_slider_pane_g1

0x7636,	// (0x00080583) main_cset6_slider_pane_g2_ParamLimits

0x7636,	// (0x00080583) main_cset6_slider_pane_g2

0x765e,	// (0x000805ab) main_cset6_slider_pane_g3_ParamLimits

0x765e,	// (0x000805ab) main_cset6_slider_pane_g3

0x766a,	// (0x000805b7) main_cset6_slider_pane_g4_ParamLimits

0x766a,	// (0x000805b7) main_cset6_slider_pane_g4

0x7676,	// (0x000805c3) main_cset6_slider_pane_g5_ParamLimits

0x7676,	// (0x000805c3) main_cset6_slider_pane_g5

0x5eec,	// (0x0007ee39) main_cset6_slider_pane_g7_ParamLimits

0x5eec,	// (0x0007ee39) main_cset6_slider_pane_g7

0x5ef8,	// (0x0007ee45) main_cset6_slider_pane_g8_ParamLimits

0x5ef8,	// (0x0007ee45) main_cset6_slider_pane_g8

0x5f04,	// (0x0007ee51) main_cset6_slider_pane_g9_ParamLimits

0x5f04,	// (0x0007ee51) main_cset6_slider_pane_g9

0x5f10,	// (0x0007ee5d) main_cset6_slider_pane_g10_ParamLimits

0x5f10,	// (0x0007ee5d) main_cset6_slider_pane_g10

0x5f1c,	// (0x0007ee69) main_cset6_slider_pane_g11_ParamLimits

0x5f1c,	// (0x0007ee69) main_cset6_slider_pane_g11

0x5f28,	// (0x0007ee75) main_cset6_slider_pane_g12_ParamLimits

0x5f28,	// (0x0007ee75) main_cset6_slider_pane_g12

0x5f34,	// (0x0007ee81) main_cset6_slider_pane_g13_ParamLimits

0x5f34,	// (0x0007ee81) main_cset6_slider_pane_g13

0x5f40,	// (0x0007ee8d) main_cset6_slider_pane_g14_ParamLimits

0x5f40,	// (0x0007ee8d) main_cset6_slider_pane_g14

0x7682,	// (0x000805cf) main_cset6_slider_pane_g15_ParamLimits

0x7682,	// (0x000805cf) main_cset6_slider_pane_g15

0x5f64,	// (0x0007eeb1) main_cset6_slider_pane_g16_ParamLimits

0x5f64,	// (0x0007eeb1) main_cset6_slider_pane_g16

0x5f70,	// (0x0007eebd) main_cset6_slider_pane_g17_ParamLimits

0x5f70,	// (0x0007eebd) main_cset6_slider_pane_g17

0x0011,

0xfa40,	// (0x0008898d) main_cset6_slider_pane_g_ParamLimits

0xfa40,	// (0x0008898d) main_cset6_slider_pane_g

0x76b2,	// (0x000805ff) main_cset6_slider_pane_t1_ParamLimits

0x76b2,	// (0x000805ff) main_cset6_slider_pane_t1

0x76f3,	// (0x00080640) main_cset6_slider_pane_t2_ParamLimits

0x76f3,	// (0x00080640) main_cset6_slider_pane_t2

0x771e,	// (0x0008066b) main_cset6_slider_pane_t3_ParamLimits

0x771e,	// (0x0008066b) main_cset6_slider_pane_t3

0x7749,	// (0x00080696) main_cset6_slider_pane_t4_ParamLimits

0x7749,	// (0x00080696) main_cset6_slider_pane_t4

0x7774,	// (0x000806c1) main_cset6_slider_pane_t5_ParamLimits

0x7774,	// (0x000806c1) main_cset6_slider_pane_t5

0x779f,	// (0x000806ec) main_cset6_slider_pane_t7_ParamLimits

0x779f,	// (0x000806ec) main_cset6_slider_pane_t7

0x77d5,	// (0x00080722) main_cset6_slider_pane_t8_ParamLimits

0x77d5,	// (0x00080722) main_cset6_slider_pane_t8

0x77f9,	// (0x00080746) main_cset6_slider_pane_t9_ParamLimits

0x77f9,	// (0x00080746) main_cset6_slider_pane_t9

0x781d,	// (0x0008076a) main_cset6_slider_pane_t10_ParamLimits

0x781d,	// (0x0008076a) main_cset6_slider_pane_t10

0x7841,	// (0x0008078e) main_cset6_slider_pane_t11_ParamLimits

0x7841,	// (0x0008078e) main_cset6_slider_pane_t11

0x7865,	// (0x000807b2) main_cset6_slider_pane_t14_ParamLimits

0x7865,	// (0x000807b2) main_cset6_slider_pane_t14

0x789e,	// (0x000807eb) main_cset6_slider_pane_t15_ParamLimits

0x789e,	// (0x000807eb) main_cset6_slider_pane_t15

0x000b,

0xfa65,	// (0x000889b2) main_cset6_slider_pane_t_ParamLimits

0xfa65,	// (0x000889b2) main_cset6_slider_pane_t

0x61cd,	// (0x0007f11a) cset_slider_pane_g1_copy1

0x61d6,	// (0x0007f123) cset_slider_pane_g2_copy1

0x61df,	// (0x0007f12c) cset_slider_pane_g3_copy1

0xa2ad,	// (0x000831fa) bg_popup_sub_pane_cp011_copy1

0x78d7,	// (0x00080824) main_cset_text_pane_g1_copy1

0x6692,	// (0x0007f5df) main_cset_text_pane_t1_copy1

0x66a0,	// (0x0007f5ed) main_cset_text_pane_t2_copy1

0x66ae,	// (0x0007f5fb) main_cset_text_pane_t3_copy1

0x66bc,	// (0x0007f609) main_cset_text_pane_t4_copy1

0x66ca,	// (0x0007f617) main_cset_text_pane_t5_copy1

0x78df,	// (0x0008082c) main_cset_text_pane_t6_copy1

0x78ed,	// (0x0008083a) main_cset_text_pane_t7_copy1

0x7513,	// (0x00080460) main_cset_text2_pane_t1_copy1

0xa324,	// (0x00083271) main_ncimui_pane

0x3c21,	// (0x0007cb6e) popup_query_ncimui_window_ParamLimits

0x3c21,	// (0x0007cb6e) popup_query_ncimui_window

0xb8f1,	// (0x0008483e) field_cale_ev2_pane_g4_ParamLimits

0xb8f1,	// (0x0008483e) field_cale_ev2_pane_g4

0x4e90,	// (0x0007dddd) cell_video_dialer_keypad_pane_g2_ParamLimits

0x4e90,	// (0x0007dddd) cell_video_dialer_keypad_pane_g2

0x0001,

0xf749,	// (0x00088696) cell_video_dialer_keypad_pane_g_ParamLimits

0xf749,	// (0x00088696) cell_video_dialer_keypad_pane_g

0x4ea8,	// (0x0007ddf5) cell_video_dialer_keypad_pane_t1

0xa2ad,	// (0x000831fa) bg_popup_window_pane_cp012

0xb44d,	// (0x0008439a) heading_pane_cp06

0x7a42,	// (0x0008098f) ncim_query_content_pane

0xa2ad,	// (0x000831fa) bg_popup_heading_pane_cp01

0x7a4a,	// (0x00080997) ncim_heading_pane_t1

0x7a58,	// (0x000809a5) ncim_indicator_popup_pane

0x7a6a,	// (0x000809b7) ncim_query_button_pane

0x7a8a,	// (0x000809d7) ncim_query_content_pane_t1

0x7a9c,	// (0x000809e9) ncim_query_content_pane_t2

0x0005,

0xfaa9,	// (0x000889f6) ncim_query_content_pane_t

0x7b4e,	// (0x00080a9b) ncim_query_list_pane

0x7b60,	// (0x00080aad) ncim_query_popup_pane

0x7a58,	// (0x000809a5) ncim_indicator_popup_pane_ParamLimits

0x7a72,	// (0x000809bf) ncim_query_content_pane_g1_ParamLimits

0x7a72,	// (0x000809bf) ncim_query_content_pane_g1

0x7a8a,	// (0x000809d7) ncim_query_content_pane_t1_ParamLimits

0x7a9c,	// (0x000809e9) ncim_query_content_pane_t2_ParamLimits

0x7aae,	// (0x000809fb) ncim_query_content_pane_t3_ParamLimits

0x7aae,	// (0x000809fb) ncim_query_content_pane_t3

0x7ad6,	// (0x00080a23) ncim_query_content_pane_t4_ParamLimits

0x7ad6,	// (0x00080a23) ncim_query_content_pane_t4

0x7afe,	// (0x00080a4b) ncim_query_content_pane_t5_ParamLimits

0x7afe,	// (0x00080a4b) ncim_query_content_pane_t5

0x7b26,	// (0x00080a73) ncim_query_content_pane_t6_ParamLimits

0x7b26,	// (0x00080a73) ncim_query_content_pane_t6

0xfaa9,	// (0x000889f6) ncim_query_content_pane_t_ParamLimits

0x7b4e,	// (0x00080a9b) ncim_query_list_pane_ParamLimits

0x7b60,	// (0x00080aad) ncim_query_popup_pane_ParamLimits

0x7b74,	// (0x00080ac1) wait_bar_pane_cp04

0xa2ad,	// (0x000831fa) input_focus_pane_cp011

0x7b7c,	// (0x00080ac9) ncim_query_popup_pane_t1

0x7b8a,	// (0x00080ad7) ncim_list_query_list_pane_ParamLimits

0x7b8a,	// (0x00080ad7) ncim_list_query_list_pane

0xa2ad,	// (0x000831fa) bg_button_pane_cp027

0x7b97,	// (0x00080ae4) ncim_query_button_pane_g1

0xa2ad,	// (0x000831fa) list_highlight_pane_cp012

0x7ba1,	// (0x00080aee) ncim_list_query_list_pane_g1

0x7ba9,	// (0x00080af6) ncim_list_query_list_pane_t1

0xbcc8,	// (0x00084c15) cam4_indicators_pane_g3_ParamLimits

0xbcc8,	// (0x00084c15) cam4_indicators_pane_g3

0xbd48,	// (0x00084c95) vid4_indicators_pane_g5_ParamLimits

0xbd48,	// (0x00084c95) vid4_indicators_pane_g5

0xd637,	// (0x00086584) vid4_progress_pane_g5_ParamLimits

0xd637,	// (0x00086584) vid4_progress_pane_g5

0x792d,	// (0x0008087a) main_ncimui_pane_g1

0x7996,	// (0x000808e3) ncimui_group_query_pane_ParamLimits

0x7996,	// (0x000808e3) ncimui_group_query_pane

0x79de,	// (0x0008092b) ncimui_list_pane_ParamLimits

0x79de,	// (0x0008092b) ncimui_list_pane

0x7a05,	// (0x00080952) ncimui_text_pane_ParamLimits

0x7a05,	// (0x00080952) ncimui_text_pane

0x7bb7,	// (0x00080b04) ncimui_text_pane_t1_ParamLimits

0x7bb7,	// (0x00080b04) ncimui_text_pane_t1

0x7bd5,	// (0x00080b22) ncimui_list_single_graphic_pane_ParamLimits

0x7bd5,	// (0x00080b22) ncimui_list_single_graphic_pane

0x7be5,	// (0x00080b32) ncimui_query_pane_ParamLimits

0x7be5,	// (0x00080b32) ncimui_query_pane

0xa2ad,	// (0x000831fa) list_highlight_pane_cp013

0x7bf8,	// (0x00080b45) ncim_list_query_list_pane_t1_copy1

0x7ba1,	// (0x00080aee) ncim_list_single_graphic_pane_g1

0x7c06,	// (0x00080b53) ncim_query_button_pane_cp01

0x7c12,	// (0x00080b5f) ncim_query_entry_pane_ParamLimits

0x7c12,	// (0x00080b5f) ncim_query_entry_pane

0x7c25,	// (0x00080b72) ncimui_query_pane_g1

0x7c31,	// (0x00080b7e) ncimui_query_pane_t1_ParamLimits

0x7c31,	// (0x00080b7e) ncimui_query_pane_t1

0xa324,	// (0x00083271) input_focus_pane_cp012

0x7c4a,	// (0x00080b97) ncim_query_entry_pane_t1

0xaad9,	// (0x00083a26) main_im_pane_ParamLimits

0xa324,	// (0x00083271) main_mobtv_pane_ParamLimits

0xa324,	// (0x00083271) main_mobtv_pane

0x769a,	// (0x000805e7) main_cset6_slider_pane_g18_ParamLimits

0x769a,	// (0x000805e7) main_cset6_slider_pane_g18

0x76a6,	// (0x000805f3) main_cset6_slider_pane_g19_ParamLimits

0x76a6,	// (0x000805f3) main_cset6_slider_pane_g19

0xaa37,	// (0x00083984) bg_main_mobtv_pane_ParamLimits

0xaa37,	// (0x00083984) bg_main_mobtv_pane

0x7c5c,	// (0x00080ba9) main_mobtv_info_pane

0x7c65,	// (0x00080bb2) main_mobtv_loading_pane_ParamLimits

0x7c65,	// (0x00080bb2) main_mobtv_loading_pane

0x7c72,	// (0x00080bbf) main_mobtv_pg_channel_list_pane

0x7c7c,	// (0x00080bc9) main_mobtv_pg_hdr_pane

0x7c85,	// (0x00080bd2) main_mobtv_programe_curr_pane_ParamLimits

0x7c85,	// (0x00080bd2) main_mobtv_programe_curr_pane

0x7c92,	// (0x00080bdf) main_mobtv_programe_next_pane_ParamLimits

0x7c92,	// (0x00080bdf) main_mobtv_programe_next_pane

0x7c9f,	// (0x00080bec) popup_mobtv_noti_window

0xaa61,	// (0x000839ae) main_tv_pg_hdr_pane_g1

0x7ca7,	// (0x00080bf4) main_tv_pg_hdr_pane_g2

0x7caf,	// (0x00080bfc) main_tv_pg_hdr_pane_g3

0x7cb7,	// (0x00080c04) main_tv_pg_hdr_pane_g4

0x7cbf,	// (0x00080c0c) main_tv_pg_hdr_pane_g5

0x7cc9,	// (0x00080c16) main_tv_pg_hdr_pane_g6

0x7cd3,	// (0x00080c20) main_tv_pg_hdr_pane_g7

0x7cdd,	// (0x00080c2a) main_tv_pg_hdr_pane_g8

0x7ce7,	// (0x00080c34) main_tv_pg_hdr_pane_g9

0x7cf1,	// (0x00080c3e) main_tv_pg_hdr_pane_g10

0x7cfb,	// (0x00080c48) main_tv_pg_hdr_pane_g11

0x000a,

0xfab6,	// (0x00088a03) main_tv_pg_hdr_pane_g

0x7d05,	// (0x00080c52) main_tv_pg_hdr_pane_t1

0x7d13,	// (0x00080c60) main_tv_pg_hdr_pane_t2

0x7d21,	// (0x00080c6e) main_tv_pg_hdr_pane_t3

0x7d31,	// (0x00080c7e) main_tv_pg_hdr_pane_t4

0x7d41,	// (0x00080c8e) main_tv_pg_hdr_pane_t5

0x0004,

0xfacd,	// (0x00088a1a) main_tv_pg_hdr_pane_t

0x7d51,	// (0x00080c9e) single_mobtv_pg_channel_pane_ParamLimits

0x7d51,	// (0x00080c9e) single_mobtv_pg_channel_pane

0x7d63,	// (0x00080cb0) single_mobtv_pg_channel_table_pane

0x7d6c,	// (0x00080cb9) single_mobtv_pg_channel_thumb_pane

0x7d75,	// (0x00080cc2) single_tv_pg_channel_pane_g1

0x7d7e,	// (0x00080ccb) single_tv_pg_channel_pane_g2

0x0001,

0xfad8,	// (0x00088a25) single_tv_pg_channel_pane_g

0xaa1b,	// (0x00083968) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xaa1b,	// (0x00083968) bg_single_mobtv_pg_channel_thumb_pane

0x7d87,	// (0x00080cd4) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x7d87,	// (0x00080cd4) single_mobtv_pg_channel_thumb_pane_g1

0x7d95,	// (0x00080ce2) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x7d95,	// (0x00080ce2) single_mobtv_pg_channel_thumb_pane_g2

0x7da1,	// (0x00080cee) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x7da1,	// (0x00080cee) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfadd,	// (0x00088a2a) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfadd,	// (0x00088a2a) single_mobtv_pg_channel_thumb_pane_g

0x7dad,	// (0x00080cfa) single_mobtv_pg_channel_thumb_pane_t1

0x7dbb,	// (0x00080d08) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfae4,	// (0x00088a31) single_mobtv_pg_channel_thumb_pane_t

0xaa61,	// (0x000839ae) bg_single_mobtv_pg_channel_table_pane_g1

0xaa61,	// (0x000839ae) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf08c,	// (0x00087fd9) bg_single_mobtv_pg_channel_table_pane_g

0x7dc9,	// (0x00080d16) single_mobtv_pg_channel_table_pane_t1

0x7dd7,	// (0x00080d24) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfae9,	// (0x00088a36) single_mobtv_pg_channel_table_pane_t

0x7ded,	// (0x00080d3a) main_mobtv_info_pane_g1_ParamLimits

0x7ded,	// (0x00080d3a) main_mobtv_info_pane_g1

0x7e0b,	// (0x00080d58) main_mobtv_info_pane_t1_ParamLimits

0x7e0b,	// (0x00080d58) main_mobtv_info_pane_t1

0x7e83,	// (0x00080dd0) main_mobtv_info_pane_t2_ParamLimits

0x7e83,	// (0x00080dd0) main_mobtv_info_pane_t2

0x0002,

0xfaf3,	// (0x00088a40) main_mobtv_info_pane_t_ParamLimits

0xfaf3,	// (0x00088a40) main_mobtv_info_pane_t

0x7f12,	// (0x00080e5f) wait_bar_pane_cp05

0x7f24,	// (0x00080e71) main_mobtv_loading_pane_g1_ParamLimits

0x7f24,	// (0x00080e71) main_mobtv_loading_pane_g1

0x7f37,	// (0x00080e84) main_mobtv_loading_pane_g2_ParamLimits

0x7f37,	// (0x00080e84) main_mobtv_loading_pane_g2

0x7f43,	// (0x00080e90) main_mobtv_loading_pane_g3_ParamLimits

0x7f43,	// (0x00080e90) main_mobtv_loading_pane_g3

0x0002,

0xfafa,	// (0x00088a47) main_mobtv_loading_pane_g_ParamLimits

0xfafa,	// (0x00088a47) main_mobtv_loading_pane_g

0x7f56,	// (0x00080ea3) main_mobtv_loading_pane_t1_ParamLimits

0x7f56,	// (0x00080ea3) main_mobtv_loading_pane_t1

0x7f6e,	// (0x00080ebb) main_mobtv_loading_pane_t2_ParamLimits

0x7f6e,	// (0x00080ebb) main_mobtv_loading_pane_t2

0x0001,

0xfb01,	// (0x00088a4e) main_mobtv_loading_pane_t_ParamLimits

0xfb01,	// (0x00088a4e) main_mobtv_loading_pane_t

0x7f92,	// (0x00080edf) wait_bar_pane_cp06_ParamLimits

0x7f92,	// (0x00080edf) wait_bar_pane_cp06

0x7fa1,	// (0x00080eee) main_mobtv_programe_curr_pane_t1

0x7faf,	// (0x00080efc) main_mobtv_programe_curr_pane_t2

0x0001,

0xfb06,	// (0x00088a53) main_mobtv_programe_curr_pane_t

0x7fbd,	// (0x00080f0a) main_mobtv_programe_next_pane_t1

0x7fcb,	// (0x00080f18) main_mobtv_programe_next_pane_t2

0x7fd9,	// (0x00080f26) main_mobtv_programe_next_pane_t3

0x0002,

0xfb0b,	// (0x00088a58) main_mobtv_programe_next_pane_t

0xa2ad,	// (0x000831fa) bg_popup_mobtv_noti_window_pane

0x7fe7,	// (0x00080f34) popup_mobtv_noti_window_g1

0x7fef,	// (0x00080f3c) popup_mobtv_noti_window_t1

0x7ffd,	// (0x00080f4a) popup_mobtv_noti_window_t2

0x0001,

0xfb12,	// (0x00088a5f) popup_mobtv_noti_window_t

0xaa61,	// (0x000839ae) bg_popup_mobtv_noti_window_pane_g1

0xa2ad,	// (0x000831fa) sc_clock_pane

0xa2ad,	// (0x000831fa) main_fs_bigclock_pane

0x6fe9,	// (0x0007ff36) blid2_tripm_pane_t4_ParamLimits

0x6fe9,	// (0x0007ff36) blid2_tripm_pane_t4

0xaa1b,	// (0x00083968) sc_clock_pane_g1_ParamLimits

0xaa1b,	// (0x00083968) sc_clock_pane_g1

0xaa6b,	// (0x000839b8) sc_clock_pane_t1_ParamLimits

0xaa6b,	// (0x000839b8) sc_clock_pane_t1

0xaa6b,	// (0x000839b8) sc_clock_pane_t2_ParamLimits

0xaa6b,	// (0x000839b8) sc_clock_pane_t2

0xaa6b,	// (0x000839b8) sc_clock_pane_t3_ParamLimits

0xaa6b,	// (0x000839b8) sc_clock_pane_t3

0x0004,

0xfb17,	// (0x00088a64) sc_clock_pane_t_ParamLimits

0xfb17,	// (0x00088a64) sc_clock_pane_t

0x89c7,	// (0x00081914) main_fs_bigclock_indicator_pane_ParamLimits

0x89c7,	// (0x00081914) main_fs_bigclock_indicator_pane

0x805a,	// (0x00080fa7) main_fs_bigclock_pane_g1_ParamLimits

0x805a,	// (0x00080fa7) main_fs_bigclock_pane_g1

0x89d3,	// (0x00081920) main_fs_bigclock_pane_t1_ParamLimits

0x89d3,	// (0x00081920) main_fs_bigclock_pane_t1

0x89e5,	// (0x00081932) main_fs_bigclock_pane_t2_ParamLimits

0x89e5,	// (0x00081932) main_fs_bigclock_pane_t2

0x89f9,	// (0x00081946) main_fs_bigclock_pane_t3_ParamLimits

0x89f9,	// (0x00081946) main_fs_bigclock_pane_t3

0x0002,

0xfc95,	// (0x00088be2) main_fs_bigclock_pane_t_ParamLimits

0xfc95,	// (0x00088be2) main_fs_bigclock_pane_t

0xc73c,	// (0x00085689) main_fs_bigclock_indicator_pane_g1

0x7a7e,	// (0x000809cb) ncim_query_content_pane_g2_ParamLimits

0x7a7e,	// (0x000809cb) ncim_query_content_pane_g2

0x0001,

0xfaa4,	// (0x000889f1) ncim_query_content_pane_g_ParamLimits

0xfaa4,	// (0x000889f1) ncim_query_content_pane_g

0xaa6b,	// (0x000839b8) sc_clock_pane_t4_ParamLimits

0xaa6b,	// (0x000839b8) sc_clock_pane_t4

0xa324,	// (0x00083271) main_radioblah_pane

0xbc40,	// (0x00084b8d) cell_call4_button_pane_t1_copy1_ParamLimits

0xbc40,	// (0x00084b8d) cell_call4_button_pane_t1_copy1

0x7945,	// (0x00080892) main_ncimui_pane_t1_ParamLimits

0x7945,	// (0x00080892) main_ncimui_pane_t1

0x795f,	// (0x000808ac) main_ncimui_pane_t2_ParamLimits

0x795f,	// (0x000808ac) main_ncimui_pane_t2

0x0002,

0xfa9d,	// (0x000889ea) main_ncimui_pane_t_ParamLimits

0xfa9d,	// (0x000889ea) main_ncimui_pane_t

0xd242,	// (0x0008618f) main_radioblah_anim_pane_ParamLimits

0xd242,	// (0x0008618f) main_radioblah_anim_pane

0xd242,	// (0x0008618f) main_radioblah_info_pane_ParamLimits

0xd242,	// (0x0008618f) main_radioblah_info_pane

0xe0dd,	// (0x0008702a) main_radioblah_pane_t1_ParamLimits

0xe0dd,	// (0x0008702a) main_radioblah_pane_t1

0xe0dd,	// (0x0008702a) main_radioblah_pane_t2_ParamLimits

0xe0dd,	// (0x0008702a) main_radioblah_pane_t2

0x0003,

0xfb38,	// (0x00088a85) main_radioblah_pane_t_ParamLimits

0xfb38,	// (0x00088a85) main_radioblah_pane_t

0xa324,	// (0x00083271) main_radioblah_rocker_ctrl_pane_ParamLimits

0xa324,	// (0x00083271) main_radioblah_rocker_ctrl_pane

0x3e95,	// (0x0007cde2) main_radioblah_info_pane_t1_ParamLimits

0x3e95,	// (0x0007cde2) main_radioblah_info_pane_t1

0x820e,	// (0x0008115b) main_radioblah_info_pane_t2_ParamLimits

0x820e,	// (0x0008115b) main_radioblah_info_pane_t2

0x0003,

0xfb41,	// (0x00088a8e) main_radioblah_info_pane_t_ParamLimits

0xfb41,	// (0x00088a8e) main_radioblah_info_pane_t

0xaa61,	// (0x000839ae) main_radioblah_rocker_ctrl_pane_g1

0xaa61,	// (0x000839ae) main_radioblah_rocker_ctrl_pane_g2

0xaa61,	// (0x000839ae) main_radioblah_rocker_ctrl_pane_g3

0xaa61,	// (0x000839ae) main_radioblah_rocker_ctrl_pane_g4

0xaa61,	// (0x000839ae) main_radioblah_rocker_ctrl_pane_g5

0xaa61,	// (0x000839ae) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfb4a,	// (0x00088a97) main_radioblah_rocker_ctrl_pane_g

0x7513,	// (0x00080460) main_cset_text2_pane_t1_copy1_ParamLimits

0xbc86,	// (0x00084bd3) cam4_image_uncrop_qvga_pane

0xbcf1,	// (0x00084c3e) vid4_image_uncrop_qcif_pane

0xd675,	// (0x000865c2) cam6_image_uncrop_qvga_pane_ParamLimits

0xd675,	// (0x000865c2) cam6_image_uncrop_qvga_pane

0x73c0,	// (0x0008030d) vid6_image_uncrop_qcif_pane_ParamLimits

0x73c0,	// (0x0008030d) vid6_image_uncrop_qcif_pane

0xa2ad,	// (0x000831fa) bg_popup_preview_window_pane_cp03

0x78fb,	// (0x00080848) list_cset_text2_pane

0x7903,	// (0x00080850) main_cset6_text2_pane_g1

0x790b,	// (0x00080858) main_cset6_text2_pane_t1

0x825d,	// (0x000811aa) list_cset_text2_pane_t1_ParamLimits

0x825d,	// (0x000811aa) list_cset_text2_pane_t1

0xa324,	// (0x00083271) main_radioblah_pane_ParamLimits

0x7efe,	// (0x00080e4b) main_mobtv_info_pane_t3_ParamLimits

0x7efe,	// (0x00080e4b) main_mobtv_info_pane_t3

0xdbef,	// (0x00086b3c) main_radioblah_pane_g1

0x81de,	// (0x0008112b) main_radioblah_info_pane_g1

0xaa7f,	// (0x000839cc) main_radioblah_info_pane_t3_ParamLimits

0xaa7f,	// (0x000839cc) main_radioblah_info_pane_t3

0x2ab9,	// (0x0007ba06) highlight_cell_cale_month_pane_ParamLimits

0x2ab9,	// (0x0007ba06) highlight_cell_cale_month_pane

0xa2ad,	// (0x000831fa) main_phob_fisheye_pane

0xec25,	// (0x00087b72) scroll_pane_cp0031_ParamLimits

0xec25,	// (0x00087b72) scroll_pane_cp0031

0x7504,	// (0x00080451) wait_bar_pane_cp08_ParamLimits

0x75b9,	// (0x00080506) cset_list_set_pane_copy1_ParamLimits

0x8276,	// (0x000811c3) highlight_cell_cale_month_pane_g1

0x827e,	// (0x000811cb) highlight_cell_cale_month_pane_t1

0x6bf3,	// (0x0007fb40) list_gen_pane_cp01

0x5e3f,	// (0x0007ed8c) scroll_pane_01

0x828c,	// (0x000811d9) list_single_double_fisheye_pane

0x8295,	// (0x000811e2) list_double_fisheye_pane_g1_ParamLimits

0x8295,	// (0x000811e2) list_double_fisheye_pane_g1

0x82a1,	// (0x000811ee) list_double_fisheye_pane_g2_ParamLimits

0x82a1,	// (0x000811ee) list_double_fisheye_pane_g2

0x82b5,	// (0x00081202) list_double_fisheye_pane_g3_ParamLimits

0x82b5,	// (0x00081202) list_double_fisheye_pane_g3

0x0004,

0xfb57,	// (0x00088aa4) list_double_fisheye_pane_g_ParamLimits

0xfb57,	// (0x00088aa4) list_double_fisheye_pane_g

0x82de,	// (0x0008122b) list_double_fisheye_pane_t1_ParamLimits

0x82de,	// (0x0008122b) list_double_fisheye_pane_t1

0x82f9,	// (0x00081246) list_double_fisheye_pane_t2_ParamLimits

0x82f9,	// (0x00081246) list_double_fisheye_pane_t2

0x0001,

0xfb62,	// (0x00088aaf) list_double_fisheye_pane_t_ParamLimits

0xfb62,	// (0x00088aaf) list_double_fisheye_pane_t

0xa2ad,	// (0x000831fa) main_call5_pane

0xa324,	// (0x00083271) sc_swipe_pane_ParamLimits

0xa324,	// (0x00083271) sc_swipe_pane

0x832e,	// (0x0008127b) call5_image_pane_ParamLimits

0x832e,	// (0x0008127b) call5_image_pane

0x834b,	// (0x00081298) call5_swipe_1_pane_ParamLimits

0x834b,	// (0x00081298) call5_swipe_1_pane

0x835e,	// (0x000812ab) call5_swipe_2_pane_ParamLimits

0x835e,	// (0x000812ab) call5_swipe_2_pane

0x8389,	// (0x000812d6) popup_call5_audio_first_window_ParamLimits

0x8389,	// (0x000812d6) popup_call5_audio_first_window

0xaa1b,	// (0x00083968) call5_swipe_1_pane_g1_ParamLimits

0xaa1b,	// (0x00083968) call5_swipe_1_pane_g1

0x839a,	// (0x000812e7) call5_swipe_1_pane_g2_ParamLimits

0x839a,	// (0x000812e7) call5_swipe_1_pane_g2

0x0001,

0xfb67,	// (0x00088ab4) call5_swipe_1_pane_g_ParamLimits

0xfb67,	// (0x00088ab4) call5_swipe_1_pane_g

0x83a6,	// (0x000812f3) call5_swipe_1_pane_t1_ParamLimits

0x83a6,	// (0x000812f3) call5_swipe_1_pane_t1

0xaa1b,	// (0x00083968) call5_swipe_2_pane_g1_ParamLimits

0xaa1b,	// (0x00083968) call5_swipe_2_pane_g1

0x83bb,	// (0x00081308) call5_swipe_2_pane_g2_ParamLimits

0x83bb,	// (0x00081308) call5_swipe_2_pane_g2

0x0001,

0xfb6c,	// (0x00088ab9) call5_swipe_2_pane_g_ParamLimits

0xfb6c,	// (0x00088ab9) call5_swipe_2_pane_g

0x83c7,	// (0x00081314) call5_swipe_2_pane_t1_ParamLimits

0x83c7,	// (0x00081314) call5_swipe_2_pane_t1

0xaa1b,	// (0x00083968) sc_swipe_pane_g1_ParamLimits

0xaa1b,	// (0x00083968) sc_swipe_pane_g1

0xaa29,	// (0x00083976) sc_swipe_pane_g2_ParamLimits

0xaa29,	// (0x00083976) sc_swipe_pane_g2

0x0001,

0xf700,	// (0x0008864d) sc_swipe_pane_g_ParamLimits

0xf700,	// (0x0008864d) sc_swipe_pane_g

0xaa6b,	// (0x000839b8) sc_swipe_pane_t1_ParamLimits

0xaa6b,	// (0x000839b8) sc_swipe_pane_t1

0xa2ad,	// (0x000831fa) main_cmail_launcher_pane

0x83dc,	// (0x00081329) aid_size_cell_cmail_l_ParamLimits

0x83dc,	// (0x00081329) aid_size_cell_cmail_l

0x83ea,	// (0x00081337) grid_cmail_l_pane_ParamLimits

0x83ea,	// (0x00081337) grid_cmail_l_pane

0x8404,	// (0x00081351) cell_cmail_l_pane_ParamLimits

0x8404,	// (0x00081351) cell_cmail_l_pane

0xbe17,	// (0x00084d64) cell_cmail_l_pane_g1_ParamLimits

0xbe17,	// (0x00084d64) cell_cmail_l_pane_g1

0xbe23,	// (0x00084d70) cell_cmail_l_pane_t1_ParamLimits

0xbe23,	// (0x00084d70) cell_cmail_l_pane_t1

0xbe39,	// (0x00084d86) cell_cmail_l_pane_t2_ParamLimits

0xbe39,	// (0x00084d86) cell_cmail_l_pane_t2

0x0001,

0xfb71,	// (0x00088abe) cell_cmail_l_pane_t_ParamLimits

0xfb71,	// (0x00088abe) cell_cmail_l_pane_t

0xa324,	// (0x00083271) grid_highlight_pane_cp018_ParamLimits

0xa324,	// (0x00083271) grid_highlight_pane_cp018

0x1016,	// (0x00079f63) main2_pane_ParamLimits

0x1016,	// (0x00079f63) main2_pane

0xab95,	// (0x00083ae2) popup_sp_fs_action_menu_bg_pane_g1

0xab9d,	// (0x00083aea) popup_sp_fs_action_menu_bg_pane_g2

0xaba5,	// (0x00083af2) popup_sp_fs_action_menu_bg_pane_g3

0xabad,	// (0x00083afa) popup_sp_fs_action_menu_bg_pane_g4

0xabb5,	// (0x00083b02) popup_sp_fs_action_menu_bg_pane_g5

0xabbd,	// (0x00083b0a) popup_sp_fs_action_menu_bg_pane_g6

0xabc5,	// (0x00083b12) popup_sp_fs_action_menu_bg_pane_g7

0xabcd,	// (0x00083b1a) popup_sp_fs_action_menu_bg_pane_g8

0xabd5,	// (0x00083b22) popup_sp_fs_action_menu_bg_pane_g9

0xabdd,	// (0x00083b2a) popup_sp_fs_action_menu_bg_pane_g10

0xabdd,	// (0x00083b2a) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf0dd,	// (0x0008802a) popup_sp_fs_action_menu_bg_pane_g

0xaa1b,	// (0x00083968) list_medium_line_x2_t3_g3_g1_ParamLimits

0xaa1b,	// (0x00083968) list_medium_line_x2_t3_g3_g1

0xaa1b,	// (0x00083968) list_medium_line_x2_t3_g3_g2_ParamLimits

0xaa1b,	// (0x00083968) list_medium_line_x2_t3_g3_g2

0xaa1b,	// (0x00083968) list_medium_line_x2_t3_g3_g3_ParamLimits

0xaa1b,	// (0x00083968) list_medium_line_x2_t3_g3_g3

0x0002,

0xf18b,	// (0x000880d8) list_medium_line_x2_t3_g3_g_ParamLimits

0xf18b,	// (0x000880d8) list_medium_line_x2_t3_g3_g

0xaa6b,	// (0x000839b8) list_medium_line_x2_t3_g3_t1_ParamLimits

0xaa6b,	// (0x000839b8) list_medium_line_x2_t3_g3_t1

0xaa6b,	// (0x000839b8) list_medium_line_x2_t3_g3_t2_ParamLimits

0xaa6b,	// (0x000839b8) list_medium_line_x2_t3_g3_t2

0xaa6b,	// (0x000839b8) list_medium_line_x2_t3_g3_t3_ParamLimits

0xaa6b,	// (0x000839b8) list_medium_line_x2_t3_g3_t3

0x0002,

0xf192,	// (0x000880df) list_medium_line_x2_t3_g3_t_ParamLimits

0xf192,	// (0x000880df) list_medium_line_x2_t3_g3_t

0xaa1b,	// (0x00083968) list_medium_line_x2_t3_g2_g1_ParamLimits

0xaa1b,	// (0x00083968) list_medium_line_x2_t3_g2_g1

0xaa1b,	// (0x00083968) list_medium_line_x2_t3_g2_g2_ParamLimits

0xaa1b,	// (0x00083968) list_medium_line_x2_t3_g2_g2

0x0001,

0xf199,	// (0x000880e6) list_medium_line_x2_t3_g2_g_ParamLimits

0xf199,	// (0x000880e6) list_medium_line_x2_t3_g2_g

0xaa6b,	// (0x000839b8) list_medium_line_x2_t3_g2_t1_ParamLimits

0xaa6b,	// (0x000839b8) list_medium_line_x2_t3_g2_t1

0xaa6b,	// (0x000839b8) list_medium_line_x2_t3_g2_t2_ParamLimits

0xaa6b,	// (0x000839b8) list_medium_line_x2_t3_g2_t2

0xaa6b,	// (0x000839b8) list_medium_line_x2_t3_g2_t3_ParamLimits

0xaa6b,	// (0x000839b8) list_medium_line_x2_t3_g2_t3

0x0002,

0xf192,	// (0x000880df) list_medium_line_x2_t3_g2_t_ParamLimits

0xf192,	// (0x000880df) list_medium_line_x2_t3_g2_t

0xaa1b,	// (0x00083968) list_medium_line_x2_t4_g4_g1_ParamLimits

0xaa1b,	// (0x00083968) list_medium_line_x2_t4_g4_g1

0xaa1b,	// (0x00083968) list_medium_line_x2_t4_g4_g2_ParamLimits

0xaa1b,	// (0x00083968) list_medium_line_x2_t4_g4_g2

0xaa1b,	// (0x00083968) list_medium_line_x2_t4_g4_g3_ParamLimits

0xaa1b,	// (0x00083968) list_medium_line_x2_t4_g4_g3

0xaa1b,	// (0x00083968) list_medium_line_x2_t4_g4_g4_ParamLimits

0xaa1b,	// (0x00083968) list_medium_line_x2_t4_g4_g4

0x0003,

0xf19e,	// (0x000880eb) list_medium_line_x2_t4_g4_g_ParamLimits

0xf19e,	// (0x000880eb) list_medium_line_x2_t4_g4_g

0xaa6b,	// (0x000839b8) list_medium_line_x2_t4_g4_t1_ParamLimits

0xaa6b,	// (0x000839b8) list_medium_line_x2_t4_g4_t1

0xaa6b,	// (0x000839b8) list_medium_line_x2_t4_g4_t2_ParamLimits

0xaa6b,	// (0x000839b8) list_medium_line_x2_t4_g4_t2

0xaa6b,	// (0x000839b8) list_medium_line_x2_t4_g4_t3_ParamLimits

0xaa6b,	// (0x000839b8) list_medium_line_x2_t4_g4_t3

0xaa6b,	// (0x000839b8) list_medium_line_x2_t4_g4_t4_ParamLimits

0xaa6b,	// (0x000839b8) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1a7,	// (0x000880f4) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1a7,	// (0x000880f4) list_medium_line_x2_t4_g4_t

0xaa1b,	// (0x00083968) list_medium_line_x2_t2_g4_g1_ParamLimits

0xaa1b,	// (0x00083968) list_medium_line_x2_t2_g4_g1

0xaa1b,	// (0x00083968) list_medium_line_x2_t2_g4_g2_ParamLimits

0xaa1b,	// (0x00083968) list_medium_line_x2_t2_g4_g2

0xaa1b,	// (0x00083968) list_medium_line_x2_t2_g4_g3_ParamLimits

0xaa1b,	// (0x00083968) list_medium_line_x2_t2_g4_g3

0xaa1b,	// (0x00083968) list_medium_line_x2_t2_g4_g4_ParamLimits

0xaa1b,	// (0x00083968) list_medium_line_x2_t2_g4_g4

0x0003,

0xf19e,	// (0x000880eb) list_medium_line_x2_t2_g4_g_ParamLimits

0xf19e,	// (0x000880eb) list_medium_line_x2_t2_g4_g

0xaa6b,	// (0x000839b8) list_medium_line_x2_t2_g4_t1_ParamLimits

0xaa6b,	// (0x000839b8) list_medium_line_x2_t2_g4_t1

0xaa6b,	// (0x000839b8) list_medium_line_x2_t2_g4_t2_ParamLimits

0xaa6b,	// (0x000839b8) list_medium_line_x2_t2_g4_t2

0x0001,

0xf16e,	// (0x000880bb) list_medium_line_x2_t2_g4_t_ParamLimits

0xf16e,	// (0x000880bb) list_medium_line_x2_t2_g4_t

0xaa1b,	// (0x00083968) list_medium_line_x2_t2_g3_g1_ParamLimits

0xaa1b,	// (0x00083968) list_medium_line_x2_t2_g3_g1

0xaa1b,	// (0x00083968) list_medium_line_x2_t2_g3_g2_ParamLimits

0xaa1b,	// (0x00083968) list_medium_line_x2_t2_g3_g2

0xaa1b,	// (0x00083968) list_medium_line_x2_t2_g3_g3_ParamLimits

0xaa1b,	// (0x00083968) list_medium_line_x2_t2_g3_g3

0x0002,

0xf18b,	// (0x000880d8) list_medium_line_x2_t2_g3_g_ParamLimits

0xf18b,	// (0x000880d8) list_medium_line_x2_t2_g3_g

0xaa6b,	// (0x000839b8) list_medium_line_x2_t2_g3_t1_ParamLimits

0xaa6b,	// (0x000839b8) list_medium_line_x2_t2_g3_t1

0xaa6b,	// (0x000839b8) list_medium_line_x2_t2_g3_t2_ParamLimits

0xaa6b,	// (0x000839b8) list_medium_line_x2_t2_g3_t2

0x0001,

0xf16e,	// (0x000880bb) list_medium_line_x2_t2_g3_t_ParamLimits

0xf16e,	// (0x000880bb) list_medium_line_x2_t2_g3_t

0x2c0b,	// (0x0007bb58) main_sp_fs_list_pane_ParamLimits

0x2c0b,	// (0x0007bb58) main_sp_fs_list_pane

0xe0d1,	// (0x0008701e) sp_fs_scroll_pane_ParamLimits

0xe0d1,	// (0x0008701e) sp_fs_scroll_pane

0xb253,	// (0x000841a0) list_medium_line_x2_t3_t1

0xb253,	// (0x000841a0) list_medium_line_x2_t3_t2

0xb253,	// (0x000841a0) list_medium_line_x2_t3_t3

0x0002,

0xf254,	// (0x000881a1) list_medium_line_x2_t3_t

0xb253,	// (0x000841a0) list_medium_line_x3_t4_t1

0xb253,	// (0x000841a0) list_medium_line_x3_t4_t2

0xb253,	// (0x000841a0) list_medium_line_x3_t4_t3

0xb253,	// (0x000841a0) list_medium_line_x3_t4_t4

0x0003,

0xf25b,	// (0x000881a8) list_medium_line_x3_t4_t

0xb253,	// (0x000841a0) list_medium_line_x4_t5_t1

0xb253,	// (0x000841a0) list_medium_line_x4_t5_t2

0xb253,	// (0x000841a0) list_medium_line_x4_t5_t3

0xb253,	// (0x000841a0) list_medium_line_x4_t5_t4

0xb253,	// (0x000841a0) list_medium_line_x4_t5_t5

0x0004,

0xf264,	// (0x000881b1) list_medium_line_x4_t5_t

0xaa1b,	// (0x00083968) list_medium_line_t4_g4_g1_ParamLimits

0xaa1b,	// (0x00083968) list_medium_line_t4_g4_g1

0xaa1b,	// (0x00083968) list_medium_line_t4_g4_g2_ParamLimits

0xaa1b,	// (0x00083968) list_medium_line_t4_g4_g2

0xaa1b,	// (0x00083968) list_medium_line_t4_g4_g3_ParamLimits

0xaa1b,	// (0x00083968) list_medium_line_t4_g4_g3

0xaa1b,	// (0x00083968) list_medium_line_t4_g4_g4_ParamLimits

0xaa1b,	// (0x00083968) list_medium_line_t4_g4_g4

0x0003,

0xf19e,	// (0x000880eb) list_medium_line_t4_g4_g_ParamLimits

0xf19e,	// (0x000880eb) list_medium_line_t4_g4_g

0xaa6b,	// (0x000839b8) list_medium_line_t4_g4_t1_ParamLimits

0xaa6b,	// (0x000839b8) list_medium_line_t4_g4_t1

0xaa6b,	// (0x000839b8) list_medium_line_t4_g4_t2_ParamLimits

0xaa6b,	// (0x000839b8) list_medium_line_t4_g4_t2

0xaa6b,	// (0x000839b8) list_medium_line_t4_g4_t3_ParamLimits

0xaa6b,	// (0x000839b8) list_medium_line_t4_g4_t3

0xaa6b,	// (0x000839b8) list_medium_line_t4_g4_t4_ParamLimits

0xaa6b,	// (0x000839b8) list_medium_line_t4_g4_t4

0x0003,

0xf1a7,	// (0x000880f4) list_medium_line_t4_g4_t_ParamLimits

0xf1a7,	// (0x000880f4) list_medium_line_t4_g4_t

0x2ca6,	// (0x0007bbf3) chi_dic_find_pane_g1

0x39eb,	// (0x0007c938) main_tport_pane

0xb253,	// (0x000841a0) list_medium_line_plain_t1

0xaa1b,	// (0x00083968) list_medium_line_t2_g2_g1_ParamLimits

0xaa1b,	// (0x00083968) list_medium_line_t2_g2_g1

0xaa1b,	// (0x00083968) list_medium_line_t2_g2_g2_ParamLimits

0xaa1b,	// (0x00083968) list_medium_line_t2_g2_g2

0x0001,

0xf199,	// (0x000880e6) list_medium_line_t2_g2_g_ParamLimits

0xf199,	// (0x000880e6) list_medium_line_t2_g2_g

0xaa6b,	// (0x000839b8) list_medium_line_t2_g2_t1_ParamLimits

0xaa6b,	// (0x000839b8) list_medium_line_t2_g2_t1

0xaa6b,	// (0x000839b8) list_medium_line_t2_g2_t2_ParamLimits

0xaa6b,	// (0x000839b8) list_medium_line_t2_g2_t2

0x0001,

0xf16e,	// (0x000880bb) list_medium_line_t2_g2_t_ParamLimits

0xf16e,	// (0x000880bb) list_medium_line_t2_g2_t

0xbdfd,	// (0x00084d4a) aid_sp_fs_list_icon_a_sm

0xd66d,	// (0x000865ba) aid_sp_fs_list_icon_d

0xbe05,	// (0x00084d52) aid_sp_fs_text_primary

0xbe0e,	// (0x00084d5b) aid_sp_fs_text_secondary

0xa2ad,	// (0x000831fa) list_medium_line

0xa2ad,	// (0x000831fa) list_medium_line_g2

0xa2ad,	// (0x000831fa) list_medium_line_g3

0xa2ad,	// (0x000831fa) list_medium_line_plain

0xa2ad,	// (0x000831fa) list_medium_line_plain_t2

0xa2ad,	// (0x000831fa) list_medium_line_plain_t3

0xa2ad,	// (0x000831fa) list_medium_line_right_icon

0xa2ad,	// (0x000831fa) list_medium_line_right_iconx2

0xa2ad,	// (0x000831fa) list_medium_line_t2

0xa2ad,	// (0x000831fa) list_medium_line_t2_g2

0xa2ad,	// (0x000831fa) list_medium_line_t2_g3

0xa2ad,	// (0x000831fa) list_medium_line_t2_right_icon

0xa2ad,	// (0x000831fa) list_medium_line_t2_right_iconx2

0xa2ad,	// (0x000831fa) list_medium_line_t3

0xa2ad,	// (0x000831fa) list_medium_line_t3_g2

0xa2ad,	// (0x000831fa) list_medium_line_t3_g3

0xa2ad,	// (0x000831fa) list_medium_line_t3_right_iconx2

0xa2ad,	// (0x000831fa) list_medium_line_t4_g4

0xa2ad,	// (0x000831fa) list_medium_line_x2

0xa2ad,	// (0x000831fa) list_medium_line_x2_t2_g2

0xa2ad,	// (0x000831fa) list_medium_line_x2_t2_g3

0xa2ad,	// (0x000831fa) list_medium_line_x2_t2_g4

0xa2ad,	// (0x000831fa) list_medium_line_x2_t3

0xa2ad,	// (0x000831fa) list_medium_line_x2_t3_g2

0xa2ad,	// (0x000831fa) list_medium_line_x2_t3_g3

0xa2ad,	// (0x000831fa) list_medium_line_x2_t3_g4

0xa2ad,	// (0x000831fa) list_medium_line_x2_t4_g2

0xa2ad,	// (0x000831fa) list_medium_line_x2_t4_g4

0xa2ad,	// (0x000831fa) list_medium_line_x3

0xa2ad,	// (0x000831fa) list_medium_line_x3_t4

0xa2ad,	// (0x000831fa) list_medium_line_x3_t4_g4

0xa2ad,	// (0x000831fa) list_medium_line_x4_t4

0xa2ad,	// (0x000831fa) list_medium_line_x4_t4_g7

0xa2ad,	// (0x000831fa) list_medium_line_x4_t5

0x0a7a,	// (0x000799c7) list_single_fs_dyc_pane_ParamLimits

0x0a7a,	// (0x000799c7) list_single_fs_dyc_pane

0xaa1b,	// (0x00083968) list_medium_line_x4_t4_g7_g1_ParamLimits

0xaa1b,	// (0x00083968) list_medium_line_x4_t4_g7_g1

0xaa1b,	// (0x00083968) list_medium_line_x4_t4_g7_g2_ParamLimits

0xaa1b,	// (0x00083968) list_medium_line_x4_t4_g7_g2

0xaa1b,	// (0x00083968) list_medium_line_x4_t4_g7_g3_ParamLimits

0xaa1b,	// (0x00083968) list_medium_line_x4_t4_g7_g3

0xaa1b,	// (0x00083968) list_medium_line_x4_t4_g7_g4_ParamLimits

0xaa1b,	// (0x00083968) list_medium_line_x4_t4_g7_g4

0xaa1b,	// (0x00083968) list_medium_line_x4_t4_g7_g5_ParamLimits

0xaa1b,	// (0x00083968) list_medium_line_x4_t4_g7_g5

0xaa1b,	// (0x00083968) list_medium_line_x4_t4_g7_g6_ParamLimits

0xaa1b,	// (0x00083968) list_medium_line_x4_t4_g7_g6

0xaa29,	// (0x00083976) list_medium_line_x4_t4_g7_g7_ParamLimits

0xaa29,	// (0x00083976) list_medium_line_x4_t4_g7_g7

0x0006,

0xfa7e,	// (0x000889cb) list_medium_line_x4_t4_g7_g_ParamLimits

0xfa7e,	// (0x000889cb) list_medium_line_x4_t4_g7_g

0xaa6b,	// (0x000839b8) list_medium_line_x4_t4_g7_t1_ParamLimits

0xaa6b,	// (0x000839b8) list_medium_line_x4_t4_g7_t1

0xaa6b,	// (0x000839b8) list_medium_line_x4_t4_g7_t2_ParamLimits

0xaa6b,	// (0x000839b8) list_medium_line_x4_t4_g7_t2

0xaa6b,	// (0x000839b8) list_medium_line_x4_t4_g7_t3_ParamLimits

0xaa6b,	// (0x000839b8) list_medium_line_x4_t4_g7_t3

0xaa7f,	// (0x000839cc) list_medium_line_x4_t4_g7_t4_ParamLimits

0xaa7f,	// (0x000839cc) list_medium_line_x4_t4_g7_t4

0xaa7f,	// (0x000839cc) list_medium_line_x4_t4_g7_t5_ParamLimits

0xaa7f,	// (0x000839cc) list_medium_line_x4_t4_g7_t5

0x0004,

0xfa8d,	// (0x000889da) list_medium_line_x4_t4_g7_t_ParamLimits

0xfa8d,	// (0x000889da) list_medium_line_x4_t4_g7_t

0x0ab2,	// (0x000799ff) list_single_dyc_row_pane_ParamLimits

0x0ab2,	// (0x000799ff) list_single_dyc_row_pane

0x831b,	// (0x00081268) call5_gesture_pane_ParamLimits

0x831b,	// (0x00081268) call5_gesture_pane

0x8371,	// (0x000812be) call5_windows_pane_ParamLimits

0x8371,	// (0x000812be) call5_windows_pane

0x841e,	// (0x0008136b) call5_swipe_1_pane_cp_ParamLimits

0x841e,	// (0x0008136b) call5_swipe_1_pane_cp

0x842a,	// (0x00081377) call5_swipe_2_pane_cp_ParamLimits

0x842a,	// (0x00081377) call5_swipe_2_pane_cp

0xad1e,	// (0x00083c6b) call5_image_pane_cp

0x8436,	// (0x00081383) popup_call5_audio_first_window_cp_ParamLimits

0x8436,	// (0x00081383) popup_call5_audio_first_window_cp

0xbe56,	// (0x00084da3) call5_swipe_1_pane_g1_cp_ParamLimits

0xbe56,	// (0x00084da3) call5_swipe_1_pane_g1_cp

0xbe63,	// (0x00084db0) call5_swipe_1_pane_g2_cp

0xbe6b,	// (0x00084db8) call5_swipe_1_pane_t1_cp_ParamLimits

0xbe6b,	// (0x00084db8) call5_swipe_1_pane_t1_cp

0xbe56,	// (0x00084da3) call5_swipe_2_pane_g1_cp_ParamLimits

0xbe56,	// (0x00084da3) call5_swipe_2_pane_g1_cp

0xbe80,	// (0x00084dcd) call5_swipe_2_pane_g2_cp

0xbe88,	// (0x00084dd5) call5_swipe_2_pane_t1_cp_ParamLimits

0xbe88,	// (0x00084dd5) call5_swipe_2_pane_t1_cp

0xa324,	// (0x00083271) main_sp_fs_email_pane

0xbe9d,	// (0x00084dea) main_sp_fs_listscroll_pane_te

0xd683,	// (0x000865d0) popup_sp_fs_action_menu_pane_ParamLimits

0xd683,	// (0x000865d0) popup_sp_fs_action_menu_pane

0xaa61,	// (0x000839ae) bg_sp_fs_ctrlbar_pane_g1

0xbea6,	// (0x00084df3) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xbeaf,	// (0x00084dfc) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xbeb8,	// (0x00084e05) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xaa61,	// (0x000839ae) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfb76,	// (0x00088ac3) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xe5ad,	// (0x000874fa) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xe5ad,	// (0x000874fa) bg_sp_fs_ctrlbar_ddmenu_pane

0xbec1,	// (0x00084e0e) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xbec1,	// (0x00084e0e) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xbecd,	// (0x00084e1a) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xbecd,	// (0x00084e1a) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfb7f,	// (0x00088acc) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfb7f,	// (0x00088acc) main_sp_fs_ctrlbar_ddmenu_pane_g

0xbed9,	// (0x00084e26) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xbed9,	// (0x00084e26) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xaa61,	// (0x000839ae) list_medium_line_t2_right_icon_g1

0xb253,	// (0x000841a0) list_medium_line_t2_right_icon_t1

0xb253,	// (0x000841a0) list_medium_line_t2_right_icon_t2

0x0001,

0xfb84,	// (0x00088ad1) list_medium_line_t2_right_icon_t

0xd242,	// (0x0008618f) bg_sp_fs_ctrlbar_pane_ParamLimits

0xd242,	// (0x0008618f) bg_sp_fs_ctrlbar_pane

0x848c,	// (0x000813d9) main_sp_fs_ctrlbar_button_pane_cp01

0x8496,	// (0x000813e3) main_sp_fs_ctrlbar_ddmenu_pane

0xbf2b,	// (0x00084e78) main_sp_fs_ctrlbar_pane_g1

0xbf37,	// (0x00084e84) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfb89,	// (0x00088ad6) main_sp_fs_ctrlbar_pane_g

0x84d4,	// (0x00081421) main_sp_fs_ctrlbar_pane_t1

0x8513,	// (0x00081460) main_sp_fs_ctrlbar_pane

0x8537,	// (0x00081484) main_sp_fs_listscroll_pane_te_cp01

0x0acf,	// (0x00079a1c) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x0acf,	// (0x00079a1c) popup_sp_fs_action_menu_pane_cp01

0xa324,	// (0x00083271) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa324,	// (0x00083271) bg_sp_fs_highlight_list_pane_cp01

0xbf5e,	// (0x00084eab) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xbf5e,	// (0x00084eab) sp_fs_action_menu_list_gene_pane_g1

0xbf6d,	// (0x00084eba) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xbf6d,	// (0x00084eba) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfb97,	// (0x00088ae4) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfb97,	// (0x00088ae4) sp_fs_action_menu_list_gene_pane_g

0xbf7a,	// (0x00084ec7) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xbf7a,	// (0x00084ec7) sp_fs_action_menu_list_gene_pane_t1

0xbf92,	// (0x00084edf) sp_fs_action_menu_list_gene_pane_ParamLimits

0xbf92,	// (0x00084edf) sp_fs_action_menu_list_gene_pane

0xbfb3,	// (0x00084f00) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xbfb3,	// (0x00084f00) popup_sp_fs_action_menu_bg_pane

0xbfc1,	// (0x00084f0e) sp_fs_action_menu_list_pane_ParamLimits

0xbfc1,	// (0x00084f0e) sp_fs_action_menu_list_pane

0xbfe3,	// (0x00084f30) sp_fs_scroll_pane_cp01_ParamLimits

0xbfe3,	// (0x00084f30) sp_fs_scroll_pane_cp01

0xb253,	// (0x000841a0) list_medium_line_plain_t2_t1

0xb253,	// (0x000841a0) list_medium_line_plain_t2_t2

0x0001,

0xfb84,	// (0x00088ad1) list_medium_line_plain_t2_t

0xb253,	// (0x000841a0) list_medium_line_plain_t3_t1

0xb253,	// (0x000841a0) list_medium_line_plain_t3_t2

0xb253,	// (0x000841a0) list_medium_line_plain_t3_t3

0x0002,

0xf254,	// (0x000881a1) list_medium_line_plain_t3_t

0xaa1b,	// (0x00083968) list_medium_line_x2_t2_g2_g1_ParamLimits

0xaa1b,	// (0x00083968) list_medium_line_x2_t2_g2_g1

0xaa1b,	// (0x00083968) list_medium_line_x2_t2_g2_g2_ParamLimits

0xaa1b,	// (0x00083968) list_medium_line_x2_t2_g2_g2

0x0001,

0xf199,	// (0x000880e6) list_medium_line_x2_t2_g2_g_ParamLimits

0xf199,	// (0x000880e6) list_medium_line_x2_t2_g2_g

0xaa6b,	// (0x000839b8) list_medium_line_x2_t2_g2_t1_ParamLimits

0xaa6b,	// (0x000839b8) list_medium_line_x2_t2_g2_t1

0xaa6b,	// (0x000839b8) list_medium_line_x2_t2_g2_t2_ParamLimits

0xaa6b,	// (0x000839b8) list_medium_line_x2_t2_g2_t2

0x0001,

0xf16e,	// (0x000880bb) list_medium_line_x2_t2_g2_t_ParamLimits

0xf16e,	// (0x000880bb) list_medium_line_x2_t2_g2_t

0xaa1b,	// (0x00083968) list_medium_line_x2_t4_g2_g1_ParamLimits

0xaa1b,	// (0x00083968) list_medium_line_x2_t4_g2_g1

0xaa1b,	// (0x00083968) list_medium_line_x2_t4_g2_g2_ParamLimits

0xaa1b,	// (0x00083968) list_medium_line_x2_t4_g2_g2

0x0001,

0xf199,	// (0x000880e6) list_medium_line_x2_t4_g2_g_ParamLimits

0xf199,	// (0x000880e6) list_medium_line_x2_t4_g2_g

0xaa6b,	// (0x000839b8) list_medium_line_x2_t4_g2_t1_ParamLimits

0xaa6b,	// (0x000839b8) list_medium_line_x2_t4_g2_t1

0xaa6b,	// (0x000839b8) list_medium_line_x2_t4_g2_t2_ParamLimits

0xaa6b,	// (0x000839b8) list_medium_line_x2_t4_g2_t2

0xaa6b,	// (0x000839b8) list_medium_line_x2_t4_g2_t3_ParamLimits

0xaa6b,	// (0x000839b8) list_medium_line_x2_t4_g2_t3

0xaa6b,	// (0x000839b8) list_medium_line_x2_t4_g2_t4_ParamLimits

0xaa6b,	// (0x000839b8) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1a7,	// (0x000880f4) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1a7,	// (0x000880f4) list_medium_line_x2_t4_g2_t

0xaa61,	// (0x000839ae) list_medium_line_t3_right_iconx2_g1

0xaa61,	// (0x000839ae) list_medium_line_t3_right_iconx2_g2

0xaa61,	// (0x000839ae) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf370,	// (0x000882bd) list_medium_line_t3_right_iconx2_g

0xb253,	// (0x000841a0) list_medium_line_t3_right_iconx2_t1

0xb253,	// (0x000841a0) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfb84,	// (0x00088ad1) list_medium_line_t3_right_iconx2_t

0xaa1b,	// (0x00083968) list_medium_line_x3_t4_g4_g1_ParamLimits

0xaa1b,	// (0x00083968) list_medium_line_x3_t4_g4_g1

0xaa1b,	// (0x00083968) list_medium_line_x3_t4_g4_g2_ParamLimits

0xaa1b,	// (0x00083968) list_medium_line_x3_t4_g4_g2

0xaa1b,	// (0x00083968) list_medium_line_x3_t4_g4_g3_ParamLimits

0xaa1b,	// (0x00083968) list_medium_line_x3_t4_g4_g3

0xaa1b,	// (0x00083968) list_medium_line_x3_t4_g4_g4_ParamLimits

0xaa1b,	// (0x00083968) list_medium_line_x3_t4_g4_g4

0x0003,

0xf19e,	// (0x000880eb) list_medium_line_x3_t4_g4_g_ParamLimits

0xf19e,	// (0x000880eb) list_medium_line_x3_t4_g4_g

0xaa6b,	// (0x000839b8) list_medium_line_x3_t4_g4_t1_ParamLimits

0xaa6b,	// (0x000839b8) list_medium_line_x3_t4_g4_t1

0xaa6b,	// (0x000839b8) list_medium_line_x3_t4_g4_t2_ParamLimits

0xaa6b,	// (0x000839b8) list_medium_line_x3_t4_g4_t2

0xaa6b,	// (0x000839b8) list_medium_line_x3_t4_g4_t3_ParamLimits

0xaa6b,	// (0x000839b8) list_medium_line_x3_t4_g4_t3

0xaa6b,	// (0x000839b8) list_medium_line_x3_t4_g4_t4_ParamLimits

0xaa6b,	// (0x000839b8) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1a7,	// (0x000880f4) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1a7,	// (0x000880f4) list_medium_line_x3_t4_g4_t

0x0af4,	// (0x00079a41) list_single_dyc_row_text_pane_t1_ParamLimits

0x0af4,	// (0x00079a41) list_single_dyc_row_text_pane_t1

0x0b3d,	// (0x00079a8a) list_single_dyc_row_text_pane_t2_ParamLimits

0x0b3d,	// (0x00079a8a) list_single_dyc_row_text_pane_t2

0xc009,	// (0x00084f56) list_single_dyc_row_text_pane_t3_ParamLimits

0xc009,	// (0x00084f56) list_single_dyc_row_text_pane_t3

0x0005,

0xfb9c,	// (0x00088ae9) list_single_dyc_row_text_pane_t_ParamLimits

0xfb9c,	// (0x00088ae9) list_single_dyc_row_text_pane_t

0xc02d,	// (0x00084f7a) list_single_dyc_row_pane_g1_ParamLimits

0xc02d,	// (0x00084f7a) list_single_dyc_row_pane_g1

0xc039,	// (0x00084f86) list_single_dyc_row_pane_g2_ParamLimits

0xc039,	// (0x00084f86) list_single_dyc_row_pane_g2

0xc045,	// (0x00084f92) list_single_dyc_row_pane_g3_ParamLimits

0xc045,	// (0x00084f92) list_single_dyc_row_pane_g3

0xc058,	// (0x00084fa5) list_single_dyc_row_pane_g4_ParamLimits

0xc058,	// (0x00084fa5) list_single_dyc_row_pane_g4

0x0006,

0xfba9,	// (0x00088af6) list_single_dyc_row_pane_g_ParamLimits

0xfba9,	// (0x00088af6) list_single_dyc_row_pane_g

0xc0aa,	// (0x00084ff7) list_single_dyc_row_text_pane_ParamLimits

0xc0aa,	// (0x00084ff7) list_single_dyc_row_text_pane

0xa2ad,	// (0x000831fa) bg_sp_fs_scroll_pane

0xc0cf,	// (0x0008501c) thumb_sp_fs_scroll_pane

0xaa1b,	// (0x00083968) list_medium_line_g1_ParamLimits

0xaa1b,	// (0x00083968) list_medium_line_g1

0xaa6b,	// (0x000839b8) list_medium_line_t1_ParamLimits

0xaa6b,	// (0x000839b8) list_medium_line_t1

0xaa1b,	// (0x00083968) list_medium_line_x2_g1_ParamLimits

0xaa1b,	// (0x00083968) list_medium_line_x2_g1

0xaa1b,	// (0x00083968) list_medium_line_x2_g2_ParamLimits

0xaa1b,	// (0x00083968) list_medium_line_x2_g2

0x0001,

0xf199,	// (0x000880e6) list_medium_line_x2_g_ParamLimits

0xf199,	// (0x000880e6) list_medium_line_x2_g

0xaa6b,	// (0x000839b8) list_medium_line_x2_t1_ParamLimits

0xaa6b,	// (0x000839b8) list_medium_line_x2_t1

0xaa1b,	// (0x00083968) list_medium_line_x3_g1_ParamLimits

0xaa1b,	// (0x00083968) list_medium_line_x3_g1

0xc0d8,	// (0x00085025) list_medium_line_x3_g2_ParamLimits

0xc0d8,	// (0x00085025) list_medium_line_x3_g2

0x0001,

0xfbb8,	// (0x00088b05) list_medium_line_x3_g_ParamLimits

0xfbb8,	// (0x00088b05) list_medium_line_x3_g

0xc0e6,	// (0x00085033) list_medium_line_x3_t1_ParamLimits

0xc0e6,	// (0x00085033) list_medium_line_x3_t1

0xc0fa,	// (0x00085047) thumb_sp_fs_scroll_pane_g1

0xc103,	// (0x00085050) thumb_sp_fs_scroll_pane_g2

0xc10c,	// (0x00085059) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfbbd,	// (0x00088b0a) thumb_sp_fs_scroll_pane_g

0xc0fa,	// (0x00085047) bg_sp_fs_scroll_pane_g1

0xc103,	// (0x00085050) bg_sp_fs_scroll_pane_g2

0xc10c,	// (0x00085059) bg_sp_fs_scroll_pane_g3

0x0002,

0xfbbd,	// (0x00088b0a) bg_sp_fs_scroll_pane_g

0xaa1b,	// (0x00083968) list_medium_line_x2_t3_g4_g1_ParamLimits

0xaa1b,	// (0x00083968) list_medium_line_x2_t3_g4_g1

0xaa1b,	// (0x00083968) list_medium_line_x2_t3_g4_g2_ParamLimits

0xaa1b,	// (0x00083968) list_medium_line_x2_t3_g4_g2

0xaa1b,	// (0x00083968) list_medium_line_x2_t3_g4_g3_ParamLimits

0xaa1b,	// (0x00083968) list_medium_line_x2_t3_g4_g3

0xaa1b,	// (0x00083968) list_medium_line_x2_t3_g4_g4_ParamLimits

0xaa1b,	// (0x00083968) list_medium_line_x2_t3_g4_g4

0x0003,

0xf19e,	// (0x000880eb) list_medium_line_x2_t3_g4_g_ParamLimits

0xf19e,	// (0x000880eb) list_medium_line_x2_t3_g4_g

0xaa6b,	// (0x000839b8) list_medium_line_x2_t3_g4_t1_ParamLimits

0xaa6b,	// (0x000839b8) list_medium_line_x2_t3_g4_t1

0xaa6b,	// (0x000839b8) list_medium_line_x2_t3_g4_t2_ParamLimits

0xaa6b,	// (0x000839b8) list_medium_line_x2_t3_g4_t2

0xaa6b,	// (0x000839b8) list_medium_line_x2_t3_g4_t3_ParamLimits

0xaa6b,	// (0x000839b8) list_medium_line_x2_t3_g4_t3

0x0002,

0xf192,	// (0x000880df) list_medium_line_x2_t3_g4_t_ParamLimits

0xf192,	// (0x000880df) list_medium_line_x2_t3_g4_t

0xaa1b,	// (0x00083968) list_medium_line_g2_g1_ParamLimits

0xaa1b,	// (0x00083968) list_medium_line_g2_g1

0xaa1b,	// (0x00083968) list_medium_line_g2_g2_ParamLimits

0xaa1b,	// (0x00083968) list_medium_line_g2_g2

0x0001,

0xf199,	// (0x000880e6) list_medium_line_g2_g_ParamLimits

0xf199,	// (0x000880e6) list_medium_line_g2_g

0xaa6b,	// (0x000839b8) list_medium_line_g2_t1_ParamLimits

0xaa6b,	// (0x000839b8) list_medium_line_g2_t1

0xaa1b,	// (0x00083968) list_medium_line_t3_g2_g1_ParamLimits

0xaa1b,	// (0x00083968) list_medium_line_t3_g2_g1

0xaa1b,	// (0x00083968) list_medium_line_t3_g2_g2_ParamLimits

0xaa1b,	// (0x00083968) list_medium_line_t3_g2_g2

0x0001,

0xf199,	// (0x000880e6) list_medium_line_t3_g2_g_ParamLimits

0xf199,	// (0x000880e6) list_medium_line_t3_g2_g

0xaa6b,	// (0x000839b8) list_medium_line_t3_g2_t1_ParamLimits

0xaa6b,	// (0x000839b8) list_medium_line_t3_g2_t1

0xaa6b,	// (0x000839b8) list_medium_line_t3_g2_t2_ParamLimits

0xaa6b,	// (0x000839b8) list_medium_line_t3_g2_t2

0xaa6b,	// (0x000839b8) list_medium_line_t3_g2_t3_ParamLimits

0xaa6b,	// (0x000839b8) list_medium_line_t3_g2_t3

0x0002,

0xf192,	// (0x000880df) list_medium_line_t3_g2_t_ParamLimits

0xf192,	// (0x000880df) list_medium_line_t3_g2_t

0xaa61,	// (0x000839ae) list_medium_line_right_icon_g1

0xb253,	// (0x000841a0) list_medium_line_right_icon_t1

0xaa1b,	// (0x00083968) list_medium_line_t2_g1_ParamLimits

0xaa1b,	// (0x00083968) list_medium_line_t2_g1

0xaa6b,	// (0x000839b8) list_medium_line_t2_t1_ParamLimits

0xaa6b,	// (0x000839b8) list_medium_line_t2_t1

0xaa6b,	// (0x000839b8) list_medium_line_t2_t2_ParamLimits

0xaa6b,	// (0x000839b8) list_medium_line_t2_t2

0x0001,

0xf16e,	// (0x000880bb) list_medium_line_t2_t_ParamLimits

0xf16e,	// (0x000880bb) list_medium_line_t2_t

0xaa1b,	// (0x00083968) list_medium_line_t3_g1_ParamLimits

0xaa1b,	// (0x00083968) list_medium_line_t3_g1

0xaa6b,	// (0x000839b8) list_medium_line_t3_t1_ParamLimits

0xaa6b,	// (0x000839b8) list_medium_line_t3_t1

0xaa6b,	// (0x000839b8) list_medium_line_t3_t2_ParamLimits

0xaa6b,	// (0x000839b8) list_medium_line_t3_t2

0xaa6b,	// (0x000839b8) list_medium_line_t3_t3_ParamLimits

0xaa6b,	// (0x000839b8) list_medium_line_t3_t3

0x0002,

0xf192,	// (0x000880df) list_medium_line_t3_t_ParamLimits

0xf192,	// (0x000880df) list_medium_line_t3_t

0xaa1b,	// (0x00083968) list_medium_line_g3_g1_ParamLimits

0xaa1b,	// (0x00083968) list_medium_line_g3_g1

0xaa1b,	// (0x00083968) list_medium_line_g3_g2_ParamLimits

0xaa1b,	// (0x00083968) list_medium_line_g3_g2

0xaa1b,	// (0x00083968) list_medium_line_g3_g3_ParamLimits

0xaa1b,	// (0x00083968) list_medium_line_g3_g3

0x0002,

0xf18b,	// (0x000880d8) list_medium_line_g3_g_ParamLimits

0xf18b,	// (0x000880d8) list_medium_line_g3_g

0xaa6b,	// (0x000839b8) list_medium_line_g3_t1_ParamLimits

0xaa6b,	// (0x000839b8) list_medium_line_g3_t1

0xaa1b,	// (0x00083968) list_medium_line_t2_g3_g1_ParamLimits

0xaa1b,	// (0x00083968) list_medium_line_t2_g3_g1

0xaa1b,	// (0x00083968) list_medium_line_t2_g3_g2_ParamLimits

0xaa1b,	// (0x00083968) list_medium_line_t2_g3_g2

0xaa1b,	// (0x00083968) list_medium_line_t2_g3_g3_ParamLimits

0xaa1b,	// (0x00083968) list_medium_line_t2_g3_g3

0x0002,

0xf18b,	// (0x000880d8) list_medium_line_t2_g3_g_ParamLimits

0xf18b,	// (0x000880d8) list_medium_line_t2_g3_g

0xaa6b,	// (0x000839b8) list_medium_line_t2_g3_t1_ParamLimits

0xaa6b,	// (0x000839b8) list_medium_line_t2_g3_t1

0xaa6b,	// (0x000839b8) list_medium_line_t2_g3_t2_ParamLimits

0xaa6b,	// (0x000839b8) list_medium_line_t2_g3_t2

0x0001,

0xf16e,	// (0x000880bb) list_medium_line_t2_g3_t_ParamLimits

0xf16e,	// (0x000880bb) list_medium_line_t2_g3_t

0xaa1b,	// (0x00083968) list_medium_line_t3_g3_g1_ParamLimits

0xaa1b,	// (0x00083968) list_medium_line_t3_g3_g1

0xaa1b,	// (0x00083968) list_medium_line_t3_g3_g2_ParamLimits

0xaa1b,	// (0x00083968) list_medium_line_t3_g3_g2

0xaa1b,	// (0x00083968) list_medium_line_t3_g3_g3_ParamLimits

0xaa1b,	// (0x00083968) list_medium_line_t3_g3_g3

0x0002,

0xf18b,	// (0x000880d8) list_medium_line_t3_g3_g_ParamLimits

0xf18b,	// (0x000880d8) list_medium_line_t3_g3_g

0xaa6b,	// (0x000839b8) list_medium_line_t3_g3_t1_ParamLimits

0xaa6b,	// (0x000839b8) list_medium_line_t3_g3_t1

0xaa6b,	// (0x000839b8) list_medium_line_t3_g3_t2_ParamLimits

0xaa6b,	// (0x000839b8) list_medium_line_t3_g3_t2

0xaa6b,	// (0x000839b8) list_medium_line_t3_g3_t3_ParamLimits

0xaa6b,	// (0x000839b8) list_medium_line_t3_g3_t3

0x0002,

0xf192,	// (0x000880df) list_medium_line_t3_g3_t_ParamLimits

0xf192,	// (0x000880df) list_medium_line_t3_g3_t

0xaa61,	// (0x000839ae) list_medium_line_right_iconx2_g1

0xaa61,	// (0x000839ae) list_medium_line_right_iconx2_g2

0x0001,

0xf08c,	// (0x00087fd9) list_medium_line_right_iconx2_g

0xb253,	// (0x000841a0) list_medium_line_right_iconx2_t1

0xaa61,	// (0x000839ae) list_medium_line_t2_right_iconx2_g1

0xaa61,	// (0x000839ae) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf08c,	// (0x00087fd9) list_medium_line_t2_right_iconx2_g

0xb253,	// (0x000841a0) list_medium_line_t2_right_iconx2_t1

0xb253,	// (0x000841a0) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfb84,	// (0x00088ad1) list_medium_line_t2_right_iconx2_t

0xb253,	// (0x000841a0) list_medium_line_x4_t4_t1

0xb253,	// (0x000841a0) list_medium_line_x4_t4_t2

0xb253,	// (0x000841a0) list_medium_line_x4_t4_t3

0xb253,	// (0x000841a0) list_medium_line_x4_t4_t4

0x0003,

0xf25b,	// (0x000881a8) list_medium_line_x4_t4_t

0x85a4,	// (0x000814f1) tport_appsw_pane_ParamLimits

0x85a4,	// (0x000814f1) tport_appsw_pane

0x85bc,	// (0x00081509) tport_contact_pane_ParamLimits

0x85bc,	// (0x00081509) tport_contact_pane

0x85d4,	// (0x00081521) tport_listscroll_pane_ParamLimits

0x85d4,	// (0x00081521) tport_listscroll_pane

0x85ee,	// (0x0008153b) cell_tport_appsw_pane_ParamLimits

0x85ee,	// (0x0008153b) cell_tport_appsw_pane

0xdbef,	// (0x00086b3c) tport_appsw_pane_g1_ParamLimits

0xdbef,	// (0x00086b3c) tport_appsw_pane_g1

0xc115,	// (0x00085062) tport_contact_pane_g1

0x7b7c,	// (0x00080ac9) tport_contact_pane_t1

0xc11e,	// (0x0008506b) tport_contact_pane_t2

0x0001,

0xfbc4,	// (0x00088b11) tport_contact_pane_t

0xc12c,	// (0x00085079) list_tport_pane

0xc135,	// (0x00085082) scroll_pane_cp_030

0x8636,	// (0x00081583) cell_tport_appsw_pane_g1

0x8646,	// (0x00081593) cell_tport_appsw_pane_t1

0x8654,	// (0x000815a1) grid_highlight_pane_cp019

0x865c,	// (0x000815a9) list_tport_double_graphic_pane_ParamLimits

0x865c,	// (0x000815a9) list_tport_double_graphic_pane

0xa324,	// (0x00083271) list_highlight_pane_cp023_ParamLimits

0xa324,	// (0x00083271) list_highlight_pane_cp023

0x8669,	// (0x000815b6) list_tport_double_graphic_pane_g1_ParamLimits

0x8669,	// (0x000815b6) list_tport_double_graphic_pane_g1

0x8676,	// (0x000815c3) list_tport_double_graphic_pane_t1_ParamLimits

0x8676,	// (0x000815c3) list_tport_double_graphic_pane_t1

0x868b,	// (0x000815d8) list_tport_double_graphic_pane_t2_ParamLimits

0x868b,	// (0x000815d8) list_tport_double_graphic_pane_t2

0x0001,

0xfbd0,	// (0x00088b1d) list_tport_double_graphic_pane_t_ParamLimits

0xfbd0,	// (0x00088b1d) list_tport_double_graphic_pane_t

0xa2ad,	// (0x000831fa) main_cale_note_pane

0x57bd,	// (0x0007e70a) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x57bd,	// (0x0007e70a) cell_vitu2_function_top_wide_pane_cp01

0x7f12,	// (0x00080e5f) wait_bar_pane_cp05_ParamLimits

0xa324,	// (0x00083271) listscroll_cmail_pane

0xc146,	// (0x00085093) list_cmail_pane

0x869d,	// (0x000815ea) list_cmail_body_pane

0x86b2,	// (0x000815ff) list_single_cmail_header_caption_pane

0x86c8,	// (0x00081615) list_single_cmail_header_detail_pane_ParamLimits

0x86c8,	// (0x00081615) list_single_cmail_header_detail_pane

0xc15d,	// (0x000850aa) list_single_cmail_header_caption_pane_t1

0x0c72,	// (0x00079bbf) list_single_cmail_header_detail_pane_g1_ParamLimits

0x0c72,	// (0x00079bbf) list_single_cmail_header_detail_pane_g1

0xd6c7,	// (0x00086614) list_single_cmail_header_detail_pane_g2_ParamLimits

0xd6c7,	// (0x00086614) list_single_cmail_header_detail_pane_g2

0x0002,

0xfbd5,	// (0x00088b22) list_single_cmail_header_detail_pane_g_ParamLimits

0xfbd5,	// (0x00088b22) list_single_cmail_header_detail_pane_g

0x0c8a,	// (0x00079bd7) list_single_cmail_header_detail_pane_t1_ParamLimits

0x0c8a,	// (0x00079bd7) list_single_cmail_header_detail_pane_t1

0x0cc8,	// (0x00079c15) list_single_cmail_header_editor_pane_bg_ParamLimits

0x0cc8,	// (0x00079c15) list_single_cmail_header_editor_pane_bg

0x7d7e,	// (0x00080ccb) list_cmail_body_pane_g1

0xc1a5,	// (0x000850f2) list_cmail_body_pane_t1

0x59f6,	// (0x0007e943) list_single_cmail_header_editor_pane_bg_g1

0xaf41,	// (0x00083e8e) list_single_cmail_header_editor_pane_bg_g1_copy1

0x5a06,	// (0x0007e953) list_single_cmail_header_editor_pane_bg_g1_copy2

0x59fe,	// (0x0007e94b) list_single_cmail_header_editor_pane_bg_g1_copy3

0x6392,	// (0x0007f2df) list_single_cmail_header_editor_pane_bg_g1_copy4

0x5a26,	// (0x0007e973) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x5a16,	// (0x0007e963) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x5a1e,	// (0x0007e96b) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xaf21,	// (0x00083e6e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x86f5,	// (0x00081642) calenote_gesture_pane_ParamLimits

0x86f5,	// (0x00081642) calenote_gesture_pane

0x8715,	// (0x00081662) calenote_window_pane_ParamLimits

0x8715,	// (0x00081662) calenote_window_pane

0xc1b3,	// (0x00085100) popup_note_window_cp01

0x8731,	// (0x0008167e) calenote_swipe_1_pane_ParamLimits

0x8731,	// (0x0008167e) calenote_swipe_1_pane

0x842a,	// (0x00081377) calenote_swipe_2_pane_ParamLimits

0x842a,	// (0x00081377) calenote_swipe_2_pane

0xbe56,	// (0x00084da3) calenote_swipe_1_pane_g1_ParamLimits

0xbe56,	// (0x00084da3) calenote_swipe_1_pane_g1

0xc1c5,	// (0x00085112) calenote_swipe_1_pane_g2_ParamLimits

0xc1c5,	// (0x00085112) calenote_swipe_1_pane_g2

0x0001,

0xfbe1,	// (0x00088b2e) calenote_swipe_1_pane_g_ParamLimits

0xfbe1,	// (0x00088b2e) calenote_swipe_1_pane_g

0xc1d1,	// (0x0008511e) calenote_swipe_1_pane_t1_ParamLimits

0xc1d1,	// (0x0008511e) calenote_swipe_1_pane_t1

0xbe56,	// (0x00084da3) calenote_swipe_2_pane_g1_ParamLimits

0xbe56,	// (0x00084da3) calenote_swipe_2_pane_g1

0xc1f0,	// (0x0008513d) calenote_swipe_2_pane_g2_ParamLimits

0xc1f0,	// (0x0008513d) calenote_swipe_2_pane_g2

0x0001,

0xfbe6,	// (0x00088b33) calenote_swipe_2_pane_g_ParamLimits

0xfbe6,	// (0x00088b33) calenote_swipe_2_pane_g

0xc1fc,	// (0x00085149) calenote_swipe_2_pane_t1_ParamLimits

0xc1fc,	// (0x00085149) calenote_swipe_2_pane_t1

0xa2ad,	// (0x000831fa) main_mup_navstr_pane

0x4711,	// (0x0007d65e) main_mup3_pane_t7_ParamLimits

0x4711,	// (0x0007d65e) main_mup3_pane_t7

0xba04,	// (0x00084951) main_mp4_pane_g6_ParamLimits

0xba04,	// (0x00084951) main_mp4_pane_g6

0xbc2e,	// (0x00084b7b) main_image3_pane_t4_ParamLimits

0xbc2e,	// (0x00084b7b) main_image3_pane_t4

0x8746,	// (0x00081693) popup_navstr_preview_pane_ParamLimits

0x8746,	// (0x00081693) popup_navstr_preview_pane

0x875a,	// (0x000816a7) scroll_navstr_pane_ParamLimits

0x875a,	// (0x000816a7) scroll_navstr_pane

0xa2ad,	// (0x000831fa) bg_popup_preview_window_pane_cp04

0xc223,	// (0x00085170) popup_navstr_preview_pane_t1

0x876e,	// (0x000816bb) scroll_navstr_pane_g1_ParamLimits

0x876e,	// (0x000816bb) scroll_navstr_pane_g1

0x8782,	// (0x000816cf) scroll_navstr_pane_t1_ParamLimits

0x8782,	// (0x000816cf) scroll_navstr_pane_t1

0xc1bc,	// (0x00085109) bg_button_pane_cp014

0xc1bc,	// (0x00085109) bg_button_pane_cp030

0x82c1,	// (0x0008120e) list_double_fisheye_pane_g4_ParamLimits

0x82c1,	// (0x0008120e) list_double_fisheye_pane_g4

0x82cd,	// (0x0008121a) list_double_fisheye_pane_g5_ParamLimits

0x82cd,	// (0x0008121a) list_double_fisheye_pane_g5

0xe0d1,	// (0x0008701e) sp_fs_scroll_pane_cp03

0xbf2b,	// (0x00084e78) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xbf37,	// (0x00084e84) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfb89,	// (0x00088ad6) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x84d4,	// (0x00081421) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xc155,	// (0x000850a2) sp_fs_scroll_pane_cp02

0xac66,	// (0x00083bb3) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xac66,	// (0x00083bb3) popup_sp_fs_calendar_preview_list_single_pane

0xa2ad,	// (0x000831fa) main_cam6_pano_pane

0xa324,	// (0x00083271) main_mup3_pane_ParamLimits

0xa2ad,	// (0x000831fa) main_phacti_pane

0x7de5,	// (0x00080d32) bg_button_pane_cp11

0x7dff,	// (0x00080d4c) main_mobtv_info_pane_g2_ParamLimits

0x7dff,	// (0x00080d4c) main_mobtv_info_pane_g2

0x0001,

0xfaee,	// (0x00088a3b) main_mobtv_info_pane_g_ParamLimits

0xfaee,	// (0x00088a3b) main_mobtv_info_pane_g

0xaa6b,	// (0x000839b8) sc_clock_pane_t5_ParamLimits

0xaa6b,	// (0x000839b8) sc_clock_pane_t5

0xdbef,	// (0x00086b3c) main_radioblah_pane_g1_ParamLimits

0xe0dd,	// (0x0008702a) main_radioblah_pane_t3_ParamLimits

0xe0dd,	// (0x0008702a) main_radioblah_pane_t3

0xe0dd,	// (0x0008702a) main_radioblah_pane_t4_ParamLimits

0xe0dd,	// (0x0008702a) main_radioblah_pane_t4

0xa324,	// (0x00083271) main_radioblah_text_pane_ParamLimits

0xa324,	// (0x00083271) main_radioblah_text_pane

0x81de,	// (0x0008112b) main_radioblah_info_pane_g1_ParamLimits

0x8222,	// (0x0008116f) main_radioblah_info_pane_t4_ParamLimits

0x8222,	// (0x0008116f) main_radioblah_info_pane_t4

0xa324,	// (0x00083271) main_sp_fs_calendar_pane

0x8799,	// (0x000816e6) main_phacti_pane_g1

0x87a1,	// (0x000816ee) phacti_note_pane_ParamLimits

0x87a1,	// (0x000816ee) phacti_note_pane

0xc23a,	// (0x00085187) phacti_term_pane_ParamLimits

0xc23a,	// (0x00085187) phacti_term_pane

0xc24f,	// (0x0008519c) phacti_note_pane_t1_ParamLimits

0xc24f,	// (0x0008519c) phacti_note_pane_t1

0xc266,	// (0x000851b3) phacti_term_pane_g1

0xc26e,	// (0x000851bb) phacti_term_pane_t1_ParamLimits

0xc26e,	// (0x000851bb) phacti_term_pane_t1

0xc298,	// (0x000851e5) popup_sp_fs_calendar_preview_list_single_pane_g1

0xad05,	// (0x00083c52) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfbf0,	// (0x00088b3d) popup_sp_fs_calendar_preview_list_single_pane_g

0xc2a0,	// (0x000851ed) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xc2a0,	// (0x000851ed) popup_sp_fs_calendar_preview_list_single_pane_t1

0xc2b6,	// (0x00085203) aid_popup_sp_fs_bg_corner_pane

0xaa61,	// (0x000839ae) popup_sp_fs_calendar_preview_bg_pane_g1

0xa2ad,	// (0x000831fa) popup_sp_fs_calendar_preview_bg_pane

0xc2be,	// (0x0008520b) popup_sp_fs_calendar_preview_list_pane

0xc2cf,	// (0x0008521c) bg_main_sp_fs_cale_pane_ParamLimits

0xc2cf,	// (0x0008521c) bg_main_sp_fs_cale_pane

0xc2e7,	// (0x00085234) listscroll_cale_mrui_pane_ParamLimits

0xc2e7,	// (0x00085234) listscroll_cale_mrui_pane

0xebe1,	// (0x00087b2e) listscroll_sp_fs_schedule_track_pane

0xc2ff,	// (0x0008524c) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xc2ff,	// (0x0008524c) main_sp_fs_ctrlbar_pane_cp01

0xebe1,	// (0x00087b2e) main_sp_fs_ribbon_pane

0xc315,	// (0x00085262) popup_sp_fs_cale_preview_window

0xc327,	// (0x00085274) list_single_sp_fs_schedule_track_pane_ParamLimits

0xc327,	// (0x00085274) list_single_sp_fs_schedule_track_pane

0xeba0,	// (0x00087aed) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xeba0,	// (0x00087aed) bg_sp_fs_highlight_list_pane_cp03

0xeb94,	// (0x00087ae1) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xeb94,	// (0x00087ae1) list_single_sp_fs_schedule_track_pane_g1

0xeb94,	// (0x00087ae1) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xeb94,	// (0x00087ae1) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfbf5,	// (0x00088b42) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfbf5,	// (0x00088b42) list_single_sp_fs_schedule_track_pane_g

0x87b5,	// (0x00081702) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x87b5,	// (0x00081702) list_single_sp_fs_schedule_track_pane_t1

0x87c7,	// (0x00081714) sp_fs_schedule_track_pane_ParamLimits

0x87c7,	// (0x00081714) sp_fs_schedule_track_pane

0xebe9,	// (0x00087b36) sp_fs_schedule_track_pane_g1

0xebe9,	// (0x00087b36) sp_fs_schedule_track_pane_g2

0xebe9,	// (0x00087b36) sp_fs_schedule_track_pane_g3

0xebe9,	// (0x00087b36) sp_fs_schedule_track_pane_g4

0xebe9,	// (0x00087b36) sp_fs_schedule_track_pane_g5

0x0004,

0xf789,	// (0x000886d6) sp_fs_schedule_track_pane_g

0xebe9,	// (0x00087b36) bg_sp_fs_schedule_viewer_highlight_g1

0xebe9,	// (0x00087b36) bg_sp_fs_schedule_viewer_highlight_g2

0xebe9,	// (0x00087b36) bg_sp_fs_schedule_viewer_highlight_g3

0xebe9,	// (0x00087b36) bg_sp_fs_schedule_viewer_highlight_g4

0xebe9,	// (0x00087b36) bg_sp_fs_schedule_viewer_highlight_g5

0xebe9,	// (0x00087b36) bg_sp_fs_schedule_viewer_highlight_g6

0xebe9,	// (0x00087b36) bg_sp_fs_schedule_viewer_highlight_g7

0xebe9,	// (0x00087b36) bg_sp_fs_schedule_viewer_highlight_g8

0xebe9,	// (0x00087b36) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfbfa,	// (0x00088b47) bg_sp_fs_schedule_viewer_highlight_g

0xebe1,	// (0x00087b2e) bg_main_sp_fs_ribbon_pane

0xebe9,	// (0x00087b36) main_sp_fs_ribbon_pane_g1

0xc333,	// (0x00085280) main_sp_fs_ribbon_pane_t1

0xc333,	// (0x00085280) main_sp_fs_ribbon_pane_t2

0xc333,	// (0x00085280) main_sp_fs_ribbon_pane_t3

0x0002,

0xfc0d,	// (0x00088b5a) main_sp_fs_ribbon_pane_t

0xebe1,	// (0x00087b2e) main_sp_fs_ribbon_scheduler_pane

0xebe9,	// (0x00087b36) bg_main_sp_fs_ribbon_pane_g1

0xebe9,	// (0x00087b36) bg_main_sp_fs_ribbon_pane_g2

0xebe9,	// (0x00087b36) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xf694,	// (0x000885e1) bg_main_sp_fs_ribbon_pane_g

0xebe9,	// (0x00087b36) main_sp_fs_ribbon_scheduler_pane_g1

0xebe9,	// (0x00087b36) main_sp_fs_ribbon_scheduler_pane_g2

0xebe9,	// (0x00087b36) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xf694,	// (0x000885e1) main_sp_fs_ribbon_scheduler_pane_g

0xc341,	// (0x0008528e) list_cale_mrui_pane

0x87d3,	// (0x00081720) sp_fs_scroll_pane_cp07_ParamLimits

0x87d3,	// (0x00081720) sp_fs_scroll_pane_cp07

0xeba0,	// (0x00087aed) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xeba0,	// (0x00087aed) bg_sp_fs_schedule_viewer_highlight

0xebe1,	// (0x00087b2e) list_single_sp_fs_schedule_track_pane_cp01

0xebe1,	// (0x00087b2e) list_sp_fs_schedule_track_pane

0xc34e,	// (0x0008529b) sp_fs_scroll_pane_cp06_ParamLimits

0xc34e,	// (0x0008529b) sp_fs_scroll_pane_cp06

0xaa61,	// (0x000839ae) bgmain_sp_fs_calendar_pane_g1

0x0ce1,	// (0x00079c2e) list_single_cale_mrui_pane_ParamLimits

0x0ce1,	// (0x00079c2e) list_single_cale_mrui_pane

0xc362,	// (0x000852af) list_single_cale_mrui_row_pane_ParamLimits

0xc362,	// (0x000852af) list_single_cale_mrui_row_pane

0xc36f,	// (0x000852bc) list_single_cale_mrui_row_pane_g1_ParamLimits

0xc36f,	// (0x000852bc) list_single_cale_mrui_row_pane_g1

0xc3b4,	// (0x00085301) list_single_cale_mrui_row_pane_t1_ParamLimits

0xc3b4,	// (0x00085301) list_single_cale_mrui_row_pane_t1

0x0d01,	// (0x00079c4e) list_single_cale_mrui_row_pane_t2_ParamLimits

0x0d01,	// (0x00079c4e) list_single_cale_mrui_row_pane_t2

0xc3c6,	// (0x00085313) list_single_cale_mrui_row_pane_t3_ParamLimits

0xc3c6,	// (0x00085313) list_single_cale_mrui_row_pane_t3

0xc3f5,	// (0x00085342) list_single_cale_mrui_row_pane_t4_ParamLimits

0xc3f5,	// (0x00085342) list_single_cale_mrui_row_pane_t4

0x0003,

0xfc1b,	// (0x00088b68) list_single_cale_mrui_row_pane_t_ParamLimits

0xfc1b,	// (0x00088b68) list_single_cale_mrui_row_pane_t

0x0d69,	// (0x00079cb6) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x0d69,	// (0x00079cb6) list_single_cmail_header_editor_pane_bg_cp01

0x0d97,	// (0x00079ce4) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x0d97,	// (0x00079ce4) list_single_cmail_header_editor_pane_bg_cp02

0xc424,	// (0x00085371) main_radioblah_text_pane_t1_ParamLimits

0xc424,	// (0x00085371) main_radioblah_text_pane_t1

0xc43e,	// (0x0008538b) cam6_indi_pane_cp01

0xc446,	// (0x00085393) cam6_mode_pane_cp01

0xc44e,	// (0x0008539b) cam6_pano_pane

0xc457,	// (0x000853a4) cam6_zoom_pane_cp01

0xc45f,	// (0x000853ac) cam6_pano_image_pane

0xc46a,	// (0x000853b7) cam6_pano_pane_g1

0x7d7e,	// (0x00080ccb) cam6_pano_pane_g2

0xc473,	// (0x000853c0) cam6_pano_pane_g3

0xc47c,	// (0x000853c9) cam6_pano_pane_g4

0xee7c,	// (0x00087dc9) cam6_pano_pane_g5

0xc485,	// (0x000853d2) cam6_pano_pane_g6

0xc48f,	// (0x000853dc) cam6_pano_pane_g7

0xc497,	// (0x000853e4) cam6_pano_pane_g8

0xc4a0,	// (0x000853ed) cam6_pano_pane_g9

0x0008,

0xfc24,	// (0x00088b71) cam6_pano_pane_g

0xa2ad,	// (0x000831fa) main_browser_tag_pane

0xc21b,	// (0x00085168) grid_navstr_albumart_pane

0xc4ab,	// (0x000853f8) cell_navstr_albumart_pane_ParamLimits

0xc4ab,	// (0x000853f8) cell_navstr_albumart_pane

0xc4cb,	// (0x00085418) cell_navstr_albumart_pane_g1

0xc4d3,	// (0x00085420) cell_navstr_albumart_pane_g2

0xc4db,	// (0x00085428) cell_navstr_albumart_pane_g3

0xc4e3,	// (0x00085430) cell_navstr_albumart_pane_g4

0x0003,

0xfc37,	// (0x00088b84) cell_navstr_albumart_pane_g

0x87ef,	// (0x0008173c) bt_list_pane_ParamLimits

0x87ef,	// (0x0008173c) bt_list_pane

0x8803,	// (0x00081750) bt_list_pane_t1

0x8812,	// (0x0008175f) bt_list_pane_t2

0x0001,

0xfc40,	// (0x00088b8d) bt_list_pane_t

0xa2ad,	// (0x000831fa) main_cale_prevew_pane

0x8821,	// (0x0008176e) popup_cale_preview_window_ParamLimits

0x8821,	// (0x0008176e) popup_cale_preview_window

0xa324,	// (0x00083271) bg_popup_preview_window_pane_cp05_ParamLimits

0xa324,	// (0x00083271) bg_popup_preview_window_pane_cp05

0xc4eb,	// (0x00085438) list_cale_preview_pane_ParamLimits

0xc4eb,	// (0x00085438) list_cale_preview_pane

0x883c,	// (0x00081789) list_double_cale_preview_pane_ParamLimits

0x883c,	// (0x00081789) list_double_cale_preview_pane

0x884e,	// (0x0008179b) list_single_cale_preview_pane_ParamLimits

0x884e,	// (0x0008179b) list_single_cale_preview_pane

0x8864,	// (0x000817b1) list_single_cale_preview_pane_g1

0x886c,	// (0x000817b9) list_single_cale_preview_pane_t1_ParamLimits

0x886c,	// (0x000817b9) list_single_cale_preview_pane_t1

0x8881,	// (0x000817ce) list_double_cale_preview_pane_g1

0x8889,	// (0x000817d6) list_double_cale_preview_pane_t1_ParamLimits

0x8889,	// (0x000817d6) list_double_cale_preview_pane_t1

0x889e,	// (0x000817eb) list_double_cale_preview_pane_t2_ParamLimits

0x889e,	// (0x000817eb) list_double_cale_preview_pane_t2

0x0001,

0xfc45,	// (0x00088b92) list_double_cale_preview_pane_t_ParamLimits

0xfc45,	// (0x00088b92) list_double_cale_preview_pane_t

0xa2ad,	// (0x000831fa) main_ezdial_pane

0xa324,	// (0x00083271) main_sp_fs_email_pane_ParamLimits

0x8444,	// (0x00081391) cmail_ddmenu_btn01_pane_ParamLimits

0x8444,	// (0x00081391) cmail_ddmenu_btn01_pane

0x8457,	// (0x000813a4) cmail_ddmenu_btn02_pane_ParamLimits

0x8457,	// (0x000813a4) cmail_ddmenu_btn02_pane

0x847a,	// (0x000813c7) cmail_ddmenu_btn03_pane_ParamLimits

0x847a,	// (0x000813c7) cmail_ddmenu_btn03_pane

0x8513,	// (0x00081460) main_sp_fs_ctrlbar_pane_ParamLimits

0x8537,	// (0x00081484) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x869d,	// (0x000815ea) list_cmail_body_pane_ParamLimits

0xc16b,	// (0x000850b8) bg_button_pane_cp12

0xc174,	// (0x000850c1) list_single_cmail_header_detail_pane_g3_ParamLimits

0xc174,	// (0x000850c1) list_single_cmail_header_detail_pane_g3

0xc181,	// (0x000850ce) list_single_cmail_header_detail_pane_t2_ParamLimits

0xc181,	// (0x000850ce) list_single_cmail_header_detail_pane_t2

0x0001,

0xfbdc,	// (0x00088b29) list_single_cmail_header_detail_pane_t_ParamLimits

0xfbdc,	// (0x00088b29) list_single_cmail_header_detail_pane_t

0xc283,	// (0x000851d0) phacti_term_pane_t2_ParamLimits

0xc283,	// (0x000851d0) phacti_term_pane_t2

0x0001,

0xfbeb,	// (0x00088b38) phacti_term_pane_t_ParamLimits

0xfbeb,	// (0x00088b38) phacti_term_pane_t

0xc4f7,	// (0x00085444) aid_size_list_single_double

0x88b6,	// (0x00081803) popup_ezdial_listscroll_window

0xc503,	// (0x00085450) popup_number_entry_window_cp01

0xad1e,	// (0x00083c6b) bg_popup_call_pane_cp09

0xc510,	// (0x0008545d) ezdial_list_pane

0xc518,	// (0x00085465) scroll_pane_cp23

0xd242,	// (0x0008618f) bg_button_pane_cp028_ParamLimits

0xd242,	// (0x0008618f) bg_button_pane_cp028

0x88cd,	// (0x0008181a) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x88cd,	// (0x0008181a) cmail_ddmenu_btn01_pane_g1

0x88d9,	// (0x00081826) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x88d9,	// (0x00081826) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfc4a,	// (0x00088b97) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfc4a,	// (0x00088b97) cmail_ddmenu_btn01_pane_g

0xc520,	// (0x0008546d) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xc520,	// (0x0008546d) cmail_ddmenu_btn01_pane_t1

0xd242,	// (0x0008618f) bg_button_pane_cp029_ParamLimits

0xd242,	// (0x0008618f) bg_button_pane_cp029

0x88ed,	// (0x0008183a) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x88ed,	// (0x0008183a) cmail_ddmenu_btn02_pane_g1

0x8905,	// (0x00081852) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8905,	// (0x00081852) cmail_ddmenu_btn02_pane_t1

0xa324,	// (0x00083271) bg_button_pane_cp031_ParamLimits

0xa324,	// (0x00083271) bg_button_pane_cp031

0x88ed,	// (0x0008183a) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x88ed,	// (0x0008183a) cmail_ddmenu_btn03_pane_g1

0x8905,	// (0x00081852) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8905,	// (0x00081852) cmail_ddmenu_btn03_pane_t1

0xaa6b,	// (0x000839b8) cell_dialer2_keypad_pane_t1_ParamLimits

0xeeba,	// (0x00087e07) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xeeba,	// (0x00087e07) cell_dialer2_keypad_pane_t1_copy1

0x798e,	// (0x000808db) ncimui_group_button_pane

0xa324,	// (0x00083271) main_sp_fs_calendar_pane_ParamLimits

0x86b2,	// (0x000815ff) list_single_cmail_header_caption_pane_ParamLimits

0xc2c6,	// (0x00085213) aid_recal_txt_sm_pane

0xa2ad,	// (0x000831fa) mian_recal_day_pane

0xc315,	// (0x00085262) popup_sp_fs_cale_preview_window_ParamLimits

0xc536,	// (0x00085483) list_recal_day_pane

0xc578,	// (0x000854c5) list_single_recal_day_pane_ParamLimits

0xc578,	// (0x000854c5) list_single_recal_day_pane

0xc58a,	// (0x000854d7) list_single_recal_day_pane_g1_ParamLimits

0xc58a,	// (0x000854d7) list_single_recal_day_pane_g1

0xc596,	// (0x000854e3) list_single_recal_day_pane_g2_ParamLimits

0xc596,	// (0x000854e3) list_single_recal_day_pane_g2

0xc5a2,	// (0x000854ef) list_single_recal_day_pane_g3_ParamLimits

0xc5a2,	// (0x000854ef) list_single_recal_day_pane_g3

0x0db7,	// (0x00079d04) list_single_recal_day_pane_g4_ParamLimits

0x0db7,	// (0x00079d04) list_single_recal_day_pane_g4

0xc5ae,	// (0x000854fb) list_single_recal_day_pane_g5_ParamLimits

0xc5ae,	// (0x000854fb) list_single_recal_day_pane_g5

0xc5ba,	// (0x00085507) list_single_recal_day_pane_g6_ParamLimits

0xc5ba,	// (0x00085507) list_single_recal_day_pane_g6

0x0004,

0xfc59,	// (0x00088ba6) list_single_recal_day_pane_g_ParamLimits

0xfc59,	// (0x00088ba6) list_single_recal_day_pane_g

0xc5ce,	// (0x0008551b) list_single_recal_day_pane_t1

0xc5e0,	// (0x0008552d) list_single_recal_day_pane_t2

0x0001,

0xfc64,	// (0x00088bb1) list_single_recal_day_pane_t

0x8929,	// (0x00081876) ncimui_query_button_pane_ParamLimits

0x8929,	// (0x00081876) ncimui_query_button_pane

0x8939,	// (0x00081886) ncimui_query_button_pane_t1_ParamLimits

0x8939,	// (0x00081886) ncimui_query_button_pane_t1

0xc5f2,	// (0x0008553f) ncimui_query_button_pane_t2_ParamLimits

0xc5f2,	// (0x0008553f) ncimui_query_button_pane_t2

0x0001,

0xfc69,	// (0x00088bb6) ncimui_query_button_pane_t_ParamLimits

0xfc69,	// (0x00088bb6) ncimui_query_button_pane_t

0x894c,	// (0x00081899) query_button_pane_ParamLimits

0x894c,	// (0x00081899) query_button_pane

0xa2ad,	// (0x000831fa) bg_button_pane_cp0028

0xc605,	// (0x00085552) query_button_pane_t1

0x39eb,	// (0x0007c938) main_tport_pane_ParamLimits

0x8561,	// (0x000814ae) bg_popup_window_pane_cp01_ParamLimits

0x8561,	// (0x000814ae) bg_popup_window_pane_cp01

0x857c,	// (0x000814c9) heading_pane_cp08_ParamLimits

0x857c,	// (0x000814c9) heading_pane_cp08

0x858f,	// (0x000814dc) heading_pane_cp07_ParamLimits

0x858f,	// (0x000814dc) heading_pane_cp07

0x8636,	// (0x00081583) cell_tport_appsw_pane_g2

0x0002,

0xfbc9,	// (0x00088b16) cell_tport_appsw_pane_g

0x09a3,	// (0x000798f0) input_candi_list_open_g1

0xb0f2,	// (0x0008403f) list_cale_time_pane_g6_ParamLimits

0xb0f2,	// (0x0008403f) list_cale_time_pane_g6

0x4020,	// (0x0007cf6d) aid_size_touch_calib_1_ParamLimits

0x4020,	// (0x0007cf6d) aid_size_touch_calib_1

0x4032,	// (0x0007cf7f) aid_size_touch_calib_2_ParamLimits

0x4032,	// (0x0007cf7f) aid_size_touch_calib_2

0x404a,	// (0x0007cf97) aid_size_touch_calib_3_ParamLimits

0x404a,	// (0x0007cf97) aid_size_touch_calib_3

0x4068,	// (0x0007cfb5) aid_size_touch_calib_4_ParamLimits

0x4068,	// (0x0007cfb5) aid_size_touch_calib_4

0x4080,	// (0x0007cfcd) main_touch_calib_button_group_pane_ParamLimits

0x4080,	// (0x0007cfcd) main_touch_calib_button_group_pane

0x4098,	// (0x0007cfe5) main_touch_calib_pane_g1_ParamLimits

0x40aa,	// (0x0007cff7) main_touch_calib_pane_g2_ParamLimits

0x40bc,	// (0x0007d009) main_touch_calib_pane_g3_ParamLimits

0x40ce,	// (0x0007d01b) main_touch_calib_pane_g4_ParamLimits

0xf642,	// (0x0008858f) main_touch_calib_pane_g_ParamLimits

0x40e0,	// (0x0007d02d) main_touch_calib_pane_t1_ParamLimits

0x40fa,	// (0x0007d047) main_touch_calib_pane_t2_ParamLimits

0x4114,	// (0x0007d061) main_touch_calib_pane_t3_ParamLimits

0x4128,	// (0x0007d075) main_touch_calib_pane_t4_ParamLimits

0x413c,	// (0x0007d089) main_touch_calib_pane_t5_ParamLimits

0xf64b,	// (0x00088598) main_touch_calib_pane_t_ParamLimits

0xec49,	// (0x00087b96) list_single_fp_cale_pane_g3_ParamLimits

0xec49,	// (0x00087b96) list_single_fp_cale_pane_g3

0xa324,	// (0x00083271) bg_button_pane_cp012_ParamLimits

0xa324,	// (0x00083271) bg_vkb2_func_pane_cp03_ParamLimits

0x634e,	// (0x0007f29b) cell_vitu2_function_top_pane_g1_ParamLimits

0xa324,	// (0x00083271) bg_vkb2_func_pane_cp04_ParamLimits

0x7919,	// (0x00080866) main_ncimui_button_group_pane_ParamLimits

0x7919,	// (0x00080866) main_ncimui_button_group_pane

0x7979,	// (0x000808c6) main_ncimui_pane_t3_ParamLimits

0x7979,	// (0x000808c6) main_ncimui_pane_t3

0xc231,	// (0x0008517e) phacti_button_group_pane

0xc4f7,	// (0x00085444) aid_size_list_single_double_ParamLimits

0x88b6,	// (0x00081803) popup_ezdial_listscroll_window_ParamLimits

0xc503,	// (0x00085450) popup_number_entry_window_cp01_ParamLimits

0x895f,	// (0x000818ac) phacti_button_pane_ParamLimits

0x895f,	// (0x000818ac) phacti_button_pane

0xa2ad,	// (0x000831fa) bg_button_pane_cp14

0xc613,	// (0x00085560) phacti_button_pane_t1

0x8970,	// (0x000818bd) main_touch_calib_button_pane_ParamLimits

0x8970,	// (0x000818bd) main_touch_calib_button_pane

0xaad9,	// (0x00083a26) bg_button_pane_cp18_ParamLimits

0xaad9,	// (0x00083a26) bg_button_pane_cp18

0xc621,	// (0x0008556e) main_touch_calib_button_pane_t1_ParamLimits

0xc621,	// (0x0008556e) main_touch_calib_button_pane_t1

0xc637,	// (0x00085584) main_touch_calib_button_pane_t2_ParamLimits

0xc637,	// (0x00085584) main_touch_calib_button_pane_t2

0x0001,

0xfc6e,	// (0x00088bbb) main_touch_calib_button_pane_t_ParamLimits

0xfc6e,	// (0x00088bbb) main_touch_calib_button_pane_t

0xa2ad,	// (0x000831fa) cell_ncimui_button_pane

0xa2ad,	// (0x000831fa) bg_button_pane_cp032

0xc655,	// (0x000855a2) cell_ncimui_button_pane_t1

0xbc0e,	// (0x00084b5b) image3_infobar_pane_ParamLimits

0xbc0e,	// (0x00084b5b) image3_infobar_pane

0x800b,	// (0x00080f58) fs_bigclock_status_pane_ParamLimits

0x800b,	// (0x00080f58) fs_bigclock_status_pane

0x8018,	// (0x00080f65) main_fs_bigclock_clock_pane_ParamLimits

0x8018,	// (0x00080f65) main_fs_bigclock_clock_pane

0x8036,	// (0x00080f83) main_fs_bigclock_indi_pane_ParamLimits

0x8036,	// (0x00080f83) main_fs_bigclock_indi_pane

0x8068,	// (0x00080fb5) main_fs_bigclock_swipe_pane_ParamLimits

0x8068,	// (0x00080fb5) main_fs_bigclock_swipe_pane

0xa2ad,	// (0x000831fa) main_fs_clock_dumped_data

0x80a7,	// (0x00080ff4) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x80a7,	// (0x00080ff4) list_single_fs_bigclock_indicator_pane_g1

0x80c2,	// (0x0008100f) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x80c2,	// (0x0008100f) list_single_fs_bigclock_indicator_pane_g2

0x80dc,	// (0x00081029) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x80dc,	// (0x00081029) list_single_fs_bigclock_indicator_pane_g3

0x80f6,	// (0x00081043) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x80f6,	// (0x00081043) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfb22,	// (0x00088a6f) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfb22,	// (0x00088a6f) list_single_fs_bigclock_indicator_pane_g

0x8121,	// (0x0008106e) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x8121,	// (0x0008106e) list_single_fs_bigclock_indicator_pane_t1

0x8149,	// (0x00081096) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x8149,	// (0x00081096) list_single_fs_bigclock_indicator_pane_t2

0x8171,	// (0x000810be) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x8171,	// (0x000810be) list_single_fs_bigclock_indicator_pane_t3

0x8199,	// (0x000810e6) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x8199,	// (0x000810e6) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfb2d,	// (0x00088a7a) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfb2d,	// (0x00088a7a) list_single_fs_bigclock_indicator_pane_t

0xc663,	// (0x000855b0) image3_infobar_fav_pane_ParamLimits

0xc663,	// (0x000855b0) image3_infobar_fav_pane

0xc673,	// (0x000855c0) image3_infobar_loc_pane_ParamLimits

0xc673,	// (0x000855c0) image3_infobar_loc_pane

0xc687,	// (0x000855d4) image3_infobar_time_pane_ParamLimits

0xc687,	// (0x000855d4) image3_infobar_time_pane

0xaa61,	// (0x000839ae) image3_infobar_time_pane_g1

0xc697,	// (0x000855e4) image3_infobar_time_pane_t1

0xaa61,	// (0x000839ae) image3_infobar_loc_pane_g1

0xc6a5,	// (0x000855f2) image3_infobar_loc_pane_g2

0x0001,

0xfc73,	// (0x00088bc0) image3_infobar_loc_pane_g

0xc6ad,	// (0x000855fa) image3_infobar_loc_pane_t1

0xaa61,	// (0x000839ae) image3_infobar_fav_pane_g1

0xc6bb,	// (0x00085608) image3_infobar_fav_pane_g2

0x0001,

0xfc78,	// (0x00088bc5) image3_infobar_fav_pane_g

0xc6c3,	// (0x00085610) fs_bigclock_status_battery_pane

0xc6cc,	// (0x00085619) fs_bigclock_status_signal_pane

0xc6d5,	// (0x00085622) fs_bigclock_status_title_pane

0xc6de,	// (0x0008562b) fs_bigclock_status_signal_pane_g1

0xc6e7,	// (0x00085634) fs_bigclock_status_signal_pane_g2

0x0001,

0xfc7d,	// (0x00088bca) fs_bigclock_status_signal_pane_g

0xc6ef,	// (0x0008563c) fs_bigclock_status_battery_pane_g1

0xc6f8,	// (0x00085645) fs_bigclock_status_battery_pane_g2

0x0001,

0xfc82,	// (0x00088bcf) fs_bigclock_status_battery_pane_g

0xc700,	// (0x0008564d) fs_bigclock_status_title_pane_t1

0x8985,	// (0x000818d2) main_fs_bigclock_clock_pane_g1

0x8985,	// (0x000818d2) main_fs_bigclock_clock_pane_g2

0x8985,	// (0x000818d2) main_fs_bigclock_clock_pane_g3

0x8985,	// (0x000818d2) main_fs_bigclock_clock_pane_g4

0x0003,

0xfc87,	// (0x00088bd4) main_fs_bigclock_clock_pane_g

0x8998,	// (0x000818e5) main_fs_bigclock_clock_pane_t1

0x89b1,	// (0x000818fe) main_fs_bigclock_clock_pane_t2

0x0001,

0xfc90,	// (0x00088bdd) main_fs_bigclock_clock_pane_t

0xc70e,	// (0x0008565b) list_single_fs_bigclock_indicator_pane_ParamLimits

0xc70e,	// (0x0008565b) list_single_fs_bigclock_indicator_pane

0xc71f,	// (0x0008566c) list_single_fs_bigclock_pane_ParamLimits

0xc71f,	// (0x0008566c) list_single_fs_bigclock_pane

0xc745,	// (0x00085692) main_fs_bigclock_indicator_pane_t1

0xc754,	// (0x000856a1) list_single_fs_bigclock_pane_g1

0xc75c,	// (0x000856a9) list_single_fs_bigclock_pane_t1

0xaa61,	// (0x000839ae) main_fs_bigclock_swipe_pane_g1

0xc79f,	// (0x000856ec) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfca1,	// (0x00088bee) main_fs_bigclock_swipe_pane_g

0xc7a7,	// (0x000856f4) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xc7a7,	// (0x000856f4) main_fs_bigclock_swipe_pane_t1

0x2c17,	// (0x0007bb64) call_type_pane_ParamLimits

0xa2ad,	// (0x000831fa) main_btmg_pane

0xc39b,	// (0x000852e8) list_single_cale_mrui_row_pane_g2_ParamLimits

0xc39b,	// (0x000852e8) list_single_cale_mrui_row_pane_g2

0x0002,

0xfc14,	// (0x00088b61) list_single_cale_mrui_row_pane_g_ParamLimits

0xfc14,	// (0x00088b61) list_single_cale_mrui_row_pane_g

0xc55f,	// (0x000854ac) list_recal_vselct_arw_lo_pane

0xc567,	// (0x000854b4) list_recal_vselct_arw_up_pane

0xc56f,	// (0x000854bc) list_recal_vselct_pane

0x8a0b,	// (0x00081958) btmg_button_pane

0x8a15,	// (0x00081962) main_btmg_pane_g1

0xa2ad,	// (0x000831fa) bg_button_pane_cp044

0xc7c4,	// (0x00085711) btmg_button_pane_t1

0xe4ca,	// (0x00087417) aid_listscroll_gen

0xa324,	// (0x00083271) main_cntbar_detail_pane

0xc13e,	// (0x0008508b) list_cmail_folder_pane

0xe0d1,	// (0x0008701e) sp_fs_scroll_pane_cp03_ParamLimits

0x0dcf,	// (0x00079d1c) list_single_fs_dyc_pane_cp01_ParamLimits

0x0dcf,	// (0x00079d1c) list_single_fs_dyc_pane_cp01

0xc7d2,	// (0x0008571f) aid_size_cmail_indent

0xc7db,	// (0x00085728) list_single_dyc_row_pane_cp01

0x8a4b,	// (0x00081998) cntbar_detail_list_pane_ParamLimits

0x8a4b,	// (0x00081998) cntbar_detail_list_pane

0x8a97,	// (0x000819e4) main_cntbar_detail_cont_pane_ParamLimits

0x8a97,	// (0x000819e4) main_cntbar_detail_cont_pane

0xe0d1,	// (0x0008701e) scroll_pane_cp032_ParamLimits

0xe0d1,	// (0x0008701e) scroll_pane_cp032

0x8aab,	// (0x000819f8) cntbar_detail_list_event_pane_ParamLimits

0x8aab,	// (0x000819f8) cntbar_detail_list_event_pane

0x8a5b,	// (0x000819a8) cntbar_detail_list_shct_pane

0xaf8f,	// (0x00083edc) aid_list_gen

0xc7e4,	// (0x00085731) aid_scroll

0xc7ed,	// (0x0008573a) aid_size_touch_scroll_bar

0x828c,	// (0x000811d9) aid_list_double

0xc7f6,	// (0x00085743) aid_list_single

0xc7f6,	// (0x00085743) aid_list_single_lg

0xc7ff,	// (0x0008574c) aid_list_z_g_a_sm

0xd6d3,	// (0x00086620) aid_list_z_g_d

0xc807,	// (0x00085754) aid_txt_z_prm

0x0de4,	// (0x00079d31) aid_txt_z_prm_cp01

0x0df2,	// (0x00079d3f) aid_txt_z_sec

0x8abb,	// (0x00081a08) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8abb,	// (0x00081a08) main_cntbar_detail_cont_pane_g1

0x8acf,	// (0x00081a1c) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8acf,	// (0x00081a1c) main_cntbar_detail_cont_pane_g2

0x0001,

0xfca6,	// (0x00088bf3) main_cntbar_detail_cont_pane_g_ParamLimits

0xfca6,	// (0x00088bf3) main_cntbar_detail_cont_pane_g

0xc815,	// (0x00085762) main_cntbar_detail_cont_pane_t1

0xc823,	// (0x00085770) main_cntbar_detail_cont_pane_t2

0xc831,	// (0x0008577e) main_cntbar_detail_cont_pane_t3

0x0002,

0xfcab,	// (0x00088bf8) main_cntbar_detail_cont_pane_t

0x8adf,	// (0x00081a2c) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8adf,	// (0x00081a2c) cell_cntbar_detail_list_shct_pane

0xc83f,	// (0x0008578c) cntbar_detail_list_shct_pane_g1

0xc848,	// (0x00085795) cntbar_detail_list_shct_pane_g2

0x0001,

0xfcb2,	// (0x00088bff) cntbar_detail_list_shct_pane_g

0x8af3,	// (0x00081a40) cntbar_detail_list_event_pane_g1_ParamLimits

0x8af3,	// (0x00081a40) cntbar_detail_list_event_pane_g1

0x8aff,	// (0x00081a4c) cntbar_detail_list_event_pane_g2_ParamLimits

0x8aff,	// (0x00081a4c) cntbar_detail_list_event_pane_g2

0x0005,

0xfcb7,	// (0x00088c04) cntbar_detail_list_event_pane_g_ParamLimits

0xfcb7,	// (0x00088c04) cntbar_detail_list_event_pane_g

0x8b6b,	// (0x00081ab8) cntbar_detail_list_event_pane_t1_ParamLimits

0x8b6b,	// (0x00081ab8) cntbar_detail_list_event_pane_t1

0x8b80,	// (0x00081acd) cntbar_detail_list_event_pane_t2_ParamLimits

0x8b80,	// (0x00081acd) cntbar_detail_list_event_pane_t2

0x0002,

0xfcc4,	// (0x00088c11) cntbar_detail_list_event_pane_t_ParamLimits

0xfcc4,	// (0x00088c11) cntbar_detail_list_event_pane_t

0xaa61,	// (0x000839ae) cell_cntbar_detail_list_shct_pane_g1

0xb76c,	// (0x000846b9) navi_pane_mv_g3

0xa324,	// (0x00083271) main_cntbar_detail_pane_ParamLimits

0xa2ad,	// (0x000831fa) main_notif_wgt_pane

0xb98e,	// (0x000848db) aid_tch_main_mp4_pane_g4

0xbc06,	// (0x00084b53) popup_slider_window_cp02

0xc555,	// (0x000854a2) list_recal_day_event_pane

0x8a1f,	// (0x0008196c) cntbar_detail_btn_pane_ParamLimits

0x8a1f,	// (0x0008196c) cntbar_detail_btn_pane

0x8a35,	// (0x00081982) cntbar_detail_btn_pane_cp01_ParamLimits

0x8a35,	// (0x00081982) cntbar_detail_btn_pane_cp01

0x8a5b,	// (0x000819a8) cntbar_detail_list_shct_pane_ParamLimits

0x8a6b,	// (0x000819b8) cntbar_detail_pane_g1_ParamLimits

0x8a6b,	// (0x000819b8) cntbar_detail_pane_g1

0x8a7b,	// (0x000819c8) cntbar_detail_pane_t1_ParamLimits

0x8a7b,	// (0x000819c8) cntbar_detail_pane_t1

0x8b0b,	// (0x00081a58) cntbar_detail_list_event_pane_g3_ParamLimits

0x8b0b,	// (0x00081a58) cntbar_detail_list_event_pane_g3

0x8b23,	// (0x00081a70) cntbar_detail_list_event_pane_g4_ParamLimits

0x8b23,	// (0x00081a70) cntbar_detail_list_event_pane_g4

0x8b3b,	// (0x00081a88) cntbar_detail_list_event_pane_g5_ParamLimits

0x8b3b,	// (0x00081a88) cntbar_detail_list_event_pane_g5

0x8b53,	// (0x00081aa0) cntbar_detail_list_event_pane_g6_ParamLimits

0x8b53,	// (0x00081aa0) cntbar_detail_list_event_pane_g6

0x8b95,	// (0x00081ae2) cntbar_detail_list_event_pane_t3_ParamLimits

0x8b95,	// (0x00081ae2) cntbar_detail_list_event_pane_t3

0x8ba7,	// (0x00081af4) popup_notif_wgt_window_ParamLimits

0x8ba7,	// (0x00081af4) popup_notif_wgt_window

0x8bc0,	// (0x00081b0d) popup_submenu_window_cp01_ParamLimits

0x8bc0,	// (0x00081b0d) popup_submenu_window_cp01

0xad1e,	// (0x00083c6b) bg_popup_window_pane_cp10

0xc851,	// (0x0008579e) listscroll_notif_wgt_pane

0xc863,	// (0x000857b0) list_notif_wgt_window

0xc86c,	// (0x000857b9) scroll_pane_cp033

0x8bd6,	// (0x00081b23) list_notif_wgt_row_pane_ParamLimits

0x8bd6,	// (0x00081b23) list_notif_wgt_row_pane

0xc875,	// (0x000857c2) aid_size_list_notif_wgt_del

0xc882,	// (0x000857cf) list_notif_wgt_row_pane_g1

0xc88e,	// (0x000857db) list_notif_wgt_row_pane_g2

0xc89d,	// (0x000857ea) list_notif_wgt_row_pane_g3

0x0002,

0xfccb,	// (0x00088c18) list_notif_wgt_row_pane_g

0xc8aa,	// (0x000857f7) list_notif_wgt_row_pane_t1

0xc8c0,	// (0x0008580d) list_notif_wgt_row_pane_t2

0xc8d2,	// (0x0008581f) list_notif_wgt_row_pane_t3

0x0002,

0xfcd2,	// (0x00088c1f) list_notif_wgt_row_pane_t

0x63e2,	// (0x0007f32f) list_recal_day_event_pane_g1

0xc8e4,	// (0x00085831) list_recal_day_event_pane_t1

0xa2ad,	// (0x000831fa) bg_button_pane_cp045

0xc8f3,	// (0x00085840) cntbar_detail_btn_pane_t1

0xd242,	// (0x0008618f) main_callh_pane_ParamLimits

0xd242,	// (0x0008618f) main_callh_pane

0xa2ad,	// (0x000831fa) main_coverflow0_pane

0xa2ad,	// (0x000831fa) main_wgtman_pane

0x8080,	// (0x00080fcd) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x8080,	// (0x00080fcd) main_fs_bigclock_unlock_btn_pane

0x862e,	// (0x0008157b) bg_button_pane_cp16

0x863e,	// (0x0008158b) cell_tport_appsw_pane_g3

0x8be6,	// (0x00081b33) cf0_flow_pane_ParamLimits

0x8be6,	// (0x00081b33) cf0_flow_pane

0xc901,	// (0x0008584e) listscroll_cf0_pane

0xc90c,	// (0x00085859) main_cf0_pane_g1

0x8bfb,	// (0x00081b48) main_cf0_pane_t1_ParamLimits

0x8bfb,	// (0x00081b48) main_cf0_pane_t1

0x8c12,	// (0x00081b5f) main_cf0_pane_t2_ParamLimits

0x8c12,	// (0x00081b5f) main_cf0_pane_t2

0x0001,

0xfcde,	// (0x00088c2b) main_cf0_pane_t_ParamLimits

0xfcde,	// (0x00088c2b) main_cf0_pane_t

0xc91e,	// (0x0008586b) scroll_pane_cp11

0x8c29,	// (0x00081b76) cf0_flow_pane_g1

0x8c31,	// (0x00081b7e) cf0_flow_pane_g2

0x0001,

0xfce3,	// (0x00088c30) cf0_flow_pane_g

0x8c39,	// (0x00081b86) cf0_flow_pane_t1

0xa2ad,	// (0x000831fa) main_call6_pane

0xa2ad,	// (0x000831fa) main_calllock_pane

0x8c47,	// (0x00081b94) call6_btn_grp_pane_ParamLimits

0x8c47,	// (0x00081b94) call6_btn_grp_pane

0x8c61,	// (0x00081bae) call6_pane_g1_ParamLimits

0x8c61,	// (0x00081bae) call6_pane_g1

0x8c77,	// (0x00081bc4) popup_call6_1st_window_ParamLimits

0x8c77,	// (0x00081bc4) popup_call6_1st_window

0x8c88,	// (0x00081bd5) popup_call6_2nd_window_ParamLimits

0x8c88,	// (0x00081bd5) popup_call6_2nd_window

0x8c99,	// (0x00081be6) cell_call6_btn_pane_ParamLimits

0x8c99,	// (0x00081be6) cell_call6_btn_pane

0xad1e,	// (0x00083c6b) bg_popup_call2_in_pane_cp03

0xc929,	// (0x00085876) popup_call6_1st_window_g1

0xc931,	// (0x0008587e) popup_call6_1st_window_g2

0xc939,	// (0x00085886) popup_call6_1st_window_g3

0x0002,

0xfce8,	// (0x00088c35) popup_call6_1st_window_g

0xc941,	// (0x0008588e) popup_call6_1st_window_t1

0xc950,	// (0x0008589d) popup_call6_1st_window_t2

0xc95e,	// (0x000858ab) popup_call6_1st_window_t3

0x0002,

0xfcef,	// (0x00088c3c) popup_call6_1st_window_t

0xad1e,	// (0x00083c6b) bg_popup_call2_in_pane_cp04

0xc96c,	// (0x000858b9) popup_call6_2nd_window_g1

0xc974,	// (0x000858c1) popup_call6_2nd_window_g2

0xc97c,	// (0x000858c9) popup_call6_2nd_window_g3

0x0002,

0xfcf6,	// (0x00088c43) popup_call6_2nd_window_g

0xc984,	// (0x000858d1) popup_call6_2nd_window_t1

0xa2ad,	// (0x000831fa) bg_button_pane_cp15

0xc993,	// (0x000858e0) cell_call6_btn_pane_g1

0xc99c,	// (0x000858e9) cell_call6_btn_pane_t1

0x8cac,	// (0x00081bf9) listscroll_wgtman_pane_ParamLimits

0x8cac,	// (0x00081bf9) listscroll_wgtman_pane

0x8ccd,	// (0x00081c1a) wgtman_btn_pane_ParamLimits

0x8ccd,	// (0x00081c1a) wgtman_btn_pane

0xb573,	// (0x000844c0) aid_scroll_copy1

0xc9ab,	// (0x000858f8) list_wgtman_pane

0x8d10,	// (0x00081c5d) wgtman_btn_pane_g1_ParamLimits

0x8d10,	// (0x00081c5d) wgtman_btn_pane_g1

0x8d3c,	// (0x00081c89) wgtman_btn_pane_t1_ParamLimits

0x8d3c,	// (0x00081c89) wgtman_btn_pane_t1

0xc9b5,	// (0x00085902) wgtman_btn_pane_t2_ParamLimits

0xc9b5,	// (0x00085902) wgtman_btn_pane_t2

0x0001,

0xfcfd,	// (0x00088c4a) wgtman_btn_pane_t_ParamLimits

0xfcfd,	// (0x00088c4a) wgtman_btn_pane_t

0x8d79,	// (0x00081cc6) listrow_wgtman_pane_ParamLimits

0x8d79,	// (0x00081cc6) listrow_wgtman_pane

0x8d8b,	// (0x00081cd8) listrow_wgtman_pane_g1

0x8d98,	// (0x00081ce5) listrow_wgtman_pane_g2

0x0001,

0xfd02,	// (0x00088c4f) listrow_wgtman_pane_g

0x0e00,	// (0x00079d4d) listrow_wgtman_pane_t1

0x0e18,	// (0x00079d65) listrow_wgtman_pane_t2

0x0001,

0xfd07,	// (0x00088c54) listrow_wgtman_pane_t

0x0e3e,	// (0x00079d8b) wait_bar_pane_cp09

0xc9cc,	// (0x00085919) main_calllock_btn_pane

0xc9d6,	// (0x00085923) main_calllock_pane_g1

0xa2ad,	// (0x000831fa) bg_button_pane_cp17

0xc993,	// (0x000858e0) main_calllock_btn_pane_g1

0xc9de,	// (0x0008592b) main_calllock_btn_pane_t1

0xa2ad,	// (0x000831fa) main_dialer3_pane

0xa2ad,	// (0x000831fa) main_fmrd2_pane

0xaa61,	// (0x000839ae) main_fs_bigclock_unlock_btn_pane_g1

0x8dbe,	// (0x00081d0b) main_fs_bigclock_unlock_btn_pane_t1

0x8dcc,	// (0x00081d19) area_fmrd2_info_pane_ParamLimits

0x8dcc,	// (0x00081d19) area_fmrd2_info_pane

0x8ddd,	// (0x00081d2a) area_fmrd2_visual_pane_ParamLimits

0x8ddd,	// (0x00081d2a) area_fmrd2_visual_pane

0x8deb,	// (0x00081d38) fmrd2_indi_pane_ParamLimits

0x8deb,	// (0x00081d38) fmrd2_indi_pane

0x8df8,	// (0x00081d45) area_fmrd2_visual_pane_g1

0x8e00,	// (0x00081d4d) area_fmrd2_visual_pane_t1

0x8e10,	// (0x00081d5d) area_fmrd2_visual_pane_t2

0x8e20,	// (0x00081d6d) area_fmrd2_visual_pane_t3

0x0002,

0xfd11,	// (0x00088c5e) area_fmrd2_visual_pane_t

0x8e30,	// (0x00081d7d) area_fmrd2_info_pane_g1

0x8e38,	// (0x00081d85) area_fmrd2_info_pane_t1

0x8e48,	// (0x00081d95) area_fmrd2_info_pane_t2

0x8e58,	// (0x00081da5) area_fmrd2_info_pane_t3

0x8e68,	// (0x00081db5) area_fmrd2_info_pane_t4

0x0003,

0xfd18,	// (0x00088c65) area_fmrd2_info_pane_t

0x8e76,	// (0x00081dc3) fmrd2_indi_pane_t1

0x8e86,	// (0x00081dd3) fmrd2_indi_pane_t2

0x8e96,	// (0x00081de3) fmrd2_indi_pane_t3

0x0002,

0xfd21,	// (0x00088c6e) fmrd2_indi_pane_t

0x8105,	// (0x00081052) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x8105,	// (0x00081052) list_single_fs_bigclock_indicator_pane_g5

0x81b6,	// (0x00081103) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x81b6,	// (0x00081103) list_single_fs_bigclock_indicator_pane_t5

0xbbfa,	// (0x00084b47) aid_cell_bcale_month_pane_ParamLimits

0xbbfa,	// (0x00084b47) aid_cell_bcale_month_pane

0xbbfa,	// (0x00084b47) bcale_month_pane_ParamLimits

0xbbfa,	// (0x00084b47) bcale_month_pane

0xeba0,	// (0x00087aed) bcale_preview_pane_ParamLimits

0xeba0,	// (0x00087aed) bcale_preview_pane

0xc75c,	// (0x000856a9) list_single_fs_bigclock_pane_t1_ParamLimits

0xc77b,	// (0x000856c8) list_single_fs_bigclock_pane_t2_ParamLimits

0xc77b,	// (0x000856c8) list_single_fs_bigclock_pane_t2

0x0001,

0xfc9c,	// (0x00088be9) list_single_fs_bigclock_pane_t_ParamLimits

0xfc9c,	// (0x00088be9) list_single_fs_bigclock_pane_t

0x8db6,	// (0x00081d03) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfd0c,	// (0x00088c59) main_fs_bigclock_unlock_btn_pane_g

0x8ea6,	// (0x00081df3) aid_dia3_key_size_ParamLimits

0x8ea6,	// (0x00081df3) aid_dia3_key_size

0x8eb5,	// (0x00081e02) aid_dia3_listrow_size_ParamLimits

0x8eb5,	// (0x00081e02) aid_dia3_listrow_size

0x8eca,	// (0x00081e17) dia3_keypad_fun_pane_ParamLimits

0x8eca,	// (0x00081e17) dia3_keypad_fun_pane

0x8ee6,	// (0x00081e33) dia3_keypad_num_pane_ParamLimits

0x8ee6,	// (0x00081e33) dia3_keypad_num_pane

0x8f01,	// (0x00081e4e) dia3_listscroll_pane_ParamLimits

0x8f01,	// (0x00081e4e) dia3_listscroll_pane

0x8f14,	// (0x00081e61) dia3_numentry_pane_ParamLimits

0x8f14,	// (0x00081e61) dia3_numentry_pane

0xc9ed,	// (0x0008593a) dia3_list_pane

0xc9f8,	// (0x00085945) scroll_pane_cp12

0xa2ad,	// (0x000831fa) bg_dia3_numentry_pane

0x8f2c,	// (0x00081e79) dia3_numentry_pane_t1

0x8f3b,	// (0x00081e88) cell_dia3_key_num_pane

0x8f43,	// (0x00081e90) cell_dia3_key0_fun_pane_ParamLimits

0x8f43,	// (0x00081e90) cell_dia3_key0_fun_pane

0x8f57,	// (0x00081ea4) cell_dia3_key1_fun_pane_ParamLimits

0x8f57,	// (0x00081ea4) cell_dia3_key1_fun_pane

0x8f6f,	// (0x00081ebc) dia3_listrow_pane

0x7b97,	// (0x00080ae4) bg_dia3_numentry_pane_g1

0xa2ad,	// (0x000831fa) bg_button_pane_cp21

0xca03,	// (0x00085950) cell_dia3_key_num_pane_t1

0xca11,	// (0x0008595e) cell_dia3_key_num_pane_t2

0xca20,	// (0x0008596d) cell_dia3_key_num_pane_t3

0xca2f,	// (0x0008597c) cell_dia3_key_num_pane_t4

0x0003,

0xfd28,	// (0x00088c75) cell_dia3_key_num_pane_t

0xa2ad,	// (0x000831fa) bg_button_pane_cp19

0x8f81,	// (0x00081ece) cell_dia3_key0_fun_pane_g1

0xa2ad,	// (0x000831fa) bg_button_pane_cp20

0x8f89,	// (0x00081ed6) cell_dia3_key1_fun_pane_g1

0xeba0,	// (0x00087aed) area_left_week_number_pane

0xeba0,	// (0x00087aed) area_top_day_name_pane

0xeba0,	// (0x00087aed) frame_month_view_pane

0xeba0,	// (0x00087aed) grid_month_view_pane

0xeba0,	// (0x00087aed) cell_top_day_name_pane_ParamLimits

0xeba0,	// (0x00087aed) cell_top_day_name_pane

0xeba0,	// (0x00087aed) cell_area_left_week_number_pane_ParamLimits

0xeba0,	// (0x00087aed) cell_area_left_week_number_pane

0xeba0,	// (0x00087aed) cell_month_view_pane_ParamLimits

0xeba0,	// (0x00087aed) cell_month_view_pane

0xeb94,	// (0x00087ae1) frm_month_g1

0xeb94,	// (0x00087ae1) frm_month_g2

0xeb94,	// (0x00087ae1) frm_month_g3

0xeb94,	// (0x00087ae1) frm_month_g4

0xeb94,	// (0x00087ae1) frm_month_g5

0xeb94,	// (0x00087ae1) frm_month_g6

0xeb94,	// (0x00087ae1) frm_month_g7

0xeb94,	// (0x00087ae1) frm_month_g8

0xeb94,	// (0x00087ae1) frm_month_g9

0xeb94,	// (0x00087ae1) frm_month_g10

0xeb94,	// (0x00087ae1) frm_month_g11

0xeb94,	// (0x00087ae1) frm_month_g12

0xeb94,	// (0x00087ae1) frm_month_g13

0xeb94,	// (0x00087ae1) frm_month_g14

0xeb94,	// (0x00087ae1) frm_month_g15

0xeb94,	// (0x00087ae1) frm_month_g16

0x000f,

0xfd31,	// (0x00088c7e) frm_month_g

0xca3e,	// (0x0008598b) cell_top_day_name_pane_t1

0xeb94,	// (0x00087ae1) cell_area_left_week_number_pane_g1

0xca3e,	// (0x0008598b) cell_area_left_week_number_pane_t1

0xeb94,	// (0x00087ae1) cell_month_view_pane_g1

0xca3e,	// (0x0008598b) cell_month_view_pane_t1

0xa2ad,	// (0x000831fa) main_fps_pane

0xbef3,	// (0x00084e40) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xbef3,	// (0x00084e40) cmail_ddmenu_btn02_pane_cp1

0xbf0f,	// (0x00084e5c) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xbf0f,	// (0x00084e5c) cmail_ddmenu_btn02_pane_cp2

0x88f9,	// (0x00081846) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x88f9,	// (0x00081846) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfc4f,	// (0x00088b9c) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfc4f,	// (0x00088b9c) cmail_ddmenu_btn02_pane_g

0x8917,	// (0x00081864) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8917,	// (0x00081864) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfc54,	// (0x00088ba1) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfc54,	// (0x00088ba1) cmail_ddmenu_btn02_pane_t

0x8f91,	// (0x00081ede) fps_text_pane_ParamLimits

0x8f91,	// (0x00081ede) fps_text_pane

0x8fa8,	// (0x00081ef5) main_fps_pane_g1_ParamLimits

0x8fa8,	// (0x00081ef5) main_fps_pane_g1

0x8fc2,	// (0x00081f0f) wait_bar_pane_cp010_ParamLimits

0x8fc2,	// (0x00081f0f) wait_bar_pane_cp010

0x8fd3,	// (0x00081f20) fps_text_pane_t1_ParamLimits

0x8fd3,	// (0x00081f20) fps_text_pane_t1

0xbc8e,	// (0x00084bdb) cam4_image_uncrop_pane_g1

0xbc97,	// (0x00084be4) cam4_image_uncrop_pane_g2

0x54ea,	// (0x0007e437) cam4_image_uncrop_pane_g3

0x54f3,	// (0x0007e440) cam4_image_uncrop_pane_g4

0x0003,

0xf7a6,	// (0x000886f3) cam4_image_uncrop_pane_g

0x8f6f,	// (0x00081ebc) dia3_listrow_pane_ParamLimits

0xa2ad,	// (0x000831fa) main_phob2_pane

0x85ff,	// (0x0008154c) cell_tport_appsw_pane_cp02_ParamLimits

0x85ff,	// (0x0008154c) cell_tport_appsw_pane_cp02

0x8613,	// (0x00081560) cell_tport_appsw_pane_cp03_ParamLimits

0x8613,	// (0x00081560) cell_tport_appsw_pane_cp03

0xa2ad,	// (0x000831fa) phob2_contact_card_pane

0xa2ad,	// (0x000831fa) phob2_listscroll_pane

0xca50,	// (0x0008599d) phob2_list_pane

0xc518,	// (0x00085465) scroll_pane_cp034

0x8feb,	// (0x00081f38) phob2_cc_data_pane_ParamLimits

0x8feb,	// (0x00081f38) phob2_cc_data_pane

0x900a,	// (0x00081f57) phob2_cc_listscroll_pane_ParamLimits

0x900a,	// (0x00081f57) phob2_cc_listscroll_pane

0x9028,	// (0x00081f75) list_double_large_graphic_phob2_pane_ParamLimits

0x9028,	// (0x00081f75) list_double_large_graphic_phob2_pane

0x9047,	// (0x00081f94) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9047,	// (0x00081f94) list_double_large_graphic_phob2_pane_g1

0x0e50,	// (0x00079d9d) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x0e50,	// (0x00079d9d) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfd52,	// (0x00088c9f) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfd52,	// (0x00088c9f) list_double_large_graphic_phob2_pane_g

0x0e71,	// (0x00079dbe) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x0e71,	// (0x00079dbe) list_double_large_graphic_phob2_pane_t1

0x0e95,	// (0x00079de2) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x0e95,	// (0x00079de2) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfd5b,	// (0x00088ca8) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfd5b,	// (0x00088ca8) list_double_large_graphic_phob2_pane_t

0xa324,	// (0x00083271) list_highlight_pane_cp024

0xca58,	// (0x000859a5) phob2_cc_button_pane

0x906c,	// (0x00081fb9) phob2_cc_data_pane_g1_ParamLimits

0x906c,	// (0x00081fb9) phob2_cc_data_pane_g1

0x9083,	// (0x00081fd0) phob2_cc_data_pane_g2_ParamLimits

0x9083,	// (0x00081fd0) phob2_cc_data_pane_g2

0x0001,

0xfd60,	// (0x00088cad) phob2_cc_data_pane_g_ParamLimits

0xfd60,	// (0x00088cad) phob2_cc_data_pane_g

0x9095,	// (0x00081fe2) phob2_cc_data_pane_t1_ParamLimits

0x9095,	// (0x00081fe2) phob2_cc_data_pane_t1

0x90ad,	// (0x00081ffa) phob2_cc_data_pane_t2_ParamLimits

0x90ad,	// (0x00081ffa) phob2_cc_data_pane_t2

0x90c5,	// (0x00082012) phob2_cc_data_pane_t3_ParamLimits

0x90c5,	// (0x00082012) phob2_cc_data_pane_t3

0x0002,

0xfd65,	// (0x00088cb2) phob2_cc_data_pane_t_ParamLimits

0xfd65,	// (0x00088cb2) phob2_cc_data_pane_t

0xca60,	// (0x000859ad) phob2_cc_list_pane_ParamLimits

0xca60,	// (0x000859ad) phob2_cc_list_pane

0x6770,	// (0x0007f6bd) scroll_pane_cp035_ParamLimits

0x6770,	// (0x0007f6bd) scroll_pane_cp035

0xa324,	// (0x00083271) bg_button_pane_cp033

0xca6c,	// (0x000859b9) phob2_cc_button_pane_g1

0xca78,	// (0x000859c5) phob2_cc_button_pane_t1

0xca8d,	// (0x000859da) phob2_cc_button_pane_t2

0x0001,

0xfd6c,	// (0x00088cb9) phob2_cc_button_pane_t

0x90dd,	// (0x0008202a) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x90dd,	// (0x0008202a) list_double_large_graphic_phob2_cc_pane

0x910d,	// (0x0008205a) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x910d,	// (0x0008205a) list_double_large_graphic_phob2_cc_pane_g1

0x0eb6,	// (0x00079e03) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x0eb6,	// (0x00079e03) list_double_large_graphic_phob2_cc_pane_g2

0x0ec2,	// (0x00079e0f) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x0ec2,	// (0x00079e0f) list_double_large_graphic_phob2_cc_pane_g3

0x0ece,	// (0x00079e1b) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x0ece,	// (0x00079e1b) list_double_large_graphic_phob2_cc_pane_g4

0x0eda,	// (0x00079e27) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x0eda,	// (0x00079e27) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfd71,	// (0x00088cbe) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfd71,	// (0x00088cbe) list_double_large_graphic_phob2_cc_pane_g

0x0ee6,	// (0x00079e33) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x0ee6,	// (0x00079e33) list_double_large_graphic_phob2_cc_pane_t1

0x0f0f,	// (0x00079e5c) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x0f0f,	// (0x00079e5c) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfd7c,	// (0x00088cc9) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfd7c,	// (0x00088cc9) list_double_large_graphic_phob2_cc_pane_t

0xca9f,	// (0x000859ec) list_highlight_pane_cp025_ParamLimits

0xca9f,	// (0x000859ec) list_highlight_pane_cp025

0xa324,	// (0x00083271) bg_button_pane_cp033_ParamLimits

0xca6c,	// (0x000859b9) phob2_cc_button_pane_g1_ParamLimits

0xca78,	// (0x000859c5) phob2_cc_button_pane_t1_ParamLimits

0xca8d,	// (0x000859da) phob2_cc_button_pane_t2_ParamLimits

0xfd6c,	// (0x00088cb9) phob2_cc_button_pane_t_ParamLimits

0x1170,	// (0x0007a0bd) popup_wgtman_window

0x5e3f,	// (0x0007ed8c) scroll_pane_cp038

0x8cf2,	// (0x00081c3f) wgtman_btn_pane_cp_01_ParamLimits

0x8cf2,	// (0x00081c3f) wgtman_btn_pane_cp_01

0xcaad,	// (0x000859fa) wgtman_content_pane

0xcab6,	// (0x00085a03) wgtman_heading_pane

0xa2ad,	// (0x000831fa) bg_heading_pane_cp02

0xcabf,	// (0x00085a0c) wgtman_heading_pane_g1

0xcac7,	// (0x00085a14) wgtman_heading_pane_t1

0xcad5,	// (0x00085a22) scroll_pane_cp036

0xcadd,	// (0x00085a2a) wgtman_list_pane

0xcae5,	// (0x00085a32) wgtman_list_pane_t1_ParamLimits

0xcae5,	// (0x00085a32) wgtman_list_pane_t1

0xbc7a,	// (0x00084bc7) cam4_grid_pane

0x6516,	// (0x0007f463) bg_button_pane_cp015_ParamLimits

0x6527,	// (0x0007f474) bg_button_pane_cp016_ParamLimits

0x6533,	// (0x0007f480) bg_button_pane_cp017_ParamLimits

0x6593,	// (0x0007f4e0) popup_vitu2_query_window_g3_ParamLimits

0x6593,	// (0x0007f4e0) popup_vitu2_query_window_g3

0x6634,	// (0x0007f581) popup_vitu2_query_window_t6_ParamLimits

0x6634,	// (0x0007f581) popup_vitu2_query_window_t6

0x665f,	// (0x0007f5ac) popup_vitu2_query_window_t7_ParamLimits

0x665f,	// (0x0007f5ac) popup_vitu2_query_window_t7

0xbc8e,	// (0x00084bdb) cam4_grid_pane_g1

0xbc97,	// (0x00084be4) cam4_grid_pane_g2

0xcaff,	// (0x00085a4c) cam4_grid_pane_g3

0xcb08,	// (0x00085a55) cam4_grid_pane_g4

0x0003,

0xfd81,	// (0x00088cce) cam4_grid_pane_g

0x1c06,	// (0x0007ab53) aid_placing_vt_slider_lsc_ParamLimits

0x1f11,	// (0x0007ae5e) vidtel_button_pane_ParamLimits

0x1f11,	// (0x0007ae5e) vidtel_button_pane

0xa2ad,	// (0x000831fa) bg_button_pane_cp034

0xcb13,	// (0x00085a60) vidtel_button_pane_g1

0xcb1b,	// (0x00085a68) vidtel_button_pane_t1

0x6211,	// (0x0007f15e) aid_size_vtel_slider_touch

0x6770,	// (0x0007f6bd) scroll_pane_cp039

0x7c06,	// (0x00080b53) ncim_query_button_pane_cp01_ParamLimits

0x7c25,	// (0x00080b72) ncimui_query_pane_g1_ParamLimits

0xa324,	// (0x00083271) input_focus_pane_cp012_ParamLimits

0x7c4a,	// (0x00080b97) ncim_query_entry_pane_t1_ParamLimits

0x6770,	// (0x0007f6bd) scroll_pane_cp039_ParamLimits

0xb657,	// (0x000845a4) navi_pane_bcale_mc_g1

0xb65f,	// (0x000845ac) navi_pane_bcale_mc_t1

0xbf43,	// (0x00084e90) main_sp_fs_email_pane_g1

0xbf4f,	// (0x00084e9c) main_sp_fs_email_pane_g2

0x0001,

0xfb92,	// (0x00088adf) main_sp_fs_email_pane_g

0xc3a7,	// (0x000852f4) list_single_cale_mrui_row_pane_g3_ParamLimits

0xc3a7,	// (0x000852f4) list_single_cale_mrui_row_pane_g3

0x0dc5,	// (0x00079d12) list_single_recal_day_pane_g5_event_pane

0xc5c6,	// (0x00085513) list_single_recal_day_pane_g7

0xcb31,	// (0x00085a7e) list_recal_day_event_pane_cp01

0xcb3a,	// (0x00085a87) list_recal_vselct_arw_lo_pane_cp01

0xcb42,	// (0x00085a8f) list_recal_vselct_arw_up_pane_cp01

0xcb4a,	// (0x00085a97) list_recal_vselct_pane_cp01

0x63e2,	// (0x0007f32f) list_recal_day_event_pane_cp01_g1

0xcb54,	// (0x00085aa1) list_recal_day_event_pane_cp01_t1

0xc5ce,	// (0x0008551b) list_single_recal_day_pane_t1_ParamLimits

0xc5e0,	// (0x0008552d) list_single_recal_day_pane_t2_ParamLimits

0xfc64,	// (0x00088bb1) list_single_recal_day_pane_t_ParamLimits

0xa9a0,	// (0x000838ed) bg_notes_pane_ParamLimits

0xaa9d,	// (0x000839ea) list_notes_pane_ParamLimits

0x12ba,	// (0x0007a207) scroll_pane_cp06_ParamLimits

0xaad9,	// (0x00083a26) main_notes_pane_ParamLimits

0xa324,	// (0x00083271) main_welc_pane

0x9152,	// (0x0008209f) main_welc_body_pane_ParamLimits

0x9152,	// (0x0008209f) main_welc_body_pane

0x9170,	// (0x000820bd) main_welc_opti_pane_ParamLimits

0x9170,	// (0x000820bd) main_welc_opti_pane

0x91e0,	// (0x0008212d) main_welc_pane_t1_ParamLimits

0x91e0,	// (0x0008212d) main_welc_pane_t1

0x93e0,	// (0x0008232d) main_welc_body_row_pane_ParamLimits

0x93e0,	// (0x0008232d) main_welc_body_row_pane

0xaa0d,	// (0x0008395a) main_welc_opti_row_pane_ParamLimits

0xaa0d,	// (0x0008395a) main_welc_opti_row_pane

0xcb6a,	// (0x00085ab7) main_welc_opti_row_pane_g1

0x93f4,	// (0x00082341) main_welc_opti_row_pane_t1

0xcb72,	// (0x00085abf) main_welc_body_row_pane_t1

0xc85b,	// (0x000857a8) popup_notif_wgt_heading_pane

0xc875,	// (0x000857c2) aid_size_list_notif_wgt_del_ParamLimits

0xc882,	// (0x000857cf) list_notif_wgt_row_pane_g1_ParamLimits

0xc88e,	// (0x000857db) list_notif_wgt_row_pane_g2_ParamLimits

0xc89d,	// (0x000857ea) list_notif_wgt_row_pane_g3_ParamLimits

0xfccb,	// (0x00088c18) list_notif_wgt_row_pane_g_ParamLimits

0xc8aa,	// (0x000857f7) list_notif_wgt_row_pane_t1_ParamLimits

0xc8c0,	// (0x0008580d) list_notif_wgt_row_pane_t2_ParamLimits

0xc8d2,	// (0x0008581f) list_notif_wgt_row_pane_t3_ParamLimits

0xfcd2,	// (0x00088c1f) list_notif_wgt_row_pane_t_ParamLimits

0x8d8b,	// (0x00081cd8) listrow_wgtman_pane_g1_ParamLimits

0x8d98,	// (0x00081ce5) listrow_wgtman_pane_g2_ParamLimits

0xfd02,	// (0x00088c4f) listrow_wgtman_pane_g_ParamLimits

0x0e00,	// (0x00079d4d) listrow_wgtman_pane_t1_ParamLimits

0x0e18,	// (0x00079d65) listrow_wgtman_pane_t2_ParamLimits

0xfd07,	// (0x00088c54) listrow_wgtman_pane_t_ParamLimits

0x0e3e,	// (0x00079d8b) wait_bar_pane_cp09_ParamLimits

0xa2ad,	// (0x000831fa) bg_popup_heading_pane_cp02

0xcb81,	// (0x00085ace) popup_notif_wgt_heading_pane_g1

0xcb89,	// (0x00085ad6) popup_notif_wgt_heading_pane_t1

0xa2ad,	// (0x000831fa) main_vids_pane

0xa2ad,	// (0x000831fa) vids_listscroll_pane

0x9403,	// (0x00082350) scroll_pane_cp040

0xa2ad,	// (0x000831fa) vids_list_pane

0x940e,	// (0x0008235b) vids_list_double_pane_ParamLimits

0x940e,	// (0x0008235b) vids_list_double_pane

0x941f,	// (0x0008236c) vids_list_double_pane_g1

0x9428,	// (0x00082375) vids_list_double_pane_t1

0x9438,	// (0x00082385) vids_list_double_pane_t2

0x0001,

0xfda0,	// (0x00088ced) vids_list_double_pane_t

0xa324,	// (0x00083271) main_ncimui_pane_ParamLimits

0x792d,	// (0x0008087a) main_ncimui_pane_g1_ParamLimits

0x7939,	// (0x00080886) main_ncimui_pane_g2_ParamLimits

0x7939,	// (0x00080886) main_ncimui_pane_g2

0x0001,

0xfa98,	// (0x000889e5) main_ncimui_pane_g_ParamLimits

0xfa98,	// (0x000889e5) main_ncimui_pane_g

0x918b,	// (0x000820d8) main_welc_pane_g1_ParamLimits

0x918b,	// (0x000820d8) main_welc_pane_g1

0x91a0,	// (0x000820ed) main_welc_pane_g2_ParamLimits

0x91a0,	// (0x000820ed) main_welc_pane_g2

0x0003,

0xfd8a,	// (0x00088cd7) main_welc_pane_g_ParamLimits

0xfd8a,	// (0x00088cd7) main_welc_pane_g

0xa9a0,	// (0x000838ed) listscroll_mce_pane_ParamLimits

0xb7ac,	// (0x000846f9) wait_bar_pane_cp10

0xe4d2,	// (0x0008741f) main_cale_day_pane_ParamLimits

0xe4d2,	// (0x0008741f) main_cale_week_pane_ParamLimits

0xa9a0,	// (0x000838ed) main_messa_pane_ParamLimits

0x4938,	// (0x0007d885) main_clock2_btn_pane_ParamLimits

0x4938,	// (0x0007d885) main_clock2_btn_pane

0xecc3,	// (0x00087c10) main_clock2_btn_pane_cp01_ParamLimits

0xecc3,	// (0x00087c10) main_clock2_btn_pane_cp01

0xc341,	// (0x0008528e) list_cale_mrui_pane_ParamLimits

0xc916,	// (0x00085863) main_cf0_pane_g2

0x0001,

0xfcd9,	// (0x00088c26) main_cf0_pane_g

0xeba0,	// (0x00087aed) area_left_week_number_pane_ParamLimits

0xeba0,	// (0x00087aed) area_top_day_name_pane_ParamLimits

0xeba0,	// (0x00087aed) frame_month_view_pane_ParamLimits

0xeba0,	// (0x00087aed) grid_month_view_pane_ParamLimits

0xeb94,	// (0x00087ae1) frm_month_g1_ParamLimits

0xeb94,	// (0x00087ae1) frm_month_g2_ParamLimits

0xeb94,	// (0x00087ae1) frm_month_g3_ParamLimits

0xeb94,	// (0x00087ae1) frm_month_g4_ParamLimits

0xeb94,	// (0x00087ae1) frm_month_g5_ParamLimits

0xeb94,	// (0x00087ae1) frm_month_g6_ParamLimits

0xeb94,	// (0x00087ae1) frm_month_g7_ParamLimits

0xeb94,	// (0x00087ae1) frm_month_g8_ParamLimits

0xeb94,	// (0x00087ae1) frm_month_g9_ParamLimits

0xeb94,	// (0x00087ae1) frm_month_g10_ParamLimits

0xeb94,	// (0x00087ae1) frm_month_g11_ParamLimits

0xeb94,	// (0x00087ae1) frm_month_g12_ParamLimits

0xeb94,	// (0x00087ae1) frm_month_g13_ParamLimits

0xeb94,	// (0x00087ae1) frm_month_g14_ParamLimits

0xeb94,	// (0x00087ae1) frm_month_g15_ParamLimits

0xeb94,	// (0x00087ae1) frm_month_g16_ParamLimits

0xfd31,	// (0x00088c7e) frm_month_g_ParamLimits

0xca3e,	// (0x0008598b) cell_top_day_name_pane_t1_ParamLimits

0xeb94,	// (0x00087ae1) cell_area_left_week_number_pane_g1_ParamLimits

0xca3e,	// (0x0008598b) cell_area_left_week_number_pane_t1_ParamLimits

0xeb94,	// (0x00087ae1) cell_month_view_pane_g1_ParamLimits

0xca3e,	// (0x0008598b) cell_month_view_pane_t1_ParamLimits

0xa998,	// (0x000838e5) main_clock2_btn_pane_g1

0xcb97,	// (0x00085ae4) main_clock2_btn_pane_t1

0xa324,	// (0x00083271) listscroll_cmail_pane_ParamLimits

0xbf43,	// (0x00084e90) main_sp_fs_email_pane_g1_ParamLimits

0xbf4f,	// (0x00084e9c) main_sp_fs_email_pane_g2_ParamLimits

0xfb92,	// (0x00088adf) main_sp_fs_email_pane_g_ParamLimits

0xc536,	// (0x00085483) list_recal_day_pane_ParamLimits

0xc547,	// (0x00085494) mian_recal_day_pane_t1

0x0bb3,	// (0x00079b00) list_single_dyc_row_text_pane_t4_ParamLimits

0x0bb3,	// (0x00079b00) list_single_dyc_row_text_pane_t4

0x0bfc,	// (0x00079b49) list_single_dyc_row_text_pane_t5_ParamLimits

0x0bfc,	// (0x00079b49) list_single_dyc_row_text_pane_t5

0xc01b,	// (0x00084f68) list_single_dyc_row_text_pane_t6_ParamLimits

0xc01b,	// (0x00084f68) list_single_dyc_row_text_pane_t6

0xb0d1,	// (0x0008401e) aid_mgn_list_cale_time_pane

0xa324,	// (0x00083271) main_gallery2_pane_ParamLimits

0xecd9,	// (0x00087c26) main_clock2_pane_cp01_t1

0xece9,	// (0x00087c36) main_clock2_pane_cp01_t3

0x0001,

0x01ca,	// (0x00079117) main_clock2_pane_cp01_t

0x1649,	// (0x0007a596) cale_week_scroll_pane_g16_ParamLimits

0x1649,	// (0x0007a596) cale_week_scroll_pane_g16

0xad1e,	// (0x00083c6b) vorec_slider_pane

0xcb1b,	// (0x00085a68) vidtel_button_pane_t1_ParamLimits

0x8985,	// (0x000818d2) main_fs_bigclock_clock_pane_g1_ParamLimits

0x8985,	// (0x000818d2) main_fs_bigclock_clock_pane_g2_ParamLimits

0x8985,	// (0x000818d2) main_fs_bigclock_clock_pane_g3_ParamLimits

0x8985,	// (0x000818d2) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfc87,	// (0x00088bd4) main_fs_bigclock_clock_pane_g_ParamLimits

0x8998,	// (0x000818e5) main_fs_bigclock_clock_pane_t1_ParamLimits

0x89b1,	// (0x000818fe) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfc90,	// (0x00088bdd) main_fs_bigclock_clock_pane_t_ParamLimits

0x41cc,	// (0x0007d119) main_mup3_lyrics_pane_ParamLimits

0x41cc,	// (0x0007d119) main_mup3_lyrics_pane

0x9460,	// (0x000823ad) main_mup3_lyrics_pane_t1_ParamLimits

0x9460,	// (0x000823ad) main_mup3_lyrics_pane_t1

0xb978,	// (0x000848c5) aid_main_mp4_pane_t1_area

0xb982,	// (0x000848cf) aid_main_mp4_pane_t2_area

0xba2c,	// (0x00084979) main_mp4_pane_g7_ParamLimits

0xba2c,	// (0x00084979) main_mp4_pane_g7

0xba38,	// (0x00084985) main_mp4_pane_g8_ParamLimits

0xba38,	// (0x00084985) main_mp4_pane_g8

0x52a1,	// (0x0007e1ee) aid_call6_pane_g1_size

0x90f7,	// (0x00082044) list_double_large_graphic_phob2_other_pane_ParamLimits

0x90f7,	// (0x00082044) list_double_large_graphic_phob2_other_pane

0xac25,	// (0x00083b72) list_double_large_graphic_phob2_other_pane_g1

0xa2ad,	// (0x000831fa) list_highlight_pane_cp026

0xa324,	// (0x00083271) main_welc_pane_ParamLimits

0x84a0,	// (0x000813ed) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x84a0,	// (0x000813ed) main_sp_fs_ctrlbar_pane_g3

0x84ba,	// (0x00081407) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x84ba,	// (0x00081407) main_sp_fs_ctrlbar_pane_g4

0x84ee,	// (0x0008143b) toolbar2_fixed_button_pane_cp01

0x84f9,	// (0x00081446) toolbar2_fixed_button_pane_cp02

0x8506,	// (0x00081453) toolbar2_fixed_button_pane_cp03

0x912c,	// (0x00082079) list_welc_entry_pane_ParamLimits

0x912c,	// (0x00082079) list_welc_entry_pane

0x91b5,	// (0x00082102) main_welc_pane_g3_ParamLimits

0x91b5,	// (0x00082102) main_welc_pane_g3

0x91fe,	// (0x0008214b) main_welc_pane_t2_ParamLimits

0x91fe,	// (0x0008214b) main_welc_pane_t2

0x9219,	// (0x00082166) main_welc_pane_t3_ParamLimits

0x9219,	// (0x00082166) main_welc_pane_t3

0x0005,

0xfd93,	// (0x00088ce0) main_welc_pane_t_ParamLimits

0xfd93,	// (0x00088ce0) main_welc_pane_t

0x9351,	// (0x0008229e) welc_button_pane_ParamLimits

0x9351,	// (0x0008229e) welc_button_pane

0x93cb,	// (0x00082318) welc_service_logo_pane_ParamLimits

0x93cb,	// (0x00082318) welc_service_logo_pane

0x947c,	// (0x000823c9) list_single_welc_entry_pane_ParamLimits

0x947c,	// (0x000823c9) list_single_welc_entry_pane

0x948d,	// (0x000823da) list_single_welc_entry_pane_g1

0x9495,	// (0x000823e2) list_single_welc_entry_pane_t1

0x94a3,	// (0x000823f0) list_single_welc_entry_pane_t2

0x0001,

0xfda5,	// (0x00088cf2) list_single_welc_entry_pane_t

0xa2ad,	// (0x000831fa) bg_button_pane_cp035

0x94b1,	// (0x000823fe) welc_button_pane_t1

0xcba5,	// (0x00085af2) welc_service_logo_pane_g1

0xcbae,	// (0x00085afb) welc_service_logo_pane_g2

0x0001,

0xfdaa,	// (0x00088cf7) welc_service_logo_pane_g

0xa2ad,	// (0x000831fa) main_int_radio_pane

0xab74,	// (0x00083ac1) list_single_fs_dyc_pane_g1

0x0e5f,	// (0x00079dac) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x0e5f,	// (0x00079dac) list_double_large_graphic_phob2_pane_g3

0x9059,	// (0x00081fa6) list_double_large_graphic_phob2_pane_g4_ParamLimits

0x9059,	// (0x00081fa6) list_double_large_graphic_phob2_pane_g4

0x94bf,	// (0x0008240c) main_int_radio1_pane_ParamLimits

0x94bf,	// (0x0008240c) main_int_radio1_pane

0xcbb7,	// (0x00085b04) find_pane_cp02

0x94dc,	// (0x00082429) input_focus_pane_cp12_ParamLimits

0x94dc,	// (0x00082429) input_focus_pane_cp12

0x94ec,	// (0x00082439) input_focus_pane_cp13_ParamLimits

0x94ec,	// (0x00082439) input_focus_pane_cp13

0x9500,	// (0x0008244d) input_focus_pane_cp14_ParamLimits

0x9500,	// (0x0008244d) input_focus_pane_cp14

0xcbc0,	// (0x00085b0d) int_radio1_listscroll_pane

0x9514,	// (0x00082461) main_int_radio1_pane_g1_ParamLimits

0x9514,	// (0x00082461) main_int_radio1_pane_g1

0x952c,	// (0x00082479) main_int_radio1_pane_t1_ParamLimits

0x952c,	// (0x00082479) main_int_radio1_pane_t1

0x9547,	// (0x00082494) main_int_radio1_pane_t2_ParamLimits

0x9547,	// (0x00082494) main_int_radio1_pane_t2

0x9562,	// (0x000824af) main_int_radio1_pane_t3_ParamLimits

0x9562,	// (0x000824af) main_int_radio1_pane_t3

0x957d,	// (0x000824ca) main_int_radio1_pane_t4_ParamLimits

0x957d,	// (0x000824ca) main_int_radio1_pane_t4

0xcbca,	// (0x00085b17) main_int_radio1_pane_t5_ParamLimits

0xcbca,	// (0x00085b17) main_int_radio1_pane_t5

0x958f,	// (0x000824dc) main_int_radio1_pane_t6_ParamLimits

0x958f,	// (0x000824dc) main_int_radio1_pane_t6

0x95a4,	// (0x000824f1) main_int_radio1_pane_t7_ParamLimits

0x95a4,	// (0x000824f1) main_int_radio1_pane_t7

0x95b9,	// (0x00082506) main_int_radio1_pane_t8_ParamLimits

0x95b9,	// (0x00082506) main_int_radio1_pane_t8

0x95d8,	// (0x00082525) main_int_radio1_pane_t9_ParamLimits

0x95d8,	// (0x00082525) main_int_radio1_pane_t9

0x95ea,	// (0x00082537) main_int_radio1_pane_t10_ParamLimits

0x95ea,	// (0x00082537) main_int_radio1_pane_t10

0x9610,	// (0x0008255d) main_int_radio1_pane_t11_ParamLimits

0x9610,	// (0x0008255d) main_int_radio1_pane_t11

0x9636,	// (0x00082583) main_int_radio1_pane_t12_ParamLimits

0x9636,	// (0x00082583) main_int_radio1_pane_t12

0x000b,

0xfdaf,	// (0x00088cfc) main_int_radio1_pane_t_ParamLimits

0xfdaf,	// (0x00088cfc) main_int_radio1_pane_t

0xcbdc,	// (0x00085b29) int_radio_list_pane

0xc518,	// (0x00085465) scroll_pane_cp037

0xcbe4,	// (0x00085b31) list_double_large_graphic_int_radio_pane_ParamLimits

0xcbe4,	// (0x00085b31) list_double_large_graphic_int_radio_pane

0xcbfc,	// (0x00085b49) list_double_large_graphic_int_radio_pane_g1

0xcc05,	// (0x00085b52) list_double_large_graphic_int_radio_pane_t1

0xcc13,	// (0x00085b60) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfdc8,	// (0x00088d15) list_double_large_graphic_int_radio_pane_t

0xa2ad,	// (0x000831fa) list_highlight_pane_cp027

0xcb62,	// (0x00085aaf) main_button_pane_4

0x91c8,	// (0x00082115) main_welc_pane_g4_ParamLimits

0x91c8,	// (0x00082115) main_welc_pane_g4

0x9232,	// (0x0008217f) main_welc_pane_t4_ParamLimits

0x9232,	// (0x0008217f) main_welc_pane_t4

0x924d,	// (0x0008219a) main_welc_pane_t5_ParamLimits

0x924d,	// (0x0008219a) main_welc_pane_t5

0x928e,	// (0x000821db) main_welc_pane_t6_ParamLimits

0x928e,	// (0x000821db) main_welc_pane_t6

0x9368,	// (0x000822b5) welc_button_pane_2_ParamLimits

0x9368,	// (0x000822b5) welc_button_pane_2

0x9384,	// (0x000822d1) welc_button_pane_3_ParamLimits

0x9384,	// (0x000822d1) welc_button_pane_3

0xcb62,	// (0x00085aaf) welc_button_pane_4

0x93a3,	// (0x000822f0) welc_button_pane_5_ParamLimits

0x93a3,	// (0x000822f0) welc_button_pane_5

0x0f74,	// (0x00079ec1) main_popup_welc_pane

0xcc39,	// (0x00085b86) main_welc_sk_g3

0xcc43,	// (0x00085b90) main_welc_sk_g4

0xcc4d,	// (0x00085b9a) main_welc_sk_t3

0xcc5d,	// (0x00085baa) main_welc_sk_t4

0xcc6d,	// (0x00085bba) popup_welc_pane_t4

0xcc7b,	// (0x00085bc8) popup_welc_pane_t5

0xcc89,	// (0x00085bd6) popup_welc_pane_t6

0xa2ad,	// (0x000831fa) main_acti_pane

0xa2ad,	// (0x000831fa) main_sso_pane

0x9648,	// (0x00082595) sso_body_pane_ParamLimits

0x9648,	// (0x00082595) sso_body_pane

0x9668,	// (0x000825b5) sso_logo_pane_ParamLimits

0x9668,	// (0x000825b5) sso_logo_pane

0x96a1,	// (0x000825ee) sso_sk_pane_ParamLimits

0x96a1,	// (0x000825ee) sso_sk_pane

0xccc7,	// (0x00085c14) main_sso_logo_pane_g1

0x96b3,	// (0x00082600) sso_sk_pane_t1_ParamLimits

0x96b3,	// (0x00082600) sso_sk_pane_t1

0x96cd,	// (0x0008261a) sso_sk_pane_t2_ParamLimits

0x96cd,	// (0x0008261a) sso_sk_pane_t2

0x0001,

0xfdcd,	// (0x00088d1a) sso_sk_pane_t_ParamLimits

0xfdcd,	// (0x00088d1a) sso_sk_pane_t

0xccd0,	// (0x00085c1d) aid_sso_gap

0xccd9,	// (0x00085c26) aid_sso_txt1

0xcce3,	// (0x00085c30) aid_sso_txt2

0xcced,	// (0x00085c3a) aid_sso_txt3

0x0002,

0xfdd2,	// (0x00088d1f) aid_sso_txt

0xccf7,	// (0x00085c44) aid_sso_widget

0x9737,	// (0x00082684) sso_btn_pane_ParamLimits

0x9737,	// (0x00082684) sso_btn_pane

0x97cb,	// (0x00082718) sso_option_pane_ParamLimits

0x97cb,	// (0x00082718) sso_option_pane

0x987f,	// (0x000827cc) sso_query_pane_ParamLimits

0x987f,	// (0x000827cc) sso_query_pane

0x98d5,	// (0x00082822) sso_query_pane_cp01_ParamLimits

0x98d5,	// (0x00082822) sso_query_pane_cp01

0x992d,	// (0x0008287a) sso_t_hdr_pane_ParamLimits

0x992d,	// (0x0008287a) sso_t_hdr_pane

0x9957,	// (0x000828a4) sso_t_nml_pane_ParamLimits

0x9957,	// (0x000828a4) sso_t_nml_pane

0x99ad,	// (0x000828fa) sso_t_sub_pane

0x9675,	// (0x000825c2) sso_popup_window_ParamLimits

0x9675,	// (0x000825c2) sso_popup_window

0x96e3,	// (0x00082630) sso_apps_pane_ParamLimits

0x96e3,	// (0x00082630) sso_apps_pane

0x970d,	// (0x0008265a) sso_body_pane_g1

0x9717,	// (0x00082664) sso_body_pane_t1

0x9727,	// (0x00082674) sso_body_pane_t2

0x0001,

0xfdd9,	// (0x00088d26) sso_body_pane_t

0x9783,	// (0x000826d0) sso_btn_pane_cp01_ParamLimits

0x9783,	// (0x000826d0) sso_btn_pane_cp01

0x9853,	// (0x000827a0) sso_prog_pane_ParamLimits

0x9853,	// (0x000827a0) sso_prog_pane

0x99dc,	// (0x00082929) sso_t_hdr_pane_t1_ParamLimits

0x99dc,	// (0x00082929) sso_t_hdr_pane_t1

0xcd01,	// (0x00085c4e) input_focus_pane_cp10_ParamLimits

0xcd01,	// (0x00085c4e) input_focus_pane_cp10

0xcd15,	// (0x00085c62) sso_query_pane_t1_ParamLimits

0xcd15,	// (0x00085c62) sso_query_pane_t1

0xcd28,	// (0x00085c75) sso_query_pane_t2_ParamLimits

0xcd28,	// (0x00085c75) sso_query_pane_t2

0xcd41,	// (0x00085c8e) sso_query_pane_t3_ParamLimits

0xcd41,	// (0x00085c8e) sso_query_pane_t3

0xcd6b,	// (0x00085cb8) sso_query_pane_t4_ParamLimits

0xcd6b,	// (0x00085cb8) sso_query_pane_t4

0x0003,

0xfdde,	// (0x00088d2b) sso_query_pane_t_ParamLimits

0xfdde,	// (0x00088d2b) sso_query_pane_t

0xc7f6,	// (0x00085743) bg_button_pane_cp22

0xcc21,	// (0x00085b6e) sso_btn_pane_t1

0x99ef,	// (0x0008293c) sso_t_nml_pane_t1_ParamLimits

0x99ef,	// (0x0008293c) sso_t_nml_pane_t1

0xcd8f,	// (0x00085cdc) sso_option_row_pane_ParamLimits

0xcd8f,	// (0x00085cdc) sso_option_row_pane

0xcd9c,	// (0x00085ce9) sso_t_sub_pane_t1_ParamLimits

0xcd9c,	// (0x00085ce9) sso_t_sub_pane_t1

0xa324,	// (0x00083271) bg_popup_window_pane_cp11_ParamLimits

0xa324,	// (0x00083271) bg_popup_window_pane_cp11

0xcdb9,	// (0x00085d06) popup_sk_window_cp01_ParamLimits

0xcdb9,	// (0x00085d06) popup_sk_window_cp01

0xcdc6,	// (0x00085d13) sso_popup_body_pane_ParamLimits

0xcdc6,	// (0x00085d13) sso_popup_body_pane

0xcdd3,	// (0x00085d20) scroll_pane_cp21_ParamLimits

0xcdd3,	// (0x00085d20) scroll_pane_cp21

0xcde0,	// (0x00085d2d) sso_popup_body_t_pane_ParamLimits

0xcde0,	// (0x00085d2d) sso_popup_body_t_pane

0xcded,	// (0x00085d3a) sso_popup_body_t_hdr_pane_ParamLimits

0xcded,	// (0x00085d3a) sso_popup_body_t_hdr_pane

0x9a0a,	// (0x00082957) sso_popup_body_t_nml_pane_ParamLimits

0x9a0a,	// (0x00082957) sso_popup_body_t_nml_pane

0x9a31,	// (0x0008297e) sso_popup_body_t_sub_pane_ParamLimits

0x9a31,	// (0x0008297e) sso_popup_body_t_sub_pane

0xcdff,	// (0x00085d4c) sso_popup_body_t_hdr_pane_t1

0x9a54,	// (0x000829a1) sso_popup_body_t_nml_pane_t1_ParamLimits

0x9a54,	// (0x000829a1) sso_popup_body_t_nml_pane_t1

0xce0f,	// (0x00085d5c) sso_popup_body_t_sub_pane_t1_ParamLimits

0xce0f,	// (0x00085d5c) sso_popup_body_t_sub_pane_t1

0xaa61,	// (0x000839ae) sso_prog_pane_g1

0x9a8c,	// (0x000829d9) sso_apps_pane_comp1_ParamLimits

0x9a8c,	// (0x000829d9) sso_apps_pane_comp1

0xce34,	// (0x00085d81) sso_apps_pane_comp1_g1

0xce3c,	// (0x00085d89) sso_apps_pane_comp1_t1

0xce58,	// (0x00085da5) sso_option_row_pane_g1

0xce70,	// (0x00085dbd) sso_option_row_pane_t1

0xc146,	// (0x00085093) list_cmail_pane_ParamLimits

0xa2ad,	// (0x000831fa) main_call7_pane

0x9119,	// (0x00082066) bg_welc_area_ParamLimits

0x9119,	// (0x00082066) bg_welc_area

0x92cc,	// (0x00082219) sso_t_hdr_pane_a_t1_ParamLimits

0x92cc,	// (0x00082219) sso_t_hdr_pane_a_t1

0x92e7,	// (0x00082234) sso_t_nml_pane_a_t1_ParamLimits

0x92e7,	// (0x00082234) sso_t_nml_pane_a_t1

0x9316,	// (0x00082263) sso_t_sub_pane_a_t1_ParamLimits

0x9316,	// (0x00082263) sso_t_sub_pane_a_t1

0x93b9,	// (0x00082306) welc_button_pane_cp01_ParamLimits

0x93b9,	// (0x00082306) welc_button_pane_cp01

0xcc21,	// (0x00085b6e) sso_btn_pane_t1_copy1

0xcc30,	// (0x00085b7d) welc_button_pane_2_comp1

0xcc97,	// (0x00085be4) sso_t_hdr_pane_p_t1

0xcca7,	// (0x00085bf4) sso_t_nml_pane_p_t1

0xccb7,	// (0x00085c04) sso_t_sub_pane_p_t1

0xa2ad,	// (0x000831fa) main_att_pane

0xa2ad,	// (0x000831fa) main_vod_pane

0x99ad,	// (0x000828fa) sso_t_sub_pane_ParamLimits

0xce4a,	// (0x00085d97) input_focus_pane_cp10_t1

0xce70,	// (0x00085dbd) sso_option_row_pane_t1_ParamLimits

0x9aa6,	// (0x000829f3) main_att_body_pane_ParamLimits

0x9aa6,	// (0x000829f3) main_att_body_pane

0x9abc,	// (0x00082a09) att_btn_emg_pane_ParamLimits

0x9abc,	// (0x00082a09) att_btn_emg_pane

0x9adb,	// (0x00082a28) att_btn_pane_ParamLimits

0x9adb,	// (0x00082a28) att_btn_pane

0x9b4a,	// (0x00082a97) att_btn_pane_cp01_ParamLimits

0x9b4a,	// (0x00082a97) att_btn_pane_cp01

0x9b8a,	// (0x00082ad7) att_li_srv_pane_ParamLimits

0x9b8a,	// (0x00082ad7) att_li_srv_pane

0x9ba7,	// (0x00082af4) att_opt_pane_ParamLimits

0x9ba7,	// (0x00082af4) att_opt_pane

0x9bf1,	// (0x00082b3e) att_query_pane_ParamLimits

0x9bf1,	// (0x00082b3e) att_query_pane

0x9c6a,	// (0x00082bb7) att_query_pane_cp01_ParamLimits

0x9c6a,	// (0x00082bb7) att_query_pane_cp01

0x9cb6,	// (0x00082c03) att_t_hdr_pane_ParamLimits

0x9cb6,	// (0x00082c03) att_t_hdr_pane

0x9d22,	// (0x00082c6f) att_t_nml_pane_ParamLimits

0x9d22,	// (0x00082c6f) att_t_nml_pane

0x9d92,	// (0x00082cdf) att_t_nml_pane_cp01_ParamLimits

0x9d92,	// (0x00082cdf) att_t_nml_pane_cp01

0x9dc0,	// (0x00082d0d) att_t_nmlb_pane_ParamLimits

0x9dc0,	// (0x00082d0d) att_t_nmlb_pane

0x9e2d,	// (0x00082d7a) att_term_pane_ParamLimits

0x9e2d,	// (0x00082d7a) att_term_pane

0x9e77,	// (0x00082dc4) main_att_body_pane_g1_ParamLimits

0x9e77,	// (0x00082dc4) main_att_body_pane_g1

0xce8c,	// (0x00085dd9) att_t_hdr_pane_t1_ParamLimits

0xce8c,	// (0x00085dd9) att_t_hdr_pane_t1

0xcea5,	// (0x00085df2) att_t_nml_pane_t1_ParamLimits

0xcea5,	// (0x00085df2) att_t_nml_pane_t1

0xceca,	// (0x00085e17) att_btn_pane_t1

0xc7f6,	// (0x00085743) bg_button_pane_cp23

0x9ea3,	// (0x00082df0) att_li_srv_row_pane_ParamLimits

0x9ea3,	// (0x00082df0) att_li_srv_row_pane

0xced9,	// (0x00085e26) att_t_nmlb_pane_t1_ParamLimits

0xced9,	// (0x00085e26) att_t_nmlb_pane_t1

0xcef5,	// (0x00085e42) att_query_pane_t1

0xcf04,	// (0x00085e51) att_query_pane_t2

0xcf13,	// (0x00085e60) att_query_pane_t3

0x0002,

0xfdec,	// (0x00088d39) att_query_pane_t

0xcf22,	// (0x00085e6f) input_focus_pane_cp11

0xcf2b,	// (0x00085e78) att_term_pane_t1_ParamLimits

0xcf2b,	// (0x00085e78) att_term_pane_t1

0xa2ad,	// (0x000831fa) att_opt_row_pane

0xcf48,	// (0x00085e95) att_opt_row_pane_g1

0xcf50,	// (0x00085e9d) att_opt_row_pane_t1_ParamLimits

0xcf50,	// (0x00085e9d) att_opt_row_pane_t1

0x9eb3,	// (0x00082e00) att_li_srv_row_pane_g1

0x9ebb,	// (0x00082e08) att_li_srv_row_pane_t1_ParamLimits

0x9ebb,	// (0x00082e08) att_li_srv_row_pane_t1

0x9ebb,	// (0x00082e08) att_li_srv_row_pane_t2_ParamLimits

0x9ebb,	// (0x00082e08) att_li_srv_row_pane_t2

0x0001,

0xfdf3,	// (0x00088d40) att_li_srv_row_pane_t_ParamLimits

0xfdf3,	// (0x00088d40) att_li_srv_row_pane_t

0xcf69,	// (0x00085eb6) att_btn_close_pane_g1

0xa2ad,	// (0x000831fa) bg_button_pane_cp24

0x9ed0,	// (0x00082e1d) main_vod_body_pane_ParamLimits

0x9ed0,	// (0x00082e1d) main_vod_body_pane

0x9ee4,	// (0x00082e31) main_vod_body_pane_g1_ParamLimits

0x9ee4,	// (0x00082e31) main_vod_body_pane_g1

0x9f18,	// (0x00082e65) scroll_pane_cp24_ParamLimits

0x9f18,	// (0x00082e65) scroll_pane_cp24

0x9f66,	// (0x00082eb3) vod_btn_pane_ParamLimits

0x9f66,	// (0x00082eb3) vod_btn_pane

0x9fac,	// (0x00082ef9) vod_det_pane_ParamLimits

0x9fac,	// (0x00082ef9) vod_det_pane

0x9fdc,	// (0x00082f29) vod_logo_g1_ParamLimits

0x9fdc,	// (0x00082f29) vod_logo_g1

0xa01a,	// (0x00082f67) vod_opt_pane_ParamLimits

0xa01a,	// (0x00082f67) vod_opt_pane

0xa04d,	// (0x00082f9a) vod_opt_pane_cp01_ParamLimits

0xa04d,	// (0x00082f9a) vod_opt_pane_cp01

0xa079,	// (0x00082fc6) vod_query_pane_ParamLimits

0xa079,	// (0x00082fc6) vod_query_pane

0xa0a4,	// (0x00082ff1) vod_query_pane_cp01_ParamLimits

0xa0a4,	// (0x00082ff1) vod_query_pane_cp01

0xa0b0,	// (0x00082ffd) vod_t_nml_pane_ParamLimits

0xa0b0,	// (0x00082ffd) vod_t_nml_pane

0xa15d,	// (0x000830aa) vod_t_nml_pane_cp01_ParamLimits

0xa15d,	// (0x000830aa) vod_t_nml_pane_cp01

0xa199,	// (0x000830e6) vod_t_sub_pane_ParamLimits

0xa199,	// (0x000830e6) vod_t_sub_pane

0xa1ca,	// (0x00083117) vod_t_sub_pane_cp01_ParamLimits

0xa1ca,	// (0x00083117) vod_t_sub_pane_cp01

0xcf22,	// (0x00085e6f) vod_query_field_pane

0xcf71,	// (0x00085ebe) vod_query_pane_t1

0xcf80,	// (0x00085ecd) bg_button_pane_cp25

0xcc21,	// (0x00085b6e) sso_btn_pane_t1_copy2

0xa1f6,	// (0x00083143) vod_t_nml_pane_t1_ParamLimits

0xa1f6,	// (0x00083143) vod_t_nml_pane_t1

0xcf89,	// (0x00085ed6) vod_opt_row_pane_ParamLimits

0xcf89,	// (0x00085ed6) vod_opt_row_pane

0xcf9b,	// (0x00085ee8) vod_t_sub_pane_t1_ParamLimits

0xcf9b,	// (0x00085ee8) vod_t_sub_pane_t1

0xcfb4,	// (0x00085f01) vod_det_cell_pane_ParamLimits

0xcfb4,	// (0x00085f01) vod_det_cell_pane

0xa2ad,	// (0x000831fa) input_focus_pane_cp15

0xcfc5,	// (0x00085f12) vod_query_field_pane_t1

0xcfd3,	// (0x00085f20) vod_opt_row_pane_g1_ParamLimits

0xcfd3,	// (0x00085f20) vod_opt_row_pane_g1

0xcfdf,	// (0x00085f2c) vod_opt_row_pane_t1_ParamLimits

0xcfdf,	// (0x00085f2c) vod_opt_row_pane_t1

0xcfff,	// (0x00085f4c) vod_det_cell_field_pane

0xd008,	// (0x00085f55) vod_det_cell_pane_g1

0xd010,	// (0x00085f5d) vod_det_cell_pane_t1

0xa2ad,	// (0x000831fa) input_focus_pane_cp16

0xd01f,	// (0x00085f6c) vod_det_cell_field_pane_t1

0x8c47,	// (0x00081b94) call7_btn_grp_pane_ParamLimits

0x8c47,	// (0x00081b94) call7_btn_grp_pane

0xa227,	// (0x00083174) call7_bubble_pane_ParamLimits

0xa227,	// (0x00083174) call7_bubble_pane

0xa23e,	// (0x0008318b) cell_call7_btn_pane_ParamLimits

0xa23e,	// (0x0008318b) cell_call7_btn_pane

0xa251,	// (0x0008319e) call7_pane_g1_ParamLimits

0xa251,	// (0x0008319e) call7_pane_g1

0xa260,	// (0x000831ad) call7_windows_conf_pane_ParamLimits

0xa260,	// (0x000831ad) call7_windows_conf_pane

0xa27a,	// (0x000831c7) popup_call7_1st_window_ParamLimits

0xa27a,	// (0x000831c7) popup_call7_1st_window

0xa28b,	// (0x000831d8) popup_call7_2nd_window_ParamLimits

0xa28b,	// (0x000831d8) popup_call7_2nd_window

0xa29c,	// (0x000831e9) popup_call7_3rd_window_ParamLimits

0xa29c,	// (0x000831e9) popup_call7_3rd_window

0xa2ad,	// (0x000831fa) bg_button_pane_cp26

0xc993,	// (0x000858e0) cell_call7_btn_pane_g1

0xc99c,	// (0x000858e9) cell_call7_btn_pane_t1

0xa2ad,	// (0x000831fa) bg_popup_window_pane_cp12

0xd02d,	// (0x00085f7a) popup_call7_1st_window_g1

0xd035,	// (0x00085f82) popup_call7_1st_window_g2

0xd03d,	// (0x00085f8a) popup_call7_1st_window_g3

0x0002,

0xfdf8,	// (0x00088d45) popup_call7_1st_window_g

0xd045,	// (0x00085f92) popup_call7_1st_window_t1

0xd054,	// (0x00085fa1) popup_call7_1st_window_t2

0xd062,	// (0x00085faf) popup_call7_1st_window_t3

0x0002,

0xfdff,	// (0x00088d4c) popup_call7_1st_window_t

0xa2ad,	// (0x000831fa) bg_popup_window_pane_cp13

0xd070,	// (0x00085fbd) popup_call7_2nd_window_g1

0xd078,	// (0x00085fc5) popup_call7_2nd_window_g2

0xd080,	// (0x00085fcd) popup_call7_2nd_window_g3

0x0002,

0xfe06,	// (0x00088d53) popup_call7_2nd_window_g

0xd088,	// (0x00085fd5) popup_call7_2nd_window_t1

0xa2ad,	// (0x000831fa) bg_popup_window_pane_cp14

0xd097,	// (0x00085fe4) call7_list_conf_pane

0xd09f,	// (0x00085fec) call7_list_conf_row_pane_ParamLimits

0xd09f,	// (0x00085fec) call7_list_conf_row_pane

0xd0b2,	// (0x00085fff) call7_list_conf_row_pane_g1

0xd0ba,	// (0x00086007) call7_list_conf_row_pane_g2

0x0001,

0xfe0d,	// (0x00088d5a) call7_list_conf_row_pane_g

0xd0c2,	// (0x0008600f) call7_list_conf_row_pane_t1

0xa2ad,	// (0x000831fa) list_highlight_pane_cp22

0x981f,	// (0x0008276c) sso_option_pane_cp01_ParamLimits

0x981f,	// (0x0008276c) sso_option_pane_cp01

0xa9a0,	// (0x000838ed) msg_header_pane_ParamLimits

0xd2e5,	// (0x00086232) bg_button_pane_cp01_ParamLimits

0xb7ea,	// (0x00084737) input_focus_pane_cp07_ParamLimits

0x8557,	// (0x000814a4) popup_email_progress_window

0xaa61,	// (0x000839ae) popup_email_progress_window_g1

0xd0d0,	// (0x0008601d) popup_email_progress_window_g2

0x0001,

0xfe12,	// (0x00088d5f) popup_email_progress_window_g

0xd0d8,	// (0x00086025) popup_email_progress_window_t1

0xa2ad,	// (0x000831fa) cmail_conv_pane

0xc06e,	// (0x00084fbb) list_single_dyc_row_pane_g5_ParamLimits

0xc06e,	// (0x00084fbb) list_single_dyc_row_pane_g5

0xc07a,	// (0x00084fc7) list_single_dyc_row_pane_g6_ParamLimits

0xc07a,	// (0x00084fc7) list_single_dyc_row_pane_g6

0xc092,	// (0x00084fdf) list_single_dyc_row_pane_g7_ParamLimits

0xc092,	// (0x00084fdf) list_single_dyc_row_pane_g7

0x9146,	// (0x00082093) main_button_pane_5_ParamLimits

0x9146,	// (0x00082093) main_button_pane_5

0x965c,	// (0x000825a9) sso_emg_call_btn_pane_ParamLimits

0x965c,	// (0x000825a9) sso_emg_call_btn_pane

0x99c2,	// (0x0008290f) sso_t_sub_pane_cp01_ParamLimits

0x99c2,	// (0x0008290f) sso_t_sub_pane_cp01

0xce58,	// (0x00085da5) sso_option_row_pane_g1_ParamLimits

0xce64,	// (0x00085db1) sso_option_row_pane_g2_ParamLimits

0xce64,	// (0x00085db1) sso_option_row_pane_g2

0x0001,

0xfde7,	// (0x00088d34) sso_option_row_pane_g_ParamLimits

0xfde7,	// (0x00088d34) sso_option_row_pane_g

0x9b68,	// (0x00082ab5) att_btn_pane_cp02_ParamLimits

0x9b68,	// (0x00082ab5) att_btn_pane_cp02

0xd0e6,	// (0x00086033) cmail_conv_hdr_pane

0xd0ef,	// (0x0008603c) list_cmail_conv_pane

0xd0f9,	// (0x00086046) scroll_pane_cp31

0xd101,	// (0x0008604e) cmail_conv_hdr_pane_t1

0xd10f,	// (0x0008605c) cmail_conv_hdr_pane_t2

0x0001,

0xfe17,	// (0x00088d64) cmail_conv_hdr_pane_t

0xd11d,	// (0x0008606a) bubble_cmail_conv_pane_ParamLimits

0xd11d,	// (0x0008606a) bubble_cmail_conv_pane

0xd135,	// (0x00086082) aid_size_colorization_pane

0xad1e,	// (0x00083c6b) bg_bubble_cmail_conv_pane

0xd13d,	// (0x0008608a) body_bubble_cmail_conv_pane

0xd145,	// (0x00086092) bubble_cmail_conv_pane_g1

0xd14d,	// (0x0008609a) bubble_cmail_conv_pane_g2

0xd155,	// (0x000860a2) bubble_cmail_conv_pane_g3

0x0002,

0xfe1c,	// (0x00088d69) bubble_cmail_conv_pane_g

0xd15d,	// (0x000860aa) bubble_cmail_conv_pane_t1

0xd16b,	// (0x000860b8) bg_bubble_cmail_conv_pane_g1

0xd174,	// (0x000860c1) bg_bubble_cmail_conv_pane_g2

0xd17d,	// (0x000860ca) bg_bubble_cmail_conv_pane_g3

0x0002,

0xfe23,	// (0x00088d70) bg_bubble_cmail_conv_pane_g

0xd186,	// (0x000860d3) body_bubble_cmail_conv_pane_t1_ParamLimits

0xd186,	// (0x000860d3) body_bubble_cmail_conv_pane_t1

0xd19d,	// (0x000860ea) body_bubble_cmail_conv_pane_t2_ParamLimits

0xd19d,	// (0x000860ea) body_bubble_cmail_conv_pane_t2

0x0001,

0xfe2a,	// (0x00088d77) body_bubble_cmail_conv_pane_t_ParamLimits

0xfe2a,	// (0x00088d77) body_bubble_cmail_conv_pane_t

0xa324,	// (0x00083271) list_highlight_pane_cp024_ParamLimits
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	};

} // end of namespace AknLayoutScalable_Elaf_phl_apps_qhd_lsc_tch_Large

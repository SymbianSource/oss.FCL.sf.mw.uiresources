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

#include "aknlayoutscalable_elaf_pvp4_apps_vga4_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0007d52a };

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
0x1e5f,	// (0x0007f389) Screen

0x1e6b,	// (0x0007f395) application_window

0x1eab,	// (0x0007f3d5) area_bottom_pane_ParamLimits

0x1eab,	// (0x0007f3d5) area_bottom_pane

0x1ee0,	// (0x0007f40a) area_top_pane_ParamLimits

0x1ee0,	// (0x0007f40a) area_top_pane

0xa17c,	// (0x000876a6) call_video_uplink_pane_ParamLimits

0xa17c,	// (0x000876a6) call_video_uplink_pane

0x1f6f,	// (0x0007f499) main_pane_ParamLimits

0x1f6f,	// (0x0007f499) main_pane

0xc873,	// (0x00089d9d) context_pane

0x562b,	// (0x00082b55) navi_pane

0x564f,	// (0x00082b79) popup_cale_events_window_ParamLimits

0x564f,	// (0x00082b79) popup_cale_events_window

0xc886,	// (0x00089db0) popup_mup_playback_window

0x5667,	// (0x00082b91) signal_pane

0xa8fb,	// (0x00087e25) main_browser_pane

0xb40b,	// (0x00088935) main_burst_pane

0x54dd,	// (0x00082a07) main_calc_pane

0xc816,	// (0x00089d40) main_cale_day_pane

0x2689,	// (0x0007fbb3) main_cale_month_pane

0xc816,	// (0x00089d40) main_cale_week_pane

0xb40b,	// (0x00088935) main_call_pane

0xa5ad,	// (0x00087ad7) main_call_poc_pane

0xb40b,	// (0x00088935) main_camera_pane

0xb40b,	// (0x00088935) main_chi_dic_pane

0xb29f,	// (0x000887c9) main_clock_pane

0xa5ad,	// (0x00087ad7) main_fmradio_pane

0xb40b,	// (0x00088935) main_graph_messa_pane

0xa5ad,	// (0x00087ad7) main_help_pane

0xa8fb,	// (0x00087e25) main_im_pane

0xa808,	// (0x00087d32) main_image_pane_ParamLimits

0xa808,	// (0x00087d32) main_image_pane

0xa5ad,	// (0x00087ad7) main_location2_pane

0xb40b,	// (0x00088935) main_location_pane

0xa808,	// (0x00087d32) main_messa_pane

0xa5ad,	// (0x00087ad7) main_mp2_pane

0xb40b,	// (0x00088935) main_mp_pane

0xa5ad,	// (0x00087ad7) main_msg_pane

0xa5ad,	// (0x00087ad7) main_mup_eq_pane

0xa5ad,	// (0x00087ad7) main_mup_pane

0xa8fb,	// (0x00087e25) main_notes_pane

0xa5ad,	// (0x00087ad7) main_pec_pane

0xa5ad,	// (0x00087ad7) main_phob_pane

0xa5ad,	// (0x00087ad7) main_pinb_pane

0xa5ad,	// (0x00087ad7) main_postcard_pane

0xa5ad,	// (0x00087ad7) main_qdial_pane

0xb40b,	// (0x00088935) main_skin_pane

0xa5ad,	// (0x00087ad7) main_smil2_pane

0xb40b,	// (0x00088935) main_smil_pane

0xb40b,	// (0x00088935) main_video_pane

0xb40b,	// (0x00088935) main_video_tele_pane

0xa808,	// (0x00087d32) main_viewer_pane_ParamLimits

0xa808,	// (0x00087d32) main_viewer_pane

0xb40b,	// (0x00088935) main_vorec_pane

0x5515,	// (0x00082a3f) popup_blid_sat_info_window_ParamLimits

0x5515,	// (0x00082a3f) popup_blid_sat_info_window

0x552f,	// (0x00082a59) popup_dyc_status_message_window_ParamLimits

0x552f,	// (0x00082a59) popup_dyc_status_message_window

0x553f,	// (0x00082a69) popup_grid_large_graphic_window_ParamLimits

0x553f,	// (0x00082a69) popup_grid_large_graphic_window

0x55b7,	// (0x00082ae1) popup_loc_request_window_ParamLimits

0x55b7,	// (0x00082ae1) popup_loc_request_window

0x55ff,	// (0x00082b29) popup_wml_address_window_ParamLimits

0x55ff,	// (0x00082b29) popup_wml_address_window

0x53b5,	// (0x000828df) call_muted_g1

0x5074,	// (0x0008259e) popup_call_audio_conf_window_ParamLimits

0x5074,	// (0x0008259e) popup_call_audio_conf_window

0x53c5,	// (0x000828ef) popup_call_audio_first_window_ParamLimits

0x53c5,	// (0x000828ef) popup_call_audio_first_window

0x5405,	// (0x0008292f) popup_call_audio_in_window_ParamLimits

0x5405,	// (0x0008292f) popup_call_audio_in_window

0x5429,	// (0x00082953) popup_call_audio_out_window_ParamLimits

0x5429,	// (0x00082953) popup_call_audio_out_window

0x544b,	// (0x00082975) popup_call_audio_second_window_ParamLimits

0x544b,	// (0x00082975) popup_call_audio_second_window

0x547b,	// (0x000829a5) popup_call_audio_wait_window_ParamLimits

0x547b,	// (0x000829a5) popup_call_audio_wait_window

0x549c,	// (0x000829c6) popup_number_entry_window_ParamLimits

0x549c,	// (0x000829c6) popup_number_entry_window

0xa19a,	// (0x000876c4) bg_popup_call_pane_cp05_ParamLimits

0xa19a,	// (0x000876c4) bg_popup_call_pane_cp05

0xa1ba,	// (0x000876e4) popup_number_entry_window_t1

0xa1cd,	// (0x000876f7) popup_number_entry_window_t2

0xa1df,	// (0x00087709) popup_number_entry_window_t3

0x0003,

0xf0c6,	// (0x0008c5f0) popup_number_entry_window_t

0xa1f1,	// (0x0008771b) text_title_cp2

0xa204,	// (0x0008772e) bg_popup_call_pane_cp_ParamLimits

0xa204,	// (0x0008772e) bg_popup_call_pane_cp

0xa212,	// (0x0008773c) call_thumbnail_pane

0xa21a,	// (0x00087744) popup_call_audio_in_window_g1_ParamLimits

0xa21a,	// (0x00087744) popup_call_audio_in_window_g1

0xa226,	// (0x00087750) popup_call_audio_in_window_g2_ParamLimits

0xa226,	// (0x00087750) popup_call_audio_in_window_g2

0xa232,	// (0x0008775c) popup_call_audio_in_window_g3_ParamLimits

0xa232,	// (0x0008775c) popup_call_audio_in_window_g3

0x0002,

0xf0cf,	// (0x0008c5f9) popup_call_audio_in_window_g_ParamLimits

0xf0cf,	// (0x0008c5f9) popup_call_audio_in_window_g

0xa23e,	// (0x00087768) popup_call_audio_in_window_t1_ParamLimits

0xa23e,	// (0x00087768) popup_call_audio_in_window_t1

0xa25a,	// (0x00087784) popup_call_audio_in_window_t2_ParamLimits

0xa25a,	// (0x00087784) popup_call_audio_in_window_t2

0xa276,	// (0x000877a0) popup_call_audio_in_window_t3_ParamLimits

0xa276,	// (0x000877a0) popup_call_audio_in_window_t3

0x0002,

0xf0d6,	// (0x0008c600) popup_call_audio_in_window_t_ParamLimits

0xf0d6,	// (0x0008c600) popup_call_audio_in_window_t

0xa204,	// (0x0008772e) bg_popup_call_pane_cp01_ParamLimits

0xa204,	// (0x0008772e) bg_popup_call_pane_cp01

0xa212,	// (0x0008773c) call_thumbnail_pane_cp02

0xa289,	// (0x000877b3) call_type_pane_cp022

0xa291,	// (0x000877bb) popup_call_audio_out_window_g1_ParamLimits

0xa291,	// (0x000877bb) popup_call_audio_out_window_g1

0xa2a3,	// (0x000877cd) popup_call_audio_out_window_g2_ParamLimits

0xa2a3,	// (0x000877cd) popup_call_audio_out_window_g2

0xa2af,	// (0x000877d9) popup_call_audio_out_window_g3_ParamLimits

0xa2af,	// (0x000877d9) popup_call_audio_out_window_g3

0x0002,

0xf0dd,	// (0x0008c607) popup_call_audio_out_window_g_ParamLimits

0xf0dd,	// (0x0008c607) popup_call_audio_out_window_g

0xa2c1,	// (0x000877eb) popup_call_audio_out_window_t1_ParamLimits

0xa2c1,	// (0x000877eb) popup_call_audio_out_window_t1

0xa2d9,	// (0x00087803) popup_call_audio_out_window_t2_ParamLimits

0xa2d9,	// (0x00087803) popup_call_audio_out_window_t2

0x0001,

0xf0e4,	// (0x0008c60e) popup_call_audio_out_window_t_ParamLimits

0xf0e4,	// (0x0008c60e) popup_call_audio_out_window_t

0xa2ee,	// (0x00087818) bg_popup_call_pane_ParamLimits

0xa2ee,	// (0x00087818) bg_popup_call_pane

0x2173,	// (0x0007f69d) call_thumbnail_pane_cp_ParamLimits

0x2173,	// (0x0007f69d) call_thumbnail_pane_cp

0xa372,	// (0x0008789c) call_type_pane_cp01_ParamLimits

0xa372,	// (0x0008789c) call_type_pane_cp01

0xa3b6,	// (0x000878e0) popup_call_audio_first_window_g1_ParamLimits

0xa3b6,	// (0x000878e0) popup_call_audio_first_window_g1

0xa402,	// (0x0008792c) popup_call_audio_first_window_g2_ParamLimits

0xa402,	// (0x0008792c) popup_call_audio_first_window_g2

0x0001,

0xf0e9,	// (0x0008c613) popup_call_audio_first_window_g_ParamLimits

0xf0e9,	// (0x0008c613) popup_call_audio_first_window_g

0xa446,	// (0x00087970) popup_call_audio_first_window_t1_ParamLimits

0xa446,	// (0x00087970) popup_call_audio_first_window_t1

0xa4f2,	// (0x00087a1c) popup_call_audio_first_window_t4_ParamLimits

0xa4f2,	// (0x00087a1c) popup_call_audio_first_window_t4

0xa57e,	// (0x00087aa8) popup_call_audio_first_window_t5_ParamLimits

0xa57e,	// (0x00087aa8) popup_call_audio_first_window_t5

0x0002,

0xf0ee,	// (0x0008c618) popup_call_audio_first_window_t_ParamLimits

0xf0ee,	// (0x0008c618) popup_call_audio_first_window_t

0xa5ad,	// (0x00087ad7) bg_popup_call_pane_cp02

0xa5b7,	// (0x00087ae1) call_type_pane_cp023

0xa5bf,	// (0x00087ae9) popup_call_audio_wait_window_g1

0xa5c7,	// (0x00087af1) popup_call_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x0008c61f) popup_call_audio_wait_window_g

0xa5cf,	// (0x00087af9) popup_call_audio_wait_window_t3

0xa5dd,	// (0x00087b07) bg_popup_call_pane_cp03_ParamLimits

0xa5dd,	// (0x00087b07) bg_popup_call_pane_cp03

0xa63d,	// (0x00087b67) call_thumbnail_pane_cp011_ParamLimits

0xa63d,	// (0x00087b67) call_thumbnail_pane_cp011

0xa649,	// (0x00087b73) call_type_pane_cp034_ParamLimits

0xa649,	// (0x00087b73) call_type_pane_cp034

0xa685,	// (0x00087baf) popup_call_audio_second_window_g1_ParamLimits

0xa685,	// (0x00087baf) popup_call_audio_second_window_g1

0xa6c1,	// (0x00087beb) popup_call_audio_second_window_g2_ParamLimits

0xa6c1,	// (0x00087beb) popup_call_audio_second_window_g2

0x0001,

0xf0fa,	// (0x0008c624) popup_call_audio_second_window_g_ParamLimits

0xf0fa,	// (0x0008c624) popup_call_audio_second_window_g

0xa6fd,	// (0x00087c27) popup_call_audio_second_window_t1_ParamLimits

0xa6fd,	// (0x00087c27) popup_call_audio_second_window_t1

0xa77e,	// (0x00087ca8) popup_call_audio_second_window_t2_ParamLimits

0xa77e,	// (0x00087ca8) popup_call_audio_second_window_t2

0xa7b4,	// (0x00087cde) popup_call_audio_second_window_t3_ParamLimits

0xa7b4,	// (0x00087cde) popup_call_audio_second_window_t3

0x0002,

0xf0ff,	// (0x0008c629) popup_call_audio_second_window_t_ParamLimits

0xf0ff,	// (0x0008c629) popup_call_audio_second_window_t

0xa5ad,	// (0x00087ad7) bg_popup_call_pane_cp04

0xa7ea,	// (0x00087d14) list_conf_pane

0xa7f2,	// (0x00087d1c) popup_call_audio_conf_window_t1

0xa800,	// (0x00087d2a) call_thumbnail_pane_g1

0xa808,	// (0x00087d32) bg_pinb_pane_ParamLimits

0xa808,	// (0x00087d32) bg_pinb_pane

0xa816,	// (0x00087d40) find_pinb_pane

0xa81f,	// (0x00087d49) listscroll_pinb_pane_ParamLimits

0xa81f,	// (0x00087d49) listscroll_pinb_pane

0xa82e,	// (0x00087d58) pinb_bg_pane_g1

0x2197,	// (0x0007f6c1) pinb_bg_pane_g2

0x21a3,	// (0x0007f6cd) pinb_bg_pane_g3

0x21af,	// (0x0007f6d9) pinb_bg_pane_g4

0x21bb,	// (0x0007f6e5) pinb_bg_pane_g5

0x21c7,	// (0x0007f6f1) pinb_bg_pane_g6

0x21d2,	// (0x0007f6fc) pinb_bg_pane_g7

0x21dd,	// (0x0007f707) pinb_bg_pane_g8

0x21e8,	// (0x0007f712) pinb_bg_pane_g9

0x21f2,	// (0x0007f71c) pinb_bg_pane_g10

0x0009,

0xf106,	// (0x0008c630) pinb_bg_pane_g

0x220f,	// (0x0007f739) grid_pinb_pane

0x221a,	// (0x0007f744) list_pinb_pane

0x2225,	// (0x0007f74f) scroll_pane_cp01_ParamLimits

0x2225,	// (0x0007f74f) scroll_pane_cp01

0xa838,	// (0x00087d62) find_pinb_pane_g1_ParamLimits

0xa838,	// (0x00087d62) find_pinb_pane_g1

0xa850,	// (0x00087d7a) find_pinb_pane_t1

0xa862,	// (0x00087d8c) find_pinb_pane_t2

0x0001,

0xf120,	// (0x0008c64a) find_pinb_pane_t

0xa877,	// (0x00087da1) input_focus_pane_cp01_ParamLimits

0xa877,	// (0x00087da1) input_focus_pane_cp01

0x2237,	// (0x0007f761) cell_pinb_pane_ParamLimits

0x2237,	// (0x0007f761) cell_pinb_pane

0x225c,	// (0x0007f786) cell_pinb_pane_g1_ParamLimits

0x225c,	// (0x0007f786) cell_pinb_pane_g1

0x2271,	// (0x0007f79b) cell_pinb_pane_g2_ParamLimits

0x2271,	// (0x0007f79b) cell_pinb_pane_g2

0xa883,	// (0x00087dad) cell_pinb_pane_g3_ParamLimits

0xa883,	// (0x00087dad) cell_pinb_pane_g3

0x0002,

0xf125,	// (0x0008c64f) cell_pinb_pane_g_ParamLimits

0xf125,	// (0x0008c64f) cell_pinb_pane_g

0xa5ad,	// (0x00087ad7) grid_highlight_pane_cp01

0x227d,	// (0x0007f7a7) list_pinb_item_pane_ParamLimits

0x227d,	// (0x0007f7a7) list_pinb_item_pane

0xa5ad,	// (0x00087ad7) list_highlight_pane_cp02

0x229b,	// (0x0007f7c5) list_pinb_item_pane_g1_ParamLimits

0x229b,	// (0x0007f7c5) list_pinb_item_pane_g1

0x22a8,	// (0x0007f7d2) list_pinb_item_pane_g2_ParamLimits

0x22a8,	// (0x0007f7d2) list_pinb_item_pane_g2

0x22b4,	// (0x0007f7de) list_pinb_item_pane_g3_ParamLimits

0x22b4,	// (0x0007f7de) list_pinb_item_pane_g3

0x22c5,	// (0x0007f7ef) list_pinb_item_pane_g4_ParamLimits

0x22c5,	// (0x0007f7ef) list_pinb_item_pane_g4

0x0003,

0xf12c,	// (0x0008c656) list_pinb_item_pane_g_ParamLimits

0xf12c,	// (0x0008c656) list_pinb_item_pane_g

0x22d1,	// (0x0007f7fb) list_pinb_item_pane_t1_ParamLimits

0x22d1,	// (0x0007f7fb) list_pinb_item_pane_t1

0x2302,	// (0x0007f82c) calc_display_pane

0x2320,	// (0x0007f84a) calc_paper_pane

0x233c,	// (0x0007f866) grid_calc_pane

0xa5ad,	// (0x00087ad7) bg_list_pane_cp01

0x2368,	// (0x0007f892) clock_g1

0x2370,	// (0x0007f89a) clock_g2

0x0001,

0xf135,	// (0x0008c65f) clock_g

0x237a,	// (0x0007f8a4) clock_t1_ParamLimits

0x237a,	// (0x0007f8a4) clock_t1

0x238f,	// (0x0007f8b9) clock_t2_ParamLimits

0x238f,	// (0x0007f8b9) clock_t2

0x23a1,	// (0x0007f8cb) clock_t3_ParamLimits

0x23a1,	// (0x0007f8cb) clock_t3

0x23b3,	// (0x0007f8dd) clock_t4_ParamLimits

0x23b3,	// (0x0007f8dd) clock_t4

0x23c5,	// (0x0007f8ef) clock_t5_ParamLimits

0x23c5,	// (0x0007f8ef) clock_t5

0x23da,	// (0x0007f904) clock_t6_ParamLimits

0x23da,	// (0x0007f904) clock_t6

0x23ec,	// (0x0007f916) clock_t7_ParamLimits

0x23ec,	// (0x0007f916) clock_t7

0x23fe,	// (0x0007f928) clock_t8_ParamLimits

0x23fe,	// (0x0007f928) clock_t8

0x2414,	// (0x0007f93e) clock_t9_ParamLimits

0x2414,	// (0x0007f93e) clock_t9

0x0008,

0xf13a,	// (0x0008c664) clock_t_ParamLimits

0xf13a,	// (0x0008c664) clock_t

0xa88f,	// (0x00087db9) popup_clock_analogue_window_cp02

0xa88f,	// (0x00087db9) popup_clock_digital_window_cp01

0xa897,	// (0x00087dc1) listscroll_help_pane

0xa5ad,	// (0x00087ad7) phob_pre_status_pane

0xa8a1,	// (0x00087dcb) grid_qdial_pane

0xa808,	// (0x00087d32) listscroll_mce_pane

0xa808,	// (0x00087d32) bg_notes_pane

0xa8ab,	// (0x00087dd5) list_notes_pane

0x242a,	// (0x0007f954) scroll_pane_cp06

0xa8b9,	// (0x00087de3) bg_calc_paper_pane

0x2439,	// (0x0007f963) list_calc_pane

0xa8fb,	// (0x00087e25) bg_calc_display_pane

0x2453,	// (0x0007f97d) calc_display_pane_t1

0x2468,	// (0x0007f992) calc_display_pane_t2

0x247d,	// (0x0007f9a7) calc_display_pane_t3

0x0002,

0xf14d,	// (0x0008c677) calc_display_pane_t

0x248f,	// (0x0007f9b9) cell_calc_pane_ParamLimits

0x248f,	// (0x0007f9b9) cell_calc_pane

0xa907,	// (0x00087e31) bg_calc_paper_pane_g1

0xa913,	// (0x00087e3d) bg_calc_paper_pane_g2

0xa91f,	// (0x00087e49) bg_calc_paper_pane_g3

0xa92b,	// (0x00087e55) bg_calc_paper_pane_g4

0xa937,	// (0x00087e61) bg_calc_paper_pane_g5

0x24be,	// (0x0007f9e8) bg_calc_paper_pane_g6

0x24cf,	// (0x0007f9f9) bg_calc_paper_pane_g7

0x24e0,	// (0x0007fa0a) bg_calc_paper_pane_g8

0x0007,

0xf154,	// (0x0008c67e) bg_calc_paper_pane_g

0x24f3,	// (0x0007fa1d) calc_bg_paper_pane_g9

0x2506,	// (0x0007fa30) list_calc_item_pane_ParamLimits

0x2506,	// (0x0007fa30) list_calc_item_pane

0xa943,	// (0x00087e6d) list_calc_item_pane_g1

0x2527,	// (0x0007fa51) list_calc_item_pane_t1_ParamLimits

0x2527,	// (0x0007fa51) list_calc_item_pane_t1

0x2539,	// (0x0007fa63) list_calc_item_pane_t2_ParamLimits

0x2539,	// (0x0007fa63) list_calc_item_pane_t2

0x0001,

0xf165,	// (0x0008c68f) list_calc_item_pane_t_ParamLimits

0xf165,	// (0x0008c68f) list_calc_item_pane_t

0xa950,	// (0x00087e7a) cell_calc_pane_g1

0xa95a,	// (0x00087e84) grid_highlight_pane_cp02

0xa97c,	// (0x00087ea6) bg_calc_display_pane_g1

0x2569,	// (0x0007fa93) bg_calc_display_pane_g2

0xa985,	// (0x00087eaf) bg_calc_display_pane_g3

0x0002,

0xf16f,	// (0x0008c699) bg_calc_display_pane_g

0x2573,	// (0x0007fa9d) cell_qdial_pane_ParamLimits

0x2573,	// (0x0007fa9d) cell_qdial_pane

0x2589,	// (0x0007fab3) cell_qdial_pane_g1_ParamLimits

0x2589,	// (0x0007fab3) cell_qdial_pane_g1

0x2596,	// (0x0007fac0) cell_qdial_pane_g2_ParamLimits

0x2596,	// (0x0007fac0) cell_qdial_pane_g2

0xa98e,	// (0x00087eb8) cell_qdial_pane_g3_ParamLimits

0xa98e,	// (0x00087eb8) cell_qdial_pane_g3

0x0003,

0xf176,	// (0x0008c6a0) cell_qdial_pane_g_ParamLimits

0xf176,	// (0x0008c6a0) cell_qdial_pane_g

0x25b4,	// (0x0007fade) cell_qdial_pane_t1_ParamLimits

0x25b4,	// (0x0007fade) cell_qdial_pane_t1

0x25cc,	// (0x0007faf6) cell_qdial_pane_t2_ParamLimits

0x25cc,	// (0x0007faf6) cell_qdial_pane_t2

0x25df,	// (0x0007fb09) cell_qdial_pane_t3_ParamLimits

0x25df,	// (0x0007fb09) cell_qdial_pane_t3

0x0002,

0xf17f,	// (0x0008c6a9) cell_qdial_pane_t_ParamLimits

0xf17f,	// (0x0008c6a9) cell_qdial_pane_t

0xa5ad,	// (0x00087ad7) grid_highlight_pane_cp04

0xa99a,	// (0x00087ec4) thumbnail_qdial_pane_ParamLimits

0xa99a,	// (0x00087ec4) thumbnail_qdial_pane

0xa9f6,	// (0x00087f20) list_help_pane

0xa9ff,	// (0x00087f29) scroll_pane_cp02

0x25f2,	// (0x0007fb1c) help_list_pane_t1_ParamLimits

0x25f2,	// (0x0007fb1c) help_list_pane_t1

0x2619,	// (0x0007fb43) bg_notes_pane_g2

0x2621,	// (0x0007fb4b) bg_notes_pane_g3

0x2629,	// (0x0007fb53) notes_bg_pane_g1

0x2631,	// (0x0007fb5b) notes_bg_pane_g4

0x2639,	// (0x0007fb63) notes_bg_pane_g5

0x2641,	// (0x0007fb6b) notes_bg_pane_g6

0x2649,	// (0x0007fb73) notes_bg_pane_g7

0x2651,	// (0x0007fb7b) notes_bg_pane_g8

0x2659,	// (0x0007fb83) notes_bg_pane_g9

0x0006,

0xf19d,	// (0x0008c6c7) notes_bg_pane_g

0x2661,	// (0x0007fb8b) list_notes_text_pane_ParamLimits

0x2661,	// (0x0007fb8b) list_notes_text_pane

0xaa08,	// (0x00087f32) list_notes_text_pane_g1

0x0b68,	// (0x0007e092) list_notes_text_pane_t1

0x2689,	// (0x0007fbb3) listscroll_cale_week_pane

0x26bf,	// (0x0007fbe9) bg_cale_heading_pane

0xaa22,	// (0x00087f4c) bg_cale_pane_cp01

0x26e8,	// (0x0007fc12) cale_week_corner_pane

0x2707,	// (0x0007fc31) cale_week_day_heading_pane

0x2735,	// (0x0007fc5f) cale_week_scroll_pane_g1

0x2759,	// (0x0007fc83) cale_week_scroll_pane_g2

0x2771,	// (0x0007fc9b) cale_week_scroll_pane_g3

0x2789,	// (0x0007fcb3) cale_week_scroll_pane_g4

0x27a1,	// (0x0007fccb) cale_week_scroll_pane_g5

0x27b9,	// (0x0007fce3) cale_week_scroll_pane_g6

0x27d9,	// (0x0007fd03) cale_week_scroll_pane_g7

0x27f9,	// (0x0007fd23) cale_week_scroll_pane_g8

0x2819,	// (0x0007fd43) cale_week_scroll_pane_g9

0x2836,	// (0x0007fd60) cale_week_scroll_pane_g10

0x2853,	// (0x0007fd7d) cale_week_scroll_pane_g11

0x2870,	// (0x0007fd9a) cale_week_scroll_pane_g12

0x288d,	// (0x0007fdb7) cale_week_scroll_pane_g13

0x28b2,	// (0x0007fddc) cale_week_scroll_pane_g14

0x28db,	// (0x0007fe05) cale_week_scroll_pane_g15

0x000f,

0xf1ac,	// (0x0008c6d6) cale_week_scroll_pane_g

0x2924,	// (0x0007fe4e) cale_week_time_pane

0x2944,	// (0x0007fe6e) grid_cale_week_pane

0xaa52,	// (0x00087f7c) scroll_pane_cp08

0x2977,	// (0x0007fea1) cell_cale_week_pane_ParamLimits

0x2977,	// (0x0007fea1) cell_cale_week_pane

0x2a07,	// (0x0007ff31) cale_week_day_heading_pane_t1

0x2a4f,	// (0x0007ff79) cale_week_day_heading_pane_t2

0x2a9c,	// (0x0007ffc6) cale_week_day_heading_pane_t3

0x2ae9,	// (0x00080013) cale_week_day_heading_pane_t4

0x2b36,	// (0x00080060) cale_week_day_heading_pane_t5

0x2b83,	// (0x000800ad) cale_week_day_heading_pane_t6

0x2bd0,	// (0x000800fa) cale_week_day_heading_pane_t7

0x0006,

0xf1cd,	// (0x0008c6f7) cale_week_day_heading_pane_t

0xaa74,	// (0x00087f9e) bg_cale_side_pane

0x2c18,	// (0x00080142) cale_week_time_pane_t1

0x2c5c,	// (0x00080186) cale_week_time_pane_t2

0x2ca0,	// (0x000801ca) cale_week_time_pane_t3

0x2ce4,	// (0x0008020e) cale_week_time_pane_t4

0x2d28,	// (0x00080252) cale_week_time_pane_t5

0x2d6c,	// (0x00080296) cale_week_time_pane_t6

0x2db0,	// (0x000802da) cale_week_time_pane_t7

0x2dfc,	// (0x00080326) cale_week_time_pane_t8

0x0007,

0xf1dc,	// (0x0008c706) cale_week_time_pane_t

0x2e4a,	// (0x00080374) cell_cale_week_pane_g2

0x2e6e,	// (0x00080398) cell_cale_week_pane_g3_ParamLimits

0x2e6e,	// (0x00080398) cell_cale_week_pane_g3

0xaa82,	// (0x00087fac) grid_highlight_pane_cp07

0xaa8a,	// (0x00087fb4) listscroll_gms_pane

0xaa94,	// (0x00087fbe) grid_gms_pane

0xaa9d,	// (0x00087fc7) listscroll_gms_pane_g1

0xaaa5,	// (0x00087fcf) listscroll_gms_pane_g2

0x0001,

0xf1ed,	// (0x0008c717) listscroll_gms_pane_g

0x2e86,	// (0x000803b0) scroll_pane_cp010

0x2e91,	// (0x000803bb) cell_gms_pane_ParamLimits

0x2e91,	// (0x000803bb) cell_gms_pane

0x2ea4,	// (0x000803ce) cell_gms_pane_g1

0xaaad,	// (0x00087fd7) cell_gms_pane_g2

0xaab5,	// (0x00087fdf) cell_gms_pane_g3

0xaabe,	// (0x00087fe8) cell_gms_pane_g4

0x0003,

0xf1f2,	// (0x0008c71c) cell_gms_pane_g

0xaac7,	// (0x00087ff1) grid_highlight_pane_cp09

0x535d,	// (0x00082887) phob_pre_status_pane_g1

0x5365,	// (0x0008288f) phob_pre_status_pane_g2

0x536d,	// (0x00082897) phob_pre_status_pane_g3

0x5375,	// (0x0008289f) phob_pre_status_pane_g4

0x0004,

0xf5e1,	// (0x0008cb0b) phob_pre_status_pane_g

0x5385,	// (0x000828af) phob_pre_status_pane_t1

0x5395,	// (0x000828bf) phob_pre_status_pane_t2

0x53a5,	// (0x000828cf) phob_pre_status_pane_t3

0x0002,

0xf5ec,	// (0x0008cb16) phob_pre_status_pane_t

0xa5ad,	// (0x00087ad7) bg_list_pane_cp05

0x2eb4,	// (0x000803de) grid_vorec_pane

0x2ec0,	// (0x000803ea) vorec_t1

0x2ece,	// (0x000803f8) vorec_t2

0x2edc,	// (0x00080406) vorec_t3

0x2eea,	// (0x00080414) vorec_t4

0x2ef8,	// (0x00080422) vorec_t5

0x2f06,	// (0x00080430) vorec_t6

0x0006,

0xf1fb,	// (0x0008c725) vorec_t

0x2f22,	// (0x0008044c) wait_bar_pane_cp01

0x2f2a,	// (0x00080454) cell_vorec_pane_ParamLimits

0x2f2a,	// (0x00080454) cell_vorec_pane

0x2f3f,	// (0x00080469) cell_vorec_pane_g1

0xa5ad,	// (0x00087ad7) grid_highlight_pane_cp05

0x2f57,	// (0x00080481) cams_zoom_pane

0x2f63,	// (0x0008048d) image_vga_pane

0x2f72,	// (0x0008049c) main_camera_pane_g1

0x2f80,	// (0x000804aa) main_camera_pane_g2

0x2f8c,	// (0x000804b6) main_camera_pane_g3

0x2f9a,	// (0x000804c4) main_camera_pane_g4

0x2fa8,	// (0x000804d2) main_camera_pane_g5

0x2fb6,	// (0x000804e0) main_camera_pane_g6

0x2fc4,	// (0x000804ee) main_camera_pane_g7

0x0007,

0xf20a,	// (0x0008c734) main_camera_pane_g

0x2fd2,	// (0x000804fc) main_camera_pane_t1

0x2fe4,	// (0x0008050e) main_camera_pane_t2

0x0001,

0xf21b,	// (0x0008c745) main_camera_pane_t

0x3007,	// (0x00080531) cams_zoom_pane_cp_ParamLimits

0x3007,	// (0x00080531) cams_zoom_pane_cp

0x302b,	// (0x00080555) image_cif_pane_ParamLimits

0x302b,	// (0x00080555) image_cif_pane

0x3049,	// (0x00080573) image_subqcif_pane

0x3053,	// (0x0008057d) main_video_pane_g1_ParamLimits

0x3053,	// (0x0008057d) main_video_pane_g1

0x3073,	// (0x0008059d) main_video_pane_g2_ParamLimits

0x3073,	// (0x0008059d) main_video_pane_g2

0x30a3,	// (0x000805cd) main_video_pane_g3_ParamLimits

0x30a3,	// (0x000805cd) main_video_pane_g3

0x30cc,	// (0x000805f6) main_video_pane_g4_ParamLimits

0x30cc,	// (0x000805f6) main_video_pane_g4

0x30f5,	// (0x0008061f) main_video_pane_g5_ParamLimits

0x30f5,	// (0x0008061f) main_video_pane_g5

0xaadb,	// (0x00088005) main_video_pane_g6_ParamLimits

0xaadb,	// (0x00088005) main_video_pane_g6

0x0006,

0xf220,	// (0x0008c74a) main_video_pane_g_ParamLimits

0xf220,	// (0x0008c74a) main_video_pane_g

0x3117,	// (0x00080641) main_video_pane_t1_ParamLimits

0x3117,	// (0x00080641) main_video_pane_t1

0xaaf5,	// (0x0008801f) cams_zoom_pane_g1

0xaafe,	// (0x00088028) cams_zoom_pane_g2

0xab07,	// (0x00088031) cams_zoom_pane_g3

0xab10,	// (0x0008803a) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x0008c759) cams_zoom_pane_g

0x3161,	// (0x0008068b) grid_cams_pane

0x316f,	// (0x00080699) linegrid_cams_pane

0x317b,	// (0x000806a5) cell_cams_pane_ParamLimits

0x317b,	// (0x000806a5) cell_cams_pane

0xab19,	// (0x00088043) cams_burst_image_pane

0xab21,	// (0x0008804b) cell_cams_pane_g1

0xa5ad,	// (0x00087ad7) grid_highlight_pane_cp03

0xa950,	// (0x00087e7a) mp_bg_pane_g1

0xa5ad,	// (0x00087ad7) bg_list_pane_cp03

0xc739,	// (0x00089c63) bg_mp_pane

0xc741,	// (0x00089c6b) grid_mp_pane

0xc749,	// (0x00089c73) media_player_g1

0xc753,	// (0x00089c7d) media_player_t1

0xc761,	// (0x00089c8b) media_player_t2

0xc76f,	// (0x00089c99) media_player_t3

0xc77d,	// (0x00089ca7) media_player_t4

0xc78b,	// (0x00089cb5) media_player_t5

0xc799,	// (0x00089cc3) media_player_t6

0xc7a7,	// (0x00089cd1) media_player_t7

0x0006,

0xf5cb,	// (0x0008caf5) media_player_t

0xc7b5,	// (0x00089cdf) wait_bar_pane_cp02

0xf5b0,	// (0x0008cada) main_usb_pane_t

0x5354,	// (0x0008287e) cell_mp_pane

0xa950,	// (0x00087e7a) cell_mp_pane_g1

0xa5ad,	// (0x00087ad7) grid_highlight_pane_cp06

0xab29,	// (0x00088053) grid_skin_colour_pane

0xab31,	// (0x0008805b) list_highlight_pane_cp03

0x31a8,	// (0x000806d2) skin_g1

0xab39,	// (0x00088063) skin_t1

0xab48,	// (0x00088072) skin_t2

0x0001,

0xf264,	// (0x0008c78e) skin_t

0x31b2,	// (0x000806dc) cell_skin_colour_pane_ParamLimits

0x31b2,	// (0x000806dc) cell_skin_colour_pane

0xab56,	// (0x00088080) cell_skin_colour_pane_g1

0x3232,	// (0x0008075c) call_video_g1_ParamLimits

0x3232,	// (0x0008075c) call_video_g1

0x3242,	// (0x0008076c) call_video_g2_ParamLimits

0x3242,	// (0x0008076c) call_video_g2

0x0001,

0xf269,	// (0x0008c793) call_video_g_ParamLimits

0xf269,	// (0x0008c793) call_video_g

0x3292,	// (0x000807bc) call_video_uplink_pane_cp1_ParamLimits

0x3292,	// (0x000807bc) call_video_uplink_pane_cp1

0xab68,	// (0x00088092) call_video_uplink_pane_cp2

0x3360,	// (0x0008088a) video_down_crop_pane_ParamLimits

0x3360,	// (0x0008088a) video_down_crop_pane

0x3452,	// (0x0008097c) video_down_pane_ParamLimits

0x3452,	// (0x0008097c) video_down_pane

0xab70,	// (0x0008809a) video_down_subqcif_pane_ParamLimits

0xab70,	// (0x0008809a) video_down_subqcif_pane

0xab8a,	// (0x000880b4) video_down_subqcif_pane_cp_ParamLimits

0xab8a,	// (0x000880b4) video_down_subqcif_pane_cp

0xabb2,	// (0x000880dc) im_reading_pane_ParamLimits

0xabb2,	// (0x000880dc) im_reading_pane

0x356f,	// (0x00080a99) im_writing_pane_ParamLimits

0x356f,	// (0x00080a99) im_writing_pane

0x358d,	// (0x00080ab7) im_reading_pane_t1

0xabcc,	// (0x000880f6) list_im_pane

0xabdd,	// (0x00088107) scroll_pane_cp07

0x35cf,	// (0x00080af9) im_writing_pane_t1_ParamLimits

0x35cf,	// (0x00080af9) im_writing_pane_t1

0xabf6,	// (0x00088120) im_writing_pane_t2_ParamLimits

0xabf6,	// (0x00088120) im_writing_pane_t2

0x0001,

0xf273,	// (0x0008c79d) im_writing_pane_t_ParamLimits

0xf273,	// (0x0008c79d) im_writing_pane_t

0xa5ad,	// (0x00087ad7) input_focus_pane_cp04

0xa5ad,	// (0x00087ad7) input_focus_pane_cp05

0x35e1,	// (0x00080b0b) list_im_single_pane_ParamLimits

0x35e1,	// (0x00080b0b) list_im_single_pane

0x35fa,	// (0x00080b24) list_single_im_pane_t1

0x5318,	// (0x00082842) blid_accuracy_pane

0x5320,	// (0x0008284a) blid_compass_pane

0x532a,	// (0x00082854) main_location_t1

0x5338,	// (0x00082862) main_location_t2

0x5346,	// (0x00082870) main_location_t3

0x0002,

0xf5da,	// (0x0008cb04) main_location_t

0xa5ad,	// (0x00087ad7) aid_levels_location

0xa950,	// (0x00087e7a) blid_accuracy_pane_g1

0xa950,	// (0x00087e7a) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x0008c7ff) blid_accuracy_pane_g

0xac3e,	// (0x00088168) wml_content_pane

0xac7c,	// (0x000881a6) wml_button_pane_ParamLimits

0xac7c,	// (0x000881a6) wml_button_pane

0x3609,	// (0x00080b33) wml_list_single_large_pane_ParamLimits

0x3609,	// (0x00080b33) wml_list_single_large_pane

0x362b,	// (0x00080b55) wml_list_single_medium_pane_ParamLimits

0x362b,	// (0x00080b55) wml_list_single_medium_pane

0x364e,	// (0x00080b78) wml_list_single_small_pane_ParamLimits

0x364e,	// (0x00080b78) wml_list_single_small_pane

0xac90,	// (0x000881ba) wml_selection_box_pane_ParamLimits

0xac90,	// (0x000881ba) wml_selection_box_pane

0xaca3,	// (0x000881cd) wml_list_single_pane_t1

0xacb2,	// (0x000881dc) wml_list_single_medium_pane_t1

0xacc1,	// (0x000881eb) wml_list_single_large_pane_t1

0xacd0,	// (0x000881fa) input_focus_pane_cp02_ParamLimits

0xacd0,	// (0x000881fa) input_focus_pane_cp02

0xace3,	// (0x0008820d) wml_selection_box_pane_g1

0xacec,	// (0x00088216) wml_selection_box_pane_t1_ParamLimits

0xacec,	// (0x00088216) wml_selection_box_pane_t1

0xa808,	// (0x00087d32) bg_wml_button_pane_ParamLimits

0xa808,	// (0x00087d32) bg_wml_button_pane

0xad04,	// (0x0008822e) wml_button_pane_g1

0xad0c,	// (0x00088236) wml_button_pane_t1

0xad04,	// (0x0008822e) wml_button_bg_pane_g1

0xad1c,	// (0x00088246) wml_button_bg_pane_g2

0xad24,	// (0x0008824e) wml_button_bg_pane_g3

0xad2c,	// (0x00088256) wml_button_bg_pane_g4

0xad34,	// (0x0008825e) wml_button_bg_pane_g5

0xad3c,	// (0x00088266) wml_button_bg_pane_g6

0xad44,	// (0x0008826e) wml_button_bg_pane_g7

0xad4c,	// (0x00088276) wml_button_bg_pane_g8

0xad54,	// (0x0008827e) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x0008c7a2) wml_button_bg_pane_g

0x3676,	// (0x00080ba0) bg_list_pane_cp02

0xad5c,	// (0x00088286) mce_header_pane_ParamLimits

0xad5c,	// (0x00088286) mce_header_pane

0xad72,	// (0x0008829c) mce_icon_pane

0xad72,	// (0x0008829c) mce_image_pane

0xad7b,	// (0x000882a5) mce_text_pane_ParamLimits

0xad7b,	// (0x000882a5) mce_text_pane

0x3680,	// (0x00080baa) scroll_pane_cp03

0xac74,	// (0x0008819e) scroll_pane_cp04

0xad8e,	// (0x000882b8) scroll_pane_cp05_ParamLimits

0xad8e,	// (0x000882b8) scroll_pane_cp05

0x368a,	// (0x00080bb4) mce_header_field_pane_ParamLimits

0x368a,	// (0x00080bb4) mce_header_field_pane

0x36ac,	// (0x00080bd6) mce_header_field_pane_2_ParamLimits

0x36ac,	// (0x00080bd6) mce_header_field_pane_2

0x36c2,	// (0x00080bec) mce_header_field_pane_3

0x36ca,	// (0x00080bf4) list_single_mce_message_pane_ParamLimits

0x36ca,	// (0x00080bf4) list_single_mce_message_pane

0x36e9,	// (0x00080c13) list_single_mce_smart_pane_ParamLimits

0x36e9,	// (0x00080c13) list_single_mce_smart_pane

0xad9a,	// (0x000882c4) input_focus_pane_cp03

0xada3,	// (0x000882cd) list_header_data_pane

0x3713,	// (0x00080c3d) mce_header_field_pane_t1

0x3723,	// (0x00080c4d) list_single_mce_header_pane_ParamLimits

0x3723,	// (0x00080c4d) list_single_mce_header_pane

0xadab,	// (0x000882d5) list_single_mce_header_pane_t1

0xadba,	// (0x000882e4) list_single_mce_message_pane_g1

0xadc2,	// (0x000882ec) list_single_mce_message_pane_t1

0x3767,	// (0x00080c91) bg_cale_heading_pane_cp01_ParamLimits

0x3767,	// (0x00080c91) bg_cale_heading_pane_cp01

0xadd0,	// (0x000882fa) bg_cale_pane_cp02_ParamLimits

0xadd0,	// (0x000882fa) bg_cale_pane_cp02

0x37ae,	// (0x00080cd8) cale_month_corner_pane

0x37cd,	// (0x00080cf7) cale_month_day_heading_pane_ParamLimits

0x37cd,	// (0x00080cf7) cale_month_day_heading_pane

0x3824,	// (0x00080d4e) cale_month_pane_g1_ParamLimits

0x3824,	// (0x00080d4e) cale_month_pane_g1

0x3860,	// (0x00080d8a) cale_month_pane_g2_ParamLimits

0x3860,	// (0x00080d8a) cale_month_pane_g2

0x3898,	// (0x00080dc2) cale_month_pane_g3_ParamLimits

0x3898,	// (0x00080dc2) cale_month_pane_g3

0x38ec,	// (0x00080e16) cale_month_pane_g4_ParamLimits

0x38ec,	// (0x00080e16) cale_month_pane_g4

0x3940,	// (0x00080e6a) cale_month_pane_g5_ParamLimits

0x3940,	// (0x00080e6a) cale_month_pane_g5

0x3994,	// (0x00080ebe) cale_month_pane_g6_ParamLimits

0x3994,	// (0x00080ebe) cale_month_pane_g6

0x39f8,	// (0x00080f22) cale_month_pane_g7_ParamLimits

0x39f8,	// (0x00080f22) cale_month_pane_g7

0x3a5c,	// (0x00080f86) cale_month_pane_g8_ParamLimits

0x3a5c,	// (0x00080f86) cale_month_pane_g8

0x3ac0,	// (0x00080fea) cale_month_pane_g9_ParamLimits

0x3ac0,	// (0x00080fea) cale_month_pane_g9

0x3b18,	// (0x00081042) cale_month_pane_g10_ParamLimits

0x3b18,	// (0x00081042) cale_month_pane_g10

0x3b66,	// (0x00081090) cale_month_pane_g11_ParamLimits

0x3b66,	// (0x00081090) cale_month_pane_g11

0x3bb2,	// (0x000810dc) cale_month_pane_g12_ParamLimits

0x3bb2,	// (0x000810dc) cale_month_pane_g12

0x3c02,	// (0x0008112c) cale_month_pane_g13_ParamLimits

0x3c02,	// (0x0008112c) cale_month_pane_g13

0x000c,

0xf28b,	// (0x0008c7b5) cale_month_pane_g_ParamLimits

0xf28b,	// (0x0008c7b5) cale_month_pane_g

0x3c52,	// (0x0008117c) cale_month_week_pane

0x3c72,	// (0x0008119c) grid_cale_month_pane_ParamLimits

0x3c72,	// (0x0008119c) grid_cale_month_pane

0x3cc0,	// (0x000811ea) cale_month_day_heading_pane_t1

0x3d42,	// (0x0008126c) cale_month_day_heading_pane_t2

0x3dcf,	// (0x000812f9) cale_month_day_heading_pane_t3

0x3e5c,	// (0x00081386) cale_month_day_heading_pane_t4

0x3ee9,	// (0x00081413) cale_month_day_heading_pane_t5

0x3f7e,	// (0x000814a8) cale_month_day_heading_pane_t6

0x401b,	// (0x00081545) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x0008c7d0) cale_month_day_heading_pane_t

0xaa74,	// (0x00087f9e) bg_cale_side_pane_cp01

0x40b8,	// (0x000815e2) cale_month_week_pane_t1

0x40d1,	// (0x000815fb) cale_month_week_pane_t2

0x40ea,	// (0x00081614) cale_month_week_pane_t3

0x4103,	// (0x0008162d) cale_month_week_pane_t4

0x411c,	// (0x00081646) cale_month_week_pane_t5

0x4137,	// (0x00081661) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x0008c7df) cale_month_week_pane_t

0x4158,	// (0x00081682) cell_cale_month_pane_ParamLimits

0x4158,	// (0x00081682) cell_cale_month_pane

0x427a,	// (0x000817a4) cell_cale_month_pane_g1

0x4286,	// (0x000817b0) cell_cale_month_pane_t1_ParamLimits

0x4286,	// (0x000817b0) cell_cale_month_pane_t1

0xaa82,	// (0x00087fac) grid_highlight_pane_cp08

0xa950,	// (0x00087e7a) main_smil_g1

0x42a6,	// (0x000817d0) smil_status_pane

0xae0f,	// (0x00088339) smil_text_pane

0xc657,	// (0x00089b81) bg_popup_call3_rect_pane_g8

0xc65f,	// (0x00089b89) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x0008ca98) bg_popup_call3_rect_pane_g

0xc8ed,	// (0x00089e17) smil_status_volume_pane_g1

0x42b9,	// (0x000817e3) smil_status_pane_t1

0x570c,	// (0x00082c36) volume_smil_pane

0xae19,	// (0x00088343) list_smil_text_pane

0x42d0,	// (0x000817fa) scroll_pane_cp011

0x42db,	// (0x00081805) smil_text_list_pane_t1_ParamLimits

0x42db,	// (0x00081805) smil_text_list_pane_t1

0x432d,	// (0x00081857) aid_volume_smil_ParamLimits

0x432d,	// (0x00081857) aid_volume_smil

0xa950,	// (0x00087e7a) smil_volume_pane_g1

0xa950,	// (0x00087e7a) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x0008c7ff) smil_volume_pane_g

0x2689,	// (0x0007fbb3) listscroll_cale_day_pane

0xae23,	// (0x0008834d) bg_cale_pane

0xae3b,	// (0x00088365) list_cale_pane

0xae5e,	// (0x00088388) scroll_pane_cp09

0xae6f,	// (0x00088399) cale_bg_pane_g1

0xae77,	// (0x000883a1) cale_bg_pane_g2

0xae7f,	// (0x000883a9) cale_bg_pane_g3

0xae87,	// (0x000883b1) cale_bg_pane_g4

0xae8f,	// (0x000883b9) cale_bg_pane_g5

0xae97,	// (0x000883c1) cale_bg_pane_g6

0xae9f,	// (0x000883c9) cale_bg_pane_g7

0xaea7,	// (0x000883d1) cale_bg_pane_g8

0xaeaf,	// (0x000883d9) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x0008c804) cale_bg_pane_g

0x434f,	// (0x00081879) list_cale_time_pane_ParamLimits

0x434f,	// (0x00081879) list_cale_time_pane

0xaebf,	// (0x000883e9) list_cale_time_pane_g1_ParamLimits

0xaebf,	// (0x000883e9) list_cale_time_pane_g1

0xaecb,	// (0x000883f5) list_cale_time_pane_g2_ParamLimits

0xaecb,	// (0x000883f5) list_cale_time_pane_g2

0x4363,	// (0x0008188d) list_cale_time_pane_g3_ParamLimits

0x4363,	// (0x0008188d) list_cale_time_pane_g3

0x4371,	// (0x0008189b) list_cale_time_pane_g4_ParamLimits

0x4371,	// (0x0008189b) list_cale_time_pane_g4

0x437f,	// (0x000818a9) list_cale_time_pane_g5_ParamLimits

0x437f,	// (0x000818a9) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x0008c817) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x0008c817) list_cale_time_pane_g

0xaee5,	// (0x0008840f) list_cale_time_pane_t1_ParamLimits

0xaee5,	// (0x0008840f) list_cale_time_pane_t1

0xaf0d,	// (0x00088437) list_cale_time_pane_t2_ParamLimits

0xaf0d,	// (0x00088437) list_cale_time_pane_t2

0x4677,	// (0x00081ba1) aid_blid_cardinal_pane

0x46b9,	// (0x00081be3) compass_pane_t4

0xaf35,	// (0x0008845f) list_cale_time_pane_t4_ParamLimits

0xaf35,	// (0x0008845f) list_cale_time_pane_t4

0x46c7,	// (0x00081bf1) compass_pane_t5

0x46d7,	// (0x00081c01) compass_pane_t6

0x46e5,	// (0x00081c0f) compass_pane_t7

0xb34f,	// (0x00088879) navi_pane_cc_t1

0xb4b2,	// (0x000889dc) aid_phob_thumbnail_center_pane

0x4e14,	// (0x0008233e) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x0008c824) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x0008c824) list_cale_time_pane_t

0xa204,	// (0x0008772e) bg_popup_window_pane_cp02_ParamLimits

0xa204,	// (0x0008772e) bg_popup_window_pane_cp02

0xaf5d,	// (0x00088487) heading_pane_cp01_ParamLimits

0xaf5d,	// (0x00088487) heading_pane_cp01

0xaf69,	// (0x00088493) loc_req_pane_ParamLimits

0xaf69,	// (0x00088493) loc_req_pane

0xaf79,	// (0x000884a3) loc_type_pane_ParamLimits

0xaf79,	// (0x000884a3) loc_type_pane

0xaf8b,	// (0x000884b5) loc_type_pane_t1_ParamLimits

0xaf8b,	// (0x000884b5) loc_type_pane_t1

0xaf9d,	// (0x000884c7) loc_type_pane_t2_ParamLimits

0xaf9d,	// (0x000884c7) loc_type_pane_t2

0xafaf,	// (0x000884d9) loc_type_pane_t3_ParamLimits

0xafaf,	// (0x000884d9) loc_type_pane_t3

0x0002,

0xf301,	// (0x0008c82b) loc_type_pane_t_ParamLimits

0xf301,	// (0x0008c82b) loc_type_pane_t

0xafc1,	// (0x000884eb) list_loc_req_pane

0xafcb,	// (0x000884f5) scroll_pane_cp012

0x438d,	// (0x000818b7) list_single_loc_request_popup_menu_pane_ParamLimits

0x438d,	// (0x000818b7) list_single_loc_request_popup_menu_pane

0xafd6,	// (0x00088500) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xafd6,	// (0x00088500) list_single_loc_request_popup_menu_pane_g1

0xafe2,	// (0x0008850c) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xafe2,	// (0x0008850c) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x0008c832) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x0008c832) list_single_loc_request_popup_menu_pane_g

0xafee,	// (0x00088518) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xafee,	// (0x00088518) list_single_loc_request_popup_menu_pane_t1

0x439f,	// (0x000818c9) bg_popup_window_pane_cp03_ParamLimits

0x439f,	// (0x000818c9) bg_popup_window_pane_cp03

0x43ad,	// (0x000818d7) heading_loc_req_pane_ParamLimits

0x43ad,	// (0x000818d7) heading_loc_req_pane

0x43b9,	// (0x000818e3) popup_dyc_status_message_window_g1_ParamLimits

0x43b9,	// (0x000818e3) popup_dyc_status_message_window_g1

0x43c5,	// (0x000818ef) popup_dyc_status_message_window_t1_ParamLimits

0x43c5,	// (0x000818ef) popup_dyc_status_message_window_t1

0x43d7,	// (0x00081901) popup_dyc_status_message_window_t2_ParamLimits

0x43d7,	// (0x00081901) popup_dyc_status_message_window_t2

0x43e9,	// (0x00081913) popup_dyc_status_message_window_t3_ParamLimits

0x43e9,	// (0x00081913) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x0008c837) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x0008c837) popup_dyc_status_message_window_t

0xa5ad,	// (0x00087ad7) bg_heading_pane_cp01

0xb004,	// (0x0008852e) heading_loc_req_pane_g1

0xb00c,	// (0x00088536) heading_loc_req_pane_g2

0xb014,	// (0x0008853e) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x0008c83e) heading_loc_req_pane_g

0xb01c,	// (0x00088546) heading_loc_req_pane_t1

0xb02c,	// (0x00088556) bg_popup_sub_pane_cp01_ParamLimits

0xb02c,	// (0x00088556) bg_popup_sub_pane_cp01

0xb046,	// (0x00088570) popup_cale_events_window_g1_ParamLimits

0xb046,	// (0x00088570) popup_cale_events_window_g1

0xb066,	// (0x00088590) popup_cale_events_window_g2_ParamLimits

0xb066,	// (0x00088590) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x0008c872) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x0008c872) popup_cale_events_window_g

0xb086,	// (0x000885b0) popup_cale_events_window_t1_ParamLimits

0xb086,	// (0x000885b0) popup_cale_events_window_t1

0xb098,	// (0x000885c2) popup_cale_events_window_t2_ParamLimits

0xb098,	// (0x000885c2) popup_cale_events_window_t2

0xb0d6,	// (0x00088600) popup_cale_events_window_t3_ParamLimits

0xb0d6,	// (0x00088600) popup_cale_events_window_t3

0xb110,	// (0x0008863a) popup_cale_events_window_t4_ParamLimits

0xb110,	// (0x0008863a) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x0008c877) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x0008c877) popup_cale_events_window_t

0x4413,	// (0x0008193d) call_type_pane

0xb3ed,	// (0x00088917) popup_call_status_window_g1

0x441f,	// (0x00081949) popup_call_status_window_g2

0x442b,	// (0x00081955) popup_call_status_window_g3

0x0002,

0xf356,	// (0x0008c880) popup_call_status_window_g

0xb146,	// (0x00088670) call_type_pane_g1

0xb14f,	// (0x00088679) call_type_pane_g2

0x0001,

0xf35d,	// (0x0008c887) call_type_pane_g

0xa5ad,	// (0x00087ad7) bg_popup_sub_pane_cp02

0xb158,	// (0x00088682) listscroll_popup_wml_pane

0xb160,	// (0x0008868a) list_wml_pane

0xb16a,	// (0x00088694) scroll_pane_cp013

0xb175,	// (0x0008869f) list_single_graphic_popup_wml_pane_ParamLimits

0xb175,	// (0x0008869f) list_single_graphic_popup_wml_pane

0xa950,	// (0x00087e7a) list_single_graphic_popup_wml_pane_g1

0xb189,	// (0x000886b3) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x0008c88c) list_single_graphic_popup_wml_pane_g

0xb191,	// (0x000886bb) list_single_graphic_popup_wml_pane_t1

0xb1a7,	// (0x000886d1) aid_call_pane

0xa800,	// (0x00087d2a) popup_clock_analogue_window_g1

0xa800,	// (0x00087d2a) popup_clock_analogue_window_g2

0x4437,	// (0x00081961) popup_clock_analogue_window_g3

0x4437,	// (0x00081961) popup_clock_analogue_window_g4

0xa950,	// (0x00087e7a) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x0008c891) popup_clock_analogue_window_g

0x443f,	// (0x00081969) popup_clock_analogue_window_t1

0x444d,	// (0x00081977) clock_digital_number_pane_ParamLimits

0x444d,	// (0x00081977) clock_digital_number_pane

0x4459,	// (0x00081983) clock_digital_number_pane_cp02_ParamLimits

0x4459,	// (0x00081983) clock_digital_number_pane_cp02

0x4465,	// (0x0008198f) clock_digital_number_pane_cp03_ParamLimits

0x4465,	// (0x0008198f) clock_digital_number_pane_cp03

0x4471,	// (0x0008199b) clock_digital_number_pane_cp04_ParamLimits

0x4471,	// (0x0008199b) clock_digital_number_pane_cp04

0x447d,	// (0x000819a7) clock_digital_separator_pane_ParamLimits

0x447d,	// (0x000819a7) clock_digital_separator_pane

0x4489,	// (0x000819b3) popup_clock_digital_window_t1

0xa950,	// (0x00087e7a) clock_digital_number_pane_g1

0xa950,	// (0x00087e7a) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x0008c7ff) clock_digital_number_pane_g

0xa950,	// (0x00087e7a) clock_digital_separator_pane_g1

0xa950,	// (0x00087e7a) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x0008c7ff) clock_digital_separator_pane_g

0xa5ad,	// (0x00087ad7) bg_popup_window_pane_cp04

0xb1af,	// (0x000886d9) heading_pane_cp03

0xb1b7,	// (0x000886e1) listscroll_popup_gms_pane

0xb1bf,	// (0x000886e9) grid_large_graphic_popup_pane

0xb1c9,	// (0x000886f3) listscroll_popup_gms_pane_g1

0xb1d1,	// (0x000886fb) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x0008c89c) listscroll_popup_gms_pane_g

0xac74,	// (0x0008819e) scroll_pane_cp014

0x44a6,	// (0x000819d0) cell_large_graphic_popup_pane_ParamLimits

0x44a6,	// (0x000819d0) cell_large_graphic_popup_pane

0x44c0,	// (0x000819ea) cell_large_graphic_popup_pane_g1_ParamLimits

0x44c0,	// (0x000819ea) cell_large_graphic_popup_pane_g1

0xb1d9,	// (0x00088703) cell_large_graphic_popup_pane_g2_ParamLimits

0xb1d9,	// (0x00088703) cell_large_graphic_popup_pane_g2

0xb1e5,	// (0x0008870f) cell_large_graphic_popup_pane_g3_ParamLimits

0xb1e5,	// (0x0008870f) cell_large_graphic_popup_pane_g3

0xb1f2,	// (0x0008871c) cell_large_graphic_popup_pane_g4_ParamLimits

0xb1f2,	// (0x0008871c) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x0008c8a1) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x0008c8a1) cell_large_graphic_popup_pane_g

0xb202,	// (0x0008872c) grid_highlight_pane_cp010

0xa950,	// (0x00087e7a) bg_popup_call_pane_g1

0xb20c,	// (0x00088736) list_single_graphic_popup_conf_pane_ParamLimits

0xb20c,	// (0x00088736) list_single_graphic_popup_conf_pane

0xb21e,	// (0x00088748) list_highlight_pane_cp01

0xb227,	// (0x00088751) list_single_graphic_popup_conf_pane_g1

0xb22f,	// (0x00088759) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x0008c8aa) list_single_graphic_popup_conf_pane_g

0xb237,	// (0x00088761) list_single_graphic_popup_conf_pane_t1

0xb245,	// (0x0008876f) linegrid_cams_pane_g1

0x44cc,	// (0x000819f6) linegrid_cams_pane_g2

0xaab5,	// (0x00087fdf) linegrid_cams_pane_g3

0xb24e,	// (0x00088778) linegrid_cams_pane_g4

0x44d5,	// (0x000819ff) linegrid_cams_pane_g5

0x44de,	// (0x00081a08) linegrid_cams_pane_g6

0xaabe,	// (0x00087fe8) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x0008c8af) linegrid_cams_pane_g

0xb257,	// (0x00088781) popup_clock_analogue_window

0xb257,	// (0x00088781) popup_clock_digital_window

0xa5ad,	// (0x00087ad7) popup_phob_thumbnail_window

0xa950,	// (0x00087e7a) call_video_uplink_pane_g1

0xb260,	// (0x0008878a) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x0008c8be) call_video_uplink_pane_g

0xb268,	// (0x00088792) video_uplink_pane

0xb270,	// (0x0008879a) mce_image_pane_g1

0x44e9,	// (0x00081a13) mce_image_pane_g2

0x44f3,	// (0x00081a1d) mce_image_pane_g3

0x44fd,	// (0x00081a27) mce_image_pane_g4

0x4505,	// (0x00081a2f) mce_image_pane_g5

0x0004,

0xf399,	// (0x0008c8c3) mce_image_pane_g

0xb27a,	// (0x000887a4) control_top_pane_stacon_cp01_ParamLimits

0xb27a,	// (0x000887a4) control_top_pane_stacon_cp01

0xb28e,	// (0x000887b8) uni_indicator_pane_stacon_cp01_ParamLimits

0xb28e,	// (0x000887b8) uni_indicator_pane_stacon_cp01

0xb29f,	// (0x000887c9) bg_popup_sub_pane_cp03

0x450d,	// (0x00081a37) chi_dic_find_pane

0x4515,	// (0x00081a3f) listscroll_chi_dic_pane

0x451e,	// (0x00081a48) main_pane_chidic_g1

0x4531,	// (0x00081a5b) chi_dic_find_pane_t1

0xb2a9,	// (0x000887d3) find_chidic_pane

0xb2b2,	// (0x000887dc) chi_dic_list_pane_ParamLimits

0xb2b2,	// (0x000887dc) chi_dic_list_pane

0xb2c3,	// (0x000887ed) scroll_pane_cp020

0x453f,	// (0x00081a69) find_chidic_pane_t1

0xa5ad,	// (0x00087ad7) input_focus_pane_cp06

0x454e,	// (0x00081a78) list_chi_dic_pane_ParamLimits

0x454e,	// (0x00081a78) list_chi_dic_pane

0x4563,	// (0x00081a8d) list_chi_dic_pane_t1_ParamLimits

0x4563,	// (0x00081a8d) list_chi_dic_pane_t1

0xa5ad,	// (0x00087ad7) list_highlight_pane_cp020

0xb2cb,	// (0x000887f5) bg_cale_heading_pane_g1

0x4576,	// (0x00081aa0) bg_cale_heading_pane_g2

0x457e,	// (0x00081aa8) bg_cale_heading_pane_g3

0x4586,	// (0x00081ab0) bg_cale_heading_pane_g4

0x4590,	// (0x00081aba) bg_cale_heading_pane_g5

0x459a,	// (0x00081ac4) bg_cale_heading_pane_g6

0x45a2,	// (0x00081acc) bg_cale_heading_pane_g7

0x45aa,	// (0x00081ad4) bg_cale_heading_pane_g8

0x45b4,	// (0x00081ade) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x0008c8ce) bg_cale_heading_pane_g

0xb2cb,	// (0x000887f5) bg_cale_side_pane_g1

0x45be,	// (0x00081ae8) bg_cale_side_pane_g2

0x45c8,	// (0x00081af2) bg_cale_side_pane_g3

0x45d2,	// (0x00081afc) bg_cale_side_pane_g4

0x45dc,	// (0x00081b06) bg_cale_side_pane_g5

0x45e6,	// (0x00081b10) bg_cale_side_pane_g6

0x45f0,	// (0x00081b1a) bg_cale_side_pane_g7

0x45fa,	// (0x00081b24) bg_cale_side_pane_g8

0x4602,	// (0x00081b2c) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x0008c8e1) bg_cale_side_pane_g

0x460a,	// (0x00081b34) popup_call_status_window_ParamLimits

0x460a,	// (0x00081b34) popup_call_status_window

0xb2d3,	// (0x000887fd) stacon_top_pane

0xb2db,	// (0x00088805) status_pane_ParamLimits

0xb2db,	// (0x00088805) status_pane

0xb2f0,	// (0x0008881a) status_small_pane

0xb2f8,	// (0x00088822) control_pane

0xa5ad,	// (0x00087ad7) stacon_bottom_pane

0xb300,	// (0x0008882a) list_single_mce_smart_pane_t1_ParamLimits

0xb300,	// (0x0008882a) list_single_mce_smart_pane_t1

0xb313,	// (0x0008883d) list_single_mce_smart_pane_t2_ParamLimits

0xb313,	// (0x0008883d) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x0008c8f4) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x0008c8f4) list_single_mce_smart_pane_t

0x4616,	// (0x00081b40) compass_pane

0x4621,	// (0x00081b4b) main_location2_pane_t1

0x4637,	// (0x00081b61) main_location2_pane_t2

0x464d,	// (0x00081b77) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x0008c8f9) main_location2_pane_t

0xb332,	// (0x0008885c) compass_pane_g1_ParamLimits

0xb332,	// (0x0008885c) compass_pane_g1

0x469b,	// (0x00081bc5) compass_pane_t1

0x46aa,	// (0x00081bd4) compass_pane_t2

0x0005,

0xf3d8,	// (0x0008c902) compass_pane_t

0x46f5,	// (0x00081c1f) text_secondary_cp61

0xb346,	// (0x00088870) navi_pane_cams_g5

0xb369,	// (0x00088893) navi_pane_im_t1

0xb377,	// (0x000888a1) navi_pane_mp_g1_ParamLimits

0xb377,	// (0x000888a1) navi_pane_mp_g1

0xb38b,	// (0x000888b5) navi_pane_mp_g2_ParamLimits

0xb38b,	// (0x000888b5) navi_pane_mp_g2

0xb397,	// (0x000888c1) navi_pane_mp_g3_ParamLimits

0xb397,	// (0x000888c1) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x0008c916) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x0008c916) navi_pane_mp_g

0xb3a3,	// (0x000888cd) navi_pane_mp_t1

0xb3b1,	// (0x000888db) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x0008c91d) navi_pane_mp_t

0xb3fb,	// (0x00088925) navi_pane_vt_g1

0xb3a3,	// (0x000888cd) navi_pane_vt_t1

0xb403,	// (0x0008892d) navi_slider_pane

0xb40b,	// (0x00088935) zooming_pane

0xb413,	// (0x0008893d) navi_slider_pane_g1

0x482a,	// (0x00081d54) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x0008c924) navi_slider_pane_g

0xb437,	// (0x00088961) aid_levels_zoom

0xb43f,	// (0x00088969) zooming_pane_g1

0xb447,	// (0x00088971) zooming_pane_g2

0xb447,	// (0x00088971) zooming_pane_g3

0x0002,

0xf409,	// (0x0008c933) zooming_pane_g

0xb44f,	// (0x00088979) level_10_zoom

0xb458,	// (0x00088982) level_11_zoom

0xb461,	// (0x0008898b) level_1_zoom

0xb46a,	// (0x00088994) level_2_zoom

0xb473,	// (0x0008899d) level_3_zoom

0xb47c,	// (0x000889a6) level_4_zoom

0xb485,	// (0x000889af) level_5_zoom

0xb48e,	// (0x000889b8) level_6_zoom

0xb497,	// (0x000889c1) level_7_zoom

0xb4a0,	// (0x000889ca) level_8_zoom

0xb4a9,	// (0x000889d3) level_9_zoom

0xb4ba,	// (0x000889e4) popup_phob_thumbnail_window_g1

0xb4c2,	// (0x000889ec) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x0008c93a) popup_phob_thumbnail_window_g

0xc7bd,	// (0x00089ce7) level_1_location

0xc7c5,	// (0x00089cef) level_2_location

0xc7cd,	// (0x00089cf7) level_3_location

0xc7d5,	// (0x00089cff) level_4_location

0xb40b,	// (0x00088935) level_5_location

0x483c,	// (0x00081d66) mce_icon_pane_g1

0x4844,	// (0x00081d6e) mce_icon_pane_g2

0x0001,

0xf415,	// (0x0008c93f) mce_icon_pane_g

0x484c,	// (0x00081d76) main_mup_pane_g1_ParamLimits

0x484c,	// (0x00081d76) main_mup_pane_g1

0x4864,	// (0x00081d8e) main_mup_pane_g2_ParamLimits

0x4864,	// (0x00081d8e) main_mup_pane_g2

0x4880,	// (0x00081daa) main_mup_pane_g3_ParamLimits

0x4880,	// (0x00081daa) main_mup_pane_g3

0x489c,	// (0x00081dc6) main_mup_pane_g4_ParamLimits

0x489c,	// (0x00081dc6) main_mup_pane_g4

0x48b8,	// (0x00081de2) main_mup_pane_g5_ParamLimits

0x48b8,	// (0x00081de2) main_mup_pane_g5

0x48d9,	// (0x00081e03) main_mup_pane_g6_ParamLimits

0x48d9,	// (0x00081e03) main_mup_pane_g6

0x48f9,	// (0x00081e23) main_mup_pane_g7_ParamLimits

0x48f9,	// (0x00081e23) main_mup_pane_g7

0x491d,	// (0x00081e47) main_mup_pane_g8_ParamLimits

0x491d,	// (0x00081e47) main_mup_pane_g8

0x4941,	// (0x00081e6b) main_mup_pane_g9_ParamLimits

0x4941,	// (0x00081e6b) main_mup_pane_g9

0x4964,	// (0x00081e8e) main_mup_pane_g10_ParamLimits

0x4964,	// (0x00081e8e) main_mup_pane_g10

0x4987,	// (0x00081eb1) main_mup_pane_g11_ParamLimits

0x4987,	// (0x00081eb1) main_mup_pane_g11

0x49a7,	// (0x00081ed1) main_mup_pane_g12_ParamLimits

0x49a7,	// (0x00081ed1) main_mup_pane_g12

0x49b5,	// (0x00081edf) main_mup_pane_g13_ParamLimits

0x49b5,	// (0x00081edf) main_mup_pane_g13

0x000c,

0xf41a,	// (0x0008c944) main_mup_pane_g_ParamLimits

0xf41a,	// (0x0008c944) main_mup_pane_g

0x49cb,	// (0x00081ef5) main_mup_pane_t1_ParamLimits

0x49cb,	// (0x00081ef5) main_mup_pane_t1

0x49ea,	// (0x00081f14) main_mup_pane_t2_ParamLimits

0x49ea,	// (0x00081f14) main_mup_pane_t2

0x4a04,	// (0x00081f2e) main_mup_pane_t3_ParamLimits

0x4a04,	// (0x00081f2e) main_mup_pane_t3

0x4a1e,	// (0x00081f48) main_mup_pane_t4_ParamLimits

0x4a1e,	// (0x00081f48) main_mup_pane_t4

0x4a30,	// (0x00081f5a) main_mup_pane_t5_ParamLimits

0x4a30,	// (0x00081f5a) main_mup_pane_t5

0x4a42,	// (0x00081f6c) main_mup_pane_t6_ParamLimits

0x4a42,	// (0x00081f6c) main_mup_pane_t6

0x0005,

0xf435,	// (0x0008c95f) main_mup_pane_t_ParamLimits

0xf435,	// (0x0008c95f) main_mup_pane_t

0x4a58,	// (0x00081f82) mup_progress_pane_ParamLimits

0x4a58,	// (0x00081f82) mup_progress_pane

0x4a64,	// (0x00081f8e) mup_visualizer_pane_ParamLimits

0x4a64,	// (0x00081f8e) mup_visualizer_pane

0x4aa2,	// (0x00081fcc) mup_volume_pane_ParamLimits

0x4aa2,	// (0x00081fcc) mup_volume_pane

0xb3ed,	// (0x00088917) mup_visualizer_pane_g1_ParamLimits

0xb3ed,	// (0x00088917) mup_visualizer_pane_g1

0xb3ed,	// (0x00088917) mup_visualizer_pane_g2_ParamLimits

0xb3ed,	// (0x00088917) mup_visualizer_pane_g2

0xb332,	// (0x0008885c) mup_visualizer_pane_g3_ParamLimits

0xb332,	// (0x0008885c) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x0008c96c) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x0008c96c) mup_visualizer_pane_g

0xa950,	// (0x00087e7a) mup_volume_pane_g1

0xb4d2,	// (0x000889fc) mup_volume_pane_g2

0x0001,

0xf449,	// (0x0008c973) mup_volume_pane_g

0xa950,	// (0x00087e7a) mup_progress_pane_g1

0xb4db,	// (0x00088a05) mup_progress_pane_g2

0xb4e4,	// (0x00088a0e) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x0008c978) mup_progress_pane_g

0xa5ad,	// (0x00087ad7) bg_popup_window_pane_cp05

0xb4ed,	// (0x00088a17) heading_pane_cp02_ParamLimits

0xb4ed,	// (0x00088a17) heading_pane_cp02

0xb509,	// (0x00088a33) list_popup_blid_pane

0xb511,	// (0x00088a3b) list_blid_sat_info_pane_ParamLimits

0xb511,	// (0x00088a3b) list_blid_sat_info_pane

0xb524,	// (0x00088a4e) list_blid_sat_info_pane_g1

0xb52c,	// (0x00088a56) list_blid_sat_info_pane_t1

0x4bc1,	// (0x000820eb) mup_equalizer_pane_ParamLimits

0x4bc1,	// (0x000820eb) mup_equalizer_pane

0x4be2,	// (0x0008210c) mup_equalizer_pane_cp1_ParamLimits

0x4be2,	// (0x0008210c) mup_equalizer_pane_cp1

0x4c03,	// (0x0008212d) mup_equalizer_pane_cp2_ParamLimits

0x4c03,	// (0x0008212d) mup_equalizer_pane_cp2

0x4c24,	// (0x0008214e) mup_equalizer_pane_cp3_ParamLimits

0x4c24,	// (0x0008214e) mup_equalizer_pane_cp3

0x4c49,	// (0x00082173) mup_equalizer_pane_cp4_ParamLimits

0x4c49,	// (0x00082173) mup_equalizer_pane_cp4

0x4c6e,	// (0x00082198) mup_equalizer_pane_cp5

0x4c86,	// (0x000821b0) mup_equalizer_pane_cp6

0x4c9e,	// (0x000821c8) mup_equalizer_pane_cp7

0xc6d7,	// (0x00089c01) bg_popup_call_poc_act_pane_g9

0xc6df,	// (0x00089c09) bg_popup_call_poc_act_pane_g10

0xc6e7,	// (0x00089c11) bg_popup_call_poc_act_pane_g11

0x000a,

0xa808,	// (0x00087d32) mup_scale_pane

0xa950,	// (0x00087e7a) mup_scale_pane_g1

0xb53a,	// (0x00088a64) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x0008c994) mup_scale_pane_g

0xb55e,	// (0x00088a88) msg_data_pane

0xb566,	// (0x00088a90) scroll_pane_cp017

0x0d69,	// (0x0007e293) bg_list_pane_cp04_ParamLimits

0x0d69,	// (0x0007e293) bg_list_pane_cp04

0xb56e,	// (0x00088a98) msg_data_pane_g1

0x4cc8,	// (0x000821f2) msg_data_pane_g2

0x4cd2,	// (0x000821fc) msg_data_pane_g3

0x4cdc,	// (0x00082206) msg_data_pane_g4

0x4ce4,	// (0x0008220e) msg_data_pane_g5

0x4cec,	// (0x00082216) msg_data_pane_g6

0x4cf4,	// (0x0008221e) msg_data_pane_g7

0x0006,

0xf479,	// (0x0008c9a3) msg_data_pane_g

0x0d91,	// (0x0007e2bb) msg_text_pane_ParamLimits

0x0d91,	// (0x0007e2bb) msg_text_pane

0x4cfc,	// (0x00082226) qrid_highlight_pane_cp011_ParamLimits

0x4cfc,	// (0x00082226) qrid_highlight_pane_cp011

0xa5ad,	// (0x00087ad7) msg_body_pane

0xa5ad,	// (0x00087ad7) msg_header_pane

0xb57f,	// (0x00088aa9) input_focus_pane_cp07

0x0dc5,	// (0x0007e2ef) msg_header_pane_t1_ParamLimits

0x0dc5,	// (0x0007e2ef) msg_header_pane_t1

0x0dd7,	// (0x0007e301) msg_header_pane_t2_ParamLimits

0x0dd7,	// (0x0007e301) msg_header_pane_t2

0x0001,

0xf48d,	// (0x0008c9b7) msg_header_pane_t_ParamLimits

0xf48d,	// (0x0008c9b7) msg_header_pane_t

0xb594,	// (0x00088abe) msg_body_pane_g1

0x0de9,	// (0x0007e313) msg_body_pane_t1_ParamLimits

0x0de9,	// (0x0007e313) msg_body_pane_t1

0x0e1a,	// (0x0007e344) msg_body_pane_t2_ParamLimits

0x0e1a,	// (0x0007e344) msg_body_pane_t2

0x0e2c,	// (0x0007e356) msg_body_pane_t3_ParamLimits

0x0e2c,	// (0x0007e356) msg_body_pane_t3

0x0002,

0xf492,	// (0x0008c9bc) msg_body_pane_t_ParamLimits

0xf492,	// (0x0008c9bc) msg_body_pane_t

0x4d64,	// (0x0008228e) main_viewer_pane_g1_ParamLimits

0x4d64,	// (0x0008228e) main_viewer_pane_g1

0x4d70,	// (0x0008229a) main_viewer_pane_g2_ParamLimits

0x4d70,	// (0x0008229a) main_viewer_pane_g2

0x4d7c,	// (0x000822a6) main_viewer_pane_g3_ParamLimits

0x4d7c,	// (0x000822a6) main_viewer_pane_g3

0x4d8d,	// (0x000822b7) main_viewer_pane_g4_ParamLimits

0x4d8d,	// (0x000822b7) main_viewer_pane_g4

0x4d9e,	// (0x000822c8) main_viewer_pane_g5_ParamLimits

0x4d9e,	// (0x000822c8) main_viewer_pane_g5

0x4d9e,	// (0x000822c8) main_viewer_pane_g7_ParamLimits

0x4d9e,	// (0x000822c8) main_viewer_pane_g7

0x4db0,	// (0x000822da) main_viewer_pane_g8_ParamLimits

0x4db0,	// (0x000822da) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x0008c9cc) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x0008c9cc) main_viewer_pane_g

0xb59c,	// (0x00088ac6) viewer_content_pane_ParamLimits

0xb59c,	// (0x00088ac6) viewer_content_pane

0x4de8,	// (0x00082312) main_postcard_pane_g1_ParamLimits

0x4de8,	// (0x00082312) main_postcard_pane_g1

0x4df6,	// (0x00082320) main_postcard_pane_g2_ParamLimits

0x4df6,	// (0x00082320) main_postcard_pane_g2

0x4e04,	// (0x0008232e) main_postcard_pane_g3_ParamLimits

0x4e04,	// (0x0008232e) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x0008c9dd) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x0008c9dd) main_postcard_pane_g

0x4e14,	// (0x0008233e) main_postcard_pane_g4

0xc900,	// (0x00089e2a) smil_status_volume_pane_g2

0x4e40,	// (0x0008236a) postcard_pane_ParamLimits

0x4e40,	// (0x0008236a) postcard_pane

0xb3ed,	// (0x00088917) postcard_pane_g1_ParamLimits

0xb3ed,	// (0x00088917) postcard_pane_g1

0x4e7a,	// (0x000823a4) postcard_pane_g2_ParamLimits

0x4e7a,	// (0x000823a4) postcard_pane_g2

0x4e86,	// (0x000823b0) postcard_pane_g3_ParamLimits

0x4e86,	// (0x000823b0) postcard_pane_g3

0xb5aa,	// (0x00088ad4) postcard_pane_g4_ParamLimits

0xb5aa,	// (0x00088ad4) postcard_pane_g4

0x4e92,	// (0x000823bc) postcard_pane_g5_ParamLimits

0x4e92,	// (0x000823bc) postcard_pane_g5

0x4e9e,	// (0x000823c8) postcard_pane_g6_ParamLimits

0x4e9e,	// (0x000823c8) postcard_pane_g6

0xb5b8,	// (0x00088ae2) postcard_pane_g7_ParamLimits

0xb5b8,	// (0x00088ae2) postcard_pane_g7

0x0006,

0xf4c0,	// (0x0008c9ea) postcard_pane_g_ParamLimits

0xf4c0,	// (0x0008c9ea) postcard_pane_g

0x4eac,	// (0x000823d6) main_mp2_pane_g1_ParamLimits

0x4eac,	// (0x000823d6) main_mp2_pane_g1

0x4eba,	// (0x000823e4) main_mp2_pane_g2_ParamLimits

0x4eba,	// (0x000823e4) main_mp2_pane_g2

0x4ec6,	// (0x000823f0) main_mp2_pane_g3_ParamLimits

0x4ec6,	// (0x000823f0) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x0008c9f9) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x0008c9f9) main_mp2_pane_g

0x4ed2,	// (0x000823fc) main_mp2_pane_t1_ParamLimits

0x4ed2,	// (0x000823fc) main_mp2_pane_t1

0x4ee9,	// (0x00082413) main_mp2_pane_t2_ParamLimits

0x4ee9,	// (0x00082413) main_mp2_pane_t2

0x4efd,	// (0x00082427) main_mp2_pane_t3_ParamLimits

0x4efd,	// (0x00082427) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x0008ca00) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x0008ca00) main_mp2_pane_t

0xb5c6,	// (0x00088af0) pec_content_pane_ParamLimits

0xb5c6,	// (0x00088af0) pec_content_pane

0xac74,	// (0x0008819e) scroll_pane_cp015

0xb5d8,	// (0x00088b02) pec_attribute_pane_ParamLimits

0xb5d8,	// (0x00088b02) pec_attribute_pane

0x4f0f,	// (0x00082439) pec_content_pane_g1_ParamLimits

0x4f0f,	// (0x00082439) pec_content_pane_g1

0xb5e8,	// (0x00088b12) pec_content_pane_t1_ParamLimits

0xb5e8,	// (0x00088b12) pec_content_pane_t1

0xb5fa,	// (0x00088b24) pec_content_pane_t2_ParamLimits

0xb5fa,	// (0x00088b24) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x0008ca07) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x0008ca07) pec_content_pane_t

0x4f1b,	// (0x00082445) list_single_graphic_pane_cp01_ParamLimits

0x4f1b,	// (0x00082445) list_single_graphic_pane_cp01

0xa808,	// (0x00087d32) bg_popup_sub_pane_cp04

0xb60c,	// (0x00088b36) popup_mup_playback_window_g1

0xb618,	// (0x00088b42) popup_mup_playback_window_t1

0xb62d,	// (0x00088b57) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x0008ca0c) popup_mup_playback_window_t

0xb664,	// (0x00088b8e) main_image_pane_g1_ParamLimits

0xb664,	// (0x00088b8e) main_image_pane_g1

0xb6a7,	// (0x00088bd1) scroll_pane_cp018_ParamLimits

0xb6a7,	// (0x00088bd1) scroll_pane_cp018

0xb6bf,	// (0x00088be9) scroll_pane_cp016_ParamLimits

0xb6bf,	// (0x00088be9) scroll_pane_cp016

0x4fa9,	// (0x000824d3) smil2_image_pane_ParamLimits

0x4fa9,	// (0x000824d3) smil2_image_pane

0x4fdf,	// (0x00082509) smil2_root_pane_ParamLimits

0x4fdf,	// (0x00082509) smil2_root_pane

0x500b,	// (0x00082535) smil2_text_pane_ParamLimits

0x500b,	// (0x00082535) smil2_text_pane

0xa5ad,	// (0x00087ad7) bg_list_pane_cp06

0xb6fb,	// (0x00088c25) grid_radio_pane

0xa5ad,	// (0x00087ad7) bg_popup_window_pane_cp06

0xb705,	// (0x00088c2f) main_fmradio_pane_t1

0xb1af,	// (0x000886d9) heading_pane_cp04

0xb713,	// (0x00088c3d) main_fmradio_pane_t2

0xc6ef,	// (0x00089c19) popup_cale_lunar_info_window_g1

0xb721,	// (0x00088c4b) main_fmradio_pane_t3

0xc6f7,	// (0x00089c21) popup_cale_lunar_info_window_g2

0xb731,	// (0x00088c5b) main_fmradio_pane_t4

0x0001,

0xb73f,	// (0x00088c69) main_fmradio_pane_t5

0x0004,

0xf5bd,	// (0x0008cae7) popup_cale_lunar_info_window_g

0xf4f7,	// (0x0008ca21) main_fmradio_pane_t

0xb74d,	// (0x00088c77) wait_bar_pane_cp03

0xb755,	// (0x00088c7f) cell_fmradio_pane_ParamLimits

0xb755,	// (0x00088c7f) cell_fmradio_pane

0xb5b8,	// (0x00088ae2) cell_fmradio_pane_g1_ParamLimits

0xb5b8,	// (0x00088ae2) cell_fmradio_pane_g1

0xa5ad,	// (0x00087ad7) grid_highlight_pane_cp011

0xb76a,	// (0x00088c94) poc_content_pane_ParamLimits

0xb76a,	// (0x00088c94) poc_content_pane

0xb77c,	// (0x00088ca6) scroll_pane_cp019

0x504b,	// (0x00082575) popup_call_poc_act_window_ParamLimits

0x504b,	// (0x00082575) popup_call_poc_act_window

0x5058,	// (0x00082582) popup_call_poc_inact_window_ParamLimits

0x5058,	// (0x00082582) popup_call_poc_inact_window

0xf594,	// (0x0008cabe) bg_popup_call_poc_act_pane_g

0xc667,	// (0x00089b91) bg_popup_call_poc_inact_pane_g1

0xc66f,	// (0x00089b99) bg_popup_call_poc_inact_pane_g2

0xb784,	// (0x00088cae) popup_call_poc_act_window_g2

0xc677,	// (0x00089ba1) bg_popup_call_poc_inact_pane_g3

0xc67f,	// (0x00089ba9) bg_popup_call_poc_inact_pane_g4

0xc687,	// (0x00089bb1) bg_popup_call_poc_inact_pane_g5

0xb78c,	// (0x00088cb6) popup_call_poc_act_window_t1_ParamLimits

0xb78c,	// (0x00088cb6) popup_call_poc_act_window_t1

0xb7b4,	// (0x00088cde) popup_call_poc_act_window_t2_ParamLimits

0xb7b4,	// (0x00088cde) popup_call_poc_act_window_t2

0xb7dc,	// (0x00088d06) popup_call_poc_act_window_t3_ParamLimits

0xb7dc,	// (0x00088d06) popup_call_poc_act_window_t3

0xb804,	// (0x00088d2e) popup_call_poc_act_window_t4_ParamLimits

0xb804,	// (0x00088d2e) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x0008ca2c) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x0008ca2c) popup_call_poc_act_window_t

0xc68f,	// (0x00089bb9) bg_popup_call_poc_inact_pane_g6

0xc697,	// (0x00089bc1) bg_popup_call_poc_inact_pane_g7

0xc69f,	// (0x00089bc9) bg_popup_call_poc_inact_pane_g8

0xb816,	// (0x00088d40) popup_call_poc_inact_window_g2

0xc6a7,	// (0x00089bd1) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf581,	// (0x0008caab) bg_popup_call_poc_inact_pane_g

0xb81e,	// (0x00088d48) popup_call_poc_inact_window_t1_ParamLimits

0xb81e,	// (0x00088d48) popup_call_poc_inact_window_t1

0xb833,	// (0x00088d5d) popup_call_poc_inact_window_t2_ParamLimits

0xb833,	// (0x00088d5d) popup_call_poc_inact_window_t2

0xb848,	// (0x00088d72) popup_call_poc_inact_window_t3_ParamLimits

0xb848,	// (0x00088d72) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x0008ca35) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x0008ca35) popup_call_poc_inact_window_t

0xc873,	// (0x00089d9d) context_pane_ParamLimits

0x5667,	// (0x00082b91) signal_pane_ParamLimits

0xb40b,	// (0x00088935) main_call2_pane

0xc861,	// (0x00089d8b) popup_phob_thumbnail2_window_ParamLimits

0xc861,	// (0x00089d8b) popup_phob_thumbnail2_window

0x4d12,	// (0x0008223c) aid_hotspot_pointer_arrow_pane

0x4d1a,	// (0x00082244) aid_hotspot_pointer_hand_pane

0x537d,	// (0x000828a7) phob_pre_status_pane_g5

0x2f57,	// (0x00080481) cams_zoom_pane_ParamLimits

0x2f63,	// (0x0008048d) image_vga_pane_ParamLimits

0x2f72,	// (0x0008049c) main_camera_pane_g1_ParamLimits

0x2f80,	// (0x000804aa) main_camera_pane_g2_ParamLimits

0x2f8c,	// (0x000804b6) main_camera_pane_g3_ParamLimits

0x2f9a,	// (0x000804c4) main_camera_pane_g4_ParamLimits

0x2fa8,	// (0x000804d2) main_camera_pane_g5_ParamLimits

0x2fb6,	// (0x000804e0) main_camera_pane_g6_ParamLimits

0x2fc4,	// (0x000804ee) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x0008c734) main_camera_pane_g_ParamLimits

0x2fd2,	// (0x000804fc) main_camera_pane_t1_ParamLimits

0x2fe4,	// (0x0008050e) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x0008c745) main_camera_pane_t_ParamLimits

0xa808,	// (0x00087d32) bg_popup_preview_window_pane_cp01_ParamLimits

0xa808,	// (0x00087d32) bg_popup_preview_window_pane_cp01

0xb85d,	// (0x00088d87) popup_phob_thumbnail2_window_g1_ParamLimits

0xb85d,	// (0x00088d87) popup_phob_thumbnail2_window_g1

0xa5ad,	// (0x00087ad7) call2_cli_visual_pane

0x5074,	// (0x0008259e) popup_call2_audio_conf_window_ParamLimits

0x5074,	// (0x0008259e) popup_call2_audio_conf_window

0x508d,	// (0x000825b7) popup_call2_audio_first_window_ParamLimits

0x508d,	// (0x000825b7) popup_call2_audio_first_window

0x512b,	// (0x00082655) popup_call2_audio_in_window_ParamLimits

0x512b,	// (0x00082655) popup_call2_audio_in_window

0x516f,	// (0x00082699) popup_call2_audio_out_window_ParamLimits

0x516f,	// (0x00082699) popup_call2_audio_out_window

0x51d9,	// (0x00082703) popup_call2_audio_second_window_ParamLimits

0x51d9,	// (0x00082703) popup_call2_audio_second_window

0x5237,	// (0x00082761) popup_call2_audio_wait_window_ParamLimits

0x5237,	// (0x00082761) popup_call2_audio_wait_window

0xa5ad,	// (0x00087ad7) bg_popup_call2_act_pane_cp03

0xa7ea,	// (0x00087d14) list_conf_pane_cp

0xb869,	// (0x00088d93) popup_call2_audio_conf_window_t1

0xb877,	// (0x00088da1) list_single_graphic_popup_conf2_pane_ParamLimits

0xb877,	// (0x00088da1) list_single_graphic_popup_conf2_pane

0xb21e,	// (0x00088748) list_highlight_pane_cp04

0xb88a,	// (0x00088db4) list_single_graphic_popup_conf2_pane_g1

0xb22f,	// (0x00088759) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x0008ca3c) list_single_graphic_popup_conf2_pane_g

0xb894,	// (0x00088dbe) list_single_graphic_popup_conf2_pane_t1

0xb8a2,	// (0x00088dcc) bg_popup_call2_act_pane_cp01_ParamLimits

0xb8a2,	// (0x00088dcc) bg_popup_call2_act_pane_cp01

0xb92c,	// (0x00088e56) call_type_pane_cp05_ParamLimits

0xb92c,	// (0x00088e56) call_type_pane_cp05

0xb980,	// (0x00088eaa) popup_call2_audio_second_window_g1_ParamLimits

0xb980,	// (0x00088eaa) popup_call2_audio_second_window_g1

0xb9d4,	// (0x00088efe) popup_call2_audio_second_window_g2_ParamLimits

0xb9d4,	// (0x00088efe) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x0008ca41) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x0008ca41) popup_call2_audio_second_window_g

0xba39,	// (0x00088f63) popup_call2_audio_second_window_t1_ParamLimits

0xba39,	// (0x00088f63) popup_call2_audio_second_window_t1

0xbaf4,	// (0x0008901e) popup_call2_audio_second_window_t2_ParamLimits

0xbaf4,	// (0x0008901e) popup_call2_audio_second_window_t2

0xbb47,	// (0x00089071) popup_call2_audio_second_window_t3_ParamLimits

0xbb47,	// (0x00089071) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x0008ca48) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x0008ca48) popup_call2_audio_second_window_t

0xa5ad,	// (0x00087ad7) bg_popup_call2_in_pane_cp02

0xa5b7,	// (0x00087ae1) call_type_pane_cp04

0xa5bf,	// (0x00087ae9) popup_call2_audio_wait_window_g1

0xa5c7,	// (0x00087af1) popup_call2_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x0008c61f) popup_call2_audio_wait_window_g

0xa5cf,	// (0x00087af9) popup_call2_audio_wait_window_t3

0xbc3a,	// (0x00089164) bg_popup_call2_act_pane_ParamLimits

0xbc3a,	// (0x00089164) bg_popup_call2_act_pane

0xbcfa,	// (0x00089224) call_type_pane_cp03_ParamLimits

0xbcfa,	// (0x00089224) call_type_pane_cp03

0xbd5e,	// (0x00089288) popup_call2_audio_first_window_g1_ParamLimits

0xbd5e,	// (0x00089288) popup_call2_audio_first_window_g1

0xbdce,	// (0x000892f8) popup_call2_audio_first_window_g2_ParamLimits

0xbdce,	// (0x000892f8) popup_call2_audio_first_window_g2

0xb3ed,	// (0x00088917) popup_call2_audio_first_window_g3_ParamLimits

0xb3ed,	// (0x00088917) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x0008ca51) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x0008ca51) popup_call2_audio_first_window_g

0xbeac,	// (0x000893d6) popup_call2_audio_first_window_t1_ParamLimits

0xbeac,	// (0x000893d6) popup_call2_audio_first_window_t1

0xbfaf,	// (0x000894d9) popup_call2_audio_first_window_t4_ParamLimits

0xbfaf,	// (0x000894d9) popup_call2_audio_first_window_t4

0xc092,	// (0x000895bc) popup_call2_audio_first_window_t5_ParamLimits

0xc092,	// (0x000895bc) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x0008ca5c) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x0008ca5c) popup_call2_audio_first_window_t

0xa800,	// (0x00087d2a) bg_popup_call2_act_pane_g1

0xc701,	// (0x00089c2b) popup_cale_lunar_info_window_t1

0xc70f,	// (0x00089c39) popup_cale_lunar_info_window_t2

0xc71d,	// (0x00089c47) popup_cale_lunar_info_window_t3

0xa5ad,	// (0x00087ad7) bg_popup_call2_bubble_pane

0xc193,	// (0x000896bd) bg_popup_call2_in_pane_cp01_ParamLimits

0xc193,	// (0x000896bd) bg_popup_call2_in_pane_cp01

0xa289,	// (0x000877b3) call_type_pane_cp02

0xc1db,	// (0x00089705) popup_call2_audio_out_window_g1_ParamLimits

0xc1db,	// (0x00089705) popup_call2_audio_out_window_g1

0xc207,	// (0x00089731) popup_call2_audio_out_window_g2_ParamLimits

0xc207,	// (0x00089731) popup_call2_audio_out_window_g2

0xc22f,	// (0x00089759) popup_call2_audio_out_window_g3_ParamLimits

0xc22f,	// (0x00089759) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x0008ca65) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x0008ca65) popup_call2_audio_out_window_g

0xc26a,	// (0x00089794) popup_call2_audio_out_window_t1_ParamLimits

0xc26a,	// (0x00089794) popup_call2_audio_out_window_t1

0xc2c9,	// (0x000897f3) popup_call2_audio_out_window_t2_ParamLimits

0xc2c9,	// (0x000897f3) popup_call2_audio_out_window_t2

0xc31d,	// (0x00089847) popup_call2_audio_out_window_t3_ParamLimits

0xc31d,	// (0x00089847) popup_call2_audio_out_window_t3

0xc333,	// (0x0008985d) popup_call2_audio_out_window_t4_ParamLimits

0xc333,	// (0x0008985d) popup_call2_audio_out_window_t4

0xc349,	// (0x00089873) popup_call2_audio_out_window_t5_ParamLimits

0xc349,	// (0x00089873) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x0008ca6e) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x0008ca6e) popup_call2_audio_out_window_t

0xc3ad,	// (0x000898d7) bg_popup_call2_in_pane_ParamLimits

0xc3ad,	// (0x000898d7) bg_popup_call2_in_pane

0xc409,	// (0x00089933) popup_call2_audio_in_window_g1_ParamLimits

0xc409,	// (0x00089933) popup_call2_audio_in_window_g1

0xc441,	// (0x0008996b) popup_call2_audio_in_window_g2_ParamLimits

0xc441,	// (0x0008996b) popup_call2_audio_in_window_g2

0xc479,	// (0x000899a3) popup_call2_audio_in_window_g3_ParamLimits

0xc479,	// (0x000899a3) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x0008ca7b) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x0008ca7b) popup_call2_audio_in_window_g

0xc4d1,	// (0x000899fb) popup_call2_audio_in_window_t1_ParamLimits

0xc4d1,	// (0x000899fb) popup_call2_audio_in_window_t1

0xc551,	// (0x00089a7b) popup_call2_audio_in_window_t2_ParamLimits

0xc551,	// (0x00089a7b) popup_call2_audio_in_window_t2

0xc5d1,	// (0x00089afb) popup_call2_audio_in_window_t3_ParamLimits

0xc5d1,	// (0x00089afb) popup_call2_audio_in_window_t3

0xc5eb,	// (0x00089b15) popup_call2_audio_in_window_t4_ParamLimits

0xc5eb,	// (0x00089b15) popup_call2_audio_in_window_t4

0xc5fd,	// (0x00089b27) popup_call2_audio_in_window_t5_ParamLimits

0xc5fd,	// (0x00089b27) popup_call2_audio_in_window_t5

0xc612,	// (0x00089b3c) popup_call2_audio_in_window_t6_ParamLimits

0xc612,	// (0x00089b3c) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x0008ca84) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x0008ca84) popup_call2_audio_in_window_t

0xa800,	// (0x00087d2a) bg_popup_call2_in_pane_g1

0xc72b,	// (0x00089c55) popup_cale_lunar_info_window_t4

0x0003,

0xf5c2,	// (0x0008caec) popup_cale_lunar_info_window_t

0xa808,	// (0x00087d32) bg_popup_call2_rect_pane_ParamLimits

0xa808,	// (0x00087d32) bg_popup_call2_rect_pane

0xa5ad,	// (0x00087ad7) call2_cli_visual_graphic_pane

0xa5ad,	// (0x00087ad7) call2_cli_visual_text_pane

0x56ff,	// (0x00082c29) smil_status_volume_pane_g3

0x0002,

0xa950,	// (0x00087e7a) call2_cli_visual_graphic_pane_g1

0xa950,	// (0x00087e7a) call2_cli_visual_graphic_pane_g2

0xa950,	// (0x00087e7a) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x0008ca91) call2_cli_visual_graphic_pane_g

0xc627,	// (0x00089b51) bg_popup_call2_rect_pane_g1

0xa9ee,	// (0x00087f18) bg_popup_call2_rect_pane_g2

0xc62f,	// (0x00089b59) bg_popup_call2_rect_pane_g3

0xc637,	// (0x00089b61) bg_popup_call2_rect_pane_g4

0xc63f,	// (0x00089b69) bg_popup_call2_rect_pane_g5

0xc647,	// (0x00089b71) bg_popup_call2_rect_pane_g6

0xc64f,	// (0x00089b79) bg_popup_call2_rect_pane_g7

0xc657,	// (0x00089b81) bg_popup_call2_rect_pane_g8

0xc65f,	// (0x00089b89) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x0008ca98) bg_popup_call2_rect_pane_g

0xc667,	// (0x00089b91) bg_popup_call2_bubble_pane_g1

0xc66f,	// (0x00089b99) bg_popup_call2_bubble_pane_g2

0xc677,	// (0x00089ba1) bg_popup_call2_bubble_pane_g3

0xc67f,	// (0x00089ba9) bg_popup_call2_bubble_pane_g4

0xc687,	// (0x00089bb1) bg_popup_call2_bubble_pane_g5

0xc68f,	// (0x00089bb9) bg_popup_call2_bubble_pane_g6

0xc697,	// (0x00089bc1) bg_popup_call2_bubble_pane_g7

0xc69f,	// (0x00089bc9) bg_popup_call2_bubble_pane_g8

0xc6a7,	// (0x00089bd1) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x0008caab) bg_popup_call2_bubble_pane_g

0x26a5,	// (0x0007fbcf) aid_cale_week_size_cell_pane

0x2ff8,	// (0x00080522) aid_cams_cif_uncrop_pane_ParamLimits

0x2ff8,	// (0x00080522) aid_cams_cif_uncrop_pane

0x3155,	// (0x0008067f) aid_cams_size_cell_ParamLimits

0x3155,	// (0x0008067f) aid_cams_size_cell

0x3161,	// (0x0008068b) grid_cams_pane_ParamLimits

0x316f,	// (0x00080699) linegrid_cams_pane_ParamLimits

0x3258,	// (0x00080782) call_video_pane_t1

0x3275,	// (0x0008079f) call_video_pane_t2

0x0001,

0xf26e,	// (0x0008c798) call_video_pane_t

0x3741,	// (0x00080c6b) aid_cale_month_size_cell_pane_ParamLimits

0x3741,	// (0x00080c6b) aid_cale_month_size_cell_pane

0xf60b,	// (0x0008cb35) smil_status_volume_pane_g

0x570c,	// (0x00082c36) volume_smil_pane_ParamLimits

0xa15b,	// (0x00087685) aid_popup2_width_pane

0x25a7,	// (0x0007fad1) cell_qdial_pane_g4_ParamLimits

0x25a7,	// (0x0007fad1) cell_qdial_pane_g4

0x4677,	// (0x00081ba1) aid_blid_cardinal_pane_ParamLimits

0x4687,	// (0x00081bb1) aid_blid_destination_pane_ParamLimits

0x4687,	// (0x00081bb1) aid_blid_destination_pane

0xa808,	// (0x00087d32) bg_popup_call_poc_act_pane_ParamLimits

0xa808,	// (0x00087d32) bg_popup_call_poc_act_pane

0xa808,	// (0x00087d32) bg_popup_call_poc_inact_pane_ParamLimits

0xa808,	// (0x00087d32) bg_popup_call_poc_inact_pane

0xc6af,	// (0x00089bd9) bg_popup_call_poc_act_pane_g1

0xc6b7,	// (0x00089be1) bg_popup_call_poc_act_pane_g2

0xc6bf,	// (0x00089be9) bg_popup_call_poc_act_pane_g3

0xc67f,	// (0x00089ba9) bg_popup_call_poc_act_pane_g4

0xc687,	// (0x00089bb1) bg_popup_call_poc_act_pane_g5

0xc6c7,	// (0x00089bf1) bg_popup_call_poc_act_pane_g6

0xc697,	// (0x00089bc1) bg_popup_call_poc_act_pane_g7

0xc6cf,	// (0x00089bf9) bg_popup_call_poc_act_pane_g8

0xa5ad,	// (0x00087ad7) main_usb_pane

0xc838,	// (0x00089d62) popup_cale_lunar_info_window

0x358d,	// (0x00080ab7) im_reading_pane_t1_ParamLimits

0xabcc,	// (0x000880f6) list_im_pane_ParamLimits

0xabdd,	// (0x00088107) scroll_pane_cp07_ParamLimits

0xa5ad,	// (0x00087ad7) grid_highlight_pane_cp012

0xa808,	// (0x00087d32) mup_scale_pane_ParamLimits

0xb3ed,	// (0x00088917) main_usb_pane_g1_ParamLimits

0xb3ed,	// (0x00088917) main_usb_pane_g1

0x52a0,	// (0x000827ca) main_usb_pane_g2_ParamLimits

0x52a0,	// (0x000827ca) main_usb_pane_g2

0x0001,

0xf5ab,	// (0x0008cad5) main_usb_pane_g_ParamLimits

0xf5ab,	// (0x0008cad5) main_usb_pane_g

0x52ac,	// (0x000827d6) main_usb_pane_t1_ParamLimits

0x52ac,	// (0x000827d6) main_usb_pane_t1

0x52be,	// (0x000827e8) main_usb_pane_t2_ParamLimits

0x52be,	// (0x000827e8) main_usb_pane_t2

0x52d0,	// (0x000827fa) main_usb_pane_t3_ParamLimits

0x52d0,	// (0x000827fa) main_usb_pane_t3

0x52e2,	// (0x0008280c) main_usb_pane_t4_ParamLimits

0x52e2,	// (0x0008280c) main_usb_pane_t4

0x52f4,	// (0x0008281e) main_usb_pane_t5_ParamLimits

0x52f4,	// (0x0008281e) main_usb_pane_t5

0x5306,	// (0x00082830) main_usb_pane_t6_ParamLimits

0x5306,	// (0x00082830) main_usb_pane_t6

0x0005,

0xf5b0,	// (0x0008cada) main_usb_pane_t_ParamLimits

0x4616,	// (0x00081b40) aid_text_placing

0x4621,	// (0x00081b4b) main_location2_pane_t1_ParamLimits

0x4637,	// (0x00081b61) main_location2_pane_t2_ParamLimits

0x464d,	// (0x00081b77) main_location2_pane_t3_ParamLimits

0x4663,	// (0x00081b8d) main_location2_pane_t4_ParamLimits

0x4663,	// (0x00081b8d) main_location2_pane_t4

0xf3cf,	// (0x0008c8f9) main_location2_pane_t_ParamLimits

0xa844,	// (0x00087d6e) find_pinb_pane_g2_ParamLimits

0xa844,	// (0x00087d6e) find_pinb_pane_g2

0x0001,

0xf11b,	// (0x0008c645) find_pinb_pane_g_ParamLimits

0xf11b,	// (0x0008c645) find_pinb_pane_g

0xa850,	// (0x00087d7a) find_pinb_pane_t1_ParamLimits

0xa862,	// (0x00087d8c) find_pinb_pane_t2_ParamLimits

0xf120,	// (0x0008c64a) find_pinb_pane_t_ParamLimits

0xa5ad,	// (0x00087ad7) main_call3_pane

0x3cc0,	// (0x000811ea) cale_month_day_heading_pane_t1_ParamLimits

0x3d42,	// (0x0008126c) cale_month_day_heading_pane_t2_ParamLimits

0x3dcf,	// (0x000812f9) cale_month_day_heading_pane_t3_ParamLimits

0x3e5c,	// (0x00081386) cale_month_day_heading_pane_t4_ParamLimits

0x3ee9,	// (0x00081413) cale_month_day_heading_pane_t5_ParamLimits

0x3f7e,	// (0x000814a8) cale_month_day_heading_pane_t6_ParamLimits

0x401b,	// (0x00081545) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x0008c7d0) cale_month_day_heading_pane_t_ParamLimits

0x42c7,	// (0x000817f1) smil_status_volume_pane

0x4e5e,	// (0x00082388) postcard_address_pane_ParamLimits

0x4e5e,	// (0x00082388) postcard_address_pane

0x4e6c,	// (0x00082396) postcard_message_pane_ParamLimits

0x4e6c,	// (0x00082396) postcard_message_pane

0x5276,	// (0x000827a0) call2_cli_visual_pane_t1_ParamLimits

0x5276,	// (0x000827a0) call2_cli_visual_pane_t1

0x586b,	// (0x00082d95) postcard_message_pane_t1_ParamLimits

0x586b,	// (0x00082d95) postcard_message_pane_t1

0x5854,	// (0x00082d7e) postcard_address_pane_t1_ParamLimits

0x5854,	// (0x00082d7e) postcard_address_pane_t1

0x5845,	// (0x00082d6f) popup_call3_audio_in_window_ParamLimits

0x5845,	// (0x00082d6f) popup_call3_audio_in_window

0x5723,	// (0x00082c4d) bg_popup_call3_in_pane_ParamLimits

0x5723,	// (0x00082c4d) bg_popup_call3_in_pane

0x578b,	// (0x00082cb5) popup_call3_audio_in_window_g1_ParamLimits

0x578b,	// (0x00082cb5) popup_call3_audio_in_window_g1

0x57a3,	// (0x00082ccd) popup_call3_audio_in_window_g2_ParamLimits

0x57a3,	// (0x00082ccd) popup_call3_audio_in_window_g2

0x57bb,	// (0x00082ce5) popup_call3_audio_in_window_g3_ParamLimits

0x57bb,	// (0x00082ce5) popup_call3_audio_in_window_g3

0x0003,

0xf612,	// (0x0008cb3c) popup_call3_audio_in_window_g_ParamLimits

0xf612,	// (0x0008cb3c) popup_call3_audio_in_window_g

0x57e3,	// (0x00082d0d) popup_call3_audio_in_window_t1_ParamLimits

0x57e3,	// (0x00082d0d) popup_call3_audio_in_window_t1

0x580b,	// (0x00082d35) popup_call3_audio_in_window_t2_ParamLimits

0x580b,	// (0x00082d35) popup_call3_audio_in_window_t2

0x5833,	// (0x00082d5d) popup_call3_audio_in_window_t3_ParamLimits

0x5833,	// (0x00082d5d) popup_call3_audio_in_window_t3

0x0002,

0xf61b,	// (0x0008cb45) popup_call3_audio_in_window_t_ParamLimits

0xf61b,	// (0x0008cb45) popup_call3_audio_in_window_t

0xb40b,	// (0x00088935) bg_popup_call3_rect_pane

0xc627,	// (0x00089b51) bg_popup_call3_rect_pane_g1

0xa9ee,	// (0x00087f18) bg_popup_call3_rect_pane_g2

0xc62f,	// (0x00089b59) bg_popup_call3_rect_pane_g3

0xc637,	// (0x00089b61) bg_popup_call3_rect_pane_g4

0xc63f,	// (0x00089b69) bg_popup_call3_rect_pane_g5

0xc647,	// (0x00089b71) bg_popup_call3_rect_pane_g6

0xc64f,	// (0x00089b79) bg_popup_call3_rect_pane_g7

0x4abd,	// (0x00081fe7) mup_visualizer_osc_pane

0xb4ca,	// (0x000889f4) mup_visualizer_spec_pane

0x5743,	// (0x00082c6d) call3_video_qcif_pane_ParamLimits

0x5743,	// (0x00082c6d) call3_video_qcif_pane

0x5755,	// (0x00082c7f) call3_video_qcif_uncrop_pane_ParamLimits

0x5755,	// (0x00082c7f) call3_video_qcif_uncrop_pane

0x5765,	// (0x00082c8f) call3_video_subqcif_pane_ParamLimits

0x5765,	// (0x00082c8f) call3_video_subqcif_pane

0x5779,	// (0x00082ca3) call3_video_subqcif_uncrop_pane_ParamLimits

0x5779,	// (0x00082ca3) call3_video_subqcif_uncrop_pane

0x57d3,	// (0x00082cfd) popup_call3_audio_in_window_g4_ParamLimits

0x57d3,	// (0x00082cfd) popup_call3_audio_in_window_g4

0x56ee,	// (0x00082c18) mup_spec_half_pane

0x56f7,	// (0x00082c21) mup_spec_half_pane_cp

0xc8d3,	// (0x00089dfd) mup_osc_middle_pane

0xc8dc,	// (0x00089e06) mup_visualizer_osc_pane_g1

0x56ce,	// (0x00082bf8) mup_spec_bar_pane_ParamLimits

0x56ce,	// (0x00082bf8) mup_spec_bar_pane

0xc8c0,	// (0x00089dea) mup_spec_bar_pane_g1

0xc8ca,	// (0x00089df4) mup_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0008cb30) mup_spec_bar_pane_g

0x26a5,	// (0x0007fbcf) aid_cale_week_size_cell_pane_ParamLimits

0x26bf,	// (0x0007fbe9) bg_cale_heading_pane_ParamLimits

0xaa22,	// (0x00087f4c) bg_cale_pane_cp01_ParamLimits

0x26e8,	// (0x0007fc12) cale_week_corner_pane_ParamLimits

0x2707,	// (0x0007fc31) cale_week_day_heading_pane_ParamLimits

0x2735,	// (0x0007fc5f) cale_week_scroll_pane_g1_ParamLimits

0x2759,	// (0x0007fc83) cale_week_scroll_pane_g2_ParamLimits

0x2771,	// (0x0007fc9b) cale_week_scroll_pane_g3_ParamLimits

0x2789,	// (0x0007fcb3) cale_week_scroll_pane_g4_ParamLimits

0x27a1,	// (0x0007fccb) cale_week_scroll_pane_g5_ParamLimits

0x27b9,	// (0x0007fce3) cale_week_scroll_pane_g6_ParamLimits

0x27d9,	// (0x0007fd03) cale_week_scroll_pane_g7_ParamLimits

0x27f9,	// (0x0007fd23) cale_week_scroll_pane_g8_ParamLimits

0x2819,	// (0x0007fd43) cale_week_scroll_pane_g9_ParamLimits

0x2836,	// (0x0007fd60) cale_week_scroll_pane_g10_ParamLimits

0x2853,	// (0x0007fd7d) cale_week_scroll_pane_g11_ParamLimits

0x2870,	// (0x0007fd9a) cale_week_scroll_pane_g12_ParamLimits

0x288d,	// (0x0007fdb7) cale_week_scroll_pane_g13_ParamLimits

0x28b2,	// (0x0007fddc) cale_week_scroll_pane_g14_ParamLimits

0x28db,	// (0x0007fe05) cale_week_scroll_pane_g15_ParamLimits

0xf1ac,	// (0x0008c6d6) cale_week_scroll_pane_g_ParamLimits

0x2924,	// (0x0007fe4e) cale_week_time_pane_ParamLimits

0x2944,	// (0x0007fe6e) grid_cale_week_pane_ParamLimits

0xaa40,	// (0x00087f6a) listscroll_cale_week_pane_t1

0xaa52,	// (0x00087f7c) scroll_pane_cp08_ParamLimits

0x37ae,	// (0x00080cd8) cale_month_corner_pane_ParamLimits

0xadfd,	// (0x00088327) cale_month_pane_t1

0x3c52,	// (0x0008117c) cale_month_week_pane_ParamLimits

0xb3ed,	// (0x00088917) popup_call_status_window_g1_ParamLimits

0x441f,	// (0x00081949) popup_call_status_window_g2_ParamLimits

0x442b,	// (0x00081955) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x0008c880) popup_call_status_window_g_ParamLimits

0xb19f,	// (0x000886c9) aid_call2_pane

0x0db7,	// (0x0007e2e1) msg_header_pane_g1

0x4e5e,	// (0x00082388) postcard_address2_pane_ParamLimits

0x4e5e,	// (0x00082388) postcard_address2_pane

0x4e6c,	// (0x00082396) postcard_message2_pane_ParamLimits

0x4e6c,	// (0x00082396) postcard_message2_pane

0x5675,	// (0x00082b9f) message2_row_pane_ParamLimits

0x5675,	// (0x00082b9f) message2_row_pane

0x568f,	// (0x00082bb9) address2_row_pane_ParamLimits

0x568f,	// (0x00082bb9) address2_row_pane

0xc88e,	// (0x00089db8) postcard_message2_row_pane_g1

0xc896,	// (0x00089dc0) postcard_message2_row_pane_t1

0xc88e,	// (0x00089db8) address2_row_pane_g1

0xc896,	// (0x00089dc0) address2_row_pane_t1

0x2eac,	// (0x000803d6) aid_size_cell_vorec

0xa5ad,	// (0x00087ad7) main_rss_pane

0x56a2,	// (0x00082bcc) rss_list_single_pane_ParamLimits

0x56a2,	// (0x00082bcc) rss_list_single_pane

0xc8a4,	// (0x00089dce) rss_list_single_pane_t1

0xc8b2,	// (0x00089ddc) rss_list_single_pane_t2

0x0001,

0xf601,	// (0x0008cb2b) rss_list_single_pane_t

0xa5ad,	// (0x00087ad7) main_camera2_pane

0xa5ad,	// (0x00087ad7) main_video2_pane

0x58cf,	// (0x00082df9) cams_zoom_pane_cp2_ParamLimits

0x58cf,	// (0x00082df9) cams_zoom_pane_cp2

0x58db,	// (0x00082e05) image2_vga_pane_ParamLimits

0x58db,	// (0x00082e05) image2_vga_pane

0x58ea,	// (0x00082e14) main_camera2_pane_g1_ParamLimits

0x58ea,	// (0x00082e14) main_camera2_pane_g1

0x58f6,	// (0x00082e20) main_camera2_pane_g2_ParamLimits

0x58f6,	// (0x00082e20) main_camera2_pane_g2

0x5902,	// (0x00082e2c) main_camera2_pane_g3_ParamLimits

0x5902,	// (0x00082e2c) main_camera2_pane_g3

0x590e,	// (0x00082e38) main_camera2_pane_g4_ParamLimits

0x590e,	// (0x00082e38) main_camera2_pane_g4

0x591a,	// (0x00082e44) main_camera2_pane_g5_ParamLimits

0x591a,	// (0x00082e44) main_camera2_pane_g5

0x5926,	// (0x00082e50) main_camera2_pane_g6_ParamLimits

0x5926,	// (0x00082e50) main_camera2_pane_g6

0x5932,	// (0x00082e5c) main_camera2_pane_g7_ParamLimits

0x5932,	// (0x00082e5c) main_camera2_pane_g7

0x593e,	// (0x00082e68) main_camera2_pane_g8_ParamLimits

0x593e,	// (0x00082e68) main_camera2_pane_g8

0x0008,

0xf622,	// (0x0008cb4c) main_camera2_pane_g_ParamLimits

0xf622,	// (0x0008cb4c) main_camera2_pane_g

0x5956,	// (0x00082e80) main_camera2_pane_t1_ParamLimits

0x5956,	// (0x00082e80) main_camera2_pane_t1

0x5968,	// (0x00082e92) main_camera2_pane_t2_ParamLimits

0x5968,	// (0x00082e92) main_camera2_pane_t2

0x597a,	// (0x00082ea4) main_camera2_pane_t3_ParamLimits

0x597a,	// (0x00082ea4) main_camera2_pane_t3

0x598c,	// (0x00082eb6) main_camera2_pane_t4_ParamLimits

0x598c,	// (0x00082eb6) main_camera2_pane_t4

0x0006,

0xf635,	// (0x0008cb5f) main_camera2_pane_t_ParamLimits

0xf635,	// (0x0008cb5f) main_camera2_pane_t

0x59e9,	// (0x00082f13) cams_zoom_pane_cp4_ParamLimits

0x59e9,	// (0x00082f13) cams_zoom_pane_cp4

0x59f9,	// (0x00082f23) image2_cif_pane_ParamLimits

0x59f9,	// (0x00082f23) image2_cif_pane

0x5a0e,	// (0x00082f38) image2_subqcif_pane_ParamLimits

0x5a0e,	// (0x00082f38) image2_subqcif_pane

0x5a1d,	// (0x00082f47) main_video2_pane_g1_ParamLimits

0x5a1d,	// (0x00082f47) main_video2_pane_g1

0x5a2f,	// (0x00082f59) main_video2_pane_g2_ParamLimits

0x5a2f,	// (0x00082f59) main_video2_pane_g2

0x5a3f,	// (0x00082f69) main_video2_pane_g3_ParamLimits

0x5a3f,	// (0x00082f69) main_video2_pane_g3

0x5a4f,	// (0x00082f79) main_video2_pane_g4_ParamLimits

0x5a4f,	// (0x00082f79) main_video2_pane_g4

0x5a5f,	// (0x00082f89) main_video2_pane_g5_ParamLimits

0x5a5f,	// (0x00082f89) main_video2_pane_g5

0x5a6f,	// (0x00082f99) main_video2_pane_g6_ParamLimits

0x5a6f,	// (0x00082f99) main_video2_pane_g6

0x0005,

0xf644,	// (0x0008cb6e) main_video2_pane_g_ParamLimits

0xf644,	// (0x0008cb6e) main_video2_pane_g

0x5a81,	// (0x00082fab) main_video2_pane_t1_ParamLimits

0x5a81,	// (0x00082fab) main_video2_pane_t1

0x5a9b,	// (0x00082fc5) main_video2_pane_t2_ParamLimits

0x5a9b,	// (0x00082fc5) main_video2_pane_t2

0x5ac1,	// (0x00082feb) main_video2_pane_t3_ParamLimits

0x5ac1,	// (0x00082feb) main_video2_pane_t3

0x0002,

0xf651,	// (0x0008cb7b) main_video2_pane_t_ParamLimits

0xf651,	// (0x0008cb7b) main_video2_pane_t

0x53bd,	// (0x000828e7) call_muted_g2

0x0001,

0xf5f3,	// (0x0008cb1d) call_muted_g

0xa5ad,	// (0x00087ad7) main_mup2_pane

0xc931,	// (0x00089e5b) main_mup2_pane_g1_ParamLimits

0xc931,	// (0x00089e5b) main_mup2_pane_g1

0x5ae7,	// (0x00083011) main_mup2_pane_g2_ParamLimits

0x5ae7,	// (0x00083011) main_mup2_pane_g2

0x5d79,	// (0x000832a3) main_mup_pane_g13_cp1

0x5d81,	// (0x000832ab) mup_volume_pane_cp1

0x5b09,	// (0x00083033) main_mup2_pane_g4_ParamLimits

0x5b09,	// (0x00083033) main_mup2_pane_g4

0x5b1e,	// (0x00083048) main_mup2_pane_g5_ParamLimits

0x5b1e,	// (0x00083048) main_mup2_pane_g5

0x5b33,	// (0x0008305d) main_mup2_pane_g6_ParamLimits

0x5b33,	// (0x0008305d) main_mup2_pane_g6

0x5b48,	// (0x00083072) main_mup2_pane_g7_ParamLimits

0x5b48,	// (0x00083072) main_mup2_pane_g7

0x0006,

0xf658,	// (0x0008cb82) main_mup2_pane_g_ParamLimits

0xf658,	// (0x0008cb82) main_mup2_pane_g

0x5b64,	// (0x0008308e) main_mup2_pane_t1_ParamLimits

0x5b64,	// (0x0008308e) main_mup2_pane_t1

0x5b7b,	// (0x000830a5) main_mup2_pane_t2_ParamLimits

0x5b7b,	// (0x000830a5) main_mup2_pane_t2

0x5b92,	// (0x000830bc) main_mup2_pane_t3_ParamLimits

0x5b92,	// (0x000830bc) main_mup2_pane_t3

0x5ba9,	// (0x000830d3) main_mup2_pane_t4_ParamLimits

0x5ba9,	// (0x000830d3) main_mup2_pane_t4

0x5bc3,	// (0x000830ed) main_mup2_pane_t5_ParamLimits

0x5bc3,	// (0x000830ed) main_mup2_pane_t5

0x5bdd,	// (0x00083107) main_mup2_pane_t6_ParamLimits

0x5bdd,	// (0x00083107) main_mup2_pane_t6

0x0005,

0xf667,	// (0x0008cb91) main_mup2_pane_t_ParamLimits

0xf667,	// (0x0008cb91) main_mup2_pane_t

0x5c15,	// (0x0008313f) mup2_visualizer_pane_ParamLimits

0x5c15,	// (0x0008313f) mup2_visualizer_pane

0x5c4b,	// (0x00083175) mup_progress_pane_cp_ParamLimits

0x5c4b,	// (0x00083175) mup_progress_pane_cp

0x5d64,	// (0x0008328e) mup_volume_pane_cp_ParamLimits

0x5d64,	// (0x0008328e) mup_volume_pane_cp

0x5c64,	// (0x0008318e) mup2_visualizer_pane_g1_ParamLimits

0x5c64,	// (0x0008318e) mup2_visualizer_pane_g1

0xc913,	// (0x00089e3d) mup2_visualizer_pane_g2_ParamLimits

0xc913,	// (0x00089e3d) mup2_visualizer_pane_g2

0x5c79,	// (0x000831a3) mup2_visualizer_pane_g3_ParamLimits

0x5c79,	// (0x000831a3) mup2_visualizer_pane_g3

0x0002,

0xf674,	// (0x0008cb9e) mup2_visualizer_pane_g_ParamLimits

0xf674,	// (0x0008cb9e) mup2_visualizer_pane_g

0xb6f3,	// (0x00088c1d) aid_size_cell_fmradio

0x54d3,	// (0x000829fd) aid_height_parent_landcape

0xac5b,	// (0x00088185) wml_content_pane_cp

0xac63,	// (0x0008818d) wml_tabs_pane

0xac6c,	// (0x00088196) popup_wml_miniature_window

0xac74,	// (0x0008819e) scroll_pane_cp021

0xac88,	// (0x000881b2) wml_content_pane_comp8

0xa5ad,	// (0x00087ad7) bg_popup_sub_pane_cp05

0xc93d,	// (0x00089e67) popup_wml_miniature_window_g1

0xc945,	// (0x00089e6f) wml_miniature_view_pane

0x5c87,	// (0x000831b1) aid_size_wml_view

0x5c8f,	// (0x000831b9) wml_miniature_view_pane_g1

0x5c98,	// (0x000831c2) wml_miniature_view_pane_g2

0x5ca1,	// (0x000831cb) wml_miniature_view_pane_g3

0x5ca9,	// (0x000831d3) wml_miniature_view_pane_g4

0x5cb1,	// (0x000831db) wml_miniature_view_pane_g5

0x5cb9,	// (0x000831e3) wml_miniature_view_pane_g6

0x5cc1,	// (0x000831eb) wml_miniature_view_pane_g7

0x5cc9,	// (0x000831f3) wml_miniature_view_pane_g8

0x0007,

0xf67b,	// (0x0008cba5) wml_miniature_view_pane_g

0xc931,	// (0x00089e5b) background_graphic_ParamLimits

0xc931,	// (0x00089e5b) background_graphic

0xc94d,	// (0x00089e77) wml_tabs_2_pane

0xc956,	// (0x00089e80) wml_tabs_3_pane_ParamLimits

0xc956,	// (0x00089e80) wml_tabs_3_pane

0xc968,	// (0x00089e92) wml_tabs_4_pane_ParamLimits

0xc968,	// (0x00089e92) wml_tabs_4_pane

0xc97e,	// (0x00089ea8) wml_tabs_5_pane_ParamLimits

0xc97e,	// (0x00089ea8) wml_tabs_5_pane

0xc998,	// (0x00089ec2) wml_tabs_pane_g2_ParamLimits

0xc998,	// (0x00089ec2) wml_tabs_pane_g2

0xc9ac,	// (0x00089ed6) wml_tabs_pane_g3_ParamLimits

0xc9ac,	// (0x00089ed6) wml_tabs_pane_g3

0x5cd1,	// (0x000831fb) wml_tabs_2_active_pane_ParamLimits

0x5cd1,	// (0x000831fb) wml_tabs_2_active_pane

0x5ce3,	// (0x0008320d) wml_tabs_2_passive_pane_ParamLimits

0x5ce3,	// (0x0008320d) wml_tabs_2_passive_pane

0x5cf5,	// (0x0008321f) wml_tabs_3_active_pane_cp_ParamLimits

0x5cf5,	// (0x0008321f) wml_tabs_3_active_pane_cp

0x5d08,	// (0x00083232) wml_tabs_3_passive_pane_ParamLimits

0x5d08,	// (0x00083232) wml_tabs_3_passive_pane

0x5d19,	// (0x00083243) wml_tabs_3_passive_pane_cp_ParamLimits

0x5d19,	// (0x00083243) wml_tabs_3_passive_pane_cp

0x5d2e,	// (0x00083258) tabs_4_active_pane

0x5d36,	// (0x00083260) tabs_4_passive_pane

0x5d3e,	// (0x00083268) tabs_4_passive_pane_cp

0x5d46,	// (0x00083270) tabs_4_passive_pane_cp2

0x5298,	// (0x000827c2) aid_height_text

0x4a86,	// (0x00081fb0) mup_volume_cont_pane_ParamLimits

0x4a86,	// (0x00081fb0) mup_volume_cont_pane

0x21fd,	// (0x0007f727) aid_size_cell_pinb

0x2207,	// (0x0007f731) aid_size_list_pinb

0x5c34,	// (0x0008315e) mup2_volume_cont_pane_ParamLimits

0x5c34,	// (0x0008315e) mup2_volume_cont_pane

0x5d50,	// (0x0008327a) mup2_volume_cont_pane_g1_ParamLimits

0x5d50,	// (0x0008327a) mup2_volume_cont_pane_g1

0x1e77,	// (0x0007f3a1) aid_size_cell_touch_ParamLimits

0x1e77,	// (0x0007f3a1) aid_size_cell_touch

0x20e7,	// (0x0007f611) touch_pane_ParamLimits

0x20e7,	// (0x0007f611) touch_pane

0xa149,	// (0x00087673) main_rss2_pane

0xc9c9,	// (0x00089ef3) listscroll_rss2_pane

0xc9d2,	// (0x00089efc) rss2_navigation_pane

0xc9da,	// (0x00089f04) list_rss2_pane

0xb2c3,	// (0x000887ed) scroll_pane_cp22

0xc9e2,	// (0x00089f0c) rss2_navigation_pane_g1

0xc9eb,	// (0x00089f15) rss2_navigation_pane_g2

0xc9f3,	// (0x00089f1d) rss2_navigation_pane_g3

0x0002,

0xf68c,	// (0x0008cbb6) rss2_navigation_pane_g

0xc9fb,	// (0x00089f25) rss2_navigation_pane_t1

0x5d89,	// (0x000832b3) rss2_list_single_pane_ParamLimits

0x5d89,	// (0x000832b3) rss2_list_single_pane

0xca09,	// (0x00089f33) rss2_list_single_pane_t2

0xca17,	// (0x00089f41) rss2_list_single_pane_t3_ParamLimits

0xca17,	// (0x00089f41) rss2_list_single_pane_t3

0xca34,	// (0x00089f5e) rss2_list_single_pane_t4

0x42b1,	// (0x000817db) smil_status_pane_g1

0xa8cd,	// (0x00087df7) main_image2_pane_ParamLimits

0xa8cd,	// (0x00087df7) main_image2_pane

0x594a,	// (0x00082e74) main_camera2_pane_g9_ParamLimits

0x594a,	// (0x00082e74) main_camera2_pane_g9

0x599e,	// (0x00082ec8) main_camera2_pane_t5_ParamLimits

0x599e,	// (0x00082ec8) main_camera2_pane_t5

0x59b0,	// (0x00082eda) main_camera2_pane_t6_ParamLimits

0x59b0,	// (0x00082eda) main_camera2_pane_t6

0x5dac,	// (0x000832d6) main_image2_pane_g1_ParamLimits

0x5dac,	// (0x000832d6) main_image2_pane_g1

0x5035,	// (0x0008255f) smil2_video_pane_ParamLimits

0x5035,	// (0x0008255f) smil2_video_pane

0x0b60,	// (0x0007e08a) aid_zoom_text_primary_cp

0xa190,	// (0x000876ba) popup_preview_fixed_window

0xabc4,	// (0x000880ee) im_reading_pane_g1

0x5894,	// (0x00082dbe) cams2_bc_adjust_pane_cp_ParamLimits

0x5894,	// (0x00082dbe) cams2_bc_adjust_pane_cp

0x59db,	// (0x00082f05) cams2_bc_adjust_pane_ParamLimits

0x59db,	// (0x00082f05) cams2_bc_adjust_pane

0x5db8,	// (0x000832e2) cams2_bc_adjust_pane_g1

0x5dc0,	// (0x000832ea) cams2_slider_pane

0x5dc9,	// (0x000832f3) cams2_slider_pane_g1

0x5dd2,	// (0x000832fc) cams2_slider_pane_g2

0x0006,

0xf693,	// (0x0008cbbd) cams2_slider_pane_g

0x2302,	// (0x0007f82c) calc_display_pane_ParamLimits

0x2320,	// (0x0007f84a) calc_paper_pane_ParamLimits

0x233c,	// (0x0007f866) grid_calc_pane_ParamLimits

0x4489,	// (0x000819b3) popup_clock_digital_window_t1_ParamLimits

0xb690,	// (0x00088bba) main_image_pane_t1

0x22e8,	// (0x0007f812) aid_size_cell_calc_ParamLimits

0x22e8,	// (0x0007f812) aid_size_cell_calc

0x5505,	// (0x00082a2f) popup_blid_sat_info2_window_ParamLimits

0x5505,	// (0x00082a2f) popup_blid_sat_info2_window

0xca4a,	// (0x00089f74) aid_size_cell_blid

0xca52,	// (0x00089f7c) bg_popup_window_pane_cp07

0xca75,	// (0x00089f9f) grid_popup_blid_pane

0xca7f,	// (0x00089fa9) heading_pane_cp05_ParamLimits

0xca7f,	// (0x00089fa9) heading_pane_cp05

0xcb49,	// (0x0008a073) cell_popup_blid_pane_ParamLimits

0xcb49,	// (0x0008a073) cell_popup_blid_pane

0xcb73,	// (0x0008a09d) cell_popup_blid_pane_g1

0xcb7b,	// (0x0008a0a5) cell_popup_blid_pane_t1

0x5bfa,	// (0x00083124) mup2_indicator_pane_ParamLimits

0x5bfa,	// (0x00083124) mup2_indicator_pane

0xb40b,	// (0x00088935) mup2_visualizer_osc_pane

0xc91f,	// (0x00089e49) mup2_visualizer_spec_pane_ParamLimits

0xc91f,	// (0x00089e49) mup2_visualizer_spec_pane

0x5dec,	// (0x00083316) mup2_spec_half_pane

0x5df5,	// (0x0008331f) mup2_spec_half_pane_cp

0x5dff,	// (0x00083329) mup2_spec_bar_pane_ParamLimits

0x5dff,	// (0x00083329) mup2_spec_bar_pane

0xc8c0,	// (0x00089dea) mup2_spec_bar_pane_g1

0xc8ca,	// (0x00089df4) mup2_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0008cb30) mup2_spec_bar_pane_g

0x5e1e,	// (0x00083348) mup2_osc_middle_pane

0xc8dc,	// (0x00089e06) mup2_visualizer_osc_pane_g1

0xa1ba,	// (0x000876e4) popup_number_entry_window_t1_ParamLimits

0xa1cd,	// (0x000876f7) popup_number_entry_window_t2_ParamLimits

0xa1df,	// (0x00087709) popup_number_entry_window_t3_ParamLimits

0x213e,	// (0x0007f668) popup_number_entry_window_t5_ParamLimits

0x213e,	// (0x0007f668) popup_number_entry_window_t5

0xf0c6,	// (0x0008c5f0) popup_number_entry_window_t_ParamLimits

0xa1f1,	// (0x0008771b) text_title_cp2_ParamLimits

0x4d22,	// (0x0008224c) aid_hotspot_pointer_text2_pane

0x4dbc,	// (0x000822e6) main_viewer_pane_g9_ParamLimits

0x4dbc,	// (0x000822e6) main_viewer_pane_g9

0xadfd,	// (0x00088327) cale_month_pane_t1_ParamLimits

0xae23,	// (0x0008834d) bg_cale_pane_ParamLimits

0xae3b,	// (0x00088365) list_cale_pane_ParamLimits

0xae4c,	// (0x00088376) listscroll_cale_day_pane_t1

0xae5e,	// (0x00088388) scroll_pane_cp09_ParamLimits

0x4ac5,	// (0x00081fef) main_mup_eq_pane_t1_ParamLimits

0x4ac5,	// (0x00081fef) main_mup_eq_pane_t1

0x4ae1,	// (0x0008200b) main_mup_eq_pane_t2_ParamLimits

0x4ae1,	// (0x0008200b) main_mup_eq_pane_t2

0x4afd,	// (0x00082027) main_mup_eq_pane_t3_ParamLimits

0x4afd,	// (0x00082027) main_mup_eq_pane_t3

0x4b17,	// (0x00082041) main_mup_eq_pane_t4_ParamLimits

0x4b17,	// (0x00082041) main_mup_eq_pane_t4

0x4b31,	// (0x0008205b) main_mup_eq_pane_t5_ParamLimits

0x4b31,	// (0x0008205b) main_mup_eq_pane_t5

0x4b4b,	// (0x00082075) main_mup_eq_pane_t6_ParamLimits

0x4b4b,	// (0x00082075) main_mup_eq_pane_t6

0x4b61,	// (0x0008208b) main_mup_eq_pane_t7_ParamLimits

0x4b61,	// (0x0008208b) main_mup_eq_pane_t7

0x4b77,	// (0x000820a1) main_mup_eq_pane_t8_ParamLimits

0x4b77,	// (0x000820a1) main_mup_eq_pane_t8

0x4b8d,	// (0x000820b7) main_mup_eq_pane_t9_ParamLimits

0x4b8d,	// (0x000820b7) main_mup_eq_pane_t9

0x4ba9,	// (0x000820d3) main_mup_eq_pane_t10_ParamLimits

0x4ba9,	// (0x000820d3) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x0008c97f) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x0008c97f) main_mup_eq_pane_t

0x4c6e,	// (0x00082198) mup_equalizer_pane_cp5_ParamLimits

0x4c86,	// (0x000821b0) mup_equalizer_pane_cp6_ParamLimits

0x4c9e,	// (0x000821c8) mup_equalizer_pane_cp7_ParamLimits

0xa149,	// (0x00087673) main_gallery_pane

0xc8e5,	// (0x00089e0f) smil2_volume_pane

0xc8ed,	// (0x00089e17) smil_status_volume_pane_g1_ParamLimits

0xc900,	// (0x00089e2a) smil_status_volume_pane_g2_ParamLimits

0x56ff,	// (0x00082c29) smil_status_volume_pane_g3_ParamLimits

0xf60b,	// (0x0008cb35) smil_status_volume_pane_g_ParamLimits

0xca52,	// (0x00089f7c) bg_popup_window_pane_cp07_ParamLimits

0xca60,	// (0x00089f8a) blid_firmament_pane

0x5e27,	// (0x00083351) aid_size_cell_gallery_ParamLimits

0x5e27,	// (0x00083351) aid_size_cell_gallery

0x5e35,	// (0x0008335f) grid_gallery_pane_ParamLimits

0x5e35,	// (0x0008335f) grid_gallery_pane

0x5e45,	// (0x0008336f) cell_gallery_pane_ParamLimits

0x5e45,	// (0x0008336f) cell_gallery_pane

0xcb89,	// (0x0008a0b3) bg_cell_gallery_focus_pane_ParamLimits

0xcb89,	// (0x0008a0b3) bg_cell_gallery_focus_pane

0xcb9b,	// (0x0008a0c5) cell_gallery_pane_g1_ParamLimits

0xcb9b,	// (0x0008a0c5) cell_gallery_pane_g1

0x5e8b,	// (0x000833b5) cell_gallery_pane_g2_ParamLimits

0x5e8b,	// (0x000833b5) cell_gallery_pane_g2

0x5e98,	// (0x000833c2) cell_gallery_pane_g3_ParamLimits

0x5e98,	// (0x000833c2) cell_gallery_pane_g3

0xcba7,	// (0x0008a0d1) cell_gallery_pane_g4_ParamLimits

0xcba7,	// (0x0008a0d1) cell_gallery_pane_g4

0x0003,

0xf6b9,	// (0x0008cbe3) cell_gallery_pane_g_ParamLimits

0xf6b9,	// (0x0008cbe3) cell_gallery_pane_g

0xcbb3,	// (0x0008a0dd) bg_cell_gallery_focus_pane_g1

0xcbbb,	// (0x0008a0e5) bg_cell_gallery_focus_pane_g2

0xcbc3,	// (0x0008a0ed) bg_cell_gallery_focus_pane_g3

0xcbcb,	// (0x0008a0f5) bg_cell_gallery_focus_pane_g4

0xcbd3,	// (0x0008a0fd) bg_cell_gallery_focus_pane_g5

0xcbdb,	// (0x0008a105) bg_cell_gallery_focus_pane_g6

0xcbe3,	// (0x0008a10d) bg_cell_gallery_focus_pane_g7

0xcbeb,	// (0x0008a115) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c2,	// (0x0008cbec) bg_cell_gallery_focus_pane_g

0xcbf3,	// (0x0008a11d) aid_firma_cardinal

0xcc07,	// (0x0008a131) blid_firmament_pane_t1

0xcc1e,	// (0x0008a148) blid_firmament_pane_t2

0xcc35,	// (0x0008a15f) blid_firmament_pane_t3

0xcc4c,	// (0x0008a176) blid_firmament_pane_t4

0x0003,

0xf6d3,	// (0x0008cbfd) blid_firmament_pane_t

0xcc63,	// (0x0008a18d) blid_sat_info_pane

0xcc73,	// (0x0008a19d) blid_sat_info_pane_g1

0xcc73,	// (0x0008a19d) blid_sat_info_pane_g2

0x0001,

0xf6dc,	// (0x0008cc06) blid_sat_info_pane_g

0xcc7d,	// (0x0008a1a7) blid_sat_info_pane_t1

0xcc8b,	// (0x0008a1b5) smil2_volume_content_pane

0xcc94,	// (0x0008a1be) smil2_volume_pane_g1

0xcc9c,	// (0x0008a1c6) smil2_volume_content_pane_g1

0xcca5,	// (0x0008a1cf) smil2_volume_content_pane_g2

0xccae,	// (0x0008a1d8) smil2_volume_content_pane_g3

0xccb7,	// (0x0008a1e1) smil2_volume_content_pane_g4

0xccc0,	// (0x0008a1ea) smil2_volume_content_pane_g5

0xccc9,	// (0x0008a1f3) smil2_volume_content_pane_g6

0xccd2,	// (0x0008a1fc) smil2_volume_content_pane_g7

0xccdb,	// (0x0008a205) smil2_volume_content_pane_g8

0xcce4,	// (0x0008a20e) smil2_volume_content_pane_g9

0xcced,	// (0x0008a217) smil2_volume_content_pane_g10

0x0009,

0xf6e1,	// (0x0008cc0b) smil2_volume_content_pane_g

0x2a07,	// (0x0007ff31) cale_week_day_heading_pane_t1_ParamLimits

0x2a4f,	// (0x0007ff79) cale_week_day_heading_pane_t2_ParamLimits

0x2a9c,	// (0x0007ffc6) cale_week_day_heading_pane_t3_ParamLimits

0x2ae9,	// (0x00080013) cale_week_day_heading_pane_t4_ParamLimits

0x2b36,	// (0x00080060) cale_week_day_heading_pane_t5_ParamLimits

0x2b83,	// (0x000800ad) cale_week_day_heading_pane_t6_ParamLimits

0x2bd0,	// (0x000800fa) cale_week_day_heading_pane_t7_ParamLimits

0xf1cd,	// (0x0008c6f7) cale_week_day_heading_pane_t_ParamLimits

0xaa74,	// (0x00087f9e) bg_cale_side_pane_ParamLimits

0x2c18,	// (0x00080142) cale_week_time_pane_t1_ParamLimits

0x2c5c,	// (0x00080186) cale_week_time_pane_t2_ParamLimits

0x2ca0,	// (0x000801ca) cale_week_time_pane_t3_ParamLimits

0x2ce4,	// (0x0008020e) cale_week_time_pane_t4_ParamLimits

0x2d28,	// (0x00080252) cale_week_time_pane_t5_ParamLimits

0x2d6c,	// (0x00080296) cale_week_time_pane_t6_ParamLimits

0x2db0,	// (0x000802da) cale_week_time_pane_t7_ParamLimits

0x2dfc,	// (0x00080326) cale_week_time_pane_t8_ParamLimits

0xf1dc,	// (0x0008c706) cale_week_time_pane_t_ParamLimits

0x2e4a,	// (0x00080374) cell_cale_week_pane_g2_ParamLimits

0xaa74,	// (0x00087f9e) bg_cale_side_pane_cp01_ParamLimits

0x40b8,	// (0x000815e2) cale_month_week_pane_t1_ParamLimits

0x40d1,	// (0x000815fb) cale_month_week_pane_t2_ParamLimits

0x40ea,	// (0x00081614) cale_month_week_pane_t3_ParamLimits

0x4103,	// (0x0008162d) cale_month_week_pane_t4_ParamLimits

0x411c,	// (0x00081646) cale_month_week_pane_t5_ParamLimits

0x4137,	// (0x00081661) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x0008c7df) cale_month_week_pane_t_ParamLimits

0x427a,	// (0x000817a4) cell_cale_month_pane_g1_ParamLimits

0xa149,	// (0x00087673) main_cale_event_viewer_pane

0xa149,	// (0x00087673) listscroll_cale_event_viewer_pane

0xccf6,	// (0x0008a220) list_cale_ev_pane

0xccfe,	// (0x0008a228) scroll_pane_cp023

0x5ea5,	// (0x000833cf) field_cale_ev_pane_ParamLimits

0x5ea5,	// (0x000833cf) field_cale_ev_pane

0xcd0a,	// (0x0008a234) field_cale_ev_content_pane_ParamLimits

0xcd0a,	// (0x0008a234) field_cale_ev_content_pane

0xcd16,	// (0x0008a240) field_cale_ev_pane_g1_ParamLimits

0xcd16,	// (0x0008a240) field_cale_ev_pane_g1

0xcd22,	// (0x0008a24c) field_cale_ev_pane_g2_ParamLimits

0xcd22,	// (0x0008a24c) field_cale_ev_pane_g2

0xcd3a,	// (0x0008a264) field_cale_ev_pane_g3_ParamLimits

0xcd3a,	// (0x0008a264) field_cale_ev_pane_g3

0x0002,

0xf6f6,	// (0x0008cc20) field_cale_ev_pane_g_ParamLimits

0xf6f6,	// (0x0008cc20) field_cale_ev_pane_g

0xcd52,	// (0x0008a27c) field_cale_ev_pane_t1_ParamLimits

0xcd52,	// (0x0008a27c) field_cale_ev_pane_t1

0x5ec9,	// (0x000833f3) field_cale_ev_content_pane_t1_ParamLimits

0x5ec9,	// (0x000833f3) field_cale_ev_content_pane_t1

0xb576,	// (0x00088aa0) bg_button_pane_cp01

0x2689,	// (0x0007fbb3) listscroll_cale_week_pane_ParamLimits

0x269b,	// (0x0007fbc5) popup_toolbar_window_cp01

0xaa40,	// (0x00087f6a) listscroll_cale_week_pane_t1_ParamLimits

0x2689,	// (0x0007fbb3) listscroll_cale_day_pane_ParamLimits

0x269b,	// (0x0007fbc5) popup_toolbar_window_cp02

0xae4c,	// (0x00088376) listscroll_cale_day_pane_t1_ParamLimits

0x2689,	// (0x0007fbb3) main_cale_month_pane_ParamLimits

0x55e9,	// (0x00082b13) popup_toolbar_window_cp03_ParamLimits

0x55e9,	// (0x00082b13) popup_toolbar_window_cp03

0x4f45,	// (0x0008246f) main_image_pane_g2_ParamLimits

0x4f45,	// (0x0008246f) main_image_pane_g2

0x4f51,	// (0x0008247b) main_image_pane_g3_ParamLimits

0x4f51,	// (0x0008247b) main_image_pane_g3

0x0002,

0xf4e7,	// (0x0008ca11) main_image_pane_g_ParamLimits

0xf4e7,	// (0x0008ca11) main_image_pane_g

0xb690,	// (0x00088bba) main_image_pane_t1_ParamLimits

0x4f5d,	// (0x00082487) main_image_pane_t2_ParamLimits

0x4f5d,	// (0x00082487) main_image_pane_t2

0x4f6f,	// (0x00082499) main_image_pane_t3_ParamLimits

0x4f6f,	// (0x00082499) main_image_pane_t3

0x4f81,	// (0x000824ab) main_image_pane_t4_ParamLimits

0x4f81,	// (0x000824ab) main_image_pane_t4

0x0003,

0xf4ee,	// (0x0008ca18) main_image_pane_t_ParamLimits

0xf4ee,	// (0x0008ca18) main_image_pane_t

0x4f93,	// (0x000824bd) popup_image_details_window_cp01

0x4f9d,	// (0x000824c7) popup_toobar_trans_pane_cp01_ParamLimits

0x4f9d,	// (0x000824c7) popup_toobar_trans_pane_cp01

0x555a,	// (0x00082a84) popup_image_details_window_ParamLimits

0x555a,	// (0x00082a84) popup_image_details_window

0xc844,	// (0x00089d6e) popup_image_focus_window

0x5886,	// (0x00082db0) camera2_autofocus_pane_ParamLimits

0x5886,	// (0x00082db0) camera2_autofocus_pane

0xa149,	// (0x00087673) bg_popup_sub_pane_cp06

0xcd69,	// (0x0008a293) popup_image_focus_window_g1

0xcd71,	// (0x0008a29b) popup_image_focus_window_g2

0xcd79,	// (0x0008a2a3) popup_image_focus_window_g3

0xcd81,	// (0x0008a2ab) popup_image_focus_window_g4

0x0003,

0xf6fd,	// (0x0008cc27) popup_image_focus_window_g

0xcd89,	// (0x0008a2b3) popup_image_focus_window_t1

0xcd97,	// (0x0008a2c1) popup_image_focus_window_t2

0xcda7,	// (0x0008a2d1) popup_image_focus_window_t3

0x0002,

0xf706,	// (0x0008cc30) popup_image_focus_window_t

0xcdb5,	// (0x0008a2df) camera2_autofocus_pane_g1

0xa8cd,	// (0x00087df7) bg_tb_trans_pane_cp01

0xcdc3,	// (0x0008a2ed) popup_image_details_window_g1

0xcdd6,	// (0x0008a300) popup_image_details_window_g2

0x0002,

0xf718,	// (0x0008cc42) popup_image_details_window_g

0xcdff,	// (0x0008a329) popup_image_details_window_t1

0xce11,	// (0x0008a33b) popup_image_details_window_t2

0xce2a,	// (0x0008a354) popup_image_details_window_t3

0xce3e,	// (0x0008a368) popup_image_details_window_t4

0xce59,	// (0x0008a383) popup_image_details_window_t5

0x0004,

0xf71f,	// (0x0008cc49) popup_image_details_window_t

0xa8b9,	// (0x00087de3) bg_calc_paper_pane_ParamLimits

0xa149,	// (0x00087673) grid_highlight_pane_cp013

0x2439,	// (0x0007f963) list_calc_pane_ParamLimits

0x244b,	// (0x0007f975) scroll_pane_cp024

0xa8fb,	// (0x00087e25) bg_calc_display_pane_ParamLimits

0x2453,	// (0x0007f97d) calc_display_pane_t1_ParamLimits

0x2468,	// (0x0007f992) calc_display_pane_t2_ParamLimits

0x247d,	// (0x0007f9a7) calc_display_pane_t3_ParamLimits

0xf14d,	// (0x0008c677) calc_display_pane_t_ParamLimits

0x2551,	// (0x0007fa7b) cell_calc_pane_g2

0x0001,

0xf16a,	// (0x0008c694) cell_calc_pane_g

0x255a,	// (0x0007fa84) cell_calc_pane_t1

0xa95a,	// (0x00087e84) grid_highlight_pane_cp02_ParamLimits

0xa970,	// (0x00087e9a) toolbar_button_pane_cp01_ParamLimits

0xa970,	// (0x00087e9a) toolbar_button_pane_cp01

0xb6d5,	// (0x00088bff) temp_image_control_pane_ParamLimits

0xb6d5,	// (0x00088bff) temp_image_control_pane

0xa8cd,	// (0x00087df7) main_mp3_pane

0xce73,	// (0x0008a39d) temp_image_control_pane_g1_ParamLimits

0xce73,	// (0x0008a39d) temp_image_control_pane_g1

0xce81,	// (0x0008a3ab) temp_image_control_pane_g2_ParamLimits

0xce81,	// (0x0008a3ab) temp_image_control_pane_g2

0xce93,	// (0x0008a3bd) temp_image_control_pane_g3_ParamLimits

0xce93,	// (0x0008a3bd) temp_image_control_pane_g3

0x5f14,	// (0x0008343e) temp_image_control_pane_g4_ParamLimits

0x5f14,	// (0x0008343e) temp_image_control_pane_g4

0x0003,

0xf72a,	// (0x0008cc54) temp_image_control_pane_g_ParamLimits

0xf72a,	// (0x0008cc54) temp_image_control_pane_g

0xce73,	// (0x0008a39d) main_mp3_pane_g1

0x5f25,	// (0x0008344f) main_mp3_pane_g2

0x0007,

0xf733,	// (0x0008cc5d) main_mp3_pane_g

0xced6,	// (0x0008a400) main_mp3_pane_t1

0xaacf,	// (0x00087ff9) main_camera_pane_g8_ParamLimits

0xaacf,	// (0x00087ff9) main_camera_pane_g8

0x310b,	// (0x00080635) main_video_pane_g7_ParamLimits

0x310b,	// (0x00080635) main_video_pane_g7

0x59c9,	// (0x00082ef3) main_camera2_pane_t7_ParamLimits

0x59c9,	// (0x00082ef3) main_camera2_pane_t7

0xac1b,	// (0x00088145) scroll_pane_cp025_ParamLimits

0xac1b,	// (0x00088145) scroll_pane_cp025

0xac2f,	// (0x00088159) scroll_pane_cp026_ParamLimits

0xac2f,	// (0x00088159) scroll_pane_cp026

0xac3e,	// (0x00088168) wml_content_pane_ParamLimits

0xa149,	// (0x00087673) main_touch_calib_pane

0x5fc9,	// (0x000834f3) main_touch_calib_pane_g1

0x5fd5,	// (0x000834ff) main_touch_calib_pane_g2

0x5fe1,	// (0x0008350b) main_touch_calib_pane_g3

0x5fed,	// (0x00083517) main_touch_calib_pane_g4

0x0003,

0xf751,	// (0x0008cc7b) main_touch_calib_pane_g

0x5ff9,	// (0x00083523) main_touch_calib_pane_t1

0x6010,	// (0x0008353a) main_touch_calib_pane_t2

0x0004,

0xf75a,	// (0x0008cc84) main_touch_calib_pane_t

0xb33e,	// (0x00088868) mup_progress_pane_cp02

0xb35d,	// (0x00088887) navi_pane_g1

0xb3bf,	// (0x000888e9) navi_pane_mp_t3

0xa8cd,	// (0x00087df7) main_mp3_pane_ParamLimits

0x562b,	// (0x00082b55) navi_pane_ParamLimits

0xce73,	// (0x0008a39d) main_mp3_pane_g1_ParamLimits

0x5f25,	// (0x0008344f) main_mp3_pane_g2_ParamLimits

0x5f31,	// (0x0008345b) main_mp3_pane_g3_ParamLimits

0x5f31,	// (0x0008345b) main_mp3_pane_g3

0x5f3d,	// (0x00083467) main_mp3_pane_g4_ParamLimits

0x5f3d,	// (0x00083467) main_mp3_pane_g4

0xcea3,	// (0x0008a3cd) main_mp3_pane_g5_ParamLimits

0xcea3,	// (0x0008a3cd) main_mp3_pane_g5

0xceb1,	// (0x0008a3db) main_mp3_pane_g6_ParamLimits

0xceb1,	// (0x0008a3db) main_mp3_pane_g6

0xcebe,	// (0x0008a3e8) main_mp3_pane_g7_ParamLimits

0xcebe,	// (0x0008a3e8) main_mp3_pane_g7

0xceca,	// (0x0008a3f4) main_mp3_pane_g8_ParamLimits

0xceca,	// (0x0008a3f4) main_mp3_pane_g8

0xf733,	// (0x0008cc5d) main_mp3_pane_g_ParamLimits

0x5f49,	// (0x00083473) main_mp3_pane_t2

0x5f59,	// (0x00083483) main_mp3_pane_t3

0xcee4,	// (0x0008a40e) main_mp3_pane_t4

0xcef2,	// (0x0008a41c) main_mp3_pane_t5

0x0005,

0xf744,	// (0x0008cc6e) main_mp3_pane_t

0xcf00,	// (0x0008a42a) mup_progress_pane_cp01

0x0b60,	// (0x0007e08a) aid_zoom_text_secondary2

0xccf6,	// (0x0008a220) list_cale_ev2_pane

0xccfe,	// (0x0008a228) scroll_pane_cp023_ParamLimits

0xe7b8,	// (0x0008bce2) field_cale_ev2_pane_ParamLimits

0xe7b8,	// (0x0008bce2) field_cale_ev2_pane

0x606b,	// (0x00083595) field_cale_ev2_pane_g1_ParamLimits

0x606b,	// (0x00083595) field_cale_ev2_pane_g1

0x6077,	// (0x000835a1) field_cale_ev2_pane_g2_ParamLimits

0x6077,	// (0x000835a1) field_cale_ev2_pane_g2

0x608f,	// (0x000835b9) field_cale_ev2_pane_g3_ParamLimits

0x608f,	// (0x000835b9) field_cale_ev2_pane_g3

0x0003,

0xf765,	// (0x0008cc8f) field_cale_ev2_pane_g_ParamLimits

0xf765,	// (0x0008cc8f) field_cale_ev2_pane_g

0x0e3e,	// (0x0007e368) field_cale_ev2_pane_t1_ParamLimits

0x0e3e,	// (0x0007e368) field_cale_ev2_pane_t1

0x0e55,	// (0x0007e37f) field_cale_ev2_pane_t2_ParamLimits

0x0e55,	// (0x0007e37f) field_cale_ev2_pane_t2

0x0001,

0xf76e,	// (0x0008cc98) field_cale_ev2_pane_t_ParamLimits

0xf76e,	// (0x0008cc98) field_cale_ev2_pane_t

0x4e24,	// (0x0008234e) main_postcard_pane_g5_ParamLimits

0x4e24,	// (0x0008234e) main_postcard_pane_g5

0x4e32,	// (0x0008235c) main_postcard_pane_g6_ParamLimits

0x4e32,	// (0x0008235c) main_postcard_pane_g6

0x2f49,	// (0x00080473) camera2_autofocus_pane_cp_ParamLimits

0x2f49,	// (0x00080473) camera2_autofocus_pane_cp

0xa8cd,	// (0x00087df7) main_mup3_pane

0x60d3,	// (0x000835fd) main_mup3_pane_g1_ParamLimits

0x60d3,	// (0x000835fd) main_mup3_pane_g1

0x60f4,	// (0x0008361e) main_mup3_pane_g2_ParamLimits

0x60f4,	// (0x0008361e) main_mup3_pane_g2

0x6170,	// (0x0008369a) main_mup3_pane_g3_ParamLimits

0x6170,	// (0x0008369a) main_mup3_pane_g3

0x61b5,	// (0x000836df) main_mup3_pane_g4_ParamLimits

0x61b5,	// (0x000836df) main_mup3_pane_g4

0x61f8,	// (0x00083722) main_mup3_pane_g5_ParamLimits

0x61f8,	// (0x00083722) main_mup3_pane_g5

0x623d,	// (0x00083767) main_mup3_pane_g6_ParamLimits

0x623d,	// (0x00083767) main_mup3_pane_g6

0xcf08,	// (0x0008a432) main_mup3_pane_g7_ParamLimits

0xcf08,	// (0x0008a432) main_mup3_pane_g7

0x0007,

0xf77e,	// (0x0008cca8) main_mup3_pane_g_ParamLimits

0xf77e,	// (0x0008cca8) main_mup3_pane_g

0x62b3,	// (0x000837dd) main_mup3_pane_t1_ParamLimits

0x62b3,	// (0x000837dd) main_mup3_pane_t1

0x631c,	// (0x00083846) main_mup3_pane_t2_ParamLimits

0x631c,	// (0x00083846) main_mup3_pane_t2

0x63e5,	// (0x0008390f) main_mup3_pane_t4_ParamLimits

0x63e5,	// (0x0008390f) main_mup3_pane_t4

0x6439,	// (0x00083963) main_mup3_pane_t5_ParamLimits

0x6439,	// (0x00083963) main_mup3_pane_t5

0x64e7,	// (0x00083a11) main_mup3_pane_t6_ParamLimits

0x64e7,	// (0x00083a11) main_mup3_pane_t6

0x0005,

0xf78f,	// (0x0008ccb9) main_mup3_pane_t_ParamLimits

0xf78f,	// (0x0008ccb9) main_mup3_pane_t

0x6593,	// (0x00083abd) mup3_progress_pane_ParamLimits

0x6593,	// (0x00083abd) mup3_progress_pane

0x660d,	// (0x00083b37) popup_mup3_control_window_ParamLimits

0x660d,	// (0x00083b37) popup_mup3_control_window

0xcf16,	// (0x0008a440) popup_mup3_text_window

0x662a,	// (0x00083b54) mup3_progress_pane_t1

0x6649,	// (0x00083b73) mup3_progress_pane_t2

0xcf1e,	// (0x0008a448) mup3_progress_pane_t3

0x0002,

0xf79c,	// (0x0008ccc6) mup3_progress_pane_t

0xcf3b,	// (0x0008a465) mup_progress_pane_cp03

0xa149,	// (0x00087673) bg_tb_trans_pane_cp04

0x6668,	// (0x00083b92) mup3_volume_pane

0x6670,	// (0x00083b9a) popup_mup3_control_window_g1

0xda14,	// (0x0008af3e) mup3_volume_pane_g1

0xda1d,	// (0x0008af47) mup3_volume_pane_g2

0xda26,	// (0x0008af50) mup3_volume_pane_g3

0x0002,

0xf7a3,	// (0x0008cccd) mup3_volume_pane_g

0xa149,	// (0x00087673) bg_tb_trans_pane_cp03

0xcf4b,	// (0x0008a475) popup_mup3_text_window_g1

0xcf53,	// (0x0008a47d) popup_mup3_text_window_t1

0xa943,	// (0x00087e6d) list_calc_item_pane_g1_ParamLimits

0xc9c0,	// (0x00089eea) mup_volume_pane_cp_g1

0x6029,	// (0x00083553) main_touch_calib_pane_t3

0x603f,	// (0x00083569) main_touch_calib_pane_t4

0x6055,	// (0x0008357f) main_touch_calib_pane_t5

0xa153,	// (0x0008767d) aid_cell_size_toolbar2

0xa15b,	// (0x00087685) aid_popup3_width_pane

0x0b50,	// (0x0007e07a) aid_zoom_text_msg_primary

0x2f14,	// (0x0008043e) vorec_t7

0xa907,	// (0x00087e31) bg_calc_paper_pane_g1_ParamLimits

0xa913,	// (0x00087e3d) bg_calc_paper_pane_g2_ParamLimits

0xa91f,	// (0x00087e49) bg_calc_paper_pane_g3_ParamLimits

0xa92b,	// (0x00087e55) bg_calc_paper_pane_g4_ParamLimits

0xa937,	// (0x00087e61) bg_calc_paper_pane_g5_ParamLimits

0x24be,	// (0x0007f9e8) bg_calc_paper_pane_g6_ParamLimits

0x24cf,	// (0x0007f9f9) bg_calc_paper_pane_g7_ParamLimits

0x24e0,	// (0x0007fa0a) bg_calc_paper_pane_g8_ParamLimits

0xf154,	// (0x0008c67e) bg_calc_paper_pane_g_ParamLimits

0x24f3,	// (0x0007fa1d) calc_bg_paper_pane_g9_ParamLimits

0x303a,	// (0x00080564) image_qvga_pane_ParamLimits

0x303a,	// (0x00080564) image_qvga_pane

0xa808,	// (0x00087d32) bg_popup_sub_pane_cp04_ParamLimits

0xb60c,	// (0x00088b36) popup_mup_playback_window_g1_ParamLimits

0xb618,	// (0x00088b42) popup_mup_playback_window_t1_ParamLimits

0xb62d,	// (0x00088b57) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x0008ca0c) popup_mup_playback_window_t_ParamLimits

0x5af8,	// (0x00083022) main_mup2_pane_g3_ParamLimits

0x5af8,	// (0x00083022) main_mup2_pane_g3

0x32fe,	// (0x00080828) popup_toolbar_window_cp04

0xba28,	// (0x00088f52) popup_call2_audio_second_window_g3_ParamLimits

0xba28,	// (0x00088f52) popup_call2_audio_second_window_g3

0xbe32,	// (0x0008935c) popup_call2_audio_first_window_g4_ParamLimits

0xbe32,	// (0x0008935c) popup_call2_audio_first_window_g4

0xc4b1,	// (0x000899db) popup_call2_audio_in_window_g4_ParamLimits

0xc4b1,	// (0x000899db) popup_call2_audio_in_window_g4

0x4f38,	// (0x00082462) aid_area_sk_bg_cut_ParamLimits

0x4f38,	// (0x00082462) aid_area_sk_bg_cut

0xb642,	// (0x00088b6c) aid_area_sk_bg_cut_2_ParamLimits

0xb642,	// (0x00088b6c) aid_area_sk_bg_cut_2

0x5e7b,	// (0x000833a5) aid_placing_details_win

0x5e83,	// (0x000833ad) aid_placing_details_win_2

0xcdb5,	// (0x0008a2df) camera2_autofocus_pane_g1_ParamLimits

0x207d,	// (0x0007f5a7) popup_fixed_preview_cale_window_ParamLimits

0x207d,	// (0x0007f5a7) popup_fixed_preview_cale_window

0xb41c,	// (0x00088946) navi_slider_pane_g3

0xb425,	// (0x0008894f) navi_slider_pane_g4

0xb42e,	// (0x00088958) navi_slider_pane_g5

0xb41c,	// (0x00088946) navi_slider_pane_g6

0x4833,	// (0x00081d5d) navi_slider_pane_g7

0xb543,	// (0x00088a6d) mup_scale_pane_g3

0xb54c,	// (0x00088a76) mup_scale_pane_g4

0xb555,	// (0x00088a7f) mup_scale_pane_g5

0x4cb6,	// (0x000821e0) mup_scale_pane_g6

0x4cbf,	// (0x000821e9) mup_scale_pane_g7

0xb41c,	// (0x00088946) cams2_slider_pane_g3

0xca42,	// (0x00089f6c) cams2_slider_pane_g4

0x5ddb,	// (0x00083305) cams2_slider_pane_g5

0xb41c,	// (0x00088946) cams2_slider_pane_g6

0x5de3,	// (0x0008330d) cams2_slider_pane_g7

0xcc73,	// (0x0008a19d) camera2_autofocus_pane_cp_g1

0xc816,	// (0x00089d40) bg_popup_preview_window_pane_cp02_ParamLimits

0xc816,	// (0x00089d40) bg_popup_preview_window_pane_cp02

0xcf61,	// (0x0008a48b) list_fp_cale_pane_ParamLimits

0xcf61,	// (0x0008a48b) list_fp_cale_pane

0xcf6d,	// (0x0008a497) popup_fixed_preview_cale_window_t1_ParamLimits

0xcf6d,	// (0x0008a497) popup_fixed_preview_cale_window_t1

0x6679,	// (0x00083ba3) popup_fixed_preview_cale_window_t2_ParamLimits

0x6679,	// (0x00083ba3) popup_fixed_preview_cale_window_t2

0x668e,	// (0x00083bb8) popup_fixed_preview_cale_window_t3_ParamLimits

0x668e,	// (0x00083bb8) popup_fixed_preview_cale_window_t3

0x0002,

0xf7aa,	// (0x0008ccd4) popup_fixed_preview_cale_window_t_ParamLimits

0xf7aa,	// (0x0008ccd4) popup_fixed_preview_cale_window_t

0x66a3,	// (0x00083bcd) list_single_fp_cale_pane_ParamLimits

0x66a3,	// (0x00083bcd) list_single_fp_cale_pane

0xcf8b,	// (0x0008a4b5) list_single_fp_cale_pane_g1_ParamLimits

0xcf8b,	// (0x0008a4b5) list_single_fp_cale_pane_g1

0xcf97,	// (0x0008a4c1) list_single_fp_cale_pane_g2_ParamLimits

0xcf97,	// (0x0008a4c1) list_single_fp_cale_pane_g2

0x0002,

0x039a,	// (0x0007d8c4) list_single_fp_cale_pane_g_ParamLimits

0x039a,	// (0x0007d8c4) list_single_fp_cale_pane_g

0xcfb0,	// (0x0008a4da) list_single_fp_cale_pane_t1_ParamLimits

0xcfb0,	// (0x0008a4da) list_single_fp_cale_pane_t1

0xcfc2,	// (0x0008a4ec) list_single_fp_cale_pane_t2_ParamLimits

0xcfc2,	// (0x0008a4ec) list_single_fp_cale_pane_t2

0x0001,

0x03a1,	// (0x0007d8cb) list_single_fp_cale_pane_t_ParamLimits

0x03a1,	// (0x0007d8cb) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xa149,	// (0x00087673) main_dialer_pane

0x66b3,	// (0x00083bdd) aid_cell_size_keypad

0x66bd,	// (0x00083be7) dialer_ne_pane

0x66c7,	// (0x00083bf1) grid_dialer_command_1_pane

0x66cf,	// (0x00083bf9) grid_dialer_command_2_pane

0x66d7,	// (0x00083c01) grid_dialer_keypad_pane

0x66eb,	// (0x00083c15) bg_popup_call_pane_cp06_ParamLimits

0x66eb,	// (0x00083c15) bg_popup_call_pane_cp06

0x66f7,	// (0x00083c21) dialer_ne_clear_pane_ParamLimits

0x66f7,	// (0x00083c21) dialer_ne_clear_pane

0xcffd,	// (0x0008a527) dialer_ne_pane_g1

0xd005,	// (0x0008a52f) dialer_ne_pane_t1_ParamLimits

0xd005,	// (0x0008a52f) dialer_ne_pane_t1

0x6703,	// (0x00083c2d) dialer_ne_pane_t2_ParamLimits

0x6703,	// (0x00083c2d) dialer_ne_pane_t2

0x6720,	// (0x00083c4a) dialer_ne_pane_t3_ParamLimits

0x6720,	// (0x00083c4a) dialer_ne_pane_t3

0x0002,

0xf7b1,	// (0x0008ccdb) dialer_ne_pane_t_ParamLimits

0xf7b1,	// (0x0008ccdb) dialer_ne_pane_t

0x6744,	// (0x00083c6e) dialer_ne_pane_t3_copy1_ParamLimits

0x6744,	// (0x00083c6e) dialer_ne_pane_t3_copy1

0x6768,	// (0x00083c92) cell_dialer_keypad_pane_ParamLimits

0x6768,	// (0x00083c92) cell_dialer_keypad_pane

0x677f,	// (0x00083ca9) cell_dialer_command_1_pane_ParamLimits

0x677f,	// (0x00083ca9) cell_dialer_command_1_pane

0x6795,	// (0x00083cbf) cell_dialer_command_2_pane_ParamLimits

0x6795,	// (0x00083cbf) cell_dialer_command_2_pane

0xd017,	// (0x0008a541) bg_button_pane_cp02_ParamLimits

0xd017,	// (0x0008a541) bg_button_pane_cp02

0x67a4,	// (0x00083cce) cell_dialer_keypad_pane_g1_ParamLimits

0x67a4,	// (0x00083cce) cell_dialer_keypad_pane_g1

0xd017,	// (0x0008a541) bg_button_pane_cp03_ParamLimits

0xd017,	// (0x0008a541) bg_button_pane_cp03

0x67b9,	// (0x00083ce3) cell_dialer_command_1_pane_g1_ParamLimits

0x67b9,	// (0x00083ce3) cell_dialer_command_1_pane_g1

0xd023,	// (0x0008a54d) bg_button_pane_cp04

0x67cd,	// (0x00083cf7) cell_dialer_command_2_pane_g1

0xb40b,	// (0x00088935) bg_button_pane_cp06

0xd02b,	// (0x0008a555) dialer_ne_clear_pane_g1

0x476e,	// (0x00081c98) navi_pane_g2

0x479c,	// (0x00081cc6) navi_pane_g3

0x0002,

0xf3e5,	// (0x0008c90f) navi_pane_g

0x47c7,	// (0x00081cf1) navi_pane_mv_g2

0x47ee,	// (0x00081d18) navi_pane_mv_g5

0x47f6,	// (0x00081d20) navi_pane_mv_t1

0xa8fb,	// (0x00087e25) main_clock2_pane

0x680b,	// (0x00083d35) main_clock2_list_pane_ParamLimits

0x680b,	// (0x00083d35) main_clock2_list_pane

0x6835,	// (0x00083d5f) main_clock2_pane_t1_ParamLimits

0x6835,	// (0x00083d5f) main_clock2_pane_t1

0x6857,	// (0x00083d81) main_clock2_pane_t2_ParamLimits

0x6857,	// (0x00083d81) main_clock2_pane_t2

0x0004,

0xf7bd,	// (0x0008cce7) main_clock2_pane_t_ParamLimits

0xf7bd,	// (0x0008cce7) main_clock2_pane_t

0x68b4,	// (0x00083dde) popup_clock_analogue_window_cp03_ParamLimits

0x68b4,	// (0x00083dde) popup_clock_analogue_window_cp03

0x68d4,	// (0x00083dfe) popup_clock_digital_window_cp02_ParamLimits

0x68d4,	// (0x00083dfe) popup_clock_digital_window_cp02

0x6945,	// (0x00083e6f) main_clock2_list_single_pane_ParamLimits

0x6945,	// (0x00083e6f) main_clock2_list_single_pane

0xb40b,	// (0x00088935) list_highlight_pane_cp05

0xd067,	// (0x0008a591) main_clock2_list_single_pane_t1

0x32fe,	// (0x00080828) popup_toolbar_window_cp04_ParamLimits

0x5ee4,	// (0x0008340e) camera2_autofocus_pane_g2_ParamLimits

0x5ee4,	// (0x0008340e) camera2_autofocus_pane_g2

0x5ef0,	// (0x0008341a) camera2_autofocus_pane_g3_ParamLimits

0x5ef0,	// (0x0008341a) camera2_autofocus_pane_g3

0x5efc,	// (0x00083426) camera2_autofocus_pane_g4_ParamLimits

0x5efc,	// (0x00083426) camera2_autofocus_pane_g4

0x5f08,	// (0x00083432) camera2_autofocus_pane_g5_ParamLimits

0x5f08,	// (0x00083432) camera2_autofocus_pane_g5

0x0004,

0xf70d,	// (0x0008cc37) camera2_autofocus_pane_g_ParamLimits

0xf70d,	// (0x0008cc37) camera2_autofocus_pane_g

0x60b3,	// (0x000835dd) camera2_autofocus_pane_cp_g2

0x60bb,	// (0x000835e5) camera2_autofocus_pane_cp_g3

0x60c3,	// (0x000835ed) camera2_autofocus_pane_cp_g4

0x60cb,	// (0x000835f5) camera2_autofocus_pane_cp_g5

0x0004,

0xf773,	// (0x0008cc9d) camera2_autofocus_pane_cp_g

0x66e3,	// (0x00083c0d) popup_dialer_spcha_window

0xa149,	// (0x00087673) bg_popup_sub_pane_cp07

0xd075,	// (0x0008a59f) list_spcha_pane

0xd07d,	// (0x0008a5a7) list_single_spcha_pane_ParamLimits

0xd07d,	// (0x0008a5a7) list_single_spcha_pane

0xa149,	// (0x00087673) list_highlight_pane_cp06

0xd08e,	// (0x0008a5b8) list_single_spcha_pane_t1

0xc25b,	// (0x00089785) popup_call2_audio_out_window_g4_ParamLimits

0xc25b,	// (0x00089785) popup_call2_audio_out_window_g4

0xa149,	// (0x00087673) main_imed2_pane

0xc84e,	// (0x00089d78) popup_imed_adjust2_window

0x5568,	// (0x00082a92) popup_imed_trans_window_ParamLimits

0x5568,	// (0x00082a92) popup_imed_trans_window

0xcaab,	// (0x00089fd5) popup_blid_sat_info2_window_t1

0xcab9,	// (0x00089fe3) popup_blid_sat_info2_window_t2

0x000a,

0xf6a2,	// (0x0008cbcc) popup_blid_sat_info2_window_t

0x69ef,	// (0x00083f19) aid_size_cell_colour_35

0x6a09,	// (0x00083f33) aid_size_cell_colour_112

0x6a20,	// (0x00083f4a) aid_size_cell_effect

0xa8cd,	// (0x00087df7) bg_tb_trans_pane_cp02

0xb03a,	// (0x00088564) heading_imed_pane

0x6a3a,	// (0x00083f64) listscroll_imed_pane

0xd09c,	// (0x0008a5c6) heading_imed_pane_g1

0xd0a4,	// (0x0008a5ce) heading_imed_pane_t1

0xd0b2,	// (0x0008a5dc) grid_imed_colour_35_pane_ParamLimits

0xd0b2,	// (0x0008a5dc) grid_imed_colour_35_pane

0x6a46,	// (0x00083f70) grid_imed_effect_pane

0xd0ce,	// (0x0008a5f8) list_imed_aspect_pane

0x6a56,	// (0x00083f80) scroll_pane_cp027_ParamLimits

0x6a56,	// (0x00083f80) scroll_pane_cp027

0x6a62,	// (0x00083f8c) cell_imed_effect_pane_ParamLimits

0x6a62,	// (0x00083f8c) cell_imed_effect_pane

0xd0d6,	// (0x0008a600) cell_imed_colour_pane_ParamLimits

0xd0d6,	// (0x0008a600) cell_imed_colour_pane

0xd120,	// (0x0008a64a) cell_imed_colour_pane_g1_ParamLimits

0xd120,	// (0x0008a64a) cell_imed_colour_pane_g1

0xd131,	// (0x0008a65b) hgihlgiht_grid_pane_cp016_ParamLimits

0xd131,	// (0x0008a65b) hgihlgiht_grid_pane_cp016

0x6a7e,	// (0x00083fa8) cell_imed_effect_pane_g1

0x6a86,	// (0x00083fb0) grid_highlight_pane_cp017

0xd142,	// (0x0008a66c) list_imed_single_pane_ParamLimits

0xd142,	// (0x0008a66c) list_imed_single_pane

0xa149,	// (0x00087673) list_highlight_pane_cp07

0xd156,	// (0x0008a680) list_imed_aspect_pane_comp1_t1

0xc822,	// (0x00089d4c) bg_tb_trans_pane_cp05

0xd178,	// (0x0008a6a2) popup_imed_adjust2_window_g1

0xd19f,	// (0x0008a6c9) popup_imed_adjust2_window_t1

0xd1b7,	// (0x0008a6e1) slider_imed_adjust_pane

0xd1cb,	// (0x0008a6f5) slider_imed_adjust_pane_g1

0xd1db,	// (0x0008a705) slider_imed_adjust_pane_g2

0xd1eb,	// (0x0008a715) slider_imed_adjust_pane_g3

0xd1fc,	// (0x0008a726) slider_imed_adjust_pane_g4

0x0003,

0xf7da,	// (0x0008cd04) slider_imed_adjust_pane_g

0x6a8f,	// (0x00083fb9) aid_size_cell_clipart2

0x6a9b,	// (0x00083fc5) grid_imed_clipart_pane

0xd20d,	// (0x0008a737) scroll_pane_cp031

0x6aa5,	// (0x00083fcf) cell_imed_clipart_pane_ParamLimits

0x6aa5,	// (0x00083fcf) cell_imed_clipart_pane

0x6ac3,	// (0x00083fed) cell_imed_clipart_pane_g1

0xa149,	// (0x00087673) grid_highlight_pane_cp014

0x6817,	// (0x00083d41) main_clock2_pane_g1_ParamLimits

0x6817,	// (0x00083d41) main_clock2_pane_g1

0x68f0,	// (0x00083e1a) aid_call2_pane_cp10

0x6902,	// (0x00083e2c) aid_call_pane_cp10

0xb332,	// (0x0008885c) popup_clock_analogue_window_cp10_g1

0xb332,	// (0x0008885c) popup_clock_analogue_window_cp10_g2

0x6914,	// (0x00083e3e) popup_clock_analogue_window_cp10_g3

0x6914,	// (0x00083e3e) popup_clock_analogue_window_cp10_g4

0xb332,	// (0x0008885c) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7c8,	// (0x0008ccf2) popup_clock_analogue_window_cp10_g

0x6926,	// (0x00083e50) popup_clock_analogue_window_cp10_t1

0x6957,	// (0x00083e81) clock_digital_number_pane_cp10_ParamLimits

0x6957,	// (0x00083e81) clock_digital_number_pane_cp10

0x696f,	// (0x00083e99) clock_digital_number_pane_cp11_ParamLimits

0x696f,	// (0x00083e99) clock_digital_number_pane_cp11

0x6987,	// (0x00083eb1) clock_digital_number_pane_cp12_ParamLimits

0x6987,	// (0x00083eb1) clock_digital_number_pane_cp12

0x699f,	// (0x00083ec9) clock_digital_number_pane_cp13_ParamLimits

0x699f,	// (0x00083ec9) clock_digital_number_pane_cp13

0x69b7,	// (0x00083ee1) clock_digital_separator_pane_cp10_ParamLimits

0x69b7,	// (0x00083ee1) clock_digital_separator_pane_cp10

0x69cf,	// (0x00083ef9) popup_clock_digital_window_cp02_t1_ParamLimits

0x69cf,	// (0x00083ef9) popup_clock_digital_window_cp02_t1

0xa800,	// (0x00087d2a) clock_digital_number_pane_cp10_g1

0xa800,	// (0x00087d2a) clock_digital_number_pane_cp10_g2

0x0001,

0xf7e3,	// (0x0008cd0d) clock_digital_number_pane_cp10_g

0xa800,	// (0x00087d2a) clock_digital_separator_pane_cp10_g1

0xa800,	// (0x00087d2a) clock_digital_separator_pane_g2_cp10

0xb3cd,	// (0x000888f7) navi_pane_vded_g4

0xb3d6,	// (0x00088900) navi_pane_vded_g5

0xb3df,	// (0x00088909) navi_pane_vded_t1

0xa149,	// (0x00087673) main_vded_pane

0x6acc,	// (0x00083ff6) main_vded_pane_g1

0x6ad8,	// (0x00084002) main_vded_pane_g2

0x6ae2,	// (0x0008400c) main_vded_pane_g3

0x0002,

0xf7e8,	// (0x0008cd12) main_vded_pane_g

0x6aec,	// (0x00084016) main_vded_pane_t1

0x6afa,	// (0x00084024) main_vded_pane_t2

0x0001,

0xf7ef,	// (0x0008cd19) main_vded_pane_t

0x6b08,	// (0x00084032) vded_slider_pane

0x6b12,	// (0x0008403c) vded_video_pane

0xd215,	// (0x0008a73f) vded_video_pane_g1

0x6b1e,	// (0x00084048) vded_video_pane_g2

0xcc73,	// (0x0008a19d) vded_video_pane_g3

0x0002,

0xf7f4,	// (0x0008cd1e) vded_video_pane_g

0xd21f,	// (0x0008a749) vded_slider_pane_g1

0xc9c0,	// (0x00089eea) vded_slider_pane_g2

0xd228,	// (0x0008a752) vded_slider_pane_g3

0xd231,	// (0x0008a75b) vded_slider_pane_g4

0xd23a,	// (0x0008a764) vded_slider_pane_g5

0x0004,

0xf7fb,	// (0x0008cd25) vded_slider_pane_g

0x6601,	// (0x00083b2b) mup3_rocker_pane_ParamLimits

0x6601,	// (0x00083b2b) mup3_rocker_pane

0x6b27,	// (0x00084051) mup3_control_keys_pane_g1

0x6b2f,	// (0x00084059) mup3_control_keys_pane_g2

0x6b37,	// (0x00084061) mup3_control_keys_pane_g3

0x6b3f,	// (0x00084069) mup3_control_keys_pane_g4

0x0003,

0xf806,	// (0x0008cd30) mup3_control_keys_pane_g

0x209b,	// (0x0007f5c5) popup_toolbar2_fixed_window_cp01_ParamLimits

0x209b,	// (0x0007f5c5) popup_toolbar2_fixed_window_cp01

0x661d,	// (0x00083b47) popup_toolbar2_fixed_window_cp02_ParamLimits

0x661d,	// (0x00083b47) popup_toolbar2_fixed_window_cp02

0xbb9a,	// (0x000890c4) popup_call2_audio_second_window_t4_ParamLimits

0xbb9a,	// (0x000890c4) popup_call2_audio_second_window_t4

0xc0c8,	// (0x000895f2) popup_call2_audio_first_window_t6_ParamLimits

0xc0c8,	// (0x000895f2) popup_call2_audio_first_window_t6

0xc35e,	// (0x00089888) popup_call2_audio_out_window_t6_ParamLimits

0xc35e,	// (0x00089888) popup_call2_audio_out_window_t6

0xa149,	// (0x00087673) main_vitu_pane

0x6b4f,	// (0x00084079) aid_size_cell_itu_ParamLimits

0x6b4f,	// (0x00084079) aid_size_cell_itu

0x20cd,	// (0x0007f5f7) bg_popup_window_pane_cp08_ParamLimits

0x20cd,	// (0x0007f5f7) bg_popup_window_pane_cp08

0x6b5d,	// (0x00084087) field_vitu_entry_pane_ParamLimits

0x6b5d,	// (0x00084087) field_vitu_entry_pane

0x6b6c,	// (0x00084096) grid_vitu_function_pane_ParamLimits

0x6b6c,	// (0x00084096) grid_vitu_function_pane

0x6b7c,	// (0x000840a6) grid_vitu_itu_pane_ParamLimits

0x6b7c,	// (0x000840a6) grid_vitu_itu_pane

0x6b8c,	// (0x000840b6) cell_vitu_itu_pane_ParamLimits

0x6b8c,	// (0x000840b6) cell_vitu_itu_pane

0x6ba3,	// (0x000840cd) cell_vitu_function_pane_ParamLimits

0x6ba3,	// (0x000840cd) cell_vitu_function_pane

0xa8cd,	// (0x00087df7) bg_popup_sub_pane_cp08_ParamLimits

0xa8cd,	// (0x00087df7) bg_popup_sub_pane_cp08

0x6bb7,	// (0x000840e1) field_vitu_entry_pane_t1_ParamLimits

0x6bb7,	// (0x000840e1) field_vitu_entry_pane_t1

0xd25b,	// (0x0008a785) field_vitu_entry_pane_t2_ParamLimits

0xd25b,	// (0x0008a785) field_vitu_entry_pane_t2

0x0001,

0xf814,	// (0x0008cd3e) field_vitu_entry_pane_t_ParamLimits

0xf814,	// (0x0008cd3e) field_vitu_entry_pane_t

0xd278,	// (0x0008a7a2) bg_button_pane_cp05_ParamLimits

0xd278,	// (0x0008a7a2) bg_button_pane_cp05

0x6bd1,	// (0x000840fb) cell_vitu_itu_pane_g1

0x6be9,	// (0x00084113) cell_vitu_itu_pane_t1_ParamLimits

0x6be9,	// (0x00084113) cell_vitu_itu_pane_t1

0x6bfb,	// (0x00084125) cell_vitu_itu_pane_t2_ParamLimits

0x6bfb,	// (0x00084125) cell_vitu_itu_pane_t2

0x0002,

0xf819,	// (0x0008cd43) cell_vitu_itu_pane_t_ParamLimits

0xf819,	// (0x0008cd43) cell_vitu_itu_pane_t

0xd286,	// (0x0008a7b0) bg_button_pane_cp07

0x6c3e,	// (0x00084168) cell_vitu_function_pane_g1

0x2360,	// (0x0007f88a) main_calc_pane_g1

0x1e9f,	// (0x0007f3c9) aid_visual_content_pane

0xa149,	// (0x00087673) main_vradio_pane

0x6c47,	// (0x00084171) main_vradio_pane_g1_ParamLimits

0x6c47,	// (0x00084171) main_vradio_pane_g1

0xd290,	// (0x0008a7ba) main_vradio_pane_g2_ParamLimits

0xd290,	// (0x0008a7ba) main_vradio_pane_g2

0x0001,

0xf820,	// (0x0008cd4a) main_vradio_pane_g_ParamLimits

0xf820,	// (0x0008cd4a) main_vradio_pane_g

0x6c55,	// (0x0008417f) main_vradio_pane_t1_ParamLimits

0x6c55,	// (0x0008417f) main_vradio_pane_t1

0x6c67,	// (0x00084191) main_vradio_pane_t2_ParamLimits

0x6c67,	// (0x00084191) main_vradio_pane_t2

0xd29d,	// (0x0008a7c7) main_vradio_pane_t3_ParamLimits

0xd29d,	// (0x0008a7c7) main_vradio_pane_t3

0x0002,

0xf825,	// (0x0008cd4f) main_vradio_pane_t_ParamLimits

0xf825,	// (0x0008cd4f) main_vradio_pane_t

0x6c79,	// (0x000841a3) vradio_rocker_control_pane_ParamLimits

0x6c79,	// (0x000841a3) vradio_rocker_control_pane

0x6c85,	// (0x000841af) vradio_station_info_pane_ParamLimits

0x6c85,	// (0x000841af) vradio_station_info_pane

0xd2b1,	// (0x0008a7db) vradio_frequency_info_pane_ParamLimits

0xd2b1,	// (0x0008a7db) vradio_frequency_info_pane

0xcc73,	// (0x0008a19d) vradio_station_info_pane_g1

0xd2c0,	// (0x0008a7ea) vradio_station_info_pane_t1_ParamLimits

0xd2c0,	// (0x0008a7ea) vradio_station_info_pane_t1

0xd2e2,	// (0x0008a80c) vradio_station_info_pane_t2_ParamLimits

0xd2e2,	// (0x0008a80c) vradio_station_info_pane_t2

0x0001,

0xf82c,	// (0x0008cd56) vradio_station_info_pane_t_ParamLimits

0xf82c,	// (0x0008cd56) vradio_station_info_pane_t

0xd2f4,	// (0x0008a81e) vradio_tuning_pane

0xd2fc,	// (0x0008a826) vradio_rocker_control_pane_g1

0xd304,	// (0x0008a82e) vradio_rocker_control_pane_g2

0xd30c,	// (0x0008a836) vradio_rocker_control_pane_g3

0xd314,	// (0x0008a83e) vradio_rocker_control_pane_g4

0xd31c,	// (0x0008a846) vradio_rocker_control_pane_g5

0x0004,

0xf831,	// (0x0008cd5b) vradio_rocker_control_pane_g

0x6c92,	// (0x000841bc) vradio_frequency_info_pane_g1

0xd324,	// (0x0008a84e) vradio_frequency_info_pane_t1_ParamLimits

0xd324,	// (0x0008a84e) vradio_frequency_info_pane_t1

0x6c9c,	// (0x000841c6) vradio_tuning_pane_g1

0x6ca7,	// (0x000841d1) vradio_tuning_pane_t1

0xa167,	// (0x00087691) area_side_right_pane_ParamLimits

0xa167,	// (0x00087691) area_side_right_pane

0xc7dd,	// (0x00089d07) status_small_pane_g1

0xc7e5,	// (0x00089d0f) status_small_pane_g2

0xc7ee,	// (0x00089d18) status_small_pane_g3

0xc7f7,	// (0x00089d21) status_small_pane_g4

0x0003,

0xf5f8,	// (0x0008cb22) status_small_pane_g

0xc800,	// (0x00089d2a) status_small_pane_t1

0xa149,	// (0x00087673) main_video3_pane

0xd338,	// (0x0008a862) cams_zoom_vslider_pane

0xd340,	// (0x0008a86a) image3_wide_pane_ParamLimits

0xd340,	// (0x0008a86a) image3_wide_pane

0xd35a,	// (0x0008a884) image3_wide_small_pane

0xd366,	// (0x0008a890) main_video3_pane_g1_ParamLimits

0xd366,	// (0x0008a890) main_video3_pane_g1

0xd382,	// (0x0008a8ac) main_video3_pane_g2_ParamLimits

0xd382,	// (0x0008a8ac) main_video3_pane_g2

0x0001,

0xf83c,	// (0x0008cd66) main_video3_pane_g_ParamLimits

0xf83c,	// (0x0008cd66) main_video3_pane_g

0xd39e,	// (0x0008a8c8) main_video3_pane_t1_ParamLimits

0xd39e,	// (0x0008a8c8) main_video3_pane_t1

0xd3c9,	// (0x0008a8f3) main_video3_pane_t2_ParamLimits

0xd3c9,	// (0x0008a8f3) main_video3_pane_t2

0xd3f6,	// (0x0008a920) main_video3_pane_t3_ParamLimits

0xd3f6,	// (0x0008a920) main_video3_pane_t3

0x0002,

0xf841,	// (0x0008cd6b) main_video3_pane_t_ParamLimits

0xf841,	// (0x0008cd6b) main_video3_pane_t

0xd423,	// (0x0008a94d) cams_zoom_vslider_pane_g1

0xd42c,	// (0x0008a956) cams_zoom_vslider_pane_g2

0x0001,

0xf848,	// (0x0008cd72) cams_zoom_vslider_pane_g

0xd434,	// (0x0008a95e) small_slider_vertical_pane

0xcc73,	// (0x0008a19d) small_slider_vertical_pane_g1

0xcc73,	// (0x0008a19d) small_slider_vertical_pane_g2

0xd43c,	// (0x0008a966) small_slider_vertical_pane_g3

0x0002,

0xf84d,	// (0x0008cd77) small_slider_vertical_pane_g

0xa149,	// (0x00087673) main_hwr_training_pane

0xd445,	// (0x0008a96f) hwr_training_instruct_pane_ParamLimits

0xd445,	// (0x0008a96f) hwr_training_instruct_pane

0x6cb6,	// (0x000841e0) hwr_training_navi_pane_ParamLimits

0x6cb6,	// (0x000841e0) hwr_training_navi_pane

0x6cd0,	// (0x000841fa) hwr_training_write_pane_ParamLimits

0x6cd0,	// (0x000841fa) hwr_training_write_pane

0xa149,	// (0x00087673) bg_frame_shadow_pane

0xd47c,	// (0x0008a9a6) hwr_training_write_pane_g1

0xd484,	// (0x0008a9ae) hwr_training_write_pane_g2

0xd48c,	// (0x0008a9b6) hwr_training_write_pane_g3

0xd494,	// (0x0008a9be) hwr_training_write_pane_g4

0xd49c,	// (0x0008a9c6) hwr_training_write_pane_g5

0xd4a4,	// (0x0008a9ce) hwr_training_write_pane_g6

0xd4ac,	// (0x0008a9d6) hwr_training_write_pane_g7

0x0006,

0xf854,	// (0x0008cd7e) hwr_training_write_pane_g

0x6d08,	// (0x00084232) hwr_training_navi_pane_g1_ParamLimits

0x6d08,	// (0x00084232) hwr_training_navi_pane_g1

0x6d1a,	// (0x00084244) hwr_training_navi_pane_g2_ParamLimits

0x6d1a,	// (0x00084244) hwr_training_navi_pane_g2

0x6d2c,	// (0x00084256) hwr_training_navi_pane_g3_ParamLimits

0x6d2c,	// (0x00084256) hwr_training_navi_pane_g3

0x6d3c,	// (0x00084266) hwr_training_navi_pane_g4_ParamLimits

0x6d3c,	// (0x00084266) hwr_training_navi_pane_g4

0x0004,

0xf863,	// (0x0008cd8d) hwr_training_navi_pane_g_ParamLimits

0xf863,	// (0x0008cd8d) hwr_training_navi_pane_g

0x6d56,	// (0x00084280) hwr_training_navi_pane_t1

0x6d64,	// (0x0008428e) list_single_hwr_training_instruct_pane_ParamLimits

0x6d64,	// (0x0008428e) list_single_hwr_training_instruct_pane

0xd4b4,	// (0x0008a9de) list_single_hwr_training_instruct_pane_t1

0xcbb3,	// (0x0008a0dd) bg_frame_shadow_pane_g1

0xd4c3,	// (0x0008a9ed) bg_frame_shadow_pane_g2

0xd4cb,	// (0x0008a9f5) bg_frame_shadow_pane_g3

0xd4d3,	// (0x0008a9fd) bg_frame_shadow_pane_g4

0xd4db,	// (0x0008aa05) bg_frame_shadow_pane_g5

0xd4e3,	// (0x0008aa0d) bg_frame_shadow_pane_g6

0xd4eb,	// (0x0008aa15) bg_frame_shadow_pane_g7

0xa9c6,	// (0x00087ef0) bg_frame_shadow_pane_g8

0x0007,

0xf86e,	// (0x0008cd98) bg_frame_shadow_pane_g

0xa149,	// (0x00087673) main_video_tele_dialer_pane

0x6d7d,	// (0x000842a7) aid_size_cell_video_keypad_ParamLimits

0x6d7d,	// (0x000842a7) aid_size_cell_video_keypad

0x6d8d,	// (0x000842b7) grid_video_dialer_keypad_pane_ParamLimits

0x6d8d,	// (0x000842b7) grid_video_dialer_keypad_pane

0x6dbf,	// (0x000842e9) video_down_pane_cp_ParamLimits

0x6dbf,	// (0x000842e9) video_down_pane_cp

0x6de7,	// (0x00084311) cell_video_dialer_keypad_pane_ParamLimits

0x6de7,	// (0x00084311) cell_video_dialer_keypad_pane

0xd4f3,	// (0x0008aa1d) bg_button_pane_cp08_ParamLimits

0xd4f3,	// (0x0008aa1d) bg_button_pane_cp08

0x6dfe,	// (0x00084328) cell_video_dialer_keypad_pane_g1_ParamLimits

0x6dfe,	// (0x00084328) cell_video_dialer_keypad_pane_g1

0x65f5,	// (0x00083b1f) mup3_rocker2_pane_ParamLimits

0x65f5,	// (0x00083b1f) mup3_rocker2_pane

0xcc73,	// (0x0008a19d) mup3_rocker2_pane_g1

0x54ea,	// (0x00082a14) main_dialer2_pane

0xa149,	// (0x00087673) main_mp4_pane

0x6e3d,	// (0x00084367) main_mp4_pane_g1_ParamLimits

0x6e3d,	// (0x00084367) main_mp4_pane_g1

0x6e4b,	// (0x00084375) main_mp4_pane_g2_ParamLimits

0x6e4b,	// (0x00084375) main_mp4_pane_g2

0x6e59,	// (0x00084383) main_mp4_pane_g3_ParamLimits

0x6e59,	// (0x00084383) main_mp4_pane_g3

0x6eac,	// (0x000843d6) main_mp4_pane_g4_ParamLimits

0x6eac,	// (0x000843d6) main_mp4_pane_g4

0x6ed4,	// (0x000843fe) main_mp4_pane_g5_ParamLimits

0x6ed4,	// (0x000843fe) main_mp4_pane_g5

0x0005,

0xf88e,	// (0x0008cdb8) main_mp4_pane_g_ParamLimits

0xf88e,	// (0x0008cdb8) main_mp4_pane_g

0x6f24,	// (0x0008444e) main_mp4_pane_t1_ParamLimits

0x6f24,	// (0x0008444e) main_mp4_pane_t1

0x6f80,	// (0x000844aa) main_mp4_pane_t2_ParamLimits

0x6f80,	// (0x000844aa) main_mp4_pane_t2

0xd4ff,	// (0x0008aa29) main_mp4_pane_t3_ParamLimits

0xd4ff,	// (0x0008aa29) main_mp4_pane_t3

0x6fd2,	// (0x000844fc) main_mp4_pane_t4_ParamLimits

0x6fd2,	// (0x000844fc) main_mp4_pane_t4

0x0003,

0xf89b,	// (0x0008cdc5) main_mp4_pane_t_ParamLimits

0xf89b,	// (0x0008cdc5) main_mp4_pane_t

0x7012,	// (0x0008453c) mp4_progress_pane_ParamLimits

0x7012,	// (0x0008453c) mp4_progress_pane

0x705c,	// (0x00084586) mp4_rocker_pane_ParamLimits

0x705c,	// (0x00084586) mp4_rocker_pane

0xd527,	// (0x0008aa51) mp4_progress_pane_t1

0xd540,	// (0x0008aa6a) mp4_progress_pane_t2

0x0001,

0xf8a4,	// (0x0008cdce) mp4_progress_pane_t

0xd559,	// (0x0008aa83) mup_progress_pane_cp04

0xcc73,	// (0x0008a19d) mp4_rocker_pane_g1

0x707e,	// (0x000845a8) aid_cell_size_keypad2_ParamLimits

0x707e,	// (0x000845a8) aid_cell_size_keypad2

0x708e,	// (0x000845b8) dialer2_ne_pane_ParamLimits

0x708e,	// (0x000845b8) dialer2_ne_pane

0x709a,	// (0x000845c4) grid_dialer2_keypad_pane_ParamLimits

0x709a,	// (0x000845c4) grid_dialer2_keypad_pane

0xda2f,	// (0x0008af59) bg_popup_call_pane_cp07_ParamLimits

0xda2f,	// (0x0008af59) bg_popup_call_pane_cp07

0x70a8,	// (0x000845d2) dialer2_ne_pane_t1_ParamLimits

0x70a8,	// (0x000845d2) dialer2_ne_pane_t1

0x70cd,	// (0x000845f7) cell_dialer2_keypad_pane_ParamLimits

0x70cd,	// (0x000845f7) cell_dialer2_keypad_pane

0xd577,	// (0x0008aaa1) bg_button_pane_pane_cp04_ParamLimits

0xd577,	// (0x0008aaa1) bg_button_pane_pane_cp04

0x70e4,	// (0x0008460e) cell_dialer2_keypad_pane_g1_ParamLimits

0x70e4,	// (0x0008460e) cell_dialer2_keypad_pane_g1

0x31d0,	// (0x000806fa) aid_placing_vt_set_content_ParamLimits

0x31d0,	// (0x000806fa) aid_placing_vt_set_content

0x31f8,	// (0x00080722) aid_placing_vt_set_title_ParamLimits

0x31f8,	// (0x00080722) aid_placing_vt_set_title

0xa149,	// (0x00087673) main_image3_pane

0x717e,	// (0x000846a8) area_side_right_pane_cp01_ParamLimits

0x717e,	// (0x000846a8) area_side_right_pane_cp01

0xa8db,	// (0x00087e05) main_image3_pane_g1_ParamLimits

0xa8db,	// (0x00087e05) main_image3_pane_g1

0x71ad,	// (0x000846d7) main_image3_pane_g2_ParamLimits

0x71ad,	// (0x000846d7) main_image3_pane_g2

0x71c6,	// (0x000846f0) main_image3_pane_g3_ParamLimits

0x71c6,	// (0x000846f0) main_image3_pane_g3

0x71df,	// (0x00084709) main_image3_pane_g4_ParamLimits

0x71df,	// (0x00084709) main_image3_pane_g4

0x0003,

0xf8b3,	// (0x0008cddd) main_image3_pane_g_ParamLimits

0xf8b3,	// (0x0008cddd) main_image3_pane_g

0x71f8,	// (0x00084722) main_image3_pane_t1_ParamLimits

0x71f8,	// (0x00084722) main_image3_pane_t1

0x721d,	// (0x00084747) main_image3_pane_t2_ParamLimits

0x721d,	// (0x00084747) main_image3_pane_t2

0x723c,	// (0x00084766) main_image3_pane_t3_ParamLimits

0x723c,	// (0x00084766) main_image3_pane_t3

0x0003,

0xf8bc,	// (0x0008cde6) main_image3_pane_t_ParamLimits

0xf8bc,	// (0x0008cde6) main_image3_pane_t

0x20cd,	// (0x0007f5f7) grid_sctrl_middle_pane_cp01_ParamLimits

0x20cd,	// (0x0007f5f7) grid_sctrl_middle_pane_cp01

0x729d,	// (0x000847c7) cell_sctrl_middle_pane_cp01_ParamLimits

0x729d,	// (0x000847c7) cell_sctrl_middle_pane_cp01

0x72ae,	// (0x000847d8) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x72ae,	// (0x000847d8) cell_sctrl_middle_pane_cp01_g1

0xa149,	// (0x00087673) main_call4_pane

0x72bb,	// (0x000847e5) aid_size_button_call4_ParamLimits

0x72bb,	// (0x000847e5) aid_size_button_call4

0x72ed,	// (0x00084817) call4_windows_pane_ParamLimits

0x72ed,	// (0x00084817) call4_windows_pane

0x7309,	// (0x00084833) grid_call4_button_pane_ParamLimits

0x7309,	// (0x00084833) grid_call4_button_pane

0xd583,	// (0x0008aaad) call4_windows_conf_pane

0x732d,	// (0x00084857) popup_call4_audio_first_window_ParamLimits

0x732d,	// (0x00084857) popup_call4_audio_first_window

0x7359,	// (0x00084883) popup_call4_audio_second_window_ParamLimits

0x7359,	// (0x00084883) popup_call4_audio_second_window

0xd5c0,	// (0x0008aaea) popup_call4_audio_wait_window_ParamLimits

0xd5c0,	// (0x0008aaea) popup_call4_audio_wait_window

0x736d,	// (0x00084897) cell_call4_button_pane_ParamLimits

0x736d,	// (0x00084897) cell_call4_button_pane

0x7390,	// (0x000848ba) bg_button_pane_cp09_ParamLimits

0x7390,	// (0x000848ba) bg_button_pane_cp09

0x739c,	// (0x000848c6) cell_call4_button_pane_g1_ParamLimits

0x739c,	// (0x000848c6) cell_call4_button_pane_g1

0x73a9,	// (0x000848d3) cell_call4_button_pane_t1_ParamLimits

0x73a9,	// (0x000848d3) cell_call4_button_pane_t1

0xd608,	// (0x0008ab32) popup_call4_audio_conf_window_ParamLimits

0xd608,	// (0x0008ab32) popup_call4_audio_conf_window

0x662a,	// (0x00083b54) mup3_progress_pane_t1_ParamLimits

0x6649,	// (0x00083b73) mup3_progress_pane_t2_ParamLimits

0xcf1e,	// (0x0008a448) mup3_progress_pane_t3_ParamLimits

0xf79c,	// (0x0008ccc6) mup3_progress_pane_t_ParamLimits

0xcf3b,	// (0x0008a465) mup_progress_pane_cp03_ParamLimits

0x6b47,	// (0x00084071) mup3_control_keys_pane_g4_copy1

0x7040,	// (0x0008456a) mp4_rocker2_pane_ParamLimits

0x7040,	// (0x0008456a) mp4_rocker2_pane

0xd622,	// (0x0008ab4c) mp4_rocker2_pane_g1

0xd62a,	// (0x0008ab54) mp4_rocker2_pane_g2

0x73bb,	// (0x000848e5) mp4_rocker2_pane_g3

0x73c3,	// (0x000848ed) mp4_rocker2_pane_g4

0x73cb,	// (0x000848f5) mp4_rocker2_pane_g5

0x0004,

0xf8c5,	// (0x0008cdef) mp4_rocker2_pane_g

0xa149,	// (0x00087673) main_camera4_pane

0xa149,	// (0x00087673) main_video4_pane

0x6d9b,	// (0x000842c5) main_video_tele_dialer_pane_t1_ParamLimits

0x6d9b,	// (0x000842c5) main_video_tele_dialer_pane_t1

0x6dad,	// (0x000842d7) main_video_tele_dialer_pane_t2_ParamLimits

0x6dad,	// (0x000842d7) main_video_tele_dialer_pane_t2

0x0001,

0xf87f,	// (0x0008cda9) main_video_tele_dialer_pane_t_ParamLimits

0xf87f,	// (0x0008cda9) main_video_tele_dialer_pane_t

0x73eb,	// (0x00084915) cam4_autofocus_pane_ParamLimits

0x73eb,	// (0x00084915) cam4_autofocus_pane

0x7403,	// (0x0008492d) cam4_image_uncrop_pane_ParamLimits

0x7403,	// (0x0008492d) cam4_image_uncrop_pane

0x741c,	// (0x00084946) cam4_indicators_pane_ParamLimits

0x741c,	// (0x00084946) cam4_indicators_pane

0x7438,	// (0x00084962) main_camera4_pane_g1_ParamLimits

0x7438,	// (0x00084962) main_camera4_pane_g1

0x7444,	// (0x0008496e) main_camera4_pane_g2_ParamLimits

0x7444,	// (0x0008496e) main_camera4_pane_g2

0x7444,	// (0x0008496e) main_camera4_pane_g3_ParamLimits

0x7444,	// (0x0008496e) main_camera4_pane_g3

0x7450,	// (0x0008497a) main_camera4_pane_g4_ParamLimits

0x7450,	// (0x0008497a) main_camera4_pane_g4

0x745c,	// (0x00084986) main_camera4_pane_g5_ParamLimits

0x745c,	// (0x00084986) main_camera4_pane_g5

0x0005,

0xf8d0,	// (0x0008cdfa) main_camera4_pane_g_ParamLimits

0xf8d0,	// (0x0008cdfa) main_camera4_pane_g

0x7476,	// (0x000849a0) main_camera4_pane_t1_ParamLimits

0x7476,	// (0x000849a0) main_camera4_pane_t1

0xcea3,	// (0x0008a3cd) bg_tb_trans_pane_cp06

0x74c8,	// (0x000849f2) cam4_indicators_pane_g1

0x74d9,	// (0x00084a03) cam4_indicators_pane_g2

0x0002,

0xf8eb,	// (0x0008ce15) cam4_indicators_pane_g

0x74f1,	// (0x00084a1b) cam4_indicators_pane_t1

0x751b,	// (0x00084a45) main_video4_pane_g1_ParamLimits

0x751b,	// (0x00084a45) main_video4_pane_g1

0x7527,	// (0x00084a51) main_video4_pane_g2_ParamLimits

0x7527,	// (0x00084a51) main_video4_pane_g2

0x7533,	// (0x00084a5d) main_video4_pane_g3_ParamLimits

0x7533,	// (0x00084a5d) main_video4_pane_g3

0x753f,	// (0x00084a69) main_video4_pane_g4_ParamLimits

0x753f,	// (0x00084a69) main_video4_pane_g4

0x0004,

0xf8f2,	// (0x0008ce1c) main_video4_pane_g_ParamLimits

0xf8f2,	// (0x0008ce1c) main_video4_pane_g

0x7561,	// (0x00084a8b) vid4_indicators_pane_ParamLimits

0x7561,	// (0x00084a8b) vid4_indicators_pane

0x7580,	// (0x00084aaa) video4_image_uncrop_cif_pane_ParamLimits

0x7580,	// (0x00084aaa) video4_image_uncrop_cif_pane

0x758f,	// (0x00084ab9) video4_image_uncrop_nhd_pane_ParamLimits

0x758f,	// (0x00084ab9) video4_image_uncrop_nhd_pane

0x7403,	// (0x0008492d) video4_image_uncrop_vga_pane_ParamLimits

0x7403,	// (0x0008492d) video4_image_uncrop_vga_pane

0xa8cd,	// (0x00087df7) bg_tb_trans_pane_cp07

0x75a8,	// (0x00084ad2) vid4_indicators_pane_g1

0x75be,	// (0x00084ae8) vid4_indicators_pane_g2

0x75d2,	// (0x00084afc) vid4_indicators_pane_g3

0x0004,

0xf8fd,	// (0x0008ce27) vid4_indicators_pane_g

0x7603,	// (0x00084b2d) vid4_indicators_pane_t1

0x761a,	// (0x00084b44) cam4_autofocus_pane_g1

0x7622,	// (0x00084b4c) cam4_autofocus_pane_g2

0x762a,	// (0x00084b54) cam4_autofocus_pane_g3

0x0002,

0xf908,	// (0x0008ce32) cam4_autofocus_pane_g

0x7632,	// (0x00084b5c) cam4_autofocus_pane_g3_copy1

0x6dcb,	// (0x000842f5) video_down_pane_cp_t1

0x6dd9,	// (0x00084303) video_down_pane_cp_t2

0x0001,

0xf884,	// (0x0008cdae) video_down_pane_cp_t

0x20cd,	// (0x0007f5f7) popup_vitu2_window_ParamLimits

0x20cd,	// (0x0007f5f7) popup_vitu2_window

0x763a,	// (0x00084b64) aid_size_cell2_itu2_ParamLimits

0x763a,	// (0x00084b64) aid_size_cell2_itu2

0x765c,	// (0x00084b86) aid_size_cell_itu2_ParamLimits

0x765c,	// (0x00084b86) aid_size_cell_itu2

0xda2f,	// (0x0008af59) bg_popup_window_pane_cp09_ParamLimits

0xda2f,	// (0x0008af59) bg_popup_window_pane_cp09

0x76a2,	// (0x00084bcc) field_vitu2_entry_pane_ParamLimits

0x76a2,	// (0x00084bcc) field_vitu2_entry_pane

0x76c2,	// (0x00084bec) grid_vitu2_function_pane_ParamLimits

0x76c2,	// (0x00084bec) grid_vitu2_function_pane

0x7706,	// (0x00084c30) grid_vitu2_itu_pane_ParamLimits

0x7706,	// (0x00084c30) grid_vitu2_itu_pane

0x777a,	// (0x00084ca4) cell_vitu2_itu_pane_ParamLimits

0x777a,	// (0x00084ca4) cell_vitu2_itu_pane

0x7791,	// (0x00084cbb) cell_vitu2_function_pane_ParamLimits

0x7791,	// (0x00084cbb) cell_vitu2_function_pane

0xd632,	// (0x0008ab5c) bg_popup_call_pane_cp08_ParamLimits

0xd632,	// (0x0008ab5c) bg_popup_call_pane_cp08

0xd649,	// (0x0008ab73) field_vitu2_entry_pane_g1

0xd655,	// (0x0008ab7f) field_vitu2_entry_pane_g2

0x0002,

0xf90f,	// (0x0008ce39) field_vitu2_entry_pane_g

0x0e6a,	// (0x0007e394) field_vitu2_entry_pane_t1_ParamLimits

0x0e6a,	// (0x0007e394) field_vitu2_entry_pane_t1

0x0e94,	// (0x0007e3be) field_vitu2_entry_pane_t2_ParamLimits

0x0e94,	// (0x0007e3be) field_vitu2_entry_pane_t2

0x0001,

0xf916,	// (0x0008ce40) field_vitu2_entry_pane_t_ParamLimits

0xf916,	// (0x0008ce40) field_vitu2_entry_pane_t

0x77d5,	// (0x00084cff) bg_button_pane_cp010_ParamLimits

0x77d5,	// (0x00084cff) bg_button_pane_cp010

0x77e3,	// (0x00084d0d) cell_vitu2_itu_pane_g1

0x780c,	// (0x00084d36) cell_vitu2_itu_pane_t1_ParamLimits

0x780c,	// (0x00084d36) cell_vitu2_itu_pane_t1

0x0eb1,	// (0x0007e3db) cell_vitu2_itu_pane_t2_ParamLimits

0x0eb1,	// (0x0007e3db) cell_vitu2_itu_pane_t2

0x0002,

0xf920,	// (0x0008ce4a) cell_vitu2_itu_pane_t_ParamLimits

0xf920,	// (0x0008ce4a) cell_vitu2_itu_pane_t

0xa8cd,	// (0x00087df7) bg_button_pane_cp011

0x7858,	// (0x00084d82) cell_vitu2_function_pane_g1

0xa149,	// (0x00087673) main_myfav_hc_pane

0x727e,	// (0x000847a8) popup_image3_note_pane_ParamLimits

0x727e,	// (0x000847a8) popup_image3_note_pane

0x728c,	// (0x000847b6) popup_image3_tool_bar_pane_ParamLimits

0x728c,	// (0x000847b6) popup_image3_tool_bar_pane

0x0f1f,	// (0x0007e449) cell_vitu2_itu_pane_t3_ParamLimits

0x0f1f,	// (0x0007e449) cell_vitu2_itu_pane_t3

0xa149,	// (0x00087673) bg_popup_trans_pane

0xd677,	// (0x0008aba1) grid_image3_tool_bar_pane

0xd681,	// (0x0008abab) bg_popup_trans_pane_g1

0xad24,	// (0x0008824e) bg_popup_trans_pane_g2

0xd689,	// (0x0008abb3) bg_popup_trans_pane_g3

0xd691,	// (0x0008abbb) bg_popup_trans_pane_g4

0xd699,	// (0x0008abc3) bg_popup_trans_pane_g5

0xd6a1,	// (0x0008abcb) bg_popup_trans_pane_g6

0xd6b3,	// (0x0008abdd) bg_popup_trans_pane_g7

0xd6bb,	// (0x0008abe5) bg_popup_trans_pane_g8

0xad04,	// (0x0008822e) bg_popup_trans_pane_g9

0x0008,

0xf927,	// (0x0008ce51) bg_popup_trans_pane_g

0xd6c3,	// (0x0008abed) cell_image3_tool_bar_pane_ParamLimits

0xd6c3,	// (0x0008abed) cell_image3_tool_bar_pane

0xcc73,	// (0x0008a19d) cell_image3_tool_bar_pane_g1

0xa149,	// (0x00087673) bg_popup_trans_pane_cp1

0xd6d9,	// (0x0008ac03) popup_image3_note_pane_t1

0xd6e7,	// (0x0008ac11) popup_image3_note_pane_t2

0xd6f5,	// (0x0008ac1f) popup_image3_note_pane_t3

0x0002,

0xf93a,	// (0x0008ce64) popup_image3_note_pane_t

0xd705,	// (0x0008ac2f) popup_image3_note_pane_t3_copy1

0x786c,	// (0x00084d96) bg_myfav_hc_instruction_pane_ParamLimits

0x786c,	// (0x00084d96) bg_myfav_hc_instruction_pane

0x7884,	// (0x00084dae) cell_myfav_contact_pane_ParamLimits

0x7884,	// (0x00084dae) cell_myfav_contact_pane

0x789e,	// (0x00084dc8) cell_myfav_contact_pane_cp1_ParamLimits

0x789e,	// (0x00084dc8) cell_myfav_contact_pane_cp1

0x78b6,	// (0x00084de0) cell_myfav_contact_pane_cp2_ParamLimits

0x78b6,	// (0x00084de0) cell_myfav_contact_pane_cp2

0x78ce,	// (0x00084df8) cell_myfav_contact_pane_cp3_ParamLimits

0x78ce,	// (0x00084df8) cell_myfav_contact_pane_cp3

0x78e5,	// (0x00084e0f) cell_myfav_contact_pane_cp4_ParamLimits

0x78e5,	// (0x00084e0f) cell_myfav_contact_pane_cp4

0x78fb,	// (0x00084e25) cell_myfav_contact_pane_cp5_ParamLimits

0x78fb,	// (0x00084e25) cell_myfav_contact_pane_cp5

0x790f,	// (0x00084e39) cell_myfav_contact_pane_cp6_ParamLimits

0x790f,	// (0x00084e39) cell_myfav_contact_pane_cp6

0x7923,	// (0x00084e4d) cell_myfav_contact_pane_cp7_ParamLimits

0x7923,	// (0x00084e4d) cell_myfav_contact_pane_cp7

0xd713,	// (0x0008ac3d) listscroll_gen_pane_cp05

0x793b,	// (0x00084e65) main_myfav_hc_pane_g1_ParamLimits

0x793b,	// (0x00084e65) main_myfav_hc_pane_g1

0x7955,	// (0x00084e7f) main_myfav_hc_pane_g2_ParamLimits

0x7955,	// (0x00084e7f) main_myfav_hc_pane_g2

0x0002,

0xf941,	// (0x0008ce6b) main_myfav_hc_pane_g_ParamLimits

0xf941,	// (0x0008ce6b) main_myfav_hc_pane_g

0x7987,	// (0x00084eb1) main_myfav_hc_pane_t1_ParamLimits

0x7987,	// (0x00084eb1) main_myfav_hc_pane_t1

0xd71c,	// (0x0008ac46) main_myfav_hc_pane_t2_ParamLimits

0xd71c,	// (0x0008ac46) main_myfav_hc_pane_t2

0xd72e,	// (0x0008ac58) main_myfav_hc_pane_t3_ParamLimits

0xd72e,	// (0x0008ac58) main_myfav_hc_pane_t3

0x799e,	// (0x00084ec8) main_myfav_hc_pane_t4_ParamLimits

0x799e,	// (0x00084ec8) main_myfav_hc_pane_t4

0x0004,

0xf948,	// (0x0008ce72) main_myfav_hc_pane_t_ParamLimits

0xf948,	// (0x0008ce72) main_myfav_hc_pane_t

0xcc73,	// (0x0008a19d) bg_myfav_hc_instruction_pane_g1

0xd740,	// (0x0008ac6a) cell_myfav_contact_pane_g1_ParamLimits

0xd740,	// (0x0008ac6a) cell_myfav_contact_pane_g1

0xd740,	// (0x0008ac6a) cell_myfav_contact_pane_g2_ParamLimits

0xd740,	// (0x0008ac6a) cell_myfav_contact_pane_g2

0xd74c,	// (0x0008ac76) cell_myfav_contact_pane_g3_ParamLimits

0xd74c,	// (0x0008ac76) cell_myfav_contact_pane_g3

0xcf08,	// (0x0008a432) cell_myfav_contact_pane_g4_ParamLimits

0xcf08,	// (0x0008a432) cell_myfav_contact_pane_g4

0xd759,	// (0x0008ac83) cell_myfav_contact_pane_g5_ParamLimits

0xd759,	// (0x0008ac83) cell_myfav_contact_pane_g5

0x0004,

0xf953,	// (0x0008ce7d) cell_myfav_contact_pane_g_ParamLimits

0xf953,	// (0x0008ce7d) cell_myfav_contact_pane_g

0x796f,	// (0x00084e99) main_myfav_hc_pane_g3_ParamLimits

0x796f,	// (0x00084e99) main_myfav_hc_pane_g3

0x1fdf,	// (0x0007f509) popup_adpt_find_window

0x79c8,	// (0x00084ef2) afind_page_pane_ParamLimits

0x79c8,	// (0x00084ef2) afind_page_pane

0x79d5,	// (0x00084eff) aid_size_cell_afind_ParamLimits

0x79d5,	// (0x00084eff) aid_size_cell_afind

0x79ef,	// (0x00084f19) bg_popup_sub_pane_cp09_ParamLimits

0x79ef,	// (0x00084f19) bg_popup_sub_pane_cp09

0x79fc,	// (0x00084f26) find_pane_cp01_ParamLimits

0x79fc,	// (0x00084f26) find_pane_cp01

0xd765,	// (0x0008ac8f) grid_afind_control_pane_ParamLimits

0xd765,	// (0x0008ac8f) grid_afind_control_pane

0x7a09,	// (0x00084f33) grid_afind_pane_ParamLimits

0x7a09,	// (0x00084f33) grid_afind_pane

0x7a25,	// (0x00084f4f) cell_afind_pane_ParamLimits

0x7a25,	// (0x00084f4f) cell_afind_pane

0xcc73,	// (0x0008a19d) afind_page_pane_g1

0x7a71,	// (0x00084f9b) afind_page_pane_g2

0x7a7a,	// (0x00084fa4) afind_page_pane_g3

0x0002,

0xf95e,	// (0x0008ce88) afind_page_pane_g

0x7a83,	// (0x00084fad) afind_page_pane_t1

0xd779,	// (0x0008aca3) cell_afind_grid_control_pane_ParamLimits

0xd779,	// (0x0008aca3) cell_afind_grid_control_pane

0xd577,	// (0x0008aaa1) bg_button_pane_cp69_ParamLimits

0xd577,	// (0x0008aaa1) bg_button_pane_cp69

0x7aa3,	// (0x00084fcd) cell_afind_pane_g1_ParamLimits

0x7aa3,	// (0x00084fcd) cell_afind_pane_g1

0x7ab0,	// (0x00084fda) cell_afind_pane_t1_ParamLimits

0x7ab0,	// (0x00084fda) cell_afind_pane_t1

0xab19,	// (0x00088043) bg_button_pane_cp72

0xd788,	// (0x0008acb2) cell_afind_grid_control_pane_g1

0x5065,	// (0x0008258f) aid_image_placing_area_ParamLimits

0x5065,	// (0x0008258f) aid_image_placing_area

0xd243,	// (0x0008a76d) field_vitu_entry_pane_g1_ParamLimits

0xd243,	// (0x0008a76d) field_vitu_entry_pane_g1

0xd24f,	// (0x0008a779) field_vitu_entry_pane_g2_ParamLimits

0xd24f,	// (0x0008a779) field_vitu_entry_pane_g2

0x0001,

0xf80f,	// (0x0008cd39) field_vitu_entry_pane_g_ParamLimits

0xf80f,	// (0x0008cd39) field_vitu_entry_pane_g

0x6bd1,	// (0x000840fb) cell_vitu_itu_pane_g1_ParamLimits

0x6c21,	// (0x0008414b) cell_vitu_itu_pane_t3_ParamLimits

0x6c21,	// (0x0008414b) cell_vitu_itu_pane_t3

0xd527,	// (0x0008aa51) mp4_progress_pane_t1_ParamLimits

0xd540,	// (0x0008aa6a) mp4_progress_pane_t2_ParamLimits

0xf8a4,	// (0x0008cdce) mp4_progress_pane_t_ParamLimits

0xd559,	// (0x0008aa83) mup_progress_pane_cp04_ParamLimits

0x79b2,	// (0x00084edc) main_myfav_hc_pane_t5_ParamLimits

0x79b2,	// (0x00084edc) main_myfav_hc_pane_t5

0x0b58,	// (0x0007e082) aid_zoom_text_primary

0x1fdf,	// (0x0007f509) popup_adpt_find_window_ParamLimits

0xa8cd,	// (0x00087df7) main_cam_set_pane

0x742a,	// (0x00084954) cam4_zoom_pane_ParamLimits

0x742a,	// (0x00084954) cam4_zoom_pane

0x7ac2,	// (0x00084fec) main_cam_set_pane_g1_ParamLimits

0x7ac2,	// (0x00084fec) main_cam_set_pane_g1

0x7ad0,	// (0x00084ffa) main_cam_set_pane_g2_ParamLimits

0x7ad0,	// (0x00084ffa) main_cam_set_pane_g2

0x0001,

0xf965,	// (0x0008ce8f) main_cam_set_pane_g_ParamLimits

0xf965,	// (0x0008ce8f) main_cam_set_pane_g

0x7adc,	// (0x00085006) main_cam_set_pane_t1_ParamLimits

0x7adc,	// (0x00085006) main_cam_set_pane_t1

0x7af8,	// (0x00085022) main_cset_listscroll_pane_ParamLimits

0x7af8,	// (0x00085022) main_cset_listscroll_pane

0x7b27,	// (0x00085051) main_cset_slider_pane_ParamLimits

0x7b27,	// (0x00085051) main_cset_slider_pane

0xd799,	// (0x0008acc3) main_cset_list_pane_ParamLimits

0xd799,	// (0x0008acc3) main_cset_list_pane

0xd7a9,	// (0x0008acd3) scroll_pane_cp028

0x7b48,	// (0x00085072) aid_area_touch_slider

0x7b64,	// (0x0008508e) cset_slider_pane

0x7b8e,	// (0x000850b8) main_cset_slider_pane_g1

0x7ba3,	// (0x000850cd) main_cset_slider_pane_g2

0x0011,

0xf96a,	// (0x0008ce94) main_cset_slider_pane_g

0xd7e2,	// (0x0008ad0c) main_cset_slider_pane_t1

0x7c5f,	// (0x00085189) main_cset_slider_pane_t2

0x7c79,	// (0x000851a3) main_cset_slider_pane_t3

0x7c93,	// (0x000851bd) main_cset_slider_pane_t4

0x7cad,	// (0x000851d7) main_cset_slider_pane_t5

0x7cc7,	// (0x000851f1) main_cset_slider_pane_t6

0x7cdc,	// (0x00085206) main_cset_slider_pane_t7

0x000e,

0xf98f,	// (0x0008ceb9) main_cset_slider_pane_t

0x7de0,	// (0x0008530a) cset_list_set_pane_ParamLimits

0x7de0,	// (0x0008530a) cset_list_set_pane

0x7df1,	// (0x0008531b) aid_position_infowindow_above

0x7df9,	// (0x00085323) aid_position_infowindow_below

0x7e01,	// (0x0008532b) cset_list_set_pane_g1_ParamLimits

0x7e01,	// (0x0008532b) cset_list_set_pane_g1

0x0f6c,	// (0x0007e496) cset_list_set_pane_g3_ParamLimits

0x0f6c,	// (0x0007e496) cset_list_set_pane_g3

0x0001,

0xf9ae,	// (0x0008ced8) cset_list_set_pane_g_ParamLimits

0xf9ae,	// (0x0008ced8) cset_list_set_pane_g

0x0f7b,	// (0x0007e4a5) cset_list_set_pane_t1_ParamLimits

0x0f7b,	// (0x0007e4a5) cset_list_set_pane_t1

0xa8cd,	// (0x00087df7) list_highlight_pane_cp021_ParamLimits

0xa8cd,	// (0x00087df7) list_highlight_pane_cp021

0xb543,	// (0x00088a6d) cset_slider_pane_g1

0xb555,	// (0x00088a7f) cset_slider_pane_g2

0xb54c,	// (0x00088a76) cset_slider_pane_g3

0x0002,

0xf9b3,	// (0x0008cedd) cset_slider_pane_g

0x7e0d,	// (0x00085337) aid_area_touch_cam4_zoom

0x7e15,	// (0x0008533f) cam4_zoom_cont_pane

0x7e1d,	// (0x00085347) cam4_zoom_pane_g1

0x7e25,	// (0x0008534f) cam4_zoom_pane_g2

0x7e2d,	// (0x00085357) cam4_zoom_pane_g3

0x0002,

0xf9ba,	// (0x0008cee4) cam4_zoom_pane_g

0xdd71,	// (0x0008b29b) cam4_zoom_cont_pane_g1

0xdd7a,	// (0x0008b2a4) cam4_zoom_cont_pane_g2

0xdd83,	// (0x0008b2ad) cam4_zoom_cont_pane_g3

0x0002,

0xf9c1,	// (0x0008ceeb) cam4_zoom_cont_pane_g

0x72d5,	// (0x000847ff) call4_image_pane_ParamLimits

0x72d5,	// (0x000847ff) call4_image_pane

0xd583,	// (0x0008aaad) call4_windows_conf_pane_ParamLimits

0xd59e,	// (0x0008aac8) popup_call4_audio_in_window_ParamLimits

0xd59e,	// (0x0008aac8) popup_call4_audio_in_window

0xa149,	// (0x00087673) bg_popup_call2_act_pane_cp02

0xd600,	// (0x0008ab2a) call4_list_conf_pane

0xcc73,	// (0x0008a19d) call4_image_pane_g1

0xcc73,	// (0x0008a19d) call4_image_pane_g2

0x0001,

0xf6dc,	// (0x0008cc06) call4_image_pane_g

0xd882,	// (0x0008adac) list_single_graphic_popup_conf4_pane_ParamLimits

0xd882,	// (0x0008adac) list_single_graphic_popup_conf4_pane

0xa149,	// (0x00087673) list_highlight_pane_cp022

0xd897,	// (0x0008adc1) list_single_graphic_popup_conf4_pane_g1

0xb22f,	// (0x00088759) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9c8,	// (0x0008cef2) list_single_graphic_popup_conf4_pane_g

0xd89f,	// (0x0008adc9) list_single_graphic_popup_conf4_pane_t1

0x3352,	// (0x0008087c) popup_vtel_slider_window_ParamLimits

0x3352,	// (0x0008087c) popup_vtel_slider_window

0xd565,	// (0x0008aa8f) dialer2_ne_pane_t2_ParamLimits

0xd565,	// (0x0008aa8f) dialer2_ne_pane_t2

0x0001,

0xf8a9,	// (0x0008cdd3) dialer2_ne_pane_t_ParamLimits

0xf8a9,	// (0x0008cdd3) dialer2_ne_pane_t

0xa8cd,	// (0x00087df7) bg_popup_sub_pane_cp010_ParamLimits

0xa8cd,	// (0x00087df7) bg_popup_sub_pane_cp010

0x7e35,	// (0x0008535f) popup_vtel_slider_window_g1_ParamLimits

0x7e35,	// (0x0008535f) popup_vtel_slider_window_g1

0x7e41,	// (0x0008536b) popup_vtel_slider_window_g2_ParamLimits

0x7e41,	// (0x0008536b) popup_vtel_slider_window_g2

0x0003,

0xf9cd,	// (0x0008cef7) popup_vtel_slider_window_g_ParamLimits

0xf9cd,	// (0x0008cef7) popup_vtel_slider_window_g

0x7e89,	// (0x000853b3) vtel_slider_pane_ParamLimits

0x7e89,	// (0x000853b3) vtel_slider_pane

0x7e98,	// (0x000853c2) vtel_slider_pane_g1_ParamLimits

0x7e98,	// (0x000853c2) vtel_slider_pane_g1

0x7ea5,	// (0x000853cf) vtel_slider_pane_g2_ParamLimits

0x7ea5,	// (0x000853cf) vtel_slider_pane_g2

0x7eb2,	// (0x000853dc) vtel_slider_pane_g3_ParamLimits

0x7eb2,	// (0x000853dc) vtel_slider_pane_g3

0x7e98,	// (0x000853c2) vtel_slider_pane_g4_ParamLimits

0x7e98,	// (0x000853c2) vtel_slider_pane_g4

0x7ebf,	// (0x000853e9) vtel_slider_pane_g5_ParamLimits

0x7ebf,	// (0x000853e9) vtel_slider_pane_g5

0x0004,

0xf9d6,	// (0x0008cf00) vtel_slider_pane_g_ParamLimits

0xf9d6,	// (0x0008cf00) vtel_slider_pane_g

0xa8cd,	// (0x00087df7) main_gallery2_pane

0x7682,	// (0x00084bac) aid_size_row_itut2_dropdow_list_ParamLimits

0x7682,	// (0x00084bac) aid_size_row_itut2_dropdow_list

0x76e4,	// (0x00084c0e) grid_vitu2_function_top_pane_ParamLimits

0x76e4,	// (0x00084c0e) grid_vitu2_function_top_pane

0x7736,	// (0x00084c60) popup_vitu2_dropdown_list_window_ParamLimits

0x7736,	// (0x00084c60) popup_vitu2_dropdown_list_window

0x7756,	// (0x00084c80) popup_vitu2_match_list_window

0x7ecc,	// (0x000853f6) cell_vitu2_function_top_pane_ParamLimits

0x7ecc,	// (0x000853f6) cell_vitu2_function_top_pane

0x7eec,	// (0x00085416) cell_vitu2_function_top_pane_cp01_ParamLimits

0x7eec,	// (0x00085416) cell_vitu2_function_top_pane_cp01

0x7f0a,	// (0x00085434) cell_vitu2_function_top_wide_pane_ParamLimits

0x7f0a,	// (0x00085434) cell_vitu2_function_top_wide_pane

0xa8cd,	// (0x00087df7) bg_button_pane_cp012

0x7f28,	// (0x00085452) cell_vitu2_function_top_pane_g1

0x7f3b,	// (0x00085465) bg_button_pane_cp013_ParamLimits

0x7f3b,	// (0x00085465) bg_button_pane_cp013

0x7f57,	// (0x00085481) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x7f57,	// (0x00085481) cell_vitu2_function_top_wide_pane_g1

0x20cd,	// (0x0007f5f7) bg_popup_sub_pane_cp20

0x7f6f,	// (0x00085499) list_vitu2_match_list_pane

0xd681,	// (0x0008abab) bg_popup_sub_pane_cp20_g1

0xd689,	// (0x0008abb3) bg_popup_sub_pane_cp20_g2

0xad24,	// (0x0008824e) bg_popup_sub_pane_cp20_g3

0xd691,	// (0x0008abbb) bg_popup_sub_pane_cp20_g4

0xad04,	// (0x0008822e) bg_popup_sub_pane_cp20_g5

0xd8b5,	// (0x0008addf) bg_popup_sub_pane_cp20_g6

0xd6a1,	// (0x0008abcb) bg_popup_sub_pane_cp20_g7

0xd6b3,	// (0x0008abdd) bg_popup_sub_pane_cp20_g8

0xd6bb,	// (0x0008abe5) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9e1,	// (0x0008cf0b) bg_popup_sub_pane_cp20_g

0xa8e9,	// (0x00087e13) list_vitu2_match_list_item_pane_ParamLimits

0xa8e9,	// (0x00087e13) list_vitu2_match_list_item_pane

0x7f87,	// (0x000854b1) list_vitu2_match_list_item_pane_t1

0xa149,	// (0x00087673) bg_popup_sub_pane_cp21

0xb158,	// (0x00088682) grid_vitu2_dropdown_list_pane

0x7fa1,	// (0x000854cb) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x7fa1,	// (0x000854cb) cell_vitu2_dropdown_list_char_pane

0x7fc6,	// (0x000854f0) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x7fc6,	// (0x000854f0) cell_vitu2_dropdown_list_ctrl_pane

0xd8bd,	// (0x0008ade7) cell_vitu2_dropdown_list_char_pane_g1

0xd8c6,	// (0x0008adf0) cell_vitu2_dropdown_list_char_pane_g2

0xd8cf,	// (0x0008adf9) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf9fe,	// (0x0008cf28) cell_vitu2_dropdown_list_char_pane_g

0x7ff4,	// (0x0008551e) cell_vitu2_dropdown_list_char_pane_t1

0x8002,	// (0x0008552c) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x8002,	// (0x0008552c) cell_vitu2_dropdown_list_ctrl_pane_g1

0x8012,	// (0x0008553c) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x8012,	// (0x0008553c) cell_vitu2_dropdown_list_ctrl_pane_g2

0x8023,	// (0x0008554d) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x8023,	// (0x0008554d) cell_vitu2_dropdown_list_ctrl_pane_g3

0x8033,	// (0x0008555d) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x8033,	// (0x0008555d) cell_vitu2_dropdown_list_ctrl_pane_g4

0xcea3,	// (0x0008a3cd) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xcea3,	// (0x0008a3cd) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa05,	// (0x0008cf2f) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa05,	// (0x0008cf2f) cell_vitu2_dropdown_list_ctrl_pane_g

0x804c,	// (0x00085576) aid_size_cell_gallery2_ParamLimits

0x804c,	// (0x00085576) aid_size_cell_gallery2

0x8066,	// (0x00085590) grid_gallery2_pane_ParamLimits

0x8066,	// (0x00085590) grid_gallery2_pane

0x6a56,	// (0x00083f80) scroll_pane_cp029_ParamLimits

0x6a56,	// (0x00083f80) scroll_pane_cp029

0x807d,	// (0x000855a7) cell_gallery2_pane_ParamLimits

0x807d,	// (0x000855a7) cell_gallery2_pane

0xd8d8,	// (0x0008ae02) cell_gallery2_pane_g2

0x80c9,	// (0x000855f3) cell_gallery2_pane_g3

0xd8e0,	// (0x0008ae0a) cell_gallery2_pane_g4

0xd8e8,	// (0x0008ae12) cell_gallery2_pane_g5

0xb40b,	// (0x00088935) grid_highlight_pane_cp10

0x7756,	// (0x00084c80) popup_vitu2_match_list_window_ParamLimits

0x776a,	// (0x00084c94) popup_vitu2_query_window_ParamLimits

0x776a,	// (0x00084c94) popup_vitu2_query_window

0xa149,	// (0x00087673) bg_vitu2_candi_button_pane

0xd8bd,	// (0x0008ade7) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd8c6,	// (0x0008adf0) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd8cf,	// (0x0008adf9) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x0fda,	// (0x0007e504) bg_button_pane_cp015

0x80d1,	// (0x000855fb) bg_button_pane_cp016

0x80e4,	// (0x0008560e) bg_button_pane_cp017

0xc822,	// (0x00089d4c) bg_popup_sub_pane_cp22

0xd8f0,	// (0x0008ae1a) popup_vitu2_query_window_g1

0x100d,	// (0x0007e537) popup_vitu2_query_window_g2

0x0002,

0xfa10,	// (0x0008cf3a) popup_vitu2_query_window_g

0x102a,	// (0x0007e554) popup_vitu2_query_window_t1_ParamLimits

0x102a,	// (0x0007e554) popup_vitu2_query_window_t1

0x105d,	// (0x0007e587) popup_vitu2_query_window_t2_ParamLimits

0x105d,	// (0x0007e587) popup_vitu2_query_window_t2

0x106f,	// (0x0007e599) popup_vitu2_query_window_t3_ParamLimits

0x106f,	// (0x0007e599) popup_vitu2_query_window_t3

0x8108,	// (0x00085632) popup_vitu2_query_window_t4_ParamLimits

0x8108,	// (0x00085632) popup_vitu2_query_window_t4

0x812b,	// (0x00085655) popup_vitu2_query_window_t5_ParamLimits

0x812b,	// (0x00085655) popup_vitu2_query_window_t5

0x0006,

0xfa17,	// (0x0008cf41) popup_vitu2_query_window_t_ParamLimits

0xfa17,	// (0x0008cf41) popup_vitu2_query_window_t

0xd791,	// (0x0008acbb) main_cset_text_pane

0x7b48,	// (0x00085072) aid_area_touch_slider_ParamLimits

0x7b64,	// (0x0008508e) cset_slider_pane_ParamLimits

0x7b8e,	// (0x000850b8) main_cset_slider_pane_g1_ParamLimits

0x7ba3,	// (0x000850cd) main_cset_slider_pane_g2_ParamLimits

0xd7b2,	// (0x0008acdc) main_cset_slider_pane_g3_ParamLimits

0xd7b2,	// (0x0008acdc) main_cset_slider_pane_g3

0x7bb8,	// (0x000850e2) main_cset_slider_pane_g4_ParamLimits

0x7bb8,	// (0x000850e2) main_cset_slider_pane_g4

0x7bc7,	// (0x000850f1) main_cset_slider_pane_g5_ParamLimits

0x7bc7,	// (0x000850f1) main_cset_slider_pane_g5

0x7bd3,	// (0x000850fd) main_cset_slider_pane_g6_ParamLimits

0x7bd3,	// (0x000850fd) main_cset_slider_pane_g6

0xf96a,	// (0x0008ce94) main_cset_slider_pane_g_ParamLimits

0xd7e2,	// (0x0008ad0c) main_cset_slider_pane_t1_ParamLimits

0x7c5f,	// (0x00085189) main_cset_slider_pane_t2_ParamLimits

0x7c79,	// (0x000851a3) main_cset_slider_pane_t3_ParamLimits

0x7c93,	// (0x000851bd) main_cset_slider_pane_t4_ParamLimits

0x7cad,	// (0x000851d7) main_cset_slider_pane_t5_ParamLimits

0x7cc7,	// (0x000851f1) main_cset_slider_pane_t6_ParamLimits

0x7cdc,	// (0x00085206) main_cset_slider_pane_t7_ParamLimits

0x7d06,	// (0x00085230) main_cset_slider_pane_t8_ParamLimits

0x7d06,	// (0x00085230) main_cset_slider_pane_t8

0x7d2e,	// (0x00085258) main_cset_slider_pane_t9_ParamLimits

0x7d2e,	// (0x00085258) main_cset_slider_pane_t9

0x7d56,	// (0x00085280) main_cset_slider_pane_t10_ParamLimits

0x7d56,	// (0x00085280) main_cset_slider_pane_t10

0x7d7e,	// (0x000852a8) main_cset_slider_pane_t11_ParamLimits

0x7d7e,	// (0x000852a8) main_cset_slider_pane_t11

0x7da6,	// (0x000852d0) main_cset_slider_pane_t12_ParamLimits

0x7da6,	// (0x000852d0) main_cset_slider_pane_t12

0x7dc3,	// (0x000852ed) main_cset_slider_pane_t13_ParamLimits

0x7dc3,	// (0x000852ed) main_cset_slider_pane_t13

0xf98f,	// (0x0008ceb9) main_cset_slider_pane_t_ParamLimits

0xa149,	// (0x00087673) bg_popup_sub_pane_cp011

0xd8fc,	// (0x0008ae26) main_cset_text_pane_g1

0xd904,	// (0x0008ae2e) main_cset_text_pane_t1

0xd912,	// (0x0008ae3c) main_cset_text_pane_t2

0xd920,	// (0x0008ae4a) main_cset_text_pane_t3

0xd92e,	// (0x0008ae58) main_cset_text_pane_t4

0xd93c,	// (0x0008ae66) main_cset_text_pane_t5

0xd94a,	// (0x0008ae74) main_cset_text_pane_t6

0xd958,	// (0x0008ae82) main_cset_text_pane_t7

0x0006,

0xfa26,	// (0x0008cf50) main_cset_text_pane_t

0xa149,	// (0x00087673) main_cam4_burst_pane

0xa149,	// (0x00087673) main_cam5_pane

0x7a91,	// (0x00084fbb) bg_button_pane_cp019

0x7a9a,	// (0x00084fc4) bg_button_pane_cp020

0xd7be,	// (0x0008ace8) main_cset_slider_pane_g7_ParamLimits

0xd7be,	// (0x0008ace8) main_cset_slider_pane_g7

0xd7ca,	// (0x0008acf4) main_cset_slider_pane_g8_ParamLimits

0xd7ca,	// (0x0008acf4) main_cset_slider_pane_g8

0x7be7,	// (0x00085111) main_cset_slider_pane_g9_ParamLimits

0x7be7,	// (0x00085111) main_cset_slider_pane_g9

0x7bf3,	// (0x0008511d) main_cset_slider_pane_g10_ParamLimits

0x7bf3,	// (0x0008511d) main_cset_slider_pane_g10

0x7bff,	// (0x00085129) main_cset_slider_pane_g11_ParamLimits

0x7bff,	// (0x00085129) main_cset_slider_pane_g11

0x7c0b,	// (0x00085135) main_cset_slider_pane_g12_ParamLimits

0x7c0b,	// (0x00085135) main_cset_slider_pane_g12

0x7c17,	// (0x00085141) main_cset_slider_pane_g13_ParamLimits

0x7c17,	// (0x00085141) main_cset_slider_pane_g13

0x7c23,	// (0x0008514d) main_cset_slider_pane_g14_ParamLimits

0x7c23,	// (0x0008514d) main_cset_slider_pane_g14

0x7c2f,	// (0x00085159) main_cset_slider_pane_g15_ParamLimits

0x7c2f,	// (0x00085159) main_cset_slider_pane_g15

0xd810,	// (0x0008ad3a) main_cset_slider_pane_t14_ParamLimits

0xd810,	// (0x0008ad3a) main_cset_slider_pane_t14

0xd849,	// (0x0008ad73) main_cset_slider_pane_t15_ParamLimits

0xd849,	// (0x0008ad73) main_cset_slider_pane_t15

0x814e,	// (0x00085678) aid_cam4_burst_size_cell_ParamLimits

0x814e,	// (0x00085678) aid_cam4_burst_size_cell

0x816a,	// (0x00085694) grid_cam4_burst_pane_ParamLimits

0x816a,	// (0x00085694) grid_cam4_burst_pane

0x819c,	// (0x000856c6) linegrid_cam4_burst_pane_ParamLimits

0x819c,	// (0x000856c6) linegrid_cam4_burst_pane

0x81ba,	// (0x000856e4) scroll_pane_cp30_ParamLimits

0x81ba,	// (0x000856e4) scroll_pane_cp30

0x81c6,	// (0x000856f0) cell_cam4_burst_pane_ParamLimits

0x81c6,	// (0x000856f0) cell_cam4_burst_pane

0xd966,	// (0x0008ae90) linegrid_cam4_burst_pane_g1_ParamLimits

0xd966,	// (0x0008ae90) linegrid_cam4_burst_pane_g1

0x8206,	// (0x00085730) linegrid_cam4_burst_pane_g2_ParamLimits

0x8206,	// (0x00085730) linegrid_cam4_burst_pane_g2

0xd973,	// (0x0008ae9d) linegrid_cam4_burst_pane_g3_ParamLimits

0xd973,	// (0x0008ae9d) linegrid_cam4_burst_pane_g3

0x0002,

0xfa35,	// (0x0008cf5f) linegrid_cam4_burst_pane_g_ParamLimits

0xfa35,	// (0x0008cf5f) linegrid_cam4_burst_pane_g

0x8217,	// (0x00085741) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x8217,	// (0x00085741) linegrid_cam4_burst_pane_g3_copy1

0xd980,	// (0x0008aeaa) linegrid_cam4_burst_pane_g4_ParamLimits

0xd980,	// (0x0008aeaa) linegrid_cam4_burst_pane_g4

0x8231,	// (0x0008575b) linegrid_cam4_burst_pane_g5_ParamLimits

0x8231,	// (0x0008575b) linegrid_cam4_burst_pane_g5

0x8242,	// (0x0008576c) linegrid_cam4_burst_pane_g6_ParamLimits

0x8242,	// (0x0008576c) linegrid_cam4_burst_pane_g6

0xd98d,	// (0x0008aeb7) linegrid_cam4_burst_pane_g7_ParamLimits

0xd98d,	// (0x0008aeb7) linegrid_cam4_burst_pane_g7

0x8259,	// (0x00085783) cell_cam4_burst_pane_g1

0xd9a6,	// (0x0008aed0) main_cam5_pane_t1_ParamLimits

0xd9a6,	// (0x0008aed0) main_cam5_pane_t1

0xd9b8,	// (0x0008aee2) main_cam5_pane_t2_ParamLimits

0xd9b8,	// (0x0008aee2) main_cam5_pane_t2

0xd9ca,	// (0x0008aef4) main_cam5_pane_t3_ParamLimits

0xd9ca,	// (0x0008aef4) main_cam5_pane_t3

0xd9dc,	// (0x0008af06) main_cam5_pane_t4_ParamLimits

0xd9dc,	// (0x0008af06) main_cam5_pane_t4

0xd9f4,	// (0x0008af1e) main_cam5_pane_t5_ParamLimits

0xd9f4,	// (0x0008af1e) main_cam5_pane_t5

0xda3d,	// (0x0008af67) main_cam5_pane_t6_ParamLimits

0xda3d,	// (0x0008af67) main_cam5_pane_t6

0xda51,	// (0x0008af7b) main_cam5_pane_t7_ParamLimits

0xda51,	// (0x0008af7b) main_cam5_pane_t7

0xda63,	// (0x0008af8d) main_cam5_pane_t8_ParamLimits

0xda63,	// (0x0008af8d) main_cam5_pane_t8

0xda81,	// (0x0008afab) main_cam5_pane_t9_ParamLimits

0xda81,	// (0x0008afab) main_cam5_pane_t9

0xda93,	// (0x0008afbd) main_cam5_pane_t10_ParamLimits

0xda93,	// (0x0008afbd) main_cam5_pane_t10

0xdaa5,	// (0x0008afcf) main_cam5_pane_t11_ParamLimits

0xdaa5,	// (0x0008afcf) main_cam5_pane_t11

0xdab9,	// (0x0008afe3) main_cam5_pane_t12_ParamLimits

0xdab9,	// (0x0008afe3) main_cam5_pane_t12

0xdad0,	// (0x0008affa) main_cam5_pane_t13_ParamLimits

0xdad0,	// (0x0008affa) main_cam5_pane_t13

0x000c,

0xfa41,	// (0x0008cf6b) main_cam5_pane_t_ParamLimits

0xfa41,	// (0x0008cf6b) main_cam5_pane_t

0x208c,	// (0x0007f5b6) popup_scut_keymap_window_ParamLimits

0x208c,	// (0x0007f5b6) popup_scut_keymap_window

0x826c,	// (0x00085796) aid_size_cell_brow_shortcut

0xb40b,	// (0x00088935) bg_popup_window_pane_cp010

0x8278,	// (0x000857a2) grid_scut_pane

0x8284,	// (0x000857ae) cell_scut_pane_ParamLimits

0x8284,	// (0x000857ae) cell_scut_pane

0x829f,	// (0x000857c9) cell_scut_pane_g1

0xdaf3,	// (0x0008b01d) cell_scut_pane_t1

0xdb02,	// (0x0008b02c) cell_scut_pane_t2

0x82a8,	// (0x000857d2) cell_scut_pane_t3

0x0002,

0xfa5c,	// (0x0008cf86) cell_scut_pane_t

0x624b,	// (0x00083775) main_mup3_pane_g8_ParamLimits

0x624b,	// (0x00083775) main_mup3_pane_g8

0x7692,	// (0x00084bbc) area_vitu2_query_pane_ParamLimits

0x7692,	// (0x00084bbc) area_vitu2_query_pane

0x0fec,	// (0x0007e516) input_focus_pane_cp08

0xdb11,	// (0x0008b03b) area_vitu2_query_pane_g1

0x10ed,	// (0x0007e617) area_vitu2_query_pane_g2

0x0001,

0xfa63,	// (0x0008cf8d) area_vitu2_query_pane_g

0x82b6,	// (0x000857e0) area_vitu2_query_pane_t1_ParamLimits

0x82b6,	// (0x000857e0) area_vitu2_query_pane_t1

0x82ca,	// (0x000857f4) area_vitu2_query_pane_t2_ParamLimits

0x82ca,	// (0x000857f4) area_vitu2_query_pane_t2

0x10fe,	// (0x0007e628) area_vitu2_query_pane_t3_ParamLimits

0x10fe,	// (0x0007e628) area_vitu2_query_pane_t3

0x1126,	// (0x0007e650) area_vitu2_query_pane_t4_ParamLimits

0x1126,	// (0x0007e650) area_vitu2_query_pane_t4

0x114e,	// (0x0007e678) area_vitu2_query_pane_t5_ParamLimits

0x114e,	// (0x0007e678) area_vitu2_query_pane_t5

0x1176,	// (0x0007e6a0) area_vitu2_query_pane_t6_ParamLimits

0x1176,	// (0x0007e6a0) area_vitu2_query_pane_t6

0x0006,

0xfa68,	// (0x0008cf92) area_vitu2_query_pane_t_ParamLimits

0xfa68,	// (0x0008cf92) area_vitu2_query_pane_t

0x82de,	// (0x00085808) bg_button_pane_cp018

0x82ec,	// (0x00085816) bg_button_pane_cp021

0x11c2,	// (0x0007e6ec) bg_button_pane_cp022

0x11d3,	// (0x0007e6fd) input_focus_pane_cp09

0x4704,	// (0x00081c2e) aid_size_touch_mv_arrow_left

0x472f,	// (0x00081c59) aid_size_touch_mv_arrow_right

0x7c47,	// (0x00085171) main_cset_slider_pane_g16_ParamLimits

0x7c47,	// (0x00085171) main_cset_slider_pane_g16

0x7c53,	// (0x0008517d) main_cset_slider_pane_g17_ParamLimits

0x7c53,	// (0x0008517d) main_cset_slider_pane_g17

0x8259,	// (0x00085783) cell_cam4_burst_pane_g1_ParamLimits

0xa149,	// (0x00087673) compa_mode_pane

0x7e4d,	// (0x00085377) popup_vtel_slider_window_g3_ParamLimits

0x7e4d,	// (0x00085377) popup_vtel_slider_window_g3

0x7e61,	// (0x0008538b) popup_vtel_slider_window_g4_ParamLimits

0x7e61,	// (0x0008538b) popup_vtel_slider_window_g4

0x7e75,	// (0x0008539f) popup_vtel_slider_window_t1_ParamLimits

0x7e75,	// (0x0008539f) popup_vtel_slider_window_t1

0xa149,	// (0x00087673) main_cl_pane

0xc84e,	// (0x00089d78) popup_imed_adjust2_window_ParamLimits

0xc822,	// (0x00089d4c) bg_tb_trans_pane_cp05_ParamLimits

0xd178,	// (0x0008a6a2) popup_imed_adjust2_window_g1_ParamLimits

0xd187,	// (0x0008a6b1) popup_imed_adjust2_window_g2_ParamLimits

0xd187,	// (0x0008a6b1) popup_imed_adjust2_window_g2

0xd193,	// (0x0008a6bd) popup_imed_adjust2_window_g3_ParamLimits

0xd193,	// (0x0008a6bd) popup_imed_adjust2_window_g3

0x0002,

0xf7d3,	// (0x0008ccfd) popup_imed_adjust2_window_g_ParamLimits

0xf7d3,	// (0x0008ccfd) popup_imed_adjust2_window_g

0xd19f,	// (0x0008a6c9) popup_imed_adjust2_window_t1_ParamLimits

0xd1b7,	// (0x0008a6e1) slider_imed_adjust_pane_ParamLimits

0xd1cb,	// (0x0008a6f5) slider_imed_adjust_pane_g1_ParamLimits

0xd1db,	// (0x0008a705) slider_imed_adjust_pane_g2_ParamLimits

0xd1eb,	// (0x0008a715) slider_imed_adjust_pane_g3_ParamLimits

0xd1fc,	// (0x0008a726) slider_imed_adjust_pane_g4_ParamLimits

0xf7da,	// (0x0008cd04) slider_imed_adjust_pane_g_ParamLimits

0x73d3,	// (0x000848fd) aid_touch_area_cam4_ParamLimits

0x73d3,	// (0x000848fd) aid_touch_area_cam4

0x73e3,	// (0x0008490d) battery_pane_cp01

0x746a,	// (0x00084994) main_camera4_pane_g6_ParamLimits

0x746a,	// (0x00084994) main_camera4_pane_g6

0x7488,	// (0x000849b2) main_camera4_pane_t2_ParamLimits

0x7488,	// (0x000849b2) main_camera4_pane_t2

0x0001,

0xf8dd,	// (0x0008ce07) main_camera4_pane_t_ParamLimits

0xf8dd,	// (0x0008ce07) main_camera4_pane_t

0x750b,	// (0x00084a35) aid_touch_area_vid4_ParamLimits

0x750b,	// (0x00084a35) aid_touch_area_vid4

0x754b,	// (0x00084a75) main_video4_pane_g5_ParamLimits

0x754b,	// (0x00084a75) main_video4_pane_g5

0x7571,	// (0x00084a9b) vid4_progress_pane_ParamLimits

0x7571,	// (0x00084a9b) vid4_progress_pane

0xd7d6,	// (0x0008ad00) main_cset_slider_pane_g18_ParamLimits

0xd7d6,	// (0x0008ad00) main_cset_slider_pane_g18

0xd99a,	// (0x0008aec4) cell_cam4_burst_pane_g2_ParamLimits

0xd99a,	// (0x0008aec4) cell_cam4_burst_pane_g2

0x0001,

0xfa3c,	// (0x0008cf66) cell_cam4_burst_pane_g_ParamLimits

0xfa3c,	// (0x0008cf66) cell_cam4_burst_pane_g

0x82f8,	// (0x00085822) bg_cl_pane_ParamLimits

0x82f8,	// (0x00085822) bg_cl_pane

0x8304,	// (0x0008582e) cl_header_pane_ParamLimits

0x8304,	// (0x0008582e) cl_header_pane

0x8310,	// (0x0008583a) cl_listscroll_pane_ParamLimits

0x8310,	// (0x0008583a) cl_listscroll_pane

0xdb1d,	// (0x0008b047) bg_cl_pane_g1

0xdb25,	// (0x0008b04f) bg_cl_pane_g2

0xdb2d,	// (0x0008b057) bg_cl_pane_g3

0xdb35,	// (0x0008b05f) bg_cl_pane_g4

0xdb3d,	// (0x0008b067) bg_cl_pane_g5

0xdb45,	// (0x0008b06f) bg_cl_pane_g6

0xdb4d,	// (0x0008b077) bg_cl_pane_g7

0xdb55,	// (0x0008b07f) bg_cl_pane_g8

0xdb5d,	// (0x0008b087) bg_cl_pane_g9

0x0008,

0xfa77,	// (0x0008cfa1) bg_cl_pane_g

0x831c,	// (0x00085846) aid_height_cl_leading_ParamLimits

0x831c,	// (0x00085846) aid_height_cl_leading

0x8328,	// (0x00085852) aid_height_cl_text_ParamLimits

0x8328,	// (0x00085852) aid_height_cl_text

0x20cd,	// (0x0007f5f7) bg_cl_header_pane_ParamLimits

0x20cd,	// (0x0007f5f7) bg_cl_header_pane

0x8340,	// (0x0008586a) cl_header_pane_g1_ParamLimits

0x8340,	// (0x0008586a) cl_header_pane_g1

0x834d,	// (0x00085877) cl_header_pane_t1_ParamLimits

0x834d,	// (0x00085877) cl_header_pane_t1

0xdb65,	// (0x0008b08f) cl_list_pane

0xd7a9,	// (0x0008acd3) hc_scroll_pane_cp01

0xad04,	// (0x0008822e) bg_cl_header_pane_g1

0xd681,	// (0x0008abab) bg_cl_header_pane_g2

0xad24,	// (0x0008824e) bg_cl_header_pane_g3

0xd691,	// (0x0008abbb) bg_cl_header_pane_g4

0xd689,	// (0x0008abb3) bg_cl_header_pane_g5

0xd8b5,	// (0x0008addf) bg_cl_header_pane_g6

0xd6b3,	// (0x0008abdd) bg_cl_header_pane_g7

0xd6bb,	// (0x0008abe5) bg_cl_header_pane_g8

0xd6a1,	// (0x0008abcb) bg_cl_header_pane_g9

0x0008,

0xfa8a,	// (0x0008cfb4) bg_cl_header_pane_g

0x835f,	// (0x00085889) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x835f,	// (0x00085889) hc_cl_list_double_graphic_heading_pane

0x836f,	// (0x00085899) hc_cl_list_single_graphic_pane_ParamLimits

0x836f,	// (0x00085899) hc_cl_list_single_graphic_pane

0x8381,	// (0x000858ab) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x8381,	// (0x000858ab) hc_cl_list_single_graphic_pane_g1

0x838d,	// (0x000858b7) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x838d,	// (0x000858b7) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa9d,	// (0x0008cfc7) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa9d,	// (0x0008cfc7) hc_cl_list_single_graphic_pane_g

0x83a1,	// (0x000858cb) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x83a1,	// (0x000858cb) hc_cl_list_single_graphic_pane_t1

0x8381,	// (0x000858ab) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x8381,	// (0x000858ab) hc_cl_list_double_graphic_heading_pane_g1

0x83b6,	// (0x000858e0) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x83b6,	// (0x000858e0) hc_cl_list_double_graphic_heading_pane_g2

0x83ca,	// (0x000858f4) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x83ca,	// (0x000858f4) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaa2,	// (0x0008cfcc) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaa2,	// (0x0008cfcc) hc_cl_list_double_graphic_heading_pane_g

0x83de,	// (0x00085908) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x83de,	// (0x00085908) hc_cl_list_double_graphic_heading_pane_t1

0x83f3,	// (0x0008591d) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x83f3,	// (0x0008591d) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfaa9,	// (0x0008cfd3) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfaa9,	// (0x0008cfd3) hc_cl_list_double_graphic_heading_pane_t

0x8410,	// (0x0008593a) vid4_progress_pane_g1

0x8422,	// (0x0008594c) vid4_progress_pane_g2

0x4db0,	// (0x000822da) vid4_progress_pane_g3

0x8434,	// (0x0008595e) vid4_progress_pane_g4

0x0004,

0xfaae,	// (0x0008cfd8) vid4_progress_pane_g

0x8452,	// (0x0008597c) vid4_progress_pane_t1

0x8467,	// (0x00085991) vid4_progress_pane_t2

0x0002,

0xfab9,	// (0x0008cfe3) vid4_progress_pane_t

0x8492,	// (0x000859bc) wait_bar_pane_cp07

0xca60,	// (0x00089f8a) blid_firmament_pane_ParamLimits

0xcaa3,	// (0x00089fcd) popup_blid_sat_info2_window_g1

0xcac7,	// (0x00089ff1) popup_blid_sat_info2_window_t3

0xcad5,	// (0x00089fff) popup_blid_sat_info2_window_t4

0xcae3,	// (0x0008a00d) popup_blid_sat_info2_window_t5

0xcaf1,	// (0x0008a01b) popup_blid_sat_info2_window_t6

0xcb01,	// (0x0008a02b) popup_blid_sat_info2_window_t7

0xcb0f,	// (0x0008a039) popup_blid_sat_info2_window_t8

0xcb1d,	// (0x0008a047) popup_blid_sat_info2_window_t9

0xcb2b,	// (0x0008a055) popup_blid_sat_info2_window_t10

0xcbf3,	// (0x0008a11d) aid_firma_cardinal_ParamLimits

0xcc07,	// (0x0008a131) blid_firmament_pane_t1_ParamLimits

0xcc1e,	// (0x0008a148) blid_firmament_pane_t2_ParamLimits

0xcc35,	// (0x0008a15f) blid_firmament_pane_t3_ParamLimits

0xcc4c,	// (0x0008a176) blid_firmament_pane_t4_ParamLimits

0xf6d3,	// (0x0008cbfd) blid_firmament_pane_t_ParamLimits

0xcc63,	// (0x0008a18d) blid_sat_info_pane_ParamLimits

0xa8cd,	// (0x00087df7) main_cam_set_pane_ParamLimits

0x69ef,	// (0x00083f19) aid_size_cell_colour_35_ParamLimits

0x6a09,	// (0x00083f33) aid_size_cell_colour_112_ParamLimits

0x6a20,	// (0x00083f4a) aid_size_cell_effect_ParamLimits

0xa8cd,	// (0x00087df7) bg_tb_trans_pane_cp02_ParamLimits

0xb03a,	// (0x00088564) heading_imed_pane_ParamLimits

0x6a3a,	// (0x00083f64) listscroll_imed_pane_ParamLimits

0xbe44,	// (0x0008936e) popup_call2_audio_first_window_g5_ParamLimits

0xbe44,	// (0x0008936e) popup_call2_audio_first_window_g5

0x714c,	// (0x00084676) aid_size_touch_image3_arrow_left_ParamLimits

0x714c,	// (0x00084676) aid_size_touch_image3_arrow_left

0x7162,	// (0x0008468c) aid_size_touch_image3_arrow_right_ParamLimits

0x7162,	// (0x0008468c) aid_size_touch_image3_arrow_right

0x847d,	// (0x000859a7) vid4_progress_pane_t3

0x6ce8,	// (0x00084212) main_hwr_training_symbol_option_pane_ParamLimits

0x6ce8,	// (0x00084212) main_hwr_training_symbol_option_pane

0xd467,	// (0x0008a991) popup_hwr_training_preview_window_ParamLimits

0xd467,	// (0x0008a991) popup_hwr_training_preview_window

0x6d49,	// (0x00084273) hwr_training_navi_pane_g5_ParamLimits

0x6d49,	// (0x00084273) hwr_training_navi_pane_g5

0xd66f,	// (0x0008ab99) popup_char_count_window

0x20cd,	// (0x0007f5f7) bg_popup_sub_pane_cp20_ParamLimits

0x7f6f,	// (0x00085499) list_vitu2_match_list_pane_ParamLimits

0x7f7b,	// (0x000854a5) vitu2_page_scroll_pane_ParamLimits

0x7f7b,	// (0x000854a5) vitu2_page_scroll_pane

0xdb6e,	// (0x0008b098) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdb6e,	// (0x0008b098) list_single_hwr_training_symbol_option_pane

0xdb81,	// (0x0008b0ab) list_single_hwr_training_symbol_option_pane_g1

0xdb89,	// (0x0008b0b3) list_single_hwr_training_symbol_option_pane_t1

0xdb97,	// (0x0008b0c1) bg_button_pane_cp023

0xdba0,	// (0x0008b0ca) bg_button_pane_cp024

0x84d2,	// (0x000859fc) vitu2_page_scroll_pane_g1

0x84da,	// (0x00085a04) vitu2_page_scroll_pane_g2

0x0001,

0xfac0,	// (0x0008cfea) vitu2_page_scroll_pane_g

0x84e4,	// (0x00085a0e) vitu2_page_scroll_pane_t1

0xc9c0,	// (0x00089eea) popup_char_count_window_g1

0xdbd3,	// (0x0008b0fd) popup_char_count_window_g2

0xdbdc,	// (0x0008b106) popup_char_count_window_g3

0x0002,

0xfac5,	// (0x0008cfef) popup_char_count_window_g

0xdbe5,	// (0x0008b10f) popup_char_count_window_t1

0xa149,	// (0x00087673) main_vded2_pane

0xd164,	// (0x0008a68e) aid_size_cell_imed_line

0xd16e,	// (0x0008a698) grid_imed_line_width_pane

0x75e5,	// (0x00084b0f) vid4_indicators_pane_g4

0xdbf3,	// (0x0008b11d) cell_imed_line_width_pane_ParamLimits

0xdbf3,	// (0x0008b11d) cell_imed_line_width_pane

0xdc09,	// (0x0008b133) cell_imed_line_width_pane_g1

0xcff5,	// (0x0008a51f) cell_imed_line_width_pane_g2

0x0001,

0xfacc,	// (0x0008cff6) cell_imed_line_width_pane_g

0x84f3,	// (0x00085a1d) main_vded2_pane_g1_ParamLimits

0x84f3,	// (0x00085a1d) main_vded2_pane_g1

0x8502,	// (0x00085a2c) main_vded2_pane_g2_ParamLimits

0x8502,	// (0x00085a2c) main_vded2_pane_g2

0x0001,

0xfad1,	// (0x0008cffb) main_vded2_pane_g_ParamLimits

0xfad1,	// (0x0008cffb) main_vded2_pane_g

0x8510,	// (0x00085a3a) vded2_slider_pane_ParamLimits

0x8510,	// (0x00085a3a) vded2_slider_pane

0x851d,	// (0x00085a47) aid_size_touch_vded2_end

0x8527,	// (0x00085a51) aid_size_touch_vded2_playhead

0xdc12,	// (0x0008b13c) aid_size_touch_vded2_start

0xdc1a,	// (0x0008b144) vded2_slider_bg_pane

0xdc23,	// (0x0008b14d) vded2_slider_pane_g1

0xdc2c,	// (0x0008b156) vded2_slider_pane_g2

0x852f,	// (0x00085a59) vded2_slider_pane_g3

0x0002,

0xfad6,	// (0x0008d000) vded2_slider_pane_g

0xda14,	// (0x0008af3e) vded2_slider_bg_pane_g1

0xda1d,	// (0x0008af47) vded2_slider_bg_pane_g2

0xda26,	// (0x0008af50) vded2_slider_bg_pane_g3

0x0002,

0xf7a3,	// (0x0008cccd) vded2_slider_bg_pane_g

0x4dc8,	// (0x000822f2) aid_postcard_touch_down_pane_ParamLimits

0x4dc8,	// (0x000822f2) aid_postcard_touch_down_pane

0x4dd8,	// (0x00082302) aid_postcard_touch_up_pane_ParamLimits

0x4dd8,	// (0x00082302) aid_postcard_touch_up_pane

0xa149,	// (0x00087673) main_blid2_pane

0xc830,	// (0x00089d5a) popup_blid2_search_window

0xa149,	// (0x00087673) blid2_gps_pane

0xa149,	// (0x00087673) blid2_navig_pane

0xa149,	// (0x00087673) blid2_search_pane

0xa149,	// (0x00087673) blid2_tripm_pane

0x8538,	// (0x00085a62) blid2_search_pane_g1_ParamLimits

0x8538,	// (0x00085a62) blid2_search_pane_g1

0x8544,	// (0x00085a6e) blid2_search_pane_t1_ParamLimits

0x8544,	// (0x00085a6e) blid2_search_pane_t1

0x8556,	// (0x00085a80) aid_size_cell_blid2_gps_ParamLimits

0x8556,	// (0x00085a80) aid_size_cell_blid2_gps

0x8566,	// (0x00085a90) blid2_gps_pane_g1_ParamLimits

0x8566,	// (0x00085a90) blid2_gps_pane_g1

0x8572,	// (0x00085a9c) grid_blid2_satellite_pane_ParamLimits

0x8572,	// (0x00085a9c) grid_blid2_satellite_pane

0x8580,	// (0x00085aaa) blid2_navig_pane_g1_ParamLimits

0x8580,	// (0x00085aaa) blid2_navig_pane_g1

0x858c,	// (0x00085ab6) blid2_navig_pane_t1_ParamLimits

0x858c,	// (0x00085ab6) blid2_navig_pane_t1

0x859e,	// (0x00085ac8) blid2_navig_pane_t2_ParamLimits

0x859e,	// (0x00085ac8) blid2_navig_pane_t2

0x0001,

0xfadd,	// (0x0008d007) blid2_navig_pane_t_ParamLimits

0xfadd,	// (0x0008d007) blid2_navig_pane_t

0x85b0,	// (0x00085ada) blid2_navig_ring_pane_ParamLimits

0x85b0,	// (0x00085ada) blid2_navig_ring_pane

0x85c0,	// (0x00085aea) blid2_speed_pane_ParamLimits

0x85c0,	// (0x00085aea) blid2_speed_pane

0x85cc,	// (0x00085af6) blid2_tripm_pane_g1_ParamLimits

0x85cc,	// (0x00085af6) blid2_tripm_pane_g1

0x85dc,	// (0x00085b06) blid2_tripm_pane_g2_ParamLimits

0x85dc,	// (0x00085b06) blid2_tripm_pane_g2

0x85e8,	// (0x00085b12) blid2_tripm_pane_g3_ParamLimits

0x85e8,	// (0x00085b12) blid2_tripm_pane_g3

0x85f4,	// (0x00085b1e) blid2_tripm_pane_g4_ParamLimits

0x85f4,	// (0x00085b1e) blid2_tripm_pane_g4

0x8600,	// (0x00085b2a) blid2_tripm_pane_g5_ParamLimits

0x8600,	// (0x00085b2a) blid2_tripm_pane_g5

0x0005,

0xfae2,	// (0x0008d00c) blid2_tripm_pane_g_ParamLimits

0xfae2,	// (0x0008d00c) blid2_tripm_pane_g

0x861c,	// (0x00085b46) blid2_tripm_pane_t1_ParamLimits

0x861c,	// (0x00085b46) blid2_tripm_pane_t1

0x862e,	// (0x00085b58) blid2_tripm_pane_t2_ParamLimits

0x862e,	// (0x00085b58) blid2_tripm_pane_t2

0x8640,	// (0x00085b6a) blid2_tripm_pane_t3_ParamLimits

0x8640,	// (0x00085b6a) blid2_tripm_pane_t3

0x0003,

0xfaef,	// (0x0008d019) blid2_tripm_pane_t_ParamLimits

0xfaef,	// (0x0008d019) blid2_tripm_pane_t

0x8672,	// (0x00085b9c) cell_blid2_satellite_pane_ParamLimits

0x8672,	// (0x00085b9c) cell_blid2_satellite_pane

0x8690,	// (0x00085bba) cell_blid2_satellite_pane_g1

0xdc34,	// (0x0008b15e) cell_blid2_satellite_pane_t1

0xcc73,	// (0x0008a19d) blid2_speed_pane_g1

0xdc42,	// (0x0008b16c) blid2_speed_pane_t1

0xdc50,	// (0x0008b17a) blid2_speed_pane_t2

0x0001,

0xfaf8,	// (0x0008d022) blid2_speed_pane_t

0xcc73,	// (0x0008a19d) blid2_navig_ring_pane_g1

0x8699,	// (0x00085bc3) blid2_navig_ring_pane_g2

0x86a1,	// (0x00085bcb) blid2_navig_ring_pane_g3

0x86a9,	// (0x00085bd3) blid2_navig_ring_pane_g4

0x86b1,	// (0x00085bdb) blid2_navig_ring_pane_g5

0x0004,

0xfafd,	// (0x0008d027) blid2_navig_ring_pane_g

0xa149,	// (0x00087673) bg_popup_window_pane_cp011

0xdc5e,	// (0x0008b188) popup_blid2_search_window_g1

0xdc66,	// (0x0008b190) popup_blid2_search_window_t1

0xdc74,	// (0x0008b19e) popup_blid2_search_window_t2

0x0001,

0xfb08,	// (0x0008d032) popup_blid2_search_window_t

0xac13,	// (0x0008813d) main_browser_pane_g1

0xa8fb,	// (0x00087e25) main_browser_pane_ParamLimits

0xa8cd,	// (0x00087df7) bg_button_pane_cp011_ParamLimits

0x7858,	// (0x00084d82) cell_vitu2_function_pane_g1_ParamLimits

0xc822,	// (0x00089d4c) bg_popup_sub_pane_cp22_ParamLimits

0x0fec,	// (0x0007e516) input_focus_pane_cp08_ParamLimits

0x80f7,	// (0x00085621) popup_vitu2_query_button_pane_ParamLimits

0x80f7,	// (0x00085621) popup_vitu2_query_button_pane

0x1003,	// (0x0007e52d) popup_vitu2_query_input_button_pane

0xd8f0,	// (0x0008ae1a) popup_vitu2_query_window_g1_ParamLimits

0x100d,	// (0x0007e537) popup_vitu2_query_window_g2_ParamLimits

0xfa10,	// (0x0008cf3a) popup_vitu2_query_window_g_ParamLimits

0xa149,	// (0x00087673) bg_button_pane_cp026

0x86b9,	// (0x00085be3) popup_vitu2_query_input_button_pane_g1

0xa149,	// (0x00087673) bg_button_pane_cp025

0xdc82,	// (0x0008b1ac) popup_vitu2_query_button_pane_t1

0x5f69,	// (0x00083493) main_mp3_pane_t6

0x5f79,	// (0x000834a3) popup_slider_window_cp01

0x74c0,	// (0x000849ea) cam4_battery_pane

0x759e,	// (0x00084ac8) cam4_battery_pane_cp02

0x8408,	// (0x00085932) cam4_battery_pane_cp01

0x8408,	// (0x00085932) cam4_battery_pane_cp03

0xcc73,	// (0x0008a19d) cam4_battery_pane_g1

0xd6a9,	// (0x0008abd3) cam4_battery_pane_g2

0x0001,

0xfb0d,	// (0x0008d037) cam4_battery_pane_g

0xcb39,	// (0x0008a063) popup_blid_sat_info2_window_t11

0x4704,	// (0x00081c2e) aid_size_touch_mv_arrow_left_ParamLimits

0x472f,	// (0x00081c59) aid_size_touch_mv_arrow_right_ParamLimits

0xb35d,	// (0x00088887) navi_pane_g1_ParamLimits

0x476e,	// (0x00081c98) navi_pane_g2_ParamLimits

0x479c,	// (0x00081cc6) navi_pane_g3_ParamLimits

0xf3e5,	// (0x0008c90f) navi_pane_g_ParamLimits

0x47f6,	// (0x00081d20) navi_pane_mv_t1_ParamLimits

0x6a46,	// (0x00083f70) grid_imed_effect_pane_ParamLimits

0x321a,	// (0x00080744) aid_placing_vt_slider_lsc

0xab5e,	// (0x00088088) aid_placing_vt_slider_prt

0xa8cd,	// (0x00087df7) bg_tb_trans_pane_cp01_ParamLimits

0xcdc3,	// (0x0008a2ed) popup_image_details_window_g1_ParamLimits

0xcdd6,	// (0x0008a300) popup_image_details_window_g2_ParamLimits

0xcdeb,	// (0x0008a315) popup_image_details_window_g3_ParamLimits

0xcdeb,	// (0x0008a315) popup_image_details_window_g3

0xf718,	// (0x0008cc42) popup_image_details_window_g_ParamLimits

0xcdff,	// (0x0008a329) popup_image_details_window_t1_ParamLimits

0xce11,	// (0x0008a33b) popup_image_details_window_t2_ParamLimits

0xce2a,	// (0x0008a354) popup_image_details_window_t3_ParamLimits

0xce3e,	// (0x0008a368) popup_image_details_window_t4_ParamLimits

0xce59,	// (0x0008a383) popup_image_details_window_t5_ParamLimits

0xf71f,	// (0x0008cc49) popup_image_details_window_t_ParamLimits

0x8334,	// (0x0008585e) cl_header_name_pane_ParamLimits

0x8334,	// (0x0008585e) cl_header_name_pane

0x86c1,	// (0x00085beb) cl_header_name_pane_t1_ParamLimits

0x86c1,	// (0x00085beb) cl_header_name_pane_t1

0x86d8,	// (0x00085c02) cl_header_name_pane_t2_ParamLimits

0x86d8,	// (0x00085c02) cl_header_name_pane_t2

0x8702,	// (0x00085c2c) cl_header_name_pane_t3_ParamLimits

0x8702,	// (0x00085c2c) cl_header_name_pane_t3

0x0002,

0xfb12,	// (0x0008d03c) cl_header_name_pane_t_ParamLimits

0xfb12,	// (0x0008d03c) cl_header_name_pane_t

0x47c7,	// (0x00081cf1) navi_pane_mv_g2_ParamLimits

0xd649,	// (0x0008ab73) field_vitu2_entry_pane_g1_ParamLimits

0xd655,	// (0x0008ab7f) field_vitu2_entry_pane_g2_ParamLimits

0xd661,	// (0x0008ab8b) field_vitu2_entry_pane_g3_ParamLimits

0xd661,	// (0x0008ab8b) field_vitu2_entry_pane_g3

0xf90f,	// (0x0008ce39) field_vitu2_entry_pane_g_ParamLimits

0x77e3,	// (0x00084d0d) cell_vitu2_itu_pane_g1_ParamLimits

0x77f3,	// (0x00084d1d) cell_vitu2_itu_pane_g2_ParamLimits

0x77f3,	// (0x00084d1d) cell_vitu2_itu_pane_g2

0x0001,

0xf91b,	// (0x0008ce45) cell_vitu2_itu_pane_g_ParamLimits

0xf91b,	// (0x0008ce45) cell_vitu2_itu_pane_g

0xa8cd,	// (0x00087df7) bg_vkb2_func_pane_cp05_ParamLimits

0xa8cd,	// (0x00087df7) bg_vkb2_func_pane_cp05

0xa8cd,	// (0x00087df7) bg_vkb2_func_pane_cp03

0xa8cd,	// (0x00087df7) bg_vkb2_func_pane_cp04

0xa8cd,	// (0x00087df7) bg_vkb2_func_pane_cp10_ParamLimits

0xa8cd,	// (0x00087df7) bg_vkb2_func_pane_cp10

0x11c2,	// (0x0007e6ec) bg_vkb2_func_pane_cp08

0x82de,	// (0x00085808) bg_vkb2_func_pane_cp06

0x82ec,	// (0x00085816) bg_vkb2_func_pane_cp07

0xdba9,	// (0x0008b0d3) bg_vkb2_func_pane_cp11_ParamLimits

0xdba9,	// (0x0008b0d3) bg_vkb2_func_pane_cp11

0xdbbe,	// (0x0008b0e8) bg_vkb2_func_pane_cp12_ParamLimits

0xdbbe,	// (0x0008b0e8) bg_vkb2_func_pane_cp12

0xa149,	// (0x00087673) bg_vkb2_func_pane_cp09

0xd681,	// (0x0008abab) bg_vkb2_func_pane_g1

0xad24,	// (0x0008824e) bg_vkb2_func_pane_g2

0xd689,	// (0x0008abb3) bg_vkb2_func_pane_g3

0xd691,	// (0x0008abbb) bg_vkb2_func_pane_g4

0xd8b5,	// (0x0008addf) bg_vkb2_func_pane_g5

0xd6b3,	// (0x0008abdd) bg_vkb2_func_pane_g6

0xd6bb,	// (0x0008abe5) bg_vkb2_func_pane_g7

0xd6a1,	// (0x0008abcb) bg_vkb2_func_pane_g8

0xad04,	// (0x0008822e) bg_vkb2_func_pane_g9

0x0008,

0xfb19,	// (0x0008d043) bg_vkb2_func_pane_g

0x860e,	// (0x00085b38) blid2_tripm_pane_g6_ParamLimits

0x860e,	// (0x00085b38) blid2_tripm_pane_g6

0xd51f,	// (0x0008aa49) mp4_progress_pane_g1

0x8666,	// (0x00085b90) blid2_tripm_values_pane_ParamLimits

0x8666,	// (0x00085b90) blid2_tripm_values_pane

0x8727,	// (0x00085c51) blid2_tripm_values_pane_t1

0x8735,	// (0x00085c5f) blid2_tripm_values_pane_t2

0x8743,	// (0x00085c6d) blid2_tripm_values_pane_t3

0x8751,	// (0x00085c7b) blid2_tripm_values_pane_t4

0x875f,	// (0x00085c89) blid2_tripm_values_pane_t5

0x876d,	// (0x00085c97) blid2_tripm_values_pane_t6

0x877b,	// (0x00085ca5) blid2_tripm_values_pane_t7

0x8789,	// (0x00085cb3) blid2_tripm_values_pane_t8

0x8797,	// (0x00085cc1) blid2_tripm_values_pane_t9

0x0008,

0xfb2c,	// (0x0008d056) blid2_tripm_values_pane_t

0x3258,	// (0x00080782) call_video_pane_t1_ParamLimits

0x3275,	// (0x0008079f) call_video_pane_t2_ParamLimits

0xf26e,	// (0x0008c798) call_video_pane_t_ParamLimits

0x0db7,	// (0x0007e2e1) msg_header_pane_g1_ParamLimits

0xb588,	// (0x00088ab2) msg_header_pane_g2_ParamLimits

0xb588,	// (0x00088ab2) msg_header_pane_g2

0x0001,

0xf488,	// (0x0008c9b2) msg_header_pane_g_ParamLimits

0xf488,	// (0x0008c9b2) msg_header_pane_g

0xa8fb,	// (0x00087e25) main_clock2_pane_ParamLimits

0x67d5,	// (0x00083cff) grid_clock2_toolbar_pane_ParamLimits

0x67d5,	// (0x00083cff) grid_clock2_toolbar_pane

0x67d5,	// (0x00083cff) listscroll_clock2_pane_ParamLimits

0x67d5,	// (0x00083cff) listscroll_clock2_pane

0x687d,	// (0x00083da7) main_clock2_pane_t3_ParamLimits

0x687d,	// (0x00083da7) main_clock2_pane_t3

0x688f,	// (0x00083db9) main_clock2_pane_t4_ParamLimits

0x688f,	// (0x00083db9) main_clock2_pane_t4

0xdc90,	// (0x0008b1ba) cell_clock2_toolbar_pane

0xdc98,	// (0x0008b1c2) cell_clock2_toolbar_pane_cp01

0xdc98,	// (0x0008b1c2) cell_clock2_toolbar_pane_cp02

0xdca0,	// (0x0008b1ca) cell_clock2_toolbar_pane_cp03

0xdca8,	// (0x0008b1d2) list_clock2_pane

0xb2c3,	// (0x000887ed) scroll_pane_cp10

0xdcb0,	// (0x0008b1da) list_single_clock2_pane_ParamLimits

0xdcb0,	// (0x0008b1da) list_single_clock2_pane

0xb40b,	// (0x00088935) list_highlight_pane_cp08

0xdcbd,	// (0x0008b1e7) list_single_clock2_pane_t1

0xdccb,	// (0x0008b1f5) list_single_clock2_pane_t2

0x0001,

0xfb3f,	// (0x0008d069) list_single_clock2_pane_t

0xa149,	// (0x00087673) bg_button_pane_cp10

0xdcd9,	// (0x0008b203) cell_clock2_toolbar_pane_g1

0x4d2a,	// (0x00082254) aid_main_viewer_pane_g1_ParamLimits

0x4d2a,	// (0x00082254) aid_main_viewer_pane_g1

0x4d36,	// (0x00082260) aid_main_viewer_pane_g2_ParamLimits

0x4d36,	// (0x00082260) aid_main_viewer_pane_g2

0x4d42,	// (0x0008226c) aid_main_viewer_pane_g3_ParamLimits

0x4d42,	// (0x0008226c) aid_main_viewer_pane_g3

0x4d53,	// (0x0008227d) aid_main_viewer_pane_g4_ParamLimits

0x4d53,	// (0x0008227d) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x0008c9c3) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x0008c9c3) aid_main_viewer_pane_g

0x54dd,	// (0x00082a07) main_calc_pane_ParamLimits

0x54ea,	// (0x00082a14) main_dialer2_pane_ParamLimits

0xa149,	// (0x00087673) main_cam6_pane

0xa149,	// (0x00087673) main_vid6_pane

0x67e1,	// (0x00083d0b) listscroll_gen_pane_cp06_ParamLimits

0x67e1,	// (0x00083d0b) listscroll_gen_pane_cp06

0x68a1,	// (0x00083dcb) main_clock2_pane_t5_ParamLimits

0x68a1,	// (0x00083dcb) main_clock2_pane_t5

0x68f0,	// (0x00083e1a) aid_call2_pane_cp10_ParamLimits

0x6902,	// (0x00083e2c) aid_call_pane_cp10_ParamLimits

0xb332,	// (0x0008885c) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb332,	// (0x0008885c) popup_clock_analogue_window_cp10_g2_ParamLimits

0x6914,	// (0x00083e3e) popup_clock_analogue_window_cp10_g3_ParamLimits

0x6914,	// (0x00083e3e) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb332,	// (0x0008885c) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7c8,	// (0x0008ccf2) popup_clock_analogue_window_cp10_g_ParamLimits

0x6926,	// (0x00083e50) popup_clock_analogue_window_cp10_t1_ParamLimits

0x70f9,	// (0x00084623) cell_dialer2_keypad_pane_g2_ParamLimits

0x70f9,	// (0x00084623) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ae,	// (0x0008cdd8) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ae,	// (0x0008cdd8) cell_dialer2_keypad_pane_g

0x7115,	// (0x0008463f) cell_dialer2_keypad_pane_t1

0x7b35,	// (0x0008505f) main_cset_text2_pane_ParamLimits

0x7b35,	// (0x0008505f) main_cset_text2_pane

0xdb11,	// (0x0008b03b) area_vitu2_query_pane_g1_ParamLimits

0x10ed,	// (0x0007e617) area_vitu2_query_pane_g2_ParamLimits

0xfa63,	// (0x0008cf8d) area_vitu2_query_pane_g_ParamLimits

0x119e,	// (0x0007e6c8) area_vitu2_query_pane_t7_ParamLimits

0x119e,	// (0x0007e6c8) area_vitu2_query_pane_t7

0x82de,	// (0x00085808) bg_button_pane_cp018_ParamLimits

0x82ec,	// (0x00085816) bg_button_pane_cp021_ParamLimits

0x11c2,	// (0x0007e6ec) bg_button_pane_cp022_ParamLimits

0x11c2,	// (0x0007e6ec) bg_vkb2_func_pane_cp08_ParamLimits

0x82de,	// (0x00085808) bg_vkb2_func_pane_cp06_ParamLimits

0x82ec,	// (0x00085816) bg_vkb2_func_pane_cp07_ParamLimits

0x11d3,	// (0x0007e6fd) input_focus_pane_cp09_ParamLimits

0x87a5,	// (0x00085ccf) cam6_autofocus_pane_ParamLimits

0x87a5,	// (0x00085ccf) cam6_autofocus_pane

0x87c7,	// (0x00085cf1) cam6_image_uncrop_pane_ParamLimits

0x87c7,	// (0x00085cf1) cam6_image_uncrop_pane

0x87f4,	// (0x00085d1e) cam6_indi_pane_ParamLimits

0x87f4,	// (0x00085d1e) cam6_indi_pane

0x880e,	// (0x00085d38) cam6_mode_pane_ParamLimits

0x880e,	// (0x00085d38) cam6_mode_pane

0x8822,	// (0x00085d4c) cam6_timer_pane_ParamLimits

0x8822,	// (0x00085d4c) cam6_timer_pane

0x882e,	// (0x00085d58) cam6_zoom_pane_ParamLimits

0x882e,	// (0x00085d58) cam6_zoom_pane

0x884a,	// (0x00085d74) cam6_mode_pane_g1_ParamLimits

0x884a,	// (0x00085d74) cam6_mode_pane_g1

0x8856,	// (0x00085d80) cam6_mode_pane_g2_ParamLimits

0x8856,	// (0x00085d80) cam6_mode_pane_g2

0x8862,	// (0x00085d8c) cam6_mode_pane_g3_ParamLimits

0x8862,	// (0x00085d8c) cam6_mode_pane_g3

0x886e,	// (0x00085d98) cam6_mode_pane_g4_ParamLimits

0x886e,	// (0x00085d98) cam6_mode_pane_g4

0x0003,

0xfb44,	// (0x0008d06e) cam6_mode_pane_g_ParamLimits

0xfb44,	// (0x0008d06e) cam6_mode_pane_g

0xda2f,	// (0x0008af59) bg_tb_trans_pane_cp08_ParamLimits

0xda2f,	// (0x0008af59) bg_tb_trans_pane_cp08

0xdce1,	// (0x0008b20b) cam6_battery_pane_ParamLimits

0xdce1,	// (0x0008b20b) cam6_battery_pane

0xdcf7,	// (0x0008b221) cam6_indi_pane_g1_ParamLimits

0xdcf7,	// (0x0008b221) cam6_indi_pane_g1

0xdd09,	// (0x0008b233) cam6_indi_pane_g2_ParamLimits

0xdd09,	// (0x0008b233) cam6_indi_pane_g2

0xdd1b,	// (0x0008b245) cam6_indi_pane_g3_ParamLimits

0xdd1b,	// (0x0008b245) cam6_indi_pane_g3

0x0002,

0xfb4d,	// (0x0008d077) cam6_indi_pane_g_ParamLimits

0xfb4d,	// (0x0008d077) cam6_indi_pane_g

0xdd2d,	// (0x0008b257) cam6_indi_pane_t1_ParamLimits

0xdd2d,	// (0x0008b257) cam6_indi_pane_t1

0x761a,	// (0x00084b44) cam6_autofocus_pane_g1

0x7622,	// (0x00084b4c) cam6_autofocus_pane_g2

0x762a,	// (0x00084b54) cam6_autofocus_pane_g3

0x7632,	// (0x00084b5c) cam6_autofocus_pane_g4

0x0003,

0xfb54,	// (0x0008d07e) cam6_autofocus_pane_g

0xdd53,	// (0x0008b27d) cam6_timer_pane_g1

0xdd5b,	// (0x0008b285) cam6_timer_pane_t1

0xdd69,	// (0x0008b293) cam6_zoom_cont_pane

0xdd8c,	// (0x0008b2b6) cam6_zoom_pane_g1

0xdd94,	// (0x0008b2be) cam6_zoom_pane_g2

0x887a,	// (0x00085da4) cam6_zoom_pane_g3

0x0002,

0xfb5d,	// (0x0008d087) cam6_zoom_pane_g

0xcc73,	// (0x0008a19d) cam6_battery_pane_g1

0xcc73,	// (0x0008a19d) cam6_battery_pane_g2

0x0001,

0xf6dc,	// (0x0008cc06) cam6_battery_pane_g

0xdd9c,	// (0x0008b2c6) cam6_zoom_cont_pane_g1

0xdda5,	// (0x0008b2cf) cam6_zoom_cont_pane_g2

0xddae,	// (0x0008b2d8) cam6_zoom_cont_pane_g3

0x0002,

0xfb64,	// (0x0008d08e) cam6_zoom_cont_pane_g

0x8897,	// (0x00085dc1) cam6_mode_pane_cp_ParamLimits

0x8897,	// (0x00085dc1) cam6_mode_pane_cp

0x882e,	// (0x00085d58) cam6_zoom_pane_cp_ParamLimits

0x882e,	// (0x00085d58) cam6_zoom_pane_cp

0x88ab,	// (0x00085dd5) vid6_image_uncrop_cif_pane_ParamLimits

0x88ab,	// (0x00085dd5) vid6_image_uncrop_cif_pane

0x88d7,	// (0x00085e01) vid6_image_uncrop_nhd_pane_ParamLimits

0x88d7,	// (0x00085e01) vid6_image_uncrop_nhd_pane

0x87c7,	// (0x00085cf1) vid6_image_uncrop_vga_pane_ParamLimits

0x87c7,	// (0x00085cf1) vid6_image_uncrop_vga_pane

0x88f6,	// (0x00085e20) vid6_image_uncrop_wvga_pane_ParamLimits

0x88f6,	// (0x00085e20) vid6_image_uncrop_wvga_pane

0x8915,	// (0x00085e3f) vid6_indi_pane_ParamLimits

0x8915,	// (0x00085e3f) vid6_indi_pane

0xda2f,	// (0x0008af59) bg_tb_trans_pane_cp09_ParamLimits

0xda2f,	// (0x0008af59) bg_tb_trans_pane_cp09

0xddc6,	// (0x0008b2f0) cam6_battery_pane_cp_ParamLimits

0xddc6,	// (0x0008b2f0) cam6_battery_pane_cp

0xddd2,	// (0x0008b2fc) vid6_indi_pane_g1_ParamLimits

0xddd2,	// (0x0008b2fc) vid6_indi_pane_g1

0xdde4,	// (0x0008b30e) vid6_indi_pane_g2_ParamLimits

0xdde4,	// (0x0008b30e) vid6_indi_pane_g2

0xddf6,	// (0x0008b320) vid6_indi_pane_g3_ParamLimits

0xddf6,	// (0x0008b320) vid6_indi_pane_g3

0xde0d,	// (0x0008b337) vid6_indi_pane_g4_ParamLimits

0xde0d,	// (0x0008b337) vid6_indi_pane_g4

0xde24,	// (0x0008b34e) vid6_indi_pane_g5_ParamLimits

0xde24,	// (0x0008b34e) vid6_indi_pane_g5

0x0004,

0xfb6b,	// (0x0008d095) vid6_indi_pane_g_ParamLimits

0xfb6b,	// (0x0008d095) vid6_indi_pane_g

0xde3e,	// (0x0008b368) vid6_indi_pane_t1_ParamLimits

0xde3e,	// (0x0008b368) vid6_indi_pane_t1

0xde54,	// (0x0008b37e) vid6_indi_pane_t2_ParamLimits

0xde54,	// (0x0008b37e) vid6_indi_pane_t2

0xde7c,	// (0x0008b3a6) vid6_indi_pane_t3_ParamLimits

0xde7c,	// (0x0008b3a6) vid6_indi_pane_t3

0xdea4,	// (0x0008b3ce) vid6_indi_pane_t4_ParamLimits

0xdea4,	// (0x0008b3ce) vid6_indi_pane_t4

0x0003,

0xfb76,	// (0x0008d0a0) vid6_indi_pane_t_ParamLimits

0xfb76,	// (0x0008d0a0) vid6_indi_pane_t

0xdec8,	// (0x0008b3f2) wait_bar_pane_cp08

0x893a,	// (0x00085e64) main_cset_text2_pane_t1_ParamLimits

0x893a,	// (0x00085e64) main_cset_text2_pane_t1

0x8882,	// (0x00085dac) listscroll_gen_pane_cp06_t1_ParamLimits

0x8882,	// (0x00085dac) listscroll_gen_pane_cp06_t1

0xa149,	// (0x00087673) main_cam6_set_pane

0xcea3,	// (0x0008a3cd) bg_tb_trans_pane_cp06_ParamLimits

0x74c8,	// (0x000849f2) cam4_indicators_pane_g1_ParamLimits

0x74d9,	// (0x00084a03) cam4_indicators_pane_g2_ParamLimits

0xf8eb,	// (0x0008ce15) cam4_indicators_pane_g_ParamLimits

0x74f1,	// (0x00084a1b) cam4_indicators_pane_t1_ParamLimits

0xa8cd,	// (0x00087df7) bg_tb_trans_pane_cp07_ParamLimits

0x75a8,	// (0x00084ad2) vid4_indicators_pane_g1_ParamLimits

0x75be,	// (0x00084ae8) vid4_indicators_pane_g2_ParamLimits

0x75d2,	// (0x00084afc) vid4_indicators_pane_g3_ParamLimits

0x75e5,	// (0x00084b0f) vid4_indicators_pane_g4_ParamLimits

0xf8fd,	// (0x0008ce27) vid4_indicators_pane_g_ParamLimits

0x7603,	// (0x00084b2d) vid4_indicators_pane_t1_ParamLimits

0x8410,	// (0x0008593a) vid4_progress_pane_g1_ParamLimits

0x8422,	// (0x0008594c) vid4_progress_pane_g2_ParamLimits

0x4db0,	// (0x000822da) vid4_progress_pane_g3_ParamLimits

0x8434,	// (0x0008595e) vid4_progress_pane_g4_ParamLimits

0xfaae,	// (0x0008cfd8) vid4_progress_pane_g_ParamLimits

0x8452,	// (0x0008597c) vid4_progress_pane_t1_ParamLimits

0x8467,	// (0x00085991) vid4_progress_pane_t2_ParamLimits

0x847d,	// (0x000859a7) vid4_progress_pane_t3_ParamLimits

0xfab9,	// (0x0008cfe3) vid4_progress_pane_t_ParamLimits

0x8492,	// (0x000859bc) wait_bar_pane_cp07_ParamLimits

0x8961,	// (0x00085e8b) main_cam6_set_pane_g2_ParamLimits

0x8961,	// (0x00085e8b) main_cam6_set_pane_g2

0x896d,	// (0x00085e97) main_cset6_listscroll_pane_ParamLimits

0x896d,	// (0x00085e97) main_cset6_listscroll_pane

0x899a,	// (0x00085ec4) main_cset6_slider_pane_ParamLimits

0x899a,	// (0x00085ec4) main_cset6_slider_pane

0x89a6,	// (0x00085ed0) main_cset6_text2_pane_ParamLimits

0x89a6,	// (0x00085ed0) main_cset6_text2_pane

0xded7,	// (0x0008b401) main_cset6_text_pane

0xdedf,	// (0x0008b409) main_cset_list_pane_copy1_ParamLimits

0xdedf,	// (0x0008b409) main_cset_list_pane_copy1

0xdeef,	// (0x0008b419) scroll_pane_cp028_copy1

0x89b9,	// (0x00085ee3) cset_list_set_pane_copy1

0x89c9,	// (0x00085ef3) aid_position_infowindow_above_copy1

0x89d1,	// (0x00085efb) aid_position_infowindow_below_copy1

0x89d9,	// (0x00085f03) cset_list_set_pane_g1_copy1

0x1212,	// (0x0007e73c) cset_list_set_pane_g3_copy1_ParamLimits

0x1212,	// (0x0007e73c) cset_list_set_pane_g3_copy1

0x1221,	// (0x0007e74b) cset_list_set_pane_t1_copy1_ParamLimits

0x1221,	// (0x0007e74b) cset_list_set_pane_t1_copy1

0xa8cd,	// (0x00087df7) list_highlight_pane_cp021_copy1_ParamLimits

0xa8cd,	// (0x00087df7) list_highlight_pane_cp021_copy1

0xdef8,	// (0x0008b422) cset6_slider_pane_ParamLimits

0xdef8,	// (0x0008b422) cset6_slider_pane

0xdf24,	// (0x0008b44e) main_cset6_slider_pane_g1_ParamLimits

0xdf24,	// (0x0008b44e) main_cset6_slider_pane_g1

0x89e1,	// (0x00085f0b) main_cset6_slider_pane_g2_ParamLimits

0x89e1,	// (0x00085f0b) main_cset6_slider_pane_g2

0xdf4c,	// (0x0008b476) main_cset6_slider_pane_g3_ParamLimits

0xdf4c,	// (0x0008b476) main_cset6_slider_pane_g3

0x8a09,	// (0x00085f33) main_cset6_slider_pane_g4_ParamLimits

0x8a09,	// (0x00085f33) main_cset6_slider_pane_g4

0x8a15,	// (0x00085f3f) main_cset6_slider_pane_g5_ParamLimits

0x8a15,	// (0x00085f3f) main_cset6_slider_pane_g5

0xd7be,	// (0x0008ace8) main_cset6_slider_pane_g7_ParamLimits

0xd7be,	// (0x0008ace8) main_cset6_slider_pane_g7

0xd7ca,	// (0x0008acf4) main_cset6_slider_pane_g8_ParamLimits

0xd7ca,	// (0x0008acf4) main_cset6_slider_pane_g8

0x8a21,	// (0x00085f4b) main_cset6_slider_pane_g9_ParamLimits

0x8a21,	// (0x00085f4b) main_cset6_slider_pane_g9

0x8a2d,	// (0x00085f57) main_cset6_slider_pane_g10_ParamLimits

0x8a2d,	// (0x00085f57) main_cset6_slider_pane_g10

0x8a39,	// (0x00085f63) main_cset6_slider_pane_g11_ParamLimits

0x8a39,	// (0x00085f63) main_cset6_slider_pane_g11

0x8a45,	// (0x00085f6f) main_cset6_slider_pane_g12_ParamLimits

0x8a45,	// (0x00085f6f) main_cset6_slider_pane_g12

0x8a51,	// (0x00085f7b) main_cset6_slider_pane_g13_ParamLimits

0x8a51,	// (0x00085f7b) main_cset6_slider_pane_g13

0x8a5d,	// (0x00085f87) main_cset6_slider_pane_g14_ParamLimits

0x8a5d,	// (0x00085f87) main_cset6_slider_pane_g14

0x8a69,	// (0x00085f93) main_cset6_slider_pane_g15_ParamLimits

0x8a69,	// (0x00085f93) main_cset6_slider_pane_g15

0x8a81,	// (0x00085fab) main_cset6_slider_pane_g16_ParamLimits

0x8a81,	// (0x00085fab) main_cset6_slider_pane_g16

0x8a8d,	// (0x00085fb7) main_cset6_slider_pane_g17_ParamLimits

0x8a8d,	// (0x00085fb7) main_cset6_slider_pane_g17

0x0011,

0xfb7f,	// (0x0008d0a9) main_cset6_slider_pane_g_ParamLimits

0xfb7f,	// (0x0008d0a9) main_cset6_slider_pane_g

0xdf58,	// (0x0008b482) main_cset6_slider_pane_t1_ParamLimits

0xdf58,	// (0x0008b482) main_cset6_slider_pane_t1

0x8ab1,	// (0x00085fdb) main_cset6_slider_pane_t2_ParamLimits

0x8ab1,	// (0x00085fdb) main_cset6_slider_pane_t2

0x8adc,	// (0x00086006) main_cset6_slider_pane_t3_ParamLimits

0x8adc,	// (0x00086006) main_cset6_slider_pane_t3

0x8b07,	// (0x00086031) main_cset6_slider_pane_t4_ParamLimits

0x8b07,	// (0x00086031) main_cset6_slider_pane_t4

0x8b32,	// (0x0008605c) main_cset6_slider_pane_t5_ParamLimits

0x8b32,	// (0x0008605c) main_cset6_slider_pane_t5

0xdf99,	// (0x0008b4c3) main_cset6_slider_pane_t7_ParamLimits

0xdf99,	// (0x0008b4c3) main_cset6_slider_pane_t7

0x8b5d,	// (0x00086087) main_cset6_slider_pane_t8_ParamLimits

0x8b5d,	// (0x00086087) main_cset6_slider_pane_t8

0x8b81,	// (0x000860ab) main_cset6_slider_pane_t9_ParamLimits

0x8b81,	// (0x000860ab) main_cset6_slider_pane_t9

0x8ba5,	// (0x000860cf) main_cset6_slider_pane_t10_ParamLimits

0x8ba5,	// (0x000860cf) main_cset6_slider_pane_t10

0x8bc9,	// (0x000860f3) main_cset6_slider_pane_t11_ParamLimits

0x8bc9,	// (0x000860f3) main_cset6_slider_pane_t11

0xdfcf,	// (0x0008b4f9) main_cset6_slider_pane_t14_ParamLimits

0xdfcf,	// (0x0008b4f9) main_cset6_slider_pane_t14

0xe008,	// (0x0008b532) main_cset6_slider_pane_t15_ParamLimits

0xe008,	// (0x0008b532) main_cset6_slider_pane_t15

0x000b,

0xfba4,	// (0x0008d0ce) main_cset6_slider_pane_t_ParamLimits

0xfba4,	// (0x0008d0ce) main_cset6_slider_pane_t

0xdd71,	// (0x0008b29b) cset_slider_pane_g1_copy1

0xdd7a,	// (0x0008b2a4) cset_slider_pane_g2_copy1

0xdd83,	// (0x0008b2ad) cset_slider_pane_g3_copy1

0xa149,	// (0x00087673) bg_popup_sub_pane_cp011_copy1

0xe041,	// (0x0008b56b) main_cset_text_pane_g1_copy1

0xd904,	// (0x0008ae2e) main_cset_text_pane_t1_copy1

0xd912,	// (0x0008ae3c) main_cset_text_pane_t2_copy1

0xd920,	// (0x0008ae4a) main_cset_text_pane_t3_copy1

0xd92e,	// (0x0008ae58) main_cset_text_pane_t4_copy1

0xd93c,	// (0x0008ae66) main_cset_text_pane_t5_copy1

0xe049,	// (0x0008b573) main_cset_text_pane_t6_copy1

0xe057,	// (0x0008b581) main_cset_text_pane_t7_copy1

0x8c08,	// (0x00086132) main_cset_text2_pane_t1_copy1

0xa8cd,	// (0x00087df7) main_ncimui_pane

0x552f,	// (0x00082a59) popup_query_ncimui_window_ParamLimits

0x552f,	// (0x00082a59) popup_query_ncimui_window

0x60a7,	// (0x000835d1) field_cale_ev2_pane_g4_ParamLimits

0x60a7,	// (0x000835d1) field_cale_ev2_pane_g4

0x6e0f,	// (0x00084339) cell_video_dialer_keypad_pane_g2_ParamLimits

0x6e0f,	// (0x00084339) cell_video_dialer_keypad_pane_g2

0x0001,

0xf889,	// (0x0008cdb3) cell_video_dialer_keypad_pane_g_ParamLimits

0xf889,	// (0x0008cdb3) cell_video_dialer_keypad_pane_g

0x6e27,	// (0x00084351) cell_video_dialer_keypad_pane_t1

0xa149,	// (0x00087673) bg_popup_window_pane_cp012

0xb1af,	// (0x000886d9) heading_pane_cp06

0xe083,	// (0x0008b5ad) ncim_query_content_pane

0xa149,	// (0x00087673) bg_popup_heading_pane_cp01

0xe08b,	// (0x0008b5b5) ncim_heading_pane_t1

0xe099,	// (0x0008b5c3) ncim_indicator_popup_pane

0xe0ab,	// (0x0008b5d5) ncim_query_button_pane

0xe0c1,	// (0x0008b5eb) ncim_query_content_pane_t1

0xe0d3,	// (0x0008b5fd) ncim_query_content_pane_t2

0x0005,

0xfbe8,	// (0x0008d112) ncim_query_content_pane_t

0xe10d,	// (0x0008b637) ncim_query_list_pane

0xe11f,	// (0x0008b649) ncim_query_popup_pane

0xe099,	// (0x0008b5c3) ncim_indicator_popup_pane_ParamLimits

0x8d64,	// (0x0008628e) ncim_query_content_pane_g1_ParamLimits

0x8d64,	// (0x0008628e) ncim_query_content_pane_g1

0xe0c1,	// (0x0008b5eb) ncim_query_content_pane_t1_ParamLimits

0xe0d3,	// (0x0008b5fd) ncim_query_content_pane_t2_ParamLimits

0x8d70,	// (0x0008629a) ncim_query_content_pane_t3_ParamLimits

0x8d70,	// (0x0008629a) ncim_query_content_pane_t3

0x8d8d,	// (0x000862b7) ncim_query_content_pane_t4_ParamLimits

0x8d8d,	// (0x000862b7) ncim_query_content_pane_t4

0x8daa,	// (0x000862d4) ncim_query_content_pane_t5_ParamLimits

0x8daa,	// (0x000862d4) ncim_query_content_pane_t5

0xe0e5,	// (0x0008b60f) ncim_query_content_pane_t6_ParamLimits

0xe0e5,	// (0x0008b60f) ncim_query_content_pane_t6

0xfbe8,	// (0x0008d112) ncim_query_content_pane_t_ParamLimits

0xe10d,	// (0x0008b637) ncim_query_list_pane_ParamLimits

0xe11f,	// (0x0008b649) ncim_query_popup_pane_ParamLimits

0xe133,	// (0x0008b65d) wait_bar_pane_cp04

0xa149,	// (0x00087673) input_focus_pane_cp011

0xe13b,	// (0x0008b665) ncim_query_popup_pane_t1

0xe149,	// (0x0008b673) ncim_list_query_list_pane_ParamLimits

0xe149,	// (0x0008b673) ncim_list_query_list_pane

0xa149,	// (0x00087673) bg_button_pane_cp027

0xe15c,	// (0x0008b686) ncim_query_button_pane_g1

0xa149,	// (0x00087673) list_highlight_pane_cp012

0xe166,	// (0x0008b690) ncim_list_query_list_pane_g1

0xe16e,	// (0x0008b698) ncim_list_query_list_pane_t1

0x74e5,	// (0x00084a0f) cam4_indicators_pane_g3_ParamLimits

0x74e5,	// (0x00084a0f) cam4_indicators_pane_g3

0x75f1,	// (0x00084b1b) vid4_indicators_pane_g5_ParamLimits

0x75f1,	// (0x00084b1b) vid4_indicators_pane_g5

0x8443,	// (0x0008596d) vid4_progress_pane_g5_ParamLimits

0x8443,	// (0x0008596d) vid4_progress_pane_g5

0x8c3a,	// (0x00086164) main_ncimui_pane_g1

0x8ca6,	// (0x000861d0) ncimui_group_query_pane_ParamLimits

0x8ca6,	// (0x000861d0) ncimui_group_query_pane

0x8d00,	// (0x0008622a) ncimui_list_pane_ParamLimits

0x8d00,	// (0x0008622a) ncimui_list_pane

0x8d27,	// (0x00086251) ncimui_text_pane_ParamLimits

0x8d27,	// (0x00086251) ncimui_text_pane

0x8dc7,	// (0x000862f1) ncimui_text_pane_t1_ParamLimits

0x8dc7,	// (0x000862f1) ncimui_text_pane_t1

0xe17c,	// (0x0008b6a6) ncimui_list_single_graphic_pane_ParamLimits

0xe17c,	// (0x0008b6a6) ncimui_list_single_graphic_pane

0x8de6,	// (0x00086310) ncimui_query_pane_ParamLimits

0x8de6,	// (0x00086310) ncimui_query_pane

0xa149,	// (0x00087673) list_highlight_pane_cp013

0xe18c,	// (0x0008b6b6) ncim_list_query_list_pane_t1_copy1

0xe166,	// (0x0008b690) ncim_list_single_graphic_pane_g1

0xe19a,	// (0x0008b6c4) ncim_query_button_pane_cp01

0xe1a6,	// (0x0008b6d0) ncim_query_entry_pane_ParamLimits

0xe1a6,	// (0x0008b6d0) ncim_query_entry_pane

0xe1b9,	// (0x0008b6e3) ncimui_query_pane_g1

0xe1c5,	// (0x0008b6ef) ncimui_query_pane_t1_ParamLimits

0xe1c5,	// (0x0008b6ef) ncimui_query_pane_t1

0xa8cd,	// (0x00087df7) input_focus_pane_cp012

0xe1de,	// (0x0008b708) ncim_query_entry_pane_t1

0xa8fb,	// (0x00087e25) main_im_pane_ParamLimits

0xa8cd,	// (0x00087df7) main_mobtv_pane_ParamLimits

0xa8cd,	// (0x00087df7) main_mobtv_pane

0x8a99,	// (0x00085fc3) main_cset6_slider_pane_g18_ParamLimits

0x8a99,	// (0x00085fc3) main_cset6_slider_pane_g18

0x8aa5,	// (0x00085fcf) main_cset6_slider_pane_g19_ParamLimits

0x8aa5,	// (0x00085fcf) main_cset6_slider_pane_g19

0xd661,	// (0x0008ab8b) bg_main_mobtv_pane_ParamLimits

0xd661,	// (0x0008ab8b) bg_main_mobtv_pane

0x8df9,	// (0x00086323) main_mobtv_info_pane

0x8e04,	// (0x0008632e) main_mobtv_loading_pane_ParamLimits

0x8e04,	// (0x0008632e) main_mobtv_loading_pane

0xe1f0,	// (0x0008b71a) main_mobtv_pg_channel_list_pane

0xe1fa,	// (0x0008b724) main_mobtv_pg_hdr_pane

0x8e11,	// (0x0008633b) main_mobtv_programe_curr_pane_ParamLimits

0x8e11,	// (0x0008633b) main_mobtv_programe_curr_pane

0x8e1e,	// (0x00086348) main_mobtv_programe_next_pane_ParamLimits

0x8e1e,	// (0x00086348) main_mobtv_programe_next_pane

0xe203,	// (0x0008b72d) popup_mobtv_noti_window

0xcc73,	// (0x0008a19d) main_tv_pg_hdr_pane_g1

0xe20d,	// (0x0008b737) main_tv_pg_hdr_pane_g2

0xe215,	// (0x0008b73f) main_tv_pg_hdr_pane_g3

0xe21d,	// (0x0008b747) main_tv_pg_hdr_pane_g4

0xe225,	// (0x0008b74f) main_tv_pg_hdr_pane_g5

0xe22f,	// (0x0008b759) main_tv_pg_hdr_pane_g6

0xe239,	// (0x0008b763) main_tv_pg_hdr_pane_g7

0xe243,	// (0x0008b76d) main_tv_pg_hdr_pane_g8

0xe24d,	// (0x0008b777) main_tv_pg_hdr_pane_g9

0xe257,	// (0x0008b781) main_tv_pg_hdr_pane_g10

0xe261,	// (0x0008b78b) main_tv_pg_hdr_pane_g11

0x000a,

0xfbf5,	// (0x0008d11f) main_tv_pg_hdr_pane_g

0xe26b,	// (0x0008b795) main_tv_pg_hdr_pane_t1

0xe279,	// (0x0008b7a3) main_tv_pg_hdr_pane_t2

0xe287,	// (0x0008b7b1) main_tv_pg_hdr_pane_t3

0xe297,	// (0x0008b7c1) main_tv_pg_hdr_pane_t4

0xe2a7,	// (0x0008b7d1) main_tv_pg_hdr_pane_t5

0x0004,

0xfc0c,	// (0x0008d136) main_tv_pg_hdr_pane_t

0xe2b7,	// (0x0008b7e1) single_mobtv_pg_channel_pane_ParamLimits

0xe2b7,	// (0x0008b7e1) single_mobtv_pg_channel_pane

0xe2c9,	// (0x0008b7f3) single_mobtv_pg_channel_table_pane

0xe2d2,	// (0x0008b7fc) single_mobtv_pg_channel_thumb_pane

0xe2db,	// (0x0008b805) single_tv_pg_channel_pane_g1

0xe2e4,	// (0x0008b80e) single_tv_pg_channel_pane_g2

0x0001,

0xfc17,	// (0x0008d141) single_tv_pg_channel_pane_g

0xcea3,	// (0x0008a3cd) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xcea3,	// (0x0008a3cd) bg_single_mobtv_pg_channel_thumb_pane

0xe2ed,	// (0x0008b817) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe2ed,	// (0x0008b817) single_mobtv_pg_channel_thumb_pane_g1

0xe2fb,	// (0x0008b825) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe2fb,	// (0x0008b825) single_mobtv_pg_channel_thumb_pane_g2

0xe307,	// (0x0008b831) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe307,	// (0x0008b831) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc1c,	// (0x0008d146) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc1c,	// (0x0008d146) single_mobtv_pg_channel_thumb_pane_g

0xe313,	// (0x0008b83d) single_mobtv_pg_channel_thumb_pane_t1

0xe321,	// (0x0008b84b) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc23,	// (0x0008d14d) single_mobtv_pg_channel_thumb_pane_t

0xcc73,	// (0x0008a19d) bg_single_mobtv_pg_channel_table_pane_g1

0xcc73,	// (0x0008a19d) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6dc,	// (0x0008cc06) bg_single_mobtv_pg_channel_table_pane_g

0xe32f,	// (0x0008b859) single_mobtv_pg_channel_table_pane_t1

0xe33d,	// (0x0008b867) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc28,	// (0x0008d152) single_mobtv_pg_channel_table_pane_t

0x8e33,	// (0x0008635d) main_mobtv_info_pane_g1_ParamLimits

0x8e33,	// (0x0008635d) main_mobtv_info_pane_g1

0x8e4f,	// (0x00086379) main_mobtv_info_pane_t1_ParamLimits

0x8e4f,	// (0x00086379) main_mobtv_info_pane_t1

0x8ec7,	// (0x000863f1) main_mobtv_info_pane_t2_ParamLimits

0x8ec7,	// (0x000863f1) main_mobtv_info_pane_t2

0x0002,

0xfc32,	// (0x0008d15c) main_mobtv_info_pane_t_ParamLimits

0xfc32,	// (0x0008d15c) main_mobtv_info_pane_t

0x8f58,	// (0x00086482) wait_bar_pane_cp05

0x8f6a,	// (0x00086494) main_mobtv_loading_pane_g1_ParamLimits

0x8f6a,	// (0x00086494) main_mobtv_loading_pane_g1

0x8f76,	// (0x000864a0) main_mobtv_loading_pane_g2_ParamLimits

0x8f76,	// (0x000864a0) main_mobtv_loading_pane_g2

0x8f82,	// (0x000864ac) main_mobtv_loading_pane_g3_ParamLimits

0x8f82,	// (0x000864ac) main_mobtv_loading_pane_g3

0x0002,

0xfc39,	// (0x0008d163) main_mobtv_loading_pane_g_ParamLimits

0xfc39,	// (0x0008d163) main_mobtv_loading_pane_g

0xe34b,	// (0x0008b875) main_mobtv_loading_pane_t1_ParamLimits

0xe34b,	// (0x0008b875) main_mobtv_loading_pane_t1

0xe363,	// (0x0008b88d) main_mobtv_loading_pane_t2_ParamLimits

0xe363,	// (0x0008b88d) main_mobtv_loading_pane_t2

0x0001,

0xfc40,	// (0x0008d16a) main_mobtv_loading_pane_t_ParamLimits

0xfc40,	// (0x0008d16a) main_mobtv_loading_pane_t

0x8f90,	// (0x000864ba) wait_bar_pane_cp06_ParamLimits

0x8f90,	// (0x000864ba) wait_bar_pane_cp06

0xe387,	// (0x0008b8b1) main_mobtv_programe_curr_pane_t1

0xe395,	// (0x0008b8bf) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc45,	// (0x0008d16f) main_mobtv_programe_curr_pane_t

0xe3a3,	// (0x0008b8cd) main_mobtv_programe_next_pane_t1

0xe3b1,	// (0x0008b8db) main_mobtv_programe_next_pane_t2

0xe3bf,	// (0x0008b8e9) main_mobtv_programe_next_pane_t3

0x0002,

0xfc4a,	// (0x0008d174) main_mobtv_programe_next_pane_t

0xa149,	// (0x00087673) bg_popup_mobtv_noti_window_pane

0xe3cd,	// (0x0008b8f7) popup_mobtv_noti_window_g1

0xe3d5,	// (0x0008b8ff) popup_mobtv_noti_window_t1

0xe3e3,	// (0x0008b90d) popup_mobtv_noti_window_t2

0x0001,

0xfc51,	// (0x0008d17b) popup_mobtv_noti_window_t

0xcc73,	// (0x0008a19d) bg_popup_mobtv_noti_window_pane_g1

0xa149,	// (0x00087673) sc_clock_pane

0xa149,	// (0x00087673) main_fs_bigclock_pane

0x8654,	// (0x00085b7e) blid2_tripm_pane_t4_ParamLimits

0x8654,	// (0x00085b7e) blid2_tripm_pane_t4

0x8f9c,	// (0x000864c6) sc_clock_pane_g1_ParamLimits

0x8f9c,	// (0x000864c6) sc_clock_pane_g1

0x8faa,	// (0x000864d4) sc_clock_pane_t1_ParamLimits

0x8faa,	// (0x000864d4) sc_clock_pane_t1

0x8fbf,	// (0x000864e9) sc_clock_pane_t2_ParamLimits

0x8fbf,	// (0x000864e9) sc_clock_pane_t2

0x8fd1,	// (0x000864fb) sc_clock_pane_t3_ParamLimits

0x8fd1,	// (0x000864fb) sc_clock_pane_t3

0x0004,

0xfc56,	// (0x0008d180) sc_clock_pane_t_ParamLimits

0xfc56,	// (0x0008d180) sc_clock_pane_t

0x988f,	// (0x00086db9) main_fs_bigclock_indicator_pane_ParamLimits

0x988f,	// (0x00086db9) main_fs_bigclock_indicator_pane

0x9064,	// (0x0008658e) main_fs_bigclock_pane_g1_ParamLimits

0x9064,	// (0x0008658e) main_fs_bigclock_pane_g1

0x989b,	// (0x00086dc5) main_fs_bigclock_pane_t1_ParamLimits

0x989b,	// (0x00086dc5) main_fs_bigclock_pane_t1

0x98ad,	// (0x00086dd7) main_fs_bigclock_pane_t2_ParamLimits

0x98ad,	// (0x00086dd7) main_fs_bigclock_pane_t2

0x98c1,	// (0x00086deb) main_fs_bigclock_pane_t3_ParamLimits

0x98c1,	// (0x00086deb) main_fs_bigclock_pane_t3

0x0002,

0xfe60,	// (0x0008d38a) main_fs_bigclock_pane_t_ParamLimits

0xfe60,	// (0x0008d38a) main_fs_bigclock_pane_t

0xec5b,	// (0x0008c185) main_fs_bigclock_indicator_pane_g1

0xe0b3,	// (0x0008b5dd) ncim_query_content_pane_g2_ParamLimits

0xe0b3,	// (0x0008b5dd) ncim_query_content_pane_g2

0x0001,

0xfbe3,	// (0x0008d10d) ncim_query_content_pane_g_ParamLimits

0xfbe3,	// (0x0008d10d) ncim_query_content_pane_g

0x8fe3,	// (0x0008650d) sc_clock_pane_t4_ParamLimits

0x8fe3,	// (0x0008650d) sc_clock_pane_t4

0xa8cd,	// (0x00087df7) main_radioblah_pane

0xd5ce,	// (0x0008aaf8) cell_call4_button_pane_t1_copy1_ParamLimits

0xd5ce,	// (0x0008aaf8) cell_call4_button_pane_t1_copy1

0x8c56,	// (0x00086180) main_ncimui_pane_t1_ParamLimits

0x8c56,	// (0x00086180) main_ncimui_pane_t1

0x8c70,	// (0x0008619a) main_ncimui_pane_t2_ParamLimits

0x8c70,	// (0x0008619a) main_ncimui_pane_t2

0x0002,

0xfbdc,	// (0x0008d106) main_ncimui_pane_t_ParamLimits

0xfbdc,	// (0x0008d106) main_ncimui_pane_t

0xe556,	// (0x0008ba80) main_radioblah_anim_pane_ParamLimits

0xe556,	// (0x0008ba80) main_radioblah_anim_pane

0xe567,	// (0x0008ba91) main_radioblah_info_pane_ParamLimits

0xe567,	// (0x0008ba91) main_radioblah_info_pane

0xe57b,	// (0x0008baa5) main_radioblah_pane_t1_ParamLimits

0xe57b,	// (0x0008baa5) main_radioblah_pane_t1

0xe597,	// (0x0008bac1) main_radioblah_pane_t2_ParamLimits

0xe597,	// (0x0008bac1) main_radioblah_pane_t2

0x0003,

0xfc77,	// (0x0008d1a1) main_radioblah_pane_t_ParamLimits

0xfc77,	// (0x0008d1a1) main_radioblah_pane_t

0x90b6,	// (0x000865e0) main_radioblah_rocker_ctrl_pane_ParamLimits

0x90b6,	// (0x000865e0) main_radioblah_rocker_ctrl_pane

0xe5df,	// (0x0008bb09) main_radioblah_info_pane_t1_ParamLimits

0xe5df,	// (0x0008bb09) main_radioblah_info_pane_t1

0x90ff,	// (0x00086629) main_radioblah_info_pane_t2_ParamLimits

0x90ff,	// (0x00086629) main_radioblah_info_pane_t2

0x0003,

0xfc80,	// (0x0008d1aa) main_radioblah_info_pane_t_ParamLimits

0xfc80,	// (0x0008d1aa) main_radioblah_info_pane_t

0xcc73,	// (0x0008a19d) main_radioblah_rocker_ctrl_pane_g1

0x91af,	// (0x000866d9) main_radioblah_rocker_ctrl_pane_g2

0x91b7,	// (0x000866e1) main_radioblah_rocker_ctrl_pane_g3

0x91bf,	// (0x000866e9) main_radioblah_rocker_ctrl_pane_g4

0x91c7,	// (0x000866f1) main_radioblah_rocker_ctrl_pane_g5

0x91cf,	// (0x000866f9) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc89,	// (0x0008d1b3) main_radioblah_rocker_ctrl_pane_g

0x8c08,	// (0x00086132) main_cset_text2_pane_t1_copy1_ParamLimits

0x7412,	// (0x0008493c) cam4_image_uncrop_qvga_pane

0x7557,	// (0x00084a81) vid4_image_uncrop_qcif_pane

0x87e6,	// (0x00085d10) cam6_image_uncrop_qvga_pane_ParamLimits

0x87e6,	// (0x00085d10) cam6_image_uncrop_qvga_pane

0xddb6,	// (0x0008b2e0) vid6_image_uncrop_qcif_pane_ParamLimits

0xddb6,	// (0x0008b2e0) vid6_image_uncrop_qcif_pane

0xa149,	// (0x00087673) bg_popup_preview_window_pane_cp03

0xe065,	// (0x0008b58f) list_cset_text2_pane

0xe06d,	// (0x0008b597) main_cset6_text2_pane_g1

0xe075,	// (0x0008b59f) main_cset6_text2_pane_t1

0x91d7,	// (0x00086701) list_cset_text2_pane_t1_ParamLimits

0x91d7,	// (0x00086701) list_cset_text2_pane_t1

0xa8cd,	// (0x00087df7) main_radioblah_pane_ParamLimits

0x8f44,	// (0x0008646e) main_mobtv_info_pane_t3_ParamLimits

0x8f44,	// (0x0008646e) main_mobtv_info_pane_t3

0x90a4,	// (0x000865ce) main_radioblah_pane_g1

0x90cf,	// (0x000865f9) main_radioblah_info_pane_g1

0x9154,	// (0x0008667e) main_radioblah_info_pane_t3_ParamLimits

0x9154,	// (0x0008667e) main_radioblah_info_pane_t3

0x4254,	// (0x0008177e) highlight_cell_cale_month_pane_ParamLimits

0x4254,	// (0x0008177e) highlight_cell_cale_month_pane

0xa149,	// (0x00087673) main_phob_fisheye_pane

0xcf7f,	// (0x0008a4a9) scroll_pane_cp0031_ParamLimits

0xcf7f,	// (0x0008a4a9) scroll_pane_cp0031

0xdec8,	// (0x0008b3f2) wait_bar_pane_cp08_ParamLimits

0x89b9,	// (0x00085ee3) cset_list_set_pane_copy1_ParamLimits

0xe619,	// (0x0008bb43) highlight_cell_cale_month_pane_g1

0x91ee,	// (0x00086718) highlight_cell_cale_month_pane_t1

0xdb65,	// (0x0008b08f) list_gen_pane_cp01

0xd7a9,	// (0x0008acd3) scroll_pane_01

0x91fc,	// (0x00086726) list_single_double_fisheye_pane

0x12ea,	// (0x0007e814) list_double_fisheye_pane_g1_ParamLimits

0x12ea,	// (0x0007e814) list_double_fisheye_pane_g1

0x12f6,	// (0x0007e820) list_double_fisheye_pane_g2_ParamLimits

0x12f6,	// (0x0007e820) list_double_fisheye_pane_g2

0x9205,	// (0x0008672f) list_double_fisheye_pane_g3_ParamLimits

0x9205,	// (0x0008672f) list_double_fisheye_pane_g3

0x0004,

0xfc96,	// (0x0008d1c0) list_double_fisheye_pane_g_ParamLimits

0xfc96,	// (0x0008d1c0) list_double_fisheye_pane_g

0x1327,	// (0x0007e851) list_double_fisheye_pane_t1_ParamLimits

0x1327,	// (0x0007e851) list_double_fisheye_pane_t1

0x1342,	// (0x0007e86c) list_double_fisheye_pane_t2_ParamLimits

0x1342,	// (0x0007e86c) list_double_fisheye_pane_t2

0x0001,

0xfca1,	// (0x0008d1cb) list_double_fisheye_pane_t_ParamLimits

0xfca1,	// (0x0008d1cb) list_double_fisheye_pane_t

0xa149,	// (0x00087673) main_call5_pane

0x9009,	// (0x00086533) sc_swipe_pane_ParamLimits

0x9009,	// (0x00086533) sc_swipe_pane

0x921d,	// (0x00086747) call5_image_pane_ParamLimits

0x921d,	// (0x00086747) call5_image_pane

0x922f,	// (0x00086759) call5_swipe_1_pane_ParamLimits

0x922f,	// (0x00086759) call5_swipe_1_pane

0x923b,	// (0x00086765) call5_swipe_2_pane_ParamLimits

0x923b,	// (0x00086765) call5_swipe_2_pane

0x9257,	// (0x00086781) popup_call5_audio_first_window_ParamLimits

0x9257,	// (0x00086781) popup_call5_audio_first_window

0xcea3,	// (0x0008a3cd) call5_swipe_1_pane_g1_ParamLimits

0xcea3,	// (0x0008a3cd) call5_swipe_1_pane_g1

0xe621,	// (0x0008bb4b) call5_swipe_1_pane_g2_ParamLimits

0xe621,	// (0x0008bb4b) call5_swipe_1_pane_g2

0x0001,

0xfca6,	// (0x0008d1d0) call5_swipe_1_pane_g_ParamLimits

0xfca6,	// (0x0008d1d0) call5_swipe_1_pane_g

0xe62d,	// (0x0008bb57) call5_swipe_1_pane_t1_ParamLimits

0xe62d,	// (0x0008bb57) call5_swipe_1_pane_t1

0xcea3,	// (0x0008a3cd) call5_swipe_2_pane_g1_ParamLimits

0xcea3,	// (0x0008a3cd) call5_swipe_2_pane_g1

0xe642,	// (0x0008bb6c) call5_swipe_2_pane_g2_ParamLimits

0xe642,	// (0x0008bb6c) call5_swipe_2_pane_g2

0x0001,

0xfcab,	// (0x0008d1d5) call5_swipe_2_pane_g_ParamLimits

0xfcab,	// (0x0008d1d5) call5_swipe_2_pane_g

0xe64e,	// (0x0008bb78) call5_swipe_2_pane_t1_ParamLimits

0xe64e,	// (0x0008bb78) call5_swipe_2_pane_t1

0xe663,	// (0x0008bb8d) sc_swipe_pane_g1_ParamLimits

0xe663,	// (0x0008bb8d) sc_swipe_pane_g1

0xe670,	// (0x0008bb9a) sc_swipe_pane_g2_ParamLimits

0xe670,	// (0x0008bb9a) sc_swipe_pane_g2

0x0001,

0xfcb0,	// (0x0008d1da) sc_swipe_pane_g_ParamLimits

0xfcb0,	// (0x0008d1da) sc_swipe_pane_g

0xe67c,	// (0x0008bba6) sc_swipe_pane_t1_ParamLimits

0xe67c,	// (0x0008bba6) sc_swipe_pane_t1

0xa149,	// (0x00087673) main_cmail_launcher_pane

0x9267,	// (0x00086791) aid_size_cell_cmail_l_ParamLimits

0x9267,	// (0x00086791) aid_size_cell_cmail_l

0x9277,	// (0x000867a1) grid_cmail_l_pane_ParamLimits

0x9277,	// (0x000867a1) grid_cmail_l_pane

0x9287,	// (0x000867b1) cell_cmail_l_pane_ParamLimits

0x9287,	// (0x000867b1) cell_cmail_l_pane

0x929d,	// (0x000867c7) cell_cmail_l_pane_g1_ParamLimits

0x929d,	// (0x000867c7) cell_cmail_l_pane_g1

0x92a9,	// (0x000867d3) cell_cmail_l_pane_t1_ParamLimits

0x92a9,	// (0x000867d3) cell_cmail_l_pane_t1

0xe691,	// (0x0008bbbb) cell_cmail_l_pane_t2_ParamLimits

0xe691,	// (0x0008bbbb) cell_cmail_l_pane_t2

0x0001,

0xfcb5,	// (0x0008d1df) cell_cmail_l_pane_t_ParamLimits

0xfcb5,	// (0x0008d1df) cell_cmail_l_pane_t

0xa8cd,	// (0x00087df7) grid_highlight_pane_cp018_ParamLimits

0xa8cd,	// (0x00087df7) grid_highlight_pane_cp018

0x1f44,	// (0x0007f46e) main2_pane_ParamLimits

0x1f44,	// (0x0007f46e) main2_pane

0xa9a6,	// (0x00087ed0) popup_sp_fs_action_menu_bg_pane_g1

0xa9ae,	// (0x00087ed8) popup_sp_fs_action_menu_bg_pane_g2

0xa9b6,	// (0x00087ee0) popup_sp_fs_action_menu_bg_pane_g3

0xa9be,	// (0x00087ee8) popup_sp_fs_action_menu_bg_pane_g4

0xa9c6,	// (0x00087ef0) popup_sp_fs_action_menu_bg_pane_g5

0xa9ce,	// (0x00087ef8) popup_sp_fs_action_menu_bg_pane_g6

0xa9d6,	// (0x00087f00) popup_sp_fs_action_menu_bg_pane_g7

0xa9de,	// (0x00087f08) popup_sp_fs_action_menu_bg_pane_g8

0xa9e6,	// (0x00087f10) popup_sp_fs_action_menu_bg_pane_g9

0xa9ee,	// (0x00087f18) popup_sp_fs_action_menu_bg_pane_g10

0xa9ee,	// (0x00087f18) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf186,	// (0x0008c6b0) popup_sp_fs_action_menu_bg_pane_g

0x0b76,	// (0x0007e0a0) list_medium_line_x2_t3_g3_g1_ParamLimits

0x0b76,	// (0x0007e0a0) list_medium_line_x2_t3_g3_g1

0x3190,	// (0x000806ba) list_medium_line_x2_t3_g3_g2_ParamLimits

0x3190,	// (0x000806ba) list_medium_line_x2_t3_g3_g2

0x0b82,	// (0x0007e0ac) list_medium_line_x2_t3_g3_g3_ParamLimits

0x0b82,	// (0x0007e0ac) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x0008c762) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x0008c762) list_medium_line_x2_t3_g3_g

0x0b8e,	// (0x0007e0b8) list_medium_line_x2_t3_g3_t1_ParamLimits

0x0b8e,	// (0x0007e0b8) list_medium_line_x2_t3_g3_t1

0x0ba3,	// (0x0007e0cd) list_medium_line_x2_t3_g3_t2_ParamLimits

0x0ba3,	// (0x0007e0cd) list_medium_line_x2_t3_g3_t2

0x0bb7,	// (0x0007e0e1) list_medium_line_x2_t3_g3_t3_ParamLimits

0x0bb7,	// (0x0007e0e1) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x0008c769) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x0008c769) list_medium_line_x2_t3_g3_t

0x0b76,	// (0x0007e0a0) list_medium_line_x2_t3_g2_g1_ParamLimits

0x0b76,	// (0x0007e0a0) list_medium_line_x2_t3_g2_g1

0x0b82,	// (0x0007e0ac) list_medium_line_x2_t3_g2_g2_ParamLimits

0x0b82,	// (0x0007e0ac) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x0008c770) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x0008c770) list_medium_line_x2_t3_g2_g

0x0bcc,	// (0x0007e0f6) list_medium_line_x2_t3_g2_t1_ParamLimits

0x0bcc,	// (0x0007e0f6) list_medium_line_x2_t3_g2_t1

0x0be2,	// (0x0007e10c) list_medium_line_x2_t3_g2_t2_ParamLimits

0x0be2,	// (0x0007e10c) list_medium_line_x2_t3_g2_t2

0x0bf4,	// (0x0007e11e) list_medium_line_x2_t3_g2_t3_ParamLimits

0x0bf4,	// (0x0007e11e) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x0008c775) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x0008c775) list_medium_line_x2_t3_g2_t

0x0b76,	// (0x0007e0a0) list_medium_line_x2_t4_g4_g1_ParamLimits

0x0b76,	// (0x0007e0a0) list_medium_line_x2_t4_g4_g1

0x319c,	// (0x000806c6) list_medium_line_x2_t4_g4_g2_ParamLimits

0x319c,	// (0x000806c6) list_medium_line_x2_t4_g4_g2

0x3190,	// (0x000806ba) list_medium_line_x2_t4_g4_g3_ParamLimits

0x3190,	// (0x000806ba) list_medium_line_x2_t4_g4_g3

0x0c12,	// (0x0007e13c) list_medium_line_x2_t4_g4_g4_ParamLimits

0x0c12,	// (0x0007e13c) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x0008c77c) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x0008c77c) list_medium_line_x2_t4_g4_g

0x0c1e,	// (0x0007e148) list_medium_line_x2_t4_g4_t1_ParamLimits

0x0c1e,	// (0x0007e148) list_medium_line_x2_t4_g4_t1

0x0c35,	// (0x0007e15f) list_medium_line_x2_t4_g4_t2_ParamLimits

0x0c35,	// (0x0007e15f) list_medium_line_x2_t4_g4_t2

0x0c4a,	// (0x0007e174) list_medium_line_x2_t4_g4_t3_ParamLimits

0x0c4a,	// (0x0007e174) list_medium_line_x2_t4_g4_t3

0x0c5c,	// (0x0007e186) list_medium_line_x2_t4_g4_t4_ParamLimits

0x0c5c,	// (0x0007e186) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x0008c785) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x0008c785) list_medium_line_x2_t4_g4_t

0x0b76,	// (0x0007e0a0) list_medium_line_x2_t2_g4_g1_ParamLimits

0x0b76,	// (0x0007e0a0) list_medium_line_x2_t2_g4_g1

0x319c,	// (0x000806c6) list_medium_line_x2_t2_g4_g2_ParamLimits

0x319c,	// (0x000806c6) list_medium_line_x2_t2_g4_g2

0x3190,	// (0x000806ba) list_medium_line_x2_t2_g4_g3_ParamLimits

0x3190,	// (0x000806ba) list_medium_line_x2_t2_g4_g3

0x0b82,	// (0x0007e0ac) list_medium_line_x2_t2_g4_g4_ParamLimits

0x0b82,	// (0x0007e0ac) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x0008c7ec) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x0008c7ec) list_medium_line_x2_t2_g4_g

0x0c6e,	// (0x0007e198) list_medium_line_x2_t2_g4_t1_ParamLimits

0x0c6e,	// (0x0007e198) list_medium_line_x2_t2_g4_t1

0x0bb7,	// (0x0007e0e1) list_medium_line_x2_t2_g4_t2_ParamLimits

0x0bb7,	// (0x0007e0e1) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x0008c7f5) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x0008c7f5) list_medium_line_x2_t2_g4_t

0x0b76,	// (0x0007e0a0) list_medium_line_x2_t2_g3_g1_ParamLimits

0x0b76,	// (0x0007e0a0) list_medium_line_x2_t2_g3_g1

0x3190,	// (0x000806ba) list_medium_line_x2_t2_g3_g2_ParamLimits

0x3190,	// (0x000806ba) list_medium_line_x2_t2_g3_g2

0x0b82,	// (0x0007e0ac) list_medium_line_x2_t2_g3_g3_ParamLimits

0x0b82,	// (0x0007e0ac) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x0008c762) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x0008c762) list_medium_line_x2_t2_g3_g

0x0c83,	// (0x0007e1ad) list_medium_line_x2_t2_g3_t1_ParamLimits

0x0c83,	// (0x0007e1ad) list_medium_line_x2_t2_g3_t1

0x0bb7,	// (0x0007e0e1) list_medium_line_x2_t2_g3_t2_ParamLimits

0x0bb7,	// (0x0007e0e1) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x0008c7fa) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x0008c7fa) list_medium_line_x2_t2_g3_t

0x43fb,	// (0x00081925) main_sp_fs_list_pane_ParamLimits

0x43fb,	// (0x00081925) main_sp_fs_list_pane

0x4407,	// (0x00081931) sp_fs_scroll_pane_ParamLimits

0x4407,	// (0x00081931) sp_fs_scroll_pane

0x0c98,	// (0x0007e1c2) list_medium_line_x2_t3_t1

0x0ca8,	// (0x0007e1d2) list_medium_line_x2_t3_t2

0x0cb6,	// (0x0007e1e0) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x0008c845) list_medium_line_x2_t3_t

0x0cc4,	// (0x0007e1ee) list_medium_line_x3_t4_t1

0x0cd4,	// (0x0007e1fe) list_medium_line_x3_t4_t2

0x0ce2,	// (0x0007e20c) list_medium_line_x3_t4_t3

0x0cb6,	// (0x0007e1e0) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x0008c84c) list_medium_line_x3_t4_t

0x0cf0,	// (0x0007e21a) list_medium_line_x4_t5_t1

0x0d00,	// (0x0007e22a) list_medium_line_x4_t5_t2

0x0ce2,	// (0x0007e20c) list_medium_line_x4_t5_t3

0x0d0e,	// (0x0007e238) list_medium_line_x4_t5_t4

0x0cb6,	// (0x0007e1e0) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x0008c855) list_medium_line_x4_t5_t

0x0b76,	// (0x0007e0a0) list_medium_line_t4_g4_g1_ParamLimits

0x0b76,	// (0x0007e0a0) list_medium_line_t4_g4_g1

0x0c12,	// (0x0007e13c) list_medium_line_t4_g4_g2_ParamLimits

0x0c12,	// (0x0007e13c) list_medium_line_t4_g4_g2

0x0d1c,	// (0x0007e246) list_medium_line_t4_g4_g3_ParamLimits

0x0d1c,	// (0x0007e246) list_medium_line_t4_g4_g3

0x0b82,	// (0x0007e0ac) list_medium_line_t4_g4_g4_ParamLimits

0x0b82,	// (0x0007e0ac) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x0008c860) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x0008c860) list_medium_line_t4_g4_g

0x0d28,	// (0x0007e252) list_medium_line_t4_g4_t1_ParamLimits

0x0d28,	// (0x0007e252) list_medium_line_t4_g4_t1

0x0d3d,	// (0x0007e267) list_medium_line_t4_g4_t2_ParamLimits

0x0d3d,	// (0x0007e267) list_medium_line_t4_g4_t2

0x0d53,	// (0x0007e27d) list_medium_line_t4_g4_t3_ParamLimits

0x0d53,	// (0x0007e27d) list_medium_line_t4_g4_t3

0x0bb7,	// (0x0007e0e1) list_medium_line_t4_g4_t4_ParamLimits

0x0bb7,	// (0x0007e0e1) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x0008c869) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x0008c869) list_medium_line_t4_g4_t

0x4526,	// (0x00081a50) chi_dic_find_pane_g1

0x54f8,	// (0x00082a22) main_tport_pane

0x0f90,	// (0x0007e4ba) list_medium_line_plain_t1

0x0f9e,	// (0x0007e4c8) list_medium_line_t2_g2_g1_ParamLimits

0x0f9e,	// (0x0007e4c8) list_medium_line_t2_g2_g1

0x7f95,	// (0x000854bf) list_medium_line_t2_g2_g2_ParamLimits

0x7f95,	// (0x000854bf) list_medium_line_t2_g2_g2

0x0001,

0xf9f4,	// (0x0008cf1e) list_medium_line_t2_g2_g_ParamLimits

0xf9f4,	// (0x0008cf1e) list_medium_line_t2_g2_g

0x0faa,	// (0x0007e4d4) list_medium_line_t2_g2_t1_ParamLimits

0x0faa,	// (0x0007e4d4) list_medium_line_t2_g2_t1

0x0fc4,	// (0x0007e4ee) list_medium_line_t2_g2_t2_ParamLimits

0x0fc4,	// (0x0007e4ee) list_medium_line_t2_g2_t2

0x0001,

0xf9f9,	// (0x0008cf23) list_medium_line_t2_g2_t_ParamLimits

0xf9f9,	// (0x0008cf23) list_medium_line_t2_g2_t

0x11e4,	// (0x0007e70e) aid_sp_fs_list_icon_a_sm

0x84a6,	// (0x000859d0) aid_sp_fs_list_icon_d

0x11ec,	// (0x0007e716) aid_sp_fs_text_primary

0x11f5,	// (0x0007e71f) aid_sp_fs_text_secondary

0x84ae,	// (0x000859d8) list_medium_line

0x84ae,	// (0x000859d8) list_medium_line_g2

0x84ae,	// (0x000859d8) list_medium_line_g3

0x84ae,	// (0x000859d8) list_medium_line_plain

0x84ae,	// (0x000859d8) list_medium_line_plain_t2

0x84ae,	// (0x000859d8) list_medium_line_plain_t3

0x84ae,	// (0x000859d8) list_medium_line_right_icon

0x84ae,	// (0x000859d8) list_medium_line_right_iconx2

0x84ae,	// (0x000859d8) list_medium_line_t2

0x84ae,	// (0x000859d8) list_medium_line_t2_g2

0x84ae,	// (0x000859d8) list_medium_line_t2_g3

0x84ae,	// (0x000859d8) list_medium_line_t2_right_icon

0x84ae,	// (0x000859d8) list_medium_line_t2_right_iconx2

0x84ae,	// (0x000859d8) list_medium_line_t3

0x84ae,	// (0x000859d8) list_medium_line_t3_g2

0x84ae,	// (0x000859d8) list_medium_line_t3_g3

0x84ae,	// (0x000859d8) list_medium_line_t3_right_iconx2

0x84b7,	// (0x000859e1) list_medium_line_t4_g4

0x84c0,	// (0x000859ea) list_medium_line_x2

0x84c0,	// (0x000859ea) list_medium_line_x2_t2_g2

0x84c0,	// (0x000859ea) list_medium_line_x2_t2_g3

0x84c0,	// (0x000859ea) list_medium_line_x2_t2_g4

0x84c0,	// (0x000859ea) list_medium_line_x2_t3

0x84c0,	// (0x000859ea) list_medium_line_x2_t3_g2

0x84c0,	// (0x000859ea) list_medium_line_x2_t3_g3

0x84c0,	// (0x000859ea) list_medium_line_x2_t3_g4

0x84c0,	// (0x000859ea) list_medium_line_x2_t4_g2

0x84c0,	// (0x000859ea) list_medium_line_x2_t4_g4

0x84c9,	// (0x000859f3) list_medium_line_x3

0x84c9,	// (0x000859f3) list_medium_line_x3_t4

0x84c9,	// (0x000859f3) list_medium_line_x3_t4_g4

0x84b7,	// (0x000859e1) list_medium_line_x4_t4

0x84b7,	// (0x000859e1) list_medium_line_x4_t4_g7

0x84b7,	// (0x000859e1) list_medium_line_x4_t5

0x11fe,	// (0x0007e728) list_single_fs_dyc_pane_ParamLimits

0x11fe,	// (0x0007e728) list_single_fs_dyc_pane

0x0b76,	// (0x0007e0a0) list_medium_line_x4_t4_g7_g1_ParamLimits

0x0b76,	// (0x0007e0a0) list_medium_line_x4_t4_g7_g1

0x1236,	// (0x0007e760) list_medium_line_x4_t4_g7_g2_ParamLimits

0x1236,	// (0x0007e760) list_medium_line_x4_t4_g7_g2

0x8bed,	// (0x00086117) list_medium_line_x4_t4_g7_g3_ParamLimits

0x8bed,	// (0x00086117) list_medium_line_x4_t4_g7_g3

0x8bfc,	// (0x00086126) list_medium_line_x4_t4_g7_g4_ParamLimits

0x8bfc,	// (0x00086126) list_medium_line_x4_t4_g7_g4

0x1242,	// (0x0007e76c) list_medium_line_x4_t4_g7_g5_ParamLimits

0x1242,	// (0x0007e76c) list_medium_line_x4_t4_g7_g5

0x1251,	// (0x0007e77b) list_medium_line_x4_t4_g7_g6_ParamLimits

0x1251,	// (0x0007e77b) list_medium_line_x4_t4_g7_g6

0x1260,	// (0x0007e78a) list_medium_line_x4_t4_g7_g7_ParamLimits

0x1260,	// (0x0007e78a) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbbd,	// (0x0008d0e7) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbbd,	// (0x0008d0e7) list_medium_line_x4_t4_g7_g

0x126c,	// (0x0007e796) list_medium_line_x4_t4_g7_t1_ParamLimits

0x126c,	// (0x0007e796) list_medium_line_x4_t4_g7_t1

0x1281,	// (0x0007e7ab) list_medium_line_x4_t4_g7_t2_ParamLimits

0x1281,	// (0x0007e7ab) list_medium_line_x4_t4_g7_t2

0x1296,	// (0x0007e7c0) list_medium_line_x4_t4_g7_t3_ParamLimits

0x1296,	// (0x0007e7c0) list_medium_line_x4_t4_g7_t3

0x12ab,	// (0x0007e7d5) list_medium_line_x4_t4_g7_t4_ParamLimits

0x12ab,	// (0x0007e7d5) list_medium_line_x4_t4_g7_t4

0x12bd,	// (0x0007e7e7) list_medium_line_x4_t4_g7_t5_ParamLimits

0x12bd,	// (0x0007e7e7) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbcc,	// (0x0008d0f6) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbcc,	// (0x0008d0f6) list_medium_line_x4_t4_g7_t

0x12cf,	// (0x0007e7f9) list_single_dyc_row_pane_ParamLimits

0x12cf,	// (0x0007e7f9) list_single_dyc_row_pane

0x9211,	// (0x0008673b) call5_gesture_pane_ParamLimits

0x9211,	// (0x0008673b) call5_gesture_pane

0x9247,	// (0x00086771) call5_windows_pane_ParamLimits

0x9247,	// (0x00086771) call5_windows_pane

0x92bf,	// (0x000867e9) call5_swipe_1_pane_cp_ParamLimits

0x92bf,	// (0x000867e9) call5_swipe_1_pane_cp

0x92cb,	// (0x000867f5) call5_swipe_2_pane_cp_ParamLimits

0x92cb,	// (0x000867f5) call5_swipe_2_pane_cp

0xb40b,	// (0x00088935) call5_image_pane_cp

0x92d7,	// (0x00086801) popup_call5_audio_first_window_cp_ParamLimits

0x92d7,	// (0x00086801) popup_call5_audio_first_window_cp

0xe663,	// (0x0008bb8d) call5_swipe_1_pane_g1_cp_ParamLimits

0xe663,	// (0x0008bb8d) call5_swipe_1_pane_g1_cp

0xe6a3,	// (0x0008bbcd) call5_swipe_1_pane_g2_cp

0xe67c,	// (0x0008bba6) call5_swipe_1_pane_t1_cp_ParamLimits

0xe67c,	// (0x0008bba6) call5_swipe_1_pane_t1_cp

0xe663,	// (0x0008bb8d) call5_swipe_2_pane_g1_cp_ParamLimits

0xe663,	// (0x0008bb8d) call5_swipe_2_pane_g1_cp

0xe6ab,	// (0x0008bbd5) call5_swipe_2_pane_g2_cp

0xe6b3,	// (0x0008bbdd) call5_swipe_2_pane_t1_cp_ParamLimits

0xe6b3,	// (0x0008bbdd) call5_swipe_2_pane_t1_cp

0xa8cd,	// (0x00087df7) main_sp_fs_email_pane

0xe6c8,	// (0x0008bbf2) main_sp_fs_listscroll_pane_te

0x1364,	// (0x0007e88e) popup_sp_fs_action_menu_pane_ParamLimits

0x1364,	// (0x0007e88e) popup_sp_fs_action_menu_pane

0xcc73,	// (0x0008a19d) bg_sp_fs_ctrlbar_pane_g1

0xd228,	// (0x0008a752) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xd23a,	// (0x0008a764) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xd231,	// (0x0008a75b) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcc73,	// (0x0008a19d) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcba,	// (0x0008d1e4) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xca52,	// (0x00089f7c) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xca52,	// (0x00089f7c) bg_sp_fs_ctrlbar_ddmenu_pane

0xe6d1,	// (0x0008bbfb) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe6d1,	// (0x0008bbfb) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe6dd,	// (0x0008bc07) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe6dd,	// (0x0008bc07) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcc3,	// (0x0008d1ed) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcc3,	// (0x0008d1ed) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe6e9,	// (0x0008bc13) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe6e9,	// (0x0008bc13) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x92e5,	// (0x0008680f) list_medium_line_t2_right_icon_g1

0x13aa,	// (0x0007e8d4) list_medium_line_t2_right_icon_t1

0x13ba,	// (0x0007e8e4) list_medium_line_t2_right_icon_t2

0x0001,

0xfcc8,	// (0x0008d1f2) list_medium_line_t2_right_icon_t

0xc822,	// (0x00089d4c) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc822,	// (0x00089d4c) bg_sp_fs_ctrlbar_pane

0x9346,	// (0x00086870) main_sp_fs_ctrlbar_button_pane_cp01

0x934e,	// (0x00086878) main_sp_fs_ctrlbar_ddmenu_pane

0xe41b,	// (0x0008b945) main_sp_fs_ctrlbar_pane_g1

0xe73b,	// (0x0008bc65) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfccd,	// (0x0008d1f7) main_sp_fs_ctrlbar_pane_g

0xe747,	// (0x0008bc71) main_sp_fs_ctrlbar_pane_t1

0x13c8,	// (0x0007e8f2) main_sp_fs_ctrlbar_pane

0x13e2,	// (0x0007e90c) main_sp_fs_listscroll_pane_te_cp01

0x13f3,	// (0x0007e91d) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x13f3,	// (0x0007e91d) popup_sp_fs_action_menu_pane_cp01

0xa8cd,	// (0x00087df7) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa8cd,	// (0x00087df7) bg_sp_fs_highlight_list_pane_cp01

0x1421,	// (0x0007e94b) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x1421,	// (0x0007e94b) sp_fs_action_menu_list_gene_pane_g1

0xe777,	// (0x0008bca1) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe777,	// (0x0008bca1) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcd7,	// (0x0008d201) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcd7,	// (0x0008d201) sp_fs_action_menu_list_gene_pane_g

0x1430,	// (0x0007e95a) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x1430,	// (0x0007e95a) sp_fs_action_menu_list_gene_pane_t1

0x1448,	// (0x0007e972) sp_fs_action_menu_list_gene_pane_ParamLimits

0x1448,	// (0x0007e972) sp_fs_action_menu_list_gene_pane

0xe784,	// (0x0008bcae) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe784,	// (0x0008bcae) popup_sp_fs_action_menu_bg_pane

0x146b,	// (0x0007e995) sp_fs_action_menu_list_pane_ParamLimits

0x146b,	// (0x0007e995) sp_fs_action_menu_list_pane

0xe792,	// (0x0008bcbc) sp_fs_scroll_pane_cp01_ParamLimits

0xe792,	// (0x0008bcbc) sp_fs_scroll_pane_cp01

0x148f,	// (0x0007e9b9) list_medium_line_plain_t2_t1

0x149f,	// (0x0007e9c9) list_medium_line_plain_t2_t2

0x0001,

0xfcdc,	// (0x0008d206) list_medium_line_plain_t2_t

0x14ad,	// (0x0007e9d7) list_medium_line_plain_t3_t1

0x14bd,	// (0x0007e9e7) list_medium_line_plain_t3_t2

0x14cb,	// (0x0007e9f5) list_medium_line_plain_t3_t3

0x0002,

0xfce1,	// (0x0008d20b) list_medium_line_plain_t3_t

0x0b76,	// (0x0007e0a0) list_medium_line_x2_t2_g2_g1_ParamLimits

0x0b76,	// (0x0007e0a0) list_medium_line_x2_t2_g2_g1

0x0b82,	// (0x0007e0ac) list_medium_line_x2_t2_g2_g2_ParamLimits

0x0b82,	// (0x0007e0ac) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x0008c770) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x0008c770) list_medium_line_x2_t2_g2_g

0x0d28,	// (0x0007e252) list_medium_line_x2_t2_g2_t1_ParamLimits

0x0d28,	// (0x0007e252) list_medium_line_x2_t2_g2_t1

0x0bb7,	// (0x0007e0e1) list_medium_line_x2_t2_g2_t2_ParamLimits

0x0bb7,	// (0x0007e0e1) list_medium_line_x2_t2_g2_t2

0x0001,

0xfce8,	// (0x0008d212) list_medium_line_x2_t2_g2_t_ParamLimits

0xfce8,	// (0x0008d212) list_medium_line_x2_t2_g2_t

0x0b76,	// (0x0007e0a0) list_medium_line_x2_t4_g2_g1_ParamLimits

0x0b76,	// (0x0007e0a0) list_medium_line_x2_t4_g2_g1

0x14d9,	// (0x0007ea03) list_medium_line_x2_t4_g2_g2_ParamLimits

0x14d9,	// (0x0007ea03) list_medium_line_x2_t4_g2_g2

0x0001,

0xfced,	// (0x0008d217) list_medium_line_x2_t4_g2_g_ParamLimits

0xfced,	// (0x0008d217) list_medium_line_x2_t4_g2_g

0x14eb,	// (0x0007ea15) list_medium_line_x2_t4_g2_t1_ParamLimits

0x14eb,	// (0x0007ea15) list_medium_line_x2_t4_g2_t1

0x1505,	// (0x0007ea2f) list_medium_line_x2_t4_g2_t2_ParamLimits

0x1505,	// (0x0007ea2f) list_medium_line_x2_t4_g2_t2

0x151b,	// (0x0007ea45) list_medium_line_x2_t4_g2_t3_ParamLimits

0x151b,	// (0x0007ea45) list_medium_line_x2_t4_g2_t3

0x0bb7,	// (0x0007e0e1) list_medium_line_x2_t4_g2_t4_ParamLimits

0x0bb7,	// (0x0007e0e1) list_medium_line_x2_t4_g2_t4

0x0003,

0xfcf2,	// (0x0008d21c) list_medium_line_x2_t4_g2_t_ParamLimits

0xfcf2,	// (0x0008d21c) list_medium_line_x2_t4_g2_t

0x9358,	// (0x00086882) list_medium_line_t3_right_iconx2_g1

0x92e5,	// (0x0008680f) list_medium_line_t3_right_iconx2_g2

0x1530,	// (0x0007ea5a) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfcfb,	// (0x0008d225) list_medium_line_t3_right_iconx2_g

0x153a,	// (0x0007ea64) list_medium_line_t3_right_iconx2_t1

0x154a,	// (0x0007ea74) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd02,	// (0x0008d22c) list_medium_line_t3_right_iconx2_t

0x0b76,	// (0x0007e0a0) list_medium_line_x3_t4_g4_g1_ParamLimits

0x0b76,	// (0x0007e0a0) list_medium_line_x3_t4_g4_g1

0x3190,	// (0x000806ba) list_medium_line_x3_t4_g4_g2_ParamLimits

0x3190,	// (0x000806ba) list_medium_line_x3_t4_g4_g2

0x0c12,	// (0x0007e13c) list_medium_line_x3_t4_g4_g3_ParamLimits

0x0c12,	// (0x0007e13c) list_medium_line_x3_t4_g4_g3

0x9360,	// (0x0008688a) list_medium_line_x3_t4_g4_g4_ParamLimits

0x9360,	// (0x0008688a) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd07,	// (0x0008d231) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd07,	// (0x0008d231) list_medium_line_x3_t4_g4_g

0x1558,	// (0x0007ea82) list_medium_line_x3_t4_g4_t1_ParamLimits

0x1558,	// (0x0007ea82) list_medium_line_x3_t4_g4_t1

0x156f,	// (0x0007ea99) list_medium_line_x3_t4_g4_t2_ParamLimits

0x156f,	// (0x0007ea99) list_medium_line_x3_t4_g4_t2

0x1584,	// (0x0007eaae) list_medium_line_x3_t4_g4_t3_ParamLimits

0x1584,	// (0x0007eaae) list_medium_line_x3_t4_g4_t3

0x1599,	// (0x0007eac3) list_medium_line_x3_t4_g4_t4_ParamLimits

0x1599,	// (0x0007eac3) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd10,	// (0x0008d23a) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd10,	// (0x0008d23a) list_medium_line_x3_t4_g4_t

0x15b6,	// (0x0007eae0) list_single_dyc_row_text_pane_t1_ParamLimits

0x15b6,	// (0x0007eae0) list_single_dyc_row_text_pane_t1

0x15f9,	// (0x0007eb23) list_single_dyc_row_text_pane_t2_ParamLimits

0x15f9,	// (0x0007eb23) list_single_dyc_row_text_pane_t2

0x166f,	// (0x0007eb99) list_single_dyc_row_text_pane_t3_ParamLimits

0x166f,	// (0x0007eb99) list_single_dyc_row_text_pane_t3

0x0005,

0xfd19,	// (0x0008d243) list_single_dyc_row_text_pane_t_ParamLimits

0xfd19,	// (0x0008d243) list_single_dyc_row_text_pane_t

0x174e,	// (0x0007ec78) list_single_dyc_row_pane_g1_ParamLimits

0x174e,	// (0x0007ec78) list_single_dyc_row_pane_g1

0x175a,	// (0x0007ec84) list_single_dyc_row_pane_g2_ParamLimits

0x175a,	// (0x0007ec84) list_single_dyc_row_pane_g2

0x1766,	// (0x0007ec90) list_single_dyc_row_pane_g3_ParamLimits

0x1766,	// (0x0007ec90) list_single_dyc_row_pane_g3

0x1772,	// (0x0007ec9c) list_single_dyc_row_pane_g4_ParamLimits

0x1772,	// (0x0007ec9c) list_single_dyc_row_pane_g4

0x0003,

0xfd26,	// (0x0008d250) list_single_dyc_row_pane_g_ParamLimits

0xfd26,	// (0x0008d250) list_single_dyc_row_pane_g

0x177e,	// (0x0007eca8) list_single_dyc_row_text_pane_ParamLimits

0x177e,	// (0x0007eca8) list_single_dyc_row_text_pane

0xa149,	// (0x00087673) bg_sp_fs_scroll_pane

0xe7d3,	// (0x0008bcfd) thumb_sp_fs_scroll_pane

0x0f9e,	// (0x0007e4c8) list_medium_line_g1_ParamLimits

0x0f9e,	// (0x0007e4c8) list_medium_line_g1

0x179d,	// (0x0007ecc7) list_medium_line_t1_ParamLimits

0x179d,	// (0x0007ecc7) list_medium_line_t1

0x0b76,	// (0x0007e0a0) list_medium_line_x2_g1_ParamLimits

0x0b76,	// (0x0007e0a0) list_medium_line_x2_g1

0x3190,	// (0x000806ba) list_medium_line_x2_g2_ParamLimits

0x3190,	// (0x000806ba) list_medium_line_x2_g2

0x0001,

0xfd2f,	// (0x0008d259) list_medium_line_x2_g_ParamLimits

0xfd2f,	// (0x0008d259) list_medium_line_x2_g

0x17b2,	// (0x0007ecdc) list_medium_line_x2_t1_ParamLimits

0x17b2,	// (0x0007ecdc) list_medium_line_x2_t1

0x0b76,	// (0x0007e0a0) list_medium_line_x3_g1_ParamLimits

0x0b76,	// (0x0007e0a0) list_medium_line_x3_g1

0x3190,	// (0x000806ba) list_medium_line_x3_g2_ParamLimits

0x3190,	// (0x000806ba) list_medium_line_x3_g2

0x0001,

0xfd2f,	// (0x0008d259) list_medium_line_x3_g_ParamLimits

0xfd2f,	// (0x0008d259) list_medium_line_x3_g

0x17b2,	// (0x0007ecdc) list_medium_line_x3_t1_ParamLimits

0x17b2,	// (0x0007ecdc) list_medium_line_x3_t1

0xe7dc,	// (0x0008bd06) thumb_sp_fs_scroll_pane_g1

0xe7e5,	// (0x0008bd0f) thumb_sp_fs_scroll_pane_g2

0xe7ee,	// (0x0008bd18) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd34,	// (0x0008d25e) thumb_sp_fs_scroll_pane_g

0xe7dc,	// (0x0008bd06) bg_sp_fs_scroll_pane_g1

0xe7e5,	// (0x0008bd0f) bg_sp_fs_scroll_pane_g2

0xe7ee,	// (0x0008bd18) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd34,	// (0x0008d25e) bg_sp_fs_scroll_pane_g

0x0b76,	// (0x0007e0a0) list_medium_line_x2_t3_g4_g1_ParamLimits

0x0b76,	// (0x0007e0a0) list_medium_line_x2_t3_g4_g1

0x319c,	// (0x000806c6) list_medium_line_x2_t3_g4_g2_ParamLimits

0x319c,	// (0x000806c6) list_medium_line_x2_t3_g4_g2

0x3190,	// (0x000806ba) list_medium_line_x2_t3_g4_g3_ParamLimits

0x3190,	// (0x000806ba) list_medium_line_x2_t3_g4_g3

0x0b82,	// (0x0007e0ac) list_medium_line_x2_t3_g4_g4_ParamLimits

0x0b82,	// (0x0007e0ac) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x0008c7ec) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x0008c7ec) list_medium_line_x2_t3_g4_g

0x17c8,	// (0x0007ecf2) list_medium_line_x2_t3_g4_t1_ParamLimits

0x17c8,	// (0x0007ecf2) list_medium_line_x2_t3_g4_t1

0x17de,	// (0x0007ed08) list_medium_line_x2_t3_g4_t2_ParamLimits

0x17de,	// (0x0007ed08) list_medium_line_x2_t3_g4_t2

0x0bb7,	// (0x0007e0e1) list_medium_line_x2_t3_g4_t3_ParamLimits

0x0bb7,	// (0x0007e0e1) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd3b,	// (0x0008d265) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd3b,	// (0x0008d265) list_medium_line_x2_t3_g4_t

0x0f9e,	// (0x0007e4c8) list_medium_line_g2_g1_ParamLimits

0x0f9e,	// (0x0007e4c8) list_medium_line_g2_g1

0x7f95,	// (0x000854bf) list_medium_line_g2_g2_ParamLimits

0x7f95,	// (0x000854bf) list_medium_line_g2_g2

0x0001,

0xf9f4,	// (0x0008cf1e) list_medium_line_g2_g_ParamLimits

0xf9f4,	// (0x0008cf1e) list_medium_line_g2_g

0x17f7,	// (0x0007ed21) list_medium_line_g2_t1_ParamLimits

0x17f7,	// (0x0007ed21) list_medium_line_g2_t1

0x0f9e,	// (0x0007e4c8) list_medium_line_t3_g2_g1_ParamLimits

0x0f9e,	// (0x0007e4c8) list_medium_line_t3_g2_g1

0x7f95,	// (0x000854bf) list_medium_line_t3_g2_g2_ParamLimits

0x7f95,	// (0x000854bf) list_medium_line_t3_g2_g2

0x0001,

0xf9f4,	// (0x0008cf1e) list_medium_line_t3_g2_g_ParamLimits

0xf9f4,	// (0x0008cf1e) list_medium_line_t3_g2_g

0x180c,	// (0x0007ed36) list_medium_line_t3_g2_t1_ParamLimits

0x180c,	// (0x0007ed36) list_medium_line_t3_g2_t1

0x1826,	// (0x0007ed50) list_medium_line_t3_g2_t2_ParamLimits

0x1826,	// (0x0007ed50) list_medium_line_t3_g2_t2

0x183c,	// (0x0007ed66) list_medium_line_t3_g2_t3_ParamLimits

0x183c,	// (0x0007ed66) list_medium_line_t3_g2_t3

0x0002,

0xfd42,	// (0x0008d26c) list_medium_line_t3_g2_t_ParamLimits

0xfd42,	// (0x0008d26c) list_medium_line_t3_g2_t

0x92e5,	// (0x0008680f) list_medium_line_right_icon_g1

0x1853,	// (0x0007ed7d) list_medium_line_right_icon_t1

0x0f9e,	// (0x0007e4c8) list_medium_line_t2_g1_ParamLimits

0x0f9e,	// (0x0007e4c8) list_medium_line_t2_g1

0x1861,	// (0x0007ed8b) list_medium_line_t2_t1_ParamLimits

0x1861,	// (0x0007ed8b) list_medium_line_t2_t1

0x187b,	// (0x0007eda5) list_medium_line_t2_t2_ParamLimits

0x187b,	// (0x0007eda5) list_medium_line_t2_t2

0x0001,

0xfd49,	// (0x0008d273) list_medium_line_t2_t_ParamLimits

0xfd49,	// (0x0008d273) list_medium_line_t2_t

0x0f9e,	// (0x0007e4c8) list_medium_line_t3_g1_ParamLimits

0x0f9e,	// (0x0007e4c8) list_medium_line_t3_g1

0x1890,	// (0x0007edba) list_medium_line_t3_t1_ParamLimits

0x1890,	// (0x0007edba) list_medium_line_t3_t1

0x18a7,	// (0x0007edd1) list_medium_line_t3_t2_ParamLimits

0x18a7,	// (0x0007edd1) list_medium_line_t3_t2

0x18bc,	// (0x0007ede6) list_medium_line_t3_t3_ParamLimits

0x18bc,	// (0x0007ede6) list_medium_line_t3_t3

0x0002,

0xfd4e,	// (0x0008d278) list_medium_line_t3_t_ParamLimits

0xfd4e,	// (0x0008d278) list_medium_line_t3_t

0x0f9e,	// (0x0007e4c8) list_medium_line_g3_g1_ParamLimits

0x0f9e,	// (0x0007e4c8) list_medium_line_g3_g1

0x936c,	// (0x00086896) list_medium_line_g3_g2_ParamLimits

0x936c,	// (0x00086896) list_medium_line_g3_g2

0x7f95,	// (0x000854bf) list_medium_line_g3_g3_ParamLimits

0x7f95,	// (0x000854bf) list_medium_line_g3_g3

0x0002,

0xfd55,	// (0x0008d27f) list_medium_line_g3_g_ParamLimits

0xfd55,	// (0x0008d27f) list_medium_line_g3_g

0x18ce,	// (0x0007edf8) list_medium_line_g3_t1_ParamLimits

0x18ce,	// (0x0007edf8) list_medium_line_g3_t1

0x0f9e,	// (0x0007e4c8) list_medium_line_t2_g3_g1_ParamLimits

0x0f9e,	// (0x0007e4c8) list_medium_line_t2_g3_g1

0x936c,	// (0x00086896) list_medium_line_t2_g3_g2_ParamLimits

0x936c,	// (0x00086896) list_medium_line_t2_g3_g2

0x7f95,	// (0x000854bf) list_medium_line_t2_g3_g3_ParamLimits

0x7f95,	// (0x000854bf) list_medium_line_t2_g3_g3

0x0002,

0xfd55,	// (0x0008d27f) list_medium_line_t2_g3_g_ParamLimits

0xfd55,	// (0x0008d27f) list_medium_line_t2_g3_g

0x18e3,	// (0x0007ee0d) list_medium_line_t2_g3_t1_ParamLimits

0x18e3,	// (0x0007ee0d) list_medium_line_t2_g3_t1

0x18fd,	// (0x0007ee27) list_medium_line_t2_g3_t2_ParamLimits

0x18fd,	// (0x0007ee27) list_medium_line_t2_g3_t2

0x0001,

0xfd5c,	// (0x0008d286) list_medium_line_t2_g3_t_ParamLimits

0xfd5c,	// (0x0008d286) list_medium_line_t2_g3_t

0x0f9e,	// (0x0007e4c8) list_medium_line_t3_g3_g1_ParamLimits

0x0f9e,	// (0x0007e4c8) list_medium_line_t3_g3_g1

0x936c,	// (0x00086896) list_medium_line_t3_g3_g2_ParamLimits

0x936c,	// (0x00086896) list_medium_line_t3_g3_g2

0x7f95,	// (0x000854bf) list_medium_line_t3_g3_g3_ParamLimits

0x7f95,	// (0x000854bf) list_medium_line_t3_g3_g3

0x0002,

0xfd55,	// (0x0008d27f) list_medium_line_t3_g3_g_ParamLimits

0xfd55,	// (0x0008d27f) list_medium_line_t3_g3_g

0x1913,	// (0x0007ee3d) list_medium_line_t3_g3_t1_ParamLimits

0x1913,	// (0x0007ee3d) list_medium_line_t3_g3_t1

0x192c,	// (0x0007ee56) list_medium_line_t3_g3_t2_ParamLimits

0x192c,	// (0x0007ee56) list_medium_line_t3_g3_t2

0x1942,	// (0x0007ee6c) list_medium_line_t3_g3_t3_ParamLimits

0x1942,	// (0x0007ee6c) list_medium_line_t3_g3_t3

0x0002,

0xfd61,	// (0x0008d28b) list_medium_line_t3_g3_t_ParamLimits

0xfd61,	// (0x0008d28b) list_medium_line_t3_g3_t

0x9358,	// (0x00086882) list_medium_line_right_iconx2_g1

0x92e5,	// (0x0008680f) list_medium_line_right_iconx2_g2

0x0001,

0xfd68,	// (0x0008d292) list_medium_line_right_iconx2_g

0x9378,	// (0x000868a2) list_medium_line_right_iconx2_t1

0x9358,	// (0x00086882) list_medium_line_t2_right_iconx2_g1

0x92e5,	// (0x0008680f) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd68,	// (0x0008d292) list_medium_line_t2_right_iconx2_g

0x195c,	// (0x0007ee86) list_medium_line_t2_right_iconx2_t1

0x196c,	// (0x0007ee96) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd6d,	// (0x0008d297) list_medium_line_t2_right_iconx2_t

0x197a,	// (0x0007eea4) list_medium_line_x4_t4_t1

0x1988,	// (0x0007eeb2) list_medium_line_x4_t4_t2

0x1998,	// (0x0007eec2) list_medium_line_x4_t4_t3

0x19a8,	// (0x0007eed2) list_medium_line_x4_t4_t4

0x0003,

0xfd72,	// (0x0008d29c) list_medium_line_x4_t4_t

0x93b0,	// (0x000868da) tport_appsw_pane_ParamLimits

0x93b0,	// (0x000868da) tport_appsw_pane

0x93be,	// (0x000868e8) tport_contact_pane_ParamLimits

0x93be,	// (0x000868e8) tport_contact_pane

0x93ce,	// (0x000868f8) tport_listscroll_pane_ParamLimits

0x93ce,	// (0x000868f8) tport_listscroll_pane

0x93de,	// (0x00086908) cell_tport_appsw_pane_ParamLimits

0x93de,	// (0x00086908) cell_tport_appsw_pane

0xcf08,	// (0x0008a432) tport_appsw_pane_g1_ParamLimits

0xcf08,	// (0x0008a432) tport_appsw_pane_g1

0xe7f7,	// (0x0008bd21) tport_contact_pane_g1

0xe800,	// (0x0008bd2a) tport_contact_pane_t1

0xe80e,	// (0x0008bd38) tport_contact_pane_t2

0x0001,

0xfd7b,	// (0x0008d2a5) tport_contact_pane_t

0xe81c,	// (0x0008bd46) list_tport_pane

0xe825,	// (0x0008bd4f) scroll_pane_cp_030

0x9413,	// (0x0008693d) cell_tport_appsw_pane_g1

0x9423,	// (0x0008694d) cell_tport_appsw_pane_t1

0x9431,	// (0x0008695b) grid_highlight_pane_cp019

0x9439,	// (0x00086963) list_tport_double_graphic_pane_ParamLimits

0x9439,	// (0x00086963) list_tport_double_graphic_pane

0xa8cd,	// (0x00087df7) list_highlight_pane_cp023_ParamLimits

0xa8cd,	// (0x00087df7) list_highlight_pane_cp023

0x9446,	// (0x00086970) list_tport_double_graphic_pane_g1_ParamLimits

0x9446,	// (0x00086970) list_tport_double_graphic_pane_g1

0x9453,	// (0x0008697d) list_tport_double_graphic_pane_t1_ParamLimits

0x9453,	// (0x0008697d) list_tport_double_graphic_pane_t1

0x9468,	// (0x00086992) list_tport_double_graphic_pane_t2_ParamLimits

0x9468,	// (0x00086992) list_tport_double_graphic_pane_t2

0x0001,

0xfd87,	// (0x0008d2b1) list_tport_double_graphic_pane_t_ParamLimits

0xfd87,	// (0x0008d2b1) list_tport_double_graphic_pane_t

0xa149,	// (0x00087673) main_cale_note_pane

0x77ba,	// (0x00084ce4) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x77ba,	// (0x00084ce4) cell_vitu2_function_top_wide_pane_cp01

0x8f58,	// (0x00086482) wait_bar_pane_cp05_ParamLimits

0xa8cd,	// (0x00087df7) listscroll_cmail_pane

0xe836,	// (0x0008bd60) list_cmail_pane

0x9484,	// (0x000869ae) list_cmail_body_pane

0x949d,	// (0x000869c7) list_single_cmail_header_caption_pane

0x94be,	// (0x000869e8) list_single_cmail_header_detail_pane_ParamLimits

0x94be,	// (0x000869e8) list_single_cmail_header_detail_pane

0x94ef,	// (0x00086a19) list_single_cmail_header_caption_pane_t1

0x19b8,	// (0x0007eee2) list_single_cmail_header_detail_pane_g1_ParamLimits

0x19b8,	// (0x0007eee2) list_single_cmail_header_detail_pane_g1

0x94ff,	// (0x00086a29) list_single_cmail_header_detail_pane_g2_ParamLimits

0x94ff,	// (0x00086a29) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd8c,	// (0x0008d2b6) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd8c,	// (0x0008d2b6) list_single_cmail_header_detail_pane_g

0x19d0,	// (0x0007eefa) list_single_cmail_header_detail_pane_t1_ParamLimits

0x19d0,	// (0x0007eefa) list_single_cmail_header_detail_pane_t1

0x1a42,	// (0x0007ef6c) list_single_cmail_header_editor_pane_bg_ParamLimits

0x1a42,	// (0x0007ef6c) list_single_cmail_header_editor_pane_bg

0xe2e4,	// (0x0008b80e) list_cmail_body_pane_g1

0xe863,	// (0x0008bd8d) list_cmail_body_pane_t1

0xd681,	// (0x0008abab) list_single_cmail_header_editor_pane_bg_g1

0xad24,	// (0x0008824e) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd691,	// (0x0008abbb) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd689,	// (0x0008abb3) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd8b5,	// (0x0008addf) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd6bb,	// (0x0008abe5) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd6a1,	// (0x0008abcb) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd6b3,	// (0x0008abdd) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xad04,	// (0x0008822e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x950b,	// (0x00086a35) calenote_gesture_pane_ParamLimits

0x950b,	// (0x00086a35) calenote_gesture_pane

0x9525,	// (0x00086a4f) calenote_window_pane_ParamLimits

0x9525,	// (0x00086a4f) calenote_window_pane

0xe871,	// (0x0008bd9b) popup_note_window_cp01

0x953d,	// (0x00086a67) calenote_swipe_1_pane_ParamLimits

0x953d,	// (0x00086a67) calenote_swipe_1_pane

0x92cb,	// (0x000867f5) calenote_swipe_2_pane_ParamLimits

0x92cb,	// (0x000867f5) calenote_swipe_2_pane

0xe663,	// (0x0008bb8d) calenote_swipe_1_pane_g1_ParamLimits

0xe663,	// (0x0008bb8d) calenote_swipe_1_pane_g1

0xe670,	// (0x0008bb9a) calenote_swipe_1_pane_g2_ParamLimits

0xe670,	// (0x0008bb9a) calenote_swipe_1_pane_g2

0x0001,

0xfcb0,	// (0x0008d1da) calenote_swipe_1_pane_g_ParamLimits

0xfcb0,	// (0x0008d1da) calenote_swipe_1_pane_g

0xe883,	// (0x0008bdad) calenote_swipe_1_pane_t1_ParamLimits

0xe883,	// (0x0008bdad) calenote_swipe_1_pane_t1

0xe663,	// (0x0008bb8d) calenote_swipe_2_pane_g1_ParamLimits

0xe663,	// (0x0008bb8d) calenote_swipe_2_pane_g1

0xe8a2,	// (0x0008bdcc) calenote_swipe_2_pane_g2_ParamLimits

0xe8a2,	// (0x0008bdcc) calenote_swipe_2_pane_g2

0x0001,

0xfd98,	// (0x0008d2c2) calenote_swipe_2_pane_g_ParamLimits

0xfd98,	// (0x0008d2c2) calenote_swipe_2_pane_g

0xe8ae,	// (0x0008bdd8) calenote_swipe_2_pane_t1_ParamLimits

0xe8ae,	// (0x0008bdd8) calenote_swipe_2_pane_t1

0xa149,	// (0x00087673) main_mup_navstr_pane

0x64f9,	// (0x00083a23) main_mup3_pane_t7_ParamLimits

0x64f9,	// (0x00083a23) main_mup3_pane_t7

0x6efc,	// (0x00084426) main_mp4_pane_g6_ParamLimits

0x6efc,	// (0x00084426) main_mp4_pane_g6

0x726c,	// (0x00084796) main_image3_pane_t4_ParamLimits

0x726c,	// (0x00084796) main_image3_pane_t4

0x9550,	// (0x00086a7a) popup_navstr_preview_pane_ParamLimits

0x9550,	// (0x00086a7a) popup_navstr_preview_pane

0x955c,	// (0x00086a86) scroll_navstr_pane_ParamLimits

0x955c,	// (0x00086a86) scroll_navstr_pane

0xa149,	// (0x00087673) bg_popup_preview_window_pane_cp04

0xe8d5,	// (0x0008bdff) popup_navstr_preview_pane_t1

0x9568,	// (0x00086a92) scroll_navstr_pane_g1_ParamLimits

0x9568,	// (0x00086a92) scroll_navstr_pane_g1

0x9575,	// (0x00086a9f) scroll_navstr_pane_t1_ParamLimits

0x9575,	// (0x00086a9f) scroll_navstr_pane_t1

0xe87a,	// (0x0008bda4) bg_button_pane_cp014

0xe87a,	// (0x0008bda4) bg_button_pane_cp030

0x130a,	// (0x0007e834) list_double_fisheye_pane_g4_ParamLimits

0x130a,	// (0x0007e834) list_double_fisheye_pane_g4

0x1316,	// (0x0007e840) list_double_fisheye_pane_g5_ParamLimits

0x1316,	// (0x0007e840) list_double_fisheye_pane_g5

0xe83e,	// (0x0008bd68) sp_fs_scroll_pane_cp03

0xe41b,	// (0x0008b945) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe73b,	// (0x0008bc65) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfccd,	// (0x0008d1f7) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe747,	// (0x0008bc71) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x947a,	// (0x000869a4) sp_fs_scroll_pane_cp02

0xaa11,	// (0x00087f3b) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xaa11,	// (0x00087f3b) popup_sp_fs_calendar_preview_list_single_pane

0xa149,	// (0x00087673) main_cam6_pano_pane

0xa8cd,	// (0x00087df7) main_mup3_pane_ParamLimits

0xa149,	// (0x00087673) main_phacti_pane

0x8e2b,	// (0x00086355) bg_button_pane_cp11

0x8e43,	// (0x0008636d) main_mobtv_info_pane_g2_ParamLimits

0x8e43,	// (0x0008636d) main_mobtv_info_pane_g2

0x0001,

0xfc2d,	// (0x0008d157) main_mobtv_info_pane_g_ParamLimits

0xfc2d,	// (0x0008d157) main_mobtv_info_pane_g

0x8ff5,	// (0x0008651f) sc_clock_pane_t5_ParamLimits

0x8ff5,	// (0x0008651f) sc_clock_pane_t5

0x90a4,	// (0x000865ce) main_radioblah_pane_g1_ParamLimits

0xe5af,	// (0x0008bad9) main_radioblah_pane_t3_ParamLimits

0xe5af,	// (0x0008bad9) main_radioblah_pane_t3

0xe5c7,	// (0x0008baf1) main_radioblah_pane_t4_ParamLimits

0xe5c7,	// (0x0008baf1) main_radioblah_pane_t4

0x90c2,	// (0x000865ec) main_radioblah_text_pane_ParamLimits

0x90c2,	// (0x000865ec) main_radioblah_text_pane

0x90cf,	// (0x000865f9) main_radioblah_info_pane_g1_ParamLimits

0x9168,	// (0x00086692) main_radioblah_info_pane_t4_ParamLimits

0x9168,	// (0x00086692) main_radioblah_info_pane_t4

0xa8cd,	// (0x00087df7) main_sp_fs_calendar_pane

0x9587,	// (0x00086ab1) main_phacti_pane_g1

0x958f,	// (0x00086ab9) phacti_note_pane_ParamLimits

0x958f,	// (0x00086ab9) phacti_note_pane

0xe8ec,	// (0x0008be16) phacti_term_pane_ParamLimits

0xe8ec,	// (0x0008be16) phacti_term_pane

0xe901,	// (0x0008be2b) phacti_note_pane_t1_ParamLimits

0xe901,	// (0x0008be2b) phacti_note_pane_t1

0x1a59,	// (0x0007ef83) phacti_term_pane_g1

0x1a61,	// (0x0007ef8b) phacti_term_pane_t1_ParamLimits

0x1a61,	// (0x0007ef8b) phacti_term_pane_t1

0xe918,	// (0x0008be42) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe920,	// (0x0008be4a) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfda2,	// (0x0008d2cc) popup_sp_fs_calendar_preview_list_single_pane_g

0xe928,	// (0x0008be52) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe928,	// (0x0008be52) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe93e,	// (0x0008be68) aid_popup_sp_fs_bg_corner_pane

0xcc73,	// (0x0008a19d) popup_sp_fs_calendar_preview_bg_pane_g1

0xa149,	// (0x00087673) popup_sp_fs_calendar_preview_bg_pane

0xe946,	// (0x0008be70) popup_sp_fs_calendar_preview_list_pane

0xc822,	// (0x00089d4c) bg_main_sp_fs_cale_pane_ParamLimits

0xc822,	// (0x00089d4c) bg_main_sp_fs_cale_pane

0x1a94,	// (0x0007efbe) listscroll_cale_mrui_pane_ParamLimits

0x1a94,	// (0x0007efbe) listscroll_cale_mrui_pane

0x1aa9,	// (0x0007efd3) listscroll_sp_fs_schedule_track_pane

0x1ab2,	// (0x0007efdc) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x1ab2,	// (0x0007efdc) main_sp_fs_ctrlbar_pane_cp01

0xe94e,	// (0x0008be78) main_sp_fs_ribbon_pane

0x1ac5,	// (0x0007efef) popup_sp_fs_cale_preview_window

0x95ee,	// (0x00086b18) list_single_sp_fs_schedule_track_pane_ParamLimits

0x95ee,	// (0x00086b18) list_single_sp_fs_schedule_track_pane

0x20cd,	// (0x0007f5f7) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x20cd,	// (0x0007f5f7) bg_sp_fs_highlight_list_pane_cp03

0x9603,	// (0x00086b2d) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x9603,	// (0x00086b2d) list_single_sp_fs_schedule_track_pane_g1

0x960f,	// (0x00086b39) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x960f,	// (0x00086b39) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfda7,	// (0x0008d2d1) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfda7,	// (0x0008d2d1) list_single_sp_fs_schedule_track_pane_g

0x961b,	// (0x00086b45) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x961b,	// (0x00086b45) list_single_sp_fs_schedule_track_pane_t1

0x9639,	// (0x00086b63) sp_fs_schedule_track_pane_ParamLimits

0x9639,	// (0x00086b63) sp_fs_schedule_track_pane

0xe956,	// (0x0008be80) sp_fs_schedule_track_pane_g1

0xe95e,	// (0x0008be88) sp_fs_schedule_track_pane_g2

0xe966,	// (0x0008be90) sp_fs_schedule_track_pane_g3

0xe96e,	// (0x0008be98) sp_fs_schedule_track_pane_g4

0xe976,	// (0x0008bea0) sp_fs_schedule_track_pane_g5

0x0004,

0xfdac,	// (0x0008d2d6) sp_fs_schedule_track_pane_g

0xd681,	// (0x0008abab) bg_sp_fs_schedule_viewer_highlight_g1

0xad24,	// (0x0008824e) bg_sp_fs_schedule_viewer_highlight_g2

0xd689,	// (0x0008abb3) bg_sp_fs_schedule_viewer_highlight_g3

0xd691,	// (0x0008abbb) bg_sp_fs_schedule_viewer_highlight_g4

0xd8b5,	// (0x0008addf) bg_sp_fs_schedule_viewer_highlight_g5

0xd6a1,	// (0x0008abcb) bg_sp_fs_schedule_viewer_highlight_g6

0xd6b3,	// (0x0008abdd) bg_sp_fs_schedule_viewer_highlight_g7

0xd6bb,	// (0x0008abe5) bg_sp_fs_schedule_viewer_highlight_g8

0xad04,	// (0x0008822e) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdb7,	// (0x0008d2e1) bg_sp_fs_schedule_viewer_highlight_g

0xa149,	// (0x00087673) bg_main_sp_fs_ribbon_pane

0x964b,	// (0x00086b75) main_sp_fs_ribbon_pane_g1

0xe97e,	// (0x0008bea8) main_sp_fs_ribbon_pane_t1

0x9654,	// (0x00086b7e) main_sp_fs_ribbon_pane_t2

0xe98d,	// (0x0008beb7) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdca,	// (0x0008d2f4) main_sp_fs_ribbon_pane_t

0xe99c,	// (0x0008bec6) main_sp_fs_ribbon_scheduler_pane

0xe9a4,	// (0x0008bece) bg_main_sp_fs_ribbon_pane_g1

0xe9ad,	// (0x0008bed7) bg_main_sp_fs_ribbon_pane_g2

0xe9b6,	// (0x0008bee0) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdd1,	// (0x0008d2fb) bg_main_sp_fs_ribbon_pane_g

0xe9be,	// (0x0008bee8) main_sp_fs_ribbon_scheduler_pane_g1

0xe9c7,	// (0x0008bef1) main_sp_fs_ribbon_scheduler_pane_g2

0xe9d0,	// (0x0008befa) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdd8,	// (0x0008d302) main_sp_fs_ribbon_scheduler_pane_g

0xe9d9,	// (0x0008bf03) list_cale_mrui_pane

0x9663,	// (0x00086b8d) sp_fs_scroll_pane_cp07_ParamLimits

0x9663,	// (0x00086b8d) sp_fs_scroll_pane_cp07

0x967f,	// (0x00086ba9) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x967f,	// (0x00086ba9) bg_sp_fs_schedule_viewer_highlight

0xe9e6,	// (0x0008bf10) list_single_sp_fs_schedule_track_pane_cp01

0xe9ee,	// (0x0008bf18) list_sp_fs_schedule_track_pane

0xe9f6,	// (0x0008bf20) sp_fs_scroll_pane_cp06_ParamLimits

0xe9f6,	// (0x0008bf20) sp_fs_scroll_pane_cp06

0xcc73,	// (0x0008a19d) bgmain_sp_fs_calendar_pane_g1

0x1ad7,	// (0x0007f001) list_single_cale_mrui_pane_ParamLimits

0x1ad7,	// (0x0007f001) list_single_cale_mrui_pane

0x1aec,	// (0x0007f016) list_single_cale_mrui_row_pane_ParamLimits

0x1aec,	// (0x0007f016) list_single_cale_mrui_row_pane

0x1b02,	// (0x0007f02c) list_single_cale_mrui_row_pane_g1_ParamLimits

0x1b02,	// (0x0007f02c) list_single_cale_mrui_row_pane_g1

0x1b2e,	// (0x0007f058) list_single_cale_mrui_row_pane_t1_ParamLimits

0x1b2e,	// (0x0007f058) list_single_cale_mrui_row_pane_t1

0x1b40,	// (0x0007f06a) list_single_cale_mrui_row_pane_t2_ParamLimits

0x1b40,	// (0x0007f06a) list_single_cale_mrui_row_pane_t2

0x1ba6,	// (0x0007f0d0) list_single_cale_mrui_row_pane_t3_ParamLimits

0x1ba6,	// (0x0007f0d0) list_single_cale_mrui_row_pane_t3

0x1bd5,	// (0x0007f0ff) list_single_cale_mrui_row_pane_t4_ParamLimits

0x1bd5,	// (0x0007f0ff) list_single_cale_mrui_row_pane_t4

0x0003,

0xfde6,	// (0x0008d310) list_single_cale_mrui_row_pane_t_ParamLimits

0xfde6,	// (0x0008d310) list_single_cale_mrui_row_pane_t

0x1c04,	// (0x0007f12e) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x1c04,	// (0x0007f12e) list_single_cmail_header_editor_pane_bg_cp01

0x1c28,	// (0x0007f152) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x1c28,	// (0x0007f152) list_single_cmail_header_editor_pane_bg_cp02

0x9698,	// (0x00086bc2) main_radioblah_text_pane_t1_ParamLimits

0x9698,	// (0x00086bc2) main_radioblah_text_pane_t1

0xea15,	// (0x0008bf3f) cam6_indi_pane_cp01

0xea1d,	// (0x0008bf47) cam6_mode_pane_cp01

0xea25,	// (0x0008bf4f) cam6_pano_pane

0xea2e,	// (0x0008bf58) cam6_zoom_pane_cp01

0xea38,	// (0x0008bf62) cam6_pano_image_pane

0xea41,	// (0x0008bf6b) cam6_pano_pane_g1

0xe2e4,	// (0x0008b80e) cam6_pano_pane_g2

0xea4a,	// (0x0008bf74) cam6_pano_pane_g3

0xea53,	// (0x0008bf7d) cam6_pano_pane_g4

0xd215,	// (0x0008a73f) cam6_pano_pane_g5

0xea5c,	// (0x0008bf86) cam6_pano_pane_g6

0xea64,	// (0x0008bf8e) cam6_pano_pane_g7

0xea6c,	// (0x0008bf96) cam6_pano_pane_g8

0xea75,	// (0x0008bf9f) cam6_pano_pane_g9

0x0008,

0xfdef,	// (0x0008d319) cam6_pano_pane_g

0xa149,	// (0x00087673) main_browser_tag_pane

0xe8cd,	// (0x0008bdf7) grid_navstr_albumart_pane

0xea80,	// (0x0008bfaa) cell_navstr_albumart_pane_ParamLimits

0xea80,	// (0x0008bfaa) cell_navstr_albumart_pane

0xea9f,	// (0x0008bfc9) cell_navstr_albumart_pane_g1

0xc62f,	// (0x00089b59) cell_navstr_albumart_pane_g2

0xc63f,	// (0x00089b69) cell_navstr_albumart_pane_g3

0xc637,	// (0x00089b61) cell_navstr_albumart_pane_g4

0x0003,

0xfe02,	// (0x0008d32c) cell_navstr_albumart_pane_g

0x96b2,	// (0x00086bdc) bt_list_pane_ParamLimits

0x96b2,	// (0x00086bdc) bt_list_pane

0x96cb,	// (0x00086bf5) bt_list_pane_t1

0x96da,	// (0x00086c04) bt_list_pane_t2

0x0001,

0xfe0b,	// (0x0008d335) bt_list_pane_t

0xa149,	// (0x00087673) main_cale_prevew_pane

0x96e9,	// (0x00086c13) popup_cale_preview_window_ParamLimits

0x96e9,	// (0x00086c13) popup_cale_preview_window

0xa8cd,	// (0x00087df7) bg_popup_preview_window_pane_cp05_ParamLimits

0xa8cd,	// (0x00087df7) bg_popup_preview_window_pane_cp05

0xeaa7,	// (0x0008bfd1) list_cale_preview_pane_ParamLimits

0xeaa7,	// (0x0008bfd1) list_cale_preview_pane

0x9704,	// (0x00086c2e) list_double_cale_preview_pane_ParamLimits

0x9704,	// (0x00086c2e) list_double_cale_preview_pane

0x9718,	// (0x00086c42) list_single_cale_preview_pane_ParamLimits

0x9718,	// (0x00086c42) list_single_cale_preview_pane

0x9730,	// (0x00086c5a) list_single_cale_preview_pane_g1

0x9738,	// (0x00086c62) list_single_cale_preview_pane_t1_ParamLimits

0x9738,	// (0x00086c62) list_single_cale_preview_pane_t1

0x974d,	// (0x00086c77) list_double_cale_preview_pane_g1

0x9755,	// (0x00086c7f) list_double_cale_preview_pane_t1_ParamLimits

0x9755,	// (0x00086c7f) list_double_cale_preview_pane_t1

0x976a,	// (0x00086c94) list_double_cale_preview_pane_t2_ParamLimits

0x976a,	// (0x00086c94) list_double_cale_preview_pane_t2

0x0001,

0xfe10,	// (0x0008d33a) list_double_cale_preview_pane_t_ParamLimits

0xfe10,	// (0x0008d33a) list_double_cale_preview_pane_t

0xa149,	// (0x00087673) main_ezdial_pane

0xa8cd,	// (0x00087df7) main_sp_fs_email_pane_ParamLimits

0x92ed,	// (0x00086817) cmail_ddmenu_btn01_pane_ParamLimits

0x92ed,	// (0x00086817) cmail_ddmenu_btn01_pane

0x930a,	// (0x00086834) cmail_ddmenu_btn02_pane_ParamLimits

0x930a,	// (0x00086834) cmail_ddmenu_btn02_pane

0x9328,	// (0x00086852) cmail_ddmenu_btn03_pane_ParamLimits

0x9328,	// (0x00086852) cmail_ddmenu_btn03_pane

0x13c8,	// (0x0007e8f2) main_sp_fs_ctrlbar_pane_ParamLimits

0x13e2,	// (0x0007e90c) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x9484,	// (0x000869ae) list_cmail_body_pane_ParamLimits

0xe84d,	// (0x0008bd77) bg_button_pane_cp12

0xe856,	// (0x0008bd80) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe856,	// (0x0008bd80) list_single_cmail_header_detail_pane_g3

0x1a1e,	// (0x0007ef48) list_single_cmail_header_detail_pane_t2_ParamLimits

0x1a1e,	// (0x0007ef48) list_single_cmail_header_detail_pane_t2

0x0001,

0xfd93,	// (0x0008d2bd) list_single_cmail_header_detail_pane_t_ParamLimits

0xfd93,	// (0x0008d2bd) list_single_cmail_header_detail_pane_t

0x1a76,	// (0x0007efa0) phacti_term_pane_t2_ParamLimits

0x1a76,	// (0x0007efa0) phacti_term_pane_t2

0x0001,

0xfd9d,	// (0x0008d2c7) phacti_term_pane_t_ParamLimits

0xfd9d,	// (0x0008d2c7) phacti_term_pane_t

0xeab3,	// (0x0008bfdd) aid_size_list_single_double

0x9782,	// (0x00086cac) popup_ezdial_listscroll_window

0x97a4,	// (0x00086cce) popup_number_entry_window_cp01

0xb40b,	// (0x00088935) bg_popup_call_pane_cp09

0xeabf,	// (0x0008bfe9) ezdial_list_pane

0xeac7,	// (0x0008bff1) scroll_pane_cp23

0xca52,	// (0x00089f7c) bg_button_pane_cp028_ParamLimits

0xca52,	// (0x00089f7c) bg_button_pane_cp028

0x97b2,	// (0x00086cdc) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x97b2,	// (0x00086cdc) cmail_ddmenu_btn01_pane_g1

0x97c4,	// (0x00086cee) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x97c4,	// (0x00086cee) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe15,	// (0x0008d33f) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe15,	// (0x0008d33f) cmail_ddmenu_btn01_pane_g

0xeacf,	// (0x0008bff9) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeacf,	// (0x0008bff9) cmail_ddmenu_btn01_pane_t1

0xc822,	// (0x00089d4c) bg_button_pane_cp029_ParamLimits

0xc822,	// (0x00089d4c) bg_button_pane_cp029

0x97d0,	// (0x00086cfa) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x97d0,	// (0x00086cfa) cmail_ddmenu_btn02_pane_g1

0x97e8,	// (0x00086d12) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x97e8,	// (0x00086d12) cmail_ddmenu_btn02_pane_t1

0x20cd,	// (0x0007f5f7) bg_button_pane_cp031_ParamLimits

0x20cd,	// (0x0007f5f7) bg_button_pane_cp031

0x97d0,	// (0x00086cfa) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x97d0,	// (0x00086cfa) cmail_ddmenu_btn03_pane_g1

0x97e8,	// (0x00086d12) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x97e8,	// (0x00086d12) cmail_ddmenu_btn03_pane_t1

0x7115,	// (0x0008463f) cell_dialer2_keypad_pane_t1_ParamLimits

0x712f,	// (0x00084659) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x712f,	// (0x00084659) cell_dialer2_keypad_pane_t1_copy1

0x8c9c,	// (0x000861c6) ncimui_group_button_pane

0xa8cd,	// (0x00087df7) main_sp_fs_calendar_pane_ParamLimits

0x949d,	// (0x000869c7) list_single_cmail_header_caption_pane_ParamLimits

0x1a8b,	// (0x0007efb5) aid_recal_txt_sm_pane

0xa149,	// (0x00087673) mian_recal_day_pane

0x1ac5,	// (0x0007efef) popup_sp_fs_cale_preview_window_ParamLimits

0xeae5,	// (0x0008c00f) list_recal_day_pane

0x1c60,	// (0x0007f18a) list_single_recal_day_pane_ParamLimits

0x1c60,	// (0x0007f18a) list_single_recal_day_pane

0xeb0c,	// (0x0008c036) list_single_recal_day_pane_g1_ParamLimits

0xeb0c,	// (0x0008c036) list_single_recal_day_pane_g1

0x1c72,	// (0x0007f19c) list_single_recal_day_pane_g2_ParamLimits

0x1c72,	// (0x0007f19c) list_single_recal_day_pane_g2

0x1c7e,	// (0x0007f1a8) list_single_recal_day_pane_g3_ParamLimits

0x1c7e,	// (0x0007f1a8) list_single_recal_day_pane_g3

0x1c8a,	// (0x0007f1b4) list_single_recal_day_pane_g4_ParamLimits

0x1c8a,	// (0x0007f1b4) list_single_recal_day_pane_g4

0x1c98,	// (0x0007f1c2) list_single_recal_day_pane_g5_ParamLimits

0x1c98,	// (0x0007f1c2) list_single_recal_day_pane_g5

0x1cae,	// (0x0007f1d8) list_single_recal_day_pane_g6_ParamLimits

0x1cae,	// (0x0007f1d8) list_single_recal_day_pane_g6

0x0004,

0xfe24,	// (0x0008d34e) list_single_recal_day_pane_g_ParamLimits

0xfe24,	// (0x0008d34e) list_single_recal_day_pane_g

0x1cc2,	// (0x0007f1ec) list_single_recal_day_pane_t1

0x1cd4,	// (0x0007f1fe) list_single_recal_day_pane_t2

0x0001,

0xfe2f,	// (0x0008d359) list_single_recal_day_pane_t

0x980c,	// (0x00086d36) ncimui_query_button_pane_ParamLimits

0x980c,	// (0x00086d36) ncimui_query_button_pane

0x981c,	// (0x00086d46) ncimui_query_button_pane_t1_ParamLimits

0x981c,	// (0x00086d46) ncimui_query_button_pane_t1

0xeb18,	// (0x0008c042) ncimui_query_button_pane_t2_ParamLimits

0xeb18,	// (0x0008c042) ncimui_query_button_pane_t2

0x0001,

0xfe34,	// (0x0008d35e) ncimui_query_button_pane_t_ParamLimits

0xfe34,	// (0x0008d35e) ncimui_query_button_pane_t

0x982f,	// (0x00086d59) query_button_pane_ParamLimits

0x982f,	// (0x00086d59) query_button_pane

0xa149,	// (0x00087673) bg_button_pane_cp0028

0xeb2b,	// (0x0008c055) query_button_pane_t1

0x54f8,	// (0x00082a22) main_tport_pane_ParamLimits

0x9386,	// (0x000868b0) bg_popup_window_pane_cp01_ParamLimits

0x9386,	// (0x000868b0) bg_popup_window_pane_cp01

0x9394,	// (0x000868be) heading_pane_cp08_ParamLimits

0x9394,	// (0x000868be) heading_pane_cp08

0x93a2,	// (0x000868cc) heading_pane_cp07_ParamLimits

0x93a2,	// (0x000868cc) heading_pane_cp07

0x9413,	// (0x0008693d) cell_tport_appsw_pane_g2

0x0002,

0xfd80,	// (0x0008d2aa) cell_tport_appsw_pane_g

0x0d89,	// (0x0007e2b3) input_candi_list_open_g1

0xaed8,	// (0x00088402) list_cale_time_pane_g6_ParamLimits

0xaed8,	// (0x00088402) list_cale_time_pane_g6

0x5f83,	// (0x000834ad) aid_size_touch_calib_1_ParamLimits

0x5f83,	// (0x000834ad) aid_size_touch_calib_1

0x5f8f,	// (0x000834b9) aid_size_touch_calib_2_ParamLimits

0x5f8f,	// (0x000834b9) aid_size_touch_calib_2

0x5f9d,	// (0x000834c7) aid_size_touch_calib_3_ParamLimits

0x5f9d,	// (0x000834c7) aid_size_touch_calib_3

0x5fad,	// (0x000834d7) aid_size_touch_calib_4_ParamLimits

0x5fad,	// (0x000834d7) aid_size_touch_calib_4

0x5fbb,	// (0x000834e5) main_touch_calib_button_group_pane_ParamLimits

0x5fbb,	// (0x000834e5) main_touch_calib_button_group_pane

0x5fc9,	// (0x000834f3) main_touch_calib_pane_g1_ParamLimits

0x5fd5,	// (0x000834ff) main_touch_calib_pane_g2_ParamLimits

0x5fe1,	// (0x0008350b) main_touch_calib_pane_g3_ParamLimits

0x5fed,	// (0x00083517) main_touch_calib_pane_g4_ParamLimits

0xf751,	// (0x0008cc7b) main_touch_calib_pane_g_ParamLimits

0x5ff9,	// (0x00083523) main_touch_calib_pane_t1_ParamLimits

0x6010,	// (0x0008353a) main_touch_calib_pane_t2_ParamLimits

0x6029,	// (0x00083553) main_touch_calib_pane_t3_ParamLimits

0x603f,	// (0x00083569) main_touch_calib_pane_t4_ParamLimits

0x6055,	// (0x0008357f) main_touch_calib_pane_t5_ParamLimits

0xf75a,	// (0x0008cc84) main_touch_calib_pane_t_ParamLimits

0xcfa3,	// (0x0008a4cd) list_single_fp_cale_pane_g3_ParamLimits

0xcfa3,	// (0x0008a4cd) list_single_fp_cale_pane_g3

0xa8cd,	// (0x00087df7) bg_button_pane_cp012_ParamLimits

0xa8cd,	// (0x00087df7) bg_vkb2_func_pane_cp03_ParamLimits

0x7f28,	// (0x00085452) cell_vitu2_function_top_pane_g1_ParamLimits

0xa8cd,	// (0x00087df7) bg_vkb2_func_pane_cp04_ParamLimits

0x8c22,	// (0x0008614c) main_ncimui_button_group_pane_ParamLimits

0x8c22,	// (0x0008614c) main_ncimui_button_group_pane

0x8c8a,	// (0x000861b4) main_ncimui_pane_t3_ParamLimits

0x8c8a,	// (0x000861b4) main_ncimui_pane_t3

0xe8e3,	// (0x0008be0d) phacti_button_group_pane

0xeab3,	// (0x0008bfdd) aid_size_list_single_double_ParamLimits

0x9782,	// (0x00086cac) popup_ezdial_listscroll_window_ParamLimits

0x97a4,	// (0x00086cce) popup_number_entry_window_cp01_ParamLimits

0x983c,	// (0x00086d66) phacti_button_pane_ParamLimits

0x983c,	// (0x00086d66) phacti_button_pane

0xa149,	// (0x00087673) bg_button_pane_cp14

0xeb39,	// (0x0008c063) phacti_button_pane_t1

0x984d,	// (0x00086d77) main_touch_calib_button_pane_ParamLimits

0x984d,	// (0x00086d77) main_touch_calib_button_pane

0xa8fb,	// (0x00087e25) bg_button_pane_cp18_ParamLimits

0xa8fb,	// (0x00087e25) bg_button_pane_cp18

0xeb47,	// (0x0008c071) main_touch_calib_button_pane_t1_ParamLimits

0xeb47,	// (0x0008c071) main_touch_calib_button_pane_t1

0xeb5d,	// (0x0008c087) main_touch_calib_button_pane_t2_ParamLimits

0xeb5d,	// (0x0008c087) main_touch_calib_button_pane_t2

0x0001,

0xfe39,	// (0x0008d363) main_touch_calib_button_pane_t_ParamLimits

0xfe39,	// (0x0008d363) main_touch_calib_button_pane_t

0xa149,	// (0x00087673) cell_ncimui_button_pane

0xa149,	// (0x00087673) bg_button_pane_cp032

0xeb7b,	// (0x0008c0a5) cell_ncimui_button_pane_t1

0x718b,	// (0x000846b5) image3_infobar_pane_ParamLimits

0x718b,	// (0x000846b5) image3_infobar_pane

0x9017,	// (0x00086541) fs_bigclock_status_pane_ParamLimits

0x9017,	// (0x00086541) fs_bigclock_status_pane

0x9024,	// (0x0008654e) main_fs_bigclock_clock_pane_ParamLimits

0x9024,	// (0x0008654e) main_fs_bigclock_clock_pane

0x9040,	// (0x0008656a) main_fs_bigclock_indi_pane_ParamLimits

0x9040,	// (0x0008656a) main_fs_bigclock_indi_pane

0x9072,	// (0x0008659c) main_fs_bigclock_swipe_pane_ParamLimits

0x9072,	// (0x0008659c) main_fs_bigclock_swipe_pane

0xa149,	// (0x00087673) main_fs_clock_dumped_data

0xe3f1,	// (0x0008b91b) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe3f1,	// (0x0008b91b) list_single_fs_bigclock_indicator_pane_g1

0xe43b,	// (0x0008b965) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe43b,	// (0x0008b965) list_single_fs_bigclock_indicator_pane_g2

0xe455,	// (0x0008b97f) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe455,	// (0x0008b97f) list_single_fs_bigclock_indicator_pane_g3

0xe46f,	// (0x0008b999) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe46f,	// (0x0008b999) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc61,	// (0x0008d18b) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc61,	// (0x0008d18b) list_single_fs_bigclock_indicator_pane_g

0xe49a,	// (0x0008b9c4) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe49a,	// (0x0008b9c4) list_single_fs_bigclock_indicator_pane_t1

0xe4c2,	// (0x0008b9ec) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe4c2,	// (0x0008b9ec) list_single_fs_bigclock_indicator_pane_t2

0xe4ea,	// (0x0008ba14) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe4ea,	// (0x0008ba14) list_single_fs_bigclock_indicator_pane_t3

0xe512,	// (0x0008ba3c) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe512,	// (0x0008ba3c) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc6c,	// (0x0008d196) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc6c,	// (0x0008d196) list_single_fs_bigclock_indicator_pane_t

0xeb89,	// (0x0008c0b3) image3_infobar_fav_pane_ParamLimits

0xeb89,	// (0x0008c0b3) image3_infobar_fav_pane

0xeb99,	// (0x0008c0c3) image3_infobar_loc_pane_ParamLimits

0xeb99,	// (0x0008c0c3) image3_infobar_loc_pane

0xebaf,	// (0x0008c0d9) image3_infobar_time_pane_ParamLimits

0xebaf,	// (0x0008c0d9) image3_infobar_time_pane

0xcc73,	// (0x0008a19d) image3_infobar_time_pane_g1

0xebbf,	// (0x0008c0e9) image3_infobar_time_pane_t1

0xcc73,	// (0x0008a19d) image3_infobar_loc_pane_g1

0xebcd,	// (0x0008c0f7) image3_infobar_loc_pane_g2

0x0001,

0xfe3e,	// (0x0008d368) image3_infobar_loc_pane_g

0xebd5,	// (0x0008c0ff) image3_infobar_loc_pane_t1

0xcc73,	// (0x0008a19d) image3_infobar_fav_pane_g1

0xebe3,	// (0x0008c10d) image3_infobar_fav_pane_g2

0x0001,

0xfe43,	// (0x0008d36d) image3_infobar_fav_pane_g

0xebeb,	// (0x0008c115) fs_bigclock_status_battery_pane

0xebf4,	// (0x0008c11e) fs_bigclock_status_signal_pane

0xebfd,	// (0x0008c127) fs_bigclock_status_title_pane

0xec06,	// (0x0008c130) fs_bigclock_status_signal_pane_g1

0xec0f,	// (0x0008c139) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe48,	// (0x0008d372) fs_bigclock_status_signal_pane_g

0xec17,	// (0x0008c141) fs_bigclock_status_battery_pane_g1

0xec20,	// (0x0008c14a) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe4d,	// (0x0008d377) fs_bigclock_status_battery_pane_g

0xec28,	// (0x0008c152) fs_bigclock_status_title_pane_t1

0xcc73,	// (0x0008a19d) main_fs_bigclock_clock_pane_g1

0xec36,	// (0x0008c160) main_fs_bigclock_clock_pane_g2

0xec41,	// (0x0008c16b) main_fs_bigclock_clock_pane_g3

0xec41,	// (0x0008c16b) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe52,	// (0x0008d37c) main_fs_bigclock_clock_pane_g

0xec4d,	// (0x0008c177) main_fs_bigclock_clock_pane_t1

0x985d,	// (0x00086d87) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe5b,	// (0x0008d385) main_fs_bigclock_clock_pane_t

0x986c,	// (0x00086d96) list_single_fs_bigclock_indicator_pane_ParamLimits

0x986c,	// (0x00086d96) list_single_fs_bigclock_indicator_pane

0x987d,	// (0x00086da7) list_single_fs_bigclock_pane_ParamLimits

0x987d,	// (0x00086da7) list_single_fs_bigclock_pane

0xec64,	// (0x0008c18e) main_fs_bigclock_indicator_pane_t1

0xec73,	// (0x0008c19d) list_single_fs_bigclock_pane_g1

0xec7b,	// (0x0008c1a5) list_single_fs_bigclock_pane_t1

0xcc73,	// (0x0008a19d) main_fs_bigclock_swipe_pane_g1

0xecbe,	// (0x0008c1e8) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe6c,	// (0x0008d396) main_fs_bigclock_swipe_pane_g

0xecc6,	// (0x0008c1f0) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xecc6,	// (0x0008c1f0) main_fs_bigclock_swipe_pane_t1

0x4413,	// (0x0008193d) call_type_pane_ParamLimits

0xa149,	// (0x00087673) main_btmg_pane

0x968c,	// (0x00086bb6) list_single_cale_mrui_row_pane_g2_ParamLimits

0x968c,	// (0x00086bb6) list_single_cale_mrui_row_pane_g2

0x0002,

0xfddf,	// (0x0008d309) list_single_cale_mrui_row_pane_g_ParamLimits

0xfddf,	// (0x0008d309) list_single_cale_mrui_row_pane_g

0x1c4e,	// (0x0007f178) list_recal_vselct_arw_lo_pane

0xeb04,	// (0x0008c02e) list_recal_vselct_arw_up_pane

0x1c56,	// (0x0007f180) list_recal_vselct_pane

0x98d3,	// (0x00086dfd) btmg_button_pane

0x98df,	// (0x00086e09) main_btmg_pane_g1

0xa149,	// (0x00087673) bg_button_pane_cp044

0xece3,	// (0x0008c20d) btmg_button_pane_t1

0xc80e,	// (0x00089d38) aid_listscroll_gen

0xa8cd,	// (0x00087df7) main_cntbar_detail_pane

0xe82e,	// (0x0008bd58) list_cmail_folder_pane

0xe83e,	// (0x0008bd68) sp_fs_scroll_pane_cp03_ParamLimits

0x1ce6,	// (0x0007f210) list_single_fs_dyc_pane_cp01_ParamLimits

0x1ce6,	// (0x0007f210) list_single_fs_dyc_pane_cp01

0xecf1,	// (0x0008c21b) aid_size_cmail_indent

0x1d03,	// (0x0007f22d) list_single_dyc_row_pane_cp01

0x9907,	// (0x00086e31) cntbar_detail_list_pane_ParamLimits

0x9907,	// (0x00086e31) cntbar_detail_list_pane

0x9947,	// (0x00086e71) main_cntbar_detail_cont_pane_ParamLimits

0x9947,	// (0x00086e71) main_cntbar_detail_cont_pane

0x4407,	// (0x00081931) scroll_pane_cp032_ParamLimits

0x4407,	// (0x00081931) scroll_pane_cp032

0x9953,	// (0x00086e7d) cntbar_detail_list_event_pane_ParamLimits

0x9953,	// (0x00086e7d) cntbar_detail_list_event_pane

0x9915,	// (0x00086e3f) cntbar_detail_list_shct_pane

0xad72,	// (0x0008829c) aid_list_gen

0xecfa,	// (0x0008c224) aid_scroll

0xed03,	// (0x0008c22d) aid_size_touch_scroll_bar

0x84c0,	// (0x000859ea) aid_list_double

0xed0c,	// (0x0008c236) aid_list_single

0x84ae,	// (0x000859d8) aid_list_single_lg

0x1d0c,	// (0x0007f236) aid_list_z_g_a_sm

0x9963,	// (0x00086e8d) aid_list_z_g_d

0x1d14,	// (0x0007f23e) aid_txt_z_prm

0x1d22,	// (0x0007f24c) aid_txt_z_prm_cp01

0x1d30,	// (0x0007f25a) aid_txt_z_sec

0x996b,	// (0x00086e95) main_cntbar_detail_cont_pane_g1_ParamLimits

0x996b,	// (0x00086e95) main_cntbar_detail_cont_pane_g1

0x9978,	// (0x00086ea2) main_cntbar_detail_cont_pane_g2_ParamLimits

0x9978,	// (0x00086ea2) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe71,	// (0x0008d39b) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe71,	// (0x0008d39b) main_cntbar_detail_cont_pane_g

0xed15,	// (0x0008c23f) main_cntbar_detail_cont_pane_t1

0xed23,	// (0x0008c24d) main_cntbar_detail_cont_pane_t2

0xed31,	// (0x0008c25b) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe76,	// (0x0008d3a0) main_cntbar_detail_cont_pane_t

0x9984,	// (0x00086eae) cell_cntbar_detail_list_shct_pane_ParamLimits

0x9984,	// (0x00086eae) cell_cntbar_detail_list_shct_pane

0xed3f,	// (0x0008c269) cntbar_detail_list_shct_pane_g1

0xed48,	// (0x0008c272) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe7d,	// (0x0008d3a7) cntbar_detail_list_shct_pane_g

0x9998,	// (0x00086ec2) cntbar_detail_list_event_pane_g1_ParamLimits

0x9998,	// (0x00086ec2) cntbar_detail_list_event_pane_g1

0x99a4,	// (0x00086ece) cntbar_detail_list_event_pane_g2_ParamLimits

0x99a4,	// (0x00086ece) cntbar_detail_list_event_pane_g2

0x0005,

0xfe82,	// (0x0008d3ac) cntbar_detail_list_event_pane_g_ParamLimits

0xfe82,	// (0x0008d3ac) cntbar_detail_list_event_pane_g

0x9a12,	// (0x00086f3c) cntbar_detail_list_event_pane_t1_ParamLimits

0x9a12,	// (0x00086f3c) cntbar_detail_list_event_pane_t1

0x9a27,	// (0x00086f51) cntbar_detail_list_event_pane_t2_ParamLimits

0x9a27,	// (0x00086f51) cntbar_detail_list_event_pane_t2

0x0002,

0xfe8f,	// (0x0008d3b9) cntbar_detail_list_event_pane_t_ParamLimits

0xfe8f,	// (0x0008d3b9) cntbar_detail_list_event_pane_t

0xcc73,	// (0x0008a19d) cell_cntbar_detail_list_shct_pane_g1

0x47e6,	// (0x00081d10) navi_pane_mv_g3

0xa8cd,	// (0x00087df7) main_cntbar_detail_pane_ParamLimits

0xa149,	// (0x00087673) main_notif_wgt_pane

0x6e35,	// (0x0008435f) aid_tch_main_mp4_pane_g4

0x7074,	// (0x0008459e) popup_slider_window_cp02

0x1c44,	// (0x0007f16e) list_recal_day_event_pane

0x98e7,	// (0x00086e11) cntbar_detail_btn_pane_ParamLimits

0x98e7,	// (0x00086e11) cntbar_detail_btn_pane

0x98f7,	// (0x00086e21) cntbar_detail_btn_pane_cp01_ParamLimits

0x98f7,	// (0x00086e21) cntbar_detail_btn_pane_cp01

0x9915,	// (0x00086e3f) cntbar_detail_list_shct_pane_ParamLimits

0x9921,	// (0x00086e4b) cntbar_detail_pane_g1_ParamLimits

0x9921,	// (0x00086e4b) cntbar_detail_pane_g1

0x9931,	// (0x00086e5b) cntbar_detail_pane_t1_ParamLimits

0x9931,	// (0x00086e5b) cntbar_detail_pane_t1

0x99b0,	// (0x00086eda) cntbar_detail_list_event_pane_g3_ParamLimits

0x99b0,	// (0x00086eda) cntbar_detail_list_event_pane_g3

0x99c8,	// (0x00086ef2) cntbar_detail_list_event_pane_g4_ParamLimits

0x99c8,	// (0x00086ef2) cntbar_detail_list_event_pane_g4

0x99e0,	// (0x00086f0a) cntbar_detail_list_event_pane_g5_ParamLimits

0x99e0,	// (0x00086f0a) cntbar_detail_list_event_pane_g5

0x99f8,	// (0x00086f22) cntbar_detail_list_event_pane_g6_ParamLimits

0x99f8,	// (0x00086f22) cntbar_detail_list_event_pane_g6

0x9a3c,	// (0x00086f66) cntbar_detail_list_event_pane_t3_ParamLimits

0x9a3c,	// (0x00086f66) cntbar_detail_list_event_pane_t3

0x9a4e,	// (0x00086f78) popup_notif_wgt_window_ParamLimits

0x9a4e,	// (0x00086f78) popup_notif_wgt_window

0x9a5e,	// (0x00086f88) popup_submenu_window_cp01_ParamLimits

0x9a5e,	// (0x00086f88) popup_submenu_window_cp01

0xb40b,	// (0x00088935) bg_popup_window_pane_cp10

0xed51,	// (0x0008c27b) listscroll_notif_wgt_pane

0xed63,	// (0x0008c28d) list_notif_wgt_window

0xed6c,	// (0x0008c296) scroll_pane_cp033

0x9a6e,	// (0x00086f98) list_notif_wgt_row_pane_ParamLimits

0x9a6e,	// (0x00086f98) list_notif_wgt_row_pane

0xed75,	// (0x0008c29f) aid_size_list_notif_wgt_del

0xed82,	// (0x0008c2ac) list_notif_wgt_row_pane_g1

0xed8e,	// (0x0008c2b8) list_notif_wgt_row_pane_g2

0xeda2,	// (0x0008c2cc) list_notif_wgt_row_pane_g3

0x0002,

0xfe96,	// (0x0008d3c0) list_notif_wgt_row_pane_g

0xedaf,	// (0x0008c2d9) list_notif_wgt_row_pane_t1

0xedc5,	// (0x0008c2ef) list_notif_wgt_row_pane_t2

0xedd7,	// (0x0008c301) list_notif_wgt_row_pane_t3

0x0002,

0xfe9d,	// (0x0008d3c7) list_notif_wgt_row_pane_t

0xd8bd,	// (0x0008ade7) list_recal_day_event_pane_g1

0xede9,	// (0x0008c313) list_recal_day_event_pane_t1

0xa149,	// (0x00087673) bg_button_pane_cp045

0xedf8,	// (0x0008c322) cntbar_detail_btn_pane_t1

0xc822,	// (0x00089d4c) main_callh_pane_ParamLimits

0xc822,	// (0x00089d4c) main_callh_pane

0xa149,	// (0x00087673) main_coverflow0_pane

0xa149,	// (0x00087673) main_wgtman_pane

0x908a,	// (0x000865b4) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x908a,	// (0x000865b4) main_fs_bigclock_unlock_btn_pane

0x940b,	// (0x00086935) bg_button_pane_cp16

0x941b,	// (0x00086945) cell_tport_appsw_pane_g3

0x9a7f,	// (0x00086fa9) cf0_flow_pane_ParamLimits

0x9a7f,	// (0x00086fa9) cf0_flow_pane

0xee06,	// (0x0008c330) listscroll_cf0_pane

0xee11,	// (0x0008c33b) main_cf0_pane_g1

0x9a8e,	// (0x00086fb8) main_cf0_pane_t1_ParamLimits

0x9a8e,	// (0x00086fb8) main_cf0_pane_t1

0x9aa2,	// (0x00086fcc) main_cf0_pane_t2_ParamLimits

0x9aa2,	// (0x00086fcc) main_cf0_pane_t2

0x0001,

0xfea9,	// (0x0008d3d3) main_cf0_pane_t_ParamLimits

0xfea9,	// (0x0008d3d3) main_cf0_pane_t

0xee23,	// (0x0008c34d) scroll_pane_cp11

0x9ab6,	// (0x00086fe0) cf0_flow_pane_g1

0x9abe,	// (0x00086fe8) cf0_flow_pane_g2

0x0001,

0xfeae,	// (0x0008d3d8) cf0_flow_pane_g

0x9ac6,	// (0x00086ff0) cf0_flow_pane_t1

0xa149,	// (0x00087673) main_call6_pane

0xa149,	// (0x00087673) main_calllock_pane

0x9ad4,	// (0x00086ffe) call6_btn_grp_pane_ParamLimits

0x9ad4,	// (0x00086ffe) call6_btn_grp_pane

0x9ae1,	// (0x0008700b) call6_pane_g1_ParamLimits

0x9ae1,	// (0x0008700b) call6_pane_g1

0x9af1,	// (0x0008701b) popup_call6_1st_window_ParamLimits

0x9af1,	// (0x0008701b) popup_call6_1st_window

0x9aff,	// (0x00087029) popup_call6_2nd_window_ParamLimits

0x9aff,	// (0x00087029) popup_call6_2nd_window

0x9b0d,	// (0x00087037) cell_call6_btn_pane_ParamLimits

0x9b0d,	// (0x00087037) cell_call6_btn_pane

0xb40b,	// (0x00088935) bg_popup_call2_in_pane_cp03

0xee2e,	// (0x0008c358) popup_call6_1st_window_g1

0xee36,	// (0x0008c360) popup_call6_1st_window_g2

0xee3e,	// (0x0008c368) popup_call6_1st_window_g3

0x0002,

0xfeb3,	// (0x0008d3dd) popup_call6_1st_window_g

0xee46,	// (0x0008c370) popup_call6_1st_window_t1

0xee55,	// (0x0008c37f) popup_call6_1st_window_t2

0xee65,	// (0x0008c38f) popup_call6_1st_window_t3

0x0002,

0xfeba,	// (0x0008d3e4) popup_call6_1st_window_t

0xb40b,	// (0x00088935) bg_popup_call2_in_pane_cp04

0xee2e,	// (0x0008c358) popup_call6_2nd_window_g1

0xee36,	// (0x0008c360) popup_call6_2nd_window_g2

0xee3e,	// (0x0008c368) popup_call6_2nd_window_g3

0x0002,

0xfeb3,	// (0x0008d3dd) popup_call6_2nd_window_g

0xee46,	// (0x0008c370) popup_call6_2nd_window_t1

0xa149,	// (0x00087673) bg_button_pane_cp15

0xee75,	// (0x0008c39f) cell_call6_btn_pane_g1

0xee7e,	// (0x0008c3a8) cell_call6_btn_pane_t1

0x9b1c,	// (0x00087046) listscroll_wgtman_pane_ParamLimits

0x9b1c,	// (0x00087046) listscroll_wgtman_pane

0x9b38,	// (0x00087062) wgtman_btn_pane_ParamLimits

0x9b38,	// (0x00087062) wgtman_btn_pane

0xb2c3,	// (0x000887ed) aid_scroll_copy1

0xee8d,	// (0x0008c3b7) list_wgtman_pane

0x9b6d,	// (0x00087097) wgtman_btn_pane_g1_ParamLimits

0x9b6d,	// (0x00087097) wgtman_btn_pane_g1

0x9b95,	// (0x000870bf) wgtman_btn_pane_t1_ParamLimits

0x9b95,	// (0x000870bf) wgtman_btn_pane_t1

0xee97,	// (0x0008c3c1) wgtman_btn_pane_t2_ParamLimits

0xee97,	// (0x0008c3c1) wgtman_btn_pane_t2

0x0001,

0xfec1,	// (0x0008d3eb) wgtman_btn_pane_t_ParamLimits

0xfec1,	// (0x0008d3eb) wgtman_btn_pane_t

0x9bcc,	// (0x000870f6) listrow_wgtman_pane_ParamLimits

0x9bcc,	// (0x000870f6) listrow_wgtman_pane

0x9be0,	// (0x0008710a) listrow_wgtman_pane_g1

0x9bed,	// (0x00087117) listrow_wgtman_pane_g2

0x0001,

0xfec6,	// (0x0008d3f0) listrow_wgtman_pane_g

0x1d3e,	// (0x0007f268) listrow_wgtman_pane_t1

0x1d56,	// (0x0007f280) listrow_wgtman_pane_t2

0x0001,

0xfecb,	// (0x0008d3f5) listrow_wgtman_pane_t

0x1d7c,	// (0x0007f2a6) wait_bar_pane_cp09

0xeeae,	// (0x0008c3d8) main_calllock_btn_pane

0xeeb8,	// (0x0008c3e2) main_calllock_pane_g1

0xa149,	// (0x00087673) bg_button_pane_cp17

0xeec4,	// (0x0008c3ee) main_calllock_btn_pane_g1

0xeecd,	// (0x0008c3f7) main_calllock_btn_pane_t1

0xa149,	// (0x00087673) main_dialer3_pane

0xa149,	// (0x00087673) main_fmrd2_pane

0xcc73,	// (0x0008a19d) main_fs_bigclock_unlock_btn_pane_g1

0xeee4,	// (0x0008c40e) main_fs_bigclock_unlock_btn_pane_t1

0x9c0b,	// (0x00087135) area_fmrd2_info_pane_ParamLimits

0x9c0b,	// (0x00087135) area_fmrd2_info_pane

0x9c17,	// (0x00087141) area_fmrd2_visual_pane_ParamLimits

0x9c17,	// (0x00087141) area_fmrd2_visual_pane

0x9c25,	// (0x0008714f) fmrd2_indi_pane_ParamLimits

0x9c25,	// (0x0008714f) fmrd2_indi_pane

0x9c32,	// (0x0008715c) area_fmrd2_visual_pane_g1

0x9c3a,	// (0x00087164) area_fmrd2_visual_pane_t1

0x9c4a,	// (0x00087174) area_fmrd2_visual_pane_t2

0x9c5a,	// (0x00087184) area_fmrd2_visual_pane_t3

0x0002,

0xfed5,	// (0x0008d3ff) area_fmrd2_visual_pane_t

0x9c6a,	// (0x00087194) area_fmrd2_info_pane_g1

0x9c72,	// (0x0008719c) area_fmrd2_info_pane_t1

0x9c82,	// (0x000871ac) area_fmrd2_info_pane_t2

0x9c92,	// (0x000871bc) area_fmrd2_info_pane_t3

0x9ca2,	// (0x000871cc) area_fmrd2_info_pane_t4

0x0003,

0xfedc,	// (0x0008d406) area_fmrd2_info_pane_t

0x9cb2,	// (0x000871dc) fmrd2_indi_pane_t1

0x9cc2,	// (0x000871ec) fmrd2_indi_pane_t2

0x9cd2,	// (0x000871fc) fmrd2_indi_pane_t3

0x0002,

0xfee5,	// (0x0008d40f) fmrd2_indi_pane_t

0xe47e,	// (0x0008b9a8) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe47e,	// (0x0008b9a8) list_single_fs_bigclock_indicator_pane_g5

0xe52e,	// (0x0008ba58) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe52e,	// (0x0008ba58) list_single_fs_bigclock_indicator_pane_t5

0x95a5,	// (0x00086acf) aid_cell_bcale_month_pane_ParamLimits

0x95a5,	// (0x00086acf) aid_cell_bcale_month_pane

0x95c3,	// (0x00086aed) bcale_month_pane_ParamLimits

0x95c3,	// (0x00086aed) bcale_month_pane

0x95df,	// (0x00086b09) bcale_preview_pane_ParamLimits

0x95df,	// (0x00086b09) bcale_preview_pane

0xec7b,	// (0x0008c1a5) list_single_fs_bigclock_pane_t1_ParamLimits

0xec9a,	// (0x0008c1c4) list_single_fs_bigclock_pane_t2_ParamLimits

0xec9a,	// (0x0008c1c4) list_single_fs_bigclock_pane_t2

0x0001,

0xfe67,	// (0x0008d391) list_single_fs_bigclock_pane_t_ParamLimits

0xfe67,	// (0x0008d391) list_single_fs_bigclock_pane_t

0xeedc,	// (0x0008c406) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfed0,	// (0x0008d3fa) main_fs_bigclock_unlock_btn_pane_g

0x9ce2,	// (0x0008720c) aid_dia3_key_size_ParamLimits

0x9ce2,	// (0x0008720c) aid_dia3_key_size

0x9cee,	// (0x00087218) aid_dia3_listrow_size_ParamLimits

0x9cee,	// (0x00087218) aid_dia3_listrow_size

0x9cfe,	// (0x00087228) dia3_keypad_fun_pane_ParamLimits

0x9cfe,	// (0x00087228) dia3_keypad_fun_pane

0x9d0e,	// (0x00087238) dia3_keypad_num_pane_ParamLimits

0x9d0e,	// (0x00087238) dia3_keypad_num_pane

0x9d1e,	// (0x00087248) dia3_listscroll_pane_ParamLimits

0x9d1e,	// (0x00087248) dia3_listscroll_pane

0x9d2c,	// (0x00087256) dia3_numentry_pane_ParamLimits

0x9d2c,	// (0x00087256) dia3_numentry_pane

0xeef2,	// (0x0008c41c) dia3_list_pane

0xeefd,	// (0x0008c427) scroll_pane_cp12

0xa149,	// (0x00087673) bg_dia3_numentry_pane

0x9d3a,	// (0x00087264) dia3_numentry_pane_t1

0x9d49,	// (0x00087273) cell_dia3_key_num_pane

0x9d51,	// (0x0008727b) cell_dia3_key0_fun_pane_ParamLimits

0x9d51,	// (0x0008727b) cell_dia3_key0_fun_pane

0x9d5e,	// (0x00087288) cell_dia3_key1_fun_pane_ParamLimits

0x9d5e,	// (0x00087288) cell_dia3_key1_fun_pane

0x9d6b,	// (0x00087295) dia3_listrow_pane

0xe15c,	// (0x0008b686) bg_dia3_numentry_pane_g1

0xa149,	// (0x00087673) bg_button_pane_cp21

0xef08,	// (0x0008c432) cell_dia3_key_num_pane_t1

0xef16,	// (0x0008c440) cell_dia3_key_num_pane_t2

0xef25,	// (0x0008c44f) cell_dia3_key_num_pane_t3

0xef34,	// (0x0008c45e) cell_dia3_key_num_pane_t4

0x0003,

0xfeec,	// (0x0008d416) cell_dia3_key_num_pane_t

0xa149,	// (0x00087673) bg_button_pane_cp19

0x9d78,	// (0x000872a2) cell_dia3_key0_fun_pane_g1

0xa149,	// (0x00087673) bg_button_pane_cp20

0x9d80,	// (0x000872aa) cell_dia3_key1_fun_pane_g1

0x9d88,	// (0x000872b2) area_left_week_number_pane

0x9d9b,	// (0x000872c5) area_top_day_name_pane

0x9da9,	// (0x000872d3) frame_month_view_pane

0xef43,	// (0x0008c46d) grid_month_view_pane

0x9dbe,	// (0x000872e8) cell_top_day_name_pane_ParamLimits

0x9dbe,	// (0x000872e8) cell_top_day_name_pane

0x9dda,	// (0x00087304) cell_area_left_week_number_pane_ParamLimits

0x9dda,	// (0x00087304) cell_area_left_week_number_pane

0x9dfb,	// (0x00087325) cell_month_view_pane_ParamLimits

0x9dfb,	// (0x00087325) cell_month_view_pane

0xef51,	// (0x0008c47b) frm_month_g1

0x9e27,	// (0x00087351) frm_month_g2

0x9e38,	// (0x00087362) frm_month_g3

0x9e49,	// (0x00087373) frm_month_g4

0x9e5a,	// (0x00087384) frm_month_g5

0x9e6b,	// (0x00087395) frm_month_g6

0x9e7e,	// (0x000873a8) frm_month_g7

0xef5e,	// (0x0008c488) frm_month_g8

0x9e91,	// (0x000873bb) frm_month_g9

0x9e9e,	// (0x000873c8) frm_month_g10

0x9eab,	// (0x000873d5) frm_month_g11

0x9eb8,	// (0x000873e2) frm_month_g12

0x9ec5,	// (0x000873ef) frm_month_g13

0x9ed4,	// (0x000873fe) frm_month_g14

0x9ee3,	// (0x0008740d) frm_month_g15

0x9ef2,	// (0x0008741c) frm_month_g16

0x000f,

0xfef5,	// (0x0008d41f) frm_month_g

0xef6b,	// (0x0008c495) cell_top_day_name_pane_t1

0x9f01,	// (0x0008742b) cell_area_left_week_number_pane_g1

0x9f10,	// (0x0008743a) cell_area_left_week_number_pane_t1

0xcea3,	// (0x0008a3cd) cell_month_view_pane_g1

0x9f26,	// (0x00087450) cell_month_view_pane_t1

0xa149,	// (0x00087673) main_fps_pane

0xe703,	// (0x0008bc2d) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe703,	// (0x0008bc2d) cmail_ddmenu_btn02_pane_cp1

0xe71f,	// (0x0008bc49) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe71f,	// (0x0008bc49) cmail_ddmenu_btn02_pane_cp2

0x97dc,	// (0x00086d06) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x97dc,	// (0x00086d06) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe1a,	// (0x0008d344) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe1a,	// (0x0008d344) cmail_ddmenu_btn02_pane_g

0x97fa,	// (0x00086d24) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x97fa,	// (0x00086d24) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe1f,	// (0x0008d349) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe1f,	// (0x0008d349) cmail_ddmenu_btn02_pane_t

0x9f3c,	// (0x00087466) fps_text_pane_ParamLimits

0x9f3c,	// (0x00087466) fps_text_pane

0x9f49,	// (0x00087473) main_fps_pane_g1_ParamLimits

0x9f49,	// (0x00087473) main_fps_pane_g1

0x9f55,	// (0x0008747f) wait_bar_pane_cp010_ParamLimits

0x9f55,	// (0x0008747f) wait_bar_pane_cp010

0x9f61,	// (0x0008748b) fps_text_pane_t1_ParamLimits

0x9f61,	// (0x0008748b) fps_text_pane_t1

0x749a,	// (0x000849c4) cam4_image_uncrop_pane_g1

0x74a3,	// (0x000849cd) cam4_image_uncrop_pane_g2

0x74ac,	// (0x000849d6) cam4_image_uncrop_pane_g3

0x74b5,	// (0x000849df) cam4_image_uncrop_pane_g4

0x0003,

0xf8e2,	// (0x0008ce0c) cam4_image_uncrop_pane_g

0x9d6b,	// (0x00087295) dia3_listrow_pane_ParamLimits

0xa149,	// (0x00087673) main_phob2_pane

0x93ed,	// (0x00086917) cell_tport_appsw_pane_cp02_ParamLimits

0x93ed,	// (0x00086917) cell_tport_appsw_pane_cp02

0x93fc,	// (0x00086926) cell_tport_appsw_pane_cp03_ParamLimits

0x93fc,	// (0x00086926) cell_tport_appsw_pane_cp03

0xa149,	// (0x00087673) phob2_contact_card_pane

0xa149,	// (0x00087673) phob2_listscroll_pane

0xef7e,	// (0x0008c4a8) phob2_list_pane

0xef86,	// (0x0008c4b0) scroll_pane_cp034

0x9f7a,	// (0x000874a4) phob2_cc_data_pane_ParamLimits

0x9f7a,	// (0x000874a4) phob2_cc_data_pane

0x9f96,	// (0x000874c0) phob2_cc_listscroll_pane_ParamLimits

0x9f96,	// (0x000874c0) phob2_cc_listscroll_pane

0x9fb2,	// (0x000874dc) list_double_large_graphic_phob2_pane_ParamLimits

0x9fb2,	// (0x000874dc) list_double_large_graphic_phob2_pane

0x9fca,	// (0x000874f4) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9fca,	// (0x000874f4) list_double_large_graphic_phob2_pane_g1

0x1d8e,	// (0x0007f2b8) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x1d8e,	// (0x0007f2b8) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff16,	// (0x0008d440) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff16,	// (0x0008d440) list_double_large_graphic_phob2_pane_g

0x1d9a,	// (0x0007f2c4) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x1d9a,	// (0x0007f2c4) list_double_large_graphic_phob2_pane_t1

0x1daf,	// (0x0007f2d9) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x1daf,	// (0x0007f2d9) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff1b,	// (0x0008d445) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff1b,	// (0x0008d445) list_double_large_graphic_phob2_pane_t

0xa149,	// (0x00087673) list_highlight_pane_cp024

0x9fe0,	// (0x0008750a) phob2_cc_button_pane

0x9fe8,	// (0x00087512) phob2_cc_data_pane_g1_ParamLimits

0x9fe8,	// (0x00087512) phob2_cc_data_pane_g1

0x9ff4,	// (0x0008751e) phob2_cc_data_pane_g2_ParamLimits

0x9ff4,	// (0x0008751e) phob2_cc_data_pane_g2

0x0001,

0xff20,	// (0x0008d44a) phob2_cc_data_pane_g_ParamLimits

0xff20,	// (0x0008d44a) phob2_cc_data_pane_g

0xa000,	// (0x0008752a) phob2_cc_data_pane_t1_ParamLimits

0xa000,	// (0x0008752a) phob2_cc_data_pane_t1

0xa012,	// (0x0008753c) phob2_cc_data_pane_t2_ParamLimits

0xa012,	// (0x0008753c) phob2_cc_data_pane_t2

0xa024,	// (0x0008754e) phob2_cc_data_pane_t3_ParamLimits

0xa024,	// (0x0008754e) phob2_cc_data_pane_t3

0x0002,

0xff25,	// (0x0008d44f) phob2_cc_data_pane_t_ParamLimits

0xff25,	// (0x0008d44f) phob2_cc_data_pane_t

0xef8e,	// (0x0008c4b8) phob2_cc_list_pane_ParamLimits

0xef8e,	// (0x0008c4b8) phob2_cc_list_pane

0xda08,	// (0x0008af32) scroll_pane_cp035_ParamLimits

0xda08,	// (0x0008af32) scroll_pane_cp035

0xa8cd,	// (0x00087df7) bg_button_pane_cp033

0xef9a,	// (0x0008c4c4) phob2_cc_button_pane_g1

0xefa6,	// (0x0008c4d0) phob2_cc_button_pane_t1

0xefbb,	// (0x0008c4e5) phob2_cc_button_pane_t2

0x0001,

0xff2c,	// (0x0008d456) phob2_cc_button_pane_t

0xa036,	// (0x00087560) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xa036,	// (0x00087560) list_double_large_graphic_phob2_cc_pane

0xa052,	// (0x0008757c) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xa052,	// (0x0008757c) list_double_large_graphic_phob2_cc_pane_g1

0x1dc1,	// (0x0007f2eb) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x1dc1,	// (0x0007f2eb) list_double_large_graphic_phob2_cc_pane_g2

0x1dd0,	// (0x0007f2fa) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x1dd0,	// (0x0007f2fa) list_double_large_graphic_phob2_cc_pane_g3

0x1ddf,	// (0x0007f309) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x1ddf,	// (0x0007f309) list_double_large_graphic_phob2_cc_pane_g4

0x1df0,	// (0x0007f31a) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x1df0,	// (0x0007f31a) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff31,	// (0x0008d45b) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff31,	// (0x0008d45b) list_double_large_graphic_phob2_cc_pane_g

0x1dff,	// (0x0007f329) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x1dff,	// (0x0007f329) list_double_large_graphic_phob2_cc_pane_t1

0x1e28,	// (0x0007f352) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x1e28,	// (0x0007f352) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff3c,	// (0x0008d466) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff3c,	// (0x0008d466) list_double_large_graphic_phob2_cc_pane_t

0xefcd,	// (0x0008c4f7) list_highlight_pane_cp025_ParamLimits

0xefcd,	// (0x0008c4f7) list_highlight_pane_cp025

0xa8cd,	// (0x00087df7) bg_button_pane_cp033_ParamLimits

0xef9a,	// (0x0008c4c4) phob2_cc_button_pane_g1_ParamLimits

0xefa6,	// (0x0008c4d0) phob2_cc_button_pane_t1_ParamLimits

0xefbb,	// (0x0008c4e5) phob2_cc_button_pane_t2_ParamLimits

0xff2c,	// (0x0008d456) phob2_cc_button_pane_t_ParamLimits

0x20db,	// (0x0007f605) popup_wgtman_window

0xd7a9,	// (0x0008acd3) scroll_pane_cp038

0x9b55,	// (0x0008707f) wgtman_btn_pane_cp_01_ParamLimits

0x9b55,	// (0x0008707f) wgtman_btn_pane_cp_01

0xefdb,	// (0x0008c505) wgtman_content_pane

0xefe4,	// (0x0008c50e) wgtman_heading_pane

0xa149,	// (0x00087673) bg_heading_pane_cp02

0xefed,	// (0x0008c517) wgtman_heading_pane_g1

0xeff5,	// (0x0008c51f) wgtman_heading_pane_t1

0xf003,	// (0x0008c52d) scroll_pane_cp036

0xf00b,	// (0x0008c535) wgtman_list_pane

0xf013,	// (0x0008c53d) wgtman_list_pane_t1_ParamLimits

0xf013,	// (0x0008c53d) wgtman_list_pane_t1

0x73f7,	// (0x00084921) cam4_grid_pane

0x0fda,	// (0x0007e504) bg_button_pane_cp015_ParamLimits

0x80d1,	// (0x000855fb) bg_button_pane_cp016_ParamLimits

0x80e4,	// (0x0008560e) bg_button_pane_cp017_ParamLimits

0x101e,	// (0x0007e548) popup_vitu2_query_window_g3_ParamLimits

0x101e,	// (0x0007e548) popup_vitu2_query_window_g3

0x1097,	// (0x0007e5c1) popup_vitu2_query_window_t6_ParamLimits

0x1097,	// (0x0007e5c1) popup_vitu2_query_window_t6

0x10c2,	// (0x0007e5ec) popup_vitu2_query_window_t7_ParamLimits

0x10c2,	// (0x0007e5ec) popup_vitu2_query_window_t7

0xe427,	// (0x0008b951) cam4_grid_pane_g1

0xe430,	// (0x0008b95a) cam4_grid_pane_g2

0xf02d,	// (0x0008c557) cam4_grid_pane_g3

0xf036,	// (0x0008c560) cam4_grid_pane_g4

0x0003,

0xff41,	// (0x0008d46b) cam4_grid_pane_g

0x321a,	// (0x00080744) aid_placing_vt_slider_lsc_ParamLimits

0x354d,	// (0x00080a77) vidtel_button_pane_ParamLimits

0x354d,	// (0x00080a77) vidtel_button_pane

0xf041,	// (0x0008c56b) bg_button_pane_cp034

0xa063,	// (0x0008758d) vidtel_button_pane_g1

0xf04b,	// (0x0008c575) vidtel_button_pane_t1

0xd8ad,	// (0x0008add7) aid_size_vtel_slider_touch

0xda08,	// (0x0008af32) scroll_pane_cp039

0xe19a,	// (0x0008b6c4) ncim_query_button_pane_cp01_ParamLimits

0xe1b9,	// (0x0008b6e3) ncimui_query_pane_g1_ParamLimits

0xa8cd,	// (0x00087df7) input_focus_pane_cp012_ParamLimits

0xe1de,	// (0x0008b708) ncim_query_entry_pane_t1_ParamLimits

0xda08,	// (0x0008af32) scroll_pane_cp039_ParamLimits

0x4758,	// (0x00081c82) navi_pane_bcale_mc_g1

0x4760,	// (0x00081c8a) navi_pane_bcale_mc_t1

0xe75c,	// (0x0008bc86) main_sp_fs_email_pane_g1

0xe768,	// (0x0008bc92) main_sp_fs_email_pane_g2

0x0001,

0xfcd2,	// (0x0008d1fc) main_sp_fs_email_pane_g

0xea08,	// (0x0008bf32) list_single_cale_mrui_row_pane_g3_ParamLimits

0xea08,	// (0x0008bf32) list_single_cale_mrui_row_pane_g3

0x1ca4,	// (0x0007f1ce) list_single_recal_day_pane_g5_event_pane

0x1cba,	// (0x0007f1e4) list_single_recal_day_pane_g7

0xf059,	// (0x0008c583) list_recal_day_event_pane_cp01

0xf062,	// (0x0008c58c) list_recal_vselct_arw_lo_pane_cp01

0xf06a,	// (0x0008c594) list_recal_vselct_arw_up_pane_cp01

0xf072,	// (0x0008c59c) list_recal_vselct_pane_cp01

0xd8bd,	// (0x0008ade7) list_recal_day_event_pane_cp01_g1

0x1e51,	// (0x0007f37b) list_recal_day_event_pane_cp01_t1

0x1cc2,	// (0x0007f1ec) list_single_recal_day_pane_t1_ParamLimits

0x1cd4,	// (0x0007f1fe) list_single_recal_day_pane_t2_ParamLimits

0xfe2f,	// (0x0008d359) list_single_recal_day_pane_t_ParamLimits

0xa808,	// (0x00087d32) bg_notes_pane_ParamLimits

0xa8ab,	// (0x00087dd5) list_notes_pane_ParamLimits

0x242a,	// (0x0007f954) scroll_pane_cp06_ParamLimits

0xa8fb,	// (0x00087e25) main_notes_pane_ParamLimits

0xa149,	// (0x00087673) main_welc_pane

0xa06b,	// (0x00087595) main_welc_body_pane_ParamLimits

0xa06b,	// (0x00087595) main_welc_body_pane

0xa086,	// (0x000875b0) main_welc_opti_pane_ParamLimits

0xa086,	// (0x000875b0) main_welc_opti_pane

0xa0bb,	// (0x000875e5) main_welc_pane_t1_ParamLimits

0xa0bb,	// (0x000875e5) main_welc_pane_t1

0xa0d9,	// (0x00087603) main_welc_body_row_pane_ParamLimits

0xa0d9,	// (0x00087603) main_welc_body_row_pane

0xa0f3,	// (0x0008761d) main_welc_opti_row_pane_ParamLimits

0xa0f3,	// (0x0008761d) main_welc_opti_row_pane

0xf07c,	// (0x0008c5a6) main_welc_opti_row_pane_g1

0xf084,	// (0x0008c5ae) main_welc_opti_row_pane_t1

0xf093,	// (0x0008c5bd) main_welc_body_row_pane_t1

0xed5b,	// (0x0008c285) popup_notif_wgt_heading_pane

0xed75,	// (0x0008c29f) aid_size_list_notif_wgt_del_ParamLimits

0xed82,	// (0x0008c2ac) list_notif_wgt_row_pane_g1_ParamLimits

0xed8e,	// (0x0008c2b8) list_notif_wgt_row_pane_g2_ParamLimits

0xeda2,	// (0x0008c2cc) list_notif_wgt_row_pane_g3_ParamLimits

0xfe96,	// (0x0008d3c0) list_notif_wgt_row_pane_g_ParamLimits

0xedaf,	// (0x0008c2d9) list_notif_wgt_row_pane_t1_ParamLimits

0xedc5,	// (0x0008c2ef) list_notif_wgt_row_pane_t2_ParamLimits

0xedd7,	// (0x0008c301) list_notif_wgt_row_pane_t3_ParamLimits

0xfe9d,	// (0x0008d3c7) list_notif_wgt_row_pane_t_ParamLimits

0x9be0,	// (0x0008710a) listrow_wgtman_pane_g1_ParamLimits

0x9bed,	// (0x00087117) listrow_wgtman_pane_g2_ParamLimits

0xfec6,	// (0x0008d3f0) listrow_wgtman_pane_g_ParamLimits

0x1d3e,	// (0x0007f268) listrow_wgtman_pane_t1_ParamLimits

0x1d56,	// (0x0007f280) listrow_wgtman_pane_t2_ParamLimits

0xfecb,	// (0x0008d3f5) listrow_wgtman_pane_t_ParamLimits

0x1d7c,	// (0x0007f2a6) wait_bar_pane_cp09_ParamLimits

0xa149,	// (0x00087673) bg_popup_heading_pane_cp02

0xf0a2,	// (0x0008c5cc) popup_notif_wgt_heading_pane_g1

0xf0aa,	// (0x0008c5d4) popup_notif_wgt_heading_pane_t1

0xa149,	// (0x00087673) main_vids_pane

0xa149,	// (0x00087673) vids_listscroll_pane

0xa104,	// (0x0008762e) scroll_pane_cp040

0xa149,	// (0x00087673) vids_list_pane

0xa10f,	// (0x00087639) vids_list_double_pane_ParamLimits

0xa10f,	// (0x00087639) vids_list_double_pane

0xa122,	// (0x0008764c) vids_list_double_pane_g1

0xa12b,	// (0x00087655) vids_list_double_pane_t1

0xa13b,	// (0x00087665) vids_list_double_pane_t2

0x0001,

0xff4f,	// (0x0008d479) vids_list_double_pane_t

0xa8cd,	// (0x00087df7) main_ncimui_pane_ParamLimits

0x8c3a,	// (0x00086164) main_ncimui_pane_g1_ParamLimits

0x8c48,	// (0x00086172) main_ncimui_pane_g2_ParamLimits

0x8c48,	// (0x00086172) main_ncimui_pane_g2

0x0001,

0xfbd7,	// (0x0008d101) main_ncimui_pane_g_ParamLimits

0xfbd7,	// (0x0008d101) main_ncimui_pane_g

0xa0a1,	// (0x000875cb) main_welc_pane_g1_ParamLimits

0xa0a1,	// (0x000875cb) main_welc_pane_g1

0xa0ad,	// (0x000875d7) main_welc_pane_g2_ParamLimits

0xa0ad,	// (0x000875d7) main_welc_pane_g2

0x0001,

0xff4a,	// (0x0008d474) main_welc_pane_g_ParamLimits

0xff4a,	// (0x0008d474) main_welc_pane_g

0xa808,	// (0x00087d32) listscroll_mce_pane_ParamLimits

0x4822,	// (0x00081d4c) wait_bar_pane_cp10

0xc816,	// (0x00089d40) main_cale_day_pane_ParamLimits

0xc816,	// (0x00089d40) main_cale_week_pane_ParamLimits

0xa808,	// (0x00087d32) main_messa_pane_ParamLimits

0x67ff,	// (0x00083d29) main_clock2_btn_pane_ParamLimits

0x67ff,	// (0x00083d29) main_clock2_btn_pane

0xd033,	// (0x0008a55d) main_clock2_btn_pane_cp01_ParamLimits

0xd033,	// (0x0008a55d) main_clock2_btn_pane_cp01

0xe9d9,	// (0x0008bf03) list_cale_mrui_pane_ParamLimits

0xee1b,	// (0x0008c345) main_cf0_pane_g2

0x0001,

0xfea4,	// (0x0008d3ce) main_cf0_pane_g

0x9d88,	// (0x000872b2) area_left_week_number_pane_ParamLimits

0x9d9b,	// (0x000872c5) area_top_day_name_pane_ParamLimits

0x9da9,	// (0x000872d3) frame_month_view_pane_ParamLimits

0xef43,	// (0x0008c46d) grid_month_view_pane_ParamLimits

0xef51,	// (0x0008c47b) frm_month_g1_ParamLimits

0x9e27,	// (0x00087351) frm_month_g2_ParamLimits

0x9e38,	// (0x00087362) frm_month_g3_ParamLimits

0x9e49,	// (0x00087373) frm_month_g4_ParamLimits

0x9e5a,	// (0x00087384) frm_month_g5_ParamLimits

0x9e6b,	// (0x00087395) frm_month_g6_ParamLimits

0x9e7e,	// (0x000873a8) frm_month_g7_ParamLimits

0xef5e,	// (0x0008c488) frm_month_g8_ParamLimits

0x9e91,	// (0x000873bb) frm_month_g9_ParamLimits

0x9e9e,	// (0x000873c8) frm_month_g10_ParamLimits

0x9eab,	// (0x000873d5) frm_month_g11_ParamLimits

0x9eb8,	// (0x000873e2) frm_month_g12_ParamLimits

0x9ec5,	// (0x000873ef) frm_month_g13_ParamLimits

0x9ed4,	// (0x000873fe) frm_month_g14_ParamLimits

0x9ee3,	// (0x0008740d) frm_month_g15_ParamLimits

0x9ef2,	// (0x0008741c) frm_month_g16_ParamLimits

0xfef5,	// (0x0008d41f) frm_month_g_ParamLimits

0xef6b,	// (0x0008c495) cell_top_day_name_pane_t1_ParamLimits

0x9f01,	// (0x0008742b) cell_area_left_week_number_pane_g1_ParamLimits

0x9f10,	// (0x0008743a) cell_area_left_week_number_pane_t1_ParamLimits

0xcea3,	// (0x0008a3cd) cell_month_view_pane_g1_ParamLimits

0x9f26,	// (0x00087450) cell_month_view_pane_t1_ParamLimits

0xa800,	// (0x00087d2a) main_clock2_btn_pane_g1

0xf0b8,	// (0x0008c5e2) main_clock2_btn_pane_t1

0xa8cd,	// (0x00087df7) listscroll_cmail_pane_ParamLimits

0xe75c,	// (0x0008bc86) main_sp_fs_email_pane_g1_ParamLimits

0xe768,	// (0x0008bc92) main_sp_fs_email_pane_g2_ParamLimits

0xfcd2,	// (0x0008d1fc) main_sp_fs_email_pane_g_ParamLimits

0xeae5,	// (0x0008c00f) list_recal_day_pane_ParamLimits

0xeaf6,	// (0x0008c020) mian_recal_day_pane_t1

0x1681,	// (0x0007ebab) list_single_dyc_row_text_pane_t4_ParamLimits

0x1681,	// (0x0007ebab) list_single_dyc_row_text_pane_t4

0x16c6,	// (0x0007ebf0) list_single_dyc_row_text_pane_t5_ParamLimits

0x16c6,	// (0x0007ebf0) list_single_dyc_row_text_pane_t5

0x173c,	// (0x0007ec66) list_single_dyc_row_text_pane_t6_ParamLimits

0x173c,	// (0x0007ec66) list_single_dyc_row_text_pane_t6

0xaeb7,	// (0x000883e1) aid_mgn_list_cale_time_pane

0xa8cd,	// (0x00087df7) main_gallery2_pane_ParamLimits

0xd047,	// (0x0008a571) main_clock2_pane_cp01_t1

0xd057,	// (0x0008a581) main_clock2_pane_cp01_t3

0x0001,

0xf7b8,	// (0x0008cce2) main_clock2_pane_cp01_t

0x2904,	// (0x0007fe2e) cale_week_scroll_pane_g16_ParamLimits

0x2904,	// (0x0007fe2e) cale_week_scroll_pane_g16
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

} // end of namespace AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch_Large

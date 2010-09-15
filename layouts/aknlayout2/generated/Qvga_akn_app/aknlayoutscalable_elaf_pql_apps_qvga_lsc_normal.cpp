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

#include "aknlayoutscalable_elaf_pql_apps_qvga_lsc_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt[]; }

namespace AknLayoutScalable_Elaf_pql_apps_qvga_lsc_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt + 0x0000cacf };

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
0x1512,	// (0x0000dfe1) Screen

0x151c,	// (0x0000dfeb) application_window

0x1552,	// (0x0000e021) area_bottom_pane_ParamLimits

0x1552,	// (0x0000e021) area_bottom_pane

0x1585,	// (0x0000e054) area_top_pane_ParamLimits

0x1585,	// (0x0000e054) area_top_pane

0x95d6,	// (0x000160a5) call_video_uplink_pane_ParamLimits

0x95d6,	// (0x000160a5) call_video_uplink_pane

0x1605,	// (0x0000e0d4) main_pane_ParamLimits

0x1605,	// (0x0000e0d4) main_pane

0xbfb1,	// (0x00018a80) context_pane

0x4163,	// (0x00010c32) navi_pane

0x418c,	// (0x00010c5b) popup_cale_events_window_ParamLimits

0x418c,	// (0x00010c5b) popup_cale_events_window

0xbfc4,	// (0x00018a93) popup_mup_playback_window

0x41a4,	// (0x00010c73) signal_pane

0x9d8c,	// (0x0001685b) main_browser_pane

0x9ff1,	// (0x00016ac0) main_burst_pane

0x95f2,	// (0x000160c1) main_calc_pane

0xbf4b,	// (0x00018a1a) main_cale_day_pane

0x1aa9,	// (0x0000e578) main_cale_month_pane

0xbf4b,	// (0x00018a1a) main_cale_week_pane

0x9ff1,	// (0x00016ac0) main_call_pane

0x9a11,	// (0x000164e0) main_call_poc_pane

0x9ff1,	// (0x00016ac0) main_camera_pane

0x9ff1,	// (0x00016ac0) main_chi_dic_pane

0xa8c3,	// (0x00017392) main_clock_pane

0x9a11,	// (0x000164e0) main_fmradio_pane

0x9ff1,	// (0x00016ac0) main_graph_messa_pane

0x9a11,	// (0x000164e0) main_help_pane

0x9d8c,	// (0x0001685b) main_im_pane

0x9c6c,	// (0x0001673b) main_image_pane_ParamLimits

0x9c6c,	// (0x0001673b) main_image_pane

0x9a11,	// (0x000164e0) main_location2_pane

0x9ff1,	// (0x00016ac0) main_location_pane

0x9c6c,	// (0x0001673b) main_messa_pane

0x9a11,	// (0x000164e0) main_mp2_pane

0x9ff1,	// (0x00016ac0) main_mp_pane

0x9a11,	// (0x000164e0) main_msg_pane

0x9a11,	// (0x000164e0) main_mup_eq_pane

0x9a11,	// (0x000164e0) main_mup_pane

0x9d8c,	// (0x0001685b) main_notes_pane

0x9a11,	// (0x000164e0) main_pec_pane

0x9a11,	// (0x000164e0) main_phob_pane

0x9a11,	// (0x000164e0) main_pinb_pane

0x9a11,	// (0x000164e0) main_postcard_pane

0x9a11,	// (0x000164e0) main_qdial_pane

0x9ff1,	// (0x00016ac0) main_skin_pane

0x9a11,	// (0x000164e0) main_smil2_pane

0x9ff1,	// (0x00016ac0) main_smil_pane

0x9ff1,	// (0x00016ac0) main_video_pane

0x9ff1,	// (0x00016ac0) main_video_tele_pane

0x9c6c,	// (0x0001673b) main_viewer_pane_ParamLimits

0x9c6c,	// (0x0001673b) main_viewer_pane

0x9ff1,	// (0x00016ac0) main_vorec_pane

0x3f57,	// (0x00010a26) popup_blid_sat_info_window_ParamLimits

0x3f57,	// (0x00010a26) popup_blid_sat_info_window

0x3fad,	// (0x00010a7c) popup_dyc_status_message_window_ParamLimits

0x3fad,	// (0x00010a7c) popup_dyc_status_message_window

0x3fc3,	// (0x00010a92) popup_grid_large_graphic_window_ParamLimits

0x3fc3,	// (0x00010a92) popup_grid_large_graphic_window

0x4059,	// (0x00010b28) popup_loc_request_window_ParamLimits

0x4059,	// (0x00010b28) popup_loc_request_window

0x413d,	// (0x00010c0c) popup_wml_address_window_ParamLimits

0x413d,	// (0x00010c0c) popup_wml_address_window

0x3dad,	// (0x0001087c) call_muted_g1

0x3a8d,	// (0x0001055c) popup_call_audio_conf_window_ParamLimits

0x3a8d,	// (0x0001055c) popup_call_audio_conf_window

0x3dbd,	// (0x0001088c) popup_call_audio_first_window_ParamLimits

0x3dbd,	// (0x0001088c) popup_call_audio_first_window

0x3e1b,	// (0x000108ea) popup_call_audio_in_window_ParamLimits

0x3e1b,	// (0x000108ea) popup_call_audio_in_window

0x3e47,	// (0x00010916) popup_call_audio_out_window_ParamLimits

0x3e47,	// (0x00010916) popup_call_audio_out_window

0x3e75,	// (0x00010944) popup_call_audio_second_window_ParamLimits

0x3e75,	// (0x00010944) popup_call_audio_second_window

0x3ebb,	// (0x0001098a) popup_call_audio_wait_window_ParamLimits

0x3ebb,	// (0x0001098a) popup_call_audio_wait_window

0x3eee,	// (0x000109bd) popup_number_entry_window_ParamLimits

0x3eee,	// (0x000109bd) popup_number_entry_window

0x9600,	// (0x000160cf) bg_popup_call_pane_cp05_ParamLimits

0x9600,	// (0x000160cf) bg_popup_call_pane_cp05

0x9620,	// (0x000160ef) popup_number_entry_window_t1

0x9633,	// (0x00016102) popup_number_entry_window_t2

0x9645,	// (0x00016114) popup_number_entry_window_t3

0x0003,

0xf05f,	// (0x0001bb2e) popup_number_entry_window_t

0x9657,	// (0x00016126) text_title_cp2

0x966a,	// (0x00016139) bg_popup_call_pane_cp_ParamLimits

0x966a,	// (0x00016139) bg_popup_call_pane_cp

0x9678,	// (0x00016147) call_thumbnail_pane

0x9680,	// (0x0001614f) popup_call_audio_in_window_g1_ParamLimits

0x9680,	// (0x0001614f) popup_call_audio_in_window_g1

0x968c,	// (0x0001615b) popup_call_audio_in_window_g2_ParamLimits

0x968c,	// (0x0001615b) popup_call_audio_in_window_g2

0x9698,	// (0x00016167) popup_call_audio_in_window_g3_ParamLimits

0x9698,	// (0x00016167) popup_call_audio_in_window_g3

0x0002,

0xf068,	// (0x0001bb37) popup_call_audio_in_window_g_ParamLimits

0xf068,	// (0x0001bb37) popup_call_audio_in_window_g

0x96a4,	// (0x00016173) popup_call_audio_in_window_t1_ParamLimits

0x96a4,	// (0x00016173) popup_call_audio_in_window_t1

0x96bf,	// (0x0001618e) popup_call_audio_in_window_t2_ParamLimits

0x96bf,	// (0x0001618e) popup_call_audio_in_window_t2

0x96da,	// (0x000161a9) popup_call_audio_in_window_t3_ParamLimits

0x96da,	// (0x000161a9) popup_call_audio_in_window_t3

0x0002,

0xf06f,	// (0x0001bb3e) popup_call_audio_in_window_t_ParamLimits

0xf06f,	// (0x0001bb3e) popup_call_audio_in_window_t

0x966a,	// (0x00016139) bg_popup_call_pane_cp01_ParamLimits

0x966a,	// (0x00016139) bg_popup_call_pane_cp01

0x9678,	// (0x00016147) call_thumbnail_pane_cp02

0x96ed,	// (0x000161bc) call_type_pane_cp022

0x96f5,	// (0x000161c4) popup_call_audio_out_window_g1_ParamLimits

0x96f5,	// (0x000161c4) popup_call_audio_out_window_g1

0x9707,	// (0x000161d6) popup_call_audio_out_window_g2_ParamLimits

0x9707,	// (0x000161d6) popup_call_audio_out_window_g2

0x9713,	// (0x000161e2) popup_call_audio_out_window_g3_ParamLimits

0x9713,	// (0x000161e2) popup_call_audio_out_window_g3

0x0002,

0xf076,	// (0x0001bb45) popup_call_audio_out_window_g_ParamLimits

0xf076,	// (0x0001bb45) popup_call_audio_out_window_g

0x9725,	// (0x000161f4) popup_call_audio_out_window_t1_ParamLimits

0x9725,	// (0x000161f4) popup_call_audio_out_window_t1

0x973d,	// (0x0001620c) popup_call_audio_out_window_t2_ParamLimits

0x973d,	// (0x0001620c) popup_call_audio_out_window_t2

0x0001,

0xf07d,	// (0x0001bb4c) popup_call_audio_out_window_t_ParamLimits

0xf07d,	// (0x0001bb4c) popup_call_audio_out_window_t

0x9752,	// (0x00016221) bg_popup_call_pane_ParamLimits

0x9752,	// (0x00016221) bg_popup_call_pane

0x178d,	// (0x0000e25c) call_thumbnail_pane_cp_ParamLimits

0x178d,	// (0x0000e25c) call_thumbnail_pane_cp

0x97d6,	// (0x000162a5) call_type_pane_cp01_ParamLimits

0x97d6,	// (0x000162a5) call_type_pane_cp01

0x981a,	// (0x000162e9) popup_call_audio_first_window_g1_ParamLimits

0x981a,	// (0x000162e9) popup_call_audio_first_window_g1

0x9866,	// (0x00016335) popup_call_audio_first_window_g2_ParamLimits

0x9866,	// (0x00016335) popup_call_audio_first_window_g2

0x0001,

0xf082,	// (0x0001bb51) popup_call_audio_first_window_g_ParamLimits

0xf082,	// (0x0001bb51) popup_call_audio_first_window_g

0x98aa,	// (0x00016379) popup_call_audio_first_window_t1_ParamLimits

0x98aa,	// (0x00016379) popup_call_audio_first_window_t1

0x9956,	// (0x00016425) popup_call_audio_first_window_t4_ParamLimits

0x9956,	// (0x00016425) popup_call_audio_first_window_t4

0x99e2,	// (0x000164b1) popup_call_audio_first_window_t5_ParamLimits

0x99e2,	// (0x000164b1) popup_call_audio_first_window_t5

0x0002,

0xf087,	// (0x0001bb56) popup_call_audio_first_window_t_ParamLimits

0xf087,	// (0x0001bb56) popup_call_audio_first_window_t

0x9a11,	// (0x000164e0) bg_popup_call_pane_cp02

0x9a1b,	// (0x000164ea) call_type_pane_cp023

0x9a23,	// (0x000164f2) popup_call_audio_wait_window_g1

0x9a2b,	// (0x000164fa) popup_call_audio_wait_window_g2

0x0001,

0xf08e,	// (0x0001bb5d) popup_call_audio_wait_window_g

0x9a33,	// (0x00016502) popup_call_audio_wait_window_t3

0x9a41,	// (0x00016510) bg_popup_call_pane_cp03_ParamLimits

0x9a41,	// (0x00016510) bg_popup_call_pane_cp03

0x9aa1,	// (0x00016570) call_thumbnail_pane_cp011_ParamLimits

0x9aa1,	// (0x00016570) call_thumbnail_pane_cp011

0x9aad,	// (0x0001657c) call_type_pane_cp034_ParamLimits

0x9aad,	// (0x0001657c) call_type_pane_cp034

0x9ae9,	// (0x000165b8) popup_call_audio_second_window_g1_ParamLimits

0x9ae9,	// (0x000165b8) popup_call_audio_second_window_g1

0x9b25,	// (0x000165f4) popup_call_audio_second_window_g2_ParamLimits

0x9b25,	// (0x000165f4) popup_call_audio_second_window_g2

0x0001,

0xf093,	// (0x0001bb62) popup_call_audio_second_window_g_ParamLimits

0xf093,	// (0x0001bb62) popup_call_audio_second_window_g

0x9b61,	// (0x00016630) popup_call_audio_second_window_t1_ParamLimits

0x9b61,	// (0x00016630) popup_call_audio_second_window_t1

0x9be2,	// (0x000166b1) popup_call_audio_second_window_t2_ParamLimits

0x9be2,	// (0x000166b1) popup_call_audio_second_window_t2

0x9c18,	// (0x000166e7) popup_call_audio_second_window_t3_ParamLimits

0x9c18,	// (0x000166e7) popup_call_audio_second_window_t3

0x0002,

0xf098,	// (0x0001bb67) popup_call_audio_second_window_t_ParamLimits

0xf098,	// (0x0001bb67) popup_call_audio_second_window_t

0x9a11,	// (0x000164e0) bg_popup_call_pane_cp04

0x9c4e,	// (0x0001671d) list_conf_pane

0x9c56,	// (0x00016725) popup_call_audio_conf_window_t1

0x9c64,	// (0x00016733) call_thumbnail_pane_g1

0x9c6c,	// (0x0001673b) bg_pinb_pane_ParamLimits

0x9c6c,	// (0x0001673b) bg_pinb_pane

0x9c7a,	// (0x00016749) find_pinb_pane

0x9c6c,	// (0x0001673b) listscroll_pinb_pane_ParamLimits

0x9c6c,	// (0x0001673b) listscroll_pinb_pane

0x9c84,	// (0x00016753) pinb_bg_pane_g1

0x9c84,	// (0x00016753) pinb_bg_pane_g2

0x9c84,	// (0x00016753) pinb_bg_pane_g3

0x9c84,	// (0x00016753) pinb_bg_pane_g4

0x9c84,	// (0x00016753) pinb_bg_pane_g5

0x9c84,	// (0x00016753) pinb_bg_pane_g6

0x9c84,	// (0x00016753) pinb_bg_pane_g7

0x9c84,	// (0x00016753) pinb_bg_pane_g8

0x9c84,	// (0x00016753) pinb_bg_pane_g9

0x9c84,	// (0x00016753) pinb_bg_pane_g10

0x0009,

0xf09f,	// (0x0001bb6e) pinb_bg_pane_g

0x17bc,	// (0x0000e28b) grid_pinb_pane

0x959f,	// (0x0001606e) list_pinb_pane

0x9c8e,	// (0x0001675d) scroll_pane_cp01_ParamLimits

0x9c8e,	// (0x0001675d) scroll_pane_cp01

0x9c9b,	// (0x0001676a) find_pinb_pane_g1_ParamLimits

0x9c9b,	// (0x0001676a) find_pinb_pane_g1

0x9cb3,	// (0x00016782) find_pinb_pane_t1

0x9cc5,	// (0x00016794) find_pinb_pane_t2

0x0001,

0xf0b9,	// (0x0001bb88) find_pinb_pane_t

0x9cda,	// (0x000167a9) input_focus_pane_cp01_ParamLimits

0x9cda,	// (0x000167a9) input_focus_pane_cp01

0x17c6,	// (0x0000e295) cell_pinb_pane_ParamLimits

0x17c6,	// (0x0000e295) cell_pinb_pane

0x9ce6,	// (0x000167b5) cell_pinb_pane_g1_ParamLimits

0x9ce6,	// (0x000167b5) cell_pinb_pane_g1

0x9cf4,	// (0x000167c3) cell_pinb_pane_g2_ParamLimits

0x9cf4,	// (0x000167c3) cell_pinb_pane_g2

0x9cf4,	// (0x000167c3) cell_pinb_pane_g3_ParamLimits

0x9cf4,	// (0x000167c3) cell_pinb_pane_g3

0x0002,

0xf0be,	// (0x0001bb8d) cell_pinb_pane_g_ParamLimits

0xf0be,	// (0x0001bb8d) cell_pinb_pane_g

0x9a11,	// (0x000164e0) grid_highlight_pane_cp01

0x9d02,	// (0x000167d1) list_pinb_item_pane_ParamLimits

0x9d02,	// (0x000167d1) list_pinb_item_pane

0x959f,	// (0x0001606e) list_highlight_pane_cp02

0x9d10,	// (0x000167df) list_pinb_item_pane_g1_ParamLimits

0x9d10,	// (0x000167df) list_pinb_item_pane_g1

0x9cf4,	// (0x000167c3) list_pinb_item_pane_g2_ParamLimits

0x9cf4,	// (0x000167c3) list_pinb_item_pane_g2

0x9ce6,	// (0x000167b5) list_pinb_item_pane_g3_ParamLimits

0x9ce6,	// (0x000167b5) list_pinb_item_pane_g3

0x9cf4,	// (0x000167c3) list_pinb_item_pane_g4_ParamLimits

0x9cf4,	// (0x000167c3) list_pinb_item_pane_g4

0x0003,

0xf0c5,	// (0x0001bb94) list_pinb_item_pane_g_ParamLimits

0xf0c5,	// (0x0001bb94) list_pinb_item_pane_g

0x9d1e,	// (0x000167ed) list_pinb_item_pane_t1_ParamLimits

0x9d1e,	// (0x000167ed) list_pinb_item_pane_t1

0x17fa,	// (0x0000e2c9) calc_display_pane

0x1816,	// (0x0000e2e5) calc_paper_pane

0x1837,	// (0x0000e306) grid_calc_pane

0x9a11,	// (0x000164e0) bg_list_pane_cp01

0x1853,	// (0x0000e322) clock_g1

0x185b,	// (0x0000e32a) clock_g2

0x0001,

0xf0ce,	// (0x0001bb9d) clock_g

0x1863,	// (0x0000e332) clock_t1_ParamLimits

0x1863,	// (0x0000e332) clock_t1

0x1878,	// (0x0000e347) clock_t2_ParamLimits

0x1878,	// (0x0000e347) clock_t2

0x188a,	// (0x0000e359) clock_t3_ParamLimits

0x188a,	// (0x0000e359) clock_t3

0x189c,	// (0x0000e36b) clock_t4_ParamLimits

0x189c,	// (0x0000e36b) clock_t4

0x18ae,	// (0x0000e37d) clock_t5_ParamLimits

0x18ae,	// (0x0000e37d) clock_t5

0x18c3,	// (0x0000e392) clock_t6_ParamLimits

0x18c3,	// (0x0000e392) clock_t6

0x18d5,	// (0x0000e3a4) clock_t7_ParamLimits

0x18d5,	// (0x0000e3a4) clock_t7

0x18e7,	// (0x0000e3b6) clock_t8_ParamLimits

0x18e7,	// (0x0000e3b6) clock_t8

0x18f9,	// (0x0000e3c8) clock_t9_ParamLimits

0x18f9,	// (0x0000e3c8) clock_t9

0x0008,

0xf0d3,	// (0x0001bba2) clock_t_ParamLimits

0xf0d3,	// (0x0001bba2) clock_t

0x9d3a,	// (0x00016809) popup_clock_analogue_window_cp02

0x9d3a,	// (0x00016809) popup_clock_digital_window_cp01

0x9a11,	// (0x000164e0) listscroll_help_pane

0x9a11,	// (0x000164e0) phob_pre_status_pane

0x9d42,	// (0x00016811) grid_qdial_pane

0x9c6c,	// (0x0001673b) listscroll_mce_pane

0x9c6c,	// (0x0001673b) bg_notes_pane

0x9d4c,	// (0x0001681b) list_notes_pane

0x190b,	// (0x0000e3da) scroll_pane_cp06

0x9d5a,	// (0x00016829) bg_calc_paper_pane

0x9d72,	// (0x00016841) list_calc_pane

0x9d8c,	// (0x0001685b) bg_calc_display_pane

0x9d98,	// (0x00016867) calc_display_pane_t1

0x9dad,	// (0x0001687c) calc_display_pane_t2

0x9dc2,	// (0x00016891) calc_display_pane_t3

0x0002,

0xf0e6,	// (0x0001bbb5) calc_display_pane_t

0x191d,	// (0x0000e3ec) cell_calc_pane_ParamLimits

0x191d,	// (0x0000e3ec) cell_calc_pane

0x9dd4,	// (0x000168a3) bg_calc_paper_pane_g1

0x9de0,	// (0x000168af) bg_calc_paper_pane_g2

0x9dec,	// (0x000168bb) bg_calc_paper_pane_g3

0x9df8,	// (0x000168c7) bg_calc_paper_pane_g4

0x9e04,	// (0x000168d3) bg_calc_paper_pane_g5

0x1950,	// (0x0000e41f) bg_calc_paper_pane_g6

0x195f,	// (0x0000e42e) bg_calc_paper_pane_g7

0x196e,	// (0x0000e43d) bg_calc_paper_pane_g8

0x0007,

0xf0ed,	// (0x0001bbbc) bg_calc_paper_pane_g

0x197d,	// (0x0000e44c) calc_bg_paper_pane_g9

0x198c,	// (0x0000e45b) list_calc_item_pane_ParamLimits

0x198c,	// (0x0000e45b) list_calc_item_pane

0x9e10,	// (0x000168df) list_calc_item_pane_g1

0x9e1d,	// (0x000168ec) list_calc_item_pane_t1_ParamLimits

0x9e1d,	// (0x000168ec) list_calc_item_pane_t1

0x19a0,	// (0x0000e46f) list_calc_item_pane_t2_ParamLimits

0x19a0,	// (0x0000e46f) list_calc_item_pane_t2

0x0001,

0xf0fe,	// (0x0001bbcd) list_calc_item_pane_t_ParamLimits

0xf0fe,	// (0x0001bbcd) list_calc_item_pane_t

0x9c84,	// (0x00016753) cell_calc_pane_g1

0x9e2f,	// (0x000168fe) grid_highlight_pane_cp02

0x9e51,	// (0x00016920) bg_calc_display_pane_g1

0x9e5a,	// (0x00016929) bg_calc_display_pane_g2

0x9e64,	// (0x00016933) bg_calc_display_pane_g3

0x0002,

0xf108,	// (0x0001bbd7) bg_calc_display_pane_g

0x19ce,	// (0x0000e49d) cell_qdial_pane_ParamLimits

0x19ce,	// (0x0000e49d) cell_qdial_pane

0x19e0,	// (0x0000e4af) cell_qdial_pane_g1_ParamLimits

0x19e0,	// (0x0000e4af) cell_qdial_pane_g1

0x19f6,	// (0x0000e4c5) cell_qdial_pane_g2_ParamLimits

0x19f6,	// (0x0000e4c5) cell_qdial_pane_g2

0x9e6d,	// (0x0001693c) cell_qdial_pane_g3_ParamLimits

0x9e6d,	// (0x0001693c) cell_qdial_pane_g3

0x0003,

0xf10f,	// (0x0001bbde) cell_qdial_pane_g_ParamLimits

0xf10f,	// (0x0001bbde) cell_qdial_pane_g

0x1a1d,	// (0x0000e4ec) cell_qdial_pane_t1_ParamLimits

0x1a1d,	// (0x0000e4ec) cell_qdial_pane_t1

0x1a35,	// (0x0000e504) cell_qdial_pane_t2_ParamLimits

0x1a35,	// (0x0000e504) cell_qdial_pane_t2

0x1a48,	// (0x0000e517) cell_qdial_pane_t3_ParamLimits

0x1a48,	// (0x0000e517) cell_qdial_pane_t3

0x0002,

0xf118,	// (0x0001bbe7) cell_qdial_pane_t_ParamLimits

0xf118,	// (0x0001bbe7) cell_qdial_pane_t

0x9a11,	// (0x000164e0) grid_highlight_pane_cp04

0x9e79,	// (0x00016948) thumbnail_qdial_pane_ParamLimits

0x9e79,	// (0x00016948) thumbnail_qdial_pane

0x9ed5,	// (0x000169a4) list_help_pane

0x9edf,	// (0x000169ae) scroll_pane_cp02

0x1a5b,	// (0x0000e52a) help_list_pane_t1_ParamLimits

0x1a5b,	// (0x0000e52a) help_list_pane_t1

0x9ee8,	// (0x000169b7) bg_notes_pane_g2

0x9ef0,	// (0x000169bf) bg_notes_pane_g3

0x9ef8,	// (0x000169c7) notes_bg_pane_g1

0x9f00,	// (0x000169cf) notes_bg_pane_g4

0x9f08,	// (0x000169d7) notes_bg_pane_g5

0x9f10,	// (0x000169df) notes_bg_pane_g6

0x9f18,	// (0x000169e7) notes_bg_pane_g7

0x9f20,	// (0x000169ef) notes_bg_pane_g8

0x9f28,	// (0x000169f7) notes_bg_pane_g9

0x0006,

0xf136,	// (0x0001bc05) notes_bg_pane_g

0x1a78,	// (0x0000e547) list_notes_text_pane_ParamLimits

0x1a78,	// (0x0000e547) list_notes_text_pane

0x9f30,	// (0x000169ff) list_notes_text_pane_g1

0x1a9b,	// (0x0000e56a) list_notes_text_pane_t1

0x1aa9,	// (0x0000e578) listscroll_cale_week_pane

0x1ad3,	// (0x0000e5a2) bg_cale_heading_pane

0x9f53,	// (0x00016a22) bg_cale_pane_cp01

0x1aeb,	// (0x0000e5ba) cale_week_corner_pane

0x1b0a,	// (0x0000e5d9) cale_week_day_heading_pane

0x1b27,	// (0x0000e5f6) cale_week_scroll_pane_g1

0x1b3a,	// (0x0000e609) cale_week_scroll_pane_g2

0x1b52,	// (0x0000e621) cale_week_scroll_pane_g3

0x1b6a,	// (0x0000e639) cale_week_scroll_pane_g4

0x1b82,	// (0x0000e651) cale_week_scroll_pane_g5

0x1b9a,	// (0x0000e669) cale_week_scroll_pane_g6

0x1bb2,	// (0x0000e681) cale_week_scroll_pane_g7

0x1bca,	// (0x0000e699) cale_week_scroll_pane_g8

0x1be6,	// (0x0000e6b5) cale_week_scroll_pane_g9

0x1bfe,	// (0x0000e6cd) cale_week_scroll_pane_g10

0x1c16,	// (0x0000e6e5) cale_week_scroll_pane_g11

0x1c2e,	// (0x0000e6fd) cale_week_scroll_pane_g12

0x1c46,	// (0x0000e715) cale_week_scroll_pane_g13

0x1c5e,	// (0x0000e72d) cale_week_scroll_pane_g14

0x1c76,	// (0x0000e745) cale_week_scroll_pane_g15

0x000f,

0xf145,	// (0x0001bc14) cale_week_scroll_pane_g

0x1caa,	// (0x0000e779) cale_week_time_pane

0x1cc6,	// (0x0000e795) grid_cale_week_pane

0x9f82,	// (0x00016a51) scroll_pane_cp08

0x1ce4,	// (0x0000e7b3) cell_cale_week_pane_ParamLimits

0x1ce4,	// (0x0000e7b3) cell_cale_week_pane

0x1d5a,	// (0x0000e829) cale_week_day_heading_pane_t1

0x1d84,	// (0x0000e853) cale_week_day_heading_pane_t2

0x1db3,	// (0x0000e882) cale_week_day_heading_pane_t3

0x1de2,	// (0x0000e8b1) cale_week_day_heading_pane_t4

0x1e11,	// (0x0000e8e0) cale_week_day_heading_pane_t5

0x1e40,	// (0x0000e90f) cale_week_day_heading_pane_t6

0x1e6f,	// (0x0000e93e) cale_week_day_heading_pane_t7

0x0006,

0xf166,	// (0x0001bc35) cale_week_day_heading_pane_t

0x9f9f,	// (0x00016a6e) bg_cale_side_pane

0x1e99,	// (0x0000e968) cale_week_time_pane_t1

0x1ed3,	// (0x0000e9a2) cale_week_time_pane_t2

0x1f0d,	// (0x0000e9dc) cale_week_time_pane_t3

0x1f47,	// (0x0000ea16) cale_week_time_pane_t4

0x1f81,	// (0x0000ea50) cale_week_time_pane_t5

0x1fbb,	// (0x0000ea8a) cale_week_time_pane_t6

0x1ff5,	// (0x0000eac4) cale_week_time_pane_t7

0x202f,	// (0x0000eafe) cale_week_time_pane_t8

0x0007,

0xf175,	// (0x0001bc44) cale_week_time_pane_t

0x2069,	// (0x0000eb38) cell_cale_week_pane_g2

0x2088,	// (0x0000eb57) cell_cale_week_pane_g3_ParamLimits

0x2088,	// (0x0000eb57) cell_cale_week_pane_g3

0x9fad,	// (0x00016a7c) grid_highlight_pane_cp07

0x9fb5,	// (0x00016a84) listscroll_gms_pane

0x9fbf,	// (0x00016a8e) grid_gms_pane

0x9fc8,	// (0x00016a97) listscroll_gms_pane_g1

0x9fd0,	// (0x00016a9f) listscroll_gms_pane_g2

0x0001,

0xf186,	// (0x0001bc55) listscroll_gms_pane_g

0x20a0,	// (0x0000eb6f) scroll_pane_cp010

0x20ab,	// (0x0000eb7a) cell_gms_pane_ParamLimits

0x20ab,	// (0x0000eb7a) cell_gms_pane

0x20bb,	// (0x0000eb8a) cell_gms_pane_g1

0x9fd8,	// (0x00016aa7) cell_gms_pane_g2

0x9f30,	// (0x000169ff) cell_gms_pane_g3

0x9fe0,	// (0x00016aaf) cell_gms_pane_g4

0x0003,

0xf18b,	// (0x0001bc5a) cell_gms_pane_g

0x9fe9,	// (0x00016ab8) grid_highlight_pane_cp09

0x3d3b,	// (0x0001080a) phob_pre_status_pane_g1

0x3d43,	// (0x00010812) phob_pre_status_pane_g2

0x3d4b,	// (0x0001081a) phob_pre_status_pane_g3

0x3d53,	// (0x00010822) phob_pre_status_pane_g4

0x0004,

0xf579,	// (0x0001c048) phob_pre_status_pane_g

0x3d63,	// (0x00010832) phob_pre_status_pane_t1

0x3d71,	// (0x00010840) phob_pre_status_pane_t2

0x3d7f,	// (0x0001084e) phob_pre_status_pane_t3

0x0002,

0xf584,	// (0x0001c053) phob_pre_status_pane_t

0x9ff1,	// (0x00016ac0) bg_list_pane_cp05

0x20cb,	// (0x0000eb9a) grid_vorec_pane

0x9ff9,	// (0x00016ac8) vorec_t1

0xa007,	// (0x00016ad6) vorec_t2

0xa015,	// (0x00016ae4) vorec_t3

0x20d3,	// (0x0000eba2) vorec_t4

0x8e1e,	// (0x000158ed) vorec_t5

0x8e2c,	// (0x000158fb) vorec_t6

0x0004,

0xf194,	// (0x0001bc63) vorec_t

0x8e3a,	// (0x00015909) wait_bar_pane_cp01

0x20e1,	// (0x0000ebb0) cell_vorec_pane_ParamLimits

0x20e1,	// (0x0000ebb0) cell_vorec_pane

0xa031,	// (0x00016b00) cell_vorec_pane_g1

0x9a11,	// (0x000164e0) grid_highlight_pane_cp05

0x95f2,	// (0x000160c1) cams_zoom_pane

0x95f2,	// (0x000160c1) image_vga_pane

0x9ce6,	// (0x000167b5) main_camera_pane_g1

0x9ce6,	// (0x000167b5) main_camera_pane_g2

0x9ce6,	// (0x000167b5) main_camera_pane_g3

0x9ce6,	// (0x000167b5) main_camera_pane_g4

0x9ce6,	// (0x000167b5) main_camera_pane_g5

0x9ce6,	// (0x000167b5) main_camera_pane_g6

0x9ce6,	// (0x000167b5) main_camera_pane_g7

0x0007,

0xf19f,	// (0x0001bc6e) main_camera_pane_g

0xa03b,	// (0x00016b0a) main_camera_pane_t1

0xa03b,	// (0x00016b0a) main_camera_pane_t2

0x0001,

0xf1b0,	// (0x0001bc7f) main_camera_pane_t

0x2108,	// (0x0000ebd7) cams_zoom_pane_cp_ParamLimits

0x2108,	// (0x0000ebd7) cams_zoom_pane_cp

0x213c,	// (0x0000ec0b) image_cif_pane_ParamLimits

0x213c,	// (0x0000ec0b) image_cif_pane

0x959f,	// (0x0001606e) image_subqcif_pane

0x214e,	// (0x0000ec1d) main_video_pane_g1_ParamLimits

0x214e,	// (0x0000ec1d) main_video_pane_g1

0x217c,	// (0x0000ec4b) main_video_pane_g2_ParamLimits

0x217c,	// (0x0000ec4b) main_video_pane_g2

0x21b6,	// (0x0000ec85) main_video_pane_g3_ParamLimits

0x21b6,	// (0x0000ec85) main_video_pane_g3

0x21b6,	// (0x0000ec85) main_video_pane_g4_ParamLimits

0x21b6,	// (0x0000ec85) main_video_pane_g4

0x21ea,	// (0x0000ecb9) main_video_pane_g5_ParamLimits

0x21ea,	// (0x0000ecb9) main_video_pane_g5

0xa04f,	// (0x00016b1e) main_video_pane_g6_ParamLimits

0xa04f,	// (0x00016b1e) main_video_pane_g6

0x0006,

0xf1b5,	// (0x0001bc84) main_video_pane_g_ParamLimits

0xf1b5,	// (0x0001bc84) main_video_pane_g

0x2206,	// (0x0000ecd5) main_video_pane_t1_ParamLimits

0x2206,	// (0x0000ecd5) main_video_pane_t1

0xa069,	// (0x00016b38) cams_zoom_pane_g1

0xa069,	// (0x00016b38) cams_zoom_pane_g2

0xa069,	// (0x00016b38) cams_zoom_pane_g3

0xa069,	// (0x00016b38) cams_zoom_pane_g4

0x0003,

0xf1c4,	// (0x0001bc93) cams_zoom_pane_g

0x225e,	// (0x0000ed2d) grid_cams_pane

0x2273,	// (0x0000ed42) linegrid_cams_pane

0x2284,	// (0x0000ed53) cell_cams_pane_ParamLimits

0x2284,	// (0x0000ed53) cell_cams_pane

0xa073,	// (0x00016b42) cams_burst_image_pane

0xa07b,	// (0x00016b4a) cell_cams_pane_g1

0x9a11,	// (0x000164e0) grid_highlight_pane_cp03

0x9c84,	// (0x00016753) mp_bg_pane_g1

0x959f,	// (0x0001606e) bg_list_pane_cp03

0x959f,	// (0x0001606e) bg_mp_pane

0x959f,	// (0x0001606e) grid_mp_pane

0xa069,	// (0x00016b38) media_player_g1

0xbef3,	// (0x000189c2) media_player_t1

0xbef3,	// (0x000189c2) media_player_t2

0xbef3,	// (0x000189c2) media_player_t3

0xbef3,	// (0x000189c2) media_player_t4

0xbef3,	// (0x000189c2) media_player_t5

0xbef3,	// (0x000189c2) media_player_t6

0xbef3,	// (0x000189c2) media_player_t7

0x0006,

0xf563,	// (0x0001c032) media_player_t

0x959f,	// (0x0001606e) wait_bar_pane_cp02

0xf548,	// (0x0001c017) main_usb_pane_t

0xa8c3,	// (0x00017392) cell_mp_pane

0x9c84,	// (0x00016753) cell_mp_pane_g1

0x9a11,	// (0x000164e0) grid_highlight_pane_cp06

0xa0c1,	// (0x00016b90) grid_skin_colour_pane

0xa0c9,	// (0x00016b98) list_highlight_pane_cp03

0x22a2,	// (0x0000ed71) skin_g1

0xa0d1,	// (0x00016ba0) skin_t1

0xa0e0,	// (0x00016baf) skin_t2

0x0001,

0xf1f2,	// (0x0001bcc1) skin_t

0x22aa,	// (0x0000ed79) cell_skin_colour_pane_ParamLimits

0x22aa,	// (0x0000ed79) cell_skin_colour_pane

0xa0ee,	// (0x00016bbd) cell_skin_colour_pane_g1

0x2313,	// (0x0000ede2) call_video_g1_ParamLimits

0x2313,	// (0x0000ede2) call_video_g1

0x2329,	// (0x0000edf8) call_video_g2_ParamLimits

0x2329,	// (0x0000edf8) call_video_g2

0x0001,

0xf1f7,	// (0x0001bcc6) call_video_g_ParamLimits

0xf1f7,	// (0x0001bcc6) call_video_g

0x2371,	// (0x0000ee40) call_video_uplink_pane_cp1_ParamLimits

0x2371,	// (0x0000ee40) call_video_uplink_pane_cp1

0xa100,	// (0x00016bcf) call_video_uplink_pane_cp2

0x2406,	// (0x0000eed5) video_down_crop_pane_ParamLimits

0x2406,	// (0x0000eed5) video_down_crop_pane

0x24c9,	// (0x0000ef98) video_down_pane_ParamLimits

0x24c9,	// (0x0000ef98) video_down_pane

0xa108,	// (0x00016bd7) video_down_subqcif_pane_ParamLimits

0xa108,	// (0x00016bd7) video_down_subqcif_pane

0xa120,	// (0x00016bef) video_down_subqcif_pane_cp_ParamLimits

0xa120,	// (0x00016bef) video_down_subqcif_pane_cp

0xa144,	// (0x00016c13) im_reading_pane_ParamLimits

0xa144,	// (0x00016c13) im_reading_pane

0x2586,	// (0x0000f055) im_writing_pane_ParamLimits

0x2586,	// (0x0000f055) im_writing_pane

0x259c,	// (0x0000f06b) im_reading_pane_t1

0xa15e,	// (0x00016c2d) list_im_pane

0xa16f,	// (0x00016c3e) scroll_pane_cp07

0x25d2,	// (0x0000f0a1) im_writing_pane_t1_ParamLimits

0x25d2,	// (0x0000f0a1) im_writing_pane_t1

0xa188,	// (0x00016c57) im_writing_pane_t2_ParamLimits

0xa188,	// (0x00016c57) im_writing_pane_t2

0x0001,

0xf201,	// (0x0001bcd0) im_writing_pane_t_ParamLimits

0xf201,	// (0x0001bcd0) im_writing_pane_t

0x9a11,	// (0x000164e0) input_focus_pane_cp04

0x9a11,	// (0x000164e0) input_focus_pane_cp05

0x25e7,	// (0x0000f0b6) list_im_single_pane_ParamLimits

0x25e7,	// (0x0000f0b6) list_im_single_pane

0xa1a5,	// (0x00016c74) list_single_im_pane_t1

0x9ff1,	// (0x00016ac0) blid_accuracy_pane

0x9ff1,	// (0x00016ac0) blid_compass_pane

0xbf03,	// (0x000189d2) main_location_t1

0xbf03,	// (0x000189d2) main_location_t2

0xbf03,	// (0x000189d2) main_location_t3

0x0002,

0xf572,	// (0x0001c041) main_location_t

0x9a11,	// (0x000164e0) aid_levels_location

0x9c84,	// (0x00016753) blid_accuracy_pane_g1

0x9c84,	// (0x00016753) blid_accuracy_pane_g2

0x0001,

0xf255,	// (0x0001bd24) blid_accuracy_pane_g

0xa1df,	// (0x00016cae) wml_content_pane

0xa21d,	// (0x00016cec) wml_button_pane_ParamLimits

0xa21d,	// (0x00016cec) wml_button_pane

0x25fd,	// (0x0000f0cc) wml_list_single_large_pane_ParamLimits

0x25fd,	// (0x0000f0cc) wml_list_single_large_pane

0x2611,	// (0x0000f0e0) wml_list_single_medium_pane_ParamLimits

0x2611,	// (0x0000f0e0) wml_list_single_medium_pane

0x2626,	// (0x0000f0f5) wml_list_single_small_pane_ParamLimits

0x2626,	// (0x0000f0f5) wml_list_single_small_pane

0xa231,	// (0x00016d00) wml_selection_box_pane_ParamLimits

0xa231,	// (0x00016d00) wml_selection_box_pane

0xa244,	// (0x00016d13) wml_list_single_pane_t1

0xa253,	// (0x00016d22) wml_list_single_medium_pane_t1

0xa262,	// (0x00016d31) wml_list_single_large_pane_t1

0xa271,	// (0x00016d40) input_focus_pane_cp02_ParamLimits

0xa271,	// (0x00016d40) input_focus_pane_cp02

0xa284,	// (0x00016d53) wml_selection_box_pane_g1

0xa28d,	// (0x00016d5c) wml_selection_box_pane_t1_ParamLimits

0xa28d,	// (0x00016d5c) wml_selection_box_pane_t1

0x9c6c,	// (0x0001673b) bg_wml_button_pane_ParamLimits

0x9c6c,	// (0x0001673b) bg_wml_button_pane

0xa2a5,	// (0x00016d74) wml_button_pane_g1

0xa2ad,	// (0x00016d7c) wml_button_pane_t1

0xa2a5,	// (0x00016d74) wml_button_bg_pane_g1

0xa2bd,	// (0x00016d8c) wml_button_bg_pane_g2

0xa2c5,	// (0x00016d94) wml_button_bg_pane_g3

0xa2cd,	// (0x00016d9c) wml_button_bg_pane_g4

0xa2d5,	// (0x00016da4) wml_button_bg_pane_g5

0xa2dd,	// (0x00016dac) wml_button_bg_pane_g6

0xa2e5,	// (0x00016db4) wml_button_bg_pane_g7

0xa2ed,	// (0x00016dbc) wml_button_bg_pane_g8

0xa2f5,	// (0x00016dc4) wml_button_bg_pane_g9

0x0008,

0xf206,	// (0x0001bcd5) wml_button_bg_pane_g

0x263d,	// (0x0000f10c) bg_list_pane_cp02

0xa2fd,	// (0x00016dcc) mce_header_pane_ParamLimits

0xa2fd,	// (0x00016dcc) mce_header_pane

0xa311,	// (0x00016de0) mce_icon_pane

0xa311,	// (0x00016de0) mce_image_pane

0xa31a,	// (0x00016de9) mce_text_pane_ParamLimits

0xa31a,	// (0x00016de9) mce_text_pane

0x2646,	// (0x0000f115) scroll_pane_cp03

0x2646,	// (0x0000f115) scroll_pane_cp04

0xa32e,	// (0x00016dfd) scroll_pane_cp05_ParamLimits

0xa32e,	// (0x00016dfd) scroll_pane_cp05

0x2650,	// (0x0000f11f) mce_header_field_pane_ParamLimits

0x2650,	// (0x0000f11f) mce_header_field_pane

0x2667,	// (0x0000f136) mce_header_field_pane_2_ParamLimits

0x2667,	// (0x0000f136) mce_header_field_pane_2

0x267d,	// (0x0000f14c) mce_header_field_pane_3

0x2685,	// (0x0000f154) list_single_mce_message_pane_ParamLimits

0x2685,	// (0x0000f154) list_single_mce_message_pane

0x269a,	// (0x0000f169) list_single_mce_smart_pane_ParamLimits

0x269a,	// (0x0000f169) list_single_mce_smart_pane

0xa33a,	// (0x00016e09) input_focus_pane_cp03

0xa343,	// (0x00016e12) list_header_data_pane

0x26ba,	// (0x0000f189) mce_header_field_pane_t1

0x26c8,	// (0x0000f197) list_single_mce_header_pane_ParamLimits

0x26c8,	// (0x0000f197) list_single_mce_header_pane

0xa34b,	// (0x00016e1a) list_single_mce_header_pane_t1

0xa35a,	// (0x00016e29) list_single_mce_message_pane_g1

0xa363,	// (0x00016e32) list_single_mce_message_pane_t1

0x2702,	// (0x0000f1d1) bg_cale_heading_pane_cp01_ParamLimits

0x2702,	// (0x0000f1d1) bg_cale_heading_pane_cp01

0xa372,	// (0x00016e41) bg_cale_pane_cp02_ParamLimits

0xa372,	// (0x00016e41) bg_cale_pane_cp02

0x2731,	// (0x0000f200) cale_month_corner_pane

0x2750,	// (0x0000f21f) cale_month_day_heading_pane_ParamLimits

0x2750,	// (0x0000f21f) cale_month_day_heading_pane

0x2787,	// (0x0000f256) cale_month_pane_g1_ParamLimits

0x2787,	// (0x0000f256) cale_month_pane_g1

0x27ab,	// (0x0000f27a) cale_month_pane_g2_ParamLimits

0x27ab,	// (0x0000f27a) cale_month_pane_g2

0x27d3,	// (0x0000f2a2) cale_month_pane_g3_ParamLimits

0x27d3,	// (0x0000f2a2) cale_month_pane_g3

0x280f,	// (0x0000f2de) cale_month_pane_g4_ParamLimits

0x280f,	// (0x0000f2de) cale_month_pane_g4

0x284b,	// (0x0000f31a) cale_month_pane_g5_ParamLimits

0x284b,	// (0x0000f31a) cale_month_pane_g5

0x2887,	// (0x0000f356) cale_month_pane_g6_ParamLimits

0x2887,	// (0x0000f356) cale_month_pane_g6

0x28c3,	// (0x0000f392) cale_month_pane_g7_ParamLimits

0x28c3,	// (0x0000f392) cale_month_pane_g7

0x28ff,	// (0x0000f3ce) cale_month_pane_g8_ParamLimits

0x28ff,	// (0x0000f3ce) cale_month_pane_g8

0x2943,	// (0x0000f412) cale_month_pane_g9_ParamLimits

0x2943,	// (0x0000f412) cale_month_pane_g9

0x2985,	// (0x0000f454) cale_month_pane_g10_ParamLimits

0x2985,	// (0x0000f454) cale_month_pane_g10

0x29c7,	// (0x0000f496) cale_month_pane_g11_ParamLimits

0x29c7,	// (0x0000f496) cale_month_pane_g11

0x2a09,	// (0x0000f4d8) cale_month_pane_g12_ParamLimits

0x2a09,	// (0x0000f4d8) cale_month_pane_g12

0x2a4b,	// (0x0000f51a) cale_month_pane_g13_ParamLimits

0x2a4b,	// (0x0000f51a) cale_month_pane_g13

0x000c,

0xf219,	// (0x0001bce8) cale_month_pane_g_ParamLimits

0xf219,	// (0x0001bce8) cale_month_pane_g

0x2a8d,	// (0x0000f55c) cale_month_week_pane

0x2aa9,	// (0x0000f578) grid_cale_month_pane_ParamLimits

0x2aa9,	// (0x0000f578) grid_cale_month_pane

0x2ad7,	// (0x0000f5a6) cale_month_day_heading_pane_t1

0x2b5d,	// (0x0000f62c) cale_month_day_heading_pane_t2

0x2bee,	// (0x0000f6bd) cale_month_day_heading_pane_t3

0x2c7f,	// (0x0000f74e) cale_month_day_heading_pane_t4

0x2d10,	// (0x0000f7df) cale_month_day_heading_pane_t5

0x2da1,	// (0x0000f870) cale_month_day_heading_pane_t6

0x2e32,	// (0x0000f901) cale_month_day_heading_pane_t7

0x0006,

0xf234,	// (0x0001bd03) cale_month_day_heading_pane_t

0x9f9f,	// (0x00016a6e) bg_cale_side_pane_cp01

0x2ec7,	// (0x0000f996) cale_month_week_pane_t1

0x2ee0,	// (0x0000f9af) cale_month_week_pane_t2

0x2ef9,	// (0x0000f9c8) cale_month_week_pane_t3

0x2f12,	// (0x0000f9e1) cale_month_week_pane_t4

0x2f2b,	// (0x0000f9fa) cale_month_week_pane_t5

0x2f44,	// (0x0000fa13) cale_month_week_pane_t6

0x0005,

0xf243,	// (0x0001bd12) cale_month_week_pane_t

0x2f5d,	// (0x0000fa2c) cell_cale_month_pane_ParamLimits

0x2f5d,	// (0x0000fa2c) cell_cale_month_pane

0xa3b1,	// (0x00016e80) cell_cale_month_pane_g1

0x304f,	// (0x0000fb1e) cell_cale_month_pane_t1_ParamLimits

0x304f,	// (0x0000fb1e) cell_cale_month_pane_t1

0x9fad,	// (0x00016a7c) grid_highlight_pane_cp08

0x9c84,	// (0x00016753) main_smil_g1

0x306f,	// (0x0000fb3e) smil_status_pane

0xa3bd,	// (0x00016e8c) smil_text_pane

0xbdcb,	// (0x0001889a) bg_popup_call3_rect_pane_g8

0xbdd3,	// (0x000188a2) bg_popup_call3_rect_pane_g9

0x0008,

0xf4f3,	// (0x0001bfc2) bg_popup_call3_rect_pane_g

0xc026,	// (0x00018af5) smil_status_volume_pane_g1

0x3080,	// (0x0000fb4f) smil_status_pane_t1

0xc059,	// (0x00018b28) volume_smil_pane

0xa3c7,	// (0x00016e96) list_smil_text_pane

0x3097,	// (0x0000fb66) scroll_pane_cp011

0x30a2,	// (0x0000fb71) smil_text_list_pane_t1_ParamLimits

0x30a2,	// (0x0000fb71) smil_text_list_pane_t1

0xa3d1,	// (0x00016ea0) aid_volume_smil_ParamLimits

0xa3d1,	// (0x00016ea0) aid_volume_smil

0x9c84,	// (0x00016753) smil_volume_pane_g1

0x9c84,	// (0x00016753) smil_volume_pane_g2

0x0001,

0xf255,	// (0x0001bd24) smil_volume_pane_g

0x1aa9,	// (0x0000e578) listscroll_cale_day_pane

0xa3f3,	// (0x00016ec2) bg_cale_pane

0xa40b,	// (0x00016eda) list_cale_pane

0xa42e,	// (0x00016efd) scroll_pane_cp09

0xa43f,	// (0x00016f0e) cale_bg_pane_g1

0xa447,	// (0x00016f16) cale_bg_pane_g2

0xa44f,	// (0x00016f1e) cale_bg_pane_g3

0xa457,	// (0x00016f26) cale_bg_pane_g4

0xa45f,	// (0x00016f2e) cale_bg_pane_g5

0xa467,	// (0x00016f36) cale_bg_pane_g6

0xa46f,	// (0x00016f3e) cale_bg_pane_g7

0xa477,	// (0x00016f46) cale_bg_pane_g8

0xa47f,	// (0x00016f4e) cale_bg_pane_g9

0x0008,

0xf25a,	// (0x0001bd29) cale_bg_pane_g

0x30e6,	// (0x0000fbb5) list_cale_time_pane_ParamLimits

0x30e6,	// (0x0000fbb5) list_cale_time_pane

0xa487,	// (0x00016f56) list_cale_time_pane_g1_ParamLimits

0xa487,	// (0x00016f56) list_cale_time_pane_g1

0xa493,	// (0x00016f62) list_cale_time_pane_g2_ParamLimits

0xa493,	// (0x00016f62) list_cale_time_pane_g2

0x30fb,	// (0x0000fbca) list_cale_time_pane_g3_ParamLimits

0x30fb,	// (0x0000fbca) list_cale_time_pane_g3

0x3107,	// (0x0000fbd6) list_cale_time_pane_g4_ParamLimits

0x3107,	// (0x0000fbd6) list_cale_time_pane_g4

0x3113,	// (0x0000fbe2) list_cale_time_pane_g5_ParamLimits

0x3113,	// (0x0000fbe2) list_cale_time_pane_g5

0x0005,

0xf26d,	// (0x0001bd3c) list_cale_time_pane_g_ParamLimits

0xf26d,	// (0x0001bd3c) list_cale_time_pane_g

0xa4ad,	// (0x00016f7c) list_cale_time_pane_t1_ParamLimits

0xa4ad,	// (0x00016f7c) list_cale_time_pane_t1

0xa4d5,	// (0x00016fa4) list_cale_time_pane_t2_ParamLimits

0xa4d5,	// (0x00016fa4) list_cale_time_pane_t2

0x3393,	// (0x0000fe62) aid_blid_cardinal_pane

0x33d1,	// (0x0000fea0) compass_pane_t4

0xa4fd,	// (0x00016fcc) list_cale_time_pane_t4_ParamLimits

0xa4fd,	// (0x00016fcc) list_cale_time_pane_t4

0x33df,	// (0x0000feae) compass_pane_t5

0x33ed,	// (0x0000febc) compass_pane_t6

0x33fb,	// (0x0000feca) compass_pane_t7

0xa9e0,	// (0x000174af) navi_pane_cc_t1

0xab97,	// (0x00017666) aid_phob_thumbnail_center_pane

0x3785,	// (0x00010254) main_postcard_pane_g4_ParamLimits

0x0002,

0xf27a,	// (0x0001bd49) list_cale_time_pane_t_ParamLimits

0xf27a,	// (0x0001bd49) list_cale_time_pane_t

0x966a,	// (0x00016139) bg_popup_window_pane_cp02_ParamLimits

0x966a,	// (0x00016139) bg_popup_window_pane_cp02

0xa525,	// (0x00016ff4) heading_pane_cp01_ParamLimits

0xa525,	// (0x00016ff4) heading_pane_cp01

0xa531,	// (0x00017000) loc_req_pane_ParamLimits

0xa531,	// (0x00017000) loc_req_pane

0xa541,	// (0x00017010) loc_type_pane_ParamLimits

0xa541,	// (0x00017010) loc_type_pane

0xa553,	// (0x00017022) loc_type_pane_t1_ParamLimits

0xa553,	// (0x00017022) loc_type_pane_t1

0xa565,	// (0x00017034) loc_type_pane_t2_ParamLimits

0xa565,	// (0x00017034) loc_type_pane_t2

0xa577,	// (0x00017046) loc_type_pane_t3_ParamLimits

0xa577,	// (0x00017046) loc_type_pane_t3

0x0002,

0xf281,	// (0x0001bd50) loc_type_pane_t_ParamLimits

0xf281,	// (0x0001bd50) loc_type_pane_t

0xa589,	// (0x00017058) list_loc_req_pane

0xa593,	// (0x00017062) scroll_pane_cp012

0x311f,	// (0x0000fbee) list_single_loc_request_popup_menu_pane_ParamLimits

0x311f,	// (0x0000fbee) list_single_loc_request_popup_menu_pane

0xa59c,	// (0x0001706b) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xa59c,	// (0x0001706b) list_single_loc_request_popup_menu_pane_g1

0xa5a8,	// (0x00017077) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xa5a8,	// (0x00017077) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf288,	// (0x0001bd57) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf288,	// (0x0001bd57) list_single_loc_request_popup_menu_pane_g

0xa5b4,	// (0x00017083) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xa5b4,	// (0x00017083) list_single_loc_request_popup_menu_pane_t1

0x9c6c,	// (0x0001673b) bg_popup_window_pane_cp03_ParamLimits

0x9c6c,	// (0x0001673b) bg_popup_window_pane_cp03

0xa5ca,	// (0x00017099) heading_loc_req_pane_ParamLimits

0xa5ca,	// (0x00017099) heading_loc_req_pane

0x312c,	// (0x0000fbfb) popup_dyc_status_message_window_g1_ParamLimits

0x312c,	// (0x0000fbfb) popup_dyc_status_message_window_g1

0x3140,	// (0x0000fc0f) popup_dyc_status_message_window_t1_ParamLimits

0x3140,	// (0x0000fc0f) popup_dyc_status_message_window_t1

0x3155,	// (0x0000fc24) popup_dyc_status_message_window_t2_ParamLimits

0x3155,	// (0x0000fc24) popup_dyc_status_message_window_t2

0x316a,	// (0x0000fc39) popup_dyc_status_message_window_t3_ParamLimits

0x316a,	// (0x0000fc39) popup_dyc_status_message_window_t3

0x0002,

0xf28d,	// (0x0001bd5c) popup_dyc_status_message_window_t_ParamLimits

0xf28d,	// (0x0001bd5c) popup_dyc_status_message_window_t

0x9a11,	// (0x000164e0) bg_heading_pane_cp01

0xa5d6,	// (0x000170a5) heading_loc_req_pane_g1

0xa5de,	// (0x000170ad) heading_loc_req_pane_g2

0xa5e6,	// (0x000170b5) heading_loc_req_pane_g3

0x0002,

0xf294,	// (0x0001bd63) heading_loc_req_pane_g

0xa5ee,	// (0x000170bd) heading_loc_req_pane_t1

0xa61b,	// (0x000170ea) bg_popup_sub_pane_cp01_ParamLimits

0xa61b,	// (0x000170ea) bg_popup_sub_pane_cp01

0xa629,	// (0x000170f8) popup_cale_events_window_g1_ParamLimits

0xa629,	// (0x000170f8) popup_cale_events_window_g1

0xa649,	// (0x00017118) popup_cale_events_window_g2_ParamLimits

0xa649,	// (0x00017118) popup_cale_events_window_g2

0x0001,

0xf2c8,	// (0x0001bd97) popup_cale_events_window_g_ParamLimits

0xf2c8,	// (0x0001bd97) popup_cale_events_window_g

0xa669,	// (0x00017138) popup_cale_events_window_t1_ParamLimits

0xa669,	// (0x00017138) popup_cale_events_window_t1

0xa67b,	// (0x0001714a) popup_cale_events_window_t2_ParamLimits

0xa67b,	// (0x0001714a) popup_cale_events_window_t2

0xa6b9,	// (0x00017188) popup_cale_events_window_t3_ParamLimits

0xa6b9,	// (0x00017188) popup_cale_events_window_t3

0xa6f3,	// (0x000171c2) popup_cale_events_window_t4_ParamLimits

0xa6f3,	// (0x000171c2) popup_cale_events_window_t4

0x0003,

0xf2cd,	// (0x0001bd9c) popup_cale_events_window_t_ParamLimits

0xf2cd,	// (0x0001bd9c) popup_cale_events_window_t

0x31a0,	// (0x0000fc6f) call_type_pane

0x31b0,	// (0x0000fc7f) popup_call_status_window_g1

0x31c4,	// (0x0000fc93) popup_call_status_window_g2

0x31d8,	// (0x0000fca7) popup_call_status_window_g3

0x0002,

0xf2d6,	// (0x0001bda5) popup_call_status_window_g

0xa729,	// (0x000171f8) call_type_pane_g1

0xa732,	// (0x00017201) call_type_pane_g2

0x0001,

0xf2dd,	// (0x0001bdac) call_type_pane_g

0x9a11,	// (0x000164e0) bg_popup_sub_pane_cp02

0xa73b,	// (0x0001720a) listscroll_popup_wml_pane

0xa743,	// (0x00017212) list_wml_pane

0xa74d,	// (0x0001721c) scroll_pane_cp013

0x31e8,	// (0x0000fcb7) list_single_graphic_popup_wml_pane_ParamLimits

0x31e8,	// (0x0000fcb7) list_single_graphic_popup_wml_pane

0x9c84,	// (0x00016753) list_single_graphic_popup_wml_pane_g1

0xa756,	// (0x00017225) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2e2,	// (0x0001bdb1) list_single_graphic_popup_wml_pane_g

0xa75e,	// (0x0001722d) list_single_graphic_popup_wml_pane_t1

0xa774,	// (0x00017243) aid_call_pane

0x9c64,	// (0x00016733) popup_clock_analogue_window_g1

0x9c64,	// (0x00016733) popup_clock_analogue_window_g2

0xa77c,	// (0x0001724b) popup_clock_analogue_window_g3

0xa77c,	// (0x0001724b) popup_clock_analogue_window_g4

0x9c84,	// (0x00016753) popup_clock_analogue_window_g5

0x0004,

0xf2e7,	// (0x0001bdb6) popup_clock_analogue_window_g

0xa784,	// (0x00017253) popup_clock_analogue_window_t1

0xa792,	// (0x00017261) clock_digital_number_pane_ParamLimits

0xa792,	// (0x00017261) clock_digital_number_pane

0xa79e,	// (0x0001726d) clock_digital_number_pane_cp02_ParamLimits

0xa79e,	// (0x0001726d) clock_digital_number_pane_cp02

0xa7aa,	// (0x00017279) clock_digital_number_pane_cp03_ParamLimits

0xa7aa,	// (0x00017279) clock_digital_number_pane_cp03

0xa7b6,	// (0x00017285) clock_digital_number_pane_cp04_ParamLimits

0xa7b6,	// (0x00017285) clock_digital_number_pane_cp04

0xa7c2,	// (0x00017291) clock_digital_separator_pane_ParamLimits

0xa7c2,	// (0x00017291) clock_digital_separator_pane

0xa7ce,	// (0x0001729d) popup_clock_digital_window_t1

0x9c84,	// (0x00016753) clock_digital_number_pane_g1

0x9c84,	// (0x00016753) clock_digital_number_pane_g2

0x0001,

0xf255,	// (0x0001bd24) clock_digital_number_pane_g

0x9c84,	// (0x00016753) clock_digital_separator_pane_g1

0x9c84,	// (0x00016753) clock_digital_separator_pane_g2

0x0001,

0xf255,	// (0x0001bd24) clock_digital_separator_pane_g

0x9a11,	// (0x000164e0) bg_popup_window_pane_cp04

0xa7eb,	// (0x000172ba) heading_pane_cp03

0x9ff1,	// (0x00016ac0) listscroll_popup_gms_pane

0x9a11,	// (0x000164e0) grid_large_graphic_popup_pane

0xa7f4,	// (0x000172c3) listscroll_popup_gms_pane_g1

0xa7fd,	// (0x000172cc) listscroll_popup_gms_pane_g2

0x0001,

0xf2f2,	// (0x0001bdc1) listscroll_popup_gms_pane_g

0xa806,	// (0x000172d5) scroll_pane_cp014

0x9d02,	// (0x000167d1) cell_large_graphic_popup_pane_ParamLimits

0x9d02,	// (0x000167d1) cell_large_graphic_popup_pane

0x9ce6,	// (0x000167b5) cell_large_graphic_popup_pane_g1_ParamLimits

0x9ce6,	// (0x000167b5) cell_large_graphic_popup_pane_g1

0xa80e,	// (0x000172dd) cell_large_graphic_popup_pane_g2_ParamLimits

0xa80e,	// (0x000172dd) cell_large_graphic_popup_pane_g2

0xa81c,	// (0x000172eb) cell_large_graphic_popup_pane_g3_ParamLimits

0xa81c,	// (0x000172eb) cell_large_graphic_popup_pane_g3

0xa82a,	// (0x000172f9) cell_large_graphic_popup_pane_g4_ParamLimits

0xa82a,	// (0x000172f9) cell_large_graphic_popup_pane_g4

0x0003,

0xf2f7,	// (0x0001bdc6) cell_large_graphic_popup_pane_g_ParamLimits

0xf2f7,	// (0x0001bdc6) cell_large_graphic_popup_pane_g

0x9a11,	// (0x000164e0) grid_highlight_pane_cp010

0x9c84,	// (0x00016753) bg_popup_call_pane_g1

0xa83b,	// (0x0001730a) list_single_graphic_popup_conf_pane_ParamLimits

0xa83b,	// (0x0001730a) list_single_graphic_popup_conf_pane

0xa84e,	// (0x0001731d) list_highlight_pane_cp01

0xa857,	// (0x00017326) list_single_graphic_popup_conf_pane_g1

0xa85f,	// (0x0001732e) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf300,	// (0x0001bdcf) list_single_graphic_popup_conf_pane_g

0xa867,	// (0x00017336) list_single_graphic_popup_conf_pane_t1

0xa875,	// (0x00017344) linegrid_cams_pane_g1

0x31fb,	// (0x0000fcca) linegrid_cams_pane_g2

0x9f30,	// (0x000169ff) linegrid_cams_pane_g3

0xa87e,	// (0x0001734d) linegrid_cams_pane_g4

0x3204,	// (0x0000fcd3) linegrid_cams_pane_g5

0x320d,	// (0x0000fcdc) linegrid_cams_pane_g6

0x9fe0,	// (0x00016aaf) linegrid_cams_pane_g7

0x0006,

0xf305,	// (0x0001bdd4) linegrid_cams_pane_g

0xa887,	// (0x00017356) popup_clock_analogue_window

0xa887,	// (0x00017356) popup_clock_digital_window

0x9a11,	// (0x000164e0) popup_phob_thumbnail_window

0x9c84,	// (0x00016753) call_video_uplink_pane_g1

0xa890,	// (0x0001735f) call_video_uplink_pane_g2

0x0001,

0xf314,	// (0x0001bde3) call_video_uplink_pane_g

0x9fad,	// (0x00016a7c) video_uplink_pane

0xa898,	// (0x00017367) mce_image_pane_g1

0x3216,	// (0x0000fce5) mce_image_pane_g2

0x321e,	// (0x0000fced) mce_image_pane_g3

0x3226,	// (0x0000fcf5) mce_image_pane_g4

0x322e,	// (0x0000fcfd) mce_image_pane_g5

0x0004,

0xf319,	// (0x0001bde8) mce_image_pane_g

0xa8a2,	// (0x00017371) control_top_pane_stacon_cp01_ParamLimits

0xa8a2,	// (0x00017371) control_top_pane_stacon_cp01

0xa8b2,	// (0x00017381) uni_indicator_pane_stacon_cp01_ParamLimits

0xa8b2,	// (0x00017381) uni_indicator_pane_stacon_cp01

0xa8c3,	// (0x00017392) bg_popup_sub_pane_cp03

0xa8cd,	// (0x0001739c) chi_dic_find_pane

0x3236,	// (0x0000fd05) listscroll_chi_dic_pane

0xa8d5,	// (0x000173a4) main_pane_chidic_g1

0xa8dd,	// (0x000173ac) chi_dic_find_pane_t1

0xa8eb,	// (0x000173ba) find_chidic_pane

0xa8f4,	// (0x000173c3) chi_dic_list_pane_ParamLimits

0xa8f4,	// (0x000173c3) chi_dic_list_pane

0xa806,	// (0x000172d5) scroll_pane_cp020

0xa905,	// (0x000173d4) find_chidic_pane_t1

0x9a11,	// (0x000164e0) input_focus_pane_cp06

0x324a,	// (0x0000fd19) list_chi_dic_pane_ParamLimits

0x324a,	// (0x0000fd19) list_chi_dic_pane

0x325c,	// (0x0000fd2b) list_chi_dic_pane_t1_ParamLimits

0x325c,	// (0x0000fd2b) list_chi_dic_pane_t1

0x9a11,	// (0x000164e0) list_highlight_pane_cp020

0xa914,	// (0x000173e3) bg_cale_heading_pane_g1

0x326f,	// (0x0000fd3e) bg_cale_heading_pane_g2

0x3277,	// (0x0000fd46) bg_cale_heading_pane_g3

0x327f,	// (0x0000fd4e) bg_cale_heading_pane_g4

0x3287,	// (0x0000fd56) bg_cale_heading_pane_g5

0x328f,	// (0x0000fd5e) bg_cale_heading_pane_g6

0x3297,	// (0x0000fd66) bg_cale_heading_pane_g7

0x329f,	// (0x0000fd6e) bg_cale_heading_pane_g8

0x32a7,	// (0x0000fd76) bg_cale_heading_pane_g9

0x0008,

0xf324,	// (0x0001bdf3) bg_cale_heading_pane_g

0xa914,	// (0x000173e3) bg_cale_side_pane_g1

0x32af,	// (0x0000fd7e) bg_cale_side_pane_g2

0x32b7,	// (0x0000fd86) bg_cale_side_pane_g3

0x32bf,	// (0x0000fd8e) bg_cale_side_pane_g4

0x32c7,	// (0x0000fd96) bg_cale_side_pane_g5

0x32cf,	// (0x0000fd9e) bg_cale_side_pane_g6

0x32d7,	// (0x0000fda6) bg_cale_side_pane_g7

0x32df,	// (0x0000fdae) bg_cale_side_pane_g8

0x32e7,	// (0x0000fdb6) bg_cale_side_pane_g9

0x0008,

0xf337,	// (0x0001be06) bg_cale_side_pane_g

0x32ef,	// (0x0000fdbe) popup_call_status_window_ParamLimits

0x32ef,	// (0x0000fdbe) popup_call_status_window

0xa91c,	// (0x000173eb) stacon_top_pane

0xa924,	// (0x000173f3) status_pane_ParamLimits

0xa924,	// (0x000173f3) status_pane

0xa93e,	// (0x0001740d) status_small_pane

0xa946,	// (0x00017415) control_pane

0x9a11,	// (0x000164e0) stacon_bottom_pane

0xa94e,	// (0x0001741d) list_single_mce_smart_pane_t1_ParamLimits

0xa94e,	// (0x0001741d) list_single_mce_smart_pane_t1

0xa961,	// (0x00017430) list_single_mce_smart_pane_t2_ParamLimits

0xa961,	// (0x00017430) list_single_mce_smart_pane_t2

0x0001,

0xf34a,	// (0x0001be19) list_single_mce_smart_pane_t_ParamLimits

0xf34a,	// (0x0001be19) list_single_mce_smart_pane_t

0x3336,	// (0x0000fe05) compass_pane

0x333f,	// (0x0000fe0e) main_location2_pane_t1

0x3355,	// (0x0000fe24) main_location2_pane_t2

0x336b,	// (0x0000fe3a) main_location2_pane_t3

0x0003,

0xf34f,	// (0x0001be1e) main_location2_pane_t

0xa989,	// (0x00017458) compass_pane_g1_ParamLimits

0xa989,	// (0x00017458) compass_pane_g1

0x33b3,	// (0x0000fe82) compass_pane_t1

0x33c2,	// (0x0000fe91) compass_pane_t2

0x0005,

0xf358,	// (0x0001be27) compass_pane_t

0x3409,	// (0x0000fed8) text_secondary_cp61

0xa9d7,	// (0x000174a6) navi_pane_cams_g5

0xaa23,	// (0x000174f2) navi_pane_im_t1

0xaa31,	// (0x00017500) navi_pane_mp_g1_ParamLimits

0xaa31,	// (0x00017500) navi_pane_mp_g1

0xaa45,	// (0x00017514) navi_pane_mp_g2_ParamLimits

0xaa45,	// (0x00017514) navi_pane_mp_g2

0xaa51,	// (0x00017520) navi_pane_mp_g3_ParamLimits

0xaa51,	// (0x00017520) navi_pane_mp_g3

0x0002,

0xf36c,	// (0x0001be3b) navi_pane_mp_g_ParamLimits

0xf36c,	// (0x0001be3b) navi_pane_mp_g

0xaa5d,	// (0x0001752c) navi_pane_mp_t1

0xaa6b,	// (0x0001753a) navi_pane_mp_t2

0x0002,

0xf373,	// (0x0001be42) navi_pane_mp_t

0xaad6,	// (0x000175a5) navi_pane_vt_g1

0xaa5d,	// (0x0001752c) navi_pane_vt_t1

0xaade,	// (0x000175ad) navi_slider_pane

0x9ff1,	// (0x00016ac0) zooming_pane

0xaae6,	// (0x000175b5) navi_slider_pane_g1

0xaaef,	// (0x000175be) navi_slider_pane_g2

0x0006,

0xf37a,	// (0x0001be49) navi_slider_pane_g

0xab1c,	// (0x000175eb) aid_levels_zoom

0xab24,	// (0x000175f3) zooming_pane_g1

0xab2c,	// (0x000175fb) zooming_pane_g2

0xab2c,	// (0x000175fb) zooming_pane_g3

0x0002,

0xf389,	// (0x0001be58) zooming_pane_g

0xab34,	// (0x00017603) level_10_zoom

0xab3d,	// (0x0001760c) level_11_zoom

0xab46,	// (0x00017615) level_1_zoom

0xab4f,	// (0x0001761e) level_2_zoom

0xab58,	// (0x00017627) level_3_zoom

0xab61,	// (0x00017630) level_4_zoom

0xab6a,	// (0x00017639) level_5_zoom

0xab73,	// (0x00017642) level_6_zoom

0xab7c,	// (0x0001764b) level_7_zoom

0xab85,	// (0x00017654) level_8_zoom

0xab8e,	// (0x0001765d) level_9_zoom

0xab9f,	// (0x0001766e) popup_phob_thumbnail_window_g1

0xaba7,	// (0x00017676) popup_phob_thumbnail_window_g2

0x0001,

0xf390,	// (0x0001be5f) popup_phob_thumbnail_window_g

0x3d8d,	// (0x0001085c) level_1_location

0x3d95,	// (0x00010864) level_2_location

0x3d9d,	// (0x0001086c) level_3_location

0x3da5,	// (0x00010874) level_4_location

0x9ff1,	// (0x00016ac0) level_5_location

0x349f,	// (0x0000ff6e) mce_icon_pane_g1

0x34a7,	// (0x0000ff76) mce_icon_pane_g2

0x0001,

0xf395,	// (0x0001be64) mce_icon_pane_g

0xabaf,	// (0x0001767e) main_mup_pane_g1_ParamLimits

0xabaf,	// (0x0001767e) main_mup_pane_g1

0xabaf,	// (0x0001767e) main_mup_pane_g2_ParamLimits

0xabaf,	// (0x0001767e) main_mup_pane_g2

0xabaf,	// (0x0001767e) main_mup_pane_g3_ParamLimits

0xabaf,	// (0x0001767e) main_mup_pane_g3

0xabaf,	// (0x0001767e) main_mup_pane_g4_ParamLimits

0xabaf,	// (0x0001767e) main_mup_pane_g4

0xabaf,	// (0x0001767e) main_mup_pane_g5_ParamLimits

0xabaf,	// (0x0001767e) main_mup_pane_g5

0xabaf,	// (0x0001767e) main_mup_pane_g6_ParamLimits

0xabaf,	// (0x0001767e) main_mup_pane_g6

0xabaf,	// (0x0001767e) main_mup_pane_g7_ParamLimits

0xabaf,	// (0x0001767e) main_mup_pane_g7

0xabaf,	// (0x0001767e) main_mup_pane_g8_ParamLimits

0xabaf,	// (0x0001767e) main_mup_pane_g8

0xabaf,	// (0x0001767e) main_mup_pane_g9_ParamLimits

0xabaf,	// (0x0001767e) main_mup_pane_g9

0xabaf,	// (0x0001767e) main_mup_pane_g10_ParamLimits

0xabaf,	// (0x0001767e) main_mup_pane_g10

0xabaf,	// (0x0001767e) main_mup_pane_g11_ParamLimits

0xabaf,	// (0x0001767e) main_mup_pane_g11

0x9ce6,	// (0x000167b5) main_mup_pane_g12_ParamLimits

0x9ce6,	// (0x000167b5) main_mup_pane_g12

0xabaf,	// (0x0001767e) main_mup_pane_g13_ParamLimits

0xabaf,	// (0x0001767e) main_mup_pane_g13

0x000c,

0xf39a,	// (0x0001be69) main_mup_pane_g_ParamLimits

0xf39a,	// (0x0001be69) main_mup_pane_g

0xabbd,	// (0x0001768c) main_mup_pane_t1_ParamLimits

0xabbd,	// (0x0001768c) main_mup_pane_t1

0xabbd,	// (0x0001768c) main_mup_pane_t2_ParamLimits

0xabbd,	// (0x0001768c) main_mup_pane_t2

0xabbd,	// (0x0001768c) main_mup_pane_t3_ParamLimits

0xabbd,	// (0x0001768c) main_mup_pane_t3

0xa03b,	// (0x00016b0a) main_mup_pane_t4_ParamLimits

0xa03b,	// (0x00016b0a) main_mup_pane_t4

0xa03b,	// (0x00016b0a) main_mup_pane_t5_ParamLimits

0xa03b,	// (0x00016b0a) main_mup_pane_t5

0xabd1,	// (0x000176a0) main_mup_pane_t6_ParamLimits

0xabd1,	// (0x000176a0) main_mup_pane_t6

0x0005,

0xf3b5,	// (0x0001be84) main_mup_pane_t_ParamLimits

0xf3b5,	// (0x0001be84) main_mup_pane_t

0x9d02,	// (0x000167d1) mup_progress_pane_ParamLimits

0x9d02,	// (0x000167d1) mup_progress_pane

0xabe5,	// (0x000176b4) mup_visualizer_pane_ParamLimits

0xabe5,	// (0x000176b4) mup_visualizer_pane

0xabe5,	// (0x000176b4) mup_volume_pane_ParamLimits

0xabe5,	// (0x000176b4) mup_volume_pane

0x9cf4,	// (0x000167c3) mup_visualizer_pane_g1_ParamLimits

0x9cf4,	// (0x000167c3) mup_visualizer_pane_g1

0xabf3,	// (0x000176c2) mup_visualizer_pane_g2_ParamLimits

0xabf3,	// (0x000176c2) mup_visualizer_pane_g2

0x9ce6,	// (0x000167b5) mup_visualizer_pane_g3_ParamLimits

0x9ce6,	// (0x000167b5) mup_visualizer_pane_g3

0x0002,

0xf3c2,	// (0x0001be91) mup_visualizer_pane_g_ParamLimits

0xf3c2,	// (0x0001be91) mup_visualizer_pane_g

0xa069,	// (0x00016b38) mup_volume_pane_g1

0xa069,	// (0x00016b38) mup_volume_pane_g2

0x0001,

0xf3c9,	// (0x0001be98) mup_volume_pane_g

0xa069,	// (0x00016b38) mup_progress_pane_g1

0xa069,	// (0x00016b38) mup_progress_pane_g2

0xa069,	// (0x00016b38) mup_progress_pane_g3

0x0002,

0xf3ce,	// (0x0001be9d) mup_progress_pane_g

0x9a11,	// (0x000164e0) bg_popup_window_pane_cp05

0xac01,	// (0x000176d0) heading_pane_cp02_ParamLimits

0xac01,	// (0x000176d0) heading_pane_cp02

0xac1b,	// (0x000176ea) list_popup_blid_pane

0xac23,	// (0x000176f2) list_blid_sat_info_pane_ParamLimits

0xac23,	// (0x000176f2) list_blid_sat_info_pane

0xac36,	// (0x00017705) list_blid_sat_info_pane_g1

0xac3e,	// (0x0001770d) list_blid_sat_info_pane_t1

0x3581,	// (0x00010050) mup_equalizer_pane_ParamLimits

0x3581,	// (0x00010050) mup_equalizer_pane

0x359a,	// (0x00010069) mup_equalizer_pane_cp1_ParamLimits

0x359a,	// (0x00010069) mup_equalizer_pane_cp1

0x35b3,	// (0x00010082) mup_equalizer_pane_cp2_ParamLimits

0x35b3,	// (0x00010082) mup_equalizer_pane_cp2

0x35cc,	// (0x0001009b) mup_equalizer_pane_cp3_ParamLimits

0x35cc,	// (0x0001009b) mup_equalizer_pane_cp3

0x35e5,	// (0x000100b4) mup_equalizer_pane_cp4_ParamLimits

0x35e5,	// (0x000100b4) mup_equalizer_pane_cp4

0x35fe,	// (0x000100cd) mup_equalizer_pane_cp5

0x3610,	// (0x000100df) mup_equalizer_pane_cp6

0x3622,	// (0x000100f1) mup_equalizer_pane_cp7

0xbe4b,	// (0x0001891a) bg_popup_call_poc_act_pane_g9

0xbe53,	// (0x00018922) bg_popup_call_poc_act_pane_g10

0xbe5b,	// (0x0001892a) bg_popup_call_poc_act_pane_g11

0x000a,

0x9c6c,	// (0x0001673b) mup_scale_pane

0x9c84,	// (0x00016753) mup_scale_pane_g1

0xac4c,	// (0x0001771b) mup_scale_pane_g2

0x0006,

0xf3ea,	// (0x0001beb9) mup_scale_pane_g

0xac70,	// (0x0001773f) msg_data_pane

0xac78,	// (0x00017747) scroll_pane_cp017

0x3648,	// (0x00010117) bg_list_pane_cp04_ParamLimits

0x3648,	// (0x00010117) bg_list_pane_cp04

0xac88,	// (0x00017757) msg_data_pane_g1

0x3216,	// (0x0000fce5) msg_data_pane_g2

0x321e,	// (0x0000fced) msg_data_pane_g3

0x3660,	// (0x0001012f) msg_data_pane_g4

0x322e,	// (0x0000fcfd) msg_data_pane_g5

0x349f,	// (0x0000ff6e) msg_data_pane_g6

0x3668,	// (0x00010137) msg_data_pane_g7

0x0006,

0xf3f9,	// (0x0001bec8) msg_data_pane_g

0x3670,	// (0x0001013f) msg_text_pane_ParamLimits

0x3670,	// (0x0001013f) msg_text_pane

0x3697,	// (0x00010166) qrid_highlight_pane_cp011_ParamLimits

0x3697,	// (0x00010166) qrid_highlight_pane_cp011

0x9a11,	// (0x000164e0) msg_body_pane

0x9a11,	// (0x000164e0) msg_header_pane

0xac99,	// (0x00017768) input_focus_pane_cp07

0xacae,	// (0x0001777d) msg_header_pane_t1_ParamLimits

0xacae,	// (0x0001777d) msg_header_pane_t1

0xacc4,	// (0x00017793) msg_header_pane_t2_ParamLimits

0xacc4,	// (0x00017793) msg_header_pane_t2

0x0001,

0xf40d,	// (0x0001bedc) msg_header_pane_t_ParamLimits

0xf40d,	// (0x0001bedc) msg_header_pane_t

0xacdb,	// (0x000177aa) msg_body_pane_g1

0xace3,	// (0x000177b2) msg_body_pane_t1_ParamLimits

0xace3,	// (0x000177b2) msg_body_pane_t1

0xad0e,	// (0x000177dd) msg_body_pane_t2_ParamLimits

0xad0e,	// (0x000177dd) msg_body_pane_t2

0xad20,	// (0x000177ef) msg_body_pane_t3_ParamLimits

0xad20,	// (0x000177ef) msg_body_pane_t3

0x0002,

0xf412,	// (0x0001bee1) msg_body_pane_t_ParamLimits

0xf412,	// (0x0001bee1) msg_body_pane_t

0x36ef,	// (0x000101be) main_viewer_pane_g1_ParamLimits

0x36ef,	// (0x000101be) main_viewer_pane_g1

0x36fb,	// (0x000101ca) main_viewer_pane_g2_ParamLimits

0x36fb,	// (0x000101ca) main_viewer_pane_g2

0x3707,	// (0x000101d6) main_viewer_pane_g3_ParamLimits

0x3707,	// (0x000101d6) main_viewer_pane_g3

0x3716,	// (0x000101e5) main_viewer_pane_g4_ParamLimits

0x3716,	// (0x000101e5) main_viewer_pane_g4

0xad4a,	// (0x00017819) main_viewer_pane_g5_ParamLimits

0xad4a,	// (0x00017819) main_viewer_pane_g5

0xad4a,	// (0x00017819) main_viewer_pane_g7_ParamLimits

0xad4a,	// (0x00017819) main_viewer_pane_g7

0xad5c,	// (0x0001782b) main_viewer_pane_g8_ParamLimits

0xad5c,	// (0x0001782b) main_viewer_pane_g8

0x0007,

0xf422,	// (0x0001bef1) main_viewer_pane_g_ParamLimits

0xf422,	// (0x0001bef1) main_viewer_pane_g

0xad74,	// (0x00017843) viewer_content_pane_ParamLimits

0xad74,	// (0x00017843) viewer_content_pane

0x374a,	// (0x00010219) main_postcard_pane_g1_ParamLimits

0x374a,	// (0x00010219) main_postcard_pane_g1

0x375e,	// (0x0001022d) main_postcard_pane_g2_ParamLimits

0x375e,	// (0x0001022d) main_postcard_pane_g2

0x3772,	// (0x00010241) main_postcard_pane_g3_ParamLimits

0x3772,	// (0x00010241) main_postcard_pane_g3

0x0005,

0xf433,	// (0x0001bf02) main_postcard_pane_g_ParamLimits

0xf433,	// (0x0001bf02) main_postcard_pane_g

0x3785,	// (0x00010254) main_postcard_pane_g4

0xc039,	// (0x00018b08) smil_status_volume_pane_g2

0x37c0,	// (0x0001028f) postcard_pane_ParamLimits

0x37c0,	// (0x0001028f) postcard_pane

0xad82,	// (0x00017851) postcard_pane_g1_ParamLimits

0xad82,	// (0x00017851) postcard_pane_g1

0x3800,	// (0x000102cf) postcard_pane_g2_ParamLimits

0x3800,	// (0x000102cf) postcard_pane_g2

0x380c,	// (0x000102db) postcard_pane_g3_ParamLimits

0x380c,	// (0x000102db) postcard_pane_g3

0xad90,	// (0x0001785f) postcard_pane_g4_ParamLimits

0xad90,	// (0x0001785f) postcard_pane_g4

0x3818,	// (0x000102e7) postcard_pane_g5_ParamLimits

0x3818,	// (0x000102e7) postcard_pane_g5

0x382d,	// (0x000102fc) postcard_pane_g6_ParamLimits

0x382d,	// (0x000102fc) postcard_pane_g6

0xad82,	// (0x00017851) postcard_pane_g7_ParamLimits

0xad82,	// (0x00017851) postcard_pane_g7

0x0006,

0xf440,	// (0x0001bf0f) postcard_pane_g_ParamLimits

0xf440,	// (0x0001bf0f) postcard_pane_g

0x3841,	// (0x00010310) main_mp2_pane_g1_ParamLimits

0x3841,	// (0x00010310) main_mp2_pane_g1

0x384d,	// (0x0001031c) main_mp2_pane_g2_ParamLimits

0x384d,	// (0x0001031c) main_mp2_pane_g2

0x3859,	// (0x00010328) main_mp2_pane_g3_ParamLimits

0x3859,	// (0x00010328) main_mp2_pane_g3

0x0002,

0xf44f,	// (0x0001bf1e) main_mp2_pane_g_ParamLimits

0xf44f,	// (0x0001bf1e) main_mp2_pane_g

0x3865,	// (0x00010334) main_mp2_pane_t1_ParamLimits

0x3865,	// (0x00010334) main_mp2_pane_t1

0x387a,	// (0x00010349) main_mp2_pane_t2_ParamLimits

0x387a,	// (0x00010349) main_mp2_pane_t2

0x388c,	// (0x0001035b) main_mp2_pane_t3_ParamLimits

0x388c,	// (0x0001035b) main_mp2_pane_t3

0x0002,

0xf456,	// (0x0001bf25) main_mp2_pane_t_ParamLimits

0xf456,	// (0x0001bf25) main_mp2_pane_t

0xad9e,	// (0x0001786d) pec_content_pane_ParamLimits

0xad9e,	// (0x0001786d) pec_content_pane

0xa215,	// (0x00016ce4) scroll_pane_cp015

0xadb0,	// (0x0001787f) pec_attribute_pane_ParamLimits

0xadb0,	// (0x0001787f) pec_attribute_pane

0x389e,	// (0x0001036d) pec_content_pane_g1_ParamLimits

0x389e,	// (0x0001036d) pec_content_pane_g1

0xadc0,	// (0x0001788f) pec_content_pane_t1_ParamLimits

0xadc0,	// (0x0001788f) pec_content_pane_t1

0xadd2,	// (0x000178a1) pec_content_pane_t2_ParamLimits

0xadd2,	// (0x000178a1) pec_content_pane_t2

0x0001,

0xf45d,	// (0x0001bf2c) pec_content_pane_t_ParamLimits

0xf45d,	// (0x0001bf2c) pec_content_pane_t

0x38aa,	// (0x00010379) list_single_graphic_pane_cp01_ParamLimits

0x38aa,	// (0x00010379) list_single_graphic_pane_cp01

0x9c6c,	// (0x0001673b) bg_popup_sub_pane_cp04

0xade4,	// (0x000178b3) popup_mup_playback_window_g1

0xadf0,	// (0x000178bf) popup_mup_playback_window_t1

0xae05,	// (0x000178d4) popup_mup_playback_window_t2

0x0001,

0xf462,	// (0x0001bf31) popup_mup_playback_window_t

0xae3c,	// (0x0001790b) main_image_pane_g1_ParamLimits

0xae3c,	// (0x0001790b) main_image_pane_g1

0xae7f,	// (0x0001794e) scroll_pane_cp018_ParamLimits

0xae7f,	// (0x0001794e) scroll_pane_cp018

0xae97,	// (0x00017966) scroll_pane_cp016_ParamLimits

0xae97,	// (0x00017966) scroll_pane_cp016

0x3975,	// (0x00010444) smil2_image_pane_ParamLimits

0x3975,	// (0x00010444) smil2_image_pane

0x399d,	// (0x0001046c) smil2_root_pane_ParamLimits

0x399d,	// (0x0001046c) smil2_root_pane

0x39d5,	// (0x000104a4) smil2_text_pane_ParamLimits

0x39d5,	// (0x000104a4) smil2_text_pane

0x9a11,	// (0x000164e0) bg_list_pane_cp06

0xaed3,	// (0x000179a2) grid_radio_pane

0x9a11,	// (0x000164e0) bg_popup_window_pane_cp06

0xaedb,	// (0x000179aa) main_fmradio_pane_t1

0xbea3,	// (0x00018972) heading_pane_cp04

0xaee9,	// (0x000179b8) main_fmradio_pane_t2

0xbeab,	// (0x0001897a) popup_cale_lunar_info_window_g1

0xaef7,	// (0x000179c6) main_fmradio_pane_t3

0xbeb3,	// (0x00018982) popup_cale_lunar_info_window_g2

0xaf05,	// (0x000179d4) main_fmradio_pane_t4

0x0001,

0xaf13,	// (0x000179e2) main_fmradio_pane_t5

0x0004,

0xf555,	// (0x0001c024) popup_cale_lunar_info_window_g

0xf477,	// (0x0001bf46) main_fmradio_pane_t

0xaf21,	// (0x000179f0) wait_bar_pane_cp03

0xaf29,	// (0x000179f8) cell_fmradio_pane_ParamLimits

0xaf29,	// (0x000179f8) cell_fmradio_pane

0xad82,	// (0x00017851) cell_fmradio_pane_g1_ParamLimits

0xad82,	// (0x00017851) cell_fmradio_pane_g1

0x9a11,	// (0x000164e0) grid_highlight_pane_cp011

0xaf3c,	// (0x00017a0b) poc_content_pane_ParamLimits

0xaf3c,	// (0x00017a0b) poc_content_pane

0xaf4f,	// (0x00017a1e) scroll_pane_cp019

0x3a41,	// (0x00010510) popup_call_poc_act_window_ParamLimits

0x3a41,	// (0x00010510) popup_call_poc_act_window

0x3a61,	// (0x00010530) popup_call_poc_inact_window_ParamLimits

0x3a61,	// (0x00010530) popup_call_poc_inact_window

0xf519,	// (0x0001bfe8) bg_popup_call_poc_act_pane_g

0xbe63,	// (0x00018932) bg_popup_call_poc_inact_pane_g1

0xbe6b,	// (0x0001893a) bg_popup_call_poc_inact_pane_g2

0xaf57,	// (0x00017a26) popup_call_poc_act_window_g2

0xbe73,	// (0x00018942) bg_popup_call_poc_inact_pane_g3

0xbdf3,	// (0x000188c2) bg_popup_call_poc_inact_pane_g4

0xbe7b,	// (0x0001894a) bg_popup_call_poc_inact_pane_g5

0xaf5f,	// (0x00017a2e) popup_call_poc_act_window_t1_ParamLimits

0xaf5f,	// (0x00017a2e) popup_call_poc_act_window_t1

0xaf87,	// (0x00017a56) popup_call_poc_act_window_t2_ParamLimits

0xaf87,	// (0x00017a56) popup_call_poc_act_window_t2

0xafaf,	// (0x00017a7e) popup_call_poc_act_window_t3_ParamLimits

0xafaf,	// (0x00017a7e) popup_call_poc_act_window_t3

0xafd7,	// (0x00017aa6) popup_call_poc_act_window_t4_ParamLimits

0xafd7,	// (0x00017aa6) popup_call_poc_act_window_t4

0x0003,

0xf482,	// (0x0001bf51) popup_call_poc_act_window_t_ParamLimits

0xf482,	// (0x0001bf51) popup_call_poc_act_window_t

0xbe83,	// (0x00018952) bg_popup_call_poc_inact_pane_g6

0xbe8b,	// (0x0001895a) bg_popup_call_poc_inact_pane_g7

0xbe93,	// (0x00018962) bg_popup_call_poc_inact_pane_g8

0xafe9,	// (0x00017ab8) popup_call_poc_inact_window_g2

0xbe9b,	// (0x0001896a) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf530,	// (0x0001bfff) bg_popup_call_poc_inact_pane_g

0xaff1,	// (0x00017ac0) popup_call_poc_inact_window_t1_ParamLimits

0xaff1,	// (0x00017ac0) popup_call_poc_inact_window_t1

0xb006,	// (0x00017ad5) popup_call_poc_inact_window_t2_ParamLimits

0xb006,	// (0x00017ad5) popup_call_poc_inact_window_t2

0xb01b,	// (0x00017aea) popup_call_poc_inact_window_t3_ParamLimits

0xb01b,	// (0x00017aea) popup_call_poc_inact_window_t3

0x0002,

0xf48b,	// (0x0001bf5a) popup_call_poc_inact_window_t_ParamLimits

0xf48b,	// (0x0001bf5a) popup_call_poc_inact_window_t

0xbfb1,	// (0x00018a80) context_pane_ParamLimits

0x41a4,	// (0x00010c73) signal_pane_ParamLimits

0x9ff1,	// (0x00016ac0) main_call2_pane

0xbf8a,	// (0x00018a59) popup_phob_thumbnail2_window_ParamLimits

0xbf8a,	// (0x00018a59) popup_phob_thumbnail2_window

0xad32,	// (0x00017801) aid_hotspot_pointer_arrow_pane

0xad3a,	// (0x00017809) aid_hotspot_pointer_hand_pane

0x3d5b,	// (0x0001082a) phob_pre_status_pane_g5

0x95f2,	// (0x000160c1) cams_zoom_pane_ParamLimits

0x95f2,	// (0x000160c1) image_vga_pane_ParamLimits

0x9ce6,	// (0x000167b5) main_camera_pane_g1_ParamLimits

0x9ce6,	// (0x000167b5) main_camera_pane_g2_ParamLimits

0x9ce6,	// (0x000167b5) main_camera_pane_g3_ParamLimits

0x9ce6,	// (0x000167b5) main_camera_pane_g4_ParamLimits

0x9ce6,	// (0x000167b5) main_camera_pane_g5_ParamLimits

0x9ce6,	// (0x000167b5) main_camera_pane_g6_ParamLimits

0x9ce6,	// (0x000167b5) main_camera_pane_g7_ParamLimits

0xf19f,	// (0x0001bc6e) main_camera_pane_g_ParamLimits

0xa03b,	// (0x00016b0a) main_camera_pane_t1_ParamLimits

0xa03b,	// (0x00016b0a) main_camera_pane_t2_ParamLimits

0xf1b0,	// (0x0001bc7f) main_camera_pane_t_ParamLimits

0x9c6c,	// (0x0001673b) bg_popup_preview_window_pane_cp01_ParamLimits

0x9c6c,	// (0x0001673b) bg_popup_preview_window_pane_cp01

0xb030,	// (0x00017aff) popup_phob_thumbnail2_window_g1_ParamLimits

0xb030,	// (0x00017aff) popup_phob_thumbnail2_window_g1

0x9a11,	// (0x000164e0) call2_cli_visual_pane

0x3a8d,	// (0x0001055c) popup_call2_audio_conf_window_ParamLimits

0x3a8d,	// (0x0001055c) popup_call2_audio_conf_window

0x3aab,	// (0x0001057a) popup_call2_audio_first_window_ParamLimits

0x3aab,	// (0x0001057a) popup_call2_audio_first_window

0x3b21,	// (0x000105f0) popup_call2_audio_in_window_ParamLimits

0x3b21,	// (0x000105f0) popup_call2_audio_in_window

0x3b55,	// (0x00010624) popup_call2_audio_out_window_ParamLimits

0x3b55,	// (0x00010624) popup_call2_audio_out_window

0x3ba7,	// (0x00010676) popup_call2_audio_second_window_ParamLimits

0x3ba7,	// (0x00010676) popup_call2_audio_second_window

0x3bf9,	// (0x000106c8) popup_call2_audio_wait_window_ParamLimits

0x3bf9,	// (0x000106c8) popup_call2_audio_wait_window

0x9a11,	// (0x000164e0) bg_popup_call2_act_pane_cp03

0x9c4e,	// (0x0001671d) list_conf_pane_cp

0xb03c,	// (0x00017b0b) popup_call2_audio_conf_window_t1

0xa83b,	// (0x0001730a) list_single_graphic_popup_conf2_pane_ParamLimits

0xa83b,	// (0x0001730a) list_single_graphic_popup_conf2_pane

0xa84e,	// (0x0001731d) list_highlight_pane_cp04

0xb04a,	// (0x00017b19) list_single_graphic_popup_conf2_pane_g1

0xa85f,	// (0x0001732e) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf492,	// (0x0001bf61) list_single_graphic_popup_conf2_pane_g

0xb052,	// (0x00017b21) list_single_graphic_popup_conf2_pane_t1

0xb060,	// (0x00017b2f) bg_popup_call2_act_pane_cp01_ParamLimits

0xb060,	// (0x00017b2f) bg_popup_call2_act_pane_cp01

0xb0ea,	// (0x00017bb9) call_type_pane_cp05_ParamLimits

0xb0ea,	// (0x00017bb9) call_type_pane_cp05

0xb13e,	// (0x00017c0d) popup_call2_audio_second_window_g1_ParamLimits

0xb13e,	// (0x00017c0d) popup_call2_audio_second_window_g1

0xb192,	// (0x00017c61) popup_call2_audio_second_window_g2_ParamLimits

0xb192,	// (0x00017c61) popup_call2_audio_second_window_g2

0x0002,

0xf497,	// (0x0001bf66) popup_call2_audio_second_window_g_ParamLimits

0xf497,	// (0x0001bf66) popup_call2_audio_second_window_g

0xb1f7,	// (0x00017cc6) popup_call2_audio_second_window_t1_ParamLimits

0xb1f7,	// (0x00017cc6) popup_call2_audio_second_window_t1

0xb2b2,	// (0x00017d81) popup_call2_audio_second_window_t2_ParamLimits

0xb2b2,	// (0x00017d81) popup_call2_audio_second_window_t2

0xb305,	// (0x00017dd4) popup_call2_audio_second_window_t3_ParamLimits

0xb305,	// (0x00017dd4) popup_call2_audio_second_window_t3

0x0003,

0xf49e,	// (0x0001bf6d) popup_call2_audio_second_window_t_ParamLimits

0xf49e,	// (0x0001bf6d) popup_call2_audio_second_window_t

0x9a11,	// (0x000164e0) bg_popup_call2_in_pane_cp02

0x9a1b,	// (0x000164ea) call_type_pane_cp04

0x3c31,	// (0x00010700) popup_call2_audio_wait_window_g1

0x3c39,	// (0x00010708) popup_call2_audio_wait_window_g2

0x0001,

0xf4a7,	// (0x0001bf76) popup_call2_audio_wait_window_g

0x9a33,	// (0x00016502) popup_call2_audio_wait_window_t3

0xb3f8,	// (0x00017ec7) bg_popup_call2_act_pane_ParamLimits

0xb3f8,	// (0x00017ec7) bg_popup_call2_act_pane

0xb4b8,	// (0x00017f87) call_type_pane_cp03_ParamLimits

0xb4b8,	// (0x00017f87) call_type_pane_cp03

0xb51c,	// (0x00017feb) popup_call2_audio_first_window_g1_ParamLimits

0xb51c,	// (0x00017feb) popup_call2_audio_first_window_g1

0xb58c,	// (0x0001805b) popup_call2_audio_first_window_g2_ParamLimits

0xb58c,	// (0x0001805b) popup_call2_audio_first_window_g2

0xb5f0,	// (0x000180bf) popup_call2_audio_first_window_g3_ParamLimits

0xb5f0,	// (0x000180bf) popup_call2_audio_first_window_g3

0x0004,

0xf4ac,	// (0x0001bf7b) popup_call2_audio_first_window_g_ParamLimits

0xf4ac,	// (0x0001bf7b) popup_call2_audio_first_window_g

0xb678,	// (0x00018147) popup_call2_audio_first_window_t1_ParamLimits

0xb678,	// (0x00018147) popup_call2_audio_first_window_t1

0xb77b,	// (0x0001824a) popup_call2_audio_first_window_t4_ParamLimits

0xb77b,	// (0x0001824a) popup_call2_audio_first_window_t4

0xb85e,	// (0x0001832d) popup_call2_audio_first_window_t5_ParamLimits

0xb85e,	// (0x0001832d) popup_call2_audio_first_window_t5

0x0003,

0xf4b7,	// (0x0001bf86) popup_call2_audio_first_window_t_ParamLimits

0xf4b7,	// (0x0001bf86) popup_call2_audio_first_window_t

0x9c64,	// (0x00016733) bg_popup_call2_act_pane_g1

0xbebb,	// (0x0001898a) popup_cale_lunar_info_window_t1

0xbec9,	// (0x00018998) popup_cale_lunar_info_window_t2

0xbed7,	// (0x000189a6) popup_cale_lunar_info_window_t3

0x9a11,	// (0x000164e0) bg_popup_call2_bubble_pane

0xb95f,	// (0x0001842e) bg_popup_call2_in_pane_cp01_ParamLimits

0xb95f,	// (0x0001842e) bg_popup_call2_in_pane_cp01

0x96ed,	// (0x000161bc) call_type_pane_cp02

0x3c41,	// (0x00010710) popup_call2_audio_out_window_g1_ParamLimits

0x3c41,	// (0x00010710) popup_call2_audio_out_window_g1

0xb9a7,	// (0x00018476) popup_call2_audio_out_window_g2_ParamLimits

0xb9a7,	// (0x00018476) popup_call2_audio_out_window_g2

0x3c6d,	// (0x0001073c) popup_call2_audio_out_window_g3_ParamLimits

0x3c6d,	// (0x0001073c) popup_call2_audio_out_window_g3

0x0003,

0xf4c0,	// (0x0001bf8f) popup_call2_audio_out_window_g_ParamLimits

0xf4c0,	// (0x0001bf8f) popup_call2_audio_out_window_g

0xb9de,	// (0x000184ad) popup_call2_audio_out_window_t1_ParamLimits

0xb9de,	// (0x000184ad) popup_call2_audio_out_window_t1

0xba3d,	// (0x0001850c) popup_call2_audio_out_window_t2_ParamLimits

0xba3d,	// (0x0001850c) popup_call2_audio_out_window_t2

0xba91,	// (0x00018560) popup_call2_audio_out_window_t3_ParamLimits

0xba91,	// (0x00018560) popup_call2_audio_out_window_t3

0xbaa7,	// (0x00018576) popup_call2_audio_out_window_t4_ParamLimits

0xbaa7,	// (0x00018576) popup_call2_audio_out_window_t4

0xbabd,	// (0x0001858c) popup_call2_audio_out_window_t5_ParamLimits

0xbabd,	// (0x0001858c) popup_call2_audio_out_window_t5

0x0005,

0xf4c9,	// (0x0001bf98) popup_call2_audio_out_window_t_ParamLimits

0xf4c9,	// (0x0001bf98) popup_call2_audio_out_window_t

0xbb21,	// (0x000185f0) bg_popup_call2_in_pane_ParamLimits

0xbb21,	// (0x000185f0) bg_popup_call2_in_pane

0xbb7d,	// (0x0001864c) popup_call2_audio_in_window_g1_ParamLimits

0xbb7d,	// (0x0001864c) popup_call2_audio_in_window_g1

0xbbb5,	// (0x00018684) popup_call2_audio_in_window_g2_ParamLimits

0xbbb5,	// (0x00018684) popup_call2_audio_in_window_g2

0xbbed,	// (0x000186bc) popup_call2_audio_in_window_g3_ParamLimits

0xbbed,	// (0x000186bc) popup_call2_audio_in_window_g3

0x0003,

0xf4d6,	// (0x0001bfa5) popup_call2_audio_in_window_g_ParamLimits

0xf4d6,	// (0x0001bfa5) popup_call2_audio_in_window_g

0xbc45,	// (0x00018714) popup_call2_audio_in_window_t1_ParamLimits

0xbc45,	// (0x00018714) popup_call2_audio_in_window_t1

0xbcc5,	// (0x00018794) popup_call2_audio_in_window_t2_ParamLimits

0xbcc5,	// (0x00018794) popup_call2_audio_in_window_t2

0xbd45,	// (0x00018814) popup_call2_audio_in_window_t3_ParamLimits

0xbd45,	// (0x00018814) popup_call2_audio_in_window_t3

0xbd5f,	// (0x0001882e) popup_call2_audio_in_window_t4_ParamLimits

0xbd5f,	// (0x0001882e) popup_call2_audio_in_window_t4

0xbd71,	// (0x00018840) popup_call2_audio_in_window_t5_ParamLimits

0xbd71,	// (0x00018840) popup_call2_audio_in_window_t5

0xbd86,	// (0x00018855) popup_call2_audio_in_window_t6_ParamLimits

0xbd86,	// (0x00018855) popup_call2_audio_in_window_t6

0x0005,

0xf4df,	// (0x0001bfae) popup_call2_audio_in_window_t_ParamLimits

0xf4df,	// (0x0001bfae) popup_call2_audio_in_window_t

0x9c64,	// (0x00016733) bg_popup_call2_in_pane_g1

0xbee5,	// (0x000189b4) popup_cale_lunar_info_window_t4

0x0003,

0xf55a,	// (0x0001c029) popup_cale_lunar_info_window_t

0x9c6c,	// (0x0001673b) bg_popup_call2_rect_pane_ParamLimits

0x9c6c,	// (0x0001673b) bg_popup_call2_rect_pane

0x9a11,	// (0x000164e0) call2_cli_visual_graphic_pane

0x9a11,	// (0x000164e0) call2_cli_visual_text_pane

0xc04c,	// (0x00018b1b) smil_status_volume_pane_g3

0x0002,

0x9c84,	// (0x00016753) call2_cli_visual_graphic_pane_g1

0x9c84,	// (0x00016753) call2_cli_visual_graphic_pane_g2

0x9c84,	// (0x00016753) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4ec,	// (0x0001bfbb) call2_cli_visual_graphic_pane_g

0xbd9b,	// (0x0001886a) bg_popup_call2_rect_pane_g1

0x9ecd,	// (0x0001699c) bg_popup_call2_rect_pane_g2

0xbda3,	// (0x00018872) bg_popup_call2_rect_pane_g3

0xbdab,	// (0x0001887a) bg_popup_call2_rect_pane_g4

0xbdb3,	// (0x00018882) bg_popup_call2_rect_pane_g5

0xbdbb,	// (0x0001888a) bg_popup_call2_rect_pane_g6

0xbdc3,	// (0x00018892) bg_popup_call2_rect_pane_g7

0xbdcb,	// (0x0001889a) bg_popup_call2_rect_pane_g8

0xbdd3,	// (0x000188a2) bg_popup_call2_rect_pane_g9

0x0008,

0xf4f3,	// (0x0001bfc2) bg_popup_call2_rect_pane_g

0xbddb,	// (0x000188aa) bg_popup_call2_bubble_pane_g1

0xbde3,	// (0x000188b2) bg_popup_call2_bubble_pane_g2

0xbdeb,	// (0x000188ba) bg_popup_call2_bubble_pane_g3

0xbdf3,	// (0x000188c2) bg_popup_call2_bubble_pane_g4

0xbdfb,	// (0x000188ca) bg_popup_call2_bubble_pane_g5

0xbe03,	// (0x000188d2) bg_popup_call2_bubble_pane_g6

0xbe0b,	// (0x000188da) bg_popup_call2_bubble_pane_g7

0xbe13,	// (0x000188e2) bg_popup_call2_bubble_pane_g8

0xbe1b,	// (0x000188ea) bg_popup_call2_bubble_pane_g9

0x0008,

0xf506,	// (0x0001bfd5) bg_popup_call2_bubble_pane_g

0x1ab9,	// (0x0000e588) aid_cale_week_size_cell_pane

0x20f4,	// (0x0000ebc3) aid_cams_cif_uncrop_pane_ParamLimits

0x20f4,	// (0x0000ebc3) aid_cams_cif_uncrop_pane

0x224a,	// (0x0000ed19) aid_cams_size_cell_ParamLimits

0x224a,	// (0x0000ed19) aid_cams_size_cell

0x225e,	// (0x0000ed2d) grid_cams_pane_ParamLimits

0x2273,	// (0x0000ed42) linegrid_cams_pane_ParamLimits

0x233d,	// (0x0000ee0c) call_video_pane_t1

0x2357,	// (0x0000ee26) call_video_pane_t2

0x0001,

0xf1fc,	// (0x0001bccb) call_video_pane_t

0x26dc,	// (0x0000f1ab) aid_cale_month_size_cell_pane_ParamLimits

0x26dc,	// (0x0000f1ab) aid_cale_month_size_cell_pane

0xf59e,	// (0x0001c06d) smil_status_volume_pane_g

0xc059,	// (0x00018b28) volume_smil_pane_ParamLimits

0x95b1,	// (0x00016080) aid_popup2_width_pane

0x1a07,	// (0x0000e4d6) cell_qdial_pane_g4_ParamLimits

0x1a07,	// (0x0000e4d6) cell_qdial_pane_g4

0x3393,	// (0x0000fe62) aid_blid_cardinal_pane_ParamLimits

0x339f,	// (0x0000fe6e) aid_blid_destination_pane_ParamLimits

0x339f,	// (0x0000fe6e) aid_blid_destination_pane

0x9c6c,	// (0x0001673b) bg_popup_call_poc_act_pane_ParamLimits

0x9c6c,	// (0x0001673b) bg_popup_call_poc_act_pane

0x9c6c,	// (0x0001673b) bg_popup_call_poc_inact_pane_ParamLimits

0x9c6c,	// (0x0001673b) bg_popup_call_poc_inact_pane

0xbe23,	// (0x000188f2) bg_popup_call_poc_act_pane_g1

0xbe2b,	// (0x000188fa) bg_popup_call_poc_act_pane_g2

0xbe33,	// (0x00018902) bg_popup_call_poc_act_pane_g3

0xbdf3,	// (0x000188c2) bg_popup_call_poc_act_pane_g4

0xbdfb,	// (0x000188ca) bg_popup_call_poc_act_pane_g5

0xbe3b,	// (0x0001890a) bg_popup_call_poc_act_pane_g6

0xbe0b,	// (0x000188da) bg_popup_call_poc_act_pane_g7

0xbe43,	// (0x00018912) bg_popup_call_poc_act_pane_g8

0x9a11,	// (0x000164e0) main_usb_pane

0xbf69,	// (0x00018a38) popup_cale_lunar_info_window

0x259c,	// (0x0000f06b) im_reading_pane_t1_ParamLimits

0xa15e,	// (0x00016c2d) list_im_pane_ParamLimits

0xa16f,	// (0x00016c3e) scroll_pane_cp07_ParamLimits

0x9a11,	// (0x000164e0) grid_highlight_pane_cp012

0x9c6c,	// (0x0001673b) mup_scale_pane_ParamLimits

0xad82,	// (0x00017851) main_usb_pane_g1_ParamLimits

0xad82,	// (0x00017851) main_usb_pane_g1

0x3cbb,	// (0x0001078a) main_usb_pane_g2_ParamLimits

0x3cbb,	// (0x0001078a) main_usb_pane_g2

0x0001,

0xf543,	// (0x0001c012) main_usb_pane_g_ParamLimits

0xf543,	// (0x0001c012) main_usb_pane_g

0x3ccf,	// (0x0001079e) main_usb_pane_t1_ParamLimits

0x3ccf,	// (0x0001079e) main_usb_pane_t1

0x3ce1,	// (0x000107b0) main_usb_pane_t2_ParamLimits

0x3ce1,	// (0x000107b0) main_usb_pane_t2

0x3cf3,	// (0x000107c2) main_usb_pane_t3_ParamLimits

0x3cf3,	// (0x000107c2) main_usb_pane_t3

0x3d05,	// (0x000107d4) main_usb_pane_t4_ParamLimits

0x3d05,	// (0x000107d4) main_usb_pane_t4

0x3d17,	// (0x000107e6) main_usb_pane_t5_ParamLimits

0x3d17,	// (0x000107e6) main_usb_pane_t5

0x3d29,	// (0x000107f8) main_usb_pane_t6_ParamLimits

0x3d29,	// (0x000107f8) main_usb_pane_t6

0x0005,

0xf548,	// (0x0001c017) main_usb_pane_t_ParamLimits

0xa980,	// (0x0001744f) aid_text_placing

0x333f,	// (0x0000fe0e) main_location2_pane_t1_ParamLimits

0x3355,	// (0x0000fe24) main_location2_pane_t2_ParamLimits

0x336b,	// (0x0000fe3a) main_location2_pane_t3_ParamLimits

0x3381,	// (0x0000fe50) main_location2_pane_t4_ParamLimits

0x3381,	// (0x0000fe50) main_location2_pane_t4

0xf34f,	// (0x0001be1e) main_location2_pane_t_ParamLimits

0x9ca7,	// (0x00016776) find_pinb_pane_g2_ParamLimits

0x9ca7,	// (0x00016776) find_pinb_pane_g2

0x0001,

0xf0b4,	// (0x0001bb83) find_pinb_pane_g_ParamLimits

0xf0b4,	// (0x0001bb83) find_pinb_pane_g

0x9cb3,	// (0x00016782) find_pinb_pane_t1_ParamLimits

0x9cc5,	// (0x00016794) find_pinb_pane_t2_ParamLimits

0xf0b9,	// (0x0001bb88) find_pinb_pane_t_ParamLimits

0x9a11,	// (0x000164e0) main_call3_pane

0x2ad7,	// (0x0000f5a6) cale_month_day_heading_pane_t1_ParamLimits

0x2b5d,	// (0x0000f62c) cale_month_day_heading_pane_t2_ParamLimits

0x2bee,	// (0x0000f6bd) cale_month_day_heading_pane_t3_ParamLimits

0x2c7f,	// (0x0000f74e) cale_month_day_heading_pane_t4_ParamLimits

0x2d10,	// (0x0000f7df) cale_month_day_heading_pane_t5_ParamLimits

0x2da1,	// (0x0000f870) cale_month_day_heading_pane_t6_ParamLimits

0x2e32,	// (0x0000f901) cale_month_day_heading_pane_t7_ParamLimits

0xf234,	// (0x0001bd03) cale_month_day_heading_pane_t_ParamLimits

0x308e,	// (0x0000fb5d) smil_status_volume_pane

0x37dc,	// (0x000102ab) postcard_address_pane_ParamLimits

0x37dc,	// (0x000102ab) postcard_address_pane

0x37ee,	// (0x000102bd) postcard_message_pane_ParamLimits

0x37ee,	// (0x000102bd) postcard_message_pane

0x3c99,	// (0x00010768) call2_cli_visual_pane_t1_ParamLimits

0x3c99,	// (0x00010768) call2_cli_visual_pane_t1

0xc086,	// (0x00018b55) postcard_message_pane_t1_ParamLimits

0xc086,	// (0x00018b55) postcard_message_pane_t1

0xc06e,	// (0x00018b3d) postcard_address_pane_t1_ParamLimits

0xc06e,	// (0x00018b3d) postcard_address_pane_t1

0x4350,	// (0x00010e1f) popup_call3_audio_in_window_ParamLimits

0x4350,	// (0x00010e1f) popup_call3_audio_in_window

0x41df,	// (0x00010cae) bg_popup_call3_in_pane_ParamLimits

0x41df,	// (0x00010cae) bg_popup_call3_in_pane

0x4251,	// (0x00010d20) popup_call3_audio_in_window_g1_ParamLimits

0x4251,	// (0x00010d20) popup_call3_audio_in_window_g1

0x4271,	// (0x00010d40) popup_call3_audio_in_window_g2_ParamLimits

0x4271,	// (0x00010d40) popup_call3_audio_in_window_g2

0x4291,	// (0x00010d60) popup_call3_audio_in_window_g3_ParamLimits

0x4291,	// (0x00010d60) popup_call3_audio_in_window_g3

0x0003,

0xf5a5,	// (0x0001c074) popup_call3_audio_in_window_g_ParamLimits

0xf5a5,	// (0x0001c074) popup_call3_audio_in_window_g

0x42c2,	// (0x00010d91) popup_call3_audio_in_window_t1_ParamLimits

0x42c2,	// (0x00010d91) popup_call3_audio_in_window_t1

0x4300,	// (0x00010dcf) popup_call3_audio_in_window_t2_ParamLimits

0x4300,	// (0x00010dcf) popup_call3_audio_in_window_t2

0x433e,	// (0x00010e0d) popup_call3_audio_in_window_t3_ParamLimits

0x433e,	// (0x00010e0d) popup_call3_audio_in_window_t3

0x0002,

0xf5ae,	// (0x0001c07d) popup_call3_audio_in_window_t_ParamLimits

0xf5ae,	// (0x0001c07d) popup_call3_audio_in_window_t

0x9ff1,	// (0x00016ac0) bg_popup_call3_rect_pane

0xbd9b,	// (0x0001886a) bg_popup_call3_rect_pane_g1

0x9ecd,	// (0x0001699c) bg_popup_call3_rect_pane_g2

0xbda3,	// (0x00018872) bg_popup_call3_rect_pane_g3

0xbdab,	// (0x0001887a) bg_popup_call3_rect_pane_g4

0xbdb3,	// (0x00018882) bg_popup_call3_rect_pane_g5

0xbdbb,	// (0x0001888a) bg_popup_call3_rect_pane_g6

0xbdc3,	// (0x00018892) bg_popup_call3_rect_pane_g7

0x959f,	// (0x0001606e) mup_visualizer_osc_pane

0x959f,	// (0x0001606e) mup_visualizer_spec_pane

0x420f,	// (0x00010cde) call3_video_qcif_pane_ParamLimits

0x420f,	// (0x00010cde) call3_video_qcif_pane

0x4220,	// (0x00010cef) call3_video_qcif_uncrop_pane_ParamLimits

0x4220,	// (0x00010cef) call3_video_qcif_uncrop_pane

0x422c,	// (0x00010cfb) call3_video_subqcif_pane_ParamLimits

0x422c,	// (0x00010cfb) call3_video_subqcif_pane

0x4240,	// (0x00010d0f) call3_video_subqcif_uncrop_pane_ParamLimits

0x4240,	// (0x00010d0f) call3_video_subqcif_uncrop_pane

0x42b1,	// (0x00010d80) popup_call3_audio_in_window_g4_ParamLimits

0x42b1,	// (0x00010d80) popup_call3_audio_in_window_g4

0x959f,	// (0x0001606e) mup_spec_half_pane

0x959f,	// (0x0001606e) mup_spec_half_pane_cp

0x959f,	// (0x0001606e) mup_osc_middle_pane

0xa069,	// (0x00016b38) mup_visualizer_osc_pane_g1

0xbfff,	// (0x00018ace) mup_spec_bar_pane_ParamLimits

0xbfff,	// (0x00018ace) mup_spec_bar_pane

0xa069,	// (0x00016b38) mup_spec_bar_pane_g1

0xa069,	// (0x00016b38) mup_spec_bar_pane_g2

0x0001,

0xf3c9,	// (0x0001be98) mup_spec_bar_pane_g

0x1ab9,	// (0x0000e588) aid_cale_week_size_cell_pane_ParamLimits

0x1ad3,	// (0x0000e5a2) bg_cale_heading_pane_ParamLimits

0x9f53,	// (0x00016a22) bg_cale_pane_cp01_ParamLimits

0x1aeb,	// (0x0000e5ba) cale_week_corner_pane_ParamLimits

0x1b0a,	// (0x0000e5d9) cale_week_day_heading_pane_ParamLimits

0x1b27,	// (0x0000e5f6) cale_week_scroll_pane_g1_ParamLimits

0x1b3a,	// (0x0000e609) cale_week_scroll_pane_g2_ParamLimits

0x1b52,	// (0x0000e621) cale_week_scroll_pane_g3_ParamLimits

0x1b6a,	// (0x0000e639) cale_week_scroll_pane_g4_ParamLimits

0x1b82,	// (0x0000e651) cale_week_scroll_pane_g5_ParamLimits

0x1b9a,	// (0x0000e669) cale_week_scroll_pane_g6_ParamLimits

0x1bb2,	// (0x0000e681) cale_week_scroll_pane_g7_ParamLimits

0x1bca,	// (0x0000e699) cale_week_scroll_pane_g8_ParamLimits

0x1be6,	// (0x0000e6b5) cale_week_scroll_pane_g9_ParamLimits

0x1bfe,	// (0x0000e6cd) cale_week_scroll_pane_g10_ParamLimits

0x1c16,	// (0x0000e6e5) cale_week_scroll_pane_g11_ParamLimits

0x1c2e,	// (0x0000e6fd) cale_week_scroll_pane_g12_ParamLimits

0x1c46,	// (0x0000e715) cale_week_scroll_pane_g13_ParamLimits

0x1c5e,	// (0x0000e72d) cale_week_scroll_pane_g14_ParamLimits

0x1c76,	// (0x0000e745) cale_week_scroll_pane_g15_ParamLimits

0xf145,	// (0x0001bc14) cale_week_scroll_pane_g_ParamLimits

0x1caa,	// (0x0000e779) cale_week_time_pane_ParamLimits

0x1cc6,	// (0x0000e795) grid_cale_week_pane_ParamLimits

0x9f70,	// (0x00016a3f) listscroll_cale_week_pane_t1

0x9f82,	// (0x00016a51) scroll_pane_cp08_ParamLimits

0x2731,	// (0x0000f200) cale_month_corner_pane_ParamLimits

0xa39f,	// (0x00016e6e) cale_month_pane_t1

0x2a8d,	// (0x0000f55c) cale_month_week_pane_ParamLimits

0x31b0,	// (0x0000fc7f) popup_call_status_window_g1_ParamLimits

0x31c4,	// (0x0000fc93) popup_call_status_window_g2_ParamLimits

0x31d8,	// (0x0000fca7) popup_call_status_window_g3_ParamLimits

0xf2d6,	// (0x0001bda5) popup_call_status_window_g_ParamLimits

0xa76c,	// (0x0001723b) aid_call2_pane

0x36ad,	// (0x0001017c) msg_header_pane_g1

0x37dc,	// (0x000102ab) postcard_address2_pane_ParamLimits

0x37dc,	// (0x000102ab) postcard_address2_pane

0x37ee,	// (0x000102bd) postcard_message2_pane_ParamLimits

0x37ee,	// (0x000102bd) postcard_message2_pane

0x41b2,	// (0x00010c81) message2_row_pane_ParamLimits

0x41b2,	// (0x00010c81) message2_row_pane

0x41cc,	// (0x00010c9b) address2_row_pane_ParamLimits

0x41cc,	// (0x00010c9b) address2_row_pane

0xbfcc,	// (0x00018a9b) postcard_message2_row_pane_g1

0xbfd4,	// (0x00018aa3) postcard_message2_row_pane_t1

0xbfcc,	// (0x00018a9b) address2_row_pane_g1

0xbfd4,	// (0x00018aa3) address2_row_pane_t1

0x20c3,	// (0x0000eb92) aid_size_cell_vorec

0x9a11,	// (0x000164e0) main_rss_pane

0xbfe2,	// (0x00018ab1) rss_list_single_pane_ParamLimits

0xbfe2,	// (0x00018ab1) rss_list_single_pane

0xbff0,	// (0x00018abf) rss_list_single_pane_t1

0xbff0,	// (0x00018abf) rss_list_single_pane_t2

0x0001,

0xf599,	// (0x0001c068) rss_list_single_pane_t

0x9a11,	// (0x000164e0) main_camera2_pane

0x9a11,	// (0x000164e0) main_video2_pane

0xcd9e,	// (0x0001986d) cams_zoom_pane_cp2_ParamLimits

0xcd9e,	// (0x0001986d) cams_zoom_pane_cp2

0xcd9e,	// (0x0001986d) image2_vga_pane_ParamLimits

0xcd9e,	// (0x0001986d) image2_vga_pane

0xcdac,	// (0x0001987b) main_camera2_pane_g1_ParamLimits

0xcdac,	// (0x0001987b) main_camera2_pane_g1

0xcdac,	// (0x0001987b) main_camera2_pane_g2_ParamLimits

0xcdac,	// (0x0001987b) main_camera2_pane_g2

0xcdac,	// (0x0001987b) main_camera2_pane_g3_ParamLimits

0xcdac,	// (0x0001987b) main_camera2_pane_g3

0xcdac,	// (0x0001987b) main_camera2_pane_g4_ParamLimits

0xcdac,	// (0x0001987b) main_camera2_pane_g4

0xcdac,	// (0x0001987b) main_camera2_pane_g5_ParamLimits

0xcdac,	// (0x0001987b) main_camera2_pane_g5

0xcdac,	// (0x0001987b) main_camera2_pane_g6_ParamLimits

0xcdac,	// (0x0001987b) main_camera2_pane_g6

0xcdac,	// (0x0001987b) main_camera2_pane_g7_ParamLimits

0xcdac,	// (0x0001987b) main_camera2_pane_g7

0xcdac,	// (0x0001987b) main_camera2_pane_g8_ParamLimits

0xcdac,	// (0x0001987b) main_camera2_pane_g8

0x0008,

0xf5b5,	// (0x0001c084) main_camera2_pane_g_ParamLimits

0xf5b5,	// (0x0001c084) main_camera2_pane_g

0x4370,	// (0x00010e3f) main_camera2_pane_t1_ParamLimits

0x4370,	// (0x00010e3f) main_camera2_pane_t1

0x4370,	// (0x00010e3f) main_camera2_pane_t2_ParamLimits

0x4370,	// (0x00010e3f) main_camera2_pane_t2

0x4370,	// (0x00010e3f) main_camera2_pane_t3_ParamLimits

0x4370,	// (0x00010e3f) main_camera2_pane_t3

0x4370,	// (0x00010e3f) main_camera2_pane_t4_ParamLimits

0x4370,	// (0x00010e3f) main_camera2_pane_t4

0x0006,

0xf5c8,	// (0x0001c097) main_camera2_pane_t_ParamLimits

0xf5c8,	// (0x0001c097) main_camera2_pane_t

0xcdba,	// (0x00019889) cams_zoom_pane_cp4_ParamLimits

0xcdba,	// (0x00019889) cams_zoom_pane_cp4

0xc0b6,	// (0x00018b85) image2_cif_pane_ParamLimits

0xc0b6,	// (0x00018b85) image2_cif_pane

0x95f2,	// (0x000160c1) image2_subqcif_pane_ParamLimits

0x95f2,	// (0x000160c1) image2_subqcif_pane

0x4384,	// (0x00010e53) main_video2_pane_g1_ParamLimits

0x4384,	// (0x00010e53) main_video2_pane_g1

0x4384,	// (0x00010e53) main_video2_pane_g2_ParamLimits

0x4384,	// (0x00010e53) main_video2_pane_g2

0x4384,	// (0x00010e53) main_video2_pane_g3_ParamLimits

0x4384,	// (0x00010e53) main_video2_pane_g3

0x4384,	// (0x00010e53) main_video2_pane_g4_ParamLimits

0x4384,	// (0x00010e53) main_video2_pane_g4

0x4384,	// (0x00010e53) main_video2_pane_g5_ParamLimits

0x4384,	// (0x00010e53) main_video2_pane_g5

0x4384,	// (0x00010e53) main_video2_pane_g6_ParamLimits

0x4384,	// (0x00010e53) main_video2_pane_g6

0x0005,

0xf5d7,	// (0x0001c0a6) main_video2_pane_g_ParamLimits

0xf5d7,	// (0x0001c0a6) main_video2_pane_g

0x4392,	// (0x00010e61) main_video2_pane_t1_ParamLimits

0x4392,	// (0x00010e61) main_video2_pane_t1

0x4392,	// (0x00010e61) main_video2_pane_t2_ParamLimits

0x4392,	// (0x00010e61) main_video2_pane_t2

0x4392,	// (0x00010e61) main_video2_pane_t3_ParamLimits

0x4392,	// (0x00010e61) main_video2_pane_t3

0x0002,

0xf5e4,	// (0x0001c0b3) main_video2_pane_t_ParamLimits

0xf5e4,	// (0x0001c0b3) main_video2_pane_t

0x3db5,	// (0x00010884) call_muted_g2

0x0001,

0xf58b,	// (0x0001c05a) call_muted_g

0x9a11,	// (0x000164e0) main_mup2_pane

0xabaf,	// (0x0001767e) main_mup2_pane_g1_ParamLimits

0xabaf,	// (0x0001767e) main_mup2_pane_g1

0xabaf,	// (0x0001767e) main_mup2_pane_g2_ParamLimits

0xabaf,	// (0x0001767e) main_mup2_pane_g2

0xa069,	// (0x00016b38) main_mup_pane_g13_cp1

0x959f,	// (0x0001606e) mup_volume_pane_cp1

0xabaf,	// (0x0001767e) main_mup2_pane_g4_ParamLimits

0xabaf,	// (0x0001767e) main_mup2_pane_g4

0xabaf,	// (0x0001767e) main_mup2_pane_g5_ParamLimits

0xabaf,	// (0x0001767e) main_mup2_pane_g5

0xabaf,	// (0x0001767e) main_mup2_pane_g6_ParamLimits

0xabaf,	// (0x0001767e) main_mup2_pane_g6

0xabaf,	// (0x0001767e) main_mup2_pane_g7_ParamLimits

0xabaf,	// (0x0001767e) main_mup2_pane_g7

0x0006,

0xf5eb,	// (0x0001c0ba) main_mup2_pane_g_ParamLimits

0xf5eb,	// (0x0001c0ba) main_mup2_pane_g

0xabbd,	// (0x0001768c) main_mup2_pane_t1_ParamLimits

0xabbd,	// (0x0001768c) main_mup2_pane_t1

0xabbd,	// (0x0001768c) main_mup2_pane_t2_ParamLimits

0xabbd,	// (0x0001768c) main_mup2_pane_t2

0xabbd,	// (0x0001768c) main_mup2_pane_t3_ParamLimits

0xabbd,	// (0x0001768c) main_mup2_pane_t3

0xabbd,	// (0x0001768c) main_mup2_pane_t4_ParamLimits

0xabbd,	// (0x0001768c) main_mup2_pane_t4

0xabbd,	// (0x0001768c) main_mup2_pane_t5_ParamLimits

0xabbd,	// (0x0001768c) main_mup2_pane_t5

0xabbd,	// (0x0001768c) main_mup2_pane_t6_ParamLimits

0xabbd,	// (0x0001768c) main_mup2_pane_t6

0x0005,

0xf5fa,	// (0x0001c0c9) main_mup2_pane_t_ParamLimits

0xf5fa,	// (0x0001c0c9) main_mup2_pane_t

0xabe5,	// (0x000176b4) mup2_visualizer_pane_ParamLimits

0xabe5,	// (0x000176b4) mup2_visualizer_pane

0xabe5,	// (0x000176b4) mup_progress_pane_cp_ParamLimits

0xabe5,	// (0x000176b4) mup_progress_pane_cp

0xc0c4,	// (0x00018b93) mup_volume_pane_cp_ParamLimits

0xc0c4,	// (0x00018b93) mup_volume_pane_cp

0x9ce6,	// (0x000167b5) mup2_visualizer_pane_g1_ParamLimits

0x9ce6,	// (0x000167b5) mup2_visualizer_pane_g1

0x9cf4,	// (0x000167c3) mup2_visualizer_pane_g2_ParamLimits

0x9cf4,	// (0x000167c3) mup2_visualizer_pane_g2

0x9cf4,	// (0x000167c3) mup2_visualizer_pane_g3_ParamLimits

0x9cf4,	// (0x000167c3) mup2_visualizer_pane_g3

0x0002,

0xf0be,	// (0x0001bb8d) mup2_visualizer_pane_g_ParamLimits

0xf0be,	// (0x0001bb8d) mup2_visualizer_pane_g

0xaecb,	// (0x0001799a) aid_size_cell_fmradio

0x3f11,	// (0x000109e0) aid_height_parent_landcape

0xa1fc,	// (0x00016ccb) wml_content_pane_cp

0xa204,	// (0x00016cd3) wml_tabs_pane

0xa20d,	// (0x00016cdc) popup_wml_miniature_window

0xa215,	// (0x00016ce4) scroll_pane_cp021

0xa229,	// (0x00016cf8) wml_content_pane_comp8

0x9a11,	// (0x000164e0) bg_popup_sub_pane_cp05

0xc0da,	// (0x00018ba9) popup_wml_miniature_window_g1

0xc0e2,	// (0x00018bb1) wml_miniature_view_pane

0x43a6,	// (0x00010e75) aid_size_wml_view

0x43ae,	// (0x00010e7d) wml_miniature_view_pane_g1

0x43b7,	// (0x00010e86) wml_miniature_view_pane_g2

0x43c0,	// (0x00010e8f) wml_miniature_view_pane_g3

0x43c8,	// (0x00010e97) wml_miniature_view_pane_g4

0x43d0,	// (0x00010e9f) wml_miniature_view_pane_g5

0x43d8,	// (0x00010ea7) wml_miniature_view_pane_g6

0x43e0,	// (0x00010eaf) wml_miniature_view_pane_g7

0x43e8,	// (0x00010eb7) wml_miniature_view_pane_g8

0x0007,

0xf607,	// (0x0001c0d6) wml_miniature_view_pane_g

0xc0ea,	// (0x00018bb9) background_graphic_ParamLimits

0xc0ea,	// (0x00018bb9) background_graphic

0xc0f6,	// (0x00018bc5) wml_tabs_2_pane

0xc0ff,	// (0x00018bce) wml_tabs_3_pane_ParamLimits

0xc0ff,	// (0x00018bce) wml_tabs_3_pane

0xc111,	// (0x00018be0) wml_tabs_4_pane_ParamLimits

0xc111,	// (0x00018be0) wml_tabs_4_pane

0xc127,	// (0x00018bf6) wml_tabs_5_pane_ParamLimits

0xc127,	// (0x00018bf6) wml_tabs_5_pane

0xc141,	// (0x00018c10) wml_tabs_pane_g2_ParamLimits

0xc141,	// (0x00018c10) wml_tabs_pane_g2

0xc156,	// (0x00018c25) wml_tabs_pane_g3_ParamLimits

0xc156,	// (0x00018c25) wml_tabs_pane_g3

0xc16b,	// (0x00018c3a) wml_tabs_2_active_pane_ParamLimits

0xc16b,	// (0x00018c3a) wml_tabs_2_active_pane

0xc16b,	// (0x00018c3a) wml_tabs_2_passive_pane_ParamLimits

0xc16b,	// (0x00018c3a) wml_tabs_2_passive_pane

0x43f0,	// (0x00010ebf) wml_tabs_3_active_pane_cp_ParamLimits

0x43f0,	// (0x00010ebf) wml_tabs_3_active_pane_cp

0x4401,	// (0x00010ed0) wml_tabs_3_passive_pane_ParamLimits

0x4401,	// (0x00010ed0) wml_tabs_3_passive_pane

0x4412,	// (0x00010ee1) wml_tabs_3_passive_pane_cp_ParamLimits

0x4412,	// (0x00010ee1) wml_tabs_3_passive_pane_cp

0x4423,	// (0x00010ef2) tabs_4_active_pane

0x442b,	// (0x00010efa) tabs_4_passive_pane

0x4433,	// (0x00010f02) tabs_4_passive_pane_cp

0x443b,	// (0x00010f0a) tabs_4_passive_pane_cp2

0x3cb3,	// (0x00010782) aid_height_text

0xabe5,	// (0x000176b4) mup_volume_cont_pane_ParamLimits

0xabe5,	// (0x000176b4) mup_volume_cont_pane

0x17b1,	// (0x0000e280) aid_size_cell_pinb

0x959f,	// (0x0001606e) aid_size_list_pinb

0xabe5,	// (0x000176b4) mup2_volume_cont_pane_ParamLimits

0xabe5,	// (0x000176b4) mup2_volume_cont_pane

0xc179,	// (0x00018c48) mup2_volume_cont_pane_g1_ParamLimits

0xc179,	// (0x00018c48) mup2_volume_cont_pane_g1

0x1526,	// (0x0000dff5) aid_size_cell_touch_ParamLimits

0x1526,	// (0x0000dff5) aid_size_cell_touch

0x1711,	// (0x0000e1e0) touch_pane_ParamLimits

0x1711,	// (0x0000e1e0) touch_pane

0x959f,	// (0x0001606e) main_rss2_pane

0xc198,	// (0x00018c67) listscroll_rss2_pane

0xc1a1,	// (0x00018c70) rss2_navigation_pane

0xc1a9,	// (0x00018c78) list_rss2_pane

0xa806,	// (0x000172d5) scroll_pane_cp22

0xc1b1,	// (0x00018c80) rss2_navigation_pane_g1

0xc1ba,	// (0x00018c89) rss2_navigation_pane_g2

0xc1c2,	// (0x00018c91) rss2_navigation_pane_g3

0x0002,

0xf618,	// (0x0001c0e7) rss2_navigation_pane_g

0xc1ca,	// (0x00018c99) rss2_navigation_pane_t1

0x4443,	// (0x00010f12) rss2_list_single_pane_ParamLimits

0x4443,	// (0x00010f12) rss2_list_single_pane

0xc1d8,	// (0x00018ca7) rss2_list_single_pane_t2

0xc1e6,	// (0x00018cb5) rss2_list_single_pane_t3_ParamLimits

0xc1e6,	// (0x00018cb5) rss2_list_single_pane_t3

0xc203,	// (0x00018cd2) rss2_list_single_pane_t4

0x3078,	// (0x0000fb47) smil_status_pane_g1

0x95f2,	// (0x000160c1) main_image2_pane_ParamLimits

0x95f2,	// (0x000160c1) main_image2_pane

0xcdac,	// (0x0001987b) main_camera2_pane_g9_ParamLimits

0xcdac,	// (0x0001987b) main_camera2_pane_g9

0x4370,	// (0x00010e3f) main_camera2_pane_t5_ParamLimits

0x4370,	// (0x00010e3f) main_camera2_pane_t5

0xc0a2,	// (0x00018b71) main_camera2_pane_t6_ParamLimits

0xc0a2,	// (0x00018b71) main_camera2_pane_t6

0x4457,	// (0x00010f26) main_image2_pane_g1_ParamLimits

0x4457,	// (0x00010f26) main_image2_pane_g1

0x3a03,	// (0x000104d2) smil2_video_pane_ParamLimits

0x3a03,	// (0x000104d2) smil2_video_pane

0x95b9,	// (0x00016088) aid_zoom_text_primary_cp

0x95ea,	// (0x000160b9) popup_preview_fixed_window

0xa156,	// (0x00016c25) im_reading_pane_g1

0x4362,	// (0x00010e31) cams2_bc_adjust_pane_cp_ParamLimits

0x4362,	// (0x00010e31) cams2_bc_adjust_pane_cp

0xabe5,	// (0x000176b4) cams2_bc_adjust_pane_ParamLimits

0xabe5,	// (0x000176b4) cams2_bc_adjust_pane

0xa069,	// (0x00016b38) cams2_bc_adjust_pane_g1

0x959f,	// (0x0001606e) cams2_slider_pane

0xa069,	// (0x00016b38) cams2_slider_pane_g1

0xa069,	// (0x00016b38) cams2_slider_pane_g2

0x0006,

0xf61f,	// (0x0001c0ee) cams2_slider_pane_g

0x17fa,	// (0x0000e2c9) calc_display_pane_ParamLimits

0x1816,	// (0x0000e2e5) calc_paper_pane_ParamLimits

0x1837,	// (0x0000e306) grid_calc_pane_ParamLimits

0xa7ce,	// (0x0001729d) popup_clock_digital_window_t1_ParamLimits

0xae68,	// (0x00017937) main_image_pane_t1

0x17dc,	// (0x0000e2ab) aid_size_cell_calc_ParamLimits

0x17dc,	// (0x0000e2ab) aid_size_cell_calc

0x3f41,	// (0x00010a10) popup_blid_sat_info2_window_ParamLimits

0x3f41,	// (0x00010a10) popup_blid_sat_info2_window

0xc211,	// (0x00018ce0) aid_size_cell_blid

0xc0b6,	// (0x00018b85) bg_popup_window_pane_cp07

0xc22e,	// (0x00018cfd) grid_popup_blid_pane

0xc236,	// (0x00018d05) heading_pane_cp05_ParamLimits

0xc236,	// (0x00018d05) heading_pane_cp05

0xc2fe,	// (0x00018dcd) cell_popup_blid_pane_ParamLimits

0xc2fe,	// (0x00018dcd) cell_popup_blid_pane

0xc31e,	// (0x00018ded) cell_popup_blid_pane_g1

0xc326,	// (0x00018df5) cell_popup_blid_pane_t1

0xabe5,	// (0x000176b4) mup2_indicator_pane_ParamLimits

0xabe5,	// (0x000176b4) mup2_indicator_pane

0x959f,	// (0x0001606e) mup2_visualizer_osc_pane

0xc0c4,	// (0x00018b93) mup2_visualizer_spec_pane_ParamLimits

0xc0c4,	// (0x00018b93) mup2_visualizer_spec_pane

0x959f,	// (0x0001606e) mup2_spec_half_pane

0x959f,	// (0x0001606e) mup2_spec_half_pane_cp

0xc334,	// (0x00018e03) mup2_spec_bar_pane_ParamLimits

0xc334,	// (0x00018e03) mup2_spec_bar_pane

0xa069,	// (0x00016b38) mup2_spec_bar_pane_g1

0xc353,	// (0x00018e22) mup2_spec_bar_pane_g2

0x0001,

0xf645,	// (0x0001c114) mup2_spec_bar_pane_g

0x959f,	// (0x0001606e) mup2_osc_middle_pane

0xa069,	// (0x00016b38) mup2_visualizer_osc_pane_g1

0x9620,	// (0x000160ef) popup_number_entry_window_t1_ParamLimits

0x9633,	// (0x00016102) popup_number_entry_window_t2_ParamLimits

0x9645,	// (0x00016114) popup_number_entry_window_t3_ParamLimits

0x1759,	// (0x0000e228) popup_number_entry_window_t5_ParamLimits

0x1759,	// (0x0000e228) popup_number_entry_window_t5

0xf05f,	// (0x0001bb2e) popup_number_entry_window_t_ParamLimits

0x9657,	// (0x00016126) text_title_cp2_ParamLimits

0xad42,	// (0x00017811) aid_hotspot_pointer_text2_pane

0xad68,	// (0x00017837) main_viewer_pane_g9_ParamLimits

0xad68,	// (0x00017837) main_viewer_pane_g9

0xa39f,	// (0x00016e6e) cale_month_pane_t1_ParamLimits

0xa3f3,	// (0x00016ec2) bg_cale_pane_ParamLimits

0xa40b,	// (0x00016eda) list_cale_pane_ParamLimits

0xa41c,	// (0x00016eeb) listscroll_cale_day_pane_t1

0xa42e,	// (0x00016efd) scroll_pane_cp09_ParamLimits

0x34af,	// (0x0000ff7e) main_mup_eq_pane_t1_ParamLimits

0x34af,	// (0x0000ff7e) main_mup_eq_pane_t1

0x34c7,	// (0x0000ff96) main_mup_eq_pane_t2_ParamLimits

0x34c7,	// (0x0000ff96) main_mup_eq_pane_t2

0x34dd,	// (0x0000ffac) main_mup_eq_pane_t3_ParamLimits

0x34dd,	// (0x0000ffac) main_mup_eq_pane_t3

0x34f3,	// (0x0000ffc2) main_mup_eq_pane_t4_ParamLimits

0x34f3,	// (0x0000ffc2) main_mup_eq_pane_t4

0x3509,	// (0x0000ffd8) main_mup_eq_pane_t5_ParamLimits

0x3509,	// (0x0000ffd8) main_mup_eq_pane_t5

0x351f,	// (0x0000ffee) main_mup_eq_pane_t6_ParamLimits

0x351f,	// (0x0000ffee) main_mup_eq_pane_t6

0x3531,	// (0x00010000) main_mup_eq_pane_t7_ParamLimits

0x3531,	// (0x00010000) main_mup_eq_pane_t7

0x3543,	// (0x00010012) main_mup_eq_pane_t8_ParamLimits

0x3543,	// (0x00010012) main_mup_eq_pane_t8

0x3555,	// (0x00010024) main_mup_eq_pane_t9_ParamLimits

0x3555,	// (0x00010024) main_mup_eq_pane_t9

0x356b,	// (0x0001003a) main_mup_eq_pane_t10_ParamLimits

0x356b,	// (0x0001003a) main_mup_eq_pane_t10

0x0009,

0xf3d5,	// (0x0001bea4) main_mup_eq_pane_t_ParamLimits

0xf3d5,	// (0x0001bea4) main_mup_eq_pane_t

0x35fe,	// (0x000100cd) mup_equalizer_pane_cp5_ParamLimits

0x3610,	// (0x000100df) mup_equalizer_pane_cp6_ParamLimits

0x3622,	// (0x000100f1) mup_equalizer_pane_cp7_ParamLimits

0x959f,	// (0x0001606e) main_gallery_pane

0xc01e,	// (0x00018aed) smil2_volume_pane

0xc026,	// (0x00018af5) smil_status_volume_pane_g1_ParamLimits

0xc039,	// (0x00018b08) smil_status_volume_pane_g2_ParamLimits

0xc04c,	// (0x00018b1b) smil_status_volume_pane_g3_ParamLimits

0xf59e,	// (0x0001c06d) smil_status_volume_pane_g_ParamLimits

0xc0b6,	// (0x00018b85) bg_popup_window_pane_cp07_ParamLimits

0xc219,	// (0x00018ce8) blid_firmament_pane

0x95f2,	// (0x000160c1) aid_size_cell_gallery_ParamLimits

0x95f2,	// (0x000160c1) aid_size_cell_gallery

0x446b,	// (0x00010f3a) grid_gallery_pane_ParamLimits

0x446b,	// (0x00010f3a) grid_gallery_pane

0x4481,	// (0x00010f50) cell_gallery_pane_ParamLimits

0x4481,	// (0x00010f50) cell_gallery_pane

0x95f2,	// (0x000160c1) bg_cell_gallery_focus_pane_ParamLimits

0x95f2,	// (0x000160c1) bg_cell_gallery_focus_pane

0x9ce6,	// (0x000167b5) cell_gallery_pane_g1_ParamLimits

0x9ce6,	// (0x000167b5) cell_gallery_pane_g1

0x9ce6,	// (0x000167b5) cell_gallery_pane_g2_ParamLimits

0x9ce6,	// (0x000167b5) cell_gallery_pane_g2

0x9ce6,	// (0x000167b5) cell_gallery_pane_g3_ParamLimits

0x9ce6,	// (0x000167b5) cell_gallery_pane_g3

0x9cf4,	// (0x000167c3) cell_gallery_pane_g4_ParamLimits

0x9cf4,	// (0x000167c3) cell_gallery_pane_g4

0x0003,

0xf64a,	// (0x0001c119) cell_gallery_pane_g_ParamLimits

0xf64a,	// (0x0001c119) cell_gallery_pane_g

0xc35d,	// (0x00018e2c) bg_cell_gallery_focus_pane_g1

0xc365,	// (0x00018e34) bg_cell_gallery_focus_pane_g2

0xc36d,	// (0x00018e3c) bg_cell_gallery_focus_pane_g3

0xc375,	// (0x00018e44) bg_cell_gallery_focus_pane_g4

0xc37d,	// (0x00018e4c) bg_cell_gallery_focus_pane_g5

0xc385,	// (0x00018e54) bg_cell_gallery_focus_pane_g6

0xc38d,	// (0x00018e5c) bg_cell_gallery_focus_pane_g7

0xc395,	// (0x00018e64) bg_cell_gallery_focus_pane_g8

0x0007,

0xf653,	// (0x0001c122) bg_cell_gallery_focus_pane_g

0xc39d,	// (0x00018e6c) aid_firma_cardinal

0xc3b1,	// (0x00018e80) blid_firmament_pane_t1

0xc3c8,	// (0x00018e97) blid_firmament_pane_t2

0xc3df,	// (0x00018eae) blid_firmament_pane_t3

0xc3f6,	// (0x00018ec5) blid_firmament_pane_t4

0x0003,

0xf664,	// (0x0001c133) blid_firmament_pane_t

0xc40d,	// (0x00018edc) blid_sat_info_pane

0xa069,	// (0x00016b38) blid_sat_info_pane_g1

0xa069,	// (0x00016b38) blid_sat_info_pane_g2

0x0001,

0xf3c9,	// (0x0001be98) blid_sat_info_pane_g

0xc41d,	// (0x00018eec) blid_sat_info_pane_t1

0xc42b,	// (0x00018efa) smil2_volume_content_pane

0xc434,	// (0x00018f03) smil2_volume_pane_g1

0xc43c,	// (0x00018f0b) smil2_volume_content_pane_g1

0xc445,	// (0x00018f14) smil2_volume_content_pane_g2

0xc44e,	// (0x00018f1d) smil2_volume_content_pane_g3

0xc457,	// (0x00018f26) smil2_volume_content_pane_g4

0xc460,	// (0x00018f2f) smil2_volume_content_pane_g5

0xc469,	// (0x00018f38) smil2_volume_content_pane_g6

0xc472,	// (0x00018f41) smil2_volume_content_pane_g7

0xc47b,	// (0x00018f4a) smil2_volume_content_pane_g8

0xc484,	// (0x00018f53) smil2_volume_content_pane_g9

0xc48d,	// (0x00018f5c) smil2_volume_content_pane_g10

0x0009,

0xf66d,	// (0x0001c13c) smil2_volume_content_pane_g

0x1d5a,	// (0x0000e829) cale_week_day_heading_pane_t1_ParamLimits

0x1d84,	// (0x0000e853) cale_week_day_heading_pane_t2_ParamLimits

0x1db3,	// (0x0000e882) cale_week_day_heading_pane_t3_ParamLimits

0x1de2,	// (0x0000e8b1) cale_week_day_heading_pane_t4_ParamLimits

0x1e11,	// (0x0000e8e0) cale_week_day_heading_pane_t5_ParamLimits

0x1e40,	// (0x0000e90f) cale_week_day_heading_pane_t6_ParamLimits

0x1e6f,	// (0x0000e93e) cale_week_day_heading_pane_t7_ParamLimits

0xf166,	// (0x0001bc35) cale_week_day_heading_pane_t_ParamLimits

0x9f9f,	// (0x00016a6e) bg_cale_side_pane_ParamLimits

0x1e99,	// (0x0000e968) cale_week_time_pane_t1_ParamLimits

0x1ed3,	// (0x0000e9a2) cale_week_time_pane_t2_ParamLimits

0x1f0d,	// (0x0000e9dc) cale_week_time_pane_t3_ParamLimits

0x1f47,	// (0x0000ea16) cale_week_time_pane_t4_ParamLimits

0x1f81,	// (0x0000ea50) cale_week_time_pane_t5_ParamLimits

0x1fbb,	// (0x0000ea8a) cale_week_time_pane_t6_ParamLimits

0x1ff5,	// (0x0000eac4) cale_week_time_pane_t7_ParamLimits

0x202f,	// (0x0000eafe) cale_week_time_pane_t8_ParamLimits

0xf175,	// (0x0001bc44) cale_week_time_pane_t_ParamLimits

0x2069,	// (0x0000eb38) cell_cale_week_pane_g2_ParamLimits

0x9f9f,	// (0x00016a6e) bg_cale_side_pane_cp01_ParamLimits

0x2ec7,	// (0x0000f996) cale_month_week_pane_t1_ParamLimits

0x2ee0,	// (0x0000f9af) cale_month_week_pane_t2_ParamLimits

0x2ef9,	// (0x0000f9c8) cale_month_week_pane_t3_ParamLimits

0x2f12,	// (0x0000f9e1) cale_month_week_pane_t4_ParamLimits

0x2f2b,	// (0x0000f9fa) cale_month_week_pane_t5_ParamLimits

0x2f44,	// (0x0000fa13) cale_month_week_pane_t6_ParamLimits

0xf243,	// (0x0001bd12) cale_month_week_pane_t_ParamLimits

0xa3b1,	// (0x00016e80) cell_cale_month_pane_g1_ParamLimits

0x959f,	// (0x0001606e) main_cale_event_viewer_pane

0x959f,	// (0x0001606e) listscroll_cale_event_viewer_pane

0xc496,	// (0x00018f65) list_cale_ev_pane

0xc49e,	// (0x00018f6d) scroll_pane_cp023

0x44a1,	// (0x00010f70) field_cale_ev_pane_ParamLimits

0x44a1,	// (0x00010f70) field_cale_ev_pane

0xc4aa,	// (0x00018f79) field_cale_ev_content_pane_ParamLimits

0xc4aa,	// (0x00018f79) field_cale_ev_content_pane

0xc4b6,	// (0x00018f85) field_cale_ev_pane_g1_ParamLimits

0xc4b6,	// (0x00018f85) field_cale_ev_pane_g1

0xc4c2,	// (0x00018f91) field_cale_ev_pane_g2_ParamLimits

0xc4c2,	// (0x00018f91) field_cale_ev_pane_g2

0xc4da,	// (0x00018fa9) field_cale_ev_pane_g3_ParamLimits

0xc4da,	// (0x00018fa9) field_cale_ev_pane_g3

0x0002,

0xf682,	// (0x0001c151) field_cale_ev_pane_g_ParamLimits

0xf682,	// (0x0001c151) field_cale_ev_pane_g

0xc4f2,	// (0x00018fc1) field_cale_ev_pane_t1_ParamLimits

0xc4f2,	// (0x00018fc1) field_cale_ev_pane_t1

0x1a5b,	// (0x0000e52a) field_cale_ev_content_pane_t1_ParamLimits

0x1a5b,	// (0x0000e52a) field_cale_ev_content_pane_t1

0xac90,	// (0x0001775f) bg_button_pane_cp01

0x1aa9,	// (0x0000e578) listscroll_cale_week_pane_ParamLimits

0x9f4a,	// (0x00016a19) popup_toolbar_window_cp01

0x9f70,	// (0x00016a3f) listscroll_cale_week_pane_t1_ParamLimits

0x1aa9,	// (0x0000e578) listscroll_cale_day_pane_ParamLimits

0x9f4a,	// (0x00016a19) popup_toolbar_window_cp02

0xa41c,	// (0x00016eeb) listscroll_cale_day_pane_t1_ParamLimits

0x1aa9,	// (0x0000e578) main_cale_month_pane_ParamLimits

0xbf9c,	// (0x00018a6b) popup_toolbar_window_cp03_ParamLimits

0xbf9c,	// (0x00018a6b) popup_toolbar_window_cp03

0x38dd,	// (0x000103ac) main_image_pane_g2_ParamLimits

0x38dd,	// (0x000103ac) main_image_pane_g2

0x38ee,	// (0x000103bd) main_image_pane_g3_ParamLimits

0x38ee,	// (0x000103bd) main_image_pane_g3

0x0002,

0xf467,	// (0x0001bf36) main_image_pane_g_ParamLimits

0xf467,	// (0x0001bf36) main_image_pane_g

0xae68,	// (0x00017937) main_image_pane_t1_ParamLimits

0x38ff,	// (0x000103ce) main_image_pane_t2_ParamLimits

0x38ff,	// (0x000103ce) main_image_pane_t2

0x3911,	// (0x000103e0) main_image_pane_t3_ParamLimits

0x3911,	// (0x000103e0) main_image_pane_t3

0x3939,	// (0x00010408) main_image_pane_t4_ParamLimits

0x3939,	// (0x00010408) main_image_pane_t4

0x0003,

0xf46e,	// (0x0001bf3d) main_image_pane_t_ParamLimits

0xf46e,	// (0x0001bf3d) main_image_pane_t

0x3959,	// (0x00010428) popup_image_details_window_cp01

0x3961,	// (0x00010430) popup_toobar_trans_pane_cp01_ParamLimits

0x3961,	// (0x00010430) popup_toobar_trans_pane_cp01

0x400a,	// (0x00010ad9) popup_image_details_window_ParamLimits

0x400a,	// (0x00010ad9) popup_image_details_window

0xbf71,	// (0x00018a40) popup_image_focus_window

0xcd9e,	// (0x0001986d) camera2_autofocus_pane_ParamLimits

0xcd9e,	// (0x0001986d) camera2_autofocus_pane

0x959f,	// (0x0001606e) bg_popup_sub_pane_cp06

0xc509,	// (0x00018fd8) popup_image_focus_window_g1

0xc511,	// (0x00018fe0) popup_image_focus_window_g2

0xc519,	// (0x00018fe8) popup_image_focus_window_g3

0xc521,	// (0x00018ff0) popup_image_focus_window_g4

0x0003,

0xf689,	// (0x0001c158) popup_image_focus_window_g

0xc529,	// (0x00018ff8) popup_image_focus_window_t1

0xc537,	// (0x00019006) popup_image_focus_window_t2

0xc546,	// (0x00019015) popup_image_focus_window_t3

0x0002,

0xf692,	// (0x0001c161) popup_image_focus_window_t

0x9ce6,	// (0x000167b5) camera2_autofocus_pane_g1

0x95f2,	// (0x000160c1) bg_tb_trans_pane_cp01

0xc554,	// (0x00019023) popup_image_details_window_g1

0xc567,	// (0x00019036) popup_image_details_window_g2

0x0002,

0xf6a4,	// (0x0001c173) popup_image_details_window_g

0xc590,	// (0x0001905f) popup_image_details_window_t1

0xc5a2,	// (0x00019071) popup_image_details_window_t2

0xc5bb,	// (0x0001908a) popup_image_details_window_t3

0xc5cf,	// (0x0001909e) popup_image_details_window_t4

0xc5ea,	// (0x000190b9) popup_image_details_window_t5

0x0004,

0xf6ab,	// (0x0001c17a) popup_image_details_window_t

0x9d5a,	// (0x00016829) bg_calc_paper_pane_ParamLimits

0x959f,	// (0x0001606e) grid_highlight_pane_cp013

0x9d72,	// (0x00016841) list_calc_pane_ParamLimits

0x9d84,	// (0x00016853) scroll_pane_cp024

0x9d8c,	// (0x0001685b) bg_calc_display_pane_ParamLimits

0x9d98,	// (0x00016867) calc_display_pane_t1_ParamLimits

0x9dad,	// (0x0001687c) calc_display_pane_t2_ParamLimits

0x9dc2,	// (0x00016891) calc_display_pane_t3_ParamLimits

0xf0e6,	// (0x0001bbb5) calc_display_pane_t_ParamLimits

0x19b6,	// (0x0000e485) cell_calc_pane_g2

0x0001,

0xf103,	// (0x0001bbd2) cell_calc_pane_g

0x19bf,	// (0x0000e48e) cell_calc_pane_t1

0x9e2f,	// (0x000168fe) grid_highlight_pane_cp02_ParamLimits

0x9e45,	// (0x00016914) toolbar_button_pane_cp01_ParamLimits

0x9e45,	// (0x00016914) toolbar_button_pane_cp01

0xaead,	// (0x0001797c) temp_image_control_pane_ParamLimits

0xaead,	// (0x0001797c) temp_image_control_pane

0x95f2,	// (0x000160c1) main_mp3_pane

0xc604,	// (0x000190d3) temp_image_control_pane_g1_ParamLimits

0xc604,	// (0x000190d3) temp_image_control_pane_g1

0xc612,	// (0x000190e1) temp_image_control_pane_g2_ParamLimits

0xc612,	// (0x000190e1) temp_image_control_pane_g2

0xc624,	// (0x000190f3) temp_image_control_pane_g3_ParamLimits

0xc624,	// (0x000190f3) temp_image_control_pane_g3

0x44bb,	// (0x00010f8a) temp_image_control_pane_g4_ParamLimits

0x44bb,	// (0x00010f8a) temp_image_control_pane_g4

0x0003,

0xf6b6,	// (0x0001c185) temp_image_control_pane_g_ParamLimits

0xf6b6,	// (0x0001c185) temp_image_control_pane_g

0xc604,	// (0x000190d3) main_mp3_pane_g1

0x44cc,	// (0x00010f9b) main_mp3_pane_g2

0x0007,

0xf6bf,	// (0x0001c18e) main_mp3_pane_g

0xc659,	// (0x00019128) main_mp3_pane_t1

0x9cf4,	// (0x000167c3) main_camera_pane_g8_ParamLimits

0x9cf4,	// (0x000167c3) main_camera_pane_g8

0x21f8,	// (0x0000ecc7) main_video_pane_g7_ParamLimits

0x21f8,	// (0x0000ecc7) main_video_pane_g7

0xabd1,	// (0x000176a0) main_camera2_pane_t7_ParamLimits

0xabd1,	// (0x000176a0) main_camera2_pane_t7

0xa1bc,	// (0x00016c8b) scroll_pane_cp025_ParamLimits

0xa1bc,	// (0x00016c8b) scroll_pane_cp025

0xa1d0,	// (0x00016c9f) scroll_pane_cp026_ParamLimits

0xa1d0,	// (0x00016c9f) scroll_pane_cp026

0xa1df,	// (0x00016cae) wml_content_pane_ParamLimits

0x959f,	// (0x0001606e) main_touch_calib_pane

0x458e,	// (0x0001105d) main_touch_calib_pane_g1

0x45a0,	// (0x0001106f) main_touch_calib_pane_g2

0x45b2,	// (0x00011081) main_touch_calib_pane_g3

0x45c4,	// (0x00011093) main_touch_calib_pane_g4

0x0003,

0xf6dd,	// (0x0001c1ac) main_touch_calib_pane_g

0x45d6,	// (0x000110a5) main_touch_calib_pane_t1

0x45ee,	// (0x000110bd) main_touch_calib_pane_t2

0x0004,

0xf6e6,	// (0x0001c1b5) main_touch_calib_pane_t

0xa9b9,	// (0x00017488) mup_progress_pane_cp02

0xa9ee,	// (0x000174bd) navi_pane_g1

0xaa79,	// (0x00017548) navi_pane_mp_t3

0x95f2,	// (0x000160c1) main_mp3_pane_ParamLimits

0x4163,	// (0x00010c32) navi_pane_ParamLimits

0xc604,	// (0x000190d3) main_mp3_pane_g1_ParamLimits

0x44cc,	// (0x00010f9b) main_mp3_pane_g2_ParamLimits

0x44d8,	// (0x00010fa7) main_mp3_pane_g3_ParamLimits

0x44d8,	// (0x00010fa7) main_mp3_pane_g3

0x44e4,	// (0x00010fb3) main_mp3_pane_g4_ParamLimits

0x44e4,	// (0x00010fb3) main_mp3_pane_g4

0x9ce6,	// (0x000167b5) main_mp3_pane_g5_ParamLimits

0x9ce6,	// (0x000167b5) main_mp3_pane_g5

0xc634,	// (0x00019103) main_mp3_pane_g6_ParamLimits

0xc634,	// (0x00019103) main_mp3_pane_g6

0xc641,	// (0x00019110) main_mp3_pane_g7_ParamLimits

0xc641,	// (0x00019110) main_mp3_pane_g7

0xc64d,	// (0x0001911c) main_mp3_pane_g8_ParamLimits

0xc64d,	// (0x0001911c) main_mp3_pane_g8

0xf6bf,	// (0x0001c18e) main_mp3_pane_g_ParamLimits

0x44f0,	// (0x00010fbf) main_mp3_pane_t2

0x44fe,	// (0x00010fcd) main_mp3_pane_t3

0xc667,	// (0x00019136) main_mp3_pane_t4

0xc675,	// (0x00019144) main_mp3_pane_t5

0x0005,

0xf6d0,	// (0x0001c19f) main_mp3_pane_t

0xc683,	// (0x00019152) mup_progress_pane_cp01

0x95b9,	// (0x00016088) aid_zoom_text_secondary2

0xc496,	// (0x00018f65) list_cale_ev2_pane

0xc49e,	// (0x00018f6d) scroll_pane_cp023_ParamLimits

0x463c,	// (0x0001110b) field_cale_ev2_pane_ParamLimits

0x463c,	// (0x0001110b) field_cale_ev2_pane

0xc68b,	// (0x0001915a) field_cale_ev2_pane_g1_ParamLimits

0xc68b,	// (0x0001915a) field_cale_ev2_pane_g1

0xc697,	// (0x00019166) field_cale_ev2_pane_g2_ParamLimits

0xc697,	// (0x00019166) field_cale_ev2_pane_g2

0xc6af,	// (0x0001917e) field_cale_ev2_pane_g3_ParamLimits

0xc6af,	// (0x0001917e) field_cale_ev2_pane_g3

0x0003,

0xf6f1,	// (0x0001c1c0) field_cale_ev2_pane_g_ParamLimits

0xf6f1,	// (0x0001c1c0) field_cale_ev2_pane_g

0xc6d3,	// (0x000191a2) field_cale_ev2_pane_t1_ParamLimits

0xc6d3,	// (0x000191a2) field_cale_ev2_pane_t1

0xc6ea,	// (0x000191b9) field_cale_ev2_pane_t2_ParamLimits

0xc6ea,	// (0x000191b9) field_cale_ev2_pane_t2

0x0001,

0xf6fa,	// (0x0001c1c9) field_cale_ev2_pane_t_ParamLimits

0xf6fa,	// (0x0001c1c9) field_cale_ev2_pane_t

0x3798,	// (0x00010267) main_postcard_pane_g5_ParamLimits

0x3798,	// (0x00010267) main_postcard_pane_g5

0x37ac,	// (0x0001027b) main_postcard_pane_g6_ParamLimits

0x37ac,	// (0x0001027b) main_postcard_pane_g6

0x95f2,	// (0x000160c1) camera2_autofocus_pane_cp_ParamLimits

0x95f2,	// (0x000160c1) camera2_autofocus_pane_cp

0x95f2,	// (0x000160c1) main_mup3_pane

0x4692,	// (0x00011161) main_mup3_pane_g1_ParamLimits

0x4692,	// (0x00011161) main_mup3_pane_g1

0x46b4,	// (0x00011183) main_mup3_pane_g2_ParamLimits

0x46b4,	// (0x00011183) main_mup3_pane_g2

0x4727,	// (0x000111f6) main_mup3_pane_g3_ParamLimits

0x4727,	// (0x000111f6) main_mup3_pane_g3

0x4765,	// (0x00011234) main_mup3_pane_g4_ParamLimits

0x4765,	// (0x00011234) main_mup3_pane_g4

0x47a3,	// (0x00011272) main_mup3_pane_g5_ParamLimits

0x47a3,	// (0x00011272) main_mup3_pane_g5

0x47e1,	// (0x000112b0) main_mup3_pane_g6_ParamLimits

0x47e1,	// (0x000112b0) main_mup3_pane_g6

0x9cf4,	// (0x000167c3) main_mup3_pane_g7_ParamLimits

0x9cf4,	// (0x000167c3) main_mup3_pane_g7

0x0007,

0xf70a,	// (0x0001c1d9) main_mup3_pane_g_ParamLimits

0xf70a,	// (0x0001c1d9) main_mup3_pane_g

0x4857,	// (0x00011326) main_mup3_pane_t1_ParamLimits

0x4857,	// (0x00011326) main_mup3_pane_t1

0x48bd,	// (0x0001138c) main_mup3_pane_t2_ParamLimits

0x48bd,	// (0x0001138c) main_mup3_pane_t2

0x4983,	// (0x00011452) main_mup3_pane_t4_ParamLimits

0x4983,	// (0x00011452) main_mup3_pane_t4

0x49d1,	// (0x000114a0) main_mup3_pane_t5_ParamLimits

0x49d1,	// (0x000114a0) main_mup3_pane_t5

0x4a7f,	// (0x0001154e) main_mup3_pane_t6_ParamLimits

0x4a7f,	// (0x0001154e) main_mup3_pane_t6

0x0005,

0xf71b,	// (0x0001c1ea) main_mup3_pane_t_ParamLimits

0xf71b,	// (0x0001c1ea) main_mup3_pane_t

0x4b33,	// (0x00011602) mup3_progress_pane_ParamLimits

0x4b33,	// (0x00011602) mup3_progress_pane

0x4baf,	// (0x0001167e) popup_mup3_control_window_ParamLimits

0x4baf,	// (0x0001167e) popup_mup3_control_window

0xc6ff,	// (0x000191ce) popup_mup3_text_window

0x4bdd,	// (0x000116ac) mup3_progress_pane_t1

0x4bfb,	// (0x000116ca) mup3_progress_pane_t2

0xc707,	// (0x000191d6) mup3_progress_pane_t3

0x0002,

0xf728,	// (0x0001c1f7) mup3_progress_pane_t

0xc724,	// (0x000191f3) mup_progress_pane_cp03

0x959f,	// (0x0001606e) bg_tb_trans_pane_cp04

0x4c19,	// (0x000116e8) mup3_volume_pane

0x4c21,	// (0x000116f0) popup_mup3_control_window_g1

0x4c2a,	// (0x000116f9) mup3_volume_pane_g1

0x4c33,	// (0x00011702) mup3_volume_pane_g2

0x4c3c,	// (0x0001170b) mup3_volume_pane_g3

0x0002,

0xf72f,	// (0x0001c1fe) mup3_volume_pane_g

0x959f,	// (0x0001606e) bg_tb_trans_pane_cp03

0xc734,	// (0x00019203) popup_mup3_text_window_g1

0xc73c,	// (0x0001920b) popup_mup3_text_window_t1

0x9e10,	// (0x000168df) list_calc_item_pane_g1_ParamLimits

0xc18f,	// (0x00018c5e) mup_volume_pane_cp_g1

0x4606,	// (0x000110d5) main_touch_calib_pane_t3

0x4618,	// (0x000110e7) main_touch_calib_pane_t4

0x462a,	// (0x000110f9) main_touch_calib_pane_t5

0x95a9,	// (0x00016078) aid_cell_size_toolbar2

0x95b1,	// (0x00016080) aid_popup3_width_pane

0x95b9,	// (0x00016088) aid_zoom_text_msg_primary

0xa023,	// (0x00016af2) vorec_t7

0x9dd4,	// (0x000168a3) bg_calc_paper_pane_g1_ParamLimits

0x9de0,	// (0x000168af) bg_calc_paper_pane_g2_ParamLimits

0x9dec,	// (0x000168bb) bg_calc_paper_pane_g3_ParamLimits

0x9df8,	// (0x000168c7) bg_calc_paper_pane_g4_ParamLimits

0x9e04,	// (0x000168d3) bg_calc_paper_pane_g5_ParamLimits

0x1950,	// (0x0000e41f) bg_calc_paper_pane_g6_ParamLimits

0x195f,	// (0x0000e42e) bg_calc_paper_pane_g7_ParamLimits

0x196e,	// (0x0000e43d) bg_calc_paper_pane_g8_ParamLimits

0xf0ed,	// (0x0001bbbc) bg_calc_paper_pane_g_ParamLimits

0x197d,	// (0x0000e44c) calc_bg_paper_pane_g9_ParamLimits

0x95f2,	// (0x000160c1) image_qvga_pane_ParamLimits

0x95f2,	// (0x000160c1) image_qvga_pane

0x9c6c,	// (0x0001673b) bg_popup_sub_pane_cp04_ParamLimits

0xade4,	// (0x000178b3) popup_mup_playback_window_g1_ParamLimits

0xadf0,	// (0x000178bf) popup_mup_playback_window_t1_ParamLimits

0xae05,	// (0x000178d4) popup_mup_playback_window_t2_ParamLimits

0xf462,	// (0x0001bf31) popup_mup_playback_window_t_ParamLimits

0x9cf4,	// (0x000167c3) main_mup2_pane_g3_ParamLimits

0x9cf4,	// (0x000167c3) main_mup2_pane_g3

0x23d6,	// (0x0000eea5) popup_toolbar_window_cp04

0xb1e6,	// (0x00017cb5) popup_call2_audio_second_window_g3_ParamLimits

0xb1e6,	// (0x00017cb5) popup_call2_audio_second_window_g3

0xb5fe,	// (0x000180cd) popup_call2_audio_first_window_g4_ParamLimits

0xb5fe,	// (0x000180cd) popup_call2_audio_first_window_g4

0xbc25,	// (0x000186f4) popup_call2_audio_in_window_g4_ParamLimits

0xbc25,	// (0x000186f4) popup_call2_audio_in_window_g4

0x38bf,	// (0x0001038e) aid_area_sk_bg_cut_ParamLimits

0x38bf,	// (0x0001038e) aid_area_sk_bg_cut

0xae1a,	// (0x000178e9) aid_area_sk_bg_cut_2_ParamLimits

0xae1a,	// (0x000178e9) aid_area_sk_bg_cut_2

0x959f,	// (0x0001606e) aid_placing_details_win

0x959f,	// (0x0001606e) aid_placing_details_win_2

0x9ce6,	// (0x000167b5) camera2_autofocus_pane_g1_ParamLimits

0x16b2,	// (0x0000e181) popup_fixed_preview_cale_window_ParamLimits

0x16b2,	// (0x0000e181) popup_fixed_preview_cale_window

0xaaf8,	// (0x000175c7) navi_slider_pane_g3

0xab01,	// (0x000175d0) navi_slider_pane_g4

0xab0a,	// (0x000175d9) navi_slider_pane_g5

0xaaf8,	// (0x000175c7) navi_slider_pane_g6

0xab13,	// (0x000175e2) navi_slider_pane_g7

0xac55,	// (0x00017724) mup_scale_pane_g3

0xac5e,	// (0x0001772d) mup_scale_pane_g4

0xac67,	// (0x00017736) mup_scale_pane_g5

0x3636,	// (0x00010105) mup_scale_pane_g6

0x363f,	// (0x0001010e) mup_scale_pane_g7

0xa069,	// (0x00016b38) cams2_slider_pane_g3

0xa069,	// (0x00016b38) cams2_slider_pane_g4

0xa069,	// (0x00016b38) cams2_slider_pane_g5

0xa069,	// (0x00016b38) cams2_slider_pane_g6

0xa069,	// (0x00016b38) cams2_slider_pane_g7

0xa069,	// (0x00016b38) camera2_autofocus_pane_cp_g1

0xbf4b,	// (0x00018a1a) bg_popup_preview_window_pane_cp02_ParamLimits

0xbf4b,	// (0x00018a1a) bg_popup_preview_window_pane_cp02

0xc74a,	// (0x00019219) list_fp_cale_pane_ParamLimits

0xc74a,	// (0x00019219) list_fp_cale_pane

0xc756,	// (0x00019225) popup_fixed_preview_cale_window_t1_ParamLimits

0xc756,	// (0x00019225) popup_fixed_preview_cale_window_t1

0x4c45,	// (0x00011714) popup_fixed_preview_cale_window_t2_ParamLimits

0x4c45,	// (0x00011714) popup_fixed_preview_cale_window_t2

0x4c5a,	// (0x00011729) popup_fixed_preview_cale_window_t3_ParamLimits

0x4c5a,	// (0x00011729) popup_fixed_preview_cale_window_t3

0x0002,

0xf736,	// (0x0001c205) popup_fixed_preview_cale_window_t_ParamLimits

0xf736,	// (0x0001c205) popup_fixed_preview_cale_window_t

0x4c6f,	// (0x0001173e) list_single_fp_cale_pane_ParamLimits

0x4c6f,	// (0x0001173e) list_single_fp_cale_pane

0xc774,	// (0x00019243) list_single_fp_cale_pane_g1_ParamLimits

0xc774,	// (0x00019243) list_single_fp_cale_pane_g1

0xc780,	// (0x0001924f) list_single_fp_cale_pane_g2_ParamLimits

0xc780,	// (0x0001924f) list_single_fp_cale_pane_g2

0x0002,

0xf73d,	// (0x0001c20c) list_single_fp_cale_pane_g_ParamLimits

0xf73d,	// (0x0001c20c) list_single_fp_cale_pane_g

0xc799,	// (0x00019268) list_single_fp_cale_pane_t1_ParamLimits

0xc799,	// (0x00019268) list_single_fp_cale_pane_t1

0xc7ab,	// (0x0001927a) list_single_fp_cale_pane_t2_ParamLimits

0xc7ab,	// (0x0001927a) list_single_fp_cale_pane_t2

0x0001,

0xf744,	// (0x0001c213) list_single_fp_cale_pane_t_ParamLimits

0xf744,	// (0x0001c213) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x959f,	// (0x0001606e) main_dialer_pane

0x4c83,	// (0x00011752) aid_cell_size_keypad

0x959f,	// (0x0001606e) dialer_ne_pane

0x959f,	// (0x0001606e) grid_dialer_command_1_pane

0x959f,	// (0x0001606e) grid_dialer_command_2_pane

0x959f,	// (0x0001606e) grid_dialer_keypad_pane

0x4c8d,	// (0x0001175c) bg_popup_call_pane_cp06_ParamLimits

0x4c8d,	// (0x0001175c) bg_popup_call_pane_cp06

0x4c8d,	// (0x0001175c) dialer_ne_clear_pane_ParamLimits

0x4c8d,	// (0x0001175c) dialer_ne_clear_pane

0xa069,	// (0x00016b38) dialer_ne_pane_g1

0xabd1,	// (0x000176a0) dialer_ne_pane_t1_ParamLimits

0xabd1,	// (0x000176a0) dialer_ne_pane_t1

0x4c9b,	// (0x0001176a) dialer_ne_pane_t2_ParamLimits

0x4c9b,	// (0x0001176a) dialer_ne_pane_t2

0x4cc3,	// (0x00011792) dialer_ne_pane_t3_ParamLimits

0x4cc3,	// (0x00011792) dialer_ne_pane_t3

0x0002,

0xf749,	// (0x0001c218) dialer_ne_pane_t_ParamLimits

0xf749,	// (0x0001c218) dialer_ne_pane_t

0x4cc3,	// (0x00011792) dialer_ne_pane_t3_copy1_ParamLimits

0x4cc3,	// (0x00011792) dialer_ne_pane_t3_copy1

0x4cf0,	// (0x000117bf) cell_dialer_keypad_pane_ParamLimits

0x4cf0,	// (0x000117bf) cell_dialer_keypad_pane

0x4d05,	// (0x000117d4) cell_dialer_command_1_pane_ParamLimits

0x4d05,	// (0x000117d4) cell_dialer_command_1_pane

0x4d16,	// (0x000117e5) cell_dialer_command_2_pane_ParamLimits

0x4d16,	// (0x000117e5) cell_dialer_command_2_pane

0x95f2,	// (0x000160c1) bg_button_pane_cp02_ParamLimits

0x95f2,	// (0x000160c1) bg_button_pane_cp02

0x9ce6,	// (0x000167b5) cell_dialer_keypad_pane_g1_ParamLimits

0x9ce6,	// (0x000167b5) cell_dialer_keypad_pane_g1

0x95f2,	// (0x000160c1) bg_button_pane_cp03_ParamLimits

0x95f2,	// (0x000160c1) bg_button_pane_cp03

0x9ce6,	// (0x000167b5) cell_dialer_command_1_pane_g1_ParamLimits

0x9ce6,	// (0x000167b5) cell_dialer_command_1_pane_g1

0x959f,	// (0x0001606e) bg_button_pane_cp04

0xa069,	// (0x00016b38) cell_dialer_command_2_pane_g1

0x959f,	// (0x0001606e) bg_button_pane_cp06

0xa069,	// (0x00016b38) dialer_ne_clear_pane_g1

0xa9fa,	// (0x000174c9) navi_pane_g2

0x343c,	// (0x0000ff0b) navi_pane_g3

0x0002,

0xf365,	// (0x0001be34) navi_pane_g

0xaa87,	// (0x00017556) navi_pane_mv_g2

0xaaae,	// (0x0001757d) navi_pane_mv_g5

0x3459,	// (0x0000ff28) navi_pane_mv_t1

0x9d8c,	// (0x0001685b) main_clock2_pane

0x4d62,	// (0x00011831) main_clock2_list_pane_ParamLimits

0x4d62,	// (0x00011831) main_clock2_list_pane

0x4d94,	// (0x00011863) main_clock2_pane_t1_ParamLimits

0x4d94,	// (0x00011863) main_clock2_pane_t1

0x4dce,	// (0x0001189d) main_clock2_pane_t2_ParamLimits

0x4dce,	// (0x0001189d) main_clock2_pane_t2

0x0004,

0xf755,	// (0x0001c224) main_clock2_pane_t_ParamLimits

0xf755,	// (0x0001c224) main_clock2_pane_t

0x4e62,	// (0x00011931) popup_clock_analogue_window_cp03_ParamLimits

0x4e62,	// (0x00011931) popup_clock_analogue_window_cp03

0x4e87,	// (0x00011956) popup_clock_digital_window_cp02_ParamLimits

0x4e87,	// (0x00011956) popup_clock_digital_window_cp02

0x4ef8,	// (0x000119c7) main_clock2_list_single_pane_ParamLimits

0x4ef8,	// (0x000119c7) main_clock2_list_single_pane

0x9ff1,	// (0x00016ac0) list_highlight_pane_cp05

0xc80e,	// (0x000192dd) main_clock2_list_single_pane_t1

0x23d6,	// (0x0000eea5) popup_toolbar_window_cp04_ParamLimits

0x9cf4,	// (0x000167c3) camera2_autofocus_pane_g2_ParamLimits

0x9cf4,	// (0x000167c3) camera2_autofocus_pane_g2

0x9cf4,	// (0x000167c3) camera2_autofocus_pane_g3_ParamLimits

0x9cf4,	// (0x000167c3) camera2_autofocus_pane_g3

0x9cf4,	// (0x000167c3) camera2_autofocus_pane_g4_ParamLimits

0x9cf4,	// (0x000167c3) camera2_autofocus_pane_g4

0x9cf4,	// (0x000167c3) camera2_autofocus_pane_g5_ParamLimits

0x9cf4,	// (0x000167c3) camera2_autofocus_pane_g5

0x0004,

0xf699,	// (0x0001c168) camera2_autofocus_pane_g_ParamLimits

0xf699,	// (0x0001c168) camera2_autofocus_pane_g

0x4654,	// (0x00011123) camera2_autofocus_pane_cp_g2

0x465c,	// (0x0001112b) camera2_autofocus_pane_cp_g3

0x4664,	// (0x00011133) camera2_autofocus_pane_cp_g4

0x466c,	// (0x0001113b) camera2_autofocus_pane_cp_g5

0x0004,

0xf6ff,	// (0x0001c1ce) camera2_autofocus_pane_cp_g

0x959f,	// (0x0001606e) popup_dialer_spcha_window

0x959f,	// (0x0001606e) bg_popup_sub_pane_cp07

0x959f,	// (0x0001606e) list_spcha_pane

0xc81c,	// (0x000192eb) list_single_spcha_pane_ParamLimits

0xc81c,	// (0x000192eb) list_single_spcha_pane

0x959f,	// (0x0001606e) list_highlight_pane_cp06

0xbef3,	// (0x000189c2) list_single_spcha_pane_t1

0xb9cf,	// (0x0001849e) popup_call2_audio_out_window_g4_ParamLimits

0xb9cf,	// (0x0001849e) popup_call2_audio_out_window_g4

0x959f,	// (0x0001606e) main_imed2_pane

0xbf79,	// (0x00018a48) popup_imed_adjust2_window

0x4020,	// (0x00010aef) popup_imed_trans_window_ParamLimits

0x4020,	// (0x00010aef) popup_imed_trans_window

0xc262,	// (0x00018d31) popup_blid_sat_info2_window_t1

0xc270,	// (0x00018d3f) popup_blid_sat_info2_window_t2

0x000a,

0xf62e,	// (0x0001c0fd) popup_blid_sat_info2_window_t

0x4fa2,	// (0x00011a71) aid_size_cell_colour_35

0x4fc2,	// (0x00011a91) aid_size_cell_colour_112

0x4fe2,	// (0x00011ab1) aid_size_cell_effect

0xabe5,	// (0x000176b4) bg_tb_trans_pane_cp02

0xa525,	// (0x00016ff4) heading_imed_pane

0x5002,	// (0x00011ad1) listscroll_imed_pane

0xc82e,	// (0x000192fd) heading_imed_pane_g1

0xc836,	// (0x00019305) heading_imed_pane_t1

0xc844,	// (0x00019313) grid_imed_colour_35_pane_ParamLimits

0xc844,	// (0x00019313) grid_imed_colour_35_pane

0x500e,	// (0x00011add) grid_imed_effect_pane

0xc857,	// (0x00019326) list_imed_aspect_pane

0x5021,	// (0x00011af0) scroll_pane_cp027_ParamLimits

0x5021,	// (0x00011af0) scroll_pane_cp027

0x502d,	// (0x00011afc) cell_imed_effect_pane_ParamLimits

0x502d,	// (0x00011afc) cell_imed_effect_pane

0xc85f,	// (0x0001932e) cell_imed_colour_pane_ParamLimits

0xc85f,	// (0x0001932e) cell_imed_colour_pane

0xc899,	// (0x00019368) cell_imed_colour_pane_g1_ParamLimits

0xc899,	// (0x00019368) cell_imed_colour_pane_g1

0xc8aa,	// (0x00019379) hgihlgiht_grid_pane_cp016_ParamLimits

0xc8aa,	// (0x00019379) hgihlgiht_grid_pane_cp016

0x5052,	// (0x00011b21) cell_imed_effect_pane_g1

0x505a,	// (0x00011b29) grid_highlight_pane_cp017

0xc8bb,	// (0x0001938a) list_imed_single_pane_ParamLimits

0xc8bb,	// (0x0001938a) list_imed_single_pane

0x959f,	// (0x0001606e) list_highlight_pane_cp07

0xc8ce,	// (0x0001939d) list_imed_aspect_pane_comp1_t1

0xabe5,	// (0x000176b4) bg_tb_trans_pane_cp05

0xc8ee,	// (0x000193bd) popup_imed_adjust2_window_g1

0xc915,	// (0x000193e4) popup_imed_adjust2_window_t1

0xc92d,	// (0x000193fc) slider_imed_adjust_pane

0xc941,	// (0x00019410) slider_imed_adjust_pane_g1

0xc951,	// (0x00019420) slider_imed_adjust_pane_g2

0xc961,	// (0x00019430) slider_imed_adjust_pane_g3

0xc972,	// (0x00019441) slider_imed_adjust_pane_g4

0x0003,

0xf772,	// (0x0001c241) slider_imed_adjust_pane_g

0x5063,	// (0x00011b32) aid_size_cell_clipart2

0x506f,	// (0x00011b3e) grid_imed_clipart_pane

0xc983,	// (0x00019452) scroll_pane_cp031

0x5079,	// (0x00011b48) cell_imed_clipart_pane_ParamLimits

0x5079,	// (0x00011b48) cell_imed_clipart_pane

0x5091,	// (0x00011b60) cell_imed_clipart_pane_g1

0x959f,	// (0x0001606e) grid_highlight_pane_cp014

0x4d75,	// (0x00011844) main_clock2_pane_g1_ParamLimits

0x4d75,	// (0x00011844) main_clock2_pane_g1

0x4ea3,	// (0x00011972) aid_call2_pane_cp10

0x4eb5,	// (0x00011984) aid_call_pane_cp10

0xa989,	// (0x00017458) popup_clock_analogue_window_cp10_g1

0xa989,	// (0x00017458) popup_clock_analogue_window_cp10_g2

0x4ec7,	// (0x00011996) popup_clock_analogue_window_cp10_g3

0x4ec7,	// (0x00011996) popup_clock_analogue_window_cp10_g4

0xa989,	// (0x00017458) popup_clock_analogue_window_cp10_g5

0x0004,

0xf760,	// (0x0001c22f) popup_clock_analogue_window_cp10_g

0x4ed9,	// (0x000119a8) popup_clock_analogue_window_cp10_t1

0x4f0a,	// (0x000119d9) clock_digital_number_pane_cp10_ParamLimits

0x4f0a,	// (0x000119d9) clock_digital_number_pane_cp10

0x4f22,	// (0x000119f1) clock_digital_number_pane_cp11_ParamLimits

0x4f22,	// (0x000119f1) clock_digital_number_pane_cp11

0x4f3a,	// (0x00011a09) clock_digital_number_pane_cp12_ParamLimits

0x4f3a,	// (0x00011a09) clock_digital_number_pane_cp12

0x4f52,	// (0x00011a21) clock_digital_number_pane_cp13_ParamLimits

0x4f52,	// (0x00011a21) clock_digital_number_pane_cp13

0x4f6a,	// (0x00011a39) clock_digital_separator_pane_cp10_ParamLimits

0x4f6a,	// (0x00011a39) clock_digital_separator_pane_cp10

0x4f82,	// (0x00011a51) popup_clock_digital_window_cp02_t1_ParamLimits

0x4f82,	// (0x00011a51) popup_clock_digital_window_cp02_t1

0x9c64,	// (0x00016733) clock_digital_number_pane_cp10_g1

0x9c64,	// (0x00016733) clock_digital_number_pane_cp10_g2

0x0001,

0xf77b,	// (0x0001c24a) clock_digital_number_pane_cp10_g

0x9c64,	// (0x00016733) clock_digital_separator_pane_cp10_g1

0x9c64,	// (0x00016733) clock_digital_separator_pane_g2_cp10

0xaab6,	// (0x00017585) navi_pane_vded_g4

0xaabf,	// (0x0001758e) navi_pane_vded_g5

0xaac8,	// (0x00017597) navi_pane_vded_t1

0x959f,	// (0x0001606e) main_vded_pane

0x509a,	// (0x00011b69) main_vded_pane_g1

0x50a4,	// (0x00011b73) main_vded_pane_g2

0x50ac,	// (0x00011b7b) main_vded_pane_g3

0x0002,

0xf780,	// (0x0001c24f) main_vded_pane_g

0x50b4,	// (0x00011b83) main_vded_pane_t1

0x50c2,	// (0x00011b91) main_vded_pane_t2

0x0001,

0xf787,	// (0x0001c256) main_vded_pane_t

0x50d0,	// (0x00011b9f) vded_slider_pane

0x50d8,	// (0x00011ba7) vded_video_pane

0xc98b,	// (0x0001945a) vded_video_pane_g1

0x50e0,	// (0x00011baf) vded_video_pane_g2

0xa069,	// (0x00016b38) vded_video_pane_g3

0x0002,

0xf78c,	// (0x0001c25b) vded_video_pane_g

0xc995,	// (0x00019464) vded_slider_pane_g1

0xc18f,	// (0x00018c5e) vded_slider_pane_g2

0xc99e,	// (0x0001946d) vded_slider_pane_g3

0xc9a7,	// (0x00019476) vded_slider_pane_g4

0xc9b0,	// (0x0001947f) vded_slider_pane_g5

0x0004,

0xf793,	// (0x0001c262) vded_slider_pane_g

0x4b99,	// (0x00011668) mup3_rocker_pane_ParamLimits

0x4b99,	// (0x00011668) mup3_rocker_pane

0x50e9,	// (0x00011bb8) mup3_control_keys_pane_g1

0x50f1,	// (0x00011bc0) mup3_control_keys_pane_g2

0x50f9,	// (0x00011bc8) mup3_control_keys_pane_g3

0x5101,	// (0x00011bd0) mup3_control_keys_pane_g4

0x0003,

0xf79e,	// (0x0001c26d) mup3_control_keys_pane_g

0x16e5,	// (0x0000e1b4) popup_toolbar2_fixed_window_cp01_ParamLimits

0x16e5,	// (0x0000e1b4) popup_toolbar2_fixed_window_cp01

0x4bc7,	// (0x00011696) popup_toolbar2_fixed_window_cp02_ParamLimits

0x4bc7,	// (0x00011696) popup_toolbar2_fixed_window_cp02

0xb358,	// (0x00017e27) popup_call2_audio_second_window_t4_ParamLimits

0xb358,	// (0x00017e27) popup_call2_audio_second_window_t4

0xb894,	// (0x00018363) popup_call2_audio_first_window_t6_ParamLimits

0xb894,	// (0x00018363) popup_call2_audio_first_window_t6

0xbad2,	// (0x000185a1) popup_call2_audio_out_window_t6_ParamLimits

0xbad2,	// (0x000185a1) popup_call2_audio_out_window_t6

0x959f,	// (0x0001606e) main_vitu_pane

0x95f2,	// (0x000160c1) aid_size_cell_itu_ParamLimits

0x95f2,	// (0x000160c1) aid_size_cell_itu

0x95f2,	// (0x000160c1) bg_popup_window_pane_cp08_ParamLimits

0x95f2,	// (0x000160c1) bg_popup_window_pane_cp08

0x95f2,	// (0x000160c1) field_vitu_entry_pane_ParamLimits

0x95f2,	// (0x000160c1) field_vitu_entry_pane

0x95f2,	// (0x000160c1) grid_vitu_function_pane_ParamLimits

0x95f2,	// (0x000160c1) grid_vitu_function_pane

0x95f2,	// (0x000160c1) grid_vitu_itu_pane_ParamLimits

0x95f2,	// (0x000160c1) grid_vitu_itu_pane

0x5111,	// (0x00011be0) cell_vitu_itu_pane_ParamLimits

0x5111,	// (0x00011be0) cell_vitu_itu_pane

0x95f2,	// (0x000160c1) cell_vitu_function_pane_ParamLimits

0x95f2,	// (0x000160c1) cell_vitu_function_pane

0x95f2,	// (0x000160c1) bg_popup_sub_pane_cp08_ParamLimits

0x95f2,	// (0x000160c1) bg_popup_sub_pane_cp08

0xa03b,	// (0x00016b0a) field_vitu_entry_pane_t1_ParamLimits

0xa03b,	// (0x00016b0a) field_vitu_entry_pane_t1

0xc9b9,	// (0x00019488) field_vitu_entry_pane_t2_ParamLimits

0xc9b9,	// (0x00019488) field_vitu_entry_pane_t2

0x0001,

0xf7ac,	// (0x0001c27b) field_vitu_entry_pane_t_ParamLimits

0xf7ac,	// (0x0001c27b) field_vitu_entry_pane_t

0xc0b6,	// (0x00018b85) bg_button_pane_cp05_ParamLimits

0xc0b6,	// (0x00018b85) bg_button_pane_cp05

0xc9d6,	// (0x000194a5) cell_vitu_itu_pane_g1

0xabbd,	// (0x0001768c) cell_vitu_itu_pane_t1_ParamLimits

0xabbd,	// (0x0001768c) cell_vitu_itu_pane_t1

0xabbd,	// (0x0001768c) cell_vitu_itu_pane_t2_ParamLimits

0xabbd,	// (0x0001768c) cell_vitu_itu_pane_t2

0x0002,

0xf7b1,	// (0x0001c280) cell_vitu_itu_pane_t_ParamLimits

0xf7b1,	// (0x0001c280) cell_vitu_itu_pane_t

0x959f,	// (0x0001606e) bg_button_pane_cp07

0xa069,	// (0x00016b38) cell_vitu_function_pane_g1

0x9d32,	// (0x00016801) main_calc_pane_g1

0x154a,	// (0x0000e019) aid_visual_content_pane

0x959f,	// (0x0001606e) main_vradio_pane

0x9ce6,	// (0x000167b5) main_vradio_pane_g1_ParamLimits

0x9ce6,	// (0x000167b5) main_vradio_pane_g1

0x9cf4,	// (0x000167c3) main_vradio_pane_g2_ParamLimits

0x9cf4,	// (0x000167c3) main_vradio_pane_g2

0x0001,

0xf7b8,	// (0x0001c287) main_vradio_pane_g_ParamLimits

0xf7b8,	// (0x0001c287) main_vradio_pane_g

0xa03b,	// (0x00016b0a) main_vradio_pane_t1_ParamLimits

0xa03b,	// (0x00016b0a) main_vradio_pane_t1

0xa03b,	// (0x00016b0a) main_vradio_pane_t2_ParamLimits

0xa03b,	// (0x00016b0a) main_vradio_pane_t2

0xabd1,	// (0x000176a0) main_vradio_pane_t3_ParamLimits

0xabd1,	// (0x000176a0) main_vradio_pane_t3

0x0002,

0xf7bd,	// (0x0001c28c) main_vradio_pane_t_ParamLimits

0xf7bd,	// (0x0001c28c) main_vradio_pane_t

0x95f2,	// (0x000160c1) vradio_rocker_control_pane_ParamLimits

0x95f2,	// (0x000160c1) vradio_rocker_control_pane

0x95f2,	// (0x000160c1) vradio_station_info_pane_ParamLimits

0x95f2,	// (0x000160c1) vradio_station_info_pane

0x95f2,	// (0x000160c1) vradio_frequency_info_pane_ParamLimits

0x95f2,	// (0x000160c1) vradio_frequency_info_pane

0xa069,	// (0x00016b38) vradio_station_info_pane_g1

0xabbd,	// (0x0001768c) vradio_station_info_pane_t1_ParamLimits

0xabbd,	// (0x0001768c) vradio_station_info_pane_t1

0xabd1,	// (0x000176a0) vradio_station_info_pane_t2_ParamLimits

0xabd1,	// (0x000176a0) vradio_station_info_pane_t2

0x0001,

0xf7c4,	// (0x0001c293) vradio_station_info_pane_t_ParamLimits

0xf7c4,	// (0x0001c293) vradio_station_info_pane_t

0x959f,	// (0x0001606e) vradio_tuning_pane

0x5125,	// (0x00011bf4) vradio_rocker_control_pane_g1

0xc9f2,	// (0x000194c1) vradio_rocker_control_pane_g2

0x512d,	// (0x00011bfc) vradio_rocker_control_pane_g3

0x5135,	// (0x00011c04) vradio_rocker_control_pane_g4

0x513d,	// (0x00011c0c) vradio_rocker_control_pane_g5

0x0004,

0xf7c9,	// (0x0001c298) vradio_rocker_control_pane_g

0xa069,	// (0x00016b38) vradio_frequency_info_pane_g1

0xa03b,	// (0x00016b0a) vradio_frequency_info_pane_t1_ParamLimits

0xa03b,	// (0x00016b0a) vradio_frequency_info_pane_t1

0x5145,	// (0x00011c14) vradio_tuning_pane_g1

0x514e,	// (0x00011c1d) vradio_tuning_pane_t1

0x95c9,	// (0x00016098) area_side_right_pane_ParamLimits

0x95c9,	// (0x00016098) area_side_right_pane

0xbf12,	// (0x000189e1) status_small_pane_g1

0xbf1a,	// (0x000189e9) status_small_pane_g2

0xbf23,	// (0x000189f2) status_small_pane_g3

0xbf2c,	// (0x000189fb) status_small_pane_g4

0x0003,

0xf590,	// (0x0001c05f) status_small_pane_g

0xbf35,	// (0x00018a04) status_small_pane_t1

0x959f,	// (0x0001606e) main_video3_pane

0xc9fa,	// (0x000194c9) cams_zoom_vslider_pane

0xca02,	// (0x000194d1) image3_wide_pane_ParamLimits

0xca02,	// (0x000194d1) image3_wide_pane

0xca1c,	// (0x000194eb) image3_wide_small_pane

0xca26,	// (0x000194f5) main_video3_pane_g1_ParamLimits

0xca26,	// (0x000194f5) main_video3_pane_g1

0xca42,	// (0x00019511) main_video3_pane_g2_ParamLimits

0xca42,	// (0x00019511) main_video3_pane_g2

0x0001,

0xf7d4,	// (0x0001c2a3) main_video3_pane_g_ParamLimits

0xf7d4,	// (0x0001c2a3) main_video3_pane_g

0xca5e,	// (0x0001952d) main_video3_pane_t1_ParamLimits

0xca5e,	// (0x0001952d) main_video3_pane_t1

0xca89,	// (0x00019558) main_video3_pane_t2_ParamLimits

0xca89,	// (0x00019558) main_video3_pane_t2

0xcab4,	// (0x00019583) main_video3_pane_t3_ParamLimits

0xcab4,	// (0x00019583) main_video3_pane_t3

0x0002,

0xf7d9,	// (0x0001c2a8) main_video3_pane_t_ParamLimits

0xf7d9,	// (0x0001c2a8) main_video3_pane_t

0xcadf,	// (0x000195ae) cams_zoom_vslider_pane_g1

0xcae8,	// (0x000195b7) cams_zoom_vslider_pane_g2

0x0001,

0xf7e0,	// (0x0001c2af) cams_zoom_vslider_pane_g

0xcaf0,	// (0x000195bf) small_slider_vertical_pane

0xa069,	// (0x00016b38) small_slider_vertical_pane_g1

0xa069,	// (0x00016b38) small_slider_vertical_pane_g2

0xcaf8,	// (0x000195c7) small_slider_vertical_pane_g3

0x0002,

0xf7e5,	// (0x0001c2b4) small_slider_vertical_pane_g

0x959f,	// (0x0001606e) main_hwr_training_pane

0xcb01,	// (0x000195d0) hwr_training_instruct_pane_ParamLimits

0xcb01,	// (0x000195d0) hwr_training_instruct_pane

0x515d,	// (0x00011c2c) hwr_training_navi_pane_ParamLimits

0x515d,	// (0x00011c2c) hwr_training_navi_pane

0x5174,	// (0x00011c43) hwr_training_write_pane_ParamLimits

0x5174,	// (0x00011c43) hwr_training_write_pane

0x959f,	// (0x0001606e) bg_frame_shadow_pane

0xcb30,	// (0x000195ff) hwr_training_write_pane_g1

0xcb38,	// (0x00019607) hwr_training_write_pane_g2

0xcb40,	// (0x0001960f) hwr_training_write_pane_g3

0xcb48,	// (0x00019617) hwr_training_write_pane_g4

0xcb50,	// (0x0001961f) hwr_training_write_pane_g5

0xcb58,	// (0x00019627) hwr_training_write_pane_g6

0xcb60,	// (0x0001962f) hwr_training_write_pane_g7

0x0006,

0xf7ec,	// (0x0001c2bb) hwr_training_write_pane_g

0xcb68,	// (0x00019637) hwr_training_navi_pane_g1_ParamLimits

0xcb68,	// (0x00019637) hwr_training_navi_pane_g1

0xcb7a,	// (0x00019649) hwr_training_navi_pane_g2_ParamLimits

0xcb7a,	// (0x00019649) hwr_training_navi_pane_g2

0xcb8c,	// (0x0001965b) hwr_training_navi_pane_g3_ParamLimits

0xcb8c,	// (0x0001965b) hwr_training_navi_pane_g3

0xcb9c,	// (0x0001966b) hwr_training_navi_pane_g4_ParamLimits

0xcb9c,	// (0x0001966b) hwr_training_navi_pane_g4

0x0004,

0xf7fb,	// (0x0001c2ca) hwr_training_navi_pane_g_ParamLimits

0xf7fb,	// (0x0001c2ca) hwr_training_navi_pane_g

0xcba9,	// (0x00019678) hwr_training_navi_pane_t1

0x51b4,	// (0x00011c83) list_single_hwr_training_instruct_pane_ParamLimits

0x51b4,	// (0x00011c83) list_single_hwr_training_instruct_pane

0xcbb7,	// (0x00019686) list_single_hwr_training_instruct_pane_t1

0xc35d,	// (0x00018e2c) bg_frame_shadow_pane_g1

0xcbc6,	// (0x00019695) bg_frame_shadow_pane_g2

0xcbce,	// (0x0001969d) bg_frame_shadow_pane_g3

0xcbd6,	// (0x000196a5) bg_frame_shadow_pane_g4

0xcbde,	// (0x000196ad) bg_frame_shadow_pane_g5

0xcbe6,	// (0x000196b5) bg_frame_shadow_pane_g6

0xcbee,	// (0x000196bd) bg_frame_shadow_pane_g7

0x9ea5,	// (0x00016974) bg_frame_shadow_pane_g8

0x0007,

0xf806,	// (0x0001c2d5) bg_frame_shadow_pane_g

0x959f,	// (0x0001606e) main_video_tele_dialer_pane

0x51cc,	// (0x00011c9b) aid_size_cell_video_keypad_ParamLimits

0x51cc,	// (0x00011c9b) aid_size_cell_video_keypad

0x51e6,	// (0x00011cb5) grid_video_dialer_keypad_pane_ParamLimits

0x51e6,	// (0x00011cb5) grid_video_dialer_keypad_pane

0x5228,	// (0x00011cf7) video_down_pane_cp_ParamLimits

0x5228,	// (0x00011cf7) video_down_pane_cp

0x5258,	// (0x00011d27) cell_video_dialer_keypad_pane_ParamLimits

0x5258,	// (0x00011d27) cell_video_dialer_keypad_pane

0xcbf6,	// (0x000196c5) bg_button_pane_cp08_ParamLimits

0xcbf6,	// (0x000196c5) bg_button_pane_cp08

0x527a,	// (0x00011d49) cell_video_dialer_keypad_pane_g1_ParamLimits

0x527a,	// (0x00011d49) cell_video_dialer_keypad_pane_g1

0x4b83,	// (0x00011652) mup3_rocker2_pane_ParamLimits

0x4b83,	// (0x00011652) mup3_rocker2_pane

0xa069,	// (0x00016b38) mup3_rocker2_pane_g1

0x3f19,	// (0x000109e8) main_dialer2_pane

0x959f,	// (0x0001606e) main_mp4_pane

0xcc1e,	// (0x000196ed) main_mp4_pane_g1_ParamLimits

0xcc1e,	// (0x000196ed) main_mp4_pane_g1

0xcc1e,	// (0x000196ed) main_mp4_pane_g2_ParamLimits

0xcc1e,	// (0x000196ed) main_mp4_pane_g2

0x52b5,	// (0x00011d84) main_mp4_pane_g3_ParamLimits

0x52b5,	// (0x00011d84) main_mp4_pane_g3

0xcc2c,	// (0x000196fb) main_mp4_pane_g4_ParamLimits

0xcc2c,	// (0x000196fb) main_mp4_pane_g4

0xcc5a,	// (0x00019729) main_mp4_pane_g5_ParamLimits

0xcc5a,	// (0x00019729) main_mp4_pane_g5

0x0007,

0xf826,	// (0x0001c2f5) main_mp4_pane_g_ParamLimits

0xf826,	// (0x0001c2f5) main_mp4_pane_g

0xccce,	// (0x0001979d) main_mp4_pane_t1_ParamLimits

0xccce,	// (0x0001979d) main_mp4_pane_t1

0xcd26,	// (0x000197f5) main_mp4_pane_t2_ParamLimits

0xcd26,	// (0x000197f5) main_mp4_pane_t2

0xcd78,	// (0x00019847) main_mp4_pane_t3_ParamLimits

0xcd78,	// (0x00019847) main_mp4_pane_t3

0xcdc8,	// (0x00019897) main_mp4_pane_t4_ParamLimits

0xcdc8,	// (0x00019897) main_mp4_pane_t4

0x0003,

0xf837,	// (0x0001c306) main_mp4_pane_t_ParamLimits

0xf837,	// (0x0001c306) main_mp4_pane_t

0xce08,	// (0x000198d7) mp4_progress_pane_ParamLimits

0xce08,	// (0x000198d7) mp4_progress_pane

0xce4c,	// (0x0001991b) mp4_rocker_pane_ParamLimits

0xce4c,	// (0x0001991b) mp4_rocker_pane

0xce72,	// (0x00019941) mp4_progress_pane_t1

0xce89,	// (0x00019958) mp4_progress_pane_t2

0x0001,

0xf840,	// (0x0001c30f) mp4_progress_pane_t

0xcea0,	// (0x0001996f) mup_progress_pane_cp04

0xa069,	// (0x00016b38) mp4_rocker_pane_g1

0x52e5,	// (0x00011db4) aid_cell_size_keypad2_ParamLimits

0x52e5,	// (0x00011db4) aid_cell_size_keypad2

0x52ff,	// (0x00011dce) dialer2_ne_pane_ParamLimits

0x52ff,	// (0x00011dce) dialer2_ne_pane

0x5314,	// (0x00011de3) grid_dialer2_keypad_pane_ParamLimits

0x5314,	// (0x00011de3) grid_dialer2_keypad_pane

0xc0b6,	// (0x00018b85) bg_popup_call_pane_cp07_ParamLimits

0xc0b6,	// (0x00018b85) bg_popup_call_pane_cp07

0x532a,	// (0x00011df9) dialer2_ne_pane_t1_ParamLimits

0x532a,	// (0x00011df9) dialer2_ne_pane_t1

0x5367,	// (0x00011e36) cell_dialer2_keypad_pane_ParamLimits

0x5367,	// (0x00011e36) cell_dialer2_keypad_pane

0xcebe,	// (0x0001998d) bg_button_pane_pane_cp04_ParamLimits

0xcebe,	// (0x0001998d) bg_button_pane_pane_cp04

0x5389,	// (0x00011e58) cell_dialer2_keypad_pane_g1_ParamLimits

0x5389,	// (0x00011e58) cell_dialer2_keypad_pane_g1

0x22c4,	// (0x0000ed93) aid_placing_vt_set_content_ParamLimits

0x22c4,	// (0x0000ed93) aid_placing_vt_set_content

0x22e6,	// (0x0000edb5) aid_placing_vt_set_title_ParamLimits

0x22e6,	// (0x0000edb5) aid_placing_vt_set_title

0x959f,	// (0x0001606e) main_image3_pane

0x5418,	// (0x00011ee7) area_side_right_pane_cp01_ParamLimits

0x5418,	// (0x00011ee7) area_side_right_pane_cp01

0xcc1e,	// (0x000196ed) main_image3_pane_g1_ParamLimits

0xcc1e,	// (0x000196ed) main_image3_pane_g1

0x542f,	// (0x00011efe) main_image3_pane_g2_ParamLimits

0x542f,	// (0x00011efe) main_image3_pane_g2

0x5455,	// (0x00011f24) main_image3_pane_g3_ParamLimits

0x5455,	// (0x00011f24) main_image3_pane_g3

0x547b,	// (0x00011f4a) main_image3_pane_g4_ParamLimits

0x547b,	// (0x00011f4a) main_image3_pane_g4

0x0003,

0xf84f,	// (0x0001c31e) main_image3_pane_g_ParamLimits

0xf84f,	// (0x0001c31e) main_image3_pane_g

0x54a1,	// (0x00011f70) main_image3_pane_t1_ParamLimits

0x54a1,	// (0x00011f70) main_image3_pane_t1

0x54f9,	// (0x00011fc8) main_image3_pane_t2_ParamLimits

0x54f9,	// (0x00011fc8) main_image3_pane_t2

0x554b,	// (0x0001201a) main_image3_pane_t3_ParamLimits

0x554b,	// (0x0001201a) main_image3_pane_t3

0x0003,

0xf858,	// (0x0001c327) main_image3_pane_t_ParamLimits

0xf858,	// (0x0001c327) main_image3_pane_t

0x95f2,	// (0x000160c1) grid_sctrl_middle_pane_cp01_ParamLimits

0x95f2,	// (0x000160c1) grid_sctrl_middle_pane_cp01

0x55cb,	// (0x0001209a) cell_sctrl_middle_pane_cp01_ParamLimits

0x55cb,	// (0x0001209a) cell_sctrl_middle_pane_cp01

0x55e8,	// (0x000120b7) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x55e8,	// (0x000120b7) cell_sctrl_middle_pane_cp01_g1

0x959f,	// (0x0001606e) main_call4_pane

0x55fe,	// (0x000120cd) aid_size_button_call4_ParamLimits

0x55fe,	// (0x000120cd) aid_size_button_call4

0x562b,	// (0x000120fa) call4_windows_pane_ParamLimits

0x562b,	// (0x000120fa) call4_windows_pane

0x5641,	// (0x00012110) grid_call4_button_pane_ParamLimits

0x5641,	// (0x00012110) grid_call4_button_pane

0xcf14,	// (0x000199e3) call4_windows_conf_pane

0x5668,	// (0x00012137) popup_call4_audio_first_window_ParamLimits

0x5668,	// (0x00012137) popup_call4_audio_first_window

0xcf47,	// (0x00019a16) popup_call4_audio_second_window_ParamLimits

0xcf47,	// (0x00019a16) popup_call4_audio_second_window

0xcf59,	// (0x00019a28) popup_call4_audio_wait_window_ParamLimits

0xcf59,	// (0x00019a28) popup_call4_audio_wait_window

0x5688,	// (0x00012157) cell_call4_button_pane_ParamLimits

0x5688,	// (0x00012157) cell_call4_button_pane

0x56ad,	// (0x0001217c) bg_button_pane_cp09_ParamLimits

0x56ad,	// (0x0001217c) bg_button_pane_cp09

0x56b9,	// (0x00012188) cell_call4_button_pane_g1_ParamLimits

0x56b9,	// (0x00012188) cell_call4_button_pane_g1

0x56df,	// (0x000121ae) cell_call4_button_pane_t1_ParamLimits

0x56df,	// (0x000121ae) cell_call4_button_pane_t1

0xcf9f,	// (0x00019a6e) popup_call4_audio_conf_window_ParamLimits

0xcf9f,	// (0x00019a6e) popup_call4_audio_conf_window

0x4bdd,	// (0x000116ac) mup3_progress_pane_t1_ParamLimits

0x4bfb,	// (0x000116ca) mup3_progress_pane_t2_ParamLimits

0xc707,	// (0x000191d6) mup3_progress_pane_t3_ParamLimits

0xf728,	// (0x0001c1f7) mup3_progress_pane_t_ParamLimits

0xc724,	// (0x000191f3) mup_progress_pane_cp03_ParamLimits

0x5109,	// (0x00011bd8) mup3_control_keys_pane_g4_copy1

0xce36,	// (0x00019905) mp4_rocker2_pane_ParamLimits

0xce36,	// (0x00019905) mp4_rocker2_pane

0xcfb3,	// (0x00019a82) mp4_rocker2_pane_g1

0xcfbb,	// (0x00019a8a) mp4_rocker2_pane_g2

0xcfc3,	// (0x00019a92) mp4_rocker2_pane_g3

0xcfcb,	// (0x00019a9a) mp4_rocker2_pane_g4

0xcfd3,	// (0x00019aa2) mp4_rocker2_pane_g5

0x0004,

0xf861,	// (0x0001c330) mp4_rocker2_pane_g

0x959f,	// (0x0001606e) main_camera4_pane

0x959f,	// (0x0001606e) main_video4_pane

0x51fa,	// (0x00011cc9) main_video_tele_dialer_pane_t1_ParamLimits

0x51fa,	// (0x00011cc9) main_video_tele_dialer_pane_t1

0x5211,	// (0x00011ce0) main_video_tele_dialer_pane_t2_ParamLimits

0x5211,	// (0x00011ce0) main_video_tele_dialer_pane_t2

0x0001,

0xf817,	// (0x0001c2e6) main_video_tele_dialer_pane_t_ParamLimits

0xf817,	// (0x0001c2e6) main_video_tele_dialer_pane_t

0x571d,	// (0x000121ec) cam4_autofocus_pane_ParamLimits

0x571d,	// (0x000121ec) cam4_autofocus_pane

0x5731,	// (0x00012200) cam4_image_uncrop_pane_ParamLimits

0x5731,	// (0x00012200) cam4_image_uncrop_pane

0x5748,	// (0x00012217) cam4_indicators_pane_ParamLimits

0x5748,	// (0x00012217) cam4_indicators_pane

0x576c,	// (0x0001223b) main_camera4_pane_g1_ParamLimits

0x576c,	// (0x0001223b) main_camera4_pane_g1

0x5778,	// (0x00012247) main_camera4_pane_g2_ParamLimits

0x5778,	// (0x00012247) main_camera4_pane_g2

0x5778,	// (0x00012247) main_camera4_pane_g3_ParamLimits

0x5778,	// (0x00012247) main_camera4_pane_g3

0x5784,	// (0x00012253) main_camera4_pane_g4_ParamLimits

0x5784,	// (0x00012253) main_camera4_pane_g4

0x5790,	// (0x0001225f) main_camera4_pane_g5_ParamLimits

0x5790,	// (0x0001225f) main_camera4_pane_g5

0x0005,

0xf86c,	// (0x0001c33b) main_camera4_pane_g_ParamLimits

0xf86c,	// (0x0001c33b) main_camera4_pane_g

0x57ad,	// (0x0001227c) main_camera4_pane_t1_ParamLimits

0x57ad,	// (0x0001227c) main_camera4_pane_t1

0x9ce6,	// (0x000167b5) bg_tb_trans_pane_cp06

0xcffd,	// (0x00019acc) cam4_indicators_pane_g1

0xd00d,	// (0x00019adc) cam4_indicators_pane_g2

0x0002,

0xf887,	// (0x0001c356) cam4_indicators_pane_g

0xd02d,	// (0x00019afc) cam4_indicators_pane_t1

0x5802,	// (0x000122d1) main_video4_pane_g1_ParamLimits

0x5802,	// (0x000122d1) main_video4_pane_g1

0x5814,	// (0x000122e3) main_video4_pane_g2_ParamLimits

0x5814,	// (0x000122e3) main_video4_pane_g2

0x5814,	// (0x000122e3) main_video4_pane_g3_ParamLimits

0x5814,	// (0x000122e3) main_video4_pane_g3

0x5823,	// (0x000122f2) main_video4_pane_g4_ParamLimits

0x5823,	// (0x000122f2) main_video4_pane_g4

0x0004,

0xf88e,	// (0x0001c35d) main_video4_pane_g_ParamLimits

0xf88e,	// (0x0001c35d) main_video4_pane_g

0x5841,	// (0x00012310) vid4_indicators_pane_ParamLimits

0x5841,	// (0x00012310) vid4_indicators_pane

0x5869,	// (0x00012338) video4_image_uncrop_cif_pane_ParamLimits

0x5869,	// (0x00012338) video4_image_uncrop_cif_pane

0x5881,	// (0x00012350) video4_image_uncrop_nhd_pane_ParamLimits

0x5881,	// (0x00012350) video4_image_uncrop_nhd_pane

0x5895,	// (0x00012364) video4_image_uncrop_vga_pane_ParamLimits

0x5895,	// (0x00012364) video4_image_uncrop_vga_pane

0x95f2,	// (0x000160c1) bg_tb_trans_pane_cp07

0xcffd,	// (0x00019acc) vid4_indicators_pane_g1

0xd04f,	// (0x00019b1e) vid4_indicators_pane_g2

0xd05f,	// (0x00019b2e) vid4_indicators_pane_g3

0x0004,

0xf899,	// (0x0001c368) vid4_indicators_pane_g

0xd08c,	// (0x00019b5b) vid4_indicators_pane_t1

0x58ad,	// (0x0001237c) cam4_autofocus_pane_g1

0x58b5,	// (0x00012384) cam4_autofocus_pane_g2

0x58bd,	// (0x0001238c) cam4_autofocus_pane_g3

0x0002,

0xf8a4,	// (0x0001c373) cam4_autofocus_pane_g

0x58c5,	// (0x00012394) cam4_autofocus_pane_g3_copy1

0x523c,	// (0x00011d0b) video_down_pane_cp_t1

0x524a,	// (0x00011d19) video_down_pane_cp_t2

0x0001,

0xf81c,	// (0x0001c2eb) video_down_pane_cp_t

0x95f2,	// (0x000160c1) popup_vitu2_window_ParamLimits

0x95f2,	// (0x000160c1) popup_vitu2_window

0x58cd,	// (0x0001239c) aid_size_cell2_itu2_ParamLimits

0x58cd,	// (0x0001239c) aid_size_cell2_itu2

0x58f3,	// (0x000123c2) aid_size_cell_itu2_ParamLimits

0x58f3,	// (0x000123c2) aid_size_cell_itu2

0x4c8d,	// (0x0001175c) bg_popup_window_pane_cp09_ParamLimits

0x4c8d,	// (0x0001175c) bg_popup_window_pane_cp09

0x5945,	// (0x00012414) field_vitu2_entry_pane_ParamLimits

0x5945,	// (0x00012414) field_vitu2_entry_pane

0x595f,	// (0x0001242e) grid_vitu2_function_pane_ParamLimits

0x595f,	// (0x0001242e) grid_vitu2_function_pane

0x599a,	// (0x00012469) grid_vitu2_itu_pane_ParamLimits

0x599a,	// (0x00012469) grid_vitu2_itu_pane

0x5a08,	// (0x000124d7) cell_vitu2_itu_pane_ParamLimits

0x5a08,	// (0x000124d7) cell_vitu2_itu_pane

0x5a30,	// (0x000124ff) cell_vitu2_function_pane_ParamLimits

0x5a30,	// (0x000124ff) cell_vitu2_function_pane

0xd0a6,	// (0x00019b75) bg_popup_call_pane_cp08_ParamLimits

0xd0a6,	// (0x00019b75) bg_popup_call_pane_cp08

0xd0bd,	// (0x00019b8c) field_vitu2_entry_pane_g1

0xd0c9,	// (0x00019b98) field_vitu2_entry_pane_g2

0x0002,

0xf8ab,	// (0x0001c37a) field_vitu2_entry_pane_g

0x5a6f,	// (0x0001253e) field_vitu2_entry_pane_t1_ParamLimits

0x5a6f,	// (0x0001253e) field_vitu2_entry_pane_t1

0xd0d5,	// (0x00019ba4) field_vitu2_entry_pane_t2_ParamLimits

0xd0d5,	// (0x00019ba4) field_vitu2_entry_pane_t2

0x0001,

0xf8b2,	// (0x0001c381) field_vitu2_entry_pane_t_ParamLimits

0xf8b2,	// (0x0001c381) field_vitu2_entry_pane_t

0x5a9d,	// (0x0001256c) bg_button_pane_cp010_ParamLimits

0x5a9d,	// (0x0001256c) bg_button_pane_cp010

0x5aab,	// (0x0001257a) cell_vitu2_itu_pane_g1

0x5ad1,	// (0x000125a0) cell_vitu2_itu_pane_t1_ParamLimits

0x5ad1,	// (0x000125a0) cell_vitu2_itu_pane_t1

0x5b2f,	// (0x000125fe) cell_vitu2_itu_pane_t2_ParamLimits

0x5b2f,	// (0x000125fe) cell_vitu2_itu_pane_t2

0x0002,

0xf8bc,	// (0x0001c38b) cell_vitu2_itu_pane_t_ParamLimits

0xf8bc,	// (0x0001c38b) cell_vitu2_itu_pane_t

0x95f2,	// (0x000160c1) bg_button_pane_cp011

0x5c1b,	// (0x000126ea) cell_vitu2_function_pane_g1

0x959f,	// (0x0001606e) main_myfav_hc_pane

0x5597,	// (0x00012066) popup_image3_note_pane_ParamLimits

0x5597,	// (0x00012066) popup_image3_note_pane

0x55b1,	// (0x00012080) popup_image3_tool_bar_pane_ParamLimits

0x55b1,	// (0x00012080) popup_image3_tool_bar_pane

0x5bbd,	// (0x0001268c) cell_vitu2_itu_pane_t3_ParamLimits

0x5bbd,	// (0x0001268c) cell_vitu2_itu_pane_t3

0x959f,	// (0x0001606e) bg_popup_trans_pane

0xd0fa,	// (0x00019bc9) grid_image3_tool_bar_pane

0xd104,	// (0x00019bd3) bg_popup_trans_pane_g1

0xa2c5,	// (0x00016d94) bg_popup_trans_pane_g2

0xd10c,	// (0x00019bdb) bg_popup_trans_pane_g3

0xd114,	// (0x00019be3) bg_popup_trans_pane_g4

0xd11c,	// (0x00019beb) bg_popup_trans_pane_g5

0xd124,	// (0x00019bf3) bg_popup_trans_pane_g6

0xd12c,	// (0x00019bfb) bg_popup_trans_pane_g7

0xd134,	// (0x00019c03) bg_popup_trans_pane_g8

0xa2a5,	// (0x00016d74) bg_popup_trans_pane_g9

0x0008,

0xf8c3,	// (0x0001c392) bg_popup_trans_pane_g

0xd13c,	// (0x00019c0b) cell_image3_tool_bar_pane_ParamLimits

0xd13c,	// (0x00019c0b) cell_image3_tool_bar_pane

0xa069,	// (0x00016b38) cell_image3_tool_bar_pane_g1

0x959f,	// (0x0001606e) bg_popup_trans_pane_cp1

0xd150,	// (0x00019c1f) popup_image3_note_pane_t1

0xd15e,	// (0x00019c2d) popup_image3_note_pane_t2

0xd16c,	// (0x00019c3b) popup_image3_note_pane_t3

0x0002,

0xf8d6,	// (0x0001c3a5) popup_image3_note_pane_t

0xd17a,	// (0x00019c49) popup_image3_note_pane_t3_copy1

0x5c2f,	// (0x000126fe) bg_myfav_hc_instruction_pane_ParamLimits

0x5c2f,	// (0x000126fe) bg_myfav_hc_instruction_pane

0x5c41,	// (0x00012710) cell_myfav_contact_pane_ParamLimits

0x5c41,	// (0x00012710) cell_myfav_contact_pane

0x5c5b,	// (0x0001272a) cell_myfav_contact_pane_cp1_ParamLimits

0x5c5b,	// (0x0001272a) cell_myfav_contact_pane_cp1

0x5c71,	// (0x00012740) cell_myfav_contact_pane_cp2_ParamLimits

0x5c71,	// (0x00012740) cell_myfav_contact_pane_cp2

0x5c87,	// (0x00012756) cell_myfav_contact_pane_cp3_ParamLimits

0x5c87,	// (0x00012756) cell_myfav_contact_pane_cp3

0x5c9c,	// (0x0001276b) cell_myfav_contact_pane_cp4_ParamLimits

0x5c9c,	// (0x0001276b) cell_myfav_contact_pane_cp4

0x5cb0,	// (0x0001277f) cell_myfav_contact_pane_cp5_ParamLimits

0x5cb0,	// (0x0001277f) cell_myfav_contact_pane_cp5

0x5cc4,	// (0x00012793) cell_myfav_contact_pane_cp6_ParamLimits

0x5cc4,	// (0x00012793) cell_myfav_contact_pane_cp6

0x5cd8,	// (0x000127a7) cell_myfav_contact_pane_cp7_ParamLimits

0x5cd8,	// (0x000127a7) cell_myfav_contact_pane_cp7

0xd188,	// (0x00019c57) listscroll_gen_pane_cp05

0x5cf0,	// (0x000127bf) main_myfav_hc_pane_g1_ParamLimits

0x5cf0,	// (0x000127bf) main_myfav_hc_pane_g1

0x5d06,	// (0x000127d5) main_myfav_hc_pane_g2_ParamLimits

0x5d06,	// (0x000127d5) main_myfav_hc_pane_g2

0x0002,

0xf8dd,	// (0x0001c3ac) main_myfav_hc_pane_g_ParamLimits

0xf8dd,	// (0x0001c3ac) main_myfav_hc_pane_g

0x5d30,	// (0x000127ff) main_myfav_hc_pane_t1_ParamLimits

0x5d30,	// (0x000127ff) main_myfav_hc_pane_t1

0xd191,	// (0x00019c60) main_myfav_hc_pane_t2_ParamLimits

0xd191,	// (0x00019c60) main_myfav_hc_pane_t2

0xd1a3,	// (0x00019c72) main_myfav_hc_pane_t3_ParamLimits

0xd1a3,	// (0x00019c72) main_myfav_hc_pane_t3

0x5d45,	// (0x00012814) main_myfav_hc_pane_t4_ParamLimits

0x5d45,	// (0x00012814) main_myfav_hc_pane_t4

0x0004,

0xf8e4,	// (0x0001c3b3) main_myfav_hc_pane_t_ParamLimits

0xf8e4,	// (0x0001c3b3) main_myfav_hc_pane_t

0xa069,	// (0x00016b38) bg_myfav_hc_instruction_pane_g1

0xd1b5,	// (0x00019c84) cell_myfav_contact_pane_g1_ParamLimits

0xd1b5,	// (0x00019c84) cell_myfav_contact_pane_g1

0xd1b5,	// (0x00019c84) cell_myfav_contact_pane_g2_ParamLimits

0xd1b5,	// (0x00019c84) cell_myfav_contact_pane_g2

0xd1c1,	// (0x00019c90) cell_myfav_contact_pane_g3_ParamLimits

0xd1c1,	// (0x00019c90) cell_myfav_contact_pane_g3

0x9cf4,	// (0x000167c3) cell_myfav_contact_pane_g4_ParamLimits

0x9cf4,	// (0x000167c3) cell_myfav_contact_pane_g4

0xd1ce,	// (0x00019c9d) cell_myfav_contact_pane_g5_ParamLimits

0xd1ce,	// (0x00019c9d) cell_myfav_contact_pane_g5

0x0004,

0xf8ef,	// (0x0001c3be) cell_myfav_contact_pane_g_ParamLimits

0xf8ef,	// (0x0001c3be) cell_myfav_contact_pane_g

0x5d1c,	// (0x000127eb) main_myfav_hc_pane_g3_ParamLimits

0x5d1c,	// (0x000127eb) main_myfav_hc_pane_g3

0x166c,	// (0x0000e13b) popup_adpt_find_window

0x5d69,	// (0x00012838) afind_page_pane_ParamLimits

0x5d69,	// (0x00012838) afind_page_pane

0x5d7e,	// (0x0001284d) aid_size_cell_afind_ParamLimits

0x5d7e,	// (0x0001284d) aid_size_cell_afind

0x5d9c,	// (0x0001286b) bg_popup_sub_pane_cp09_ParamLimits

0x5d9c,	// (0x0001286b) bg_popup_sub_pane_cp09

0x5da9,	// (0x00012878) find_pane_cp01_ParamLimits

0x5da9,	// (0x00012878) find_pane_cp01

0xd1da,	// (0x00019ca9) grid_afind_control_pane_ParamLimits

0xd1da,	// (0x00019ca9) grid_afind_control_pane

0x5db6,	// (0x00012885) grid_afind_pane_ParamLimits

0x5db6,	// (0x00012885) grid_afind_pane

0x5dd4,	// (0x000128a3) cell_afind_pane_ParamLimits

0x5dd4,	// (0x000128a3) cell_afind_pane

0xa069,	// (0x00016b38) afind_page_pane_g1

0x5e23,	// (0x000128f2) afind_page_pane_g2

0x5e2b,	// (0x000128fa) afind_page_pane_g3

0x0002,

0xf8fa,	// (0x0001c3c9) afind_page_pane_g

0x5e33,	// (0x00012902) afind_page_pane_t1

0xd200,	// (0x00019ccf) cell_afind_grid_control_pane_ParamLimits

0xd200,	// (0x00019ccf) cell_afind_grid_control_pane

0xcebe,	// (0x0001998d) bg_button_pane_cp69_ParamLimits

0xcebe,	// (0x0001998d) bg_button_pane_cp69

0x5e41,	// (0x00012910) cell_afind_pane_g1_ParamLimits

0x5e41,	// (0x00012910) cell_afind_pane_g1

0x5e4e,	// (0x0001291d) cell_afind_pane_t1_ParamLimits

0x5e4e,	// (0x0001291d) cell_afind_pane_t1

0xa073,	// (0x00016b42) bg_button_pane_cp72

0xd20f,	// (0x00019cde) cell_afind_grid_control_pane_g1

0x3a76,	// (0x00010545) aid_image_placing_area_ParamLimits

0x3a76,	// (0x00010545) aid_image_placing_area

0x9ce6,	// (0x000167b5) field_vitu_entry_pane_g1_ParamLimits

0x9ce6,	// (0x000167b5) field_vitu_entry_pane_g1

0x9ce6,	// (0x000167b5) field_vitu_entry_pane_g2_ParamLimits

0x9ce6,	// (0x000167b5) field_vitu_entry_pane_g2

0x0001,

0xf7a7,	// (0x0001c276) field_vitu_entry_pane_g_ParamLimits

0xf7a7,	// (0x0001c276) field_vitu_entry_pane_g

0xc9d6,	// (0x000194a5) cell_vitu_itu_pane_g1_ParamLimits

0xc9b9,	// (0x00019488) cell_vitu_itu_pane_t3_ParamLimits

0xc9b9,	// (0x00019488) cell_vitu_itu_pane_t3

0xce72,	// (0x00019941) mp4_progress_pane_t1_ParamLimits

0xce89,	// (0x00019958) mp4_progress_pane_t2_ParamLimits

0xf840,	// (0x0001c30f) mp4_progress_pane_t_ParamLimits

0xcea0,	// (0x0001996f) mup_progress_pane_cp04_ParamLimits

0x5d57,	// (0x00012826) main_myfav_hc_pane_t5_ParamLimits

0x5d57,	// (0x00012826) main_myfav_hc_pane_t5

0x95c1,	// (0x00016090) aid_zoom_text_primary

0x166c,	// (0x0000e13b) popup_adpt_find_window_ParamLimits

0x95f2,	// (0x000160c1) main_cam_set_pane

0x575a,	// (0x00012229) cam4_zoom_pane_ParamLimits

0x575a,	// (0x00012229) cam4_zoom_pane

0x5e60,	// (0x0001292f) main_cam_set_pane_g1_ParamLimits

0x5e60,	// (0x0001292f) main_cam_set_pane_g1

0x5e6e,	// (0x0001293d) main_cam_set_pane_g2_ParamLimits

0x5e6e,	// (0x0001293d) main_cam_set_pane_g2

0x0001,

0xf901,	// (0x0001c3d0) main_cam_set_pane_g_ParamLimits

0xf901,	// (0x0001c3d0) main_cam_set_pane_g

0x5e8d,	// (0x0001295c) main_cam_set_pane_t1_ParamLimits

0x5e8d,	// (0x0001295c) main_cam_set_pane_t1

0x5e9f,	// (0x0001296e) main_cset_listscroll_pane_ParamLimits

0x5e9f,	// (0x0001296e) main_cset_listscroll_pane

0x5ec1,	// (0x00012990) main_cset_slider_pane_ParamLimits

0x5ec1,	// (0x00012990) main_cset_slider_pane

0xd220,	// (0x00019cef) main_cset_list_pane_ParamLimits

0xd220,	// (0x00019cef) main_cset_list_pane

0xd230,	// (0x00019cff) scroll_pane_cp028

0x5ee5,	// (0x000129b4) aid_area_touch_slider

0x5f01,	// (0x000129d0) cset_slider_pane

0x5f24,	// (0x000129f3) main_cset_slider_pane_g1

0x5f39,	// (0x00012a08) main_cset_slider_pane_g2

0x0011,

0xf906,	// (0x0001c3d5) main_cset_slider_pane_g

0xd269,	// (0x00019d38) main_cset_slider_pane_t1

0x5ff5,	// (0x00012ac4) main_cset_slider_pane_t2

0x600f,	// (0x00012ade) main_cset_slider_pane_t3

0x6029,	// (0x00012af8) main_cset_slider_pane_t4

0x6043,	// (0x00012b12) main_cset_slider_pane_t5

0x605d,	// (0x00012b2c) main_cset_slider_pane_t6

0x6072,	// (0x00012b41) main_cset_slider_pane_t7

0x000e,

0xf92b,	// (0x0001c3fa) main_cset_slider_pane_t

0x6176,	// (0x00012c45) cset_list_set_pane_ParamLimits

0x6176,	// (0x00012c45) cset_list_set_pane

0xd303,	// (0x00019dd2) aid_position_infowindow_above

0xd30b,	// (0x00019dda) aid_position_infowindow_below

0x6187,	// (0x00012c56) cset_list_set_pane_g1_ParamLimits

0x6187,	// (0x00012c56) cset_list_set_pane_g1

0x6193,	// (0x00012c62) cset_list_set_pane_g3_ParamLimits

0x6193,	// (0x00012c62) cset_list_set_pane_g3

0x0001,

0xf94a,	// (0x0001c419) cset_list_set_pane_g_ParamLimits

0xf94a,	// (0x0001c419) cset_list_set_pane_g

0x61a2,	// (0x00012c71) cset_list_set_pane_t1_ParamLimits

0x61a2,	// (0x00012c71) cset_list_set_pane_t1

0x95f2,	// (0x000160c1) list_highlight_pane_cp021_ParamLimits

0x95f2,	// (0x000160c1) list_highlight_pane_cp021

0xac55,	// (0x00017724) cset_slider_pane_g1

0xac67,	// (0x00017736) cset_slider_pane_g2

0xac5e,	// (0x0001772d) cset_slider_pane_g3

0x0002,

0xf94f,	// (0x0001c41e) cset_slider_pane_g

0xd313,	// (0x00019de2) aid_area_touch_cam4_zoom

0xd31b,	// (0x00019dea) cam4_zoom_cont_pane

0xd323,	// (0x00019df2) cam4_zoom_pane_g1

0xd32b,	// (0x00019dfa) cam4_zoom_pane_g2

0x61b7,	// (0x00012c86) cam4_zoom_pane_g3

0x0002,

0xf956,	// (0x0001c425) cam4_zoom_pane_g

0xd333,	// (0x00019e02) cam4_zoom_cont_pane_g1

0xd33c,	// (0x00019e0b) cam4_zoom_cont_pane_g2

0xd345,	// (0x00019e14) cam4_zoom_cont_pane_g3

0x0002,

0xf95d,	// (0x0001c42c) cam4_zoom_cont_pane_g

0x561c,	// (0x000120eb) call4_image_pane_ParamLimits

0x561c,	// (0x000120eb) call4_image_pane

0xcf14,	// (0x000199e3) call4_windows_conf_pane_ParamLimits

0xcf27,	// (0x000199f6) popup_call4_audio_in_window_ParamLimits

0xcf27,	// (0x000199f6) popup_call4_audio_in_window

0x959f,	// (0x0001606e) bg_popup_call2_act_pane_cp02

0xcf97,	// (0x00019a66) call4_list_conf_pane

0xa069,	// (0x00016b38) call4_image_pane_g1

0xa069,	// (0x00016b38) call4_image_pane_g2

0x0001,

0xf3c9,	// (0x0001be98) call4_image_pane_g

0xd34e,	// (0x00019e1d) list_single_graphic_popup_conf4_pane_ParamLimits

0xd34e,	// (0x00019e1d) list_single_graphic_popup_conf4_pane

0x959f,	// (0x0001606e) list_highlight_pane_cp022

0xd361,	// (0x00019e30) list_single_graphic_popup_conf4_pane_g1

0xa85f,	// (0x0001732e) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf964,	// (0x0001c433) list_single_graphic_popup_conf4_pane_g

0xd369,	// (0x00019e38) list_single_graphic_popup_conf4_pane_t1

0x23f0,	// (0x0000eebf) popup_vtel_slider_window_ParamLimits

0x23f0,	// (0x0000eebf) popup_vtel_slider_window

0xceac,	// (0x0001997b) dialer2_ne_pane_t2_ParamLimits

0xceac,	// (0x0001997b) dialer2_ne_pane_t2

0x0001,

0xf845,	// (0x0001c314) dialer2_ne_pane_t_ParamLimits

0xf845,	// (0x0001c314) dialer2_ne_pane_t

0xc0b6,	// (0x00018b85) bg_popup_sub_pane_cp010_ParamLimits

0xc0b6,	// (0x00018b85) bg_popup_sub_pane_cp010

0x61bf,	// (0x00012c8e) popup_vtel_slider_window_g1_ParamLimits

0x61bf,	// (0x00012c8e) popup_vtel_slider_window_g1

0x61d2,	// (0x00012ca1) popup_vtel_slider_window_g2_ParamLimits

0x61d2,	// (0x00012ca1) popup_vtel_slider_window_g2

0x0003,

0xf969,	// (0x0001c438) popup_vtel_slider_window_g_ParamLimits

0xf969,	// (0x0001c438) popup_vtel_slider_window_g

0x6226,	// (0x00012cf5) vtel_slider_pane_ParamLimits

0x6226,	// (0x00012cf5) vtel_slider_pane

0x6248,	// (0x00012d17) vtel_slider_pane_g1_ParamLimits

0x6248,	// (0x00012d17) vtel_slider_pane_g1

0x625c,	// (0x00012d2b) vtel_slider_pane_g2_ParamLimits

0x625c,	// (0x00012d2b) vtel_slider_pane_g2

0x6274,	// (0x00012d43) vtel_slider_pane_g3_ParamLimits

0x6274,	// (0x00012d43) vtel_slider_pane_g3

0x6248,	// (0x00012d17) vtel_slider_pane_g4_ParamLimits

0x6248,	// (0x00012d17) vtel_slider_pane_g4

0x628a,	// (0x00012d59) vtel_slider_pane_g5_ParamLimits

0x628a,	// (0x00012d59) vtel_slider_pane_g5

0x0004,

0xf972,	// (0x0001c441) vtel_slider_pane_g_ParamLimits

0xf972,	// (0x0001c441) vtel_slider_pane_g

0x95f2,	// (0x000160c1) main_gallery2_pane

0x591f,	// (0x000123ee) aid_size_row_itut2_dropdow_list_ParamLimits

0x591f,	// (0x000123ee) aid_size_row_itut2_dropdow_list

0x597b,	// (0x0001244a) grid_vitu2_function_top_pane_ParamLimits

0x597b,	// (0x0001244a) grid_vitu2_function_top_pane

0x59c3,	// (0x00012492) popup_vitu2_dropdown_list_window_ParamLimits

0x59c3,	// (0x00012492) popup_vitu2_dropdown_list_window

0x59e4,	// (0x000124b3) popup_vitu2_match_list_window

0x62a0,	// (0x00012d6f) cell_vitu2_function_top_pane_ParamLimits

0x62a0,	// (0x00012d6f) cell_vitu2_function_top_pane

0x62b8,	// (0x00012d87) cell_vitu2_function_top_pane_cp01_ParamLimits

0x62b8,	// (0x00012d87) cell_vitu2_function_top_pane_cp01

0x62d4,	// (0x00012da3) cell_vitu2_function_top_wide_pane_ParamLimits

0x62d4,	// (0x00012da3) cell_vitu2_function_top_wide_pane

0x95f2,	// (0x000160c1) bg_button_pane_cp012

0x62f1,	// (0x00012dc0) cell_vitu2_function_top_pane_g1

0xd37f,	// (0x00019e4e) bg_button_pane_cp013_ParamLimits

0xd37f,	// (0x00019e4e) bg_button_pane_cp013

0x6305,	// (0x00012dd4) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6305,	// (0x00012dd4) cell_vitu2_function_top_wide_pane_g1

0x95f2,	// (0x000160c1) bg_popup_sub_pane_cp20

0x631d,	// (0x00012dec) list_vitu2_match_list_pane

0xd104,	// (0x00019bd3) bg_popup_sub_pane_cp20_g1

0xd10c,	// (0x00019bdb) bg_popup_sub_pane_cp20_g2

0xa2c5,	// (0x00016d94) bg_popup_sub_pane_cp20_g3

0xd114,	// (0x00019be3) bg_popup_sub_pane_cp20_g4

0xa2a5,	// (0x00016d74) bg_popup_sub_pane_cp20_g5

0xd39b,	// (0x00019e6a) bg_popup_sub_pane_cp20_g6

0xd124,	// (0x00019bf3) bg_popup_sub_pane_cp20_g7

0xd12c,	// (0x00019bfb) bg_popup_sub_pane_cp20_g8

0xd134,	// (0x00019c03) bg_popup_sub_pane_cp20_g9

0x0008,

0xf97d,	// (0x0001c44c) bg_popup_sub_pane_cp20_g

0xd3a3,	// (0x00019e72) list_vitu2_match_list_item_pane_ParamLimits

0xd3a3,	// (0x00019e72) list_vitu2_match_list_item_pane

0xd3b5,	// (0x00019e84) list_vitu2_match_list_item_pane_t1

0x959f,	// (0x0001606e) bg_popup_sub_pane_cp21

0x9ff1,	// (0x00016ac0) grid_vitu2_dropdown_list_pane

0x633b,	// (0x00012e0a) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x633b,	// (0x00012e0a) cell_vitu2_dropdown_list_char_pane

0x6359,	// (0x00012e28) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x6359,	// (0x00012e28) cell_vitu2_dropdown_list_ctrl_pane

0xd3d0,	// (0x00019e9f) cell_vitu2_dropdown_list_char_pane_g1

0xd3d9,	// (0x00019ea8) cell_vitu2_dropdown_list_char_pane_g2

0xd3e2,	// (0x00019eb1) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf99a,	// (0x0001c469) cell_vitu2_dropdown_list_char_pane_g

0x6381,	// (0x00012e50) cell_vitu2_dropdown_list_char_pane_t1

0x638f,	// (0x00012e5e) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x638f,	// (0x00012e5e) cell_vitu2_dropdown_list_ctrl_pane_g1

0x639f,	// (0x00012e6e) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x639f,	// (0x00012e6e) cell_vitu2_dropdown_list_ctrl_pane_g2

0x63b0,	// (0x00012e7f) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x63b0,	// (0x00012e7f) cell_vitu2_dropdown_list_ctrl_pane_g3

0x63c0,	// (0x00012e8f) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x63c0,	// (0x00012e8f) cell_vitu2_dropdown_list_ctrl_pane_g4

0x9ce6,	// (0x000167b5) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x9ce6,	// (0x000167b5) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf9a1,	// (0x0001c470) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf9a1,	// (0x0001c470) cell_vitu2_dropdown_list_ctrl_pane_g

0x63dc,	// (0x00012eab) aid_size_cell_gallery2_ParamLimits

0x63dc,	// (0x00012eab) aid_size_cell_gallery2

0x63fa,	// (0x00012ec9) grid_gallery2_pane_ParamLimits

0x63fa,	// (0x00012ec9) grid_gallery2_pane

0x5021,	// (0x00011af0) scroll_pane_cp029_ParamLimits

0x5021,	// (0x00011af0) scroll_pane_cp029

0x640e,	// (0x00012edd) cell_gallery2_pane_ParamLimits

0x640e,	// (0x00012edd) cell_gallery2_pane

0xd3eb,	// (0x00019eba) cell_gallery2_pane_g2

0x6467,	// (0x00012f36) cell_gallery2_pane_g3

0xd3f3,	// (0x00019ec2) cell_gallery2_pane_g4

0xd3fb,	// (0x00019eca) cell_gallery2_pane_g5

0x9ff1,	// (0x00016ac0) grid_highlight_pane_cp10

0x59e4,	// (0x000124b3) popup_vitu2_match_list_window_ParamLimits

0x59f5,	// (0x000124c4) popup_vitu2_query_window_ParamLimits

0x59f5,	// (0x000124c4) popup_vitu2_query_window

0x959f,	// (0x0001606e) bg_vitu2_candi_button_pane

0xd3d0,	// (0x00019e9f) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd3d9,	// (0x00019ea8) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd3e2,	// (0x00019eb1) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x646f,	// (0x00012f3e) bg_button_pane_cp015

0x6480,	// (0x00012f4f) bg_button_pane_cp016

0x648c,	// (0x00012f5b) bg_button_pane_cp017

0xabe5,	// (0x000176b4) bg_popup_sub_pane_cp22

0xd403,	// (0x00019ed2) popup_vitu2_query_window_g1

0x64ca,	// (0x00012f99) popup_vitu2_query_window_g2

0x0002,

0xf9ac,	// (0x0001c47b) popup_vitu2_query_window_g

0x64ea,	// (0x00012fb9) popup_vitu2_query_window_t1_ParamLimits

0x64ea,	// (0x00012fb9) popup_vitu2_query_window_t1

0x651d,	// (0x00012fec) popup_vitu2_query_window_t2_ParamLimits

0x651d,	// (0x00012fec) popup_vitu2_query_window_t2

0x652f,	// (0x00012ffe) popup_vitu2_query_window_t3_ParamLimits

0x652f,	// (0x00012ffe) popup_vitu2_query_window_t3

0x6557,	// (0x00013026) popup_vitu2_query_window_t4_ParamLimits

0x6557,	// (0x00013026) popup_vitu2_query_window_t4

0x6569,	// (0x00013038) popup_vitu2_query_window_t5_ParamLimits

0x6569,	// (0x00013038) popup_vitu2_query_window_t5

0x0006,

0xf9b3,	// (0x0001c482) popup_vitu2_query_window_t_ParamLimits

0xf9b3,	// (0x0001c482) popup_vitu2_query_window_t

0xd218,	// (0x00019ce7) main_cset_text_pane

0x5ee5,	// (0x000129b4) aid_area_touch_slider_ParamLimits

0x5f01,	// (0x000129d0) cset_slider_pane_ParamLimits

0x5f24,	// (0x000129f3) main_cset_slider_pane_g1_ParamLimits

0x5f39,	// (0x00012a08) main_cset_slider_pane_g2_ParamLimits

0xd239,	// (0x00019d08) main_cset_slider_pane_g3_ParamLimits

0xd239,	// (0x00019d08) main_cset_slider_pane_g3

0x5f4e,	// (0x00012a1d) main_cset_slider_pane_g4_ParamLimits

0x5f4e,	// (0x00012a1d) main_cset_slider_pane_g4

0x5f5d,	// (0x00012a2c) main_cset_slider_pane_g5_ParamLimits

0x5f5d,	// (0x00012a2c) main_cset_slider_pane_g5

0x5f69,	// (0x00012a38) main_cset_slider_pane_g6_ParamLimits

0x5f69,	// (0x00012a38) main_cset_slider_pane_g6

0xf906,	// (0x0001c3d5) main_cset_slider_pane_g_ParamLimits

0xd269,	// (0x00019d38) main_cset_slider_pane_t1_ParamLimits

0x5ff5,	// (0x00012ac4) main_cset_slider_pane_t2_ParamLimits

0x600f,	// (0x00012ade) main_cset_slider_pane_t3_ParamLimits

0x6029,	// (0x00012af8) main_cset_slider_pane_t4_ParamLimits

0x6043,	// (0x00012b12) main_cset_slider_pane_t5_ParamLimits

0x605d,	// (0x00012b2c) main_cset_slider_pane_t6_ParamLimits

0x6072,	// (0x00012b41) main_cset_slider_pane_t7_ParamLimits

0x609c,	// (0x00012b6b) main_cset_slider_pane_t8_ParamLimits

0x609c,	// (0x00012b6b) main_cset_slider_pane_t8

0x60c4,	// (0x00012b93) main_cset_slider_pane_t9_ParamLimits

0x60c4,	// (0x00012b93) main_cset_slider_pane_t9

0x60ec,	// (0x00012bbb) main_cset_slider_pane_t10_ParamLimits

0x60ec,	// (0x00012bbb) main_cset_slider_pane_t10

0x6114,	// (0x00012be3) main_cset_slider_pane_t11_ParamLimits

0x6114,	// (0x00012be3) main_cset_slider_pane_t11

0x613c,	// (0x00012c0b) main_cset_slider_pane_t12_ParamLimits

0x613c,	// (0x00012c0b) main_cset_slider_pane_t12

0x6159,	// (0x00012c28) main_cset_slider_pane_t13_ParamLimits

0x6159,	// (0x00012c28) main_cset_slider_pane_t13

0xf92b,	// (0x0001c3fa) main_cset_slider_pane_t_ParamLimits

0x959f,	// (0x0001606e) bg_popup_sub_pane_cp011

0xd40f,	// (0x00019ede) main_cset_text_pane_g1

0xd417,	// (0x00019ee6) main_cset_text_pane_t1

0xd425,	// (0x00019ef4) main_cset_text_pane_t2

0xd433,	// (0x00019f02) main_cset_text_pane_t3

0xd441,	// (0x00019f10) main_cset_text_pane_t4

0xd44f,	// (0x00019f1e) main_cset_text_pane_t5

0xd45d,	// (0x00019f2c) main_cset_text_pane_t6

0xd46b,	// (0x00019f3a) main_cset_text_pane_t7

0x0006,

0xf9c2,	// (0x0001c491) main_cset_text_pane_t

0x959f,	// (0x0001606e) main_cam4_burst_pane

0x959f,	// (0x0001606e) main_cam5_pane

0xd1ee,	// (0x00019cbd) bg_button_pane_cp019

0xd1f7,	// (0x00019cc6) bg_button_pane_cp020

0xd245,	// (0x00019d14) main_cset_slider_pane_g7_ParamLimits

0xd245,	// (0x00019d14) main_cset_slider_pane_g7

0xd251,	// (0x00019d20) main_cset_slider_pane_g8_ParamLimits

0xd251,	// (0x00019d20) main_cset_slider_pane_g8

0x5f7d,	// (0x00012a4c) main_cset_slider_pane_g9_ParamLimits

0x5f7d,	// (0x00012a4c) main_cset_slider_pane_g9

0x5f89,	// (0x00012a58) main_cset_slider_pane_g10_ParamLimits

0x5f89,	// (0x00012a58) main_cset_slider_pane_g10

0x5f95,	// (0x00012a64) main_cset_slider_pane_g11_ParamLimits

0x5f95,	// (0x00012a64) main_cset_slider_pane_g11

0x5fa1,	// (0x00012a70) main_cset_slider_pane_g12_ParamLimits

0x5fa1,	// (0x00012a70) main_cset_slider_pane_g12

0x5fad,	// (0x00012a7c) main_cset_slider_pane_g13_ParamLimits

0x5fad,	// (0x00012a7c) main_cset_slider_pane_g13

0x5fb9,	// (0x00012a88) main_cset_slider_pane_g14_ParamLimits

0x5fb9,	// (0x00012a88) main_cset_slider_pane_g14

0x5fc5,	// (0x00012a94) main_cset_slider_pane_g15_ParamLimits

0x5fc5,	// (0x00012a94) main_cset_slider_pane_g15

0xd291,	// (0x00019d60) main_cset_slider_pane_t14_ParamLimits

0xd291,	// (0x00019d60) main_cset_slider_pane_t14

0xd2ca,	// (0x00019d99) main_cset_slider_pane_t15_ParamLimits

0xd2ca,	// (0x00019d99) main_cset_slider_pane_t15

0x65d1,	// (0x000130a0) aid_cam4_burst_size_cell_ParamLimits

0x65d1,	// (0x000130a0) aid_cam4_burst_size_cell

0x65f1,	// (0x000130c0) grid_cam4_burst_pane_ParamLimits

0x65f1,	// (0x000130c0) grid_cam4_burst_pane

0x6617,	// (0x000130e6) linegrid_cam4_burst_pane_ParamLimits

0x6617,	// (0x000130e6) linegrid_cam4_burst_pane

0x6639,	// (0x00013108) scroll_pane_cp30_ParamLimits

0x6639,	// (0x00013108) scroll_pane_cp30

0x6645,	// (0x00013114) cell_cam4_burst_pane_ParamLimits

0x6645,	// (0x00013114) cell_cam4_burst_pane

0xd479,	// (0x00019f48) linegrid_cam4_burst_pane_g1_ParamLimits

0xd479,	// (0x00019f48) linegrid_cam4_burst_pane_g1

0x668c,	// (0x0001315b) linegrid_cam4_burst_pane_g2_ParamLimits

0x668c,	// (0x0001315b) linegrid_cam4_burst_pane_g2

0xd486,	// (0x00019f55) linegrid_cam4_burst_pane_g3_ParamLimits

0xd486,	// (0x00019f55) linegrid_cam4_burst_pane_g3

0x0002,

0xf9d1,	// (0x0001c4a0) linegrid_cam4_burst_pane_g_ParamLimits

0xf9d1,	// (0x0001c4a0) linegrid_cam4_burst_pane_g

0x669d,	// (0x0001316c) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x669d,	// (0x0001316c) linegrid_cam4_burst_pane_g3_copy1

0xd493,	// (0x00019f62) linegrid_cam4_burst_pane_g4_ParamLimits

0xd493,	// (0x00019f62) linegrid_cam4_burst_pane_g4

0x66b7,	// (0x00013186) linegrid_cam4_burst_pane_g5_ParamLimits

0x66b7,	// (0x00013186) linegrid_cam4_burst_pane_g5

0x66c8,	// (0x00013197) linegrid_cam4_burst_pane_g6_ParamLimits

0x66c8,	// (0x00013197) linegrid_cam4_burst_pane_g6

0xd4a0,	// (0x00019f6f) linegrid_cam4_burst_pane_g7_ParamLimits

0xd4a0,	// (0x00019f6f) linegrid_cam4_burst_pane_g7

0x66d9,	// (0x000131a8) cell_cam4_burst_pane_g1

0xd4b9,	// (0x00019f88) main_cam5_pane_t1_ParamLimits

0xd4b9,	// (0x00019f88) main_cam5_pane_t1

0xd4cb,	// (0x00019f9a) main_cam5_pane_t2_ParamLimits

0xd4cb,	// (0x00019f9a) main_cam5_pane_t2

0xd4dd,	// (0x00019fac) main_cam5_pane_t3_ParamLimits

0xd4dd,	// (0x00019fac) main_cam5_pane_t3

0xd4ef,	// (0x00019fbe) main_cam5_pane_t4_ParamLimits

0xd4ef,	// (0x00019fbe) main_cam5_pane_t4

0xd505,	// (0x00019fd4) main_cam5_pane_t5_ParamLimits

0xd505,	// (0x00019fd4) main_cam5_pane_t5

0xd517,	// (0x00019fe6) main_cam5_pane_t6_ParamLimits

0xd517,	// (0x00019fe6) main_cam5_pane_t6

0xd529,	// (0x00019ff8) main_cam5_pane_t7_ParamLimits

0xd529,	// (0x00019ff8) main_cam5_pane_t7

0xd53b,	// (0x0001a00a) main_cam5_pane_t8_ParamLimits

0xd53b,	// (0x0001a00a) main_cam5_pane_t8

0xd557,	// (0x0001a026) main_cam5_pane_t9_ParamLimits

0xd557,	// (0x0001a026) main_cam5_pane_t9

0xd569,	// (0x0001a038) main_cam5_pane_t10_ParamLimits

0xd569,	// (0x0001a038) main_cam5_pane_t10

0xd57b,	// (0x0001a04a) main_cam5_pane_t11_ParamLimits

0xd57b,	// (0x0001a04a) main_cam5_pane_t11

0xd58d,	// (0x0001a05c) main_cam5_pane_t12_ParamLimits

0xd58d,	// (0x0001a05c) main_cam5_pane_t12

0xd5a2,	// (0x0001a071) main_cam5_pane_t13_ParamLimits

0xd5a2,	// (0x0001a071) main_cam5_pane_t13

0x000c,

0xf9dd,	// (0x0001c4ac) main_cam5_pane_t_ParamLimits

0xf9dd,	// (0x0001c4ac) main_cam5_pane_t

0x16c9,	// (0x0000e198) popup_scut_keymap_window_ParamLimits

0x16c9,	// (0x0000e198) popup_scut_keymap_window

0x66ee,	// (0x000131bd) aid_size_cell_brow_shortcut

0x9ff1,	// (0x00016ac0) bg_popup_window_pane_cp010

0x66fa,	// (0x000131c9) grid_scut_pane

0x6704,	// (0x000131d3) cell_scut_pane_ParamLimits

0x6704,	// (0x000131d3) cell_scut_pane

0x6719,	// (0x000131e8) cell_scut_pane_g1

0xd5bf,	// (0x0001a08e) cell_scut_pane_t1

0xd5ce,	// (0x0001a09d) cell_scut_pane_t2

0x6722,	// (0x000131f1) cell_scut_pane_t3

0x0002,

0xf9f8,	// (0x0001c4c7) cell_scut_pane_t

0x47f0,	// (0x000112bf) main_mup3_pane_g8_ParamLimits

0x47f0,	// (0x000112bf) main_mup3_pane_g8

0x5933,	// (0x00012402) area_vitu2_query_pane_ParamLimits

0x5933,	// (0x00012402) area_vitu2_query_pane

0x6498,	// (0x00012f67) input_focus_pane_cp08

0xd5dd,	// (0x0001a0ac) area_vitu2_query_pane_g1

0x6730,	// (0x000131ff) area_vitu2_query_pane_g2

0x0001,

0xf9ff,	// (0x0001c4ce) area_vitu2_query_pane_g

0x673f,	// (0x0001320e) area_vitu2_query_pane_t1_ParamLimits

0x673f,	// (0x0001320e) area_vitu2_query_pane_t1

0x6751,	// (0x00013220) area_vitu2_query_pane_t2_ParamLimits

0x6751,	// (0x00013220) area_vitu2_query_pane_t2

0x6763,	// (0x00013232) area_vitu2_query_pane_t3_ParamLimits

0x6763,	// (0x00013232) area_vitu2_query_pane_t3

0xd5e9,	// (0x0001a0b8) area_vitu2_query_pane_t4_ParamLimits

0xd5e9,	// (0x0001a0b8) area_vitu2_query_pane_t4

0xd611,	// (0x0001a0e0) area_vitu2_query_pane_t5_ParamLimits

0xd611,	// (0x0001a0e0) area_vitu2_query_pane_t5

0xd639,	// (0x0001a108) area_vitu2_query_pane_t6_ParamLimits

0xd639,	// (0x0001a108) area_vitu2_query_pane_t6

0x0006,

0xfa04,	// (0x0001c4d3) area_vitu2_query_pane_t_ParamLimits

0xfa04,	// (0x0001c4d3) area_vitu2_query_pane_t

0x678b,	// (0x0001325a) bg_button_pane_cp018

0x6797,	// (0x00013266) bg_button_pane_cp021

0x67a3,	// (0x00013272) bg_button_pane_cp022

0x67c2,	// (0x00013291) input_focus_pane_cp09

0x3418,	// (0x0000fee7) aid_size_touch_mv_arrow_left

0xa995,	// (0x00017464) aid_size_touch_mv_arrow_right

0x5fdd,	// (0x00012aac) main_cset_slider_pane_g16_ParamLimits

0x5fdd,	// (0x00012aac) main_cset_slider_pane_g16

0x5fe9,	// (0x00012ab8) main_cset_slider_pane_g17_ParamLimits

0x5fe9,	// (0x00012ab8) main_cset_slider_pane_g17

0x66d9,	// (0x000131a8) cell_cam4_burst_pane_g1_ParamLimits

0x959f,	// (0x0001606e) compa_mode_pane

0x61e2,	// (0x00012cb1) popup_vtel_slider_window_g3_ParamLimits

0x61e2,	// (0x00012cb1) popup_vtel_slider_window_g3

0x61f9,	// (0x00012cc8) popup_vtel_slider_window_g4_ParamLimits

0x61f9,	// (0x00012cc8) popup_vtel_slider_window_g4

0x6210,	// (0x00012cdf) popup_vtel_slider_window_t1_ParamLimits

0x6210,	// (0x00012cdf) popup_vtel_slider_window_t1

0x959f,	// (0x0001606e) main_cl_pane

0xbf79,	// (0x00018a48) popup_imed_adjust2_window_ParamLimits

0xabe5,	// (0x000176b4) bg_tb_trans_pane_cp05_ParamLimits

0xc8ee,	// (0x000193bd) popup_imed_adjust2_window_g1_ParamLimits

0xc8fd,	// (0x000193cc) popup_imed_adjust2_window_g2_ParamLimits

0xc8fd,	// (0x000193cc) popup_imed_adjust2_window_g2

0xc909,	// (0x000193d8) popup_imed_adjust2_window_g3_ParamLimits

0xc909,	// (0x000193d8) popup_imed_adjust2_window_g3

0x0002,

0xf76b,	// (0x0001c23a) popup_imed_adjust2_window_g_ParamLimits

0xf76b,	// (0x0001c23a) popup_imed_adjust2_window_g

0xc915,	// (0x000193e4) popup_imed_adjust2_window_t1_ParamLimits

0xc92d,	// (0x000193fc) slider_imed_adjust_pane_ParamLimits

0xc941,	// (0x00019410) slider_imed_adjust_pane_g1_ParamLimits

0xc951,	// (0x00019420) slider_imed_adjust_pane_g2_ParamLimits

0xc961,	// (0x00019430) slider_imed_adjust_pane_g3_ParamLimits

0xc972,	// (0x00019441) slider_imed_adjust_pane_g4_ParamLimits

0xf772,	// (0x0001c241) slider_imed_adjust_pane_g_ParamLimits

0x5709,	// (0x000121d8) aid_touch_area_cam4_ParamLimits

0x5709,	// (0x000121d8) aid_touch_area_cam4

0xcfdb,	// (0x00019aaa) battery_pane_cp01

0x57a1,	// (0x00012270) main_camera4_pane_g6_ParamLimits

0x57a1,	// (0x00012270) main_camera4_pane_g6

0x57c2,	// (0x00012291) main_camera4_pane_t2_ParamLimits

0x57c2,	// (0x00012291) main_camera4_pane_t2

0x0001,

0xf879,	// (0x0001c348) main_camera4_pane_t_ParamLimits

0xf879,	// (0x0001c348) main_camera4_pane_t

0x57f0,	// (0x000122bf) aid_touch_area_vid4_ParamLimits

0x57f0,	// (0x000122bf) aid_touch_area_vid4

0x5832,	// (0x00012301) main_video4_pane_g5_ParamLimits

0x5832,	// (0x00012301) main_video4_pane_g5

0x5853,	// (0x00012322) vid4_progress_pane_ParamLimits

0x5853,	// (0x00012322) vid4_progress_pane

0xd25d,	// (0x00019d2c) main_cset_slider_pane_g18_ParamLimits

0xd25d,	// (0x00019d2c) main_cset_slider_pane_g18

0xd4ad,	// (0x00019f7c) cell_cam4_burst_pane_g2_ParamLimits

0xd4ad,	// (0x00019f7c) cell_cam4_burst_pane_g2

0x0001,

0xf9d8,	// (0x0001c4a7) cell_cam4_burst_pane_g_ParamLimits

0xf9d8,	// (0x0001c4a7) cell_cam4_burst_pane_g

0x9d8c,	// (0x0001685b) bg_cl_pane_ParamLimits

0x9d8c,	// (0x0001685b) bg_cl_pane

0x67d2,	// (0x000132a1) cl_header_pane_ParamLimits

0x67d2,	// (0x000132a1) cl_header_pane

0x67e6,	// (0x000132b5) cl_listscroll_pane_ParamLimits

0x67e6,	// (0x000132b5) cl_listscroll_pane

0xd685,	// (0x0001a154) bg_cl_pane_g1

0xd68d,	// (0x0001a15c) bg_cl_pane_g2

0xd695,	// (0x0001a164) bg_cl_pane_g3

0xd69d,	// (0x0001a16c) bg_cl_pane_g4

0xd6a5,	// (0x0001a174) bg_cl_pane_g5

0xd6ad,	// (0x0001a17c) bg_cl_pane_g6

0xd6b5,	// (0x0001a184) bg_cl_pane_g7

0xd6bd,	// (0x0001a18c) bg_cl_pane_g8

0xd6c5,	// (0x0001a194) bg_cl_pane_g9

0x0008,

0xfa13,	// (0x0001c4e2) bg_cl_pane_g

0x67f6,	// (0x000132c5) aid_height_cl_leading_ParamLimits

0x67f6,	// (0x000132c5) aid_height_cl_leading

0x6802,	// (0x000132d1) aid_height_cl_text_ParamLimits

0x6802,	// (0x000132d1) aid_height_cl_text

0x95f2,	// (0x000160c1) bg_cl_header_pane_ParamLimits

0x95f2,	// (0x000160c1) bg_cl_header_pane

0x6821,	// (0x000132f0) cl_header_pane_g1_ParamLimits

0x6821,	// (0x000132f0) cl_header_pane_g1

0x6837,	// (0x00013306) cl_header_pane_t1_ParamLimits

0x6837,	// (0x00013306) cl_header_pane_t1

0xd6cd,	// (0x0001a19c) cl_list_pane

0xd6d6,	// (0x0001a1a5) hc_scroll_pane_cp01

0xa2a5,	// (0x00016d74) bg_cl_header_pane_g1

0xd104,	// (0x00019bd3) bg_cl_header_pane_g2

0xa2c5,	// (0x00016d94) bg_cl_header_pane_g3

0xd114,	// (0x00019be3) bg_cl_header_pane_g4

0xd10c,	// (0x00019bdb) bg_cl_header_pane_g5

0xd39b,	// (0x00019e6a) bg_cl_header_pane_g6

0xd12c,	// (0x00019bfb) bg_cl_header_pane_g7

0xd134,	// (0x00019c03) bg_cl_header_pane_g8

0xd124,	// (0x00019bf3) bg_cl_header_pane_g9

0x0008,

0xfa26,	// (0x0001c4f5) bg_cl_header_pane_g

0x6850,	// (0x0001331f) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x6850,	// (0x0001331f) hc_cl_list_double_graphic_heading_pane

0x6860,	// (0x0001332f) hc_cl_list_single_graphic_pane_ParamLimits

0x6860,	// (0x0001332f) hc_cl_list_single_graphic_pane

0x6873,	// (0x00013342) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x6873,	// (0x00013342) hc_cl_list_single_graphic_pane_g1

0x687f,	// (0x0001334e) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x687f,	// (0x0001334e) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa39,	// (0x0001c508) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa39,	// (0x0001c508) hc_cl_list_single_graphic_pane_g

0x6893,	// (0x00013362) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x6893,	// (0x00013362) hc_cl_list_single_graphic_pane_t1

0x6873,	// (0x00013342) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x6873,	// (0x00013342) hc_cl_list_double_graphic_heading_pane_g1

0x68a8,	// (0x00013377) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x68a8,	// (0x00013377) hc_cl_list_double_graphic_heading_pane_g2

0x68bc,	// (0x0001338b) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x68bc,	// (0x0001338b) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa3e,	// (0x0001c50d) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa3e,	// (0x0001c50d) hc_cl_list_double_graphic_heading_pane_g

0x68d0,	// (0x0001339f) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x68d0,	// (0x0001339f) hc_cl_list_double_graphic_heading_pane_t1

0x68e5,	// (0x000133b4) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x68e5,	// (0x000133b4) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa45,	// (0x0001c514) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa45,	// (0x0001c514) hc_cl_list_double_graphic_heading_pane_t

0xd6df,	// (0x0001a1ae) vid4_progress_pane_g1

0xd6ee,	// (0x0001a1bd) vid4_progress_pane_g2

0xd6fd,	// (0x0001a1cc) vid4_progress_pane_g3

0xd70c,	// (0x0001a1db) vid4_progress_pane_g4

0x0004,

0xfa4a,	// (0x0001c519) vid4_progress_pane_g

0xd718,	// (0x0001a1e7) vid4_progress_pane_t1

0xd72e,	// (0x0001a1fd) vid4_progress_pane_t2

0x0002,

0xfa55,	// (0x0001c524) vid4_progress_pane_t

0xd758,	// (0x0001a227) wait_bar_pane_cp07

0xc219,	// (0x00018ce8) blid_firmament_pane_ParamLimits

0xc25a,	// (0x00018d29) popup_blid_sat_info2_window_g1

0xc27e,	// (0x00018d4d) popup_blid_sat_info2_window_t3

0xc28c,	// (0x00018d5b) popup_blid_sat_info2_window_t4

0xc29a,	// (0x00018d69) popup_blid_sat_info2_window_t5

0xc2a8,	// (0x00018d77) popup_blid_sat_info2_window_t6

0xc2b8,	// (0x00018d87) popup_blid_sat_info2_window_t7

0xc2c6,	// (0x00018d95) popup_blid_sat_info2_window_t8

0xc2d4,	// (0x00018da3) popup_blid_sat_info2_window_t9

0xc2e2,	// (0x00018db1) popup_blid_sat_info2_window_t10

0xc39d,	// (0x00018e6c) aid_firma_cardinal_ParamLimits

0xc3b1,	// (0x00018e80) blid_firmament_pane_t1_ParamLimits

0xc3c8,	// (0x00018e97) blid_firmament_pane_t2_ParamLimits

0xc3df,	// (0x00018eae) blid_firmament_pane_t3_ParamLimits

0xc3f6,	// (0x00018ec5) blid_firmament_pane_t4_ParamLimits

0xf664,	// (0x0001c133) blid_firmament_pane_t_ParamLimits

0xc40d,	// (0x00018edc) blid_sat_info_pane_ParamLimits

0x95f2,	// (0x000160c1) main_cam_set_pane_ParamLimits

0x4fa2,	// (0x00011a71) aid_size_cell_colour_35_ParamLimits

0x4fc2,	// (0x00011a91) aid_size_cell_colour_112_ParamLimits

0x4fe2,	// (0x00011ab1) aid_size_cell_effect_ParamLimits

0xabe5,	// (0x000176b4) bg_tb_trans_pane_cp02_ParamLimits

0xa525,	// (0x00016ff4) heading_imed_pane_ParamLimits

0x5002,	// (0x00011ad1) listscroll_imed_pane_ParamLimits

0xb610,	// (0x000180df) popup_call2_audio_first_window_g5_ParamLimits

0xb610,	// (0x000180df) popup_call2_audio_first_window_g5

0x53d4,	// (0x00011ea3) aid_size_touch_image3_arrow_left_ParamLimits

0x53d4,	// (0x00011ea3) aid_size_touch_image3_arrow_left

0x53f4,	// (0x00011ec3) aid_size_touch_image3_arrow_right_ParamLimits

0x53f4,	// (0x00011ec3) aid_size_touch_image3_arrow_right

0xd743,	// (0x0001a212) vid4_progress_pane_t3

0x518b,	// (0x00011c5a) main_hwr_training_symbol_option_pane_ParamLimits

0x518b,	// (0x00011c5a) main_hwr_training_symbol_option_pane

0xcb1b,	// (0x000195ea) popup_hwr_training_preview_window_ParamLimits

0xcb1b,	// (0x000195ea) popup_hwr_training_preview_window

0x51a7,	// (0x00011c76) hwr_training_navi_pane_g5_ParamLimits

0x51a7,	// (0x00011c76) hwr_training_navi_pane_g5

0xd0f2,	// (0x00019bc1) popup_char_count_window

0x95f2,	// (0x000160c1) bg_popup_sub_pane_cp20_ParamLimits

0x631d,	// (0x00012dec) list_vitu2_match_list_pane_ParamLimits

0x632c,	// (0x00012dfb) vitu2_page_scroll_pane_ParamLimits

0x632c,	// (0x00012dfb) vitu2_page_scroll_pane

0xd793,	// (0x0001a262) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd793,	// (0x0001a262) list_single_hwr_training_symbol_option_pane

0xd7a6,	// (0x0001a275) list_single_hwr_training_symbol_option_pane_g1

0xd7ae,	// (0x0001a27d) list_single_hwr_training_symbol_option_pane_t1

0xd7bc,	// (0x0001a28b) bg_button_pane_cp023

0xd7c5,	// (0x0001a294) bg_button_pane_cp024

0x6920,	// (0x000133ef) vitu2_page_scroll_pane_g1

0x6928,	// (0x000133f7) vitu2_page_scroll_pane_g2

0x0001,

0xfa5c,	// (0x0001c52b) vitu2_page_scroll_pane_g

0x6930,	// (0x000133ff) vitu2_page_scroll_pane_t1

0xc43c,	// (0x00018f0b) popup_char_count_window_g1

0xd7f8,	// (0x0001a2c7) popup_char_count_window_g2

0xd801,	// (0x0001a2d0) popup_char_count_window_g3

0x0002,

0xfa61,	// (0x0001c530) popup_char_count_window_g

0xd80a,	// (0x0001a2d9) popup_char_count_window_t1

0x959f,	// (0x0001606e) main_vded2_pane

0xc8dc,	// (0x000193ab) aid_size_cell_imed_line

0xc8e6,	// (0x000193b5) grid_imed_line_width_pane

0xd070,	// (0x00019b3f) vid4_indicators_pane_g4

0xd818,	// (0x0001a2e7) cell_imed_line_width_pane_ParamLimits

0xd818,	// (0x0001a2e7) cell_imed_line_width_pane

0xd82a,	// (0x0001a2f9) cell_imed_line_width_pane_g1

0xd833,	// (0x0001a302) cell_imed_line_width_pane_g2

0x0001,

0xfa68,	// (0x0001c537) cell_imed_line_width_pane_g

0x693f,	// (0x0001340e) main_vded2_pane_g1_ParamLimits

0x693f,	// (0x0001340e) main_vded2_pane_g1

0x6955,	// (0x00013424) main_vded2_pane_g2_ParamLimits

0x6955,	// (0x00013424) main_vded2_pane_g2

0x0001,

0xfa6d,	// (0x0001c53c) main_vded2_pane_g_ParamLimits

0xfa6d,	// (0x0001c53c) main_vded2_pane_g

0x6965,	// (0x00013434) vded2_slider_pane_ParamLimits

0x6965,	// (0x00013434) vded2_slider_pane

0x6978,	// (0x00013447) aid_size_touch_vded2_end

0x6980,	// (0x0001344f) aid_size_touch_vded2_playhead

0x6988,	// (0x00013457) aid_size_touch_vded2_start

0x6990,	// (0x0001345f) vded2_slider_bg_pane

0x6999,	// (0x00013468) vded2_slider_pane_g1

0x69a2,	// (0x00013471) vded2_slider_pane_g2

0x69aa,	// (0x00013479) vded2_slider_pane_g3

0x0002,

0xfa72,	// (0x0001c541) vded2_slider_pane_g

0x69b3,	// (0x00013482) vded2_slider_bg_pane_g1

0x69bc,	// (0x0001348b) vded2_slider_bg_pane_g2

0x69c5,	// (0x00013494) vded2_slider_bg_pane_g3

0x0002,

0xfa79,	// (0x0001c548) vded2_slider_bg_pane_g

0x3725,	// (0x000101f4) aid_postcard_touch_down_pane_ParamLimits

0x3725,	// (0x000101f4) aid_postcard_touch_down_pane

0x3737,	// (0x00010206) aid_postcard_touch_up_pane_ParamLimits

0x3737,	// (0x00010206) aid_postcard_touch_up_pane

0x959f,	// (0x0001606e) main_blid2_pane

0xbf61,	// (0x00018a30) popup_blid2_search_window

0x959f,	// (0x0001606e) blid2_gps_pane

0x959f,	// (0x0001606e) blid2_navig_pane

0x959f,	// (0x0001606e) blid2_search_pane

0x959f,	// (0x0001606e) blid2_tripm_pane

0x69ce,	// (0x0001349d) blid2_search_pane_g1_ParamLimits

0x69ce,	// (0x0001349d) blid2_search_pane_g1

0x69e2,	// (0x000134b1) blid2_search_pane_t1_ParamLimits

0x69e2,	// (0x000134b1) blid2_search_pane_t1

0x69f4,	// (0x000134c3) aid_size_cell_blid2_gps_ParamLimits

0x69f4,	// (0x000134c3) aid_size_cell_blid2_gps

0x6a0c,	// (0x000134db) blid2_gps_pane_g1_ParamLimits

0x6a0c,	// (0x000134db) blid2_gps_pane_g1

0x6a20,	// (0x000134ef) grid_blid2_satellite_pane_ParamLimits

0x6a20,	// (0x000134ef) grid_blid2_satellite_pane

0x6a34,	// (0x00013503) blid2_navig_pane_g1_ParamLimits

0x6a34,	// (0x00013503) blid2_navig_pane_g1

0x6a40,	// (0x0001350f) blid2_navig_pane_t1_ParamLimits

0x6a40,	// (0x0001350f) blid2_navig_pane_t1

0x6a59,	// (0x00013528) blid2_navig_pane_t2_ParamLimits

0x6a59,	// (0x00013528) blid2_navig_pane_t2

0x0001,

0xfa80,	// (0x0001c54f) blid2_navig_pane_t_ParamLimits

0xfa80,	// (0x0001c54f) blid2_navig_pane_t

0x6a72,	// (0x00013541) blid2_navig_ring_pane_ParamLimits

0x6a72,	// (0x00013541) blid2_navig_ring_pane

0x6a87,	// (0x00013556) blid2_speed_pane_ParamLimits

0x6a87,	// (0x00013556) blid2_speed_pane

0x6a93,	// (0x00013562) blid2_tripm_pane_g1_ParamLimits

0x6a93,	// (0x00013562) blid2_tripm_pane_g1

0x6aa8,	// (0x00013577) blid2_tripm_pane_g2_ParamLimits

0x6aa8,	// (0x00013577) blid2_tripm_pane_g2

0x6abc,	// (0x0001358b) blid2_tripm_pane_g3_ParamLimits

0x6abc,	// (0x0001358b) blid2_tripm_pane_g3

0x6ad0,	// (0x0001359f) blid2_tripm_pane_g4_ParamLimits

0x6ad0,	// (0x0001359f) blid2_tripm_pane_g4

0x6ae4,	// (0x000135b3) blid2_tripm_pane_g5_ParamLimits

0x6ae4,	// (0x000135b3) blid2_tripm_pane_g5

0x0005,

0xfa85,	// (0x0001c554) blid2_tripm_pane_g_ParamLimits

0xfa85,	// (0x0001c554) blid2_tripm_pane_g

0x6b06,	// (0x000135d5) blid2_tripm_pane_t1_ParamLimits

0x6b06,	// (0x000135d5) blid2_tripm_pane_t1

0x6b1d,	// (0x000135ec) blid2_tripm_pane_t2_ParamLimits

0x6b1d,	// (0x000135ec) blid2_tripm_pane_t2

0x6b34,	// (0x00013603) blid2_tripm_pane_t3_ParamLimits

0x6b34,	// (0x00013603) blid2_tripm_pane_t3

0x0003,

0xfa92,	// (0x0001c561) blid2_tripm_pane_t_ParamLimits

0xfa92,	// (0x0001c561) blid2_tripm_pane_t

0x6b77,	// (0x00013646) cell_blid2_satellite_pane_ParamLimits

0x6b77,	// (0x00013646) cell_blid2_satellite_pane

0x6b8f,	// (0x0001365e) cell_blid2_satellite_pane_g1

0xd83b,	// (0x0001a30a) cell_blid2_satellite_pane_t1

0xa069,	// (0x00016b38) blid2_speed_pane_g1

0xd849,	// (0x0001a318) blid2_speed_pane_t1

0xd857,	// (0x0001a326) blid2_speed_pane_t2

0x0001,

0xfa9b,	// (0x0001c56a) blid2_speed_pane_t

0xa069,	// (0x00016b38) blid2_navig_ring_pane_g1

0x6b98,	// (0x00013667) blid2_navig_ring_pane_g2

0x6ba0,	// (0x0001366f) blid2_navig_ring_pane_g3

0x6ba8,	// (0x00013677) blid2_navig_ring_pane_g4

0x6bb0,	// (0x0001367f) blid2_navig_ring_pane_g5

0x0004,

0xfaa0,	// (0x0001c56f) blid2_navig_ring_pane_g

0x959f,	// (0x0001606e) bg_popup_window_pane_cp011

0xd865,	// (0x0001a334) popup_blid2_search_window_g1

0xd86d,	// (0x0001a33c) popup_blid2_search_window_t1

0xd87b,	// (0x0001a34a) popup_blid2_search_window_t2

0x0001,

0xfaab,	// (0x0001c57a) popup_blid2_search_window_t

0xa1b4,	// (0x00016c83) main_browser_pane_g1

0x9d8c,	// (0x0001685b) main_browser_pane_ParamLimits

0x95f2,	// (0x000160c1) bg_button_pane_cp011_ParamLimits

0x5c1b,	// (0x000126ea) cell_vitu2_function_pane_g1_ParamLimits

0xabe5,	// (0x000176b4) bg_popup_sub_pane_cp22_ParamLimits

0x6498,	// (0x00012f67) input_focus_pane_cp08_ParamLimits

0x64b3,	// (0x00012f82) popup_vitu2_query_button_pane_ParamLimits

0x64b3,	// (0x00012f82) popup_vitu2_query_button_pane

0x64c2,	// (0x00012f91) popup_vitu2_query_input_button_pane

0xd403,	// (0x00019ed2) popup_vitu2_query_window_g1_ParamLimits

0x64ca,	// (0x00012f99) popup_vitu2_query_window_g2_ParamLimits

0xf9ac,	// (0x0001c47b) popup_vitu2_query_window_g_ParamLimits

0x959f,	// (0x0001606e) bg_button_pane_cp026

0x6bb8,	// (0x00013687) popup_vitu2_query_input_button_pane_g1

0x959f,	// (0x0001606e) bg_button_pane_cp025

0xd889,	// (0x0001a358) popup_vitu2_query_button_pane_t1

0x450c,	// (0x00010fdb) main_mp3_pane_t6

0x451a,	// (0x00010fe9) popup_slider_window_cp01

0xcff5,	// (0x00019ac4) cam4_battery_pane

0xcff5,	// (0x00019ac4) cam4_battery_pane_cp02

0xcff5,	// (0x00019ac4) cam4_battery_pane_cp01

0xcff5,	// (0x00019ac4) cam4_battery_pane_cp03

0xa069,	// (0x00016b38) cam4_battery_pane_g1

0xd897,	// (0x0001a366) cam4_battery_pane_g2

0x0001,

0xfab0,	// (0x0001c57f) cam4_battery_pane_g

0xc2f0,	// (0x00018dbf) popup_blid_sat_info2_window_t11

0x3418,	// (0x0000fee7) aid_size_touch_mv_arrow_left_ParamLimits

0xa995,	// (0x00017464) aid_size_touch_mv_arrow_right_ParamLimits

0xa9ee,	// (0x000174bd) navi_pane_g1_ParamLimits

0xa9fa,	// (0x000174c9) navi_pane_g2_ParamLimits

0x343c,	// (0x0000ff0b) navi_pane_g3_ParamLimits

0xf365,	// (0x0001be34) navi_pane_g_ParamLimits

0x3459,	// (0x0000ff28) navi_pane_mv_t1_ParamLimits

0x500e,	// (0x00011add) grid_imed_effect_pane_ParamLimits

0x2303,	// (0x0000edd2) aid_placing_vt_slider_lsc

0xa0f6,	// (0x00016bc5) aid_placing_vt_slider_prt

0x95f2,	// (0x000160c1) bg_tb_trans_pane_cp01_ParamLimits

0xc554,	// (0x00019023) popup_image_details_window_g1_ParamLimits

0xc567,	// (0x00019036) popup_image_details_window_g2_ParamLimits

0xc57c,	// (0x0001904b) popup_image_details_window_g3_ParamLimits

0xc57c,	// (0x0001904b) popup_image_details_window_g3

0xf6a4,	// (0x0001c173) popup_image_details_window_g_ParamLimits

0xc590,	// (0x0001905f) popup_image_details_window_t1_ParamLimits

0xc5a2,	// (0x00019071) popup_image_details_window_t2_ParamLimits

0xc5bb,	// (0x0001908a) popup_image_details_window_t3_ParamLimits

0xc5cf,	// (0x0001909e) popup_image_details_window_t4_ParamLimits

0xc5ea,	// (0x000190b9) popup_image_details_window_t5_ParamLimits

0xf6ab,	// (0x0001c17a) popup_image_details_window_t_ParamLimits

0x680e,	// (0x000132dd) cl_header_name_pane_ParamLimits

0x680e,	// (0x000132dd) cl_header_name_pane

0x6bc0,	// (0x0001368f) cl_header_name_pane_t1_ParamLimits

0x6bc0,	// (0x0001368f) cl_header_name_pane_t1

0x6be1,	// (0x000136b0) cl_header_name_pane_t2_ParamLimits

0x6be1,	// (0x000136b0) cl_header_name_pane_t2

0x6c23,	// (0x000136f2) cl_header_name_pane_t3_ParamLimits

0x6c23,	// (0x000136f2) cl_header_name_pane_t3

0x0002,

0xfab5,	// (0x0001c584) cl_header_name_pane_t_ParamLimits

0xfab5,	// (0x0001c584) cl_header_name_pane_t

0xaa87,	// (0x00017556) navi_pane_mv_g2_ParamLimits

0xd0bd,	// (0x00019b8c) field_vitu2_entry_pane_g1_ParamLimits

0xd0c9,	// (0x00019b98) field_vitu2_entry_pane_g2_ParamLimits

0xabaf,	// (0x0001767e) field_vitu2_entry_pane_g3_ParamLimits

0xabaf,	// (0x0001767e) field_vitu2_entry_pane_g3

0xf8ab,	// (0x0001c37a) field_vitu2_entry_pane_g_ParamLimits

0x5aab,	// (0x0001257a) cell_vitu2_itu_pane_g1_ParamLimits

0x5ac3,	// (0x00012592) cell_vitu2_itu_pane_g2_ParamLimits

0x5ac3,	// (0x00012592) cell_vitu2_itu_pane_g2

0x0001,

0xf8b7,	// (0x0001c386) cell_vitu2_itu_pane_g_ParamLimits

0xf8b7,	// (0x0001c386) cell_vitu2_itu_pane_g

0x95f2,	// (0x000160c1) bg_vkb2_func_pane_cp05_ParamLimits

0x95f2,	// (0x000160c1) bg_vkb2_func_pane_cp05

0x95f2,	// (0x000160c1) bg_vkb2_func_pane_cp03

0x95f2,	// (0x000160c1) bg_vkb2_func_pane_cp04

0x95f2,	// (0x000160c1) bg_vkb2_func_pane_cp10_ParamLimits

0x95f2,	// (0x000160c1) bg_vkb2_func_pane_cp10

0x67b2,	// (0x00013281) bg_vkb2_func_pane_cp08

0x678b,	// (0x0001325a) bg_vkb2_func_pane_cp06

0x6797,	// (0x00013266) bg_vkb2_func_pane_cp07

0xd7ce,	// (0x0001a29d) bg_vkb2_func_pane_cp11_ParamLimits

0xd7ce,	// (0x0001a29d) bg_vkb2_func_pane_cp11

0xd7e3,	// (0x0001a2b2) bg_vkb2_func_pane_cp12_ParamLimits

0xd7e3,	// (0x0001a2b2) bg_vkb2_func_pane_cp12

0x959f,	// (0x0001606e) bg_vkb2_func_pane_cp09

0xd104,	// (0x00019bd3) bg_vkb2_func_pane_g1

0xa2c5,	// (0x00016d94) bg_vkb2_func_pane_g2

0xd10c,	// (0x00019bdb) bg_vkb2_func_pane_g3

0xd114,	// (0x00019be3) bg_vkb2_func_pane_g4

0xd39b,	// (0x00019e6a) bg_vkb2_func_pane_g5

0xd12c,	// (0x00019bfb) bg_vkb2_func_pane_g6

0xd134,	// (0x00019c03) bg_vkb2_func_pane_g7

0xd124,	// (0x00019bf3) bg_vkb2_func_pane_g8

0xa2a5,	// (0x00016d74) bg_vkb2_func_pane_g9

0x0008,

0xfabc,	// (0x0001c58b) bg_vkb2_func_pane_g

0x6af6,	// (0x000135c5) blid2_tripm_pane_g6_ParamLimits

0x6af6,	// (0x000135c5) blid2_tripm_pane_g6

0xce6a,	// (0x00019939) mp4_progress_pane_g1

0x6b65,	// (0x00013634) blid2_tripm_values_pane_ParamLimits

0x6b65,	// (0x00013634) blid2_tripm_values_pane

0x6c54,	// (0x00013723) blid2_tripm_values_pane_t1

0x6c62,	// (0x00013731) blid2_tripm_values_pane_t2

0x6c70,	// (0x0001373f) blid2_tripm_values_pane_t3

0x6c7e,	// (0x0001374d) blid2_tripm_values_pane_t4

0x6c8c,	// (0x0001375b) blid2_tripm_values_pane_t5

0x6c9a,	// (0x00013769) blid2_tripm_values_pane_t6

0x6ca8,	// (0x00013777) blid2_tripm_values_pane_t7

0x6cb6,	// (0x00013785) blid2_tripm_values_pane_t8

0x6cc4,	// (0x00013793) blid2_tripm_values_pane_t9

0x0008,

0xfacf,	// (0x0001c59e) blid2_tripm_values_pane_t

0x233d,	// (0x0000ee0c) call_video_pane_t1_ParamLimits

0x2357,	// (0x0000ee26) call_video_pane_t2_ParamLimits

0xf1fc,	// (0x0001bccb) call_video_pane_t_ParamLimits

0x36ad,	// (0x0001017c) msg_header_pane_g1_ParamLimits

0xaca2,	// (0x00017771) msg_header_pane_g2_ParamLimits

0xaca2,	// (0x00017771) msg_header_pane_g2

0x0001,

0xf408,	// (0x0001bed7) msg_header_pane_g_ParamLimits

0xf408,	// (0x0001bed7) msg_header_pane_g

0x9d8c,	// (0x0001685b) main_clock2_pane_ParamLimits

0x4d25,	// (0x000117f4) grid_clock2_toolbar_pane_ParamLimits

0x4d25,	// (0x000117f4) grid_clock2_toolbar_pane

0x4d25,	// (0x000117f4) listscroll_clock2_pane_ParamLimits

0x4d25,	// (0x000117f4) listscroll_clock2_pane

0x4e08,	// (0x000118d7) main_clock2_pane_t3_ParamLimits

0x4e08,	// (0x000118d7) main_clock2_pane_t3

0x4e2a,	// (0x000118f9) main_clock2_pane_t4_ParamLimits

0x4e2a,	// (0x000118f9) main_clock2_pane_t4

0xd8a1,	// (0x0001a370) cell_clock2_toolbar_pane

0xd8a9,	// (0x0001a378) cell_clock2_toolbar_pane_cp01

0xd8a9,	// (0x0001a378) cell_clock2_toolbar_pane_cp02

0xd8b1,	// (0x0001a380) cell_clock2_toolbar_pane_cp03

0xd8b9,	// (0x0001a388) list_clock2_pane

0xd8c1,	// (0x0001a390) scroll_pane_cp10

0xd8c9,	// (0x0001a398) list_single_clock2_pane_ParamLimits

0xd8c9,	// (0x0001a398) list_single_clock2_pane

0x9ff1,	// (0x00016ac0) list_highlight_pane_cp08

0xd8d6,	// (0x0001a3a5) list_single_clock2_pane_t1

0xd8e4,	// (0x0001a3b3) list_single_clock2_pane_t2

0x0001,

0xfae2,	// (0x0001c5b1) list_single_clock2_pane_t

0x959f,	// (0x0001606e) bg_button_pane_cp10

0xd8f2,	// (0x0001a3c1) cell_clock2_toolbar_pane_g1

0x36b9,	// (0x00010188) aid_main_viewer_pane_g1_ParamLimits

0x36b9,	// (0x00010188) aid_main_viewer_pane_g1

0x36c5,	// (0x00010194) aid_main_viewer_pane_g2_ParamLimits

0x36c5,	// (0x00010194) aid_main_viewer_pane_g2

0x36d1,	// (0x000101a0) aid_main_viewer_pane_g3_ParamLimits

0x36d1,	// (0x000101a0) aid_main_viewer_pane_g3

0x36e0,	// (0x000101af) aid_main_viewer_pane_g4_ParamLimits

0x36e0,	// (0x000101af) aid_main_viewer_pane_g4

0x0003,

0xf419,	// (0x0001bee8) aid_main_viewer_pane_g_ParamLimits

0xf419,	// (0x0001bee8) aid_main_viewer_pane_g

0x95f2,	// (0x000160c1) main_calc_pane_ParamLimits

0x3f19,	// (0x000109e8) main_dialer2_pane_ParamLimits

0x959f,	// (0x0001606e) main_cam6_pane

0x959f,	// (0x0001606e) main_vid6_pane

0x4d31,	// (0x00011800) listscroll_gen_pane_cp06_ParamLimits

0x4d31,	// (0x00011800) listscroll_gen_pane_cp06

0x4e4b,	// (0x0001191a) main_clock2_pane_t5_ParamLimits

0x4e4b,	// (0x0001191a) main_clock2_pane_t5

0x4ea3,	// (0x00011972) aid_call2_pane_cp10_ParamLimits

0x4eb5,	// (0x00011984) aid_call_pane_cp10_ParamLimits

0xa989,	// (0x00017458) popup_clock_analogue_window_cp10_g1_ParamLimits

0xa989,	// (0x00017458) popup_clock_analogue_window_cp10_g2_ParamLimits

0x4ec7,	// (0x00011996) popup_clock_analogue_window_cp10_g3_ParamLimits

0x4ec7,	// (0x00011996) popup_clock_analogue_window_cp10_g4_ParamLimits

0xa989,	// (0x00017458) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf760,	// (0x0001c22f) popup_clock_analogue_window_cp10_g_ParamLimits

0x4ed9,	// (0x000119a8) popup_clock_analogue_window_cp10_t1_ParamLimits

0xceca,	// (0x00019999) cell_dialer2_keypad_pane_g2_ParamLimits

0xceca,	// (0x00019999) cell_dialer2_keypad_pane_g2

0x0001,

0xf84a,	// (0x0001c319) cell_dialer2_keypad_pane_g_ParamLimits

0xf84a,	// (0x0001c319) cell_dialer2_keypad_pane_g

0x539d,	// (0x00011e6c) cell_dialer2_keypad_pane_t1

0x5ed7,	// (0x000129a6) main_cset_text2_pane_ParamLimits

0x5ed7,	// (0x000129a6) main_cset_text2_pane

0xd5dd,	// (0x0001a0ac) area_vitu2_query_pane_g1_ParamLimits

0x6730,	// (0x000131ff) area_vitu2_query_pane_g2_ParamLimits

0xf9ff,	// (0x0001c4ce) area_vitu2_query_pane_g_ParamLimits

0xd661,	// (0x0001a130) area_vitu2_query_pane_t7_ParamLimits

0xd661,	// (0x0001a130) area_vitu2_query_pane_t7

0x678b,	// (0x0001325a) bg_button_pane_cp018_ParamLimits

0x6797,	// (0x00013266) bg_button_pane_cp021_ParamLimits

0x67a3,	// (0x00013272) bg_button_pane_cp022_ParamLimits

0x67b2,	// (0x00013281) bg_vkb2_func_pane_cp08_ParamLimits

0x678b,	// (0x0001325a) bg_vkb2_func_pane_cp06_ParamLimits

0x6797,	// (0x00013266) bg_vkb2_func_pane_cp07_ParamLimits

0x67c2,	// (0x00013291) input_focus_pane_cp09_ParamLimits

0xd8fa,	// (0x0001a3c9) cam6_autofocus_pane_ParamLimits

0xd8fa,	// (0x0001a3c9) cam6_autofocus_pane

0x6cd2,	// (0x000137a1) cam6_image_uncrop_pane_ParamLimits

0x6cd2,	// (0x000137a1) cam6_image_uncrop_pane

0x6ce0,	// (0x000137af) cam6_indi_pane_ParamLimits

0x6ce0,	// (0x000137af) cam6_indi_pane

0x6cf6,	// (0x000137c5) cam6_mode_pane_ParamLimits

0x6cf6,	// (0x000137c5) cam6_mode_pane

0x6d08,	// (0x000137d7) cam6_timer_pane_ParamLimits

0x6d08,	// (0x000137d7) cam6_timer_pane

0x6d14,	// (0x000137e3) cam6_zoom_pane_ParamLimits

0x6d14,	// (0x000137e3) cam6_zoom_pane

0x6d21,	// (0x000137f0) cam6_mode_pane_g1_ParamLimits

0x6d21,	// (0x000137f0) cam6_mode_pane_g1

0x6d31,	// (0x00013800) cam6_mode_pane_g2_ParamLimits

0x6d31,	// (0x00013800) cam6_mode_pane_g2

0x6d41,	// (0x00013810) cam6_mode_pane_g3_ParamLimits

0x6d41,	// (0x00013810) cam6_mode_pane_g3

0x6d51,	// (0x00013820) cam6_mode_pane_g4_ParamLimits

0x6d51,	// (0x00013820) cam6_mode_pane_g4

0x0003,

0xfae7,	// (0x0001c5b6) cam6_mode_pane_g_ParamLimits

0xfae7,	// (0x0001c5b6) cam6_mode_pane_g

0xcdba,	// (0x00019889) bg_tb_trans_pane_cp08_ParamLimits

0xcdba,	// (0x00019889) bg_tb_trans_pane_cp08

0xd906,	// (0x0001a3d5) cam6_battery_pane_ParamLimits

0xd906,	// (0x0001a3d5) cam6_battery_pane

0xd91c,	// (0x0001a3eb) cam6_indi_pane_g1_ParamLimits

0xd91c,	// (0x0001a3eb) cam6_indi_pane_g1

0xd92e,	// (0x0001a3fd) cam6_indi_pane_g2_ParamLimits

0xd92e,	// (0x0001a3fd) cam6_indi_pane_g2

0xd940,	// (0x0001a40f) cam6_indi_pane_g3_ParamLimits

0xd940,	// (0x0001a40f) cam6_indi_pane_g3

0x0002,

0xfaf0,	// (0x0001c5bf) cam6_indi_pane_g_ParamLimits

0xfaf0,	// (0x0001c5bf) cam6_indi_pane_g

0xd952,	// (0x0001a421) cam6_indi_pane_t1_ParamLimits

0xd952,	// (0x0001a421) cam6_indi_pane_t1

0x58ad,	// (0x0001237c) cam6_autofocus_pane_g1

0x58b5,	// (0x00012384) cam6_autofocus_pane_g2

0x58bd,	// (0x0001238c) cam6_autofocus_pane_g3

0x58c5,	// (0x00012394) cam6_autofocus_pane_g4

0x0003,

0xfaf7,	// (0x0001c5c6) cam6_autofocus_pane_g

0xd978,	// (0x0001a447) cam6_timer_pane_g1

0xd980,	// (0x0001a44f) cam6_timer_pane_t1

0xd98e,	// (0x0001a45d) cam6_zoom_cont_pane

0xd996,	// (0x0001a465) cam6_zoom_pane_g1

0xd99f,	// (0x0001a46e) cam6_zoom_pane_g2

0x6d61,	// (0x00013830) cam6_zoom_pane_g3

0x0002,

0xfb00,	// (0x0001c5cf) cam6_zoom_pane_g

0xa069,	// (0x00016b38) cam6_battery_pane_g1

0xa069,	// (0x00016b38) cam6_battery_pane_g2

0x0001,

0xf3c9,	// (0x0001be98) cam6_battery_pane_g

0xd996,	// (0x0001a465) cam6_zoom_cont_pane_g1

0xd99f,	// (0x0001a46e) cam6_zoom_cont_pane_g2

0xd9a8,	// (0x0001a477) cam6_zoom_cont_pane_g3

0x0002,

0xfb07,	// (0x0001c5d6) cam6_zoom_cont_pane_g

0x6d7f,	// (0x0001384e) cam6_mode_pane_cp_ParamLimits

0x6d7f,	// (0x0001384e) cam6_mode_pane_cp

0x6d91,	// (0x00013860) cam6_zoom_pane_cp_ParamLimits

0x6d91,	// (0x00013860) cam6_zoom_pane_cp

0x6d9d,	// (0x0001386c) vid6_image_uncrop_cif_pane_ParamLimits

0x6d9d,	// (0x0001386c) vid6_image_uncrop_cif_pane

0x6dab,	// (0x0001387a) vid6_image_uncrop_nhd_pane_ParamLimits

0x6dab,	// (0x0001387a) vid6_image_uncrop_nhd_pane

0x6db8,	// (0x00013887) vid6_image_uncrop_vga_pane_ParamLimits

0x6db8,	// (0x00013887) vid6_image_uncrop_vga_pane

0x6dc5,	// (0x00013894) vid6_image_uncrop_wvga_pane_ParamLimits

0x6dc5,	// (0x00013894) vid6_image_uncrop_wvga_pane

0x6dd2,	// (0x000138a1) vid6_indi_pane_ParamLimits

0x6dd2,	// (0x000138a1) vid6_indi_pane

0xcdba,	// (0x00019889) bg_tb_trans_pane_cp09_ParamLimits

0xcdba,	// (0x00019889) bg_tb_trans_pane_cp09

0xd9bc,	// (0x0001a48b) cam6_battery_pane_cp_ParamLimits

0xd9bc,	// (0x0001a48b) cam6_battery_pane_cp

0xd9c8,	// (0x0001a497) vid6_indi_pane_g1_ParamLimits

0xd9c8,	// (0x0001a497) vid6_indi_pane_g1

0xd9da,	// (0x0001a4a9) vid6_indi_pane_g2_ParamLimits

0xd9da,	// (0x0001a4a9) vid6_indi_pane_g2

0xd9ec,	// (0x0001a4bb) vid6_indi_pane_g3_ParamLimits

0xd9ec,	// (0x0001a4bb) vid6_indi_pane_g3

0xda01,	// (0x0001a4d0) vid6_indi_pane_g4_ParamLimits

0xda01,	// (0x0001a4d0) vid6_indi_pane_g4

0xda16,	// (0x0001a4e5) vid6_indi_pane_g5_ParamLimits

0xda16,	// (0x0001a4e5) vid6_indi_pane_g5

0x0004,

0xfb0e,	// (0x0001c5dd) vid6_indi_pane_g_ParamLimits

0xfb0e,	// (0x0001c5dd) vid6_indi_pane_g

0xda30,	// (0x0001a4ff) vid6_indi_pane_t1_ParamLimits

0xda30,	// (0x0001a4ff) vid6_indi_pane_t1

0xda46,	// (0x0001a515) vid6_indi_pane_t2_ParamLimits

0xda46,	// (0x0001a515) vid6_indi_pane_t2

0xda6e,	// (0x0001a53d) vid6_indi_pane_t3_ParamLimits

0xda6e,	// (0x0001a53d) vid6_indi_pane_t3

0xda96,	// (0x0001a565) vid6_indi_pane_t4_ParamLimits

0xda96,	// (0x0001a565) vid6_indi_pane_t4

0x0003,

0xfb19,	// (0x0001c5e8) vid6_indi_pane_t_ParamLimits

0xfb19,	// (0x0001c5e8) vid6_indi_pane_t

0xdaba,	// (0x0001a589) wait_bar_pane_cp08

0x6de9,	// (0x000138b8) main_cset_text2_pane_t1_ParamLimits

0x6de9,	// (0x000138b8) main_cset_text2_pane_t1

0x6d6a,	// (0x00013839) listscroll_gen_pane_cp06_t1_ParamLimits

0x6d6a,	// (0x00013839) listscroll_gen_pane_cp06_t1

0x959f,	// (0x0001606e) main_cam6_set_pane

0x9ce6,	// (0x000167b5) bg_tb_trans_pane_cp06_ParamLimits

0xcffd,	// (0x00019acc) cam4_indicators_pane_g1_ParamLimits

0xd00d,	// (0x00019adc) cam4_indicators_pane_g2_ParamLimits

0xf887,	// (0x0001c356) cam4_indicators_pane_g_ParamLimits

0xd02d,	// (0x00019afc) cam4_indicators_pane_t1_ParamLimits

0x95f2,	// (0x000160c1) bg_tb_trans_pane_cp07_ParamLimits

0xcffd,	// (0x00019acc) vid4_indicators_pane_g1_ParamLimits

0xd04f,	// (0x00019b1e) vid4_indicators_pane_g2_ParamLimits

0xd05f,	// (0x00019b2e) vid4_indicators_pane_g3_ParamLimits

0xd070,	// (0x00019b3f) vid4_indicators_pane_g4_ParamLimits

0xf899,	// (0x0001c368) vid4_indicators_pane_g_ParamLimits

0xd08c,	// (0x00019b5b) vid4_indicators_pane_t1_ParamLimits

0xd6df,	// (0x0001a1ae) vid4_progress_pane_g1_ParamLimits

0xd6ee,	// (0x0001a1bd) vid4_progress_pane_g2_ParamLimits

0xd6fd,	// (0x0001a1cc) vid4_progress_pane_g3_ParamLimits

0xd70c,	// (0x0001a1db) vid4_progress_pane_g4_ParamLimits

0xfa4a,	// (0x0001c519) vid4_progress_pane_g_ParamLimits

0xd718,	// (0x0001a1e7) vid4_progress_pane_t1_ParamLimits

0xd72e,	// (0x0001a1fd) vid4_progress_pane_t2_ParamLimits

0xd743,	// (0x0001a212) vid4_progress_pane_t3_ParamLimits

0xfa55,	// (0x0001c524) vid4_progress_pane_t_ParamLimits

0xd758,	// (0x0001a227) wait_bar_pane_cp07_ParamLimits

0x6e04,	// (0x000138d3) main_cam6_set_pane_g2_ParamLimits

0x6e04,	// (0x000138d3) main_cam6_set_pane_g2

0x6e26,	// (0x000138f5) main_cset6_listscroll_pane_ParamLimits

0x6e26,	// (0x000138f5) main_cset6_listscroll_pane

0x6e40,	// (0x0001390f) main_cset6_slider_pane_ParamLimits

0x6e40,	// (0x0001390f) main_cset6_slider_pane

0x6e56,	// (0x00013925) main_cset6_text2_pane_ParamLimits

0x6e56,	// (0x00013925) main_cset6_text2_pane

0xdaca,	// (0x0001a599) main_cset6_text_pane

0xd220,	// (0x00019cef) main_cset_list_pane_copy1_ParamLimits

0xd220,	// (0x00019cef) main_cset_list_pane_copy1

0xd230,	// (0x00019cff) scroll_pane_cp028_copy1

0x6e64,	// (0x00013933) cset_list_set_pane_copy1

0x6e76,	// (0x00013945) aid_position_infowindow_above_copy1

0x6e7e,	// (0x0001394d) aid_position_infowindow_below_copy1

0x6e86,	// (0x00013955) cset_list_set_pane_g1_copy1

0x6e8e,	// (0x0001395d) cset_list_set_pane_g3_copy1_ParamLimits

0x6e8e,	// (0x0001395d) cset_list_set_pane_g3_copy1

0x6e9d,	// (0x0001396c) cset_list_set_pane_t1_copy1_ParamLimits

0x6e9d,	// (0x0001396c) cset_list_set_pane_t1_copy1

0x95f2,	// (0x000160c1) list_highlight_pane_cp021_copy1_ParamLimits

0x95f2,	// (0x000160c1) list_highlight_pane_cp021_copy1

0xdad2,	// (0x0001a5a1) cset6_slider_pane_ParamLimits

0xdad2,	// (0x0001a5a1) cset6_slider_pane

0xdafe,	// (0x0001a5cd) main_cset6_slider_pane_g1_ParamLimits

0xdafe,	// (0x0001a5cd) main_cset6_slider_pane_g1

0x6eb2,	// (0x00013981) main_cset6_slider_pane_g2_ParamLimits

0x6eb2,	// (0x00013981) main_cset6_slider_pane_g2

0xd245,	// (0x00019d14) main_cset6_slider_pane_g3_ParamLimits

0xd245,	// (0x00019d14) main_cset6_slider_pane_g3

0x5f95,	// (0x00012a64) main_cset6_slider_pane_g4_ParamLimits

0x5f95,	// (0x00012a64) main_cset6_slider_pane_g4

0x5fdd,	// (0x00012aac) main_cset6_slider_pane_g5_ParamLimits

0x5fdd,	// (0x00012aac) main_cset6_slider_pane_g5

0xd245,	// (0x00019d14) main_cset6_slider_pane_g7_ParamLimits

0xd245,	// (0x00019d14) main_cset6_slider_pane_g7

0xd251,	// (0x00019d20) main_cset6_slider_pane_g8_ParamLimits

0xd251,	// (0x00019d20) main_cset6_slider_pane_g8

0x5f7d,	// (0x00012a4c) main_cset6_slider_pane_g9_ParamLimits

0x5f7d,	// (0x00012a4c) main_cset6_slider_pane_g9

0x5f89,	// (0x00012a58) main_cset6_slider_pane_g10_ParamLimits

0x5f89,	// (0x00012a58) main_cset6_slider_pane_g10

0x5f95,	// (0x00012a64) main_cset6_slider_pane_g11_ParamLimits

0x5f95,	// (0x00012a64) main_cset6_slider_pane_g11

0x5fa1,	// (0x00012a70) main_cset6_slider_pane_g12_ParamLimits

0x5fa1,	// (0x00012a70) main_cset6_slider_pane_g12

0x5fad,	// (0x00012a7c) main_cset6_slider_pane_g13_ParamLimits

0x5fad,	// (0x00012a7c) main_cset6_slider_pane_g13

0x5fb9,	// (0x00012a88) main_cset6_slider_pane_g14_ParamLimits

0x5fb9,	// (0x00012a88) main_cset6_slider_pane_g14

0x6eda,	// (0x000139a9) main_cset6_slider_pane_g15_ParamLimits

0x6eda,	// (0x000139a9) main_cset6_slider_pane_g15

0x5fdd,	// (0x00012aac) main_cset6_slider_pane_g16_ParamLimits

0x5fdd,	// (0x00012aac) main_cset6_slider_pane_g16

0x5fe9,	// (0x00012ab8) main_cset6_slider_pane_g17_ParamLimits

0x5fe9,	// (0x00012ab8) main_cset6_slider_pane_g17

0x0011,

0xfb22,	// (0x0001c5f1) main_cset6_slider_pane_g_ParamLimits

0xfb22,	// (0x0001c5f1) main_cset6_slider_pane_g

0xdb26,	// (0x0001a5f5) main_cset6_slider_pane_t1_ParamLimits

0xdb26,	// (0x0001a5f5) main_cset6_slider_pane_t1

0xdb67,	// (0x0001a636) main_cset6_slider_pane_t2_ParamLimits

0xdb67,	// (0x0001a636) main_cset6_slider_pane_t2

0xdb92,	// (0x0001a661) main_cset6_slider_pane_t3_ParamLimits

0xdb92,	// (0x0001a661) main_cset6_slider_pane_t3

0x6ef2,	// (0x000139c1) main_cset6_slider_pane_t4_ParamLimits

0x6ef2,	// (0x000139c1) main_cset6_slider_pane_t4

0x6f1d,	// (0x000139ec) main_cset6_slider_pane_t5_ParamLimits

0x6f1d,	// (0x000139ec) main_cset6_slider_pane_t5

0xdbbd,	// (0x0001a68c) main_cset6_slider_pane_t7_ParamLimits

0xdbbd,	// (0x0001a68c) main_cset6_slider_pane_t7

0x6f48,	// (0x00013a17) main_cset6_slider_pane_t8_ParamLimits

0x6f48,	// (0x00013a17) main_cset6_slider_pane_t8

0x6f6c,	// (0x00013a3b) main_cset6_slider_pane_t9_ParamLimits

0x6f6c,	// (0x00013a3b) main_cset6_slider_pane_t9

0x6f90,	// (0x00013a5f) main_cset6_slider_pane_t10_ParamLimits

0x6f90,	// (0x00013a5f) main_cset6_slider_pane_t10

0x6fb4,	// (0x00013a83) main_cset6_slider_pane_t11_ParamLimits

0x6fb4,	// (0x00013a83) main_cset6_slider_pane_t11

0xdbf3,	// (0x0001a6c2) main_cset6_slider_pane_t14_ParamLimits

0xdbf3,	// (0x0001a6c2) main_cset6_slider_pane_t14

0xdc2c,	// (0x0001a6fb) main_cset6_slider_pane_t15_ParamLimits

0xdc2c,	// (0x0001a6fb) main_cset6_slider_pane_t15

0x000b,

0xfb47,	// (0x0001c616) main_cset6_slider_pane_t_ParamLimits

0xfb47,	// (0x0001c616) main_cset6_slider_pane_t

0xd333,	// (0x00019e02) cset_slider_pane_g1_copy1

0xd33c,	// (0x00019e0b) cset_slider_pane_g2_copy1

0xd345,	// (0x00019e14) cset_slider_pane_g3_copy1

0x959f,	// (0x0001606e) bg_popup_sub_pane_cp011_copy1

0xd40f,	// (0x00019ede) main_cset_text_pane_g1_copy1

0xd417,	// (0x00019ee6) main_cset_text_pane_t1_copy1

0xd425,	// (0x00019ef4) main_cset_text_pane_t2_copy1

0xd433,	// (0x00019f02) main_cset_text_pane_t3_copy1

0xd441,	// (0x00019f10) main_cset_text_pane_t4_copy1

0xd44f,	// (0x00019f1e) main_cset_text_pane_t5_copy1

0xd45d,	// (0x00019f2c) main_cset_text_pane_t6_copy1

0xd46b,	// (0x00019f3a) main_cset_text_pane_t7_copy1

0x6ff5,	// (0x00013ac4) main_cset_text2_pane_t1_copy1

0x95f2,	// (0x000160c1) main_ncimui_pane

0x4127,	// (0x00010bf6) popup_query_ncimui_window_ParamLimits

0x4127,	// (0x00010bf6) popup_query_ncimui_window

0xc6c7,	// (0x00019196) field_cale_ev2_pane_g4_ParamLimits

0xc6c7,	// (0x00019196) field_cale_ev2_pane_g4

0x528f,	// (0x00011d5e) cell_video_dialer_keypad_pane_g2_ParamLimits

0x528f,	// (0x00011d5e) cell_video_dialer_keypad_pane_g2

0x0001,

0xf821,	// (0x0001c2f0) cell_video_dialer_keypad_pane_g_ParamLimits

0xf821,	// (0x0001c2f0) cell_video_dialer_keypad_pane_g

0x52a7,	// (0x00011d76) cell_video_dialer_keypad_pane_t1

0x959f,	// (0x0001606e) bg_popup_window_pane_cp012

0xbea3,	// (0x00018972) heading_pane_cp06

0xdcb5,	// (0x0001a784) ncim_query_content_pane

0x959f,	// (0x0001606e) bg_popup_heading_pane_cp01

0xdcbd,	// (0x0001a78c) ncim_heading_pane_t1

0xdccb,	// (0x0001a79a) ncim_indicator_popup_pane

0xdcdd,	// (0x0001a7ac) ncim_query_button_pane

0xdcf1,	// (0x0001a7c0) ncim_query_content_pane_t1

0xdd03,	// (0x0001a7d2) ncim_query_content_pane_t2

0x0005,

0xfb8b,	// (0x0001c65a) ncim_query_content_pane_t

0xdd3d,	// (0x0001a80c) ncim_query_list_pane

0xdd4f,	// (0x0001a81e) ncim_query_popup_pane

0xdccb,	// (0x0001a79a) ncim_indicator_popup_pane_ParamLimits

0x7134,	// (0x00013c03) ncim_query_content_pane_g1_ParamLimits

0x7134,	// (0x00013c03) ncim_query_content_pane_g1

0xdcf1,	// (0x0001a7c0) ncim_query_content_pane_t1_ParamLimits

0xdd03,	// (0x0001a7d2) ncim_query_content_pane_t2_ParamLimits

0x7140,	// (0x00013c0f) ncim_query_content_pane_t3_ParamLimits

0x7140,	// (0x00013c0f) ncim_query_content_pane_t3

0x7168,	// (0x00013c37) ncim_query_content_pane_t4_ParamLimits

0x7168,	// (0x00013c37) ncim_query_content_pane_t4

0x7190,	// (0x00013c5f) ncim_query_content_pane_t5_ParamLimits

0x7190,	// (0x00013c5f) ncim_query_content_pane_t5

0xdd15,	// (0x0001a7e4) ncim_query_content_pane_t6_ParamLimits

0xdd15,	// (0x0001a7e4) ncim_query_content_pane_t6

0xfb8b,	// (0x0001c65a) ncim_query_content_pane_t_ParamLimits

0xdd3d,	// (0x0001a80c) ncim_query_list_pane_ParamLimits

0xdd4f,	// (0x0001a81e) ncim_query_popup_pane_ParamLimits

0xdd63,	// (0x0001a832) wait_bar_pane_cp04

0x959f,	// (0x0001606e) input_focus_pane_cp011

0xdd6b,	// (0x0001a83a) ncim_query_popup_pane_t1

0xdd79,	// (0x0001a848) ncim_list_query_list_pane_ParamLimits

0xdd79,	// (0x0001a848) ncim_list_query_list_pane

0x959f,	// (0x0001606e) bg_button_pane_cp027

0xdd8c,	// (0x0001a85b) ncim_query_button_pane_g1

0x959f,	// (0x0001606e) list_highlight_pane_cp012

0xdd96,	// (0x0001a865) ncim_list_query_list_pane_g1

0xdd9e,	// (0x0001a86d) ncim_list_query_list_pane_t1

0xd01d,	// (0x00019aec) cam4_indicators_pane_g3_ParamLimits

0xd01d,	// (0x00019aec) cam4_indicators_pane_g3

0xd07c,	// (0x00019b4b) vid4_indicators_pane_g5_ParamLimits

0xd07c,	// (0x00019b4b) vid4_indicators_pane_g5

0xa59c,	// (0x0001706b) vid4_progress_pane_g5_ParamLimits

0xa59c,	// (0x0001706b) vid4_progress_pane_g5

0x7024,	// (0x00013af3) main_ncimui_pane_g1

0x708a,	// (0x00013b59) ncimui_group_query_pane_ParamLimits

0x708a,	// (0x00013b59) ncimui_group_query_pane

0x70d2,	// (0x00013ba1) ncimui_list_pane_ParamLimits

0x70d2,	// (0x00013ba1) ncimui_list_pane

0x70f7,	// (0x00013bc6) ncimui_text_pane_ParamLimits

0x70f7,	// (0x00013bc6) ncimui_text_pane

0x71b8,	// (0x00013c87) ncimui_text_pane_t1_ParamLimits

0x71b8,	// (0x00013c87) ncimui_text_pane_t1

0xddb5,	// (0x0001a884) ncimui_list_single_graphic_pane_ParamLimits

0xddb5,	// (0x0001a884) ncimui_list_single_graphic_pane

0x71d6,	// (0x00013ca5) ncimui_query_pane_ParamLimits

0x71d6,	// (0x00013ca5) ncimui_query_pane

0x959f,	// (0x0001606e) list_highlight_pane_cp013

0xddc5,	// (0x0001a894) ncim_list_query_list_pane_t1_copy1

0xddd3,	// (0x0001a8a2) ncim_list_single_graphic_pane_g1

0xdddb,	// (0x0001a8aa) ncim_query_button_pane_cp01

0xdde7,	// (0x0001a8b6) ncim_query_entry_pane_ParamLimits

0xdde7,	// (0x0001a8b6) ncim_query_entry_pane

0xddfa,	// (0x0001a8c9) ncimui_query_pane_g1

0xde06,	// (0x0001a8d5) ncimui_query_pane_t1_ParamLimits

0xde06,	// (0x0001a8d5) ncimui_query_pane_t1

0x95f2,	// (0x000160c1) input_focus_pane_cp012

0xde1f,	// (0x0001a8ee) ncim_query_entry_pane_t1

0x9d8c,	// (0x0001685b) main_im_pane_ParamLimits

0x95f2,	// (0x000160c1) main_mobtv_pane_ParamLimits

0x95f2,	// (0x000160c1) main_mobtv_pane

0x5f7d,	// (0x00012a4c) main_cset6_slider_pane_g18_ParamLimits

0x5f7d,	// (0x00012a4c) main_cset6_slider_pane_g18

0x5fad,	// (0x00012a7c) main_cset6_slider_pane_g19_ParamLimits

0x5fad,	// (0x00012a7c) main_cset6_slider_pane_g19

0x9d10,	// (0x000167df) bg_main_mobtv_pane_ParamLimits

0x9d10,	// (0x000167df) bg_main_mobtv_pane

0x71e6,	// (0x00013cb5) main_mobtv_info_pane

0x71ef,	// (0x00013cbe) main_mobtv_loading_pane_ParamLimits

0x71ef,	// (0x00013cbe) main_mobtv_loading_pane

0xde31,	// (0x0001a900) main_mobtv_pg_channel_list_pane

0xde3b,	// (0x0001a90a) main_mobtv_pg_hdr_pane

0x71fc,	// (0x00013ccb) main_mobtv_programe_curr_pane_ParamLimits

0x71fc,	// (0x00013ccb) main_mobtv_programe_curr_pane

0x7209,	// (0x00013cd8) main_mobtv_programe_next_pane_ParamLimits

0x7209,	// (0x00013cd8) main_mobtv_programe_next_pane

0xde44,	// (0x0001a913) popup_mobtv_noti_window

0xa069,	// (0x00016b38) main_tv_pg_hdr_pane_g1

0xde4c,	// (0x0001a91b) main_tv_pg_hdr_pane_g2

0xde54,	// (0x0001a923) main_tv_pg_hdr_pane_g3

0xde5c,	// (0x0001a92b) main_tv_pg_hdr_pane_g4

0xde64,	// (0x0001a933) main_tv_pg_hdr_pane_g5

0xde6c,	// (0x0001a93b) main_tv_pg_hdr_pane_g6

0xde74,	// (0x0001a943) main_tv_pg_hdr_pane_g7

0xde7c,	// (0x0001a94b) main_tv_pg_hdr_pane_g8

0xde84,	// (0x0001a953) main_tv_pg_hdr_pane_g9

0xde8c,	// (0x0001a95b) main_tv_pg_hdr_pane_g10

0xde96,	// (0x0001a965) main_tv_pg_hdr_pane_g11

0x000a,

0xfb98,	// (0x0001c667) main_tv_pg_hdr_pane_g

0xdea0,	// (0x0001a96f) main_tv_pg_hdr_pane_t1

0xdeae,	// (0x0001a97d) main_tv_pg_hdr_pane_t2

0xdebc,	// (0x0001a98b) main_tv_pg_hdr_pane_t3

0xdeca,	// (0x0001a999) main_tv_pg_hdr_pane_t4

0xded8,	// (0x0001a9a7) main_tv_pg_hdr_pane_t5

0x0004,

0xfbaf,	// (0x0001c67e) main_tv_pg_hdr_pane_t

0xdee6,	// (0x0001a9b5) single_mobtv_pg_channel_pane_ParamLimits

0xdee6,	// (0x0001a9b5) single_mobtv_pg_channel_pane

0xdef8,	// (0x0001a9c7) single_mobtv_pg_channel_table_pane

0xdf01,	// (0x0001a9d0) single_mobtv_pg_channel_thumb_pane

0xdf0a,	// (0x0001a9d9) single_tv_pg_channel_pane_g1

0xdf13,	// (0x0001a9e2) single_tv_pg_channel_pane_g2

0x0001,

0xfbba,	// (0x0001c689) single_tv_pg_channel_pane_g

0x9ce6,	// (0x000167b5) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x9ce6,	// (0x000167b5) bg_single_mobtv_pg_channel_thumb_pane

0xdf1c,	// (0x0001a9eb) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdf1c,	// (0x0001a9eb) single_mobtv_pg_channel_thumb_pane_g1

0xdf2a,	// (0x0001a9f9) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xdf2a,	// (0x0001a9f9) single_mobtv_pg_channel_thumb_pane_g2

0xdf36,	// (0x0001aa05) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xdf36,	// (0x0001aa05) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfbbf,	// (0x0001c68e) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfbbf,	// (0x0001c68e) single_mobtv_pg_channel_thumb_pane_g

0xdf42,	// (0x0001aa11) single_mobtv_pg_channel_thumb_pane_t1

0xdf50,	// (0x0001aa1f) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfbc6,	// (0x0001c695) single_mobtv_pg_channel_thumb_pane_t

0xa069,	// (0x00016b38) bg_single_mobtv_pg_channel_table_pane_g1

0xa069,	// (0x00016b38) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf3c9,	// (0x0001be98) bg_single_mobtv_pg_channel_table_pane_g

0xdf5e,	// (0x0001aa2d) single_mobtv_pg_channel_table_pane_t1

0xdf6c,	// (0x0001aa3b) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfbcb,	// (0x0001c69a) single_mobtv_pg_channel_table_pane_t

0x721e,	// (0x00013ced) main_mobtv_info_pane_g1_ParamLimits

0x721e,	// (0x00013ced) main_mobtv_info_pane_g1

0x723a,	// (0x00013d09) main_mobtv_info_pane_t1_ParamLimits

0x723a,	// (0x00013d09) main_mobtv_info_pane_t1

0x72a0,	// (0x00013d6f) main_mobtv_info_pane_t2_ParamLimits

0x72a0,	// (0x00013d6f) main_mobtv_info_pane_t2

0x0002,

0xfbd5,	// (0x0001c6a4) main_mobtv_info_pane_t_ParamLimits

0xfbd5,	// (0x0001c6a4) main_mobtv_info_pane_t

0x7323,	// (0x00013df2) wait_bar_pane_cp05

0x7333,	// (0x00013e02) main_mobtv_loading_pane_g1_ParamLimits

0x7333,	// (0x00013e02) main_mobtv_loading_pane_g1

0x7344,	// (0x00013e13) main_mobtv_loading_pane_g2_ParamLimits

0x7344,	// (0x00013e13) main_mobtv_loading_pane_g2

0x7350,	// (0x00013e1f) main_mobtv_loading_pane_g3_ParamLimits

0x7350,	// (0x00013e1f) main_mobtv_loading_pane_g3

0x0002,

0xfbdc,	// (0x0001c6ab) main_mobtv_loading_pane_g_ParamLimits

0xfbdc,	// (0x0001c6ab) main_mobtv_loading_pane_g

0xdf7a,	// (0x0001aa49) main_mobtv_loading_pane_t1_ParamLimits

0xdf7a,	// (0x0001aa49) main_mobtv_loading_pane_t1

0xdf92,	// (0x0001aa61) main_mobtv_loading_pane_t2_ParamLimits

0xdf92,	// (0x0001aa61) main_mobtv_loading_pane_t2

0x0001,

0xfbe3,	// (0x0001c6b2) main_mobtv_loading_pane_t_ParamLimits

0xfbe3,	// (0x0001c6b2) main_mobtv_loading_pane_t

0x7361,	// (0x00013e30) wait_bar_pane_cp06_ParamLimits

0x7361,	// (0x00013e30) wait_bar_pane_cp06

0xdfb6,	// (0x0001aa85) main_mobtv_programe_curr_pane_t1

0xdfc4,	// (0x0001aa93) main_mobtv_programe_curr_pane_t2

0x0001,

0xfbe8,	// (0x0001c6b7) main_mobtv_programe_curr_pane_t

0xdfd2,	// (0x0001aaa1) main_mobtv_programe_next_pane_t1

0xdfe0,	// (0x0001aaaf) main_mobtv_programe_next_pane_t2

0xdfee,	// (0x0001aabd) main_mobtv_programe_next_pane_t3

0x0002,

0xfbed,	// (0x0001c6bc) main_mobtv_programe_next_pane_t

0x959f,	// (0x0001606e) bg_popup_mobtv_noti_window_pane

0xdffc,	// (0x0001aacb) popup_mobtv_noti_window_g1

0xe004,	// (0x0001aad3) popup_mobtv_noti_window_t1

0xe012,	// (0x0001aae1) popup_mobtv_noti_window_t2

0x0001,

0xfbf4,	// (0x0001c6c3) popup_mobtv_noti_window_t

0xa069,	// (0x00016b38) bg_popup_mobtv_noti_window_pane_g1

0x959f,	// (0x0001606e) sc_clock_pane

0x959f,	// (0x0001606e) main_fs_bigclock_pane

0x6b4f,	// (0x0001361e) blid2_tripm_pane_t4_ParamLimits

0x6b4f,	// (0x0001361e) blid2_tripm_pane_t4

0x7370,	// (0x00013e3f) sc_clock_pane_g1_ParamLimits

0x7370,	// (0x00013e3f) sc_clock_pane_g1

0x7382,	// (0x00013e51) sc_clock_pane_t1_ParamLimits

0x7382,	// (0x00013e51) sc_clock_pane_t1

0x73a4,	// (0x00013e73) sc_clock_pane_t2_ParamLimits

0x73a4,	// (0x00013e73) sc_clock_pane_t2

0x73ba,	// (0x00013e89) sc_clock_pane_t3_ParamLimits

0x73ba,	// (0x00013e89) sc_clock_pane_t3

0x0004,

0xfbf9,	// (0x0001c6c8) sc_clock_pane_t_ParamLimits

0xfbf9,	// (0x0001c6c8) sc_clock_pane_t

0x819a,	// (0x00014c69) main_fs_bigclock_indicator_pane_ParamLimits

0x819a,	// (0x00014c69) main_fs_bigclock_indicator_pane

0x7456,	// (0x00013f25) main_fs_bigclock_pane_g1_ParamLimits

0x7456,	// (0x00013f25) main_fs_bigclock_pane_g1

0x81a6,	// (0x00014c75) main_fs_bigclock_pane_t1_ParamLimits

0x81a6,	// (0x00014c75) main_fs_bigclock_pane_t1

0x81b8,	// (0x00014c87) main_fs_bigclock_pane_t2_ParamLimits

0x81b8,	// (0x00014c87) main_fs_bigclock_pane_t2

0x81ca,	// (0x00014c99) main_fs_bigclock_pane_t3_ParamLimits

0x81ca,	// (0x00014c99) main_fs_bigclock_pane_t3

0x0002,

0xfdbd,	// (0x0001c88c) main_fs_bigclock_pane_t_ParamLimits

0xfdbd,	// (0x0001c88c) main_fs_bigclock_pane_t

0xea9d,	// (0x0001b56c) main_fs_bigclock_indicator_pane_g1

0xdce5,	// (0x0001a7b4) ncim_query_content_pane_g2_ParamLimits

0xdce5,	// (0x0001a7b4) ncim_query_content_pane_g2

0x0001,

0xfb86,	// (0x0001c655) ncim_query_content_pane_g_ParamLimits

0xfb86,	// (0x0001c655) ncim_query_content_pane_g

0x73d1,	// (0x00013ea0) sc_clock_pane_t4_ParamLimits

0x73d1,	// (0x00013ea0) sc_clock_pane_t4

0x95f2,	// (0x000160c1) main_radioblah_pane

0xcf65,	// (0x00019a34) cell_call4_button_pane_t1_copy1_ParamLimits

0xcf65,	// (0x00019a34) cell_call4_button_pane_t1_copy1

0x703c,	// (0x00013b0b) main_ncimui_pane_t1_ParamLimits

0x703c,	// (0x00013b0b) main_ncimui_pane_t1

0x7056,	// (0x00013b25) main_ncimui_pane_t2_ParamLimits

0x7056,	// (0x00013b25) main_ncimui_pane_t2

0x0002,

0xfb7f,	// (0x0001c64e) main_ncimui_pane_t_ParamLimits

0xfb7f,	// (0x0001c64e) main_ncimui_pane_t

0xe153,	// (0x0001ac22) main_radioblah_anim_pane_ParamLimits

0xe153,	// (0x0001ac22) main_radioblah_anim_pane

0xe164,	// (0x0001ac33) main_radioblah_info_pane_ParamLimits

0xe164,	// (0x0001ac33) main_radioblah_info_pane

0xe178,	// (0x0001ac47) main_radioblah_pane_t1_ParamLimits

0xe178,	// (0x0001ac47) main_radioblah_pane_t1

0xe194,	// (0x0001ac63) main_radioblah_pane_t2_ParamLimits

0xe194,	// (0x0001ac63) main_radioblah_pane_t2

0x0003,

0xfc1a,	// (0x0001c6e9) main_radioblah_pane_t_ParamLimits

0xfc1a,	// (0x0001c6e9) main_radioblah_pane_t

0x74a0,	// (0x00013f6f) main_radioblah_rocker_ctrl_pane_ParamLimits

0x74a0,	// (0x00013f6f) main_radioblah_rocker_ctrl_pane

0xe1dc,	// (0x0001acab) main_radioblah_info_pane_t1_ParamLimits

0xe1dc,	// (0x0001acab) main_radioblah_info_pane_t1

0x74f4,	// (0x00013fc3) main_radioblah_info_pane_t2_ParamLimits

0x74f4,	// (0x00013fc3) main_radioblah_info_pane_t2

0x0003,

0xfc23,	// (0x0001c6f2) main_radioblah_info_pane_t_ParamLimits

0xfc23,	// (0x0001c6f2) main_radioblah_info_pane_t

0xa069,	// (0x00016b38) main_radioblah_rocker_ctrl_pane_g1

0x75a2,	// (0x00014071) main_radioblah_rocker_ctrl_pane_g2

0x75aa,	// (0x00014079) main_radioblah_rocker_ctrl_pane_g3

0x75b2,	// (0x00014081) main_radioblah_rocker_ctrl_pane_g4

0x75ba,	// (0x00014089) main_radioblah_rocker_ctrl_pane_g5

0x75c2,	// (0x00014091) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc2c,	// (0x0001c6fb) main_radioblah_rocker_ctrl_pane_g

0x6ff5,	// (0x00013ac4) main_cset_text2_pane_t1_copy1_ParamLimits

0xcfed,	// (0x00019abc) cam4_image_uncrop_qvga_pane

0xd047,	// (0x00019b16) vid4_image_uncrop_qcif_pane

0xd8fa,	// (0x0001a3c9) cam6_image_uncrop_qvga_pane_ParamLimits

0xd8fa,	// (0x0001a3c9) cam6_image_uncrop_qvga_pane

0xd9b0,	// (0x0001a47f) vid6_image_uncrop_qcif_pane_ParamLimits

0xd9b0,	// (0x0001a47f) vid6_image_uncrop_qcif_pane

0x959f,	// (0x0001606e) bg_popup_preview_window_pane_cp03

0xdc8b,	// (0x0001a75a) list_cset_text2_pane

0xdc93,	// (0x0001a762) main_cset6_text2_pane_g1

0xdc9b,	// (0x0001a76a) main_cset6_text2_pane_t1

0x75ca,	// (0x00014099) list_cset_text2_pane_t1_ParamLimits

0x75ca,	// (0x00014099) list_cset_text2_pane_t1

0x95f2,	// (0x000160c1) main_radioblah_pane_ParamLimits

0x7311,	// (0x00013de0) main_mobtv_info_pane_t3_ParamLimits

0x7311,	// (0x00013de0) main_mobtv_info_pane_t3

0x748e,	// (0x00013f5d) main_radioblah_pane_g1

0x74c8,	// (0x00013f97) main_radioblah_info_pane_g1

0x7547,	// (0x00014016) main_radioblah_info_pane_t3_ParamLimits

0x7547,	// (0x00014016) main_radioblah_info_pane_t3

0x3029,	// (0x0000faf8) highlight_cell_cale_month_pane_ParamLimits

0x3029,	// (0x0000faf8) highlight_cell_cale_month_pane

0x959f,	// (0x0001606e) main_phob_fisheye_pane

0xc768,	// (0x00019237) scroll_pane_cp0031_ParamLimits

0xc768,	// (0x00019237) scroll_pane_cp0031

0xdaba,	// (0x0001a589) wait_bar_pane_cp08_ParamLimits

0x6e64,	// (0x00013933) cset_list_set_pane_copy1_ParamLimits

0xe216,	// (0x0001ace5) highlight_cell_cale_month_pane_g1

0x75e3,	// (0x000140b2) highlight_cell_cale_month_pane_t1

0xe21e,	// (0x0001aced) list_gen_pane_cp01

0xd230,	// (0x00019cff) scroll_pane_01

0x75f1,	// (0x000140c0) list_single_double_fisheye_pane

0x75fa,	// (0x000140c9) list_double_fisheye_pane_g1_ParamLimits

0x75fa,	// (0x000140c9) list_double_fisheye_pane_g1

0x7606,	// (0x000140d5) list_double_fisheye_pane_g2_ParamLimits

0x7606,	// (0x000140d5) list_double_fisheye_pane_g2

0x7612,	// (0x000140e1) list_double_fisheye_pane_g3_ParamLimits

0x7612,	// (0x000140e1) list_double_fisheye_pane_g3

0x0004,

0xfc39,	// (0x0001c708) list_double_fisheye_pane_g_ParamLimits

0xfc39,	// (0x0001c708) list_double_fisheye_pane_g

0x7636,	// (0x00014105) list_double_fisheye_pane_t1_ParamLimits

0x7636,	// (0x00014105) list_double_fisheye_pane_t1

0x7651,	// (0x00014120) list_double_fisheye_pane_t2_ParamLimits

0x7651,	// (0x00014120) list_double_fisheye_pane_t2

0x0001,

0xfc44,	// (0x0001c713) list_double_fisheye_pane_t_ParamLimits

0xfc44,	// (0x0001c713) list_double_fisheye_pane_t

0x959f,	// (0x0001606e) main_call5_pane

0x73fa,	// (0x00013ec9) sc_swipe_pane_ParamLimits

0x73fa,	// (0x00013ec9) sc_swipe_pane

0x7684,	// (0x00014153) call5_image_pane_ParamLimits

0x7684,	// (0x00014153) call5_image_pane

0x7699,	// (0x00014168) call5_swipe_1_pane_ParamLimits

0x7699,	// (0x00014168) call5_swipe_1_pane

0x76aa,	// (0x00014179) call5_swipe_2_pane_ParamLimits

0x76aa,	// (0x00014179) call5_swipe_2_pane

0x76cf,	// (0x0001419e) popup_call5_audio_first_window_ParamLimits

0x76cf,	// (0x0001419e) popup_call5_audio_first_window

0x9ce6,	// (0x000167b5) call5_swipe_1_pane_g1_ParamLimits

0x9ce6,	// (0x000167b5) call5_swipe_1_pane_g1

0xe227,	// (0x0001acf6) call5_swipe_1_pane_g2_ParamLimits

0xe227,	// (0x0001acf6) call5_swipe_1_pane_g2

0x0001,

0xfc49,	// (0x0001c718) call5_swipe_1_pane_g_ParamLimits

0xfc49,	// (0x0001c718) call5_swipe_1_pane_g

0xe233,	// (0x0001ad02) call5_swipe_1_pane_t1_ParamLimits

0xe233,	// (0x0001ad02) call5_swipe_1_pane_t1

0x9ce6,	// (0x000167b5) call5_swipe_2_pane_g1_ParamLimits

0x9ce6,	// (0x000167b5) call5_swipe_2_pane_g1

0xe248,	// (0x0001ad17) call5_swipe_2_pane_g2_ParamLimits

0xe248,	// (0x0001ad17) call5_swipe_2_pane_g2

0x0001,

0xfc4e,	// (0x0001c71d) call5_swipe_2_pane_g_ParamLimits

0xfc4e,	// (0x0001c71d) call5_swipe_2_pane_g

0xe254,	// (0x0001ad23) call5_swipe_2_pane_t1_ParamLimits

0xe254,	// (0x0001ad23) call5_swipe_2_pane_t1

0xe269,	// (0x0001ad38) sc_swipe_pane_g1_ParamLimits

0xe269,	// (0x0001ad38) sc_swipe_pane_g1

0xe276,	// (0x0001ad45) sc_swipe_pane_g2_ParamLimits

0xe276,	// (0x0001ad45) sc_swipe_pane_g2

0x0001,

0xfc53,	// (0x0001c722) sc_swipe_pane_g_ParamLimits

0xfc53,	// (0x0001c722) sc_swipe_pane_g

0xe282,	// (0x0001ad51) sc_swipe_pane_t1_ParamLimits

0xe282,	// (0x0001ad51) sc_swipe_pane_t1

0x959f,	// (0x0001606e) main_cmail_launcher_pane

0x76de,	// (0x000141ad) aid_size_cell_cmail_l_ParamLimits

0x76de,	// (0x000141ad) aid_size_cell_cmail_l

0x76f7,	// (0x000141c6) grid_cmail_l_pane_ParamLimits

0x76f7,	// (0x000141c6) grid_cmail_l_pane

0x770c,	// (0x000141db) cell_cmail_l_pane_ParamLimits

0x770c,	// (0x000141db) cell_cmail_l_pane

0x772e,	// (0x000141fd) cell_cmail_l_pane_g1_ParamLimits

0x772e,	// (0x000141fd) cell_cmail_l_pane_g1

0x773e,	// (0x0001420d) cell_cmail_l_pane_t1_ParamLimits

0x773e,	// (0x0001420d) cell_cmail_l_pane_t1

0xe297,	// (0x0001ad66) cell_cmail_l_pane_t2_ParamLimits

0xe297,	// (0x0001ad66) cell_cmail_l_pane_t2

0x0001,

0xfc58,	// (0x0001c727) cell_cmail_l_pane_t_ParamLimits

0xfc58,	// (0x0001c727) cell_cmail_l_pane_t

0x95f2,	// (0x000160c1) grid_highlight_pane_cp018_ParamLimits

0x95f2,	// (0x000160c1) grid_highlight_pane_cp018

0x15da,	// (0x0000e0a9) main2_pane_ParamLimits

0x15da,	// (0x0000e0a9) main2_pane

0x9e85,	// (0x00016954) popup_sp_fs_action_menu_bg_pane_g1

0x9e8d,	// (0x0001695c) popup_sp_fs_action_menu_bg_pane_g2

0x9e95,	// (0x00016964) popup_sp_fs_action_menu_bg_pane_g3

0x9e9d,	// (0x0001696c) popup_sp_fs_action_menu_bg_pane_g4

0x9ea5,	// (0x00016974) popup_sp_fs_action_menu_bg_pane_g5

0x9ead,	// (0x0001697c) popup_sp_fs_action_menu_bg_pane_g6

0x9eb5,	// (0x00016984) popup_sp_fs_action_menu_bg_pane_g7

0x9ebd,	// (0x0001698c) popup_sp_fs_action_menu_bg_pane_g8

0x9ec5,	// (0x00016994) popup_sp_fs_action_menu_bg_pane_g9

0x9ecd,	// (0x0001699c) popup_sp_fs_action_menu_bg_pane_g10

0x9ecd,	// (0x0001699c) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf11f,	// (0x0001bbee) popup_sp_fs_action_menu_bg_pane_g

0xa083,	// (0x00016b52) list_medium_line_x2_t3_g3_g1_ParamLimits

0xa083,	// (0x00016b52) list_medium_line_x2_t3_g3_g1

0xa08f,	// (0x00016b5e) list_medium_line_x2_t3_g3_g2_ParamLimits

0xa08f,	// (0x00016b5e) list_medium_line_x2_t3_g3_g2

0xa083,	// (0x00016b52) list_medium_line_x2_t3_g3_g3_ParamLimits

0xa083,	// (0x00016b52) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1cd,	// (0x0001bc9c) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1cd,	// (0x0001bc9c) list_medium_line_x2_t3_g3_g

0xa09b,	// (0x00016b6a) list_medium_line_x2_t3_g3_t1_ParamLimits

0xa09b,	// (0x00016b6a) list_medium_line_x2_t3_g3_t1

0xa09b,	// (0x00016b6a) list_medium_line_x2_t3_g3_t2_ParamLimits

0xa09b,	// (0x00016b6a) list_medium_line_x2_t3_g3_t2

0xa0ae,	// (0x00016b7d) list_medium_line_x2_t3_g3_t3_ParamLimits

0xa0ae,	// (0x00016b7d) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1d4,	// (0x0001bca3) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1d4,	// (0x0001bca3) list_medium_line_x2_t3_g3_t

0xa083,	// (0x00016b52) list_medium_line_x2_t3_g2_g1_ParamLimits

0xa083,	// (0x00016b52) list_medium_line_x2_t3_g2_g1

0xa083,	// (0x00016b52) list_medium_line_x2_t3_g2_g2_ParamLimits

0xa083,	// (0x00016b52) list_medium_line_x2_t3_g2_g2

0x0001,

0xf1db,	// (0x0001bcaa) list_medium_line_x2_t3_g2_g_ParamLimits

0xf1db,	// (0x0001bcaa) list_medium_line_x2_t3_g2_g

0xa09b,	// (0x00016b6a) list_medium_line_x2_t3_g2_t1_ParamLimits

0xa09b,	// (0x00016b6a) list_medium_line_x2_t3_g2_t1

0xa09b,	// (0x00016b6a) list_medium_line_x2_t3_g2_t2_ParamLimits

0xa09b,	// (0x00016b6a) list_medium_line_x2_t3_g2_t2

0xa0ae,	// (0x00016b7d) list_medium_line_x2_t3_g2_t3_ParamLimits

0xa0ae,	// (0x00016b7d) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1d4,	// (0x0001bca3) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1d4,	// (0x0001bca3) list_medium_line_x2_t3_g2_t

0xa083,	// (0x00016b52) list_medium_line_x2_t4_g4_g1_ParamLimits

0xa083,	// (0x00016b52) list_medium_line_x2_t4_g4_g1

0xa08f,	// (0x00016b5e) list_medium_line_x2_t4_g4_g2_ParamLimits

0xa08f,	// (0x00016b5e) list_medium_line_x2_t4_g4_g2

0xa08f,	// (0x00016b5e) list_medium_line_x2_t4_g4_g3_ParamLimits

0xa08f,	// (0x00016b5e) list_medium_line_x2_t4_g4_g3

0xa083,	// (0x00016b52) list_medium_line_x2_t4_g4_g4_ParamLimits

0xa083,	// (0x00016b52) list_medium_line_x2_t4_g4_g4

0x0003,

0xf1e0,	// (0x0001bcaf) list_medium_line_x2_t4_g4_g_ParamLimits

0xf1e0,	// (0x0001bcaf) list_medium_line_x2_t4_g4_g

0xa09b,	// (0x00016b6a) list_medium_line_x2_t4_g4_t1_ParamLimits

0xa09b,	// (0x00016b6a) list_medium_line_x2_t4_g4_t1

0xa09b,	// (0x00016b6a) list_medium_line_x2_t4_g4_t2_ParamLimits

0xa09b,	// (0x00016b6a) list_medium_line_x2_t4_g4_t2

0xa09b,	// (0x00016b6a) list_medium_line_x2_t4_g4_t3_ParamLimits

0xa09b,	// (0x00016b6a) list_medium_line_x2_t4_g4_t3

0xa0ae,	// (0x00016b7d) list_medium_line_x2_t4_g4_t4_ParamLimits

0xa0ae,	// (0x00016b7d) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1e9,	// (0x0001bcb8) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1e9,	// (0x0001bcb8) list_medium_line_x2_t4_g4_t

0xa083,	// (0x00016b52) list_medium_line_x2_t2_g4_g1_ParamLimits

0xa083,	// (0x00016b52) list_medium_line_x2_t2_g4_g1

0xa08f,	// (0x00016b5e) list_medium_line_x2_t2_g4_g2_ParamLimits

0xa08f,	// (0x00016b5e) list_medium_line_x2_t2_g4_g2

0xa08f,	// (0x00016b5e) list_medium_line_x2_t2_g4_g3_ParamLimits

0xa08f,	// (0x00016b5e) list_medium_line_x2_t2_g4_g3

0xa083,	// (0x00016b52) list_medium_line_x2_t2_g4_g4_ParamLimits

0xa083,	// (0x00016b52) list_medium_line_x2_t2_g4_g4

0x0003,

0xf1e0,	// (0x0001bcaf) list_medium_line_x2_t2_g4_g_ParamLimits

0xf1e0,	// (0x0001bcaf) list_medium_line_x2_t2_g4_g

0xa09b,	// (0x00016b6a) list_medium_line_x2_t2_g4_t1_ParamLimits

0xa09b,	// (0x00016b6a) list_medium_line_x2_t2_g4_t1

0xa0ae,	// (0x00016b7d) list_medium_line_x2_t2_g4_t2_ParamLimits

0xa0ae,	// (0x00016b7d) list_medium_line_x2_t2_g4_t2

0x0001,

0xf250,	// (0x0001bd1f) list_medium_line_x2_t2_g4_t_ParamLimits

0xf250,	// (0x0001bd1f) list_medium_line_x2_t2_g4_t

0xa083,	// (0x00016b52) list_medium_line_x2_t2_g3_g1_ParamLimits

0xa083,	// (0x00016b52) list_medium_line_x2_t2_g3_g1

0xa08f,	// (0x00016b5e) list_medium_line_x2_t2_g3_g2_ParamLimits

0xa08f,	// (0x00016b5e) list_medium_line_x2_t2_g3_g2

0xa083,	// (0x00016b52) list_medium_line_x2_t2_g3_g3_ParamLimits

0xa083,	// (0x00016b52) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1cd,	// (0x0001bc9c) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1cd,	// (0x0001bc9c) list_medium_line_x2_t2_g3_g

0xa09b,	// (0x00016b6a) list_medium_line_x2_t2_g3_t1_ParamLimits

0xa09b,	// (0x00016b6a) list_medium_line_x2_t2_g3_t1

0xa0ae,	// (0x00016b7d) list_medium_line_x2_t2_g3_t2_ParamLimits

0xa0ae,	// (0x00016b7d) list_medium_line_x2_t2_g3_t2

0x0001,

0xf250,	// (0x0001bd1f) list_medium_line_x2_t2_g3_t_ParamLimits

0xf250,	// (0x0001bd1f) list_medium_line_x2_t2_g3_t

0x3186,	// (0x0000fc55) main_sp_fs_list_pane_ParamLimits

0x3186,	// (0x0000fc55) main_sp_fs_list_pane

0x3193,	// (0x0000fc62) sp_fs_scroll_pane_ParamLimits

0x3193,	// (0x0000fc62) sp_fs_scroll_pane

0xa5fd,	// (0x000170cc) list_medium_line_x2_t3_t1

0xa5fd,	// (0x000170cc) list_medium_line_x2_t3_t2

0xa60c,	// (0x000170db) list_medium_line_x2_t3_t3

0x0002,

0xf29b,	// (0x0001bd6a) list_medium_line_x2_t3_t

0xa5fd,	// (0x000170cc) list_medium_line_x3_t4_t1

0xa5fd,	// (0x000170cc) list_medium_line_x3_t4_t2

0xa5fd,	// (0x000170cc) list_medium_line_x3_t4_t3

0xa5fd,	// (0x000170cc) list_medium_line_x3_t4_t4

0x0003,

0xf2a2,	// (0x0001bd71) list_medium_line_x3_t4_t

0xa5fd,	// (0x000170cc) list_medium_line_x4_t5_t1

0xa5fd,	// (0x000170cc) list_medium_line_x4_t5_t2

0xa5fd,	// (0x000170cc) list_medium_line_x4_t5_t3

0xa5fd,	// (0x000170cc) list_medium_line_x4_t5_t4

0xa5fd,	// (0x000170cc) list_medium_line_x4_t5_t5

0x0004,

0xf2ab,	// (0x0001bd7a) list_medium_line_x4_t5_t

0xa083,	// (0x00016b52) list_medium_line_t4_g4_g1_ParamLimits

0xa083,	// (0x00016b52) list_medium_line_t4_g4_g1

0xa083,	// (0x00016b52) list_medium_line_t4_g4_g2_ParamLimits

0xa083,	// (0x00016b52) list_medium_line_t4_g4_g2

0xa083,	// (0x00016b52) list_medium_line_t4_g4_g3_ParamLimits

0xa083,	// (0x00016b52) list_medium_line_t4_g4_g3

0xa083,	// (0x00016b52) list_medium_line_t4_g4_g4_ParamLimits

0xa083,	// (0x00016b52) list_medium_line_t4_g4_g4

0x0003,

0xf2b6,	// (0x0001bd85) list_medium_line_t4_g4_g_ParamLimits

0xf2b6,	// (0x0001bd85) list_medium_line_t4_g4_g

0xa09b,	// (0x00016b6a) list_medium_line_t4_g4_t1_ParamLimits

0xa09b,	// (0x00016b6a) list_medium_line_t4_g4_t1

0xa09b,	// (0x00016b6a) list_medium_line_t4_g4_t2_ParamLimits

0xa09b,	// (0x00016b6a) list_medium_line_t4_g4_t2

0xa09b,	// (0x00016b6a) list_medium_line_t4_g4_t3_ParamLimits

0xa09b,	// (0x00016b6a) list_medium_line_t4_g4_t3

0xa09b,	// (0x00016b6a) list_medium_line_t4_g4_t4_ParamLimits

0xa09b,	// (0x00016b6a) list_medium_line_t4_g4_t4

0x0003,

0xf2bf,	// (0x0001bd8e) list_medium_line_t4_g4_t_ParamLimits

0xf2bf,	// (0x0001bd8e) list_medium_line_t4_g4_t

0x323f,	// (0x0000fd0e) chi_dic_find_pane_g1

0x3f2d,	// (0x000109fc) main_tport_pane

0xa5fd,	// (0x000170cc) list_medium_line_plain_t1

0xa083,	// (0x00016b52) list_medium_line_t2_g2_g1_ParamLimits

0xa083,	// (0x00016b52) list_medium_line_t2_g2_g1

0xd3c3,	// (0x00019e92) list_medium_line_t2_g2_g2_ParamLimits

0xd3c3,	// (0x00019e92) list_medium_line_t2_g2_g2

0x0001,

0xf990,	// (0x0001c45f) list_medium_line_t2_g2_g_ParamLimits

0xf990,	// (0x0001c45f) list_medium_line_t2_g2_g

0xa09b,	// (0x00016b6a) list_medium_line_t2_g2_t1_ParamLimits

0xa09b,	// (0x00016b6a) list_medium_line_t2_g2_t1

0xa09b,	// (0x00016b6a) list_medium_line_t2_g2_t2_ParamLimits

0xa09b,	// (0x00016b6a) list_medium_line_t2_g2_t2

0x0001,

0xf995,	// (0x0001c464) list_medium_line_t2_g2_t_ParamLimits

0xf995,	// (0x0001c464) list_medium_line_t2_g2_t

0xd768,	// (0x0001a237) aid_sp_fs_list_icon_a_sm

0xd770,	// (0x0001a23f) aid_sp_fs_list_icon_d

0xd778,	// (0x0001a247) aid_sp_fs_text_primary

0xd781,	// (0x0001a250) aid_sp_fs_text_secondary

0xd78a,	// (0x0001a259) list_medium_line

0xd78a,	// (0x0001a259) list_medium_line_g2

0xd78a,	// (0x0001a259) list_medium_line_g3

0xd78a,	// (0x0001a259) list_medium_line_plain

0xd78a,	// (0x0001a259) list_medium_line_plain_t2

0xd78a,	// (0x0001a259) list_medium_line_plain_t3

0xd78a,	// (0x0001a259) list_medium_line_right_icon

0xd78a,	// (0x0001a259) list_medium_line_right_iconx2

0xd78a,	// (0x0001a259) list_medium_line_t2

0xd78a,	// (0x0001a259) list_medium_line_t2_g2

0xd78a,	// (0x0001a259) list_medium_line_t2_g3

0xd78a,	// (0x0001a259) list_medium_line_t2_right_icon

0xd78a,	// (0x0001a259) list_medium_line_t2_right_iconx2

0xd78a,	// (0x0001a259) list_medium_line_t3

0xd78a,	// (0x0001a259) list_medium_line_t3_g2

0xd78a,	// (0x0001a259) list_medium_line_t3_g3

0xd78a,	// (0x0001a259) list_medium_line_t3_right_iconx2

0x68fa,	// (0x000133c9) list_medium_line_t4_g4

0xd78a,	// (0x0001a259) list_medium_line_x2

0xd78a,	// (0x0001a259) list_medium_line_x2_t2_g2

0xd78a,	// (0x0001a259) list_medium_line_x2_t2_g3

0xd78a,	// (0x0001a259) list_medium_line_x2_t2_g4

0xd78a,	// (0x0001a259) list_medium_line_x2_t3

0xd78a,	// (0x0001a259) list_medium_line_x2_t3_g2

0xd78a,	// (0x0001a259) list_medium_line_x2_t3_g3

0xd78a,	// (0x0001a259) list_medium_line_x2_t3_g4

0xd78a,	// (0x0001a259) list_medium_line_x2_t4_g2

0xd78a,	// (0x0001a259) list_medium_line_x2_t4_g4

0x6903,	// (0x000133d2) list_medium_line_x3

0x6903,	// (0x000133d2) list_medium_line_x3_t4

0x6903,	// (0x000133d2) list_medium_line_x3_t4_g4

0x68fa,	// (0x000133c9) list_medium_line_x4_t4

0x68fa,	// (0x000133c9) list_medium_line_x4_t4_g7

0x68fa,	// (0x000133c9) list_medium_line_x4_t5

0x690c,	// (0x000133db) list_single_fs_dyc_pane_ParamLimits

0x690c,	// (0x000133db) list_single_fs_dyc_pane

0xa083,	// (0x00016b52) list_medium_line_x4_t4_g7_g1_ParamLimits

0xa083,	// (0x00016b52) list_medium_line_x4_t4_g7_g1

0x9ce6,	// (0x000167b5) list_medium_line_x4_t4_g7_g2_ParamLimits

0x9ce6,	// (0x000167b5) list_medium_line_x4_t4_g7_g2

0xa08f,	// (0x00016b5e) list_medium_line_x4_t4_g7_g3_ParamLimits

0xa08f,	// (0x00016b5e) list_medium_line_x4_t4_g7_g3

0x9ce6,	// (0x000167b5) list_medium_line_x4_t4_g7_g4_ParamLimits

0x9ce6,	// (0x000167b5) list_medium_line_x4_t4_g7_g4

0x9ce6,	// (0x000167b5) list_medium_line_x4_t4_g7_g5_ParamLimits

0x9ce6,	// (0x000167b5) list_medium_line_x4_t4_g7_g5

0x9ce6,	// (0x000167b5) list_medium_line_x4_t4_g7_g6_ParamLimits

0x9ce6,	// (0x000167b5) list_medium_line_x4_t4_g7_g6

0x9cf4,	// (0x000167c3) list_medium_line_x4_t4_g7_g7_ParamLimits

0x9cf4,	// (0x000167c3) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb60,	// (0x0001c62f) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb60,	// (0x0001c62f) list_medium_line_x4_t4_g7_g

0xa09b,	// (0x00016b6a) list_medium_line_x4_t4_g7_t1_ParamLimits

0xa09b,	// (0x00016b6a) list_medium_line_x4_t4_g7_t1

0xa09b,	// (0x00016b6a) list_medium_line_x4_t4_g7_t2_ParamLimits

0xa09b,	// (0x00016b6a) list_medium_line_x4_t4_g7_t2

0xa09b,	// (0x00016b6a) list_medium_line_x4_t4_g7_t3_ParamLimits

0xa09b,	// (0x00016b6a) list_medium_line_x4_t4_g7_t3

0xdc65,	// (0x0001a734) list_medium_line_x4_t4_g7_t4_ParamLimits

0xdc65,	// (0x0001a734) list_medium_line_x4_t4_g7_t4

0xdc78,	// (0x0001a747) list_medium_line_x4_t4_g7_t5_ParamLimits

0xdc78,	// (0x0001a747) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb6f,	// (0x0001c63e) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb6f,	// (0x0001c63e) list_medium_line_x4_t4_g7_t

0x6fd8,	// (0x00013aa7) list_single_dyc_row_pane_ParamLimits

0x6fd8,	// (0x00013aa7) list_single_dyc_row_pane

0x7673,	// (0x00014142) call5_gesture_pane_ParamLimits

0x7673,	// (0x00014142) call5_gesture_pane

0x76bb,	// (0x0001418a) call5_windows_pane_ParamLimits

0x76bb,	// (0x0001418a) call5_windows_pane

0x7754,	// (0x00014223) call5_swipe_1_pane_cp_ParamLimits

0x7754,	// (0x00014223) call5_swipe_1_pane_cp

0x7760,	// (0x0001422f) call5_swipe_2_pane_cp_ParamLimits

0x7760,	// (0x0001422f) call5_swipe_2_pane_cp

0x9ff1,	// (0x00016ac0) call5_image_pane_cp

0x776c,	// (0x0001423b) popup_call5_audio_first_window_cp_ParamLimits

0x776c,	// (0x0001423b) popup_call5_audio_first_window_cp

0xe269,	// (0x0001ad38) call5_swipe_1_pane_g1_cp_ParamLimits

0xe269,	// (0x0001ad38) call5_swipe_1_pane_g1_cp

0xe2af,	// (0x0001ad7e) call5_swipe_1_pane_g2_cp

0xe282,	// (0x0001ad51) call5_swipe_1_pane_t1_cp_ParamLimits

0xe282,	// (0x0001ad51) call5_swipe_1_pane_t1_cp

0xe269,	// (0x0001ad38) call5_swipe_2_pane_g1_cp_ParamLimits

0xe269,	// (0x0001ad38) call5_swipe_2_pane_g1_cp

0xe2b7,	// (0x0001ad86) call5_swipe_2_pane_g2_cp

0xe2bf,	// (0x0001ad8e) call5_swipe_2_pane_t1_cp_ParamLimits

0xe2bf,	// (0x0001ad8e) call5_swipe_2_pane_t1_cp

0x95f2,	// (0x000160c1) main_sp_fs_email_pane

0xe2d4,	// (0x0001ada3) main_sp_fs_listscroll_pane_te

0x7778,	// (0x00014247) popup_sp_fs_action_menu_pane_ParamLimits

0x7778,	// (0x00014247) popup_sp_fs_action_menu_pane

0xa069,	// (0x00016b38) bg_sp_fs_ctrlbar_pane_g1

0xc99e,	// (0x0001946d) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xc9b0,	// (0x0001947f) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xc9a7,	// (0x00019476) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xa069,	// (0x00016b38) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc5d,	// (0x0001c72c) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc0b6,	// (0x00018b85) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc0b6,	// (0x00018b85) bg_sp_fs_ctrlbar_ddmenu_pane

0xe2dd,	// (0x0001adac) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe2dd,	// (0x0001adac) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe2e9,	// (0x0001adb8) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe2e9,	// (0x0001adb8) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc66,	// (0x0001c735) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc66,	// (0x0001c735) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe2f5,	// (0x0001adc4) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe2f5,	// (0x0001adc4) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xe30f,	// (0x0001adde) list_medium_line_t2_right_icon_g1

0xa5fd,	// (0x000170cc) list_medium_line_t2_right_icon_t1

0xa5fd,	// (0x000170cc) list_medium_line_t2_right_icon_t2

0x0001,

0xfc6b,	// (0x0001c73a) list_medium_line_t2_right_icon_t

0xabe5,	// (0x000176b4) bg_sp_fs_ctrlbar_pane_ParamLimits

0xabe5,	// (0x000176b4) bg_sp_fs_ctrlbar_pane

0x77f0,	// (0x000142bf) main_sp_fs_ctrlbar_button_pane_cp01

0x77f8,	// (0x000142c7) main_sp_fs_ctrlbar_ddmenu_pane

0xe34f,	// (0x0001ae1e) main_sp_fs_ctrlbar_pane_g1

0xe35b,	// (0x0001ae2a) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc70,	// (0x0001c73f) main_sp_fs_ctrlbar_pane_g

0x7834,	// (0x00014303) main_sp_fs_ctrlbar_pane_t1

0x787d,	// (0x0001434c) main_sp_fs_ctrlbar_pane

0x789e,	// (0x0001436d) main_sp_fs_listscroll_pane_te_cp01

0x78be,	// (0x0001438d) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x78be,	// (0x0001438d) popup_sp_fs_action_menu_pane_cp01

0x95f2,	// (0x000160c1) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x95f2,	// (0x000160c1) bg_sp_fs_highlight_list_pane_cp01

0x78e8,	// (0x000143b7) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x78e8,	// (0x000143b7) sp_fs_action_menu_list_gene_pane_g1

0xe382,	// (0x0001ae51) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe382,	// (0x0001ae51) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc7e,	// (0x0001c74d) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc7e,	// (0x0001c74d) sp_fs_action_menu_list_gene_pane_g

0x78f7,	// (0x000143c6) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x78f7,	// (0x000143c6) sp_fs_action_menu_list_gene_pane_t1

0x790f,	// (0x000143de) sp_fs_action_menu_list_gene_pane_ParamLimits

0x790f,	// (0x000143de) sp_fs_action_menu_list_gene_pane

0xe38f,	// (0x0001ae5e) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe38f,	// (0x0001ae5e) popup_sp_fs_action_menu_bg_pane

0x792c,	// (0x000143fb) sp_fs_action_menu_list_pane_ParamLimits

0x792c,	// (0x000143fb) sp_fs_action_menu_list_pane

0xe3b4,	// (0x0001ae83) sp_fs_scroll_pane_cp01_ParamLimits

0xe3b4,	// (0x0001ae83) sp_fs_scroll_pane_cp01

0xa5fd,	// (0x000170cc) list_medium_line_plain_t2_t1

0xa5fd,	// (0x000170cc) list_medium_line_plain_t2_t2

0x0001,

0xfc6b,	// (0x0001c73a) list_medium_line_plain_t2_t

0xa5fd,	// (0x000170cc) list_medium_line_plain_t3_t1

0xa5fd,	// (0x000170cc) list_medium_line_plain_t3_t2

0xa5fd,	// (0x000170cc) list_medium_line_plain_t3_t3

0x0002,

0xfc83,	// (0x0001c752) list_medium_line_plain_t3_t

0xa083,	// (0x00016b52) list_medium_line_x2_t2_g2_g1_ParamLimits

0xa083,	// (0x00016b52) list_medium_line_x2_t2_g2_g1

0xa083,	// (0x00016b52) list_medium_line_x2_t2_g2_g2_ParamLimits

0xa083,	// (0x00016b52) list_medium_line_x2_t2_g2_g2

0x0001,

0xf1db,	// (0x0001bcaa) list_medium_line_x2_t2_g2_g_ParamLimits

0xf1db,	// (0x0001bcaa) list_medium_line_x2_t2_g2_g

0xa09b,	// (0x00016b6a) list_medium_line_x2_t2_g2_t1_ParamLimits

0xa09b,	// (0x00016b6a) list_medium_line_x2_t2_g2_t1

0xa0ae,	// (0x00016b7d) list_medium_line_x2_t2_g2_t2_ParamLimits

0xa0ae,	// (0x00016b7d) list_medium_line_x2_t2_g2_t2

0x0001,

0xf250,	// (0x0001bd1f) list_medium_line_x2_t2_g2_t_ParamLimits

0xf250,	// (0x0001bd1f) list_medium_line_x2_t2_g2_t

0xa083,	// (0x00016b52) list_medium_line_x2_t4_g2_g1_ParamLimits

0xa083,	// (0x00016b52) list_medium_line_x2_t4_g2_g1

0xa083,	// (0x00016b52) list_medium_line_x2_t4_g2_g2_ParamLimits

0xa083,	// (0x00016b52) list_medium_line_x2_t4_g2_g2

0x0001,

0xf1db,	// (0x0001bcaa) list_medium_line_x2_t4_g2_g_ParamLimits

0xf1db,	// (0x0001bcaa) list_medium_line_x2_t4_g2_g

0xa09b,	// (0x00016b6a) list_medium_line_x2_t4_g2_t1_ParamLimits

0xa09b,	// (0x00016b6a) list_medium_line_x2_t4_g2_t1

0xa09b,	// (0x00016b6a) list_medium_line_x2_t4_g2_t2_ParamLimits

0xa09b,	// (0x00016b6a) list_medium_line_x2_t4_g2_t2

0xa09b,	// (0x00016b6a) list_medium_line_x2_t4_g2_t3_ParamLimits

0xa09b,	// (0x00016b6a) list_medium_line_x2_t4_g2_t3

0xa0ae,	// (0x00016b7d) list_medium_line_x2_t4_g2_t4_ParamLimits

0xa0ae,	// (0x00016b7d) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1e9,	// (0x0001bcb8) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1e9,	// (0x0001bcb8) list_medium_line_x2_t4_g2_t

0xe30f,	// (0x0001adde) list_medium_line_t3_right_iconx2_g1

0xa069,	// (0x00016b38) list_medium_line_t3_right_iconx2_g2

0xe3da,	// (0x0001aea9) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfc8a,	// (0x0001c759) list_medium_line_t3_right_iconx2_g

0xa5fd,	// (0x000170cc) list_medium_line_t3_right_iconx2_t1

0xa5fd,	// (0x000170cc) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc6b,	// (0x0001c73a) list_medium_line_t3_right_iconx2_t

0xa083,	// (0x00016b52) list_medium_line_x3_t4_g4_g1_ParamLimits

0xa083,	// (0x00016b52) list_medium_line_x3_t4_g4_g1

0xa08f,	// (0x00016b5e) list_medium_line_x3_t4_g4_g2_ParamLimits

0xa08f,	// (0x00016b5e) list_medium_line_x3_t4_g4_g2

0xa083,	// (0x00016b52) list_medium_line_x3_t4_g4_g3_ParamLimits

0xa083,	// (0x00016b52) list_medium_line_x3_t4_g4_g3

0xa08f,	// (0x00016b5e) list_medium_line_x3_t4_g4_g4_ParamLimits

0xa08f,	// (0x00016b5e) list_medium_line_x3_t4_g4_g4

0x0003,

0xfc91,	// (0x0001c760) list_medium_line_x3_t4_g4_g_ParamLimits

0xfc91,	// (0x0001c760) list_medium_line_x3_t4_g4_g

0xa09b,	// (0x00016b6a) list_medium_line_x3_t4_g4_t1_ParamLimits

0xa09b,	// (0x00016b6a) list_medium_line_x3_t4_g4_t1

0xa09b,	// (0x00016b6a) list_medium_line_x3_t4_g4_t2_ParamLimits

0xa09b,	// (0x00016b6a) list_medium_line_x3_t4_g4_t2

0xa09b,	// (0x00016b6a) list_medium_line_x3_t4_g4_t3_ParamLimits

0xa09b,	// (0x00016b6a) list_medium_line_x3_t4_g4_t3

0xe3e3,	// (0x0001aeb2) list_medium_line_x3_t4_g4_t4_ParamLimits

0xe3e3,	// (0x0001aeb2) list_medium_line_x3_t4_g4_t4

0x0003,

0xfc9a,	// (0x0001c769) list_medium_line_x3_t4_g4_t_ParamLimits

0xfc9a,	// (0x0001c769) list_medium_line_x3_t4_g4_t

0x794a,	// (0x00014419) list_single_dyc_row_text_pane_t1_ParamLimits

0x794a,	// (0x00014419) list_single_dyc_row_text_pane_t1

0x7981,	// (0x00014450) list_single_dyc_row_text_pane_t2_ParamLimits

0x7981,	// (0x00014450) list_single_dyc_row_text_pane_t2

0xe400,	// (0x0001aecf) list_single_dyc_row_text_pane_t3_ParamLimits

0xe400,	// (0x0001aecf) list_single_dyc_row_text_pane_t3

0x0005,

0xfca3,	// (0x0001c772) list_single_dyc_row_text_pane_t_ParamLimits

0xfca3,	// (0x0001c772) list_single_dyc_row_text_pane_t

0xe424,	// (0x0001aef3) list_single_dyc_row_pane_g1_ParamLimits

0xe424,	// (0x0001aef3) list_single_dyc_row_pane_g1

0xe430,	// (0x0001aeff) list_single_dyc_row_pane_g2_ParamLimits

0xe430,	// (0x0001aeff) list_single_dyc_row_pane_g2

0xe43c,	// (0x0001af0b) list_single_dyc_row_pane_g3_ParamLimits

0xe43c,	// (0x0001af0b) list_single_dyc_row_pane_g3

0xe448,	// (0x0001af17) list_single_dyc_row_pane_g4_ParamLimits

0xe448,	// (0x0001af17) list_single_dyc_row_pane_g4

0x0003,

0xfcb0,	// (0x0001c77f) list_single_dyc_row_pane_g_ParamLimits

0xfcb0,	// (0x0001c77f) list_single_dyc_row_pane_g

0xe454,	// (0x0001af23) list_single_dyc_row_text_pane_ParamLimits

0xe454,	// (0x0001af23) list_single_dyc_row_text_pane

0x959f,	// (0x0001606e) bg_sp_fs_scroll_pane

0xe473,	// (0x0001af42) thumb_sp_fs_scroll_pane

0xa083,	// (0x00016b52) list_medium_line_g1_ParamLimits

0xa083,	// (0x00016b52) list_medium_line_g1

0xa09b,	// (0x00016b6a) list_medium_line_t1_ParamLimits

0xa09b,	// (0x00016b6a) list_medium_line_t1

0xa083,	// (0x00016b52) list_medium_line_x2_g1_ParamLimits

0xa083,	// (0x00016b52) list_medium_line_x2_g1

0xd3c3,	// (0x00019e92) list_medium_line_x2_g2_ParamLimits

0xd3c3,	// (0x00019e92) list_medium_line_x2_g2

0x0001,

0xf990,	// (0x0001c45f) list_medium_line_x2_g_ParamLimits

0xf990,	// (0x0001c45f) list_medium_line_x2_g

0xa03b,	// (0x00016b0a) list_medium_line_x2_t1_ParamLimits

0xa03b,	// (0x00016b0a) list_medium_line_x2_t1

0xa083,	// (0x00016b52) list_medium_line_x3_g1_ParamLimits

0xa083,	// (0x00016b52) list_medium_line_x3_g1

0xe47c,	// (0x0001af4b) list_medium_line_x3_g2_ParamLimits

0xe47c,	// (0x0001af4b) list_medium_line_x3_g2

0x0001,

0xfcb9,	// (0x0001c788) list_medium_line_x3_g_ParamLimits

0xfcb9,	// (0x0001c788) list_medium_line_x3_g

0xe489,	// (0x0001af58) list_medium_line_x3_t1_ParamLimits

0xe489,	// (0x0001af58) list_medium_line_x3_t1

0xe49d,	// (0x0001af6c) thumb_sp_fs_scroll_pane_g1

0xe4a6,	// (0x0001af75) thumb_sp_fs_scroll_pane_g2

0xe4af,	// (0x0001af7e) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfcbe,	// (0x0001c78d) thumb_sp_fs_scroll_pane_g

0xe49d,	// (0x0001af6c) bg_sp_fs_scroll_pane_g1

0xe4a6,	// (0x0001af75) bg_sp_fs_scroll_pane_g2

0xe4af,	// (0x0001af7e) bg_sp_fs_scroll_pane_g3

0x0002,

0xfcbe,	// (0x0001c78d) bg_sp_fs_scroll_pane_g

0xa083,	// (0x00016b52) list_medium_line_x2_t3_g4_g1_ParamLimits

0xa083,	// (0x00016b52) list_medium_line_x2_t3_g4_g1

0xa08f,	// (0x00016b5e) list_medium_line_x2_t3_g4_g2_ParamLimits

0xa08f,	// (0x00016b5e) list_medium_line_x2_t3_g4_g2

0xa08f,	// (0x00016b5e) list_medium_line_x2_t3_g4_g3_ParamLimits

0xa08f,	// (0x00016b5e) list_medium_line_x2_t3_g4_g3

0xa083,	// (0x00016b52) list_medium_line_x2_t3_g4_g4_ParamLimits

0xa083,	// (0x00016b52) list_medium_line_x2_t3_g4_g4

0x0003,

0xf1e0,	// (0x0001bcaf) list_medium_line_x2_t3_g4_g_ParamLimits

0xf1e0,	// (0x0001bcaf) list_medium_line_x2_t3_g4_g

0xa09b,	// (0x00016b6a) list_medium_line_x2_t3_g4_t1_ParamLimits

0xa09b,	// (0x00016b6a) list_medium_line_x2_t3_g4_t1

0xa09b,	// (0x00016b6a) list_medium_line_x2_t3_g4_t2_ParamLimits

0xa09b,	// (0x00016b6a) list_medium_line_x2_t3_g4_t2

0xa0ae,	// (0x00016b7d) list_medium_line_x2_t3_g4_t3_ParamLimits

0xa0ae,	// (0x00016b7d) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1d4,	// (0x0001bca3) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1d4,	// (0x0001bca3) list_medium_line_x2_t3_g4_t

0xa083,	// (0x00016b52) list_medium_line_g2_g1_ParamLimits

0xa083,	// (0x00016b52) list_medium_line_g2_g1

0xd3c3,	// (0x00019e92) list_medium_line_g2_g2_ParamLimits

0xd3c3,	// (0x00019e92) list_medium_line_g2_g2

0x0001,

0xf990,	// (0x0001c45f) list_medium_line_g2_g_ParamLimits

0xf990,	// (0x0001c45f) list_medium_line_g2_g

0xa09b,	// (0x00016b6a) list_medium_line_g2_t1_ParamLimits

0xa09b,	// (0x00016b6a) list_medium_line_g2_t1

0xa083,	// (0x00016b52) list_medium_line_t3_g2_g1_ParamLimits

0xa083,	// (0x00016b52) list_medium_line_t3_g2_g1

0xd3c3,	// (0x00019e92) list_medium_line_t3_g2_g2_ParamLimits

0xd3c3,	// (0x00019e92) list_medium_line_t3_g2_g2

0x0001,

0xf990,	// (0x0001c45f) list_medium_line_t3_g2_g_ParamLimits

0xf990,	// (0x0001c45f) list_medium_line_t3_g2_g

0xa09b,	// (0x00016b6a) list_medium_line_t3_g2_t1_ParamLimits

0xa09b,	// (0x00016b6a) list_medium_line_t3_g2_t1

0xa09b,	// (0x00016b6a) list_medium_line_t3_g2_t2_ParamLimits

0xa09b,	// (0x00016b6a) list_medium_line_t3_g2_t2

0xa09b,	// (0x00016b6a) list_medium_line_t3_g2_t3_ParamLimits

0xa09b,	// (0x00016b6a) list_medium_line_t3_g2_t3

0x0002,

0xfcc5,	// (0x0001c794) list_medium_line_t3_g2_t_ParamLimits

0xfcc5,	// (0x0001c794) list_medium_line_t3_g2_t

0xe4b8,	// (0x0001af87) list_medium_line_right_icon_g1

0xa5fd,	// (0x000170cc) list_medium_line_right_icon_t1

0xa083,	// (0x00016b52) list_medium_line_t2_g1_ParamLimits

0xa083,	// (0x00016b52) list_medium_line_t2_g1

0xa09b,	// (0x00016b6a) list_medium_line_t2_t1_ParamLimits

0xa09b,	// (0x00016b6a) list_medium_line_t2_t1

0xa09b,	// (0x00016b6a) list_medium_line_t2_t2_ParamLimits

0xa09b,	// (0x00016b6a) list_medium_line_t2_t2

0x0001,

0xf995,	// (0x0001c464) list_medium_line_t2_t_ParamLimits

0xf995,	// (0x0001c464) list_medium_line_t2_t

0xa083,	// (0x00016b52) list_medium_line_t3_g1_ParamLimits

0xa083,	// (0x00016b52) list_medium_line_t3_g1

0xa09b,	// (0x00016b6a) list_medium_line_t3_t1_ParamLimits

0xa09b,	// (0x00016b6a) list_medium_line_t3_t1

0xa09b,	// (0x00016b6a) list_medium_line_t3_t2_ParamLimits

0xa09b,	// (0x00016b6a) list_medium_line_t3_t2

0xa09b,	// (0x00016b6a) list_medium_line_t3_t3_ParamLimits

0xa09b,	// (0x00016b6a) list_medium_line_t3_t3

0x0002,

0xfcc5,	// (0x0001c794) list_medium_line_t3_t_ParamLimits

0xfcc5,	// (0x0001c794) list_medium_line_t3_t

0xa083,	// (0x00016b52) list_medium_line_g3_g1_ParamLimits

0xa083,	// (0x00016b52) list_medium_line_g3_g1

0xa08f,	// (0x00016b5e) list_medium_line_g3_g2_ParamLimits

0xa08f,	// (0x00016b5e) list_medium_line_g3_g2

0xa08f,	// (0x00016b5e) list_medium_line_g3_g3_ParamLimits

0xa08f,	// (0x00016b5e) list_medium_line_g3_g3

0x0002,

0xfccc,	// (0x0001c79b) list_medium_line_g3_g_ParamLimits

0xfccc,	// (0x0001c79b) list_medium_line_g3_g

0xa09b,	// (0x00016b6a) list_medium_line_g3_t1_ParamLimits

0xa09b,	// (0x00016b6a) list_medium_line_g3_t1

0xa083,	// (0x00016b52) list_medium_line_t2_g3_g1_ParamLimits

0xa083,	// (0x00016b52) list_medium_line_t2_g3_g1

0xa08f,	// (0x00016b5e) list_medium_line_t2_g3_g2_ParamLimits

0xa08f,	// (0x00016b5e) list_medium_line_t2_g3_g2

0xa08f,	// (0x00016b5e) list_medium_line_t2_g3_g3_ParamLimits

0xa08f,	// (0x00016b5e) list_medium_line_t2_g3_g3

0x0002,

0xfccc,	// (0x0001c79b) list_medium_line_t2_g3_g_ParamLimits

0xfccc,	// (0x0001c79b) list_medium_line_t2_g3_g

0xa09b,	// (0x00016b6a) list_medium_line_t2_g3_t1_ParamLimits

0xa09b,	// (0x00016b6a) list_medium_line_t2_g3_t1

0xa09b,	// (0x00016b6a) list_medium_line_t2_g3_t2_ParamLimits

0xa09b,	// (0x00016b6a) list_medium_line_t2_g3_t2

0x0001,

0xf995,	// (0x0001c464) list_medium_line_t2_g3_t_ParamLimits

0xf995,	// (0x0001c464) list_medium_line_t2_g3_t

0xa083,	// (0x00016b52) list_medium_line_t3_g3_g1_ParamLimits

0xa083,	// (0x00016b52) list_medium_line_t3_g3_g1

0xa08f,	// (0x00016b5e) list_medium_line_t3_g3_g2_ParamLimits

0xa08f,	// (0x00016b5e) list_medium_line_t3_g3_g2

0xa08f,	// (0x00016b5e) list_medium_line_t3_g3_g3_ParamLimits

0xa08f,	// (0x00016b5e) list_medium_line_t3_g3_g3

0x0002,

0xfccc,	// (0x0001c79b) list_medium_line_t3_g3_g_ParamLimits

0xfccc,	// (0x0001c79b) list_medium_line_t3_g3_g

0xa09b,	// (0x00016b6a) list_medium_line_t3_g3_t1_ParamLimits

0xa09b,	// (0x00016b6a) list_medium_line_t3_g3_t1

0xa09b,	// (0x00016b6a) list_medium_line_t3_g3_t2_ParamLimits

0xa09b,	// (0x00016b6a) list_medium_line_t3_g3_t2

0xa09b,	// (0x00016b6a) list_medium_line_t3_g3_t3_ParamLimits

0xa09b,	// (0x00016b6a) list_medium_line_t3_g3_t3

0x0002,

0xfcc5,	// (0x0001c794) list_medium_line_t3_g3_t_ParamLimits

0xfcc5,	// (0x0001c794) list_medium_line_t3_g3_t

0xe30f,	// (0x0001adde) list_medium_line_right_iconx2_g1

0xe30f,	// (0x0001adde) list_medium_line_right_iconx2_g2

0x0001,

0xfcd3,	// (0x0001c7a2) list_medium_line_right_iconx2_g

0xe4c1,	// (0x0001af90) list_medium_line_right_iconx2_t1

0xe30f,	// (0x0001adde) list_medium_line_t2_right_iconx2_g1

0xe30f,	// (0x0001adde) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfcd3,	// (0x0001c7a2) list_medium_line_t2_right_iconx2_g

0xa5fd,	// (0x000170cc) list_medium_line_t2_right_iconx2_t1

0xa5fd,	// (0x000170cc) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc6b,	// (0x0001c73a) list_medium_line_t2_right_iconx2_t

0xa5fd,	// (0x000170cc) list_medium_line_x4_t4_t1

0xa5fd,	// (0x000170cc) list_medium_line_x4_t4_t2

0xa5fd,	// (0x000170cc) list_medium_line_x4_t4_t3

0xa5fd,	// (0x000170cc) list_medium_line_x4_t4_t4

0x0003,

0xf2a2,	// (0x0001bd71) list_medium_line_x4_t4_t

0x7add,	// (0x000145ac) tport_appsw_pane_ParamLimits

0x7add,	// (0x000145ac) tport_appsw_pane

0x7aee,	// (0x000145bd) tport_contact_pane_ParamLimits

0x7aee,	// (0x000145bd) tport_contact_pane

0x7b02,	// (0x000145d1) tport_listscroll_pane_ParamLimits

0x7b02,	// (0x000145d1) tport_listscroll_pane

0x7b1a,	// (0x000145e9) cell_tport_appsw_pane_ParamLimits

0x7b1a,	// (0x000145e9) cell_tport_appsw_pane

0xabaf,	// (0x0001767e) tport_appsw_pane_g1_ParamLimits

0xabaf,	// (0x0001767e) tport_appsw_pane_g1

0xe4d0,	// (0x0001af9f) tport_contact_pane_g1

0xe4d9,	// (0x0001afa8) tport_contact_pane_t1

0xe4e7,	// (0x0001afb6) tport_contact_pane_t2

0x0001,

0xfcd8,	// (0x0001c7a7) tport_contact_pane_t

0xe4f5,	// (0x0001afc4) list_tport_pane

0x9edf,	// (0x000169ae) scroll_pane_cp_030

0xe506,	// (0x0001afd5) cell_tport_appsw_pane_g1

0xe516,	// (0x0001afe5) cell_tport_appsw_pane_t1

0xe524,	// (0x0001aff3) grid_highlight_pane_cp019

0x7b50,	// (0x0001461f) list_tport_double_graphic_pane_ParamLimits

0x7b50,	// (0x0001461f) list_tport_double_graphic_pane

0x95f2,	// (0x000160c1) list_highlight_pane_cp023_ParamLimits

0x95f2,	// (0x000160c1) list_highlight_pane_cp023

0x7b5d,	// (0x0001462c) list_tport_double_graphic_pane_g1_ParamLimits

0x7b5d,	// (0x0001462c) list_tport_double_graphic_pane_g1

0x7b6a,	// (0x00014639) list_tport_double_graphic_pane_t1_ParamLimits

0x7b6a,	// (0x00014639) list_tport_double_graphic_pane_t1

0x7b7f,	// (0x0001464e) list_tport_double_graphic_pane_t2_ParamLimits

0x7b7f,	// (0x0001464e) list_tport_double_graphic_pane_t2

0x0001,

0xfce4,	// (0x0001c7b3) list_tport_double_graphic_pane_t_ParamLimits

0xfce4,	// (0x0001c7b3) list_tport_double_graphic_pane_t

0x959f,	// (0x0001606e) main_cale_note_pane

0x5a55,	// (0x00012524) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x5a55,	// (0x00012524) cell_vitu2_function_top_wide_pane_cp01

0x7323,	// (0x00013df2) wait_bar_pane_cp05_ParamLimits

0x95f2,	// (0x000160c1) listscroll_cmail_pane

0xe534,	// (0x0001b003) list_cmail_pane

0x7b91,	// (0x00014660) list_cmail_body_pane

0x7b91,	// (0x00014660) list_single_cmail_header_caption_pane

0x7ba8,	// (0x00014677) list_single_cmail_header_detail_pane_ParamLimits

0x7ba8,	// (0x00014677) list_single_cmail_header_detail_pane

0xe557,	// (0x0001b026) list_single_cmail_header_caption_pane_t1

0x7bd3,	// (0x000146a2) list_single_cmail_header_detail_pane_g1_ParamLimits

0x7bd3,	// (0x000146a2) list_single_cmail_header_detail_pane_g1

0xe56e,	// (0x0001b03d) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe56e,	// (0x0001b03d) list_single_cmail_header_detail_pane_g2

0x0002,

0xfce9,	// (0x0001c7b8) list_single_cmail_header_detail_pane_g_ParamLimits

0xfce9,	// (0x0001c7b8) list_single_cmail_header_detail_pane_g

0x7be9,	// (0x000146b8) list_single_cmail_header_detail_pane_t1_ParamLimits

0x7be9,	// (0x000146b8) list_single_cmail_header_detail_pane_t1

0xe5ab,	// (0x0001b07a) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe5ab,	// (0x0001b07a) list_single_cmail_header_editor_pane_bg

0xe5c2,	// (0x0001b091) list_cmail_body_pane_g1

0xe5cb,	// (0x0001b09a) list_cmail_body_pane_t1

0xd104,	// (0x00019bd3) list_single_cmail_header_editor_pane_bg_g1

0xa2c5,	// (0x00016d94) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd114,	// (0x00019be3) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd10c,	// (0x00019bdb) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd39b,	// (0x00019e6a) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd134,	// (0x00019c03) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd124,	// (0x00019bf3) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd12c,	// (0x00019bfb) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa2a5,	// (0x00016d74) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x7c25,	// (0x000146f4) calenote_gesture_pane_ParamLimits

0x7c25,	// (0x000146f4) calenote_gesture_pane

0x7c41,	// (0x00014710) calenote_window_pane_ParamLimits

0x7c41,	// (0x00014710) calenote_window_pane

0xe5d9,	// (0x0001b0a8) popup_note_window_cp01

0x7c5d,	// (0x0001472c) calenote_swipe_1_pane_ParamLimits

0x7c5d,	// (0x0001472c) calenote_swipe_1_pane

0x7760,	// (0x0001422f) calenote_swipe_2_pane_ParamLimits

0x7760,	// (0x0001422f) calenote_swipe_2_pane

0xe269,	// (0x0001ad38) calenote_swipe_1_pane_g1_ParamLimits

0xe269,	// (0x0001ad38) calenote_swipe_1_pane_g1

0xe276,	// (0x0001ad45) calenote_swipe_1_pane_g2_ParamLimits

0xe276,	// (0x0001ad45) calenote_swipe_1_pane_g2

0x0001,

0xfc53,	// (0x0001c722) calenote_swipe_1_pane_g_ParamLimits

0xfc53,	// (0x0001c722) calenote_swipe_1_pane_g

0xe5eb,	// (0x0001b0ba) calenote_swipe_1_pane_t1_ParamLimits

0xe5eb,	// (0x0001b0ba) calenote_swipe_1_pane_t1

0xe269,	// (0x0001ad38) calenote_swipe_2_pane_g1_ParamLimits

0xe269,	// (0x0001ad38) calenote_swipe_2_pane_g1

0xe60a,	// (0x0001b0d9) calenote_swipe_2_pane_g2_ParamLimits

0xe60a,	// (0x0001b0d9) calenote_swipe_2_pane_g2

0x0001,

0xfcf5,	// (0x0001c7c4) calenote_swipe_2_pane_g_ParamLimits

0xfcf5,	// (0x0001c7c4) calenote_swipe_2_pane_g

0xe616,	// (0x0001b0e5) calenote_swipe_2_pane_t1_ParamLimits

0xe616,	// (0x0001b0e5) calenote_swipe_2_pane_t1

0x959f,	// (0x0001606e) main_mup_navstr_pane

0x4a91,	// (0x00011560) main_mup3_pane_t7_ParamLimits

0x4a91,	// (0x00011560) main_mup3_pane_t7

0xcc88,	// (0x00019757) main_mp4_pane_g6_ParamLimits

0xcc88,	// (0x00019757) main_mp4_pane_g6

0xcf02,	// (0x000199d1) main_image3_pane_t4_ParamLimits

0xcf02,	// (0x000199d1) main_image3_pane_t4

0x7c72,	// (0x00014741) popup_navstr_preview_pane_ParamLimits

0x7c72,	// (0x00014741) popup_navstr_preview_pane

0x7c82,	// (0x00014751) scroll_navstr_pane_ParamLimits

0x7c82,	// (0x00014751) scroll_navstr_pane

0x959f,	// (0x0001606e) bg_popup_preview_window_pane_cp04

0xe63d,	// (0x0001b10c) popup_navstr_preview_pane_t1

0x7c96,	// (0x00014765) scroll_navstr_pane_g1_ParamLimits

0x7c96,	// (0x00014765) scroll_navstr_pane_g1

0x7caa,	// (0x00014779) scroll_navstr_pane_t1_ParamLimits

0x7caa,	// (0x00014779) scroll_navstr_pane_t1

0xe5e2,	// (0x0001b0b1) bg_button_pane_cp014

0xe5e2,	// (0x0001b0b1) bg_button_pane_cp030

0x761e,	// (0x000140ed) list_double_fisheye_pane_g4_ParamLimits

0x761e,	// (0x000140ed) list_double_fisheye_pane_g4

0x762a,	// (0x000140f9) list_double_fisheye_pane_g5_ParamLimits

0x762a,	// (0x000140f9) list_double_fisheye_pane_g5

0xe54b,	// (0x0001b01a) sp_fs_scroll_pane_cp03

0xe34f,	// (0x0001ae1e) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe35b,	// (0x0001ae2a) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc70,	// (0x0001c73f) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x7834,	// (0x00014303) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe543,	// (0x0001b012) sp_fs_scroll_pane_cp02

0x9f39,	// (0x00016a08) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x9f39,	// (0x00016a08) popup_sp_fs_calendar_preview_list_single_pane

0x959f,	// (0x0001606e) main_cam6_pano_pane

0x95f2,	// (0x000160c1) main_mup3_pane_ParamLimits

0x959f,	// (0x0001606e) main_phacti_pane

0x7216,	// (0x00013ce5) bg_button_pane_cp11

0x722e,	// (0x00013cfd) main_mobtv_info_pane_g2_ParamLimits

0x722e,	// (0x00013cfd) main_mobtv_info_pane_g2

0x0001,

0xfbd0,	// (0x0001c69f) main_mobtv_info_pane_g_ParamLimits

0xfbd0,	// (0x0001c69f) main_mobtv_info_pane_g

0x73e3,	// (0x00013eb2) sc_clock_pane_t5_ParamLimits

0x73e3,	// (0x00013eb2) sc_clock_pane_t5

0x748e,	// (0x00013f5d) main_radioblah_pane_g1_ParamLimits

0xe1ac,	// (0x0001ac7b) main_radioblah_pane_t3_ParamLimits

0xe1ac,	// (0x0001ac7b) main_radioblah_pane_t3

0xe1c4,	// (0x0001ac93) main_radioblah_pane_t4_ParamLimits

0xe1c4,	// (0x0001ac93) main_radioblah_pane_t4

0x74b6,	// (0x00013f85) main_radioblah_text_pane_ParamLimits

0x74b6,	// (0x00013f85) main_radioblah_text_pane

0x74c8,	// (0x00013f97) main_radioblah_info_pane_g1_ParamLimits

0x755b,	// (0x0001402a) main_radioblah_info_pane_t4_ParamLimits

0x755b,	// (0x0001402a) main_radioblah_info_pane_t4

0x95f2,	// (0x000160c1) main_sp_fs_calendar_pane

0x7cc0,	// (0x0001478f) main_phacti_pane_g1

0x7cc8,	// (0x00014797) phacti_note_pane_ParamLimits

0x7cc8,	// (0x00014797) phacti_note_pane

0xe654,	// (0x0001b123) phacti_term_pane_ParamLimits

0xe654,	// (0x0001b123) phacti_term_pane

0xe669,	// (0x0001b138) phacti_note_pane_t1_ParamLimits

0xe669,	// (0x0001b138) phacti_note_pane_t1

0xe680,	// (0x0001b14f) phacti_term_pane_g1

0xe688,	// (0x0001b157) phacti_term_pane_t1_ParamLimits

0xe688,	// (0x0001b157) phacti_term_pane_t1

0xe6b2,	// (0x0001b181) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe6ba,	// (0x0001b189) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfcff,	// (0x0001c7ce) popup_sp_fs_calendar_preview_list_single_pane_g

0xe6c2,	// (0x0001b191) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe6c2,	// (0x0001b191) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe6d8,	// (0x0001b1a7) aid_popup_sp_fs_bg_corner_pane

0xa069,	// (0x00016b38) popup_sp_fs_calendar_preview_bg_pane_g1

0x959f,	// (0x0001606e) popup_sp_fs_calendar_preview_bg_pane

0xe6e0,	// (0x0001b1af) popup_sp_fs_calendar_preview_list_pane

0xabe5,	// (0x000176b4) bg_main_sp_fs_cale_pane_ParamLimits

0xabe5,	// (0x000176b4) bg_main_sp_fs_cale_pane

0xe6f1,	// (0x0001b1c0) listscroll_cale_mrui_pane_ParamLimits

0xe6f1,	// (0x0001b1c0) listscroll_cale_mrui_pane

0xe706,	// (0x0001b1d5) listscroll_sp_fs_schedule_track_pane

0xe70f,	// (0x0001b1de) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe70f,	// (0x0001b1de) main_sp_fs_ctrlbar_pane_cp01

0xe722,	// (0x0001b1f1) main_sp_fs_ribbon_pane

0xe72a,	// (0x0001b1f9) popup_sp_fs_cale_preview_window

0x7d2b,	// (0x000147fa) list_single_sp_fs_schedule_track_pane_ParamLimits

0x7d2b,	// (0x000147fa) list_single_sp_fs_schedule_track_pane

0x95f2,	// (0x000160c1) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x95f2,	// (0x000160c1) bg_sp_fs_highlight_list_pane_cp03

0x7d3f,	// (0x0001480e) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x7d3f,	// (0x0001480e) list_single_sp_fs_schedule_track_pane_g1

0x7d4b,	// (0x0001481a) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x7d4b,	// (0x0001481a) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfd04,	// (0x0001c7d3) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfd04,	// (0x0001c7d3) list_single_sp_fs_schedule_track_pane_g

0x7d57,	// (0x00014826) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x7d57,	// (0x00014826) list_single_sp_fs_schedule_track_pane_t1

0x7d71,	// (0x00014840) sp_fs_schedule_track_pane_ParamLimits

0x7d71,	// (0x00014840) sp_fs_schedule_track_pane

0xe73c,	// (0x0001b20b) sp_fs_schedule_track_pane_g1

0xe744,	// (0x0001b213) sp_fs_schedule_track_pane_g2

0xe74c,	// (0x0001b21b) sp_fs_schedule_track_pane_g3

0xe754,	// (0x0001b223) sp_fs_schedule_track_pane_g4

0xe75c,	// (0x0001b22b) sp_fs_schedule_track_pane_g5

0x0004,

0xfd09,	// (0x0001c7d8) sp_fs_schedule_track_pane_g

0xd104,	// (0x00019bd3) bg_sp_fs_schedule_viewer_highlight_g1

0xa2c5,	// (0x00016d94) bg_sp_fs_schedule_viewer_highlight_g2

0xd10c,	// (0x00019bdb) bg_sp_fs_schedule_viewer_highlight_g3

0xd114,	// (0x00019be3) bg_sp_fs_schedule_viewer_highlight_g4

0xd39b,	// (0x00019e6a) bg_sp_fs_schedule_viewer_highlight_g5

0xd124,	// (0x00019bf3) bg_sp_fs_schedule_viewer_highlight_g6

0xd12c,	// (0x00019bfb) bg_sp_fs_schedule_viewer_highlight_g7

0xd134,	// (0x00019c03) bg_sp_fs_schedule_viewer_highlight_g8

0xa2a5,	// (0x00016d74) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfd14,	// (0x0001c7e3) bg_sp_fs_schedule_viewer_highlight_g

0x959f,	// (0x0001606e) bg_main_sp_fs_ribbon_pane

0x7d82,	// (0x00014851) main_sp_fs_ribbon_pane_g1

0xe764,	// (0x0001b233) main_sp_fs_ribbon_pane_t1

0x7d8b,	// (0x0001485a) main_sp_fs_ribbon_pane_t2

0xe773,	// (0x0001b242) main_sp_fs_ribbon_pane_t3

0x0002,

0xfd27,	// (0x0001c7f6) main_sp_fs_ribbon_pane_t

0xe782,	// (0x0001b251) main_sp_fs_ribbon_scheduler_pane

0xe78a,	// (0x0001b259) bg_main_sp_fs_ribbon_pane_g1

0xe793,	// (0x0001b262) bg_main_sp_fs_ribbon_pane_g2

0xe79c,	// (0x0001b26b) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfd2e,	// (0x0001c7fd) bg_main_sp_fs_ribbon_pane_g

0xe7a4,	// (0x0001b273) main_sp_fs_ribbon_scheduler_pane_g1

0xe7ad,	// (0x0001b27c) main_sp_fs_ribbon_scheduler_pane_g2

0xe7b6,	// (0x0001b285) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfd35,	// (0x0001c804) main_sp_fs_ribbon_scheduler_pane_g

0xe7bf,	// (0x0001b28e) list_cale_mrui_pane

0x7d9a,	// (0x00014869) sp_fs_scroll_pane_cp07_ParamLimits

0x7d9a,	// (0x00014869) sp_fs_scroll_pane_cp07

0x7db2,	// (0x00014881) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x7db2,	// (0x00014881) bg_sp_fs_schedule_viewer_highlight

0xe7cc,	// (0x0001b29b) list_single_sp_fs_schedule_track_pane_cp01

0xe7d4,	// (0x0001b2a3) list_sp_fs_schedule_track_pane

0xe7dc,	// (0x0001b2ab) sp_fs_scroll_pane_cp06_ParamLimits

0xe7dc,	// (0x0001b2ab) sp_fs_scroll_pane_cp06

0xa069,	// (0x00016b38) bgmain_sp_fs_calendar_pane_g1

0x7dc2,	// (0x00014891) list_single_cale_mrui_pane_ParamLimits

0x7dc2,	// (0x00014891) list_single_cale_mrui_pane

0xe7ee,	// (0x0001b2bd) list_single_cale_mrui_row_pane_ParamLimits

0xe7ee,	// (0x0001b2bd) list_single_cale_mrui_row_pane

0x7de3,	// (0x000148b2) list_single_cale_mrui_row_pane_g1_ParamLimits

0x7de3,	// (0x000148b2) list_single_cale_mrui_row_pane_g1

0x7e1b,	// (0x000148ea) list_single_cale_mrui_row_pane_t1_ParamLimits

0x7e1b,	// (0x000148ea) list_single_cale_mrui_row_pane_t1

0x7e2d,	// (0x000148fc) list_single_cale_mrui_row_pane_t2_ParamLimits

0x7e2d,	// (0x000148fc) list_single_cale_mrui_row_pane_t2

0x7e93,	// (0x00014962) list_single_cale_mrui_row_pane_t3_ParamLimits

0x7e93,	// (0x00014962) list_single_cale_mrui_row_pane_t3

0x7ec2,	// (0x00014991) list_single_cale_mrui_row_pane_t4_ParamLimits

0x7ec2,	// (0x00014991) list_single_cale_mrui_row_pane_t4

0x0003,

0xfd43,	// (0x0001c812) list_single_cale_mrui_row_pane_t_ParamLimits

0xfd43,	// (0x0001c812) list_single_cale_mrui_row_pane_t

0x7ef1,	// (0x000149c0) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x7ef1,	// (0x000149c0) list_single_cmail_header_editor_pane_bg_cp01

0x7f15,	// (0x000149e4) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x7f15,	// (0x000149e4) list_single_cmail_header_editor_pane_bg_cp02

0x7f33,	// (0x00014a02) main_radioblah_text_pane_t1_ParamLimits

0x7f33,	// (0x00014a02) main_radioblah_text_pane_t1

0xe811,	// (0x0001b2e0) cam6_indi_pane_cp01

0xe819,	// (0x0001b2e8) cam6_mode_pane_cp01

0xe821,	// (0x0001b2f0) cam6_pano_pane

0xe82a,	// (0x0001b2f9) cam6_zoom_pane_cp01

0xe832,	// (0x0001b301) cam6_pano_image_pane

0xe83b,	// (0x0001b30a) cam6_pano_pane_g1

0xdf13,	// (0x0001a9e2) cam6_pano_pane_g2

0xe844,	// (0x0001b313) cam6_pano_pane_g3

0xe84d,	// (0x0001b31c) cam6_pano_pane_g4

0xc98b,	// (0x0001945a) cam6_pano_pane_g5

0xe856,	// (0x0001b325) cam6_pano_pane_g6

0xe85e,	// (0x0001b32d) cam6_pano_pane_g7

0xe866,	// (0x0001b335) cam6_pano_pane_g8

0xe86f,	// (0x0001b33e) cam6_pano_pane_g9

0x0008,

0xfd4c,	// (0x0001c81b) cam6_pano_pane_g

0x959f,	// (0x0001606e) main_browser_tag_pane

0xe635,	// (0x0001b104) grid_navstr_albumart_pane

0xe878,	// (0x0001b347) cell_navstr_albumart_pane_ParamLimits

0xe878,	// (0x0001b347) cell_navstr_albumart_pane

0xac88,	// (0x00017757) cell_navstr_albumart_pane_g1

0xbda3,	// (0x00018872) cell_navstr_albumart_pane_g2

0xbdb3,	// (0x00018882) cell_navstr_albumart_pane_g3

0xbdab,	// (0x0001887a) cell_navstr_albumart_pane_g4

0x0003,

0xfd5f,	// (0x0001c82e) cell_navstr_albumart_pane_g

0x7f4c,	// (0x00014a1b) bt_list_pane_ParamLimits

0x7f4c,	// (0x00014a1b) bt_list_pane

0x7f5f,	// (0x00014a2e) bt_list_pane_t1

0x7f6e,	// (0x00014a3d) bt_list_pane_t2

0x0001,

0xfd68,	// (0x0001c837) bt_list_pane_t

0x959f,	// (0x0001606e) main_cale_prevew_pane

0x7f7d,	// (0x00014a4c) popup_cale_preview_window_ParamLimits

0x7f7d,	// (0x00014a4c) popup_cale_preview_window

0x95f2,	// (0x000160c1) bg_popup_preview_window_pane_cp05_ParamLimits

0x95f2,	// (0x000160c1) bg_popup_preview_window_pane_cp05

0xe88f,	// (0x0001b35e) list_cale_preview_pane_ParamLimits

0xe88f,	// (0x0001b35e) list_cale_preview_pane

0x7f92,	// (0x00014a61) list_double_cale_preview_pane_ParamLimits

0x7f92,	// (0x00014a61) list_double_cale_preview_pane

0x7fa3,	// (0x00014a72) list_single_cale_preview_pane_ParamLimits

0x7fa3,	// (0x00014a72) list_single_cale_preview_pane

0xe89b,	// (0x0001b36a) list_single_cale_preview_pane_g1

0xe8a3,	// (0x0001b372) list_single_cale_preview_pane_t1_ParamLimits

0xe8a3,	// (0x0001b372) list_single_cale_preview_pane_t1

0x7fb7,	// (0x00014a86) list_double_cale_preview_pane_g1

0x7fbf,	// (0x00014a8e) list_double_cale_preview_pane_t1_ParamLimits

0x7fbf,	// (0x00014a8e) list_double_cale_preview_pane_t1

0x7fd4,	// (0x00014aa3) list_double_cale_preview_pane_t2_ParamLimits

0x7fd4,	// (0x00014aa3) list_double_cale_preview_pane_t2

0x0001,

0xfd6d,	// (0x0001c83c) list_double_cale_preview_pane_t_ParamLimits

0xfd6d,	// (0x0001c83c) list_double_cale_preview_pane_t

0x959f,	// (0x0001606e) main_ezdial_pane

0x95f2,	// (0x000160c1) main_sp_fs_email_pane_ParamLimits

0x77aa,	// (0x00014279) cmail_ddmenu_btn01_pane_ParamLimits

0x77aa,	// (0x00014279) cmail_ddmenu_btn01_pane

0x77bd,	// (0x0001428c) cmail_ddmenu_btn02_pane_ParamLimits

0x77bd,	// (0x0001428c) cmail_ddmenu_btn02_pane

0x77e0,	// (0x000142af) cmail_ddmenu_btn03_pane_ParamLimits

0x77e0,	// (0x000142af) cmail_ddmenu_btn03_pane

0x787d,	// (0x0001434c) main_sp_fs_ctrlbar_pane_ParamLimits

0x789e,	// (0x0001436d) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x7b91,	// (0x00014660) list_cmail_body_pane_ParamLimits

0xe565,	// (0x0001b034) bg_button_pane_cp12

0xe57a,	// (0x0001b049) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe57a,	// (0x0001b049) list_single_cmail_header_detail_pane_g3

0xe587,	// (0x0001b056) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe587,	// (0x0001b056) list_single_cmail_header_detail_pane_t2

0x0001,

0xfcf0,	// (0x0001c7bf) list_single_cmail_header_detail_pane_t_ParamLimits

0xfcf0,	// (0x0001c7bf) list_single_cmail_header_detail_pane_t

0xe69d,	// (0x0001b16c) phacti_term_pane_t2_ParamLimits

0xe69d,	// (0x0001b16c) phacti_term_pane_t2

0x0001,

0xfcfa,	// (0x0001c7c9) phacti_term_pane_t_ParamLimits

0xfcfa,	// (0x0001c7c9) phacti_term_pane_t

0xe8b8,	// (0x0001b387) aid_size_list_single_double

0x7fec,	// (0x00014abb) popup_ezdial_listscroll_window

0x8002,	// (0x00014ad1) popup_number_entry_window_cp01

0x9ff1,	// (0x00016ac0) bg_popup_call_pane_cp09

0xe8c4,	// (0x0001b393) ezdial_list_pane

0xe8cc,	// (0x0001b39b) scroll_pane_cp23

0xabe5,	// (0x000176b4) bg_button_pane_cp028_ParamLimits

0xabe5,	// (0x000176b4) bg_button_pane_cp028

0x800e,	// (0x00014add) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x800e,	// (0x00014add) cmail_ddmenu_btn01_pane_g1

0x801a,	// (0x00014ae9) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x801a,	// (0x00014ae9) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd72,	// (0x0001c841) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd72,	// (0x0001c841) cmail_ddmenu_btn01_pane_g

0xe8d4,	// (0x0001b3a3) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe8d4,	// (0x0001b3a3) cmail_ddmenu_btn01_pane_t1

0xabe5,	// (0x000176b4) bg_button_pane_cp029_ParamLimits

0xabe5,	// (0x000176b4) bg_button_pane_cp029

0x8026,	// (0x00014af5) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8026,	// (0x00014af5) cmail_ddmenu_btn02_pane_g1

0x803e,	// (0x00014b0d) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x803e,	// (0x00014b0d) cmail_ddmenu_btn02_pane_t1

0x95f2,	// (0x000160c1) bg_button_pane_cp031_ParamLimits

0x95f2,	// (0x000160c1) bg_button_pane_cp031

0x8026,	// (0x00014af5) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8026,	// (0x00014af5) cmail_ddmenu_btn03_pane_g1

0x803e,	// (0x00014b0d) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x803e,	// (0x00014b0d) cmail_ddmenu_btn03_pane_t1

0x539d,	// (0x00011e6c) cell_dialer2_keypad_pane_t1_ParamLimits

0x53b7,	// (0x00011e86) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x53b7,	// (0x00011e86) cell_dialer2_keypad_pane_t1_copy1

0x7082,	// (0x00013b51) ncimui_group_button_pane

0x95f2,	// (0x000160c1) main_sp_fs_calendar_pane_ParamLimits

0x7b91,	// (0x00014660) list_single_cmail_header_caption_pane_ParamLimits

0xe6e8,	// (0x0001b1b7) aid_recal_txt_sm_pane

0x959f,	// (0x0001606e) mian_recal_day_pane

0xe72a,	// (0x0001b1f9) popup_sp_fs_cale_preview_window_ParamLimits

0xe8e9,	// (0x0001b3b8) list_recal_day_pane

0xe92b,	// (0x0001b3fa) list_single_recal_day_pane_ParamLimits

0xe92b,	// (0x0001b3fa) list_single_recal_day_pane

0xe93d,	// (0x0001b40c) list_single_recal_day_pane_g1_ParamLimits

0xe93d,	// (0x0001b40c) list_single_recal_day_pane_g1

0xe949,	// (0x0001b418) list_single_recal_day_pane_g2_ParamLimits

0xe949,	// (0x0001b418) list_single_recal_day_pane_g2

0xe955,	// (0x0001b424) list_single_recal_day_pane_g3_ParamLimits

0xe955,	// (0x0001b424) list_single_recal_day_pane_g3

0x8062,	// (0x00014b31) list_single_recal_day_pane_g4_ParamLimits

0x8062,	// (0x00014b31) list_single_recal_day_pane_g4

0xe961,	// (0x0001b430) list_single_recal_day_pane_g5_ParamLimits

0xe961,	// (0x0001b430) list_single_recal_day_pane_g5

0x807a,	// (0x00014b49) list_single_recal_day_pane_g6_ParamLimits

0x807a,	// (0x00014b49) list_single_recal_day_pane_g6

0x0004,

0xfd81,	// (0x0001c850) list_single_recal_day_pane_g_ParamLimits

0xfd81,	// (0x0001c850) list_single_recal_day_pane_g

0xe975,	// (0x0001b444) list_single_recal_day_pane_t1

0x8086,	// (0x00014b55) list_single_recal_day_pane_t2

0x0001,

0xfd8c,	// (0x0001c85b) list_single_recal_day_pane_t

0x8098,	// (0x00014b67) ncimui_query_button_pane_ParamLimits

0x8098,	// (0x00014b67) ncimui_query_button_pane

0x80a8,	// (0x00014b77) ncimui_query_button_pane_t1_ParamLimits

0x80a8,	// (0x00014b77) ncimui_query_button_pane_t1

0xe987,	// (0x0001b456) ncimui_query_button_pane_t2_ParamLimits

0xe987,	// (0x0001b456) ncimui_query_button_pane_t2

0x0001,

0xfd91,	// (0x0001c860) ncimui_query_button_pane_t_ParamLimits

0xfd91,	// (0x0001c860) ncimui_query_button_pane_t

0x80bb,	// (0x00014b8a) query_button_pane_ParamLimits

0x80bb,	// (0x00014b8a) query_button_pane

0x959f,	// (0x0001606e) bg_button_pane_cp0028

0xe99a,	// (0x0001b469) query_button_pane_t1

0x3f2d,	// (0x000109fc) main_tport_pane_ParamLimits

0x7aa4,	// (0x00014573) bg_popup_window_pane_cp01_ParamLimits

0x7aa4,	// (0x00014573) bg_popup_window_pane_cp01

0x7abb,	// (0x0001458a) heading_pane_cp08_ParamLimits

0x7abb,	// (0x0001458a) heading_pane_cp08

0x7acc,	// (0x0001459b) heading_pane_cp07_ParamLimits

0x7acc,	// (0x0001459b) heading_pane_cp07

0xe506,	// (0x0001afd5) cell_tport_appsw_pane_g2

0x0002,

0xfcdd,	// (0x0001c7ac) cell_tport_appsw_pane_g

0xac80,	// (0x0001774f) input_candi_list_open_g1

0xa4a0,	// (0x00016f6f) list_cale_time_pane_g6_ParamLimits

0xa4a0,	// (0x00016f6f) list_cale_time_pane_g6

0x4522,	// (0x00010ff1) aid_size_touch_calib_1_ParamLimits

0x4522,	// (0x00010ff1) aid_size_touch_calib_1

0x4534,	// (0x00011003) aid_size_touch_calib_2_ParamLimits

0x4534,	// (0x00011003) aid_size_touch_calib_2

0x454a,	// (0x00011019) aid_size_touch_calib_3_ParamLimits

0x454a,	// (0x00011019) aid_size_touch_calib_3

0x4562,	// (0x00011031) aid_size_touch_calib_4_ParamLimits

0x4562,	// (0x00011031) aid_size_touch_calib_4

0x4576,	// (0x00011045) main_touch_calib_button_group_pane_ParamLimits

0x4576,	// (0x00011045) main_touch_calib_button_group_pane

0x458e,	// (0x0001105d) main_touch_calib_pane_g1_ParamLimits

0x45a0,	// (0x0001106f) main_touch_calib_pane_g2_ParamLimits

0x45b2,	// (0x00011081) main_touch_calib_pane_g3_ParamLimits

0x45c4,	// (0x00011093) main_touch_calib_pane_g4_ParamLimits

0xf6dd,	// (0x0001c1ac) main_touch_calib_pane_g_ParamLimits

0x45d6,	// (0x000110a5) main_touch_calib_pane_t1_ParamLimits

0x45ee,	// (0x000110bd) main_touch_calib_pane_t2_ParamLimits

0x4606,	// (0x000110d5) main_touch_calib_pane_t3_ParamLimits

0x4618,	// (0x000110e7) main_touch_calib_pane_t4_ParamLimits

0x462a,	// (0x000110f9) main_touch_calib_pane_t5_ParamLimits

0xf6e6,	// (0x0001c1b5) main_touch_calib_pane_t_ParamLimits

0xc78c,	// (0x0001925b) list_single_fp_cale_pane_g3_ParamLimits

0xc78c,	// (0x0001925b) list_single_fp_cale_pane_g3

0x95f2,	// (0x000160c1) bg_button_pane_cp012_ParamLimits

0x95f2,	// (0x000160c1) bg_vkb2_func_pane_cp03_ParamLimits

0x62f1,	// (0x00012dc0) cell_vitu2_function_top_pane_g1_ParamLimits

0x95f2,	// (0x000160c1) bg_vkb2_func_pane_cp04_ParamLimits

0x7012,	// (0x00013ae1) main_ncimui_button_group_pane_ParamLimits

0x7012,	// (0x00013ae1) main_ncimui_button_group_pane

0x7070,	// (0x00013b3f) main_ncimui_pane_t3_ParamLimits

0x7070,	// (0x00013b3f) main_ncimui_pane_t3

0xe64b,	// (0x0001b11a) phacti_button_group_pane

0xe8b8,	// (0x0001b387) aid_size_list_single_double_ParamLimits

0x7fec,	// (0x00014abb) popup_ezdial_listscroll_window_ParamLimits

0x8002,	// (0x00014ad1) popup_number_entry_window_cp01_ParamLimits

0x80cd,	// (0x00014b9c) phacti_button_pane_ParamLimits

0x80cd,	// (0x00014b9c) phacti_button_pane

0x959f,	// (0x0001606e) bg_button_pane_cp14

0xe9a8,	// (0x0001b477) phacti_button_pane_t1

0x80dc,	// (0x00014bab) main_touch_calib_button_pane_ParamLimits

0x80dc,	// (0x00014bab) main_touch_calib_button_pane

0x9d8c,	// (0x0001685b) bg_button_pane_cp18_ParamLimits

0x9d8c,	// (0x0001685b) bg_button_pane_cp18

0x80f7,	// (0x00014bc6) main_touch_calib_button_pane_t1_ParamLimits

0x80f7,	// (0x00014bc6) main_touch_calib_button_pane_t1

0x810d,	// (0x00014bdc) main_touch_calib_button_pane_t2_ParamLimits

0x810d,	// (0x00014bdc) main_touch_calib_button_pane_t2

0x0001,

0xfd96,	// (0x0001c865) main_touch_calib_button_pane_t_ParamLimits

0xfd96,	// (0x0001c865) main_touch_calib_button_pane_t

0x959f,	// (0x0001606e) cell_ncimui_button_pane

0x959f,	// (0x0001606e) bg_button_pane_cp032

0xe9b6,	// (0x0001b485) cell_ncimui_button_pane_t1

0xcee2,	// (0x000199b1) image3_infobar_pane_ParamLimits

0xcee2,	// (0x000199b1) image3_infobar_pane

0x740b,	// (0x00013eda) fs_bigclock_status_pane_ParamLimits

0x740b,	// (0x00013eda) fs_bigclock_status_pane

0x7418,	// (0x00013ee7) main_fs_bigclock_clock_pane_ParamLimits

0x7418,	// (0x00013ee7) main_fs_bigclock_clock_pane

0x743a,	// (0x00013f09) main_fs_bigclock_indi_pane_ParamLimits

0x743a,	// (0x00013f09) main_fs_bigclock_indi_pane

0x7464,	// (0x00013f33) main_fs_bigclock_swipe_pane_ParamLimits

0x7464,	// (0x00013f33) main_fs_bigclock_swipe_pane

0x959f,	// (0x0001606e) main_fs_clock_dumped_data

0xe020,	// (0x0001aaef) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe020,	// (0x0001aaef) list_single_fs_bigclock_indicator_pane_g1

0xe03a,	// (0x0001ab09) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe03a,	// (0x0001ab09) list_single_fs_bigclock_indicator_pane_g2

0xe054,	// (0x0001ab23) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe054,	// (0x0001ab23) list_single_fs_bigclock_indicator_pane_g3

0xe06e,	// (0x0001ab3d) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe06e,	// (0x0001ab3d) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc04,	// (0x0001c6d3) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc04,	// (0x0001c6d3) list_single_fs_bigclock_indicator_pane_g

0xe097,	// (0x0001ab66) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe097,	// (0x0001ab66) list_single_fs_bigclock_indicator_pane_t1

0xe0bf,	// (0x0001ab8e) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe0bf,	// (0x0001ab8e) list_single_fs_bigclock_indicator_pane_t2

0xe0e7,	// (0x0001abb6) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe0e7,	// (0x0001abb6) list_single_fs_bigclock_indicator_pane_t3

0xe10f,	// (0x0001abde) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe10f,	// (0x0001abde) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc0f,	// (0x0001c6de) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc0f,	// (0x0001c6de) list_single_fs_bigclock_indicator_pane_t

0xe9c4,	// (0x0001b493) image3_infobar_fav_pane_ParamLimits

0xe9c4,	// (0x0001b493) image3_infobar_fav_pane

0xe9d4,	// (0x0001b4a3) image3_infobar_loc_pane_ParamLimits

0xe9d4,	// (0x0001b4a3) image3_infobar_loc_pane

0xe9e8,	// (0x0001b4b7) image3_infobar_time_pane_ParamLimits

0xe9e8,	// (0x0001b4b7) image3_infobar_time_pane

0xa069,	// (0x00016b38) image3_infobar_time_pane_g1

0xe9f8,	// (0x0001b4c7) image3_infobar_time_pane_t1

0xa069,	// (0x00016b38) image3_infobar_loc_pane_g1

0xea06,	// (0x0001b4d5) image3_infobar_loc_pane_g2

0x0001,

0xfd9b,	// (0x0001c86a) image3_infobar_loc_pane_g

0xea0e,	// (0x0001b4dd) image3_infobar_loc_pane_t1

0xa069,	// (0x00016b38) image3_infobar_fav_pane_g1

0xea1c,	// (0x0001b4eb) image3_infobar_fav_pane_g2

0x0001,

0xfda0,	// (0x0001c86f) image3_infobar_fav_pane_g

0xea24,	// (0x0001b4f3) fs_bigclock_status_battery_pane

0xea2d,	// (0x0001b4fc) fs_bigclock_status_signal_pane

0xea36,	// (0x0001b505) fs_bigclock_status_title_pane

0xea3f,	// (0x0001b50e) fs_bigclock_status_signal_pane_g1

0xea48,	// (0x0001b517) fs_bigclock_status_signal_pane_g2

0x0001,

0xfda5,	// (0x0001c874) fs_bigclock_status_signal_pane_g

0xea50,	// (0x0001b51f) fs_bigclock_status_battery_pane_g1

0xea59,	// (0x0001b528) fs_bigclock_status_battery_pane_g2

0x0001,

0xfdaa,	// (0x0001c879) fs_bigclock_status_battery_pane_g

0xea61,	// (0x0001b530) fs_bigclock_status_title_pane_t1

0x812b,	// (0x00014bfa) main_fs_bigclock_clock_pane_g1

0x813d,	// (0x00014c0c) main_fs_bigclock_clock_pane_g2

0x814e,	// (0x00014c1d) main_fs_bigclock_clock_pane_g3

0x814e,	// (0x00014c1d) main_fs_bigclock_clock_pane_g4

0x0003,

0xfdaf,	// (0x0001c87e) main_fs_bigclock_clock_pane_g

0x8161,	// (0x00014c30) main_fs_bigclock_clock_pane_t1

0x817c,	// (0x00014c4b) main_fs_bigclock_clock_pane_t2

0x0001,

0xfdb8,	// (0x0001c887) main_fs_bigclock_clock_pane_t

0xea6f,	// (0x0001b53e) list_single_fs_bigclock_indicator_pane_ParamLimits

0xea6f,	// (0x0001b53e) list_single_fs_bigclock_indicator_pane

0xea80,	// (0x0001b54f) list_single_fs_bigclock_pane_ParamLimits

0xea80,	// (0x0001b54f) list_single_fs_bigclock_pane

0xeaa6,	// (0x0001b575) main_fs_bigclock_indicator_pane_t1

0xeab5,	// (0x0001b584) list_single_fs_bigclock_pane_g1

0xeabd,	// (0x0001b58c) list_single_fs_bigclock_pane_t1

0xa069,	// (0x00016b38) main_fs_bigclock_swipe_pane_g1

0xeafd,	// (0x0001b5cc) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfdc9,	// (0x0001c898) main_fs_bigclock_swipe_pane_g

0xeb05,	// (0x0001b5d4) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xeb05,	// (0x0001b5d4) main_fs_bigclock_swipe_pane_t1

0x31a0,	// (0x0000fc6f) call_type_pane_ParamLimits

0x959f,	// (0x0001606e) main_btmg_pane

0x7e0f,	// (0x000148de) list_single_cale_mrui_row_pane_g2_ParamLimits

0x7e0f,	// (0x000148de) list_single_cale_mrui_row_pane_g2

0x0002,

0xfd3c,	// (0x0001c80b) list_single_cale_mrui_row_pane_g_ParamLimits

0xfd3c,	// (0x0001c80b) list_single_cale_mrui_row_pane_g

0xe912,	// (0x0001b3e1) list_recal_vselct_arw_lo_pane

0xe91a,	// (0x0001b3e9) list_recal_vselct_arw_up_pane

0xe922,	// (0x0001b3f1) list_recal_vselct_pane

0xeb22,	// (0x0001b5f1) btmg_button_pane

0x81dc,	// (0x00014cab) main_btmg_pane_g1

0x959f,	// (0x0001606e) bg_button_pane_cp044

0xeb2a,	// (0x0001b5f9) btmg_button_pane_t1

0xbf43,	// (0x00018a12) aid_listscroll_gen

0x95f2,	// (0x000160c1) main_cntbar_detail_pane

0xe52c,	// (0x0001affb) list_cmail_folder_pane

0xe54b,	// (0x0001b01a) sp_fs_scroll_pane_cp03_ParamLimits

0xeb38,	// (0x0001b607) list_single_fs_dyc_pane_cp01_ParamLimits

0xeb38,	// (0x0001b607) list_single_fs_dyc_pane_cp01

0xeb4e,	// (0x0001b61d) aid_size_cmail_indent

0xeb57,	// (0x0001b626) list_single_dyc_row_pane_cp01

0x820c,	// (0x00014cdb) cntbar_detail_list_pane_ParamLimits

0x820c,	// (0x00014cdb) cntbar_detail_list_pane

0x8252,	// (0x00014d21) main_cntbar_detail_cont_pane_ParamLimits

0x8252,	// (0x00014d21) main_cntbar_detail_cont_pane

0x8266,	// (0x00014d35) scroll_pane_cp032_ParamLimits

0x8266,	// (0x00014d35) scroll_pane_cp032

0x8272,	// (0x00014d41) cntbar_detail_list_event_pane_ParamLimits

0x8272,	// (0x00014d41) cntbar_detail_list_event_pane

0x821c,	// (0x00014ceb) cntbar_detail_list_shct_pane

0xeb60,	// (0x0001b62f) aid_list_gen

0x9edf,	// (0x000169ae) aid_scroll

0xd6d6,	// (0x0001a1a5) aid_size_touch_scroll_bar

0xd78a,	// (0x0001a259) aid_list_double

0x8283,	// (0x00014d52) aid_list_single

0xd78a,	// (0x0001a259) aid_list_single_lg

0x828c,	// (0x00014d5b) aid_list_z_g_a_sm

0x8294,	// (0x00014d63) aid_list_z_g_d

0x829c,	// (0x00014d6b) aid_txt_z_prm

0x82aa,	// (0x00014d79) aid_txt_z_prm_cp01

0x82b8,	// (0x00014d87) aid_txt_z_sec

0x82c6,	// (0x00014d95) main_cntbar_detail_cont_pane_g1_ParamLimits

0x82c6,	// (0x00014d95) main_cntbar_detail_cont_pane_g1

0x82da,	// (0x00014da9) main_cntbar_detail_cont_pane_g2_ParamLimits

0x82da,	// (0x00014da9) main_cntbar_detail_cont_pane_g2

0x0001,

0xfdce,	// (0x0001c89d) main_cntbar_detail_cont_pane_g_ParamLimits

0xfdce,	// (0x0001c89d) main_cntbar_detail_cont_pane_g

0xeb69,	// (0x0001b638) main_cntbar_detail_cont_pane_t1

0xeb77,	// (0x0001b646) main_cntbar_detail_cont_pane_t2

0xeb85,	// (0x0001b654) main_cntbar_detail_cont_pane_t3

0x0002,

0xfdd3,	// (0x0001c8a2) main_cntbar_detail_cont_pane_t

0x82ea,	// (0x00014db9) cell_cntbar_detail_list_shct_pane_ParamLimits

0x82ea,	// (0x00014db9) cell_cntbar_detail_list_shct_pane

0xeb93,	// (0x0001b662) cntbar_detail_list_shct_pane_g1

0xeb9c,	// (0x0001b66b) cntbar_detail_list_shct_pane_g2

0x0001,

0xfdda,	// (0x0001c8a9) cntbar_detail_list_shct_pane_g

0x82fc,	// (0x00014dcb) cntbar_detail_list_event_pane_g1_ParamLimits

0x82fc,	// (0x00014dcb) cntbar_detail_list_event_pane_g1

0x8308,	// (0x00014dd7) cntbar_detail_list_event_pane_g2_ParamLimits

0x8308,	// (0x00014dd7) cntbar_detail_list_event_pane_g2

0x0005,

0xfddf,	// (0x0001c8ae) cntbar_detail_list_event_pane_g_ParamLimits

0xfddf,	// (0x0001c8ae) cntbar_detail_list_event_pane_g

0x8374,	// (0x00014e43) cntbar_detail_list_event_pane_t1_ParamLimits

0x8374,	// (0x00014e43) cntbar_detail_list_event_pane_t1

0x8389,	// (0x00014e58) cntbar_detail_list_event_pane_t2_ParamLimits

0x8389,	// (0x00014e58) cntbar_detail_list_event_pane_t2

0x0002,

0xfdec,	// (0x0001c8bb) cntbar_detail_list_event_pane_t_ParamLimits

0xfdec,	// (0x0001c8bb) cntbar_detail_list_event_pane_t

0xa069,	// (0x00016b38) cell_cntbar_detail_list_shct_pane_g1

0xaaa6,	// (0x00017575) navi_pane_mv_g3

0x95f2,	// (0x000160c1) main_cntbar_detail_pane_ParamLimits

0x959f,	// (0x0001606e) main_notif_wgt_pane

0xcc16,	// (0x000196e5) aid_tch_main_mp4_pane_g4

0xce62,	// (0x00019931) popup_slider_window_cp02

0xe908,	// (0x0001b3d7) list_recal_day_event_pane

0x81e4,	// (0x00014cb3) cntbar_detail_btn_pane_ParamLimits

0x81e4,	// (0x00014cb3) cntbar_detail_btn_pane

0x81f7,	// (0x00014cc6) cntbar_detail_btn_pane_cp01_ParamLimits

0x81f7,	// (0x00014cc6) cntbar_detail_btn_pane_cp01

0x821c,	// (0x00014ceb) cntbar_detail_list_shct_pane_ParamLimits

0x822c,	// (0x00014cfb) cntbar_detail_pane_g1_ParamLimits

0x822c,	// (0x00014cfb) cntbar_detail_pane_g1

0x823c,	// (0x00014d0b) cntbar_detail_pane_t1_ParamLimits

0x823c,	// (0x00014d0b) cntbar_detail_pane_t1

0x8314,	// (0x00014de3) cntbar_detail_list_event_pane_g3_ParamLimits

0x8314,	// (0x00014de3) cntbar_detail_list_event_pane_g3

0x832c,	// (0x00014dfb) cntbar_detail_list_event_pane_g4_ParamLimits

0x832c,	// (0x00014dfb) cntbar_detail_list_event_pane_g4

0x8344,	// (0x00014e13) cntbar_detail_list_event_pane_g5_ParamLimits

0x8344,	// (0x00014e13) cntbar_detail_list_event_pane_g5

0x835c,	// (0x00014e2b) cntbar_detail_list_event_pane_g6_ParamLimits

0x835c,	// (0x00014e2b) cntbar_detail_list_event_pane_g6

0x839e,	// (0x00014e6d) cntbar_detail_list_event_pane_t3_ParamLimits

0x839e,	// (0x00014e6d) cntbar_detail_list_event_pane_t3

0x83b0,	// (0x00014e7f) popup_notif_wgt_window_ParamLimits

0x83b0,	// (0x00014e7f) popup_notif_wgt_window

0x83c5,	// (0x00014e94) popup_submenu_window_cp01_ParamLimits

0x83c5,	// (0x00014e94) popup_submenu_window_cp01

0x9ff1,	// (0x00016ac0) bg_popup_window_pane_cp10

0xeba5,	// (0x0001b674) listscroll_notif_wgt_pane

0xebb6,	// (0x0001b685) list_notif_wgt_window

0xebbf,	// (0x0001b68e) scroll_pane_cp033

0x83d5,	// (0x00014ea4) list_notif_wgt_row_pane_ParamLimits

0x83d5,	// (0x00014ea4) list_notif_wgt_row_pane

0xebc8,	// (0x0001b697) aid_size_list_notif_wgt_del

0xebd5,	// (0x0001b6a4) list_notif_wgt_row_pane_g1

0xebe1,	// (0x0001b6b0) list_notif_wgt_row_pane_g2

0xebf5,	// (0x0001b6c4) list_notif_wgt_row_pane_g3

0x0002,

0xfdf3,	// (0x0001c8c2) list_notif_wgt_row_pane_g

0xec02,	// (0x0001b6d1) list_notif_wgt_row_pane_t1

0xec18,	// (0x0001b6e7) list_notif_wgt_row_pane_t2

0xec2a,	// (0x0001b6f9) list_notif_wgt_row_pane_t3

0x0002,

0xfdfa,	// (0x0001c8c9) list_notif_wgt_row_pane_t

0xd3d0,	// (0x00019e9f) list_recal_day_event_pane_g1

0xec3c,	// (0x0001b70b) list_recal_day_event_pane_t1

0x959f,	// (0x0001606e) bg_button_pane_cp045

0x83e5,	// (0x00014eb4) cntbar_detail_btn_pane_t1

0xabe5,	// (0x000176b4) main_callh_pane_ParamLimits

0xabe5,	// (0x000176b4) main_callh_pane

0x959f,	// (0x0001606e) main_coverflow0_pane

0x959f,	// (0x0001606e) main_wgtman_pane

0x7478,	// (0x00013f47) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x7478,	// (0x00013f47) main_fs_bigclock_unlock_btn_pane

0xe4fe,	// (0x0001afcd) bg_button_pane_cp16

0xe50e,	// (0x0001afdd) cell_tport_appsw_pane_g3

0x83f3,	// (0x00014ec2) cf0_flow_pane_ParamLimits

0x83f3,	// (0x00014ec2) cf0_flow_pane

0xec4b,	// (0x0001b71a) listscroll_cf0_pane

0xec54,	// (0x0001b723) main_cf0_pane_g1

0x8408,	// (0x00014ed7) main_cf0_pane_t1_ParamLimits

0x8408,	// (0x00014ed7) main_cf0_pane_t1

0x841d,	// (0x00014eec) main_cf0_pane_t2_ParamLimits

0x841d,	// (0x00014eec) main_cf0_pane_t2

0x0001,

0xfe06,	// (0x0001c8d5) main_cf0_pane_t_ParamLimits

0xfe06,	// (0x0001c8d5) main_cf0_pane_t

0xec66,	// (0x0001b735) scroll_pane_cp11

0x8432,	// (0x00014f01) cf0_flow_pane_g1

0x843a,	// (0x00014f09) cf0_flow_pane_g2

0x0001,

0xfe0b,	// (0x0001c8da) cf0_flow_pane_g

0x8442,	// (0x00014f11) cf0_flow_pane_t1

0x959f,	// (0x0001606e) main_call6_pane

0x959f,	// (0x0001606e) main_calllock_pane

0x8450,	// (0x00014f1f) call6_btn_grp_pane_ParamLimits

0x8450,	// (0x00014f1f) call6_btn_grp_pane

0x8466,	// (0x00014f35) call6_pane_g1_ParamLimits

0x8466,	// (0x00014f35) call6_pane_g1

0x8479,	// (0x00014f48) popup_call6_1st_window_ParamLimits

0x8479,	// (0x00014f48) popup_call6_1st_window

0x8488,	// (0x00014f57) popup_call6_2nd_window_ParamLimits

0x8488,	// (0x00014f57) popup_call6_2nd_window

0x8497,	// (0x00014f66) cell_call6_btn_pane_ParamLimits

0x8497,	// (0x00014f66) cell_call6_btn_pane

0x9ff1,	// (0x00016ac0) bg_popup_call2_in_pane_cp03

0xec6f,	// (0x0001b73e) popup_call6_1st_window_g1

0xec77,	// (0x0001b746) popup_call6_1st_window_g2

0xec7f,	// (0x0001b74e) popup_call6_1st_window_g3

0x0002,

0xfe10,	// (0x0001c8df) popup_call6_1st_window_g

0xec87,	// (0x0001b756) popup_call6_1st_window_t1

0xec96,	// (0x0001b765) popup_call6_1st_window_t2

0xeca4,	// (0x0001b773) popup_call6_1st_window_t3

0x0002,

0xfe17,	// (0x0001c8e6) popup_call6_1st_window_t

0x9ff1,	// (0x00016ac0) bg_popup_call2_in_pane_cp04

0xecb2,	// (0x0001b781) popup_call6_2nd_window_g1

0xecba,	// (0x0001b789) popup_call6_2nd_window_g2

0xecc2,	// (0x0001b791) popup_call6_2nd_window_g3

0x0002,

0xfe1e,	// (0x0001c8ed) popup_call6_2nd_window_g

0xecca,	// (0x0001b799) popup_call6_2nd_window_t1

0x959f,	// (0x0001606e) bg_button_pane_cp15

0xecd9,	// (0x0001b7a8) cell_call6_btn_pane_g1

0xece2,	// (0x0001b7b1) cell_call6_btn_pane_t1

0x84ab,	// (0x00014f7a) listscroll_wgtman_pane_ParamLimits

0x84ab,	// (0x00014f7a) listscroll_wgtman_pane

0x84cc,	// (0x00014f9b) wgtman_btn_pane_ParamLimits

0x84cc,	// (0x00014f9b) wgtman_btn_pane

0xa806,	// (0x000172d5) aid_scroll_copy1

0xecf1,	// (0x0001b7c0) list_wgtman_pane

0x850c,	// (0x00014fdb) wgtman_btn_pane_g1_ParamLimits

0x850c,	// (0x00014fdb) wgtman_btn_pane_g1

0x8538,	// (0x00015007) wgtman_btn_pane_t1_ParamLimits

0x8538,	// (0x00015007) wgtman_btn_pane_t1

0xecfb,	// (0x0001b7ca) wgtman_btn_pane_t2_ParamLimits

0xecfb,	// (0x0001b7ca) wgtman_btn_pane_t2

0x0001,

0xfe25,	// (0x0001c8f4) wgtman_btn_pane_t_ParamLimits

0xfe25,	// (0x0001c8f4) wgtman_btn_pane_t

0x8575,	// (0x00015044) listrow_wgtman_pane_ParamLimits

0x8575,	// (0x00015044) listrow_wgtman_pane

0x8587,	// (0x00015056) listrow_wgtman_pane_g1

0x8594,	// (0x00015063) listrow_wgtman_pane_g2

0x0001,

0xfe2a,	// (0x0001c8f9) listrow_wgtman_pane_g

0x85ac,	// (0x0001507b) listrow_wgtman_pane_t1

0x85c4,	// (0x00015093) listrow_wgtman_pane_t2

0x0001,

0xfe2f,	// (0x0001c8fe) listrow_wgtman_pane_t

0x85ea,	// (0x000150b9) wait_bar_pane_cp09

0xed12,	// (0x0001b7e1) main_calllock_btn_pane

0xed1a,	// (0x0001b7e9) main_calllock_pane_g1

0x959f,	// (0x0001606e) bg_button_pane_cp17

0xed23,	// (0x0001b7f2) main_calllock_btn_pane_g1

0xed2c,	// (0x0001b7fb) main_calllock_btn_pane_t1

0x959f,	// (0x0001606e) main_dialer3_pane

0x959f,	// (0x0001606e) main_fmrd2_pane

0xa069,	// (0x00016b38) main_fs_bigclock_unlock_btn_pane_g1

0xed43,	// (0x0001b812) main_fs_bigclock_unlock_btn_pane_t1

0x85fc,	// (0x000150cb) area_fmrd2_info_pane_ParamLimits

0x85fc,	// (0x000150cb) area_fmrd2_info_pane

0x860b,	// (0x000150da) area_fmrd2_visual_pane_ParamLimits

0x860b,	// (0x000150da) area_fmrd2_visual_pane

0x8619,	// (0x000150e8) fmrd2_indi_pane_ParamLimits

0x8619,	// (0x000150e8) fmrd2_indi_pane

0x8626,	// (0x000150f5) area_fmrd2_visual_pane_g1

0x862e,	// (0x000150fd) area_fmrd2_visual_pane_t1

0x863c,	// (0x0001510b) area_fmrd2_visual_pane_t2

0x864a,	// (0x00015119) area_fmrd2_visual_pane_t3

0x0002,

0xfe39,	// (0x0001c908) area_fmrd2_visual_pane_t

0x8658,	// (0x00015127) area_fmrd2_info_pane_g1

0x8660,	// (0x0001512f) area_fmrd2_info_pane_t1

0x866e,	// (0x0001513d) area_fmrd2_info_pane_t2

0x867c,	// (0x0001514b) area_fmrd2_info_pane_t3

0x868a,	// (0x00015159) area_fmrd2_info_pane_t4

0x0003,

0xfe40,	// (0x0001c90f) area_fmrd2_info_pane_t

0x8698,	// (0x00015167) fmrd2_indi_pane_t1

0x86a6,	// (0x00015175) fmrd2_indi_pane_t2

0x86b4,	// (0x00015183) fmrd2_indi_pane_t3

0x0002,

0xfe49,	// (0x0001c918) fmrd2_indi_pane_t

0xe07d,	// (0x0001ab4c) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe07d,	// (0x0001ab4c) list_single_fs_bigclock_indicator_pane_g5

0xe12b,	// (0x0001abfa) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe12b,	// (0x0001abfa) list_single_fs_bigclock_indicator_pane_t5

0x7cdc,	// (0x000147ab) aid_cell_bcale_month_pane_ParamLimits

0x7cdc,	// (0x000147ab) aid_cell_bcale_month_pane

0x7cfa,	// (0x000147c9) bcale_month_pane_ParamLimits

0x7cfa,	// (0x000147c9) bcale_month_pane

0x7d12,	// (0x000147e1) bcale_preview_pane_ParamLimits

0x7d12,	// (0x000147e1) bcale_preview_pane

0xeabd,	// (0x0001b58c) list_single_fs_bigclock_pane_t1_ParamLimits

0xead9,	// (0x0001b5a8) list_single_fs_bigclock_pane_t2_ParamLimits

0xead9,	// (0x0001b5a8) list_single_fs_bigclock_pane_t2

0x0001,

0xfdc4,	// (0x0001c893) list_single_fs_bigclock_pane_t_ParamLimits

0xfdc4,	// (0x0001c893) list_single_fs_bigclock_pane_t

0xed3b,	// (0x0001b80a) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfe34,	// (0x0001c903) main_fs_bigclock_unlock_btn_pane_g

0x86c2,	// (0x00015191) aid_dia3_key_size_ParamLimits

0x86c2,	// (0x00015191) aid_dia3_key_size

0x86d1,	// (0x000151a0) aid_dia3_listrow_size_ParamLimits

0x86d1,	// (0x000151a0) aid_dia3_listrow_size

0x86e4,	// (0x000151b3) dia3_keypad_fun_pane_ParamLimits

0x86e4,	// (0x000151b3) dia3_keypad_fun_pane

0x86f8,	// (0x000151c7) dia3_keypad_num_pane_ParamLimits

0x86f8,	// (0x000151c7) dia3_keypad_num_pane

0x8709,	// (0x000151d8) dia3_listscroll_pane_ParamLimits

0x8709,	// (0x000151d8) dia3_listscroll_pane

0x871a,	// (0x000151e9) dia3_numentry_pane_ParamLimits

0x871a,	// (0x000151e9) dia3_numentry_pane

0xed84,	// (0x0001b853) dia3_list_pane

0xed8d,	// (0x0001b85c) scroll_pane_cp12

0x959f,	// (0x0001606e) bg_dia3_numentry_pane

0x872e,	// (0x000151fd) dia3_numentry_pane_t1

0x873d,	// (0x0001520c) cell_dia3_key_num_pane

0x8745,	// (0x00015214) cell_dia3_key0_fun_pane_ParamLimits

0x8745,	// (0x00015214) cell_dia3_key0_fun_pane

0x8759,	// (0x00015228) cell_dia3_key1_fun_pane_ParamLimits

0x8759,	// (0x00015228) cell_dia3_key1_fun_pane

0x8770,	// (0x0001523f) dia3_listrow_pane

0xdd8c,	// (0x0001a85b) bg_dia3_numentry_pane_g1

0x959f,	// (0x0001606e) bg_button_pane_cp21

0xed96,	// (0x0001b865) cell_dia3_key_num_pane_t1

0xeda4,	// (0x0001b873) cell_dia3_key_num_pane_t2

0xedb3,	// (0x0001b882) cell_dia3_key_num_pane_t3

0xedc2,	// (0x0001b891) cell_dia3_key_num_pane_t4

0x0003,

0xfe50,	// (0x0001c91f) cell_dia3_key_num_pane_t

0x959f,	// (0x0001606e) bg_button_pane_cp19

0xedd1,	// (0x0001b8a0) cell_dia3_key0_fun_pane_g1

0x959f,	// (0x0001606e) bg_button_pane_cp20

0x8782,	// (0x00015251) cell_dia3_key1_fun_pane_g1

0x878a,	// (0x00015259) area_left_week_number_pane

0x8796,	// (0x00015265) area_top_day_name_pane

0x87a7,	// (0x00015276) frame_month_view_pane

0xedd9,	// (0x0001b8a8) grid_month_view_pane

0x87b8,	// (0x00015287) cell_top_day_name_pane_ParamLimits

0x87b8,	// (0x00015287) cell_top_day_name_pane

0x87db,	// (0x000152aa) cell_area_left_week_number_pane_ParamLimits

0x87db,	// (0x000152aa) cell_area_left_week_number_pane

0x87ef,	// (0x000152be) cell_month_view_pane_ParamLimits

0x87ef,	// (0x000152be) cell_month_view_pane

0xede7,	// (0x0001b8b6) frm_month_g1

0x8814,	// (0x000152e3) frm_month_g2

0x8825,	// (0x000152f4) frm_month_g3

0x8836,	// (0x00015305) frm_month_g4

0x8847,	// (0x00015316) frm_month_g5

0x8858,	// (0x00015327) frm_month_g6

0x8869,	// (0x00015338) frm_month_g7

0xedf4,	// (0x0001b8c3) frm_month_g8

0x887a,	// (0x00015349) frm_month_g9

0x888a,	// (0x00015359) frm_month_g10

0x889a,	// (0x00015369) frm_month_g11

0x88aa,	// (0x00015379) frm_month_g12

0x88ba,	// (0x00015389) frm_month_g13

0x88ca,	// (0x00015399) frm_month_g14

0x88da,	// (0x000153a9) frm_month_g15

0x88ec,	// (0x000153bb) frm_month_g16

0x000f,

0xfe59,	// (0x0001c928) frm_month_g

0xee01,	// (0x0001b8d0) cell_top_day_name_pane_t1

0x88fe,	// (0x000153cd) cell_area_left_week_number_pane_g1

0x890a,	// (0x000153d9) cell_area_left_week_number_pane_t1

0x9ce6,	// (0x000167b5) cell_month_view_pane_g1

0x891d,	// (0x000153ec) cell_month_view_pane_t1

0x959f,	// (0x0001606e) main_fps_pane

0xe317,	// (0x0001ade6) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe317,	// (0x0001ade6) cmail_ddmenu_btn02_pane_cp1

0xe333,	// (0x0001ae02) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe333,	// (0x0001ae02) cmail_ddmenu_btn02_pane_cp2

0x8032,	// (0x00014b01) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8032,	// (0x00014b01) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfd77,	// (0x0001c846) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfd77,	// (0x0001c846) cmail_ddmenu_btn02_pane_g

0x8050,	// (0x00014b1f) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8050,	// (0x00014b1f) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfd7c,	// (0x0001c84b) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfd7c,	// (0x0001c84b) cmail_ddmenu_btn02_pane_t

0x8930,	// (0x000153ff) fps_text_pane_ParamLimits

0x8930,	// (0x000153ff) fps_text_pane

0x8946,	// (0x00015415) main_fps_pane_g1_ParamLimits

0x8946,	// (0x00015415) main_fps_pane_g1

0x895c,	// (0x0001542b) wait_bar_pane_cp010_ParamLimits

0x895c,	// (0x0001542b) wait_bar_pane_cp010

0x896d,	// (0x0001543c) fps_text_pane_t1_ParamLimits

0x896d,	// (0x0001543c) fps_text_pane_t1

0xed72,	// (0x0001b841) cam4_image_uncrop_pane_g1

0xed7b,	// (0x0001b84a) cam4_image_uncrop_pane_g2

0x57de,	// (0x000122ad) cam4_image_uncrop_pane_g3

0x57e7,	// (0x000122b6) cam4_image_uncrop_pane_g4

0x0003,

0xf87e,	// (0x0001c34d) cam4_image_uncrop_pane_g

0x8770,	// (0x0001523f) dia3_listrow_pane_ParamLimits

0x959f,	// (0x0001606e) main_phob2_pane

0x7b2b,	// (0x000145fa) cell_tport_appsw_pane_cp02_ParamLimits

0x7b2b,	// (0x000145fa) cell_tport_appsw_pane_cp02

0x7b3b,	// (0x0001460a) cell_tport_appsw_pane_cp03_ParamLimits

0x7b3b,	// (0x0001460a) cell_tport_appsw_pane_cp03

0x959f,	// (0x0001606e) phob2_contact_card_pane

0x959f,	// (0x0001606e) phob2_listscroll_pane

0xee14,	// (0x0001b8e3) phob2_list_pane

0xee1c,	// (0x0001b8eb) scroll_pane_cp034

0x8985,	// (0x00015454) phob2_cc_data_pane_ParamLimits

0x8985,	// (0x00015454) phob2_cc_data_pane

0x89a2,	// (0x00015471) phob2_cc_listscroll_pane_ParamLimits

0x89a2,	// (0x00015471) phob2_cc_listscroll_pane

0x8575,	// (0x00015044) list_double_large_graphic_phob2_pane_ParamLimits

0x8575,	// (0x00015044) list_double_large_graphic_phob2_pane

0x89be,	// (0x0001548d) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x89be,	// (0x0001548d) list_double_large_graphic_phob2_pane_g1

0x89cb,	// (0x0001549a) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x89cb,	// (0x0001549a) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfe7a,	// (0x0001c949) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfe7a,	// (0x0001c949) list_double_large_graphic_phob2_pane_g

0x89ef,	// (0x000154be) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x89ef,	// (0x000154be) list_double_large_graphic_phob2_pane_t1

0x8a04,	// (0x000154d3) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x8a04,	// (0x000154d3) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfe83,	// (0x0001c952) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfe83,	// (0x0001c952) list_double_large_graphic_phob2_pane_t

0x959f,	// (0x0001606e) list_highlight_pane_cp024

0xee24,	// (0x0001b8f3) phob2_cc_button_pane

0x8a19,	// (0x000154e8) phob2_cc_data_pane_g1_ParamLimits

0x8a19,	// (0x000154e8) phob2_cc_data_pane_g1

0x8a30,	// (0x000154ff) phob2_cc_data_pane_g2_ParamLimits

0x8a30,	// (0x000154ff) phob2_cc_data_pane_g2

0x0001,

0xfe88,	// (0x0001c957) phob2_cc_data_pane_g_ParamLimits

0xfe88,	// (0x0001c957) phob2_cc_data_pane_g

0x8a42,	// (0x00015511) phob2_cc_data_pane_t1_ParamLimits

0x8a42,	// (0x00015511) phob2_cc_data_pane_t1

0x8a5a,	// (0x00015529) phob2_cc_data_pane_t2_ParamLimits

0x8a5a,	// (0x00015529) phob2_cc_data_pane_t2

0x8a72,	// (0x00015541) phob2_cc_data_pane_t3_ParamLimits

0x8a72,	// (0x00015541) phob2_cc_data_pane_t3

0x0002,

0xfe8d,	// (0x0001c95c) phob2_cc_data_pane_t_ParamLimits

0xfe8d,	// (0x0001c95c) phob2_cc_data_pane_t

0xee2c,	// (0x0001b8fb) phob2_cc_list_pane_ParamLimits

0xee2c,	// (0x0001b8fb) phob2_cc_list_pane

0xdca9,	// (0x0001a778) scroll_pane_cp035_ParamLimits

0xdca9,	// (0x0001a778) scroll_pane_cp035

0x95f2,	// (0x000160c1) bg_button_pane_cp033

0xee38,	// (0x0001b907) phob2_cc_button_pane_g1

0xee44,	// (0x0001b913) phob2_cc_button_pane_t1

0xee59,	// (0x0001b928) phob2_cc_button_pane_t2

0x0001,

0xfe94,	// (0x0001c963) phob2_cc_button_pane_t

0x8a8a,	// (0x00015559) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x8a8a,	// (0x00015559) list_double_large_graphic_phob2_cc_pane

0x8ab8,	// (0x00015587) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x8ab8,	// (0x00015587) list_double_large_graphic_phob2_cc_pane_g1

0x8ac4,	// (0x00015593) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x8ac4,	// (0x00015593) list_double_large_graphic_phob2_cc_pane_g2

0x8ad0,	// (0x0001559f) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x8ad0,	// (0x0001559f) list_double_large_graphic_phob2_cc_pane_g3

0x8adc,	// (0x000155ab) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x8adc,	// (0x000155ab) list_double_large_graphic_phob2_cc_pane_g4

0x8ae8,	// (0x000155b7) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x8ae8,	// (0x000155b7) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe99,	// (0x0001c968) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe99,	// (0x0001c968) list_double_large_graphic_phob2_cc_pane_g

0x8af4,	// (0x000155c3) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x8af4,	// (0x000155c3) list_double_large_graphic_phob2_cc_pane_t1

0x8b1d,	// (0x000155ec) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x8b1d,	// (0x000155ec) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfea4,	// (0x0001c973) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfea4,	// (0x0001c973) list_double_large_graphic_phob2_cc_pane_t

0xee6b,	// (0x0001b93a) list_highlight_pane_cp025_ParamLimits

0xee6b,	// (0x0001b93a) list_highlight_pane_cp025

0x95f2,	// (0x000160c1) bg_button_pane_cp033_ParamLimits

0xee38,	// (0x0001b907) phob2_cc_button_pane_g1_ParamLimits

0xee44,	// (0x0001b913) phob2_cc_button_pane_t1_ParamLimits

0xee59,	// (0x0001b928) phob2_cc_button_pane_t2_ParamLimits

0xfe94,	// (0x0001c963) phob2_cc_button_pane_t_ParamLimits

0x1709,	// (0x0000e1d8) popup_wgtman_window

0xddac,	// (0x0001a87b) scroll_pane_cp038

0x84ee,	// (0x00014fbd) wgtman_btn_pane_cp_01_ParamLimits

0x84ee,	// (0x00014fbd) wgtman_btn_pane_cp_01

0xee79,	// (0x0001b948) wgtman_content_pane

0xee82,	// (0x0001b951) wgtman_heading_pane

0x959f,	// (0x0001606e) bg_heading_pane_cp02

0xee8b,	// (0x0001b95a) wgtman_heading_pane_g1

0xee93,	// (0x0001b962) wgtman_heading_pane_t1

0xeea1,	// (0x0001b970) scroll_pane_cp036

0xeea9,	// (0x0001b978) wgtman_list_pane

0xe39d,	// (0x0001ae6c) wgtman_list_pane_t1_ParamLimits

0xe39d,	// (0x0001ae6c) wgtman_list_pane_t1

0xcfe3,	// (0x00019ab2) cam4_grid_pane

0x646f,	// (0x00012f3e) bg_button_pane_cp015_ParamLimits

0x6480,	// (0x00012f4f) bg_button_pane_cp016_ParamLimits

0x648c,	// (0x00012f5b) bg_button_pane_cp017_ParamLimits

0x64de,	// (0x00012fad) popup_vitu2_query_window_g3_ParamLimits

0x64de,	// (0x00012fad) popup_vitu2_query_window_g3

0x657b,	// (0x0001304a) popup_vitu2_query_window_t6_ParamLimits

0x657b,	// (0x0001304a) popup_vitu2_query_window_t6

0x65a6,	// (0x00013075) popup_vitu2_query_window_t7_ParamLimits

0x65a6,	// (0x00013075) popup_vitu2_query_window_t7

0xed72,	// (0x0001b841) cam4_grid_pane_g1

0xed7b,	// (0x0001b84a) cam4_grid_pane_g2

0xeeb1,	// (0x0001b980) cam4_grid_pane_g3

0xeeba,	// (0x0001b989) cam4_grid_pane_g4

0x0003,

0xfea9,	// (0x0001c978) cam4_grid_pane_g

0x2303,	// (0x0000edd2) aid_placing_vt_slider_lsc_ParamLimits

0x2573,	// (0x0000f042) vidtel_button_pane_ParamLimits

0x2573,	// (0x0000f042) vidtel_button_pane

0x959f,	// (0x0001606e) bg_button_pane_cp034

0x8b46,	// (0x00015615) vidtel_button_pane_g1

0x8b4e,	// (0x0001561d) vidtel_button_pane_t1

0xd377,	// (0x00019e46) aid_size_vtel_slider_touch

0xdca9,	// (0x0001a778) scroll_pane_cp039

0xdddb,	// (0x0001a8aa) ncim_query_button_pane_cp01_ParamLimits

0xddfa,	// (0x0001a8c9) ncimui_query_pane_g1_ParamLimits

0x95f2,	// (0x000160c1) input_focus_pane_cp012_ParamLimits

0xde1f,	// (0x0001a8ee) ncim_query_entry_pane_t1_ParamLimits

0xdca9,	// (0x0001a778) scroll_pane_cp039_ParamLimits

0xa9c1,	// (0x00017490) navi_pane_bcale_mc_g1

0xa9c9,	// (0x00017498) navi_pane_bcale_mc_t1

0xe367,	// (0x0001ae36) main_sp_fs_email_pane_g1

0xe373,	// (0x0001ae42) main_sp_fs_email_pane_g2

0x0001,

0xfc79,	// (0x0001c748) main_sp_fs_email_pane_g

0xe804,	// (0x0001b2d3) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe804,	// (0x0001b2d3) list_single_cale_mrui_row_pane_g3

0x8070,	// (0x00014b3f) list_single_recal_day_pane_g5_event_pane

0xe96d,	// (0x0001b43c) list_single_recal_day_pane_g7

0xeec3,	// (0x0001b992) list_recal_day_event_pane_cp01

0xeecc,	// (0x0001b99b) list_recal_vselct_arw_lo_pane_cp01

0xeed4,	// (0x0001b9a3) list_recal_vselct_arw_up_pane_cp01

0xeedc,	// (0x0001b9ab) list_recal_vselct_pane_cp01

0xd3d0,	// (0x00019e9f) list_recal_day_event_pane_cp01_g1

0xeee6,	// (0x0001b9b5) list_recal_day_event_pane_cp01_t1

0xe975,	// (0x0001b444) list_single_recal_day_pane_t1_ParamLimits

0x8086,	// (0x00014b55) list_single_recal_day_pane_t2_ParamLimits

0xfd8c,	// (0x0001c85b) list_single_recal_day_pane_t_ParamLimits

0x9c6c,	// (0x0001673b) bg_notes_pane_ParamLimits

0x9d4c,	// (0x0001681b) list_notes_pane_ParamLimits

0x190b,	// (0x0000e3da) scroll_pane_cp06_ParamLimits

0x9d8c,	// (0x0001685b) main_notes_pane_ParamLimits

0x95f2,	// (0x000160c1) main_welc_pane

0x8b8b,	// (0x0001565a) main_welc_body_pane_ParamLimits

0x8b8b,	// (0x0001565a) main_welc_body_pane

0x8ba7,	// (0x00015676) main_welc_opti_pane_ParamLimits

0x8ba7,	// (0x00015676) main_welc_opti_pane

0x8c1b,	// (0x000156ea) main_welc_pane_t1_ParamLimits

0x8c1b,	// (0x000156ea) main_welc_pane_t1

0x8dcb,	// (0x0001589a) main_welc_body_row_pane_ParamLimits

0x8dcb,	// (0x0001589a) main_welc_body_row_pane

0x9d02,	// (0x000167d1) main_welc_opti_row_pane_ParamLimits

0x9d02,	// (0x000167d1) main_welc_opti_row_pane

0xef04,	// (0x0001b9d3) main_welc_opti_row_pane_g1

0x8dde,	// (0x000158ad) main_welc_opti_row_pane_t1

0xef0c,	// (0x0001b9db) main_welc_body_row_pane_t1

0xebae,	// (0x0001b67d) popup_notif_wgt_heading_pane

0xebc8,	// (0x0001b697) aid_size_list_notif_wgt_del_ParamLimits

0xebd5,	// (0x0001b6a4) list_notif_wgt_row_pane_g1_ParamLimits

0xebe1,	// (0x0001b6b0) list_notif_wgt_row_pane_g2_ParamLimits

0xebf5,	// (0x0001b6c4) list_notif_wgt_row_pane_g3_ParamLimits

0xfdf3,	// (0x0001c8c2) list_notif_wgt_row_pane_g_ParamLimits

0xec02,	// (0x0001b6d1) list_notif_wgt_row_pane_t1_ParamLimits

0xec18,	// (0x0001b6e7) list_notif_wgt_row_pane_t2_ParamLimits

0xec2a,	// (0x0001b6f9) list_notif_wgt_row_pane_t3_ParamLimits

0xfdfa,	// (0x0001c8c9) list_notif_wgt_row_pane_t_ParamLimits

0x8587,	// (0x00015056) listrow_wgtman_pane_g1_ParamLimits

0x8594,	// (0x00015063) listrow_wgtman_pane_g2_ParamLimits

0xfe2a,	// (0x0001c8f9) listrow_wgtman_pane_g_ParamLimits

0x85ac,	// (0x0001507b) listrow_wgtman_pane_t1_ParamLimits

0x85c4,	// (0x00015093) listrow_wgtman_pane_t2_ParamLimits

0xfe2f,	// (0x0001c8fe) listrow_wgtman_pane_t_ParamLimits

0x85ea,	// (0x000150b9) wait_bar_pane_cp09_ParamLimits

0x959f,	// (0x0001606e) bg_popup_heading_pane_cp02

0xef1b,	// (0x0001b9ea) popup_notif_wgt_heading_pane_g1

0xef23,	// (0x0001b9f2) popup_notif_wgt_heading_pane_t1

0xbf57,	// (0x00018a26) main_vids_pane

0x959f,	// (0x0001606e) vids_listscroll_pane

0x8ded,	// (0x000158bc) scroll_pane_cp040

0x959f,	// (0x0001606e) vids_list_pane

0xed51,	// (0x0001b820) vids_list_double_pane_ParamLimits

0xed51,	// (0x0001b820) vids_list_double_pane

0x8df8,	// (0x000158c7) vids_list_double_pane_g1

0x8e01,	// (0x000158d0) vids_list_double_pane_t1

0x8e10,	// (0x000158df) vids_list_double_pane_t2

0x0001,

0xfec8,	// (0x0001c997) vids_list_double_pane_t

0x95f2,	// (0x000160c1) main_ncimui_pane_ParamLimits

0x7024,	// (0x00013af3) main_ncimui_pane_g1_ParamLimits

0x7030,	// (0x00013aff) main_ncimui_pane_g2_ParamLimits

0x7030,	// (0x00013aff) main_ncimui_pane_g2

0x0001,

0xfb7a,	// (0x0001c649) main_ncimui_pane_g_ParamLimits

0xfb7a,	// (0x0001c649) main_ncimui_pane_g

0x8bbe,	// (0x0001568d) main_welc_pane_g1_ParamLimits

0x8bbe,	// (0x0001568d) main_welc_pane_g1

0x8bd1,	// (0x000156a0) main_welc_pane_g2_ParamLimits

0x8bd1,	// (0x000156a0) main_welc_pane_g2

0x0003,

0xfeb2,	// (0x0001c981) main_welc_pane_g_ParamLimits

0xfeb2,	// (0x0001c981) main_welc_pane_g

0x9c6c,	// (0x0001673b) listscroll_mce_pane_ParamLimits

0x3497,	// (0x0000ff66) wait_bar_pane_cp10

0xbf4b,	// (0x00018a1a) main_cale_day_pane_ParamLimits

0xbf4b,	// (0x00018a1a) main_cale_week_pane_ParamLimits

0x9c6c,	// (0x0001673b) main_messa_pane_ParamLimits

0x4d52,	// (0x00011821) main_clock2_btn_pane_ParamLimits

0x4d52,	// (0x00011821) main_clock2_btn_pane

0xc7de,	// (0x000192ad) main_clock2_btn_pane_cp01_ParamLimits

0xc7de,	// (0x000192ad) main_clock2_btn_pane_cp01

0xe7bf,	// (0x0001b28e) list_cale_mrui_pane_ParamLimits

0xec5e,	// (0x0001b72d) main_cf0_pane_g2

0x0001,

0xfe01,	// (0x0001c8d0) main_cf0_pane_g

0x878a,	// (0x00015259) area_left_week_number_pane_ParamLimits

0x8796,	// (0x00015265) area_top_day_name_pane_ParamLimits

0x87a7,	// (0x00015276) frame_month_view_pane_ParamLimits

0xedd9,	// (0x0001b8a8) grid_month_view_pane_ParamLimits

0xede7,	// (0x0001b8b6) frm_month_g1_ParamLimits

0x8814,	// (0x000152e3) frm_month_g2_ParamLimits

0x8825,	// (0x000152f4) frm_month_g3_ParamLimits

0x8836,	// (0x00015305) frm_month_g4_ParamLimits

0x8847,	// (0x00015316) frm_month_g5_ParamLimits

0x8858,	// (0x00015327) frm_month_g6_ParamLimits

0x8869,	// (0x00015338) frm_month_g7_ParamLimits

0xedf4,	// (0x0001b8c3) frm_month_g8_ParamLimits

0x887a,	// (0x00015349) frm_month_g9_ParamLimits

0x888a,	// (0x00015359) frm_month_g10_ParamLimits

0x889a,	// (0x00015369) frm_month_g11_ParamLimits

0x88aa,	// (0x00015379) frm_month_g12_ParamLimits

0x88ba,	// (0x00015389) frm_month_g13_ParamLimits

0x88ca,	// (0x00015399) frm_month_g14_ParamLimits

0x88da,	// (0x000153a9) frm_month_g15_ParamLimits

0x88ec,	// (0x000153bb) frm_month_g16_ParamLimits

0xfe59,	// (0x0001c928) frm_month_g_ParamLimits

0xee01,	// (0x0001b8d0) cell_top_day_name_pane_t1_ParamLimits

0x88fe,	// (0x000153cd) cell_area_left_week_number_pane_g1_ParamLimits

0x890a,	// (0x000153d9) cell_area_left_week_number_pane_t1_ParamLimits

0x9ce6,	// (0x000167b5) cell_month_view_pane_g1_ParamLimits

0x891d,	// (0x000153ec) cell_month_view_pane_t1_ParamLimits

0x9c64,	// (0x00016733) main_clock2_btn_pane_g1

0xef31,	// (0x0001ba00) main_clock2_btn_pane_t1

0x95f2,	// (0x000160c1) listscroll_cmail_pane_ParamLimits

0xe367,	// (0x0001ae36) main_sp_fs_email_pane_g1_ParamLimits

0xe373,	// (0x0001ae42) main_sp_fs_email_pane_g2_ParamLimits

0xfc79,	// (0x0001c748) main_sp_fs_email_pane_g_ParamLimits

0xe8e9,	// (0x0001b3b8) list_recal_day_pane_ParamLimits

0xe8fa,	// (0x0001b3c9) mian_recal_day_pane_t1

0x79f7,	// (0x000144c6) list_single_dyc_row_text_pane_t4_ParamLimits

0x79f7,	// (0x000144c6) list_single_dyc_row_text_pane_t4

0x7a2e,	// (0x000144fd) list_single_dyc_row_text_pane_t5_ParamLimits

0x7a2e,	// (0x000144fd) list_single_dyc_row_text_pane_t5

0xe412,	// (0x0001aee1) list_single_dyc_row_text_pane_t6_ParamLimits

0xe412,	// (0x0001aee1) list_single_dyc_row_text_pane_t6

0x30de,	// (0x0000fbad) aid_mgn_list_cale_time_pane

0x95f2,	// (0x000160c1) main_gallery2_pane_ParamLimits

0xc7f2,	// (0x000192c1) main_clock2_pane_cp01_t1

0xc800,	// (0x000192cf) main_clock2_pane_cp01_t3

0x0001,

0xf750,	// (0x0001c21f) main_clock2_pane_cp01_t

0x1c8e,	// (0x0000e75d) cale_week_scroll_pane_g16_ParamLimits

0x1c8e,	// (0x0000e75d) cale_week_scroll_pane_g16

0x9ff1,	// (0x00016ac0) vorec_slider_pane

0x8b4e,	// (0x0001561d) vidtel_button_pane_t1_ParamLimits

0x812b,	// (0x00014bfa) main_fs_bigclock_clock_pane_g1_ParamLimits

0x813d,	// (0x00014c0c) main_fs_bigclock_clock_pane_g2_ParamLimits

0x814e,	// (0x00014c1d) main_fs_bigclock_clock_pane_g3_ParamLimits

0x814e,	// (0x00014c1d) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfdaf,	// (0x0001c87e) main_fs_bigclock_clock_pane_g_ParamLimits

0x8161,	// (0x00014c30) main_fs_bigclock_clock_pane_t1_ParamLimits

0x817c,	// (0x00014c4b) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfdb8,	// (0x0001c887) main_fs_bigclock_clock_pane_t_ParamLimits

0x4674,	// (0x00011143) main_mup3_lyrics_pane_ParamLimits

0x4674,	// (0x00011143) main_mup3_lyrics_pane

0x8e42,	// (0x00015911) main_mup3_lyrics_pane_t1_ParamLimits

0x8e42,	// (0x00015911) main_mup3_lyrics_pane_t1

0xcc02,	// (0x000196d1) aid_main_mp4_pane_t1_area

0xcc0c,	// (0x000196db) aid_main_mp4_pane_t2_area

0xccb6,	// (0x00019785) main_mp4_pane_g7_ParamLimits

0xccb6,	// (0x00019785) main_mp4_pane_g7

0xccc2,	// (0x00019791) main_mp4_pane_g8_ParamLimits

0xccc2,	// (0x00019791) main_mp4_pane_g8

0x5660,	// (0x0001212f) aid_call6_pane_g1_size

0x8aa4,	// (0x00015573) list_double_large_graphic_phob2_other_pane_ParamLimits

0x8aa4,	// (0x00015573) list_double_large_graphic_phob2_other_pane

0xa914,	// (0x000173e3) list_double_large_graphic_phob2_other_pane_g1

0x959f,	// (0x0001606e) list_highlight_pane_cp026

0x95f2,	// (0x000160c1) main_welc_pane_ParamLimits

0x7802,	// (0x000142d1) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x7802,	// (0x000142d1) main_sp_fs_ctrlbar_pane_g3

0x781a,	// (0x000142e9) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x781a,	// (0x000142e9) main_sp_fs_ctrlbar_pane_g4

0x785c,	// (0x0001432b) toolbar2_fixed_button_pane_cp01

0x7867,	// (0x00014336) toolbar2_fixed_button_pane_cp02

0x7872,	// (0x00014341) toolbar2_fixed_button_pane_cp03

0x8b77,	// (0x00015646) list_welc_entry_pane_ParamLimits

0x8b77,	// (0x00015646) list_welc_entry_pane

0x8be4,	// (0x000156b3) main_welc_pane_g3_ParamLimits

0x8be4,	// (0x000156b3) main_welc_pane_g3

0x8c35,	// (0x00015704) main_welc_pane_t2_ParamLimits

0x8c35,	// (0x00015704) main_welc_pane_t2

0x8c4c,	// (0x0001571b) main_welc_pane_t3_ParamLimits

0x8c4c,	// (0x0001571b) main_welc_pane_t3

0x0005,

0xfebb,	// (0x0001c98a) main_welc_pane_t_ParamLimits

0xfebb,	// (0x0001c98a) main_welc_pane_t

0x8d5c,	// (0x0001582b) welc_button_pane_ParamLimits

0x8d5c,	// (0x0001582b) welc_button_pane

0x8dba,	// (0x00015889) welc_service_logo_pane_ParamLimits

0x8dba,	// (0x00015889) welc_service_logo_pane

0x8e61,	// (0x00015930) list_single_welc_entry_pane_ParamLimits

0x8e61,	// (0x00015930) list_single_welc_entry_pane

0x8e72,	// (0x00015941) list_single_welc_entry_pane_g1

0x8e7a,	// (0x00015949) list_single_welc_entry_pane_t1

0x8e88,	// (0x00015957) list_single_welc_entry_pane_t2

0x0001,

0xfecd,	// (0x0001c99c) list_single_welc_entry_pane_t

0x959f,	// (0x0001606e) bg_button_pane_cp035

0x8e96,	// (0x00015965) welc_button_pane_t1

0xef3f,	// (0x0001ba0e) welc_service_logo_pane_g1

0xef48,	// (0x0001ba17) welc_service_logo_pane_g2

0x0001,

0xfed2,	// (0x0001c9a1) welc_service_logo_pane_g

0x959f,	// (0x0001606e) main_int_radio_pane

0x9e51,	// (0x00016920) list_single_fs_dyc_pane_g1

0x89d7,	// (0x000154a6) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x89d7,	// (0x000154a6) list_double_large_graphic_phob2_pane_g3

0x89e3,	// (0x000154b2) list_double_large_graphic_phob2_pane_g4_ParamLimits

0x89e3,	// (0x000154b2) list_double_large_graphic_phob2_pane_g4

0x8ea4,	// (0x00015973) main_int_radio1_pane_ParamLimits

0x8ea4,	// (0x00015973) main_int_radio1_pane

0xef51,	// (0x0001ba20) find_pane_cp02

0x8ec1,	// (0x00015990) input_focus_pane_cp12_ParamLimits

0x8ec1,	// (0x00015990) input_focus_pane_cp12

0x8ed1,	// (0x000159a0) input_focus_pane_cp13_ParamLimits

0x8ed1,	// (0x000159a0) input_focus_pane_cp13

0x8ee5,	// (0x000159b4) input_focus_pane_cp14_ParamLimits

0x8ee5,	// (0x000159b4) input_focus_pane_cp14

0xef5a,	// (0x0001ba29) int_radio1_listscroll_pane

0x8ef9,	// (0x000159c8) main_int_radio1_pane_g1_ParamLimits

0x8ef9,	// (0x000159c8) main_int_radio1_pane_g1

0x8f0d,	// (0x000159dc) main_int_radio1_pane_t1_ParamLimits

0x8f0d,	// (0x000159dc) main_int_radio1_pane_t1

0x8f24,	// (0x000159f3) main_int_radio1_pane_t2_ParamLimits

0x8f24,	// (0x000159f3) main_int_radio1_pane_t2

0x8f3b,	// (0x00015a0a) main_int_radio1_pane_t3_ParamLimits

0x8f3b,	// (0x00015a0a) main_int_radio1_pane_t3

0x8f52,	// (0x00015a21) main_int_radio1_pane_t4_ParamLimits

0x8f52,	// (0x00015a21) main_int_radio1_pane_t4

0xef64,	// (0x0001ba33) main_int_radio1_pane_t5_ParamLimits

0xef64,	// (0x0001ba33) main_int_radio1_pane_t5

0x8f64,	// (0x00015a33) main_int_radio1_pane_t6_ParamLimits

0x8f64,	// (0x00015a33) main_int_radio1_pane_t6

0x8f79,	// (0x00015a48) main_int_radio1_pane_t7_ParamLimits

0x8f79,	// (0x00015a48) main_int_radio1_pane_t7

0x8f8e,	// (0x00015a5d) main_int_radio1_pane_t8_ParamLimits

0x8f8e,	// (0x00015a5d) main_int_radio1_pane_t8

0x8fab,	// (0x00015a7a) main_int_radio1_pane_t9_ParamLimits

0x8fab,	// (0x00015a7a) main_int_radio1_pane_t9

0x8fbd,	// (0x00015a8c) main_int_radio1_pane_t10_ParamLimits

0x8fbd,	// (0x00015a8c) main_int_radio1_pane_t10

0x8fe1,	// (0x00015ab0) main_int_radio1_pane_t11_ParamLimits

0x8fe1,	// (0x00015ab0) main_int_radio1_pane_t11

0x9005,	// (0x00015ad4) main_int_radio1_pane_t12_ParamLimits

0x9005,	// (0x00015ad4) main_int_radio1_pane_t12

0x000b,

0xfed7,	// (0x0001c9a6) main_int_radio1_pane_t_ParamLimits

0xfed7,	// (0x0001c9a6) main_int_radio1_pane_t

0xef76,	// (0x0001ba45) int_radio_list_pane

0xee1c,	// (0x0001b8eb) scroll_pane_cp037

0xed61,	// (0x0001b830) list_double_large_graphic_int_radio_pane_ParamLimits

0xed61,	// (0x0001b830) list_double_large_graphic_int_radio_pane

0xef7e,	// (0x0001ba4d) list_double_large_graphic_int_radio_pane_g1

0xef87,	// (0x0001ba56) list_double_large_graphic_int_radio_pane_t1

0xef95,	// (0x0001ba64) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfef0,	// (0x0001c9bf) list_double_large_graphic_int_radio_pane_t

0x959f,	// (0x0001606e) list_highlight_pane_cp027

0xeef4,	// (0x0001b9c3) main_button_pane_4

0x8bf7,	// (0x000156c6) main_welc_pane_g4_ParamLimits

0x8bf7,	// (0x000156c6) main_welc_pane_g4

0x8c63,	// (0x00015732) main_welc_pane_t4_ParamLimits

0x8c63,	// (0x00015732) main_welc_pane_t4

0x8c7a,	// (0x00015749) main_welc_pane_t5_ParamLimits

0x8c7a,	// (0x00015749) main_welc_pane_t5

0x8cb5,	// (0x00015784) main_welc_pane_t6_ParamLimits

0x8cb5,	// (0x00015784) main_welc_pane_t6

0x8d6f,	// (0x0001583e) welc_button_pane_2_ParamLimits

0x8d6f,	// (0x0001583e) welc_button_pane_2

0x8d83,	// (0x00015852) welc_button_pane_3_ParamLimits

0x8d83,	// (0x00015852) welc_button_pane_3

0xeefc,	// (0x0001b9cb) welc_button_pane_4

0x8d9a,	// (0x00015869) welc_button_pane_5_ParamLimits

0x8d9a,	// (0x00015869) welc_button_pane_5

0x154a,	// (0x0000e019) main_popup_welc_pane

0xefb2,	// (0x0001ba81) main_welc_sk_g3

0xefbc,	// (0x0001ba8b) main_welc_sk_g4

0xefc6,	// (0x0001ba95) main_welc_sk_t3

0xefd4,	// (0x0001baa3) main_welc_sk_t4

0xefe2,	// (0x0001bab1) popup_welc_pane_t4

0xeff0,	// (0x0001babf) popup_welc_pane_t5

0xeffe,	// (0x0001bacd) popup_welc_pane_t6

0x959f,	// (0x0001606e) main_acti_pane

0x959f,	// (0x0001606e) main_sso_pane

0x9017,	// (0x00015ae6) sso_body_pane_ParamLimits

0x9017,	// (0x00015ae6) sso_body_pane

0x902b,	// (0x00015afa) sso_logo_pane_ParamLimits

0x902b,	// (0x00015afa) sso_logo_pane

0x9053,	// (0x00015b22) sso_sk_pane_ParamLimits

0x9053,	// (0x00015b22) sso_sk_pane

0xa069,	// (0x00016b38) main_sso_logo_pane_g1

0x9065,	// (0x00015b34) sso_sk_pane_t1_ParamLimits

0x9065,	// (0x00015b34) sso_sk_pane_t1

0x907e,	// (0x00015b4d) sso_sk_pane_t2_ParamLimits

0x907e,	// (0x00015b4d) sso_sk_pane_t2

0x0001,

0xfef5,	// (0x0001c9c4) sso_sk_pane_t_ParamLimits

0xfef5,	// (0x0001c9c4) sso_sk_pane_t

0xf036,	// (0x0001bb05) aid_sso_gap

0xf03f,	// (0x0001bb0e) aid_sso_txt1

0xf047,	// (0x0001bb16) aid_sso_txt2

0xf04f,	// (0x0001bb1e) aid_sso_txt3

0x0002,

0xfefa,	// (0x0001c9c9) aid_sso_txt

0xf057,	// (0x0001bb26) aid_sso_widget

0x90de,	// (0x00015bad) sso_btn_pane_ParamLimits

0x90de,	// (0x00015bad) sso_btn_pane

0x9150,	// (0x00015c1f) sso_option_pane_ParamLimits

0x9150,	// (0x00015c1f) sso_option_pane

0x91ae,	// (0x00015c7d) sso_query_pane_ParamLimits

0x91ae,	// (0x00015c7d) sso_query_pane

0x91ee,	// (0x00015cbd) sso_query_pane_cp01_ParamLimits

0x91ee,	// (0x00015cbd) sso_query_pane_cp01

0x9230,	// (0x00015cff) sso_t_hdr_pane_ParamLimits

0x9230,	// (0x00015cff) sso_t_hdr_pane

0x9254,	// (0x00015d23) sso_t_nml_pane_ParamLimits

0x9254,	// (0x00015d23) sso_t_nml_pane

0xf04f,	// (0x0001bb1e) sso_t_sub_pane

0x9038,	// (0x00015b07) sso_popup_window_ParamLimits

0x9038,	// (0x00015b07) sso_popup_window

0x9094,	// (0x00015b63) sso_apps_pane_ParamLimits

0x9094,	// (0x00015b63) sso_apps_pane

0x90ba,	// (0x00015b89) sso_body_pane_g1

0x90c2,	// (0x00015b91) sso_body_pane_t1

0x90d0,	// (0x00015b9f) sso_body_pane_t2

0x0001,

0xff01,	// (0x0001c9d0) sso_body_pane_t

0x9120,	// (0x00015bef) sso_btn_pane_cp01_ParamLimits

0x9120,	// (0x00015bef) sso_btn_pane_cp01

0x9188,	// (0x00015c57) sso_prog_pane_ParamLimits

0x9188,	// (0x00015c57) sso_prog_pane

0x929e,	// (0x00015d6d) sso_t_hdr_pane_t1_ParamLimits

0x929e,	// (0x00015d6d) sso_t_hdr_pane_t1

0x012f,	// (0x0000cbfe) input_focus_pane_cp10_ParamLimits

0x012f,	// (0x0000cbfe) input_focus_pane_cp10

0x0147,	// (0x0000cc16) sso_query_pane_t1_ParamLimits

0x0147,	// (0x0000cc16) sso_query_pane_t1

0x015a,	// (0x0000cc29) sso_query_pane_t2_ParamLimits

0x015a,	// (0x0000cc29) sso_query_pane_t2

0x0175,	// (0x0000cc44) sso_query_pane_t3_ParamLimits

0x0175,	// (0x0000cc44) sso_query_pane_t3

0x019f,	// (0x0000cc6e) sso_query_pane_t4_ParamLimits

0x019f,	// (0x0000cc6e) sso_query_pane_t4

0x0003,

0xff06,	// (0x0001c9d5) sso_query_pane_t_ParamLimits

0xff06,	// (0x0001c9d5) sso_query_pane_t

0x959f,	// (0x0001606e) bg_button_pane_cp22

0xefa3,	// (0x0001ba72) sso_btn_pane_t1

0x92b1,	// (0x00015d80) sso_t_nml_pane_t1_ParamLimits

0x92b1,	// (0x00015d80) sso_t_nml_pane_t1

0x01e0,	// (0x0000ccaf) sso_option_row_pane_ParamLimits

0x01e0,	// (0x0000ccaf) sso_option_row_pane

0x01f3,	// (0x0000ccc2) sso_t_sub_pane_t1_ParamLimits

0x01f3,	// (0x0000ccc2) sso_t_sub_pane_t1

0x95f2,	// (0x000160c1) bg_popup_window_pane_cp11_ParamLimits

0x95f2,	// (0x000160c1) bg_popup_window_pane_cp11

0x0206,	// (0x0000ccd5) popup_sk_window_cp01_ParamLimits

0x0206,	// (0x0000ccd5) popup_sk_window_cp01

0x0213,	// (0x0000cce2) sso_popup_body_pane_ParamLimits

0x0213,	// (0x0000cce2) sso_popup_body_pane

0x0220,	// (0x0000ccef) scroll_pane_cp21_ParamLimits

0x0220,	// (0x0000ccef) scroll_pane_cp21

0x022d,	// (0x0000ccfc) sso_popup_body_t_pane_ParamLimits

0x022d,	// (0x0000ccfc) sso_popup_body_t_pane

0x023a,	// (0x0000cd09) sso_popup_body_t_hdr_pane_ParamLimits

0x023a,	// (0x0000cd09) sso_popup_body_t_hdr_pane

0x0246,	// (0x0000cd15) sso_popup_body_t_nml_pane_ParamLimits

0x0246,	// (0x0000cd15) sso_popup_body_t_nml_pane

0x025f,	// (0x0000cd2e) sso_popup_body_t_sub_pane_ParamLimits

0x025f,	// (0x0000cd2e) sso_popup_body_t_sub_pane

0x027e,	// (0x0000cd4d) sso_popup_body_t_hdr_pane_t1

0x92cc,	// (0x00015d9b) sso_popup_body_t_nml_pane_t1_ParamLimits

0x92cc,	// (0x00015d9b) sso_popup_body_t_nml_pane_t1

0x02c8,	// (0x0000cd97) sso_popup_body_t_sub_pane_t1_ParamLimits

0x02c8,	// (0x0000cd97) sso_popup_body_t_sub_pane_t1

0xa069,	// (0x00016b38) sso_prog_pane_g1

0x9303,	// (0x00015dd2) sso_apps_pane_comp1_ParamLimits

0x9303,	// (0x00015dd2) sso_apps_pane_comp1

0x02ff,	// (0x0000cdce) sso_apps_pane_comp1_g1

0x0307,	// (0x0000cdd6) sso_apps_pane_comp1_t1

0x0323,	// (0x0000cdf2) sso_option_row_pane_g1

0x032b,	// (0x0000cdfa) sso_option_row_pane_t1

0x8b64,	// (0x00015633) bg_welc_area_ParamLimits

0x8b64,	// (0x00015633) bg_welc_area

0x8cf3,	// (0x000157c2) sso_t_hdr_pane_a_t1_ParamLimits

0x8cf3,	// (0x000157c2) sso_t_hdr_pane_a_t1

0x8d0c,	// (0x000157db) sso_t_nml_pane_a_t1_ParamLimits

0x8d0c,	// (0x000157db) sso_t_nml_pane_a_t1

0x8d31,	// (0x00015800) sso_t_sub_pane_a_t1_ParamLimits

0x8d31,	// (0x00015800) sso_t_sub_pane_a_t1

0xefa3,	// (0x0001ba72) sso_btn_pane_t1_copy1

0x959f,	// (0x0001606e) welc_button_pane_2_comp1

0xf00c,	// (0x0001badb) sso_t_hdr_pane_p_t1

0xf01a,	// (0x0001bae9) sso_t_nml_pane_p_t1

0xf028,	// (0x0001baf7) sso_t_sub_pane_p_t1

0xe534,	// (0x0001b003) list_cmail_pane_ParamLimits

0x8daa,	// (0x00015879) welc_button_pane_cp01_ParamLimits

0x8daa,	// (0x00015879) welc_button_pane_cp01

0x959f,	// (0x0001606e) main_att_pane

0x0315,	// (0x0000cde4) input_focus_pane_cp10_t1

0x032b,	// (0x0000cdfa) sso_option_row_pane_t1_ParamLimits

0x9316,	// (0x00015de5) main_att_body_pane_ParamLimits

0x9316,	// (0x00015de5) main_att_body_pane

0x932c,	// (0x00015dfb) att_btn_pane_ParamLimits

0x932c,	// (0x00015dfb) att_btn_pane

0x9349,	// (0x00015e18) att_btn_pane_cp01_ParamLimits

0x9349,	// (0x00015e18) att_btn_pane_cp01

0x9365,	// (0x00015e34) att_li_srv_pane_ParamLimits

0x9365,	// (0x00015e34) att_li_srv_pane

0x937b,	// (0x00015e4a) att_opt_pane_ParamLimits

0x937b,	// (0x00015e4a) att_opt_pane

0x93c1,	// (0x00015e90) att_query_pane_ParamLimits

0x93c1,	// (0x00015e90) att_query_pane

0x93f5,	// (0x00015ec4) att_query_pane_cp01_ParamLimits

0x93f5,	// (0x00015ec4) att_query_pane_cp01

0x942f,	// (0x00015efe) att_t_hdr_pane_ParamLimits

0x942f,	// (0x00015efe) att_t_hdr_pane

0x9473,	// (0x00015f42) att_t_nml_pane_ParamLimits

0x9473,	// (0x00015f42) att_t_nml_pane

0x94a4,	// (0x00015f73) att_t_nml_pane_cp01_ParamLimits

0x94a4,	// (0x00015f73) att_t_nml_pane_cp01

0x94ca,	// (0x00015f99) att_t_nmlb_pane_ParamLimits

0x94ca,	// (0x00015f99) att_t_nmlb_pane

0x94e3,	// (0x00015fb2) att_term_pane_ParamLimits

0x94e3,	// (0x00015fb2) att_term_pane

0x9527,	// (0x00015ff6) main_att_body_pane_g1_ParamLimits

0x9527,	// (0x00015ff6) main_att_body_pane_g1

0x0116,	// (0x0000cbe5) att_t_hdr_pane_t1_ParamLimits

0x0116,	// (0x0000cbe5) att_t_hdr_pane_t1

0x0562,	// (0x0000d031) att_t_nml_pane_t1_ParamLimits

0x0562,	// (0x0000d031) att_t_nml_pane_t1

0x0587,	// (0x0000d056) att_btn_pane_t1

0x959f,	// (0x0001606e) bg_button_pane_cp23

0x956b,	// (0x0001603a) att_li_srv_row_pane_ParamLimits

0x956b,	// (0x0001603a) att_li_srv_row_pane

0x05a5,	// (0x0000d074) att_t_nmlb_pane_t1_ParamLimits

0x05a5,	// (0x0000d074) att_t_nmlb_pane_t1

0x05be,	// (0x0000d08d) att_query_pane_t1

0x05cd,	// (0x0000d09c) att_query_pane_t2

0x05dc,	// (0x0000d0ab) att_query_pane_t3

0x0002,

0xff0f,	// (0x0001c9de) att_query_pane_t

0x05eb,	// (0x0000d0ba) input_focus_pane_cp11

0x05f4,	// (0x0000d0c3) att_term_pane_t1_ParamLimits

0x05f4,	// (0x0000d0c3) att_term_pane_t1

0x959f,	// (0x0001606e) att_opt_row_pane

0x0611,	// (0x0000d0e0) att_opt_row_pane_g1

0x0619,	// (0x0000d0e8) att_opt_row_pane_t1_ParamLimits

0x0619,	// (0x0000d0e8) att_opt_row_pane_t1

0x957b,	// (0x0001604a) att_li_srv_row_pane_g1

0x9583,	// (0x00016052) att_li_srv_row_pane_t1

0x9591,	// (0x00016060) att_li_srv_row_pane_t2

0x0001,

0xff16,	// (0x0001c9e5) att_li_srv_row_pane_t
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
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	};

} // end of namespace AknLayoutScalable_Elaf_pql_apps_qvga_lsc_Normal

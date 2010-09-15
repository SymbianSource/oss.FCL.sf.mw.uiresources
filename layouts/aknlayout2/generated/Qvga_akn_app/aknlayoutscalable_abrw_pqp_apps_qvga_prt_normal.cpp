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

#include "aknlayoutscalable_abrw_pqp_apps_qvga_prt_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt[]; }

namespace AknLayoutScalable_Abrw_pqp_apps_qvga_prt_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt + 0x00015842 };

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
0x88bf,	// (0x0001e101) Screen

0x88c9,	// (0x0001e10b) application_window

0x88d3,	// (0x0001e115) area_bottom_pane_ParamLimits

0x88d3,	// (0x0001e115) area_bottom_pane

0x7205,	// (0x0001ca47) area_top_pane_ParamLimits

0x7205,	// (0x0001ca47) area_top_pane

0x7261,	// (0x0001caa3) call_video_uplink_pane_ParamLimits

0x7261,	// (0x0001caa3) call_video_uplink_pane

0x729c,	// (0x0001cade) main_pane_ParamLimits

0x729c,	// (0x0001cade) main_pane

0x323e,	// (0x00018a80) context_pane

0xabcd,	// (0x0002040f) navi_pane

0xabe7,	// (0x00020429) popup_cale_events_window_ParamLimits

0xabe7,	// (0x00020429) popup_cale_events_window

0x3251,	// (0x00018a93) popup_mup_playback_window

0xabfe,	// (0x00020440) signal_pane

0x1019,	// (0x0001685b) main_browser_pane

0x127e,	// (0x00016ac0) main_burst_pane

0x73c3,	// (0x0001cc05) main_calc_pane

0x31d8,	// (0x00018a1a) main_cale_day_pane

0x8b60,	// (0x0001e3a2) main_cale_month_pane

0x31d8,	// (0x00018a1a) main_cale_week_pane

0x127e,	// (0x00016ac0) main_call_pane

0x0c9e,	// (0x000164e0) main_call_poc_pane

0x127e,	// (0x00016ac0) main_camera_pane

0x127e,	// (0x00016ac0) main_chi_dic_pane

0x1b50,	// (0x00017392) main_clock_pane

0x0c9e,	// (0x000164e0) main_fmradio_pane

0x127e,	// (0x00016ac0) main_graph_messa_pane

0x0c9e,	// (0x000164e0) main_help_pane

0x1019,	// (0x0001685b) main_im_pane

0x0ef9,	// (0x0001673b) main_image_pane_ParamLimits

0x0ef9,	// (0x0001673b) main_image_pane

0x0c9e,	// (0x000164e0) main_location2_pane

0x127e,	// (0x00016ac0) main_location_pane

0x0ef9,	// (0x0001673b) main_messa_pane

0x0c9e,	// (0x000164e0) main_mp2_pane

0x127e,	// (0x00016ac0) main_mp_pane

0x0c9e,	// (0x000164e0) main_msg_pane

0x0c9e,	// (0x000164e0) main_mup_eq_pane

0x0c9e,	// (0x000164e0) main_mup_pane

0x1019,	// (0x0001685b) main_notes_pane

0x0c9e,	// (0x000164e0) main_pec_pane

0x0c9e,	// (0x000164e0) main_phob_pane

0x0c9e,	// (0x000164e0) main_pinb_pane

0x0c9e,	// (0x000164e0) main_postcard_pane

0x0c9e,	// (0x000164e0) main_qdial_pane

0x127e,	// (0x00016ac0) main_skin_pane

0x0c9e,	// (0x000164e0) main_smil2_pane

0x127e,	// (0x00016ac0) main_smil_pane

0x127e,	// (0x00016ac0) main_video_pane

0x127e,	// (0x00016ac0) main_video_tele_pane

0x0ef9,	// (0x0001673b) main_viewer_pane_ParamLimits

0x0ef9,	// (0x0001673b) main_viewer_pane

0x127e,	// (0x00016ac0) main_vorec_pane

0x7919,	// (0x0001d15b) popup_blid_sat_info_window_ParamLimits

0x7919,	// (0x0001d15b) popup_blid_sat_info_window

0x7935,	// (0x0001d177) popup_dyc_status_message_window_ParamLimits

0x7935,	// (0x0001d177) popup_dyc_status_message_window

0x7941,	// (0x0001d183) popup_grid_large_graphic_window_ParamLimits

0x7941,	// (0x0001d183) popup_grid_large_graphic_window

0x79b2,	// (0x0001d1f4) popup_loc_request_window_ParamLimits

0x79b2,	// (0x0001d1f4) popup_loc_request_window

0x79f5,	// (0x0001d237) popup_wml_address_window_ParamLimits

0x79f5,	// (0x0001d237) popup_wml_address_window

0xaae3,	// (0x00020325) call_muted_g1

0xa7d9,	// (0x0002001b) popup_call_audio_conf_window_ParamLimits

0xa7d9,	// (0x0002001b) popup_call_audio_conf_window

0xaaf3,	// (0x00020335) popup_call_audio_first_window_ParamLimits

0xaaf3,	// (0x00020335) popup_call_audio_first_window

0xab27,	// (0x00020369) popup_call_audio_in_window_ParamLimits

0xab27,	// (0x00020369) popup_call_audio_in_window

0xab43,	// (0x00020385) popup_call_audio_out_window_ParamLimits

0xab43,	// (0x00020385) popup_call_audio_out_window

0xab5f,	// (0x000203a1) popup_call_audio_second_window_ParamLimits

0xab5f,	// (0x000203a1) popup_call_audio_second_window

0xab87,	// (0x000203c9) popup_call_audio_wait_window_ParamLimits

0xab87,	// (0x000203c9) popup_call_audio_wait_window

0xaba6,	// (0x000203e8) popup_number_entry_window_ParamLimits

0xaba6,	// (0x000203e8) popup_number_entry_window

0x088d,	// (0x000160cf) bg_popup_call_pane_cp05_ParamLimits

0x088d,	// (0x000160cf) bg_popup_call_pane_cp05

0x08ad,	// (0x000160ef) popup_number_entry_window_t1

0x08c0,	// (0x00016102) popup_number_entry_window_t2

0x08d2,	// (0x00016114) popup_number_entry_window_t3

0x0003,

0xf05f,	// (0x000248a1) popup_number_entry_window_t

0x08e4,	// (0x00016126) text_title_cp2

0x08f7,	// (0x00016139) bg_popup_call_pane_cp_ParamLimits

0x08f7,	// (0x00016139) bg_popup_call_pane_cp

0x0905,	// (0x00016147) call_thumbnail_pane

0x090d,	// (0x0001614f) popup_call_audio_in_window_g1_ParamLimits

0x090d,	// (0x0001614f) popup_call_audio_in_window_g1

0x0919,	// (0x0001615b) popup_call_audio_in_window_g2_ParamLimits

0x0919,	// (0x0001615b) popup_call_audio_in_window_g2

0x0925,	// (0x00016167) popup_call_audio_in_window_g3_ParamLimits

0x0925,	// (0x00016167) popup_call_audio_in_window_g3

0x0002,

0xf068,	// (0x000248aa) popup_call_audio_in_window_g_ParamLimits

0xf068,	// (0x000248aa) popup_call_audio_in_window_g

0x0931,	// (0x00016173) popup_call_audio_in_window_t1_ParamLimits

0x0931,	// (0x00016173) popup_call_audio_in_window_t1

0x094c,	// (0x0001618e) popup_call_audio_in_window_t2_ParamLimits

0x094c,	// (0x0001618e) popup_call_audio_in_window_t2

0x0967,	// (0x000161a9) popup_call_audio_in_window_t3_ParamLimits

0x0967,	// (0x000161a9) popup_call_audio_in_window_t3

0x0002,

0xf06f,	// (0x000248b1) popup_call_audio_in_window_t_ParamLimits

0xf06f,	// (0x000248b1) popup_call_audio_in_window_t

0x08f7,	// (0x00016139) bg_popup_call_pane_cp01_ParamLimits

0x08f7,	// (0x00016139) bg_popup_call_pane_cp01

0x0905,	// (0x00016147) call_thumbnail_pane_cp02

0x097a,	// (0x000161bc) call_type_pane_cp022

0x0982,	// (0x000161c4) popup_call_audio_out_window_g1_ParamLimits

0x0982,	// (0x000161c4) popup_call_audio_out_window_g1

0x0994,	// (0x000161d6) popup_call_audio_out_window_g2_ParamLimits

0x0994,	// (0x000161d6) popup_call_audio_out_window_g2

0x09a0,	// (0x000161e2) popup_call_audio_out_window_g3_ParamLimits

0x09a0,	// (0x000161e2) popup_call_audio_out_window_g3

0x0002,

0xf076,	// (0x000248b8) popup_call_audio_out_window_g_ParamLimits

0xf076,	// (0x000248b8) popup_call_audio_out_window_g

0x09b2,	// (0x000161f4) popup_call_audio_out_window_t1_ParamLimits

0x09b2,	// (0x000161f4) popup_call_audio_out_window_t1

0x09ca,	// (0x0001620c) popup_call_audio_out_window_t2_ParamLimits

0x09ca,	// (0x0001620c) popup_call_audio_out_window_t2

0x0001,

0xf07d,	// (0x000248bf) popup_call_audio_out_window_t_ParamLimits

0xf07d,	// (0x000248bf) popup_call_audio_out_window_t

0x09df,	// (0x00016221) bg_popup_call_pane_ParamLimits

0x09df,	// (0x00016221) bg_popup_call_pane

0x893f,	// (0x0001e181) call_thumbnail_pane_cp_ParamLimits

0x893f,	// (0x0001e181) call_thumbnail_pane_cp

0x0a63,	// (0x000162a5) call_type_pane_cp01_ParamLimits

0x0a63,	// (0x000162a5) call_type_pane_cp01

0x0aa7,	// (0x000162e9) popup_call_audio_first_window_g1_ParamLimits

0x0aa7,	// (0x000162e9) popup_call_audio_first_window_g1

0x0af3,	// (0x00016335) popup_call_audio_first_window_g2_ParamLimits

0x0af3,	// (0x00016335) popup_call_audio_first_window_g2

0x0001,

0xf082,	// (0x000248c4) popup_call_audio_first_window_g_ParamLimits

0xf082,	// (0x000248c4) popup_call_audio_first_window_g

0x0b37,	// (0x00016379) popup_call_audio_first_window_t1_ParamLimits

0x0b37,	// (0x00016379) popup_call_audio_first_window_t1

0x0be3,	// (0x00016425) popup_call_audio_first_window_t4_ParamLimits

0x0be3,	// (0x00016425) popup_call_audio_first_window_t4

0x0c6f,	// (0x000164b1) popup_call_audio_first_window_t5_ParamLimits

0x0c6f,	// (0x000164b1) popup_call_audio_first_window_t5

0x0002,

0xf087,	// (0x000248c9) popup_call_audio_first_window_t_ParamLimits

0xf087,	// (0x000248c9) popup_call_audio_first_window_t

0x0c9e,	// (0x000164e0) bg_popup_call_pane_cp02

0x0ca8,	// (0x000164ea) call_type_pane_cp023

0x0cb0,	// (0x000164f2) popup_call_audio_wait_window_g1

0x0cb8,	// (0x000164fa) popup_call_audio_wait_window_g2

0x0001,

0xf08e,	// (0x000248d0) popup_call_audio_wait_window_g

0x0cc0,	// (0x00016502) popup_call_audio_wait_window_t3

0x0cce,	// (0x00016510) bg_popup_call_pane_cp03_ParamLimits

0x0cce,	// (0x00016510) bg_popup_call_pane_cp03

0x0d2e,	// (0x00016570) call_thumbnail_pane_cp011_ParamLimits

0x0d2e,	// (0x00016570) call_thumbnail_pane_cp011

0x0d3a,	// (0x0001657c) call_type_pane_cp034_ParamLimits

0x0d3a,	// (0x0001657c) call_type_pane_cp034

0x0d76,	// (0x000165b8) popup_call_audio_second_window_g1_ParamLimits

0x0d76,	// (0x000165b8) popup_call_audio_second_window_g1

0x0db2,	// (0x000165f4) popup_call_audio_second_window_g2_ParamLimits

0x0db2,	// (0x000165f4) popup_call_audio_second_window_g2

0x0001,

0xf093,	// (0x000248d5) popup_call_audio_second_window_g_ParamLimits

0xf093,	// (0x000248d5) popup_call_audio_second_window_g

0x0dee,	// (0x00016630) popup_call_audio_second_window_t1_ParamLimits

0x0dee,	// (0x00016630) popup_call_audio_second_window_t1

0x0e6f,	// (0x000166b1) popup_call_audio_second_window_t2_ParamLimits

0x0e6f,	// (0x000166b1) popup_call_audio_second_window_t2

0x0ea5,	// (0x000166e7) popup_call_audio_second_window_t3_ParamLimits

0x0ea5,	// (0x000166e7) popup_call_audio_second_window_t3

0x0002,

0xf098,	// (0x000248da) popup_call_audio_second_window_t_ParamLimits

0xf098,	// (0x000248da) popup_call_audio_second_window_t

0x0c9e,	// (0x000164e0) bg_popup_call_pane_cp04

0x0edb,	// (0x0001671d) list_conf_pane

0x0ee3,	// (0x00016725) popup_call_audio_conf_window_t1

0x0ef1,	// (0x00016733) call_thumbnail_pane_g1

0x0ef9,	// (0x0001673b) bg_pinb_pane_ParamLimits

0x0ef9,	// (0x0001673b) bg_pinb_pane

0x0f07,	// (0x00016749) find_pinb_pane

0x0ef9,	// (0x0001673b) listscroll_pinb_pane_ParamLimits

0x0ef9,	// (0x0001673b) listscroll_pinb_pane

0x0f11,	// (0x00016753) pinb_bg_pane_g1

0x0f11,	// (0x00016753) pinb_bg_pane_g2

0x0f11,	// (0x00016753) pinb_bg_pane_g3

0x0f11,	// (0x00016753) pinb_bg_pane_g4

0x0f11,	// (0x00016753) pinb_bg_pane_g5

0x0f11,	// (0x00016753) pinb_bg_pane_g6

0x0f11,	// (0x00016753) pinb_bg_pane_g7

0x0f11,	// (0x00016753) pinb_bg_pane_g8

0x0f11,	// (0x00016753) pinb_bg_pane_g9

0x0f11,	// (0x00016753) pinb_bg_pane_g10

0x0009,

0xf09f,	// (0x000248e1) pinb_bg_pane_g

0x896e,	// (0x0001e1b0) grid_pinb_pane

0x082c,	// (0x0001606e) list_pinb_pane

0x0f1b,	// (0x0001675d) scroll_pane_cp01_ParamLimits

0x0f1b,	// (0x0001675d) scroll_pane_cp01

0x0f28,	// (0x0001676a) find_pinb_pane_g1_ParamLimits

0x0f28,	// (0x0001676a) find_pinb_pane_g1

0x0f40,	// (0x00016782) find_pinb_pane_t1

0x0f52,	// (0x00016794) find_pinb_pane_t2

0x0001,

0xf0b9,	// (0x000248fb) find_pinb_pane_t

0x0f67,	// (0x000167a9) input_focus_pane_cp01_ParamLimits

0x0f67,	// (0x000167a9) input_focus_pane_cp01

0x8978,	// (0x0001e1ba) cell_pinb_pane_ParamLimits

0x8978,	// (0x0001e1ba) cell_pinb_pane

0x0f73,	// (0x000167b5) cell_pinb_pane_g1_ParamLimits

0x0f73,	// (0x000167b5) cell_pinb_pane_g1

0x0f81,	// (0x000167c3) cell_pinb_pane_g2_ParamLimits

0x0f81,	// (0x000167c3) cell_pinb_pane_g2

0x0f81,	// (0x000167c3) cell_pinb_pane_g3_ParamLimits

0x0f81,	// (0x000167c3) cell_pinb_pane_g3

0x0002,

0xf0be,	// (0x00024900) cell_pinb_pane_g_ParamLimits

0xf0be,	// (0x00024900) cell_pinb_pane_g

0x0c9e,	// (0x000164e0) grid_highlight_pane_cp01

0x0f8f,	// (0x000167d1) list_pinb_item_pane_ParamLimits

0x0f8f,	// (0x000167d1) list_pinb_item_pane

0x082c,	// (0x0001606e) list_highlight_pane_cp02

0x0f9d,	// (0x000167df) list_pinb_item_pane_g1_ParamLimits

0x0f9d,	// (0x000167df) list_pinb_item_pane_g1

0x0f81,	// (0x000167c3) list_pinb_item_pane_g2_ParamLimits

0x0f81,	// (0x000167c3) list_pinb_item_pane_g2

0x0f73,	// (0x000167b5) list_pinb_item_pane_g3_ParamLimits

0x0f73,	// (0x000167b5) list_pinb_item_pane_g3

0x0f81,	// (0x000167c3) list_pinb_item_pane_g4_ParamLimits

0x0f81,	// (0x000167c3) list_pinb_item_pane_g4

0x0003,

0xf0c5,	// (0x00024907) list_pinb_item_pane_g_ParamLimits

0xf0c5,	// (0x00024907) list_pinb_item_pane_g

0x0fab,	// (0x000167ed) list_pinb_item_pane_t1_ParamLimits

0x0fab,	// (0x000167ed) list_pinb_item_pane_t1

0x7442,	// (0x0001cc84) calc_display_pane

0x745a,	// (0x0001cc9c) calc_paper_pane

0x7476,	// (0x0001ccb8) grid_calc_pane

0x0c9e,	// (0x000164e0) bg_list_pane_cp01

0x898c,	// (0x0001e1ce) clock_g1

0x8994,	// (0x0001e1d6) clock_g2

0x0001,

0xf0ce,	// (0x00024910) clock_g

0x899c,	// (0x0001e1de) clock_t1_ParamLimits

0x899c,	// (0x0001e1de) clock_t1

0x89b1,	// (0x0001e1f3) clock_t2_ParamLimits

0x89b1,	// (0x0001e1f3) clock_t2

0x89c3,	// (0x0001e205) clock_t3_ParamLimits

0x89c3,	// (0x0001e205) clock_t3

0x89d5,	// (0x0001e217) clock_t4_ParamLimits

0x89d5,	// (0x0001e217) clock_t4

0x89e7,	// (0x0001e229) clock_t5_ParamLimits

0x89e7,	// (0x0001e229) clock_t5

0x89fc,	// (0x0001e23e) clock_t6_ParamLimits

0x89fc,	// (0x0001e23e) clock_t6

0x8a0e,	// (0x0001e250) clock_t7_ParamLimits

0x8a0e,	// (0x0001e250) clock_t7

0x8a20,	// (0x0001e262) clock_t8_ParamLimits

0x8a20,	// (0x0001e262) clock_t8

0x8a32,	// (0x0001e274) clock_t9_ParamLimits

0x8a32,	// (0x0001e274) clock_t9

0x0008,

0xf0d3,	// (0x00024915) clock_t_ParamLimits

0xf0d3,	// (0x00024915) clock_t

0x0fc7,	// (0x00016809) popup_clock_analogue_window_cp02

0x0fc7,	// (0x00016809) popup_clock_digital_window_cp01

0x0c9e,	// (0x000164e0) listscroll_help_pane

0x0c9e,	// (0x000164e0) phob_pre_status_pane

0x0fcf,	// (0x00016811) grid_qdial_pane

0x0ef9,	// (0x0001673b) listscroll_mce_pane

0x0ef9,	// (0x0001673b) bg_notes_pane

0x0fd9,	// (0x0001681b) list_notes_pane

0x8a44,	// (0x0001e286) scroll_pane_cp06

0x0fe7,	// (0x00016829) bg_calc_paper_pane

0x7496,	// (0x0001ccd8) list_calc_pane

0x1019,	// (0x0001685b) bg_calc_display_pane

0x74b0,	// (0x0001ccf2) calc_display_pane_t1

0x74c5,	// (0x0001cd07) calc_display_pane_t2

0x74da,	// (0x0001cd1c) calc_display_pane_t3

0x0002,

0xf0e6,	// (0x00024928) calc_display_pane_t

0x74ec,	// (0x0001cd2e) cell_calc_pane_ParamLimits

0x74ec,	// (0x0001cd2e) cell_calc_pane

0x1061,	// (0x000168a3) bg_calc_paper_pane_g1

0x1079,	// (0x000168bb) bg_calc_paper_pane_g2

0x106d,	// (0x000168af) bg_calc_paper_pane_g3

0x1091,	// (0x000168d3) bg_calc_paper_pane_g4

0x1085,	// (0x000168c7) bg_calc_paper_pane_g5

0x8a51,	// (0x0001e293) bg_calc_paper_pane_g6

0x8a60,	// (0x0001e2a2) bg_calc_paper_pane_g7

0x8a6f,	// (0x0001e2b1) bg_calc_paper_pane_g8

0x0007,

0xf0ed,	// (0x0002492f) bg_calc_paper_pane_g

0x8a7e,	// (0x0001e2c0) calc_bg_paper_pane_g9

0x8a8d,	// (0x0001e2cf) list_calc_item_pane_ParamLimits

0x8a8d,	// (0x0001e2cf) list_calc_item_pane

0x109d,	// (0x000168df) list_calc_item_pane_g1

0x7513,	// (0x0001cd55) list_calc_item_pane_t1_ParamLimits

0x7513,	// (0x0001cd55) list_calc_item_pane_t1

0x7525,	// (0x0001cd67) list_calc_item_pane_t2_ParamLimits

0x7525,	// (0x0001cd67) list_calc_item_pane_t2

0x0001,

0xf0fe,	// (0x00024940) list_calc_item_pane_t_ParamLimits

0xf0fe,	// (0x00024940) list_calc_item_pane_t

0x0f11,	// (0x00016753) cell_calc_pane_g1

0x10bc,	// (0x000168fe) grid_highlight_pane_cp02

0x10f1,	// (0x00016933) bg_calc_display_pane_g1

0x7553,	// (0x0001cd95) bg_calc_display_pane_g2

0x10de,	// (0x00016920) bg_calc_display_pane_g3

0x0002,

0xf108,	// (0x0002494a) bg_calc_display_pane_g

0x755d,	// (0x0001cd9f) cell_qdial_pane_ParamLimits

0x755d,	// (0x0001cd9f) cell_qdial_pane

0x8aa6,	// (0x0001e2e8) cell_qdial_pane_g1_ParamLimits

0x8aa6,	// (0x0001e2e8) cell_qdial_pane_g1

0x8ab3,	// (0x0001e2f5) cell_qdial_pane_g2_ParamLimits

0x8ab3,	// (0x0001e2f5) cell_qdial_pane_g2

0x10fa,	// (0x0001693c) cell_qdial_pane_g3_ParamLimits

0x10fa,	// (0x0001693c) cell_qdial_pane_g3

0x0003,

0xf10f,	// (0x00024951) cell_qdial_pane_g_ParamLimits

0xf10f,	// (0x00024951) cell_qdial_pane_g

0x8ad1,	// (0x0001e313) cell_qdial_pane_t1_ParamLimits

0x8ad1,	// (0x0001e313) cell_qdial_pane_t1

0x8ae9,	// (0x0001e32b) cell_qdial_pane_t2_ParamLimits

0x8ae9,	// (0x0001e32b) cell_qdial_pane_t2

0x8afc,	// (0x0001e33e) cell_qdial_pane_t3_ParamLimits

0x8afc,	// (0x0001e33e) cell_qdial_pane_t3

0x0002,

0xf118,	// (0x0002495a) cell_qdial_pane_t_ParamLimits

0xf118,	// (0x0002495a) cell_qdial_pane_t

0x0c9e,	// (0x000164e0) grid_highlight_pane_cp04

0x1106,	// (0x00016948) thumbnail_qdial_pane_ParamLimits

0x1106,	// (0x00016948) thumbnail_qdial_pane

0x1162,	// (0x000169a4) list_help_pane

0x116c,	// (0x000169ae) scroll_pane_cp02

0x8b0f,	// (0x0001e351) help_list_pane_t1_ParamLimits

0x8b0f,	// (0x0001e351) help_list_pane_t1

0x756f,	// (0x0001cdb1) bg_notes_pane_g2

0x7577,	// (0x0001cdb9) bg_notes_pane_g3

0x757f,	// (0x0001cdc1) notes_bg_pane_g1

0x7587,	// (0x0001cdc9) notes_bg_pane_g4

0x758f,	// (0x0001cdd1) notes_bg_pane_g5

0x7597,	// (0x0001cdd9) notes_bg_pane_g6

0x759f,	// (0x0001cde1) notes_bg_pane_g7

0x75a7,	// (0x0001cde9) notes_bg_pane_g8

0x75af,	// (0x0001cdf1) notes_bg_pane_g9

0x0006,

0xf136,	// (0x00024978) notes_bg_pane_g

0x8b2e,	// (0x0001e370) list_notes_text_pane_ParamLimits

0x8b2e,	// (0x0001e370) list_notes_text_pane

0x11bd,	// (0x000169ff) list_notes_text_pane_g1

0x8b52,	// (0x0001e394) list_notes_text_pane_t1

0x8b60,	// (0x0001e3a2) listscroll_cale_week_pane

0x8b85,	// (0x0001e3c7) bg_cale_heading_pane

0x11e0,	// (0x00016a22) bg_cale_pane_cp01

0x8b9d,	// (0x0001e3df) cale_week_corner_pane

0x8bb7,	// (0x0001e3f9) cale_week_day_heading_pane

0x8bcf,	// (0x0001e411) cale_week_scroll_pane_g1

0x8be2,	// (0x0001e424) cale_week_scroll_pane_g2

0x8bf5,	// (0x0001e437) cale_week_scroll_pane_g3

0x8c08,	// (0x0001e44a) cale_week_scroll_pane_g4

0x8c1b,	// (0x0001e45d) cale_week_scroll_pane_g5

0x8c2e,	// (0x0001e470) cale_week_scroll_pane_g6

0x8c41,	// (0x0001e483) cale_week_scroll_pane_g7

0x8c54,	// (0x0001e496) cale_week_scroll_pane_g8

0x8c67,	// (0x0001e4a9) cale_week_scroll_pane_g9

0x8c7a,	// (0x0001e4bc) cale_week_scroll_pane_g10

0x8c8d,	// (0x0001e4cf) cale_week_scroll_pane_g11

0x8ca0,	// (0x0001e4e2) cale_week_scroll_pane_g12

0x8cb3,	// (0x0001e4f5) cale_week_scroll_pane_g13

0x8cc6,	// (0x0001e508) cale_week_scroll_pane_g14

0x8cd9,	// (0x0001e51b) cale_week_scroll_pane_g15

0x000f,

0xf145,	// (0x00024987) cale_week_scroll_pane_g

0x8cff,	// (0x0001e541) cale_week_time_pane

0x8d12,	// (0x0001e554) grid_cale_week_pane

0x120f,	// (0x00016a51) scroll_pane_cp08

0x8d27,	// (0x0001e569) cell_cale_week_pane_ParamLimits

0x8d27,	// (0x0001e569) cell_cale_week_pane

0x8d75,	// (0x0001e5b7) cale_week_day_heading_pane_t1

0x8db0,	// (0x0001e5f2) cale_week_day_heading_pane_t2

0x8deb,	// (0x0001e62d) cale_week_day_heading_pane_t3

0x8e26,	// (0x0001e668) cale_week_day_heading_pane_t4

0x8e61,	// (0x0001e6a3) cale_week_day_heading_pane_t5

0x8e9c,	// (0x0001e6de) cale_week_day_heading_pane_t6

0x8ed7,	// (0x0001e719) cale_week_day_heading_pane_t7

0x0006,

0xf166,	// (0x000249a8) cale_week_day_heading_pane_t

0x122c,	// (0x00016a6e) bg_cale_side_pane

0x75b7,	// (0x0001cdf9) cale_week_time_pane_t1

0x75f1,	// (0x0001ce33) cale_week_time_pane_t2

0x762b,	// (0x0001ce6d) cale_week_time_pane_t3

0x7665,	// (0x0001cea7) cale_week_time_pane_t4

0x769f,	// (0x0001cee1) cale_week_time_pane_t5

0x76d9,	// (0x0001cf1b) cale_week_time_pane_t6

0x7713,	// (0x0001cf55) cale_week_time_pane_t7

0x774d,	// (0x0001cf8f) cale_week_time_pane_t8

0x0007,

0xf175,	// (0x000249b7) cale_week_time_pane_t

0x8f12,	// (0x0001e754) cell_cale_week_pane_g2

0x8f36,	// (0x0001e778) cell_cale_week_pane_g3_ParamLimits

0x8f36,	// (0x0001e778) cell_cale_week_pane_g3

0x123a,	// (0x00016a7c) grid_highlight_pane_cp07

0x1242,	// (0x00016a84) listscroll_gms_pane

0x124c,	// (0x00016a8e) grid_gms_pane

0x1255,	// (0x00016a97) listscroll_gms_pane_g1

0x125d,	// (0x00016a9f) listscroll_gms_pane_g2

0x0001,

0xf186,	// (0x000249c8) listscroll_gms_pane_g

0x8f4e,	// (0x0001e790) scroll_pane_cp010

0x8f57,	// (0x0001e799) cell_gms_pane_ParamLimits

0x8f57,	// (0x0001e799) cell_gms_pane

0x8f68,	// (0x0001e7aa) cell_gms_pane_g1

0x1265,	// (0x00016aa7) cell_gms_pane_g2

0x11bd,	// (0x000169ff) cell_gms_pane_g3

0x126d,	// (0x00016aaf) cell_gms_pane_g4

0x0003,

0xf18b,	// (0x000249cd) cell_gms_pane_g

0x1276,	// (0x00016ab8) grid_highlight_pane_cp09

0xaa71,	// (0x000202b3) phob_pre_status_pane_g1

0xaa79,	// (0x000202bb) phob_pre_status_pane_g2

0xaa81,	// (0x000202c3) phob_pre_status_pane_g3

0xaa89,	// (0x000202cb) phob_pre_status_pane_g4

0x0004,

0xf579,	// (0x00024dbb) phob_pre_status_pane_g

0xaa99,	// (0x000202db) phob_pre_status_pane_t1

0xaaa7,	// (0x000202e9) phob_pre_status_pane_t2

0xaab5,	// (0x000202f7) phob_pre_status_pane_t3

0x0002,

0xf584,	// (0x00024dc6) phob_pre_status_pane_t

0x127e,	// (0x00016ac0) bg_list_pane_cp05

0x8f70,	// (0x0001e7b2) grid_vorec_pane

0x1286,	// (0x00016ac8) vorec_t1

0x1294,	// (0x00016ad6) vorec_t2

0x12a2,	// (0x00016ae4) vorec_t3

0x8f78,	// (0x0001e7ba) vorec_t4

0x889b,	// (0x0001e0dd) vorec_t5

0x88a9,	// (0x0001e0eb) vorec_t6

0x0004,

0xf194,	// (0x000249d6) vorec_t

0x88b7,	// (0x0001e0f9) wait_bar_pane_cp01

0x21b6,	// (0x000179f8) cell_vorec_pane_ParamLimits

0x21b6,	// (0x000179f8) cell_vorec_pane

0x7787,	// (0x0001cfc9) cell_vorec_pane_g1

0x0c9e,	// (0x000164e0) grid_highlight_pane_cp05

0x0f8f,	// (0x000167d1) cams_zoom_pane

0x0f8f,	// (0x000167d1) image_vga_pane

0x0f81,	// (0x000167c3) main_camera_pane_g1

0x0f81,	// (0x000167c3) main_camera_pane_g2

0x0f81,	// (0x000167c3) main_camera_pane_g3

0x0f81,	// (0x000167c3) main_camera_pane_g4

0x0f81,	// (0x000167c3) main_camera_pane_g5

0x0f81,	// (0x000167c3) main_camera_pane_g6

0x0f81,	// (0x000167c3) main_camera_pane_g7

0x0007,

0xf19f,	// (0x000249e1) main_camera_pane_g

0x1e5e,	// (0x000176a0) main_camera_pane_t1

0x1e5e,	// (0x000176a0) main_camera_pane_t2

0x0001,

0xf1b0,	// (0x000249f2) main_camera_pane_t

0x8f86,	// (0x0001e7c8) cams_zoom_pane_cp_ParamLimits

0x8f86,	// (0x0001e7c8) cams_zoom_pane_cp

0x8fb4,	// (0x0001e7f6) image_cif_pane_ParamLimits

0x8fb4,	// (0x0001e7f6) image_cif_pane

0x082c,	// (0x0001606e) image_subqcif_pane

0x8fc2,	// (0x0001e804) main_video_pane_g1_ParamLimits

0x8fc2,	// (0x0001e804) main_video_pane_g1

0x8fea,	// (0x0001e82c) main_video_pane_g2_ParamLimits

0x8fea,	// (0x0001e82c) main_video_pane_g2

0x901d,	// (0x0001e85f) main_video_pane_g3_ParamLimits

0x901d,	// (0x0001e85f) main_video_pane_g3

0x901d,	// (0x0001e85f) main_video_pane_g4_ParamLimits

0x901d,	// (0x0001e85f) main_video_pane_g4

0x904b,	// (0x0001e88d) main_video_pane_g5_ParamLimits

0x904b,	// (0x0001e88d) main_video_pane_g5

0x12dc,	// (0x00016b1e) main_video_pane_g6_ParamLimits

0x12dc,	// (0x00016b1e) main_video_pane_g6

0x0006,

0xf1b5,	// (0x000249f7) main_video_pane_g_ParamLimits

0xf1b5,	// (0x000249f7) main_video_pane_g

0x9067,	// (0x0001e8a9) main_video_pane_t1_ParamLimits

0x9067,	// (0x0001e8a9) main_video_pane_t1

0x12f6,	// (0x00016b38) cams_zoom_pane_g1

0x12f6,	// (0x00016b38) cams_zoom_pane_g2

0x12f6,	// (0x00016b38) cams_zoom_pane_g3

0x12f6,	// (0x00016b38) cams_zoom_pane_g4

0x0003,

0xf1c4,	// (0x00024a06) cams_zoom_pane_g

0x90ad,	// (0x0001e8ef) grid_cams_pane

0x90b9,	// (0x0001e8fb) linegrid_cams_pane

0x90c5,	// (0x0001e907) cell_cams_pane_ParamLimits

0x90c5,	// (0x0001e907) cell_cams_pane

0x1300,	// (0x00016b42) cams_burst_image_pane

0x1308,	// (0x00016b4a) cell_cams_pane_g1

0x0c9e,	// (0x000164e0) grid_highlight_pane_cp03

0x0f11,	// (0x00016753) mp_bg_pane_g1

0x082c,	// (0x0001606e) bg_list_pane_cp03

0x082c,	// (0x0001606e) bg_mp_pane

0x082c,	// (0x0001606e) grid_mp_pane

0x12f6,	// (0x00016b38) media_player_g1

0x3180,	// (0x000189c2) media_player_t1

0x3180,	// (0x000189c2) media_player_t2

0x3180,	// (0x000189c2) media_player_t3

0x3180,	// (0x000189c2) media_player_t4

0x3180,	// (0x000189c2) media_player_t5

0x3180,	// (0x000189c2) media_player_t6

0x3180,	// (0x000189c2) media_player_t7

0x0006,

0xf563,	// (0x00024da5) media_player_t

0x082c,	// (0x0001606e) wait_bar_pane_cp02

0xf548,	// (0x00024d8a) main_usb_pane_t

0x1b50,	// (0x00017392) cell_mp_pane

0x0f11,	// (0x00016753) cell_mp_pane_g1

0x0c9e,	// (0x000164e0) grid_highlight_pane_cp06

0x134e,	// (0x00016b90) grid_skin_colour_pane

0x1356,	// (0x00016b98) list_highlight_pane_cp03

0x90d8,	// (0x0001e91a) skin_g1

0x135e,	// (0x00016ba0) skin_t1

0x136d,	// (0x00016baf) skin_t2

0x0001,

0xf1f2,	// (0x00024a34) skin_t

0x90e0,	// (0x0001e922) cell_skin_colour_pane_ParamLimits

0x90e0,	// (0x0001e922) cell_skin_colour_pane

0x137b,	// (0x00016bbd) cell_skin_colour_pane_g1

0x9156,	// (0x0001e998) call_video_g1_ParamLimits

0x9156,	// (0x0001e998) call_video_g1

0x9162,	// (0x0001e9a4) call_video_g2_ParamLimits

0x9162,	// (0x0001e9a4) call_video_g2

0x0001,

0xf1f7,	// (0x00024a39) call_video_g_ParamLimits

0xf1f7,	// (0x00024a39) call_video_g

0x91b2,	// (0x0001e9f4) call_video_uplink_pane_cp1_ParamLimits

0x91b2,	// (0x0001e9f4) call_video_uplink_pane_cp1

0x138d,	// (0x00016bcf) call_video_uplink_pane_cp2

0x926e,	// (0x0001eab0) video_down_crop_pane_ParamLimits

0x926e,	// (0x0001eab0) video_down_crop_pane

0x9338,	// (0x0001eb7a) video_down_pane_ParamLimits

0x9338,	// (0x0001eb7a) video_down_pane

0x1395,	// (0x00016bd7) video_down_subqcif_pane_ParamLimits

0x1395,	// (0x00016bd7) video_down_subqcif_pane

0x13ad,	// (0x00016bef) video_down_subqcif_pane_cp_ParamLimits

0x13ad,	// (0x00016bef) video_down_subqcif_pane_cp

0x13d1,	// (0x00016c13) im_reading_pane_ParamLimits

0x13d1,	// (0x00016c13) im_reading_pane

0x9404,	// (0x0001ec46) im_writing_pane_ParamLimits

0x9404,	// (0x0001ec46) im_writing_pane

0x941a,	// (0x0001ec5c) im_reading_pane_t1

0x13eb,	// (0x00016c2d) list_im_pane

0x13fc,	// (0x00016c3e) scroll_pane_cp07

0x9452,	// (0x0001ec94) im_writing_pane_t1_ParamLimits

0x9452,	// (0x0001ec94) im_writing_pane_t1

0x1415,	// (0x00016c57) im_writing_pane_t2_ParamLimits

0x1415,	// (0x00016c57) im_writing_pane_t2

0x0001,

0xf201,	// (0x00024a43) im_writing_pane_t_ParamLimits

0xf201,	// (0x00024a43) im_writing_pane_t

0x0c9e,	// (0x000164e0) input_focus_pane_cp04

0x0c9e,	// (0x000164e0) input_focus_pane_cp05

0x9467,	// (0x0001eca9) list_im_single_pane_ParamLimits

0x9467,	// (0x0001eca9) list_im_single_pane

0x1432,	// (0x00016c74) list_single_im_pane_t1

0x127e,	// (0x00016ac0) blid_accuracy_pane

0x127e,	// (0x00016ac0) blid_compass_pane

0x3190,	// (0x000189d2) main_location_t1

0x3190,	// (0x000189d2) main_location_t2

0x3190,	// (0x000189d2) main_location_t3

0x0002,

0xf572,	// (0x00024db4) main_location_t

0x0c9e,	// (0x000164e0) aid_levels_location

0x0f11,	// (0x00016753) blid_accuracy_pane_g1

0x0f11,	// (0x00016753) blid_accuracy_pane_g2

0x0001,

0xf255,	// (0x00024a97) blid_accuracy_pane_g

0x146c,	// (0x00016cae) wml_content_pane

0x14aa,	// (0x00016cec) wml_button_pane_ParamLimits

0x14aa,	// (0x00016cec) wml_button_pane

0x947f,	// (0x0001ecc1) wml_list_single_large_pane_ParamLimits

0x947f,	// (0x0001ecc1) wml_list_single_large_pane

0x9496,	// (0x0001ecd8) wml_list_single_medium_pane_ParamLimits

0x9496,	// (0x0001ecd8) wml_list_single_medium_pane

0x94ae,	// (0x0001ecf0) wml_list_single_small_pane_ParamLimits

0x94ae,	// (0x0001ecf0) wml_list_single_small_pane

0x14be,	// (0x00016d00) wml_selection_box_pane_ParamLimits

0x14be,	// (0x00016d00) wml_selection_box_pane

0x14d1,	// (0x00016d13) wml_list_single_pane_t1

0x14e0,	// (0x00016d22) wml_list_single_medium_pane_t1

0x14ef,	// (0x00016d31) wml_list_single_large_pane_t1

0x14fe,	// (0x00016d40) input_focus_pane_cp02_ParamLimits

0x14fe,	// (0x00016d40) input_focus_pane_cp02

0x1511,	// (0x00016d53) wml_selection_box_pane_g1

0x151a,	// (0x00016d5c) wml_selection_box_pane_t1_ParamLimits

0x151a,	// (0x00016d5c) wml_selection_box_pane_t1

0x0ef9,	// (0x0001673b) bg_wml_button_pane_ParamLimits

0x0ef9,	// (0x0001673b) bg_wml_button_pane

0x1532,	// (0x00016d74) wml_button_pane_g1

0x153a,	// (0x00016d7c) wml_button_pane_t1

0x1532,	// (0x00016d74) wml_button_bg_pane_g1

0x154a,	// (0x00016d8c) wml_button_bg_pane_g2

0x1552,	// (0x00016d94) wml_button_bg_pane_g3

0x155a,	// (0x00016d9c) wml_button_bg_pane_g4

0x1562,	// (0x00016da4) wml_button_bg_pane_g5

0x156a,	// (0x00016dac) wml_button_bg_pane_g6

0x1572,	// (0x00016db4) wml_button_bg_pane_g7

0x157a,	// (0x00016dbc) wml_button_bg_pane_g8

0x1582,	// (0x00016dc4) wml_button_bg_pane_g9

0x0008,

0xf206,	// (0x00024a48) wml_button_bg_pane_g

0x94c9,	// (0x0001ed0b) bg_list_pane_cp02

0x158a,	// (0x00016dcc) mce_header_pane_ParamLimits

0x158a,	// (0x00016dcc) mce_header_pane

0x159e,	// (0x00016de0) mce_icon_pane

0x159e,	// (0x00016de0) mce_image_pane

0x15a7,	// (0x00016de9) mce_text_pane_ParamLimits

0x15a7,	// (0x00016de9) mce_text_pane

0x94d2,	// (0x0001ed14) scroll_pane_cp03

0x94d2,	// (0x0001ed14) scroll_pane_cp04

0x15bb,	// (0x00016dfd) scroll_pane_cp05_ParamLimits

0x15bb,	// (0x00016dfd) scroll_pane_cp05

0x94da,	// (0x0001ed1c) mce_header_field_pane_ParamLimits

0x94da,	// (0x0001ed1c) mce_header_field_pane

0x94fa,	// (0x0001ed3c) mce_header_field_pane_2_ParamLimits

0x94fa,	// (0x0001ed3c) mce_header_field_pane_2

0x9510,	// (0x0001ed52) mce_header_field_pane_3

0x9518,	// (0x0001ed5a) list_single_mce_message_pane_ParamLimits

0x9518,	// (0x0001ed5a) list_single_mce_message_pane

0x952f,	// (0x0001ed71) list_single_mce_smart_pane_ParamLimits

0x952f,	// (0x0001ed71) list_single_mce_smart_pane

0x15c7,	// (0x00016e09) input_focus_pane_cp03

0x15d0,	// (0x00016e12) list_header_data_pane

0x9551,	// (0x0001ed93) mce_header_field_pane_t1

0x955f,	// (0x0001eda1) list_single_mce_header_pane_ParamLimits

0x955f,	// (0x0001eda1) list_single_mce_header_pane

0x15d8,	// (0x00016e1a) list_single_mce_header_pane_t1

0x15e7,	// (0x00016e29) list_single_mce_message_pane_g1

0x15f0,	// (0x00016e32) list_single_mce_message_pane_t1

0x959d,	// (0x0001eddf) bg_cale_heading_pane_cp01_ParamLimits

0x959d,	// (0x0001eddf) bg_cale_heading_pane_cp01

0x15ff,	// (0x00016e41) bg_cale_pane_cp02_ParamLimits

0x15ff,	// (0x00016e41) bg_cale_pane_cp02

0x95cc,	// (0x0001ee0e) cale_month_corner_pane

0x95e6,	// (0x0001ee28) cale_month_day_heading_pane_ParamLimits

0x95e6,	// (0x0001ee28) cale_month_day_heading_pane

0x9615,	// (0x0001ee57) cale_month_pane_g1_ParamLimits

0x9615,	// (0x0001ee57) cale_month_pane_g1

0x9639,	// (0x0001ee7b) cale_month_pane_g2_ParamLimits

0x9639,	// (0x0001ee7b) cale_month_pane_g2

0x9658,	// (0x0001ee9a) cale_month_pane_g3_ParamLimits

0x9658,	// (0x0001ee9a) cale_month_pane_g3

0x9694,	// (0x0001eed6) cale_month_pane_g4_ParamLimits

0x9694,	// (0x0001eed6) cale_month_pane_g4

0x96d0,	// (0x0001ef12) cale_month_pane_g5_ParamLimits

0x96d0,	// (0x0001ef12) cale_month_pane_g5

0x970c,	// (0x0001ef4e) cale_month_pane_g6_ParamLimits

0x970c,	// (0x0001ef4e) cale_month_pane_g6

0x9748,	// (0x0001ef8a) cale_month_pane_g7_ParamLimits

0x9748,	// (0x0001ef8a) cale_month_pane_g7

0x9784,	// (0x0001efc6) cale_month_pane_g8_ParamLimits

0x9784,	// (0x0001efc6) cale_month_pane_g8

0x97c0,	// (0x0001f002) cale_month_pane_g9_ParamLimits

0x97c0,	// (0x0001f002) cale_month_pane_g9

0x97fa,	// (0x0001f03c) cale_month_pane_g10_ParamLimits

0x97fa,	// (0x0001f03c) cale_month_pane_g10

0x9834,	// (0x0001f076) cale_month_pane_g11_ParamLimits

0x9834,	// (0x0001f076) cale_month_pane_g11

0x986e,	// (0x0001f0b0) cale_month_pane_g12_ParamLimits

0x986e,	// (0x0001f0b0) cale_month_pane_g12

0x98a8,	// (0x0001f0ea) cale_month_pane_g13_ParamLimits

0x98a8,	// (0x0001f0ea) cale_month_pane_g13

0x000c,

0xf219,	// (0x00024a5b) cale_month_pane_g_ParamLimits

0xf219,	// (0x00024a5b) cale_month_pane_g

0x98e2,	// (0x0001f124) cale_month_week_pane

0x98f5,	// (0x0001f137) grid_cale_month_pane_ParamLimits

0x98f5,	// (0x0001f137) grid_cale_month_pane

0x991b,	// (0x0001f15d) cale_month_day_heading_pane_t1

0x99a1,	// (0x0001f1e3) cale_month_day_heading_pane_t2

0x9a32,	// (0x0001f274) cale_month_day_heading_pane_t3

0x9ac3,	// (0x0001f305) cale_month_day_heading_pane_t4

0x9b54,	// (0x0001f396) cale_month_day_heading_pane_t5

0x9be5,	// (0x0001f427) cale_month_day_heading_pane_t6

0x9c76,	// (0x0001f4b8) cale_month_day_heading_pane_t7

0x0006,

0xf234,	// (0x00024a76) cale_month_day_heading_pane_t

0x122c,	// (0x00016a6e) bg_cale_side_pane_cp01

0x9d07,	// (0x0001f549) cale_month_week_pane_t1

0x9d40,	// (0x0001f582) cale_month_week_pane_t2

0x9d79,	// (0x0001f5bb) cale_month_week_pane_t3

0x9db2,	// (0x0001f5f4) cale_month_week_pane_t4

0x9deb,	// (0x0001f62d) cale_month_week_pane_t5

0x9e24,	// (0x0001f666) cale_month_week_pane_t6

0x0005,

0xf243,	// (0x00024a85) cale_month_week_pane_t

0x9e5d,	// (0x0001f69f) cell_cale_month_pane_ParamLimits

0x9e5d,	// (0x0001f69f) cell_cale_month_pane

0x7791,	// (0x0001cfd3) cell_cale_month_pane_g1

0x779d,	// (0x0001cfdf) cell_cale_month_pane_t1_ParamLimits

0x779d,	// (0x0001cfdf) cell_cale_month_pane_t1

0x123a,	// (0x00016a7c) grid_highlight_pane_cp08

0x0f11,	// (0x00016753) main_smil_g1

0x9f4b,	// (0x0001f78d) smil_status_pane

0x164a,	// (0x00016e8c) smil_text_pane

0x3058,	// (0x0001889a) bg_popup_call3_rect_pane_g8

0x3060,	// (0x000188a2) bg_popup_call3_rect_pane_g9

0x0008,

0xf4f3,	// (0x00024d35) bg_popup_call3_rect_pane_g

0x32c6,	// (0x00018b08) smil_status_volume_pane_g1

0x9f5c,	// (0x0001f79e) smil_status_pane_t1

0x7a28,	// (0x0001d26a) volume_smil_pane

0x1654,	// (0x00016e96) list_smil_text_pane

0x9f73,	// (0x0001f7b5) scroll_pane_cp011

0x9f7c,	// (0x0001f7be) smil_text_list_pane_t1_ParamLimits

0x9f7c,	// (0x0001f7be) smil_text_list_pane_t1

0x77bd,	// (0x0001cfff) aid_volume_smil_ParamLimits

0x77bd,	// (0x0001cfff) aid_volume_smil

0x0f11,	// (0x00016753) smil_volume_pane_g1

0x0f11,	// (0x00016753) smil_volume_pane_g2

0x0001,

0xf255,	// (0x00024a97) smil_volume_pane_g

0x8b60,	// (0x0001e3a2) listscroll_cale_day_pane

0x1680,	// (0x00016ec2) bg_cale_pane

0x1698,	// (0x00016eda) list_cale_pane

0x16bb,	// (0x00016efd) scroll_pane_cp09

0x16cc,	// (0x00016f0e) cale_bg_pane_g1

0x16d4,	// (0x00016f16) cale_bg_pane_g2

0x16dc,	// (0x00016f1e) cale_bg_pane_g3

0x16e4,	// (0x00016f26) cale_bg_pane_g4

0x16ec,	// (0x00016f2e) cale_bg_pane_g5

0x16f4,	// (0x00016f36) cale_bg_pane_g6

0x16fc,	// (0x00016f3e) cale_bg_pane_g7

0x1704,	// (0x00016f46) cale_bg_pane_g8

0x170c,	// (0x00016f4e) cale_bg_pane_g9

0x0008,

0xf25a,	// (0x00024a9c) cale_bg_pane_g

0x9fc3,	// (0x0001f805) list_cale_time_pane_ParamLimits

0x9fc3,	// (0x0001f805) list_cale_time_pane

0x1714,	// (0x00016f56) list_cale_time_pane_g1_ParamLimits

0x1714,	// (0x00016f56) list_cale_time_pane_g1

0x1720,	// (0x00016f62) list_cale_time_pane_g2_ParamLimits

0x1720,	// (0x00016f62) list_cale_time_pane_g2

0x9fd7,	// (0x0001f819) list_cale_time_pane_g3_ParamLimits

0x9fd7,	// (0x0001f819) list_cale_time_pane_g3

0x9fe3,	// (0x0001f825) list_cale_time_pane_g4_ParamLimits

0x9fe3,	// (0x0001f825) list_cale_time_pane_g4

0x9fef,	// (0x0001f831) list_cale_time_pane_g5_ParamLimits

0x9fef,	// (0x0001f831) list_cale_time_pane_g5

0x0005,

0xf26d,	// (0x00024aaf) list_cale_time_pane_g_ParamLimits

0xf26d,	// (0x00024aaf) list_cale_time_pane_g

0x173a,	// (0x00016f7c) list_cale_time_pane_t1_ParamLimits

0x173a,	// (0x00016f7c) list_cale_time_pane_t1

0x1762,	// (0x00016fa4) list_cale_time_pane_t2_ParamLimits

0x1762,	// (0x00016fa4) list_cale_time_pane_t2

0xa21a,	// (0x0001fa5c) aid_blid_cardinal_pane

0xa258,	// (0x0001fa9a) compass_pane_t4

0x178a,	// (0x00016fcc) list_cale_time_pane_t4_ParamLimits

0x178a,	// (0x00016fcc) list_cale_time_pane_t4

0xa266,	// (0x0001faa8) compass_pane_t5

0xa274,	// (0x0001fab6) compass_pane_t6

0xa282,	// (0x0001fac4) compass_pane_t7

0x1c6d,	// (0x000174af) navi_pane_cc_t1

0x1e24,	// (0x00017666) aid_phob_thumbnail_center_pane

0xa5b6,	// (0x0001fdf8) main_postcard_pane_g4_ParamLimits

0x0002,

0xf27a,	// (0x00024abc) list_cale_time_pane_t_ParamLimits

0xf27a,	// (0x00024abc) list_cale_time_pane_t

0x08f7,	// (0x00016139) bg_popup_window_pane_cp02_ParamLimits

0x08f7,	// (0x00016139) bg_popup_window_pane_cp02

0x17b2,	// (0x00016ff4) heading_pane_cp01_ParamLimits

0x17b2,	// (0x00016ff4) heading_pane_cp01

0x17be,	// (0x00017000) loc_req_pane_ParamLimits

0x17be,	// (0x00017000) loc_req_pane

0x17ce,	// (0x00017010) loc_type_pane_ParamLimits

0x17ce,	// (0x00017010) loc_type_pane

0x17e0,	// (0x00017022) loc_type_pane_t1_ParamLimits

0x17e0,	// (0x00017022) loc_type_pane_t1

0x17f2,	// (0x00017034) loc_type_pane_t2_ParamLimits

0x17f2,	// (0x00017034) loc_type_pane_t2

0x1804,	// (0x00017046) loc_type_pane_t3_ParamLimits

0x1804,	// (0x00017046) loc_type_pane_t3

0x0002,

0xf281,	// (0x00024ac3) loc_type_pane_t_ParamLimits

0xf281,	// (0x00024ac3) loc_type_pane_t

0x1816,	// (0x00017058) list_loc_req_pane

0x1820,	// (0x00017062) scroll_pane_cp012

0x9ffb,	// (0x0001f83d) list_single_loc_request_popup_menu_pane_ParamLimits

0x9ffb,	// (0x0001f83d) list_single_loc_request_popup_menu_pane

0x1829,	// (0x0001706b) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x1829,	// (0x0001706b) list_single_loc_request_popup_menu_pane_g1

0x1835,	// (0x00017077) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x1835,	// (0x00017077) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf288,	// (0x00024aca) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf288,	// (0x00024aca) list_single_loc_request_popup_menu_pane_g

0x1841,	// (0x00017083) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x1841,	// (0x00017083) list_single_loc_request_popup_menu_pane_t1

0xa00d,	// (0x0001f84f) bg_popup_window_pane_cp03_ParamLimits

0xa00d,	// (0x0001f84f) bg_popup_window_pane_cp03

0xa01b,	// (0x0001f85d) heading_loc_req_pane_ParamLimits

0xa01b,	// (0x0001f85d) heading_loc_req_pane

0xa027,	// (0x0001f869) popup_dyc_status_message_window_g1_ParamLimits

0xa027,	// (0x0001f869) popup_dyc_status_message_window_g1

0xa033,	// (0x0001f875) popup_dyc_status_message_window_t1_ParamLimits

0xa033,	// (0x0001f875) popup_dyc_status_message_window_t1

0xa045,	// (0x0001f887) popup_dyc_status_message_window_t2_ParamLimits

0xa045,	// (0x0001f887) popup_dyc_status_message_window_t2

0xa057,	// (0x0001f899) popup_dyc_status_message_window_t3_ParamLimits

0xa057,	// (0x0001f899) popup_dyc_status_message_window_t3

0x0002,

0xf28d,	// (0x00024acf) popup_dyc_status_message_window_t_ParamLimits

0xf28d,	// (0x00024acf) popup_dyc_status_message_window_t

0x0c9e,	// (0x000164e0) bg_heading_pane_cp01

0x1863,	// (0x000170a5) heading_loc_req_pane_g1

0x186b,	// (0x000170ad) heading_loc_req_pane_g2

0x1873,	// (0x000170b5) heading_loc_req_pane_g3

0x0002,

0xf294,	// (0x00024ad6) heading_loc_req_pane_g

0x187b,	// (0x000170bd) heading_loc_req_pane_t1

0x18a8,	// (0x000170ea) bg_popup_sub_pane_cp01_ParamLimits

0x18a8,	// (0x000170ea) bg_popup_sub_pane_cp01

0x18b6,	// (0x000170f8) popup_cale_events_window_g1_ParamLimits

0x18b6,	// (0x000170f8) popup_cale_events_window_g1

0x18d6,	// (0x00017118) popup_cale_events_window_g2_ParamLimits

0x18d6,	// (0x00017118) popup_cale_events_window_g2

0x0001,

0xf2c8,	// (0x00024b0a) popup_cale_events_window_g_ParamLimits

0xf2c8,	// (0x00024b0a) popup_cale_events_window_g

0x18f6,	// (0x00017138) popup_cale_events_window_t1_ParamLimits

0x18f6,	// (0x00017138) popup_cale_events_window_t1

0x1908,	// (0x0001714a) popup_cale_events_window_t2_ParamLimits

0x1908,	// (0x0001714a) popup_cale_events_window_t2

0x1946,	// (0x00017188) popup_cale_events_window_t3_ParamLimits

0x1946,	// (0x00017188) popup_cale_events_window_t3

0x1980,	// (0x000171c2) popup_cale_events_window_t4_ParamLimits

0x1980,	// (0x000171c2) popup_cale_events_window_t4

0x0003,

0xf2cd,	// (0x00024b0f) popup_cale_events_window_t_ParamLimits

0xf2cd,	// (0x00024b0f) popup_cale_events_window_t

0xa083,	// (0x0001f8c5) call_type_pane

0x287d,	// (0x000180bf) popup_call_status_window_g1

0xa08f,	// (0x0001f8d1) popup_call_status_window_g2

0xa09b,	// (0x0001f8dd) popup_call_status_window_g3

0x0002,

0xf2d6,	// (0x00024b18) popup_call_status_window_g

0x19b6,	// (0x000171f8) call_type_pane_g1

0x19bf,	// (0x00017201) call_type_pane_g2

0x0001,

0xf2dd,	// (0x00024b1f) call_type_pane_g

0x0c9e,	// (0x000164e0) bg_popup_sub_pane_cp02

0x19c8,	// (0x0001720a) listscroll_popup_wml_pane

0x19d0,	// (0x00017212) list_wml_pane

0x19da,	// (0x0001721c) scroll_pane_cp013

0xa0a7,	// (0x0001f8e9) list_single_graphic_popup_wml_pane_ParamLimits

0xa0a7,	// (0x0001f8e9) list_single_graphic_popup_wml_pane

0x0f11,	// (0x00016753) list_single_graphic_popup_wml_pane_g1

0x19e3,	// (0x00017225) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2e2,	// (0x00024b24) list_single_graphic_popup_wml_pane_g

0x19eb,	// (0x0001722d) list_single_graphic_popup_wml_pane_t1

0x19f9,	// (0x0001723b) aid_call_pane

0x0ef1,	// (0x00016733) popup_clock_analogue_window_g1

0x0ef1,	// (0x00016733) popup_clock_analogue_window_g2

0x77df,	// (0x0001d021) popup_clock_analogue_window_g3

0x77df,	// (0x0001d021) popup_clock_analogue_window_g4

0x0f11,	// (0x00016753) popup_clock_analogue_window_g5

0x0004,

0xf2e7,	// (0x00024b29) popup_clock_analogue_window_g

0x77e7,	// (0x0001d029) popup_clock_analogue_window_t1

0x77f5,	// (0x0001d037) clock_digital_number_pane_ParamLimits

0x77f5,	// (0x0001d037) clock_digital_number_pane

0x7801,	// (0x0001d043) clock_digital_number_pane_cp02_ParamLimits

0x7801,	// (0x0001d043) clock_digital_number_pane_cp02

0x780d,	// (0x0001d04f) clock_digital_number_pane_cp03_ParamLimits

0x780d,	// (0x0001d04f) clock_digital_number_pane_cp03

0x7819,	// (0x0001d05b) clock_digital_number_pane_cp04_ParamLimits

0x7819,	// (0x0001d05b) clock_digital_number_pane_cp04

0x7825,	// (0x0001d067) clock_digital_separator_pane_ParamLimits

0x7825,	// (0x0001d067) clock_digital_separator_pane

0x7831,	// (0x0001d073) popup_clock_digital_window_t1

0x0f11,	// (0x00016753) clock_digital_number_pane_g1

0x0f11,	// (0x00016753) clock_digital_number_pane_g2

0x0001,

0xf255,	// (0x00024a97) clock_digital_number_pane_g

0x0f11,	// (0x00016753) clock_digital_separator_pane_g1

0x0f11,	// (0x00016753) clock_digital_separator_pane_g2

0x0001,

0xf255,	// (0x00024a97) clock_digital_separator_pane_g

0x0c9e,	// (0x000164e0) bg_popup_window_pane_cp04

0x1a78,	// (0x000172ba) heading_pane_cp03

0x127e,	// (0x00016ac0) listscroll_popup_gms_pane

0x0c9e,	// (0x000164e0) grid_large_graphic_popup_pane

0x1a81,	// (0x000172c3) listscroll_popup_gms_pane_g1

0x1a8a,	// (0x000172cc) listscroll_popup_gms_pane_g2

0x0001,

0xf2f2,	// (0x00024b34) listscroll_popup_gms_pane_g

0x1a93,	// (0x000172d5) scroll_pane_cp014

0x0f8f,	// (0x000167d1) cell_large_graphic_popup_pane_ParamLimits

0x0f8f,	// (0x000167d1) cell_large_graphic_popup_pane

0x0f73,	// (0x000167b5) cell_large_graphic_popup_pane_g1_ParamLimits

0x0f73,	// (0x000167b5) cell_large_graphic_popup_pane_g1

0x1a9b,	// (0x000172dd) cell_large_graphic_popup_pane_g2_ParamLimits

0x1a9b,	// (0x000172dd) cell_large_graphic_popup_pane_g2

0x1aa9,	// (0x000172eb) cell_large_graphic_popup_pane_g3_ParamLimits

0x1aa9,	// (0x000172eb) cell_large_graphic_popup_pane_g3

0x1ab7,	// (0x000172f9) cell_large_graphic_popup_pane_g4_ParamLimits

0x1ab7,	// (0x000172f9) cell_large_graphic_popup_pane_g4

0x0003,

0xf2f7,	// (0x00024b39) cell_large_graphic_popup_pane_g_ParamLimits

0xf2f7,	// (0x00024b39) cell_large_graphic_popup_pane_g

0x0c9e,	// (0x000164e0) grid_highlight_pane_cp010

0x0f11,	// (0x00016753) bg_popup_call_pane_g1

0x1ac8,	// (0x0001730a) list_single_graphic_popup_conf_pane_ParamLimits

0x1ac8,	// (0x0001730a) list_single_graphic_popup_conf_pane

0x1adb,	// (0x0001731d) list_highlight_pane_cp01

0x1ae4,	// (0x00017326) list_single_graphic_popup_conf_pane_g1

0x1aec,	// (0x0001732e) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf300,	// (0x00024b42) list_single_graphic_popup_conf_pane_g

0x1af4,	// (0x00017336) list_single_graphic_popup_conf_pane_t1

0x1b02,	// (0x00017344) linegrid_cams_pane_g1

0xa0bb,	// (0x0001f8fd) linegrid_cams_pane_g2

0x11bd,	// (0x000169ff) linegrid_cams_pane_g3

0x1b0b,	// (0x0001734d) linegrid_cams_pane_g4

0xa0c4,	// (0x0001f906) linegrid_cams_pane_g5

0xa0cd,	// (0x0001f90f) linegrid_cams_pane_g6

0x126d,	// (0x00016aaf) linegrid_cams_pane_g7

0x0006,

0xf305,	// (0x00024b47) linegrid_cams_pane_g

0x1b14,	// (0x00017356) popup_clock_analogue_window

0x1b14,	// (0x00017356) popup_clock_digital_window

0x0c9e,	// (0x000164e0) popup_phob_thumbnail_window

0x0f11,	// (0x00016753) call_video_uplink_pane_g1

0x1b1d,	// (0x0001735f) call_video_uplink_pane_g2

0x0001,

0xf314,	// (0x00024b56) call_video_uplink_pane_g

0x123a,	// (0x00016a7c) video_uplink_pane

0x1b25,	// (0x00017367) mce_image_pane_g1

0xa0d6,	// (0x0001f918) mce_image_pane_g2

0xa0de,	// (0x0001f920) mce_image_pane_g3

0xa0e6,	// (0x0001f928) mce_image_pane_g4

0xa0ee,	// (0x0001f930) mce_image_pane_g5

0x0004,

0xf319,	// (0x00024b5b) mce_image_pane_g

0x1b2f,	// (0x00017371) control_top_pane_stacon_cp01_ParamLimits

0x1b2f,	// (0x00017371) control_top_pane_stacon_cp01

0x1b3f,	// (0x00017381) uni_indicator_pane_stacon_cp01_ParamLimits

0x1b3f,	// (0x00017381) uni_indicator_pane_stacon_cp01

0x1b50,	// (0x00017392) bg_popup_sub_pane_cp03

0x1b5a,	// (0x0001739c) chi_dic_find_pane

0xa0f6,	// (0x0001f938) listscroll_chi_dic_pane

0x1b62,	// (0x000173a4) main_pane_chidic_g1

0x1b6a,	// (0x000173ac) chi_dic_find_pane_t1

0x1b78,	// (0x000173ba) find_chidic_pane

0x1b81,	// (0x000173c3) chi_dic_list_pane_ParamLimits

0x1b81,	// (0x000173c3) chi_dic_list_pane

0x1a93,	// (0x000172d5) scroll_pane_cp020

0x1b92,	// (0x000173d4) find_chidic_pane_t1

0x0c9e,	// (0x000164e0) input_focus_pane_cp06

0xa108,	// (0x0001f94a) list_chi_dic_pane_ParamLimits

0xa108,	// (0x0001f94a) list_chi_dic_pane

0xa11b,	// (0x0001f95d) list_chi_dic_pane_t1_ParamLimits

0xa11b,	// (0x0001f95d) list_chi_dic_pane_t1

0x0c9e,	// (0x000164e0) list_highlight_pane_cp020

0x1ba1,	// (0x000173e3) bg_cale_heading_pane_g1

0xa12e,	// (0x0001f970) bg_cale_heading_pane_g2

0xa136,	// (0x0001f978) bg_cale_heading_pane_g3

0xa13e,	// (0x0001f980) bg_cale_heading_pane_g4

0xa146,	// (0x0001f988) bg_cale_heading_pane_g5

0xa14e,	// (0x0001f990) bg_cale_heading_pane_g6

0xa156,	// (0x0001f998) bg_cale_heading_pane_g7

0xa15e,	// (0x0001f9a0) bg_cale_heading_pane_g8

0xa166,	// (0x0001f9a8) bg_cale_heading_pane_g9

0x0008,

0xf324,	// (0x00024b66) bg_cale_heading_pane_g

0x1ba1,	// (0x000173e3) bg_cale_side_pane_g1

0xa16e,	// (0x0001f9b0) bg_cale_side_pane_g2

0xa176,	// (0x0001f9b8) bg_cale_side_pane_g3

0xa17e,	// (0x0001f9c0) bg_cale_side_pane_g4

0xa186,	// (0x0001f9c8) bg_cale_side_pane_g5

0xa18e,	// (0x0001f9d0) bg_cale_side_pane_g6

0xa196,	// (0x0001f9d8) bg_cale_side_pane_g7

0xa19e,	// (0x0001f9e0) bg_cale_side_pane_g8

0xa1a6,	// (0x0001f9e8) bg_cale_side_pane_g9

0x0008,

0xf337,	// (0x00024b79) bg_cale_side_pane_g

0xa1ae,	// (0x0001f9f0) popup_call_status_window_ParamLimits

0xa1ae,	// (0x0001f9f0) popup_call_status_window

0x1ba9,	// (0x000173eb) stacon_top_pane

0x1bb1,	// (0x000173f3) status_pane_ParamLimits

0x1bb1,	// (0x000173f3) status_pane

0x1bcb,	// (0x0001740d) status_small_pane

0x1bd3,	// (0x00017415) control_pane

0x0c9e,	// (0x000164e0) stacon_bottom_pane

0x1bdb,	// (0x0001741d) list_single_mce_smart_pane_t1_ParamLimits

0x1bdb,	// (0x0001741d) list_single_mce_smart_pane_t1

0x1bee,	// (0x00017430) list_single_mce_smart_pane_t2_ParamLimits

0x1bee,	// (0x00017430) list_single_mce_smart_pane_t2

0x0001,

0xf34a,	// (0x00024b8c) list_single_mce_smart_pane_t_ParamLimits

0xf34a,	// (0x00024b8c) list_single_mce_smart_pane_t

0xa1bd,	// (0x0001f9ff) compass_pane

0xa1c6,	// (0x0001fa08) main_location2_pane_t1

0xa1dc,	// (0x0001fa1e) main_location2_pane_t2

0xa1f2,	// (0x0001fa34) main_location2_pane_t3

0x0003,

0xf34f,	// (0x00024b91) main_location2_pane_t

0x1c16,	// (0x00017458) compass_pane_g1_ParamLimits

0x1c16,	// (0x00017458) compass_pane_g1

0xa23a,	// (0x0001fa7c) compass_pane_t1

0xa249,	// (0x0001fa8b) compass_pane_t2

0x0005,

0xf358,	// (0x00024b9a) compass_pane_t

0xa290,	// (0x0001fad2) text_secondary_cp61

0x1c64,	// (0x000174a6) navi_pane_cams_g5

0x1cb0,	// (0x000174f2) navi_pane_im_t1

0x1cbe,	// (0x00017500) navi_pane_mp_g1_ParamLimits

0x1cbe,	// (0x00017500) navi_pane_mp_g1

0x1cd2,	// (0x00017514) navi_pane_mp_g2_ParamLimits

0x1cd2,	// (0x00017514) navi_pane_mp_g2

0x1cde,	// (0x00017520) navi_pane_mp_g3_ParamLimits

0x1cde,	// (0x00017520) navi_pane_mp_g3

0x0002,

0xf36c,	// (0x00024bae) navi_pane_mp_g_ParamLimits

0xf36c,	// (0x00024bae) navi_pane_mp_g

0x1cea,	// (0x0001752c) navi_pane_mp_t1

0x1cf8,	// (0x0001753a) navi_pane_mp_t2

0x0002,

0xf373,	// (0x00024bb5) navi_pane_mp_t

0x1d63,	// (0x000175a5) navi_pane_vt_g1

0x1cea,	// (0x0001752c) navi_pane_vt_t1

0x1d6b,	// (0x000175ad) navi_slider_pane

0x127e,	// (0x00016ac0) zooming_pane

0x1d73,	// (0x000175b5) navi_slider_pane_g1

0x784e,	// (0x0001d090) navi_slider_pane_g2

0x0006,

0xf37a,	// (0x00024bbc) navi_slider_pane_g

0x1da9,	// (0x000175eb) aid_levels_zoom

0x1db1,	// (0x000175f3) zooming_pane_g1

0x1db9,	// (0x000175fb) zooming_pane_g2

0x1db9,	// (0x000175fb) zooming_pane_g3

0x0002,

0xf389,	// (0x00024bcb) zooming_pane_g

0x1dc1,	// (0x00017603) level_10_zoom

0x1dca,	// (0x0001760c) level_11_zoom

0x1dd3,	// (0x00017615) level_1_zoom

0x1ddc,	// (0x0001761e) level_2_zoom

0x1de5,	// (0x00017627) level_3_zoom

0x1dee,	// (0x00017630) level_4_zoom

0x1df7,	// (0x00017639) level_5_zoom

0x1e00,	// (0x00017642) level_6_zoom

0x1e09,	// (0x0001764b) level_7_zoom

0x1e12,	// (0x00017654) level_8_zoom

0x1e1b,	// (0x0001765d) level_9_zoom

0x1e2c,	// (0x0001766e) popup_phob_thumbnail_window_g1

0x1e34,	// (0x00017676) popup_phob_thumbnail_window_g2

0x0001,

0xf390,	// (0x00024bd2) popup_phob_thumbnail_window_g

0xaac3,	// (0x00020305) level_1_location

0xaacb,	// (0x0002030d) level_2_location

0xaad3,	// (0x00020315) level_3_location

0xaadb,	// (0x0002031d) level_4_location

0x127e,	// (0x00016ac0) level_5_location

0xa312,	// (0x0001fb54) mce_icon_pane_g1

0xa31a,	// (0x0001fb5c) mce_icon_pane_g2

0x0001,

0xf395,	// (0x00024bd7) mce_icon_pane_g

0xa322,	// (0x0001fb64) main_mup_pane_g1_ParamLimits

0xa322,	// (0x0001fb64) main_mup_pane_g1

0x0f9d,	// (0x000167df) main_mup_pane_g2_ParamLimits

0x0f9d,	// (0x000167df) main_mup_pane_g2

0x0f9d,	// (0x000167df) main_mup_pane_g3_ParamLimits

0x0f9d,	// (0x000167df) main_mup_pane_g3

0x0f9d,	// (0x000167df) main_mup_pane_g4_ParamLimits

0x0f9d,	// (0x000167df) main_mup_pane_g4

0x0f9d,	// (0x000167df) main_mup_pane_g5_ParamLimits

0x0f9d,	// (0x000167df) main_mup_pane_g5

0x0f9d,	// (0x000167df) main_mup_pane_g6_ParamLimits

0x0f9d,	// (0x000167df) main_mup_pane_g6

0x0f9d,	// (0x000167df) main_mup_pane_g7_ParamLimits

0x0f9d,	// (0x000167df) main_mup_pane_g7

0x0f9d,	// (0x000167df) main_mup_pane_g8_ParamLimits

0x0f9d,	// (0x000167df) main_mup_pane_g8

0x0f9d,	// (0x000167df) main_mup_pane_g9_ParamLimits

0x0f9d,	// (0x000167df) main_mup_pane_g9

0x0f9d,	// (0x000167df) main_mup_pane_g10_ParamLimits

0x0f9d,	// (0x000167df) main_mup_pane_g10

0x0f9d,	// (0x000167df) main_mup_pane_g11_ParamLimits

0x0f9d,	// (0x000167df) main_mup_pane_g11

0x0f81,	// (0x000167c3) main_mup_pane_g12_ParamLimits

0x0f81,	// (0x000167c3) main_mup_pane_g12

0x0f9d,	// (0x000167df) main_mup_pane_g13_ParamLimits

0x0f9d,	// (0x000167df) main_mup_pane_g13

0x000c,

0xf39a,	// (0x00024bdc) main_mup_pane_g_ParamLimits

0xf39a,	// (0x00024bdc) main_mup_pane_g

0x0fab,	// (0x000167ed) main_mup_pane_t1_ParamLimits

0x0fab,	// (0x000167ed) main_mup_pane_t1

0x0fab,	// (0x000167ed) main_mup_pane_t2_ParamLimits

0x0fab,	// (0x000167ed) main_mup_pane_t2

0x0fab,	// (0x000167ed) main_mup_pane_t3_ParamLimits

0x0fab,	// (0x000167ed) main_mup_pane_t3

0x1e5e,	// (0x000176a0) main_mup_pane_t4_ParamLimits

0x1e5e,	// (0x000176a0) main_mup_pane_t4

0x1e5e,	// (0x000176a0) main_mup_pane_t5_ParamLimits

0x1e5e,	// (0x000176a0) main_mup_pane_t5

0x12c8,	// (0x00016b0a) main_mup_pane_t6_ParamLimits

0x12c8,	// (0x00016b0a) main_mup_pane_t6

0x0005,

0xf3b5,	// (0x00024bf7) main_mup_pane_t_ParamLimits

0xf3b5,	// (0x00024bf7) main_mup_pane_t

0x087f,	// (0x000160c1) mup_progress_pane_ParamLimits

0x087f,	// (0x000160c1) mup_progress_pane

0x3343,	// (0x00018b85) mup_visualizer_pane_ParamLimits

0x3343,	// (0x00018b85) mup_visualizer_pane

0x3343,	// (0x00018b85) mup_volume_pane_ParamLimits

0x3343,	// (0x00018b85) mup_volume_pane

0x0f81,	// (0x000167c3) mup_visualizer_pane_g1_ParamLimits

0x0f81,	// (0x000167c3) mup_visualizer_pane_g1

0x1e80,	// (0x000176c2) mup_visualizer_pane_g2_ParamLimits

0x1e80,	// (0x000176c2) mup_visualizer_pane_g2

0x0f73,	// (0x000167b5) mup_visualizer_pane_g3_ParamLimits

0x0f73,	// (0x000167b5) mup_visualizer_pane_g3

0x0002,

0xf3c2,	// (0x00024c04) mup_visualizer_pane_g_ParamLimits

0xf3c2,	// (0x00024c04) mup_visualizer_pane_g

0x12f6,	// (0x00016b38) mup_volume_pane_g1

0x12f6,	// (0x00016b38) mup_volume_pane_g2

0x0001,

0xf3c9,	// (0x00024c0b) mup_volume_pane_g

0x12f6,	// (0x00016b38) mup_progress_pane_g1

0x12f6,	// (0x00016b38) mup_progress_pane_g2

0x12f6,	// (0x00016b38) mup_progress_pane_g3

0x0002,

0xf3ce,	// (0x00024c10) mup_progress_pane_g

0x0c9e,	// (0x000164e0) bg_popup_window_pane_cp05

0x1e8e,	// (0x000176d0) heading_pane_cp02_ParamLimits

0x1e8e,	// (0x000176d0) heading_pane_cp02

0x1ea8,	// (0x000176ea) list_popup_blid_pane

0x1eb0,	// (0x000176f2) list_blid_sat_info_pane_ParamLimits

0x1eb0,	// (0x000176f2) list_blid_sat_info_pane

0x1ec3,	// (0x00017705) list_blid_sat_info_pane_g1

0x1ecb,	// (0x0001770d) list_blid_sat_info_pane_t1

0xa405,	// (0x0001fc47) mup_equalizer_pane_ParamLimits

0xa405,	// (0x0001fc47) mup_equalizer_pane

0xa41e,	// (0x0001fc60) mup_equalizer_pane_cp1_ParamLimits

0xa41e,	// (0x0001fc60) mup_equalizer_pane_cp1

0xa437,	// (0x0001fc79) mup_equalizer_pane_cp2_ParamLimits

0xa437,	// (0x0001fc79) mup_equalizer_pane_cp2

0xa450,	// (0x0001fc92) mup_equalizer_pane_cp3_ParamLimits

0xa450,	// (0x0001fc92) mup_equalizer_pane_cp3

0xa469,	// (0x0001fcab) mup_equalizer_pane_cp4_ParamLimits

0xa469,	// (0x0001fcab) mup_equalizer_pane_cp4

0xa482,	// (0x0001fcc4) mup_equalizer_pane_cp5

0xa494,	// (0x0001fcd6) mup_equalizer_pane_cp6

0xa4a6,	// (0x0001fce8) mup_equalizer_pane_cp7

0x30d8,	// (0x0001891a) bg_popup_call_poc_act_pane_g9

0x30e0,	// (0x00018922) bg_popup_call_poc_act_pane_g10

0x30e8,	// (0x0001892a) bg_popup_call_poc_act_pane_g11

0x000a,

0x0ef9,	// (0x0001673b) mup_scale_pane

0x0f11,	// (0x00016753) mup_scale_pane_g1

0x1ed9,	// (0x0001771b) mup_scale_pane_g2

0x0006,

0xf3ea,	// (0x00024c2c) mup_scale_pane_g

0x1efd,	// (0x0001773f) msg_data_pane

0x1f05,	// (0x00017747) scroll_pane_cp017

0xa4ca,	// (0x0001fd0c) bg_list_pane_cp04_ParamLimits

0xa4ca,	// (0x0001fd0c) bg_list_pane_cp04

0x1f15,	// (0x00017757) msg_data_pane_g1

0xa0d6,	// (0x0001f918) msg_data_pane_g2

0xa0de,	// (0x0001f920) msg_data_pane_g3

0xa4e2,	// (0x0001fd24) msg_data_pane_g4

0xa0ee,	// (0x0001f930) msg_data_pane_g5

0xa312,	// (0x0001fb54) msg_data_pane_g6

0xa4ea,	// (0x0001fd2c) msg_data_pane_g7

0x0006,

0xf3f9,	// (0x00024c3b) msg_data_pane_g

0xa4f2,	// (0x0001fd34) msg_text_pane_ParamLimits

0xa4f2,	// (0x0001fd34) msg_text_pane

0xa51c,	// (0x0001fd5e) qrid_highlight_pane_cp011_ParamLimits

0xa51c,	// (0x0001fd5e) qrid_highlight_pane_cp011

0x0c9e,	// (0x000164e0) msg_body_pane

0x0c9e,	// (0x000164e0) msg_header_pane

0x1f26,	// (0x00017768) input_focus_pane_cp07

0x1f3b,	// (0x0001777d) msg_header_pane_t1_ParamLimits

0x1f3b,	// (0x0001777d) msg_header_pane_t1

0x1f51,	// (0x00017793) msg_header_pane_t2_ParamLimits

0x1f51,	// (0x00017793) msg_header_pane_t2

0x0001,

0xf40d,	// (0x00024c4f) msg_header_pane_t_ParamLimits

0xf40d,	// (0x00024c4f) msg_header_pane_t

0x1f68,	// (0x000177aa) msg_body_pane_g1

0x1f70,	// (0x000177b2) msg_body_pane_t1_ParamLimits

0x1f70,	// (0x000177b2) msg_body_pane_t1

0x1f9b,	// (0x000177dd) msg_body_pane_t2_ParamLimits

0x1f9b,	// (0x000177dd) msg_body_pane_t2

0x1fad,	// (0x000177ef) msg_body_pane_t3_ParamLimits

0x1fad,	// (0x000177ef) msg_body_pane_t3

0x0002,

0xf412,	// (0x00024c54) msg_body_pane_t_ParamLimits

0xf412,	// (0x00024c54) msg_body_pane_t

0x7890,	// (0x0001d0d2) main_viewer_pane_g1_ParamLimits

0x7890,	// (0x0001d0d2) main_viewer_pane_g1

0x789c,	// (0x0001d0de) main_viewer_pane_g2_ParamLimits

0x789c,	// (0x0001d0de) main_viewer_pane_g2

0xa55c,	// (0x0001fd9e) main_viewer_pane_g3_ParamLimits

0xa55c,	// (0x0001fd9e) main_viewer_pane_g3

0xa56b,	// (0x0001fdad) main_viewer_pane_g4_ParamLimits

0xa56b,	// (0x0001fdad) main_viewer_pane_g4

0x78a8,	// (0x0001d0ea) main_viewer_pane_g5_ParamLimits

0x78a8,	// (0x0001d0ea) main_viewer_pane_g5

0x78a8,	// (0x0001d0ea) main_viewer_pane_g7_ParamLimits

0x78a8,	// (0x0001d0ea) main_viewer_pane_g7

0x78ba,	// (0x0001d0fc) main_viewer_pane_g8_ParamLimits

0x78ba,	// (0x0001d0fc) main_viewer_pane_g8

0x0007,

0xf422,	// (0x00024c64) main_viewer_pane_g_ParamLimits

0xf422,	// (0x00024c64) main_viewer_pane_g

0x2001,	// (0x00017843) viewer_content_pane_ParamLimits

0x2001,	// (0x00017843) viewer_content_pane

0xa592,	// (0x0001fdd4) main_postcard_pane_g1_ParamLimits

0xa592,	// (0x0001fdd4) main_postcard_pane_g1

0xa59e,	// (0x0001fde0) main_postcard_pane_g2_ParamLimits

0xa59e,	// (0x0001fde0) main_postcard_pane_g2

0xa5aa,	// (0x0001fdec) main_postcard_pane_g3_ParamLimits

0xa5aa,	// (0x0001fdec) main_postcard_pane_g3

0x0005,

0xf433,	// (0x00024c75) main_postcard_pane_g_ParamLimits

0xf433,	// (0x00024c75) main_postcard_pane_g

0xa5b6,	// (0x0001fdf8) main_postcard_pane_g4

0x32b3,	// (0x00018af5) smil_status_volume_pane_g2

0xa5da,	// (0x0001fe1c) postcard_pane_ParamLimits

0xa5da,	// (0x0001fe1c) postcard_pane

0x287d,	// (0x000180bf) postcard_pane_g1_ParamLimits

0x287d,	// (0x000180bf) postcard_pane_g1

0xa60a,	// (0x0001fe4c) postcard_pane_g2_ParamLimits

0xa60a,	// (0x0001fe4c) postcard_pane_g2

0xa616,	// (0x0001fe58) postcard_pane_g3_ParamLimits

0xa616,	// (0x0001fe58) postcard_pane_g3

0x201d,	// (0x0001785f) postcard_pane_g4_ParamLimits

0x201d,	// (0x0001785f) postcard_pane_g4

0xa622,	// (0x0001fe64) postcard_pane_g5_ParamLimits

0xa622,	// (0x0001fe64) postcard_pane_g5

0xa62e,	// (0x0001fe70) postcard_pane_g6_ParamLimits

0xa62e,	// (0x0001fe70) postcard_pane_g6

0x200f,	// (0x00017851) postcard_pane_g7_ParamLimits

0x200f,	// (0x00017851) postcard_pane_g7

0x0006,

0xf440,	// (0x00024c82) postcard_pane_g_ParamLimits

0xf440,	// (0x00024c82) postcard_pane_g

0xa63a,	// (0x0001fe7c) main_mp2_pane_g1_ParamLimits

0xa63a,	// (0x0001fe7c) main_mp2_pane_g1

0xa646,	// (0x0001fe88) main_mp2_pane_g2_ParamLimits

0xa646,	// (0x0001fe88) main_mp2_pane_g2

0xa652,	// (0x0001fe94) main_mp2_pane_g3_ParamLimits

0xa652,	// (0x0001fe94) main_mp2_pane_g3

0x0002,

0xf44f,	// (0x00024c91) main_mp2_pane_g_ParamLimits

0xf44f,	// (0x00024c91) main_mp2_pane_g

0xa65e,	// (0x0001fea0) main_mp2_pane_t1_ParamLimits

0xa65e,	// (0x0001fea0) main_mp2_pane_t1

0xa673,	// (0x0001feb5) main_mp2_pane_t2_ParamLimits

0xa673,	// (0x0001feb5) main_mp2_pane_t2

0xa685,	// (0x0001fec7) main_mp2_pane_t3_ParamLimits

0xa685,	// (0x0001fec7) main_mp2_pane_t3

0x0002,

0xf456,	// (0x00024c98) main_mp2_pane_t_ParamLimits

0xf456,	// (0x00024c98) main_mp2_pane_t

0x202b,	// (0x0001786d) pec_content_pane_ParamLimits

0x202b,	// (0x0001786d) pec_content_pane

0x14a2,	// (0x00016ce4) scroll_pane_cp015

0x203d,	// (0x0001787f) pec_attribute_pane_ParamLimits

0x203d,	// (0x0001787f) pec_attribute_pane

0xa697,	// (0x0001fed9) pec_content_pane_g1_ParamLimits

0xa697,	// (0x0001fed9) pec_content_pane_g1

0x204d,	// (0x0001788f) pec_content_pane_t1_ParamLimits

0x204d,	// (0x0001788f) pec_content_pane_t1

0x205f,	// (0x000178a1) pec_content_pane_t2_ParamLimits

0x205f,	// (0x000178a1) pec_content_pane_t2

0x0001,

0xf45d,	// (0x00024c9f) pec_content_pane_t_ParamLimits

0xf45d,	// (0x00024c9f) pec_content_pane_t

0xa6a3,	// (0x0001fee5) list_single_graphic_pane_cp01_ParamLimits

0xa6a3,	// (0x0001fee5) list_single_graphic_pane_cp01

0x0ef9,	// (0x0001673b) bg_popup_sub_pane_cp04

0x2071,	// (0x000178b3) popup_mup_playback_window_g1

0x207d,	// (0x000178bf) popup_mup_playback_window_t1

0x2092,	// (0x000178d4) popup_mup_playback_window_t2

0x0001,

0xf462,	// (0x00024ca4) popup_mup_playback_window_t

0x20c9,	// (0x0001790b) main_image_pane_g1_ParamLimits

0x20c9,	// (0x0001790b) main_image_pane_g1

0x210c,	// (0x0001794e) scroll_pane_cp018_ParamLimits

0x210c,	// (0x0001794e) scroll_pane_cp018

0x2124,	// (0x00017966) scroll_pane_cp016_ParamLimits

0x2124,	// (0x00017966) scroll_pane_cp016

0xa728,	// (0x0001ff6a) smil2_image_pane_ParamLimits

0xa728,	// (0x0001ff6a) smil2_image_pane

0xa750,	// (0x0001ff92) smil2_root_pane_ParamLimits

0xa750,	// (0x0001ff92) smil2_root_pane

0xa77c,	// (0x0001ffbe) smil2_text_pane_ParamLimits

0xa77c,	// (0x0001ffbe) smil2_text_pane

0x0c9e,	// (0x000164e0) bg_list_pane_cp06

0x2160,	// (0x000179a2) grid_radio_pane

0x0c9e,	// (0x000164e0) bg_popup_window_pane_cp06

0x2168,	// (0x000179aa) main_fmradio_pane_t1

0x3130,	// (0x00018972) heading_pane_cp04

0x2176,	// (0x000179b8) main_fmradio_pane_t2

0x3138,	// (0x0001897a) popup_cale_lunar_info_window_g1

0x2184,	// (0x000179c6) main_fmradio_pane_t3

0x3140,	// (0x00018982) popup_cale_lunar_info_window_g2

0x2192,	// (0x000179d4) main_fmradio_pane_t4

0x0001,

0x21a0,	// (0x000179e2) main_fmradio_pane_t5

0x0004,

0xf555,	// (0x00024d97) popup_cale_lunar_info_window_g

0xf477,	// (0x00024cb9) main_fmradio_pane_t

0x21ae,	// (0x000179f0) wait_bar_pane_cp03

0x21b6,	// (0x000179f8) cell_fmradio_pane_ParamLimits

0x21b6,	// (0x000179f8) cell_fmradio_pane

0x200f,	// (0x00017851) cell_fmradio_pane_g1_ParamLimits

0x200f,	// (0x00017851) cell_fmradio_pane_g1

0x0c9e,	// (0x000164e0) grid_highlight_pane_cp011

0x21c9,	// (0x00017a0b) poc_content_pane_ParamLimits

0x21c9,	// (0x00017a0b) poc_content_pane

0x21dc,	// (0x00017a1e) scroll_pane_cp019

0xa7b0,	// (0x0001fff2) popup_call_poc_act_window_ParamLimits

0xa7b0,	// (0x0001fff2) popup_call_poc_act_window

0xa7bd,	// (0x0001ffff) popup_call_poc_inact_window_ParamLimits

0xa7bd,	// (0x0001ffff) popup_call_poc_inact_window

0xf519,	// (0x00024d5b) bg_popup_call_poc_act_pane_g

0x30f0,	// (0x00018932) bg_popup_call_poc_inact_pane_g1

0x30f8,	// (0x0001893a) bg_popup_call_poc_inact_pane_g2

0x21e4,	// (0x00017a26) popup_call_poc_act_window_g2

0x3100,	// (0x00018942) bg_popup_call_poc_inact_pane_g3

0x3080,	// (0x000188c2) bg_popup_call_poc_inact_pane_g4

0x3108,	// (0x0001894a) bg_popup_call_poc_inact_pane_g5

0x21ec,	// (0x00017a2e) popup_call_poc_act_window_t1_ParamLimits

0x21ec,	// (0x00017a2e) popup_call_poc_act_window_t1

0x2214,	// (0x00017a56) popup_call_poc_act_window_t2_ParamLimits

0x2214,	// (0x00017a56) popup_call_poc_act_window_t2

0x223c,	// (0x00017a7e) popup_call_poc_act_window_t3_ParamLimits

0x223c,	// (0x00017a7e) popup_call_poc_act_window_t3

0x2264,	// (0x00017aa6) popup_call_poc_act_window_t4_ParamLimits

0x2264,	// (0x00017aa6) popup_call_poc_act_window_t4

0x0003,

0xf482,	// (0x00024cc4) popup_call_poc_act_window_t_ParamLimits

0xf482,	// (0x00024cc4) popup_call_poc_act_window_t

0x3110,	// (0x00018952) bg_popup_call_poc_inact_pane_g6

0x3118,	// (0x0001895a) bg_popup_call_poc_inact_pane_g7

0x3120,	// (0x00018962) bg_popup_call_poc_inact_pane_g8

0x2276,	// (0x00017ab8) popup_call_poc_inact_window_g2

0x3128,	// (0x0001896a) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf530,	// (0x00024d72) bg_popup_call_poc_inact_pane_g

0x227e,	// (0x00017ac0) popup_call_poc_inact_window_t1_ParamLimits

0x227e,	// (0x00017ac0) popup_call_poc_inact_window_t1

0x2293,	// (0x00017ad5) popup_call_poc_inact_window_t2_ParamLimits

0x2293,	// (0x00017ad5) popup_call_poc_inact_window_t2

0x22a8,	// (0x00017aea) popup_call_poc_inact_window_t3_ParamLimits

0x22a8,	// (0x00017aea) popup_call_poc_inact_window_t3

0x0002,

0xf48b,	// (0x00024ccd) popup_call_poc_inact_window_t_ParamLimits

0xf48b,	// (0x00024ccd) popup_call_poc_inact_window_t

0x323e,	// (0x00018a80) context_pane_ParamLimits

0xabfe,	// (0x00020440) signal_pane_ParamLimits

0x127e,	// (0x00016ac0) main_call2_pane

0x79ce,	// (0x0001d210) popup_phob_thumbnail2_window_ParamLimits

0x79ce,	// (0x0001d210) popup_phob_thumbnail2_window

0x7860,	// (0x0001d0a2) aid_hotspot_pointer_arrow_pane

0x7868,	// (0x0001d0aa) aid_hotspot_pointer_hand_pane

0xaa91,	// (0x000202d3) phob_pre_status_pane_g5

0x0f8f,	// (0x000167d1) cams_zoom_pane_ParamLimits

0x0f8f,	// (0x000167d1) image_vga_pane_ParamLimits

0x0f81,	// (0x000167c3) main_camera_pane_g1_ParamLimits

0x0f81,	// (0x000167c3) main_camera_pane_g2_ParamLimits

0x0f81,	// (0x000167c3) main_camera_pane_g3_ParamLimits

0x0f81,	// (0x000167c3) main_camera_pane_g4_ParamLimits

0x0f81,	// (0x000167c3) main_camera_pane_g5_ParamLimits

0x0f81,	// (0x000167c3) main_camera_pane_g6_ParamLimits

0x0f81,	// (0x000167c3) main_camera_pane_g7_ParamLimits

0xf19f,	// (0x000249e1) main_camera_pane_g_ParamLimits

0x1e5e,	// (0x000176a0) main_camera_pane_t1_ParamLimits

0x1e5e,	// (0x000176a0) main_camera_pane_t2_ParamLimits

0xf1b0,	// (0x000249f2) main_camera_pane_t_ParamLimits

0x0ef9,	// (0x0001673b) bg_popup_preview_window_pane_cp01_ParamLimits

0x0ef9,	// (0x0001673b) bg_popup_preview_window_pane_cp01

0x22bd,	// (0x00017aff) popup_phob_thumbnail2_window_g1_ParamLimits

0x22bd,	// (0x00017aff) popup_phob_thumbnail2_window_g1

0x0c9e,	// (0x000164e0) call2_cli_visual_pane

0xa7d9,	// (0x0002001b) popup_call2_audio_conf_window_ParamLimits

0xa7d9,	// (0x0002001b) popup_call2_audio_conf_window

0xa7ec,	// (0x0002002e) popup_call2_audio_first_window_ParamLimits

0xa7ec,	// (0x0002002e) popup_call2_audio_first_window

0xa868,	// (0x000200aa) popup_call2_audio_in_window_ParamLimits

0xa868,	// (0x000200aa) popup_call2_audio_in_window

0xa898,	// (0x000200da) popup_call2_audio_out_window_ParamLimits

0xa898,	// (0x000200da) popup_call2_audio_out_window

0xa8e4,	// (0x00020126) popup_call2_audio_second_window_ParamLimits

0xa8e4,	// (0x00020126) popup_call2_audio_second_window

0xa930,	// (0x00020172) popup_call2_audio_wait_window_ParamLimits

0xa930,	// (0x00020172) popup_call2_audio_wait_window

0x0c9e,	// (0x000164e0) bg_popup_call2_act_pane_cp03

0x0edb,	// (0x0001671d) list_conf_pane_cp

0x22c9,	// (0x00017b0b) popup_call2_audio_conf_window_t1

0x1ac8,	// (0x0001730a) list_single_graphic_popup_conf2_pane_ParamLimits

0x1ac8,	// (0x0001730a) list_single_graphic_popup_conf2_pane

0x1adb,	// (0x0001731d) list_highlight_pane_cp04

0x22d7,	// (0x00017b19) list_single_graphic_popup_conf2_pane_g1

0x1aec,	// (0x0001732e) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf492,	// (0x00024cd4) list_single_graphic_popup_conf2_pane_g

0x22df,	// (0x00017b21) list_single_graphic_popup_conf2_pane_t1

0x22ed,	// (0x00017b2f) bg_popup_call2_act_pane_cp01_ParamLimits

0x22ed,	// (0x00017b2f) bg_popup_call2_act_pane_cp01

0x2377,	// (0x00017bb9) call_type_pane_cp05_ParamLimits

0x2377,	// (0x00017bb9) call_type_pane_cp05

0x23cb,	// (0x00017c0d) popup_call2_audio_second_window_g1_ParamLimits

0x23cb,	// (0x00017c0d) popup_call2_audio_second_window_g1

0x241f,	// (0x00017c61) popup_call2_audio_second_window_g2_ParamLimits

0x241f,	// (0x00017c61) popup_call2_audio_second_window_g2

0x0002,

0xf497,	// (0x00024cd9) popup_call2_audio_second_window_g_ParamLimits

0xf497,	// (0x00024cd9) popup_call2_audio_second_window_g

0x2484,	// (0x00017cc6) popup_call2_audio_second_window_t1_ParamLimits

0x2484,	// (0x00017cc6) popup_call2_audio_second_window_t1

0x253f,	// (0x00017d81) popup_call2_audio_second_window_t2_ParamLimits

0x253f,	// (0x00017d81) popup_call2_audio_second_window_t2

0x2592,	// (0x00017dd4) popup_call2_audio_second_window_t3_ParamLimits

0x2592,	// (0x00017dd4) popup_call2_audio_second_window_t3

0x0003,

0xf49e,	// (0x00024ce0) popup_call2_audio_second_window_t_ParamLimits

0xf49e,	// (0x00024ce0) popup_call2_audio_second_window_t

0x0c9e,	// (0x000164e0) bg_popup_call2_in_pane_cp02

0x0ca8,	// (0x000164ea) call_type_pane_cp04

0xa96d,	// (0x000201af) popup_call2_audio_wait_window_g1

0xa975,	// (0x000201b7) popup_call2_audio_wait_window_g2

0x0001,

0xf4a7,	// (0x00024ce9) popup_call2_audio_wait_window_g

0x0cc0,	// (0x00016502) popup_call2_audio_wait_window_t3

0x2685,	// (0x00017ec7) bg_popup_call2_act_pane_ParamLimits

0x2685,	// (0x00017ec7) bg_popup_call2_act_pane

0x2745,	// (0x00017f87) call_type_pane_cp03_ParamLimits

0x2745,	// (0x00017f87) call_type_pane_cp03

0x27a9,	// (0x00017feb) popup_call2_audio_first_window_g1_ParamLimits

0x27a9,	// (0x00017feb) popup_call2_audio_first_window_g1

0x2819,	// (0x0001805b) popup_call2_audio_first_window_g2_ParamLimits

0x2819,	// (0x0001805b) popup_call2_audio_first_window_g2

0x287d,	// (0x000180bf) popup_call2_audio_first_window_g3_ParamLimits

0x287d,	// (0x000180bf) popup_call2_audio_first_window_g3

0x0004,

0xf4ac,	// (0x00024cee) popup_call2_audio_first_window_g_ParamLimits

0xf4ac,	// (0x00024cee) popup_call2_audio_first_window_g

0x2905,	// (0x00018147) popup_call2_audio_first_window_t1_ParamLimits

0x2905,	// (0x00018147) popup_call2_audio_first_window_t1

0x2a08,	// (0x0001824a) popup_call2_audio_first_window_t4_ParamLimits

0x2a08,	// (0x0001824a) popup_call2_audio_first_window_t4

0x2aeb,	// (0x0001832d) popup_call2_audio_first_window_t5_ParamLimits

0x2aeb,	// (0x0001832d) popup_call2_audio_first_window_t5

0x0003,

0xf4b7,	// (0x00024cf9) popup_call2_audio_first_window_t_ParamLimits

0xf4b7,	// (0x00024cf9) popup_call2_audio_first_window_t

0x0ef1,	// (0x00016733) bg_popup_call2_act_pane_g1

0x3148,	// (0x0001898a) popup_cale_lunar_info_window_t1

0x3156,	// (0x00018998) popup_cale_lunar_info_window_t2

0x3164,	// (0x000189a6) popup_cale_lunar_info_window_t3

0x0c9e,	// (0x000164e0) bg_popup_call2_bubble_pane

0x2bec,	// (0x0001842e) bg_popup_call2_in_pane_cp01_ParamLimits

0x2bec,	// (0x0001842e) bg_popup_call2_in_pane_cp01

0x097a,	// (0x000161bc) call_type_pane_cp02

0xa97d,	// (0x000201bf) popup_call2_audio_out_window_g1_ParamLimits

0xa97d,	// (0x000201bf) popup_call2_audio_out_window_g1

0x2c34,	// (0x00018476) popup_call2_audio_out_window_g2_ParamLimits

0x2c34,	// (0x00018476) popup_call2_audio_out_window_g2

0xa9a9,	// (0x000201eb) popup_call2_audio_out_window_g3_ParamLimits

0xa9a9,	// (0x000201eb) popup_call2_audio_out_window_g3

0x0003,

0xf4c0,	// (0x00024d02) popup_call2_audio_out_window_g_ParamLimits

0xf4c0,	// (0x00024d02) popup_call2_audio_out_window_g

0x2c6b,	// (0x000184ad) popup_call2_audio_out_window_t1_ParamLimits

0x2c6b,	// (0x000184ad) popup_call2_audio_out_window_t1

0x2cca,	// (0x0001850c) popup_call2_audio_out_window_t2_ParamLimits

0x2cca,	// (0x0001850c) popup_call2_audio_out_window_t2

0x2d1e,	// (0x00018560) popup_call2_audio_out_window_t3_ParamLimits

0x2d1e,	// (0x00018560) popup_call2_audio_out_window_t3

0x2d34,	// (0x00018576) popup_call2_audio_out_window_t4_ParamLimits

0x2d34,	// (0x00018576) popup_call2_audio_out_window_t4

0x2d4a,	// (0x0001858c) popup_call2_audio_out_window_t5_ParamLimits

0x2d4a,	// (0x0001858c) popup_call2_audio_out_window_t5

0x0005,

0xf4c9,	// (0x00024d0b) popup_call2_audio_out_window_t_ParamLimits

0xf4c9,	// (0x00024d0b) popup_call2_audio_out_window_t

0x2dae,	// (0x000185f0) bg_popup_call2_in_pane_ParamLimits

0x2dae,	// (0x000185f0) bg_popup_call2_in_pane

0x2e0a,	// (0x0001864c) popup_call2_audio_in_window_g1_ParamLimits

0x2e0a,	// (0x0001864c) popup_call2_audio_in_window_g1

0x2e42,	// (0x00018684) popup_call2_audio_in_window_g2_ParamLimits

0x2e42,	// (0x00018684) popup_call2_audio_in_window_g2

0x2e7a,	// (0x000186bc) popup_call2_audio_in_window_g3_ParamLimits

0x2e7a,	// (0x000186bc) popup_call2_audio_in_window_g3

0x0003,

0xf4d6,	// (0x00024d18) popup_call2_audio_in_window_g_ParamLimits

0xf4d6,	// (0x00024d18) popup_call2_audio_in_window_g

0x2ed2,	// (0x00018714) popup_call2_audio_in_window_t1_ParamLimits

0x2ed2,	// (0x00018714) popup_call2_audio_in_window_t1

0x2f52,	// (0x00018794) popup_call2_audio_in_window_t2_ParamLimits

0x2f52,	// (0x00018794) popup_call2_audio_in_window_t2

0x2fd2,	// (0x00018814) popup_call2_audio_in_window_t3_ParamLimits

0x2fd2,	// (0x00018814) popup_call2_audio_in_window_t3

0x2fec,	// (0x0001882e) popup_call2_audio_in_window_t4_ParamLimits

0x2fec,	// (0x0001882e) popup_call2_audio_in_window_t4

0x2ffe,	// (0x00018840) popup_call2_audio_in_window_t5_ParamLimits

0x2ffe,	// (0x00018840) popup_call2_audio_in_window_t5

0x3013,	// (0x00018855) popup_call2_audio_in_window_t6_ParamLimits

0x3013,	// (0x00018855) popup_call2_audio_in_window_t6

0x0005,

0xf4df,	// (0x00024d21) popup_call2_audio_in_window_t_ParamLimits

0xf4df,	// (0x00024d21) popup_call2_audio_in_window_t

0x0ef1,	// (0x00016733) bg_popup_call2_in_pane_g1

0x3172,	// (0x000189b4) popup_cale_lunar_info_window_t4

0x0003,

0xf55a,	// (0x00024d9c) popup_cale_lunar_info_window_t

0x0ef9,	// (0x0001673b) bg_popup_call2_rect_pane_ParamLimits

0x0ef9,	// (0x0001673b) bg_popup_call2_rect_pane

0x0c9e,	// (0x000164e0) call2_cli_visual_graphic_pane

0x0c9e,	// (0x000164e0) call2_cli_visual_text_pane

0x7a1b,	// (0x0001d25d) smil_status_volume_pane_g3

0x0002,

0x0f11,	// (0x00016753) call2_cli_visual_graphic_pane_g1

0x0f11,	// (0x00016753) call2_cli_visual_graphic_pane_g2

0x0f11,	// (0x00016753) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4ec,	// (0x00024d2e) call2_cli_visual_graphic_pane_g

0x3028,	// (0x0001886a) bg_popup_call2_rect_pane_g1

0x115a,	// (0x0001699c) bg_popup_call2_rect_pane_g2

0x3030,	// (0x00018872) bg_popup_call2_rect_pane_g3

0x3038,	// (0x0001887a) bg_popup_call2_rect_pane_g4

0x3040,	// (0x00018882) bg_popup_call2_rect_pane_g5

0x3048,	// (0x0001888a) bg_popup_call2_rect_pane_g6

0x3050,	// (0x00018892) bg_popup_call2_rect_pane_g7

0x3058,	// (0x0001889a) bg_popup_call2_rect_pane_g8

0x3060,	// (0x000188a2) bg_popup_call2_rect_pane_g9

0x0008,

0xf4f3,	// (0x00024d35) bg_popup_call2_rect_pane_g

0x3068,	// (0x000188aa) bg_popup_call2_bubble_pane_g1

0x3070,	// (0x000188b2) bg_popup_call2_bubble_pane_g2

0x3078,	// (0x000188ba) bg_popup_call2_bubble_pane_g3

0x3080,	// (0x000188c2) bg_popup_call2_bubble_pane_g4

0x3088,	// (0x000188ca) bg_popup_call2_bubble_pane_g5

0x3090,	// (0x000188d2) bg_popup_call2_bubble_pane_g6

0x3098,	// (0x000188da) bg_popup_call2_bubble_pane_g7

0x30a0,	// (0x000188e2) bg_popup_call2_bubble_pane_g8

0x30a8,	// (0x000188ea) bg_popup_call2_bubble_pane_g9

0x0008,

0xf506,	// (0x00024d48) bg_popup_call2_bubble_pane_g

0x8b70,	// (0x0001e3b2) aid_cale_week_size_cell_pane

0x0ef9,	// (0x0001673b) aid_cams_cif_uncrop_pane_ParamLimits

0x0ef9,	// (0x0001673b) aid_cams_cif_uncrop_pane

0x90a1,	// (0x0001e8e3) aid_cams_size_cell_ParamLimits

0x90a1,	// (0x0001e8e3) aid_cams_size_cell

0x90ad,	// (0x0001e8ef) grid_cams_pane_ParamLimits

0x90b9,	// (0x0001e8fb) linegrid_cams_pane_ParamLimits

0x9178,	// (0x0001e9ba) call_video_pane_t1

0x9195,	// (0x0001e9d7) call_video_pane_t2

0x0001,

0xf1fc,	// (0x00024a3e) call_video_pane_t

0x9577,	// (0x0001edb9) aid_cale_month_size_cell_pane_ParamLimits

0x9577,	// (0x0001edb9) aid_cale_month_size_cell_pane

0xf59e,	// (0x00024de0) smil_status_volume_pane_g

0x7a28,	// (0x0001d26a) volume_smil_pane_ParamLimits

0x71b0,	// (0x0001c9f2) aid_popup2_width_pane

0x8ac4,	// (0x0001e306) cell_qdial_pane_g4_ParamLimits

0x8ac4,	// (0x0001e306) cell_qdial_pane_g4

0xa21a,	// (0x0001fa5c) aid_blid_cardinal_pane_ParamLimits

0xa226,	// (0x0001fa68) aid_blid_destination_pane_ParamLimits

0xa226,	// (0x0001fa68) aid_blid_destination_pane

0x0ef9,	// (0x0001673b) bg_popup_call_poc_act_pane_ParamLimits

0x0ef9,	// (0x0001673b) bg_popup_call_poc_act_pane

0x0ef9,	// (0x0001673b) bg_popup_call_poc_inact_pane_ParamLimits

0x0ef9,	// (0x0001673b) bg_popup_call_poc_inact_pane

0x30b0,	// (0x000188f2) bg_popup_call_poc_act_pane_g1

0x30b8,	// (0x000188fa) bg_popup_call_poc_act_pane_g2

0x30c0,	// (0x00018902) bg_popup_call_poc_act_pane_g3

0x3080,	// (0x000188c2) bg_popup_call_poc_act_pane_g4

0x3088,	// (0x000188ca) bg_popup_call_poc_act_pane_g5

0x30c8,	// (0x0001890a) bg_popup_call_poc_act_pane_g6

0x3098,	// (0x000188da) bg_popup_call_poc_act_pane_g7

0x30d0,	// (0x00018912) bg_popup_call_poc_act_pane_g8

0x0c9e,	// (0x000164e0) main_usb_pane

0x792d,	// (0x0001d16f) popup_cale_lunar_info_window

0x941a,	// (0x0001ec5c) im_reading_pane_t1_ParamLimits

0x13eb,	// (0x00016c2d) list_im_pane_ParamLimits

0x13fc,	// (0x00016c3e) scroll_pane_cp07_ParamLimits

0x0c9e,	// (0x000164e0) grid_highlight_pane_cp012

0x0ef9,	// (0x0001673b) mup_scale_pane_ParamLimits

0x287d,	// (0x000180bf) main_usb_pane_g1_ParamLimits

0x287d,	// (0x000180bf) main_usb_pane_g1

0xa9f9,	// (0x0002023b) main_usb_pane_g2_ParamLimits

0xa9f9,	// (0x0002023b) main_usb_pane_g2

0x0001,

0xf543,	// (0x00024d85) main_usb_pane_g_ParamLimits

0xf543,	// (0x00024d85) main_usb_pane_g

0xaa05,	// (0x00020247) main_usb_pane_t1_ParamLimits

0xaa05,	// (0x00020247) main_usb_pane_t1

0xaa17,	// (0x00020259) main_usb_pane_t2_ParamLimits

0xaa17,	// (0x00020259) main_usb_pane_t2

0xaa29,	// (0x0002026b) main_usb_pane_t3_ParamLimits

0xaa29,	// (0x0002026b) main_usb_pane_t3

0xaa3b,	// (0x0002027d) main_usb_pane_t4_ParamLimits

0xaa3b,	// (0x0002027d) main_usb_pane_t4

0xaa4d,	// (0x0002028f) main_usb_pane_t5_ParamLimits

0xaa4d,	// (0x0002028f) main_usb_pane_t5

0xaa5f,	// (0x000202a1) main_usb_pane_t6_ParamLimits

0xaa5f,	// (0x000202a1) main_usb_pane_t6

0x0005,

0xf548,	// (0x00024d8a) main_usb_pane_t_ParamLimits

0x1c0d,	// (0x0001744f) aid_text_placing

0xa1c6,	// (0x0001fa08) main_location2_pane_t1_ParamLimits

0xa1dc,	// (0x0001fa1e) main_location2_pane_t2_ParamLimits

0xa1f2,	// (0x0001fa34) main_location2_pane_t3_ParamLimits

0xa208,	// (0x0001fa4a) main_location2_pane_t4_ParamLimits

0xa208,	// (0x0001fa4a) main_location2_pane_t4

0xf34f,	// (0x00024b91) main_location2_pane_t_ParamLimits

0x0f34,	// (0x00016776) find_pinb_pane_g2_ParamLimits

0x0f34,	// (0x00016776) find_pinb_pane_g2

0x0001,

0xf0b4,	// (0x000248f6) find_pinb_pane_g_ParamLimits

0xf0b4,	// (0x000248f6) find_pinb_pane_g

0x0f40,	// (0x00016782) find_pinb_pane_t1_ParamLimits

0x0f52,	// (0x00016794) find_pinb_pane_t2_ParamLimits

0xf0b9,	// (0x000248fb) find_pinb_pane_t_ParamLimits

0x0c9e,	// (0x000164e0) main_call3_pane

0x991b,	// (0x0001f15d) cale_month_day_heading_pane_t1_ParamLimits

0x99a1,	// (0x0001f1e3) cale_month_day_heading_pane_t2_ParamLimits

0x9a32,	// (0x0001f274) cale_month_day_heading_pane_t3_ParamLimits

0x9ac3,	// (0x0001f305) cale_month_day_heading_pane_t4_ParamLimits

0x9b54,	// (0x0001f396) cale_month_day_heading_pane_t5_ParamLimits

0x9be5,	// (0x0001f427) cale_month_day_heading_pane_t6_ParamLimits

0x9c76,	// (0x0001f4b8) cale_month_day_heading_pane_t7_ParamLimits

0xf234,	// (0x00024a76) cale_month_day_heading_pane_t_ParamLimits

0x9f6a,	// (0x0001f7ac) smil_status_volume_pane

0xa5f2,	// (0x0001fe34) postcard_address_pane_ParamLimits

0xa5f2,	// (0x0001fe34) postcard_address_pane

0xa5fe,	// (0x0001fe40) postcard_message_pane_ParamLimits

0xa5fe,	// (0x0001fe40) postcard_message_pane

0xa9d5,	// (0x00020217) call2_cli_visual_pane_t1_ParamLimits

0xa9d5,	// (0x00020217) call2_cli_visual_pane_t1

0x3313,	// (0x00018b55) postcard_message_pane_t1_ParamLimits

0x3313,	// (0x00018b55) postcard_message_pane_t1

0x32fb,	// (0x00018b3d) postcard_address_pane_t1_ParamLimits

0x32fb,	// (0x00018b3d) postcard_address_pane_t1

0xad4d,	// (0x0002058f) popup_call3_audio_in_window_ParamLimits

0xad4d,	// (0x0002058f) popup_call3_audio_in_window

0xac35,	// (0x00020477) bg_popup_call3_in_pane_ParamLimits

0xac35,	// (0x00020477) bg_popup_call3_in_pane

0xac93,	// (0x000204d5) popup_call3_audio_in_window_g1_ParamLimits

0xac93,	// (0x000204d5) popup_call3_audio_in_window_g1

0xacab,	// (0x000204ed) popup_call3_audio_in_window_g2_ParamLimits

0xacab,	// (0x000204ed) popup_call3_audio_in_window_g2

0xacc3,	// (0x00020505) popup_call3_audio_in_window_g3_ParamLimits

0xacc3,	// (0x00020505) popup_call3_audio_in_window_g3

0x0003,

0xf5a5,	// (0x00024de7) popup_call3_audio_in_window_g_ParamLimits

0xf5a5,	// (0x00024de7) popup_call3_audio_in_window_g

0xaceb,	// (0x0002052d) popup_call3_audio_in_window_t1_ParamLimits

0xaceb,	// (0x0002052d) popup_call3_audio_in_window_t1

0xad13,	// (0x00020555) popup_call3_audio_in_window_t2_ParamLimits

0xad13,	// (0x00020555) popup_call3_audio_in_window_t2

0xad3b,	// (0x0002057d) popup_call3_audio_in_window_t3_ParamLimits

0xad3b,	// (0x0002057d) popup_call3_audio_in_window_t3

0x0002,

0xf5ae,	// (0x00024df0) popup_call3_audio_in_window_t_ParamLimits

0xf5ae,	// (0x00024df0) popup_call3_audio_in_window_t

0x127e,	// (0x00016ac0) bg_popup_call3_rect_pane

0x3028,	// (0x0001886a) bg_popup_call3_rect_pane_g1

0x115a,	// (0x0001699c) bg_popup_call3_rect_pane_g2

0x3030,	// (0x00018872) bg_popup_call3_rect_pane_g3

0x3038,	// (0x0001887a) bg_popup_call3_rect_pane_g4

0x3040,	// (0x00018882) bg_popup_call3_rect_pane_g5

0x3048,	// (0x0001888a) bg_popup_call3_rect_pane_g6

0x3050,	// (0x00018892) bg_popup_call3_rect_pane_g7

0x082c,	// (0x0001606e) mup_visualizer_osc_pane

0x082c,	// (0x0001606e) mup_visualizer_spec_pane

0xac55,	// (0x00020497) call3_video_qcif_pane_ParamLimits

0xac55,	// (0x00020497) call3_video_qcif_pane

0xac65,	// (0x000204a7) call3_video_qcif_uncrop_pane_ParamLimits

0xac65,	// (0x000204a7) call3_video_qcif_uncrop_pane

0xac71,	// (0x000204b3) call3_video_subqcif_pane_ParamLimits

0xac71,	// (0x000204b3) call3_video_subqcif_pane

0xac83,	// (0x000204c5) call3_video_subqcif_uncrop_pane_ParamLimits

0xac83,	// (0x000204c5) call3_video_subqcif_uncrop_pane

0xacdb,	// (0x0002051d) popup_call3_audio_in_window_g4_ParamLimits

0xacdb,	// (0x0002051d) popup_call3_audio_in_window_g4

0x082c,	// (0x0001606e) mup_spec_half_pane

0x082c,	// (0x0001606e) mup_spec_half_pane_cp

0x082c,	// (0x0001606e) mup_osc_middle_pane

0x12f6,	// (0x00016b38) mup_visualizer_osc_pane_g1

0x328c,	// (0x00018ace) mup_spec_bar_pane_ParamLimits

0x328c,	// (0x00018ace) mup_spec_bar_pane

0x12f6,	// (0x00016b38) mup_spec_bar_pane_g1

0x12f6,	// (0x00016b38) mup_spec_bar_pane_g2

0x0001,

0xf3c9,	// (0x00024c0b) mup_spec_bar_pane_g

0x8b70,	// (0x0001e3b2) aid_cale_week_size_cell_pane_ParamLimits

0x8b85,	// (0x0001e3c7) bg_cale_heading_pane_ParamLimits

0x11e0,	// (0x00016a22) bg_cale_pane_cp01_ParamLimits

0x8b9d,	// (0x0001e3df) cale_week_corner_pane_ParamLimits

0x8bb7,	// (0x0001e3f9) cale_week_day_heading_pane_ParamLimits

0x8bcf,	// (0x0001e411) cale_week_scroll_pane_g1_ParamLimits

0x8be2,	// (0x0001e424) cale_week_scroll_pane_g2_ParamLimits

0x8bf5,	// (0x0001e437) cale_week_scroll_pane_g3_ParamLimits

0x8c08,	// (0x0001e44a) cale_week_scroll_pane_g4_ParamLimits

0x8c1b,	// (0x0001e45d) cale_week_scroll_pane_g5_ParamLimits

0x8c2e,	// (0x0001e470) cale_week_scroll_pane_g6_ParamLimits

0x8c41,	// (0x0001e483) cale_week_scroll_pane_g7_ParamLimits

0x8c54,	// (0x0001e496) cale_week_scroll_pane_g8_ParamLimits

0x8c67,	// (0x0001e4a9) cale_week_scroll_pane_g9_ParamLimits

0x8c7a,	// (0x0001e4bc) cale_week_scroll_pane_g10_ParamLimits

0x8c8d,	// (0x0001e4cf) cale_week_scroll_pane_g11_ParamLimits

0x8ca0,	// (0x0001e4e2) cale_week_scroll_pane_g12_ParamLimits

0x8cb3,	// (0x0001e4f5) cale_week_scroll_pane_g13_ParamLimits

0x8cc6,	// (0x0001e508) cale_week_scroll_pane_g14_ParamLimits

0x8cd9,	// (0x0001e51b) cale_week_scroll_pane_g15_ParamLimits

0xf145,	// (0x00024987) cale_week_scroll_pane_g_ParamLimits

0x8cff,	// (0x0001e541) cale_week_time_pane_ParamLimits

0x8d12,	// (0x0001e554) grid_cale_week_pane_ParamLimits

0x11fd,	// (0x00016a3f) listscroll_cale_week_pane_t1

0x120f,	// (0x00016a51) scroll_pane_cp08_ParamLimits

0x95cc,	// (0x0001ee0e) cale_month_corner_pane_ParamLimits

0x162c,	// (0x00016e6e) cale_month_pane_t1

0x98e2,	// (0x0001f124) cale_month_week_pane_ParamLimits

0x287d,	// (0x000180bf) popup_call_status_window_g1_ParamLimits

0xa08f,	// (0x0001f8d1) popup_call_status_window_g2_ParamLimits

0xa09b,	// (0x0001f8dd) popup_call_status_window_g3_ParamLimits

0xf2d6,	// (0x00024b18) popup_call_status_window_g_ParamLimits

0x1a01,	// (0x00017243) aid_call2_pane

0xa532,	// (0x0001fd74) msg_header_pane_g1

0xa5f2,	// (0x0001fe34) postcard_address2_pane_ParamLimits

0xa5f2,	// (0x0001fe34) postcard_address2_pane

0xa5fe,	// (0x0001fe40) postcard_message2_pane_ParamLimits

0xa5fe,	// (0x0001fe40) postcard_message2_pane

0xac0a,	// (0x0002044c) message2_row_pane_ParamLimits

0xac0a,	// (0x0002044c) message2_row_pane

0xac22,	// (0x00020464) address2_row_pane_ParamLimits

0xac22,	// (0x00020464) address2_row_pane

0x3259,	// (0x00018a9b) postcard_message2_row_pane_g1

0x3261,	// (0x00018aa3) postcard_message2_row_pane_t1

0x3259,	// (0x00018a9b) address2_row_pane_g1

0x3261,	// (0x00018aa3) address2_row_pane_t1

0x2158,	// (0x0001799a) aid_size_cell_vorec

0x0c9e,	// (0x000164e0) main_rss_pane

0x326f,	// (0x00018ab1) rss_list_single_pane_ParamLimits

0x326f,	// (0x00018ab1) rss_list_single_pane

0x327d,	// (0x00018abf) rss_list_single_pane_t1

0x327d,	// (0x00018abf) rss_list_single_pane_t2

0x0001,

0xf599,	// (0x00024ddb) rss_list_single_pane_t

0x0c9e,	// (0x000164e0) main_camera2_pane

0x0c9e,	// (0x000164e0) main_video2_pane

0x73c3,	// (0x0001cc05) cams_zoom_pane_cp2_ParamLimits

0x73c3,	// (0x0001cc05) cams_zoom_pane_cp2

0x73c3,	// (0x0001cc05) image2_vga_pane_ParamLimits

0x73c3,	// (0x0001cc05) image2_vga_pane

0x1a9b,	// (0x000172dd) main_camera2_pane_g1_ParamLimits

0x1a9b,	// (0x000172dd) main_camera2_pane_g1

0x1a9b,	// (0x000172dd) main_camera2_pane_g2_ParamLimits

0x1a9b,	// (0x000172dd) main_camera2_pane_g2

0x1a9b,	// (0x000172dd) main_camera2_pane_g3_ParamLimits

0x1a9b,	// (0x000172dd) main_camera2_pane_g3

0x1a9b,	// (0x000172dd) main_camera2_pane_g4_ParamLimits

0x1a9b,	// (0x000172dd) main_camera2_pane_g4

0x1a9b,	// (0x000172dd) main_camera2_pane_g5_ParamLimits

0x1a9b,	// (0x000172dd) main_camera2_pane_g5

0x1a9b,	// (0x000172dd) main_camera2_pane_g6_ParamLimits

0x1a9b,	// (0x000172dd) main_camera2_pane_g6

0x1a9b,	// (0x000172dd) main_camera2_pane_g7_ParamLimits

0x1a9b,	// (0x000172dd) main_camera2_pane_g7

0x1a9b,	// (0x000172dd) main_camera2_pane_g8_ParamLimits

0x1a9b,	// (0x000172dd) main_camera2_pane_g8

0x0008,

0xf5b5,	// (0x00024df7) main_camera2_pane_g_ParamLimits

0xf5b5,	// (0x00024df7) main_camera2_pane_g

0x7a73,	// (0x0001d2b5) main_camera2_pane_t1_ParamLimits

0x7a73,	// (0x0001d2b5) main_camera2_pane_t1

0x7a73,	// (0x0001d2b5) main_camera2_pane_t2_ParamLimits

0x7a73,	// (0x0001d2b5) main_camera2_pane_t2

0x7a73,	// (0x0001d2b5) main_camera2_pane_t3_ParamLimits

0x7a73,	// (0x0001d2b5) main_camera2_pane_t3

0x7a73,	// (0x0001d2b5) main_camera2_pane_t4_ParamLimits

0x7a73,	// (0x0001d2b5) main_camera2_pane_t4

0x0006,

0xf5c8,	// (0x00024e0a) main_camera2_pane_t_ParamLimits

0xf5c8,	// (0x00024e0a) main_camera2_pane_t

0x7a9b,	// (0x0001d2dd) cams_zoom_pane_cp4_ParamLimits

0x7a9b,	// (0x0001d2dd) cams_zoom_pane_cp4

0x78dc,	// (0x0001d11e) image2_cif_pane_ParamLimits

0x78dc,	// (0x0001d11e) image2_cif_pane

0x73c3,	// (0x0001cc05) image2_subqcif_pane_ParamLimits

0x73c3,	// (0x0001cc05) image2_subqcif_pane

0x7aa9,	// (0x0001d2eb) main_video2_pane_g1_ParamLimits

0x7aa9,	// (0x0001d2eb) main_video2_pane_g1

0x7aa9,	// (0x0001d2eb) main_video2_pane_g2_ParamLimits

0x7aa9,	// (0x0001d2eb) main_video2_pane_g2

0x7aa9,	// (0x0001d2eb) main_video2_pane_g3_ParamLimits

0x7aa9,	// (0x0001d2eb) main_video2_pane_g3

0x7aa9,	// (0x0001d2eb) main_video2_pane_g4_ParamLimits

0x7aa9,	// (0x0001d2eb) main_video2_pane_g4

0x7aa9,	// (0x0001d2eb) main_video2_pane_g5_ParamLimits

0x7aa9,	// (0x0001d2eb) main_video2_pane_g5

0x7aa9,	// (0x0001d2eb) main_video2_pane_g6_ParamLimits

0x7aa9,	// (0x0001d2eb) main_video2_pane_g6

0x0005,

0xf5d7,	// (0x00024e19) main_video2_pane_g_ParamLimits

0xf5d7,	// (0x00024e19) main_video2_pane_g

0x7ab7,	// (0x0001d2f9) main_video2_pane_t1_ParamLimits

0x7ab7,	// (0x0001d2f9) main_video2_pane_t1

0x7ab7,	// (0x0001d2f9) main_video2_pane_t2_ParamLimits

0x7ab7,	// (0x0001d2f9) main_video2_pane_t2

0x7ab7,	// (0x0001d2f9) main_video2_pane_t3_ParamLimits

0x7ab7,	// (0x0001d2f9) main_video2_pane_t3

0x0002,

0xf5e4,	// (0x00024e26) main_video2_pane_t_ParamLimits

0xf5e4,	// (0x00024e26) main_video2_pane_t

0xaaeb,	// (0x0002032d) call_muted_g2

0x0001,

0xf58b,	// (0x00024dcd) call_muted_g

0x0c9e,	// (0x000164e0) main_mup2_pane

0x0f9d,	// (0x000167df) main_mup2_pane_g1_ParamLimits

0x0f9d,	// (0x000167df) main_mup2_pane_g1

0x0f9d,	// (0x000167df) main_mup2_pane_g2_ParamLimits

0x0f9d,	// (0x000167df) main_mup2_pane_g2

0x4b24,	// (0x0001a366) main_mup_pane_g13_cp1

0x73d1,	// (0x0001cc13) mup_volume_pane_cp1

0x0f9d,	// (0x000167df) main_mup2_pane_g4_ParamLimits

0x0f9d,	// (0x000167df) main_mup2_pane_g4

0x0f9d,	// (0x000167df) main_mup2_pane_g5_ParamLimits

0x0f9d,	// (0x000167df) main_mup2_pane_g5

0x0f9d,	// (0x000167df) main_mup2_pane_g6_ParamLimits

0x0f9d,	// (0x000167df) main_mup2_pane_g6

0x0f9d,	// (0x000167df) main_mup2_pane_g7_ParamLimits

0x0f9d,	// (0x000167df) main_mup2_pane_g7

0x0006,

0xf5eb,	// (0x00024e2d) main_mup2_pane_g_ParamLimits

0xf5eb,	// (0x00024e2d) main_mup2_pane_g

0x0fab,	// (0x000167ed) main_mup2_pane_t1_ParamLimits

0x0fab,	// (0x000167ed) main_mup2_pane_t1

0x0fab,	// (0x000167ed) main_mup2_pane_t2_ParamLimits

0x0fab,	// (0x000167ed) main_mup2_pane_t2

0x0fab,	// (0x000167ed) main_mup2_pane_t3_ParamLimits

0x0fab,	// (0x000167ed) main_mup2_pane_t3

0x0fab,	// (0x000167ed) main_mup2_pane_t4_ParamLimits

0x0fab,	// (0x000167ed) main_mup2_pane_t4

0x0fab,	// (0x000167ed) main_mup2_pane_t5_ParamLimits

0x0fab,	// (0x000167ed) main_mup2_pane_t5

0x0fab,	// (0x000167ed) main_mup2_pane_t6_ParamLimits

0x0fab,	// (0x000167ed) main_mup2_pane_t6

0x0005,

0xf5fa,	// (0x00024e3c) main_mup2_pane_t_ParamLimits

0xf5fa,	// (0x00024e3c) main_mup2_pane_t

0x3343,	// (0x00018b85) mup2_visualizer_pane_ParamLimits

0x3343,	// (0x00018b85) mup2_visualizer_pane

0x3343,	// (0x00018b85) mup_progress_pane_cp_ParamLimits

0x3343,	// (0x00018b85) mup_progress_pane_cp

0x7ae1,	// (0x0001d323) mup_volume_pane_cp_ParamLimits

0x7ae1,	// (0x0001d323) mup_volume_pane_cp

0x0f73,	// (0x000167b5) mup2_visualizer_pane_g1_ParamLimits

0x0f73,	// (0x000167b5) mup2_visualizer_pane_g1

0x0f81,	// (0x000167c3) mup2_visualizer_pane_g2_ParamLimits

0x0f81,	// (0x000167c3) mup2_visualizer_pane_g2

0x0f81,	// (0x000167c3) mup2_visualizer_pane_g3_ParamLimits

0x0f81,	// (0x000167c3) mup2_visualizer_pane_g3

0x0002,

0xf0be,	// (0x00024900) mup2_visualizer_pane_g_ParamLimits

0xf0be,	// (0x00024900) mup2_visualizer_pane_g

0x2158,	// (0x0001799a) aid_size_cell_fmradio

0x78d2,	// (0x0001d114) aid_height_parent_landcape

0x1489,	// (0x00016ccb) wml_content_pane_cp

0x1491,	// (0x00016cd3) wml_tabs_pane

0x149a,	// (0x00016cdc) popup_wml_miniature_window

0x14a2,	// (0x00016ce4) scroll_pane_cp021

0x14b6,	// (0x00016cf8) wml_content_pane_comp8

0x0c9e,	// (0x000164e0) bg_popup_sub_pane_cp05

0x3367,	// (0x00018ba9) popup_wml_miniature_window_g1

0x336f,	// (0x00018bb1) wml_miniature_view_pane

0xad5a,	// (0x0002059c) aid_size_wml_view

0xad62,	// (0x000205a4) wml_miniature_view_pane_g1

0xad6b,	// (0x000205ad) wml_miniature_view_pane_g2

0xad74,	// (0x000205b6) wml_miniature_view_pane_g3

0xad7c,	// (0x000205be) wml_miniature_view_pane_g4

0xad84,	// (0x000205c6) wml_miniature_view_pane_g5

0xad8c,	// (0x000205ce) wml_miniature_view_pane_g6

0xad94,	// (0x000205d6) wml_miniature_view_pane_g7

0xad9c,	// (0x000205de) wml_miniature_view_pane_g8

0x0007,

0xf607,	// (0x00024e49) wml_miniature_view_pane_g

0x3377,	// (0x00018bb9) background_graphic_ParamLimits

0x3377,	// (0x00018bb9) background_graphic

0x3383,	// (0x00018bc5) wml_tabs_2_pane

0x338c,	// (0x00018bce) wml_tabs_3_pane_ParamLimits

0x338c,	// (0x00018bce) wml_tabs_3_pane

0x339e,	// (0x00018be0) wml_tabs_4_pane_ParamLimits

0x339e,	// (0x00018be0) wml_tabs_4_pane

0x33b4,	// (0x00018bf6) wml_tabs_5_pane_ParamLimits

0x33b4,	// (0x00018bf6) wml_tabs_5_pane

0x33ce,	// (0x00018c10) wml_tabs_pane_g2_ParamLimits

0x33ce,	// (0x00018c10) wml_tabs_pane_g2

0x33e3,	// (0x00018c25) wml_tabs_pane_g3_ParamLimits

0x33e3,	// (0x00018c25) wml_tabs_pane_g3

0x33f8,	// (0x00018c3a) wml_tabs_2_active_pane_ParamLimits

0x33f8,	// (0x00018c3a) wml_tabs_2_active_pane

0x33f8,	// (0x00018c3a) wml_tabs_2_passive_pane_ParamLimits

0x33f8,	// (0x00018c3a) wml_tabs_2_passive_pane

0xada4,	// (0x000205e6) wml_tabs_3_active_pane_cp_ParamLimits

0xada4,	// (0x000205e6) wml_tabs_3_active_pane_cp

0xadb5,	// (0x000205f7) wml_tabs_3_passive_pane_ParamLimits

0xadb5,	// (0x000205f7) wml_tabs_3_passive_pane

0xadc6,	// (0x00020608) wml_tabs_3_passive_pane_cp_ParamLimits

0xadc6,	// (0x00020608) wml_tabs_3_passive_pane_cp

0xadd7,	// (0x00020619) tabs_4_active_pane

0xaddf,	// (0x00020621) tabs_4_passive_pane

0xade7,	// (0x00020629) tabs_4_passive_pane_cp

0xadef,	// (0x00020631) tabs_4_passive_pane_cp2

0xa9f1,	// (0x00020233) aid_height_text

0x3343,	// (0x00018b85) mup_volume_cont_pane_ParamLimits

0x3343,	// (0x00018b85) mup_volume_cont_pane

0x8963,	// (0x0001e1a5) aid_size_cell_pinb

0x082c,	// (0x0001606e) aid_size_list_pinb

0x3343,	// (0x00018b85) mup2_volume_cont_pane_ParamLimits

0x3343,	// (0x00018b85) mup2_volume_cont_pane

0x7acb,	// (0x0001d30d) mup2_volume_cont_pane_g1_ParamLimits

0x7acb,	// (0x0001d30d) mup2_volume_cont_pane_g1

0x71b8,	// (0x0001c9fa) aid_size_cell_touch_ParamLimits

0x71b8,	// (0x0001c9fa) aid_size_cell_touch

0x73db,	// (0x0001cc1d) touch_pane_ParamLimits

0x73db,	// (0x0001cc1d) touch_pane

0x73d1,	// (0x0001cc13) main_rss2_pane

0x3425,	// (0x00018c67) listscroll_rss2_pane

0x342e,	// (0x00018c70) rss2_navigation_pane

0x3436,	// (0x00018c78) list_rss2_pane

0x1a93,	// (0x000172d5) scroll_pane_cp22

0x343e,	// (0x00018c80) rss2_navigation_pane_g1

0x3447,	// (0x00018c89) rss2_navigation_pane_g2

0x344f,	// (0x00018c91) rss2_navigation_pane_g3

0x0002,

0xf618,	// (0x00024e5a) rss2_navigation_pane_g

0x3457,	// (0x00018c99) rss2_navigation_pane_t1

0xadf7,	// (0x00020639) rss2_list_single_pane_ParamLimits

0xadf7,	// (0x00020639) rss2_list_single_pane

0x3465,	// (0x00018ca7) rss2_list_single_pane_t2

0x3473,	// (0x00018cb5) rss2_list_single_pane_t3_ParamLimits

0x3473,	// (0x00018cb5) rss2_list_single_pane_t3

0x3490,	// (0x00018cd2) rss2_list_single_pane_t4

0x9f54,	// (0x0001f796) smil_status_pane_g1

0x78dc,	// (0x0001d11e) main_image2_pane_ParamLimits

0x78dc,	// (0x0001d11e) main_image2_pane

0x1a9b,	// (0x000172dd) main_camera2_pane_g9_ParamLimits

0x1a9b,	// (0x000172dd) main_camera2_pane_g9

0x7a73,	// (0x0001d2b5) main_camera2_pane_t5_ParamLimits

0x7a73,	// (0x0001d2b5) main_camera2_pane_t5

0x7a87,	// (0x0001d2c9) main_camera2_pane_t6_ParamLimits

0x7a87,	// (0x0001d2c9) main_camera2_pane_t6

0xae0e,	// (0x00020650) main_image2_pane_g1_ParamLimits

0xae0e,	// (0x00020650) main_image2_pane_g1

0xa79e,	// (0x0001ffe0) smil2_video_pane_ParamLimits

0xa79e,	// (0x0001ffe0) smil2_video_pane

0x71e8,	// (0x0001ca2a) aid_zoom_text_primary_cp

0x737a,	// (0x0001cbbc) popup_preview_fixed_window

0x13e3,	// (0x00016c25) im_reading_pane_g1

0x7a3d,	// (0x0001d27f) cams2_bc_adjust_pane_cp_ParamLimits

0x7a3d,	// (0x0001d27f) cams2_bc_adjust_pane_cp

0x73c3,	// (0x0001cc05) cams2_bc_adjust_pane_ParamLimits

0x73c3,	// (0x0001cc05) cams2_bc_adjust_pane

0x4b24,	// (0x0001a366) cams2_bc_adjust_pane_g1

0x73d1,	// (0x0001cc13) cams2_slider_pane

0x4b24,	// (0x0001a366) cams2_slider_pane_g1

0x4b24,	// (0x0001a366) cams2_slider_pane_g2

0x0006,

0xf61f,	// (0x00024e61) cams2_slider_pane_g

0x7442,	// (0x0001cc84) calc_display_pane_ParamLimits

0x745a,	// (0x0001cc9c) calc_paper_pane_ParamLimits

0x7476,	// (0x0001ccb8) grid_calc_pane_ParamLimits

0x7831,	// (0x0001d073) popup_clock_digital_window_t1_ParamLimits

0x20f5,	// (0x00017937) main_image_pane_t1

0x7428,	// (0x0001cc6a) aid_size_cell_calc_ParamLimits

0x7428,	// (0x0001cc6a) aid_size_cell_calc

0x790d,	// (0x0001d14f) popup_blid_sat_info2_window_ParamLimits

0x790d,	// (0x0001d14f) popup_blid_sat_info2_window

0x349e,	// (0x00018ce0) aid_size_cell_blid

0x3343,	// (0x00018b85) bg_popup_window_pane_cp07

0x34bb,	// (0x00018cfd) grid_popup_blid_pane

0x34c3,	// (0x00018d05) heading_pane_cp05_ParamLimits

0x34c3,	// (0x00018d05) heading_pane_cp05

0x358b,	// (0x00018dcd) cell_popup_blid_pane_ParamLimits

0x358b,	// (0x00018dcd) cell_popup_blid_pane

0x35ab,	// (0x00018ded) cell_popup_blid_pane_g1

0x35b3,	// (0x00018df5) cell_popup_blid_pane_t1

0x3343,	// (0x00018b85) mup2_indicator_pane_ParamLimits

0x3343,	// (0x00018b85) mup2_indicator_pane

0x082c,	// (0x0001606e) mup2_visualizer_osc_pane

0x3351,	// (0x00018b93) mup2_visualizer_spec_pane_ParamLimits

0x3351,	// (0x00018b93) mup2_visualizer_spec_pane

0x082c,	// (0x0001606e) mup2_spec_half_pane

0x082c,	// (0x0001606e) mup2_spec_half_pane_cp

0x35c1,	// (0x00018e03) mup2_spec_bar_pane_ParamLimits

0x35c1,	// (0x00018e03) mup2_spec_bar_pane

0x12f6,	// (0x00016b38) mup2_spec_bar_pane_g1

0x35e0,	// (0x00018e22) mup2_spec_bar_pane_g2

0x0001,

0xf645,	// (0x00024e87) mup2_spec_bar_pane_g

0x082c,	// (0x0001606e) mup2_osc_middle_pane

0x12f6,	// (0x00016b38) mup2_visualizer_osc_pane_g1

0x08ad,	// (0x000160ef) popup_number_entry_window_t1_ParamLimits

0x08c0,	// (0x00016102) popup_number_entry_window_t2_ParamLimits

0x08d2,	// (0x00016114) popup_number_entry_window_t3_ParamLimits

0x890a,	// (0x0001e14c) popup_number_entry_window_t5_ParamLimits

0x890a,	// (0x0001e14c) popup_number_entry_window_t5

0xf05f,	// (0x000248a1) popup_number_entry_window_t_ParamLimits

0x08e4,	// (0x00016126) text_title_cp2_ParamLimits

0x7870,	// (0x0001d0b2) aid_hotspot_pointer_text2_pane

0x78c6,	// (0x0001d108) main_viewer_pane_g9_ParamLimits

0x78c6,	// (0x0001d108) main_viewer_pane_g9

0x162c,	// (0x00016e6e) cale_month_pane_t1_ParamLimits

0x1680,	// (0x00016ec2) bg_cale_pane_ParamLimits

0x1698,	// (0x00016eda) list_cale_pane_ParamLimits

0x16a9,	// (0x00016eeb) listscroll_cale_day_pane_t1

0x16bb,	// (0x00016efd) scroll_pane_cp09_ParamLimits

0xa335,	// (0x0001fb77) main_mup_eq_pane_t1_ParamLimits

0xa335,	// (0x0001fb77) main_mup_eq_pane_t1

0xa34b,	// (0x0001fb8d) main_mup_eq_pane_t2_ParamLimits

0xa34b,	// (0x0001fb8d) main_mup_eq_pane_t2

0xa361,	// (0x0001fba3) main_mup_eq_pane_t3_ParamLimits

0xa361,	// (0x0001fba3) main_mup_eq_pane_t3

0xa377,	// (0x0001fbb9) main_mup_eq_pane_t4_ParamLimits

0xa377,	// (0x0001fbb9) main_mup_eq_pane_t4

0xa38d,	// (0x0001fbcf) main_mup_eq_pane_t5_ParamLimits

0xa38d,	// (0x0001fbcf) main_mup_eq_pane_t5

0xa3a3,	// (0x0001fbe5) main_mup_eq_pane_t6_ParamLimits

0xa3a3,	// (0x0001fbe5) main_mup_eq_pane_t6

0xa3b5,	// (0x0001fbf7) main_mup_eq_pane_t7_ParamLimits

0xa3b5,	// (0x0001fbf7) main_mup_eq_pane_t7

0xa3c7,	// (0x0001fc09) main_mup_eq_pane_t8_ParamLimits

0xa3c7,	// (0x0001fc09) main_mup_eq_pane_t8

0xa3d9,	// (0x0001fc1b) main_mup_eq_pane_t9_ParamLimits

0xa3d9,	// (0x0001fc1b) main_mup_eq_pane_t9

0xa3ef,	// (0x0001fc31) main_mup_eq_pane_t10_ParamLimits

0xa3ef,	// (0x0001fc31) main_mup_eq_pane_t10

0x0009,

0xf3d5,	// (0x00024c17) main_mup_eq_pane_t_ParamLimits

0xf3d5,	// (0x00024c17) main_mup_eq_pane_t

0xa482,	// (0x0001fcc4) mup_equalizer_pane_cp5_ParamLimits

0xa494,	// (0x0001fcd6) mup_equalizer_pane_cp6_ParamLimits

0xa4a6,	// (0x0001fce8) mup_equalizer_pane_cp7_ParamLimits

0x73d1,	// (0x0001cc13) main_gallery_pane

0x32ab,	// (0x00018aed) smil2_volume_pane

0x32c6,	// (0x00018b08) smil_status_volume_pane_g1_ParamLimits

0x32b3,	// (0x00018af5) smil_status_volume_pane_g2_ParamLimits

0x7a1b,	// (0x0001d25d) smil_status_volume_pane_g3_ParamLimits

0xf59e,	// (0x00024de0) smil_status_volume_pane_g_ParamLimits

0x3343,	// (0x00018b85) bg_popup_window_pane_cp07_ParamLimits

0x34a6,	// (0x00018ce8) blid_firmament_pane

0x0f8f,	// (0x000167d1) aid_size_cell_gallery_ParamLimits

0x0f8f,	// (0x000167d1) aid_size_cell_gallery

0xae1a,	// (0x0002065c) grid_gallery_pane_ParamLimits

0xae1a,	// (0x0002065c) grid_gallery_pane

0xae29,	// (0x0002066b) cell_gallery_pane_ParamLimits

0xae29,	// (0x0002066b) cell_gallery_pane

0x087f,	// (0x000160c1) bg_cell_gallery_focus_pane_ParamLimits

0x087f,	// (0x000160c1) bg_cell_gallery_focus_pane

0x0f73,	// (0x000167b5) cell_gallery_pane_g1_ParamLimits

0x0f73,	// (0x000167b5) cell_gallery_pane_g1

0x0f73,	// (0x000167b5) cell_gallery_pane_g2_ParamLimits

0x0f73,	// (0x000167b5) cell_gallery_pane_g2

0x0f73,	// (0x000167b5) cell_gallery_pane_g3_ParamLimits

0x0f73,	// (0x000167b5) cell_gallery_pane_g3

0x0f81,	// (0x000167c3) cell_gallery_pane_g4_ParamLimits

0x0f81,	// (0x000167c3) cell_gallery_pane_g4

0x0003,

0xf64a,	// (0x00024e8c) cell_gallery_pane_g_ParamLimits

0xf64a,	// (0x00024e8c) cell_gallery_pane_g

0x35ea,	// (0x00018e2c) bg_cell_gallery_focus_pane_g1

0x35f2,	// (0x00018e34) bg_cell_gallery_focus_pane_g2

0x35fa,	// (0x00018e3c) bg_cell_gallery_focus_pane_g3

0x3602,	// (0x00018e44) bg_cell_gallery_focus_pane_g4

0x360a,	// (0x00018e4c) bg_cell_gallery_focus_pane_g5

0x3612,	// (0x00018e54) bg_cell_gallery_focus_pane_g6

0x361a,	// (0x00018e5c) bg_cell_gallery_focus_pane_g7

0x3622,	// (0x00018e64) bg_cell_gallery_focus_pane_g8

0x0007,

0xf653,	// (0x00024e95) bg_cell_gallery_focus_pane_g

0x362a,	// (0x00018e6c) aid_firma_cardinal

0x363e,	// (0x00018e80) blid_firmament_pane_t1

0x3655,	// (0x00018e97) blid_firmament_pane_t2

0x366c,	// (0x00018eae) blid_firmament_pane_t3

0x3683,	// (0x00018ec5) blid_firmament_pane_t4

0x0003,

0xf664,	// (0x00024ea6) blid_firmament_pane_t

0x369a,	// (0x00018edc) blid_sat_info_pane

0x12f6,	// (0x00016b38) blid_sat_info_pane_g1

0x12f6,	// (0x00016b38) blid_sat_info_pane_g2

0x0001,

0xf3c9,	// (0x00024c0b) blid_sat_info_pane_g

0x36aa,	// (0x00018eec) blid_sat_info_pane_t1

0x36b8,	// (0x00018efa) smil2_volume_content_pane

0x36c1,	// (0x00018f03) smil2_volume_pane_g1

0x36c9,	// (0x00018f0b) smil2_volume_content_pane_g1

0x36d2,	// (0x00018f14) smil2_volume_content_pane_g2

0x36db,	// (0x00018f1d) smil2_volume_content_pane_g3

0x36e4,	// (0x00018f26) smil2_volume_content_pane_g4

0x36ed,	// (0x00018f2f) smil2_volume_content_pane_g5

0x36f6,	// (0x00018f38) smil2_volume_content_pane_g6

0x36ff,	// (0x00018f41) smil2_volume_content_pane_g7

0x3708,	// (0x00018f4a) smil2_volume_content_pane_g8

0x3711,	// (0x00018f53) smil2_volume_content_pane_g9

0x371a,	// (0x00018f5c) smil2_volume_content_pane_g10

0x0009,

0xf66d,	// (0x00024eaf) smil2_volume_content_pane_g

0x8d75,	// (0x0001e5b7) cale_week_day_heading_pane_t1_ParamLimits

0x8db0,	// (0x0001e5f2) cale_week_day_heading_pane_t2_ParamLimits

0x8deb,	// (0x0001e62d) cale_week_day_heading_pane_t3_ParamLimits

0x8e26,	// (0x0001e668) cale_week_day_heading_pane_t4_ParamLimits

0x8e61,	// (0x0001e6a3) cale_week_day_heading_pane_t5_ParamLimits

0x8e9c,	// (0x0001e6de) cale_week_day_heading_pane_t6_ParamLimits

0x8ed7,	// (0x0001e719) cale_week_day_heading_pane_t7_ParamLimits

0xf166,	// (0x000249a8) cale_week_day_heading_pane_t_ParamLimits

0x122c,	// (0x00016a6e) bg_cale_side_pane_ParamLimits

0x75b7,	// (0x0001cdf9) cale_week_time_pane_t1_ParamLimits

0x75f1,	// (0x0001ce33) cale_week_time_pane_t2_ParamLimits

0x762b,	// (0x0001ce6d) cale_week_time_pane_t3_ParamLimits

0x7665,	// (0x0001cea7) cale_week_time_pane_t4_ParamLimits

0x769f,	// (0x0001cee1) cale_week_time_pane_t5_ParamLimits

0x76d9,	// (0x0001cf1b) cale_week_time_pane_t6_ParamLimits

0x7713,	// (0x0001cf55) cale_week_time_pane_t7_ParamLimits

0x774d,	// (0x0001cf8f) cale_week_time_pane_t8_ParamLimits

0xf175,	// (0x000249b7) cale_week_time_pane_t_ParamLimits

0x8f12,	// (0x0001e754) cell_cale_week_pane_g2_ParamLimits

0x122c,	// (0x00016a6e) bg_cale_side_pane_cp01_ParamLimits

0x9d07,	// (0x0001f549) cale_month_week_pane_t1_ParamLimits

0x9d40,	// (0x0001f582) cale_month_week_pane_t2_ParamLimits

0x9d79,	// (0x0001f5bb) cale_month_week_pane_t3_ParamLimits

0x9db2,	// (0x0001f5f4) cale_month_week_pane_t4_ParamLimits

0x9deb,	// (0x0001f62d) cale_month_week_pane_t5_ParamLimits

0x9e24,	// (0x0001f666) cale_month_week_pane_t6_ParamLimits

0xf243,	// (0x00024a85) cale_month_week_pane_t_ParamLimits

0x7791,	// (0x0001cfd3) cell_cale_month_pane_g1_ParamLimits

0x73d1,	// (0x0001cc13) main_cale_event_viewer_pane

0x082c,	// (0x0001606e) listscroll_cale_event_viewer_pane

0x3723,	// (0x00018f65) list_cale_ev_pane

0x372b,	// (0x00018f6d) scroll_pane_cp023

0xae45,	// (0x00020687) field_cale_ev_pane_ParamLimits

0xae45,	// (0x00020687) field_cale_ev_pane

0x3737,	// (0x00018f79) field_cale_ev_content_pane_ParamLimits

0x3737,	// (0x00018f79) field_cale_ev_content_pane

0x3743,	// (0x00018f85) field_cale_ev_pane_g1_ParamLimits

0x3743,	// (0x00018f85) field_cale_ev_pane_g1

0x374f,	// (0x00018f91) field_cale_ev_pane_g2_ParamLimits

0x374f,	// (0x00018f91) field_cale_ev_pane_g2

0x3767,	// (0x00018fa9) field_cale_ev_pane_g3_ParamLimits

0x3767,	// (0x00018fa9) field_cale_ev_pane_g3

0x0002,

0xf682,	// (0x00024ec4) field_cale_ev_pane_g_ParamLimits

0xf682,	// (0x00024ec4) field_cale_ev_pane_g

0x377f,	// (0x00018fc1) field_cale_ev_pane_t1_ParamLimits

0x377f,	// (0x00018fc1) field_cale_ev_pane_t1

0xae5f,	// (0x000206a1) field_cale_ev_content_pane_t1_ParamLimits

0xae5f,	// (0x000206a1) field_cale_ev_content_pane_t1

0x1f1d,	// (0x0001775f) bg_button_pane_cp01

0x8b60,	// (0x0001e3a2) listscroll_cale_week_pane_ParamLimits

0x11d7,	// (0x00016a19) popup_toolbar_window_cp01

0x11fd,	// (0x00016a3f) listscroll_cale_week_pane_t1_ParamLimits

0x8b60,	// (0x0001e3a2) listscroll_cale_day_pane_ParamLimits

0x11d7,	// (0x00016a19) popup_toolbar_window_cp02

0x16a9,	// (0x00016eeb) listscroll_cale_day_pane_t1_ParamLimits

0x8b60,	// (0x0001e3a2) main_cale_month_pane_ParamLimits

0x79e0,	// (0x0001d222) popup_toolbar_window_cp03_ParamLimits

0x79e0,	// (0x0001d222) popup_toolbar_window_cp03

0xa6c6,	// (0x0001ff08) main_image_pane_g2_ParamLimits

0xa6c6,	// (0x0001ff08) main_image_pane_g2

0xa6d2,	// (0x0001ff14) main_image_pane_g3_ParamLimits

0xa6d2,	// (0x0001ff14) main_image_pane_g3

0x0002,

0xf467,	// (0x00024ca9) main_image_pane_g_ParamLimits

0xf467,	// (0x00024ca9) main_image_pane_g

0x20f5,	// (0x00017937) main_image_pane_t1_ParamLimits

0xa6de,	// (0x0001ff20) main_image_pane_t2_ParamLimits

0xa6de,	// (0x0001ff20) main_image_pane_t2

0xa6f0,	// (0x0001ff32) main_image_pane_t3_ParamLimits

0xa6f0,	// (0x0001ff32) main_image_pane_t3

0xa702,	// (0x0001ff44) main_image_pane_t4_ParamLimits

0xa702,	// (0x0001ff44) main_image_pane_t4

0x0003,

0xf46e,	// (0x00024cb0) main_image_pane_t_ParamLimits

0xf46e,	// (0x00024cb0) main_image_pane_t

0xa714,	// (0x0001ff56) popup_image_details_window_cp01

0xa71c,	// (0x0001ff5e) popup_toobar_trans_pane_cp01_ParamLimits

0xa71c,	// (0x0001ff5e) popup_toobar_trans_pane_cp01

0x7954,	// (0x0001d196) popup_image_details_window_ParamLimits

0x7954,	// (0x0001d196) popup_image_details_window

0x7960,	// (0x0001d1a2) popup_image_focus_window

0x73c3,	// (0x0001cc05) camera2_autofocus_pane_ParamLimits

0x73c3,	// (0x0001cc05) camera2_autofocus_pane

0x082c,	// (0x0001606e) bg_popup_sub_pane_cp06

0x3796,	// (0x00018fd8) popup_image_focus_window_g1

0x379e,	// (0x00018fe0) popup_image_focus_window_g2

0x37a6,	// (0x00018fe8) popup_image_focus_window_g3

0x37ae,	// (0x00018ff0) popup_image_focus_window_g4

0x0003,

0xf689,	// (0x00024ecb) popup_image_focus_window_g

0x37b6,	// (0x00018ff8) popup_image_focus_window_t1

0x37c4,	// (0x00019006) popup_image_focus_window_t2

0x37d3,	// (0x00019015) popup_image_focus_window_t3

0x0002,

0xf692,	// (0x00024ed4) popup_image_focus_window_t

0x0f73,	// (0x000167b5) camera2_autofocus_pane_g1

0x087f,	// (0x000160c1) bg_tb_trans_pane_cp01

0x37e1,	// (0x00019023) popup_image_details_window_g1

0x37f4,	// (0x00019036) popup_image_details_window_g2

0x0002,

0xf6a4,	// (0x00024ee6) popup_image_details_window_g

0x381d,	// (0x0001905f) popup_image_details_window_t1

0x382f,	// (0x00019071) popup_image_details_window_t2

0x3848,	// (0x0001908a) popup_image_details_window_t3

0x385c,	// (0x0001909e) popup_image_details_window_t4

0x3877,	// (0x000190b9) popup_image_details_window_t5

0x0004,

0xf6ab,	// (0x00024eed) popup_image_details_window_t

0x0fe7,	// (0x00016829) bg_calc_paper_pane_ParamLimits

0x73d1,	// (0x0001cc13) grid_highlight_pane_cp013

0x7496,	// (0x0001ccd8) list_calc_pane_ParamLimits

0x74a8,	// (0x0001ccea) scroll_pane_cp024

0x1019,	// (0x0001685b) bg_calc_display_pane_ParamLimits

0x74b0,	// (0x0001ccf2) calc_display_pane_t1_ParamLimits

0x74c5,	// (0x0001cd07) calc_display_pane_t2_ParamLimits

0x74da,	// (0x0001cd1c) calc_display_pane_t3_ParamLimits

0xf0e6,	// (0x00024928) calc_display_pane_t_ParamLimits

0x753b,	// (0x0001cd7d) cell_calc_pane_g2

0x0001,

0xf103,	// (0x00024945) cell_calc_pane_g

0x7544,	// (0x0001cd86) cell_calc_pane_t1

0x10bc,	// (0x000168fe) grid_highlight_pane_cp02_ParamLimits

0x10d2,	// (0x00016914) toolbar_button_pane_cp01_ParamLimits

0x10d2,	// (0x00016914) toolbar_button_pane_cp01

0x213a,	// (0x0001797c) temp_image_control_pane_ParamLimits

0x213a,	// (0x0001797c) temp_image_control_pane

0x78dc,	// (0x0001d11e) main_mp3_pane

0x3891,	// (0x000190d3) temp_image_control_pane_g1_ParamLimits

0x3891,	// (0x000190d3) temp_image_control_pane_g1

0x389f,	// (0x000190e1) temp_image_control_pane_g2_ParamLimits

0x389f,	// (0x000190e1) temp_image_control_pane_g2

0x38b1,	// (0x000190f3) temp_image_control_pane_g3_ParamLimits

0x38b1,	// (0x000190f3) temp_image_control_pane_g3

0xae79,	// (0x000206bb) temp_image_control_pane_g4_ParamLimits

0xae79,	// (0x000206bb) temp_image_control_pane_g4

0x0003,

0xf6b6,	// (0x00024ef8) temp_image_control_pane_g_ParamLimits

0xf6b6,	// (0x00024ef8) temp_image_control_pane_g

0x3891,	// (0x000190d3) main_mp3_pane_g1

0xae8a,	// (0x000206cc) main_mp3_pane_g2

0x0007,

0xf6bf,	// (0x00024f01) main_mp3_pane_g

0x38e6,	// (0x00019128) main_mp3_pane_t1

0x0f81,	// (0x000167c3) main_camera_pane_g8_ParamLimits

0x0f81,	// (0x000167c3) main_camera_pane_g8

0x9059,	// (0x0001e89b) main_video_pane_g7_ParamLimits

0x9059,	// (0x0001e89b) main_video_pane_g7

0x7a73,	// (0x0001d2b5) main_camera2_pane_t7_ParamLimits

0x7a73,	// (0x0001d2b5) main_camera2_pane_t7

0x1449,	// (0x00016c8b) scroll_pane_cp025_ParamLimits

0x1449,	// (0x00016c8b) scroll_pane_cp025

0x145d,	// (0x00016c9f) scroll_pane_cp026_ParamLimits

0x145d,	// (0x00016c9f) scroll_pane_cp026

0x146c,	// (0x00016cae) wml_content_pane_ParamLimits

0x73d1,	// (0x0001cc13) main_touch_calib_pane

0xaf22,	// (0x00020764) main_touch_calib_pane_g1

0xaf2e,	// (0x00020770) main_touch_calib_pane_g2

0xaf3a,	// (0x0002077c) main_touch_calib_pane_g3

0xaf46,	// (0x00020788) main_touch_calib_pane_g4

0x0003,

0xf6dd,	// (0x00024f1f) main_touch_calib_pane_g

0xaf52,	// (0x00020794) main_touch_calib_pane_t1

0xaf67,	// (0x000207a9) main_touch_calib_pane_t2

0x0004,

0xf6e6,	// (0x00024f28) main_touch_calib_pane_t

0x1c46,	// (0x00017488) mup_progress_pane_cp02

0x1c7b,	// (0x000174bd) navi_pane_g1

0x1d06,	// (0x00017548) navi_pane_mp_t3

0x78dc,	// (0x0001d11e) main_mp3_pane_ParamLimits

0xabcd,	// (0x0002040f) navi_pane_ParamLimits

0x3891,	// (0x000190d3) main_mp3_pane_g1_ParamLimits

0xae8a,	// (0x000206cc) main_mp3_pane_g2_ParamLimits

0xae96,	// (0x000206d8) main_mp3_pane_g3_ParamLimits

0xae96,	// (0x000206d8) main_mp3_pane_g3

0xaea2,	// (0x000206e4) main_mp3_pane_g4_ParamLimits

0xaea2,	// (0x000206e4) main_mp3_pane_g4

0x0f73,	// (0x000167b5) main_mp3_pane_g5_ParamLimits

0x0f73,	// (0x000167b5) main_mp3_pane_g5

0x38c1,	// (0x00019103) main_mp3_pane_g6_ParamLimits

0x38c1,	// (0x00019103) main_mp3_pane_g6

0x38ce,	// (0x00019110) main_mp3_pane_g7_ParamLimits

0x38ce,	// (0x00019110) main_mp3_pane_g7

0x38da,	// (0x0001911c) main_mp3_pane_g8_ParamLimits

0x38da,	// (0x0001911c) main_mp3_pane_g8

0xf6bf,	// (0x00024f01) main_mp3_pane_g_ParamLimits

0xaeae,	// (0x000206f0) main_mp3_pane_t2

0xaebc,	// (0x000206fe) main_mp3_pane_t3

0x38f4,	// (0x00019136) main_mp3_pane_t4

0x3902,	// (0x00019144) main_mp3_pane_t5

0x0005,

0xf6d0,	// (0x00024f12) main_mp3_pane_t

0x3910,	// (0x00019152) mup_progress_pane_cp01

0x71e8,	// (0x0001ca2a) aid_zoom_text_secondary2

0x3723,	// (0x00018f65) list_cale_ev2_pane

0x372b,	// (0x00018f6d) scroll_pane_cp023_ParamLimits

0xafb2,	// (0x000207f4) field_cale_ev2_pane_ParamLimits

0xafb2,	// (0x000207f4) field_cale_ev2_pane

0x3918,	// (0x0001915a) field_cale_ev2_pane_g1_ParamLimits

0x3918,	// (0x0001915a) field_cale_ev2_pane_g1

0x3924,	// (0x00019166) field_cale_ev2_pane_g2_ParamLimits

0x3924,	// (0x00019166) field_cale_ev2_pane_g2

0x393c,	// (0x0001917e) field_cale_ev2_pane_g3_ParamLimits

0x393c,	// (0x0001917e) field_cale_ev2_pane_g3

0x0003,

0xf6f1,	// (0x00024f33) field_cale_ev2_pane_g_ParamLimits

0xf6f1,	// (0x00024f33) field_cale_ev2_pane_g

0x3960,	// (0x000191a2) field_cale_ev2_pane_t1_ParamLimits

0x3960,	// (0x000191a2) field_cale_ev2_pane_t1

0x3977,	// (0x000191b9) field_cale_ev2_pane_t2_ParamLimits

0x3977,	// (0x000191b9) field_cale_ev2_pane_t2

0x0001,

0xf6fa,	// (0x00024f3c) field_cale_ev2_pane_t_ParamLimits

0xf6fa,	// (0x00024f3c) field_cale_ev2_pane_t

0xa5c2,	// (0x0001fe04) main_postcard_pane_g5_ParamLimits

0xa5c2,	// (0x0001fe04) main_postcard_pane_g5

0xa5ce,	// (0x0001fe10) main_postcard_pane_g6_ParamLimits

0xa5ce,	// (0x0001fe10) main_postcard_pane_g6

0x0f8f,	// (0x000167d1) camera2_autofocus_pane_cp_ParamLimits

0x0f8f,	// (0x000167d1) camera2_autofocus_pane_cp

0x78dc,	// (0x0001d11e) main_mup3_pane

0xb001,	// (0x00020843) main_mup3_pane_g1_ParamLimits

0xb001,	// (0x00020843) main_mup3_pane_g1

0xb022,	// (0x00020864) main_mup3_pane_g2_ParamLimits

0xb022,	// (0x00020864) main_mup3_pane_g2

0xb08f,	// (0x000208d1) main_mup3_pane_g3_ParamLimits

0xb08f,	// (0x000208d1) main_mup3_pane_g3

0xb0ca,	// (0x0002090c) main_mup3_pane_g4_ParamLimits

0xb0ca,	// (0x0002090c) main_mup3_pane_g4

0xb105,	// (0x00020947) main_mup3_pane_g5_ParamLimits

0xb105,	// (0x00020947) main_mup3_pane_g5

0xb140,	// (0x00020982) main_mup3_pane_g6_ParamLimits

0xb140,	// (0x00020982) main_mup3_pane_g6

0x0f81,	// (0x000167c3) main_mup3_pane_g7_ParamLimits

0x0f81,	// (0x000167c3) main_mup3_pane_g7

0x0007,

0xf70a,	// (0x00024f4c) main_mup3_pane_g_ParamLimits

0xf70a,	// (0x00024f4c) main_mup3_pane_g

0xb1ae,	// (0x000209f0) main_mup3_pane_t1_ParamLimits

0xb1ae,	// (0x000209f0) main_mup3_pane_t1

0xb20f,	// (0x00020a51) main_mup3_pane_t2_ParamLimits

0xb20f,	// (0x00020a51) main_mup3_pane_t2

0xb2ca,	// (0x00020b0c) main_mup3_pane_t4_ParamLimits

0xb2ca,	// (0x00020b0c) main_mup3_pane_t4

0xb310,	// (0x00020b52) main_mup3_pane_t5_ParamLimits

0xb310,	// (0x00020b52) main_mup3_pane_t5

0xb3b4,	// (0x00020bf6) main_mup3_pane_t6_ParamLimits

0xb3b4,	// (0x00020bf6) main_mup3_pane_t6

0x0005,

0xf71b,	// (0x00024f5d) main_mup3_pane_t_ParamLimits

0xf71b,	// (0x00024f5d) main_mup3_pane_t

0xb45c,	// (0x00020c9e) mup3_progress_pane_ParamLimits

0xb45c,	// (0x00020c9e) mup3_progress_pane

0xb4c0,	// (0x00020d02) popup_mup3_control_window_ParamLimits

0xb4c0,	// (0x00020d02) popup_mup3_control_window

0x398c,	// (0x000191ce) popup_mup3_text_window

0xb4d9,	// (0x00020d1b) mup3_progress_pane_t1

0xb4f7,	// (0x00020d39) mup3_progress_pane_t2

0x3994,	// (0x000191d6) mup3_progress_pane_t3

0x0002,

0xf728,	// (0x00024f6a) mup3_progress_pane_t

0x39b1,	// (0x000191f3) mup_progress_pane_cp03

0x082c,	// (0x0001606e) bg_tb_trans_pane_cp04

0xb515,	// (0x00020d57) mup3_volume_pane

0xb51d,	// (0x00020d5f) popup_mup3_control_window_g1

0xb526,	// (0x00020d68) mup3_volume_pane_g1

0xb52f,	// (0x00020d71) mup3_volume_pane_g2

0xb538,	// (0x00020d7a) mup3_volume_pane_g3

0x0002,

0xf72f,	// (0x00024f71) mup3_volume_pane_g

0x082c,	// (0x0001606e) bg_tb_trans_pane_cp03

0x39c1,	// (0x00019203) popup_mup3_text_window_g1

0x39c9,	// (0x0001920b) popup_mup3_text_window_t1

0x109d,	// (0x000168df) list_calc_item_pane_g1_ParamLimits

0x341c,	// (0x00018c5e) mup_volume_pane_cp_g1

0xaf7c,	// (0x000207be) main_touch_calib_pane_t3

0xaf8e,	// (0x000207d0) main_touch_calib_pane_t4

0xafa0,	// (0x000207e2) main_touch_calib_pane_t5

0x71a8,	// (0x0001c9ea) aid_cell_size_toolbar2

0x71b0,	// (0x0001c9f2) aid_popup3_width_pane

0x71e8,	// (0x0001ca2a) aid_zoom_text_msg_primary

0x12b0,	// (0x00016af2) vorec_t7

0x1061,	// (0x000168a3) bg_calc_paper_pane_g1_ParamLimits

0x1079,	// (0x000168bb) bg_calc_paper_pane_g2_ParamLimits

0x106d,	// (0x000168af) bg_calc_paper_pane_g3_ParamLimits

0x1091,	// (0x000168d3) bg_calc_paper_pane_g4_ParamLimits

0x1085,	// (0x000168c7) bg_calc_paper_pane_g5_ParamLimits

0x8a51,	// (0x0001e293) bg_calc_paper_pane_g6_ParamLimits

0x8a60,	// (0x0001e2a2) bg_calc_paper_pane_g7_ParamLimits

0x8a6f,	// (0x0001e2b1) bg_calc_paper_pane_g8_ParamLimits

0xf0ed,	// (0x0002492f) bg_calc_paper_pane_g_ParamLimits

0x8a7e,	// (0x0001e2c0) calc_bg_paper_pane_g9_ParamLimits

0x0f8f,	// (0x000167d1) image_qvga_pane_ParamLimits

0x0f8f,	// (0x000167d1) image_qvga_pane

0x0ef9,	// (0x0001673b) bg_popup_sub_pane_cp04_ParamLimits

0x2071,	// (0x000178b3) popup_mup_playback_window_g1_ParamLimits

0x207d,	// (0x000178bf) popup_mup_playback_window_t1_ParamLimits

0x2092,	// (0x000178d4) popup_mup_playback_window_t2_ParamLimits

0xf462,	// (0x00024ca4) popup_mup_playback_window_t_ParamLimits

0x0f73,	// (0x000167b5) main_mup2_pane_g3_ParamLimits

0x0f73,	// (0x000167b5) main_mup2_pane_g3

0x921c,	// (0x0001ea5e) popup_toolbar_window_cp04

0x2473,	// (0x00017cb5) popup_call2_audio_second_window_g3_ParamLimits

0x2473,	// (0x00017cb5) popup_call2_audio_second_window_g3

0x288b,	// (0x000180cd) popup_call2_audio_first_window_g4_ParamLimits

0x288b,	// (0x000180cd) popup_call2_audio_first_window_g4

0x2eb2,	// (0x000186f4) popup_call2_audio_in_window_g4_ParamLimits

0x2eb2,	// (0x000186f4) popup_call2_audio_in_window_g4

0xa6b9,	// (0x0001fefb) aid_area_sk_bg_cut_ParamLimits

0xa6b9,	// (0x0001fefb) aid_area_sk_bg_cut

0x20a7,	// (0x000178e9) aid_area_sk_bg_cut_2_ParamLimits

0x20a7,	// (0x000178e9) aid_area_sk_bg_cut_2

0x082c,	// (0x0001606e) aid_placing_details_win

0x082c,	// (0x0001606e) aid_placing_details_win_2

0x0f73,	// (0x000167b5) camera2_autofocus_pane_g1_ParamLimits

0x736d,	// (0x0001cbaf) popup_fixed_preview_cale_window_ParamLimits

0x736d,	// (0x0001cbaf) popup_fixed_preview_cale_window

0x1d97,	// (0x000175d9) navi_slider_pane_g3

0x1d8e,	// (0x000175d0) navi_slider_pane_g4

0x1d85,	// (0x000175c7) navi_slider_pane_g5

0x1d97,	// (0x000175d9) navi_slider_pane_g6

0x7857,	// (0x0001d099) navi_slider_pane_g7

0x1ee2,	// (0x00017724) mup_scale_pane_g3

0x1eeb,	// (0x0001772d) mup_scale_pane_g4

0x1ef4,	// (0x00017736) mup_scale_pane_g5

0xa4b8,	// (0x0001fcfa) mup_scale_pane_g6

0xa4c1,	// (0x0001fd03) mup_scale_pane_g7

0x4b24,	// (0x0001a366) cams2_slider_pane_g3

0x4b24,	// (0x0001a366) cams2_slider_pane_g4

0x4b24,	// (0x0001a366) cams2_slider_pane_g5

0x4b24,	// (0x0001a366) cams2_slider_pane_g6

0x4b24,	// (0x0001a366) cams2_slider_pane_g7

0x12f6,	// (0x00016b38) camera2_autofocus_pane_cp_g1

0x31d8,	// (0x00018a1a) bg_popup_preview_window_pane_cp02_ParamLimits

0x31d8,	// (0x00018a1a) bg_popup_preview_window_pane_cp02

0x39d7,	// (0x00019219) list_fp_cale_pane_ParamLimits

0x39d7,	// (0x00019219) list_fp_cale_pane

0x39e3,	// (0x00019225) popup_fixed_preview_cale_window_t1_ParamLimits

0x39e3,	// (0x00019225) popup_fixed_preview_cale_window_t1

0xb541,	// (0x00020d83) popup_fixed_preview_cale_window_t2_ParamLimits

0xb541,	// (0x00020d83) popup_fixed_preview_cale_window_t2

0xb556,	// (0x00020d98) popup_fixed_preview_cale_window_t3_ParamLimits

0xb556,	// (0x00020d98) popup_fixed_preview_cale_window_t3

0x0002,

0xf736,	// (0x00024f78) popup_fixed_preview_cale_window_t_ParamLimits

0xf736,	// (0x00024f78) popup_fixed_preview_cale_window_t

0xb56b,	// (0x00020dad) list_single_fp_cale_pane_ParamLimits

0xb56b,	// (0x00020dad) list_single_fp_cale_pane

0x3a01,	// (0x00019243) list_single_fp_cale_pane_g1_ParamLimits

0x3a01,	// (0x00019243) list_single_fp_cale_pane_g1

0x3a0d,	// (0x0001924f) list_single_fp_cale_pane_g2_ParamLimits

0x3a0d,	// (0x0001924f) list_single_fp_cale_pane_g2

0x0002,

0xf73d,	// (0x00024f7f) list_single_fp_cale_pane_g_ParamLimits

0xf73d,	// (0x00024f7f) list_single_fp_cale_pane_g

0x3a26,	// (0x00019268) list_single_fp_cale_pane_t1_ParamLimits

0x3a26,	// (0x00019268) list_single_fp_cale_pane_t1

0x3a38,	// (0x0001927a) list_single_fp_cale_pane_t2_ParamLimits

0x3a38,	// (0x0001927a) list_single_fp_cale_pane_t2

0x0001,

0xf744,	// (0x00024f86) list_single_fp_cale_pane_t_ParamLimits

0xf744,	// (0x00024f86) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x73d1,	// (0x0001cc13) main_dialer_pane

0xb57b,	// (0x00020dbd) aid_cell_size_keypad

0x082c,	// (0x0001606e) dialer_ne_pane

0x082c,	// (0x0001606e) grid_dialer_command_1_pane

0x082c,	// (0x0001606e) grid_dialer_command_2_pane

0x082c,	// (0x0001606e) grid_dialer_keypad_pane

0x3343,	// (0x00018b85) bg_popup_call_pane_cp06_ParamLimits

0x3343,	// (0x00018b85) bg_popup_call_pane_cp06

0x3343,	// (0x00018b85) dialer_ne_clear_pane_ParamLimits

0x3343,	// (0x00018b85) dialer_ne_clear_pane

0x12f6,	// (0x00016b38) dialer_ne_pane_g1

0x1e5e,	// (0x000176a0) dialer_ne_pane_t1_ParamLimits

0x1e5e,	// (0x000176a0) dialer_ne_pane_t1

0x3c46,	// (0x00019488) dialer_ne_pane_t2_ParamLimits

0x3c46,	// (0x00019488) dialer_ne_pane_t2

0xb585,	// (0x00020dc7) dialer_ne_pane_t3_ParamLimits

0xb585,	// (0x00020dc7) dialer_ne_pane_t3

0x0002,

0xf749,	// (0x00024f8b) dialer_ne_pane_t_ParamLimits

0xf749,	// (0x00024f8b) dialer_ne_pane_t

0xb585,	// (0x00020dc7) dialer_ne_pane_t3_copy1_ParamLimits

0xb585,	// (0x00020dc7) dialer_ne_pane_t3_copy1

0xb5a7,	// (0x00020de9) cell_dialer_keypad_pane_ParamLimits

0xb5a7,	// (0x00020de9) cell_dialer_keypad_pane

0xb5bc,	// (0x00020dfe) cell_dialer_command_1_pane_ParamLimits

0xb5bc,	// (0x00020dfe) cell_dialer_command_1_pane

0xb5cd,	// (0x00020e0f) cell_dialer_command_2_pane_ParamLimits

0xb5cd,	// (0x00020e0f) cell_dialer_command_2_pane

0x087f,	// (0x000160c1) bg_button_pane_cp02_ParamLimits

0x087f,	// (0x000160c1) bg_button_pane_cp02

0x0f73,	// (0x000167b5) cell_dialer_keypad_pane_g1_ParamLimits

0x0f73,	// (0x000167b5) cell_dialer_keypad_pane_g1

0x087f,	// (0x000160c1) bg_button_pane_cp03_ParamLimits

0x087f,	// (0x000160c1) bg_button_pane_cp03

0x0f73,	// (0x000167b5) cell_dialer_command_1_pane_g1_ParamLimits

0x0f73,	// (0x000167b5) cell_dialer_command_1_pane_g1

0x082c,	// (0x0001606e) bg_button_pane_cp04

0x12f6,	// (0x00016b38) cell_dialer_command_2_pane_g1

0x082c,	// (0x0001606e) bg_button_pane_cp06

0x12f6,	// (0x00016b38) dialer_ne_clear_pane_g1

0x1c87,	// (0x000174c9) navi_pane_g2

0xa2c3,	// (0x0001fb05) navi_pane_g3

0x0002,

0xf365,	// (0x00024ba7) navi_pane_g

0x1d14,	// (0x00017556) navi_pane_mv_g2

0x1d3b,	// (0x0001757d) navi_pane_mv_g5

0xa2e0,	// (0x0001fb22) navi_pane_mv_t1

0x1019,	// (0x0001685b) main_clock2_pane

0xb610,	// (0x00020e52) main_clock2_list_pane_ParamLimits

0xb610,	// (0x00020e52) main_clock2_list_pane

0xb636,	// (0x00020e78) main_clock2_pane_t1_ParamLimits

0xb636,	// (0x00020e78) main_clock2_pane_t1

0xb656,	// (0x00020e98) main_clock2_pane_t2_ParamLimits

0xb656,	// (0x00020e98) main_clock2_pane_t2

0x0004,

0xf755,	// (0x00024f97) main_clock2_pane_t_ParamLimits

0xf755,	// (0x00024f97) main_clock2_pane_t

0xb6af,	// (0x00020ef1) popup_clock_analogue_window_cp03_ParamLimits

0xb6af,	// (0x00020ef1) popup_clock_analogue_window_cp03

0xb6cd,	// (0x00020f0f) popup_clock_digital_window_cp02_ParamLimits

0xb6cd,	// (0x00020f0f) popup_clock_digital_window_cp02

0xb709,	// (0x00020f4b) main_clock2_list_single_pane_ParamLimits

0xb709,	// (0x00020f4b) main_clock2_list_single_pane

0x127e,	// (0x00016ac0) list_highlight_pane_cp05

0x3a9b,	// (0x000192dd) main_clock2_list_single_pane_t1

0x921c,	// (0x0001ea5e) popup_toolbar_window_cp04_ParamLimits

0x0f81,	// (0x000167c3) camera2_autofocus_pane_g2_ParamLimits

0x0f81,	// (0x000167c3) camera2_autofocus_pane_g2

0x0f81,	// (0x000167c3) camera2_autofocus_pane_g3_ParamLimits

0x0f81,	// (0x000167c3) camera2_autofocus_pane_g3

0x0f81,	// (0x000167c3) camera2_autofocus_pane_g4_ParamLimits

0x0f81,	// (0x000167c3) camera2_autofocus_pane_g4

0x0f81,	// (0x000167c3) camera2_autofocus_pane_g5_ParamLimits

0x0f81,	// (0x000167c3) camera2_autofocus_pane_g5

0x0004,

0xf699,	// (0x00024edb) camera2_autofocus_pane_g_ParamLimits

0xf699,	// (0x00024edb) camera2_autofocus_pane_g

0xafc8,	// (0x0002080a) camera2_autofocus_pane_cp_g2

0xafd0,	// (0x00020812) camera2_autofocus_pane_cp_g3

0xafd8,	// (0x0002081a) camera2_autofocus_pane_cp_g4

0xafe0,	// (0x00020822) camera2_autofocus_pane_cp_g5

0x0004,

0xf6ff,	// (0x00024f41) camera2_autofocus_pane_cp_g

0x082c,	// (0x0001606e) popup_dialer_spcha_window

0x082c,	// (0x0001606e) bg_popup_sub_pane_cp07

0x082c,	// (0x0001606e) list_spcha_pane

0x3aa9,	// (0x000192eb) list_single_spcha_pane_ParamLimits

0x3aa9,	// (0x000192eb) list_single_spcha_pane

0x082c,	// (0x0001606e) list_highlight_pane_cp06

0x3180,	// (0x000189c2) list_single_spcha_pane_t1

0x2c5c,	// (0x0001849e) popup_call2_audio_out_window_g4_ParamLimits

0x2c5c,	// (0x0001849e) popup_call2_audio_out_window_g4

0x73d1,	// (0x0001cc13) main_imed2_pane

0x7968,	// (0x0001d1aa) popup_imed_adjust2_window

0x7979,	// (0x0001d1bb) popup_imed_trans_window_ParamLimits

0x7979,	// (0x0001d1bb) popup_imed_trans_window

0x34ef,	// (0x00018d31) popup_blid_sat_info2_window_t1

0x34fd,	// (0x00018d3f) popup_blid_sat_info2_window_t2

0x000a,

0xf62e,	// (0x00024e70) popup_blid_sat_info2_window_t

0xb73b,	// (0x00020f7d) aid_size_cell_colour_35

0xb752,	// (0x00020f94) aid_size_cell_colour_112

0xb769,	// (0x00020fab) aid_size_cell_effect

0x087f,	// (0x000160c1) bg_tb_trans_pane_cp02

0x1857,	// (0x00017099) heading_imed_pane

0xb783,	// (0x00020fc5) listscroll_imed_pane

0x3abb,	// (0x000192fd) heading_imed_pane_g1

0x3ac3,	// (0x00019305) heading_imed_pane_t1

0x3ad1,	// (0x00019313) grid_imed_colour_35_pane_ParamLimits

0x3ad1,	// (0x00019313) grid_imed_colour_35_pane

0xb78f,	// (0x00020fd1) grid_imed_effect_pane

0x3ae4,	// (0x00019326) list_imed_aspect_pane

0xb79b,	// (0x00020fdd) scroll_pane_cp027_ParamLimits

0xb79b,	// (0x00020fdd) scroll_pane_cp027

0xb7a7,	// (0x00020fe9) cell_imed_effect_pane_ParamLimits

0xb7a7,	// (0x00020fe9) cell_imed_effect_pane

0x3aec,	// (0x0001932e) cell_imed_colour_pane_ParamLimits

0x3aec,	// (0x0001932e) cell_imed_colour_pane

0x3b26,	// (0x00019368) cell_imed_colour_pane_g1_ParamLimits

0x3b26,	// (0x00019368) cell_imed_colour_pane_g1

0x3b37,	// (0x00019379) hgihlgiht_grid_pane_cp016_ParamLimits

0x3b37,	// (0x00019379) hgihlgiht_grid_pane_cp016

0xb7bd,	// (0x00020fff) cell_imed_effect_pane_g1

0xb7c5,	// (0x00021007) grid_highlight_pane_cp017

0x3b48,	// (0x0001938a) list_imed_single_pane_ParamLimits

0x3b48,	// (0x0001938a) list_imed_single_pane

0x082c,	// (0x0001606e) list_highlight_pane_cp07

0x3b5b,	// (0x0001939d) list_imed_aspect_pane_comp1_t1

0x1e72,	// (0x000176b4) bg_tb_trans_pane_cp05

0x3b7b,	// (0x000193bd) popup_imed_adjust2_window_g1

0x3ba2,	// (0x000193e4) popup_imed_adjust2_window_t1

0x3bba,	// (0x000193fc) slider_imed_adjust_pane

0x3bce,	// (0x00019410) slider_imed_adjust_pane_g1

0x3bde,	// (0x00019420) slider_imed_adjust_pane_g2

0x3bee,	// (0x00019430) slider_imed_adjust_pane_g3

0x3bff,	// (0x00019441) slider_imed_adjust_pane_g4

0x0003,

0xf772,	// (0x00024fb4) slider_imed_adjust_pane_g

0xb7ce,	// (0x00021010) aid_size_cell_clipart2

0xb7da,	// (0x0002101c) grid_imed_clipart_pane

0x3c10,	// (0x00019452) scroll_pane_cp031

0xb7e4,	// (0x00021026) cell_imed_clipart_pane_ParamLimits

0xb7e4,	// (0x00021026) cell_imed_clipart_pane

0xb7fb,	// (0x0002103d) cell_imed_clipart_pane_g1

0x082c,	// (0x0001606e) grid_highlight_pane_cp014

0xb61c,	// (0x00020e5e) main_clock2_pane_g1_ParamLimits

0xb61c,	// (0x00020e5e) main_clock2_pane_g1

0xb6e5,	// (0x00020f27) aid_call2_pane_cp10

0xb6f7,	// (0x00020f39) aid_call_pane_cp10

0x1c16,	// (0x00017458) popup_clock_analogue_window_cp10_g1

0x1c16,	// (0x00017458) popup_clock_analogue_window_cp10_g2

0x7af7,	// (0x0001d339) popup_clock_analogue_window_cp10_g3

0x7af7,	// (0x0001d339) popup_clock_analogue_window_cp10_g4

0x1c16,	// (0x00017458) popup_clock_analogue_window_cp10_g5

0x0004,

0xf760,	// (0x00024fa2) popup_clock_analogue_window_cp10_g

0x7b09,	// (0x0001d34b) popup_clock_analogue_window_cp10_t1

0x7b28,	// (0x0001d36a) clock_digital_number_pane_cp10_ParamLimits

0x7b28,	// (0x0001d36a) clock_digital_number_pane_cp10

0x7b40,	// (0x0001d382) clock_digital_number_pane_cp11_ParamLimits

0x7b40,	// (0x0001d382) clock_digital_number_pane_cp11

0x7b58,	// (0x0001d39a) clock_digital_number_pane_cp12_ParamLimits

0x7b58,	// (0x0001d39a) clock_digital_number_pane_cp12

0x7b70,	// (0x0001d3b2) clock_digital_number_pane_cp13_ParamLimits

0x7b70,	// (0x0001d3b2) clock_digital_number_pane_cp13

0x7b88,	// (0x0001d3ca) clock_digital_separator_pane_cp10_ParamLimits

0x7b88,	// (0x0001d3ca) clock_digital_separator_pane_cp10

0xb71b,	// (0x00020f5d) popup_clock_digital_window_cp02_t1_ParamLimits

0xb71b,	// (0x00020f5d) popup_clock_digital_window_cp02_t1

0x0ef1,	// (0x00016733) clock_digital_number_pane_cp10_g1

0x0ef1,	// (0x00016733) clock_digital_number_pane_cp10_g2

0x0001,

0xf77b,	// (0x00024fbd) clock_digital_number_pane_cp10_g

0x0ef1,	// (0x00016733) clock_digital_separator_pane_cp10_g1

0x0ef1,	// (0x00016733) clock_digital_separator_pane_g2_cp10

0x1d43,	// (0x00017585) navi_pane_vded_g4

0x1d4c,	// (0x0001758e) navi_pane_vded_g5

0x1d55,	// (0x00017597) navi_pane_vded_t1

0x73d1,	// (0x0001cc13) main_vded_pane

0xb804,	// (0x00021046) main_vded_pane_g1

0xb80c,	// (0x0002104e) main_vded_pane_g2

0xb814,	// (0x00021056) main_vded_pane_g3

0x0002,

0xf780,	// (0x00024fc2) main_vded_pane_g

0xb81c,	// (0x0002105e) main_vded_pane_t1

0xb82a,	// (0x0002106c) main_vded_pane_t2

0x0001,

0xf787,	// (0x00024fc9) main_vded_pane_t

0xb838,	// (0x0002107a) vded_slider_pane

0xb840,	// (0x00021082) vded_video_pane

0x3c18,	// (0x0001945a) vded_video_pane_g1

0xb848,	// (0x0002108a) vded_video_pane_g2

0x12f6,	// (0x00016b38) vded_video_pane_g3

0x0002,

0xf78c,	// (0x00024fce) vded_video_pane_g

0x3c22,	// (0x00019464) vded_slider_pane_g1

0x341c,	// (0x00018c5e) vded_slider_pane_g2

0x3c2b,	// (0x0001946d) vded_slider_pane_g3

0x3c34,	// (0x00019476) vded_slider_pane_g4

0x3c3d,	// (0x0001947f) vded_slider_pane_g5

0x0004,

0xf793,	// (0x00024fd5) vded_slider_pane_g

0xb4b4,	// (0x00020cf6) mup3_rocker_pane_ParamLimits

0xb4b4,	// (0x00020cf6) mup3_rocker_pane

0xb851,	// (0x00021093) mup3_control_keys_pane_g1

0xb859,	// (0x0002109b) mup3_control_keys_pane_g2

0xb861,	// (0x000210a3) mup3_control_keys_pane_g3

0xb869,	// (0x000210ab) mup3_control_keys_pane_g4

0x0003,

0xf79e,	// (0x00024fe0) mup3_control_keys_pane_g

0x7391,	// (0x0001cbd3) popup_toolbar2_fixed_window_cp01_ParamLimits

0x7391,	// (0x0001cbd3) popup_toolbar2_fixed_window_cp01

0xb4cc,	// (0x00020d0e) popup_toolbar2_fixed_window_cp02_ParamLimits

0xb4cc,	// (0x00020d0e) popup_toolbar2_fixed_window_cp02

0x25e5,	// (0x00017e27) popup_call2_audio_second_window_t4_ParamLimits

0x25e5,	// (0x00017e27) popup_call2_audio_second_window_t4

0x2b21,	// (0x00018363) popup_call2_audio_first_window_t6_ParamLimits

0x2b21,	// (0x00018363) popup_call2_audio_first_window_t6

0x2d5f,	// (0x000185a1) popup_call2_audio_out_window_t6_ParamLimits

0x2d5f,	// (0x000185a1) popup_call2_audio_out_window_t6

0x73d1,	// (0x0001cc13) main_vitu_pane

0x0f8f,	// (0x000167d1) aid_size_cell_itu_ParamLimits

0x0f8f,	// (0x000167d1) aid_size_cell_itu

0x0f8f,	// (0x000167d1) bg_popup_window_pane_cp08_ParamLimits

0x0f8f,	// (0x000167d1) bg_popup_window_pane_cp08

0x0f8f,	// (0x000167d1) field_vitu_entry_pane_ParamLimits

0x0f8f,	// (0x000167d1) field_vitu_entry_pane

0x0f8f,	// (0x000167d1) grid_vitu_function_pane_ParamLimits

0x0f8f,	// (0x000167d1) grid_vitu_function_pane

0x0f8f,	// (0x000167d1) grid_vitu_itu_pane_ParamLimits

0x0f8f,	// (0x000167d1) grid_vitu_itu_pane

0xb879,	// (0x000210bb) cell_vitu_itu_pane_ParamLimits

0xb879,	// (0x000210bb) cell_vitu_itu_pane

0x0f8f,	// (0x000167d1) cell_vitu_function_pane_ParamLimits

0x0f8f,	// (0x000167d1) cell_vitu_function_pane

0x087f,	// (0x000160c1) bg_popup_sub_pane_cp08_ParamLimits

0x087f,	// (0x000160c1) bg_popup_sub_pane_cp08

0x12c8,	// (0x00016b0a) field_vitu_entry_pane_t1_ParamLimits

0x12c8,	// (0x00016b0a) field_vitu_entry_pane_t1

0x3c46,	// (0x00019488) field_vitu_entry_pane_t2_ParamLimits

0x3c46,	// (0x00019488) field_vitu_entry_pane_t2

0x0001,

0xf7ac,	// (0x00024fee) field_vitu_entry_pane_t_ParamLimits

0xf7ac,	// (0x00024fee) field_vitu_entry_pane_t

0x3343,	// (0x00018b85) bg_button_pane_cp05_ParamLimits

0x3343,	// (0x00018b85) bg_button_pane_cp05

0x3c63,	// (0x000194a5) cell_vitu_itu_pane_g1

0x1e4a,	// (0x0001768c) cell_vitu_itu_pane_t1_ParamLimits

0x1e4a,	// (0x0001768c) cell_vitu_itu_pane_t1

0x1e4a,	// (0x0001768c) cell_vitu_itu_pane_t2_ParamLimits

0x1e4a,	// (0x0001768c) cell_vitu_itu_pane_t2

0x0002,

0xf7b1,	// (0x00024ff3) cell_vitu_itu_pane_t_ParamLimits

0xf7b1,	// (0x00024ff3) cell_vitu_itu_pane_t

0x082c,	// (0x0001606e) bg_button_pane_cp07

0x12f6,	// (0x00016b38) cell_vitu_function_pane_g1

0x748e,	// (0x0001ccd0) main_calc_pane_g1

0x71e0,	// (0x0001ca22) aid_visual_content_pane

0x73d1,	// (0x0001cc13) main_vradio_pane

0x0f81,	// (0x000167c3) main_vradio_pane_g1_ParamLimits

0x0f81,	// (0x000167c3) main_vradio_pane_g1

0x0f81,	// (0x000167c3) main_vradio_pane_g2_ParamLimits

0x0f81,	// (0x000167c3) main_vradio_pane_g2

0x0001,

0xf7b8,	// (0x00024ffa) main_vradio_pane_g_ParamLimits

0xf7b8,	// (0x00024ffa) main_vradio_pane_g

0x1e5e,	// (0x000176a0) main_vradio_pane_t1_ParamLimits

0x1e5e,	// (0x000176a0) main_vradio_pane_t1

0x1e5e,	// (0x000176a0) main_vradio_pane_t2_ParamLimits

0x1e5e,	// (0x000176a0) main_vradio_pane_t2

0x1e5e,	// (0x000176a0) main_vradio_pane_t3_ParamLimits

0x1e5e,	// (0x000176a0) main_vradio_pane_t3

0x0002,

0xf7bd,	// (0x00024fff) main_vradio_pane_t_ParamLimits

0xf7bd,	// (0x00024fff) main_vradio_pane_t

0x0f8f,	// (0x000167d1) vradio_rocker_control_pane_ParamLimits

0x0f8f,	// (0x000167d1) vradio_rocker_control_pane

0x0f8f,	// (0x000167d1) vradio_station_info_pane_ParamLimits

0x0f8f,	// (0x000167d1) vradio_station_info_pane

0x087f,	// (0x000160c1) vradio_frequency_info_pane_ParamLimits

0x087f,	// (0x000160c1) vradio_frequency_info_pane

0x12f6,	// (0x00016b38) vradio_station_info_pane_g1

0x1e4a,	// (0x0001768c) vradio_station_info_pane_t1_ParamLimits

0x1e4a,	// (0x0001768c) vradio_station_info_pane_t1

0x1e5e,	// (0x000176a0) vradio_station_info_pane_t2_ParamLimits

0x1e5e,	// (0x000176a0) vradio_station_info_pane_t2

0x0001,

0xf7c4,	// (0x00025006) vradio_station_info_pane_t_ParamLimits

0xf7c4,	// (0x00025006) vradio_station_info_pane_t

0x082c,	// (0x0001606e) vradio_tuning_pane

0xb887,	// (0x000210c9) vradio_rocker_control_pane_g1

0x3c7f,	// (0x000194c1) vradio_rocker_control_pane_g2

0xb88f,	// (0x000210d1) vradio_rocker_control_pane_g3

0xb897,	// (0x000210d9) vradio_rocker_control_pane_g4

0xb89f,	// (0x000210e1) vradio_rocker_control_pane_g5

0x0004,

0xf7c9,	// (0x0002500b) vradio_rocker_control_pane_g

0x12f6,	// (0x00016b38) vradio_frequency_info_pane_g1

0x12c8,	// (0x00016b0a) vradio_frequency_info_pane_t1_ParamLimits

0x12c8,	// (0x00016b0a) vradio_frequency_info_pane_t1

0xb8a7,	// (0x000210e9) vradio_tuning_pane_g1

0xb8b0,	// (0x000210f2) vradio_tuning_pane_t1

0x71f8,	// (0x0001ca3a) area_side_right_pane_ParamLimits

0x71f8,	// (0x0001ca3a) area_side_right_pane

0x319f,	// (0x000189e1) status_small_pane_g1

0x31a7,	// (0x000189e9) status_small_pane_g2

0x31b0,	// (0x000189f2) status_small_pane_g3

0x31b9,	// (0x000189fb) status_small_pane_g4

0x0003,

0xf590,	// (0x00024dd2) status_small_pane_g

0x31c2,	// (0x00018a04) status_small_pane_t1

0x73d1,	// (0x0001cc13) main_video3_pane

0x3c87,	// (0x000194c9) cams_zoom_vslider_pane

0x3c8f,	// (0x000194d1) image3_wide_pane_ParamLimits

0x3c8f,	// (0x000194d1) image3_wide_pane

0x3ca9,	// (0x000194eb) image3_wide_small_pane

0x3cb3,	// (0x000194f5) main_video3_pane_g1_ParamLimits

0x3cb3,	// (0x000194f5) main_video3_pane_g1

0x3ccf,	// (0x00019511) main_video3_pane_g2_ParamLimits

0x3ccf,	// (0x00019511) main_video3_pane_g2

0x0001,

0xf7d4,	// (0x00025016) main_video3_pane_g_ParamLimits

0xf7d4,	// (0x00025016) main_video3_pane_g

0x3ceb,	// (0x0001952d) main_video3_pane_t1_ParamLimits

0x3ceb,	// (0x0001952d) main_video3_pane_t1

0x3d16,	// (0x00019558) main_video3_pane_t2_ParamLimits

0x3d16,	// (0x00019558) main_video3_pane_t2

0x3d41,	// (0x00019583) main_video3_pane_t3_ParamLimits

0x3d41,	// (0x00019583) main_video3_pane_t3

0x0002,

0xf7d9,	// (0x0002501b) main_video3_pane_t_ParamLimits

0xf7d9,	// (0x0002501b) main_video3_pane_t

0x3d6c,	// (0x000195ae) cams_zoom_vslider_pane_g1

0x3d75,	// (0x000195b7) cams_zoom_vslider_pane_g2

0x0001,

0xf7e0,	// (0x00025022) cams_zoom_vslider_pane_g

0x3d7d,	// (0x000195bf) small_slider_vertical_pane

0x12f6,	// (0x00016b38) small_slider_vertical_pane_g1

0x12f6,	// (0x00016b38) small_slider_vertical_pane_g2

0x3d85,	// (0x000195c7) small_slider_vertical_pane_g3

0x0002,

0xf7e5,	// (0x00025027) small_slider_vertical_pane_g

0x73d1,	// (0x0001cc13) main_hwr_training_pane

0x3d8e,	// (0x000195d0) hwr_training_instruct_pane_ParamLimits

0x3d8e,	// (0x000195d0) hwr_training_instruct_pane

0xb8bf,	// (0x00021101) hwr_training_navi_pane_ParamLimits

0xb8bf,	// (0x00021101) hwr_training_navi_pane

0xb8d3,	// (0x00021115) hwr_training_write_pane_ParamLimits

0xb8d3,	// (0x00021115) hwr_training_write_pane

0x082c,	// (0x0001606e) bg_frame_shadow_pane

0x3dbd,	// (0x000195ff) hwr_training_write_pane_g1

0x3dc5,	// (0x00019607) hwr_training_write_pane_g2

0x3dcd,	// (0x0001960f) hwr_training_write_pane_g3

0x3dd5,	// (0x00019617) hwr_training_write_pane_g4

0x3ddd,	// (0x0001961f) hwr_training_write_pane_g5

0x3de5,	// (0x00019627) hwr_training_write_pane_g6

0x3ded,	// (0x0001962f) hwr_training_write_pane_g7

0x0006,

0xf7ec,	// (0x0002502e) hwr_training_write_pane_g

0x7ba0,	// (0x0001d3e2) hwr_training_navi_pane_g1_ParamLimits

0x7ba0,	// (0x0001d3e2) hwr_training_navi_pane_g1

0x7bb2,	// (0x0001d3f4) hwr_training_navi_pane_g2_ParamLimits

0x7bb2,	// (0x0001d3f4) hwr_training_navi_pane_g2

0x7bc4,	// (0x0001d406) hwr_training_navi_pane_g3_ParamLimits

0x7bc4,	// (0x0001d406) hwr_training_navi_pane_g3

0x7bd4,	// (0x0001d416) hwr_training_navi_pane_g4_ParamLimits

0x7bd4,	// (0x0001d416) hwr_training_navi_pane_g4

0x0004,

0xf7fb,	// (0x0002503d) hwr_training_navi_pane_g_ParamLimits

0xf7fb,	// (0x0002503d) hwr_training_navi_pane_g

0x7bee,	// (0x0001d430) hwr_training_navi_pane_t1

0xb901,	// (0x00021143) list_single_hwr_training_instruct_pane_ParamLimits

0xb901,	// (0x00021143) list_single_hwr_training_instruct_pane

0x3e44,	// (0x00019686) list_single_hwr_training_instruct_pane_t1

0x35ea,	// (0x00018e2c) bg_frame_shadow_pane_g1

0x3e53,	// (0x00019695) bg_frame_shadow_pane_g2

0x3e5b,	// (0x0001969d) bg_frame_shadow_pane_g3

0x3e63,	// (0x000196a5) bg_frame_shadow_pane_g4

0x3e6b,	// (0x000196ad) bg_frame_shadow_pane_g5

0x3e73,	// (0x000196b5) bg_frame_shadow_pane_g6

0x3e7b,	// (0x000196bd) bg_frame_shadow_pane_g7

0x1132,	// (0x00016974) bg_frame_shadow_pane_g8

0x0007,

0xf806,	// (0x00025048) bg_frame_shadow_pane_g

0x73d1,	// (0x0001cc13) main_video_tele_dialer_pane

0x7bfc,	// (0x0001d43e) aid_size_cell_video_keypad_ParamLimits

0x7bfc,	// (0x0001d43e) aid_size_cell_video_keypad

0x7c0c,	// (0x0001d44e) grid_video_dialer_keypad_pane_ParamLimits

0x7c0c,	// (0x0001d44e) grid_video_dialer_keypad_pane

0x7c3c,	// (0x0001d47e) video_down_pane_cp_ParamLimits

0x7c3c,	// (0x0001d47e) video_down_pane_cp

0x7c48,	// (0x0001d48a) cell_video_dialer_keypad_pane_ParamLimits

0x7c48,	// (0x0001d48a) cell_video_dialer_keypad_pane

0x3e83,	// (0x000196c5) bg_button_pane_cp08_ParamLimits

0x3e83,	// (0x000196c5) bg_button_pane_cp08

0xb935,	// (0x00021177) cell_video_dialer_keypad_pane_g1_ParamLimits

0xb935,	// (0x00021177) cell_video_dialer_keypad_pane_g1

0xb4a8,	// (0x00020cea) mup3_rocker2_pane_ParamLimits

0xb4a8,	// (0x00020cea) mup3_rocker2_pane

0x12f6,	// (0x00016b38) mup3_rocker2_pane_g1

0x78ea,	// (0x0001d12c) main_dialer2_pane

0x73d1,	// (0x0001cc13) main_mp4_pane

0x7c79,	// (0x0001d4bb) main_mp4_pane_g1_ParamLimits

0x7c79,	// (0x0001d4bb) main_mp4_pane_g1

0x7c87,	// (0x0001d4c9) main_mp4_pane_g2_ParamLimits

0x7c87,	// (0x0001d4c9) main_mp4_pane_g2

0x7c95,	// (0x0001d4d7) main_mp4_pane_g3_ParamLimits

0x7c95,	// (0x0001d4d7) main_mp4_pane_g3

0x7cca,	// (0x0001d50c) main_mp4_pane_g4_ParamLimits

0x7cca,	// (0x0001d50c) main_mp4_pane_g4

0x7cf8,	// (0x0001d53a) main_mp4_pane_g5_ParamLimits

0x7cf8,	// (0x0001d53a) main_mp4_pane_g5

0x0007,

0xf826,	// (0x00025068) main_mp4_pane_g_ParamLimits

0xf826,	// (0x00025068) main_mp4_pane_g

0x7d6c,	// (0x0001d5ae) main_mp4_pane_t1_ParamLimits

0x7d6c,	// (0x0001d5ae) main_mp4_pane_t1

0x7dc4,	// (0x0001d606) main_mp4_pane_t2_ParamLimits

0x7dc4,	// (0x0001d606) main_mp4_pane_t2

0x4005,	// (0x00019847) main_mp4_pane_t3_ParamLimits

0x4005,	// (0x00019847) main_mp4_pane_t3

0x7e16,	// (0x0001d658) main_mp4_pane_t4_ParamLimits

0x7e16,	// (0x0001d658) main_mp4_pane_t4

0x0003,

0xf837,	// (0x00025079) main_mp4_pane_t_ParamLimits

0xf837,	// (0x00025079) main_mp4_pane_t

0x7e56,	// (0x0001d698) mp4_progress_pane_ParamLimits

0x7e56,	// (0x0001d698) mp4_progress_pane

0x7e9a,	// (0x0001d6dc) mp4_rocker_pane_ParamLimits

0x7e9a,	// (0x0001d6dc) mp4_rocker_pane

0x40ff,	// (0x00019941) mp4_progress_pane_t1

0x4116,	// (0x00019958) mp4_progress_pane_t2

0x0001,

0xf840,	// (0x00025082) mp4_progress_pane_t

0x412d,	// (0x0001996f) mup_progress_pane_cp04

0x4b24,	// (0x0001a366) mp4_rocker_pane_g1

0x7eb8,	// (0x0001d6fa) aid_cell_size_keypad2_ParamLimits

0x7eb8,	// (0x0001d6fa) aid_cell_size_keypad2

0x7ec8,	// (0x0001d70a) dialer2_ne_pane_ParamLimits

0x7ec8,	// (0x0001d70a) dialer2_ne_pane

0x7ed4,	// (0x0001d716) grid_dialer2_keypad_pane_ParamLimits

0x7ed4,	// (0x0001d716) grid_dialer2_keypad_pane

0x4047,	// (0x00019889) bg_popup_call_pane_cp07_ParamLimits

0x4047,	// (0x00019889) bg_popup_call_pane_cp07

0xb96c,	// (0x000211ae) dialer2_ne_pane_t1_ParamLimits

0xb96c,	// (0x000211ae) dialer2_ne_pane_t1

0x7ee0,	// (0x0001d722) cell_dialer2_keypad_pane_ParamLimits

0x7ee0,	// (0x0001d722) cell_dialer2_keypad_pane

0x414b,	// (0x0001998d) bg_button_pane_pane_cp04_ParamLimits

0x414b,	// (0x0001998d) bg_button_pane_pane_cp04

0xb991,	// (0x000211d3) cell_dialer2_keypad_pane_g1_ParamLimits

0xb991,	// (0x000211d3) cell_dialer2_keypad_pane_g1

0x90f8,	// (0x0001e93a) aid_placing_vt_set_content_ParamLimits

0x90f8,	// (0x0001e93a) aid_placing_vt_set_content

0x911e,	// (0x0001e960) aid_placing_vt_set_title_ParamLimits

0x911e,	// (0x0001e960) aid_placing_vt_set_title

0x73d1,	// (0x0001cc13) main_image3_pane

0x7f1d,	// (0x0001d75f) area_side_right_pane_cp01_ParamLimits

0x7f1d,	// (0x0001d75f) area_side_right_pane_cp01

0x7f4a,	// (0x0001d78c) main_image3_pane_g1_ParamLimits

0x7f4a,	// (0x0001d78c) main_image3_pane_g1

0x7f58,	// (0x0001d79a) main_image3_pane_g2_ParamLimits

0x7f58,	// (0x0001d79a) main_image3_pane_g2

0x7f6f,	// (0x0001d7b1) main_image3_pane_g3_ParamLimits

0x7f6f,	// (0x0001d7b1) main_image3_pane_g3

0x7f86,	// (0x0001d7c8) main_image3_pane_g4_ParamLimits

0x7f86,	// (0x0001d7c8) main_image3_pane_g4

0x0003,

0xf84f,	// (0x00025091) main_image3_pane_g_ParamLimits

0xf84f,	// (0x00025091) main_image3_pane_g

0x7f9d,	// (0x0001d7df) main_image3_pane_t1_ParamLimits

0x7f9d,	// (0x0001d7df) main_image3_pane_t1

0x7fc2,	// (0x0001d804) main_image3_pane_t2_ParamLimits

0x7fc2,	// (0x0001d804) main_image3_pane_t2

0x7fe1,	// (0x0001d823) main_image3_pane_t3_ParamLimits

0x7fe1,	// (0x0001d823) main_image3_pane_t3

0x0003,

0xf858,	// (0x0002509a) main_image3_pane_t_ParamLimits

0xf858,	// (0x0002509a) main_image3_pane_t

0x0f8f,	// (0x000167d1) grid_sctrl_middle_pane_cp01_ParamLimits

0x0f8f,	// (0x000167d1) grid_sctrl_middle_pane_cp01

0xb9dd,	// (0x0002121f) cell_sctrl_middle_pane_cp01_ParamLimits

0xb9dd,	// (0x0002121f) cell_sctrl_middle_pane_cp01

0xb9ee,	// (0x00021230) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xb9ee,	// (0x00021230) cell_sctrl_middle_pane_cp01_g1

0x73d1,	// (0x0001cc13) main_call4_pane

0x803c,	// (0x0001d87e) aid_size_button_call4_ParamLimits

0x803c,	// (0x0001d87e) aid_size_button_call4

0x8066,	// (0x0001d8a8) call4_windows_pane_ParamLimits

0x8066,	// (0x0001d8a8) call4_windows_pane

0x807a,	// (0x0001d8bc) grid_call4_button_pane_ParamLimits

0x807a,	// (0x0001d8bc) grid_call4_button_pane

0x41a1,	// (0x000199e3) call4_windows_conf_pane

0xba03,	// (0x00021245) popup_call4_audio_first_window_ParamLimits

0xba03,	// (0x00021245) popup_call4_audio_first_window

0x41d4,	// (0x00019a16) popup_call4_audio_second_window_ParamLimits

0x41d4,	// (0x00019a16) popup_call4_audio_second_window

0x41e6,	// (0x00019a28) popup_call4_audio_wait_window_ParamLimits

0x41e6,	// (0x00019a28) popup_call4_audio_wait_window

0x8094,	// (0x0001d8d6) cell_call4_button_pane_ParamLimits

0x8094,	// (0x0001d8d6) cell_call4_button_pane

0x10d2,	// (0x00016914) bg_button_pane_cp09_ParamLimits

0x10d2,	// (0x00016914) bg_button_pane_cp09

0x80b7,	// (0x0001d8f9) cell_call4_button_pane_g1_ParamLimits

0x80b7,	// (0x0001d8f9) cell_call4_button_pane_g1

0xba23,	// (0x00021265) cell_call4_button_pane_t1_ParamLimits

0xba23,	// (0x00021265) cell_call4_button_pane_t1

0x422c,	// (0x00019a6e) popup_call4_audio_conf_window_ParamLimits

0x422c,	// (0x00019a6e) popup_call4_audio_conf_window

0xb4d9,	// (0x00020d1b) mup3_progress_pane_t1_ParamLimits

0xb4f7,	// (0x00020d39) mup3_progress_pane_t2_ParamLimits

0x3994,	// (0x000191d6) mup3_progress_pane_t3_ParamLimits

0xf728,	// (0x00024f6a) mup3_progress_pane_t_ParamLimits

0x39b1,	// (0x000191f3) mup_progress_pane_cp03_ParamLimits

0xb871,	// (0x000210b3) mup3_control_keys_pane_g4_copy1

0x7e84,	// (0x0001d6c6) mp4_rocker2_pane_ParamLimits

0x7e84,	// (0x0001d6c6) mp4_rocker2_pane

0x4248,	// (0x00019a8a) mp4_rocker2_pane_g1

0x4240,	// (0x00019a82) mp4_rocker2_pane_g2

0x80f6,	// (0x0001d938) mp4_rocker2_pane_g3

0x80fe,	// (0x0001d940) mp4_rocker2_pane_g4

0x8106,	// (0x0001d948) mp4_rocker2_pane_g5

0x0004,

0xf861,	// (0x000250a3) mp4_rocker2_pane_g

0x73d1,	// (0x0001cc13) main_camera4_pane

0x73d1,	// (0x0001cc13) main_video4_pane

0x7c18,	// (0x0001d45a) main_video_tele_dialer_pane_t1_ParamLimits

0x7c18,	// (0x0001d45a) main_video_tele_dialer_pane_t1

0x7c2a,	// (0x0001d46c) main_video_tele_dialer_pane_t2_ParamLimits

0x7c2a,	// (0x0001d46c) main_video_tele_dialer_pane_t2

0x0001,

0xf817,	// (0x00025059) main_video_tele_dialer_pane_t_ParamLimits

0xf817,	// (0x00025059) main_video_tele_dialer_pane_t

0x8124,	// (0x0001d966) cam4_autofocus_pane_ParamLimits

0x8124,	// (0x0001d966) cam4_autofocus_pane

0x813a,	// (0x0001d97c) cam4_image_uncrop_pane_ParamLimits

0x813a,	// (0x0001d97c) cam4_image_uncrop_pane

0x814f,	// (0x0001d991) cam4_indicators_pane_ParamLimits

0x814f,	// (0x0001d991) cam4_indicators_pane

0x8169,	// (0x0001d9ab) main_camera4_pane_g1_ParamLimits

0x8169,	// (0x0001d9ab) main_camera4_pane_g1

0x8175,	// (0x0001d9b7) main_camera4_pane_g2_ParamLimits

0x8175,	// (0x0001d9b7) main_camera4_pane_g2

0x8175,	// (0x0001d9b7) main_camera4_pane_g3_ParamLimits

0x8175,	// (0x0001d9b7) main_camera4_pane_g3

0x8181,	// (0x0001d9c3) main_camera4_pane_g4_ParamLimits

0x8181,	// (0x0001d9c3) main_camera4_pane_g4

0x818d,	// (0x0001d9cf) main_camera4_pane_g5_ParamLimits

0x818d,	// (0x0001d9cf) main_camera4_pane_g5

0x0005,

0xf86c,	// (0x000250ae) main_camera4_pane_g_ParamLimits

0xf86c,	// (0x000250ae) main_camera4_pane_g

0x81a7,	// (0x0001d9e9) main_camera4_pane_t1_ParamLimits

0x81a7,	// (0x0001d9e9) main_camera4_pane_t1

0x81cb,	// (0x0001da0d) bg_tb_trans_pane_cp06

0x81e1,	// (0x0001da23) cam4_indicators_pane_g1

0x81f1,	// (0x0001da33) cam4_indicators_pane_g2

0x0002,

0xf887,	// (0x000250c9) cam4_indicators_pane_g

0x8211,	// (0x0001da53) cam4_indicators_pane_t1

0x8239,	// (0x0001da7b) main_video4_pane_g1_ParamLimits

0x8239,	// (0x0001da7b) main_video4_pane_g1

0x8175,	// (0x0001d9b7) main_video4_pane_g2_ParamLimits

0x8175,	// (0x0001d9b7) main_video4_pane_g2

0x8175,	// (0x0001d9b7) main_video4_pane_g3_ParamLimits

0x8175,	// (0x0001d9b7) main_video4_pane_g3

0x8181,	// (0x0001d9c3) main_video4_pane_g4_ParamLimits

0x8181,	// (0x0001d9c3) main_video4_pane_g4

0x0004,

0xf88e,	// (0x000250d0) main_video4_pane_g_ParamLimits

0xf88e,	// (0x000250d0) main_video4_pane_g

0x824d,	// (0x0001da8f) vid4_indicators_pane_ParamLimits

0x824d,	// (0x0001da8f) vid4_indicators_pane

0x826b,	// (0x0001daad) video4_image_uncrop_cif_pane_ParamLimits

0x826b,	// (0x0001daad) video4_image_uncrop_cif_pane

0x8278,	// (0x0001daba) video4_image_uncrop_nhd_pane_ParamLimits

0x8278,	// (0x0001daba) video4_image_uncrop_nhd_pane

0x813a,	// (0x0001d97c) video4_image_uncrop_vga_pane_ParamLimits

0x813a,	// (0x0001d97c) video4_image_uncrop_vga_pane

0x78dc,	// (0x0001d11e) bg_tb_trans_pane_cp07

0x81e1,	// (0x0001da23) vid4_indicators_pane_g1

0x8285,	// (0x0001dac7) vid4_indicators_pane_g2

0x8295,	// (0x0001dad7) vid4_indicators_pane_g3

0x0004,

0xf899,	// (0x000250db) vid4_indicators_pane_g

0x82c2,	// (0x0001db04) vid4_indicators_pane_t1

0xba59,	// (0x0002129b) cam4_autofocus_pane_g1

0xba61,	// (0x000212a3) cam4_autofocus_pane_g2

0xba69,	// (0x000212ab) cam4_autofocus_pane_g3

0x0002,

0xf8a4,	// (0x000250e6) cam4_autofocus_pane_g

0xba71,	// (0x000212b3) cam4_autofocus_pane_g3_copy1

0xb919,	// (0x0002115b) video_down_pane_cp_t1

0xb927,	// (0x00021169) video_down_pane_cp_t2

0x0001,

0xf81c,	// (0x0002505e) video_down_pane_cp_t

0x73c3,	// (0x0001cc05) popup_vitu2_window_ParamLimits

0x73c3,	// (0x0001cc05) popup_vitu2_window

0x82dc,	// (0x0001db1e) aid_size_cell2_itu2_ParamLimits

0x82dc,	// (0x0001db1e) aid_size_cell2_itu2

0x82fe,	// (0x0001db40) aid_size_cell_itu2_ParamLimits

0x82fe,	// (0x0001db40) aid_size_cell_itu2

0x833c,	// (0x0001db7e) bg_popup_window_pane_cp09_ParamLimits

0x833c,	// (0x0001db7e) bg_popup_window_pane_cp09

0x834a,	// (0x0001db8c) field_vitu2_entry_pane_ParamLimits

0x834a,	// (0x0001db8c) field_vitu2_entry_pane

0x8360,	// (0x0001dba2) grid_vitu2_function_pane_ParamLimits

0x8360,	// (0x0001dba2) grid_vitu2_function_pane

0x8392,	// (0x0001dbd4) grid_vitu2_itu_pane_ParamLimits

0x8392,	// (0x0001dbd4) grid_vitu2_itu_pane

0x83ee,	// (0x0001dc30) cell_vitu2_itu_pane_ParamLimits

0x83ee,	// (0x0001dc30) cell_vitu2_itu_pane

0x8406,	// (0x0001dc48) cell_vitu2_function_pane_ParamLimits

0x8406,	// (0x0001dc48) cell_vitu2_function_pane

0x4333,	// (0x00019b75) bg_popup_call_pane_cp08_ParamLimits

0x4333,	// (0x00019b75) bg_popup_call_pane_cp08

0x434a,	// (0x00019b8c) field_vitu2_entry_pane_g1

0x4356,	// (0x00019b98) field_vitu2_entry_pane_g2

0x0002,

0xf8ab,	// (0x000250ed) field_vitu2_entry_pane_g

0xba79,	// (0x000212bb) field_vitu2_entry_pane_t1_ParamLimits

0xba79,	// (0x000212bb) field_vitu2_entry_pane_t1

0x4362,	// (0x00019ba4) field_vitu2_entry_pane_t2_ParamLimits

0x4362,	// (0x00019ba4) field_vitu2_entry_pane_t2

0x0001,

0xf8b2,	// (0x000250f4) field_vitu2_entry_pane_t_ParamLimits

0xf8b2,	// (0x000250f4) field_vitu2_entry_pane_t

0x8445,	// (0x0001dc87) bg_button_pane_cp010_ParamLimits

0x8445,	// (0x0001dc87) bg_button_pane_cp010

0x8453,	// (0x0001dc95) cell_vitu2_itu_pane_g1

0x8479,	// (0x0001dcbb) cell_vitu2_itu_pane_t1_ParamLimits

0x8479,	// (0x0001dcbb) cell_vitu2_itu_pane_t1

0x84c5,	// (0x0001dd07) cell_vitu2_itu_pane_t2_ParamLimits

0x84c5,	// (0x0001dd07) cell_vitu2_itu_pane_t2

0x0002,

0xf8bc,	// (0x000250fe) cell_vitu2_itu_pane_t_ParamLimits

0xf8bc,	// (0x000250fe) cell_vitu2_itu_pane_t

0x78dc,	// (0x0001d11e) bg_button_pane_cp011

0x858d,	// (0x0001ddcf) cell_vitu2_function_pane_g1

0x73d1,	// (0x0001cc13) main_myfav_hc_pane

0x8021,	// (0x0001d863) popup_image3_note_pane_ParamLimits

0x8021,	// (0x0001d863) popup_image3_note_pane

0x802d,	// (0x0001d86f) popup_image3_tool_bar_pane_ParamLimits

0x802d,	// (0x0001d86f) popup_image3_tool_bar_pane

0x853b,	// (0x0001dd7d) cell_vitu2_itu_pane_t3_ParamLimits

0x853b,	// (0x0001dd7d) cell_vitu2_itu_pane_t3

0x082c,	// (0x0001606e) bg_popup_trans_pane

0x4387,	// (0x00019bc9) grid_image3_tool_bar_pane

0x4391,	// (0x00019bd3) bg_popup_trans_pane_g1

0x1552,	// (0x00016d94) bg_popup_trans_pane_g2

0x4399,	// (0x00019bdb) bg_popup_trans_pane_g3

0x43a1,	// (0x00019be3) bg_popup_trans_pane_g4

0x43a9,	// (0x00019beb) bg_popup_trans_pane_g5

0x43b1,	// (0x00019bf3) bg_popup_trans_pane_g6

0x43b9,	// (0x00019bfb) bg_popup_trans_pane_g7

0x43c1,	// (0x00019c03) bg_popup_trans_pane_g8

0x1532,	// (0x00016d74) bg_popup_trans_pane_g9

0x0008,

0xf8c3,	// (0x00025105) bg_popup_trans_pane_g

0x43c9,	// (0x00019c0b) cell_image3_tool_bar_pane_ParamLimits

0x43c9,	// (0x00019c0b) cell_image3_tool_bar_pane

0x12f6,	// (0x00016b38) cell_image3_tool_bar_pane_g1

0x082c,	// (0x0001606e) bg_popup_trans_pane_cp1

0x43dd,	// (0x00019c1f) popup_image3_note_pane_t1

0x43eb,	// (0x00019c2d) popup_image3_note_pane_t2

0x43f9,	// (0x00019c3b) popup_image3_note_pane_t3

0x0002,

0xf8d6,	// (0x00025118) popup_image3_note_pane_t

0x4407,	// (0x00019c49) popup_image3_note_pane_t3_copy1

0xbaa8,	// (0x000212ea) bg_myfav_hc_instruction_pane_ParamLimits

0xbaa8,	// (0x000212ea) bg_myfav_hc_instruction_pane

0xbaba,	// (0x000212fc) cell_myfav_contact_pane_ParamLimits

0xbaba,	// (0x000212fc) cell_myfav_contact_pane

0xbad4,	// (0x00021316) cell_myfav_contact_pane_cp1_ParamLimits

0xbad4,	// (0x00021316) cell_myfav_contact_pane_cp1

0xbaea,	// (0x0002132c) cell_myfav_contact_pane_cp2_ParamLimits

0xbaea,	// (0x0002132c) cell_myfav_contact_pane_cp2

0xbb00,	// (0x00021342) cell_myfav_contact_pane_cp3_ParamLimits

0xbb00,	// (0x00021342) cell_myfav_contact_pane_cp3

0xbb15,	// (0x00021357) cell_myfav_contact_pane_cp4_ParamLimits

0xbb15,	// (0x00021357) cell_myfav_contact_pane_cp4

0xbb29,	// (0x0002136b) cell_myfav_contact_pane_cp5_ParamLimits

0xbb29,	// (0x0002136b) cell_myfav_contact_pane_cp5

0xbb3d,	// (0x0002137f) cell_myfav_contact_pane_cp6_ParamLimits

0xbb3d,	// (0x0002137f) cell_myfav_contact_pane_cp6

0xbb51,	// (0x00021393) cell_myfav_contact_pane_cp7_ParamLimits

0xbb51,	// (0x00021393) cell_myfav_contact_pane_cp7

0x4415,	// (0x00019c57) listscroll_gen_pane_cp05

0xbb69,	// (0x000213ab) main_myfav_hc_pane_g1_ParamLimits

0xbb69,	// (0x000213ab) main_myfav_hc_pane_g1

0xbb7f,	// (0x000213c1) main_myfav_hc_pane_g2_ParamLimits

0xbb7f,	// (0x000213c1) main_myfav_hc_pane_g2

0x0002,

0xf8dd,	// (0x0002511f) main_myfav_hc_pane_g_ParamLimits

0xf8dd,	// (0x0002511f) main_myfav_hc_pane_g

0xbba9,	// (0x000213eb) main_myfav_hc_pane_t1_ParamLimits

0xbba9,	// (0x000213eb) main_myfav_hc_pane_t1

0x441e,	// (0x00019c60) main_myfav_hc_pane_t2_ParamLimits

0x441e,	// (0x00019c60) main_myfav_hc_pane_t2

0x4430,	// (0x00019c72) main_myfav_hc_pane_t3_ParamLimits

0x4430,	// (0x00019c72) main_myfav_hc_pane_t3

0xbbbe,	// (0x00021400) main_myfav_hc_pane_t4_ParamLimits

0xbbbe,	// (0x00021400) main_myfav_hc_pane_t4

0x0004,

0xf8e4,	// (0x00025126) main_myfav_hc_pane_t_ParamLimits

0xf8e4,	// (0x00025126) main_myfav_hc_pane_t

0x12f6,	// (0x00016b38) bg_myfav_hc_instruction_pane_g1

0x4442,	// (0x00019c84) cell_myfav_contact_pane_g1_ParamLimits

0x4442,	// (0x00019c84) cell_myfav_contact_pane_g1

0x4442,	// (0x00019c84) cell_myfav_contact_pane_g2_ParamLimits

0x4442,	// (0x00019c84) cell_myfav_contact_pane_g2

0x444e,	// (0x00019c90) cell_myfav_contact_pane_g3_ParamLimits

0x444e,	// (0x00019c90) cell_myfav_contact_pane_g3

0x0f81,	// (0x000167c3) cell_myfav_contact_pane_g4_ParamLimits

0x0f81,	// (0x000167c3) cell_myfav_contact_pane_g4

0x445b,	// (0x00019c9d) cell_myfav_contact_pane_g5_ParamLimits

0x445b,	// (0x00019c9d) cell_myfav_contact_pane_g5

0x0004,

0xf8ef,	// (0x00025131) cell_myfav_contact_pane_g_ParamLimits

0xf8ef,	// (0x00025131) cell_myfav_contact_pane_g

0xbb95,	// (0x000213d7) main_myfav_hc_pane_g3_ParamLimits

0xbb95,	// (0x000213d7) main_myfav_hc_pane_g3

0x7309,	// (0x0001cb4b) popup_adpt_find_window

0xbbe2,	// (0x00021424) afind_page_pane_ParamLimits

0xbbe2,	// (0x00021424) afind_page_pane

0xbbef,	// (0x00021431) aid_size_cell_afind_ParamLimits

0xbbef,	// (0x00021431) aid_size_cell_afind

0xbc09,	// (0x0002144b) bg_popup_sub_pane_cp09_ParamLimits

0xbc09,	// (0x0002144b) bg_popup_sub_pane_cp09

0xbc16,	// (0x00021458) find_pane_cp01_ParamLimits

0xbc16,	// (0x00021458) find_pane_cp01

0x4467,	// (0x00019ca9) grid_afind_control_pane_ParamLimits

0x4467,	// (0x00019ca9) grid_afind_control_pane

0xbc23,	// (0x00021465) grid_afind_pane_ParamLimits

0xbc23,	// (0x00021465) grid_afind_pane

0xbc39,	// (0x0002147b) cell_afind_pane_ParamLimits

0xbc39,	// (0x0002147b) cell_afind_pane

0x12f6,	// (0x00016b38) afind_page_pane_g1

0xbc6f,	// (0x000214b1) afind_page_pane_g2

0xbc77,	// (0x000214b9) afind_page_pane_g3

0x0002,

0xf8fa,	// (0x0002513c) afind_page_pane_g

0xbc7f,	// (0x000214c1) afind_page_pane_t1

0x448d,	// (0x00019ccf) cell_afind_grid_control_pane_ParamLimits

0x448d,	// (0x00019ccf) cell_afind_grid_control_pane

0x414b,	// (0x0001998d) bg_button_pane_cp69_ParamLimits

0x414b,	// (0x0001998d) bg_button_pane_cp69

0xbc8d,	// (0x000214cf) cell_afind_pane_g1_ParamLimits

0xbc8d,	// (0x000214cf) cell_afind_pane_g1

0xbc9a,	// (0x000214dc) cell_afind_pane_t1_ParamLimits

0xbc9a,	// (0x000214dc) cell_afind_pane_t1

0x1300,	// (0x00016b42) bg_button_pane_cp72

0x449c,	// (0x00019cde) cell_afind_grid_control_pane_g1

0xa7ca,	// (0x0002000c) aid_image_placing_area_ParamLimits

0xa7ca,	// (0x0002000c) aid_image_placing_area

0x0f73,	// (0x000167b5) field_vitu_entry_pane_g1_ParamLimits

0x0f73,	// (0x000167b5) field_vitu_entry_pane_g1

0x0f73,	// (0x000167b5) field_vitu_entry_pane_g2_ParamLimits

0x0f73,	// (0x000167b5) field_vitu_entry_pane_g2

0x0001,

0xf7a7,	// (0x00024fe9) field_vitu_entry_pane_g_ParamLimits

0xf7a7,	// (0x00024fe9) field_vitu_entry_pane_g

0x3c63,	// (0x000194a5) cell_vitu_itu_pane_g1_ParamLimits

0x3c46,	// (0x00019488) cell_vitu_itu_pane_t3_ParamLimits

0x3c46,	// (0x00019488) cell_vitu_itu_pane_t3

0x40ff,	// (0x00019941) mp4_progress_pane_t1_ParamLimits

0x4116,	// (0x00019958) mp4_progress_pane_t2_ParamLimits

0xf840,	// (0x00025082) mp4_progress_pane_t_ParamLimits

0x412d,	// (0x0001996f) mup_progress_pane_cp04_ParamLimits

0xbbd0,	// (0x00021412) main_myfav_hc_pane_t5_ParamLimits

0xbbd0,	// (0x00021412) main_myfav_hc_pane_t5

0x71f0,	// (0x0001ca32) aid_zoom_text_primary

0x7309,	// (0x0001cb4b) popup_adpt_find_window_ParamLimits

0x78dc,	// (0x0001d11e) main_cam_set_pane

0x815d,	// (0x0001d99f) cam4_zoom_pane_ParamLimits

0x815d,	// (0x0001d99f) cam4_zoom_pane

0xbcac,	// (0x000214ee) main_cam_set_pane_g1_ParamLimits

0xbcac,	// (0x000214ee) main_cam_set_pane_g1

0xbcba,	// (0x000214fc) main_cam_set_pane_g2_ParamLimits

0xbcba,	// (0x000214fc) main_cam_set_pane_g2

0x0001,

0xf901,	// (0x00025143) main_cam_set_pane_g_ParamLimits

0xf901,	// (0x00025143) main_cam_set_pane_g

0xbcc6,	// (0x00021508) main_cam_set_pane_t1_ParamLimits

0xbcc6,	// (0x00021508) main_cam_set_pane_t1

0xbcd8,	// (0x0002151a) main_cset_listscroll_pane_ParamLimits

0xbcd8,	// (0x0002151a) main_cset_listscroll_pane

0xbd06,	// (0x00021548) main_cset_slider_pane_ParamLimits

0xbd06,	// (0x00021548) main_cset_slider_pane

0x44ad,	// (0x00019cef) main_cset_list_pane_ParamLimits

0x44ad,	// (0x00019cef) main_cset_list_pane

0x44bd,	// (0x00019cff) scroll_pane_cp028

0xbd25,	// (0x00021567) aid_area_touch_slider

0xbd41,	// (0x00021583) cset_slider_pane

0xbd64,	// (0x000215a6) main_cset_slider_pane_g1

0xbd79,	// (0x000215bb) main_cset_slider_pane_g2

0x0011,

0xf906,	// (0x00025148) main_cset_slider_pane_g

0x44f6,	// (0x00019d38) main_cset_slider_pane_t1

0xbe35,	// (0x00021677) main_cset_slider_pane_t2

0xbe4f,	// (0x00021691) main_cset_slider_pane_t3

0xbe69,	// (0x000216ab) main_cset_slider_pane_t4

0xbe83,	// (0x000216c5) main_cset_slider_pane_t5

0xbe9d,	// (0x000216df) main_cset_slider_pane_t6

0xbeb2,	// (0x000216f4) main_cset_slider_pane_t7

0x000e,

0xf92b,	// (0x0002516d) main_cset_slider_pane_t

0xbfb6,	// (0x000217f8) cset_list_set_pane_ParamLimits

0xbfb6,	// (0x000217f8) cset_list_set_pane

0x4590,	// (0x00019dd2) aid_position_infowindow_above

0x4598,	// (0x00019dda) aid_position_infowindow_below

0xbfc6,	// (0x00021808) cset_list_set_pane_g1_ParamLimits

0xbfc6,	// (0x00021808) cset_list_set_pane_g1

0xbfd2,	// (0x00021814) cset_list_set_pane_g3_ParamLimits

0xbfd2,	// (0x00021814) cset_list_set_pane_g3

0x0001,

0xf94a,	// (0x0002518c) cset_list_set_pane_g_ParamLimits

0xf94a,	// (0x0002518c) cset_list_set_pane_g

0xbfe1,	// (0x00021823) cset_list_set_pane_t1_ParamLimits

0xbfe1,	// (0x00021823) cset_list_set_pane_t1

0x087f,	// (0x000160c1) list_highlight_pane_cp021_ParamLimits

0x087f,	// (0x000160c1) list_highlight_pane_cp021

0x1ee2,	// (0x00017724) cset_slider_pane_g1

0x1ef4,	// (0x00017736) cset_slider_pane_g2

0x1eeb,	// (0x0001772d) cset_slider_pane_g3

0x0002,

0xf94f,	// (0x00025191) cset_slider_pane_g

0x85a1,	// (0x0001dde3) aid_area_touch_cam4_zoom

0x85a9,	// (0x0001ddeb) cam4_zoom_cont_pane

0x85b1,	// (0x0001ddf3) cam4_zoom_pane_g1

0x85b9,	// (0x0001ddfb) cam4_zoom_pane_g2

0x85c1,	// (0x0001de03) cam4_zoom_pane_g3

0x0002,

0xf956,	// (0x00025198) cam4_zoom_pane_g

0x85c9,	// (0x0001de0b) cam4_zoom_cont_pane_g1

0x85d2,	// (0x0001de14) cam4_zoom_cont_pane_g2

0x85db,	// (0x0001de1d) cam4_zoom_cont_pane_g3

0x0002,

0xf95d,	// (0x0002519f) cam4_zoom_cont_pane_g

0x8056,	// (0x0001d898) call4_image_pane_ParamLimits

0x8056,	// (0x0001d898) call4_image_pane

0x41a1,	// (0x000199e3) call4_windows_conf_pane_ParamLimits

0x41b4,	// (0x000199f6) popup_call4_audio_in_window_ParamLimits

0x41b4,	// (0x000199f6) popup_call4_audio_in_window

0x082c,	// (0x0001606e) bg_popup_call2_act_pane_cp02

0x4224,	// (0x00019a66) call4_list_conf_pane

0x12f6,	// (0x00016b38) call4_image_pane_g1

0x12f6,	// (0x00016b38) call4_image_pane_g2

0x0001,

0xf3c9,	// (0x00024c0b) call4_image_pane_g

0x45db,	// (0x00019e1d) list_single_graphic_popup_conf4_pane_ParamLimits

0x45db,	// (0x00019e1d) list_single_graphic_popup_conf4_pane

0x082c,	// (0x0001606e) list_highlight_pane_cp022

0x45ee,	// (0x00019e30) list_single_graphic_popup_conf4_pane_g1

0x1aec,	// (0x0001732e) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf964,	// (0x000251a6) list_single_graphic_popup_conf4_pane_g

0x45f6,	// (0x00019e38) list_single_graphic_popup_conf4_pane_t1

0x9262,	// (0x0001eaa4) popup_vtel_slider_window_ParamLimits

0x9262,	// (0x0001eaa4) popup_vtel_slider_window

0x4139,	// (0x0001997b) dialer2_ne_pane_t2_ParamLimits

0x4139,	// (0x0001997b) dialer2_ne_pane_t2

0x0001,

0xf845,	// (0x00025087) dialer2_ne_pane_t_ParamLimits

0xf845,	// (0x00025087) dialer2_ne_pane_t

0x087f,	// (0x000160c1) bg_popup_sub_pane_cp010_ParamLimits

0x087f,	// (0x000160c1) bg_popup_sub_pane_cp010

0xbff6,	// (0x00021838) popup_vtel_slider_window_g1_ParamLimits

0xbff6,	// (0x00021838) popup_vtel_slider_window_g1

0xc002,	// (0x00021844) popup_vtel_slider_window_g2_ParamLimits

0xc002,	// (0x00021844) popup_vtel_slider_window_g2

0x0003,

0xf969,	// (0x000251ab) popup_vtel_slider_window_g_ParamLimits

0xf969,	// (0x000251ab) popup_vtel_slider_window_g

0xc048,	// (0x0002188a) vtel_slider_pane_ParamLimits

0xc048,	// (0x0002188a) vtel_slider_pane

0xc057,	// (0x00021899) vtel_slider_pane_g1_ParamLimits

0xc057,	// (0x00021899) vtel_slider_pane_g1

0xc064,	// (0x000218a6) vtel_slider_pane_g2_ParamLimits

0xc064,	// (0x000218a6) vtel_slider_pane_g2

0xc071,	// (0x000218b3) vtel_slider_pane_g3_ParamLimits

0xc071,	// (0x000218b3) vtel_slider_pane_g3

0xc057,	// (0x00021899) vtel_slider_pane_g4_ParamLimits

0xc057,	// (0x00021899) vtel_slider_pane_g4

0xc07e,	// (0x000218c0) vtel_slider_pane_g5_ParamLimits

0xc07e,	// (0x000218c0) vtel_slider_pane_g5

0x0004,

0xf972,	// (0x000251b4) vtel_slider_pane_g_ParamLimits

0xf972,	// (0x000251b4) vtel_slider_pane_g

0x78dc,	// (0x0001d11e) main_gallery2_pane

0x8324,	// (0x0001db66) aid_size_row_itut2_dropdow_list_ParamLimits

0x8324,	// (0x0001db66) aid_size_row_itut2_dropdow_list

0x8378,	// (0x0001dbba) grid_vitu2_function_top_pane_ParamLimits

0x8378,	// (0x0001dbba) grid_vitu2_function_top_pane

0x83b6,	// (0x0001dbf8) popup_vitu2_dropdown_list_window_ParamLimits

0x83b6,	// (0x0001dbf8) popup_vitu2_dropdown_list_window

0x83d2,	// (0x0001dc14) popup_vitu2_match_list_window

0x85e4,	// (0x0001de26) cell_vitu2_function_top_pane_ParamLimits

0x85e4,	// (0x0001de26) cell_vitu2_function_top_pane

0x85fc,	// (0x0001de3e) cell_vitu2_function_top_pane_cp01_ParamLimits

0x85fc,	// (0x0001de3e) cell_vitu2_function_top_pane_cp01

0x8618,	// (0x0001de5a) cell_vitu2_function_top_wide_pane_ParamLimits

0x8618,	// (0x0001de5a) cell_vitu2_function_top_wide_pane

0x78dc,	// (0x0001d11e) bg_button_pane_cp012

0x8635,	// (0x0001de77) cell_vitu2_function_top_pane_g1

0x8649,	// (0x0001de8b) bg_button_pane_cp013_ParamLimits

0x8649,	// (0x0001de8b) bg_button_pane_cp013

0xc08b,	// (0x000218cd) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xc08b,	// (0x000218cd) cell_vitu2_function_top_wide_pane_g1

0x73c3,	// (0x0001cc05) bg_popup_sub_pane_cp20

0x8665,	// (0x0001dea7) list_vitu2_match_list_pane

0x4391,	// (0x00019bd3) bg_popup_sub_pane_cp20_g1

0x4399,	// (0x00019bdb) bg_popup_sub_pane_cp20_g2

0x1552,	// (0x00016d94) bg_popup_sub_pane_cp20_g3

0x43a1,	// (0x00019be3) bg_popup_sub_pane_cp20_g4

0x1532,	// (0x00016d74) bg_popup_sub_pane_cp20_g5

0x4628,	// (0x00019e6a) bg_popup_sub_pane_cp20_g6

0x43b1,	// (0x00019bf3) bg_popup_sub_pane_cp20_g7

0x43b9,	// (0x00019bfb) bg_popup_sub_pane_cp20_g8

0x43c1,	// (0x00019c03) bg_popup_sub_pane_cp20_g9

0x0008,

0xf97d,	// (0x000251bf) bg_popup_sub_pane_cp20_g

0x867d,	// (0x0001debf) list_vitu2_match_list_item_pane_ParamLimits

0x867d,	// (0x0001debf) list_vitu2_match_list_item_pane

0x868f,	// (0x0001ded1) list_vitu2_match_list_item_pane_t1

0x73d1,	// (0x0001cc13) bg_popup_sub_pane_cp21

0x127e,	// (0x00016ac0) grid_vitu2_dropdown_list_pane

0x869d,	// (0x0001dedf) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x869d,	// (0x0001dedf) cell_vitu2_dropdown_list_char_pane

0x86bb,	// (0x0001defd) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x86bb,	// (0x0001defd) cell_vitu2_dropdown_list_ctrl_pane

0x466f,	// (0x00019eb1) cell_vitu2_dropdown_list_char_pane_g1

0x4666,	// (0x00019ea8) cell_vitu2_dropdown_list_char_pane_g2

0x465d,	// (0x00019e9f) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf99a,	// (0x000251dc) cell_vitu2_dropdown_list_char_pane_g

0x86e3,	// (0x0001df25) cell_vitu2_dropdown_list_char_pane_t1

0xc0a3,	// (0x000218e5) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xc0a3,	// (0x000218e5) cell_vitu2_dropdown_list_ctrl_pane_g1

0xc0b3,	// (0x000218f5) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xc0b3,	// (0x000218f5) cell_vitu2_dropdown_list_ctrl_pane_g2

0xc0c4,	// (0x00021906) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xc0c4,	// (0x00021906) cell_vitu2_dropdown_list_ctrl_pane_g3

0x86f1,	// (0x0001df33) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x86f1,	// (0x0001df33) cell_vitu2_dropdown_list_ctrl_pane_g4

0x81cb,	// (0x0001da0d) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x81cb,	// (0x0001da0d) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf9a1,	// (0x000251e3) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf9a1,	// (0x000251e3) cell_vitu2_dropdown_list_ctrl_pane_g

0xc0d4,	// (0x00021916) aid_size_cell_gallery2_ParamLimits

0xc0d4,	// (0x00021916) aid_size_cell_gallery2

0xc0ee,	// (0x00021930) grid_gallery2_pane_ParamLimits

0xc0ee,	// (0x00021930) grid_gallery2_pane

0xb79b,	// (0x00020fdd) scroll_pane_cp029_ParamLimits

0xb79b,	// (0x00020fdd) scroll_pane_cp029

0xc0ff,	// (0x00021941) cell_gallery2_pane_ParamLimits

0xc0ff,	// (0x00021941) cell_gallery2_pane

0x4678,	// (0x00019eba) cell_gallery2_pane_g2

0xc14c,	// (0x0002198e) cell_gallery2_pane_g3

0x4680,	// (0x00019ec2) cell_gallery2_pane_g4

0x4688,	// (0x00019eca) cell_gallery2_pane_g5

0x127e,	// (0x00016ac0) grid_highlight_pane_cp10

0x83d2,	// (0x0001dc14) popup_vitu2_match_list_window_ParamLimits

0x83e2,	// (0x0001dc24) popup_vitu2_query_window_ParamLimits

0x83e2,	// (0x0001dc24) popup_vitu2_query_window

0x73d1,	// (0x0001cc13) bg_vitu2_candi_button_pane

0x466f,	// (0x00019eb1) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x4666,	// (0x00019ea8) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x465d,	// (0x00019e9f) cell_vitu2_dropdown_list_char_pane_g2_copy2

0xc154,	// (0x00021996) bg_button_pane_cp015

0xc165,	// (0x000219a7) bg_button_pane_cp016

0xc171,	// (0x000219b3) bg_button_pane_cp017

0x1e72,	// (0x000176b4) bg_popup_sub_pane_cp22

0x4690,	// (0x00019ed2) popup_vitu2_query_window_g1

0xc1af,	// (0x000219f1) popup_vitu2_query_window_g2

0x0002,

0xf9ac,	// (0x000251ee) popup_vitu2_query_window_g

0xc1cf,	// (0x00021a11) popup_vitu2_query_window_t1_ParamLimits

0xc1cf,	// (0x00021a11) popup_vitu2_query_window_t1

0xc202,	// (0x00021a44) popup_vitu2_query_window_t2_ParamLimits

0xc202,	// (0x00021a44) popup_vitu2_query_window_t2

0xc214,	// (0x00021a56) popup_vitu2_query_window_t3_ParamLimits

0xc214,	// (0x00021a56) popup_vitu2_query_window_t3

0xc23c,	// (0x00021a7e) popup_vitu2_query_window_t4_ParamLimits

0xc23c,	// (0x00021a7e) popup_vitu2_query_window_t4

0xc24e,	// (0x00021a90) popup_vitu2_query_window_t5_ParamLimits

0xc24e,	// (0x00021a90) popup_vitu2_query_window_t5

0x0006,

0xf9b3,	// (0x000251f5) popup_vitu2_query_window_t_ParamLimits

0xf9b3,	// (0x000251f5) popup_vitu2_query_window_t

0x44a5,	// (0x00019ce7) main_cset_text_pane

0xbd25,	// (0x00021567) aid_area_touch_slider_ParamLimits

0xbd41,	// (0x00021583) cset_slider_pane_ParamLimits

0xbd64,	// (0x000215a6) main_cset_slider_pane_g1_ParamLimits

0xbd79,	// (0x000215bb) main_cset_slider_pane_g2_ParamLimits

0x44c6,	// (0x00019d08) main_cset_slider_pane_g3_ParamLimits

0x44c6,	// (0x00019d08) main_cset_slider_pane_g3

0xbd8e,	// (0x000215d0) main_cset_slider_pane_g4_ParamLimits

0xbd8e,	// (0x000215d0) main_cset_slider_pane_g4

0xbd9d,	// (0x000215df) main_cset_slider_pane_g5_ParamLimits

0xbd9d,	// (0x000215df) main_cset_slider_pane_g5

0xbda9,	// (0x000215eb) main_cset_slider_pane_g6_ParamLimits

0xbda9,	// (0x000215eb) main_cset_slider_pane_g6

0xf906,	// (0x00025148) main_cset_slider_pane_g_ParamLimits

0x44f6,	// (0x00019d38) main_cset_slider_pane_t1_ParamLimits

0xbe35,	// (0x00021677) main_cset_slider_pane_t2_ParamLimits

0xbe4f,	// (0x00021691) main_cset_slider_pane_t3_ParamLimits

0xbe69,	// (0x000216ab) main_cset_slider_pane_t4_ParamLimits

0xbe83,	// (0x000216c5) main_cset_slider_pane_t5_ParamLimits

0xbe9d,	// (0x000216df) main_cset_slider_pane_t6_ParamLimits

0xbeb2,	// (0x000216f4) main_cset_slider_pane_t7_ParamLimits

0xbedc,	// (0x0002171e) main_cset_slider_pane_t8_ParamLimits

0xbedc,	// (0x0002171e) main_cset_slider_pane_t8

0xbf04,	// (0x00021746) main_cset_slider_pane_t9_ParamLimits

0xbf04,	// (0x00021746) main_cset_slider_pane_t9

0xbf2c,	// (0x0002176e) main_cset_slider_pane_t10_ParamLimits

0xbf2c,	// (0x0002176e) main_cset_slider_pane_t10

0xbf54,	// (0x00021796) main_cset_slider_pane_t11_ParamLimits

0xbf54,	// (0x00021796) main_cset_slider_pane_t11

0xbf7c,	// (0x000217be) main_cset_slider_pane_t12_ParamLimits

0xbf7c,	// (0x000217be) main_cset_slider_pane_t12

0xbf99,	// (0x000217db) main_cset_slider_pane_t13_ParamLimits

0xbf99,	// (0x000217db) main_cset_slider_pane_t13

0xf92b,	// (0x0002516d) main_cset_slider_pane_t_ParamLimits

0x082c,	// (0x0001606e) bg_popup_sub_pane_cp011

0x469c,	// (0x00019ede) main_cset_text_pane_g1

0x46a4,	// (0x00019ee6) main_cset_text_pane_t1

0x46b2,	// (0x00019ef4) main_cset_text_pane_t2

0x46c0,	// (0x00019f02) main_cset_text_pane_t3

0x46ce,	// (0x00019f10) main_cset_text_pane_t4

0x46dc,	// (0x00019f1e) main_cset_text_pane_t5

0x46ea,	// (0x00019f2c) main_cset_text_pane_t6

0x46f8,	// (0x00019f3a) main_cset_text_pane_t7

0x0006,

0xf9c2,	// (0x00025204) main_cset_text_pane_t

0x73d1,	// (0x0001cc13) main_cam4_burst_pane

0x73d1,	// (0x0001cc13) main_cam5_pane

0x447b,	// (0x00019cbd) bg_button_pane_cp019

0x4484,	// (0x00019cc6) bg_button_pane_cp020

0x44d2,	// (0x00019d14) main_cset_slider_pane_g7_ParamLimits

0x44d2,	// (0x00019d14) main_cset_slider_pane_g7

0x44de,	// (0x00019d20) main_cset_slider_pane_g8_ParamLimits

0x44de,	// (0x00019d20) main_cset_slider_pane_g8

0xbdbd,	// (0x000215ff) main_cset_slider_pane_g9_ParamLimits

0xbdbd,	// (0x000215ff) main_cset_slider_pane_g9

0xbdc9,	// (0x0002160b) main_cset_slider_pane_g10_ParamLimits

0xbdc9,	// (0x0002160b) main_cset_slider_pane_g10

0xbdd5,	// (0x00021617) main_cset_slider_pane_g11_ParamLimits

0xbdd5,	// (0x00021617) main_cset_slider_pane_g11

0xbde1,	// (0x00021623) main_cset_slider_pane_g12_ParamLimits

0xbde1,	// (0x00021623) main_cset_slider_pane_g12

0xbded,	// (0x0002162f) main_cset_slider_pane_g13_ParamLimits

0xbded,	// (0x0002162f) main_cset_slider_pane_g13

0xbdf9,	// (0x0002163b) main_cset_slider_pane_g14_ParamLimits

0xbdf9,	// (0x0002163b) main_cset_slider_pane_g14

0xbe05,	// (0x00021647) main_cset_slider_pane_g15_ParamLimits

0xbe05,	// (0x00021647) main_cset_slider_pane_g15

0x451e,	// (0x00019d60) main_cset_slider_pane_t14_ParamLimits

0x451e,	// (0x00019d60) main_cset_slider_pane_t14

0x4557,	// (0x00019d99) main_cset_slider_pane_t15_ParamLimits

0x4557,	// (0x00019d99) main_cset_slider_pane_t15

0xc2b6,	// (0x00021af8) aid_cam4_burst_size_cell_ParamLimits

0xc2b6,	// (0x00021af8) aid_cam4_burst_size_cell

0xc2d2,	// (0x00021b14) grid_cam4_burst_pane_ParamLimits

0xc2d2,	// (0x00021b14) grid_cam4_burst_pane

0xc2f4,	// (0x00021b36) linegrid_cam4_burst_pane_ParamLimits

0xc2f4,	// (0x00021b36) linegrid_cam4_burst_pane

0xc312,	// (0x00021b54) scroll_pane_cp30_ParamLimits

0xc312,	// (0x00021b54) scroll_pane_cp30

0xc31e,	// (0x00021b60) cell_cam4_burst_pane_ParamLimits

0xc31e,	// (0x00021b60) cell_cam4_burst_pane

0x4706,	// (0x00019f48) linegrid_cam4_burst_pane_g1_ParamLimits

0x4706,	// (0x00019f48) linegrid_cam4_burst_pane_g1

0xc356,	// (0x00021b98) linegrid_cam4_burst_pane_g2_ParamLimits

0xc356,	// (0x00021b98) linegrid_cam4_burst_pane_g2

0x4713,	// (0x00019f55) linegrid_cam4_burst_pane_g3_ParamLimits

0x4713,	// (0x00019f55) linegrid_cam4_burst_pane_g3

0x0002,

0xf9d1,	// (0x00025213) linegrid_cam4_burst_pane_g_ParamLimits

0xf9d1,	// (0x00025213) linegrid_cam4_burst_pane_g

0xc367,	// (0x00021ba9) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xc367,	// (0x00021ba9) linegrid_cam4_burst_pane_g3_copy1

0x4720,	// (0x00019f62) linegrid_cam4_burst_pane_g4_ParamLimits

0x4720,	// (0x00019f62) linegrid_cam4_burst_pane_g4

0xc381,	// (0x00021bc3) linegrid_cam4_burst_pane_g5_ParamLimits

0xc381,	// (0x00021bc3) linegrid_cam4_burst_pane_g5

0xc392,	// (0x00021bd4) linegrid_cam4_burst_pane_g6_ParamLimits

0xc392,	// (0x00021bd4) linegrid_cam4_burst_pane_g6

0x472d,	// (0x00019f6f) linegrid_cam4_burst_pane_g7_ParamLimits

0x472d,	// (0x00019f6f) linegrid_cam4_burst_pane_g7

0xc3a3,	// (0x00021be5) cell_cam4_burst_pane_g1

0x4746,	// (0x00019f88) main_cam5_pane_t1_ParamLimits

0x4746,	// (0x00019f88) main_cam5_pane_t1

0x4758,	// (0x00019f9a) main_cam5_pane_t2_ParamLimits

0x4758,	// (0x00019f9a) main_cam5_pane_t2

0x476a,	// (0x00019fac) main_cam5_pane_t3_ParamLimits

0x476a,	// (0x00019fac) main_cam5_pane_t3

0x477c,	// (0x00019fbe) main_cam5_pane_t4_ParamLimits

0x477c,	// (0x00019fbe) main_cam5_pane_t4

0x4792,	// (0x00019fd4) main_cam5_pane_t5_ParamLimits

0x4792,	// (0x00019fd4) main_cam5_pane_t5

0x47a4,	// (0x00019fe6) main_cam5_pane_t6_ParamLimits

0x47a4,	// (0x00019fe6) main_cam5_pane_t6

0x47b6,	// (0x00019ff8) main_cam5_pane_t7_ParamLimits

0x47b6,	// (0x00019ff8) main_cam5_pane_t7

0x47c8,	// (0x0001a00a) main_cam5_pane_t8_ParamLimits

0x47c8,	// (0x0001a00a) main_cam5_pane_t8

0x47e4,	// (0x0001a026) main_cam5_pane_t9_ParamLimits

0x47e4,	// (0x0001a026) main_cam5_pane_t9

0x47f6,	// (0x0001a038) main_cam5_pane_t10_ParamLimits

0x47f6,	// (0x0001a038) main_cam5_pane_t10

0x4808,	// (0x0001a04a) main_cam5_pane_t11_ParamLimits

0x4808,	// (0x0001a04a) main_cam5_pane_t11

0x481a,	// (0x0001a05c) main_cam5_pane_t12_ParamLimits

0x481a,	// (0x0001a05c) main_cam5_pane_t12

0x482f,	// (0x0001a071) main_cam5_pane_t13_ParamLimits

0x482f,	// (0x0001a071) main_cam5_pane_t13

0x000c,

0xf9dd,	// (0x0002521f) main_cam5_pane_t_ParamLimits

0xf9dd,	// (0x0002521f) main_cam5_pane_t

0x7382,	// (0x0001cbc4) popup_scut_keymap_window_ParamLimits

0x7382,	// (0x0001cbc4) popup_scut_keymap_window

0xc3b6,	// (0x00021bf8) aid_size_cell_brow_shortcut

0x127e,	// (0x00016ac0) bg_popup_window_pane_cp010

0xc3c2,	// (0x00021c04) grid_scut_pane

0xc3cc,	// (0x00021c0e) cell_scut_pane_ParamLimits

0xc3cc,	// (0x00021c0e) cell_scut_pane

0xc3e1,	// (0x00021c23) cell_scut_pane_g1

0x484c,	// (0x0001a08e) cell_scut_pane_t1

0x485b,	// (0x0001a09d) cell_scut_pane_t2

0xc3ea,	// (0x00021c2c) cell_scut_pane_t3

0x0002,

0xf9f8,	// (0x0002523a) cell_scut_pane_t

0xb14c,	// (0x0002098e) main_mup3_pane_g8_ParamLimits

0xb14c,	// (0x0002098e) main_mup3_pane_g8

0x8330,	// (0x0001db72) area_vitu2_query_pane_ParamLimits

0x8330,	// (0x0001db72) area_vitu2_query_pane

0xc17d,	// (0x000219bf) input_focus_pane_cp08

0x486a,	// (0x0001a0ac) area_vitu2_query_pane_g1

0xc3f8,	// (0x00021c3a) area_vitu2_query_pane_g2

0x0001,

0xf9ff,	// (0x00025241) area_vitu2_query_pane_g

0xc407,	// (0x00021c49) area_vitu2_query_pane_t1_ParamLimits

0xc407,	// (0x00021c49) area_vitu2_query_pane_t1

0xc419,	// (0x00021c5b) area_vitu2_query_pane_t2_ParamLimits

0xc419,	// (0x00021c5b) area_vitu2_query_pane_t2

0xc42b,	// (0x00021c6d) area_vitu2_query_pane_t3_ParamLimits

0xc42b,	// (0x00021c6d) area_vitu2_query_pane_t3

0x4876,	// (0x0001a0b8) area_vitu2_query_pane_t4_ParamLimits

0x4876,	// (0x0001a0b8) area_vitu2_query_pane_t4

0x489e,	// (0x0001a0e0) area_vitu2_query_pane_t5_ParamLimits

0x489e,	// (0x0001a0e0) area_vitu2_query_pane_t5

0x48c6,	// (0x0001a108) area_vitu2_query_pane_t6_ParamLimits

0x48c6,	// (0x0001a108) area_vitu2_query_pane_t6

0x0006,

0xfa04,	// (0x00025246) area_vitu2_query_pane_t_ParamLimits

0xfa04,	// (0x00025246) area_vitu2_query_pane_t

0xc165,	// (0x000219a7) bg_button_pane_cp018

0xc453,	// (0x00021c95) bg_button_pane_cp021

0xc45f,	// (0x00021ca1) bg_button_pane_cp022

0xc47e,	// (0x00021cc0) input_focus_pane_cp09

0xa29f,	// (0x0001fae1) aid_size_touch_mv_arrow_left

0x1c22,	// (0x00017464) aid_size_touch_mv_arrow_right

0xbe1d,	// (0x0002165f) main_cset_slider_pane_g16_ParamLimits

0xbe1d,	// (0x0002165f) main_cset_slider_pane_g16

0xbe29,	// (0x0002166b) main_cset_slider_pane_g17_ParamLimits

0xbe29,	// (0x0002166b) main_cset_slider_pane_g17

0xc3a3,	// (0x00021be5) cell_cam4_burst_pane_g1_ParamLimits

0x082c,	// (0x0001606e) compa_mode_pane

0xc00e,	// (0x00021850) popup_vtel_slider_window_g3_ParamLimits

0xc00e,	// (0x00021850) popup_vtel_slider_window_g3

0xc022,	// (0x00021864) popup_vtel_slider_window_g4_ParamLimits

0xc022,	// (0x00021864) popup_vtel_slider_window_g4

0xc036,	// (0x00021878) popup_vtel_slider_window_t1_ParamLimits

0xc036,	// (0x00021878) popup_vtel_slider_window_t1

0x73d1,	// (0x0001cc13) main_cl_pane

0x7968,	// (0x0001d1aa) popup_imed_adjust2_window_ParamLimits

0x1e72,	// (0x000176b4) bg_tb_trans_pane_cp05_ParamLimits

0x3b7b,	// (0x000193bd) popup_imed_adjust2_window_g1_ParamLimits

0x3b8a,	// (0x000193cc) popup_imed_adjust2_window_g2_ParamLimits

0x3b8a,	// (0x000193cc) popup_imed_adjust2_window_g2

0x3b96,	// (0x000193d8) popup_imed_adjust2_window_g3_ParamLimits

0x3b96,	// (0x000193d8) popup_imed_adjust2_window_g3

0x0002,

0xf76b,	// (0x00024fad) popup_imed_adjust2_window_g_ParamLimits

0xf76b,	// (0x00024fad) popup_imed_adjust2_window_g

0x3ba2,	// (0x000193e4) popup_imed_adjust2_window_t1_ParamLimits

0x3bba,	// (0x000193fc) slider_imed_adjust_pane_ParamLimits

0x3bce,	// (0x00019410) slider_imed_adjust_pane_g1_ParamLimits

0x3bde,	// (0x00019420) slider_imed_adjust_pane_g2_ParamLimits

0x3bee,	// (0x00019430) slider_imed_adjust_pane_g3_ParamLimits

0x3bff,	// (0x00019441) slider_imed_adjust_pane_g4_ParamLimits

0xf772,	// (0x00024fb4) slider_imed_adjust_pane_g_ParamLimits

0x810e,	// (0x0001d950) aid_touch_area_cam4_ParamLimits

0x810e,	// (0x0001d950) aid_touch_area_cam4

0x811c,	// (0x0001d95e) battery_pane_cp01

0x819b,	// (0x0001d9dd) main_camera4_pane_g6_ParamLimits

0x819b,	// (0x0001d9dd) main_camera4_pane_g6

0x81b9,	// (0x0001d9fb) main_camera4_pane_t2_ParamLimits

0x81b9,	// (0x0001d9fb) main_camera4_pane_t2

0x0001,

0xf879,	// (0x000250bb) main_camera4_pane_t_ParamLimits

0xf879,	// (0x000250bb) main_camera4_pane_t

0x822b,	// (0x0001da6d) aid_touch_area_vid4_ParamLimits

0x822b,	// (0x0001da6d) aid_touch_area_vid4

0x819b,	// (0x0001d9dd) main_video4_pane_g5_ParamLimits

0x819b,	// (0x0001d9dd) main_video4_pane_g5

0x825b,	// (0x0001da9d) vid4_progress_pane_ParamLimits

0x825b,	// (0x0001da9d) vid4_progress_pane

0x44ea,	// (0x00019d2c) main_cset_slider_pane_g18_ParamLimits

0x44ea,	// (0x00019d2c) main_cset_slider_pane_g18

0x473a,	// (0x00019f7c) cell_cam4_burst_pane_g2_ParamLimits

0x473a,	// (0x00019f7c) cell_cam4_burst_pane_g2

0x0001,

0xf9d8,	// (0x0002521a) cell_cam4_burst_pane_g_ParamLimits

0xf9d8,	// (0x0002521a) cell_cam4_burst_pane_g

0xc48e,	// (0x00021cd0) bg_cl_pane_ParamLimits

0xc48e,	// (0x00021cd0) bg_cl_pane

0xc49a,	// (0x00021cdc) cl_header_pane_ParamLimits

0xc49a,	// (0x00021cdc) cl_header_pane

0xc4a6,	// (0x00021ce8) cl_listscroll_pane_ParamLimits

0xc4a6,	// (0x00021ce8) cl_listscroll_pane

0x4912,	// (0x0001a154) bg_cl_pane_g1

0x491a,	// (0x0001a15c) bg_cl_pane_g2

0x4922,	// (0x0001a164) bg_cl_pane_g3

0x492a,	// (0x0001a16c) bg_cl_pane_g4

0x4932,	// (0x0001a174) bg_cl_pane_g5

0x493a,	// (0x0001a17c) bg_cl_pane_g6

0x4942,	// (0x0001a184) bg_cl_pane_g7

0x494a,	// (0x0001a18c) bg_cl_pane_g8

0x4952,	// (0x0001a194) bg_cl_pane_g9

0x0008,

0xfa13,	// (0x00025255) bg_cl_pane_g

0xc4b2,	// (0x00021cf4) aid_height_cl_leading_ParamLimits

0xc4b2,	// (0x00021cf4) aid_height_cl_leading

0xc4be,	// (0x00021d00) aid_height_cl_text_ParamLimits

0xc4be,	// (0x00021d00) aid_height_cl_text

0x0f8f,	// (0x000167d1) bg_cl_header_pane_ParamLimits

0x0f8f,	// (0x000167d1) bg_cl_header_pane

0xc4d6,	// (0x00021d18) cl_header_pane_g1_ParamLimits

0xc4d6,	// (0x00021d18) cl_header_pane_g1

0xc4e3,	// (0x00021d25) cl_header_pane_t1_ParamLimits

0xc4e3,	// (0x00021d25) cl_header_pane_t1

0x495a,	// (0x0001a19c) cl_list_pane

0x4963,	// (0x0001a1a5) hc_scroll_pane_cp01

0x1532,	// (0x00016d74) bg_cl_header_pane_g1

0x4391,	// (0x00019bd3) bg_cl_header_pane_g2

0x1552,	// (0x00016d94) bg_cl_header_pane_g3

0x43a1,	// (0x00019be3) bg_cl_header_pane_g4

0x4399,	// (0x00019bdb) bg_cl_header_pane_g5

0x4628,	// (0x00019e6a) bg_cl_header_pane_g6

0x43b9,	// (0x00019bfb) bg_cl_header_pane_g7

0x43c1,	// (0x00019c03) bg_cl_header_pane_g8

0x43b1,	// (0x00019bf3) bg_cl_header_pane_g9

0x0008,

0xfa26,	// (0x00025268) bg_cl_header_pane_g

0xc4f5,	// (0x00021d37) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xc4f5,	// (0x00021d37) hc_cl_list_double_graphic_heading_pane

0xc505,	// (0x00021d47) hc_cl_list_single_graphic_pane_ParamLimits

0xc505,	// (0x00021d47) hc_cl_list_single_graphic_pane

0xc517,	// (0x00021d59) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xc517,	// (0x00021d59) hc_cl_list_single_graphic_pane_g1

0xc523,	// (0x00021d65) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xc523,	// (0x00021d65) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa39,	// (0x0002527b) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa39,	// (0x0002527b) hc_cl_list_single_graphic_pane_g

0xc537,	// (0x00021d79) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xc537,	// (0x00021d79) hc_cl_list_single_graphic_pane_t1

0xc517,	// (0x00021d59) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xc517,	// (0x00021d59) hc_cl_list_double_graphic_heading_pane_g1

0xc54c,	// (0x00021d8e) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xc54c,	// (0x00021d8e) hc_cl_list_double_graphic_heading_pane_g2

0xc560,	// (0x00021da2) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xc560,	// (0x00021da2) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa3e,	// (0x00025280) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa3e,	// (0x00025280) hc_cl_list_double_graphic_heading_pane_g

0xc574,	// (0x00021db6) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xc574,	// (0x00021db6) hc_cl_list_double_graphic_heading_pane_t1

0xc589,	// (0x00021dcb) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xc589,	// (0x00021dcb) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa45,	// (0x00025287) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa45,	// (0x00025287) hc_cl_list_double_graphic_heading_pane_t

0x870a,	// (0x0001df4c) vid4_progress_pane_g1

0x8719,	// (0x0001df5b) vid4_progress_pane_g2

0x8728,	// (0x0001df6a) vid4_progress_pane_g3

0x8737,	// (0x0001df79) vid4_progress_pane_g4

0x0004,

0xfa4a,	// (0x0002528c) vid4_progress_pane_g

0x874f,	// (0x0001df91) vid4_progress_pane_t1

0x8765,	// (0x0001dfa7) vid4_progress_pane_t2

0x0002,

0xfa55,	// (0x00025297) vid4_progress_pane_t

0x878f,	// (0x0001dfd1) wait_bar_pane_cp07

0x34a6,	// (0x00018ce8) blid_firmament_pane_ParamLimits

0x34e7,	// (0x00018d29) popup_blid_sat_info2_window_g1

0x350b,	// (0x00018d4d) popup_blid_sat_info2_window_t3

0x3519,	// (0x00018d5b) popup_blid_sat_info2_window_t4

0x3527,	// (0x00018d69) popup_blid_sat_info2_window_t5

0x3535,	// (0x00018d77) popup_blid_sat_info2_window_t6

0x3545,	// (0x00018d87) popup_blid_sat_info2_window_t7

0x3553,	// (0x00018d95) popup_blid_sat_info2_window_t8

0x3561,	// (0x00018da3) popup_blid_sat_info2_window_t9

0x356f,	// (0x00018db1) popup_blid_sat_info2_window_t10

0x362a,	// (0x00018e6c) aid_firma_cardinal_ParamLimits

0x363e,	// (0x00018e80) blid_firmament_pane_t1_ParamLimits

0x3655,	// (0x00018e97) blid_firmament_pane_t2_ParamLimits

0x366c,	// (0x00018eae) blid_firmament_pane_t3_ParamLimits

0x3683,	// (0x00018ec5) blid_firmament_pane_t4_ParamLimits

0xf664,	// (0x00024ea6) blid_firmament_pane_t_ParamLimits

0x369a,	// (0x00018edc) blid_sat_info_pane_ParamLimits

0x78dc,	// (0x0001d11e) main_cam_set_pane_ParamLimits

0xb73b,	// (0x00020f7d) aid_size_cell_colour_35_ParamLimits

0xb752,	// (0x00020f94) aid_size_cell_colour_112_ParamLimits

0xb769,	// (0x00020fab) aid_size_cell_effect_ParamLimits

0x087f,	// (0x000160c1) bg_tb_trans_pane_cp02_ParamLimits

0x1857,	// (0x00017099) heading_imed_pane_ParamLimits

0xb783,	// (0x00020fc5) listscroll_imed_pane_ParamLimits

0x289d,	// (0x000180df) popup_call2_audio_first_window_g5_ParamLimits

0x289d,	// (0x000180df) popup_call2_audio_first_window_g5

0x7ef5,	// (0x0001d737) aid_size_touch_image3_arrow_left_ParamLimits

0x7ef5,	// (0x0001d737) aid_size_touch_image3_arrow_left

0x7f09,	// (0x0001d74b) aid_size_touch_image3_arrow_right_ParamLimits

0x7f09,	// (0x0001d74b) aid_size_touch_image3_arrow_right

0x877a,	// (0x0001dfbc) vid4_progress_pane_t3

0xb8e7,	// (0x00021129) main_hwr_training_symbol_option_pane_ParamLimits

0xb8e7,	// (0x00021129) main_hwr_training_symbol_option_pane

0x3da8,	// (0x000195ea) popup_hwr_training_preview_window_ParamLimits

0x3da8,	// (0x000195ea) popup_hwr_training_preview_window

0x7be1,	// (0x0001d423) hwr_training_navi_pane_g5_ParamLimits

0x7be1,	// (0x0001d423) hwr_training_navi_pane_g5

0x437f,	// (0x00019bc1) popup_char_count_window

0x73c3,	// (0x0001cc05) bg_popup_sub_pane_cp20_ParamLimits

0x8665,	// (0x0001dea7) list_vitu2_match_list_pane_ParamLimits

0x8671,	// (0x0001deb3) vitu2_page_scroll_pane_ParamLimits

0x8671,	// (0x0001deb3) vitu2_page_scroll_pane

0x4a20,	// (0x0001a262) list_single_hwr_training_symbol_option_pane_ParamLimits

0x4a20,	// (0x0001a262) list_single_hwr_training_symbol_option_pane

0x4a33,	// (0x0001a275) list_single_hwr_training_symbol_option_pane_g1

0x4a3b,	// (0x0001a27d) list_single_hwr_training_symbol_option_pane_t1

0x4a49,	// (0x0001a28b) bg_button_pane_cp023

0x4a52,	// (0x0001a294) bg_button_pane_cp024

0xc5cd,	// (0x00021e0f) vitu2_page_scroll_pane_g1

0xc5d5,	// (0x00021e17) vitu2_page_scroll_pane_g2

0x0001,

0xfa5c,	// (0x0002529e) vitu2_page_scroll_pane_g

0xc5dd,	// (0x00021e1f) vitu2_page_scroll_pane_t1

0x36c9,	// (0x00018f0b) popup_char_count_window_g1

0x4a85,	// (0x0001a2c7) popup_char_count_window_g2

0x4a8e,	// (0x0001a2d0) popup_char_count_window_g3

0x0002,

0xfa61,	// (0x000252a3) popup_char_count_window_g

0x4a97,	// (0x0001a2d9) popup_char_count_window_t1

0x73d1,	// (0x0001cc13) main_vded2_pane

0x3b69,	// (0x000193ab) aid_size_cell_imed_line

0x3b73,	// (0x000193b5) grid_imed_line_width_pane

0x82a6,	// (0x0001dae8) vid4_indicators_pane_g4

0x4aa5,	// (0x0001a2e7) cell_imed_line_width_pane_ParamLimits

0x4aa5,	// (0x0001a2e7) cell_imed_line_width_pane

0x4ab7,	// (0x0001a2f9) cell_imed_line_width_pane_g1

0x4ac0,	// (0x0001a302) cell_imed_line_width_pane_g2

0x0001,

0xfa68,	// (0x000252aa) cell_imed_line_width_pane_g

0xc5ec,	// (0x00021e2e) main_vded2_pane_g1_ParamLimits

0xc5ec,	// (0x00021e2e) main_vded2_pane_g1

0xc5f9,	// (0x00021e3b) main_vded2_pane_g2_ParamLimits

0xc5f9,	// (0x00021e3b) main_vded2_pane_g2

0x0001,

0xfa6d,	// (0x000252af) main_vded2_pane_g_ParamLimits

0xfa6d,	// (0x000252af) main_vded2_pane_g

0xc605,	// (0x00021e47) vded2_slider_pane_ParamLimits

0xc605,	// (0x00021e47) vded2_slider_pane

0xc612,	// (0x00021e54) aid_size_touch_vded2_end

0xc61a,	// (0x00021e5c) aid_size_touch_vded2_playhead

0xc622,	// (0x00021e64) aid_size_touch_vded2_start

0xc62a,	// (0x00021e6c) vded2_slider_bg_pane

0xc633,	// (0x00021e75) vded2_slider_pane_g1

0xc63c,	// (0x00021e7e) vded2_slider_pane_g2

0xc644,	// (0x00021e86) vded2_slider_pane_g3

0x0002,

0xfa72,	// (0x000252b4) vded2_slider_pane_g

0xc64d,	// (0x00021e8f) vded2_slider_bg_pane_g1

0xc656,	// (0x00021e98) vded2_slider_bg_pane_g2

0xc65f,	// (0x00021ea1) vded2_slider_bg_pane_g3

0x0002,

0xfa79,	// (0x000252bb) vded2_slider_bg_pane_g

0xa57a,	// (0x0001fdbc) aid_postcard_touch_down_pane_ParamLimits

0xa57a,	// (0x0001fdbc) aid_postcard_touch_down_pane

0xa586,	// (0x0001fdc8) aid_postcard_touch_up_pane_ParamLimits

0xa586,	// (0x0001fdc8) aid_postcard_touch_up_pane

0x73d1,	// (0x0001cc13) main_blid2_pane

0x7905,	// (0x0001d147) popup_blid2_search_window

0x082c,	// (0x0001606e) blid2_gps_pane

0x082c,	// (0x0001606e) blid2_navig_pane

0x082c,	// (0x0001606e) blid2_search_pane

0x082c,	// (0x0001606e) blid2_tripm_pane

0xc668,	// (0x00021eaa) blid2_search_pane_g1_ParamLimits

0xc668,	// (0x00021eaa) blid2_search_pane_g1

0xc674,	// (0x00021eb6) blid2_search_pane_t1_ParamLimits

0xc674,	// (0x00021eb6) blid2_search_pane_t1

0xc686,	// (0x00021ec8) aid_size_cell_blid2_gps_ParamLimits

0xc686,	// (0x00021ec8) aid_size_cell_blid2_gps

0xc696,	// (0x00021ed8) blid2_gps_pane_g1_ParamLimits

0xc696,	// (0x00021ed8) blid2_gps_pane_g1

0xc6a2,	// (0x00021ee4) grid_blid2_satellite_pane_ParamLimits

0xc6a2,	// (0x00021ee4) grid_blid2_satellite_pane

0xc6ae,	// (0x00021ef0) blid2_navig_pane_g1_ParamLimits

0xc6ae,	// (0x00021ef0) blid2_navig_pane_g1

0xc6ba,	// (0x00021efc) blid2_navig_pane_t1_ParamLimits

0xc6ba,	// (0x00021efc) blid2_navig_pane_t1

0xc6cc,	// (0x00021f0e) blid2_navig_pane_t2_ParamLimits

0xc6cc,	// (0x00021f0e) blid2_navig_pane_t2

0x0001,

0xfa80,	// (0x000252c2) blid2_navig_pane_t_ParamLimits

0xfa80,	// (0x000252c2) blid2_navig_pane_t

0xc6de,	// (0x00021f20) blid2_navig_ring_pane_ParamLimits

0xc6de,	// (0x00021f20) blid2_navig_ring_pane

0xc6ea,	// (0x00021f2c) blid2_speed_pane_ParamLimits

0xc6ea,	// (0x00021f2c) blid2_speed_pane

0xc6f6,	// (0x00021f38) blid2_tripm_pane_g1_ParamLimits

0xc6f6,	// (0x00021f38) blid2_tripm_pane_g1

0xc702,	// (0x00021f44) blid2_tripm_pane_g2_ParamLimits

0xc702,	// (0x00021f44) blid2_tripm_pane_g2

0xc70e,	// (0x00021f50) blid2_tripm_pane_g3_ParamLimits

0xc70e,	// (0x00021f50) blid2_tripm_pane_g3

0xc71a,	// (0x00021f5c) blid2_tripm_pane_g4_ParamLimits

0xc71a,	// (0x00021f5c) blid2_tripm_pane_g4

0xc726,	// (0x00021f68) blid2_tripm_pane_g5_ParamLimits

0xc726,	// (0x00021f68) blid2_tripm_pane_g5

0x0005,

0xfa85,	// (0x000252c7) blid2_tripm_pane_g_ParamLimits

0xfa85,	// (0x000252c7) blid2_tripm_pane_g

0xc73e,	// (0x00021f80) blid2_tripm_pane_t1_ParamLimits

0xc73e,	// (0x00021f80) blid2_tripm_pane_t1

0xc750,	// (0x00021f92) blid2_tripm_pane_t2_ParamLimits

0xc750,	// (0x00021f92) blid2_tripm_pane_t2

0xc762,	// (0x00021fa4) blid2_tripm_pane_t3_ParamLimits

0xc762,	// (0x00021fa4) blid2_tripm_pane_t3

0x0003,

0xfa92,	// (0x000252d4) blid2_tripm_pane_t_ParamLimits

0xfa92,	// (0x000252d4) blid2_tripm_pane_t

0xc792,	// (0x00021fd4) cell_blid2_satellite_pane_ParamLimits

0xc792,	// (0x00021fd4) cell_blid2_satellite_pane

0xc7aa,	// (0x00021fec) cell_blid2_satellite_pane_g1

0x4ac8,	// (0x0001a30a) cell_blid2_satellite_pane_t1

0x12f6,	// (0x00016b38) blid2_speed_pane_g1

0x4ad6,	// (0x0001a318) blid2_speed_pane_t1

0x4ae4,	// (0x0001a326) blid2_speed_pane_t2

0x0001,

0xfa9b,	// (0x000252dd) blid2_speed_pane_t

0x12f6,	// (0x00016b38) blid2_navig_ring_pane_g1

0xc7b3,	// (0x00021ff5) blid2_navig_ring_pane_g2

0xc7bb,	// (0x00021ffd) blid2_navig_ring_pane_g3

0xc7c3,	// (0x00022005) blid2_navig_ring_pane_g4

0xc7cb,	// (0x0002200d) blid2_navig_ring_pane_g5

0x0004,

0xfaa0,	// (0x000252e2) blid2_navig_ring_pane_g

0x082c,	// (0x0001606e) bg_popup_window_pane_cp011

0x4af2,	// (0x0001a334) popup_blid2_search_window_g1

0x4afa,	// (0x0001a33c) popup_blid2_search_window_t1

0x4b08,	// (0x0001a34a) popup_blid2_search_window_t2

0x0001,

0xfaab,	// (0x000252ed) popup_blid2_search_window_t

0x1441,	// (0x00016c83) main_browser_pane_g1

0x1019,	// (0x0001685b) main_browser_pane_ParamLimits

0x78dc,	// (0x0001d11e) bg_button_pane_cp011_ParamLimits

0x858d,	// (0x0001ddcf) cell_vitu2_function_pane_g1_ParamLimits

0x1e72,	// (0x000176b4) bg_popup_sub_pane_cp22_ParamLimits

0xc17d,	// (0x000219bf) input_focus_pane_cp08_ParamLimits

0xc198,	// (0x000219da) popup_vitu2_query_button_pane_ParamLimits

0xc198,	// (0x000219da) popup_vitu2_query_button_pane

0xc1a7,	// (0x000219e9) popup_vitu2_query_input_button_pane

0x4690,	// (0x00019ed2) popup_vitu2_query_window_g1_ParamLimits

0xc1af,	// (0x000219f1) popup_vitu2_query_window_g2_ParamLimits

0xf9ac,	// (0x000251ee) popup_vitu2_query_window_g_ParamLimits

0x082c,	// (0x0001606e) bg_button_pane_cp026

0xc7d3,	// (0x00022015) popup_vitu2_query_input_button_pane_g1

0x082c,	// (0x0001606e) bg_button_pane_cp025

0x4b16,	// (0x0001a358) popup_vitu2_query_button_pane_t1

0xaeca,	// (0x0002070c) main_mp3_pane_t6

0xaed8,	// (0x0002071a) popup_slider_window_cp01

0x81d9,	// (0x0001da1b) cam4_battery_pane

0x81d9,	// (0x0001da1b) cam4_battery_pane_cp02

0x81d9,	// (0x0001da1b) cam4_battery_pane_cp01

0x81d9,	// (0x0001da1b) cam4_battery_pane_cp03

0x4b24,	// (0x0001a366) cam4_battery_pane_g1

0x12f6,	// (0x00016b38) cam4_battery_pane_g2

0x0001,

0xfab0,	// (0x000252f2) cam4_battery_pane_g

0x357d,	// (0x00018dbf) popup_blid_sat_info2_window_t11

0xa29f,	// (0x0001fae1) aid_size_touch_mv_arrow_left_ParamLimits

0x1c22,	// (0x00017464) aid_size_touch_mv_arrow_right_ParamLimits

0x1c7b,	// (0x000174bd) navi_pane_g1_ParamLimits

0x1c87,	// (0x000174c9) navi_pane_g2_ParamLimits

0xa2c3,	// (0x0001fb05) navi_pane_g3_ParamLimits

0xf365,	// (0x00024ba7) navi_pane_g_ParamLimits

0xa2e0,	// (0x0001fb22) navi_pane_mv_t1_ParamLimits

0xb78f,	// (0x00020fd1) grid_imed_effect_pane_ParamLimits

0x913e,	// (0x0001e980) aid_placing_vt_slider_lsc

0x1383,	// (0x00016bc5) aid_placing_vt_slider_prt

0x087f,	// (0x000160c1) bg_tb_trans_pane_cp01_ParamLimits

0x37e1,	// (0x00019023) popup_image_details_window_g1_ParamLimits

0x37f4,	// (0x00019036) popup_image_details_window_g2_ParamLimits

0x3809,	// (0x0001904b) popup_image_details_window_g3_ParamLimits

0x3809,	// (0x0001904b) popup_image_details_window_g3

0xf6a4,	// (0x00024ee6) popup_image_details_window_g_ParamLimits

0x381d,	// (0x0001905f) popup_image_details_window_t1_ParamLimits

0x382f,	// (0x00019071) popup_image_details_window_t2_ParamLimits

0x3848,	// (0x0001908a) popup_image_details_window_t3_ParamLimits

0x385c,	// (0x0001909e) popup_image_details_window_t4_ParamLimits

0x3877,	// (0x000190b9) popup_image_details_window_t5_ParamLimits

0xf6ab,	// (0x00024eed) popup_image_details_window_t_ParamLimits

0xc4ca,	// (0x00021d0c) cl_header_name_pane_ParamLimits

0xc4ca,	// (0x00021d0c) cl_header_name_pane

0xc7db,	// (0x0002201d) cl_header_name_pane_t1_ParamLimits

0xc7db,	// (0x0002201d) cl_header_name_pane_t1

0xc7f2,	// (0x00022034) cl_header_name_pane_t2_ParamLimits

0xc7f2,	// (0x00022034) cl_header_name_pane_t2

0xc81c,	// (0x0002205e) cl_header_name_pane_t3_ParamLimits

0xc81c,	// (0x0002205e) cl_header_name_pane_t3

0x0002,

0xfab5,	// (0x000252f7) cl_header_name_pane_t_ParamLimits

0xfab5,	// (0x000252f7) cl_header_name_pane_t

0x1d14,	// (0x00017556) navi_pane_mv_g2_ParamLimits

0x434a,	// (0x00019b8c) field_vitu2_entry_pane_g1_ParamLimits

0x4356,	// (0x00019b98) field_vitu2_entry_pane_g2_ParamLimits

0x1e3c,	// (0x0001767e) field_vitu2_entry_pane_g3_ParamLimits

0x1e3c,	// (0x0001767e) field_vitu2_entry_pane_g3

0xf8ab,	// (0x000250ed) field_vitu2_entry_pane_g_ParamLimits

0x8453,	// (0x0001dc95) cell_vitu2_itu_pane_g1_ParamLimits

0x846b,	// (0x0001dcad) cell_vitu2_itu_pane_g2_ParamLimits

0x846b,	// (0x0001dcad) cell_vitu2_itu_pane_g2

0x0001,

0xf8b7,	// (0x000250f9) cell_vitu2_itu_pane_g_ParamLimits

0xf8b7,	// (0x000250f9) cell_vitu2_itu_pane_g

0x78dc,	// (0x0001d11e) bg_vkb2_func_pane_cp05_ParamLimits

0x78dc,	// (0x0001d11e) bg_vkb2_func_pane_cp05

0x78dc,	// (0x0001d11e) bg_vkb2_func_pane_cp03

0x78dc,	// (0x0001d11e) bg_vkb2_func_pane_cp04

0x78dc,	// (0x0001d11e) bg_vkb2_func_pane_cp10_ParamLimits

0x78dc,	// (0x0001d11e) bg_vkb2_func_pane_cp10

0xc46e,	// (0x00021cb0) bg_vkb2_func_pane_cp08

0xc165,	// (0x000219a7) bg_vkb2_func_pane_cp06

0xc453,	// (0x00021c95) bg_vkb2_func_pane_cp07

0x4a5b,	// (0x0001a29d) bg_vkb2_func_pane_cp11_ParamLimits

0x4a5b,	// (0x0001a29d) bg_vkb2_func_pane_cp11

0x4a70,	// (0x0001a2b2) bg_vkb2_func_pane_cp12_ParamLimits

0x4a70,	// (0x0001a2b2) bg_vkb2_func_pane_cp12

0x082c,	// (0x0001606e) bg_vkb2_func_pane_cp09

0x4391,	// (0x00019bd3) bg_vkb2_func_pane_g1

0x1552,	// (0x00016d94) bg_vkb2_func_pane_g2

0x4399,	// (0x00019bdb) bg_vkb2_func_pane_g3

0x43a1,	// (0x00019be3) bg_vkb2_func_pane_g4

0x4628,	// (0x00019e6a) bg_vkb2_func_pane_g5

0x43b9,	// (0x00019bfb) bg_vkb2_func_pane_g6

0x43c1,	// (0x00019c03) bg_vkb2_func_pane_g7

0x43b1,	// (0x00019bf3) bg_vkb2_func_pane_g8

0x1532,	// (0x00016d74) bg_vkb2_func_pane_g9

0x0008,

0xfabc,	// (0x000252fe) bg_vkb2_func_pane_g

0xc732,	// (0x00021f74) blid2_tripm_pane_g6_ParamLimits

0xc732,	// (0x00021f74) blid2_tripm_pane_g6

0x40f7,	// (0x00019939) mp4_progress_pane_g1

0xc786,	// (0x00021fc8) blid2_tripm_values_pane_ParamLimits

0xc786,	// (0x00021fc8) blid2_tripm_values_pane

0xc841,	// (0x00022083) blid2_tripm_values_pane_t1

0xc84f,	// (0x00022091) blid2_tripm_values_pane_t2

0xc85d,	// (0x0002209f) blid2_tripm_values_pane_t3

0xc86b,	// (0x000220ad) blid2_tripm_values_pane_t4

0xc879,	// (0x000220bb) blid2_tripm_values_pane_t5

0xc887,	// (0x000220c9) blid2_tripm_values_pane_t6

0xc895,	// (0x000220d7) blid2_tripm_values_pane_t7

0xc8a3,	// (0x000220e5) blid2_tripm_values_pane_t8

0xc8b1,	// (0x000220f3) blid2_tripm_values_pane_t9

0x0008,

0xfacf,	// (0x00025311) blid2_tripm_values_pane_t

0x9178,	// (0x0001e9ba) call_video_pane_t1_ParamLimits

0x9195,	// (0x0001e9d7) call_video_pane_t2_ParamLimits

0xf1fc,	// (0x00024a3e) call_video_pane_t_ParamLimits

0xa532,	// (0x0001fd74) msg_header_pane_g1_ParamLimits

0x1f2f,	// (0x00017771) msg_header_pane_g2_ParamLimits

0x1f2f,	// (0x00017771) msg_header_pane_g2

0x0001,

0xf408,	// (0x00024c4a) msg_header_pane_g_ParamLimits

0xf408,	// (0x00024c4a) msg_header_pane_g

0x1019,	// (0x0001685b) main_clock2_pane_ParamLimits

0xb5dc,	// (0x00020e1e) grid_clock2_toolbar_pane_ParamLimits

0xb5dc,	// (0x00020e1e) grid_clock2_toolbar_pane

0xb5dc,	// (0x00020e1e) listscroll_clock2_pane_ParamLimits

0xb5dc,	// (0x00020e1e) listscroll_clock2_pane

0xb678,	// (0x00020eba) main_clock2_pane_t3_ParamLimits

0xb678,	// (0x00020eba) main_clock2_pane_t3

0xb68a,	// (0x00020ecc) main_clock2_pane_t4_ParamLimits

0xb68a,	// (0x00020ecc) main_clock2_pane_t4

0x4b2e,	// (0x0001a370) cell_clock2_toolbar_pane

0x4b36,	// (0x0001a378) cell_clock2_toolbar_pane_cp01

0x4b36,	// (0x0001a378) cell_clock2_toolbar_pane_cp02

0x4b3e,	// (0x0001a380) cell_clock2_toolbar_pane_cp03

0x4b46,	// (0x0001a388) list_clock2_pane

0x4b4e,	// (0x0001a390) scroll_pane_cp10

0x4b56,	// (0x0001a398) list_single_clock2_pane_ParamLimits

0x4b56,	// (0x0001a398) list_single_clock2_pane

0x127e,	// (0x00016ac0) list_highlight_pane_cp08

0x4b63,	// (0x0001a3a5) list_single_clock2_pane_t1

0x4b71,	// (0x0001a3b3) list_single_clock2_pane_t2

0x0001,

0xfae2,	// (0x00025324) list_single_clock2_pane_t

0x082c,	// (0x0001606e) bg_button_pane_cp10

0x4b7f,	// (0x0001a3c1) cell_clock2_toolbar_pane_g1

0x7878,	// (0x0001d0ba) aid_main_viewer_pane_g1_ParamLimits

0x7878,	// (0x0001d0ba) aid_main_viewer_pane_g1

0x7884,	// (0x0001d0c6) aid_main_viewer_pane_g2_ParamLimits

0x7884,	// (0x0001d0c6) aid_main_viewer_pane_g2

0xa53e,	// (0x0001fd80) aid_main_viewer_pane_g3_ParamLimits

0xa53e,	// (0x0001fd80) aid_main_viewer_pane_g3

0xa54d,	// (0x0001fd8f) aid_main_viewer_pane_g4_ParamLimits

0xa54d,	// (0x0001fd8f) aid_main_viewer_pane_g4

0x0003,

0xf419,	// (0x00024c5b) aid_main_viewer_pane_g_ParamLimits

0xf419,	// (0x00024c5b) aid_main_viewer_pane_g

0x73c3,	// (0x0001cc05) main_calc_pane_ParamLimits

0x78ea,	// (0x0001d12c) main_dialer2_pane_ParamLimits

0x73d1,	// (0x0001cc13) main_cam6_pane

0x73d1,	// (0x0001cc13) main_vid6_pane

0xb5e8,	// (0x00020e2a) listscroll_gen_pane_cp06_ParamLimits

0xb5e8,	// (0x00020e2a) listscroll_gen_pane_cp06

0xb69c,	// (0x00020ede) main_clock2_pane_t5_ParamLimits

0xb69c,	// (0x00020ede) main_clock2_pane_t5

0xb6e5,	// (0x00020f27) aid_call2_pane_cp10_ParamLimits

0xb6f7,	// (0x00020f39) aid_call_pane_cp10_ParamLimits

0x1c16,	// (0x00017458) popup_clock_analogue_window_cp10_g1_ParamLimits

0x1c16,	// (0x00017458) popup_clock_analogue_window_cp10_g2_ParamLimits

0x7af7,	// (0x0001d339) popup_clock_analogue_window_cp10_g3_ParamLimits

0x7af7,	// (0x0001d339) popup_clock_analogue_window_cp10_g4_ParamLimits

0x1c16,	// (0x00017458) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf760,	// (0x00024fa2) popup_clock_analogue_window_cp10_g_ParamLimits

0x7b09,	// (0x0001d34b) popup_clock_analogue_window_cp10_t1_ParamLimits

0x4157,	// (0x00019999) cell_dialer2_keypad_pane_g2_ParamLimits

0x4157,	// (0x00019999) cell_dialer2_keypad_pane_g2

0x0001,

0xf84a,	// (0x0002508c) cell_dialer2_keypad_pane_g_ParamLimits

0xf84a,	// (0x0002508c) cell_dialer2_keypad_pane_g

0xb9a6,	// (0x000211e8) cell_dialer2_keypad_pane_t1

0xbd12,	// (0x00021554) main_cset_text2_pane_ParamLimits

0xbd12,	// (0x00021554) main_cset_text2_pane

0x486a,	// (0x0001a0ac) area_vitu2_query_pane_g1_ParamLimits

0xc3f8,	// (0x00021c3a) area_vitu2_query_pane_g2_ParamLimits

0xf9ff,	// (0x00025241) area_vitu2_query_pane_g_ParamLimits

0x48ee,	// (0x0001a130) area_vitu2_query_pane_t7_ParamLimits

0x48ee,	// (0x0001a130) area_vitu2_query_pane_t7

0xc165,	// (0x000219a7) bg_button_pane_cp018_ParamLimits

0xc453,	// (0x00021c95) bg_button_pane_cp021_ParamLimits

0xc45f,	// (0x00021ca1) bg_button_pane_cp022_ParamLimits

0xc46e,	// (0x00021cb0) bg_vkb2_func_pane_cp08_ParamLimits

0xc165,	// (0x000219a7) bg_vkb2_func_pane_cp06_ParamLimits

0xc453,	// (0x00021c95) bg_vkb2_func_pane_cp07_ParamLimits

0xc47e,	// (0x00021cc0) input_focus_pane_cp09_ParamLimits

0x879f,	// (0x0001dfe1) cam6_autofocus_pane_ParamLimits

0x879f,	// (0x0001dfe1) cam6_autofocus_pane

0x87bb,	// (0x0001dffd) cam6_image_uncrop_pane_ParamLimits

0x87bb,	// (0x0001dffd) cam6_image_uncrop_pane

0x87e7,	// (0x0001e029) cam6_indi_pane_ParamLimits

0x87e7,	// (0x0001e029) cam6_indi_pane

0x8801,	// (0x0001e043) cam6_mode_pane_ParamLimits

0x8801,	// (0x0001e043) cam6_mode_pane

0x8815,	// (0x0001e057) cam6_timer_pane_ParamLimits

0x8815,	// (0x0001e057) cam6_timer_pane

0x8829,	// (0x0001e06b) cam6_zoom_pane_ParamLimits

0x8829,	// (0x0001e06b) cam6_zoom_pane

0xc8bf,	// (0x00022101) cam6_mode_pane_g1_ParamLimits

0xc8bf,	// (0x00022101) cam6_mode_pane_g1

0xc8cb,	// (0x0002210d) cam6_mode_pane_g2_ParamLimits

0xc8cb,	// (0x0002210d) cam6_mode_pane_g2

0xc8d7,	// (0x00022119) cam6_mode_pane_g3_ParamLimits

0xc8d7,	// (0x00022119) cam6_mode_pane_g3

0xc8e3,	// (0x00022125) cam6_mode_pane_g4_ParamLimits

0xc8e3,	// (0x00022125) cam6_mode_pane_g4

0x0003,

0xfae7,	// (0x00025329) cam6_mode_pane_g_ParamLimits

0xfae7,	// (0x00025329) cam6_mode_pane_g

0x4047,	// (0x00019889) bg_tb_trans_pane_cp08_ParamLimits

0x4047,	// (0x00019889) bg_tb_trans_pane_cp08

0x4b93,	// (0x0001a3d5) cam6_battery_pane_ParamLimits

0x4b93,	// (0x0001a3d5) cam6_battery_pane

0x4ba9,	// (0x0001a3eb) cam6_indi_pane_g1_ParamLimits

0x4ba9,	// (0x0001a3eb) cam6_indi_pane_g1

0x4bbb,	// (0x0001a3fd) cam6_indi_pane_g2_ParamLimits

0x4bbb,	// (0x0001a3fd) cam6_indi_pane_g2

0x4bcd,	// (0x0001a40f) cam6_indi_pane_g3_ParamLimits

0x4bcd,	// (0x0001a40f) cam6_indi_pane_g3

0x0002,

0xfaf0,	// (0x00025332) cam6_indi_pane_g_ParamLimits

0xfaf0,	// (0x00025332) cam6_indi_pane_g

0x4bdf,	// (0x0001a421) cam6_indi_pane_t1_ParamLimits

0x4bdf,	// (0x0001a421) cam6_indi_pane_t1

0xba61,	// (0x000212a3) cam6_autofocus_pane_g1

0xba59,	// (0x0002129b) cam6_autofocus_pane_g2

0xba71,	// (0x000212b3) cam6_autofocus_pane_g3

0xba69,	// (0x000212ab) cam6_autofocus_pane_g4

0x0003,

0xfaf7,	// (0x00025339) cam6_autofocus_pane_g

0x4c05,	// (0x0001a447) cam6_timer_pane_g1

0x4c0d,	// (0x0001a44f) cam6_timer_pane_t1

0x4c1b,	// (0x0001a45d) cam6_zoom_cont_pane

0x4c23,	// (0x0001a465) cam6_zoom_pane_g1

0x4c2c,	// (0x0001a46e) cam6_zoom_pane_g2

0xc8ef,	// (0x00022131) cam6_zoom_pane_g3

0x0002,

0xfb00,	// (0x00025342) cam6_zoom_pane_g

0x12f6,	// (0x00016b38) cam6_battery_pane_g1

0x12f6,	// (0x00016b38) cam6_battery_pane_g2

0x0001,

0xf3c9,	// (0x00024c0b) cam6_battery_pane_g

0x4c23,	// (0x0001a465) cam6_zoom_cont_pane_g1

0x4c2c,	// (0x0001a46e) cam6_zoom_cont_pane_g2

0x4c35,	// (0x0001a477) cam6_zoom_cont_pane_g3

0x0002,

0xfb07,	// (0x00025349) cam6_zoom_cont_pane_g

0xc90d,	// (0x0002214f) cam6_mode_pane_cp_ParamLimits

0xc90d,	// (0x0002214f) cam6_mode_pane_cp

0xc921,	// (0x00022163) cam6_zoom_pane_cp_ParamLimits

0xc921,	// (0x00022163) cam6_zoom_pane_cp

0xc937,	// (0x00022179) vid6_image_uncrop_cif_pane_ParamLimits

0xc937,	// (0x00022179) vid6_image_uncrop_cif_pane

0xc959,	// (0x0002219b) vid6_image_uncrop_nhd_pane_ParamLimits

0xc959,	// (0x0002219b) vid6_image_uncrop_nhd_pane

0xc970,	// (0x000221b2) vid6_image_uncrop_vga_pane_ParamLimits

0xc970,	// (0x000221b2) vid6_image_uncrop_vga_pane

0xc987,	// (0x000221c9) vid6_image_uncrop_wvga_pane_ParamLimits

0xc987,	// (0x000221c9) vid6_image_uncrop_wvga_pane

0xc99e,	// (0x000221e0) vid6_indi_pane_ParamLimits

0xc99e,	// (0x000221e0) vid6_indi_pane

0x4047,	// (0x00019889) bg_tb_trans_pane_cp09_ParamLimits

0x4047,	// (0x00019889) bg_tb_trans_pane_cp09

0x4c49,	// (0x0001a48b) cam6_battery_pane_cp_ParamLimits

0x4c49,	// (0x0001a48b) cam6_battery_pane_cp

0x4c55,	// (0x0001a497) vid6_indi_pane_g1_ParamLimits

0x4c55,	// (0x0001a497) vid6_indi_pane_g1

0x4c67,	// (0x0001a4a9) vid6_indi_pane_g2_ParamLimits

0x4c67,	// (0x0001a4a9) vid6_indi_pane_g2

0x4c79,	// (0x0001a4bb) vid6_indi_pane_g3_ParamLimits

0x4c79,	// (0x0001a4bb) vid6_indi_pane_g3

0x4c8e,	// (0x0001a4d0) vid6_indi_pane_g4_ParamLimits

0x4c8e,	// (0x0001a4d0) vid6_indi_pane_g4

0x4ca3,	// (0x0001a4e5) vid6_indi_pane_g5_ParamLimits

0x4ca3,	// (0x0001a4e5) vid6_indi_pane_g5

0x0004,

0xfb0e,	// (0x00025350) vid6_indi_pane_g_ParamLimits

0xfb0e,	// (0x00025350) vid6_indi_pane_g

0x4cbd,	// (0x0001a4ff) vid6_indi_pane_t1_ParamLimits

0x4cbd,	// (0x0001a4ff) vid6_indi_pane_t1

0x4cd3,	// (0x0001a515) vid6_indi_pane_t2_ParamLimits

0x4cd3,	// (0x0001a515) vid6_indi_pane_t2

0x4cfb,	// (0x0001a53d) vid6_indi_pane_t3_ParamLimits

0x4cfb,	// (0x0001a53d) vid6_indi_pane_t3

0x4d23,	// (0x0001a565) vid6_indi_pane_t4_ParamLimits

0x4d23,	// (0x0001a565) vid6_indi_pane_t4

0x0003,

0xfb19,	// (0x0002535b) vid6_indi_pane_t_ParamLimits

0xfb19,	// (0x0002535b) vid6_indi_pane_t

0x4d47,	// (0x0001a589) wait_bar_pane_cp08

0xc9be,	// (0x00022200) main_cset_text2_pane_t1_ParamLimits

0xc9be,	// (0x00022200) main_cset_text2_pane_t1

0xc8f8,	// (0x0002213a) listscroll_gen_pane_cp06_t1_ParamLimits

0xc8f8,	// (0x0002213a) listscroll_gen_pane_cp06_t1

0x73d1,	// (0x0001cc13) main_cam6_set_pane

0x81cb,	// (0x0001da0d) bg_tb_trans_pane_cp06_ParamLimits

0x81e1,	// (0x0001da23) cam4_indicators_pane_g1_ParamLimits

0x81f1,	// (0x0001da33) cam4_indicators_pane_g2_ParamLimits

0xf887,	// (0x000250c9) cam4_indicators_pane_g_ParamLimits

0x8211,	// (0x0001da53) cam4_indicators_pane_t1_ParamLimits

0x78dc,	// (0x0001d11e) bg_tb_trans_pane_cp07_ParamLimits

0x81e1,	// (0x0001da23) vid4_indicators_pane_g1_ParamLimits

0x8285,	// (0x0001dac7) vid4_indicators_pane_g2_ParamLimits

0x8295,	// (0x0001dad7) vid4_indicators_pane_g3_ParamLimits

0x82a6,	// (0x0001dae8) vid4_indicators_pane_g4_ParamLimits

0xf899,	// (0x000250db) vid4_indicators_pane_g_ParamLimits

0x82c2,	// (0x0001db04) vid4_indicators_pane_t1_ParamLimits

0x870a,	// (0x0001df4c) vid4_progress_pane_g1_ParamLimits

0x8719,	// (0x0001df5b) vid4_progress_pane_g2_ParamLimits

0x8728,	// (0x0001df6a) vid4_progress_pane_g3_ParamLimits

0x8737,	// (0x0001df79) vid4_progress_pane_g4_ParamLimits

0xfa4a,	// (0x0002528c) vid4_progress_pane_g_ParamLimits

0x874f,	// (0x0001df91) vid4_progress_pane_t1_ParamLimits

0x8765,	// (0x0001dfa7) vid4_progress_pane_t2_ParamLimits

0x877a,	// (0x0001dfbc) vid4_progress_pane_t3_ParamLimits

0xfa55,	// (0x00025297) vid4_progress_pane_t_ParamLimits

0x878f,	// (0x0001dfd1) wait_bar_pane_cp07_ParamLimits

0xc9da,	// (0x0002221c) main_cam6_set_pane_g2_ParamLimits

0xc9da,	// (0x0002221c) main_cam6_set_pane_g2

0xc9e6,	// (0x00022228) main_cset6_listscroll_pane_ParamLimits

0xc9e6,	// (0x00022228) main_cset6_listscroll_pane

0xca0f,	// (0x00022251) main_cset6_slider_pane_ParamLimits

0xca0f,	// (0x00022251) main_cset6_slider_pane

0xca1b,	// (0x0002225d) main_cset6_text2_pane_ParamLimits

0xca1b,	// (0x0002225d) main_cset6_text2_pane

0x4d57,	// (0x0001a599) main_cset6_text_pane

0x44ad,	// (0x00019cef) main_cset_list_pane_copy1_ParamLimits

0x44ad,	// (0x00019cef) main_cset_list_pane_copy1

0x44bd,	// (0x00019cff) scroll_pane_cp028_copy1

0xca2e,	// (0x00022270) cset_list_set_pane_copy1

0x4590,	// (0x00019dd2) aid_position_infowindow_above_copy1

0x4598,	// (0x00019dda) aid_position_infowindow_below_copy1

0xca3d,	// (0x0002227f) cset_list_set_pane_g1_copy1

0xca45,	// (0x00022287) cset_list_set_pane_g3_copy1_ParamLimits

0xca45,	// (0x00022287) cset_list_set_pane_g3_copy1

0xca54,	// (0x00022296) cset_list_set_pane_t1_copy1_ParamLimits

0xca54,	// (0x00022296) cset_list_set_pane_t1_copy1

0x087f,	// (0x000160c1) list_highlight_pane_cp021_copy1_ParamLimits

0x087f,	// (0x000160c1) list_highlight_pane_cp021_copy1

0x4d5f,	// (0x0001a5a1) cset6_slider_pane_ParamLimits

0x4d5f,	// (0x0001a5a1) cset6_slider_pane

0x4d8b,	// (0x0001a5cd) main_cset6_slider_pane_g1_ParamLimits

0x4d8b,	// (0x0001a5cd) main_cset6_slider_pane_g1

0xca69,	// (0x000222ab) main_cset6_slider_pane_g2_ParamLimits

0xca69,	// (0x000222ab) main_cset6_slider_pane_g2

0x44d2,	// (0x00019d14) main_cset6_slider_pane_g3_ParamLimits

0x44d2,	// (0x00019d14) main_cset6_slider_pane_g3

0xca91,	// (0x000222d3) main_cset6_slider_pane_g4_ParamLimits

0xca91,	// (0x000222d3) main_cset6_slider_pane_g4

0xca9d,	// (0x000222df) main_cset6_slider_pane_g5_ParamLimits

0xca9d,	// (0x000222df) main_cset6_slider_pane_g5

0x44d2,	// (0x00019d14) main_cset6_slider_pane_g7_ParamLimits

0x44d2,	// (0x00019d14) main_cset6_slider_pane_g7

0x44de,	// (0x00019d20) main_cset6_slider_pane_g8_ParamLimits

0x44de,	// (0x00019d20) main_cset6_slider_pane_g8

0xcaa9,	// (0x000222eb) main_cset6_slider_pane_g9_ParamLimits

0xcaa9,	// (0x000222eb) main_cset6_slider_pane_g9

0xcab5,	// (0x000222f7) main_cset6_slider_pane_g10_ParamLimits

0xcab5,	// (0x000222f7) main_cset6_slider_pane_g10

0xca91,	// (0x000222d3) main_cset6_slider_pane_g11_ParamLimits

0xca91,	// (0x000222d3) main_cset6_slider_pane_g11

0xcac1,	// (0x00022303) main_cset6_slider_pane_g12_ParamLimits

0xcac1,	// (0x00022303) main_cset6_slider_pane_g12

0xcacd,	// (0x0002230f) main_cset6_slider_pane_g13_ParamLimits

0xcacd,	// (0x0002230f) main_cset6_slider_pane_g13

0xcad9,	// (0x0002231b) main_cset6_slider_pane_g14_ParamLimits

0xcad9,	// (0x0002231b) main_cset6_slider_pane_g14

0xcae5,	// (0x00022327) main_cset6_slider_pane_g15_ParamLimits

0xcae5,	// (0x00022327) main_cset6_slider_pane_g15

0xca9d,	// (0x000222df) main_cset6_slider_pane_g16_ParamLimits

0xca9d,	// (0x000222df) main_cset6_slider_pane_g16

0xcafd,	// (0x0002233f) main_cset6_slider_pane_g17_ParamLimits

0xcafd,	// (0x0002233f) main_cset6_slider_pane_g17

0x0011,

0xfb22,	// (0x00025364) main_cset6_slider_pane_g_ParamLimits

0xfb22,	// (0x00025364) main_cset6_slider_pane_g

0x4db3,	// (0x0001a5f5) main_cset6_slider_pane_t1_ParamLimits

0x4db3,	// (0x0001a5f5) main_cset6_slider_pane_t1

0xcb09,	// (0x0002234b) main_cset6_slider_pane_t2_ParamLimits

0xcb09,	// (0x0002234b) main_cset6_slider_pane_t2

0x4df4,	// (0x0001a636) main_cset6_slider_pane_t3_ParamLimits

0x4df4,	// (0x0001a636) main_cset6_slider_pane_t3

0xcb34,	// (0x00022376) main_cset6_slider_pane_t4_ParamLimits

0xcb34,	// (0x00022376) main_cset6_slider_pane_t4

0x4e1f,	// (0x0001a661) main_cset6_slider_pane_t5_ParamLimits

0x4e1f,	// (0x0001a661) main_cset6_slider_pane_t5

0x4e4a,	// (0x0001a68c) main_cset6_slider_pane_t7_ParamLimits

0x4e4a,	// (0x0001a68c) main_cset6_slider_pane_t7

0xcb5f,	// (0x000223a1) main_cset6_slider_pane_t8_ParamLimits

0xcb5f,	// (0x000223a1) main_cset6_slider_pane_t8

0xcb83,	// (0x000223c5) main_cset6_slider_pane_t9_ParamLimits

0xcb83,	// (0x000223c5) main_cset6_slider_pane_t9

0xcba7,	// (0x000223e9) main_cset6_slider_pane_t10_ParamLimits

0xcba7,	// (0x000223e9) main_cset6_slider_pane_t10

0xcbcb,	// (0x0002240d) main_cset6_slider_pane_t11_ParamLimits

0xcbcb,	// (0x0002240d) main_cset6_slider_pane_t11

0x4e80,	// (0x0001a6c2) main_cset6_slider_pane_t14_ParamLimits

0x4e80,	// (0x0001a6c2) main_cset6_slider_pane_t14

0x4eb9,	// (0x0001a6fb) main_cset6_slider_pane_t15_ParamLimits

0x4eb9,	// (0x0001a6fb) main_cset6_slider_pane_t15

0x000b,

0xfb47,	// (0x00025389) main_cset6_slider_pane_t_ParamLimits

0xfb47,	// (0x00025389) main_cset6_slider_pane_t

0x45c0,	// (0x00019e02) cset_slider_pane_g1_copy1

0x45c9,	// (0x00019e0b) cset_slider_pane_g2_copy1

0x45d2,	// (0x00019e14) cset_slider_pane_g3_copy1

0x082c,	// (0x0001606e) bg_popup_sub_pane_cp011_copy1

0x469c,	// (0x00019ede) main_cset_text_pane_g1_copy1

0x46a4,	// (0x00019ee6) main_cset_text_pane_t1_copy1

0x46b2,	// (0x00019ef4) main_cset_text_pane_t2_copy1

0x46c0,	// (0x00019f02) main_cset_text_pane_t3_copy1

0x46ce,	// (0x00019f10) main_cset_text_pane_t4_copy1

0x46dc,	// (0x00019f1e) main_cset_text_pane_t5_copy1

0x46ea,	// (0x00019f2c) main_cset_text_pane_t6_copy1

0x46f8,	// (0x00019f3a) main_cset_text_pane_t7_copy1

0xcc0c,	// (0x0002244e) main_cset_text2_pane_t1_copy1

0x78dc,	// (0x0001d11e) main_ncimui_pane

0x7935,	// (0x0001d177) popup_query_ncimui_window_ParamLimits

0x7935,	// (0x0001d177) popup_query_ncimui_window

0x3954,	// (0x00019196) field_cale_ev2_pane_g4_ParamLimits

0x3954,	// (0x00019196) field_cale_ev2_pane_g4

0xb946,	// (0x00021188) cell_video_dialer_keypad_pane_g2_ParamLimits

0xb946,	// (0x00021188) cell_video_dialer_keypad_pane_g2

0x0001,

0xf821,	// (0x00025063) cell_video_dialer_keypad_pane_g_ParamLimits

0xf821,	// (0x00025063) cell_video_dialer_keypad_pane_g

0xb95e,	// (0x000211a0) cell_video_dialer_keypad_pane_t1

0x082c,	// (0x0001606e) bg_popup_window_pane_cp012

0x3130,	// (0x00018972) heading_pane_cp06

0x4f42,	// (0x0001a784) ncim_query_content_pane

0x082c,	// (0x0001606e) bg_popup_heading_pane_cp01

0x4f4a,	// (0x0001a78c) ncim_heading_pane_t1

0x4f58,	// (0x0001a79a) ncim_indicator_popup_pane

0x4f6a,	// (0x0001a7ac) ncim_query_button_pane

0x4f7e,	// (0x0001a7c0) ncim_query_content_pane_t1

0x4f90,	// (0x0001a7d2) ncim_query_content_pane_t2

0x0005,

0xfb8b,	// (0x000253cd) ncim_query_content_pane_t

0x4fca,	// (0x0001a80c) ncim_query_list_pane

0x4fdc,	// (0x0001a81e) ncim_query_popup_pane

0x4f58,	// (0x0001a79a) ncim_indicator_popup_pane_ParamLimits

0xcd4d,	// (0x0002258f) ncim_query_content_pane_g1_ParamLimits

0xcd4d,	// (0x0002258f) ncim_query_content_pane_g1

0x4f7e,	// (0x0001a7c0) ncim_query_content_pane_t1_ParamLimits

0x4f90,	// (0x0001a7d2) ncim_query_content_pane_t2_ParamLimits

0xcd59,	// (0x0002259b) ncim_query_content_pane_t3_ParamLimits

0xcd59,	// (0x0002259b) ncim_query_content_pane_t3

0xcd76,	// (0x000225b8) ncim_query_content_pane_t4_ParamLimits

0xcd76,	// (0x000225b8) ncim_query_content_pane_t4

0xcd93,	// (0x000225d5) ncim_query_content_pane_t5_ParamLimits

0xcd93,	// (0x000225d5) ncim_query_content_pane_t5

0x4fa2,	// (0x0001a7e4) ncim_query_content_pane_t6_ParamLimits

0x4fa2,	// (0x0001a7e4) ncim_query_content_pane_t6

0xfb8b,	// (0x000253cd) ncim_query_content_pane_t_ParamLimits

0x4fca,	// (0x0001a80c) ncim_query_list_pane_ParamLimits

0x4fdc,	// (0x0001a81e) ncim_query_popup_pane_ParamLimits

0x4ff0,	// (0x0001a832) wait_bar_pane_cp04

0x082c,	// (0x0001606e) input_focus_pane_cp011

0x4ff8,	// (0x0001a83a) ncim_query_popup_pane_t1

0x5006,	// (0x0001a848) ncim_list_query_list_pane_ParamLimits

0x5006,	// (0x0001a848) ncim_list_query_list_pane

0x082c,	// (0x0001606e) bg_button_pane_cp027

0x5019,	// (0x0001a85b) ncim_query_button_pane_g1

0x082c,	// (0x0001606e) list_highlight_pane_cp012

0x5023,	// (0x0001a865) ncim_list_query_list_pane_g1

0x502b,	// (0x0001a86d) ncim_list_query_list_pane_t1

0x8201,	// (0x0001da43) cam4_indicators_pane_g3_ParamLimits

0x8201,	// (0x0001da43) cam4_indicators_pane_g3

0x82b2,	// (0x0001daf4) vid4_indicators_pane_g5_ParamLimits

0x82b2,	// (0x0001daf4) vid4_indicators_pane_g5

0x8743,	// (0x0001df85) vid4_progress_pane_g5_ParamLimits

0x8743,	// (0x0001df85) vid4_progress_pane_g5

0xcc3d,	// (0x0002247f) main_ncimui_pane_g1

0xcca3,	// (0x000224e5) ncimui_group_query_pane_ParamLimits

0xcca3,	// (0x000224e5) ncimui_group_query_pane

0xcceb,	// (0x0002252d) ncimui_list_pane_ParamLimits

0xcceb,	// (0x0002252d) ncimui_list_pane

0xcd10,	// (0x00022552) ncimui_text_pane_ParamLimits

0xcd10,	// (0x00022552) ncimui_text_pane

0xcdb0,	// (0x000225f2) ncimui_text_pane_t1_ParamLimits

0xcdb0,	// (0x000225f2) ncimui_text_pane_t1

0x5042,	// (0x0001a884) ncimui_list_single_graphic_pane_ParamLimits

0x5042,	// (0x0001a884) ncimui_list_single_graphic_pane

0xcdce,	// (0x00022610) ncimui_query_pane_ParamLimits

0xcdce,	// (0x00022610) ncimui_query_pane

0x082c,	// (0x0001606e) list_highlight_pane_cp013

0x5052,	// (0x0001a894) ncim_list_query_list_pane_t1_copy1

0x5060,	// (0x0001a8a2) ncim_list_single_graphic_pane_g1

0x5068,	// (0x0001a8aa) ncim_query_button_pane_cp01

0x5074,	// (0x0001a8b6) ncim_query_entry_pane_ParamLimits

0x5074,	// (0x0001a8b6) ncim_query_entry_pane

0x5087,	// (0x0001a8c9) ncimui_query_pane_g1

0x5093,	// (0x0001a8d5) ncimui_query_pane_t1_ParamLimits

0x5093,	// (0x0001a8d5) ncimui_query_pane_t1

0x087f,	// (0x000160c1) input_focus_pane_cp012

0x50ac,	// (0x0001a8ee) ncim_query_entry_pane_t1

0x1019,	// (0x0001685b) main_im_pane_ParamLimits

0x78dc,	// (0x0001d11e) main_mobtv_pane_ParamLimits

0x78dc,	// (0x0001d11e) main_mobtv_pane

0xcaa9,	// (0x000222eb) main_cset6_slider_pane_g18_ParamLimits

0xcaa9,	// (0x000222eb) main_cset6_slider_pane_g18

0xcacd,	// (0x0002230f) main_cset6_slider_pane_g19_ParamLimits

0xcacd,	// (0x0002230f) main_cset6_slider_pane_g19

0x1e3c,	// (0x0001767e) bg_main_mobtv_pane_ParamLimits

0x1e3c,	// (0x0001767e) bg_main_mobtv_pane

0xcdde,	// (0x00022620) main_mobtv_info_pane

0xcde7,	// (0x00022629) main_mobtv_loading_pane_ParamLimits

0xcde7,	// (0x00022629) main_mobtv_loading_pane

0x50be,	// (0x0001a900) main_mobtv_pg_channel_list_pane

0x50c8,	// (0x0001a90a) main_mobtv_pg_hdr_pane

0xcdf4,	// (0x00022636) main_mobtv_programe_curr_pane_ParamLimits

0xcdf4,	// (0x00022636) main_mobtv_programe_curr_pane

0xce01,	// (0x00022643) main_mobtv_programe_next_pane_ParamLimits

0xce01,	// (0x00022643) main_mobtv_programe_next_pane

0x50d1,	// (0x0001a913) popup_mobtv_noti_window

0x12f6,	// (0x00016b38) main_tv_pg_hdr_pane_g1

0x50d9,	// (0x0001a91b) main_tv_pg_hdr_pane_g2

0x50e1,	// (0x0001a923) main_tv_pg_hdr_pane_g3

0x50e9,	// (0x0001a92b) main_tv_pg_hdr_pane_g4

0x50f1,	// (0x0001a933) main_tv_pg_hdr_pane_g5

0x50f9,	// (0x0001a93b) main_tv_pg_hdr_pane_g6

0x5101,	// (0x0001a943) main_tv_pg_hdr_pane_g7

0x5109,	// (0x0001a94b) main_tv_pg_hdr_pane_g8

0x5111,	// (0x0001a953) main_tv_pg_hdr_pane_g9

0x5119,	// (0x0001a95b) main_tv_pg_hdr_pane_g10

0x5123,	// (0x0001a965) main_tv_pg_hdr_pane_g11

0x000a,

0xfb98,	// (0x000253da) main_tv_pg_hdr_pane_g

0x512d,	// (0x0001a96f) main_tv_pg_hdr_pane_t1

0x513b,	// (0x0001a97d) main_tv_pg_hdr_pane_t2

0x5149,	// (0x0001a98b) main_tv_pg_hdr_pane_t3

0x5157,	// (0x0001a999) main_tv_pg_hdr_pane_t4

0x5165,	// (0x0001a9a7) main_tv_pg_hdr_pane_t5

0x0004,

0xfbaf,	// (0x000253f1) main_tv_pg_hdr_pane_t

0x5173,	// (0x0001a9b5) single_mobtv_pg_channel_pane_ParamLimits

0x5173,	// (0x0001a9b5) single_mobtv_pg_channel_pane

0x5185,	// (0x0001a9c7) single_mobtv_pg_channel_table_pane

0x518e,	// (0x0001a9d0) single_mobtv_pg_channel_thumb_pane

0x5197,	// (0x0001a9d9) single_tv_pg_channel_pane_g1

0x51a0,	// (0x0001a9e2) single_tv_pg_channel_pane_g2

0x0001,

0xfbba,	// (0x000253fc) single_tv_pg_channel_pane_g

0x0f73,	// (0x000167b5) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x0f73,	// (0x000167b5) bg_single_mobtv_pg_channel_thumb_pane

0x51a9,	// (0x0001a9eb) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x51a9,	// (0x0001a9eb) single_mobtv_pg_channel_thumb_pane_g1

0x51b7,	// (0x0001a9f9) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x51b7,	// (0x0001a9f9) single_mobtv_pg_channel_thumb_pane_g2

0x51c3,	// (0x0001aa05) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x51c3,	// (0x0001aa05) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfbbf,	// (0x00025401) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfbbf,	// (0x00025401) single_mobtv_pg_channel_thumb_pane_g

0x51cf,	// (0x0001aa11) single_mobtv_pg_channel_thumb_pane_t1

0x51dd,	// (0x0001aa1f) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfbc6,	// (0x00025408) single_mobtv_pg_channel_thumb_pane_t

0x12f6,	// (0x00016b38) bg_single_mobtv_pg_channel_table_pane_g1

0x12f6,	// (0x00016b38) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf3c9,	// (0x00024c0b) bg_single_mobtv_pg_channel_table_pane_g

0x51eb,	// (0x0001aa2d) single_mobtv_pg_channel_table_pane_t1

0x51f9,	// (0x0001aa3b) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfbcb,	// (0x0002540d) single_mobtv_pg_channel_table_pane_t

0xce16,	// (0x00022658) main_mobtv_info_pane_g1_ParamLimits

0xce16,	// (0x00022658) main_mobtv_info_pane_g1

0xce32,	// (0x00022674) main_mobtv_info_pane_t1_ParamLimits

0xce32,	// (0x00022674) main_mobtv_info_pane_t1

0xce98,	// (0x000226da) main_mobtv_info_pane_t2_ParamLimits

0xce98,	// (0x000226da) main_mobtv_info_pane_t2

0x0002,

0xfbd5,	// (0x00025417) main_mobtv_info_pane_t_ParamLimits

0xfbd5,	// (0x00025417) main_mobtv_info_pane_t

0xcf1b,	// (0x0002275d) wait_bar_pane_cp05

0xcf2b,	// (0x0002276d) main_mobtv_loading_pane_g1_ParamLimits

0xcf2b,	// (0x0002276d) main_mobtv_loading_pane_g1

0xcf37,	// (0x00022779) main_mobtv_loading_pane_g2_ParamLimits

0xcf37,	// (0x00022779) main_mobtv_loading_pane_g2

0xcf43,	// (0x00022785) main_mobtv_loading_pane_g3_ParamLimits

0xcf43,	// (0x00022785) main_mobtv_loading_pane_g3

0x0002,

0xfbdc,	// (0x0002541e) main_mobtv_loading_pane_g_ParamLimits

0xfbdc,	// (0x0002541e) main_mobtv_loading_pane_g

0x5207,	// (0x0001aa49) main_mobtv_loading_pane_t1_ParamLimits

0x5207,	// (0x0001aa49) main_mobtv_loading_pane_t1

0x521f,	// (0x0001aa61) main_mobtv_loading_pane_t2_ParamLimits

0x521f,	// (0x0001aa61) main_mobtv_loading_pane_t2

0x0001,

0xfbe3,	// (0x00025425) main_mobtv_loading_pane_t_ParamLimits

0xfbe3,	// (0x00025425) main_mobtv_loading_pane_t

0xcf4f,	// (0x00022791) wait_bar_pane_cp06_ParamLimits

0xcf4f,	// (0x00022791) wait_bar_pane_cp06

0x5243,	// (0x0001aa85) main_mobtv_programe_curr_pane_t1

0x5251,	// (0x0001aa93) main_mobtv_programe_curr_pane_t2

0x0001,

0xfbe8,	// (0x0002542a) main_mobtv_programe_curr_pane_t

0x525f,	// (0x0001aaa1) main_mobtv_programe_next_pane_t1

0x526d,	// (0x0001aaaf) main_mobtv_programe_next_pane_t2

0x527b,	// (0x0001aabd) main_mobtv_programe_next_pane_t3

0x0002,

0xfbed,	// (0x0002542f) main_mobtv_programe_next_pane_t

0x082c,	// (0x0001606e) bg_popup_mobtv_noti_window_pane

0x5289,	// (0x0001aacb) popup_mobtv_noti_window_g1

0x5291,	// (0x0001aad3) popup_mobtv_noti_window_t1

0x529f,	// (0x0001aae1) popup_mobtv_noti_window_t2

0x0001,

0xfbf4,	// (0x00025436) popup_mobtv_noti_window_t

0x12f6,	// (0x00016b38) bg_popup_mobtv_noti_window_pane_g1

0x73d1,	// (0x0001cc13) sc_clock_pane

0x73d1,	// (0x0001cc13) main_fs_bigclock_pane

0xc774,	// (0x00021fb6) blid2_tripm_pane_t4_ParamLimits

0xc774,	// (0x00021fb6) blid2_tripm_pane_t4

0xcf5b,	// (0x0002279d) sc_clock_pane_g1_ParamLimits

0xcf5b,	// (0x0002279d) sc_clock_pane_g1

0xcf69,	// (0x000227ab) sc_clock_pane_t1_ParamLimits

0xcf69,	// (0x000227ab) sc_clock_pane_t1

0xcf7c,	// (0x000227be) sc_clock_pane_t2_ParamLimits

0xcf7c,	// (0x000227be) sc_clock_pane_t2

0xcf8e,	// (0x000227d0) sc_clock_pane_t3_ParamLimits

0xcf8e,	// (0x000227d0) sc_clock_pane_t3

0x0004,

0xfbf9,	// (0x0002543b) sc_clock_pane_t_ParamLimits

0xfbf9,	// (0x0002543b) sc_clock_pane_t

0xdc06,	// (0x00023448) main_fs_bigclock_indicator_pane_ParamLimits

0xdc06,	// (0x00023448) main_fs_bigclock_indicator_pane

0xd009,	// (0x0002284b) main_fs_bigclock_pane_g1_ParamLimits

0xd009,	// (0x0002284b) main_fs_bigclock_pane_g1

0xdc12,	// (0x00023454) main_fs_bigclock_pane_t1_ParamLimits

0xdc12,	// (0x00023454) main_fs_bigclock_pane_t1

0xdc24,	// (0x00023466) main_fs_bigclock_pane_t2_ParamLimits

0xdc24,	// (0x00023466) main_fs_bigclock_pane_t2

0xdc36,	// (0x00023478) main_fs_bigclock_pane_t3_ParamLimits

0xdc36,	// (0x00023478) main_fs_bigclock_pane_t3

0x0002,

0xfdbd,	// (0x000255ff) main_fs_bigclock_pane_t_ParamLimits

0xfdbd,	// (0x000255ff) main_fs_bigclock_pane_t

0x5d2a,	// (0x0001b56c) main_fs_bigclock_indicator_pane_g1

0x4f72,	// (0x0001a7b4) ncim_query_content_pane_g2_ParamLimits

0x4f72,	// (0x0001a7b4) ncim_query_content_pane_g2

0x0001,

0xfb86,	// (0x000253c8) ncim_query_content_pane_g_ParamLimits

0xfb86,	// (0x000253c8) ncim_query_content_pane_g

0xcfa0,	// (0x000227e2) sc_clock_pane_t4_ParamLimits

0xcfa0,	// (0x000227e2) sc_clock_pane_t4

0x78dc,	// (0x0001d11e) main_radioblah_pane

0x80c4,	// (0x0001d906) cell_call4_button_pane_t1_copy1_ParamLimits

0x80c4,	// (0x0001d906) cell_call4_button_pane_t1_copy1

0xcc55,	// (0x00022497) main_ncimui_pane_t1_ParamLimits

0xcc55,	// (0x00022497) main_ncimui_pane_t1

0xcc6f,	// (0x000224b1) main_ncimui_pane_t2_ParamLimits

0xcc6f,	// (0x000224b1) main_ncimui_pane_t2

0x0002,

0xfb7f,	// (0x000253c1) main_ncimui_pane_t_ParamLimits

0xfb7f,	// (0x000253c1) main_ncimui_pane_t

0x53e0,	// (0x0001ac22) main_radioblah_anim_pane_ParamLimits

0x53e0,	// (0x0001ac22) main_radioblah_anim_pane

0x53f1,	// (0x0001ac33) main_radioblah_info_pane_ParamLimits

0x53f1,	// (0x0001ac33) main_radioblah_info_pane

0x5405,	// (0x0001ac47) main_radioblah_pane_t1_ParamLimits

0x5405,	// (0x0001ac47) main_radioblah_pane_t1

0x5421,	// (0x0001ac63) main_radioblah_pane_t2_ParamLimits

0x5421,	// (0x0001ac63) main_radioblah_pane_t2

0x0003,

0xfc1a,	// (0x0002545c) main_radioblah_pane_t_ParamLimits

0xfc1a,	// (0x0002545c) main_radioblah_pane_t

0xd051,	// (0x00022893) main_radioblah_rocker_ctrl_pane_ParamLimits

0xd051,	// (0x00022893) main_radioblah_rocker_ctrl_pane

0x5469,	// (0x0001acab) main_radioblah_info_pane_t1_ParamLimits

0x5469,	// (0x0001acab) main_radioblah_info_pane_t1

0xd096,	// (0x000228d8) main_radioblah_info_pane_t2_ParamLimits

0xd096,	// (0x000228d8) main_radioblah_info_pane_t2

0x0003,

0xfc23,	// (0x00025465) main_radioblah_info_pane_t_ParamLimits

0xfc23,	// (0x00025465) main_radioblah_info_pane_t

0x12f6,	// (0x00016b38) main_radioblah_rocker_ctrl_pane_g1

0xd13e,	// (0x00022980) main_radioblah_rocker_ctrl_pane_g2

0xd146,	// (0x00022988) main_radioblah_rocker_ctrl_pane_g3

0xd14e,	// (0x00022990) main_radioblah_rocker_ctrl_pane_g4

0xd156,	// (0x00022998) main_radioblah_rocker_ctrl_pane_g5

0xd15e,	// (0x000229a0) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc2c,	// (0x0002546e) main_radioblah_rocker_ctrl_pane_g

0xcc0c,	// (0x0002244e) main_cset_text2_pane_t1_copy1_ParamLimits

0x8147,	// (0x0001d989) cam4_image_uncrop_qvga_pane

0x8245,	// (0x0001da87) vid4_image_uncrop_qcif_pane

0x87db,	// (0x0001e01d) cam6_image_uncrop_qvga_pane_ParamLimits

0x87db,	// (0x0001e01d) cam6_image_uncrop_qvga_pane

0x4c3d,	// (0x0001a47f) vid6_image_uncrop_qcif_pane_ParamLimits

0x4c3d,	// (0x0001a47f) vid6_image_uncrop_qcif_pane

0x082c,	// (0x0001606e) bg_popup_preview_window_pane_cp03

0x4f18,	// (0x0001a75a) list_cset_text2_pane

0x4f20,	// (0x0001a762) main_cset6_text2_pane_g1

0x4f28,	// (0x0001a76a) main_cset6_text2_pane_t1

0x562a,	// (0x0001ae6c) list_cset_text2_pane_t1_ParamLimits

0x562a,	// (0x0001ae6c) list_cset_text2_pane_t1

0x78dc,	// (0x0001d11e) main_radioblah_pane_ParamLimits

0xcf09,	// (0x0002274b) main_mobtv_info_pane_t3_ParamLimits

0xcf09,	// (0x0002274b) main_mobtv_info_pane_t3

0xd03f,	// (0x00022881) main_radioblah_pane_g1

0xd06a,	// (0x000228ac) main_radioblah_info_pane_g1

0xd0e5,	// (0x00022927) main_radioblah_info_pane_t3_ParamLimits

0xd0e5,	// (0x00022927) main_radioblah_info_pane_t3

0x9f25,	// (0x0001f767) highlight_cell_cale_month_pane_ParamLimits

0x9f25,	// (0x0001f767) highlight_cell_cale_month_pane

0x73d1,	// (0x0001cc13) main_phob_fisheye_pane

0x39f5,	// (0x00019237) scroll_pane_cp0031_ParamLimits

0x39f5,	// (0x00019237) scroll_pane_cp0031

0x4d47,	// (0x0001a589) wait_bar_pane_cp08_ParamLimits

0xca2e,	// (0x00022270) cset_list_set_pane_copy1_ParamLimits

0x54a3,	// (0x0001ace5) highlight_cell_cale_month_pane_g1

0xd166,	// (0x000229a8) highlight_cell_cale_month_pane_t1

0x54ab,	// (0x0001aced) list_gen_pane_cp01

0x44bd,	// (0x00019cff) scroll_pane_01

0xd174,	// (0x000229b6) list_single_double_fisheye_pane

0xd17d,	// (0x000229bf) list_double_fisheye_pane_g1_ParamLimits

0xd17d,	// (0x000229bf) list_double_fisheye_pane_g1

0xd189,	// (0x000229cb) list_double_fisheye_pane_g2_ParamLimits

0xd189,	// (0x000229cb) list_double_fisheye_pane_g2

0xd19d,	// (0x000229df) list_double_fisheye_pane_g3_ParamLimits

0xd19d,	// (0x000229df) list_double_fisheye_pane_g3

0x0004,

0xfc39,	// (0x0002547b) list_double_fisheye_pane_g_ParamLimits

0xfc39,	// (0x0002547b) list_double_fisheye_pane_g

0xd1c6,	// (0x00022a08) list_double_fisheye_pane_t1_ParamLimits

0xd1c6,	// (0x00022a08) list_double_fisheye_pane_t1

0xd1e1,	// (0x00022a23) list_double_fisheye_pane_t2_ParamLimits

0xd1e1,	// (0x00022a23) list_double_fisheye_pane_t2

0x0001,

0xfc44,	// (0x00025486) list_double_fisheye_pane_t_ParamLimits

0xfc44,	// (0x00025486) list_double_fisheye_pane_t

0x73d1,	// (0x0001cc13) main_call5_pane

0xcfc6,	// (0x00022808) sc_swipe_pane_ParamLimits

0xcfc6,	// (0x00022808) sc_swipe_pane

0xd20f,	// (0x00022a51) call5_image_pane_ParamLimits

0xd20f,	// (0x00022a51) call5_image_pane

0xd21b,	// (0x00022a5d) call5_swipe_1_pane_ParamLimits

0xd21b,	// (0x00022a5d) call5_swipe_1_pane

0xd227,	// (0x00022a69) call5_swipe_2_pane_ParamLimits

0xd227,	// (0x00022a69) call5_swipe_2_pane

0xd23f,	// (0x00022a81) popup_call5_audio_first_window_ParamLimits

0xd23f,	// (0x00022a81) popup_call5_audio_first_window

0x0f73,	// (0x000167b5) call5_swipe_1_pane_g1_ParamLimits

0x0f73,	// (0x000167b5) call5_swipe_1_pane_g1

0x54b4,	// (0x0001acf6) call5_swipe_1_pane_g2_ParamLimits

0x54b4,	// (0x0001acf6) call5_swipe_1_pane_g2

0x0001,

0xfc49,	// (0x0002548b) call5_swipe_1_pane_g_ParamLimits

0xfc49,	// (0x0002548b) call5_swipe_1_pane_g

0x54c0,	// (0x0001ad02) call5_swipe_1_pane_t1_ParamLimits

0x54c0,	// (0x0001ad02) call5_swipe_1_pane_t1

0x0f73,	// (0x000167b5) call5_swipe_2_pane_g1_ParamLimits

0x0f73,	// (0x000167b5) call5_swipe_2_pane_g1

0x54d5,	// (0x0001ad17) call5_swipe_2_pane_g2_ParamLimits

0x54d5,	// (0x0001ad17) call5_swipe_2_pane_g2

0x0001,

0xfc4e,	// (0x00025490) call5_swipe_2_pane_g_ParamLimits

0xfc4e,	// (0x00025490) call5_swipe_2_pane_g

0x54e1,	// (0x0001ad23) call5_swipe_2_pane_t1_ParamLimits

0x54e1,	// (0x0001ad23) call5_swipe_2_pane_t1

0x54f6,	// (0x0001ad38) sc_swipe_pane_g1_ParamLimits

0x54f6,	// (0x0001ad38) sc_swipe_pane_g1

0x5503,	// (0x0001ad45) sc_swipe_pane_g2_ParamLimits

0x5503,	// (0x0001ad45) sc_swipe_pane_g2

0x0001,

0xfc53,	// (0x00025495) sc_swipe_pane_g_ParamLimits

0xfc53,	// (0x00025495) sc_swipe_pane_g

0x550f,	// (0x0001ad51) sc_swipe_pane_t1_ParamLimits

0x550f,	// (0x0001ad51) sc_swipe_pane_t1

0x73d1,	// (0x0001cc13) main_cmail_launcher_pane

0xd24b,	// (0x00022a8d) aid_size_cell_cmail_l_ParamLimits

0xd24b,	// (0x00022a8d) aid_size_cell_cmail_l

0xd25b,	// (0x00022a9d) grid_cmail_l_pane_ParamLimits

0xd25b,	// (0x00022a9d) grid_cmail_l_pane

0xd267,	// (0x00022aa9) cell_cmail_l_pane_ParamLimits

0xd267,	// (0x00022aa9) cell_cmail_l_pane

0xd279,	// (0x00022abb) cell_cmail_l_pane_g1_ParamLimits

0xd279,	// (0x00022abb) cell_cmail_l_pane_g1

0xd289,	// (0x00022acb) cell_cmail_l_pane_t1_ParamLimits

0xd289,	// (0x00022acb) cell_cmail_l_pane_t1

0x5524,	// (0x0001ad66) cell_cmail_l_pane_t2_ParamLimits

0x5524,	// (0x0001ad66) cell_cmail_l_pane_t2

0x0001,

0xfc58,	// (0x0002549a) cell_cmail_l_pane_t_ParamLimits

0xfc58,	// (0x0002549a) cell_cmail_l_pane_t

0x087f,	// (0x000160c1) grid_highlight_pane_cp018_ParamLimits

0x087f,	// (0x000160c1) grid_highlight_pane_cp018

0x7275,	// (0x0001cab7) main2_pane_ParamLimits

0x7275,	// (0x0001cab7) main2_pane

0x1112,	// (0x00016954) popup_sp_fs_action_menu_bg_pane_g1

0x111a,	// (0x0001695c) popup_sp_fs_action_menu_bg_pane_g2

0x1122,	// (0x00016964) popup_sp_fs_action_menu_bg_pane_g3

0x112a,	// (0x0001696c) popup_sp_fs_action_menu_bg_pane_g4

0x1132,	// (0x00016974) popup_sp_fs_action_menu_bg_pane_g5

0x113a,	// (0x0001697c) popup_sp_fs_action_menu_bg_pane_g6

0x1142,	// (0x00016984) popup_sp_fs_action_menu_bg_pane_g7

0x114a,	// (0x0001698c) popup_sp_fs_action_menu_bg_pane_g8

0x1152,	// (0x00016994) popup_sp_fs_action_menu_bg_pane_g9

0x115a,	// (0x0001699c) popup_sp_fs_action_menu_bg_pane_g10

0x115a,	// (0x0001699c) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf11f,	// (0x00024961) popup_sp_fs_action_menu_bg_pane_g

0x1310,	// (0x00016b52) list_medium_line_x2_t3_g3_g1_ParamLimits

0x1310,	// (0x00016b52) list_medium_line_x2_t3_g3_g1

0x131c,	// (0x00016b5e) list_medium_line_x2_t3_g3_g2_ParamLimits

0x131c,	// (0x00016b5e) list_medium_line_x2_t3_g3_g2

0x1310,	// (0x00016b52) list_medium_line_x2_t3_g3_g3_ParamLimits

0x1310,	// (0x00016b52) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1cd,	// (0x00024a0f) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1cd,	// (0x00024a0f) list_medium_line_x2_t3_g3_g

0x1328,	// (0x00016b6a) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1328,	// (0x00016b6a) list_medium_line_x2_t3_g3_t1

0x1328,	// (0x00016b6a) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1328,	// (0x00016b6a) list_medium_line_x2_t3_g3_t2

0x133b,	// (0x00016b7d) list_medium_line_x2_t3_g3_t3_ParamLimits

0x133b,	// (0x00016b7d) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1d4,	// (0x00024a16) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1d4,	// (0x00024a16) list_medium_line_x2_t3_g3_t

0x1310,	// (0x00016b52) list_medium_line_x2_t3_g2_g1_ParamLimits

0x1310,	// (0x00016b52) list_medium_line_x2_t3_g2_g1

0x1310,	// (0x00016b52) list_medium_line_x2_t3_g2_g2_ParamLimits

0x1310,	// (0x00016b52) list_medium_line_x2_t3_g2_g2

0x0001,

0xf1db,	// (0x00024a1d) list_medium_line_x2_t3_g2_g_ParamLimits

0xf1db,	// (0x00024a1d) list_medium_line_x2_t3_g2_g

0x1328,	// (0x00016b6a) list_medium_line_x2_t3_g2_t1_ParamLimits

0x1328,	// (0x00016b6a) list_medium_line_x2_t3_g2_t1

0x1328,	// (0x00016b6a) list_medium_line_x2_t3_g2_t2_ParamLimits

0x1328,	// (0x00016b6a) list_medium_line_x2_t3_g2_t2

0x133b,	// (0x00016b7d) list_medium_line_x2_t3_g2_t3_ParamLimits

0x133b,	// (0x00016b7d) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1d4,	// (0x00024a16) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1d4,	// (0x00024a16) list_medium_line_x2_t3_g2_t

0x1310,	// (0x00016b52) list_medium_line_x2_t4_g4_g1_ParamLimits

0x1310,	// (0x00016b52) list_medium_line_x2_t4_g4_g1

0x131c,	// (0x00016b5e) list_medium_line_x2_t4_g4_g2_ParamLimits

0x131c,	// (0x00016b5e) list_medium_line_x2_t4_g4_g2

0x131c,	// (0x00016b5e) list_medium_line_x2_t4_g4_g3_ParamLimits

0x131c,	// (0x00016b5e) list_medium_line_x2_t4_g4_g3

0x1310,	// (0x00016b52) list_medium_line_x2_t4_g4_g4_ParamLimits

0x1310,	// (0x00016b52) list_medium_line_x2_t4_g4_g4

0x0003,

0xf1e0,	// (0x00024a22) list_medium_line_x2_t4_g4_g_ParamLimits

0xf1e0,	// (0x00024a22) list_medium_line_x2_t4_g4_g

0x1328,	// (0x00016b6a) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1328,	// (0x00016b6a) list_medium_line_x2_t4_g4_t1

0x1328,	// (0x00016b6a) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1328,	// (0x00016b6a) list_medium_line_x2_t4_g4_t2

0x1328,	// (0x00016b6a) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1328,	// (0x00016b6a) list_medium_line_x2_t4_g4_t3

0x133b,	// (0x00016b7d) list_medium_line_x2_t4_g4_t4_ParamLimits

0x133b,	// (0x00016b7d) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1e9,	// (0x00024a2b) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1e9,	// (0x00024a2b) list_medium_line_x2_t4_g4_t

0x1310,	// (0x00016b52) list_medium_line_x2_t2_g4_g1_ParamLimits

0x1310,	// (0x00016b52) list_medium_line_x2_t2_g4_g1

0x131c,	// (0x00016b5e) list_medium_line_x2_t2_g4_g2_ParamLimits

0x131c,	// (0x00016b5e) list_medium_line_x2_t2_g4_g2

0x131c,	// (0x00016b5e) list_medium_line_x2_t2_g4_g3_ParamLimits

0x131c,	// (0x00016b5e) list_medium_line_x2_t2_g4_g3

0x1310,	// (0x00016b52) list_medium_line_x2_t2_g4_g4_ParamLimits

0x1310,	// (0x00016b52) list_medium_line_x2_t2_g4_g4

0x0003,

0xf1e0,	// (0x00024a22) list_medium_line_x2_t2_g4_g_ParamLimits

0xf1e0,	// (0x00024a22) list_medium_line_x2_t2_g4_g

0x1328,	// (0x00016b6a) list_medium_line_x2_t2_g4_t1_ParamLimits

0x1328,	// (0x00016b6a) list_medium_line_x2_t2_g4_t1

0x133b,	// (0x00016b7d) list_medium_line_x2_t2_g4_t2_ParamLimits

0x133b,	// (0x00016b7d) list_medium_line_x2_t2_g4_t2

0x0001,

0xf250,	// (0x00024a92) list_medium_line_x2_t2_g4_t_ParamLimits

0xf250,	// (0x00024a92) list_medium_line_x2_t2_g4_t

0x1310,	// (0x00016b52) list_medium_line_x2_t2_g3_g1_ParamLimits

0x1310,	// (0x00016b52) list_medium_line_x2_t2_g3_g1

0x131c,	// (0x00016b5e) list_medium_line_x2_t2_g3_g2_ParamLimits

0x131c,	// (0x00016b5e) list_medium_line_x2_t2_g3_g2

0x1310,	// (0x00016b52) list_medium_line_x2_t2_g3_g3_ParamLimits

0x1310,	// (0x00016b52) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1cd,	// (0x00024a0f) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1cd,	// (0x00024a0f) list_medium_line_x2_t2_g3_g

0x1328,	// (0x00016b6a) list_medium_line_x2_t2_g3_t1_ParamLimits

0x1328,	// (0x00016b6a) list_medium_line_x2_t2_g3_t1

0x133b,	// (0x00016b7d) list_medium_line_x2_t2_g3_t2_ParamLimits

0x133b,	// (0x00016b7d) list_medium_line_x2_t2_g3_t2

0x0001,

0xf250,	// (0x00024a92) list_medium_line_x2_t2_g3_t_ParamLimits

0xf250,	// (0x00024a92) list_medium_line_x2_t2_g3_t

0xa069,	// (0x0001f8ab) main_sp_fs_list_pane_ParamLimits

0xa069,	// (0x0001f8ab) main_sp_fs_list_pane

0xa076,	// (0x0001f8b8) sp_fs_scroll_pane_ParamLimits

0xa076,	// (0x0001f8b8) sp_fs_scroll_pane

0x188a,	// (0x000170cc) list_medium_line_x2_t3_t1

0x188a,	// (0x000170cc) list_medium_line_x2_t3_t2

0x1899,	// (0x000170db) list_medium_line_x2_t3_t3

0x0002,

0xf29b,	// (0x00024add) list_medium_line_x2_t3_t

0x188a,	// (0x000170cc) list_medium_line_x3_t4_t1

0x188a,	// (0x000170cc) list_medium_line_x3_t4_t2

0x188a,	// (0x000170cc) list_medium_line_x3_t4_t3

0x188a,	// (0x000170cc) list_medium_line_x3_t4_t4

0x0003,

0xf2a2,	// (0x00024ae4) list_medium_line_x3_t4_t

0x188a,	// (0x000170cc) list_medium_line_x4_t5_t1

0x188a,	// (0x000170cc) list_medium_line_x4_t5_t2

0x188a,	// (0x000170cc) list_medium_line_x4_t5_t3

0x188a,	// (0x000170cc) list_medium_line_x4_t5_t4

0x188a,	// (0x000170cc) list_medium_line_x4_t5_t5

0x0004,

0xf2ab,	// (0x00024aed) list_medium_line_x4_t5_t

0x1310,	// (0x00016b52) list_medium_line_t4_g4_g1_ParamLimits

0x1310,	// (0x00016b52) list_medium_line_t4_g4_g1

0x1310,	// (0x00016b52) list_medium_line_t4_g4_g2_ParamLimits

0x1310,	// (0x00016b52) list_medium_line_t4_g4_g2

0x1310,	// (0x00016b52) list_medium_line_t4_g4_g3_ParamLimits

0x1310,	// (0x00016b52) list_medium_line_t4_g4_g3

0x1310,	// (0x00016b52) list_medium_line_t4_g4_g4_ParamLimits

0x1310,	// (0x00016b52) list_medium_line_t4_g4_g4

0x0003,

0xf2b6,	// (0x00024af8) list_medium_line_t4_g4_g_ParamLimits

0xf2b6,	// (0x00024af8) list_medium_line_t4_g4_g

0x1328,	// (0x00016b6a) list_medium_line_t4_g4_t1_ParamLimits

0x1328,	// (0x00016b6a) list_medium_line_t4_g4_t1

0x1328,	// (0x00016b6a) list_medium_line_t4_g4_t2_ParamLimits

0x1328,	// (0x00016b6a) list_medium_line_t4_g4_t2

0x1328,	// (0x00016b6a) list_medium_line_t4_g4_t3_ParamLimits

0x1328,	// (0x00016b6a) list_medium_line_t4_g4_t3

0x1328,	// (0x00016b6a) list_medium_line_t4_g4_t4_ParamLimits

0x1328,	// (0x00016b6a) list_medium_line_t4_g4_t4

0x0003,

0xf2bf,	// (0x00024b01) list_medium_line_t4_g4_t_ParamLimits

0xf2bf,	// (0x00024b01) list_medium_line_t4_g4_t

0xa0ff,	// (0x0001f941) chi_dic_find_pane_g1

0x78f8,	// (0x0001d13a) main_tport_pane

0x188a,	// (0x000170cc) list_medium_line_plain_t1

0x1310,	// (0x00016b52) list_medium_line_t2_g2_g1_ParamLimits

0x1310,	// (0x00016b52) list_medium_line_t2_g2_g1

0x4650,	// (0x00019e92) list_medium_line_t2_g2_g2_ParamLimits

0x4650,	// (0x00019e92) list_medium_line_t2_g2_g2

0x0001,

0xf990,	// (0x000251d2) list_medium_line_t2_g2_g_ParamLimits

0xf990,	// (0x000251d2) list_medium_line_t2_g2_g

0x1328,	// (0x00016b6a) list_medium_line_t2_g2_t1_ParamLimits

0x1328,	// (0x00016b6a) list_medium_line_t2_g2_t1

0x1328,	// (0x00016b6a) list_medium_line_t2_g2_t2_ParamLimits

0x1328,	// (0x00016b6a) list_medium_line_t2_g2_t2

0x0001,

0xf995,	// (0x000251d7) list_medium_line_t2_g2_t_ParamLimits

0xf995,	// (0x000251d7) list_medium_line_t2_g2_t

0x49f5,	// (0x0001a237) aid_sp_fs_list_icon_a_sm

0x49fd,	// (0x0001a23f) aid_sp_fs_list_icon_d

0x4a05,	// (0x0001a247) aid_sp_fs_text_primary

0x4a0e,	// (0x0001a250) aid_sp_fs_text_secondary

0x4a17,	// (0x0001a259) list_medium_line

0x4a17,	// (0x0001a259) list_medium_line_g2

0x4a17,	// (0x0001a259) list_medium_line_g3

0x4a17,	// (0x0001a259) list_medium_line_plain

0x4a17,	// (0x0001a259) list_medium_line_plain_t2

0x4a17,	// (0x0001a259) list_medium_line_plain_t3

0x4a17,	// (0x0001a259) list_medium_line_right_icon

0x4a17,	// (0x0001a259) list_medium_line_right_iconx2

0x4a17,	// (0x0001a259) list_medium_line_t2

0x4a17,	// (0x0001a259) list_medium_line_t2_g2

0x4a17,	// (0x0001a259) list_medium_line_t2_g3

0x4a17,	// (0x0001a259) list_medium_line_t2_right_icon

0x4a17,	// (0x0001a259) list_medium_line_t2_right_iconx2

0x4a17,	// (0x0001a259) list_medium_line_t3

0x4a17,	// (0x0001a259) list_medium_line_t3_g2

0x4a17,	// (0x0001a259) list_medium_line_t3_g3

0x4a17,	// (0x0001a259) list_medium_line_t3_right_iconx2

0xc59e,	// (0x00021de0) list_medium_line_t4_g4

0xc5a7,	// (0x00021de9) list_medium_line_x2

0xc5a7,	// (0x00021de9) list_medium_line_x2_t2_g2

0xc5a7,	// (0x00021de9) list_medium_line_x2_t2_g3

0xc5a7,	// (0x00021de9) list_medium_line_x2_t2_g4

0xc5a7,	// (0x00021de9) list_medium_line_x2_t3

0xc5a7,	// (0x00021de9) list_medium_line_x2_t3_g2

0xc5a7,	// (0x00021de9) list_medium_line_x2_t3_g3

0xc5a7,	// (0x00021de9) list_medium_line_x2_t3_g4

0xc5a7,	// (0x00021de9) list_medium_line_x2_t4_g2

0xc5a7,	// (0x00021de9) list_medium_line_x2_t4_g4

0xc5b0,	// (0x00021df2) list_medium_line_x3

0xc5b0,	// (0x00021df2) list_medium_line_x3_t4

0xc5b0,	// (0x00021df2) list_medium_line_x3_t4_g4

0xc59e,	// (0x00021de0) list_medium_line_x4_t4

0xc59e,	// (0x00021de0) list_medium_line_x4_t4_g7

0xc59e,	// (0x00021de0) list_medium_line_x4_t5

0xc5b9,	// (0x00021dfb) list_single_fs_dyc_pane_ParamLimits

0xc5b9,	// (0x00021dfb) list_single_fs_dyc_pane

0x1310,	// (0x00016b52) list_medium_line_x4_t4_g7_g1_ParamLimits

0x1310,	// (0x00016b52) list_medium_line_x4_t4_g7_g1

0x0f73,	// (0x000167b5) list_medium_line_x4_t4_g7_g2_ParamLimits

0x0f73,	// (0x000167b5) list_medium_line_x4_t4_g7_g2

0x131c,	// (0x00016b5e) list_medium_line_x4_t4_g7_g3_ParamLimits

0x131c,	// (0x00016b5e) list_medium_line_x4_t4_g7_g3

0x0f73,	// (0x000167b5) list_medium_line_x4_t4_g7_g4_ParamLimits

0x0f73,	// (0x000167b5) list_medium_line_x4_t4_g7_g4

0x0f73,	// (0x000167b5) list_medium_line_x4_t4_g7_g5_ParamLimits

0x0f73,	// (0x000167b5) list_medium_line_x4_t4_g7_g5

0x0f73,	// (0x000167b5) list_medium_line_x4_t4_g7_g6_ParamLimits

0x0f73,	// (0x000167b5) list_medium_line_x4_t4_g7_g6

0x0f81,	// (0x000167c3) list_medium_line_x4_t4_g7_g7_ParamLimits

0x0f81,	// (0x000167c3) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb60,	// (0x000253a2) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb60,	// (0x000253a2) list_medium_line_x4_t4_g7_g

0x1328,	// (0x00016b6a) list_medium_line_x4_t4_g7_t1_ParamLimits

0x1328,	// (0x00016b6a) list_medium_line_x4_t4_g7_t1

0x1328,	// (0x00016b6a) list_medium_line_x4_t4_g7_t2_ParamLimits

0x1328,	// (0x00016b6a) list_medium_line_x4_t4_g7_t2

0x1328,	// (0x00016b6a) list_medium_line_x4_t4_g7_t3_ParamLimits

0x1328,	// (0x00016b6a) list_medium_line_x4_t4_g7_t3

0x4ef2,	// (0x0001a734) list_medium_line_x4_t4_g7_t4_ParamLimits

0x4ef2,	// (0x0001a734) list_medium_line_x4_t4_g7_t4

0x4f05,	// (0x0001a747) list_medium_line_x4_t4_g7_t5_ParamLimits

0x4f05,	// (0x0001a747) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb6f,	// (0x000253b1) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb6f,	// (0x000253b1) list_medium_line_x4_t4_g7_t

0xcbef,	// (0x00022431) list_single_dyc_row_pane_ParamLimits

0xcbef,	// (0x00022431) list_single_dyc_row_pane

0xd203,	// (0x00022a45) call5_gesture_pane_ParamLimits

0xd203,	// (0x00022a45) call5_gesture_pane

0xd233,	// (0x00022a75) call5_windows_pane_ParamLimits

0xd233,	// (0x00022a75) call5_windows_pane

0xd29f,	// (0x00022ae1) call5_swipe_1_pane_cp_ParamLimits

0xd29f,	// (0x00022ae1) call5_swipe_1_pane_cp

0xd2ab,	// (0x00022aed) call5_swipe_2_pane_cp_ParamLimits

0xd2ab,	// (0x00022aed) call5_swipe_2_pane_cp

0x127e,	// (0x00016ac0) call5_image_pane_cp

0xd2b7,	// (0x00022af9) popup_call5_audio_first_window_cp_ParamLimits

0xd2b7,	// (0x00022af9) popup_call5_audio_first_window_cp

0x54f6,	// (0x0001ad38) call5_swipe_1_pane_g1_cp_ParamLimits

0x54f6,	// (0x0001ad38) call5_swipe_1_pane_g1_cp

0x553c,	// (0x0001ad7e) call5_swipe_1_pane_g2_cp

0x550f,	// (0x0001ad51) call5_swipe_1_pane_t1_cp_ParamLimits

0x550f,	// (0x0001ad51) call5_swipe_1_pane_t1_cp

0x54f6,	// (0x0001ad38) call5_swipe_2_pane_g1_cp_ParamLimits

0x54f6,	// (0x0001ad38) call5_swipe_2_pane_g1_cp

0x5544,	// (0x0001ad86) call5_swipe_2_pane_g2_cp

0x554c,	// (0x0001ad8e) call5_swipe_2_pane_t1_cp_ParamLimits

0x554c,	// (0x0001ad8e) call5_swipe_2_pane_t1_cp

0x087f,	// (0x000160c1) main_sp_fs_email_pane

0x5561,	// (0x0001ada3) main_sp_fs_listscroll_pane_te

0xd2c3,	// (0x00022b05) popup_sp_fs_action_menu_pane_ParamLimits

0xd2c3,	// (0x00022b05) popup_sp_fs_action_menu_pane

0x12f6,	// (0x00016b38) bg_sp_fs_ctrlbar_pane_g1

0x3c2b,	// (0x0001946d) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x3c3d,	// (0x0001947f) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x3c34,	// (0x00019476) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x12f6,	// (0x00016b38) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc5d,	// (0x0002549f) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x3343,	// (0x00018b85) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x3343,	// (0x00018b85) bg_sp_fs_ctrlbar_ddmenu_pane

0x556a,	// (0x0001adac) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x556a,	// (0x0001adac) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x5576,	// (0x0001adb8) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x5576,	// (0x0001adb8) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc66,	// (0x000254a8) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc66,	// (0x000254a8) main_sp_fs_ctrlbar_ddmenu_pane_g

0x5582,	// (0x0001adc4) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x5582,	// (0x0001adc4) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x559c,	// (0x0001adde) list_medium_line_t2_right_icon_g1

0x188a,	// (0x000170cc) list_medium_line_t2_right_icon_t1

0x188a,	// (0x000170cc) list_medium_line_t2_right_icon_t2

0x0001,

0xfc6b,	// (0x000254ad) list_medium_line_t2_right_icon_t

0x1e72,	// (0x000176b4) bg_sp_fs_ctrlbar_pane_ParamLimits

0x1e72,	// (0x000176b4) bg_sp_fs_ctrlbar_pane

0xd34a,	// (0x00022b8c) main_sp_fs_ctrlbar_button_pane_cp01

0xd352,	// (0x00022b94) main_sp_fs_ctrlbar_ddmenu_pane

0x55dc,	// (0x0001ae1e) main_sp_fs_ctrlbar_pane_g1

0x55e8,	// (0x0001ae2a) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc70,	// (0x000254b2) main_sp_fs_ctrlbar_pane_g

0xd38c,	// (0x00022bce) main_sp_fs_ctrlbar_pane_t1

0xd3d4,	// (0x00022c16) main_sp_fs_ctrlbar_pane

0xd3e8,	// (0x00022c2a) main_sp_fs_listscroll_pane_te_cp01

0xd3f9,	// (0x00022c3b) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0xd3f9,	// (0x00022c3b) popup_sp_fs_action_menu_pane_cp01

0x087f,	// (0x000160c1) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x087f,	// (0x000160c1) bg_sp_fs_highlight_list_pane_cp01

0xd41f,	// (0x00022c61) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xd41f,	// (0x00022c61) sp_fs_action_menu_list_gene_pane_g1

0x560f,	// (0x0001ae51) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x560f,	// (0x0001ae51) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc7e,	// (0x000254c0) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc7e,	// (0x000254c0) sp_fs_action_menu_list_gene_pane_g

0xd42e,	// (0x00022c70) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xd42e,	// (0x00022c70) sp_fs_action_menu_list_gene_pane_t1

0xd446,	// (0x00022c88) sp_fs_action_menu_list_gene_pane_ParamLimits

0xd446,	// (0x00022c88) sp_fs_action_menu_list_gene_pane

0x561c,	// (0x0001ae5e) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x561c,	// (0x0001ae5e) popup_sp_fs_action_menu_bg_pane

0xd463,	// (0x00022ca5) sp_fs_action_menu_list_pane_ParamLimits

0xd463,	// (0x00022ca5) sp_fs_action_menu_list_pane

0x5641,	// (0x0001ae83) sp_fs_scroll_pane_cp01_ParamLimits

0x5641,	// (0x0001ae83) sp_fs_scroll_pane_cp01

0x188a,	// (0x000170cc) list_medium_line_plain_t2_t1

0x188a,	// (0x000170cc) list_medium_line_plain_t2_t2

0x0001,

0xfc6b,	// (0x000254ad) list_medium_line_plain_t2_t

0x188a,	// (0x000170cc) list_medium_line_plain_t3_t1

0x188a,	// (0x000170cc) list_medium_line_plain_t3_t2

0x188a,	// (0x000170cc) list_medium_line_plain_t3_t3

0x0002,

0xfc83,	// (0x000254c5) list_medium_line_plain_t3_t

0x1310,	// (0x00016b52) list_medium_line_x2_t2_g2_g1_ParamLimits

0x1310,	// (0x00016b52) list_medium_line_x2_t2_g2_g1

0x1310,	// (0x00016b52) list_medium_line_x2_t2_g2_g2_ParamLimits

0x1310,	// (0x00016b52) list_medium_line_x2_t2_g2_g2

0x0001,

0xf1db,	// (0x00024a1d) list_medium_line_x2_t2_g2_g_ParamLimits

0xf1db,	// (0x00024a1d) list_medium_line_x2_t2_g2_g

0x1328,	// (0x00016b6a) list_medium_line_x2_t2_g2_t1_ParamLimits

0x1328,	// (0x00016b6a) list_medium_line_x2_t2_g2_t1

0x133b,	// (0x00016b7d) list_medium_line_x2_t2_g2_t2_ParamLimits

0x133b,	// (0x00016b7d) list_medium_line_x2_t2_g2_t2

0x0001,

0xf250,	// (0x00024a92) list_medium_line_x2_t2_g2_t_ParamLimits

0xf250,	// (0x00024a92) list_medium_line_x2_t2_g2_t

0x1310,	// (0x00016b52) list_medium_line_x2_t4_g2_g1_ParamLimits

0x1310,	// (0x00016b52) list_medium_line_x2_t4_g2_g1

0x1310,	// (0x00016b52) list_medium_line_x2_t4_g2_g2_ParamLimits

0x1310,	// (0x00016b52) list_medium_line_x2_t4_g2_g2

0x0001,

0xf1db,	// (0x00024a1d) list_medium_line_x2_t4_g2_g_ParamLimits

0xf1db,	// (0x00024a1d) list_medium_line_x2_t4_g2_g

0x1328,	// (0x00016b6a) list_medium_line_x2_t4_g2_t1_ParamLimits

0x1328,	// (0x00016b6a) list_medium_line_x2_t4_g2_t1

0x1328,	// (0x00016b6a) list_medium_line_x2_t4_g2_t2_ParamLimits

0x1328,	// (0x00016b6a) list_medium_line_x2_t4_g2_t2

0x1328,	// (0x00016b6a) list_medium_line_x2_t4_g2_t3_ParamLimits

0x1328,	// (0x00016b6a) list_medium_line_x2_t4_g2_t3

0x133b,	// (0x00016b7d) list_medium_line_x2_t4_g2_t4_ParamLimits

0x133b,	// (0x00016b7d) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1e9,	// (0x00024a2b) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1e9,	// (0x00024a2b) list_medium_line_x2_t4_g2_t

0x559c,	// (0x0001adde) list_medium_line_t3_right_iconx2_g1

0x12f6,	// (0x00016b38) list_medium_line_t3_right_iconx2_g2

0x5667,	// (0x0001aea9) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfc8a,	// (0x000254cc) list_medium_line_t3_right_iconx2_g

0x188a,	// (0x000170cc) list_medium_line_t3_right_iconx2_t1

0x188a,	// (0x000170cc) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc6b,	// (0x000254ad) list_medium_line_t3_right_iconx2_t

0x1310,	// (0x00016b52) list_medium_line_x3_t4_g4_g1_ParamLimits

0x1310,	// (0x00016b52) list_medium_line_x3_t4_g4_g1

0x131c,	// (0x00016b5e) list_medium_line_x3_t4_g4_g2_ParamLimits

0x131c,	// (0x00016b5e) list_medium_line_x3_t4_g4_g2

0x1310,	// (0x00016b52) list_medium_line_x3_t4_g4_g3_ParamLimits

0x1310,	// (0x00016b52) list_medium_line_x3_t4_g4_g3

0x131c,	// (0x00016b5e) list_medium_line_x3_t4_g4_g4_ParamLimits

0x131c,	// (0x00016b5e) list_medium_line_x3_t4_g4_g4

0x0003,

0xfc91,	// (0x000254d3) list_medium_line_x3_t4_g4_g_ParamLimits

0xfc91,	// (0x000254d3) list_medium_line_x3_t4_g4_g

0x1328,	// (0x00016b6a) list_medium_line_x3_t4_g4_t1_ParamLimits

0x1328,	// (0x00016b6a) list_medium_line_x3_t4_g4_t1

0x1328,	// (0x00016b6a) list_medium_line_x3_t4_g4_t2_ParamLimits

0x1328,	// (0x00016b6a) list_medium_line_x3_t4_g4_t2

0x1328,	// (0x00016b6a) list_medium_line_x3_t4_g4_t3_ParamLimits

0x1328,	// (0x00016b6a) list_medium_line_x3_t4_g4_t3

0x5670,	// (0x0001aeb2) list_medium_line_x3_t4_g4_t4_ParamLimits

0x5670,	// (0x0001aeb2) list_medium_line_x3_t4_g4_t4

0x0003,

0xfc9a,	// (0x000254dc) list_medium_line_x3_t4_g4_t_ParamLimits

0xfc9a,	// (0x000254dc) list_medium_line_x3_t4_g4_t

0xd481,	// (0x00022cc3) list_single_dyc_row_text_pane_t1_ParamLimits

0xd481,	// (0x00022cc3) list_single_dyc_row_text_pane_t1

0xd4b8,	// (0x00022cfa) list_single_dyc_row_text_pane_t2_ParamLimits

0xd4b8,	// (0x00022cfa) list_single_dyc_row_text_pane_t2

0x568d,	// (0x0001aecf) list_single_dyc_row_text_pane_t3_ParamLimits

0x568d,	// (0x0001aecf) list_single_dyc_row_text_pane_t3

0x0005,

0xfca3,	// (0x000254e5) list_single_dyc_row_text_pane_t_ParamLimits

0xfca3,	// (0x000254e5) list_single_dyc_row_text_pane_t

0x56b1,	// (0x0001aef3) list_single_dyc_row_pane_g1_ParamLimits

0x56b1,	// (0x0001aef3) list_single_dyc_row_pane_g1

0x56bd,	// (0x0001aeff) list_single_dyc_row_pane_g2_ParamLimits

0x56bd,	// (0x0001aeff) list_single_dyc_row_pane_g2

0x56c9,	// (0x0001af0b) list_single_dyc_row_pane_g3_ParamLimits

0x56c9,	// (0x0001af0b) list_single_dyc_row_pane_g3

0x56d5,	// (0x0001af17) list_single_dyc_row_pane_g4_ParamLimits

0x56d5,	// (0x0001af17) list_single_dyc_row_pane_g4

0x0003,

0xfcb0,	// (0x000254f2) list_single_dyc_row_pane_g_ParamLimits

0xfcb0,	// (0x000254f2) list_single_dyc_row_pane_g

0x56e1,	// (0x0001af23) list_single_dyc_row_text_pane_ParamLimits

0x56e1,	// (0x0001af23) list_single_dyc_row_text_pane

0x082c,	// (0x0001606e) bg_sp_fs_scroll_pane

0x5700,	// (0x0001af42) thumb_sp_fs_scroll_pane

0x1310,	// (0x00016b52) list_medium_line_g1_ParamLimits

0x1310,	// (0x00016b52) list_medium_line_g1

0x1328,	// (0x00016b6a) list_medium_line_t1_ParamLimits

0x1328,	// (0x00016b6a) list_medium_line_t1

0x1310,	// (0x00016b52) list_medium_line_x2_g1_ParamLimits

0x1310,	// (0x00016b52) list_medium_line_x2_g1

0x4650,	// (0x00019e92) list_medium_line_x2_g2_ParamLimits

0x4650,	// (0x00019e92) list_medium_line_x2_g2

0x0001,

0xf990,	// (0x000251d2) list_medium_line_x2_g_ParamLimits

0xf990,	// (0x000251d2) list_medium_line_x2_g

0x12c8,	// (0x00016b0a) list_medium_line_x2_t1_ParamLimits

0x12c8,	// (0x00016b0a) list_medium_line_x2_t1

0x1310,	// (0x00016b52) list_medium_line_x3_g1_ParamLimits

0x1310,	// (0x00016b52) list_medium_line_x3_g1

0x5709,	// (0x0001af4b) list_medium_line_x3_g2_ParamLimits

0x5709,	// (0x0001af4b) list_medium_line_x3_g2

0x0001,

0xfcb9,	// (0x000254fb) list_medium_line_x3_g_ParamLimits

0xfcb9,	// (0x000254fb) list_medium_line_x3_g

0x5716,	// (0x0001af58) list_medium_line_x3_t1_ParamLimits

0x5716,	// (0x0001af58) list_medium_line_x3_t1

0x572a,	// (0x0001af6c) thumb_sp_fs_scroll_pane_g1

0x5733,	// (0x0001af75) thumb_sp_fs_scroll_pane_g2

0x573c,	// (0x0001af7e) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfcbe,	// (0x00025500) thumb_sp_fs_scroll_pane_g

0x572a,	// (0x0001af6c) bg_sp_fs_scroll_pane_g1

0x5733,	// (0x0001af75) bg_sp_fs_scroll_pane_g2

0x573c,	// (0x0001af7e) bg_sp_fs_scroll_pane_g3

0x0002,

0xfcbe,	// (0x00025500) bg_sp_fs_scroll_pane_g

0x1310,	// (0x00016b52) list_medium_line_x2_t3_g4_g1_ParamLimits

0x1310,	// (0x00016b52) list_medium_line_x2_t3_g4_g1

0x131c,	// (0x00016b5e) list_medium_line_x2_t3_g4_g2_ParamLimits

0x131c,	// (0x00016b5e) list_medium_line_x2_t3_g4_g2

0x131c,	// (0x00016b5e) list_medium_line_x2_t3_g4_g3_ParamLimits

0x131c,	// (0x00016b5e) list_medium_line_x2_t3_g4_g3

0x1310,	// (0x00016b52) list_medium_line_x2_t3_g4_g4_ParamLimits

0x1310,	// (0x00016b52) list_medium_line_x2_t3_g4_g4

0x0003,

0xf1e0,	// (0x00024a22) list_medium_line_x2_t3_g4_g_ParamLimits

0xf1e0,	// (0x00024a22) list_medium_line_x2_t3_g4_g

0x1328,	// (0x00016b6a) list_medium_line_x2_t3_g4_t1_ParamLimits

0x1328,	// (0x00016b6a) list_medium_line_x2_t3_g4_t1

0x1328,	// (0x00016b6a) list_medium_line_x2_t3_g4_t2_ParamLimits

0x1328,	// (0x00016b6a) list_medium_line_x2_t3_g4_t2

0x133b,	// (0x00016b7d) list_medium_line_x2_t3_g4_t3_ParamLimits

0x133b,	// (0x00016b7d) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1d4,	// (0x00024a16) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1d4,	// (0x00024a16) list_medium_line_x2_t3_g4_t

0x1310,	// (0x00016b52) list_medium_line_g2_g1_ParamLimits

0x1310,	// (0x00016b52) list_medium_line_g2_g1

0x4650,	// (0x00019e92) list_medium_line_g2_g2_ParamLimits

0x4650,	// (0x00019e92) list_medium_line_g2_g2

0x0001,

0xf990,	// (0x000251d2) list_medium_line_g2_g_ParamLimits

0xf990,	// (0x000251d2) list_medium_line_g2_g

0x1328,	// (0x00016b6a) list_medium_line_g2_t1_ParamLimits

0x1328,	// (0x00016b6a) list_medium_line_g2_t1

0x1310,	// (0x00016b52) list_medium_line_t3_g2_g1_ParamLimits

0x1310,	// (0x00016b52) list_medium_line_t3_g2_g1

0x4650,	// (0x00019e92) list_medium_line_t3_g2_g2_ParamLimits

0x4650,	// (0x00019e92) list_medium_line_t3_g2_g2

0x0001,

0xf990,	// (0x000251d2) list_medium_line_t3_g2_g_ParamLimits

0xf990,	// (0x000251d2) list_medium_line_t3_g2_g

0x1328,	// (0x00016b6a) list_medium_line_t3_g2_t1_ParamLimits

0x1328,	// (0x00016b6a) list_medium_line_t3_g2_t1

0x1328,	// (0x00016b6a) list_medium_line_t3_g2_t2_ParamLimits

0x1328,	// (0x00016b6a) list_medium_line_t3_g2_t2

0x1328,	// (0x00016b6a) list_medium_line_t3_g2_t3_ParamLimits

0x1328,	// (0x00016b6a) list_medium_line_t3_g2_t3

0x0002,

0xfcc5,	// (0x00025507) list_medium_line_t3_g2_t_ParamLimits

0xfcc5,	// (0x00025507) list_medium_line_t3_g2_t

0x5745,	// (0x0001af87) list_medium_line_right_icon_g1

0x188a,	// (0x000170cc) list_medium_line_right_icon_t1

0x1310,	// (0x00016b52) list_medium_line_t2_g1_ParamLimits

0x1310,	// (0x00016b52) list_medium_line_t2_g1

0x1328,	// (0x00016b6a) list_medium_line_t2_t1_ParamLimits

0x1328,	// (0x00016b6a) list_medium_line_t2_t1

0x1328,	// (0x00016b6a) list_medium_line_t2_t2_ParamLimits

0x1328,	// (0x00016b6a) list_medium_line_t2_t2

0x0001,

0xf995,	// (0x000251d7) list_medium_line_t2_t_ParamLimits

0xf995,	// (0x000251d7) list_medium_line_t2_t

0x1310,	// (0x00016b52) list_medium_line_t3_g1_ParamLimits

0x1310,	// (0x00016b52) list_medium_line_t3_g1

0x1328,	// (0x00016b6a) list_medium_line_t3_t1_ParamLimits

0x1328,	// (0x00016b6a) list_medium_line_t3_t1

0x1328,	// (0x00016b6a) list_medium_line_t3_t2_ParamLimits

0x1328,	// (0x00016b6a) list_medium_line_t3_t2

0x1328,	// (0x00016b6a) list_medium_line_t3_t3_ParamLimits

0x1328,	// (0x00016b6a) list_medium_line_t3_t3

0x0002,

0xfcc5,	// (0x00025507) list_medium_line_t3_t_ParamLimits

0xfcc5,	// (0x00025507) list_medium_line_t3_t

0x1310,	// (0x00016b52) list_medium_line_g3_g1_ParamLimits

0x1310,	// (0x00016b52) list_medium_line_g3_g1

0x131c,	// (0x00016b5e) list_medium_line_g3_g2_ParamLimits

0x131c,	// (0x00016b5e) list_medium_line_g3_g2

0x131c,	// (0x00016b5e) list_medium_line_g3_g3_ParamLimits

0x131c,	// (0x00016b5e) list_medium_line_g3_g3

0x0002,

0xfccc,	// (0x0002550e) list_medium_line_g3_g_ParamLimits

0xfccc,	// (0x0002550e) list_medium_line_g3_g

0x1328,	// (0x00016b6a) list_medium_line_g3_t1_ParamLimits

0x1328,	// (0x00016b6a) list_medium_line_g3_t1

0x1310,	// (0x00016b52) list_medium_line_t2_g3_g1_ParamLimits

0x1310,	// (0x00016b52) list_medium_line_t2_g3_g1

0x131c,	// (0x00016b5e) list_medium_line_t2_g3_g2_ParamLimits

0x131c,	// (0x00016b5e) list_medium_line_t2_g3_g2

0x131c,	// (0x00016b5e) list_medium_line_t2_g3_g3_ParamLimits

0x131c,	// (0x00016b5e) list_medium_line_t2_g3_g3

0x0002,

0xfccc,	// (0x0002550e) list_medium_line_t2_g3_g_ParamLimits

0xfccc,	// (0x0002550e) list_medium_line_t2_g3_g

0x1328,	// (0x00016b6a) list_medium_line_t2_g3_t1_ParamLimits

0x1328,	// (0x00016b6a) list_medium_line_t2_g3_t1

0x1328,	// (0x00016b6a) list_medium_line_t2_g3_t2_ParamLimits

0x1328,	// (0x00016b6a) list_medium_line_t2_g3_t2

0x0001,

0xf995,	// (0x000251d7) list_medium_line_t2_g3_t_ParamLimits

0xf995,	// (0x000251d7) list_medium_line_t2_g3_t

0x1310,	// (0x00016b52) list_medium_line_t3_g3_g1_ParamLimits

0x1310,	// (0x00016b52) list_medium_line_t3_g3_g1

0x131c,	// (0x00016b5e) list_medium_line_t3_g3_g2_ParamLimits

0x131c,	// (0x00016b5e) list_medium_line_t3_g3_g2

0x131c,	// (0x00016b5e) list_medium_line_t3_g3_g3_ParamLimits

0x131c,	// (0x00016b5e) list_medium_line_t3_g3_g3

0x0002,

0xfccc,	// (0x0002550e) list_medium_line_t3_g3_g_ParamLimits

0xfccc,	// (0x0002550e) list_medium_line_t3_g3_g

0x1328,	// (0x00016b6a) list_medium_line_t3_g3_t1_ParamLimits

0x1328,	// (0x00016b6a) list_medium_line_t3_g3_t1

0x1328,	// (0x00016b6a) list_medium_line_t3_g3_t2_ParamLimits

0x1328,	// (0x00016b6a) list_medium_line_t3_g3_t2

0x1328,	// (0x00016b6a) list_medium_line_t3_g3_t3_ParamLimits

0x1328,	// (0x00016b6a) list_medium_line_t3_g3_t3

0x0002,

0xfcc5,	// (0x00025507) list_medium_line_t3_g3_t_ParamLimits

0xfcc5,	// (0x00025507) list_medium_line_t3_g3_t

0x559c,	// (0x0001adde) list_medium_line_right_iconx2_g1

0x559c,	// (0x0001adde) list_medium_line_right_iconx2_g2

0x0001,

0xfcd3,	// (0x00025515) list_medium_line_right_iconx2_g

0x574e,	// (0x0001af90) list_medium_line_right_iconx2_t1

0x559c,	// (0x0001adde) list_medium_line_t2_right_iconx2_g1

0x559c,	// (0x0001adde) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfcd3,	// (0x00025515) list_medium_line_t2_right_iconx2_g

0x188a,	// (0x000170cc) list_medium_line_t2_right_iconx2_t1

0x188a,	// (0x000170cc) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc6b,	// (0x000254ad) list_medium_line_t2_right_iconx2_t

0x188a,	// (0x000170cc) list_medium_line_x4_t4_t1

0x188a,	// (0x000170cc) list_medium_line_x4_t4_t2

0x188a,	// (0x000170cc) list_medium_line_x4_t4_t3

0x188a,	// (0x000170cc) list_medium_line_x4_t4_t4

0x0003,

0xf2a2,	// (0x00024ae4) list_medium_line_x4_t4_t

0xd5f9,	// (0x00022e3b) tport_appsw_pane_ParamLimits

0xd5f9,	// (0x00022e3b) tport_appsw_pane

0xd605,	// (0x00022e47) tport_contact_pane_ParamLimits

0xd605,	// (0x00022e47) tport_contact_pane

0xd613,	// (0x00022e55) tport_listscroll_pane_ParamLimits

0xd613,	// (0x00022e55) tport_listscroll_pane

0xd621,	// (0x00022e63) cell_tport_appsw_pane_ParamLimits

0xd621,	// (0x00022e63) cell_tport_appsw_pane

0x0f81,	// (0x000167c3) tport_appsw_pane_g1_ParamLimits

0x0f81,	// (0x000167c3) tport_appsw_pane_g1

0x575d,	// (0x0001af9f) tport_contact_pane_g1

0x5766,	// (0x0001afa8) tport_contact_pane_t1

0x5774,	// (0x0001afb6) tport_contact_pane_t2

0x0001,

0xfcd8,	// (0x0002551a) tport_contact_pane_t

0x5782,	// (0x0001afc4) list_tport_pane

0x116c,	// (0x000169ae) scroll_pane_cp_030

0x5793,	// (0x0001afd5) cell_tport_appsw_pane_g1

0x57a3,	// (0x0001afe5) cell_tport_appsw_pane_t1

0x57b1,	// (0x0001aff3) grid_highlight_pane_cp019

0xd648,	// (0x00022e8a) list_tport_double_graphic_pane_ParamLimits

0xd648,	// (0x00022e8a) list_tport_double_graphic_pane

0x087f,	// (0x000160c1) list_highlight_pane_cp023_ParamLimits

0x087f,	// (0x000160c1) list_highlight_pane_cp023

0xd655,	// (0x00022e97) list_tport_double_graphic_pane_g1_ParamLimits

0xd655,	// (0x00022e97) list_tport_double_graphic_pane_g1

0xd662,	// (0x00022ea4) list_tport_double_graphic_pane_t1_ParamLimits

0xd662,	// (0x00022ea4) list_tport_double_graphic_pane_t1

0xd677,	// (0x00022eb9) list_tport_double_graphic_pane_t2_ParamLimits

0xd677,	// (0x00022eb9) list_tport_double_graphic_pane_t2

0x0001,

0xfce4,	// (0x00025526) list_tport_double_graphic_pane_t_ParamLimits

0xfce4,	// (0x00025526) list_tport_double_graphic_pane_t

0x082c,	// (0x0001606e) main_cale_note_pane

0x842b,	// (0x0001dc6d) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x842b,	// (0x0001dc6d) cell_vitu2_function_top_wide_pane_cp01

0xcf1b,	// (0x0002275d) wait_bar_pane_cp05_ParamLimits

0x087f,	// (0x000160c1) listscroll_cmail_pane

0x57c1,	// (0x0001b003) list_cmail_pane

0xd689,	// (0x00022ecb) list_cmail_body_pane

0xd689,	// (0x00022ecb) list_single_cmail_header_caption_pane

0xd6a2,	// (0x00022ee4) list_single_cmail_header_detail_pane_ParamLimits

0xd6a2,	// (0x00022ee4) list_single_cmail_header_detail_pane

0x57e4,	// (0x0001b026) list_single_cmail_header_caption_pane_t1

0xd6cf,	// (0x00022f11) list_single_cmail_header_detail_pane_g1_ParamLimits

0xd6cf,	// (0x00022f11) list_single_cmail_header_detail_pane_g1

0x57fb,	// (0x0001b03d) list_single_cmail_header_detail_pane_g2_ParamLimits

0x57fb,	// (0x0001b03d) list_single_cmail_header_detail_pane_g2

0x0002,

0xfce9,	// (0x0002552b) list_single_cmail_header_detail_pane_g_ParamLimits

0xfce9,	// (0x0002552b) list_single_cmail_header_detail_pane_g

0xd6e5,	// (0x00022f27) list_single_cmail_header_detail_pane_t1_ParamLimits

0xd6e5,	// (0x00022f27) list_single_cmail_header_detail_pane_t1

0x5838,	// (0x0001b07a) list_single_cmail_header_editor_pane_bg_ParamLimits

0x5838,	// (0x0001b07a) list_single_cmail_header_editor_pane_bg

0x584f,	// (0x0001b091) list_cmail_body_pane_g1

0x5858,	// (0x0001b09a) list_cmail_body_pane_t1

0x4391,	// (0x00019bd3) list_single_cmail_header_editor_pane_bg_g1

0x1552,	// (0x00016d94) list_single_cmail_header_editor_pane_bg_g1_copy1

0x43a1,	// (0x00019be3) list_single_cmail_header_editor_pane_bg_g1_copy2

0x4399,	// (0x00019bdb) list_single_cmail_header_editor_pane_bg_g1_copy3

0x4628,	// (0x00019e6a) list_single_cmail_header_editor_pane_bg_g1_copy4

0x43c1,	// (0x00019c03) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x43b1,	// (0x00019bf3) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x43b9,	// (0x00019bfb) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x1532,	// (0x00016d74) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xd721,	// (0x00022f63) calenote_gesture_pane_ParamLimits

0xd721,	// (0x00022f63) calenote_gesture_pane

0xd739,	// (0x00022f7b) calenote_window_pane_ParamLimits

0xd739,	// (0x00022f7b) calenote_window_pane

0x5866,	// (0x0001b0a8) popup_note_window_cp01

0xd751,	// (0x00022f93) calenote_swipe_1_pane_ParamLimits

0xd751,	// (0x00022f93) calenote_swipe_1_pane

0xd2ab,	// (0x00022aed) calenote_swipe_2_pane_ParamLimits

0xd2ab,	// (0x00022aed) calenote_swipe_2_pane

0x54f6,	// (0x0001ad38) calenote_swipe_1_pane_g1_ParamLimits

0x54f6,	// (0x0001ad38) calenote_swipe_1_pane_g1

0x5503,	// (0x0001ad45) calenote_swipe_1_pane_g2_ParamLimits

0x5503,	// (0x0001ad45) calenote_swipe_1_pane_g2

0x0001,

0xfc53,	// (0x00025495) calenote_swipe_1_pane_g_ParamLimits

0xfc53,	// (0x00025495) calenote_swipe_1_pane_g

0x5878,	// (0x0001b0ba) calenote_swipe_1_pane_t1_ParamLimits

0x5878,	// (0x0001b0ba) calenote_swipe_1_pane_t1

0x54f6,	// (0x0001ad38) calenote_swipe_2_pane_g1_ParamLimits

0x54f6,	// (0x0001ad38) calenote_swipe_2_pane_g1

0x5897,	// (0x0001b0d9) calenote_swipe_2_pane_g2_ParamLimits

0x5897,	// (0x0001b0d9) calenote_swipe_2_pane_g2

0x0001,

0xfcf5,	// (0x00025537) calenote_swipe_2_pane_g_ParamLimits

0xfcf5,	// (0x00025537) calenote_swipe_2_pane_g

0x58a3,	// (0x0001b0e5) calenote_swipe_2_pane_t1_ParamLimits

0x58a3,	// (0x0001b0e5) calenote_swipe_2_pane_t1

0x082c,	// (0x0001606e) main_mup_navstr_pane

0xb3c6,	// (0x00020c08) main_mup3_pane_t7_ParamLimits

0xb3c6,	// (0x00020c08) main_mup3_pane_t7

0x7d26,	// (0x0001d568) main_mp4_pane_g6_ParamLimits

0x7d26,	// (0x0001d568) main_mp4_pane_g6

0x800f,	// (0x0001d851) main_image3_pane_t4_ParamLimits

0x800f,	// (0x0001d851) main_image3_pane_t4

0xd764,	// (0x00022fa6) popup_navstr_preview_pane_ParamLimits

0xd764,	// (0x00022fa6) popup_navstr_preview_pane

0xd770,	// (0x00022fb2) scroll_navstr_pane_ParamLimits

0xd770,	// (0x00022fb2) scroll_navstr_pane

0x082c,	// (0x0001606e) bg_popup_preview_window_pane_cp04

0x58ca,	// (0x0001b10c) popup_navstr_preview_pane_t1

0xd77c,	// (0x00022fbe) scroll_navstr_pane_g1_ParamLimits

0xd77c,	// (0x00022fbe) scroll_navstr_pane_g1

0xd789,	// (0x00022fcb) scroll_navstr_pane_t1_ParamLimits

0xd789,	// (0x00022fcb) scroll_navstr_pane_t1

0x586f,	// (0x0001b0b1) bg_button_pane_cp014

0x586f,	// (0x0001b0b1) bg_button_pane_cp030

0xd1a9,	// (0x000229eb) list_double_fisheye_pane_g4_ParamLimits

0xd1a9,	// (0x000229eb) list_double_fisheye_pane_g4

0xd1b5,	// (0x000229f7) list_double_fisheye_pane_g5_ParamLimits

0xd1b5,	// (0x000229f7) list_double_fisheye_pane_g5

0x57d8,	// (0x0001b01a) sp_fs_scroll_pane_cp03

0x55dc,	// (0x0001ae1e) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x55e8,	// (0x0001ae2a) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc70,	// (0x000254b2) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xd38c,	// (0x00022bce) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x57d0,	// (0x0001b012) sp_fs_scroll_pane_cp02

0x11c6,	// (0x00016a08) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x11c6,	// (0x00016a08) popup_sp_fs_calendar_preview_list_single_pane

0x082c,	// (0x0001606e) main_cam6_pano_pane

0x78dc,	// (0x0001d11e) main_mup3_pane_ParamLimits

0x082c,	// (0x0001606e) main_phacti_pane

0xce0e,	// (0x00022650) bg_button_pane_cp11

0xce26,	// (0x00022668) main_mobtv_info_pane_g2_ParamLimits

0xce26,	// (0x00022668) main_mobtv_info_pane_g2

0x0001,

0xfbd0,	// (0x00025412) main_mobtv_info_pane_g_ParamLimits

0xfbd0,	// (0x00025412) main_mobtv_info_pane_g

0xcfb2,	// (0x000227f4) sc_clock_pane_t5_ParamLimits

0xcfb2,	// (0x000227f4) sc_clock_pane_t5

0xd03f,	// (0x00022881) main_radioblah_pane_g1_ParamLimits

0x5439,	// (0x0001ac7b) main_radioblah_pane_t3_ParamLimits

0x5439,	// (0x0001ac7b) main_radioblah_pane_t3

0x5451,	// (0x0001ac93) main_radioblah_pane_t4_ParamLimits

0x5451,	// (0x0001ac93) main_radioblah_pane_t4

0xd05d,	// (0x0002289f) main_radioblah_text_pane_ParamLimits

0xd05d,	// (0x0002289f) main_radioblah_text_pane

0xd06a,	// (0x000228ac) main_radioblah_info_pane_g1_ParamLimits

0xd0f7,	// (0x00022939) main_radioblah_info_pane_t4_ParamLimits

0xd0f7,	// (0x00022939) main_radioblah_info_pane_t4

0x087f,	// (0x000160c1) main_sp_fs_calendar_pane

0xd79b,	// (0x00022fdd) main_phacti_pane_g1

0xd7a3,	// (0x00022fe5) phacti_note_pane_ParamLimits

0xd7a3,	// (0x00022fe5) phacti_note_pane

0x58e1,	// (0x0001b123) phacti_term_pane_ParamLimits

0x58e1,	// (0x0001b123) phacti_term_pane

0x58f6,	// (0x0001b138) phacti_note_pane_t1_ParamLimits

0x58f6,	// (0x0001b138) phacti_note_pane_t1

0x590d,	// (0x0001b14f) phacti_term_pane_g1

0x5915,	// (0x0001b157) phacti_term_pane_t1_ParamLimits

0x5915,	// (0x0001b157) phacti_term_pane_t1

0x593f,	// (0x0001b181) popup_sp_fs_calendar_preview_list_single_pane_g1

0x5947,	// (0x0001b189) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfcff,	// (0x00025541) popup_sp_fs_calendar_preview_list_single_pane_g

0x594f,	// (0x0001b191) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x594f,	// (0x0001b191) popup_sp_fs_calendar_preview_list_single_pane_t1

0x5965,	// (0x0001b1a7) aid_popup_sp_fs_bg_corner_pane

0x12f6,	// (0x00016b38) popup_sp_fs_calendar_preview_bg_pane_g1

0x082c,	// (0x0001606e) popup_sp_fs_calendar_preview_bg_pane

0x596d,	// (0x0001b1af) popup_sp_fs_calendar_preview_list_pane

0x1e72,	// (0x000176b4) bg_main_sp_fs_cale_pane_ParamLimits

0x1e72,	// (0x000176b4) bg_main_sp_fs_cale_pane

0x597e,	// (0x0001b1c0) listscroll_cale_mrui_pane_ParamLimits

0x597e,	// (0x0001b1c0) listscroll_cale_mrui_pane

0x5993,	// (0x0001b1d5) listscroll_sp_fs_schedule_track_pane

0x599c,	// (0x0001b1de) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x599c,	// (0x0001b1de) main_sp_fs_ctrlbar_pane_cp01

0x59af,	// (0x0001b1f1) main_sp_fs_ribbon_pane

0x59b7,	// (0x0001b1f9) popup_sp_fs_cale_preview_window

0x5dc5,	// (0x0001b607) list_single_sp_fs_schedule_track_pane_ParamLimits

0x5dc5,	// (0x0001b607) list_single_sp_fs_schedule_track_pane

0x0f8f,	// (0x000167d1) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x0f8f,	// (0x000167d1) bg_sp_fs_highlight_list_pane_cp03

0xd7fa,	// (0x0002303c) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xd7fa,	// (0x0002303c) list_single_sp_fs_schedule_track_pane_g1

0xd806,	// (0x00023048) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xd806,	// (0x00023048) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfd04,	// (0x00025546) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfd04,	// (0x00025546) list_single_sp_fs_schedule_track_pane_g

0xd812,	// (0x00023054) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xd812,	// (0x00023054) list_single_sp_fs_schedule_track_pane_t1

0xd82a,	// (0x0002306c) sp_fs_schedule_track_pane_ParamLimits

0xd82a,	// (0x0002306c) sp_fs_schedule_track_pane

0x59c9,	// (0x0001b20b) sp_fs_schedule_track_pane_g1

0x59d1,	// (0x0001b213) sp_fs_schedule_track_pane_g2

0x59d9,	// (0x0001b21b) sp_fs_schedule_track_pane_g3

0x59e1,	// (0x0001b223) sp_fs_schedule_track_pane_g4

0x59e9,	// (0x0001b22b) sp_fs_schedule_track_pane_g5

0x0004,

0xfd09,	// (0x0002554b) sp_fs_schedule_track_pane_g

0x4391,	// (0x00019bd3) bg_sp_fs_schedule_viewer_highlight_g1

0x1552,	// (0x00016d94) bg_sp_fs_schedule_viewer_highlight_g2

0x4399,	// (0x00019bdb) bg_sp_fs_schedule_viewer_highlight_g3

0x43a1,	// (0x00019be3) bg_sp_fs_schedule_viewer_highlight_g4

0x4628,	// (0x00019e6a) bg_sp_fs_schedule_viewer_highlight_g5

0x43b1,	// (0x00019bf3) bg_sp_fs_schedule_viewer_highlight_g6

0x43b9,	// (0x00019bfb) bg_sp_fs_schedule_viewer_highlight_g7

0x43c1,	// (0x00019c03) bg_sp_fs_schedule_viewer_highlight_g8

0x1532,	// (0x00016d74) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfd14,	// (0x00025556) bg_sp_fs_schedule_viewer_highlight_g

0x082c,	// (0x0001606e) bg_main_sp_fs_ribbon_pane

0xba3e,	// (0x00021280) main_sp_fs_ribbon_pane_g1

0x59f1,	// (0x0001b233) main_sp_fs_ribbon_pane_t1

0xd83a,	// (0x0002307c) main_sp_fs_ribbon_pane_t2

0x5a00,	// (0x0001b242) main_sp_fs_ribbon_pane_t3

0x0002,

0xfd27,	// (0x00025569) main_sp_fs_ribbon_pane_t

0x5a0f,	// (0x0001b251) main_sp_fs_ribbon_scheduler_pane

0x5a17,	// (0x0001b259) bg_main_sp_fs_ribbon_pane_g1

0x5a20,	// (0x0001b262) bg_main_sp_fs_ribbon_pane_g2

0x5a29,	// (0x0001b26b) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfd2e,	// (0x00025570) bg_main_sp_fs_ribbon_pane_g

0x5a31,	// (0x0001b273) main_sp_fs_ribbon_scheduler_pane_g1

0x5a3a,	// (0x0001b27c) main_sp_fs_ribbon_scheduler_pane_g2

0x5a43,	// (0x0001b285) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfd35,	// (0x00025577) main_sp_fs_ribbon_scheduler_pane_g

0x5a4c,	// (0x0001b28e) list_cale_mrui_pane

0xd849,	// (0x0002308b) sp_fs_scroll_pane_cp07_ParamLimits

0xd849,	// (0x0002308b) sp_fs_scroll_pane_cp07

0xd861,	// (0x000230a3) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xd861,	// (0x000230a3) bg_sp_fs_schedule_viewer_highlight

0x5a59,	// (0x0001b29b) list_single_sp_fs_schedule_track_pane_cp01

0x5a61,	// (0x0001b2a3) list_sp_fs_schedule_track_pane

0x5a69,	// (0x0001b2ab) sp_fs_scroll_pane_cp06_ParamLimits

0x5a69,	// (0x0001b2ab) sp_fs_scroll_pane_cp06

0x12f6,	// (0x00016b38) bgmain_sp_fs_calendar_pane_g1

0xd86e,	// (0x000230b0) list_single_cale_mrui_pane_ParamLimits

0xd86e,	// (0x000230b0) list_single_cale_mrui_pane

0x5a7b,	// (0x0001b2bd) list_single_cale_mrui_row_pane_ParamLimits

0x5a7b,	// (0x0001b2bd) list_single_cale_mrui_row_pane

0xd890,	// (0x000230d2) list_single_cale_mrui_row_pane_g1_ParamLimits

0xd890,	// (0x000230d2) list_single_cale_mrui_row_pane_g1

0xd8c8,	// (0x0002310a) list_single_cale_mrui_row_pane_t1_ParamLimits

0xd8c8,	// (0x0002310a) list_single_cale_mrui_row_pane_t1

0xd8da,	// (0x0002311c) list_single_cale_mrui_row_pane_t2_ParamLimits

0xd8da,	// (0x0002311c) list_single_cale_mrui_row_pane_t2

0xd940,	// (0x00023182) list_single_cale_mrui_row_pane_t3_ParamLimits

0xd940,	// (0x00023182) list_single_cale_mrui_row_pane_t3

0xd96f,	// (0x000231b1) list_single_cale_mrui_row_pane_t4_ParamLimits

0xd96f,	// (0x000231b1) list_single_cale_mrui_row_pane_t4

0x0003,

0xfd43,	// (0x00025585) list_single_cale_mrui_row_pane_t_ParamLimits

0xfd43,	// (0x00025585) list_single_cale_mrui_row_pane_t

0xd99e,	// (0x000231e0) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xd99e,	// (0x000231e0) list_single_cmail_header_editor_pane_bg_cp01

0xd9c2,	// (0x00023204) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xd9c2,	// (0x00023204) list_single_cmail_header_editor_pane_bg_cp02

0xd9e0,	// (0x00023222) main_radioblah_text_pane_t1_ParamLimits

0xd9e0,	// (0x00023222) main_radioblah_text_pane_t1

0x5a9e,	// (0x0001b2e0) cam6_indi_pane_cp01

0x5aa6,	// (0x0001b2e8) cam6_mode_pane_cp01

0x5aae,	// (0x0001b2f0) cam6_pano_pane

0x5ab7,	// (0x0001b2f9) cam6_zoom_pane_cp01

0x5abf,	// (0x0001b301) cam6_pano_image_pane

0x5ac8,	// (0x0001b30a) cam6_pano_pane_g1

0x51a0,	// (0x0001a9e2) cam6_pano_pane_g2

0x5ad1,	// (0x0001b313) cam6_pano_pane_g3

0x5ada,	// (0x0001b31c) cam6_pano_pane_g4

0x3c18,	// (0x0001945a) cam6_pano_pane_g5

0x5ae3,	// (0x0001b325) cam6_pano_pane_g6

0x5aeb,	// (0x0001b32d) cam6_pano_pane_g7

0x5af3,	// (0x0001b335) cam6_pano_pane_g8

0x5afc,	// (0x0001b33e) cam6_pano_pane_g9

0x0008,

0xfd4c,	// (0x0002558e) cam6_pano_pane_g

0x082c,	// (0x0001606e) main_browser_tag_pane

0x58c2,	// (0x0001b104) grid_navstr_albumart_pane

0x5b05,	// (0x0001b347) cell_navstr_albumart_pane_ParamLimits

0x5b05,	// (0x0001b347) cell_navstr_albumart_pane

0x1f15,	// (0x00017757) cell_navstr_albumart_pane_g1

0x3030,	// (0x00018872) cell_navstr_albumart_pane_g2

0x3040,	// (0x00018882) cell_navstr_albumart_pane_g3

0x3038,	// (0x0001887a) cell_navstr_albumart_pane_g4

0x0003,

0xfd5f,	// (0x000255a1) cell_navstr_albumart_pane_g

0xd9f9,	// (0x0002323b) bt_list_pane_ParamLimits

0xd9f9,	// (0x0002323b) bt_list_pane

0xda0e,	// (0x00023250) bt_list_pane_t1

0xda1d,	// (0x0002325f) bt_list_pane_t2

0x0001,

0xfd68,	// (0x000255aa) bt_list_pane_t

0x082c,	// (0x0001606e) main_cale_prevew_pane

0xda2c,	// (0x0002326e) popup_cale_preview_window_ParamLimits

0xda2c,	// (0x0002326e) popup_cale_preview_window

0x087f,	// (0x000160c1) bg_popup_preview_window_pane_cp05_ParamLimits

0x087f,	// (0x000160c1) bg_popup_preview_window_pane_cp05

0x5b1c,	// (0x0001b35e) list_cale_preview_pane_ParamLimits

0x5b1c,	// (0x0001b35e) list_cale_preview_pane

0xda41,	// (0x00023283) list_double_cale_preview_pane_ParamLimits

0xda41,	// (0x00023283) list_double_cale_preview_pane

0xda52,	// (0x00023294) list_single_cale_preview_pane_ParamLimits

0xda52,	// (0x00023294) list_single_cale_preview_pane

0xda66,	// (0x000232a8) list_single_cale_preview_pane_g1

0xda6e,	// (0x000232b0) list_single_cale_preview_pane_t1_ParamLimits

0xda6e,	// (0x000232b0) list_single_cale_preview_pane_t1

0x5b28,	// (0x0001b36a) list_double_cale_preview_pane_g1

0x5b30,	// (0x0001b372) list_double_cale_preview_pane_t1_ParamLimits

0x5b30,	// (0x0001b372) list_double_cale_preview_pane_t1

0xda83,	// (0x000232c5) list_double_cale_preview_pane_t2_ParamLimits

0xda83,	// (0x000232c5) list_double_cale_preview_pane_t2

0x0001,

0xfd6d,	// (0x000255af) list_double_cale_preview_pane_t_ParamLimits

0xfd6d,	// (0x000255af) list_double_cale_preview_pane_t

0x082c,	// (0x0001606e) main_ezdial_pane

0x087f,	// (0x000160c1) main_sp_fs_email_pane_ParamLimits

0xd2f5,	// (0x00022b37) cmail_ddmenu_btn01_pane_ParamLimits

0xd2f5,	// (0x00022b37) cmail_ddmenu_btn01_pane

0xd312,	// (0x00022b54) cmail_ddmenu_btn02_pane_ParamLimits

0xd312,	// (0x00022b54) cmail_ddmenu_btn02_pane

0xd330,	// (0x00022b72) cmail_ddmenu_btn03_pane_ParamLimits

0xd330,	// (0x00022b72) cmail_ddmenu_btn03_pane

0xd3d4,	// (0x00022c16) main_sp_fs_ctrlbar_pane_ParamLimits

0xd3e8,	// (0x00022c2a) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xd689,	// (0x00022ecb) list_cmail_body_pane_ParamLimits

0x57f2,	// (0x0001b034) bg_button_pane_cp12

0x5807,	// (0x0001b049) list_single_cmail_header_detail_pane_g3_ParamLimits

0x5807,	// (0x0001b049) list_single_cmail_header_detail_pane_g3

0x5814,	// (0x0001b056) list_single_cmail_header_detail_pane_t2_ParamLimits

0x5814,	// (0x0001b056) list_single_cmail_header_detail_pane_t2

0x0001,

0xfcf0,	// (0x00025532) list_single_cmail_header_detail_pane_t_ParamLimits

0xfcf0,	// (0x00025532) list_single_cmail_header_detail_pane_t

0x592a,	// (0x0001b16c) phacti_term_pane_t2_ParamLimits

0x592a,	// (0x0001b16c) phacti_term_pane_t2

0x0001,

0xfcfa,	// (0x0002553c) phacti_term_pane_t_ParamLimits

0xfcfa,	// (0x0002553c) phacti_term_pane_t

0x5b45,	// (0x0001b387) aid_size_list_single_double

0xda9b,	// (0x000232dd) popup_ezdial_listscroll_window

0xdab4,	// (0x000232f6) popup_number_entry_window_cp01

0x127e,	// (0x00016ac0) bg_popup_call_pane_cp09

0x5b51,	// (0x0001b393) ezdial_list_pane

0x5b59,	// (0x0001b39b) scroll_pane_cp23

0x3343,	// (0x00018b85) bg_button_pane_cp028_ParamLimits

0x3343,	// (0x00018b85) bg_button_pane_cp028

0xdac0,	// (0x00023302) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xdac0,	// (0x00023302) cmail_ddmenu_btn01_pane_g1

0xdad0,	// (0x00023312) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xdad0,	// (0x00023312) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd72,	// (0x000255b4) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd72,	// (0x000255b4) cmail_ddmenu_btn01_pane_g

0x5b61,	// (0x0001b3a3) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x5b61,	// (0x0001b3a3) cmail_ddmenu_btn01_pane_t1

0x1e72,	// (0x000176b4) bg_button_pane_cp029_ParamLimits

0x1e72,	// (0x000176b4) bg_button_pane_cp029

0xdad0,	// (0x00023312) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xdad0,	// (0x00023312) cmail_ddmenu_btn02_pane_g1

0xdae8,	// (0x0002332a) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xdae8,	// (0x0002332a) cmail_ddmenu_btn02_pane_t1

0x0f8f,	// (0x000167d1) bg_button_pane_cp031_ParamLimits

0x0f8f,	// (0x000167d1) bg_button_pane_cp031

0xdad0,	// (0x00023312) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xdad0,	// (0x00023312) cmail_ddmenu_btn03_pane_g1

0xdae8,	// (0x0002332a) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xdae8,	// (0x0002332a) cmail_ddmenu_btn03_pane_t1

0xb9a6,	// (0x000211e8) cell_dialer2_keypad_pane_t1_ParamLimits

0xb9c0,	// (0x00021202) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xb9c0,	// (0x00021202) cell_dialer2_keypad_pane_t1_copy1

0xcc9b,	// (0x000224dd) ncimui_group_button_pane

0x087f,	// (0x000160c1) main_sp_fs_calendar_pane_ParamLimits

0xd689,	// (0x00022ecb) list_single_cmail_header_caption_pane_ParamLimits

0x5975,	// (0x0001b1b7) aid_recal_txt_sm_pane

0x082c,	// (0x0001606e) mian_recal_day_pane

0x59b7,	// (0x0001b1f9) popup_sp_fs_cale_preview_window_ParamLimits

0x5b76,	// (0x0001b3b8) list_recal_day_pane

0x5bb8,	// (0x0001b3fa) list_single_recal_day_pane_ParamLimits

0x5bb8,	// (0x0001b3fa) list_single_recal_day_pane

0x5bca,	// (0x0001b40c) list_single_recal_day_pane_g1_ParamLimits

0x5bca,	// (0x0001b40c) list_single_recal_day_pane_g1

0x5bd6,	// (0x0001b418) list_single_recal_day_pane_g2_ParamLimits

0x5bd6,	// (0x0001b418) list_single_recal_day_pane_g2

0x5be2,	// (0x0001b424) list_single_recal_day_pane_g3_ParamLimits

0x5be2,	// (0x0001b424) list_single_recal_day_pane_g3

0xdb0c,	// (0x0002334e) list_single_recal_day_pane_g4_ParamLimits

0xdb0c,	// (0x0002334e) list_single_recal_day_pane_g4

0x5bee,	// (0x0001b430) list_single_recal_day_pane_g5_ParamLimits

0x5bee,	// (0x0001b430) list_single_recal_day_pane_g5

0xdb20,	// (0x00023362) list_single_recal_day_pane_g6_ParamLimits

0xdb20,	// (0x00023362) list_single_recal_day_pane_g6

0x0004,

0xfd81,	// (0x000255c3) list_single_recal_day_pane_g_ParamLimits

0xfd81,	// (0x000255c3) list_single_recal_day_pane_g

0x5c02,	// (0x0001b444) list_single_recal_day_pane_t1

0xdb2f,	// (0x00023371) list_single_recal_day_pane_t2

0x0001,

0xfd8c,	// (0x000255ce) list_single_recal_day_pane_t

0xdb44,	// (0x00023386) ncimui_query_button_pane_ParamLimits

0xdb44,	// (0x00023386) ncimui_query_button_pane

0xdb54,	// (0x00023396) ncimui_query_button_pane_t1_ParamLimits

0xdb54,	// (0x00023396) ncimui_query_button_pane_t1

0x5c14,	// (0x0001b456) ncimui_query_button_pane_t2_ParamLimits

0x5c14,	// (0x0001b456) ncimui_query_button_pane_t2

0x0001,

0xfd91,	// (0x000255d3) ncimui_query_button_pane_t_ParamLimits

0xfd91,	// (0x000255d3) ncimui_query_button_pane_t

0xdb67,	// (0x000233a9) query_button_pane_ParamLimits

0xdb67,	// (0x000233a9) query_button_pane

0x082c,	// (0x0001606e) bg_button_pane_cp0028

0x5c27,	// (0x0001b469) query_button_pane_t1

0x78f8,	// (0x0001d13a) main_tport_pane_ParamLimits

0xd5d5,	// (0x00022e17) bg_popup_window_pane_cp01_ParamLimits

0xd5d5,	// (0x00022e17) bg_popup_window_pane_cp01

0xd5e1,	// (0x00022e23) heading_pane_cp08_ParamLimits

0xd5e1,	// (0x00022e23) heading_pane_cp08

0xd5ed,	// (0x00022e2f) heading_pane_cp07_ParamLimits

0xd5ed,	// (0x00022e2f) heading_pane_cp07

0x5793,	// (0x0001afd5) cell_tport_appsw_pane_g2

0x0002,

0xfcdd,	// (0x0002551f) cell_tport_appsw_pane_g

0x1f0d,	// (0x0001774f) input_candi_list_open_g1

0x172d,	// (0x00016f6f) list_cale_time_pane_g6_ParamLimits

0x172d,	// (0x00016f6f) list_cale_time_pane_g6

0xaee0,	// (0x00020722) aid_size_touch_calib_1_ParamLimits

0xaee0,	// (0x00020722) aid_size_touch_calib_1

0xaeec,	// (0x0002072e) aid_size_touch_calib_2_ParamLimits

0xaeec,	// (0x0002072e) aid_size_touch_calib_2

0xaef8,	// (0x0002073a) aid_size_touch_calib_3_ParamLimits

0xaef8,	// (0x0002073a) aid_size_touch_calib_3

0xaf06,	// (0x00020748) aid_size_touch_calib_4_ParamLimits

0xaf06,	// (0x00020748) aid_size_touch_calib_4

0xaf14,	// (0x00020756) main_touch_calib_button_group_pane_ParamLimits

0xaf14,	// (0x00020756) main_touch_calib_button_group_pane

0xaf22,	// (0x00020764) main_touch_calib_pane_g1_ParamLimits

0xaf2e,	// (0x00020770) main_touch_calib_pane_g2_ParamLimits

0xaf3a,	// (0x0002077c) main_touch_calib_pane_g3_ParamLimits

0xaf46,	// (0x00020788) main_touch_calib_pane_g4_ParamLimits

0xf6dd,	// (0x00024f1f) main_touch_calib_pane_g_ParamLimits

0xaf52,	// (0x00020794) main_touch_calib_pane_t1_ParamLimits

0xaf67,	// (0x000207a9) main_touch_calib_pane_t2_ParamLimits

0xaf7c,	// (0x000207be) main_touch_calib_pane_t3_ParamLimits

0xaf8e,	// (0x000207d0) main_touch_calib_pane_t4_ParamLimits

0xafa0,	// (0x000207e2) main_touch_calib_pane_t5_ParamLimits

0xf6e6,	// (0x00024f28) main_touch_calib_pane_t_ParamLimits

0x3a19,	// (0x0001925b) list_single_fp_cale_pane_g3_ParamLimits

0x3a19,	// (0x0001925b) list_single_fp_cale_pane_g3

0x78dc,	// (0x0001d11e) bg_button_pane_cp012_ParamLimits

0x78dc,	// (0x0001d11e) bg_vkb2_func_pane_cp03_ParamLimits

0x8635,	// (0x0001de77) cell_vitu2_function_top_pane_g1_ParamLimits

0x78dc,	// (0x0001d11e) bg_vkb2_func_pane_cp04_ParamLimits

0xcc27,	// (0x00022469) main_ncimui_button_group_pane_ParamLimits

0xcc27,	// (0x00022469) main_ncimui_button_group_pane

0xcc89,	// (0x000224cb) main_ncimui_pane_t3_ParamLimits

0xcc89,	// (0x000224cb) main_ncimui_pane_t3

0x58d8,	// (0x0001b11a) phacti_button_group_pane

0x5b45,	// (0x0001b387) aid_size_list_single_double_ParamLimits

0xda9b,	// (0x000232dd) popup_ezdial_listscroll_window_ParamLimits

0xdab4,	// (0x000232f6) popup_number_entry_window_cp01_ParamLimits

0xdb74,	// (0x000233b6) phacti_button_pane_ParamLimits

0xdb74,	// (0x000233b6) phacti_button_pane

0x082c,	// (0x0001606e) bg_button_pane_cp14

0x5c35,	// (0x0001b477) phacti_button_pane_t1

0xdb83,	// (0x000233c5) main_touch_calib_button_pane_ParamLimits

0xdb83,	// (0x000233c5) main_touch_calib_button_pane

0x1019,	// (0x0001685b) bg_button_pane_cp18_ParamLimits

0x1019,	// (0x0001685b) bg_button_pane_cp18

0xdb94,	// (0x000233d6) main_touch_calib_button_pane_t1_ParamLimits

0xdb94,	// (0x000233d6) main_touch_calib_button_pane_t1

0xdbaa,	// (0x000233ec) main_touch_calib_button_pane_t2_ParamLimits

0xdbaa,	// (0x000233ec) main_touch_calib_button_pane_t2

0x0001,

0xfd96,	// (0x000255d8) main_touch_calib_button_pane_t_ParamLimits

0xfd96,	// (0x000255d8) main_touch_calib_button_pane_t

0x082c,	// (0x0001606e) cell_ncimui_button_pane

0x082c,	// (0x0001606e) bg_button_pane_cp032

0x5c43,	// (0x0001b485) cell_ncimui_button_pane_t1

0x7f2a,	// (0x0001d76c) image3_infobar_pane_ParamLimits

0x7f2a,	// (0x0001d76c) image3_infobar_pane

0xcfd2,	// (0x00022814) fs_bigclock_status_pane_ParamLimits

0xcfd2,	// (0x00022814) fs_bigclock_status_pane

0xcfdf,	// (0x00022821) main_fs_bigclock_clock_pane_ParamLimits

0xcfdf,	// (0x00022821) main_fs_bigclock_clock_pane

0xcff7,	// (0x00022839) main_fs_bigclock_indi_pane_ParamLimits

0xcff7,	// (0x00022839) main_fs_bigclock_indi_pane

0xd017,	// (0x00022859) main_fs_bigclock_swipe_pane_ParamLimits

0xd017,	// (0x00022859) main_fs_bigclock_swipe_pane

0x082c,	// (0x0001606e) main_fs_clock_dumped_data

0x52ad,	// (0x0001aaef) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x52ad,	// (0x0001aaef) list_single_fs_bigclock_indicator_pane_g1

0x52c7,	// (0x0001ab09) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x52c7,	// (0x0001ab09) list_single_fs_bigclock_indicator_pane_g2

0x52e1,	// (0x0001ab23) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x52e1,	// (0x0001ab23) list_single_fs_bigclock_indicator_pane_g3

0x52fb,	// (0x0001ab3d) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x52fb,	// (0x0001ab3d) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc04,	// (0x00025446) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc04,	// (0x00025446) list_single_fs_bigclock_indicator_pane_g

0x5324,	// (0x0001ab66) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x5324,	// (0x0001ab66) list_single_fs_bigclock_indicator_pane_t1

0x534c,	// (0x0001ab8e) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x534c,	// (0x0001ab8e) list_single_fs_bigclock_indicator_pane_t2

0x5374,	// (0x0001abb6) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x5374,	// (0x0001abb6) list_single_fs_bigclock_indicator_pane_t3

0x539c,	// (0x0001abde) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x539c,	// (0x0001abde) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc0f,	// (0x00025451) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc0f,	// (0x00025451) list_single_fs_bigclock_indicator_pane_t

0x5c51,	// (0x0001b493) image3_infobar_fav_pane_ParamLimits

0x5c51,	// (0x0001b493) image3_infobar_fav_pane

0x5c61,	// (0x0001b4a3) image3_infobar_loc_pane_ParamLimits

0x5c61,	// (0x0001b4a3) image3_infobar_loc_pane

0x5c75,	// (0x0001b4b7) image3_infobar_time_pane_ParamLimits

0x5c75,	// (0x0001b4b7) image3_infobar_time_pane

0x12f6,	// (0x00016b38) image3_infobar_time_pane_g1

0x5c85,	// (0x0001b4c7) image3_infobar_time_pane_t1

0x12f6,	// (0x00016b38) image3_infobar_loc_pane_g1

0x5c93,	// (0x0001b4d5) image3_infobar_loc_pane_g2

0x0001,

0xfd9b,	// (0x000255dd) image3_infobar_loc_pane_g

0x5c9b,	// (0x0001b4dd) image3_infobar_loc_pane_t1

0x12f6,	// (0x00016b38) image3_infobar_fav_pane_g1

0x5ca9,	// (0x0001b4eb) image3_infobar_fav_pane_g2

0x0001,

0xfda0,	// (0x000255e2) image3_infobar_fav_pane_g

0x5cb1,	// (0x0001b4f3) fs_bigclock_status_battery_pane

0x5cba,	// (0x0001b4fc) fs_bigclock_status_signal_pane

0x5cc3,	// (0x0001b505) fs_bigclock_status_title_pane

0x5ccc,	// (0x0001b50e) fs_bigclock_status_signal_pane_g1

0x5cd5,	// (0x0001b517) fs_bigclock_status_signal_pane_g2

0x0001,

0xfda5,	// (0x000255e7) fs_bigclock_status_signal_pane_g

0x5cdd,	// (0x0001b51f) fs_bigclock_status_battery_pane_g1

0x5ce6,	// (0x0001b528) fs_bigclock_status_battery_pane_g2

0x0001,

0xfdaa,	// (0x000255ec) fs_bigclock_status_battery_pane_g

0x5cee,	// (0x0001b530) fs_bigclock_status_title_pane_t1

0x0f81,	// (0x000167c3) main_fs_bigclock_clock_pane_g1

0xdbc8,	// (0x0002340a) main_fs_bigclock_clock_pane_g2

0xdbd5,	// (0x00023417) main_fs_bigclock_clock_pane_g3

0xdbd5,	// (0x00023417) main_fs_bigclock_clock_pane_g4

0x0003,

0xfdaf,	// (0x000255f1) main_fs_bigclock_clock_pane_g

0xdbe1,	// (0x00023423) main_fs_bigclock_clock_pane_t1

0xdbf3,	// (0x00023435) main_fs_bigclock_clock_pane_t2

0x0001,

0xfdb8,	// (0x000255fa) main_fs_bigclock_clock_pane_t

0x5cfc,	// (0x0001b53e) list_single_fs_bigclock_indicator_pane_ParamLimits

0x5cfc,	// (0x0001b53e) list_single_fs_bigclock_indicator_pane

0x5d0d,	// (0x0001b54f) list_single_fs_bigclock_pane_ParamLimits

0x5d0d,	// (0x0001b54f) list_single_fs_bigclock_pane

0x5d33,	// (0x0001b575) main_fs_bigclock_indicator_pane_t1

0x5d42,	// (0x0001b584) list_single_fs_bigclock_pane_g1

0x5d4a,	// (0x0001b58c) list_single_fs_bigclock_pane_t1

0x12f6,	// (0x00016b38) main_fs_bigclock_swipe_pane_g1

0x5d8a,	// (0x0001b5cc) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfdc9,	// (0x0002560b) main_fs_bigclock_swipe_pane_g

0x5d92,	// (0x0001b5d4) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x5d92,	// (0x0001b5d4) main_fs_bigclock_swipe_pane_t1

0xa083,	// (0x0001f8c5) call_type_pane_ParamLimits

0x082c,	// (0x0001606e) main_btmg_pane

0xd8bc,	// (0x000230fe) list_single_cale_mrui_row_pane_g2_ParamLimits

0xd8bc,	// (0x000230fe) list_single_cale_mrui_row_pane_g2

0x0002,

0xfd3c,	// (0x0002557e) list_single_cale_mrui_row_pane_g_ParamLimits

0xfd3c,	// (0x0002557e) list_single_cale_mrui_row_pane_g

0x5b9f,	// (0x0001b3e1) list_recal_vselct_arw_lo_pane

0x5ba7,	// (0x0001b3e9) list_recal_vselct_arw_up_pane

0x5baf,	// (0x0001b3f1) list_recal_vselct_pane

0x5daf,	// (0x0001b5f1) btmg_button_pane

0xdc48,	// (0x0002348a) main_btmg_pane_g1

0x082c,	// (0x0001606e) bg_button_pane_cp044

0x5db7,	// (0x0001b5f9) btmg_button_pane_t1

0x31d0,	// (0x00018a12) aid_listscroll_gen

0x087f,	// (0x000160c1) main_cntbar_detail_pane

0x57b9,	// (0x0001affb) list_cmail_folder_pane

0x57d8,	// (0x0001b01a) sp_fs_scroll_pane_cp03_ParamLimits

0xdc50,	// (0x00023492) list_single_fs_dyc_pane_cp01_ParamLimits

0xdc50,	// (0x00023492) list_single_fs_dyc_pane_cp01

0x5ddb,	// (0x0001b61d) aid_size_cmail_indent

0x5de4,	// (0x0001b626) list_single_dyc_row_pane_cp01

0xdc82,	// (0x000234c4) cntbar_detail_list_pane_ParamLimits

0xdc82,	// (0x000234c4) cntbar_detail_list_pane

0xdcb8,	// (0x000234fa) main_cntbar_detail_cont_pane_ParamLimits

0xdcb8,	// (0x000234fa) main_cntbar_detail_cont_pane

0xdcc4,	// (0x00023506) scroll_pane_cp032_ParamLimits

0xdcc4,	// (0x00023506) scroll_pane_cp032

0x5fde,	// (0x0001b820) cntbar_detail_list_event_pane_ParamLimits

0x5fde,	// (0x0001b820) cntbar_detail_list_event_pane

0xdc8e,	// (0x000234d0) cntbar_detail_list_shct_pane

0x5ded,	// (0x0001b62f) aid_list_gen

0x116c,	// (0x000169ae) aid_scroll

0x4963,	// (0x0001a1a5) aid_size_touch_scroll_bar

0xc5a7,	// (0x00021de9) aid_list_double

0xdcd0,	// (0x00023512) aid_list_single

0x4a17,	// (0x0001a259) aid_list_single_lg

0xdcd9,	// (0x0002351b) aid_list_z_g_a_sm

0xdce1,	// (0x00023523) aid_list_z_g_d

0xdce9,	// (0x0002352b) aid_txt_z_prm

0xdcf7,	// (0x00023539) aid_txt_z_prm_cp01

0xdd05,	// (0x00023547) aid_txt_z_sec

0xdd13,	// (0x00023555) main_cntbar_detail_cont_pane_g1_ParamLimits

0xdd13,	// (0x00023555) main_cntbar_detail_cont_pane_g1

0xdd20,	// (0x00023562) main_cntbar_detail_cont_pane_g2_ParamLimits

0xdd20,	// (0x00023562) main_cntbar_detail_cont_pane_g2

0x0001,

0xfdce,	// (0x00025610) main_cntbar_detail_cont_pane_g_ParamLimits

0xfdce,	// (0x00025610) main_cntbar_detail_cont_pane_g

0x5df6,	// (0x0001b638) main_cntbar_detail_cont_pane_t1

0x5e04,	// (0x0001b646) main_cntbar_detail_cont_pane_t2

0x5e12,	// (0x0001b654) main_cntbar_detail_cont_pane_t3

0x0002,

0xfdd3,	// (0x00025615) main_cntbar_detail_cont_pane_t

0xdd2c,	// (0x0002356e) cell_cntbar_detail_list_shct_pane_ParamLimits

0xdd2c,	// (0x0002356e) cell_cntbar_detail_list_shct_pane

0x5e20,	// (0x0001b662) cntbar_detail_list_shct_pane_g1

0x5e29,	// (0x0001b66b) cntbar_detail_list_shct_pane_g2

0x0001,

0xfdda,	// (0x0002561c) cntbar_detail_list_shct_pane_g

0xdd3e,	// (0x00023580) cntbar_detail_list_event_pane_g1_ParamLimits

0xdd3e,	// (0x00023580) cntbar_detail_list_event_pane_g1

0xdd4a,	// (0x0002358c) cntbar_detail_list_event_pane_g2_ParamLimits

0xdd4a,	// (0x0002358c) cntbar_detail_list_event_pane_g2

0x0005,

0xfddf,	// (0x00025621) cntbar_detail_list_event_pane_g_ParamLimits

0xfddf,	// (0x00025621) cntbar_detail_list_event_pane_g

0xddb6,	// (0x000235f8) cntbar_detail_list_event_pane_t1_ParamLimits

0xddb6,	// (0x000235f8) cntbar_detail_list_event_pane_t1

0xddcb,	// (0x0002360d) cntbar_detail_list_event_pane_t2_ParamLimits

0xddcb,	// (0x0002360d) cntbar_detail_list_event_pane_t2

0x0002,

0xfdec,	// (0x0002562e) cntbar_detail_list_event_pane_t_ParamLimits

0xfdec,	// (0x0002562e) cntbar_detail_list_event_pane_t

0x12f6,	// (0x00016b38) cell_cntbar_detail_list_shct_pane_g1

0x1d33,	// (0x00017575) navi_pane_mv_g3

0x087f,	// (0x000160c1) main_cntbar_detail_pane_ParamLimits

0x082c,	// (0x0001606e) main_notif_wgt_pane

0x7c71,	// (0x0001d4b3) aid_tch_main_mp4_pane_g4

0x7eb0,	// (0x0001d6f2) popup_slider_window_cp02

0x5b95,	// (0x0001b3d7) list_recal_day_event_pane

0xdc68,	// (0x000234aa) cntbar_detail_btn_pane_ParamLimits

0xdc68,	// (0x000234aa) cntbar_detail_btn_pane

0xdc74,	// (0x000234b6) cntbar_detail_btn_pane_cp01_ParamLimits

0xdc74,	// (0x000234b6) cntbar_detail_btn_pane_cp01

0xdc8e,	// (0x000234d0) cntbar_detail_list_shct_pane_ParamLimits

0xdc9a,	// (0x000234dc) cntbar_detail_pane_g1_ParamLimits

0xdc9a,	// (0x000234dc) cntbar_detail_pane_g1

0xdca6,	// (0x000234e8) cntbar_detail_pane_t1_ParamLimits

0xdca6,	// (0x000234e8) cntbar_detail_pane_t1

0xdd56,	// (0x00023598) cntbar_detail_list_event_pane_g3_ParamLimits

0xdd56,	// (0x00023598) cntbar_detail_list_event_pane_g3

0xdd6e,	// (0x000235b0) cntbar_detail_list_event_pane_g4_ParamLimits

0xdd6e,	// (0x000235b0) cntbar_detail_list_event_pane_g4

0xdd86,	// (0x000235c8) cntbar_detail_list_event_pane_g5_ParamLimits

0xdd86,	// (0x000235c8) cntbar_detail_list_event_pane_g5

0xdd9e,	// (0x000235e0) cntbar_detail_list_event_pane_g6_ParamLimits

0xdd9e,	// (0x000235e0) cntbar_detail_list_event_pane_g6

0xdde0,	// (0x00023622) cntbar_detail_list_event_pane_t3_ParamLimits

0xdde0,	// (0x00023622) cntbar_detail_list_event_pane_t3

0xddf2,	// (0x00023634) popup_notif_wgt_window_ParamLimits

0xddf2,	// (0x00023634) popup_notif_wgt_window

0xde00,	// (0x00023642) popup_submenu_window_cp01_ParamLimits

0xde00,	// (0x00023642) popup_submenu_window_cp01

0x127e,	// (0x00016ac0) bg_popup_window_pane_cp10

0x5e32,	// (0x0001b674) listscroll_notif_wgt_pane

0x5e43,	// (0x0001b685) list_notif_wgt_window

0x5e4c,	// (0x0001b68e) scroll_pane_cp033

0xde0c,	// (0x0002364e) list_notif_wgt_row_pane_ParamLimits

0xde0c,	// (0x0002364e) list_notif_wgt_row_pane

0x5e55,	// (0x0001b697) aid_size_list_notif_wgt_del

0x5e62,	// (0x0001b6a4) list_notif_wgt_row_pane_g1

0x5e6e,	// (0x0001b6b0) list_notif_wgt_row_pane_g2

0x5e82,	// (0x0001b6c4) list_notif_wgt_row_pane_g3

0x0002,

0xfdf3,	// (0x00025635) list_notif_wgt_row_pane_g

0x5e8f,	// (0x0001b6d1) list_notif_wgt_row_pane_t1

0x5ea5,	// (0x0001b6e7) list_notif_wgt_row_pane_t2

0x5eb7,	// (0x0001b6f9) list_notif_wgt_row_pane_t3

0x0002,

0xfdfa,	// (0x0002563c) list_notif_wgt_row_pane_t

0x465d,	// (0x00019e9f) list_recal_day_event_pane_g1

0x5ec9,	// (0x0001b70b) list_recal_day_event_pane_t1

0x082c,	// (0x0001606e) bg_button_pane_cp045

0xde1e,	// (0x00023660) cntbar_detail_btn_pane_t1

0x1e72,	// (0x000176b4) main_callh_pane_ParamLimits

0x1e72,	// (0x000176b4) main_callh_pane

0x082c,	// (0x0001606e) main_coverflow0_pane

0x082c,	// (0x0001606e) main_wgtman_pane

0xd029,	// (0x0002286b) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xd029,	// (0x0002286b) main_fs_bigclock_unlock_btn_pane

0x578b,	// (0x0001afcd) bg_button_pane_cp16

0x579b,	// (0x0001afdd) cell_tport_appsw_pane_g3

0xde2c,	// (0x0002366e) cf0_flow_pane_ParamLimits

0xde2c,	// (0x0002366e) cf0_flow_pane

0x5ed8,	// (0x0001b71a) listscroll_cf0_pane

0x5ee1,	// (0x0001b723) main_cf0_pane_g1

0xde3b,	// (0x0002367d) main_cf0_pane_t1_ParamLimits

0xde3b,	// (0x0002367d) main_cf0_pane_t1

0xde4d,	// (0x0002368f) main_cf0_pane_t2_ParamLimits

0xde4d,	// (0x0002368f) main_cf0_pane_t2

0x0001,

0xfe06,	// (0x00025648) main_cf0_pane_t_ParamLimits

0xfe06,	// (0x00025648) main_cf0_pane_t

0x5ef3,	// (0x0001b735) scroll_pane_cp11

0xde5f,	// (0x000236a1) cf0_flow_pane_g1

0xde67,	// (0x000236a9) cf0_flow_pane_g2

0x0001,

0xfe0b,	// (0x0002564d) cf0_flow_pane_g

0xde6f,	// (0x000236b1) cf0_flow_pane_t1

0x082c,	// (0x0001606e) main_call6_pane

0x082c,	// (0x0001606e) main_calllock_pane

0x8842,	// (0x0001e084) call6_btn_grp_pane_ParamLimits

0x8842,	// (0x0001e084) call6_btn_grp_pane

0x884f,	// (0x0001e091) call6_pane_g1_ParamLimits

0x884f,	// (0x0001e091) call6_pane_g1

0x885c,	// (0x0001e09e) popup_call6_1st_window_ParamLimits

0x885c,	// (0x0001e09e) popup_call6_1st_window

0x8868,	// (0x0001e0aa) popup_call6_2nd_window_ParamLimits

0x8868,	// (0x0001e0aa) popup_call6_2nd_window

0x8874,	// (0x0001e0b6) cell_call6_btn_pane_ParamLimits

0x8874,	// (0x0001e0b6) cell_call6_btn_pane

0x127e,	// (0x00016ac0) bg_popup_call2_in_pane_cp03

0x5efc,	// (0x0001b73e) popup_call6_1st_window_g1

0x5f04,	// (0x0001b746) popup_call6_1st_window_g2

0x5f0c,	// (0x0001b74e) popup_call6_1st_window_g3

0x0002,

0xfe10,	// (0x00025652) popup_call6_1st_window_g

0x5f14,	// (0x0001b756) popup_call6_1st_window_t1

0x5f23,	// (0x0001b765) popup_call6_1st_window_t2

0x5f31,	// (0x0001b773) popup_call6_1st_window_t3

0x0002,

0xfe17,	// (0x00025659) popup_call6_1st_window_t

0x127e,	// (0x00016ac0) bg_popup_call2_in_pane_cp04

0x5f3f,	// (0x0001b781) popup_call6_2nd_window_g1

0x5f47,	// (0x0001b789) popup_call6_2nd_window_g2

0x5f4f,	// (0x0001b791) popup_call6_2nd_window_g3

0x0002,

0xfe1e,	// (0x00025660) popup_call6_2nd_window_g

0x5f57,	// (0x0001b799) popup_call6_2nd_window_t1

0x73d1,	// (0x0001cc13) bg_button_pane_cp15

0x8883,	// (0x0001e0c5) cell_call6_btn_pane_g1

0x888c,	// (0x0001e0ce) cell_call6_btn_pane_t1

0xde7d,	// (0x000236bf) listscroll_wgtman_pane_ParamLimits

0xde7d,	// (0x000236bf) listscroll_wgtman_pane

0xde99,	// (0x000236db) wgtman_btn_pane_ParamLimits

0xde99,	// (0x000236db) wgtman_btn_pane

0x1a93,	// (0x000172d5) aid_scroll_copy1

0x5f7e,	// (0x0001b7c0) list_wgtman_pane

0xdecc,	// (0x0002370e) wgtman_btn_pane_g1_ParamLimits

0xdecc,	// (0x0002370e) wgtman_btn_pane_g1

0xdef4,	// (0x00023736) wgtman_btn_pane_t1_ParamLimits

0xdef4,	// (0x00023736) wgtman_btn_pane_t1

0x5f88,	// (0x0001b7ca) wgtman_btn_pane_t2_ParamLimits

0x5f88,	// (0x0001b7ca) wgtman_btn_pane_t2

0x0001,

0xfe25,	// (0x00025667) wgtman_btn_pane_t_ParamLimits

0xfe25,	// (0x00025667) wgtman_btn_pane_t

0x5fee,	// (0x0001b830) listrow_wgtman_pane_ParamLimits

0x5fee,	// (0x0001b830) listrow_wgtman_pane

0xdf2b,	// (0x0002376d) listrow_wgtman_pane_g1

0xdf38,	// (0x0002377a) listrow_wgtman_pane_g2

0x0001,

0xfe2a,	// (0x0002566c) listrow_wgtman_pane_g

0xdf50,	// (0x00023792) listrow_wgtman_pane_t1

0xdf68,	// (0x000237aa) listrow_wgtman_pane_t2

0x0001,

0xfe2f,	// (0x00025671) listrow_wgtman_pane_t

0xdf8e,	// (0x000237d0) wait_bar_pane_cp09

0x5f9f,	// (0x0001b7e1) main_calllock_btn_pane

0x5fa7,	// (0x0001b7e9) main_calllock_pane_g1

0x082c,	// (0x0001606e) bg_button_pane_cp17

0x5fb0,	// (0x0001b7f2) main_calllock_btn_pane_g1

0x5fb9,	// (0x0001b7fb) main_calllock_btn_pane_t1

0x082c,	// (0x0001606e) main_dialer3_pane

0x082c,	// (0x0001606e) main_fmrd2_pane

0x12f6,	// (0x00016b38) main_fs_bigclock_unlock_btn_pane_g1

0x5fd0,	// (0x0001b812) main_fs_bigclock_unlock_btn_pane_t1

0xdfa0,	// (0x000237e2) area_fmrd2_info_pane_ParamLimits

0xdfa0,	// (0x000237e2) area_fmrd2_info_pane

0xdfac,	// (0x000237ee) area_fmrd2_visual_pane_ParamLimits

0xdfac,	// (0x000237ee) area_fmrd2_visual_pane

0xdfba,	// (0x000237fc) fmrd2_indi_pane_ParamLimits

0xdfba,	// (0x000237fc) fmrd2_indi_pane

0xdfc7,	// (0x00023809) area_fmrd2_visual_pane_g1

0xdfcf,	// (0x00023811) area_fmrd2_visual_pane_t1

0xdfdd,	// (0x0002381f) area_fmrd2_visual_pane_t2

0xdfeb,	// (0x0002382d) area_fmrd2_visual_pane_t3

0x0002,

0xfe39,	// (0x0002567b) area_fmrd2_visual_pane_t

0xdff9,	// (0x0002383b) area_fmrd2_info_pane_g1

0xe001,	// (0x00023843) area_fmrd2_info_pane_t1

0xe00f,	// (0x00023851) area_fmrd2_info_pane_t2

0xe01d,	// (0x0002385f) area_fmrd2_info_pane_t3

0xe02b,	// (0x0002386d) area_fmrd2_info_pane_t4

0x0003,

0xfe40,	// (0x00025682) area_fmrd2_info_pane_t

0xe039,	// (0x0002387b) fmrd2_indi_pane_t1

0xe047,	// (0x00023889) fmrd2_indi_pane_t2

0xe055,	// (0x00023897) fmrd2_indi_pane_t3

0x0002,

0xfe49,	// (0x0002568b) fmrd2_indi_pane_t

0x530a,	// (0x0001ab4c) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x530a,	// (0x0001ab4c) list_single_fs_bigclock_indicator_pane_g5

0x53b8,	// (0x0001abfa) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x53b8,	// (0x0001abfa) list_single_fs_bigclock_indicator_pane_t5

0xd7b7,	// (0x00022ff9) aid_cell_bcale_month_pane_ParamLimits

0xd7b7,	// (0x00022ff9) aid_cell_bcale_month_pane

0xd7d5,	// (0x00023017) bcale_month_pane_ParamLimits

0xd7d5,	// (0x00023017) bcale_month_pane

0xd7eb,	// (0x0002302d) bcale_preview_pane_ParamLimits

0xd7eb,	// (0x0002302d) bcale_preview_pane

0x5d4a,	// (0x0001b58c) list_single_fs_bigclock_pane_t1_ParamLimits

0x5d66,	// (0x0001b5a8) list_single_fs_bigclock_pane_t2_ParamLimits

0x5d66,	// (0x0001b5a8) list_single_fs_bigclock_pane_t2

0x0001,

0xfdc4,	// (0x00025606) list_single_fs_bigclock_pane_t_ParamLimits

0xfdc4,	// (0x00025606) list_single_fs_bigclock_pane_t

0x5fc8,	// (0x0001b80a) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfe34,	// (0x00025676) main_fs_bigclock_unlock_btn_pane_g

0xe063,	// (0x000238a5) aid_dia3_key_size_ParamLimits

0xe063,	// (0x000238a5) aid_dia3_key_size

0xe06f,	// (0x000238b1) aid_dia3_listrow_size_ParamLimits

0xe06f,	// (0x000238b1) aid_dia3_listrow_size

0xe07d,	// (0x000238bf) dia3_keypad_fun_pane_ParamLimits

0xe07d,	// (0x000238bf) dia3_keypad_fun_pane

0xe089,	// (0x000238cb) dia3_keypad_num_pane_ParamLimits

0xe089,	// (0x000238cb) dia3_keypad_num_pane

0xe095,	// (0x000238d7) dia3_listscroll_pane_ParamLimits

0xe095,	// (0x000238d7) dia3_listscroll_pane

0xe0a1,	// (0x000238e3) dia3_numentry_pane_ParamLimits

0xe0a1,	// (0x000238e3) dia3_numentry_pane

0x6011,	// (0x0001b853) dia3_list_pane

0x601a,	// (0x0001b85c) scroll_pane_cp12

0x082c,	// (0x0001606e) bg_dia3_numentry_pane

0xe0ad,	// (0x000238ef) dia3_numentry_pane_t1

0xe0bc,	// (0x000238fe) cell_dia3_key_num_pane

0xe0c4,	// (0x00023906) cell_dia3_key0_fun_pane_ParamLimits

0xe0c4,	// (0x00023906) cell_dia3_key0_fun_pane

0xe0d1,	// (0x00023913) cell_dia3_key1_fun_pane_ParamLimits

0xe0d1,	// (0x00023913) cell_dia3_key1_fun_pane

0xe0de,	// (0x00023920) dia3_listrow_pane

0x5019,	// (0x0001a85b) bg_dia3_numentry_pane_g1

0x082c,	// (0x0001606e) bg_button_pane_cp21

0x6023,	// (0x0001b865) cell_dia3_key_num_pane_t1

0x6031,	// (0x0001b873) cell_dia3_key_num_pane_t2

0x6040,	// (0x0001b882) cell_dia3_key_num_pane_t3

0x604f,	// (0x0001b891) cell_dia3_key_num_pane_t4

0x0003,

0xfe50,	// (0x00025692) cell_dia3_key_num_pane_t

0x082c,	// (0x0001606e) bg_button_pane_cp19

0x605e,	// (0x0001b8a0) cell_dia3_key0_fun_pane_g1

0x082c,	// (0x0001606e) bg_button_pane_cp20

0xe0eb,	// (0x0002392d) cell_dia3_key1_fun_pane_g1

0xe0f3,	// (0x00023935) area_left_week_number_pane

0xe104,	// (0x00023946) area_top_day_name_pane

0xe110,	// (0x00023952) frame_month_view_pane

0x6066,	// (0x0001b8a8) grid_month_view_pane

0xe121,	// (0x00023963) cell_top_day_name_pane_ParamLimits

0xe121,	// (0x00023963) cell_top_day_name_pane

0xe137,	// (0x00023979) cell_area_left_week_number_pane_ParamLimits

0xe137,	// (0x00023979) cell_area_left_week_number_pane

0xe156,	// (0x00023998) cell_month_view_pane_ParamLimits

0xe156,	// (0x00023998) cell_month_view_pane

0x6074,	// (0x0001b8b6) frm_month_g1

0xe17c,	// (0x000239be) frm_month_g2

0xe18b,	// (0x000239cd) frm_month_g3

0xe19a,	// (0x000239dc) frm_month_g4

0xe1a9,	// (0x000239eb) frm_month_g5

0xe1b8,	// (0x000239fa) frm_month_g6

0xe1c7,	// (0x00023a09) frm_month_g7

0x6081,	// (0x0001b8c3) frm_month_g8

0xe1d6,	// (0x00023a18) frm_month_g9

0xe1e3,	// (0x00023a25) frm_month_g10

0xe1f0,	// (0x00023a32) frm_month_g11

0xe1fd,	// (0x00023a3f) frm_month_g12

0xe20a,	// (0x00023a4c) frm_month_g13

0xe217,	// (0x00023a59) frm_month_g14

0xe224,	// (0x00023a66) frm_month_g15

0xe231,	// (0x00023a73) frm_month_g16

0x000f,

0xfe59,	// (0x0002569b) frm_month_g

0x608e,	// (0x0001b8d0) cell_top_day_name_pane_t1

0xe23e,	// (0x00023a80) cell_area_left_week_number_pane_g1

0xe24d,	// (0x00023a8f) cell_area_left_week_number_pane_t1

0x0f73,	// (0x000167b5) cell_month_view_pane_g1

0xe263,	// (0x00023aa5) cell_month_view_pane_t1

0x082c,	// (0x0001606e) main_fps_pane

0x55a4,	// (0x0001ade6) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x55a4,	// (0x0001ade6) cmail_ddmenu_btn02_pane_cp1

0x55c0,	// (0x0001ae02) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x55c0,	// (0x0001ae02) cmail_ddmenu_btn02_pane_cp2

0xdadc,	// (0x0002331e) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xdadc,	// (0x0002331e) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfd77,	// (0x000255b9) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfd77,	// (0x000255b9) cmail_ddmenu_btn02_pane_g

0xdafa,	// (0x0002333c) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xdafa,	// (0x0002333c) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfd7c,	// (0x000255be) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfd7c,	// (0x000255be) cmail_ddmenu_btn02_pane_t

0xe279,	// (0x00023abb) fps_text_pane_ParamLimits

0xe279,	// (0x00023abb) fps_text_pane

0xe286,	// (0x00023ac8) main_fps_pane_g1_ParamLimits

0xe286,	// (0x00023ac8) main_fps_pane_g1

0xe292,	// (0x00023ad4) wait_bar_pane_cp010_ParamLimits

0xe292,	// (0x00023ad4) wait_bar_pane_cp010

0xe29e,	// (0x00023ae0) fps_text_pane_t1_ParamLimits

0xe29e,	// (0x00023ae0) fps_text_pane_t1

0xba35,	// (0x00021277) cam4_image_uncrop_pane_g1

0xba3e,	// (0x00021280) cam4_image_uncrop_pane_g2

0xba47,	// (0x00021289) cam4_image_uncrop_pane_g3

0xba50,	// (0x00021292) cam4_image_uncrop_pane_g4

0x0003,

0xf87e,	// (0x000250c0) cam4_image_uncrop_pane_g

0xe0de,	// (0x00023920) dia3_listrow_pane_ParamLimits

0x082c,	// (0x0001606e) main_phob2_pane

0xd62e,	// (0x00022e70) cell_tport_appsw_pane_cp02_ParamLimits

0xd62e,	// (0x00022e70) cell_tport_appsw_pane_cp02

0xd63b,	// (0x00022e7d) cell_tport_appsw_pane_cp03_ParamLimits

0xd63b,	// (0x00022e7d) cell_tport_appsw_pane_cp03

0x082c,	// (0x0001606e) phob2_contact_card_pane

0x082c,	// (0x0001606e) phob2_listscroll_pane

0x60a1,	// (0x0001b8e3) phob2_list_pane

0x60a9,	// (0x0001b8eb) scroll_pane_cp034

0xe2b7,	// (0x00023af9) phob2_cc_data_pane_ParamLimits

0xe2b7,	// (0x00023af9) phob2_cc_data_pane

0xe2cf,	// (0x00023b11) phob2_cc_listscroll_pane_ParamLimits

0xe2cf,	// (0x00023b11) phob2_cc_listscroll_pane

0xe2e7,	// (0x00023b29) list_double_large_graphic_phob2_pane_ParamLimits

0xe2e7,	// (0x00023b29) list_double_large_graphic_phob2_pane

0xe2f9,	// (0x00023b3b) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xe2f9,	// (0x00023b3b) list_double_large_graphic_phob2_pane_g1

0xe306,	// (0x00023b48) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xe306,	// (0x00023b48) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfe7a,	// (0x000256bc) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfe7a,	// (0x000256bc) list_double_large_graphic_phob2_pane_g

0xe32a,	// (0x00023b6c) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xe32a,	// (0x00023b6c) list_double_large_graphic_phob2_pane_t1

0xe33f,	// (0x00023b81) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xe33f,	// (0x00023b81) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfe83,	// (0x000256c5) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfe83,	// (0x000256c5) list_double_large_graphic_phob2_pane_t

0x082c,	// (0x0001606e) list_highlight_pane_cp024

0x60b1,	// (0x0001b8f3) phob2_cc_button_pane

0xe354,	// (0x00023b96) phob2_cc_data_pane_g1_ParamLimits

0xe354,	// (0x00023b96) phob2_cc_data_pane_g1

0xe363,	// (0x00023ba5) phob2_cc_data_pane_g2_ParamLimits

0xe363,	// (0x00023ba5) phob2_cc_data_pane_g2

0x0001,

0xfe88,	// (0x000256ca) phob2_cc_data_pane_g_ParamLimits

0xfe88,	// (0x000256ca) phob2_cc_data_pane_g

0xe372,	// (0x00023bb4) phob2_cc_data_pane_t1_ParamLimits

0xe372,	// (0x00023bb4) phob2_cc_data_pane_t1

0xe387,	// (0x00023bc9) phob2_cc_data_pane_t2_ParamLimits

0xe387,	// (0x00023bc9) phob2_cc_data_pane_t2

0xe39c,	// (0x00023bde) phob2_cc_data_pane_t3_ParamLimits

0xe39c,	// (0x00023bde) phob2_cc_data_pane_t3

0x0002,

0xfe8d,	// (0x000256cf) phob2_cc_data_pane_t_ParamLimits

0xfe8d,	// (0x000256cf) phob2_cc_data_pane_t

0x60b9,	// (0x0001b8fb) phob2_cc_list_pane_ParamLimits

0x60b9,	// (0x0001b8fb) phob2_cc_list_pane

0x4f36,	// (0x0001a778) scroll_pane_cp035_ParamLimits

0x4f36,	// (0x0001a778) scroll_pane_cp035

0x087f,	// (0x000160c1) bg_button_pane_cp033

0x60c5,	// (0x0001b907) phob2_cc_button_pane_g1

0x60d1,	// (0x0001b913) phob2_cc_button_pane_t1

0x60e6,	// (0x0001b928) phob2_cc_button_pane_t2

0x0001,

0xfe94,	// (0x000256d6) phob2_cc_button_pane_t

0xe3b1,	// (0x00023bf3) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xe3b1,	// (0x00023bf3) list_double_large_graphic_phob2_cc_pane

0xe3f7,	// (0x00023c39) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xe3f7,	// (0x00023c39) list_double_large_graphic_phob2_cc_pane_g1

0xe408,	// (0x00023c4a) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xe408,	// (0x00023c4a) list_double_large_graphic_phob2_cc_pane_g2

0xe417,	// (0x00023c59) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xe417,	// (0x00023c59) list_double_large_graphic_phob2_cc_pane_g3

0xe426,	// (0x00023c68) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xe426,	// (0x00023c68) list_double_large_graphic_phob2_cc_pane_g4

0xe437,	// (0x00023c79) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xe437,	// (0x00023c79) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe99,	// (0x000256db) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe99,	// (0x000256db) list_double_large_graphic_phob2_cc_pane_g

0xe446,	// (0x00023c88) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xe446,	// (0x00023c88) list_double_large_graphic_phob2_cc_pane_t1

0xe46f,	// (0x00023cb1) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xe46f,	// (0x00023cb1) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfea4,	// (0x000256e6) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfea4,	// (0x000256e6) list_double_large_graphic_phob2_cc_pane_t

0x60f8,	// (0x0001b93a) list_highlight_pane_cp025_ParamLimits

0x60f8,	// (0x0001b93a) list_highlight_pane_cp025

0x087f,	// (0x000160c1) bg_button_pane_cp033_ParamLimits

0x60c5,	// (0x0001b907) phob2_cc_button_pane_g1_ParamLimits

0x60d1,	// (0x0001b913) phob2_cc_button_pane_t1_ParamLimits

0x60e6,	// (0x0001b928) phob2_cc_button_pane_t2_ParamLimits

0xfe94,	// (0x000256d6) phob2_cc_button_pane_t_ParamLimits

0x8902,	// (0x0001e144) popup_wgtman_window

0x5039,	// (0x0001a87b) scroll_pane_cp038

0xdeb4,	// (0x000236f6) wgtman_btn_pane_cp_01_ParamLimits

0xdeb4,	// (0x000236f6) wgtman_btn_pane_cp_01

0x6106,	// (0x0001b948) wgtman_content_pane

0x610f,	// (0x0001b951) wgtman_heading_pane

0x082c,	// (0x0001606e) bg_heading_pane_cp02

0x6118,	// (0x0001b95a) wgtman_heading_pane_g1

0x6120,	// (0x0001b962) wgtman_heading_pane_t1

0x612e,	// (0x0001b970) scroll_pane_cp036

0x6136,	// (0x0001b978) wgtman_list_pane

0x562a,	// (0x0001ae6c) wgtman_list_pane_t1_ParamLimits

0x562a,	// (0x0001ae6c) wgtman_list_pane_t1

0x8130,	// (0x0001d972) cam4_grid_pane

0xc154,	// (0x00021996) bg_button_pane_cp015_ParamLimits

0xc165,	// (0x000219a7) bg_button_pane_cp016_ParamLimits

0xc171,	// (0x000219b3) bg_button_pane_cp017_ParamLimits

0xc1c3,	// (0x00021a05) popup_vitu2_query_window_g3_ParamLimits

0xc1c3,	// (0x00021a05) popup_vitu2_query_window_g3

0xc260,	// (0x00021aa2) popup_vitu2_query_window_t6_ParamLimits

0xc260,	// (0x00021aa2) popup_vitu2_query_window_t6

0xc28b,	// (0x00021acd) popup_vitu2_query_window_t7_ParamLimits

0xc28b,	// (0x00021acd) popup_vitu2_query_window_t7

0x5fff,	// (0x0001b841) cam4_grid_pane_g1

0x6008,	// (0x0001b84a) cam4_grid_pane_g2

0x613e,	// (0x0001b980) cam4_grid_pane_g3

0x6147,	// (0x0001b989) cam4_grid_pane_g4

0x0003,

0xfea9,	// (0x000256eb) cam4_grid_pane_g

0x913e,	// (0x0001e980) aid_placing_vt_slider_lsc_ParamLimits

0x93e8,	// (0x0001ec2a) vidtel_button_pane_ParamLimits

0x93e8,	// (0x0001ec2a) vidtel_button_pane

0x082c,	// (0x0001606e) bg_button_pane_cp034

0xe498,	// (0x00023cda) vidtel_button_pane_g1

0xe4a0,	// (0x00023ce2) vidtel_button_pane_t1

0x4604,	// (0x00019e46) aid_size_vtel_slider_touch

0x4f36,	// (0x0001a778) scroll_pane_cp039

0x5068,	// (0x0001a8aa) ncim_query_button_pane_cp01_ParamLimits

0x5087,	// (0x0001a8c9) ncimui_query_pane_g1_ParamLimits

0x087f,	// (0x000160c1) input_focus_pane_cp012_ParamLimits

0x50ac,	// (0x0001a8ee) ncim_query_entry_pane_t1_ParamLimits

0x4f36,	// (0x0001a778) scroll_pane_cp039_ParamLimits

0x1c4e,	// (0x00017490) navi_pane_bcale_mc_g1

0x1c56,	// (0x00017498) navi_pane_bcale_mc_t1

0x55f4,	// (0x0001ae36) main_sp_fs_email_pane_g1

0x5600,	// (0x0001ae42) main_sp_fs_email_pane_g2

0x0001,

0xfc79,	// (0x000254bb) main_sp_fs_email_pane_g

0x5a91,	// (0x0001b2d3) list_single_cale_mrui_row_pane_g3_ParamLimits

0x5a91,	// (0x0001b2d3) list_single_cale_mrui_row_pane_g3

0xdb18,	// (0x0002335a) list_single_recal_day_pane_g5_event_pane

0x5bfa,	// (0x0001b43c) list_single_recal_day_pane_g7

0x6150,	// (0x0001b992) list_recal_day_event_pane_cp01

0x6159,	// (0x0001b99b) list_recal_vselct_arw_lo_pane_cp01

0x6161,	// (0x0001b9a3) list_recal_vselct_arw_up_pane_cp01

0x6169,	// (0x0001b9ab) list_recal_vselct_pane_cp01

0x465d,	// (0x00019e9f) list_recal_day_event_pane_cp01_g1

0x6173,	// (0x0001b9b5) list_recal_day_event_pane_cp01_t1

0x5c02,	// (0x0001b444) list_single_recal_day_pane_t1_ParamLimits

0xdb2f,	// (0x00023371) list_single_recal_day_pane_t2_ParamLimits

0xfd8c,	// (0x000255ce) list_single_recal_day_pane_t_ParamLimits

0x0ef9,	// (0x0001673b) bg_notes_pane_ParamLimits

0x0fd9,	// (0x0001681b) list_notes_pane_ParamLimits

0x8a44,	// (0x0001e286) scroll_pane_cp06_ParamLimits

0x1019,	// (0x0001685b) main_notes_pane_ParamLimits

0x087f,	// (0x000160c1) main_welc_pane

0xe4d4,	// (0x00023d16) main_welc_body_pane_ParamLimits

0xe4d4,	// (0x00023d16) main_welc_body_pane

0xe4ed,	// (0x00023d2f) main_welc_opti_pane_ParamLimits

0xe4ed,	// (0x00023d2f) main_welc_opti_pane

0xe546,	// (0x00023d88) main_welc_pane_t1_ParamLimits

0xe546,	// (0x00023d88) main_welc_pane_t1

0xe6ac,	// (0x00023eee) main_welc_body_row_pane_ParamLimits

0xe6ac,	// (0x00023eee) main_welc_body_row_pane

0x0f8f,	// (0x000167d1) main_welc_opti_row_pane_ParamLimits

0x0f8f,	// (0x000167d1) main_welc_opti_row_pane

0x6191,	// (0x0001b9d3) main_welc_opti_row_pane_g1

0xe6c1,	// (0x00023f03) main_welc_opti_row_pane_t1

0x6199,	// (0x0001b9db) main_welc_body_row_pane_t1

0x5e3b,	// (0x0001b67d) popup_notif_wgt_heading_pane

0x5e55,	// (0x0001b697) aid_size_list_notif_wgt_del_ParamLimits

0x5e62,	// (0x0001b6a4) list_notif_wgt_row_pane_g1_ParamLimits

0x5e6e,	// (0x0001b6b0) list_notif_wgt_row_pane_g2_ParamLimits

0x5e82,	// (0x0001b6c4) list_notif_wgt_row_pane_g3_ParamLimits

0xfdf3,	// (0x00025635) list_notif_wgt_row_pane_g_ParamLimits

0x5e8f,	// (0x0001b6d1) list_notif_wgt_row_pane_t1_ParamLimits

0x5ea5,	// (0x0001b6e7) list_notif_wgt_row_pane_t2_ParamLimits

0x5eb7,	// (0x0001b6f9) list_notif_wgt_row_pane_t3_ParamLimits

0xfdfa,	// (0x0002563c) list_notif_wgt_row_pane_t_ParamLimits

0xdf2b,	// (0x0002376d) listrow_wgtman_pane_g1_ParamLimits

0xdf38,	// (0x0002377a) listrow_wgtman_pane_g2_ParamLimits

0xfe2a,	// (0x0002566c) listrow_wgtman_pane_g_ParamLimits

0xdf50,	// (0x00023792) listrow_wgtman_pane_t1_ParamLimits

0xdf68,	// (0x000237aa) listrow_wgtman_pane_t2_ParamLimits

0xfe2f,	// (0x00025671) listrow_wgtman_pane_t_ParamLimits

0xdf8e,	// (0x000237d0) wait_bar_pane_cp09_ParamLimits

0x082c,	// (0x0001606e) bg_popup_heading_pane_cp02

0x61a8,	// (0x0001b9ea) popup_notif_wgt_heading_pane_g1

0x61b0,	// (0x0001b9f2) popup_notif_wgt_heading_pane_t1

0x31e4,	// (0x00018a26) main_vids_pane

0x082c,	// (0x0001606e) vids_listscroll_pane

0xe6d0,	// (0x00023f12) scroll_pane_cp040

0x082c,	// (0x0001606e) vids_list_pane

0xe6d9,	// (0x00023f1b) vids_list_double_pane_ParamLimits

0xe6d9,	// (0x00023f1b) vids_list_double_pane

0xe6ea,	// (0x00023f2c) vids_list_double_pane_g1

0xe6f3,	// (0x00023f35) vids_list_double_pane_t1

0xe703,	// (0x00023f45) vids_list_double_pane_t2

0x0001,

0xfec8,	// (0x0002570a) vids_list_double_pane_t

0x78dc,	// (0x0001d11e) main_ncimui_pane_ParamLimits

0xcc3d,	// (0x0002247f) main_ncimui_pane_g1_ParamLimits

0xcc49,	// (0x0002248b) main_ncimui_pane_g2_ParamLimits

0xcc49,	// (0x0002248b) main_ncimui_pane_g2

0x0001,

0xfb7a,	// (0x000253bc) main_ncimui_pane_g_ParamLimits

0xfb7a,	// (0x000253bc) main_ncimui_pane_g

0xe502,	// (0x00023d44) main_welc_pane_g1_ParamLimits

0xe502,	// (0x00023d44) main_welc_pane_g1

0xe50e,	// (0x00023d50) main_welc_pane_g2_ParamLimits

0xe50e,	// (0x00023d50) main_welc_pane_g2

0x0003,

0xfeb2,	// (0x000256f4) main_welc_pane_g_ParamLimits

0xfeb2,	// (0x000256f4) main_welc_pane_g

0x0ef9,	// (0x0001673b) listscroll_mce_pane_ParamLimits

0xa30a,	// (0x0001fb4c) wait_bar_pane_cp10

0x31d8,	// (0x00018a1a) main_cale_day_pane_ParamLimits

0x31d8,	// (0x00018a1a) main_cale_week_pane_ParamLimits

0x0ef9,	// (0x0001673b) main_messa_pane_ParamLimits

0xb604,	// (0x00020e46) main_clock2_btn_pane_ParamLimits

0xb604,	// (0x00020e46) main_clock2_btn_pane

0x3a6b,	// (0x000192ad) main_clock2_btn_pane_cp01_ParamLimits

0x3a6b,	// (0x000192ad) main_clock2_btn_pane_cp01

0x5a4c,	// (0x0001b28e) list_cale_mrui_pane_ParamLimits

0x5eeb,	// (0x0001b72d) main_cf0_pane_g2

0x0001,

0xfe01,	// (0x00025643) main_cf0_pane_g

0xe0f3,	// (0x00023935) area_left_week_number_pane_ParamLimits

0xe104,	// (0x00023946) area_top_day_name_pane_ParamLimits

0xe110,	// (0x00023952) frame_month_view_pane_ParamLimits

0x6066,	// (0x0001b8a8) grid_month_view_pane_ParamLimits

0x6074,	// (0x0001b8b6) frm_month_g1_ParamLimits

0xe17c,	// (0x000239be) frm_month_g2_ParamLimits

0xe18b,	// (0x000239cd) frm_month_g3_ParamLimits

0xe19a,	// (0x000239dc) frm_month_g4_ParamLimits

0xe1a9,	// (0x000239eb) frm_month_g5_ParamLimits

0xe1b8,	// (0x000239fa) frm_month_g6_ParamLimits

0xe1c7,	// (0x00023a09) frm_month_g7_ParamLimits

0x6081,	// (0x0001b8c3) frm_month_g8_ParamLimits

0xe1d6,	// (0x00023a18) frm_month_g9_ParamLimits

0xe1e3,	// (0x00023a25) frm_month_g10_ParamLimits

0xe1f0,	// (0x00023a32) frm_month_g11_ParamLimits

0xe1fd,	// (0x00023a3f) frm_month_g12_ParamLimits

0xe20a,	// (0x00023a4c) frm_month_g13_ParamLimits

0xe217,	// (0x00023a59) frm_month_g14_ParamLimits

0xe224,	// (0x00023a66) frm_month_g15_ParamLimits

0xe231,	// (0x00023a73) frm_month_g16_ParamLimits

0xfe59,	// (0x0002569b) frm_month_g_ParamLimits

0x608e,	// (0x0001b8d0) cell_top_day_name_pane_t1_ParamLimits

0xe23e,	// (0x00023a80) cell_area_left_week_number_pane_g1_ParamLimits

0xe24d,	// (0x00023a8f) cell_area_left_week_number_pane_t1_ParamLimits

0x0f73,	// (0x000167b5) cell_month_view_pane_g1_ParamLimits

0xe263,	// (0x00023aa5) cell_month_view_pane_t1_ParamLimits

0x0ef1,	// (0x00016733) main_clock2_btn_pane_g1

0x61be,	// (0x0001ba00) main_clock2_btn_pane_t1

0x087f,	// (0x000160c1) listscroll_cmail_pane_ParamLimits

0x55f4,	// (0x0001ae36) main_sp_fs_email_pane_g1_ParamLimits

0x5600,	// (0x0001ae42) main_sp_fs_email_pane_g2_ParamLimits

0xfc79,	// (0x000254bb) main_sp_fs_email_pane_g_ParamLimits

0x5b76,	// (0x0001b3b8) list_recal_day_pane_ParamLimits

0x5b87,	// (0x0001b3c9) mian_recal_day_pane_t1

0xd52b,	// (0x00022d6d) list_single_dyc_row_text_pane_t4_ParamLimits

0xd52b,	// (0x00022d6d) list_single_dyc_row_text_pane_t4

0xd562,	// (0x00022da4) list_single_dyc_row_text_pane_t5_ParamLimits

0xd562,	// (0x00022da4) list_single_dyc_row_text_pane_t5

0x569f,	// (0x0001aee1) list_single_dyc_row_text_pane_t6_ParamLimits

0x569f,	// (0x0001aee1) list_single_dyc_row_text_pane_t6

0x9fbb,	// (0x0001f7fd) aid_mgn_list_cale_time_pane

0x78dc,	// (0x0001d11e) main_gallery2_pane_ParamLimits

0x3a7f,	// (0x000192c1) main_clock2_pane_cp01_t1

0x3a8d,	// (0x000192cf) main_clock2_pane_cp01_t3

0x0001,

0xf750,	// (0x00024f92) main_clock2_pane_cp01_t

0x8cec,	// (0x0001e52e) cale_week_scroll_pane_g16_ParamLimits

0x8cec,	// (0x0001e52e) cale_week_scroll_pane_g16

0x127e,	// (0x00016ac0) vorec_slider_pane

0xe4a0,	// (0x00023ce2) vidtel_button_pane_t1_ParamLimits

0x0f81,	// (0x000167c3) main_fs_bigclock_clock_pane_g1_ParamLimits

0xdbc8,	// (0x0002340a) main_fs_bigclock_clock_pane_g2_ParamLimits

0xdbd5,	// (0x00023417) main_fs_bigclock_clock_pane_g3_ParamLimits

0xdbd5,	// (0x00023417) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfdaf,	// (0x000255f1) main_fs_bigclock_clock_pane_g_ParamLimits

0xdbe1,	// (0x00023423) main_fs_bigclock_clock_pane_t1_ParamLimits

0xdbf3,	// (0x00023435) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfdb8,	// (0x000255fa) main_fs_bigclock_clock_pane_t_ParamLimits

0xafe8,	// (0x0002082a) main_mup3_lyrics_pane_ParamLimits

0xafe8,	// (0x0002082a) main_mup3_lyrics_pane

0xe711,	// (0x00023f53) main_mup3_lyrics_pane_t1_ParamLimits

0xe711,	// (0x00023f53) main_mup3_lyrics_pane_t1

0x7c5d,	// (0x0001d49f) aid_main_mp4_pane_t1_area

0x7c67,	// (0x0001d4a9) aid_main_mp4_pane_t2_area

0x7d54,	// (0x0001d596) main_mp4_pane_g7_ParamLimits

0x7d54,	// (0x0001d596) main_mp4_pane_g7

0x7d60,	// (0x0001d5a2) main_mp4_pane_g8_ParamLimits

0x7d60,	// (0x0001d5a2) main_mp4_pane_g8

0xb9fb,	// (0x0002123d) aid_call6_pane_g1_size

0xe3db,	// (0x00023c1d) list_double_large_graphic_phob2_other_pane_ParamLimits

0xe3db,	// (0x00023c1d) list_double_large_graphic_phob2_other_pane

0x1ba1,	// (0x000173e3) list_double_large_graphic_phob2_other_pane_g1

0x082c,	// (0x0001606e) list_highlight_pane_cp026

0x087f,	// (0x000160c1) main_welc_pane_ParamLimits

0xd35c,	// (0x00022b9e) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0xd35c,	// (0x00022b9e) main_sp_fs_ctrlbar_pane_g3

0xd374,	// (0x00022bb6) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0xd374,	// (0x00022bb6) main_sp_fs_ctrlbar_pane_g4

0xd3b4,	// (0x00022bf6) toolbar2_fixed_button_pane_cp01

0xd3be,	// (0x00022c00) toolbar2_fixed_button_pane_cp02

0xd3c9,	// (0x00022c0b) toolbar2_fixed_button_pane_cp03

0xe4c8,	// (0x00023d0a) list_welc_entry_pane_ParamLimits

0xe4c8,	// (0x00023d0a) list_welc_entry_pane

0xe51a,	// (0x00023d5c) main_welc_pane_g3_ParamLimits

0xe51a,	// (0x00023d5c) main_welc_pane_g3

0xe55e,	// (0x00023da0) main_welc_pane_t2_ParamLimits

0xe55e,	// (0x00023da0) main_welc_pane_t2

0xe570,	// (0x00023db2) main_welc_pane_t3_ParamLimits

0xe570,	// (0x00023db2) main_welc_pane_t3

0x0005,

0xfebb,	// (0x000256fd) main_welc_pane_t_ParamLimits

0xfebb,	// (0x000256fd) main_welc_pane_t

0xe656,	// (0x00023e98) welc_button_pane_ParamLimits

0xe656,	// (0x00023e98) welc_button_pane

0xe6a0,	// (0x00023ee2) welc_service_logo_pane_ParamLimits

0xe6a0,	// (0x00023ee2) welc_service_logo_pane

0xe72f,	// (0x00023f71) list_single_welc_entry_pane_ParamLimits

0xe72f,	// (0x00023f71) list_single_welc_entry_pane

0xe740,	// (0x00023f82) list_single_welc_entry_pane_g1

0xe748,	// (0x00023f8a) list_single_welc_entry_pane_t1

0xe756,	// (0x00023f98) list_single_welc_entry_pane_t2

0x0001,

0xfecd,	// (0x0002570f) list_single_welc_entry_pane_t

0x082c,	// (0x0001606e) bg_button_pane_cp035

0xe764,	// (0x00023fa6) welc_button_pane_t1

0x61cc,	// (0x0001ba0e) welc_service_logo_pane_g1

0x61d5,	// (0x0001ba17) welc_service_logo_pane_g2

0x0001,

0xfed2,	// (0x00025714) welc_service_logo_pane_g

0x73d1,	// (0x0001cc13) main_int_radio_pane

0x10de,	// (0x00016920) list_single_fs_dyc_pane_g1

0xe312,	// (0x00023b54) list_double_large_graphic_phob2_pane_g3_ParamLimits

0xe312,	// (0x00023b54) list_double_large_graphic_phob2_pane_g3

0xe31e,	// (0x00023b60) list_double_large_graphic_phob2_pane_g4_ParamLimits

0xe31e,	// (0x00023b60) list_double_large_graphic_phob2_pane_g4

0xe772,	// (0x00023fb4) main_int_radio1_pane_ParamLimits

0xe772,	// (0x00023fb4) main_int_radio1_pane

0x61de,	// (0x0001ba20) find_pane_cp02

0xe788,	// (0x00023fca) input_focus_pane_cp12_ParamLimits

0xe788,	// (0x00023fca) input_focus_pane_cp12

0xe794,	// (0x00023fd6) input_focus_pane_cp13_ParamLimits

0xe794,	// (0x00023fd6) input_focus_pane_cp13

0xe7ac,	// (0x00023fee) input_focus_pane_cp14_ParamLimits

0xe7ac,	// (0x00023fee) input_focus_pane_cp14

0x61e7,	// (0x0001ba29) int_radio1_listscroll_pane

0xe7c4,	// (0x00024006) main_int_radio1_pane_g1_ParamLimits

0xe7c4,	// (0x00024006) main_int_radio1_pane_g1

0xe7d0,	// (0x00024012) main_int_radio1_pane_t1_ParamLimits

0xe7d0,	// (0x00024012) main_int_radio1_pane_t1

0xe7e2,	// (0x00024024) main_int_radio1_pane_t2_ParamLimits

0xe7e2,	// (0x00024024) main_int_radio1_pane_t2

0xe7f4,	// (0x00024036) main_int_radio1_pane_t3_ParamLimits

0xe7f4,	// (0x00024036) main_int_radio1_pane_t3

0xe806,	// (0x00024048) main_int_radio1_pane_t4_ParamLimits

0xe806,	// (0x00024048) main_int_radio1_pane_t4

0x61f1,	// (0x0001ba33) main_int_radio1_pane_t5_ParamLimits

0x61f1,	// (0x0001ba33) main_int_radio1_pane_t5

0xe81d,	// (0x0002405f) main_int_radio1_pane_t6_ParamLimits

0xe81d,	// (0x0002405f) main_int_radio1_pane_t6

0xe82f,	// (0x00024071) main_int_radio1_pane_t7_ParamLimits

0xe82f,	// (0x00024071) main_int_radio1_pane_t7

0xe841,	// (0x00024083) main_int_radio1_pane_t8_ParamLimits

0xe841,	// (0x00024083) main_int_radio1_pane_t8

0xe853,	// (0x00024095) main_int_radio1_pane_t9_ParamLimits

0xe853,	// (0x00024095) main_int_radio1_pane_t9

0xe865,	// (0x000240a7) main_int_radio1_pane_t10_ParamLimits

0xe865,	// (0x000240a7) main_int_radio1_pane_t10

0xe894,	// (0x000240d6) main_int_radio1_pane_t11_ParamLimits

0xe894,	// (0x000240d6) main_int_radio1_pane_t11

0xe8c3,	// (0x00024105) main_int_radio1_pane_t12_ParamLimits

0xe8c3,	// (0x00024105) main_int_radio1_pane_t12

0x000b,

0xfed7,	// (0x00025719) main_int_radio1_pane_t_ParamLimits

0xfed7,	// (0x00025719) main_int_radio1_pane_t

0x6203,	// (0x0001ba45) int_radio_list_pane

0x60a9,	// (0x0001b8eb) scroll_pane_cp037

0x5fee,	// (0x0001b830) list_double_large_graphic_int_radio_pane_ParamLimits

0x5fee,	// (0x0001b830) list_double_large_graphic_int_radio_pane

0x620b,	// (0x0001ba4d) list_double_large_graphic_int_radio_pane_g1

0x6214,	// (0x0001ba56) list_double_large_graphic_int_radio_pane_t1

0x6222,	// (0x0001ba64) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfef0,	// (0x00025732) list_double_large_graphic_int_radio_pane_t

0x082c,	// (0x0001606e) list_highlight_pane_cp027

0x6181,	// (0x0001b9c3) main_button_pane_4

0xe526,	// (0x00023d68) main_welc_pane_g4_ParamLimits

0xe526,	// (0x00023d68) main_welc_pane_g4

0xe582,	// (0x00023dc4) main_welc_pane_t4_ParamLimits

0xe582,	// (0x00023dc4) main_welc_pane_t4

0xe594,	// (0x00023dd6) main_welc_pane_t5_ParamLimits

0xe594,	// (0x00023dd6) main_welc_pane_t5

0xe5c4,	// (0x00023e06) main_welc_pane_t6_ParamLimits

0xe5c4,	// (0x00023e06) main_welc_pane_t6

0xe662,	// (0x00023ea4) welc_button_pane_2_ParamLimits

0xe662,	// (0x00023ea4) welc_button_pane_2

0xe674,	// (0x00023eb6) welc_button_pane_3_ParamLimits

0xe674,	// (0x00023eb6) welc_button_pane_3

0x6189,	// (0x0001b9cb) welc_button_pane_4

0xe688,	// (0x00023eca) welc_button_pane_5_ParamLimits

0xe688,	// (0x00023eca) welc_button_pane_5

0x71e0,	// (0x0001ca22) main_popup_welc_pane

0x623f,	// (0x0001ba81) main_welc_sk_g3

0x6249,	// (0x0001ba8b) main_welc_sk_g4

0x6253,	// (0x0001ba95) main_welc_sk_t3

0x6261,	// (0x0001baa3) main_welc_sk_t4

0x626f,	// (0x0001bab1) popup_welc_pane_t4

0x627d,	// (0x0001babf) popup_welc_pane_t5

0x628b,	// (0x0001bacd) popup_welc_pane_t6

0x73d1,	// (0x0001cc13) main_acti_pane

0x082c,	// (0x0001606e) main_sso_pane

0xe8da,	// (0x0002411c) sso_body_pane_ParamLimits

0xe8da,	// (0x0002411c) sso_body_pane

0xe8e8,	// (0x0002412a) sso_logo_pane_ParamLimits

0xe8e8,	// (0x0002412a) sso_logo_pane

0xe90b,	// (0x0002414d) sso_sk_pane_ParamLimits

0xe90b,	// (0x0002414d) sso_sk_pane

0x12f6,	// (0x00016b38) main_sso_logo_pane_g1

0xe918,	// (0x0002415a) sso_sk_pane_t1_ParamLimits

0xe918,	// (0x0002415a) sso_sk_pane_t1

0xe92b,	// (0x0002416d) sso_sk_pane_t2_ParamLimits

0xe92b,	// (0x0002416d) sso_sk_pane_t2

0x0001,

0xfef5,	// (0x00025737) sso_sk_pane_t_ParamLimits

0xfef5,	// (0x00025737) sso_sk_pane_t

0x62c3,	// (0x0001bb05) aid_sso_gap

0x62cc,	// (0x0001bb0e) aid_sso_txt1

0x62d4,	// (0x0001bb16) aid_sso_txt2

0x62dc,	// (0x0001bb1e) aid_sso_txt3

0x0002,

0xfefa,	// (0x0002573c) aid_sso_txt

0x62e4,	// (0x0001bb26) aid_sso_widget

0xe980,	// (0x000241c2) sso_btn_pane_ParamLimits

0xe980,	// (0x000241c2) sso_btn_pane

0xe9e9,	// (0x0002422b) sso_option_pane_ParamLimits

0xe9e9,	// (0x0002422b) sso_option_pane

0xea43,	// (0x00024285) sso_query_pane_ParamLimits

0xea43,	// (0x00024285) sso_query_pane

0xea7f,	// (0x000242c1) sso_query_pane_cp01_ParamLimits

0xea7f,	// (0x000242c1) sso_query_pane_cp01

0xeabd,	// (0x000242ff) sso_t_hdr_pane_ParamLimits

0xeabd,	// (0x000242ff) sso_t_hdr_pane

0xeadb,	// (0x0002431d) sso_t_nml_pane_ParamLimits

0xeadb,	// (0x0002431d) sso_t_nml_pane

0x62dc,	// (0x0001bb1e) sso_t_sub_pane

0xe8f5,	// (0x00024137) sso_popup_window_ParamLimits

0xe8f5,	// (0x00024137) sso_popup_window

0xe93d,	// (0x0002417f) sso_apps_pane_ParamLimits

0xe93d,	// (0x0002417f) sso_apps_pane

0xe95c,	// (0x0002419e) sso_body_pane_g1

0xe964,	// (0x000241a6) sso_body_pane_t1

0xe972,	// (0x000241b4) sso_body_pane_t2

0x0001,

0xff01,	// (0x00025743) sso_body_pane_t

0xe9bd,	// (0x000241ff) sso_btn_pane_cp01_ParamLimits

0xe9bd,	// (0x000241ff) sso_btn_pane_cp01

0xea1d,	// (0x0002425f) sso_prog_pane_ParamLimits

0xea1d,	// (0x0002425f) sso_prog_pane

0xeb1f,	// (0x00024361) sso_t_hdr_pane_t1_ParamLimits

0xeb1f,	// (0x00024361) sso_t_hdr_pane_t1

0xeb38,	// (0x0002437a) input_focus_pane_cp10_ParamLimits

0xeb38,	// (0x0002437a) input_focus_pane_cp10

0xeb50,	// (0x00024392) sso_query_pane_t1_ParamLimits

0xeb50,	// (0x00024392) sso_query_pane_t1

0xeb63,	// (0x000243a5) sso_query_pane_t2_ParamLimits

0xeb63,	// (0x000243a5) sso_query_pane_t2

0xeb7e,	// (0x000243c0) sso_query_pane_t3_ParamLimits

0xeb7e,	// (0x000243c0) sso_query_pane_t3

0xeba8,	// (0x000243ea) sso_query_pane_t4_ParamLimits

0xeba8,	// (0x000243ea) sso_query_pane_t4

0x0003,

0xff06,	// (0x00025748) sso_query_pane_t_ParamLimits

0xff06,	// (0x00025748) sso_query_pane_t

0x082c,	// (0x0001606e) bg_button_pane_cp22

0x6230,	// (0x0001ba72) sso_btn_pane_t1

0xebcc,	// (0x0002440e) sso_t_nml_pane_t1_ParamLimits

0xebcc,	// (0x0002440e) sso_t_nml_pane_t1

0xebe9,	// (0x0002442b) sso_option_row_pane_ParamLimits

0xebe9,	// (0x0002442b) sso_option_row_pane

0xebfc,	// (0x0002443e) sso_t_sub_pane_t1_ParamLimits

0xebfc,	// (0x0002443e) sso_t_sub_pane_t1

0x087f,	// (0x000160c1) bg_popup_window_pane_cp11_ParamLimits

0x087f,	// (0x000160c1) bg_popup_window_pane_cp11

0xec0f,	// (0x00024451) popup_sk_window_cp01_ParamLimits

0xec0f,	// (0x00024451) popup_sk_window_cp01

0xec1c,	// (0x0002445e) sso_popup_body_pane_ParamLimits

0xec1c,	// (0x0002445e) sso_popup_body_pane

0xec29,	// (0x0002446b) scroll_pane_cp21_ParamLimits

0xec29,	// (0x0002446b) scroll_pane_cp21

0xec36,	// (0x00024478) sso_popup_body_t_pane_ParamLimits

0xec36,	// (0x00024478) sso_popup_body_t_pane

0xec43,	// (0x00024485) sso_popup_body_t_hdr_pane_ParamLimits

0xec43,	// (0x00024485) sso_popup_body_t_hdr_pane

0xec4f,	// (0x00024491) sso_popup_body_t_nml_pane_ParamLimits

0xec4f,	// (0x00024491) sso_popup_body_t_nml_pane

0xec68,	// (0x000244aa) sso_popup_body_t_sub_pane_ParamLimits

0xec68,	// (0x000244aa) sso_popup_body_t_sub_pane

0xec87,	// (0x000244c9) sso_popup_body_t_hdr_pane_t1

0xec97,	// (0x000244d9) sso_popup_body_t_nml_pane_t1_ParamLimits

0xec97,	// (0x000244d9) sso_popup_body_t_nml_pane_t1

0xecd1,	// (0x00024513) sso_popup_body_t_sub_pane_t1_ParamLimits

0xecd1,	// (0x00024513) sso_popup_body_t_sub_pane_t1

0x12f6,	// (0x00016b38) sso_prog_pane_g1

0xecf6,	// (0x00024538) sso_apps_pane_comp1_ParamLimits

0xecf6,	// (0x00024538) sso_apps_pane_comp1

0xed08,	// (0x0002454a) sso_apps_pane_comp1_g1

0xed10,	// (0x00024552) sso_apps_pane_comp1_t1

0xed2c,	// (0x0002456e) sso_option_row_pane_g1

0xed34,	// (0x00024576) sso_option_row_pane_t1

0xe4b6,	// (0x00023cf8) bg_welc_area_ParamLimits

0xe4b6,	// (0x00023cf8) bg_welc_area

0xe5fa,	// (0x00023e3c) sso_t_hdr_pane_a_t1_ParamLimits

0xe5fa,	// (0x00023e3c) sso_t_hdr_pane_a_t1

0xe60c,	// (0x00023e4e) sso_t_nml_pane_a_t1_ParamLimits

0xe60c,	// (0x00023e4e) sso_t_nml_pane_a_t1

0xe62e,	// (0x00023e70) sso_t_sub_pane_a_t1_ParamLimits

0xe62e,	// (0x00023e70) sso_t_sub_pane_a_t1

0x6230,	// (0x0001ba72) sso_btn_pane_t1_copy1

0x082c,	// (0x0001606e) welc_button_pane_2_comp1

0x6299,	// (0x0001badb) sso_t_hdr_pane_p_t1

0x62a7,	// (0x0001bae9) sso_t_nml_pane_p_t1

0x62b5,	// (0x0001baf7) sso_t_sub_pane_p_t1

0x57c1,	// (0x0001b003) list_cmail_pane_ParamLimits

0xe694,	// (0x00023ed6) welc_button_pane_cp01_ParamLimits

0xe694,	// (0x00023ed6) welc_button_pane_cp01

0x082c,	// (0x0001606e) main_att_pane

0xed1e,	// (0x00024560) input_focus_pane_cp10_t1

0xed34,	// (0x00024576) sso_option_row_pane_t1_ParamLimits

0xed49,	// (0x0002458b) main_att_body_pane_ParamLimits

0xed49,	// (0x0002458b) main_att_body_pane

0xed5d,	// (0x0002459f) att_btn_pane_ParamLimits

0xed5d,	// (0x0002459f) att_btn_pane

0xed77,	// (0x000245b9) att_btn_pane_cp01_ParamLimits

0xed77,	// (0x000245b9) att_btn_pane_cp01

0xed8f,	// (0x000245d1) att_li_srv_pane_ParamLimits

0xed8f,	// (0x000245d1) att_li_srv_pane

0xed9d,	// (0x000245df) att_opt_pane_ParamLimits

0xed9d,	// (0x000245df) att_opt_pane

0xeddf,	// (0x00024621) att_query_pane_ParamLimits

0xeddf,	// (0x00024621) att_query_pane

0xee0f,	// (0x00024651) att_query_pane_cp01_ParamLimits

0xee0f,	// (0x00024651) att_query_pane_cp01

0xee45,	// (0x00024687) att_t_hdr_pane_ParamLimits

0xee45,	// (0x00024687) att_t_hdr_pane

0xee85,	// (0x000246c7) att_t_nml_pane_ParamLimits

0xee85,	// (0x000246c7) att_t_nml_pane

0xeeb3,	// (0x000246f5) att_t_nml_pane_cp01_ParamLimits

0xeeb3,	// (0x000246f5) att_t_nml_pane_cp01

0xeed5,	// (0x00024717) att_t_nmlb_pane_ParamLimits

0xeed5,	// (0x00024717) att_t_nmlb_pane

0xeeeb,	// (0x0002472d) att_term_pane_ParamLimits

0xeeeb,	// (0x0002472d) att_term_pane

0xef2b,	// (0x0002476d) main_att_body_pane_g1_ParamLimits

0xef2b,	// (0x0002476d) main_att_body_pane_g1

0xeb1f,	// (0x00024361) att_t_hdr_pane_t1_ParamLimits

0xeb1f,	// (0x00024361) att_t_hdr_pane_t1

0xef6b,	// (0x000247ad) att_t_nml_pane_t1_ParamLimits

0xef6b,	// (0x000247ad) att_t_nml_pane_t1

0xef90,	// (0x000247d2) att_btn_pane_t1

0x082c,	// (0x0001606e) bg_button_pane_cp23

0xef9e,	// (0x000247e0) att_li_srv_row_pane_ParamLimits

0xef9e,	// (0x000247e0) att_li_srv_row_pane

0xefae,	// (0x000247f0) att_t_nmlb_pane_t1_ParamLimits

0xefae,	// (0x000247f0) att_t_nmlb_pane_t1

0xefc7,	// (0x00024809) att_query_pane_t1

0xefd6,	// (0x00024818) att_query_pane_t2

0xefe5,	// (0x00024827) att_query_pane_t3

0x0002,

0xff0f,	// (0x00025751) att_query_pane_t

0xeff4,	// (0x00024836) input_focus_pane_cp11

0xeffd,	// (0x0002483f) att_term_pane_t1_ParamLimits

0xeffd,	// (0x0002483f) att_term_pane_t1

0x082c,	// (0x0001606e) att_opt_row_pane

0xf01a,	// (0x0002485c) att_opt_row_pane_g1

0xf022,	// (0x00024864) att_opt_row_pane_t1_ParamLimits

0xf022,	// (0x00024864) att_opt_row_pane_t1

0xf03b,	// (0x0002487d) att_li_srv_row_pane_g1

0xf043,	// (0x00024885) att_li_srv_row_pane_t1

0xf051,	// (0x00024893) att_li_srv_row_pane_t2

0x0001,

0xff16,	// (0x00025758) att_li_srv_row_pane_t
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

} // end of namespace AknLayoutScalable_Abrw_pqp_apps_qvga_prt_Normal

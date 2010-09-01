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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0006ce09 };

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
0x3051,	// (0x0006fe5a) Screen

0x305d,	// (0x0006fe66) application_window

0x30a3,	// (0x0006feac) area_bottom_pane_ParamLimits

0x30a3,	// (0x0006feac) area_bottom_pane

0x30dc,	// (0x0006fee5) area_top_pane_ParamLimits

0x30dc,	// (0x0006fee5) area_top_pane

0xb730,	// (0x00078539) call_video_uplink_pane_ParamLimits

0xb730,	// (0x00078539) call_video_uplink_pane

0x316a,	// (0x0006ff73) main_pane_ParamLimits

0x316a,	// (0x0006ff73) main_pane

0x1418,	// (0x0006e221) context_pane

0x6636,	// (0x0007343f) navi_pane

0x6668,	// (0x00073471) popup_cale_events_window_ParamLimits

0x6668,	// (0x00073471) popup_cale_events_window

0x142b,	// (0x0006e234) popup_mup_playback_window

0x6680,	// (0x00073489) signal_pane

0xb7e2,	// (0x000785eb) main_browser_pane

0xba00,	// (0x00078809) main_burst_pane

0x638a,	// (0x00073193) main_calc_pane

0x13fe,	// (0x0006e207) main_cale_day_pane

0x3d49,	// (0x00070b52) main_cale_month_pane

0x13fe,	// (0x0006e207) main_cale_week_pane

0xba00,	// (0x00078809) main_call_pane

0x376b,	// (0x00070574) main_call_poc_pane

0xba00,	// (0x00078809) main_camera_pane

0xba00,	// (0x00078809) main_chi_dic_pane

0xc27c,	// (0x00079085) main_clock_pane

0x376b,	// (0x00070574) main_fmradio_pane

0xba00,	// (0x00078809) main_graph_messa_pane

0x376b,	// (0x00070574) main_help_pane

0xb7e2,	// (0x000785eb) main_im_pane

0x39c6,	// (0x000707cf) main_image_pane_ParamLimits

0x39c6,	// (0x000707cf) main_image_pane

0x376b,	// (0x00070574) main_location2_pane

0xba00,	// (0x00078809) main_location_pane

0x39c6,	// (0x000707cf) main_messa_pane

0x376b,	// (0x00070574) main_mp2_pane

0xba00,	// (0x00078809) main_mp_pane

0x376b,	// (0x00070574) main_msg_pane

0x376b,	// (0x00070574) main_mup_eq_pane

0x376b,	// (0x00070574) main_mup_pane

0xb7e2,	// (0x000785eb) main_notes_pane

0x376b,	// (0x00070574) main_pec_pane

0x376b,	// (0x00070574) main_phob_pane

0x376b,	// (0x00070574) main_pinb_pane

0x376b,	// (0x00070574) main_postcard_pane

0x376b,	// (0x00070574) main_qdial_pane

0xba00,	// (0x00078809) main_skin_pane

0x376b,	// (0x00070574) main_smil2_pane

0xba00,	// (0x00078809) main_smil_pane

0xba00,	// (0x00078809) main_video_pane

0xba00,	// (0x00078809) main_video_tele_pane

0x39c6,	// (0x000707cf) main_viewer_pane_ParamLimits

0x39c6,	// (0x000707cf) main_viewer_pane

0xba00,	// (0x00078809) main_vorec_pane

0x63ea,	// (0x000731f3) popup_blid_sat_info_window_ParamLimits

0x63ea,	// (0x000731f3) popup_blid_sat_info_window

0x6442,	// (0x0007324b) popup_dyc_status_message_window_ParamLimits

0x6442,	// (0x0007324b) popup_dyc_status_message_window

0x645c,	// (0x00073265) popup_grid_large_graphic_window_ParamLimits

0x645c,	// (0x00073265) popup_grid_large_graphic_window

0x6518,	// (0x00073321) popup_loc_request_window_ParamLimits

0x6518,	// (0x00073321) popup_loc_request_window

0x660e,	// (0x00073417) popup_wml_address_window_ParamLimits

0x660e,	// (0x00073417) popup_wml_address_window

0x61c4,	// (0x00072fcd) call_muted_g1

0x5e38,	// (0x00072c41) popup_call_audio_conf_window_ParamLimits

0x5e38,	// (0x00072c41) popup_call_audio_conf_window

0x61d8,	// (0x00072fe1) popup_call_audio_first_window_ParamLimits

0x61d8,	// (0x00072fe1) popup_call_audio_first_window

0x624e,	// (0x00073057) popup_call_audio_in_window_ParamLimits

0x624e,	// (0x00073057) popup_call_audio_in_window

0x628a,	// (0x00073093) popup_call_audio_out_window_ParamLimits

0x628a,	// (0x00073093) popup_call_audio_out_window

0x62c4,	// (0x000730cd) popup_call_audio_second_window_ParamLimits

0x62c4,	// (0x000730cd) popup_call_audio_second_window

0x631a,	// (0x00073123) popup_call_audio_wait_window_ParamLimits

0x631a,	// (0x00073123) popup_call_audio_wait_window

0x634f,	// (0x00073158) popup_number_entry_window_ParamLimits

0x634f,	// (0x00073158) popup_number_entry_window

0x3300,	// (0x00070109) bg_popup_call_pane_cp05_ParamLimits

0x3300,	// (0x00070109) bg_popup_call_pane_cp05

0x3320,	// (0x00070129) popup_number_entry_window_t1

0x3333,	// (0x0007013c) popup_number_entry_window_t2

0x3345,	// (0x0007014e) popup_number_entry_window_t3

0x0003,

0xf085,	// (0x0007be8e) popup_number_entry_window_t

0x338b,	// (0x00070194) text_title_cp2

0x339e,	// (0x000701a7) bg_popup_call_pane_cp_ParamLimits

0x339e,	// (0x000701a7) bg_popup_call_pane_cp

0x33ac,	// (0x000701b5) call_thumbnail_pane

0x33b4,	// (0x000701bd) popup_call_audio_in_window_g1_ParamLimits

0x33b4,	// (0x000701bd) popup_call_audio_in_window_g1

0x33c0,	// (0x000701c9) popup_call_audio_in_window_g2_ParamLimits

0x33c0,	// (0x000701c9) popup_call_audio_in_window_g2

0x33cc,	// (0x000701d5) popup_call_audio_in_window_g3_ParamLimits

0x33cc,	// (0x000701d5) popup_call_audio_in_window_g3

0x0002,

0xf08e,	// (0x0007be97) popup_call_audio_in_window_g_ParamLimits

0xf08e,	// (0x0007be97) popup_call_audio_in_window_g

0x33d8,	// (0x000701e1) popup_call_audio_in_window_t1_ParamLimits

0x33d8,	// (0x000701e1) popup_call_audio_in_window_t1

0x33f4,	// (0x000701fd) popup_call_audio_in_window_t2_ParamLimits

0x33f4,	// (0x000701fd) popup_call_audio_in_window_t2

0x3410,	// (0x00070219) popup_call_audio_in_window_t3_ParamLimits

0x3410,	// (0x00070219) popup_call_audio_in_window_t3

0x0002,

0xf095,	// (0x0007be9e) popup_call_audio_in_window_t_ParamLimits

0xf095,	// (0x0007be9e) popup_call_audio_in_window_t

0x339e,	// (0x000701a7) bg_popup_call_pane_cp01_ParamLimits

0x339e,	// (0x000701a7) bg_popup_call_pane_cp01

0x33ac,	// (0x000701b5) call_thumbnail_pane_cp02

0x3423,	// (0x0007022c) call_type_pane_cp022

0x342b,	// (0x00070234) popup_call_audio_out_window_g1_ParamLimits

0x342b,	// (0x00070234) popup_call_audio_out_window_g1

0x343d,	// (0x00070246) popup_call_audio_out_window_g2_ParamLimits

0x343d,	// (0x00070246) popup_call_audio_out_window_g2

0x3449,	// (0x00070252) popup_call_audio_out_window_g3_ParamLimits

0x3449,	// (0x00070252) popup_call_audio_out_window_g3

0x0002,

0xf09c,	// (0x0007bea5) popup_call_audio_out_window_g_ParamLimits

0xf09c,	// (0x0007bea5) popup_call_audio_out_window_g

0x345b,	// (0x00070264) popup_call_audio_out_window_t1_ParamLimits

0x345b,	// (0x00070264) popup_call_audio_out_window_t1

0x3473,	// (0x0007027c) popup_call_audio_out_window_t2_ParamLimits

0x3473,	// (0x0007027c) popup_call_audio_out_window_t2

0x0001,

0xf0a3,	// (0x0007beac) popup_call_audio_out_window_t_ParamLimits

0xf0a3,	// (0x0007beac) popup_call_audio_out_window_t

0x3488,	// (0x00070291) bg_popup_call_pane_ParamLimits

0x3488,	// (0x00070291) bg_popup_call_pane

0x350c,	// (0x00070315) call_thumbnail_pane_cp_ParamLimits

0x350c,	// (0x00070315) call_thumbnail_pane_cp

0x3530,	// (0x00070339) call_type_pane_cp01_ParamLimits

0x3530,	// (0x00070339) call_type_pane_cp01

0x3574,	// (0x0007037d) popup_call_audio_first_window_g1_ParamLimits

0x3574,	// (0x0007037d) popup_call_audio_first_window_g1

0x35c0,	// (0x000703c9) popup_call_audio_first_window_g2_ParamLimits

0x35c0,	// (0x000703c9) popup_call_audio_first_window_g2

0x0001,

0xf0a8,	// (0x0007beb1) popup_call_audio_first_window_g_ParamLimits

0xf0a8,	// (0x0007beb1) popup_call_audio_first_window_g

0x3604,	// (0x0007040d) popup_call_audio_first_window_t1_ParamLimits

0x3604,	// (0x0007040d) popup_call_audio_first_window_t1

0x36b0,	// (0x000704b9) popup_call_audio_first_window_t4_ParamLimits

0x36b0,	// (0x000704b9) popup_call_audio_first_window_t4

0x373c,	// (0x00070545) popup_call_audio_first_window_t5_ParamLimits

0x373c,	// (0x00070545) popup_call_audio_first_window_t5

0x0002,

0xf0ad,	// (0x0007beb6) popup_call_audio_first_window_t_ParamLimits

0xf0ad,	// (0x0007beb6) popup_call_audio_first_window_t

0x376b,	// (0x00070574) bg_popup_call_pane_cp02

0x3775,	// (0x0007057e) call_type_pane_cp023

0x377d,	// (0x00070586) popup_call_audio_wait_window_g1

0x3785,	// (0x0007058e) popup_call_audio_wait_window_g2

0x0001,

0xf0b4,	// (0x0007bebd) popup_call_audio_wait_window_g

0x378d,	// (0x00070596) popup_call_audio_wait_window_t3

0x379b,	// (0x000705a4) bg_popup_call_pane_cp03_ParamLimits

0x379b,	// (0x000705a4) bg_popup_call_pane_cp03

0x37fb,	// (0x00070604) call_thumbnail_pane_cp011_ParamLimits

0x37fb,	// (0x00070604) call_thumbnail_pane_cp011

0x3807,	// (0x00070610) call_type_pane_cp034_ParamLimits

0x3807,	// (0x00070610) call_type_pane_cp034

0x3843,	// (0x0007064c) popup_call_audio_second_window_g1_ParamLimits

0x3843,	// (0x0007064c) popup_call_audio_second_window_g1

0x387f,	// (0x00070688) popup_call_audio_second_window_g2_ParamLimits

0x387f,	// (0x00070688) popup_call_audio_second_window_g2

0x0001,

0xf0b9,	// (0x0007bec2) popup_call_audio_second_window_g_ParamLimits

0xf0b9,	// (0x0007bec2) popup_call_audio_second_window_g

0x38bb,	// (0x000706c4) popup_call_audio_second_window_t1_ParamLimits

0x38bb,	// (0x000706c4) popup_call_audio_second_window_t1

0x393c,	// (0x00070745) popup_call_audio_second_window_t2_ParamLimits

0x393c,	// (0x00070745) popup_call_audio_second_window_t2

0x3972,	// (0x0007077b) popup_call_audio_second_window_t3_ParamLimits

0x3972,	// (0x0007077b) popup_call_audio_second_window_t3

0x0002,

0xf0be,	// (0x0007bec7) popup_call_audio_second_window_t_ParamLimits

0xf0be,	// (0x0007bec7) popup_call_audio_second_window_t

0x376b,	// (0x00070574) bg_popup_call_pane_cp04

0x39a8,	// (0x000707b1) list_conf_pane

0x39b0,	// (0x000707b9) popup_call_audio_conf_window_t1

0x39be,	// (0x000707c7) call_thumbnail_pane_g1

0x39c6,	// (0x000707cf) bg_pinb_pane_ParamLimits

0x39c6,	// (0x000707cf) bg_pinb_pane

0x39d4,	// (0x000707dd) find_pinb_pane

0x39c6,	// (0x000707cf) listscroll_pinb_pane_ParamLimits

0x39c6,	// (0x000707cf) listscroll_pinb_pane

0x39de,	// (0x000707e7) pinb_bg_pane_g1

0x39de,	// (0x000707e7) pinb_bg_pane_g2

0x39de,	// (0x000707e7) pinb_bg_pane_g3

0x39de,	// (0x000707e7) pinb_bg_pane_g4

0x39de,	// (0x000707e7) pinb_bg_pane_g5

0x39de,	// (0x000707e7) pinb_bg_pane_g6

0x39de,	// (0x000707e7) pinb_bg_pane_g7

0x39de,	// (0x000707e7) pinb_bg_pane_g8

0x39de,	// (0x000707e7) pinb_bg_pane_g9

0x39de,	// (0x000707e7) pinb_bg_pane_g10

0x0009,

0xf0c5,	// (0x0007bece) pinb_bg_pane_g

0x3069,	// (0x0006fe72) grid_pinb_pane

0x3069,	// (0x0006fe72) list_pinb_pane

0x3294,	// (0x0007009d) scroll_pane_cp01_ParamLimits

0x3294,	// (0x0007009d) scroll_pane_cp01

0x39e8,	// (0x000707f1) find_pinb_pane_g1_ParamLimits

0x39e8,	// (0x000707f1) find_pinb_pane_g1

0x3a00,	// (0x00070809) find_pinb_pane_t1

0x3a12,	// (0x0007081b) find_pinb_pane_t2

0x0001,

0xf0df,	// (0x0007bee8) find_pinb_pane_t

0x3a27,	// (0x00070830) input_focus_pane_cp01_ParamLimits

0x3a27,	// (0x00070830) input_focus_pane_cp01

0x3a33,	// (0x0007083c) cell_pinb_pane_ParamLimits

0x3a33,	// (0x0007083c) cell_pinb_pane

0xb74e,	// (0x00078557) cell_pinb_pane_g1_ParamLimits

0xb74e,	// (0x00078557) cell_pinb_pane_g1

0xb75c,	// (0x00078565) cell_pinb_pane_g2_ParamLimits

0xb75c,	// (0x00078565) cell_pinb_pane_g2

0xb75c,	// (0x00078565) cell_pinb_pane_g3_ParamLimits

0xb75c,	// (0x00078565) cell_pinb_pane_g3

0x0002,

0xf0e4,	// (0x0007beed) cell_pinb_pane_g_ParamLimits

0xf0e4,	// (0x0007beed) cell_pinb_pane_g

0x376b,	// (0x00070574) grid_highlight_pane_cp01

0x3a33,	// (0x0007083c) list_pinb_item_pane_ParamLimits

0x3a33,	// (0x0007083c) list_pinb_item_pane

0x3069,	// (0x0006fe72) list_highlight_pane_cp02

0xb76a,	// (0x00078573) list_pinb_item_pane_g1_ParamLimits

0xb76a,	// (0x00078573) list_pinb_item_pane_g1

0xb75c,	// (0x00078565) list_pinb_item_pane_g2_ParamLimits

0xb75c,	// (0x00078565) list_pinb_item_pane_g2

0xb74e,	// (0x00078557) list_pinb_item_pane_g3_ParamLimits

0xb74e,	// (0x00078557) list_pinb_item_pane_g3

0xb75c,	// (0x00078565) list_pinb_item_pane_g4_ParamLimits

0xb75c,	// (0x00078565) list_pinb_item_pane_g4

0x0003,

0xf0eb,	// (0x0007bef4) list_pinb_item_pane_g_ParamLimits

0xf0eb,	// (0x0007bef4) list_pinb_item_pane_g

0xb778,	// (0x00078581) list_pinb_item_pane_t1_ParamLimits

0xb778,	// (0x00078581) list_pinb_item_pane_t1

0x3a5f,	// (0x00070868) calc_display_pane

0x3a84,	// (0x0007088d) calc_paper_pane

0x3aa7,	// (0x000708b0) grid_calc_pane

0x376b,	// (0x00070574) bg_list_pane_cp01

0x3ad5,	// (0x000708de) clock_g1

0x3add,	// (0x000708e6) clock_g2

0x0001,

0xf0f4,	// (0x0007befd) clock_g

0x3ae5,	// (0x000708ee) clock_t1_ParamLimits

0x3ae5,	// (0x000708ee) clock_t1

0x3afa,	// (0x00070903) clock_t2_ParamLimits

0x3afa,	// (0x00070903) clock_t2

0x3b0c,	// (0x00070915) clock_t3_ParamLimits

0x3b0c,	// (0x00070915) clock_t3

0x3b1e,	// (0x00070927) clock_t4_ParamLimits

0x3b1e,	// (0x00070927) clock_t4

0x3b30,	// (0x00070939) clock_t5_ParamLimits

0x3b30,	// (0x00070939) clock_t5

0x3b45,	// (0x0007094e) clock_t6_ParamLimits

0x3b45,	// (0x0007094e) clock_t6

0x3b57,	// (0x00070960) clock_t7_ParamLimits

0x3b57,	// (0x00070960) clock_t7

0x3b69,	// (0x00070972) clock_t8_ParamLimits

0x3b69,	// (0x00070972) clock_t8

0x3b7d,	// (0x00070986) clock_t9_ParamLimits

0x3b7d,	// (0x00070986) clock_t9

0x0008,

0xf0f9,	// (0x0007bf02) clock_t_ParamLimits

0xf0f9,	// (0x0007bf02) clock_t

0xb794,	// (0x0007859d) popup_clock_analogue_window_cp02

0xb794,	// (0x0007859d) popup_clock_digital_window_cp01

0x376b,	// (0x00070574) listscroll_help_pane

0x376b,	// (0x00070574) phob_pre_status_pane

0xb79c,	// (0x000785a5) grid_qdial_pane

0x39c6,	// (0x000707cf) listscroll_mce_pane

0x39c6,	// (0x000707cf) bg_notes_pane

0xb7a6,	// (0x000785af) list_notes_pane

0x3b91,	// (0x0007099a) scroll_pane_cp06

0xb7b4,	// (0x000785bd) bg_calc_paper_pane

0xb7c8,	// (0x000785d1) list_calc_pane

0xb7e2,	// (0x000785eb) bg_calc_display_pane

0x3ba5,	// (0x000709ae) calc_display_pane_t1

0x3bba,	// (0x000709c3) calc_display_pane_t2

0xb7ee,	// (0x000785f7) calc_display_pane_t3

0x0002,

0xf10c,	// (0x0007bf15) calc_display_pane_t

0x3bcf,	// (0x000709d8) cell_calc_pane_ParamLimits

0x3bcf,	// (0x000709d8) cell_calc_pane

0xb800,	// (0x00078609) bg_calc_paper_pane_g1

0xb80c,	// (0x00078615) bg_calc_paper_pane_g2

0xb818,	// (0x00078621) bg_calc_paper_pane_g3

0xb824,	// (0x0007862d) bg_calc_paper_pane_g4

0xb830,	// (0x00078639) bg_calc_paper_pane_g5

0x3c04,	// (0x00070a0d) bg_calc_paper_pane_g6

0x3c13,	// (0x00070a1c) bg_calc_paper_pane_g7

0x3c22,	// (0x00070a2b) bg_calc_paper_pane_g8

0x0007,

0xf113,	// (0x0007bf1c) bg_calc_paper_pane_g

0x3c35,	// (0x00070a3e) calc_bg_paper_pane_g9

0x3c48,	// (0x00070a51) list_calc_item_pane_ParamLimits

0x3c48,	// (0x00070a51) list_calc_item_pane

0xb83c,	// (0x00078645) list_calc_item_pane_g1

0xb849,	// (0x00078652) list_calc_item_pane_t1_ParamLimits

0xb849,	// (0x00078652) list_calc_item_pane_t1

0x3c60,	// (0x00070a69) list_calc_item_pane_t2_ParamLimits

0x3c60,	// (0x00070a69) list_calc_item_pane_t2

0x0001,

0xf124,	// (0x0007bf2d) list_calc_item_pane_t_ParamLimits

0xf124,	// (0x0007bf2d) list_calc_item_pane_t

0x39de,	// (0x000707e7) cell_calc_pane_g1

0xb85b,	// (0x00078664) grid_highlight_pane_cp02

0x1873,	// (0x0006e67c) bg_calc_display_pane_g1

0x3c92,	// (0x00070a9b) bg_calc_display_pane_g2

0x3c9c,	// (0x00070aa5) bg_calc_display_pane_g3

0x0002,

0xf12e,	// (0x0007bf37) bg_calc_display_pane_g

0x3ca5,	// (0x00070aae) cell_qdial_pane_ParamLimits

0x3ca5,	// (0x00070aae) cell_qdial_pane

0x3cb9,	// (0x00070ac2) cell_qdial_pane_g1_ParamLimits

0x3cb9,	// (0x00070ac2) cell_qdial_pane_g1

0x3ccf,	// (0x00070ad8) cell_qdial_pane_g2_ParamLimits

0x3ccf,	// (0x00070ad8) cell_qdial_pane_g2

0xb87d,	// (0x00078686) cell_qdial_pane_g3_ParamLimits

0xb87d,	// (0x00078686) cell_qdial_pane_g3

0x0003,

0xf135,	// (0x0007bf3e) cell_qdial_pane_g_ParamLimits

0xf135,	// (0x0007bf3e) cell_qdial_pane_g

0x3cf6,	// (0x00070aff) cell_qdial_pane_t1_ParamLimits

0x3cf6,	// (0x00070aff) cell_qdial_pane_t1

0x3d0e,	// (0x00070b17) cell_qdial_pane_t2_ParamLimits

0x3d0e,	// (0x00070b17) cell_qdial_pane_t2

0x3d21,	// (0x00070b2a) cell_qdial_pane_t3_ParamLimits

0x3d21,	// (0x00070b2a) cell_qdial_pane_t3

0x0002,

0xf13e,	// (0x0007bf47) cell_qdial_pane_t_ParamLimits

0xf13e,	// (0x0007bf47) cell_qdial_pane_t

0x376b,	// (0x00070574) grid_highlight_pane_cp04

0xb889,	// (0x00078692) thumbnail_qdial_pane_ParamLimits

0xb889,	// (0x00078692) thumbnail_qdial_pane

0xb8e5,	// (0x000786ee) list_help_pane

0xb8ee,	// (0x000786f7) scroll_pane_cp02

0x195e,	// (0x0006e767) help_list_pane_t1_ParamLimits

0x195e,	// (0x0006e767) help_list_pane_t1

0xb8f7,	// (0x00078700) bg_notes_pane_g2

0xb8ff,	// (0x00078708) bg_notes_pane_g3

0xb907,	// (0x00078710) notes_bg_pane_g1

0xb90f,	// (0x00078718) notes_bg_pane_g4

0xb917,	// (0x00078720) notes_bg_pane_g5

0xb91f,	// (0x00078728) notes_bg_pane_g6

0xb927,	// (0x00078730) notes_bg_pane_g7

0xb92f,	// (0x00078738) notes_bg_pane_g8

0xb937,	// (0x00078740) notes_bg_pane_g9

0x0006,

0xf15c,	// (0x0007bf65) notes_bg_pane_g

0x3d34,	// (0x00070b3d) list_notes_text_pane_ParamLimits

0x3d34,	// (0x00070b3d) list_notes_text_pane

0xb93f,	// (0x00078748) list_notes_text_pane_g1

0x2830,	// (0x0006f639) list_notes_text_pane_t1

0x3d49,	// (0x00070b52) listscroll_cale_week_pane

0x3d75,	// (0x00070b7e) bg_cale_heading_pane

0xb962,	// (0x0007876b) bg_cale_pane_cp01

0x3d8d,	// (0x00070b96) cale_week_corner_pane

0x3dac,	// (0x00070bb5) cale_week_day_heading_pane

0x3dc9,	// (0x00070bd2) cale_week_scroll_pane_g1

0x3ddc,	// (0x00070be5) cale_week_scroll_pane_g2

0x3df4,	// (0x00070bfd) cale_week_scroll_pane_g3

0x3e0c,	// (0x00070c15) cale_week_scroll_pane_g4

0x3e24,	// (0x00070c2d) cale_week_scroll_pane_g5

0x3e44,	// (0x00070c4d) cale_week_scroll_pane_g6

0x3e64,	// (0x00070c6d) cale_week_scroll_pane_g7

0x3e84,	// (0x00070c8d) cale_week_scroll_pane_g8

0x3ea8,	// (0x00070cb1) cale_week_scroll_pane_g9

0x3ec0,	// (0x00070cc9) cale_week_scroll_pane_g10

0x3ed8,	// (0x00070ce1) cale_week_scroll_pane_g11

0x3ef0,	// (0x00070cf9) cale_week_scroll_pane_g12

0x3f08,	// (0x00070d11) cale_week_scroll_pane_g13

0x3f08,	// (0x00070d11) cale_week_scroll_pane_g14

0x3f08,	// (0x00070d11) cale_week_scroll_pane_g15

0x000f,

0xf16b,	// (0x0007bf74) cale_week_scroll_pane_g

0x3f44,	// (0x00070d4d) cale_week_time_pane

0x3f68,	// (0x00070d71) grid_cale_week_pane

0xb991,	// (0x0007879a) scroll_pane_cp08

0x3f8e,	// (0x00070d97) cell_cale_week_pane_ParamLimits

0x3f8e,	// (0x00070d97) cell_cale_week_pane

0x401c,	// (0x00070e25) cale_week_day_heading_pane_t1

0x4046,	// (0x00070e4f) cale_week_day_heading_pane_t2

0x4075,	// (0x00070e7e) cale_week_day_heading_pane_t3

0x40a4,	// (0x00070ead) cale_week_day_heading_pane_t4

0x40d3,	// (0x00070edc) cale_week_day_heading_pane_t5

0x410a,	// (0x00070f13) cale_week_day_heading_pane_t6

0x4141,	// (0x00070f4a) cale_week_day_heading_pane_t7

0x0006,

0xf18c,	// (0x0007bf95) cale_week_day_heading_pane_t

0xb9ae,	// (0x000787b7) bg_cale_side_pane

0x416b,	// (0x00070f74) cale_week_time_pane_t1

0x4185,	// (0x00070f8e) cale_week_time_pane_t2

0x419f,	// (0x00070fa8) cale_week_time_pane_t3

0x41b9,	// (0x00070fc2) cale_week_time_pane_t4

0x41d3,	// (0x00070fdc) cale_week_time_pane_t5

0x41ed,	// (0x00070ff6) cale_week_time_pane_t6

0x4207,	// (0x00071010) cale_week_time_pane_t7

0x4221,	// (0x0007102a) cale_week_time_pane_t8

0x0007,

0xf19b,	// (0x0007bfa4) cale_week_time_pane_t

0x423b,	// (0x00071044) cell_cale_week_pane_g2

0x425a,	// (0x00071063) cell_cale_week_pane_g3_ParamLimits

0x425a,	// (0x00071063) cell_cale_week_pane_g3

0xb9bc,	// (0x000787c5) grid_highlight_pane_cp07

0xb9c4,	// (0x000787cd) listscroll_gms_pane

0xb9ce,	// (0x000787d7) grid_gms_pane

0xb9d7,	// (0x000787e0) listscroll_gms_pane_g1

0xb9df,	// (0x000787e8) listscroll_gms_pane_g2

0x0001,

0xf1ac,	// (0x0007bfb5) listscroll_gms_pane_g

0x4272,	// (0x0007107b) scroll_pane_cp010

0x427d,	// (0x00071086) cell_gms_pane_ParamLimits

0x427d,	// (0x00071086) cell_gms_pane

0x4290,	// (0x00071099) cell_gms_pane_g1

0xb9e7,	// (0x000787f0) cell_gms_pane_g2

0xb93f,	// (0x00078748) cell_gms_pane_g3

0xb9ef,	// (0x000787f8) cell_gms_pane_g4

0x0003,

0xf1b1,	// (0x0007bfba) cell_gms_pane_g

0xb9f8,	// (0x00078801) grid_highlight_pane_cp09

0x614c,	// (0x00072f55) phob_pre_status_pane_g1

0x6154,	// (0x00072f5d) phob_pre_status_pane_g2

0x615c,	// (0x00072f65) phob_pre_status_pane_g3

0x6164,	// (0x00072f6d) phob_pre_status_pane_g4

0x0004,

0xf575,	// (0x0007c37e) phob_pre_status_pane_g

0x6174,	// (0x00072f7d) phob_pre_status_pane_t1

0x6182,	// (0x00072f8b) phob_pre_status_pane_t2

0x6192,	// (0x00072f9b) phob_pre_status_pane_t3

0x0002,

0xf580,	// (0x0007c389) phob_pre_status_pane_t

0xba00,	// (0x00078809) bg_list_pane_cp05

0x42a0,	// (0x000710a9) grid_vorec_pane

0x42a8,	// (0x000710b1) vorec_t1

0x42b6,	// (0x000710bf) vorec_t2

0x42c4,	// (0x000710cd) vorec_t3

0x42d2,	// (0x000710db) vorec_t4

0xb4e1,	// (0x000782ea) vorec_t5

0xb4ef,	// (0x000782f8) vorec_t6

0x0004,

0xf1ba,	// (0x0007bfc3) vorec_t

0xb4fd,	// (0x00078306) wait_bar_pane_cp01

0x42ee,	// (0x000710f7) cell_vorec_pane_ParamLimits

0x42ee,	// (0x000710f7) cell_vorec_pane

0xba08,	// (0x00078811) cell_vorec_pane_g1

0x376b,	// (0x00070574) grid_highlight_pane_cp05

0x3294,	// (0x0007009d) cams_zoom_pane

0x3294,	// (0x0007009d) image_vga_pane

0xb74e,	// (0x00078557) main_camera_pane_g1

0xb74e,	// (0x00078557) main_camera_pane_g2

0xb74e,	// (0x00078557) main_camera_pane_g3

0xb74e,	// (0x00078557) main_camera_pane_g4

0xb74e,	// (0x00078557) main_camera_pane_g5

0xb74e,	// (0x00078557) main_camera_pane_g6

0xb74e,	// (0x00078557) main_camera_pane_g7

0x0007,

0xf1c5,	// (0x0007bfce) main_camera_pane_g

0xba12,	// (0x0007881b) main_camera_pane_t1

0xba12,	// (0x0007881b) main_camera_pane_t2

0x0001,

0xf1d6,	// (0x0007bfdf) main_camera_pane_t

0x4315,	// (0x0007111e) cams_zoom_pane_cp_ParamLimits

0x4315,	// (0x0007111e) cams_zoom_pane_cp

0x4349,	// (0x00071152) image_cif_pane_ParamLimits

0x4349,	// (0x00071152) image_cif_pane

0x3069,	// (0x0006fe72) image_subqcif_pane

0x435b,	// (0x00071164) main_video_pane_g1_ParamLimits

0x435b,	// (0x00071164) main_video_pane_g1

0x4389,	// (0x00071192) main_video_pane_g2_ParamLimits

0x4389,	// (0x00071192) main_video_pane_g2

0x43c3,	// (0x000711cc) main_video_pane_g3_ParamLimits

0x43c3,	// (0x000711cc) main_video_pane_g3

0x43c3,	// (0x000711cc) main_video_pane_g4_ParamLimits

0x43c3,	// (0x000711cc) main_video_pane_g4

0x43f7,	// (0x00071200) main_video_pane_g5_ParamLimits

0x43f7,	// (0x00071200) main_video_pane_g5

0xba26,	// (0x0007882f) main_video_pane_g6_ParamLimits

0xba26,	// (0x0007882f) main_video_pane_g6

0x0006,

0xf1db,	// (0x0007bfe4) main_video_pane_g_ParamLimits

0xf1db,	// (0x0007bfe4) main_video_pane_g

0x4413,	// (0x0007121c) main_video_pane_t1_ParamLimits

0x4413,	// (0x0007121c) main_video_pane_t1

0xba40,	// (0x00078849) cams_zoom_pane_g1

0xba40,	// (0x00078849) cams_zoom_pane_g2

0xba40,	// (0x00078849) cams_zoom_pane_g3

0xba40,	// (0x00078849) cams_zoom_pane_g4

0x0003,

0xf1ea,	// (0x0007bff3) cams_zoom_pane_g

0x446b,	// (0x00071274) grid_cams_pane

0x4485,	// (0x0007128e) linegrid_cams_pane

0x4499,	// (0x000712a2) cell_cams_pane_ParamLimits

0x4499,	// (0x000712a2) cell_cams_pane

0xba4a,	// (0x00078853) cams_burst_image_pane

0xba52,	// (0x0007885b) cell_cams_pane_g1

0x376b,	// (0x00070574) grid_highlight_pane_cp03

0x39de,	// (0x000707e7) mp_bg_pane_g1

0x3069,	// (0x0006fe72) bg_list_pane_cp03

0x3069,	// (0x0006fe72) bg_mp_pane

0x3069,	// (0x0006fe72) grid_mp_pane

0xba40,	// (0x00078849) media_player_g1

0xbf9d,	// (0x00078da6) media_player_t1

0xbf9d,	// (0x00078da6) media_player_t2

0xbf9d,	// (0x00078da6) media_player_t3

0xbf9d,	// (0x00078da6) media_player_t4

0xbf9d,	// (0x00078da6) media_player_t5

0xbf9d,	// (0x00078da6) media_player_t6

0xbf9d,	// (0x00078da6) media_player_t7

0x0006,

0xf55f,	// (0x0007c368) media_player_t

0x3069,	// (0x0006fe72) wait_bar_pane_cp02

0xf544,	// (0x0007c34d) main_usb_pane_t

0xc27c,	// (0x00079085) cell_mp_pane

0x39de,	// (0x000707e7) cell_mp_pane_g1

0x376b,	// (0x00070574) grid_highlight_pane_cp06

0xba5a,	// (0x00078863) grid_skin_colour_pane

0xba62,	// (0x0007886b) list_highlight_pane_cp03

0x44b9,	// (0x000712c2) skin_g1

0xba6a,	// (0x00078873) skin_t1

0xba79,	// (0x00078882) skin_t2

0x0001,

0xf218,	// (0x0007c021) skin_t

0x44c1,	// (0x000712ca) cell_skin_colour_pane_ParamLimits

0x44c1,	// (0x000712ca) cell_skin_colour_pane

0xba87,	// (0x00078890) cell_skin_colour_pane_g1

0x453a,	// (0x00071343) call_video_g1_ParamLimits

0x453a,	// (0x00071343) call_video_g1

0x4556,	// (0x0007135f) call_video_g2_ParamLimits

0x4556,	// (0x0007135f) call_video_g2

0x0001,

0xf21d,	// (0x0007c026) call_video_g_ParamLimits

0xf21d,	// (0x0007c026) call_video_g

0x45a8,	// (0x000713b1) call_video_uplink_pane_cp1_ParamLimits

0x45a8,	// (0x000713b1) call_video_uplink_pane_cp1

0xba99,	// (0x000788a2) call_video_uplink_pane_cp2

0x4647,	// (0x00071450) video_down_crop_pane_ParamLimits

0x4647,	// (0x00071450) video_down_crop_pane

0x473e,	// (0x00071547) video_down_pane_ParamLimits

0x473e,	// (0x00071547) video_down_pane

0xbaa1,	// (0x000788aa) video_down_subqcif_pane_ParamLimits

0xbaa1,	// (0x000788aa) video_down_subqcif_pane

0xbab9,	// (0x000788c2) video_down_subqcif_pane_cp_ParamLimits

0xbab9,	// (0x000788c2) video_down_subqcif_pane_cp

0xbadf,	// (0x000788e8) im_reading_pane_ParamLimits

0xbadf,	// (0x000788e8) im_reading_pane

0x484e,	// (0x00071657) im_writing_pane_ParamLimits

0x484e,	// (0x00071657) im_writing_pane

0x4864,	// (0x0007166d) im_reading_pane_t1

0xbaf9,	// (0x00078902) list_im_pane

0xbb0a,	// (0x00078913) scroll_pane_cp07

0x489d,	// (0x000716a6) im_writing_pane_t1_ParamLimits

0x489d,	// (0x000716a6) im_writing_pane_t1

0xbb23,	// (0x0007892c) im_writing_pane_t2_ParamLimits

0xbb23,	// (0x0007892c) im_writing_pane_t2

0x0001,

0xf227,	// (0x0007c030) im_writing_pane_t_ParamLimits

0xf227,	// (0x0007c030) im_writing_pane_t

0x376b,	// (0x00070574) input_focus_pane_cp04

0x376b,	// (0x00070574) input_focus_pane_cp05

0x48b2,	// (0x000716bb) list_im_single_pane_ParamLimits

0x48b2,	// (0x000716bb) list_im_single_pane

0x48c6,	// (0x000716cf) list_single_im_pane_t1

0xba00,	// (0x00078809) blid_accuracy_pane

0xba00,	// (0x00078809) blid_compass_pane

0x13b6,	// (0x0006e1bf) main_location_t1

0x13b6,	// (0x0006e1bf) main_location_t2

0x13b6,	// (0x0006e1bf) main_location_t3

0x0002,

0xf56e,	// (0x0007c377) main_location_t

0x376b,	// (0x00070574) aid_levels_location

0x39de,	// (0x000707e7) blid_accuracy_pane_g1

0x39de,	// (0x000707e7) blid_accuracy_pane_g2

0x0001,

0xf276,	// (0x0007c07f) blid_accuracy_pane_g

0xbb6b,	// (0x00078974) wml_content_pane

0xbba9,	// (0x000789b2) wml_button_pane_ParamLimits

0xbba9,	// (0x000789b2) wml_button_pane

0x48d5,	// (0x000716de) wml_list_single_large_pane_ParamLimits

0x48d5,	// (0x000716de) wml_list_single_large_pane

0x48ea,	// (0x000716f3) wml_list_single_medium_pane_ParamLimits

0x48ea,	// (0x000716f3) wml_list_single_medium_pane

0x4900,	// (0x00071709) wml_list_single_small_pane_ParamLimits

0x4900,	// (0x00071709) wml_list_single_small_pane

0xbbbd,	// (0x000789c6) wml_selection_box_pane_ParamLimits

0xbbbd,	// (0x000789c6) wml_selection_box_pane

0xbbd0,	// (0x000789d9) wml_list_single_pane_t1

0xbbdf,	// (0x000789e8) wml_list_single_medium_pane_t1

0xbbee,	// (0x000789f7) wml_list_single_large_pane_t1

0xbbfd,	// (0x00078a06) input_focus_pane_cp02_ParamLimits

0xbbfd,	// (0x00078a06) input_focus_pane_cp02

0xbc10,	// (0x00078a19) wml_selection_box_pane_g1

0xbc19,	// (0x00078a22) wml_selection_box_pane_t1_ParamLimits

0xbc19,	// (0x00078a22) wml_selection_box_pane_t1

0x39c6,	// (0x000707cf) bg_wml_button_pane_ParamLimits

0x39c6,	// (0x000707cf) bg_wml_button_pane

0xbc31,	// (0x00078a3a) wml_button_pane_g1

0xbc39,	// (0x00078a42) wml_button_pane_t1

0xbc31,	// (0x00078a3a) wml_button_bg_pane_g1

0xbc49,	// (0x00078a52) wml_button_bg_pane_g2

0xbc51,	// (0x00078a5a) wml_button_bg_pane_g3

0xbc59,	// (0x00078a62) wml_button_bg_pane_g4

0xbc61,	// (0x00078a6a) wml_button_bg_pane_g5

0xbc69,	// (0x00078a72) wml_button_bg_pane_g6

0xbc71,	// (0x00078a7a) wml_button_bg_pane_g7

0xbc79,	// (0x00078a82) wml_button_bg_pane_g8

0xbc81,	// (0x00078a8a) wml_button_bg_pane_g9

0x0008,

0xf22c,	// (0x0007c035) wml_button_bg_pane_g

0x4918,	// (0x00071721) bg_list_pane_cp02

0xbc89,	// (0x00078a92) mce_header_pane_ParamLimits

0xbc89,	// (0x00078a92) mce_header_pane

0xbc9f,	// (0x00078aa8) mce_icon_pane

0xbc9f,	// (0x00078aa8) mce_image_pane

0xbca8,	// (0x00078ab1) mce_text_pane_ParamLimits

0xbca8,	// (0x00078ab1) mce_text_pane

0x4920,	// (0x00071729) scroll_pane_cp03

0xbba1,	// (0x000789aa) scroll_pane_cp04

0xbcbb,	// (0x00078ac4) scroll_pane_cp05_ParamLimits

0xbcbb,	// (0x00078ac4) scroll_pane_cp05

0x492a,	// (0x00071733) mce_header_field_pane_ParamLimits

0x492a,	// (0x00071733) mce_header_field_pane

0x4941,	// (0x0007174a) mce_header_field_pane_2_ParamLimits

0x4941,	// (0x0007174a) mce_header_field_pane_2

0x4957,	// (0x00071760) mce_header_field_pane_3

0x495f,	// (0x00071768) list_single_mce_message_pane_ParamLimits

0x495f,	// (0x00071768) list_single_mce_message_pane

0x4974,	// (0x0007177d) list_single_mce_smart_pane_ParamLimits

0x4974,	// (0x0007177d) list_single_mce_smart_pane

0xbcc7,	// (0x00078ad0) input_focus_pane_cp03

0xbcd0,	// (0x00078ad9) list_header_data_pane

0x4994,	// (0x0007179d) mce_header_field_pane_t1

0x49a4,	// (0x000717ad) list_single_mce_header_pane_ParamLimits

0x49a4,	// (0x000717ad) list_single_mce_header_pane

0xbcd8,	// (0x00078ae1) list_single_mce_header_pane_t1

0xbce7,	// (0x00078af0) list_single_mce_message_pane_g1

0xbcef,	// (0x00078af8) list_single_mce_message_pane_t1

0x49de,	// (0x000717e7) bg_cale_heading_pane_cp01_ParamLimits

0x49de,	// (0x000717e7) bg_cale_heading_pane_cp01

0xbcfd,	// (0x00078b06) bg_cale_pane_cp02_ParamLimits

0xbcfd,	// (0x00078b06) bg_cale_pane_cp02

0x4a18,	// (0x00071821) cale_month_corner_pane

0x4a37,	// (0x00071840) cale_month_day_heading_pane_ParamLimits

0x4a37,	// (0x00071840) cale_month_day_heading_pane

0x4a89,	// (0x00071892) cale_month_pane_g1_ParamLimits

0x4a89,	// (0x00071892) cale_month_pane_g1

0x4ab8,	// (0x000718c1) cale_month_pane_g2_ParamLimits

0x4ab8,	// (0x000718c1) cale_month_pane_g2

0x4ae8,	// (0x000718f1) cale_month_pane_g3_ParamLimits

0x4ae8,	// (0x000718f1) cale_month_pane_g3

0x4b24,	// (0x0007192d) cale_month_pane_g4_ParamLimits

0x4b24,	// (0x0007192d) cale_month_pane_g4

0x4b60,	// (0x00071969) cale_month_pane_g5_ParamLimits

0x4b60,	// (0x00071969) cale_month_pane_g5

0x4ba8,	// (0x000719b1) cale_month_pane_g6_ParamLimits

0x4ba8,	// (0x000719b1) cale_month_pane_g6

0x4bf4,	// (0x000719fd) cale_month_pane_g7_ParamLimits

0x4bf4,	// (0x000719fd) cale_month_pane_g7

0x4c48,	// (0x00071a51) cale_month_pane_g8_ParamLimits

0x4c48,	// (0x00071a51) cale_month_pane_g8

0x4c9c,	// (0x00071aa5) cale_month_pane_g9_ParamLimits

0x4c9c,	// (0x00071aa5) cale_month_pane_g9

0x4cee,	// (0x00071af7) cale_month_pane_g10_ParamLimits

0x4cee,	// (0x00071af7) cale_month_pane_g10

0x4d40,	// (0x00071b49) cale_month_pane_g11_ParamLimits

0x4d40,	// (0x00071b49) cale_month_pane_g11

0x4d92,	// (0x00071b9b) cale_month_pane_g12_ParamLimits

0x4d92,	// (0x00071b9b) cale_month_pane_g12

0x4de4,	// (0x00071bed) cale_month_pane_g13_ParamLimits

0x4de4,	// (0x00071bed) cale_month_pane_g13

0x000c,

0xf23f,	// (0x0007c048) cale_month_pane_g_ParamLimits

0xf23f,	// (0x0007c048) cale_month_pane_g

0x4e36,	// (0x00071c3f) cale_month_week_pane

0x4e5a,	// (0x00071c63) grid_cale_month_pane_ParamLimits

0x4e5a,	// (0x00071c63) grid_cale_month_pane

0x4ea3,	// (0x00071cac) cale_month_day_heading_pane_t1

0x4f29,	// (0x00071d32) cale_month_day_heading_pane_t2

0x4fa2,	// (0x00071dab) cale_month_day_heading_pane_t3

0x501b,	// (0x00071e24) cale_month_day_heading_pane_t4

0x509c,	// (0x00071ea5) cale_month_day_heading_pane_t5

0x5125,	// (0x00071f2e) cale_month_day_heading_pane_t6

0x51ae,	// (0x00071fb7) cale_month_day_heading_pane_t7

0x0006,

0xf25a,	// (0x0007c063) cale_month_day_heading_pane_t

0xb9ae,	// (0x000787b7) bg_cale_side_pane_cp01

0x523f,	// (0x00072048) cale_month_week_pane_t1

0x5258,	// (0x00072061) cale_month_week_pane_t2

0x5271,	// (0x0007207a) cale_month_week_pane_t3

0x528a,	// (0x00072093) cale_month_week_pane_t4

0x52a3,	// (0x000720ac) cale_month_week_pane_t5

0x52bc,	// (0x000720c5) cale_month_week_pane_t6

0x0005,

0xf269,	// (0x0007c072) cale_month_week_pane_t

0x52d5,	// (0x000720de) cell_cale_month_pane_ParamLimits

0x52d5,	// (0x000720de) cell_cale_month_pane

0xbd3c,	// (0x00078b45) cell_cale_month_pane_g1

0x5403,	// (0x0007220c) cell_cale_month_pane_t1_ParamLimits

0x5403,	// (0x0007220c) cell_cale_month_pane_t1

0xb9bc,	// (0x000787c5) grid_highlight_pane_cp08

0x39de,	// (0x000707e7) main_smil_g1

0x542f,	// (0x00072238) smil_status_pane

0xbd48,	// (0x00078b51) smil_text_pane

0x12ce,	// (0x0006e0d7) bg_popup_call3_rect_pane_g8

0x12d6,	// (0x0006e0df) bg_popup_call3_rect_pane_g9

0x0008,

0xf502,	// (0x0007c30b) bg_popup_call3_rect_pane_g

0x148d,	// (0x0006e296) smil_status_volume_pane_g1

0xbd52,	// (0x00078b5b) smil_status_pane_t1

0xccda,	// (0x00079ae3) volume_smil_pane

0xbd69,	// (0x00078b72) list_smil_text_pane

0x5442,	// (0x0007224b) scroll_pane_cp011

0x544d,	// (0x00072256) smil_text_list_pane_t1_ParamLimits

0x544d,	// (0x00072256) smil_text_list_pane_t1

0xbd73,	// (0x00078b7c) aid_volume_smil_ParamLimits

0xbd73,	// (0x00078b7c) aid_volume_smil

0x39de,	// (0x000707e7) smil_volume_pane_g1

0x39de,	// (0x000707e7) smil_volume_pane_g2

0x0001,

0xf276,	// (0x0007c07f) smil_volume_pane_g

0x3d49,	// (0x00070b52) listscroll_cale_day_pane

0xbd95,	// (0x00078b9e) bg_cale_pane

0xbdad,	// (0x00078bb6) list_cale_pane

0xbdd0,	// (0x00078bd9) scroll_pane_cp09

0xbde1,	// (0x00078bea) cale_bg_pane_g1

0xbde9,	// (0x00078bf2) cale_bg_pane_g2

0xbdf1,	// (0x00078bfa) cale_bg_pane_g3

0xbdf9,	// (0x00078c02) cale_bg_pane_g4

0xbe01,	// (0x00078c0a) cale_bg_pane_g5

0xbe09,	// (0x00078c12) cale_bg_pane_g6

0xbe11,	// (0x00078c1a) cale_bg_pane_g7

0xbe19,	// (0x00078c22) cale_bg_pane_g8

0xbe21,	// (0x00078c2a) cale_bg_pane_g9

0x0008,

0xf27b,	// (0x0007c084) cale_bg_pane_g

0x5489,	// (0x00072292) list_cale_time_pane_ParamLimits

0x5489,	// (0x00072292) list_cale_time_pane

0xbe31,	// (0x00078c3a) list_cale_time_pane_g1_ParamLimits

0xbe31,	// (0x00078c3a) list_cale_time_pane_g1

0xbe3d,	// (0x00078c46) list_cale_time_pane_g2_ParamLimits

0xbe3d,	// (0x00078c46) list_cale_time_pane_g2

0x549e,	// (0x000722a7) list_cale_time_pane_g3_ParamLimits

0x549e,	// (0x000722a7) list_cale_time_pane_g3

0x54ac,	// (0x000722b5) list_cale_time_pane_g4_ParamLimits

0x54ac,	// (0x000722b5) list_cale_time_pane_g4

0x54ba,	// (0x000722c3) list_cale_time_pane_g5_ParamLimits

0x54ba,	// (0x000722c3) list_cale_time_pane_g5

0x0005,

0xf28e,	// (0x0007c097) list_cale_time_pane_g_ParamLimits

0xf28e,	// (0x0007c097) list_cale_time_pane_g

0xbe57,	// (0x00078c60) list_cale_time_pane_t1_ParamLimits

0xbe57,	// (0x00078c60) list_cale_time_pane_t1

0xbe7f,	// (0x00078c88) list_cale_time_pane_t2_ParamLimits

0xbe7f,	// (0x00078c88) list_cale_time_pane_t2

0x571c,	// (0x00072525) aid_blid_cardinal_pane

0x575a,	// (0x00072563) compass_pane_t4

0xbea7,	// (0x00078cb0) list_cale_time_pane_t4_ParamLimits

0xbea7,	// (0x00078cb0) list_cale_time_pane_t4

0x5768,	// (0x00072571) compass_pane_t5

0x5776,	// (0x0007257f) compass_pane_t6

0x5784,	// (0x0007258d) compass_pane_t7

0xc3c1,	// (0x000791ca) navi_pane_cc_t1

0xc5b0,	// (0x000793b9) aid_phob_thumbnail_center_pane

0x5afc,	// (0x00072905) main_postcard_pane_g4_ParamLimits

0x0002,

0xf29b,	// (0x0007c0a4) list_cale_time_pane_t_ParamLimits

0xf29b,	// (0x0007c0a4) list_cale_time_pane_t

0x339e,	// (0x000701a7) bg_popup_window_pane_cp02_ParamLimits

0x339e,	// (0x000701a7) bg_popup_window_pane_cp02

0xbecf,	// (0x00078cd8) heading_pane_cp01_ParamLimits

0xbecf,	// (0x00078cd8) heading_pane_cp01

0xbedb,	// (0x00078ce4) loc_req_pane_ParamLimits

0xbedb,	// (0x00078ce4) loc_req_pane

0xbeeb,	// (0x00078cf4) loc_type_pane_ParamLimits

0xbeeb,	// (0x00078cf4) loc_type_pane

0xbefd,	// (0x00078d06) loc_type_pane_t1_ParamLimits

0xbefd,	// (0x00078d06) loc_type_pane_t1

0xbf0f,	// (0x00078d18) loc_type_pane_t2_ParamLimits

0xbf0f,	// (0x00078d18) loc_type_pane_t2

0xbf21,	// (0x00078d2a) loc_type_pane_t3_ParamLimits

0xbf21,	// (0x00078d2a) loc_type_pane_t3

0x0002,

0xf2a2,	// (0x0007c0ab) loc_type_pane_t_ParamLimits

0xf2a2,	// (0x0007c0ab) loc_type_pane_t

0xbf33,	// (0x00078d3c) list_loc_req_pane

0xbf3d,	// (0x00078d46) scroll_pane_cp012

0x54c8,	// (0x000722d1) list_single_loc_request_popup_menu_pane_ParamLimits

0x54c8,	// (0x000722d1) list_single_loc_request_popup_menu_pane

0xbf48,	// (0x00078d51) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xbf48,	// (0x00078d51) list_single_loc_request_popup_menu_pane_g1

0xbf54,	// (0x00078d5d) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xbf54,	// (0x00078d5d) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf2a9,	// (0x0007c0b2) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf2a9,	// (0x0007c0b2) list_single_loc_request_popup_menu_pane_g

0xbf60,	// (0x00078d69) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xbf60,	// (0x00078d69) list_single_loc_request_popup_menu_pane_t1

0x39c6,	// (0x000707cf) bg_popup_window_pane_cp03_ParamLimits

0x39c6,	// (0x000707cf) bg_popup_window_pane_cp03

0x19db,	// (0x0006e7e4) heading_loc_req_pane_ParamLimits

0x19db,	// (0x0006e7e4) heading_loc_req_pane

0x54d5,	// (0x000722de) popup_dyc_status_message_window_g1_ParamLimits

0x54d5,	// (0x000722de) popup_dyc_status_message_window_g1

0x54e9,	// (0x000722f2) popup_dyc_status_message_window_t1_ParamLimits

0x54e9,	// (0x000722f2) popup_dyc_status_message_window_t1

0x54fe,	// (0x00072307) popup_dyc_status_message_window_t2_ParamLimits

0x54fe,	// (0x00072307) popup_dyc_status_message_window_t2

0x5513,	// (0x0007231c) popup_dyc_status_message_window_t3_ParamLimits

0x5513,	// (0x0007231c) popup_dyc_status_message_window_t3

0x0002,

0xf2ae,	// (0x0007c0b7) popup_dyc_status_message_window_t_ParamLimits

0xf2ae,	// (0x0007c0b7) popup_dyc_status_message_window_t

0x376b,	// (0x00070574) bg_heading_pane_cp01

0xbf76,	// (0x00078d7f) heading_loc_req_pane_g1

0xbf7e,	// (0x00078d87) heading_loc_req_pane_g2

0xbf86,	// (0x00078d8f) heading_loc_req_pane_g3

0x0002,

0xf2b5,	// (0x0007c0be) heading_loc_req_pane_g

0xbf8e,	// (0x00078d97) heading_loc_req_pane_t1

0xbfad,	// (0x00078db6) bg_popup_sub_pane_cp01_ParamLimits

0xbfad,	// (0x00078db6) bg_popup_sub_pane_cp01

0xbfbb,	// (0x00078dc4) popup_cale_events_window_g1_ParamLimits

0xbfbb,	// (0x00078dc4) popup_cale_events_window_g1

0xbfdb,	// (0x00078de4) popup_cale_events_window_g2_ParamLimits

0xbfdb,	// (0x00078de4) popup_cale_events_window_g2

0x0001,

0xf2d7,	// (0x0007c0e0) popup_cale_events_window_g_ParamLimits

0xf2d7,	// (0x0007c0e0) popup_cale_events_window_g

0xbffb,	// (0x00078e04) popup_cale_events_window_t1_ParamLimits

0xbffb,	// (0x00078e04) popup_cale_events_window_t1

0xc00d,	// (0x00078e16) popup_cale_events_window_t2_ParamLimits

0xc00d,	// (0x00078e16) popup_cale_events_window_t2

0xc04b,	// (0x00078e54) popup_cale_events_window_t3_ParamLimits

0xc04b,	// (0x00078e54) popup_cale_events_window_t3

0xc085,	// (0x00078e8e) popup_cale_events_window_t4_ParamLimits

0xc085,	// (0x00078e8e) popup_cale_events_window_t4

0x0003,

0xf2dc,	// (0x0007c0e5) popup_cale_events_window_t_ParamLimits

0xf2dc,	// (0x0007c0e5) popup_cale_events_window_t

0x553b,	// (0x00072344) call_type_pane

0x554b,	// (0x00072354) popup_call_status_window_g1

0x555f,	// (0x00072368) popup_call_status_window_g2

0x5573,	// (0x0007237c) popup_call_status_window_g3

0x0002,

0xf2e5,	// (0x0007c0ee) popup_call_status_window_g

0xc0bb,	// (0x00078ec4) call_type_pane_g1

0xc0c4,	// (0x00078ecd) call_type_pane_g2

0x0001,

0xf2ec,	// (0x0007c0f5) call_type_pane_g

0x376b,	// (0x00070574) bg_popup_sub_pane_cp02

0xc0cd,	// (0x00078ed6) listscroll_popup_wml_pane

0xc0d5,	// (0x00078ede) list_wml_pane

0xc0df,	// (0x00078ee8) scroll_pane_cp013

0xc0ea,	// (0x00078ef3) list_single_graphic_popup_wml_pane_ParamLimits

0xc0ea,	// (0x00078ef3) list_single_graphic_popup_wml_pane

0x39de,	// (0x000707e7) list_single_graphic_popup_wml_pane_g1

0xc0fe,	// (0x00078f07) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2f1,	// (0x0007c0fa) list_single_graphic_popup_wml_pane_g

0xc106,	// (0x00078f0f) list_single_graphic_popup_wml_pane_t1

0xc11c,	// (0x00078f25) aid_call_pane

0x39be,	// (0x000707c7) popup_clock_analogue_window_g1

0x39be,	// (0x000707c7) popup_clock_analogue_window_g2

0xc124,	// (0x00078f2d) popup_clock_analogue_window_g3

0xc124,	// (0x00078f2d) popup_clock_analogue_window_g4

0x39de,	// (0x000707e7) popup_clock_analogue_window_g5

0x0004,

0xf2f6,	// (0x0007c0ff) popup_clock_analogue_window_g

0xc12c,	// (0x00078f35) popup_clock_analogue_window_t1

0xc13a,	// (0x00078f43) clock_digital_number_pane_ParamLimits

0xc13a,	// (0x00078f43) clock_digital_number_pane

0xc146,	// (0x00078f4f) clock_digital_number_pane_cp02_ParamLimits

0xc146,	// (0x00078f4f) clock_digital_number_pane_cp02

0xc152,	// (0x00078f5b) clock_digital_number_pane_cp03_ParamLimits

0xc152,	// (0x00078f5b) clock_digital_number_pane_cp03

0xc15e,	// (0x00078f67) clock_digital_number_pane_cp04_ParamLimits

0xc15e,	// (0x00078f67) clock_digital_number_pane_cp04

0xc16e,	// (0x00078f77) clock_digital_separator_pane_ParamLimits

0xc16e,	// (0x00078f77) clock_digital_separator_pane

0xc17a,	// (0x00078f83) popup_clock_digital_window_t1

0x39de,	// (0x000707e7) clock_digital_number_pane_g1

0x39de,	// (0x000707e7) clock_digital_number_pane_g2

0x0001,

0xf276,	// (0x0007c07f) clock_digital_number_pane_g

0x39de,	// (0x000707e7) clock_digital_separator_pane_g1

0x39de,	// (0x000707e7) clock_digital_separator_pane_g2

0x0001,

0xf276,	// (0x0007c07f) clock_digital_separator_pane_g

0x376b,	// (0x00070574) bg_popup_window_pane_cp04

0xc197,	// (0x00078fa0) heading_pane_cp03

0xba00,	// (0x00078809) listscroll_popup_gms_pane

0x376b,	// (0x00070574) grid_large_graphic_popup_pane

0xc1a0,	// (0x00078fa9) listscroll_popup_gms_pane_g1

0xc1a9,	// (0x00078fb2) listscroll_popup_gms_pane_g2

0x0001,

0xf301,	// (0x0007c10a) listscroll_popup_gms_pane_g

0xc1b2,	// (0x00078fbb) scroll_pane_cp014

0x3a33,	// (0x0007083c) cell_large_graphic_popup_pane_ParamLimits

0x3a33,	// (0x0007083c) cell_large_graphic_popup_pane

0xb74e,	// (0x00078557) cell_large_graphic_popup_pane_g1_ParamLimits

0xb74e,	// (0x00078557) cell_large_graphic_popup_pane_g1

0xc1bb,	// (0x00078fc4) cell_large_graphic_popup_pane_g2_ParamLimits

0xc1bb,	// (0x00078fc4) cell_large_graphic_popup_pane_g2

0xc1c9,	// (0x00078fd2) cell_large_graphic_popup_pane_g3_ParamLimits

0xc1c9,	// (0x00078fd2) cell_large_graphic_popup_pane_g3

0xc1d7,	// (0x00078fe0) cell_large_graphic_popup_pane_g4_ParamLimits

0xc1d7,	// (0x00078fe0) cell_large_graphic_popup_pane_g4

0x0003,

0xf306,	// (0x0007c10f) cell_large_graphic_popup_pane_g_ParamLimits

0xf306,	// (0x0007c10f) cell_large_graphic_popup_pane_g

0x376b,	// (0x00070574) grid_highlight_pane_cp010

0x39de,	// (0x000707e7) bg_popup_call_pane_g1

0xc1e8,	// (0x00078ff1) list_single_graphic_popup_conf_pane_ParamLimits

0xc1e8,	// (0x00078ff1) list_single_graphic_popup_conf_pane

0xc1fb,	// (0x00079004) list_highlight_pane_cp01

0xc204,	// (0x0007900d) list_single_graphic_popup_conf_pane_g1

0xc20c,	// (0x00079015) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf30f,	// (0x0007c118) list_single_graphic_popup_conf_pane_g

0xc214,	// (0x0007901d) list_single_graphic_popup_conf_pane_t1

0xc222,	// (0x0007902b) linegrid_cams_pane_g1

0x5582,	// (0x0007238b) linegrid_cams_pane_g2

0xb93f,	// (0x00078748) linegrid_cams_pane_g3

0xc22b,	// (0x00079034) linegrid_cams_pane_g4

0x558b,	// (0x00072394) linegrid_cams_pane_g5

0x5594,	// (0x0007239d) linegrid_cams_pane_g6

0xb9ef,	// (0x000787f8) linegrid_cams_pane_g7

0x0006,

0xf314,	// (0x0007c11d) linegrid_cams_pane_g

0xc234,	// (0x0007903d) popup_clock_analogue_window

0xc234,	// (0x0007903d) popup_clock_digital_window

0x376b,	// (0x00070574) popup_phob_thumbnail_window

0x39de,	// (0x000707e7) call_video_uplink_pane_g1

0xc23d,	// (0x00079046) call_video_uplink_pane_g2

0x0001,

0xf323,	// (0x0007c12c) call_video_uplink_pane_g

0xc245,	// (0x0007904e) video_uplink_pane

0xc24d,	// (0x00079056) mce_image_pane_g1

0x559f,	// (0x000723a8) mce_image_pane_g2

0x55a9,	// (0x000723b2) mce_image_pane_g3

0x55b1,	// (0x000723ba) mce_image_pane_g4

0x55b9,	// (0x000723c2) mce_image_pane_g5

0x0004,

0xf328,	// (0x0007c131) mce_image_pane_g

0xc257,	// (0x00079060) control_top_pane_stacon_cp01_ParamLimits

0xc257,	// (0x00079060) control_top_pane_stacon_cp01

0xc26b,	// (0x00079074) uni_indicator_pane_stacon_cp01_ParamLimits

0xc26b,	// (0x00079074) uni_indicator_pane_stacon_cp01

0xc27c,	// (0x00079085) bg_popup_sub_pane_cp03

0xc286,	// (0x0007908f) chi_dic_find_pane

0x55c1,	// (0x000723ca) listscroll_chi_dic_pane

0xc28e,	// (0x00079097) main_pane_chidic_g1

0xc296,	// (0x0007909f) chi_dic_find_pane_t1

0xc2a4,	// (0x000790ad) find_chidic_pane

0xc2ad,	// (0x000790b6) chi_dic_list_pane_ParamLimits

0xc2ad,	// (0x000790b6) chi_dic_list_pane

0xc2be,	// (0x000790c7) scroll_pane_cp020

0xc2c6,	// (0x000790cf) find_chidic_pane_t1

0x376b,	// (0x00070574) input_focus_pane_cp06

0x55d5,	// (0x000723de) list_chi_dic_pane_ParamLimits

0x55d5,	// (0x000723de) list_chi_dic_pane

0x55e7,	// (0x000723f0) list_chi_dic_pane_t1_ParamLimits

0x55e7,	// (0x000723f0) list_chi_dic_pane_t1

0x376b,	// (0x00070574) list_highlight_pane_cp020

0xc2d5,	// (0x000790de) bg_cale_heading_pane_g1

0x55fa,	// (0x00072403) bg_cale_heading_pane_g2

0x5602,	// (0x0007240b) bg_cale_heading_pane_g3

0x560a,	// (0x00072413) bg_cale_heading_pane_g4

0x5614,	// (0x0007241d) bg_cale_heading_pane_g5

0x561e,	// (0x00072427) bg_cale_heading_pane_g6

0x5626,	// (0x0007242f) bg_cale_heading_pane_g7

0x562e,	// (0x00072437) bg_cale_heading_pane_g8

0x5638,	// (0x00072441) bg_cale_heading_pane_g9

0x0008,

0xf333,	// (0x0007c13c) bg_cale_heading_pane_g

0xc2d5,	// (0x000790de) bg_cale_side_pane_g1

0x5642,	// (0x0007244b) bg_cale_side_pane_g2

0x564a,	// (0x00072453) bg_cale_side_pane_g3

0x5652,	// (0x0007245b) bg_cale_side_pane_g4

0x565a,	// (0x00072463) bg_cale_side_pane_g5

0x5662,	// (0x0007246b) bg_cale_side_pane_g6

0x566a,	// (0x00072473) bg_cale_side_pane_g7

0x5672,	// (0x0007247b) bg_cale_side_pane_g8

0x567a,	// (0x00072483) bg_cale_side_pane_g9

0x0008,

0xf346,	// (0x0007c14f) bg_cale_side_pane_g

0x5682,	// (0x0007248b) popup_call_status_window_ParamLimits

0x5682,	// (0x0007248b) popup_call_status_window

0xc2dd,	// (0x000790e6) stacon_top_pane

0xc2e5,	// (0x000790ee) status_pane_ParamLimits

0xc2e5,	// (0x000790ee) status_pane

0xc2fa,	// (0x00079103) status_small_pane

0xc302,	// (0x0007910b) control_pane

0x376b,	// (0x00070574) stacon_bottom_pane

0xc30a,	// (0x00079113) list_single_mce_smart_pane_t1_ParamLimits

0xc30a,	// (0x00079113) list_single_mce_smart_pane_t1

0xc31d,	// (0x00079126) list_single_mce_smart_pane_t2_ParamLimits

0xc31d,	// (0x00079126) list_single_mce_smart_pane_t2

0x0001,

0xf359,	// (0x0007c162) list_single_mce_smart_pane_t_ParamLimits

0xf359,	// (0x0007c162) list_single_mce_smart_pane_t

0x56cb,	// (0x000724d4) compass_pane

0x56d4,	// (0x000724dd) main_location2_pane_t1

0x56e6,	// (0x000724ef) main_location2_pane_t2

0x56f8,	// (0x00072501) main_location2_pane_t3

0x0003,

0xf35e,	// (0x0007c167) main_location2_pane_t

0xc33c,	// (0x00079145) compass_pane_g1_ParamLimits

0xc33c,	// (0x00079145) compass_pane_g1

0x573c,	// (0x00072545) compass_pane_t1

0x574b,	// (0x00072554) compass_pane_t2

0x0005,

0xf367,	// (0x0007c170) compass_pane_t

0x5792,	// (0x0007259b) text_secondary_cp61

0xc3b8,	// (0x000791c1) navi_pane_cams_g5

0xc434,	// (0x0007923d) navi_pane_im_t1

0xc442,	// (0x0007924b) navi_pane_mp_g1_ParamLimits

0xc442,	// (0x0007924b) navi_pane_mp_g1

0xc456,	// (0x0007925f) navi_pane_mp_g2_ParamLimits

0xc456,	// (0x0007925f) navi_pane_mp_g2

0xc462,	// (0x0007926b) navi_pane_mp_g3_ParamLimits

0xc462,	// (0x0007926b) navi_pane_mp_g3

0x0002,

0xf37b,	// (0x0007c184) navi_pane_mp_g_ParamLimits

0xf37b,	// (0x0007c184) navi_pane_mp_g

0xc46e,	// (0x00079277) navi_pane_mp_t1

0xc47c,	// (0x00079285) navi_pane_mp_t2

0x0002,

0xf382,	// (0x0007c18b) navi_pane_mp_t

0xc4e7,	// (0x000792f0) navi_pane_vt_g1

0xc46e,	// (0x00079277) navi_pane_vt_t1

0xc4ef,	// (0x000792f8) navi_slider_pane

0xba00,	// (0x00078809) zooming_pane

0xc4ff,	// (0x00079308) navi_slider_pane_g1

0xc508,	// (0x00079311) navi_slider_pane_g2

0x0006,

0xf389,	// (0x0007c192) navi_slider_pane_g

0xc535,	// (0x0007933e) aid_levels_zoom

0xc53d,	// (0x00079346) zooming_pane_g1

0xc545,	// (0x0007934e) zooming_pane_g2

0xc545,	// (0x0007934e) zooming_pane_g3

0x0002,

0xf398,	// (0x0007c1a1) zooming_pane_g

0xc54d,	// (0x00079356) level_10_zoom

0xc556,	// (0x0007935f) level_11_zoom

0xc55f,	// (0x00079368) level_1_zoom

0xc568,	// (0x00079371) level_2_zoom

0xc571,	// (0x0007937a) level_3_zoom

0xc57a,	// (0x00079383) level_4_zoom

0xc583,	// (0x0007938c) level_5_zoom

0xc58c,	// (0x00079395) level_6_zoom

0xc595,	// (0x0007939e) level_7_zoom

0xc59e,	// (0x000793a7) level_8_zoom

0xc5a7,	// (0x000793b0) level_9_zoom

0xc5b8,	// (0x000793c1) popup_phob_thumbnail_window_g1

0xc5c0,	// (0x000793c9) popup_phob_thumbnail_window_g2

0x0001,

0xf39f,	// (0x0007c1a8) popup_phob_thumbnail_window_g

0x61a2,	// (0x00072fab) level_1_location

0x61aa,	// (0x00072fb3) level_2_location

0x61b2,	// (0x00072fbb) level_3_location

0x61ba,	// (0x00072fc3) level_4_location

0xba00,	// (0x00078809) level_5_location

0x57e3,	// (0x000725ec) mce_icon_pane_g1

0x57ed,	// (0x000725f6) mce_icon_pane_g2

0x0001,

0xf3a4,	// (0x0007c1ad) mce_icon_pane_g

0x14e7,	// (0x0006e2f0) main_mup_pane_g1_ParamLimits

0x14e7,	// (0x0006e2f0) main_mup_pane_g1

0x14e7,	// (0x0006e2f0) main_mup_pane_g2_ParamLimits

0x14e7,	// (0x0006e2f0) main_mup_pane_g2

0x14e7,	// (0x0006e2f0) main_mup_pane_g3_ParamLimits

0x14e7,	// (0x0006e2f0) main_mup_pane_g3

0x14e7,	// (0x0006e2f0) main_mup_pane_g4_ParamLimits

0x14e7,	// (0x0006e2f0) main_mup_pane_g4

0x14e7,	// (0x0006e2f0) main_mup_pane_g5_ParamLimits

0x14e7,	// (0x0006e2f0) main_mup_pane_g5

0x14e7,	// (0x0006e2f0) main_mup_pane_g6_ParamLimits

0x14e7,	// (0x0006e2f0) main_mup_pane_g6

0x14e7,	// (0x0006e2f0) main_mup_pane_g7_ParamLimits

0x14e7,	// (0x0006e2f0) main_mup_pane_g7

0x14e7,	// (0x0006e2f0) main_mup_pane_g8_ParamLimits

0x14e7,	// (0x0006e2f0) main_mup_pane_g8

0x14e7,	// (0x0006e2f0) main_mup_pane_g9_ParamLimits

0x14e7,	// (0x0006e2f0) main_mup_pane_g9

0x14e7,	// (0x0006e2f0) main_mup_pane_g10_ParamLimits

0x14e7,	// (0x0006e2f0) main_mup_pane_g10

0x14e7,	// (0x0006e2f0) main_mup_pane_g11_ParamLimits

0x14e7,	// (0x0006e2f0) main_mup_pane_g11

0xb74e,	// (0x00078557) main_mup_pane_g12_ParamLimits

0xb74e,	// (0x00078557) main_mup_pane_g12

0x14e7,	// (0x0006e2f0) main_mup_pane_g13_ParamLimits

0x14e7,	// (0x0006e2f0) main_mup_pane_g13

0x000c,

0xf3a9,	// (0x0007c1b2) main_mup_pane_g_ParamLimits

0xf3a9,	// (0x0007c1b2) main_mup_pane_g

0x14f5,	// (0x0006e2fe) main_mup_pane_t1_ParamLimits

0x14f5,	// (0x0006e2fe) main_mup_pane_t1

0x14f5,	// (0x0006e2fe) main_mup_pane_t2_ParamLimits

0x14f5,	// (0x0006e2fe) main_mup_pane_t2

0x14f5,	// (0x0006e2fe) main_mup_pane_t3_ParamLimits

0x14f5,	// (0x0006e2fe) main_mup_pane_t3

0xba12,	// (0x0007881b) main_mup_pane_t4_ParamLimits

0xba12,	// (0x0007881b) main_mup_pane_t4

0xba12,	// (0x0007881b) main_mup_pane_t5_ParamLimits

0xba12,	// (0x0007881b) main_mup_pane_t5

0xc5c8,	// (0x000793d1) main_mup_pane_t6_ParamLimits

0xc5c8,	// (0x000793d1) main_mup_pane_t6

0x0005,

0xf3c4,	// (0x0007c1cd) main_mup_pane_t_ParamLimits

0xf3c4,	// (0x0007c1cd) main_mup_pane_t

0x3a33,	// (0x0007083c) mup_progress_pane_ParamLimits

0x3a33,	// (0x0007083c) mup_progress_pane

0x140a,	// (0x0006e213) mup_visualizer_pane_ParamLimits

0x140a,	// (0x0006e213) mup_visualizer_pane

0x140a,	// (0x0006e213) mup_volume_pane_ParamLimits

0x140a,	// (0x0006e213) mup_volume_pane

0xb75c,	// (0x00078565) mup_visualizer_pane_g1_ParamLimits

0xb75c,	// (0x00078565) mup_visualizer_pane_g1

0xc5dc,	// (0x000793e5) mup_visualizer_pane_g2_ParamLimits

0xc5dc,	// (0x000793e5) mup_visualizer_pane_g2

0xb74e,	// (0x00078557) mup_visualizer_pane_g3_ParamLimits

0xb74e,	// (0x00078557) mup_visualizer_pane_g3

0x0002,

0xf3d1,	// (0x0007c1da) mup_visualizer_pane_g_ParamLimits

0xf3d1,	// (0x0007c1da) mup_visualizer_pane_g

0xba40,	// (0x00078849) mup_volume_pane_g1

0xba40,	// (0x00078849) mup_volume_pane_g2

0x0001,

0xf3d8,	// (0x0007c1e1) mup_volume_pane_g

0xba40,	// (0x00078849) mup_progress_pane_g1

0xba40,	// (0x00078849) mup_progress_pane_g2

0xba40,	// (0x00078849) mup_progress_pane_g3

0x0002,

0xf3dd,	// (0x0007c1e6) mup_progress_pane_g

0x376b,	// (0x00070574) bg_popup_window_pane_cp05

0xc5ea,	// (0x000793f3) heading_pane_cp02_ParamLimits

0xc5ea,	// (0x000793f3) heading_pane_cp02

0xc604,	// (0x0007940d) list_popup_blid_pane

0xc60c,	// (0x00079415) list_blid_sat_info_pane_ParamLimits

0xc60c,	// (0x00079415) list_blid_sat_info_pane

0xc61f,	// (0x00079428) list_blid_sat_info_pane_g1

0xc627,	// (0x00079430) list_blid_sat_info_pane_t1

0x58ed,	// (0x000726f6) mup_equalizer_pane_ParamLimits

0x58ed,	// (0x000726f6) mup_equalizer_pane

0x5906,	// (0x0007270f) mup_equalizer_pane_cp1_ParamLimits

0x5906,	// (0x0007270f) mup_equalizer_pane_cp1

0x5923,	// (0x0007272c) mup_equalizer_pane_cp2_ParamLimits

0x5923,	// (0x0007272c) mup_equalizer_pane_cp2

0x5940,	// (0x00072749) mup_equalizer_pane_cp3_ParamLimits

0x5940,	// (0x00072749) mup_equalizer_pane_cp3

0x5961,	// (0x0007276a) mup_equalizer_pane_cp4_ParamLimits

0x5961,	// (0x0007276a) mup_equalizer_pane_cp4

0x5982,	// (0x0007278b) mup_equalizer_pane_cp5

0x5996,	// (0x0007279f) mup_equalizer_pane_cp6

0x59aa,	// (0x000727b3) mup_equalizer_pane_cp7

0x134e,	// (0x0006e157) bg_popup_call_poc_act_pane_g9

0x1356,	// (0x0006e15f) bg_popup_call_poc_act_pane_g10

0x135e,	// (0x0006e167) bg_popup_call_poc_act_pane_g11

0x000a,

0x39c6,	// (0x000707cf) mup_scale_pane

0x39de,	// (0x000707e7) mup_scale_pane_g1

0xc635,	// (0x0007943e) mup_scale_pane_g2

0x0006,

0xf3f9,	// (0x0007c202) mup_scale_pane_g

0xc659,	// (0x00079462) msg_data_pane

0xc661,	// (0x0007946a) scroll_pane_cp017

0x283e,	// (0x0006f647) bg_list_pane_cp04_ParamLimits

0x283e,	// (0x0006f647) bg_list_pane_cp04

0xc669,	// (0x00079472) msg_data_pane_g1

0x59d0,	// (0x000727d9) msg_data_pane_g2

0x59da,	// (0x000727e3) msg_data_pane_g3

0x59e2,	// (0x000727eb) msg_data_pane_g4

0x59ea,	// (0x000727f3) msg_data_pane_g5

0x59f2,	// (0x000727fb) msg_data_pane_g6

0x59fa,	// (0x00072803) msg_data_pane_g7

0x0006,

0xf408,	// (0x0007c211) msg_data_pane_g

0x285e,	// (0x0006f667) msg_text_pane_ParamLimits

0x285e,	// (0x0006f667) msg_text_pane

0x5a02,	// (0x0007280b) qrid_highlight_pane_cp011_ParamLimits

0x5a02,	// (0x0007280b) qrid_highlight_pane_cp011

0x376b,	// (0x00070574) msg_body_pane

0x376b,	// (0x00070574) msg_header_pane

0xc67a,	// (0x00079483) input_focus_pane_cp07

0x2895,	// (0x0006f69e) msg_header_pane_t1_ParamLimits

0x2895,	// (0x0006f69e) msg_header_pane_t1

0x28ab,	// (0x0006f6b4) msg_header_pane_t2_ParamLimits

0x28ab,	// (0x0006f6b4) msg_header_pane_t2

0x0001,

0xf41c,	// (0x0007c225) msg_header_pane_t_ParamLimits

0xf41c,	// (0x0007c225) msg_header_pane_t

0xc68f,	// (0x00079498) msg_body_pane_g1

0x28c2,	// (0x0006f6cb) msg_body_pane_t1_ParamLimits

0x28c2,	// (0x0006f6cb) msg_body_pane_t1

0x28f3,	// (0x0006f6fc) msg_body_pane_t2_ParamLimits

0x28f3,	// (0x0006f6fc) msg_body_pane_t2

0x2905,	// (0x0006f70e) msg_body_pane_t3_ParamLimits

0x2905,	// (0x0006f70e) msg_body_pane_t3

0x0002,

0xf421,	// (0x0007c22a) msg_body_pane_t_ParamLimits

0xf421,	// (0x0007c22a) msg_body_pane_t

0x5a52,	// (0x0007285b) main_viewer_pane_g1_ParamLimits

0x5a52,	// (0x0007285b) main_viewer_pane_g1

0x5a60,	// (0x00072869) main_viewer_pane_g2_ParamLimits

0x5a60,	// (0x00072869) main_viewer_pane_g2

0x5a6e,	// (0x00072877) main_viewer_pane_g3_ParamLimits

0x5a6e,	// (0x00072877) main_viewer_pane_g3

0x5a7d,	// (0x00072886) main_viewer_pane_g4_ParamLimits

0x5a7d,	// (0x00072886) main_viewer_pane_g4

0xc6af,	// (0x000794b8) main_viewer_pane_g5_ParamLimits

0xc6af,	// (0x000794b8) main_viewer_pane_g5

0xc6af,	// (0x000794b8) main_viewer_pane_g7_ParamLimits

0xc6af,	// (0x000794b8) main_viewer_pane_g7

0xc6c1,	// (0x000794ca) main_viewer_pane_g8_ParamLimits

0xc6c1,	// (0x000794ca) main_viewer_pane_g8

0x0007,

0xf431,	// (0x0007c23a) main_viewer_pane_g_ParamLimits

0xf431,	// (0x0007c23a) main_viewer_pane_g

0xc6d9,	// (0x000794e2) viewer_content_pane_ParamLimits

0xc6d9,	// (0x000794e2) viewer_content_pane

0x5ab9,	// (0x000728c2) main_postcard_pane_g1_ParamLimits

0x5ab9,	// (0x000728c2) main_postcard_pane_g1

0x5acf,	// (0x000728d8) main_postcard_pane_g2_ParamLimits

0x5acf,	// (0x000728d8) main_postcard_pane_g2

0x5ae5,	// (0x000728ee) main_postcard_pane_g3_ParamLimits

0x5ae5,	// (0x000728ee) main_postcard_pane_g3

0x0005,

0xf442,	// (0x0007c24b) main_postcard_pane_g_ParamLimits

0xf442,	// (0x0007c24b) main_postcard_pane_g

0x5afc,	// (0x00072905) main_postcard_pane_g4

0x14a0,	// (0x0006e2a9) smil_status_volume_pane_g2

0x5b3f,	// (0x00072948) postcard_pane_ParamLimits

0x5b3f,	// (0x00072948) postcard_pane

0xc6e7,	// (0x000794f0) postcard_pane_g1_ParamLimits

0xc6e7,	// (0x000794f0) postcard_pane_g1

0x5b81,	// (0x0007298a) postcard_pane_g2_ParamLimits

0x5b81,	// (0x0007298a) postcard_pane_g2

0x5b8d,	// (0x00072996) postcard_pane_g3_ParamLimits

0x5b8d,	// (0x00072996) postcard_pane_g3

0xc6f5,	// (0x000794fe) postcard_pane_g4_ParamLimits

0xc6f5,	// (0x000794fe) postcard_pane_g4

0x5b99,	// (0x000729a2) postcard_pane_g5_ParamLimits

0x5b99,	// (0x000729a2) postcard_pane_g5

0x5bae,	// (0x000729b7) postcard_pane_g6_ParamLimits

0x5bae,	// (0x000729b7) postcard_pane_g6

0xc6e7,	// (0x000794f0) postcard_pane_g7_ParamLimits

0xc6e7,	// (0x000794f0) postcard_pane_g7

0x0006,

0xf44f,	// (0x0007c258) postcard_pane_g_ParamLimits

0xf44f,	// (0x0007c258) postcard_pane_g

0x5bc2,	// (0x000729cb) main_mp2_pane_g1_ParamLimits

0x5bc2,	// (0x000729cb) main_mp2_pane_g1

0x5bce,	// (0x000729d7) main_mp2_pane_g2_ParamLimits

0x5bce,	// (0x000729d7) main_mp2_pane_g2

0x5bda,	// (0x000729e3) main_mp2_pane_g3_ParamLimits

0x5bda,	// (0x000729e3) main_mp2_pane_g3

0x0002,

0xf45e,	// (0x0007c267) main_mp2_pane_g_ParamLimits

0xf45e,	// (0x0007c267) main_mp2_pane_g

0x5be6,	// (0x000729ef) main_mp2_pane_t1_ParamLimits

0x5be6,	// (0x000729ef) main_mp2_pane_t1

0x5bfb,	// (0x00072a04) main_mp2_pane_t2_ParamLimits

0x5bfb,	// (0x00072a04) main_mp2_pane_t2

0x5c0d,	// (0x00072a16) main_mp2_pane_t3_ParamLimits

0x5c0d,	// (0x00072a16) main_mp2_pane_t3

0x0002,

0xf465,	// (0x0007c26e) main_mp2_pane_t_ParamLimits

0xf465,	// (0x0007c26e) main_mp2_pane_t

0xc703,	// (0x0007950c) pec_content_pane_ParamLimits

0xc703,	// (0x0007950c) pec_content_pane

0xbba1,	// (0x000789aa) scroll_pane_cp015

0xc715,	// (0x0007951e) pec_attribute_pane_ParamLimits

0xc715,	// (0x0007951e) pec_attribute_pane

0x5c1f,	// (0x00072a28) pec_content_pane_g1_ParamLimits

0x5c1f,	// (0x00072a28) pec_content_pane_g1

0xc725,	// (0x0007952e) pec_content_pane_t1_ParamLimits

0xc725,	// (0x0007952e) pec_content_pane_t1

0xc737,	// (0x00079540) pec_content_pane_t2_ParamLimits

0xc737,	// (0x00079540) pec_content_pane_t2

0x0001,

0xf46c,	// (0x0007c275) pec_content_pane_t_ParamLimits

0xf46c,	// (0x0007c275) pec_content_pane_t

0x5c2b,	// (0x00072a34) list_single_graphic_pane_cp01_ParamLimits

0x5c2b,	// (0x00072a34) list_single_graphic_pane_cp01

0x39c6,	// (0x000707cf) bg_popup_sub_pane_cp04

0xc749,	// (0x00079552) popup_mup_playback_window_g1

0xc755,	// (0x0007955e) popup_mup_playback_window_t1

0xc76a,	// (0x00079573) popup_mup_playback_window_t2

0x0001,

0xf471,	// (0x0007c27a) popup_mup_playback_window_t

0xc7a1,	// (0x000795aa) main_image_pane_g1_ParamLimits

0xc7a1,	// (0x000795aa) main_image_pane_g1

0xc7e4,	// (0x000795ed) scroll_pane_cp018_ParamLimits

0xc7e4,	// (0x000795ed) scroll_pane_cp018

0xc7fc,	// (0x00079605) scroll_pane_cp016_ParamLimits

0xc7fc,	// (0x00079605) scroll_pane_cp016

0x5cf8,	// (0x00072b01) smil2_image_pane_ParamLimits

0x5cf8,	// (0x00072b01) smil2_image_pane

0x5d28,	// (0x00072b31) smil2_root_pane_ParamLimits

0x5d28,	// (0x00072b31) smil2_root_pane

0x5d60,	// (0x00072b69) smil2_text_pane_ParamLimits

0x5d60,	// (0x00072b69) smil2_text_pane

0x376b,	// (0x00070574) bg_list_pane_cp06

0xc838,	// (0x00079641) grid_radio_pane

0x376b,	// (0x00070574) bg_popup_window_pane_cp06

0xc840,	// (0x00079649) main_fmradio_pane_t1

0x1366,	// (0x0006e16f) heading_pane_cp04

0xc84e,	// (0x00079657) main_fmradio_pane_t2

0x136e,	// (0x0006e177) popup_cale_lunar_info_window_g1

0xc85c,	// (0x00079665) main_fmradio_pane_t3

0x1376,	// (0x0006e17f) popup_cale_lunar_info_window_g2

0xc86a,	// (0x00079673) main_fmradio_pane_t4

0x0001,

0xc878,	// (0x00079681) main_fmradio_pane_t5

0x0004,

0xf551,	// (0x0007c35a) popup_cale_lunar_info_window_g

0xf486,	// (0x0007c28f) main_fmradio_pane_t

0xc886,	// (0x0007968f) wait_bar_pane_cp03

0xc88e,	// (0x00079697) cell_fmradio_pane_ParamLimits

0xc88e,	// (0x00079697) cell_fmradio_pane

0xc6e7,	// (0x000794f0) cell_fmradio_pane_g1_ParamLimits

0xc6e7,	// (0x000794f0) cell_fmradio_pane_g1

0x376b,	// (0x00070574) grid_highlight_pane_cp011

0xc8a1,	// (0x000796aa) poc_content_pane_ParamLimits

0xc8a1,	// (0x000796aa) poc_content_pane

0xc8b3,	// (0x000796bc) scroll_pane_cp019

0x5de0,	// (0x00072be9) popup_call_poc_act_window_ParamLimits

0x5de0,	// (0x00072be9) popup_call_poc_act_window

0x5e04,	// (0x00072c0d) popup_call_poc_inact_window_ParamLimits

0x5e04,	// (0x00072c0d) popup_call_poc_inact_window

0xf528,	// (0x0007c331) bg_popup_call_poc_act_pane_g

0x12de,	// (0x0006e0e7) bg_popup_call_poc_inact_pane_g1

0x12e6,	// (0x0006e0ef) bg_popup_call_poc_inact_pane_g2

0xc8bb,	// (0x000796c4) popup_call_poc_act_window_g2

0x12ee,	// (0x0006e0f7) bg_popup_call_poc_inact_pane_g3

0x12f6,	// (0x0006e0ff) bg_popup_call_poc_inact_pane_g4

0x12fe,	// (0x0006e107) bg_popup_call_poc_inact_pane_g5

0xc8c3,	// (0x000796cc) popup_call_poc_act_window_t1_ParamLimits

0xc8c3,	// (0x000796cc) popup_call_poc_act_window_t1

0xc8eb,	// (0x000796f4) popup_call_poc_act_window_t2_ParamLimits

0xc8eb,	// (0x000796f4) popup_call_poc_act_window_t2

0xc913,	// (0x0007971c) popup_call_poc_act_window_t3_ParamLimits

0xc913,	// (0x0007971c) popup_call_poc_act_window_t3

0xc93b,	// (0x00079744) popup_call_poc_act_window_t4_ParamLimits

0xc93b,	// (0x00079744) popup_call_poc_act_window_t4

0x0003,

0xf491,	// (0x0007c29a) popup_call_poc_act_window_t_ParamLimits

0xf491,	// (0x0007c29a) popup_call_poc_act_window_t

0x1306,	// (0x0006e10f) bg_popup_call_poc_inact_pane_g6

0x130e,	// (0x0006e117) bg_popup_call_poc_inact_pane_g7

0x1316,	// (0x0006e11f) bg_popup_call_poc_inact_pane_g8

0xc94d,	// (0x00079756) popup_call_poc_inact_window_g2

0x131e,	// (0x0006e127) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf515,	// (0x0007c31e) bg_popup_call_poc_inact_pane_g

0xc955,	// (0x0007975e) popup_call_poc_inact_window_t1_ParamLimits

0xc955,	// (0x0007975e) popup_call_poc_inact_window_t1

0xc96a,	// (0x00079773) popup_call_poc_inact_window_t2_ParamLimits

0xc96a,	// (0x00079773) popup_call_poc_inact_window_t2

0xc97f,	// (0x00079788) popup_call_poc_inact_window_t3_ParamLimits

0xc97f,	// (0x00079788) popup_call_poc_inact_window_t3

0x0002,

0xf49a,	// (0x0007c2a3) popup_call_poc_inact_window_t_ParamLimits

0xf49a,	// (0x0007c2a3) popup_call_poc_inact_window_t

0x1418,	// (0x0006e221) context_pane_ParamLimits

0x6680,	// (0x00073489) signal_pane_ParamLimits

0xba00,	// (0x00078809) main_call2_pane

0xcca6,	// (0x00079aaf) popup_phob_thumbnail2_window_ParamLimits

0xcca6,	// (0x00079aaf) popup_phob_thumbnail2_window

0xc697,	// (0x000794a0) aid_hotspot_pointer_arrow_pane

0xc69f,	// (0x000794a8) aid_hotspot_pointer_hand_pane

0x616c,	// (0x00072f75) phob_pre_status_pane_g5

0x3294,	// (0x0007009d) cams_zoom_pane_ParamLimits

0x3294,	// (0x0007009d) image_vga_pane_ParamLimits

0xb74e,	// (0x00078557) main_camera_pane_g1_ParamLimits

0xb74e,	// (0x00078557) main_camera_pane_g2_ParamLimits

0xb74e,	// (0x00078557) main_camera_pane_g3_ParamLimits

0xb74e,	// (0x00078557) main_camera_pane_g4_ParamLimits

0xb74e,	// (0x00078557) main_camera_pane_g5_ParamLimits

0xb74e,	// (0x00078557) main_camera_pane_g6_ParamLimits

0xb74e,	// (0x00078557) main_camera_pane_g7_ParamLimits

0xf1c5,	// (0x0007bfce) main_camera_pane_g_ParamLimits

0xba12,	// (0x0007881b) main_camera_pane_t1_ParamLimits

0xba12,	// (0x0007881b) main_camera_pane_t2_ParamLimits

0xf1d6,	// (0x0007bfdf) main_camera_pane_t_ParamLimits

0x39c6,	// (0x000707cf) bg_popup_preview_window_pane_cp01_ParamLimits

0x39c6,	// (0x000707cf) bg_popup_preview_window_pane_cp01

0xc994,	// (0x0007979d) popup_phob_thumbnail2_window_g1_ParamLimits

0xc994,	// (0x0007979d) popup_phob_thumbnail2_window_g1

0x376b,	// (0x00070574) call2_cli_visual_pane

0x5e38,	// (0x00072c41) popup_call2_audio_conf_window_ParamLimits

0x5e38,	// (0x00072c41) popup_call2_audio_conf_window

0x5e58,	// (0x00072c61) popup_call2_audio_first_window_ParamLimits

0x5e58,	// (0x00072c61) popup_call2_audio_first_window

0x5eee,	// (0x00072cf7) popup_call2_audio_in_window_ParamLimits

0x5eee,	// (0x00072cf7) popup_call2_audio_in_window

0x5f36,	// (0x00072d3f) popup_call2_audio_out_window_ParamLimits

0x5f36,	// (0x00072d3f) popup_call2_audio_out_window

0x5fa0,	// (0x00072da9) popup_call2_audio_second_window_ParamLimits

0x5fa0,	// (0x00072da9) popup_call2_audio_second_window

0x6006,	// (0x00072e0f) popup_call2_audio_wait_window_ParamLimits

0x6006,	// (0x00072e0f) popup_call2_audio_wait_window

0x376b,	// (0x00070574) bg_popup_call2_act_pane_cp03

0x39a8,	// (0x000707b1) list_conf_pane_cp

0xc9a0,	// (0x000797a9) popup_call2_audio_conf_window_t1

0xc1e8,	// (0x00078ff1) list_single_graphic_popup_conf2_pane_ParamLimits

0xc1e8,	// (0x00078ff1) list_single_graphic_popup_conf2_pane

0xc1fb,	// (0x00079004) list_highlight_pane_cp04

0xc9ae,	// (0x000797b7) list_single_graphic_popup_conf2_pane_g1

0xc20c,	// (0x00079015) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf4a1,	// (0x0007c2aa) list_single_graphic_popup_conf2_pane_g

0xc9b8,	// (0x000797c1) list_single_graphic_popup_conf2_pane_t1

0xc9c6,	// (0x000797cf) bg_popup_call2_act_pane_cp01_ParamLimits

0xc9c6,	// (0x000797cf) bg_popup_call2_act_pane_cp01

0xca50,	// (0x00079859) call_type_pane_cp05_ParamLimits

0xca50,	// (0x00079859) call_type_pane_cp05

0xcaa4,	// (0x000798ad) popup_call2_audio_second_window_g1_ParamLimits

0xcaa4,	// (0x000798ad) popup_call2_audio_second_window_g1

0xcaf8,	// (0x00079901) popup_call2_audio_second_window_g2_ParamLimits

0xcaf8,	// (0x00079901) popup_call2_audio_second_window_g2

0x0002,

0xf4a6,	// (0x0007c2af) popup_call2_audio_second_window_g_ParamLimits

0xf4a6,	// (0x0007c2af) popup_call2_audio_second_window_g

0xcb5d,	// (0x00079966) popup_call2_audio_second_window_t1_ParamLimits

0xcb5d,	// (0x00079966) popup_call2_audio_second_window_t1

0xcc18,	// (0x00079a21) popup_call2_audio_second_window_t2_ParamLimits

0xcc18,	// (0x00079a21) popup_call2_audio_second_window_t2

0x0816,	// (0x0006d61f) popup_call2_audio_second_window_t3_ParamLimits

0x0816,	// (0x0006d61f) popup_call2_audio_second_window_t3

0x0003,

0xf4ad,	// (0x0007c2b6) popup_call2_audio_second_window_t_ParamLimits

0xf4ad,	// (0x0007c2b6) popup_call2_audio_second_window_t

0x376b,	// (0x00070574) bg_popup_call2_in_pane_cp02

0x3775,	// (0x0007057e) call_type_pane_cp04

0x6040,	// (0x00072e49) popup_call2_audio_wait_window_g1

0x6048,	// (0x00072e51) popup_call2_audio_wait_window_g2

0x0001,

0xf4b6,	// (0x0007c2bf) popup_call2_audio_wait_window_g

0x378d,	// (0x00070596) popup_call2_audio_wait_window_t3

0x0909,	// (0x0006d712) bg_popup_call2_act_pane_ParamLimits

0x0909,	// (0x0006d712) bg_popup_call2_act_pane

0x09c9,	// (0x0006d7d2) call_type_pane_cp03_ParamLimits

0x09c9,	// (0x0006d7d2) call_type_pane_cp03

0x0a2d,	// (0x0006d836) popup_call2_audio_first_window_g1_ParamLimits

0x0a2d,	// (0x0006d836) popup_call2_audio_first_window_g1

0x0a9d,	// (0x0006d8a6) popup_call2_audio_first_window_g2_ParamLimits

0x0a9d,	// (0x0006d8a6) popup_call2_audio_first_window_g2

0xcc6b,	// (0x00079a74) popup_call2_audio_first_window_g3_ParamLimits

0xcc6b,	// (0x00079a74) popup_call2_audio_first_window_g3

0x0004,

0xf4bb,	// (0x0007c2c4) popup_call2_audio_first_window_g_ParamLimits

0xf4bb,	// (0x0007c2c4) popup_call2_audio_first_window_g

0x0b7b,	// (0x0006d984) popup_call2_audio_first_window_t1_ParamLimits

0x0b7b,	// (0x0006d984) popup_call2_audio_first_window_t1

0x0c7e,	// (0x0006da87) popup_call2_audio_first_window_t4_ParamLimits

0x0c7e,	// (0x0006da87) popup_call2_audio_first_window_t4

0x0d61,	// (0x0006db6a) popup_call2_audio_first_window_t5_ParamLimits

0x0d61,	// (0x0006db6a) popup_call2_audio_first_window_t5

0x0003,

0xf4c6,	// (0x0007c2cf) popup_call2_audio_first_window_t_ParamLimits

0xf4c6,	// (0x0007c2cf) popup_call2_audio_first_window_t

0x39be,	// (0x000707c7) bg_popup_call2_act_pane_g1

0x137e,	// (0x0006e187) popup_cale_lunar_info_window_t1

0x138c,	// (0x0006e195) popup_cale_lunar_info_window_t2

0x139a,	// (0x0006e1a3) popup_cale_lunar_info_window_t3

0x376b,	// (0x00070574) bg_popup_call2_bubble_pane

0x0e62,	// (0x0006dc6b) bg_popup_call2_in_pane_cp01_ParamLimits

0x0e62,	// (0x0006dc6b) bg_popup_call2_in_pane_cp01

0x3423,	// (0x0007022c) call_type_pane_cp02

0x6050,	// (0x00072e59) popup_call2_audio_out_window_g1_ParamLimits

0x6050,	// (0x00072e59) popup_call2_audio_out_window_g1

0x0eaa,	// (0x0006dcb3) popup_call2_audio_out_window_g2_ParamLimits

0x0eaa,	// (0x0006dcb3) popup_call2_audio_out_window_g2

0x607c,	// (0x00072e85) popup_call2_audio_out_window_g3_ParamLimits

0x607c,	// (0x00072e85) popup_call2_audio_out_window_g3

0x0003,

0xf4cf,	// (0x0007c2d8) popup_call2_audio_out_window_g_ParamLimits

0xf4cf,	// (0x0007c2d8) popup_call2_audio_out_window_g

0x0ee1,	// (0x0006dcea) popup_call2_audio_out_window_t1_ParamLimits

0x0ee1,	// (0x0006dcea) popup_call2_audio_out_window_t1

0x0f40,	// (0x0006dd49) popup_call2_audio_out_window_t2_ParamLimits

0x0f40,	// (0x0006dd49) popup_call2_audio_out_window_t2

0x0f94,	// (0x0006dd9d) popup_call2_audio_out_window_t3_ParamLimits

0x0f94,	// (0x0006dd9d) popup_call2_audio_out_window_t3

0x0faa,	// (0x0006ddb3) popup_call2_audio_out_window_t4_ParamLimits

0x0faa,	// (0x0006ddb3) popup_call2_audio_out_window_t4

0x0fc0,	// (0x0006ddc9) popup_call2_audio_out_window_t5_ParamLimits

0x0fc0,	// (0x0006ddc9) popup_call2_audio_out_window_t5

0x0005,

0xf4d8,	// (0x0007c2e1) popup_call2_audio_out_window_t_ParamLimits

0xf4d8,	// (0x0007c2e1) popup_call2_audio_out_window_t

0x1024,	// (0x0006de2d) bg_popup_call2_in_pane_ParamLimits

0x1024,	// (0x0006de2d) bg_popup_call2_in_pane

0x1080,	// (0x0006de89) popup_call2_audio_in_window_g1_ParamLimits

0x1080,	// (0x0006de89) popup_call2_audio_in_window_g1

0x10b8,	// (0x0006dec1) popup_call2_audio_in_window_g2_ParamLimits

0x10b8,	// (0x0006dec1) popup_call2_audio_in_window_g2

0x10f0,	// (0x0006def9) popup_call2_audio_in_window_g3_ParamLimits

0x10f0,	// (0x0006def9) popup_call2_audio_in_window_g3

0x0003,

0xf4e5,	// (0x0007c2ee) popup_call2_audio_in_window_g_ParamLimits

0xf4e5,	// (0x0007c2ee) popup_call2_audio_in_window_g

0x1148,	// (0x0006df51) popup_call2_audio_in_window_t1_ParamLimits

0x1148,	// (0x0006df51) popup_call2_audio_in_window_t1

0x11c8,	// (0x0006dfd1) popup_call2_audio_in_window_t2_ParamLimits

0x11c8,	// (0x0006dfd1) popup_call2_audio_in_window_t2

0x1248,	// (0x0006e051) popup_call2_audio_in_window_t3_ParamLimits

0x1248,	// (0x0006e051) popup_call2_audio_in_window_t3

0x1262,	// (0x0006e06b) popup_call2_audio_in_window_t4_ParamLimits

0x1262,	// (0x0006e06b) popup_call2_audio_in_window_t4

0x1274,	// (0x0006e07d) popup_call2_audio_in_window_t5_ParamLimits

0x1274,	// (0x0006e07d) popup_call2_audio_in_window_t5

0x1289,	// (0x0006e092) popup_call2_audio_in_window_t6_ParamLimits

0x1289,	// (0x0006e092) popup_call2_audio_in_window_t6

0x0005,

0xf4ee,	// (0x0007c2f7) popup_call2_audio_in_window_t_ParamLimits

0xf4ee,	// (0x0007c2f7) popup_call2_audio_in_window_t

0x39be,	// (0x000707c7) bg_popup_call2_in_pane_g1

0x13a8,	// (0x0006e1b1) popup_cale_lunar_info_window_t4

0x0003,

0xf556,	// (0x0007c35f) popup_cale_lunar_info_window_t

0x39c6,	// (0x000707cf) bg_popup_call2_rect_pane_ParamLimits

0x39c6,	// (0x000707cf) bg_popup_call2_rect_pane

0x376b,	// (0x00070574) call2_cli_visual_graphic_pane

0x376b,	// (0x00070574) call2_cli_visual_text_pane

0xcccd,	// (0x00079ad6) smil_status_volume_pane_g3

0x0002,

0x39de,	// (0x000707e7) call2_cli_visual_graphic_pane_g1

0x39de,	// (0x000707e7) call2_cli_visual_graphic_pane_g2

0x39de,	// (0x000707e7) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4fb,	// (0x0007c304) call2_cli_visual_graphic_pane_g

0x129e,	// (0x0006e0a7) bg_popup_call2_rect_pane_g1

0xb8dd,	// (0x000786e6) bg_popup_call2_rect_pane_g2

0x12a6,	// (0x0006e0af) bg_popup_call2_rect_pane_g3

0x12ae,	// (0x0006e0b7) bg_popup_call2_rect_pane_g4

0x12b6,	// (0x0006e0bf) bg_popup_call2_rect_pane_g5

0x12be,	// (0x0006e0c7) bg_popup_call2_rect_pane_g6

0x12c6,	// (0x0006e0cf) bg_popup_call2_rect_pane_g7

0x12ce,	// (0x0006e0d7) bg_popup_call2_rect_pane_g8

0x12d6,	// (0x0006e0df) bg_popup_call2_rect_pane_g9

0x0008,

0xf502,	// (0x0007c30b) bg_popup_call2_rect_pane_g

0x12de,	// (0x0006e0e7) bg_popup_call2_bubble_pane_g1

0x12e6,	// (0x0006e0ef) bg_popup_call2_bubble_pane_g2

0x12ee,	// (0x0006e0f7) bg_popup_call2_bubble_pane_g3

0x12f6,	// (0x0006e0ff) bg_popup_call2_bubble_pane_g4

0x12fe,	// (0x0006e107) bg_popup_call2_bubble_pane_g5

0x1306,	// (0x0006e10f) bg_popup_call2_bubble_pane_g6

0x130e,	// (0x0006e117) bg_popup_call2_bubble_pane_g7

0x1316,	// (0x0006e11f) bg_popup_call2_bubble_pane_g8

0x131e,	// (0x0006e127) bg_popup_call2_bubble_pane_g9

0x0008,

0xf515,	// (0x0007c31e) bg_popup_call2_bubble_pane_g

0x3d5b,	// (0x00070b64) aid_cale_week_size_cell_pane

0x4301,	// (0x0007110a) aid_cams_cif_uncrop_pane_ParamLimits

0x4301,	// (0x0007110a) aid_cams_cif_uncrop_pane

0x4457,	// (0x00071260) aid_cams_size_cell_ParamLimits

0x4457,	// (0x00071260) aid_cams_size_cell

0x446b,	// (0x00071274) grid_cams_pane_ParamLimits

0x4485,	// (0x0007128e) linegrid_cams_pane_ParamLimits

0x456c,	// (0x00071375) call_video_pane_t1

0x458a,	// (0x00071393) call_video_pane_t2

0x0001,

0xf222,	// (0x0007c02b) call_video_pane_t

0x49b8,	// (0x000717c1) aid_cale_month_size_cell_pane_ParamLimits

0x49b8,	// (0x000717c1) aid_cale_month_size_cell_pane

0xf59a,	// (0x0007c3a3) smil_status_volume_pane_g

0xccda,	// (0x00079ae3) volume_smil_pane_ParamLimits

0xb6e9,	// (0x000784f2) aid_popup2_width_pane

0x3ce0,	// (0x00070ae9) cell_qdial_pane_g4_ParamLimits

0x3ce0,	// (0x00070ae9) cell_qdial_pane_g4

0x571c,	// (0x00072525) aid_blid_cardinal_pane_ParamLimits

0x5728,	// (0x00072531) aid_blid_destination_pane_ParamLimits

0x5728,	// (0x00072531) aid_blid_destination_pane

0x39c6,	// (0x000707cf) bg_popup_call_poc_act_pane_ParamLimits

0x39c6,	// (0x000707cf) bg_popup_call_poc_act_pane

0x39c6,	// (0x000707cf) bg_popup_call_poc_inact_pane_ParamLimits

0x39c6,	// (0x000707cf) bg_popup_call_poc_inact_pane

0x1326,	// (0x0006e12f) bg_popup_call_poc_act_pane_g1

0x132e,	// (0x0006e137) bg_popup_call_poc_act_pane_g2

0x1336,	// (0x0006e13f) bg_popup_call_poc_act_pane_g3

0x12f6,	// (0x0006e0ff) bg_popup_call_poc_act_pane_g4

0x12fe,	// (0x0006e107) bg_popup_call_poc_act_pane_g5

0x133e,	// (0x0006e147) bg_popup_call_poc_act_pane_g6

0x130e,	// (0x0006e117) bg_popup_call_poc_act_pane_g7

0x1346,	// (0x0006e14f) bg_popup_call_poc_act_pane_g8

0x376b,	// (0x00070574) main_usb_pane

0xcc81,	// (0x00079a8a) popup_cale_lunar_info_window

0x4864,	// (0x0007166d) im_reading_pane_t1_ParamLimits

0xbaf9,	// (0x00078902) list_im_pane_ParamLimits

0xbb0a,	// (0x00078913) scroll_pane_cp07_ParamLimits

0x376b,	// (0x00070574) grid_highlight_pane_cp012

0x39c6,	// (0x000707cf) mup_scale_pane_ParamLimits

0xc6e7,	// (0x000794f0) main_usb_pane_g1_ParamLimits

0xc6e7,	// (0x000794f0) main_usb_pane_g1

0x60ca,	// (0x00072ed3) main_usb_pane_g2_ParamLimits

0x60ca,	// (0x00072ed3) main_usb_pane_g2

0x0001,

0xf53f,	// (0x0007c348) main_usb_pane_g_ParamLimits

0xf53f,	// (0x0007c348) main_usb_pane_g

0x60e0,	// (0x00072ee9) main_usb_pane_t1_ParamLimits

0x60e0,	// (0x00072ee9) main_usb_pane_t1

0x60f2,	// (0x00072efb) main_usb_pane_t2_ParamLimits

0x60f2,	// (0x00072efb) main_usb_pane_t2

0x6104,	// (0x00072f0d) main_usb_pane_t3_ParamLimits

0x6104,	// (0x00072f0d) main_usb_pane_t3

0x6116,	// (0x00072f1f) main_usb_pane_t4_ParamLimits

0x6116,	// (0x00072f1f) main_usb_pane_t4

0x6128,	// (0x00072f31) main_usb_pane_t5_ParamLimits

0x6128,	// (0x00072f31) main_usb_pane_t5

0x613a,	// (0x00072f43) main_usb_pane_t6_ParamLimits

0x613a,	// (0x00072f43) main_usb_pane_t6

0x0005,

0xf544,	// (0x0007c34d) main_usb_pane_t_ParamLimits

0x56cb,	// (0x000724d4) aid_text_placing

0x56d4,	// (0x000724dd) main_location2_pane_t1_ParamLimits

0x56e6,	// (0x000724ef) main_location2_pane_t2_ParamLimits

0x56f8,	// (0x00072501) main_location2_pane_t3_ParamLimits

0x570a,	// (0x00072513) main_location2_pane_t4_ParamLimits

0x570a,	// (0x00072513) main_location2_pane_t4

0xf35e,	// (0x0007c167) main_location2_pane_t_ParamLimits

0x39f4,	// (0x000707fd) find_pinb_pane_g2_ParamLimits

0x39f4,	// (0x000707fd) find_pinb_pane_g2

0x0001,

0xf0da,	// (0x0007bee3) find_pinb_pane_g_ParamLimits

0xf0da,	// (0x0007bee3) find_pinb_pane_g

0x3a00,	// (0x00070809) find_pinb_pane_t1_ParamLimits

0x3a12,	// (0x0007081b) find_pinb_pane_t2_ParamLimits

0xf0df,	// (0x0007bee8) find_pinb_pane_t_ParamLimits

0x376b,	// (0x00070574) main_call3_pane

0x4ea3,	// (0x00071cac) cale_month_day_heading_pane_t1_ParamLimits

0x4f29,	// (0x00071d32) cale_month_day_heading_pane_t2_ParamLimits

0x4fa2,	// (0x00071dab) cale_month_day_heading_pane_t3_ParamLimits

0x501b,	// (0x00071e24) cale_month_day_heading_pane_t4_ParamLimits

0x509c,	// (0x00071ea5) cale_month_day_heading_pane_t5_ParamLimits

0x5125,	// (0x00071f2e) cale_month_day_heading_pane_t6_ParamLimits

0x51ae,	// (0x00071fb7) cale_month_day_heading_pane_t7_ParamLimits

0xf25a,	// (0x0007c063) cale_month_day_heading_pane_t_ParamLimits

0xbd60,	// (0x00078b69) smil_status_volume_pane

0x5b5d,	// (0x00072966) postcard_address_pane_ParamLimits

0x5b5d,	// (0x00072966) postcard_address_pane

0x5b6f,	// (0x00072978) postcard_message_pane_ParamLimits

0x5b6f,	// (0x00072978) postcard_message_pane

0x60a8,	// (0x00072eb1) call2_cli_visual_pane_t1_ParamLimits

0x60a8,	// (0x00072eb1) call2_cli_visual_pane_t1

0x14cb,	// (0x0006e2d4) postcard_message_pane_t1_ParamLimits

0x14cb,	// (0x0006e2d4) postcard_message_pane_t1

0x14b3,	// (0x0006e2bc) postcard_address_pane_t1_ParamLimits

0x14b3,	// (0x0006e2bc) postcard_address_pane_t1

0x6832,	// (0x0007363b) popup_call3_audio_in_window_ParamLimits

0x6832,	// (0x0007363b) popup_call3_audio_in_window

0x66bd,	// (0x000734c6) bg_popup_call3_in_pane_ParamLimits

0x66bd,	// (0x000734c6) bg_popup_call3_in_pane

0x6733,	// (0x0007353c) popup_call3_audio_in_window_g1_ParamLimits

0x6733,	// (0x0007353c) popup_call3_audio_in_window_g1

0x6753,	// (0x0007355c) popup_call3_audio_in_window_g2_ParamLimits

0x6753,	// (0x0007355c) popup_call3_audio_in_window_g2

0x6773,	// (0x0007357c) popup_call3_audio_in_window_g3_ParamLimits

0x6773,	// (0x0007357c) popup_call3_audio_in_window_g3

0x0003,

0xf5a1,	// (0x0007c3aa) popup_call3_audio_in_window_g_ParamLimits

0xf5a1,	// (0x0007c3aa) popup_call3_audio_in_window_g

0x67a4,	// (0x000735ad) popup_call3_audio_in_window_t1_ParamLimits

0x67a4,	// (0x000735ad) popup_call3_audio_in_window_t1

0x67e2,	// (0x000735eb) popup_call3_audio_in_window_t2_ParamLimits

0x67e2,	// (0x000735eb) popup_call3_audio_in_window_t2

0x6820,	// (0x00073629) popup_call3_audio_in_window_t3_ParamLimits

0x6820,	// (0x00073629) popup_call3_audio_in_window_t3

0x0002,

0xf5aa,	// (0x0007c3b3) popup_call3_audio_in_window_t_ParamLimits

0xf5aa,	// (0x0007c3b3) popup_call3_audio_in_window_t

0xba00,	// (0x00078809) bg_popup_call3_rect_pane

0x129e,	// (0x0006e0a7) bg_popup_call3_rect_pane_g1

0xb8dd,	// (0x000786e6) bg_popup_call3_rect_pane_g2

0x12a6,	// (0x0006e0af) bg_popup_call3_rect_pane_g3

0x12ae,	// (0x0006e0b7) bg_popup_call3_rect_pane_g4

0x12b6,	// (0x0006e0bf) bg_popup_call3_rect_pane_g5

0x12be,	// (0x0006e0c7) bg_popup_call3_rect_pane_g6

0x12c6,	// (0x0006e0cf) bg_popup_call3_rect_pane_g7

0x3069,	// (0x0006fe72) mup_visualizer_osc_pane

0x3069,	// (0x0006fe72) mup_visualizer_spec_pane

0x66ed,	// (0x000734f6) call3_video_qcif_pane_ParamLimits

0x66ed,	// (0x000734f6) call3_video_qcif_pane

0x6700,	// (0x00073509) call3_video_qcif_uncrop_pane_ParamLimits

0x6700,	// (0x00073509) call3_video_qcif_uncrop_pane

0x670e,	// (0x00073517) call3_video_subqcif_pane_ParamLimits

0x670e,	// (0x00073517) call3_video_subqcif_pane

0x6722,	// (0x0007352b) call3_video_subqcif_uncrop_pane_ParamLimits

0x6722,	// (0x0007352b) call3_video_subqcif_uncrop_pane

0x6793,	// (0x0007359c) popup_call3_audio_in_window_g4_ParamLimits

0x6793,	// (0x0007359c) popup_call3_audio_in_window_g4

0x3069,	// (0x0006fe72) mup_spec_half_pane

0x3069,	// (0x0006fe72) mup_spec_half_pane_cp

0x3069,	// (0x0006fe72) mup_osc_middle_pane

0xba40,	// (0x00078849) mup_visualizer_osc_pane_g1

0x1466,	// (0x0006e26f) mup_spec_bar_pane_ParamLimits

0x1466,	// (0x0006e26f) mup_spec_bar_pane

0xba40,	// (0x00078849) mup_spec_bar_pane_g1

0xba40,	// (0x00078849) mup_spec_bar_pane_g2

0x0001,

0xf3d8,	// (0x0007c1e1) mup_spec_bar_pane_g

0x3d5b,	// (0x00070b64) aid_cale_week_size_cell_pane_ParamLimits

0x3d75,	// (0x00070b7e) bg_cale_heading_pane_ParamLimits

0xb962,	// (0x0007876b) bg_cale_pane_cp01_ParamLimits

0x3d8d,	// (0x00070b96) cale_week_corner_pane_ParamLimits

0x3dac,	// (0x00070bb5) cale_week_day_heading_pane_ParamLimits

0x3dc9,	// (0x00070bd2) cale_week_scroll_pane_g1_ParamLimits

0x3ddc,	// (0x00070be5) cale_week_scroll_pane_g2_ParamLimits

0x3df4,	// (0x00070bfd) cale_week_scroll_pane_g3_ParamLimits

0x3e0c,	// (0x00070c15) cale_week_scroll_pane_g4_ParamLimits

0x3e24,	// (0x00070c2d) cale_week_scroll_pane_g5_ParamLimits

0x3e44,	// (0x00070c4d) cale_week_scroll_pane_g6_ParamLimits

0x3e64,	// (0x00070c6d) cale_week_scroll_pane_g7_ParamLimits

0x3e84,	// (0x00070c8d) cale_week_scroll_pane_g8_ParamLimits

0x3ea8,	// (0x00070cb1) cale_week_scroll_pane_g9_ParamLimits

0x3ec0,	// (0x00070cc9) cale_week_scroll_pane_g10_ParamLimits

0x3ed8,	// (0x00070ce1) cale_week_scroll_pane_g11_ParamLimits

0x3ef0,	// (0x00070cf9) cale_week_scroll_pane_g12_ParamLimits

0x3f08,	// (0x00070d11) cale_week_scroll_pane_g13_ParamLimits

0x3f08,	// (0x00070d11) cale_week_scroll_pane_g14_ParamLimits

0x3f08,	// (0x00070d11) cale_week_scroll_pane_g15_ParamLimits

0xf16b,	// (0x0007bf74) cale_week_scroll_pane_g_ParamLimits

0x3f44,	// (0x00070d4d) cale_week_time_pane_ParamLimits

0x3f68,	// (0x00070d71) grid_cale_week_pane_ParamLimits

0xb97f,	// (0x00078788) listscroll_cale_week_pane_t1

0xb991,	// (0x0007879a) scroll_pane_cp08_ParamLimits

0x4a18,	// (0x00071821) cale_month_corner_pane_ParamLimits

0xbd2a,	// (0x00078b33) cale_month_pane_t1

0x4e36,	// (0x00071c3f) cale_month_week_pane_ParamLimits

0x554b,	// (0x00072354) popup_call_status_window_g1_ParamLimits

0x555f,	// (0x00072368) popup_call_status_window_g2_ParamLimits

0x5573,	// (0x0007237c) popup_call_status_window_g3_ParamLimits

0xf2e5,	// (0x0007c0ee) popup_call_status_window_g_ParamLimits

0xc114,	// (0x00078f1d) aid_call2_pane

0x2887,	// (0x0006f690) msg_header_pane_g1

0x5b5d,	// (0x00072966) postcard_address2_pane_ParamLimits

0x5b5d,	// (0x00072966) postcard_address2_pane

0x5b6f,	// (0x00072978) postcard_message2_pane_ParamLimits

0x5b6f,	// (0x00072978) postcard_message2_pane

0x668e,	// (0x00073497) message2_row_pane_ParamLimits

0x668e,	// (0x00073497) message2_row_pane

0x66aa,	// (0x000734b3) address2_row_pane_ParamLimits

0x66aa,	// (0x000734b3) address2_row_pane

0x1433,	// (0x0006e23c) postcard_message2_row_pane_g1

0x143b,	// (0x0006e244) postcard_message2_row_pane_t1

0x1433,	// (0x0006e23c) address2_row_pane_g1

0x143b,	// (0x0006e244) address2_row_pane_t1

0x4298,	// (0x000710a1) aid_size_cell_vorec

0x376b,	// (0x00070574) main_rss_pane

0x1449,	// (0x0006e252) rss_list_single_pane_ParamLimits

0x1449,	// (0x0006e252) rss_list_single_pane

0x1457,	// (0x0006e260) rss_list_single_pane_t1

0x1457,	// (0x0006e260) rss_list_single_pane_t2

0x0001,

0xf595,	// (0x0007c39e) rss_list_single_pane_t

0x376b,	// (0x00070574) main_camera2_pane

0x376b,	// (0x00070574) main_video2_pane

0xccef,	// (0x00079af8) cams_zoom_pane_cp2_ParamLimits

0xccef,	// (0x00079af8) cams_zoom_pane_cp2

0xccef,	// (0x00079af8) image2_vga_pane_ParamLimits

0xccef,	// (0x00079af8) image2_vga_pane

0xeb46,	// (0x0007b94f) main_camera2_pane_g1_ParamLimits

0xeb46,	// (0x0007b94f) main_camera2_pane_g1

0xeb46,	// (0x0007b94f) main_camera2_pane_g2_ParamLimits

0xeb46,	// (0x0007b94f) main_camera2_pane_g2

0xeb46,	// (0x0007b94f) main_camera2_pane_g3_ParamLimits

0xeb46,	// (0x0007b94f) main_camera2_pane_g3

0xeb46,	// (0x0007b94f) main_camera2_pane_g4_ParamLimits

0xeb46,	// (0x0007b94f) main_camera2_pane_g4

0xeb46,	// (0x0007b94f) main_camera2_pane_g5_ParamLimits

0xeb46,	// (0x0007b94f) main_camera2_pane_g5

0xeb46,	// (0x0007b94f) main_camera2_pane_g6_ParamLimits

0xeb46,	// (0x0007b94f) main_camera2_pane_g6

0xeb46,	// (0x0007b94f) main_camera2_pane_g7_ParamLimits

0xeb46,	// (0x0007b94f) main_camera2_pane_g7

0xeb46,	// (0x0007b94f) main_camera2_pane_g8_ParamLimits

0xeb46,	// (0x0007b94f) main_camera2_pane_g8

0x0008,

0xf5b1,	// (0x0007c3ba) main_camera2_pane_g_ParamLimits

0xf5b1,	// (0x0007c3ba) main_camera2_pane_g

0x6854,	// (0x0007365d) main_camera2_pane_t1_ParamLimits

0x6854,	// (0x0007365d) main_camera2_pane_t1

0x6854,	// (0x0007365d) main_camera2_pane_t2_ParamLimits

0x6854,	// (0x0007365d) main_camera2_pane_t2

0x6854,	// (0x0007365d) main_camera2_pane_t3_ParamLimits

0x6854,	// (0x0007365d) main_camera2_pane_t3

0x6854,	// (0x0007365d) main_camera2_pane_t4_ParamLimits

0x6854,	// (0x0007365d) main_camera2_pane_t4

0x0006,

0xf5c4,	// (0x0007c3cd) main_camera2_pane_t_ParamLimits

0xf5c4,	// (0x0007c3cd) main_camera2_pane_t

0x19e7,	// (0x0006e7f0) cams_zoom_pane_cp4_ParamLimits

0x19e7,	// (0x0006e7f0) cams_zoom_pane_cp4

0x0808,	// (0x0006d611) image2_cif_pane_ParamLimits

0x0808,	// (0x0006d611) image2_cif_pane

0x3294,	// (0x0007009d) image2_subqcif_pane_ParamLimits

0x3294,	// (0x0007009d) image2_subqcif_pane

0x6868,	// (0x00073671) main_video2_pane_g1_ParamLimits

0x6868,	// (0x00073671) main_video2_pane_g1

0x6868,	// (0x00073671) main_video2_pane_g2_ParamLimits

0x6868,	// (0x00073671) main_video2_pane_g2

0x6868,	// (0x00073671) main_video2_pane_g3_ParamLimits

0x6868,	// (0x00073671) main_video2_pane_g3

0x6868,	// (0x00073671) main_video2_pane_g4_ParamLimits

0x6868,	// (0x00073671) main_video2_pane_g4

0x6868,	// (0x00073671) main_video2_pane_g5_ParamLimits

0x6868,	// (0x00073671) main_video2_pane_g5

0x6868,	// (0x00073671) main_video2_pane_g6_ParamLimits

0x6868,	// (0x00073671) main_video2_pane_g6

0x0005,

0xf5d3,	// (0x0007c3dc) main_video2_pane_g_ParamLimits

0xf5d3,	// (0x0007c3dc) main_video2_pane_g

0x6876,	// (0x0007367f) main_video2_pane_t1_ParamLimits

0x6876,	// (0x0007367f) main_video2_pane_t1

0x6876,	// (0x0007367f) main_video2_pane_t2_ParamLimits

0x6876,	// (0x0007367f) main_video2_pane_t2

0x6876,	// (0x0007367f) main_video2_pane_t3_ParamLimits

0x6876,	// (0x0007367f) main_video2_pane_t3

0x0002,

0xf5e0,	// (0x0007c3e9) main_video2_pane_t_ParamLimits

0xf5e0,	// (0x0007c3e9) main_video2_pane_t

0x61ce,	// (0x00072fd7) call_muted_g2

0x0001,

0xf587,	// (0x0007c390) call_muted_g

0x376b,	// (0x00070574) main_mup2_pane

0x14e7,	// (0x0006e2f0) main_mup2_pane_g1_ParamLimits

0x14e7,	// (0x0006e2f0) main_mup2_pane_g1

0x14e7,	// (0x0006e2f0) main_mup2_pane_g2_ParamLimits

0x14e7,	// (0x0006e2f0) main_mup2_pane_g2

0xba40,	// (0x00078849) main_mup_pane_g13_cp1

0x3069,	// (0x0006fe72) mup_volume_pane_cp1

0x14e7,	// (0x0006e2f0) main_mup2_pane_g4_ParamLimits

0x14e7,	// (0x0006e2f0) main_mup2_pane_g4

0x14e7,	// (0x0006e2f0) main_mup2_pane_g5_ParamLimits

0x14e7,	// (0x0006e2f0) main_mup2_pane_g5

0x14e7,	// (0x0006e2f0) main_mup2_pane_g6_ParamLimits

0x14e7,	// (0x0006e2f0) main_mup2_pane_g6

0x14e7,	// (0x0006e2f0) main_mup2_pane_g7_ParamLimits

0x14e7,	// (0x0006e2f0) main_mup2_pane_g7

0x0006,

0xf5e7,	// (0x0007c3f0) main_mup2_pane_g_ParamLimits

0xf5e7,	// (0x0007c3f0) main_mup2_pane_g

0x14f5,	// (0x0006e2fe) main_mup2_pane_t1_ParamLimits

0x14f5,	// (0x0006e2fe) main_mup2_pane_t1

0x14f5,	// (0x0006e2fe) main_mup2_pane_t2_ParamLimits

0x14f5,	// (0x0006e2fe) main_mup2_pane_t2

0x14f5,	// (0x0006e2fe) main_mup2_pane_t3_ParamLimits

0x14f5,	// (0x0006e2fe) main_mup2_pane_t3

0x14f5,	// (0x0006e2fe) main_mup2_pane_t4_ParamLimits

0x14f5,	// (0x0006e2fe) main_mup2_pane_t4

0x14f5,	// (0x0006e2fe) main_mup2_pane_t5_ParamLimits

0x14f5,	// (0x0006e2fe) main_mup2_pane_t5

0x14f5,	// (0x0006e2fe) main_mup2_pane_t6_ParamLimits

0x14f5,	// (0x0006e2fe) main_mup2_pane_t6

0x0005,

0xf5f6,	// (0x0007c3ff) main_mup2_pane_t_ParamLimits

0xf5f6,	// (0x0007c3ff) main_mup2_pane_t

0x140a,	// (0x0006e213) mup2_visualizer_pane_ParamLimits

0x140a,	// (0x0006e213) mup2_visualizer_pane

0x140a,	// (0x0006e213) mup_progress_pane_cp_ParamLimits

0x140a,	// (0x0006e213) mup_progress_pane_cp

0x1509,	// (0x0006e312) mup_volume_pane_cp_ParamLimits

0x1509,	// (0x0006e312) mup_volume_pane_cp

0xb74e,	// (0x00078557) mup2_visualizer_pane_g1_ParamLimits

0xb74e,	// (0x00078557) mup2_visualizer_pane_g1

0xb75c,	// (0x00078565) mup2_visualizer_pane_g2_ParamLimits

0xb75c,	// (0x00078565) mup2_visualizer_pane_g2

0xb75c,	// (0x00078565) mup2_visualizer_pane_g3_ParamLimits

0xb75c,	// (0x00078565) mup2_visualizer_pane_g3

0x0002,

0xf0e4,	// (0x0007beed) mup2_visualizer_pane_g_ParamLimits

0xf0e4,	// (0x0007beed) mup2_visualizer_pane_g

0xc830,	// (0x00079639) aid_size_cell_fmradio

0x6380,	// (0x00073189) aid_height_parent_landcape

0xbb88,	// (0x00078991) wml_content_pane_cp

0xbb90,	// (0x00078999) wml_tabs_pane

0xbb99,	// (0x000789a2) popup_wml_miniature_window

0xbba1,	// (0x000789aa) scroll_pane_cp021

0xbbb5,	// (0x000789be) wml_content_pane_comp8

0x376b,	// (0x00070574) bg_popup_sub_pane_cp05

0x151f,	// (0x0006e328) popup_wml_miniature_window_g1

0x1527,	// (0x0006e330) wml_miniature_view_pane

0x688a,	// (0x00073693) aid_size_wml_view

0x6892,	// (0x0007369b) wml_miniature_view_pane_g1

0x689b,	// (0x000736a4) wml_miniature_view_pane_g2

0x68a4,	// (0x000736ad) wml_miniature_view_pane_g3

0x68ac,	// (0x000736b5) wml_miniature_view_pane_g4

0x68b4,	// (0x000736bd) wml_miniature_view_pane_g5

0x68bc,	// (0x000736c5) wml_miniature_view_pane_g6

0x68c4,	// (0x000736cd) wml_miniature_view_pane_g7

0x68cc,	// (0x000736d5) wml_miniature_view_pane_g8

0x0007,

0xf603,	// (0x0007c40c) wml_miniature_view_pane_g

0x152f,	// (0x0006e338) background_graphic_ParamLimits

0x152f,	// (0x0006e338) background_graphic

0x153b,	// (0x0006e344) wml_tabs_2_pane

0x1544,	// (0x0006e34d) wml_tabs_3_pane_ParamLimits

0x1544,	// (0x0006e34d) wml_tabs_3_pane

0x1556,	// (0x0006e35f) wml_tabs_4_pane_ParamLimits

0x1556,	// (0x0006e35f) wml_tabs_4_pane

0x156c,	// (0x0006e375) wml_tabs_5_pane_ParamLimits

0x156c,	// (0x0006e375) wml_tabs_5_pane

0x1586,	// (0x0006e38f) wml_tabs_pane_g2_ParamLimits

0x1586,	// (0x0006e38f) wml_tabs_pane_g2

0x159b,	// (0x0006e3a4) wml_tabs_pane_g3_ParamLimits

0x159b,	// (0x0006e3a4) wml_tabs_pane_g3

0x15b0,	// (0x0006e3b9) wml_tabs_2_active_pane_ParamLimits

0x15b0,	// (0x0006e3b9) wml_tabs_2_active_pane

0x15b0,	// (0x0006e3b9) wml_tabs_2_passive_pane_ParamLimits

0x15b0,	// (0x0006e3b9) wml_tabs_2_passive_pane

0x68d4,	// (0x000736dd) wml_tabs_3_active_pane_cp_ParamLimits

0x68d4,	// (0x000736dd) wml_tabs_3_active_pane_cp

0x68e9,	// (0x000736f2) wml_tabs_3_passive_pane_ParamLimits

0x68e9,	// (0x000736f2) wml_tabs_3_passive_pane

0x68fc,	// (0x00073705) wml_tabs_3_passive_pane_cp_ParamLimits

0x68fc,	// (0x00073705) wml_tabs_3_passive_pane_cp

0x6913,	// (0x0007371c) tabs_4_active_pane

0x691b,	// (0x00073724) tabs_4_passive_pane

0x6925,	// (0x0007372e) tabs_4_passive_pane_cp

0x692d,	// (0x00073736) tabs_4_passive_pane_cp2

0x60c2,	// (0x00072ecb) aid_height_text

0x140a,	// (0x0006e213) mup_volume_cont_pane_ParamLimits

0x140a,	// (0x0006e213) mup_volume_cont_pane

0x3069,	// (0x0006fe72) aid_size_cell_pinb

0x3069,	// (0x0006fe72) aid_size_list_pinb

0x140a,	// (0x0006e213) mup2_volume_cont_pane_ParamLimits

0x140a,	// (0x0006e213) mup2_volume_cont_pane

0xcd11,	// (0x00079b1a) mup2_volume_cont_pane_g1_ParamLimits

0xcd11,	// (0x00079b1a) mup2_volume_cont_pane_g1

0x3073,	// (0x0006fe7c) aid_size_cell_touch_ParamLimits

0x3073,	// (0x0006fe7c) aid_size_cell_touch

0x32ae,	// (0x000700b7) touch_pane_ParamLimits

0x32ae,	// (0x000700b7) touch_pane

0x3069,	// (0x0006fe72) main_rss2_pane

0x15c7,	// (0x0006e3d0) listscroll_rss2_pane

0x15d0,	// (0x0006e3d9) rss2_navigation_pane

0x15d8,	// (0x0006e3e1) list_rss2_pane

0xc2be,	// (0x000790c7) scroll_pane_cp22

0x15e0,	// (0x0006e3e9) rss2_navigation_pane_g1

0x15e9,	// (0x0006e3f2) rss2_navigation_pane_g2

0x15f1,	// (0x0006e3fa) rss2_navigation_pane_g3

0x0002,

0xf614,	// (0x0007c41d) rss2_navigation_pane_g

0x15f9,	// (0x0006e402) rss2_navigation_pane_t1

0x6937,	// (0x00073740) rss2_list_single_pane_ParamLimits

0x6937,	// (0x00073740) rss2_list_single_pane

0x1607,	// (0x0006e410) rss2_list_single_pane_t2

0x1615,	// (0x0006e41e) rss2_list_single_pane_t3_ParamLimits

0x1615,	// (0x0006e41e) rss2_list_single_pane_t3

0x1632,	// (0x0006e43b) rss2_list_single_pane_t4

0x5438,	// (0x00072241) smil_status_pane_g1

0x3294,	// (0x0007009d) main_image2_pane_ParamLimits

0x3294,	// (0x0007009d) main_image2_pane

0xeb46,	// (0x0007b94f) main_camera2_pane_g9_ParamLimits

0xeb46,	// (0x0007b94f) main_camera2_pane_g9

0x6854,	// (0x0007365d) main_camera2_pane_t5_ParamLimits

0x6854,	// (0x0007365d) main_camera2_pane_t5

0xccfd,	// (0x00079b06) main_camera2_pane_t6_ParamLimits

0xccfd,	// (0x00079b06) main_camera2_pane_t6

0x694c,	// (0x00073755) main_image2_pane_g1_ParamLimits

0x694c,	// (0x00073755) main_image2_pane_g1

0x5d96,	// (0x00072b9f) smil2_video_pane_ParamLimits

0x5d96,	// (0x00072b9f) smil2_video_pane

0xb705,	// (0x0007850e) aid_zoom_text_primary_cp

0xb744,	// (0x0007854d) popup_preview_fixed_window

0xbaf1,	// (0x000788fa) im_reading_pane_g1

0x6846,	// (0x0007364f) cams2_bc_adjust_pane_cp_ParamLimits

0x6846,	// (0x0007364f) cams2_bc_adjust_pane_cp

0x140a,	// (0x0006e213) cams2_bc_adjust_pane_ParamLimits

0x140a,	// (0x0006e213) cams2_bc_adjust_pane

0xba40,	// (0x00078849) cams2_bc_adjust_pane_g1

0x3069,	// (0x0006fe72) cams2_slider_pane

0xba40,	// (0x00078849) cams2_slider_pane_g1

0xba40,	// (0x00078849) cams2_slider_pane_g2

0x0006,

0xf61b,	// (0x0007c424) cams2_slider_pane_g

0x3a5f,	// (0x00070868) calc_display_pane_ParamLimits

0x3a84,	// (0x0007088d) calc_paper_pane_ParamLimits

0x3aa7,	// (0x000708b0) grid_calc_pane_ParamLimits

0xc17a,	// (0x00078f83) popup_clock_digital_window_t1_ParamLimits

0xc7cd,	// (0x000795d6) main_image_pane_t1

0x3a41,	// (0x0007084a) aid_size_cell_calc_ParamLimits

0x3a41,	// (0x0007084a) aid_size_cell_calc

0x63d2,	// (0x000731db) popup_blid_sat_info2_window_ParamLimits

0x63d2,	// (0x000731db) popup_blid_sat_info2_window

0x1640,	// (0x0006e449) aid_size_cell_blid

0x0808,	// (0x0006d611) bg_popup_window_pane_cp07

0x165d,	// (0x0006e466) grid_popup_blid_pane

0x1667,	// (0x0006e470) heading_pane_cp05_ParamLimits

0x1667,	// (0x0006e470) heading_pane_cp05

0x1731,	// (0x0006e53a) cell_popup_blid_pane_ParamLimits

0x1731,	// (0x0006e53a) cell_popup_blid_pane

0x1755,	// (0x0006e55e) cell_popup_blid_pane_g1

0x175d,	// (0x0006e566) cell_popup_blid_pane_t1

0x140a,	// (0x0006e213) mup2_indicator_pane_ParamLimits

0x140a,	// (0x0006e213) mup2_indicator_pane

0x3069,	// (0x0006fe72) mup2_visualizer_osc_pane

0x1509,	// (0x0006e312) mup2_visualizer_spec_pane_ParamLimits

0x1509,	// (0x0006e312) mup2_visualizer_spec_pane

0x3069,	// (0x0006fe72) mup2_spec_half_pane

0x3069,	// (0x0006fe72) mup2_spec_half_pane_cp

0x176b,	// (0x0006e574) mup2_spec_bar_pane_ParamLimits

0x176b,	// (0x0006e574) mup2_spec_bar_pane

0xba40,	// (0x00078849) mup2_spec_bar_pane_g1

0x178a,	// (0x0006e593) mup2_spec_bar_pane_g2

0x0001,

0xf641,	// (0x0007c44a) mup2_spec_bar_pane_g

0x3069,	// (0x0006fe72) mup2_osc_middle_pane

0xba40,	// (0x00078849) mup2_visualizer_osc_pane_g1

0x3320,	// (0x00070129) popup_number_entry_window_t1_ParamLimits

0x3333,	// (0x0007013c) popup_number_entry_window_t2_ParamLimits

0x3345,	// (0x0007014e) popup_number_entry_window_t3_ParamLimits

0x3357,	// (0x00070160) popup_number_entry_window_t5_ParamLimits

0x3357,	// (0x00070160) popup_number_entry_window_t5

0xf085,	// (0x0007be8e) popup_number_entry_window_t_ParamLimits

0x338b,	// (0x00070194) text_title_cp2_ParamLimits

0xc6a7,	// (0x000794b0) aid_hotspot_pointer_text2_pane

0xc6cd,	// (0x000794d6) main_viewer_pane_g9_ParamLimits

0xc6cd,	// (0x000794d6) main_viewer_pane_g9

0xbd2a,	// (0x00078b33) cale_month_pane_t1_ParamLimits

0xbd95,	// (0x00078b9e) bg_cale_pane_ParamLimits

0xbdad,	// (0x00078bb6) list_cale_pane_ParamLimits

0xbdbe,	// (0x00078bc7) listscroll_cale_day_pane_t1

0xbdd0,	// (0x00078bd9) scroll_pane_cp09_ParamLimits

0x57f5,	// (0x000725fe) main_mup_eq_pane_t1_ParamLimits

0x57f5,	// (0x000725fe) main_mup_eq_pane_t1

0x580f,	// (0x00072618) main_mup_eq_pane_t2_ParamLimits

0x580f,	// (0x00072618) main_mup_eq_pane_t2

0x5829,	// (0x00072632) main_mup_eq_pane_t3_ParamLimits

0x5829,	// (0x00072632) main_mup_eq_pane_t3

0x5845,	// (0x0007264e) main_mup_eq_pane_t4_ParamLimits

0x5845,	// (0x0007264e) main_mup_eq_pane_t4

0x5861,	// (0x0007266a) main_mup_eq_pane_t5_ParamLimits

0x5861,	// (0x0007266a) main_mup_eq_pane_t5

0x587d,	// (0x00072686) main_mup_eq_pane_t6_ParamLimits

0x587d,	// (0x00072686) main_mup_eq_pane_t6

0x5891,	// (0x0007269a) main_mup_eq_pane_t7_ParamLimits

0x5891,	// (0x0007269a) main_mup_eq_pane_t7

0x58a5,	// (0x000726ae) main_mup_eq_pane_t8_ParamLimits

0x58a5,	// (0x000726ae) main_mup_eq_pane_t8

0x58b9,	// (0x000726c2) main_mup_eq_pane_t9_ParamLimits

0x58b9,	// (0x000726c2) main_mup_eq_pane_t9

0x58d3,	// (0x000726dc) main_mup_eq_pane_t10_ParamLimits

0x58d3,	// (0x000726dc) main_mup_eq_pane_t10

0x0009,

0xf3e4,	// (0x0007c1ed) main_mup_eq_pane_t_ParamLimits

0xf3e4,	// (0x0007c1ed) main_mup_eq_pane_t

0x5982,	// (0x0007278b) mup_equalizer_pane_cp5_ParamLimits

0x5996,	// (0x0007279f) mup_equalizer_pane_cp6_ParamLimits

0x59aa,	// (0x000727b3) mup_equalizer_pane_cp7_ParamLimits

0x3069,	// (0x0006fe72) main_gallery_pane

0x1485,	// (0x0006e28e) smil2_volume_pane

0x148d,	// (0x0006e296) smil_status_volume_pane_g1_ParamLimits

0x14a0,	// (0x0006e2a9) smil_status_volume_pane_g2_ParamLimits

0xcccd,	// (0x00079ad6) smil_status_volume_pane_g3_ParamLimits

0xf59a,	// (0x0007c3a3) smil_status_volume_pane_g_ParamLimits

0x0808,	// (0x0006d611) bg_popup_window_pane_cp07_ParamLimits

0x1648,	// (0x0006e451) blid_firmament_pane

0x3294,	// (0x0007009d) aid_size_cell_gallery_ParamLimits

0x3294,	// (0x0007009d) aid_size_cell_gallery

0x3294,	// (0x0007009d) grid_gallery_pane_ParamLimits

0x3294,	// (0x0007009d) grid_gallery_pane

0x0808,	// (0x0006d611) cell_gallery_pane_ParamLimits

0x0808,	// (0x0006d611) cell_gallery_pane

0x3294,	// (0x0007009d) bg_cell_gallery_focus_pane_ParamLimits

0x3294,	// (0x0007009d) bg_cell_gallery_focus_pane

0xb74e,	// (0x00078557) cell_gallery_pane_g1_ParamLimits

0xb74e,	// (0x00078557) cell_gallery_pane_g1

0xb74e,	// (0x00078557) cell_gallery_pane_g2_ParamLimits

0xb74e,	// (0x00078557) cell_gallery_pane_g2

0xb74e,	// (0x00078557) cell_gallery_pane_g3_ParamLimits

0xb74e,	// (0x00078557) cell_gallery_pane_g3

0xb75c,	// (0x00078565) cell_gallery_pane_g4_ParamLimits

0xb75c,	// (0x00078565) cell_gallery_pane_g4

0x0003,

0xf646,	// (0x0007c44f) cell_gallery_pane_g_ParamLimits

0xf646,	// (0x0007c44f) cell_gallery_pane_g

0x1794,	// (0x0006e59d) bg_cell_gallery_focus_pane_g1

0x179c,	// (0x0006e5a5) bg_cell_gallery_focus_pane_g2

0x17a4,	// (0x0006e5ad) bg_cell_gallery_focus_pane_g3

0x17ac,	// (0x0006e5b5) bg_cell_gallery_focus_pane_g4

0x17b4,	// (0x0006e5bd) bg_cell_gallery_focus_pane_g5

0x17bc,	// (0x0006e5c5) bg_cell_gallery_focus_pane_g6

0x17c4,	// (0x0006e5cd) bg_cell_gallery_focus_pane_g7

0x17cc,	// (0x0006e5d5) bg_cell_gallery_focus_pane_g8

0x0007,

0xf64f,	// (0x0007c458) bg_cell_gallery_focus_pane_g

0x17d4,	// (0x0006e5dd) aid_firma_cardinal

0x17e8,	// (0x0006e5f1) blid_firmament_pane_t1

0x17ff,	// (0x0006e608) blid_firmament_pane_t2

0x1816,	// (0x0006e61f) blid_firmament_pane_t3

0x182d,	// (0x0006e636) blid_firmament_pane_t4

0x0003,

0xf660,	// (0x0007c469) blid_firmament_pane_t

0x1844,	// (0x0006e64d) blid_sat_info_pane

0xba40,	// (0x00078849) blid_sat_info_pane_g1

0xba40,	// (0x00078849) blid_sat_info_pane_g2

0x0001,

0xf3d8,	// (0x0007c1e1) blid_sat_info_pane_g

0x1854,	// (0x0006e65d) blid_sat_info_pane_t1

0x1862,	// (0x0006e66b) smil2_volume_content_pane

0x186b,	// (0x0006e674) smil2_volume_pane_g1

0x1873,	// (0x0006e67c) smil2_volume_content_pane_g1

0x187c,	// (0x0006e685) smil2_volume_content_pane_g2

0x1885,	// (0x0006e68e) smil2_volume_content_pane_g3

0x188e,	// (0x0006e697) smil2_volume_content_pane_g4

0x1897,	// (0x0006e6a0) smil2_volume_content_pane_g5

0x18a0,	// (0x0006e6a9) smil2_volume_content_pane_g6

0x18a9,	// (0x0006e6b2) smil2_volume_content_pane_g7

0x18b2,	// (0x0006e6bb) smil2_volume_content_pane_g8

0x18bb,	// (0x0006e6c4) smil2_volume_content_pane_g9

0x18c4,	// (0x0006e6cd) smil2_volume_content_pane_g10

0x0009,

0xf669,	// (0x0007c472) smil2_volume_content_pane_g

0x401c,	// (0x00070e25) cale_week_day_heading_pane_t1_ParamLimits

0x4046,	// (0x00070e4f) cale_week_day_heading_pane_t2_ParamLimits

0x4075,	// (0x00070e7e) cale_week_day_heading_pane_t3_ParamLimits

0x40a4,	// (0x00070ead) cale_week_day_heading_pane_t4_ParamLimits

0x40d3,	// (0x00070edc) cale_week_day_heading_pane_t5_ParamLimits

0x410a,	// (0x00070f13) cale_week_day_heading_pane_t6_ParamLimits

0x4141,	// (0x00070f4a) cale_week_day_heading_pane_t7_ParamLimits

0xf18c,	// (0x0007bf95) cale_week_day_heading_pane_t_ParamLimits

0xb9ae,	// (0x000787b7) bg_cale_side_pane_ParamLimits

0x416b,	// (0x00070f74) cale_week_time_pane_t1_ParamLimits

0x4185,	// (0x00070f8e) cale_week_time_pane_t2_ParamLimits

0x419f,	// (0x00070fa8) cale_week_time_pane_t3_ParamLimits

0x41b9,	// (0x00070fc2) cale_week_time_pane_t4_ParamLimits

0x41d3,	// (0x00070fdc) cale_week_time_pane_t5_ParamLimits

0x41ed,	// (0x00070ff6) cale_week_time_pane_t6_ParamLimits

0x4207,	// (0x00071010) cale_week_time_pane_t7_ParamLimits

0x4221,	// (0x0007102a) cale_week_time_pane_t8_ParamLimits

0xf19b,	// (0x0007bfa4) cale_week_time_pane_t_ParamLimits

0x423b,	// (0x00071044) cell_cale_week_pane_g2_ParamLimits

0xb9ae,	// (0x000787b7) bg_cale_side_pane_cp01_ParamLimits

0x523f,	// (0x00072048) cale_month_week_pane_t1_ParamLimits

0x5258,	// (0x00072061) cale_month_week_pane_t2_ParamLimits

0x5271,	// (0x0007207a) cale_month_week_pane_t3_ParamLimits

0x528a,	// (0x00072093) cale_month_week_pane_t4_ParamLimits

0x52a3,	// (0x000720ac) cale_month_week_pane_t5_ParamLimits

0x52bc,	// (0x000720c5) cale_month_week_pane_t6_ParamLimits

0xf269,	// (0x0007c072) cale_month_week_pane_t_ParamLimits

0xbd3c,	// (0x00078b45) cell_cale_month_pane_g1_ParamLimits

0x3069,	// (0x0006fe72) main_cale_event_viewer_pane

0x3069,	// (0x0006fe72) listscroll_cale_event_viewer_pane

0x18cd,	// (0x0006e6d6) list_cale_ev_pane

0x18d5,	// (0x0006e6de) scroll_pane_cp023

0x18e1,	// (0x0006e6ea) field_cale_ev_pane_ParamLimits

0x18e1,	// (0x0006e6ea) field_cale_ev_pane

0x18ff,	// (0x0006e708) field_cale_ev_content_pane_ParamLimits

0x18ff,	// (0x0006e708) field_cale_ev_content_pane

0x190b,	// (0x0006e714) field_cale_ev_pane_g1_ParamLimits

0x190b,	// (0x0006e714) field_cale_ev_pane_g1

0x1917,	// (0x0006e720) field_cale_ev_pane_g2_ParamLimits

0x1917,	// (0x0006e720) field_cale_ev_pane_g2

0x192f,	// (0x0006e738) field_cale_ev_pane_g3_ParamLimits

0x192f,	// (0x0006e738) field_cale_ev_pane_g3

0x0002,

0xf67e,	// (0x0007c487) field_cale_ev_pane_g_ParamLimits

0xf67e,	// (0x0007c487) field_cale_ev_pane_g

0x1947,	// (0x0006e750) field_cale_ev_pane_t1_ParamLimits

0x1947,	// (0x0006e750) field_cale_ev_pane_t1

0x195e,	// (0x0006e767) field_cale_ev_content_pane_t1_ParamLimits

0x195e,	// (0x0006e767) field_cale_ev_content_pane_t1

0xc671,	// (0x0007947a) bg_button_pane_cp01

0x3d49,	// (0x00070b52) listscroll_cale_week_pane_ParamLimits

0xb959,	// (0x00078762) popup_toolbar_window_cp01

0xb97f,	// (0x00078788) listscroll_cale_week_pane_t1_ParamLimits

0x3d49,	// (0x00070b52) listscroll_cale_day_pane_ParamLimits

0xb959,	// (0x00078762) popup_toolbar_window_cp02

0xbdbe,	// (0x00078bc7) listscroll_cale_day_pane_t1_ParamLimits

0x3d49,	// (0x00070b52) main_cale_month_pane_ParamLimits

0xccb8,	// (0x00079ac1) popup_toolbar_window_cp03_ParamLimits

0xccb8,	// (0x00079ac1) popup_toolbar_window_cp03

0x5c5e,	// (0x00072a67) main_image_pane_g2_ParamLimits

0x5c5e,	// (0x00072a67) main_image_pane_g2

0x5c6f,	// (0x00072a78) main_image_pane_g3_ParamLimits

0x5c6f,	// (0x00072a78) main_image_pane_g3

0x0002,

0xf476,	// (0x0007c27f) main_image_pane_g_ParamLimits

0xf476,	// (0x0007c27f) main_image_pane_g

0xc7cd,	// (0x000795d6) main_image_pane_t1_ParamLimits

0x5c80,	// (0x00072a89) main_image_pane_t2_ParamLimits

0x5c80,	// (0x00072a89) main_image_pane_t2

0x5c92,	// (0x00072a9b) main_image_pane_t3_ParamLimits

0x5c92,	// (0x00072a9b) main_image_pane_t3

0x5cba,	// (0x00072ac3) main_image_pane_t4_ParamLimits

0x5cba,	// (0x00072ac3) main_image_pane_t4

0x0003,

0xf47d,	// (0x0007c286) main_image_pane_t_ParamLimits

0xf47d,	// (0x0007c286) main_image_pane_t

0x5cda,	// (0x00072ae3) popup_image_details_window_cp01

0x5ce4,	// (0x00072aed) popup_toobar_trans_pane_cp01_ParamLimits

0x5ce4,	// (0x00072aed) popup_toobar_trans_pane_cp01

0x64b1,	// (0x000732ba) popup_image_details_window_ParamLimits

0x64b1,	// (0x000732ba) popup_image_details_window

0xcc8b,	// (0x00079a94) popup_image_focus_window

0xccef,	// (0x00079af8) camera2_autofocus_pane_ParamLimits

0xccef,	// (0x00079af8) camera2_autofocus_pane

0x3069,	// (0x0006fe72) bg_popup_sub_pane_cp06

0x197c,	// (0x0006e785) popup_image_focus_window_g1

0x1984,	// (0x0006e78d) popup_image_focus_window_g2

0x198c,	// (0x0006e795) popup_image_focus_window_g3

0x1994,	// (0x0006e79d) popup_image_focus_window_g4

0x0003,

0xf685,	// (0x0007c48e) popup_image_focus_window_g

0x199c,	// (0x0006e7a5) popup_image_focus_window_t1

0x19aa,	// (0x0006e7b3) popup_image_focus_window_t2

0x19ba,	// (0x0006e7c3) popup_image_focus_window_t3

0x0002,

0xf68e,	// (0x0007c497) popup_image_focus_window_t

0xb74e,	// (0x00078557) camera2_autofocus_pane_g1

0x3294,	// (0x0007009d) bg_tb_trans_pane_cp01

0x19c8,	// (0x0006e7d1) popup_image_details_window_g1

0x6962,	// (0x0007376b) popup_image_details_window_g2

0x0002,

0xf6a0,	// (0x0007c4a9) popup_image_details_window_g

0x698b,	// (0x00073794) popup_image_details_window_t1

0x699d,	// (0x000737a6) popup_image_details_window_t2

0x69b6,	// (0x000737bf) popup_image_details_window_t3

0x69ca,	// (0x000737d3) popup_image_details_window_t4

0x69e5,	// (0x000737ee) popup_image_details_window_t5

0x0004,

0xf6a7,	// (0x0007c4b0) popup_image_details_window_t

0xb7b4,	// (0x000785bd) bg_calc_paper_pane_ParamLimits

0x3069,	// (0x0006fe72) grid_highlight_pane_cp013

0xb7c8,	// (0x000785d1) list_calc_pane_ParamLimits

0xb7da,	// (0x000785e3) scroll_pane_cp024

0xb7e2,	// (0x000785eb) bg_calc_display_pane_ParamLimits

0x3ba5,	// (0x000709ae) calc_display_pane_t1_ParamLimits

0x3bba,	// (0x000709c3) calc_display_pane_t2_ParamLimits

0xb7ee,	// (0x000785f7) calc_display_pane_t3_ParamLimits

0xf10c,	// (0x0007bf15) calc_display_pane_t_ParamLimits

0x3c7a,	// (0x00070a83) cell_calc_pane_g2

0x0001,

0xf129,	// (0x0007bf32) cell_calc_pane_g

0x3c83,	// (0x00070a8c) cell_calc_pane_t1

0xb85b,	// (0x00078664) grid_highlight_pane_cp02_ParamLimits

0xb871,	// (0x0007867a) toolbar_button_pane_cp01_ParamLimits

0xb871,	// (0x0007867a) toolbar_button_pane_cp01

0xc812,	// (0x0007961b) temp_image_control_pane_ParamLimits

0xc812,	// (0x0007961b) temp_image_control_pane

0x3294,	// (0x0007009d) main_mp3_pane

0x69ff,	// (0x00073808) temp_image_control_pane_g1_ParamLimits

0x69ff,	// (0x00073808) temp_image_control_pane_g1

0x6a0d,	// (0x00073816) temp_image_control_pane_g2_ParamLimits

0x6a0d,	// (0x00073816) temp_image_control_pane_g2

0x6a1f,	// (0x00073828) temp_image_control_pane_g3_ParamLimits

0x6a1f,	// (0x00073828) temp_image_control_pane_g3

0x6a2f,	// (0x00073838) temp_image_control_pane_g4_ParamLimits

0x6a2f,	// (0x00073838) temp_image_control_pane_g4

0x0003,

0xf6b2,	// (0x0007c4bb) temp_image_control_pane_g_ParamLimits

0xf6b2,	// (0x0007c4bb) temp_image_control_pane_g

0x69ff,	// (0x00073808) main_mp3_pane_g1

0x6a42,	// (0x0007384b) main_mp3_pane_g2

0x0007,

0xf6bb,	// (0x0007c4c4) main_mp3_pane_g

0x6a8f,	// (0x00073898) main_mp3_pane_t1

0xb75c,	// (0x00078565) main_camera_pane_g8_ParamLimits

0xb75c,	// (0x00078565) main_camera_pane_g8

0x4405,	// (0x0007120e) main_video_pane_g7_ParamLimits

0x4405,	// (0x0007120e) main_video_pane_g7

0xc5c8,	// (0x000793d1) main_camera2_pane_t7_ParamLimits

0xc5c8,	// (0x000793d1) main_camera2_pane_t7

0xbb48,	// (0x00078951) scroll_pane_cp025_ParamLimits

0xbb48,	// (0x00078951) scroll_pane_cp025

0xbb5c,	// (0x00078965) scroll_pane_cp026_ParamLimits

0xbb5c,	// (0x00078965) scroll_pane_cp026

0xbb6b,	// (0x00078974) wml_content_pane_ParamLimits

0x3069,	// (0x0006fe72) main_touch_calib_pane

0x6b6d,	// (0x00073976) main_touch_calib_pane_g1

0x6b7f,	// (0x00073988) main_touch_calib_pane_g2

0x6b91,	// (0x0007399a) main_touch_calib_pane_g3

0x6ba3,	// (0x000739ac) main_touch_calib_pane_g4

0x0003,

0xf6d9,	// (0x0007c4e2) main_touch_calib_pane_g

0x6bb5,	// (0x000739be) main_touch_calib_pane_t1

0x6bcf,	// (0x000739d8) main_touch_calib_pane_t2

0x0004,

0xf6e2,	// (0x0007c4eb) main_touch_calib_pane_t

0xc39a,	// (0x000791a3) mup_progress_pane_cp02

0xc3cf,	// (0x000791d8) navi_pane_g1

0xc48a,	// (0x00079293) navi_pane_mp_t3

0x3294,	// (0x0007009d) main_mp3_pane_ParamLimits

0x6636,	// (0x0007343f) navi_pane_ParamLimits

0x69ff,	// (0x00073808) main_mp3_pane_g1_ParamLimits

0x6a42,	// (0x0007384b) main_mp3_pane_g2_ParamLimits

0x6a50,	// (0x00073859) main_mp3_pane_g3_ParamLimits

0x6a50,	// (0x00073859) main_mp3_pane_g3

0x6a5e,	// (0x00073867) main_mp3_pane_g4_ParamLimits

0x6a5e,	// (0x00073867) main_mp3_pane_g4

0xb74e,	// (0x00078557) main_mp3_pane_g5_ParamLimits

0xb74e,	// (0x00078557) main_mp3_pane_g5

0x6a6a,	// (0x00073873) main_mp3_pane_g6_ParamLimits

0x6a6a,	// (0x00073873) main_mp3_pane_g6

0x6a77,	// (0x00073880) main_mp3_pane_g7_ParamLimits

0x6a77,	// (0x00073880) main_mp3_pane_g7

0x6a83,	// (0x0007388c) main_mp3_pane_g8_ParamLimits

0x6a83,	// (0x0007388c) main_mp3_pane_g8

0xf6bb,	// (0x0007c4c4) main_mp3_pane_g_ParamLimits

0x6a9d,	// (0x000738a6) main_mp3_pane_t2

0x6aab,	// (0x000738b4) main_mp3_pane_t3

0x6ab9,	// (0x000738c2) main_mp3_pane_t4

0x6ac7,	// (0x000738d0) main_mp3_pane_t5

0x0005,

0xf6cc,	// (0x0007c4d5) main_mp3_pane_t

0x6ae3,	// (0x000738ec) mup_progress_pane_cp01

0xb705,	// (0x0007850e) aid_zoom_text_secondary2

0x18cd,	// (0x0006e6d6) list_cale_ev2_pane

0x18d5,	// (0x0006e6de) scroll_pane_cp023_ParamLimits

0x6c25,	// (0x00073a2e) field_cale_ev2_pane_ParamLimits

0x6c25,	// (0x00073a2e) field_cale_ev2_pane

0x6c45,	// (0x00073a4e) field_cale_ev2_pane_g1_ParamLimits

0x6c45,	// (0x00073a4e) field_cale_ev2_pane_g1

0x6c51,	// (0x00073a5a) field_cale_ev2_pane_g2_ParamLimits

0x6c51,	// (0x00073a5a) field_cale_ev2_pane_g2

0x6c69,	// (0x00073a72) field_cale_ev2_pane_g3_ParamLimits

0x6c69,	// (0x00073a72) field_cale_ev2_pane_g3

0x0003,

0xf6ed,	// (0x0007c4f6) field_cale_ev2_pane_g_ParamLimits

0xf6ed,	// (0x0007c4f6) field_cale_ev2_pane_g

0xcd33,	// (0x00079b3c) field_cale_ev2_pane_t1_ParamLimits

0xcd33,	// (0x00079b3c) field_cale_ev2_pane_t1

0xcd4a,	// (0x00079b53) field_cale_ev2_pane_t2_ParamLimits

0xcd4a,	// (0x00079b53) field_cale_ev2_pane_t2

0x0001,

0xf6f6,	// (0x0007c4ff) field_cale_ev2_pane_t_ParamLimits

0xf6f6,	// (0x0007c4ff) field_cale_ev2_pane_t

0x5b13,	// (0x0007291c) main_postcard_pane_g5_ParamLimits

0x5b13,	// (0x0007291c) main_postcard_pane_g5

0x5b29,	// (0x00072932) main_postcard_pane_g6_ParamLimits

0x5b29,	// (0x00072932) main_postcard_pane_g6

0x3294,	// (0x0007009d) camera2_autofocus_pane_cp_ParamLimits

0x3294,	// (0x0007009d) camera2_autofocus_pane_cp

0x3294,	// (0x0007009d) main_mup3_pane

0x6cc5,	// (0x00073ace) main_mup3_pane_g1_ParamLimits

0x6cc5,	// (0x00073ace) main_mup3_pane_g1

0x6ce7,	// (0x00073af0) main_mup3_pane_g2_ParamLimits

0x6ce7,	// (0x00073af0) main_mup3_pane_g2

0x6d65,	// (0x00073b6e) main_mup3_pane_g3_ParamLimits

0x6d65,	// (0x00073b6e) main_mup3_pane_g3

0x6dab,	// (0x00073bb4) main_mup3_pane_g4_ParamLimits

0x6dab,	// (0x00073bb4) main_mup3_pane_g4

0x6df1,	// (0x00073bfa) main_mup3_pane_g5_ParamLimits

0x6df1,	// (0x00073bfa) main_mup3_pane_g5

0x6e37,	// (0x00073c40) main_mup3_pane_g6_ParamLimits

0x6e37,	// (0x00073c40) main_mup3_pane_g6

0xb75c,	// (0x00078565) main_mup3_pane_g7_ParamLimits

0xb75c,	// (0x00078565) main_mup3_pane_g7

0x0007,

0xf706,	// (0x0007c50f) main_mup3_pane_g_ParamLimits

0xf706,	// (0x0007c50f) main_mup3_pane_g

0x6eb5,	// (0x00073cbe) main_mup3_pane_t1_ParamLimits

0x6eb5,	// (0x00073cbe) main_mup3_pane_t1

0x6f29,	// (0x00073d32) main_mup3_pane_t2_ParamLimits

0x6f29,	// (0x00073d32) main_mup3_pane_t2

0x6ffd,	// (0x00073e06) main_mup3_pane_t4_ParamLimits

0x6ffd,	// (0x00073e06) main_mup3_pane_t4

0x7053,	// (0x00073e5c) main_mup3_pane_t5_ParamLimits

0x7053,	// (0x00073e5c) main_mup3_pane_t5

0x710f,	// (0x00073f18) main_mup3_pane_t6_ParamLimits

0x710f,	// (0x00073f18) main_mup3_pane_t6

0x0005,

0xf717,	// (0x0007c520) main_mup3_pane_t_ParamLimits

0xf717,	// (0x0007c520) main_mup3_pane_t

0x71c7,	// (0x00073fd0) mup3_progress_pane_ParamLimits

0x71c7,	// (0x00073fd0) mup3_progress_pane

0x725d,	// (0x00074066) popup_mup3_control_window_ParamLimits

0x725d,	// (0x00074066) popup_mup3_control_window

0x7279,	// (0x00074082) popup_mup3_text_window

0x7297,	// (0x000740a0) mup3_progress_pane_t1

0x72b6,	// (0x000740bf) mup3_progress_pane_t2

0x72d5,	// (0x000740de) mup3_progress_pane_t3

0x0002,

0xf724,	// (0x0007c52d) mup3_progress_pane_t

0x72f2,	// (0x000740fb) mup_progress_pane_cp03

0x3069,	// (0x0006fe72) bg_tb_trans_pane_cp04

0x7302,	// (0x0007410b) mup3_volume_pane

0x730a,	// (0x00074113) popup_mup3_control_window_g1

0x7313,	// (0x0007411c) mup3_volume_pane_g1

0x731c,	// (0x00074125) mup3_volume_pane_g2

0x7325,	// (0x0007412e) mup3_volume_pane_g3

0x0002,

0xf72b,	// (0x0007c534) mup3_volume_pane_g

0x3069,	// (0x0006fe72) bg_tb_trans_pane_cp03

0x732e,	// (0x00074137) popup_mup3_text_window_g1

0x7336,	// (0x0007413f) popup_mup3_text_window_t1

0xb83c,	// (0x00078645) list_calc_item_pane_g1_ParamLimits

0x15be,	// (0x0006e3c7) mup_volume_pane_cp_g1

0x6be9,	// (0x000739f2) main_touch_calib_pane_t3

0x6bfd,	// (0x00073a06) main_touch_calib_pane_t4

0x6c11,	// (0x00073a1a) main_touch_calib_pane_t5

0xb6e1,	// (0x000784ea) aid_cell_size_toolbar2

0xb6e9,	// (0x000784f2) aid_popup3_width_pane

0xb6f5,	// (0x000784fe) aid_zoom_text_msg_primary

0x42e0,	// (0x000710e9) vorec_t7

0xb800,	// (0x00078609) bg_calc_paper_pane_g1_ParamLimits

0xb80c,	// (0x00078615) bg_calc_paper_pane_g2_ParamLimits

0xb818,	// (0x00078621) bg_calc_paper_pane_g3_ParamLimits

0xb824,	// (0x0007862d) bg_calc_paper_pane_g4_ParamLimits

0xb830,	// (0x00078639) bg_calc_paper_pane_g5_ParamLimits

0x3c04,	// (0x00070a0d) bg_calc_paper_pane_g6_ParamLimits

0x3c13,	// (0x00070a1c) bg_calc_paper_pane_g7_ParamLimits

0x3c22,	// (0x00070a2b) bg_calc_paper_pane_g8_ParamLimits

0xf113,	// (0x0007bf1c) bg_calc_paper_pane_g_ParamLimits

0x3c35,	// (0x00070a3e) calc_bg_paper_pane_g9_ParamLimits

0x3294,	// (0x0007009d) image_qvga_pane_ParamLimits

0x3294,	// (0x0007009d) image_qvga_pane

0x39c6,	// (0x000707cf) bg_popup_sub_pane_cp04_ParamLimits

0xc749,	// (0x00079552) popup_mup_playback_window_g1_ParamLimits

0xc755,	// (0x0007955e) popup_mup_playback_window_t1_ParamLimits

0xc76a,	// (0x00079573) popup_mup_playback_window_t2_ParamLimits

0xf471,	// (0x0007c27a) popup_mup_playback_window_t_ParamLimits

0xb75c,	// (0x00078565) main_mup2_pane_g3_ParamLimits

0xb75c,	// (0x00078565) main_mup2_pane_g3

0x460d,	// (0x00071416) popup_toolbar_window_cp04

0xcb4c,	// (0x00079955) popup_call2_audio_second_window_g3_ParamLimits

0xcb4c,	// (0x00079955) popup_call2_audio_second_window_g3

0x0b01,	// (0x0006d90a) popup_call2_audio_first_window_g4_ParamLimits

0x0b01,	// (0x0006d90a) popup_call2_audio_first_window_g4

0x1128,	// (0x0006df31) popup_call2_audio_in_window_g4_ParamLimits

0x1128,	// (0x0006df31) popup_call2_audio_in_window_g4

0x5c40,	// (0x00072a49) aid_area_sk_bg_cut_ParamLimits

0x5c40,	// (0x00072a49) aid_area_sk_bg_cut

0xc77f,	// (0x00079588) aid_area_sk_bg_cut_2_ParamLimits

0xc77f,	// (0x00079588) aid_area_sk_bg_cut_2

0x3069,	// (0x0006fe72) aid_placing_details_win

0x3069,	// (0x0006fe72) aid_placing_details_win_2

0xb74e,	// (0x00078557) camera2_autofocus_pane_g1_ParamLimits

0x3239,	// (0x00070042) popup_fixed_preview_cale_window_ParamLimits

0x3239,	// (0x00070042) popup_fixed_preview_cale_window

0xc511,	// (0x0007931a) navi_slider_pane_g3

0xc51a,	// (0x00079323) navi_slider_pane_g4

0xc523,	// (0x0007932c) navi_slider_pane_g5

0xc511,	// (0x0007931a) navi_slider_pane_g6

0xc52c,	// (0x00079335) navi_slider_pane_g7

0xc63e,	// (0x00079447) mup_scale_pane_g3

0xc647,	// (0x00079450) mup_scale_pane_g4

0xc650,	// (0x00079459) mup_scale_pane_g5

0x59be,	// (0x000727c7) mup_scale_pane_g6

0x59c7,	// (0x000727d0) mup_scale_pane_g7

0xba40,	// (0x00078849) cams2_slider_pane_g3

0xba40,	// (0x00078849) cams2_slider_pane_g4

0xba40,	// (0x00078849) cams2_slider_pane_g5

0xba40,	// (0x00078849) cams2_slider_pane_g6

0xba40,	// (0x00078849) cams2_slider_pane_g7

0xba40,	// (0x00078849) camera2_autofocus_pane_cp_g1

0x13fe,	// (0x0006e207) bg_popup_preview_window_pane_cp02_ParamLimits

0x13fe,	// (0x0006e207) bg_popup_preview_window_pane_cp02

0x7344,	// (0x0007414d) list_fp_cale_pane_ParamLimits

0x7344,	// (0x0007414d) list_fp_cale_pane

0x7350,	// (0x00074159) popup_fixed_preview_cale_window_t1_ParamLimits

0x7350,	// (0x00074159) popup_fixed_preview_cale_window_t1

0x7362,	// (0x0007416b) popup_fixed_preview_cale_window_t2_ParamLimits

0x7362,	// (0x0007416b) popup_fixed_preview_cale_window_t2

0x7377,	// (0x00074180) popup_fixed_preview_cale_window_t3_ParamLimits

0x7377,	// (0x00074180) popup_fixed_preview_cale_window_t3

0x0002,

0xf732,	// (0x0007c53b) popup_fixed_preview_cale_window_t_ParamLimits

0xf732,	// (0x0007c53b) popup_fixed_preview_cale_window_t

0x7398,	// (0x000741a1) list_single_fp_cale_pane_ParamLimits

0x7398,	// (0x000741a1) list_single_fp_cale_pane

0x73ad,	// (0x000741b6) list_single_fp_cale_pane_g1_ParamLimits

0x73ad,	// (0x000741b6) list_single_fp_cale_pane_g1

0x73b9,	// (0x000741c2) list_single_fp_cale_pane_g2_ParamLimits

0x73b9,	// (0x000741c2) list_single_fp_cale_pane_g2

0x0002,

0xf739,	// (0x0007c542) list_single_fp_cale_pane_g_ParamLimits

0xf739,	// (0x0007c542) list_single_fp_cale_pane_g

0x73d2,	// (0x000741db) list_single_fp_cale_pane_t1_ParamLimits

0x73d2,	// (0x000741db) list_single_fp_cale_pane_t1

0x73e4,	// (0x000741ed) list_single_fp_cale_pane_t2_ParamLimits

0x73e4,	// (0x000741ed) list_single_fp_cale_pane_t2

0x0001,

0xf740,	// (0x0007c549) list_single_fp_cale_pane_t_ParamLimits

0xf740,	// (0x0007c549) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x3069,	// (0x0006fe72) main_dialer_pane

0x3069,	// (0x0006fe72) aid_cell_size_keypad

0x3069,	// (0x0006fe72) dialer_ne_pane

0x3069,	// (0x0006fe72) grid_dialer_command_1_pane

0x3069,	// (0x0006fe72) grid_dialer_command_2_pane

0x3069,	// (0x0006fe72) grid_dialer_keypad_pane

0x7417,	// (0x00074220) bg_popup_call_pane_cp06_ParamLimits

0x7417,	// (0x00074220) bg_popup_call_pane_cp06

0x7417,	// (0x00074220) dialer_ne_clear_pane_ParamLimits

0x7417,	// (0x00074220) dialer_ne_clear_pane

0xba40,	// (0x00078849) dialer_ne_pane_g1

0xc5c8,	// (0x000793d1) dialer_ne_pane_t1_ParamLimits

0xc5c8,	// (0x000793d1) dialer_ne_pane_t1

0x7425,	// (0x0007422e) dialer_ne_pane_t2_ParamLimits

0x7425,	// (0x0007422e) dialer_ne_pane_t2

0x744d,	// (0x00074256) dialer_ne_pane_t3_ParamLimits

0x744d,	// (0x00074256) dialer_ne_pane_t3

0x0002,

0xf745,	// (0x0007c54e) dialer_ne_pane_t_ParamLimits

0xf745,	// (0x0007c54e) dialer_ne_pane_t

0x744d,	// (0x00074256) dialer_ne_pane_t3_copy1_ParamLimits

0x744d,	// (0x00074256) dialer_ne_pane_t3_copy1

0x747a,	// (0x00074283) cell_dialer_keypad_pane_ParamLimits

0x747a,	// (0x00074283) cell_dialer_keypad_pane

0x3294,	// (0x0007009d) cell_dialer_command_1_pane_ParamLimits

0x3294,	// (0x0007009d) cell_dialer_command_1_pane

0x7491,	// (0x0007429a) cell_dialer_command_2_pane_ParamLimits

0x7491,	// (0x0007429a) cell_dialer_command_2_pane

0x3294,	// (0x0007009d) bg_button_pane_cp02_ParamLimits

0x3294,	// (0x0007009d) bg_button_pane_cp02

0xb74e,	// (0x00078557) cell_dialer_keypad_pane_g1_ParamLimits

0xb74e,	// (0x00078557) cell_dialer_keypad_pane_g1

0x3294,	// (0x0007009d) bg_button_pane_cp03_ParamLimits

0x3294,	// (0x0007009d) bg_button_pane_cp03

0xb74e,	// (0x00078557) cell_dialer_command_1_pane_g1_ParamLimits

0xb74e,	// (0x00078557) cell_dialer_command_1_pane_g1

0x3069,	// (0x0006fe72) bg_button_pane_cp04

0xba40,	// (0x00078849) cell_dialer_command_2_pane_g1

0x3069,	// (0x0006fe72) bg_button_pane_cp06

0xba40,	// (0x00078849) dialer_ne_clear_pane_g1

0xc3db,	// (0x000791e4) navi_pane_g2

0xc409,	// (0x00079212) navi_pane_g3

0x0002,

0xf374,	// (0x0007c17d) navi_pane_g

0xc498,	// (0x000792a1) navi_pane_mv_g2

0xc4bf,	// (0x000792c8) navi_pane_mv_g5

0x57a1,	// (0x000725aa) navi_pane_mv_t1

0xb7e2,	// (0x000785eb) main_clock2_pane

0x3294,	// (0x0007009d) main_clock2_list_pane_ParamLimits

0x3294,	// (0x0007009d) main_clock2_list_pane

0x7541,	// (0x0007434a) main_clock2_pane_t1_ParamLimits

0x7541,	// (0x0007434a) main_clock2_pane_t1

0x757c,	// (0x00074385) main_clock2_pane_t2_ParamLimits

0x757c,	// (0x00074385) main_clock2_pane_t2

0x0004,

0xf751,	// (0x0007c55a) main_clock2_pane_t_ParamLimits

0xf751,	// (0x0007c55a) main_clock2_pane_t

0x761c,	// (0x00074425) popup_clock_analogue_window_cp03_ParamLimits

0x761c,	// (0x00074425) popup_clock_analogue_window_cp03

0x7641,	// (0x0007444a) popup_clock_digital_window_cp02_ParamLimits

0x7641,	// (0x0007444a) popup_clock_digital_window_cp02

0x76ba,	// (0x000744c3) main_clock2_list_single_pane_ParamLimits

0x76ba,	// (0x000744c3) main_clock2_list_single_pane

0xba00,	// (0x00078809) list_highlight_pane_cp05

0x76cc,	// (0x000744d5) main_clock2_list_single_pane_t1

0x460d,	// (0x00071416) popup_toolbar_window_cp04_ParamLimits

0xb75c,	// (0x00078565) camera2_autofocus_pane_g2_ParamLimits

0xb75c,	// (0x00078565) camera2_autofocus_pane_g2

0xb75c,	// (0x00078565) camera2_autofocus_pane_g3_ParamLimits

0xb75c,	// (0x00078565) camera2_autofocus_pane_g3

0xb75c,	// (0x00078565) camera2_autofocus_pane_g4_ParamLimits

0xb75c,	// (0x00078565) camera2_autofocus_pane_g4

0xb75c,	// (0x00078565) camera2_autofocus_pane_g5_ParamLimits

0xb75c,	// (0x00078565) camera2_autofocus_pane_g5

0x0004,

0xf695,	// (0x0007c49e) camera2_autofocus_pane_g_ParamLimits

0xf695,	// (0x0007c49e) camera2_autofocus_pane_g

0x6c81,	// (0x00073a8a) camera2_autofocus_pane_cp_g2

0x6c89,	// (0x00073a92) camera2_autofocus_pane_cp_g3

0x6c91,	// (0x00073a9a) camera2_autofocus_pane_cp_g4

0x6c99,	// (0x00073aa2) camera2_autofocus_pane_cp_g5

0x0004,

0xf6fb,	// (0x0007c504) camera2_autofocus_pane_cp_g

0x3069,	// (0x0006fe72) popup_dialer_spcha_window

0x3069,	// (0x0006fe72) bg_popup_sub_pane_cp07

0x3069,	// (0x0006fe72) list_spcha_pane

0x7779,	// (0x00074582) list_single_spcha_pane_ParamLimits

0x7779,	// (0x00074582) list_single_spcha_pane

0x3069,	// (0x0006fe72) list_highlight_pane_cp06

0xbf9d,	// (0x00078da6) list_single_spcha_pane_t1

0x0ed2,	// (0x0006dcdb) popup_call2_audio_out_window_g4_ParamLimits

0x0ed2,	// (0x0006dcdb) popup_call2_audio_out_window_g4

0x3069,	// (0x0006fe72) main_imed2_pane

0xcc93,	// (0x00079a9c) popup_imed_adjust2_window

0x64c9,	// (0x000732d2) popup_imed_trans_window_ParamLimits

0x64c9,	// (0x000732d2) popup_imed_trans_window

0x1693,	// (0x0006e49c) popup_blid_sat_info2_window_t1

0x16a1,	// (0x0006e4aa) popup_blid_sat_info2_window_t2

0x000a,

0xf62a,	// (0x0007c433) popup_blid_sat_info2_window_t

0x778b,	// (0x00074594) aid_size_cell_colour_35

0x77ab,	// (0x000745b4) aid_size_cell_colour_112

0x77cb,	// (0x000745d4) aid_size_cell_effect

0x140a,	// (0x0006e213) bg_tb_trans_pane_cp02

0xbecf,	// (0x00078cd8) heading_imed_pane

0x77eb,	// (0x000745f4) listscroll_imed_pane

0x77f7,	// (0x00074600) heading_imed_pane_g1

0x77ff,	// (0x00074608) heading_imed_pane_t1

0x780d,	// (0x00074616) grid_imed_colour_35_pane_ParamLimits

0x780d,	// (0x00074616) grid_imed_colour_35_pane

0x7824,	// (0x0007462d) grid_imed_effect_pane

0x783a,	// (0x00074643) list_imed_aspect_pane

0x7842,	// (0x0007464b) scroll_pane_cp027_ParamLimits

0x7842,	// (0x0007464b) scroll_pane_cp027

0x7853,	// (0x0007465c) cell_imed_effect_pane_ParamLimits

0x7853,	// (0x0007465c) cell_imed_effect_pane

0x787a,	// (0x00074683) cell_imed_colour_pane_ParamLimits

0x787a,	// (0x00074683) cell_imed_colour_pane

0x78bc,	// (0x000746c5) cell_imed_colour_pane_g1_ParamLimits

0x78bc,	// (0x000746c5) cell_imed_colour_pane_g1

0x78cd,	// (0x000746d6) hgihlgiht_grid_pane_cp016_ParamLimits

0x78cd,	// (0x000746d6) hgihlgiht_grid_pane_cp016

0x78de,	// (0x000746e7) cell_imed_effect_pane_g1

0x78e6,	// (0x000746ef) grid_highlight_pane_cp017

0x78ef,	// (0x000746f8) list_imed_single_pane_ParamLimits

0x78ef,	// (0x000746f8) list_imed_single_pane

0x3069,	// (0x0006fe72) list_highlight_pane_cp07

0x7904,	// (0x0007470d) list_imed_aspect_pane_comp1_t1

0x140a,	// (0x0006e213) bg_tb_trans_pane_cp05

0x7926,	// (0x0007472f) popup_imed_adjust2_window_g1

0x794d,	// (0x00074756) popup_imed_adjust2_window_t1

0x7965,	// (0x0007476e) slider_imed_adjust_pane

0x7979,	// (0x00074782) slider_imed_adjust_pane_g1

0x7989,	// (0x00074792) slider_imed_adjust_pane_g2

0x7999,	// (0x000747a2) slider_imed_adjust_pane_g3

0x79aa,	// (0x000747b3) slider_imed_adjust_pane_g4

0x0003,

0xf76e,	// (0x0007c577) slider_imed_adjust_pane_g

0x79bb,	// (0x000747c4) aid_size_cell_clipart2

0x79c7,	// (0x000747d0) grid_imed_clipart_pane

0x79d1,	// (0x000747da) scroll_pane_cp031

0x79d9,	// (0x000747e2) cell_imed_clipart_pane_ParamLimits

0x79d9,	// (0x000747e2) cell_imed_clipart_pane

0x79fb,	// (0x00074804) cell_imed_clipart_pane_g1

0x3069,	// (0x0006fe72) grid_highlight_pane_cp014

0x751d,	// (0x00074326) main_clock2_pane_g1_ParamLimits

0x751d,	// (0x00074326) main_clock2_pane_g1

0x7661,	// (0x0007446a) aid_call2_pane_cp10

0x7673,	// (0x0007447c) aid_call_pane_cp10

0xc33c,	// (0x00079145) popup_clock_analogue_window_cp10_g1

0xc33c,	// (0x00079145) popup_clock_analogue_window_cp10_g2

0x7685,	// (0x0007448e) popup_clock_analogue_window_cp10_g3

0x7685,	// (0x0007448e) popup_clock_analogue_window_cp10_g4

0xc33c,	// (0x00079145) popup_clock_analogue_window_cp10_g5

0x0004,

0xf75c,	// (0x0007c565) popup_clock_analogue_window_cp10_g

0x769b,	// (0x000744a4) popup_clock_analogue_window_cp10_t1

0x76da,	// (0x000744e3) clock_digital_number_pane_cp10_ParamLimits

0x76da,	// (0x000744e3) clock_digital_number_pane_cp10

0x76f2,	// (0x000744fb) clock_digital_number_pane_cp11_ParamLimits

0x76f2,	// (0x000744fb) clock_digital_number_pane_cp11

0x770a,	// (0x00074513) clock_digital_number_pane_cp12_ParamLimits

0x770a,	// (0x00074513) clock_digital_number_pane_cp12

0x7724,	// (0x0007452d) clock_digital_number_pane_cp13_ParamLimits

0x7724,	// (0x0007452d) clock_digital_number_pane_cp13

0x773e,	// (0x00074547) clock_digital_separator_pane_cp10_ParamLimits

0x773e,	// (0x00074547) clock_digital_separator_pane_cp10

0x7758,	// (0x00074561) popup_clock_digital_window_cp02_t1_ParamLimits

0x7758,	// (0x00074561) popup_clock_digital_window_cp02_t1

0x39be,	// (0x000707c7) clock_digital_number_pane_cp10_g1

0x39be,	// (0x000707c7) clock_digital_number_pane_cp10_g2

0x0001,

0xf777,	// (0x0007c580) clock_digital_number_pane_cp10_g

0x39be,	// (0x000707c7) clock_digital_separator_pane_cp10_g1

0x39be,	// (0x000707c7) clock_digital_separator_pane_g2_cp10

0xc4c7,	// (0x000792d0) navi_pane_vded_g4

0xc4d0,	// (0x000792d9) navi_pane_vded_g5

0xc4d9,	// (0x000792e2) navi_pane_vded_t1

0x3069,	// (0x0006fe72) main_vded_pane

0x7a04,	// (0x0007480d) main_vded_pane_g1

0x7a0e,	// (0x00074817) main_vded_pane_g2

0x7a18,	// (0x00074821) main_vded_pane_g3

0x0002,

0xf77c,	// (0x0007c585) main_vded_pane_g

0x7a22,	// (0x0007482b) main_vded_pane_t1

0x7a30,	// (0x00074839) main_vded_pane_t2

0x0001,

0xf783,	// (0x0007c58c) main_vded_pane_t

0x7a3e,	// (0x00074847) vded_slider_pane

0x7a46,	// (0x0007484f) vded_video_pane

0x7a4e,	// (0x00074857) vded_video_pane_g1

0x7a58,	// (0x00074861) vded_video_pane_g2

0xba40,	// (0x00078849) vded_video_pane_g3

0x0002,

0xf788,	// (0x0007c591) vded_video_pane_g

0x7a61,	// (0x0007486a) vded_slider_pane_g1

0x15be,	// (0x0006e3c7) vded_slider_pane_g2

0x7a6a,	// (0x00074873) vded_slider_pane_g3

0x7a73,	// (0x0007487c) vded_slider_pane_g4

0x7a7c,	// (0x00074885) vded_slider_pane_g5

0x0004,

0xf78f,	// (0x0007c598) vded_slider_pane_g

0x7245,	// (0x0007404e) mup3_rocker_pane_ParamLimits

0x7245,	// (0x0007404e) mup3_rocker_pane

0x7a85,	// (0x0007488e) mup3_control_keys_pane_g1

0x7a8d,	// (0x00074896) mup3_control_keys_pane_g2

0x7a95,	// (0x0007489e) mup3_control_keys_pane_g3

0x7a9d,	// (0x000748a6) mup3_control_keys_pane_g4

0x0003,

0xf79a,	// (0x0007c5a3) mup3_control_keys_pane_g

0x3270,	// (0x00070079) popup_toolbar2_fixed_window_cp01_ParamLimits

0x3270,	// (0x00070079) popup_toolbar2_fixed_window_cp01

0x7281,	// (0x0007408a) popup_toolbar2_fixed_window_cp02_ParamLimits

0x7281,	// (0x0007408a) popup_toolbar2_fixed_window_cp02

0x0869,	// (0x0006d672) popup_call2_audio_second_window_t4_ParamLimits

0x0869,	// (0x0006d672) popup_call2_audio_second_window_t4

0x0d97,	// (0x0006dba0) popup_call2_audio_first_window_t6_ParamLimits

0x0d97,	// (0x0006dba0) popup_call2_audio_first_window_t6

0x0fd5,	// (0x0006ddde) popup_call2_audio_out_window_t6_ParamLimits

0x0fd5,	// (0x0006ddde) popup_call2_audio_out_window_t6

0x3069,	// (0x0006fe72) main_vitu_pane

0x3294,	// (0x0007009d) aid_size_cell_itu_ParamLimits

0x3294,	// (0x0007009d) aid_size_cell_itu

0x3294,	// (0x0007009d) bg_popup_window_pane_cp08_ParamLimits

0x3294,	// (0x0007009d) bg_popup_window_pane_cp08

0x3294,	// (0x0007009d) field_vitu_entry_pane_ParamLimits

0x3294,	// (0x0007009d) field_vitu_entry_pane

0x3294,	// (0x0007009d) grid_vitu_function_pane_ParamLimits

0x3294,	// (0x0007009d) grid_vitu_function_pane

0x3294,	// (0x0007009d) grid_vitu_itu_pane_ParamLimits

0x3294,	// (0x0007009d) grid_vitu_itu_pane

0x3294,	// (0x0007009d) cell_vitu_itu_pane_ParamLimits

0x3294,	// (0x0007009d) cell_vitu_itu_pane

0x3294,	// (0x0007009d) cell_vitu_function_pane_ParamLimits

0x3294,	// (0x0007009d) cell_vitu_function_pane

0x3294,	// (0x0007009d) bg_popup_sub_pane_cp08_ParamLimits

0x3294,	// (0x0007009d) bg_popup_sub_pane_cp08

0xba12,	// (0x0007881b) field_vitu_entry_pane_t1_ParamLimits

0xba12,	// (0x0007881b) field_vitu_entry_pane_t1

0x7aad,	// (0x000748b6) field_vitu_entry_pane_t2_ParamLimits

0x7aad,	// (0x000748b6) field_vitu_entry_pane_t2

0x0001,

0xf7a3,	// (0x0007c5ac) field_vitu_entry_pane_t_ParamLimits

0xf7a3,	// (0x0007c5ac) field_vitu_entry_pane_t

0x0808,	// (0x0006d611) bg_button_pane_cp05_ParamLimits

0x0808,	// (0x0006d611) bg_button_pane_cp05

0x7aca,	// (0x000748d3) cell_vitu_itu_pane_g1

0x14f5,	// (0x0006e2fe) cell_vitu_itu_pane_t1_ParamLimits

0x14f5,	// (0x0006e2fe) cell_vitu_itu_pane_t1

0x14f5,	// (0x0006e2fe) cell_vitu_itu_pane_t2_ParamLimits

0x14f5,	// (0x0006e2fe) cell_vitu_itu_pane_t2

0x0002,

0xf7a8,	// (0x0007c5b1) cell_vitu_itu_pane_t_ParamLimits

0xf7a8,	// (0x0007c5b1) cell_vitu_itu_pane_t

0x3069,	// (0x0006fe72) bg_button_pane_cp07

0xba40,	// (0x00078849) cell_vitu_function_pane_g1

0xb78c,	// (0x00078595) main_calc_pane_g1

0x3097,	// (0x0006fea0) aid_visual_content_pane

0x3069,	// (0x0006fe72) main_vradio_pane

0xb74e,	// (0x00078557) main_vradio_pane_g1_ParamLimits

0xb74e,	// (0x00078557) main_vradio_pane_g1

0xb75c,	// (0x00078565) main_vradio_pane_g2_ParamLimits

0xb75c,	// (0x00078565) main_vradio_pane_g2

0x0001,

0xf7af,	// (0x0007c5b8) main_vradio_pane_g_ParamLimits

0xf7af,	// (0x0007c5b8) main_vradio_pane_g

0xba12,	// (0x0007881b) main_vradio_pane_t1_ParamLimits

0xba12,	// (0x0007881b) main_vradio_pane_t1

0xba12,	// (0x0007881b) main_vradio_pane_t2_ParamLimits

0xba12,	// (0x0007881b) main_vradio_pane_t2

0xc5c8,	// (0x000793d1) main_vradio_pane_t3_ParamLimits

0xc5c8,	// (0x000793d1) main_vradio_pane_t3

0x0002,

0xf7b4,	// (0x0007c5bd) main_vradio_pane_t_ParamLimits

0xf7b4,	// (0x0007c5bd) main_vradio_pane_t

0x3294,	// (0x0007009d) vradio_rocker_control_pane_ParamLimits

0x3294,	// (0x0007009d) vradio_rocker_control_pane

0x3294,	// (0x0007009d) vradio_station_info_pane_ParamLimits

0x3294,	// (0x0007009d) vradio_station_info_pane

0x3294,	// (0x0007009d) vradio_frequency_info_pane_ParamLimits

0x3294,	// (0x0007009d) vradio_frequency_info_pane

0xba40,	// (0x00078849) vradio_station_info_pane_g1

0x14f5,	// (0x0006e2fe) vradio_station_info_pane_t1_ParamLimits

0x14f5,	// (0x0006e2fe) vradio_station_info_pane_t1

0xc5c8,	// (0x000793d1) vradio_station_info_pane_t2_ParamLimits

0xc5c8,	// (0x000793d1) vradio_station_info_pane_t2

0x0001,

0xf7bb,	// (0x0007c5c4) vradio_station_info_pane_t_ParamLimits

0xf7bb,	// (0x0007c5c4) vradio_station_info_pane_t

0x3069,	// (0x0006fe72) vradio_tuning_pane

0x7ae6,	// (0x000748ef) vradio_rocker_control_pane_g1

0x7af0,	// (0x000748f9) vradio_rocker_control_pane_g2

0x7af8,	// (0x00074901) vradio_rocker_control_pane_g3

0x7b02,	// (0x0007490b) vradio_rocker_control_pane_g4

0x7b0c,	// (0x00074915) vradio_rocker_control_pane_g5

0x0004,

0xf7c0,	// (0x0007c5c9) vradio_rocker_control_pane_g

0xba40,	// (0x00078849) vradio_frequency_info_pane_g1

0xba12,	// (0x0007881b) vradio_frequency_info_pane_t1_ParamLimits

0xba12,	// (0x0007881b) vradio_frequency_info_pane_t1

0x7b16,	// (0x0007491f) vradio_tuning_pane_g1

0x7b23,	// (0x0007492c) vradio_tuning_pane_t1

0xb70d,	// (0x00078516) area_side_right_pane_ParamLimits

0xb70d,	// (0x00078516) area_side_right_pane

0x13c5,	// (0x0006e1ce) status_small_pane_g1

0x13cd,	// (0x0006e1d6) status_small_pane_g2

0x13d6,	// (0x0006e1df) status_small_pane_g3

0x13df,	// (0x0006e1e8) status_small_pane_g4

0x0003,

0xf58c,	// (0x0007c395) status_small_pane_g

0x13e8,	// (0x0006e1f1) status_small_pane_t1

0x3069,	// (0x0006fe72) main_video3_pane

0x7b32,	// (0x0007493b) cams_zoom_vslider_pane

0x7b3a,	// (0x00074943) image3_wide_pane_ParamLimits

0x7b3a,	// (0x00074943) image3_wide_pane

0x7b54,	// (0x0007495d) image3_wide_small_pane

0x7b60,	// (0x00074969) main_video3_pane_g1_ParamLimits

0x7b60,	// (0x00074969) main_video3_pane_g1

0x7b7c,	// (0x00074985) main_video3_pane_g2_ParamLimits

0x7b7c,	// (0x00074985) main_video3_pane_g2

0x0001,

0xf7cb,	// (0x0007c5d4) main_video3_pane_g_ParamLimits

0xf7cb,	// (0x0007c5d4) main_video3_pane_g

0x7b98,	// (0x000749a1) main_video3_pane_t1_ParamLimits

0x7b98,	// (0x000749a1) main_video3_pane_t1

0x7bc3,	// (0x000749cc) main_video3_pane_t2_ParamLimits

0x7bc3,	// (0x000749cc) main_video3_pane_t2

0x7bee,	// (0x000749f7) main_video3_pane_t3_ParamLimits

0x7bee,	// (0x000749f7) main_video3_pane_t3

0x0002,

0xf7d0,	// (0x0007c5d9) main_video3_pane_t_ParamLimits

0xf7d0,	// (0x0007c5d9) main_video3_pane_t

0x7c1b,	// (0x00074a24) cams_zoom_vslider_pane_g1

0x7c24,	// (0x00074a2d) cams_zoom_vslider_pane_g2

0x0001,

0xf7d7,	// (0x0007c5e0) cams_zoom_vslider_pane_g

0x7c2c,	// (0x00074a35) small_slider_vertical_pane

0xba40,	// (0x00078849) small_slider_vertical_pane_g1

0xba40,	// (0x00078849) small_slider_vertical_pane_g2

0x7c34,	// (0x00074a3d) small_slider_vertical_pane_g3

0x0002,

0xf7dc,	// (0x0007c5e5) small_slider_vertical_pane_g

0x3069,	// (0x0006fe72) main_hwr_training_pane

0x7c3d,	// (0x00074a46) hwr_training_instruct_pane_ParamLimits

0x7c3d,	// (0x00074a46) hwr_training_instruct_pane

0x7c5f,	// (0x00074a68) hwr_training_navi_pane_ParamLimits

0x7c5f,	// (0x00074a68) hwr_training_navi_pane

0x7c7e,	// (0x00074a87) hwr_training_write_pane_ParamLimits

0x7c7e,	// (0x00074a87) hwr_training_write_pane

0x3069,	// (0x0006fe72) bg_frame_shadow_pane

0x7cce,	// (0x00074ad7) hwr_training_write_pane_g1

0x7cd6,	// (0x00074adf) hwr_training_write_pane_g2

0x7cde,	// (0x00074ae7) hwr_training_write_pane_g3

0x7ce6,	// (0x00074aef) hwr_training_write_pane_g4

0x7cee,	// (0x00074af7) hwr_training_write_pane_g5

0x7cf6,	// (0x00074aff) hwr_training_write_pane_g6

0x7cfe,	// (0x00074b07) hwr_training_write_pane_g7

0x0006,

0xf7e3,	// (0x0007c5ec) hwr_training_write_pane_g

0xeb54,	// (0x0007b95d) hwr_training_navi_pane_g1_ParamLimits

0xeb54,	// (0x0007b95d) hwr_training_navi_pane_g1

0xeb66,	// (0x0007b96f) hwr_training_navi_pane_g2_ParamLimits

0xeb66,	// (0x0007b96f) hwr_training_navi_pane_g2

0xeb78,	// (0x0007b981) hwr_training_navi_pane_g3_ParamLimits

0xeb78,	// (0x0007b981) hwr_training_navi_pane_g3

0xeb88,	// (0x0007b991) hwr_training_navi_pane_g4_ParamLimits

0xeb88,	// (0x0007b991) hwr_training_navi_pane_g4

0x0004,

0xf7f2,	// (0x0007c5fb) hwr_training_navi_pane_g_ParamLimits

0xf7f2,	// (0x0007c5fb) hwr_training_navi_pane_g

0xeb95,	// (0x0007b99e) hwr_training_navi_pane_t1

0x7d13,	// (0x00074b1c) list_single_hwr_training_instruct_pane_ParamLimits

0x7d13,	// (0x00074b1c) list_single_hwr_training_instruct_pane

0x7d28,	// (0x00074b31) list_single_hwr_training_instruct_pane_t1

0x1794,	// (0x0006e59d) bg_frame_shadow_pane_g1

0x7d37,	// (0x00074b40) bg_frame_shadow_pane_g2

0x7d3f,	// (0x00074b48) bg_frame_shadow_pane_g3

0x7d47,	// (0x00074b50) bg_frame_shadow_pane_g4

0x7d4f,	// (0x00074b58) bg_frame_shadow_pane_g5

0x7d57,	// (0x00074b60) bg_frame_shadow_pane_g6

0x7d5f,	// (0x00074b68) bg_frame_shadow_pane_g7

0xb8b5,	// (0x000786be) bg_frame_shadow_pane_g8

0x0007,

0xf7fd,	// (0x0007c606) bg_frame_shadow_pane_g

0x3069,	// (0x0006fe72) main_video_tele_dialer_pane

0x7d67,	// (0x00074b70) aid_size_cell_video_keypad_ParamLimits

0x7d67,	// (0x00074b70) aid_size_cell_video_keypad

0x7d81,	// (0x00074b8a) grid_video_dialer_keypad_pane_ParamLimits

0x7d81,	// (0x00074b8a) grid_video_dialer_keypad_pane

0x7dcd,	// (0x00074bd6) video_down_pane_cp_ParamLimits

0x7dcd,	// (0x00074bd6) video_down_pane_cp

0x7dff,	// (0x00074c08) cell_video_dialer_keypad_pane_ParamLimits

0x7dff,	// (0x00074c08) cell_video_dialer_keypad_pane

0x7e21,	// (0x00074c2a) bg_button_pane_cp08_ParamLimits

0x7e21,	// (0x00074c2a) bg_button_pane_cp08

0x7e2d,	// (0x00074c36) cell_video_dialer_keypad_pane_g1_ParamLimits

0x7e2d,	// (0x00074c36) cell_video_dialer_keypad_pane_g1

0x722f,	// (0x00074038) mup3_rocker2_pane_ParamLimits

0x722f,	// (0x00074038) mup3_rocker2_pane

0xba40,	// (0x00078849) mup3_rocker2_pane_g1

0x639e,	// (0x000731a7) main_dialer2_pane

0x3069,	// (0x0006fe72) main_mp4_pane

0xebc1,	// (0x0007b9ca) main_mp4_pane_g1_ParamLimits

0xebc1,	// (0x0007b9ca) main_mp4_pane_g1

0xebc1,	// (0x0007b9ca) main_mp4_pane_g2_ParamLimits

0xebc1,	// (0x0007b9ca) main_mp4_pane_g2

0x7e64,	// (0x00074c6d) main_mp4_pane_g3_ParamLimits

0x7e64,	// (0x00074c6d) main_mp4_pane_g3

0xebcf,	// (0x0007b9d8) main_mp4_pane_g4_ParamLimits

0xebcf,	// (0x0007b9d8) main_mp4_pane_g4

0xebfd,	// (0x0007ba06) main_mp4_pane_g5_ParamLimits

0xebfd,	// (0x0007ba06) main_mp4_pane_g5

0x0007,

0xf81d,	// (0x0007c626) main_mp4_pane_g_ParamLimits

0xf81d,	// (0x0007c626) main_mp4_pane_g

0xec71,	// (0x0007ba7a) main_mp4_pane_t1_ParamLimits

0xec71,	// (0x0007ba7a) main_mp4_pane_t1

0xeccd,	// (0x0007bad6) main_mp4_pane_t2_ParamLimits

0xeccd,	// (0x0007bad6) main_mp4_pane_t2

0x7ea0,	// (0x00074ca9) main_mp4_pane_t3_ParamLimits

0x7ea0,	// (0x00074ca9) main_mp4_pane_t3

0xed1f,	// (0x0007bb28) main_mp4_pane_t4_ParamLimits

0xed1f,	// (0x0007bb28) main_mp4_pane_t4

0x0003,

0xf82e,	// (0x0007c637) main_mp4_pane_t_ParamLimits

0xf82e,	// (0x0007c637) main_mp4_pane_t

0xed63,	// (0x0007bb6c) mp4_progress_pane_ParamLimits

0xed63,	// (0x0007bb6c) mp4_progress_pane

0xedad,	// (0x0007bbb6) mp4_rocker_pane_ParamLimits

0xedad,	// (0x0007bbb6) mp4_rocker_pane

0xcd67,	// (0x00079b70) mp4_progress_pane_t1

0xcd80,	// (0x00079b89) mp4_progress_pane_t2

0x0001,

0xf837,	// (0x0007c640) mp4_progress_pane_t

0xcd99,	// (0x00079ba2) mup_progress_pane_cp04

0xba40,	// (0x00078849) mp4_rocker_pane_g1

0x7ec6,	// (0x00074ccf) aid_cell_size_keypad2_ParamLimits

0x7ec6,	// (0x00074ccf) aid_cell_size_keypad2

0x7edc,	// (0x00074ce5) dialer2_ne_pane_ParamLimits

0x7edc,	// (0x00074ce5) dialer2_ne_pane

0x7ef6,	// (0x00074cff) grid_dialer2_keypad_pane_ParamLimits

0x7ef6,	// (0x00074cff) grid_dialer2_keypad_pane

0x0808,	// (0x0006d611) bg_popup_call_pane_cp07_ParamLimits

0x0808,	// (0x0006d611) bg_popup_call_pane_cp07

0x7f12,	// (0x00074d1b) dialer2_ne_pane_t1_ParamLimits

0x7f12,	// (0x00074d1b) dialer2_ne_pane_t1

0x7f4d,	// (0x00074d56) cell_dialer2_keypad_pane_ParamLimits

0x7f4d,	// (0x00074d56) cell_dialer2_keypad_pane

0xcdbe,	// (0x00079bc7) bg_button_pane_pane_cp04_ParamLimits

0xcdbe,	// (0x00079bc7) bg_button_pane_pane_cp04

0x7f6f,	// (0x00074d78) cell_dialer2_keypad_pane_g1_ParamLimits

0x7f6f,	// (0x00074d78) cell_dialer2_keypad_pane_g1

0x44e1,	// (0x000712ea) aid_placing_vt_set_content_ParamLimits

0x44e1,	// (0x000712ea) aid_placing_vt_set_content

0x4509,	// (0x00071312) aid_placing_vt_set_title_ParamLimits

0x4509,	// (0x00071312) aid_placing_vt_set_title

0x3069,	// (0x0006fe72) main_image3_pane

0x8035,	// (0x00074e3e) area_side_right_pane_cp01_ParamLimits

0x8035,	// (0x00074e3e) area_side_right_pane_cp01

0xebc1,	// (0x0007b9ca) main_image3_pane_g1_ParamLimits

0xebc1,	// (0x0007b9ca) main_image3_pane_g1

0x804c,	// (0x00074e55) main_image3_pane_g2_ParamLimits

0x804c,	// (0x00074e55) main_image3_pane_g2

0x8074,	// (0x00074e7d) main_image3_pane_g3_ParamLimits

0x8074,	// (0x00074e7d) main_image3_pane_g3

0x809e,	// (0x00074ea7) main_image3_pane_g4_ParamLimits

0x809e,	// (0x00074ea7) main_image3_pane_g4

0x0003,

0xf846,	// (0x0007c64f) main_image3_pane_g_ParamLimits

0xf846,	// (0x0007c64f) main_image3_pane_g

0x80c8,	// (0x00074ed1) main_image3_pane_t1_ParamLimits

0x80c8,	// (0x00074ed1) main_image3_pane_t1

0x8120,	// (0x00074f29) main_image3_pane_t2_ParamLimits

0x8120,	// (0x00074f29) main_image3_pane_t2

0x8172,	// (0x00074f7b) main_image3_pane_t3_ParamLimits

0x8172,	// (0x00074f7b) main_image3_pane_t3

0x0003,

0xf84f,	// (0x0007c658) main_image3_pane_t_ParamLimits

0xf84f,	// (0x0007c658) main_image3_pane_t

0x3294,	// (0x0007009d) grid_sctrl_middle_pane_cp01_ParamLimits

0x3294,	// (0x0007009d) grid_sctrl_middle_pane_cp01

0x81fa,	// (0x00075003) cell_sctrl_middle_pane_cp01_ParamLimits

0x81fa,	// (0x00075003) cell_sctrl_middle_pane_cp01

0x8217,	// (0x00075020) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x8217,	// (0x00075020) cell_sctrl_middle_pane_cp01_g1

0x3069,	// (0x0006fe72) main_call4_pane

0x822d,	// (0x00075036) aid_size_button_call4_ParamLimits

0x822d,	// (0x00075036) aid_size_button_call4

0x8260,	// (0x00075069) call4_windows_pane_ParamLimits

0x8260,	// (0x00075069) call4_windows_pane

0x827f,	// (0x00075088) grid_call4_button_pane_ParamLimits

0x827f,	// (0x00075088) grid_call4_button_pane

0x82b2,	// (0x000750bb) call4_windows_conf_pane

0x82c9,	// (0x000750d2) popup_call4_audio_first_window_ParamLimits

0x82c9,	// (0x000750d2) popup_call4_audio_first_window

0x8319,	// (0x00075122) popup_call4_audio_second_window_ParamLimits

0x8319,	// (0x00075122) popup_call4_audio_second_window

0x8330,	// (0x00075139) popup_call4_audio_wait_window_ParamLimits

0x8330,	// (0x00075139) popup_call4_audio_wait_window

0x833e,	// (0x00075147) cell_call4_button_pane_ParamLimits

0x833e,	// (0x00075147) cell_call4_button_pane

0x8363,	// (0x0007516c) bg_button_pane_cp09_ParamLimits

0x8363,	// (0x0007516c) bg_button_pane_cp09

0x836f,	// (0x00075178) cell_call4_button_pane_g1_ParamLimits

0x836f,	// (0x00075178) cell_call4_button_pane_g1

0x8395,	// (0x0007519e) cell_call4_button_pane_t1_ParamLimits

0x8395,	// (0x0007519e) cell_call4_button_pane_t1

0xcdd2,	// (0x00079bdb) popup_call4_audio_conf_window_ParamLimits

0xcdd2,	// (0x00079bdb) popup_call4_audio_conf_window

0x7297,	// (0x000740a0) mup3_progress_pane_t1_ParamLimits

0x72b6,	// (0x000740bf) mup3_progress_pane_t2_ParamLimits

0x72d5,	// (0x000740de) mup3_progress_pane_t3_ParamLimits

0xf724,	// (0x0007c52d) mup3_progress_pane_t_ParamLimits

0x72f2,	// (0x000740fb) mup_progress_pane_cp03_ParamLimits

0x7aa5,	// (0x000748ae) mup3_control_keys_pane_g4_copy1

0xed91,	// (0x0007bb9a) mp4_rocker2_pane_ParamLimits

0xed91,	// (0x0007bb9a) mp4_rocker2_pane

0xcde6,	// (0x00079bef) mp4_rocker2_pane_g1

0xcdee,	// (0x00079bf7) mp4_rocker2_pane_g2

0xee31,	// (0x0007bc3a) mp4_rocker2_pane_g3

0xee39,	// (0x0007bc42) mp4_rocker2_pane_g4

0xee41,	// (0x0007bc4a) mp4_rocker2_pane_g5

0x0004,

0xf858,	// (0x0007c661) mp4_rocker2_pane_g

0x3069,	// (0x0006fe72) main_camera4_pane

0x3069,	// (0x0006fe72) main_video4_pane

0x7d9b,	// (0x00074ba4) main_video_tele_dialer_pane_t1_ParamLimits

0x7d9b,	// (0x00074ba4) main_video_tele_dialer_pane_t1

0x7db4,	// (0x00074bbd) main_video_tele_dialer_pane_t2_ParamLimits

0x7db4,	// (0x00074bbd) main_video_tele_dialer_pane_t2

0x0001,

0xf80e,	// (0x0007c617) main_video_tele_dialer_pane_t_ParamLimits

0xf80e,	// (0x0007c617) main_video_tele_dialer_pane_t

0x83d3,	// (0x000751dc) cam4_autofocus_pane_ParamLimits

0x83d3,	// (0x000751dc) cam4_autofocus_pane

0x83e9,	// (0x000751f2) cam4_image_uncrop_pane_ParamLimits

0x83e9,	// (0x000751f2) cam4_image_uncrop_pane

0x8403,	// (0x0007520c) cam4_indicators_pane_ParamLimits

0x8403,	// (0x0007520c) cam4_indicators_pane

0x842e,	// (0x00075237) main_camera4_pane_g1_ParamLimits

0x842e,	// (0x00075237) main_camera4_pane_g1

0x8440,	// (0x00075249) main_camera4_pane_g2_ParamLimits

0x8440,	// (0x00075249) main_camera4_pane_g2

0x8453,	// (0x0007525c) main_camera4_pane_g3_ParamLimits

0x8453,	// (0x0007525c) main_camera4_pane_g3

0x8466,	// (0x0007526f) main_camera4_pane_g4_ParamLimits

0x8466,	// (0x0007526f) main_camera4_pane_g4

0x8479,	// (0x00075282) main_camera4_pane_g5_ParamLimits

0x8479,	// (0x00075282) main_camera4_pane_g5

0x0005,

0xf863,	// (0x0007c66c) main_camera4_pane_g_ParamLimits

0xf863,	// (0x0007c66c) main_camera4_pane_g

0x849d,	// (0x000752a6) main_camera4_pane_t1_ParamLimits

0x849d,	// (0x000752a6) main_camera4_pane_t1

0xb74e,	// (0x00078557) bg_tb_trans_pane_cp06

0xee6d,	// (0x0007bc76) cam4_indicators_pane_g1

0xee7e,	// (0x0007bc87) cam4_indicators_pane_g2

0x0002,

0xf87e,	// (0x0007c687) cam4_indicators_pane_g

0xee9c,	// (0x0007bca5) cam4_indicators_pane_t1

0x8501,	// (0x0007530a) main_video4_pane_g1_ParamLimits

0x8501,	// (0x0007530a) main_video4_pane_g1

0x8510,	// (0x00075319) main_video4_pane_g2_ParamLimits

0x8510,	// (0x00075319) main_video4_pane_g2

0x851f,	// (0x00075328) main_video4_pane_g3_ParamLimits

0x851f,	// (0x00075328) main_video4_pane_g3

0x852e,	// (0x00075337) main_video4_pane_g4_ParamLimits

0x852e,	// (0x00075337) main_video4_pane_g4

0x0004,

0xf885,	// (0x0007c68e) main_video4_pane_g_ParamLimits

0xf885,	// (0x0007c68e) main_video4_pane_g

0x854c,	// (0x00075355) vid4_indicators_pane_ParamLimits

0x854c,	// (0x00075355) vid4_indicators_pane

0x857a,	// (0x00075383) video4_image_uncrop_cif_pane_ParamLimits

0x857a,	// (0x00075383) video4_image_uncrop_cif_pane

0x8594,	// (0x0007539d) video4_image_uncrop_nhd_pane_ParamLimits

0x8594,	// (0x0007539d) video4_image_uncrop_nhd_pane

0x83e9,	// (0x000751f2) video4_image_uncrop_vga_pane_ParamLimits

0x83e9,	// (0x000751f2) video4_image_uncrop_vga_pane

0x3294,	// (0x0007009d) bg_tb_trans_pane_cp07

0xeec8,	// (0x0007bcd1) vid4_indicators_pane_g1

0xeedc,	// (0x0007bce5) vid4_indicators_pane_g2

0xeef0,	// (0x0007bcf9) vid4_indicators_pane_g3

0x0004,

0xf890,	// (0x0007c699) vid4_indicators_pane_g

0xef1f,	// (0x0007bd28) vid4_indicators_pane_t1

0x85a8,	// (0x000753b1) cam4_autofocus_pane_g1

0x85b0,	// (0x000753b9) cam4_autofocus_pane_g2

0x85b8,	// (0x000753c1) cam4_autofocus_pane_g3

0x0002,

0xf89b,	// (0x0007c6a4) cam4_autofocus_pane_g

0x85c0,	// (0x000753c9) cam4_autofocus_pane_g3_copy1

0x7de3,	// (0x00074bec) video_down_pane_cp_t1

0x7df1,	// (0x00074bfa) video_down_pane_cp_t2

0x0001,

0xf813,	// (0x0007c61c) video_down_pane_cp_t

0x3294,	// (0x0007009d) popup_vitu2_window_ParamLimits

0x3294,	// (0x0007009d) popup_vitu2_window

0x85c8,	// (0x000753d1) aid_size_cell2_itu2_ParamLimits

0x85c8,	// (0x000753d1) aid_size_cell2_itu2

0x85e8,	// (0x000753f1) aid_size_cell_itu2_ParamLimits

0x85e8,	// (0x000753f1) aid_size_cell_itu2

0x7417,	// (0x00074220) bg_popup_window_pane_cp09_ParamLimits

0x7417,	// (0x00074220) bg_popup_window_pane_cp09

0x8635,	// (0x0007543e) field_vitu2_entry_pane_ParamLimits

0x8635,	// (0x0007543e) field_vitu2_entry_pane

0x8658,	// (0x00075461) grid_vitu2_function_pane_ParamLimits

0x8658,	// (0x00075461) grid_vitu2_function_pane

0x86a3,	// (0x000754ac) grid_vitu2_itu_pane_ParamLimits

0x86a3,	// (0x000754ac) grid_vitu2_itu_pane

0x8731,	// (0x0007553a) cell_vitu2_itu_pane_ParamLimits

0x8731,	// (0x0007553a) cell_vitu2_itu_pane

0x875d,	// (0x00075566) cell_vitu2_function_pane_ParamLimits

0x875d,	// (0x00075566) cell_vitu2_function_pane

0xcdf6,	// (0x00079bff) bg_popup_call_pane_cp08_ParamLimits

0xcdf6,	// (0x00079bff) bg_popup_call_pane_cp08

0xce0d,	// (0x00079c16) field_vitu2_entry_pane_g1

0xce19,	// (0x00079c22) field_vitu2_entry_pane_g2

0x0002,

0xf8a2,	// (0x0007c6ab) field_vitu2_entry_pane_g

0x2917,	// (0x0006f720) field_vitu2_entry_pane_t1_ParamLimits

0x2917,	// (0x0006f720) field_vitu2_entry_pane_t1

0xce25,	// (0x00079c2e) field_vitu2_entry_pane_t2_ParamLimits

0xce25,	// (0x00079c2e) field_vitu2_entry_pane_t2

0x0001,

0xf8a9,	// (0x0007c6b2) field_vitu2_entry_pane_t_ParamLimits

0xf8a9,	// (0x0007c6b2) field_vitu2_entry_pane_t

0x879c,	// (0x000755a5) bg_button_pane_cp010_ParamLimits

0x879c,	// (0x000755a5) bg_button_pane_cp010

0x87aa,	// (0x000755b3) cell_vitu2_itu_pane_g1

0x87d0,	// (0x000755d9) cell_vitu2_itu_pane_t1_ParamLimits

0x87d0,	// (0x000755d9) cell_vitu2_itu_pane_t1

0x2946,	// (0x0006f74f) cell_vitu2_itu_pane_t2_ParamLimits

0x2946,	// (0x0006f74f) cell_vitu2_itu_pane_t2

0x0002,

0xf8b3,	// (0x0007c6bc) cell_vitu2_itu_pane_t_ParamLimits

0xf8b3,	// (0x0007c6bc) cell_vitu2_itu_pane_t

0x3294,	// (0x0007009d) bg_button_pane_cp011

0x882e,	// (0x00075637) cell_vitu2_function_pane_g1

0x3069,	// (0x0006fe72) main_myfav_hc_pane

0x81c2,	// (0x00074fcb) popup_image3_note_pane_ParamLimits

0x81c2,	// (0x00074fcb) popup_image3_note_pane

0x81de,	// (0x00074fe7) popup_image3_tool_bar_pane_ParamLimits

0x81de,	// (0x00074fe7) popup_image3_tool_bar_pane

0x29d4,	// (0x0006f7dd) cell_vitu2_itu_pane_t3_ParamLimits

0x29d4,	// (0x0006f7dd) cell_vitu2_itu_pane_t3

0x3069,	// (0x0006fe72) bg_popup_trans_pane

0xce4a,	// (0x00079c53) grid_image3_tool_bar_pane

0xce54,	// (0x00079c5d) bg_popup_trans_pane_g1

0xbc51,	// (0x00078a5a) bg_popup_trans_pane_g2

0xce5c,	// (0x00079c65) bg_popup_trans_pane_g3

0xce64,	// (0x00079c6d) bg_popup_trans_pane_g4

0xce6c,	// (0x00079c75) bg_popup_trans_pane_g5

0xce74,	// (0x00079c7d) bg_popup_trans_pane_g6

0xce7c,	// (0x00079c85) bg_popup_trans_pane_g7

0xce84,	// (0x00079c8d) bg_popup_trans_pane_g8

0xbc31,	// (0x00078a3a) bg_popup_trans_pane_g9

0x0008,

0xf8ba,	// (0x0007c6c3) bg_popup_trans_pane_g

0xce8c,	// (0x00079c95) cell_image3_tool_bar_pane_ParamLimits

0xce8c,	// (0x00079c95) cell_image3_tool_bar_pane

0xba40,	// (0x00078849) cell_image3_tool_bar_pane_g1

0x3069,	// (0x0006fe72) bg_popup_trans_pane_cp1

0xcea0,	// (0x00079ca9) popup_image3_note_pane_t1

0xceae,	// (0x00079cb7) popup_image3_note_pane_t2

0xcebc,	// (0x00079cc5) popup_image3_note_pane_t3

0x0002,

0xf8cd,	// (0x0007c6d6) popup_image3_note_pane_t

0xceca,	// (0x00079cd3) popup_image3_note_pane_t3_copy1

0x8842,	// (0x0007564b) bg_myfav_hc_instruction_pane_ParamLimits

0x8842,	// (0x0007564b) bg_myfav_hc_instruction_pane

0x8856,	// (0x0007565f) cell_myfav_contact_pane_ParamLimits

0x8856,	// (0x0007565f) cell_myfav_contact_pane

0x8874,	// (0x0007567d) cell_myfav_contact_pane_cp1_ParamLimits

0x8874,	// (0x0007567d) cell_myfav_contact_pane_cp1

0x888c,	// (0x00075695) cell_myfav_contact_pane_cp2_ParamLimits

0x888c,	// (0x00075695) cell_myfav_contact_pane_cp2

0x88a4,	// (0x000756ad) cell_myfav_contact_pane_cp3_ParamLimits

0x88a4,	// (0x000756ad) cell_myfav_contact_pane_cp3

0x88bb,	// (0x000756c4) cell_myfav_contact_pane_cp4_ParamLimits

0x88bb,	// (0x000756c4) cell_myfav_contact_pane_cp4

0x88d3,	// (0x000756dc) cell_myfav_contact_pane_cp5_ParamLimits

0x88d3,	// (0x000756dc) cell_myfav_contact_pane_cp5

0x88e7,	// (0x000756f0) cell_myfav_contact_pane_cp6_ParamLimits

0x88e7,	// (0x000756f0) cell_myfav_contact_pane_cp6

0x88fd,	// (0x00075706) cell_myfav_contact_pane_cp7_ParamLimits

0x88fd,	// (0x00075706) cell_myfav_contact_pane_cp7

0xced8,	// (0x00079ce1) listscroll_gen_pane_cp05

0x8917,	// (0x00075720) main_myfav_hc_pane_g1_ParamLimits

0x8917,	// (0x00075720) main_myfav_hc_pane_g1

0x8931,	// (0x0007573a) main_myfav_hc_pane_g2_ParamLimits

0x8931,	// (0x0007573a) main_myfav_hc_pane_g2

0x0002,

0xf8d4,	// (0x0007c6dd) main_myfav_hc_pane_g_ParamLimits

0xf8d4,	// (0x0007c6dd) main_myfav_hc_pane_g

0x8963,	// (0x0007576c) main_myfav_hc_pane_t1_ParamLimits

0x8963,	// (0x0007576c) main_myfav_hc_pane_t1

0xcee1,	// (0x00079cea) main_myfav_hc_pane_t2_ParamLimits

0xcee1,	// (0x00079cea) main_myfav_hc_pane_t2

0xcef3,	// (0x00079cfc) main_myfav_hc_pane_t3_ParamLimits

0xcef3,	// (0x00079cfc) main_myfav_hc_pane_t3

0x897a,	// (0x00075783) main_myfav_hc_pane_t4_ParamLimits

0x897a,	// (0x00075783) main_myfav_hc_pane_t4

0x0004,

0xf8db,	// (0x0007c6e4) main_myfav_hc_pane_t_ParamLimits

0xf8db,	// (0x0007c6e4) main_myfav_hc_pane_t

0xba40,	// (0x00078849) bg_myfav_hc_instruction_pane_g1

0xcf05,	// (0x00079d0e) cell_myfav_contact_pane_g1_ParamLimits

0xcf05,	// (0x00079d0e) cell_myfav_contact_pane_g1

0xcf05,	// (0x00079d0e) cell_myfav_contact_pane_g2_ParamLimits

0xcf05,	// (0x00079d0e) cell_myfav_contact_pane_g2

0xcf11,	// (0x00079d1a) cell_myfav_contact_pane_g3_ParamLimits

0xcf11,	// (0x00079d1a) cell_myfav_contact_pane_g3

0xb75c,	// (0x00078565) cell_myfav_contact_pane_g4_ParamLimits

0xb75c,	// (0x00078565) cell_myfav_contact_pane_g4

0xcf1e,	// (0x00079d27) cell_myfav_contact_pane_g5_ParamLimits

0xcf1e,	// (0x00079d27) cell_myfav_contact_pane_g5

0x0004,

0xf8e6,	// (0x0007c6ef) cell_myfav_contact_pane_g_ParamLimits

0xf8e6,	// (0x0007c6ef) cell_myfav_contact_pane_g

0x894b,	// (0x00075754) main_myfav_hc_pane_g3_ParamLimits

0x894b,	// (0x00075754) main_myfav_hc_pane_g3

0x31d2,	// (0x0006ffdb) popup_adpt_find_window

0x89a2,	// (0x000757ab) afind_page_pane_ParamLimits

0x89a2,	// (0x000757ab) afind_page_pane

0x89b7,	// (0x000757c0) aid_size_cell_afind_ParamLimits

0x89b7,	// (0x000757c0) aid_size_cell_afind

0x89d5,	// (0x000757de) bg_popup_sub_pane_cp09_ParamLimits

0x89d5,	// (0x000757de) bg_popup_sub_pane_cp09

0x89e2,	// (0x000757eb) find_pane_cp01_ParamLimits

0x89e2,	// (0x000757eb) find_pane_cp01

0xcf2a,	// (0x00079d33) grid_afind_control_pane_ParamLimits

0xcf2a,	// (0x00079d33) grid_afind_control_pane

0x89ef,	// (0x000757f8) grid_afind_pane_ParamLimits

0x89ef,	// (0x000757f8) grid_afind_pane

0x8a11,	// (0x0007581a) cell_afind_pane_ParamLimits

0x8a11,	// (0x0007581a) cell_afind_pane

0xba40,	// (0x00078849) afind_page_pane_g1

0x8a78,	// (0x00075881) afind_page_pane_g2

0x8a81,	// (0x0007588a) afind_page_pane_g3

0x0002,

0xf8f1,	// (0x0007c6fa) afind_page_pane_g

0x8a8a,	// (0x00075893) afind_page_pane_t1

0xcf3e,	// (0x00079d47) cell_afind_grid_control_pane_ParamLimits

0xcf3e,	// (0x00079d47) cell_afind_grid_control_pane

0xcdbe,	// (0x00079bc7) bg_button_pane_cp69_ParamLimits

0xcdbe,	// (0x00079bc7) bg_button_pane_cp69

0x8aaa,	// (0x000758b3) cell_afind_pane_g1_ParamLimits

0x8aaa,	// (0x000758b3) cell_afind_pane_g1

0x8ab7,	// (0x000758c0) cell_afind_pane_t1_ParamLimits

0x8ab7,	// (0x000758c0) cell_afind_pane_t1

0xba4a,	// (0x00078853) bg_button_pane_cp72

0xcf4d,	// (0x00079d56) cell_afind_grid_control_pane_g1

0x5e1d,	// (0x00072c26) aid_image_placing_area_ParamLimits

0x5e1d,	// (0x00072c26) aid_image_placing_area

0xb74e,	// (0x00078557) field_vitu_entry_pane_g1_ParamLimits

0xb74e,	// (0x00078557) field_vitu_entry_pane_g1

0xb74e,	// (0x00078557) field_vitu_entry_pane_g2_ParamLimits

0xb74e,	// (0x00078557) field_vitu_entry_pane_g2

0x0001,

0xf201,	// (0x0007c00a) field_vitu_entry_pane_g_ParamLimits

0xf201,	// (0x0007c00a) field_vitu_entry_pane_g

0x7aca,	// (0x000748d3) cell_vitu_itu_pane_g1_ParamLimits

0x7aad,	// (0x000748b6) cell_vitu_itu_pane_t3_ParamLimits

0x7aad,	// (0x000748b6) cell_vitu_itu_pane_t3

0xcd67,	// (0x00079b70) mp4_progress_pane_t1_ParamLimits

0xcd80,	// (0x00079b89) mp4_progress_pane_t2_ParamLimits

0xf837,	// (0x0007c640) mp4_progress_pane_t_ParamLimits

0xcd99,	// (0x00079ba2) mup_progress_pane_cp04_ParamLimits

0x898e,	// (0x00075797) main_myfav_hc_pane_t5_ParamLimits

0x898e,	// (0x00075797) main_myfav_hc_pane_t5

0xb6fd,	// (0x00078506) aid_zoom_text_primary

0x31d2,	// (0x0006ffdb) popup_adpt_find_window_ParamLimits

0x3294,	// (0x0007009d) main_cam_set_pane

0x841a,	// (0x00075223) cam4_zoom_pane_ParamLimits

0x841a,	// (0x00075223) cam4_zoom_pane

0x8ac9,	// (0x000758d2) main_cam_set_pane_g1_ParamLimits

0x8ac9,	// (0x000758d2) main_cam_set_pane_g1

0x8ad7,	// (0x000758e0) main_cam_set_pane_g2_ParamLimits

0x8ad7,	// (0x000758e0) main_cam_set_pane_g2

0x0001,

0xf8f8,	// (0x0007c701) main_cam_set_pane_g_ParamLimits

0xf8f8,	// (0x0007c701) main_cam_set_pane_g

0x8af8,	// (0x00075901) main_cam_set_pane_t1_ParamLimits

0x8af8,	// (0x00075901) main_cam_set_pane_t1

0x8b13,	// (0x0007591c) main_cset_listscroll_pane_ParamLimits

0x8b13,	// (0x0007591c) main_cset_listscroll_pane

0x8b39,	// (0x00075942) main_cset_slider_pane_ParamLimits

0x8b39,	// (0x00075942) main_cset_slider_pane

0xcf5e,	// (0x00079d67) main_cset_list_pane_ParamLimits

0xcf5e,	// (0x00079d67) main_cset_list_pane

0xcf6e,	// (0x00079d77) scroll_pane_cp028

0x8b5f,	// (0x00075968) aid_area_touch_slider

0x8b7b,	// (0x00075984) cset_slider_pane

0x8b9e,	// (0x000759a7) main_cset_slider_pane_g1

0x8bb3,	// (0x000759bc) main_cset_slider_pane_g2

0x0011,

0xf8fd,	// (0x0007c706) main_cset_slider_pane_g

0xcfa7,	// (0x00079db0) main_cset_slider_pane_t1

0x8c6f,	// (0x00075a78) main_cset_slider_pane_t2

0x8c89,	// (0x00075a92) main_cset_slider_pane_t3

0x8ca3,	// (0x00075aac) main_cset_slider_pane_t4

0x8cbd,	// (0x00075ac6) main_cset_slider_pane_t5

0x8cd7,	// (0x00075ae0) main_cset_slider_pane_t6

0x8cec,	// (0x00075af5) main_cset_slider_pane_t7

0x000e,

0xf922,	// (0x0007c72b) main_cset_slider_pane_t

0x8df0,	// (0x00075bf9) cset_list_set_pane_ParamLimits

0x8df0,	// (0x00075bf9) cset_list_set_pane

0xd041,	// (0x00079e4a) aid_position_infowindow_above

0xd049,	// (0x00079e52) aid_position_infowindow_below

0xef36,	// (0x0007bd3f) cset_list_set_pane_g1_ParamLimits

0xef36,	// (0x0007bd3f) cset_list_set_pane_g1

0xd051,	// (0x00079e5a) cset_list_set_pane_g3_ParamLimits

0xd051,	// (0x00079e5a) cset_list_set_pane_g3

0x0001,

0xf941,	// (0x0007c74a) cset_list_set_pane_g_ParamLimits

0xf941,	// (0x0007c74a) cset_list_set_pane_g

0xd060,	// (0x00079e69) cset_list_set_pane_t1_ParamLimits

0xd060,	// (0x00079e69) cset_list_set_pane_t1

0x3294,	// (0x0007009d) list_highlight_pane_cp021_ParamLimits

0x3294,	// (0x0007009d) list_highlight_pane_cp021

0xc63e,	// (0x00079447) cset_slider_pane_g1

0xc650,	// (0x00079459) cset_slider_pane_g2

0xc647,	// (0x00079450) cset_slider_pane_g3

0x0002,

0xf946,	// (0x0007c74f) cset_slider_pane_g

0xef42,	// (0x0007bd4b) aid_area_touch_cam4_zoom

0xef4a,	// (0x0007bd53) cam4_zoom_cont_pane

0xef52,	// (0x0007bd5b) cam4_zoom_pane_g1

0xef5a,	// (0x0007bd63) cam4_zoom_pane_g2

0x8e02,	// (0x00075c0b) cam4_zoom_pane_g3

0x0002,

0xf94d,	// (0x0007c756) cam4_zoom_pane_g

0xd075,	// (0x00079e7e) cam4_zoom_cont_pane_g1

0xd07e,	// (0x00079e87) cam4_zoom_cont_pane_g2

0xd087,	// (0x00079e90) cam4_zoom_cont_pane_g3

0x0002,

0xf954,	// (0x0007c75d) cam4_zoom_cont_pane_g

0x824b,	// (0x00075054) call4_image_pane_ParamLimits

0x824b,	// (0x00075054) call4_image_pane

0x82b2,	// (0x000750bb) call4_windows_conf_pane_ParamLimits

0x82f7,	// (0x00075100) popup_call4_audio_in_window_ParamLimits

0x82f7,	// (0x00075100) popup_call4_audio_in_window

0x3069,	// (0x0006fe72) bg_popup_call2_act_pane_cp02

0xcdca,	// (0x00079bd3) call4_list_conf_pane

0xba40,	// (0x00078849) call4_image_pane_g1

0xba40,	// (0x00078849) call4_image_pane_g2

0x0001,

0xf3d8,	// (0x0007c1e1) call4_image_pane_g

0xd090,	// (0x00079e99) list_single_graphic_popup_conf4_pane_ParamLimits

0xd090,	// (0x00079e99) list_single_graphic_popup_conf4_pane

0x3069,	// (0x0006fe72) list_highlight_pane_cp022

0xd0a3,	// (0x00079eac) list_single_graphic_popup_conf4_pane_g1

0xc20c,	// (0x00079015) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf95b,	// (0x0007c764) list_single_graphic_popup_conf4_pane_g

0xd0ab,	// (0x00079eb4) list_single_graphic_popup_conf4_pane_t1

0x462d,	// (0x00071436) popup_vtel_slider_window_ParamLimits

0x462d,	// (0x00071436) popup_vtel_slider_window

0xcdac,	// (0x00079bb5) dialer2_ne_pane_t2_ParamLimits

0xcdac,	// (0x00079bb5) dialer2_ne_pane_t2

0x0001,

0xf83c,	// (0x0007c645) dialer2_ne_pane_t_ParamLimits

0xf83c,	// (0x0007c645) dialer2_ne_pane_t

0x0808,	// (0x0006d611) bg_popup_sub_pane_cp010_ParamLimits

0x0808,	// (0x0006d611) bg_popup_sub_pane_cp010

0x8e0a,	// (0x00075c13) popup_vtel_slider_window_g1_ParamLimits

0x8e0a,	// (0x00075c13) popup_vtel_slider_window_g1

0x8e1d,	// (0x00075c26) popup_vtel_slider_window_g2_ParamLimits

0x8e1d,	// (0x00075c26) popup_vtel_slider_window_g2

0x0003,

0xf960,	// (0x0007c769) popup_vtel_slider_window_g_ParamLimits

0xf960,	// (0x0007c769) popup_vtel_slider_window_g

0x8e73,	// (0x00075c7c) vtel_slider_pane_ParamLimits

0x8e73,	// (0x00075c7c) vtel_slider_pane

0x8e95,	// (0x00075c9e) vtel_slider_pane_g1_ParamLimits

0x8e95,	// (0x00075c9e) vtel_slider_pane_g1

0x8ea9,	// (0x00075cb2) vtel_slider_pane_g2_ParamLimits

0x8ea9,	// (0x00075cb2) vtel_slider_pane_g2

0x8ec1,	// (0x00075cca) vtel_slider_pane_g3_ParamLimits

0x8ec1,	// (0x00075cca) vtel_slider_pane_g3

0x8e95,	// (0x00075c9e) vtel_slider_pane_g4_ParamLimits

0x8e95,	// (0x00075c9e) vtel_slider_pane_g4

0x8ed7,	// (0x00075ce0) vtel_slider_pane_g5_ParamLimits

0x8ed7,	// (0x00075ce0) vtel_slider_pane_g5

0x0004,

0xf969,	// (0x0007c772) vtel_slider_pane_g_ParamLimits

0xf969,	// (0x0007c772) vtel_slider_pane_g

0x3294,	// (0x0007009d) main_gallery2_pane

0x8608,	// (0x00075411) aid_size_row_itut2_dropdow_list_ParamLimits

0x8608,	// (0x00075411) aid_size_row_itut2_dropdow_list

0x867d,	// (0x00075486) grid_vitu2_function_top_pane_ParamLimits

0x867d,	// (0x00075486) grid_vitu2_function_top_pane

0x86df,	// (0x000754e8) popup_vitu2_dropdown_list_window_ParamLimits

0x86df,	// (0x000754e8) popup_vitu2_dropdown_list_window

0x8705,	// (0x0007550e) popup_vitu2_match_list_window

0x8eed,	// (0x00075cf6) cell_vitu2_function_top_pane_ParamLimits

0x8eed,	// (0x00075cf6) cell_vitu2_function_top_pane

0x8f07,	// (0x00075d10) cell_vitu2_function_top_pane_cp01_ParamLimits

0x8f07,	// (0x00075d10) cell_vitu2_function_top_pane_cp01

0x8f23,	// (0x00075d2c) cell_vitu2_function_top_wide_pane_ParamLimits

0x8f23,	// (0x00075d2c) cell_vitu2_function_top_wide_pane

0x3294,	// (0x0007009d) bg_button_pane_cp012

0x8f41,	// (0x00075d4a) cell_vitu2_function_top_pane_g1

0xef62,	// (0x0007bd6b) bg_button_pane_cp013_ParamLimits

0xef62,	// (0x0007bd6b) bg_button_pane_cp013

0x8f55,	// (0x00075d5e) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x8f55,	// (0x00075d5e) cell_vitu2_function_top_wide_pane_g1

0x3294,	// (0x0007009d) bg_popup_sub_pane_cp20

0x8f6d,	// (0x00075d76) list_vitu2_match_list_pane

0xce54,	// (0x00079c5d) bg_popup_sub_pane_cp20_g1

0xce5c,	// (0x00079c65) bg_popup_sub_pane_cp20_g2

0xbc51,	// (0x00078a5a) bg_popup_sub_pane_cp20_g3

0xce64,	// (0x00079c6d) bg_popup_sub_pane_cp20_g4

0xbc31,	// (0x00078a3a) bg_popup_sub_pane_cp20_g5

0xd0c1,	// (0x00079eca) bg_popup_sub_pane_cp20_g6

0xce74,	// (0x00079c7d) bg_popup_sub_pane_cp20_g7

0xce7c,	// (0x00079c85) bg_popup_sub_pane_cp20_g8

0xce84,	// (0x00079c8d) bg_popup_sub_pane_cp20_g9

0x0008,

0xf974,	// (0x0007c77d) bg_popup_sub_pane_cp20_g

0xef7e,	// (0x0007bd87) list_vitu2_match_list_item_pane_ParamLimits

0xef7e,	// (0x0007bd87) list_vitu2_match_list_item_pane

0xef90,	// (0x0007bd99) list_vitu2_match_list_item_pane_t1

0x3069,	// (0x0006fe72) bg_popup_sub_pane_cp21

0xba00,	// (0x00078809) grid_vitu2_dropdown_list_pane

0x8f85,	// (0x00075d8e) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x8f85,	// (0x00075d8e) cell_vitu2_dropdown_list_char_pane

0x8fa6,	// (0x00075daf) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x8fa6,	// (0x00075daf) cell_vitu2_dropdown_list_ctrl_pane

0xd0c9,	// (0x00079ed2) cell_vitu2_dropdown_list_char_pane_g1

0xd0d2,	// (0x00079edb) cell_vitu2_dropdown_list_char_pane_g2

0xd0db,	// (0x00079ee4) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf987,	// (0x0007c790) cell_vitu2_dropdown_list_char_pane_g

0x8fd0,	// (0x00075dd9) cell_vitu2_dropdown_list_char_pane_t1

0x8fde,	// (0x00075de7) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x8fde,	// (0x00075de7) cell_vitu2_dropdown_list_ctrl_pane_g1

0x8fee,	// (0x00075df7) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x8fee,	// (0x00075df7) cell_vitu2_dropdown_list_ctrl_pane_g2

0x8fff,	// (0x00075e08) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x8fff,	// (0x00075e08) cell_vitu2_dropdown_list_ctrl_pane_g3

0x900f,	// (0x00075e18) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x900f,	// (0x00075e18) cell_vitu2_dropdown_list_ctrl_pane_g4

0xb74e,	// (0x00078557) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xb74e,	// (0x00078557) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf98e,	// (0x0007c797) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf98e,	// (0x0007c797) cell_vitu2_dropdown_list_ctrl_pane_g

0x902b,	// (0x00075e34) aid_size_cell_gallery2_ParamLimits

0x902b,	// (0x00075e34) aid_size_cell_gallery2

0x9049,	// (0x00075e52) grid_gallery2_pane_ParamLimits

0x9049,	// (0x00075e52) grid_gallery2_pane

0x9063,	// (0x00075e6c) scroll_pane_cp029_ParamLimits

0x9063,	// (0x00075e6c) scroll_pane_cp029

0x9074,	// (0x00075e7d) cell_gallery2_pane_ParamLimits

0x9074,	// (0x00075e7d) cell_gallery2_pane

0xd0e4,	// (0x00079eed) cell_gallery2_pane_g2

0x90d3,	// (0x00075edc) cell_gallery2_pane_g3

0xd0ec,	// (0x00079ef5) cell_gallery2_pane_g4

0xd0f4,	// (0x00079efd) cell_gallery2_pane_g5

0xba00,	// (0x00078809) grid_highlight_pane_cp10

0x8705,	// (0x0007550e) popup_vitu2_match_list_window_ParamLimits

0x871a,	// (0x00075523) popup_vitu2_query_window_ParamLimits

0x871a,	// (0x00075523) popup_vitu2_query_window

0x3069,	// (0x0006fe72) bg_vitu2_candi_button_pane

0xd0c9,	// (0x00079ed2) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd0d2,	// (0x00079edb) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd0db,	// (0x00079ee4) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x2a32,	// (0x0006f83b) bg_button_pane_cp015

0x90db,	// (0x00075ee4) bg_button_pane_cp016

0x90ee,	// (0x00075ef7) bg_button_pane_cp017

0x140a,	// (0x0006e213) bg_popup_sub_pane_cp22

0xd0fc,	// (0x00079f05) popup_vitu2_query_window_g1

0x2a61,	// (0x0006f86a) popup_vitu2_query_window_g2

0x0002,

0xf999,	// (0x0007c7a2) popup_vitu2_query_window_g

0x2a80,	// (0x0006f889) popup_vitu2_query_window_t1_ParamLimits

0x2a80,	// (0x0006f889) popup_vitu2_query_window_t1

0x2ab5,	// (0x0006f8be) popup_vitu2_query_window_t2_ParamLimits

0x2ab5,	// (0x0006f8be) popup_vitu2_query_window_t2

0x2ac7,	// (0x0006f8d0) popup_vitu2_query_window_t3_ParamLimits

0x2ac7,	// (0x0006f8d0) popup_vitu2_query_window_t3

0x9112,	// (0x00075f1b) popup_vitu2_query_window_t4_ParamLimits

0x9112,	// (0x00075f1b) popup_vitu2_query_window_t4

0x9133,	// (0x00075f3c) popup_vitu2_query_window_t5_ParamLimits

0x9133,	// (0x00075f3c) popup_vitu2_query_window_t5

0x0006,

0xf9a0,	// (0x0007c7a9) popup_vitu2_query_window_t_ParamLimits

0xf9a0,	// (0x0007c7a9) popup_vitu2_query_window_t

0xcf56,	// (0x00079d5f) main_cset_text_pane

0x8b5f,	// (0x00075968) aid_area_touch_slider_ParamLimits

0x8b7b,	// (0x00075984) cset_slider_pane_ParamLimits

0x8b9e,	// (0x000759a7) main_cset_slider_pane_g1_ParamLimits

0x8bb3,	// (0x000759bc) main_cset_slider_pane_g2_ParamLimits

0xcf77,	// (0x00079d80) main_cset_slider_pane_g3_ParamLimits

0xcf77,	// (0x00079d80) main_cset_slider_pane_g3

0x8bc8,	// (0x000759d1) main_cset_slider_pane_g4_ParamLimits

0x8bc8,	// (0x000759d1) main_cset_slider_pane_g4

0x8bd7,	// (0x000759e0) main_cset_slider_pane_g5_ParamLimits

0x8bd7,	// (0x000759e0) main_cset_slider_pane_g5

0x8be3,	// (0x000759ec) main_cset_slider_pane_g6_ParamLimits

0x8be3,	// (0x000759ec) main_cset_slider_pane_g6

0xf8fd,	// (0x0007c706) main_cset_slider_pane_g_ParamLimits

0xcfa7,	// (0x00079db0) main_cset_slider_pane_t1_ParamLimits

0x8c6f,	// (0x00075a78) main_cset_slider_pane_t2_ParamLimits

0x8c89,	// (0x00075a92) main_cset_slider_pane_t3_ParamLimits

0x8ca3,	// (0x00075aac) main_cset_slider_pane_t4_ParamLimits

0x8cbd,	// (0x00075ac6) main_cset_slider_pane_t5_ParamLimits

0x8cd7,	// (0x00075ae0) main_cset_slider_pane_t6_ParamLimits

0x8cec,	// (0x00075af5) main_cset_slider_pane_t7_ParamLimits

0x8d16,	// (0x00075b1f) main_cset_slider_pane_t8_ParamLimits

0x8d16,	// (0x00075b1f) main_cset_slider_pane_t8

0x8d3e,	// (0x00075b47) main_cset_slider_pane_t9_ParamLimits

0x8d3e,	// (0x00075b47) main_cset_slider_pane_t9

0x8d66,	// (0x00075b6f) main_cset_slider_pane_t10_ParamLimits

0x8d66,	// (0x00075b6f) main_cset_slider_pane_t10

0x8d8e,	// (0x00075b97) main_cset_slider_pane_t11_ParamLimits

0x8d8e,	// (0x00075b97) main_cset_slider_pane_t11

0x8db6,	// (0x00075bbf) main_cset_slider_pane_t12_ParamLimits

0x8db6,	// (0x00075bbf) main_cset_slider_pane_t12

0x8dd3,	// (0x00075bdc) main_cset_slider_pane_t13_ParamLimits

0x8dd3,	// (0x00075bdc) main_cset_slider_pane_t13

0xf922,	// (0x0007c72b) main_cset_slider_pane_t_ParamLimits

0x3069,	// (0x0006fe72) bg_popup_sub_pane_cp011

0xd108,	// (0x00079f11) main_cset_text_pane_g1

0xd110,	// (0x00079f19) main_cset_text_pane_t1

0xd11e,	// (0x00079f27) main_cset_text_pane_t2

0xd12c,	// (0x00079f35) main_cset_text_pane_t3

0xd13a,	// (0x00079f43) main_cset_text_pane_t4

0xd148,	// (0x00079f51) main_cset_text_pane_t5

0xd156,	// (0x00079f5f) main_cset_text_pane_t6

0xd164,	// (0x00079f6d) main_cset_text_pane_t7

0x0006,

0xf9af,	// (0x0007c7b8) main_cset_text_pane_t

0x3069,	// (0x0006fe72) main_cam4_burst_pane

0x3069,	// (0x0006fe72) main_cam5_pane

0x8a98,	// (0x000758a1) bg_button_pane_cp019

0x8aa1,	// (0x000758aa) bg_button_pane_cp020

0xcf83,	// (0x00079d8c) main_cset_slider_pane_g7_ParamLimits

0xcf83,	// (0x00079d8c) main_cset_slider_pane_g7

0xcf8f,	// (0x00079d98) main_cset_slider_pane_g8_ParamLimits

0xcf8f,	// (0x00079d98) main_cset_slider_pane_g8

0x8bf7,	// (0x00075a00) main_cset_slider_pane_g9_ParamLimits

0x8bf7,	// (0x00075a00) main_cset_slider_pane_g9

0x8c03,	// (0x00075a0c) main_cset_slider_pane_g10_ParamLimits

0x8c03,	// (0x00075a0c) main_cset_slider_pane_g10

0x8c0f,	// (0x00075a18) main_cset_slider_pane_g11_ParamLimits

0x8c0f,	// (0x00075a18) main_cset_slider_pane_g11

0x8c1b,	// (0x00075a24) main_cset_slider_pane_g12_ParamLimits

0x8c1b,	// (0x00075a24) main_cset_slider_pane_g12

0x8c27,	// (0x00075a30) main_cset_slider_pane_g13_ParamLimits

0x8c27,	// (0x00075a30) main_cset_slider_pane_g13

0x8c33,	// (0x00075a3c) main_cset_slider_pane_g14_ParamLimits

0x8c33,	// (0x00075a3c) main_cset_slider_pane_g14

0x8c3f,	// (0x00075a48) main_cset_slider_pane_g15_ParamLimits

0x8c3f,	// (0x00075a48) main_cset_slider_pane_g15

0xcfcf,	// (0x00079dd8) main_cset_slider_pane_t14_ParamLimits

0xcfcf,	// (0x00079dd8) main_cset_slider_pane_t14

0xd008,	// (0x00079e11) main_cset_slider_pane_t15_ParamLimits

0xd008,	// (0x00079e11) main_cset_slider_pane_t15

0x9154,	// (0x00075f5d) aid_cam4_burst_size_cell_ParamLimits

0x9154,	// (0x00075f5d) aid_cam4_burst_size_cell

0x9174,	// (0x00075f7d) grid_cam4_burst_pane_ParamLimits

0x9174,	// (0x00075f7d) grid_cam4_burst_pane

0x91ac,	// (0x00075fb5) linegrid_cam4_burst_pane_ParamLimits

0x91ac,	// (0x00075fb5) linegrid_cam4_burst_pane

0xd172,	// (0x00079f7b) scroll_pane_cp30_ParamLimits

0xd172,	// (0x00079f7b) scroll_pane_cp30

0x91d0,	// (0x00075fd9) cell_cam4_burst_pane_ParamLimits

0x91d0,	// (0x00075fd9) cell_cam4_burst_pane

0xd17e,	// (0x00079f87) linegrid_cam4_burst_pane_g1_ParamLimits

0xd17e,	// (0x00079f87) linegrid_cam4_burst_pane_g1

0x921d,	// (0x00076026) linegrid_cam4_burst_pane_g2_ParamLimits

0x921d,	// (0x00076026) linegrid_cam4_burst_pane_g2

0xd18b,	// (0x00079f94) linegrid_cam4_burst_pane_g3_ParamLimits

0xd18b,	// (0x00079f94) linegrid_cam4_burst_pane_g3

0x0002,

0xf9be,	// (0x0007c7c7) linegrid_cam4_burst_pane_g_ParamLimits

0xf9be,	// (0x0007c7c7) linegrid_cam4_burst_pane_g

0x922e,	// (0x00076037) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x922e,	// (0x00076037) linegrid_cam4_burst_pane_g3_copy1

0xd198,	// (0x00079fa1) linegrid_cam4_burst_pane_g4_ParamLimits

0xd198,	// (0x00079fa1) linegrid_cam4_burst_pane_g4

0x9248,	// (0x00076051) linegrid_cam4_burst_pane_g5_ParamLimits

0x9248,	// (0x00076051) linegrid_cam4_burst_pane_g5

0x9259,	// (0x00076062) linegrid_cam4_burst_pane_g6_ParamLimits

0x9259,	// (0x00076062) linegrid_cam4_burst_pane_g6

0xd1a5,	// (0x00079fae) linegrid_cam4_burst_pane_g7_ParamLimits

0xd1a5,	// (0x00079fae) linegrid_cam4_burst_pane_g7

0x9270,	// (0x00076079) cell_cam4_burst_pane_g1

0xd1be,	// (0x00079fc7) main_cam5_pane_t1_ParamLimits

0xd1be,	// (0x00079fc7) main_cam5_pane_t1

0xd1d0,	// (0x00079fd9) main_cam5_pane_t2_ParamLimits

0xd1d0,	// (0x00079fd9) main_cam5_pane_t2

0xd1e2,	// (0x00079feb) main_cam5_pane_t3_ParamLimits

0xd1e2,	// (0x00079feb) main_cam5_pane_t3

0xd1f4,	// (0x00079ffd) main_cam5_pane_t4_ParamLimits

0xd1f4,	// (0x00079ffd) main_cam5_pane_t4

0xd20c,	// (0x0007a015) main_cam5_pane_t5_ParamLimits

0xd20c,	// (0x0007a015) main_cam5_pane_t5

0xd220,	// (0x0007a029) main_cam5_pane_t6_ParamLimits

0xd220,	// (0x0007a029) main_cam5_pane_t6

0xd234,	// (0x0007a03d) main_cam5_pane_t7_ParamLimits

0xd234,	// (0x0007a03d) main_cam5_pane_t7

0xd246,	// (0x0007a04f) main_cam5_pane_t8_ParamLimits

0xd246,	// (0x0007a04f) main_cam5_pane_t8

0xd262,	// (0x0007a06b) main_cam5_pane_t9_ParamLimits

0xd262,	// (0x0007a06b) main_cam5_pane_t9

0xd274,	// (0x0007a07d) main_cam5_pane_t10_ParamLimits

0xd274,	// (0x0007a07d) main_cam5_pane_t10

0xd286,	// (0x0007a08f) main_cam5_pane_t11_ParamLimits

0xd286,	// (0x0007a08f) main_cam5_pane_t11

0xd298,	// (0x0007a0a1) main_cam5_pane_t12_ParamLimits

0xd298,	// (0x0007a0a1) main_cam5_pane_t12

0xd2ad,	// (0x0007a0b6) main_cam5_pane_t13_ParamLimits

0xd2ad,	// (0x0007a0b6) main_cam5_pane_t13

0x000c,

0xf9ca,	// (0x0007c7d3) main_cam5_pane_t_ParamLimits

0xf9ca,	// (0x0007c7d3) main_cam5_pane_t

0x3254,	// (0x0007005d) popup_scut_keymap_window_ParamLimits

0x3254,	// (0x0007005d) popup_scut_keymap_window

0x9283,	// (0x0007608c) aid_size_cell_brow_shortcut

0xba00,	// (0x00078809) bg_popup_window_pane_cp010

0x928f,	// (0x00076098) grid_scut_pane

0x929b,	// (0x000760a4) cell_scut_pane_ParamLimits

0x929b,	// (0x000760a4) cell_scut_pane

0x92b2,	// (0x000760bb) cell_scut_pane_g1

0xd2ca,	// (0x0007a0d3) cell_scut_pane_t1

0xd2d9,	// (0x0007a0e2) cell_scut_pane_t2

0x92bb,	// (0x000760c4) cell_scut_pane_t3

0x0002,

0xf9e5,	// (0x0007c7ee) cell_scut_pane_t

0x6e48,	// (0x00073c51) main_mup3_pane_g8_ParamLimits

0x6e48,	// (0x00073c51) main_mup3_pane_g8

0x861f,	// (0x00075428) area_vitu2_query_pane_ParamLimits

0x861f,	// (0x00075428) area_vitu2_query_pane

0x2a42,	// (0x0006f84b) input_focus_pane_cp08

0xd2e8,	// (0x0007a0f1) area_vitu2_query_pane_g1

0x2b45,	// (0x0006f94e) area_vitu2_query_pane_g2

0x0001,

0xf9ec,	// (0x0007c7f5) area_vitu2_query_pane_g

0x92c9,	// (0x000760d2) area_vitu2_query_pane_t1_ParamLimits

0x92c9,	// (0x000760d2) area_vitu2_query_pane_t1

0x92dd,	// (0x000760e6) area_vitu2_query_pane_t2_ParamLimits

0x92dd,	// (0x000760e6) area_vitu2_query_pane_t2

0x2b56,	// (0x0006f95f) area_vitu2_query_pane_t3_ParamLimits

0x2b56,	// (0x0006f95f) area_vitu2_query_pane_t3

0xd2f4,	// (0x0007a0fd) area_vitu2_query_pane_t4_ParamLimits

0xd2f4,	// (0x0007a0fd) area_vitu2_query_pane_t4

0xd31c,	// (0x0007a125) area_vitu2_query_pane_t5_ParamLimits

0xd31c,	// (0x0007a125) area_vitu2_query_pane_t5

0xd344,	// (0x0007a14d) area_vitu2_query_pane_t6_ParamLimits

0xd344,	// (0x0007a14d) area_vitu2_query_pane_t6

0x0006,

0xf9f1,	// (0x0007c7fa) area_vitu2_query_pane_t_ParamLimits

0xf9f1,	// (0x0007c7fa) area_vitu2_query_pane_t

0x92f1,	// (0x000760fa) bg_button_pane_cp018

0x92ff,	// (0x00076108) bg_button_pane_cp021

0x2b7e,	// (0x0006f987) bg_button_pane_cp022

0x2b8d,	// (0x0006f996) input_focus_pane_cp09

0xc348,	// (0x00079151) aid_size_touch_mv_arrow_left

0xc371,	// (0x0007917a) aid_size_touch_mv_arrow_right

0x8c57,	// (0x00075a60) main_cset_slider_pane_g16_ParamLimits

0x8c57,	// (0x00075a60) main_cset_slider_pane_g16

0x8c63,	// (0x00075a6c) main_cset_slider_pane_g17_ParamLimits

0x8c63,	// (0x00075a6c) main_cset_slider_pane_g17

0x9270,	// (0x00076079) cell_cam4_burst_pane_g1_ParamLimits

0x3069,	// (0x0006fe72) compa_mode_pane

0x8e2d,	// (0x00075c36) popup_vtel_slider_window_g3_ParamLimits

0x8e2d,	// (0x00075c36) popup_vtel_slider_window_g3

0x8e44,	// (0x00075c4d) popup_vtel_slider_window_g4_ParamLimits

0x8e44,	// (0x00075c4d) popup_vtel_slider_window_g4

0x8e5b,	// (0x00075c64) popup_vtel_slider_window_t1_ParamLimits

0x8e5b,	// (0x00075c64) popup_vtel_slider_window_t1

0x3069,	// (0x0006fe72) main_cl_pane

0xcc93,	// (0x00079a9c) popup_imed_adjust2_window_ParamLimits

0x140a,	// (0x0006e213) bg_tb_trans_pane_cp05_ParamLimits

0x7926,	// (0x0007472f) popup_imed_adjust2_window_g1_ParamLimits

0x7935,	// (0x0007473e) popup_imed_adjust2_window_g2_ParamLimits

0x7935,	// (0x0007473e) popup_imed_adjust2_window_g2

0x7941,	// (0x0007474a) popup_imed_adjust2_window_g3_ParamLimits

0x7941,	// (0x0007474a) popup_imed_adjust2_window_g3

0x0002,

0xf767,	// (0x0007c570) popup_imed_adjust2_window_g_ParamLimits

0xf767,	// (0x0007c570) popup_imed_adjust2_window_g

0x794d,	// (0x00074756) popup_imed_adjust2_window_t1_ParamLimits

0x7965,	// (0x0007476e) slider_imed_adjust_pane_ParamLimits

0x7979,	// (0x00074782) slider_imed_adjust_pane_g1_ParamLimits

0x7989,	// (0x00074792) slider_imed_adjust_pane_g2_ParamLimits

0x7999,	// (0x000747a2) slider_imed_adjust_pane_g3_ParamLimits

0x79aa,	// (0x000747b3) slider_imed_adjust_pane_g4_ParamLimits

0xf76e,	// (0x0007c577) slider_imed_adjust_pane_g_ParamLimits

0x83bb,	// (0x000751c4) aid_touch_area_cam4_ParamLimits

0x83bb,	// (0x000751c4) aid_touch_area_cam4

0xee49,	// (0x0007bc52) battery_pane_cp01

0x848a,	// (0x00075293) main_camera4_pane_g6_ParamLimits

0x848a,	// (0x00075293) main_camera4_pane_g6

0x84b4,	// (0x000752bd) main_camera4_pane_t2_ParamLimits

0x84b4,	// (0x000752bd) main_camera4_pane_t2

0x0001,

0xf870,	// (0x0007c679) main_camera4_pane_t_ParamLimits

0xf870,	// (0x0007c679) main_camera4_pane_t

0x84e9,	// (0x000752f2) aid_touch_area_vid4_ParamLimits

0x84e9,	// (0x000752f2) aid_touch_area_vid4

0x853d,	// (0x00075346) main_video4_pane_g5_ParamLimits

0x853d,	// (0x00075346) main_video4_pane_g5

0x8562,	// (0x0007536b) vid4_progress_pane_ParamLimits

0x8562,	// (0x0007536b) vid4_progress_pane

0xcf9b,	// (0x00079da4) main_cset_slider_pane_g18_ParamLimits

0xcf9b,	// (0x00079da4) main_cset_slider_pane_g18

0xd1b2,	// (0x00079fbb) cell_cam4_burst_pane_g2_ParamLimits

0xd1b2,	// (0x00079fbb) cell_cam4_burst_pane_g2

0x0001,

0xf9c5,	// (0x0007c7ce) cell_cam4_burst_pane_g_ParamLimits

0xf9c5,	// (0x0007c7ce) cell_cam4_burst_pane_g

0xb7e2,	// (0x000785eb) bg_cl_pane_ParamLimits

0xb7e2,	// (0x000785eb) bg_cl_pane

0x930b,	// (0x00076114) cl_header_pane_ParamLimits

0x930b,	// (0x00076114) cl_header_pane

0x931f,	// (0x00076128) cl_listscroll_pane_ParamLimits

0x931f,	// (0x00076128) cl_listscroll_pane

0xd390,	// (0x0007a199) bg_cl_pane_g1

0xd398,	// (0x0007a1a1) bg_cl_pane_g2

0xd3a0,	// (0x0007a1a9) bg_cl_pane_g3

0xd3a8,	// (0x0007a1b1) bg_cl_pane_g4

0xd3b0,	// (0x0007a1b9) bg_cl_pane_g5

0xd3b8,	// (0x0007a1c1) bg_cl_pane_g6

0xd3c0,	// (0x0007a1c9) bg_cl_pane_g7

0xd3c8,	// (0x0007a1d1) bg_cl_pane_g8

0xd3d0,	// (0x0007a1d9) bg_cl_pane_g9

0x0008,

0xfa00,	// (0x0007c809) bg_cl_pane_g

0x932f,	// (0x00076138) aid_height_cl_leading_ParamLimits

0x932f,	// (0x00076138) aid_height_cl_leading

0x933b,	// (0x00076144) aid_height_cl_text_ParamLimits

0x933b,	// (0x00076144) aid_height_cl_text

0x3294,	// (0x0007009d) bg_cl_header_pane_ParamLimits

0x3294,	// (0x0007009d) bg_cl_header_pane

0x935a,	// (0x00076163) cl_header_pane_g1_ParamLimits

0x935a,	// (0x00076163) cl_header_pane_g1

0x9370,	// (0x00076179) cl_header_pane_t1_ParamLimits

0x9370,	// (0x00076179) cl_header_pane_t1

0xd3d8,	// (0x0007a1e1) cl_list_pane

0xcf6e,	// (0x00079d77) hc_scroll_pane_cp01

0xbc31,	// (0x00078a3a) bg_cl_header_pane_g1

0xce54,	// (0x00079c5d) bg_cl_header_pane_g2

0xbc51,	// (0x00078a5a) bg_cl_header_pane_g3

0xce64,	// (0x00079c6d) bg_cl_header_pane_g4

0xce5c,	// (0x00079c65) bg_cl_header_pane_g5

0xd0c1,	// (0x00079eca) bg_cl_header_pane_g6

0xce7c,	// (0x00079c85) bg_cl_header_pane_g7

0xce84,	// (0x00079c8d) bg_cl_header_pane_g8

0xce74,	// (0x00079c7d) bg_cl_header_pane_g9

0x0008,

0xfa13,	// (0x0007c81c) bg_cl_header_pane_g

0x9389,	// (0x00076192) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x9389,	// (0x00076192) hc_cl_list_double_graphic_heading_pane

0x939a,	// (0x000761a3) hc_cl_list_single_graphic_pane_ParamLimits

0x939a,	// (0x000761a3) hc_cl_list_single_graphic_pane

0x93b0,	// (0x000761b9) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x93b0,	// (0x000761b9) hc_cl_list_single_graphic_pane_g1

0x93bc,	// (0x000761c5) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x93bc,	// (0x000761c5) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa26,	// (0x0007c82f) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa26,	// (0x0007c82f) hc_cl_list_single_graphic_pane_g

0x93d0,	// (0x000761d9) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x93d0,	// (0x000761d9) hc_cl_list_single_graphic_pane_t1

0x93b0,	// (0x000761b9) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x93b0,	// (0x000761b9) hc_cl_list_double_graphic_heading_pane_g1

0x93e5,	// (0x000761ee) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x93e5,	// (0x000761ee) hc_cl_list_double_graphic_heading_pane_g2

0x93f9,	// (0x00076202) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x93f9,	// (0x00076202) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa2b,	// (0x0007c834) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa2b,	// (0x0007c834) hc_cl_list_double_graphic_heading_pane_g

0x940d,	// (0x00076216) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x940d,	// (0x00076216) hc_cl_list_double_graphic_heading_pane_t1

0x9422,	// (0x0007622b) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x9422,	// (0x0007622b) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa32,	// (0x0007c83b) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa32,	// (0x0007c83b) hc_cl_list_double_graphic_heading_pane_t

0xefa6,	// (0x0007bdaf) vid4_progress_pane_g1

0xefb6,	// (0x0007bdbf) vid4_progress_pane_g2

0x9437,	// (0x00076240) vid4_progress_pane_g3

0xefc6,	// (0x0007bdcf) vid4_progress_pane_g4

0x0004,

0xfa37,	// (0x0007c840) vid4_progress_pane_g

0x9449,	// (0x00076252) vid4_progress_pane_t1

0xefde,	// (0x0007bde7) vid4_progress_pane_t2

0x0002,

0xfa42,	// (0x0007c84b) vid4_progress_pane_t

0x9461,	// (0x0007626a) wait_bar_pane_cp07

0x1648,	// (0x0006e451) blid_firmament_pane_ParamLimits

0x168b,	// (0x0006e494) popup_blid_sat_info2_window_g1

0x16af,	// (0x0006e4b8) popup_blid_sat_info2_window_t3

0x16bd,	// (0x0006e4c6) popup_blid_sat_info2_window_t4

0x16cb,	// (0x0006e4d4) popup_blid_sat_info2_window_t5

0x16d9,	// (0x0006e4e2) popup_blid_sat_info2_window_t6

0x16e9,	// (0x0006e4f2) popup_blid_sat_info2_window_t7

0x16f7,	// (0x0006e500) popup_blid_sat_info2_window_t8

0x1705,	// (0x0006e50e) popup_blid_sat_info2_window_t9

0x1713,	// (0x0006e51c) popup_blid_sat_info2_window_t10

0x17d4,	// (0x0006e5dd) aid_firma_cardinal_ParamLimits

0x17e8,	// (0x0006e5f1) blid_firmament_pane_t1_ParamLimits

0x17ff,	// (0x0006e608) blid_firmament_pane_t2_ParamLimits

0x1816,	// (0x0006e61f) blid_firmament_pane_t3_ParamLimits

0x182d,	// (0x0006e636) blid_firmament_pane_t4_ParamLimits

0xf660,	// (0x0007c469) blid_firmament_pane_t_ParamLimits

0x1844,	// (0x0006e64d) blid_sat_info_pane_ParamLimits

0x3294,	// (0x0007009d) main_cam_set_pane_ParamLimits

0x778b,	// (0x00074594) aid_size_cell_colour_35_ParamLimits

0x77ab,	// (0x000745b4) aid_size_cell_colour_112_ParamLimits

0x77cb,	// (0x000745d4) aid_size_cell_effect_ParamLimits

0x140a,	// (0x0006e213) bg_tb_trans_pane_cp02_ParamLimits

0xbecf,	// (0x00078cd8) heading_imed_pane_ParamLimits

0x77eb,	// (0x000745f4) listscroll_imed_pane_ParamLimits

0x0b13,	// (0x0006d91c) popup_call2_audio_first_window_g5_ParamLimits

0x0b13,	// (0x0006d91c) popup_call2_audio_first_window_g5

0x7fd7,	// (0x00074de0) aid_size_touch_image3_arrow_left_ParamLimits

0x7fd7,	// (0x00074de0) aid_size_touch_image3_arrow_left

0x8003,	// (0x00074e0c) aid_size_touch_image3_arrow_right_ParamLimits

0x8003,	// (0x00074e0c) aid_size_touch_image3_arrow_right

0xeff3,	// (0x0007bdfc) vid4_progress_pane_t3

0x7c99,	// (0x00074aa2) main_hwr_training_symbol_option_pane_ParamLimits

0x7c99,	// (0x00074aa2) main_hwr_training_symbol_option_pane

0x7cb9,	// (0x00074ac2) popup_hwr_training_preview_window_ParamLimits

0x7cb9,	// (0x00074ac2) popup_hwr_training_preview_window

0x7d06,	// (0x00074b0f) hwr_training_navi_pane_g5_ParamLimits

0x7d06,	// (0x00074b0f) hwr_training_navi_pane_g5

0xce42,	// (0x00079c4b) popup_char_count_window

0x3294,	// (0x0007009d) bg_popup_sub_pane_cp20_ParamLimits

0x8f6d,	// (0x00075d76) list_vitu2_match_list_pane_ParamLimits

0x8f79,	// (0x00075d82) vitu2_page_scroll_pane_ParamLimits

0x8f79,	// (0x00075d82) vitu2_page_scroll_pane

0xd3fb,	// (0x0007a204) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd3fb,	// (0x0007a204) list_single_hwr_training_symbol_option_pane

0xd40e,	// (0x0007a217) list_single_hwr_training_symbol_option_pane_g1

0xd416,	// (0x0007a21f) list_single_hwr_training_symbol_option_pane_t1

0xd424,	// (0x0007a22d) bg_button_pane_cp023

0xd42d,	// (0x0007a236) bg_button_pane_cp024

0xd460,	// (0x0007a269) vitu2_page_scroll_pane_g1

0xd468,	// (0x0007a271) vitu2_page_scroll_pane_g2

0x0001,

0xfa49,	// (0x0007c852) vitu2_page_scroll_pane_g

0xd470,	// (0x0007a279) vitu2_page_scroll_pane_t1

0x15be,	// (0x0006e3c7) popup_char_count_window_g1

0xd47f,	// (0x0007a288) popup_char_count_window_g2

0xd488,	// (0x0007a291) popup_char_count_window_g3

0x0002,

0xfa4e,	// (0x0007c857) popup_char_count_window_g

0xd491,	// (0x0007a29a) popup_char_count_window_t1

0x3069,	// (0x0006fe72) main_vded2_pane

0x7912,	// (0x0007471b) aid_size_cell_imed_line

0x791c,	// (0x00074725) grid_imed_line_width_pane

0xef01,	// (0x0007bd0a) vid4_indicators_pane_g4

0xd49f,	// (0x0007a2a8) cell_imed_line_width_pane_ParamLimits

0xd49f,	// (0x0007a2a8) cell_imed_line_width_pane

0xd4b3,	// (0x0007a2bc) cell_imed_line_width_pane_g1

0xd4bc,	// (0x0007a2c5) cell_imed_line_width_pane_g2

0x0001,

0xfa55,	// (0x0007c85e) cell_imed_line_width_pane_g

0x9474,	// (0x0007627d) main_vded2_pane_g1_ParamLimits

0x9474,	// (0x0007627d) main_vded2_pane_g1

0x948a,	// (0x00076293) main_vded2_pane_g2_ParamLimits

0x948a,	// (0x00076293) main_vded2_pane_g2

0x0001,

0xfa5a,	// (0x0007c863) main_vded2_pane_g_ParamLimits

0xfa5a,	// (0x0007c863) main_vded2_pane_g

0x949c,	// (0x000762a5) vded2_slider_pane_ParamLimits

0x949c,	// (0x000762a5) vded2_slider_pane

0x94ac,	// (0x000762b5) aid_size_touch_vded2_end

0x94b6,	// (0x000762bf) aid_size_touch_vded2_playhead

0xd4c4,	// (0x0007a2cd) aid_size_touch_vded2_start

0xd4cc,	// (0x0007a2d5) vded2_slider_bg_pane

0xd4d5,	// (0x0007a2de) vded2_slider_pane_g1

0xd4de,	// (0x0007a2e7) vded2_slider_pane_g2

0x94c0,	// (0x000762c9) vded2_slider_pane_g3

0x0002,

0xfa5f,	// (0x0007c868) vded2_slider_pane_g

0xd4e6,	// (0x0007a2ef) vded2_slider_bg_pane_g1

0xd4ef,	// (0x0007a2f8) vded2_slider_bg_pane_g2

0xd4f8,	// (0x0007a301) vded2_slider_bg_pane_g3

0x0002,

0xfa66,	// (0x0007c86f) vded2_slider_bg_pane_g

0x5a8c,	// (0x00072895) aid_postcard_touch_down_pane_ParamLimits

0x5a8c,	// (0x00072895) aid_postcard_touch_down_pane

0x5aa2,	// (0x000728ab) aid_postcard_touch_up_pane_ParamLimits

0x5aa2,	// (0x000728ab) aid_postcard_touch_up_pane

0x3069,	// (0x0006fe72) main_blid2_pane

0xcc79,	// (0x00079a82) popup_blid2_search_window

0x3069,	// (0x0006fe72) blid2_gps_pane

0x3069,	// (0x0006fe72) blid2_navig_pane

0x3069,	// (0x0006fe72) blid2_search_pane

0x3069,	// (0x0006fe72) blid2_tripm_pane

0x94cb,	// (0x000762d4) blid2_search_pane_g1_ParamLimits

0x94cb,	// (0x000762d4) blid2_search_pane_g1

0x94e5,	// (0x000762ee) blid2_search_pane_t1_ParamLimits

0x94e5,	// (0x000762ee) blid2_search_pane_t1

0x94f7,	// (0x00076300) aid_size_cell_blid2_gps_ParamLimits

0x94f7,	// (0x00076300) aid_size_cell_blid2_gps

0x950f,	// (0x00076318) blid2_gps_pane_g1_ParamLimits

0x950f,	// (0x00076318) blid2_gps_pane_g1

0x9523,	// (0x0007632c) grid_blid2_satellite_pane_ParamLimits

0x9523,	// (0x0007632c) grid_blid2_satellite_pane

0x953d,	// (0x00076346) blid2_navig_pane_g1_ParamLimits

0x953d,	// (0x00076346) blid2_navig_pane_g1

0x9549,	// (0x00076352) blid2_navig_pane_t1_ParamLimits

0x9549,	// (0x00076352) blid2_navig_pane_t1

0x9564,	// (0x0007636d) blid2_navig_pane_t2_ParamLimits

0x9564,	// (0x0007636d) blid2_navig_pane_t2

0x0001,

0xfa6d,	// (0x0007c876) blid2_navig_pane_t_ParamLimits

0xfa6d,	// (0x0007c876) blid2_navig_pane_t

0x957f,	// (0x00076388) blid2_navig_ring_pane_ParamLimits

0x957f,	// (0x00076388) blid2_navig_ring_pane

0x9598,	// (0x000763a1) blid2_speed_pane_ParamLimits

0x9598,	// (0x000763a1) blid2_speed_pane

0x95a4,	// (0x000763ad) blid2_tripm_pane_g1_ParamLimits

0x95a4,	// (0x000763ad) blid2_tripm_pane_g1

0x95bd,	// (0x000763c6) blid2_tripm_pane_g2_ParamLimits

0x95bd,	// (0x000763c6) blid2_tripm_pane_g2

0x95d1,	// (0x000763da) blid2_tripm_pane_g3_ParamLimits

0x95d1,	// (0x000763da) blid2_tripm_pane_g3

0x95e5,	// (0x000763ee) blid2_tripm_pane_g4_ParamLimits

0x95e5,	// (0x000763ee) blid2_tripm_pane_g4

0x95f9,	// (0x00076402) blid2_tripm_pane_g5_ParamLimits

0x95f9,	// (0x00076402) blid2_tripm_pane_g5

0x0005,

0xfa72,	// (0x0007c87b) blid2_tripm_pane_g_ParamLimits

0xfa72,	// (0x0007c87b) blid2_tripm_pane_g

0x961f,	// (0x00076428) blid2_tripm_pane_t1_ParamLimits

0x961f,	// (0x00076428) blid2_tripm_pane_t1

0x963a,	// (0x00076443) blid2_tripm_pane_t2_ParamLimits

0x963a,	// (0x00076443) blid2_tripm_pane_t2

0x9653,	// (0x0007645c) blid2_tripm_pane_t3_ParamLimits

0x9653,	// (0x0007645c) blid2_tripm_pane_t3

0x0003,

0xfa7f,	// (0x0007c888) blid2_tripm_pane_t_ParamLimits

0xfa7f,	// (0x0007c888) blid2_tripm_pane_t

0x969a,	// (0x000764a3) cell_blid2_satellite_pane_ParamLimits

0x969a,	// (0x000764a3) cell_blid2_satellite_pane

0x96b8,	// (0x000764c1) cell_blid2_satellite_pane_g1

0xd501,	// (0x0007a30a) cell_blid2_satellite_pane_t1

0xba40,	// (0x00078849) blid2_speed_pane_g1

0xd50f,	// (0x0007a318) blid2_speed_pane_t1

0xd51d,	// (0x0007a326) blid2_speed_pane_t2

0x0001,

0xfa88,	// (0x0007c891) blid2_speed_pane_t

0xba40,	// (0x00078849) blid2_navig_ring_pane_g1

0x96c1,	// (0x000764ca) blid2_navig_ring_pane_g2

0x96c9,	// (0x000764d2) blid2_navig_ring_pane_g3

0x96d1,	// (0x000764da) blid2_navig_ring_pane_g4

0x96d9,	// (0x000764e2) blid2_navig_ring_pane_g5

0x0004,

0xfa8d,	// (0x0007c896) blid2_navig_ring_pane_g

0x3069,	// (0x0006fe72) bg_popup_window_pane_cp011

0xd52b,	// (0x0007a334) popup_blid2_search_window_g1

0xd533,	// (0x0007a33c) popup_blid2_search_window_t1

0xd541,	// (0x0007a34a) popup_blid2_search_window_t2

0x0001,

0xfa98,	// (0x0007c8a1) popup_blid2_search_window_t

0xbb40,	// (0x00078949) main_browser_pane_g1

0xb7e2,	// (0x000785eb) main_browser_pane_ParamLimits

0x3294,	// (0x0007009d) bg_button_pane_cp011_ParamLimits

0x882e,	// (0x00075637) cell_vitu2_function_pane_g1_ParamLimits

0x140a,	// (0x0006e213) bg_popup_sub_pane_cp22_ParamLimits

0x2a42,	// (0x0006f84b) input_focus_pane_cp08_ParamLimits

0x9101,	// (0x00075f0a) popup_vitu2_query_button_pane_ParamLimits

0x9101,	// (0x00075f0a) popup_vitu2_query_button_pane

0x2a59,	// (0x0006f862) popup_vitu2_query_input_button_pane

0xd0fc,	// (0x00079f05) popup_vitu2_query_window_g1_ParamLimits

0x2a61,	// (0x0006f86a) popup_vitu2_query_window_g2_ParamLimits

0xf999,	// (0x0007c7a2) popup_vitu2_query_window_g_ParamLimits

0x3069,	// (0x0006fe72) bg_button_pane_cp026

0x96e1,	// (0x000764ea) popup_vitu2_query_input_button_pane_g1

0x3069,	// (0x0006fe72) bg_button_pane_cp025

0xd54f,	// (0x0007a358) popup_vitu2_query_button_pane_t1

0x6ad5,	// (0x000738de) main_mp3_pane_t6

0x6aeb,	// (0x000738f4) popup_slider_window_cp01

0xee65,	// (0x0007bc6e) cam4_battery_pane

0xeebe,	// (0x0007bcc7) cam4_battery_pane_cp02

0xef9e,	// (0x0007bda7) cam4_battery_pane_cp01

0xef9e,	// (0x0007bda7) cam4_battery_pane_cp03

0xba40,	// (0x00078849) cam4_battery_pane_g1

0x96e9,	// (0x000764f2) cam4_battery_pane_g2

0x0001,

0xfa9d,	// (0x0007c8a6) cam4_battery_pane_g

0x1721,	// (0x0006e52a) popup_blid_sat_info2_window_t11

0xc348,	// (0x00079151) aid_size_touch_mv_arrow_left_ParamLimits

0xc371,	// (0x0007917a) aid_size_touch_mv_arrow_right_ParamLimits

0xc3cf,	// (0x000791d8) navi_pane_g1_ParamLimits

0xc3db,	// (0x000791e4) navi_pane_g2_ParamLimits

0xc409,	// (0x00079212) navi_pane_g3_ParamLimits

0xf374,	// (0x0007c17d) navi_pane_g_ParamLimits

0x57a1,	// (0x000725aa) navi_pane_mv_t1_ParamLimits

0x7824,	// (0x0007462d) grid_imed_effect_pane_ParamLimits

0x452a,	// (0x00071333) aid_placing_vt_slider_lsc

0xba8f,	// (0x00078898) aid_placing_vt_slider_prt

0x3294,	// (0x0007009d) bg_tb_trans_pane_cp01_ParamLimits

0x19c8,	// (0x0006e7d1) popup_image_details_window_g1_ParamLimits

0x6962,	// (0x0007376b) popup_image_details_window_g2_ParamLimits

0x6977,	// (0x00073780) popup_image_details_window_g3_ParamLimits

0x6977,	// (0x00073780) popup_image_details_window_g3

0xf6a0,	// (0x0007c4a9) popup_image_details_window_g_ParamLimits

0x698b,	// (0x00073794) popup_image_details_window_t1_ParamLimits

0x699d,	// (0x000737a6) popup_image_details_window_t2_ParamLimits

0x69b6,	// (0x000737bf) popup_image_details_window_t3_ParamLimits

0x69ca,	// (0x000737d3) popup_image_details_window_t4_ParamLimits

0x69e5,	// (0x000737ee) popup_image_details_window_t5_ParamLimits

0xf6a7,	// (0x0007c4b0) popup_image_details_window_t_ParamLimits

0x9347,	// (0x00076150) cl_header_name_pane_ParamLimits

0x9347,	// (0x00076150) cl_header_name_pane

0x96f3,	// (0x000764fc) cl_header_name_pane_t1_ParamLimits

0x96f3,	// (0x000764fc) cl_header_name_pane_t1

0x9714,	// (0x0007651d) cl_header_name_pane_t2_ParamLimits

0x9714,	// (0x0007651d) cl_header_name_pane_t2

0x9756,	// (0x0007655f) cl_header_name_pane_t3_ParamLimits

0x9756,	// (0x0007655f) cl_header_name_pane_t3

0x0002,

0xfaa2,	// (0x0007c8ab) cl_header_name_pane_t_ParamLimits

0xfaa2,	// (0x0007c8ab) cl_header_name_pane_t

0xc498,	// (0x000792a1) navi_pane_mv_g2_ParamLimits

0xce0d,	// (0x00079c16) field_vitu2_entry_pane_g1_ParamLimits

0xce19,	// (0x00079c22) field_vitu2_entry_pane_g2_ParamLimits

0x14e7,	// (0x0006e2f0) field_vitu2_entry_pane_g3_ParamLimits

0x14e7,	// (0x0006e2f0) field_vitu2_entry_pane_g3

0xf8a2,	// (0x0007c6ab) field_vitu2_entry_pane_g_ParamLimits

0x87aa,	// (0x000755b3) cell_vitu2_itu_pane_g1_ParamLimits

0x87c2,	// (0x000755cb) cell_vitu2_itu_pane_g2_ParamLimits

0x87c2,	// (0x000755cb) cell_vitu2_itu_pane_g2

0x0001,

0xf8ae,	// (0x0007c6b7) cell_vitu2_itu_pane_g_ParamLimits

0xf8ae,	// (0x0007c6b7) cell_vitu2_itu_pane_g

0x3294,	// (0x0007009d) bg_vkb2_func_pane_cp05_ParamLimits

0x3294,	// (0x0007009d) bg_vkb2_func_pane_cp05

0x3294,	// (0x0007009d) bg_vkb2_func_pane_cp03

0x3294,	// (0x0007009d) bg_vkb2_func_pane_cp04

0x3294,	// (0x0007009d) bg_vkb2_func_pane_cp10_ParamLimits

0x3294,	// (0x0007009d) bg_vkb2_func_pane_cp10

0x2b7e,	// (0x0006f987) bg_vkb2_func_pane_cp08

0x92f1,	// (0x000760fa) bg_vkb2_func_pane_cp06

0x92ff,	// (0x00076108) bg_vkb2_func_pane_cp07

0xd436,	// (0x0007a23f) bg_vkb2_func_pane_cp11_ParamLimits

0xd436,	// (0x0007a23f) bg_vkb2_func_pane_cp11

0xd44b,	// (0x0007a254) bg_vkb2_func_pane_cp12_ParamLimits

0xd44b,	// (0x0007a254) bg_vkb2_func_pane_cp12

0x3069,	// (0x0006fe72) bg_vkb2_func_pane_cp09

0xce54,	// (0x00079c5d) bg_vkb2_func_pane_g1

0xbc51,	// (0x00078a5a) bg_vkb2_func_pane_g2

0xce5c,	// (0x00079c65) bg_vkb2_func_pane_g3

0xce64,	// (0x00079c6d) bg_vkb2_func_pane_g4

0xd0c1,	// (0x00079eca) bg_vkb2_func_pane_g5

0xce7c,	// (0x00079c85) bg_vkb2_func_pane_g6

0xce84,	// (0x00079c8d) bg_vkb2_func_pane_g7

0xce74,	// (0x00079c7d) bg_vkb2_func_pane_g8

0xbc31,	// (0x00078a3a) bg_vkb2_func_pane_g9

0x0008,

0xfaa9,	// (0x0007c8b2) bg_vkb2_func_pane_g

0x960d,	// (0x00076416) blid2_tripm_pane_g6_ParamLimits

0x960d,	// (0x00076416) blid2_tripm_pane_g6

0xcd5f,	// (0x00079b68) mp4_progress_pane_g1

0x9686,	// (0x0007648f) blid2_tripm_values_pane_ParamLimits

0x9686,	// (0x0007648f) blid2_tripm_values_pane

0x9787,	// (0x00076590) blid2_tripm_values_pane_t1

0x9795,	// (0x0007659e) blid2_tripm_values_pane_t2

0x97a3,	// (0x000765ac) blid2_tripm_values_pane_t3

0x97b1,	// (0x000765ba) blid2_tripm_values_pane_t4

0x97bf,	// (0x000765c8) blid2_tripm_values_pane_t5

0x97cd,	// (0x000765d6) blid2_tripm_values_pane_t6

0x97db,	// (0x000765e4) blid2_tripm_values_pane_t7

0x97e9,	// (0x000765f2) blid2_tripm_values_pane_t8

0x97f7,	// (0x00076600) blid2_tripm_values_pane_t9

0x0008,

0xfabc,	// (0x0007c8c5) blid2_tripm_values_pane_t

0x456c,	// (0x00071375) call_video_pane_t1_ParamLimits

0x458a,	// (0x00071393) call_video_pane_t2_ParamLimits

0xf222,	// (0x0007c02b) call_video_pane_t_ParamLimits

0x2887,	// (0x0006f690) msg_header_pane_g1_ParamLimits

0xc683,	// (0x0007948c) msg_header_pane_g2_ParamLimits

0xc683,	// (0x0007948c) msg_header_pane_g2

0x0001,

0xf417,	// (0x0007c220) msg_header_pane_g_ParamLimits

0xf417,	// (0x0007c220) msg_header_pane_g

0xb7e2,	// (0x000785eb) main_clock2_pane_ParamLimits

0x74a2,	// (0x000742ab) grid_clock2_toolbar_pane_ParamLimits

0x74a2,	// (0x000742ab) grid_clock2_toolbar_pane

0x74a2,	// (0x000742ab) listscroll_clock2_pane_ParamLimits

0x74a2,	// (0x000742ab) listscroll_clock2_pane

0x75bc,	// (0x000743c5) main_clock2_pane_t3_ParamLimits

0x75bc,	// (0x000743c5) main_clock2_pane_t3

0x75e0,	// (0x000743e9) main_clock2_pane_t4_ParamLimits

0x75e0,	// (0x000743e9) main_clock2_pane_t4

0xd55d,	// (0x0007a366) cell_clock2_toolbar_pane

0xd565,	// (0x0007a36e) cell_clock2_toolbar_pane_cp01

0xd565,	// (0x0007a36e) cell_clock2_toolbar_pane_cp02

0xd56d,	// (0x0007a376) cell_clock2_toolbar_pane_cp03

0xd575,	// (0x0007a37e) list_clock2_pane

0xc2be,	// (0x000790c7) scroll_pane_cp10

0xd57d,	// (0x0007a386) list_single_clock2_pane_ParamLimits

0xd57d,	// (0x0007a386) list_single_clock2_pane

0xba00,	// (0x00078809) list_highlight_pane_cp08

0xd58a,	// (0x0007a393) list_single_clock2_pane_t1

0xd598,	// (0x0007a3a1) list_single_clock2_pane_t2

0x0001,

0xfacf,	// (0x0007c8d8) list_single_clock2_pane_t

0x3069,	// (0x0006fe72) bg_button_pane_cp10

0xd5a6,	// (0x0007a3af) cell_clock2_toolbar_pane_g1

0x5a18,	// (0x00072821) aid_main_viewer_pane_g1_ParamLimits

0x5a18,	// (0x00072821) aid_main_viewer_pane_g1

0x5a26,	// (0x0007282f) aid_main_viewer_pane_g2_ParamLimits

0x5a26,	// (0x0007282f) aid_main_viewer_pane_g2

0x5a34,	// (0x0007283d) aid_main_viewer_pane_g3_ParamLimits

0x5a34,	// (0x0007283d) aid_main_viewer_pane_g3

0x5a43,	// (0x0007284c) aid_main_viewer_pane_g4_ParamLimits

0x5a43,	// (0x0007284c) aid_main_viewer_pane_g4

0x0003,

0xf428,	// (0x0007c231) aid_main_viewer_pane_g_ParamLimits

0xf428,	// (0x0007c231) aid_main_viewer_pane_g

0x638a,	// (0x00073193) main_calc_pane_ParamLimits

0x639e,	// (0x000731a7) main_dialer2_pane_ParamLimits

0x3069,	// (0x0006fe72) main_cam6_pane

0x3069,	// (0x0006fe72) main_vid6_pane

0x74ae,	// (0x000742b7) listscroll_gen_pane_cp06_ParamLimits

0x74ae,	// (0x000742b7) listscroll_gen_pane_cp06

0x7603,	// (0x0007440c) main_clock2_pane_t5_ParamLimits

0x7603,	// (0x0007440c) main_clock2_pane_t5

0x7661,	// (0x0007446a) aid_call2_pane_cp10_ParamLimits

0x7673,	// (0x0007447c) aid_call_pane_cp10_ParamLimits

0xc33c,	// (0x00079145) popup_clock_analogue_window_cp10_g1_ParamLimits

0xc33c,	// (0x00079145) popup_clock_analogue_window_cp10_g2_ParamLimits

0x7685,	// (0x0007448e) popup_clock_analogue_window_cp10_g3_ParamLimits

0x7685,	// (0x0007448e) popup_clock_analogue_window_cp10_g4_ParamLimits

0xc33c,	// (0x00079145) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf75c,	// (0x0007c565) popup_clock_analogue_window_cp10_g_ParamLimits

0x769b,	// (0x000744a4) popup_clock_analogue_window_cp10_t1_ParamLimits

0x7f84,	// (0x00074d8d) cell_dialer2_keypad_pane_g2_ParamLimits

0x7f84,	// (0x00074d8d) cell_dialer2_keypad_pane_g2

0x0001,

0xf841,	// (0x0007c64a) cell_dialer2_keypad_pane_g_ParamLimits

0xf841,	// (0x0007c64a) cell_dialer2_keypad_pane_g

0x7fa0,	// (0x00074da9) cell_dialer2_keypad_pane_t1

0x8b51,	// (0x0007595a) main_cset_text2_pane_ParamLimits

0x8b51,	// (0x0007595a) main_cset_text2_pane

0xd2e8,	// (0x0007a0f1) area_vitu2_query_pane_g1_ParamLimits

0x2b45,	// (0x0006f94e) area_vitu2_query_pane_g2_ParamLimits

0xf9ec,	// (0x0007c7f5) area_vitu2_query_pane_g_ParamLimits

0xd36c,	// (0x0007a175) area_vitu2_query_pane_t7_ParamLimits

0xd36c,	// (0x0007a175) area_vitu2_query_pane_t7

0x92f1,	// (0x000760fa) bg_button_pane_cp018_ParamLimits

0x92ff,	// (0x00076108) bg_button_pane_cp021_ParamLimits

0x2b7e,	// (0x0006f987) bg_button_pane_cp022_ParamLimits

0x2b7e,	// (0x0006f987) bg_vkb2_func_pane_cp08_ParamLimits

0x92f1,	// (0x000760fa) bg_vkb2_func_pane_cp06_ParamLimits

0x92ff,	// (0x00076108) bg_vkb2_func_pane_cp07_ParamLimits

0x2b8d,	// (0x0006f996) input_focus_pane_cp09_ParamLimits

0xf010,	// (0x0007be19) cam6_autofocus_pane_ParamLimits

0xf010,	// (0x0007be19) cam6_autofocus_pane

0x9805,	// (0x0007660e) cam6_image_uncrop_pane_ParamLimits

0x9805,	// (0x0007660e) cam6_image_uncrop_pane

0x9814,	// (0x0007661d) cam6_indi_pane_ParamLimits

0x9814,	// (0x0007661d) cam6_indi_pane

0x982a,	// (0x00076633) cam6_mode_pane_ParamLimits

0x982a,	// (0x00076633) cam6_mode_pane

0x983c,	// (0x00076645) cam6_timer_pane_ParamLimits

0x983c,	// (0x00076645) cam6_timer_pane

0x9848,	// (0x00076651) cam6_zoom_pane_ParamLimits

0x9848,	// (0x00076651) cam6_zoom_pane

0x9854,	// (0x0007665d) cam6_mode_pane_g1_ParamLimits

0x9854,	// (0x0007665d) cam6_mode_pane_g1

0x9864,	// (0x0007666d) cam6_mode_pane_g2_ParamLimits

0x9864,	// (0x0007666d) cam6_mode_pane_g2

0x9874,	// (0x0007667d) cam6_mode_pane_g3_ParamLimits

0x9874,	// (0x0007667d) cam6_mode_pane_g3

0x9884,	// (0x0007668d) cam6_mode_pane_g4_ParamLimits

0x9884,	// (0x0007668d) cam6_mode_pane_g4

0x0003,

0xfad4,	// (0x0007c8dd) cam6_mode_pane_g_ParamLimits

0xfad4,	// (0x0007c8dd) cam6_mode_pane_g

0x19e7,	// (0x0006e7f0) bg_tb_trans_pane_cp08_ParamLimits

0x19e7,	// (0x0006e7f0) bg_tb_trans_pane_cp08

0xd5ae,	// (0x0007a3b7) cam6_battery_pane_ParamLimits

0xd5ae,	// (0x0007a3b7) cam6_battery_pane

0xd5c4,	// (0x0007a3cd) cam6_indi_pane_g1_ParamLimits

0xd5c4,	// (0x0007a3cd) cam6_indi_pane_g1

0xd5d6,	// (0x0007a3df) cam6_indi_pane_g2_ParamLimits

0xd5d6,	// (0x0007a3df) cam6_indi_pane_g2

0xd5e8,	// (0x0007a3f1) cam6_indi_pane_g3_ParamLimits

0xd5e8,	// (0x0007a3f1) cam6_indi_pane_g3

0x0002,

0xfadd,	// (0x0007c8e6) cam6_indi_pane_g_ParamLimits

0xfadd,	// (0x0007c8e6) cam6_indi_pane_g

0xd5fa,	// (0x0007a403) cam6_indi_pane_t1_ParamLimits

0xd5fa,	// (0x0007a403) cam6_indi_pane_t1

0x9894,	// (0x0007669d) cam6_autofocus_pane_g1

0x989c,	// (0x000766a5) cam6_autofocus_pane_g2

0x98a4,	// (0x000766ad) cam6_autofocus_pane_g3

0x98ac,	// (0x000766b5) cam6_autofocus_pane_g4

0x0003,

0xfae4,	// (0x0007c8ed) cam6_autofocus_pane_g

0xd620,	// (0x0007a429) cam6_timer_pane_g1

0xd628,	// (0x0007a431) cam6_timer_pane_t1

0xd636,	// (0x0007a43f) cam6_zoom_cont_pane

0xd63e,	// (0x0007a447) cam6_zoom_pane_g1

0xd646,	// (0x0007a44f) cam6_zoom_pane_g2

0x98b4,	// (0x000766bd) cam6_zoom_pane_g3

0x0002,

0xfaed,	// (0x0007c8f6) cam6_zoom_pane_g

0xba40,	// (0x00078849) cam6_battery_pane_g1

0xba40,	// (0x00078849) cam6_battery_pane_g2

0x0001,

0xf3d8,	// (0x0007c1e1) cam6_battery_pane_g

0xd64e,	// (0x0007a457) cam6_zoom_cont_pane_g1

0xd657,	// (0x0007a460) cam6_zoom_cont_pane_g2

0xd660,	// (0x0007a469) cam6_zoom_cont_pane_g3

0x0002,

0xfaf4,	// (0x0007c8fd) cam6_zoom_cont_pane_g

0x98ce,	// (0x000766d7) cam6_mode_pane_cp_ParamLimits

0x98ce,	// (0x000766d7) cam6_mode_pane_cp

0x9848,	// (0x00076651) cam6_zoom_pane_cp_ParamLimits

0x9848,	// (0x00076651) cam6_zoom_pane_cp

0x98e0,	// (0x000766e9) vid6_image_uncrop_cif_pane_ParamLimits

0x98e0,	// (0x000766e9) vid6_image_uncrop_cif_pane

0x98f0,	// (0x000766f9) vid6_image_uncrop_nhd_pane_ParamLimits

0x98f0,	// (0x000766f9) vid6_image_uncrop_nhd_pane

0x9805,	// (0x0007660e) vid6_image_uncrop_vga_pane_ParamLimits

0x9805,	// (0x0007660e) vid6_image_uncrop_vga_pane

0x98ff,	// (0x00076708) vid6_image_uncrop_wvga_pane_ParamLimits

0x98ff,	// (0x00076708) vid6_image_uncrop_wvga_pane

0x990e,	// (0x00076717) vid6_indi_pane_ParamLimits

0x990e,	// (0x00076717) vid6_indi_pane

0x19e7,	// (0x0006e7f0) bg_tb_trans_pane_cp09_ParamLimits

0x19e7,	// (0x0006e7f0) bg_tb_trans_pane_cp09

0xd678,	// (0x0007a481) cam6_battery_pane_cp_ParamLimits

0xd678,	// (0x0007a481) cam6_battery_pane_cp

0xd684,	// (0x0007a48d) vid6_indi_pane_g1_ParamLimits

0xd684,	// (0x0007a48d) vid6_indi_pane_g1

0xd696,	// (0x0007a49f) vid6_indi_pane_g2_ParamLimits

0xd696,	// (0x0007a49f) vid6_indi_pane_g2

0xd6a8,	// (0x0007a4b1) vid6_indi_pane_g3_ParamLimits

0xd6a8,	// (0x0007a4b1) vid6_indi_pane_g3

0xd6bd,	// (0x0007a4c6) vid6_indi_pane_g4_ParamLimits

0xd6bd,	// (0x0007a4c6) vid6_indi_pane_g4

0xd6d2,	// (0x0007a4db) vid6_indi_pane_g5_ParamLimits

0xd6d2,	// (0x0007a4db) vid6_indi_pane_g5

0x0004,

0xfafb,	// (0x0007c904) vid6_indi_pane_g_ParamLimits

0xfafb,	// (0x0007c904) vid6_indi_pane_g

0xd6ec,	// (0x0007a4f5) vid6_indi_pane_t1_ParamLimits

0xd6ec,	// (0x0007a4f5) vid6_indi_pane_t1

0xd702,	// (0x0007a50b) vid6_indi_pane_t2_ParamLimits

0xd702,	// (0x0007a50b) vid6_indi_pane_t2

0xd72a,	// (0x0007a533) vid6_indi_pane_t3_ParamLimits

0xd72a,	// (0x0007a533) vid6_indi_pane_t3

0xd752,	// (0x0007a55b) vid6_indi_pane_t4_ParamLimits

0xd752,	// (0x0007a55b) vid6_indi_pane_t4

0x0003,

0xfb06,	// (0x0007c90f) vid6_indi_pane_t_ParamLimits

0xfb06,	// (0x0007c90f) vid6_indi_pane_t

0xd776,	// (0x0007a57f) wait_bar_pane_cp08

0x9926,	// (0x0007672f) main_cset_text2_pane_t1_ParamLimits

0x9926,	// (0x0007672f) main_cset_text2_pane_t1

0x98bc,	// (0x000766c5) listscroll_gen_pane_cp06_t1_ParamLimits

0x98bc,	// (0x000766c5) listscroll_gen_pane_cp06_t1

0x3069,	// (0x0006fe72) main_cam6_set_pane

0xb74e,	// (0x00078557) bg_tb_trans_pane_cp06_ParamLimits

0xee6d,	// (0x0007bc76) cam4_indicators_pane_g1_ParamLimits

0xee7e,	// (0x0007bc87) cam4_indicators_pane_g2_ParamLimits

0xf87e,	// (0x0007c687) cam4_indicators_pane_g_ParamLimits

0xee9c,	// (0x0007bca5) cam4_indicators_pane_t1_ParamLimits

0x3294,	// (0x0007009d) bg_tb_trans_pane_cp07_ParamLimits

0xeec8,	// (0x0007bcd1) vid4_indicators_pane_g1_ParamLimits

0xeedc,	// (0x0007bce5) vid4_indicators_pane_g2_ParamLimits

0xeef0,	// (0x0007bcf9) vid4_indicators_pane_g3_ParamLimits

0xef01,	// (0x0007bd0a) vid4_indicators_pane_g4_ParamLimits

0xf890,	// (0x0007c699) vid4_indicators_pane_g_ParamLimits

0xef1f,	// (0x0007bd28) vid4_indicators_pane_t1_ParamLimits

0xefa6,	// (0x0007bdaf) vid4_progress_pane_g1_ParamLimits

0xefb6,	// (0x0007bdbf) vid4_progress_pane_g2_ParamLimits

0x9437,	// (0x00076240) vid4_progress_pane_g3_ParamLimits

0xefc6,	// (0x0007bdcf) vid4_progress_pane_g4_ParamLimits

0xfa37,	// (0x0007c840) vid4_progress_pane_g_ParamLimits

0x9449,	// (0x00076252) vid4_progress_pane_t1_ParamLimits

0xefde,	// (0x0007bde7) vid4_progress_pane_t2_ParamLimits

0xeff3,	// (0x0007bdfc) vid4_progress_pane_t3_ParamLimits

0xfa42,	// (0x0007c84b) vid4_progress_pane_t_ParamLimits

0x9461,	// (0x0007626a) wait_bar_pane_cp07_ParamLimits

0x9943,	// (0x0007674c) main_cam6_set_pane_g2_ParamLimits

0x9943,	// (0x0007674c) main_cam6_set_pane_g2

0x9967,	// (0x00076770) main_cset6_listscroll_pane_ParamLimits

0x9967,	// (0x00076770) main_cset6_listscroll_pane

0x9987,	// (0x00076790) main_cset6_slider_pane_ParamLimits

0x9987,	// (0x00076790) main_cset6_slider_pane

0x999d,	// (0x000767a6) main_cset6_text2_pane_ParamLimits

0x999d,	// (0x000767a6) main_cset6_text2_pane

0xd785,	// (0x0007a58e) main_cset6_text_pane

0xd78d,	// (0x0007a596) main_cset_list_pane_copy1_ParamLimits

0xd78d,	// (0x0007a596) main_cset_list_pane_copy1

0xd79d,	// (0x0007a5a6) scroll_pane_cp028_copy1

0x99ab,	// (0x000767b4) cset_list_set_pane_copy1

0x99bc,	// (0x000767c5) aid_position_infowindow_above_copy1

0x99c4,	// (0x000767cd) aid_position_infowindow_below_copy1

0x99cc,	// (0x000767d5) cset_list_set_pane_g1_copy1

0x2bb0,	// (0x0006f9b9) cset_list_set_pane_g3_copy1_ParamLimits

0x2bb0,	// (0x0006f9b9) cset_list_set_pane_g3_copy1

0x2bbf,	// (0x0006f9c8) cset_list_set_pane_t1_copy1_ParamLimits

0x2bbf,	// (0x0006f9c8) cset_list_set_pane_t1_copy1

0x3294,	// (0x0007009d) list_highlight_pane_cp021_copy1_ParamLimits

0x3294,	// (0x0007009d) list_highlight_pane_cp021_copy1

0xd7a6,	// (0x0007a5af) cset6_slider_pane_ParamLimits

0xd7a6,	// (0x0007a5af) cset6_slider_pane

0xd7d2,	// (0x0007a5db) main_cset6_slider_pane_g1_ParamLimits

0xd7d2,	// (0x0007a5db) main_cset6_slider_pane_g1

0x99d4,	// (0x000767dd) main_cset6_slider_pane_g2_ParamLimits

0x99d4,	// (0x000767dd) main_cset6_slider_pane_g2

0xd7fa,	// (0x0007a603) main_cset6_slider_pane_g3_ParamLimits

0xd7fa,	// (0x0007a603) main_cset6_slider_pane_g3

0x99fc,	// (0x00076805) main_cset6_slider_pane_g4_ParamLimits

0x99fc,	// (0x00076805) main_cset6_slider_pane_g4

0x9a08,	// (0x00076811) main_cset6_slider_pane_g5_ParamLimits

0x9a08,	// (0x00076811) main_cset6_slider_pane_g5

0xcf83,	// (0x00079d8c) main_cset6_slider_pane_g7_ParamLimits

0xcf83,	// (0x00079d8c) main_cset6_slider_pane_g7

0xcf8f,	// (0x00079d98) main_cset6_slider_pane_g8_ParamLimits

0xcf8f,	// (0x00079d98) main_cset6_slider_pane_g8

0x8bf7,	// (0x00075a00) main_cset6_slider_pane_g9_ParamLimits

0x8bf7,	// (0x00075a00) main_cset6_slider_pane_g9

0x8c03,	// (0x00075a0c) main_cset6_slider_pane_g10_ParamLimits

0x8c03,	// (0x00075a0c) main_cset6_slider_pane_g10

0x8c0f,	// (0x00075a18) main_cset6_slider_pane_g11_ParamLimits

0x8c0f,	// (0x00075a18) main_cset6_slider_pane_g11

0x8c1b,	// (0x00075a24) main_cset6_slider_pane_g12_ParamLimits

0x8c1b,	// (0x00075a24) main_cset6_slider_pane_g12

0x8c27,	// (0x00075a30) main_cset6_slider_pane_g13_ParamLimits

0x8c27,	// (0x00075a30) main_cset6_slider_pane_g13

0x8c33,	// (0x00075a3c) main_cset6_slider_pane_g14_ParamLimits

0x8c33,	// (0x00075a3c) main_cset6_slider_pane_g14

0x9a14,	// (0x0007681d) main_cset6_slider_pane_g15_ParamLimits

0x9a14,	// (0x0007681d) main_cset6_slider_pane_g15

0x8c57,	// (0x00075a60) main_cset6_slider_pane_g16_ParamLimits

0x8c57,	// (0x00075a60) main_cset6_slider_pane_g16

0x8c63,	// (0x00075a6c) main_cset6_slider_pane_g17_ParamLimits

0x8c63,	// (0x00075a6c) main_cset6_slider_pane_g17

0x0011,

0xfb0f,	// (0x0007c918) main_cset6_slider_pane_g_ParamLimits

0xfb0f,	// (0x0007c918) main_cset6_slider_pane_g

0xd806,	// (0x0007a60f) main_cset6_slider_pane_t1_ParamLimits

0xd806,	// (0x0007a60f) main_cset6_slider_pane_t1

0x9a44,	// (0x0007684d) main_cset6_slider_pane_t2_ParamLimits

0x9a44,	// (0x0007684d) main_cset6_slider_pane_t2

0x9a6f,	// (0x00076878) main_cset6_slider_pane_t3_ParamLimits

0x9a6f,	// (0x00076878) main_cset6_slider_pane_t3

0x9a9a,	// (0x000768a3) main_cset6_slider_pane_t4_ParamLimits

0x9a9a,	// (0x000768a3) main_cset6_slider_pane_t4

0x9ac5,	// (0x000768ce) main_cset6_slider_pane_t5_ParamLimits

0x9ac5,	// (0x000768ce) main_cset6_slider_pane_t5

0xd847,	// (0x0007a650) main_cset6_slider_pane_t7_ParamLimits

0xd847,	// (0x0007a650) main_cset6_slider_pane_t7

0x9af0,	// (0x000768f9) main_cset6_slider_pane_t8_ParamLimits

0x9af0,	// (0x000768f9) main_cset6_slider_pane_t8

0x9b14,	// (0x0007691d) main_cset6_slider_pane_t9_ParamLimits

0x9b14,	// (0x0007691d) main_cset6_slider_pane_t9

0x9b38,	// (0x00076941) main_cset6_slider_pane_t10_ParamLimits

0x9b38,	// (0x00076941) main_cset6_slider_pane_t10

0x9b5c,	// (0x00076965) main_cset6_slider_pane_t11_ParamLimits

0x9b5c,	// (0x00076965) main_cset6_slider_pane_t11

0xd87d,	// (0x0007a686) main_cset6_slider_pane_t14_ParamLimits

0xd87d,	// (0x0007a686) main_cset6_slider_pane_t14

0xd8b6,	// (0x0007a6bf) main_cset6_slider_pane_t15_ParamLimits

0xd8b6,	// (0x0007a6bf) main_cset6_slider_pane_t15

0x000b,

0xfb34,	// (0x0007c93d) main_cset6_slider_pane_t_ParamLimits

0xfb34,	// (0x0007c93d) main_cset6_slider_pane_t

0xd075,	// (0x00079e7e) cset_slider_pane_g1_copy1

0xd07e,	// (0x00079e87) cset_slider_pane_g2_copy1

0xd087,	// (0x00079e90) cset_slider_pane_g3_copy1

0x3069,	// (0x0006fe72) bg_popup_sub_pane_cp011_copy1

0xd8ef,	// (0x0007a6f8) main_cset_text_pane_g1_copy1

0xd110,	// (0x00079f19) main_cset_text_pane_t1_copy1

0xd11e,	// (0x00079f27) main_cset_text_pane_t2_copy1

0xd12c,	// (0x00079f35) main_cset_text_pane_t3_copy1

0xd13a,	// (0x00079f43) main_cset_text_pane_t4_copy1

0xd148,	// (0x00079f51) main_cset_text_pane_t5_copy1

0xd8f7,	// (0x0007a700) main_cset_text_pane_t6_copy1

0xd905,	// (0x0007a70e) main_cset_text_pane_t7_copy1

0x9926,	// (0x0007672f) main_cset_text2_pane_t1_copy1

0x3294,	// (0x0007009d) main_ncimui_pane

0x65f4,	// (0x000733fd) popup_query_ncimui_window_ParamLimits

0x65f4,	// (0x000733fd) popup_query_ncimui_window

0xcd27,	// (0x00079b30) field_cale_ev2_pane_g4_ParamLimits

0xcd27,	// (0x00079b30) field_cale_ev2_pane_g4

0x7e3e,	// (0x00074c47) cell_video_dialer_keypad_pane_g2_ParamLimits

0x7e3e,	// (0x00074c47) cell_video_dialer_keypad_pane_g2

0x0001,

0xf818,	// (0x0007c621) cell_video_dialer_keypad_pane_g_ParamLimits

0xf818,	// (0x0007c621) cell_video_dialer_keypad_pane_g

0x7e56,	// (0x00074c5f) cell_video_dialer_keypad_pane_t1

0x3069,	// (0x0006fe72) bg_popup_window_pane_cp012

0x1366,	// (0x0006e16f) heading_pane_cp06

0xd931,	// (0x0007a73a) ncim_query_content_pane

0x3069,	// (0x0006fe72) bg_popup_heading_pane_cp01

0xd939,	// (0x0007a742) ncim_heading_pane_t1

0xd947,	// (0x0007a750) ncim_indicator_popup_pane

0xd959,	// (0x0007a762) ncim_query_button_pane

0xd96d,	// (0x0007a776) ncim_query_content_pane_t1

0xd97f,	// (0x0007a788) ncim_query_content_pane_t2

0x0005,

0xfb78,	// (0x0007c981) ncim_query_content_pane_t

0xd9b9,	// (0x0007a7c2) ncim_query_list_pane

0xd9cb,	// (0x0007a7d4) ncim_query_popup_pane

0xd947,	// (0x0007a750) ncim_indicator_popup_pane_ParamLimits

0x9ca9,	// (0x00076ab2) ncim_query_content_pane_g1_ParamLimits

0x9ca9,	// (0x00076ab2) ncim_query_content_pane_g1

0xd96d,	// (0x0007a776) ncim_query_content_pane_t1_ParamLimits

0xd97f,	// (0x0007a788) ncim_query_content_pane_t2_ParamLimits

0x9cb5,	// (0x00076abe) ncim_query_content_pane_t3_ParamLimits

0x9cb5,	// (0x00076abe) ncim_query_content_pane_t3

0x9cdd,	// (0x00076ae6) ncim_query_content_pane_t4_ParamLimits

0x9cdd,	// (0x00076ae6) ncim_query_content_pane_t4

0x9d05,	// (0x00076b0e) ncim_query_content_pane_t5_ParamLimits

0x9d05,	// (0x00076b0e) ncim_query_content_pane_t5

0xd991,	// (0x0007a79a) ncim_query_content_pane_t6_ParamLimits

0xd991,	// (0x0007a79a) ncim_query_content_pane_t6

0xfb78,	// (0x0007c981) ncim_query_content_pane_t_ParamLimits

0xd9b9,	// (0x0007a7c2) ncim_query_list_pane_ParamLimits

0xd9cb,	// (0x0007a7d4) ncim_query_popup_pane_ParamLimits

0xd9df,	// (0x0007a7e8) wait_bar_pane_cp04

0x3069,	// (0x0006fe72) input_focus_pane_cp011

0xd9e7,	// (0x0007a7f0) ncim_query_popup_pane_t1

0xd9f5,	// (0x0007a7fe) ncim_list_query_list_pane_ParamLimits

0xd9f5,	// (0x0007a7fe) ncim_list_query_list_pane

0x3069,	// (0x0006fe72) bg_button_pane_cp027

0xda02,	// (0x0007a80b) ncim_query_button_pane_g1

0x3069,	// (0x0006fe72) list_highlight_pane_cp012

0xda0c,	// (0x0007a815) ncim_list_query_list_pane_g1

0xda14,	// (0x0007a81d) ncim_list_query_list_pane_t1

0xee8d,	// (0x0007bc96) cam4_indicators_pane_g3_ParamLimits

0xee8d,	// (0x0007bc96) cam4_indicators_pane_g3

0xef0d,	// (0x0007bd16) vid4_indicators_pane_g5_ParamLimits

0xef0d,	// (0x0007bd16) vid4_indicators_pane_g5

0xefd2,	// (0x0007bddb) vid4_progress_pane_g5_ParamLimits

0xefd2,	// (0x0007bddb) vid4_progress_pane_g5

0x9b94,	// (0x0007699d) main_ncimui_pane_g1

0x9bfd,	// (0x00076a06) ncimui_group_query_pane_ParamLimits

0x9bfd,	// (0x00076a06) ncimui_group_query_pane

0x9c45,	// (0x00076a4e) ncimui_list_pane_ParamLimits

0x9c45,	// (0x00076a4e) ncimui_list_pane

0x9c6c,	// (0x00076a75) ncimui_text_pane_ParamLimits

0x9c6c,	// (0x00076a75) ncimui_text_pane

0x9d2d,	// (0x00076b36) ncimui_text_pane_t1_ParamLimits

0x9d2d,	// (0x00076b36) ncimui_text_pane_t1

0xda22,	// (0x0007a82b) ncimui_list_single_graphic_pane_ParamLimits

0xda22,	// (0x0007a82b) ncimui_list_single_graphic_pane

0x9d4b,	// (0x00076b54) ncimui_query_pane_ParamLimits

0x9d4b,	// (0x00076b54) ncimui_query_pane

0x3069,	// (0x0006fe72) list_highlight_pane_cp013

0xda32,	// (0x0007a83b) ncim_list_query_list_pane_t1_copy1

0xda0c,	// (0x0007a815) ncim_list_single_graphic_pane_g1

0x9d5e,	// (0x00076b67) ncim_query_button_pane_cp01

0x9d6a,	// (0x00076b73) ncim_query_entry_pane_ParamLimits

0x9d6a,	// (0x00076b73) ncim_query_entry_pane

0x9d7d,	// (0x00076b86) ncimui_query_pane_g1

0x9d89,	// (0x00076b92) ncimui_query_pane_t1_ParamLimits

0x9d89,	// (0x00076b92) ncimui_query_pane_t1

0x3294,	// (0x0007009d) input_focus_pane_cp012

0xda40,	// (0x0007a849) ncim_query_entry_pane_t1

0xb7e2,	// (0x000785eb) main_im_pane_ParamLimits

0x3294,	// (0x0007009d) main_mobtv_pane_ParamLimits

0x3294,	// (0x0007009d) main_mobtv_pane

0x9a2c,	// (0x00076835) main_cset6_slider_pane_g18_ParamLimits

0x9a2c,	// (0x00076835) main_cset6_slider_pane_g18

0x9a38,	// (0x00076841) main_cset6_slider_pane_g19_ParamLimits

0x9a38,	// (0x00076841) main_cset6_slider_pane_g19

0xb76a,	// (0x00078573) bg_main_mobtv_pane_ParamLimits

0xb76a,	// (0x00078573) bg_main_mobtv_pane

0x9da2,	// (0x00076bab) main_mobtv_info_pane

0x9dab,	// (0x00076bb4) main_mobtv_loading_pane_ParamLimits

0x9dab,	// (0x00076bb4) main_mobtv_loading_pane

0xda52,	// (0x0007a85b) main_mobtv_pg_channel_list_pane

0xda5c,	// (0x0007a865) main_mobtv_pg_hdr_pane

0x9db8,	// (0x00076bc1) main_mobtv_programe_curr_pane_ParamLimits

0x9db8,	// (0x00076bc1) main_mobtv_programe_curr_pane

0x9dc5,	// (0x00076bce) main_mobtv_programe_next_pane_ParamLimits

0x9dc5,	// (0x00076bce) main_mobtv_programe_next_pane

0xda65,	// (0x0007a86e) popup_mobtv_noti_window

0xba40,	// (0x00078849) main_tv_pg_hdr_pane_g1

0xda6d,	// (0x0007a876) main_tv_pg_hdr_pane_g2

0xda75,	// (0x0007a87e) main_tv_pg_hdr_pane_g3

0xda7d,	// (0x0007a886) main_tv_pg_hdr_pane_g4

0xda85,	// (0x0007a88e) main_tv_pg_hdr_pane_g5

0xda8f,	// (0x0007a898) main_tv_pg_hdr_pane_g6

0xda99,	// (0x0007a8a2) main_tv_pg_hdr_pane_g7

0xdaa3,	// (0x0007a8ac) main_tv_pg_hdr_pane_g8

0xdaad,	// (0x0007a8b6) main_tv_pg_hdr_pane_g9

0xdab7,	// (0x0007a8c0) main_tv_pg_hdr_pane_g10

0xdac1,	// (0x0007a8ca) main_tv_pg_hdr_pane_g11

0x000a,

0xfb85,	// (0x0007c98e) main_tv_pg_hdr_pane_g

0xdacb,	// (0x0007a8d4) main_tv_pg_hdr_pane_t1

0xdad9,	// (0x0007a8e2) main_tv_pg_hdr_pane_t2

0xdae7,	// (0x0007a8f0) main_tv_pg_hdr_pane_t3

0xdaf7,	// (0x0007a900) main_tv_pg_hdr_pane_t4

0xdb07,	// (0x0007a910) main_tv_pg_hdr_pane_t5

0x0004,

0xfb9c,	// (0x0007c9a5) main_tv_pg_hdr_pane_t

0xdb17,	// (0x0007a920) single_mobtv_pg_channel_pane_ParamLimits

0xdb17,	// (0x0007a920) single_mobtv_pg_channel_pane

0xdb29,	// (0x0007a932) single_mobtv_pg_channel_table_pane

0xdb32,	// (0x0007a93b) single_mobtv_pg_channel_thumb_pane

0xdb3b,	// (0x0007a944) single_tv_pg_channel_pane_g1

0xdb44,	// (0x0007a94d) single_tv_pg_channel_pane_g2

0x0001,

0xfba7,	// (0x0007c9b0) single_tv_pg_channel_pane_g

0xb74e,	// (0x00078557) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xb74e,	// (0x00078557) bg_single_mobtv_pg_channel_thumb_pane

0xdb4d,	// (0x0007a956) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdb4d,	// (0x0007a956) single_mobtv_pg_channel_thumb_pane_g1

0xdb5b,	// (0x0007a964) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xdb5b,	// (0x0007a964) single_mobtv_pg_channel_thumb_pane_g2

0xdb67,	// (0x0007a970) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xdb67,	// (0x0007a970) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfbac,	// (0x0007c9b5) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfbac,	// (0x0007c9b5) single_mobtv_pg_channel_thumb_pane_g

0xdb73,	// (0x0007a97c) single_mobtv_pg_channel_thumb_pane_t1

0xdb81,	// (0x0007a98a) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfbb3,	// (0x0007c9bc) single_mobtv_pg_channel_thumb_pane_t

0xba40,	// (0x00078849) bg_single_mobtv_pg_channel_table_pane_g1

0xba40,	// (0x00078849) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf3d8,	// (0x0007c1e1) bg_single_mobtv_pg_channel_table_pane_g

0xdb8f,	// (0x0007a998) single_mobtv_pg_channel_table_pane_t1

0xdb9d,	// (0x0007a9a6) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfbb8,	// (0x0007c9c1) single_mobtv_pg_channel_table_pane_t

0x9dda,	// (0x00076be3) main_mobtv_info_pane_g1_ParamLimits

0x9dda,	// (0x00076be3) main_mobtv_info_pane_g1

0x9df8,	// (0x00076c01) main_mobtv_info_pane_t1_ParamLimits

0x9df8,	// (0x00076c01) main_mobtv_info_pane_t1

0x9e70,	// (0x00076c79) main_mobtv_info_pane_t2_ParamLimits

0x9e70,	// (0x00076c79) main_mobtv_info_pane_t2

0x0002,

0xfbc2,	// (0x0007c9cb) main_mobtv_info_pane_t_ParamLimits

0xfbc2,	// (0x0007c9cb) main_mobtv_info_pane_t

0x9eff,	// (0x00076d08) wait_bar_pane_cp05

0x9f11,	// (0x00076d1a) main_mobtv_loading_pane_g1_ParamLimits

0x9f11,	// (0x00076d1a) main_mobtv_loading_pane_g1

0x9f24,	// (0x00076d2d) main_mobtv_loading_pane_g2_ParamLimits

0x9f24,	// (0x00076d2d) main_mobtv_loading_pane_g2

0x9f30,	// (0x00076d39) main_mobtv_loading_pane_g3_ParamLimits

0x9f30,	// (0x00076d39) main_mobtv_loading_pane_g3

0x0002,

0xfbc9,	// (0x0007c9d2) main_mobtv_loading_pane_g_ParamLimits

0xfbc9,	// (0x0007c9d2) main_mobtv_loading_pane_g

0xdbab,	// (0x0007a9b4) main_mobtv_loading_pane_t1_ParamLimits

0xdbab,	// (0x0007a9b4) main_mobtv_loading_pane_t1

0xdbc3,	// (0x0007a9cc) main_mobtv_loading_pane_t2_ParamLimits

0xdbc3,	// (0x0007a9cc) main_mobtv_loading_pane_t2

0x0001,

0xfbd0,	// (0x0007c9d9) main_mobtv_loading_pane_t_ParamLimits

0xfbd0,	// (0x0007c9d9) main_mobtv_loading_pane_t

0x9f43,	// (0x00076d4c) wait_bar_pane_cp06_ParamLimits

0x9f43,	// (0x00076d4c) wait_bar_pane_cp06

0xdbe7,	// (0x0007a9f0) main_mobtv_programe_curr_pane_t1

0xdbf5,	// (0x0007a9fe) main_mobtv_programe_curr_pane_t2

0x0001,

0xfbd5,	// (0x0007c9de) main_mobtv_programe_curr_pane_t

0xdc03,	// (0x0007aa0c) main_mobtv_programe_next_pane_t1

0xdc11,	// (0x0007aa1a) main_mobtv_programe_next_pane_t2

0xdc1f,	// (0x0007aa28) main_mobtv_programe_next_pane_t3

0x0002,

0xfbda,	// (0x0007c9e3) main_mobtv_programe_next_pane_t

0x3069,	// (0x0006fe72) bg_popup_mobtv_noti_window_pane

0xdc2d,	// (0x0007aa36) popup_mobtv_noti_window_g1

0xdc35,	// (0x0007aa3e) popup_mobtv_noti_window_t1

0xdc43,	// (0x0007aa4c) popup_mobtv_noti_window_t2

0x0001,

0xfbe1,	// (0x0007c9ea) popup_mobtv_noti_window_t

0xba40,	// (0x00078849) bg_popup_mobtv_noti_window_pane_g1

0x3069,	// (0x0006fe72) sc_clock_pane

0x3069,	// (0x0006fe72) main_fs_bigclock_pane

0x9670,	// (0x00076479) blid2_tripm_pane_t4_ParamLimits

0x9670,	// (0x00076479) blid2_tripm_pane_t4

0x9f52,	// (0x00076d5b) sc_clock_pane_g1_ParamLimits

0x9f52,	// (0x00076d5b) sc_clock_pane_g1

0x9f64,	// (0x00076d6d) sc_clock_pane_t1_ParamLimits

0x9f64,	// (0x00076d6d) sc_clock_pane_t1

0x9f86,	// (0x00076d8f) sc_clock_pane_t2_ParamLimits

0x9f86,	// (0x00076d8f) sc_clock_pane_t2

0x9f9e,	// (0x00076da7) sc_clock_pane_t3_ParamLimits

0x9f9e,	// (0x00076da7) sc_clock_pane_t3

0x0004,

0xfbe6,	// (0x0007c9ef) sc_clock_pane_t_ParamLimits

0xfbe6,	// (0x0007c9ef) sc_clock_pane_t

0xa967,	// (0x00077770) main_fs_bigclock_indicator_pane_ParamLimits

0xa967,	// (0x00077770) main_fs_bigclock_indicator_pane

0xa044,	// (0x00076e4d) main_fs_bigclock_pane_g1_ParamLimits

0xa044,	// (0x00076e4d) main_fs_bigclock_pane_g1

0xa973,	// (0x0007777c) main_fs_bigclock_pane_t1_ParamLimits

0xa973,	// (0x0007777c) main_fs_bigclock_pane_t1

0xa985,	// (0x0007778e) main_fs_bigclock_pane_t2_ParamLimits

0xa985,	// (0x0007778e) main_fs_bigclock_pane_t2

0xa999,	// (0x000777a2) main_fs_bigclock_pane_t3_ParamLimits

0xa999,	// (0x000777a2) main_fs_bigclock_pane_t3

0x0002,

0xfd77,	// (0x0007cb80) main_fs_bigclock_pane_t_ParamLimits

0xfd77,	// (0x0007cb80) main_fs_bigclock_pane_t

0xe7d6,	// (0x0007b5df) main_fs_bigclock_indicator_pane_g1

0xd961,	// (0x0007a76a) ncim_query_content_pane_g2_ParamLimits

0xd961,	// (0x0007a76a) ncim_query_content_pane_g2

0x0001,

0xfb73,	// (0x0007c97c) ncim_query_content_pane_g_ParamLimits

0xfb73,	// (0x0007c97c) ncim_query_content_pane_g

0x9fb7,	// (0x00076dc0) sc_clock_pane_t4_ParamLimits

0x9fb7,	// (0x00076dc0) sc_clock_pane_t4

0x3294,	// (0x0007009d) main_radioblah_pane

0xedff,	// (0x0007bc08) cell_call4_button_pane_t1_copy1_ParamLimits

0xedff,	// (0x0007bc08) cell_call4_button_pane_t1_copy1

0x9bac,	// (0x000769b5) main_ncimui_pane_t1_ParamLimits

0x9bac,	// (0x000769b5) main_ncimui_pane_t1

0x9bc6,	// (0x000769cf) main_ncimui_pane_t2_ParamLimits

0x9bc6,	// (0x000769cf) main_ncimui_pane_t2

0x0002,

0xfb6c,	// (0x0007c975) main_ncimui_pane_t_ParamLimits

0xfb6c,	// (0x0007c975) main_ncimui_pane_t

0xdd88,	// (0x0007ab91) main_radioblah_anim_pane_ParamLimits

0xdd88,	// (0x0007ab91) main_radioblah_anim_pane

0xdd99,	// (0x0007aba2) main_radioblah_info_pane_ParamLimits

0xdd99,	// (0x0007aba2) main_radioblah_info_pane

0xddad,	// (0x0007abb6) main_radioblah_pane_t1_ParamLimits

0xddad,	// (0x0007abb6) main_radioblah_pane_t1

0xddc9,	// (0x0007abd2) main_radioblah_pane_t2_ParamLimits

0xddc9,	// (0x0007abd2) main_radioblah_pane_t2

0x0003,

0xfc07,	// (0x0007ca10) main_radioblah_pane_t_ParamLimits

0xfc07,	// (0x0007ca10) main_radioblah_pane_t

0xa0a3,	// (0x00076eac) main_radioblah_rocker_ctrl_pane_ParamLimits

0xa0a3,	// (0x00076eac) main_radioblah_rocker_ctrl_pane

0xde11,	// (0x0007ac1a) main_radioblah_info_pane_t1_ParamLimits

0xde11,	// (0x0007ac1a) main_radioblah_info_pane_t1

0xa0fb,	// (0x00076f04) main_radioblah_info_pane_t2_ParamLimits

0xa0fb,	// (0x00076f04) main_radioblah_info_pane_t2

0x0003,

0xfc10,	// (0x0007ca19) main_radioblah_info_pane_t_ParamLimits

0xfc10,	// (0x0007ca19) main_radioblah_info_pane_t

0xba40,	// (0x00078849) main_radioblah_rocker_ctrl_pane_g1

0xa1ab,	// (0x00076fb4) main_radioblah_rocker_ctrl_pane_g2

0xa1b3,	// (0x00076fbc) main_radioblah_rocker_ctrl_pane_g3

0xa1bb,	// (0x00076fc4) main_radioblah_rocker_ctrl_pane_g4

0xa1c3,	// (0x00076fcc) main_radioblah_rocker_ctrl_pane_g5

0xa1cb,	// (0x00076fd4) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc19,	// (0x0007ca22) main_radioblah_rocker_ctrl_pane_g

0x9926,	// (0x0007672f) main_cset_text2_pane_t1_copy1_ParamLimits

0xee5d,	// (0x0007bc66) cam4_image_uncrop_qvga_pane

0xeeb6,	// (0x0007bcbf) vid4_image_uncrop_qcif_pane

0xf010,	// (0x0007be19) cam6_image_uncrop_qvga_pane_ParamLimits

0xf010,	// (0x0007be19) cam6_image_uncrop_qvga_pane

0xd668,	// (0x0007a471) vid6_image_uncrop_qcif_pane_ParamLimits

0xd668,	// (0x0007a471) vid6_image_uncrop_qcif_pane

0x3069,	// (0x0006fe72) bg_popup_preview_window_pane_cp03

0xd913,	// (0x0007a71c) list_cset_text2_pane

0xd91b,	// (0x0007a724) main_cset6_text2_pane_g1

0xd923,	// (0x0007a72c) main_cset6_text2_pane_t1

0xa1d3,	// (0x00076fdc) list_cset_text2_pane_t1_ParamLimits

0xa1d3,	// (0x00076fdc) list_cset_text2_pane_t1

0x3294,	// (0x0007009d) main_radioblah_pane_ParamLimits

0x9eeb,	// (0x00076cf4) main_mobtv_info_pane_t3_ParamLimits

0x9eeb,	// (0x00076cf4) main_mobtv_info_pane_t3

0xa091,	// (0x00076e9a) main_radioblah_pane_g1

0xa0cb,	// (0x00076ed4) main_radioblah_info_pane_g1

0xa150,	// (0x00076f59) main_radioblah_info_pane_t3_ParamLimits

0xa150,	// (0x00076f59) main_radioblah_info_pane_t3

0x53dd,	// (0x000721e6) highlight_cell_cale_month_pane_ParamLimits

0x53dd,	// (0x000721e6) highlight_cell_cale_month_pane

0x3069,	// (0x0006fe72) main_phob_fisheye_pane

0x738c,	// (0x00074195) scroll_pane_cp0031_ParamLimits

0x738c,	// (0x00074195) scroll_pane_cp0031

0xd776,	// (0x0007a57f) wait_bar_pane_cp08_ParamLimits

0x99ab,	// (0x000767b4) cset_list_set_pane_copy1_ParamLimits

0xde4b,	// (0x0007ac54) highlight_cell_cale_month_pane_g1

0xa1ec,	// (0x00076ff5) highlight_cell_cale_month_pane_t1

0xd3d8,	// (0x0007a1e1) list_gen_pane_cp01

0xcf6e,	// (0x00079d77) scroll_pane_01

0xa1fa,	// (0x00077003) list_single_double_fisheye_pane

0x2bf1,	// (0x0006f9fa) list_double_fisheye_pane_g1_ParamLimits

0x2bf1,	// (0x0006f9fa) list_double_fisheye_pane_g1

0x2bfd,	// (0x0006fa06) list_double_fisheye_pane_g2_ParamLimits

0x2bfd,	// (0x0006fa06) list_double_fisheye_pane_g2

0xa203,	// (0x0007700c) list_double_fisheye_pane_g3_ParamLimits

0xa203,	// (0x0007700c) list_double_fisheye_pane_g3

0x0004,

0xfc26,	// (0x0007ca2f) list_double_fisheye_pane_g_ParamLimits

0xfc26,	// (0x0007ca2f) list_double_fisheye_pane_g

0x2c2e,	// (0x0006fa37) list_double_fisheye_pane_t1_ParamLimits

0x2c2e,	// (0x0006fa37) list_double_fisheye_pane_t1

0x2c49,	// (0x0006fa52) list_double_fisheye_pane_t2_ParamLimits

0x2c49,	// (0x0006fa52) list_double_fisheye_pane_t2

0x0001,

0xfc31,	// (0x0007ca3a) list_double_fisheye_pane_t_ParamLimits

0xfc31,	// (0x0007ca3a) list_double_fisheye_pane_t

0x3069,	// (0x0006fe72) main_call5_pane

0x9fe2,	// (0x00076deb) sc_swipe_pane_ParamLimits

0x9fe2,	// (0x00076deb) sc_swipe_pane

0xa222,	// (0x0007702b) call5_image_pane_ParamLimits

0xa222,	// (0x0007702b) call5_image_pane

0xa23f,	// (0x00077048) call5_swipe_1_pane_ParamLimits

0xa23f,	// (0x00077048) call5_swipe_1_pane

0xa252,	// (0x0007705b) call5_swipe_2_pane_ParamLimits

0xa252,	// (0x0007705b) call5_swipe_2_pane

0xa27d,	// (0x00077086) popup_call5_audio_first_window_ParamLimits

0xa27d,	// (0x00077086) popup_call5_audio_first_window

0xb74e,	// (0x00078557) call5_swipe_1_pane_g1_ParamLimits

0xb74e,	// (0x00078557) call5_swipe_1_pane_g1

0xde53,	// (0x0007ac5c) call5_swipe_1_pane_g2_ParamLimits

0xde53,	// (0x0007ac5c) call5_swipe_1_pane_g2

0x0001,

0xfc36,	// (0x0007ca3f) call5_swipe_1_pane_g_ParamLimits

0xfc36,	// (0x0007ca3f) call5_swipe_1_pane_g

0xde5f,	// (0x0007ac68) call5_swipe_1_pane_t1_ParamLimits

0xde5f,	// (0x0007ac68) call5_swipe_1_pane_t1

0xb74e,	// (0x00078557) call5_swipe_2_pane_g1_ParamLimits

0xb74e,	// (0x00078557) call5_swipe_2_pane_g1

0xde74,	// (0x0007ac7d) call5_swipe_2_pane_g2_ParamLimits

0xde74,	// (0x0007ac7d) call5_swipe_2_pane_g2

0x0001,

0xfc3b,	// (0x0007ca44) call5_swipe_2_pane_g_ParamLimits

0xfc3b,	// (0x0007ca44) call5_swipe_2_pane_g

0xde80,	// (0x0007ac89) call5_swipe_2_pane_t1_ParamLimits

0xde80,	// (0x0007ac89) call5_swipe_2_pane_t1

0xde95,	// (0x0007ac9e) sc_swipe_pane_g1_ParamLimits

0xde95,	// (0x0007ac9e) sc_swipe_pane_g1

0xdea2,	// (0x0007acab) sc_swipe_pane_g2_ParamLimits

0xdea2,	// (0x0007acab) sc_swipe_pane_g2

0x0001,

0xfc40,	// (0x0007ca49) sc_swipe_pane_g_ParamLimits

0xfc40,	// (0x0007ca49) sc_swipe_pane_g

0xdeae,	// (0x0007acb7) sc_swipe_pane_t1_ParamLimits

0xdeae,	// (0x0007acb7) sc_swipe_pane_t1

0x3069,	// (0x0006fe72) main_cmail_launcher_pane

0xa28e,	// (0x00077097) aid_size_cell_cmail_l_ParamLimits

0xa28e,	// (0x00077097) aid_size_cell_cmail_l

0xa29c,	// (0x000770a5) grid_cmail_l_pane_ParamLimits

0xa29c,	// (0x000770a5) grid_cmail_l_pane

0xa2b6,	// (0x000770bf) cell_cmail_l_pane_ParamLimits

0xa2b6,	// (0x000770bf) cell_cmail_l_pane

0xdec3,	// (0x0007accc) cell_cmail_l_pane_g1_ParamLimits

0xdec3,	// (0x0007accc) cell_cmail_l_pane_g1

0xdecf,	// (0x0007acd8) cell_cmail_l_pane_t1_ParamLimits

0xdecf,	// (0x0007acd8) cell_cmail_l_pane_t1

0xdee5,	// (0x0007acee) cell_cmail_l_pane_t2_ParamLimits

0xdee5,	// (0x0007acee) cell_cmail_l_pane_t2

0x0001,

0xfc45,	// (0x0007ca4e) cell_cmail_l_pane_t_ParamLimits

0xfc45,	// (0x0007ca4e) cell_cmail_l_pane_t

0x3294,	// (0x0007009d) grid_highlight_pane_cp018_ParamLimits

0x3294,	// (0x0007009d) grid_highlight_pane_cp018

0x3139,	// (0x0006ff42) main2_pane_ParamLimits

0x3139,	// (0x0006ff42) main2_pane

0xb895,	// (0x0007869e) popup_sp_fs_action_menu_bg_pane_g1

0xb89d,	// (0x000786a6) popup_sp_fs_action_menu_bg_pane_g2

0xb8a5,	// (0x000786ae) popup_sp_fs_action_menu_bg_pane_g3

0xb8ad,	// (0x000786b6) popup_sp_fs_action_menu_bg_pane_g4

0xb8b5,	// (0x000786be) popup_sp_fs_action_menu_bg_pane_g5

0xb8bd,	// (0x000786c6) popup_sp_fs_action_menu_bg_pane_g6

0xb8c5,	// (0x000786ce) popup_sp_fs_action_menu_bg_pane_g7

0xb8cd,	// (0x000786d6) popup_sp_fs_action_menu_bg_pane_g8

0xb8d5,	// (0x000786de) popup_sp_fs_action_menu_bg_pane_g9

0xb8dd,	// (0x000786e6) popup_sp_fs_action_menu_bg_pane_g10

0xb8dd,	// (0x000786e6) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf145,	// (0x0007bf4e) popup_sp_fs_action_menu_bg_pane_g

0xb74e,	// (0x00078557) list_medium_line_x2_t3_g3_g1_ParamLimits

0xb74e,	// (0x00078557) list_medium_line_x2_t3_g3_g1

0xb74e,	// (0x00078557) list_medium_line_x2_t3_g3_g2_ParamLimits

0xb74e,	// (0x00078557) list_medium_line_x2_t3_g3_g2

0xb74e,	// (0x00078557) list_medium_line_x2_t3_g3_g3_ParamLimits

0xb74e,	// (0x00078557) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1f3,	// (0x0007bffc) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1f3,	// (0x0007bffc) list_medium_line_x2_t3_g3_g

0xba12,	// (0x0007881b) list_medium_line_x2_t3_g3_t1_ParamLimits

0xba12,	// (0x0007881b) list_medium_line_x2_t3_g3_t1

0xba12,	// (0x0007881b) list_medium_line_x2_t3_g3_t2_ParamLimits

0xba12,	// (0x0007881b) list_medium_line_x2_t3_g3_t2

0xba12,	// (0x0007881b) list_medium_line_x2_t3_g3_t3_ParamLimits

0xba12,	// (0x0007881b) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1fa,	// (0x0007c003) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1fa,	// (0x0007c003) list_medium_line_x2_t3_g3_t

0xb74e,	// (0x00078557) list_medium_line_x2_t3_g2_g1_ParamLimits

0xb74e,	// (0x00078557) list_medium_line_x2_t3_g2_g1

0xb74e,	// (0x00078557) list_medium_line_x2_t3_g2_g2_ParamLimits

0xb74e,	// (0x00078557) list_medium_line_x2_t3_g2_g2

0x0001,

0xf201,	// (0x0007c00a) list_medium_line_x2_t3_g2_g_ParamLimits

0xf201,	// (0x0007c00a) list_medium_line_x2_t3_g2_g

0xba12,	// (0x0007881b) list_medium_line_x2_t3_g2_t1_ParamLimits

0xba12,	// (0x0007881b) list_medium_line_x2_t3_g2_t1

0xba12,	// (0x0007881b) list_medium_line_x2_t3_g2_t2_ParamLimits

0xba12,	// (0x0007881b) list_medium_line_x2_t3_g2_t2

0xba12,	// (0x0007881b) list_medium_line_x2_t3_g2_t3_ParamLimits

0xba12,	// (0x0007881b) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1fa,	// (0x0007c003) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1fa,	// (0x0007c003) list_medium_line_x2_t3_g2_t

0xb74e,	// (0x00078557) list_medium_line_x2_t4_g4_g1_ParamLimits

0xb74e,	// (0x00078557) list_medium_line_x2_t4_g4_g1

0xb74e,	// (0x00078557) list_medium_line_x2_t4_g4_g2_ParamLimits

0xb74e,	// (0x00078557) list_medium_line_x2_t4_g4_g2

0xb74e,	// (0x00078557) list_medium_line_x2_t4_g4_g3_ParamLimits

0xb74e,	// (0x00078557) list_medium_line_x2_t4_g4_g3

0xb74e,	// (0x00078557) list_medium_line_x2_t4_g4_g4_ParamLimits

0xb74e,	// (0x00078557) list_medium_line_x2_t4_g4_g4

0x0003,

0xf206,	// (0x0007c00f) list_medium_line_x2_t4_g4_g_ParamLimits

0xf206,	// (0x0007c00f) list_medium_line_x2_t4_g4_g

0xba12,	// (0x0007881b) list_medium_line_x2_t4_g4_t1_ParamLimits

0xba12,	// (0x0007881b) list_medium_line_x2_t4_g4_t1

0xba12,	// (0x0007881b) list_medium_line_x2_t4_g4_t2_ParamLimits

0xba12,	// (0x0007881b) list_medium_line_x2_t4_g4_t2

0xba12,	// (0x0007881b) list_medium_line_x2_t4_g4_t3_ParamLimits

0xba12,	// (0x0007881b) list_medium_line_x2_t4_g4_t3

0xba12,	// (0x0007881b) list_medium_line_x2_t4_g4_t4_ParamLimits

0xba12,	// (0x0007881b) list_medium_line_x2_t4_g4_t4

0x0003,

0xf20f,	// (0x0007c018) list_medium_line_x2_t4_g4_t_ParamLimits

0xf20f,	// (0x0007c018) list_medium_line_x2_t4_g4_t

0xb74e,	// (0x00078557) list_medium_line_x2_t2_g4_g1_ParamLimits

0xb74e,	// (0x00078557) list_medium_line_x2_t2_g4_g1

0xb74e,	// (0x00078557) list_medium_line_x2_t2_g4_g2_ParamLimits

0xb74e,	// (0x00078557) list_medium_line_x2_t2_g4_g2

0xb74e,	// (0x00078557) list_medium_line_x2_t2_g4_g3_ParamLimits

0xb74e,	// (0x00078557) list_medium_line_x2_t2_g4_g3

0xb74e,	// (0x00078557) list_medium_line_x2_t2_g4_g4_ParamLimits

0xb74e,	// (0x00078557) list_medium_line_x2_t2_g4_g4

0x0003,

0xf206,	// (0x0007c00f) list_medium_line_x2_t2_g4_g_ParamLimits

0xf206,	// (0x0007c00f) list_medium_line_x2_t2_g4_g

0xba12,	// (0x0007881b) list_medium_line_x2_t2_g4_t1_ParamLimits

0xba12,	// (0x0007881b) list_medium_line_x2_t2_g4_t1

0xba12,	// (0x0007881b) list_medium_line_x2_t2_g4_t2_ParamLimits

0xba12,	// (0x0007881b) list_medium_line_x2_t2_g4_t2

0x0001,

0xf1d6,	// (0x0007bfdf) list_medium_line_x2_t2_g4_t_ParamLimits

0xf1d6,	// (0x0007bfdf) list_medium_line_x2_t2_g4_t

0xb74e,	// (0x00078557) list_medium_line_x2_t2_g3_g1_ParamLimits

0xb74e,	// (0x00078557) list_medium_line_x2_t2_g3_g1

0xb74e,	// (0x00078557) list_medium_line_x2_t2_g3_g2_ParamLimits

0xb74e,	// (0x00078557) list_medium_line_x2_t2_g3_g2

0xb74e,	// (0x00078557) list_medium_line_x2_t2_g3_g3_ParamLimits

0xb74e,	// (0x00078557) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1f3,	// (0x0007bffc) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1f3,	// (0x0007bffc) list_medium_line_x2_t2_g3_g

0xba12,	// (0x0007881b) list_medium_line_x2_t2_g3_t1_ParamLimits

0xba12,	// (0x0007881b) list_medium_line_x2_t2_g3_t1

0xba12,	// (0x0007881b) list_medium_line_x2_t2_g3_t2_ParamLimits

0xba12,	// (0x0007881b) list_medium_line_x2_t2_g3_t2

0x0001,

0xf1d6,	// (0x0007bfdf) list_medium_line_x2_t2_g3_t_ParamLimits

0xf1d6,	// (0x0007bfdf) list_medium_line_x2_t2_g3_t

0x552f,	// (0x00072338) main_sp_fs_list_pane_ParamLimits

0x552f,	// (0x00072338) main_sp_fs_list_pane

0x19f5,	// (0x0006e7fe) sp_fs_scroll_pane_ParamLimits

0x19f5,	// (0x0006e7fe) sp_fs_scroll_pane

0xbf9d,	// (0x00078da6) list_medium_line_x2_t3_t1

0xbf9d,	// (0x00078da6) list_medium_line_x2_t3_t2

0xbf9d,	// (0x00078da6) list_medium_line_x2_t3_t3

0x0002,

0xf2bc,	// (0x0007c0c5) list_medium_line_x2_t3_t

0xbf9d,	// (0x00078da6) list_medium_line_x3_t4_t1

0xbf9d,	// (0x00078da6) list_medium_line_x3_t4_t2

0xbf9d,	// (0x00078da6) list_medium_line_x3_t4_t3

0xbf9d,	// (0x00078da6) list_medium_line_x3_t4_t4

0x0003,

0xf2c3,	// (0x0007c0cc) list_medium_line_x3_t4_t

0xbf9d,	// (0x00078da6) list_medium_line_x4_t5_t1

0xbf9d,	// (0x00078da6) list_medium_line_x4_t5_t2

0xbf9d,	// (0x00078da6) list_medium_line_x4_t5_t3

0xbf9d,	// (0x00078da6) list_medium_line_x4_t5_t4

0xbf9d,	// (0x00078da6) list_medium_line_x4_t5_t5

0x0004,

0xf2cc,	// (0x0007c0d5) list_medium_line_x4_t5_t

0xb74e,	// (0x00078557) list_medium_line_t4_g4_g1_ParamLimits

0xb74e,	// (0x00078557) list_medium_line_t4_g4_g1

0xb74e,	// (0x00078557) list_medium_line_t4_g4_g2_ParamLimits

0xb74e,	// (0x00078557) list_medium_line_t4_g4_g2

0xb74e,	// (0x00078557) list_medium_line_t4_g4_g3_ParamLimits

0xb74e,	// (0x00078557) list_medium_line_t4_g4_g3

0xb74e,	// (0x00078557) list_medium_line_t4_g4_g4_ParamLimits

0xb74e,	// (0x00078557) list_medium_line_t4_g4_g4

0x0003,

0xf206,	// (0x0007c00f) list_medium_line_t4_g4_g_ParamLimits

0xf206,	// (0x0007c00f) list_medium_line_t4_g4_g

0xba12,	// (0x0007881b) list_medium_line_t4_g4_t1_ParamLimits

0xba12,	// (0x0007881b) list_medium_line_t4_g4_t1

0xba12,	// (0x0007881b) list_medium_line_t4_g4_t2_ParamLimits

0xba12,	// (0x0007881b) list_medium_line_t4_g4_t2

0xba12,	// (0x0007881b) list_medium_line_t4_g4_t3_ParamLimits

0xba12,	// (0x0007881b) list_medium_line_t4_g4_t3

0xba12,	// (0x0007881b) list_medium_line_t4_g4_t4_ParamLimits

0xba12,	// (0x0007881b) list_medium_line_t4_g4_t4

0x0003,

0xf20f,	// (0x0007c018) list_medium_line_t4_g4_t_ParamLimits

0xf20f,	// (0x0007c018) list_medium_line_t4_g4_t

0x55ca,	// (0x000723d3) chi_dic_find_pane_g1

0x63be,	// (0x000731c7) main_tport_pane

0xbf9d,	// (0x00078da6) list_medium_line_plain_t1

0xb74e,	// (0x00078557) list_medium_line_t2_g2_g1_ParamLimits

0xb74e,	// (0x00078557) list_medium_line_t2_g2_g1

0xb74e,	// (0x00078557) list_medium_line_t2_g2_g2_ParamLimits

0xb74e,	// (0x00078557) list_medium_line_t2_g2_g2

0x0001,

0xf201,	// (0x0007c00a) list_medium_line_t2_g2_g_ParamLimits

0xf201,	// (0x0007c00a) list_medium_line_t2_g2_g

0xba12,	// (0x0007881b) list_medium_line_t2_g2_t1_ParamLimits

0xba12,	// (0x0007881b) list_medium_line_t2_g2_t1

0xba12,	// (0x0007881b) list_medium_line_t2_g2_t2_ParamLimits

0xba12,	// (0x0007881b) list_medium_line_t2_g2_t2

0x0001,

0xf1d6,	// (0x0007bfdf) list_medium_line_t2_g2_t_ParamLimits

0xf1d6,	// (0x0007bfdf) list_medium_line_t2_g2_t

0xd3e1,	// (0x0007a1ea) aid_sp_fs_list_icon_a_sm

0xf008,	// (0x0007be11) aid_sp_fs_list_icon_d

0xd3e9,	// (0x0007a1f2) aid_sp_fs_text_primary

0xd3f2,	// (0x0007a1fb) aid_sp_fs_text_secondary

0x3069,	// (0x0006fe72) list_medium_line

0x3069,	// (0x0006fe72) list_medium_line_g2

0x3069,	// (0x0006fe72) list_medium_line_g3

0x3069,	// (0x0006fe72) list_medium_line_plain

0x3069,	// (0x0006fe72) list_medium_line_plain_t2

0x3069,	// (0x0006fe72) list_medium_line_plain_t3

0x3069,	// (0x0006fe72) list_medium_line_right_icon

0x3069,	// (0x0006fe72) list_medium_line_right_iconx2

0x3069,	// (0x0006fe72) list_medium_line_t2

0x3069,	// (0x0006fe72) list_medium_line_t2_g2

0x3069,	// (0x0006fe72) list_medium_line_t2_g3

0x3069,	// (0x0006fe72) list_medium_line_t2_right_icon

0x3069,	// (0x0006fe72) list_medium_line_t2_right_iconx2

0x3069,	// (0x0006fe72) list_medium_line_t3

0x3069,	// (0x0006fe72) list_medium_line_t3_g2

0x3069,	// (0x0006fe72) list_medium_line_t3_g3

0x3069,	// (0x0006fe72) list_medium_line_t3_right_iconx2

0x3069,	// (0x0006fe72) list_medium_line_t4_g4

0x3069,	// (0x0006fe72) list_medium_line_x2

0x3069,	// (0x0006fe72) list_medium_line_x2_t2_g2

0x3069,	// (0x0006fe72) list_medium_line_x2_t2_g3

0x3069,	// (0x0006fe72) list_medium_line_x2_t2_g4

0x3069,	// (0x0006fe72) list_medium_line_x2_t3

0x3069,	// (0x0006fe72) list_medium_line_x2_t3_g2

0x3069,	// (0x0006fe72) list_medium_line_x2_t3_g3

0x3069,	// (0x0006fe72) list_medium_line_x2_t3_g4

0x3069,	// (0x0006fe72) list_medium_line_x2_t4_g2

0x3069,	// (0x0006fe72) list_medium_line_x2_t4_g4

0x3069,	// (0x0006fe72) list_medium_line_x3

0x3069,	// (0x0006fe72) list_medium_line_x3_t4

0x3069,	// (0x0006fe72) list_medium_line_x3_t4_g4

0x3069,	// (0x0006fe72) list_medium_line_x4_t4

0x3069,	// (0x0006fe72) list_medium_line_x4_t4_g7

0x3069,	// (0x0006fe72) list_medium_line_x4_t5

0x2b9c,	// (0x0006f9a5) list_single_fs_dyc_pane_ParamLimits

0x2b9c,	// (0x0006f9a5) list_single_fs_dyc_pane

0xb74e,	// (0x00078557) list_medium_line_x4_t4_g7_g1_ParamLimits

0xb74e,	// (0x00078557) list_medium_line_x4_t4_g7_g1

0xb74e,	// (0x00078557) list_medium_line_x4_t4_g7_g2_ParamLimits

0xb74e,	// (0x00078557) list_medium_line_x4_t4_g7_g2

0xb74e,	// (0x00078557) list_medium_line_x4_t4_g7_g3_ParamLimits

0xb74e,	// (0x00078557) list_medium_line_x4_t4_g7_g3

0xb74e,	// (0x00078557) list_medium_line_x4_t4_g7_g4_ParamLimits

0xb74e,	// (0x00078557) list_medium_line_x4_t4_g7_g4

0xb74e,	// (0x00078557) list_medium_line_x4_t4_g7_g5_ParamLimits

0xb74e,	// (0x00078557) list_medium_line_x4_t4_g7_g5

0xb74e,	// (0x00078557) list_medium_line_x4_t4_g7_g6_ParamLimits

0xb74e,	// (0x00078557) list_medium_line_x4_t4_g7_g6

0xb75c,	// (0x00078565) list_medium_line_x4_t4_g7_g7_ParamLimits

0xb75c,	// (0x00078565) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb4d,	// (0x0007c956) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb4d,	// (0x0007c956) list_medium_line_x4_t4_g7_g

0xba12,	// (0x0007881b) list_medium_line_x4_t4_g7_t1_ParamLimits

0xba12,	// (0x0007881b) list_medium_line_x4_t4_g7_t1

0xba12,	// (0x0007881b) list_medium_line_x4_t4_g7_t2_ParamLimits

0xba12,	// (0x0007881b) list_medium_line_x4_t4_g7_t2

0xba12,	// (0x0007881b) list_medium_line_x4_t4_g7_t3_ParamLimits

0xba12,	// (0x0007881b) list_medium_line_x4_t4_g7_t3

0xc5c8,	// (0x000793d1) list_medium_line_x4_t4_g7_t4_ParamLimits

0xc5c8,	// (0x000793d1) list_medium_line_x4_t4_g7_t4

0xc5c8,	// (0x000793d1) list_medium_line_x4_t4_g7_t5_ParamLimits

0xc5c8,	// (0x000793d1) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb5c,	// (0x0007c965) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb5c,	// (0x0007c965) list_medium_line_x4_t4_g7_t

0x2bd4,	// (0x0006f9dd) list_single_dyc_row_pane_ParamLimits

0x2bd4,	// (0x0006f9dd) list_single_dyc_row_pane

0xa20f,	// (0x00077018) call5_gesture_pane_ParamLimits

0xa20f,	// (0x00077018) call5_gesture_pane

0xa265,	// (0x0007706e) call5_windows_pane_ParamLimits

0xa265,	// (0x0007706e) call5_windows_pane

0xa2d0,	// (0x000770d9) call5_swipe_1_pane_cp_ParamLimits

0xa2d0,	// (0x000770d9) call5_swipe_1_pane_cp

0xa2dc,	// (0x000770e5) call5_swipe_2_pane_cp_ParamLimits

0xa2dc,	// (0x000770e5) call5_swipe_2_pane_cp

0xba00,	// (0x00078809) call5_image_pane_cp

0xa2e8,	// (0x000770f1) popup_call5_audio_first_window_cp_ParamLimits

0xa2e8,	// (0x000770f1) popup_call5_audio_first_window_cp

0xde95,	// (0x0007ac9e) call5_swipe_1_pane_g1_cp_ParamLimits

0xde95,	// (0x0007ac9e) call5_swipe_1_pane_g1_cp

0xdf02,	// (0x0007ad0b) call5_swipe_1_pane_g2_cp

0xdeae,	// (0x0007acb7) call5_swipe_1_pane_t1_cp_ParamLimits

0xdeae,	// (0x0007acb7) call5_swipe_1_pane_t1_cp

0xde95,	// (0x0007ac9e) call5_swipe_2_pane_g1_cp_ParamLimits

0xde95,	// (0x0007ac9e) call5_swipe_2_pane_g1_cp

0xdf0a,	// (0x0007ad13) call5_swipe_2_pane_g2_cp

0xdf12,	// (0x0007ad1b) call5_swipe_2_pane_t1_cp_ParamLimits

0xdf12,	// (0x0007ad1b) call5_swipe_2_pane_t1_cp

0x3294,	// (0x0007009d) main_sp_fs_email_pane

0xdf27,	// (0x0007ad30) main_sp_fs_listscroll_pane_te

0xf01e,	// (0x0007be27) popup_sp_fs_action_menu_pane_ParamLimits

0xf01e,	// (0x0007be27) popup_sp_fs_action_menu_pane

0xba40,	// (0x00078849) bg_sp_fs_ctrlbar_pane_g1

0xdf30,	// (0x0007ad39) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xdf39,	// (0x0007ad42) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xdf42,	// (0x0007ad4b) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xba40,	// (0x00078849) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc4a,	// (0x0007ca53) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x0808,	// (0x0006d611) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x0808,	// (0x0006d611) bg_sp_fs_ctrlbar_ddmenu_pane

0xdf4b,	// (0x0007ad54) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xdf4b,	// (0x0007ad54) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xdf57,	// (0x0007ad60) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xdf57,	// (0x0007ad60) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc53,	// (0x0007ca5c) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc53,	// (0x0007ca5c) main_sp_fs_ctrlbar_ddmenu_pane_g

0xdf63,	// (0x0007ad6c) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xdf63,	// (0x0007ad6c) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xba40,	// (0x00078849) list_medium_line_t2_right_icon_g1

0xbf9d,	// (0x00078da6) list_medium_line_t2_right_icon_t1

0xbf9d,	// (0x00078da6) list_medium_line_t2_right_icon_t2

0x0001,

0xfc58,	// (0x0007ca61) list_medium_line_t2_right_icon_t

0x140a,	// (0x0006e213) bg_sp_fs_ctrlbar_pane_ParamLimits

0x140a,	// (0x0006e213) bg_sp_fs_ctrlbar_pane

0xa33e,	// (0x00077147) main_sp_fs_ctrlbar_button_pane_cp01

0xa348,	// (0x00077151) main_sp_fs_ctrlbar_ddmenu_pane

0xdfb5,	// (0x0007adbe) main_sp_fs_ctrlbar_pane_g1

0xdfc1,	// (0x0007adca) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc5d,	// (0x0007ca66) main_sp_fs_ctrlbar_pane_g

0xa386,	// (0x0007718f) main_sp_fs_ctrlbar_pane_t1

0xa3c5,	// (0x000771ce) main_sp_fs_ctrlbar_pane

0xa3e9,	// (0x000771f2) main_sp_fs_listscroll_pane_te_cp01

0x2c6b,	// (0x0006fa74) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x2c6b,	// (0x0006fa74) popup_sp_fs_action_menu_pane_cp01

0x3294,	// (0x0007009d) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x3294,	// (0x0007009d) bg_sp_fs_highlight_list_pane_cp01

0xdfe8,	// (0x0007adf1) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xdfe8,	// (0x0007adf1) sp_fs_action_menu_list_gene_pane_g1

0xdff7,	// (0x0007ae00) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xdff7,	// (0x0007ae00) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc6b,	// (0x0007ca74) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc6b,	// (0x0007ca74) sp_fs_action_menu_list_gene_pane_g

0xe004,	// (0x0007ae0d) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe004,	// (0x0007ae0d) sp_fs_action_menu_list_gene_pane_t1

0xe01c,	// (0x0007ae25) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe01c,	// (0x0007ae25) sp_fs_action_menu_list_gene_pane

0xe03d,	// (0x0007ae46) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe03d,	// (0x0007ae46) popup_sp_fs_action_menu_bg_pane

0xe04b,	// (0x0007ae54) sp_fs_action_menu_list_pane_ParamLimits

0xe04b,	// (0x0007ae54) sp_fs_action_menu_list_pane

0xe06d,	// (0x0007ae76) sp_fs_scroll_pane_cp01_ParamLimits

0xe06d,	// (0x0007ae76) sp_fs_scroll_pane_cp01

0xbf9d,	// (0x00078da6) list_medium_line_plain_t2_t1

0xbf9d,	// (0x00078da6) list_medium_line_plain_t2_t2

0x0001,

0xfc58,	// (0x0007ca61) list_medium_line_plain_t2_t

0xbf9d,	// (0x00078da6) list_medium_line_plain_t3_t1

0xbf9d,	// (0x00078da6) list_medium_line_plain_t3_t2

0xbf9d,	// (0x00078da6) list_medium_line_plain_t3_t3

0x0002,

0xf2bc,	// (0x0007c0c5) list_medium_line_plain_t3_t

0xb74e,	// (0x00078557) list_medium_line_x2_t2_g2_g1_ParamLimits

0xb74e,	// (0x00078557) list_medium_line_x2_t2_g2_g1

0xb74e,	// (0x00078557) list_medium_line_x2_t2_g2_g2_ParamLimits

0xb74e,	// (0x00078557) list_medium_line_x2_t2_g2_g2

0x0001,

0xf201,	// (0x0007c00a) list_medium_line_x2_t2_g2_g_ParamLimits

0xf201,	// (0x0007c00a) list_medium_line_x2_t2_g2_g

0xba12,	// (0x0007881b) list_medium_line_x2_t2_g2_t1_ParamLimits

0xba12,	// (0x0007881b) list_medium_line_x2_t2_g2_t1

0xba12,	// (0x0007881b) list_medium_line_x2_t2_g2_t2_ParamLimits

0xba12,	// (0x0007881b) list_medium_line_x2_t2_g2_t2

0x0001,

0xf1d6,	// (0x0007bfdf) list_medium_line_x2_t2_g2_t_ParamLimits

0xf1d6,	// (0x0007bfdf) list_medium_line_x2_t2_g2_t

0xb74e,	// (0x00078557) list_medium_line_x2_t4_g2_g1_ParamLimits

0xb74e,	// (0x00078557) list_medium_line_x2_t4_g2_g1

0xb74e,	// (0x00078557) list_medium_line_x2_t4_g2_g2_ParamLimits

0xb74e,	// (0x00078557) list_medium_line_x2_t4_g2_g2

0x0001,

0xf201,	// (0x0007c00a) list_medium_line_x2_t4_g2_g_ParamLimits

0xf201,	// (0x0007c00a) list_medium_line_x2_t4_g2_g

0xba12,	// (0x0007881b) list_medium_line_x2_t4_g2_t1_ParamLimits

0xba12,	// (0x0007881b) list_medium_line_x2_t4_g2_t1

0xba12,	// (0x0007881b) list_medium_line_x2_t4_g2_t2_ParamLimits

0xba12,	// (0x0007881b) list_medium_line_x2_t4_g2_t2

0xba12,	// (0x0007881b) list_medium_line_x2_t4_g2_t3_ParamLimits

0xba12,	// (0x0007881b) list_medium_line_x2_t4_g2_t3

0xba12,	// (0x0007881b) list_medium_line_x2_t4_g2_t4_ParamLimits

0xba12,	// (0x0007881b) list_medium_line_x2_t4_g2_t4

0x0003,

0xf20f,	// (0x0007c018) list_medium_line_x2_t4_g2_t_ParamLimits

0xf20f,	// (0x0007c018) list_medium_line_x2_t4_g2_t

0xba40,	// (0x00078849) list_medium_line_t3_right_iconx2_g1

0xba40,	// (0x00078849) list_medium_line_t3_right_iconx2_g2

0xba40,	// (0x00078849) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf3dd,	// (0x0007c1e6) list_medium_line_t3_right_iconx2_g

0xbf9d,	// (0x00078da6) list_medium_line_t3_right_iconx2_t1

0xbf9d,	// (0x00078da6) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc58,	// (0x0007ca61) list_medium_line_t3_right_iconx2_t

0xb74e,	// (0x00078557) list_medium_line_x3_t4_g4_g1_ParamLimits

0xb74e,	// (0x00078557) list_medium_line_x3_t4_g4_g1

0xb74e,	// (0x00078557) list_medium_line_x3_t4_g4_g2_ParamLimits

0xb74e,	// (0x00078557) list_medium_line_x3_t4_g4_g2

0xb74e,	// (0x00078557) list_medium_line_x3_t4_g4_g3_ParamLimits

0xb74e,	// (0x00078557) list_medium_line_x3_t4_g4_g3

0xb74e,	// (0x00078557) list_medium_line_x3_t4_g4_g4_ParamLimits

0xb74e,	// (0x00078557) list_medium_line_x3_t4_g4_g4

0x0003,

0xf206,	// (0x0007c00f) list_medium_line_x3_t4_g4_g_ParamLimits

0xf206,	// (0x0007c00f) list_medium_line_x3_t4_g4_g

0xba12,	// (0x0007881b) list_medium_line_x3_t4_g4_t1_ParamLimits

0xba12,	// (0x0007881b) list_medium_line_x3_t4_g4_t1

0xba12,	// (0x0007881b) list_medium_line_x3_t4_g4_t2_ParamLimits

0xba12,	// (0x0007881b) list_medium_line_x3_t4_g4_t2

0xba12,	// (0x0007881b) list_medium_line_x3_t4_g4_t3_ParamLimits

0xba12,	// (0x0007881b) list_medium_line_x3_t4_g4_t3

0xba12,	// (0x0007881b) list_medium_line_x3_t4_g4_t4_ParamLimits

0xba12,	// (0x0007881b) list_medium_line_x3_t4_g4_t4

0x0003,

0xf20f,	// (0x0007c018) list_medium_line_x3_t4_g4_t_ParamLimits

0xf20f,	// (0x0007c018) list_medium_line_x3_t4_g4_t

0x2c90,	// (0x0006fa99) list_single_dyc_row_text_pane_t1_ParamLimits

0x2c90,	// (0x0006fa99) list_single_dyc_row_text_pane_t1

0x2cd9,	// (0x0006fae2) list_single_dyc_row_text_pane_t2_ParamLimits

0x2cd9,	// (0x0006fae2) list_single_dyc_row_text_pane_t2

0xe093,	// (0x0007ae9c) list_single_dyc_row_text_pane_t3_ParamLimits

0xe093,	// (0x0007ae9c) list_single_dyc_row_text_pane_t3

0x0005,

0xfc70,	// (0x0007ca79) list_single_dyc_row_text_pane_t_ParamLimits

0xfc70,	// (0x0007ca79) list_single_dyc_row_text_pane_t

0xe0b7,	// (0x0007aec0) list_single_dyc_row_pane_g1_ParamLimits

0xe0b7,	// (0x0007aec0) list_single_dyc_row_pane_g1

0xe0c3,	// (0x0007aecc) list_single_dyc_row_pane_g2_ParamLimits

0xe0c3,	// (0x0007aecc) list_single_dyc_row_pane_g2

0xe0cf,	// (0x0007aed8) list_single_dyc_row_pane_g3_ParamLimits

0xe0cf,	// (0x0007aed8) list_single_dyc_row_pane_g3

0xe0db,	// (0x0007aee4) list_single_dyc_row_pane_g4_ParamLimits

0xe0db,	// (0x0007aee4) list_single_dyc_row_pane_g4

0x0003,

0xfc7d,	// (0x0007ca86) list_single_dyc_row_pane_g_ParamLimits

0xfc7d,	// (0x0007ca86) list_single_dyc_row_pane_g

0xe0e7,	// (0x0007aef0) list_single_dyc_row_text_pane_ParamLimits

0xe0e7,	// (0x0007aef0) list_single_dyc_row_text_pane

0x3069,	// (0x0006fe72) bg_sp_fs_scroll_pane

0xe106,	// (0x0007af0f) thumb_sp_fs_scroll_pane

0xb74e,	// (0x00078557) list_medium_line_g1_ParamLimits

0xb74e,	// (0x00078557) list_medium_line_g1

0xba12,	// (0x0007881b) list_medium_line_t1_ParamLimits

0xba12,	// (0x0007881b) list_medium_line_t1

0xb74e,	// (0x00078557) list_medium_line_x2_g1_ParamLimits

0xb74e,	// (0x00078557) list_medium_line_x2_g1

0xb74e,	// (0x00078557) list_medium_line_x2_g2_ParamLimits

0xb74e,	// (0x00078557) list_medium_line_x2_g2

0x0001,

0xf201,	// (0x0007c00a) list_medium_line_x2_g_ParamLimits

0xf201,	// (0x0007c00a) list_medium_line_x2_g

0xba12,	// (0x0007881b) list_medium_line_x2_t1_ParamLimits

0xba12,	// (0x0007881b) list_medium_line_x2_t1

0xb74e,	// (0x00078557) list_medium_line_x3_g1_ParamLimits

0xb74e,	// (0x00078557) list_medium_line_x3_g1

0xe10f,	// (0x0007af18) list_medium_line_x3_g2_ParamLimits

0xe10f,	// (0x0007af18) list_medium_line_x3_g2

0x0001,

0xfc86,	// (0x0007ca8f) list_medium_line_x3_g_ParamLimits

0xfc86,	// (0x0007ca8f) list_medium_line_x3_g

0xe11d,	// (0x0007af26) list_medium_line_x3_t1_ParamLimits

0xe11d,	// (0x0007af26) list_medium_line_x3_t1

0xe131,	// (0x0007af3a) thumb_sp_fs_scroll_pane_g1

0xe13a,	// (0x0007af43) thumb_sp_fs_scroll_pane_g2

0xe143,	// (0x0007af4c) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc8b,	// (0x0007ca94) thumb_sp_fs_scroll_pane_g

0xe131,	// (0x0007af3a) bg_sp_fs_scroll_pane_g1

0xe13a,	// (0x0007af43) bg_sp_fs_scroll_pane_g2

0xe143,	// (0x0007af4c) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc8b,	// (0x0007ca94) bg_sp_fs_scroll_pane_g

0xb74e,	// (0x00078557) list_medium_line_x2_t3_g4_g1_ParamLimits

0xb74e,	// (0x00078557) list_medium_line_x2_t3_g4_g1

0xb74e,	// (0x00078557) list_medium_line_x2_t3_g4_g2_ParamLimits

0xb74e,	// (0x00078557) list_medium_line_x2_t3_g4_g2

0xb74e,	// (0x00078557) list_medium_line_x2_t3_g4_g3_ParamLimits

0xb74e,	// (0x00078557) list_medium_line_x2_t3_g4_g3

0xb74e,	// (0x00078557) list_medium_line_x2_t3_g4_g4_ParamLimits

0xb74e,	// (0x00078557) list_medium_line_x2_t3_g4_g4

0x0003,

0xf206,	// (0x0007c00f) list_medium_line_x2_t3_g4_g_ParamLimits

0xf206,	// (0x0007c00f) list_medium_line_x2_t3_g4_g

0xba12,	// (0x0007881b) list_medium_line_x2_t3_g4_t1_ParamLimits

0xba12,	// (0x0007881b) list_medium_line_x2_t3_g4_t1

0xba12,	// (0x0007881b) list_medium_line_x2_t3_g4_t2_ParamLimits

0xba12,	// (0x0007881b) list_medium_line_x2_t3_g4_t2

0xba12,	// (0x0007881b) list_medium_line_x2_t3_g4_t3_ParamLimits

0xba12,	// (0x0007881b) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1fa,	// (0x0007c003) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1fa,	// (0x0007c003) list_medium_line_x2_t3_g4_t

0xb74e,	// (0x00078557) list_medium_line_g2_g1_ParamLimits

0xb74e,	// (0x00078557) list_medium_line_g2_g1

0xb74e,	// (0x00078557) list_medium_line_g2_g2_ParamLimits

0xb74e,	// (0x00078557) list_medium_line_g2_g2

0x0001,

0xf201,	// (0x0007c00a) list_medium_line_g2_g_ParamLimits

0xf201,	// (0x0007c00a) list_medium_line_g2_g

0xba12,	// (0x0007881b) list_medium_line_g2_t1_ParamLimits

0xba12,	// (0x0007881b) list_medium_line_g2_t1

0xb74e,	// (0x00078557) list_medium_line_t3_g2_g1_ParamLimits

0xb74e,	// (0x00078557) list_medium_line_t3_g2_g1

0xb74e,	// (0x00078557) list_medium_line_t3_g2_g2_ParamLimits

0xb74e,	// (0x00078557) list_medium_line_t3_g2_g2

0x0001,

0xf201,	// (0x0007c00a) list_medium_line_t3_g2_g_ParamLimits

0xf201,	// (0x0007c00a) list_medium_line_t3_g2_g

0xba12,	// (0x0007881b) list_medium_line_t3_g2_t1_ParamLimits

0xba12,	// (0x0007881b) list_medium_line_t3_g2_t1

0xba12,	// (0x0007881b) list_medium_line_t3_g2_t2_ParamLimits

0xba12,	// (0x0007881b) list_medium_line_t3_g2_t2

0xba12,	// (0x0007881b) list_medium_line_t3_g2_t3_ParamLimits

0xba12,	// (0x0007881b) list_medium_line_t3_g2_t3

0x0002,

0xf1fa,	// (0x0007c003) list_medium_line_t3_g2_t_ParamLimits

0xf1fa,	// (0x0007c003) list_medium_line_t3_g2_t

0xba40,	// (0x00078849) list_medium_line_right_icon_g1

0xbf9d,	// (0x00078da6) list_medium_line_right_icon_t1

0xb74e,	// (0x00078557) list_medium_line_t2_g1_ParamLimits

0xb74e,	// (0x00078557) list_medium_line_t2_g1

0xba12,	// (0x0007881b) list_medium_line_t2_t1_ParamLimits

0xba12,	// (0x0007881b) list_medium_line_t2_t1

0xba12,	// (0x0007881b) list_medium_line_t2_t2_ParamLimits

0xba12,	// (0x0007881b) list_medium_line_t2_t2

0x0001,

0xf1d6,	// (0x0007bfdf) list_medium_line_t2_t_ParamLimits

0xf1d6,	// (0x0007bfdf) list_medium_line_t2_t

0xb74e,	// (0x00078557) list_medium_line_t3_g1_ParamLimits

0xb74e,	// (0x00078557) list_medium_line_t3_g1

0xba12,	// (0x0007881b) list_medium_line_t3_t1_ParamLimits

0xba12,	// (0x0007881b) list_medium_line_t3_t1

0xba12,	// (0x0007881b) list_medium_line_t3_t2_ParamLimits

0xba12,	// (0x0007881b) list_medium_line_t3_t2

0xba12,	// (0x0007881b) list_medium_line_t3_t3_ParamLimits

0xba12,	// (0x0007881b) list_medium_line_t3_t3

0x0002,

0xf1fa,	// (0x0007c003) list_medium_line_t3_t_ParamLimits

0xf1fa,	// (0x0007c003) list_medium_line_t3_t

0xb74e,	// (0x00078557) list_medium_line_g3_g1_ParamLimits

0xb74e,	// (0x00078557) list_medium_line_g3_g1

0xb74e,	// (0x00078557) list_medium_line_g3_g2_ParamLimits

0xb74e,	// (0x00078557) list_medium_line_g3_g2

0xb74e,	// (0x00078557) list_medium_line_g3_g3_ParamLimits

0xb74e,	// (0x00078557) list_medium_line_g3_g3

0x0002,

0xf1f3,	// (0x0007bffc) list_medium_line_g3_g_ParamLimits

0xf1f3,	// (0x0007bffc) list_medium_line_g3_g

0xba12,	// (0x0007881b) list_medium_line_g3_t1_ParamLimits

0xba12,	// (0x0007881b) list_medium_line_g3_t1

0xb74e,	// (0x00078557) list_medium_line_t2_g3_g1_ParamLimits

0xb74e,	// (0x00078557) list_medium_line_t2_g3_g1

0xb74e,	// (0x00078557) list_medium_line_t2_g3_g2_ParamLimits

0xb74e,	// (0x00078557) list_medium_line_t2_g3_g2

0xb74e,	// (0x00078557) list_medium_line_t2_g3_g3_ParamLimits

0xb74e,	// (0x00078557) list_medium_line_t2_g3_g3

0x0002,

0xf1f3,	// (0x0007bffc) list_medium_line_t2_g3_g_ParamLimits

0xf1f3,	// (0x0007bffc) list_medium_line_t2_g3_g

0xba12,	// (0x0007881b) list_medium_line_t2_g3_t1_ParamLimits

0xba12,	// (0x0007881b) list_medium_line_t2_g3_t1

0xba12,	// (0x0007881b) list_medium_line_t2_g3_t2_ParamLimits

0xba12,	// (0x0007881b) list_medium_line_t2_g3_t2

0x0001,

0xf1d6,	// (0x0007bfdf) list_medium_line_t2_g3_t_ParamLimits

0xf1d6,	// (0x0007bfdf) list_medium_line_t2_g3_t

0xb74e,	// (0x00078557) list_medium_line_t3_g3_g1_ParamLimits

0xb74e,	// (0x00078557) list_medium_line_t3_g3_g1

0xb74e,	// (0x00078557) list_medium_line_t3_g3_g2_ParamLimits

0xb74e,	// (0x00078557) list_medium_line_t3_g3_g2

0xb74e,	// (0x00078557) list_medium_line_t3_g3_g3_ParamLimits

0xb74e,	// (0x00078557) list_medium_line_t3_g3_g3

0x0002,

0xf1f3,	// (0x0007bffc) list_medium_line_t3_g3_g_ParamLimits

0xf1f3,	// (0x0007bffc) list_medium_line_t3_g3_g

0xba12,	// (0x0007881b) list_medium_line_t3_g3_t1_ParamLimits

0xba12,	// (0x0007881b) list_medium_line_t3_g3_t1

0xba12,	// (0x0007881b) list_medium_line_t3_g3_t2_ParamLimits

0xba12,	// (0x0007881b) list_medium_line_t3_g3_t2

0xba12,	// (0x0007881b) list_medium_line_t3_g3_t3_ParamLimits

0xba12,	// (0x0007881b) list_medium_line_t3_g3_t3

0x0002,

0xf1fa,	// (0x0007c003) list_medium_line_t3_g3_t_ParamLimits

0xf1fa,	// (0x0007c003) list_medium_line_t3_g3_t

0xba40,	// (0x00078849) list_medium_line_right_iconx2_g1

0xba40,	// (0x00078849) list_medium_line_right_iconx2_g2

0x0001,

0xf3d8,	// (0x0007c1e1) list_medium_line_right_iconx2_g

0xbf9d,	// (0x00078da6) list_medium_line_right_iconx2_t1

0xba40,	// (0x00078849) list_medium_line_t2_right_iconx2_g1

0xba40,	// (0x00078849) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf3d8,	// (0x0007c1e1) list_medium_line_t2_right_iconx2_g

0xbf9d,	// (0x00078da6) list_medium_line_t2_right_iconx2_t1

0xbf9d,	// (0x00078da6) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc58,	// (0x0007ca61) list_medium_line_t2_right_iconx2_t

0xbf9d,	// (0x00078da6) list_medium_line_x4_t4_t1

0xbf9d,	// (0x00078da6) list_medium_line_x4_t4_t2

0xbf9d,	// (0x00078da6) list_medium_line_x4_t4_t3

0xbf9d,	// (0x00078da6) list_medium_line_x4_t4_t4

0x0003,

0xf2c3,	// (0x0007c0cc) list_medium_line_x4_t4_t

0xa44c,	// (0x00077255) tport_appsw_pane_ParamLimits

0xa44c,	// (0x00077255) tport_appsw_pane

0xa464,	// (0x0007726d) tport_contact_pane_ParamLimits

0xa464,	// (0x0007726d) tport_contact_pane

0xa47c,	// (0x00077285) tport_listscroll_pane_ParamLimits

0xa47c,	// (0x00077285) tport_listscroll_pane

0xa496,	// (0x0007729f) cell_tport_appsw_pane_ParamLimits

0xa496,	// (0x0007729f) cell_tport_appsw_pane

0x14e7,	// (0x0006e2f0) tport_appsw_pane_g1_ParamLimits

0x14e7,	// (0x0006e2f0) tport_appsw_pane_g1

0xe14c,	// (0x0007af55) tport_contact_pane_g1

0xd9e7,	// (0x0007a7f0) tport_contact_pane_t1

0xe155,	// (0x0007af5e) tport_contact_pane_t2

0x0001,

0xfc92,	// (0x0007ca9b) tport_contact_pane_t

0xe163,	// (0x0007af6c) list_tport_pane

0xe16c,	// (0x0007af75) scroll_pane_cp_030

0xa4de,	// (0x000772e7) cell_tport_appsw_pane_g1

0xa4ee,	// (0x000772f7) cell_tport_appsw_pane_t1

0xa4fc,	// (0x00077305) grid_highlight_pane_cp019

0xa504,	// (0x0007730d) list_tport_double_graphic_pane_ParamLimits

0xa504,	// (0x0007730d) list_tport_double_graphic_pane

0x3294,	// (0x0007009d) list_highlight_pane_cp023_ParamLimits

0x3294,	// (0x0007009d) list_highlight_pane_cp023

0xa511,	// (0x0007731a) list_tport_double_graphic_pane_g1_ParamLimits

0xa511,	// (0x0007731a) list_tport_double_graphic_pane_g1

0xa51e,	// (0x00077327) list_tport_double_graphic_pane_t1_ParamLimits

0xa51e,	// (0x00077327) list_tport_double_graphic_pane_t1

0xa533,	// (0x0007733c) list_tport_double_graphic_pane_t2_ParamLimits

0xa533,	// (0x0007733c) list_tport_double_graphic_pane_t2

0x0001,

0xfc9e,	// (0x0007caa7) list_tport_double_graphic_pane_t_ParamLimits

0xfc9e,	// (0x0007caa7) list_tport_double_graphic_pane_t

0x3069,	// (0x0006fe72) main_cale_note_pane

0x8782,	// (0x0007558b) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x8782,	// (0x0007558b) cell_vitu2_function_top_wide_pane_cp01

0x9eff,	// (0x00076d08) wait_bar_pane_cp05_ParamLimits

0x3294,	// (0x0007009d) listscroll_cmail_pane

0xe175,	// (0x0007af7e) list_cmail_pane

0xa545,	// (0x0007734e) list_cmail_body_pane

0xa55a,	// (0x00077363) list_single_cmail_header_caption_pane

0xa570,	// (0x00077379) list_single_cmail_header_detail_pane_ParamLimits

0xa570,	// (0x00077379) list_single_cmail_header_detail_pane

0xe185,	// (0x0007af8e) list_single_cmail_header_caption_pane_t1

0x2e0e,	// (0x0006fc17) list_single_cmail_header_detail_pane_g1_ParamLimits

0x2e0e,	// (0x0006fc17) list_single_cmail_header_detail_pane_g1

0xf062,	// (0x0007be6b) list_single_cmail_header_detail_pane_g2_ParamLimits

0xf062,	// (0x0007be6b) list_single_cmail_header_detail_pane_g2

0x0002,

0xfca3,	// (0x0007caac) list_single_cmail_header_detail_pane_g_ParamLimits

0xfca3,	// (0x0007caac) list_single_cmail_header_detail_pane_g

0xe1a9,	// (0x0007afb2) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe1a9,	// (0x0007afb2) list_single_cmail_header_detail_pane_t1

0xe209,	// (0x0007b012) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe209,	// (0x0007b012) list_single_cmail_header_editor_pane_bg

0xdb44,	// (0x0007a94d) list_cmail_body_pane_g1

0xe220,	// (0x0007b029) list_cmail_body_pane_t1

0xce54,	// (0x00079c5d) list_single_cmail_header_editor_pane_bg_g1

0xbc51,	// (0x00078a5a) list_single_cmail_header_editor_pane_bg_g1_copy1

0xce64,	// (0x00079c6d) list_single_cmail_header_editor_pane_bg_g1_copy2

0xce5c,	// (0x00079c65) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd0c1,	// (0x00079eca) list_single_cmail_header_editor_pane_bg_g1_copy4

0xce84,	// (0x00079c8d) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xce74,	// (0x00079c7d) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xce7c,	// (0x00079c85) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xbc31,	// (0x00078a3a) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xa599,	// (0x000773a2) calenote_gesture_pane_ParamLimits

0xa599,	// (0x000773a2) calenote_gesture_pane

0xa5b9,	// (0x000773c2) calenote_window_pane_ParamLimits

0xa5b9,	// (0x000773c2) calenote_window_pane

0xe22e,	// (0x0007b037) popup_note_window_cp01

0xa5d5,	// (0x000773de) calenote_swipe_1_pane_ParamLimits

0xa5d5,	// (0x000773de) calenote_swipe_1_pane

0xa2dc,	// (0x000770e5) calenote_swipe_2_pane_ParamLimits

0xa2dc,	// (0x000770e5) calenote_swipe_2_pane

0xde95,	// (0x0007ac9e) calenote_swipe_1_pane_g1_ParamLimits

0xde95,	// (0x0007ac9e) calenote_swipe_1_pane_g1

0xdea2,	// (0x0007acab) calenote_swipe_1_pane_g2_ParamLimits

0xdea2,	// (0x0007acab) calenote_swipe_1_pane_g2

0x0001,

0xfc40,	// (0x0007ca49) calenote_swipe_1_pane_g_ParamLimits

0xfc40,	// (0x0007ca49) calenote_swipe_1_pane_g

0xe240,	// (0x0007b049) calenote_swipe_1_pane_t1_ParamLimits

0xe240,	// (0x0007b049) calenote_swipe_1_pane_t1

0xde95,	// (0x0007ac9e) calenote_swipe_2_pane_g1_ParamLimits

0xde95,	// (0x0007ac9e) calenote_swipe_2_pane_g1

0xe25f,	// (0x0007b068) calenote_swipe_2_pane_g2_ParamLimits

0xe25f,	// (0x0007b068) calenote_swipe_2_pane_g2

0x0001,

0xfcaf,	// (0x0007cab8) calenote_swipe_2_pane_g_ParamLimits

0xfcaf,	// (0x0007cab8) calenote_swipe_2_pane_g

0xe26b,	// (0x0007b074) calenote_swipe_2_pane_t1_ParamLimits

0xe26b,	// (0x0007b074) calenote_swipe_2_pane_t1

0x3069,	// (0x0006fe72) main_mup_navstr_pane

0x7121,	// (0x00073f2a) main_mup3_pane_t7_ParamLimits

0x7121,	// (0x00073f2a) main_mup3_pane_t7

0xec2b,	// (0x0007ba34) main_mp4_pane_g6_ParamLimits

0xec2b,	// (0x0007ba34) main_mp4_pane_g6

0xeded,	// (0x0007bbf6) main_image3_pane_t4_ParamLimits

0xeded,	// (0x0007bbf6) main_image3_pane_t4

0xa5ea,	// (0x000773f3) popup_navstr_preview_pane_ParamLimits

0xa5ea,	// (0x000773f3) popup_navstr_preview_pane

0xa5fe,	// (0x00077407) scroll_navstr_pane_ParamLimits

0xa5fe,	// (0x00077407) scroll_navstr_pane

0x3069,	// (0x0006fe72) bg_popup_preview_window_pane_cp04

0xe292,	// (0x0007b09b) popup_navstr_preview_pane_t1

0xa612,	// (0x0007741b) scroll_navstr_pane_g1_ParamLimits

0xa612,	// (0x0007741b) scroll_navstr_pane_g1

0xa626,	// (0x0007742f) scroll_navstr_pane_t1_ParamLimits

0xa626,	// (0x0007742f) scroll_navstr_pane_t1

0xe237,	// (0x0007b040) bg_button_pane_cp014

0xe237,	// (0x0007b040) bg_button_pane_cp030

0x2c11,	// (0x0006fa1a) list_double_fisheye_pane_g4_ParamLimits

0x2c11,	// (0x0006fa1a) list_double_fisheye_pane_g4

0x2c1d,	// (0x0006fa26) list_double_fisheye_pane_g5_ParamLimits

0x2c1d,	// (0x0006fa26) list_double_fisheye_pane_g5

0x19f5,	// (0x0006e7fe) sp_fs_scroll_pane_cp03

0xdfb5,	// (0x0007adbe) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xdfc1,	// (0x0007adca) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc5d,	// (0x0007ca66) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xa386,	// (0x0007718f) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe17d,	// (0x0007af86) sp_fs_scroll_pane_cp02

0xb948,	// (0x00078751) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xb948,	// (0x00078751) popup_sp_fs_calendar_preview_list_single_pane

0x3069,	// (0x0006fe72) main_cam6_pano_pane

0x3294,	// (0x0007009d) main_mup3_pane_ParamLimits

0x3069,	// (0x0006fe72) main_phacti_pane

0x9dd2,	// (0x00076bdb) bg_button_pane_cp11

0x9dec,	// (0x00076bf5) main_mobtv_info_pane_g2_ParamLimits

0x9dec,	// (0x00076bf5) main_mobtv_info_pane_g2

0x0001,

0xfbbd,	// (0x0007c9c6) main_mobtv_info_pane_g_ParamLimits

0xfbbd,	// (0x0007c9c6) main_mobtv_info_pane_g

0x9fc9,	// (0x00076dd2) sc_clock_pane_t5_ParamLimits

0x9fc9,	// (0x00076dd2) sc_clock_pane_t5

0xa091,	// (0x00076e9a) main_radioblah_pane_g1_ParamLimits

0xdde1,	// (0x0007abea) main_radioblah_pane_t3_ParamLimits

0xdde1,	// (0x0007abea) main_radioblah_pane_t3

0xddf9,	// (0x0007ac02) main_radioblah_pane_t4_ParamLimits

0xddf9,	// (0x0007ac02) main_radioblah_pane_t4

0xa0b9,	// (0x00076ec2) main_radioblah_text_pane_ParamLimits

0xa0b9,	// (0x00076ec2) main_radioblah_text_pane

0xa0cb,	// (0x00076ed4) main_radioblah_info_pane_g1_ParamLimits

0xa164,	// (0x00076f6d) main_radioblah_info_pane_t4_ParamLimits

0xa164,	// (0x00076f6d) main_radioblah_info_pane_t4

0x3294,	// (0x0007009d) main_sp_fs_calendar_pane

0xa63d,	// (0x00077446) main_phacti_pane_g1

0xa645,	// (0x0007744e) phacti_note_pane_ParamLimits

0xa645,	// (0x0007744e) phacti_note_pane

0xe2a9,	// (0x0007b0b2) phacti_term_pane_ParamLimits

0xe2a9,	// (0x0007b0b2) phacti_term_pane

0xe2be,	// (0x0007b0c7) phacti_note_pane_t1_ParamLimits

0xe2be,	// (0x0007b0c7) phacti_note_pane_t1

0xe2d5,	// (0x0007b0de) phacti_term_pane_g1

0xe2dd,	// (0x0007b0e6) phacti_term_pane_t1_ParamLimits

0xe2dd,	// (0x0007b0e6) phacti_term_pane_t1

0xe307,	// (0x0007b110) popup_sp_fs_calendar_preview_list_single_pane_g1

0xb9e7,	// (0x000787f0) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfcb9,	// (0x0007cac2) popup_sp_fs_calendar_preview_list_single_pane_g

0xe30f,	// (0x0007b118) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe30f,	// (0x0007b118) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe325,	// (0x0007b12e) aid_popup_sp_fs_bg_corner_pane

0xba40,	// (0x00078849) popup_sp_fs_calendar_preview_bg_pane_g1

0x3069,	// (0x0006fe72) popup_sp_fs_calendar_preview_bg_pane

0xe32d,	// (0x0007b136) popup_sp_fs_calendar_preview_list_pane

0x140a,	// (0x0006e213) bg_main_sp_fs_cale_pane_ParamLimits

0x140a,	// (0x0006e213) bg_main_sp_fs_cale_pane

0xe33e,	// (0x0007b147) listscroll_cale_mrui_pane_ParamLimits

0xe33e,	// (0x0007b147) listscroll_cale_mrui_pane

0xe353,	// (0x0007b15c) listscroll_sp_fs_schedule_track_pane

0xe35c,	// (0x0007b165) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe35c,	// (0x0007b165) main_sp_fs_ctrlbar_pane_cp01

0xe36f,	// (0x0007b178) main_sp_fs_ribbon_pane

0xe377,	// (0x0007b180) popup_sp_fs_cale_preview_window

0xa6ba,	// (0x000774c3) list_single_sp_fs_schedule_track_pane_ParamLimits

0xa6ba,	// (0x000774c3) list_single_sp_fs_schedule_track_pane

0x3294,	// (0x0007009d) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x3294,	// (0x0007009d) bg_sp_fs_highlight_list_pane_cp03

0xa6cd,	// (0x000774d6) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xa6cd,	// (0x000774d6) list_single_sp_fs_schedule_track_pane_g1

0xa6d9,	// (0x000774e2) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xa6d9,	// (0x000774e2) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfcbe,	// (0x0007cac7) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfcbe,	// (0x0007cac7) list_single_sp_fs_schedule_track_pane_g

0xa6e5,	// (0x000774ee) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xa6e5,	// (0x000774ee) list_single_sp_fs_schedule_track_pane_t1

0xa6ff,	// (0x00077508) sp_fs_schedule_track_pane_ParamLimits

0xa6ff,	// (0x00077508) sp_fs_schedule_track_pane

0xe389,	// (0x0007b192) sp_fs_schedule_track_pane_g1

0xe391,	// (0x0007b19a) sp_fs_schedule_track_pane_g2

0xe399,	// (0x0007b1a2) sp_fs_schedule_track_pane_g3

0xe3a1,	// (0x0007b1aa) sp_fs_schedule_track_pane_g4

0xe3a9,	// (0x0007b1b2) sp_fs_schedule_track_pane_g5

0x0004,

0xfcc3,	// (0x0007cacc) sp_fs_schedule_track_pane_g

0xce54,	// (0x00079c5d) bg_sp_fs_schedule_viewer_highlight_g1

0xbc51,	// (0x00078a5a) bg_sp_fs_schedule_viewer_highlight_g2

0xce5c,	// (0x00079c65) bg_sp_fs_schedule_viewer_highlight_g3

0xce64,	// (0x00079c6d) bg_sp_fs_schedule_viewer_highlight_g4

0xd0c1,	// (0x00079eca) bg_sp_fs_schedule_viewer_highlight_g5

0xce74,	// (0x00079c7d) bg_sp_fs_schedule_viewer_highlight_g6

0xce7c,	// (0x00079c85) bg_sp_fs_schedule_viewer_highlight_g7

0xce84,	// (0x00079c8d) bg_sp_fs_schedule_viewer_highlight_g8

0xbc31,	// (0x00078a3a) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfcce,	// (0x0007cad7) bg_sp_fs_schedule_viewer_highlight_g

0x3069,	// (0x0006fe72) bg_main_sp_fs_ribbon_pane

0xa710,	// (0x00077519) main_sp_fs_ribbon_pane_g1

0xe3b1,	// (0x0007b1ba) main_sp_fs_ribbon_pane_t1

0xa719,	// (0x00077522) main_sp_fs_ribbon_pane_t2

0xe3c0,	// (0x0007b1c9) main_sp_fs_ribbon_pane_t3

0x0002,

0xfce1,	// (0x0007caea) main_sp_fs_ribbon_pane_t

0xe3cf,	// (0x0007b1d8) main_sp_fs_ribbon_scheduler_pane

0xe3d7,	// (0x0007b1e0) bg_main_sp_fs_ribbon_pane_g1

0xe3e0,	// (0x0007b1e9) bg_main_sp_fs_ribbon_pane_g2

0xe3e9,	// (0x0007b1f2) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfce8,	// (0x0007caf1) bg_main_sp_fs_ribbon_pane_g

0xe3f1,	// (0x0007b1fa) main_sp_fs_ribbon_scheduler_pane_g1

0xe3fa,	// (0x0007b203) main_sp_fs_ribbon_scheduler_pane_g2

0xe403,	// (0x0007b20c) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfcef,	// (0x0007caf8) main_sp_fs_ribbon_scheduler_pane_g

0xe40c,	// (0x0007b215) list_cale_mrui_pane

0xa728,	// (0x00077531) sp_fs_scroll_pane_cp07_ParamLimits

0xa728,	// (0x00077531) sp_fs_scroll_pane_cp07

0xa744,	// (0x0007754d) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xa744,	// (0x0007754d) bg_sp_fs_schedule_viewer_highlight

0xe419,	// (0x0007b222) list_single_sp_fs_schedule_track_pane_cp01

0xe421,	// (0x0007b22a) list_sp_fs_schedule_track_pane

0xe429,	// (0x0007b232) sp_fs_scroll_pane_cp06_ParamLimits

0xe429,	// (0x0007b232) sp_fs_scroll_pane_cp06

0xba40,	// (0x00078849) bgmain_sp_fs_calendar_pane_g1

0x2e26,	// (0x0006fc2f) list_single_cale_mrui_pane_ParamLimits

0x2e26,	// (0x0006fc2f) list_single_cale_mrui_pane

0xe43b,	// (0x0007b244) list_single_cale_mrui_row_pane_ParamLimits

0xe43b,	// (0x0007b244) list_single_cale_mrui_row_pane

0xe448,	// (0x0007b251) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe448,	// (0x0007b251) list_single_cale_mrui_row_pane_g1

0xe48d,	// (0x0007b296) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe48d,	// (0x0007b296) list_single_cale_mrui_row_pane_t1

0x2e46,	// (0x0006fc4f) list_single_cale_mrui_row_pane_t2_ParamLimits

0x2e46,	// (0x0006fc4f) list_single_cale_mrui_row_pane_t2

0xe49f,	// (0x0007b2a8) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe49f,	// (0x0007b2a8) list_single_cale_mrui_row_pane_t3

0xe4ce,	// (0x0007b2d7) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe4ce,	// (0x0007b2d7) list_single_cale_mrui_row_pane_t4

0x0003,

0xfcfd,	// (0x0007cb06) list_single_cale_mrui_row_pane_t_ParamLimits

0xfcfd,	// (0x0007cb06) list_single_cale_mrui_row_pane_t

0x2eae,	// (0x0006fcb7) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x2eae,	// (0x0006fcb7) list_single_cmail_header_editor_pane_bg_cp01

0x2ed4,	// (0x0006fcdd) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x2ed4,	// (0x0006fcdd) list_single_cmail_header_editor_pane_bg_cp02

0xa754,	// (0x0007755d) main_radioblah_text_pane_t1_ParamLimits

0xa754,	// (0x0007755d) main_radioblah_text_pane_t1

0xe4fd,	// (0x0007b306) cam6_indi_pane_cp01

0xe505,	// (0x0007b30e) cam6_mode_pane_cp01

0xe50d,	// (0x0007b316) cam6_pano_pane

0xe516,	// (0x0007b31f) cam6_zoom_pane_cp01

0xe51e,	// (0x0007b327) cam6_pano_image_pane

0xe529,	// (0x0007b332) cam6_pano_pane_g1

0xdb44,	// (0x0007a94d) cam6_pano_pane_g2

0xe532,	// (0x0007b33b) cam6_pano_pane_g3

0xe53b,	// (0x0007b344) cam6_pano_pane_g4

0x7a4e,	// (0x00074857) cam6_pano_pane_g5

0xe544,	// (0x0007b34d) cam6_pano_pane_g6

0xe54e,	// (0x0007b357) cam6_pano_pane_g7

0xe556,	// (0x0007b35f) cam6_pano_pane_g8

0xe55f,	// (0x0007b368) cam6_pano_pane_g9

0x0008,

0xfd06,	// (0x0007cb0f) cam6_pano_pane_g

0x3069,	// (0x0006fe72) main_browser_tag_pane

0xe28a,	// (0x0007b093) grid_navstr_albumart_pane

0xe56a,	// (0x0007b373) cell_navstr_albumart_pane_ParamLimits

0xe56a,	// (0x0007b373) cell_navstr_albumart_pane

0xe58a,	// (0x0007b393) cell_navstr_albumart_pane_g1

0x12a6,	// (0x0006e0af) cell_navstr_albumart_pane_g2

0x12b6,	// (0x0006e0bf) cell_navstr_albumart_pane_g3

0x12ae,	// (0x0006e0b7) cell_navstr_albumart_pane_g4

0x0003,

0xfd19,	// (0x0007cb22) cell_navstr_albumart_pane_g

0xa76e,	// (0x00077577) bt_list_pane_ParamLimits

0xa76e,	// (0x00077577) bt_list_pane

0xa782,	// (0x0007758b) bt_list_pane_t1

0xa791,	// (0x0007759a) bt_list_pane_t2

0x0001,

0xfd22,	// (0x0007cb2b) bt_list_pane_t

0x3069,	// (0x0006fe72) main_cale_prevew_pane

0xa7a0,	// (0x000775a9) popup_cale_preview_window_ParamLimits

0xa7a0,	// (0x000775a9) popup_cale_preview_window

0x3294,	// (0x0007009d) bg_popup_preview_window_pane_cp05_ParamLimits

0x3294,	// (0x0007009d) bg_popup_preview_window_pane_cp05

0xe592,	// (0x0007b39b) list_cale_preview_pane_ParamLimits

0xe592,	// (0x0007b39b) list_cale_preview_pane

0xa7bb,	// (0x000775c4) list_double_cale_preview_pane_ParamLimits

0xa7bb,	// (0x000775c4) list_double_cale_preview_pane

0xa7cd,	// (0x000775d6) list_single_cale_preview_pane_ParamLimits

0xa7cd,	// (0x000775d6) list_single_cale_preview_pane

0xa7e3,	// (0x000775ec) list_single_cale_preview_pane_g1

0xa7eb,	// (0x000775f4) list_single_cale_preview_pane_t1_ParamLimits

0xa7eb,	// (0x000775f4) list_single_cale_preview_pane_t1

0xa800,	// (0x00077609) list_double_cale_preview_pane_g1

0xa808,	// (0x00077611) list_double_cale_preview_pane_t1_ParamLimits

0xa808,	// (0x00077611) list_double_cale_preview_pane_t1

0xa81d,	// (0x00077626) list_double_cale_preview_pane_t2_ParamLimits

0xa81d,	// (0x00077626) list_double_cale_preview_pane_t2

0x0001,

0xfd27,	// (0x0007cb30) list_double_cale_preview_pane_t_ParamLimits

0xfd27,	// (0x0007cb30) list_double_cale_preview_pane_t

0x3069,	// (0x0006fe72) main_ezdial_pane

0x3294,	// (0x0007009d) main_sp_fs_email_pane_ParamLimits

0xa2f6,	// (0x000770ff) cmail_ddmenu_btn01_pane_ParamLimits

0xa2f6,	// (0x000770ff) cmail_ddmenu_btn01_pane

0xa309,	// (0x00077112) cmail_ddmenu_btn02_pane_ParamLimits

0xa309,	// (0x00077112) cmail_ddmenu_btn02_pane

0xa32c,	// (0x00077135) cmail_ddmenu_btn03_pane_ParamLimits

0xa32c,	// (0x00077135) cmail_ddmenu_btn03_pane

0xa3c5,	// (0x000771ce) main_sp_fs_ctrlbar_pane_ParamLimits

0xa3e9,	// (0x000771f2) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xa545,	// (0x0007734e) list_cmail_body_pane_ParamLimits

0xe193,	// (0x0007af9c) bg_button_pane_cp12

0xe19c,	// (0x0007afa5) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe19c,	// (0x0007afa5) list_single_cmail_header_detail_pane_g3

0xe1e5,	// (0x0007afee) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe1e5,	// (0x0007afee) list_single_cmail_header_detail_pane_t2

0x0001,

0xfcaa,	// (0x0007cab3) list_single_cmail_header_detail_pane_t_ParamLimits

0xfcaa,	// (0x0007cab3) list_single_cmail_header_detail_pane_t

0xe2f2,	// (0x0007b0fb) phacti_term_pane_t2_ParamLimits

0xe2f2,	// (0x0007b0fb) phacti_term_pane_t2

0x0001,

0xfcb4,	// (0x0007cabd) phacti_term_pane_t_ParamLimits

0xfcb4,	// (0x0007cabd) phacti_term_pane_t

0xe59e,	// (0x0007b3a7) aid_size_list_single_double

0xa835,	// (0x0007763e) popup_ezdial_listscroll_window

0xa851,	// (0x0007765a) popup_number_entry_window_cp01

0xba00,	// (0x00078809) bg_popup_call_pane_cp09

0xe5aa,	// (0x0007b3b3) ezdial_list_pane

0xe5b2,	// (0x0007b3bb) scroll_pane_cp23

0x140a,	// (0x0006e213) bg_button_pane_cp028_ParamLimits

0x140a,	// (0x0006e213) bg_button_pane_cp028

0xa85f,	// (0x00077668) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xa85f,	// (0x00077668) cmail_ddmenu_btn01_pane_g1

0xa86b,	// (0x00077674) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xa86b,	// (0x00077674) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd2c,	// (0x0007cb35) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd2c,	// (0x0007cb35) cmail_ddmenu_btn01_pane_g

0xe5ba,	// (0x0007b3c3) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe5ba,	// (0x0007b3c3) cmail_ddmenu_btn01_pane_t1

0x140a,	// (0x0006e213) bg_button_pane_cp029_ParamLimits

0x140a,	// (0x0006e213) bg_button_pane_cp029

0xa87f,	// (0x00077688) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xa87f,	// (0x00077688) cmail_ddmenu_btn02_pane_g1

0xa897,	// (0x000776a0) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xa897,	// (0x000776a0) cmail_ddmenu_btn02_pane_t1

0x3294,	// (0x0007009d) bg_button_pane_cp031_ParamLimits

0x3294,	// (0x0007009d) bg_button_pane_cp031

0xa87f,	// (0x00077688) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xa87f,	// (0x00077688) cmail_ddmenu_btn03_pane_g1

0xa897,	// (0x000776a0) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xa897,	// (0x000776a0) cmail_ddmenu_btn03_pane_t1

0x7fa0,	// (0x00074da9) cell_dialer2_keypad_pane_t1_ParamLimits

0x7fba,	// (0x00074dc3) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x7fba,	// (0x00074dc3) cell_dialer2_keypad_pane_t1_copy1

0x9bf5,	// (0x000769fe) ncimui_group_button_pane

0x3294,	// (0x0007009d) main_sp_fs_calendar_pane_ParamLimits

0xa55a,	// (0x00077363) list_single_cmail_header_caption_pane_ParamLimits

0xe335,	// (0x0007b13e) aid_recal_txt_sm_pane

0x3069,	// (0x0006fe72) mian_recal_day_pane

0xe377,	// (0x0007b180) popup_sp_fs_cale_preview_window_ParamLimits

0xe5d0,	// (0x0007b3d9) list_recal_day_pane

0xe612,	// (0x0007b41b) list_single_recal_day_pane_ParamLimits

0xe612,	// (0x0007b41b) list_single_recal_day_pane

0xe624,	// (0x0007b42d) list_single_recal_day_pane_g1_ParamLimits

0xe624,	// (0x0007b42d) list_single_recal_day_pane_g1

0xe630,	// (0x0007b439) list_single_recal_day_pane_g2_ParamLimits

0xe630,	// (0x0007b439) list_single_recal_day_pane_g2

0xe63c,	// (0x0007b445) list_single_recal_day_pane_g3_ParamLimits

0xe63c,	// (0x0007b445) list_single_recal_day_pane_g3

0x2ef4,	// (0x0006fcfd) list_single_recal_day_pane_g4_ParamLimits

0x2ef4,	// (0x0006fcfd) list_single_recal_day_pane_g4

0xe648,	// (0x0007b451) list_single_recal_day_pane_g5_ParamLimits

0xe648,	// (0x0007b451) list_single_recal_day_pane_g5

0xe654,	// (0x0007b45d) list_single_recal_day_pane_g6_ParamLimits

0xe654,	// (0x0007b45d) list_single_recal_day_pane_g6

0x0004,

0xfd3b,	// (0x0007cb44) list_single_recal_day_pane_g_ParamLimits

0xfd3b,	// (0x0007cb44) list_single_recal_day_pane_g

0xe668,	// (0x0007b471) list_single_recal_day_pane_t1

0xe67a,	// (0x0007b483) list_single_recal_day_pane_t2

0x0001,

0xfd46,	// (0x0007cb4f) list_single_recal_day_pane_t

0xa8bb,	// (0x000776c4) ncimui_query_button_pane_ParamLimits

0xa8bb,	// (0x000776c4) ncimui_query_button_pane

0xa8cb,	// (0x000776d4) ncimui_query_button_pane_t1_ParamLimits

0xa8cb,	// (0x000776d4) ncimui_query_button_pane_t1

0xe68c,	// (0x0007b495) ncimui_query_button_pane_t2_ParamLimits

0xe68c,	// (0x0007b495) ncimui_query_button_pane_t2

0x0001,

0xfd4b,	// (0x0007cb54) ncimui_query_button_pane_t_ParamLimits

0xfd4b,	// (0x0007cb54) ncimui_query_button_pane_t

0xa8de,	// (0x000776e7) query_button_pane_ParamLimits

0xa8de,	// (0x000776e7) query_button_pane

0x3069,	// (0x0006fe72) bg_button_pane_cp0028

0xe69f,	// (0x0007b4a8) query_button_pane_t1

0x63be,	// (0x000731c7) main_tport_pane_ParamLimits

0xa409,	// (0x00077212) bg_popup_window_pane_cp01_ParamLimits

0xa409,	// (0x00077212) bg_popup_window_pane_cp01

0xa424,	// (0x0007722d) heading_pane_cp08_ParamLimits

0xa424,	// (0x0007722d) heading_pane_cp08

0xa437,	// (0x00077240) heading_pane_cp07_ParamLimits

0xa437,	// (0x00077240) heading_pane_cp07

0xa4de,	// (0x000772e7) cell_tport_appsw_pane_g2

0x0002,

0xfc97,	// (0x0007caa0) cell_tport_appsw_pane_g

0x2856,	// (0x0006f65f) input_candi_list_open_g1

0xbe4a,	// (0x00078c53) list_cale_time_pane_g6_ParamLimits

0xbe4a,	// (0x00078c53) list_cale_time_pane_g6

0x6af5,	// (0x000738fe) aid_size_touch_calib_1_ParamLimits

0x6af5,	// (0x000738fe) aid_size_touch_calib_1

0x6b07,	// (0x00073910) aid_size_touch_calib_2_ParamLimits

0x6b07,	// (0x00073910) aid_size_touch_calib_2

0x6b1f,	// (0x00073928) aid_size_touch_calib_3_ParamLimits

0x6b1f,	// (0x00073928) aid_size_touch_calib_3

0x6b3d,	// (0x00073946) aid_size_touch_calib_4_ParamLimits

0x6b3d,	// (0x00073946) aid_size_touch_calib_4

0x6b55,	// (0x0007395e) main_touch_calib_button_group_pane_ParamLimits

0x6b55,	// (0x0007395e) main_touch_calib_button_group_pane

0x6b6d,	// (0x00073976) main_touch_calib_pane_g1_ParamLimits

0x6b7f,	// (0x00073988) main_touch_calib_pane_g2_ParamLimits

0x6b91,	// (0x0007399a) main_touch_calib_pane_g3_ParamLimits

0x6ba3,	// (0x000739ac) main_touch_calib_pane_g4_ParamLimits

0xf6d9,	// (0x0007c4e2) main_touch_calib_pane_g_ParamLimits

0x6bb5,	// (0x000739be) main_touch_calib_pane_t1_ParamLimits

0x6bcf,	// (0x000739d8) main_touch_calib_pane_t2_ParamLimits

0x6be9,	// (0x000739f2) main_touch_calib_pane_t3_ParamLimits

0x6bfd,	// (0x00073a06) main_touch_calib_pane_t4_ParamLimits

0x6c11,	// (0x00073a1a) main_touch_calib_pane_t5_ParamLimits

0xf6e2,	// (0x0007c4eb) main_touch_calib_pane_t_ParamLimits

0x73c5,	// (0x000741ce) list_single_fp_cale_pane_g3_ParamLimits

0x73c5,	// (0x000741ce) list_single_fp_cale_pane_g3

0x3294,	// (0x0007009d) bg_button_pane_cp012_ParamLimits

0x3294,	// (0x0007009d) bg_vkb2_func_pane_cp03_ParamLimits

0x8f41,	// (0x00075d4a) cell_vitu2_function_top_pane_g1_ParamLimits

0x3294,	// (0x0007009d) bg_vkb2_func_pane_cp04_ParamLimits

0x9b80,	// (0x00076989) main_ncimui_button_group_pane_ParamLimits

0x9b80,	// (0x00076989) main_ncimui_button_group_pane

0x9be0,	// (0x000769e9) main_ncimui_pane_t3_ParamLimits

0x9be0,	// (0x000769e9) main_ncimui_pane_t3

0xe2a0,	// (0x0007b0a9) phacti_button_group_pane

0xe59e,	// (0x0007b3a7) aid_size_list_single_double_ParamLimits

0xa835,	// (0x0007763e) popup_ezdial_listscroll_window_ParamLimits

0xa851,	// (0x0007765a) popup_number_entry_window_cp01_ParamLimits

0xa8f1,	// (0x000776fa) phacti_button_pane_ParamLimits

0xa8f1,	// (0x000776fa) phacti_button_pane

0x3069,	// (0x0006fe72) bg_button_pane_cp14

0xe6ad,	// (0x0007b4b6) phacti_button_pane_t1

0xa902,	// (0x0007770b) main_touch_calib_button_pane_ParamLimits

0xa902,	// (0x0007770b) main_touch_calib_button_pane

0xb7e2,	// (0x000785eb) bg_button_pane_cp18_ParamLimits

0xb7e2,	// (0x000785eb) bg_button_pane_cp18

0xe6bb,	// (0x0007b4c4) main_touch_calib_button_pane_t1_ParamLimits

0xe6bb,	// (0x0007b4c4) main_touch_calib_button_pane_t1

0xe6d1,	// (0x0007b4da) main_touch_calib_button_pane_t2_ParamLimits

0xe6d1,	// (0x0007b4da) main_touch_calib_button_pane_t2

0x0001,

0xfd50,	// (0x0007cb59) main_touch_calib_button_pane_t_ParamLimits

0xfd50,	// (0x0007cb59) main_touch_calib_button_pane_t

0x3069,	// (0x0006fe72) cell_ncimui_button_pane

0x3069,	// (0x0006fe72) bg_button_pane_cp032

0xe6ef,	// (0x0007b4f8) cell_ncimui_button_pane_t1

0xedcd,	// (0x0007bbd6) image3_infobar_pane_ParamLimits

0xedcd,	// (0x0007bbd6) image3_infobar_pane

0x9ff5,	// (0x00076dfe) fs_bigclock_status_pane_ParamLimits

0x9ff5,	// (0x00076dfe) fs_bigclock_status_pane

0xa002,	// (0x00076e0b) main_fs_bigclock_clock_pane_ParamLimits

0xa002,	// (0x00076e0b) main_fs_bigclock_clock_pane

0xa020,	// (0x00076e29) main_fs_bigclock_indi_pane_ParamLimits

0xa020,	// (0x00076e29) main_fs_bigclock_indi_pane

0xa052,	// (0x00076e5b) main_fs_bigclock_swipe_pane_ParamLimits

0xa052,	// (0x00076e5b) main_fs_bigclock_swipe_pane

0x3069,	// (0x0006fe72) main_fs_clock_dumped_data

0xdc51,	// (0x0007aa5a) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xdc51,	// (0x0007aa5a) list_single_fs_bigclock_indicator_pane_g1

0xdc6c,	// (0x0007aa75) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xdc6c,	// (0x0007aa75) list_single_fs_bigclock_indicator_pane_g2

0xdc86,	// (0x0007aa8f) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xdc86,	// (0x0007aa8f) list_single_fs_bigclock_indicator_pane_g3

0xdca0,	// (0x0007aaa9) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xdca0,	// (0x0007aaa9) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfbf1,	// (0x0007c9fa) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfbf1,	// (0x0007c9fa) list_single_fs_bigclock_indicator_pane_g

0xdccb,	// (0x0007aad4) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xdccb,	// (0x0007aad4) list_single_fs_bigclock_indicator_pane_t1

0xdcf3,	// (0x0007aafc) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xdcf3,	// (0x0007aafc) list_single_fs_bigclock_indicator_pane_t2

0xdd1b,	// (0x0007ab24) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xdd1b,	// (0x0007ab24) list_single_fs_bigclock_indicator_pane_t3

0xdd43,	// (0x0007ab4c) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xdd43,	// (0x0007ab4c) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfbfc,	// (0x0007ca05) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfbfc,	// (0x0007ca05) list_single_fs_bigclock_indicator_pane_t

0xe6fd,	// (0x0007b506) image3_infobar_fav_pane_ParamLimits

0xe6fd,	// (0x0007b506) image3_infobar_fav_pane

0xe70d,	// (0x0007b516) image3_infobar_loc_pane_ParamLimits

0xe70d,	// (0x0007b516) image3_infobar_loc_pane

0xe721,	// (0x0007b52a) image3_infobar_time_pane_ParamLimits

0xe721,	// (0x0007b52a) image3_infobar_time_pane

0xba40,	// (0x00078849) image3_infobar_time_pane_g1

0xe731,	// (0x0007b53a) image3_infobar_time_pane_t1

0xba40,	// (0x00078849) image3_infobar_loc_pane_g1

0xe73f,	// (0x0007b548) image3_infobar_loc_pane_g2

0x0001,

0xfd55,	// (0x0007cb5e) image3_infobar_loc_pane_g

0xe747,	// (0x0007b550) image3_infobar_loc_pane_t1

0xba40,	// (0x00078849) image3_infobar_fav_pane_g1

0xe755,	// (0x0007b55e) image3_infobar_fav_pane_g2

0x0001,

0xfd5a,	// (0x0007cb63) image3_infobar_fav_pane_g

0xe75d,	// (0x0007b566) fs_bigclock_status_battery_pane

0xe766,	// (0x0007b56f) fs_bigclock_status_signal_pane

0xe76f,	// (0x0007b578) fs_bigclock_status_title_pane

0xe778,	// (0x0007b581) fs_bigclock_status_signal_pane_g1

0xe781,	// (0x0007b58a) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd5f,	// (0x0007cb68) fs_bigclock_status_signal_pane_g

0xe789,	// (0x0007b592) fs_bigclock_status_battery_pane_g1

0xe792,	// (0x0007b59b) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd64,	// (0x0007cb6d) fs_bigclock_status_battery_pane_g

0xe79a,	// (0x0007b5a3) fs_bigclock_status_title_pane_t1

0xa917,	// (0x00077720) main_fs_bigclock_clock_pane_g1

0xa917,	// (0x00077720) main_fs_bigclock_clock_pane_g2

0xa928,	// (0x00077731) main_fs_bigclock_clock_pane_g3

0xa928,	// (0x00077731) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd69,	// (0x0007cb72) main_fs_bigclock_clock_pane_g

0xa93b,	// (0x00077744) main_fs_bigclock_clock_pane_t1

0xa951,	// (0x0007775a) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd72,	// (0x0007cb7b) main_fs_bigclock_clock_pane_t

0xe7a8,	// (0x0007b5b1) list_single_fs_bigclock_indicator_pane_ParamLimits

0xe7a8,	// (0x0007b5b1) list_single_fs_bigclock_indicator_pane

0xe7b9,	// (0x0007b5c2) list_single_fs_bigclock_pane_ParamLimits

0xe7b9,	// (0x0007b5c2) list_single_fs_bigclock_pane

0xe7df,	// (0x0007b5e8) main_fs_bigclock_indicator_pane_t1

0xe7ee,	// (0x0007b5f7) list_single_fs_bigclock_pane_g1

0xe7f6,	// (0x0007b5ff) list_single_fs_bigclock_pane_t1

0xba40,	// (0x00078849) main_fs_bigclock_swipe_pane_g1

0xe839,	// (0x0007b642) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd83,	// (0x0007cb8c) main_fs_bigclock_swipe_pane_g

0xe841,	// (0x0007b64a) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xe841,	// (0x0007b64a) main_fs_bigclock_swipe_pane_t1

0x553b,	// (0x00072344) call_type_pane_ParamLimits

0x3069,	// (0x0006fe72) main_btmg_pane

0xe474,	// (0x0007b27d) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe474,	// (0x0007b27d) list_single_cale_mrui_row_pane_g2

0x0002,

0xfcf6,	// (0x0007caff) list_single_cale_mrui_row_pane_g_ParamLimits

0xfcf6,	// (0x0007caff) list_single_cale_mrui_row_pane_g

0xe5f9,	// (0x0007b402) list_recal_vselct_arw_lo_pane

0xe601,	// (0x0007b40a) list_recal_vselct_arw_up_pane

0xe609,	// (0x0007b412) list_recal_vselct_pane

0xa9ab,	// (0x000777b4) btmg_button_pane

0xa9b5,	// (0x000777be) main_btmg_pane_g1

0x3069,	// (0x0006fe72) bg_button_pane_cp044

0xe85e,	// (0x0007b667) btmg_button_pane_t1

0x13f6,	// (0x0006e1ff) aid_listscroll_gen

0x3294,	// (0x0007009d) main_cntbar_detail_pane

0xe175,	// (0x0007af7e) list_cmail_folder_pane

0x19f5,	// (0x0006e7fe) sp_fs_scroll_pane_cp03_ParamLimits

0x2f0c,	// (0x0006fd15) list_single_fs_dyc_pane_cp01_ParamLimits

0x2f0c,	// (0x0006fd15) list_single_fs_dyc_pane_cp01

0xe86c,	// (0x0007b675) aid_size_cmail_indent

0xe875,	// (0x0007b67e) list_single_dyc_row_pane_cp01

0xa9eb,	// (0x000777f4) cntbar_detail_list_pane_ParamLimits

0xa9eb,	// (0x000777f4) cntbar_detail_list_pane

0xaa37,	// (0x00077840) main_cntbar_detail_cont_pane_ParamLimits

0xaa37,	// (0x00077840) main_cntbar_detail_cont_pane

0x19f5,	// (0x0006e7fe) scroll_pane_cp032_ParamLimits

0x19f5,	// (0x0006e7fe) scroll_pane_cp032

0xaa4b,	// (0x00077854) cntbar_detail_list_event_pane_ParamLimits

0xaa4b,	// (0x00077854) cntbar_detail_list_event_pane

0xa9fb,	// (0x00077804) cntbar_detail_list_shct_pane

0xbc9f,	// (0x00078aa8) aid_list_gen

0xe87e,	// (0x0007b687) aid_scroll

0xe887,	// (0x0007b690) aid_size_touch_scroll_bar

0xa1fa,	// (0x00077003) aid_list_double

0xe890,	// (0x0007b699) aid_list_single

0xe890,	// (0x0007b699) aid_list_single_lg

0xe899,	// (0x0007b6a2) aid_list_z_g_a_sm

0xf06e,	// (0x0007be77) aid_list_z_g_d

0xe8a1,	// (0x0007b6aa) aid_txt_z_prm

0x2f21,	// (0x0006fd2a) aid_txt_z_prm_cp01

0x2f2f,	// (0x0006fd38) aid_txt_z_sec

0xaa5b,	// (0x00077864) main_cntbar_detail_cont_pane_g1_ParamLimits

0xaa5b,	// (0x00077864) main_cntbar_detail_cont_pane_g1

0xaa6f,	// (0x00077878) main_cntbar_detail_cont_pane_g2_ParamLimits

0xaa6f,	// (0x00077878) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd88,	// (0x0007cb91) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd88,	// (0x0007cb91) main_cntbar_detail_cont_pane_g

0xe8af,	// (0x0007b6b8) main_cntbar_detail_cont_pane_t1

0xe8bd,	// (0x0007b6c6) main_cntbar_detail_cont_pane_t2

0xe8cb,	// (0x0007b6d4) main_cntbar_detail_cont_pane_t3

0x0002,

0xfd8d,	// (0x0007cb96) main_cntbar_detail_cont_pane_t

0xaa7f,	// (0x00077888) cell_cntbar_detail_list_shct_pane_ParamLimits

0xaa7f,	// (0x00077888) cell_cntbar_detail_list_shct_pane

0xe8d9,	// (0x0007b6e2) cntbar_detail_list_shct_pane_g1

0xe8e2,	// (0x0007b6eb) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd94,	// (0x0007cb9d) cntbar_detail_list_shct_pane_g

0xaa93,	// (0x0007789c) cntbar_detail_list_event_pane_g1_ParamLimits

0xaa93,	// (0x0007789c) cntbar_detail_list_event_pane_g1

0xaa9f,	// (0x000778a8) cntbar_detail_list_event_pane_g2_ParamLimits

0xaa9f,	// (0x000778a8) cntbar_detail_list_event_pane_g2

0x0005,

0xfd99,	// (0x0007cba2) cntbar_detail_list_event_pane_g_ParamLimits

0xfd99,	// (0x0007cba2) cntbar_detail_list_event_pane_g

0xab0b,	// (0x00077914) cntbar_detail_list_event_pane_t1_ParamLimits

0xab0b,	// (0x00077914) cntbar_detail_list_event_pane_t1

0xab20,	// (0x00077929) cntbar_detail_list_event_pane_t2_ParamLimits

0xab20,	// (0x00077929) cntbar_detail_list_event_pane_t2

0x0002,

0xfda6,	// (0x0007cbaf) cntbar_detail_list_event_pane_t_ParamLimits

0xfda6,	// (0x0007cbaf) cntbar_detail_list_event_pane_t

0xba40,	// (0x00078849) cell_cntbar_detail_list_shct_pane_g1

0xc4b7,	// (0x000792c0) navi_pane_mv_g3

0x3294,	// (0x0007009d) main_cntbar_detail_pane_ParamLimits

0x3069,	// (0x0006fe72) main_notif_wgt_pane

0xebb9,	// (0x0007b9c2) aid_tch_main_mp4_pane_g4

0xedc5,	// (0x0007bbce) popup_slider_window_cp02

0xe5ef,	// (0x0007b3f8) list_recal_day_event_pane

0xa9bf,	// (0x000777c8) cntbar_detail_btn_pane_ParamLimits

0xa9bf,	// (0x000777c8) cntbar_detail_btn_pane

0xa9d5,	// (0x000777de) cntbar_detail_btn_pane_cp01_ParamLimits

0xa9d5,	// (0x000777de) cntbar_detail_btn_pane_cp01

0xa9fb,	// (0x00077804) cntbar_detail_list_shct_pane_ParamLimits

0xaa0b,	// (0x00077814) cntbar_detail_pane_g1_ParamLimits

0xaa0b,	// (0x00077814) cntbar_detail_pane_g1

0xaa1b,	// (0x00077824) cntbar_detail_pane_t1_ParamLimits

0xaa1b,	// (0x00077824) cntbar_detail_pane_t1

0xaaab,	// (0x000778b4) cntbar_detail_list_event_pane_g3_ParamLimits

0xaaab,	// (0x000778b4) cntbar_detail_list_event_pane_g3

0xaac3,	// (0x000778cc) cntbar_detail_list_event_pane_g4_ParamLimits

0xaac3,	// (0x000778cc) cntbar_detail_list_event_pane_g4

0xaadb,	// (0x000778e4) cntbar_detail_list_event_pane_g5_ParamLimits

0xaadb,	// (0x000778e4) cntbar_detail_list_event_pane_g5

0xaaf3,	// (0x000778fc) cntbar_detail_list_event_pane_g6_ParamLimits

0xaaf3,	// (0x000778fc) cntbar_detail_list_event_pane_g6

0xab35,	// (0x0007793e) cntbar_detail_list_event_pane_t3_ParamLimits

0xab35,	// (0x0007793e) cntbar_detail_list_event_pane_t3

0xab47,	// (0x00077950) popup_notif_wgt_window_ParamLimits

0xab47,	// (0x00077950) popup_notif_wgt_window

0xab60,	// (0x00077969) popup_submenu_window_cp01_ParamLimits

0xab60,	// (0x00077969) popup_submenu_window_cp01

0xba00,	// (0x00078809) bg_popup_window_pane_cp10

0xe8eb,	// (0x0007b6f4) listscroll_notif_wgt_pane

0xe8fd,	// (0x0007b706) list_notif_wgt_window

0xe906,	// (0x0007b70f) scroll_pane_cp033

0xab76,	// (0x0007797f) list_notif_wgt_row_pane_ParamLimits

0xab76,	// (0x0007797f) list_notif_wgt_row_pane

0xe90f,	// (0x0007b718) aid_size_list_notif_wgt_del

0xe91c,	// (0x0007b725) list_notif_wgt_row_pane_g1

0xe928,	// (0x0007b731) list_notif_wgt_row_pane_g2

0xe937,	// (0x0007b740) list_notif_wgt_row_pane_g3

0x0002,

0xfdad,	// (0x0007cbb6) list_notif_wgt_row_pane_g

0xe944,	// (0x0007b74d) list_notif_wgt_row_pane_t1

0xe95a,	// (0x0007b763) list_notif_wgt_row_pane_t2

0xe96c,	// (0x0007b775) list_notif_wgt_row_pane_t3

0x0002,

0xfdb4,	// (0x0007cbbd) list_notif_wgt_row_pane_t

0xd0c9,	// (0x00079ed2) list_recal_day_event_pane_g1

0xe97e,	// (0x0007b787) list_recal_day_event_pane_t1

0x3069,	// (0x0006fe72) bg_button_pane_cp045

0xe98d,	// (0x0007b796) cntbar_detail_btn_pane_t1

0x140a,	// (0x0006e213) main_callh_pane_ParamLimits

0x140a,	// (0x0006e213) main_callh_pane

0x3069,	// (0x0006fe72) main_coverflow0_pane

0x3069,	// (0x0006fe72) main_wgtman_pane

0xa06a,	// (0x00076e73) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xa06a,	// (0x00076e73) main_fs_bigclock_unlock_btn_pane

0xa4d6,	// (0x000772df) bg_button_pane_cp16

0xa4e6,	// (0x000772ef) cell_tport_appsw_pane_g3

0xab86,	// (0x0007798f) cf0_flow_pane_ParamLimits

0xab86,	// (0x0007798f) cf0_flow_pane

0xe99b,	// (0x0007b7a4) listscroll_cf0_pane

0xe9a6,	// (0x0007b7af) main_cf0_pane_g1

0xab9b,	// (0x000779a4) main_cf0_pane_t1_ParamLimits

0xab9b,	// (0x000779a4) main_cf0_pane_t1

0xabb2,	// (0x000779bb) main_cf0_pane_t2_ParamLimits

0xabb2,	// (0x000779bb) main_cf0_pane_t2

0x0001,

0xfdc0,	// (0x0007cbc9) main_cf0_pane_t_ParamLimits

0xfdc0,	// (0x0007cbc9) main_cf0_pane_t

0xe9b8,	// (0x0007b7c1) scroll_pane_cp11

0xabc9,	// (0x000779d2) cf0_flow_pane_g1

0xabd1,	// (0x000779da) cf0_flow_pane_g2

0x0001,

0xfdc5,	// (0x0007cbce) cf0_flow_pane_g

0xabd9,	// (0x000779e2) cf0_flow_pane_t1

0x3069,	// (0x0006fe72) main_call6_pane

0x3069,	// (0x0006fe72) main_calllock_pane

0xabe7,	// (0x000779f0) call6_btn_grp_pane_ParamLimits

0xabe7,	// (0x000779f0) call6_btn_grp_pane

0xac01,	// (0x00077a0a) call6_pane_g1_ParamLimits

0xac01,	// (0x00077a0a) call6_pane_g1

0xac17,	// (0x00077a20) popup_call6_1st_window_ParamLimits

0xac17,	// (0x00077a20) popup_call6_1st_window

0xac28,	// (0x00077a31) popup_call6_2nd_window_ParamLimits

0xac28,	// (0x00077a31) popup_call6_2nd_window

0xac39,	// (0x00077a42) cell_call6_btn_pane_ParamLimits

0xac39,	// (0x00077a42) cell_call6_btn_pane

0xba00,	// (0x00078809) bg_popup_call2_in_pane_cp03

0xe9c3,	// (0x0007b7cc) popup_call6_1st_window_g1

0xe9cb,	// (0x0007b7d4) popup_call6_1st_window_g2

0xe9d3,	// (0x0007b7dc) popup_call6_1st_window_g3

0x0002,

0xfdca,	// (0x0007cbd3) popup_call6_1st_window_g

0xe9db,	// (0x0007b7e4) popup_call6_1st_window_t1

0xe9ea,	// (0x0007b7f3) popup_call6_1st_window_t2

0xe9f8,	// (0x0007b801) popup_call6_1st_window_t3

0x0002,

0xfdd1,	// (0x0007cbda) popup_call6_1st_window_t

0xba00,	// (0x00078809) bg_popup_call2_in_pane_cp04

0xea06,	// (0x0007b80f) popup_call6_2nd_window_g1

0xea0e,	// (0x0007b817) popup_call6_2nd_window_g2

0xea16,	// (0x0007b81f) popup_call6_2nd_window_g3

0x0002,

0xfdd8,	// (0x0007cbe1) popup_call6_2nd_window_g

0xea1e,	// (0x0007b827) popup_call6_2nd_window_t1

0x3069,	// (0x0006fe72) bg_button_pane_cp15

0xea2d,	// (0x0007b836) cell_call6_btn_pane_g1

0xf076,	// (0x0007be7f) cell_call6_btn_pane_t1

0xac4c,	// (0x00077a55) listscroll_wgtman_pane_ParamLimits

0xac4c,	// (0x00077a55) listscroll_wgtman_pane

0xac6d,	// (0x00077a76) wgtman_btn_pane_ParamLimits

0xac6d,	// (0x00077a76) wgtman_btn_pane

0xc2be,	// (0x000790c7) aid_scroll_copy1

0xea36,	// (0x0007b83f) list_wgtman_pane

0xacb0,	// (0x00077ab9) wgtman_btn_pane_g1_ParamLimits

0xacb0,	// (0x00077ab9) wgtman_btn_pane_g1

0xacdc,	// (0x00077ae5) wgtman_btn_pane_t1_ParamLimits

0xacdc,	// (0x00077ae5) wgtman_btn_pane_t1

0xea40,	// (0x0007b849) wgtman_btn_pane_t2_ParamLimits

0xea40,	// (0x0007b849) wgtman_btn_pane_t2

0x0001,

0xfddf,	// (0x0007cbe8) wgtman_btn_pane_t_ParamLimits

0xfddf,	// (0x0007cbe8) wgtman_btn_pane_t

0xad19,	// (0x00077b22) listrow_wgtman_pane_ParamLimits

0xad19,	// (0x00077b22) listrow_wgtman_pane

0xad2b,	// (0x00077b34) listrow_wgtman_pane_g1

0xad38,	// (0x00077b41) listrow_wgtman_pane_g2

0x0001,

0xfde4,	// (0x0007cbed) listrow_wgtman_pane_g

0x2f3d,	// (0x0006fd46) listrow_wgtman_pane_t1

0x2f55,	// (0x0006fd5e) listrow_wgtman_pane_t2

0x0001,

0xfde9,	// (0x0007cbf2) listrow_wgtman_pane_t

0x2f7b,	// (0x0006fd84) wait_bar_pane_cp09

0xea57,	// (0x0007b860) main_calllock_btn_pane

0xea61,	// (0x0007b86a) main_calllock_pane_g1

0x3069,	// (0x0006fe72) bg_button_pane_cp17

0xea2d,	// (0x0007b836) main_calllock_btn_pane_g1

0xea69,	// (0x0007b872) main_calllock_btn_pane_t1

0x3069,	// (0x0006fe72) main_dialer3_pane

0x3069,	// (0x0006fe72) main_fmrd2_pane

0xba40,	// (0x00078849) main_fs_bigclock_unlock_btn_pane_g1

0xad5e,	// (0x00077b67) main_fs_bigclock_unlock_btn_pane_t1

0xad6c,	// (0x00077b75) area_fmrd2_info_pane_ParamLimits

0xad6c,	// (0x00077b75) area_fmrd2_info_pane

0xad7d,	// (0x00077b86) area_fmrd2_visual_pane_ParamLimits

0xad7d,	// (0x00077b86) area_fmrd2_visual_pane

0xad8b,	// (0x00077b94) fmrd2_indi_pane_ParamLimits

0xad8b,	// (0x00077b94) fmrd2_indi_pane

0xad98,	// (0x00077ba1) area_fmrd2_visual_pane_g1

0xada0,	// (0x00077ba9) area_fmrd2_visual_pane_t1

0xadb0,	// (0x00077bb9) area_fmrd2_visual_pane_t2

0xadc0,	// (0x00077bc9) area_fmrd2_visual_pane_t3

0x0002,

0xfdf3,	// (0x0007cbfc) area_fmrd2_visual_pane_t

0xadd0,	// (0x00077bd9) area_fmrd2_info_pane_g1

0xadd8,	// (0x00077be1) area_fmrd2_info_pane_t1

0xade8,	// (0x00077bf1) area_fmrd2_info_pane_t2

0xadf8,	// (0x00077c01) area_fmrd2_info_pane_t3

0xae08,	// (0x00077c11) area_fmrd2_info_pane_t4

0x0003,

0xfdfa,	// (0x0007cc03) area_fmrd2_info_pane_t

0xae16,	// (0x00077c1f) fmrd2_indi_pane_t1

0xae26,	// (0x00077c2f) fmrd2_indi_pane_t2

0xae36,	// (0x00077c3f) fmrd2_indi_pane_t3

0x0002,

0xfe03,	// (0x0007cc0c) fmrd2_indi_pane_t

0xdcaf,	// (0x0007aab8) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xdcaf,	// (0x0007aab8) list_single_fs_bigclock_indicator_pane_g5

0xdd60,	// (0x0007ab69) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xdd60,	// (0x0007ab69) list_single_fs_bigclock_indicator_pane_t5

0xa659,	// (0x00077462) aid_cell_bcale_month_pane_ParamLimits

0xa659,	// (0x00077462) aid_cell_bcale_month_pane

0xa677,	// (0x00077480) bcale_month_pane_ParamLimits

0xa677,	// (0x00077480) bcale_month_pane

0xa69b,	// (0x000774a4) bcale_preview_pane_ParamLimits

0xa69b,	// (0x000774a4) bcale_preview_pane

0xe7f6,	// (0x0007b5ff) list_single_fs_bigclock_pane_t1_ParamLimits

0xe815,	// (0x0007b61e) list_single_fs_bigclock_pane_t2_ParamLimits

0xe815,	// (0x0007b61e) list_single_fs_bigclock_pane_t2

0x0001,

0xfd7e,	// (0x0007cb87) list_single_fs_bigclock_pane_t_ParamLimits

0xfd7e,	// (0x0007cb87) list_single_fs_bigclock_pane_t

0xad56,	// (0x00077b5f) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfdee,	// (0x0007cbf7) main_fs_bigclock_unlock_btn_pane_g

0xae46,	// (0x00077c4f) aid_dia3_key_size_ParamLimits

0xae46,	// (0x00077c4f) aid_dia3_key_size

0xae55,	// (0x00077c5e) aid_dia3_listrow_size_ParamLimits

0xae55,	// (0x00077c5e) aid_dia3_listrow_size

0xae6a,	// (0x00077c73) dia3_keypad_fun_pane_ParamLimits

0xae6a,	// (0x00077c73) dia3_keypad_fun_pane

0xae86,	// (0x00077c8f) dia3_keypad_num_pane_ParamLimits

0xae86,	// (0x00077c8f) dia3_keypad_num_pane

0xaea1,	// (0x00077caa) dia3_listscroll_pane_ParamLimits

0xaea1,	// (0x00077caa) dia3_listscroll_pane

0xaeb4,	// (0x00077cbd) dia3_numentry_pane_ParamLimits

0xaeb4,	// (0x00077cbd) dia3_numentry_pane

0xea78,	// (0x0007b881) dia3_list_pane

0xea83,	// (0x0007b88c) scroll_pane_cp12

0x3069,	// (0x0006fe72) bg_dia3_numentry_pane

0xaecc,	// (0x00077cd5) dia3_numentry_pane_t1

0xaedb,	// (0x00077ce4) cell_dia3_key_num_pane

0xaee3,	// (0x00077cec) cell_dia3_key0_fun_pane_ParamLimits

0xaee3,	// (0x00077cec) cell_dia3_key0_fun_pane

0xaef7,	// (0x00077d00) cell_dia3_key1_fun_pane_ParamLimits

0xaef7,	// (0x00077d00) cell_dia3_key1_fun_pane

0xaf0f,	// (0x00077d18) dia3_listrow_pane

0xda02,	// (0x0007a80b) bg_dia3_numentry_pane_g1

0x3069,	// (0x0006fe72) bg_button_pane_cp21

0xea8e,	// (0x0007b897) cell_dia3_key_num_pane_t1

0xea9c,	// (0x0007b8a5) cell_dia3_key_num_pane_t2

0xeaab,	// (0x0007b8b4) cell_dia3_key_num_pane_t3

0xeaba,	// (0x0007b8c3) cell_dia3_key_num_pane_t4

0x0003,

0xfe0a,	// (0x0007cc13) cell_dia3_key_num_pane_t

0x3069,	// (0x0006fe72) bg_button_pane_cp19

0xaf21,	// (0x00077d2a) cell_dia3_key0_fun_pane_g1

0x3069,	// (0x0006fe72) bg_button_pane_cp20

0xaf29,	// (0x00077d32) cell_dia3_key1_fun_pane_g1

0xaf31,	// (0x00077d3a) area_left_week_number_pane

0xaf3d,	// (0x00077d46) area_top_day_name_pane

0xaf50,	// (0x00077d59) frame_month_view_pane

0xeac9,	// (0x0007b8d2) grid_month_view_pane

0xaf63,	// (0x00077d6c) cell_top_day_name_pane_ParamLimits

0xaf63,	// (0x00077d6c) cell_top_day_name_pane

0xaf90,	// (0x00077d99) cell_area_left_week_number_pane_ParamLimits

0xaf90,	// (0x00077d99) cell_area_left_week_number_pane

0xafa4,	// (0x00077dad) cell_month_view_pane_ParamLimits

0xafa4,	// (0x00077dad) cell_month_view_pane

0xead7,	// (0x0007b8e0) frm_month_g1

0xafd1,	// (0x00077dda) frm_month_g2

0xafe4,	// (0x00077ded) frm_month_g3

0xaff7,	// (0x00077e00) frm_month_g4

0xb00a,	// (0x00077e13) frm_month_g5

0xb01d,	// (0x00077e26) frm_month_g6

0xb030,	// (0x00077e39) frm_month_g7

0xeae4,	// (0x0007b8ed) frm_month_g8

0xb043,	// (0x00077e4c) frm_month_g9

0xb053,	// (0x00077e5c) frm_month_g10

0xb063,	// (0x00077e6c) frm_month_g11

0xb073,	// (0x00077e7c) frm_month_g12

0xb085,	// (0x00077e8e) frm_month_g13

0xb097,	// (0x00077ea0) frm_month_g14

0xb0ab,	// (0x00077eb4) frm_month_g15

0xb0bf,	// (0x00077ec8) frm_month_g16

0x000f,

0xfe13,	// (0x0007cc1c) frm_month_g

0xeaf1,	// (0x0007b8fa) cell_top_day_name_pane_t1

0xb0d3,	// (0x00077edc) cell_area_left_week_number_pane_g1

0xb0df,	// (0x00077ee8) cell_area_left_week_number_pane_t1

0xb74e,	// (0x00078557) cell_month_view_pane_g1

0xb0f2,	// (0x00077efb) cell_month_view_pane_t1

0x3069,	// (0x0006fe72) main_fps_pane

0xdf7d,	// (0x0007ad86) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xdf7d,	// (0x0007ad86) cmail_ddmenu_btn02_pane_cp1

0xdf99,	// (0x0007ada2) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xdf99,	// (0x0007ada2) cmail_ddmenu_btn02_pane_cp2

0xa88b,	// (0x00077694) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xa88b,	// (0x00077694) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfd31,	// (0x0007cb3a) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfd31,	// (0x0007cb3a) cmail_ddmenu_btn02_pane_g

0xa8a9,	// (0x000776b2) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xa8a9,	// (0x000776b2) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfd36,	// (0x0007cb3f) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfd36,	// (0x0007cb3f) cmail_ddmenu_btn02_pane_t

0xb105,	// (0x00077f0e) fps_text_pane_ParamLimits

0xb105,	// (0x00077f0e) fps_text_pane

0xb11c,	// (0x00077f25) main_fps_pane_g1_ParamLimits

0xb11c,	// (0x00077f25) main_fps_pane_g1

0xb136,	// (0x00077f3f) wait_bar_pane_cp010_ParamLimits

0xb136,	// (0x00077f3f) wait_bar_pane_cp010

0xb147,	// (0x00077f50) fps_text_pane_t1_ParamLimits

0xb147,	// (0x00077f50) fps_text_pane_t1

0x027a,	// (0x0006d083) cam4_image_uncrop_pane_g1

0x0283,	// (0x0006d08c) cam4_image_uncrop_pane_g2

0x84d5,	// (0x000752de) cam4_image_uncrop_pane_g3

0x84de,	// (0x000752e7) cam4_image_uncrop_pane_g4

0x0003,

0xf875,	// (0x0007c67e) cam4_image_uncrop_pane_g

0xaf0f,	// (0x00077d18) dia3_listrow_pane_ParamLimits

0x3069,	// (0x0006fe72) main_phob2_pane

0xa4a7,	// (0x000772b0) cell_tport_appsw_pane_cp02_ParamLimits

0xa4a7,	// (0x000772b0) cell_tport_appsw_pane_cp02

0xa4bb,	// (0x000772c4) cell_tport_appsw_pane_cp03_ParamLimits

0xa4bb,	// (0x000772c4) cell_tport_appsw_pane_cp03

0x3069,	// (0x0006fe72) phob2_contact_card_pane

0x3069,	// (0x0006fe72) phob2_listscroll_pane

0xeb04,	// (0x0007b90d) phob2_list_pane

0xeb0c,	// (0x0007b915) scroll_pane_cp034

0xb15f,	// (0x00077f68) phob2_cc_data_pane_ParamLimits

0xb15f,	// (0x00077f68) phob2_cc_data_pane

0xb17e,	// (0x00077f87) phob2_cc_listscroll_pane_ParamLimits

0xb17e,	// (0x00077f87) phob2_cc_listscroll_pane

0xad19,	// (0x00077b22) list_double_large_graphic_phob2_pane_ParamLimits

0xad19,	// (0x00077b22) list_double_large_graphic_phob2_pane

0xb19c,	// (0x00077fa5) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xb19c,	// (0x00077fa5) list_double_large_graphic_phob2_pane_g1

0x2f8d,	// (0x0006fd96) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x2f8d,	// (0x0006fd96) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfe34,	// (0x0007cc3d) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfe34,	// (0x0007cc3d) list_double_large_graphic_phob2_pane_g

0x2fa5,	// (0x0006fdae) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x2fa5,	// (0x0006fdae) list_double_large_graphic_phob2_pane_t1

0x2fba,	// (0x0006fdc3) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x2fba,	// (0x0006fdc3) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfe3d,	// (0x0007cc46) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfe3d,	// (0x0007cc46) list_double_large_graphic_phob2_pane_t

0x3069,	// (0x0006fe72) list_highlight_pane_cp024

0xeb14,	// (0x0007b91d) phob2_cc_button_pane

0xb1b7,	// (0x00077fc0) phob2_cc_data_pane_g1_ParamLimits

0xb1b7,	// (0x00077fc0) phob2_cc_data_pane_g1

0xb1ce,	// (0x00077fd7) phob2_cc_data_pane_g2_ParamLimits

0xb1ce,	// (0x00077fd7) phob2_cc_data_pane_g2

0x0001,

0xfe42,	// (0x0007cc4b) phob2_cc_data_pane_g_ParamLimits

0xfe42,	// (0x0007cc4b) phob2_cc_data_pane_g

0xb1e0,	// (0x00077fe9) phob2_cc_data_pane_t1_ParamLimits

0xb1e0,	// (0x00077fe9) phob2_cc_data_pane_t1

0xb1f8,	// (0x00078001) phob2_cc_data_pane_t2_ParamLimits

0xb1f8,	// (0x00078001) phob2_cc_data_pane_t2

0xb210,	// (0x00078019) phob2_cc_data_pane_t3_ParamLimits

0xb210,	// (0x00078019) phob2_cc_data_pane_t3

0x0002,

0xfe47,	// (0x0007cc50) phob2_cc_data_pane_t_ParamLimits

0xfe47,	// (0x0007cc50) phob2_cc_data_pane_t

0x0150,	// (0x0006cf59) phob2_cc_list_pane_ParamLimits

0x0150,	// (0x0006cf59) phob2_cc_list_pane

0xd172,	// (0x00079f7b) scroll_pane_cp035_ParamLimits

0xd172,	// (0x00079f7b) scroll_pane_cp035

0x3294,	// (0x0007009d) bg_button_pane_cp033

0x015c,	// (0x0006cf65) phob2_cc_button_pane_g1

0x0168,	// (0x0006cf71) phob2_cc_button_pane_t1

0x017d,	// (0x0006cf86) phob2_cc_button_pane_t2

0x0001,

0xfe4e,	// (0x0007cc57) phob2_cc_button_pane_t

0xb228,	// (0x00078031) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xb228,	// (0x00078031) list_double_large_graphic_phob2_cc_pane

0xb258,	// (0x00078061) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xb258,	// (0x00078061) list_double_large_graphic_phob2_cc_pane_g1

0x2fcf,	// (0x0006fdd8) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x2fcf,	// (0x0006fdd8) list_double_large_graphic_phob2_cc_pane_g2

0x2fdb,	// (0x0006fde4) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x2fdb,	// (0x0006fde4) list_double_large_graphic_phob2_cc_pane_g3

0x2fe7,	// (0x0006fdf0) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x2fe7,	// (0x0006fdf0) list_double_large_graphic_phob2_cc_pane_g4

0x2ff3,	// (0x0006fdfc) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x2ff3,	// (0x0006fdfc) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe53,	// (0x0007cc5c) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe53,	// (0x0007cc5c) list_double_large_graphic_phob2_cc_pane_g

0x2fff,	// (0x0006fe08) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x2fff,	// (0x0006fe08) list_double_large_graphic_phob2_cc_pane_t1

0x3028,	// (0x0006fe31) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x3028,	// (0x0006fe31) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe5e,	// (0x0007cc67) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe5e,	// (0x0007cc67) list_double_large_graphic_phob2_cc_pane_t

0x021a,	// (0x0006d023) list_highlight_pane_cp025_ParamLimits

0x021a,	// (0x0006d023) list_highlight_pane_cp025

0x3294,	// (0x0007009d) bg_button_pane_cp033_ParamLimits

0x015c,	// (0x0006cf65) phob2_cc_button_pane_g1_ParamLimits

0x0168,	// (0x0006cf71) phob2_cc_button_pane_t1_ParamLimits

0x017d,	// (0x0006cf86) phob2_cc_button_pane_t2_ParamLimits

0xfe4e,	// (0x0007cc57) phob2_cc_button_pane_t_ParamLimits

0x32a2,	// (0x000700ab) popup_wgtman_window

0xcf6e,	// (0x00079d77) scroll_pane_cp038

0xac92,	// (0x00077a9b) wgtman_btn_pane_cp_01_ParamLimits

0xac92,	// (0x00077a9b) wgtman_btn_pane_cp_01

0x0228,	// (0x0006d031) wgtman_content_pane

0x0231,	// (0x0006d03a) wgtman_heading_pane

0x3069,	// (0x0006fe72) bg_heading_pane_cp02

0x023a,	// (0x0006d043) wgtman_heading_pane_g1

0x0242,	// (0x0006d04b) wgtman_heading_pane_t1

0x0250,	// (0x0006d059) scroll_pane_cp036

0x0258,	// (0x0006d061) wgtman_list_pane

0x0260,	// (0x0006d069) wgtman_list_pane_t1_ParamLimits

0x0260,	// (0x0006d069) wgtman_list_pane_t1

0xee51,	// (0x0007bc5a) cam4_grid_pane

0x2a32,	// (0x0006f83b) bg_button_pane_cp015_ParamLimits

0x90db,	// (0x00075ee4) bg_button_pane_cp016_ParamLimits

0x90ee,	// (0x00075ef7) bg_button_pane_cp017_ParamLimits

0x2a74,	// (0x0006f87d) popup_vitu2_query_window_g3_ParamLimits

0x2a74,	// (0x0006f87d) popup_vitu2_query_window_g3

0x2aef,	// (0x0006f8f8) popup_vitu2_query_window_t6_ParamLimits

0x2aef,	// (0x0006f8f8) popup_vitu2_query_window_t6

0x2b1a,	// (0x0006f923) popup_vitu2_query_window_t7_ParamLimits

0x2b1a,	// (0x0006f923) popup_vitu2_query_window_t7

0x027a,	// (0x0006d083) cam4_grid_pane_g1

0x0283,	// (0x0006d08c) cam4_grid_pane_g2

0x028c,	// (0x0006d095) cam4_grid_pane_g3

0x0295,	// (0x0006d09e) cam4_grid_pane_g4

0x0003,

0xfe63,	// (0x0007cc6c) cam4_grid_pane_g

0x452a,	// (0x00071333) aid_placing_vt_slider_lsc_ParamLimits

0x4835,	// (0x0007163e) vidtel_button_pane_ParamLimits

0x4835,	// (0x0007163e) vidtel_button_pane

0x3069,	// (0x0006fe72) bg_button_pane_cp034

0x02a0,	// (0x0006d0a9) vidtel_button_pane_g1

0x02a8,	// (0x0006d0b1) vidtel_button_pane_t1

0xd0b9,	// (0x00079ec2) aid_size_vtel_slider_touch

0xd172,	// (0x00079f7b) scroll_pane_cp039

0x9d5e,	// (0x00076b67) ncim_query_button_pane_cp01_ParamLimits

0x9d7d,	// (0x00076b86) ncimui_query_pane_g1_ParamLimits

0x3294,	// (0x0007009d) input_focus_pane_cp012_ParamLimits

0xda40,	// (0x0007a849) ncim_query_entry_pane_t1_ParamLimits

0xd172,	// (0x00079f7b) scroll_pane_cp039_ParamLimits

0xc3a2,	// (0x000791ab) navi_pane_bcale_mc_g1

0xc3aa,	// (0x000791b3) navi_pane_bcale_mc_t1

0xdfcd,	// (0x0007add6) main_sp_fs_email_pane_g1

0xdfd9,	// (0x0007ade2) main_sp_fs_email_pane_g2

0x0001,

0xfc66,	// (0x0007ca6f) main_sp_fs_email_pane_g

0xe480,	// (0x0007b289) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe480,	// (0x0007b289) list_single_cale_mrui_row_pane_g3

0x2f02,	// (0x0006fd0b) list_single_recal_day_pane_g5_event_pane

0xe660,	// (0x0007b469) list_single_recal_day_pane_g7

0x02be,	// (0x0006d0c7) list_recal_day_event_pane_cp01

0x02c7,	// (0x0006d0d0) list_recal_vselct_arw_lo_pane_cp01

0x02cf,	// (0x0006d0d8) list_recal_vselct_arw_up_pane_cp01

0x02d7,	// (0x0006d0e0) list_recal_vselct_pane_cp01

0xd0c9,	// (0x00079ed2) list_recal_day_event_pane_cp01_g1

0xeb1c,	// (0x0007b925) list_recal_day_event_pane_cp01_t1

0xe668,	// (0x0007b471) list_single_recal_day_pane_t1_ParamLimits

0xe67a,	// (0x0007b483) list_single_recal_day_pane_t2_ParamLimits

0xfd46,	// (0x0007cb4f) list_single_recal_day_pane_t_ParamLimits

0x39c6,	// (0x000707cf) bg_notes_pane_ParamLimits

0xb7a6,	// (0x000785af) list_notes_pane_ParamLimits

0x3b91,	// (0x0007099a) scroll_pane_cp06_ParamLimits

0xb7e2,	// (0x000785eb) main_notes_pane_ParamLimits

0x3294,	// (0x0007009d) main_welc_pane

0xb280,	// (0x00078089) main_welc_body_pane_ParamLimits

0xb280,	// (0x00078089) main_welc_body_pane

0xb29e,	// (0x000780a7) main_welc_opti_pane_ParamLimits

0xb29e,	// (0x000780a7) main_welc_opti_pane

0xb312,	// (0x0007811b) main_welc_pane_t1_ParamLimits

0xb312,	// (0x0007811b) main_welc_pane_t1

0xb479,	// (0x00078282) main_welc_body_row_pane_ParamLimits

0xb479,	// (0x00078282) main_welc_body_row_pane

0x3a33,	// (0x0007083c) main_welc_opti_row_pane_ParamLimits

0x3a33,	// (0x0007083c) main_welc_opti_row_pane

0x04a8,	// (0x0006d2b1) main_welc_opti_row_pane_g1

0xb48d,	// (0x00078296) main_welc_opti_row_pane_t1

0x04bf,	// (0x0006d2c8) main_welc_body_row_pane_t1

0xe8f5,	// (0x0007b6fe) popup_notif_wgt_heading_pane

0xe90f,	// (0x0007b718) aid_size_list_notif_wgt_del_ParamLimits

0xe91c,	// (0x0007b725) list_notif_wgt_row_pane_g1_ParamLimits

0xe928,	// (0x0007b731) list_notif_wgt_row_pane_g2_ParamLimits

0xe937,	// (0x0007b740) list_notif_wgt_row_pane_g3_ParamLimits

0xfdad,	// (0x0007cbb6) list_notif_wgt_row_pane_g_ParamLimits

0xe944,	// (0x0007b74d) list_notif_wgt_row_pane_t1_ParamLimits

0xe95a,	// (0x0007b763) list_notif_wgt_row_pane_t2_ParamLimits

0xe96c,	// (0x0007b775) list_notif_wgt_row_pane_t3_ParamLimits

0xfdb4,	// (0x0007cbbd) list_notif_wgt_row_pane_t_ParamLimits

0xad2b,	// (0x00077b34) listrow_wgtman_pane_g1_ParamLimits

0xad38,	// (0x00077b41) listrow_wgtman_pane_g2_ParamLimits

0xfde4,	// (0x0007cbed) listrow_wgtman_pane_g_ParamLimits

0x2f3d,	// (0x0006fd46) listrow_wgtman_pane_t1_ParamLimits

0x2f55,	// (0x0006fd5e) listrow_wgtman_pane_t2_ParamLimits

0xfde9,	// (0x0007cbf2) listrow_wgtman_pane_t_ParamLimits

0x2f7b,	// (0x0006fd84) wait_bar_pane_cp09_ParamLimits

0x3069,	// (0x0006fe72) bg_popup_heading_pane_cp02

0x04ce,	// (0x0006d2d7) popup_notif_wgt_heading_pane_g1

0x04d6,	// (0x0006d2df) popup_notif_wgt_heading_pane_t1

0x3069,	// (0x0006fe72) main_vids_pane

0x3069,	// (0x0006fe72) vids_listscroll_pane

0xb49c,	// (0x000782a5) scroll_pane_cp040

0x3069,	// (0x0006fe72) vids_list_pane

0xb4a7,	// (0x000782b0) vids_list_double_pane_ParamLimits

0xb4a7,	// (0x000782b0) vids_list_double_pane

0xb4b8,	// (0x000782c1) vids_list_double_pane_g1

0xb4c1,	// (0x000782ca) vids_list_double_pane_t1

0xb4d1,	// (0x000782da) vids_list_double_pane_t2

0x0001,

0xfe82,	// (0x0007cc8b) vids_list_double_pane_t

0x3294,	// (0x0007009d) main_ncimui_pane_ParamLimits

0x9b94,	// (0x0007699d) main_ncimui_pane_g1_ParamLimits

0x9ba0,	// (0x000769a9) main_ncimui_pane_g2_ParamLimits

0x9ba0,	// (0x000769a9) main_ncimui_pane_g2

0x0001,

0xfb67,	// (0x0007c970) main_ncimui_pane_g_ParamLimits

0xfb67,	// (0x0007c970) main_ncimui_pane_g

0xb2b9,	// (0x000780c2) main_welc_pane_g1_ParamLimits

0xb2b9,	// (0x000780c2) main_welc_pane_g1

0xb2ce,	// (0x000780d7) main_welc_pane_g2_ParamLimits

0xb2ce,	// (0x000780d7) main_welc_pane_g2

0x0003,

0xfe6c,	// (0x0007cc75) main_welc_pane_g_ParamLimits

0xfe6c,	// (0x0007cc75) main_welc_pane_g

0x39c6,	// (0x000707cf) listscroll_mce_pane_ParamLimits

0xc4f7,	// (0x00079300) wait_bar_pane_cp10

0x13fe,	// (0x0006e207) main_cale_day_pane_ParamLimits

0x13fe,	// (0x0006e207) main_cale_week_pane_ParamLimits

0x39c6,	// (0x000707cf) main_messa_pane_ParamLimits

0x74d3,	// (0x000742dc) main_clock2_btn_pane_ParamLimits

0x74d3,	// (0x000742dc) main_clock2_btn_pane

0x74e7,	// (0x000742f0) main_clock2_btn_pane_cp01_ParamLimits

0x74e7,	// (0x000742f0) main_clock2_btn_pane_cp01

0xe40c,	// (0x0007b215) list_cale_mrui_pane_ParamLimits

0xe9b0,	// (0x0007b7b9) main_cf0_pane_g2

0x0001,

0xfdbb,	// (0x0007cbc4) main_cf0_pane_g

0xaf31,	// (0x00077d3a) area_left_week_number_pane_ParamLimits

0xaf3d,	// (0x00077d46) area_top_day_name_pane_ParamLimits

0xaf50,	// (0x00077d59) frame_month_view_pane_ParamLimits

0xeac9,	// (0x0007b8d2) grid_month_view_pane_ParamLimits

0xead7,	// (0x0007b8e0) frm_month_g1_ParamLimits

0xafd1,	// (0x00077dda) frm_month_g2_ParamLimits

0xafe4,	// (0x00077ded) frm_month_g3_ParamLimits

0xaff7,	// (0x00077e00) frm_month_g4_ParamLimits

0xb00a,	// (0x00077e13) frm_month_g5_ParamLimits

0xb01d,	// (0x00077e26) frm_month_g6_ParamLimits

0xb030,	// (0x00077e39) frm_month_g7_ParamLimits

0xeae4,	// (0x0007b8ed) frm_month_g8_ParamLimits

0xb043,	// (0x00077e4c) frm_month_g9_ParamLimits

0xb053,	// (0x00077e5c) frm_month_g10_ParamLimits

0xb063,	// (0x00077e6c) frm_month_g11_ParamLimits

0xb073,	// (0x00077e7c) frm_month_g12_ParamLimits

0xb085,	// (0x00077e8e) frm_month_g13_ParamLimits

0xb097,	// (0x00077ea0) frm_month_g14_ParamLimits

0xb0ab,	// (0x00077eb4) frm_month_g15_ParamLimits

0xb0bf,	// (0x00077ec8) frm_month_g16_ParamLimits

0xfe13,	// (0x0007cc1c) frm_month_g_ParamLimits

0xeaf1,	// (0x0007b8fa) cell_top_day_name_pane_t1_ParamLimits

0xb0d3,	// (0x00077edc) cell_area_left_week_number_pane_g1_ParamLimits

0xb0df,	// (0x00077ee8) cell_area_left_week_number_pane_t1_ParamLimits

0xb74e,	// (0x00078557) cell_month_view_pane_g1_ParamLimits

0xb0f2,	// (0x00077efb) cell_month_view_pane_t1_ParamLimits

0x39be,	// (0x000707c7) main_clock2_btn_pane_g1

0x052d,	// (0x0006d336) main_clock2_btn_pane_t1

0x3294,	// (0x0007009d) listscroll_cmail_pane_ParamLimits

0xdfcd,	// (0x0007add6) main_sp_fs_email_pane_g1_ParamLimits

0xdfd9,	// (0x0007ade2) main_sp_fs_email_pane_g2_ParamLimits

0xfc66,	// (0x0007ca6f) main_sp_fs_email_pane_g_ParamLimits

0xe5d0,	// (0x0007b3d9) list_recal_day_pane_ParamLimits

0xe5e1,	// (0x0007b3ea) mian_recal_day_pane_t1

0x2d4f,	// (0x0006fb58) list_single_dyc_row_text_pane_t4_ParamLimits

0x2d4f,	// (0x0006fb58) list_single_dyc_row_text_pane_t4

0x2d98,	// (0x0006fba1) list_single_dyc_row_text_pane_t5_ParamLimits

0x2d98,	// (0x0006fba1) list_single_dyc_row_text_pane_t5

0xe0a5,	// (0x0007aeae) list_single_dyc_row_text_pane_t6_ParamLimits

0xe0a5,	// (0x0007aeae) list_single_dyc_row_text_pane_t6

0xbe29,	// (0x00078c32) aid_mgn_list_cale_time_pane

0x3294,	// (0x0007009d) main_gallery2_pane_ParamLimits

0x74fd,	// (0x00074306) main_clock2_pane_cp01_t1

0x750d,	// (0x00074316) main_clock2_pane_cp01_t3

0x0001,

0xf74c,	// (0x0007c555) main_clock2_pane_cp01_t

0x3f20,	// (0x00070d29) cale_week_scroll_pane_g16_ParamLimits

0x3f20,	// (0x00070d29) cale_week_scroll_pane_g16

0xba00,	// (0x00078809) vorec_slider_pane

0x02a8,	// (0x0006d0b1) vidtel_button_pane_t1_ParamLimits

0xa917,	// (0x00077720) main_fs_bigclock_clock_pane_g1_ParamLimits

0xa917,	// (0x00077720) main_fs_bigclock_clock_pane_g2_ParamLimits

0xa928,	// (0x00077731) main_fs_bigclock_clock_pane_g3_ParamLimits

0xa928,	// (0x00077731) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfd69,	// (0x0007cb72) main_fs_bigclock_clock_pane_g_ParamLimits

0xa93b,	// (0x00077744) main_fs_bigclock_clock_pane_t1_ParamLimits

0xa951,	// (0x0007775a) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfd72,	// (0x0007cb7b) main_fs_bigclock_clock_pane_t_ParamLimits

0x6ca1,	// (0x00073aaa) main_mup3_lyrics_pane_ParamLimits

0x6ca1,	// (0x00073aaa) main_mup3_lyrics_pane

0xb507,	// (0x00078310) main_mup3_lyrics_pane_t1_ParamLimits

0xb507,	// (0x00078310) main_mup3_lyrics_pane_t1

0xeba3,	// (0x0007b9ac) aid_main_mp4_pane_t1_area

0xebad,	// (0x0007b9b6) aid_main_mp4_pane_t2_area

0xec59,	// (0x0007ba62) main_mp4_pane_g7_ParamLimits

0xec59,	// (0x0007ba62) main_mp4_pane_g7

0xec65,	// (0x0007ba6e) main_mp4_pane_g8_ParamLimits

0xec65,	// (0x0007ba6e) main_mp4_pane_g8

0x82a8,	// (0x000750b1) aid_call6_pane_g1_size

0xb242,	// (0x0007804b) list_double_large_graphic_phob2_other_pane_ParamLimits

0xb242,	// (0x0007804b) list_double_large_graphic_phob2_other_pane

0xbde1,	// (0x00078bea) list_double_large_graphic_phob2_other_pane_g1

0x3069,	// (0x0006fe72) list_highlight_pane_cp026

0x3294,	// (0x0007009d) main_welc_pane_ParamLimits

0xa352,	// (0x0007715b) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0xa352,	// (0x0007715b) main_sp_fs_ctrlbar_pane_g3

0xa36c,	// (0x00077175) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0xa36c,	// (0x00077175) main_sp_fs_ctrlbar_pane_g4

0xa3a0,	// (0x000771a9) toolbar2_fixed_button_pane_cp01

0xa3ab,	// (0x000771b4) toolbar2_fixed_button_pane_cp02

0xa3b8,	// (0x000771c1) toolbar2_fixed_button_pane_cp03

0xb264,	// (0x0007806d) list_welc_entry_pane_ParamLimits

0xb264,	// (0x0007806d) list_welc_entry_pane

0xb2e3,	// (0x000780ec) main_welc_pane_g3_ParamLimits

0xb2e3,	// (0x000780ec) main_welc_pane_g3

0xb330,	// (0x00078139) main_welc_pane_t2_ParamLimits

0xb330,	// (0x00078139) main_welc_pane_t2

0xb34a,	// (0x00078153) main_welc_pane_t3_ParamLimits

0xb34a,	// (0x00078153) main_welc_pane_t3

0x0005,

0xfe75,	// (0x0007cc7e) main_welc_pane_t_ParamLimits

0xfe75,	// (0x0007cc7e) main_welc_pane_t

0xb3fc,	// (0x00078205) welc_button_pane_ParamLimits

0xb3fc,	// (0x00078205) welc_button_pane

0xb464,	// (0x0007826d) welc_service_logo_pane_ParamLimits

0xb464,	// (0x0007826d) welc_service_logo_pane

0xb523,	// (0x0007832c) list_single_welc_entry_pane_ParamLimits

0xb523,	// (0x0007832c) list_single_welc_entry_pane

0xb534,	// (0x0007833d) list_single_welc_entry_pane_g1

0xb53c,	// (0x00078345) list_single_welc_entry_pane_t1

0xb54a,	// (0x00078353) list_single_welc_entry_pane_t2

0x0001,

0xfe87,	// (0x0007cc90) list_single_welc_entry_pane_t

0x3069,	// (0x0006fe72) bg_button_pane_cp035

0x05c8,	// (0x0006d3d1) welc_button_pane_t1

0x05d6,	// (0x0006d3df) welc_service_logo_pane_g1

0x05df,	// (0x0006d3e8) welc_service_logo_pane_g2

0x0001,

0xfe8c,	// (0x0007cc95) welc_service_logo_pane_g

0x3069,	// (0x0006fe72) main_int_radio_pane

0x1873,	// (0x0006e67c) list_single_fs_dyc_pane_g1

0x2f99,	// (0x0006fda2) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x2f99,	// (0x0006fda2) list_double_large_graphic_phob2_pane_g3

0xb1a9,	// (0x00077fb2) list_double_large_graphic_phob2_pane_g4_ParamLimits

0xb1a9,	// (0x00077fb2) list_double_large_graphic_phob2_pane_g4

0xb558,	// (0x00078361) main_int_radio1_pane_ParamLimits

0xb558,	// (0x00078361) main_int_radio1_pane

0x05fa,	// (0x0006d403) find_pane_cp02

0xb575,	// (0x0007837e) input_focus_pane_cp12_ParamLimits

0xb575,	// (0x0007837e) input_focus_pane_cp12

0xb585,	// (0x0007838e) input_focus_pane_cp13_ParamLimits

0xb585,	// (0x0007838e) input_focus_pane_cp13

0xb599,	// (0x000783a2) input_focus_pane_cp14_ParamLimits

0xb599,	// (0x000783a2) input_focus_pane_cp14

0x063f,	// (0x0006d448) int_radio1_listscroll_pane

0xb5ad,	// (0x000783b6) main_int_radio1_pane_g1_ParamLimits

0xb5ad,	// (0x000783b6) main_int_radio1_pane_g1

0xb5c5,	// (0x000783ce) main_int_radio1_pane_t1_ParamLimits

0xb5c5,	// (0x000783ce) main_int_radio1_pane_t1

0xb5e0,	// (0x000783e9) main_int_radio1_pane_t2_ParamLimits

0xb5e0,	// (0x000783e9) main_int_radio1_pane_t2

0xb5fb,	// (0x00078404) main_int_radio1_pane_t3_ParamLimits

0xb5fb,	// (0x00078404) main_int_radio1_pane_t3

0xb616,	// (0x0007841f) main_int_radio1_pane_t4_ParamLimits

0xb616,	// (0x0007841f) main_int_radio1_pane_t4

0x06ac,	// (0x0006d4b5) main_int_radio1_pane_t5_ParamLimits

0x06ac,	// (0x0006d4b5) main_int_radio1_pane_t5

0xb628,	// (0x00078431) main_int_radio1_pane_t6_ParamLimits

0xb628,	// (0x00078431) main_int_radio1_pane_t6

0xb63d,	// (0x00078446) main_int_radio1_pane_t7_ParamLimits

0xb63d,	// (0x00078446) main_int_radio1_pane_t7

0xb652,	// (0x0007845b) main_int_radio1_pane_t8_ParamLimits

0xb652,	// (0x0007845b) main_int_radio1_pane_t8

0xb671,	// (0x0007847a) main_int_radio1_pane_t9_ParamLimits

0xb671,	// (0x0007847a) main_int_radio1_pane_t9

0xb683,	// (0x0007848c) main_int_radio1_pane_t10_ParamLimits

0xb683,	// (0x0007848c) main_int_radio1_pane_t10

0xb6a9,	// (0x000784b2) main_int_radio1_pane_t11_ParamLimits

0xb6a9,	// (0x000784b2) main_int_radio1_pane_t11

0xb6cf,	// (0x000784d8) main_int_radio1_pane_t12_ParamLimits

0xb6cf,	// (0x000784d8) main_int_radio1_pane_t12

0x000b,

0xfe91,	// (0x0007cc9a) main_int_radio1_pane_t_ParamLimits

0xfe91,	// (0x0007cc9a) main_int_radio1_pane_t

0x0781,	// (0x0006d58a) int_radio_list_pane

0xeb0c,	// (0x0007b915) scroll_pane_cp037

0x0789,	// (0x0006d592) list_double_large_graphic_int_radio_pane_ParamLimits

0x0789,	// (0x0006d592) list_double_large_graphic_int_radio_pane

0x07a1,	// (0x0006d5aa) list_double_large_graphic_int_radio_pane_g1

0xeb2a,	// (0x0007b933) list_double_large_graphic_int_radio_pane_t1

0xeb38,	// (0x0007b941) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfeaa,	// (0x0007ccb3) list_double_large_graphic_int_radio_pane_t

0x3069,	// (0x0006fe72) list_highlight_pane_cp027

0x02f0,	// (0x0006d0f9) main_button_pane_4

0xb2f3,	// (0x000780fc) main_welc_pane_g4_ParamLimits

0xb2f3,	// (0x000780fc) main_welc_pane_g4

0xb362,	// (0x0007816b) main_welc_pane_t4_ParamLimits

0xb362,	// (0x0007816b) main_welc_pane_t4

0xb377,	// (0x00078180) main_welc_pane_t5_ParamLimits

0xb377,	// (0x00078180) main_welc_pane_t5

0xb3c1,	// (0x000781ca) main_welc_pane_t6_ParamLimits

0xb3c1,	// (0x000781ca) main_welc_pane_t6

0xb413,	// (0x0007821c) welc_button_pane_2_ParamLimits

0xb413,	// (0x0007821c) welc_button_pane_2

0xb42f,	// (0x00078238) welc_button_pane_3_ParamLimits

0xb42f,	// (0x00078238) welc_button_pane_3

0x02f0,	// (0x0006d0f9) welc_button_pane_4

0xb44e,	// (0x00078257) welc_button_pane_5_ParamLimits

0xb44e,	// (0x00078257) welc_button_pane_5

0x63b2,	// (0x000731bb) main_popup_welc_pane

0x07aa,	// (0x0006d5b3) main_welc_sk_g3

0x07b4,	// (0x0006d5bd) main_welc_sk_g4

0x07be,	// (0x0006d5c7) main_welc_sk_t3

0x07ce,	// (0x0006d5d7) main_welc_sk_t4

0x07de,	// (0x0006d5e7) popup_welc_pane_t4

0x07ec,	// (0x0006d5f5) popup_welc_pane_t5

0x07fa,	// (0x0006d603) popup_welc_pane_t6
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
	};

} // end of namespace AknLayoutScalable_Elaf_phl_apps_qhd_lsc_tch_Large

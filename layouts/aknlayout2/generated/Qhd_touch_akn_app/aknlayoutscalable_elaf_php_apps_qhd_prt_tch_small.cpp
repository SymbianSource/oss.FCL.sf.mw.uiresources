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

#include "aknlayoutscalable_elaf_php_apps_qhd_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_php_apps_qhd_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0003d5a8 };

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
0x20e8,	// (0x0003f690) Screen

0x20f4,	// (0x0003f69c) application_window

0x2150,	// (0x0003f6f8) area_bottom_pane_ParamLimits

0x2150,	// (0x0003f6f8) area_bottom_pane

0x21a9,	// (0x0003f751) area_top_pane_ParamLimits

0x21a9,	// (0x0003f751) area_top_pane

0x220d,	// (0x0003f7b5) call_video_uplink_pane_ParamLimits

0x220d,	// (0x0003f7b5) call_video_uplink_pane

0x224c,	// (0x0003f7f4) main_pane_ParamLimits

0x224c,	// (0x0003f7f4) main_pane

0xc902,	// (0x00049eaa) context_pane

0x5443,	// (0x000429eb) navi_pane

0x5469,	// (0x00042a11) popup_cale_events_window_ParamLimits

0x5469,	// (0x00042a11) popup_cale_events_window

0xc915,	// (0x00049ebd) popup_mup_playback_window

0x5481,	// (0x00042a29) signal_pane

0xa8b4,	// (0x00047e5c) main_browser_pane

0xaa79,	// (0x00048021) main_burst_pane

0x52cf,	// (0x00042877) main_calc_pane

0xc8e8,	// (0x00049e90) main_cale_day_pane

0x298f,	// (0x0003ff37) main_cale_month_pane

0xc8e8,	// (0x00049e90) main_cale_week_pane

0xaa79,	// (0x00048021) main_call_pane

0xa560,	// (0x00047b08) main_call_poc_pane

0xaa79,	// (0x00048021) main_camera_pane

0xaa79,	// (0x00048021) main_chi_dic_pane

0xb259,	// (0x00048801) main_clock_pane

0xa560,	// (0x00047b08) main_fmradio_pane

0xaa79,	// (0x00048021) main_graph_messa_pane

0xa560,	// (0x00047b08) main_help_pane

0xa8b4,	// (0x00047e5c) main_im_pane

0xa7ef,	// (0x00047d97) main_image_pane_ParamLimits

0xa7ef,	// (0x00047d97) main_image_pane

0xa560,	// (0x00047b08) main_location2_pane

0xaa79,	// (0x00048021) main_location_pane

0xa7ef,	// (0x00047d97) main_messa_pane

0xa560,	// (0x00047b08) main_mp2_pane

0xaa79,	// (0x00048021) main_mp_pane

0xa560,	// (0x00047b08) main_msg_pane

0xa560,	// (0x00047b08) main_mup_eq_pane

0xa560,	// (0x00047b08) main_mup_pane

0xa8b4,	// (0x00047e5c) main_notes_pane

0xa560,	// (0x00047b08) main_pec_pane

0xa560,	// (0x00047b08) main_phob_pane

0xa560,	// (0x00047b08) main_pinb_pane

0xa560,	// (0x00047b08) main_postcard_pane

0xa560,	// (0x00047b08) main_qdial_pane

0xaa79,	// (0x00048021) main_skin_pane

0xa560,	// (0x00047b08) main_smil2_pane

0xaa79,	// (0x00048021) main_smil_pane

0xaa79,	// (0x00048021) main_video_pane

0xaa79,	// (0x00048021) main_video_tele_pane

0xa7ef,	// (0x00047d97) main_viewer_pane_ParamLimits

0xa7ef,	// (0x00047d97) main_viewer_pane

0xaa79,	// (0x00048021) main_vorec_pane

0x530d,	// (0x000428b5) popup_blid_sat_info_window_ParamLimits

0x530d,	// (0x000428b5) popup_blid_sat_info_window

0x532d,	// (0x000428d5) popup_dyc_status_message_window_ParamLimits

0x532d,	// (0x000428d5) popup_dyc_status_message_window

0x533d,	// (0x000428e5) popup_grid_large_graphic_window_ParamLimits

0x533d,	// (0x000428e5) popup_grid_large_graphic_window

0x53ce,	// (0x00042976) popup_loc_request_window_ParamLimits

0x53ce,	// (0x00042976) popup_loc_request_window

0x541b,	// (0x000429c3) popup_wml_address_window_ParamLimits

0x541b,	// (0x000429c3) popup_wml_address_window

0x51a7,	// (0x0004274f) call_muted_g1

0x4e69,	// (0x00042411) popup_call_audio_conf_window_ParamLimits

0x4e69,	// (0x00042411) popup_call_audio_conf_window

0x51b7,	// (0x0004275f) popup_call_audio_first_window_ParamLimits

0x51b7,	// (0x0004275f) popup_call_audio_first_window

0x51f7,	// (0x0004279f) popup_call_audio_in_window_ParamLimits

0x51f7,	// (0x0004279f) popup_call_audio_in_window

0x521b,	// (0x000427c3) popup_call_audio_out_window_ParamLimits

0x521b,	// (0x000427c3) popup_call_audio_out_window

0x523d,	// (0x000427e5) popup_call_audio_second_window_ParamLimits

0x523d,	// (0x000427e5) popup_call_audio_second_window

0x526d,	// (0x00042815) popup_call_audio_wait_window_ParamLimits

0x526d,	// (0x00042815) popup_call_audio_wait_window

0x528e,	// (0x00042836) popup_number_entry_window_ParamLimits

0x528e,	// (0x00042836) popup_number_entry_window

0xa14d,	// (0x000476f5) bg_popup_call_pane_cp05_ParamLimits

0xa14d,	// (0x000476f5) bg_popup_call_pane_cp05

0xa16d,	// (0x00047715) popup_number_entry_window_t1

0xa180,	// (0x00047728) popup_number_entry_window_t2

0xa192,	// (0x0004773a) popup_number_entry_window_t3

0x0003,

0xf0af,	// (0x0004c657) popup_number_entry_window_t

0xa1a4,	// (0x0004774c) text_title_cp2

0xa1b7,	// (0x0004775f) bg_popup_call_pane_cp_ParamLimits

0xa1b7,	// (0x0004775f) bg_popup_call_pane_cp

0xa1c5,	// (0x0004776d) call_thumbnail_pane

0xa1cd,	// (0x00047775) popup_call_audio_in_window_g1_ParamLimits

0xa1cd,	// (0x00047775) popup_call_audio_in_window_g1

0xa1d9,	// (0x00047781) popup_call_audio_in_window_g2_ParamLimits

0xa1d9,	// (0x00047781) popup_call_audio_in_window_g2

0xa1e5,	// (0x0004778d) popup_call_audio_in_window_g3_ParamLimits

0xa1e5,	// (0x0004778d) popup_call_audio_in_window_g3

0x0002,

0xf0b8,	// (0x0004c660) popup_call_audio_in_window_g_ParamLimits

0xf0b8,	// (0x0004c660) popup_call_audio_in_window_g

0xa1f1,	// (0x00047799) popup_call_audio_in_window_t1_ParamLimits

0xa1f1,	// (0x00047799) popup_call_audio_in_window_t1

0xa20d,	// (0x000477b5) popup_call_audio_in_window_t2_ParamLimits

0xa20d,	// (0x000477b5) popup_call_audio_in_window_t2

0xa229,	// (0x000477d1) popup_call_audio_in_window_t3_ParamLimits

0xa229,	// (0x000477d1) popup_call_audio_in_window_t3

0x0002,

0xf0bf,	// (0x0004c667) popup_call_audio_in_window_t_ParamLimits

0xf0bf,	// (0x0004c667) popup_call_audio_in_window_t

0xa1b7,	// (0x0004775f) bg_popup_call_pane_cp01_ParamLimits

0xa1b7,	// (0x0004775f) bg_popup_call_pane_cp01

0xa1c5,	// (0x0004776d) call_thumbnail_pane_cp02

0xa23c,	// (0x000477e4) call_type_pane_cp022

0xa244,	// (0x000477ec) popup_call_audio_out_window_g1_ParamLimits

0xa244,	// (0x000477ec) popup_call_audio_out_window_g1

0xa256,	// (0x000477fe) popup_call_audio_out_window_g2_ParamLimits

0xa256,	// (0x000477fe) popup_call_audio_out_window_g2

0xa262,	// (0x0004780a) popup_call_audio_out_window_g3_ParamLimits

0xa262,	// (0x0004780a) popup_call_audio_out_window_g3

0x0002,

0xf0c6,	// (0x0004c66e) popup_call_audio_out_window_g_ParamLimits

0xf0c6,	// (0x0004c66e) popup_call_audio_out_window_g

0xa274,	// (0x0004781c) popup_call_audio_out_window_t1_ParamLimits

0xa274,	// (0x0004781c) popup_call_audio_out_window_t1

0xa28c,	// (0x00047834) popup_call_audio_out_window_t2_ParamLimits

0xa28c,	// (0x00047834) popup_call_audio_out_window_t2

0x0001,

0xf0cd,	// (0x0004c675) popup_call_audio_out_window_t_ParamLimits

0xf0cd,	// (0x0004c675) popup_call_audio_out_window_t

0xa2a1,	// (0x00047849) bg_popup_call_pane_ParamLimits

0xa2a1,	// (0x00047849) bg_popup_call_pane

0x244d,	// (0x0003f9f5) call_thumbnail_pane_cp_ParamLimits

0x244d,	// (0x0003f9f5) call_thumbnail_pane_cp

0xa325,	// (0x000478cd) call_type_pane_cp01_ParamLimits

0xa325,	// (0x000478cd) call_type_pane_cp01

0xa369,	// (0x00047911) popup_call_audio_first_window_g1_ParamLimits

0xa369,	// (0x00047911) popup_call_audio_first_window_g1

0xa3b5,	// (0x0004795d) popup_call_audio_first_window_g2_ParamLimits

0xa3b5,	// (0x0004795d) popup_call_audio_first_window_g2

0x0001,

0xf0d2,	// (0x0004c67a) popup_call_audio_first_window_g_ParamLimits

0xf0d2,	// (0x0004c67a) popup_call_audio_first_window_g

0xa3f9,	// (0x000479a1) popup_call_audio_first_window_t1_ParamLimits

0xa3f9,	// (0x000479a1) popup_call_audio_first_window_t1

0xa4a5,	// (0x00047a4d) popup_call_audio_first_window_t4_ParamLimits

0xa4a5,	// (0x00047a4d) popup_call_audio_first_window_t4

0xa531,	// (0x00047ad9) popup_call_audio_first_window_t5_ParamLimits

0xa531,	// (0x00047ad9) popup_call_audio_first_window_t5

0x0002,

0xf0d7,	// (0x0004c67f) popup_call_audio_first_window_t_ParamLimits

0xf0d7,	// (0x0004c67f) popup_call_audio_first_window_t

0xa560,	// (0x00047b08) bg_popup_call_pane_cp02

0xa56a,	// (0x00047b12) call_type_pane_cp023

0xa572,	// (0x00047b1a) popup_call_audio_wait_window_g1

0xa57a,	// (0x00047b22) popup_call_audio_wait_window_g2

0x0001,

0xf0de,	// (0x0004c686) popup_call_audio_wait_window_g

0xa582,	// (0x00047b2a) popup_call_audio_wait_window_t3

0xa590,	// (0x00047b38) bg_popup_call_pane_cp03_ParamLimits

0xa590,	// (0x00047b38) bg_popup_call_pane_cp03

0xa5f0,	// (0x00047b98) call_thumbnail_pane_cp011_ParamLimits

0xa5f0,	// (0x00047b98) call_thumbnail_pane_cp011

0xa5fc,	// (0x00047ba4) call_type_pane_cp034_ParamLimits

0xa5fc,	// (0x00047ba4) call_type_pane_cp034

0xa638,	// (0x00047be0) popup_call_audio_second_window_g1_ParamLimits

0xa638,	// (0x00047be0) popup_call_audio_second_window_g1

0xa674,	// (0x00047c1c) popup_call_audio_second_window_g2_ParamLimits

0xa674,	// (0x00047c1c) popup_call_audio_second_window_g2

0x0001,

0xf0e3,	// (0x0004c68b) popup_call_audio_second_window_g_ParamLimits

0xf0e3,	// (0x0004c68b) popup_call_audio_second_window_g

0xa6b0,	// (0x00047c58) popup_call_audio_second_window_t1_ParamLimits

0xa6b0,	// (0x00047c58) popup_call_audio_second_window_t1

0xa731,	// (0x00047cd9) popup_call_audio_second_window_t2_ParamLimits

0xa731,	// (0x00047cd9) popup_call_audio_second_window_t2

0xa767,	// (0x00047d0f) popup_call_audio_second_window_t3_ParamLimits

0xa767,	// (0x00047d0f) popup_call_audio_second_window_t3

0x0002,

0xf0e8,	// (0x0004c690) popup_call_audio_second_window_t_ParamLimits

0xf0e8,	// (0x0004c690) popup_call_audio_second_window_t

0xa560,	// (0x00047b08) bg_popup_call_pane_cp04

0xa7d1,	// (0x00047d79) list_conf_pane

0xa7d9,	// (0x00047d81) popup_call_audio_conf_window_t1

0xa7e7,	// (0x00047d8f) call_thumbnail_pane_g1

0xa7ef,	// (0x00047d97) bg_pinb_pane_ParamLimits

0xa7ef,	// (0x00047d97) bg_pinb_pane

0xa7fd,	// (0x00047da5) find_pinb_pane

0xa806,	// (0x00047dae) listscroll_pinb_pane_ParamLimits

0xa806,	// (0x00047dae) listscroll_pinb_pane

0xa815,	// (0x00047dbd) pinb_bg_pane_g1

0x2471,	// (0x0003fa19) pinb_bg_pane_g2

0x247d,	// (0x0003fa25) pinb_bg_pane_g3

0x2489,	// (0x0003fa31) pinb_bg_pane_g4

0x2495,	// (0x0003fa3d) pinb_bg_pane_g5

0x24a1,	// (0x0003fa49) pinb_bg_pane_g6

0x24ac,	// (0x0003fa54) pinb_bg_pane_g7

0x24b7,	// (0x0003fa5f) pinb_bg_pane_g8

0x24c2,	// (0x0003fa6a) pinb_bg_pane_g9

0x24cc,	// (0x0003fa74) pinb_bg_pane_g10

0x0009,

0xf0ef,	// (0x0004c697) pinb_bg_pane_g

0x24e9,	// (0x0003fa91) grid_pinb_pane

0x24f4,	// (0x0003fa9c) list_pinb_pane

0x24ff,	// (0x0003faa7) scroll_pane_cp01_ParamLimits

0x24ff,	// (0x0003faa7) scroll_pane_cp01

0xa81f,	// (0x00047dc7) find_pinb_pane_g1_ParamLimits

0xa81f,	// (0x00047dc7) find_pinb_pane_g1

0xa837,	// (0x00047ddf) find_pinb_pane_t1

0xa849,	// (0x00047df1) find_pinb_pane_t2

0x0001,

0xf109,	// (0x0004c6b1) find_pinb_pane_t

0xa85e,	// (0x00047e06) input_focus_pane_cp01_ParamLimits

0xa85e,	// (0x00047e06) input_focus_pane_cp01

0x2511,	// (0x0003fab9) cell_pinb_pane_ParamLimits

0x2511,	// (0x0003fab9) cell_pinb_pane

0x2539,	// (0x0003fae1) cell_pinb_pane_g1_ParamLimits

0x2539,	// (0x0003fae1) cell_pinb_pane_g1

0x254e,	// (0x0003faf6) cell_pinb_pane_g2_ParamLimits

0x254e,	// (0x0003faf6) cell_pinb_pane_g2

0xa86a,	// (0x00047e12) cell_pinb_pane_g3_ParamLimits

0xa86a,	// (0x00047e12) cell_pinb_pane_g3

0x0002,

0xf10e,	// (0x0004c6b6) cell_pinb_pane_g_ParamLimits

0xf10e,	// (0x0004c6b6) cell_pinb_pane_g

0xa560,	// (0x00047b08) grid_highlight_pane_cp01

0x255a,	// (0x0003fb02) list_pinb_item_pane_ParamLimits

0x255a,	// (0x0003fb02) list_pinb_item_pane

0xa560,	// (0x00047b08) list_highlight_pane_cp02

0x2580,	// (0x0003fb28) list_pinb_item_pane_g1_ParamLimits

0x2580,	// (0x0003fb28) list_pinb_item_pane_g1

0x258d,	// (0x0003fb35) list_pinb_item_pane_g2_ParamLimits

0x258d,	// (0x0003fb35) list_pinb_item_pane_g2

0x2599,	// (0x0003fb41) list_pinb_item_pane_g3_ParamLimits

0x2599,	// (0x0003fb41) list_pinb_item_pane_g3

0x25aa,	// (0x0003fb52) list_pinb_item_pane_g4_ParamLimits

0x25aa,	// (0x0003fb52) list_pinb_item_pane_g4

0x0003,

0xf115,	// (0x0004c6bd) list_pinb_item_pane_g_ParamLimits

0xf115,	// (0x0004c6bd) list_pinb_item_pane_g

0x25b6,	// (0x0003fb5e) list_pinb_item_pane_t1_ParamLimits

0x25b6,	// (0x0003fb5e) list_pinb_item_pane_t1

0x25e7,	// (0x0003fb8f) calc_display_pane

0x2605,	// (0x0003fbad) calc_paper_pane

0x2621,	// (0x0003fbc9) grid_calc_pane

0xa560,	// (0x00047b08) bg_list_pane_cp01

0x264d,	// (0x0003fbf5) clock_g1

0x2655,	// (0x0003fbfd) clock_g2

0x0001,

0xf11e,	// (0x0004c6c6) clock_g

0x265f,	// (0x0003fc07) clock_t1_ParamLimits

0x265f,	// (0x0003fc07) clock_t1

0x2674,	// (0x0003fc1c) clock_t2_ParamLimits

0x2674,	// (0x0003fc1c) clock_t2

0x2686,	// (0x0003fc2e) clock_t3_ParamLimits

0x2686,	// (0x0003fc2e) clock_t3

0x2698,	// (0x0003fc40) clock_t4_ParamLimits

0x2698,	// (0x0003fc40) clock_t4

0x26aa,	// (0x0003fc52) clock_t5_ParamLimits

0x26aa,	// (0x0003fc52) clock_t5

0x26bf,	// (0x0003fc67) clock_t6_ParamLimits

0x26bf,	// (0x0003fc67) clock_t6

0x26d1,	// (0x0003fc79) clock_t7_ParamLimits

0x26d1,	// (0x0003fc79) clock_t7

0x26e3,	// (0x0003fc8b) clock_t8_ParamLimits

0x26e3,	// (0x0003fc8b) clock_t8

0x26f9,	// (0x0003fca1) clock_t9_ParamLimits

0x26f9,	// (0x0003fca1) clock_t9

0x0008,

0xf123,	// (0x0004c6cb) clock_t_ParamLimits

0xf123,	// (0x0004c6cb) clock_t

0xa876,	// (0x00047e1e) popup_clock_analogue_window_cp02

0xa876,	// (0x00047e1e) popup_clock_digital_window_cp01

0xa87e,	// (0x00047e26) listscroll_help_pane

0xa560,	// (0x00047b08) phob_pre_status_pane

0xa888,	// (0x00047e30) grid_qdial_pane

0xa7ef,	// (0x00047d97) listscroll_mce_pane

0xa7ef,	// (0x00047d97) bg_notes_pane

0xa892,	// (0x00047e3a) list_notes_pane

0x270f,	// (0x0003fcb7) scroll_pane_cp06

0xa8a0,	// (0x00047e48) bg_calc_paper_pane

0x271e,	// (0x0003fcc6) list_calc_pane

0xa8b4,	// (0x00047e5c) bg_calc_display_pane

0x2738,	// (0x0003fce0) calc_display_pane_t1

0x274d,	// (0x0003fcf5) calc_display_pane_t2

0x2762,	// (0x0003fd0a) calc_display_pane_t3

0x0002,

0xf136,	// (0x0004c6de) calc_display_pane_t

0x2774,	// (0x0003fd1c) cell_calc_pane_ParamLimits

0x2774,	// (0x0003fd1c) cell_calc_pane

0xa8c0,	// (0x00047e68) bg_calc_paper_pane_g1

0xa8cc,	// (0x00047e74) bg_calc_paper_pane_g2

0xa8d8,	// (0x00047e80) bg_calc_paper_pane_g3

0xa8e4,	// (0x00047e8c) bg_calc_paper_pane_g4

0xa8f0,	// (0x00047e98) bg_calc_paper_pane_g5

0x27a1,	// (0x0003fd49) bg_calc_paper_pane_g6

0x27b2,	// (0x0003fd5a) bg_calc_paper_pane_g7

0x27c3,	// (0x0003fd6b) bg_calc_paper_pane_g8

0x0007,

0xf13d,	// (0x0004c6e5) bg_calc_paper_pane_g

0x27d4,	// (0x0003fd7c) calc_bg_paper_pane_g9

0x27e5,	// (0x0003fd8d) list_calc_item_pane_ParamLimits

0x27e5,	// (0x0003fd8d) list_calc_item_pane

0xa8fc,	// (0x00047ea4) list_calc_item_pane_g1

0x2811,	// (0x0003fdb9) list_calc_item_pane_t1_ParamLimits

0x2811,	// (0x0003fdb9) list_calc_item_pane_t1

0x2823,	// (0x0003fdcb) list_calc_item_pane_t2_ParamLimits

0x2823,	// (0x0003fdcb) list_calc_item_pane_t2

0x0001,

0xf14e,	// (0x0004c6f6) list_calc_item_pane_t_ParamLimits

0xf14e,	// (0x0004c6f6) list_calc_item_pane_t

0xa909,	// (0x00047eb1) cell_calc_pane_g1

0xa913,	// (0x00047ebb) grid_highlight_pane_cp02

0x2853,	// (0x0003fdfb) bg_calc_display_pane_g1

0x285c,	// (0x0003fe04) bg_calc_display_pane_g2

0x2866,	// (0x0003fe0e) bg_calc_display_pane_g3

0x0002,

0xf158,	// (0x0004c700) bg_calc_display_pane_g

0x286f,	// (0x0003fe17) cell_qdial_pane_ParamLimits

0x286f,	// (0x0003fe17) cell_qdial_pane

0x2883,	// (0x0003fe2b) cell_qdial_pane_g1_ParamLimits

0x2883,	// (0x0003fe2b) cell_qdial_pane_g1

0x2890,	// (0x0003fe38) cell_qdial_pane_g2_ParamLimits

0x2890,	// (0x0003fe38) cell_qdial_pane_g2

0xa935,	// (0x00047edd) cell_qdial_pane_g3_ParamLimits

0xa935,	// (0x00047edd) cell_qdial_pane_g3

0x0003,

0xf15f,	// (0x0004c707) cell_qdial_pane_g_ParamLimits

0xf15f,	// (0x0004c707) cell_qdial_pane_g

0x28ae,	// (0x0003fe56) cell_qdial_pane_t1_ParamLimits

0x28ae,	// (0x0003fe56) cell_qdial_pane_t1

0x28c6,	// (0x0003fe6e) cell_qdial_pane_t2_ParamLimits

0x28c6,	// (0x0003fe6e) cell_qdial_pane_t2

0x28d9,	// (0x0003fe81) cell_qdial_pane_t3_ParamLimits

0x28d9,	// (0x0003fe81) cell_qdial_pane_t3

0x0002,

0xf168,	// (0x0004c710) cell_qdial_pane_t_ParamLimits

0xf168,	// (0x0004c710) cell_qdial_pane_t

0xa560,	// (0x00047b08) grid_highlight_pane_cp04

0xa941,	// (0x00047ee9) thumbnail_qdial_pane_ParamLimits

0xa941,	// (0x00047ee9) thumbnail_qdial_pane

0xa99d,	// (0x00047f45) list_help_pane

0xa9a6,	// (0x00047f4e) scroll_pane_cp02

0x28ec,	// (0x0003fe94) help_list_pane_t1_ParamLimits

0x28ec,	// (0x0003fe94) help_list_pane_t1

0x291f,	// (0x0003fec7) bg_notes_pane_g2

0x2927,	// (0x0003fecf) bg_notes_pane_g3

0x292f,	// (0x0003fed7) notes_bg_pane_g1

0x2937,	// (0x0003fedf) notes_bg_pane_g4

0x293f,	// (0x0003fee7) notes_bg_pane_g5

0x2947,	// (0x0003feef) notes_bg_pane_g6

0x294f,	// (0x0003fef7) notes_bg_pane_g7

0x2957,	// (0x0003feff) notes_bg_pane_g8

0x295f,	// (0x0003ff07) notes_bg_pane_g9

0x0006,

0xf186,	// (0x0004c72e) notes_bg_pane_g

0x2967,	// (0x0003ff0f) list_notes_text_pane_ParamLimits

0x2967,	// (0x0003ff0f) list_notes_text_pane

0xa9af,	// (0x00047f57) list_notes_text_pane_g1

0x0d36,	// (0x0003e2de) list_notes_text_pane_t1

0x298f,	// (0x0003ff37) listscroll_cale_week_pane

0x29b4,	// (0x0003ff5c) bg_cale_heading_pane

0xa9d2,	// (0x00047f7a) bg_cale_pane_cp01

0x29d4,	// (0x0003ff7c) cale_week_corner_pane

0x29ee,	// (0x0003ff96) cale_week_day_heading_pane

0x2a0e,	// (0x0003ffb6) cale_week_scroll_pane_g1

0x2a29,	// (0x0003ffd1) cale_week_scroll_pane_g2

0x2a3c,	// (0x0003ffe4) cale_week_scroll_pane_g3

0x2a4f,	// (0x0003fff7) cale_week_scroll_pane_g4

0x2a62,	// (0x0004000a) cale_week_scroll_pane_g5

0x2a75,	// (0x0004001d) cale_week_scroll_pane_g6

0x2a88,	// (0x00040030) cale_week_scroll_pane_g7

0x2a9d,	// (0x00040045) cale_week_scroll_pane_g8

0x2ab2,	// (0x0004005a) cale_week_scroll_pane_g9

0x2ac5,	// (0x0004006d) cale_week_scroll_pane_g10

0x2ad8,	// (0x00040080) cale_week_scroll_pane_g11

0x2aeb,	// (0x00040093) cale_week_scroll_pane_g12

0x2b02,	// (0x000400aa) cale_week_scroll_pane_g13

0x2b1d,	// (0x000400c5) cale_week_scroll_pane_g14

0x2b38,	// (0x000400e0) cale_week_scroll_pane_g15

0x000f,

0xf195,	// (0x0004c73d) cale_week_scroll_pane_g

0x2b68,	// (0x00040110) cale_week_time_pane

0x2b7d,	// (0x00040125) grid_cale_week_pane

0xaa01,	// (0x00047fa9) scroll_pane_cp08

0x2b9c,	// (0x00040144) cell_cale_week_pane_ParamLimits

0x2b9c,	// (0x00040144) cell_cale_week_pane

0x2bfe,	// (0x000401a6) cale_week_day_heading_pane_t1

0x2c19,	// (0x000401c1) cale_week_day_heading_pane_t2

0x2c34,	// (0x000401dc) cale_week_day_heading_pane_t3

0x2c4f,	// (0x000401f7) cale_week_day_heading_pane_t4

0x2c6a,	// (0x00040212) cale_week_day_heading_pane_t5

0x2c85,	// (0x0004022d) cale_week_day_heading_pane_t6

0x2ca0,	// (0x00040248) cale_week_day_heading_pane_t7

0x0006,

0xf1b6,	// (0x0004c75e) cale_week_day_heading_pane_t

0xaa1e,	// (0x00047fc6) bg_cale_side_pane

0x2cbb,	// (0x00040263) cale_week_time_pane_t1

0x2cd5,	// (0x0004027d) cale_week_time_pane_t2

0x2cef,	// (0x00040297) cale_week_time_pane_t3

0x2d09,	// (0x000402b1) cale_week_time_pane_t4

0x2d23,	// (0x000402cb) cale_week_time_pane_t5

0x2d3d,	// (0x000402e5) cale_week_time_pane_t6

0x2d5b,	// (0x00040303) cale_week_time_pane_t7

0x2d7d,	// (0x00040325) cale_week_time_pane_t8

0x0007,

0xf1c5,	// (0x0004c76d) cale_week_time_pane_t

0x2da1,	// (0x00040349) cell_cale_week_pane_g2

0x2dc5,	// (0x0004036d) cell_cale_week_pane_g3_ParamLimits

0x2dc5,	// (0x0004036d) cell_cale_week_pane_g3

0xaa2c,	// (0x00047fd4) grid_highlight_pane_cp07

0xaa34,	// (0x00047fdc) listscroll_gms_pane

0xaa3e,	// (0x00047fe6) grid_gms_pane

0xaa47,	// (0x00047fef) listscroll_gms_pane_g1

0xaa4f,	// (0x00047ff7) listscroll_gms_pane_g2

0x0001,

0xf1d6,	// (0x0004c77e) listscroll_gms_pane_g

0x2ddd,	// (0x00040385) scroll_pane_cp010

0x2de8,	// (0x00040390) cell_gms_pane_ParamLimits

0x2de8,	// (0x00040390) cell_gms_pane

0x2dfb,	// (0x000403a3) cell_gms_pane_g1

0xaa57,	// (0x00047fff) cell_gms_pane_g2

0xaa5f,	// (0x00048007) cell_gms_pane_g3

0xaa68,	// (0x00048010) cell_gms_pane_g4

0x0003,

0xf1db,	// (0x0004c783) cell_gms_pane_g

0xaa71,	// (0x00048019) grid_highlight_pane_cp09

0x514f,	// (0x000426f7) phob_pre_status_pane_g1

0x5157,	// (0x000426ff) phob_pre_status_pane_g2

0x515f,	// (0x00042707) phob_pre_status_pane_g3

0x5167,	// (0x0004270f) phob_pre_status_pane_g4

0x0004,

0xf5c6,	// (0x0004cb6e) phob_pre_status_pane_g

0x5177,	// (0x0004271f) phob_pre_status_pane_t1

0x5187,	// (0x0004272f) phob_pre_status_pane_t2

0x5197,	// (0x0004273f) phob_pre_status_pane_t3

0x0002,

0xf5d1,	// (0x0004cb79) phob_pre_status_pane_t

0xaa79,	// (0x00048021) bg_list_pane_cp05

0x2e0b,	// (0x000403b3) grid_vorec_pane

0x2e15,	// (0x000403bd) vorec_t1

0x2e23,	// (0x000403cb) vorec_t2

0x2e31,	// (0x000403d9) vorec_t3

0x2e3f,	// (0x000403e7) vorec_t4

0xa0eb,	// (0x00047693) vorec_t5

0xa0f9,	// (0x000476a1) vorec_t6

0x0004,

0xf1e4,	// (0x0004c78c) vorec_t

0xa107,	// (0x000476af) wait_bar_pane_cp01

0x2e5b,	// (0x00040403) cell_vorec_pane_ParamLimits

0x2e5b,	// (0x00040403) cell_vorec_pane

0x2e6e,	// (0x00040416) cell_vorec_pane_g1

0xa560,	// (0x00047b08) grid_highlight_pane_cp05

0x2e88,	// (0x00040430) cams_zoom_pane

0x2e94,	// (0x0004043c) image_vga_pane

0x2ea3,	// (0x0004044b) main_camera_pane_g1

0x2eb1,	// (0x00040459) main_camera_pane_g2

0x2ebd,	// (0x00040465) main_camera_pane_g3

0x2ec9,	// (0x00040471) main_camera_pane_g4

0x2ed5,	// (0x0004047d) main_camera_pane_g5

0x2ee1,	// (0x00040489) main_camera_pane_g6

0x2eed,	// (0x00040495) main_camera_pane_g7

0x0007,

0xf1ef,	// (0x0004c797) main_camera_pane_g

0x2ef9,	// (0x000404a1) main_camera_pane_t1

0x2f0b,	// (0x000404b3) main_camera_pane_t2

0x0001,

0xf200,	// (0x0004c7a8) main_camera_pane_t

0x2f2c,	// (0x000404d4) cams_zoom_pane_cp_ParamLimits

0x2f2c,	// (0x000404d4) cams_zoom_pane_cp

0x2f50,	// (0x000404f8) image_cif_pane_ParamLimits

0x2f50,	// (0x000404f8) image_cif_pane

0x2f6e,	// (0x00040516) image_subqcif_pane

0x2f76,	// (0x0004051e) main_video_pane_g1_ParamLimits

0x2f76,	// (0x0004051e) main_video_pane_g1

0x2f96,	// (0x0004053e) main_video_pane_g2_ParamLimits

0x2f96,	// (0x0004053e) main_video_pane_g2

0x2fc6,	// (0x0004056e) main_video_pane_g3_ParamLimits

0x2fc6,	// (0x0004056e) main_video_pane_g3

0x2fef,	// (0x00040597) main_video_pane_g4_ParamLimits

0x2fef,	// (0x00040597) main_video_pane_g4

0x3018,	// (0x000405c0) main_video_pane_g5_ParamLimits

0x3018,	// (0x000405c0) main_video_pane_g5

0xaa8d,	// (0x00048035) main_video_pane_g6_ParamLimits

0xaa8d,	// (0x00048035) main_video_pane_g6

0x0006,

0xf205,	// (0x0004c7ad) main_video_pane_g_ParamLimits

0xf205,	// (0x0004c7ad) main_video_pane_g

0x303a,	// (0x000405e2) main_video_pane_t1_ParamLimits

0x303a,	// (0x000405e2) main_video_pane_t1

0xaaa7,	// (0x0004804f) cams_zoom_pane_g1

0xaab0,	// (0x00048058) cams_zoom_pane_g2

0xaab9,	// (0x00048061) cams_zoom_pane_g3

0xaac2,	// (0x0004806a) cams_zoom_pane_g4

0x0003,

0xf214,	// (0x0004c7bc) cams_zoom_pane_g

0x3084,	// (0x0004062c) grid_cams_pane

0x3092,	// (0x0004063a) linegrid_cams_pane

0x30a0,	// (0x00040648) cell_cams_pane_ParamLimits

0x30a0,	// (0x00040648) cell_cams_pane

0xaacb,	// (0x00048073) cams_burst_image_pane

0xaad3,	// (0x0004807b) cell_cams_pane_g1

0xa560,	// (0x00047b08) grid_highlight_pane_cp03

0xa909,	// (0x00047eb1) mp_bg_pane_g1

0xa560,	// (0x00047b08) bg_list_pane_cp03

0xc80d,	// (0x00049db5) bg_mp_pane

0xc815,	// (0x00049dbd) grid_mp_pane

0xc81d,	// (0x00049dc5) media_player_g1

0xc825,	// (0x00049dcd) media_player_t1

0xc833,	// (0x00049ddb) media_player_t2

0xc841,	// (0x00049de9) media_player_t3

0xc84f,	// (0x00049df7) media_player_t4

0xc85d,	// (0x00049e05) media_player_t5

0xc86b,	// (0x00049e13) media_player_t6

0xc879,	// (0x00049e21) media_player_t7

0x0006,

0xf5b0,	// (0x0004cb58) media_player_t

0xc887,	// (0x00049e2f) wait_bar_pane_cp02

0xf595,	// (0x0004cb3d) main_usb_pane_t

0x5146,	// (0x000426ee) cell_mp_pane

0xa909,	// (0x00047eb1) cell_mp_pane_g1

0xa560,	// (0x00047b08) grid_highlight_pane_cp06

0xaadb,	// (0x00048083) grid_skin_colour_pane

0xaae3,	// (0x0004808b) list_highlight_pane_cp03

0x30b3,	// (0x0004065b) skin_g1

0xaaeb,	// (0x00048093) skin_t1

0xaafa,	// (0x000480a2) skin_t2

0x0001,

0xf249,	// (0x0004c7f1) skin_t

0x30bd,	// (0x00040665) cell_skin_colour_pane_ParamLimits

0x30bd,	// (0x00040665) cell_skin_colour_pane

0xab08,	// (0x000480b0) cell_skin_colour_pane_g1

0x3141,	// (0x000406e9) call_video_g1_ParamLimits

0x3141,	// (0x000406e9) call_video_g1

0x3151,	// (0x000406f9) call_video_g2_ParamLimits

0x3151,	// (0x000406f9) call_video_g2

0x0001,

0xf24e,	// (0x0004c7f6) call_video_g_ParamLimits

0xf24e,	// (0x0004c7f6) call_video_g

0x31ab,	// (0x00040753) call_video_uplink_pane_cp1_ParamLimits

0x31ab,	// (0x00040753) call_video_uplink_pane_cp1

0xab1a,	// (0x000480c2) call_video_uplink_pane_cp2

0x3277,	// (0x0004081f) video_down_crop_pane_ParamLimits

0x3277,	// (0x0004081f) video_down_crop_pane

0x3375,	// (0x0004091d) video_down_pane_ParamLimits

0x3375,	// (0x0004091d) video_down_pane

0xab22,	// (0x000480ca) video_down_subqcif_pane_ParamLimits

0xab22,	// (0x000480ca) video_down_subqcif_pane

0xab3a,	// (0x000480e2) video_down_subqcif_pane_cp_ParamLimits

0xab3a,	// (0x000480e2) video_down_subqcif_pane_cp

0xab60,	// (0x00048108) im_reading_pane_ParamLimits

0xab60,	// (0x00048108) im_reading_pane

0x3495,	// (0x00040a3d) im_writing_pane_ParamLimits

0x3495,	// (0x00040a3d) im_writing_pane

0x34b3,	// (0x00040a5b) im_reading_pane_t1

0xab7a,	// (0x00048122) list_im_pane

0xab8b,	// (0x00048133) scroll_pane_cp07

0x3507,	// (0x00040aaf) im_writing_pane_t1_ParamLimits

0x3507,	// (0x00040aaf) im_writing_pane_t1

0xaba4,	// (0x0004814c) im_writing_pane_t2_ParamLimits

0xaba4,	// (0x0004814c) im_writing_pane_t2

0x0001,

0xf258,	// (0x0004c800) im_writing_pane_t_ParamLimits

0xf258,	// (0x0004c800) im_writing_pane_t

0xa560,	// (0x00047b08) input_focus_pane_cp04

0xa560,	// (0x00047b08) input_focus_pane_cp05

0x351c,	// (0x00040ac4) list_im_single_pane_ParamLimits

0x351c,	// (0x00040ac4) list_im_single_pane

0x3540,	// (0x00040ae8) list_single_im_pane_t1

0x510a,	// (0x000426b2) blid_accuracy_pane

0x5112,	// (0x000426ba) blid_compass_pane

0x511c,	// (0x000426c4) main_location_t1

0x512a,	// (0x000426d2) main_location_t2

0x5138,	// (0x000426e0) main_location_t3

0x0002,

0xf5bf,	// (0x0004cb67) main_location_t

0xa560,	// (0x00047b08) aid_levels_location

0xa909,	// (0x00047eb1) blid_accuracy_pane_g1

0xa909,	// (0x00047eb1) blid_accuracy_pane_g2

0x0001,

0xf2ba,	// (0x0004c862) blid_accuracy_pane_g

0xabec,	// (0x00048194) wml_content_pane

0xac2a,	// (0x000481d2) wml_button_pane_ParamLimits

0xac2a,	// (0x000481d2) wml_button_pane

0x354f,	// (0x00040af7) wml_list_single_large_pane_ParamLimits

0x354f,	// (0x00040af7) wml_list_single_large_pane

0x3579,	// (0x00040b21) wml_list_single_medium_pane_ParamLimits

0x3579,	// (0x00040b21) wml_list_single_medium_pane

0x35aa,	// (0x00040b52) wml_list_single_small_pane_ParamLimits

0x35aa,	// (0x00040b52) wml_list_single_small_pane

0xac3e,	// (0x000481e6) wml_selection_box_pane_ParamLimits

0xac3e,	// (0x000481e6) wml_selection_box_pane

0xac51,	// (0x000481f9) wml_list_single_pane_t1

0xac60,	// (0x00048208) wml_list_single_medium_pane_t1

0xac6f,	// (0x00048217) wml_list_single_large_pane_t1

0xac7e,	// (0x00048226) input_focus_pane_cp02_ParamLimits

0xac7e,	// (0x00048226) input_focus_pane_cp02

0xac91,	// (0x00048239) wml_selection_box_pane_g1

0xac9a,	// (0x00048242) wml_selection_box_pane_t1_ParamLimits

0xac9a,	// (0x00048242) wml_selection_box_pane_t1

0xa7ef,	// (0x00047d97) bg_wml_button_pane_ParamLimits

0xa7ef,	// (0x00047d97) bg_wml_button_pane

0xacb2,	// (0x0004825a) wml_button_pane_g1

0xacba,	// (0x00048262) wml_button_pane_t1

0xacb2,	// (0x0004825a) wml_button_bg_pane_g1

0xacca,	// (0x00048272) wml_button_bg_pane_g2

0xacd2,	// (0x0004827a) wml_button_bg_pane_g3

0xacda,	// (0x00048282) wml_button_bg_pane_g4

0xace2,	// (0x0004828a) wml_button_bg_pane_g5

0xacea,	// (0x00048292) wml_button_bg_pane_g6

0xacf2,	// (0x0004829a) wml_button_bg_pane_g7

0xacfa,	// (0x000482a2) wml_button_bg_pane_g8

0xad02,	// (0x000482aa) wml_button_bg_pane_g9

0x0008,

0xf25d,	// (0x0004c805) wml_button_bg_pane_g

0x35e4,	// (0x00040b8c) bg_list_pane_cp02

0xad0a,	// (0x000482b2) mce_header_pane_ParamLimits

0xad0a,	// (0x000482b2) mce_header_pane

0xad20,	// (0x000482c8) mce_icon_pane

0xad20,	// (0x000482c8) mce_image_pane

0xad29,	// (0x000482d1) mce_text_pane_ParamLimits

0xad29,	// (0x000482d1) mce_text_pane

0x35ee,	// (0x00040b96) scroll_pane_cp03

0xac22,	// (0x000481ca) scroll_pane_cp04

0xad3c,	// (0x000482e4) scroll_pane_cp05_ParamLimits

0xad3c,	// (0x000482e4) scroll_pane_cp05

0x35f8,	// (0x00040ba0) mce_header_field_pane_ParamLimits

0x35f8,	// (0x00040ba0) mce_header_field_pane

0x3618,	// (0x00040bc0) mce_header_field_pane_2_ParamLimits

0x3618,	// (0x00040bc0) mce_header_field_pane_2

0x362e,	// (0x00040bd6) mce_header_field_pane_3

0x3636,	// (0x00040bde) list_single_mce_message_pane_ParamLimits

0x3636,	// (0x00040bde) list_single_mce_message_pane

0x3661,	// (0x00040c09) list_single_mce_smart_pane_ParamLimits

0x3661,	// (0x00040c09) list_single_mce_smart_pane

0xad48,	// (0x000482f0) input_focus_pane_cp03

0xad51,	// (0x000482f9) list_header_data_pane

0x3697,	// (0x00040c3f) mce_header_field_pane_t1

0x36a5,	// (0x00040c4d) list_single_mce_header_pane_ParamLimits

0x36a5,	// (0x00040c4d) list_single_mce_header_pane

0xad59,	// (0x00048301) list_single_mce_header_pane_t1

0xad68,	// (0x00048310) list_single_mce_message_pane_g1

0xad70,	// (0x00048318) list_single_mce_message_pane_t1

0x36f7,	// (0x00040c9f) bg_cale_heading_pane_cp01_ParamLimits

0x36f7,	// (0x00040c9f) bg_cale_heading_pane_cp01

0xad7e,	// (0x00048326) bg_cale_pane_cp02_ParamLimits

0xad7e,	// (0x00048326) bg_cale_pane_cp02

0x3745,	// (0x00040ced) cale_month_corner_pane

0x3764,	// (0x00040d0c) cale_month_day_heading_pane_ParamLimits

0x3764,	// (0x00040d0c) cale_month_day_heading_pane

0x37ca,	// (0x00040d72) cale_month_pane_g1_ParamLimits

0x37ca,	// (0x00040d72) cale_month_pane_g1

0x380d,	// (0x00040db5) cale_month_pane_g2_ParamLimits

0x380d,	// (0x00040db5) cale_month_pane_g2

0x3845,	// (0x00040ded) cale_month_pane_g3_ParamLimits

0x3845,	// (0x00040ded) cale_month_pane_g3

0x3891,	// (0x00040e39) cale_month_pane_g4_ParamLimits

0x3891,	// (0x00040e39) cale_month_pane_g4

0x38dd,	// (0x00040e85) cale_month_pane_g5_ParamLimits

0x38dd,	// (0x00040e85) cale_month_pane_g5

0x3929,	// (0x00040ed1) cale_month_pane_g6_ParamLimits

0x3929,	// (0x00040ed1) cale_month_pane_g6

0x3975,	// (0x00040f1d) cale_month_pane_g7_ParamLimits

0x3975,	// (0x00040f1d) cale_month_pane_g7

0x39d9,	// (0x00040f81) cale_month_pane_g8_ParamLimits

0x39d9,	// (0x00040f81) cale_month_pane_g8

0x3a3d,	// (0x00040fe5) cale_month_pane_g9_ParamLimits

0x3a3d,	// (0x00040fe5) cale_month_pane_g9

0x3a9b,	// (0x00041043) cale_month_pane_g10_ParamLimits

0x3a9b,	// (0x00041043) cale_month_pane_g10

0x3af7,	// (0x0004109f) cale_month_pane_g11_ParamLimits

0x3af7,	// (0x0004109f) cale_month_pane_g11

0x3b4b,	// (0x000410f3) cale_month_pane_g12_ParamLimits

0x3b4b,	// (0x000410f3) cale_month_pane_g12

0x3ba1,	// (0x00041149) cale_month_pane_g13_ParamLimits

0x3ba1,	// (0x00041149) cale_month_pane_g13

0x000c,

0xf270,	// (0x0004c818) cale_month_pane_g_ParamLimits

0xf270,	// (0x0004c818) cale_month_pane_g

0x3bf7,	// (0x0004119f) cale_month_week_pane

0x3c1b,	// (0x000411c3) grid_cale_month_pane_ParamLimits

0x3c1b,	// (0x000411c3) grid_cale_month_pane

0x3c74,	// (0x0004121c) cale_month_day_heading_pane_t1

0x3cfa,	// (0x000412a2) cale_month_day_heading_pane_t2

0x3d73,	// (0x0004131b) cale_month_day_heading_pane_t3

0x3dec,	// (0x00041394) cale_month_day_heading_pane_t4

0x3e65,	// (0x0004140d) cale_month_day_heading_pane_t5

0x3ede,	// (0x00041486) cale_month_day_heading_pane_t6

0x3f57,	// (0x000414ff) cale_month_day_heading_pane_t7

0x0006,

0xf28b,	// (0x0004c833) cale_month_day_heading_pane_t

0xaa1e,	// (0x00047fc6) bg_cale_side_pane_cp01

0x3fe8,	// (0x00041590) cale_month_week_pane_t1

0x4001,	// (0x000415a9) cale_month_week_pane_t2

0x401a,	// (0x000415c2) cale_month_week_pane_t3

0x4033,	// (0x000415db) cale_month_week_pane_t4

0x404c,	// (0x000415f4) cale_month_week_pane_t5

0x406d,	// (0x00041615) cale_month_week_pane_t6

0x0005,

0xf29a,	// (0x0004c842) cale_month_week_pane_t

0x408e,	// (0x00041636) cell_cale_month_pane_ParamLimits

0x408e,	// (0x00041636) cell_cale_month_pane

0x41b0,	// (0x00041758) cell_cale_month_pane_g1

0x41bc,	// (0x00041764) cell_cale_month_pane_t1_ParamLimits

0x41bc,	// (0x00041764) cell_cale_month_pane_t1

0xaa2c,	// (0x00047fd4) grid_highlight_pane_cp08

0xa909,	// (0x00047eb1) main_smil_g1

0x41e8,	// (0x00041790) smil_status_pane

0xadbd,	// (0x00048365) smil_text_pane

0xc72d,	// (0x00049cd5) bg_popup_call3_rect_pane_g8

0xc735,	// (0x00049cdd) bg_popup_call3_rect_pane_g9

0x0008,

0xf553,	// (0x0004cafb) bg_popup_call3_rect_pane_g

0xc97c,	// (0x00049f24) smil_status_volume_pane_g1

0xadc7,	// (0x0004836f) smil_status_pane_t1

0x5534,	// (0x00042adc) volume_smil_pane

0xadde,	// (0x00048386) list_smil_text_pane

0x41fb,	// (0x000417a3) scroll_pane_cp011

0x4206,	// (0x000417ae) smil_text_list_pane_t1_ParamLimits

0x4206,	// (0x000417ae) smil_text_list_pane_t1

0x427e,	// (0x00041826) aid_volume_smil_ParamLimits

0x427e,	// (0x00041826) aid_volume_smil

0xa909,	// (0x00047eb1) smil_volume_pane_g1

0xa909,	// (0x00047eb1) smil_volume_pane_g2

0x0001,

0xf2ba,	// (0x0004c862) smil_volume_pane_g

0x298f,	// (0x0003ff37) listscroll_cale_day_pane

0xade8,	// (0x00048390) bg_cale_pane

0xae00,	// (0x000483a8) list_cale_pane

0xae23,	// (0x000483cb) scroll_pane_cp09

0xae3d,	// (0x000483e5) cale_bg_pane_g1

0xae45,	// (0x000483ed) cale_bg_pane_g2

0xae4d,	// (0x000483f5) cale_bg_pane_g3

0xae55,	// (0x000483fd) cale_bg_pane_g4

0xae5d,	// (0x00048405) cale_bg_pane_g5

0xae65,	// (0x0004840d) cale_bg_pane_g6

0xae6d,	// (0x00048415) cale_bg_pane_g7

0xae75,	// (0x0004841d) cale_bg_pane_g8

0xae7d,	// (0x00048425) cale_bg_pane_g9

0x0008,

0xf2bf,	// (0x0004c867) cale_bg_pane_g

0x42a8,	// (0x00041850) list_cale_time_pane_ParamLimits

0x42a8,	// (0x00041850) list_cale_time_pane

0xae85,	// (0x0004842d) list_cale_time_pane_g1_ParamLimits

0xae85,	// (0x0004842d) list_cale_time_pane_g1

0xae91,	// (0x00048439) list_cale_time_pane_g2_ParamLimits

0xae91,	// (0x00048439) list_cale_time_pane_g2

0x42ca,	// (0x00041872) list_cale_time_pane_g3_ParamLimits

0x42ca,	// (0x00041872) list_cale_time_pane_g3

0x42d8,	// (0x00041880) list_cale_time_pane_g4_ParamLimits

0x42d8,	// (0x00041880) list_cale_time_pane_g4

0x42e6,	// (0x0004188e) list_cale_time_pane_g5_ParamLimits

0x42e6,	// (0x0004188e) list_cale_time_pane_g5

0x0005,

0xf2d2,	// (0x0004c87a) list_cale_time_pane_g_ParamLimits

0xf2d2,	// (0x0004c87a) list_cale_time_pane_g

0xaeab,	// (0x00048453) list_cale_time_pane_t1_ParamLimits

0xaeab,	// (0x00048453) list_cale_time_pane_t1

0xaed3,	// (0x0004847b) list_cale_time_pane_t2_ParamLimits

0xaed3,	// (0x0004847b) list_cale_time_pane_t2

0x45ad,	// (0x00041b55) aid_blid_cardinal_pane

0x45ef,	// (0x00041b97) compass_pane_t4

0xaefb,	// (0x000484a3) list_cale_time_pane_t4_ParamLimits

0xaefb,	// (0x000484a3) list_cale_time_pane_t4

0x45fd,	// (0x00041ba5) compass_pane_t5

0x460d,	// (0x00041bb5) compass_pane_t6

0x461b,	// (0x00041bc3) compass_pane_t7

0xb39e,	// (0x00048946) navi_pane_cc_t1

0xb5a3,	// (0x00048b4b) aid_phob_thumbnail_center_pane

0x4c10,	// (0x000421b8) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2df,	// (0x0004c887) list_cale_time_pane_t_ParamLimits

0xf2df,	// (0x0004c887) list_cale_time_pane_t

0xa1b7,	// (0x0004775f) bg_popup_window_pane_cp02_ParamLimits

0xa1b7,	// (0x0004775f) bg_popup_window_pane_cp02

0xaf23,	// (0x000484cb) heading_pane_cp01_ParamLimits

0xaf23,	// (0x000484cb) heading_pane_cp01

0xaf2f,	// (0x000484d7) loc_req_pane_ParamLimits

0xaf2f,	// (0x000484d7) loc_req_pane

0xaf3f,	// (0x000484e7) loc_type_pane_ParamLimits

0xaf3f,	// (0x000484e7) loc_type_pane

0xaf51,	// (0x000484f9) loc_type_pane_t1_ParamLimits

0xaf51,	// (0x000484f9) loc_type_pane_t1

0xaf63,	// (0x0004850b) loc_type_pane_t2_ParamLimits

0xaf63,	// (0x0004850b) loc_type_pane_t2

0xaf75,	// (0x0004851d) loc_type_pane_t3_ParamLimits

0xaf75,	// (0x0004851d) loc_type_pane_t3

0x0002,

0xf2e6,	// (0x0004c88e) loc_type_pane_t_ParamLimits

0xf2e6,	// (0x0004c88e) loc_type_pane_t

0xaf87,	// (0x0004852f) list_loc_req_pane

0xaf91,	// (0x00048539) scroll_pane_cp012

0x42f4,	// (0x0004189c) list_single_loc_request_popup_menu_pane_ParamLimits

0x42f4,	// (0x0004189c) list_single_loc_request_popup_menu_pane

0xaf9c,	// (0x00048544) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xaf9c,	// (0x00048544) list_single_loc_request_popup_menu_pane_g1

0xafa8,	// (0x00048550) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xafa8,	// (0x00048550) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf2ed,	// (0x0004c895) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf2ed,	// (0x0004c895) list_single_loc_request_popup_menu_pane_g

0xafb4,	// (0x0004855c) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xafb4,	// (0x0004855c) list_single_loc_request_popup_menu_pane_t1

0x4306,	// (0x000418ae) bg_popup_window_pane_cp03_ParamLimits

0x4306,	// (0x000418ae) bg_popup_window_pane_cp03

0x4314,	// (0x000418bc) heading_loc_req_pane_ParamLimits

0x4314,	// (0x000418bc) heading_loc_req_pane

0x4320,	// (0x000418c8) popup_dyc_status_message_window_g1_ParamLimits

0x4320,	// (0x000418c8) popup_dyc_status_message_window_g1

0x432c,	// (0x000418d4) popup_dyc_status_message_window_t1_ParamLimits

0x432c,	// (0x000418d4) popup_dyc_status_message_window_t1

0x433e,	// (0x000418e6) popup_dyc_status_message_window_t2_ParamLimits

0x433e,	// (0x000418e6) popup_dyc_status_message_window_t2

0x4350,	// (0x000418f8) popup_dyc_status_message_window_t3_ParamLimits

0x4350,	// (0x000418f8) popup_dyc_status_message_window_t3

0x0002,

0xf2f2,	// (0x0004c89a) popup_dyc_status_message_window_t_ParamLimits

0xf2f2,	// (0x0004c89a) popup_dyc_status_message_window_t

0xa560,	// (0x00047b08) bg_heading_pane_cp01

0xafca,	// (0x00048572) heading_loc_req_pane_g1

0xafd2,	// (0x0004857a) heading_loc_req_pane_g2

0xafda,	// (0x00048582) heading_loc_req_pane_g3

0x0002,

0xf2f9,	// (0x0004c8a1) heading_loc_req_pane_g

0xafe2,	// (0x0004858a) heading_loc_req_pane_t1

0xaff1,	// (0x00048599) bg_popup_sub_pane_cp01_ParamLimits

0xaff1,	// (0x00048599) bg_popup_sub_pane_cp01

0xafff,	// (0x000485a7) popup_cale_events_window_g1_ParamLimits

0xafff,	// (0x000485a7) popup_cale_events_window_g1

0xb01f,	// (0x000485c7) popup_cale_events_window_g2_ParamLimits

0xb01f,	// (0x000485c7) popup_cale_events_window_g2

0x0001,

0xf32d,	// (0x0004c8d5) popup_cale_events_window_g_ParamLimits

0xf32d,	// (0x0004c8d5) popup_cale_events_window_g

0xb03f,	// (0x000485e7) popup_cale_events_window_t1_ParamLimits

0xb03f,	// (0x000485e7) popup_cale_events_window_t1

0xb051,	// (0x000485f9) popup_cale_events_window_t2_ParamLimits

0xb051,	// (0x000485f9) popup_cale_events_window_t2

0xb08f,	// (0x00048637) popup_cale_events_window_t3_ParamLimits

0xb08f,	// (0x00048637) popup_cale_events_window_t3

0xb0c9,	// (0x00048671) popup_cale_events_window_t4_ParamLimits

0xb0c9,	// (0x00048671) popup_cale_events_window_t4

0x0003,

0xf332,	// (0x0004c8da) popup_cale_events_window_t_ParamLimits

0xf332,	// (0x0004c8da) popup_cale_events_window_t

0x437a,	// (0x00041922) call_type_pane

0xb4ae,	// (0x00048a56) popup_call_status_window_g1

0x4386,	// (0x0004192e) popup_call_status_window_g2

0x4392,	// (0x0004193a) popup_call_status_window_g3

0x0002,

0xf33b,	// (0x0004c8e3) popup_call_status_window_g

0xb0ff,	// (0x000486a7) call_type_pane_g1

0xb108,	// (0x000486b0) call_type_pane_g2

0x0001,

0xf342,	// (0x0004c8ea) call_type_pane_g

0xa560,	// (0x00047b08) bg_popup_sub_pane_cp02

0xb111,	// (0x000486b9) listscroll_popup_wml_pane

0xb119,	// (0x000486c1) list_wml_pane

0xb123,	// (0x000486cb) scroll_pane_cp013

0xb12e,	// (0x000486d6) list_single_graphic_popup_wml_pane_ParamLimits

0xb12e,	// (0x000486d6) list_single_graphic_popup_wml_pane

0xa909,	// (0x00047eb1) list_single_graphic_popup_wml_pane_g1

0xb142,	// (0x000486ea) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf347,	// (0x0004c8ef) list_single_graphic_popup_wml_pane_g

0xb14a,	// (0x000486f2) list_single_graphic_popup_wml_pane_t1

0xb160,	// (0x00048708) aid_call_pane

0xa7e7,	// (0x00047d8f) popup_clock_analogue_window_g1

0xa7e7,	// (0x00047d8f) popup_clock_analogue_window_g2

0x439e,	// (0x00041946) popup_clock_analogue_window_g3

0x439e,	// (0x00041946) popup_clock_analogue_window_g4

0xa909,	// (0x00047eb1) popup_clock_analogue_window_g5

0x0004,

0xf34c,	// (0x0004c8f4) popup_clock_analogue_window_g

0x43a6,	// (0x0004194e) popup_clock_analogue_window_t1

0x43b4,	// (0x0004195c) clock_digital_number_pane_ParamLimits

0x43b4,	// (0x0004195c) clock_digital_number_pane

0x43c0,	// (0x00041968) clock_digital_number_pane_cp02_ParamLimits

0x43c0,	// (0x00041968) clock_digital_number_pane_cp02

0x43cc,	// (0x00041974) clock_digital_number_pane_cp03_ParamLimits

0x43cc,	// (0x00041974) clock_digital_number_pane_cp03

0x43d8,	// (0x00041980) clock_digital_number_pane_cp04_ParamLimits

0x43d8,	// (0x00041980) clock_digital_number_pane_cp04

0x43e8,	// (0x00041990) clock_digital_separator_pane_ParamLimits

0x43e8,	// (0x00041990) clock_digital_separator_pane

0x43f4,	// (0x0004199c) popup_clock_digital_window_t1

0xa909,	// (0x00047eb1) clock_digital_number_pane_g1

0xa909,	// (0x00047eb1) clock_digital_number_pane_g2

0x0001,

0xf2ba,	// (0x0004c862) clock_digital_number_pane_g

0xa909,	// (0x00047eb1) clock_digital_separator_pane_g1

0xa909,	// (0x00047eb1) clock_digital_separator_pane_g2

0x0001,

0xf2ba,	// (0x0004c862) clock_digital_separator_pane_g

0xa560,	// (0x00047b08) bg_popup_window_pane_cp04

0xb168,	// (0x00048710) heading_pane_cp03

0xb170,	// (0x00048718) listscroll_popup_gms_pane

0xb178,	// (0x00048720) grid_large_graphic_popup_pane

0xb182,	// (0x0004872a) listscroll_popup_gms_pane_g1

0xb18a,	// (0x00048732) listscroll_popup_gms_pane_g2

0x0001,

0xf357,	// (0x0004c8ff) listscroll_popup_gms_pane_g

0xac22,	// (0x000481ca) scroll_pane_cp014

0x4411,	// (0x000419b9) cell_large_graphic_popup_pane_ParamLimits

0x4411,	// (0x000419b9) cell_large_graphic_popup_pane

0x4429,	// (0x000419d1) cell_large_graphic_popup_pane_g1_ParamLimits

0x4429,	// (0x000419d1) cell_large_graphic_popup_pane_g1

0xb192,	// (0x0004873a) cell_large_graphic_popup_pane_g2_ParamLimits

0xb192,	// (0x0004873a) cell_large_graphic_popup_pane_g2

0xb19e,	// (0x00048746) cell_large_graphic_popup_pane_g3_ParamLimits

0xb19e,	// (0x00048746) cell_large_graphic_popup_pane_g3

0xb1ab,	// (0x00048753) cell_large_graphic_popup_pane_g4_ParamLimits

0xb1ab,	// (0x00048753) cell_large_graphic_popup_pane_g4

0x0003,

0xf35c,	// (0x0004c904) cell_large_graphic_popup_pane_g_ParamLimits

0xf35c,	// (0x0004c904) cell_large_graphic_popup_pane_g

0xb1bb,	// (0x00048763) grid_highlight_pane_cp010

0xa909,	// (0x00047eb1) bg_popup_call_pane_g1

0xb1c5,	// (0x0004876d) list_single_graphic_popup_conf_pane_ParamLimits

0xb1c5,	// (0x0004876d) list_single_graphic_popup_conf_pane

0xb1d8,	// (0x00048780) list_highlight_pane_cp01

0xb1e1,	// (0x00048789) list_single_graphic_popup_conf_pane_g1

0xb1e9,	// (0x00048791) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf365,	// (0x0004c90d) list_single_graphic_popup_conf_pane_g

0xb1f1,	// (0x00048799) list_single_graphic_popup_conf_pane_t1

0xb1ff,	// (0x000487a7) linegrid_cams_pane_g1

0x4435,	// (0x000419dd) linegrid_cams_pane_g2

0xaa5f,	// (0x00048007) linegrid_cams_pane_g3

0xb208,	// (0x000487b0) linegrid_cams_pane_g4

0x443e,	// (0x000419e6) linegrid_cams_pane_g5

0x4447,	// (0x000419ef) linegrid_cams_pane_g6

0xaa68,	// (0x00048010) linegrid_cams_pane_g7

0x0006,

0xf36a,	// (0x0004c912) linegrid_cams_pane_g

0xb211,	// (0x000487b9) popup_clock_analogue_window

0xb211,	// (0x000487b9) popup_clock_digital_window

0xa560,	// (0x00047b08) popup_phob_thumbnail_window

0xa909,	// (0x00047eb1) call_video_uplink_pane_g1

0xb21a,	// (0x000487c2) call_video_uplink_pane_g2

0x0001,

0xf379,	// (0x0004c921) call_video_uplink_pane_g

0xb222,	// (0x000487ca) video_uplink_pane

0xb22a,	// (0x000487d2) mce_image_pane_g1

0x4450,	// (0x000419f8) mce_image_pane_g2

0x445a,	// (0x00041a02) mce_image_pane_g3

0x4462,	// (0x00041a0a) mce_image_pane_g4

0x446a,	// (0x00041a12) mce_image_pane_g5

0x0004,

0xf37e,	// (0x0004c926) mce_image_pane_g

0xb234,	// (0x000487dc) control_top_pane_stacon_cp01_ParamLimits

0xb234,	// (0x000487dc) control_top_pane_stacon_cp01

0xb248,	// (0x000487f0) uni_indicator_pane_stacon_cp01_ParamLimits

0xb248,	// (0x000487f0) uni_indicator_pane_stacon_cp01

0xb259,	// (0x00048801) bg_popup_sub_pane_cp03

0xb263,	// (0x0004880b) chi_dic_find_pane

0x4472,	// (0x00041a1a) listscroll_chi_dic_pane

0xb26b,	// (0x00048813) main_pane_chidic_g1

0xb273,	// (0x0004881b) chi_dic_find_pane_t1

0xb281,	// (0x00048829) find_chidic_pane

0xb28a,	// (0x00048832) chi_dic_list_pane_ParamLimits

0xb28a,	// (0x00048832) chi_dic_list_pane

0xb29b,	// (0x00048843) scroll_pane_cp020

0xb2a3,	// (0x0004884b) find_chidic_pane_t1

0xa560,	// (0x00047b08) input_focus_pane_cp06

0x4486,	// (0x00041a2e) list_chi_dic_pane_ParamLimits

0x4486,	// (0x00041a2e) list_chi_dic_pane

0x44a0,	// (0x00041a48) list_chi_dic_pane_t1_ParamLimits

0x44a0,	// (0x00041a48) list_chi_dic_pane_t1

0xa560,	// (0x00047b08) list_highlight_pane_cp020

0xb2b2,	// (0x0004885a) bg_cale_heading_pane_g1

0x44b3,	// (0x00041a5b) bg_cale_heading_pane_g2

0x44bb,	// (0x00041a63) bg_cale_heading_pane_g3

0x44c3,	// (0x00041a6b) bg_cale_heading_pane_g4

0x44cd,	// (0x00041a75) bg_cale_heading_pane_g5

0x44d7,	// (0x00041a7f) bg_cale_heading_pane_g6

0x44df,	// (0x00041a87) bg_cale_heading_pane_g7

0x44e7,	// (0x00041a8f) bg_cale_heading_pane_g8

0x44f1,	// (0x00041a99) bg_cale_heading_pane_g9

0x0008,

0xf389,	// (0x0004c931) bg_cale_heading_pane_g

0xb2b2,	// (0x0004885a) bg_cale_side_pane_g1

0x44fb,	// (0x00041aa3) bg_cale_side_pane_g2

0x4505,	// (0x00041aad) bg_cale_side_pane_g3

0x450f,	// (0x00041ab7) bg_cale_side_pane_g4

0x4519,	// (0x00041ac1) bg_cale_side_pane_g5

0x4523,	// (0x00041acb) bg_cale_side_pane_g6

0x452d,	// (0x00041ad5) bg_cale_side_pane_g7

0x4537,	// (0x00041adf) bg_cale_side_pane_g8

0x453f,	// (0x00041ae7) bg_cale_side_pane_g9

0x0008,

0xf39c,	// (0x0004c944) bg_cale_side_pane_g

0x4547,	// (0x00041aef) popup_call_status_window_ParamLimits

0x4547,	// (0x00041aef) popup_call_status_window

0xb2ba,	// (0x00048862) stacon_top_pane

0xb2c2,	// (0x0004886a) status_pane_ParamLimits

0xb2c2,	// (0x0004886a) status_pane

0xb2d7,	// (0x0004887f) status_small_pane

0xb2df,	// (0x00048887) control_pane

0xa560,	// (0x00047b08) stacon_bottom_pane

0xb2e7,	// (0x0004888f) list_single_mce_smart_pane_t1_ParamLimits

0xb2e7,	// (0x0004888f) list_single_mce_smart_pane_t1

0xb2fa,	// (0x000488a2) list_single_mce_smart_pane_t2_ParamLimits

0xb2fa,	// (0x000488a2) list_single_mce_smart_pane_t2

0x0001,

0xf3af,	// (0x0004c957) list_single_mce_smart_pane_t_ParamLimits

0xf3af,	// (0x0004c957) list_single_mce_smart_pane_t

0x4553,	// (0x00041afb) compass_pane

0x455f,	// (0x00041b07) main_location2_pane_t1

0x4573,	// (0x00041b1b) main_location2_pane_t2

0x4587,	// (0x00041b2f) main_location2_pane_t3

0x0003,

0xf3b4,	// (0x0004c95c) main_location2_pane_t

0xb319,	// (0x000488c1) compass_pane_g1_ParamLimits

0xb319,	// (0x000488c1) compass_pane_g1

0x45d1,	// (0x00041b79) compass_pane_t1

0x45e0,	// (0x00041b88) compass_pane_t2

0x0005,

0xf3bd,	// (0x0004c965) compass_pane_t

0x462b,	// (0x00041bd3) text_secondary_cp61

0xb395,	// (0x0004893d) navi_pane_cams_g5

0xb411,	// (0x000489b9) navi_pane_im_t1

0xb41f,	// (0x000489c7) navi_pane_mp_g1_ParamLimits

0xb41f,	// (0x000489c7) navi_pane_mp_g1

0xb433,	// (0x000489db) navi_pane_mp_g2_ParamLimits

0xb433,	// (0x000489db) navi_pane_mp_g2

0xb43f,	// (0x000489e7) navi_pane_mp_g3_ParamLimits

0xb43f,	// (0x000489e7) navi_pane_mp_g3

0x0002,

0xf3d1,	// (0x0004c979) navi_pane_mp_g_ParamLimits

0xf3d1,	// (0x0004c979) navi_pane_mp_g

0xb44b,	// (0x000489f3) navi_pane_mp_t1

0xb459,	// (0x00048a01) navi_pane_mp_t2

0x0002,

0xf3d8,	// (0x0004c980) navi_pane_mp_t

0xb4ec,	// (0x00048a94) navi_pane_vt_g1

0xb44b,	// (0x000489f3) navi_pane_vt_t1

0xb4f4,	// (0x00048a9c) navi_slider_pane

0xaa79,	// (0x00048021) zooming_pane

0xb504,	// (0x00048aac) navi_slider_pane_g1

0x4666,	// (0x00041c0e) navi_slider_pane_g2

0x0006,

0xf3df,	// (0x0004c987) navi_slider_pane_g

0xb528,	// (0x00048ad0) aid_levels_zoom

0xb530,	// (0x00048ad8) zooming_pane_g1

0xb538,	// (0x00048ae0) zooming_pane_g2

0xb538,	// (0x00048ae0) zooming_pane_g3

0x0002,

0xf3ee,	// (0x0004c996) zooming_pane_g

0xb540,	// (0x00048ae8) level_10_zoom

0xb549,	// (0x00048af1) level_11_zoom

0xb552,	// (0x00048afa) level_1_zoom

0xb55b,	// (0x00048b03) level_2_zoom

0xb564,	// (0x00048b0c) level_3_zoom

0xb56d,	// (0x00048b15) level_4_zoom

0xb576,	// (0x00048b1e) level_5_zoom

0xb57f,	// (0x00048b27) level_6_zoom

0xb588,	// (0x00048b30) level_7_zoom

0xb591,	// (0x00048b39) level_8_zoom

0xb59a,	// (0x00048b42) level_9_zoom

0xb5ab,	// (0x00048b53) popup_phob_thumbnail_window_g1

0xb5b3,	// (0x00048b5b) popup_phob_thumbnail_window_g2

0x0001,

0xf3f5,	// (0x0004c99d) popup_phob_thumbnail_window_g

0xc88f,	// (0x00049e37) level_1_location

0xc897,	// (0x00049e3f) level_2_location

0xc89f,	// (0x00049e47) level_3_location

0xc8a7,	// (0x00049e4f) level_4_location

0xaa79,	// (0x00048021) level_5_location

0x4678,	// (0x00041c20) mce_icon_pane_g1

0x4680,	// (0x00041c28) mce_icon_pane_g2

0x0001,

0xf3fa,	// (0x0004c9a2) mce_icon_pane_g

0x4688,	// (0x00041c30) main_mup_pane_g1_ParamLimits

0x4688,	// (0x00041c30) main_mup_pane_g1

0x46a0,	// (0x00041c48) main_mup_pane_g2_ParamLimits

0x46a0,	// (0x00041c48) main_mup_pane_g2

0x46bc,	// (0x00041c64) main_mup_pane_g3_ParamLimits

0x46bc,	// (0x00041c64) main_mup_pane_g3

0x46d8,	// (0x00041c80) main_mup_pane_g4_ParamLimits

0x46d8,	// (0x00041c80) main_mup_pane_g4

0x46f4,	// (0x00041c9c) main_mup_pane_g5_ParamLimits

0x46f4,	// (0x00041c9c) main_mup_pane_g5

0x4715,	// (0x00041cbd) main_mup_pane_g6_ParamLimits

0x4715,	// (0x00041cbd) main_mup_pane_g6

0x4731,	// (0x00041cd9) main_mup_pane_g7_ParamLimits

0x4731,	// (0x00041cd9) main_mup_pane_g7

0x474d,	// (0x00041cf5) main_mup_pane_g8_ParamLimits

0x474d,	// (0x00041cf5) main_mup_pane_g8

0x476d,	// (0x00041d15) main_mup_pane_g9_ParamLimits

0x476d,	// (0x00041d15) main_mup_pane_g9

0x478c,	// (0x00041d34) main_mup_pane_g10_ParamLimits

0x478c,	// (0x00041d34) main_mup_pane_g10

0x47ab,	// (0x00041d53) main_mup_pane_g11_ParamLimits

0x47ab,	// (0x00041d53) main_mup_pane_g11

0x47c3,	// (0x00041d6b) main_mup_pane_g12_ParamLimits

0x47c3,	// (0x00041d6b) main_mup_pane_g12

0x47d1,	// (0x00041d79) main_mup_pane_g13_ParamLimits

0x47d1,	// (0x00041d79) main_mup_pane_g13

0x000c,

0xf3ff,	// (0x0004c9a7) main_mup_pane_g_ParamLimits

0xf3ff,	// (0x0004c9a7) main_mup_pane_g

0x47e7,	// (0x00041d8f) main_mup_pane_t1_ParamLimits

0x47e7,	// (0x00041d8f) main_mup_pane_t1

0x4804,	// (0x00041dac) main_mup_pane_t2_ParamLimits

0x4804,	// (0x00041dac) main_mup_pane_t2

0x481e,	// (0x00041dc6) main_mup_pane_t3_ParamLimits

0x481e,	// (0x00041dc6) main_mup_pane_t3

0x4838,	// (0x00041de0) main_mup_pane_t4_ParamLimits

0x4838,	// (0x00041de0) main_mup_pane_t4

0x484a,	// (0x00041df2) main_mup_pane_t5_ParamLimits

0x484a,	// (0x00041df2) main_mup_pane_t5

0x485c,	// (0x00041e04) main_mup_pane_t6_ParamLimits

0x485c,	// (0x00041e04) main_mup_pane_t6

0x0005,

0xf41a,	// (0x0004c9c2) main_mup_pane_t_ParamLimits

0xf41a,	// (0x0004c9c2) main_mup_pane_t

0x4872,	// (0x00041e1a) mup_progress_pane_ParamLimits

0x4872,	// (0x00041e1a) mup_progress_pane

0x487e,	// (0x00041e26) mup_visualizer_pane_ParamLimits

0x487e,	// (0x00041e26) mup_visualizer_pane

0x48b8,	// (0x00041e60) mup_volume_pane_ParamLimits

0x48b8,	// (0x00041e60) mup_volume_pane

0xb4ae,	// (0x00048a56) mup_visualizer_pane_g1_ParamLimits

0xb4ae,	// (0x00048a56) mup_visualizer_pane_g1

0xb4ae,	// (0x00048a56) mup_visualizer_pane_g2_ParamLimits

0xb4ae,	// (0x00048a56) mup_visualizer_pane_g2

0xb319,	// (0x000488c1) mup_visualizer_pane_g3_ParamLimits

0xb319,	// (0x000488c1) mup_visualizer_pane_g3

0x0002,

0xf427,	// (0x0004c9cf) mup_visualizer_pane_g_ParamLimits

0xf427,	// (0x0004c9cf) mup_visualizer_pane_g

0xa909,	// (0x00047eb1) mup_volume_pane_g1

0xb5c3,	// (0x00048b6b) mup_volume_pane_g2

0x0001,

0xf42e,	// (0x0004c9d6) mup_volume_pane_g

0xa909,	// (0x00047eb1) mup_progress_pane_g1

0xb5cc,	// (0x00048b74) mup_progress_pane_g2

0xb5d5,	// (0x00048b7d) mup_progress_pane_g3

0x0002,

0xf433,	// (0x0004c9db) mup_progress_pane_g

0xa560,	// (0x00047b08) bg_popup_window_pane_cp05

0xb5de,	// (0x00048b86) heading_pane_cp02_ParamLimits

0xb5de,	// (0x00048b86) heading_pane_cp02

0xb5f8,	// (0x00048ba0) list_popup_blid_pane

0xb600,	// (0x00048ba8) list_blid_sat_info_pane_ParamLimits

0xb600,	// (0x00048ba8) list_blid_sat_info_pane

0xb613,	// (0x00048bbb) list_blid_sat_info_pane_g1

0xb61b,	// (0x00048bc3) list_blid_sat_info_pane_t1

0x49c5,	// (0x00041f6d) mup_equalizer_pane_ParamLimits

0x49c5,	// (0x00041f6d) mup_equalizer_pane

0x49e6,	// (0x00041f8e) mup_equalizer_pane_cp1_ParamLimits

0x49e6,	// (0x00041f8e) mup_equalizer_pane_cp1

0x4a07,	// (0x00041faf) mup_equalizer_pane_cp2_ParamLimits

0x4a07,	// (0x00041faf) mup_equalizer_pane_cp2

0x4a28,	// (0x00041fd0) mup_equalizer_pane_cp3_ParamLimits

0x4a28,	// (0x00041fd0) mup_equalizer_pane_cp3

0x4a49,	// (0x00041ff1) mup_equalizer_pane_cp4_ParamLimits

0x4a49,	// (0x00041ff1) mup_equalizer_pane_cp4

0x4a6a,	// (0x00042012) mup_equalizer_pane_cp5

0x4a80,	// (0x00042028) mup_equalizer_pane_cp6

0x4a98,	// (0x00042040) mup_equalizer_pane_cp7

0xc7ad,	// (0x00049d55) bg_popup_call_poc_act_pane_g9

0xc7b5,	// (0x00049d5d) bg_popup_call_poc_act_pane_g10

0xc7bd,	// (0x00049d65) bg_popup_call_poc_act_pane_g11

0x000a,

0xa7ef,	// (0x00047d97) mup_scale_pane

0xa909,	// (0x00047eb1) mup_scale_pane_g1

0xb629,	// (0x00048bd1) mup_scale_pane_g2

0x0006,

0xf44f,	// (0x0004c9f7) mup_scale_pane_g

0xb64d,	// (0x00048bf5) msg_data_pane

0xb655,	// (0x00048bfd) scroll_pane_cp017

0x0f51,	// (0x0003e4f9) bg_list_pane_cp04_ParamLimits

0x0f51,	// (0x0003e4f9) bg_list_pane_cp04

0xb65d,	// (0x00048c05) msg_data_pane_g1

0x4ac2,	// (0x0004206a) msg_data_pane_g2

0x4acc,	// (0x00042074) msg_data_pane_g3

0x4ad4,	// (0x0004207c) msg_data_pane_g4

0x4adc,	// (0x00042084) msg_data_pane_g5

0x4ae4,	// (0x0004208c) msg_data_pane_g6

0x4aec,	// (0x00042094) msg_data_pane_g7

0x0006,

0xf45e,	// (0x0004ca06) msg_data_pane_g

0x0f75,	// (0x0003e51d) msg_text_pane_ParamLimits

0x0f75,	// (0x0003e51d) msg_text_pane

0x4af4,	// (0x0004209c) qrid_highlight_pane_cp011_ParamLimits

0x4af4,	// (0x0004209c) qrid_highlight_pane_cp011

0xa560,	// (0x00047b08) msg_body_pane

0xa560,	// (0x00047b08) msg_header_pane

0xb66e,	// (0x00048c16) input_focus_pane_cp07

0x0fd2,	// (0x0003e57a) msg_header_pane_t1_ParamLimits

0x0fd2,	// (0x0003e57a) msg_header_pane_t1

0x0fe4,	// (0x0003e58c) msg_header_pane_t2_ParamLimits

0x0fe4,	// (0x0003e58c) msg_header_pane_t2

0x0001,

0xf472,	// (0x0004ca1a) msg_header_pane_t_ParamLimits

0xf472,	// (0x0004ca1a) msg_header_pane_t

0xb683,	// (0x00048c2b) msg_body_pane_g1

0x0ff6,	// (0x0003e59e) msg_body_pane_t1_ParamLimits

0x0ff6,	// (0x0003e59e) msg_body_pane_t1

0x1027,	// (0x0003e5cf) msg_body_pane_t2_ParamLimits

0x1027,	// (0x0003e5cf) msg_body_pane_t2

0x1039,	// (0x0003e5e1) msg_body_pane_t3_ParamLimits

0x1039,	// (0x0003e5e1) msg_body_pane_t3

0x0002,

0xf477,	// (0x0004ca1f) msg_body_pane_t_ParamLimits

0xf477,	// (0x0004ca1f) msg_body_pane_t

0x4b60,	// (0x00042108) main_viewer_pane_g1_ParamLimits

0x4b60,	// (0x00042108) main_viewer_pane_g1

0x4b6c,	// (0x00042114) main_viewer_pane_g2_ParamLimits

0x4b6c,	// (0x00042114) main_viewer_pane_g2

0x4b78,	// (0x00042120) main_viewer_pane_g3_ParamLimits

0x4b78,	// (0x00042120) main_viewer_pane_g3

0x4b89,	// (0x00042131) main_viewer_pane_g4_ParamLimits

0x4b89,	// (0x00042131) main_viewer_pane_g4

0x4b9a,	// (0x00042142) main_viewer_pane_g5_ParamLimits

0x4b9a,	// (0x00042142) main_viewer_pane_g5

0x4b9a,	// (0x00042142) main_viewer_pane_g7_ParamLimits

0x4b9a,	// (0x00042142) main_viewer_pane_g7

0x4bac,	// (0x00042154) main_viewer_pane_g8_ParamLimits

0x4bac,	// (0x00042154) main_viewer_pane_g8

0x0007,

0xf487,	// (0x0004ca2f) main_viewer_pane_g_ParamLimits

0xf487,	// (0x0004ca2f) main_viewer_pane_g

0xb68b,	// (0x00048c33) viewer_content_pane_ParamLimits

0xb68b,	// (0x00048c33) viewer_content_pane

0x4be4,	// (0x0004218c) main_postcard_pane_g1_ParamLimits

0x4be4,	// (0x0004218c) main_postcard_pane_g1

0x4bf2,	// (0x0004219a) main_postcard_pane_g2_ParamLimits

0x4bf2,	// (0x0004219a) main_postcard_pane_g2

0x4c00,	// (0x000421a8) main_postcard_pane_g3_ParamLimits

0x4c00,	// (0x000421a8) main_postcard_pane_g3

0x0005,

0xf498,	// (0x0004ca40) main_postcard_pane_g_ParamLimits

0xf498,	// (0x0004ca40) main_postcard_pane_g

0x4c10,	// (0x000421b8) main_postcard_pane_g4

0xc98f,	// (0x00049f37) smil_status_volume_pane_g2

0x4c3c,	// (0x000421e4) postcard_pane_ParamLimits

0x4c3c,	// (0x000421e4) postcard_pane

0xb4ae,	// (0x00048a56) postcard_pane_g1_ParamLimits

0xb4ae,	// (0x00048a56) postcard_pane_g1

0x4c6e,	// (0x00042216) postcard_pane_g2_ParamLimits

0x4c6e,	// (0x00042216) postcard_pane_g2

0x4c7a,	// (0x00042222) postcard_pane_g3_ParamLimits

0x4c7a,	// (0x00042222) postcard_pane_g3

0xb699,	// (0x00048c41) postcard_pane_g4_ParamLimits

0xb699,	// (0x00048c41) postcard_pane_g4

0x4c86,	// (0x0004222e) postcard_pane_g5_ParamLimits

0x4c86,	// (0x0004222e) postcard_pane_g5

0x4c92,	// (0x0004223a) postcard_pane_g6_ParamLimits

0x4c92,	// (0x0004223a) postcard_pane_g6

0xb6a7,	// (0x00048c4f) postcard_pane_g7_ParamLimits

0xb6a7,	// (0x00048c4f) postcard_pane_g7

0x0006,

0xf4a5,	// (0x0004ca4d) postcard_pane_g_ParamLimits

0xf4a5,	// (0x0004ca4d) postcard_pane_g

0x4c9e,	// (0x00042246) main_mp2_pane_g1_ParamLimits

0x4c9e,	// (0x00042246) main_mp2_pane_g1

0x4caa,	// (0x00042252) main_mp2_pane_g2_ParamLimits

0x4caa,	// (0x00042252) main_mp2_pane_g2

0x4cb6,	// (0x0004225e) main_mp2_pane_g3_ParamLimits

0x4cb6,	// (0x0004225e) main_mp2_pane_g3

0x0002,

0xf4b4,	// (0x0004ca5c) main_mp2_pane_g_ParamLimits

0xf4b4,	// (0x0004ca5c) main_mp2_pane_g

0x4cc2,	// (0x0004226a) main_mp2_pane_t1_ParamLimits

0x4cc2,	// (0x0004226a) main_mp2_pane_t1

0x4cd9,	// (0x00042281) main_mp2_pane_t2_ParamLimits

0x4cd9,	// (0x00042281) main_mp2_pane_t2

0x4ced,	// (0x00042295) main_mp2_pane_t3_ParamLimits

0x4ced,	// (0x00042295) main_mp2_pane_t3

0x0002,

0xf4bb,	// (0x0004ca63) main_mp2_pane_t_ParamLimits

0xf4bb,	// (0x0004ca63) main_mp2_pane_t

0xb6b5,	// (0x00048c5d) pec_content_pane_ParamLimits

0xb6b5,	// (0x00048c5d) pec_content_pane

0xac22,	// (0x000481ca) scroll_pane_cp015

0xb6c7,	// (0x00048c6f) pec_attribute_pane_ParamLimits

0xb6c7,	// (0x00048c6f) pec_attribute_pane

0x4cff,	// (0x000422a7) pec_content_pane_g1_ParamLimits

0x4cff,	// (0x000422a7) pec_content_pane_g1

0xb6d7,	// (0x00048c7f) pec_content_pane_t1_ParamLimits

0xb6d7,	// (0x00048c7f) pec_content_pane_t1

0xb6e9,	// (0x00048c91) pec_content_pane_t2_ParamLimits

0xb6e9,	// (0x00048c91) pec_content_pane_t2

0x0001,

0xf4c2,	// (0x0004ca6a) pec_content_pane_t_ParamLimits

0xf4c2,	// (0x0004ca6a) pec_content_pane_t

0x4d0b,	// (0x000422b3) list_single_graphic_pane_cp01_ParamLimits

0x4d0b,	// (0x000422b3) list_single_graphic_pane_cp01

0xa7ef,	// (0x00047d97) bg_popup_sub_pane_cp04

0xb6fb,	// (0x00048ca3) popup_mup_playback_window_g1

0xb707,	// (0x00048caf) popup_mup_playback_window_t1

0xb71c,	// (0x00048cc4) popup_mup_playback_window_t2

0x0001,

0xf4c7,	// (0x0004ca6f) popup_mup_playback_window_t

0xb753,	// (0x00048cfb) main_image_pane_g1_ParamLimits

0xb753,	// (0x00048cfb) main_image_pane_g1

0xb796,	// (0x00048d3e) scroll_pane_cp018_ParamLimits

0xb796,	// (0x00048d3e) scroll_pane_cp018

0xb7ae,	// (0x00048d56) scroll_pane_cp016_ParamLimits

0xb7ae,	// (0x00048d56) scroll_pane_cp016

0x4da4,	// (0x0004234c) smil2_image_pane_ParamLimits

0x4da4,	// (0x0004234c) smil2_image_pane

0x4dd4,	// (0x0004237c) smil2_root_pane_ParamLimits

0x4dd4,	// (0x0004237c) smil2_root_pane

0x4e00,	// (0x000423a8) smil2_text_pane_ParamLimits

0x4e00,	// (0x000423a8) smil2_text_pane

0xa560,	// (0x00047b08) bg_list_pane_cp06

0xb7ea,	// (0x00048d92) grid_radio_pane

0xa560,	// (0x00047b08) bg_popup_window_pane_cp06

0xb7f2,	// (0x00048d9a) main_fmradio_pane_t1

0xb168,	// (0x00048710) heading_pane_cp04

0xb800,	// (0x00048da8) main_fmradio_pane_t2

0xc7c5,	// (0x00049d6d) popup_cale_lunar_info_window_g1

0xb80e,	// (0x00048db6) main_fmradio_pane_t3

0xc7cd,	// (0x00049d75) popup_cale_lunar_info_window_g2

0xb81c,	// (0x00048dc4) main_fmradio_pane_t4

0x0001,

0xb82a,	// (0x00048dd2) main_fmradio_pane_t5

0x0004,

0xf5a2,	// (0x0004cb4a) popup_cale_lunar_info_window_g

0xf4dc,	// (0x0004ca84) main_fmradio_pane_t

0xb838,	// (0x00048de0) wait_bar_pane_cp03

0xb840,	// (0x00048de8) cell_fmradio_pane_ParamLimits

0xb840,	// (0x00048de8) cell_fmradio_pane

0xb6a7,	// (0x00048c4f) cell_fmradio_pane_g1_ParamLimits

0xb6a7,	// (0x00048c4f) cell_fmradio_pane_g1

0xa560,	// (0x00047b08) grid_highlight_pane_cp011

0xb853,	// (0x00048dfb) poc_content_pane_ParamLimits

0xb853,	// (0x00048dfb) poc_content_pane

0xb865,	// (0x00048e0d) scroll_pane_cp019

0x4e40,	// (0x000423e8) popup_call_poc_act_window_ParamLimits

0x4e40,	// (0x000423e8) popup_call_poc_act_window

0x4e4d,	// (0x000423f5) popup_call_poc_inact_window_ParamLimits

0x4e4d,	// (0x000423f5) popup_call_poc_inact_window

0xf579,	// (0x0004cb21) bg_popup_call_poc_act_pane_g

0xc73d,	// (0x00049ce5) bg_popup_call_poc_inact_pane_g1

0xc745,	// (0x00049ced) bg_popup_call_poc_inact_pane_g2

0xb86d,	// (0x00048e15) popup_call_poc_act_window_g2

0xc74d,	// (0x00049cf5) bg_popup_call_poc_inact_pane_g3

0xc755,	// (0x00049cfd) bg_popup_call_poc_inact_pane_g4

0xc75d,	// (0x00049d05) bg_popup_call_poc_inact_pane_g5

0xb875,	// (0x00048e1d) popup_call_poc_act_window_t1_ParamLimits

0xb875,	// (0x00048e1d) popup_call_poc_act_window_t1

0xb89d,	// (0x00048e45) popup_call_poc_act_window_t2_ParamLimits

0xb89d,	// (0x00048e45) popup_call_poc_act_window_t2

0xb8c5,	// (0x00048e6d) popup_call_poc_act_window_t3_ParamLimits

0xb8c5,	// (0x00048e6d) popup_call_poc_act_window_t3

0xb8ed,	// (0x00048e95) popup_call_poc_act_window_t4_ParamLimits

0xb8ed,	// (0x00048e95) popup_call_poc_act_window_t4

0x0003,

0xf4e7,	// (0x0004ca8f) popup_call_poc_act_window_t_ParamLimits

0xf4e7,	// (0x0004ca8f) popup_call_poc_act_window_t

0xc765,	// (0x00049d0d) bg_popup_call_poc_inact_pane_g6

0xc76d,	// (0x00049d15) bg_popup_call_poc_inact_pane_g7

0xc775,	// (0x00049d1d) bg_popup_call_poc_inact_pane_g8

0xb8ff,	// (0x00048ea7) popup_call_poc_inact_window_g2

0xc77d,	// (0x00049d25) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf566,	// (0x0004cb0e) bg_popup_call_poc_inact_pane_g

0xb907,	// (0x00048eaf) popup_call_poc_inact_window_t1_ParamLimits

0xb907,	// (0x00048eaf) popup_call_poc_inact_window_t1

0xb91c,	// (0x00048ec4) popup_call_poc_inact_window_t2_ParamLimits

0xb91c,	// (0x00048ec4) popup_call_poc_inact_window_t2

0xb931,	// (0x00048ed9) popup_call_poc_inact_window_t3_ParamLimits

0xb931,	// (0x00048ed9) popup_call_poc_inact_window_t3

0x0002,

0xf4f0,	// (0x0004ca98) popup_call_poc_inact_window_t_ParamLimits

0xf4f0,	// (0x0004ca98) popup_call_poc_inact_window_t

0xc902,	// (0x00049eaa) context_pane_ParamLimits

0x5481,	// (0x00042a29) signal_pane_ParamLimits

0xaa79,	// (0x00048021) main_call2_pane

0x53f4,	// (0x0004299c) popup_phob_thumbnail2_window_ParamLimits

0x53f4,	// (0x0004299c) popup_phob_thumbnail2_window

0x4b0e,	// (0x000420b6) aid_hotspot_pointer_arrow_pane

0x4b16,	// (0x000420be) aid_hotspot_pointer_hand_pane

0x516f,	// (0x00042717) phob_pre_status_pane_g5

0x2e88,	// (0x00040430) cams_zoom_pane_ParamLimits

0x2e94,	// (0x0004043c) image_vga_pane_ParamLimits

0x2ea3,	// (0x0004044b) main_camera_pane_g1_ParamLimits

0x2eb1,	// (0x00040459) main_camera_pane_g2_ParamLimits

0x2ebd,	// (0x00040465) main_camera_pane_g3_ParamLimits

0x2ec9,	// (0x00040471) main_camera_pane_g4_ParamLimits

0x2ed5,	// (0x0004047d) main_camera_pane_g5_ParamLimits

0x2ee1,	// (0x00040489) main_camera_pane_g6_ParamLimits

0x2eed,	// (0x00040495) main_camera_pane_g7_ParamLimits

0xf1ef,	// (0x0004c797) main_camera_pane_g_ParamLimits

0x2ef9,	// (0x000404a1) main_camera_pane_t1_ParamLimits

0x2f0b,	// (0x000404b3) main_camera_pane_t2_ParamLimits

0xf200,	// (0x0004c7a8) main_camera_pane_t_ParamLimits

0xa7ef,	// (0x00047d97) bg_popup_preview_window_pane_cp01_ParamLimits

0xa7ef,	// (0x00047d97) bg_popup_preview_window_pane_cp01

0xb946,	// (0x00048eee) popup_phob_thumbnail2_window_g1_ParamLimits

0xb946,	// (0x00048eee) popup_phob_thumbnail2_window_g1

0xa560,	// (0x00047b08) call2_cli_visual_pane

0x4e69,	// (0x00042411) popup_call2_audio_conf_window_ParamLimits

0x4e69,	// (0x00042411) popup_call2_audio_conf_window

0x4e7e,	// (0x00042426) popup_call2_audio_first_window_ParamLimits

0x4e7e,	// (0x00042426) popup_call2_audio_first_window

0x4f1c,	// (0x000424c4) popup_call2_audio_in_window_ParamLimits

0x4f1c,	// (0x000424c4) popup_call2_audio_in_window

0x4f5e,	// (0x00042506) popup_call2_audio_out_window_ParamLimits

0x4f5e,	// (0x00042506) popup_call2_audio_out_window

0x4fc0,	// (0x00042568) popup_call2_audio_second_window_ParamLimits

0x4fc0,	// (0x00042568) popup_call2_audio_second_window

0x501e,	// (0x000425c6) popup_call2_audio_wait_window_ParamLimits

0x501e,	// (0x000425c6) popup_call2_audio_wait_window

0xa560,	// (0x00047b08) bg_popup_call2_act_pane_cp03

0xa7d1,	// (0x00047d79) list_conf_pane_cp

0xb952,	// (0x00048efa) popup_call2_audio_conf_window_t1

0xb1c5,	// (0x0004876d) list_single_graphic_popup_conf2_pane_ParamLimits

0xb1c5,	// (0x0004876d) list_single_graphic_popup_conf2_pane

0xb1d8,	// (0x00048780) list_highlight_pane_cp04

0xb960,	// (0x00048f08) list_single_graphic_popup_conf2_pane_g1

0xb1e9,	// (0x00048791) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf4f7,	// (0x0004ca9f) list_single_graphic_popup_conf2_pane_g

0xb96a,	// (0x00048f12) list_single_graphic_popup_conf2_pane_t1

0xb978,	// (0x00048f20) bg_popup_call2_act_pane_cp01_ParamLimits

0xb978,	// (0x00048f20) bg_popup_call2_act_pane_cp01

0xba02,	// (0x00048faa) call_type_pane_cp05_ParamLimits

0xba02,	// (0x00048faa) call_type_pane_cp05

0xba56,	// (0x00048ffe) popup_call2_audio_second_window_g1_ParamLimits

0xba56,	// (0x00048ffe) popup_call2_audio_second_window_g1

0xbaaa,	// (0x00049052) popup_call2_audio_second_window_g2_ParamLimits

0xbaaa,	// (0x00049052) popup_call2_audio_second_window_g2

0x0002,

0xf4fc,	// (0x0004caa4) popup_call2_audio_second_window_g_ParamLimits

0xf4fc,	// (0x0004caa4) popup_call2_audio_second_window_g

0xbb0f,	// (0x000490b7) popup_call2_audio_second_window_t1_ParamLimits

0xbb0f,	// (0x000490b7) popup_call2_audio_second_window_t1

0xbbca,	// (0x00049172) popup_call2_audio_second_window_t2_ParamLimits

0xbbca,	// (0x00049172) popup_call2_audio_second_window_t2

0xbc1d,	// (0x000491c5) popup_call2_audio_second_window_t3_ParamLimits

0xbc1d,	// (0x000491c5) popup_call2_audio_second_window_t3

0x0003,

0xf503,	// (0x0004caab) popup_call2_audio_second_window_t_ParamLimits

0xf503,	// (0x0004caab) popup_call2_audio_second_window_t

0xa560,	// (0x00047b08) bg_popup_call2_in_pane_cp02

0xa56a,	// (0x00047b12) call_type_pane_cp04

0xa572,	// (0x00047b1a) popup_call2_audio_wait_window_g1

0xa57a,	// (0x00047b22) popup_call2_audio_wait_window_g2

0x0001,

0xf0de,	// (0x0004c686) popup_call2_audio_wait_window_g

0xa582,	// (0x00047b2a) popup_call2_audio_wait_window_t3

0xbd10,	// (0x000492b8) bg_popup_call2_act_pane_ParamLimits

0xbd10,	// (0x000492b8) bg_popup_call2_act_pane

0xbdd0,	// (0x00049378) call_type_pane_cp03_ParamLimits

0xbdd0,	// (0x00049378) call_type_pane_cp03

0xbe34,	// (0x000493dc) popup_call2_audio_first_window_g1_ParamLimits

0xbe34,	// (0x000493dc) popup_call2_audio_first_window_g1

0xbea4,	// (0x0004944c) popup_call2_audio_first_window_g2_ParamLimits

0xbea4,	// (0x0004944c) popup_call2_audio_first_window_g2

0xb4ae,	// (0x00048a56) popup_call2_audio_first_window_g3_ParamLimits

0xb4ae,	// (0x00048a56) popup_call2_audio_first_window_g3

0x0004,

0xf50c,	// (0x0004cab4) popup_call2_audio_first_window_g_ParamLimits

0xf50c,	// (0x0004cab4) popup_call2_audio_first_window_g

0xbf82,	// (0x0004952a) popup_call2_audio_first_window_t1_ParamLimits

0xbf82,	// (0x0004952a) popup_call2_audio_first_window_t1

0xc085,	// (0x0004962d) popup_call2_audio_first_window_t4_ParamLimits

0xc085,	// (0x0004962d) popup_call2_audio_first_window_t4

0xc168,	// (0x00049710) popup_call2_audio_first_window_t5_ParamLimits

0xc168,	// (0x00049710) popup_call2_audio_first_window_t5

0x0003,

0xf517,	// (0x0004cabf) popup_call2_audio_first_window_t_ParamLimits

0xf517,	// (0x0004cabf) popup_call2_audio_first_window_t

0xa7e7,	// (0x00047d8f) bg_popup_call2_act_pane_g1

0xc7d5,	// (0x00049d7d) popup_cale_lunar_info_window_t1

0xc7e3,	// (0x00049d8b) popup_cale_lunar_info_window_t2

0xc7f1,	// (0x00049d99) popup_cale_lunar_info_window_t3

0xa560,	// (0x00047b08) bg_popup_call2_bubble_pane

0xc269,	// (0x00049811) bg_popup_call2_in_pane_cp01_ParamLimits

0xc269,	// (0x00049811) bg_popup_call2_in_pane_cp01

0xa23c,	// (0x000477e4) call_type_pane_cp02

0xc2b1,	// (0x00049859) popup_call2_audio_out_window_g1_ParamLimits

0xc2b1,	// (0x00049859) popup_call2_audio_out_window_g1

0xc2dd,	// (0x00049885) popup_call2_audio_out_window_g2_ParamLimits

0xc2dd,	// (0x00049885) popup_call2_audio_out_window_g2

0xc305,	// (0x000498ad) popup_call2_audio_out_window_g3_ParamLimits

0xc305,	// (0x000498ad) popup_call2_audio_out_window_g3

0x0003,

0xf520,	// (0x0004cac8) popup_call2_audio_out_window_g_ParamLimits

0xf520,	// (0x0004cac8) popup_call2_audio_out_window_g

0xc340,	// (0x000498e8) popup_call2_audio_out_window_t1_ParamLimits

0xc340,	// (0x000498e8) popup_call2_audio_out_window_t1

0xc39f,	// (0x00049947) popup_call2_audio_out_window_t2_ParamLimits

0xc39f,	// (0x00049947) popup_call2_audio_out_window_t2

0xc3f3,	// (0x0004999b) popup_call2_audio_out_window_t3_ParamLimits

0xc3f3,	// (0x0004999b) popup_call2_audio_out_window_t3

0xc409,	// (0x000499b1) popup_call2_audio_out_window_t4_ParamLimits

0xc409,	// (0x000499b1) popup_call2_audio_out_window_t4

0xc41f,	// (0x000499c7) popup_call2_audio_out_window_t5_ParamLimits

0xc41f,	// (0x000499c7) popup_call2_audio_out_window_t5

0x0005,

0xf529,	// (0x0004cad1) popup_call2_audio_out_window_t_ParamLimits

0xf529,	// (0x0004cad1) popup_call2_audio_out_window_t

0xc483,	// (0x00049a2b) bg_popup_call2_in_pane_ParamLimits

0xc483,	// (0x00049a2b) bg_popup_call2_in_pane

0xc4df,	// (0x00049a87) popup_call2_audio_in_window_g1_ParamLimits

0xc4df,	// (0x00049a87) popup_call2_audio_in_window_g1

0xc517,	// (0x00049abf) popup_call2_audio_in_window_g2_ParamLimits

0xc517,	// (0x00049abf) popup_call2_audio_in_window_g2

0xc54f,	// (0x00049af7) popup_call2_audio_in_window_g3_ParamLimits

0xc54f,	// (0x00049af7) popup_call2_audio_in_window_g3

0x0003,

0xf536,	// (0x0004cade) popup_call2_audio_in_window_g_ParamLimits

0xf536,	// (0x0004cade) popup_call2_audio_in_window_g

0xc5a7,	// (0x00049b4f) popup_call2_audio_in_window_t1_ParamLimits

0xc5a7,	// (0x00049b4f) popup_call2_audio_in_window_t1

0xc627,	// (0x00049bcf) popup_call2_audio_in_window_t2_ParamLimits

0xc627,	// (0x00049bcf) popup_call2_audio_in_window_t2

0xc6a7,	// (0x00049c4f) popup_call2_audio_in_window_t3_ParamLimits

0xc6a7,	// (0x00049c4f) popup_call2_audio_in_window_t3

0xc6c1,	// (0x00049c69) popup_call2_audio_in_window_t4_ParamLimits

0xc6c1,	// (0x00049c69) popup_call2_audio_in_window_t4

0xc6d3,	// (0x00049c7b) popup_call2_audio_in_window_t5_ParamLimits

0xc6d3,	// (0x00049c7b) popup_call2_audio_in_window_t5

0xc6e8,	// (0x00049c90) popup_call2_audio_in_window_t6_ParamLimits

0xc6e8,	// (0x00049c90) popup_call2_audio_in_window_t6

0x0005,

0xf53f,	// (0x0004cae7) popup_call2_audio_in_window_t_ParamLimits

0xf53f,	// (0x0004cae7) popup_call2_audio_in_window_t

0xa7e7,	// (0x00047d8f) bg_popup_call2_in_pane_g1

0xc7ff,	// (0x00049da7) popup_cale_lunar_info_window_t4

0x0003,

0xf5a7,	// (0x0004cb4f) popup_cale_lunar_info_window_t

0xa7ef,	// (0x00047d97) bg_popup_call2_rect_pane_ParamLimits

0xa7ef,	// (0x00047d97) bg_popup_call2_rect_pane

0xa560,	// (0x00047b08) call2_cli_visual_graphic_pane

0xa560,	// (0x00047b08) call2_cli_visual_text_pane

0x5527,	// (0x00042acf) smil_status_volume_pane_g3

0x0002,

0xa909,	// (0x00047eb1) call2_cli_visual_graphic_pane_g1

0xa909,	// (0x00047eb1) call2_cli_visual_graphic_pane_g2

0xa909,	// (0x00047eb1) call2_cli_visual_graphic_pane_g3

0x0002,

0xf54c,	// (0x0004caf4) call2_cli_visual_graphic_pane_g

0xc6fd,	// (0x00049ca5) bg_popup_call2_rect_pane_g1

0xa995,	// (0x00047f3d) bg_popup_call2_rect_pane_g2

0xc705,	// (0x00049cad) bg_popup_call2_rect_pane_g3

0xc70d,	// (0x00049cb5) bg_popup_call2_rect_pane_g4

0xc715,	// (0x00049cbd) bg_popup_call2_rect_pane_g5

0xc71d,	// (0x00049cc5) bg_popup_call2_rect_pane_g6

0xc725,	// (0x00049ccd) bg_popup_call2_rect_pane_g7

0xc72d,	// (0x00049cd5) bg_popup_call2_rect_pane_g8

0xc735,	// (0x00049cdd) bg_popup_call2_rect_pane_g9

0x0008,

0xf553,	// (0x0004cafb) bg_popup_call2_rect_pane_g

0xc73d,	// (0x00049ce5) bg_popup_call2_bubble_pane_g1

0xc745,	// (0x00049ced) bg_popup_call2_bubble_pane_g2

0xc74d,	// (0x00049cf5) bg_popup_call2_bubble_pane_g3

0xc755,	// (0x00049cfd) bg_popup_call2_bubble_pane_g4

0xc75d,	// (0x00049d05) bg_popup_call2_bubble_pane_g5

0xc765,	// (0x00049d0d) bg_popup_call2_bubble_pane_g6

0xc76d,	// (0x00049d15) bg_popup_call2_bubble_pane_g7

0xc775,	// (0x00049d1d) bg_popup_call2_bubble_pane_g8

0xc77d,	// (0x00049d25) bg_popup_call2_bubble_pane_g9

0x0008,

0xf566,	// (0x0004cb0e) bg_popup_call2_bubble_pane_g

0x299f,	// (0x0003ff47) aid_cale_week_size_cell_pane

0x2f1d,	// (0x000404c5) aid_cams_cif_uncrop_pane_ParamLimits

0x2f1d,	// (0x000404c5) aid_cams_cif_uncrop_pane

0x3078,	// (0x00040620) aid_cams_size_cell_ParamLimits

0x3078,	// (0x00040620) aid_cams_size_cell

0x3084,	// (0x0004062c) grid_cams_pane_ParamLimits

0x3092,	// (0x0004063a) linegrid_cams_pane_ParamLimits

0x3169,	// (0x00040711) call_video_pane_t1

0x318a,	// (0x00040732) call_video_pane_t2

0x0001,

0xf253,	// (0x0004c7fb) call_video_pane_t

0x36d1,	// (0x00040c79) aid_cale_month_size_cell_pane_ParamLimits

0x36d1,	// (0x00040c79) aid_cale_month_size_cell_pane

0xf5f0,	// (0x0004cb98) smil_status_volume_pane_g

0x5534,	// (0x00042adc) volume_smil_pane_ParamLimits

0x2108,	// (0x0003f6b0) aid_popup2_width_pane

0x28a1,	// (0x0003fe49) cell_qdial_pane_g4_ParamLimits

0x28a1,	// (0x0003fe49) cell_qdial_pane_g4

0x45ad,	// (0x00041b55) aid_blid_cardinal_pane_ParamLimits

0x45bd,	// (0x00041b65) aid_blid_destination_pane_ParamLimits

0x45bd,	// (0x00041b65) aid_blid_destination_pane

0xa7ef,	// (0x00047d97) bg_popup_call_poc_act_pane_ParamLimits

0xa7ef,	// (0x00047d97) bg_popup_call_poc_act_pane

0xa7ef,	// (0x00047d97) bg_popup_call_poc_inact_pane_ParamLimits

0xa7ef,	// (0x00047d97) bg_popup_call_poc_inact_pane

0xc785,	// (0x00049d2d) bg_popup_call_poc_act_pane_g1

0xc78d,	// (0x00049d35) bg_popup_call_poc_act_pane_g2

0xc795,	// (0x00049d3d) bg_popup_call_poc_act_pane_g3

0xc755,	// (0x00049cfd) bg_popup_call_poc_act_pane_g4

0xc75d,	// (0x00049d05) bg_popup_call_poc_act_pane_g5

0xc79d,	// (0x00049d45) bg_popup_call_poc_act_pane_g6

0xc76d,	// (0x00049d15) bg_popup_call_poc_act_pane_g7

0xc7a5,	// (0x00049d4d) bg_popup_call_poc_act_pane_g8

0xa560,	// (0x00047b08) main_usb_pane

0x5323,	// (0x000428cb) popup_cale_lunar_info_window

0x34b3,	// (0x00040a5b) im_reading_pane_t1_ParamLimits

0xab7a,	// (0x00048122) list_im_pane_ParamLimits

0xab8b,	// (0x00048133) scroll_pane_cp07_ParamLimits

0xa560,	// (0x00047b08) grid_highlight_pane_cp012

0xa7ef,	// (0x00047d97) mup_scale_pane_ParamLimits

0xb4ae,	// (0x00048a56) main_usb_pane_g1_ParamLimits

0xb4ae,	// (0x00048a56) main_usb_pane_g1

0x5092,	// (0x0004263a) main_usb_pane_g2_ParamLimits

0x5092,	// (0x0004263a) main_usb_pane_g2

0x0001,

0xf590,	// (0x0004cb38) main_usb_pane_g_ParamLimits

0xf590,	// (0x0004cb38) main_usb_pane_g

0x509e,	// (0x00042646) main_usb_pane_t1_ParamLimits

0x509e,	// (0x00042646) main_usb_pane_t1

0x50b0,	// (0x00042658) main_usb_pane_t2_ParamLimits

0x50b0,	// (0x00042658) main_usb_pane_t2

0x50c2,	// (0x0004266a) main_usb_pane_t3_ParamLimits

0x50c2,	// (0x0004266a) main_usb_pane_t3

0x50d4,	// (0x0004267c) main_usb_pane_t4_ParamLimits

0x50d4,	// (0x0004267c) main_usb_pane_t4

0x50e6,	// (0x0004268e) main_usb_pane_t5_ParamLimits

0x50e6,	// (0x0004268e) main_usb_pane_t5

0x50f8,	// (0x000426a0) main_usb_pane_t6_ParamLimits

0x50f8,	// (0x000426a0) main_usb_pane_t6

0x0005,

0xf595,	// (0x0004cb3d) main_usb_pane_t_ParamLimits

0x4553,	// (0x00041afb) aid_text_placing

0x455f,	// (0x00041b07) main_location2_pane_t1_ParamLimits

0x4573,	// (0x00041b1b) main_location2_pane_t2_ParamLimits

0x4587,	// (0x00041b2f) main_location2_pane_t3_ParamLimits

0x459b,	// (0x00041b43) main_location2_pane_t4_ParamLimits

0x459b,	// (0x00041b43) main_location2_pane_t4

0xf3b4,	// (0x0004c95c) main_location2_pane_t_ParamLimits

0xa82b,	// (0x00047dd3) find_pinb_pane_g2_ParamLimits

0xa82b,	// (0x00047dd3) find_pinb_pane_g2

0x0001,

0xf104,	// (0x0004c6ac) find_pinb_pane_g_ParamLimits

0xf104,	// (0x0004c6ac) find_pinb_pane_g

0xa837,	// (0x00047ddf) find_pinb_pane_t1_ParamLimits

0xa849,	// (0x00047df1) find_pinb_pane_t2_ParamLimits

0xf109,	// (0x0004c6b1) find_pinb_pane_t_ParamLimits

0xa560,	// (0x00047b08) main_call3_pane

0x3c74,	// (0x0004121c) cale_month_day_heading_pane_t1_ParamLimits

0x3cfa,	// (0x000412a2) cale_month_day_heading_pane_t2_ParamLimits

0x3d73,	// (0x0004131b) cale_month_day_heading_pane_t3_ParamLimits

0x3dec,	// (0x00041394) cale_month_day_heading_pane_t4_ParamLimits

0x3e65,	// (0x0004140d) cale_month_day_heading_pane_t5_ParamLimits

0x3ede,	// (0x00041486) cale_month_day_heading_pane_t6_ParamLimits

0x3f57,	// (0x000414ff) cale_month_day_heading_pane_t7_ParamLimits

0xf28b,	// (0x0004c833) cale_month_day_heading_pane_t_ParamLimits

0xadd5,	// (0x0004837d) smil_status_volume_pane

0x4c56,	// (0x000421fe) postcard_address_pane_ParamLimits

0x4c56,	// (0x000421fe) postcard_address_pane

0x4c62,	// (0x0004220a) postcard_message_pane_ParamLimits

0x4c62,	// (0x0004220a) postcard_message_pane

0x505d,	// (0x00042605) call2_cli_visual_pane_t1_ParamLimits

0x505d,	// (0x00042605) call2_cli_visual_pane_t1

0x568b,	// (0x00042c33) postcard_message_pane_t1_ParamLimits

0x568b,	// (0x00042c33) postcard_message_pane_t1

0x5674,	// (0x00042c1c) postcard_address_pane_t1_ParamLimits

0x5674,	// (0x00042c1c) postcard_address_pane_t1

0x5665,	// (0x00042c0d) popup_call3_audio_in_window_ParamLimits

0x5665,	// (0x00042c0d) popup_call3_audio_in_window

0x5549,	// (0x00042af1) bg_popup_call3_in_pane_ParamLimits

0x5549,	// (0x00042af1) bg_popup_call3_in_pane

0x55ab,	// (0x00042b53) popup_call3_audio_in_window_g1_ParamLimits

0x55ab,	// (0x00042b53) popup_call3_audio_in_window_g1

0x55c3,	// (0x00042b6b) popup_call3_audio_in_window_g2_ParamLimits

0x55c3,	// (0x00042b6b) popup_call3_audio_in_window_g2

0x55db,	// (0x00042b83) popup_call3_audio_in_window_g3_ParamLimits

0x55db,	// (0x00042b83) popup_call3_audio_in_window_g3

0x0003,

0xf5f7,	// (0x0004cb9f) popup_call3_audio_in_window_g_ParamLimits

0xf5f7,	// (0x0004cb9f) popup_call3_audio_in_window_g

0x5603,	// (0x00042bab) popup_call3_audio_in_window_t1_ParamLimits

0x5603,	// (0x00042bab) popup_call3_audio_in_window_t1

0x562b,	// (0x00042bd3) popup_call3_audio_in_window_t2_ParamLimits

0x562b,	// (0x00042bd3) popup_call3_audio_in_window_t2

0x5653,	// (0x00042bfb) popup_call3_audio_in_window_t3_ParamLimits

0x5653,	// (0x00042bfb) popup_call3_audio_in_window_t3

0x0002,

0xf600,	// (0x0004cba8) popup_call3_audio_in_window_t_ParamLimits

0xf600,	// (0x0004cba8) popup_call3_audio_in_window_t

0xaa79,	// (0x00048021) bg_popup_call3_rect_pane

0xc6fd,	// (0x00049ca5) bg_popup_call3_rect_pane_g1

0xa995,	// (0x00047f3d) bg_popup_call3_rect_pane_g2

0xc705,	// (0x00049cad) bg_popup_call3_rect_pane_g3

0xc70d,	// (0x00049cb5) bg_popup_call3_rect_pane_g4

0xc715,	// (0x00049cbd) bg_popup_call3_rect_pane_g5

0xc71d,	// (0x00049cc5) bg_popup_call3_rect_pane_g6

0xc725,	// (0x00049ccd) bg_popup_call3_rect_pane_g7

0x48d3,	// (0x00041e7b) mup_visualizer_osc_pane

0xb5bb,	// (0x00048b63) mup_visualizer_spec_pane

0x5569,	// (0x00042b11) call3_video_qcif_pane_ParamLimits

0x5569,	// (0x00042b11) call3_video_qcif_pane

0x557b,	// (0x00042b23) call3_video_qcif_uncrop_pane_ParamLimits

0x557b,	// (0x00042b23) call3_video_qcif_uncrop_pane

0x5589,	// (0x00042b31) call3_video_subqcif_pane_ParamLimits

0x5589,	// (0x00042b31) call3_video_subqcif_pane

0x559b,	// (0x00042b43) call3_video_subqcif_uncrop_pane_ParamLimits

0x559b,	// (0x00042b43) call3_video_subqcif_uncrop_pane

0x55f3,	// (0x00042b9b) popup_call3_audio_in_window_g4_ParamLimits

0x55f3,	// (0x00042b9b) popup_call3_audio_in_window_g4

0x5516,	// (0x00042abe) mup_spec_half_pane

0x551f,	// (0x00042ac7) mup_spec_half_pane_cp

0xc962,	// (0x00049f0a) mup_osc_middle_pane

0xc96b,	// (0x00049f13) mup_visualizer_osc_pane_g1

0x54f7,	// (0x00042a9f) mup_spec_bar_pane_ParamLimits

0x54f7,	// (0x00042a9f) mup_spec_bar_pane

0xc94f,	// (0x00049ef7) mup_spec_bar_pane_g1

0xc959,	// (0x00049f01) mup_spec_bar_pane_g2

0x0001,

0xf5eb,	// (0x0004cb93) mup_spec_bar_pane_g

0x299f,	// (0x0003ff47) aid_cale_week_size_cell_pane_ParamLimits

0x29b4,	// (0x0003ff5c) bg_cale_heading_pane_ParamLimits

0xa9d2,	// (0x00047f7a) bg_cale_pane_cp01_ParamLimits

0x29d4,	// (0x0003ff7c) cale_week_corner_pane_ParamLimits

0x29ee,	// (0x0003ff96) cale_week_day_heading_pane_ParamLimits

0x2a0e,	// (0x0003ffb6) cale_week_scroll_pane_g1_ParamLimits

0x2a29,	// (0x0003ffd1) cale_week_scroll_pane_g2_ParamLimits

0x2a3c,	// (0x0003ffe4) cale_week_scroll_pane_g3_ParamLimits

0x2a4f,	// (0x0003fff7) cale_week_scroll_pane_g4_ParamLimits

0x2a62,	// (0x0004000a) cale_week_scroll_pane_g5_ParamLimits

0x2a75,	// (0x0004001d) cale_week_scroll_pane_g6_ParamLimits

0x2a88,	// (0x00040030) cale_week_scroll_pane_g7_ParamLimits

0x2a9d,	// (0x00040045) cale_week_scroll_pane_g8_ParamLimits

0x2ab2,	// (0x0004005a) cale_week_scroll_pane_g9_ParamLimits

0x2ac5,	// (0x0004006d) cale_week_scroll_pane_g10_ParamLimits

0x2ad8,	// (0x00040080) cale_week_scroll_pane_g11_ParamLimits

0x2aeb,	// (0x00040093) cale_week_scroll_pane_g12_ParamLimits

0x2b02,	// (0x000400aa) cale_week_scroll_pane_g13_ParamLimits

0x2b1d,	// (0x000400c5) cale_week_scroll_pane_g14_ParamLimits

0x2b38,	// (0x000400e0) cale_week_scroll_pane_g15_ParamLimits

0xf195,	// (0x0004c73d) cale_week_scroll_pane_g_ParamLimits

0x2b68,	// (0x00040110) cale_week_time_pane_ParamLimits

0x2b7d,	// (0x00040125) grid_cale_week_pane_ParamLimits

0xa9ef,	// (0x00047f97) listscroll_cale_week_pane_t1

0xaa01,	// (0x00047fa9) scroll_pane_cp08_ParamLimits

0x3745,	// (0x00040ced) cale_month_corner_pane_ParamLimits

0xadab,	// (0x00048353) cale_month_pane_t1

0x3bf7,	// (0x0004119f) cale_month_week_pane_ParamLimits

0xb4ae,	// (0x00048a56) popup_call_status_window_g1_ParamLimits

0x4386,	// (0x0004192e) popup_call_status_window_g2_ParamLimits

0x4392,	// (0x0004193a) popup_call_status_window_g3_ParamLimits

0xf33b,	// (0x0004c8e3) popup_call_status_window_g_ParamLimits

0xb158,	// (0x00048700) aid_call2_pane

0x0fc6,	// (0x0003e56e) msg_header_pane_g1

0x4c56,	// (0x000421fe) postcard_address2_pane_ParamLimits

0x4c56,	// (0x000421fe) postcard_address2_pane

0x4c62,	// (0x0004220a) postcard_message2_pane_ParamLimits

0x4c62,	// (0x0004220a) postcard_message2_pane

0x548f,	// (0x00042a37) message2_row_pane_ParamLimits

0x548f,	// (0x00042a37) message2_row_pane

0x54aa,	// (0x00042a52) address2_row_pane_ParamLimits

0x54aa,	// (0x00042a52) address2_row_pane

0xc91d,	// (0x00049ec5) postcard_message2_row_pane_g1

0xc925,	// (0x00049ecd) postcard_message2_row_pane_t1

0xc91d,	// (0x00049ec5) address2_row_pane_g1

0xc925,	// (0x00049ecd) address2_row_pane_t1

0x2e03,	// (0x000403ab) aid_size_cell_vorec

0xa560,	// (0x00047b08) main_rss_pane

0x54bd,	// (0x00042a65) rss_list_single_pane_ParamLimits

0x54bd,	// (0x00042a65) rss_list_single_pane

0xc933,	// (0x00049edb) rss_list_single_pane_t1

0xc941,	// (0x00049ee9) rss_list_single_pane_t2

0x0001,

0xf5e6,	// (0x0004cb8e) rss_list_single_pane_t

0xa560,	// (0x00047b08) main_camera2_pane

0xa560,	// (0x00047b08) main_video2_pane

0x56ef,	// (0x00042c97) cams_zoom_pane_cp2_ParamLimits

0x56ef,	// (0x00042c97) cams_zoom_pane_cp2

0x56fb,	// (0x00042ca3) image2_vga_pane_ParamLimits

0x56fb,	// (0x00042ca3) image2_vga_pane

0x570a,	// (0x00042cb2) main_camera2_pane_g1_ParamLimits

0x570a,	// (0x00042cb2) main_camera2_pane_g1

0x5716,	// (0x00042cbe) main_camera2_pane_g2_ParamLimits

0x5716,	// (0x00042cbe) main_camera2_pane_g2

0x5722,	// (0x00042cca) main_camera2_pane_g3_ParamLimits

0x5722,	// (0x00042cca) main_camera2_pane_g3

0x572e,	// (0x00042cd6) main_camera2_pane_g4_ParamLimits

0x572e,	// (0x00042cd6) main_camera2_pane_g4

0x573a,	// (0x00042ce2) main_camera2_pane_g5_ParamLimits

0x573a,	// (0x00042ce2) main_camera2_pane_g5

0x5746,	// (0x00042cee) main_camera2_pane_g6_ParamLimits

0x5746,	// (0x00042cee) main_camera2_pane_g6

0x5752,	// (0x00042cfa) main_camera2_pane_g7_ParamLimits

0x5752,	// (0x00042cfa) main_camera2_pane_g7

0x575e,	// (0x00042d06) main_camera2_pane_g8_ParamLimits

0x575e,	// (0x00042d06) main_camera2_pane_g8

0x0008,

0xf607,	// (0x0004cbaf) main_camera2_pane_g_ParamLimits

0xf607,	// (0x0004cbaf) main_camera2_pane_g

0x5776,	// (0x00042d1e) main_camera2_pane_t1_ParamLimits

0x5776,	// (0x00042d1e) main_camera2_pane_t1

0x5788,	// (0x00042d30) main_camera2_pane_t2_ParamLimits

0x5788,	// (0x00042d30) main_camera2_pane_t2

0x579a,	// (0x00042d42) main_camera2_pane_t3_ParamLimits

0x579a,	// (0x00042d42) main_camera2_pane_t3

0x57ac,	// (0x00042d54) main_camera2_pane_t4_ParamLimits

0x57ac,	// (0x00042d54) main_camera2_pane_t4

0x0006,

0xf61a,	// (0x0004cbc2) main_camera2_pane_t_ParamLimits

0xf61a,	// (0x0004cbc2) main_camera2_pane_t

0x580e,	// (0x00042db6) cams_zoom_pane_cp4_ParamLimits

0x580e,	// (0x00042db6) cams_zoom_pane_cp4

0x581e,	// (0x00042dc6) image2_cif_pane_ParamLimits

0x581e,	// (0x00042dc6) image2_cif_pane

0x5833,	// (0x00042ddb) image2_subqcif_pane_ParamLimits

0x5833,	// (0x00042ddb) image2_subqcif_pane

0x5842,	// (0x00042dea) main_video2_pane_g1_ParamLimits

0x5842,	// (0x00042dea) main_video2_pane_g1

0x5854,	// (0x00042dfc) main_video2_pane_g2_ParamLimits

0x5854,	// (0x00042dfc) main_video2_pane_g2

0x5864,	// (0x00042e0c) main_video2_pane_g3_ParamLimits

0x5864,	// (0x00042e0c) main_video2_pane_g3

0x5874,	// (0x00042e1c) main_video2_pane_g4_ParamLimits

0x5874,	// (0x00042e1c) main_video2_pane_g4

0x5884,	// (0x00042e2c) main_video2_pane_g5_ParamLimits

0x5884,	// (0x00042e2c) main_video2_pane_g5

0x5894,	// (0x00042e3c) main_video2_pane_g6_ParamLimits

0x5894,	// (0x00042e3c) main_video2_pane_g6

0x0005,

0xf629,	// (0x0004cbd1) main_video2_pane_g_ParamLimits

0xf629,	// (0x0004cbd1) main_video2_pane_g

0x58a6,	// (0x00042e4e) main_video2_pane_t1_ParamLimits

0x58a6,	// (0x00042e4e) main_video2_pane_t1

0x58c0,	// (0x00042e68) main_video2_pane_t2_ParamLimits

0x58c0,	// (0x00042e68) main_video2_pane_t2

0x58e6,	// (0x00042e8e) main_video2_pane_t3_ParamLimits

0x58e6,	// (0x00042e8e) main_video2_pane_t3

0x0002,

0xf636,	// (0x0004cbde) main_video2_pane_t_ParamLimits

0xf636,	// (0x0004cbde) main_video2_pane_t

0x51af,	// (0x00042757) call_muted_g2

0x0001,

0xf5d8,	// (0x0004cb80) call_muted_g

0xa560,	// (0x00047b08) main_mup2_pane

0xc9a2,	// (0x00049f4a) main_mup2_pane_g1_ParamLimits

0xc9a2,	// (0x00049f4a) main_mup2_pane_g1

0x590c,	// (0x00042eb4) main_mup2_pane_g2_ParamLimits

0x590c,	// (0x00042eb4) main_mup2_pane_g2

0x5b8e,	// (0x00043136) main_mup_pane_g13_cp1

0x5b96,	// (0x0004313e) mup_volume_pane_cp1

0x592c,	// (0x00042ed4) main_mup2_pane_g4_ParamLimits

0x592c,	// (0x00042ed4) main_mup2_pane_g4

0x5941,	// (0x00042ee9) main_mup2_pane_g5_ParamLimits

0x5941,	// (0x00042ee9) main_mup2_pane_g5

0x5956,	// (0x00042efe) main_mup2_pane_g6_ParamLimits

0x5956,	// (0x00042efe) main_mup2_pane_g6

0x596b,	// (0x00042f13) main_mup2_pane_g7_ParamLimits

0x596b,	// (0x00042f13) main_mup2_pane_g7

0x0006,

0xf63d,	// (0x0004cbe5) main_mup2_pane_g_ParamLimits

0xf63d,	// (0x0004cbe5) main_mup2_pane_g

0x5987,	// (0x00042f2f) main_mup2_pane_t1_ParamLimits

0x5987,	// (0x00042f2f) main_mup2_pane_t1

0x599e,	// (0x00042f46) main_mup2_pane_t2_ParamLimits

0x599e,	// (0x00042f46) main_mup2_pane_t2

0x59b5,	// (0x00042f5d) main_mup2_pane_t3_ParamLimits

0x59b5,	// (0x00042f5d) main_mup2_pane_t3

0x59cc,	// (0x00042f74) main_mup2_pane_t4_ParamLimits

0x59cc,	// (0x00042f74) main_mup2_pane_t4

0x59e6,	// (0x00042f8e) main_mup2_pane_t5_ParamLimits

0x59e6,	// (0x00042f8e) main_mup2_pane_t5

0x5a00,	// (0x00042fa8) main_mup2_pane_t6_ParamLimits

0x5a00,	// (0x00042fa8) main_mup2_pane_t6

0x0005,

0xf64c,	// (0x0004cbf4) main_mup2_pane_t_ParamLimits

0xf64c,	// (0x0004cbf4) main_mup2_pane_t

0x5a38,	// (0x00042fe0) mup2_visualizer_pane_ParamLimits

0x5a38,	// (0x00042fe0) mup2_visualizer_pane

0x5a6e,	// (0x00043016) mup_progress_pane_cp_ParamLimits

0x5a6e,	// (0x00043016) mup_progress_pane_cp

0x5b79,	// (0x00043121) mup_volume_pane_cp_ParamLimits

0x5b79,	// (0x00043121) mup_volume_pane_cp

0x5a85,	// (0x0004302d) mup2_visualizer_pane_g1_ParamLimits

0x5a85,	// (0x0004302d) mup2_visualizer_pane_g1

0xc9ae,	// (0x00049f56) mup2_visualizer_pane_g2_ParamLimits

0xc9ae,	// (0x00049f56) mup2_visualizer_pane_g2

0x5a9a,	// (0x00043042) mup2_visualizer_pane_g3_ParamLimits

0x5a9a,	// (0x00043042) mup2_visualizer_pane_g3

0x0002,

0xf659,	// (0x0004cc01) mup2_visualizer_pane_g_ParamLimits

0xf659,	// (0x0004cc01) mup2_visualizer_pane_g

0xb7e2,	// (0x00048d8a) aid_size_cell_fmradio

0x52c5,	// (0x0004286d) aid_height_parent_landcape

0xac09,	// (0x000481b1) wml_content_pane_cp

0xac11,	// (0x000481b9) wml_tabs_pane

0xac1a,	// (0x000481c2) popup_wml_miniature_window

0xac22,	// (0x000481ca) scroll_pane_cp021

0xac36,	// (0x000481de) wml_content_pane_comp8

0xa560,	// (0x00047b08) bg_popup_sub_pane_cp05

0xc9cc,	// (0x00049f74) popup_wml_miniature_window_g1

0xc9d4,	// (0x00049f7c) wml_miniature_view_pane

0x5aa8,	// (0x00043050) aid_size_wml_view

0x5ab0,	// (0x00043058) wml_miniature_view_pane_g1

0x5ab9,	// (0x00043061) wml_miniature_view_pane_g2

0x5ac2,	// (0x0004306a) wml_miniature_view_pane_g3

0x5aca,	// (0x00043072) wml_miniature_view_pane_g4

0x5ad2,	// (0x0004307a) wml_miniature_view_pane_g5

0x5ada,	// (0x00043082) wml_miniature_view_pane_g6

0x5ae2,	// (0x0004308a) wml_miniature_view_pane_g7

0x5aea,	// (0x00043092) wml_miniature_view_pane_g8

0x0007,

0xf660,	// (0x0004cc08) wml_miniature_view_pane_g

0xc9a2,	// (0x00049f4a) background_graphic_ParamLimits

0xc9a2,	// (0x00049f4a) background_graphic

0xc9dc,	// (0x00049f84) wml_tabs_2_pane

0xc9e5,	// (0x00049f8d) wml_tabs_3_pane_ParamLimits

0xc9e5,	// (0x00049f8d) wml_tabs_3_pane

0xc9f7,	// (0x00049f9f) wml_tabs_4_pane_ParamLimits

0xc9f7,	// (0x00049f9f) wml_tabs_4_pane

0xca0d,	// (0x00049fb5) wml_tabs_5_pane_ParamLimits

0xca0d,	// (0x00049fb5) wml_tabs_5_pane

0xca27,	// (0x00049fcf) wml_tabs_pane_g2_ParamLimits

0xca27,	// (0x00049fcf) wml_tabs_pane_g2

0xca3b,	// (0x00049fe3) wml_tabs_pane_g3_ParamLimits

0xca3b,	// (0x00049fe3) wml_tabs_pane_g3

0x5af2,	// (0x0004309a) wml_tabs_2_active_pane_ParamLimits

0x5af2,	// (0x0004309a) wml_tabs_2_active_pane

0x5b02,	// (0x000430aa) wml_tabs_2_passive_pane_ParamLimits

0x5b02,	// (0x000430aa) wml_tabs_2_passive_pane

0x5b12,	// (0x000430ba) wml_tabs_3_active_pane_cp_ParamLimits

0x5b12,	// (0x000430ba) wml_tabs_3_active_pane_cp

0x5b23,	// (0x000430cb) wml_tabs_3_passive_pane_ParamLimits

0x5b23,	// (0x000430cb) wml_tabs_3_passive_pane

0x5b34,	// (0x000430dc) wml_tabs_3_passive_pane_cp_ParamLimits

0x5b34,	// (0x000430dc) wml_tabs_3_passive_pane_cp

0x5b45,	// (0x000430ed) tabs_4_active_pane

0x5b4d,	// (0x000430f5) tabs_4_passive_pane

0x5b55,	// (0x000430fd) tabs_4_passive_pane_cp

0x5b5d,	// (0x00043105) tabs_4_passive_pane_cp2

0x508a,	// (0x00042632) aid_height_text

0x48a0,	// (0x00041e48) mup_volume_cont_pane_ParamLimits

0x48a0,	// (0x00041e48) mup_volume_cont_pane

0x24d7,	// (0x0003fa7f) aid_size_cell_pinb

0x24e1,	// (0x0003fa89) aid_size_list_pinb

0x5a57,	// (0x00042fff) mup2_volume_cont_pane_ParamLimits

0x5a57,	// (0x00042fff) mup2_volume_cont_pane

0x5b65,	// (0x0004310d) mup2_volume_cont_pane_g1_ParamLimits

0x5b65,	// (0x0004310d) mup2_volume_cont_pane_g1

0x2114,	// (0x0003f6bc) aid_size_cell_touch_ParamLimits

0x2114,	// (0x0003f6bc) aid_size_cell_touch

0x23bd,	// (0x0003f965) touch_pane_ParamLimits

0x23bd,	// (0x0003f965) touch_pane

0xa143,	// (0x000476eb) main_rss2_pane

0xca58,	// (0x0004a000) listscroll_rss2_pane

0xca61,	// (0x0004a009) rss2_navigation_pane

0xca69,	// (0x0004a011) list_rss2_pane

0xb29b,	// (0x00048843) scroll_pane_cp22

0xca71,	// (0x0004a019) rss2_navigation_pane_g1

0xca7a,	// (0x0004a022) rss2_navigation_pane_g2

0xca82,	// (0x0004a02a) rss2_navigation_pane_g3

0x0002,

0xf671,	// (0x0004cc19) rss2_navigation_pane_g

0xca8a,	// (0x0004a032) rss2_navigation_pane_t1

0x5b9e,	// (0x00043146) rss2_list_single_pane_ParamLimits

0x5b9e,	// (0x00043146) rss2_list_single_pane

0xca98,	// (0x0004a040) rss2_list_single_pane_t2

0xcaa6,	// (0x0004a04e) rss2_list_single_pane_t3_ParamLimits

0xcaa6,	// (0x0004a04e) rss2_list_single_pane_t3

0xcac3,	// (0x0004a06b) rss2_list_single_pane_t4

0x41f3,	// (0x0004179b) smil_status_pane_g1

0xb494,	// (0x00048a3c) main_image2_pane_ParamLimits

0xb494,	// (0x00048a3c) main_image2_pane

0x576a,	// (0x00042d12) main_camera2_pane_g9_ParamLimits

0x576a,	// (0x00042d12) main_camera2_pane_g9

0x57be,	// (0x00042d66) main_camera2_pane_t5_ParamLimits

0x57be,	// (0x00042d66) main_camera2_pane_t5

0x57d0,	// (0x00042d78) main_camera2_pane_t6_ParamLimits

0x57d0,	// (0x00042d78) main_camera2_pane_t6

0x5bcf,	// (0x00043177) main_image2_pane_g1_ParamLimits

0x5bcf,	// (0x00043177) main_image2_pane_g1

0x4e2a,	// (0x000423d2) smil2_video_pane_ParamLimits

0x4e2a,	// (0x000423d2) smil2_video_pane

0x0d2e,	// (0x0003e2d6) aid_zoom_text_primary_cp

0x2366,	// (0x0003f90e) popup_preview_fixed_window

0xab72,	// (0x0004811a) im_reading_pane_g1

0x56b4,	// (0x00042c5c) cams2_bc_adjust_pane_cp_ParamLimits

0x56b4,	// (0x00042c5c) cams2_bc_adjust_pane_cp

0x5800,	// (0x00042da8) cams2_bc_adjust_pane_ParamLimits

0x5800,	// (0x00042da8) cams2_bc_adjust_pane

0x5bdb,	// (0x00043183) cams2_bc_adjust_pane_g1

0x5be3,	// (0x0004318b) cams2_slider_pane

0x5bec,	// (0x00043194) cams2_slider_pane_g1

0x5bf5,	// (0x0004319d) cams2_slider_pane_g2

0x0006,

0xf678,	// (0x0004cc20) cams2_slider_pane_g

0x25e7,	// (0x0003fb8f) calc_display_pane_ParamLimits

0x2605,	// (0x0003fbad) calc_paper_pane_ParamLimits

0x2621,	// (0x0003fbc9) grid_calc_pane_ParamLimits

0x43f4,	// (0x0004199c) popup_clock_digital_window_t1_ParamLimits

0xb77f,	// (0x00048d27) main_image_pane_t1

0x25cd,	// (0x0003fb75) aid_size_cell_calc_ParamLimits

0x25cd,	// (0x0003fb75) aid_size_cell_calc

0x52ff,	// (0x000428a7) popup_blid_sat_info2_window_ParamLimits

0x52ff,	// (0x000428a7) popup_blid_sat_info2_window

0xcad9,	// (0x0004a081) aid_size_cell_blid

0xcae1,	// (0x0004a089) bg_popup_window_pane_cp07

0xcb04,	// (0x0004a0ac) grid_popup_blid_pane

0xcb0e,	// (0x0004a0b6) heading_pane_cp05_ParamLimits

0xcb0e,	// (0x0004a0b6) heading_pane_cp05

0xcbd8,	// (0x0004a180) cell_popup_blid_pane_ParamLimits

0xcbd8,	// (0x0004a180) cell_popup_blid_pane

0xcbfc,	// (0x0004a1a4) cell_popup_blid_pane_g1

0xcc04,	// (0x0004a1ac) cell_popup_blid_pane_t1

0x5a1d,	// (0x00042fc5) mup2_indicator_pane_ParamLimits

0x5a1d,	// (0x00042fc5) mup2_indicator_pane

0xaa79,	// (0x00048021) mup2_visualizer_osc_pane

0xc9ba,	// (0x00049f62) mup2_visualizer_spec_pane_ParamLimits

0xc9ba,	// (0x00049f62) mup2_visualizer_spec_pane

0x5c0f,	// (0x000431b7) mup2_spec_half_pane

0x5c18,	// (0x000431c0) mup2_spec_half_pane_cp

0x5c22,	// (0x000431ca) mup2_spec_bar_pane_ParamLimits

0x5c22,	// (0x000431ca) mup2_spec_bar_pane

0xc94f,	// (0x00049ef7) mup2_spec_bar_pane_g1

0xc959,	// (0x00049f01) mup2_spec_bar_pane_g2

0x0001,

0xf5eb,	// (0x0004cb93) mup2_spec_bar_pane_g

0x5c41,	// (0x000431e9) mup2_osc_middle_pane

0xc96b,	// (0x00049f13) mup2_visualizer_osc_pane_g1

0xa16d,	// (0x00047715) popup_number_entry_window_t1_ParamLimits

0xa180,	// (0x00047728) popup_number_entry_window_t2_ParamLimits

0xa192,	// (0x0004773a) popup_number_entry_window_t3_ParamLimits

0x2414,	// (0x0003f9bc) popup_number_entry_window_t5_ParamLimits

0x2414,	// (0x0003f9bc) popup_number_entry_window_t5

0xf0af,	// (0x0004c657) popup_number_entry_window_t_ParamLimits

0xa1a4,	// (0x0004774c) text_title_cp2_ParamLimits

0x4b1e,	// (0x000420c6) aid_hotspot_pointer_text2_pane

0x4bb8,	// (0x00042160) main_viewer_pane_g9_ParamLimits

0x4bb8,	// (0x00042160) main_viewer_pane_g9

0xadab,	// (0x00048353) cale_month_pane_t1_ParamLimits

0xade8,	// (0x00048390) bg_cale_pane_ParamLimits

0xae00,	// (0x000483a8) list_cale_pane_ParamLimits

0xae11,	// (0x000483b9) listscroll_cale_day_pane_t1

0xae23,	// (0x000483cb) scroll_pane_cp09_ParamLimits

0x48db,	// (0x00041e83) main_mup_eq_pane_t1_ParamLimits

0x48db,	// (0x00041e83) main_mup_eq_pane_t1

0x48f5,	// (0x00041e9d) main_mup_eq_pane_t2_ParamLimits

0x48f5,	// (0x00041e9d) main_mup_eq_pane_t2

0x490f,	// (0x00041eb7) main_mup_eq_pane_t3_ParamLimits

0x490f,	// (0x00041eb7) main_mup_eq_pane_t3

0x4927,	// (0x00041ecf) main_mup_eq_pane_t4_ParamLimits

0x4927,	// (0x00041ecf) main_mup_eq_pane_t4

0x493f,	// (0x00041ee7) main_mup_eq_pane_t5_ParamLimits

0x493f,	// (0x00041ee7) main_mup_eq_pane_t5

0x4957,	// (0x00041eff) main_mup_eq_pane_t6_ParamLimits

0x4957,	// (0x00041eff) main_mup_eq_pane_t6

0x496b,	// (0x00041f13) main_mup_eq_pane_t7_ParamLimits

0x496b,	// (0x00041f13) main_mup_eq_pane_t7

0x497f,	// (0x00041f27) main_mup_eq_pane_t8_ParamLimits

0x497f,	// (0x00041f27) main_mup_eq_pane_t8

0x4995,	// (0x00041f3d) main_mup_eq_pane_t9_ParamLimits

0x4995,	// (0x00041f3d) main_mup_eq_pane_t9

0x49ad,	// (0x00041f55) main_mup_eq_pane_t10_ParamLimits

0x49ad,	// (0x00041f55) main_mup_eq_pane_t10

0x0009,

0xf43a,	// (0x0004c9e2) main_mup_eq_pane_t_ParamLimits

0xf43a,	// (0x0004c9e2) main_mup_eq_pane_t

0x4a6a,	// (0x00042012) mup_equalizer_pane_cp5_ParamLimits

0x4a80,	// (0x00042028) mup_equalizer_pane_cp6_ParamLimits

0x4a98,	// (0x00042040) mup_equalizer_pane_cp7_ParamLimits

0xa143,	// (0x000476eb) main_gallery_pane

0xc974,	// (0x00049f1c) smil2_volume_pane

0xc97c,	// (0x00049f24) smil_status_volume_pane_g1_ParamLimits

0xc98f,	// (0x00049f37) smil_status_volume_pane_g2_ParamLimits

0x5527,	// (0x00042acf) smil_status_volume_pane_g3_ParamLimits

0xf5f0,	// (0x0004cb98) smil_status_volume_pane_g_ParamLimits

0xcae1,	// (0x0004a089) bg_popup_window_pane_cp07_ParamLimits

0xcaef,	// (0x0004a097) blid_firmament_pane

0x5c4a,	// (0x000431f2) aid_size_cell_gallery_ParamLimits

0x5c4a,	// (0x000431f2) aid_size_cell_gallery

0x5c58,	// (0x00043200) grid_gallery_pane_ParamLimits

0x5c58,	// (0x00043200) grid_gallery_pane

0x5c68,	// (0x00043210) cell_gallery_pane_ParamLimits

0x5c68,	// (0x00043210) cell_gallery_pane

0xcc12,	// (0x0004a1ba) bg_cell_gallery_focus_pane_ParamLimits

0xcc12,	// (0x0004a1ba) bg_cell_gallery_focus_pane

0xcc24,	// (0x0004a1cc) cell_gallery_pane_g1_ParamLimits

0xcc24,	// (0x0004a1cc) cell_gallery_pane_g1

0x5cb6,	// (0x0004325e) cell_gallery_pane_g2_ParamLimits

0x5cb6,	// (0x0004325e) cell_gallery_pane_g2

0x5cc3,	// (0x0004326b) cell_gallery_pane_g3_ParamLimits

0x5cc3,	// (0x0004326b) cell_gallery_pane_g3

0xcc30,	// (0x0004a1d8) cell_gallery_pane_g4_ParamLimits

0xcc30,	// (0x0004a1d8) cell_gallery_pane_g4

0x0003,

0xf69e,	// (0x0004cc46) cell_gallery_pane_g_ParamLimits

0xf69e,	// (0x0004cc46) cell_gallery_pane_g

0xcc3c,	// (0x0004a1e4) bg_cell_gallery_focus_pane_g1

0xcc44,	// (0x0004a1ec) bg_cell_gallery_focus_pane_g2

0xcc4c,	// (0x0004a1f4) bg_cell_gallery_focus_pane_g3

0xcc54,	// (0x0004a1fc) bg_cell_gallery_focus_pane_g4

0xcc5c,	// (0x0004a204) bg_cell_gallery_focus_pane_g5

0xcc64,	// (0x0004a20c) bg_cell_gallery_focus_pane_g6

0xcc6c,	// (0x0004a214) bg_cell_gallery_focus_pane_g7

0xcc74,	// (0x0004a21c) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6a7,	// (0x0004cc4f) bg_cell_gallery_focus_pane_g

0xcc7c,	// (0x0004a224) aid_firma_cardinal

0xcc90,	// (0x0004a238) blid_firmament_pane_t1

0xcca7,	// (0x0004a24f) blid_firmament_pane_t2

0xccbe,	// (0x0004a266) blid_firmament_pane_t3

0xccd5,	// (0x0004a27d) blid_firmament_pane_t4

0x0003,

0xf6b8,	// (0x0004cc60) blid_firmament_pane_t

0xccec,	// (0x0004a294) blid_sat_info_pane

0xccfc,	// (0x0004a2a4) blid_sat_info_pane_g1

0xccfc,	// (0x0004a2a4) blid_sat_info_pane_g2

0x0001,

0xf6c1,	// (0x0004cc69) blid_sat_info_pane_g

0xcd06,	// (0x0004a2ae) blid_sat_info_pane_t1

0xcd14,	// (0x0004a2bc) smil2_volume_content_pane

0xcd1d,	// (0x0004a2c5) smil2_volume_pane_g1

0xae34,	// (0x000483dc) smil2_volume_content_pane_g1

0xcd31,	// (0x0004a2d9) smil2_volume_content_pane_g2

0xcd3a,	// (0x0004a2e2) smil2_volume_content_pane_g3

0xcd43,	// (0x0004a2eb) smil2_volume_content_pane_g4

0xcd4c,	// (0x0004a2f4) smil2_volume_content_pane_g5

0xcd55,	// (0x0004a2fd) smil2_volume_content_pane_g6

0xcd5e,	// (0x0004a306) smil2_volume_content_pane_g7

0xcd67,	// (0x0004a30f) smil2_volume_content_pane_g8

0xcd70,	// (0x0004a318) smil2_volume_content_pane_g9

0xcd79,	// (0x0004a321) smil2_volume_content_pane_g10

0x0009,

0xf6c6,	// (0x0004cc6e) smil2_volume_content_pane_g

0x2bfe,	// (0x000401a6) cale_week_day_heading_pane_t1_ParamLimits

0x2c19,	// (0x000401c1) cale_week_day_heading_pane_t2_ParamLimits

0x2c34,	// (0x000401dc) cale_week_day_heading_pane_t3_ParamLimits

0x2c4f,	// (0x000401f7) cale_week_day_heading_pane_t4_ParamLimits

0x2c6a,	// (0x00040212) cale_week_day_heading_pane_t5_ParamLimits

0x2c85,	// (0x0004022d) cale_week_day_heading_pane_t6_ParamLimits

0x2ca0,	// (0x00040248) cale_week_day_heading_pane_t7_ParamLimits

0xf1b6,	// (0x0004c75e) cale_week_day_heading_pane_t_ParamLimits

0xaa1e,	// (0x00047fc6) bg_cale_side_pane_ParamLimits

0x2cbb,	// (0x00040263) cale_week_time_pane_t1_ParamLimits

0x2cd5,	// (0x0004027d) cale_week_time_pane_t2_ParamLimits

0x2cef,	// (0x00040297) cale_week_time_pane_t3_ParamLimits

0x2d09,	// (0x000402b1) cale_week_time_pane_t4_ParamLimits

0x2d23,	// (0x000402cb) cale_week_time_pane_t5_ParamLimits

0x2d3d,	// (0x000402e5) cale_week_time_pane_t6_ParamLimits

0x2d5b,	// (0x00040303) cale_week_time_pane_t7_ParamLimits

0x2d7d,	// (0x00040325) cale_week_time_pane_t8_ParamLimits

0xf1c5,	// (0x0004c76d) cale_week_time_pane_t_ParamLimits

0x2da1,	// (0x00040349) cell_cale_week_pane_g2_ParamLimits

0xaa1e,	// (0x00047fc6) bg_cale_side_pane_cp01_ParamLimits

0x3fe8,	// (0x00041590) cale_month_week_pane_t1_ParamLimits

0x4001,	// (0x000415a9) cale_month_week_pane_t2_ParamLimits

0x401a,	// (0x000415c2) cale_month_week_pane_t3_ParamLimits

0x4033,	// (0x000415db) cale_month_week_pane_t4_ParamLimits

0x404c,	// (0x000415f4) cale_month_week_pane_t5_ParamLimits

0x406d,	// (0x00041615) cale_month_week_pane_t6_ParamLimits

0xf29a,	// (0x0004c842) cale_month_week_pane_t_ParamLimits

0x41b0,	// (0x00041758) cell_cale_month_pane_g1_ParamLimits

0xa143,	// (0x000476eb) main_cale_event_viewer_pane

0xa143,	// (0x000476eb) listscroll_cale_event_viewer_pane

0xcd82,	// (0x0004a32a) list_cale_ev_pane

0xcd8a,	// (0x0004a332) scroll_pane_cp023

0xcd96,	// (0x0004a33e) field_cale_ev_pane_ParamLimits

0xcd96,	// (0x0004a33e) field_cale_ev_pane

0xcdb4,	// (0x0004a35c) field_cale_ev_content_pane_ParamLimits

0xcdb4,	// (0x0004a35c) field_cale_ev_content_pane

0xcdc0,	// (0x0004a368) field_cale_ev_pane_g1_ParamLimits

0xcdc0,	// (0x0004a368) field_cale_ev_pane_g1

0xcdcc,	// (0x0004a374) field_cale_ev_pane_g2_ParamLimits

0xcdcc,	// (0x0004a374) field_cale_ev_pane_g2

0xcde4,	// (0x0004a38c) field_cale_ev_pane_g3_ParamLimits

0xcde4,	// (0x0004a38c) field_cale_ev_pane_g3

0x0002,

0xf6db,	// (0x0004cc83) field_cale_ev_pane_g_ParamLimits

0xf6db,	// (0x0004cc83) field_cale_ev_pane_g

0xcdfc,	// (0x0004a3a4) field_cale_ev_pane_t1_ParamLimits

0xcdfc,	// (0x0004a3a4) field_cale_ev_pane_t1

0xce13,	// (0x0004a3bb) field_cale_ev_content_pane_t1_ParamLimits

0xce13,	// (0x0004a3bb) field_cale_ev_content_pane_t1

0xb665,	// (0x00048c0d) bg_button_pane_cp01

0x298f,	// (0x0003ff37) listscroll_cale_week_pane_ParamLimits

0xa9c9,	// (0x00047f71) popup_toolbar_window_cp01

0xa9ef,	// (0x00047f97) listscroll_cale_week_pane_t1_ParamLimits

0x298f,	// (0x0003ff37) listscroll_cale_day_pane_ParamLimits

0xa9c9,	// (0x00047f71) popup_toolbar_window_cp02

0xae11,	// (0x000483b9) listscroll_cale_day_pane_t1_ParamLimits

0x298f,	// (0x0003ff37) main_cale_month_pane_ParamLimits

0x5406,	// (0x000429ae) popup_toolbar_window_cp03_ParamLimits

0x5406,	// (0x000429ae) popup_toolbar_window_cp03

0x4d40,	// (0x000422e8) main_image_pane_g2_ParamLimits

0x4d40,	// (0x000422e8) main_image_pane_g2

0x4d4c,	// (0x000422f4) main_image_pane_g3_ParamLimits

0x4d4c,	// (0x000422f4) main_image_pane_g3

0x0002,

0xf4cc,	// (0x0004ca74) main_image_pane_g_ParamLimits

0xf4cc,	// (0x0004ca74) main_image_pane_g

0xb77f,	// (0x00048d27) main_image_pane_t1_ParamLimits

0x4d58,	// (0x00042300) main_image_pane_t2_ParamLimits

0x4d58,	// (0x00042300) main_image_pane_t2

0x4d6a,	// (0x00042312) main_image_pane_t3_ParamLimits

0x4d6a,	// (0x00042312) main_image_pane_t3

0x4d7c,	// (0x00042324) main_image_pane_t4_ParamLimits

0x4d7c,	// (0x00042324) main_image_pane_t4

0x0003,

0xf4d3,	// (0x0004ca7b) main_image_pane_t_ParamLimits

0xf4d3,	// (0x0004ca7b) main_image_pane_t

0x4d8e,	// (0x00042336) popup_image_details_window_cp01

0x4d98,	// (0x00042340) popup_toobar_trans_pane_cp01_ParamLimits

0x4d98,	// (0x00042340) popup_toobar_trans_pane_cp01

0x5356,	// (0x000428fe) popup_image_details_window_ParamLimits

0x5356,	// (0x000428fe) popup_image_details_window

0x5364,	// (0x0004290c) popup_image_focus_window

0x56a6,	// (0x00042c4e) camera2_autofocus_pane_ParamLimits

0x56a6,	// (0x00042c4e) camera2_autofocus_pane

0xa143,	// (0x000476eb) bg_popup_sub_pane_cp06

0xce31,	// (0x0004a3d9) popup_image_focus_window_g1

0xce39,	// (0x0004a3e1) popup_image_focus_window_g2

0xce41,	// (0x0004a3e9) popup_image_focus_window_g3

0xce49,	// (0x0004a3f1) popup_image_focus_window_g4

0x0003,

0xf6e2,	// (0x0004cc8a) popup_image_focus_window_g

0xce51,	// (0x0004a3f9) popup_image_focus_window_t1

0xce5f,	// (0x0004a407) popup_image_focus_window_t2

0xce6f,	// (0x0004a417) popup_image_focus_window_t3

0x0002,

0xf6eb,	// (0x0004cc93) popup_image_focus_window_t

0xce7d,	// (0x0004a425) camera2_autofocus_pane_g1

0xb494,	// (0x00048a3c) bg_tb_trans_pane_cp01

0xce8b,	// (0x0004a433) popup_image_details_window_g1

0xce9e,	// (0x0004a446) popup_image_details_window_g2

0x0002,

0xf6fd,	// (0x0004cca5) popup_image_details_window_g

0xcec7,	// (0x0004a46f) popup_image_details_window_t1

0xced9,	// (0x0004a481) popup_image_details_window_t2

0xcef2,	// (0x0004a49a) popup_image_details_window_t3

0xcf06,	// (0x0004a4ae) popup_image_details_window_t4

0xcf21,	// (0x0004a4c9) popup_image_details_window_t5

0x0004,

0xf704,	// (0x0004ccac) popup_image_details_window_t

0xa8a0,	// (0x00047e48) bg_calc_paper_pane_ParamLimits

0xa143,	// (0x000476eb) grid_highlight_pane_cp013

0x271e,	// (0x0003fcc6) list_calc_pane_ParamLimits

0x2730,	// (0x0003fcd8) scroll_pane_cp024

0xa8b4,	// (0x00047e5c) bg_calc_display_pane_ParamLimits

0x2738,	// (0x0003fce0) calc_display_pane_t1_ParamLimits

0x274d,	// (0x0003fcf5) calc_display_pane_t2_ParamLimits

0x2762,	// (0x0003fd0a) calc_display_pane_t3_ParamLimits

0xf136,	// (0x0004c6de) calc_display_pane_t_ParamLimits

0x283b,	// (0x0003fde3) cell_calc_pane_g2

0x0001,

0xf153,	// (0x0004c6fb) cell_calc_pane_g

0x2844,	// (0x0003fdec) cell_calc_pane_t1

0xa913,	// (0x00047ebb) grid_highlight_pane_cp02_ParamLimits

0xa929,	// (0x00047ed1) toolbar_button_pane_cp01_ParamLimits

0xa929,	// (0x00047ed1) toolbar_button_pane_cp01

0xb7c4,	// (0x00048d6c) temp_image_control_pane_ParamLimits

0xb7c4,	// (0x00048d6c) temp_image_control_pane

0xb494,	// (0x00048a3c) main_mp3_pane

0xcf3b,	// (0x0004a4e3) temp_image_control_pane_g1_ParamLimits

0xcf3b,	// (0x0004a4e3) temp_image_control_pane_g1

0xcf49,	// (0x0004a4f1) temp_image_control_pane_g2_ParamLimits

0xcf49,	// (0x0004a4f1) temp_image_control_pane_g2

0xcf5b,	// (0x0004a503) temp_image_control_pane_g3_ParamLimits

0xcf5b,	// (0x0004a503) temp_image_control_pane_g3

0x5d00,	// (0x000432a8) temp_image_control_pane_g4_ParamLimits

0x5d00,	// (0x000432a8) temp_image_control_pane_g4

0x0003,

0xf70f,	// (0x0004ccb7) temp_image_control_pane_g_ParamLimits

0xf70f,	// (0x0004ccb7) temp_image_control_pane_g

0xcf3b,	// (0x0004a4e3) main_mp3_pane_g1

0x5d11,	// (0x000432b9) main_mp3_pane_g2

0x0007,

0xf718,	// (0x0004ccc0) main_mp3_pane_g

0xcf9e,	// (0x0004a546) main_mp3_pane_t1

0xaa81,	// (0x00048029) main_camera_pane_g8_ParamLimits

0xaa81,	// (0x00048029) main_camera_pane_g8

0x302e,	// (0x000405d6) main_video_pane_g7_ParamLimits

0x302e,	// (0x000405d6) main_video_pane_g7

0x57ee,	// (0x00042d96) main_camera2_pane_t7_ParamLimits

0x57ee,	// (0x00042d96) main_camera2_pane_t7

0xabc9,	// (0x00048171) scroll_pane_cp025_ParamLimits

0xabc9,	// (0x00048171) scroll_pane_cp025

0xabdd,	// (0x00048185) scroll_pane_cp026_ParamLimits

0xabdd,	// (0x00048185) scroll_pane_cp026

0xabec,	// (0x00048194) wml_content_pane_ParamLimits

0xa143,	// (0x000476eb) main_touch_calib_pane

0x5db5,	// (0x0004335d) main_touch_calib_pane_g1

0x5dc1,	// (0x00043369) main_touch_calib_pane_g2

0x5dcd,	// (0x00043375) main_touch_calib_pane_g3

0x5dd9,	// (0x00043381) main_touch_calib_pane_g4

0x0003,

0xf736,	// (0x0004ccde) main_touch_calib_pane_g

0x5de5,	// (0x0004338d) main_touch_calib_pane_t1

0x5dfe,	// (0x000433a6) main_touch_calib_pane_t2

0x0004,

0xf73f,	// (0x0004cce7) main_touch_calib_pane_t

0xb377,	// (0x0004891f) mup_progress_pane_cp02

0xb3ac,	// (0x00048954) navi_pane_g1

0xb467,	// (0x00048a0f) navi_pane_mp_t3

0xb494,	// (0x00048a3c) main_mp3_pane_ParamLimits

0x5443,	// (0x000429eb) navi_pane_ParamLimits

0xcf3b,	// (0x0004a4e3) main_mp3_pane_g1_ParamLimits

0x5d11,	// (0x000432b9) main_mp3_pane_g2_ParamLimits

0x5d1d,	// (0x000432c5) main_mp3_pane_g3_ParamLimits

0x5d1d,	// (0x000432c5) main_mp3_pane_g3

0x5d29,	// (0x000432d1) main_mp3_pane_g4_ParamLimits

0x5d29,	// (0x000432d1) main_mp3_pane_g4

0xcf6b,	// (0x0004a513) main_mp3_pane_g5_ParamLimits

0xcf6b,	// (0x0004a513) main_mp3_pane_g5

0xcf79,	// (0x0004a521) main_mp3_pane_g6_ParamLimits

0xcf79,	// (0x0004a521) main_mp3_pane_g6

0xcf86,	// (0x0004a52e) main_mp3_pane_g7_ParamLimits

0xcf86,	// (0x0004a52e) main_mp3_pane_g7

0xcf92,	// (0x0004a53a) main_mp3_pane_g8_ParamLimits

0xcf92,	// (0x0004a53a) main_mp3_pane_g8

0xf718,	// (0x0004ccc0) main_mp3_pane_g_ParamLimits

0x5d35,	// (0x000432dd) main_mp3_pane_t2

0x5d45,	// (0x000432ed) main_mp3_pane_t3

0xcfac,	// (0x0004a554) main_mp3_pane_t4

0xcfba,	// (0x0004a562) main_mp3_pane_t5

0x0005,

0xf729,	// (0x0004ccd1) main_mp3_pane_t

0xcfc8,	// (0x0004a570) mup_progress_pane_cp01

0x0d2e,	// (0x0003e2d6) aid_zoom_text_secondary2

0xcd82,	// (0x0004a32a) list_cale_ev2_pane

0xcd8a,	// (0x0004a332) scroll_pane_cp023_ParamLimits

0x5e59,	// (0x00043401) field_cale_ev2_pane_ParamLimits

0x5e59,	// (0x00043401) field_cale_ev2_pane

0x104b,	// (0x0003e5f3) field_cale_ev2_pane_g1_ParamLimits

0x104b,	// (0x0003e5f3) field_cale_ev2_pane_g1

0x1057,	// (0x0003e5ff) field_cale_ev2_pane_g2_ParamLimits

0x1057,	// (0x0003e5ff) field_cale_ev2_pane_g2

0x106f,	// (0x0003e617) field_cale_ev2_pane_g3_ParamLimits

0x106f,	// (0x0003e617) field_cale_ev2_pane_g3

0x0003,

0xf74a,	// (0x0004ccf2) field_cale_ev2_pane_g_ParamLimits

0xf74a,	// (0x0004ccf2) field_cale_ev2_pane_g

0x1093,	// (0x0003e63b) field_cale_ev2_pane_t1_ParamLimits

0x1093,	// (0x0003e63b) field_cale_ev2_pane_t1

0x10aa,	// (0x0003e652) field_cale_ev2_pane_t2_ParamLimits

0x10aa,	// (0x0003e652) field_cale_ev2_pane_t2

0x0001,

0xf753,	// (0x0004ccfb) field_cale_ev2_pane_t_ParamLimits

0xf753,	// (0x0004ccfb) field_cale_ev2_pane_t

0x4c20,	// (0x000421c8) main_postcard_pane_g5_ParamLimits

0x4c20,	// (0x000421c8) main_postcard_pane_g5

0x4c2e,	// (0x000421d6) main_postcard_pane_g6_ParamLimits

0x4c2e,	// (0x000421d6) main_postcard_pane_g6

0x2e78,	// (0x00040420) camera2_autofocus_pane_cp_ParamLimits

0x2e78,	// (0x00040420) camera2_autofocus_pane_cp

0xb494,	// (0x00048a3c) main_mup3_pane

0x5ea1,	// (0x00043449) main_mup3_pane_g1_ParamLimits

0x5ea1,	// (0x00043449) main_mup3_pane_g1

0x5ec2,	// (0x0004346a) main_mup3_pane_g2_ParamLimits

0x5ec2,	// (0x0004346a) main_mup3_pane_g2

0x5f3a,	// (0x000434e2) main_mup3_pane_g3_ParamLimits

0x5f3a,	// (0x000434e2) main_mup3_pane_g3

0x5f7d,	// (0x00043525) main_mup3_pane_g4_ParamLimits

0x5f7d,	// (0x00043525) main_mup3_pane_g4

0x5fc0,	// (0x00043568) main_mup3_pane_g5_ParamLimits

0x5fc0,	// (0x00043568) main_mup3_pane_g5

0x6003,	// (0x000435ab) main_mup3_pane_g6_ParamLimits

0x6003,	// (0x000435ab) main_mup3_pane_g6

0xcff0,	// (0x0004a598) main_mup3_pane_g7_ParamLimits

0xcff0,	// (0x0004a598) main_mup3_pane_g7

0x0007,

0xf763,	// (0x0004cd0b) main_mup3_pane_g_ParamLimits

0xf763,	// (0x0004cd0b) main_mup3_pane_g

0x6079,	// (0x00043621) main_mup3_pane_t1_ParamLimits

0x6079,	// (0x00043621) main_mup3_pane_t1

0x60e8,	// (0x00043690) main_mup3_pane_t2_ParamLimits

0x60e8,	// (0x00043690) main_mup3_pane_t2

0x61b1,	// (0x00043759) main_mup3_pane_t4_ParamLimits

0x61b1,	// (0x00043759) main_mup3_pane_t4

0x61ff,	// (0x000437a7) main_mup3_pane_t5_ParamLimits

0x61ff,	// (0x000437a7) main_mup3_pane_t5

0x62af,	// (0x00043857) main_mup3_pane_t6_ParamLimits

0x62af,	// (0x00043857) main_mup3_pane_t6

0x0005,

0xf774,	// (0x0004cd1c) main_mup3_pane_t_ParamLimits

0xf774,	// (0x0004cd1c) main_mup3_pane_t

0x635b,	// (0x00043903) mup3_progress_pane_ParamLimits

0x635b,	// (0x00043903) mup3_progress_pane

0x63d9,	// (0x00043981) popup_mup3_control_window_ParamLimits

0x63d9,	// (0x00043981) popup_mup3_control_window

0xcffe,	// (0x0004a5a6) popup_mup3_text_window

0x63f2,	// (0x0004399a) mup3_progress_pane_t1

0x6411,	// (0x000439b9) mup3_progress_pane_t2

0xd006,	// (0x0004a5ae) mup3_progress_pane_t3

0x0002,

0xf781,	// (0x0004cd29) mup3_progress_pane_t

0xd023,	// (0x0004a5cb) mup_progress_pane_cp03

0xa143,	// (0x000476eb) bg_tb_trans_pane_cp04

0x6430,	// (0x000439d8) mup3_volume_pane

0x6438,	// (0x000439e0) popup_mup3_control_window_g1

0x6441,	// (0x000439e9) mup3_volume_pane_g1

0x644a,	// (0x000439f2) mup3_volume_pane_g2

0x6453,	// (0x000439fb) mup3_volume_pane_g3

0x0002,

0xf788,	// (0x0004cd30) mup3_volume_pane_g

0xa143,	// (0x000476eb) bg_tb_trans_pane_cp03

0xd033,	// (0x0004a5db) popup_mup3_text_window_g1

0xd03b,	// (0x0004a5e3) popup_mup3_text_window_t1

0xa8fc,	// (0x00047ea4) list_calc_item_pane_g1_ParamLimits

0xca4f,	// (0x00049ff7) mup_volume_pane_cp_g1

0x5e17,	// (0x000433bf) main_touch_calib_pane_t3

0x5e2d,	// (0x000433d5) main_touch_calib_pane_t4

0x5e43,	// (0x000433eb) main_touch_calib_pane_t5

0x2100,	// (0x0003f6a8) aid_cell_size_toolbar2

0x2108,	// (0x0003f6b0) aid_popup3_width_pane

0x0d26,	// (0x0003e2ce) aid_zoom_text_msg_primary

0x2e4d,	// (0x000403f5) vorec_t7

0xa8c0,	// (0x00047e68) bg_calc_paper_pane_g1_ParamLimits

0xa8cc,	// (0x00047e74) bg_calc_paper_pane_g2_ParamLimits

0xa8d8,	// (0x00047e80) bg_calc_paper_pane_g3_ParamLimits

0xa8e4,	// (0x00047e8c) bg_calc_paper_pane_g4_ParamLimits

0xa8f0,	// (0x00047e98) bg_calc_paper_pane_g5_ParamLimits

0x27a1,	// (0x0003fd49) bg_calc_paper_pane_g6_ParamLimits

0x27b2,	// (0x0003fd5a) bg_calc_paper_pane_g7_ParamLimits

0x27c3,	// (0x0003fd6b) bg_calc_paper_pane_g8_ParamLimits

0xf13d,	// (0x0004c6e5) bg_calc_paper_pane_g_ParamLimits

0x27d4,	// (0x0003fd7c) calc_bg_paper_pane_g9_ParamLimits

0x2f5f,	// (0x00040507) image_qvga_pane_ParamLimits

0x2f5f,	// (0x00040507) image_qvga_pane

0xa7ef,	// (0x00047d97) bg_popup_sub_pane_cp04_ParamLimits

0xb6fb,	// (0x00048ca3) popup_mup_playback_window_g1_ParamLimits

0xb707,	// (0x00048caf) popup_mup_playback_window_t1_ParamLimits

0xb71c,	// (0x00048cc4) popup_mup_playback_window_t2_ParamLimits

0xf4c7,	// (0x0004ca6f) popup_mup_playback_window_t_ParamLimits

0x591d,	// (0x00042ec5) main_mup2_pane_g3_ParamLimits

0x591d,	// (0x00042ec5) main_mup2_pane_g3

0x3217,	// (0x000407bf) popup_toolbar_window_cp04

0xbafe,	// (0x000490a6) popup_call2_audio_second_window_g3_ParamLimits

0xbafe,	// (0x000490a6) popup_call2_audio_second_window_g3

0xbf08,	// (0x000494b0) popup_call2_audio_first_window_g4_ParamLimits

0xbf08,	// (0x000494b0) popup_call2_audio_first_window_g4

0xc587,	// (0x00049b2f) popup_call2_audio_in_window_g4_ParamLimits

0xc587,	// (0x00049b2f) popup_call2_audio_in_window_g4

0x4d33,	// (0x000422db) aid_area_sk_bg_cut_ParamLimits

0x4d33,	// (0x000422db) aid_area_sk_bg_cut

0xb731,	// (0x00048cd9) aid_area_sk_bg_cut_2_ParamLimits

0xb731,	// (0x00048cd9) aid_area_sk_bg_cut_2

0x5ca6,	// (0x0004324e) aid_placing_details_win

0x5cae,	// (0x00043256) aid_placing_details_win_2

0xce7d,	// (0x0004a425) camera2_autofocus_pane_g1_ParamLimits

0x2357,	// (0x0003f8ff) popup_fixed_preview_cale_window_ParamLimits

0x2357,	// (0x0003f8ff) popup_fixed_preview_cale_window

0xb50d,	// (0x00048ab5) navi_slider_pane_g3

0xb516,	// (0x00048abe) navi_slider_pane_g4

0xb51f,	// (0x00048ac7) navi_slider_pane_g5

0xb50d,	// (0x00048ab5) navi_slider_pane_g6

0x466f,	// (0x00041c17) navi_slider_pane_g7

0xb632,	// (0x00048bda) mup_scale_pane_g3

0xb63b,	// (0x00048be3) mup_scale_pane_g4

0xb644,	// (0x00048bec) mup_scale_pane_g5

0x4ab0,	// (0x00042058) mup_scale_pane_g6

0x4ab9,	// (0x00042061) mup_scale_pane_g7

0xb50d,	// (0x00048ab5) cams2_slider_pane_g3

0xcad1,	// (0x0004a079) cams2_slider_pane_g4

0x5bfe,	// (0x000431a6) cams2_slider_pane_g5

0xb50d,	// (0x00048ab5) cams2_slider_pane_g6

0x5c06,	// (0x000431ae) cams2_slider_pane_g7

0xccfc,	// (0x0004a2a4) camera2_autofocus_pane_cp_g1

0xc8e8,	// (0x00049e90) bg_popup_preview_window_pane_cp02_ParamLimits

0xc8e8,	// (0x00049e90) bg_popup_preview_window_pane_cp02

0xd049,	// (0x0004a5f1) list_fp_cale_pane_ParamLimits

0xd049,	// (0x0004a5f1) list_fp_cale_pane

0xd055,	// (0x0004a5fd) popup_fixed_preview_cale_window_t1_ParamLimits

0xd055,	// (0x0004a5fd) popup_fixed_preview_cale_window_t1

0x645c,	// (0x00043a04) popup_fixed_preview_cale_window_t2_ParamLimits

0x645c,	// (0x00043a04) popup_fixed_preview_cale_window_t2

0x6471,	// (0x00043a19) popup_fixed_preview_cale_window_t3_ParamLimits

0x6471,	// (0x00043a19) popup_fixed_preview_cale_window_t3

0x0002,

0xf78f,	// (0x0004cd37) popup_fixed_preview_cale_window_t_ParamLimits

0xf78f,	// (0x0004cd37) popup_fixed_preview_cale_window_t

0x6486,	// (0x00043a2e) list_single_fp_cale_pane_ParamLimits

0x6486,	// (0x00043a2e) list_single_fp_cale_pane

0xd073,	// (0x0004a61b) list_single_fp_cale_pane_g1_ParamLimits

0xd073,	// (0x0004a61b) list_single_fp_cale_pane_g1

0xd07f,	// (0x0004a627) list_single_fp_cale_pane_g2_ParamLimits

0xd07f,	// (0x0004a627) list_single_fp_cale_pane_g2

0x0002,

0xf796,	// (0x0004cd3e) list_single_fp_cale_pane_g_ParamLimits

0xf796,	// (0x0004cd3e) list_single_fp_cale_pane_g

0xd098,	// (0x0004a640) list_single_fp_cale_pane_t1_ParamLimits

0xd098,	// (0x0004a640) list_single_fp_cale_pane_t1

0xd0aa,	// (0x0004a652) list_single_fp_cale_pane_t2_ParamLimits

0xd0aa,	// (0x0004a652) list_single_fp_cale_pane_t2

0x0001,

0xf79d,	// (0x0004cd45) list_single_fp_cale_pane_t_ParamLimits

0xf79d,	// (0x0004cd45) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xa143,	// (0x000476eb) main_dialer_pane

0x6499,	// (0x00043a41) aid_cell_size_keypad

0x64a3,	// (0x00043a4b) dialer_ne_pane

0x64ad,	// (0x00043a55) grid_dialer_command_1_pane

0x64b5,	// (0x00043a5d) grid_dialer_command_2_pane

0x64bd,	// (0x00043a65) grid_dialer_keypad_pane

0x64cf,	// (0x00043a77) bg_popup_call_pane_cp06_ParamLimits

0x64cf,	// (0x00043a77) bg_popup_call_pane_cp06

0x64db,	// (0x00043a83) dialer_ne_clear_pane_ParamLimits

0x64db,	// (0x00043a83) dialer_ne_clear_pane

0xd0dd,	// (0x0004a685) dialer_ne_pane_g1

0xd0e5,	// (0x0004a68d) dialer_ne_pane_t1_ParamLimits

0xd0e5,	// (0x0004a68d) dialer_ne_pane_t1

0x64e7,	// (0x00043a8f) dialer_ne_pane_t2_ParamLimits

0x64e7,	// (0x00043a8f) dialer_ne_pane_t2

0x6504,	// (0x00043aac) dialer_ne_pane_t3_ParamLimits

0x6504,	// (0x00043aac) dialer_ne_pane_t3

0x0002,

0xf7a2,	// (0x0004cd4a) dialer_ne_pane_t_ParamLimits

0xf7a2,	// (0x0004cd4a) dialer_ne_pane_t

0x6528,	// (0x00043ad0) dialer_ne_pane_t3_copy1_ParamLimits

0x6528,	// (0x00043ad0) dialer_ne_pane_t3_copy1

0x654c,	// (0x00043af4) cell_dialer_keypad_pane_ParamLimits

0x654c,	// (0x00043af4) cell_dialer_keypad_pane

0x6563,	// (0x00043b0b) cell_dialer_command_1_pane_ParamLimits

0x6563,	// (0x00043b0b) cell_dialer_command_1_pane

0x6579,	// (0x00043b21) cell_dialer_command_2_pane_ParamLimits

0x6579,	// (0x00043b21) cell_dialer_command_2_pane

0xd0f7,	// (0x0004a69f) bg_button_pane_cp02_ParamLimits

0xd0f7,	// (0x0004a69f) bg_button_pane_cp02

0x6588,	// (0x00043b30) cell_dialer_keypad_pane_g1_ParamLimits

0x6588,	// (0x00043b30) cell_dialer_keypad_pane_g1

0xd0f7,	// (0x0004a69f) bg_button_pane_cp03_ParamLimits

0xd0f7,	// (0x0004a69f) bg_button_pane_cp03

0x659d,	// (0x00043b45) cell_dialer_command_1_pane_g1_ParamLimits

0x659d,	// (0x00043b45) cell_dialer_command_1_pane_g1

0xd103,	// (0x0004a6ab) bg_button_pane_cp04

0x65b1,	// (0x00043b59) cell_dialer_command_2_pane_g1

0xaa79,	// (0x00048021) bg_button_pane_cp06

0xd10b,	// (0x0004a6b3) dialer_ne_clear_pane_g1

0xb3b8,	// (0x00048960) navi_pane_g2

0xb3e6,	// (0x0004898e) navi_pane_g3

0x0002,

0xf3ca,	// (0x0004c972) navi_pane_g

0xb475,	// (0x00048a1d) navi_pane_mv_g2

0xb4c4,	// (0x00048a6c) navi_pane_mv_g5

0x463a,	// (0x00041be2) navi_pane_mv_t1

0xa8b4,	// (0x00047e5c) main_clock2_pane

0xd8d2,	// (0x0004ae7a) main_clock2_list_pane_ParamLimits

0xd8d2,	// (0x0004ae7a) main_clock2_list_pane

0x660d,	// (0x00043bb5) main_clock2_pane_t1_ParamLimits

0x660d,	// (0x00043bb5) main_clock2_pane_t1

0x663b,	// (0x00043be3) main_clock2_pane_t2_ParamLimits

0x663b,	// (0x00043be3) main_clock2_pane_t2

0x0004,

0xf7ae,	// (0x0004cd56) main_clock2_pane_t_ParamLimits

0xf7ae,	// (0x0004cd56) main_clock2_pane_t

0x66a0,	// (0x00043c48) popup_clock_analogue_window_cp03_ParamLimits

0x66a0,	// (0x00043c48) popup_clock_analogue_window_cp03

0x66be,	// (0x00043c66) popup_clock_digital_window_cp02_ParamLimits

0x66be,	// (0x00043c66) popup_clock_digital_window_cp02

0x6733,	// (0x00043cdb) main_clock2_list_single_pane_ParamLimits

0x6733,	// (0x00043cdb) main_clock2_list_single_pane

0xaa79,	// (0x00048021) list_highlight_pane_cp05

0xd149,	// (0x0004a6f1) main_clock2_list_single_pane_t1

0x3217,	// (0x000407bf) popup_toolbar_window_cp04_ParamLimits

0x5cd0,	// (0x00043278) camera2_autofocus_pane_g2_ParamLimits

0x5cd0,	// (0x00043278) camera2_autofocus_pane_g2

0x5cdc,	// (0x00043284) camera2_autofocus_pane_g3_ParamLimits

0x5cdc,	// (0x00043284) camera2_autofocus_pane_g3

0x5ce8,	// (0x00043290) camera2_autofocus_pane_g4_ParamLimits

0x5ce8,	// (0x00043290) camera2_autofocus_pane_g4

0x5cf4,	// (0x0004329c) camera2_autofocus_pane_g5_ParamLimits

0x5cf4,	// (0x0004329c) camera2_autofocus_pane_g5

0x0004,

0xf6f2,	// (0x0004cc9a) camera2_autofocus_pane_g_ParamLimits

0xf6f2,	// (0x0004cc9a) camera2_autofocus_pane_g

0xcfd0,	// (0x0004a578) camera2_autofocus_pane_cp_g2

0xcfd8,	// (0x0004a580) camera2_autofocus_pane_cp_g3

0xcfe0,	// (0x0004a588) camera2_autofocus_pane_cp_g4

0xcfe8,	// (0x0004a590) camera2_autofocus_pane_cp_g5

0x0004,

0xf758,	// (0x0004cd00) camera2_autofocus_pane_cp_g

0x64c7,	// (0x00043a6f) popup_dialer_spcha_window

0xa143,	// (0x000476eb) bg_popup_sub_pane_cp07

0xd157,	// (0x0004a6ff) list_spcha_pane

0xd15f,	// (0x0004a707) list_single_spcha_pane_ParamLimits

0xd15f,	// (0x0004a707) list_single_spcha_pane

0xa143,	// (0x000476eb) list_highlight_pane_cp06

0xd170,	// (0x0004a718) list_single_spcha_pane_t1

0xc331,	// (0x000498d9) popup_call2_audio_out_window_g4_ParamLimits

0xc331,	// (0x000498d9) popup_call2_audio_out_window_g4

0xa143,	// (0x000476eb) main_imed2_pane

0x536c,	// (0x00042914) popup_imed_adjust2_window

0x537f,	// (0x00042927) popup_imed_trans_window_ParamLimits

0x537f,	// (0x00042927) popup_imed_trans_window

0xcb3a,	// (0x0004a0e2) popup_blid_sat_info2_window_t1

0xcb48,	// (0x0004a0f0) popup_blid_sat_info2_window_t2

0x000a,

0xf687,	// (0x0004cc2f) popup_blid_sat_info2_window_t

0x67e8,	// (0x00043d90) aid_size_cell_colour_35

0x6802,	// (0x00043daa) aid_size_cell_colour_112

0x6819,	// (0x00043dc1) aid_size_cell_effect

0xb494,	// (0x00048a3c) bg_tb_trans_pane_cp02

0xb4a2,	// (0x00048a4a) heading_imed_pane

0x6833,	// (0x00043ddb) listscroll_imed_pane

0xd17e,	// (0x0004a726) heading_imed_pane_g1

0xd186,	// (0x0004a72e) heading_imed_pane_t1

0xd194,	// (0x0004a73c) grid_imed_colour_35_pane_ParamLimits

0xd194,	// (0x0004a73c) grid_imed_colour_35_pane

0x683f,	// (0x00043de7) grid_imed_effect_pane

0xd1ab,	// (0x0004a753) list_imed_aspect_pane

0x684f,	// (0x00043df7) scroll_pane_cp027_ParamLimits

0x684f,	// (0x00043df7) scroll_pane_cp027

0x685b,	// (0x00043e03) cell_imed_effect_pane_ParamLimits

0x685b,	// (0x00043e03) cell_imed_effect_pane

0xd1b3,	// (0x0004a75b) cell_imed_colour_pane_ParamLimits

0xd1b3,	// (0x0004a75b) cell_imed_colour_pane

0xd1f5,	// (0x0004a79d) cell_imed_colour_pane_g1_ParamLimits

0xd1f5,	// (0x0004a79d) cell_imed_colour_pane_g1

0xd206,	// (0x0004a7ae) hgihlgiht_grid_pane_cp016_ParamLimits

0xd206,	// (0x0004a7ae) hgihlgiht_grid_pane_cp016

0x6873,	// (0x00043e1b) cell_imed_effect_pane_g1

0x687b,	// (0x00043e23) grid_highlight_pane_cp017

0xd217,	// (0x0004a7bf) list_imed_single_pane_ParamLimits

0xd217,	// (0x0004a7bf) list_imed_single_pane

0xa143,	// (0x000476eb) list_highlight_pane_cp07

0xd22c,	// (0x0004a7d4) list_imed_aspect_pane_comp1_t1

0xc8f4,	// (0x00049e9c) bg_tb_trans_pane_cp05

0xd24e,	// (0x0004a7f6) popup_imed_adjust2_window_g1

0xd275,	// (0x0004a81d) popup_imed_adjust2_window_t1

0xd28d,	// (0x0004a835) slider_imed_adjust_pane

0xd2a1,	// (0x0004a849) slider_imed_adjust_pane_g1

0xd2b1,	// (0x0004a859) slider_imed_adjust_pane_g2

0xd2c1,	// (0x0004a869) slider_imed_adjust_pane_g3

0xd2d2,	// (0x0004a87a) slider_imed_adjust_pane_g4

0x0003,

0xf7cb,	// (0x0004cd73) slider_imed_adjust_pane_g

0x6884,	// (0x00043e2c) aid_size_cell_clipart2

0x6890,	// (0x00043e38) grid_imed_clipart_pane

0xd2e3,	// (0x0004a88b) scroll_pane_cp031

0x689a,	// (0x00043e42) cell_imed_clipart_pane_ParamLimits

0x689a,	// (0x00043e42) cell_imed_clipart_pane

0x68bc,	// (0x00043e64) cell_imed_clipart_pane_g1

0xa143,	// (0x000476eb) grid_highlight_pane_cp014

0x65ef,	// (0x00043b97) main_clock2_pane_g1_ParamLimits

0x65ef,	// (0x00043b97) main_clock2_pane_g1

0x66da,	// (0x00043c82) aid_call2_pane_cp10

0x66ec,	// (0x00043c94) aid_call_pane_cp10

0xb319,	// (0x000488c1) popup_clock_analogue_window_cp10_g1

0xb319,	// (0x000488c1) popup_clock_analogue_window_cp10_g2

0x66fe,	// (0x00043ca6) popup_clock_analogue_window_cp10_g3

0x66fe,	// (0x00043ca6) popup_clock_analogue_window_cp10_g4

0xb319,	// (0x000488c1) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7b9,	// (0x0004cd61) popup_clock_analogue_window_cp10_g

0x6714,	// (0x00043cbc) popup_clock_analogue_window_cp10_t1

0x6745,	// (0x00043ced) clock_digital_number_pane_cp10_ParamLimits

0x6745,	// (0x00043ced) clock_digital_number_pane_cp10

0x675f,	// (0x00043d07) clock_digital_number_pane_cp11_ParamLimits

0x675f,	// (0x00043d07) clock_digital_number_pane_cp11

0x6779,	// (0x00043d21) clock_digital_number_pane_cp12_ParamLimits

0x6779,	// (0x00043d21) clock_digital_number_pane_cp12

0x6793,	// (0x00043d3b) clock_digital_number_pane_cp13_ParamLimits

0x6793,	// (0x00043d3b) clock_digital_number_pane_cp13

0x67ad,	// (0x00043d55) clock_digital_separator_pane_cp10_ParamLimits

0x67ad,	// (0x00043d55) clock_digital_separator_pane_cp10

0x67c7,	// (0x00043d6f) popup_clock_digital_window_cp02_t1_ParamLimits

0x67c7,	// (0x00043d6f) popup_clock_digital_window_cp02_t1

0xa7e7,	// (0x00047d8f) clock_digital_number_pane_cp10_g1

0xa7e7,	// (0x00047d8f) clock_digital_number_pane_cp10_g2

0x0001,

0xf7d4,	// (0x0004cd7c) clock_digital_number_pane_cp10_g

0xa7e7,	// (0x00047d8f) clock_digital_separator_pane_cp10_g1

0xa7e7,	// (0x00047d8f) clock_digital_separator_pane_g2_cp10

0xb4cc,	// (0x00048a74) navi_pane_vded_g4

0xb4d5,	// (0x00048a7d) navi_pane_vded_g5

0xb4de,	// (0x00048a86) navi_pane_vded_t1

0xa143,	// (0x000476eb) main_vded_pane

0x68c5,	// (0x00043e6d) main_vded_pane_g1

0x68d1,	// (0x00043e79) main_vded_pane_g2

0x68db,	// (0x00043e83) main_vded_pane_g3

0x0002,

0xf7d9,	// (0x0004cd81) main_vded_pane_g

0x68e5,	// (0x00043e8d) main_vded_pane_t1

0x68f3,	// (0x00043e9b) main_vded_pane_t2

0x0001,

0xf7e0,	// (0x0004cd88) main_vded_pane_t

0x6901,	// (0x00043ea9) vded_slider_pane

0x690b,	// (0x00043eb3) vded_video_pane

0xd2eb,	// (0x0004a893) vded_video_pane_g1

0x6915,	// (0x00043ebd) vded_video_pane_g2

0xccfc,	// (0x0004a2a4) vded_video_pane_g3

0x0002,

0xf7e5,	// (0x0004cd8d) vded_video_pane_g

0xd2f5,	// (0x0004a89d) vded_slider_pane_g1

0xca4f,	// (0x00049ff7) vded_slider_pane_g2

0xd2fe,	// (0x0004a8a6) vded_slider_pane_g3

0xd307,	// (0x0004a8af) vded_slider_pane_g4

0xd310,	// (0x0004a8b8) vded_slider_pane_g5

0x0004,

0xf7ec,	// (0x0004cd94) vded_slider_pane_g

0x63cb,	// (0x00043973) mup3_rocker_pane_ParamLimits

0x63cb,	// (0x00043973) mup3_rocker_pane

0x691e,	// (0x00043ec6) mup3_control_keys_pane_g1

0x6926,	// (0x00043ece) mup3_control_keys_pane_g2

0x692e,	// (0x00043ed6) mup3_control_keys_pane_g3

0x6936,	// (0x00043ede) mup3_control_keys_pane_g4

0x0003,

0xf7f7,	// (0x0004cd9f) mup3_control_keys_pane_g

0x237f,	// (0x0003f927) popup_toolbar2_fixed_window_cp01_ParamLimits

0x237f,	// (0x0003f927) popup_toolbar2_fixed_window_cp01

0x63e5,	// (0x0004398d) popup_toolbar2_fixed_window_cp02_ParamLimits

0x63e5,	// (0x0004398d) popup_toolbar2_fixed_window_cp02

0xbc70,	// (0x00049218) popup_call2_audio_second_window_t4_ParamLimits

0xbc70,	// (0x00049218) popup_call2_audio_second_window_t4

0xc19e,	// (0x00049746) popup_call2_audio_first_window_t6_ParamLimits

0xc19e,	// (0x00049746) popup_call2_audio_first_window_t6

0xc434,	// (0x000499dc) popup_call2_audio_out_window_t6_ParamLimits

0xc434,	// (0x000499dc) popup_call2_audio_out_window_t6

0xa143,	// (0x000476eb) main_vitu_pane

0x6946,	// (0x00043eee) aid_size_cell_itu_ParamLimits

0x6946,	// (0x00043eee) aid_size_cell_itu

0xd8d2,	// (0x0004ae7a) bg_popup_window_pane_cp08_ParamLimits

0xd8d2,	// (0x0004ae7a) bg_popup_window_pane_cp08

0x6954,	// (0x00043efc) field_vitu_entry_pane_ParamLimits

0x6954,	// (0x00043efc) field_vitu_entry_pane

0x6963,	// (0x00043f0b) grid_vitu_function_pane_ParamLimits

0x6963,	// (0x00043f0b) grid_vitu_function_pane

0x6973,	// (0x00043f1b) grid_vitu_itu_pane_ParamLimits

0x6973,	// (0x00043f1b) grid_vitu_itu_pane

0x6983,	// (0x00043f2b) cell_vitu_itu_pane_ParamLimits

0x6983,	// (0x00043f2b) cell_vitu_itu_pane

0x6998,	// (0x00043f40) cell_vitu_function_pane_ParamLimits

0x6998,	// (0x00043f40) cell_vitu_function_pane

0xb494,	// (0x00048a3c) bg_popup_sub_pane_cp08_ParamLimits

0xb494,	// (0x00048a3c) bg_popup_sub_pane_cp08

0x69aa,	// (0x00043f52) field_vitu_entry_pane_t1_ParamLimits

0x69aa,	// (0x00043f52) field_vitu_entry_pane_t1

0xd331,	// (0x0004a8d9) field_vitu_entry_pane_t2_ParamLimits

0xd331,	// (0x0004a8d9) field_vitu_entry_pane_t2

0x0001,

0xf805,	// (0x0004cdad) field_vitu_entry_pane_t_ParamLimits

0xf805,	// (0x0004cdad) field_vitu_entry_pane_t

0xd34e,	// (0x0004a8f6) bg_button_pane_cp05_ParamLimits

0xd34e,	// (0x0004a8f6) bg_button_pane_cp05

0x69c6,	// (0x00043f6e) cell_vitu_itu_pane_g1

0x69de,	// (0x00043f86) cell_vitu_itu_pane_t1_ParamLimits

0x69de,	// (0x00043f86) cell_vitu_itu_pane_t1

0x69f0,	// (0x00043f98) cell_vitu_itu_pane_t2_ParamLimits

0x69f0,	// (0x00043f98) cell_vitu_itu_pane_t2

0x0002,

0xf80a,	// (0x0004cdb2) cell_vitu_itu_pane_t_ParamLimits

0xf80a,	// (0x0004cdb2) cell_vitu_itu_pane_t

0xd35c,	// (0x0004a904) bg_button_pane_cp07

0x6a25,	// (0x00043fcd) cell_vitu_function_pane_g1

0x2645,	// (0x0003fbed) main_calc_pane_g1

0x213c,	// (0x0003f6e4) aid_visual_content_pane

0xa143,	// (0x000476eb) main_vradio_pane

0x6a2e,	// (0x00043fd6) main_vradio_pane_g1_ParamLimits

0x6a2e,	// (0x00043fd6) main_vradio_pane_g1

0xd366,	// (0x0004a90e) main_vradio_pane_g2_ParamLimits

0xd366,	// (0x0004a90e) main_vradio_pane_g2

0x0001,

0xf811,	// (0x0004cdb9) main_vradio_pane_g_ParamLimits

0xf811,	// (0x0004cdb9) main_vradio_pane_g

0x6a3e,	// (0x00043fe6) main_vradio_pane_t1_ParamLimits

0x6a3e,	// (0x00043fe6) main_vradio_pane_t1

0x6a50,	// (0x00043ff8) main_vradio_pane_t2_ParamLimits

0x6a50,	// (0x00043ff8) main_vradio_pane_t2

0xd373,	// (0x0004a91b) main_vradio_pane_t3_ParamLimits

0xd373,	// (0x0004a91b) main_vradio_pane_t3

0x0002,

0xf816,	// (0x0004cdbe) main_vradio_pane_t_ParamLimits

0xf816,	// (0x0004cdbe) main_vradio_pane_t

0x6a62,	// (0x0004400a) vradio_rocker_control_pane_ParamLimits

0x6a62,	// (0x0004400a) vradio_rocker_control_pane

0x6a6e,	// (0x00044016) vradio_station_info_pane_ParamLimits

0x6a6e,	// (0x00044016) vradio_station_info_pane

0xd387,	// (0x0004a92f) vradio_frequency_info_pane_ParamLimits

0xd387,	// (0x0004a92f) vradio_frequency_info_pane

0xccfc,	// (0x0004a2a4) vradio_station_info_pane_g1

0xd396,	// (0x0004a93e) vradio_station_info_pane_t1_ParamLimits

0xd396,	// (0x0004a93e) vradio_station_info_pane_t1

0xd3b8,	// (0x0004a960) vradio_station_info_pane_t2_ParamLimits

0xd3b8,	// (0x0004a960) vradio_station_info_pane_t2

0x0001,

0xf81d,	// (0x0004cdc5) vradio_station_info_pane_t_ParamLimits

0xf81d,	// (0x0004cdc5) vradio_station_info_pane_t

0xd3ca,	// (0x0004a972) vradio_tuning_pane

0xd3d2,	// (0x0004a97a) vradio_rocker_control_pane_g1

0xd3da,	// (0x0004a982) vradio_rocker_control_pane_g2

0xd3e2,	// (0x0004a98a) vradio_rocker_control_pane_g3

0xd3ea,	// (0x0004a992) vradio_rocker_control_pane_g4

0xd3f2,	// (0x0004a99a) vradio_rocker_control_pane_g5

0x0004,

0xf822,	// (0x0004cdca) vradio_rocker_control_pane_g

0x6a7d,	// (0x00044025) vradio_frequency_info_pane_g1

0xd3fa,	// (0x0004a9a2) vradio_frequency_info_pane_t1_ParamLimits

0xd3fa,	// (0x0004a9a2) vradio_frequency_info_pane_t1

0x6a87,	// (0x0004402f) vradio_tuning_pane_g1

0x6a90,	// (0x00044038) vradio_tuning_pane_t1

0x2185,	// (0x0003f72d) area_side_right_pane_ParamLimits

0x2185,	// (0x0003f72d) area_side_right_pane

0xc8af,	// (0x00049e57) status_small_pane_g1

0xc8b7,	// (0x00049e5f) status_small_pane_g2

0xc8c0,	// (0x00049e68) status_small_pane_g3

0xc8c9,	// (0x00049e71) status_small_pane_g4

0x0003,

0xf5dd,	// (0x0004cb85) status_small_pane_g

0xc8d2,	// (0x00049e7a) status_small_pane_t1

0xa143,	// (0x000476eb) main_video3_pane

0xd40e,	// (0x0004a9b6) cams_zoom_vslider_pane

0xd416,	// (0x0004a9be) image3_wide_pane_ParamLimits

0xd416,	// (0x0004a9be) image3_wide_pane

0xd430,	// (0x0004a9d8) image3_wide_small_pane

0xd43c,	// (0x0004a9e4) main_video3_pane_g1_ParamLimits

0xd43c,	// (0x0004a9e4) main_video3_pane_g1

0xd458,	// (0x0004aa00) main_video3_pane_g2_ParamLimits

0xd458,	// (0x0004aa00) main_video3_pane_g2

0x0001,

0xf82d,	// (0x0004cdd5) main_video3_pane_g_ParamLimits

0xf82d,	// (0x0004cdd5) main_video3_pane_g

0xd474,	// (0x0004aa1c) main_video3_pane_t1_ParamLimits

0xd474,	// (0x0004aa1c) main_video3_pane_t1

0xd49f,	// (0x0004aa47) main_video3_pane_t2_ParamLimits

0xd49f,	// (0x0004aa47) main_video3_pane_t2

0xd4ca,	// (0x0004aa72) main_video3_pane_t3_ParamLimits

0xd4ca,	// (0x0004aa72) main_video3_pane_t3

0x0002,

0xf832,	// (0x0004cdda) main_video3_pane_t_ParamLimits

0xf832,	// (0x0004cdda) main_video3_pane_t

0xd4f7,	// (0x0004aa9f) cams_zoom_vslider_pane_g1

0xd500,	// (0x0004aaa8) cams_zoom_vslider_pane_g2

0x0001,

0xf839,	// (0x0004cde1) cams_zoom_vslider_pane_g

0xd508,	// (0x0004aab0) small_slider_vertical_pane

0xccfc,	// (0x0004a2a4) small_slider_vertical_pane_g1

0xccfc,	// (0x0004a2a4) small_slider_vertical_pane_g2

0xd510,	// (0x0004aab8) small_slider_vertical_pane_g3

0x0002,

0xf83e,	// (0x0004cde6) small_slider_vertical_pane_g

0xa143,	// (0x000476eb) main_hwr_training_pane

0xd519,	// (0x0004aac1) hwr_training_instruct_pane_ParamLimits

0xd519,	// (0x0004aac1) hwr_training_instruct_pane

0x6a9f,	// (0x00044047) hwr_training_navi_pane_ParamLimits

0x6a9f,	// (0x00044047) hwr_training_navi_pane

0x6ab9,	// (0x00044061) hwr_training_write_pane_ParamLimits

0x6ab9,	// (0x00044061) hwr_training_write_pane

0xa143,	// (0x000476eb) bg_frame_shadow_pane

0xd550,	// (0x0004aaf8) hwr_training_write_pane_g1

0xd558,	// (0x0004ab00) hwr_training_write_pane_g2

0xd560,	// (0x0004ab08) hwr_training_write_pane_g3

0xd568,	// (0x0004ab10) hwr_training_write_pane_g4

0xd570,	// (0x0004ab18) hwr_training_write_pane_g5

0xd578,	// (0x0004ab20) hwr_training_write_pane_g6

0xd580,	// (0x0004ab28) hwr_training_write_pane_g7

0x0006,

0xf845,	// (0x0004cded) hwr_training_write_pane_g

0x6af1,	// (0x00044099) hwr_training_navi_pane_g1_ParamLimits

0x6af1,	// (0x00044099) hwr_training_navi_pane_g1

0x6b03,	// (0x000440ab) hwr_training_navi_pane_g2_ParamLimits

0x6b03,	// (0x000440ab) hwr_training_navi_pane_g2

0x6b15,	// (0x000440bd) hwr_training_navi_pane_g3_ParamLimits

0x6b15,	// (0x000440bd) hwr_training_navi_pane_g3

0x6b25,	// (0x000440cd) hwr_training_navi_pane_g4_ParamLimits

0x6b25,	// (0x000440cd) hwr_training_navi_pane_g4

0x0004,

0xf854,	// (0x0004cdfc) hwr_training_navi_pane_g_ParamLimits

0xf854,	// (0x0004cdfc) hwr_training_navi_pane_g

0x6b3f,	// (0x000440e7) hwr_training_navi_pane_t1

0x6b4d,	// (0x000440f5) list_single_hwr_training_instruct_pane_ParamLimits

0x6b4d,	// (0x000440f5) list_single_hwr_training_instruct_pane

0xd588,	// (0x0004ab30) list_single_hwr_training_instruct_pane_t1

0xcc3c,	// (0x0004a1e4) bg_frame_shadow_pane_g1

0xd597,	// (0x0004ab3f) bg_frame_shadow_pane_g2

0xd59f,	// (0x0004ab47) bg_frame_shadow_pane_g3

0xd5a7,	// (0x0004ab4f) bg_frame_shadow_pane_g4

0xd5af,	// (0x0004ab57) bg_frame_shadow_pane_g5

0xd5b7,	// (0x0004ab5f) bg_frame_shadow_pane_g6

0xd5bf,	// (0x0004ab67) bg_frame_shadow_pane_g7

0xa96d,	// (0x00047f15) bg_frame_shadow_pane_g8

0x0007,

0xf85f,	// (0x0004ce07) bg_frame_shadow_pane_g

0xa143,	// (0x000476eb) main_video_tele_dialer_pane

0x6b72,	// (0x0004411a) aid_size_cell_video_keypad_ParamLimits

0x6b72,	// (0x0004411a) aid_size_cell_video_keypad

0x6b82,	// (0x0004412a) grid_video_dialer_keypad_pane_ParamLimits

0x6b82,	// (0x0004412a) grid_video_dialer_keypad_pane

0x6bb6,	// (0x0004415e) video_down_pane_cp_ParamLimits

0x6bb6,	// (0x0004415e) video_down_pane_cp

0x6be0,	// (0x00044188) cell_video_dialer_keypad_pane_ParamLimits

0x6be0,	// (0x00044188) cell_video_dialer_keypad_pane

0xd5c7,	// (0x0004ab6f) bg_button_pane_cp08_ParamLimits

0xd5c7,	// (0x0004ab6f) bg_button_pane_cp08

0x6bf5,	// (0x0004419d) cell_video_dialer_keypad_pane_g1_ParamLimits

0x6bf5,	// (0x0004419d) cell_video_dialer_keypad_pane_g1

0x63bf,	// (0x00043967) mup3_rocker2_pane_ParamLimits

0x63bf,	// (0x00043967) mup3_rocker2_pane

0xccfc,	// (0x0004a2a4) mup3_rocker2_pane_g1

0x52dc,	// (0x00042884) main_dialer2_pane

0xa143,	// (0x000476eb) main_mp4_pane

0x6c4a,	// (0x000441f2) main_mp4_pane_g1_ParamLimits

0x6c4a,	// (0x000441f2) main_mp4_pane_g1

0x6c58,	// (0x00044200) main_mp4_pane_g2_ParamLimits

0x6c58,	// (0x00044200) main_mp4_pane_g2

0x6c66,	// (0x0004420e) main_mp4_pane_g3_ParamLimits

0x6c66,	// (0x0004420e) main_mp4_pane_g3

0x6cab,	// (0x00044253) main_mp4_pane_g4_ParamLimits

0x6cab,	// (0x00044253) main_mp4_pane_g4

0x6cd9,	// (0x00044281) main_mp4_pane_g5_ParamLimits

0x6cd9,	// (0x00044281) main_mp4_pane_g5

0x0007,

0xf87f,	// (0x0004ce27) main_mp4_pane_g_ParamLimits

0xf87f,	// (0x0004ce27) main_mp4_pane_g

0x6d4d,	// (0x000442f5) main_mp4_pane_t1_ParamLimits

0x6d4d,	// (0x000442f5) main_mp4_pane_t1

0x6da9,	// (0x00044351) main_mp4_pane_t2_ParamLimits

0x6da9,	// (0x00044351) main_mp4_pane_t2

0xd5d3,	// (0x0004ab7b) main_mp4_pane_t3_ParamLimits

0xd5d3,	// (0x0004ab7b) main_mp4_pane_t3

0x6dfb,	// (0x000443a3) main_mp4_pane_t4_ParamLimits

0x6dfb,	// (0x000443a3) main_mp4_pane_t4

0x0003,

0xf890,	// (0x0004ce38) main_mp4_pane_t_ParamLimits

0xf890,	// (0x0004ce38) main_mp4_pane_t

0x6e3f,	// (0x000443e7) mp4_progress_pane_ParamLimits

0x6e3f,	// (0x000443e7) mp4_progress_pane

0x6e89,	// (0x00044431) mp4_rocker_pane_ParamLimits

0x6e89,	// (0x00044431) mp4_rocker_pane

0xd601,	// (0x0004aba9) mp4_progress_pane_t1

0xd61a,	// (0x0004abc2) mp4_progress_pane_t2

0x0001,

0xf899,	// (0x0004ce41) mp4_progress_pane_t

0xd633,	// (0x0004abdb) mup_progress_pane_cp04

0xccfc,	// (0x0004a2a4) mp4_rocker_pane_g1

0x6ea9,	// (0x00044451) aid_cell_size_keypad2_ParamLimits

0x6ea9,	// (0x00044451) aid_cell_size_keypad2

0x6eb9,	// (0x00044461) dialer2_ne_pane_ParamLimits

0x6eb9,	// (0x00044461) dialer2_ne_pane

0x6ec7,	// (0x0004446f) grid_dialer2_keypad_pane_ParamLimits

0x6ec7,	// (0x0004446f) grid_dialer2_keypad_pane

0xd8e0,	// (0x0004ae88) bg_popup_call_pane_cp07_ParamLimits

0xd8e0,	// (0x0004ae88) bg_popup_call_pane_cp07

0x6ed7,	// (0x0004447f) dialer2_ne_pane_t1_ParamLimits

0x6ed7,	// (0x0004447f) dialer2_ne_pane_t1

0x6efc,	// (0x000444a4) cell_dialer2_keypad_pane_ParamLimits

0x6efc,	// (0x000444a4) cell_dialer2_keypad_pane

0xd658,	// (0x0004ac00) bg_button_pane_pane_cp04_ParamLimits

0xd658,	// (0x0004ac00) bg_button_pane_pane_cp04

0x6f11,	// (0x000444b9) cell_dialer2_keypad_pane_g1_ParamLimits

0x6f11,	// (0x000444b9) cell_dialer2_keypad_pane_g1

0x30d9,	// (0x00040681) aid_placing_vt_set_content_ParamLimits

0x30d9,	// (0x00040681) aid_placing_vt_set_content

0x3105,	// (0x000406ad) aid_placing_vt_set_title_ParamLimits

0x3105,	// (0x000406ad) aid_placing_vt_set_title

0xa143,	// (0x000476eb) main_image3_pane

0x6fab,	// (0x00044553) area_side_right_pane_cp01_ParamLimits

0x6fab,	// (0x00044553) area_side_right_pane_cp01

0xa79d,	// (0x00047d45) main_image3_pane_g1_ParamLimits

0xa79d,	// (0x00047d45) main_image3_pane_g1

0x6fd8,	// (0x00044580) main_image3_pane_g2_ParamLimits

0x6fd8,	// (0x00044580) main_image3_pane_g2

0x6ff1,	// (0x00044599) main_image3_pane_g3_ParamLimits

0x6ff1,	// (0x00044599) main_image3_pane_g3

0x700a,	// (0x000445b2) main_image3_pane_g4_ParamLimits

0x700a,	// (0x000445b2) main_image3_pane_g4

0x0003,

0xf8a8,	// (0x0004ce50) main_image3_pane_g_ParamLimits

0xf8a8,	// (0x0004ce50) main_image3_pane_g

0x7023,	// (0x000445cb) main_image3_pane_t1_ParamLimits

0x7023,	// (0x000445cb) main_image3_pane_t1

0x7048,	// (0x000445f0) main_image3_pane_t2_ParamLimits

0x7048,	// (0x000445f0) main_image3_pane_t2

0x7067,	// (0x0004460f) main_image3_pane_t3_ParamLimits

0x7067,	// (0x0004460f) main_image3_pane_t3

0x0003,

0xf8b1,	// (0x0004ce59) main_image3_pane_t_ParamLimits

0xf8b1,	// (0x0004ce59) main_image3_pane_t

0xd8d2,	// (0x0004ae7a) grid_sctrl_middle_pane_cp01_ParamLimits

0xd8d2,	// (0x0004ae7a) grid_sctrl_middle_pane_cp01

0x70c8,	// (0x00044670) cell_sctrl_middle_pane_cp01_ParamLimits

0x70c8,	// (0x00044670) cell_sctrl_middle_pane_cp01

0x70d9,	// (0x00044681) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x70d9,	// (0x00044681) cell_sctrl_middle_pane_cp01_g1

0xa143,	// (0x000476eb) main_call4_pane

0x70e6,	// (0x0004468e) aid_size_button_call4_ParamLimits

0x70e6,	// (0x0004468e) aid_size_button_call4

0x711c,	// (0x000446c4) call4_windows_pane_ParamLimits

0x711c,	// (0x000446c4) call4_windows_pane

0x7131,	// (0x000446d9) grid_call4_button_pane_ParamLimits

0x7131,	// (0x000446d9) grid_call4_button_pane

0x715f,	// (0x00044707) call4_windows_conf_pane

0x7176,	// (0x0004471e) popup_call4_audio_first_window_ParamLimits

0x7176,	// (0x0004471e) popup_call4_audio_first_window

0x71c6,	// (0x0004476e) popup_call4_audio_second_window_ParamLimits

0x71c6,	// (0x0004476e) popup_call4_audio_second_window

0x71df,	// (0x00044787) popup_call4_audio_wait_window_ParamLimits

0x71df,	// (0x00044787) popup_call4_audio_wait_window

0x71ed,	// (0x00044795) cell_call4_button_pane_ParamLimits

0x71ed,	// (0x00044795) cell_call4_button_pane

0x7210,	// (0x000447b8) bg_button_pane_cp09_ParamLimits

0x7210,	// (0x000447b8) bg_button_pane_cp09

0x721c,	// (0x000447c4) cell_call4_button_pane_g1_ParamLimits

0x721c,	// (0x000447c4) cell_call4_button_pane_g1

0x7229,	// (0x000447d1) cell_call4_button_pane_t1_ParamLimits

0x7229,	// (0x000447d1) cell_call4_button_pane_t1

0xd66c,	// (0x0004ac14) popup_call4_audio_conf_window_ParamLimits

0xd66c,	// (0x0004ac14) popup_call4_audio_conf_window

0x63f2,	// (0x0004399a) mup3_progress_pane_t1_ParamLimits

0x6411,	// (0x000439b9) mup3_progress_pane_t2_ParamLimits

0xd006,	// (0x0004a5ae) mup3_progress_pane_t3_ParamLimits

0xf781,	// (0x0004cd29) mup3_progress_pane_t_ParamLimits

0xd023,	// (0x0004a5cb) mup_progress_pane_cp03_ParamLimits

0x693e,	// (0x00043ee6) mup3_control_keys_pane_g4_copy1

0x6e6d,	// (0x00044415) mp4_rocker2_pane_ParamLimits

0x6e6d,	// (0x00044415) mp4_rocker2_pane

0xd680,	// (0x0004ac28) mp4_rocker2_pane_g1

0xd688,	// (0x0004ac30) mp4_rocker2_pane_g2

0x726d,	// (0x00044815) mp4_rocker2_pane_g3

0x7275,	// (0x0004481d) mp4_rocker2_pane_g4

0x727d,	// (0x00044825) mp4_rocker2_pane_g5

0x0004,

0xf8ba,	// (0x0004ce62) mp4_rocker2_pane_g

0xa143,	// (0x000476eb) main_camera4_pane

0xa143,	// (0x000476eb) main_video4_pane

0x6b92,	// (0x0004413a) main_video_tele_dialer_pane_t1_ParamLimits

0x6b92,	// (0x0004413a) main_video_tele_dialer_pane_t1

0x6ba4,	// (0x0004414c) main_video_tele_dialer_pane_t2_ParamLimits

0x6ba4,	// (0x0004414c) main_video_tele_dialer_pane_t2

0x0001,

0xf870,	// (0x0004ce18) main_video_tele_dialer_pane_t_ParamLimits

0xf870,	// (0x0004ce18) main_video_tele_dialer_pane_t

0x729d,	// (0x00044845) cam4_autofocus_pane_ParamLimits

0x729d,	// (0x00044845) cam4_autofocus_pane

0x72b7,	// (0x0004485f) cam4_image_uncrop_pane_ParamLimits

0x72b7,	// (0x0004485f) cam4_image_uncrop_pane

0x72ce,	// (0x00044876) cam4_indicators_pane_ParamLimits

0x72ce,	// (0x00044876) cam4_indicators_pane

0x72ea,	// (0x00044892) main_camera4_pane_g1_ParamLimits

0x72ea,	// (0x00044892) main_camera4_pane_g1

0x72f6,	// (0x0004489e) main_camera4_pane_g2_ParamLimits

0x72f6,	// (0x0004489e) main_camera4_pane_g2

0x72f6,	// (0x0004489e) main_camera4_pane_g3_ParamLimits

0x72f6,	// (0x0004489e) main_camera4_pane_g3

0x7302,	// (0x000448aa) main_camera4_pane_g4_ParamLimits

0x7302,	// (0x000448aa) main_camera4_pane_g4

0x730e,	// (0x000448b6) main_camera4_pane_g5_ParamLimits

0x730e,	// (0x000448b6) main_camera4_pane_g5

0x0005,

0xf8c5,	// (0x0004ce6d) main_camera4_pane_g_ParamLimits

0xf8c5,	// (0x0004ce6d) main_camera4_pane_g

0x7328,	// (0x000448d0) main_camera4_pane_t1_ParamLimits

0x7328,	// (0x000448d0) main_camera4_pane_t1

0xcf6b,	// (0x0004a513) bg_tb_trans_pane_cp06

0x7378,	// (0x00044920) cam4_indicators_pane_g1

0x7389,	// (0x00044931) cam4_indicators_pane_g2

0x0002,

0xf8e0,	// (0x0004ce88) cam4_indicators_pane_g

0x73a7,	// (0x0004494f) cam4_indicators_pane_t1

0x73d1,	// (0x00044979) main_video4_pane_g1_ParamLimits

0x73d1,	// (0x00044979) main_video4_pane_g1

0x73dd,	// (0x00044985) main_video4_pane_g2_ParamLimits

0x73dd,	// (0x00044985) main_video4_pane_g2

0x73e9,	// (0x00044991) main_video4_pane_g3_ParamLimits

0x73e9,	// (0x00044991) main_video4_pane_g3

0x73f5,	// (0x0004499d) main_video4_pane_g4_ParamLimits

0x73f5,	// (0x0004499d) main_video4_pane_g4

0x0004,

0xf8e7,	// (0x0004ce8f) main_video4_pane_g_ParamLimits

0xf8e7,	// (0x0004ce8f) main_video4_pane_g

0x7415,	// (0x000449bd) vid4_indicators_pane_ParamLimits

0x7415,	// (0x000449bd) vid4_indicators_pane

0x7434,	// (0x000449dc) video4_image_uncrop_cif_pane_ParamLimits

0x7434,	// (0x000449dc) video4_image_uncrop_cif_pane

0x7443,	// (0x000449eb) video4_image_uncrop_nhd_pane_ParamLimits

0x7443,	// (0x000449eb) video4_image_uncrop_nhd_pane

0x72b7,	// (0x0004485f) video4_image_uncrop_vga_pane_ParamLimits

0x72b7,	// (0x0004485f) video4_image_uncrop_vga_pane

0xb494,	// (0x00048a3c) bg_tb_trans_pane_cp07

0x745a,	// (0x00044a02) vid4_indicators_pane_g1

0x746e,	// (0x00044a16) vid4_indicators_pane_g2

0x7482,	// (0x00044a2a) vid4_indicators_pane_g3

0x0004,

0xf8f2,	// (0x0004ce9a) vid4_indicators_pane_g

0x74b1,	// (0x00044a59) vid4_indicators_pane_t1

0x74c8,	// (0x00044a70) cam4_autofocus_pane_g1

0x74d0,	// (0x00044a78) cam4_autofocus_pane_g2

0x74d8,	// (0x00044a80) cam4_autofocus_pane_g3

0x0002,

0xf8fd,	// (0x0004cea5) cam4_autofocus_pane_g

0x74e0,	// (0x00044a88) cam4_autofocus_pane_g3_copy1

0x6bc4,	// (0x0004416c) video_down_pane_cp_t1

0x6bd2,	// (0x0004417a) video_down_pane_cp_t2

0x0001,

0xf875,	// (0x0004ce1d) video_down_pane_cp_t

0xd8d2,	// (0x0004ae7a) popup_vitu2_window_ParamLimits

0xd8d2,	// (0x0004ae7a) popup_vitu2_window

0x74e8,	// (0x00044a90) aid_size_cell2_itu2_ParamLimits

0x74e8,	// (0x00044a90) aid_size_cell2_itu2

0x750a,	// (0x00044ab2) aid_size_cell_itu2_ParamLimits

0x750a,	// (0x00044ab2) aid_size_cell_itu2

0xd8e0,	// (0x0004ae88) bg_popup_window_pane_cp09_ParamLimits

0xd8e0,	// (0x0004ae88) bg_popup_window_pane_cp09

0x754e,	// (0x00044af6) field_vitu2_entry_pane_ParamLimits

0x754e,	// (0x00044af6) field_vitu2_entry_pane

0x756e,	// (0x00044b16) grid_vitu2_function_pane_ParamLimits

0x756e,	// (0x00044b16) grid_vitu2_function_pane

0x75b2,	// (0x00044b5a) grid_vitu2_itu_pane_ParamLimits

0x75b2,	// (0x00044b5a) grid_vitu2_itu_pane

0x762e,	// (0x00044bd6) cell_vitu2_itu_pane_ParamLimits

0x762e,	// (0x00044bd6) cell_vitu2_itu_pane

0x7647,	// (0x00044bef) cell_vitu2_function_pane_ParamLimits

0x7647,	// (0x00044bef) cell_vitu2_function_pane

0xd690,	// (0x0004ac38) bg_popup_call_pane_cp08_ParamLimits

0xd690,	// (0x0004ac38) bg_popup_call_pane_cp08

0xd6a7,	// (0x0004ac4f) field_vitu2_entry_pane_g1

0xd6b3,	// (0x0004ac5b) field_vitu2_entry_pane_g2

0x0002,

0xf904,	// (0x0004ceac) field_vitu2_entry_pane_g

0x10bf,	// (0x0003e667) field_vitu2_entry_pane_t1_ParamLimits

0x10bf,	// (0x0003e667) field_vitu2_entry_pane_t1

0x10f1,	// (0x0003e699) field_vitu2_entry_pane_t2_ParamLimits

0x10f1,	// (0x0003e699) field_vitu2_entry_pane_t2

0x0001,

0xf90b,	// (0x0004ceb3) field_vitu2_entry_pane_t_ParamLimits

0xf90b,	// (0x0004ceb3) field_vitu2_entry_pane_t

0x7688,	// (0x00044c30) bg_button_pane_cp010_ParamLimits

0x7688,	// (0x00044c30) bg_button_pane_cp010

0x7696,	// (0x00044c3e) cell_vitu2_itu_pane_g1

0x76b6,	// (0x00044c5e) cell_vitu2_itu_pane_t1_ParamLimits

0x76b6,	// (0x00044c5e) cell_vitu2_itu_pane_t1

0x110e,	// (0x0003e6b6) cell_vitu2_itu_pane_t2_ParamLimits

0x110e,	// (0x0003e6b6) cell_vitu2_itu_pane_t2

0x0002,

0xf915,	// (0x0004cebd) cell_vitu2_itu_pane_t_ParamLimits

0xf915,	// (0x0004cebd) cell_vitu2_itu_pane_t

0xb494,	// (0x00048a3c) bg_button_pane_cp011

0x7702,	// (0x00044caa) cell_vitu2_function_pane_g1

0xa143,	// (0x000476eb) main_myfav_hc_pane

0x70a9,	// (0x00044651) popup_image3_note_pane_ParamLimits

0x70a9,	// (0x00044651) popup_image3_note_pane

0x70b7,	// (0x0004465f) popup_image3_tool_bar_pane_ParamLimits

0x70b7,	// (0x0004465f) popup_image3_tool_bar_pane

0x1184,	// (0x0003e72c) cell_vitu2_itu_pane_t3_ParamLimits

0x1184,	// (0x0003e72c) cell_vitu2_itu_pane_t3

0xa143,	// (0x000476eb) bg_popup_trans_pane

0xd6d5,	// (0x0004ac7d) grid_image3_tool_bar_pane

0xd6df,	// (0x0004ac87) bg_popup_trans_pane_g1

0xacd2,	// (0x0004827a) bg_popup_trans_pane_g2

0xd6e7,	// (0x0004ac8f) bg_popup_trans_pane_g3

0xd6ef,	// (0x0004ac97) bg_popup_trans_pane_g4

0xd6f7,	// (0x0004ac9f) bg_popup_trans_pane_g5

0xd6ff,	// (0x0004aca7) bg_popup_trans_pane_g6

0xd707,	// (0x0004acaf) bg_popup_trans_pane_g7

0xd70f,	// (0x0004acb7) bg_popup_trans_pane_g8

0xacb2,	// (0x0004825a) bg_popup_trans_pane_g9

0x0008,

0xf91c,	// (0x0004cec4) bg_popup_trans_pane_g

0xd717,	// (0x0004acbf) cell_image3_tool_bar_pane_ParamLimits

0xd717,	// (0x0004acbf) cell_image3_tool_bar_pane

0xccfc,	// (0x0004a2a4) cell_image3_tool_bar_pane_g1

0xa143,	// (0x000476eb) bg_popup_trans_pane_cp1

0xd72b,	// (0x0004acd3) popup_image3_note_pane_t1

0xd739,	// (0x0004ace1) popup_image3_note_pane_t2

0xd747,	// (0x0004acef) popup_image3_note_pane_t3

0x0002,

0xf92f,	// (0x0004ced7) popup_image3_note_pane_t

0xd755,	// (0x0004acfd) popup_image3_note_pane_t3_copy1

0x7716,	// (0x00044cbe) bg_myfav_hc_instruction_pane_ParamLimits

0x7716,	// (0x00044cbe) bg_myfav_hc_instruction_pane

0x772e,	// (0x00044cd6) cell_myfav_contact_pane_ParamLimits

0x772e,	// (0x00044cd6) cell_myfav_contact_pane

0x7748,	// (0x00044cf0) cell_myfav_contact_pane_cp1_ParamLimits

0x7748,	// (0x00044cf0) cell_myfav_contact_pane_cp1

0x7760,	// (0x00044d08) cell_myfav_contact_pane_cp2_ParamLimits

0x7760,	// (0x00044d08) cell_myfav_contact_pane_cp2

0x7778,	// (0x00044d20) cell_myfav_contact_pane_cp3_ParamLimits

0x7778,	// (0x00044d20) cell_myfav_contact_pane_cp3

0x778f,	// (0x00044d37) cell_myfav_contact_pane_cp4_ParamLimits

0x778f,	// (0x00044d37) cell_myfav_contact_pane_cp4

0x77a5,	// (0x00044d4d) cell_myfav_contact_pane_cp5_ParamLimits

0x77a5,	// (0x00044d4d) cell_myfav_contact_pane_cp5

0x77b9,	// (0x00044d61) cell_myfav_contact_pane_cp6_ParamLimits

0x77b9,	// (0x00044d61) cell_myfav_contact_pane_cp6

0x77cd,	// (0x00044d75) cell_myfav_contact_pane_cp7_ParamLimits

0x77cd,	// (0x00044d75) cell_myfav_contact_pane_cp7

0xd763,	// (0x0004ad0b) listscroll_gen_pane_cp05

0x77e5,	// (0x00044d8d) main_myfav_hc_pane_g1_ParamLimits

0x77e5,	// (0x00044d8d) main_myfav_hc_pane_g1

0x77fb,	// (0x00044da3) main_myfav_hc_pane_g2_ParamLimits

0x77fb,	// (0x00044da3) main_myfav_hc_pane_g2

0x0002,

0xf936,	// (0x0004cede) main_myfav_hc_pane_g_ParamLimits

0xf936,	// (0x0004cede) main_myfav_hc_pane_g

0x7829,	// (0x00044dd1) main_myfav_hc_pane_t1_ParamLimits

0x7829,	// (0x00044dd1) main_myfav_hc_pane_t1

0xd76c,	// (0x0004ad14) main_myfav_hc_pane_t2_ParamLimits

0xd76c,	// (0x0004ad14) main_myfav_hc_pane_t2

0xd77e,	// (0x0004ad26) main_myfav_hc_pane_t3_ParamLimits

0xd77e,	// (0x0004ad26) main_myfav_hc_pane_t3

0x7840,	// (0x00044de8) main_myfav_hc_pane_t4_ParamLimits

0x7840,	// (0x00044de8) main_myfav_hc_pane_t4

0x0004,

0xf93d,	// (0x0004cee5) main_myfav_hc_pane_t_ParamLimits

0xf93d,	// (0x0004cee5) main_myfav_hc_pane_t

0xccfc,	// (0x0004a2a4) bg_myfav_hc_instruction_pane_g1

0xd790,	// (0x0004ad38) cell_myfav_contact_pane_g1_ParamLimits

0xd790,	// (0x0004ad38) cell_myfav_contact_pane_g1

0xd790,	// (0x0004ad38) cell_myfav_contact_pane_g2_ParamLimits

0xd790,	// (0x0004ad38) cell_myfav_contact_pane_g2

0xd79c,	// (0x0004ad44) cell_myfav_contact_pane_g3_ParamLimits

0xd79c,	// (0x0004ad44) cell_myfav_contact_pane_g3

0xcff0,	// (0x0004a598) cell_myfav_contact_pane_g4_ParamLimits

0xcff0,	// (0x0004a598) cell_myfav_contact_pane_g4

0xd7a9,	// (0x0004ad51) cell_myfav_contact_pane_g5_ParamLimits

0xd7a9,	// (0x0004ad51) cell_myfav_contact_pane_g5

0x0004,

0xf948,	// (0x0004cef0) cell_myfav_contact_pane_g_ParamLimits

0xf948,	// (0x0004cef0) cell_myfav_contact_pane_g

0x7811,	// (0x00044db9) main_myfav_hc_pane_g3_ParamLimits

0x7811,	// (0x00044db9) main_myfav_hc_pane_g3

0x22ba,	// (0x0003f862) popup_adpt_find_window

0x786a,	// (0x00044e12) afind_page_pane_ParamLimits

0x786a,	// (0x00044e12) afind_page_pane

0x7877,	// (0x00044e1f) aid_size_cell_afind_ParamLimits

0x7877,	// (0x00044e1f) aid_size_cell_afind

0x7891,	// (0x00044e39) bg_popup_sub_pane_cp09_ParamLimits

0x7891,	// (0x00044e39) bg_popup_sub_pane_cp09

0x789e,	// (0x00044e46) find_pane_cp01_ParamLimits

0x789e,	// (0x00044e46) find_pane_cp01

0xd7b5,	// (0x0004ad5d) grid_afind_control_pane_ParamLimits

0xd7b5,	// (0x0004ad5d) grid_afind_control_pane

0x78ab,	// (0x00044e53) grid_afind_pane_ParamLimits

0x78ab,	// (0x00044e53) grid_afind_pane

0x78c7,	// (0x00044e6f) cell_afind_pane_ParamLimits

0x78c7,	// (0x00044e6f) cell_afind_pane

0xccfc,	// (0x0004a2a4) afind_page_pane_g1

0x790f,	// (0x00044eb7) afind_page_pane_g2

0x7918,	// (0x00044ec0) afind_page_pane_g3

0x0002,

0xf953,	// (0x0004cefb) afind_page_pane_g

0x7921,	// (0x00044ec9) afind_page_pane_t1

0xd7c9,	// (0x0004ad71) cell_afind_grid_control_pane_ParamLimits

0xd7c9,	// (0x0004ad71) cell_afind_grid_control_pane

0xd658,	// (0x0004ac00) bg_button_pane_cp69_ParamLimits

0xd658,	// (0x0004ac00) bg_button_pane_cp69

0x7941,	// (0x00044ee9) cell_afind_pane_g1_ParamLimits

0x7941,	// (0x00044ee9) cell_afind_pane_g1

0x794e,	// (0x00044ef6) cell_afind_pane_t1_ParamLimits

0x794e,	// (0x00044ef6) cell_afind_pane_t1

0xaacb,	// (0x00048073) bg_button_pane_cp72

0xd7d8,	// (0x0004ad80) cell_afind_grid_control_pane_g1

0x4e5a,	// (0x00042402) aid_image_placing_area_ParamLimits

0x4e5a,	// (0x00042402) aid_image_placing_area

0xd319,	// (0x0004a8c1) field_vitu_entry_pane_g1_ParamLimits

0xd319,	// (0x0004a8c1) field_vitu_entry_pane_g1

0xd325,	// (0x0004a8cd) field_vitu_entry_pane_g2_ParamLimits

0xd325,	// (0x0004a8cd) field_vitu_entry_pane_g2

0x0001,

0xf800,	// (0x0004cda8) field_vitu_entry_pane_g_ParamLimits

0xf800,	// (0x0004cda8) field_vitu_entry_pane_g

0x69c6,	// (0x00043f6e) cell_vitu_itu_pane_g1_ParamLimits

0x6a08,	// (0x00043fb0) cell_vitu_itu_pane_t3_ParamLimits

0x6a08,	// (0x00043fb0) cell_vitu_itu_pane_t3

0xd601,	// (0x0004aba9) mp4_progress_pane_t1_ParamLimits

0xd61a,	// (0x0004abc2) mp4_progress_pane_t2_ParamLimits

0xf899,	// (0x0004ce41) mp4_progress_pane_t_ParamLimits

0xd633,	// (0x0004abdb) mup_progress_pane_cp04_ParamLimits

0x7854,	// (0x00044dfc) main_myfav_hc_pane_t5_ParamLimits

0x7854,	// (0x00044dfc) main_myfav_hc_pane_t5

0x2148,	// (0x0003f6f0) aid_zoom_text_primary

0x22ba,	// (0x0003f862) popup_adpt_find_window_ParamLimits

0xb494,	// (0x00048a3c) main_cam_set_pane

0x72dc,	// (0x00044884) cam4_zoom_pane_ParamLimits

0x72dc,	// (0x00044884) cam4_zoom_pane

0x7960,	// (0x00044f08) main_cam_set_pane_g1_ParamLimits

0x7960,	// (0x00044f08) main_cam_set_pane_g1

0x796e,	// (0x00044f16) main_cam_set_pane_g2_ParamLimits

0x796e,	// (0x00044f16) main_cam_set_pane_g2

0x0001,

0xf95a,	// (0x0004cf02) main_cam_set_pane_g_ParamLimits

0xf95a,	// (0x0004cf02) main_cam_set_pane_g

0x797a,	// (0x00044f22) main_cam_set_pane_t1_ParamLimits

0x797a,	// (0x00044f22) main_cam_set_pane_t1

0x7996,	// (0x00044f3e) main_cset_listscroll_pane_ParamLimits

0x7996,	// (0x00044f3e) main_cset_listscroll_pane

0x79c1,	// (0x00044f69) main_cset_slider_pane_ParamLimits

0x79c1,	// (0x00044f69) main_cset_slider_pane

0xd7e9,	// (0x0004ad91) main_cset_list_pane_ParamLimits

0xd7e9,	// (0x0004ad91) main_cset_list_pane

0xd7f9,	// (0x0004ada1) scroll_pane_cp028

0x79e0,	// (0x00044f88) aid_area_touch_slider

0x79fc,	// (0x00044fa4) cset_slider_pane

0x7a26,	// (0x00044fce) main_cset_slider_pane_g1

0x7a3b,	// (0x00044fe3) main_cset_slider_pane_g2

0x0011,

0xf95f,	// (0x0004cf07) main_cset_slider_pane_g

0xd832,	// (0x0004adda) main_cset_slider_pane_t1

0x7afd,	// (0x000450a5) main_cset_slider_pane_t2

0x7b17,	// (0x000450bf) main_cset_slider_pane_t3

0x7b31,	// (0x000450d9) main_cset_slider_pane_t4

0x7b4b,	// (0x000450f3) main_cset_slider_pane_t5

0x7b69,	// (0x00045111) main_cset_slider_pane_t6

0x7b80,	// (0x00045128) main_cset_slider_pane_t7

0x000e,

0xf984,	// (0x0004cf2c) main_cset_slider_pane_t

0x7c8c,	// (0x00045234) cset_list_set_pane_ParamLimits

0x7c8c,	// (0x00045234) cset_list_set_pane

0x7ca2,	// (0x0004524a) aid_position_infowindow_above

0x7caa,	// (0x00045252) aid_position_infowindow_below

0x11d6,	// (0x0003e77e) cset_list_set_pane_g1_ParamLimits

0x11d6,	// (0x0003e77e) cset_list_set_pane_g1

0x11e2,	// (0x0003e78a) cset_list_set_pane_g3_ParamLimits

0x11e2,	// (0x0003e78a) cset_list_set_pane_g3

0x0001,

0xf9a3,	// (0x0004cf4b) cset_list_set_pane_g_ParamLimits

0xf9a3,	// (0x0004cf4b) cset_list_set_pane_g

0x11f1,	// (0x0003e799) cset_list_set_pane_t1_ParamLimits

0x11f1,	// (0x0003e799) cset_list_set_pane_t1

0xb494,	// (0x00048a3c) list_highlight_pane_cp021_ParamLimits

0xb494,	// (0x00048a3c) list_highlight_pane_cp021

0xb632,	// (0x00048bda) cset_slider_pane_g1

0xb644,	// (0x00048bec) cset_slider_pane_g2

0xb63b,	// (0x00048be3) cset_slider_pane_g3

0x0002,

0xf9a8,	// (0x0004cf50) cset_slider_pane_g

0x7cb2,	// (0x0004525a) aid_area_touch_cam4_zoom

0x7cba,	// (0x00045262) cam4_zoom_cont_pane

0x7cc2,	// (0x0004526a) cam4_zoom_pane_g1

0x7cca,	// (0x00045272) cam4_zoom_pane_g2

0x7cd2,	// (0x0004527a) cam4_zoom_pane_g3

0x0002,

0xf9af,	// (0x0004cf57) cam4_zoom_pane_g

0xd8ee,	// (0x0004ae96) cam4_zoom_cont_pane_g1

0xd8f7,	// (0x0004ae9f) cam4_zoom_cont_pane_g2

0xd900,	// (0x0004aea8) cam4_zoom_cont_pane_g3

0x0002,

0xf9b6,	// (0x0004cf5e) cam4_zoom_cont_pane_g

0x7100,	// (0x000446a8) call4_image_pane_ParamLimits

0x7100,	// (0x000446a8) call4_image_pane

0x715f,	// (0x00044707) call4_windows_conf_pane_ParamLimits

0x71a4,	// (0x0004474c) popup_call4_audio_in_window_ParamLimits

0x71a4,	// (0x0004474c) popup_call4_audio_in_window

0xa143,	// (0x000476eb) bg_popup_call2_act_pane_cp02

0xd664,	// (0x0004ac0c) call4_list_conf_pane

0xccfc,	// (0x0004a2a4) call4_image_pane_g1

0xccfc,	// (0x0004a2a4) call4_image_pane_g2

0x0001,

0xf6c1,	// (0x0004cc69) call4_image_pane_g

0xd909,	// (0x0004aeb1) list_single_graphic_popup_conf4_pane_ParamLimits

0xd909,	// (0x0004aeb1) list_single_graphic_popup_conf4_pane

0xa143,	// (0x000476eb) list_highlight_pane_cp022

0xd91c,	// (0x0004aec4) list_single_graphic_popup_conf4_pane_g1

0xb1e9,	// (0x00048791) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9bd,	// (0x0004cf65) list_single_graphic_popup_conf4_pane_g

0xd924,	// (0x0004aecc) list_single_graphic_popup_conf4_pane_t1

0x3269,	// (0x00040811) popup_vtel_slider_window_ParamLimits

0x3269,	// (0x00040811) popup_vtel_slider_window

0xd646,	// (0x0004abee) dialer2_ne_pane_t2_ParamLimits

0xd646,	// (0x0004abee) dialer2_ne_pane_t2

0x0001,

0xf89e,	// (0x0004ce46) dialer2_ne_pane_t_ParamLimits

0xf89e,	// (0x0004ce46) dialer2_ne_pane_t

0xb494,	// (0x00048a3c) bg_popup_sub_pane_cp010_ParamLimits

0xb494,	// (0x00048a3c) bg_popup_sub_pane_cp010

0x7cda,	// (0x00045282) popup_vtel_slider_window_g1_ParamLimits

0x7cda,	// (0x00045282) popup_vtel_slider_window_g1

0x7ce6,	// (0x0004528e) popup_vtel_slider_window_g2_ParamLimits

0x7ce6,	// (0x0004528e) popup_vtel_slider_window_g2

0x0003,

0xf9c2,	// (0x0004cf6a) popup_vtel_slider_window_g_ParamLimits

0xf9c2,	// (0x0004cf6a) popup_vtel_slider_window_g

0x7d2e,	// (0x000452d6) vtel_slider_pane_ParamLimits

0x7d2e,	// (0x000452d6) vtel_slider_pane

0x7d3d,	// (0x000452e5) vtel_slider_pane_g1_ParamLimits

0x7d3d,	// (0x000452e5) vtel_slider_pane_g1

0x7d4a,	// (0x000452f2) vtel_slider_pane_g2_ParamLimits

0x7d4a,	// (0x000452f2) vtel_slider_pane_g2

0x7d57,	// (0x000452ff) vtel_slider_pane_g3_ParamLimits

0x7d57,	// (0x000452ff) vtel_slider_pane_g3

0x7d3d,	// (0x000452e5) vtel_slider_pane_g4_ParamLimits

0x7d3d,	// (0x000452e5) vtel_slider_pane_g4

0x7d64,	// (0x0004530c) vtel_slider_pane_g5_ParamLimits

0x7d64,	// (0x0004530c) vtel_slider_pane_g5

0x0004,

0xf9cb,	// (0x0004cf73) vtel_slider_pane_g_ParamLimits

0xf9cb,	// (0x0004cf73) vtel_slider_pane_g

0xb494,	// (0x00048a3c) main_gallery2_pane

0x7530,	// (0x00044ad8) aid_size_row_itut2_dropdow_list_ParamLimits

0x7530,	// (0x00044ad8) aid_size_row_itut2_dropdow_list

0x7590,	// (0x00044b38) grid_vitu2_function_top_pane_ParamLimits

0x7590,	// (0x00044b38) grid_vitu2_function_top_pane

0x75ea,	// (0x00044b92) popup_vitu2_dropdown_list_window_ParamLimits

0x75ea,	// (0x00044b92) popup_vitu2_dropdown_list_window

0x760a,	// (0x00044bb2) popup_vitu2_match_list_window

0x7d71,	// (0x00045319) cell_vitu2_function_top_pane_ParamLimits

0x7d71,	// (0x00045319) cell_vitu2_function_top_pane

0x7d8b,	// (0x00045333) cell_vitu2_function_top_pane_cp01_ParamLimits

0x7d8b,	// (0x00045333) cell_vitu2_function_top_pane_cp01

0x7da7,	// (0x0004534f) cell_vitu2_function_top_wide_pane_ParamLimits

0x7da7,	// (0x0004534f) cell_vitu2_function_top_wide_pane

0xb494,	// (0x00048a3c) bg_button_pane_cp012

0x7dc3,	// (0x0004536b) cell_vitu2_function_top_pane_g1

0x7dd7,	// (0x0004537f) bg_button_pane_cp013_ParamLimits

0x7dd7,	// (0x0004537f) bg_button_pane_cp013

0x7df3,	// (0x0004539b) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x7df3,	// (0x0004539b) cell_vitu2_function_top_wide_pane_g1

0xd8d2,	// (0x0004ae7a) bg_popup_sub_pane_cp20

0x7e0b,	// (0x000453b3) list_vitu2_match_list_pane

0xd6df,	// (0x0004ac87) bg_popup_sub_pane_cp20_g1

0xd6e7,	// (0x0004ac8f) bg_popup_sub_pane_cp20_g2

0xacd2,	// (0x0004827a) bg_popup_sub_pane_cp20_g3

0xd6ef,	// (0x0004ac97) bg_popup_sub_pane_cp20_g4

0xacb2,	// (0x0004825a) bg_popup_sub_pane_cp20_g5

0xd93a,	// (0x0004aee2) bg_popup_sub_pane_cp20_g6

0xd6ff,	// (0x0004aca7) bg_popup_sub_pane_cp20_g7

0xd707,	// (0x0004acaf) bg_popup_sub_pane_cp20_g8

0xd70f,	// (0x0004acb7) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9d6,	// (0x0004cf7e) bg_popup_sub_pane_cp20_g

0x7e23,	// (0x000453cb) list_vitu2_match_list_item_pane_ParamLimits

0x7e23,	// (0x000453cb) list_vitu2_match_list_item_pane

0x7e35,	// (0x000453dd) list_vitu2_match_list_item_pane_t1

0xa143,	// (0x000476eb) bg_popup_sub_pane_cp21

0xb111,	// (0x000486b9) grid_vitu2_dropdown_list_pane

0x7e43,	// (0x000453eb) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x7e43,	// (0x000453eb) cell_vitu2_dropdown_list_char_pane

0x7e64,	// (0x0004540c) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x7e64,	// (0x0004540c) cell_vitu2_dropdown_list_ctrl_pane

0xd942,	// (0x0004aeea) cell_vitu2_dropdown_list_char_pane_g1

0xd94b,	// (0x0004aef3) cell_vitu2_dropdown_list_char_pane_g2

0xd954,	// (0x0004aefc) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf9f3,	// (0x0004cf9b) cell_vitu2_dropdown_list_char_pane_g

0x7e90,	// (0x00045438) cell_vitu2_dropdown_list_char_pane_t1

0x7e9e,	// (0x00045446) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x7e9e,	// (0x00045446) cell_vitu2_dropdown_list_ctrl_pane_g1

0x7eae,	// (0x00045456) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x7eae,	// (0x00045456) cell_vitu2_dropdown_list_ctrl_pane_g2

0x7ebf,	// (0x00045467) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x7ebf,	// (0x00045467) cell_vitu2_dropdown_list_ctrl_pane_g3

0x7ecf,	// (0x00045477) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x7ecf,	// (0x00045477) cell_vitu2_dropdown_list_ctrl_pane_g4

0xcf6b,	// (0x0004a513) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xcf6b,	// (0x0004a513) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf9fa,	// (0x0004cfa2) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf9fa,	// (0x0004cfa2) cell_vitu2_dropdown_list_ctrl_pane_g

0x7eeb,	// (0x00045493) aid_size_cell_gallery2_ParamLimits

0x7eeb,	// (0x00045493) aid_size_cell_gallery2

0x7f05,	// (0x000454ad) grid_gallery2_pane_ParamLimits

0x7f05,	// (0x000454ad) grid_gallery2_pane

0x7f1c,	// (0x000454c4) scroll_pane_cp029_ParamLimits

0x7f1c,	// (0x000454c4) scroll_pane_cp029

0x7f2c,	// (0x000454d4) cell_gallery2_pane_ParamLimits

0x7f2c,	// (0x000454d4) cell_gallery2_pane

0xd95d,	// (0x0004af05) cell_gallery2_pane_g2

0xe9ea,	// (0x0004bf92) cell_gallery2_pane_g3

0xd965,	// (0x0004af0d) cell_gallery2_pane_g4

0xd96d,	// (0x0004af15) cell_gallery2_pane_g5

0xaa79,	// (0x00048021) grid_highlight_pane_cp10

0x760a,	// (0x00044bb2) popup_vitu2_match_list_window_ParamLimits

0x761e,	// (0x00044bc6) popup_vitu2_query_window_ParamLimits

0x761e,	// (0x00044bc6) popup_vitu2_query_window

0xa143,	// (0x000476eb) bg_vitu2_candi_button_pane

0xd942,	// (0x0004aeea) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd94b,	// (0x0004aef3) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd954,	// (0x0004aefc) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x125c,	// (0x0003e804) bg_button_pane_cp015

0x7f81,	// (0x00045529) bg_button_pane_cp016

0x7f94,	// (0x0004553c) bg_button_pane_cp017

0xc8f4,	// (0x00049e9c) bg_popup_sub_pane_cp22

0xd975,	// (0x0004af1d) popup_vitu2_query_window_g1

0x128f,	// (0x0003e837) popup_vitu2_query_window_g2

0x0002,

0xfa05,	// (0x0004cfad) popup_vitu2_query_window_g

0x12ac,	// (0x0003e854) popup_vitu2_query_window_t1_ParamLimits

0x12ac,	// (0x0003e854) popup_vitu2_query_window_t1

0x12df,	// (0x0003e887) popup_vitu2_query_window_t2_ParamLimits

0x12df,	// (0x0003e887) popup_vitu2_query_window_t2

0x12f1,	// (0x0003e899) popup_vitu2_query_window_t3_ParamLimits

0x12f1,	// (0x0003e899) popup_vitu2_query_window_t3

0x7fb8,	// (0x00045560) popup_vitu2_query_window_t4_ParamLimits

0x7fb8,	// (0x00045560) popup_vitu2_query_window_t4

0x7fd9,	// (0x00045581) popup_vitu2_query_window_t5_ParamLimits

0x7fd9,	// (0x00045581) popup_vitu2_query_window_t5

0x0006,

0xfa0c,	// (0x0004cfb4) popup_vitu2_query_window_t_ParamLimits

0xfa0c,	// (0x0004cfb4) popup_vitu2_query_window_t

0xd7e1,	// (0x0004ad89) main_cset_text_pane

0x79e0,	// (0x00044f88) aid_area_touch_slider_ParamLimits

0x79fc,	// (0x00044fa4) cset_slider_pane_ParamLimits

0x7a26,	// (0x00044fce) main_cset_slider_pane_g1_ParamLimits

0x7a3b,	// (0x00044fe3) main_cset_slider_pane_g2_ParamLimits

0xd802,	// (0x0004adaa) main_cset_slider_pane_g3_ParamLimits

0xd802,	// (0x0004adaa) main_cset_slider_pane_g3

0x7a50,	// (0x00044ff8) main_cset_slider_pane_g4_ParamLimits

0x7a50,	// (0x00044ff8) main_cset_slider_pane_g4

0x7a5f,	// (0x00045007) main_cset_slider_pane_g5_ParamLimits

0x7a5f,	// (0x00045007) main_cset_slider_pane_g5

0x7a6d,	// (0x00045015) main_cset_slider_pane_g6_ParamLimits

0x7a6d,	// (0x00045015) main_cset_slider_pane_g6

0xf95f,	// (0x0004cf07) main_cset_slider_pane_g_ParamLimits

0xd832,	// (0x0004adda) main_cset_slider_pane_t1_ParamLimits

0x7afd,	// (0x000450a5) main_cset_slider_pane_t2_ParamLimits

0x7b17,	// (0x000450bf) main_cset_slider_pane_t3_ParamLimits

0x7b31,	// (0x000450d9) main_cset_slider_pane_t4_ParamLimits

0x7b4b,	// (0x000450f3) main_cset_slider_pane_t5_ParamLimits

0x7b69,	// (0x00045111) main_cset_slider_pane_t6_ParamLimits

0x7b80,	// (0x00045128) main_cset_slider_pane_t7_ParamLimits

0x7bae,	// (0x00045156) main_cset_slider_pane_t8_ParamLimits

0x7bae,	// (0x00045156) main_cset_slider_pane_t8

0x7bd6,	// (0x0004517e) main_cset_slider_pane_t9_ParamLimits

0x7bd6,	// (0x0004517e) main_cset_slider_pane_t9

0x7bfe,	// (0x000451a6) main_cset_slider_pane_t10_ParamLimits

0x7bfe,	// (0x000451a6) main_cset_slider_pane_t10

0x7c26,	// (0x000451ce) main_cset_slider_pane_t11_ParamLimits

0x7c26,	// (0x000451ce) main_cset_slider_pane_t11

0x7c50,	// (0x000451f8) main_cset_slider_pane_t12_ParamLimits

0x7c50,	// (0x000451f8) main_cset_slider_pane_t12

0x7c6d,	// (0x00045215) main_cset_slider_pane_t13_ParamLimits

0x7c6d,	// (0x00045215) main_cset_slider_pane_t13

0xf984,	// (0x0004cf2c) main_cset_slider_pane_t_ParamLimits

0xa143,	// (0x000476eb) bg_popup_sub_pane_cp011

0xd981,	// (0x0004af29) main_cset_text_pane_g1

0xd989,	// (0x0004af31) main_cset_text_pane_t1

0xd997,	// (0x0004af3f) main_cset_text_pane_t2

0xd9a5,	// (0x0004af4d) main_cset_text_pane_t3

0xd9b3,	// (0x0004af5b) main_cset_text_pane_t4

0xd9c1,	// (0x0004af69) main_cset_text_pane_t5

0xd9cf,	// (0x0004af77) main_cset_text_pane_t6

0xd9dd,	// (0x0004af85) main_cset_text_pane_t7

0x0006,

0xfa1b,	// (0x0004cfc3) main_cset_text_pane_t

0xa143,	// (0x000476eb) main_cam4_burst_pane

0xa143,	// (0x000476eb) main_cam5_pane

0x792f,	// (0x00044ed7) bg_button_pane_cp019

0x7938,	// (0x00044ee0) bg_button_pane_cp020

0xd80e,	// (0x0004adb6) main_cset_slider_pane_g7_ParamLimits

0xd80e,	// (0x0004adb6) main_cset_slider_pane_g7

0xd81a,	// (0x0004adc2) main_cset_slider_pane_g8_ParamLimits

0xd81a,	// (0x0004adc2) main_cset_slider_pane_g8

0x7a81,	// (0x00045029) main_cset_slider_pane_g9_ParamLimits

0x7a81,	// (0x00045029) main_cset_slider_pane_g9

0x7a8d,	// (0x00045035) main_cset_slider_pane_g10_ParamLimits

0x7a8d,	// (0x00045035) main_cset_slider_pane_g10

0x7a99,	// (0x00045041) main_cset_slider_pane_g11_ParamLimits

0x7a99,	// (0x00045041) main_cset_slider_pane_g11

0x7aa5,	// (0x0004504d) main_cset_slider_pane_g12_ParamLimits

0x7aa5,	// (0x0004504d) main_cset_slider_pane_g12

0x7ab1,	// (0x00045059) main_cset_slider_pane_g13_ParamLimits

0x7ab1,	// (0x00045059) main_cset_slider_pane_g13

0x7abd,	// (0x00045065) main_cset_slider_pane_g14_ParamLimits

0x7abd,	// (0x00045065) main_cset_slider_pane_g14

0x7ac9,	// (0x00045071) main_cset_slider_pane_g15_ParamLimits

0x7ac9,	// (0x00045071) main_cset_slider_pane_g15

0xd860,	// (0x0004ae08) main_cset_slider_pane_t14_ParamLimits

0xd860,	// (0x0004ae08) main_cset_slider_pane_t14

0xd899,	// (0x0004ae41) main_cset_slider_pane_t15_ParamLimits

0xd899,	// (0x0004ae41) main_cset_slider_pane_t15

0x7ffa,	// (0x000455a2) aid_cam4_burst_size_cell_ParamLimits

0x7ffa,	// (0x000455a2) aid_cam4_burst_size_cell

0x8016,	// (0x000455be) grid_cam4_burst_pane_ParamLimits

0x8016,	// (0x000455be) grid_cam4_burst_pane

0x8046,	// (0x000455ee) linegrid_cam4_burst_pane_ParamLimits

0x8046,	// (0x000455ee) linegrid_cam4_burst_pane

0x8066,	// (0x0004560e) scroll_pane_cp30_ParamLimits

0x8066,	// (0x0004560e) scroll_pane_cp30

0x8072,	// (0x0004561a) cell_cam4_burst_pane_ParamLimits

0x8072,	// (0x0004561a) cell_cam4_burst_pane

0xd9eb,	// (0x0004af93) linegrid_cam4_burst_pane_g1_ParamLimits

0xd9eb,	// (0x0004af93) linegrid_cam4_burst_pane_g1

0x80ae,	// (0x00045656) linegrid_cam4_burst_pane_g2_ParamLimits

0x80ae,	// (0x00045656) linegrid_cam4_burst_pane_g2

0xd9f8,	// (0x0004afa0) linegrid_cam4_burst_pane_g3_ParamLimits

0xd9f8,	// (0x0004afa0) linegrid_cam4_burst_pane_g3

0x0002,

0xfa2a,	// (0x0004cfd2) linegrid_cam4_burst_pane_g_ParamLimits

0xfa2a,	// (0x0004cfd2) linegrid_cam4_burst_pane_g

0x80bf,	// (0x00045667) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x80bf,	// (0x00045667) linegrid_cam4_burst_pane_g3_copy1

0xda05,	// (0x0004afad) linegrid_cam4_burst_pane_g4_ParamLimits

0xda05,	// (0x0004afad) linegrid_cam4_burst_pane_g4

0x80d9,	// (0x00045681) linegrid_cam4_burst_pane_g5_ParamLimits

0x80d9,	// (0x00045681) linegrid_cam4_burst_pane_g5

0x80ea,	// (0x00045692) linegrid_cam4_burst_pane_g6_ParamLimits

0x80ea,	// (0x00045692) linegrid_cam4_burst_pane_g6

0xda12,	// (0x0004afba) linegrid_cam4_burst_pane_g7_ParamLimits

0xda12,	// (0x0004afba) linegrid_cam4_burst_pane_g7

0x80fb,	// (0x000456a3) cell_cam4_burst_pane_g1

0xda2b,	// (0x0004afd3) main_cam5_pane_t1_ParamLimits

0xda2b,	// (0x0004afd3) main_cam5_pane_t1

0xda3d,	// (0x0004afe5) main_cam5_pane_t2_ParamLimits

0xda3d,	// (0x0004afe5) main_cam5_pane_t2

0xda4f,	// (0x0004aff7) main_cam5_pane_t3_ParamLimits

0xda4f,	// (0x0004aff7) main_cam5_pane_t3

0xda61,	// (0x0004b009) main_cam5_pane_t4_ParamLimits

0xda61,	// (0x0004b009) main_cam5_pane_t4

0xda79,	// (0x0004b021) main_cam5_pane_t5_ParamLimits

0xda79,	// (0x0004b021) main_cam5_pane_t5

0xda8d,	// (0x0004b035) main_cam5_pane_t6_ParamLimits

0xda8d,	// (0x0004b035) main_cam5_pane_t6

0xdaa1,	// (0x0004b049) main_cam5_pane_t7_ParamLimits

0xdaa1,	// (0x0004b049) main_cam5_pane_t7

0xdab3,	// (0x0004b05b) main_cam5_pane_t8_ParamLimits

0xdab3,	// (0x0004b05b) main_cam5_pane_t8

0xdacf,	// (0x0004b077) main_cam5_pane_t9_ParamLimits

0xdacf,	// (0x0004b077) main_cam5_pane_t9

0xdae1,	// (0x0004b089) main_cam5_pane_t10_ParamLimits

0xdae1,	// (0x0004b089) main_cam5_pane_t10

0xdaf3,	// (0x0004b09b) main_cam5_pane_t11_ParamLimits

0xdaf3,	// (0x0004b09b) main_cam5_pane_t11

0xdb05,	// (0x0004b0ad) main_cam5_pane_t12_ParamLimits

0xdb05,	// (0x0004b0ad) main_cam5_pane_t12

0xdb1a,	// (0x0004b0c2) main_cam5_pane_t13_ParamLimits

0xdb1a,	// (0x0004b0c2) main_cam5_pane_t13

0x000c,

0xfa36,	// (0x0004cfde) main_cam5_pane_t_ParamLimits

0xfa36,	// (0x0004cfde) main_cam5_pane_t

0x2370,	// (0x0003f918) popup_scut_keymap_window_ParamLimits

0x2370,	// (0x0003f918) popup_scut_keymap_window

0x810e,	// (0x000456b6) aid_size_cell_brow_shortcut

0xaa79,	// (0x00048021) bg_popup_window_pane_cp010

0x811a,	// (0x000456c2) grid_scut_pane

0x8126,	// (0x000456ce) cell_scut_pane_ParamLimits

0x8126,	// (0x000456ce) cell_scut_pane

0x813d,	// (0x000456e5) cell_scut_pane_g1

0xdb37,	// (0x0004b0df) cell_scut_pane_t1

0xdb46,	// (0x0004b0ee) cell_scut_pane_t2

0x8146,	// (0x000456ee) cell_scut_pane_t3

0x0002,

0xfa51,	// (0x0004cff9) cell_scut_pane_t

0x6011,	// (0x000435b9) main_mup3_pane_g8_ParamLimits

0x6011,	// (0x000435b9) main_mup3_pane_g8

0x753e,	// (0x00044ae6) area_vitu2_query_pane_ParamLimits

0x753e,	// (0x00044ae6) area_vitu2_query_pane

0x126e,	// (0x0003e816) input_focus_pane_cp08

0xdb55,	// (0x0004b0fd) area_vitu2_query_pane_g1

0x136f,	// (0x0003e917) area_vitu2_query_pane_g2

0x0001,

0xfa58,	// (0x0004d000) area_vitu2_query_pane_g

0x8154,	// (0x000456fc) area_vitu2_query_pane_t1_ParamLimits

0x8154,	// (0x000456fc) area_vitu2_query_pane_t1

0x8168,	// (0x00045710) area_vitu2_query_pane_t2_ParamLimits

0x8168,	// (0x00045710) area_vitu2_query_pane_t2

0x1380,	// (0x0003e928) area_vitu2_query_pane_t3_ParamLimits

0x1380,	// (0x0003e928) area_vitu2_query_pane_t3

0x13a8,	// (0x0003e950) area_vitu2_query_pane_t4_ParamLimits

0x13a8,	// (0x0003e950) area_vitu2_query_pane_t4

0x13d0,	// (0x0003e978) area_vitu2_query_pane_t5_ParamLimits

0x13d0,	// (0x0003e978) area_vitu2_query_pane_t5

0x13f8,	// (0x0003e9a0) area_vitu2_query_pane_t6_ParamLimits

0x13f8,	// (0x0003e9a0) area_vitu2_query_pane_t6

0x0006,

0xfa5d,	// (0x0004d005) area_vitu2_query_pane_t_ParamLimits

0xfa5d,	// (0x0004d005) area_vitu2_query_pane_t

0x817c,	// (0x00045724) bg_button_pane_cp018

0x818a,	// (0x00045732) bg_button_pane_cp021

0x1444,	// (0x0003e9ec) bg_button_pane_cp022

0x1455,	// (0x0003e9fd) input_focus_pane_cp09

0xb325,	// (0x000488cd) aid_size_touch_mv_arrow_left

0xb34e,	// (0x000488f6) aid_size_touch_mv_arrow_right

0x7ae1,	// (0x00045089) main_cset_slider_pane_g16_ParamLimits

0x7ae1,	// (0x00045089) main_cset_slider_pane_g16

0x7aef,	// (0x00045097) main_cset_slider_pane_g17_ParamLimits

0x7aef,	// (0x00045097) main_cset_slider_pane_g17

0x80fb,	// (0x000456a3) cell_cam4_burst_pane_g1_ParamLimits

0xa143,	// (0x000476eb) compa_mode_pane

0x7cf2,	// (0x0004529a) popup_vtel_slider_window_g3_ParamLimits

0x7cf2,	// (0x0004529a) popup_vtel_slider_window_g3

0x7d06,	// (0x000452ae) popup_vtel_slider_window_g4_ParamLimits

0x7d06,	// (0x000452ae) popup_vtel_slider_window_g4

0x7d1a,	// (0x000452c2) popup_vtel_slider_window_t1_ParamLimits

0x7d1a,	// (0x000452c2) popup_vtel_slider_window_t1

0xa143,	// (0x000476eb) main_cl_pane

0x536c,	// (0x00042914) popup_imed_adjust2_window_ParamLimits

0xc8f4,	// (0x00049e9c) bg_tb_trans_pane_cp05_ParamLimits

0xd24e,	// (0x0004a7f6) popup_imed_adjust2_window_g1_ParamLimits

0xd25d,	// (0x0004a805) popup_imed_adjust2_window_g2_ParamLimits

0xd25d,	// (0x0004a805) popup_imed_adjust2_window_g2

0xd269,	// (0x0004a811) popup_imed_adjust2_window_g3_ParamLimits

0xd269,	// (0x0004a811) popup_imed_adjust2_window_g3

0x0002,

0xf7c4,	// (0x0004cd6c) popup_imed_adjust2_window_g_ParamLimits

0xf7c4,	// (0x0004cd6c) popup_imed_adjust2_window_g

0xd275,	// (0x0004a81d) popup_imed_adjust2_window_t1_ParamLimits

0xd28d,	// (0x0004a835) slider_imed_adjust_pane_ParamLimits

0xd2a1,	// (0x0004a849) slider_imed_adjust_pane_g1_ParamLimits

0xd2b1,	// (0x0004a859) slider_imed_adjust_pane_g2_ParamLimits

0xd2c1,	// (0x0004a869) slider_imed_adjust_pane_g3_ParamLimits

0xd2d2,	// (0x0004a87a) slider_imed_adjust_pane_g4_ParamLimits

0xf7cb,	// (0x0004cd73) slider_imed_adjust_pane_g_ParamLimits

0x7285,	// (0x0004482d) aid_touch_area_cam4_ParamLimits

0x7285,	// (0x0004482d) aid_touch_area_cam4

0x7295,	// (0x0004483d) battery_pane_cp01

0x731c,	// (0x000448c4) main_camera4_pane_g6_ParamLimits

0x731c,	// (0x000448c4) main_camera4_pane_g6

0x733a,	// (0x000448e2) main_camera4_pane_t2_ParamLimits

0x733a,	// (0x000448e2) main_camera4_pane_t2

0x0001,

0xf8d2,	// (0x0004ce7a) main_camera4_pane_t_ParamLimits

0xf8d2,	// (0x0004ce7a) main_camera4_pane_t

0x73c1,	// (0x00044969) aid_touch_area_vid4_ParamLimits

0x73c1,	// (0x00044969) aid_touch_area_vid4

0x7401,	// (0x000449a9) main_video4_pane_g5_ParamLimits

0x7401,	// (0x000449a9) main_video4_pane_g5

0x7425,	// (0x000449cd) vid4_progress_pane_ParamLimits

0x7425,	// (0x000449cd) vid4_progress_pane

0xd826,	// (0x0004adce) main_cset_slider_pane_g18_ParamLimits

0xd826,	// (0x0004adce) main_cset_slider_pane_g18

0xda1f,	// (0x0004afc7) cell_cam4_burst_pane_g2_ParamLimits

0xda1f,	// (0x0004afc7) cell_cam4_burst_pane_g2

0x0001,

0xfa31,	// (0x0004cfd9) cell_cam4_burst_pane_g_ParamLimits

0xfa31,	// (0x0004cfd9) cell_cam4_burst_pane_g

0x8196,	// (0x0004573e) bg_cl_pane_ParamLimits

0x8196,	// (0x0004573e) bg_cl_pane

0x81a2,	// (0x0004574a) cl_header_pane_ParamLimits

0x81a2,	// (0x0004574a) cl_header_pane

0x81ae,	// (0x00045756) cl_listscroll_pane_ParamLimits

0x81ae,	// (0x00045756) cl_listscroll_pane

0xdb61,	// (0x0004b109) bg_cl_pane_g1

0xdb69,	// (0x0004b111) bg_cl_pane_g2

0xdb71,	// (0x0004b119) bg_cl_pane_g3

0xdb79,	// (0x0004b121) bg_cl_pane_g4

0xdb81,	// (0x0004b129) bg_cl_pane_g5

0xdb89,	// (0x0004b131) bg_cl_pane_g6

0xdb91,	// (0x0004b139) bg_cl_pane_g7

0xdb99,	// (0x0004b141) bg_cl_pane_g8

0xdba1,	// (0x0004b149) bg_cl_pane_g9

0x0008,

0xfa6c,	// (0x0004d014) bg_cl_pane_g

0x81ba,	// (0x00045762) aid_height_cl_leading_ParamLimits

0x81ba,	// (0x00045762) aid_height_cl_leading

0x81c6,	// (0x0004576e) aid_height_cl_text_ParamLimits

0x81c6,	// (0x0004576e) aid_height_cl_text

0xd8d2,	// (0x0004ae7a) bg_cl_header_pane_ParamLimits

0xd8d2,	// (0x0004ae7a) bg_cl_header_pane

0x81de,	// (0x00045786) cl_header_pane_g1_ParamLimits

0x81de,	// (0x00045786) cl_header_pane_g1

0x81eb,	// (0x00045793) cl_header_pane_t1_ParamLimits

0x81eb,	// (0x00045793) cl_header_pane_t1

0xdba9,	// (0x0004b151) cl_list_pane

0xd7f9,	// (0x0004ada1) hc_scroll_pane_cp01

0xacb2,	// (0x0004825a) bg_cl_header_pane_g1

0xd6df,	// (0x0004ac87) bg_cl_header_pane_g2

0xacd2,	// (0x0004827a) bg_cl_header_pane_g3

0xd6ef,	// (0x0004ac97) bg_cl_header_pane_g4

0xd6e7,	// (0x0004ac8f) bg_cl_header_pane_g5

0xd93a,	// (0x0004aee2) bg_cl_header_pane_g6

0xd707,	// (0x0004acaf) bg_cl_header_pane_g7

0xd70f,	// (0x0004acb7) bg_cl_header_pane_g8

0xd6ff,	// (0x0004aca7) bg_cl_header_pane_g9

0x0008,

0xfa7f,	// (0x0004d027) bg_cl_header_pane_g

0x81fd,	// (0x000457a5) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x81fd,	// (0x000457a5) hc_cl_list_double_graphic_heading_pane

0x820e,	// (0x000457b6) hc_cl_list_single_graphic_pane_ParamLimits

0x820e,	// (0x000457b6) hc_cl_list_single_graphic_pane

0x8227,	// (0x000457cf) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x8227,	// (0x000457cf) hc_cl_list_single_graphic_pane_g1

0x8233,	// (0x000457db) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x8233,	// (0x000457db) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa92,	// (0x0004d03a) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa92,	// (0x0004d03a) hc_cl_list_single_graphic_pane_g

0x8247,	// (0x000457ef) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x8247,	// (0x000457ef) hc_cl_list_single_graphic_pane_t1

0x8227,	// (0x000457cf) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x8227,	// (0x000457cf) hc_cl_list_double_graphic_heading_pane_g1

0x825c,	// (0x00045804) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x825c,	// (0x00045804) hc_cl_list_double_graphic_heading_pane_g2

0x8270,	// (0x00045818) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x8270,	// (0x00045818) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa97,	// (0x0004d03f) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa97,	// (0x0004d03f) hc_cl_list_double_graphic_heading_pane_g

0x8284,	// (0x0004582c) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x8284,	// (0x0004582c) hc_cl_list_double_graphic_heading_pane_t1

0x8299,	// (0x00045841) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x8299,	// (0x00045841) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa9e,	// (0x0004d046) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa9e,	// (0x0004d046) hc_cl_list_double_graphic_heading_pane_t

0x82b6,	// (0x0004585e) vid4_progress_pane_g1

0x82c6,	// (0x0004586e) vid4_progress_pane_g2

0x82d6,	// (0x0004587e) vid4_progress_pane_g3

0x82e8,	// (0x00045890) vid4_progress_pane_g4

0x0004,

0xfaa3,	// (0x0004d04b) vid4_progress_pane_g

0x8300,	// (0x000458a8) vid4_progress_pane_t1

0x8316,	// (0x000458be) vid4_progress_pane_t2

0x0002,

0xfaae,	// (0x0004d056) vid4_progress_pane_t

0x8340,	// (0x000458e8) wait_bar_pane_cp07

0xcaef,	// (0x0004a097) blid_firmament_pane_ParamLimits

0xcb32,	// (0x0004a0da) popup_blid_sat_info2_window_g1

0xcb56,	// (0x0004a0fe) popup_blid_sat_info2_window_t3

0xcb64,	// (0x0004a10c) popup_blid_sat_info2_window_t4

0xcb72,	// (0x0004a11a) popup_blid_sat_info2_window_t5

0xcb80,	// (0x0004a128) popup_blid_sat_info2_window_t6

0xcb90,	// (0x0004a138) popup_blid_sat_info2_window_t7

0xcb9e,	// (0x0004a146) popup_blid_sat_info2_window_t8

0xcbac,	// (0x0004a154) popup_blid_sat_info2_window_t9

0xcbba,	// (0x0004a162) popup_blid_sat_info2_window_t10

0xcc7c,	// (0x0004a224) aid_firma_cardinal_ParamLimits

0xcc90,	// (0x0004a238) blid_firmament_pane_t1_ParamLimits

0xcca7,	// (0x0004a24f) blid_firmament_pane_t2_ParamLimits

0xccbe,	// (0x0004a266) blid_firmament_pane_t3_ParamLimits

0xccd5,	// (0x0004a27d) blid_firmament_pane_t4_ParamLimits

0xf6b8,	// (0x0004cc60) blid_firmament_pane_t_ParamLimits

0xccec,	// (0x0004a294) blid_sat_info_pane_ParamLimits

0xb494,	// (0x00048a3c) main_cam_set_pane_ParamLimits

0x67e8,	// (0x00043d90) aid_size_cell_colour_35_ParamLimits

0x6802,	// (0x00043daa) aid_size_cell_colour_112_ParamLimits

0x6819,	// (0x00043dc1) aid_size_cell_effect_ParamLimits

0xb494,	// (0x00048a3c) bg_tb_trans_pane_cp02_ParamLimits

0xb4a2,	// (0x00048a4a) heading_imed_pane_ParamLimits

0x6833,	// (0x00043ddb) listscroll_imed_pane_ParamLimits

0xbf1a,	// (0x000494c2) popup_call2_audio_first_window_g5_ParamLimits

0xbf1a,	// (0x000494c2) popup_call2_audio_first_window_g5

0x6f79,	// (0x00044521) aid_size_touch_image3_arrow_left_ParamLimits

0x6f79,	// (0x00044521) aid_size_touch_image3_arrow_left

0x6f8f,	// (0x00044537) aid_size_touch_image3_arrow_right_ParamLimits

0x6f8f,	// (0x00044537) aid_size_touch_image3_arrow_right

0x832b,	// (0x000458d3) vid4_progress_pane_t3

0x6ad1,	// (0x00044079) main_hwr_training_symbol_option_pane_ParamLimits

0x6ad1,	// (0x00044079) main_hwr_training_symbol_option_pane

0xd53b,	// (0x0004aae3) popup_hwr_training_preview_window_ParamLimits

0xd53b,	// (0x0004aae3) popup_hwr_training_preview_window

0x6b32,	// (0x000440da) hwr_training_navi_pane_g5_ParamLimits

0x6b32,	// (0x000440da) hwr_training_navi_pane_g5

0xd6cd,	// (0x0004ac75) popup_char_count_window

0xd8d2,	// (0x0004ae7a) bg_popup_sub_pane_cp20_ParamLimits

0x7e0b,	// (0x000453b3) list_vitu2_match_list_pane_ParamLimits

0x7e17,	// (0x000453bf) vitu2_page_scroll_pane_ParamLimits

0x7e17,	// (0x000453bf) vitu2_page_scroll_pane

0xdbb2,	// (0x0004b15a) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdbb2,	// (0x0004b15a) list_single_hwr_training_symbol_option_pane

0xdbc5,	// (0x0004b16d) list_single_hwr_training_symbol_option_pane_g1

0xdbcd,	// (0x0004b175) list_single_hwr_training_symbol_option_pane_t1

0xdbdb,	// (0x0004b183) bg_button_pane_cp023

0xdbe4,	// (0x0004b18c) bg_button_pane_cp024

0x8365,	// (0x0004590d) vitu2_page_scroll_pane_g1

0x836d,	// (0x00045915) vitu2_page_scroll_pane_g2

0x0001,

0xfab5,	// (0x0004d05d) vitu2_page_scroll_pane_g

0x8375,	// (0x0004591d) vitu2_page_scroll_pane_t1

0xca4f,	// (0x00049ff7) popup_char_count_window_g1

0xdc17,	// (0x0004b1bf) popup_char_count_window_g2

0xdc20,	// (0x0004b1c8) popup_char_count_window_g3

0x0002,

0xfaba,	// (0x0004d062) popup_char_count_window_g

0xdc29,	// (0x0004b1d1) popup_char_count_window_t1

0xa143,	// (0x000476eb) main_vded2_pane

0xd23a,	// (0x0004a7e2) aid_size_cell_imed_line

0xd244,	// (0x0004a7ec) grid_imed_line_width_pane

0x7493,	// (0x00044a3b) vid4_indicators_pane_g4

0xdc37,	// (0x0004b1df) cell_imed_line_width_pane_ParamLimits

0xdc37,	// (0x0004b1df) cell_imed_line_width_pane

0xdc4b,	// (0x0004b1f3) cell_imed_line_width_pane_g1

0xdc54,	// (0x0004b1fc) cell_imed_line_width_pane_g2

0x0001,

0xfac1,	// (0x0004d069) cell_imed_line_width_pane_g

0x8384,	// (0x0004592c) main_vded2_pane_g1_ParamLimits

0x8384,	// (0x0004592c) main_vded2_pane_g1

0x8391,	// (0x00045939) main_vded2_pane_g2_ParamLimits

0x8391,	// (0x00045939) main_vded2_pane_g2

0x0001,

0xfac6,	// (0x0004d06e) main_vded2_pane_g_ParamLimits

0xfac6,	// (0x0004d06e) main_vded2_pane_g

0x839f,	// (0x00045947) vded2_slider_pane_ParamLimits

0x839f,	// (0x00045947) vded2_slider_pane

0x83ac,	// (0x00045954) aid_size_touch_vded2_end

0x83b6,	// (0x0004595e) aid_size_touch_vded2_playhead

0xdc5c,	// (0x0004b204) aid_size_touch_vded2_start

0xdc64,	// (0x0004b20c) vded2_slider_bg_pane

0xdc6d,	// (0x0004b215) vded2_slider_pane_g1

0xdc76,	// (0x0004b21e) vded2_slider_pane_g2

0x83be,	// (0x00045966) vded2_slider_pane_g3

0x0002,

0xfacb,	// (0x0004d073) vded2_slider_pane_g

0xdc7e,	// (0x0004b226) vded2_slider_bg_pane_g1

0xdc87,	// (0x0004b22f) vded2_slider_bg_pane_g2

0xdc90,	// (0x0004b238) vded2_slider_bg_pane_g3

0x0002,

0xfad2,	// (0x0004d07a) vded2_slider_bg_pane_g

0x4bc4,	// (0x0004216c) aid_postcard_touch_down_pane_ParamLimits

0x4bc4,	// (0x0004216c) aid_postcard_touch_down_pane

0x4bd4,	// (0x0004217c) aid_postcard_touch_up_pane_ParamLimits

0x4bd4,	// (0x0004217c) aid_postcard_touch_up_pane

0xa143,	// (0x000476eb) main_blid2_pane

0x52f7,	// (0x0004289f) popup_blid2_search_window

0xa143,	// (0x000476eb) blid2_gps_pane

0xa143,	// (0x000476eb) blid2_navig_pane

0xa143,	// (0x000476eb) blid2_search_pane

0xa143,	// (0x000476eb) blid2_tripm_pane

0x83c7,	// (0x0004596f) blid2_search_pane_g1_ParamLimits

0x83c7,	// (0x0004596f) blid2_search_pane_g1

0x83d7,	// (0x0004597f) blid2_search_pane_t1_ParamLimits

0x83d7,	// (0x0004597f) blid2_search_pane_t1

0x83e9,	// (0x00045991) aid_size_cell_blid2_gps_ParamLimits

0x83e9,	// (0x00045991) aid_size_cell_blid2_gps

0x83f9,	// (0x000459a1) blid2_gps_pane_g1_ParamLimits

0x83f9,	// (0x000459a1) blid2_gps_pane_g1

0x8405,	// (0x000459ad) grid_blid2_satellite_pane_ParamLimits

0x8405,	// (0x000459ad) grid_blid2_satellite_pane

0x8415,	// (0x000459bd) blid2_navig_pane_g1_ParamLimits

0x8415,	// (0x000459bd) blid2_navig_pane_g1

0x8421,	// (0x000459c9) blid2_navig_pane_t1_ParamLimits

0x8421,	// (0x000459c9) blid2_navig_pane_t1

0x8433,	// (0x000459db) blid2_navig_pane_t2_ParamLimits

0x8433,	// (0x000459db) blid2_navig_pane_t2

0x0001,

0xfad9,	// (0x0004d081) blid2_navig_pane_t_ParamLimits

0xfad9,	// (0x0004d081) blid2_navig_pane_t

0x8445,	// (0x000459ed) blid2_navig_ring_pane_ParamLimits

0x8445,	// (0x000459ed) blid2_navig_ring_pane

0x8455,	// (0x000459fd) blid2_speed_pane_ParamLimits

0x8455,	// (0x000459fd) blid2_speed_pane

0x8461,	// (0x00045a09) blid2_tripm_pane_g1_ParamLimits

0x8461,	// (0x00045a09) blid2_tripm_pane_g1

0x8471,	// (0x00045a19) blid2_tripm_pane_g2_ParamLimits

0x8471,	// (0x00045a19) blid2_tripm_pane_g2

0x847d,	// (0x00045a25) blid2_tripm_pane_g3_ParamLimits

0x847d,	// (0x00045a25) blid2_tripm_pane_g3

0x8489,	// (0x00045a31) blid2_tripm_pane_g4_ParamLimits

0x8489,	// (0x00045a31) blid2_tripm_pane_g4

0x8495,	// (0x00045a3d) blid2_tripm_pane_g5_ParamLimits

0x8495,	// (0x00045a3d) blid2_tripm_pane_g5

0x0005,

0xfade,	// (0x0004d086) blid2_tripm_pane_g_ParamLimits

0xfade,	// (0x0004d086) blid2_tripm_pane_g

0x84b1,	// (0x00045a59) blid2_tripm_pane_t1_ParamLimits

0x84b1,	// (0x00045a59) blid2_tripm_pane_t1

0x84c5,	// (0x00045a6d) blid2_tripm_pane_t2_ParamLimits

0x84c5,	// (0x00045a6d) blid2_tripm_pane_t2

0x84d7,	// (0x00045a7f) blid2_tripm_pane_t3_ParamLimits

0x84d7,	// (0x00045a7f) blid2_tripm_pane_t3

0x0003,

0xfaeb,	// (0x0004d093) blid2_tripm_pane_t_ParamLimits

0xfaeb,	// (0x0004d093) blid2_tripm_pane_t

0x8509,	// (0x00045ab1) cell_blid2_satellite_pane_ParamLimits

0x8509,	// (0x00045ab1) cell_blid2_satellite_pane

0x8523,	// (0x00045acb) cell_blid2_satellite_pane_g1

0xdc99,	// (0x0004b241) cell_blid2_satellite_pane_t1

0xccfc,	// (0x0004a2a4) blid2_speed_pane_g1

0xdca7,	// (0x0004b24f) blid2_speed_pane_t1

0xdcb5,	// (0x0004b25d) blid2_speed_pane_t2

0x0001,

0xfaf4,	// (0x0004d09c) blid2_speed_pane_t

0xccfc,	// (0x0004a2a4) blid2_navig_ring_pane_g1

0x852c,	// (0x00045ad4) blid2_navig_ring_pane_g2

0x8534,	// (0x00045adc) blid2_navig_ring_pane_g3

0x853c,	// (0x00045ae4) blid2_navig_ring_pane_g4

0x8544,	// (0x00045aec) blid2_navig_ring_pane_g5

0x0004,

0xfaf9,	// (0x0004d0a1) blid2_navig_ring_pane_g

0xa143,	// (0x000476eb) bg_popup_window_pane_cp011

0xdcc3,	// (0x0004b26b) popup_blid2_search_window_g1

0xdccb,	// (0x0004b273) popup_blid2_search_window_t1

0xdcd9,	// (0x0004b281) popup_blid2_search_window_t2

0x0001,

0xfb04,	// (0x0004d0ac) popup_blid2_search_window_t

0xabc1,	// (0x00048169) main_browser_pane_g1

0xa8b4,	// (0x00047e5c) main_browser_pane_ParamLimits

0xb494,	// (0x00048a3c) bg_button_pane_cp011_ParamLimits

0x7702,	// (0x00044caa) cell_vitu2_function_pane_g1_ParamLimits

0xc8f4,	// (0x00049e9c) bg_popup_sub_pane_cp22_ParamLimits

0x126e,	// (0x0003e816) input_focus_pane_cp08_ParamLimits

0x7fa7,	// (0x0004554f) popup_vitu2_query_button_pane_ParamLimits

0x7fa7,	// (0x0004554f) popup_vitu2_query_button_pane

0x1285,	// (0x0003e82d) popup_vitu2_query_input_button_pane

0xd975,	// (0x0004af1d) popup_vitu2_query_window_g1_ParamLimits

0x128f,	// (0x0003e837) popup_vitu2_query_window_g2_ParamLimits

0xfa05,	// (0x0004cfad) popup_vitu2_query_window_g_ParamLimits

0xa143,	// (0x000476eb) bg_button_pane_cp026

0x854c,	// (0x00045af4) popup_vitu2_query_input_button_pane_g1

0xa143,	// (0x000476eb) bg_button_pane_cp025

0xdce7,	// (0x0004b28f) popup_vitu2_query_button_pane_t1

0x5d55,	// (0x000432fd) main_mp3_pane_t6

0x5d65,	// (0x0004330d) popup_slider_window_cp01

0x7370,	// (0x00044918) cam4_battery_pane

0x7450,	// (0x000449f8) cam4_battery_pane_cp02

0x82ae,	// (0x00045856) cam4_battery_pane_cp01

0x82ae,	// (0x00045856) cam4_battery_pane_cp03

0xccfc,	// (0x0004a2a4) cam4_battery_pane_g1

0xdcf5,	// (0x0004b29d) cam4_battery_pane_g2

0x0001,

0xfb09,	// (0x0004d0b1) cam4_battery_pane_g

0xcbc8,	// (0x0004a170) popup_blid_sat_info2_window_t11

0xb325,	// (0x000488cd) aid_size_touch_mv_arrow_left_ParamLimits

0xb34e,	// (0x000488f6) aid_size_touch_mv_arrow_right_ParamLimits

0xb3ac,	// (0x00048954) navi_pane_g1_ParamLimits

0xb3b8,	// (0x00048960) navi_pane_g2_ParamLimits

0xb3e6,	// (0x0004898e) navi_pane_g3_ParamLimits

0xf3ca,	// (0x0004c972) navi_pane_g_ParamLimits

0x463a,	// (0x00041be2) navi_pane_mv_t1_ParamLimits

0x683f,	// (0x00043de7) grid_imed_effect_pane_ParamLimits

0x3129,	// (0x000406d1) aid_placing_vt_slider_lsc

0xab10,	// (0x000480b8) aid_placing_vt_slider_prt

0xb494,	// (0x00048a3c) bg_tb_trans_pane_cp01_ParamLimits

0xce8b,	// (0x0004a433) popup_image_details_window_g1_ParamLimits

0xce9e,	// (0x0004a446) popup_image_details_window_g2_ParamLimits

0xceb3,	// (0x0004a45b) popup_image_details_window_g3_ParamLimits

0xceb3,	// (0x0004a45b) popup_image_details_window_g3

0xf6fd,	// (0x0004cca5) popup_image_details_window_g_ParamLimits

0xcec7,	// (0x0004a46f) popup_image_details_window_t1_ParamLimits

0xced9,	// (0x0004a481) popup_image_details_window_t2_ParamLimits

0xcef2,	// (0x0004a49a) popup_image_details_window_t3_ParamLimits

0xcf06,	// (0x0004a4ae) popup_image_details_window_t4_ParamLimits

0xcf21,	// (0x0004a4c9) popup_image_details_window_t5_ParamLimits

0xf704,	// (0x0004ccac) popup_image_details_window_t_ParamLimits

0x81d2,	// (0x0004577a) cl_header_name_pane_ParamLimits

0x81d2,	// (0x0004577a) cl_header_name_pane

0x8554,	// (0x00045afc) cl_header_name_pane_t1_ParamLimits

0x8554,	// (0x00045afc) cl_header_name_pane_t1

0x856b,	// (0x00045b13) cl_header_name_pane_t2_ParamLimits

0x856b,	// (0x00045b13) cl_header_name_pane_t2

0x8595,	// (0x00045b3d) cl_header_name_pane_t3_ParamLimits

0x8595,	// (0x00045b3d) cl_header_name_pane_t3

0x0002,

0xfb0e,	// (0x0004d0b6) cl_header_name_pane_t_ParamLimits

0xfb0e,	// (0x0004d0b6) cl_header_name_pane_t

0xb475,	// (0x00048a1d) navi_pane_mv_g2_ParamLimits

0xd6a7,	// (0x0004ac4f) field_vitu2_entry_pane_g1_ParamLimits

0xd6b3,	// (0x0004ac5b) field_vitu2_entry_pane_g2_ParamLimits

0xd6bf,	// (0x0004ac67) field_vitu2_entry_pane_g3_ParamLimits

0xd6bf,	// (0x0004ac67) field_vitu2_entry_pane_g3

0xf904,	// (0x0004ceac) field_vitu2_entry_pane_g_ParamLimits

0x7696,	// (0x00044c3e) cell_vitu2_itu_pane_g1_ParamLimits

0x76a8,	// (0x00044c50) cell_vitu2_itu_pane_g2_ParamLimits

0x76a8,	// (0x00044c50) cell_vitu2_itu_pane_g2

0x0001,

0xf910,	// (0x0004ceb8) cell_vitu2_itu_pane_g_ParamLimits

0xf910,	// (0x0004ceb8) cell_vitu2_itu_pane_g

0xb494,	// (0x00048a3c) bg_vkb2_func_pane_cp05_ParamLimits

0xb494,	// (0x00048a3c) bg_vkb2_func_pane_cp05

0xb494,	// (0x00048a3c) bg_vkb2_func_pane_cp03

0xb494,	// (0x00048a3c) bg_vkb2_func_pane_cp04

0xb494,	// (0x00048a3c) bg_vkb2_func_pane_cp10_ParamLimits

0xb494,	// (0x00048a3c) bg_vkb2_func_pane_cp10

0x1444,	// (0x0003e9ec) bg_vkb2_func_pane_cp08

0x817c,	// (0x00045724) bg_vkb2_func_pane_cp06

0x818a,	// (0x00045732) bg_vkb2_func_pane_cp07

0xdbed,	// (0x0004b195) bg_vkb2_func_pane_cp11_ParamLimits

0xdbed,	// (0x0004b195) bg_vkb2_func_pane_cp11

0xdc02,	// (0x0004b1aa) bg_vkb2_func_pane_cp12_ParamLimits

0xdc02,	// (0x0004b1aa) bg_vkb2_func_pane_cp12

0xa143,	// (0x000476eb) bg_vkb2_func_pane_cp09

0xd6df,	// (0x0004ac87) bg_vkb2_func_pane_g1

0xacd2,	// (0x0004827a) bg_vkb2_func_pane_g2

0xd6e7,	// (0x0004ac8f) bg_vkb2_func_pane_g3

0xd6ef,	// (0x0004ac97) bg_vkb2_func_pane_g4

0xd93a,	// (0x0004aee2) bg_vkb2_func_pane_g5

0xd707,	// (0x0004acaf) bg_vkb2_func_pane_g6

0xd70f,	// (0x0004acb7) bg_vkb2_func_pane_g7

0xd6ff,	// (0x0004aca7) bg_vkb2_func_pane_g8

0xacb2,	// (0x0004825a) bg_vkb2_func_pane_g9

0x0008,

0xfb15,	// (0x0004d0bd) bg_vkb2_func_pane_g

0x84a3,	// (0x00045a4b) blid2_tripm_pane_g6_ParamLimits

0x84a3,	// (0x00045a4b) blid2_tripm_pane_g6

0xd5f9,	// (0x0004aba1) mp4_progress_pane_g1

0x84fd,	// (0x00045aa5) blid2_tripm_values_pane_ParamLimits

0x84fd,	// (0x00045aa5) blid2_tripm_values_pane

0x85ba,	// (0x00045b62) blid2_tripm_values_pane_t1

0x85c8,	// (0x00045b70) blid2_tripm_values_pane_t2

0x85d6,	// (0x00045b7e) blid2_tripm_values_pane_t3

0x85e4,	// (0x00045b8c) blid2_tripm_values_pane_t4

0x85f2,	// (0x00045b9a) blid2_tripm_values_pane_t5

0x8600,	// (0x00045ba8) blid2_tripm_values_pane_t6

0x860e,	// (0x00045bb6) blid2_tripm_values_pane_t7

0x861c,	// (0x00045bc4) blid2_tripm_values_pane_t8

0x862a,	// (0x00045bd2) blid2_tripm_values_pane_t9

0x0008,

0xfb28,	// (0x0004d0d0) blid2_tripm_values_pane_t

0x3169,	// (0x00040711) call_video_pane_t1_ParamLimits

0x318a,	// (0x00040732) call_video_pane_t2_ParamLimits

0xf253,	// (0x0004c7fb) call_video_pane_t_ParamLimits

0x0fc6,	// (0x0003e56e) msg_header_pane_g1_ParamLimits

0xb677,	// (0x00048c1f) msg_header_pane_g2_ParamLimits

0xb677,	// (0x00048c1f) msg_header_pane_g2

0x0001,

0xf46d,	// (0x0004ca15) msg_header_pane_g_ParamLimits

0xf46d,	// (0x0004ca15) msg_header_pane_g

0xa8b4,	// (0x00047e5c) main_clock2_pane_ParamLimits

0x65b9,	// (0x00043b61) grid_clock2_toolbar_pane_ParamLimits

0x65b9,	// (0x00043b61) grid_clock2_toolbar_pane

0x65b9,	// (0x00043b61) listscroll_clock2_pane_ParamLimits

0x65b9,	// (0x00043b61) listscroll_clock2_pane

0x6669,	// (0x00043c11) main_clock2_pane_t3_ParamLimits

0x6669,	// (0x00043c11) main_clock2_pane_t3

0x667b,	// (0x00043c23) main_clock2_pane_t4_ParamLimits

0x667b,	// (0x00043c23) main_clock2_pane_t4

0xdcff,	// (0x0004b2a7) cell_clock2_toolbar_pane

0xdd07,	// (0x0004b2af) cell_clock2_toolbar_pane_cp01

0xdd07,	// (0x0004b2af) cell_clock2_toolbar_pane_cp02

0xdd0f,	// (0x0004b2b7) cell_clock2_toolbar_pane_cp03

0xdd17,	// (0x0004b2bf) list_clock2_pane

0xb29b,	// (0x00048843) scroll_pane_cp10

0xdd1f,	// (0x0004b2c7) list_single_clock2_pane_ParamLimits

0xdd1f,	// (0x0004b2c7) list_single_clock2_pane

0xaa79,	// (0x00048021) list_highlight_pane_cp08

0xdd2c,	// (0x0004b2d4) list_single_clock2_pane_t1

0xdd3a,	// (0x0004b2e2) list_single_clock2_pane_t2

0x0001,

0xfb3b,	// (0x0004d0e3) list_single_clock2_pane_t

0xa143,	// (0x000476eb) bg_button_pane_cp10

0xdd48,	// (0x0004b2f0) cell_clock2_toolbar_pane_g1

0x4b26,	// (0x000420ce) aid_main_viewer_pane_g1_ParamLimits

0x4b26,	// (0x000420ce) aid_main_viewer_pane_g1

0x4b32,	// (0x000420da) aid_main_viewer_pane_g2_ParamLimits

0x4b32,	// (0x000420da) aid_main_viewer_pane_g2

0x4b3e,	// (0x000420e6) aid_main_viewer_pane_g3_ParamLimits

0x4b3e,	// (0x000420e6) aid_main_viewer_pane_g3

0x4b4f,	// (0x000420f7) aid_main_viewer_pane_g4_ParamLimits

0x4b4f,	// (0x000420f7) aid_main_viewer_pane_g4

0x0003,

0xf47e,	// (0x0004ca26) aid_main_viewer_pane_g_ParamLimits

0xf47e,	// (0x0004ca26) aid_main_viewer_pane_g

0x52cf,	// (0x00042877) main_calc_pane_ParamLimits

0x52dc,	// (0x00042884) main_dialer2_pane_ParamLimits

0xa143,	// (0x000476eb) main_cam6_pane

0xa143,	// (0x000476eb) main_vid6_pane

0x65c5,	// (0x00043b6d) listscroll_gen_pane_cp06_ParamLimits

0x65c5,	// (0x00043b6d) listscroll_gen_pane_cp06

0x668d,	// (0x00043c35) main_clock2_pane_t5_ParamLimits

0x668d,	// (0x00043c35) main_clock2_pane_t5

0x66da,	// (0x00043c82) aid_call2_pane_cp10_ParamLimits

0x66ec,	// (0x00043c94) aid_call_pane_cp10_ParamLimits

0xb319,	// (0x000488c1) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb319,	// (0x000488c1) popup_clock_analogue_window_cp10_g2_ParamLimits

0x66fe,	// (0x00043ca6) popup_clock_analogue_window_cp10_g3_ParamLimits

0x66fe,	// (0x00043ca6) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb319,	// (0x000488c1) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7b9,	// (0x0004cd61) popup_clock_analogue_window_cp10_g_ParamLimits

0x6714,	// (0x00043cbc) popup_clock_analogue_window_cp10_t1_ParamLimits

0x6f26,	// (0x000444ce) cell_dialer2_keypad_pane_g2_ParamLimits

0x6f26,	// (0x000444ce) cell_dialer2_keypad_pane_g2

0x0001,

0xf8a3,	// (0x0004ce4b) cell_dialer2_keypad_pane_g_ParamLimits

0xf8a3,	// (0x0004ce4b) cell_dialer2_keypad_pane_g

0x6f42,	// (0x000444ea) cell_dialer2_keypad_pane_t1

0x79cd,	// (0x00044f75) main_cset_text2_pane_ParamLimits

0x79cd,	// (0x00044f75) main_cset_text2_pane

0xdb55,	// (0x0004b0fd) area_vitu2_query_pane_g1_ParamLimits

0x136f,	// (0x0003e917) area_vitu2_query_pane_g2_ParamLimits

0xfa58,	// (0x0004d000) area_vitu2_query_pane_g_ParamLimits

0x1420,	// (0x0003e9c8) area_vitu2_query_pane_t7_ParamLimits

0x1420,	// (0x0003e9c8) area_vitu2_query_pane_t7

0x817c,	// (0x00045724) bg_button_pane_cp018_ParamLimits

0x818a,	// (0x00045732) bg_button_pane_cp021_ParamLimits

0x1444,	// (0x0003e9ec) bg_button_pane_cp022_ParamLimits

0x1444,	// (0x0003e9ec) bg_vkb2_func_pane_cp08_ParamLimits

0x817c,	// (0x00045724) bg_vkb2_func_pane_cp06_ParamLimits

0x818a,	// (0x00045732) bg_vkb2_func_pane_cp07_ParamLimits

0x1455,	// (0x0003e9fd) input_focus_pane_cp09_ParamLimits

0x8638,	// (0x00045be0) cam6_autofocus_pane_ParamLimits

0x8638,	// (0x00045be0) cam6_autofocus_pane

0x865a,	// (0x00045c02) cam6_image_uncrop_pane_ParamLimits

0x865a,	// (0x00045c02) cam6_image_uncrop_pane

0x8687,	// (0x00045c2f) cam6_indi_pane_ParamLimits

0x8687,	// (0x00045c2f) cam6_indi_pane

0x86a1,	// (0x00045c49) cam6_mode_pane_ParamLimits

0x86a1,	// (0x00045c49) cam6_mode_pane

0x86b5,	// (0x00045c5d) cam6_timer_pane_ParamLimits

0x86b5,	// (0x00045c5d) cam6_timer_pane

0x86c1,	// (0x00045c69) cam6_zoom_pane_ParamLimits

0x86c1,	// (0x00045c69) cam6_zoom_pane

0x86d9,	// (0x00045c81) cam6_mode_pane_g1_ParamLimits

0x86d9,	// (0x00045c81) cam6_mode_pane_g1

0x86e5,	// (0x00045c8d) cam6_mode_pane_g2_ParamLimits

0x86e5,	// (0x00045c8d) cam6_mode_pane_g2

0x86f1,	// (0x00045c99) cam6_mode_pane_g3_ParamLimits

0x86f1,	// (0x00045c99) cam6_mode_pane_g3

0x86fd,	// (0x00045ca5) cam6_mode_pane_g4_ParamLimits

0x86fd,	// (0x00045ca5) cam6_mode_pane_g4

0x0003,

0xfb40,	// (0x0004d0e8) cam6_mode_pane_g_ParamLimits

0xfb40,	// (0x0004d0e8) cam6_mode_pane_g

0xd8e0,	// (0x0004ae88) bg_tb_trans_pane_cp08_ParamLimits

0xd8e0,	// (0x0004ae88) bg_tb_trans_pane_cp08

0xdd50,	// (0x0004b2f8) cam6_battery_pane_ParamLimits

0xdd50,	// (0x0004b2f8) cam6_battery_pane

0xdd66,	// (0x0004b30e) cam6_indi_pane_g1_ParamLimits

0xdd66,	// (0x0004b30e) cam6_indi_pane_g1

0xdd78,	// (0x0004b320) cam6_indi_pane_g2_ParamLimits

0xdd78,	// (0x0004b320) cam6_indi_pane_g2

0xdd8a,	// (0x0004b332) cam6_indi_pane_g3_ParamLimits

0xdd8a,	// (0x0004b332) cam6_indi_pane_g3

0x0002,

0xfb49,	// (0x0004d0f1) cam6_indi_pane_g_ParamLimits

0xfb49,	// (0x0004d0f1) cam6_indi_pane_g

0xdda8,	// (0x0004b350) cam6_indi_pane_t1_ParamLimits

0xdda8,	// (0x0004b350) cam6_indi_pane_t1

0x74c8,	// (0x00044a70) cam6_autofocus_pane_g1

0x74d0,	// (0x00044a78) cam6_autofocus_pane_g2

0x74d8,	// (0x00044a80) cam6_autofocus_pane_g3

0x74e0,	// (0x00044a88) cam6_autofocus_pane_g4

0x0003,

0xfb50,	// (0x0004d0f8) cam6_autofocus_pane_g

0xddce,	// (0x0004b376) cam6_timer_pane_g1

0xddd6,	// (0x0004b37e) cam6_timer_pane_t1

0xdde4,	// (0x0004b38c) cam6_zoom_cont_pane

0xddec,	// (0x0004b394) cam6_zoom_pane_g1

0xddf4,	// (0x0004b39c) cam6_zoom_pane_g2

0x8709,	// (0x00045cb1) cam6_zoom_pane_g3

0x0002,

0xfb59,	// (0x0004d101) cam6_zoom_pane_g

0xccfc,	// (0x0004a2a4) cam6_battery_pane_g1

0xccfc,	// (0x0004a2a4) cam6_battery_pane_g2

0x0001,

0xf6c1,	// (0x0004cc69) cam6_battery_pane_g

0xddfc,	// (0x0004b3a4) cam6_zoom_cont_pane_g1

0xde05,	// (0x0004b3ad) cam6_zoom_cont_pane_g2

0xde0e,	// (0x0004b3b6) cam6_zoom_cont_pane_g3

0x0002,

0xfb60,	// (0x0004d108) cam6_zoom_cont_pane_g

0x8726,	// (0x00045cce) cam6_mode_pane_cp_ParamLimits

0x8726,	// (0x00045cce) cam6_mode_pane_cp

0x86c1,	// (0x00045c69) cam6_zoom_pane_cp_ParamLimits

0x86c1,	// (0x00045c69) cam6_zoom_pane_cp

0x873a,	// (0x00045ce2) vid6_image_uncrop_cif_pane_ParamLimits

0x873a,	// (0x00045ce2) vid6_image_uncrop_cif_pane

0x8766,	// (0x00045d0e) vid6_image_uncrop_nhd_pane_ParamLimits

0x8766,	// (0x00045d0e) vid6_image_uncrop_nhd_pane

0x865a,	// (0x00045c02) vid6_image_uncrop_vga_pane_ParamLimits

0x865a,	// (0x00045c02) vid6_image_uncrop_vga_pane

0x8783,	// (0x00045d2b) vid6_image_uncrop_wvga_pane_ParamLimits

0x8783,	// (0x00045d2b) vid6_image_uncrop_wvga_pane

0x87a0,	// (0x00045d48) vid6_indi_pane_ParamLimits

0x87a0,	// (0x00045d48) vid6_indi_pane

0xd8e0,	// (0x0004ae88) bg_tb_trans_pane_cp09_ParamLimits

0xd8e0,	// (0x0004ae88) bg_tb_trans_pane_cp09

0xde26,	// (0x0004b3ce) cam6_battery_pane_cp_ParamLimits

0xde26,	// (0x0004b3ce) cam6_battery_pane_cp

0xde32,	// (0x0004b3da) vid6_indi_pane_g1_ParamLimits

0xde32,	// (0x0004b3da) vid6_indi_pane_g1

0xde44,	// (0x0004b3ec) vid6_indi_pane_g2_ParamLimits

0xde44,	// (0x0004b3ec) vid6_indi_pane_g2

0xde56,	// (0x0004b3fe) vid6_indi_pane_g3_ParamLimits

0xde56,	// (0x0004b3fe) vid6_indi_pane_g3

0xde6b,	// (0x0004b413) vid6_indi_pane_g4_ParamLimits

0xde6b,	// (0x0004b413) vid6_indi_pane_g4

0xde80,	// (0x0004b428) vid6_indi_pane_g5_ParamLimits

0xde80,	// (0x0004b428) vid6_indi_pane_g5

0x0004,

0xfb67,	// (0x0004d10f) vid6_indi_pane_g_ParamLimits

0xfb67,	// (0x0004d10f) vid6_indi_pane_g

0xde9a,	// (0x0004b442) vid6_indi_pane_t1_ParamLimits

0xde9a,	// (0x0004b442) vid6_indi_pane_t1

0xdeb0,	// (0x0004b458) vid6_indi_pane_t2_ParamLimits

0xdeb0,	// (0x0004b458) vid6_indi_pane_t2

0xded8,	// (0x0004b480) vid6_indi_pane_t3_ParamLimits

0xded8,	// (0x0004b480) vid6_indi_pane_t3

0xdf00,	// (0x0004b4a8) vid6_indi_pane_t4_ParamLimits

0xdf00,	// (0x0004b4a8) vid6_indi_pane_t4

0x0003,

0xfb72,	// (0x0004d11a) vid6_indi_pane_t_ParamLimits

0xfb72,	// (0x0004d11a) vid6_indi_pane_t

0xdf24,	// (0x0004b4cc) wait_bar_pane_cp08

0x87c5,	// (0x00045d6d) main_cset_text2_pane_t1_ParamLimits

0x87c5,	// (0x00045d6d) main_cset_text2_pane_t1

0x8711,	// (0x00045cb9) listscroll_gen_pane_cp06_t1_ParamLimits

0x8711,	// (0x00045cb9) listscroll_gen_pane_cp06_t1

0xa143,	// (0x000476eb) main_cam6_set_pane

0xcf6b,	// (0x0004a513) bg_tb_trans_pane_cp06_ParamLimits

0x7378,	// (0x00044920) cam4_indicators_pane_g1_ParamLimits

0x7389,	// (0x00044931) cam4_indicators_pane_g2_ParamLimits

0xf8e0,	// (0x0004ce88) cam4_indicators_pane_g_ParamLimits

0x73a7,	// (0x0004494f) cam4_indicators_pane_t1_ParamLimits

0xb494,	// (0x00048a3c) bg_tb_trans_pane_cp07_ParamLimits

0x745a,	// (0x00044a02) vid4_indicators_pane_g1_ParamLimits

0x746e,	// (0x00044a16) vid4_indicators_pane_g2_ParamLimits

0x7482,	// (0x00044a2a) vid4_indicators_pane_g3_ParamLimits

0x7493,	// (0x00044a3b) vid4_indicators_pane_g4_ParamLimits

0xf8f2,	// (0x0004ce9a) vid4_indicators_pane_g_ParamLimits

0x74b1,	// (0x00044a59) vid4_indicators_pane_t1_ParamLimits

0x82b6,	// (0x0004585e) vid4_progress_pane_g1_ParamLimits

0x82c6,	// (0x0004586e) vid4_progress_pane_g2_ParamLimits

0x82d6,	// (0x0004587e) vid4_progress_pane_g3_ParamLimits

0x82e8,	// (0x00045890) vid4_progress_pane_g4_ParamLimits

0xfaa3,	// (0x0004d04b) vid4_progress_pane_g_ParamLimits

0x8300,	// (0x000458a8) vid4_progress_pane_t1_ParamLimits

0x8316,	// (0x000458be) vid4_progress_pane_t2_ParamLimits

0x832b,	// (0x000458d3) vid4_progress_pane_t3_ParamLimits

0xfaae,	// (0x0004d056) vid4_progress_pane_t_ParamLimits

0x8340,	// (0x000458e8) wait_bar_pane_cp07_ParamLimits

0x87f8,	// (0x00045da0) main_cam6_set_pane_g2_ParamLimits

0x87f8,	// (0x00045da0) main_cam6_set_pane_g2

0x8804,	// (0x00045dac) main_cset6_listscroll_pane_ParamLimits

0x8804,	// (0x00045dac) main_cset6_listscroll_pane

0x882f,	// (0x00045dd7) main_cset6_slider_pane_ParamLimits

0x882f,	// (0x00045dd7) main_cset6_slider_pane

0x883b,	// (0x00045de3) main_cset6_text2_pane_ParamLimits

0x883b,	// (0x00045de3) main_cset6_text2_pane

0xdf33,	// (0x0004b4db) main_cset6_text_pane

0xdf3b,	// (0x0004b4e3) main_cset_list_pane_copy1_ParamLimits

0xdf3b,	// (0x0004b4e3) main_cset_list_pane_copy1

0xdf4b,	// (0x0004b4f3) scroll_pane_cp028_copy1

0x884e,	// (0x00045df6) cset_list_set_pane_copy1

0x8861,	// (0x00045e09) aid_position_infowindow_above_copy1

0x8869,	// (0x00045e11) aid_position_infowindow_below_copy1

0x14a5,	// (0x0003ea4d) cset_list_set_pane_g1_copy1

0x11e2,	// (0x0003e78a) cset_list_set_pane_g3_copy1_ParamLimits

0x11e2,	// (0x0003e78a) cset_list_set_pane_g3_copy1

0x11f1,	// (0x0003e799) cset_list_set_pane_t1_copy1_ParamLimits

0x11f1,	// (0x0003e799) cset_list_set_pane_t1_copy1

0xb494,	// (0x00048a3c) list_highlight_pane_cp021_copy1_ParamLimits

0xb494,	// (0x00048a3c) list_highlight_pane_cp021_copy1

0xdf54,	// (0x0004b4fc) cset6_slider_pane_ParamLimits

0xdf54,	// (0x0004b4fc) cset6_slider_pane

0xdf80,	// (0x0004b528) main_cset6_slider_pane_g1_ParamLimits

0xdf80,	// (0x0004b528) main_cset6_slider_pane_g1

0x8871,	// (0x00045e19) main_cset6_slider_pane_g2_ParamLimits

0x8871,	// (0x00045e19) main_cset6_slider_pane_g2

0xdfa8,	// (0x0004b550) main_cset6_slider_pane_g3_ParamLimits

0xdfa8,	// (0x0004b550) main_cset6_slider_pane_g3

0x8899,	// (0x00045e41) main_cset6_slider_pane_g4_ParamLimits

0x8899,	// (0x00045e41) main_cset6_slider_pane_g4

0x88a5,	// (0x00045e4d) main_cset6_slider_pane_g5_ParamLimits

0x88a5,	// (0x00045e4d) main_cset6_slider_pane_g5

0xd80e,	// (0x0004adb6) main_cset6_slider_pane_g7_ParamLimits

0xd80e,	// (0x0004adb6) main_cset6_slider_pane_g7

0xd81a,	// (0x0004adc2) main_cset6_slider_pane_g8_ParamLimits

0xd81a,	// (0x0004adc2) main_cset6_slider_pane_g8

0x88b3,	// (0x00045e5b) main_cset6_slider_pane_g9_ParamLimits

0x88b3,	// (0x00045e5b) main_cset6_slider_pane_g9

0x88bf,	// (0x00045e67) main_cset6_slider_pane_g10_ParamLimits

0x88bf,	// (0x00045e67) main_cset6_slider_pane_g10

0x88cb,	// (0x00045e73) main_cset6_slider_pane_g11_ParamLimits

0x88cb,	// (0x00045e73) main_cset6_slider_pane_g11

0x88d7,	// (0x00045e7f) main_cset6_slider_pane_g12_ParamLimits

0x88d7,	// (0x00045e7f) main_cset6_slider_pane_g12

0x88e3,	// (0x00045e8b) main_cset6_slider_pane_g13_ParamLimits

0x88e3,	// (0x00045e8b) main_cset6_slider_pane_g13

0x88ef,	// (0x00045e97) main_cset6_slider_pane_g14_ParamLimits

0x88ef,	// (0x00045e97) main_cset6_slider_pane_g14

0x88fb,	// (0x00045ea3) main_cset6_slider_pane_g15_ParamLimits

0x88fb,	// (0x00045ea3) main_cset6_slider_pane_g15

0x8913,	// (0x00045ebb) main_cset6_slider_pane_g16_ParamLimits

0x8913,	// (0x00045ebb) main_cset6_slider_pane_g16

0x8921,	// (0x00045ec9) main_cset6_slider_pane_g17_ParamLimits

0x8921,	// (0x00045ec9) main_cset6_slider_pane_g17

0x0011,

0xfb7b,	// (0x0004d123) main_cset6_slider_pane_g_ParamLimits

0xfb7b,	// (0x0004d123) main_cset6_slider_pane_g

0xdfb4,	// (0x0004b55c) main_cset6_slider_pane_t1_ParamLimits

0xdfb4,	// (0x0004b55c) main_cset6_slider_pane_t1

0x8947,	// (0x00045eef) main_cset6_slider_pane_t2_ParamLimits

0x8947,	// (0x00045eef) main_cset6_slider_pane_t2

0x8972,	// (0x00045f1a) main_cset6_slider_pane_t3_ParamLimits

0x8972,	// (0x00045f1a) main_cset6_slider_pane_t3

0x899d,	// (0x00045f45) main_cset6_slider_pane_t4_ParamLimits

0x899d,	// (0x00045f45) main_cset6_slider_pane_t4

0x89c8,	// (0x00045f70) main_cset6_slider_pane_t5_ParamLimits

0x89c8,	// (0x00045f70) main_cset6_slider_pane_t5

0xdff5,	// (0x0004b59d) main_cset6_slider_pane_t7_ParamLimits

0xdff5,	// (0x0004b59d) main_cset6_slider_pane_t7

0x89f5,	// (0x00045f9d) main_cset6_slider_pane_t8_ParamLimits

0x89f5,	// (0x00045f9d) main_cset6_slider_pane_t8

0x8a19,	// (0x00045fc1) main_cset6_slider_pane_t9_ParamLimits

0x8a19,	// (0x00045fc1) main_cset6_slider_pane_t9

0x8a3d,	// (0x00045fe5) main_cset6_slider_pane_t10_ParamLimits

0x8a3d,	// (0x00045fe5) main_cset6_slider_pane_t10

0x8a61,	// (0x00046009) main_cset6_slider_pane_t11_ParamLimits

0x8a61,	// (0x00046009) main_cset6_slider_pane_t11

0xe02b,	// (0x0004b5d3) main_cset6_slider_pane_t14_ParamLimits

0xe02b,	// (0x0004b5d3) main_cset6_slider_pane_t14

0xe064,	// (0x0004b60c) main_cset6_slider_pane_t15_ParamLimits

0xe064,	// (0x0004b60c) main_cset6_slider_pane_t15

0x000b,

0xfba0,	// (0x0004d148) main_cset6_slider_pane_t_ParamLimits

0xfba0,	// (0x0004d148) main_cset6_slider_pane_t

0xd8ee,	// (0x0004ae96) cset_slider_pane_g1_copy1

0xd8f7,	// (0x0004ae9f) cset_slider_pane_g2_copy1

0xd900,	// (0x0004aea8) cset_slider_pane_g3_copy1

0xa143,	// (0x000476eb) bg_popup_sub_pane_cp011_copy1

0xe09d,	// (0x0004b645) main_cset_text_pane_g1_copy1

0xd989,	// (0x0004af31) main_cset_text_pane_t1_copy1

0xd997,	// (0x0004af3f) main_cset_text_pane_t2_copy1

0xd9a5,	// (0x0004af4d) main_cset_text_pane_t3_copy1

0xd9b3,	// (0x0004af5b) main_cset_text_pane_t4_copy1

0xd9c1,	// (0x0004af69) main_cset_text_pane_t5_copy1

0xe0a5,	// (0x0004b64d) main_cset_text_pane_t6_copy1

0xe0b3,	// (0x0004b65b) main_cset_text_pane_t7_copy1

0x8a85,	// (0x0004602d) main_cset_text2_pane_t1_copy1

0xb494,	// (0x00048a3c) main_ncimui_pane

0x532d,	// (0x000428d5) popup_query_ncimui_window_ParamLimits

0x532d,	// (0x000428d5) popup_query_ncimui_window

0x1087,	// (0x0003e62f) field_cale_ev2_pane_g4_ParamLimits

0x1087,	// (0x0003e62f) field_cale_ev2_pane_g4

0x6c06,	// (0x000441ae) cell_video_dialer_keypad_pane_g2_ParamLimits

0x6c06,	// (0x000441ae) cell_video_dialer_keypad_pane_g2

0x0001,

0xf87a,	// (0x0004ce22) cell_video_dialer_keypad_pane_g_ParamLimits

0xf87a,	// (0x0004ce22) cell_video_dialer_keypad_pane_g

0x6c1e,	// (0x000441c6) cell_video_dialer_keypad_pane_t1

0xa143,	// (0x000476eb) bg_popup_window_pane_cp012

0xb168,	// (0x00048710) heading_pane_cp06

0xe0df,	// (0x0004b687) ncim_query_content_pane

0xa143,	// (0x000476eb) bg_popup_heading_pane_cp01

0xe0e7,	// (0x0004b68f) ncim_heading_pane_t1

0xe0f5,	// (0x0004b69d) ncim_indicator_popup_pane

0xe107,	// (0x0004b6af) ncim_query_button_pane

0xe11b,	// (0x0004b6c3) ncim_query_content_pane_t1

0xe12d,	// (0x0004b6d5) ncim_query_content_pane_t2

0x0005,

0xfbe4,	// (0x0004d18c) ncim_query_content_pane_t

0xe167,	// (0x0004b70f) ncim_query_list_pane

0xe179,	// (0x0004b721) ncim_query_popup_pane

0xe0f5,	// (0x0004b69d) ncim_indicator_popup_pane_ParamLimits

0x8bd8,	// (0x00046180) ncim_query_content_pane_g1_ParamLimits

0x8bd8,	// (0x00046180) ncim_query_content_pane_g1

0xe11b,	// (0x0004b6c3) ncim_query_content_pane_t1_ParamLimits

0xe12d,	// (0x0004b6d5) ncim_query_content_pane_t2_ParamLimits

0x8be4,	// (0x0004618c) ncim_query_content_pane_t3_ParamLimits

0x8be4,	// (0x0004618c) ncim_query_content_pane_t3

0x8c01,	// (0x000461a9) ncim_query_content_pane_t4_ParamLimits

0x8c01,	// (0x000461a9) ncim_query_content_pane_t4

0x8c1e,	// (0x000461c6) ncim_query_content_pane_t5_ParamLimits

0x8c1e,	// (0x000461c6) ncim_query_content_pane_t5

0xe13f,	// (0x0004b6e7) ncim_query_content_pane_t6_ParamLimits

0xe13f,	// (0x0004b6e7) ncim_query_content_pane_t6

0xfbe4,	// (0x0004d18c) ncim_query_content_pane_t_ParamLimits

0xe167,	// (0x0004b70f) ncim_query_list_pane_ParamLimits

0xe179,	// (0x0004b721) ncim_query_popup_pane_ParamLimits

0xe18d,	// (0x0004b735) wait_bar_pane_cp04

0xa143,	// (0x000476eb) input_focus_pane_cp011

0xe195,	// (0x0004b73d) ncim_query_popup_pane_t1

0xe1a3,	// (0x0004b74b) ncim_list_query_list_pane_ParamLimits

0xe1a3,	// (0x0004b74b) ncim_list_query_list_pane

0xa143,	// (0x000476eb) bg_button_pane_cp027

0xe1b0,	// (0x0004b758) ncim_query_button_pane_g1

0xa143,	// (0x000476eb) list_highlight_pane_cp012

0xe1ba,	// (0x0004b762) ncim_list_query_list_pane_g1

0xe1c2,	// (0x0004b76a) ncim_list_query_list_pane_t1

0x7398,	// (0x00044940) cam4_indicators_pane_g3_ParamLimits

0x7398,	// (0x00044940) cam4_indicators_pane_g3

0x749f,	// (0x00044a47) vid4_indicators_pane_g5_ParamLimits

0x749f,	// (0x00044a47) vid4_indicators_pane_g5

0x82f4,	// (0x0004589c) vid4_progress_pane_g5_ParamLimits

0x82f4,	// (0x0004589c) vid4_progress_pane_g5

0x8ac4,	// (0x0004606c) main_ncimui_pane_g1

0x8b2c,	// (0x000460d4) ncimui_group_query_pane_ParamLimits

0x8b2c,	// (0x000460d4) ncimui_group_query_pane

0x8b74,	// (0x0004611c) ncimui_list_pane_ParamLimits

0x8b74,	// (0x0004611c) ncimui_list_pane

0x8b9b,	// (0x00046143) ncimui_text_pane_ParamLimits

0x8b9b,	// (0x00046143) ncimui_text_pane

0x8c3b,	// (0x000461e3) ncimui_text_pane_t1_ParamLimits

0x8c3b,	// (0x000461e3) ncimui_text_pane_t1

0xe1d0,	// (0x0004b778) ncimui_list_single_graphic_pane_ParamLimits

0xe1d0,	// (0x0004b778) ncimui_list_single_graphic_pane

0x8c5a,	// (0x00046202) ncimui_query_pane_ParamLimits

0x8c5a,	// (0x00046202) ncimui_query_pane

0xa143,	// (0x000476eb) list_highlight_pane_cp013

0xe1e0,	// (0x0004b788) ncim_list_query_list_pane_t1_copy1

0xe1ba,	// (0x0004b762) ncim_list_single_graphic_pane_g1

0x8c6d,	// (0x00046215) ncim_query_button_pane_cp01

0x8c79,	// (0x00046221) ncim_query_entry_pane_ParamLimits

0x8c79,	// (0x00046221) ncim_query_entry_pane

0x8c8c,	// (0x00046234) ncimui_query_pane_g1

0x8c98,	// (0x00046240) ncimui_query_pane_t1_ParamLimits

0x8c98,	// (0x00046240) ncimui_query_pane_t1

0xb494,	// (0x00048a3c) input_focus_pane_cp012

0xe1ee,	// (0x0004b796) ncim_query_entry_pane_t1

0xa8b4,	// (0x00047e5c) main_im_pane_ParamLimits

0xb494,	// (0x00048a3c) main_mobtv_pane_ParamLimits

0xb494,	// (0x00048a3c) main_mobtv_pane

0x892f,	// (0x00045ed7) main_cset6_slider_pane_g18_ParamLimits

0x892f,	// (0x00045ed7) main_cset6_slider_pane_g18

0x893b,	// (0x00045ee3) main_cset6_slider_pane_g19_ParamLimits

0x893b,	// (0x00045ee3) main_cset6_slider_pane_g19

0xd6bf,	// (0x0004ac67) bg_main_mobtv_pane_ParamLimits

0xd6bf,	// (0x0004ac67) bg_main_mobtv_pane

0x8cb1,	// (0x00046259) main_mobtv_info_pane

0x8cbc,	// (0x00046264) main_mobtv_loading_pane_ParamLimits

0x8cbc,	// (0x00046264) main_mobtv_loading_pane

0xe200,	// (0x0004b7a8) main_mobtv_pg_channel_list_pane

0xe20a,	// (0x0004b7b2) main_mobtv_pg_hdr_pane

0x8cc9,	// (0x00046271) main_mobtv_programe_curr_pane_ParamLimits

0x8cc9,	// (0x00046271) main_mobtv_programe_curr_pane

0x8cd6,	// (0x0004627e) main_mobtv_programe_next_pane_ParamLimits

0x8cd6,	// (0x0004627e) main_mobtv_programe_next_pane

0xe213,	// (0x0004b7bb) popup_mobtv_noti_window

0xccfc,	// (0x0004a2a4) main_tv_pg_hdr_pane_g1

0xe21b,	// (0x0004b7c3) main_tv_pg_hdr_pane_g2

0xe223,	// (0x0004b7cb) main_tv_pg_hdr_pane_g3

0xe22b,	// (0x0004b7d3) main_tv_pg_hdr_pane_g4

0xe233,	// (0x0004b7db) main_tv_pg_hdr_pane_g5

0xe23d,	// (0x0004b7e5) main_tv_pg_hdr_pane_g6

0xe247,	// (0x0004b7ef) main_tv_pg_hdr_pane_g7

0xe251,	// (0x0004b7f9) main_tv_pg_hdr_pane_g8

0xe25b,	// (0x0004b803) main_tv_pg_hdr_pane_g9

0xe265,	// (0x0004b80d) main_tv_pg_hdr_pane_g10

0xe26f,	// (0x0004b817) main_tv_pg_hdr_pane_g11

0x000a,

0xfbf1,	// (0x0004d199) main_tv_pg_hdr_pane_g

0xe279,	// (0x0004b821) main_tv_pg_hdr_pane_t1

0xe287,	// (0x0004b82f) main_tv_pg_hdr_pane_t2

0xe295,	// (0x0004b83d) main_tv_pg_hdr_pane_t3

0xe2a5,	// (0x0004b84d) main_tv_pg_hdr_pane_t4

0xe2b5,	// (0x0004b85d) main_tv_pg_hdr_pane_t5

0x0004,

0xfc08,	// (0x0004d1b0) main_tv_pg_hdr_pane_t

0xe2c5,	// (0x0004b86d) single_mobtv_pg_channel_pane_ParamLimits

0xe2c5,	// (0x0004b86d) single_mobtv_pg_channel_pane

0xe2d7,	// (0x0004b87f) single_mobtv_pg_channel_table_pane

0xe2e0,	// (0x0004b888) single_mobtv_pg_channel_thumb_pane

0xe2e9,	// (0x0004b891) single_tv_pg_channel_pane_g1

0xe2f2,	// (0x0004b89a) single_tv_pg_channel_pane_g2

0x0001,

0xfc13,	// (0x0004d1bb) single_tv_pg_channel_pane_g

0xcf6b,	// (0x0004a513) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xcf6b,	// (0x0004a513) bg_single_mobtv_pg_channel_thumb_pane

0xe2fb,	// (0x0004b8a3) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe2fb,	// (0x0004b8a3) single_mobtv_pg_channel_thumb_pane_g1

0xe309,	// (0x0004b8b1) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe309,	// (0x0004b8b1) single_mobtv_pg_channel_thumb_pane_g2

0xe315,	// (0x0004b8bd) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe315,	// (0x0004b8bd) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc18,	// (0x0004d1c0) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc18,	// (0x0004d1c0) single_mobtv_pg_channel_thumb_pane_g

0xe321,	// (0x0004b8c9) single_mobtv_pg_channel_thumb_pane_t1

0xe32f,	// (0x0004b8d7) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc1f,	// (0x0004d1c7) single_mobtv_pg_channel_thumb_pane_t

0xccfc,	// (0x0004a2a4) bg_single_mobtv_pg_channel_table_pane_g1

0xccfc,	// (0x0004a2a4) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6c1,	// (0x0004cc69) bg_single_mobtv_pg_channel_table_pane_g

0xe33d,	// (0x0004b8e5) single_mobtv_pg_channel_table_pane_t1

0xe34b,	// (0x0004b8f3) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc24,	// (0x0004d1cc) single_mobtv_pg_channel_table_pane_t

0x8ceb,	// (0x00046293) main_mobtv_info_pane_g1_ParamLimits

0x8ceb,	// (0x00046293) main_mobtv_info_pane_g1

0x8d07,	// (0x000462af) main_mobtv_info_pane_t1_ParamLimits

0x8d07,	// (0x000462af) main_mobtv_info_pane_t1

0x8d7f,	// (0x00046327) main_mobtv_info_pane_t2_ParamLimits

0x8d7f,	// (0x00046327) main_mobtv_info_pane_t2

0x0002,

0xfc2e,	// (0x0004d1d6) main_mobtv_info_pane_t_ParamLimits

0xfc2e,	// (0x0004d1d6) main_mobtv_info_pane_t

0x8e0e,	// (0x000463b6) wait_bar_pane_cp05

0x8e20,	// (0x000463c8) main_mobtv_loading_pane_g1_ParamLimits

0x8e20,	// (0x000463c8) main_mobtv_loading_pane_g1

0x8e2e,	// (0x000463d6) main_mobtv_loading_pane_g2_ParamLimits

0x8e2e,	// (0x000463d6) main_mobtv_loading_pane_g2

0x8e3a,	// (0x000463e2) main_mobtv_loading_pane_g3_ParamLimits

0x8e3a,	// (0x000463e2) main_mobtv_loading_pane_g3

0x0002,

0xfc35,	// (0x0004d1dd) main_mobtv_loading_pane_g_ParamLimits

0xfc35,	// (0x0004d1dd) main_mobtv_loading_pane_g

0xe359,	// (0x0004b901) main_mobtv_loading_pane_t1_ParamLimits

0xe359,	// (0x0004b901) main_mobtv_loading_pane_t1

0xe371,	// (0x0004b919) main_mobtv_loading_pane_t2_ParamLimits

0xe371,	// (0x0004b919) main_mobtv_loading_pane_t2

0x0001,

0xfc3c,	// (0x0004d1e4) main_mobtv_loading_pane_t_ParamLimits

0xfc3c,	// (0x0004d1e4) main_mobtv_loading_pane_t

0x8e48,	// (0x000463f0) wait_bar_pane_cp06_ParamLimits

0x8e48,	// (0x000463f0) wait_bar_pane_cp06

0xe395,	// (0x0004b93d) main_mobtv_programe_curr_pane_t1

0xe3a3,	// (0x0004b94b) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc41,	// (0x0004d1e9) main_mobtv_programe_curr_pane_t

0xe3b1,	// (0x0004b959) main_mobtv_programe_next_pane_t1

0xe3bf,	// (0x0004b967) main_mobtv_programe_next_pane_t2

0xe3cd,	// (0x0004b975) main_mobtv_programe_next_pane_t3

0x0002,

0xfc46,	// (0x0004d1ee) main_mobtv_programe_next_pane_t

0xa143,	// (0x000476eb) bg_popup_mobtv_noti_window_pane

0xe3db,	// (0x0004b983) popup_mobtv_noti_window_g1

0xe3e3,	// (0x0004b98b) popup_mobtv_noti_window_t1

0xe3f1,	// (0x0004b999) popup_mobtv_noti_window_t2

0x0001,

0xfc4d,	// (0x0004d1f5) popup_mobtv_noti_window_t

0xccfc,	// (0x0004a2a4) bg_popup_mobtv_noti_window_pane_g1

0xa143,	// (0x000476eb) sc_clock_pane

0xa143,	// (0x000476eb) main_fs_bigclock_pane

0x84eb,	// (0x00045a93) blid2_tripm_pane_t4_ParamLimits

0x84eb,	// (0x00045a93) blid2_tripm_pane_t4

0x8e54,	// (0x000463fc) sc_clock_pane_g1_ParamLimits

0x8e54,	// (0x000463fc) sc_clock_pane_g1

0x8e62,	// (0x0004640a) sc_clock_pane_t1_ParamLimits

0x8e62,	// (0x0004640a) sc_clock_pane_t1

0x8e75,	// (0x0004641d) sc_clock_pane_t2_ParamLimits

0x8e75,	// (0x0004641d) sc_clock_pane_t2

0x8e87,	// (0x0004642f) sc_clock_pane_t3_ParamLimits

0x8e87,	// (0x0004642f) sc_clock_pane_t3

0x0004,

0xfc52,	// (0x0004d1fa) sc_clock_pane_t_ParamLimits

0xfc52,	// (0x0004d1fa) sc_clock_pane_t

0x9766,	// (0x00046d0e) main_fs_bigclock_indicator_pane_ParamLimits

0x9766,	// (0x00046d0e) main_fs_bigclock_indicator_pane

0x8f0a,	// (0x000464b2) main_fs_bigclock_pane_g1_ParamLimits

0x8f0a,	// (0x000464b2) main_fs_bigclock_pane_g1

0x9772,	// (0x00046d1a) main_fs_bigclock_pane_t1_ParamLimits

0x9772,	// (0x00046d1a) main_fs_bigclock_pane_t1

0x9784,	// (0x00046d2c) main_fs_bigclock_pane_t2_ParamLimits

0x9784,	// (0x00046d2c) main_fs_bigclock_pane_t2

0x9798,	// (0x00046d40) main_fs_bigclock_pane_t3_ParamLimits

0x9798,	// (0x00046d40) main_fs_bigclock_pane_t3

0x0002,

0xfe60,	// (0x0004d408) main_fs_bigclock_pane_t_ParamLimits

0xfe60,	// (0x0004d408) main_fs_bigclock_pane_t

0xec46,	// (0x0004c1ee) main_fs_bigclock_indicator_pane_g1

0xe10f,	// (0x0004b6b7) ncim_query_content_pane_g2_ParamLimits

0xe10f,	// (0x0004b6b7) ncim_query_content_pane_g2

0x0001,

0xfbdf,	// (0x0004d187) ncim_query_content_pane_g_ParamLimits

0xfbdf,	// (0x0004d187) ncim_query_content_pane_g

0x8e9b,	// (0x00046443) sc_clock_pane_t4_ParamLimits

0x8e9b,	// (0x00046443) sc_clock_pane_t4

0xb494,	// (0x00048a3c) main_radioblah_pane

0x723b,	// (0x000447e3) cell_call4_button_pane_t1_copy1_ParamLimits

0x723b,	// (0x000447e3) cell_call4_button_pane_t1_copy1

0x8ade,	// (0x00046086) main_ncimui_pane_t1_ParamLimits

0x8ade,	// (0x00046086) main_ncimui_pane_t1

0x8af8,	// (0x000460a0) main_ncimui_pane_t2_ParamLimits

0x8af8,	// (0x000460a0) main_ncimui_pane_t2

0x0002,

0xfbd8,	// (0x0004d180) main_ncimui_pane_t_ParamLimits

0xfbd8,	// (0x0004d180) main_ncimui_pane_t

0xe536,	// (0x0004bade) main_radioblah_anim_pane_ParamLimits

0xe536,	// (0x0004bade) main_radioblah_anim_pane

0xe547,	// (0x0004baef) main_radioblah_info_pane_ParamLimits

0xe547,	// (0x0004baef) main_radioblah_info_pane

0xe55b,	// (0x0004bb03) main_radioblah_pane_t1_ParamLimits

0xe55b,	// (0x0004bb03) main_radioblah_pane_t1

0xe577,	// (0x0004bb1f) main_radioblah_pane_t2_ParamLimits

0xe577,	// (0x0004bb1f) main_radioblah_pane_t2

0x0003,

0xfc73,	// (0x0004d21b) main_radioblah_pane_t_ParamLimits

0xfc73,	// (0x0004d21b) main_radioblah_pane_t

0x8f60,	// (0x00046508) main_radioblah_rocker_ctrl_pane_ParamLimits

0x8f60,	// (0x00046508) main_radioblah_rocker_ctrl_pane

0xe5bf,	// (0x0004bb67) main_radioblah_info_pane_t1_ParamLimits

0xe5bf,	// (0x0004bb67) main_radioblah_info_pane_t1

0x8fa5,	// (0x0004654d) main_radioblah_info_pane_t2_ParamLimits

0x8fa5,	// (0x0004654d) main_radioblah_info_pane_t2

0x0003,

0xfc7c,	// (0x0004d224) main_radioblah_info_pane_t_ParamLimits

0xfc7c,	// (0x0004d224) main_radioblah_info_pane_t

0xccfc,	// (0x0004a2a4) main_radioblah_rocker_ctrl_pane_g1

0x9055,	// (0x000465fd) main_radioblah_rocker_ctrl_pane_g2

0x905d,	// (0x00046605) main_radioblah_rocker_ctrl_pane_g3

0x9065,	// (0x0004660d) main_radioblah_rocker_ctrl_pane_g4

0x906d,	// (0x00046615) main_radioblah_rocker_ctrl_pane_g5

0x9075,	// (0x0004661d) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc85,	// (0x0004d22d) main_radioblah_rocker_ctrl_pane_g

0x8a85,	// (0x0004602d) main_cset_text2_pane_t1_copy1_ParamLimits

0x72c6,	// (0x0004486e) cam4_image_uncrop_qvga_pane

0x740d,	// (0x000449b5) vid4_image_uncrop_qcif_pane

0x8679,	// (0x00045c21) cam6_image_uncrop_qvga_pane_ParamLimits

0x8679,	// (0x00045c21) cam6_image_uncrop_qvga_pane

0xde16,	// (0x0004b3be) vid6_image_uncrop_qcif_pane_ParamLimits

0xde16,	// (0x0004b3be) vid6_image_uncrop_qcif_pane

0xa143,	// (0x000476eb) bg_popup_preview_window_pane_cp03

0xe0c1,	// (0x0004b669) list_cset_text2_pane

0xe0c9,	// (0x0004b671) main_cset6_text2_pane_g1

0xe0d1,	// (0x0004b679) main_cset6_text2_pane_t1

0x907d,	// (0x00046625) list_cset_text2_pane_t1_ParamLimits

0x907d,	// (0x00046625) list_cset_text2_pane_t1

0xb494,	// (0x00048a3c) main_radioblah_pane_ParamLimits

0x8dfa,	// (0x000463a2) main_mobtv_info_pane_t3_ParamLimits

0x8dfa,	// (0x000463a2) main_mobtv_info_pane_t3

0x8f4e,	// (0x000464f6) main_radioblah_pane_g1

0x8f79,	// (0x00046521) main_radioblah_info_pane_g1

0x8ffa,	// (0x000465a2) main_radioblah_info_pane_t3_ParamLimits

0x8ffa,	// (0x000465a2) main_radioblah_info_pane_t3

0x418a,	// (0x00041732) highlight_cell_cale_month_pane_ParamLimits

0x418a,	// (0x00041732) highlight_cell_cale_month_pane

0xa143,	// (0x000476eb) main_phob_fisheye_pane

0xd067,	// (0x0004a60f) scroll_pane_cp0031_ParamLimits

0xd067,	// (0x0004a60f) scroll_pane_cp0031

0xdf24,	// (0x0004b4cc) wait_bar_pane_cp08_ParamLimits

0x884e,	// (0x00045df6) cset_list_set_pane_copy1_ParamLimits

0xe5f9,	// (0x0004bba1) highlight_cell_cale_month_pane_g1

0x909a,	// (0x00046642) highlight_cell_cale_month_pane_t1

0xdba9,	// (0x0004b151) list_gen_pane_cp01

0xd7f9,	// (0x0004ada1) scroll_pane_01

0x90a8,	// (0x00046650) list_single_double_fisheye_pane

0x1585,	// (0x0003eb2d) list_double_fisheye_pane_g1_ParamLimits

0x1585,	// (0x0003eb2d) list_double_fisheye_pane_g1

0x1591,	// (0x0003eb39) list_double_fisheye_pane_g2_ParamLimits

0x1591,	// (0x0003eb39) list_double_fisheye_pane_g2

0x90b1,	// (0x00046659) list_double_fisheye_pane_g3_ParamLimits

0x90b1,	// (0x00046659) list_double_fisheye_pane_g3

0x0004,

0xfc92,	// (0x0004d23a) list_double_fisheye_pane_g_ParamLimits

0xfc92,	// (0x0004d23a) list_double_fisheye_pane_g

0x15c2,	// (0x0003eb6a) list_double_fisheye_pane_t1_ParamLimits

0x15c2,	// (0x0003eb6a) list_double_fisheye_pane_t1

0x15dd,	// (0x0003eb85) list_double_fisheye_pane_t2_ParamLimits

0x15dd,	// (0x0003eb85) list_double_fisheye_pane_t2

0x0001,

0xfc9d,	// (0x0004d245) list_double_fisheye_pane_t_ParamLimits

0xfc9d,	// (0x0004d245) list_double_fisheye_pane_t

0xa143,	// (0x000476eb) main_call5_pane

0x8ec1,	// (0x00046469) sc_swipe_pane_ParamLimits

0x8ec1,	// (0x00046469) sc_swipe_pane

0x90c9,	// (0x00046671) call5_image_pane_ParamLimits

0x90c9,	// (0x00046671) call5_image_pane

0x90d9,	// (0x00046681) call5_swipe_1_pane_ParamLimits

0x90d9,	// (0x00046681) call5_swipe_1_pane

0x90e5,	// (0x0004668d) call5_swipe_2_pane_ParamLimits

0x90e5,	// (0x0004668d) call5_swipe_2_pane

0x90ff,	// (0x000466a7) popup_call5_audio_first_window_ParamLimits

0x90ff,	// (0x000466a7) popup_call5_audio_first_window

0xcf6b,	// (0x0004a513) call5_swipe_1_pane_g1_ParamLimits

0xcf6b,	// (0x0004a513) call5_swipe_1_pane_g1

0xe601,	// (0x0004bba9) call5_swipe_1_pane_g2_ParamLimits

0xe601,	// (0x0004bba9) call5_swipe_1_pane_g2

0x0001,

0xfca2,	// (0x0004d24a) call5_swipe_1_pane_g_ParamLimits

0xfca2,	// (0x0004d24a) call5_swipe_1_pane_g

0xe60d,	// (0x0004bbb5) call5_swipe_1_pane_t1_ParamLimits

0xe60d,	// (0x0004bbb5) call5_swipe_1_pane_t1

0xcf6b,	// (0x0004a513) call5_swipe_2_pane_g1_ParamLimits

0xcf6b,	// (0x0004a513) call5_swipe_2_pane_g1

0xe622,	// (0x0004bbca) call5_swipe_2_pane_g2_ParamLimits

0xe622,	// (0x0004bbca) call5_swipe_2_pane_g2

0x0001,

0xfca7,	// (0x0004d24f) call5_swipe_2_pane_g_ParamLimits

0xfca7,	// (0x0004d24f) call5_swipe_2_pane_g

0xe62e,	// (0x0004bbd6) call5_swipe_2_pane_t1_ParamLimits

0xe62e,	// (0x0004bbd6) call5_swipe_2_pane_t1

0xe643,	// (0x0004bbeb) sc_swipe_pane_g1_ParamLimits

0xe643,	// (0x0004bbeb) sc_swipe_pane_g1

0xe650,	// (0x0004bbf8) sc_swipe_pane_g2_ParamLimits

0xe650,	// (0x0004bbf8) sc_swipe_pane_g2

0x0001,

0xfcac,	// (0x0004d254) sc_swipe_pane_g_ParamLimits

0xfcac,	// (0x0004d254) sc_swipe_pane_g

0xe65c,	// (0x0004bc04) sc_swipe_pane_t1_ParamLimits

0xe65c,	// (0x0004bc04) sc_swipe_pane_t1

0xa143,	// (0x000476eb) main_cmail_launcher_pane

0x910d,	// (0x000466b5) aid_size_cell_cmail_l_ParamLimits

0x910d,	// (0x000466b5) aid_size_cell_cmail_l

0x911b,	// (0x000466c3) grid_cmail_l_pane_ParamLimits

0x911b,	// (0x000466c3) grid_cmail_l_pane

0x912b,	// (0x000466d3) cell_cmail_l_pane_ParamLimits

0x912b,	// (0x000466d3) cell_cmail_l_pane

0xe671,	// (0x0004bc19) cell_cmail_l_pane_g1_ParamLimits

0xe671,	// (0x0004bc19) cell_cmail_l_pane_g1

0xe67d,	// (0x0004bc25) cell_cmail_l_pane_t1_ParamLimits

0xe67d,	// (0x0004bc25) cell_cmail_l_pane_t1

0xe693,	// (0x0004bc3b) cell_cmail_l_pane_t2_ParamLimits

0xe693,	// (0x0004bc3b) cell_cmail_l_pane_t2

0x0001,

0xfcb1,	// (0x0004d259) cell_cmail_l_pane_t_ParamLimits

0xfcb1,	// (0x0004d259) cell_cmail_l_pane_t

0xb494,	// (0x00048a3c) grid_highlight_pane_cp018_ParamLimits

0xb494,	// (0x00048a3c) grid_highlight_pane_cp018

0x2221,	// (0x0003f7c9) main2_pane_ParamLimits

0x2221,	// (0x0003f7c9) main2_pane

0xa94d,	// (0x00047ef5) popup_sp_fs_action_menu_bg_pane_g1

0xa955,	// (0x00047efd) popup_sp_fs_action_menu_bg_pane_g2

0xa95d,	// (0x00047f05) popup_sp_fs_action_menu_bg_pane_g3

0xa965,	// (0x00047f0d) popup_sp_fs_action_menu_bg_pane_g4

0xa96d,	// (0x00047f15) popup_sp_fs_action_menu_bg_pane_g5

0xa975,	// (0x00047f1d) popup_sp_fs_action_menu_bg_pane_g6

0xa97d,	// (0x00047f25) popup_sp_fs_action_menu_bg_pane_g7

0xa985,	// (0x00047f2d) popup_sp_fs_action_menu_bg_pane_g8

0xa98d,	// (0x00047f35) popup_sp_fs_action_menu_bg_pane_g9

0xa995,	// (0x00047f3d) popup_sp_fs_action_menu_bg_pane_g10

0xa995,	// (0x00047f3d) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf16f,	// (0x0004c717) popup_sp_fs_action_menu_bg_pane_g

0x0d44,	// (0x0003e2ec) list_medium_line_x2_t3_g3_g1_ParamLimits

0x0d44,	// (0x0003e2ec) list_medium_line_x2_t3_g3_g1

0x0d50,	// (0x0003e2f8) list_medium_line_x2_t3_g3_g2_ParamLimits

0x0d50,	// (0x0003e2f8) list_medium_line_x2_t3_g3_g2

0x0d5c,	// (0x0003e304) list_medium_line_x2_t3_g3_g3_ParamLimits

0x0d5c,	// (0x0003e304) list_medium_line_x2_t3_g3_g3

0x0002,

0xf21d,	// (0x0004c7c5) list_medium_line_x2_t3_g3_g_ParamLimits

0xf21d,	// (0x0004c7c5) list_medium_line_x2_t3_g3_g

0x0d68,	// (0x0003e310) list_medium_line_x2_t3_g3_t1_ParamLimits

0x0d68,	// (0x0003e310) list_medium_line_x2_t3_g3_t1

0x0d7d,	// (0x0003e325) list_medium_line_x2_t3_g3_t2_ParamLimits

0x0d7d,	// (0x0003e325) list_medium_line_x2_t3_g3_t2

0x0d8f,	// (0x0003e337) list_medium_line_x2_t3_g3_t3_ParamLimits

0x0d8f,	// (0x0003e337) list_medium_line_x2_t3_g3_t3

0x0002,

0xf224,	// (0x0004c7cc) list_medium_line_x2_t3_g3_t_ParamLimits

0xf224,	// (0x0004c7cc) list_medium_line_x2_t3_g3_t

0x0d44,	// (0x0003e2ec) list_medium_line_x2_t3_g2_g1_ParamLimits

0x0d44,	// (0x0003e2ec) list_medium_line_x2_t3_g2_g1

0x0d5c,	// (0x0003e304) list_medium_line_x2_t3_g2_g2_ParamLimits

0x0d5c,	// (0x0003e304) list_medium_line_x2_t3_g2_g2

0x0001,

0xf22b,	// (0x0004c7d3) list_medium_line_x2_t3_g2_g_ParamLimits

0xf22b,	// (0x0004c7d3) list_medium_line_x2_t3_g2_g

0x0da4,	// (0x0003e34c) list_medium_line_x2_t3_g2_t1_ParamLimits

0x0da4,	// (0x0003e34c) list_medium_line_x2_t3_g2_t1

0x0dba,	// (0x0003e362) list_medium_line_x2_t3_g2_t2_ParamLimits

0x0dba,	// (0x0003e362) list_medium_line_x2_t3_g2_t2

0x0dcc,	// (0x0003e374) list_medium_line_x2_t3_g2_t3_ParamLimits

0x0dcc,	// (0x0003e374) list_medium_line_x2_t3_g2_t3

0x0002,

0xf230,	// (0x0004c7d8) list_medium_line_x2_t3_g2_t_ParamLimits

0xf230,	// (0x0004c7d8) list_medium_line_x2_t3_g2_t

0x0d44,	// (0x0003e2ec) list_medium_line_x2_t4_g4_g1_ParamLimits

0x0d44,	// (0x0003e2ec) list_medium_line_x2_t4_g4_g1

0x0de9,	// (0x0003e391) list_medium_line_x2_t4_g4_g2_ParamLimits

0x0de9,	// (0x0003e391) list_medium_line_x2_t4_g4_g2

0x0d50,	// (0x0003e2f8) list_medium_line_x2_t4_g4_g3_ParamLimits

0x0d50,	// (0x0003e2f8) list_medium_line_x2_t4_g4_g3

0x0df5,	// (0x0003e39d) list_medium_line_x2_t4_g4_g4_ParamLimits

0x0df5,	// (0x0003e39d) list_medium_line_x2_t4_g4_g4

0x0003,

0xf237,	// (0x0004c7df) list_medium_line_x2_t4_g4_g_ParamLimits

0xf237,	// (0x0004c7df) list_medium_line_x2_t4_g4_g

0x0e01,	// (0x0003e3a9) list_medium_line_x2_t4_g4_t1_ParamLimits

0x0e01,	// (0x0003e3a9) list_medium_line_x2_t4_g4_t1

0x0e1b,	// (0x0003e3c3) list_medium_line_x2_t4_g4_t2_ParamLimits

0x0e1b,	// (0x0003e3c3) list_medium_line_x2_t4_g4_t2

0x0e31,	// (0x0003e3d9) list_medium_line_x2_t4_g4_t3_ParamLimits

0x0e31,	// (0x0003e3d9) list_medium_line_x2_t4_g4_t3

0x0e46,	// (0x0003e3ee) list_medium_line_x2_t4_g4_t4_ParamLimits

0x0e46,	// (0x0003e3ee) list_medium_line_x2_t4_g4_t4

0x0003,

0xf240,	// (0x0004c7e8) list_medium_line_x2_t4_g4_t_ParamLimits

0xf240,	// (0x0004c7e8) list_medium_line_x2_t4_g4_t

0x0d44,	// (0x0003e2ec) list_medium_line_x2_t2_g4_g1_ParamLimits

0x0d44,	// (0x0003e2ec) list_medium_line_x2_t2_g4_g1

0x0de9,	// (0x0003e391) list_medium_line_x2_t2_g4_g2_ParamLimits

0x0de9,	// (0x0003e391) list_medium_line_x2_t2_g4_g2

0x0d50,	// (0x0003e2f8) list_medium_line_x2_t2_g4_g3_ParamLimits

0x0d50,	// (0x0003e2f8) list_medium_line_x2_t2_g4_g3

0x0d5c,	// (0x0003e304) list_medium_line_x2_t2_g4_g4_ParamLimits

0x0d5c,	// (0x0003e304) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2a7,	// (0x0004c84f) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2a7,	// (0x0004c84f) list_medium_line_x2_t2_g4_g

0x0e58,	// (0x0003e400) list_medium_line_x2_t2_g4_t1_ParamLimits

0x0e58,	// (0x0003e400) list_medium_line_x2_t2_g4_t1

0x0d8f,	// (0x0003e337) list_medium_line_x2_t2_g4_t2_ParamLimits

0x0d8f,	// (0x0003e337) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2b0,	// (0x0004c858) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2b0,	// (0x0004c858) list_medium_line_x2_t2_g4_t

0x0d44,	// (0x0003e2ec) list_medium_line_x2_t2_g3_g1_ParamLimits

0x0d44,	// (0x0003e2ec) list_medium_line_x2_t2_g3_g1

0x0d50,	// (0x0003e2f8) list_medium_line_x2_t2_g3_g2_ParamLimits

0x0d50,	// (0x0003e2f8) list_medium_line_x2_t2_g3_g2

0x0d5c,	// (0x0003e304) list_medium_line_x2_t2_g3_g3_ParamLimits

0x0d5c,	// (0x0003e304) list_medium_line_x2_t2_g3_g3

0x0002,

0xf21d,	// (0x0004c7c5) list_medium_line_x2_t2_g3_g_ParamLimits

0xf21d,	// (0x0004c7c5) list_medium_line_x2_t2_g3_g

0x0e6d,	// (0x0003e415) list_medium_line_x2_t2_g3_t1_ParamLimits

0x0e6d,	// (0x0003e415) list_medium_line_x2_t2_g3_t1

0x0d8f,	// (0x0003e337) list_medium_line_x2_t2_g3_t2_ParamLimits

0x0d8f,	// (0x0003e337) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2b5,	// (0x0004c85d) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2b5,	// (0x0004c85d) list_medium_line_x2_t2_g3_t

0x4362,	// (0x0004190a) main_sp_fs_list_pane_ParamLimits

0x4362,	// (0x0004190a) main_sp_fs_list_pane

0x436e,	// (0x00041916) sp_fs_scroll_pane_ParamLimits

0x436e,	// (0x00041916) sp_fs_scroll_pane

0x0e82,	// (0x0003e42a) list_medium_line_x2_t3_t1

0x0e92,	// (0x0003e43a) list_medium_line_x2_t3_t2

0x0ea0,	// (0x0003e448) list_medium_line_x2_t3_t3

0x0002,

0xf300,	// (0x0004c8a8) list_medium_line_x2_t3_t

0x0eae,	// (0x0003e456) list_medium_line_x3_t4_t1

0x0ebe,	// (0x0003e466) list_medium_line_x3_t4_t2

0x0ecc,	// (0x0003e474) list_medium_line_x3_t4_t3

0x0ea0,	// (0x0003e448) list_medium_line_x3_t4_t4

0x0003,

0xf307,	// (0x0004c8af) list_medium_line_x3_t4_t

0x0eda,	// (0x0003e482) list_medium_line_x4_t5_t1

0x0eea,	// (0x0003e492) list_medium_line_x4_t5_t2

0x0ecc,	// (0x0003e474) list_medium_line_x4_t5_t3

0x0ef8,	// (0x0003e4a0) list_medium_line_x4_t5_t4

0x0ea0,	// (0x0003e448) list_medium_line_x4_t5_t5

0x0004,

0xf310,	// (0x0004c8b8) list_medium_line_x4_t5_t

0x0d44,	// (0x0003e2ec) list_medium_line_t4_g4_g1_ParamLimits

0x0d44,	// (0x0003e2ec) list_medium_line_t4_g4_g1

0x0df5,	// (0x0003e39d) list_medium_line_t4_g4_g2_ParamLimits

0x0df5,	// (0x0003e39d) list_medium_line_t4_g4_g2

0x0f06,	// (0x0003e4ae) list_medium_line_t4_g4_g3_ParamLimits

0x0f06,	// (0x0003e4ae) list_medium_line_t4_g4_g3

0x0d5c,	// (0x0003e304) list_medium_line_t4_g4_g4_ParamLimits

0x0d5c,	// (0x0003e304) list_medium_line_t4_g4_g4

0x0003,

0xf31b,	// (0x0004c8c3) list_medium_line_t4_g4_g_ParamLimits

0xf31b,	// (0x0004c8c3) list_medium_line_t4_g4_g

0x0f12,	// (0x0003e4ba) list_medium_line_t4_g4_t1_ParamLimits

0x0f12,	// (0x0003e4ba) list_medium_line_t4_g4_t1

0x0f27,	// (0x0003e4cf) list_medium_line_t4_g4_t2_ParamLimits

0x0f27,	// (0x0003e4cf) list_medium_line_t4_g4_t2

0x0f3c,	// (0x0003e4e4) list_medium_line_t4_g4_t3_ParamLimits

0x0f3c,	// (0x0003e4e4) list_medium_line_t4_g4_t3

0x0d8f,	// (0x0003e337) list_medium_line_t4_g4_t4_ParamLimits

0x0d8f,	// (0x0003e337) list_medium_line_t4_g4_t4

0x0003,

0xf324,	// (0x0004c8cc) list_medium_line_t4_g4_t_ParamLimits

0xf324,	// (0x0004c8cc) list_medium_line_t4_g4_t

0x447b,	// (0x00041a23) chi_dic_find_pane_g1

0x52ea,	// (0x00042892) main_tport_pane

0x1206,	// (0x0003e7ae) list_medium_line_plain_t1

0x1214,	// (0x0003e7bc) list_medium_line_t2_g2_g1_ParamLimits

0x1214,	// (0x0003e7bc) list_medium_line_t2_g2_g1

0x1220,	// (0x0003e7c8) list_medium_line_t2_g2_g2_ParamLimits

0x1220,	// (0x0003e7c8) list_medium_line_t2_g2_g2

0x0001,

0xf9e9,	// (0x0004cf91) list_medium_line_t2_g2_g_ParamLimits

0xf9e9,	// (0x0004cf91) list_medium_line_t2_g2_g

0x122c,	// (0x0003e7d4) list_medium_line_t2_g2_t1_ParamLimits

0x122c,	// (0x0003e7d4) list_medium_line_t2_g2_t1

0x1246,	// (0x0003e7ee) list_medium_line_t2_g2_t2_ParamLimits

0x1246,	// (0x0003e7ee) list_medium_line_t2_g2_t2

0x0001,

0xf9ee,	// (0x0004cf96) list_medium_line_t2_g2_t_ParamLimits

0xf9ee,	// (0x0004cf96) list_medium_line_t2_g2_t

0x1466,	// (0x0003ea0e) aid_sp_fs_list_icon_a_sm

0x146e,	// (0x0003ea16) aid_sp_fs_list_icon_d

0x1476,	// (0x0003ea1e) aid_sp_fs_text_primary

0xe747,	// (0x0004bcef) aid_sp_fs_text_secondary

0x8353,	// (0x000458fb) list_medium_line

0x8353,	// (0x000458fb) list_medium_line_g2

0x8353,	// (0x000458fb) list_medium_line_g3

0x8353,	// (0x000458fb) list_medium_line_plain

0x8353,	// (0x000458fb) list_medium_line_plain_t2

0x8353,	// (0x000458fb) list_medium_line_plain_t3

0x8353,	// (0x000458fb) list_medium_line_right_icon

0x8353,	// (0x000458fb) list_medium_line_right_iconx2

0x8353,	// (0x000458fb) list_medium_line_t2

0x8353,	// (0x000458fb) list_medium_line_t2_g2

0x8353,	// (0x000458fb) list_medium_line_t2_g3

0x8353,	// (0x000458fb) list_medium_line_t2_right_icon

0x8353,	// (0x000458fb) list_medium_line_t2_right_iconx2

0x8353,	// (0x000458fb) list_medium_line_t3

0x8353,	// (0x000458fb) list_medium_line_t3_g2

0x8353,	// (0x000458fb) list_medium_line_t3_g3

0x8353,	// (0x000458fb) list_medium_line_t3_right_iconx2

0x147f,	// (0x0003ea27) list_medium_line_t4_g4

0x835c,	// (0x00045904) list_medium_line_x2

0x835c,	// (0x00045904) list_medium_line_x2_t2_g2

0x835c,	// (0x00045904) list_medium_line_x2_t2_g3

0x835c,	// (0x00045904) list_medium_line_x2_t2_g4

0x835c,	// (0x00045904) list_medium_line_x2_t3

0x835c,	// (0x00045904) list_medium_line_x2_t3_g2

0x835c,	// (0x00045904) list_medium_line_x2_t3_g3

0x835c,	// (0x00045904) list_medium_line_x2_t3_g4

0x835c,	// (0x00045904) list_medium_line_x2_t4_g2

0x835c,	// (0x00045904) list_medium_line_x2_t4_g4

0x1488,	// (0x0003ea30) list_medium_line_x3

0x1488,	// (0x0003ea30) list_medium_line_x3_t4

0x1488,	// (0x0003ea30) list_medium_line_x3_t4_g4

0x147f,	// (0x0003ea27) list_medium_line_x4_t4

0x147f,	// (0x0003ea27) list_medium_line_x4_t4_g7

0x147f,	// (0x0003ea27) list_medium_line_x4_t5

0x1491,	// (0x0003ea39) list_single_fs_dyc_pane_ParamLimits

0x1491,	// (0x0003ea39) list_single_fs_dyc_pane

0x0d44,	// (0x0003e2ec) list_medium_line_x4_t4_g7_g1_ParamLimits

0x0d44,	// (0x0003e2ec) list_medium_line_x4_t4_g7_g1

0x14ad,	// (0x0003ea55) list_medium_line_x4_t4_g7_g2_ParamLimits

0x14ad,	// (0x0003ea55) list_medium_line_x4_t4_g7_g2

0x14b9,	// (0x0003ea61) list_medium_line_x4_t4_g7_g3_ParamLimits

0x14b9,	// (0x0003ea61) list_medium_line_x4_t4_g7_g3

0x14c8,	// (0x0003ea70) list_medium_line_x4_t4_g7_g4_ParamLimits

0x14c8,	// (0x0003ea70) list_medium_line_x4_t4_g7_g4

0x14d4,	// (0x0003ea7c) list_medium_line_x4_t4_g7_g5_ParamLimits

0x14d4,	// (0x0003ea7c) list_medium_line_x4_t4_g7_g5

0x14e3,	// (0x0003ea8b) list_medium_line_x4_t4_g7_g6_ParamLimits

0x14e3,	// (0x0003ea8b) list_medium_line_x4_t4_g7_g6

0x14f2,	// (0x0003ea9a) list_medium_line_x4_t4_g7_g7_ParamLimits

0x14f2,	// (0x0003ea9a) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbb9,	// (0x0004d161) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbb9,	// (0x0004d161) list_medium_line_x4_t4_g7_g

0x14fe,	// (0x0003eaa6) list_medium_line_x4_t4_g7_t1_ParamLimits

0x14fe,	// (0x0003eaa6) list_medium_line_x4_t4_g7_t1

0x1513,	// (0x0003eabb) list_medium_line_x4_t4_g7_t2_ParamLimits

0x1513,	// (0x0003eabb) list_medium_line_x4_t4_g7_t2

0x1528,	// (0x0003ead0) list_medium_line_x4_t4_g7_t3_ParamLimits

0x1528,	// (0x0003ead0) list_medium_line_x4_t4_g7_t3

0x153d,	// (0x0003eae5) list_medium_line_x4_t4_g7_t4_ParamLimits

0x153d,	// (0x0003eae5) list_medium_line_x4_t4_g7_t4

0x154f,	// (0x0003eaf7) list_medium_line_x4_t4_g7_t5_ParamLimits

0x154f,	// (0x0003eaf7) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbc8,	// (0x0004d170) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbc8,	// (0x0004d170) list_medium_line_x4_t4_g7_t

0x1561,	// (0x0003eb09) list_single_dyc_row_pane_ParamLimits

0x1561,	// (0x0003eb09) list_single_dyc_row_pane

0x90bd,	// (0x00046665) call5_gesture_pane_ParamLimits

0x90bd,	// (0x00046665) call5_gesture_pane

0x90f1,	// (0x00046699) call5_windows_pane_ParamLimits

0x90f1,	// (0x00046699) call5_windows_pane

0x9144,	// (0x000466ec) call5_swipe_1_pane_cp_ParamLimits

0x9144,	// (0x000466ec) call5_swipe_1_pane_cp

0x9150,	// (0x000466f8) call5_swipe_2_pane_cp_ParamLimits

0x9150,	// (0x000466f8) call5_swipe_2_pane_cp

0xaa79,	// (0x00048021) call5_image_pane_cp

0x915c,	// (0x00046704) popup_call5_audio_first_window_cp_ParamLimits

0x915c,	// (0x00046704) popup_call5_audio_first_window_cp

0xe643,	// (0x0004bbeb) call5_swipe_1_pane_g1_cp_ParamLimits

0xe643,	// (0x0004bbeb) call5_swipe_1_pane_g1_cp

0xe6b0,	// (0x0004bc58) call5_swipe_1_pane_g2_cp

0xe65c,	// (0x0004bc04) call5_swipe_1_pane_t1_cp_ParamLimits

0xe65c,	// (0x0004bc04) call5_swipe_1_pane_t1_cp

0xe643,	// (0x0004bbeb) call5_swipe_2_pane_g1_cp_ParamLimits

0xe643,	// (0x0004bbeb) call5_swipe_2_pane_g1_cp

0xe6b8,	// (0x0004bc60) call5_swipe_2_pane_g2_cp

0xe6c0,	// (0x0004bc68) call5_swipe_2_pane_t1_cp_ParamLimits

0xe6c0,	// (0x0004bc68) call5_swipe_2_pane_t1_cp

0xb494,	// (0x00048a3c) main_sp_fs_email_pane

0xe6d5,	// (0x0004bc7d) main_sp_fs_listscroll_pane_te

0x15ff,	// (0x0003eba7) popup_sp_fs_action_menu_pane_ParamLimits

0x15ff,	// (0x0003eba7) popup_sp_fs_action_menu_pane

0xccfc,	// (0x0004a2a4) bg_sp_fs_ctrlbar_pane_g1

0xe6de,	// (0x0004bc86) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe6e7,	// (0x0004bc8f) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe6f0,	// (0x0004bc98) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xccfc,	// (0x0004a2a4) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcb6,	// (0x0004d25e) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xcae1,	// (0x0004a089) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xcae1,	// (0x0004a089) bg_sp_fs_ctrlbar_ddmenu_pane

0xe6f9,	// (0x0004bca1) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe6f9,	// (0x0004bca1) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe705,	// (0x0004bcad) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe705,	// (0x0004bcad) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcbf,	// (0x0004d267) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcbf,	// (0x0004d267) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe711,	// (0x0004bcb9) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe711,	// (0x0004bcb9) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x1641,	// (0x0003ebe9) list_medium_line_t2_right_icon_g1

0x1649,	// (0x0003ebf1) list_medium_line_t2_right_icon_t1

0x1659,	// (0x0003ec01) list_medium_line_t2_right_icon_t2

0x0001,

0xfcc4,	// (0x0004d26c) list_medium_line_t2_right_icon_t

0xc8f4,	// (0x00049e9c) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc8f4,	// (0x00049e9c) bg_sp_fs_ctrlbar_pane

0x91c1,	// (0x00046769) main_sp_fs_ctrlbar_button_pane_cp01

0x91c9,	// (0x00046771) main_sp_fs_ctrlbar_ddmenu_pane

0xe76c,	// (0x0004bd14) main_sp_fs_ctrlbar_pane_g1

0xe778,	// (0x0004bd20) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfcc9,	// (0x0004d271) main_sp_fs_ctrlbar_pane_g

0x9205,	// (0x000467ad) main_sp_fs_ctrlbar_pane_t1

0x9240,	// (0x000467e8) main_sp_fs_ctrlbar_pane

0x9256,	// (0x000467fe) main_sp_fs_listscroll_pane_te_cp01

0x1667,	// (0x0003ec0f) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x1667,	// (0x0003ec0f) popup_sp_fs_action_menu_pane_cp01

0xb494,	// (0x00048a3c) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xb494,	// (0x00048a3c) bg_sp_fs_highlight_list_pane_cp01

0x1691,	// (0x0003ec39) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x1691,	// (0x0003ec39) sp_fs_action_menu_list_gene_pane_g1

0xe79f,	// (0x0004bd47) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe79f,	// (0x0004bd47) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcd7,	// (0x0004d27f) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcd7,	// (0x0004d27f) sp_fs_action_menu_list_gene_pane_g

0x16a0,	// (0x0003ec48) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x16a0,	// (0x0003ec48) sp_fs_action_menu_list_gene_pane_t1

0x16b8,	// (0x0003ec60) sp_fs_action_menu_list_gene_pane_ParamLimits

0x16b8,	// (0x0003ec60) sp_fs_action_menu_list_gene_pane

0xe7ac,	// (0x0004bd54) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe7ac,	// (0x0004bd54) popup_sp_fs_action_menu_bg_pane

0x16d7,	// (0x0003ec7f) sp_fs_action_menu_list_pane_ParamLimits

0x16d7,	// (0x0003ec7f) sp_fs_action_menu_list_pane

0xa7ab,	// (0x00047d53) sp_fs_scroll_pane_cp01_ParamLimits

0xa7ab,	// (0x00047d53) sp_fs_scroll_pane_cp01

0x16f7,	// (0x0003ec9f) list_medium_line_plain_t2_t1

0x1707,	// (0x0003ecaf) list_medium_line_plain_t2_t2

0x0001,

0xfcdc,	// (0x0004d284) list_medium_line_plain_t2_t

0x1715,	// (0x0003ecbd) list_medium_line_plain_t3_t1

0x1725,	// (0x0003eccd) list_medium_line_plain_t3_t2

0x1733,	// (0x0003ecdb) list_medium_line_plain_t3_t3

0x0002,

0xfce1,	// (0x0004d289) list_medium_line_plain_t3_t

0x0d44,	// (0x0003e2ec) list_medium_line_x2_t2_g2_g1_ParamLimits

0x0d44,	// (0x0003e2ec) list_medium_line_x2_t2_g2_g1

0x0d5c,	// (0x0003e304) list_medium_line_x2_t2_g2_g2_ParamLimits

0x0d5c,	// (0x0003e304) list_medium_line_x2_t2_g2_g2

0x0001,

0xf22b,	// (0x0004c7d3) list_medium_line_x2_t2_g2_g_ParamLimits

0xf22b,	// (0x0004c7d3) list_medium_line_x2_t2_g2_g

0x0f12,	// (0x0003e4ba) list_medium_line_x2_t2_g2_t1_ParamLimits

0x0f12,	// (0x0003e4ba) list_medium_line_x2_t2_g2_t1

0x0d8f,	// (0x0003e337) list_medium_line_x2_t2_g2_t2_ParamLimits

0x0d8f,	// (0x0003e337) list_medium_line_x2_t2_g2_t2

0x0001,

0xfce8,	// (0x0004d290) list_medium_line_x2_t2_g2_t_ParamLimits

0xfce8,	// (0x0004d290) list_medium_line_x2_t2_g2_t

0x0d44,	// (0x0003e2ec) list_medium_line_x2_t4_g2_g1_ParamLimits

0x0d44,	// (0x0003e2ec) list_medium_line_x2_t4_g2_g1

0x1741,	// (0x0003ece9) list_medium_line_x2_t4_g2_g2_ParamLimits

0x1741,	// (0x0003ece9) list_medium_line_x2_t4_g2_g2

0x0001,

0xfced,	// (0x0004d295) list_medium_line_x2_t4_g2_g_ParamLimits

0xfced,	// (0x0004d295) list_medium_line_x2_t4_g2_g

0x1753,	// (0x0003ecfb) list_medium_line_x2_t4_g2_t1_ParamLimits

0x1753,	// (0x0003ecfb) list_medium_line_x2_t4_g2_t1

0x176d,	// (0x0003ed15) list_medium_line_x2_t4_g2_t2_ParamLimits

0x176d,	// (0x0003ed15) list_medium_line_x2_t4_g2_t2

0x1783,	// (0x0003ed2b) list_medium_line_x2_t4_g2_t3_ParamLimits

0x1783,	// (0x0003ed2b) list_medium_line_x2_t4_g2_t3

0x0d8f,	// (0x0003e337) list_medium_line_x2_t4_g2_t4_ParamLimits

0x0d8f,	// (0x0003e337) list_medium_line_x2_t4_g2_t4

0x0003,

0xfcf2,	// (0x0004d29a) list_medium_line_x2_t4_g2_t_ParamLimits

0xfcf2,	// (0x0004d29a) list_medium_line_x2_t4_g2_t

0x1798,	// (0x0003ed40) list_medium_line_t3_right_iconx2_g1

0x1641,	// (0x0003ebe9) list_medium_line_t3_right_iconx2_g2

0x17a0,	// (0x0003ed48) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfcfb,	// (0x0004d2a3) list_medium_line_t3_right_iconx2_g

0x17a8,	// (0x0003ed50) list_medium_line_t3_right_iconx2_t1

0x17b8,	// (0x0003ed60) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd02,	// (0x0004d2aa) list_medium_line_t3_right_iconx2_t

0x0d44,	// (0x0003e2ec) list_medium_line_x3_t4_g4_g1_ParamLimits

0x0d44,	// (0x0003e2ec) list_medium_line_x3_t4_g4_g1

0x0d50,	// (0x0003e2f8) list_medium_line_x3_t4_g4_g2_ParamLimits

0x0d50,	// (0x0003e2f8) list_medium_line_x3_t4_g4_g2

0x0df5,	// (0x0003e39d) list_medium_line_x3_t4_g4_g3_ParamLimits

0x0df5,	// (0x0003e39d) list_medium_line_x3_t4_g4_g3

0x17c6,	// (0x0003ed6e) list_medium_line_x3_t4_g4_g4_ParamLimits

0x17c6,	// (0x0003ed6e) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd07,	// (0x0004d2af) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd07,	// (0x0004d2af) list_medium_line_x3_t4_g4_g

0x17d2,	// (0x0003ed7a) list_medium_line_x3_t4_g4_t1_ParamLimits

0x17d2,	// (0x0003ed7a) list_medium_line_x3_t4_g4_t1

0x17e9,	// (0x0003ed91) list_medium_line_x3_t4_g4_t2_ParamLimits

0x17e9,	// (0x0003ed91) list_medium_line_x3_t4_g4_t2

0x0f27,	// (0x0003e4cf) list_medium_line_x3_t4_g4_t3_ParamLimits

0x0f27,	// (0x0003e4cf) list_medium_line_x3_t4_g4_t3

0x17fe,	// (0x0003eda6) list_medium_line_x3_t4_g4_t4_ParamLimits

0x17fe,	// (0x0003eda6) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd10,	// (0x0004d2b8) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd10,	// (0x0004d2b8) list_medium_line_x3_t4_g4_t

0x181b,	// (0x0003edc3) list_single_dyc_row_text_pane_t1_ParamLimits

0x181b,	// (0x0003edc3) list_single_dyc_row_text_pane_t1

0x1852,	// (0x0003edfa) list_single_dyc_row_text_pane_t2_ParamLimits

0x1852,	// (0x0003edfa) list_single_dyc_row_text_pane_t2

0x18c8,	// (0x0003ee70) list_single_dyc_row_text_pane_t3_ParamLimits

0x18c8,	// (0x0003ee70) list_single_dyc_row_text_pane_t3

0x0005,

0xfd19,	// (0x0004d2c1) list_single_dyc_row_text_pane_t_ParamLimits

0xfd19,	// (0x0004d2c1) list_single_dyc_row_text_pane_t

0x1999,	// (0x0003ef41) list_single_dyc_row_pane_g1_ParamLimits

0x1999,	// (0x0003ef41) list_single_dyc_row_pane_g1

0x19a5,	// (0x0003ef4d) list_single_dyc_row_pane_g2_ParamLimits

0x19a5,	// (0x0003ef4d) list_single_dyc_row_pane_g2

0x19b1,	// (0x0003ef59) list_single_dyc_row_pane_g3_ParamLimits

0x19b1,	// (0x0003ef59) list_single_dyc_row_pane_g3

0x19bd,	// (0x0003ef65) list_single_dyc_row_pane_g4_ParamLimits

0x19bd,	// (0x0003ef65) list_single_dyc_row_pane_g4

0x0003,

0xfd26,	// (0x0004d2ce) list_single_dyc_row_pane_g_ParamLimits

0xfd26,	// (0x0004d2ce) list_single_dyc_row_pane_g

0x19c9,	// (0x0003ef71) list_single_dyc_row_text_pane_ParamLimits

0x19c9,	// (0x0003ef71) list_single_dyc_row_text_pane

0xa143,	// (0x000476eb) bg_sp_fs_scroll_pane

0xe7ba,	// (0x0004bd62) thumb_sp_fs_scroll_pane

0x1214,	// (0x0003e7bc) list_medium_line_g1_ParamLimits

0x1214,	// (0x0003e7bc) list_medium_line_g1

0x19e8,	// (0x0003ef90) list_medium_line_t1_ParamLimits

0x19e8,	// (0x0003ef90) list_medium_line_t1

0x0d44,	// (0x0003e2ec) list_medium_line_x2_g1_ParamLimits

0x0d44,	// (0x0003e2ec) list_medium_line_x2_g1

0x0d50,	// (0x0003e2f8) list_medium_line_x2_g2_ParamLimits

0x0d50,	// (0x0003e2f8) list_medium_line_x2_g2

0x0001,

0xfd2f,	// (0x0004d2d7) list_medium_line_x2_g_ParamLimits

0xfd2f,	// (0x0004d2d7) list_medium_line_x2_g

0x19fd,	// (0x0003efa5) list_medium_line_x2_t1_ParamLimits

0x19fd,	// (0x0003efa5) list_medium_line_x2_t1

0x0d44,	// (0x0003e2ec) list_medium_line_x3_g1_ParamLimits

0x0d44,	// (0x0003e2ec) list_medium_line_x3_g1

0x0d50,	// (0x0003e2f8) list_medium_line_x3_g2_ParamLimits

0x0d50,	// (0x0003e2f8) list_medium_line_x3_g2

0x0001,

0xfd2f,	// (0x0004d2d7) list_medium_line_x3_g_ParamLimits

0xfd2f,	// (0x0004d2d7) list_medium_line_x3_g

0x19fd,	// (0x0003efa5) list_medium_line_x3_t1_ParamLimits

0x19fd,	// (0x0003efa5) list_medium_line_x3_t1

0xe7c3,	// (0x0004bd6b) thumb_sp_fs_scroll_pane_g1

0xe7cc,	// (0x0004bd74) thumb_sp_fs_scroll_pane_g2

0xe7d5,	// (0x0004bd7d) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd34,	// (0x0004d2dc) thumb_sp_fs_scroll_pane_g

0xe7c3,	// (0x0004bd6b) bg_sp_fs_scroll_pane_g1

0xe7cc,	// (0x0004bd74) bg_sp_fs_scroll_pane_g2

0xe7d5,	// (0x0004bd7d) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd34,	// (0x0004d2dc) bg_sp_fs_scroll_pane_g

0x0d44,	// (0x0003e2ec) list_medium_line_x2_t3_g4_g1_ParamLimits

0x0d44,	// (0x0003e2ec) list_medium_line_x2_t3_g4_g1

0x0de9,	// (0x0003e391) list_medium_line_x2_t3_g4_g2_ParamLimits

0x0de9,	// (0x0003e391) list_medium_line_x2_t3_g4_g2

0x0d50,	// (0x0003e2f8) list_medium_line_x2_t3_g4_g3_ParamLimits

0x0d50,	// (0x0003e2f8) list_medium_line_x2_t3_g4_g3

0x0d5c,	// (0x0003e304) list_medium_line_x2_t3_g4_g4_ParamLimits

0x0d5c,	// (0x0003e304) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2a7,	// (0x0004c84f) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2a7,	// (0x0004c84f) list_medium_line_x2_t3_g4_g

0x1a13,	// (0x0003efbb) list_medium_line_x2_t3_g4_t1_ParamLimits

0x1a13,	// (0x0003efbb) list_medium_line_x2_t3_g4_t1

0x1a29,	// (0x0003efd1) list_medium_line_x2_t3_g4_t2_ParamLimits

0x1a29,	// (0x0003efd1) list_medium_line_x2_t3_g4_t2

0x0d8f,	// (0x0003e337) list_medium_line_x2_t3_g4_t3_ParamLimits

0x0d8f,	// (0x0003e337) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd3b,	// (0x0004d2e3) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd3b,	// (0x0004d2e3) list_medium_line_x2_t3_g4_t

0x1214,	// (0x0003e7bc) list_medium_line_g2_g1_ParamLimits

0x1214,	// (0x0003e7bc) list_medium_line_g2_g1

0x1220,	// (0x0003e7c8) list_medium_line_g2_g2_ParamLimits

0x1220,	// (0x0003e7c8) list_medium_line_g2_g2

0x0001,

0xf9e9,	// (0x0004cf91) list_medium_line_g2_g_ParamLimits

0xf9e9,	// (0x0004cf91) list_medium_line_g2_g

0x1a43,	// (0x0003efeb) list_medium_line_g2_t1_ParamLimits

0x1a43,	// (0x0003efeb) list_medium_line_g2_t1

0x1214,	// (0x0003e7bc) list_medium_line_t3_g2_g1_ParamLimits

0x1214,	// (0x0003e7bc) list_medium_line_t3_g2_g1

0x1220,	// (0x0003e7c8) list_medium_line_t3_g2_g2_ParamLimits

0x1220,	// (0x0003e7c8) list_medium_line_t3_g2_g2

0x0001,

0xf9e9,	// (0x0004cf91) list_medium_line_t3_g2_g_ParamLimits

0xf9e9,	// (0x0004cf91) list_medium_line_t3_g2_g

0x1a58,	// (0x0003f000) list_medium_line_t3_g2_t1_ParamLimits

0x1a58,	// (0x0003f000) list_medium_line_t3_g2_t1

0x1a72,	// (0x0003f01a) list_medium_line_t3_g2_t2_ParamLimits

0x1a72,	// (0x0003f01a) list_medium_line_t3_g2_t2

0x1a88,	// (0x0003f030) list_medium_line_t3_g2_t3_ParamLimits

0x1a88,	// (0x0003f030) list_medium_line_t3_g2_t3

0x0002,

0xfd42,	// (0x0004d2ea) list_medium_line_t3_g2_t_ParamLimits

0xfd42,	// (0x0004d2ea) list_medium_line_t3_g2_t

0x1641,	// (0x0003ebe9) list_medium_line_right_icon_g1

0x1a9e,	// (0x0003f046) list_medium_line_right_icon_t1

0x1214,	// (0x0003e7bc) list_medium_line_t2_g1_ParamLimits

0x1214,	// (0x0003e7bc) list_medium_line_t2_g1

0x1aac,	// (0x0003f054) list_medium_line_t2_t1_ParamLimits

0x1aac,	// (0x0003f054) list_medium_line_t2_t1

0x1ac6,	// (0x0003f06e) list_medium_line_t2_t2_ParamLimits

0x1ac6,	// (0x0003f06e) list_medium_line_t2_t2

0x0001,

0xfd49,	// (0x0004d2f1) list_medium_line_t2_t_ParamLimits

0xfd49,	// (0x0004d2f1) list_medium_line_t2_t

0x1214,	// (0x0003e7bc) list_medium_line_t3_g1_ParamLimits

0x1214,	// (0x0003e7bc) list_medium_line_t3_g1

0x1adb,	// (0x0003f083) list_medium_line_t3_t1_ParamLimits

0x1adb,	// (0x0003f083) list_medium_line_t3_t1

0x1af5,	// (0x0003f09d) list_medium_line_t3_t2_ParamLimits

0x1af5,	// (0x0003f09d) list_medium_line_t3_t2

0x1b0b,	// (0x0003f0b3) list_medium_line_t3_t3_ParamLimits

0x1b0b,	// (0x0003f0b3) list_medium_line_t3_t3

0x0002,

0xfd4e,	// (0x0004d2f6) list_medium_line_t3_t_ParamLimits

0xfd4e,	// (0x0004d2f6) list_medium_line_t3_t

0x1214,	// (0x0003e7bc) list_medium_line_g3_g1_ParamLimits

0x1214,	// (0x0003e7bc) list_medium_line_g3_g1

0x1b20,	// (0x0003f0c8) list_medium_line_g3_g2_ParamLimits

0x1b20,	// (0x0003f0c8) list_medium_line_g3_g2

0x1220,	// (0x0003e7c8) list_medium_line_g3_g3_ParamLimits

0x1220,	// (0x0003e7c8) list_medium_line_g3_g3

0x0002,

0xfd55,	// (0x0004d2fd) list_medium_line_g3_g_ParamLimits

0xfd55,	// (0x0004d2fd) list_medium_line_g3_g

0x1b2c,	// (0x0003f0d4) list_medium_line_g3_t1_ParamLimits

0x1b2c,	// (0x0003f0d4) list_medium_line_g3_t1

0x1214,	// (0x0003e7bc) list_medium_line_t2_g3_g1_ParamLimits

0x1214,	// (0x0003e7bc) list_medium_line_t2_g3_g1

0x1b20,	// (0x0003f0c8) list_medium_line_t2_g3_g2_ParamLimits

0x1b20,	// (0x0003f0c8) list_medium_line_t2_g3_g2

0x1220,	// (0x0003e7c8) list_medium_line_t2_g3_g3_ParamLimits

0x1220,	// (0x0003e7c8) list_medium_line_t2_g3_g3

0x0002,

0xfd55,	// (0x0004d2fd) list_medium_line_t2_g3_g_ParamLimits

0xfd55,	// (0x0004d2fd) list_medium_line_t2_g3_g

0x1b41,	// (0x0003f0e9) list_medium_line_t2_g3_t1_ParamLimits

0x1b41,	// (0x0003f0e9) list_medium_line_t2_g3_t1

0x1b5b,	// (0x0003f103) list_medium_line_t2_g3_t2_ParamLimits

0x1b5b,	// (0x0003f103) list_medium_line_t2_g3_t2

0x0001,

0xfd5c,	// (0x0004d304) list_medium_line_t2_g3_t_ParamLimits

0xfd5c,	// (0x0004d304) list_medium_line_t2_g3_t

0x1214,	// (0x0003e7bc) list_medium_line_t3_g3_g1_ParamLimits

0x1214,	// (0x0003e7bc) list_medium_line_t3_g3_g1

0x1b20,	// (0x0003f0c8) list_medium_line_t3_g3_g2_ParamLimits

0x1b20,	// (0x0003f0c8) list_medium_line_t3_g3_g2

0x1220,	// (0x0003e7c8) list_medium_line_t3_g3_g3_ParamLimits

0x1220,	// (0x0003e7c8) list_medium_line_t3_g3_g3

0x0002,

0xfd55,	// (0x0004d2fd) list_medium_line_t3_g3_g_ParamLimits

0xfd55,	// (0x0004d2fd) list_medium_line_t3_g3_g

0x1b71,	// (0x0003f119) list_medium_line_t3_g3_t1_ParamLimits

0x1b71,	// (0x0003f119) list_medium_line_t3_g3_t1

0x1b8a,	// (0x0003f132) list_medium_line_t3_g3_t2_ParamLimits

0x1b8a,	// (0x0003f132) list_medium_line_t3_g3_t2

0x1ba0,	// (0x0003f148) list_medium_line_t3_g3_t3_ParamLimits

0x1ba0,	// (0x0003f148) list_medium_line_t3_g3_t3

0x0002,

0xfd61,	// (0x0004d309) list_medium_line_t3_g3_t_ParamLimits

0xfd61,	// (0x0004d309) list_medium_line_t3_g3_t

0x1798,	// (0x0003ed40) list_medium_line_right_iconx2_g1

0x1641,	// (0x0003ebe9) list_medium_line_right_iconx2_g2

0x0001,

0xfd68,	// (0x0004d310) list_medium_line_right_iconx2_g

0x1bb6,	// (0x0003f15e) list_medium_line_right_iconx2_t1

0x1798,	// (0x0003ed40) list_medium_line_t2_right_iconx2_g1

0x1641,	// (0x0003ebe9) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd68,	// (0x0004d310) list_medium_line_t2_right_iconx2_g

0x1bc4,	// (0x0003f16c) list_medium_line_t2_right_iconx2_t1

0x1bd4,	// (0x0003f17c) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd6d,	// (0x0004d315) list_medium_line_t2_right_iconx2_t

0x1be2,	// (0x0003f18a) list_medium_line_x4_t4_t1

0x1bf0,	// (0x0003f198) list_medium_line_x4_t4_t2

0x1c00,	// (0x0003f1a8) list_medium_line_x4_t4_t3

0x1c10,	// (0x0003f1b8) list_medium_line_x4_t4_t4

0x0003,

0xfd72,	// (0x0004d31a) list_medium_line_x4_t4_t

0x9291,	// (0x00046839) tport_appsw_pane_ParamLimits

0x9291,	// (0x00046839) tport_appsw_pane

0x929f,	// (0x00046847) tport_contact_pane_ParamLimits

0x929f,	// (0x00046847) tport_contact_pane

0x92af,	// (0x00046857) tport_listscroll_pane_ParamLimits

0x92af,	// (0x00046857) tport_listscroll_pane

0x92bf,	// (0x00046867) cell_tport_appsw_pane_ParamLimits

0x92bf,	// (0x00046867) cell_tport_appsw_pane

0xcff0,	// (0x0004a598) tport_appsw_pane_g1_ParamLimits

0xcff0,	// (0x0004a598) tport_appsw_pane_g1

0xe7de,	// (0x0004bd86) tport_contact_pane_g1

0xe195,	// (0x0004b73d) tport_contact_pane_t1

0xe7e7,	// (0x0004bd8f) tport_contact_pane_t2

0x0001,

0xfd7b,	// (0x0004d323) tport_contact_pane_t

0xe7f5,	// (0x0004bd9d) list_tport_pane

0xe7fe,	// (0x0004bda6) scroll_pane_cp_030

0x92f2,	// (0x0004689a) cell_tport_appsw_pane_g1

0x9302,	// (0x000468aa) cell_tport_appsw_pane_t1

0x9310,	// (0x000468b8) grid_highlight_pane_cp019

0x9318,	// (0x000468c0) list_tport_double_graphic_pane_ParamLimits

0x9318,	// (0x000468c0) list_tport_double_graphic_pane

0xb494,	// (0x00048a3c) list_highlight_pane_cp023_ParamLimits

0xb494,	// (0x00048a3c) list_highlight_pane_cp023

0x9329,	// (0x000468d1) list_tport_double_graphic_pane_g1_ParamLimits

0x9329,	// (0x000468d1) list_tport_double_graphic_pane_g1

0x9336,	// (0x000468de) list_tport_double_graphic_pane_t1_ParamLimits

0x9336,	// (0x000468de) list_tport_double_graphic_pane_t1

0x934b,	// (0x000468f3) list_tport_double_graphic_pane_t2_ParamLimits

0x934b,	// (0x000468f3) list_tport_double_graphic_pane_t2

0x0001,

0xfd87,	// (0x0004d32f) list_tport_double_graphic_pane_t_ParamLimits

0xfd87,	// (0x0004d32f) list_tport_double_graphic_pane_t

0xa143,	// (0x000476eb) main_cale_note_pane

0x766e,	// (0x00044c16) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x766e,	// (0x00044c16) cell_vitu2_function_top_wide_pane_cp01

0x8e0e,	// (0x000463b6) wait_bar_pane_cp05_ParamLimits

0xb494,	// (0x00048a3c) listscroll_cmail_pane

0xe807,	// (0x0004bdaf) list_cmail_pane

0x935d,	// (0x00046905) list_cmail_body_pane

0x9384,	// (0x0004692c) list_single_cmail_header_caption_pane

0x93af,	// (0x00046957) list_single_cmail_header_detail_pane_ParamLimits

0x93af,	// (0x00046957) list_single_cmail_header_detail_pane

0xe817,	// (0x0004bdbf) list_single_cmail_header_caption_pane_t1

0x1c20,	// (0x0003f1c8) list_single_cmail_header_detail_pane_g1_ParamLimits

0x1c20,	// (0x0003f1c8) list_single_cmail_header_detail_pane_g1

0x1c36,	// (0x0003f1de) list_single_cmail_header_detail_pane_g2_ParamLimits

0x1c36,	// (0x0003f1de) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd8c,	// (0x0004d334) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd8c,	// (0x0004d334) list_single_cmail_header_detail_pane_g

0x1c42,	// (0x0003f1ea) list_single_cmail_header_detail_pane_t1_ParamLimits

0x1c42,	// (0x0003f1ea) list_single_cmail_header_detail_pane_t1

0x1ca2,	// (0x0003f24a) list_single_cmail_header_editor_pane_bg_ParamLimits

0x1ca2,	// (0x0003f24a) list_single_cmail_header_editor_pane_bg

0xe2f2,	// (0x0004b89a) list_cmail_body_pane_g1

0xe83b,	// (0x0004bde3) list_cmail_body_pane_t1

0xd6df,	// (0x0004ac87) list_single_cmail_header_editor_pane_bg_g1

0xacd2,	// (0x0004827a) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd6ef,	// (0x0004ac97) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd6e7,	// (0x0004ac8f) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd93a,	// (0x0004aee2) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd70f,	// (0x0004acb7) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd6ff,	// (0x0004aca7) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd707,	// (0x0004acaf) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xacb2,	// (0x0004825a) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x93e5,	// (0x0004698d) calenote_gesture_pane_ParamLimits

0x93e5,	// (0x0004698d) calenote_gesture_pane

0x93ff,	// (0x000469a7) calenote_window_pane_ParamLimits

0x93ff,	// (0x000469a7) calenote_window_pane

0xe849,	// (0x0004bdf1) popup_note_window_cp01

0x9417,	// (0x000469bf) calenote_swipe_1_pane_ParamLimits

0x9417,	// (0x000469bf) calenote_swipe_1_pane

0x9150,	// (0x000466f8) calenote_swipe_2_pane_ParamLimits

0x9150,	// (0x000466f8) calenote_swipe_2_pane

0xe643,	// (0x0004bbeb) calenote_swipe_1_pane_g1_ParamLimits

0xe643,	// (0x0004bbeb) calenote_swipe_1_pane_g1

0xe650,	// (0x0004bbf8) calenote_swipe_1_pane_g2_ParamLimits

0xe650,	// (0x0004bbf8) calenote_swipe_1_pane_g2

0x0001,

0xfcac,	// (0x0004d254) calenote_swipe_1_pane_g_ParamLimits

0xfcac,	// (0x0004d254) calenote_swipe_1_pane_g

0xe85b,	// (0x0004be03) calenote_swipe_1_pane_t1_ParamLimits

0xe85b,	// (0x0004be03) calenote_swipe_1_pane_t1

0xe643,	// (0x0004bbeb) calenote_swipe_2_pane_g1_ParamLimits

0xe643,	// (0x0004bbeb) calenote_swipe_2_pane_g1

0xe87a,	// (0x0004be22) calenote_swipe_2_pane_g2_ParamLimits

0xe87a,	// (0x0004be22) calenote_swipe_2_pane_g2

0x0001,

0xfd98,	// (0x0004d340) calenote_swipe_2_pane_g_ParamLimits

0xfd98,	// (0x0004d340) calenote_swipe_2_pane_g

0xe886,	// (0x0004be2e) calenote_swipe_2_pane_t1_ParamLimits

0xe886,	// (0x0004be2e) calenote_swipe_2_pane_t1

0xa143,	// (0x000476eb) main_mup_navstr_pane

0x62c1,	// (0x00043869) main_mup3_pane_t7_ParamLimits

0x62c1,	// (0x00043869) main_mup3_pane_t7

0x6d07,	// (0x000442af) main_mp4_pane_g6_ParamLimits

0x6d07,	// (0x000442af) main_mp4_pane_g6

0x7097,	// (0x0004463f) main_image3_pane_t4_ParamLimits

0x7097,	// (0x0004463f) main_image3_pane_t4

0x942a,	// (0x000469d2) popup_navstr_preview_pane_ParamLimits

0x942a,	// (0x000469d2) popup_navstr_preview_pane

0x9436,	// (0x000469de) scroll_navstr_pane_ParamLimits

0x9436,	// (0x000469de) scroll_navstr_pane

0xa143,	// (0x000476eb) bg_popup_preview_window_pane_cp04

0xe8ad,	// (0x0004be55) popup_navstr_preview_pane_t1

0x9442,	// (0x000469ea) scroll_navstr_pane_g1_ParamLimits

0x9442,	// (0x000469ea) scroll_navstr_pane_g1

0x944f,	// (0x000469f7) scroll_navstr_pane_t1_ParamLimits

0x944f,	// (0x000469f7) scroll_navstr_pane_t1

0xe852,	// (0x0004bdfa) bg_button_pane_cp014

0xe852,	// (0x0004bdfa) bg_button_pane_cp030

0x15a5,	// (0x0003eb4d) list_double_fisheye_pane_g4_ParamLimits

0x15a5,	// (0x0003eb4d) list_double_fisheye_pane_g4

0x15b1,	// (0x0003eb59) list_double_fisheye_pane_g5_ParamLimits

0x15b1,	// (0x0003eb59) list_double_fisheye_pane_g5

0xcd25,	// (0x0004a2cd) sp_fs_scroll_pane_cp03

0xe76c,	// (0x0004bd14) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe778,	// (0x0004bd20) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcc9,	// (0x0004d271) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x9205,	// (0x000467ad) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe80f,	// (0x0004bdb7) sp_fs_scroll_pane_cp02

0xa9b8,	// (0x00047f60) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa9b8,	// (0x00047f60) popup_sp_fs_calendar_preview_list_single_pane

0xa143,	// (0x000476eb) main_cam6_pano_pane

0xb494,	// (0x00048a3c) main_mup3_pane_ParamLimits

0xa143,	// (0x000476eb) main_phacti_pane

0x8ce3,	// (0x0004628b) bg_button_pane_cp11

0x8cfb,	// (0x000462a3) main_mobtv_info_pane_g2_ParamLimits

0x8cfb,	// (0x000462a3) main_mobtv_info_pane_g2

0x0001,

0xfc29,	// (0x0004d1d1) main_mobtv_info_pane_g_ParamLimits

0xfc29,	// (0x0004d1d1) main_mobtv_info_pane_g

0x8ead,	// (0x00046455) sc_clock_pane_t5_ParamLimits

0x8ead,	// (0x00046455) sc_clock_pane_t5

0x8f4e,	// (0x000464f6) main_radioblah_pane_g1_ParamLimits

0xe58f,	// (0x0004bb37) main_radioblah_pane_t3_ParamLimits

0xe58f,	// (0x0004bb37) main_radioblah_pane_t3

0xe5a7,	// (0x0004bb4f) main_radioblah_pane_t4_ParamLimits

0xe5a7,	// (0x0004bb4f) main_radioblah_pane_t4

0x8f6c,	// (0x00046514) main_radioblah_text_pane_ParamLimits

0x8f6c,	// (0x00046514) main_radioblah_text_pane

0x8f79,	// (0x00046521) main_radioblah_info_pane_g1_ParamLimits

0x900e,	// (0x000465b6) main_radioblah_info_pane_t4_ParamLimits

0x900e,	// (0x000465b6) main_radioblah_info_pane_t4

0xb494,	// (0x00048a3c) main_sp_fs_calendar_pane

0x9461,	// (0x00046a09) main_phacti_pane_g1

0x9469,	// (0x00046a11) phacti_note_pane_ParamLimits

0x9469,	// (0x00046a11) phacti_note_pane

0xe8c4,	// (0x0004be6c) phacti_term_pane_ParamLimits

0xe8c4,	// (0x0004be6c) phacti_term_pane

0xe8d9,	// (0x0004be81) phacti_note_pane_t1_ParamLimits

0xe8d9,	// (0x0004be81) phacti_note_pane_t1

0x1cb9,	// (0x0003f261) phacti_term_pane_g1

0x1cc1,	// (0x0003f269) phacti_term_pane_t1_ParamLimits

0x1cc1,	// (0x0003f269) phacti_term_pane_t1

0xe8f0,	// (0x0004be98) popup_sp_fs_calendar_preview_list_single_pane_g1

0xaa57,	// (0x00047fff) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfda2,	// (0x0004d34a) popup_sp_fs_calendar_preview_list_single_pane_g

0xe8f8,	// (0x0004bea0) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe8f8,	// (0x0004bea0) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe90e,	// (0x0004beb6) aid_popup_sp_fs_bg_corner_pane

0xccfc,	// (0x0004a2a4) popup_sp_fs_calendar_preview_bg_pane_g1

0xa143,	// (0x000476eb) popup_sp_fs_calendar_preview_bg_pane

0xe916,	// (0x0004bebe) popup_sp_fs_calendar_preview_list_pane

0xc8f4,	// (0x00049e9c) bg_main_sp_fs_cale_pane_ParamLimits

0xc8f4,	// (0x00049e9c) bg_main_sp_fs_cale_pane

0x1cf4,	// (0x0003f29c) listscroll_cale_mrui_pane_ParamLimits

0x1cf4,	// (0x0003f29c) listscroll_cale_mrui_pane

0x1d09,	// (0x0003f2b1) listscroll_sp_fs_schedule_track_pane

0x1d12,	// (0x0003f2ba) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x1d12,	// (0x0003f2ba) main_sp_fs_ctrlbar_pane_cp01

0xe91e,	// (0x0004bec6) main_sp_fs_ribbon_pane

0x1d25,	// (0x0003f2cd) popup_sp_fs_cale_preview_window

0x94cc,	// (0x00046a74) list_single_sp_fs_schedule_track_pane_ParamLimits

0x94cc,	// (0x00046a74) list_single_sp_fs_schedule_track_pane

0xd8d2,	// (0x0004ae7a) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xd8d2,	// (0x0004ae7a) bg_sp_fs_highlight_list_pane_cp03

0x94ee,	// (0x00046a96) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x94ee,	// (0x00046a96) list_single_sp_fs_schedule_track_pane_g1

0x94fa,	// (0x00046aa2) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x94fa,	// (0x00046aa2) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfda7,	// (0x0004d34f) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfda7,	// (0x0004d34f) list_single_sp_fs_schedule_track_pane_g

0x9506,	// (0x00046aae) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x9506,	// (0x00046aae) list_single_sp_fs_schedule_track_pane_t1

0x951e,	// (0x00046ac6) sp_fs_schedule_track_pane_ParamLimits

0x951e,	// (0x00046ac6) sp_fs_schedule_track_pane

0xe926,	// (0x0004bece) sp_fs_schedule_track_pane_g1

0xe92e,	// (0x0004bed6) sp_fs_schedule_track_pane_g2

0xe936,	// (0x0004bede) sp_fs_schedule_track_pane_g3

0xe93e,	// (0x0004bee6) sp_fs_schedule_track_pane_g4

0xe946,	// (0x0004beee) sp_fs_schedule_track_pane_g5

0x0004,

0xfdac,	// (0x0004d354) sp_fs_schedule_track_pane_g

0xd6df,	// (0x0004ac87) bg_sp_fs_schedule_viewer_highlight_g1

0xacd2,	// (0x0004827a) bg_sp_fs_schedule_viewer_highlight_g2

0xd6e7,	// (0x0004ac8f) bg_sp_fs_schedule_viewer_highlight_g3

0xd6ef,	// (0x0004ac97) bg_sp_fs_schedule_viewer_highlight_g4

0xd93a,	// (0x0004aee2) bg_sp_fs_schedule_viewer_highlight_g5

0xd6ff,	// (0x0004aca7) bg_sp_fs_schedule_viewer_highlight_g6

0xd707,	// (0x0004acaf) bg_sp_fs_schedule_viewer_highlight_g7

0xd70f,	// (0x0004acb7) bg_sp_fs_schedule_viewer_highlight_g8

0xacb2,	// (0x0004825a) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdb7,	// (0x0004d35f) bg_sp_fs_schedule_viewer_highlight_g

0xa143,	// (0x000476eb) bg_main_sp_fs_ribbon_pane

0x952e,	// (0x00046ad6) main_sp_fs_ribbon_pane_g1

0xe94e,	// (0x0004bef6) main_sp_fs_ribbon_pane_t1

0x9537,	// (0x00046adf) main_sp_fs_ribbon_pane_t2

0xe95d,	// (0x0004bf05) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdca,	// (0x0004d372) main_sp_fs_ribbon_pane_t

0xe96c,	// (0x0004bf14) main_sp_fs_ribbon_scheduler_pane

0xe974,	// (0x0004bf1c) bg_main_sp_fs_ribbon_pane_g1

0xe97d,	// (0x0004bf25) bg_main_sp_fs_ribbon_pane_g2

0xe986,	// (0x0004bf2e) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdd1,	// (0x0004d379) bg_main_sp_fs_ribbon_pane_g

0xe98e,	// (0x0004bf36) main_sp_fs_ribbon_scheduler_pane_g1

0xe997,	// (0x0004bf3f) main_sp_fs_ribbon_scheduler_pane_g2

0xe9a0,	// (0x0004bf48) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdd8,	// (0x0004d380) main_sp_fs_ribbon_scheduler_pane_g

0xe9a9,	// (0x0004bf51) list_cale_mrui_pane

0x9546,	// (0x00046aee) sp_fs_scroll_pane_cp07_ParamLimits

0x9546,	// (0x00046aee) sp_fs_scroll_pane_cp07

0x9562,	// (0x00046b0a) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x9562,	// (0x00046b0a) bg_sp_fs_schedule_viewer_highlight

0xe9b6,	// (0x0004bf5e) list_single_sp_fs_schedule_track_pane_cp01

0xe9be,	// (0x0004bf66) list_sp_fs_schedule_track_pane

0xe9c6,	// (0x0004bf6e) sp_fs_scroll_pane_cp06_ParamLimits

0xe9c6,	// (0x0004bf6e) sp_fs_scroll_pane_cp06

0xccfc,	// (0x0004a2a4) bgmain_sp_fs_calendar_pane_g1

0x1d37,	// (0x0003f2df) list_single_cale_mrui_pane_ParamLimits

0x1d37,	// (0x0003f2df) list_single_cale_mrui_pane

0x1d65,	// (0x0003f30d) list_single_cale_mrui_row_pane_ParamLimits

0x1d65,	// (0x0003f30d) list_single_cale_mrui_row_pane

0x1d72,	// (0x0003f31a) list_single_cale_mrui_row_pane_g1_ParamLimits

0x1d72,	// (0x0003f31a) list_single_cale_mrui_row_pane_g1

0x1daa,	// (0x0003f352) list_single_cale_mrui_row_pane_t1_ParamLimits

0x1daa,	// (0x0003f352) list_single_cale_mrui_row_pane_t1

0x1dbc,	// (0x0003f364) list_single_cale_mrui_row_pane_t2_ParamLimits

0x1dbc,	// (0x0003f364) list_single_cale_mrui_row_pane_t2

0x1e22,	// (0x0003f3ca) list_single_cale_mrui_row_pane_t3_ParamLimits

0x1e22,	// (0x0003f3ca) list_single_cale_mrui_row_pane_t3

0x1e51,	// (0x0003f3f9) list_single_cale_mrui_row_pane_t4_ParamLimits

0x1e51,	// (0x0003f3f9) list_single_cale_mrui_row_pane_t4

0x0003,

0xfde6,	// (0x0004d38e) list_single_cale_mrui_row_pane_t_ParamLimits

0xfde6,	// (0x0004d38e) list_single_cale_mrui_row_pane_t

0x1e80,	// (0x0003f428) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x1e80,	// (0x0003f428) list_single_cmail_header_editor_pane_bg_cp01

0x1ea0,	// (0x0003f448) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x1ea0,	// (0x0003f448) list_single_cmail_header_editor_pane_bg_cp02

0x956f,	// (0x00046b17) main_radioblah_text_pane_t1_ParamLimits

0x956f,	// (0x00046b17) main_radioblah_text_pane_t1

0xe9ff,	// (0x0004bfa7) cam6_indi_pane_cp01

0xea07,	// (0x0004bfaf) cam6_mode_pane_cp01

0xea0f,	// (0x0004bfb7) cam6_pano_pane

0xea18,	// (0x0004bfc0) cam6_zoom_pane_cp01

0xea20,	// (0x0004bfc8) cam6_pano_image_pane

0xea2b,	// (0x0004bfd3) cam6_pano_pane_g1

0xe2f2,	// (0x0004b89a) cam6_pano_pane_g2

0xea34,	// (0x0004bfdc) cam6_pano_pane_g3

0xea3d,	// (0x0004bfe5) cam6_pano_pane_g4

0xd2eb,	// (0x0004a893) cam6_pano_pane_g5

0xea46,	// (0x0004bfee) cam6_pano_pane_g6

0xe9ea,	// (0x0004bf92) cam6_pano_pane_g7

0xea50,	// (0x0004bff8) cam6_pano_pane_g8

0xea59,	// (0x0004c001) cam6_pano_pane_g9

0x0008,

0xfdef,	// (0x0004d397) cam6_pano_pane_g

0xa143,	// (0x000476eb) main_browser_tag_pane

0xe8a5,	// (0x0004be4d) grid_navstr_albumart_pane

0xea64,	// (0x0004c00c) cell_navstr_albumart_pane_ParamLimits

0xea64,	// (0x0004c00c) cell_navstr_albumart_pane

0xea84,	// (0x0004c02c) cell_navstr_albumart_pane_g1

0xc705,	// (0x00049cad) cell_navstr_albumart_pane_g2

0xc715,	// (0x00049cbd) cell_navstr_albumart_pane_g3

0xc70d,	// (0x00049cb5) cell_navstr_albumart_pane_g4

0x0003,

0xfe02,	// (0x0004d3aa) cell_navstr_albumart_pane_g

0x958a,	// (0x00046b32) bt_list_pane_ParamLimits

0x958a,	// (0x00046b32) bt_list_pane

0x95aa,	// (0x00046b52) bt_list_pane_t1

0x95b9,	// (0x00046b61) bt_list_pane_t2

0x0001,

0xfe0b,	// (0x0004d3b3) bt_list_pane_t

0xa143,	// (0x000476eb) main_cale_prevew_pane

0x95c8,	// (0x00046b70) popup_cale_preview_window_ParamLimits

0x95c8,	// (0x00046b70) popup_cale_preview_window

0xb494,	// (0x00048a3c) bg_popup_preview_window_pane_cp05_ParamLimits

0xb494,	// (0x00048a3c) bg_popup_preview_window_pane_cp05

0xea8c,	// (0x0004c034) list_cale_preview_pane_ParamLimits

0xea8c,	// (0x0004c034) list_cale_preview_pane

0x95e1,	// (0x00046b89) list_double_cale_preview_pane_ParamLimits

0x95e1,	// (0x00046b89) list_double_cale_preview_pane

0x95f3,	// (0x00046b9b) list_single_cale_preview_pane_ParamLimits

0x95f3,	// (0x00046b9b) list_single_cale_preview_pane

0x9609,	// (0x00046bb1) list_single_cale_preview_pane_g1

0x9611,	// (0x00046bb9) list_single_cale_preview_pane_t1_ParamLimits

0x9611,	// (0x00046bb9) list_single_cale_preview_pane_t1

0x9626,	// (0x00046bce) list_double_cale_preview_pane_g1

0x962e,	// (0x00046bd6) list_double_cale_preview_pane_t1_ParamLimits

0x962e,	// (0x00046bd6) list_double_cale_preview_pane_t1

0x9643,	// (0x00046beb) list_double_cale_preview_pane_t2_ParamLimits

0x9643,	// (0x00046beb) list_double_cale_preview_pane_t2

0x0001,

0xfe10,	// (0x0004d3b8) list_double_cale_preview_pane_t_ParamLimits

0xfe10,	// (0x0004d3b8) list_double_cale_preview_pane_t

0xa143,	// (0x000476eb) main_ezdial_pane

0xb494,	// (0x00048a3c) main_sp_fs_email_pane_ParamLimits

0x916a,	// (0x00046712) cmail_ddmenu_btn01_pane_ParamLimits

0x916a,	// (0x00046712) cmail_ddmenu_btn01_pane

0x9187,	// (0x0004672f) cmail_ddmenu_btn02_pane_ParamLimits

0x9187,	// (0x0004672f) cmail_ddmenu_btn02_pane

0x91a5,	// (0x0004674d) cmail_ddmenu_btn03_pane_ParamLimits

0x91a5,	// (0x0004674d) cmail_ddmenu_btn03_pane

0x9240,	// (0x000467e8) main_sp_fs_ctrlbar_pane_ParamLimits

0x9256,	// (0x000467fe) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x935d,	// (0x00046905) list_cmail_body_pane_ParamLimits

0xe825,	// (0x0004bdcd) bg_button_pane_cp12

0xe82e,	// (0x0004bdd6) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe82e,	// (0x0004bdd6) list_single_cmail_header_detail_pane_g3

0x1c7e,	// (0x0003f226) list_single_cmail_header_detail_pane_t2_ParamLimits

0x1c7e,	// (0x0003f226) list_single_cmail_header_detail_pane_t2

0x0001,

0xfd93,	// (0x0004d33b) list_single_cmail_header_detail_pane_t_ParamLimits

0xfd93,	// (0x0004d33b) list_single_cmail_header_detail_pane_t

0x1cd6,	// (0x0003f27e) phacti_term_pane_t2_ParamLimits

0x1cd6,	// (0x0003f27e) phacti_term_pane_t2

0x0001,

0xfd9d,	// (0x0004d345) phacti_term_pane_t_ParamLimits

0xfd9d,	// (0x0004d345) phacti_term_pane_t

0xea98,	// (0x0004c040) aid_size_list_single_double

0x965b,	// (0x00046c03) popup_ezdial_listscroll_window

0x967c,	// (0x00046c24) popup_number_entry_window_cp01

0xaa79,	// (0x00048021) bg_popup_call_pane_cp09

0xeaa4,	// (0x0004c04c) ezdial_list_pane

0xeaac,	// (0x0004c054) scroll_pane_cp23

0xcae1,	// (0x0004a089) bg_button_pane_cp028_ParamLimits

0xcae1,	// (0x0004a089) bg_button_pane_cp028

0x968a,	// (0x00046c32) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x968a,	// (0x00046c32) cmail_ddmenu_btn01_pane_g1

0x969a,	// (0x00046c42) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x969a,	// (0x00046c42) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe15,	// (0x0004d3bd) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe15,	// (0x0004d3bd) cmail_ddmenu_btn01_pane_g

0xeab4,	// (0x0004c05c) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeab4,	// (0x0004c05c) cmail_ddmenu_btn01_pane_t1

0xc8f4,	// (0x00049e9c) bg_button_pane_cp029_ParamLimits

0xc8f4,	// (0x00049e9c) bg_button_pane_cp029

0x969a,	// (0x00046c42) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x969a,	// (0x00046c42) cmail_ddmenu_btn02_pane_g1

0x96b2,	// (0x00046c5a) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x96b2,	// (0x00046c5a) cmail_ddmenu_btn02_pane_t1

0xd8d2,	// (0x0004ae7a) bg_button_pane_cp031_ParamLimits

0xd8d2,	// (0x0004ae7a) bg_button_pane_cp031

0x969a,	// (0x00046c42) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x969a,	// (0x00046c42) cmail_ddmenu_btn03_pane_g1

0x96b2,	// (0x00046c5a) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x96b2,	// (0x00046c5a) cmail_ddmenu_btn03_pane_t1

0x6f42,	// (0x000444ea) cell_dialer2_keypad_pane_t1_ParamLimits

0x6f5c,	// (0x00044504) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x6f5c,	// (0x00044504) cell_dialer2_keypad_pane_t1_copy1

0x8b24,	// (0x000460cc) ncimui_group_button_pane

0xb494,	// (0x00048a3c) main_sp_fs_calendar_pane_ParamLimits

0x9384,	// (0x0004692c) list_single_cmail_header_caption_pane_ParamLimits

0x1ceb,	// (0x0003f293) aid_recal_txt_sm_pane

0xa143,	// (0x000476eb) mian_recal_day_pane

0x1d25,	// (0x0003f2cd) popup_sp_fs_cale_preview_window_ParamLimits

0xeac9,	// (0x0004c071) list_recal_day_pane

0x1ed7,	// (0x0003f47f) list_single_recal_day_pane_ParamLimits

0x1ed7,	// (0x0003f47f) list_single_recal_day_pane

0xeaf0,	// (0x0004c098) list_single_recal_day_pane_g1_ParamLimits

0xeaf0,	// (0x0004c098) list_single_recal_day_pane_g1

0x1ee9,	// (0x0003f491) list_single_recal_day_pane_g2_ParamLimits

0x1ee9,	// (0x0003f491) list_single_recal_day_pane_g2

0x1ef5,	// (0x0003f49d) list_single_recal_day_pane_g3_ParamLimits

0x1ef5,	// (0x0003f49d) list_single_recal_day_pane_g3

0x1f01,	// (0x0003f4a9) list_single_recal_day_pane_g4_ParamLimits

0x1f01,	// (0x0003f4a9) list_single_recal_day_pane_g4

0x1f0f,	// (0x0003f4b7) list_single_recal_day_pane_g5_ParamLimits

0x1f0f,	// (0x0003f4b7) list_single_recal_day_pane_g5

0x1f25,	// (0x0003f4cd) list_single_recal_day_pane_g6_ParamLimits

0x1f25,	// (0x0003f4cd) list_single_recal_day_pane_g6

0x0004,

0xfe24,	// (0x0004d3cc) list_single_recal_day_pane_g_ParamLimits

0xfe24,	// (0x0004d3cc) list_single_recal_day_pane_g

0x1f39,	// (0x0003f4e1) list_single_recal_day_pane_t1

0x1f4b,	// (0x0003f4f3) list_single_recal_day_pane_t2

0x0001,

0xfe2f,	// (0x0004d3d7) list_single_recal_day_pane_t

0x96d6,	// (0x00046c7e) ncimui_query_button_pane_ParamLimits

0x96d6,	// (0x00046c7e) ncimui_query_button_pane

0x96e6,	// (0x00046c8e) ncimui_query_button_pane_t1_ParamLimits

0x96e6,	// (0x00046c8e) ncimui_query_button_pane_t1

0xeafc,	// (0x0004c0a4) ncimui_query_button_pane_t2_ParamLimits

0xeafc,	// (0x0004c0a4) ncimui_query_button_pane_t2

0x0001,

0xfe34,	// (0x0004d3dc) ncimui_query_button_pane_t_ParamLimits

0xfe34,	// (0x0004d3dc) ncimui_query_button_pane_t

0x96f9,	// (0x00046ca1) query_button_pane_ParamLimits

0x96f9,	// (0x00046ca1) query_button_pane

0xa143,	// (0x000476eb) bg_button_pane_cp0028

0xeb0f,	// (0x0004c0b7) query_button_pane_t1

0x52ea,	// (0x00042892) main_tport_pane_ParamLimits

0x9267,	// (0x0004680f) bg_popup_window_pane_cp01_ParamLimits

0x9267,	// (0x0004680f) bg_popup_window_pane_cp01

0x9275,	// (0x0004681d) heading_pane_cp08_ParamLimits

0x9275,	// (0x0004681d) heading_pane_cp08

0x9283,	// (0x0004682b) heading_pane_cp07_ParamLimits

0x9283,	// (0x0004682b) heading_pane_cp07

0x92f2,	// (0x0004689a) cell_tport_appsw_pane_g2

0x0002,

0xfd80,	// (0x0004d328) cell_tport_appsw_pane_g

0x0f6d,	// (0x0003e515) input_candi_list_open_g1

0xae9e,	// (0x00048446) list_cale_time_pane_g6_ParamLimits

0xae9e,	// (0x00048446) list_cale_time_pane_g6

0x5d6f,	// (0x00043317) aid_size_touch_calib_1_ParamLimits

0x5d6f,	// (0x00043317) aid_size_touch_calib_1

0x5d7b,	// (0x00043323) aid_size_touch_calib_2_ParamLimits

0x5d7b,	// (0x00043323) aid_size_touch_calib_2

0x5d89,	// (0x00043331) aid_size_touch_calib_3_ParamLimits

0x5d89,	// (0x00043331) aid_size_touch_calib_3

0x5d99,	// (0x00043341) aid_size_touch_calib_4_ParamLimits

0x5d99,	// (0x00043341) aid_size_touch_calib_4

0x5da7,	// (0x0004334f) main_touch_calib_button_group_pane_ParamLimits

0x5da7,	// (0x0004334f) main_touch_calib_button_group_pane

0x5db5,	// (0x0004335d) main_touch_calib_pane_g1_ParamLimits

0x5dc1,	// (0x00043369) main_touch_calib_pane_g2_ParamLimits

0x5dcd,	// (0x00043375) main_touch_calib_pane_g3_ParamLimits

0x5dd9,	// (0x00043381) main_touch_calib_pane_g4_ParamLimits

0xf736,	// (0x0004ccde) main_touch_calib_pane_g_ParamLimits

0x5de5,	// (0x0004338d) main_touch_calib_pane_t1_ParamLimits

0x5dfe,	// (0x000433a6) main_touch_calib_pane_t2_ParamLimits

0x5e17,	// (0x000433bf) main_touch_calib_pane_t3_ParamLimits

0x5e2d,	// (0x000433d5) main_touch_calib_pane_t4_ParamLimits

0x5e43,	// (0x000433eb) main_touch_calib_pane_t5_ParamLimits

0xf73f,	// (0x0004cce7) main_touch_calib_pane_t_ParamLimits

0xd08b,	// (0x0004a633) list_single_fp_cale_pane_g3_ParamLimits

0xd08b,	// (0x0004a633) list_single_fp_cale_pane_g3

0xb494,	// (0x00048a3c) bg_button_pane_cp012_ParamLimits

0xb494,	// (0x00048a3c) bg_vkb2_func_pane_cp03_ParamLimits

0x7dc3,	// (0x0004536b) cell_vitu2_function_top_pane_g1_ParamLimits

0xb494,	// (0x00048a3c) bg_vkb2_func_pane_cp04_ParamLimits

0x8aac,	// (0x00046054) main_ncimui_button_group_pane_ParamLimits

0x8aac,	// (0x00046054) main_ncimui_button_group_pane

0x8b12,	// (0x000460ba) main_ncimui_pane_t3_ParamLimits

0x8b12,	// (0x000460ba) main_ncimui_pane_t3

0xe8bb,	// (0x0004be63) phacti_button_group_pane

0xea98,	// (0x0004c040) aid_size_list_single_double_ParamLimits

0x965b,	// (0x00046c03) popup_ezdial_listscroll_window_ParamLimits

0x967c,	// (0x00046c24) popup_number_entry_window_cp01_ParamLimits

0x9706,	// (0x00046cae) phacti_button_pane_ParamLimits

0x9706,	// (0x00046cae) phacti_button_pane

0xa143,	// (0x000476eb) bg_button_pane_cp14

0xeb1d,	// (0x0004c0c5) phacti_button_pane_t1

0x9717,	// (0x00046cbf) main_touch_calib_button_pane_ParamLimits

0x9717,	// (0x00046cbf) main_touch_calib_button_pane

0xa8b4,	// (0x00047e5c) bg_button_pane_cp18_ParamLimits

0xa8b4,	// (0x00047e5c) bg_button_pane_cp18

0xeb2b,	// (0x0004c0d3) main_touch_calib_button_pane_t1_ParamLimits

0xeb2b,	// (0x0004c0d3) main_touch_calib_button_pane_t1

0xeb41,	// (0x0004c0e9) main_touch_calib_button_pane_t2_ParamLimits

0xeb41,	// (0x0004c0e9) main_touch_calib_button_pane_t2

0x0001,

0xfe39,	// (0x0004d3e1) main_touch_calib_button_pane_t_ParamLimits

0xfe39,	// (0x0004d3e1) main_touch_calib_button_pane_t

0xa143,	// (0x000476eb) cell_ncimui_button_pane

0xa143,	// (0x000476eb) bg_button_pane_cp032

0xeb5f,	// (0x0004c107) cell_ncimui_button_pane_t1

0x6fb8,	// (0x00044560) image3_infobar_pane_ParamLimits

0x6fb8,	// (0x00044560) image3_infobar_pane

0x8ecf,	// (0x00046477) fs_bigclock_status_pane_ParamLimits

0x8ecf,	// (0x00046477) fs_bigclock_status_pane

0x8edc,	// (0x00046484) main_fs_bigclock_clock_pane_ParamLimits

0x8edc,	// (0x00046484) main_fs_bigclock_clock_pane

0x8ef0,	// (0x00046498) main_fs_bigclock_indi_pane_ParamLimits

0x8ef0,	// (0x00046498) main_fs_bigclock_indi_pane

0x8f18,	// (0x000464c0) main_fs_bigclock_swipe_pane_ParamLimits

0x8f18,	// (0x000464c0) main_fs_bigclock_swipe_pane

0xa143,	// (0x000476eb) main_fs_clock_dumped_data

0xe3ff,	// (0x0004b9a7) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe3ff,	// (0x0004b9a7) list_single_fs_bigclock_indicator_pane_g1

0xe41a,	// (0x0004b9c2) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe41a,	// (0x0004b9c2) list_single_fs_bigclock_indicator_pane_g2

0xe434,	// (0x0004b9dc) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe434,	// (0x0004b9dc) list_single_fs_bigclock_indicator_pane_g3

0xe44e,	// (0x0004b9f6) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe44e,	// (0x0004b9f6) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc5d,	// (0x0004d205) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc5d,	// (0x0004d205) list_single_fs_bigclock_indicator_pane_g

0xe479,	// (0x0004ba21) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe479,	// (0x0004ba21) list_single_fs_bigclock_indicator_pane_t1

0xe4a1,	// (0x0004ba49) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe4a1,	// (0x0004ba49) list_single_fs_bigclock_indicator_pane_t2

0xe4c9,	// (0x0004ba71) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe4c9,	// (0x0004ba71) list_single_fs_bigclock_indicator_pane_t3

0xe4f1,	// (0x0004ba99) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe4f1,	// (0x0004ba99) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc68,	// (0x0004d210) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc68,	// (0x0004d210) list_single_fs_bigclock_indicator_pane_t

0xeb6d,	// (0x0004c115) image3_infobar_fav_pane_ParamLimits

0xeb6d,	// (0x0004c115) image3_infobar_fav_pane

0xeb7d,	// (0x0004c125) image3_infobar_loc_pane_ParamLimits

0xeb7d,	// (0x0004c125) image3_infobar_loc_pane

0xeb91,	// (0x0004c139) image3_infobar_time_pane_ParamLimits

0xeb91,	// (0x0004c139) image3_infobar_time_pane

0xccfc,	// (0x0004a2a4) image3_infobar_time_pane_g1

0xeba1,	// (0x0004c149) image3_infobar_time_pane_t1

0xccfc,	// (0x0004a2a4) image3_infobar_loc_pane_g1

0xebaf,	// (0x0004c157) image3_infobar_loc_pane_g2

0x0001,

0xfe3e,	// (0x0004d3e6) image3_infobar_loc_pane_g

0xebb7,	// (0x0004c15f) image3_infobar_loc_pane_t1

0xccfc,	// (0x0004a2a4) image3_infobar_fav_pane_g1

0xebc5,	// (0x0004c16d) image3_infobar_fav_pane_g2

0x0001,

0xfe43,	// (0x0004d3eb) image3_infobar_fav_pane_g

0xebcd,	// (0x0004c175) fs_bigclock_status_battery_pane

0xebd6,	// (0x0004c17e) fs_bigclock_status_signal_pane

0xebdf,	// (0x0004c187) fs_bigclock_status_title_pane

0xebe8,	// (0x0004c190) fs_bigclock_status_signal_pane_g1

0xebf1,	// (0x0004c199) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe48,	// (0x0004d3f0) fs_bigclock_status_signal_pane_g

0xebf9,	// (0x0004c1a1) fs_bigclock_status_battery_pane_g1

0xec02,	// (0x0004c1aa) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe4d,	// (0x0004d3f5) fs_bigclock_status_battery_pane_g

0xec0a,	// (0x0004c1b2) fs_bigclock_status_title_pane_t1

0x9727,	// (0x00046ccf) main_fs_bigclock_clock_pane_g1

0x9727,	// (0x00046ccf) main_fs_bigclock_clock_pane_g2

0x9734,	// (0x00046cdc) main_fs_bigclock_clock_pane_g3

0x9734,	// (0x00046cdc) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe52,	// (0x0004d3fa) main_fs_bigclock_clock_pane_g

0x9740,	// (0x00046ce8) main_fs_bigclock_clock_pane_t1

0x9753,	// (0x00046cfb) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe5b,	// (0x0004d403) main_fs_bigclock_clock_pane_t

0xec18,	// (0x0004c1c0) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec18,	// (0x0004c1c0) list_single_fs_bigclock_indicator_pane

0xec29,	// (0x0004c1d1) list_single_fs_bigclock_pane_ParamLimits

0xec29,	// (0x0004c1d1) list_single_fs_bigclock_pane

0xec4f,	// (0x0004c1f7) main_fs_bigclock_indicator_pane_t1

0xec5e,	// (0x0004c206) list_single_fs_bigclock_pane_g1

0xec66,	// (0x0004c20e) list_single_fs_bigclock_pane_t1

0xccfc,	// (0x0004a2a4) main_fs_bigclock_swipe_pane_g1

0xeca9,	// (0x0004c251) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe6c,	// (0x0004d414) main_fs_bigclock_swipe_pane_g

0xecb1,	// (0x0004c259) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xecb1,	// (0x0004c259) main_fs_bigclock_swipe_pane_t1

0x437a,	// (0x00041922) call_type_pane_ParamLimits

0xa143,	// (0x000476eb) main_btmg_pane

0x1d9e,	// (0x0003f346) list_single_cale_mrui_row_pane_g2_ParamLimits

0x1d9e,	// (0x0003f346) list_single_cale_mrui_row_pane_g2

0x0002,

0xfddf,	// (0x0004d387) list_single_cale_mrui_row_pane_g_ParamLimits

0xfddf,	// (0x0004d387) list_single_cale_mrui_row_pane_g

0x1ec6,	// (0x0003f46e) list_recal_vselct_arw_lo_pane

0xeae8,	// (0x0004c090) list_recal_vselct_arw_up_pane

0x1ece,	// (0x0003f476) list_recal_vselct_pane

0x97aa,	// (0x00046d52) btmg_button_pane

0x97b6,	// (0x00046d5e) main_btmg_pane_g1

0xa143,	// (0x000476eb) bg_button_pane_cp044

0xecce,	// (0x0004c276) btmg_button_pane_t1

0xc8e0,	// (0x00049e88) aid_listscroll_gen

0xb494,	// (0x00048a3c) main_cntbar_detail_pane

0xe807,	// (0x0004bdaf) list_cmail_folder_pane

0xcd25,	// (0x0004a2cd) sp_fs_scroll_pane_cp03_ParamLimits

0x1f5d,	// (0x0003f505) list_single_fs_dyc_pane_cp01_ParamLimits

0x1f5d,	// (0x0003f505) list_single_fs_dyc_pane_cp01

0xecdc,	// (0x0004c284) aid_size_cmail_indent

0x1f89,	// (0x0003f531) list_single_dyc_row_pane_cp01

0x97de,	// (0x00046d86) cntbar_detail_list_pane_ParamLimits

0x97de,	// (0x00046d86) cntbar_detail_list_pane

0x9818,	// (0x00046dc0) main_cntbar_detail_cont_pane_ParamLimits

0x9818,	// (0x00046dc0) main_cntbar_detail_cont_pane

0x436e,	// (0x00041916) scroll_pane_cp032_ParamLimits

0x436e,	// (0x00041916) scroll_pane_cp032

0x9824,	// (0x00046dcc) cntbar_detail_list_event_pane_ParamLimits

0x9824,	// (0x00046dcc) cntbar_detail_list_event_pane

0x97ea,	// (0x00046d92) cntbar_detail_list_shct_pane

0xad20,	// (0x000482c8) aid_list_gen

0xece5,	// (0x0004c28d) aid_scroll

0xecee,	// (0x0004c296) aid_size_touch_scroll_bar

0x835c,	// (0x00045904) aid_list_double

0x1f92,	// (0x0003f53a) aid_list_single

0x8353,	// (0x000458fb) aid_list_single_lg

0x1f9b,	// (0x0003f543) aid_list_z_g_a_sm

0x1fa3,	// (0x0003f54b) aid_list_z_g_d

0x1fab,	// (0x0003f553) aid_txt_z_prm

0x1fb9,	// (0x0003f561) aid_txt_z_prm_cp01

0x1fc7,	// (0x0003f56f) aid_txt_z_sec

0x9838,	// (0x00046de0) main_cntbar_detail_cont_pane_g1_ParamLimits

0x9838,	// (0x00046de0) main_cntbar_detail_cont_pane_g1

0x9845,	// (0x00046ded) main_cntbar_detail_cont_pane_g2_ParamLimits

0x9845,	// (0x00046ded) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe71,	// (0x0004d419) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe71,	// (0x0004d419) main_cntbar_detail_cont_pane_g

0xecf7,	// (0x0004c29f) main_cntbar_detail_cont_pane_t1

0xed05,	// (0x0004c2ad) main_cntbar_detail_cont_pane_t2

0xed13,	// (0x0004c2bb) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe76,	// (0x0004d41e) main_cntbar_detail_cont_pane_t

0x9851,	// (0x00046df9) cell_cntbar_detail_list_shct_pane_ParamLimits

0x9851,	// (0x00046df9) cell_cntbar_detail_list_shct_pane

0xed21,	// (0x0004c2c9) cntbar_detail_list_shct_pane_g1

0xed2a,	// (0x0004c2d2) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe7d,	// (0x0004d425) cntbar_detail_list_shct_pane_g

0x9865,	// (0x00046e0d) cntbar_detail_list_event_pane_g1_ParamLimits

0x9865,	// (0x00046e0d) cntbar_detail_list_event_pane_g1

0x9871,	// (0x00046e19) cntbar_detail_list_event_pane_g2_ParamLimits

0x9871,	// (0x00046e19) cntbar_detail_list_event_pane_g2

0x0005,

0xfe82,	// (0x0004d42a) cntbar_detail_list_event_pane_g_ParamLimits

0xfe82,	// (0x0004d42a) cntbar_detail_list_event_pane_g

0x98dd,	// (0x00046e85) cntbar_detail_list_event_pane_t1_ParamLimits

0x98dd,	// (0x00046e85) cntbar_detail_list_event_pane_t1

0x98f2,	// (0x00046e9a) cntbar_detail_list_event_pane_t2_ParamLimits

0x98f2,	// (0x00046e9a) cntbar_detail_list_event_pane_t2

0x0002,

0xfe8f,	// (0x0004d437) cntbar_detail_list_event_pane_t_ParamLimits

0xfe8f,	// (0x0004d437) cntbar_detail_list_event_pane_t

0xccfc,	// (0x0004a2a4) cell_cntbar_detail_list_shct_pane_g1

0xb4bc,	// (0x00048a64) navi_pane_mv_g3

0xb494,	// (0x00048a3c) main_cntbar_detail_pane_ParamLimits

0xa143,	// (0x000476eb) main_notif_wgt_pane

0x6c42,	// (0x000441ea) aid_tch_main_mp4_pane_g4

0x6ea1,	// (0x00044449) popup_slider_window_cp02

0x1ebc,	// (0x0003f464) list_recal_day_event_pane

0x97be,	// (0x00046d66) cntbar_detail_btn_pane_ParamLimits

0x97be,	// (0x00046d66) cntbar_detail_btn_pane

0x97ce,	// (0x00046d76) cntbar_detail_btn_pane_cp01_ParamLimits

0x97ce,	// (0x00046d76) cntbar_detail_btn_pane_cp01

0x97ea,	// (0x00046d92) cntbar_detail_list_shct_pane_ParamLimits

0x97f6,	// (0x00046d9e) cntbar_detail_pane_g1_ParamLimits

0x97f6,	// (0x00046d9e) cntbar_detail_pane_g1

0x9802,	// (0x00046daa) cntbar_detail_pane_t1_ParamLimits

0x9802,	// (0x00046daa) cntbar_detail_pane_t1

0x987d,	// (0x00046e25) cntbar_detail_list_event_pane_g3_ParamLimits

0x987d,	// (0x00046e25) cntbar_detail_list_event_pane_g3

0x9895,	// (0x00046e3d) cntbar_detail_list_event_pane_g4_ParamLimits

0x9895,	// (0x00046e3d) cntbar_detail_list_event_pane_g4

0x98ad,	// (0x00046e55) cntbar_detail_list_event_pane_g5_ParamLimits

0x98ad,	// (0x00046e55) cntbar_detail_list_event_pane_g5

0x98c5,	// (0x00046e6d) cntbar_detail_list_event_pane_g6_ParamLimits

0x98c5,	// (0x00046e6d) cntbar_detail_list_event_pane_g6

0x9907,	// (0x00046eaf) cntbar_detail_list_event_pane_t3_ParamLimits

0x9907,	// (0x00046eaf) cntbar_detail_list_event_pane_t3

0x9919,	// (0x00046ec1) popup_notif_wgt_window_ParamLimits

0x9919,	// (0x00046ec1) popup_notif_wgt_window

0x9929,	// (0x00046ed1) popup_submenu_window_cp01_ParamLimits

0x9929,	// (0x00046ed1) popup_submenu_window_cp01

0xaa79,	// (0x00048021) bg_popup_window_pane_cp10

0xed33,	// (0x0004c2db) listscroll_notif_wgt_pane

0xed45,	// (0x0004c2ed) list_notif_wgt_window

0xed4e,	// (0x0004c2f6) scroll_pane_cp033

0x993b,	// (0x00046ee3) list_notif_wgt_row_pane_ParamLimits

0x993b,	// (0x00046ee3) list_notif_wgt_row_pane

0xed57,	// (0x0004c2ff) aid_size_list_notif_wgt_del

0xed64,	// (0x0004c30c) list_notif_wgt_row_pane_g1

0xed70,	// (0x0004c318) list_notif_wgt_row_pane_g2

0xed7f,	// (0x0004c327) list_notif_wgt_row_pane_g3

0x0002,

0xfe96,	// (0x0004d43e) list_notif_wgt_row_pane_g

0xed8c,	// (0x0004c334) list_notif_wgt_row_pane_t1

0xeda2,	// (0x0004c34a) list_notif_wgt_row_pane_t2

0xedb4,	// (0x0004c35c) list_notif_wgt_row_pane_t3

0x0002,

0xfe9d,	// (0x0004d445) list_notif_wgt_row_pane_t

0xd942,	// (0x0004aeea) list_recal_day_event_pane_g1

0xedc6,	// (0x0004c36e) list_recal_day_event_pane_t1

0xa143,	// (0x000476eb) bg_button_pane_cp045

0x994d,	// (0x00046ef5) cntbar_detail_btn_pane_t1

0xc8f4,	// (0x00049e9c) main_callh_pane_ParamLimits

0xc8f4,	// (0x00049e9c) main_callh_pane

0xa143,	// (0x000476eb) main_coverflow0_pane

0xa143,	// (0x000476eb) main_wgtman_pane

0x8f30,	// (0x000464d8) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x8f30,	// (0x000464d8) main_fs_bigclock_unlock_btn_pane

0x92ea,	// (0x00046892) bg_button_pane_cp16

0x92fa,	// (0x000468a2) cell_tport_appsw_pane_g3

0x995b,	// (0x00046f03) cf0_flow_pane_ParamLimits

0x995b,	// (0x00046f03) cf0_flow_pane

0xedd5,	// (0x0004c37d) listscroll_cf0_pane

0xede0,	// (0x0004c388) main_cf0_pane_g1

0x996a,	// (0x00046f12) main_cf0_pane_t1_ParamLimits

0x996a,	// (0x00046f12) main_cf0_pane_t1

0x997e,	// (0x00046f26) main_cf0_pane_t2_ParamLimits

0x997e,	// (0x00046f26) main_cf0_pane_t2

0x0001,

0xfea9,	// (0x0004d451) main_cf0_pane_t_ParamLimits

0xfea9,	// (0x0004d451) main_cf0_pane_t

0xedf2,	// (0x0004c39a) scroll_pane_cp11

0x9992,	// (0x00046f3a) cf0_flow_pane_g1

0x999a,	// (0x00046f42) cf0_flow_pane_g2

0x0001,

0xfeae,	// (0x0004d456) cf0_flow_pane_g

0x99a2,	// (0x00046f4a) cf0_flow_pane_t1

0xa143,	// (0x000476eb) main_call6_pane

0xa143,	// (0x000476eb) main_calllock_pane

0x99b0,	// (0x00046f58) call6_btn_grp_pane_ParamLimits

0x99b0,	// (0x00046f58) call6_btn_grp_pane

0x99bf,	// (0x00046f67) call6_pane_g1_ParamLimits

0x99bf,	// (0x00046f67) call6_pane_g1

0x99cf,	// (0x00046f77) popup_call6_1st_window_ParamLimits

0x99cf,	// (0x00046f77) popup_call6_1st_window

0x99dd,	// (0x00046f85) popup_call6_2nd_window_ParamLimits

0x99dd,	// (0x00046f85) popup_call6_2nd_window

0x99eb,	// (0x00046f93) cell_call6_btn_pane_ParamLimits

0x99eb,	// (0x00046f93) cell_call6_btn_pane

0xaa79,	// (0x00048021) bg_popup_call2_in_pane_cp03

0xedfd,	// (0x0004c3a5) popup_call6_1st_window_g1

0xee05,	// (0x0004c3ad) popup_call6_1st_window_g2

0xee0d,	// (0x0004c3b5) popup_call6_1st_window_g3

0x0002,

0xfeb3,	// (0x0004d45b) popup_call6_1st_window_g

0xee15,	// (0x0004c3bd) popup_call6_1st_window_t1

0xee24,	// (0x0004c3cc) popup_call6_1st_window_t2

0xee32,	// (0x0004c3da) popup_call6_1st_window_t3

0x0002,

0xfeba,	// (0x0004d462) popup_call6_1st_window_t

0xaa79,	// (0x00048021) bg_popup_call2_in_pane_cp04

0xedfd,	// (0x0004c3a5) popup_call6_2nd_window_g1

0xee05,	// (0x0004c3ad) popup_call6_2nd_window_g2

0xee0d,	// (0x0004c3b5) popup_call6_2nd_window_g3

0x0002,

0xfeb3,	// (0x0004d45b) popup_call6_2nd_window_g

0xee15,	// (0x0004c3bd) popup_call6_2nd_window_t1

0xa143,	// (0x000476eb) bg_button_pane_cp15

0xee40,	// (0x0004c3e8) cell_call6_btn_pane_g1

0x99fa,	// (0x00046fa2) cell_call6_btn_pane_t1

0x9a09,	// (0x00046fb1) listscroll_wgtman_pane_ParamLimits

0x9a09,	// (0x00046fb1) listscroll_wgtman_pane

0x9a25,	// (0x00046fcd) wgtman_btn_pane_ParamLimits

0x9a25,	// (0x00046fcd) wgtman_btn_pane

0xb29b,	// (0x00048843) aid_scroll_copy1

0xee49,	// (0x0004c3f1) list_wgtman_pane

0x9a5a,	// (0x00047002) wgtman_btn_pane_g1_ParamLimits

0x9a5a,	// (0x00047002) wgtman_btn_pane_g1

0x9a82,	// (0x0004702a) wgtman_btn_pane_t1_ParamLimits

0x9a82,	// (0x0004702a) wgtman_btn_pane_t1

0xee53,	// (0x0004c3fb) wgtman_btn_pane_t2_ParamLimits

0xee53,	// (0x0004c3fb) wgtman_btn_pane_t2

0x0001,

0xfec1,	// (0x0004d469) wgtman_btn_pane_t_ParamLimits

0xfec1,	// (0x0004d469) wgtman_btn_pane_t

0x9ab9,	// (0x00047061) listrow_wgtman_pane_ParamLimits

0x9ab9,	// (0x00047061) listrow_wgtman_pane

0x9ad4,	// (0x0004707c) listrow_wgtman_pane_g1

0x9ae1,	// (0x00047089) listrow_wgtman_pane_g2

0x0001,

0xfec6,	// (0x0004d46e) listrow_wgtman_pane_g

0x1fd5,	// (0x0003f57d) listrow_wgtman_pane_t1

0x1fed,	// (0x0003f595) listrow_wgtman_pane_t2

0x0001,

0xfecb,	// (0x0004d473) listrow_wgtman_pane_t

0x2013,	// (0x0003f5bb) wait_bar_pane_cp09

0xee6a,	// (0x0004c412) main_calllock_btn_pane

0xee74,	// (0x0004c41c) main_calllock_pane_g1

0xa143,	// (0x000476eb) bg_button_pane_cp17

0xee40,	// (0x0004c3e8) main_calllock_btn_pane_g1

0xee80,	// (0x0004c428) main_calllock_btn_pane_t1

0xa143,	// (0x000476eb) main_dialer3_pane

0xa143,	// (0x000476eb) main_fmrd2_pane

0xccfc,	// (0x0004a2a4) main_fs_bigclock_unlock_btn_pane_g1

0x9b07,	// (0x000470af) main_fs_bigclock_unlock_btn_pane_t1

0x9b15,	// (0x000470bd) area_fmrd2_info_pane_ParamLimits

0x9b15,	// (0x000470bd) area_fmrd2_info_pane

0x9b23,	// (0x000470cb) area_fmrd2_visual_pane_ParamLimits

0x9b23,	// (0x000470cb) area_fmrd2_visual_pane

0x9b31,	// (0x000470d9) fmrd2_indi_pane_ParamLimits

0x9b31,	// (0x000470d9) fmrd2_indi_pane

0x9b3e,	// (0x000470e6) area_fmrd2_visual_pane_g1

0x9b46,	// (0x000470ee) area_fmrd2_visual_pane_t1

0x9b56,	// (0x000470fe) area_fmrd2_visual_pane_t2

0x9b66,	// (0x0004710e) area_fmrd2_visual_pane_t3

0x0002,

0xfed5,	// (0x0004d47d) area_fmrd2_visual_pane_t

0x9b76,	// (0x0004711e) area_fmrd2_info_pane_g1

0x9b7e,	// (0x00047126) area_fmrd2_info_pane_t1

0x9b8e,	// (0x00047136) area_fmrd2_info_pane_t2

0x9b9e,	// (0x00047146) area_fmrd2_info_pane_t3

0x9bae,	// (0x00047156) area_fmrd2_info_pane_t4

0x0003,

0xfedc,	// (0x0004d484) area_fmrd2_info_pane_t

0x9bbc,	// (0x00047164) fmrd2_indi_pane_t1

0x9bcc,	// (0x00047174) fmrd2_indi_pane_t2

0x9bdc,	// (0x00047184) fmrd2_indi_pane_t3

0x0002,

0xfee5,	// (0x0004d48d) fmrd2_indi_pane_t

0xe45d,	// (0x0004ba05) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe45d,	// (0x0004ba05) list_single_fs_bigclock_indicator_pane_g5

0xe50e,	// (0x0004bab6) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe50e,	// (0x0004bab6) list_single_fs_bigclock_indicator_pane_t5

0x947f,	// (0x00046a27) aid_cell_bcale_month_pane_ParamLimits

0x947f,	// (0x00046a27) aid_cell_bcale_month_pane

0x949d,	// (0x00046a45) bcale_month_pane_ParamLimits

0x949d,	// (0x00046a45) bcale_month_pane

0x94bb,	// (0x00046a63) bcale_preview_pane_ParamLimits

0x94bb,	// (0x00046a63) bcale_preview_pane

0xec66,	// (0x0004c20e) list_single_fs_bigclock_pane_t1_ParamLimits

0xec85,	// (0x0004c22d) list_single_fs_bigclock_pane_t2_ParamLimits

0xec85,	// (0x0004c22d) list_single_fs_bigclock_pane_t2

0x0001,

0xfe67,	// (0x0004d40f) list_single_fs_bigclock_pane_t_ParamLimits

0xfe67,	// (0x0004d40f) list_single_fs_bigclock_pane_t

0x9aff,	// (0x000470a7) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfed0,	// (0x0004d478) main_fs_bigclock_unlock_btn_pane_g

0x9bea,	// (0x00047192) aid_dia3_key_size_ParamLimits

0x9bea,	// (0x00047192) aid_dia3_key_size

0x9bf6,	// (0x0004719e) aid_dia3_listrow_size_ParamLimits

0x9bf6,	// (0x0004719e) aid_dia3_listrow_size

0x9c06,	// (0x000471ae) dia3_keypad_fun_pane_ParamLimits

0x9c06,	// (0x000471ae) dia3_keypad_fun_pane

0x9c18,	// (0x000471c0) dia3_keypad_num_pane_ParamLimits

0x9c18,	// (0x000471c0) dia3_keypad_num_pane

0x9c2a,	// (0x000471d2) dia3_listscroll_pane_ParamLimits

0x9c2a,	// (0x000471d2) dia3_listscroll_pane

0x9c38,	// (0x000471e0) dia3_numentry_pane_ParamLimits

0x9c38,	// (0x000471e0) dia3_numentry_pane

0xee8f,	// (0x0004c437) dia3_list_pane

0xee9a,	// (0x0004c442) scroll_pane_cp12

0xa143,	// (0x000476eb) bg_dia3_numentry_pane

0x9c46,	// (0x000471ee) dia3_numentry_pane_t1

0x9c55,	// (0x000471fd) cell_dia3_key_num_pane

0x9c5d,	// (0x00047205) cell_dia3_key0_fun_pane_ParamLimits

0x9c5d,	// (0x00047205) cell_dia3_key0_fun_pane

0x9c6a,	// (0x00047212) cell_dia3_key1_fun_pane_ParamLimits

0x9c6a,	// (0x00047212) cell_dia3_key1_fun_pane

0x9c77,	// (0x0004721f) dia3_listrow_pane

0xe1b0,	// (0x0004b758) bg_dia3_numentry_pane_g1

0xa143,	// (0x000476eb) bg_button_pane_cp21

0xeea5,	// (0x0004c44d) cell_dia3_key_num_pane_t1

0xeeb3,	// (0x0004c45b) cell_dia3_key_num_pane_t2

0xeec2,	// (0x0004c46a) cell_dia3_key_num_pane_t3

0xeed1,	// (0x0004c479) cell_dia3_key_num_pane_t4

0x0003,

0xfeec,	// (0x0004d494) cell_dia3_key_num_pane_t

0xa143,	// (0x000476eb) bg_button_pane_cp19

0x9c84,	// (0x0004722c) cell_dia3_key0_fun_pane_g1

0xa143,	// (0x000476eb) bg_button_pane_cp20

0x9c8c,	// (0x00047234) cell_dia3_key1_fun_pane_g1

0x9c94,	// (0x0004723c) area_left_week_number_pane

0x9ca7,	// (0x0004724f) area_top_day_name_pane

0x9cb5,	// (0x0004725d) frame_month_view_pane

0xeee0,	// (0x0004c488) grid_month_view_pane

0x9cca,	// (0x00047272) cell_top_day_name_pane_ParamLimits

0x9cca,	// (0x00047272) cell_top_day_name_pane

0x9ce4,	// (0x0004728c) cell_area_left_week_number_pane_ParamLimits

0x9ce4,	// (0x0004728c) cell_area_left_week_number_pane

0x9d07,	// (0x000472af) cell_month_view_pane_ParamLimits

0x9d07,	// (0x000472af) cell_month_view_pane

0xeeee,	// (0x0004c496) frm_month_g1

0x9d33,	// (0x000472db) frm_month_g2

0x9d44,	// (0x000472ec) frm_month_g3

0x9d55,	// (0x000472fd) frm_month_g4

0x9d66,	// (0x0004730e) frm_month_g5

0x9d79,	// (0x00047321) frm_month_g6

0x9d8c,	// (0x00047334) frm_month_g7

0xeefb,	// (0x0004c4a3) frm_month_g8

0x9d9f,	// (0x00047347) frm_month_g9

0x9dac,	// (0x00047354) frm_month_g10

0x9db9,	// (0x00047361) frm_month_g11

0x9dc6,	// (0x0004736e) frm_month_g12

0x9dd3,	// (0x0004737b) frm_month_g13

0x9de0,	// (0x00047388) frm_month_g14

0x9def,	// (0x00047397) frm_month_g15

0x9dfe,	// (0x000473a6) frm_month_g16

0x000f,

0xfef5,	// (0x0004d49d) frm_month_g

0xef08,	// (0x0004c4b0) cell_top_day_name_pane_t1

0x9e0d,	// (0x000473b5) cell_area_left_week_number_pane_g1

0x9e1c,	// (0x000473c4) cell_area_left_week_number_pane_t1

0xcf6b,	// (0x0004a513) cell_month_view_pane_g1

0x9e32,	// (0x000473da) cell_month_view_pane_t1

0xa143,	// (0x000476eb) main_fps_pane

0xe72b,	// (0x0004bcd3) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe72b,	// (0x0004bcd3) cmail_ddmenu_btn02_pane_cp1

0xe750,	// (0x0004bcf8) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe750,	// (0x0004bcf8) cmail_ddmenu_btn02_pane_cp2

0x96a6,	// (0x00046c4e) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x96a6,	// (0x00046c4e) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe1a,	// (0x0004d3c2) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe1a,	// (0x0004d3c2) cmail_ddmenu_btn02_pane_g

0x96c4,	// (0x00046c6c) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x96c4,	// (0x00046c6c) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe1f,	// (0x0004d3c7) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe1f,	// (0x0004d3c7) cmail_ddmenu_btn02_pane_t

0x9e48,	// (0x000473f0) fps_text_pane_ParamLimits

0x9e48,	// (0x000473f0) fps_text_pane

0x9e55,	// (0x000473fd) main_fps_pane_g1_ParamLimits

0x9e55,	// (0x000473fd) main_fps_pane_g1

0x9e63,	// (0x0004740b) wait_bar_pane_cp010_ParamLimits

0x9e63,	// (0x0004740b) wait_bar_pane_cp010

0x9e6f,	// (0x00047417) fps_text_pane_t1_ParamLimits

0x9e6f,	// (0x00047417) fps_text_pane_t1

0x734c,	// (0x000448f4) cam4_image_uncrop_pane_g1

0x7355,	// (0x000448fd) cam4_image_uncrop_pane_g2

0x735e,	// (0x00044906) cam4_image_uncrop_pane_g3

0x7367,	// (0x0004490f) cam4_image_uncrop_pane_g4

0x0003,

0xf8d7,	// (0x0004ce7f) cam4_image_uncrop_pane_g

0x9c77,	// (0x0004721f) dia3_listrow_pane_ParamLimits

0xa143,	// (0x000476eb) main_phob2_pane

0x92cc,	// (0x00046874) cell_tport_appsw_pane_cp02_ParamLimits

0x92cc,	// (0x00046874) cell_tport_appsw_pane_cp02

0x92db,	// (0x00046883) cell_tport_appsw_pane_cp03_ParamLimits

0x92db,	// (0x00046883) cell_tport_appsw_pane_cp03

0xa143,	// (0x000476eb) phob2_contact_card_pane

0xa143,	// (0x000476eb) phob2_listscroll_pane

0xef1b,	// (0x0004c4c3) phob2_list_pane

0xef23,	// (0x0004c4cb) scroll_pane_cp034

0x9e88,	// (0x00047430) phob2_cc_data_pane_ParamLimits

0x9e88,	// (0x00047430) phob2_cc_data_pane

0x9ea2,	// (0x0004744a) phob2_cc_listscroll_pane_ParamLimits

0x9ea2,	// (0x0004744a) phob2_cc_listscroll_pane

0x9ab9,	// (0x00047061) list_double_large_graphic_phob2_pane_ParamLimits

0x9ab9,	// (0x00047061) list_double_large_graphic_phob2_pane

0x9ebc,	// (0x00047464) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9ebc,	// (0x00047464) list_double_large_graphic_phob2_pane_g1

0x2025,	// (0x0003f5cd) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x2025,	// (0x0003f5cd) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff16,	// (0x0004d4be) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff16,	// (0x0004d4be) list_double_large_graphic_phob2_pane_g

0x2031,	// (0x0003f5d9) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x2031,	// (0x0003f5d9) list_double_large_graphic_phob2_pane_t1

0x2046,	// (0x0003f5ee) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x2046,	// (0x0003f5ee) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff1b,	// (0x0004d4c3) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff1b,	// (0x0004d4c3) list_double_large_graphic_phob2_pane_t

0xa143,	// (0x000476eb) list_highlight_pane_cp024

0x9ed2,	// (0x0004747a) phob2_cc_button_pane

0x9eda,	// (0x00047482) phob2_cc_data_pane_g1_ParamLimits

0x9eda,	// (0x00047482) phob2_cc_data_pane_g1

0x9ee6,	// (0x0004748e) phob2_cc_data_pane_g2_ParamLimits

0x9ee6,	// (0x0004748e) phob2_cc_data_pane_g2

0x0001,

0xff20,	// (0x0004d4c8) phob2_cc_data_pane_g_ParamLimits

0xff20,	// (0x0004d4c8) phob2_cc_data_pane_g

0x9ef2,	// (0x0004749a) phob2_cc_data_pane_t1_ParamLimits

0x9ef2,	// (0x0004749a) phob2_cc_data_pane_t1

0x9f04,	// (0x000474ac) phob2_cc_data_pane_t2_ParamLimits

0x9f04,	// (0x000474ac) phob2_cc_data_pane_t2

0x9f16,	// (0x000474be) phob2_cc_data_pane_t3_ParamLimits

0x9f16,	// (0x000474be) phob2_cc_data_pane_t3

0x0002,

0xff25,	// (0x0004d4cd) phob2_cc_data_pane_t_ParamLimits

0xff25,	// (0x0004d4cd) phob2_cc_data_pane_t

0xef2b,	// (0x0004c4d3) phob2_cc_list_pane_ParamLimits

0xef2b,	// (0x0004c4d3) phob2_cc_list_pane

0xdd9c,	// (0x0004b344) scroll_pane_cp035_ParamLimits

0xdd9c,	// (0x0004b344) scroll_pane_cp035

0xb494,	// (0x00048a3c) bg_button_pane_cp033

0xef37,	// (0x0004c4df) phob2_cc_button_pane_g1

0xef43,	// (0x0004c4eb) phob2_cc_button_pane_t1

0xef58,	// (0x0004c500) phob2_cc_button_pane_t2

0x0001,

0xff2c,	// (0x0004d4d4) phob2_cc_button_pane_t

0x9f28,	// (0x000474d0) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9f28,	// (0x000474d0) list_double_large_graphic_phob2_cc_pane

0x9f96,	// (0x0004753e) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9f96,	// (0x0004753e) list_double_large_graphic_phob2_cc_pane_g1

0x2058,	// (0x0003f600) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x2058,	// (0x0003f600) list_double_large_graphic_phob2_cc_pane_g2

0x2064,	// (0x0003f60c) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x2064,	// (0x0003f60c) list_double_large_graphic_phob2_cc_pane_g3

0x2070,	// (0x0003f618) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x2070,	// (0x0003f618) list_double_large_graphic_phob2_cc_pane_g4

0x207c,	// (0x0003f624) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x207c,	// (0x0003f624) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff31,	// (0x0004d4d9) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff31,	// (0x0004d4d9) list_double_large_graphic_phob2_cc_pane_g

0x2088,	// (0x0003f630) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x2088,	// (0x0003f630) list_double_large_graphic_phob2_cc_pane_t1

0x20b1,	// (0x0003f659) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x20b1,	// (0x0003f659) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff3c,	// (0x0004d4e4) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff3c,	// (0x0004d4e4) list_double_large_graphic_phob2_cc_pane_t

0xef6a,	// (0x0004c512) list_highlight_pane_cp025_ParamLimits

0xef6a,	// (0x0004c512) list_highlight_pane_cp025

0xb494,	// (0x00048a3c) bg_button_pane_cp033_ParamLimits

0xef37,	// (0x0004c4df) phob2_cc_button_pane_g1_ParamLimits

0xef43,	// (0x0004c4eb) phob2_cc_button_pane_t1_ParamLimits

0xef58,	// (0x0004c500) phob2_cc_button_pane_t2_ParamLimits

0xff2c,	// (0x0004d4d4) phob2_cc_button_pane_t_ParamLimits

0x23b1,	// (0x0003f959) popup_wgtman_window

0xd7f9,	// (0x0004ada1) scroll_pane_cp038

0x9a42,	// (0x00046fea) wgtman_btn_pane_cp_01_ParamLimits

0x9a42,	// (0x00046fea) wgtman_btn_pane_cp_01

0xef78,	// (0x0004c520) wgtman_content_pane

0xef81,	// (0x0004c529) wgtman_heading_pane

0xa143,	// (0x000476eb) bg_heading_pane_cp02

0xef8a,	// (0x0004c532) wgtman_heading_pane_g1

0xef92,	// (0x0004c53a) wgtman_heading_pane_t1

0xefa0,	// (0x0004c548) scroll_pane_cp036

0xefa8,	// (0x0004c550) wgtman_list_pane

0xefb0,	// (0x0004c558) wgtman_list_pane_t1_ParamLimits

0xefb0,	// (0x0004c558) wgtman_list_pane_t1

0x72ab,	// (0x00044853) cam4_grid_pane

0x125c,	// (0x0003e804) bg_button_pane_cp015_ParamLimits

0x7f81,	// (0x00045529) bg_button_pane_cp016_ParamLimits

0x7f94,	// (0x0004553c) bg_button_pane_cp017_ParamLimits

0x12a0,	// (0x0003e848) popup_vitu2_query_window_g3_ParamLimits

0x12a0,	// (0x0003e848) popup_vitu2_query_window_g3

0x1319,	// (0x0003e8c1) popup_vitu2_query_window_t6_ParamLimits

0x1319,	// (0x0003e8c1) popup_vitu2_query_window_t6

0x1344,	// (0x0003e8ec) popup_vitu2_query_window_t7_ParamLimits

0x1344,	// (0x0003e8ec) popup_vitu2_query_window_t7

0xe9d8,	// (0x0004bf80) cam4_grid_pane_g1

0xe9e1,	// (0x0004bf89) cam4_grid_pane_g2

0xefca,	// (0x0004c572) cam4_grid_pane_g3

0xefd3,	// (0x0004c57b) cam4_grid_pane_g4

0x0003,

0xff41,	// (0x0004d4e9) cam4_grid_pane_g

0x3129,	// (0x000406d1) aid_placing_vt_slider_lsc_ParamLimits

0x3475,	// (0x00040a1d) vidtel_button_pane_ParamLimits

0x3475,	// (0x00040a1d) vidtel_button_pane

0xa143,	// (0x000476eb) bg_button_pane_cp034

0xefde,	// (0x0004c586) vidtel_button_pane_g1

0xefe6,	// (0x0004c58e) vidtel_button_pane_t1

0xd932,	// (0x0004aeda) aid_size_vtel_slider_touch

0xdd9c,	// (0x0004b344) scroll_pane_cp039

0x8c6d,	// (0x00046215) ncim_query_button_pane_cp01_ParamLimits

0x8c8c,	// (0x00046234) ncimui_query_pane_g1_ParamLimits

0xb494,	// (0x00048a3c) input_focus_pane_cp012_ParamLimits

0xe1ee,	// (0x0004b796) ncim_query_entry_pane_t1_ParamLimits

0xdd9c,	// (0x0004b344) scroll_pane_cp039_ParamLimits

0xb37f,	// (0x00048927) navi_pane_bcale_mc_g1

0xb387,	// (0x0004892f) navi_pane_bcale_mc_t1

0xe784,	// (0x0004bd2c) main_sp_fs_email_pane_g1

0xe790,	// (0x0004bd38) main_sp_fs_email_pane_g2

0x0001,

0xfcd2,	// (0x0004d27a) main_sp_fs_email_pane_g

0xe9f2,	// (0x0004bf9a) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe9f2,	// (0x0004bf9a) list_single_cale_mrui_row_pane_g3

0x1f1b,	// (0x0003f4c3) list_single_recal_day_pane_g5_event_pane

0x1f31,	// (0x0003f4d9) list_single_recal_day_pane_g7

0xeffc,	// (0x0004c5a4) list_recal_day_event_pane_cp01

0xf005,	// (0x0004c5ad) list_recal_vselct_arw_lo_pane_cp01

0xf00d,	// (0x0004c5b5) list_recal_vselct_arw_up_pane_cp01

0xf015,	// (0x0004c5bd) list_recal_vselct_pane_cp01

0xd942,	// (0x0004aeea) list_recal_day_event_pane_cp01_g1

0x20da,	// (0x0003f682) list_recal_day_event_pane_cp01_t1

0x1f39,	// (0x0003f4e1) list_single_recal_day_pane_t1_ParamLimits

0x1f4b,	// (0x0003f4f3) list_single_recal_day_pane_t2_ParamLimits

0xfe2f,	// (0x0004d3d7) list_single_recal_day_pane_t_ParamLimits

0xa7ef,	// (0x00047d97) bg_notes_pane_ParamLimits

0xa892,	// (0x00047e3a) list_notes_pane_ParamLimits

0x270f,	// (0x0003fcb7) scroll_pane_cp06_ParamLimits

0xa8b4,	// (0x00047e5c) main_notes_pane_ParamLimits

0xb494,	// (0x00048a3c) main_welc_pane

0x9fb6,	// (0x0004755e) main_welc_body_pane_ParamLimits

0x9fb6,	// (0x0004755e) main_welc_body_pane

0x9fd0,	// (0x00047578) main_welc_opti_pane_ParamLimits

0x9fd0,	// (0x00047578) main_welc_opti_pane

0xa00f,	// (0x000475b7) main_welc_pane_t1_ParamLimits

0xa00f,	// (0x000475b7) main_welc_pane_t1

0xa06b,	// (0x00047613) main_welc_body_row_pane_ParamLimits

0xa06b,	// (0x00047613) main_welc_body_row_pane

0xd8d2,	// (0x0004ae7a) main_welc_opti_row_pane_ParamLimits

0xd8d2,	// (0x0004ae7a) main_welc_opti_row_pane

0xf01f,	// (0x0004c5c7) main_welc_opti_row_pane_g1

0xa090,	// (0x00047638) main_welc_opti_row_pane_t1

0xf027,	// (0x0004c5cf) main_welc_body_row_pane_t1

0xed3d,	// (0x0004c2e5) popup_notif_wgt_heading_pane

0xed57,	// (0x0004c2ff) aid_size_list_notif_wgt_del_ParamLimits

0xed64,	// (0x0004c30c) list_notif_wgt_row_pane_g1_ParamLimits

0xed70,	// (0x0004c318) list_notif_wgt_row_pane_g2_ParamLimits

0xed7f,	// (0x0004c327) list_notif_wgt_row_pane_g3_ParamLimits

0xfe96,	// (0x0004d43e) list_notif_wgt_row_pane_g_ParamLimits

0xed8c,	// (0x0004c334) list_notif_wgt_row_pane_t1_ParamLimits

0xeda2,	// (0x0004c34a) list_notif_wgt_row_pane_t2_ParamLimits

0xedb4,	// (0x0004c35c) list_notif_wgt_row_pane_t3_ParamLimits

0xfe9d,	// (0x0004d445) list_notif_wgt_row_pane_t_ParamLimits

0x9ad4,	// (0x0004707c) listrow_wgtman_pane_g1_ParamLimits

0x9ae1,	// (0x00047089) listrow_wgtman_pane_g2_ParamLimits

0xfec6,	// (0x0004d46e) listrow_wgtman_pane_g_ParamLimits

0x1fd5,	// (0x0003f57d) listrow_wgtman_pane_t1_ParamLimits

0x1fed,	// (0x0003f595) listrow_wgtman_pane_t2_ParamLimits

0xfecb,	// (0x0004d473) listrow_wgtman_pane_t_ParamLimits

0x2013,	// (0x0003f5bb) wait_bar_pane_cp09_ParamLimits

0xa143,	// (0x000476eb) bg_popup_heading_pane_cp02

0xf036,	// (0x0004c5de) popup_notif_wgt_heading_pane_g1

0xf03e,	// (0x0004c5e6) popup_notif_wgt_heading_pane_t1

0xa143,	// (0x000476eb) main_vids_pane

0xa143,	// (0x000476eb) vids_listscroll_pane

0xa09f,	// (0x00047647) scroll_pane_cp040

0xa143,	// (0x000476eb) vids_list_pane

0xa0aa,	// (0x00047652) vids_list_double_pane_ParamLimits

0xa0aa,	// (0x00047652) vids_list_double_pane

0xa0c4,	// (0x0004766c) vids_list_double_pane_g1

0xa0cd,	// (0x00047675) vids_list_double_pane_t1

0xa0dd,	// (0x00047685) vids_list_double_pane_t2

0x0001,

0xff58,	// (0x0004d500) vids_list_double_pane_t

0xb494,	// (0x00048a3c) main_ncimui_pane_ParamLimits

0x8ac4,	// (0x0004606c) main_ncimui_pane_g1_ParamLimits

0x8ad0,	// (0x00046078) main_ncimui_pane_g2_ParamLimits

0x8ad0,	// (0x00046078) main_ncimui_pane_g2

0x0001,

0xfbd3,	// (0x0004d17b) main_ncimui_pane_g_ParamLimits

0xfbd3,	// (0x0004d17b) main_ncimui_pane_g

0x9fe9,	// (0x00047591) main_welc_pane_g1_ParamLimits

0x9fe9,	// (0x00047591) main_welc_pane_g1

0x9ff5,	// (0x0004759d) main_welc_pane_g2_ParamLimits

0x9ff5,	// (0x0004759d) main_welc_pane_g2

0x0002,

0xff4a,	// (0x0004d4f2) main_welc_pane_g_ParamLimits

0xff4a,	// (0x0004d4f2) main_welc_pane_g

0xa7ef,	// (0x00047d97) listscroll_mce_pane_ParamLimits

0xb4fc,	// (0x00048aa4) wait_bar_pane_cp10

0xc8e8,	// (0x00049e90) main_cale_day_pane_ParamLimits

0xc8e8,	// (0x00049e90) main_cale_week_pane_ParamLimits

0xa7ef,	// (0x00047d97) main_messa_pane_ParamLimits

0x65e3,	// (0x00043b8b) main_clock2_btn_pane_ParamLimits

0x65e3,	// (0x00043b8b) main_clock2_btn_pane

0xd113,	// (0x0004a6bb) main_clock2_btn_pane_cp01_ParamLimits

0xd113,	// (0x0004a6bb) main_clock2_btn_pane_cp01

0xe9a9,	// (0x0004bf51) list_cale_mrui_pane_ParamLimits

0xedea,	// (0x0004c392) main_cf0_pane_g2

0x0001,

0xfea4,	// (0x0004d44c) main_cf0_pane_g

0x9c94,	// (0x0004723c) area_left_week_number_pane_ParamLimits

0x9ca7,	// (0x0004724f) area_top_day_name_pane_ParamLimits

0x9cb5,	// (0x0004725d) frame_month_view_pane_ParamLimits

0xeee0,	// (0x0004c488) grid_month_view_pane_ParamLimits

0xeeee,	// (0x0004c496) frm_month_g1_ParamLimits

0x9d33,	// (0x000472db) frm_month_g2_ParamLimits

0x9d44,	// (0x000472ec) frm_month_g3_ParamLimits

0x9d55,	// (0x000472fd) frm_month_g4_ParamLimits

0x9d66,	// (0x0004730e) frm_month_g5_ParamLimits

0x9d79,	// (0x00047321) frm_month_g6_ParamLimits

0x9d8c,	// (0x00047334) frm_month_g7_ParamLimits

0xeefb,	// (0x0004c4a3) frm_month_g8_ParamLimits

0x9d9f,	// (0x00047347) frm_month_g9_ParamLimits

0x9dac,	// (0x00047354) frm_month_g10_ParamLimits

0x9db9,	// (0x00047361) frm_month_g11_ParamLimits

0x9dc6,	// (0x0004736e) frm_month_g12_ParamLimits

0x9dd3,	// (0x0004737b) frm_month_g13_ParamLimits

0x9de0,	// (0x00047388) frm_month_g14_ParamLimits

0x9def,	// (0x00047397) frm_month_g15_ParamLimits

0x9dfe,	// (0x000473a6) frm_month_g16_ParamLimits

0xfef5,	// (0x0004d49d) frm_month_g_ParamLimits

0xef08,	// (0x0004c4b0) cell_top_day_name_pane_t1_ParamLimits

0x9e0d,	// (0x000473b5) cell_area_left_week_number_pane_g1_ParamLimits

0x9e1c,	// (0x000473c4) cell_area_left_week_number_pane_t1_ParamLimits

0xcf6b,	// (0x0004a513) cell_month_view_pane_g1_ParamLimits

0x9e32,	// (0x000473da) cell_month_view_pane_t1_ParamLimits

0xa7e7,	// (0x00047d8f) main_clock2_btn_pane_g1

0xf04c,	// (0x0004c5f4) main_clock2_btn_pane_t1

0xb494,	// (0x00048a3c) listscroll_cmail_pane_ParamLimits

0xe784,	// (0x0004bd2c) main_sp_fs_email_pane_g1_ParamLimits

0xe790,	// (0x0004bd38) main_sp_fs_email_pane_g2_ParamLimits

0xfcd2,	// (0x0004d27a) main_sp_fs_email_pane_g_ParamLimits

0xeac9,	// (0x0004c071) list_recal_day_pane_ParamLimits

0xeada,	// (0x0004c082) mian_recal_day_pane_t1

0x18da,	// (0x0003ee82) list_single_dyc_row_text_pane_t4_ParamLimits

0x18da,	// (0x0003ee82) list_single_dyc_row_text_pane_t4

0x1911,	// (0x0003eeb9) list_single_dyc_row_text_pane_t5_ParamLimits

0x1911,	// (0x0003eeb9) list_single_dyc_row_text_pane_t5

0x1987,	// (0x0003ef2f) list_single_dyc_row_text_pane_t6_ParamLimits

0x1987,	// (0x0003ef2f) list_single_dyc_row_text_pane_t6

0x42a0,	// (0x00041848) aid_mgn_list_cale_time_pane

0xb494,	// (0x00048a3c) main_gallery2_pane_ParamLimits

0xd129,	// (0x0004a6d1) main_clock2_pane_cp01_t1

0xd139,	// (0x0004a6e1) main_clock2_pane_cp01_t3

0x0001,

0xf7a9,	// (0x0004cd51) main_clock2_pane_cp01_t

0x2b53,	// (0x000400fb) cale_week_scroll_pane_g16_ParamLimits

0x2b53,	// (0x000400fb) cale_week_scroll_pane_g16

0xaa79,	// (0x00048021) vorec_slider_pane

0xefe6,	// (0x0004c58e) vidtel_button_pane_t1_ParamLimits

0x9727,	// (0x00046ccf) main_fs_bigclock_clock_pane_g1_ParamLimits

0x9727,	// (0x00046ccf) main_fs_bigclock_clock_pane_g2_ParamLimits

0x9734,	// (0x00046cdc) main_fs_bigclock_clock_pane_g3_ParamLimits

0x9734,	// (0x00046cdc) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe52,	// (0x0004d3fa) main_fs_bigclock_clock_pane_g_ParamLimits

0x9740,	// (0x00046ce8) main_fs_bigclock_clock_pane_t1_ParamLimits

0x9753,	// (0x00046cfb) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe5b,	// (0x0004d403) main_fs_bigclock_clock_pane_t_ParamLimits

0x5e82,	// (0x0004342a) main_mup3_lyrics_pane_ParamLimits

0x5e82,	// (0x0004342a) main_mup3_lyrics_pane

0xa111,	// (0x000476b9) main_mup3_lyrics_pane_t1_ParamLimits

0xa111,	// (0x000476b9) main_mup3_lyrics_pane_t1

0x6c2c,	// (0x000441d4) aid_main_mp4_pane_t1_area

0x6c36,	// (0x000441de) aid_main_mp4_pane_t2_area

0x6d35,	// (0x000442dd) main_mp4_pane_g7_ParamLimits

0x6d35,	// (0x000442dd) main_mp4_pane_g7

0x6d41,	// (0x000442e9) main_mp4_pane_g8_ParamLimits

0x6d41,	// (0x000442e9) main_mp4_pane_g8

0x7153,	// (0x000446fb) aid_call6_pane_g1_size

0x9f6a,	// (0x00047512) list_double_large_graphic_phob2_other_pane_ParamLimits

0x9f6a,	// (0x00047512) list_double_large_graphic_phob2_other_pane

0xae3d,	// (0x000483e5) list_double_large_graphic_phob2_other_pane_g1

0xa143,	// (0x000476eb) list_highlight_pane_cp026

0xb494,	// (0x00048a3c) main_welc_pane_ParamLimits

0x91d3,	// (0x0004677b) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x91d3,	// (0x0004677b) main_sp_fs_ctrlbar_pane_g3

0x91eb,	// (0x00046793) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x91eb,	// (0x00046793) main_sp_fs_ctrlbar_pane_g4

0x921d,	// (0x000467c5) toolbar2_fixed_button_pane_cp01

0x9228,	// (0x000467d0) toolbar2_fixed_button_pane_cp02

0x9233,	// (0x000467db) toolbar2_fixed_button_pane_cp03

0x9fa7,	// (0x0004754f) list_welc_entry_pane_ParamLimits

0x9fa7,	// (0x0004754f) list_welc_entry_pane

0xa003,	// (0x000475ab) main_welc_pane_g3_ParamLimits

0xa003,	// (0x000475ab) main_welc_pane_g3

0xa029,	// (0x000475d1) main_welc_pane_t2_ParamLimits

0xa029,	// (0x000475d1) main_welc_pane_t2

0xa03d,	// (0x000475e5) main_welc_pane_t3_ParamLimits

0xa03d,	// (0x000475e5) main_welc_pane_t3

0x0002,

0xff51,	// (0x0004d4f9) main_welc_pane_t_ParamLimits

0xff51,	// (0x0004d4f9) main_welc_pane_t

0xa04f,	// (0x000475f7) welc_button_pane_ParamLimits

0xa04f,	// (0x000475f7) welc_button_pane

0xa05d,	// (0x00047605) welc_service_logo_pane_ParamLimits

0xa05d,	// (0x00047605) welc_service_logo_pane

0xf05a,	// (0x0004c602) list_single_welc_entry_pane_ParamLimits

0xf05a,	// (0x0004c602) list_single_welc_entry_pane

0xf06b,	// (0x0004c613) list_single_welc_entry_pane_g1

0xf073,	// (0x0004c61b) list_single_welc_entry_pane_t1

0xf081,	// (0x0004c629) list_single_welc_entry_pane_t2

0x0001,

0x0d1c,	// (0x0003e2c4) list_single_welc_entry_pane_t

0xa143,	// (0x000476eb) bg_button_pane_cp035

0xf08f,	// (0x0004c637) welc_button_pane_t1

0xf09d,	// (0x0004c645) welc_service_logo_pane_g1

0xf0a6,	// (0x0004c64e) welc_service_logo_pane_g2

0x0001,

0x0d21,	// (0x0003e2c9) welc_service_logo_pane_g
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
	};

} // end of namespace AknLayoutScalable_Elaf_php_apps_qhd_prt_tch_Small

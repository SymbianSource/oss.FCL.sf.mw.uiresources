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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x00062bf5 };

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
0x71a3,	// (0x00069d98) Screen

0x71af,	// (0x00069da4) application_window

0x7203,	// (0x00069df8) area_bottom_pane_ParamLimits

0x7203,	// (0x00069df8) area_bottom_pane

0x7261,	// (0x00069e56) area_top_pane_ParamLimits

0x7261,	// (0x00069e56) area_top_pane

0x72c5,	// (0x00069eba) call_video_uplink_pane_ParamLimits

0x72c5,	// (0x00069eba) call_video_uplink_pane

0x7304,	// (0x00069ef9) main_pane_ParamLimits

0x7304,	// (0x00069ef9) main_pane

0x4e7a,	// (0x00067a6f) context_pane

0xa30f,	// (0x0006cf04) navi_pane

0xa338,	// (0x0006cf2d) popup_cale_events_window_ParamLimits

0xa338,	// (0x0006cf2d) popup_cale_events_window

0x4e8d,	// (0x00067a82) popup_mup_playback_window

0xa350,	// (0x0006cf45) signal_pane

0x0aab,	// (0x000636a0) main_browser_pane

0x0cbe,	// (0x000638b3) main_burst_pane

0xa173,	// (0x0006cd68) main_calc_pane

0x4e6e,	// (0x00067a63) main_cale_day_pane

0x788e,	// (0x0006a483) main_cale_month_pane

0x4e6e,	// (0x00067a63) main_cale_week_pane

0x0cbe,	// (0x000638b3) main_call_pane

0x0733,	// (0x00063328) main_call_poc_pane

0x0cbe,	// (0x000638b3) main_camera_pane

0x0cbe,	// (0x000638b3) main_chi_dic_pane

0x1553,	// (0x00064148) main_clock_pane

0x0733,	// (0x00063328) main_fmradio_pane

0x0cbe,	// (0x000638b3) main_graph_messa_pane

0x0733,	// (0x00063328) main_help_pane

0x0aab,	// (0x000636a0) main_im_pane

0x098e,	// (0x00063583) main_image_pane_ParamLimits

0x098e,	// (0x00063583) main_image_pane

0x0733,	// (0x00063328) main_location2_pane

0x0cbe,	// (0x000638b3) main_location_pane

0x098e,	// (0x00063583) main_messa_pane

0x0733,	// (0x00063328) main_mp2_pane

0x0cbe,	// (0x000638b3) main_mp_pane

0x0733,	// (0x00063328) main_msg_pane

0x0733,	// (0x00063328) main_mup_eq_pane

0x0733,	// (0x00063328) main_mup_pane

0x0aab,	// (0x000636a0) main_notes_pane

0x0733,	// (0x00063328) main_pec_pane

0x0733,	// (0x00063328) main_phob_pane

0x0733,	// (0x00063328) main_pinb_pane

0x0733,	// (0x00063328) main_postcard_pane

0x0733,	// (0x00063328) main_qdial_pane

0x0cbe,	// (0x000638b3) main_skin_pane

0x0733,	// (0x00063328) main_smil2_pane

0x0cbe,	// (0x000638b3) main_smil_pane

0x0cbe,	// (0x000638b3) main_video_pane

0x0cbe,	// (0x000638b3) main_video_tele_pane

0x098e,	// (0x00063583) main_viewer_pane_ParamLimits

0x098e,	// (0x00063583) main_viewer_pane

0x0cbe,	// (0x000638b3) main_vorec_pane

0xa1bf,	// (0x0006cdb4) popup_blid_sat_info_window_ParamLimits

0xa1bf,	// (0x0006cdb4) popup_blid_sat_info_window

0xa1e5,	// (0x0006cdda) popup_dyc_status_message_window_ParamLimits

0xa1e5,	// (0x0006cdda) popup_dyc_status_message_window

0xa1f5,	// (0x0006cdea) popup_grid_large_graphic_window_ParamLimits

0xa1f5,	// (0x0006cdea) popup_grid_large_graphic_window

0xa28a,	// (0x0006ce7f) popup_loc_request_window_ParamLimits

0xa28a,	// (0x0006ce7f) popup_loc_request_window

0xa2e3,	// (0x0006ced8) popup_wml_address_window_ParamLimits

0xa2e3,	// (0x0006ced8) popup_wml_address_window

0xa04b,	// (0x0006cc40) call_muted_g1

0x9cc3,	// (0x0006c8b8) popup_call_audio_conf_window_ParamLimits

0x9cc3,	// (0x0006c8b8) popup_call_audio_conf_window

0xa05b,	// (0x0006cc50) popup_call_audio_first_window_ParamLimits

0xa05b,	// (0x0006cc50) popup_call_audio_first_window

0xa09b,	// (0x0006cc90) popup_call_audio_in_window_ParamLimits

0xa09b,	// (0x0006cc90) popup_call_audio_in_window

0xa0bf,	// (0x0006ccb4) popup_call_audio_out_window_ParamLimits

0xa0bf,	// (0x0006ccb4) popup_call_audio_out_window

0xa0e1,	// (0x0006ccd6) popup_call_audio_second_window_ParamLimits

0xa0e1,	// (0x0006ccd6) popup_call_audio_second_window

0xa111,	// (0x0006cd06) popup_call_audio_wait_window_ParamLimits

0xa111,	// (0x0006cd06) popup_call_audio_wait_window

0xa132,	// (0x0006cd27) popup_number_entry_window_ParamLimits

0xa132,	// (0x0006cd27) popup_number_entry_window

0x02eb,	// (0x00062ee0) bg_popup_call_pane_cp05_ParamLimits

0x02eb,	// (0x00062ee0) bg_popup_call_pane_cp05

0x030b,	// (0x00062f00) popup_number_entry_window_t1

0x031e,	// (0x00062f13) popup_number_entry_window_t2

0x0330,	// (0x00062f25) popup_number_entry_window_t3

0x0003,

0xf085,	// (0x00071c7a) popup_number_entry_window_t

0x0377,	// (0x00062f6c) text_title_cp2

0x038a,	// (0x00062f7f) bg_popup_call_pane_cp_ParamLimits

0x038a,	// (0x00062f7f) bg_popup_call_pane_cp

0x0398,	// (0x00062f8d) call_thumbnail_pane

0x03a0,	// (0x00062f95) popup_call_audio_in_window_g1_ParamLimits

0x03a0,	// (0x00062f95) popup_call_audio_in_window_g1

0x03ac,	// (0x00062fa1) popup_call_audio_in_window_g2_ParamLimits

0x03ac,	// (0x00062fa1) popup_call_audio_in_window_g2

0x03b8,	// (0x00062fad) popup_call_audio_in_window_g3_ParamLimits

0x03b8,	// (0x00062fad) popup_call_audio_in_window_g3

0x0002,

0xf08e,	// (0x00071c83) popup_call_audio_in_window_g_ParamLimits

0xf08e,	// (0x00071c83) popup_call_audio_in_window_g

0x03c4,	// (0x00062fb9) popup_call_audio_in_window_t1_ParamLimits

0x03c4,	// (0x00062fb9) popup_call_audio_in_window_t1

0x03e0,	// (0x00062fd5) popup_call_audio_in_window_t2_ParamLimits

0x03e0,	// (0x00062fd5) popup_call_audio_in_window_t2

0x03fc,	// (0x00062ff1) popup_call_audio_in_window_t3_ParamLimits

0x03fc,	// (0x00062ff1) popup_call_audio_in_window_t3

0x0002,

0xf095,	// (0x00071c8a) popup_call_audio_in_window_t_ParamLimits

0xf095,	// (0x00071c8a) popup_call_audio_in_window_t

0x038a,	// (0x00062f7f) bg_popup_call_pane_cp01_ParamLimits

0x038a,	// (0x00062f7f) bg_popup_call_pane_cp01

0x0398,	// (0x00062f8d) call_thumbnail_pane_cp02

0x040f,	// (0x00063004) call_type_pane_cp022

0x0417,	// (0x0006300c) popup_call_audio_out_window_g1_ParamLimits

0x0417,	// (0x0006300c) popup_call_audio_out_window_g1

0x0429,	// (0x0006301e) popup_call_audio_out_window_g2_ParamLimits

0x0429,	// (0x0006301e) popup_call_audio_out_window_g2

0x0435,	// (0x0006302a) popup_call_audio_out_window_g3_ParamLimits

0x0435,	// (0x0006302a) popup_call_audio_out_window_g3

0x0002,

0xf09c,	// (0x00071c91) popup_call_audio_out_window_g_ParamLimits

0xf09c,	// (0x00071c91) popup_call_audio_out_window_g

0x0447,	// (0x0006303c) popup_call_audio_out_window_t1_ParamLimits

0x0447,	// (0x0006303c) popup_call_audio_out_window_t1

0x045f,	// (0x00063054) popup_call_audio_out_window_t2_ParamLimits

0x045f,	// (0x00063054) popup_call_audio_out_window_t2

0x0001,

0xf0a3,	// (0x00071c98) popup_call_audio_out_window_t_ParamLimits

0xf0a3,	// (0x00071c98) popup_call_audio_out_window_t

0x0474,	// (0x00063069) bg_popup_call_pane_ParamLimits

0x0474,	// (0x00063069) bg_popup_call_pane

0x74cd,	// (0x0006a0c2) call_thumbnail_pane_cp_ParamLimits

0x74cd,	// (0x0006a0c2) call_thumbnail_pane_cp

0x04f8,	// (0x000630ed) call_type_pane_cp01_ParamLimits

0x04f8,	// (0x000630ed) call_type_pane_cp01

0x053c,	// (0x00063131) popup_call_audio_first_window_g1_ParamLimits

0x053c,	// (0x00063131) popup_call_audio_first_window_g1

0x0588,	// (0x0006317d) popup_call_audio_first_window_g2_ParamLimits

0x0588,	// (0x0006317d) popup_call_audio_first_window_g2

0x0001,

0xf0a8,	// (0x00071c9d) popup_call_audio_first_window_g_ParamLimits

0xf0a8,	// (0x00071c9d) popup_call_audio_first_window_g

0x05cc,	// (0x000631c1) popup_call_audio_first_window_t1_ParamLimits

0x05cc,	// (0x000631c1) popup_call_audio_first_window_t1

0x0678,	// (0x0006326d) popup_call_audio_first_window_t4_ParamLimits

0x0678,	// (0x0006326d) popup_call_audio_first_window_t4

0x0704,	// (0x000632f9) popup_call_audio_first_window_t5_ParamLimits

0x0704,	// (0x000632f9) popup_call_audio_first_window_t5

0x0002,

0xf0ad,	// (0x00071ca2) popup_call_audio_first_window_t_ParamLimits

0xf0ad,	// (0x00071ca2) popup_call_audio_first_window_t

0x0733,	// (0x00063328) bg_popup_call_pane_cp02

0x073d,	// (0x00063332) call_type_pane_cp023

0x0745,	// (0x0006333a) popup_call_audio_wait_window_g1

0x074d,	// (0x00063342) popup_call_audio_wait_window_g2

0x0001,

0xf0b4,	// (0x00071ca9) popup_call_audio_wait_window_g

0x0755,	// (0x0006334a) popup_call_audio_wait_window_t3

0x0763,	// (0x00063358) bg_popup_call_pane_cp03_ParamLimits

0x0763,	// (0x00063358) bg_popup_call_pane_cp03

0x07c3,	// (0x000633b8) call_thumbnail_pane_cp011_ParamLimits

0x07c3,	// (0x000633b8) call_thumbnail_pane_cp011

0x07cf,	// (0x000633c4) call_type_pane_cp034_ParamLimits

0x07cf,	// (0x000633c4) call_type_pane_cp034

0x080b,	// (0x00063400) popup_call_audio_second_window_g1_ParamLimits

0x080b,	// (0x00063400) popup_call_audio_second_window_g1

0x0847,	// (0x0006343c) popup_call_audio_second_window_g2_ParamLimits

0x0847,	// (0x0006343c) popup_call_audio_second_window_g2

0x0001,

0xf0b9,	// (0x00071cae) popup_call_audio_second_window_g_ParamLimits

0xf0b9,	// (0x00071cae) popup_call_audio_second_window_g

0x0883,	// (0x00063478) popup_call_audio_second_window_t1_ParamLimits

0x0883,	// (0x00063478) popup_call_audio_second_window_t1

0x0904,	// (0x000634f9) popup_call_audio_second_window_t2_ParamLimits

0x0904,	// (0x000634f9) popup_call_audio_second_window_t2

0x093a,	// (0x0006352f) popup_call_audio_second_window_t3_ParamLimits

0x093a,	// (0x0006352f) popup_call_audio_second_window_t3

0x0002,

0xf0be,	// (0x00071cb3) popup_call_audio_second_window_t_ParamLimits

0xf0be,	// (0x00071cb3) popup_call_audio_second_window_t

0x0733,	// (0x00063328) bg_popup_call_pane_cp04

0x0970,	// (0x00063565) list_conf_pane

0x0978,	// (0x0006356d) popup_call_audio_conf_window_t1

0x0986,	// (0x0006357b) call_thumbnail_pane_g1

0x098e,	// (0x00063583) bg_pinb_pane_ParamLimits

0x098e,	// (0x00063583) bg_pinb_pane

0x099c,	// (0x00063591) find_pinb_pane

0x098e,	// (0x00063583) listscroll_pinb_pane_ParamLimits

0x098e,	// (0x00063583) listscroll_pinb_pane

0x09a6,	// (0x0006359b) pinb_bg_pane_g1

0x09a6,	// (0x0006359b) pinb_bg_pane_g2

0x09a6,	// (0x0006359b) pinb_bg_pane_g3

0x09a6,	// (0x0006359b) pinb_bg_pane_g4

0x09a6,	// (0x0006359b) pinb_bg_pane_g5

0x09a6,	// (0x0006359b) pinb_bg_pane_g6

0x09a6,	// (0x0006359b) pinb_bg_pane_g7

0x09a6,	// (0x0006359b) pinb_bg_pane_g8

0x09a6,	// (0x0006359b) pinb_bg_pane_g9

0x09a6,	// (0x0006359b) pinb_bg_pane_g10

0x0009,

0xf0c5,	// (0x00071cba) pinb_bg_pane_g

0x0256,	// (0x00062e4b) grid_pinb_pane

0x0256,	// (0x00062e4b) list_pinb_pane

0x09b0,	// (0x000635a5) scroll_pane_cp01_ParamLimits

0x09b0,	// (0x000635a5) scroll_pane_cp01

0x09be,	// (0x000635b3) find_pinb_pane_g1_ParamLimits

0x09be,	// (0x000635b3) find_pinb_pane_g1

0x09d6,	// (0x000635cb) find_pinb_pane_t1

0x09e8,	// (0x000635dd) find_pinb_pane_t2

0x0001,

0xf0df,	// (0x00071cd4) find_pinb_pane_t

0x09fd,	// (0x000635f2) input_focus_pane_cp01_ParamLimits

0x09fd,	// (0x000635f2) input_focus_pane_cp01

0x0a09,	// (0x000635fe) cell_pinb_pane_ParamLimits

0x0a09,	// (0x000635fe) cell_pinb_pane

0x0a17,	// (0x0006360c) cell_pinb_pane_g1_ParamLimits

0x0a17,	// (0x0006360c) cell_pinb_pane_g1

0x0a25,	// (0x0006361a) cell_pinb_pane_g2_ParamLimits

0x0a25,	// (0x0006361a) cell_pinb_pane_g2

0x0a25,	// (0x0006361a) cell_pinb_pane_g3_ParamLimits

0x0a25,	// (0x0006361a) cell_pinb_pane_g3

0x0002,

0xf0e4,	// (0x00071cd9) cell_pinb_pane_g_ParamLimits

0xf0e4,	// (0x00071cd9) cell_pinb_pane_g

0x0733,	// (0x00063328) grid_highlight_pane_cp01

0x0a09,	// (0x000635fe) list_pinb_item_pane_ParamLimits

0x0a09,	// (0x000635fe) list_pinb_item_pane

0x0256,	// (0x00062e4b) list_highlight_pane_cp02

0x0a33,	// (0x00063628) list_pinb_item_pane_g1_ParamLimits

0x0a33,	// (0x00063628) list_pinb_item_pane_g1

0x0a25,	// (0x0006361a) list_pinb_item_pane_g2_ParamLimits

0x0a25,	// (0x0006361a) list_pinb_item_pane_g2

0x0a17,	// (0x0006360c) list_pinb_item_pane_g3_ParamLimits

0x0a17,	// (0x0006360c) list_pinb_item_pane_g3

0x0a25,	// (0x0006361a) list_pinb_item_pane_g4_ParamLimits

0x0a25,	// (0x0006361a) list_pinb_item_pane_g4

0x0003,

0xf0eb,	// (0x00071ce0) list_pinb_item_pane_g_ParamLimits

0xf0eb,	// (0x00071ce0) list_pinb_item_pane_g

0x0a41,	// (0x00063636) list_pinb_item_pane_t1_ParamLimits

0x0a41,	// (0x00063636) list_pinb_item_pane_t1

0x750b,	// (0x0006a100) calc_display_pane

0x7529,	// (0x0006a11e) calc_paper_pane

0x7545,	// (0x0006a13a) grid_calc_pane

0x0733,	// (0x00063328) bg_list_pane_cp01

0x7571,	// (0x0006a166) clock_g1

0x7579,	// (0x0006a16e) clock_g2

0x0001,

0xf0f4,	// (0x00071ce9) clock_g

0x7583,	// (0x0006a178) clock_t1_ParamLimits

0x7583,	// (0x0006a178) clock_t1

0x7598,	// (0x0006a18d) clock_t2_ParamLimits

0x7598,	// (0x0006a18d) clock_t2

0x75aa,	// (0x0006a19f) clock_t3_ParamLimits

0x75aa,	// (0x0006a19f) clock_t3

0x75bc,	// (0x0006a1b1) clock_t4_ParamLimits

0x75bc,	// (0x0006a1b1) clock_t4

0x75ce,	// (0x0006a1c3) clock_t5_ParamLimits

0x75ce,	// (0x0006a1c3) clock_t5

0x75e3,	// (0x0006a1d8) clock_t6_ParamLimits

0x75e3,	// (0x0006a1d8) clock_t6

0x75f5,	// (0x0006a1ea) clock_t7_ParamLimits

0x75f5,	// (0x0006a1ea) clock_t7

0x7607,	// (0x0006a1fc) clock_t8_ParamLimits

0x7607,	// (0x0006a1fc) clock_t8

0x761d,	// (0x0006a212) clock_t9_ParamLimits

0x761d,	// (0x0006a212) clock_t9

0x0008,

0xf0f9,	// (0x00071cee) clock_t_ParamLimits

0xf0f9,	// (0x00071cee) clock_t

0x0a5d,	// (0x00063652) popup_clock_analogue_window_cp02

0x0a5d,	// (0x00063652) popup_clock_digital_window_cp01

0x0733,	// (0x00063328) listscroll_help_pane

0x0733,	// (0x00063328) phob_pre_status_pane

0x0a65,	// (0x0006365a) grid_qdial_pane

0x098e,	// (0x00063583) listscroll_mce_pane

0x098e,	// (0x00063583) bg_notes_pane

0x0a6f,	// (0x00063664) list_notes_pane

0x7633,	// (0x0006a228) scroll_pane_cp06

0x0a7d,	// (0x00063672) bg_calc_paper_pane

0x7642,	// (0x0006a237) list_calc_pane

0x0aab,	// (0x000636a0) bg_calc_display_pane

0x765c,	// (0x0006a251) calc_display_pane_t1

0x7671,	// (0x0006a266) calc_display_pane_t2

0x7686,	// (0x0006a27b) calc_display_pane_t3

0x0002,

0xf10c,	// (0x00071d01) calc_display_pane_t

0x7698,	// (0x0006a28d) cell_calc_pane_ParamLimits

0x7698,	// (0x0006a28d) cell_calc_pane

0x0ac9,	// (0x000636be) bg_calc_paper_pane_g1

0x0ae1,	// (0x000636d6) bg_calc_paper_pane_g2

0x0ad5,	// (0x000636ca) bg_calc_paper_pane_g3

0x0af9,	// (0x000636ee) bg_calc_paper_pane_g4

0x0aed,	// (0x000636e2) bg_calc_paper_pane_g5

0x76c7,	// (0x0006a2bc) bg_calc_paper_pane_g6

0x76d8,	// (0x0006a2cd) bg_calc_paper_pane_g7

0x76e9,	// (0x0006a2de) bg_calc_paper_pane_g8

0x0007,

0xf113,	// (0x00071d08) bg_calc_paper_pane_g

0x76fa,	// (0x0006a2ef) calc_bg_paper_pane_g9

0x770b,	// (0x0006a300) list_calc_item_pane_ParamLimits

0x770b,	// (0x0006a300) list_calc_item_pane

0x0b05,	// (0x000636fa) list_calc_item_pane_g1

0x772c,	// (0x0006a321) list_calc_item_pane_t1_ParamLimits

0x772c,	// (0x0006a321) list_calc_item_pane_t1

0x773e,	// (0x0006a333) list_calc_item_pane_t2_ParamLimits

0x773e,	// (0x0006a333) list_calc_item_pane_t2

0x0001,

0xf124,	// (0x00071d19) list_calc_item_pane_t_ParamLimits

0xf124,	// (0x00071d19) list_calc_item_pane_t

0x09a6,	// (0x0006359b) cell_calc_pane_g1

0x0b24,	// (0x00063719) grid_highlight_pane_cp02

0x27ed,	// (0x000653e2) bg_calc_display_pane_g1

0x776e,	// (0x0006a363) bg_calc_display_pane_g2

0x27ff,	// (0x000653f4) bg_calc_display_pane_g3

0x0002,

0xf12e,	// (0x00071d23) bg_calc_display_pane_g

0x7778,	// (0x0006a36d) cell_qdial_pane_ParamLimits

0x7778,	// (0x0006a36d) cell_qdial_pane

0x778e,	// (0x0006a383) cell_qdial_pane_g1_ParamLimits

0x778e,	// (0x0006a383) cell_qdial_pane_g1

0x779b,	// (0x0006a390) cell_qdial_pane_g2_ParamLimits

0x779b,	// (0x0006a390) cell_qdial_pane_g2

0x0b4f,	// (0x00063744) cell_qdial_pane_g3_ParamLimits

0x0b4f,	// (0x00063744) cell_qdial_pane_g3

0x0003,

0xf135,	// (0x00071d2a) cell_qdial_pane_g_ParamLimits

0xf135,	// (0x00071d2a) cell_qdial_pane_g

0x77b9,	// (0x0006a3ae) cell_qdial_pane_t1_ParamLimits

0x77b9,	// (0x0006a3ae) cell_qdial_pane_t1

0x77d1,	// (0x0006a3c6) cell_qdial_pane_t2_ParamLimits

0x77d1,	// (0x0006a3c6) cell_qdial_pane_t2

0x77e4,	// (0x0006a3d9) cell_qdial_pane_t3_ParamLimits

0x77e4,	// (0x0006a3d9) cell_qdial_pane_t3

0x0002,

0xf13e,	// (0x00071d33) cell_qdial_pane_t_ParamLimits

0xf13e,	// (0x00071d33) cell_qdial_pane_t

0x0733,	// (0x00063328) grid_highlight_pane_cp04

0x0b5b,	// (0x00063750) thumbnail_qdial_pane_ParamLimits

0x0b5b,	// (0x00063750) thumbnail_qdial_pane

0x0bb7,	// (0x000637ac) list_help_pane

0x0bc0,	// (0x000637b5) scroll_pane_cp02

0x77f7,	// (0x0006a3ec) help_list_pane_t1_ParamLimits

0x77f7,	// (0x0006a3ec) help_list_pane_t1

0x781e,	// (0x0006a413) bg_notes_pane_g2

0x7826,	// (0x0006a41b) bg_notes_pane_g3

0x782e,	// (0x0006a423) notes_bg_pane_g1

0x7836,	// (0x0006a42b) notes_bg_pane_g4

0x783e,	// (0x0006a433) notes_bg_pane_g5

0x7846,	// (0x0006a43b) notes_bg_pane_g6

0x784e,	// (0x0006a443) notes_bg_pane_g7

0x7856,	// (0x0006a44b) notes_bg_pane_g8

0x785e,	// (0x0006a453) notes_bg_pane_g9

0x0006,

0xf15c,	// (0x00071d51) notes_bg_pane_g

0x7866,	// (0x0006a45b) list_notes_text_pane_ParamLimits

0x7866,	// (0x0006a45b) list_notes_text_pane

0x0c11,	// (0x00063806) list_notes_text_pane_g1

0x64f7,	// (0x000690ec) list_notes_text_pane_t1

0x788e,	// (0x0006a483) listscroll_cale_week_pane

0x78ba,	// (0x0006a4af) bg_cale_heading_pane

0x78e3,	// (0x0006a4d8) bg_cale_pane_cp01

0x7905,	// (0x0006a4fa) cale_week_corner_pane

0x7924,	// (0x0006a519) cale_week_day_heading_pane

0x7952,	// (0x0006a547) cale_week_scroll_pane_g1

0x7976,	// (0x0006a56b) cale_week_scroll_pane_g2

0x798e,	// (0x0006a583) cale_week_scroll_pane_g3

0x79a6,	// (0x0006a59b) cale_week_scroll_pane_g4

0x79be,	// (0x0006a5b3) cale_week_scroll_pane_g5

0x79d6,	// (0x0006a5cb) cale_week_scroll_pane_g6

0x79f6,	// (0x0006a5eb) cale_week_scroll_pane_g7

0x7a16,	// (0x0006a60b) cale_week_scroll_pane_g8

0x7a36,	// (0x0006a62b) cale_week_scroll_pane_g9

0x7a53,	// (0x0006a648) cale_week_scroll_pane_g10

0x7a70,	// (0x0006a665) cale_week_scroll_pane_g11

0x7a8f,	// (0x0006a684) cale_week_scroll_pane_g12

0x7ab4,	// (0x0006a6a9) cale_week_scroll_pane_g13

0x7add,	// (0x0006a6d2) cale_week_scroll_pane_g14

0x7b06,	// (0x0006a6fb) cale_week_scroll_pane_g15

0x000f,

0xf16b,	// (0x00071d60) cale_week_scroll_pane_g

0x7b4f,	// (0x0006a744) cale_week_time_pane

0x7b6f,	// (0x0006a764) grid_cale_week_pane

0x0c46,	// (0x0006383b) scroll_pane_cp08

0x7ba0,	// (0x0006a795) cell_cale_week_pane_ParamLimits

0x7ba0,	// (0x0006a795) cell_cale_week_pane

0x7c30,	// (0x0006a825) cale_week_day_heading_pane_t1

0x7c58,	// (0x0006a84d) cale_week_day_heading_pane_t2

0x7c85,	// (0x0006a87a) cale_week_day_heading_pane_t3

0x7cb2,	// (0x0006a8a7) cale_week_day_heading_pane_t4

0x7cdf,	// (0x0006a8d4) cale_week_day_heading_pane_t5

0x7d0c,	// (0x0006a901) cale_week_day_heading_pane_t6

0x7d39,	// (0x0006a92e) cale_week_day_heading_pane_t7

0x0006,

0xf18c,	// (0x00071d81) cale_week_day_heading_pane_t

0x0c63,	// (0x00063858) bg_cale_side_pane

0x7d61,	// (0x0006a956) cale_week_time_pane_t1

0x7d85,	// (0x0006a97a) cale_week_time_pane_t2

0x7da9,	// (0x0006a99e) cale_week_time_pane_t3

0x7dcd,	// (0x0006a9c2) cale_week_time_pane_t4

0x7df1,	// (0x0006a9e6) cale_week_time_pane_t5

0x7e17,	// (0x0006aa0c) cale_week_time_pane_t6

0x7e3f,	// (0x0006aa34) cale_week_time_pane_t7

0x7e6b,	// (0x0006aa60) cale_week_time_pane_t8

0x0007,

0xf19b,	// (0x00071d90) cale_week_time_pane_t

0x7e9b,	// (0x0006aa90) cell_cale_week_pane_g2

0x7ebf,	// (0x0006aab4) cell_cale_week_pane_g3_ParamLimits

0x7ebf,	// (0x0006aab4) cell_cale_week_pane_g3

0x0c71,	// (0x00063866) grid_highlight_pane_cp07

0x0c79,	// (0x0006386e) listscroll_gms_pane

0x0c83,	// (0x00063878) grid_gms_pane

0x0c8c,	// (0x00063881) listscroll_gms_pane_g1

0x0c94,	// (0x00063889) listscroll_gms_pane_g2

0x0001,

0xf1ac,	// (0x00071da1) listscroll_gms_pane_g

0x7ed7,	// (0x0006aacc) scroll_pane_cp010

0x7ee2,	// (0x0006aad7) cell_gms_pane_ParamLimits

0x7ee2,	// (0x0006aad7) cell_gms_pane

0x7ef5,	// (0x0006aaea) cell_gms_pane_g1

0x0c9c,	// (0x00063891) cell_gms_pane_g2

0x0ca4,	// (0x00063899) cell_gms_pane_g3

0x0cad,	// (0x000638a2) cell_gms_pane_g4

0x0003,

0xf1b1,	// (0x00071da6) cell_gms_pane_g

0x0cb6,	// (0x000638ab) grid_highlight_pane_cp09

0x9fcf,	// (0x0006cbc4) phob_pre_status_pane_g1

0x9fd7,	// (0x0006cbcc) phob_pre_status_pane_g2

0x9fdf,	// (0x0006cbd4) phob_pre_status_pane_g3

0x9fe7,	// (0x0006cbdc) phob_pre_status_pane_g4

0x0004,

0xf57a,	// (0x0007216f) phob_pre_status_pane_g

0x9ff7,	// (0x0006cbec) phob_pre_status_pane_t1

0xa007,	// (0x0006cbfc) phob_pre_status_pane_t2

0xa017,	// (0x0006cc0c) phob_pre_status_pane_t3

0x0002,

0xf585,	// (0x0007217a) phob_pre_status_pane_t

0x0cbe,	// (0x000638b3) bg_list_pane_cp05

0x7f05,	// (0x0006aafa) grid_vorec_pane

0x7f0f,	// (0x0006ab04) vorec_t1

0x7f1d,	// (0x0006ab12) vorec_t2

0x7f2b,	// (0x0006ab20) vorec_t3

0x7f39,	// (0x0006ab2e) vorec_t4

0xeb1c,	// (0x00071711) vorec_t5

0xeb2a,	// (0x0007171f) vorec_t6

0x0004,

0xf1ba,	// (0x00071daf) vorec_t

0xeb38,	// (0x0007172d) wait_bar_pane_cp01

0x7f55,	// (0x0006ab4a) cell_vorec_pane_ParamLimits

0x7f55,	// (0x0006ab4a) cell_vorec_pane

0x7f6a,	// (0x0006ab5f) cell_vorec_pane_g1

0x0733,	// (0x00063328) grid_highlight_pane_cp05

0x0a09,	// (0x000635fe) cams_zoom_pane

0x0a09,	// (0x000635fe) image_vga_pane

0x0a25,	// (0x0006361a) main_camera_pane_g1

0x0a25,	// (0x0006361a) main_camera_pane_g2

0x0a25,	// (0x0006361a) main_camera_pane_g3

0x0a25,	// (0x0006361a) main_camera_pane_g4

0x0a25,	// (0x0006361a) main_camera_pane_g5

0x0a25,	// (0x0006361a) main_camera_pane_g6

0x0a25,	// (0x0006361a) main_camera_pane_g7

0x0007,

0xf1c5,	// (0x00071dba) main_camera_pane_g

0x179c,	// (0x00064391) main_camera_pane_t1

0x179c,	// (0x00064391) main_camera_pane_t2

0x0001,

0xf1d6,	// (0x00071dcb) main_camera_pane_t

0x7f74,	// (0x0006ab69) cams_zoom_pane_cp_ParamLimits

0x7f74,	// (0x0006ab69) cams_zoom_pane_cp

0x7fa2,	// (0x0006ab97) image_cif_pane_ParamLimits

0x7fa2,	// (0x0006ab97) image_cif_pane

0x0256,	// (0x00062e4b) image_subqcif_pane

0x7fb0,	// (0x0006aba5) main_video_pane_g1_ParamLimits

0x7fb0,	// (0x0006aba5) main_video_pane_g1

0x7fd8,	// (0x0006abcd) main_video_pane_g2_ParamLimits

0x7fd8,	// (0x0006abcd) main_video_pane_g2

0x800b,	// (0x0006ac00) main_video_pane_g3_ParamLimits

0x800b,	// (0x0006ac00) main_video_pane_g3

0x800b,	// (0x0006ac00) main_video_pane_g4_ParamLimits

0x800b,	// (0x0006ac00) main_video_pane_g4

0x8039,	// (0x0006ac2e) main_video_pane_g5_ParamLimits

0x8039,	// (0x0006ac2e) main_video_pane_g5

0x0cf9,	// (0x000638ee) main_video_pane_g6_ParamLimits

0x0cf9,	// (0x000638ee) main_video_pane_g6

0x0006,

0xf1db,	// (0x00071dd0) main_video_pane_g_ParamLimits

0xf1db,	// (0x00071dd0) main_video_pane_g

0x8055,	// (0x0006ac4a) main_video_pane_t1_ParamLimits

0x8055,	// (0x0006ac4a) main_video_pane_t1

0x0d13,	// (0x00063908) cams_zoom_pane_g1

0x0d13,	// (0x00063908) cams_zoom_pane_g2

0x0d13,	// (0x00063908) cams_zoom_pane_g3

0x0d13,	// (0x00063908) cams_zoom_pane_g4

0x0003,

0xf1ea,	// (0x00071ddf) cams_zoom_pane_g

0x809b,	// (0x0006ac90) grid_cams_pane

0x80a9,	// (0x0006ac9e) linegrid_cams_pane

0x80b5,	// (0x0006acaa) cell_cams_pane_ParamLimits

0x80b5,	// (0x0006acaa) cell_cams_pane

0x0d1d,	// (0x00063912) cams_burst_image_pane

0x0d25,	// (0x0006391a) cell_cams_pane_g1

0x0733,	// (0x00063328) grid_highlight_pane_cp03

0x09a6,	// (0x0006359b) mp_bg_pane_g1

0x0256,	// (0x00062e4b) bg_list_pane_cp03

0x0256,	// (0x00062e4b) bg_mp_pane

0x0256,	// (0x00062e4b) grid_mp_pane

0x0d13,	// (0x00063908) media_player_g1

0x1279,	// (0x00063e6e) media_player_t1

0x1279,	// (0x00063e6e) media_player_t2

0x1279,	// (0x00063e6e) media_player_t3

0x1279,	// (0x00063e6e) media_player_t4

0x1279,	// (0x00063e6e) media_player_t5

0x1279,	// (0x00063e6e) media_player_t6

0x1279,	// (0x00063e6e) media_player_t7

0x0006,

0xf564,	// (0x00072159) media_player_t

0x0256,	// (0x00062e4b) wait_bar_pane_cp02

0xf549,	// (0x0007213e) main_usb_pane_t

0x1553,	// (0x00064148) cell_mp_pane

0x09a6,	// (0x0006359b) cell_mp_pane_g1

0x0733,	// (0x00063328) grid_highlight_pane_cp06

0x0d2d,	// (0x00063922) grid_skin_colour_pane

0x0d35,	// (0x0006392a) list_highlight_pane_cp03

0x80ca,	// (0x0006acbf) skin_g1

0x0d3d,	// (0x00063932) skin_t1

0x0d4c,	// (0x00063941) skin_t2

0x0001,

0xf218,	// (0x00071e0d) skin_t

0x80d4,	// (0x0006acc9) cell_skin_colour_pane_ParamLimits

0x80d4,	// (0x0006acc9) cell_skin_colour_pane

0x0d5a,	// (0x0006394f) cell_skin_colour_pane_g1

0x8154,	// (0x0006ad49) call_video_g1_ParamLimits

0x8154,	// (0x0006ad49) call_video_g1

0x8164,	// (0x0006ad59) call_video_g2_ParamLimits

0x8164,	// (0x0006ad59) call_video_g2

0x0001,

0xf21d,	// (0x00071e12) call_video_g_ParamLimits

0xf21d,	// (0x00071e12) call_video_g

0x81b4,	// (0x0006ada9) call_video_uplink_pane_cp1_ParamLimits

0x81b4,	// (0x0006ada9) call_video_uplink_pane_cp1

0x0d6c,	// (0x00063961) call_video_uplink_pane_cp2

0x8282,	// (0x0006ae77) video_down_crop_pane_ParamLimits

0x8282,	// (0x0006ae77) video_down_crop_pane

0x8374,	// (0x0006af69) video_down_pane_ParamLimits

0x8374,	// (0x0006af69) video_down_pane

0x0d74,	// (0x00063969) video_down_subqcif_pane_ParamLimits

0x0d74,	// (0x00063969) video_down_subqcif_pane

0x0d8e,	// (0x00063983) video_down_subqcif_pane_cp_ParamLimits

0x0d8e,	// (0x00063983) video_down_subqcif_pane_cp

0x0db6,	// (0x000639ab) im_reading_pane_ParamLimits

0x0db6,	// (0x000639ab) im_reading_pane

0x8491,	// (0x0006b086) im_writing_pane_ParamLimits

0x8491,	// (0x0006b086) im_writing_pane

0x84af,	// (0x0006b0a4) im_reading_pane_t1

0x0dd0,	// (0x000639c5) list_im_pane

0x0de1,	// (0x000639d6) scroll_pane_cp07

0x84f1,	// (0x0006b0e6) im_writing_pane_t1_ParamLimits

0x84f1,	// (0x0006b0e6) im_writing_pane_t1

0x0dfa,	// (0x000639ef) im_writing_pane_t2_ParamLimits

0x0dfa,	// (0x000639ef) im_writing_pane_t2

0x0001,

0xf227,	// (0x00071e1c) im_writing_pane_t_ParamLimits

0xf227,	// (0x00071e1c) im_writing_pane_t

0x0733,	// (0x00063328) input_focus_pane_cp04

0x0733,	// (0x00063328) input_focus_pane_cp05

0x8503,	// (0x0006b0f8) list_im_single_pane_ParamLimits

0x8503,	// (0x0006b0f8) list_im_single_pane

0x851c,	// (0x0006b111) list_single_im_pane_t1

0x0cbe,	// (0x000638b3) blid_accuracy_pane

0x0cbe,	// (0x000638b3) blid_compass_pane

0x4e26,	// (0x00067a1b) main_location_t1

0x4e26,	// (0x00067a1b) main_location_t2

0x4e26,	// (0x00067a1b) main_location_t3

0x0002,

0xf573,	// (0x00072168) main_location_t

0x0733,	// (0x00063328) aid_levels_location

0x09a6,	// (0x0006359b) blid_accuracy_pane_g1

0x09a6,	// (0x0006359b) blid_accuracy_pane_g2

0x0001,

0xf27b,	// (0x00071e70) blid_accuracy_pane_g

0x0e42,	// (0x00063a37) wml_content_pane

0x0e80,	// (0x00063a75) wml_button_pane_ParamLimits

0x0e80,	// (0x00063a75) wml_button_pane

0x852b,	// (0x0006b120) wml_list_single_large_pane_ParamLimits

0x852b,	// (0x0006b120) wml_list_single_large_pane

0x854d,	// (0x0006b142) wml_list_single_medium_pane_ParamLimits

0x854d,	// (0x0006b142) wml_list_single_medium_pane

0x8570,	// (0x0006b165) wml_list_single_small_pane_ParamLimits

0x8570,	// (0x0006b165) wml_list_single_small_pane

0x0e94,	// (0x00063a89) wml_selection_box_pane_ParamLimits

0x0e94,	// (0x00063a89) wml_selection_box_pane

0x0ea7,	// (0x00063a9c) wml_list_single_pane_t1

0x0eb6,	// (0x00063aab) wml_list_single_medium_pane_t1

0x0ec5,	// (0x00063aba) wml_list_single_large_pane_t1

0x0ed4,	// (0x00063ac9) input_focus_pane_cp02_ParamLimits

0x0ed4,	// (0x00063ac9) input_focus_pane_cp02

0x0ee7,	// (0x00063adc) wml_selection_box_pane_g1

0x0ef0,	// (0x00063ae5) wml_selection_box_pane_t1_ParamLimits

0x0ef0,	// (0x00063ae5) wml_selection_box_pane_t1

0x098e,	// (0x00063583) bg_wml_button_pane_ParamLimits

0x098e,	// (0x00063583) bg_wml_button_pane

0x0f08,	// (0x00063afd) wml_button_pane_g1

0x0f10,	// (0x00063b05) wml_button_pane_t1

0x0f08,	// (0x00063afd) wml_button_bg_pane_g1

0x0f20,	// (0x00063b15) wml_button_bg_pane_g2

0x0f28,	// (0x00063b1d) wml_button_bg_pane_g3

0x0f30,	// (0x00063b25) wml_button_bg_pane_g4

0x0f38,	// (0x00063b2d) wml_button_bg_pane_g5

0x0f40,	// (0x00063b35) wml_button_bg_pane_g6

0x0f48,	// (0x00063b3d) wml_button_bg_pane_g7

0x0f50,	// (0x00063b45) wml_button_bg_pane_g8

0x0f58,	// (0x00063b4d) wml_button_bg_pane_g9

0x0008,

0xf22c,	// (0x00071e21) wml_button_bg_pane_g

0x8598,	// (0x0006b18d) bg_list_pane_cp02

0x0f60,	// (0x00063b55) mce_header_pane_ParamLimits

0x0f60,	// (0x00063b55) mce_header_pane

0x0f76,	// (0x00063b6b) mce_icon_pane

0x0f76,	// (0x00063b6b) mce_image_pane

0x0f7f,	// (0x00063b74) mce_text_pane_ParamLimits

0x0f7f,	// (0x00063b74) mce_text_pane

0x85a2,	// (0x0006b197) scroll_pane_cp03

0x0e78,	// (0x00063a6d) scroll_pane_cp04

0x0f92,	// (0x00063b87) scroll_pane_cp05_ParamLimits

0x0f92,	// (0x00063b87) scroll_pane_cp05

0x85ac,	// (0x0006b1a1) mce_header_field_pane_ParamLimits

0x85ac,	// (0x0006b1a1) mce_header_field_pane

0x85ce,	// (0x0006b1c3) mce_header_field_pane_2_ParamLimits

0x85ce,	// (0x0006b1c3) mce_header_field_pane_2

0x85e4,	// (0x0006b1d9) mce_header_field_pane_3

0x85ec,	// (0x0006b1e1) list_single_mce_message_pane_ParamLimits

0x85ec,	// (0x0006b1e1) list_single_mce_message_pane

0x860b,	// (0x0006b200) list_single_mce_smart_pane_ParamLimits

0x860b,	// (0x0006b200) list_single_mce_smart_pane

0x0f9e,	// (0x00063b93) input_focus_pane_cp03

0x0fa7,	// (0x00063b9c) list_header_data_pane

0x8635,	// (0x0006b22a) mce_header_field_pane_t1

0x8645,	// (0x0006b23a) list_single_mce_header_pane_ParamLimits

0x8645,	// (0x0006b23a) list_single_mce_header_pane

0x0faf,	// (0x00063ba4) list_single_mce_header_pane_t1

0x0fbe,	// (0x00063bb3) list_single_mce_message_pane_g1

0x0fc6,	// (0x00063bbb) list_single_mce_message_pane_t1

0x8689,	// (0x0006b27e) bg_cale_heading_pane_cp01_ParamLimits

0x8689,	// (0x0006b27e) bg_cale_heading_pane_cp01

0x0fd4,	// (0x00063bc9) bg_cale_pane_cp02_ParamLimits

0x0fd4,	// (0x00063bc9) bg_cale_pane_cp02

0x86db,	// (0x0006b2d0) cale_month_corner_pane

0x86fa,	// (0x0006b2ef) cale_month_day_heading_pane_ParamLimits

0x86fa,	// (0x0006b2ef) cale_month_day_heading_pane

0x875c,	// (0x0006b351) cale_month_pane_g1_ParamLimits

0x875c,	// (0x0006b351) cale_month_pane_g1

0x87a3,	// (0x0006b398) cale_month_pane_g2_ParamLimits

0x87a3,	// (0x0006b398) cale_month_pane_g2

0x87db,	// (0x0006b3d0) cale_month_pane_g3_ParamLimits

0x87db,	// (0x0006b3d0) cale_month_pane_g3

0x882f,	// (0x0006b424) cale_month_pane_g4_ParamLimits

0x882f,	// (0x0006b424) cale_month_pane_g4

0x8883,	// (0x0006b478) cale_month_pane_g5_ParamLimits

0x8883,	// (0x0006b478) cale_month_pane_g5

0x88d7,	// (0x0006b4cc) cale_month_pane_g6_ParamLimits

0x88d7,	// (0x0006b4cc) cale_month_pane_g6

0x893b,	// (0x0006b530) cale_month_pane_g7_ParamLimits

0x893b,	// (0x0006b530) cale_month_pane_g7

0x899f,	// (0x0006b594) cale_month_pane_g8_ParamLimits

0x899f,	// (0x0006b594) cale_month_pane_g8

0x8a03,	// (0x0006b5f8) cale_month_pane_g9_ParamLimits

0x8a03,	// (0x0006b5f8) cale_month_pane_g9

0x8a5d,	// (0x0006b652) cale_month_pane_g10_ParamLimits

0x8a5d,	// (0x0006b652) cale_month_pane_g10

0x8aaf,	// (0x0006b6a4) cale_month_pane_g11_ParamLimits

0x8aaf,	// (0x0006b6a4) cale_month_pane_g11

0x8afd,	// (0x0006b6f2) cale_month_pane_g12_ParamLimits

0x8afd,	// (0x0006b6f2) cale_month_pane_g12

0x8b4d,	// (0x0006b742) cale_month_pane_g13_ParamLimits

0x8b4d,	// (0x0006b742) cale_month_pane_g13

0x000c,

0xf23f,	// (0x00071e34) cale_month_pane_g_ParamLimits

0xf23f,	// (0x00071e34) cale_month_pane_g

0x8b9d,	// (0x0006b792) cale_month_week_pane

0x8bbd,	// (0x0006b7b2) grid_cale_month_pane_ParamLimits

0x8bbd,	// (0x0006b7b2) grid_cale_month_pane

0x8c16,	// (0x0006b80b) cale_month_day_heading_pane_t1

0x8c98,	// (0x0006b88d) cale_month_day_heading_pane_t2

0x8d11,	// (0x0006b906) cale_month_day_heading_pane_t3

0x8d8a,	// (0x0006b97f) cale_month_day_heading_pane_t4

0x8e03,	// (0x0006b9f8) cale_month_day_heading_pane_t5

0x8e84,	// (0x0006ba79) cale_month_day_heading_pane_t6

0x8f0d,	// (0x0006bb02) cale_month_day_heading_pane_t7

0x0006,

0xf25a,	// (0x00071e4f) cale_month_day_heading_pane_t

0x0c63,	// (0x00063858) bg_cale_side_pane_cp01

0x8f96,	// (0x0006bb8b) cale_month_week_pane_t1

0x8faf,	// (0x0006bba4) cale_month_week_pane_t2

0x8fc8,	// (0x0006bbbd) cale_month_week_pane_t3

0x8fe1,	// (0x0006bbd6) cale_month_week_pane_t4

0x8ffa,	// (0x0006bbef) cale_month_week_pane_t5

0x9017,	// (0x0006bc0c) cale_month_week_pane_t6

0x0005,

0xf269,	// (0x00071e5e) cale_month_week_pane_t

0x903a,	// (0x0006bc2f) cell_cale_month_pane_ParamLimits

0x903a,	// (0x0006bc2f) cell_cale_month_pane

0x9168,	// (0x0006bd5d) cell_cale_month_pane_g1

0x9174,	// (0x0006bd69) cell_cale_month_pane_t1_ParamLimits

0x9174,	// (0x0006bd69) cell_cale_month_pane_t1

0x0c71,	// (0x00063866) grid_highlight_pane_cp08

0x09a6,	// (0x0006359b) main_smil_g1

0x91a0,	// (0x0006bd95) smil_status_pane

0x101f,	// (0x00063c14) smil_text_pane

0x4d3c,	// (0x00067931) bg_popup_call3_rect_pane_g8

0x4d44,	// (0x00067939) bg_popup_call3_rect_pane_g9

0x0008,

0xf507,	// (0x000720fc) bg_popup_call3_rect_pane_g

0x4f15,	// (0x00067b0a) smil_status_volume_pane_g1

0x1029,	// (0x00063c1e) smil_status_pane_t1

0xa385,	// (0x0006cf7a) volume_smil_pane

0x1040,	// (0x00063c35) list_smil_text_pane

0x91b3,	// (0x0006bda8) scroll_pane_cp011

0x91be,	// (0x0006bdb3) smil_text_list_pane_t1_ParamLimits

0x91be,	// (0x0006bdb3) smil_text_list_pane_t1

0x9212,	// (0x0006be07) aid_volume_smil_ParamLimits

0x9212,	// (0x0006be07) aid_volume_smil

0x09a6,	// (0x0006359b) smil_volume_pane_g1

0x09a6,	// (0x0006359b) smil_volume_pane_g2

0x0001,

0xf27b,	// (0x00071e70) smil_volume_pane_g

0x788e,	// (0x0006a483) listscroll_cale_day_pane

0x106c,	// (0x00063c61) bg_cale_pane

0x1084,	// (0x00063c79) list_cale_pane

0x10a7,	// (0x00063c9c) scroll_pane_cp09

0x10b8,	// (0x00063cad) cale_bg_pane_g1

0x10c0,	// (0x00063cb5) cale_bg_pane_g2

0x10c8,	// (0x00063cbd) cale_bg_pane_g3

0x10d0,	// (0x00063cc5) cale_bg_pane_g4

0x10d8,	// (0x00063ccd) cale_bg_pane_g5

0x10e0,	// (0x00063cd5) cale_bg_pane_g6

0x10e8,	// (0x00063cdd) cale_bg_pane_g7

0x10f0,	// (0x00063ce5) cale_bg_pane_g8

0x10f8,	// (0x00063ced) cale_bg_pane_g9

0x0008,

0xf280,	// (0x00071e75) cale_bg_pane_g

0x923c,	// (0x0006be31) list_cale_time_pane_ParamLimits

0x923c,	// (0x0006be31) list_cale_time_pane

0x1100,	// (0x00063cf5) list_cale_time_pane_g1_ParamLimits

0x1100,	// (0x00063cf5) list_cale_time_pane_g1

0x110c,	// (0x00063d01) list_cale_time_pane_g2_ParamLimits

0x110c,	// (0x00063d01) list_cale_time_pane_g2

0x9253,	// (0x0006be48) list_cale_time_pane_g3_ParamLimits

0x9253,	// (0x0006be48) list_cale_time_pane_g3

0x9261,	// (0x0006be56) list_cale_time_pane_g4_ParamLimits

0x9261,	// (0x0006be56) list_cale_time_pane_g4

0x926f,	// (0x0006be64) list_cale_time_pane_g5_ParamLimits

0x926f,	// (0x0006be64) list_cale_time_pane_g5

0x0005,

0xf293,	// (0x00071e88) list_cale_time_pane_g_ParamLimits

0xf293,	// (0x00071e88) list_cale_time_pane_g

0x1126,	// (0x00063d1b) list_cale_time_pane_t1_ParamLimits

0x1126,	// (0x00063d1b) list_cale_time_pane_t1

0x114e,	// (0x00063d43) list_cale_time_pane_t2_ParamLimits

0x114e,	// (0x00063d43) list_cale_time_pane_t2

0x952c,	// (0x0006c121) aid_blid_cardinal_pane

0x956e,	// (0x0006c163) compass_pane_t4

0x1176,	// (0x00063d6b) list_cale_time_pane_t4_ParamLimits

0x1176,	// (0x00063d6b) list_cale_time_pane_t4

0x957c,	// (0x0006c171) compass_pane_t5

0x958c,	// (0x0006c181) compass_pane_t6

0x959a,	// (0x0006c18f) compass_pane_t7

0x1603,	// (0x000641f8) navi_pane_cc_t1

0x1762,	// (0x00064357) aid_phob_thumbnail_center_pane

0x9a63,	// (0x0006c658) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2a0,	// (0x00071e95) list_cale_time_pane_t_ParamLimits

0xf2a0,	// (0x00071e95) list_cale_time_pane_t

0x038a,	// (0x00062f7f) bg_popup_window_pane_cp02_ParamLimits

0x038a,	// (0x00062f7f) bg_popup_window_pane_cp02

0x119e,	// (0x00063d93) heading_pane_cp01_ParamLimits

0x119e,	// (0x00063d93) heading_pane_cp01

0x11aa,	// (0x00063d9f) loc_req_pane_ParamLimits

0x11aa,	// (0x00063d9f) loc_req_pane

0x11ba,	// (0x00063daf) loc_type_pane_ParamLimits

0x11ba,	// (0x00063daf) loc_type_pane

0x11cc,	// (0x00063dc1) loc_type_pane_t1_ParamLimits

0x11cc,	// (0x00063dc1) loc_type_pane_t1

0x11de,	// (0x00063dd3) loc_type_pane_t2_ParamLimits

0x11de,	// (0x00063dd3) loc_type_pane_t2

0x11f0,	// (0x00063de5) loc_type_pane_t3_ParamLimits

0x11f0,	// (0x00063de5) loc_type_pane_t3

0x0002,

0xf2a7,	// (0x00071e9c) loc_type_pane_t_ParamLimits

0xf2a7,	// (0x00071e9c) loc_type_pane_t

0x1202,	// (0x00063df7) list_loc_req_pane

0x120c,	// (0x00063e01) scroll_pane_cp012

0x927d,	// (0x0006be72) list_single_loc_request_popup_menu_pane_ParamLimits

0x927d,	// (0x0006be72) list_single_loc_request_popup_menu_pane

0x1217,	// (0x00063e0c) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x1217,	// (0x00063e0c) list_single_loc_request_popup_menu_pane_g1

0x1223,	// (0x00063e18) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x1223,	// (0x00063e18) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf2ae,	// (0x00071ea3) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf2ae,	// (0x00071ea3) list_single_loc_request_popup_menu_pane_g

0x122f,	// (0x00063e24) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x122f,	// (0x00063e24) list_single_loc_request_popup_menu_pane_t1

0x928f,	// (0x0006be84) bg_popup_window_pane_cp03_ParamLimits

0x928f,	// (0x0006be84) bg_popup_window_pane_cp03

0x929d,	// (0x0006be92) heading_loc_req_pane_ParamLimits

0x929d,	// (0x0006be92) heading_loc_req_pane

0x92a9,	// (0x0006be9e) popup_dyc_status_message_window_g1_ParamLimits

0x92a9,	// (0x0006be9e) popup_dyc_status_message_window_g1

0x92b5,	// (0x0006beaa) popup_dyc_status_message_window_t1_ParamLimits

0x92b5,	// (0x0006beaa) popup_dyc_status_message_window_t1

0x92c7,	// (0x0006bebc) popup_dyc_status_message_window_t2_ParamLimits

0x92c7,	// (0x0006bebc) popup_dyc_status_message_window_t2

0x92d9,	// (0x0006bece) popup_dyc_status_message_window_t3_ParamLimits

0x92d9,	// (0x0006bece) popup_dyc_status_message_window_t3

0x0002,

0xf2b3,	// (0x00071ea8) popup_dyc_status_message_window_t_ParamLimits

0xf2b3,	// (0x00071ea8) popup_dyc_status_message_window_t

0x0733,	// (0x00063328) bg_heading_pane_cp01

0x1251,	// (0x00063e46) heading_loc_req_pane_g1

0x1259,	// (0x00063e4e) heading_loc_req_pane_g2

0x1261,	// (0x00063e56) heading_loc_req_pane_g3

0x0002,

0xf2ba,	// (0x00071eaf) heading_loc_req_pane_g

0x1269,	// (0x00063e5e) heading_loc_req_pane_t1

0x1289,	// (0x00063e7e) bg_popup_sub_pane_cp01_ParamLimits

0x1289,	// (0x00063e7e) bg_popup_sub_pane_cp01

0x1297,	// (0x00063e8c) popup_cale_events_window_g1_ParamLimits

0x1297,	// (0x00063e8c) popup_cale_events_window_g1

0x12b7,	// (0x00063eac) popup_cale_events_window_g2_ParamLimits

0x12b7,	// (0x00063eac) popup_cale_events_window_g2

0x0001,

0xf2dc,	// (0x00071ed1) popup_cale_events_window_g_ParamLimits

0xf2dc,	// (0x00071ed1) popup_cale_events_window_g

0x12d7,	// (0x00063ecc) popup_cale_events_window_t1_ParamLimits

0x12d7,	// (0x00063ecc) popup_cale_events_window_t1

0x12e9,	// (0x00063ede) popup_cale_events_window_t2_ParamLimits

0x12e9,	// (0x00063ede) popup_cale_events_window_t2

0x1327,	// (0x00063f1c) popup_cale_events_window_t3_ParamLimits

0x1327,	// (0x00063f1c) popup_cale_events_window_t3

0x1361,	// (0x00063f56) popup_cale_events_window_t4_ParamLimits

0x1361,	// (0x00063f56) popup_cale_events_window_t4

0x0003,

0xf2e1,	// (0x00071ed6) popup_cale_events_window_t_ParamLimits

0xf2e1,	// (0x00071ed6) popup_cale_events_window_t

0x9303,	// (0x0006bef8) call_type_pane

0x4553,	// (0x00067148) popup_call_status_window_g1

0x930f,	// (0x0006bf04) popup_call_status_window_g2

0x931b,	// (0x0006bf10) popup_call_status_window_g3

0x0002,

0xf2ea,	// (0x00071edf) popup_call_status_window_g

0x1397,	// (0x00063f8c) call_type_pane_g1

0x13a0,	// (0x00063f95) call_type_pane_g2

0x0001,

0xf2f1,	// (0x00071ee6) call_type_pane_g

0x0733,	// (0x00063328) bg_popup_sub_pane_cp02

0x13a9,	// (0x00063f9e) listscroll_popup_wml_pane

0x13b1,	// (0x00063fa6) list_wml_pane

0x13bb,	// (0x00063fb0) scroll_pane_cp013

0x13c6,	// (0x00063fbb) list_single_graphic_popup_wml_pane_ParamLimits

0x13c6,	// (0x00063fbb) list_single_graphic_popup_wml_pane

0x09a6,	// (0x0006359b) list_single_graphic_popup_wml_pane_g1

0x13da,	// (0x00063fcf) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2f6,	// (0x00071eeb) list_single_graphic_popup_wml_pane_g

0x13e2,	// (0x00063fd7) list_single_graphic_popup_wml_pane_t1

0x13f0,	// (0x00063fe5) aid_call_pane

0x0986,	// (0x0006357b) popup_clock_analogue_window_g1

0x0986,	// (0x0006357b) popup_clock_analogue_window_g2

0x9327,	// (0x0006bf1c) popup_clock_analogue_window_g3

0x9327,	// (0x0006bf1c) popup_clock_analogue_window_g4

0x09a6,	// (0x0006359b) popup_clock_analogue_window_g5

0x0004,

0xf2fb,	// (0x00071ef0) popup_clock_analogue_window_g

0x932f,	// (0x0006bf24) popup_clock_analogue_window_t1

0x933d,	// (0x0006bf32) clock_digital_number_pane_ParamLimits

0x933d,	// (0x0006bf32) clock_digital_number_pane

0x9349,	// (0x0006bf3e) clock_digital_number_pane_cp02_ParamLimits

0x9349,	// (0x0006bf3e) clock_digital_number_pane_cp02

0x9355,	// (0x0006bf4a) clock_digital_number_pane_cp03_ParamLimits

0x9355,	// (0x0006bf4a) clock_digital_number_pane_cp03

0x9361,	// (0x0006bf56) clock_digital_number_pane_cp04_ParamLimits

0x9361,	// (0x0006bf56) clock_digital_number_pane_cp04

0x936d,	// (0x0006bf62) clock_digital_separator_pane_ParamLimits

0x936d,	// (0x0006bf62) clock_digital_separator_pane

0x9379,	// (0x0006bf6e) popup_clock_digital_window_t1

0x09a6,	// (0x0006359b) clock_digital_number_pane_g1

0x09a6,	// (0x0006359b) clock_digital_number_pane_g2

0x0001,

0xf27b,	// (0x00071e70) clock_digital_number_pane_g

0x09a6,	// (0x0006359b) clock_digital_separator_pane_g1

0x09a6,	// (0x0006359b) clock_digital_separator_pane_g2

0x0001,

0xf27b,	// (0x00071e70) clock_digital_separator_pane_g

0x0733,	// (0x00063328) bg_popup_window_pane_cp04

0x146f,	// (0x00064064) heading_pane_cp03

0x0cbe,	// (0x000638b3) listscroll_popup_gms_pane

0x0733,	// (0x00063328) grid_large_graphic_popup_pane

0x1478,	// (0x0006406d) listscroll_popup_gms_pane_g1

0x1481,	// (0x00064076) listscroll_popup_gms_pane_g2

0x0001,

0xf306,	// (0x00071efb) listscroll_popup_gms_pane_g

0x148a,	// (0x0006407f) scroll_pane_cp014

0x0a09,	// (0x000635fe) cell_large_graphic_popup_pane_ParamLimits

0x0a09,	// (0x000635fe) cell_large_graphic_popup_pane

0x0a17,	// (0x0006360c) cell_large_graphic_popup_pane_g1_ParamLimits

0x0a17,	// (0x0006360c) cell_large_graphic_popup_pane_g1

0x1493,	// (0x00064088) cell_large_graphic_popup_pane_g2_ParamLimits

0x1493,	// (0x00064088) cell_large_graphic_popup_pane_g2

0x14a1,	// (0x00064096) cell_large_graphic_popup_pane_g3_ParamLimits

0x14a1,	// (0x00064096) cell_large_graphic_popup_pane_g3

0x14af,	// (0x000640a4) cell_large_graphic_popup_pane_g4_ParamLimits

0x14af,	// (0x000640a4) cell_large_graphic_popup_pane_g4

0x0003,

0xf30b,	// (0x00071f00) cell_large_graphic_popup_pane_g_ParamLimits

0xf30b,	// (0x00071f00) cell_large_graphic_popup_pane_g

0x0733,	// (0x00063328) grid_highlight_pane_cp010

0x09a6,	// (0x0006359b) bg_popup_call_pane_g1

0x14c0,	// (0x000640b5) list_single_graphic_popup_conf_pane_ParamLimits

0x14c0,	// (0x000640b5) list_single_graphic_popup_conf_pane

0x14d2,	// (0x000640c7) list_highlight_pane_cp01

0x14db,	// (0x000640d0) list_single_graphic_popup_conf_pane_g1

0x14e3,	// (0x000640d8) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf314,	// (0x00071f09) list_single_graphic_popup_conf_pane_g

0x14eb,	// (0x000640e0) list_single_graphic_popup_conf_pane_t1

0x14f9,	// (0x000640ee) linegrid_cams_pane_g1

0x9396,	// (0x0006bf8b) linegrid_cams_pane_g2

0x0ca4,	// (0x00063899) linegrid_cams_pane_g3

0x1502,	// (0x000640f7) linegrid_cams_pane_g4

0x939f,	// (0x0006bf94) linegrid_cams_pane_g5

0x93a8,	// (0x0006bf9d) linegrid_cams_pane_g6

0x0cad,	// (0x000638a2) linegrid_cams_pane_g7

0x0006,

0xf319,	// (0x00071f0e) linegrid_cams_pane_g

0x150b,	// (0x00064100) popup_clock_analogue_window

0x150b,	// (0x00064100) popup_clock_digital_window

0x0733,	// (0x00063328) popup_phob_thumbnail_window

0x09a6,	// (0x0006359b) call_video_uplink_pane_g1

0x1514,	// (0x00064109) call_video_uplink_pane_g2

0x0001,

0xf328,	// (0x00071f1d) call_video_uplink_pane_g

0x151c,	// (0x00064111) video_uplink_pane

0x1524,	// (0x00064119) mce_image_pane_g1

0x93b3,	// (0x0006bfa8) mce_image_pane_g2

0x93bd,	// (0x0006bfb2) mce_image_pane_g3

0x93c7,	// (0x0006bfbc) mce_image_pane_g4

0x93cf,	// (0x0006bfc4) mce_image_pane_g5

0x0004,

0xf32d,	// (0x00071f22) mce_image_pane_g

0x152e,	// (0x00064123) control_top_pane_stacon_cp01_ParamLimits

0x152e,	// (0x00064123) control_top_pane_stacon_cp01

0x1542,	// (0x00064137) uni_indicator_pane_stacon_cp01_ParamLimits

0x1542,	// (0x00064137) uni_indicator_pane_stacon_cp01

0x1553,	// (0x00064148) bg_popup_sub_pane_cp03

0x93d7,	// (0x0006bfcc) chi_dic_find_pane

0x93df,	// (0x0006bfd4) listscroll_chi_dic_pane

0x93e8,	// (0x0006bfdd) main_pane_chidic_g1

0x93fb,	// (0x0006bff0) chi_dic_find_pane_t1

0x155d,	// (0x00064152) find_chidic_pane

0x1566,	// (0x0006415b) chi_dic_list_pane_ParamLimits

0x1566,	// (0x0006415b) chi_dic_list_pane

0x1577,	// (0x0006416c) scroll_pane_cp020

0x9409,	// (0x0006bffe) find_chidic_pane_t1

0x0733,	// (0x00063328) input_focus_pane_cp06

0x0cc6,	// (0x000638bb) list_chi_dic_pane_ParamLimits

0x0cc6,	// (0x000638bb) list_chi_dic_pane

0x9418,	// (0x0006c00d) list_chi_dic_pane_t1_ParamLimits

0x9418,	// (0x0006c00d) list_chi_dic_pane_t1

0x0733,	// (0x00063328) list_highlight_pane_cp020

0x157f,	// (0x00064174) bg_cale_heading_pane_g1

0x942b,	// (0x0006c020) bg_cale_heading_pane_g2

0x9433,	// (0x0006c028) bg_cale_heading_pane_g3

0x943b,	// (0x0006c030) bg_cale_heading_pane_g4

0x9445,	// (0x0006c03a) bg_cale_heading_pane_g5

0x944f,	// (0x0006c044) bg_cale_heading_pane_g6

0x9457,	// (0x0006c04c) bg_cale_heading_pane_g7

0x945f,	// (0x0006c054) bg_cale_heading_pane_g8

0x9469,	// (0x0006c05e) bg_cale_heading_pane_g9

0x0008,

0xf338,	// (0x00071f2d) bg_cale_heading_pane_g

0x157f,	// (0x00064174) bg_cale_side_pane_g1

0x9473,	// (0x0006c068) bg_cale_side_pane_g2

0x947d,	// (0x0006c072) bg_cale_side_pane_g3

0x9487,	// (0x0006c07c) bg_cale_side_pane_g4

0x9491,	// (0x0006c086) bg_cale_side_pane_g5

0x949b,	// (0x0006c090) bg_cale_side_pane_g6

0x94a5,	// (0x0006c09a) bg_cale_side_pane_g7

0x94af,	// (0x0006c0a4) bg_cale_side_pane_g8

0x94b7,	// (0x0006c0ac) bg_cale_side_pane_g9

0x0008,

0xf34b,	// (0x00071f40) bg_cale_side_pane_g

0x94bf,	// (0x0006c0b4) popup_call_status_window_ParamLimits

0x94bf,	// (0x0006c0b4) popup_call_status_window

0x1587,	// (0x0006417c) stacon_top_pane

0x158f,	// (0x00064184) status_pane_ParamLimits

0x158f,	// (0x00064184) status_pane

0x15a4,	// (0x00064199) status_small_pane

0x15ac,	// (0x000641a1) control_pane

0x0733,	// (0x00063328) stacon_bottom_pane

0x15b4,	// (0x000641a9) list_single_mce_smart_pane_t1_ParamLimits

0x15b4,	// (0x000641a9) list_single_mce_smart_pane_t1

0x15c7,	// (0x000641bc) list_single_mce_smart_pane_t2_ParamLimits

0x15c7,	// (0x000641bc) list_single_mce_smart_pane_t2

0x0001,

0xf35e,	// (0x00071f53) list_single_mce_smart_pane_t_ParamLimits

0xf35e,	// (0x00071f53) list_single_mce_smart_pane_t

0x94cb,	// (0x0006c0c0) compass_pane

0x94d6,	// (0x0006c0cb) main_location2_pane_t1

0x94ec,	// (0x0006c0e1) main_location2_pane_t2

0x9502,	// (0x0006c0f7) main_location2_pane_t3

0x0003,

0xf363,	// (0x00071f58) main_location2_pane_t

0x15e6,	// (0x000641db) compass_pane_g1_ParamLimits

0x15e6,	// (0x000641db) compass_pane_g1

0x9550,	// (0x0006c145) compass_pane_t1

0x955f,	// (0x0006c154) compass_pane_t2

0x0005,

0xf36c,	// (0x00071f61) compass_pane_t

0x95aa,	// (0x0006c19f) text_secondary_cp61

0x15fa,	// (0x000641ef) navi_pane_cams_g5

0x161d,	// (0x00064212) navi_pane_im_t1

0x162b,	// (0x00064220) navi_pane_mp_g1_ParamLimits

0x162b,	// (0x00064220) navi_pane_mp_g1

0x163f,	// (0x00064234) navi_pane_mp_g2_ParamLimits

0x163f,	// (0x00064234) navi_pane_mp_g2

0x164b,	// (0x00064240) navi_pane_mp_g3_ParamLimits

0x164b,	// (0x00064240) navi_pane_mp_g3

0x0002,

0xf380,	// (0x00071f75) navi_pane_mp_g_ParamLimits

0xf380,	// (0x00071f75) navi_pane_mp_g

0x1657,	// (0x0006424c) navi_pane_mp_t1

0x1665,	// (0x0006425a) navi_pane_mp_t2

0x0002,

0xf387,	// (0x00071f7c) navi_pane_mp_t

0x16a1,	// (0x00064296) navi_pane_vt_g1

0x1657,	// (0x0006424c) navi_pane_vt_t1

0x16a9,	// (0x0006429e) navi_slider_pane

0x0cbe,	// (0x000638b3) zooming_pane

0x16b1,	// (0x000642a6) navi_slider_pane_g1

0x96df,	// (0x0006c2d4) navi_slider_pane_g2

0x0006,

0xf38e,	// (0x00071f83) navi_slider_pane_g

0x16e7,	// (0x000642dc) aid_levels_zoom

0x16ef,	// (0x000642e4) zooming_pane_g1

0x16f7,	// (0x000642ec) zooming_pane_g2

0x16f7,	// (0x000642ec) zooming_pane_g3

0x0002,

0xf39d,	// (0x00071f92) zooming_pane_g

0x16ff,	// (0x000642f4) level_10_zoom

0x1708,	// (0x000642fd) level_11_zoom

0x1711,	// (0x00064306) level_1_zoom

0x171a,	// (0x0006430f) level_2_zoom

0x1723,	// (0x00064318) level_3_zoom

0x172c,	// (0x00064321) level_4_zoom

0x1735,	// (0x0006432a) level_5_zoom

0x173e,	// (0x00064333) level_6_zoom

0x1747,	// (0x0006433c) level_7_zoom

0x1750,	// (0x00064345) level_8_zoom

0x1759,	// (0x0006434e) level_9_zoom

0x176a,	// (0x0006435f) popup_phob_thumbnail_window_g1

0x1772,	// (0x00064367) popup_phob_thumbnail_window_g2

0x0001,

0xf3a4,	// (0x00071f99) popup_phob_thumbnail_window_g

0xa027,	// (0x0006cc1c) level_1_location

0xa02f,	// (0x0006cc24) level_2_location

0xa037,	// (0x0006cc2c) level_3_location

0xa041,	// (0x0006cc36) level_4_location

0x0cbe,	// (0x000638b3) level_5_location

0x96f1,	// (0x0006c2e6) mce_icon_pane_g1

0x96f9,	// (0x0006c2ee) mce_icon_pane_g2

0x0001,

0xf3a9,	// (0x00071f9e) mce_icon_pane_g

0x9701,	// (0x0006c2f6) main_mup_pane_g1_ParamLimits

0x9701,	// (0x0006c2f6) main_mup_pane_g1

0x0a33,	// (0x00063628) main_mup_pane_g2_ParamLimits

0x0a33,	// (0x00063628) main_mup_pane_g2

0x0a33,	// (0x00063628) main_mup_pane_g3_ParamLimits

0x0a33,	// (0x00063628) main_mup_pane_g3

0x0a33,	// (0x00063628) main_mup_pane_g4_ParamLimits

0x0a33,	// (0x00063628) main_mup_pane_g4

0x0a33,	// (0x00063628) main_mup_pane_g5_ParamLimits

0x0a33,	// (0x00063628) main_mup_pane_g5

0x0a33,	// (0x00063628) main_mup_pane_g6_ParamLimits

0x0a33,	// (0x00063628) main_mup_pane_g6

0x0a33,	// (0x00063628) main_mup_pane_g7_ParamLimits

0x0a33,	// (0x00063628) main_mup_pane_g7

0x0a33,	// (0x00063628) main_mup_pane_g8_ParamLimits

0x0a33,	// (0x00063628) main_mup_pane_g8

0x0a33,	// (0x00063628) main_mup_pane_g9_ParamLimits

0x0a33,	// (0x00063628) main_mup_pane_g9

0x0a33,	// (0x00063628) main_mup_pane_g10_ParamLimits

0x0a33,	// (0x00063628) main_mup_pane_g10

0x0a33,	// (0x00063628) main_mup_pane_g11_ParamLimits

0x0a33,	// (0x00063628) main_mup_pane_g11

0x0a25,	// (0x0006361a) main_mup_pane_g12_ParamLimits

0x0a25,	// (0x0006361a) main_mup_pane_g12

0x0a33,	// (0x00063628) main_mup_pane_g13_ParamLimits

0x0a33,	// (0x00063628) main_mup_pane_g13

0x000c,

0xf3ae,	// (0x00071fa3) main_mup_pane_g_ParamLimits

0xf3ae,	// (0x00071fa3) main_mup_pane_g

0x0a41,	// (0x00063636) main_mup_pane_t1_ParamLimits

0x0a41,	// (0x00063636) main_mup_pane_t1

0x0a41,	// (0x00063636) main_mup_pane_t2_ParamLimits

0x0a41,	// (0x00063636) main_mup_pane_t2

0x0a41,	// (0x00063636) main_mup_pane_t3_ParamLimits

0x0a41,	// (0x00063636) main_mup_pane_t3

0x179c,	// (0x00064391) main_mup_pane_t4_ParamLimits

0x179c,	// (0x00064391) main_mup_pane_t4

0x179c,	// (0x00064391) main_mup_pane_t5_ParamLimits

0x179c,	// (0x00064391) main_mup_pane_t5

0x0ce5,	// (0x000638da) main_mup_pane_t6_ParamLimits

0x0ce5,	// (0x000638da) main_mup_pane_t6

0x0005,

0xf3c9,	// (0x00071fbe) main_mup_pane_t_ParamLimits

0xf3c9,	// (0x00071fbe) main_mup_pane_t

0x09b0,	// (0x000635a5) mup_progress_pane_ParamLimits

0x09b0,	// (0x000635a5) mup_progress_pane

0x4561,	// (0x00067156) mup_visualizer_pane_ParamLimits

0x4561,	// (0x00067156) mup_visualizer_pane

0x4561,	// (0x00067156) mup_volume_pane_ParamLimits

0x4561,	// (0x00067156) mup_volume_pane

0x0a25,	// (0x0006361a) mup_visualizer_pane_g1_ParamLimits

0x0a25,	// (0x0006361a) mup_visualizer_pane_g1

0x17be,	// (0x000643b3) mup_visualizer_pane_g2_ParamLimits

0x17be,	// (0x000643b3) mup_visualizer_pane_g2

0x0a17,	// (0x0006360c) mup_visualizer_pane_g3_ParamLimits

0x0a17,	// (0x0006360c) mup_visualizer_pane_g3

0x0002,

0xf3d6,	// (0x00071fcb) mup_visualizer_pane_g_ParamLimits

0xf3d6,	// (0x00071fcb) mup_visualizer_pane_g

0x0d13,	// (0x00063908) mup_volume_pane_g1

0x0d13,	// (0x00063908) mup_volume_pane_g2

0x0001,

0xf3dd,	// (0x00071fd2) mup_volume_pane_g

0x0d13,	// (0x00063908) mup_progress_pane_g1

0x0d13,	// (0x00063908) mup_progress_pane_g2

0x0d13,	// (0x00063908) mup_progress_pane_g3

0x0002,

0xf3e2,	// (0x00071fd7) mup_progress_pane_g

0x0733,	// (0x00063328) bg_popup_window_pane_cp05

0x17cc,	// (0x000643c1) heading_pane_cp02_ParamLimits

0x17cc,	// (0x000643c1) heading_pane_cp02

0x17e8,	// (0x000643dd) list_popup_blid_pane

0x17f0,	// (0x000643e5) list_blid_sat_info_pane_ParamLimits

0x17f0,	// (0x000643e5) list_blid_sat_info_pane

0x1803,	// (0x000643f8) list_blid_sat_info_pane_g1

0x180b,	// (0x00064400) list_blid_sat_info_pane_t1

0x9810,	// (0x0006c405) mup_equalizer_pane_ParamLimits

0x9810,	// (0x0006c405) mup_equalizer_pane

0x9831,	// (0x0006c426) mup_equalizer_pane_cp1_ParamLimits

0x9831,	// (0x0006c426) mup_equalizer_pane_cp1

0x9852,	// (0x0006c447) mup_equalizer_pane_cp2_ParamLimits

0x9852,	// (0x0006c447) mup_equalizer_pane_cp2

0x9873,	// (0x0006c468) mup_equalizer_pane_cp3_ParamLimits

0x9873,	// (0x0006c468) mup_equalizer_pane_cp3

0x9898,	// (0x0006c48d) mup_equalizer_pane_cp4_ParamLimits

0x9898,	// (0x0006c48d) mup_equalizer_pane_cp4

0x98bd,	// (0x0006c4b2) mup_equalizer_pane_cp5

0x98d5,	// (0x0006c4ca) mup_equalizer_pane_cp6

0x98ed,	// (0x0006c4e2) mup_equalizer_pane_cp7

0x4dbc,	// (0x000679b1) bg_popup_call_poc_act_pane_g9

0x4dc4,	// (0x000679b9) bg_popup_call_poc_act_pane_g10

0x4dcc,	// (0x000679c1) bg_popup_call_poc_act_pane_g11

0x000a,

0x098e,	// (0x00063583) mup_scale_pane

0x09a6,	// (0x0006359b) mup_scale_pane_g1

0x1819,	// (0x0006440e) mup_scale_pane_g2

0x0006,

0xf3fe,	// (0x00071ff3) mup_scale_pane_g

0x183d,	// (0x00064432) msg_data_pane

0x1845,	// (0x0006443a) scroll_pane_cp017

0x6505,	// (0x000690fa) bg_list_pane_cp04_ParamLimits

0x6505,	// (0x000690fa) bg_list_pane_cp04

0x184d,	// (0x00064442) msg_data_pane_g1

0x9917,	// (0x0006c50c) msg_data_pane_g2

0x9921,	// (0x0006c516) msg_data_pane_g3

0x992b,	// (0x0006c520) msg_data_pane_g4

0x9933,	// (0x0006c528) msg_data_pane_g5

0x993b,	// (0x0006c530) msg_data_pane_g6

0x9943,	// (0x0006c538) msg_data_pane_g7

0x0006,

0xf40d,	// (0x00072002) msg_data_pane_g

0x652d,	// (0x00069122) msg_text_pane_ParamLimits

0x652d,	// (0x00069122) msg_text_pane

0x994b,	// (0x0006c540) qrid_highlight_pane_cp011_ParamLimits

0x994b,	// (0x0006c540) qrid_highlight_pane_cp011

0x0733,	// (0x00063328) msg_body_pane

0x0733,	// (0x00063328) msg_header_pane

0x185e,	// (0x00064453) input_focus_pane_cp07

0x6565,	// (0x0006915a) msg_header_pane_t1_ParamLimits

0x6565,	// (0x0006915a) msg_header_pane_t1

0x657b,	// (0x00069170) msg_header_pane_t2_ParamLimits

0x657b,	// (0x00069170) msg_header_pane_t2

0x0001,

0xf421,	// (0x00072016) msg_header_pane_t_ParamLimits

0xf421,	// (0x00072016) msg_header_pane_t

0x1873,	// (0x00064468) msg_body_pane_g1

0x6592,	// (0x00069187) msg_body_pane_t1_ParamLimits

0x6592,	// (0x00069187) msg_body_pane_t1

0x65c3,	// (0x000691b8) msg_body_pane_t2_ParamLimits

0x65c3,	// (0x000691b8) msg_body_pane_t2

0x65d5,	// (0x000691ca) msg_body_pane_t3_ParamLimits

0x65d5,	// (0x000691ca) msg_body_pane_t3

0x0002,

0xf426,	// (0x0007201b) msg_body_pane_t_ParamLimits

0xf426,	// (0x0007201b) msg_body_pane_t

0x99b3,	// (0x0006c5a8) main_viewer_pane_g1_ParamLimits

0x99b3,	// (0x0006c5a8) main_viewer_pane_g1

0x99bf,	// (0x0006c5b4) main_viewer_pane_g2_ParamLimits

0x99bf,	// (0x0006c5b4) main_viewer_pane_g2

0x99cb,	// (0x0006c5c0) main_viewer_pane_g3_ParamLimits

0x99cb,	// (0x0006c5c0) main_viewer_pane_g3

0x99dc,	// (0x0006c5d1) main_viewer_pane_g4_ParamLimits

0x99dc,	// (0x0006c5d1) main_viewer_pane_g4

0x99ed,	// (0x0006c5e2) main_viewer_pane_g5_ParamLimits

0x99ed,	// (0x0006c5e2) main_viewer_pane_g5

0x99ed,	// (0x0006c5e2) main_viewer_pane_g7_ParamLimits

0x99ed,	// (0x0006c5e2) main_viewer_pane_g7

0x99ff,	// (0x0006c5f4) main_viewer_pane_g8_ParamLimits

0x99ff,	// (0x0006c5f4) main_viewer_pane_g8

0x0007,

0xf436,	// (0x0007202b) main_viewer_pane_g_ParamLimits

0xf436,	// (0x0007202b) main_viewer_pane_g

0x18bd,	// (0x000644b2) viewer_content_pane_ParamLimits

0x18bd,	// (0x000644b2) viewer_content_pane

0x9a37,	// (0x0006c62c) main_postcard_pane_g1_ParamLimits

0x9a37,	// (0x0006c62c) main_postcard_pane_g1

0x9a45,	// (0x0006c63a) main_postcard_pane_g2_ParamLimits

0x9a45,	// (0x0006c63a) main_postcard_pane_g2

0x9a53,	// (0x0006c648) main_postcard_pane_g3_ParamLimits

0x9a53,	// (0x0006c648) main_postcard_pane_g3

0x0005,

0xf447,	// (0x0007203c) main_postcard_pane_g_ParamLimits

0xf447,	// (0x0007203c) main_postcard_pane_g

0x9a63,	// (0x0006c658) main_postcard_pane_g4

0x4f02,	// (0x00067af7) smil_status_volume_pane_g2

0x9a8f,	// (0x0006c684) postcard_pane_ParamLimits

0x9a8f,	// (0x0006c684) postcard_pane

0x4553,	// (0x00067148) postcard_pane_g1_ParamLimits

0x4553,	// (0x00067148) postcard_pane_g1

0x9ac9,	// (0x0006c6be) postcard_pane_g2_ParamLimits

0x9ac9,	// (0x0006c6be) postcard_pane_g2

0x9ad5,	// (0x0006c6ca) postcard_pane_g3_ParamLimits

0x9ad5,	// (0x0006c6ca) postcard_pane_g3

0x18d9,	// (0x000644ce) postcard_pane_g4_ParamLimits

0x18d9,	// (0x000644ce) postcard_pane_g4

0x9ae1,	// (0x0006c6d6) postcard_pane_g5_ParamLimits

0x9ae1,	// (0x0006c6d6) postcard_pane_g5

0x9aed,	// (0x0006c6e2) postcard_pane_g6_ParamLimits

0x9aed,	// (0x0006c6e2) postcard_pane_g6

0x18cb,	// (0x000644c0) postcard_pane_g7_ParamLimits

0x18cb,	// (0x000644c0) postcard_pane_g7

0x0006,

0xf454,	// (0x00072049) postcard_pane_g_ParamLimits

0xf454,	// (0x00072049) postcard_pane_g

0x9afb,	// (0x0006c6f0) main_mp2_pane_g1_ParamLimits

0x9afb,	// (0x0006c6f0) main_mp2_pane_g1

0x9b09,	// (0x0006c6fe) main_mp2_pane_g2_ParamLimits

0x9b09,	// (0x0006c6fe) main_mp2_pane_g2

0x9b15,	// (0x0006c70a) main_mp2_pane_g3_ParamLimits

0x9b15,	// (0x0006c70a) main_mp2_pane_g3

0x0002,

0xf463,	// (0x00072058) main_mp2_pane_g_ParamLimits

0xf463,	// (0x00072058) main_mp2_pane_g

0x9b21,	// (0x0006c716) main_mp2_pane_t1_ParamLimits

0x9b21,	// (0x0006c716) main_mp2_pane_t1

0x9b38,	// (0x0006c72d) main_mp2_pane_t2_ParamLimits

0x9b38,	// (0x0006c72d) main_mp2_pane_t2

0x9b4c,	// (0x0006c741) main_mp2_pane_t3_ParamLimits

0x9b4c,	// (0x0006c741) main_mp2_pane_t3

0x0002,

0xf46a,	// (0x0007205f) main_mp2_pane_t_ParamLimits

0xf46a,	// (0x0007205f) main_mp2_pane_t

0x18e7,	// (0x000644dc) pec_content_pane_ParamLimits

0x18e7,	// (0x000644dc) pec_content_pane

0x0e78,	// (0x00063a6d) scroll_pane_cp015

0x18f9,	// (0x000644ee) pec_attribute_pane_ParamLimits

0x18f9,	// (0x000644ee) pec_attribute_pane

0x9b5e,	// (0x0006c753) pec_content_pane_g1_ParamLimits

0x9b5e,	// (0x0006c753) pec_content_pane_g1

0x1909,	// (0x000644fe) pec_content_pane_t1_ParamLimits

0x1909,	// (0x000644fe) pec_content_pane_t1

0x191b,	// (0x00064510) pec_content_pane_t2_ParamLimits

0x191b,	// (0x00064510) pec_content_pane_t2

0x0001,

0xf471,	// (0x00072066) pec_content_pane_t_ParamLimits

0xf471,	// (0x00072066) pec_content_pane_t

0x9b6a,	// (0x0006c75f) list_single_graphic_pane_cp01_ParamLimits

0x9b6a,	// (0x0006c75f) list_single_graphic_pane_cp01

0x098e,	// (0x00063583) bg_popup_sub_pane_cp04

0x192d,	// (0x00064522) popup_mup_playback_window_g1

0x1939,	// (0x0006452e) popup_mup_playback_window_t1

0x194e,	// (0x00064543) popup_mup_playback_window_t2

0x0001,

0xf476,	// (0x0007206b) popup_mup_playback_window_t

0x1985,	// (0x0006457a) main_image_pane_g1_ParamLimits

0x1985,	// (0x0006457a) main_image_pane_g1

0x19c8,	// (0x000645bd) scroll_pane_cp018_ParamLimits

0x19c8,	// (0x000645bd) scroll_pane_cp018

0x19e0,	// (0x000645d5) scroll_pane_cp016_ParamLimits

0x19e0,	// (0x000645d5) scroll_pane_cp016

0x9bf8,	// (0x0006c7ed) smil2_image_pane_ParamLimits

0x9bf8,	// (0x0006c7ed) smil2_image_pane

0x9c2e,	// (0x0006c823) smil2_root_pane_ParamLimits

0x9c2e,	// (0x0006c823) smil2_root_pane

0x9c5a,	// (0x0006c84f) smil2_text_pane_ParamLimits

0x9c5a,	// (0x0006c84f) smil2_text_pane

0x0733,	// (0x00063328) bg_list_pane_cp06

0x1a1c,	// (0x00064611) grid_radio_pane

0x0733,	// (0x00063328) bg_popup_window_pane_cp06

0x1a26,	// (0x0006461b) main_fmradio_pane_t1

0x4dd4,	// (0x000679c9) heading_pane_cp04

0x1a34,	// (0x00064629) main_fmradio_pane_t2

0x4ddc,	// (0x000679d1) popup_cale_lunar_info_window_g1

0x1a42,	// (0x00064637) main_fmradio_pane_t3

0x4de4,	// (0x000679d9) popup_cale_lunar_info_window_g2

0x1a52,	// (0x00064647) main_fmradio_pane_t4

0x0001,

0x1a60,	// (0x00064655) main_fmradio_pane_t5

0x0004,

0xf556,	// (0x0007214b) popup_cale_lunar_info_window_g

0xf48b,	// (0x00072080) main_fmradio_pane_t

0x1a6e,	// (0x00064663) wait_bar_pane_cp03

0x1a76,	// (0x0006466b) cell_fmradio_pane_ParamLimits

0x1a76,	// (0x0006466b) cell_fmradio_pane

0x18cb,	// (0x000644c0) cell_fmradio_pane_g1_ParamLimits

0x18cb,	// (0x000644c0) cell_fmradio_pane_g1

0x0733,	// (0x00063328) grid_highlight_pane_cp011

0x1a8b,	// (0x00064680) poc_content_pane_ParamLimits

0x1a8b,	// (0x00064680) poc_content_pane

0x1a9d,	// (0x00064692) scroll_pane_cp019

0x9c9a,	// (0x0006c88f) popup_call_poc_act_window_ParamLimits

0x9c9a,	// (0x0006c88f) popup_call_poc_act_window

0x9ca7,	// (0x0006c89c) popup_call_poc_inact_window_ParamLimits

0x9ca7,	// (0x0006c89c) popup_call_poc_inact_window

0xf52d,	// (0x00072122) bg_popup_call_poc_act_pane_g

0x4d4c,	// (0x00067941) bg_popup_call_poc_inact_pane_g1

0x4d54,	// (0x00067949) bg_popup_call_poc_inact_pane_g2

0x1aa5,	// (0x0006469a) popup_call_poc_act_window_g2

0x4d5c,	// (0x00067951) bg_popup_call_poc_inact_pane_g3

0x4d64,	// (0x00067959) bg_popup_call_poc_inact_pane_g4

0x4d6c,	// (0x00067961) bg_popup_call_poc_inact_pane_g5

0x1aad,	// (0x000646a2) popup_call_poc_act_window_t1_ParamLimits

0x1aad,	// (0x000646a2) popup_call_poc_act_window_t1

0x1ad5,	// (0x000646ca) popup_call_poc_act_window_t2_ParamLimits

0x1ad5,	// (0x000646ca) popup_call_poc_act_window_t2

0x1afd,	// (0x000646f2) popup_call_poc_act_window_t3_ParamLimits

0x1afd,	// (0x000646f2) popup_call_poc_act_window_t3

0x1b25,	// (0x0006471a) popup_call_poc_act_window_t4_ParamLimits

0x1b25,	// (0x0006471a) popup_call_poc_act_window_t4

0x0003,

0xf496,	// (0x0007208b) popup_call_poc_act_window_t_ParamLimits

0xf496,	// (0x0007208b) popup_call_poc_act_window_t

0x4d74,	// (0x00067969) bg_popup_call_poc_inact_pane_g6

0x4d7c,	// (0x00067971) bg_popup_call_poc_inact_pane_g7

0x4d84,	// (0x00067979) bg_popup_call_poc_inact_pane_g8

0x1b37,	// (0x0006472c) popup_call_poc_inact_window_g2

0x4d8c,	// (0x00067981) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf51a,	// (0x0007210f) bg_popup_call_poc_inact_pane_g

0x1b3f,	// (0x00064734) popup_call_poc_inact_window_t1_ParamLimits

0x1b3f,	// (0x00064734) popup_call_poc_inact_window_t1

0x1b54,	// (0x00064749) popup_call_poc_inact_window_t2_ParamLimits

0x1b54,	// (0x00064749) popup_call_poc_inact_window_t2

0x1b69,	// (0x0006475e) popup_call_poc_inact_window_t3_ParamLimits

0x1b69,	// (0x0006475e) popup_call_poc_inact_window_t3

0x0002,

0xf49f,	// (0x00072094) popup_call_poc_inact_window_t_ParamLimits

0xf49f,	// (0x00072094) popup_call_poc_inact_window_t

0x4e7a,	// (0x00067a6f) context_pane_ParamLimits

0xa350,	// (0x0006cf45) signal_pane_ParamLimits

0x0cbe,	// (0x000638b3) main_call2_pane

0xa2bc,	// (0x0006ceb1) popup_phob_thumbnail2_window_ParamLimits

0xa2bc,	// (0x0006ceb1) popup_phob_thumbnail2_window

0x9961,	// (0x0006c556) aid_hotspot_pointer_arrow_pane

0x9969,	// (0x0006c55e) aid_hotspot_pointer_hand_pane

0x9fef,	// (0x0006cbe4) phob_pre_status_pane_g5

0x0a09,	// (0x000635fe) cams_zoom_pane_ParamLimits

0x0a09,	// (0x000635fe) image_vga_pane_ParamLimits

0x0a25,	// (0x0006361a) main_camera_pane_g1_ParamLimits

0x0a25,	// (0x0006361a) main_camera_pane_g2_ParamLimits

0x0a25,	// (0x0006361a) main_camera_pane_g3_ParamLimits

0x0a25,	// (0x0006361a) main_camera_pane_g4_ParamLimits

0x0a25,	// (0x0006361a) main_camera_pane_g5_ParamLimits

0x0a25,	// (0x0006361a) main_camera_pane_g6_ParamLimits

0x0a25,	// (0x0006361a) main_camera_pane_g7_ParamLimits

0xf1c5,	// (0x00071dba) main_camera_pane_g_ParamLimits

0x179c,	// (0x00064391) main_camera_pane_t1_ParamLimits

0x179c,	// (0x00064391) main_camera_pane_t2_ParamLimits

0xf1d6,	// (0x00071dcb) main_camera_pane_t_ParamLimits

0x098e,	// (0x00063583) bg_popup_preview_window_pane_cp01_ParamLimits

0x098e,	// (0x00063583) bg_popup_preview_window_pane_cp01

0x1b7e,	// (0x00064773) popup_phob_thumbnail2_window_g1_ParamLimits

0x1b7e,	// (0x00064773) popup_phob_thumbnail2_window_g1

0x0733,	// (0x00063328) call2_cli_visual_pane

0x9cc3,	// (0x0006c8b8) popup_call2_audio_conf_window_ParamLimits

0x9cc3,	// (0x0006c8b8) popup_call2_audio_conf_window

0x9cdc,	// (0x0006c8d1) popup_call2_audio_first_window_ParamLimits

0x9cdc,	// (0x0006c8d1) popup_call2_audio_first_window

0x9d7a,	// (0x0006c96f) popup_call2_audio_in_window_ParamLimits

0x9d7a,	// (0x0006c96f) popup_call2_audio_in_window

0x9dbe,	// (0x0006c9b3) popup_call2_audio_out_window_ParamLimits

0x9dbe,	// (0x0006c9b3) popup_call2_audio_out_window

0x9e28,	// (0x0006ca1d) popup_call2_audio_second_window_ParamLimits

0x9e28,	// (0x0006ca1d) popup_call2_audio_second_window

0x9e86,	// (0x0006ca7b) popup_call2_audio_wait_window_ParamLimits

0x9e86,	// (0x0006ca7b) popup_call2_audio_wait_window

0x0733,	// (0x00063328) bg_popup_call2_act_pane_cp03

0x0970,	// (0x00063565) list_conf_pane_cp

0x1b8a,	// (0x0006477f) popup_call2_audio_conf_window_t1

0x1b98,	// (0x0006478d) list_single_graphic_popup_conf2_pane_ParamLimits

0x1b98,	// (0x0006478d) list_single_graphic_popup_conf2_pane

0x14d2,	// (0x000640c7) list_highlight_pane_cp04

0x1bab,	// (0x000647a0) list_single_graphic_popup_conf2_pane_g1

0x14e3,	// (0x000640d8) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf4a6,	// (0x0007209b) list_single_graphic_popup_conf2_pane_g

0x1bb5,	// (0x000647aa) list_single_graphic_popup_conf2_pane_t1

0x1bc3,	// (0x000647b8) bg_popup_call2_act_pane_cp01_ParamLimits

0x1bc3,	// (0x000647b8) bg_popup_call2_act_pane_cp01

0x1c4d,	// (0x00064842) call_type_pane_cp05_ParamLimits

0x1c4d,	// (0x00064842) call_type_pane_cp05

0x1ca1,	// (0x00064896) popup_call2_audio_second_window_g1_ParamLimits

0x1ca1,	// (0x00064896) popup_call2_audio_second_window_g1

0x1cf5,	// (0x000648ea) popup_call2_audio_second_window_g2_ParamLimits

0x1cf5,	// (0x000648ea) popup_call2_audio_second_window_g2

0x0002,

0xf4ab,	// (0x000720a0) popup_call2_audio_second_window_g_ParamLimits

0xf4ab,	// (0x000720a0) popup_call2_audio_second_window_g

0x1d5a,	// (0x0006494f) popup_call2_audio_second_window_t1_ParamLimits

0x1d5a,	// (0x0006494f) popup_call2_audio_second_window_t1

0x1e15,	// (0x00064a0a) popup_call2_audio_second_window_t2_ParamLimits

0x1e15,	// (0x00064a0a) popup_call2_audio_second_window_t2

0x1e68,	// (0x00064a5d) popup_call2_audio_second_window_t3_ParamLimits

0x1e68,	// (0x00064a5d) popup_call2_audio_second_window_t3

0x0003,

0xf4b2,	// (0x000720a7) popup_call2_audio_second_window_t_ParamLimits

0xf4b2,	// (0x000720a7) popup_call2_audio_second_window_t

0x0733,	// (0x00063328) bg_popup_call2_in_pane_cp02

0x073d,	// (0x00063332) call_type_pane_cp04

0x9ec5,	// (0x0006caba) popup_call2_audio_wait_window_g1

0x9ecd,	// (0x0006cac2) popup_call2_audio_wait_window_g2

0x0001,

0xf4bb,	// (0x000720b0) popup_call2_audio_wait_window_g

0x0755,	// (0x0006334a) popup_call2_audio_wait_window_t3

0x1f5b,	// (0x00064b50) bg_popup_call2_act_pane_ParamLimits

0x1f5b,	// (0x00064b50) bg_popup_call2_act_pane

0x201b,	// (0x00064c10) call_type_pane_cp03_ParamLimits

0x201b,	// (0x00064c10) call_type_pane_cp03

0x447f,	// (0x00067074) popup_call2_audio_first_window_g1_ParamLimits

0x447f,	// (0x00067074) popup_call2_audio_first_window_g1

0x44ef,	// (0x000670e4) popup_call2_audio_first_window_g2_ParamLimits

0x44ef,	// (0x000670e4) popup_call2_audio_first_window_g2

0x4553,	// (0x00067148) popup_call2_audio_first_window_g3_ParamLimits

0x4553,	// (0x00067148) popup_call2_audio_first_window_g3

0x0004,

0xf4c0,	// (0x000720b5) popup_call2_audio_first_window_g_ParamLimits

0xf4c0,	// (0x000720b5) popup_call2_audio_first_window_g

0x45e9,	// (0x000671de) popup_call2_audio_first_window_t1_ParamLimits

0x45e9,	// (0x000671de) popup_call2_audio_first_window_t1

0x46ec,	// (0x000672e1) popup_call2_audio_first_window_t4_ParamLimits

0x46ec,	// (0x000672e1) popup_call2_audio_first_window_t4

0x47cf,	// (0x000673c4) popup_call2_audio_first_window_t5_ParamLimits

0x47cf,	// (0x000673c4) popup_call2_audio_first_window_t5

0x0003,

0xf4cb,	// (0x000720c0) popup_call2_audio_first_window_t_ParamLimits

0xf4cb,	// (0x000720c0) popup_call2_audio_first_window_t

0x0986,	// (0x0006357b) bg_popup_call2_act_pane_g1

0x4dee,	// (0x000679e3) popup_cale_lunar_info_window_t1

0x4dfc,	// (0x000679f1) popup_cale_lunar_info_window_t2

0x4e0a,	// (0x000679ff) popup_cale_lunar_info_window_t3

0x0733,	// (0x00063328) bg_popup_call2_bubble_pane

0x48d0,	// (0x000674c5) bg_popup_call2_in_pane_cp01_ParamLimits

0x48d0,	// (0x000674c5) bg_popup_call2_in_pane_cp01

0x040f,	// (0x00063004) call_type_pane_cp02

0x9ed5,	// (0x0006caca) popup_call2_audio_out_window_g1_ParamLimits

0x9ed5,	// (0x0006caca) popup_call2_audio_out_window_g1

0x4918,	// (0x0006750d) popup_call2_audio_out_window_g2_ParamLimits

0x4918,	// (0x0006750d) popup_call2_audio_out_window_g2

0x9f01,	// (0x0006caf6) popup_call2_audio_out_window_g3_ParamLimits

0x9f01,	// (0x0006caf6) popup_call2_audio_out_window_g3

0x0003,

0xf4d4,	// (0x000720c9) popup_call2_audio_out_window_g_ParamLimits

0xf4d4,	// (0x000720c9) popup_call2_audio_out_window_g

0x494f,	// (0x00067544) popup_call2_audio_out_window_t1_ParamLimits

0x494f,	// (0x00067544) popup_call2_audio_out_window_t1

0x49ae,	// (0x000675a3) popup_call2_audio_out_window_t2_ParamLimits

0x49ae,	// (0x000675a3) popup_call2_audio_out_window_t2

0x4a02,	// (0x000675f7) popup_call2_audio_out_window_t3_ParamLimits

0x4a02,	// (0x000675f7) popup_call2_audio_out_window_t3

0x4a18,	// (0x0006760d) popup_call2_audio_out_window_t4_ParamLimits

0x4a18,	// (0x0006760d) popup_call2_audio_out_window_t4

0x4a2e,	// (0x00067623) popup_call2_audio_out_window_t5_ParamLimits

0x4a2e,	// (0x00067623) popup_call2_audio_out_window_t5

0x0005,

0xf4dd,	// (0x000720d2) popup_call2_audio_out_window_t_ParamLimits

0xf4dd,	// (0x000720d2) popup_call2_audio_out_window_t

0x4a92,	// (0x00067687) bg_popup_call2_in_pane_ParamLimits

0x4a92,	// (0x00067687) bg_popup_call2_in_pane

0x4aee,	// (0x000676e3) popup_call2_audio_in_window_g1_ParamLimits

0x4aee,	// (0x000676e3) popup_call2_audio_in_window_g1

0x4b26,	// (0x0006771b) popup_call2_audio_in_window_g2_ParamLimits

0x4b26,	// (0x0006771b) popup_call2_audio_in_window_g2

0x4b5e,	// (0x00067753) popup_call2_audio_in_window_g3_ParamLimits

0x4b5e,	// (0x00067753) popup_call2_audio_in_window_g3

0x0003,

0xf4ea,	// (0x000720df) popup_call2_audio_in_window_g_ParamLimits

0xf4ea,	// (0x000720df) popup_call2_audio_in_window_g

0x4bb6,	// (0x000677ab) popup_call2_audio_in_window_t1_ParamLimits

0x4bb6,	// (0x000677ab) popup_call2_audio_in_window_t1

0x4c36,	// (0x0006782b) popup_call2_audio_in_window_t2_ParamLimits

0x4c36,	// (0x0006782b) popup_call2_audio_in_window_t2

0x4cb6,	// (0x000678ab) popup_call2_audio_in_window_t3_ParamLimits

0x4cb6,	// (0x000678ab) popup_call2_audio_in_window_t3

0x4cd0,	// (0x000678c5) popup_call2_audio_in_window_t4_ParamLimits

0x4cd0,	// (0x000678c5) popup_call2_audio_in_window_t4

0x4ce2,	// (0x000678d7) popup_call2_audio_in_window_t5_ParamLimits

0x4ce2,	// (0x000678d7) popup_call2_audio_in_window_t5

0x4cf7,	// (0x000678ec) popup_call2_audio_in_window_t6_ParamLimits

0x4cf7,	// (0x000678ec) popup_call2_audio_in_window_t6

0x0005,

0xf4f3,	// (0x000720e8) popup_call2_audio_in_window_t_ParamLimits

0xf4f3,	// (0x000720e8) popup_call2_audio_in_window_t

0x0986,	// (0x0006357b) bg_popup_call2_in_pane_g1

0x4e18,	// (0x00067a0d) popup_cale_lunar_info_window_t4

0x0003,

0xf55b,	// (0x00072150) popup_cale_lunar_info_window_t

0x098e,	// (0x00063583) bg_popup_call2_rect_pane_ParamLimits

0x098e,	// (0x00063583) bg_popup_call2_rect_pane

0x0733,	// (0x00063328) call2_cli_visual_graphic_pane

0x0733,	// (0x00063328) call2_cli_visual_text_pane

0xa378,	// (0x0006cf6d) smil_status_volume_pane_g3

0x0002,

0x09a6,	// (0x0006359b) call2_cli_visual_graphic_pane_g1

0x09a6,	// (0x0006359b) call2_cli_visual_graphic_pane_g2

0x09a6,	// (0x0006359b) call2_cli_visual_graphic_pane_g3

0x0002,

0xf500,	// (0x000720f5) call2_cli_visual_graphic_pane_g

0x4d0c,	// (0x00067901) bg_popup_call2_rect_pane_g1

0x0baf,	// (0x000637a4) bg_popup_call2_rect_pane_g2

0x4d14,	// (0x00067909) bg_popup_call2_rect_pane_g3

0x4d1c,	// (0x00067911) bg_popup_call2_rect_pane_g4

0x4d24,	// (0x00067919) bg_popup_call2_rect_pane_g5

0x4d2c,	// (0x00067921) bg_popup_call2_rect_pane_g6

0x4d34,	// (0x00067929) bg_popup_call2_rect_pane_g7

0x4d3c,	// (0x00067931) bg_popup_call2_rect_pane_g8

0x4d44,	// (0x00067939) bg_popup_call2_rect_pane_g9

0x0008,

0xf507,	// (0x000720fc) bg_popup_call2_rect_pane_g

0x4d4c,	// (0x00067941) bg_popup_call2_bubble_pane_g1

0x4d54,	// (0x00067949) bg_popup_call2_bubble_pane_g2

0x4d5c,	// (0x00067951) bg_popup_call2_bubble_pane_g3

0x4d64,	// (0x00067959) bg_popup_call2_bubble_pane_g4

0x4d6c,	// (0x00067961) bg_popup_call2_bubble_pane_g5

0x4d74,	// (0x00067969) bg_popup_call2_bubble_pane_g6

0x4d7c,	// (0x00067971) bg_popup_call2_bubble_pane_g7

0x4d84,	// (0x00067979) bg_popup_call2_bubble_pane_g8

0x4d8c,	// (0x00067981) bg_popup_call2_bubble_pane_g9

0x0008,

0xf51a,	// (0x0007210f) bg_popup_call2_bubble_pane_g

0x78a0,	// (0x0006a495) aid_cale_week_size_cell_pane

0x098e,	// (0x00063583) aid_cams_cif_uncrop_pane_ParamLimits

0x098e,	// (0x00063583) aid_cams_cif_uncrop_pane

0x808f,	// (0x0006ac84) aid_cams_size_cell_ParamLimits

0x808f,	// (0x0006ac84) aid_cams_size_cell

0x809b,	// (0x0006ac90) grid_cams_pane_ParamLimits

0x80a9,	// (0x0006ac9e) linegrid_cams_pane_ParamLimits

0x817a,	// (0x0006ad6f) call_video_pane_t1

0x8197,	// (0x0006ad8c) call_video_pane_t2

0x0001,

0xf222,	// (0x00071e17) call_video_pane_t

0x8663,	// (0x0006b258) aid_cale_month_size_cell_pane_ParamLimits

0x8663,	// (0x0006b258) aid_cale_month_size_cell_pane

0xf59f,	// (0x00072194) smil_status_volume_pane_g

0xa385,	// (0x0006cf7a) volume_smil_pane_ParamLimits

0x71c3,	// (0x00069db8) aid_popup2_width_pane

0x77ac,	// (0x0006a3a1) cell_qdial_pane_g4_ParamLimits

0x77ac,	// (0x0006a3a1) cell_qdial_pane_g4

0x952c,	// (0x0006c121) aid_blid_cardinal_pane_ParamLimits

0x953c,	// (0x0006c131) aid_blid_destination_pane_ParamLimits

0x953c,	// (0x0006c131) aid_blid_destination_pane

0x098e,	// (0x00063583) bg_popup_call_poc_act_pane_ParamLimits

0x098e,	// (0x00063583) bg_popup_call_poc_act_pane

0x098e,	// (0x00063583) bg_popup_call_poc_inact_pane_ParamLimits

0x098e,	// (0x00063583) bg_popup_call_poc_inact_pane

0x4d94,	// (0x00067989) bg_popup_call_poc_act_pane_g1

0x4d9c,	// (0x00067991) bg_popup_call_poc_act_pane_g2

0x4da4,	// (0x00067999) bg_popup_call_poc_act_pane_g3

0x4d64,	// (0x00067959) bg_popup_call_poc_act_pane_g4

0x4d6c,	// (0x00067961) bg_popup_call_poc_act_pane_g5

0x4dac,	// (0x000679a1) bg_popup_call_poc_act_pane_g6

0x4d7c,	// (0x00067971) bg_popup_call_poc_act_pane_g7

0x4db4,	// (0x000679a9) bg_popup_call_poc_act_pane_g8

0x0733,	// (0x00063328) main_usb_pane

0xa1d9,	// (0x0006cdce) popup_cale_lunar_info_window

0x84af,	// (0x0006b0a4) im_reading_pane_t1_ParamLimits

0x0dd0,	// (0x000639c5) list_im_pane_ParamLimits

0x0de1,	// (0x000639d6) scroll_pane_cp07_ParamLimits

0x0733,	// (0x00063328) grid_highlight_pane_cp012

0x098e,	// (0x00063583) mup_scale_pane_ParamLimits

0x4553,	// (0x00067148) main_usb_pane_g1_ParamLimits

0x4553,	// (0x00067148) main_usb_pane_g1

0x9f57,	// (0x0006cb4c) main_usb_pane_g2_ParamLimits

0x9f57,	// (0x0006cb4c) main_usb_pane_g2

0x0001,

0xf544,	// (0x00072139) main_usb_pane_g_ParamLimits

0xf544,	// (0x00072139) main_usb_pane_g

0x9f63,	// (0x0006cb58) main_usb_pane_t1_ParamLimits

0x9f63,	// (0x0006cb58) main_usb_pane_t1

0x9f75,	// (0x0006cb6a) main_usb_pane_t2_ParamLimits

0x9f75,	// (0x0006cb6a) main_usb_pane_t2

0x9f87,	// (0x0006cb7c) main_usb_pane_t3_ParamLimits

0x9f87,	// (0x0006cb7c) main_usb_pane_t3

0x9f99,	// (0x0006cb8e) main_usb_pane_t4_ParamLimits

0x9f99,	// (0x0006cb8e) main_usb_pane_t4

0x9fab,	// (0x0006cba0) main_usb_pane_t5_ParamLimits

0x9fab,	// (0x0006cba0) main_usb_pane_t5

0x9fbd,	// (0x0006cbb2) main_usb_pane_t6_ParamLimits

0x9fbd,	// (0x0006cbb2) main_usb_pane_t6

0x0005,

0xf549,	// (0x0007213e) main_usb_pane_t_ParamLimits

0x94cb,	// (0x0006c0c0) aid_text_placing

0x94d6,	// (0x0006c0cb) main_location2_pane_t1_ParamLimits

0x94ec,	// (0x0006c0e1) main_location2_pane_t2_ParamLimits

0x9502,	// (0x0006c0f7) main_location2_pane_t3_ParamLimits

0x9518,	// (0x0006c10d) main_location2_pane_t4_ParamLimits

0x9518,	// (0x0006c10d) main_location2_pane_t4

0xf363,	// (0x00071f58) main_location2_pane_t_ParamLimits

0x09ca,	// (0x000635bf) find_pinb_pane_g2_ParamLimits

0x09ca,	// (0x000635bf) find_pinb_pane_g2

0x0001,

0xf0da,	// (0x00071ccf) find_pinb_pane_g_ParamLimits

0xf0da,	// (0x00071ccf) find_pinb_pane_g

0x09d6,	// (0x000635cb) find_pinb_pane_t1_ParamLimits

0x09e8,	// (0x000635dd) find_pinb_pane_t2_ParamLimits

0xf0df,	// (0x00071cd4) find_pinb_pane_t_ParamLimits

0x0733,	// (0x00063328) main_call3_pane

0x8c16,	// (0x0006b80b) cale_month_day_heading_pane_t1_ParamLimits

0x8c98,	// (0x0006b88d) cale_month_day_heading_pane_t2_ParamLimits

0x8d11,	// (0x0006b906) cale_month_day_heading_pane_t3_ParamLimits

0x8d8a,	// (0x0006b97f) cale_month_day_heading_pane_t4_ParamLimits

0x8e03,	// (0x0006b9f8) cale_month_day_heading_pane_t5_ParamLimits

0x8e84,	// (0x0006ba79) cale_month_day_heading_pane_t6_ParamLimits

0x8f0d,	// (0x0006bb02) cale_month_day_heading_pane_t7_ParamLimits

0xf25a,	// (0x00071e4f) cale_month_day_heading_pane_t_ParamLimits

0x1037,	// (0x00063c2c) smil_status_volume_pane

0x9aad,	// (0x0006c6a2) postcard_address_pane_ParamLimits

0x9aad,	// (0x0006c6a2) postcard_address_pane

0x9abb,	// (0x0006c6b0) postcard_message_pane_ParamLimits

0x9abb,	// (0x0006c6b0) postcard_message_pane

0x9f2d,	// (0x0006cb22) call2_cli_visual_pane_t1_ParamLimits

0x9f2d,	// (0x0006cb22) call2_cli_visual_pane_t1

0x4f40,	// (0x00067b35) postcard_message_pane_t1_ParamLimits

0x4f40,	// (0x00067b35) postcard_message_pane_t1

0x4f28,	// (0x00067b1d) postcard_address_pane_t1_ParamLimits

0x4f28,	// (0x00067b1d) postcard_address_pane_t1

0xa4bc,	// (0x0006d0b1) popup_call3_audio_in_window_ParamLimits

0xa4bc,	// (0x0006d0b1) popup_call3_audio_in_window

0xa39a,	// (0x0006cf8f) bg_popup_call3_in_pane_ParamLimits

0xa39a,	// (0x0006cf8f) bg_popup_call3_in_pane

0xa402,	// (0x0006cff7) popup_call3_audio_in_window_g1_ParamLimits

0xa402,	// (0x0006cff7) popup_call3_audio_in_window_g1

0xa41a,	// (0x0006d00f) popup_call3_audio_in_window_g2_ParamLimits

0xa41a,	// (0x0006d00f) popup_call3_audio_in_window_g2

0xa432,	// (0x0006d027) popup_call3_audio_in_window_g3_ParamLimits

0xa432,	// (0x0006d027) popup_call3_audio_in_window_g3

0x0003,

0xf5a6,	// (0x0007219b) popup_call3_audio_in_window_g_ParamLimits

0xf5a6,	// (0x0007219b) popup_call3_audio_in_window_g

0xa45a,	// (0x0006d04f) popup_call3_audio_in_window_t1_ParamLimits

0xa45a,	// (0x0006d04f) popup_call3_audio_in_window_t1

0xa482,	// (0x0006d077) popup_call3_audio_in_window_t2_ParamLimits

0xa482,	// (0x0006d077) popup_call3_audio_in_window_t2

0xa4aa,	// (0x0006d09f) popup_call3_audio_in_window_t3_ParamLimits

0xa4aa,	// (0x0006d09f) popup_call3_audio_in_window_t3

0x0002,

0xf5af,	// (0x000721a4) popup_call3_audio_in_window_t_ParamLimits

0xf5af,	// (0x000721a4) popup_call3_audio_in_window_t

0x0cbe,	// (0x000638b3) bg_popup_call3_rect_pane

0x4d0c,	// (0x00067901) bg_popup_call3_rect_pane_g1

0x0baf,	// (0x000637a4) bg_popup_call3_rect_pane_g2

0x4d14,	// (0x00067909) bg_popup_call3_rect_pane_g3

0x4d1c,	// (0x00067911) bg_popup_call3_rect_pane_g4

0x4d24,	// (0x00067919) bg_popup_call3_rect_pane_g5

0x4d2c,	// (0x00067921) bg_popup_call3_rect_pane_g6

0x4d34,	// (0x00067929) bg_popup_call3_rect_pane_g7

0x0256,	// (0x00062e4b) mup_visualizer_osc_pane

0x0256,	// (0x00062e4b) mup_visualizer_spec_pane

0xa3ba,	// (0x0006cfaf) call3_video_qcif_pane_ParamLimits

0xa3ba,	// (0x0006cfaf) call3_video_qcif_pane

0xa3cc,	// (0x0006cfc1) call3_video_qcif_uncrop_pane_ParamLimits

0xa3cc,	// (0x0006cfc1) call3_video_qcif_uncrop_pane

0xa3dc,	// (0x0006cfd1) call3_video_subqcif_pane_ParamLimits

0xa3dc,	// (0x0006cfd1) call3_video_subqcif_pane

0xa3f0,	// (0x0006cfe5) call3_video_subqcif_uncrop_pane_ParamLimits

0xa3f0,	// (0x0006cfe5) call3_video_subqcif_uncrop_pane

0xa44a,	// (0x0006d03f) popup_call3_audio_in_window_g4_ParamLimits

0xa44a,	// (0x0006d03f) popup_call3_audio_in_window_g4

0x0256,	// (0x00062e4b) mup_spec_half_pane

0x0256,	// (0x00062e4b) mup_spec_half_pane_cp

0x0256,	// (0x00062e4b) mup_osc_middle_pane

0x0d13,	// (0x00063908) mup_visualizer_osc_pane_g1

0x4edb,	// (0x00067ad0) mup_spec_bar_pane_ParamLimits

0x4edb,	// (0x00067ad0) mup_spec_bar_pane

0x0d13,	// (0x00063908) mup_spec_bar_pane_g1

0x0d13,	// (0x00063908) mup_spec_bar_pane_g2

0x0001,

0xf3dd,	// (0x00071fd2) mup_spec_bar_pane_g

0x78a0,	// (0x0006a495) aid_cale_week_size_cell_pane_ParamLimits

0x78ba,	// (0x0006a4af) bg_cale_heading_pane_ParamLimits

0x78e3,	// (0x0006a4d8) bg_cale_pane_cp01_ParamLimits

0x7905,	// (0x0006a4fa) cale_week_corner_pane_ParamLimits

0x7924,	// (0x0006a519) cale_week_day_heading_pane_ParamLimits

0x7952,	// (0x0006a547) cale_week_scroll_pane_g1_ParamLimits

0x7976,	// (0x0006a56b) cale_week_scroll_pane_g2_ParamLimits

0x798e,	// (0x0006a583) cale_week_scroll_pane_g3_ParamLimits

0x79a6,	// (0x0006a59b) cale_week_scroll_pane_g4_ParamLimits

0x79be,	// (0x0006a5b3) cale_week_scroll_pane_g5_ParamLimits

0x79d6,	// (0x0006a5cb) cale_week_scroll_pane_g6_ParamLimits

0x79f6,	// (0x0006a5eb) cale_week_scroll_pane_g7_ParamLimits

0x7a16,	// (0x0006a60b) cale_week_scroll_pane_g8_ParamLimits

0x7a36,	// (0x0006a62b) cale_week_scroll_pane_g9_ParamLimits

0x7a53,	// (0x0006a648) cale_week_scroll_pane_g10_ParamLimits

0x7a70,	// (0x0006a665) cale_week_scroll_pane_g11_ParamLimits

0x7a8f,	// (0x0006a684) cale_week_scroll_pane_g12_ParamLimits

0x7ab4,	// (0x0006a6a9) cale_week_scroll_pane_g13_ParamLimits

0x7add,	// (0x0006a6d2) cale_week_scroll_pane_g14_ParamLimits

0x7b06,	// (0x0006a6fb) cale_week_scroll_pane_g15_ParamLimits

0xf16b,	// (0x00071d60) cale_week_scroll_pane_g_ParamLimits

0x7b4f,	// (0x0006a744) cale_week_time_pane_ParamLimits

0x7b6f,	// (0x0006a764) grid_cale_week_pane_ParamLimits

0x0c34,	// (0x00063829) listscroll_cale_week_pane_t1

0x0c46,	// (0x0006383b) scroll_pane_cp08_ParamLimits

0x86db,	// (0x0006b2d0) cale_month_corner_pane_ParamLimits

0x1001,	// (0x00063bf6) cale_month_pane_t1

0x8b9d,	// (0x0006b792) cale_month_week_pane_ParamLimits

0x4553,	// (0x00067148) popup_call_status_window_g1_ParamLimits

0x930f,	// (0x0006bf04) popup_call_status_window_g2_ParamLimits

0x931b,	// (0x0006bf10) popup_call_status_window_g3_ParamLimits

0xf2ea,	// (0x00071edf) popup_call_status_window_g_ParamLimits

0x13f8,	// (0x00063fed) aid_call2_pane

0x6557,	// (0x0006914c) msg_header_pane_g1

0x9aad,	// (0x0006c6a2) postcard_address2_pane_ParamLimits

0x9aad,	// (0x0006c6a2) postcard_address2_pane

0x9abb,	// (0x0006c6b0) postcard_message2_pane_ParamLimits

0x9abb,	// (0x0006c6b0) postcard_message2_pane

0xa35e,	// (0x0006cf53) message2_row_pane_ParamLimits

0xa35e,	// (0x0006cf53) message2_row_pane

0x4e95,	// (0x00067a8a) address2_row_pane_ParamLimits

0x4e95,	// (0x00067a8a) address2_row_pane

0x4ea8,	// (0x00067a9d) postcard_message2_row_pane_g1

0x4eb0,	// (0x00067aa5) postcard_message2_row_pane_t1

0x4ea8,	// (0x00067a9d) address2_row_pane_g1

0x4eb0,	// (0x00067aa5) address2_row_pane_t1

0x7efd,	// (0x0006aaf2) aid_size_cell_vorec

0x0733,	// (0x00063328) main_rss_pane

0x4ebe,	// (0x00067ab3) rss_list_single_pane_ParamLimits

0x4ebe,	// (0x00067ab3) rss_list_single_pane

0x4ecc,	// (0x00067ac1) rss_list_single_pane_t1

0x4ecc,	// (0x00067ac1) rss_list_single_pane_t2

0x0001,

0xf59a,	// (0x0007218f) rss_list_single_pane_t

0x0733,	// (0x00063328) main_camera2_pane

0x0733,	// (0x00063328) main_video2_pane

0x0a09,	// (0x000635fe) cams_zoom_pane_cp2_ParamLimits

0x0a09,	// (0x000635fe) cams_zoom_pane_cp2

0x0a09,	// (0x000635fe) image2_vga_pane_ParamLimits

0x0a09,	// (0x000635fe) image2_vga_pane

0x0a25,	// (0x0006361a) main_camera2_pane_g1_ParamLimits

0x0a25,	// (0x0006361a) main_camera2_pane_g1

0x0a25,	// (0x0006361a) main_camera2_pane_g2_ParamLimits

0x0a25,	// (0x0006361a) main_camera2_pane_g2

0x0a25,	// (0x0006361a) main_camera2_pane_g3_ParamLimits

0x0a25,	// (0x0006361a) main_camera2_pane_g3

0x0a25,	// (0x0006361a) main_camera2_pane_g4_ParamLimits

0x0a25,	// (0x0006361a) main_camera2_pane_g4

0x0a25,	// (0x0006361a) main_camera2_pane_g5_ParamLimits

0x0a25,	// (0x0006361a) main_camera2_pane_g5

0x0a25,	// (0x0006361a) main_camera2_pane_g6_ParamLimits

0x0a25,	// (0x0006361a) main_camera2_pane_g6

0x0a25,	// (0x0006361a) main_camera2_pane_g7_ParamLimits

0x0a25,	// (0x0006361a) main_camera2_pane_g7

0x0a25,	// (0x0006361a) main_camera2_pane_g8_ParamLimits

0x0a25,	// (0x0006361a) main_camera2_pane_g8

0x0008,

0xf5b6,	// (0x000721ab) main_camera2_pane_g_ParamLimits

0xf5b6,	// (0x000721ab) main_camera2_pane_g

0x179c,	// (0x00064391) main_camera2_pane_t1_ParamLimits

0x179c,	// (0x00064391) main_camera2_pane_t1

0x179c,	// (0x00064391) main_camera2_pane_t2_ParamLimits

0x179c,	// (0x00064391) main_camera2_pane_t2

0x179c,	// (0x00064391) main_camera2_pane_t3_ParamLimits

0x179c,	// (0x00064391) main_camera2_pane_t3

0x179c,	// (0x00064391) main_camera2_pane_t4_ParamLimits

0x179c,	// (0x00064391) main_camera2_pane_t4

0x0006,

0xf5c9,	// (0x000721be) main_camera2_pane_t_ParamLimits

0xf5c9,	// (0x000721be) main_camera2_pane_t

0x17b0,	// (0x000643a5) cams_zoom_pane_cp4_ParamLimits

0x17b0,	// (0x000643a5) cams_zoom_pane_cp4

0x09b0,	// (0x000635a5) image2_cif_pane_ParamLimits

0x09b0,	// (0x000635a5) image2_cif_pane

0x0a09,	// (0x000635fe) image2_subqcif_pane_ParamLimits

0x0a09,	// (0x000635fe) image2_subqcif_pane

0x177a,	// (0x0006436f) main_video2_pane_g1_ParamLimits

0x177a,	// (0x0006436f) main_video2_pane_g1

0x177a,	// (0x0006436f) main_video2_pane_g2_ParamLimits

0x177a,	// (0x0006436f) main_video2_pane_g2

0x177a,	// (0x0006436f) main_video2_pane_g3_ParamLimits

0x177a,	// (0x0006436f) main_video2_pane_g3

0x177a,	// (0x0006436f) main_video2_pane_g4_ParamLimits

0x177a,	// (0x0006436f) main_video2_pane_g4

0x177a,	// (0x0006436f) main_video2_pane_g5_ParamLimits

0x177a,	// (0x0006436f) main_video2_pane_g5

0x177a,	// (0x0006436f) main_video2_pane_g6_ParamLimits

0x177a,	// (0x0006436f) main_video2_pane_g6

0x0005,

0xf5d8,	// (0x000721cd) main_video2_pane_g_ParamLimits

0xf5d8,	// (0x000721cd) main_video2_pane_g

0x1788,	// (0x0006437d) main_video2_pane_t1_ParamLimits

0x1788,	// (0x0006437d) main_video2_pane_t1

0x1788,	// (0x0006437d) main_video2_pane_t2_ParamLimits

0x1788,	// (0x0006437d) main_video2_pane_t2

0x1788,	// (0x0006437d) main_video2_pane_t3_ParamLimits

0x1788,	// (0x0006437d) main_video2_pane_t3

0x0002,

0xf5e5,	// (0x000721da) main_video2_pane_t_ParamLimits

0xf5e5,	// (0x000721da) main_video2_pane_t

0xa053,	// (0x0006cc48) call_muted_g2

0x0001,

0xf58c,	// (0x00072181) call_muted_g

0x0733,	// (0x00063328) main_mup2_pane

0x0a33,	// (0x00063628) main_mup2_pane_g1_ParamLimits

0x0a33,	// (0x00063628) main_mup2_pane_g1

0x0a33,	// (0x00063628) main_mup2_pane_g2_ParamLimits

0x0a33,	// (0x00063628) main_mup2_pane_g2

0x0d13,	// (0x00063908) main_mup_pane_g13_cp1

0x0256,	// (0x00062e4b) mup_volume_pane_cp1

0x0a33,	// (0x00063628) main_mup2_pane_g4_ParamLimits

0x0a33,	// (0x00063628) main_mup2_pane_g4

0x0a33,	// (0x00063628) main_mup2_pane_g5_ParamLimits

0x0a33,	// (0x00063628) main_mup2_pane_g5

0x0a33,	// (0x00063628) main_mup2_pane_g6_ParamLimits

0x0a33,	// (0x00063628) main_mup2_pane_g6

0x0a33,	// (0x00063628) main_mup2_pane_g7_ParamLimits

0x0a33,	// (0x00063628) main_mup2_pane_g7

0x0006,

0xf5ec,	// (0x000721e1) main_mup2_pane_g_ParamLimits

0xf5ec,	// (0x000721e1) main_mup2_pane_g

0x0a41,	// (0x00063636) main_mup2_pane_t1_ParamLimits

0x0a41,	// (0x00063636) main_mup2_pane_t1

0x0a41,	// (0x00063636) main_mup2_pane_t2_ParamLimits

0x0a41,	// (0x00063636) main_mup2_pane_t2

0x0a41,	// (0x00063636) main_mup2_pane_t3_ParamLimits

0x0a41,	// (0x00063636) main_mup2_pane_t3

0x0a41,	// (0x00063636) main_mup2_pane_t4_ParamLimits

0x0a41,	// (0x00063636) main_mup2_pane_t4

0x0a41,	// (0x00063636) main_mup2_pane_t5_ParamLimits

0x0a41,	// (0x00063636) main_mup2_pane_t5

0x0a41,	// (0x00063636) main_mup2_pane_t6_ParamLimits

0x0a41,	// (0x00063636) main_mup2_pane_t6

0x0005,

0xf5fb,	// (0x000721f0) main_mup2_pane_t_ParamLimits

0xf5fb,	// (0x000721f0) main_mup2_pane_t

0x4561,	// (0x00067156) mup2_visualizer_pane_ParamLimits

0x4561,	// (0x00067156) mup2_visualizer_pane

0x4561,	// (0x00067156) mup_progress_pane_cp_ParamLimits

0x4561,	// (0x00067156) mup_progress_pane_cp

0x4f5c,	// (0x00067b51) mup_volume_pane_cp_ParamLimits

0x4f5c,	// (0x00067b51) mup_volume_pane_cp

0x0a17,	// (0x0006360c) mup2_visualizer_pane_g1_ParamLimits

0x0a17,	// (0x0006360c) mup2_visualizer_pane_g1

0x0a25,	// (0x0006361a) mup2_visualizer_pane_g2_ParamLimits

0x0a25,	// (0x0006361a) mup2_visualizer_pane_g2

0x0a25,	// (0x0006361a) mup2_visualizer_pane_g3_ParamLimits

0x0a25,	// (0x0006361a) mup2_visualizer_pane_g3

0x0002,

0xf0e4,	// (0x00071cd9) mup2_visualizer_pane_g_ParamLimits

0xf0e4,	// (0x00071cd9) mup2_visualizer_pane_g

0x1a14,	// (0x00064609) aid_size_cell_fmradio

0xa169,	// (0x0006cd5e) aid_height_parent_landcape

0x0e5f,	// (0x00063a54) wml_content_pane_cp

0x0e67,	// (0x00063a5c) wml_tabs_pane

0x0e70,	// (0x00063a65) popup_wml_miniature_window

0x0e78,	// (0x00063a6d) scroll_pane_cp021

0x0e8c,	// (0x00063a81) wml_content_pane_comp8

0x0733,	// (0x00063328) bg_popup_sub_pane_cp05

0x4f72,	// (0x00067b67) popup_wml_miniature_window_g1

0x4f7a,	// (0x00067b6f) wml_miniature_view_pane

0xa4ed,	// (0x0006d0e2) aid_size_wml_view

0xa4f5,	// (0x0006d0ea) wml_miniature_view_pane_g1

0xa4fe,	// (0x0006d0f3) wml_miniature_view_pane_g2

0xa507,	// (0x0006d0fc) wml_miniature_view_pane_g3

0xa50f,	// (0x0006d104) wml_miniature_view_pane_g4

0xa517,	// (0x0006d10c) wml_miniature_view_pane_g5

0xa51f,	// (0x0006d114) wml_miniature_view_pane_g6

0xa527,	// (0x0006d11c) wml_miniature_view_pane_g7

0xa52f,	// (0x0006d124) wml_miniature_view_pane_g8

0x0007,

0xf608,	// (0x000721fd) wml_miniature_view_pane_g

0x4f82,	// (0x00067b77) background_graphic_ParamLimits

0x4f82,	// (0x00067b77) background_graphic

0x4f8e,	// (0x00067b83) wml_tabs_2_pane

0x4f97,	// (0x00067b8c) wml_tabs_3_pane_ParamLimits

0x4f97,	// (0x00067b8c) wml_tabs_3_pane

0x4fa9,	// (0x00067b9e) wml_tabs_4_pane_ParamLimits

0x4fa9,	// (0x00067b9e) wml_tabs_4_pane

0x4fbf,	// (0x00067bb4) wml_tabs_5_pane_ParamLimits

0x4fbf,	// (0x00067bb4) wml_tabs_5_pane

0x4fd9,	// (0x00067bce) wml_tabs_pane_g2_ParamLimits

0x4fd9,	// (0x00067bce) wml_tabs_pane_g2

0x4fee,	// (0x00067be3) wml_tabs_pane_g3_ParamLimits

0x4fee,	// (0x00067be3) wml_tabs_pane_g3

0x5003,	// (0x00067bf8) wml_tabs_2_active_pane_ParamLimits

0x5003,	// (0x00067bf8) wml_tabs_2_active_pane

0x5003,	// (0x00067bf8) wml_tabs_2_passive_pane_ParamLimits

0x5003,	// (0x00067bf8) wml_tabs_2_passive_pane

0xa537,	// (0x0006d12c) wml_tabs_3_active_pane_cp_ParamLimits

0xa537,	// (0x0006d12c) wml_tabs_3_active_pane_cp

0xa54a,	// (0x0006d13f) wml_tabs_3_passive_pane_ParamLimits

0xa54a,	// (0x0006d13f) wml_tabs_3_passive_pane

0xa55b,	// (0x0006d150) wml_tabs_3_passive_pane_cp_ParamLimits

0xa55b,	// (0x0006d150) wml_tabs_3_passive_pane_cp

0xa570,	// (0x0006d165) tabs_4_active_pane

0xa578,	// (0x0006d16d) tabs_4_passive_pane

0xa580,	// (0x0006d175) tabs_4_passive_pane_cp

0xa588,	// (0x0006d17d) tabs_4_passive_pane_cp2

0x9f4f,	// (0x0006cb44) aid_height_text

0x4561,	// (0x00067156) mup_volume_cont_pane_ParamLimits

0x4561,	// (0x00067156) mup_volume_cont_pane

0x0256,	// (0x00062e4b) aid_size_cell_pinb

0x0256,	// (0x00062e4b) aid_size_list_pinb

0x4561,	// (0x00067156) mup2_volume_cont_pane_ParamLimits

0x4561,	// (0x00067156) mup2_volume_cont_pane

0xa592,	// (0x0006d187) mup2_volume_cont_pane_g1_ParamLimits

0xa592,	// (0x0006d187) mup2_volume_cont_pane_g1

0x71cf,	// (0x00069dc4) aid_size_cell_touch_ParamLimits

0x71cf,	// (0x00069dc4) aid_size_cell_touch

0x7476,	// (0x0006a06b) touch_pane_ParamLimits

0x7476,	// (0x0006a06b) touch_pane

0x0256,	// (0x00062e4b) main_rss2_pane

0x5024,	// (0x00067c19) listscroll_rss2_pane

0x502d,	// (0x00067c22) rss2_navigation_pane

0x5035,	// (0x00067c2a) list_rss2_pane

0x1577,	// (0x0006416c) scroll_pane_cp22

0x503d,	// (0x00067c32) rss2_navigation_pane_g1

0x5046,	// (0x00067c3b) rss2_navigation_pane_g2

0x504e,	// (0x00067c43) rss2_navigation_pane_g3

0x0002,

0xf619,	// (0x0007220e) rss2_navigation_pane_g

0x5056,	// (0x00067c4b) rss2_navigation_pane_t1

0xa5a8,	// (0x0006d19d) rss2_list_single_pane_ParamLimits

0xa5a8,	// (0x0006d19d) rss2_list_single_pane

0x5064,	// (0x00067c59) rss2_list_single_pane_t2

0x5072,	// (0x00067c67) rss2_list_single_pane_t3_ParamLimits

0x5072,	// (0x00067c67) rss2_list_single_pane_t3

0x508f,	// (0x00067c84) rss2_list_single_pane_t4

0x91ab,	// (0x0006bda0) smil_status_pane_g1

0x09b0,	// (0x000635a5) main_image2_pane_ParamLimits

0x09b0,	// (0x000635a5) main_image2_pane

0x0a25,	// (0x0006361a) main_camera2_pane_g9_ParamLimits

0x0a25,	// (0x0006361a) main_camera2_pane_g9

0x179c,	// (0x00064391) main_camera2_pane_t5_ParamLimits

0x179c,	// (0x00064391) main_camera2_pane_t5

0xa4d9,	// (0x0006d0ce) main_camera2_pane_t6_ParamLimits

0xa4d9,	// (0x0006d0ce) main_camera2_pane_t6

0xa5cb,	// (0x0006d1c0) main_image2_pane_g1_ParamLimits

0xa5cb,	// (0x0006d1c0) main_image2_pane_g1

0x9c84,	// (0x0006c879) smil2_video_pane_ParamLimits

0x9c84,	// (0x0006c879) smil2_video_pane

0x64ef,	// (0x000690e4) aid_zoom_text_primary_cp

0x741f,	// (0x0006a014) popup_preview_fixed_window

0x0dc8,	// (0x000639bd) im_reading_pane_g1

0xa4cb,	// (0x0006d0c0) cams2_bc_adjust_pane_cp_ParamLimits

0xa4cb,	// (0x0006d0c0) cams2_bc_adjust_pane_cp

0x0a09,	// (0x000635fe) cams2_bc_adjust_pane_ParamLimits

0x0a09,	// (0x000635fe) cams2_bc_adjust_pane

0x0d13,	// (0x00063908) cams2_bc_adjust_pane_g1

0x0256,	// (0x00062e4b) cams2_slider_pane

0x0d13,	// (0x00063908) cams2_slider_pane_g1

0x0d13,	// (0x00063908) cams2_slider_pane_g2

0x0006,

0xf620,	// (0x00072215) cams2_slider_pane_g

0x750b,	// (0x0006a100) calc_display_pane_ParamLimits

0x7529,	// (0x0006a11e) calc_paper_pane_ParamLimits

0x7545,	// (0x0006a13a) grid_calc_pane_ParamLimits

0x9379,	// (0x0006bf6e) popup_clock_digital_window_t1_ParamLimits

0x19b1,	// (0x000645a6) main_image_pane_t1

0x74f1,	// (0x0006a0e6) aid_size_cell_calc_ParamLimits

0x74f1,	// (0x0006a0e6) aid_size_cell_calc

0xa1af,	// (0x0006cda4) popup_blid_sat_info2_window_ParamLimits

0xa1af,	// (0x0006cda4) popup_blid_sat_info2_window

0x509d,	// (0x00067c92) aid_size_cell_blid

0x4561,	// (0x00067156) bg_popup_window_pane_cp07

0x50ba,	// (0x00067caf) grid_popup_blid_pane

0x50c4,	// (0x00067cb9) heading_pane_cp05_ParamLimits

0x50c4,	// (0x00067cb9) heading_pane_cp05

0x518e,	// (0x00067d83) cell_popup_blid_pane_ParamLimits

0x518e,	// (0x00067d83) cell_popup_blid_pane

0x51b8,	// (0x00067dad) cell_popup_blid_pane_g1

0x51c0,	// (0x00067db5) cell_popup_blid_pane_t1

0x4561,	// (0x00067156) mup2_indicator_pane_ParamLimits

0x4561,	// (0x00067156) mup2_indicator_pane

0x0256,	// (0x00062e4b) mup2_visualizer_osc_pane

0x4f5c,	// (0x00067b51) mup2_visualizer_spec_pane_ParamLimits

0x4f5c,	// (0x00067b51) mup2_visualizer_spec_pane

0x0256,	// (0x00062e4b) mup2_spec_half_pane

0x0256,	// (0x00062e4b) mup2_spec_half_pane_cp

0x51ce,	// (0x00067dc3) mup2_spec_bar_pane_ParamLimits

0x51ce,	// (0x00067dc3) mup2_spec_bar_pane

0x0d13,	// (0x00063908) mup2_spec_bar_pane_g1

0x51ed,	// (0x00067de2) mup2_spec_bar_pane_g2

0x0001,

0xf646,	// (0x0007223b) mup2_spec_bar_pane_g

0x0256,	// (0x00062e4b) mup2_osc_middle_pane

0x0d13,	// (0x00063908) mup2_visualizer_osc_pane_g1

0x030b,	// (0x00062f00) popup_number_entry_window_t1_ParamLimits

0x031e,	// (0x00062f13) popup_number_entry_window_t2_ParamLimits

0x0330,	// (0x00062f25) popup_number_entry_window_t3_ParamLimits

0x0342,	// (0x00062f37) popup_number_entry_window_t5_ParamLimits

0x0342,	// (0x00062f37) popup_number_entry_window_t5

0xf085,	// (0x00071c7a) popup_number_entry_window_t_ParamLimits

0x0377,	// (0x00062f6c) text_title_cp2_ParamLimits

0x9971,	// (0x0006c566) aid_hotspot_pointer_text2_pane

0x9a0b,	// (0x0006c600) main_viewer_pane_g9_ParamLimits

0x9a0b,	// (0x0006c600) main_viewer_pane_g9

0x1001,	// (0x00063bf6) cale_month_pane_t1_ParamLimits

0x106c,	// (0x00063c61) bg_cale_pane_ParamLimits

0x1084,	// (0x00063c79) list_cale_pane_ParamLimits

0x1095,	// (0x00063c8a) listscroll_cale_day_pane_t1

0x10a7,	// (0x00063c9c) scroll_pane_cp09_ParamLimits

0x9714,	// (0x0006c309) main_mup_eq_pane_t1_ParamLimits

0x9714,	// (0x0006c309) main_mup_eq_pane_t1

0x9730,	// (0x0006c325) main_mup_eq_pane_t2_ParamLimits

0x9730,	// (0x0006c325) main_mup_eq_pane_t2

0x974c,	// (0x0006c341) main_mup_eq_pane_t3_ParamLimits

0x974c,	// (0x0006c341) main_mup_eq_pane_t3

0x9766,	// (0x0006c35b) main_mup_eq_pane_t4_ParamLimits

0x9766,	// (0x0006c35b) main_mup_eq_pane_t4

0x9780,	// (0x0006c375) main_mup_eq_pane_t5_ParamLimits

0x9780,	// (0x0006c375) main_mup_eq_pane_t5

0x979a,	// (0x0006c38f) main_mup_eq_pane_t6_ParamLimits

0x979a,	// (0x0006c38f) main_mup_eq_pane_t6

0x97b0,	// (0x0006c3a5) main_mup_eq_pane_t7_ParamLimits

0x97b0,	// (0x0006c3a5) main_mup_eq_pane_t7

0x97c6,	// (0x0006c3bb) main_mup_eq_pane_t8_ParamLimits

0x97c6,	// (0x0006c3bb) main_mup_eq_pane_t8

0x97dc,	// (0x0006c3d1) main_mup_eq_pane_t9_ParamLimits

0x97dc,	// (0x0006c3d1) main_mup_eq_pane_t9

0x97f8,	// (0x0006c3ed) main_mup_eq_pane_t10_ParamLimits

0x97f8,	// (0x0006c3ed) main_mup_eq_pane_t10

0x0009,

0xf3e9,	// (0x00071fde) main_mup_eq_pane_t_ParamLimits

0xf3e9,	// (0x00071fde) main_mup_eq_pane_t

0x98bd,	// (0x0006c4b2) mup_equalizer_pane_cp5_ParamLimits

0x98d5,	// (0x0006c4ca) mup_equalizer_pane_cp6_ParamLimits

0x98ed,	// (0x0006c4e2) mup_equalizer_pane_cp7_ParamLimits

0x0256,	// (0x00062e4b) main_gallery_pane

0x4efa,	// (0x00067aef) smil2_volume_pane

0x4f15,	// (0x00067b0a) smil_status_volume_pane_g1_ParamLimits

0x4f02,	// (0x00067af7) smil_status_volume_pane_g2_ParamLimits

0xa378,	// (0x0006cf6d) smil_status_volume_pane_g3_ParamLimits

0xf59f,	// (0x00072194) smil_status_volume_pane_g_ParamLimits

0x4561,	// (0x00067156) bg_popup_window_pane_cp07_ParamLimits

0x50a5,	// (0x00067c9a) blid_firmament_pane

0x0a09,	// (0x000635fe) aid_size_cell_gallery_ParamLimits

0x0a09,	// (0x000635fe) aid_size_cell_gallery

0x0a09,	// (0x000635fe) grid_gallery_pane_ParamLimits

0x0a09,	// (0x000635fe) grid_gallery_pane

0x17b0,	// (0x000643a5) cell_gallery_pane_ParamLimits

0x17b0,	// (0x000643a5) cell_gallery_pane

0x09b0,	// (0x000635a5) bg_cell_gallery_focus_pane_ParamLimits

0x09b0,	// (0x000635a5) bg_cell_gallery_focus_pane

0x0a17,	// (0x0006360c) cell_gallery_pane_g1_ParamLimits

0x0a17,	// (0x0006360c) cell_gallery_pane_g1

0x0a17,	// (0x0006360c) cell_gallery_pane_g2_ParamLimits

0x0a17,	// (0x0006360c) cell_gallery_pane_g2

0x0a17,	// (0x0006360c) cell_gallery_pane_g3_ParamLimits

0x0a17,	// (0x0006360c) cell_gallery_pane_g3

0x0a25,	// (0x0006361a) cell_gallery_pane_g4_ParamLimits

0x0a25,	// (0x0006361a) cell_gallery_pane_g4

0x0003,

0xf64b,	// (0x00072240) cell_gallery_pane_g_ParamLimits

0xf64b,	// (0x00072240) cell_gallery_pane_g

0x51f7,	// (0x00067dec) bg_cell_gallery_focus_pane_g1

0x51ff,	// (0x00067df4) bg_cell_gallery_focus_pane_g2

0x5207,	// (0x00067dfc) bg_cell_gallery_focus_pane_g3

0x520f,	// (0x00067e04) bg_cell_gallery_focus_pane_g4

0x5217,	// (0x00067e0c) bg_cell_gallery_focus_pane_g5

0x521f,	// (0x00067e14) bg_cell_gallery_focus_pane_g6

0x5227,	// (0x00067e1c) bg_cell_gallery_focus_pane_g7

0x522f,	// (0x00067e24) bg_cell_gallery_focus_pane_g8

0x0007,

0xf654,	// (0x00072249) bg_cell_gallery_focus_pane_g

0x5237,	// (0x00067e2c) aid_firma_cardinal

0x524b,	// (0x00067e40) blid_firmament_pane_t1

0x5262,	// (0x00067e57) blid_firmament_pane_t2

0x5279,	// (0x00067e6e) blid_firmament_pane_t3

0x5290,	// (0x00067e85) blid_firmament_pane_t4

0x0003,

0xf665,	// (0x0007225a) blid_firmament_pane_t

0x52a7,	// (0x00067e9c) blid_sat_info_pane

0x0d13,	// (0x00063908) blid_sat_info_pane_g1

0x0d13,	// (0x00063908) blid_sat_info_pane_g2

0x0001,

0xf3dd,	// (0x00071fd2) blid_sat_info_pane_g

0x52b7,	// (0x00067eac) blid_sat_info_pane_t1

0x52c5,	// (0x00067eba) smil2_volume_content_pane

0x52ce,	// (0x00067ec3) smil2_volume_pane_g1

0x0b46,	// (0x0006373b) smil2_volume_content_pane_g1

0x52d6,	// (0x00067ecb) smil2_volume_content_pane_g2

0x52df,	// (0x00067ed4) smil2_volume_content_pane_g3

0x52e8,	// (0x00067edd) smil2_volume_content_pane_g4

0x52f1,	// (0x00067ee6) smil2_volume_content_pane_g5

0x52fa,	// (0x00067eef) smil2_volume_content_pane_g6

0x5303,	// (0x00067ef8) smil2_volume_content_pane_g7

0x530c,	// (0x00067f01) smil2_volume_content_pane_g8

0x5315,	// (0x00067f0a) smil2_volume_content_pane_g9

0x531e,	// (0x00067f13) smil2_volume_content_pane_g10

0x0009,

0xf66e,	// (0x00072263) smil2_volume_content_pane_g

0x7c30,	// (0x0006a825) cale_week_day_heading_pane_t1_ParamLimits

0x7c58,	// (0x0006a84d) cale_week_day_heading_pane_t2_ParamLimits

0x7c85,	// (0x0006a87a) cale_week_day_heading_pane_t3_ParamLimits

0x7cb2,	// (0x0006a8a7) cale_week_day_heading_pane_t4_ParamLimits

0x7cdf,	// (0x0006a8d4) cale_week_day_heading_pane_t5_ParamLimits

0x7d0c,	// (0x0006a901) cale_week_day_heading_pane_t6_ParamLimits

0x7d39,	// (0x0006a92e) cale_week_day_heading_pane_t7_ParamLimits

0xf18c,	// (0x00071d81) cale_week_day_heading_pane_t_ParamLimits

0x0c63,	// (0x00063858) bg_cale_side_pane_ParamLimits

0x7d61,	// (0x0006a956) cale_week_time_pane_t1_ParamLimits

0x7d85,	// (0x0006a97a) cale_week_time_pane_t2_ParamLimits

0x7da9,	// (0x0006a99e) cale_week_time_pane_t3_ParamLimits

0x7dcd,	// (0x0006a9c2) cale_week_time_pane_t4_ParamLimits

0x7df1,	// (0x0006a9e6) cale_week_time_pane_t5_ParamLimits

0x7e17,	// (0x0006aa0c) cale_week_time_pane_t6_ParamLimits

0x7e3f,	// (0x0006aa34) cale_week_time_pane_t7_ParamLimits

0x7e6b,	// (0x0006aa60) cale_week_time_pane_t8_ParamLimits

0xf19b,	// (0x00071d90) cale_week_time_pane_t_ParamLimits

0x7e9b,	// (0x0006aa90) cell_cale_week_pane_g2_ParamLimits

0x0c63,	// (0x00063858) bg_cale_side_pane_cp01_ParamLimits

0x8f96,	// (0x0006bb8b) cale_month_week_pane_t1_ParamLimits

0x8faf,	// (0x0006bba4) cale_month_week_pane_t2_ParamLimits

0x8fc8,	// (0x0006bbbd) cale_month_week_pane_t3_ParamLimits

0x8fe1,	// (0x0006bbd6) cale_month_week_pane_t4_ParamLimits

0x8ffa,	// (0x0006bbef) cale_month_week_pane_t5_ParamLimits

0x9017,	// (0x0006bc0c) cale_month_week_pane_t6_ParamLimits

0xf269,	// (0x00071e5e) cale_month_week_pane_t_ParamLimits

0x9168,	// (0x0006bd5d) cell_cale_month_pane_g1_ParamLimits

0x0256,	// (0x00062e4b) main_cale_event_viewer_pane

0x0256,	// (0x00062e4b) listscroll_cale_event_viewer_pane

0x5327,	// (0x00067f1c) list_cale_ev_pane

0x532f,	// (0x00067f24) scroll_pane_cp023

0xa5d7,	// (0x0006d1cc) field_cale_ev_pane_ParamLimits

0xa5d7,	// (0x0006d1cc) field_cale_ev_pane

0x533b,	// (0x00067f30) field_cale_ev_content_pane_ParamLimits

0x533b,	// (0x00067f30) field_cale_ev_content_pane

0x5347,	// (0x00067f3c) field_cale_ev_pane_g1_ParamLimits

0x5347,	// (0x00067f3c) field_cale_ev_pane_g1

0x5353,	// (0x00067f48) field_cale_ev_pane_g2_ParamLimits

0x5353,	// (0x00067f48) field_cale_ev_pane_g2

0x536b,	// (0x00067f60) field_cale_ev_pane_g3_ParamLimits

0x536b,	// (0x00067f60) field_cale_ev_pane_g3

0x0002,

0xf683,	// (0x00072278) field_cale_ev_pane_g_ParamLimits

0xf683,	// (0x00072278) field_cale_ev_pane_g

0x5383,	// (0x00067f78) field_cale_ev_pane_t1_ParamLimits

0x5383,	// (0x00067f78) field_cale_ev_pane_t1

0xa5fb,	// (0x0006d1f0) field_cale_ev_content_pane_t1_ParamLimits

0xa5fb,	// (0x0006d1f0) field_cale_ev_content_pane_t1

0x1855,	// (0x0006444a) bg_button_pane_cp01

0x788e,	// (0x0006a483) listscroll_cale_week_pane_ParamLimits

0x0c2b,	// (0x00063820) popup_toolbar_window_cp01

0x0c34,	// (0x00063829) listscroll_cale_week_pane_t1_ParamLimits

0x788e,	// (0x0006a483) listscroll_cale_day_pane_ParamLimits

0x0c2b,	// (0x00063820) popup_toolbar_window_cp02

0x1095,	// (0x00063c8a) listscroll_cale_day_pane_t1_ParamLimits

0x788e,	// (0x0006a483) main_cale_month_pane_ParamLimits

0xa2ce,	// (0x0006cec3) popup_toolbar_window_cp03_ParamLimits

0xa2ce,	// (0x0006cec3) popup_toolbar_window_cp03

0x9b94,	// (0x0006c789) main_image_pane_g2_ParamLimits

0x9b94,	// (0x0006c789) main_image_pane_g2

0x9ba0,	// (0x0006c795) main_image_pane_g3_ParamLimits

0x9ba0,	// (0x0006c795) main_image_pane_g3

0x0002,

0xf47b,	// (0x00072070) main_image_pane_g_ParamLimits

0xf47b,	// (0x00072070) main_image_pane_g

0x19b1,	// (0x000645a6) main_image_pane_t1_ParamLimits

0x9bac,	// (0x0006c7a1) main_image_pane_t2_ParamLimits

0x9bac,	// (0x0006c7a1) main_image_pane_t2

0x9bbe,	// (0x0006c7b3) main_image_pane_t3_ParamLimits

0x9bbe,	// (0x0006c7b3) main_image_pane_t3

0x9bd0,	// (0x0006c7c5) main_image_pane_t4_ParamLimits

0x9bd0,	// (0x0006c7c5) main_image_pane_t4

0x0003,

0xf482,	// (0x00072077) main_image_pane_t_ParamLimits

0xf482,	// (0x00072077) main_image_pane_t

0x9be2,	// (0x0006c7d7) popup_image_details_window_cp01

0x9bec,	// (0x0006c7e1) popup_toobar_trans_pane_cp01_ParamLimits

0x9bec,	// (0x0006c7e1) popup_toobar_trans_pane_cp01

0xa210,	// (0x0006ce05) popup_image_details_window_ParamLimits

0xa210,	// (0x0006ce05) popup_image_details_window

0xa21e,	// (0x0006ce13) popup_image_focus_window

0x0a09,	// (0x000635fe) camera2_autofocus_pane_ParamLimits

0x0a09,	// (0x000635fe) camera2_autofocus_pane

0x0256,	// (0x00062e4b) bg_popup_sub_pane_cp06

0x539a,	// (0x00067f8f) popup_image_focus_window_g1

0x53a2,	// (0x00067f97) popup_image_focus_window_g2

0x53aa,	// (0x00067f9f) popup_image_focus_window_g3

0x53b2,	// (0x00067fa7) popup_image_focus_window_g4

0x0003,

0xf68a,	// (0x0007227f) popup_image_focus_window_g

0x53ba,	// (0x00067faf) popup_image_focus_window_t1

0x53c8,	// (0x00067fbd) popup_image_focus_window_t2

0x53d8,	// (0x00067fcd) popup_image_focus_window_t3

0x0002,

0xf693,	// (0x00072288) popup_image_focus_window_t

0x0a17,	// (0x0006360c) camera2_autofocus_pane_g1

0x09b0,	// (0x000635a5) bg_tb_trans_pane_cp01

0x53e6,	// (0x00067fdb) popup_image_details_window_g1

0x53f9,	// (0x00067fee) popup_image_details_window_g2

0x0002,

0xf6a5,	// (0x0007229a) popup_image_details_window_g

0x5422,	// (0x00068017) popup_image_details_window_t1

0x5434,	// (0x00068029) popup_image_details_window_t2

0x544d,	// (0x00068042) popup_image_details_window_t3

0x5461,	// (0x00068056) popup_image_details_window_t4

0x547c,	// (0x00068071) popup_image_details_window_t5

0x0004,

0xf6ac,	// (0x000722a1) popup_image_details_window_t

0x0a7d,	// (0x00063672) bg_calc_paper_pane_ParamLimits

0x0256,	// (0x00062e4b) grid_highlight_pane_cp013

0x7642,	// (0x0006a237) list_calc_pane_ParamLimits

0x7654,	// (0x0006a249) scroll_pane_cp024

0x0aab,	// (0x000636a0) bg_calc_display_pane_ParamLimits

0x765c,	// (0x0006a251) calc_display_pane_t1_ParamLimits

0x7671,	// (0x0006a266) calc_display_pane_t2_ParamLimits

0x7686,	// (0x0006a27b) calc_display_pane_t3_ParamLimits

0xf10c,	// (0x00071d01) calc_display_pane_t_ParamLimits

0x7756,	// (0x0006a34b) cell_calc_pane_g2

0x0001,

0xf129,	// (0x00071d1e) cell_calc_pane_g

0x775f,	// (0x0006a354) cell_calc_pane_t1

0x0b24,	// (0x00063719) grid_highlight_pane_cp02_ParamLimits

0x0b3a,	// (0x0006372f) toolbar_button_pane_cp01_ParamLimits

0x0b3a,	// (0x0006372f) toolbar_button_pane_cp01

0x19f6,	// (0x000645eb) temp_image_control_pane_ParamLimits

0x19f6,	// (0x000645eb) temp_image_control_pane

0x09b0,	// (0x000635a5) main_mp3_pane

0x5496,	// (0x0006808b) temp_image_control_pane_g1_ParamLimits

0x5496,	// (0x0006808b) temp_image_control_pane_g1

0x54a4,	// (0x00068099) temp_image_control_pane_g2_ParamLimits

0x54a4,	// (0x00068099) temp_image_control_pane_g2

0x54b6,	// (0x000680ab) temp_image_control_pane_g3_ParamLimits

0x54b6,	// (0x000680ab) temp_image_control_pane_g3

0xa616,	// (0x0006d20b) temp_image_control_pane_g4_ParamLimits

0xa616,	// (0x0006d20b) temp_image_control_pane_g4

0x0003,

0xf6b7,	// (0x000722ac) temp_image_control_pane_g_ParamLimits

0xf6b7,	// (0x000722ac) temp_image_control_pane_g

0x5496,	// (0x0006808b) main_mp3_pane_g1

0xa627,	// (0x0006d21c) main_mp3_pane_g2

0x0007,

0xf6c0,	// (0x000722b5) main_mp3_pane_g

0x54eb,	// (0x000680e0) main_mp3_pane_t1

0x0a25,	// (0x0006361a) main_camera_pane_g8_ParamLimits

0x0a25,	// (0x0006361a) main_camera_pane_g8

0x8047,	// (0x0006ac3c) main_video_pane_g7_ParamLimits

0x8047,	// (0x0006ac3c) main_video_pane_g7

0x179c,	// (0x00064391) main_camera2_pane_t7_ParamLimits

0x179c,	// (0x00064391) main_camera2_pane_t7

0x0e1f,	// (0x00063a14) scroll_pane_cp025_ParamLimits

0x0e1f,	// (0x00063a14) scroll_pane_cp025

0x0e33,	// (0x00063a28) scroll_pane_cp026_ParamLimits

0x0e33,	// (0x00063a28) scroll_pane_cp026

0x0e42,	// (0x00063a37) wml_content_pane_ParamLimits

0x0256,	// (0x00062e4b) main_touch_calib_pane

0xa6cb,	// (0x0006d2c0) main_touch_calib_pane_g1

0xa6d7,	// (0x0006d2cc) main_touch_calib_pane_g2

0xa6e3,	// (0x0006d2d8) main_touch_calib_pane_g3

0xa6ef,	// (0x0006d2e4) main_touch_calib_pane_g4

0x0003,

0xf6de,	// (0x000722d3) main_touch_calib_pane_g

0xa6fb,	// (0x0006d2f0) main_touch_calib_pane_t1

0xa712,	// (0x0006d307) main_touch_calib_pane_t2

0x0004,

0xf6e7,	// (0x000722dc) main_touch_calib_pane_t

0x15f2,	// (0x000641e7) mup_progress_pane_cp02

0x1611,	// (0x00064206) navi_pane_g1

0x1673,	// (0x00064268) navi_pane_mp_t3

0x09b0,	// (0x000635a5) main_mp3_pane_ParamLimits

0xa30f,	// (0x0006cf04) navi_pane_ParamLimits

0x5496,	// (0x0006808b) main_mp3_pane_g1_ParamLimits

0xa627,	// (0x0006d21c) main_mp3_pane_g2_ParamLimits

0xa633,	// (0x0006d228) main_mp3_pane_g3_ParamLimits

0xa633,	// (0x0006d228) main_mp3_pane_g3

0xa63f,	// (0x0006d234) main_mp3_pane_g4_ParamLimits

0xa63f,	// (0x0006d234) main_mp3_pane_g4

0x0a17,	// (0x0006360c) main_mp3_pane_g5_ParamLimits

0x0a17,	// (0x0006360c) main_mp3_pane_g5

0x54c6,	// (0x000680bb) main_mp3_pane_g6_ParamLimits

0x54c6,	// (0x000680bb) main_mp3_pane_g6

0x54d3,	// (0x000680c8) main_mp3_pane_g7_ParamLimits

0x54d3,	// (0x000680c8) main_mp3_pane_g7

0x54df,	// (0x000680d4) main_mp3_pane_g8_ParamLimits

0x54df,	// (0x000680d4) main_mp3_pane_g8

0xf6c0,	// (0x000722b5) main_mp3_pane_g_ParamLimits

0xa64b,	// (0x0006d240) main_mp3_pane_t2

0xa65b,	// (0x0006d250) main_mp3_pane_t3

0x54f9,	// (0x000680ee) main_mp3_pane_t4

0x5507,	// (0x000680fc) main_mp3_pane_t5

0x0005,

0xf6d1,	// (0x000722c6) main_mp3_pane_t

0x5515,	// (0x0006810a) mup_progress_pane_cp01

0x64ef,	// (0x000690e4) aid_zoom_text_secondary2

0x5327,	// (0x00067f1c) list_cale_ev2_pane

0x532f,	// (0x00067f24) scroll_pane_cp023_ParamLimits

0xa76d,	// (0x0006d362) field_cale_ev2_pane_ParamLimits

0xa76d,	// (0x0006d362) field_cale_ev2_pane

0xa788,	// (0x0006d37d) field_cale_ev2_pane_g1_ParamLimits

0xa788,	// (0x0006d37d) field_cale_ev2_pane_g1

0xa794,	// (0x0006d389) field_cale_ev2_pane_g2_ParamLimits

0xa794,	// (0x0006d389) field_cale_ev2_pane_g2

0xa7ac,	// (0x0006d3a1) field_cale_ev2_pane_g3_ParamLimits

0xa7ac,	// (0x0006d3a1) field_cale_ev2_pane_g3

0x0003,

0xf6f2,	// (0x000722e7) field_cale_ev2_pane_g_ParamLimits

0xf6f2,	// (0x000722e7) field_cale_ev2_pane_g

0x65e7,	// (0x000691dc) field_cale_ev2_pane_t1_ParamLimits

0x65e7,	// (0x000691dc) field_cale_ev2_pane_t1

0x65fe,	// (0x000691f3) field_cale_ev2_pane_t2_ParamLimits

0x65fe,	// (0x000691f3) field_cale_ev2_pane_t2

0x0001,

0xf6fb,	// (0x000722f0) field_cale_ev2_pane_t_ParamLimits

0xf6fb,	// (0x000722f0) field_cale_ev2_pane_t

0x9a73,	// (0x0006c668) main_postcard_pane_g5_ParamLimits

0x9a73,	// (0x0006c668) main_postcard_pane_g5

0x9a81,	// (0x0006c676) main_postcard_pane_g6_ParamLimits

0x9a81,	// (0x0006c676) main_postcard_pane_g6

0x0a09,	// (0x000635fe) camera2_autofocus_pane_cp_ParamLimits

0x0a09,	// (0x000635fe) camera2_autofocus_pane_cp

0x09b0,	// (0x000635a5) main_mup3_pane

0xa813,	// (0x0006d408) main_mup3_pane_g1_ParamLimits

0xa813,	// (0x0006d408) main_mup3_pane_g1

0xa834,	// (0x0006d429) main_mup3_pane_g2_ParamLimits

0xa834,	// (0x0006d429) main_mup3_pane_g2

0xa8a8,	// (0x0006d49d) main_mup3_pane_g3_ParamLimits

0xa8a8,	// (0x0006d49d) main_mup3_pane_g3

0xa90d,	// (0x0006d502) main_mup3_pane_g4_ParamLimits

0xa90d,	// (0x0006d502) main_mup3_pane_g4

0xa972,	// (0x0006d567) main_mup3_pane_g5_ParamLimits

0xa972,	// (0x0006d567) main_mup3_pane_g5

0xa9d7,	// (0x0006d5cc) main_mup3_pane_g6_ParamLimits

0xa9d7,	// (0x0006d5cc) main_mup3_pane_g6

0x0a25,	// (0x0006361a) main_mup3_pane_g7_ParamLimits

0x0a25,	// (0x0006361a) main_mup3_pane_g7

0x0007,

0xf70b,	// (0x00072300) main_mup3_pane_g_ParamLimits

0xf70b,	// (0x00072300) main_mup3_pane_g

0xaa51,	// (0x0006d646) main_mup3_pane_t1_ParamLimits

0xaa51,	// (0x0006d646) main_mup3_pane_t1

0xaabc,	// (0x0006d6b1) main_mup3_pane_t2_ParamLimits

0xaabc,	// (0x0006d6b1) main_mup3_pane_t2

0xab85,	// (0x0006d77a) main_mup3_pane_t4_ParamLimits

0xab85,	// (0x0006d77a) main_mup3_pane_t4

0xabd9,	// (0x0006d7ce) main_mup3_pane_t5_ParamLimits

0xabd9,	// (0x0006d7ce) main_mup3_pane_t5

0xac91,	// (0x0006d886) main_mup3_pane_t6_ParamLimits

0xac91,	// (0x0006d886) main_mup3_pane_t6

0x0005,

0xf71c,	// (0x00072311) main_mup3_pane_t_ParamLimits

0xf71c,	// (0x00072311) main_mup3_pane_t

0xad3b,	// (0x0006d930) mup3_progress_pane_ParamLimits

0xad3b,	// (0x0006d930) mup3_progress_pane

0xadb9,	// (0x0006d9ae) popup_mup3_control_window_ParamLimits

0xadb9,	// (0x0006d9ae) popup_mup3_control_window

0x551d,	// (0x00068112) popup_mup3_text_window

0xadd6,	// (0x0006d9cb) mup3_progress_pane_t1

0xadf4,	// (0x0006d9e9) mup3_progress_pane_t2

0x5525,	// (0x0006811a) mup3_progress_pane_t3

0x0002,

0xf729,	// (0x0007231e) mup3_progress_pane_t

0x5542,	// (0x00068137) mup_progress_pane_cp03

0x0256,	// (0x00062e4b) bg_tb_trans_pane_cp04

0xae12,	// (0x0006da07) mup3_volume_pane

0xae1a,	// (0x0006da0f) popup_mup3_control_window_g1

0x285f,	// (0x00065454) mup3_volume_pane_g1

0x2868,	// (0x0006545d) mup3_volume_pane_g2

0x2871,	// (0x00065466) mup3_volume_pane_g3

0x0002,

0xf730,	// (0x00072325) mup3_volume_pane_g

0x0256,	// (0x00062e4b) bg_tb_trans_pane_cp03

0x5552,	// (0x00068147) popup_mup3_text_window_g1

0x555a,	// (0x0006814f) popup_mup3_text_window_t1

0x0b05,	// (0x000636fa) list_calc_item_pane_g1_ParamLimits

0x5011,	// (0x00067c06) mup_volume_pane_cp_g1

0xa72b,	// (0x0006d320) main_touch_calib_pane_t3

0xa741,	// (0x0006d336) main_touch_calib_pane_t4

0xa757,	// (0x0006d34c) main_touch_calib_pane_t5

0x71bb,	// (0x00069db0) aid_cell_size_toolbar2

0x71c3,	// (0x00069db8) aid_popup3_width_pane

0x64df,	// (0x000690d4) aid_zoom_text_msg_primary

0x7f47,	// (0x0006ab3c) vorec_t7

0x0ac9,	// (0x000636be) bg_calc_paper_pane_g1_ParamLimits

0x0ae1,	// (0x000636d6) bg_calc_paper_pane_g2_ParamLimits

0x0ad5,	// (0x000636ca) bg_calc_paper_pane_g3_ParamLimits

0x0af9,	// (0x000636ee) bg_calc_paper_pane_g4_ParamLimits

0x0aed,	// (0x000636e2) bg_calc_paper_pane_g5_ParamLimits

0x76c7,	// (0x0006a2bc) bg_calc_paper_pane_g6_ParamLimits

0x76d8,	// (0x0006a2cd) bg_calc_paper_pane_g7_ParamLimits

0x76e9,	// (0x0006a2de) bg_calc_paper_pane_g8_ParamLimits

0xf113,	// (0x00071d08) bg_calc_paper_pane_g_ParamLimits

0x76fa,	// (0x0006a2ef) calc_bg_paper_pane_g9_ParamLimits

0x0a09,	// (0x000635fe) image_qvga_pane_ParamLimits

0x0a09,	// (0x000635fe) image_qvga_pane

0x098e,	// (0x00063583) bg_popup_sub_pane_cp04_ParamLimits

0x192d,	// (0x00064522) popup_mup_playback_window_g1_ParamLimits

0x1939,	// (0x0006452e) popup_mup_playback_window_t1_ParamLimits

0x194e,	// (0x00064543) popup_mup_playback_window_t2_ParamLimits

0xf476,	// (0x0007206b) popup_mup_playback_window_t_ParamLimits

0x0a17,	// (0x0006360c) main_mup2_pane_g3_ParamLimits

0x0a17,	// (0x0006360c) main_mup2_pane_g3

0x8220,	// (0x0006ae15) popup_toolbar_window_cp04

0x1d49,	// (0x0006493e) popup_call2_audio_second_window_g3_ParamLimits

0x1d49,	// (0x0006493e) popup_call2_audio_second_window_g3

0x456f,	// (0x00067164) popup_call2_audio_first_window_g4_ParamLimits

0x456f,	// (0x00067164) popup_call2_audio_first_window_g4

0x4b96,	// (0x0006778b) popup_call2_audio_in_window_g4_ParamLimits

0x4b96,	// (0x0006778b) popup_call2_audio_in_window_g4

0x9b87,	// (0x0006c77c) aid_area_sk_bg_cut_ParamLimits

0x9b87,	// (0x0006c77c) aid_area_sk_bg_cut

0x1963,	// (0x00064558) aid_area_sk_bg_cut_2_ParamLimits

0x1963,	// (0x00064558) aid_area_sk_bg_cut_2

0x0256,	// (0x00062e4b) aid_placing_details_win

0x0256,	// (0x00062e4b) aid_placing_details_win_2

0x0a17,	// (0x0006360c) camera2_autofocus_pane_g1_ParamLimits

0x7410,	// (0x0006a005) popup_fixed_preview_cale_window_ParamLimits

0x7410,	// (0x0006a005) popup_fixed_preview_cale_window

0x16d5,	// (0x000642ca) navi_slider_pane_g3

0x16cc,	// (0x000642c1) navi_slider_pane_g4

0x16c3,	// (0x000642b8) navi_slider_pane_g5

0x16d5,	// (0x000642ca) navi_slider_pane_g6

0x96e8,	// (0x0006c2dd) navi_slider_pane_g7

0x1822,	// (0x00064417) mup_scale_pane_g3

0x182b,	// (0x00064420) mup_scale_pane_g4

0x1834,	// (0x00064429) mup_scale_pane_g5

0x9905,	// (0x0006c4fa) mup_scale_pane_g6

0x990e,	// (0x0006c503) mup_scale_pane_g7

0x0d13,	// (0x00063908) cams2_slider_pane_g3

0x0d13,	// (0x00063908) cams2_slider_pane_g4

0x0d13,	// (0x00063908) cams2_slider_pane_g5

0x0d13,	// (0x00063908) cams2_slider_pane_g6

0x0d13,	// (0x00063908) cams2_slider_pane_g7

0x0d13,	// (0x00063908) camera2_autofocus_pane_cp_g1

0x4e6e,	// (0x00067a63) bg_popup_preview_window_pane_cp02_ParamLimits

0x4e6e,	// (0x00067a63) bg_popup_preview_window_pane_cp02

0x5568,	// (0x0006815d) list_fp_cale_pane_ParamLimits

0x5568,	// (0x0006815d) list_fp_cale_pane

0x5574,	// (0x00068169) popup_fixed_preview_cale_window_t1_ParamLimits

0x5574,	// (0x00068169) popup_fixed_preview_cale_window_t1

0xae23,	// (0x0006da18) popup_fixed_preview_cale_window_t2_ParamLimits

0xae23,	// (0x0006da18) popup_fixed_preview_cale_window_t2

0xae38,	// (0x0006da2d) popup_fixed_preview_cale_window_t3_ParamLimits

0xae38,	// (0x0006da2d) popup_fixed_preview_cale_window_t3

0x0002,

0xf737,	// (0x0007232c) popup_fixed_preview_cale_window_t_ParamLimits

0xf737,	// (0x0007232c) popup_fixed_preview_cale_window_t

0xae4d,	// (0x0006da42) list_single_fp_cale_pane_ParamLimits

0xae4d,	// (0x0006da42) list_single_fp_cale_pane

0x5592,	// (0x00068187) list_single_fp_cale_pane_g1_ParamLimits

0x5592,	// (0x00068187) list_single_fp_cale_pane_g1

0x559e,	// (0x00068193) list_single_fp_cale_pane_g2_ParamLimits

0x559e,	// (0x00068193) list_single_fp_cale_pane_g2

0x0002,

0xf73e,	// (0x00072333) list_single_fp_cale_pane_g_ParamLimits

0xf73e,	// (0x00072333) list_single_fp_cale_pane_g

0x55b7,	// (0x000681ac) list_single_fp_cale_pane_t1_ParamLimits

0x55b7,	// (0x000681ac) list_single_fp_cale_pane_t1

0x55c9,	// (0x000681be) list_single_fp_cale_pane_t2_ParamLimits

0x55c9,	// (0x000681be) list_single_fp_cale_pane_t2

0x0001,

0xf745,	// (0x0007233a) list_single_fp_cale_pane_t_ParamLimits

0xf745,	// (0x0007233a) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x0256,	// (0x00062e4b) main_dialer_pane

0x0256,	// (0x00062e4b) aid_cell_size_keypad

0x0256,	// (0x00062e4b) dialer_ne_pane

0x0256,	// (0x00062e4b) grid_dialer_command_1_pane

0x0256,	// (0x00062e4b) grid_dialer_command_2_pane

0x0256,	// (0x00062e4b) grid_dialer_keypad_pane

0x4561,	// (0x00067156) bg_popup_call_pane_cp06_ParamLimits

0x4561,	// (0x00067156) bg_popup_call_pane_cp06

0x4561,	// (0x00067156) dialer_ne_clear_pane_ParamLimits

0x4561,	// (0x00067156) dialer_ne_clear_pane

0x0d13,	// (0x00063908) dialer_ne_pane_g1

0x179c,	// (0x00064391) dialer_ne_pane_t1_ParamLimits

0x179c,	// (0x00064391) dialer_ne_pane_t1

0xed16,	// (0x0007190b) dialer_ne_pane_t2_ParamLimits

0xed16,	// (0x0007190b) dialer_ne_pane_t2

0xae5d,	// (0x0006da52) dialer_ne_pane_t3_ParamLimits

0xae5d,	// (0x0006da52) dialer_ne_pane_t3

0x0002,

0xf74a,	// (0x0007233f) dialer_ne_pane_t_ParamLimits

0xf74a,	// (0x0007233f) dialer_ne_pane_t

0xae5d,	// (0x0006da52) dialer_ne_pane_t3_copy1_ParamLimits

0xae5d,	// (0x0006da52) dialer_ne_pane_t3_copy1

0x55fc,	// (0x000681f1) cell_dialer_keypad_pane_ParamLimits

0x55fc,	// (0x000681f1) cell_dialer_keypad_pane

0x09b0,	// (0x000635a5) cell_dialer_command_1_pane_ParamLimits

0x09b0,	// (0x000635a5) cell_dialer_command_1_pane

0x5613,	// (0x00068208) cell_dialer_command_2_pane_ParamLimits

0x5613,	// (0x00068208) cell_dialer_command_2_pane

0x09b0,	// (0x000635a5) bg_button_pane_cp02_ParamLimits

0x09b0,	// (0x000635a5) bg_button_pane_cp02

0x0a17,	// (0x0006360c) cell_dialer_keypad_pane_g1_ParamLimits

0x0a17,	// (0x0006360c) cell_dialer_keypad_pane_g1

0x09b0,	// (0x000635a5) bg_button_pane_cp03_ParamLimits

0x09b0,	// (0x000635a5) bg_button_pane_cp03

0x0a17,	// (0x0006360c) cell_dialer_command_1_pane_g1_ParamLimits

0x0a17,	// (0x0006360c) cell_dialer_command_1_pane_g1

0x0256,	// (0x00062e4b) bg_button_pane_cp04

0x0d13,	// (0x00063908) cell_dialer_command_2_pane_g1

0x0256,	// (0x00062e4b) bg_button_pane_cp06

0x0d13,	// (0x00063908) dialer_ne_clear_pane_g1

0x9623,	// (0x0006c218) navi_pane_g2

0x9651,	// (0x0006c246) navi_pane_g3

0x0002,

0xf379,	// (0x00071f6e) navi_pane_g

0x967c,	// (0x0006c271) navi_pane_mv_g2

0x96a3,	// (0x0006c298) navi_pane_mv_g5

0x96ab,	// (0x0006c2a0) navi_pane_mv_t1

0x0aab,	// (0x000636a0) main_clock2_pane

0x0a09,	// (0x000635fe) main_clock2_list_pane_ParamLimits

0x0a09,	// (0x000635fe) main_clock2_list_pane

0xaed2,	// (0x0006dac7) main_clock2_pane_t1_ParamLimits

0xaed2,	// (0x0006dac7) main_clock2_pane_t1

0xaf00,	// (0x0006daf5) main_clock2_pane_t2_ParamLimits

0xaf00,	// (0x0006daf5) main_clock2_pane_t2

0x0004,

0xf756,	// (0x0007234b) main_clock2_pane_t_ParamLimits

0xf756,	// (0x0007234b) main_clock2_pane_t

0xaf65,	// (0x0006db5a) popup_clock_analogue_window_cp03_ParamLimits

0xaf65,	// (0x0006db5a) popup_clock_analogue_window_cp03

0xaf83,	// (0x0006db78) popup_clock_digital_window_cp02_ParamLimits

0xaf83,	// (0x0006db78) popup_clock_digital_window_cp02

0xaff8,	// (0x0006dbed) main_clock2_list_single_pane_ParamLimits

0xaff8,	// (0x0006dbed) main_clock2_list_single_pane

0x0cbe,	// (0x000638b3) list_highlight_pane_cp05

0x5654,	// (0x00068249) main_clock2_list_single_pane_t1

0x8220,	// (0x0006ae15) popup_toolbar_window_cp04_ParamLimits

0x0a25,	// (0x0006361a) camera2_autofocus_pane_g2_ParamLimits

0x0a25,	// (0x0006361a) camera2_autofocus_pane_g2

0x0a25,	// (0x0006361a) camera2_autofocus_pane_g3_ParamLimits

0x0a25,	// (0x0006361a) camera2_autofocus_pane_g3

0x0a25,	// (0x0006361a) camera2_autofocus_pane_g4_ParamLimits

0x0a25,	// (0x0006361a) camera2_autofocus_pane_g4

0x0a25,	// (0x0006361a) camera2_autofocus_pane_g5_ParamLimits

0x0a25,	// (0x0006361a) camera2_autofocus_pane_g5

0x0004,

0xf69a,	// (0x0007228f) camera2_autofocus_pane_g_ParamLimits

0xf69a,	// (0x0007228f) camera2_autofocus_pane_g

0xa7d0,	// (0x0006d3c5) camera2_autofocus_pane_cp_g2

0xa7d8,	// (0x0006d3cd) camera2_autofocus_pane_cp_g3

0xa7e0,	// (0x0006d3d5) camera2_autofocus_pane_cp_g4

0xa7e8,	// (0x0006d3dd) camera2_autofocus_pane_cp_g5

0x0004,

0xf700,	// (0x000722f5) camera2_autofocus_pane_cp_g

0x0256,	// (0x00062e4b) popup_dialer_spcha_window

0x0256,	// (0x00062e4b) bg_popup_sub_pane_cp07

0x0256,	// (0x00062e4b) list_spcha_pane

0x5662,	// (0x00068257) list_single_spcha_pane_ParamLimits

0x5662,	// (0x00068257) list_single_spcha_pane

0x0256,	// (0x00062e4b) list_highlight_pane_cp06

0x1279,	// (0x00063e6e) list_single_spcha_pane_t1

0x4940,	// (0x00067535) popup_call2_audio_out_window_g4_ParamLimits

0x4940,	// (0x00067535) popup_call2_audio_out_window_g4

0x0256,	// (0x00062e4b) main_imed2_pane

0xa228,	// (0x0006ce1d) popup_imed_adjust2_window

0xa23b,	// (0x0006ce30) popup_imed_trans_window_ParamLimits

0xa23b,	// (0x0006ce30) popup_imed_trans_window

0x50f0,	// (0x00067ce5) popup_blid_sat_info2_window_t1

0x50fe,	// (0x00067cf3) popup_blid_sat_info2_window_t2

0x000a,

0xf62f,	// (0x00072224) popup_blid_sat_info2_window_t

0xb0af,	// (0x0006dca4) aid_size_cell_colour_35

0xb0c9,	// (0x0006dcbe) aid_size_cell_colour_112

0xb0e0,	// (0x0006dcd5) aid_size_cell_effect

0x09b0,	// (0x000635a5) bg_tb_trans_pane_cp02

0x1245,	// (0x00063e3a) heading_imed_pane

0xb0fa,	// (0x0006dcef) listscroll_imed_pane

0x5674,	// (0x00068269) heading_imed_pane_g1

0x567c,	// (0x00068271) heading_imed_pane_t1

0x568a,	// (0x0006827f) grid_imed_colour_35_pane_ParamLimits

0x568a,	// (0x0006827f) grid_imed_colour_35_pane

0xb106,	// (0x0006dcfb) grid_imed_effect_pane

0x56a6,	// (0x0006829b) list_imed_aspect_pane

0xb116,	// (0x0006dd0b) scroll_pane_cp027_ParamLimits

0xb116,	// (0x0006dd0b) scroll_pane_cp027

0xb122,	// (0x0006dd17) cell_imed_effect_pane_ParamLimits

0xb122,	// (0x0006dd17) cell_imed_effect_pane

0x56ae,	// (0x000682a3) cell_imed_colour_pane_ParamLimits

0x56ae,	// (0x000682a3) cell_imed_colour_pane

0x5704,	// (0x000682f9) cell_imed_colour_pane_g1_ParamLimits

0x5704,	// (0x000682f9) cell_imed_colour_pane_g1

0x5715,	// (0x0006830a) hgihlgiht_grid_pane_cp016_ParamLimits

0x5715,	// (0x0006830a) hgihlgiht_grid_pane_cp016

0xb13e,	// (0x0006dd33) cell_imed_effect_pane_g1

0xb146,	// (0x0006dd3b) grid_highlight_pane_cp017

0x5726,	// (0x0006831b) list_imed_single_pane_ParamLimits

0x5726,	// (0x0006831b) list_imed_single_pane

0x0256,	// (0x00062e4b) list_highlight_pane_cp07

0x573a,	// (0x0006832f) list_imed_aspect_pane_comp1_t1

0x17b0,	// (0x000643a5) bg_tb_trans_pane_cp05

0x575c,	// (0x00068351) popup_imed_adjust2_window_g1

0x5783,	// (0x00068378) popup_imed_adjust2_window_t1

0x579b,	// (0x00068390) slider_imed_adjust_pane

0xed33,	// (0x00071928) slider_imed_adjust_pane_g1

0xed43,	// (0x00071938) slider_imed_adjust_pane_g2

0xed53,	// (0x00071948) slider_imed_adjust_pane_g3

0xed64,	// (0x00071959) slider_imed_adjust_pane_g4

0x0003,

0xf773,	// (0x00072368) slider_imed_adjust_pane_g

0xb14f,	// (0x0006dd44) aid_size_cell_clipart2

0xed75,	// (0x0007196a) grid_imed_clipart_pane

0xed7f,	// (0x00071974) scroll_pane_cp031

0xb15b,	// (0x0006dd50) cell_imed_clipart_pane_ParamLimits

0xb15b,	// (0x0006dd50) cell_imed_clipart_pane

0xb179,	// (0x0006dd6e) cell_imed_clipart_pane_g1

0x0256,	// (0x00062e4b) grid_highlight_pane_cp014

0xaeb4,	// (0x0006daa9) main_clock2_pane_g1_ParamLimits

0xaeb4,	// (0x0006daa9) main_clock2_pane_g1

0xaf9f,	// (0x0006db94) aid_call2_pane_cp10

0xafb1,	// (0x0006dba6) aid_call_pane_cp10

0x15e6,	// (0x000641db) popup_clock_analogue_window_cp10_g1

0x15e6,	// (0x000641db) popup_clock_analogue_window_cp10_g2

0xafc3,	// (0x0006dbb8) popup_clock_analogue_window_cp10_g3

0xafc3,	// (0x0006dbb8) popup_clock_analogue_window_cp10_g4

0x15e6,	// (0x000641db) popup_clock_analogue_window_cp10_g5

0x0004,

0xf761,	// (0x00072356) popup_clock_analogue_window_cp10_g

0xafd9,	// (0x0006dbce) popup_clock_analogue_window_cp10_t1

0xb00a,	// (0x0006dbff) clock_digital_number_pane_cp10_ParamLimits

0xb00a,	// (0x0006dbff) clock_digital_number_pane_cp10

0xb024,	// (0x0006dc19) clock_digital_number_pane_cp11_ParamLimits

0xb024,	// (0x0006dc19) clock_digital_number_pane_cp11

0xb03e,	// (0x0006dc33) clock_digital_number_pane_cp12_ParamLimits

0xb03e,	// (0x0006dc33) clock_digital_number_pane_cp12

0xb058,	// (0x0006dc4d) clock_digital_number_pane_cp13_ParamLimits

0xb058,	// (0x0006dc4d) clock_digital_number_pane_cp13

0xb074,	// (0x0006dc69) clock_digital_separator_pane_cp10_ParamLimits

0xb074,	// (0x0006dc69) clock_digital_separator_pane_cp10

0xb08e,	// (0x0006dc83) popup_clock_digital_window_cp02_t1_ParamLimits

0xb08e,	// (0x0006dc83) popup_clock_digital_window_cp02_t1

0x0986,	// (0x0006357b) clock_digital_number_pane_cp10_g1

0x0986,	// (0x0006357b) clock_digital_number_pane_cp10_g2

0x0001,

0xf77c,	// (0x00072371) clock_digital_number_pane_cp10_g

0x0986,	// (0x0006357b) clock_digital_separator_pane_cp10_g1

0x0986,	// (0x0006357b) clock_digital_separator_pane_g2_cp10

0x1681,	// (0x00064276) navi_pane_vded_g4

0x168a,	// (0x0006427f) navi_pane_vded_g5

0x1693,	// (0x00064288) navi_pane_vded_t1

0x0256,	// (0x00062e4b) main_vded_pane

0xb182,	// (0x0006dd77) main_vded_pane_g1

0xb18e,	// (0x0006dd83) main_vded_pane_g2

0xb198,	// (0x0006dd8d) main_vded_pane_g3

0x0002,

0xf781,	// (0x00072376) main_vded_pane_g

0xb1a2,	// (0x0006dd97) main_vded_pane_t1

0xb1b0,	// (0x0006dda5) main_vded_pane_t2

0x0001,

0xf788,	// (0x0007237d) main_vded_pane_t

0xb1be,	// (0x0006ddb3) vded_slider_pane

0xb1c8,	// (0x0006ddbd) vded_video_pane

0xed87,	// (0x0007197c) vded_video_pane_g1

0xb1d4,	// (0x0006ddc9) vded_video_pane_g2

0x0d13,	// (0x00063908) vded_video_pane_g3

0x0002,

0xf78d,	// (0x00072382) vded_video_pane_g

0xed91,	// (0x00071986) vded_slider_pane_g1

0x5011,	// (0x00067c06) vded_slider_pane_g2

0xed9a,	// (0x0007198f) vded_slider_pane_g3

0xeda3,	// (0x00071998) vded_slider_pane_g4

0xedac,	// (0x000719a1) vded_slider_pane_g5

0x0004,

0xf794,	// (0x00072389) vded_slider_pane_g

0xadad,	// (0x0006d9a2) mup3_rocker_pane_ParamLimits

0xadad,	// (0x0006d9a2) mup3_rocker_pane

0xb1dd,	// (0x0006ddd2) mup3_control_keys_pane_g1

0xb1e5,	// (0x0006ddda) mup3_control_keys_pane_g2

0xb1ed,	// (0x0006dde2) mup3_control_keys_pane_g3

0xb1f5,	// (0x0006ddea) mup3_control_keys_pane_g4

0x0003,

0xf79f,	// (0x00072394) mup3_control_keys_pane_g

0x7438,	// (0x0006a02d) popup_toolbar2_fixed_window_cp01_ParamLimits

0x7438,	// (0x0006a02d) popup_toolbar2_fixed_window_cp01

0xadc9,	// (0x0006d9be) popup_toolbar2_fixed_window_cp02_ParamLimits

0xadc9,	// (0x0006d9be) popup_toolbar2_fixed_window_cp02

0x1ebb,	// (0x00064ab0) popup_call2_audio_second_window_t4_ParamLimits

0x1ebb,	// (0x00064ab0) popup_call2_audio_second_window_t4

0x4805,	// (0x000673fa) popup_call2_audio_first_window_t6_ParamLimits

0x4805,	// (0x000673fa) popup_call2_audio_first_window_t6

0x4a43,	// (0x00067638) popup_call2_audio_out_window_t6_ParamLimits

0x4a43,	// (0x00067638) popup_call2_audio_out_window_t6

0x0256,	// (0x00062e4b) main_vitu_pane

0x0a09,	// (0x000635fe) aid_size_cell_itu_ParamLimits

0x0a09,	// (0x000635fe) aid_size_cell_itu

0x0a09,	// (0x000635fe) bg_popup_window_pane_cp08_ParamLimits

0x0a09,	// (0x000635fe) bg_popup_window_pane_cp08

0x0a09,	// (0x000635fe) field_vitu_entry_pane_ParamLimits

0x0a09,	// (0x000635fe) field_vitu_entry_pane

0x0a09,	// (0x000635fe) grid_vitu_function_pane_ParamLimits

0x0a09,	// (0x000635fe) grid_vitu_function_pane

0x0a09,	// (0x000635fe) grid_vitu_itu_pane_ParamLimits

0x0a09,	// (0x000635fe) grid_vitu_itu_pane

0x0a09,	// (0x000635fe) cell_vitu_itu_pane_ParamLimits

0x0a09,	// (0x000635fe) cell_vitu_itu_pane

0x0a09,	// (0x000635fe) cell_vitu_function_pane_ParamLimits

0x0a09,	// (0x000635fe) cell_vitu_function_pane

0x09b0,	// (0x000635a5) bg_popup_sub_pane_cp08_ParamLimits

0x09b0,	// (0x000635a5) bg_popup_sub_pane_cp08

0x0ce5,	// (0x000638da) field_vitu_entry_pane_t1_ParamLimits

0x0ce5,	// (0x000638da) field_vitu_entry_pane_t1

0xed16,	// (0x0007190b) field_vitu_entry_pane_t2_ParamLimits

0xed16,	// (0x0007190b) field_vitu_entry_pane_t2

0x0001,

0xf7a8,	// (0x0007239d) field_vitu_entry_pane_t_ParamLimits

0xf7a8,	// (0x0007239d) field_vitu_entry_pane_t

0x4561,	// (0x00067156) bg_button_pane_cp05_ParamLimits

0x4561,	// (0x00067156) bg_button_pane_cp05

0xedb5,	// (0x000719aa) cell_vitu_itu_pane_g1

0x1788,	// (0x0006437d) cell_vitu_itu_pane_t1_ParamLimits

0x1788,	// (0x0006437d) cell_vitu_itu_pane_t1

0x1788,	// (0x0006437d) cell_vitu_itu_pane_t2_ParamLimits

0x1788,	// (0x0006437d) cell_vitu_itu_pane_t2

0x0002,

0xf7ad,	// (0x000723a2) cell_vitu_itu_pane_t_ParamLimits

0xf7ad,	// (0x000723a2) cell_vitu_itu_pane_t

0x0256,	// (0x00062e4b) bg_button_pane_cp07

0x0d13,	// (0x00063908) cell_vitu_function_pane_g1

0x7569,	// (0x0006a15e) main_calc_pane_g1

0x71f7,	// (0x00069dec) aid_visual_content_pane

0x0256,	// (0x00062e4b) main_vradio_pane

0x0a25,	// (0x0006361a) main_vradio_pane_g1_ParamLimits

0x0a25,	// (0x0006361a) main_vradio_pane_g1

0x0a25,	// (0x0006361a) main_vradio_pane_g2_ParamLimits

0x0a25,	// (0x0006361a) main_vradio_pane_g2

0x0001,

0xf7b4,	// (0x000723a9) main_vradio_pane_g_ParamLimits

0xf7b4,	// (0x000723a9) main_vradio_pane_g

0x179c,	// (0x00064391) main_vradio_pane_t1_ParamLimits

0x179c,	// (0x00064391) main_vradio_pane_t1

0x179c,	// (0x00064391) main_vradio_pane_t2_ParamLimits

0x179c,	// (0x00064391) main_vradio_pane_t2

0x179c,	// (0x00064391) main_vradio_pane_t3_ParamLimits

0x179c,	// (0x00064391) main_vradio_pane_t3

0x0002,

0xf7b9,	// (0x000723ae) main_vradio_pane_t_ParamLimits

0xf7b9,	// (0x000723ae) main_vradio_pane_t

0x0a09,	// (0x000635fe) vradio_rocker_control_pane_ParamLimits

0x0a09,	// (0x000635fe) vradio_rocker_control_pane

0x0a09,	// (0x000635fe) vradio_station_info_pane_ParamLimits

0x0a09,	// (0x000635fe) vradio_station_info_pane

0x09b0,	// (0x000635a5) vradio_frequency_info_pane_ParamLimits

0x09b0,	// (0x000635a5) vradio_frequency_info_pane

0x0d13,	// (0x00063908) vradio_station_info_pane_g1

0x1788,	// (0x0006437d) vradio_station_info_pane_t1_ParamLimits

0x1788,	// (0x0006437d) vradio_station_info_pane_t1

0x179c,	// (0x00064391) vradio_station_info_pane_t2_ParamLimits

0x179c,	// (0x00064391) vradio_station_info_pane_t2

0x0001,

0xf7c0,	// (0x000723b5) vradio_station_info_pane_t_ParamLimits

0xf7c0,	// (0x000723b5) vradio_station_info_pane_t

0x0256,	// (0x00062e4b) vradio_tuning_pane

0xb205,	// (0x0006ddfa) vradio_rocker_control_pane_g1

0xedd1,	// (0x000719c6) vradio_rocker_control_pane_g2

0xb20d,	// (0x0006de02) vradio_rocker_control_pane_g3

0xb215,	// (0x0006de0a) vradio_rocker_control_pane_g4

0xb21f,	// (0x0006de14) vradio_rocker_control_pane_g5

0x0004,

0xf7c5,	// (0x000723ba) vradio_rocker_control_pane_g

0x0d13,	// (0x00063908) vradio_frequency_info_pane_g1

0x0ce5,	// (0x000638da) vradio_frequency_info_pane_t1_ParamLimits

0x0ce5,	// (0x000638da) vradio_frequency_info_pane_t1

0xb227,	// (0x0006de1c) vradio_tuning_pane_g1

0xb234,	// (0x0006de29) vradio_tuning_pane_t1

0x7238,	// (0x00069e2d) area_side_right_pane_ParamLimits

0x7238,	// (0x00069e2d) area_side_right_pane

0x4e35,	// (0x00067a2a) status_small_pane_g1

0x4e3d,	// (0x00067a32) status_small_pane_g2

0x4e46,	// (0x00067a3b) status_small_pane_g3

0x4e4f,	// (0x00067a44) status_small_pane_g4

0x0003,

0xf591,	// (0x00072186) status_small_pane_g

0x4e58,	// (0x00067a4d) status_small_pane_t1

0x0256,	// (0x00062e4b) main_video3_pane

0xedd9,	// (0x000719ce) cams_zoom_vslider_pane

0xede1,	// (0x000719d6) image3_wide_pane_ParamLimits

0xede1,	// (0x000719d6) image3_wide_pane

0xedfb,	// (0x000719f0) image3_wide_small_pane

0xee07,	// (0x000719fc) main_video3_pane_g1_ParamLimits

0xee07,	// (0x000719fc) main_video3_pane_g1

0xee23,	// (0x00071a18) main_video3_pane_g2_ParamLimits

0xee23,	// (0x00071a18) main_video3_pane_g2

0x0001,

0xf7d0,	// (0x000723c5) main_video3_pane_g_ParamLimits

0xf7d0,	// (0x000723c5) main_video3_pane_g

0xee3f,	// (0x00071a34) main_video3_pane_t1_ParamLimits

0xee3f,	// (0x00071a34) main_video3_pane_t1

0xee6a,	// (0x00071a5f) main_video3_pane_t2_ParamLimits

0xee6a,	// (0x00071a5f) main_video3_pane_t2

0xee97,	// (0x00071a8c) main_video3_pane_t3_ParamLimits

0xee97,	// (0x00071a8c) main_video3_pane_t3

0x0002,

0xf7d5,	// (0x000723ca) main_video3_pane_t_ParamLimits

0xf7d5,	// (0x000723ca) main_video3_pane_t

0xeec4,	// (0x00071ab9) cams_zoom_vslider_pane_g1

0xeecd,	// (0x00071ac2) cams_zoom_vslider_pane_g2

0x0001,

0xf7dc,	// (0x000723d1) cams_zoom_vslider_pane_g

0xeed5,	// (0x00071aca) small_slider_vertical_pane

0x0d13,	// (0x00063908) small_slider_vertical_pane_g1

0x0d13,	// (0x00063908) small_slider_vertical_pane_g2

0xeedd,	// (0x00071ad2) small_slider_vertical_pane_g3

0x0002,

0xf7e1,	// (0x000723d6) small_slider_vertical_pane_g

0x0256,	// (0x00062e4b) main_hwr_training_pane

0xeee6,	// (0x00071adb) hwr_training_instruct_pane_ParamLimits

0xeee6,	// (0x00071adb) hwr_training_instruct_pane

0xb243,	// (0x0006de38) hwr_training_navi_pane_ParamLimits

0xb243,	// (0x0006de38) hwr_training_navi_pane

0xb25d,	// (0x0006de52) hwr_training_write_pane_ParamLimits

0xb25d,	// (0x0006de52) hwr_training_write_pane

0x0256,	// (0x00062e4b) bg_frame_shadow_pane

0xef1d,	// (0x00071b12) hwr_training_write_pane_g1

0xef25,	// (0x00071b1a) hwr_training_write_pane_g2

0xef2d,	// (0x00071b22) hwr_training_write_pane_g3

0xef35,	// (0x00071b2a) hwr_training_write_pane_g4

0xef3d,	// (0x00071b32) hwr_training_write_pane_g5

0xef45,	// (0x00071b3a) hwr_training_write_pane_g6

0xef4d,	// (0x00071b42) hwr_training_write_pane_g7

0x0006,

0xf7e8,	// (0x000723dd) hwr_training_write_pane_g

0xb295,	// (0x0006de8a) hwr_training_navi_pane_g1_ParamLimits

0xb295,	// (0x0006de8a) hwr_training_navi_pane_g1

0xb2a7,	// (0x0006de9c) hwr_training_navi_pane_g2_ParamLimits

0xb2a7,	// (0x0006de9c) hwr_training_navi_pane_g2

0xb2b9,	// (0x0006deae) hwr_training_navi_pane_g3_ParamLimits

0xb2b9,	// (0x0006deae) hwr_training_navi_pane_g3

0xb2c9,	// (0x0006debe) hwr_training_navi_pane_g4_ParamLimits

0xb2c9,	// (0x0006debe) hwr_training_navi_pane_g4

0x0004,

0xf7f7,	// (0x000723ec) hwr_training_navi_pane_g_ParamLimits

0xf7f7,	// (0x000723ec) hwr_training_navi_pane_g

0xb2e3,	// (0x0006ded8) hwr_training_navi_pane_t1

0xb2f1,	// (0x0006dee6) list_single_hwr_training_instruct_pane_ParamLimits

0xb2f1,	// (0x0006dee6) list_single_hwr_training_instruct_pane

0xef55,	// (0x00071b4a) list_single_hwr_training_instruct_pane_t1

0x51f7,	// (0x00067dec) bg_frame_shadow_pane_g1

0xef64,	// (0x00071b59) bg_frame_shadow_pane_g2

0xef6c,	// (0x00071b61) bg_frame_shadow_pane_g3

0xef74,	// (0x00071b69) bg_frame_shadow_pane_g4

0xef7c,	// (0x00071b71) bg_frame_shadow_pane_g5

0xef84,	// (0x00071b79) bg_frame_shadow_pane_g6

0xef8c,	// (0x00071b81) bg_frame_shadow_pane_g7

0x0b87,	// (0x0006377c) bg_frame_shadow_pane_g8

0x0007,

0xf802,	// (0x000723f7) bg_frame_shadow_pane_g

0x0256,	// (0x00062e4b) main_video_tele_dialer_pane

0xb30a,	// (0x0006deff) aid_size_cell_video_keypad_ParamLimits

0xb30a,	// (0x0006deff) aid_size_cell_video_keypad

0xb31a,	// (0x0006df0f) grid_video_dialer_keypad_pane_ParamLimits

0xb31a,	// (0x0006df0f) grid_video_dialer_keypad_pane

0xb34c,	// (0x0006df41) video_down_pane_cp_ParamLimits

0xb34c,	// (0x0006df41) video_down_pane_cp

0xb376,	// (0x0006df6b) cell_video_dialer_keypad_pane_ParamLimits

0xb376,	// (0x0006df6b) cell_video_dialer_keypad_pane

0xef94,	// (0x00071b89) bg_button_pane_cp08_ParamLimits

0xef94,	// (0x00071b89) bg_button_pane_cp08

0xb38d,	// (0x0006df82) cell_video_dialer_keypad_pane_g1_ParamLimits

0xb38d,	// (0x0006df82) cell_video_dialer_keypad_pane_g1

0xada1,	// (0x0006d996) mup3_rocker2_pane_ParamLimits

0xada1,	// (0x0006d996) mup3_rocker2_pane

0x0d13,	// (0x00063908) mup3_rocker2_pane_g1

0xa180,	// (0x0006cd75) main_dialer2_pane

0x0256,	// (0x00062e4b) main_mp4_pane

0xb3e6,	// (0x0006dfdb) main_mp4_pane_g1_ParamLimits

0xb3e6,	// (0x0006dfdb) main_mp4_pane_g1

0xb3f4,	// (0x0006dfe9) main_mp4_pane_g2_ParamLimits

0xb3f4,	// (0x0006dfe9) main_mp4_pane_g2

0xb402,	// (0x0006dff7) main_mp4_pane_g3_ParamLimits

0xb402,	// (0x0006dff7) main_mp4_pane_g3

0xb455,	// (0x0006e04a) main_mp4_pane_g4_ParamLimits

0xb455,	// (0x0006e04a) main_mp4_pane_g4

0xb483,	// (0x0006e078) main_mp4_pane_g5_ParamLimits

0xb483,	// (0x0006e078) main_mp4_pane_g5

0x0007,

0xf822,	// (0x00072417) main_mp4_pane_g_ParamLimits

0xf822,	// (0x00072417) main_mp4_pane_g

0xb4f7,	// (0x0006e0ec) main_mp4_pane_t1_ParamLimits

0xb4f7,	// (0x0006e0ec) main_mp4_pane_t1

0xb553,	// (0x0006e148) main_mp4_pane_t2_ParamLimits

0xb553,	// (0x0006e148) main_mp4_pane_t2

0xefa0,	// (0x00071b95) main_mp4_pane_t3_ParamLimits

0xefa0,	// (0x00071b95) main_mp4_pane_t3

0xb5a5,	// (0x0006e19a) main_mp4_pane_t4_ParamLimits

0xb5a5,	// (0x0006e19a) main_mp4_pane_t4

0x0003,

0xf833,	// (0x00072428) main_mp4_pane_t_ParamLimits

0xf833,	// (0x00072428) main_mp4_pane_t

0xb5e5,	// (0x0006e1da) mp4_progress_pane_ParamLimits

0xb5e5,	// (0x0006e1da) mp4_progress_pane

0xb62f,	// (0x0006e224) mp4_rocker_pane_ParamLimits

0xb62f,	// (0x0006e224) mp4_rocker_pane

0xefce,	// (0x00071bc3) mp4_progress_pane_t1

0xefe7,	// (0x00071bdc) mp4_progress_pane_t2

0x0001,

0xf83c,	// (0x00072431) mp4_progress_pane_t

0xf000,	// (0x00071bf5) mup_progress_pane_cp04

0x0d13,	// (0x00063908) mp4_rocker_pane_g1

0xb64f,	// (0x0006e244) aid_cell_size_keypad2_ParamLimits

0xb64f,	// (0x0006e244) aid_cell_size_keypad2

0xb65f,	// (0x0006e254) dialer2_ne_pane_ParamLimits

0xb65f,	// (0x0006e254) dialer2_ne_pane

0xb66b,	// (0x0006e260) grid_dialer2_keypad_pane_ParamLimits

0xb66b,	// (0x0006e260) grid_dialer2_keypad_pane

0xf013,	// (0x00071c08) bg_popup_call_pane_cp07_ParamLimits

0xf013,	// (0x00071c08) bg_popup_call_pane_cp07

0xb679,	// (0x0006e26e) dialer2_ne_pane_t1_ParamLimits

0xb679,	// (0x0006e26e) dialer2_ne_pane_t1

0xb69e,	// (0x0006e293) cell_dialer2_keypad_pane_ParamLimits

0xb69e,	// (0x0006e293) cell_dialer2_keypad_pane

0xf033,	// (0x00071c28) bg_button_pane_pane_cp04_ParamLimits

0xf033,	// (0x00071c28) bg_button_pane_pane_cp04

0xb6b5,	// (0x0006e2aa) cell_dialer2_keypad_pane_g1_ParamLimits

0xb6b5,	// (0x0006e2aa) cell_dialer2_keypad_pane_g1

0x80f2,	// (0x0006ace7) aid_placing_vt_set_content_ParamLimits

0x80f2,	// (0x0006ace7) aid_placing_vt_set_content

0x811a,	// (0x0006ad0f) aid_placing_vt_set_title_ParamLimits

0x811a,	// (0x0006ad0f) aid_placing_vt_set_title

0x0256,	// (0x00062e4b) main_image3_pane

0xb74f,	// (0x0006e344) area_side_right_pane_cp01_ParamLimits

0xb74f,	// (0x0006e344) area_side_right_pane_cp01

0x0a33,	// (0x00063628) main_image3_pane_g1_ParamLimits

0x0a33,	// (0x00063628) main_image3_pane_g1

0xb77e,	// (0x0006e373) main_image3_pane_g2_ParamLimits

0xb77e,	// (0x0006e373) main_image3_pane_g2

0xb797,	// (0x0006e38c) main_image3_pane_g3_ParamLimits

0xb797,	// (0x0006e38c) main_image3_pane_g3

0xb7b0,	// (0x0006e3a5) main_image3_pane_g4_ParamLimits

0xb7b0,	// (0x0006e3a5) main_image3_pane_g4

0x0003,

0xf84b,	// (0x00072440) main_image3_pane_g_ParamLimits

0xf84b,	// (0x00072440) main_image3_pane_g

0xb7c9,	// (0x0006e3be) main_image3_pane_t1_ParamLimits

0xb7c9,	// (0x0006e3be) main_image3_pane_t1

0xb7ee,	// (0x0006e3e3) main_image3_pane_t2_ParamLimits

0xb7ee,	// (0x0006e3e3) main_image3_pane_t2

0xb80d,	// (0x0006e402) main_image3_pane_t3_ParamLimits

0xb80d,	// (0x0006e402) main_image3_pane_t3

0x0003,

0xf854,	// (0x00072449) main_image3_pane_t_ParamLimits

0xf854,	// (0x00072449) main_image3_pane_t

0x0a09,	// (0x000635fe) grid_sctrl_middle_pane_cp01_ParamLimits

0x0a09,	// (0x000635fe) grid_sctrl_middle_pane_cp01

0xb86e,	// (0x0006e463) cell_sctrl_middle_pane_cp01_ParamLimits

0xb86e,	// (0x0006e463) cell_sctrl_middle_pane_cp01

0xb87f,	// (0x0006e474) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xb87f,	// (0x0006e474) cell_sctrl_middle_pane_cp01_g1

0x0256,	// (0x00062e4b) main_call4_pane

0xb88c,	// (0x0006e481) aid_size_button_call4_ParamLimits

0xb88c,	// (0x0006e481) aid_size_button_call4

0xb8c2,	// (0x0006e4b7) call4_windows_pane_ParamLimits

0xb8c2,	// (0x0006e4b7) call4_windows_pane

0xb8d7,	// (0x0006e4cc) grid_call4_button_pane_ParamLimits

0xb8d7,	// (0x0006e4cc) grid_call4_button_pane

0xb907,	// (0x0006e4fc) call4_windows_conf_pane

0xb920,	// (0x0006e515) popup_call4_audio_first_window_ParamLimits

0xb920,	// (0x0006e515) popup_call4_audio_first_window

0xb970,	// (0x0006e565) popup_call4_audio_second_window_ParamLimits

0xb970,	// (0x0006e565) popup_call4_audio_second_window

0xb989,	// (0x0006e57e) popup_call4_audio_wait_window_ParamLimits

0xb989,	// (0x0006e57e) popup_call4_audio_wait_window

0xb997,	// (0x0006e58c) cell_call4_button_pane_ParamLimits

0xb997,	// (0x0006e58c) cell_call4_button_pane

0xb9ba,	// (0x0006e5af) bg_button_pane_cp09_ParamLimits

0xb9ba,	// (0x0006e5af) bg_button_pane_cp09

0xb9c6,	// (0x0006e5bb) cell_call4_button_pane_g1_ParamLimits

0xb9c6,	// (0x0006e5bb) cell_call4_button_pane_g1

0xb9d3,	// (0x0006e5c8) cell_call4_button_pane_t1_ParamLimits

0xb9d3,	// (0x0006e5c8) cell_call4_button_pane_t1

0xf047,	// (0x00071c3c) popup_call4_audio_conf_window_ParamLimits

0xf047,	// (0x00071c3c) popup_call4_audio_conf_window

0xadd6,	// (0x0006d9cb) mup3_progress_pane_t1_ParamLimits

0xadf4,	// (0x0006d9e9) mup3_progress_pane_t2_ParamLimits

0x5525,	// (0x0006811a) mup3_progress_pane_t3_ParamLimits

0xf729,	// (0x0007231e) mup3_progress_pane_t_ParamLimits

0x5542,	// (0x00068137) mup_progress_pane_cp03_ParamLimits

0xb1fd,	// (0x0006ddf2) mup3_control_keys_pane_g4_copy1

0xb613,	// (0x0006e208) mp4_rocker2_pane_ParamLimits

0xb613,	// (0x0006e208) mp4_rocker2_pane

0xf061,	// (0x00071c56) mp4_rocker2_pane_g1

0xf069,	// (0x00071c5e) mp4_rocker2_pane_g2

0xba17,	// (0x0006e60c) mp4_rocker2_pane_g3

0xba1f,	// (0x0006e614) mp4_rocker2_pane_g4

0xba27,	// (0x0006e61c) mp4_rocker2_pane_g5

0x0004,

0xf85d,	// (0x00072452) mp4_rocker2_pane_g

0x0256,	// (0x00062e4b) main_camera4_pane

0x0256,	// (0x00062e4b) main_video4_pane

0xb328,	// (0x0006df1d) main_video_tele_dialer_pane_t1_ParamLimits

0xb328,	// (0x0006df1d) main_video_tele_dialer_pane_t1

0xb33a,	// (0x0006df2f) main_video_tele_dialer_pane_t2_ParamLimits

0xb33a,	// (0x0006df2f) main_video_tele_dialer_pane_t2

0x0001,

0xf813,	// (0x00072408) main_video_tele_dialer_pane_t_ParamLimits

0xf813,	// (0x00072408) main_video_tele_dialer_pane_t

0xba47,	// (0x0006e63c) cam4_autofocus_pane_ParamLimits

0xba47,	// (0x0006e63c) cam4_autofocus_pane

0xba5f,	// (0x0006e654) cam4_image_uncrop_pane_ParamLimits

0xba5f,	// (0x0006e654) cam4_image_uncrop_pane

0xba78,	// (0x0006e66d) cam4_indicators_pane_ParamLimits

0xba78,	// (0x0006e66d) cam4_indicators_pane

0xba94,	// (0x0006e689) main_camera4_pane_g1_ParamLimits

0xba94,	// (0x0006e689) main_camera4_pane_g1

0xbaa0,	// (0x0006e695) main_camera4_pane_g2_ParamLimits

0xbaa0,	// (0x0006e695) main_camera4_pane_g2

0xbaa0,	// (0x0006e695) main_camera4_pane_g3_ParamLimits

0xbaa0,	// (0x0006e695) main_camera4_pane_g3

0xbaac,	// (0x0006e6a1) main_camera4_pane_g4_ParamLimits

0xbaac,	// (0x0006e6a1) main_camera4_pane_g4

0xbab8,	// (0x0006e6ad) main_camera4_pane_g5_ParamLimits

0xbab8,	// (0x0006e6ad) main_camera4_pane_g5

0x0005,

0xf868,	// (0x0007245d) main_camera4_pane_g_ParamLimits

0xf868,	// (0x0007245d) main_camera4_pane_g

0xbad2,	// (0x0006e6c7) main_camera4_pane_t1_ParamLimits

0xbad2,	// (0x0006e6c7) main_camera4_pane_t1

0x0a17,	// (0x0006360c) bg_tb_trans_pane_cp06

0xbb24,	// (0x0006e719) cam4_indicators_pane_g1

0xbb35,	// (0x0006e72a) cam4_indicators_pane_g2

0x0002,

0xf883,	// (0x00072478) cam4_indicators_pane_g

0xbb4d,	// (0x0006e742) cam4_indicators_pane_t1

0xbb77,	// (0x0006e76c) main_video4_pane_g1_ParamLimits

0xbb77,	// (0x0006e76c) main_video4_pane_g1

0xbb83,	// (0x0006e778) main_video4_pane_g2_ParamLimits

0xbb83,	// (0x0006e778) main_video4_pane_g2

0xbb8f,	// (0x0006e784) main_video4_pane_g3_ParamLimits

0xbb8f,	// (0x0006e784) main_video4_pane_g3

0xbb9b,	// (0x0006e790) main_video4_pane_g4_ParamLimits

0xbb9b,	// (0x0006e790) main_video4_pane_g4

0x0004,

0xf88a,	// (0x0007247f) main_video4_pane_g_ParamLimits

0xf88a,	// (0x0007247f) main_video4_pane_g

0xbbbd,	// (0x0006e7b2) vid4_indicators_pane_ParamLimits

0xbbbd,	// (0x0006e7b2) vid4_indicators_pane

0xbbdc,	// (0x0006e7d1) video4_image_uncrop_cif_pane_ParamLimits

0xbbdc,	// (0x0006e7d1) video4_image_uncrop_cif_pane

0xbbeb,	// (0x0006e7e0) video4_image_uncrop_nhd_pane_ParamLimits

0xbbeb,	// (0x0006e7e0) video4_image_uncrop_nhd_pane

0xba5f,	// (0x0006e654) video4_image_uncrop_vga_pane_ParamLimits

0xba5f,	// (0x0006e654) video4_image_uncrop_vga_pane

0x09b0,	// (0x000635a5) bg_tb_trans_pane_cp07

0xbc04,	// (0x0006e7f9) vid4_indicators_pane_g1

0xbc1a,	// (0x0006e80f) vid4_indicators_pane_g2

0xbc2e,	// (0x0006e823) vid4_indicators_pane_g3

0x0004,

0xf895,	// (0x0007248a) vid4_indicators_pane_g

0xbc5f,	// (0x0006e854) vid4_indicators_pane_t1

0xbc76,	// (0x0006e86b) cam4_autofocus_pane_g1

0xbc7e,	// (0x0006e873) cam4_autofocus_pane_g2

0xbc86,	// (0x0006e87b) cam4_autofocus_pane_g3

0x0002,

0xf8a0,	// (0x00072495) cam4_autofocus_pane_g

0xbc8e,	// (0x0006e883) cam4_autofocus_pane_g3_copy1

0xb35a,	// (0x0006df4f) video_down_pane_cp_t1

0xb368,	// (0x0006df5d) video_down_pane_cp_t2

0x0001,

0xf818,	// (0x0007240d) video_down_pane_cp_t

0x0a09,	// (0x000635fe) popup_vitu2_window_ParamLimits

0x0a09,	// (0x000635fe) popup_vitu2_window

0xbc96,	// (0x0006e88b) aid_size_cell2_itu2_ParamLimits

0xbc96,	// (0x0006e88b) aid_size_cell2_itu2

0xbcb2,	// (0x0006e8a7) aid_size_cell_itu2_ParamLimits

0xbcb2,	// (0x0006e8a7) aid_size_cell_itu2

0xf013,	// (0x00071c08) bg_popup_window_pane_cp09_ParamLimits

0xf013,	// (0x00071c08) bg_popup_window_pane_cp09

0xbcec,	// (0x0006e8e1) field_vitu2_entry_pane_ParamLimits

0xbcec,	// (0x0006e8e1) field_vitu2_entry_pane

0xbd0a,	// (0x0006e8ff) grid_vitu2_function_pane_ParamLimits

0xbd0a,	// (0x0006e8ff) grid_vitu2_function_pane

0xbd4a,	// (0x0006e93f) grid_vitu2_itu_pane_ParamLimits

0xbd4a,	// (0x0006e93f) grid_vitu2_itu_pane

0xbdac,	// (0x0006e9a1) cell_vitu2_itu_pane_ParamLimits

0xbdac,	// (0x0006e9a1) cell_vitu2_itu_pane

0xbdc7,	// (0x0006e9bc) cell_vitu2_function_pane_ParamLimits

0xbdc7,	// (0x0006e9bc) cell_vitu2_function_pane

0x2189,	// (0x00064d7e) bg_popup_call_pane_cp08_ParamLimits

0x2189,	// (0x00064d7e) bg_popup_call_pane_cp08

0x21a0,	// (0x00064d95) field_vitu2_entry_pane_g1

0x21ac,	// (0x00064da1) field_vitu2_entry_pane_g2

0x0002,

0xf8a7,	// (0x0007249c) field_vitu2_entry_pane_g

0x6613,	// (0x00069208) field_vitu2_entry_pane_t1_ParamLimits

0x6613,	// (0x00069208) field_vitu2_entry_pane_t1

0x6642,	// (0x00069237) field_vitu2_entry_pane_t2_ParamLimits

0x6642,	// (0x00069237) field_vitu2_entry_pane_t2

0x0001,

0xf8ae,	// (0x000724a3) field_vitu2_entry_pane_t_ParamLimits

0xf8ae,	// (0x000724a3) field_vitu2_entry_pane_t

0xa4cb,	// (0x0006d0c0) bg_button_pane_cp010_ParamLimits

0xa4cb,	// (0x0006d0c0) bg_button_pane_cp010

0xbe0b,	// (0x0006ea00) cell_vitu2_itu_pane_g1

0xbe31,	// (0x0006ea26) cell_vitu2_itu_pane_t1_ParamLimits

0xbe31,	// (0x0006ea26) cell_vitu2_itu_pane_t1

0x665f,	// (0x00069254) cell_vitu2_itu_pane_t2_ParamLimits

0x665f,	// (0x00069254) cell_vitu2_itu_pane_t2

0x0002,

0xf8b8,	// (0x000724ad) cell_vitu2_itu_pane_t_ParamLimits

0xf8b8,	// (0x000724ad) cell_vitu2_itu_pane_t

0x09b0,	// (0x000635a5) bg_button_pane_cp011

0xbe7d,	// (0x0006ea72) cell_vitu2_function_pane_g1

0x0256,	// (0x00062e4b) main_myfav_hc_pane

0xb84f,	// (0x0006e444) popup_image3_note_pane_ParamLimits

0xb84f,	// (0x0006e444) popup_image3_note_pane

0xb85d,	// (0x0006e452) popup_image3_tool_bar_pane_ParamLimits

0xb85d,	// (0x0006e452) popup_image3_tool_bar_pane

0x66d5,	// (0x000692ca) cell_vitu2_itu_pane_t3_ParamLimits

0x66d5,	// (0x000692ca) cell_vitu2_itu_pane_t3

0x0256,	// (0x00062e4b) bg_popup_trans_pane

0x21dd,	// (0x00064dd2) grid_image3_tool_bar_pane

0x21e7,	// (0x00064ddc) bg_popup_trans_pane_g1

0x0f28,	// (0x00063b1d) bg_popup_trans_pane_g2

0x21ef,	// (0x00064de4) bg_popup_trans_pane_g3

0x21f7,	// (0x00064dec) bg_popup_trans_pane_g4

0x21ff,	// (0x00064df4) bg_popup_trans_pane_g5

0x2207,	// (0x00064dfc) bg_popup_trans_pane_g6

0x220f,	// (0x00064e04) bg_popup_trans_pane_g7

0x2217,	// (0x00064e0c) bg_popup_trans_pane_g8

0x0f08,	// (0x00063afd) bg_popup_trans_pane_g9

0x0008,

0xf8bf,	// (0x000724b4) bg_popup_trans_pane_g

0x221f,	// (0x00064e14) cell_image3_tool_bar_pane_ParamLimits

0x221f,	// (0x00064e14) cell_image3_tool_bar_pane

0x0d13,	// (0x00063908) cell_image3_tool_bar_pane_g1

0x0256,	// (0x00062e4b) bg_popup_trans_pane_cp1

0x2235,	// (0x00064e2a) popup_image3_note_pane_t1

0x2243,	// (0x00064e38) popup_image3_note_pane_t2

0x2251,	// (0x00064e46) popup_image3_note_pane_t3

0x0002,

0xf8d2,	// (0x000724c7) popup_image3_note_pane_t

0x2261,	// (0x00064e56) popup_image3_note_pane_t3_copy1

0xbe91,	// (0x0006ea86) bg_myfav_hc_instruction_pane_ParamLimits

0xbe91,	// (0x0006ea86) bg_myfav_hc_instruction_pane

0xbea9,	// (0x0006ea9e) cell_myfav_contact_pane_ParamLimits

0xbea9,	// (0x0006ea9e) cell_myfav_contact_pane

0xbec3,	// (0x0006eab8) cell_myfav_contact_pane_cp1_ParamLimits

0xbec3,	// (0x0006eab8) cell_myfav_contact_pane_cp1

0xbedb,	// (0x0006ead0) cell_myfav_contact_pane_cp2_ParamLimits

0xbedb,	// (0x0006ead0) cell_myfav_contact_pane_cp2

0xbef3,	// (0x0006eae8) cell_myfav_contact_pane_cp3_ParamLimits

0xbef3,	// (0x0006eae8) cell_myfav_contact_pane_cp3

0xbf0a,	// (0x0006eaff) cell_myfav_contact_pane_cp4_ParamLimits

0xbf0a,	// (0x0006eaff) cell_myfav_contact_pane_cp4

0xbf20,	// (0x0006eb15) cell_myfav_contact_pane_cp5_ParamLimits

0xbf20,	// (0x0006eb15) cell_myfav_contact_pane_cp5

0xbf34,	// (0x0006eb29) cell_myfav_contact_pane_cp6_ParamLimits

0xbf34,	// (0x0006eb29) cell_myfav_contact_pane_cp6

0xbf48,	// (0x0006eb3d) cell_myfav_contact_pane_cp7_ParamLimits

0xbf48,	// (0x0006eb3d) cell_myfav_contact_pane_cp7

0x226f,	// (0x00064e64) listscroll_gen_pane_cp05

0xbf60,	// (0x0006eb55) main_myfav_hc_pane_g1_ParamLimits

0xbf60,	// (0x0006eb55) main_myfav_hc_pane_g1

0xbf7a,	// (0x0006eb6f) main_myfav_hc_pane_g2_ParamLimits

0xbf7a,	// (0x0006eb6f) main_myfav_hc_pane_g2

0x0002,

0xf8d9,	// (0x000724ce) main_myfav_hc_pane_g_ParamLimits

0xf8d9,	// (0x000724ce) main_myfav_hc_pane_g

0xbfac,	// (0x0006eba1) main_myfav_hc_pane_t1_ParamLimits

0xbfac,	// (0x0006eba1) main_myfav_hc_pane_t1

0x2278,	// (0x00064e6d) main_myfav_hc_pane_t2_ParamLimits

0x2278,	// (0x00064e6d) main_myfav_hc_pane_t2

0x228a,	// (0x00064e7f) main_myfav_hc_pane_t3_ParamLimits

0x228a,	// (0x00064e7f) main_myfav_hc_pane_t3

0xbfc3,	// (0x0006ebb8) main_myfav_hc_pane_t4_ParamLimits

0xbfc3,	// (0x0006ebb8) main_myfav_hc_pane_t4

0x0004,

0xf8e0,	// (0x000724d5) main_myfav_hc_pane_t_ParamLimits

0xf8e0,	// (0x000724d5) main_myfav_hc_pane_t

0x0d13,	// (0x00063908) bg_myfav_hc_instruction_pane_g1

0x229c,	// (0x00064e91) cell_myfav_contact_pane_g1_ParamLimits

0x229c,	// (0x00064e91) cell_myfav_contact_pane_g1

0x229c,	// (0x00064e91) cell_myfav_contact_pane_g2_ParamLimits

0x229c,	// (0x00064e91) cell_myfav_contact_pane_g2

0x22a8,	// (0x00064e9d) cell_myfav_contact_pane_g3_ParamLimits

0x22a8,	// (0x00064e9d) cell_myfav_contact_pane_g3

0x0a25,	// (0x0006361a) cell_myfav_contact_pane_g4_ParamLimits

0x0a25,	// (0x0006361a) cell_myfav_contact_pane_g4

0x22b5,	// (0x00064eaa) cell_myfav_contact_pane_g5_ParamLimits

0x22b5,	// (0x00064eaa) cell_myfav_contact_pane_g5

0x0004,

0xf8eb,	// (0x000724e0) cell_myfav_contact_pane_g_ParamLimits

0xf8eb,	// (0x000724e0) cell_myfav_contact_pane_g

0xbf94,	// (0x0006eb89) main_myfav_hc_pane_g3_ParamLimits

0xbf94,	// (0x0006eb89) main_myfav_hc_pane_g3

0x7372,	// (0x00069f67) popup_adpt_find_window

0xbfed,	// (0x0006ebe2) afind_page_pane_ParamLimits

0xbfed,	// (0x0006ebe2) afind_page_pane

0xbffa,	// (0x0006ebef) aid_size_cell_afind_ParamLimits

0xbffa,	// (0x0006ebef) aid_size_cell_afind

0xc014,	// (0x0006ec09) bg_popup_sub_pane_cp09_ParamLimits

0xc014,	// (0x0006ec09) bg_popup_sub_pane_cp09

0xc021,	// (0x0006ec16) find_pane_cp01_ParamLimits

0xc021,	// (0x0006ec16) find_pane_cp01

0x22c1,	// (0x00064eb6) grid_afind_control_pane_ParamLimits

0x22c1,	// (0x00064eb6) grid_afind_control_pane

0xc02e,	// (0x0006ec23) grid_afind_pane_ParamLimits

0xc02e,	// (0x0006ec23) grid_afind_pane

0xc04a,	// (0x0006ec3f) cell_afind_pane_ParamLimits

0xc04a,	// (0x0006ec3f) cell_afind_pane

0x0d13,	// (0x00063908) afind_page_pane_g1

0xc096,	// (0x0006ec8b) afind_page_pane_g2

0xc09f,	// (0x0006ec94) afind_page_pane_g3

0x0002,

0xf8f6,	// (0x000724eb) afind_page_pane_g

0xc0a8,	// (0x0006ec9d) afind_page_pane_t1

0x22d5,	// (0x00064eca) cell_afind_grid_control_pane_ParamLimits

0x22d5,	// (0x00064eca) cell_afind_grid_control_pane

0xf033,	// (0x00071c28) bg_button_pane_cp69_ParamLimits

0xf033,	// (0x00071c28) bg_button_pane_cp69

0xc0c8,	// (0x0006ecbd) cell_afind_pane_g1_ParamLimits

0xc0c8,	// (0x0006ecbd) cell_afind_pane_g1

0xc0d5,	// (0x0006ecca) cell_afind_pane_t1_ParamLimits

0xc0d5,	// (0x0006ecca) cell_afind_pane_t1

0x0d1d,	// (0x00063912) bg_button_pane_cp72

0x22e4,	// (0x00064ed9) cell_afind_grid_control_pane_g1

0x9cb4,	// (0x0006c8a9) aid_image_placing_area_ParamLimits

0x9cb4,	// (0x0006c8a9) aid_image_placing_area

0x0a17,	// (0x0006360c) field_vitu_entry_pane_g1_ParamLimits

0x0a17,	// (0x0006360c) field_vitu_entry_pane_g1

0x0a17,	// (0x0006360c) field_vitu_entry_pane_g2_ParamLimits

0x0a17,	// (0x0006360c) field_vitu_entry_pane_g2

0x0001,

0xf201,	// (0x00071df6) field_vitu_entry_pane_g_ParamLimits

0xf201,	// (0x00071df6) field_vitu_entry_pane_g

0xedb5,	// (0x000719aa) cell_vitu_itu_pane_g1_ParamLimits

0xed16,	// (0x0007190b) cell_vitu_itu_pane_t3_ParamLimits

0xed16,	// (0x0007190b) cell_vitu_itu_pane_t3

0xefce,	// (0x00071bc3) mp4_progress_pane_t1_ParamLimits

0xefe7,	// (0x00071bdc) mp4_progress_pane_t2_ParamLimits

0xf83c,	// (0x00072431) mp4_progress_pane_t_ParamLimits

0xf000,	// (0x00071bf5) mup_progress_pane_cp04_ParamLimits

0xbfd7,	// (0x0006ebcc) main_myfav_hc_pane_t5_ParamLimits

0xbfd7,	// (0x0006ebcc) main_myfav_hc_pane_t5

0x64e7,	// (0x000690dc) aid_zoom_text_primary

0x7372,	// (0x00069f67) popup_adpt_find_window_ParamLimits

0x09b0,	// (0x000635a5) main_cam_set_pane

0xba86,	// (0x0006e67b) cam4_zoom_pane_ParamLimits

0xba86,	// (0x0006e67b) cam4_zoom_pane

0xc0e7,	// (0x0006ecdc) main_cam_set_pane_g1_ParamLimits

0xc0e7,	// (0x0006ecdc) main_cam_set_pane_g1

0xc0f5,	// (0x0006ecea) main_cam_set_pane_g2_ParamLimits

0xc0f5,	// (0x0006ecea) main_cam_set_pane_g2

0x0001,

0xf8fd,	// (0x000724f2) main_cam_set_pane_g_ParamLimits

0xf8fd,	// (0x000724f2) main_cam_set_pane_g

0xc101,	// (0x0006ecf6) main_cam_set_pane_t1_ParamLimits

0xc101,	// (0x0006ecf6) main_cam_set_pane_t1

0xc11d,	// (0x0006ed12) main_cset_listscroll_pane_ParamLimits

0xc11d,	// (0x0006ed12) main_cset_listscroll_pane

0xc151,	// (0x0006ed46) main_cset_slider_pane_ParamLimits

0xc151,	// (0x0006ed46) main_cset_slider_pane

0x22f5,	// (0x00064eea) main_cset_list_pane_ParamLimits

0x22f5,	// (0x00064eea) main_cset_list_pane

0x2305,	// (0x00064efa) scroll_pane_cp028

0xc172,	// (0x0006ed67) aid_area_touch_slider

0xc18e,	// (0x0006ed83) cset_slider_pane

0xc1b1,	// (0x0006eda6) main_cset_slider_pane_g1

0xc1c6,	// (0x0006edbb) main_cset_slider_pane_g2

0x0011,

0xf902,	// (0x000724f7) main_cset_slider_pane_g

0x233e,	// (0x00064f33) main_cset_slider_pane_t1

0xc282,	// (0x0006ee77) main_cset_slider_pane_t2

0xc29c,	// (0x0006ee91) main_cset_slider_pane_t3

0xc2b6,	// (0x0006eeab) main_cset_slider_pane_t4

0xc2d0,	// (0x0006eec5) main_cset_slider_pane_t5

0xc2ea,	// (0x0006eedf) main_cset_slider_pane_t6

0xc2ff,	// (0x0006eef4) main_cset_slider_pane_t7

0x000e,

0xf927,	// (0x0007251c) main_cset_slider_pane_t

0xc403,	// (0x0006eff8) cset_list_set_pane_ParamLimits

0xc403,	// (0x0006eff8) cset_list_set_pane

0x23d8,	// (0x00064fcd) aid_position_infowindow_above

0x23e0,	// (0x00064fd5) aid_position_infowindow_below

0xc414,	// (0x0006f009) cset_list_set_pane_g1_ParamLimits

0xc414,	// (0x0006f009) cset_list_set_pane_g1

0x6727,	// (0x0006931c) cset_list_set_pane_g3_ParamLimits

0x6727,	// (0x0006931c) cset_list_set_pane_g3

0x0001,

0xf946,	// (0x0007253b) cset_list_set_pane_g_ParamLimits

0xf946,	// (0x0007253b) cset_list_set_pane_g

0x6736,	// (0x0006932b) cset_list_set_pane_t1_ParamLimits

0x6736,	// (0x0006932b) cset_list_set_pane_t1

0x09b0,	// (0x000635a5) list_highlight_pane_cp021_ParamLimits

0x09b0,	// (0x000635a5) list_highlight_pane_cp021

0x1822,	// (0x00064417) cset_slider_pane_g1

0x1834,	// (0x00064429) cset_slider_pane_g2

0x182b,	// (0x00064420) cset_slider_pane_g3

0x0002,

0xf94b,	// (0x00072540) cset_slider_pane_g

0x31b5,	// (0x00065daa) aid_area_touch_cam4_zoom

0xc420,	// (0x0006f015) cam4_zoom_cont_pane

0xc428,	// (0x0006f01d) cam4_zoom_pane_g1

0xc430,	// (0x0006f025) cam4_zoom_pane_g2

0xc438,	// (0x0006f02d) cam4_zoom_pane_g3

0x0002,

0xf952,	// (0x00072547) cam4_zoom_pane_g

0xc440,	// (0x0006f035) cam4_zoom_cont_pane_g1

0xc449,	// (0x0006f03e) cam4_zoom_cont_pane_g2

0xc452,	// (0x0006f047) cam4_zoom_cont_pane_g3

0x0002,

0xf959,	// (0x0007254e) cam4_zoom_cont_pane_g

0xb8a6,	// (0x0006e49b) call4_image_pane_ParamLimits

0xb8a6,	// (0x0006e49b) call4_image_pane

0xb907,	// (0x0006e4fc) call4_windows_conf_pane_ParamLimits

0xb94e,	// (0x0006e543) popup_call4_audio_in_window_ParamLimits

0xb94e,	// (0x0006e543) popup_call4_audio_in_window

0x0256,	// (0x00062e4b) bg_popup_call2_act_pane_cp02

0xf03f,	// (0x00071c34) call4_list_conf_pane

0x0d13,	// (0x00063908) call4_image_pane_g1

0x0d13,	// (0x00063908) call4_image_pane_g2

0x0001,

0xf3dd,	// (0x00071fd2) call4_image_pane_g

0x23e8,	// (0x00064fdd) list_single_graphic_popup_conf4_pane_ParamLimits

0x23e8,	// (0x00064fdd) list_single_graphic_popup_conf4_pane

0x0256,	// (0x00062e4b) list_highlight_pane_cp022

0x23fd,	// (0x00064ff2) list_single_graphic_popup_conf4_pane_g1

0x14e3,	// (0x000640d8) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf960,	// (0x00072555) list_single_graphic_popup_conf4_pane_g

0x2405,	// (0x00064ffa) list_single_graphic_popup_conf4_pane_t1

0x8274,	// (0x0006ae69) popup_vtel_slider_window_ParamLimits

0x8274,	// (0x0006ae69) popup_vtel_slider_window

0xf021,	// (0x00071c16) dialer2_ne_pane_t2_ParamLimits

0xf021,	// (0x00071c16) dialer2_ne_pane_t2

0x0001,

0xf841,	// (0x00072436) dialer2_ne_pane_t_ParamLimits

0xf841,	// (0x00072436) dialer2_ne_pane_t

0x09b0,	// (0x000635a5) bg_popup_sub_pane_cp010_ParamLimits

0x09b0,	// (0x000635a5) bg_popup_sub_pane_cp010

0xc45b,	// (0x0006f050) popup_vtel_slider_window_g1_ParamLimits

0xc45b,	// (0x0006f050) popup_vtel_slider_window_g1

0xc467,	// (0x0006f05c) popup_vtel_slider_window_g2_ParamLimits

0xc467,	// (0x0006f05c) popup_vtel_slider_window_g2

0x0003,

0xf965,	// (0x0007255a) popup_vtel_slider_window_g_ParamLimits

0xf965,	// (0x0007255a) popup_vtel_slider_window_g

0xc4af,	// (0x0006f0a4) vtel_slider_pane_ParamLimits

0xc4af,	// (0x0006f0a4) vtel_slider_pane

0xc4be,	// (0x0006f0b3) vtel_slider_pane_g1_ParamLimits

0xc4be,	// (0x0006f0b3) vtel_slider_pane_g1

0xc4cb,	// (0x0006f0c0) vtel_slider_pane_g2_ParamLimits

0xc4cb,	// (0x0006f0c0) vtel_slider_pane_g2

0xc4d8,	// (0x0006f0cd) vtel_slider_pane_g3_ParamLimits

0xc4d8,	// (0x0006f0cd) vtel_slider_pane_g3

0xc4be,	// (0x0006f0b3) vtel_slider_pane_g4_ParamLimits

0xc4be,	// (0x0006f0b3) vtel_slider_pane_g4

0xc4e5,	// (0x0006f0da) vtel_slider_pane_g5_ParamLimits

0xc4e5,	// (0x0006f0da) vtel_slider_pane_g5

0x0004,

0xf96e,	// (0x00072563) vtel_slider_pane_g_ParamLimits

0xf96e,	// (0x00072563) vtel_slider_pane_g

0x09b0,	// (0x000635a5) main_gallery2_pane

0xbcce,	// (0x0006e8c3) aid_size_row_itut2_dropdow_list_ParamLimits

0xbcce,	// (0x0006e8c3) aid_size_row_itut2_dropdow_list

0xbd2a,	// (0x0006e91f) grid_vitu2_function_top_pane_ParamLimits

0xbd2a,	// (0x0006e91f) grid_vitu2_function_top_pane

0xbd7a,	// (0x0006e96f) popup_vitu2_dropdown_list_window_ParamLimits

0xbd7a,	// (0x0006e96f) popup_vitu2_dropdown_list_window

0xbd98,	// (0x0006e98d) popup_vitu2_match_list_window

0xc4f2,	// (0x0006f0e7) cell_vitu2_function_top_pane_ParamLimits

0xc4f2,	// (0x0006f0e7) cell_vitu2_function_top_pane

0xc50c,	// (0x0006f101) cell_vitu2_function_top_pane_cp01_ParamLimits

0xc50c,	// (0x0006f101) cell_vitu2_function_top_pane_cp01

0xc528,	// (0x0006f11d) cell_vitu2_function_top_wide_pane_ParamLimits

0xc528,	// (0x0006f11d) cell_vitu2_function_top_wide_pane

0x09b0,	// (0x000635a5) bg_button_pane_cp012

0xc546,	// (0x0006f13b) cell_vitu2_function_top_pane_g1

0xc55a,	// (0x0006f14f) bg_button_pane_cp013_ParamLimits

0xc55a,	// (0x0006f14f) bg_button_pane_cp013

0xc576,	// (0x0006f16b) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xc576,	// (0x0006f16b) cell_vitu2_function_top_wide_pane_g1

0x0a09,	// (0x000635fe) bg_popup_sub_pane_cp20

0xc58e,	// (0x0006f183) list_vitu2_match_list_pane

0x21e7,	// (0x00064ddc) bg_popup_sub_pane_cp20_g1

0x21ef,	// (0x00064de4) bg_popup_sub_pane_cp20_g2

0x0f28,	// (0x00063b1d) bg_popup_sub_pane_cp20_g3

0x21f7,	// (0x00064dec) bg_popup_sub_pane_cp20_g4

0x0f08,	// (0x00063afd) bg_popup_sub_pane_cp20_g5

0x241b,	// (0x00065010) bg_popup_sub_pane_cp20_g6

0x2207,	// (0x00064dfc) bg_popup_sub_pane_cp20_g7

0x220f,	// (0x00064e04) bg_popup_sub_pane_cp20_g8

0x2217,	// (0x00064e0c) bg_popup_sub_pane_cp20_g9

0x0008,

0xf979,	// (0x0007256e) bg_popup_sub_pane_cp20_g

0xc5a6,	// (0x0006f19b) list_vitu2_match_list_item_pane_ParamLimits

0xc5a6,	// (0x0006f19b) list_vitu2_match_list_item_pane

0xc5b8,	// (0x0006f1ad) list_vitu2_match_list_item_pane_t1

0x0256,	// (0x00062e4b) bg_popup_sub_pane_cp21

0x0cbe,	// (0x000638b3) grid_vitu2_dropdown_list_pane

0xc5c6,	// (0x0006f1bb) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xc5c6,	// (0x0006f1bb) cell_vitu2_dropdown_list_char_pane

0xc5eb,	// (0x0006f1e0) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xc5eb,	// (0x0006f1e0) cell_vitu2_dropdown_list_ctrl_pane

0x2435,	// (0x0006502a) cell_vitu2_dropdown_list_char_pane_g1

0x242c,	// (0x00065021) cell_vitu2_dropdown_list_char_pane_g2

0x2423,	// (0x00065018) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf98c,	// (0x00072581) cell_vitu2_dropdown_list_char_pane_g

0xc617,	// (0x0006f20c) cell_vitu2_dropdown_list_char_pane_t1

0xc625,	// (0x0006f21a) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xc625,	// (0x0006f21a) cell_vitu2_dropdown_list_ctrl_pane_g1

0xc635,	// (0x0006f22a) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xc635,	// (0x0006f22a) cell_vitu2_dropdown_list_ctrl_pane_g2

0xc646,	// (0x0006f23b) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xc646,	// (0x0006f23b) cell_vitu2_dropdown_list_ctrl_pane_g3

0xc656,	// (0x0006f24b) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xc656,	// (0x0006f24b) cell_vitu2_dropdown_list_ctrl_pane_g4

0x0a17,	// (0x0006360c) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x0a17,	// (0x0006360c) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf993,	// (0x00072588) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf993,	// (0x00072588) cell_vitu2_dropdown_list_ctrl_pane_g

0xc66f,	// (0x0006f264) aid_size_cell_gallery2_ParamLimits

0xc66f,	// (0x0006f264) aid_size_cell_gallery2

0xc689,	// (0x0006f27e) grid_gallery2_pane_ParamLimits

0xc689,	// (0x0006f27e) grid_gallery2_pane

0xc6a0,	// (0x0006f295) scroll_pane_cp029_ParamLimits

0xc6a0,	// (0x0006f295) scroll_pane_cp029

0xc6b0,	// (0x0006f2a5) cell_gallery2_pane_ParamLimits

0xc6b0,	// (0x0006f2a5) cell_gallery2_pane

0x243e,	// (0x00065033) cell_gallery2_pane_g2

0xc707,	// (0x0006f2fc) cell_gallery2_pane_g3

0x2446,	// (0x0006503b) cell_gallery2_pane_g4

0x244e,	// (0x00065043) cell_gallery2_pane_g5

0x0cbe,	// (0x000638b3) grid_highlight_pane_cp10

0xbd98,	// (0x0006e98d) popup_vitu2_match_list_window_ParamLimits

0xbcdc,	// (0x0006e8d1) popup_vitu2_query_window_ParamLimits

0xbcdc,	// (0x0006e8d1) popup_vitu2_query_window

0x0256,	// (0x00062e4b) bg_vitu2_candi_button_pane

0x2435,	// (0x0006502a) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x242c,	// (0x00065021) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x2423,	// (0x00065018) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x674b,	// (0x00069340) bg_button_pane_cp015

0xc70f,	// (0x0006f304) bg_button_pane_cp016

0xc722,	// (0x0006f317) bg_button_pane_cp017

0x17b0,	// (0x000643a5) bg_popup_sub_pane_cp22

0x2456,	// (0x0006504b) popup_vitu2_query_window_g1

0x677e,	// (0x00069373) popup_vitu2_query_window_g2

0x0002,

0xf99e,	// (0x00072593) popup_vitu2_query_window_g

0x679b,	// (0x00069390) popup_vitu2_query_window_t1_ParamLimits

0x679b,	// (0x00069390) popup_vitu2_query_window_t1

0x67ce,	// (0x000693c3) popup_vitu2_query_window_t2_ParamLimits

0x67ce,	// (0x000693c3) popup_vitu2_query_window_t2

0x67e0,	// (0x000693d5) popup_vitu2_query_window_t3_ParamLimits

0x67e0,	// (0x000693d5) popup_vitu2_query_window_t3

0xc746,	// (0x0006f33b) popup_vitu2_query_window_t4_ParamLimits

0xc746,	// (0x0006f33b) popup_vitu2_query_window_t4

0xc769,	// (0x0006f35e) popup_vitu2_query_window_t5_ParamLimits

0xc769,	// (0x0006f35e) popup_vitu2_query_window_t5

0x0006,

0xf9a5,	// (0x0007259a) popup_vitu2_query_window_t_ParamLimits

0xf9a5,	// (0x0007259a) popup_vitu2_query_window_t

0x22ed,	// (0x00064ee2) main_cset_text_pane

0xc172,	// (0x0006ed67) aid_area_touch_slider_ParamLimits

0xc18e,	// (0x0006ed83) cset_slider_pane_ParamLimits

0xc1b1,	// (0x0006eda6) main_cset_slider_pane_g1_ParamLimits

0xc1c6,	// (0x0006edbb) main_cset_slider_pane_g2_ParamLimits

0x230e,	// (0x00064f03) main_cset_slider_pane_g3_ParamLimits

0x230e,	// (0x00064f03) main_cset_slider_pane_g3

0xc1db,	// (0x0006edd0) main_cset_slider_pane_g4_ParamLimits

0xc1db,	// (0x0006edd0) main_cset_slider_pane_g4

0xc1ea,	// (0x0006eddf) main_cset_slider_pane_g5_ParamLimits

0xc1ea,	// (0x0006eddf) main_cset_slider_pane_g5

0xc1f6,	// (0x0006edeb) main_cset_slider_pane_g6_ParamLimits

0xc1f6,	// (0x0006edeb) main_cset_slider_pane_g6

0xf902,	// (0x000724f7) main_cset_slider_pane_g_ParamLimits

0x233e,	// (0x00064f33) main_cset_slider_pane_t1_ParamLimits

0xc282,	// (0x0006ee77) main_cset_slider_pane_t2_ParamLimits

0xc29c,	// (0x0006ee91) main_cset_slider_pane_t3_ParamLimits

0xc2b6,	// (0x0006eeab) main_cset_slider_pane_t4_ParamLimits

0xc2d0,	// (0x0006eec5) main_cset_slider_pane_t5_ParamLimits

0xc2ea,	// (0x0006eedf) main_cset_slider_pane_t6_ParamLimits

0xc2ff,	// (0x0006eef4) main_cset_slider_pane_t7_ParamLimits

0xc329,	// (0x0006ef1e) main_cset_slider_pane_t8_ParamLimits

0xc329,	// (0x0006ef1e) main_cset_slider_pane_t8

0xc351,	// (0x0006ef46) main_cset_slider_pane_t9_ParamLimits

0xc351,	// (0x0006ef46) main_cset_slider_pane_t9

0xc379,	// (0x0006ef6e) main_cset_slider_pane_t10_ParamLimits

0xc379,	// (0x0006ef6e) main_cset_slider_pane_t10

0xc3a1,	// (0x0006ef96) main_cset_slider_pane_t11_ParamLimits

0xc3a1,	// (0x0006ef96) main_cset_slider_pane_t11

0xc3c9,	// (0x0006efbe) main_cset_slider_pane_t12_ParamLimits

0xc3c9,	// (0x0006efbe) main_cset_slider_pane_t12

0xc3e6,	// (0x0006efdb) main_cset_slider_pane_t13_ParamLimits

0xc3e6,	// (0x0006efdb) main_cset_slider_pane_t13

0xf927,	// (0x0007251c) main_cset_slider_pane_t_ParamLimits

0x0256,	// (0x00062e4b) bg_popup_sub_pane_cp011

0x2462,	// (0x00065057) main_cset_text_pane_g1

0x246a,	// (0x0006505f) main_cset_text_pane_t1

0x2478,	// (0x0006506d) main_cset_text_pane_t2

0x2486,	// (0x0006507b) main_cset_text_pane_t3

0x2494,	// (0x00065089) main_cset_text_pane_t4

0x24a2,	// (0x00065097) main_cset_text_pane_t5

0x24b0,	// (0x000650a5) main_cset_text_pane_t6

0x24be,	// (0x000650b3) main_cset_text_pane_t7

0x0006,

0xf9b4,	// (0x000725a9) main_cset_text_pane_t

0x0256,	// (0x00062e4b) main_cam4_burst_pane

0x0256,	// (0x00062e4b) main_cam5_pane

0xc0b6,	// (0x0006ecab) bg_button_pane_cp019

0xc0bf,	// (0x0006ecb4) bg_button_pane_cp020

0x231a,	// (0x00064f0f) main_cset_slider_pane_g7_ParamLimits

0x231a,	// (0x00064f0f) main_cset_slider_pane_g7

0x2326,	// (0x00064f1b) main_cset_slider_pane_g8_ParamLimits

0x2326,	// (0x00064f1b) main_cset_slider_pane_g8

0xc20a,	// (0x0006edff) main_cset_slider_pane_g9_ParamLimits

0xc20a,	// (0x0006edff) main_cset_slider_pane_g9

0xc216,	// (0x0006ee0b) main_cset_slider_pane_g10_ParamLimits

0xc216,	// (0x0006ee0b) main_cset_slider_pane_g10

0xc222,	// (0x0006ee17) main_cset_slider_pane_g11_ParamLimits

0xc222,	// (0x0006ee17) main_cset_slider_pane_g11

0xc22e,	// (0x0006ee23) main_cset_slider_pane_g12_ParamLimits

0xc22e,	// (0x0006ee23) main_cset_slider_pane_g12

0xc23a,	// (0x0006ee2f) main_cset_slider_pane_g13_ParamLimits

0xc23a,	// (0x0006ee2f) main_cset_slider_pane_g13

0xc246,	// (0x0006ee3b) main_cset_slider_pane_g14_ParamLimits

0xc246,	// (0x0006ee3b) main_cset_slider_pane_g14

0xc252,	// (0x0006ee47) main_cset_slider_pane_g15_ParamLimits

0xc252,	// (0x0006ee47) main_cset_slider_pane_g15

0x2366,	// (0x00064f5b) main_cset_slider_pane_t14_ParamLimits

0x2366,	// (0x00064f5b) main_cset_slider_pane_t14

0x239f,	// (0x00064f94) main_cset_slider_pane_t15_ParamLimits

0x239f,	// (0x00064f94) main_cset_slider_pane_t15

0xc78c,	// (0x0006f381) aid_cam4_burst_size_cell_ParamLimits

0xc78c,	// (0x0006f381) aid_cam4_burst_size_cell

0xc7a8,	// (0x0006f39d) grid_cam4_burst_pane_ParamLimits

0xc7a8,	// (0x0006f39d) grid_cam4_burst_pane

0xc7da,	// (0x0006f3cf) linegrid_cam4_burst_pane_ParamLimits

0xc7da,	// (0x0006f3cf) linegrid_cam4_burst_pane

0xc7f8,	// (0x0006f3ed) scroll_pane_cp30_ParamLimits

0xc7f8,	// (0x0006f3ed) scroll_pane_cp30

0xc804,	// (0x0006f3f9) cell_cam4_burst_pane_ParamLimits

0xc804,	// (0x0006f3f9) cell_cam4_burst_pane

0x24d8,	// (0x000650cd) linegrid_cam4_burst_pane_g1_ParamLimits

0x24d8,	// (0x000650cd) linegrid_cam4_burst_pane_g1

0xc844,	// (0x0006f439) linegrid_cam4_burst_pane_g2_ParamLimits

0xc844,	// (0x0006f439) linegrid_cam4_burst_pane_g2

0x24e5,	// (0x000650da) linegrid_cam4_burst_pane_g3_ParamLimits

0x24e5,	// (0x000650da) linegrid_cam4_burst_pane_g3

0x0002,

0xf9c3,	// (0x000725b8) linegrid_cam4_burst_pane_g_ParamLimits

0xf9c3,	// (0x000725b8) linegrid_cam4_burst_pane_g

0xc855,	// (0x0006f44a) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xc855,	// (0x0006f44a) linegrid_cam4_burst_pane_g3_copy1

0x24f2,	// (0x000650e7) linegrid_cam4_burst_pane_g4_ParamLimits

0x24f2,	// (0x000650e7) linegrid_cam4_burst_pane_g4

0xc86f,	// (0x0006f464) linegrid_cam4_burst_pane_g5_ParamLimits

0xc86f,	// (0x0006f464) linegrid_cam4_burst_pane_g5

0xc880,	// (0x0006f475) linegrid_cam4_burst_pane_g6_ParamLimits

0xc880,	// (0x0006f475) linegrid_cam4_burst_pane_g6

0x24ff,	// (0x000650f4) linegrid_cam4_burst_pane_g7_ParamLimits

0x24ff,	// (0x000650f4) linegrid_cam4_burst_pane_g7

0xc897,	// (0x0006f48c) cell_cam4_burst_pane_g1

0x2518,	// (0x0006510d) main_cam5_pane_t1_ParamLimits

0x2518,	// (0x0006510d) main_cam5_pane_t1

0x252a,	// (0x0006511f) main_cam5_pane_t2_ParamLimits

0x252a,	// (0x0006511f) main_cam5_pane_t2

0x253c,	// (0x00065131) main_cam5_pane_t3_ParamLimits

0x253c,	// (0x00065131) main_cam5_pane_t3

0x254e,	// (0x00065143) main_cam5_pane_t4_ParamLimits

0x254e,	// (0x00065143) main_cam5_pane_t4

0x2566,	// (0x0006515b) main_cam5_pane_t5_ParamLimits

0x2566,	// (0x0006515b) main_cam5_pane_t5

0x257a,	// (0x0006516f) main_cam5_pane_t6_ParamLimits

0x257a,	// (0x0006516f) main_cam5_pane_t6

0x258e,	// (0x00065183) main_cam5_pane_t7_ParamLimits

0x258e,	// (0x00065183) main_cam5_pane_t7

0x25a0,	// (0x00065195) main_cam5_pane_t8_ParamLimits

0x25a0,	// (0x00065195) main_cam5_pane_t8

0x25be,	// (0x000651b3) main_cam5_pane_t9_ParamLimits

0x25be,	// (0x000651b3) main_cam5_pane_t9

0x25d0,	// (0x000651c5) main_cam5_pane_t10_ParamLimits

0x25d0,	// (0x000651c5) main_cam5_pane_t10

0x25e2,	// (0x000651d7) main_cam5_pane_t11_ParamLimits

0x25e2,	// (0x000651d7) main_cam5_pane_t11

0x25f6,	// (0x000651eb) main_cam5_pane_t12_ParamLimits

0x25f6,	// (0x000651eb) main_cam5_pane_t12

0x260d,	// (0x00065202) main_cam5_pane_t13_ParamLimits

0x260d,	// (0x00065202) main_cam5_pane_t13

0x000c,

0xf9cf,	// (0x000725c4) main_cam5_pane_t_ParamLimits

0xf9cf,	// (0x000725c4) main_cam5_pane_t

0x7429,	// (0x0006a01e) popup_scut_keymap_window_ParamLimits

0x7429,	// (0x0006a01e) popup_scut_keymap_window

0xc8aa,	// (0x0006f49f) aid_size_cell_brow_shortcut

0x0cbe,	// (0x000638b3) bg_popup_window_pane_cp010

0xc8b6,	// (0x0006f4ab) grid_scut_pane

0xc8c2,	// (0x0006f4b7) cell_scut_pane_ParamLimits

0xc8c2,	// (0x0006f4b7) cell_scut_pane

0xc8dd,	// (0x0006f4d2) cell_scut_pane_g1

0x2630,	// (0x00065225) cell_scut_pane_t1

0x263f,	// (0x00065234) cell_scut_pane_t2

0xc8e6,	// (0x0006f4db) cell_scut_pane_t3

0x0002,

0xf9ea,	// (0x000725df) cell_scut_pane_t

0xa9e5,	// (0x0006d5da) main_mup3_pane_g8_ParamLimits

0xa9e5,	// (0x0006d5da) main_mup3_pane_g8

0xbcdc,	// (0x0006e8d1) area_vitu2_query_pane_ParamLimits

0xbcdc,	// (0x0006e8d1) area_vitu2_query_pane

0x675d,	// (0x00069352) input_focus_pane_cp08

0x264e,	// (0x00065243) area_vitu2_query_pane_g1

0x685e,	// (0x00069453) area_vitu2_query_pane_g2

0x0001,

0xf9f1,	// (0x000725e6) area_vitu2_query_pane_g

0xc8f4,	// (0x0006f4e9) area_vitu2_query_pane_t1_ParamLimits

0xc8f4,	// (0x0006f4e9) area_vitu2_query_pane_t1

0xc90a,	// (0x0006f4ff) area_vitu2_query_pane_t2_ParamLimits

0xc90a,	// (0x0006f4ff) area_vitu2_query_pane_t2

0x686f,	// (0x00069464) area_vitu2_query_pane_t3_ParamLimits

0x686f,	// (0x00069464) area_vitu2_query_pane_t3

0x6897,	// (0x0006948c) area_vitu2_query_pane_t4_ParamLimits

0x6897,	// (0x0006948c) area_vitu2_query_pane_t4

0x68bf,	// (0x000694b4) area_vitu2_query_pane_t5_ParamLimits

0x68bf,	// (0x000694b4) area_vitu2_query_pane_t5

0x68e7,	// (0x000694dc) area_vitu2_query_pane_t6_ParamLimits

0x68e7,	// (0x000694dc) area_vitu2_query_pane_t6

0x0006,

0xf9f6,	// (0x000725eb) area_vitu2_query_pane_t_ParamLimits

0xf9f6,	// (0x000725eb) area_vitu2_query_pane_t

0xc920,	// (0x0006f515) bg_button_pane_cp018

0xc92e,	// (0x0006f523) bg_button_pane_cp021

0x6933,	// (0x00069528) bg_button_pane_cp022

0x6944,	// (0x00069539) input_focus_pane_cp09

0x95b9,	// (0x0006c1ae) aid_size_touch_mv_arrow_left

0x95e4,	// (0x0006c1d9) aid_size_touch_mv_arrow_right

0xc26a,	// (0x0006ee5f) main_cset_slider_pane_g16_ParamLimits

0xc26a,	// (0x0006ee5f) main_cset_slider_pane_g16

0xc276,	// (0x0006ee6b) main_cset_slider_pane_g17_ParamLimits

0xc276,	// (0x0006ee6b) main_cset_slider_pane_g17

0xc897,	// (0x0006f48c) cell_cam4_burst_pane_g1_ParamLimits

0x0256,	// (0x00062e4b) compa_mode_pane

0xc473,	// (0x0006f068) popup_vtel_slider_window_g3_ParamLimits

0xc473,	// (0x0006f068) popup_vtel_slider_window_g3

0xc487,	// (0x0006f07c) popup_vtel_slider_window_g4_ParamLimits

0xc487,	// (0x0006f07c) popup_vtel_slider_window_g4

0xc49b,	// (0x0006f090) popup_vtel_slider_window_t1_ParamLimits

0xc49b,	// (0x0006f090) popup_vtel_slider_window_t1

0x0256,	// (0x00062e4b) main_cl_pane

0xa228,	// (0x0006ce1d) popup_imed_adjust2_window_ParamLimits

0x17b0,	// (0x000643a5) bg_tb_trans_pane_cp05_ParamLimits

0x575c,	// (0x00068351) popup_imed_adjust2_window_g1_ParamLimits

0x576b,	// (0x00068360) popup_imed_adjust2_window_g2_ParamLimits

0x576b,	// (0x00068360) popup_imed_adjust2_window_g2

0x5777,	// (0x0006836c) popup_imed_adjust2_window_g3_ParamLimits

0x5777,	// (0x0006836c) popup_imed_adjust2_window_g3

0x0002,

0xf76c,	// (0x00072361) popup_imed_adjust2_window_g_ParamLimits

0xf76c,	// (0x00072361) popup_imed_adjust2_window_g

0x5783,	// (0x00068378) popup_imed_adjust2_window_t1_ParamLimits

0x579b,	// (0x00068390) slider_imed_adjust_pane_ParamLimits

0xed33,	// (0x00071928) slider_imed_adjust_pane_g1_ParamLimits

0xed43,	// (0x00071938) slider_imed_adjust_pane_g2_ParamLimits

0xed53,	// (0x00071948) slider_imed_adjust_pane_g3_ParamLimits

0xed64,	// (0x00071959) slider_imed_adjust_pane_g4_ParamLimits

0xf773,	// (0x00072368) slider_imed_adjust_pane_g_ParamLimits

0xba2f,	// (0x0006e624) aid_touch_area_cam4_ParamLimits

0xba2f,	// (0x0006e624) aid_touch_area_cam4

0xba3f,	// (0x0006e634) battery_pane_cp01

0xbac6,	// (0x0006e6bb) main_camera4_pane_g6_ParamLimits

0xbac6,	// (0x0006e6bb) main_camera4_pane_g6

0xbae4,	// (0x0006e6d9) main_camera4_pane_t2_ParamLimits

0xbae4,	// (0x0006e6d9) main_camera4_pane_t2

0x0001,

0xf875,	// (0x0007246a) main_camera4_pane_t_ParamLimits

0xf875,	// (0x0007246a) main_camera4_pane_t

0xbb67,	// (0x0006e75c) aid_touch_area_vid4_ParamLimits

0xbb67,	// (0x0006e75c) aid_touch_area_vid4

0xbba7,	// (0x0006e79c) main_video4_pane_g5_ParamLimits

0xbba7,	// (0x0006e79c) main_video4_pane_g5

0xbbcd,	// (0x0006e7c2) vid4_progress_pane_ParamLimits

0xbbcd,	// (0x0006e7c2) vid4_progress_pane

0x2332,	// (0x00064f27) main_cset_slider_pane_g18_ParamLimits

0x2332,	// (0x00064f27) main_cset_slider_pane_g18

0x250c,	// (0x00065101) cell_cam4_burst_pane_g2_ParamLimits

0x250c,	// (0x00065101) cell_cam4_burst_pane_g2

0x0001,

0xf9ca,	// (0x000725bf) cell_cam4_burst_pane_g_ParamLimits

0xf9ca,	// (0x000725bf) cell_cam4_burst_pane_g

0xc93a,	// (0x0006f52f) bg_cl_pane_ParamLimits

0xc93a,	// (0x0006f52f) bg_cl_pane

0xc946,	// (0x0006f53b) cl_header_pane_ParamLimits

0xc946,	// (0x0006f53b) cl_header_pane

0xc952,	// (0x0006f547) cl_listscroll_pane_ParamLimits

0xc952,	// (0x0006f547) cl_listscroll_pane

0x26f6,	// (0x000652eb) bg_cl_pane_g1

0x26fe,	// (0x000652f3) bg_cl_pane_g2

0x2706,	// (0x000652fb) bg_cl_pane_g3

0x270e,	// (0x00065303) bg_cl_pane_g4

0x2716,	// (0x0006530b) bg_cl_pane_g5

0x271e,	// (0x00065313) bg_cl_pane_g6

0x2726,	// (0x0006531b) bg_cl_pane_g7

0x272e,	// (0x00065323) bg_cl_pane_g8

0x2736,	// (0x0006532b) bg_cl_pane_g9

0x0008,

0xfa05,	// (0x000725fa) bg_cl_pane_g

0xc95e,	// (0x0006f553) aid_height_cl_leading_ParamLimits

0xc95e,	// (0x0006f553) aid_height_cl_leading

0xc96a,	// (0x0006f55f) aid_height_cl_text_ParamLimits

0xc96a,	// (0x0006f55f) aid_height_cl_text

0x0a09,	// (0x000635fe) bg_cl_header_pane_ParamLimits

0x0a09,	// (0x000635fe) bg_cl_header_pane

0xc982,	// (0x0006f577) cl_header_pane_g1_ParamLimits

0xc982,	// (0x0006f577) cl_header_pane_g1

0xc98f,	// (0x0006f584) cl_header_pane_t1_ParamLimits

0xc98f,	// (0x0006f584) cl_header_pane_t1

0x273e,	// (0x00065333) cl_list_pane

0x2305,	// (0x00064efa) hc_scroll_pane_cp01

0x0f08,	// (0x00063afd) bg_cl_header_pane_g1

0x21e7,	// (0x00064ddc) bg_cl_header_pane_g2

0x0f28,	// (0x00063b1d) bg_cl_header_pane_g3

0x21f7,	// (0x00064dec) bg_cl_header_pane_g4

0x21ef,	// (0x00064de4) bg_cl_header_pane_g5

0x241b,	// (0x00065010) bg_cl_header_pane_g6

0x220f,	// (0x00064e04) bg_cl_header_pane_g7

0x2217,	// (0x00064e0c) bg_cl_header_pane_g8

0x2207,	// (0x00064dfc) bg_cl_header_pane_g9

0x0008,

0xfa18,	// (0x0007260d) bg_cl_header_pane_g

0xc9a1,	// (0x0006f596) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xc9a1,	// (0x0006f596) hc_cl_list_double_graphic_heading_pane

0xc9b1,	// (0x0006f5a6) hc_cl_list_single_graphic_pane_ParamLimits

0xc9b1,	// (0x0006f5a6) hc_cl_list_single_graphic_pane

0xc9c3,	// (0x0006f5b8) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xc9c3,	// (0x0006f5b8) hc_cl_list_single_graphic_pane_g1

0xc9cf,	// (0x0006f5c4) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xc9cf,	// (0x0006f5c4) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa2b,	// (0x00072620) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa2b,	// (0x00072620) hc_cl_list_single_graphic_pane_g

0xc9e3,	// (0x0006f5d8) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xc9e3,	// (0x0006f5d8) hc_cl_list_single_graphic_pane_t1

0xc9c3,	// (0x0006f5b8) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xc9c3,	// (0x0006f5b8) hc_cl_list_double_graphic_heading_pane_g1

0xc9f8,	// (0x0006f5ed) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xc9f8,	// (0x0006f5ed) hc_cl_list_double_graphic_heading_pane_g2

0xca0c,	// (0x0006f601) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xca0c,	// (0x0006f601) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa30,	// (0x00072625) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa30,	// (0x00072625) hc_cl_list_double_graphic_heading_pane_g

0xca20,	// (0x0006f615) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xca20,	// (0x0006f615) hc_cl_list_double_graphic_heading_pane_t1

0xca35,	// (0x0006f62a) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xca35,	// (0x0006f62a) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa37,	// (0x0007262c) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa37,	// (0x0007262c) hc_cl_list_double_graphic_heading_pane_t

0xca52,	// (0x0006f647) vid4_progress_pane_g1

0xca62,	// (0x0006f657) vid4_progress_pane_g2

0xca72,	// (0x0006f667) vid4_progress_pane_g3

0xca84,	// (0x0006f679) vid4_progress_pane_g4

0x0004,

0xfa3c,	// (0x00072631) vid4_progress_pane_g

0xcaa2,	// (0x0006f697) vid4_progress_pane_t1

0xcabc,	// (0x0006f6b1) vid4_progress_pane_t2

0x0002,

0xfa47,	// (0x0007263c) vid4_progress_pane_t

0xcae6,	// (0x0006f6db) wait_bar_pane_cp07

0x50a5,	// (0x00067c9a) blid_firmament_pane_ParamLimits

0x50e8,	// (0x00067cdd) popup_blid_sat_info2_window_g1

0x510c,	// (0x00067d01) popup_blid_sat_info2_window_t3

0x511a,	// (0x00067d0f) popup_blid_sat_info2_window_t4

0x5128,	// (0x00067d1d) popup_blid_sat_info2_window_t5

0x5136,	// (0x00067d2b) popup_blid_sat_info2_window_t6

0x5146,	// (0x00067d3b) popup_blid_sat_info2_window_t7

0x5154,	// (0x00067d49) popup_blid_sat_info2_window_t8

0x5162,	// (0x00067d57) popup_blid_sat_info2_window_t9

0x5170,	// (0x00067d65) popup_blid_sat_info2_window_t10

0x5237,	// (0x00067e2c) aid_firma_cardinal_ParamLimits

0x524b,	// (0x00067e40) blid_firmament_pane_t1_ParamLimits

0x5262,	// (0x00067e57) blid_firmament_pane_t2_ParamLimits

0x5279,	// (0x00067e6e) blid_firmament_pane_t3_ParamLimits

0x5290,	// (0x00067e85) blid_firmament_pane_t4_ParamLimits

0xf665,	// (0x0007225a) blid_firmament_pane_t_ParamLimits

0x52a7,	// (0x00067e9c) blid_sat_info_pane_ParamLimits

0x09b0,	// (0x000635a5) main_cam_set_pane_ParamLimits

0xb0af,	// (0x0006dca4) aid_size_cell_colour_35_ParamLimits

0xb0c9,	// (0x0006dcbe) aid_size_cell_colour_112_ParamLimits

0xb0e0,	// (0x0006dcd5) aid_size_cell_effect_ParamLimits

0x09b0,	// (0x000635a5) bg_tb_trans_pane_cp02_ParamLimits

0x1245,	// (0x00063e3a) heading_imed_pane_ParamLimits

0xb0fa,	// (0x0006dcef) listscroll_imed_pane_ParamLimits

0x4581,	// (0x00067176) popup_call2_audio_first_window_g5_ParamLimits

0x4581,	// (0x00067176) popup_call2_audio_first_window_g5

0xb71d,	// (0x0006e312) aid_size_touch_image3_arrow_left_ParamLimits

0xb71d,	// (0x0006e312) aid_size_touch_image3_arrow_left

0xb733,	// (0x0006e328) aid_size_touch_image3_arrow_right_ParamLimits

0xb733,	// (0x0006e328) aid_size_touch_image3_arrow_right

0xcad1,	// (0x0006f6c6) vid4_progress_pane_t3

0xb275,	// (0x0006de6a) main_hwr_training_symbol_option_pane_ParamLimits

0xb275,	// (0x0006de6a) main_hwr_training_symbol_option_pane

0xef08,	// (0x00071afd) popup_hwr_training_preview_window_ParamLimits

0xef08,	// (0x00071afd) popup_hwr_training_preview_window

0xb2d6,	// (0x0006decb) hwr_training_navi_pane_g5_ParamLimits

0xb2d6,	// (0x0006decb) hwr_training_navi_pane_g5

0x21d5,	// (0x00064dca) popup_char_count_window

0x0a09,	// (0x000635fe) bg_popup_sub_pane_cp20_ParamLimits

0xc58e,	// (0x0006f183) list_vitu2_match_list_pane_ParamLimits

0xc59a,	// (0x0006f18f) vitu2_page_scroll_pane_ParamLimits

0xc59a,	// (0x0006f18f) vitu2_page_scroll_pane

0x2769,	// (0x0006535e) list_single_hwr_training_symbol_option_pane_ParamLimits

0x2769,	// (0x0006535e) list_single_hwr_training_symbol_option_pane

0x277c,	// (0x00065371) list_single_hwr_training_symbol_option_pane_g1

0x2784,	// (0x00065379) list_single_hwr_training_symbol_option_pane_t1

0x2792,	// (0x00065387) bg_button_pane_cp023

0x279b,	// (0x00065390) bg_button_pane_cp024

0x27ce,	// (0x000653c3) vitu2_page_scroll_pane_g1

0x27d6,	// (0x000653cb) vitu2_page_scroll_pane_g2

0x0001,

0xfa4e,	// (0x00072643) vitu2_page_scroll_pane_g

0x27de,	// (0x000653d3) vitu2_page_scroll_pane_t1

0x27ed,	// (0x000653e2) popup_char_count_window_g1

0x27f6,	// (0x000653eb) popup_char_count_window_g2

0x27ff,	// (0x000653f4) popup_char_count_window_g3

0x0002,

0xfa53,	// (0x00072648) popup_char_count_window_g

0x2808,	// (0x000653fd) popup_char_count_window_t1

0x0256,	// (0x00062e4b) main_vded2_pane

0x5748,	// (0x0006833d) aid_size_cell_imed_line

0x5752,	// (0x00068347) grid_imed_line_width_pane

0xbc41,	// (0x0006e836) vid4_indicators_pane_g4

0x2816,	// (0x0006540b) cell_imed_line_width_pane_ParamLimits

0x2816,	// (0x0006540b) cell_imed_line_width_pane

0x282c,	// (0x00065421) cell_imed_line_width_pane_g1

0x2835,	// (0x0006542a) cell_imed_line_width_pane_g2

0x0001,

0xfa5a,	// (0x0007264f) cell_imed_line_width_pane_g

0xcb01,	// (0x0006f6f6) main_vded2_pane_g1_ParamLimits

0xcb01,	// (0x0006f6f6) main_vded2_pane_g1

0xcb10,	// (0x0006f705) main_vded2_pane_g2_ParamLimits

0xcb10,	// (0x0006f705) main_vded2_pane_g2

0x0001,

0xfa5f,	// (0x00072654) main_vded2_pane_g_ParamLimits

0xfa5f,	// (0x00072654) main_vded2_pane_g

0xcb1e,	// (0x0006f713) vded2_slider_pane_ParamLimits

0xcb1e,	// (0x0006f713) vded2_slider_pane

0xcb2b,	// (0x0006f720) aid_size_touch_vded2_end

0xcb35,	// (0x0006f72a) aid_size_touch_vded2_playhead

0x283d,	// (0x00065432) aid_size_touch_vded2_start

0x2845,	// (0x0006543a) vded2_slider_bg_pane

0x284e,	// (0x00065443) vded2_slider_pane_g1

0x2857,	// (0x0006544c) vded2_slider_pane_g2

0xcb3d,	// (0x0006f732) vded2_slider_pane_g3

0x0002,

0xfa64,	// (0x00072659) vded2_slider_pane_g

0x285f,	// (0x00065454) vded2_slider_bg_pane_g1

0x2868,	// (0x0006545d) vded2_slider_bg_pane_g2

0x2871,	// (0x00065466) vded2_slider_bg_pane_g3

0x0002,

0xf730,	// (0x00072325) vded2_slider_bg_pane_g

0x9a17,	// (0x0006c60c) aid_postcard_touch_down_pane_ParamLimits

0x9a17,	// (0x0006c60c) aid_postcard_touch_down_pane

0x9a27,	// (0x0006c61c) aid_postcard_touch_up_pane_ParamLimits

0x9a27,	// (0x0006c61c) aid_postcard_touch_up_pane

0x0256,	// (0x00062e4b) main_blid2_pane

0xa1a7,	// (0x0006cd9c) popup_blid2_search_window

0x0256,	// (0x00062e4b) blid2_gps_pane

0x0256,	// (0x00062e4b) blid2_navig_pane

0x0256,	// (0x00062e4b) blid2_search_pane

0x0256,	// (0x00062e4b) blid2_tripm_pane

0xcb46,	// (0x0006f73b) blid2_search_pane_g1_ParamLimits

0xcb46,	// (0x0006f73b) blid2_search_pane_g1

0xcb52,	// (0x0006f747) blid2_search_pane_t1_ParamLimits

0xcb52,	// (0x0006f747) blid2_search_pane_t1

0xcb64,	// (0x0006f759) aid_size_cell_blid2_gps_ParamLimits

0xcb64,	// (0x0006f759) aid_size_cell_blid2_gps

0xcb74,	// (0x0006f769) blid2_gps_pane_g1_ParamLimits

0xcb74,	// (0x0006f769) blid2_gps_pane_g1

0xcb80,	// (0x0006f775) grid_blid2_satellite_pane_ParamLimits

0xcb80,	// (0x0006f775) grid_blid2_satellite_pane

0xcb8e,	// (0x0006f783) blid2_navig_pane_g1_ParamLimits

0xcb8e,	// (0x0006f783) blid2_navig_pane_g1

0xcb9a,	// (0x0006f78f) blid2_navig_pane_t1_ParamLimits

0xcb9a,	// (0x0006f78f) blid2_navig_pane_t1

0xcbac,	// (0x0006f7a1) blid2_navig_pane_t2_ParamLimits

0xcbac,	// (0x0006f7a1) blid2_navig_pane_t2

0x0001,

0xfa6b,	// (0x00072660) blid2_navig_pane_t_ParamLimits

0xfa6b,	// (0x00072660) blid2_navig_pane_t

0xcbbe,	// (0x0006f7b3) blid2_navig_ring_pane_ParamLimits

0xcbbe,	// (0x0006f7b3) blid2_navig_ring_pane

0xcbce,	// (0x0006f7c3) blid2_speed_pane_ParamLimits

0xcbce,	// (0x0006f7c3) blid2_speed_pane

0xcbda,	// (0x0006f7cf) blid2_tripm_pane_g1_ParamLimits

0xcbda,	// (0x0006f7cf) blid2_tripm_pane_g1

0xcbea,	// (0x0006f7df) blid2_tripm_pane_g2_ParamLimits

0xcbea,	// (0x0006f7df) blid2_tripm_pane_g2

0xcbf6,	// (0x0006f7eb) blid2_tripm_pane_g3_ParamLimits

0xcbf6,	// (0x0006f7eb) blid2_tripm_pane_g3

0xcc02,	// (0x0006f7f7) blid2_tripm_pane_g4_ParamLimits

0xcc02,	// (0x0006f7f7) blid2_tripm_pane_g4

0xcc0e,	// (0x0006f803) blid2_tripm_pane_g5_ParamLimits

0xcc0e,	// (0x0006f803) blid2_tripm_pane_g5

0x0005,

0xfa70,	// (0x00072665) blid2_tripm_pane_g_ParamLimits

0xfa70,	// (0x00072665) blid2_tripm_pane_g

0xcc2a,	// (0x0006f81f) blid2_tripm_pane_t1_ParamLimits

0xcc2a,	// (0x0006f81f) blid2_tripm_pane_t1

0xcc3c,	// (0x0006f831) blid2_tripm_pane_t2_ParamLimits

0xcc3c,	// (0x0006f831) blid2_tripm_pane_t2

0xcc4e,	// (0x0006f843) blid2_tripm_pane_t3_ParamLimits

0xcc4e,	// (0x0006f843) blid2_tripm_pane_t3

0x0003,

0xfa7d,	// (0x00072672) blid2_tripm_pane_t_ParamLimits

0xfa7d,	// (0x00072672) blid2_tripm_pane_t

0xcc80,	// (0x0006f875) cell_blid2_satellite_pane_ParamLimits

0xcc80,	// (0x0006f875) cell_blid2_satellite_pane

0xcc9e,	// (0x0006f893) cell_blid2_satellite_pane_g1

0x287a,	// (0x0006546f) cell_blid2_satellite_pane_t1

0x0d13,	// (0x00063908) blid2_speed_pane_g1

0x2888,	// (0x0006547d) blid2_speed_pane_t1

0x2896,	// (0x0006548b) blid2_speed_pane_t2

0x0001,

0xfa86,	// (0x0007267b) blid2_speed_pane_t

0x0d13,	// (0x00063908) blid2_navig_ring_pane_g1

0xcca7,	// (0x0006f89c) blid2_navig_ring_pane_g2

0xccaf,	// (0x0006f8a4) blid2_navig_ring_pane_g3

0xccb7,	// (0x0006f8ac) blid2_navig_ring_pane_g4

0xccbf,	// (0x0006f8b4) blid2_navig_ring_pane_g5

0x0004,

0xfa8b,	// (0x00072680) blid2_navig_ring_pane_g

0x0256,	// (0x00062e4b) bg_popup_window_pane_cp011

0x28a4,	// (0x00065499) popup_blid2_search_window_g1

0x28ac,	// (0x000654a1) popup_blid2_search_window_t1

0x28ba,	// (0x000654af) popup_blid2_search_window_t2

0x0001,

0xfa96,	// (0x0007268b) popup_blid2_search_window_t

0x0e17,	// (0x00063a0c) main_browser_pane_g1

0x0aab,	// (0x000636a0) main_browser_pane_ParamLimits

0x09b0,	// (0x000635a5) bg_button_pane_cp011_ParamLimits

0xbe7d,	// (0x0006ea72) cell_vitu2_function_pane_g1_ParamLimits

0x17b0,	// (0x000643a5) bg_popup_sub_pane_cp22_ParamLimits

0x675d,	// (0x00069352) input_focus_pane_cp08_ParamLimits

0xc735,	// (0x0006f32a) popup_vitu2_query_button_pane_ParamLimits

0xc735,	// (0x0006f32a) popup_vitu2_query_button_pane

0x6774,	// (0x00069369) popup_vitu2_query_input_button_pane

0x2456,	// (0x0006504b) popup_vitu2_query_window_g1_ParamLimits

0x677e,	// (0x00069373) popup_vitu2_query_window_g2_ParamLimits

0xf99e,	// (0x00072593) popup_vitu2_query_window_g_ParamLimits

0x0256,	// (0x00062e4b) bg_button_pane_cp026

0xccc7,	// (0x0006f8bc) popup_vitu2_query_input_button_pane_g1

0x0256,	// (0x00062e4b) bg_button_pane_cp025

0x28c8,	// (0x000654bd) popup_vitu2_query_button_pane_t1

0xa66b,	// (0x0006d260) main_mp3_pane_t6

0xa67b,	// (0x0006d270) popup_slider_window_cp01

0xbb1c,	// (0x0006e711) cam4_battery_pane

0xbbfa,	// (0x0006e7ef) cam4_battery_pane_cp02

0xca4a,	// (0x0006f63f) cam4_battery_pane_cp01

0xca4a,	// (0x0006f63f) cam4_battery_pane_cp03

0x0d13,	// (0x00063908) cam4_battery_pane_g1

0x501a,	// (0x00067c0f) cam4_battery_pane_g2

0x0001,

0xfa9b,	// (0x00072690) cam4_battery_pane_g

0x517e,	// (0x00067d73) popup_blid_sat_info2_window_t11

0x95b9,	// (0x0006c1ae) aid_size_touch_mv_arrow_left_ParamLimits

0x95e4,	// (0x0006c1d9) aid_size_touch_mv_arrow_right_ParamLimits

0x1611,	// (0x00064206) navi_pane_g1_ParamLimits

0x9623,	// (0x0006c218) navi_pane_g2_ParamLimits

0x9651,	// (0x0006c246) navi_pane_g3_ParamLimits

0xf379,	// (0x00071f6e) navi_pane_g_ParamLimits

0x96ab,	// (0x0006c2a0) navi_pane_mv_t1_ParamLimits

0xb106,	// (0x0006dcfb) grid_imed_effect_pane_ParamLimits

0x813c,	// (0x0006ad31) aid_placing_vt_slider_lsc

0x0d62,	// (0x00063957) aid_placing_vt_slider_prt

0x09b0,	// (0x000635a5) bg_tb_trans_pane_cp01_ParamLimits

0x53e6,	// (0x00067fdb) popup_image_details_window_g1_ParamLimits

0x53f9,	// (0x00067fee) popup_image_details_window_g2_ParamLimits

0x540e,	// (0x00068003) popup_image_details_window_g3_ParamLimits

0x540e,	// (0x00068003) popup_image_details_window_g3

0xf6a5,	// (0x0007229a) popup_image_details_window_g_ParamLimits

0x5422,	// (0x00068017) popup_image_details_window_t1_ParamLimits

0x5434,	// (0x00068029) popup_image_details_window_t2_ParamLimits

0x544d,	// (0x00068042) popup_image_details_window_t3_ParamLimits

0x5461,	// (0x00068056) popup_image_details_window_t4_ParamLimits

0x547c,	// (0x00068071) popup_image_details_window_t5_ParamLimits

0xf6ac,	// (0x000722a1) popup_image_details_window_t_ParamLimits

0xc976,	// (0x0006f56b) cl_header_name_pane_ParamLimits

0xc976,	// (0x0006f56b) cl_header_name_pane

0xcccf,	// (0x0006f8c4) cl_header_name_pane_t1_ParamLimits

0xcccf,	// (0x0006f8c4) cl_header_name_pane_t1

0xcce6,	// (0x0006f8db) cl_header_name_pane_t2_ParamLimits

0xcce6,	// (0x0006f8db) cl_header_name_pane_t2

0xcd10,	// (0x0006f905) cl_header_name_pane_t3_ParamLimits

0xcd10,	// (0x0006f905) cl_header_name_pane_t3

0x0002,

0xfaa0,	// (0x00072695) cl_header_name_pane_t_ParamLimits

0xfaa0,	// (0x00072695) cl_header_name_pane_t

0x967c,	// (0x0006c271) navi_pane_mv_g2_ParamLimits

0x21a0,	// (0x00064d95) field_vitu2_entry_pane_g1_ParamLimits

0x21ac,	// (0x00064da1) field_vitu2_entry_pane_g2_ParamLimits

0x177a,	// (0x0006436f) field_vitu2_entry_pane_g3_ParamLimits

0x177a,	// (0x0006436f) field_vitu2_entry_pane_g3

0xf8a7,	// (0x0007249c) field_vitu2_entry_pane_g_ParamLimits

0xbe0b,	// (0x0006ea00) cell_vitu2_itu_pane_g1_ParamLimits

0xbe23,	// (0x0006ea18) cell_vitu2_itu_pane_g2_ParamLimits

0xbe23,	// (0x0006ea18) cell_vitu2_itu_pane_g2

0x0001,

0xf8b3,	// (0x000724a8) cell_vitu2_itu_pane_g_ParamLimits

0xf8b3,	// (0x000724a8) cell_vitu2_itu_pane_g

0x09b0,	// (0x000635a5) bg_vkb2_func_pane_cp05_ParamLimits

0x09b0,	// (0x000635a5) bg_vkb2_func_pane_cp05

0x09b0,	// (0x000635a5) bg_vkb2_func_pane_cp03

0x09b0,	// (0x000635a5) bg_vkb2_func_pane_cp04

0x09b0,	// (0x000635a5) bg_vkb2_func_pane_cp10_ParamLimits

0x09b0,	// (0x000635a5) bg_vkb2_func_pane_cp10

0x6933,	// (0x00069528) bg_vkb2_func_pane_cp08

0xc920,	// (0x0006f515) bg_vkb2_func_pane_cp06

0xc92e,	// (0x0006f523) bg_vkb2_func_pane_cp07

0x27a4,	// (0x00065399) bg_vkb2_func_pane_cp11_ParamLimits

0x27a4,	// (0x00065399) bg_vkb2_func_pane_cp11

0x27b9,	// (0x000653ae) bg_vkb2_func_pane_cp12_ParamLimits

0x27b9,	// (0x000653ae) bg_vkb2_func_pane_cp12

0x0256,	// (0x00062e4b) bg_vkb2_func_pane_cp09

0x21e7,	// (0x00064ddc) bg_vkb2_func_pane_g1

0x0f28,	// (0x00063b1d) bg_vkb2_func_pane_g2

0x21ef,	// (0x00064de4) bg_vkb2_func_pane_g3

0x21f7,	// (0x00064dec) bg_vkb2_func_pane_g4

0x241b,	// (0x00065010) bg_vkb2_func_pane_g5

0x220f,	// (0x00064e04) bg_vkb2_func_pane_g6

0x2217,	// (0x00064e0c) bg_vkb2_func_pane_g7

0x2207,	// (0x00064dfc) bg_vkb2_func_pane_g8

0x0f08,	// (0x00063afd) bg_vkb2_func_pane_g9

0x0008,

0xfaa7,	// (0x0007269c) bg_vkb2_func_pane_g

0xcc1c,	// (0x0006f811) blid2_tripm_pane_g6_ParamLimits

0xcc1c,	// (0x0006f811) blid2_tripm_pane_g6

0xefc6,	// (0x00071bbb) mp4_progress_pane_g1

0xcc74,	// (0x0006f869) blid2_tripm_values_pane_ParamLimits

0xcc74,	// (0x0006f869) blid2_tripm_values_pane

0xcd35,	// (0x0006f92a) blid2_tripm_values_pane_t1

0xcd43,	// (0x0006f938) blid2_tripm_values_pane_t2

0xcd51,	// (0x0006f946) blid2_tripm_values_pane_t3

0xcd5f,	// (0x0006f954) blid2_tripm_values_pane_t4

0xcd6d,	// (0x0006f962) blid2_tripm_values_pane_t5

0xcd7b,	// (0x0006f970) blid2_tripm_values_pane_t6

0xcd89,	// (0x0006f97e) blid2_tripm_values_pane_t7

0xcd97,	// (0x0006f98c) blid2_tripm_values_pane_t8

0xcda5,	// (0x0006f99a) blid2_tripm_values_pane_t9

0x0008,

0xfaba,	// (0x000726af) blid2_tripm_values_pane_t

0x817a,	// (0x0006ad6f) call_video_pane_t1_ParamLimits

0x8197,	// (0x0006ad8c) call_video_pane_t2_ParamLimits

0xf222,	// (0x00071e17) call_video_pane_t_ParamLimits

0x6557,	// (0x0006914c) msg_header_pane_g1_ParamLimits

0x1867,	// (0x0006445c) msg_header_pane_g2_ParamLimits

0x1867,	// (0x0006445c) msg_header_pane_g2

0x0001,

0xf41c,	// (0x00072011) msg_header_pane_g_ParamLimits

0xf41c,	// (0x00072011) msg_header_pane_g

0x0aab,	// (0x000636a0) main_clock2_pane_ParamLimits

0xae7f,	// (0x0006da74) grid_clock2_toolbar_pane_ParamLimits

0xae7f,	// (0x0006da74) grid_clock2_toolbar_pane

0xae7f,	// (0x0006da74) listscroll_clock2_pane_ParamLimits

0xae7f,	// (0x0006da74) listscroll_clock2_pane

0xaf2e,	// (0x0006db23) main_clock2_pane_t3_ParamLimits

0xaf2e,	// (0x0006db23) main_clock2_pane_t3

0xaf40,	// (0x0006db35) main_clock2_pane_t4_ParamLimits

0xaf40,	// (0x0006db35) main_clock2_pane_t4

0x28d6,	// (0x000654cb) cell_clock2_toolbar_pane

0x28de,	// (0x000654d3) cell_clock2_toolbar_pane_cp01

0x28de,	// (0x000654d3) cell_clock2_toolbar_pane_cp02

0x28e6,	// (0x000654db) cell_clock2_toolbar_pane_cp03

0x28ee,	// (0x000654e3) list_clock2_pane

0x1577,	// (0x0006416c) scroll_pane_cp10

0x28f6,	// (0x000654eb) list_single_clock2_pane_ParamLimits

0x28f6,	// (0x000654eb) list_single_clock2_pane

0x0cbe,	// (0x000638b3) list_highlight_pane_cp08

0x2903,	// (0x000654f8) list_single_clock2_pane_t1

0x2911,	// (0x00065506) list_single_clock2_pane_t2

0x0001,

0xfacd,	// (0x000726c2) list_single_clock2_pane_t

0x0256,	// (0x00062e4b) bg_button_pane_cp10

0x291f,	// (0x00065514) cell_clock2_toolbar_pane_g1

0x9979,	// (0x0006c56e) aid_main_viewer_pane_g1_ParamLimits

0x9979,	// (0x0006c56e) aid_main_viewer_pane_g1

0x9985,	// (0x0006c57a) aid_main_viewer_pane_g2_ParamLimits

0x9985,	// (0x0006c57a) aid_main_viewer_pane_g2

0x9991,	// (0x0006c586) aid_main_viewer_pane_g3_ParamLimits

0x9991,	// (0x0006c586) aid_main_viewer_pane_g3

0x99a2,	// (0x0006c597) aid_main_viewer_pane_g4_ParamLimits

0x99a2,	// (0x0006c597) aid_main_viewer_pane_g4

0x0003,

0xf42d,	// (0x00072022) aid_main_viewer_pane_g_ParamLimits

0xf42d,	// (0x00072022) aid_main_viewer_pane_g

0xa173,	// (0x0006cd68) main_calc_pane_ParamLimits

0xa180,	// (0x0006cd75) main_dialer2_pane_ParamLimits

0x0256,	// (0x00062e4b) main_cam6_pane

0x0256,	// (0x00062e4b) main_vid6_pane

0xae8b,	// (0x0006da80) listscroll_gen_pane_cp06_ParamLimits

0xae8b,	// (0x0006da80) listscroll_gen_pane_cp06

0xaf52,	// (0x0006db47) main_clock2_pane_t5_ParamLimits

0xaf52,	// (0x0006db47) main_clock2_pane_t5

0xaf9f,	// (0x0006db94) aid_call2_pane_cp10_ParamLimits

0xafb1,	// (0x0006dba6) aid_call_pane_cp10_ParamLimits

0x15e6,	// (0x000641db) popup_clock_analogue_window_cp10_g1_ParamLimits

0x15e6,	// (0x000641db) popup_clock_analogue_window_cp10_g2_ParamLimits

0xafc3,	// (0x0006dbb8) popup_clock_analogue_window_cp10_g3_ParamLimits

0xafc3,	// (0x0006dbb8) popup_clock_analogue_window_cp10_g4_ParamLimits

0x15e6,	// (0x000641db) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf761,	// (0x00072356) popup_clock_analogue_window_cp10_g_ParamLimits

0xafd9,	// (0x0006dbce) popup_clock_analogue_window_cp10_t1_ParamLimits

0xb6ca,	// (0x0006e2bf) cell_dialer2_keypad_pane_g2_ParamLimits

0xb6ca,	// (0x0006e2bf) cell_dialer2_keypad_pane_g2

0x0001,

0xf846,	// (0x0007243b) cell_dialer2_keypad_pane_g_ParamLimits

0xf846,	// (0x0007243b) cell_dialer2_keypad_pane_g

0xb6e6,	// (0x0006e2db) cell_dialer2_keypad_pane_t1

0xc15f,	// (0x0006ed54) main_cset_text2_pane_ParamLimits

0xc15f,	// (0x0006ed54) main_cset_text2_pane

0x264e,	// (0x00065243) area_vitu2_query_pane_g1_ParamLimits

0x685e,	// (0x00069453) area_vitu2_query_pane_g2_ParamLimits

0xf9f1,	// (0x000725e6) area_vitu2_query_pane_g_ParamLimits

0x690f,	// (0x00069504) area_vitu2_query_pane_t7_ParamLimits

0x690f,	// (0x00069504) area_vitu2_query_pane_t7

0xc920,	// (0x0006f515) bg_button_pane_cp018_ParamLimits

0xc92e,	// (0x0006f523) bg_button_pane_cp021_ParamLimits

0x6933,	// (0x00069528) bg_button_pane_cp022_ParamLimits

0x6933,	// (0x00069528) bg_vkb2_func_pane_cp08_ParamLimits

0xc920,	// (0x0006f515) bg_vkb2_func_pane_cp06_ParamLimits

0xc92e,	// (0x0006f523) bg_vkb2_func_pane_cp07_ParamLimits

0x6944,	// (0x00069539) input_focus_pane_cp09_ParamLimits

0xcdb3,	// (0x0006f9a8) cam6_autofocus_pane_ParamLimits

0xcdb3,	// (0x0006f9a8) cam6_autofocus_pane

0xcdd5,	// (0x0006f9ca) cam6_image_uncrop_pane_ParamLimits

0xcdd5,	// (0x0006f9ca) cam6_image_uncrop_pane

0xce02,	// (0x0006f9f7) cam6_indi_pane_ParamLimits

0xce02,	// (0x0006f9f7) cam6_indi_pane

0xce1c,	// (0x0006fa11) cam6_mode_pane_ParamLimits

0xce1c,	// (0x0006fa11) cam6_mode_pane

0xce30,	// (0x0006fa25) cam6_timer_pane_ParamLimits

0xce30,	// (0x0006fa25) cam6_timer_pane

0xce3c,	// (0x0006fa31) cam6_zoom_pane_ParamLimits

0xce3c,	// (0x0006fa31) cam6_zoom_pane

0xce58,	// (0x0006fa4d) cam6_mode_pane_g1_ParamLimits

0xce58,	// (0x0006fa4d) cam6_mode_pane_g1

0xce64,	// (0x0006fa59) cam6_mode_pane_g2_ParamLimits

0xce64,	// (0x0006fa59) cam6_mode_pane_g2

0xce70,	// (0x0006fa65) cam6_mode_pane_g3_ParamLimits

0xce70,	// (0x0006fa65) cam6_mode_pane_g3

0xce7c,	// (0x0006fa71) cam6_mode_pane_g4_ParamLimits

0xce7c,	// (0x0006fa71) cam6_mode_pane_g4

0x0003,

0xfad2,	// (0x000726c7) cam6_mode_pane_g_ParamLimits

0xfad2,	// (0x000726c7) cam6_mode_pane_g

0xf013,	// (0x00071c08) bg_tb_trans_pane_cp08_ParamLimits

0xf013,	// (0x00071c08) bg_tb_trans_pane_cp08

0x2927,	// (0x0006551c) cam6_battery_pane_ParamLimits

0x2927,	// (0x0006551c) cam6_battery_pane

0x293d,	// (0x00065532) cam6_indi_pane_g1_ParamLimits

0x293d,	// (0x00065532) cam6_indi_pane_g1

0x294f,	// (0x00065544) cam6_indi_pane_g2_ParamLimits

0x294f,	// (0x00065544) cam6_indi_pane_g2

0x2961,	// (0x00065556) cam6_indi_pane_g3_ParamLimits

0x2961,	// (0x00065556) cam6_indi_pane_g3

0x0002,

0xfadb,	// (0x000726d0) cam6_indi_pane_g_ParamLimits

0xfadb,	// (0x000726d0) cam6_indi_pane_g

0x2973,	// (0x00065568) cam6_indi_pane_t1_ParamLimits

0x2973,	// (0x00065568) cam6_indi_pane_t1

0xbc76,	// (0x0006e86b) cam6_autofocus_pane_g1

0xbc7e,	// (0x0006e873) cam6_autofocus_pane_g2

0xbc86,	// (0x0006e87b) cam6_autofocus_pane_g3

0xbc8e,	// (0x0006e883) cam6_autofocus_pane_g4

0x0003,

0xfae2,	// (0x000726d7) cam6_autofocus_pane_g

0x2999,	// (0x0006558e) cam6_timer_pane_g1

0x29a1,	// (0x00065596) cam6_timer_pane_t1

0x29af,	// (0x000655a4) cam6_zoom_cont_pane

0x29b7,	// (0x000655ac) cam6_zoom_pane_g1

0x29bf,	// (0x000655b4) cam6_zoom_pane_g2

0xce88,	// (0x0006fa7d) cam6_zoom_pane_g3

0x0002,

0xfaeb,	// (0x000726e0) cam6_zoom_pane_g

0x0d13,	// (0x00063908) cam6_battery_pane_g1

0x0d13,	// (0x00063908) cam6_battery_pane_g2

0x0001,

0xf3dd,	// (0x00071fd2) cam6_battery_pane_g

0x29c7,	// (0x000655bc) cam6_zoom_cont_pane_g1

0x29d0,	// (0x000655c5) cam6_zoom_cont_pane_g2

0x29d9,	// (0x000655ce) cam6_zoom_cont_pane_g3

0x0002,

0xfaf2,	// (0x000726e7) cam6_zoom_cont_pane_g

0xcea5,	// (0x0006fa9a) cam6_mode_pane_cp_ParamLimits

0xcea5,	// (0x0006fa9a) cam6_mode_pane_cp

0xce3c,	// (0x0006fa31) cam6_zoom_pane_cp_ParamLimits

0xce3c,	// (0x0006fa31) cam6_zoom_pane_cp

0xceb9,	// (0x0006faae) vid6_image_uncrop_cif_pane_ParamLimits

0xceb9,	// (0x0006faae) vid6_image_uncrop_cif_pane

0xcee5,	// (0x0006fada) vid6_image_uncrop_nhd_pane_ParamLimits

0xcee5,	// (0x0006fada) vid6_image_uncrop_nhd_pane

0xcdd5,	// (0x0006f9ca) vid6_image_uncrop_vga_pane_ParamLimits

0xcdd5,	// (0x0006f9ca) vid6_image_uncrop_vga_pane

0xcf04,	// (0x0006faf9) vid6_image_uncrop_wvga_pane_ParamLimits

0xcf04,	// (0x0006faf9) vid6_image_uncrop_wvga_pane

0xcf23,	// (0x0006fb18) vid6_indi_pane_ParamLimits

0xcf23,	// (0x0006fb18) vid6_indi_pane

0xf013,	// (0x00071c08) bg_tb_trans_pane_cp09_ParamLimits

0xf013,	// (0x00071c08) bg_tb_trans_pane_cp09

0x29f1,	// (0x000655e6) cam6_battery_pane_cp_ParamLimits

0x29f1,	// (0x000655e6) cam6_battery_pane_cp

0x29fd,	// (0x000655f2) vid6_indi_pane_g1_ParamLimits

0x29fd,	// (0x000655f2) vid6_indi_pane_g1

0x2a0f,	// (0x00065604) vid6_indi_pane_g2_ParamLimits

0x2a0f,	// (0x00065604) vid6_indi_pane_g2

0x2a21,	// (0x00065616) vid6_indi_pane_g3_ParamLimits

0x2a21,	// (0x00065616) vid6_indi_pane_g3

0x2a38,	// (0x0006562d) vid6_indi_pane_g4_ParamLimits

0x2a38,	// (0x0006562d) vid6_indi_pane_g4

0x2a4f,	// (0x00065644) vid6_indi_pane_g5_ParamLimits

0x2a4f,	// (0x00065644) vid6_indi_pane_g5

0x0004,

0xfaf9,	// (0x000726ee) vid6_indi_pane_g_ParamLimits

0xfaf9,	// (0x000726ee) vid6_indi_pane_g

0x2a69,	// (0x0006565e) vid6_indi_pane_t1_ParamLimits

0x2a69,	// (0x0006565e) vid6_indi_pane_t1

0x2a7f,	// (0x00065674) vid6_indi_pane_t2_ParamLimits

0x2a7f,	// (0x00065674) vid6_indi_pane_t2

0x2aa7,	// (0x0006569c) vid6_indi_pane_t3_ParamLimits

0x2aa7,	// (0x0006569c) vid6_indi_pane_t3

0x2acf,	// (0x000656c4) vid6_indi_pane_t4_ParamLimits

0x2acf,	// (0x000656c4) vid6_indi_pane_t4

0x0003,

0xfb04,	// (0x000726f9) vid6_indi_pane_t_ParamLimits

0xfb04,	// (0x000726f9) vid6_indi_pane_t

0x2af3,	// (0x000656e8) wait_bar_pane_cp08

0xcf48,	// (0x0006fb3d) main_cset_text2_pane_t1_ParamLimits

0xcf48,	// (0x0006fb3d) main_cset_text2_pane_t1

0xce90,	// (0x0006fa85) listscroll_gen_pane_cp06_t1_ParamLimits

0xce90,	// (0x0006fa85) listscroll_gen_pane_cp06_t1

0x0256,	// (0x00062e4b) main_cam6_set_pane

0x0a17,	// (0x0006360c) bg_tb_trans_pane_cp06_ParamLimits

0xbb24,	// (0x0006e719) cam4_indicators_pane_g1_ParamLimits

0xbb35,	// (0x0006e72a) cam4_indicators_pane_g2_ParamLimits

0xf883,	// (0x00072478) cam4_indicators_pane_g_ParamLimits

0xbb4d,	// (0x0006e742) cam4_indicators_pane_t1_ParamLimits

0x09b0,	// (0x000635a5) bg_tb_trans_pane_cp07_ParamLimits

0xbc04,	// (0x0006e7f9) vid4_indicators_pane_g1_ParamLimits

0xbc1a,	// (0x0006e80f) vid4_indicators_pane_g2_ParamLimits

0xbc2e,	// (0x0006e823) vid4_indicators_pane_g3_ParamLimits

0xbc41,	// (0x0006e836) vid4_indicators_pane_g4_ParamLimits

0xf895,	// (0x0007248a) vid4_indicators_pane_g_ParamLimits

0xbc5f,	// (0x0006e854) vid4_indicators_pane_t1_ParamLimits

0xca52,	// (0x0006f647) vid4_progress_pane_g1_ParamLimits

0xca62,	// (0x0006f657) vid4_progress_pane_g2_ParamLimits

0xca72,	// (0x0006f667) vid4_progress_pane_g3_ParamLimits

0xca84,	// (0x0006f679) vid4_progress_pane_g4_ParamLimits

0xfa3c,	// (0x00072631) vid4_progress_pane_g_ParamLimits

0xcaa2,	// (0x0006f697) vid4_progress_pane_t1_ParamLimits

0xcabc,	// (0x0006f6b1) vid4_progress_pane_t2_ParamLimits

0xcad1,	// (0x0006f6c6) vid4_progress_pane_t3_ParamLimits

0xfa47,	// (0x0007263c) vid4_progress_pane_t_ParamLimits

0xcae6,	// (0x0006f6db) wait_bar_pane_cp07_ParamLimits

0xcf6f,	// (0x0006fb64) main_cam6_set_pane_g2_ParamLimits

0xcf6f,	// (0x0006fb64) main_cam6_set_pane_g2

0xcf7b,	// (0x0006fb70) main_cset6_listscroll_pane_ParamLimits

0xcf7b,	// (0x0006fb70) main_cset6_listscroll_pane

0xcfa8,	// (0x0006fb9d) main_cset6_slider_pane_ParamLimits

0xcfa8,	// (0x0006fb9d) main_cset6_slider_pane

0xcfb4,	// (0x0006fba9) main_cset6_text2_pane_ParamLimits

0xcfb4,	// (0x0006fba9) main_cset6_text2_pane

0x2b02,	// (0x000656f7) main_cset6_text_pane

0x2b0a,	// (0x000656ff) main_cset_list_pane_copy1_ParamLimits

0x2b0a,	// (0x000656ff) main_cset_list_pane_copy1

0x2b1a,	// (0x0006570f) scroll_pane_cp028_copy1

0xcfc7,	// (0x0006fbbc) cset_list_set_pane_copy1

0xcfd7,	// (0x0006fbcc) aid_position_infowindow_above_copy1

0xcfdf,	// (0x0006fbd4) aid_position_infowindow_below_copy1

0xcfe7,	// (0x0006fbdc) cset_list_set_pane_g1_copy1

0x697a,	// (0x0006956f) cset_list_set_pane_g3_copy1_ParamLimits

0x697a,	// (0x0006956f) cset_list_set_pane_g3_copy1

0x6989,	// (0x0006957e) cset_list_set_pane_t1_copy1_ParamLimits

0x6989,	// (0x0006957e) cset_list_set_pane_t1_copy1

0x09b0,	// (0x000635a5) list_highlight_pane_cp021_copy1_ParamLimits

0x09b0,	// (0x000635a5) list_highlight_pane_cp021_copy1

0x2b23,	// (0x00065718) cset6_slider_pane_ParamLimits

0x2b23,	// (0x00065718) cset6_slider_pane

0x2b4f,	// (0x00065744) main_cset6_slider_pane_g1_ParamLimits

0x2b4f,	// (0x00065744) main_cset6_slider_pane_g1

0xcfef,	// (0x0006fbe4) main_cset6_slider_pane_g2_ParamLimits

0xcfef,	// (0x0006fbe4) main_cset6_slider_pane_g2

0x2b77,	// (0x0006576c) main_cset6_slider_pane_g3_ParamLimits

0x2b77,	// (0x0006576c) main_cset6_slider_pane_g3

0xd017,	// (0x0006fc0c) main_cset6_slider_pane_g4_ParamLimits

0xd017,	// (0x0006fc0c) main_cset6_slider_pane_g4

0xd023,	// (0x0006fc18) main_cset6_slider_pane_g5_ParamLimits

0xd023,	// (0x0006fc18) main_cset6_slider_pane_g5

0x231a,	// (0x00064f0f) main_cset6_slider_pane_g7_ParamLimits

0x231a,	// (0x00064f0f) main_cset6_slider_pane_g7

0x2326,	// (0x00064f1b) main_cset6_slider_pane_g8_ParamLimits

0x2326,	// (0x00064f1b) main_cset6_slider_pane_g8

0xd02f,	// (0x0006fc24) main_cset6_slider_pane_g9_ParamLimits

0xd02f,	// (0x0006fc24) main_cset6_slider_pane_g9

0xd03b,	// (0x0006fc30) main_cset6_slider_pane_g10_ParamLimits

0xd03b,	// (0x0006fc30) main_cset6_slider_pane_g10

0xd047,	// (0x0006fc3c) main_cset6_slider_pane_g11_ParamLimits

0xd047,	// (0x0006fc3c) main_cset6_slider_pane_g11

0xd053,	// (0x0006fc48) main_cset6_slider_pane_g12_ParamLimits

0xd053,	// (0x0006fc48) main_cset6_slider_pane_g12

0xd05f,	// (0x0006fc54) main_cset6_slider_pane_g13_ParamLimits

0xd05f,	// (0x0006fc54) main_cset6_slider_pane_g13

0xd06b,	// (0x0006fc60) main_cset6_slider_pane_g14_ParamLimits

0xd06b,	// (0x0006fc60) main_cset6_slider_pane_g14

0xd077,	// (0x0006fc6c) main_cset6_slider_pane_g15_ParamLimits

0xd077,	// (0x0006fc6c) main_cset6_slider_pane_g15

0xd08f,	// (0x0006fc84) main_cset6_slider_pane_g16_ParamLimits

0xd08f,	// (0x0006fc84) main_cset6_slider_pane_g16

0xd09b,	// (0x0006fc90) main_cset6_slider_pane_g17_ParamLimits

0xd09b,	// (0x0006fc90) main_cset6_slider_pane_g17

0x0011,

0xfb0d,	// (0x00072702) main_cset6_slider_pane_g_ParamLimits

0xfb0d,	// (0x00072702) main_cset6_slider_pane_g

0x2b83,	// (0x00065778) main_cset6_slider_pane_t1_ParamLimits

0x2b83,	// (0x00065778) main_cset6_slider_pane_t1

0xd0bf,	// (0x0006fcb4) main_cset6_slider_pane_t2_ParamLimits

0xd0bf,	// (0x0006fcb4) main_cset6_slider_pane_t2

0xd0ea,	// (0x0006fcdf) main_cset6_slider_pane_t3_ParamLimits

0xd0ea,	// (0x0006fcdf) main_cset6_slider_pane_t3

0xd115,	// (0x0006fd0a) main_cset6_slider_pane_t4_ParamLimits

0xd115,	// (0x0006fd0a) main_cset6_slider_pane_t4

0xd140,	// (0x0006fd35) main_cset6_slider_pane_t5_ParamLimits

0xd140,	// (0x0006fd35) main_cset6_slider_pane_t5

0x2bc4,	// (0x000657b9) main_cset6_slider_pane_t7_ParamLimits

0x2bc4,	// (0x000657b9) main_cset6_slider_pane_t7

0xd16b,	// (0x0006fd60) main_cset6_slider_pane_t8_ParamLimits

0xd16b,	// (0x0006fd60) main_cset6_slider_pane_t8

0xd18f,	// (0x0006fd84) main_cset6_slider_pane_t9_ParamLimits

0xd18f,	// (0x0006fd84) main_cset6_slider_pane_t9

0xd1b3,	// (0x0006fda8) main_cset6_slider_pane_t10_ParamLimits

0xd1b3,	// (0x0006fda8) main_cset6_slider_pane_t10

0xd1d7,	// (0x0006fdcc) main_cset6_slider_pane_t11_ParamLimits

0xd1d7,	// (0x0006fdcc) main_cset6_slider_pane_t11

0x2bfa,	// (0x000657ef) main_cset6_slider_pane_t14_ParamLimits

0x2bfa,	// (0x000657ef) main_cset6_slider_pane_t14

0x2c33,	// (0x00065828) main_cset6_slider_pane_t15_ParamLimits

0x2c33,	// (0x00065828) main_cset6_slider_pane_t15

0x000b,

0xfb32,	// (0x00072727) main_cset6_slider_pane_t_ParamLimits

0xfb32,	// (0x00072727) main_cset6_slider_pane_t

0x2c6c,	// (0x00065861) cset_slider_pane_g1_copy1

0x2c75,	// (0x0006586a) cset_slider_pane_g2_copy1

0x2c7e,	// (0x00065873) cset_slider_pane_g3_copy1

0x0256,	// (0x00062e4b) bg_popup_sub_pane_cp011_copy1

0x2c90,	// (0x00065885) main_cset_text_pane_g1_copy1

0x246a,	// (0x0006505f) main_cset_text_pane_t1_copy1

0x2478,	// (0x0006506d) main_cset_text_pane_t2_copy1

0x2486,	// (0x0006507b) main_cset_text_pane_t3_copy1

0x2494,	// (0x00065089) main_cset_text_pane_t4_copy1

0x24a2,	// (0x00065097) main_cset_text_pane_t5_copy1

0x2c98,	// (0x0006588d) main_cset_text_pane_t6_copy1

0x2ca6,	// (0x0006589b) main_cset_text_pane_t7_copy1

0xd1fb,	// (0x0006fdf0) main_cset_text2_pane_t1_copy1

0x09b0,	// (0x000635a5) main_ncimui_pane

0xa1e5,	// (0x0006cdda) popup_query_ncimui_window_ParamLimits

0xa1e5,	// (0x0006cdda) popup_query_ncimui_window

0xa7c4,	// (0x0006d3b9) field_cale_ev2_pane_g4_ParamLimits

0xa7c4,	// (0x0006d3b9) field_cale_ev2_pane_g4

0xb3a2,	// (0x0006df97) cell_video_dialer_keypad_pane_g2_ParamLimits

0xb3a2,	// (0x0006df97) cell_video_dialer_keypad_pane_g2

0x0001,

0xf81d,	// (0x00072412) cell_video_dialer_keypad_pane_g_ParamLimits

0xf81d,	// (0x00072412) cell_video_dialer_keypad_pane_g

0xb3ba,	// (0x0006dfaf) cell_video_dialer_keypad_pane_t1

0x0256,	// (0x00062e4b) bg_popup_window_pane_cp012

0x4dd4,	// (0x000679c9) heading_pane_cp06

0x2cd2,	// (0x000658c7) ncim_query_content_pane

0x0256,	// (0x00062e4b) bg_popup_heading_pane_cp01

0x2cda,	// (0x000658cf) ncim_heading_pane_t1

0x2ce8,	// (0x000658dd) ncim_indicator_popup_pane

0x2cfa,	// (0x000658ef) ncim_query_button_pane

0x2d10,	// (0x00065905) ncim_query_content_pane_t1

0x2d22,	// (0x00065917) ncim_query_content_pane_t2

0x0005,

0xfb76,	// (0x0007276b) ncim_query_content_pane_t

0x2d5c,	// (0x00065951) ncim_query_list_pane

0x2d6e,	// (0x00065963) ncim_query_popup_pane

0x2ce8,	// (0x000658dd) ncim_indicator_popup_pane_ParamLimits

0xd357,	// (0x0006ff4c) ncim_query_content_pane_g1_ParamLimits

0xd357,	// (0x0006ff4c) ncim_query_content_pane_g1

0x2d10,	// (0x00065905) ncim_query_content_pane_t1_ParamLimits

0x2d22,	// (0x00065917) ncim_query_content_pane_t2_ParamLimits

0xd363,	// (0x0006ff58) ncim_query_content_pane_t3_ParamLimits

0xd363,	// (0x0006ff58) ncim_query_content_pane_t3

0xd380,	// (0x0006ff75) ncim_query_content_pane_t4_ParamLimits

0xd380,	// (0x0006ff75) ncim_query_content_pane_t4

0xd39d,	// (0x0006ff92) ncim_query_content_pane_t5_ParamLimits

0xd39d,	// (0x0006ff92) ncim_query_content_pane_t5

0x2d34,	// (0x00065929) ncim_query_content_pane_t6_ParamLimits

0x2d34,	// (0x00065929) ncim_query_content_pane_t6

0xfb76,	// (0x0007276b) ncim_query_content_pane_t_ParamLimits

0x2d5c,	// (0x00065951) ncim_query_list_pane_ParamLimits

0x2d6e,	// (0x00065963) ncim_query_popup_pane_ParamLimits

0x2d82,	// (0x00065977) wait_bar_pane_cp04

0x0256,	// (0x00062e4b) input_focus_pane_cp011

0x2d8a,	// (0x0006597f) ncim_query_popup_pane_t1

0x2d98,	// (0x0006598d) ncim_list_query_list_pane_ParamLimits

0x2d98,	// (0x0006598d) ncim_list_query_list_pane

0x0256,	// (0x00062e4b) bg_button_pane_cp027

0x2dab,	// (0x000659a0) ncim_query_button_pane_g1

0x0256,	// (0x00062e4b) list_highlight_pane_cp012

0x2db5,	// (0x000659aa) ncim_list_query_list_pane_g1

0x2dbd,	// (0x000659b2) ncim_list_query_list_pane_t1

0xbb41,	// (0x0006e736) cam4_indicators_pane_g3_ParamLimits

0xbb41,	// (0x0006e736) cam4_indicators_pane_g3

0xbc4d,	// (0x0006e842) vid4_indicators_pane_g5_ParamLimits

0xbc4d,	// (0x0006e842) vid4_indicators_pane_g5

0xca93,	// (0x0006f688) vid4_progress_pane_g5_ParamLimits

0xca93,	// (0x0006f688) vid4_progress_pane_g5

0xd22d,	// (0x0006fe22) main_ncimui_pane_g1

0xd299,	// (0x0006fe8e) ncimui_group_query_pane_ParamLimits

0xd299,	// (0x0006fe8e) ncimui_group_query_pane

0xd2f3,	// (0x0006fee8) ncimui_list_pane_ParamLimits

0xd2f3,	// (0x0006fee8) ncimui_list_pane

0xd31a,	// (0x0006ff0f) ncimui_text_pane_ParamLimits

0xd31a,	// (0x0006ff0f) ncimui_text_pane

0xd3ba,	// (0x0006ffaf) ncimui_text_pane_t1_ParamLimits

0xd3ba,	// (0x0006ffaf) ncimui_text_pane_t1

0x2dcb,	// (0x000659c0) ncimui_list_single_graphic_pane_ParamLimits

0x2dcb,	// (0x000659c0) ncimui_list_single_graphic_pane

0xd3d9,	// (0x0006ffce) ncimui_query_pane_ParamLimits

0xd3d9,	// (0x0006ffce) ncimui_query_pane

0x0256,	// (0x00062e4b) list_highlight_pane_cp013

0x2ddb,	// (0x000659d0) ncim_list_query_list_pane_t1_copy1

0x2db5,	// (0x000659aa) ncim_list_single_graphic_pane_g1

0xd3ec,	// (0x0006ffe1) ncim_query_button_pane_cp01

0xd3f8,	// (0x0006ffed) ncim_query_entry_pane_ParamLimits

0xd3f8,	// (0x0006ffed) ncim_query_entry_pane

0xd40b,	// (0x00070000) ncimui_query_pane_g1

0xd417,	// (0x0007000c) ncimui_query_pane_t1_ParamLimits

0xd417,	// (0x0007000c) ncimui_query_pane_t1

0x09b0,	// (0x000635a5) input_focus_pane_cp012

0x2de9,	// (0x000659de) ncim_query_entry_pane_t1

0x0aab,	// (0x000636a0) main_im_pane_ParamLimits

0x09b0,	// (0x000635a5) main_mobtv_pane_ParamLimits

0x09b0,	// (0x000635a5) main_mobtv_pane

0xd0a7,	// (0x0006fc9c) main_cset6_slider_pane_g18_ParamLimits

0xd0a7,	// (0x0006fc9c) main_cset6_slider_pane_g18

0xd0b3,	// (0x0006fca8) main_cset6_slider_pane_g19_ParamLimits

0xd0b3,	// (0x0006fca8) main_cset6_slider_pane_g19

0x177a,	// (0x0006436f) bg_main_mobtv_pane_ParamLimits

0x177a,	// (0x0006436f) bg_main_mobtv_pane

0xd430,	// (0x00070025) main_mobtv_info_pane

0xd43b,	// (0x00070030) main_mobtv_loading_pane_ParamLimits

0xd43b,	// (0x00070030) main_mobtv_loading_pane

0x2dfb,	// (0x000659f0) main_mobtv_pg_channel_list_pane

0x2e05,	// (0x000659fa) main_mobtv_pg_hdr_pane

0xd448,	// (0x0007003d) main_mobtv_programe_curr_pane_ParamLimits

0xd448,	// (0x0007003d) main_mobtv_programe_curr_pane

0xd455,	// (0x0007004a) main_mobtv_programe_next_pane_ParamLimits

0xd455,	// (0x0007004a) main_mobtv_programe_next_pane

0x2e0e,	// (0x00065a03) popup_mobtv_noti_window

0x0d13,	// (0x00063908) main_tv_pg_hdr_pane_g1

0x2e18,	// (0x00065a0d) main_tv_pg_hdr_pane_g2

0x2e20,	// (0x00065a15) main_tv_pg_hdr_pane_g3

0x2e28,	// (0x00065a1d) main_tv_pg_hdr_pane_g4

0x2e30,	// (0x00065a25) main_tv_pg_hdr_pane_g5

0x2e3a,	// (0x00065a2f) main_tv_pg_hdr_pane_g6

0x2e44,	// (0x00065a39) main_tv_pg_hdr_pane_g7

0x2e4e,	// (0x00065a43) main_tv_pg_hdr_pane_g8

0x2e58,	// (0x00065a4d) main_tv_pg_hdr_pane_g9

0x2e62,	// (0x00065a57) main_tv_pg_hdr_pane_g10

0x2e6c,	// (0x00065a61) main_tv_pg_hdr_pane_g11

0x000a,

0xfb83,	// (0x00072778) main_tv_pg_hdr_pane_g

0x2e76,	// (0x00065a6b) main_tv_pg_hdr_pane_t1

0x2e84,	// (0x00065a79) main_tv_pg_hdr_pane_t2

0x2e92,	// (0x00065a87) main_tv_pg_hdr_pane_t3

0x2ea2,	// (0x00065a97) main_tv_pg_hdr_pane_t4

0x2eb2,	// (0x00065aa7) main_tv_pg_hdr_pane_t5

0x0004,

0xfb9a,	// (0x0007278f) main_tv_pg_hdr_pane_t

0x2ec2,	// (0x00065ab7) single_mobtv_pg_channel_pane_ParamLimits

0x2ec2,	// (0x00065ab7) single_mobtv_pg_channel_pane

0x2ed4,	// (0x00065ac9) single_mobtv_pg_channel_table_pane

0x2edd,	// (0x00065ad2) single_mobtv_pg_channel_thumb_pane

0x2ee6,	// (0x00065adb) single_tv_pg_channel_pane_g1

0x2eef,	// (0x00065ae4) single_tv_pg_channel_pane_g2

0x0001,

0xfba5,	// (0x0007279a) single_tv_pg_channel_pane_g

0x0a17,	// (0x0006360c) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x0a17,	// (0x0006360c) bg_single_mobtv_pg_channel_thumb_pane

0x2ef8,	// (0x00065aed) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x2ef8,	// (0x00065aed) single_mobtv_pg_channel_thumb_pane_g1

0x2f06,	// (0x00065afb) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x2f06,	// (0x00065afb) single_mobtv_pg_channel_thumb_pane_g2

0x2f12,	// (0x00065b07) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x2f12,	// (0x00065b07) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfbaa,	// (0x0007279f) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfbaa,	// (0x0007279f) single_mobtv_pg_channel_thumb_pane_g

0x2f1e,	// (0x00065b13) single_mobtv_pg_channel_thumb_pane_t1

0x2f2c,	// (0x00065b21) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfbb1,	// (0x000727a6) single_mobtv_pg_channel_thumb_pane_t

0x0d13,	// (0x00063908) bg_single_mobtv_pg_channel_table_pane_g1

0x0d13,	// (0x00063908) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf3dd,	// (0x00071fd2) bg_single_mobtv_pg_channel_table_pane_g

0x2f3a,	// (0x00065b2f) single_mobtv_pg_channel_table_pane_t1

0x2f48,	// (0x00065b3d) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfbb6,	// (0x000727ab) single_mobtv_pg_channel_table_pane_t

0xd46a,	// (0x0007005f) main_mobtv_info_pane_g1_ParamLimits

0xd46a,	// (0x0007005f) main_mobtv_info_pane_g1

0xd486,	// (0x0007007b) main_mobtv_info_pane_t1_ParamLimits

0xd486,	// (0x0007007b) main_mobtv_info_pane_t1

0xd4fe,	// (0x000700f3) main_mobtv_info_pane_t2_ParamLimits

0xd4fe,	// (0x000700f3) main_mobtv_info_pane_t2

0x0002,

0xfbc0,	// (0x000727b5) main_mobtv_info_pane_t_ParamLimits

0xfbc0,	// (0x000727b5) main_mobtv_info_pane_t

0xd58f,	// (0x00070184) wait_bar_pane_cp05

0xd5a1,	// (0x00070196) main_mobtv_loading_pane_g1_ParamLimits

0xd5a1,	// (0x00070196) main_mobtv_loading_pane_g1

0xd5ad,	// (0x000701a2) main_mobtv_loading_pane_g2_ParamLimits

0xd5ad,	// (0x000701a2) main_mobtv_loading_pane_g2

0xd5b9,	// (0x000701ae) main_mobtv_loading_pane_g3_ParamLimits

0xd5b9,	// (0x000701ae) main_mobtv_loading_pane_g3

0x0002,

0xfbc7,	// (0x000727bc) main_mobtv_loading_pane_g_ParamLimits

0xfbc7,	// (0x000727bc) main_mobtv_loading_pane_g

0x2f56,	// (0x00065b4b) main_mobtv_loading_pane_t1_ParamLimits

0x2f56,	// (0x00065b4b) main_mobtv_loading_pane_t1

0x2f6e,	// (0x00065b63) main_mobtv_loading_pane_t2_ParamLimits

0x2f6e,	// (0x00065b63) main_mobtv_loading_pane_t2

0x0001,

0xfbce,	// (0x000727c3) main_mobtv_loading_pane_t_ParamLimits

0xfbce,	// (0x000727c3) main_mobtv_loading_pane_t

0xd5c7,	// (0x000701bc) wait_bar_pane_cp06_ParamLimits

0xd5c7,	// (0x000701bc) wait_bar_pane_cp06

0x2f92,	// (0x00065b87) main_mobtv_programe_curr_pane_t1

0x2fa0,	// (0x00065b95) main_mobtv_programe_curr_pane_t2

0x0001,

0xfbd3,	// (0x000727c8) main_mobtv_programe_curr_pane_t

0x2fae,	// (0x00065ba3) main_mobtv_programe_next_pane_t1

0x2fbc,	// (0x00065bb1) main_mobtv_programe_next_pane_t2

0x2fca,	// (0x00065bbf) main_mobtv_programe_next_pane_t3

0x0002,

0xfbd8,	// (0x000727cd) main_mobtv_programe_next_pane_t

0x0256,	// (0x00062e4b) bg_popup_mobtv_noti_window_pane

0x2fd8,	// (0x00065bcd) popup_mobtv_noti_window_g1

0x2fe0,	// (0x00065bd5) popup_mobtv_noti_window_t1

0x2fee,	// (0x00065be3) popup_mobtv_noti_window_t2

0x0001,

0xfbdf,	// (0x000727d4) popup_mobtv_noti_window_t

0x0d13,	// (0x00063908) bg_popup_mobtv_noti_window_pane_g1

0x0256,	// (0x00062e4b) sc_clock_pane

0x0256,	// (0x00062e4b) main_fs_bigclock_pane

0xcc62,	// (0x0006f857) blid2_tripm_pane_t4_ParamLimits

0xcc62,	// (0x0006f857) blid2_tripm_pane_t4

0xd5d3,	// (0x000701c8) sc_clock_pane_g1_ParamLimits

0xd5d3,	// (0x000701c8) sc_clock_pane_g1

0xd5e1,	// (0x000701d6) sc_clock_pane_t1_ParamLimits

0xd5e1,	// (0x000701d6) sc_clock_pane_t1

0xd5f6,	// (0x000701eb) sc_clock_pane_t2_ParamLimits

0xd5f6,	// (0x000701eb) sc_clock_pane_t2

0xd608,	// (0x000701fd) sc_clock_pane_t3_ParamLimits

0xd608,	// (0x000701fd) sc_clock_pane_t3

0x0004,

0xfbe4,	// (0x000727d9) sc_clock_pane_t_ParamLimits

0xfbe4,	// (0x000727d9) sc_clock_pane_t

0xe052,	// (0x00070c47) main_fs_bigclock_indicator_pane_ParamLimits

0xe052,	// (0x00070c47) main_fs_bigclock_indicator_pane

0xd697,	// (0x0007028c) main_fs_bigclock_pane_g1_ParamLimits

0xd697,	// (0x0007028c) main_fs_bigclock_pane_g1

0xe05e,	// (0x00070c53) main_fs_bigclock_pane_t1_ParamLimits

0xe05e,	// (0x00070c53) main_fs_bigclock_pane_t1

0xe070,	// (0x00070c65) main_fs_bigclock_pane_t2_ParamLimits

0xe070,	// (0x00070c65) main_fs_bigclock_pane_t2

0xe084,	// (0x00070c79) main_fs_bigclock_pane_t3_ParamLimits

0xe084,	// (0x00070c79) main_fs_bigclock_pane_t3

0x0002,

0xfd75,	// (0x0007296a) main_fs_bigclock_pane_t_ParamLimits

0xfd75,	// (0x0007296a) main_fs_bigclock_pane_t

0x3a87,	// (0x0006667c) main_fs_bigclock_indicator_pane_g1

0x2d02,	// (0x000658f7) ncim_query_content_pane_g2_ParamLimits

0x2d02,	// (0x000658f7) ncim_query_content_pane_g2

0x0001,

0xfb71,	// (0x00072766) ncim_query_content_pane_g_ParamLimits

0xfb71,	// (0x00072766) ncim_query_content_pane_g

0xd61a,	// (0x0007020f) sc_clock_pane_t4_ParamLimits

0xd61a,	// (0x0007020f) sc_clock_pane_t4

0x09b0,	// (0x000635a5) main_radioblah_pane

0xb9e5,	// (0x0006e5da) cell_call4_button_pane_t1_copy1_ParamLimits

0xb9e5,	// (0x0006e5da) cell_call4_button_pane_t1_copy1

0xd249,	// (0x0006fe3e) main_ncimui_pane_t1_ParamLimits

0xd249,	// (0x0006fe3e) main_ncimui_pane_t1

0xd263,	// (0x0006fe58) main_ncimui_pane_t2_ParamLimits

0xd263,	// (0x0006fe58) main_ncimui_pane_t2

0x0002,

0xfb6a,	// (0x0007275f) main_ncimui_pane_t_ParamLimits

0xfb6a,	// (0x0007275f) main_ncimui_pane_t

0x2ffc,	// (0x00065bf1) main_radioblah_anim_pane_ParamLimits

0x2ffc,	// (0x00065bf1) main_radioblah_anim_pane

0x300d,	// (0x00065c02) main_radioblah_info_pane_ParamLimits

0x300d,	// (0x00065c02) main_radioblah_info_pane

0x3021,	// (0x00065c16) main_radioblah_pane_t1_ParamLimits

0x3021,	// (0x00065c16) main_radioblah_pane_t1

0x303d,	// (0x00065c32) main_radioblah_pane_t2_ParamLimits

0x303d,	// (0x00065c32) main_radioblah_pane_t2

0x0003,

0xfc05,	// (0x000727fa) main_radioblah_pane_t_ParamLimits

0xfc05,	// (0x000727fa) main_radioblah_pane_t

0xd836,	// (0x0007042b) main_radioblah_rocker_ctrl_pane_ParamLimits

0xd836,	// (0x0007042b) main_radioblah_rocker_ctrl_pane

0x3085,	// (0x00065c7a) main_radioblah_info_pane_t1_ParamLimits

0x3085,	// (0x00065c7a) main_radioblah_info_pane_t1

0xd87f,	// (0x00070474) main_radioblah_info_pane_t2_ParamLimits

0xd87f,	// (0x00070474) main_radioblah_info_pane_t2

0x0003,

0xfc0e,	// (0x00072803) main_radioblah_info_pane_t_ParamLimits

0xfc0e,	// (0x00072803) main_radioblah_info_pane_t

0x0d13,	// (0x00063908) main_radioblah_rocker_ctrl_pane_g1

0xd92f,	// (0x00070524) main_radioblah_rocker_ctrl_pane_g2

0xd937,	// (0x0007052c) main_radioblah_rocker_ctrl_pane_g3

0xd93f,	// (0x00070534) main_radioblah_rocker_ctrl_pane_g4

0xd947,	// (0x0007053c) main_radioblah_rocker_ctrl_pane_g5

0xd94f,	// (0x00070544) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc17,	// (0x0007280c) main_radioblah_rocker_ctrl_pane_g

0xd1fb,	// (0x0006fdf0) main_cset_text2_pane_t1_copy1_ParamLimits

0xba6e,	// (0x0006e663) cam4_image_uncrop_qvga_pane

0xbbb3,	// (0x0006e7a8) vid4_image_uncrop_qcif_pane

0xcdf4,	// (0x0006f9e9) cam6_image_uncrop_qvga_pane_ParamLimits

0xcdf4,	// (0x0006f9e9) cam6_image_uncrop_qvga_pane

0x29e1,	// (0x000655d6) vid6_image_uncrop_qcif_pane_ParamLimits

0x29e1,	// (0x000655d6) vid6_image_uncrop_qcif_pane

0x0256,	// (0x00062e4b) bg_popup_preview_window_pane_cp03

0x2cb4,	// (0x000658a9) list_cset_text2_pane

0x2cbc,	// (0x000658b1) main_cset6_text2_pane_g1

0x2cc4,	// (0x000658b9) main_cset6_text2_pane_t1

0xd957,	// (0x0007054c) list_cset_text2_pane_t1_ParamLimits

0xd957,	// (0x0007054c) list_cset_text2_pane_t1

0x09b0,	// (0x000635a5) main_radioblah_pane_ParamLimits

0xd57b,	// (0x00070170) main_mobtv_info_pane_t3_ParamLimits

0xd57b,	// (0x00070170) main_mobtv_info_pane_t3

0xd824,	// (0x00070419) main_radioblah_pane_g1

0xd84f,	// (0x00070444) main_radioblah_info_pane_g1

0xd8d4,	// (0x000704c9) main_radioblah_info_pane_t3_ParamLimits

0xd8d4,	// (0x000704c9) main_radioblah_info_pane_t3

0x9142,	// (0x0006bd37) highlight_cell_cale_month_pane_ParamLimits

0x9142,	// (0x0006bd37) highlight_cell_cale_month_pane

0x0256,	// (0x00062e4b) main_phob_fisheye_pane

0x5586,	// (0x0006817b) scroll_pane_cp0031_ParamLimits

0x5586,	// (0x0006817b) scroll_pane_cp0031

0x2af3,	// (0x000656e8) wait_bar_pane_cp08_ParamLimits

0xcfc7,	// (0x0006fbbc) cset_list_set_pane_copy1_ParamLimits

0x30d9,	// (0x00065cce) highlight_cell_cale_month_pane_g1

0xd96e,	// (0x00070563) highlight_cell_cale_month_pane_t1

0x273e,	// (0x00065333) list_gen_pane_cp01

0x2305,	// (0x00064efa) scroll_pane_01

0xd97c,	// (0x00070571) list_single_double_fisheye_pane

0x69bb,	// (0x000695b0) list_double_fisheye_pane_g1_ParamLimits

0x69bb,	// (0x000695b0) list_double_fisheye_pane_g1

0x69c7,	// (0x000695bc) list_double_fisheye_pane_g2_ParamLimits

0x69c7,	// (0x000695bc) list_double_fisheye_pane_g2

0xd985,	// (0x0007057a) list_double_fisheye_pane_g3_ParamLimits

0xd985,	// (0x0007057a) list_double_fisheye_pane_g3

0x0004,

0xfc24,	// (0x00072819) list_double_fisheye_pane_g_ParamLimits

0xfc24,	// (0x00072819) list_double_fisheye_pane_g

0x69f8,	// (0x000695ed) list_double_fisheye_pane_t1_ParamLimits

0x69f8,	// (0x000695ed) list_double_fisheye_pane_t1

0x6a13,	// (0x00069608) list_double_fisheye_pane_t2_ParamLimits

0x6a13,	// (0x00069608) list_double_fisheye_pane_t2

0x0001,

0xfc2f,	// (0x00072824) list_double_fisheye_pane_t_ParamLimits

0xfc2f,	// (0x00072824) list_double_fisheye_pane_t

0x0256,	// (0x00062e4b) main_call5_pane

0xd640,	// (0x00070235) sc_swipe_pane_ParamLimits

0xd640,	// (0x00070235) sc_swipe_pane

0xd99d,	// (0x00070592) call5_image_pane_ParamLimits

0xd99d,	// (0x00070592) call5_image_pane

0xd9af,	// (0x000705a4) call5_swipe_1_pane_ParamLimits

0xd9af,	// (0x000705a4) call5_swipe_1_pane

0xd9bb,	// (0x000705b0) call5_swipe_2_pane_ParamLimits

0xd9bb,	// (0x000705b0) call5_swipe_2_pane

0xd9d5,	// (0x000705ca) popup_call5_audio_first_window_ParamLimits

0xd9d5,	// (0x000705ca) popup_call5_audio_first_window

0x0a17,	// (0x0006360c) call5_swipe_1_pane_g1_ParamLimits

0x0a17,	// (0x0006360c) call5_swipe_1_pane_g1

0x30e1,	// (0x00065cd6) call5_swipe_1_pane_g2_ParamLimits

0x30e1,	// (0x00065cd6) call5_swipe_1_pane_g2

0x0001,

0xfc34,	// (0x00072829) call5_swipe_1_pane_g_ParamLimits

0xfc34,	// (0x00072829) call5_swipe_1_pane_g

0x30ed,	// (0x00065ce2) call5_swipe_1_pane_t1_ParamLimits

0x30ed,	// (0x00065ce2) call5_swipe_1_pane_t1

0x0a17,	// (0x0006360c) call5_swipe_2_pane_g1_ParamLimits

0x0a17,	// (0x0006360c) call5_swipe_2_pane_g1

0x3102,	// (0x00065cf7) call5_swipe_2_pane_g2_ParamLimits

0x3102,	// (0x00065cf7) call5_swipe_2_pane_g2

0x0001,

0xfc39,	// (0x0007282e) call5_swipe_2_pane_g_ParamLimits

0xfc39,	// (0x0007282e) call5_swipe_2_pane_g

0x310e,	// (0x00065d03) call5_swipe_2_pane_t1_ParamLimits

0x310e,	// (0x00065d03) call5_swipe_2_pane_t1

0x3123,	// (0x00065d18) sc_swipe_pane_g1_ParamLimits

0x3123,	// (0x00065d18) sc_swipe_pane_g1

0x3130,	// (0x00065d25) sc_swipe_pane_g2_ParamLimits

0x3130,	// (0x00065d25) sc_swipe_pane_g2

0x0001,

0xfc3e,	// (0x00072833) sc_swipe_pane_g_ParamLimits

0xfc3e,	// (0x00072833) sc_swipe_pane_g

0x313c,	// (0x00065d31) sc_swipe_pane_t1_ParamLimits

0x313c,	// (0x00065d31) sc_swipe_pane_t1

0x0256,	// (0x00062e4b) main_cmail_launcher_pane

0xd9e5,	// (0x000705da) aid_size_cell_cmail_l_ParamLimits

0xd9e5,	// (0x000705da) aid_size_cell_cmail_l

0xd9f3,	// (0x000705e8) grid_cmail_l_pane_ParamLimits

0xd9f3,	// (0x000705e8) grid_cmail_l_pane

0xda03,	// (0x000705f8) cell_cmail_l_pane_ParamLimits

0xda03,	// (0x000705f8) cell_cmail_l_pane

0x3151,	// (0x00065d46) cell_cmail_l_pane_g1_ParamLimits

0x3151,	// (0x00065d46) cell_cmail_l_pane_g1

0x315d,	// (0x00065d52) cell_cmail_l_pane_t1_ParamLimits

0x315d,	// (0x00065d52) cell_cmail_l_pane_t1

0x3173,	// (0x00065d68) cell_cmail_l_pane_t2_ParamLimits

0x3173,	// (0x00065d68) cell_cmail_l_pane_t2

0x0001,

0xfc43,	// (0x00072838) cell_cmail_l_pane_t_ParamLimits

0xfc43,	// (0x00072838) cell_cmail_l_pane_t

0x09b0,	// (0x000635a5) grid_highlight_pane_cp018_ParamLimits

0x09b0,	// (0x000635a5) grid_highlight_pane_cp018

0x72d9,	// (0x00069ece) main2_pane_ParamLimits

0x72d9,	// (0x00069ece) main2_pane

0x0b67,	// (0x0006375c) popup_sp_fs_action_menu_bg_pane_g1

0x0b6f,	// (0x00063764) popup_sp_fs_action_menu_bg_pane_g2

0x0b77,	// (0x0006376c) popup_sp_fs_action_menu_bg_pane_g3

0x0b7f,	// (0x00063774) popup_sp_fs_action_menu_bg_pane_g4

0x0b87,	// (0x0006377c) popup_sp_fs_action_menu_bg_pane_g5

0x0b8f,	// (0x00063784) popup_sp_fs_action_menu_bg_pane_g6

0x0b97,	// (0x0006378c) popup_sp_fs_action_menu_bg_pane_g7

0x0b9f,	// (0x00063794) popup_sp_fs_action_menu_bg_pane_g8

0x0ba7,	// (0x0006379c) popup_sp_fs_action_menu_bg_pane_g9

0x0baf,	// (0x000637a4) popup_sp_fs_action_menu_bg_pane_g10

0x0baf,	// (0x000637a4) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf145,	// (0x00071d3a) popup_sp_fs_action_menu_bg_pane_g

0x0a17,	// (0x0006360c) list_medium_line_x2_t3_g3_g1_ParamLimits

0x0a17,	// (0x0006360c) list_medium_line_x2_t3_g3_g1

0x0a17,	// (0x0006360c) list_medium_line_x2_t3_g3_g2_ParamLimits

0x0a17,	// (0x0006360c) list_medium_line_x2_t3_g3_g2

0x0a17,	// (0x0006360c) list_medium_line_x2_t3_g3_g3_ParamLimits

0x0a17,	// (0x0006360c) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1f3,	// (0x00071de8) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1f3,	// (0x00071de8) list_medium_line_x2_t3_g3_g

0x0ce5,	// (0x000638da) list_medium_line_x2_t3_g3_t1_ParamLimits

0x0ce5,	// (0x000638da) list_medium_line_x2_t3_g3_t1

0x0ce5,	// (0x000638da) list_medium_line_x2_t3_g3_t2_ParamLimits

0x0ce5,	// (0x000638da) list_medium_line_x2_t3_g3_t2

0x0ce5,	// (0x000638da) list_medium_line_x2_t3_g3_t3_ParamLimits

0x0ce5,	// (0x000638da) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1fa,	// (0x00071def) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1fa,	// (0x00071def) list_medium_line_x2_t3_g3_t

0x0a17,	// (0x0006360c) list_medium_line_x2_t3_g2_g1_ParamLimits

0x0a17,	// (0x0006360c) list_medium_line_x2_t3_g2_g1

0x0a17,	// (0x0006360c) list_medium_line_x2_t3_g2_g2_ParamLimits

0x0a17,	// (0x0006360c) list_medium_line_x2_t3_g2_g2

0x0001,

0xf201,	// (0x00071df6) list_medium_line_x2_t3_g2_g_ParamLimits

0xf201,	// (0x00071df6) list_medium_line_x2_t3_g2_g

0x0ce5,	// (0x000638da) list_medium_line_x2_t3_g2_t1_ParamLimits

0x0ce5,	// (0x000638da) list_medium_line_x2_t3_g2_t1

0x0ce5,	// (0x000638da) list_medium_line_x2_t3_g2_t2_ParamLimits

0x0ce5,	// (0x000638da) list_medium_line_x2_t3_g2_t2

0x0ce5,	// (0x000638da) list_medium_line_x2_t3_g2_t3_ParamLimits

0x0ce5,	// (0x000638da) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1fa,	// (0x00071def) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1fa,	// (0x00071def) list_medium_line_x2_t3_g2_t

0x0a17,	// (0x0006360c) list_medium_line_x2_t4_g4_g1_ParamLimits

0x0a17,	// (0x0006360c) list_medium_line_x2_t4_g4_g1

0x0a17,	// (0x0006360c) list_medium_line_x2_t4_g4_g2_ParamLimits

0x0a17,	// (0x0006360c) list_medium_line_x2_t4_g4_g2

0x0a17,	// (0x0006360c) list_medium_line_x2_t4_g4_g3_ParamLimits

0x0a17,	// (0x0006360c) list_medium_line_x2_t4_g4_g3

0x0a17,	// (0x0006360c) list_medium_line_x2_t4_g4_g4_ParamLimits

0x0a17,	// (0x0006360c) list_medium_line_x2_t4_g4_g4

0x0003,

0xf206,	// (0x00071dfb) list_medium_line_x2_t4_g4_g_ParamLimits

0xf206,	// (0x00071dfb) list_medium_line_x2_t4_g4_g

0x0ce5,	// (0x000638da) list_medium_line_x2_t4_g4_t1_ParamLimits

0x0ce5,	// (0x000638da) list_medium_line_x2_t4_g4_t1

0x0ce5,	// (0x000638da) list_medium_line_x2_t4_g4_t2_ParamLimits

0x0ce5,	// (0x000638da) list_medium_line_x2_t4_g4_t2

0x0ce5,	// (0x000638da) list_medium_line_x2_t4_g4_t3_ParamLimits

0x0ce5,	// (0x000638da) list_medium_line_x2_t4_g4_t3

0x0ce5,	// (0x000638da) list_medium_line_x2_t4_g4_t4_ParamLimits

0x0ce5,	// (0x000638da) list_medium_line_x2_t4_g4_t4

0x0003,

0xf20f,	// (0x00071e04) list_medium_line_x2_t4_g4_t_ParamLimits

0xf20f,	// (0x00071e04) list_medium_line_x2_t4_g4_t

0x0a17,	// (0x0006360c) list_medium_line_x2_t2_g4_g1_ParamLimits

0x0a17,	// (0x0006360c) list_medium_line_x2_t2_g4_g1

0x0a17,	// (0x0006360c) list_medium_line_x2_t2_g4_g2_ParamLimits

0x0a17,	// (0x0006360c) list_medium_line_x2_t2_g4_g2

0x0a17,	// (0x0006360c) list_medium_line_x2_t2_g4_g3_ParamLimits

0x0a17,	// (0x0006360c) list_medium_line_x2_t2_g4_g3

0x0a17,	// (0x0006360c) list_medium_line_x2_t2_g4_g4_ParamLimits

0x0a17,	// (0x0006360c) list_medium_line_x2_t2_g4_g4

0x0003,

0xf206,	// (0x00071dfb) list_medium_line_x2_t2_g4_g_ParamLimits

0xf206,	// (0x00071dfb) list_medium_line_x2_t2_g4_g

0x0ce5,	// (0x000638da) list_medium_line_x2_t2_g4_t1_ParamLimits

0x0ce5,	// (0x000638da) list_medium_line_x2_t2_g4_t1

0x0ce5,	// (0x000638da) list_medium_line_x2_t2_g4_t2_ParamLimits

0x0ce5,	// (0x000638da) list_medium_line_x2_t2_g4_t2

0x0001,

0xf276,	// (0x00071e6b) list_medium_line_x2_t2_g4_t_ParamLimits

0xf276,	// (0x00071e6b) list_medium_line_x2_t2_g4_t

0x0a17,	// (0x0006360c) list_medium_line_x2_t2_g3_g1_ParamLimits

0x0a17,	// (0x0006360c) list_medium_line_x2_t2_g3_g1

0x0a17,	// (0x0006360c) list_medium_line_x2_t2_g3_g2_ParamLimits

0x0a17,	// (0x0006360c) list_medium_line_x2_t2_g3_g2

0x0a17,	// (0x0006360c) list_medium_line_x2_t2_g3_g3_ParamLimits

0x0a17,	// (0x0006360c) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1f3,	// (0x00071de8) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1f3,	// (0x00071de8) list_medium_line_x2_t2_g3_g

0x0ce5,	// (0x000638da) list_medium_line_x2_t2_g3_t1_ParamLimits

0x0ce5,	// (0x000638da) list_medium_line_x2_t2_g3_t1

0x0ce5,	// (0x000638da) list_medium_line_x2_t2_g3_t2_ParamLimits

0x0ce5,	// (0x000638da) list_medium_line_x2_t2_g3_t2

0x0001,

0xf276,	// (0x00071e6b) list_medium_line_x2_t2_g3_t_ParamLimits

0xf276,	// (0x00071e6b) list_medium_line_x2_t2_g3_t

0x92eb,	// (0x0006bee0) main_sp_fs_list_pane_ParamLimits

0x92eb,	// (0x0006bee0) main_sp_fs_list_pane

0x92f7,	// (0x0006beec) sp_fs_scroll_pane_ParamLimits

0x92f7,	// (0x0006beec) sp_fs_scroll_pane

0x1279,	// (0x00063e6e) list_medium_line_x2_t3_t1

0x1279,	// (0x00063e6e) list_medium_line_x2_t3_t2

0x1279,	// (0x00063e6e) list_medium_line_x2_t3_t3

0x0002,

0xf2c1,	// (0x00071eb6) list_medium_line_x2_t3_t

0x1279,	// (0x00063e6e) list_medium_line_x3_t4_t1

0x1279,	// (0x00063e6e) list_medium_line_x3_t4_t2

0x1279,	// (0x00063e6e) list_medium_line_x3_t4_t3

0x1279,	// (0x00063e6e) list_medium_line_x3_t4_t4

0x0003,

0xf2c8,	// (0x00071ebd) list_medium_line_x3_t4_t

0x1279,	// (0x00063e6e) list_medium_line_x4_t5_t1

0x1279,	// (0x00063e6e) list_medium_line_x4_t5_t2

0x1279,	// (0x00063e6e) list_medium_line_x4_t5_t3

0x1279,	// (0x00063e6e) list_medium_line_x4_t5_t4

0x1279,	// (0x00063e6e) list_medium_line_x4_t5_t5

0x0004,

0xf2d1,	// (0x00071ec6) list_medium_line_x4_t5_t

0x0a17,	// (0x0006360c) list_medium_line_t4_g4_g1_ParamLimits

0x0a17,	// (0x0006360c) list_medium_line_t4_g4_g1

0x0a17,	// (0x0006360c) list_medium_line_t4_g4_g2_ParamLimits

0x0a17,	// (0x0006360c) list_medium_line_t4_g4_g2

0x0a17,	// (0x0006360c) list_medium_line_t4_g4_g3_ParamLimits

0x0a17,	// (0x0006360c) list_medium_line_t4_g4_g3

0x0a17,	// (0x0006360c) list_medium_line_t4_g4_g4_ParamLimits

0x0a17,	// (0x0006360c) list_medium_line_t4_g4_g4

0x0003,

0xf206,	// (0x00071dfb) list_medium_line_t4_g4_g_ParamLimits

0xf206,	// (0x00071dfb) list_medium_line_t4_g4_g

0x0ce5,	// (0x000638da) list_medium_line_t4_g4_t1_ParamLimits

0x0ce5,	// (0x000638da) list_medium_line_t4_g4_t1

0x0ce5,	// (0x000638da) list_medium_line_t4_g4_t2_ParamLimits

0x0ce5,	// (0x000638da) list_medium_line_t4_g4_t2

0x0ce5,	// (0x000638da) list_medium_line_t4_g4_t3_ParamLimits

0x0ce5,	// (0x000638da) list_medium_line_t4_g4_t3

0x0ce5,	// (0x000638da) list_medium_line_t4_g4_t4_ParamLimits

0x0ce5,	// (0x000638da) list_medium_line_t4_g4_t4

0x0003,

0xf20f,	// (0x00071e04) list_medium_line_t4_g4_t_ParamLimits

0xf20f,	// (0x00071e04) list_medium_line_t4_g4_t

0x93f0,	// (0x0006bfe5) chi_dic_find_pane_g1

0xa19a,	// (0x0006cd8f) main_tport_pane

0x1279,	// (0x00063e6e) list_medium_line_plain_t1

0x0a17,	// (0x0006360c) list_medium_line_t2_g2_g1_ParamLimits

0x0a17,	// (0x0006360c) list_medium_line_t2_g2_g1

0x0a17,	// (0x0006360c) list_medium_line_t2_g2_g2_ParamLimits

0x0a17,	// (0x0006360c) list_medium_line_t2_g2_g2

0x0001,

0xf201,	// (0x00071df6) list_medium_line_t2_g2_g_ParamLimits

0xf201,	// (0x00071df6) list_medium_line_t2_g2_g

0x0ce5,	// (0x000638da) list_medium_line_t2_g2_t1_ParamLimits

0x0ce5,	// (0x000638da) list_medium_line_t2_g2_t1

0x0ce5,	// (0x000638da) list_medium_line_t2_g2_t2_ParamLimits

0x0ce5,	// (0x000638da) list_medium_line_t2_g2_t2

0x0001,

0xf276,	// (0x00071e6b) list_medium_line_t2_g2_t_ParamLimits

0xf276,	// (0x00071e6b) list_medium_line_t2_g2_t

0x6955,	// (0x0006954a) aid_sp_fs_list_icon_a_sm

0xcaf9,	// (0x0006f6ee) aid_sp_fs_list_icon_d

0x3b26,	// (0x0006671b) aid_sp_fs_text_primary

0x695d,	// (0x00069552) aid_sp_fs_text_secondary

0x0256,	// (0x00062e4b) list_medium_line

0x0256,	// (0x00062e4b) list_medium_line_g2

0x0256,	// (0x00062e4b) list_medium_line_g3

0x0256,	// (0x00062e4b) list_medium_line_plain

0x0256,	// (0x00062e4b) list_medium_line_plain_t2

0x0256,	// (0x00062e4b) list_medium_line_plain_t3

0x0256,	// (0x00062e4b) list_medium_line_right_icon

0x0256,	// (0x00062e4b) list_medium_line_right_iconx2

0x0256,	// (0x00062e4b) list_medium_line_t2

0x0256,	// (0x00062e4b) list_medium_line_t2_g2

0x0256,	// (0x00062e4b) list_medium_line_t2_g3

0x0256,	// (0x00062e4b) list_medium_line_t2_right_icon

0x0256,	// (0x00062e4b) list_medium_line_t2_right_iconx2

0x0256,	// (0x00062e4b) list_medium_line_t3

0x0256,	// (0x00062e4b) list_medium_line_t3_g2

0x0256,	// (0x00062e4b) list_medium_line_t3_g3

0x0256,	// (0x00062e4b) list_medium_line_t3_right_iconx2

0x0256,	// (0x00062e4b) list_medium_line_t4_g4

0x0256,	// (0x00062e4b) list_medium_line_x2

0x0256,	// (0x00062e4b) list_medium_line_x2_t2_g2

0x0256,	// (0x00062e4b) list_medium_line_x2_t2_g3

0x0256,	// (0x00062e4b) list_medium_line_x2_t2_g4

0x0256,	// (0x00062e4b) list_medium_line_x2_t3

0x0256,	// (0x00062e4b) list_medium_line_x2_t3_g2

0x0256,	// (0x00062e4b) list_medium_line_x2_t3_g3

0x0256,	// (0x00062e4b) list_medium_line_x2_t3_g4

0x0256,	// (0x00062e4b) list_medium_line_x2_t4_g2

0x0256,	// (0x00062e4b) list_medium_line_x2_t4_g4

0x0256,	// (0x00062e4b) list_medium_line_x3

0x0256,	// (0x00062e4b) list_medium_line_x3_t4

0x0256,	// (0x00062e4b) list_medium_line_x3_t4_g4

0x0256,	// (0x00062e4b) list_medium_line_x4_t4

0x0256,	// (0x00062e4b) list_medium_line_x4_t4_g7

0x0256,	// (0x00062e4b) list_medium_line_x4_t5

0x6966,	// (0x0006955b) list_single_fs_dyc_pane_ParamLimits

0x6966,	// (0x0006955b) list_single_fs_dyc_pane

0x0a17,	// (0x0006360c) list_medium_line_x4_t4_g7_g1_ParamLimits

0x0a17,	// (0x0006360c) list_medium_line_x4_t4_g7_g1

0x0a17,	// (0x0006360c) list_medium_line_x4_t4_g7_g2_ParamLimits

0x0a17,	// (0x0006360c) list_medium_line_x4_t4_g7_g2

0x0a17,	// (0x0006360c) list_medium_line_x4_t4_g7_g3_ParamLimits

0x0a17,	// (0x0006360c) list_medium_line_x4_t4_g7_g3

0x0a17,	// (0x0006360c) list_medium_line_x4_t4_g7_g4_ParamLimits

0x0a17,	// (0x0006360c) list_medium_line_x4_t4_g7_g4

0x0a17,	// (0x0006360c) list_medium_line_x4_t4_g7_g5_ParamLimits

0x0a17,	// (0x0006360c) list_medium_line_x4_t4_g7_g5

0x0a17,	// (0x0006360c) list_medium_line_x4_t4_g7_g6_ParamLimits

0x0a17,	// (0x0006360c) list_medium_line_x4_t4_g7_g6

0x0a25,	// (0x0006361a) list_medium_line_x4_t4_g7_g7_ParamLimits

0x0a25,	// (0x0006361a) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb4b,	// (0x00072740) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb4b,	// (0x00072740) list_medium_line_x4_t4_g7_g

0x0ce5,	// (0x000638da) list_medium_line_x4_t4_g7_t1_ParamLimits

0x0ce5,	// (0x000638da) list_medium_line_x4_t4_g7_t1

0x0ce5,	// (0x000638da) list_medium_line_x4_t4_g7_t2_ParamLimits

0x0ce5,	// (0x000638da) list_medium_line_x4_t4_g7_t2

0x0ce5,	// (0x000638da) list_medium_line_x4_t4_g7_t3_ParamLimits

0x0ce5,	// (0x000638da) list_medium_line_x4_t4_g7_t3

0x179c,	// (0x00064391) list_medium_line_x4_t4_g7_t4_ParamLimits

0x179c,	// (0x00064391) list_medium_line_x4_t4_g7_t4

0x179c,	// (0x00064391) list_medium_line_x4_t4_g7_t5_ParamLimits

0x179c,	// (0x00064391) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb5a,	// (0x0007274f) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb5a,	// (0x0007274f) list_medium_line_x4_t4_g7_t

0x699e,	// (0x00069593) list_single_dyc_row_pane_ParamLimits

0x699e,	// (0x00069593) list_single_dyc_row_pane

0xd991,	// (0x00070586) call5_gesture_pane_ParamLimits

0xd991,	// (0x00070586) call5_gesture_pane

0xd9c7,	// (0x000705bc) call5_windows_pane_ParamLimits

0xd9c7,	// (0x000705bc) call5_windows_pane

0xda18,	// (0x0007060d) call5_swipe_1_pane_cp_ParamLimits

0xda18,	// (0x0007060d) call5_swipe_1_pane_cp

0xda24,	// (0x00070619) call5_swipe_2_pane_cp_ParamLimits

0xda24,	// (0x00070619) call5_swipe_2_pane_cp

0x0cbe,	// (0x000638b3) call5_image_pane_cp

0xda30,	// (0x00070625) popup_call5_audio_first_window_cp_ParamLimits

0xda30,	// (0x00070625) popup_call5_audio_first_window_cp

0x3123,	// (0x00065d18) call5_swipe_1_pane_g1_cp_ParamLimits

0x3123,	// (0x00065d18) call5_swipe_1_pane_g1_cp

0x3190,	// (0x00065d85) call5_swipe_1_pane_g2_cp

0x313c,	// (0x00065d31) call5_swipe_1_pane_t1_cp_ParamLimits

0x313c,	// (0x00065d31) call5_swipe_1_pane_t1_cp

0x3123,	// (0x00065d18) call5_swipe_2_pane_g1_cp_ParamLimits

0x3123,	// (0x00065d18) call5_swipe_2_pane_g1_cp

0x3198,	// (0x00065d8d) call5_swipe_2_pane_g2_cp

0x31a0,	// (0x00065d95) call5_swipe_2_pane_t1_cp_ParamLimits

0x31a0,	// (0x00065d95) call5_swipe_2_pane_t1_cp

0x09b0,	// (0x000635a5) main_sp_fs_email_pane

0x31b5,	// (0x00065daa) main_sp_fs_listscroll_pane_te

0xda3e,	// (0x00070633) popup_sp_fs_action_menu_pane_ParamLimits

0xda3e,	// (0x00070633) popup_sp_fs_action_menu_pane

0x0d13,	// (0x00063908) bg_sp_fs_ctrlbar_pane_g1

0x31be,	// (0x00065db3) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x31c7,	// (0x00065dbc) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x31d0,	// (0x00065dc5) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x0d13,	// (0x00063908) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc48,	// (0x0007283d) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x4561,	// (0x00067156) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x4561,	// (0x00067156) bg_sp_fs_ctrlbar_ddmenu_pane

0x31d9,	// (0x00065dce) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x31d9,	// (0x00065dce) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x31e5,	// (0x00065dda) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x31e5,	// (0x00065dda) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc51,	// (0x00072846) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc51,	// (0x00072846) main_sp_fs_ctrlbar_ddmenu_pane_g

0x31f1,	// (0x00065de6) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x31f1,	// (0x00065de6) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x0d13,	// (0x00063908) list_medium_line_t2_right_icon_g1

0x1279,	// (0x00063e6e) list_medium_line_t2_right_icon_t1

0x1279,	// (0x00063e6e) list_medium_line_t2_right_icon_t2

0x0001,

0xfc56,	// (0x0007284b) list_medium_line_t2_right_icon_t

0x17b0,	// (0x000643a5) bg_sp_fs_ctrlbar_pane_ParamLimits

0x17b0,	// (0x000643a5) bg_sp_fs_ctrlbar_pane

0xdadd,	// (0x000706d2) main_sp_fs_ctrlbar_button_pane_cp01

0xdae5,	// (0x000706da) main_sp_fs_ctrlbar_ddmenu_pane

0x3245,	// (0x00065e3a) main_sp_fs_ctrlbar_pane_g1

0x3251,	// (0x00065e46) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc5b,	// (0x00072850) main_sp_fs_ctrlbar_pane_g

0xdb23,	// (0x00070718) main_sp_fs_ctrlbar_pane_t1

0xdb60,	// (0x00070755) main_sp_fs_ctrlbar_pane

0xdb7a,	// (0x0007076f) main_sp_fs_listscroll_pane_te_cp01

0x6a35,	// (0x0006962a) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x6a35,	// (0x0006962a) popup_sp_fs_action_menu_pane_cp01

0x09b0,	// (0x000635a5) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x09b0,	// (0x000635a5) bg_sp_fs_highlight_list_pane_cp01

0x6a55,	// (0x0006964a) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x6a55,	// (0x0006964a) sp_fs_action_menu_list_gene_pane_g1

0x3287,	// (0x00065e7c) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x3287,	// (0x00065e7c) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc69,	// (0x0007285e) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc69,	// (0x0007285e) sp_fs_action_menu_list_gene_pane_g

0x6a64,	// (0x00069659) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x6a64,	// (0x00069659) sp_fs_action_menu_list_gene_pane_t1

0x6a7c,	// (0x00069671) sp_fs_action_menu_list_gene_pane_ParamLimits

0x6a7c,	// (0x00069671) sp_fs_action_menu_list_gene_pane

0x32cf,	// (0x00065ec4) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x32cf,	// (0x00065ec4) popup_sp_fs_action_menu_bg_pane

0x6a9f,	// (0x00069694) sp_fs_action_menu_list_pane_ParamLimits

0x6a9f,	// (0x00069694) sp_fs_action_menu_list_pane

0x6ac3,	// (0x000696b8) sp_fs_scroll_pane_cp01_ParamLimits

0x6ac3,	// (0x000696b8) sp_fs_scroll_pane_cp01

0x1279,	// (0x00063e6e) list_medium_line_plain_t2_t1

0x1279,	// (0x00063e6e) list_medium_line_plain_t2_t2

0x0001,

0xfc56,	// (0x0007284b) list_medium_line_plain_t2_t

0x1279,	// (0x00063e6e) list_medium_line_plain_t3_t1

0x1279,	// (0x00063e6e) list_medium_line_plain_t3_t2

0x1279,	// (0x00063e6e) list_medium_line_plain_t3_t3

0x0002,

0xf2c1,	// (0x00071eb6) list_medium_line_plain_t3_t

0x0a17,	// (0x0006360c) list_medium_line_x2_t2_g2_g1_ParamLimits

0x0a17,	// (0x0006360c) list_medium_line_x2_t2_g2_g1

0x0a17,	// (0x0006360c) list_medium_line_x2_t2_g2_g2_ParamLimits

0x0a17,	// (0x0006360c) list_medium_line_x2_t2_g2_g2

0x0001,

0xf201,	// (0x00071df6) list_medium_line_x2_t2_g2_g_ParamLimits

0xf201,	// (0x00071df6) list_medium_line_x2_t2_g2_g

0x0ce5,	// (0x000638da) list_medium_line_x2_t2_g2_t1_ParamLimits

0x0ce5,	// (0x000638da) list_medium_line_x2_t2_g2_t1

0x0ce5,	// (0x000638da) list_medium_line_x2_t2_g2_t2_ParamLimits

0x0ce5,	// (0x000638da) list_medium_line_x2_t2_g2_t2

0x0001,

0xf276,	// (0x00071e6b) list_medium_line_x2_t2_g2_t_ParamLimits

0xf276,	// (0x00071e6b) list_medium_line_x2_t2_g2_t

0x0a17,	// (0x0006360c) list_medium_line_x2_t4_g2_g1_ParamLimits

0x0a17,	// (0x0006360c) list_medium_line_x2_t4_g2_g1

0x0a17,	// (0x0006360c) list_medium_line_x2_t4_g2_g2_ParamLimits

0x0a17,	// (0x0006360c) list_medium_line_x2_t4_g2_g2

0x0001,

0xf201,	// (0x00071df6) list_medium_line_x2_t4_g2_g_ParamLimits

0xf201,	// (0x00071df6) list_medium_line_x2_t4_g2_g

0x0ce5,	// (0x000638da) list_medium_line_x2_t4_g2_t1_ParamLimits

0x0ce5,	// (0x000638da) list_medium_line_x2_t4_g2_t1

0x0ce5,	// (0x000638da) list_medium_line_x2_t4_g2_t2_ParamLimits

0x0ce5,	// (0x000638da) list_medium_line_x2_t4_g2_t2

0x0ce5,	// (0x000638da) list_medium_line_x2_t4_g2_t3_ParamLimits

0x0ce5,	// (0x000638da) list_medium_line_x2_t4_g2_t3

0x0ce5,	// (0x000638da) list_medium_line_x2_t4_g2_t4_ParamLimits

0x0ce5,	// (0x000638da) list_medium_line_x2_t4_g2_t4

0x0003,

0xf20f,	// (0x00071e04) list_medium_line_x2_t4_g2_t_ParamLimits

0xf20f,	// (0x00071e04) list_medium_line_x2_t4_g2_t

0x0d13,	// (0x00063908) list_medium_line_t3_right_iconx2_g1

0x0d13,	// (0x00063908) list_medium_line_t3_right_iconx2_g2

0x0d13,	// (0x00063908) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf3e2,	// (0x00071fd7) list_medium_line_t3_right_iconx2_g

0x1279,	// (0x00063e6e) list_medium_line_t3_right_iconx2_t1

0x1279,	// (0x00063e6e) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc56,	// (0x0007284b) list_medium_line_t3_right_iconx2_t

0x0a17,	// (0x0006360c) list_medium_line_x3_t4_g4_g1_ParamLimits

0x0a17,	// (0x0006360c) list_medium_line_x3_t4_g4_g1

0x0a17,	// (0x0006360c) list_medium_line_x3_t4_g4_g2_ParamLimits

0x0a17,	// (0x0006360c) list_medium_line_x3_t4_g4_g2

0x0a17,	// (0x0006360c) list_medium_line_x3_t4_g4_g3_ParamLimits

0x0a17,	// (0x0006360c) list_medium_line_x3_t4_g4_g3

0x0a17,	// (0x0006360c) list_medium_line_x3_t4_g4_g4_ParamLimits

0x0a17,	// (0x0006360c) list_medium_line_x3_t4_g4_g4

0x0003,

0xf206,	// (0x00071dfb) list_medium_line_x3_t4_g4_g_ParamLimits

0xf206,	// (0x00071dfb) list_medium_line_x3_t4_g4_g

0x0ce5,	// (0x000638da) list_medium_line_x3_t4_g4_t1_ParamLimits

0x0ce5,	// (0x000638da) list_medium_line_x3_t4_g4_t1

0x0ce5,	// (0x000638da) list_medium_line_x3_t4_g4_t2_ParamLimits

0x0ce5,	// (0x000638da) list_medium_line_x3_t4_g4_t2

0x0ce5,	// (0x000638da) list_medium_line_x3_t4_g4_t3_ParamLimits

0x0ce5,	// (0x000638da) list_medium_line_x3_t4_g4_t3

0x0ce5,	// (0x000638da) list_medium_line_x3_t4_g4_t4_ParamLimits

0x0ce5,	// (0x000638da) list_medium_line_x3_t4_g4_t4

0x0003,

0xf20f,	// (0x00071e04) list_medium_line_x3_t4_g4_t_ParamLimits

0xf20f,	// (0x00071e04) list_medium_line_x3_t4_g4_t

0x6ae9,	// (0x000696de) list_single_dyc_row_text_pane_t1_ParamLimits

0x6ae9,	// (0x000696de) list_single_dyc_row_text_pane_t1

0x6b2c,	// (0x00069721) list_single_dyc_row_text_pane_t2_ParamLimits

0x6b2c,	// (0x00069721) list_single_dyc_row_text_pane_t2

0x6ba2,	// (0x00069797) list_single_dyc_row_text_pane_t3_ParamLimits

0x6ba2,	// (0x00069797) list_single_dyc_row_text_pane_t3

0x0005,

0xfc6e,	// (0x00072863) list_single_dyc_row_text_pane_t_ParamLimits

0xfc6e,	// (0x00072863) list_single_dyc_row_text_pane_t

0x6c81,	// (0x00069876) list_single_dyc_row_pane_g1_ParamLimits

0x6c81,	// (0x00069876) list_single_dyc_row_pane_g1

0x6c8d,	// (0x00069882) list_single_dyc_row_pane_g2_ParamLimits

0x6c8d,	// (0x00069882) list_single_dyc_row_pane_g2

0x6c99,	// (0x0006988e) list_single_dyc_row_pane_g3_ParamLimits

0x6c99,	// (0x0006988e) list_single_dyc_row_pane_g3

0x6ca5,	// (0x0006989a) list_single_dyc_row_pane_g4_ParamLimits

0x6ca5,	// (0x0006989a) list_single_dyc_row_pane_g4

0x0003,

0xfc7b,	// (0x00072870) list_single_dyc_row_pane_g_ParamLimits

0xfc7b,	// (0x00072870) list_single_dyc_row_pane_g

0x6cb1,	// (0x000698a6) list_single_dyc_row_text_pane_ParamLimits

0x6cb1,	// (0x000698a6) list_single_dyc_row_text_pane

0x0256,	// (0x00062e4b) bg_sp_fs_scroll_pane

0x3374,	// (0x00065f69) thumb_sp_fs_scroll_pane

0x0a17,	// (0x0006360c) list_medium_line_g1_ParamLimits

0x0a17,	// (0x0006360c) list_medium_line_g1

0x0ce5,	// (0x000638da) list_medium_line_t1_ParamLimits

0x0ce5,	// (0x000638da) list_medium_line_t1

0x0a17,	// (0x0006360c) list_medium_line_x2_g1_ParamLimits

0x0a17,	// (0x0006360c) list_medium_line_x2_g1

0x0a17,	// (0x0006360c) list_medium_line_x2_g2_ParamLimits

0x0a17,	// (0x0006360c) list_medium_line_x2_g2

0x0001,

0xf201,	// (0x00071df6) list_medium_line_x2_g_ParamLimits

0xf201,	// (0x00071df6) list_medium_line_x2_g

0x0ce5,	// (0x000638da) list_medium_line_x2_t1_ParamLimits

0x0ce5,	// (0x000638da) list_medium_line_x2_t1

0x0a17,	// (0x0006360c) list_medium_line_x3_g1_ParamLimits

0x0a17,	// (0x0006360c) list_medium_line_x3_g1

0x217b,	// (0x00064d70) list_medium_line_x3_g2_ParamLimits

0x217b,	// (0x00064d70) list_medium_line_x3_g2

0x0001,

0xfc84,	// (0x00072879) list_medium_line_x3_g_ParamLimits

0xfc84,	// (0x00072879) list_medium_line_x3_g

0x337d,	// (0x00065f72) list_medium_line_x3_t1_ParamLimits

0x337d,	// (0x00065f72) list_medium_line_x3_t1

0x3391,	// (0x00065f86) thumb_sp_fs_scroll_pane_g1

0x339a,	// (0x00065f8f) thumb_sp_fs_scroll_pane_g2

0x33a3,	// (0x00065f98) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc89,	// (0x0007287e) thumb_sp_fs_scroll_pane_g

0x3391,	// (0x00065f86) bg_sp_fs_scroll_pane_g1

0x339a,	// (0x00065f8f) bg_sp_fs_scroll_pane_g2

0x33a3,	// (0x00065f98) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc89,	// (0x0007287e) bg_sp_fs_scroll_pane_g

0x0a17,	// (0x0006360c) list_medium_line_x2_t3_g4_g1_ParamLimits

0x0a17,	// (0x0006360c) list_medium_line_x2_t3_g4_g1

0x0a17,	// (0x0006360c) list_medium_line_x2_t3_g4_g2_ParamLimits

0x0a17,	// (0x0006360c) list_medium_line_x2_t3_g4_g2

0x0a17,	// (0x0006360c) list_medium_line_x2_t3_g4_g3_ParamLimits

0x0a17,	// (0x0006360c) list_medium_line_x2_t3_g4_g3

0x0a17,	// (0x0006360c) list_medium_line_x2_t3_g4_g4_ParamLimits

0x0a17,	// (0x0006360c) list_medium_line_x2_t3_g4_g4

0x0003,

0xf206,	// (0x00071dfb) list_medium_line_x2_t3_g4_g_ParamLimits

0xf206,	// (0x00071dfb) list_medium_line_x2_t3_g4_g

0x0ce5,	// (0x000638da) list_medium_line_x2_t3_g4_t1_ParamLimits

0x0ce5,	// (0x000638da) list_medium_line_x2_t3_g4_t1

0x0ce5,	// (0x000638da) list_medium_line_x2_t3_g4_t2_ParamLimits

0x0ce5,	// (0x000638da) list_medium_line_x2_t3_g4_t2

0x0ce5,	// (0x000638da) list_medium_line_x2_t3_g4_t3_ParamLimits

0x0ce5,	// (0x000638da) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1fa,	// (0x00071def) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1fa,	// (0x00071def) list_medium_line_x2_t3_g4_t

0x0a17,	// (0x0006360c) list_medium_line_g2_g1_ParamLimits

0x0a17,	// (0x0006360c) list_medium_line_g2_g1

0x0a17,	// (0x0006360c) list_medium_line_g2_g2_ParamLimits

0x0a17,	// (0x0006360c) list_medium_line_g2_g2

0x0001,

0xf201,	// (0x00071df6) list_medium_line_g2_g_ParamLimits

0xf201,	// (0x00071df6) list_medium_line_g2_g

0x0ce5,	// (0x000638da) list_medium_line_g2_t1_ParamLimits

0x0ce5,	// (0x000638da) list_medium_line_g2_t1

0x0a17,	// (0x0006360c) list_medium_line_t3_g2_g1_ParamLimits

0x0a17,	// (0x0006360c) list_medium_line_t3_g2_g1

0x0a17,	// (0x0006360c) list_medium_line_t3_g2_g2_ParamLimits

0x0a17,	// (0x0006360c) list_medium_line_t3_g2_g2

0x0001,

0xf201,	// (0x00071df6) list_medium_line_t3_g2_g_ParamLimits

0xf201,	// (0x00071df6) list_medium_line_t3_g2_g

0x0ce5,	// (0x000638da) list_medium_line_t3_g2_t1_ParamLimits

0x0ce5,	// (0x000638da) list_medium_line_t3_g2_t1

0x0ce5,	// (0x000638da) list_medium_line_t3_g2_t2_ParamLimits

0x0ce5,	// (0x000638da) list_medium_line_t3_g2_t2

0x0ce5,	// (0x000638da) list_medium_line_t3_g2_t3_ParamLimits

0x0ce5,	// (0x000638da) list_medium_line_t3_g2_t3

0x0002,

0xf1fa,	// (0x00071def) list_medium_line_t3_g2_t_ParamLimits

0xf1fa,	// (0x00071def) list_medium_line_t3_g2_t

0x0d13,	// (0x00063908) list_medium_line_right_icon_g1

0x1279,	// (0x00063e6e) list_medium_line_right_icon_t1

0x0a17,	// (0x0006360c) list_medium_line_t2_g1_ParamLimits

0x0a17,	// (0x0006360c) list_medium_line_t2_g1

0x0ce5,	// (0x000638da) list_medium_line_t2_t1_ParamLimits

0x0ce5,	// (0x000638da) list_medium_line_t2_t1

0x0ce5,	// (0x000638da) list_medium_line_t2_t2_ParamLimits

0x0ce5,	// (0x000638da) list_medium_line_t2_t2

0x0001,

0xf276,	// (0x00071e6b) list_medium_line_t2_t_ParamLimits

0xf276,	// (0x00071e6b) list_medium_line_t2_t

0x0a17,	// (0x0006360c) list_medium_line_t3_g1_ParamLimits

0x0a17,	// (0x0006360c) list_medium_line_t3_g1

0x0ce5,	// (0x000638da) list_medium_line_t3_t1_ParamLimits

0x0ce5,	// (0x000638da) list_medium_line_t3_t1

0x0ce5,	// (0x000638da) list_medium_line_t3_t2_ParamLimits

0x0ce5,	// (0x000638da) list_medium_line_t3_t2

0x0ce5,	// (0x000638da) list_medium_line_t3_t3_ParamLimits

0x0ce5,	// (0x000638da) list_medium_line_t3_t3

0x0002,

0xf1fa,	// (0x00071def) list_medium_line_t3_t_ParamLimits

0xf1fa,	// (0x00071def) list_medium_line_t3_t

0x0a17,	// (0x0006360c) list_medium_line_g3_g1_ParamLimits

0x0a17,	// (0x0006360c) list_medium_line_g3_g1

0x0a17,	// (0x0006360c) list_medium_line_g3_g2_ParamLimits

0x0a17,	// (0x0006360c) list_medium_line_g3_g2

0x0a17,	// (0x0006360c) list_medium_line_g3_g3_ParamLimits

0x0a17,	// (0x0006360c) list_medium_line_g3_g3

0x0002,

0xf1f3,	// (0x00071de8) list_medium_line_g3_g_ParamLimits

0xf1f3,	// (0x00071de8) list_medium_line_g3_g

0x0ce5,	// (0x000638da) list_medium_line_g3_t1_ParamLimits

0x0ce5,	// (0x000638da) list_medium_line_g3_t1

0x0a17,	// (0x0006360c) list_medium_line_t2_g3_g1_ParamLimits

0x0a17,	// (0x0006360c) list_medium_line_t2_g3_g1

0x0a17,	// (0x0006360c) list_medium_line_t2_g3_g2_ParamLimits

0x0a17,	// (0x0006360c) list_medium_line_t2_g3_g2

0x0a17,	// (0x0006360c) list_medium_line_t2_g3_g3_ParamLimits

0x0a17,	// (0x0006360c) list_medium_line_t2_g3_g3

0x0002,

0xf1f3,	// (0x00071de8) list_medium_line_t2_g3_g_ParamLimits

0xf1f3,	// (0x00071de8) list_medium_line_t2_g3_g

0x0ce5,	// (0x000638da) list_medium_line_t2_g3_t1_ParamLimits

0x0ce5,	// (0x000638da) list_medium_line_t2_g3_t1

0x0ce5,	// (0x000638da) list_medium_line_t2_g3_t2_ParamLimits

0x0ce5,	// (0x000638da) list_medium_line_t2_g3_t2

0x0001,

0xf276,	// (0x00071e6b) list_medium_line_t2_g3_t_ParamLimits

0xf276,	// (0x00071e6b) list_medium_line_t2_g3_t

0x0a17,	// (0x0006360c) list_medium_line_t3_g3_g1_ParamLimits

0x0a17,	// (0x0006360c) list_medium_line_t3_g3_g1

0x0a17,	// (0x0006360c) list_medium_line_t3_g3_g2_ParamLimits

0x0a17,	// (0x0006360c) list_medium_line_t3_g3_g2

0x0a17,	// (0x0006360c) list_medium_line_t3_g3_g3_ParamLimits

0x0a17,	// (0x0006360c) list_medium_line_t3_g3_g3

0x0002,

0xf1f3,	// (0x00071de8) list_medium_line_t3_g3_g_ParamLimits

0xf1f3,	// (0x00071de8) list_medium_line_t3_g3_g

0x0ce5,	// (0x000638da) list_medium_line_t3_g3_t1_ParamLimits

0x0ce5,	// (0x000638da) list_medium_line_t3_g3_t1

0x0ce5,	// (0x000638da) list_medium_line_t3_g3_t2_ParamLimits

0x0ce5,	// (0x000638da) list_medium_line_t3_g3_t2

0x0ce5,	// (0x000638da) list_medium_line_t3_g3_t3_ParamLimits

0x0ce5,	// (0x000638da) list_medium_line_t3_g3_t3

0x0002,

0xf1fa,	// (0x00071def) list_medium_line_t3_g3_t_ParamLimits

0xf1fa,	// (0x00071def) list_medium_line_t3_g3_t

0x0d13,	// (0x00063908) list_medium_line_right_iconx2_g1

0x0d13,	// (0x00063908) list_medium_line_right_iconx2_g2

0x0001,

0xf3dd,	// (0x00071fd2) list_medium_line_right_iconx2_g

0x1279,	// (0x00063e6e) list_medium_line_right_iconx2_t1

0x0d13,	// (0x00063908) list_medium_line_t2_right_iconx2_g1

0x0d13,	// (0x00063908) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf3dd,	// (0x00071fd2) list_medium_line_t2_right_iconx2_g

0x1279,	// (0x00063e6e) list_medium_line_t2_right_iconx2_t1

0x1279,	// (0x00063e6e) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc56,	// (0x0007284b) list_medium_line_t2_right_iconx2_t

0x1279,	// (0x00063e6e) list_medium_line_x4_t4_t1

0x1279,	// (0x00063e6e) list_medium_line_x4_t4_t2

0x1279,	// (0x00063e6e) list_medium_line_x4_t4_t3

0x1279,	// (0x00063e6e) list_medium_line_x4_t4_t4

0x0003,

0xf2c8,	// (0x00071ebd) list_medium_line_x4_t4_t

0xdbb5,	// (0x000707aa) tport_appsw_pane_ParamLimits

0xdbb5,	// (0x000707aa) tport_appsw_pane

0xdbc3,	// (0x000707b8) tport_contact_pane_ParamLimits

0xdbc3,	// (0x000707b8) tport_contact_pane

0xdbd3,	// (0x000707c8) tport_listscroll_pane_ParamLimits

0xdbd3,	// (0x000707c8) tport_listscroll_pane

0xdbe2,	// (0x000707d7) cell_tport_appsw_pane_ParamLimits

0xdbe2,	// (0x000707d7) cell_tport_appsw_pane

0x0a25,	// (0x0006361a) tport_appsw_pane_g1_ParamLimits

0x0a25,	// (0x0006361a) tport_appsw_pane_g1

0x33ac,	// (0x00065fa1) tport_contact_pane_g1

0x33b5,	// (0x00065faa) tport_contact_pane_t1

0x33c3,	// (0x00065fb8) tport_contact_pane_t2

0x0001,

0xfc90,	// (0x00072885) tport_contact_pane_t

0x33d1,	// (0x00065fc6) list_tport_pane

0x33da,	// (0x00065fcf) scroll_pane_cp_030

0xdc17,	// (0x0007080c) cell_tport_appsw_pane_g1

0xdc27,	// (0x0007081c) cell_tport_appsw_pane_t1

0xdc35,	// (0x0007082a) grid_highlight_pane_cp019

0xdc3d,	// (0x00070832) list_tport_double_graphic_pane_ParamLimits

0xdc3d,	// (0x00070832) list_tport_double_graphic_pane

0x09b0,	// (0x000635a5) list_highlight_pane_cp023_ParamLimits

0x09b0,	// (0x000635a5) list_highlight_pane_cp023

0xdc5a,	// (0x0007084f) list_tport_double_graphic_pane_g1_ParamLimits

0xdc5a,	// (0x0007084f) list_tport_double_graphic_pane_g1

0xdc67,	// (0x0007085c) list_tport_double_graphic_pane_t1_ParamLimits

0xdc67,	// (0x0007085c) list_tport_double_graphic_pane_t1

0xdc7c,	// (0x00070871) list_tport_double_graphic_pane_t2_ParamLimits

0xdc7c,	// (0x00070871) list_tport_double_graphic_pane_t2

0x0001,

0xfc9c,	// (0x00072891) list_tport_double_graphic_pane_t_ParamLimits

0xfc9c,	// (0x00072891) list_tport_double_graphic_pane_t

0x0256,	// (0x00062e4b) main_cale_note_pane

0xbdf0,	// (0x0006e9e5) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xbdf0,	// (0x0006e9e5) cell_vitu2_function_top_wide_pane_cp01

0xd58f,	// (0x00070184) wait_bar_pane_cp05_ParamLimits

0x09b0,	// (0x000635a5) listscroll_cmail_pane

0x33e3,	// (0x00065fd8) list_cmail_pane

0xdc8e,	// (0x00070883) list_cmail_body_pane

0xdca8,	// (0x0007089d) list_single_cmail_header_caption_pane

0x33f3,	// (0x00065fe8) list_single_cmail_header_detail_pane_ParamLimits

0x33f3,	// (0x00065fe8) list_single_cmail_header_detail_pane

0x3425,	// (0x0006601a) list_single_cmail_header_caption_pane_t1

0x6cd0,	// (0x000698c5) list_single_cmail_header_detail_pane_g1_ParamLimits

0x6cd0,	// (0x000698c5) list_single_cmail_header_detail_pane_g1

0xdcc8,	// (0x000708bd) list_single_cmail_header_detail_pane_g2_ParamLimits

0xdcc8,	// (0x000708bd) list_single_cmail_header_detail_pane_g2

0x0002,

0xfca1,	// (0x00072896) list_single_cmail_header_detail_pane_g_ParamLimits

0xfca1,	// (0x00072896) list_single_cmail_header_detail_pane_g

0x6ce8,	// (0x000698dd) list_single_cmail_header_detail_pane_t1_ParamLimits

0x6ce8,	// (0x000698dd) list_single_cmail_header_detail_pane_t1

0x6d48,	// (0x0006993d) list_single_cmail_header_editor_pane_bg_ParamLimits

0x6d48,	// (0x0006993d) list_single_cmail_header_editor_pane_bg

0x2eef,	// (0x00065ae4) list_cmail_body_pane_g1

0x34cc,	// (0x000660c1) list_cmail_body_pane_t1

0x21e7,	// (0x00064ddc) list_single_cmail_header_editor_pane_bg_g1

0x0f28,	// (0x00063b1d) list_single_cmail_header_editor_pane_bg_g1_copy1

0x21f7,	// (0x00064dec) list_single_cmail_header_editor_pane_bg_g1_copy2

0x21ef,	// (0x00064de4) list_single_cmail_header_editor_pane_bg_g1_copy3

0x241b,	// (0x00065010) list_single_cmail_header_editor_pane_bg_g1_copy4

0x2217,	// (0x00064e0c) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x2207,	// (0x00064dfc) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x220f,	// (0x00064e04) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x0f08,	// (0x00063afd) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xdcd4,	// (0x000708c9) calenote_gesture_pane_ParamLimits

0xdcd4,	// (0x000708c9) calenote_gesture_pane

0xdcee,	// (0x000708e3) calenote_window_pane_ParamLimits

0xdcee,	// (0x000708e3) calenote_window_pane

0x34da,	// (0x000660cf) popup_note_window_cp01

0xdd06,	// (0x000708fb) calenote_swipe_1_pane_ParamLimits

0xdd06,	// (0x000708fb) calenote_swipe_1_pane

0xda24,	// (0x00070619) calenote_swipe_2_pane_ParamLimits

0xda24,	// (0x00070619) calenote_swipe_2_pane

0x3123,	// (0x00065d18) calenote_swipe_1_pane_g1_ParamLimits

0x3123,	// (0x00065d18) calenote_swipe_1_pane_g1

0x3130,	// (0x00065d25) calenote_swipe_1_pane_g2_ParamLimits

0x3130,	// (0x00065d25) calenote_swipe_1_pane_g2

0x0001,

0xfc3e,	// (0x00072833) calenote_swipe_1_pane_g_ParamLimits

0xfc3e,	// (0x00072833) calenote_swipe_1_pane_g

0x34ec,	// (0x000660e1) calenote_swipe_1_pane_t1_ParamLimits

0x34ec,	// (0x000660e1) calenote_swipe_1_pane_t1

0x3123,	// (0x00065d18) calenote_swipe_2_pane_g1_ParamLimits

0x3123,	// (0x00065d18) calenote_swipe_2_pane_g1

0x350b,	// (0x00066100) calenote_swipe_2_pane_g2_ParamLimits

0x350b,	// (0x00066100) calenote_swipe_2_pane_g2

0x0001,

0xfcad,	// (0x000728a2) calenote_swipe_2_pane_g_ParamLimits

0xfcad,	// (0x000728a2) calenote_swipe_2_pane_g

0x3517,	// (0x0006610c) calenote_swipe_2_pane_t1_ParamLimits

0x3517,	// (0x0006610c) calenote_swipe_2_pane_t1

0x0256,	// (0x00062e4b) main_mup_navstr_pane

0xaca3,	// (0x0006d898) main_mup3_pane_t7_ParamLimits

0xaca3,	// (0x0006d898) main_mup3_pane_t7

0xb4b1,	// (0x0006e0a6) main_mp4_pane_g6_ParamLimits

0xb4b1,	// (0x0006e0a6) main_mp4_pane_g6

0xb83d,	// (0x0006e432) main_image3_pane_t4_ParamLimits

0xb83d,	// (0x0006e432) main_image3_pane_t4

0xdd19,	// (0x0007090e) popup_navstr_preview_pane_ParamLimits

0xdd19,	// (0x0007090e) popup_navstr_preview_pane

0xdd25,	// (0x0007091a) scroll_navstr_pane_ParamLimits

0xdd25,	// (0x0007091a) scroll_navstr_pane

0x0256,	// (0x00062e4b) bg_popup_preview_window_pane_cp04

0x353e,	// (0x00066133) popup_navstr_preview_pane_t1

0xdd31,	// (0x00070926) scroll_navstr_pane_g1_ParamLimits

0xdd31,	// (0x00070926) scroll_navstr_pane_g1

0xdd3e,	// (0x00070933) scroll_navstr_pane_t1_ParamLimits

0xdd3e,	// (0x00070933) scroll_navstr_pane_t1

0x34e3,	// (0x000660d8) bg_button_pane_cp014

0x34e3,	// (0x000660d8) bg_button_pane_cp030

0x69db,	// (0x000695d0) list_double_fisheye_pane_g4_ParamLimits

0x69db,	// (0x000695d0) list_double_fisheye_pane_g4

0x69e7,	// (0x000695dc) list_double_fisheye_pane_g5_ParamLimits

0x69e7,	// (0x000695dc) list_double_fisheye_pane_g5

0x56f8,	// (0x000682ed) sp_fs_scroll_pane_cp03

0x3245,	// (0x00065e3a) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x3251,	// (0x00065e46) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc5b,	// (0x00072850) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xdb23,	// (0x00070718) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x33eb,	// (0x00065fe0) sp_fs_scroll_pane_cp02

0x0c1a,	// (0x0006380f) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x0c1a,	// (0x0006380f) popup_sp_fs_calendar_preview_list_single_pane

0x0256,	// (0x00062e4b) main_cam6_pano_pane

0x09b0,	// (0x000635a5) main_mup3_pane_ParamLimits

0x0256,	// (0x00062e4b) main_phacti_pane

0xd462,	// (0x00070057) bg_button_pane_cp11

0xd47a,	// (0x0007006f) main_mobtv_info_pane_g2_ParamLimits

0xd47a,	// (0x0007006f) main_mobtv_info_pane_g2

0x0001,

0xfbbb,	// (0x000727b0) main_mobtv_info_pane_g_ParamLimits

0xfbbb,	// (0x000727b0) main_mobtv_info_pane_g

0xd62c,	// (0x00070221) sc_clock_pane_t5_ParamLimits

0xd62c,	// (0x00070221) sc_clock_pane_t5

0xd824,	// (0x00070419) main_radioblah_pane_g1_ParamLimits

0x3055,	// (0x00065c4a) main_radioblah_pane_t3_ParamLimits

0x3055,	// (0x00065c4a) main_radioblah_pane_t3

0x306d,	// (0x00065c62) main_radioblah_pane_t4_ParamLimits

0x306d,	// (0x00065c62) main_radioblah_pane_t4

0xd842,	// (0x00070437) main_radioblah_text_pane_ParamLimits

0xd842,	// (0x00070437) main_radioblah_text_pane

0xd84f,	// (0x00070444) main_radioblah_info_pane_g1_ParamLimits

0xd8e8,	// (0x000704dd) main_radioblah_info_pane_t4_ParamLimits

0xd8e8,	// (0x000704dd) main_radioblah_info_pane_t4

0x09b0,	// (0x000635a5) main_sp_fs_calendar_pane

0xdd50,	// (0x00070945) main_phacti_pane_g1

0xdd58,	// (0x0007094d) phacti_note_pane_ParamLimits

0xdd58,	// (0x0007094d) phacti_note_pane

0x3555,	// (0x0006614a) phacti_term_pane_ParamLimits

0x3555,	// (0x0006614a) phacti_term_pane

0x356a,	// (0x0006615f) phacti_note_pane_t1_ParamLimits

0x356a,	// (0x0006615f) phacti_note_pane_t1

0x6d5f,	// (0x00069954) phacti_term_pane_g1

0x6d67,	// (0x0006995c) phacti_term_pane_t1_ParamLimits

0x6d67,	// (0x0006995c) phacti_term_pane_t1

0x35b3,	// (0x000661a8) popup_sp_fs_calendar_preview_list_single_pane_g1

0x35bb,	// (0x000661b0) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfcb7,	// (0x000728ac) popup_sp_fs_calendar_preview_list_single_pane_g

0x35c3,	// (0x000661b8) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x35c3,	// (0x000661b8) popup_sp_fs_calendar_preview_list_single_pane_t1

0x35d9,	// (0x000661ce) aid_popup_sp_fs_bg_corner_pane

0x0d13,	// (0x00063908) popup_sp_fs_calendar_preview_bg_pane_g1

0x0256,	// (0x00062e4b) popup_sp_fs_calendar_preview_bg_pane

0x35e1,	// (0x000661d6) popup_sp_fs_calendar_preview_list_pane

0x17b0,	// (0x000643a5) bg_main_sp_fs_cale_pane_ParamLimits

0x17b0,	// (0x000643a5) bg_main_sp_fs_cale_pane

0x6d9a,	// (0x0006998f) listscroll_cale_mrui_pane_ParamLimits

0x6d9a,	// (0x0006998f) listscroll_cale_mrui_pane

0x6daf,	// (0x000699a4) listscroll_sp_fs_schedule_track_pane

0x6db8,	// (0x000699ad) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x6db8,	// (0x000699ad) main_sp_fs_ctrlbar_pane_cp01

0x3623,	// (0x00066218) main_sp_fs_ribbon_pane

0x6dcb,	// (0x000699c0) popup_sp_fs_cale_preview_window

0x3e4a,	// (0x00066a3f) list_single_sp_fs_schedule_track_pane_ParamLimits

0x3e4a,	// (0x00066a3f) list_single_sp_fs_schedule_track_pane

0x0a09,	// (0x000635fe) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x0a09,	// (0x000635fe) bg_sp_fs_highlight_list_pane_cp03

0xddbb,	// (0x000709b0) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xddbb,	// (0x000709b0) list_single_sp_fs_schedule_track_pane_g1

0xddc7,	// (0x000709bc) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xddc7,	// (0x000709bc) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfcbc,	// (0x000728b1) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfcbc,	// (0x000728b1) list_single_sp_fs_schedule_track_pane_g

0xddd3,	// (0x000709c8) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xddd3,	// (0x000709c8) list_single_sp_fs_schedule_track_pane_t1

0xddf1,	// (0x000709e6) sp_fs_schedule_track_pane_ParamLimits

0xddf1,	// (0x000709e6) sp_fs_schedule_track_pane

0x363d,	// (0x00066232) sp_fs_schedule_track_pane_g1

0x3645,	// (0x0006623a) sp_fs_schedule_track_pane_g2

0x364d,	// (0x00066242) sp_fs_schedule_track_pane_g3

0x3655,	// (0x0006624a) sp_fs_schedule_track_pane_g4

0x365d,	// (0x00066252) sp_fs_schedule_track_pane_g5

0x0004,

0xfcc1,	// (0x000728b6) sp_fs_schedule_track_pane_g

0x21e7,	// (0x00064ddc) bg_sp_fs_schedule_viewer_highlight_g1

0x0f28,	// (0x00063b1d) bg_sp_fs_schedule_viewer_highlight_g2

0x21ef,	// (0x00064de4) bg_sp_fs_schedule_viewer_highlight_g3

0x21f7,	// (0x00064dec) bg_sp_fs_schedule_viewer_highlight_g4

0x241b,	// (0x00065010) bg_sp_fs_schedule_viewer_highlight_g5

0x2207,	// (0x00064dfc) bg_sp_fs_schedule_viewer_highlight_g6

0x220f,	// (0x00064e04) bg_sp_fs_schedule_viewer_highlight_g7

0x2217,	// (0x00064e0c) bg_sp_fs_schedule_viewer_highlight_g8

0x0f08,	// (0x00063afd) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfccc,	// (0x000728c1) bg_sp_fs_schedule_viewer_highlight_g

0x0256,	// (0x00062e4b) bg_main_sp_fs_ribbon_pane

0xde03,	// (0x000709f8) main_sp_fs_ribbon_pane_g1

0x3665,	// (0x0006625a) main_sp_fs_ribbon_pane_t1

0xde0c,	// (0x00070a01) main_sp_fs_ribbon_pane_t2

0x3674,	// (0x00066269) main_sp_fs_ribbon_pane_t3

0x0002,

0xfcdf,	// (0x000728d4) main_sp_fs_ribbon_pane_t

0x3683,	// (0x00066278) main_sp_fs_ribbon_scheduler_pane

0x368b,	// (0x00066280) bg_main_sp_fs_ribbon_pane_g1

0x3694,	// (0x00066289) bg_main_sp_fs_ribbon_pane_g2

0x369d,	// (0x00066292) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfce6,	// (0x000728db) bg_main_sp_fs_ribbon_pane_g

0x36a5,	// (0x0006629a) main_sp_fs_ribbon_scheduler_pane_g1

0x36ae,	// (0x000662a3) main_sp_fs_ribbon_scheduler_pane_g2

0x36b7,	// (0x000662ac) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfced,	// (0x000728e2) main_sp_fs_ribbon_scheduler_pane_g

0x36c0,	// (0x000662b5) list_cale_mrui_pane

0xde1b,	// (0x00070a10) sp_fs_scroll_pane_cp07_ParamLimits

0xde1b,	// (0x00070a10) sp_fs_scroll_pane_cp07

0xde37,	// (0x00070a2c) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xde37,	// (0x00070a2c) bg_sp_fs_schedule_viewer_highlight

0x36cd,	// (0x000662c2) list_single_sp_fs_schedule_track_pane_cp01

0x36d5,	// (0x000662ca) list_sp_fs_schedule_track_pane

0x36dd,	// (0x000662d2) sp_fs_scroll_pane_cp06_ParamLimits

0x36dd,	// (0x000662d2) sp_fs_scroll_pane_cp06

0x0d13,	// (0x00063908) bgmain_sp_fs_calendar_pane_g1

0x6ddd,	// (0x000699d2) list_single_cale_mrui_pane_ParamLimits

0x6ddd,	// (0x000699d2) list_single_cale_mrui_pane

0x6e00,	// (0x000699f5) list_single_cale_mrui_row_pane_ParamLimits

0x6e00,	// (0x000699f5) list_single_cale_mrui_row_pane

0x6e0d,	// (0x00069a02) list_single_cale_mrui_row_pane_g1_ParamLimits

0x6e0d,	// (0x00069a02) list_single_cale_mrui_row_pane_g1

0x6e45,	// (0x00069a3a) list_single_cale_mrui_row_pane_t1_ParamLimits

0x6e45,	// (0x00069a3a) list_single_cale_mrui_row_pane_t1

0x6e57,	// (0x00069a4c) list_single_cale_mrui_row_pane_t2_ParamLimits

0x6e57,	// (0x00069a4c) list_single_cale_mrui_row_pane_t2

0x6ebd,	// (0x00069ab2) list_single_cale_mrui_row_pane_t3_ParamLimits

0x6ebd,	// (0x00069ab2) list_single_cale_mrui_row_pane_t3

0x6eec,	// (0x00069ae1) list_single_cale_mrui_row_pane_t4_ParamLimits

0x6eec,	// (0x00069ae1) list_single_cale_mrui_row_pane_t4

0x0003,

0xfcfb,	// (0x000728f0) list_single_cale_mrui_row_pane_t_ParamLimits

0xfcfb,	// (0x000728f0) list_single_cale_mrui_row_pane_t

0x6f1d,	// (0x00069b12) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x6f1d,	// (0x00069b12) list_single_cmail_header_editor_pane_bg_cp01

0x6f3f,	// (0x00069b34) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x6f3f,	// (0x00069b34) list_single_cmail_header_editor_pane_bg_cp02

0xde44,	// (0x00070a39) main_radioblah_text_pane_t1_ParamLimits

0xde44,	// (0x00070a39) main_radioblah_text_pane_t1

0x37b1,	// (0x000663a6) cam6_indi_pane_cp01

0x37b9,	// (0x000663ae) cam6_mode_pane_cp01

0x37c1,	// (0x000663b6) cam6_pano_pane

0x37ca,	// (0x000663bf) cam6_zoom_pane_cp01

0x37d4,	// (0x000663c9) cam6_pano_image_pane

0x37dd,	// (0x000663d2) cam6_pano_pane_g1

0x2eef,	// (0x00065ae4) cam6_pano_pane_g2

0x37e6,	// (0x000663db) cam6_pano_pane_g3

0x37ef,	// (0x000663e4) cam6_pano_pane_g4

0xed87,	// (0x0007197c) cam6_pano_pane_g5

0x37f8,	// (0x000663ed) cam6_pano_pane_g6

0x3800,	// (0x000663f5) cam6_pano_pane_g7

0x3808,	// (0x000663fd) cam6_pano_pane_g8

0x3811,	// (0x00066406) cam6_pano_pane_g9

0x0008,

0xfd04,	// (0x000728f9) cam6_pano_pane_g

0x0256,	// (0x00062e4b) main_browser_tag_pane

0x3536,	// (0x0006612b) grid_navstr_albumart_pane

0x381c,	// (0x00066411) cell_navstr_albumart_pane_ParamLimits

0x381c,	// (0x00066411) cell_navstr_albumart_pane

0x3838,	// (0x0006642d) cell_navstr_albumart_pane_g1

0x4d14,	// (0x00067909) cell_navstr_albumart_pane_g2

0x4d24,	// (0x00067919) cell_navstr_albumart_pane_g3

0x4d1c,	// (0x00067911) cell_navstr_albumart_pane_g4

0x0003,

0xfd17,	// (0x0007290c) cell_navstr_albumart_pane_g

0xde5e,	// (0x00070a53) bt_list_pane_ParamLimits

0xde5e,	// (0x00070a53) bt_list_pane

0xde77,	// (0x00070a6c) bt_list_pane_t1

0xde86,	// (0x00070a7b) bt_list_pane_t2

0x0001,

0xfd20,	// (0x00072915) bt_list_pane_t

0x0256,	// (0x00062e4b) main_cale_prevew_pane

0xde95,	// (0x00070a8a) popup_cale_preview_window_ParamLimits

0xde95,	// (0x00070a8a) popup_cale_preview_window

0x09b0,	// (0x000635a5) bg_popup_preview_window_pane_cp05_ParamLimits

0x09b0,	// (0x000635a5) bg_popup_preview_window_pane_cp05

0x3840,	// (0x00066435) list_cale_preview_pane_ParamLimits

0x3840,	// (0x00066435) list_cale_preview_pane

0xdeb2,	// (0x00070aa7) list_double_cale_preview_pane_ParamLimits

0xdeb2,	// (0x00070aa7) list_double_cale_preview_pane

0xdec6,	// (0x00070abb) list_single_cale_preview_pane_ParamLimits

0xdec6,	// (0x00070abb) list_single_cale_preview_pane

0xdede,	// (0x00070ad3) list_single_cale_preview_pane_g1

0xdee6,	// (0x00070adb) list_single_cale_preview_pane_t1_ParamLimits

0xdee6,	// (0x00070adb) list_single_cale_preview_pane_t1

0xdefb,	// (0x00070af0) list_double_cale_preview_pane_g1

0xdf03,	// (0x00070af8) list_double_cale_preview_pane_t1_ParamLimits

0xdf03,	// (0x00070af8) list_double_cale_preview_pane_t1

0xdf18,	// (0x00070b0d) list_double_cale_preview_pane_t2_ParamLimits

0xdf18,	// (0x00070b0d) list_double_cale_preview_pane_t2

0x0001,

0xfd25,	// (0x0007291a) list_double_cale_preview_pane_t_ParamLimits

0xfd25,	// (0x0007291a) list_double_cale_preview_pane_t

0x0256,	// (0x00062e4b) main_ezdial_pane

0x09b0,	// (0x000635a5) main_sp_fs_email_pane_ParamLimits

0xda84,	// (0x00070679) cmail_ddmenu_btn01_pane_ParamLimits

0xda84,	// (0x00070679) cmail_ddmenu_btn01_pane

0xdaa1,	// (0x00070696) cmail_ddmenu_btn02_pane_ParamLimits

0xdaa1,	// (0x00070696) cmail_ddmenu_btn02_pane

0xdabf,	// (0x000706b4) cmail_ddmenu_btn03_pane_ParamLimits

0xdabf,	// (0x000706b4) cmail_ddmenu_btn03_pane

0xdb60,	// (0x00070755) main_sp_fs_ctrlbar_pane_ParamLimits

0xdb7a,	// (0x0007076f) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xdc8e,	// (0x00070883) list_cmail_body_pane_ParamLimits

0x3433,	// (0x00066028) bg_button_pane_cp12

0x3448,	// (0x0006603d) list_single_cmail_header_detail_pane_g3_ParamLimits

0x3448,	// (0x0006603d) list_single_cmail_header_detail_pane_g3

0x6d24,	// (0x00069919) list_single_cmail_header_detail_pane_t2_ParamLimits

0x6d24,	// (0x00069919) list_single_cmail_header_detail_pane_t2

0x0001,

0xfca8,	// (0x0007289d) list_single_cmail_header_detail_pane_t_ParamLimits

0xfca8,	// (0x0007289d) list_single_cmail_header_detail_pane_t

0x6d7c,	// (0x00069971) phacti_term_pane_t2_ParamLimits

0x6d7c,	// (0x00069971) phacti_term_pane_t2

0x0001,

0xfcb2,	// (0x000728a7) phacti_term_pane_t_ParamLimits

0xfcb2,	// (0x000728a7) phacti_term_pane_t

0x384c,	// (0x00066441) aid_size_list_single_double

0xdf30,	// (0x00070b25) popup_ezdial_listscroll_window

0xdf52,	// (0x00070b47) popup_number_entry_window_cp01

0x0cbe,	// (0x000638b3) bg_popup_call_pane_cp09

0x3858,	// (0x0006644d) ezdial_list_pane

0x3860,	// (0x00066455) scroll_pane_cp23

0x4561,	// (0x00067156) bg_button_pane_cp028_ParamLimits

0x4561,	// (0x00067156) bg_button_pane_cp028

0xdf60,	// (0x00070b55) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xdf60,	// (0x00070b55) cmail_ddmenu_btn01_pane_g1

0xdf72,	// (0x00070b67) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xdf72,	// (0x00070b67) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd2a,	// (0x0007291f) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd2a,	// (0x0007291f) cmail_ddmenu_btn01_pane_g

0x3868,	// (0x0006645d) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x3868,	// (0x0006645d) cmail_ddmenu_btn01_pane_t1

0x17b0,	// (0x000643a5) bg_button_pane_cp029_ParamLimits

0x17b0,	// (0x000643a5) bg_button_pane_cp029

0xdf7e,	// (0x00070b73) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xdf7e,	// (0x00070b73) cmail_ddmenu_btn02_pane_g1

0xdf96,	// (0x00070b8b) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xdf96,	// (0x00070b8b) cmail_ddmenu_btn02_pane_t1

0x0a09,	// (0x000635fe) bg_button_pane_cp031_ParamLimits

0x0a09,	// (0x000635fe) bg_button_pane_cp031

0xdf7e,	// (0x00070b73) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xdf7e,	// (0x00070b73) cmail_ddmenu_btn03_pane_g1

0xdf96,	// (0x00070b8b) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xdf96,	// (0x00070b8b) cmail_ddmenu_btn03_pane_t1

0xb6e6,	// (0x0006e2db) cell_dialer2_keypad_pane_t1_ParamLimits

0xb700,	// (0x0006e2f5) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xb700,	// (0x0006e2f5) cell_dialer2_keypad_pane_t1_copy1

0xd28f,	// (0x0006fe84) ncimui_group_button_pane

0x09b0,	// (0x000635a5) main_sp_fs_calendar_pane_ParamLimits

0xdca8,	// (0x0007089d) list_single_cmail_header_caption_pane_ParamLimits

0x6d91,	// (0x00069986) aid_recal_txt_sm_pane

0x0256,	// (0x00062e4b) mian_recal_day_pane

0x6dcb,	// (0x000699c0) popup_sp_fs_cale_preview_window_ParamLimits

0x387e,	// (0x00066473) list_recal_day_pane

0x6f79,	// (0x00069b6e) list_single_recal_day_pane_ParamLimits

0x6f79,	// (0x00069b6e) list_single_recal_day_pane

0x38d3,	// (0x000664c8) list_single_recal_day_pane_g1_ParamLimits

0x38d3,	// (0x000664c8) list_single_recal_day_pane_g1

0x6f8b,	// (0x00069b80) list_single_recal_day_pane_g2_ParamLimits

0x6f8b,	// (0x00069b80) list_single_recal_day_pane_g2

0x6f97,	// (0x00069b8c) list_single_recal_day_pane_g3_ParamLimits

0x6f97,	// (0x00069b8c) list_single_recal_day_pane_g3

0x6fa3,	// (0x00069b98) list_single_recal_day_pane_g4_ParamLimits

0x6fa3,	// (0x00069b98) list_single_recal_day_pane_g4

0x6fb1,	// (0x00069ba6) list_single_recal_day_pane_g5_ParamLimits

0x6fb1,	// (0x00069ba6) list_single_recal_day_pane_g5

0x6fc7,	// (0x00069bbc) list_single_recal_day_pane_g6_ParamLimits

0x6fc7,	// (0x00069bbc) list_single_recal_day_pane_g6

0x0004,

0xfd39,	// (0x0007292e) list_single_recal_day_pane_g_ParamLimits

0xfd39,	// (0x0007292e) list_single_recal_day_pane_g

0x6fdb,	// (0x00069bd0) list_single_recal_day_pane_t1

0x6fed,	// (0x00069be2) list_single_recal_day_pane_t2

0x0001,

0xfd44,	// (0x00072939) list_single_recal_day_pane_t

0xdfba,	// (0x00070baf) ncimui_query_button_pane_ParamLimits

0xdfba,	// (0x00070baf) ncimui_query_button_pane

0xdfca,	// (0x00070bbf) ncimui_query_button_pane_t1_ParamLimits

0xdfca,	// (0x00070bbf) ncimui_query_button_pane_t1

0x393b,	// (0x00066530) ncimui_query_button_pane_t2_ParamLimits

0x393b,	// (0x00066530) ncimui_query_button_pane_t2

0x0001,

0xfd49,	// (0x0007293e) ncimui_query_button_pane_t_ParamLimits

0xfd49,	// (0x0007293e) ncimui_query_button_pane_t

0xdfdd,	// (0x00070bd2) query_button_pane_ParamLimits

0xdfdd,	// (0x00070bd2) query_button_pane

0x0256,	// (0x00062e4b) bg_button_pane_cp0028

0x394e,	// (0x00066543) query_button_pane_t1

0xa19a,	// (0x0006cd8f) main_tport_pane_ParamLimits

0xdb8b,	// (0x00070780) bg_popup_window_pane_cp01_ParamLimits

0xdb8b,	// (0x00070780) bg_popup_window_pane_cp01

0xdb99,	// (0x0007078e) heading_pane_cp08_ParamLimits

0xdb99,	// (0x0007078e) heading_pane_cp08

0xdba7,	// (0x0007079c) heading_pane_cp07_ParamLimits

0xdba7,	// (0x0007079c) heading_pane_cp07

0xdc17,	// (0x0007080c) cell_tport_appsw_pane_g2

0x0002,

0xfc95,	// (0x0007288a) cell_tport_appsw_pane_g

0x6525,	// (0x0006911a) input_candi_list_open_g1

0x1119,	// (0x00063d0e) list_cale_time_pane_g6_ParamLimits

0x1119,	// (0x00063d0e) list_cale_time_pane_g6

0xa685,	// (0x0006d27a) aid_size_touch_calib_1_ParamLimits

0xa685,	// (0x0006d27a) aid_size_touch_calib_1

0xa691,	// (0x0006d286) aid_size_touch_calib_2_ParamLimits

0xa691,	// (0x0006d286) aid_size_touch_calib_2

0xa69f,	// (0x0006d294) aid_size_touch_calib_3_ParamLimits

0xa69f,	// (0x0006d294) aid_size_touch_calib_3

0xa6af,	// (0x0006d2a4) aid_size_touch_calib_4_ParamLimits

0xa6af,	// (0x0006d2a4) aid_size_touch_calib_4

0xa6bd,	// (0x0006d2b2) main_touch_calib_button_group_pane_ParamLimits

0xa6bd,	// (0x0006d2b2) main_touch_calib_button_group_pane

0xa6cb,	// (0x0006d2c0) main_touch_calib_pane_g1_ParamLimits

0xa6d7,	// (0x0006d2cc) main_touch_calib_pane_g2_ParamLimits

0xa6e3,	// (0x0006d2d8) main_touch_calib_pane_g3_ParamLimits

0xa6ef,	// (0x0006d2e4) main_touch_calib_pane_g4_ParamLimits

0xf6de,	// (0x000722d3) main_touch_calib_pane_g_ParamLimits

0xa6fb,	// (0x0006d2f0) main_touch_calib_pane_t1_ParamLimits

0xa712,	// (0x0006d307) main_touch_calib_pane_t2_ParamLimits

0xa72b,	// (0x0006d320) main_touch_calib_pane_t3_ParamLimits

0xa741,	// (0x0006d336) main_touch_calib_pane_t4_ParamLimits

0xa757,	// (0x0006d34c) main_touch_calib_pane_t5_ParamLimits

0xf6e7,	// (0x000722dc) main_touch_calib_pane_t_ParamLimits

0x55aa,	// (0x0006819f) list_single_fp_cale_pane_g3_ParamLimits

0x55aa,	// (0x0006819f) list_single_fp_cale_pane_g3

0x09b0,	// (0x000635a5) bg_button_pane_cp012_ParamLimits

0x09b0,	// (0x000635a5) bg_vkb2_func_pane_cp03_ParamLimits

0xc546,	// (0x0006f13b) cell_vitu2_function_top_pane_g1_ParamLimits

0x09b0,	// (0x000635a5) bg_vkb2_func_pane_cp04_ParamLimits

0xd215,	// (0x0006fe0a) main_ncimui_button_group_pane_ParamLimits

0xd215,	// (0x0006fe0a) main_ncimui_button_group_pane

0xd27d,	// (0x0006fe72) main_ncimui_pane_t3_ParamLimits

0xd27d,	// (0x0006fe72) main_ncimui_pane_t3

0x354c,	// (0x00066141) phacti_button_group_pane

0x384c,	// (0x00066441) aid_size_list_single_double_ParamLimits

0xdf30,	// (0x00070b25) popup_ezdial_listscroll_window_ParamLimits

0xdf52,	// (0x00070b47) popup_number_entry_window_cp01_ParamLimits

0xdfea,	// (0x00070bdf) phacti_button_pane_ParamLimits

0xdfea,	// (0x00070bdf) phacti_button_pane

0x0256,	// (0x00062e4b) bg_button_pane_cp14

0x395c,	// (0x00066551) phacti_button_pane_t1

0xdffb,	// (0x00070bf0) main_touch_calib_button_pane_ParamLimits

0xdffb,	// (0x00070bf0) main_touch_calib_button_pane

0x0aab,	// (0x000636a0) bg_button_pane_cp18_ParamLimits

0x0aab,	// (0x000636a0) bg_button_pane_cp18

0x396a,	// (0x0006655f) main_touch_calib_button_pane_t1_ParamLimits

0x396a,	// (0x0006655f) main_touch_calib_button_pane_t1

0x3980,	// (0x00066575) main_touch_calib_button_pane_t2_ParamLimits

0x3980,	// (0x00066575) main_touch_calib_button_pane_t2

0x0001,

0xfd4e,	// (0x00072943) main_touch_calib_button_pane_t_ParamLimits

0xfd4e,	// (0x00072943) main_touch_calib_button_pane_t

0x0256,	// (0x00062e4b) cell_ncimui_button_pane

0x0256,	// (0x00062e4b) bg_button_pane_cp032

0x399e,	// (0x00066593) cell_ncimui_button_pane_t1

0xb75c,	// (0x0006e351) image3_infobar_pane_ParamLimits

0xb75c,	// (0x0006e351) image3_infobar_pane

0xd64e,	// (0x00070243) fs_bigclock_status_pane_ParamLimits

0xd64e,	// (0x00070243) fs_bigclock_status_pane

0xd65b,	// (0x00070250) main_fs_bigclock_clock_pane_ParamLimits

0xd65b,	// (0x00070250) main_fs_bigclock_clock_pane

0xd677,	// (0x0007026c) main_fs_bigclock_indi_pane_ParamLimits

0xd677,	// (0x0007026c) main_fs_bigclock_indi_pane

0xd6a5,	// (0x0007029a) main_fs_bigclock_swipe_pane_ParamLimits

0xd6a5,	// (0x0007029a) main_fs_bigclock_swipe_pane

0x0256,	// (0x00062e4b) main_fs_clock_dumped_data

0xd6df,	// (0x000702d4) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xd6df,	// (0x000702d4) list_single_fs_bigclock_indicator_pane_g1

0xd6fe,	// (0x000702f3) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xd6fe,	// (0x000702f3) list_single_fs_bigclock_indicator_pane_g2

0xd718,	// (0x0007030d) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xd718,	// (0x0007030d) list_single_fs_bigclock_indicator_pane_g3

0xd734,	// (0x00070329) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xd734,	// (0x00070329) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfbef,	// (0x000727e4) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfbef,	// (0x000727e4) list_single_fs_bigclock_indicator_pane_g

0xd763,	// (0x00070358) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xd763,	// (0x00070358) list_single_fs_bigclock_indicator_pane_t1

0xd78b,	// (0x00070380) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xd78b,	// (0x00070380) list_single_fs_bigclock_indicator_pane_t2

0xd7b3,	// (0x000703a8) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xd7b3,	// (0x000703a8) list_single_fs_bigclock_indicator_pane_t3

0xd7db,	// (0x000703d0) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xd7db,	// (0x000703d0) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfbfa,	// (0x000727ef) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfbfa,	// (0x000727ef) list_single_fs_bigclock_indicator_pane_t

0x39ac,	// (0x000665a1) image3_infobar_fav_pane_ParamLimits

0x39ac,	// (0x000665a1) image3_infobar_fav_pane

0x39bc,	// (0x000665b1) image3_infobar_loc_pane_ParamLimits

0x39bc,	// (0x000665b1) image3_infobar_loc_pane

0x39d2,	// (0x000665c7) image3_infobar_time_pane_ParamLimits

0x39d2,	// (0x000665c7) image3_infobar_time_pane

0x0d13,	// (0x00063908) image3_infobar_time_pane_g1

0x39e2,	// (0x000665d7) image3_infobar_time_pane_t1

0x0d13,	// (0x00063908) image3_infobar_loc_pane_g1

0x39f0,	// (0x000665e5) image3_infobar_loc_pane_g2

0x0001,

0xfd53,	// (0x00072948) image3_infobar_loc_pane_g

0x39f8,	// (0x000665ed) image3_infobar_loc_pane_t1

0x0d13,	// (0x00063908) image3_infobar_fav_pane_g1

0x3a06,	// (0x000665fb) image3_infobar_fav_pane_g2

0x0001,

0xfd58,	// (0x0007294d) image3_infobar_fav_pane_g

0x3a0e,	// (0x00066603) fs_bigclock_status_battery_pane

0x3a17,	// (0x0006660c) fs_bigclock_status_signal_pane

0x3a20,	// (0x00066615) fs_bigclock_status_title_pane

0x3a29,	// (0x0006661e) fs_bigclock_status_signal_pane_g1

0x3a32,	// (0x00066627) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd5d,	// (0x00072952) fs_bigclock_status_signal_pane_g

0x3a3a,	// (0x0006662f) fs_bigclock_status_battery_pane_g1

0x3a43,	// (0x00066638) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd62,	// (0x00072957) fs_bigclock_status_battery_pane_g

0x3a4b,	// (0x00066640) fs_bigclock_status_title_pane_t1

0xe00b,	// (0x00070c00) main_fs_bigclock_clock_pane_g1

0xe00b,	// (0x00070c00) main_fs_bigclock_clock_pane_g2

0xe01a,	// (0x00070c0f) main_fs_bigclock_clock_pane_g3

0xe01a,	// (0x00070c0f) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd67,	// (0x0007295c) main_fs_bigclock_clock_pane_g

0xe02a,	// (0x00070c1f) main_fs_bigclock_clock_pane_t1

0xe03f,	// (0x00070c34) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd70,	// (0x00072965) main_fs_bigclock_clock_pane_t

0x3a59,	// (0x0006664e) list_single_fs_bigclock_indicator_pane_ParamLimits

0x3a59,	// (0x0006664e) list_single_fs_bigclock_indicator_pane

0x3a6a,	// (0x0006665f) list_single_fs_bigclock_pane_ParamLimits

0x3a6a,	// (0x0006665f) list_single_fs_bigclock_pane

0x3a90,	// (0x00066685) main_fs_bigclock_indicator_pane_t1

0x3a9f,	// (0x00066694) list_single_fs_bigclock_pane_g1

0x3aa7,	// (0x0006669c) list_single_fs_bigclock_pane_t1

0x0d13,	// (0x00063908) main_fs_bigclock_swipe_pane_g1

0x3aea,	// (0x000666df) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd81,	// (0x00072976) main_fs_bigclock_swipe_pane_g

0x3af2,	// (0x000666e7) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x3af2,	// (0x000666e7) main_fs_bigclock_swipe_pane_t1

0x9303,	// (0x0006bef8) call_type_pane_ParamLimits

0x0256,	// (0x00062e4b) main_btmg_pane

0x6e39,	// (0x00069a2e) list_single_cale_mrui_row_pane_g2_ParamLimits

0x6e39,	// (0x00069a2e) list_single_cale_mrui_row_pane_g2

0x0002,

0xfcf4,	// (0x000728e9) list_single_cale_mrui_row_pane_g_ParamLimits

0xfcf4,	// (0x000728e9) list_single_cale_mrui_row_pane_g

0x6f67,	// (0x00069b5c) list_recal_vselct_arw_lo_pane

0x38af,	// (0x000664a4) list_recal_vselct_arw_up_pane

0x6f6f,	// (0x00069b64) list_recal_vselct_pane

0xe096,	// (0x00070c8b) btmg_button_pane

0xe0a2,	// (0x00070c97) main_btmg_pane_g1

0x0256,	// (0x00062e4b) bg_button_pane_cp044

0x3b0f,	// (0x00066704) btmg_button_pane_t1

0x4e66,	// (0x00067a5b) aid_listscroll_gen

0x09b0,	// (0x000635a5) main_cntbar_detail_pane

0x33e3,	// (0x00065fd8) list_cmail_folder_pane

0x56f8,	// (0x000682ed) sp_fs_scroll_pane_cp03_ParamLimits

0x6fff,	// (0x00069bf4) list_single_fs_dyc_pane_cp01_ParamLimits

0x6fff,	// (0x00069bf4) list_single_fs_dyc_pane_cp01

0x3b1d,	// (0x00066712) aid_size_cmail_indent

0x701c,	// (0x00069c11) list_single_dyc_row_pane_cp01

0xe0ca,	// (0x00070cbf) cntbar_detail_list_pane_ParamLimits

0xe0ca,	// (0x00070cbf) cntbar_detail_list_pane

0xe10a,	// (0x00070cff) main_cntbar_detail_cont_pane_ParamLimits

0xe10a,	// (0x00070cff) main_cntbar_detail_cont_pane

0x92f7,	// (0x0006beec) scroll_pane_cp032_ParamLimits

0x92f7,	// (0x0006beec) scroll_pane_cp032

0xe116,	// (0x00070d0b) cntbar_detail_list_event_pane_ParamLimits

0xe116,	// (0x00070d0b) cntbar_detail_list_event_pane

0xe0d8,	// (0x00070ccd) cntbar_detail_list_shct_pane

0x0f76,	// (0x00063b6b) aid_list_gen

0x3b2f,	// (0x00066724) aid_scroll

0x3b38,	// (0x0006672d) aid_size_touch_scroll_bar

0xe126,	// (0x00070d1b) aid_list_double

0xe12f,	// (0x00070d24) aid_list_single

0xe12f,	// (0x00070d24) aid_list_single_lg

0x7025,	// (0x00069c1a) aid_list_z_g_a_sm

0xe138,	// (0x00070d2d) aid_list_z_g_d

0x702d,	// (0x00069c22) aid_txt_z_prm

0x703b,	// (0x00069c30) aid_txt_z_prm_cp01

0x7049,	// (0x00069c3e) aid_txt_z_sec

0xe140,	// (0x00070d35) main_cntbar_detail_cont_pane_g1_ParamLimits

0xe140,	// (0x00070d35) main_cntbar_detail_cont_pane_g1

0xe14d,	// (0x00070d42) main_cntbar_detail_cont_pane_g2_ParamLimits

0xe14d,	// (0x00070d42) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd86,	// (0x0007297b) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd86,	// (0x0007297b) main_cntbar_detail_cont_pane_g

0x3b41,	// (0x00066736) main_cntbar_detail_cont_pane_t1

0x3b4f,	// (0x00066744) main_cntbar_detail_cont_pane_t2

0x3b5d,	// (0x00066752) main_cntbar_detail_cont_pane_t3

0x0002,

0xfd8b,	// (0x00072980) main_cntbar_detail_cont_pane_t

0xe159,	// (0x00070d4e) cell_cntbar_detail_list_shct_pane_ParamLimits

0xe159,	// (0x00070d4e) cell_cntbar_detail_list_shct_pane

0x3b6b,	// (0x00066760) cntbar_detail_list_shct_pane_g1

0x3b74,	// (0x00066769) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd92,	// (0x00072987) cntbar_detail_list_shct_pane_g

0xe16d,	// (0x00070d62) cntbar_detail_list_event_pane_g1_ParamLimits

0xe16d,	// (0x00070d62) cntbar_detail_list_event_pane_g1

0xe179,	// (0x00070d6e) cntbar_detail_list_event_pane_g2_ParamLimits

0xe179,	// (0x00070d6e) cntbar_detail_list_event_pane_g2

0x0005,

0xfd97,	// (0x0007298c) cntbar_detail_list_event_pane_g_ParamLimits

0xfd97,	// (0x0007298c) cntbar_detail_list_event_pane_g

0xe1e7,	// (0x00070ddc) cntbar_detail_list_event_pane_t1_ParamLimits

0xe1e7,	// (0x00070ddc) cntbar_detail_list_event_pane_t1

0xe1fc,	// (0x00070df1) cntbar_detail_list_event_pane_t2_ParamLimits

0xe1fc,	// (0x00070df1) cntbar_detail_list_event_pane_t2

0x0002,

0xfda4,	// (0x00072999) cntbar_detail_list_event_pane_t_ParamLimits

0xfda4,	// (0x00072999) cntbar_detail_list_event_pane_t

0x0d13,	// (0x00063908) cell_cntbar_detail_list_shct_pane_g1

0x969b,	// (0x0006c290) navi_pane_mv_g3

0x09b0,	// (0x000635a5) main_cntbar_detail_pane_ParamLimits

0x0256,	// (0x00062e4b) main_notif_wgt_pane

0xb3de,	// (0x0006dfd3) aid_tch_main_mp4_pane_g4

0xb647,	// (0x0006e23c) popup_slider_window_cp02

0x6f5d,	// (0x00069b52) list_recal_day_event_pane

0xe0aa,	// (0x00070c9f) cntbar_detail_btn_pane_ParamLimits

0xe0aa,	// (0x00070c9f) cntbar_detail_btn_pane

0xe0ba,	// (0x00070caf) cntbar_detail_btn_pane_cp01_ParamLimits

0xe0ba,	// (0x00070caf) cntbar_detail_btn_pane_cp01

0xe0d8,	// (0x00070ccd) cntbar_detail_list_shct_pane_ParamLimits

0xe0e4,	// (0x00070cd9) cntbar_detail_pane_g1_ParamLimits

0xe0e4,	// (0x00070cd9) cntbar_detail_pane_g1

0xe0f4,	// (0x00070ce9) cntbar_detail_pane_t1_ParamLimits

0xe0f4,	// (0x00070ce9) cntbar_detail_pane_t1

0xe185,	// (0x00070d7a) cntbar_detail_list_event_pane_g3_ParamLimits

0xe185,	// (0x00070d7a) cntbar_detail_list_event_pane_g3

0xe19d,	// (0x00070d92) cntbar_detail_list_event_pane_g4_ParamLimits

0xe19d,	// (0x00070d92) cntbar_detail_list_event_pane_g4

0xe1b5,	// (0x00070daa) cntbar_detail_list_event_pane_g5_ParamLimits

0xe1b5,	// (0x00070daa) cntbar_detail_list_event_pane_g5

0xe1cd,	// (0x00070dc2) cntbar_detail_list_event_pane_g6_ParamLimits

0xe1cd,	// (0x00070dc2) cntbar_detail_list_event_pane_g6

0xe211,	// (0x00070e06) cntbar_detail_list_event_pane_t3_ParamLimits

0xe211,	// (0x00070e06) cntbar_detail_list_event_pane_t3

0xe223,	// (0x00070e18) popup_notif_wgt_window_ParamLimits

0xe223,	// (0x00070e18) popup_notif_wgt_window

0xe233,	// (0x00070e28) popup_submenu_window_cp01_ParamLimits

0xe233,	// (0x00070e28) popup_submenu_window_cp01

0x0cbe,	// (0x000638b3) bg_popup_window_pane_cp10

0x3b7d,	// (0x00066772) listscroll_notif_wgt_pane

0x3b8f,	// (0x00066784) list_notif_wgt_window

0x3b98,	// (0x0006678d) scroll_pane_cp033

0xe243,	// (0x00070e38) list_notif_wgt_row_pane_ParamLimits

0xe243,	// (0x00070e38) list_notif_wgt_row_pane

0x3ba1,	// (0x00066796) aid_size_list_notif_wgt_del

0x3bae,	// (0x000667a3) list_notif_wgt_row_pane_g1

0x3bba,	// (0x000667af) list_notif_wgt_row_pane_g2

0x3bc9,	// (0x000667be) list_notif_wgt_row_pane_g3

0x0002,

0xfdab,	// (0x000729a0) list_notif_wgt_row_pane_g

0x3bd6,	// (0x000667cb) list_notif_wgt_row_pane_t1

0x3bec,	// (0x000667e1) list_notif_wgt_row_pane_t2

0x3bfe,	// (0x000667f3) list_notif_wgt_row_pane_t3

0x0002,

0xfdb2,	// (0x000729a7) list_notif_wgt_row_pane_t

0x2435,	// (0x0006502a) list_recal_day_event_pane_g1

0x3c10,	// (0x00066805) list_recal_day_event_pane_t1

0x0256,	// (0x00062e4b) bg_button_pane_cp045

0xe257,	// (0x00070e4c) cntbar_detail_btn_pane_t1

0x17b0,	// (0x000643a5) main_callh_pane_ParamLimits

0x17b0,	// (0x000643a5) main_callh_pane

0x0256,	// (0x00062e4b) main_coverflow0_pane

0x0256,	// (0x00062e4b) main_wgtman_pane

0xd6bd,	// (0x000702b2) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xd6bd,	// (0x000702b2) main_fs_bigclock_unlock_btn_pane

0xdc0f,	// (0x00070804) bg_button_pane_cp16

0xdc1f,	// (0x00070814) cell_tport_appsw_pane_g3

0xe265,	// (0x00070e5a) cf0_flow_pane_ParamLimits

0xe265,	// (0x00070e5a) cf0_flow_pane

0x3c1f,	// (0x00066814) listscroll_cf0_pane

0x3c2a,	// (0x0006681f) main_cf0_pane_g1

0xe274,	// (0x00070e69) main_cf0_pane_t1_ParamLimits

0xe274,	// (0x00070e69) main_cf0_pane_t1

0xe288,	// (0x00070e7d) main_cf0_pane_t2_ParamLimits

0xe288,	// (0x00070e7d) main_cf0_pane_t2

0x0001,

0xfdbe,	// (0x000729b3) main_cf0_pane_t_ParamLimits

0xfdbe,	// (0x000729b3) main_cf0_pane_t

0x3c3c,	// (0x00066831) scroll_pane_cp11

0xe29c,	// (0x00070e91) cf0_flow_pane_g1

0xe2a4,	// (0x00070e99) cf0_flow_pane_g2

0x0001,

0xfdc3,	// (0x000729b8) cf0_flow_pane_g

0xe2ac,	// (0x00070ea1) cf0_flow_pane_t1

0x0256,	// (0x00062e4b) main_call6_pane

0x0256,	// (0x00062e4b) main_calllock_pane

0xe2ba,	// (0x00070eaf) call6_btn_grp_pane_ParamLimits

0xe2ba,	// (0x00070eaf) call6_btn_grp_pane

0xe2c7,	// (0x00070ebc) call6_pane_g1_ParamLimits

0xe2c7,	// (0x00070ebc) call6_pane_g1

0xe2d7,	// (0x00070ecc) popup_call6_1st_window_ParamLimits

0xe2d7,	// (0x00070ecc) popup_call6_1st_window

0xe2e7,	// (0x00070edc) popup_call6_2nd_window_ParamLimits

0xe2e7,	// (0x00070edc) popup_call6_2nd_window

0xe2f7,	// (0x00070eec) cell_call6_btn_pane_ParamLimits

0xe2f7,	// (0x00070eec) cell_call6_btn_pane

0x0cbe,	// (0x000638b3) bg_popup_call2_in_pane_cp03

0x3c47,	// (0x0006683c) popup_call6_1st_window_g1

0x3c4f,	// (0x00066844) popup_call6_1st_window_g2

0x3c57,	// (0x0006684c) popup_call6_1st_window_g3

0x0002,

0xfdc8,	// (0x000729bd) popup_call6_1st_window_g

0x3c5f,	// (0x00066854) popup_call6_1st_window_t1

0x3c6e,	// (0x00066863) popup_call6_1st_window_t2

0x3c7e,	// (0x00066873) popup_call6_1st_window_t3

0x0002,

0xfdcf,	// (0x000729c4) popup_call6_1st_window_t

0x0cbe,	// (0x000638b3) bg_popup_call2_in_pane_cp04

0x3c8e,	// (0x00066883) popup_call6_2nd_window_g1

0x3c96,	// (0x0006688b) popup_call6_2nd_window_g2

0x3c9e,	// (0x00066893) popup_call6_2nd_window_g3

0x0002,

0xfdd6,	// (0x000729cb) popup_call6_2nd_window_g

0x3ca6,	// (0x0006689b) popup_call6_2nd_window_t1

0x0256,	// (0x00062e4b) bg_button_pane_cp15

0x3cec,	// (0x000668e1) cell_call6_btn_pane_g1

0xe308,	// (0x00070efd) cell_call6_btn_pane_t1

0xe317,	// (0x00070f0c) listscroll_wgtman_pane_ParamLimits

0xe317,	// (0x00070f0c) listscroll_wgtman_pane

0xe333,	// (0x00070f28) wgtman_btn_pane_ParamLimits

0xe333,	// (0x00070f28) wgtman_btn_pane

0x1577,	// (0x0006416c) aid_scroll_copy1

0x3cb5,	// (0x000668aa) list_wgtman_pane

0xe368,	// (0x00070f5d) wgtman_btn_pane_g1_ParamLimits

0xe368,	// (0x00070f5d) wgtman_btn_pane_g1

0xe390,	// (0x00070f85) wgtman_btn_pane_t1_ParamLimits

0xe390,	// (0x00070f85) wgtman_btn_pane_t1

0x3cbf,	// (0x000668b4) wgtman_btn_pane_t2_ParamLimits

0x3cbf,	// (0x000668b4) wgtman_btn_pane_t2

0x0001,

0xfddd,	// (0x000729d2) wgtman_btn_pane_t_ParamLimits

0xfddd,	// (0x000729d2) wgtman_btn_pane_t

0xe3c7,	// (0x00070fbc) listrow_wgtman_pane_ParamLimits

0xe3c7,	// (0x00070fbc) listrow_wgtman_pane

0xe3de,	// (0x00070fd3) listrow_wgtman_pane_g1

0xe3eb,	// (0x00070fe0) listrow_wgtman_pane_g2

0x0001,

0xfde2,	// (0x000729d7) listrow_wgtman_pane_g

0x7057,	// (0x00069c4c) listrow_wgtman_pane_t1

0x706f,	// (0x00069c64) listrow_wgtman_pane_t2

0x0001,

0xfde7,	// (0x000729dc) listrow_wgtman_pane_t

0x7095,	// (0x00069c8a) wait_bar_pane_cp09

0x3cd6,	// (0x000668cb) main_calllock_btn_pane

0x3ce0,	// (0x000668d5) main_calllock_pane_g1

0x0256,	// (0x00062e4b) bg_button_pane_cp17

0x3cec,	// (0x000668e1) main_calllock_btn_pane_g1

0x3cf5,	// (0x000668ea) main_calllock_btn_pane_t1

0x0256,	// (0x00062e4b) main_dialer3_pane

0x0256,	// (0x00062e4b) main_fmrd2_pane

0x0d13,	// (0x00063908) main_fs_bigclock_unlock_btn_pane_g1

0xe411,	// (0x00071006) main_fs_bigclock_unlock_btn_pane_t1

0xe41f,	// (0x00071014) area_fmrd2_info_pane_ParamLimits

0xe41f,	// (0x00071014) area_fmrd2_info_pane

0xe42b,	// (0x00071020) area_fmrd2_visual_pane_ParamLimits

0xe42b,	// (0x00071020) area_fmrd2_visual_pane

0xe439,	// (0x0007102e) fmrd2_indi_pane_ParamLimits

0xe439,	// (0x0007102e) fmrd2_indi_pane

0xe446,	// (0x0007103b) area_fmrd2_visual_pane_g1

0xe44e,	// (0x00071043) area_fmrd2_visual_pane_t1

0xe45e,	// (0x00071053) area_fmrd2_visual_pane_t2

0xe46e,	// (0x00071063) area_fmrd2_visual_pane_t3

0x0002,

0xfdf1,	// (0x000729e6) area_fmrd2_visual_pane_t

0xe47e,	// (0x00071073) area_fmrd2_info_pane_g1

0xe486,	// (0x0007107b) area_fmrd2_info_pane_t1

0xe496,	// (0x0007108b) area_fmrd2_info_pane_t2

0xe4a6,	// (0x0007109b) area_fmrd2_info_pane_t3

0xe4b6,	// (0x000710ab) area_fmrd2_info_pane_t4

0x0003,

0xfdf8,	// (0x000729ed) area_fmrd2_info_pane_t

0xe4c6,	// (0x000710bb) fmrd2_indi_pane_t1

0xe4d6,	// (0x000710cb) fmrd2_indi_pane_t2

0xe4e6,	// (0x000710db) fmrd2_indi_pane_t3

0x0002,

0xfe01,	// (0x000729f6) fmrd2_indi_pane_t

0xd745,	// (0x0007033a) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xd745,	// (0x0007033a) list_single_fs_bigclock_indicator_pane_g5

0xd7fa,	// (0x000703ef) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xd7fa,	// (0x000703ef) list_single_fs_bigclock_indicator_pane_t5

0xdd6e,	// (0x00070963) aid_cell_bcale_month_pane_ParamLimits

0xdd6e,	// (0x00070963) aid_cell_bcale_month_pane

0xdd8c,	// (0x00070981) bcale_month_pane_ParamLimits

0xdd8c,	// (0x00070981) bcale_month_pane

0xddaa,	// (0x0007099f) bcale_preview_pane_ParamLimits

0xddaa,	// (0x0007099f) bcale_preview_pane

0x3aa7,	// (0x0006669c) list_single_fs_bigclock_pane_t1_ParamLimits

0x3ac6,	// (0x000666bb) list_single_fs_bigclock_pane_t2_ParamLimits

0x3ac6,	// (0x000666bb) list_single_fs_bigclock_pane_t2

0x0001,

0xfd7c,	// (0x00072971) list_single_fs_bigclock_pane_t_ParamLimits

0xfd7c,	// (0x00072971) list_single_fs_bigclock_pane_t

0xe409,	// (0x00070ffe) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfdec,	// (0x000729e1) main_fs_bigclock_unlock_btn_pane_g

0xe4f6,	// (0x000710eb) aid_dia3_key_size_ParamLimits

0xe4f6,	// (0x000710eb) aid_dia3_key_size

0xe502,	// (0x000710f7) aid_dia3_listrow_size_ParamLimits

0xe502,	// (0x000710f7) aid_dia3_listrow_size

0xe512,	// (0x00071107) dia3_keypad_fun_pane_ParamLimits

0xe512,	// (0x00071107) dia3_keypad_fun_pane

0xe522,	// (0x00071117) dia3_keypad_num_pane_ParamLimits

0xe522,	// (0x00071117) dia3_keypad_num_pane

0xe532,	// (0x00071127) dia3_listscroll_pane_ParamLimits

0xe532,	// (0x00071127) dia3_listscroll_pane

0xe540,	// (0x00071135) dia3_numentry_pane_ParamLimits

0xe540,	// (0x00071135) dia3_numentry_pane

0x3d04,	// (0x000668f9) dia3_list_pane

0xe54e,	// (0x00071143) scroll_pane_cp12

0x0256,	// (0x00062e4b) bg_dia3_numentry_pane

0xe559,	// (0x0007114e) dia3_numentry_pane_t1

0xe568,	// (0x0007115d) cell_dia3_key_num_pane

0xe570,	// (0x00071165) cell_dia3_key0_fun_pane_ParamLimits

0xe570,	// (0x00071165) cell_dia3_key0_fun_pane

0xe57d,	// (0x00071172) cell_dia3_key1_fun_pane_ParamLimits

0xe57d,	// (0x00071172) cell_dia3_key1_fun_pane

0xe58a,	// (0x0007117f) dia3_listrow_pane

0x2dab,	// (0x000659a0) bg_dia3_numentry_pane_g1

0x0256,	// (0x00062e4b) bg_button_pane_cp21

0xe597,	// (0x0007118c) cell_dia3_key_num_pane_t1

0xe5a5,	// (0x0007119a) cell_dia3_key_num_pane_t2

0xe5b4,	// (0x000711a9) cell_dia3_key_num_pane_t3

0xe5c3,	// (0x000711b8) cell_dia3_key_num_pane_t4

0x0003,

0xfe08,	// (0x000729fd) cell_dia3_key_num_pane_t

0x0256,	// (0x00062e4b) bg_button_pane_cp19

0xe5d2,	// (0x000711c7) cell_dia3_key0_fun_pane_g1

0x0256,	// (0x00062e4b) bg_button_pane_cp20

0xe5da,	// (0x000711cf) cell_dia3_key1_fun_pane_g1

0xe5e2,	// (0x000711d7) area_left_week_number_pane

0xe5f5,	// (0x000711ea) area_top_day_name_pane

0xe603,	// (0x000711f8) frame_month_view_pane

0x3d0f,	// (0x00066904) grid_month_view_pane

0xe618,	// (0x0007120d) cell_top_day_name_pane_ParamLimits

0xe618,	// (0x0007120d) cell_top_day_name_pane

0xe634,	// (0x00071229) cell_area_left_week_number_pane_ParamLimits

0xe634,	// (0x00071229) cell_area_left_week_number_pane

0xe655,	// (0x0007124a) cell_month_view_pane_ParamLimits

0xe655,	// (0x0007124a) cell_month_view_pane

0x3d1d,	// (0x00066912) frm_month_g1

0xe681,	// (0x00071276) frm_month_g2

0xe692,	// (0x00071287) frm_month_g3

0xe6a3,	// (0x00071298) frm_month_g4

0xe6b4,	// (0x000712a9) frm_month_g5

0xe6c5,	// (0x000712ba) frm_month_g6

0xe6d8,	// (0x000712cd) frm_month_g7

0x3d2a,	// (0x0006691f) frm_month_g8

0xe6eb,	// (0x000712e0) frm_month_g9

0xe6f8,	// (0x000712ed) frm_month_g10

0xe705,	// (0x000712fa) frm_month_g11

0xe712,	// (0x00071307) frm_month_g12

0xe71f,	// (0x00071314) frm_month_g13

0xe72e,	// (0x00071323) frm_month_g14

0xe73d,	// (0x00071332) frm_month_g15

0xe74c,	// (0x00071341) frm_month_g16

0x000f,

0xfe11,	// (0x00072a06) frm_month_g

0x3d37,	// (0x0006692c) cell_top_day_name_pane_t1

0xe75b,	// (0x00071350) cell_area_left_week_number_pane_g1

0xe76a,	// (0x0007135f) cell_area_left_week_number_pane_t1

0x0a17,	// (0x0006360c) cell_month_view_pane_g1

0xe780,	// (0x00071375) cell_month_view_pane_t1

0x0256,	// (0x00062e4b) main_fps_pane

0x320b,	// (0x00065e00) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x320b,	// (0x00065e00) cmail_ddmenu_btn02_pane_cp1

0x3227,	// (0x00065e1c) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x3227,	// (0x00065e1c) cmail_ddmenu_btn02_pane_cp2

0xdf8a,	// (0x00070b7f) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xdf8a,	// (0x00070b7f) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfd2f,	// (0x00072924) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfd2f,	// (0x00072924) cmail_ddmenu_btn02_pane_g

0xdfa8,	// (0x00070b9d) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xdfa8,	// (0x00070b9d) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfd34,	// (0x00072929) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfd34,	// (0x00072929) cmail_ddmenu_btn02_pane_t

0xe796,	// (0x0007138b) fps_text_pane_ParamLimits

0xe796,	// (0x0007138b) fps_text_pane

0xe7a3,	// (0x00071398) main_fps_pane_g1_ParamLimits

0xe7a3,	// (0x00071398) main_fps_pane_g1

0xe7af,	// (0x000713a4) wait_bar_pane_cp010_ParamLimits

0xe7af,	// (0x000713a4) wait_bar_pane_cp010

0xe7bb,	// (0x000713b0) fps_text_pane_t1_ParamLimits

0xe7bb,	// (0x000713b0) fps_text_pane_t1

0xbaf6,	// (0x0006e6eb) cam4_image_uncrop_pane_g1

0xbaff,	// (0x0006e6f4) cam4_image_uncrop_pane_g2

0xbb08,	// (0x0006e6fd) cam4_image_uncrop_pane_g3

0xbb11,	// (0x0006e706) cam4_image_uncrop_pane_g4

0x0003,

0xf87a,	// (0x0007246f) cam4_image_uncrop_pane_g

0xe58a,	// (0x0007117f) dia3_listrow_pane_ParamLimits

0x0256,	// (0x00062e4b) main_phob2_pane

0xdbf1,	// (0x000707e6) cell_tport_appsw_pane_cp02_ParamLimits

0xdbf1,	// (0x000707e6) cell_tport_appsw_pane_cp02

0xdc00,	// (0x000707f5) cell_tport_appsw_pane_cp03_ParamLimits

0xdc00,	// (0x000707f5) cell_tport_appsw_pane_cp03

0x0256,	// (0x00062e4b) phob2_contact_card_pane

0x0256,	// (0x00062e4b) phob2_listscroll_pane

0x3d4a,	// (0x0006693f) phob2_list_pane

0x3d52,	// (0x00066947) scroll_pane_cp034

0xe7d4,	// (0x000713c9) phob2_cc_data_pane_ParamLimits

0xe7d4,	// (0x000713c9) phob2_cc_data_pane

0xe7eb,	// (0x000713e0) phob2_cc_listscroll_pane_ParamLimits

0xe7eb,	// (0x000713e0) phob2_cc_listscroll_pane

0xe3c7,	// (0x00070fbc) list_double_large_graphic_phob2_pane_ParamLimits

0xe3c7,	// (0x00070fbc) list_double_large_graphic_phob2_pane

0xe807,	// (0x000713fc) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xe807,	// (0x000713fc) list_double_large_graphic_phob2_pane_g1

0x70a7,	// (0x00069c9c) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x70a7,	// (0x00069c9c) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfe32,	// (0x00072a27) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfe32,	// (0x00072a27) list_double_large_graphic_phob2_pane_g

0x70bf,	// (0x00069cb4) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x70bf,	// (0x00069cb4) list_double_large_graphic_phob2_pane_t1

0x70d4,	// (0x00069cc9) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x70d4,	// (0x00069cc9) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfe3b,	// (0x00072a30) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfe3b,	// (0x00072a30) list_double_large_graphic_phob2_pane_t

0x0256,	// (0x00062e4b) list_highlight_pane_cp024

0xe822,	// (0x00071417) phob2_cc_button_pane

0xe82a,	// (0x0007141f) phob2_cc_data_pane_g1_ParamLimits

0xe82a,	// (0x0007141f) phob2_cc_data_pane_g1

0xe83f,	// (0x00071434) phob2_cc_data_pane_g2_ParamLimits

0xe83f,	// (0x00071434) phob2_cc_data_pane_g2

0x0001,

0xfe40,	// (0x00072a35) phob2_cc_data_pane_g_ParamLimits

0xfe40,	// (0x00072a35) phob2_cc_data_pane_g

0xe84f,	// (0x00071444) phob2_cc_data_pane_t1_ParamLimits

0xe84f,	// (0x00071444) phob2_cc_data_pane_t1

0xe868,	// (0x0007145d) phob2_cc_data_pane_t2_ParamLimits

0xe868,	// (0x0007145d) phob2_cc_data_pane_t2

0xe881,	// (0x00071476) phob2_cc_data_pane_t3_ParamLimits

0xe881,	// (0x00071476) phob2_cc_data_pane_t3

0x0002,

0xfe45,	// (0x00072a3a) phob2_cc_data_pane_t_ParamLimits

0xfe45,	// (0x00072a3a) phob2_cc_data_pane_t

0x3d5a,	// (0x0006694f) phob2_cc_list_pane_ParamLimits

0x3d5a,	// (0x0006694f) phob2_cc_list_pane

0x24cc,	// (0x000650c1) scroll_pane_cp035_ParamLimits

0x24cc,	// (0x000650c1) scroll_pane_cp035

0x09b0,	// (0x000635a5) bg_button_pane_cp033

0x3d66,	// (0x0006695b) phob2_cc_button_pane_g1

0x3d72,	// (0x00066967) phob2_cc_button_pane_t1

0x3d87,	// (0x0006697c) phob2_cc_button_pane_t2

0x0001,

0xfe4c,	// (0x00072a41) phob2_cc_button_pane_t

0xe89a,	// (0x0007148f) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xe89a,	// (0x0007148f) list_double_large_graphic_phob2_cc_pane

0xe8e9,	// (0x000714de) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xe8e9,	// (0x000714de) list_double_large_graphic_phob2_cc_pane_g1

0x70e9,	// (0x00069cde) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x70e9,	// (0x00069cde) list_double_large_graphic_phob2_cc_pane_g2

0x70f8,	// (0x00069ced) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x70f8,	// (0x00069ced) list_double_large_graphic_phob2_cc_pane_g3

0x7107,	// (0x00069cfc) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x7107,	// (0x00069cfc) list_double_large_graphic_phob2_cc_pane_g4

0x7118,	// (0x00069d0d) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x7118,	// (0x00069d0d) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe51,	// (0x00072a46) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe51,	// (0x00072a46) list_double_large_graphic_phob2_cc_pane_g

0x7127,	// (0x00069d1c) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x7127,	// (0x00069d1c) list_double_large_graphic_phob2_cc_pane_t1

0x7150,	// (0x00069d45) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x7150,	// (0x00069d45) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe5c,	// (0x00072a51) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe5c,	// (0x00072a51) list_double_large_graphic_phob2_cc_pane_t

0x3d99,	// (0x0006698e) list_highlight_pane_cp025_ParamLimits

0x3d99,	// (0x0006698e) list_highlight_pane_cp025

0x09b0,	// (0x000635a5) bg_button_pane_cp033_ParamLimits

0x3d66,	// (0x0006695b) phob2_cc_button_pane_g1_ParamLimits

0x3d72,	// (0x00066967) phob2_cc_button_pane_t1_ParamLimits

0x3d87,	// (0x0006697c) phob2_cc_button_pane_t2_ParamLimits

0xfe4c,	// (0x00072a41) phob2_cc_button_pane_t_ParamLimits

0x746a,	// (0x0006a05f) popup_wgtman_window

0x2305,	// (0x00064efa) scroll_pane_cp038

0xe350,	// (0x00070f45) wgtman_btn_pane_cp_01_ParamLimits

0xe350,	// (0x00070f45) wgtman_btn_pane_cp_01

0x3da7,	// (0x0006699c) wgtman_content_pane

0x3db0,	// (0x000669a5) wgtman_heading_pane

0x0256,	// (0x00062e4b) bg_heading_pane_cp02

0x3db9,	// (0x000669ae) wgtman_heading_pane_g1

0x3dc1,	// (0x000669b6) wgtman_heading_pane_t1

0x3dcf,	// (0x000669c4) scroll_pane_cp036

0x3dd7,	// (0x000669cc) wgtman_list_pane

0x30bf,	// (0x00065cb4) wgtman_list_pane_t1_ParamLimits

0x30bf,	// (0x00065cb4) wgtman_list_pane_t1

0xba53,	// (0x0006e648) cam4_grid_pane

0x674b,	// (0x00069340) bg_button_pane_cp015_ParamLimits

0xc70f,	// (0x0006f304) bg_button_pane_cp016_ParamLimits

0xc722,	// (0x0006f317) bg_button_pane_cp017_ParamLimits

0x678f,	// (0x00069384) popup_vitu2_query_window_g3_ParamLimits

0x678f,	// (0x00069384) popup_vitu2_query_window_g3

0x6808,	// (0x000693fd) popup_vitu2_query_window_t6_ParamLimits

0x6808,	// (0x000693fd) popup_vitu2_query_window_t6

0x6833,	// (0x00069428) popup_vitu2_query_window_t7_ParamLimits

0x6833,	// (0x00069428) popup_vitu2_query_window_t7

0xf071,	// (0x00071c66) cam4_grid_pane_g1

0xf07a,	// (0x00071c6f) cam4_grid_pane_g2

0x3ddf,	// (0x000669d4) cam4_grid_pane_g3

0x3de8,	// (0x000669dd) cam4_grid_pane_g4

0x0003,

0xfe61,	// (0x00072a56) cam4_grid_pane_g

0x813c,	// (0x0006ad31) aid_placing_vt_slider_lsc_ParamLimits

0x846f,	// (0x0006b064) vidtel_button_pane_ParamLimits

0x846f,	// (0x0006b064) vidtel_button_pane

0x0256,	// (0x00062e4b) bg_button_pane_cp034

0x3df3,	// (0x000669e8) vidtel_button_pane_g1

0x3dfb,	// (0x000669f0) vidtel_button_pane_t1

0x2413,	// (0x00065008) aid_size_vtel_slider_touch

0x24cc,	// (0x000650c1) scroll_pane_cp039

0xd3ec,	// (0x0006ffe1) ncim_query_button_pane_cp01_ParamLimits

0xd40b,	// (0x00070000) ncimui_query_pane_g1_ParamLimits

0x09b0,	// (0x000635a5) input_focus_pane_cp012_ParamLimits

0x2de9,	// (0x000659de) ncim_query_entry_pane_t1_ParamLimits

0x24cc,	// (0x000650c1) scroll_pane_cp039_ParamLimits

0x960d,	// (0x0006c202) navi_pane_bcale_mc_g1

0x9615,	// (0x0006c20a) navi_pane_bcale_mc_t1

0x325d,	// (0x00065e52) main_sp_fs_email_pane_g1

0x3269,	// (0x00065e5e) main_sp_fs_email_pane_g2

0x0001,

0xfc64,	// (0x00072859) main_sp_fs_email_pane_g

0x3734,	// (0x00066329) list_single_cale_mrui_row_pane_g3_ParamLimits

0x3734,	// (0x00066329) list_single_cale_mrui_row_pane_g3

0x6fbd,	// (0x00069bb2) list_single_recal_day_pane_g5_event_pane

0x6fd3,	// (0x00069bc8) list_single_recal_day_pane_g7

0x3e11,	// (0x00066a06) list_recal_day_event_pane_cp01

0x3e1a,	// (0x00066a0f) list_recal_vselct_arw_lo_pane_cp01

0x3e22,	// (0x00066a17) list_recal_vselct_arw_up_pane_cp01

0x3e2a,	// (0x00066a1f) list_recal_vselct_pane_cp01

0x2435,	// (0x0006502a) list_recal_day_event_pane_cp01_g1

0x7179,	// (0x00069d6e) list_recal_day_event_pane_cp01_t1

0x6fdb,	// (0x00069bd0) list_single_recal_day_pane_t1_ParamLimits

0x6fed,	// (0x00069be2) list_single_recal_day_pane_t2_ParamLimits

0xfd44,	// (0x00072939) list_single_recal_day_pane_t_ParamLimits

0x098e,	// (0x00063583) bg_notes_pane_ParamLimits

0x0a6f,	// (0x00063664) list_notes_pane_ParamLimits

0x7633,	// (0x0006a228) scroll_pane_cp06_ParamLimits

0x0aab,	// (0x000636a0) main_notes_pane_ParamLimits

0x09b0,	// (0x000635a5) main_welc_pane

0xe909,	// (0x000714fe) main_welc_body_pane_ParamLimits

0xe909,	// (0x000714fe) main_welc_body_pane

0xe924,	// (0x00071519) main_welc_opti_pane_ParamLimits

0xe924,	// (0x00071519) main_welc_opti_pane

0xe985,	// (0x0007157a) main_welc_pane_t1_ParamLimits

0xe985,	// (0x0007157a) main_welc_pane_t1

0xeaab,	// (0x000716a0) main_welc_body_row_pane_ParamLimits

0xeaab,	// (0x000716a0) main_welc_body_row_pane

0x0a09,	// (0x000635fe) main_welc_opti_row_pane_ParamLimits

0x0a09,	// (0x000635fe) main_welc_opti_row_pane

0x3e61,	// (0x00066a56) main_welc_opti_row_pane_g1

0xeac5,	// (0x000716ba) main_welc_opti_row_pane_t1

0x3e69,	// (0x00066a5e) main_welc_body_row_pane_t1

0x3b87,	// (0x0006677c) popup_notif_wgt_heading_pane

0x3ba1,	// (0x00066796) aid_size_list_notif_wgt_del_ParamLimits

0x3bae,	// (0x000667a3) list_notif_wgt_row_pane_g1_ParamLimits

0x3bba,	// (0x000667af) list_notif_wgt_row_pane_g2_ParamLimits

0x3bc9,	// (0x000667be) list_notif_wgt_row_pane_g3_ParamLimits

0xfdab,	// (0x000729a0) list_notif_wgt_row_pane_g_ParamLimits

0x3bd6,	// (0x000667cb) list_notif_wgt_row_pane_t1_ParamLimits

0x3bec,	// (0x000667e1) list_notif_wgt_row_pane_t2_ParamLimits

0x3bfe,	// (0x000667f3) list_notif_wgt_row_pane_t3_ParamLimits

0xfdb2,	// (0x000729a7) list_notif_wgt_row_pane_t_ParamLimits

0xe3de,	// (0x00070fd3) listrow_wgtman_pane_g1_ParamLimits

0xe3eb,	// (0x00070fe0) listrow_wgtman_pane_g2_ParamLimits

0xfde2,	// (0x000729d7) listrow_wgtman_pane_g_ParamLimits

0x7057,	// (0x00069c4c) listrow_wgtman_pane_t1_ParamLimits

0x706f,	// (0x00069c64) listrow_wgtman_pane_t2_ParamLimits

0xfde7,	// (0x000729dc) listrow_wgtman_pane_t_ParamLimits

0x7095,	// (0x00069c8a) wait_bar_pane_cp09_ParamLimits

0x0256,	// (0x00062e4b) bg_popup_heading_pane_cp02

0x3e78,	// (0x00066a6d) popup_notif_wgt_heading_pane_g1

0x3e80,	// (0x00066a75) popup_notif_wgt_heading_pane_t1

0x0256,	// (0x00062e4b) main_vids_pane

0x0256,	// (0x00062e4b) vids_listscroll_pane

0xead4,	// (0x000716c9) scroll_pane_cp040

0x0256,	// (0x00062e4b) vids_list_pane

0xeadf,	// (0x000716d4) vids_list_double_pane_ParamLimits

0xeadf,	// (0x000716d4) vids_list_double_pane

0xeaf3,	// (0x000716e8) vids_list_double_pane_g1

0xeafc,	// (0x000716f1) vids_list_double_pane_t1

0xeb0c,	// (0x00071701) vids_list_double_pane_t2

0x0001,

0xfe80,	// (0x00072a75) vids_list_double_pane_t

0x09b0,	// (0x000635a5) main_ncimui_pane_ParamLimits

0xd22d,	// (0x0006fe22) main_ncimui_pane_g1_ParamLimits

0xd23b,	// (0x0006fe30) main_ncimui_pane_g2_ParamLimits

0xd23b,	// (0x0006fe30) main_ncimui_pane_g2

0x0001,

0xfb65,	// (0x0007275a) main_ncimui_pane_g_ParamLimits

0xfb65,	// (0x0007275a) main_ncimui_pane_g

0xe93f,	// (0x00071534) main_welc_pane_g1_ParamLimits

0xe93f,	// (0x00071534) main_welc_pane_g1

0xe94b,	// (0x00071540) main_welc_pane_g2_ParamLimits

0xe94b,	// (0x00071540) main_welc_pane_g2

0x0003,

0xfe6a,	// (0x00072a5f) main_welc_pane_g_ParamLimits

0xfe6a,	// (0x00072a5f) main_welc_pane_g

0x098e,	// (0x00063583) listscroll_mce_pane_ParamLimits

0x96d7,	// (0x0006c2cc) wait_bar_pane_cp10

0x4e6e,	// (0x00067a63) main_cale_day_pane_ParamLimits

0x4e6e,	// (0x00067a63) main_cale_week_pane_ParamLimits

0x098e,	// (0x00063583) main_messa_pane_ParamLimits

0xaea8,	// (0x0006da9d) main_clock2_btn_pane_ParamLimits

0xaea8,	// (0x0006da9d) main_clock2_btn_pane

0x5624,	// (0x00068219) main_clock2_btn_pane_cp01_ParamLimits

0x5624,	// (0x00068219) main_clock2_btn_pane_cp01

0x36c0,	// (0x000662b5) list_cale_mrui_pane_ParamLimits

0x3c34,	// (0x00066829) main_cf0_pane_g2

0x0001,

0xfdb9,	// (0x000729ae) main_cf0_pane_g

0xe5e2,	// (0x000711d7) area_left_week_number_pane_ParamLimits

0xe5f5,	// (0x000711ea) area_top_day_name_pane_ParamLimits

0xe603,	// (0x000711f8) frame_month_view_pane_ParamLimits

0x3d0f,	// (0x00066904) grid_month_view_pane_ParamLimits

0x3d1d,	// (0x00066912) frm_month_g1_ParamLimits

0xe681,	// (0x00071276) frm_month_g2_ParamLimits

0xe692,	// (0x00071287) frm_month_g3_ParamLimits

0xe6a3,	// (0x00071298) frm_month_g4_ParamLimits

0xe6b4,	// (0x000712a9) frm_month_g5_ParamLimits

0xe6c5,	// (0x000712ba) frm_month_g6_ParamLimits

0xe6d8,	// (0x000712cd) frm_month_g7_ParamLimits

0x3d2a,	// (0x0006691f) frm_month_g8_ParamLimits

0xe6eb,	// (0x000712e0) frm_month_g9_ParamLimits

0xe6f8,	// (0x000712ed) frm_month_g10_ParamLimits

0xe705,	// (0x000712fa) frm_month_g11_ParamLimits

0xe712,	// (0x00071307) frm_month_g12_ParamLimits

0xe71f,	// (0x00071314) frm_month_g13_ParamLimits

0xe72e,	// (0x00071323) frm_month_g14_ParamLimits

0xe73d,	// (0x00071332) frm_month_g15_ParamLimits

0xe74c,	// (0x00071341) frm_month_g16_ParamLimits

0xfe11,	// (0x00072a06) frm_month_g_ParamLimits

0x3d37,	// (0x0006692c) cell_top_day_name_pane_t1_ParamLimits

0xe75b,	// (0x00071350) cell_area_left_week_number_pane_g1_ParamLimits

0xe76a,	// (0x0007135f) cell_area_left_week_number_pane_t1_ParamLimits

0x0a17,	// (0x0006360c) cell_month_view_pane_g1_ParamLimits

0xe780,	// (0x00071375) cell_month_view_pane_t1_ParamLimits

0x0986,	// (0x0006357b) main_clock2_btn_pane_g1

0x3e8e,	// (0x00066a83) main_clock2_btn_pane_t1

0x09b0,	// (0x000635a5) listscroll_cmail_pane_ParamLimits

0x325d,	// (0x00065e52) main_sp_fs_email_pane_g1_ParamLimits

0x3269,	// (0x00065e5e) main_sp_fs_email_pane_g2_ParamLimits

0xfc64,	// (0x00072859) main_sp_fs_email_pane_g_ParamLimits

0x387e,	// (0x00066473) list_recal_day_pane_ParamLimits

0x388f,	// (0x00066484) mian_recal_day_pane_t1

0x6bb4,	// (0x000697a9) list_single_dyc_row_text_pane_t4_ParamLimits

0x6bb4,	// (0x000697a9) list_single_dyc_row_text_pane_t4

0x6bf9,	// (0x000697ee) list_single_dyc_row_text_pane_t5_ParamLimits

0x6bf9,	// (0x000697ee) list_single_dyc_row_text_pane_t5

0x6c6f,	// (0x00069864) list_single_dyc_row_text_pane_t6_ParamLimits

0x6c6f,	// (0x00069864) list_single_dyc_row_text_pane_t6

0x9234,	// (0x0006be29) aid_mgn_list_cale_time_pane

0x09b0,	// (0x000635a5) main_gallery2_pane_ParamLimits

0x5638,	// (0x0006822d) main_clock2_pane_cp01_t1

0x5646,	// (0x0006823b) main_clock2_pane_cp01_t3

0x0001,

0xf751,	// (0x00072346) main_clock2_pane_cp01_t

0x7b2f,	// (0x0006a724) cale_week_scroll_pane_g16_ParamLimits

0x7b2f,	// (0x0006a724) cale_week_scroll_pane_g16

0x0cbe,	// (0x000638b3) vorec_slider_pane

0x3dfb,	// (0x000669f0) vidtel_button_pane_t1_ParamLimits

0xe00b,	// (0x00070c00) main_fs_bigclock_clock_pane_g1_ParamLimits

0xe00b,	// (0x00070c00) main_fs_bigclock_clock_pane_g2_ParamLimits

0xe01a,	// (0x00070c0f) main_fs_bigclock_clock_pane_g3_ParamLimits

0xe01a,	// (0x00070c0f) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfd67,	// (0x0007295c) main_fs_bigclock_clock_pane_g_ParamLimits

0xe02a,	// (0x00070c1f) main_fs_bigclock_clock_pane_t1_ParamLimits

0xe03f,	// (0x00070c34) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfd70,	// (0x00072965) main_fs_bigclock_clock_pane_t_ParamLimits

0xa7f0,	// (0x0006d3e5) main_mup3_lyrics_pane_ParamLimits

0xa7f0,	// (0x0006d3e5) main_mup3_lyrics_pane

0xeb42,	// (0x00071737) main_mup3_lyrics_pane_t1_ParamLimits

0xeb42,	// (0x00071737) main_mup3_lyrics_pane_t1

0xb3c8,	// (0x0006dfbd) aid_main_mp4_pane_t1_area

0xb3d2,	// (0x0006dfc7) aid_main_mp4_pane_t2_area

0xb4df,	// (0x0006e0d4) main_mp4_pane_g7_ParamLimits

0xb4df,	// (0x0006e0d4) main_mp4_pane_g7

0xb4eb,	// (0x0006e0e0) main_mp4_pane_g8_ParamLimits

0xb4eb,	// (0x0006e0e0) main_mp4_pane_g8

0xb8fb,	// (0x0006e4f0) aid_call6_pane_g1_size

0xe8c8,	// (0x000714bd) list_double_large_graphic_phob2_other_pane_ParamLimits

0xe8c8,	// (0x000714bd) list_double_large_graphic_phob2_other_pane

0xeb69,	// (0x0007175e) list_double_large_graphic_phob2_other_pane_g1

0x0256,	// (0x00062e4b) list_highlight_pane_cp026

0x09b0,	// (0x000635a5) main_welc_pane_ParamLimits

0xdaef,	// (0x000706e4) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0xdaef,	// (0x000706e4) main_sp_fs_ctrlbar_pane_g3

0xdb09,	// (0x000706fe) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0xdb09,	// (0x000706fe) main_sp_fs_ctrlbar_pane_g4

0xdb3b,	// (0x00070730) toolbar2_fixed_button_pane_cp01

0xdb46,	// (0x0007073b) toolbar2_fixed_button_pane_cp02

0xdb53,	// (0x00070748) toolbar2_fixed_button_pane_cp03

0xe8fa,	// (0x000714ef) list_welc_entry_pane_ParamLimits

0xe8fa,	// (0x000714ef) list_welc_entry_pane

0xe959,	// (0x0007154e) main_welc_pane_g3_ParamLimits

0xe959,	// (0x0007154e) main_welc_pane_g3

0xe9a3,	// (0x00071598) main_welc_pane_t2_ParamLimits

0xe9a3,	// (0x00071598) main_welc_pane_t2

0xe9b7,	// (0x000715ac) main_welc_pane_t3_ParamLimits

0xe9b7,	// (0x000715ac) main_welc_pane_t3

0x0005,

0xfe73,	// (0x00072a68) main_welc_pane_t_ParamLimits

0xfe73,	// (0x00072a68) main_welc_pane_t

0xea49,	// (0x0007163e) welc_button_pane_ParamLimits

0xea49,	// (0x0007163e) welc_button_pane

0xea9d,	// (0x00071692) welc_service_logo_pane_ParamLimits

0xea9d,	// (0x00071692) welc_service_logo_pane

0xeb71,	// (0x00071766) list_single_welc_entry_pane_ParamLimits

0xeb71,	// (0x00071766) list_single_welc_entry_pane

0xeb82,	// (0x00071777) list_single_welc_entry_pane_g1

0xeb8a,	// (0x0007177f) list_single_welc_entry_pane_t1

0xeb98,	// (0x0007178d) list_single_welc_entry_pane_t2

0x0001,

0xfe85,	// (0x00072a7a) list_single_welc_entry_pane_t

0x0256,	// (0x00062e4b) bg_button_pane_cp035

0x3e9c,	// (0x00066a91) welc_button_pane_t1

0x3eaa,	// (0x00066a9f) welc_service_logo_pane_g1

0x3eb3,	// (0x00066aa8) welc_service_logo_pane_g2

0x0001,

0xfe8a,	// (0x00072a7f) welc_service_logo_pane_g

0x0256,	// (0x00062e4b) main_int_radio_pane

0x2c87,	// (0x0006587c) list_single_fs_dyc_pane_g1

0x70b3,	// (0x00069ca8) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x70b3,	// (0x00069ca8) list_double_large_graphic_phob2_pane_g3

0xe814,	// (0x00071409) list_double_large_graphic_phob2_pane_g4_ParamLimits

0xe814,	// (0x00071409) list_double_large_graphic_phob2_pane_g4

0xeba6,	// (0x0007179b) main_int_radio1_pane_ParamLimits

0xeba6,	// (0x0007179b) main_int_radio1_pane

0x3ebc,	// (0x00066ab1) find_pane_cp02

0xebbc,	// (0x000717b1) input_focus_pane_cp12_ParamLimits

0xebbc,	// (0x000717b1) input_focus_pane_cp12

0xebc8,	// (0x000717bd) input_focus_pane_cp13_ParamLimits

0xebc8,	// (0x000717bd) input_focus_pane_cp13

0xebe0,	// (0x000717d5) input_focus_pane_cp14_ParamLimits

0xebe0,	// (0x000717d5) input_focus_pane_cp14

0x3ec5,	// (0x00066aba) int_radio1_listscroll_pane

0xebf8,	// (0x000717ed) main_int_radio1_pane_g1_ParamLimits

0xebf8,	// (0x000717ed) main_int_radio1_pane_g1

0xec04,	// (0x000717f9) main_int_radio1_pane_t1_ParamLimits

0xec04,	// (0x000717f9) main_int_radio1_pane_t1

0xec16,	// (0x0007180b) main_int_radio1_pane_t2_ParamLimits

0xec16,	// (0x0007180b) main_int_radio1_pane_t2

0xec2a,	// (0x0007181f) main_int_radio1_pane_t3_ParamLimits

0xec2a,	// (0x0007181f) main_int_radio1_pane_t3

0xec3e,	// (0x00071833) main_int_radio1_pane_t4_ParamLimits

0xec3e,	// (0x00071833) main_int_radio1_pane_t4

0x3ecf,	// (0x00066ac4) main_int_radio1_pane_t5_ParamLimits

0x3ecf,	// (0x00066ac4) main_int_radio1_pane_t5

0xec55,	// (0x0007184a) main_int_radio1_pane_t6_ParamLimits

0xec55,	// (0x0007184a) main_int_radio1_pane_t6

0xec67,	// (0x0007185c) main_int_radio1_pane_t7_ParamLimits

0xec67,	// (0x0007185c) main_int_radio1_pane_t7

0xec79,	// (0x0007186e) main_int_radio1_pane_t8_ParamLimits

0xec79,	// (0x0007186e) main_int_radio1_pane_t8

0xec8b,	// (0x00071880) main_int_radio1_pane_t9_ParamLimits

0xec8b,	// (0x00071880) main_int_radio1_pane_t9

0xec9d,	// (0x00071892) main_int_radio1_pane_t10_ParamLimits

0xec9d,	// (0x00071892) main_int_radio1_pane_t10

0xecce,	// (0x000718c3) main_int_radio1_pane_t11_ParamLimits

0xecce,	// (0x000718c3) main_int_radio1_pane_t11

0xecff,	// (0x000718f4) main_int_radio1_pane_t12_ParamLimits

0xecff,	// (0x000718f4) main_int_radio1_pane_t12

0x000b,

0xfe8f,	// (0x00072a84) main_int_radio1_pane_t_ParamLimits

0xfe8f,	// (0x00072a84) main_int_radio1_pane_t

0x3d4a,	// (0x0006693f) int_radio_list_pane

0x3d52,	// (0x00066947) scroll_pane_cp037

0x3ee1,	// (0x00066ad6) list_double_large_graphic_int_radio_pane_ParamLimits

0x3ee1,	// (0x00066ad6) list_double_large_graphic_int_radio_pane

0x3ef5,	// (0x00066aea) list_double_large_graphic_int_radio_pane_g1

0x7187,	// (0x00069d7c) list_double_large_graphic_int_radio_pane_t1

0x7195,	// (0x00069d8a) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfea8,	// (0x00072a9d) list_double_large_graphic_int_radio_pane_t

0x0256,	// (0x00062e4b) list_highlight_pane_cp027

0x3e42,	// (0x00066a37) main_button_pane_4

0xe969,	// (0x0007155e) main_welc_pane_g4_ParamLimits

0xe969,	// (0x0007155e) main_welc_pane_g4

0xe9cb,	// (0x000715c0) main_welc_pane_t4_ParamLimits

0xe9cb,	// (0x000715c0) main_welc_pane_t4

0xe9dd,	// (0x000715d2) main_welc_pane_t5_ParamLimits

0xe9dd,	// (0x000715d2) main_welc_pane_t5

0xea15,	// (0x0007160a) main_welc_pane_t6_ParamLimits

0xea15,	// (0x0007160a) main_welc_pane_t6

0xea57,	// (0x0007164c) welc_button_pane_2_ParamLimits

0xea57,	// (0x0007164c) welc_button_pane_2

0xea71,	// (0x00071666) welc_button_pane_3_ParamLimits

0xea71,	// (0x00071666) welc_button_pane_3

0x3e42,	// (0x00066a37) welc_button_pane_4

0xea8d,	// (0x00071682) welc_button_pane_5_ParamLimits

0xea8d,	// (0x00071682) welc_button_pane_5

0xa18e,	// (0x0006cd83) main_popup_welc_pane

0x3f1a,	// (0x00066b0f) main_welc_sk_g3

0x3f24,	// (0x00066b19) main_welc_sk_g4

0x3f2e,	// (0x00066b23) main_welc_sk_t3

0x3f3e,	// (0x00066b33) main_welc_sk_t4

0x3f4e,	// (0x00066b43) popup_welc_pane_t4

0x3f5c,	// (0x00066b51) popup_welc_pane_t5

0x3f6a,	// (0x00066b5f) popup_welc_pane_t6
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

} // end of namespace AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch_Large

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

#include "aknlayoutscalable_abrw_phl_apps_qhd_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_phl_apps_qhd_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x00053e2d };

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
0x378c,	// (0x000575b9) Screen

0x3798,	// (0x000575c5) application_window

0x37d4,	// (0x00057601) area_bottom_pane_ParamLimits

0x37d4,	// (0x00057601) area_bottom_pane

0x380d,	// (0x0005763a) area_top_pane_ParamLimits

0x380d,	// (0x0005763a) area_top_pane

0xbd7f,	// (0x0005fbac) call_video_uplink_pane_ParamLimits

0xbd7f,	// (0x0005fbac) call_video_uplink_pane

0x389b,	// (0x000576c8) main_pane_ParamLimits

0x389b,	// (0x000576c8) main_pane

0x26de,	// (0x0005650b) context_pane

0x676c,	// (0x0005a599) navi_pane

0x679e,	// (0x0005a5cb) popup_cale_events_window_ParamLimits

0x679e,	// (0x0005a5cb) popup_cale_events_window

0x26f1,	// (0x0005651e) popup_mup_playback_window

0x67b6,	// (0x0005a5e3) signal_pane

0x07b0,	// (0x000545dd) main_browser_pane

0x0962,	// (0x0005478f) main_burst_pane

0x64ae,	// (0x0005a2db) main_calc_pane

0x26c4,	// (0x000564f1) main_cale_day_pane

0x64c2,	// (0x0005a2ef) main_cale_month_pane

0x26c4,	// (0x000564f1) main_cale_week_pane

0x0962,	// (0x0005478f) main_call_pane

0xc1c8,	// (0x0005fff5) main_call_poc_pane

0x0962,	// (0x0005478f) main_camera_pane

0x0962,	// (0x0005478f) main_chi_dic_pane

0x1155,	// (0x00054f82) main_clock_pane

0xc1c8,	// (0x0005fff5) main_fmradio_pane

0x0962,	// (0x0005478f) main_graph_messa_pane

0xc1c8,	// (0x0005fff5) main_help_pane

0x07b0,	// (0x000545dd) main_im_pane

0xc423,	// (0x00060250) main_image_pane_ParamLimits

0xc423,	// (0x00060250) main_image_pane

0xc1c8,	// (0x0005fff5) main_location2_pane

0x0962,	// (0x0005478f) main_location_pane

0xc423,	// (0x00060250) main_messa_pane

0xc1c8,	// (0x0005fff5) main_mp2_pane

0x0962,	// (0x0005478f) main_mp_pane

0xc1c8,	// (0x0005fff5) main_msg_pane

0xc1c8,	// (0x0005fff5) main_mup_eq_pane

0xc1c8,	// (0x0005fff5) main_mup_pane

0x07b0,	// (0x000545dd) main_notes_pane

0xc1c8,	// (0x0005fff5) main_pec_pane

0xc1c8,	// (0x0005fff5) main_phob_pane

0xc1c8,	// (0x0005fff5) main_pinb_pane

0xc1c8,	// (0x0005fff5) main_postcard_pane

0xc1c8,	// (0x0005fff5) main_qdial_pane

0x0962,	// (0x0005478f) main_skin_pane

0xc1c8,	// (0x0005fff5) main_smil2_pane

0x0962,	// (0x0005478f) main_smil_pane

0x0962,	// (0x0005478f) main_video_pane

0x0962,	// (0x0005478f) main_video_tele_pane

0xc423,	// (0x00060250) main_viewer_pane_ParamLimits

0xc423,	// (0x00060250) main_viewer_pane

0x0962,	// (0x0005478f) main_vorec_pane

0x6520,	// (0x0005a34d) popup_blid_sat_info_window_ParamLimits

0x6520,	// (0x0005a34d) popup_blid_sat_info_window

0x6578,	// (0x0005a3a5) popup_dyc_status_message_window_ParamLimits

0x6578,	// (0x0005a3a5) popup_dyc_status_message_window

0x6592,	// (0x0005a3bf) popup_grid_large_graphic_window_ParamLimits

0x6592,	// (0x0005a3bf) popup_grid_large_graphic_window

0x664e,	// (0x0005a47b) popup_loc_request_window_ParamLimits

0x664e,	// (0x0005a47b) popup_loc_request_window

0x6744,	// (0x0005a571) popup_wml_address_window_ParamLimits

0x6744,	// (0x0005a571) popup_wml_address_window

0x62e8,	// (0x0005a115) call_muted_g1

0x5f5c,	// (0x00059d89) popup_call_audio_conf_window_ParamLimits

0x5f5c,	// (0x00059d89) popup_call_audio_conf_window

0x62fc,	// (0x0005a129) popup_call_audio_first_window_ParamLimits

0x62fc,	// (0x0005a129) popup_call_audio_first_window

0x6372,	// (0x0005a19f) popup_call_audio_in_window_ParamLimits

0x6372,	// (0x0005a19f) popup_call_audio_in_window

0x63ae,	// (0x0005a1db) popup_call_audio_out_window_ParamLimits

0x63ae,	// (0x0005a1db) popup_call_audio_out_window

0x63e8,	// (0x0005a215) popup_call_audio_second_window_ParamLimits

0x63e8,	// (0x0005a215) popup_call_audio_second_window

0x643e,	// (0x0005a26b) popup_call_audio_wait_window_ParamLimits

0x643e,	// (0x0005a26b) popup_call_audio_wait_window

0x6473,	// (0x0005a2a0) popup_number_entry_window_ParamLimits

0x6473,	// (0x0005a2a0) popup_number_entry_window

0xbdb5,	// (0x0005fbe2) bg_popup_call_pane_cp05_ParamLimits

0xbdb5,	// (0x0005fbe2) bg_popup_call_pane_cp05

0xbdd5,	// (0x0005fc02) popup_number_entry_window_t1

0xbde8,	// (0x0005fc15) popup_number_entry_window_t2

0xbdfa,	// (0x0005fc27) popup_number_entry_window_t3

0x0003,

0xf085,	// (0x00062eb2) popup_number_entry_window_t

0xbe0c,	// (0x0005fc39) text_title_cp2

0xbe1f,	// (0x0005fc4c) bg_popup_call_pane_cp_ParamLimits

0xbe1f,	// (0x0005fc4c) bg_popup_call_pane_cp

0xbe2d,	// (0x0005fc5a) call_thumbnail_pane

0xbe35,	// (0x0005fc62) popup_call_audio_in_window_g1_ParamLimits

0xbe35,	// (0x0005fc62) popup_call_audio_in_window_g1

0xbe41,	// (0x0005fc6e) popup_call_audio_in_window_g2_ParamLimits

0xbe41,	// (0x0005fc6e) popup_call_audio_in_window_g2

0xbe4d,	// (0x0005fc7a) popup_call_audio_in_window_g3_ParamLimits

0xbe4d,	// (0x0005fc7a) popup_call_audio_in_window_g3

0x0002,

0xf08e,	// (0x00062ebb) popup_call_audio_in_window_g_ParamLimits

0xf08e,	// (0x00062ebb) popup_call_audio_in_window_g

0xbe59,	// (0x0005fc86) popup_call_audio_in_window_t1_ParamLimits

0xbe59,	// (0x0005fc86) popup_call_audio_in_window_t1

0xbe75,	// (0x0005fca2) popup_call_audio_in_window_t2_ParamLimits

0xbe75,	// (0x0005fca2) popup_call_audio_in_window_t2

0xbe91,	// (0x0005fcbe) popup_call_audio_in_window_t3_ParamLimits

0xbe91,	// (0x0005fcbe) popup_call_audio_in_window_t3

0x0002,

0xf095,	// (0x00062ec2) popup_call_audio_in_window_t_ParamLimits

0xf095,	// (0x00062ec2) popup_call_audio_in_window_t

0xbe1f,	// (0x0005fc4c) bg_popup_call_pane_cp01_ParamLimits

0xbe1f,	// (0x0005fc4c) bg_popup_call_pane_cp01

0xbe2d,	// (0x0005fc5a) call_thumbnail_pane_cp02

0xbea4,	// (0x0005fcd1) call_type_pane_cp022

0xbeac,	// (0x0005fcd9) popup_call_audio_out_window_g1_ParamLimits

0xbeac,	// (0x0005fcd9) popup_call_audio_out_window_g1

0xbebe,	// (0x0005fceb) popup_call_audio_out_window_g2_ParamLimits

0xbebe,	// (0x0005fceb) popup_call_audio_out_window_g2

0xbeca,	// (0x0005fcf7) popup_call_audio_out_window_g3_ParamLimits

0xbeca,	// (0x0005fcf7) popup_call_audio_out_window_g3

0x0002,

0xf09c,	// (0x00062ec9) popup_call_audio_out_window_g_ParamLimits

0xf09c,	// (0x00062ec9) popup_call_audio_out_window_g

0xbedc,	// (0x0005fd09) popup_call_audio_out_window_t1_ParamLimits

0xbedc,	// (0x0005fd09) popup_call_audio_out_window_t1

0xbef4,	// (0x0005fd21) popup_call_audio_out_window_t2_ParamLimits

0xbef4,	// (0x0005fd21) popup_call_audio_out_window_t2

0x0001,

0xf0a3,	// (0x00062ed0) popup_call_audio_out_window_t_ParamLimits

0xf0a3,	// (0x00062ed0) popup_call_audio_out_window_t

0xbf09,	// (0x0005fd36) bg_popup_call_pane_ParamLimits

0xbf09,	// (0x0005fd36) bg_popup_call_pane

0x3a57,	// (0x00057884) call_thumbnail_pane_cp_ParamLimits

0x3a57,	// (0x00057884) call_thumbnail_pane_cp

0xbf8d,	// (0x0005fdba) call_type_pane_cp01_ParamLimits

0xbf8d,	// (0x0005fdba) call_type_pane_cp01

0xbfd1,	// (0x0005fdfe) popup_call_audio_first_window_g1_ParamLimits

0xbfd1,	// (0x0005fdfe) popup_call_audio_first_window_g1

0xc01d,	// (0x0005fe4a) popup_call_audio_first_window_g2_ParamLimits

0xc01d,	// (0x0005fe4a) popup_call_audio_first_window_g2

0x0001,

0xf0a8,	// (0x00062ed5) popup_call_audio_first_window_g_ParamLimits

0xf0a8,	// (0x00062ed5) popup_call_audio_first_window_g

0xc061,	// (0x0005fe8e) popup_call_audio_first_window_t1_ParamLimits

0xc061,	// (0x0005fe8e) popup_call_audio_first_window_t1

0xc10d,	// (0x0005ff3a) popup_call_audio_first_window_t4_ParamLimits

0xc10d,	// (0x0005ff3a) popup_call_audio_first_window_t4

0xc199,	// (0x0005ffc6) popup_call_audio_first_window_t5_ParamLimits

0xc199,	// (0x0005ffc6) popup_call_audio_first_window_t5

0x0002,

0xf0ad,	// (0x00062eda) popup_call_audio_first_window_t_ParamLimits

0xf0ad,	// (0x00062eda) popup_call_audio_first_window_t

0xc1c8,	// (0x0005fff5) bg_popup_call_pane_cp02

0xc1d2,	// (0x0005ffff) call_type_pane_cp023

0xc1da,	// (0x00060007) popup_call_audio_wait_window_g1

0xc1e2,	// (0x0006000f) popup_call_audio_wait_window_g2

0x0001,

0xf0b4,	// (0x00062ee1) popup_call_audio_wait_window_g

0xc1ea,	// (0x00060017) popup_call_audio_wait_window_t3

0xc1f8,	// (0x00060025) bg_popup_call_pane_cp03_ParamLimits

0xc1f8,	// (0x00060025) bg_popup_call_pane_cp03

0xc258,	// (0x00060085) call_thumbnail_pane_cp011_ParamLimits

0xc258,	// (0x00060085) call_thumbnail_pane_cp011

0xc264,	// (0x00060091) call_type_pane_cp034_ParamLimits

0xc264,	// (0x00060091) call_type_pane_cp034

0xc2a0,	// (0x000600cd) popup_call_audio_second_window_g1_ParamLimits

0xc2a0,	// (0x000600cd) popup_call_audio_second_window_g1

0xc2dc,	// (0x00060109) popup_call_audio_second_window_g2_ParamLimits

0xc2dc,	// (0x00060109) popup_call_audio_second_window_g2

0x0001,

0xf0b9,	// (0x00062ee6) popup_call_audio_second_window_g_ParamLimits

0xf0b9,	// (0x00062ee6) popup_call_audio_second_window_g

0xc318,	// (0x00060145) popup_call_audio_second_window_t1_ParamLimits

0xc318,	// (0x00060145) popup_call_audio_second_window_t1

0xc399,	// (0x000601c6) popup_call_audio_second_window_t2_ParamLimits

0xc399,	// (0x000601c6) popup_call_audio_second_window_t2

0xc3cf,	// (0x000601fc) popup_call_audio_second_window_t3_ParamLimits

0xc3cf,	// (0x000601fc) popup_call_audio_second_window_t3

0x0002,

0xf0be,	// (0x00062eeb) popup_call_audio_second_window_t_ParamLimits

0xf0be,	// (0x00062eeb) popup_call_audio_second_window_t

0xc1c8,	// (0x0005fff5) bg_popup_call_pane_cp04

0xc405,	// (0x00060232) list_conf_pane

0xc40d,	// (0x0006023a) popup_call_audio_conf_window_t1

0xc41b,	// (0x00060248) call_thumbnail_pane_g1

0xc423,	// (0x00060250) bg_pinb_pane_ParamLimits

0xc423,	// (0x00060250) bg_pinb_pane

0xc431,	// (0x0006025e) find_pinb_pane

0xc423,	// (0x00060250) listscroll_pinb_pane_ParamLimits

0xc423,	// (0x00060250) listscroll_pinb_pane

0xc43b,	// (0x00060268) pinb_bg_pane_g1

0xc43b,	// (0x00060268) pinb_bg_pane_g2

0xc43b,	// (0x00060268) pinb_bg_pane_g3

0xc43b,	// (0x00060268) pinb_bg_pane_g4

0xc43b,	// (0x00060268) pinb_bg_pane_g5

0xc43b,	// (0x00060268) pinb_bg_pane_g6

0xc43b,	// (0x00060268) pinb_bg_pane_g7

0xc43b,	// (0x00060268) pinb_bg_pane_g8

0xc43b,	// (0x00060268) pinb_bg_pane_g9

0xc43b,	// (0x00060268) pinb_bg_pane_g10

0x0009,

0xf0c5,	// (0x00062ef2) pinb_bg_pane_g

0xbd26,	// (0x0005fb53) grid_pinb_pane

0xbd26,	// (0x0005fb53) list_pinb_pane

0xc445,	// (0x00060272) scroll_pane_cp01_ParamLimits

0xc445,	// (0x00060272) scroll_pane_cp01

0xc453,	// (0x00060280) find_pinb_pane_g1_ParamLimits

0xc453,	// (0x00060280) find_pinb_pane_g1

0xc46b,	// (0x00060298) find_pinb_pane_t1

0xc47d,	// (0x000602aa) find_pinb_pane_t2

0x0001,

0xf0df,	// (0x00062f0c) find_pinb_pane_t

0xc492,	// (0x000602bf) input_focus_pane_cp01_ParamLimits

0xc492,	// (0x000602bf) input_focus_pane_cp01

0xc49e,	// (0x000602cb) cell_pinb_pane_ParamLimits

0xc49e,	// (0x000602cb) cell_pinb_pane

0x073e,	// (0x0005456b) cell_pinb_pane_g1_ParamLimits

0x073e,	// (0x0005456b) cell_pinb_pane_g1

0x074c,	// (0x00054579) cell_pinb_pane_g2_ParamLimits

0x074c,	// (0x00054579) cell_pinb_pane_g2

0x074c,	// (0x00054579) cell_pinb_pane_g3_ParamLimits

0x074c,	// (0x00054579) cell_pinb_pane_g3

0x0002,

0xf0e4,	// (0x00062f11) cell_pinb_pane_g_ParamLimits

0xf0e4,	// (0x00062f11) cell_pinb_pane_g

0xc1c8,	// (0x0005fff5) grid_highlight_pane_cp01

0xc49e,	// (0x000602cb) list_pinb_item_pane_ParamLimits

0xc49e,	// (0x000602cb) list_pinb_item_pane

0xbd26,	// (0x0005fb53) list_highlight_pane_cp02

0x075a,	// (0x00054587) list_pinb_item_pane_g1_ParamLimits

0x075a,	// (0x00054587) list_pinb_item_pane_g1

0x074c,	// (0x00054579) list_pinb_item_pane_g2_ParamLimits

0x074c,	// (0x00054579) list_pinb_item_pane_g2

0x073e,	// (0x0005456b) list_pinb_item_pane_g3_ParamLimits

0x073e,	// (0x0005456b) list_pinb_item_pane_g3

0x074c,	// (0x00054579) list_pinb_item_pane_g4_ParamLimits

0x074c,	// (0x00054579) list_pinb_item_pane_g4

0x0003,

0xf0eb,	// (0x00062f18) list_pinb_item_pane_g_ParamLimits

0xf0eb,	// (0x00062f18) list_pinb_item_pane_g

0x0768,	// (0x00054595) list_pinb_item_pane_t1_ParamLimits

0x0768,	// (0x00054595) list_pinb_item_pane_t1

0x3a99,	// (0x000578c6) calc_display_pane

0x3abe,	// (0x000578eb) calc_paper_pane

0x3ae1,	// (0x0005790e) grid_calc_pane

0xc1c8,	// (0x0005fff5) bg_list_pane_cp01

0x3b0f,	// (0x0005793c) clock_g1

0x3b17,	// (0x00057944) clock_g2

0x0001,

0xf0f4,	// (0x00062f21) clock_g

0x3b1f,	// (0x0005794c) clock_t1_ParamLimits

0x3b1f,	// (0x0005794c) clock_t1

0x3b34,	// (0x00057961) clock_t2_ParamLimits

0x3b34,	// (0x00057961) clock_t2

0x3b46,	// (0x00057973) clock_t3_ParamLimits

0x3b46,	// (0x00057973) clock_t3

0x3b58,	// (0x00057985) clock_t4_ParamLimits

0x3b58,	// (0x00057985) clock_t4

0x3b6a,	// (0x00057997) clock_t5_ParamLimits

0x3b6a,	// (0x00057997) clock_t5

0x3b7f,	// (0x000579ac) clock_t6_ParamLimits

0x3b7f,	// (0x000579ac) clock_t6

0x3b91,	// (0x000579be) clock_t7_ParamLimits

0x3b91,	// (0x000579be) clock_t7

0x3ba3,	// (0x000579d0) clock_t8_ParamLimits

0x3ba3,	// (0x000579d0) clock_t8

0x3bb7,	// (0x000579e4) clock_t9_ParamLimits

0x3bb7,	// (0x000579e4) clock_t9

0x0008,

0xf0f9,	// (0x00062f26) clock_t_ParamLimits

0xf0f9,	// (0x00062f26) clock_t

0x077c,	// (0x000545a9) popup_clock_analogue_window_cp02

0x077c,	// (0x000545a9) popup_clock_digital_window_cp01

0xc1c8,	// (0x0005fff5) listscroll_help_pane

0xc1c8,	// (0x0005fff5) phob_pre_status_pane

0x0784,	// (0x000545b1) grid_qdial_pane

0xc423,	// (0x00060250) listscroll_mce_pane

0xc423,	// (0x00060250) bg_notes_pane

0x078e,	// (0x000545bb) list_notes_pane

0x3bcb,	// (0x000579f8) scroll_pane_cp06

0x079c,	// (0x000545c9) bg_calc_paper_pane

0xc4b4,	// (0x000602e1) list_calc_pane

0x07b0,	// (0x000545dd) bg_calc_display_pane

0x3bdf,	// (0x00057a0c) calc_display_pane_t1

0x3bf4,	// (0x00057a21) calc_display_pane_t2

0xc4ce,	// (0x000602fb) calc_display_pane_t3

0x0002,

0xf10c,	// (0x00062f39) calc_display_pane_t

0x3c09,	// (0x00057a36) cell_calc_pane_ParamLimits

0x3c09,	// (0x00057a36) cell_calc_pane

0x07bc,	// (0x000545e9) bg_calc_paper_pane_g1

0x07c8,	// (0x000545f5) bg_calc_paper_pane_g2

0x07d4,	// (0x00054601) bg_calc_paper_pane_g3

0x07e0,	// (0x0005460d) bg_calc_paper_pane_g4

0x07ec,	// (0x00054619) bg_calc_paper_pane_g5

0x3c3e,	// (0x00057a6b) bg_calc_paper_pane_g6

0x3c4d,	// (0x00057a7a) bg_calc_paper_pane_g7

0x3c5c,	// (0x00057a89) bg_calc_paper_pane_g8

0x0007,

0xf113,	// (0x00062f40) bg_calc_paper_pane_g

0x3c6f,	// (0x00057a9c) calc_bg_paper_pane_g9

0x3c82,	// (0x00057aaf) list_calc_item_pane_ParamLimits

0x3c82,	// (0x00057aaf) list_calc_item_pane

0x07f8,	// (0x00054625) list_calc_item_pane_g1

0xc4e0,	// (0x0006030d) list_calc_item_pane_t1_ParamLimits

0xc4e0,	// (0x0006030d) list_calc_item_pane_t1

0x3c9a,	// (0x00057ac7) list_calc_item_pane_t2_ParamLimits

0x3c9a,	// (0x00057ac7) list_calc_item_pane_t2

0x0001,

0xf124,	// (0x00062f51) list_calc_item_pane_t_ParamLimits

0xf124,	// (0x00062f51) list_calc_item_pane_t

0xc43b,	// (0x00060268) cell_calc_pane_g1

0x0805,	// (0x00054632) grid_highlight_pane_cp02

0x3ccc,	// (0x00057af9) bg_calc_display_pane_g1

0x3cd5,	// (0x00057b02) bg_calc_display_pane_g2

0x2810,	// (0x0005663d) bg_calc_display_pane_g3

0x0002,

0xf12e,	// (0x00062f5b) bg_calc_display_pane_g

0x3cdf,	// (0x00057b0c) cell_qdial_pane_ParamLimits

0x3cdf,	// (0x00057b0c) cell_qdial_pane

0x3cf3,	// (0x00057b20) cell_qdial_pane_g1_ParamLimits

0x3cf3,	// (0x00057b20) cell_qdial_pane_g1

0x3d09,	// (0x00057b36) cell_qdial_pane_g2_ParamLimits

0x3d09,	// (0x00057b36) cell_qdial_pane_g2

0x0827,	// (0x00054654) cell_qdial_pane_g3_ParamLimits

0x0827,	// (0x00054654) cell_qdial_pane_g3

0x0003,

0xf135,	// (0x00062f62) cell_qdial_pane_g_ParamLimits

0xf135,	// (0x00062f62) cell_qdial_pane_g

0x3d30,	// (0x00057b5d) cell_qdial_pane_t1_ParamLimits

0x3d30,	// (0x00057b5d) cell_qdial_pane_t1

0x3d48,	// (0x00057b75) cell_qdial_pane_t2_ParamLimits

0x3d48,	// (0x00057b75) cell_qdial_pane_t2

0x3d5b,	// (0x00057b88) cell_qdial_pane_t3_ParamLimits

0x3d5b,	// (0x00057b88) cell_qdial_pane_t3

0x0002,

0xf13e,	// (0x00062f6b) cell_qdial_pane_t_ParamLimits

0xf13e,	// (0x00062f6b) cell_qdial_pane_t

0xc1c8,	// (0x0005fff5) grid_highlight_pane_cp04

0x0833,	// (0x00054660) thumbnail_qdial_pane_ParamLimits

0x0833,	// (0x00054660) thumbnail_qdial_pane

0x088f,	// (0x000546bc) list_help_pane

0x0898,	// (0x000546c5) scroll_pane_cp02

0x2819,	// (0x00056646) help_list_pane_t1_ParamLimits

0x2819,	// (0x00056646) help_list_pane_t1

0xc4f2,	// (0x0006031f) bg_notes_pane_g2

0xc4fa,	// (0x00060327) bg_notes_pane_g3

0xc502,	// (0x0006032f) notes_bg_pane_g1

0xc50a,	// (0x00060337) notes_bg_pane_g4

0xc512,	// (0x0006033f) notes_bg_pane_g5

0xc51a,	// (0x00060347) notes_bg_pane_g6

0xc522,	// (0x0006034f) notes_bg_pane_g7

0xc52a,	// (0x00060357) notes_bg_pane_g8

0xc532,	// (0x0006035f) notes_bg_pane_g9

0x0006,

0xf15c,	// (0x00062f89) notes_bg_pane_g

0x3d6e,	// (0x00057b9b) list_notes_text_pane_ParamLimits

0x3d6e,	// (0x00057b9b) list_notes_text_pane

0x08a1,	// (0x000546ce) list_notes_text_pane_g1

0x3d83,	// (0x00057bb0) list_notes_text_pane_t1

0x3d91,	// (0x00057bbe) listscroll_cale_week_pane

0x3dbd,	// (0x00057bea) bg_cale_heading_pane

0x08c4,	// (0x000546f1) bg_cale_pane_cp01

0x3dd5,	// (0x00057c02) cale_week_corner_pane

0x3df4,	// (0x00057c21) cale_week_day_heading_pane

0x3e11,	// (0x00057c3e) cale_week_scroll_pane_g1

0x3e24,	// (0x00057c51) cale_week_scroll_pane_g2

0x3e3c,	// (0x00057c69) cale_week_scroll_pane_g3

0x3e54,	// (0x00057c81) cale_week_scroll_pane_g4

0x3e6c,	// (0x00057c99) cale_week_scroll_pane_g5

0x3e8c,	// (0x00057cb9) cale_week_scroll_pane_g6

0x3eac,	// (0x00057cd9) cale_week_scroll_pane_g7

0x3ecc,	// (0x00057cf9) cale_week_scroll_pane_g8

0x3ef0,	// (0x00057d1d) cale_week_scroll_pane_g9

0x3f08,	// (0x00057d35) cale_week_scroll_pane_g10

0x3f20,	// (0x00057d4d) cale_week_scroll_pane_g11

0x3f38,	// (0x00057d65) cale_week_scroll_pane_g12

0x3f50,	// (0x00057d7d) cale_week_scroll_pane_g13

0x3f50,	// (0x00057d7d) cale_week_scroll_pane_g14

0x3f50,	// (0x00057d7d) cale_week_scroll_pane_g15

0x000f,

0xf16b,	// (0x00062f98) cale_week_scroll_pane_g

0x3f8c,	// (0x00057db9) cale_week_time_pane

0x3fb0,	// (0x00057ddd) grid_cale_week_pane

0x08f3,	// (0x00054720) scroll_pane_cp08

0x3fd6,	// (0x00057e03) cell_cale_week_pane_ParamLimits

0x3fd6,	// (0x00057e03) cell_cale_week_pane

0x4064,	// (0x00057e91) cale_week_day_heading_pane_t1

0x408e,	// (0x00057ebb) cale_week_day_heading_pane_t2

0x40bd,	// (0x00057eea) cale_week_day_heading_pane_t3

0x40ec,	// (0x00057f19) cale_week_day_heading_pane_t4

0x411b,	// (0x00057f48) cale_week_day_heading_pane_t5

0x4152,	// (0x00057f7f) cale_week_day_heading_pane_t6

0x4189,	// (0x00057fb6) cale_week_day_heading_pane_t7

0x0006,

0xf18c,	// (0x00062fb9) cale_week_day_heading_pane_t

0x0910,	// (0x0005473d) bg_cale_side_pane

0x41b3,	// (0x00057fe0) cale_week_time_pane_t1

0x41cd,	// (0x00057ffa) cale_week_time_pane_t2

0x41e7,	// (0x00058014) cale_week_time_pane_t3

0x4201,	// (0x0005802e) cale_week_time_pane_t4

0x421b,	// (0x00058048) cale_week_time_pane_t5

0x4235,	// (0x00058062) cale_week_time_pane_t6

0x424f,	// (0x0005807c) cale_week_time_pane_t7

0x4269,	// (0x00058096) cale_week_time_pane_t8

0x0007,

0xf19b,	// (0x00062fc8) cale_week_time_pane_t

0x4283,	// (0x000580b0) cell_cale_week_pane_g2

0x42a2,	// (0x000580cf) cell_cale_week_pane_g3_ParamLimits

0x42a2,	// (0x000580cf) cell_cale_week_pane_g3

0x091e,	// (0x0005474b) grid_highlight_pane_cp07

0x0926,	// (0x00054753) listscroll_gms_pane

0x0930,	// (0x0005475d) grid_gms_pane

0x0939,	// (0x00054766) listscroll_gms_pane_g1

0x0941,	// (0x0005476e) listscroll_gms_pane_g2

0x0001,

0xf1ac,	// (0x00062fd9) listscroll_gms_pane_g

0x42ba,	// (0x000580e7) scroll_pane_cp010

0x42c5,	// (0x000580f2) cell_gms_pane_ParamLimits

0x42c5,	// (0x000580f2) cell_gms_pane

0x42d8,	// (0x00058105) cell_gms_pane_g1

0x0949,	// (0x00054776) cell_gms_pane_g2

0x08a1,	// (0x000546ce) cell_gms_pane_g3

0x0951,	// (0x0005477e) cell_gms_pane_g4

0x0003,

0xf1b1,	// (0x00062fde) cell_gms_pane_g

0x095a,	// (0x00054787) grid_highlight_pane_cp09

0x6270,	// (0x0005a09d) phob_pre_status_pane_g1

0x6278,	// (0x0005a0a5) phob_pre_status_pane_g2

0x6280,	// (0x0005a0ad) phob_pre_status_pane_g3

0x6288,	// (0x0005a0b5) phob_pre_status_pane_g4

0x0004,

0xf575,	// (0x000633a2) phob_pre_status_pane_g

0x6298,	// (0x0005a0c5) phob_pre_status_pane_t1

0x62a6,	// (0x0005a0d3) phob_pre_status_pane_t2

0x62b6,	// (0x0005a0e3) phob_pre_status_pane_t3

0x0002,

0xf580,	// (0x000633ad) phob_pre_status_pane_t

0x0962,	// (0x0005478f) bg_list_pane_cp05

0x42e8,	// (0x00058115) grid_vorec_pane

0x42f0,	// (0x0005811d) vorec_t1

0x42fe,	// (0x0005812b) vorec_t2

0x430c,	// (0x00058139) vorec_t3

0x431a,	// (0x00058147) vorec_t4

0xbb26,	// (0x0005f953) vorec_t5

0xbb34,	// (0x0005f961) vorec_t6

0x0004,

0xf1ba,	// (0x00062fe7) vorec_t

0xbb42,	// (0x0005f96f) wait_bar_pane_cp01

0x4336,	// (0x00058163) cell_vorec_pane_ParamLimits

0x4336,	// (0x00058163) cell_vorec_pane

0xc53a,	// (0x00060367) cell_vorec_pane_g1

0xc1c8,	// (0x0005fff5) grid_highlight_pane_cp05

0xc445,	// (0x00060272) cams_zoom_pane

0xc445,	// (0x00060272) image_vga_pane

0x073e,	// (0x0005456b) main_camera_pane_g1

0x073e,	// (0x0005456b) main_camera_pane_g2

0x073e,	// (0x0005456b) main_camera_pane_g3

0x073e,	// (0x0005456b) main_camera_pane_g4

0x073e,	// (0x0005456b) main_camera_pane_g5

0x073e,	// (0x0005456b) main_camera_pane_g6

0x073e,	// (0x0005456b) main_camera_pane_g7

0x0007,

0xf1c5,	// (0x00062ff2) main_camera_pane_g

0x09b2,	// (0x000547df) main_camera_pane_t1

0x09b2,	// (0x000547df) main_camera_pane_t2

0x0001,

0xf1d6,	// (0x00063003) main_camera_pane_t

0x435d,	// (0x0005818a) cams_zoom_pane_cp_ParamLimits

0x435d,	// (0x0005818a) cams_zoom_pane_cp

0x4391,	// (0x000581be) image_cif_pane_ParamLimits

0x4391,	// (0x000581be) image_cif_pane

0xbd26,	// (0x0005fb53) image_subqcif_pane

0x43a3,	// (0x000581d0) main_video_pane_g1_ParamLimits

0x43a3,	// (0x000581d0) main_video_pane_g1

0x43d1,	// (0x000581fe) main_video_pane_g2_ParamLimits

0x43d1,	// (0x000581fe) main_video_pane_g2

0x440b,	// (0x00058238) main_video_pane_g3_ParamLimits

0x440b,	// (0x00058238) main_video_pane_g3

0x440b,	// (0x00058238) main_video_pane_g4_ParamLimits

0x440b,	// (0x00058238) main_video_pane_g4

0x443f,	// (0x0005826c) main_video_pane_g5_ParamLimits

0x443f,	// (0x0005826c) main_video_pane_g5

0x097e,	// (0x000547ab) main_video_pane_g6_ParamLimits

0x097e,	// (0x000547ab) main_video_pane_g6

0x0006,

0xf1db,	// (0x00063008) main_video_pane_g_ParamLimits

0xf1db,	// (0x00063008) main_video_pane_g

0x445b,	// (0x00058288) main_video_pane_t1_ParamLimits

0x445b,	// (0x00058288) main_video_pane_t1

0x0998,	// (0x000547c5) cams_zoom_pane_g1

0x0998,	// (0x000547c5) cams_zoom_pane_g2

0x0998,	// (0x000547c5) cams_zoom_pane_g3

0x0998,	// (0x000547c5) cams_zoom_pane_g4

0x0003,

0xf1ea,	// (0x00063017) cams_zoom_pane_g

0x44b3,	// (0x000582e0) grid_cams_pane

0x44cd,	// (0x000582fa) linegrid_cams_pane

0x44e1,	// (0x0005830e) cell_cams_pane_ParamLimits

0x44e1,	// (0x0005830e) cell_cams_pane

0x09a2,	// (0x000547cf) cams_burst_image_pane

0x09aa,	// (0x000547d7) cell_cams_pane_g1

0xc1c8,	// (0x0005fff5) grid_highlight_pane_cp03

0xc43b,	// (0x00060268) mp_bg_pane_g1

0xbd26,	// (0x0005fb53) bg_list_pane_cp03

0xbd26,	// (0x0005fb53) bg_mp_pane

0xbd26,	// (0x0005fb53) grid_mp_pane

0x0998,	// (0x000547c5) media_player_g1

0x0edb,	// (0x00054d08) media_player_t1

0x0edb,	// (0x00054d08) media_player_t2

0x0edb,	// (0x00054d08) media_player_t3

0x0edb,	// (0x00054d08) media_player_t4

0x0edb,	// (0x00054d08) media_player_t5

0x0edb,	// (0x00054d08) media_player_t6

0x0edb,	// (0x00054d08) media_player_t7

0x0006,

0xf55f,	// (0x0006338c) media_player_t

0xbd26,	// (0x0005fb53) wait_bar_pane_cp02

0xf544,	// (0x00063371) main_usb_pane_t

0x1155,	// (0x00054f82) cell_mp_pane

0xc43b,	// (0x00060268) cell_mp_pane_g1

0xc1c8,	// (0x0005fff5) grid_highlight_pane_cp06

0x09c6,	// (0x000547f3) grid_skin_colour_pane

0x09ce,	// (0x000547fb) list_highlight_pane_cp03

0x4501,	// (0x0005832e) skin_g1

0x09d6,	// (0x00054803) skin_t1

0x09e5,	// (0x00054812) skin_t2

0x0001,

0xf218,	// (0x00063045) skin_t

0x4509,	// (0x00058336) cell_skin_colour_pane_ParamLimits

0x4509,	// (0x00058336) cell_skin_colour_pane

0x09f3,	// (0x00054820) cell_skin_colour_pane_g1

0x4582,	// (0x000583af) call_video_g1_ParamLimits

0x4582,	// (0x000583af) call_video_g1

0x459e,	// (0x000583cb) call_video_g2_ParamLimits

0x459e,	// (0x000583cb) call_video_g2

0x0001,

0xf21d,	// (0x0006304a) call_video_g_ParamLimits

0xf21d,	// (0x0006304a) call_video_g

0x45f0,	// (0x0005841d) call_video_uplink_pane_cp1_ParamLimits

0x45f0,	// (0x0005841d) call_video_uplink_pane_cp1

0x0a05,	// (0x00054832) call_video_uplink_pane_cp2

0x468f,	// (0x000584bc) video_down_crop_pane_ParamLimits

0x468f,	// (0x000584bc) video_down_crop_pane

0x4786,	// (0x000585b3) video_down_pane_ParamLimits

0x4786,	// (0x000585b3) video_down_pane

0x0a0d,	// (0x0005483a) video_down_subqcif_pane_ParamLimits

0x0a0d,	// (0x0005483a) video_down_subqcif_pane

0x0a25,	// (0x00054852) video_down_subqcif_pane_cp_ParamLimits

0x0a25,	// (0x00054852) video_down_subqcif_pane_cp

0x0a4b,	// (0x00054878) im_reading_pane_ParamLimits

0x0a4b,	// (0x00054878) im_reading_pane

0x4896,	// (0x000586c3) im_writing_pane_ParamLimits

0x4896,	// (0x000586c3) im_writing_pane

0x48ac,	// (0x000586d9) im_reading_pane_t1

0x0a65,	// (0x00054892) list_im_pane

0x0a76,	// (0x000548a3) scroll_pane_cp07

0x48e5,	// (0x00058712) im_writing_pane_t1_ParamLimits

0x48e5,	// (0x00058712) im_writing_pane_t1

0x0a8f,	// (0x000548bc) im_writing_pane_t2_ParamLimits

0x0a8f,	// (0x000548bc) im_writing_pane_t2

0x0001,

0xf227,	// (0x00063054) im_writing_pane_t_ParamLimits

0xf227,	// (0x00063054) im_writing_pane_t

0xc1c8,	// (0x0005fff5) input_focus_pane_cp04

0xc1c8,	// (0x0005fff5) input_focus_pane_cp05

0x48fa,	// (0x00058727) list_im_single_pane_ParamLimits

0x48fa,	// (0x00058727) list_im_single_pane

0x490e,	// (0x0005873b) list_single_im_pane_t1

0x0962,	// (0x0005478f) blid_accuracy_pane

0x0962,	// (0x0005478f) blid_compass_pane

0x267c,	// (0x000564a9) main_location_t1

0x267c,	// (0x000564a9) main_location_t2

0x267c,	// (0x000564a9) main_location_t3

0x0002,

0xf56e,	// (0x0006339b) main_location_t

0xc1c8,	// (0x0005fff5) aid_levels_location

0xc43b,	// (0x00060268) blid_accuracy_pane_g1

0xc43b,	// (0x00060268) blid_accuracy_pane_g2

0x0001,

0xf276,	// (0x000630a3) blid_accuracy_pane_g

0x0ad7,	// (0x00054904) wml_content_pane

0x0b15,	// (0x00054942) wml_button_pane_ParamLimits

0x0b15,	// (0x00054942) wml_button_pane

0x491d,	// (0x0005874a) wml_list_single_large_pane_ParamLimits

0x491d,	// (0x0005874a) wml_list_single_large_pane

0x4932,	// (0x0005875f) wml_list_single_medium_pane_ParamLimits

0x4932,	// (0x0005875f) wml_list_single_medium_pane

0x4948,	// (0x00058775) wml_list_single_small_pane_ParamLimits

0x4948,	// (0x00058775) wml_list_single_small_pane

0x0b29,	// (0x00054956) wml_selection_box_pane_ParamLimits

0x0b29,	// (0x00054956) wml_selection_box_pane

0x0b3c,	// (0x00054969) wml_list_single_pane_t1

0x0b4b,	// (0x00054978) wml_list_single_medium_pane_t1

0x0b5a,	// (0x00054987) wml_list_single_large_pane_t1

0x0b69,	// (0x00054996) input_focus_pane_cp02_ParamLimits

0x0b69,	// (0x00054996) input_focus_pane_cp02

0x0b7c,	// (0x000549a9) wml_selection_box_pane_g1

0x0b85,	// (0x000549b2) wml_selection_box_pane_t1_ParamLimits

0x0b85,	// (0x000549b2) wml_selection_box_pane_t1

0xc423,	// (0x00060250) bg_wml_button_pane_ParamLimits

0xc423,	// (0x00060250) bg_wml_button_pane

0x0b9d,	// (0x000549ca) wml_button_pane_g1

0x0ba5,	// (0x000549d2) wml_button_pane_t1

0x0b9d,	// (0x000549ca) wml_button_bg_pane_g1

0x0bb5,	// (0x000549e2) wml_button_bg_pane_g2

0x0bbd,	// (0x000549ea) wml_button_bg_pane_g3

0x0bc5,	// (0x000549f2) wml_button_bg_pane_g4

0x0bcd,	// (0x000549fa) wml_button_bg_pane_g5

0x0bd5,	// (0x00054a02) wml_button_bg_pane_g6

0x0bdd,	// (0x00054a0a) wml_button_bg_pane_g7

0x0be5,	// (0x00054a12) wml_button_bg_pane_g8

0x0bed,	// (0x00054a1a) wml_button_bg_pane_g9

0x0008,

0xf22c,	// (0x00063059) wml_button_bg_pane_g

0x4960,	// (0x0005878d) bg_list_pane_cp02

0x0bf5,	// (0x00054a22) mce_header_pane_ParamLimits

0x0bf5,	// (0x00054a22) mce_header_pane

0x0c0b,	// (0x00054a38) mce_icon_pane

0x0c0b,	// (0x00054a38) mce_image_pane

0x0c14,	// (0x00054a41) mce_text_pane_ParamLimits

0x0c14,	// (0x00054a41) mce_text_pane

0x4968,	// (0x00058795) scroll_pane_cp03

0x0b0d,	// (0x0005493a) scroll_pane_cp04

0x0c27,	// (0x00054a54) scroll_pane_cp05_ParamLimits

0x0c27,	// (0x00054a54) scroll_pane_cp05

0x4972,	// (0x0005879f) mce_header_field_pane_ParamLimits

0x4972,	// (0x0005879f) mce_header_field_pane

0x4989,	// (0x000587b6) mce_header_field_pane_2_ParamLimits

0x4989,	// (0x000587b6) mce_header_field_pane_2

0x499f,	// (0x000587cc) mce_header_field_pane_3

0x49a7,	// (0x000587d4) list_single_mce_message_pane_ParamLimits

0x49a7,	// (0x000587d4) list_single_mce_message_pane

0x49bc,	// (0x000587e9) list_single_mce_smart_pane_ParamLimits

0x49bc,	// (0x000587e9) list_single_mce_smart_pane

0x0c33,	// (0x00054a60) input_focus_pane_cp03

0x0c3c,	// (0x00054a69) list_header_data_pane

0x49dc,	// (0x00058809) mce_header_field_pane_t1

0x49ec,	// (0x00058819) list_single_mce_header_pane_ParamLimits

0x49ec,	// (0x00058819) list_single_mce_header_pane

0x0c44,	// (0x00054a71) list_single_mce_header_pane_t1

0x0c53,	// (0x00054a80) list_single_mce_message_pane_g1

0x0c5b,	// (0x00054a88) list_single_mce_message_pane_t1

0x4a26,	// (0x00058853) bg_cale_heading_pane_cp01_ParamLimits

0x4a26,	// (0x00058853) bg_cale_heading_pane_cp01

0x0c69,	// (0x00054a96) bg_cale_pane_cp02_ParamLimits

0x0c69,	// (0x00054a96) bg_cale_pane_cp02

0x4a60,	// (0x0005888d) cale_month_corner_pane

0x4a7f,	// (0x000588ac) cale_month_day_heading_pane_ParamLimits

0x4a7f,	// (0x000588ac) cale_month_day_heading_pane

0x4ad1,	// (0x000588fe) cale_month_pane_g1_ParamLimits

0x4ad1,	// (0x000588fe) cale_month_pane_g1

0x4b00,	// (0x0005892d) cale_month_pane_g2_ParamLimits

0x4b00,	// (0x0005892d) cale_month_pane_g2

0x4b30,	// (0x0005895d) cale_month_pane_g3_ParamLimits

0x4b30,	// (0x0005895d) cale_month_pane_g3

0x4b6c,	// (0x00058999) cale_month_pane_g4_ParamLimits

0x4b6c,	// (0x00058999) cale_month_pane_g4

0x4ba8,	// (0x000589d5) cale_month_pane_g5_ParamLimits

0x4ba8,	// (0x000589d5) cale_month_pane_g5

0x4bf0,	// (0x00058a1d) cale_month_pane_g6_ParamLimits

0x4bf0,	// (0x00058a1d) cale_month_pane_g6

0x4c3c,	// (0x00058a69) cale_month_pane_g7_ParamLimits

0x4c3c,	// (0x00058a69) cale_month_pane_g7

0x4c90,	// (0x00058abd) cale_month_pane_g8_ParamLimits

0x4c90,	// (0x00058abd) cale_month_pane_g8

0x4ce4,	// (0x00058b11) cale_month_pane_g9_ParamLimits

0x4ce4,	// (0x00058b11) cale_month_pane_g9

0x4d36,	// (0x00058b63) cale_month_pane_g10_ParamLimits

0x4d36,	// (0x00058b63) cale_month_pane_g10

0x4d88,	// (0x00058bb5) cale_month_pane_g11_ParamLimits

0x4d88,	// (0x00058bb5) cale_month_pane_g11

0x4dda,	// (0x00058c07) cale_month_pane_g12_ParamLimits

0x4dda,	// (0x00058c07) cale_month_pane_g12

0x4e2c,	// (0x00058c59) cale_month_pane_g13_ParamLimits

0x4e2c,	// (0x00058c59) cale_month_pane_g13

0x000c,

0xf23f,	// (0x0006306c) cale_month_pane_g_ParamLimits

0xf23f,	// (0x0006306c) cale_month_pane_g

0x4e7e,	// (0x00058cab) cale_month_week_pane

0x4ea2,	// (0x00058ccf) grid_cale_month_pane_ParamLimits

0x4ea2,	// (0x00058ccf) grid_cale_month_pane

0x4eeb,	// (0x00058d18) cale_month_day_heading_pane_t1

0x4f71,	// (0x00058d9e) cale_month_day_heading_pane_t2

0x4fea,	// (0x00058e17) cale_month_day_heading_pane_t3

0x5063,	// (0x00058e90) cale_month_day_heading_pane_t4

0x50e4,	// (0x00058f11) cale_month_day_heading_pane_t5

0x516d,	// (0x00058f9a) cale_month_day_heading_pane_t6

0x51f6,	// (0x00059023) cale_month_day_heading_pane_t7

0x0006,

0xf25a,	// (0x00063087) cale_month_day_heading_pane_t

0x0910,	// (0x0005473d) bg_cale_side_pane_cp01

0x5287,	// (0x000590b4) cale_month_week_pane_t1

0x52a0,	// (0x000590cd) cale_month_week_pane_t2

0x52b9,	// (0x000590e6) cale_month_week_pane_t3

0x52d2,	// (0x000590ff) cale_month_week_pane_t4

0x52eb,	// (0x00059118) cale_month_week_pane_t5

0x5304,	// (0x00059131) cale_month_week_pane_t6

0x0005,

0xf269,	// (0x00063096) cale_month_week_pane_t

0x531d,	// (0x0005914a) cell_cale_month_pane_ParamLimits

0x531d,	// (0x0005914a) cell_cale_month_pane

0xc544,	// (0x00060371) cell_cale_month_pane_g1

0x544b,	// (0x00059278) cell_cale_month_pane_t1_ParamLimits

0x544b,	// (0x00059278) cell_cale_month_pane_t1

0x091e,	// (0x0005474b) grid_highlight_pane_cp08

0xc43b,	// (0x00060268) main_smil_g1

0x5477,	// (0x000592a4) smil_status_pane

0x0ca8,	// (0x00054ad5) smil_text_pane

0x2594,	// (0x000563c1) bg_popup_call3_rect_pane_g8

0x259c,	// (0x000563c9) bg_popup_call3_rect_pane_g9

0x0008,

0xf502,	// (0x0006332f) bg_popup_call3_rect_pane_g

0x2753,	// (0x00056580) smil_status_volume_pane_g1

0x0cb2,	// (0x00054adf) smil_status_pane_t1

0xc68e,	// (0x000604bb) volume_smil_pane

0x0cc9,	// (0x00054af6) list_smil_text_pane

0x548a,	// (0x000592b7) scroll_pane_cp011

0x5495,	// (0x000592c2) smil_text_list_pane_t1_ParamLimits

0x5495,	// (0x000592c2) smil_text_list_pane_t1

0xc550,	// (0x0006037d) aid_volume_smil_ParamLimits

0xc550,	// (0x0006037d) aid_volume_smil

0xc43b,	// (0x00060268) smil_volume_pane_g1

0xc43b,	// (0x00060268) smil_volume_pane_g2

0x0001,

0xf276,	// (0x000630a3) smil_volume_pane_g

0x3d91,	// (0x00057bbe) listscroll_cale_day_pane

0x0cd3,	// (0x00054b00) bg_cale_pane

0x0ceb,	// (0x00054b18) list_cale_pane

0x0d0e,	// (0x00054b3b) scroll_pane_cp09

0x0d1f,	// (0x00054b4c) cale_bg_pane_g1

0x0d27,	// (0x00054b54) cale_bg_pane_g2

0x0d2f,	// (0x00054b5c) cale_bg_pane_g3

0x0d37,	// (0x00054b64) cale_bg_pane_g4

0x0d3f,	// (0x00054b6c) cale_bg_pane_g5

0x0d47,	// (0x00054b74) cale_bg_pane_g6

0x0d4f,	// (0x00054b7c) cale_bg_pane_g7

0x0d57,	// (0x00054b84) cale_bg_pane_g8

0x0d5f,	// (0x00054b8c) cale_bg_pane_g9

0x0008,

0xf27b,	// (0x000630a8) cale_bg_pane_g

0x54d1,	// (0x000592fe) list_cale_time_pane_ParamLimits

0x54d1,	// (0x000592fe) list_cale_time_pane

0x0d6f,	// (0x00054b9c) list_cale_time_pane_g1_ParamLimits

0x0d6f,	// (0x00054b9c) list_cale_time_pane_g1

0x0d7b,	// (0x00054ba8) list_cale_time_pane_g2_ParamLimits

0x0d7b,	// (0x00054ba8) list_cale_time_pane_g2

0x54e6,	// (0x00059313) list_cale_time_pane_g3_ParamLimits

0x54e6,	// (0x00059313) list_cale_time_pane_g3

0x54f4,	// (0x00059321) list_cale_time_pane_g4_ParamLimits

0x54f4,	// (0x00059321) list_cale_time_pane_g4

0x5502,	// (0x0005932f) list_cale_time_pane_g5_ParamLimits

0x5502,	// (0x0005932f) list_cale_time_pane_g5

0x0005,

0xf28e,	// (0x000630bb) list_cale_time_pane_g_ParamLimits

0xf28e,	// (0x000630bb) list_cale_time_pane_g

0x0d95,	// (0x00054bc2) list_cale_time_pane_t1_ParamLimits

0x0d95,	// (0x00054bc2) list_cale_time_pane_t1

0x0dbd,	// (0x00054bea) list_cale_time_pane_t2_ParamLimits

0x0dbd,	// (0x00054bea) list_cale_time_pane_t2

0x5764,	// (0x00059591) aid_blid_cardinal_pane

0x57a2,	// (0x000595cf) compass_pane_t4

0x0de5,	// (0x00054c12) list_cale_time_pane_t4_ParamLimits

0x0de5,	// (0x00054c12) list_cale_time_pane_t4

0x57b0,	// (0x000595dd) compass_pane_t5

0x57be,	// (0x000595eb) compass_pane_t6

0x57cc,	// (0x000595f9) compass_pane_t7

0x129a,	// (0x000550c7) navi_pane_cc_t1

0x1477,	// (0x000552a4) aid_phob_thumbnail_center_pane

0x5c20,	// (0x00059a4d) main_postcard_pane_g4_ParamLimits

0x0002,

0xf29b,	// (0x000630c8) list_cale_time_pane_t_ParamLimits

0xf29b,	// (0x000630c8) list_cale_time_pane_t

0xbe1f,	// (0x0005fc4c) bg_popup_window_pane_cp02_ParamLimits

0xbe1f,	// (0x0005fc4c) bg_popup_window_pane_cp02

0x0e0d,	// (0x00054c3a) heading_pane_cp01_ParamLimits

0x0e0d,	// (0x00054c3a) heading_pane_cp01

0x0e19,	// (0x00054c46) loc_req_pane_ParamLimits

0x0e19,	// (0x00054c46) loc_req_pane

0x0e29,	// (0x00054c56) loc_type_pane_ParamLimits

0x0e29,	// (0x00054c56) loc_type_pane

0x0e3b,	// (0x00054c68) loc_type_pane_t1_ParamLimits

0x0e3b,	// (0x00054c68) loc_type_pane_t1

0x0e4d,	// (0x00054c7a) loc_type_pane_t2_ParamLimits

0x0e4d,	// (0x00054c7a) loc_type_pane_t2

0x0e5f,	// (0x00054c8c) loc_type_pane_t3_ParamLimits

0x0e5f,	// (0x00054c8c) loc_type_pane_t3

0x0002,

0xf2a2,	// (0x000630cf) loc_type_pane_t_ParamLimits

0xf2a2,	// (0x000630cf) loc_type_pane_t

0x0e71,	// (0x00054c9e) list_loc_req_pane

0x0e7b,	// (0x00054ca8) scroll_pane_cp012

0x5510,	// (0x0005933d) list_single_loc_request_popup_menu_pane_ParamLimits

0x5510,	// (0x0005933d) list_single_loc_request_popup_menu_pane

0x0e86,	// (0x00054cb3) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x0e86,	// (0x00054cb3) list_single_loc_request_popup_menu_pane_g1

0x0e92,	// (0x00054cbf) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x0e92,	// (0x00054cbf) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf2a9,	// (0x000630d6) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf2a9,	// (0x000630d6) list_single_loc_request_popup_menu_pane_g

0x0e9e,	// (0x00054ccb) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x0e9e,	// (0x00054ccb) list_single_loc_request_popup_menu_pane_t1

0xc423,	// (0x00060250) bg_popup_window_pane_cp03_ParamLimits

0xc423,	// (0x00060250) bg_popup_window_pane_cp03

0x2837,	// (0x00056664) heading_loc_req_pane_ParamLimits

0x2837,	// (0x00056664) heading_loc_req_pane

0x551d,	// (0x0005934a) popup_dyc_status_message_window_g1_ParamLimits

0x551d,	// (0x0005934a) popup_dyc_status_message_window_g1

0x5531,	// (0x0005935e) popup_dyc_status_message_window_t1_ParamLimits

0x5531,	// (0x0005935e) popup_dyc_status_message_window_t1

0x5546,	// (0x00059373) popup_dyc_status_message_window_t2_ParamLimits

0x5546,	// (0x00059373) popup_dyc_status_message_window_t2

0x555b,	// (0x00059388) popup_dyc_status_message_window_t3_ParamLimits

0x555b,	// (0x00059388) popup_dyc_status_message_window_t3

0x0002,

0xf2ae,	// (0x000630db) popup_dyc_status_message_window_t_ParamLimits

0xf2ae,	// (0x000630db) popup_dyc_status_message_window_t

0xc1c8,	// (0x0005fff5) bg_heading_pane_cp01

0x0eb4,	// (0x00054ce1) heading_loc_req_pane_g1

0x0ebc,	// (0x00054ce9) heading_loc_req_pane_g2

0x0ec4,	// (0x00054cf1) heading_loc_req_pane_g3

0x0002,

0xf2b5,	// (0x000630e2) heading_loc_req_pane_g

0x0ecc,	// (0x00054cf9) heading_loc_req_pane_t1

0x0eeb,	// (0x00054d18) bg_popup_sub_pane_cp01_ParamLimits

0x0eeb,	// (0x00054d18) bg_popup_sub_pane_cp01

0x0ef9,	// (0x00054d26) popup_cale_events_window_g1_ParamLimits

0x0ef9,	// (0x00054d26) popup_cale_events_window_g1

0x0f19,	// (0x00054d46) popup_cale_events_window_g2_ParamLimits

0x0f19,	// (0x00054d46) popup_cale_events_window_g2

0x0001,

0xf2d7,	// (0x00063104) popup_cale_events_window_g_ParamLimits

0xf2d7,	// (0x00063104) popup_cale_events_window_g

0x0f39,	// (0x00054d66) popup_cale_events_window_t1_ParamLimits

0x0f39,	// (0x00054d66) popup_cale_events_window_t1

0x0f4b,	// (0x00054d78) popup_cale_events_window_t2_ParamLimits

0x0f4b,	// (0x00054d78) popup_cale_events_window_t2

0x0f89,	// (0x00054db6) popup_cale_events_window_t3_ParamLimits

0x0f89,	// (0x00054db6) popup_cale_events_window_t3

0x0fc3,	// (0x00054df0) popup_cale_events_window_t4_ParamLimits

0x0fc3,	// (0x00054df0) popup_cale_events_window_t4

0x0003,

0xf2dc,	// (0x00063109) popup_cale_events_window_t_ParamLimits

0xf2dc,	// (0x00063109) popup_cale_events_window_t

0x5583,	// (0x000593b0) call_type_pane

0x5593,	// (0x000593c0) popup_call_status_window_g1

0x55a7,	// (0x000593d4) popup_call_status_window_g2

0x55bb,	// (0x000593e8) popup_call_status_window_g3

0x0002,

0xf2e5,	// (0x00063112) popup_call_status_window_g

0x1007,	// (0x00054e34) call_type_pane_g1

0x1010,	// (0x00054e3d) call_type_pane_g2

0x0001,

0xf2ec,	// (0x00063119) call_type_pane_g

0xc1c8,	// (0x0005fff5) bg_popup_sub_pane_cp02

0x1019,	// (0x00054e46) listscroll_popup_wml_pane

0x1021,	// (0x00054e4e) list_wml_pane

0x102b,	// (0x00054e58) scroll_pane_cp013

0x1036,	// (0x00054e63) list_single_graphic_popup_wml_pane_ParamLimits

0x1036,	// (0x00054e63) list_single_graphic_popup_wml_pane

0xc43b,	// (0x00060268) list_single_graphic_popup_wml_pane_g1

0x104a,	// (0x00054e77) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2f1,	// (0x0006311e) list_single_graphic_popup_wml_pane_g

0x1052,	// (0x00054e7f) list_single_graphic_popup_wml_pane_t1

0x1068,	// (0x00054e95) aid_call_pane

0xc41b,	// (0x00060248) popup_clock_analogue_window_g1

0xc41b,	// (0x00060248) popup_clock_analogue_window_g2

0xc572,	// (0x0006039f) popup_clock_analogue_window_g3

0xc572,	// (0x0006039f) popup_clock_analogue_window_g4

0xc43b,	// (0x00060268) popup_clock_analogue_window_g5

0x0004,

0xf2f6,	// (0x00063123) popup_clock_analogue_window_g

0xc57a,	// (0x000603a7) popup_clock_analogue_window_t1

0xc588,	// (0x000603b5) clock_digital_number_pane_ParamLimits

0xc588,	// (0x000603b5) clock_digital_number_pane

0xc594,	// (0x000603c1) clock_digital_number_pane_cp02_ParamLimits

0xc594,	// (0x000603c1) clock_digital_number_pane_cp02

0xc5a0,	// (0x000603cd) clock_digital_number_pane_cp03_ParamLimits

0xc5a0,	// (0x000603cd) clock_digital_number_pane_cp03

0xc5ac,	// (0x000603d9) clock_digital_number_pane_cp04_ParamLimits

0xc5ac,	// (0x000603d9) clock_digital_number_pane_cp04

0xc5bc,	// (0x000603e9) clock_digital_separator_pane_ParamLimits

0xc5bc,	// (0x000603e9) clock_digital_separator_pane

0xc5c8,	// (0x000603f5) popup_clock_digital_window_t1

0xc43b,	// (0x00060268) clock_digital_number_pane_g1

0xc43b,	// (0x00060268) clock_digital_number_pane_g2

0x0001,

0xf276,	// (0x000630a3) clock_digital_number_pane_g

0xc43b,	// (0x00060268) clock_digital_separator_pane_g1

0xc43b,	// (0x00060268) clock_digital_separator_pane_g2

0x0001,

0xf276,	// (0x000630a3) clock_digital_separator_pane_g

0xc1c8,	// (0x0005fff5) bg_popup_window_pane_cp04

0x1070,	// (0x00054e9d) heading_pane_cp03

0x0962,	// (0x0005478f) listscroll_popup_gms_pane

0xc1c8,	// (0x0005fff5) grid_large_graphic_popup_pane

0x1079,	// (0x00054ea6) listscroll_popup_gms_pane_g1

0x1082,	// (0x00054eaf) listscroll_popup_gms_pane_g2

0x0001,

0xf301,	// (0x0006312e) listscroll_popup_gms_pane_g

0x108b,	// (0x00054eb8) scroll_pane_cp014

0xc49e,	// (0x000602cb) cell_large_graphic_popup_pane_ParamLimits

0xc49e,	// (0x000602cb) cell_large_graphic_popup_pane

0x073e,	// (0x0005456b) cell_large_graphic_popup_pane_g1_ParamLimits

0x073e,	// (0x0005456b) cell_large_graphic_popup_pane_g1

0x1094,	// (0x00054ec1) cell_large_graphic_popup_pane_g2_ParamLimits

0x1094,	// (0x00054ec1) cell_large_graphic_popup_pane_g2

0x10a2,	// (0x00054ecf) cell_large_graphic_popup_pane_g3_ParamLimits

0x10a2,	// (0x00054ecf) cell_large_graphic_popup_pane_g3

0x10b0,	// (0x00054edd) cell_large_graphic_popup_pane_g4_ParamLimits

0x10b0,	// (0x00054edd) cell_large_graphic_popup_pane_g4

0x0003,

0xf306,	// (0x00063133) cell_large_graphic_popup_pane_g_ParamLimits

0xf306,	// (0x00063133) cell_large_graphic_popup_pane_g

0xc1c8,	// (0x0005fff5) grid_highlight_pane_cp010

0xc43b,	// (0x00060268) bg_popup_call_pane_g1

0x10c1,	// (0x00054eee) list_single_graphic_popup_conf_pane_ParamLimits

0x10c1,	// (0x00054eee) list_single_graphic_popup_conf_pane

0x10d4,	// (0x00054f01) list_highlight_pane_cp01

0x10dd,	// (0x00054f0a) list_single_graphic_popup_conf_pane_g1

0x10e5,	// (0x00054f12) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf30f,	// (0x0006313c) list_single_graphic_popup_conf_pane_g

0x10ed,	// (0x00054f1a) list_single_graphic_popup_conf_pane_t1

0x10fb,	// (0x00054f28) linegrid_cams_pane_g1

0x55ca,	// (0x000593f7) linegrid_cams_pane_g2

0x08a1,	// (0x000546ce) linegrid_cams_pane_g3

0x1104,	// (0x00054f31) linegrid_cams_pane_g4

0x55d3,	// (0x00059400) linegrid_cams_pane_g5

0x55dc,	// (0x00059409) linegrid_cams_pane_g6

0x0951,	// (0x0005477e) linegrid_cams_pane_g7

0x0006,

0xf314,	// (0x00063141) linegrid_cams_pane_g

0x110d,	// (0x00054f3a) popup_clock_analogue_window

0x110d,	// (0x00054f3a) popup_clock_digital_window

0xc1c8,	// (0x0005fff5) popup_phob_thumbnail_window

0xc43b,	// (0x00060268) call_video_uplink_pane_g1

0x1116,	// (0x00054f43) call_video_uplink_pane_g2

0x0001,

0xf323,	// (0x00063150) call_video_uplink_pane_g

0x111e,	// (0x00054f4b) video_uplink_pane

0x1126,	// (0x00054f53) mce_image_pane_g1

0x55e7,	// (0x00059414) mce_image_pane_g2

0x55f1,	// (0x0005941e) mce_image_pane_g3

0x55f9,	// (0x00059426) mce_image_pane_g4

0x5601,	// (0x0005942e) mce_image_pane_g5

0x0004,

0xf328,	// (0x00063155) mce_image_pane_g

0x1130,	// (0x00054f5d) control_top_pane_stacon_cp01_ParamLimits

0x1130,	// (0x00054f5d) control_top_pane_stacon_cp01

0x1144,	// (0x00054f71) uni_indicator_pane_stacon_cp01_ParamLimits

0x1144,	// (0x00054f71) uni_indicator_pane_stacon_cp01

0x1155,	// (0x00054f82) bg_popup_sub_pane_cp03

0x115f,	// (0x00054f8c) chi_dic_find_pane

0x5609,	// (0x00059436) listscroll_chi_dic_pane

0x1167,	// (0x00054f94) main_pane_chidic_g1

0x116f,	// (0x00054f9c) chi_dic_find_pane_t1

0x117d,	// (0x00054faa) find_chidic_pane

0x1186,	// (0x00054fb3) chi_dic_list_pane_ParamLimits

0x1186,	// (0x00054fb3) chi_dic_list_pane

0x1197,	// (0x00054fc4) scroll_pane_cp020

0x119f,	// (0x00054fcc) find_chidic_pane_t1

0xc1c8,	// (0x0005fff5) input_focus_pane_cp06

0x561d,	// (0x0005944a) list_chi_dic_pane_ParamLimits

0x561d,	// (0x0005944a) list_chi_dic_pane

0x562f,	// (0x0005945c) list_chi_dic_pane_t1_ParamLimits

0x562f,	// (0x0005945c) list_chi_dic_pane_t1

0xc1c8,	// (0x0005fff5) list_highlight_pane_cp020

0x11ae,	// (0x00054fdb) bg_cale_heading_pane_g1

0x5642,	// (0x0005946f) bg_cale_heading_pane_g2

0x564a,	// (0x00059477) bg_cale_heading_pane_g3

0x5652,	// (0x0005947f) bg_cale_heading_pane_g4

0x565c,	// (0x00059489) bg_cale_heading_pane_g5

0x5666,	// (0x00059493) bg_cale_heading_pane_g6

0x566e,	// (0x0005949b) bg_cale_heading_pane_g7

0x5676,	// (0x000594a3) bg_cale_heading_pane_g8

0x5680,	// (0x000594ad) bg_cale_heading_pane_g9

0x0008,

0xf333,	// (0x00063160) bg_cale_heading_pane_g

0x11ae,	// (0x00054fdb) bg_cale_side_pane_g1

0x568a,	// (0x000594b7) bg_cale_side_pane_g2

0x5692,	// (0x000594bf) bg_cale_side_pane_g3

0x569a,	// (0x000594c7) bg_cale_side_pane_g4

0x56a2,	// (0x000594cf) bg_cale_side_pane_g5

0x56aa,	// (0x000594d7) bg_cale_side_pane_g6

0x56b2,	// (0x000594df) bg_cale_side_pane_g7

0x56ba,	// (0x000594e7) bg_cale_side_pane_g8

0x56c2,	// (0x000594ef) bg_cale_side_pane_g9

0x0008,

0xf346,	// (0x00063173) bg_cale_side_pane_g

0x56ca,	// (0x000594f7) popup_call_status_window_ParamLimits

0x56ca,	// (0x000594f7) popup_call_status_window

0x11b6,	// (0x00054fe3) stacon_top_pane

0x11be,	// (0x00054feb) status_pane_ParamLimits

0x11be,	// (0x00054feb) status_pane

0x11d3,	// (0x00055000) status_small_pane

0x11db,	// (0x00055008) control_pane

0xc1c8,	// (0x0005fff5) stacon_bottom_pane

0x11e3,	// (0x00055010) list_single_mce_smart_pane_t1_ParamLimits

0x11e3,	// (0x00055010) list_single_mce_smart_pane_t1

0x11f6,	// (0x00055023) list_single_mce_smart_pane_t2_ParamLimits

0x11f6,	// (0x00055023) list_single_mce_smart_pane_t2

0x0001,

0xf359,	// (0x00063186) list_single_mce_smart_pane_t_ParamLimits

0xf359,	// (0x00063186) list_single_mce_smart_pane_t

0x5713,	// (0x00059540) compass_pane

0x571c,	// (0x00059549) main_location2_pane_t1

0x572e,	// (0x0005955b) main_location2_pane_t2

0x5740,	// (0x0005956d) main_location2_pane_t3

0x0003,

0xf35e,	// (0x0006318b) main_location2_pane_t

0x1215,	// (0x00055042) compass_pane_g1_ParamLimits

0x1215,	// (0x00055042) compass_pane_g1

0x5784,	// (0x000595b1) compass_pane_t1

0x5793,	// (0x000595c0) compass_pane_t2

0x0005,

0xf367,	// (0x00063194) compass_pane_t

0x57da,	// (0x00059607) text_secondary_cp61

0x1291,	// (0x000550be) navi_pane_cams_g5

0x130d,	// (0x0005513a) navi_pane_im_t1

0x131b,	// (0x00055148) navi_pane_mp_g1_ParamLimits

0x131b,	// (0x00055148) navi_pane_mp_g1

0x132f,	// (0x0005515c) navi_pane_mp_g2_ParamLimits

0x132f,	// (0x0005515c) navi_pane_mp_g2

0x133b,	// (0x00055168) navi_pane_mp_g3_ParamLimits

0x133b,	// (0x00055168) navi_pane_mp_g3

0x0002,

0xf37b,	// (0x000631a8) navi_pane_mp_g_ParamLimits

0xf37b,	// (0x000631a8) navi_pane_mp_g

0x1347,	// (0x00055174) navi_pane_mp_t1

0x1355,	// (0x00055182) navi_pane_mp_t2

0x0002,

0xf382,	// (0x000631af) navi_pane_mp_t

0x13c0,	// (0x000551ed) navi_pane_vt_g1

0x1347,	// (0x00055174) navi_pane_vt_t1

0x13c8,	// (0x000551f5) navi_slider_pane

0x0962,	// (0x0005478f) zooming_pane

0x13d8,	// (0x00055205) navi_slider_pane_g1

0xc5e5,	// (0x00060412) navi_slider_pane_g2

0x0006,

0xf389,	// (0x000631b6) navi_slider_pane_g

0x13fc,	// (0x00055229) aid_levels_zoom

0x1404,	// (0x00055231) zooming_pane_g1

0x140c,	// (0x00055239) zooming_pane_g2

0x140c,	// (0x00055239) zooming_pane_g3

0x0002,

0xf398,	// (0x000631c5) zooming_pane_g

0x1414,	// (0x00055241) level_10_zoom

0x141d,	// (0x0005524a) level_11_zoom

0x1426,	// (0x00055253) level_1_zoom

0x142f,	// (0x0005525c) level_2_zoom

0x1438,	// (0x00055265) level_3_zoom

0x1441,	// (0x0005526e) level_4_zoom

0x144a,	// (0x00055277) level_5_zoom

0x1453,	// (0x00055280) level_6_zoom

0x145c,	// (0x00055289) level_7_zoom

0x1465,	// (0x00055292) level_8_zoom

0x146e,	// (0x0005529b) level_9_zoom

0x147f,	// (0x000552ac) popup_phob_thumbnail_window_g1

0x1487,	// (0x000552b4) popup_phob_thumbnail_window_g2

0x0001,

0xf39f,	// (0x000631cc) popup_phob_thumbnail_window_g

0x62c6,	// (0x0005a0f3) level_1_location

0x62ce,	// (0x0005a0fb) level_2_location

0x62d6,	// (0x0005a103) level_3_location

0x62de,	// (0x0005a10b) level_4_location

0x0962,	// (0x0005478f) level_5_location

0x582b,	// (0x00059658) mce_icon_pane_g1

0x5835,	// (0x00059662) mce_icon_pane_g2

0x0001,

0xf3a4,	// (0x000631d1) mce_icon_pane_g

0x2857,	// (0x00056684) main_mup_pane_g1_ParamLimits

0x2857,	// (0x00056684) main_mup_pane_g1

0x2857,	// (0x00056684) main_mup_pane_g2_ParamLimits

0x2857,	// (0x00056684) main_mup_pane_g2

0x2857,	// (0x00056684) main_mup_pane_g3_ParamLimits

0x2857,	// (0x00056684) main_mup_pane_g3

0x2857,	// (0x00056684) main_mup_pane_g4_ParamLimits

0x2857,	// (0x00056684) main_mup_pane_g4

0x2857,	// (0x00056684) main_mup_pane_g5_ParamLimits

0x2857,	// (0x00056684) main_mup_pane_g5

0x2857,	// (0x00056684) main_mup_pane_g6_ParamLimits

0x2857,	// (0x00056684) main_mup_pane_g6

0x2857,	// (0x00056684) main_mup_pane_g7_ParamLimits

0x2857,	// (0x00056684) main_mup_pane_g7

0x2857,	// (0x00056684) main_mup_pane_g8_ParamLimits

0x2857,	// (0x00056684) main_mup_pane_g8

0x2857,	// (0x00056684) main_mup_pane_g9_ParamLimits

0x2857,	// (0x00056684) main_mup_pane_g9

0x2857,	// (0x00056684) main_mup_pane_g10_ParamLimits

0x2857,	// (0x00056684) main_mup_pane_g10

0x2857,	// (0x00056684) main_mup_pane_g11_ParamLimits

0x2857,	// (0x00056684) main_mup_pane_g11

0x073e,	// (0x0005456b) main_mup_pane_g12_ParamLimits

0x073e,	// (0x0005456b) main_mup_pane_g12

0x2857,	// (0x00056684) main_mup_pane_g13_ParamLimits

0x2857,	// (0x00056684) main_mup_pane_g13

0x000c,

0xf3a9,	// (0x000631d6) main_mup_pane_g_ParamLimits

0xf3a9,	// (0x000631d6) main_mup_pane_g

0x2843,	// (0x00056670) main_mup_pane_t1_ParamLimits

0x2843,	// (0x00056670) main_mup_pane_t1

0x2843,	// (0x00056670) main_mup_pane_t2_ParamLimits

0x2843,	// (0x00056670) main_mup_pane_t2

0x2843,	// (0x00056670) main_mup_pane_t3_ParamLimits

0x2843,	// (0x00056670) main_mup_pane_t3

0x09b2,	// (0x000547df) main_mup_pane_t4_ParamLimits

0x09b2,	// (0x000547df) main_mup_pane_t4

0x09b2,	// (0x000547df) main_mup_pane_t5_ParamLimits

0x09b2,	// (0x000547df) main_mup_pane_t5

0x096a,	// (0x00054797) main_mup_pane_t6_ParamLimits

0x096a,	// (0x00054797) main_mup_pane_t6

0x0005,

0xf3c4,	// (0x000631f1) main_mup_pane_t_ParamLimits

0xf3c4,	// (0x000631f1) main_mup_pane_t

0xc49e,	// (0x000602cb) mup_progress_pane_ParamLimits

0xc49e,	// (0x000602cb) mup_progress_pane

0x26d0,	// (0x000564fd) mup_visualizer_pane_ParamLimits

0x26d0,	// (0x000564fd) mup_visualizer_pane

0x26d0,	// (0x000564fd) mup_volume_pane_ParamLimits

0x26d0,	// (0x000564fd) mup_volume_pane

0x074c,	// (0x00054579) mup_visualizer_pane_g1_ParamLimits

0x074c,	// (0x00054579) mup_visualizer_pane_g1

0x148f,	// (0x000552bc) mup_visualizer_pane_g2_ParamLimits

0x148f,	// (0x000552bc) mup_visualizer_pane_g2

0x073e,	// (0x0005456b) mup_visualizer_pane_g3_ParamLimits

0x073e,	// (0x0005456b) mup_visualizer_pane_g3

0x0002,

0xf3d1,	// (0x000631fe) mup_visualizer_pane_g_ParamLimits

0xf3d1,	// (0x000631fe) mup_visualizer_pane_g

0x0998,	// (0x000547c5) mup_volume_pane_g1

0x0998,	// (0x000547c5) mup_volume_pane_g2

0x0001,

0xf3d8,	// (0x00063205) mup_volume_pane_g

0x0998,	// (0x000547c5) mup_progress_pane_g1

0x0998,	// (0x000547c5) mup_progress_pane_g2

0x0998,	// (0x000547c5) mup_progress_pane_g3

0x0002,

0xf3dd,	// (0x0006320a) mup_progress_pane_g

0xc1c8,	// (0x0005fff5) bg_popup_window_pane_cp05

0x149d,	// (0x000552ca) heading_pane_cp02_ParamLimits

0x149d,	// (0x000552ca) heading_pane_cp02

0x14b7,	// (0x000552e4) list_popup_blid_pane

0x14bf,	// (0x000552ec) list_blid_sat_info_pane_ParamLimits

0x14bf,	// (0x000552ec) list_blid_sat_info_pane

0x14d2,	// (0x000552ff) list_blid_sat_info_pane_g1

0x14da,	// (0x00055307) list_blid_sat_info_pane_t1

0x5935,	// (0x00059762) mup_equalizer_pane_ParamLimits

0x5935,	// (0x00059762) mup_equalizer_pane

0x594e,	// (0x0005977b) mup_equalizer_pane_cp1_ParamLimits

0x594e,	// (0x0005977b) mup_equalizer_pane_cp1

0x596b,	// (0x00059798) mup_equalizer_pane_cp2_ParamLimits

0x596b,	// (0x00059798) mup_equalizer_pane_cp2

0x5988,	// (0x000597b5) mup_equalizer_pane_cp3_ParamLimits

0x5988,	// (0x000597b5) mup_equalizer_pane_cp3

0x59a9,	// (0x000597d6) mup_equalizer_pane_cp4_ParamLimits

0x59a9,	// (0x000597d6) mup_equalizer_pane_cp4

0x59ca,	// (0x000597f7) mup_equalizer_pane_cp5

0x59de,	// (0x0005980b) mup_equalizer_pane_cp6

0x59f2,	// (0x0005981f) mup_equalizer_pane_cp7

0x2614,	// (0x00056441) bg_popup_call_poc_act_pane_g9

0x261c,	// (0x00056449) bg_popup_call_poc_act_pane_g10

0x2624,	// (0x00056451) bg_popup_call_poc_act_pane_g11

0x000a,

0xc423,	// (0x00060250) mup_scale_pane

0xc43b,	// (0x00060268) mup_scale_pane_g1

0x14e8,	// (0x00055315) mup_scale_pane_g2

0x0006,

0xf3f9,	// (0x00063226) mup_scale_pane_g

0x150c,	// (0x00055339) msg_data_pane

0x1514,	// (0x00055341) scroll_pane_cp017

0x5a18,	// (0x00059845) bg_list_pane_cp04_ParamLimits

0x5a18,	// (0x00059845) bg_list_pane_cp04

0x151c,	// (0x00055349) msg_data_pane_g1

0x5a38,	// (0x00059865) msg_data_pane_g2

0x5a42,	// (0x0005986f) msg_data_pane_g3

0x5a4a,	// (0x00059877) msg_data_pane_g4

0x5a52,	// (0x0005987f) msg_data_pane_g5

0x5a5a,	// (0x00059887) msg_data_pane_g6

0x5a62,	// (0x0005988f) msg_data_pane_g7

0x0006,

0xf408,	// (0x00063235) msg_data_pane_g

0x5a6a,	// (0x00059897) msg_text_pane_ParamLimits

0x5a6a,	// (0x00059897) msg_text_pane

0x5a96,	// (0x000598c3) qrid_highlight_pane_cp011_ParamLimits

0x5a96,	// (0x000598c3) qrid_highlight_pane_cp011

0xc1c8,	// (0x0005fff5) msg_body_pane

0xc1c8,	// (0x0005fff5) msg_header_pane

0x152d,	// (0x0005535a) input_focus_pane_cp07

0x5aba,	// (0x000598e7) msg_header_pane_t1_ParamLimits

0x5aba,	// (0x000598e7) msg_header_pane_t1

0x5ad0,	// (0x000598fd) msg_header_pane_t2_ParamLimits

0x5ad0,	// (0x000598fd) msg_header_pane_t2

0x0001,

0xf41c,	// (0x00063249) msg_header_pane_t_ParamLimits

0xf41c,	// (0x00063249) msg_header_pane_t

0x1542,	// (0x0005536f) msg_body_pane_g1

0x5ae7,	// (0x00059914) msg_body_pane_t1_ParamLimits

0x5ae7,	// (0x00059914) msg_body_pane_t1

0x5b18,	// (0x00059945) msg_body_pane_t2_ParamLimits

0x5b18,	// (0x00059945) msg_body_pane_t2

0x5b2a,	// (0x00059957) msg_body_pane_t3_ParamLimits

0x5b2a,	// (0x00059957) msg_body_pane_t3

0x0002,

0xf421,	// (0x0006324e) msg_body_pane_t_ParamLimits

0xf421,	// (0x0006324e) msg_body_pane_t

0x5b76,	// (0x000599a3) main_viewer_pane_g1_ParamLimits

0x5b76,	// (0x000599a3) main_viewer_pane_g1

0x5b84,	// (0x000599b1) main_viewer_pane_g2_ParamLimits

0x5b84,	// (0x000599b1) main_viewer_pane_g2

0x5b92,	// (0x000599bf) main_viewer_pane_g3_ParamLimits

0x5b92,	// (0x000599bf) main_viewer_pane_g3

0x5ba1,	// (0x000599ce) main_viewer_pane_g4_ParamLimits

0x5ba1,	// (0x000599ce) main_viewer_pane_g4

0xc60f,	// (0x0006043c) main_viewer_pane_g5_ParamLimits

0xc60f,	// (0x0006043c) main_viewer_pane_g5

0xc60f,	// (0x0006043c) main_viewer_pane_g7_ParamLimits

0xc60f,	// (0x0006043c) main_viewer_pane_g7

0x0e86,	// (0x00054cb3) main_viewer_pane_g8_ParamLimits

0x0e86,	// (0x00054cb3) main_viewer_pane_g8

0x0007,

0xf431,	// (0x0006325e) main_viewer_pane_g_ParamLimits

0xf431,	// (0x0006325e) main_viewer_pane_g

0x154a,	// (0x00055377) viewer_content_pane_ParamLimits

0x154a,	// (0x00055377) viewer_content_pane

0x5bdd,	// (0x00059a0a) main_postcard_pane_g1_ParamLimits

0x5bdd,	// (0x00059a0a) main_postcard_pane_g1

0x5bf3,	// (0x00059a20) main_postcard_pane_g2_ParamLimits

0x5bf3,	// (0x00059a20) main_postcard_pane_g2

0x5c09,	// (0x00059a36) main_postcard_pane_g3_ParamLimits

0x5c09,	// (0x00059a36) main_postcard_pane_g3

0x0005,

0xf442,	// (0x0006326f) main_postcard_pane_g_ParamLimits

0xf442,	// (0x0006326f) main_postcard_pane_g

0x5c20,	// (0x00059a4d) main_postcard_pane_g4

0x2766,	// (0x00056593) smil_status_volume_pane_g2

0x5c63,	// (0x00059a90) postcard_pane_ParamLimits

0x5c63,	// (0x00059a90) postcard_pane

0x1566,	// (0x00055393) postcard_pane_g1_ParamLimits

0x1566,	// (0x00055393) postcard_pane_g1

0x5ca5,	// (0x00059ad2) postcard_pane_g2_ParamLimits

0x5ca5,	// (0x00059ad2) postcard_pane_g2

0x5cb1,	// (0x00059ade) postcard_pane_g3_ParamLimits

0x5cb1,	// (0x00059ade) postcard_pane_g3

0x1558,	// (0x00055385) postcard_pane_g4_ParamLimits

0x1558,	// (0x00055385) postcard_pane_g4

0x5cbd,	// (0x00059aea) postcard_pane_g5_ParamLimits

0x5cbd,	// (0x00059aea) postcard_pane_g5

0x5cd2,	// (0x00059aff) postcard_pane_g6_ParamLimits

0x5cd2,	// (0x00059aff) postcard_pane_g6

0x1566,	// (0x00055393) postcard_pane_g7_ParamLimits

0x1566,	// (0x00055393) postcard_pane_g7

0x0006,

0xf44f,	// (0x0006327c) postcard_pane_g_ParamLimits

0xf44f,	// (0x0006327c) postcard_pane_g

0x5ce6,	// (0x00059b13) main_mp2_pane_g1_ParamLimits

0x5ce6,	// (0x00059b13) main_mp2_pane_g1

0x5cf2,	// (0x00059b1f) main_mp2_pane_g2_ParamLimits

0x5cf2,	// (0x00059b1f) main_mp2_pane_g2

0x5cfe,	// (0x00059b2b) main_mp2_pane_g3_ParamLimits

0x5cfe,	// (0x00059b2b) main_mp2_pane_g3

0x0002,

0xf45e,	// (0x0006328b) main_mp2_pane_g_ParamLimits

0xf45e,	// (0x0006328b) main_mp2_pane_g

0x5d0a,	// (0x00059b37) main_mp2_pane_t1_ParamLimits

0x5d0a,	// (0x00059b37) main_mp2_pane_t1

0x5d1f,	// (0x00059b4c) main_mp2_pane_t2_ParamLimits

0x5d1f,	// (0x00059b4c) main_mp2_pane_t2

0x5d31,	// (0x00059b5e) main_mp2_pane_t3_ParamLimits

0x5d31,	// (0x00059b5e) main_mp2_pane_t3

0x0002,

0xf465,	// (0x00063292) main_mp2_pane_t_ParamLimits

0xf465,	// (0x00063292) main_mp2_pane_t

0x1574,	// (0x000553a1) pec_content_pane_ParamLimits

0x1574,	// (0x000553a1) pec_content_pane

0x0b0d,	// (0x0005493a) scroll_pane_cp015

0x1586,	// (0x000553b3) pec_attribute_pane_ParamLimits

0x1586,	// (0x000553b3) pec_attribute_pane

0x5d43,	// (0x00059b70) pec_content_pane_g1_ParamLimits

0x5d43,	// (0x00059b70) pec_content_pane_g1

0x1596,	// (0x000553c3) pec_content_pane_t1_ParamLimits

0x1596,	// (0x000553c3) pec_content_pane_t1

0x15a8,	// (0x000553d5) pec_content_pane_t2_ParamLimits

0x15a8,	// (0x000553d5) pec_content_pane_t2

0x0001,

0xf46c,	// (0x00063299) pec_content_pane_t_ParamLimits

0xf46c,	// (0x00063299) pec_content_pane_t

0x5d4f,	// (0x00059b7c) list_single_graphic_pane_cp01_ParamLimits

0x5d4f,	// (0x00059b7c) list_single_graphic_pane_cp01

0xc423,	// (0x00060250) bg_popup_sub_pane_cp04

0x15ba,	// (0x000553e7) popup_mup_playback_window_g1

0x15c6,	// (0x000553f3) popup_mup_playback_window_t1

0x15db,	// (0x00055408) popup_mup_playback_window_t2

0x0001,

0xf471,	// (0x0006329e) popup_mup_playback_window_t

0x1612,	// (0x0005543f) main_image_pane_g1_ParamLimits

0x1612,	// (0x0005543f) main_image_pane_g1

0x1655,	// (0x00055482) scroll_pane_cp018_ParamLimits

0x1655,	// (0x00055482) scroll_pane_cp018

0x166d,	// (0x0005549a) scroll_pane_cp016_ParamLimits

0x166d,	// (0x0005549a) scroll_pane_cp016

0x5e1c,	// (0x00059c49) smil2_image_pane_ParamLimits

0x5e1c,	// (0x00059c49) smil2_image_pane

0x5e4c,	// (0x00059c79) smil2_root_pane_ParamLimits

0x5e4c,	// (0x00059c79) smil2_root_pane

0x5e84,	// (0x00059cb1) smil2_text_pane_ParamLimits

0x5e84,	// (0x00059cb1) smil2_text_pane

0xc1c8,	// (0x0005fff5) bg_list_pane_cp06

0x16a9,	// (0x000554d6) grid_radio_pane

0xc1c8,	// (0x0005fff5) bg_popup_window_pane_cp06

0x16b1,	// (0x000554de) main_fmradio_pane_t1

0x262c,	// (0x00056459) heading_pane_cp04

0x16bf,	// (0x000554ec) main_fmradio_pane_t2

0x2634,	// (0x00056461) popup_cale_lunar_info_window_g1

0x16cd,	// (0x000554fa) main_fmradio_pane_t3

0x263c,	// (0x00056469) popup_cale_lunar_info_window_g2

0x16db,	// (0x00055508) main_fmradio_pane_t4

0x0001,

0x16e9,	// (0x00055516) main_fmradio_pane_t5

0x0004,

0xf551,	// (0x0006337e) popup_cale_lunar_info_window_g

0xf486,	// (0x000632b3) main_fmradio_pane_t

0x16f7,	// (0x00055524) wait_bar_pane_cp03

0x16ff,	// (0x0005552c) cell_fmradio_pane_ParamLimits

0x16ff,	// (0x0005552c) cell_fmradio_pane

0x1566,	// (0x00055393) cell_fmradio_pane_g1_ParamLimits

0x1566,	// (0x00055393) cell_fmradio_pane_g1

0xc1c8,	// (0x0005fff5) grid_highlight_pane_cp011

0x1712,	// (0x0005553f) poc_content_pane_ParamLimits

0x1712,	// (0x0005553f) poc_content_pane

0x1724,	// (0x00055551) scroll_pane_cp019

0x5f04,	// (0x00059d31) popup_call_poc_act_window_ParamLimits

0x5f04,	// (0x00059d31) popup_call_poc_act_window

0x5f28,	// (0x00059d55) popup_call_poc_inact_window_ParamLimits

0x5f28,	// (0x00059d55) popup_call_poc_inact_window

0xf528,	// (0x00063355) bg_popup_call_poc_act_pane_g

0x25a4,	// (0x000563d1) bg_popup_call_poc_inact_pane_g1

0x25ac,	// (0x000563d9) bg_popup_call_poc_inact_pane_g2

0x172c,	// (0x00055559) popup_call_poc_act_window_g2

0x25b4,	// (0x000563e1) bg_popup_call_poc_inact_pane_g3

0x25bc,	// (0x000563e9) bg_popup_call_poc_inact_pane_g4

0x25c4,	// (0x000563f1) bg_popup_call_poc_inact_pane_g5

0x1734,	// (0x00055561) popup_call_poc_act_window_t1_ParamLimits

0x1734,	// (0x00055561) popup_call_poc_act_window_t1

0x175c,	// (0x00055589) popup_call_poc_act_window_t2_ParamLimits

0x175c,	// (0x00055589) popup_call_poc_act_window_t2

0x1784,	// (0x000555b1) popup_call_poc_act_window_t3_ParamLimits

0x1784,	// (0x000555b1) popup_call_poc_act_window_t3

0x17ac,	// (0x000555d9) popup_call_poc_act_window_t4_ParamLimits

0x17ac,	// (0x000555d9) popup_call_poc_act_window_t4

0x0003,

0xf491,	// (0x000632be) popup_call_poc_act_window_t_ParamLimits

0xf491,	// (0x000632be) popup_call_poc_act_window_t

0x25cc,	// (0x000563f9) bg_popup_call_poc_inact_pane_g6

0x25d4,	// (0x00056401) bg_popup_call_poc_inact_pane_g7

0x25dc,	// (0x00056409) bg_popup_call_poc_inact_pane_g8

0x17be,	// (0x000555eb) popup_call_poc_inact_window_g2

0x25e4,	// (0x00056411) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf515,	// (0x00063342) bg_popup_call_poc_inact_pane_g

0x17c6,	// (0x000555f3) popup_call_poc_inact_window_t1_ParamLimits

0x17c6,	// (0x000555f3) popup_call_poc_inact_window_t1

0x17db,	// (0x00055608) popup_call_poc_inact_window_t2_ParamLimits

0x17db,	// (0x00055608) popup_call_poc_inact_window_t2

0x17f0,	// (0x0005561d) popup_call_poc_inact_window_t3_ParamLimits

0x17f0,	// (0x0005561d) popup_call_poc_inact_window_t3

0x0002,

0xf49a,	// (0x000632c7) popup_call_poc_inact_window_t_ParamLimits

0xf49a,	// (0x000632c7) popup_call_poc_inact_window_t

0x26de,	// (0x0005650b) context_pane_ParamLimits

0x67b6,	// (0x0005a5e3) signal_pane_ParamLimits

0x0962,	// (0x0005478f) main_call2_pane

0xc65a,	// (0x00060487) popup_phob_thumbnail2_window_ParamLimits

0xc65a,	// (0x00060487) popup_phob_thumbnail2_window

0xc5f7,	// (0x00060424) aid_hotspot_pointer_arrow_pane

0xc5ff,	// (0x0006042c) aid_hotspot_pointer_hand_pane

0x6290,	// (0x0005a0bd) phob_pre_status_pane_g5

0xc445,	// (0x00060272) cams_zoom_pane_ParamLimits

0xc445,	// (0x00060272) image_vga_pane_ParamLimits

0x073e,	// (0x0005456b) main_camera_pane_g1_ParamLimits

0x073e,	// (0x0005456b) main_camera_pane_g2_ParamLimits

0x073e,	// (0x0005456b) main_camera_pane_g3_ParamLimits

0x073e,	// (0x0005456b) main_camera_pane_g4_ParamLimits

0x073e,	// (0x0005456b) main_camera_pane_g5_ParamLimits

0x073e,	// (0x0005456b) main_camera_pane_g6_ParamLimits

0x073e,	// (0x0005456b) main_camera_pane_g7_ParamLimits

0xf1c5,	// (0x00062ff2) main_camera_pane_g_ParamLimits

0x09b2,	// (0x000547df) main_camera_pane_t1_ParamLimits

0x09b2,	// (0x000547df) main_camera_pane_t2_ParamLimits

0xf1d6,	// (0x00063003) main_camera_pane_t_ParamLimits

0xc423,	// (0x00060250) bg_popup_preview_window_pane_cp01_ParamLimits

0xc423,	// (0x00060250) bg_popup_preview_window_pane_cp01

0x1805,	// (0x00055632) popup_phob_thumbnail2_window_g1_ParamLimits

0x1805,	// (0x00055632) popup_phob_thumbnail2_window_g1

0xc1c8,	// (0x0005fff5) call2_cli_visual_pane

0x5f5c,	// (0x00059d89) popup_call2_audio_conf_window_ParamLimits

0x5f5c,	// (0x00059d89) popup_call2_audio_conf_window

0x5f7c,	// (0x00059da9) popup_call2_audio_first_window_ParamLimits

0x5f7c,	// (0x00059da9) popup_call2_audio_first_window

0x6012,	// (0x00059e3f) popup_call2_audio_in_window_ParamLimits

0x6012,	// (0x00059e3f) popup_call2_audio_in_window

0x605a,	// (0x00059e87) popup_call2_audio_out_window_ParamLimits

0x605a,	// (0x00059e87) popup_call2_audio_out_window

0x60c4,	// (0x00059ef1) popup_call2_audio_second_window_ParamLimits

0x60c4,	// (0x00059ef1) popup_call2_audio_second_window

0x612a,	// (0x00059f57) popup_call2_audio_wait_window_ParamLimits

0x612a,	// (0x00059f57) popup_call2_audio_wait_window

0xc1c8,	// (0x0005fff5) bg_popup_call2_act_pane_cp03

0xc405,	// (0x00060232) list_conf_pane_cp

0x1811,	// (0x0005563e) popup_call2_audio_conf_window_t1

0x10c1,	// (0x00054eee) list_single_graphic_popup_conf2_pane_ParamLimits

0x10c1,	// (0x00054eee) list_single_graphic_popup_conf2_pane

0x10d4,	// (0x00054f01) list_highlight_pane_cp04

0x181f,	// (0x0005564c) list_single_graphic_popup_conf2_pane_g1

0x10e5,	// (0x00054f12) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf4a1,	// (0x000632ce) list_single_graphic_popup_conf2_pane_g

0x1829,	// (0x00055656) list_single_graphic_popup_conf2_pane_t1

0x1837,	// (0x00055664) bg_popup_call2_act_pane_cp01_ParamLimits

0x1837,	// (0x00055664) bg_popup_call2_act_pane_cp01

0x18c1,	// (0x000556ee) call_type_pane_cp05_ParamLimits

0x18c1,	// (0x000556ee) call_type_pane_cp05

0x1915,	// (0x00055742) popup_call2_audio_second_window_g1_ParamLimits

0x1915,	// (0x00055742) popup_call2_audio_second_window_g1

0x1969,	// (0x00055796) popup_call2_audio_second_window_g2_ParamLimits

0x1969,	// (0x00055796) popup_call2_audio_second_window_g2

0x0002,

0xf4a6,	// (0x000632d3) popup_call2_audio_second_window_g_ParamLimits

0xf4a6,	// (0x000632d3) popup_call2_audio_second_window_g

0x19ce,	// (0x000557fb) popup_call2_audio_second_window_t1_ParamLimits

0x19ce,	// (0x000557fb) popup_call2_audio_second_window_t1

0x1a89,	// (0x000558b6) popup_call2_audio_second_window_t2_ParamLimits

0x1a89,	// (0x000558b6) popup_call2_audio_second_window_t2

0x1adc,	// (0x00055909) popup_call2_audio_second_window_t3_ParamLimits

0x1adc,	// (0x00055909) popup_call2_audio_second_window_t3

0x0003,

0xf4ad,	// (0x000632da) popup_call2_audio_second_window_t_ParamLimits

0xf4ad,	// (0x000632da) popup_call2_audio_second_window_t

0xc1c8,	// (0x0005fff5) bg_popup_call2_in_pane_cp02

0xc1d2,	// (0x0005ffff) call_type_pane_cp04

0x6164,	// (0x00059f91) popup_call2_audio_wait_window_g1

0x616c,	// (0x00059f99) popup_call2_audio_wait_window_g2

0x0001,

0xf4b6,	// (0x000632e3) popup_call2_audio_wait_window_g

0xc1ea,	// (0x00060017) popup_call2_audio_wait_window_t3

0x1bcf,	// (0x000559fc) bg_popup_call2_act_pane_ParamLimits

0x1bcf,	// (0x000559fc) bg_popup_call2_act_pane

0x1c8f,	// (0x00055abc) call_type_pane_cp03_ParamLimits

0x1c8f,	// (0x00055abc) call_type_pane_cp03

0x1cf3,	// (0x00055b20) popup_call2_audio_first_window_g1_ParamLimits

0x1cf3,	// (0x00055b20) popup_call2_audio_first_window_g1

0x1d63,	// (0x00055b90) popup_call2_audio_first_window_g2_ParamLimits

0x1d63,	// (0x00055b90) popup_call2_audio_first_window_g2

0x0ff9,	// (0x00054e26) popup_call2_audio_first_window_g3_ParamLimits

0x0ff9,	// (0x00054e26) popup_call2_audio_first_window_g3

0x0004,

0xf4bb,	// (0x000632e8) popup_call2_audio_first_window_g_ParamLimits

0xf4bb,	// (0x000632e8) popup_call2_audio_first_window_g

0x1e41,	// (0x00055c6e) popup_call2_audio_first_window_t1_ParamLimits

0x1e41,	// (0x00055c6e) popup_call2_audio_first_window_t1

0x1f44,	// (0x00055d71) popup_call2_audio_first_window_t4_ParamLimits

0x1f44,	// (0x00055d71) popup_call2_audio_first_window_t4

0x2027,	// (0x00055e54) popup_call2_audio_first_window_t5_ParamLimits

0x2027,	// (0x00055e54) popup_call2_audio_first_window_t5

0x0003,

0xf4c6,	// (0x000632f3) popup_call2_audio_first_window_t_ParamLimits

0xf4c6,	// (0x000632f3) popup_call2_audio_first_window_t

0xc41b,	// (0x00060248) bg_popup_call2_act_pane_g1

0x2644,	// (0x00056471) popup_cale_lunar_info_window_t1

0x2652,	// (0x0005647f) popup_cale_lunar_info_window_t2

0x2660,	// (0x0005648d) popup_cale_lunar_info_window_t3

0xc1c8,	// (0x0005fff5) bg_popup_call2_bubble_pane

0x2128,	// (0x00055f55) bg_popup_call2_in_pane_cp01_ParamLimits

0x2128,	// (0x00055f55) bg_popup_call2_in_pane_cp01

0xbea4,	// (0x0005fcd1) call_type_pane_cp02

0x6174,	// (0x00059fa1) popup_call2_audio_out_window_g1_ParamLimits

0x6174,	// (0x00059fa1) popup_call2_audio_out_window_g1

0x2170,	// (0x00055f9d) popup_call2_audio_out_window_g2_ParamLimits

0x2170,	// (0x00055f9d) popup_call2_audio_out_window_g2

0x61a0,	// (0x00059fcd) popup_call2_audio_out_window_g3_ParamLimits

0x61a0,	// (0x00059fcd) popup_call2_audio_out_window_g3

0x0003,

0xf4cf,	// (0x000632fc) popup_call2_audio_out_window_g_ParamLimits

0xf4cf,	// (0x000632fc) popup_call2_audio_out_window_g

0x21a7,	// (0x00055fd4) popup_call2_audio_out_window_t1_ParamLimits

0x21a7,	// (0x00055fd4) popup_call2_audio_out_window_t1

0x2206,	// (0x00056033) popup_call2_audio_out_window_t2_ParamLimits

0x2206,	// (0x00056033) popup_call2_audio_out_window_t2

0x225a,	// (0x00056087) popup_call2_audio_out_window_t3_ParamLimits

0x225a,	// (0x00056087) popup_call2_audio_out_window_t3

0x2270,	// (0x0005609d) popup_call2_audio_out_window_t4_ParamLimits

0x2270,	// (0x0005609d) popup_call2_audio_out_window_t4

0x2286,	// (0x000560b3) popup_call2_audio_out_window_t5_ParamLimits

0x2286,	// (0x000560b3) popup_call2_audio_out_window_t5

0x0005,

0xf4d8,	// (0x00063305) popup_call2_audio_out_window_t_ParamLimits

0xf4d8,	// (0x00063305) popup_call2_audio_out_window_t

0x22ea,	// (0x00056117) bg_popup_call2_in_pane_ParamLimits

0x22ea,	// (0x00056117) bg_popup_call2_in_pane

0x2346,	// (0x00056173) popup_call2_audio_in_window_g1_ParamLimits

0x2346,	// (0x00056173) popup_call2_audio_in_window_g1

0x237e,	// (0x000561ab) popup_call2_audio_in_window_g2_ParamLimits

0x237e,	// (0x000561ab) popup_call2_audio_in_window_g2

0x23b6,	// (0x000561e3) popup_call2_audio_in_window_g3_ParamLimits

0x23b6,	// (0x000561e3) popup_call2_audio_in_window_g3

0x0003,

0xf4e5,	// (0x00063312) popup_call2_audio_in_window_g_ParamLimits

0xf4e5,	// (0x00063312) popup_call2_audio_in_window_g

0x240e,	// (0x0005623b) popup_call2_audio_in_window_t1_ParamLimits

0x240e,	// (0x0005623b) popup_call2_audio_in_window_t1

0x248e,	// (0x000562bb) popup_call2_audio_in_window_t2_ParamLimits

0x248e,	// (0x000562bb) popup_call2_audio_in_window_t2

0x250e,	// (0x0005633b) popup_call2_audio_in_window_t3_ParamLimits

0x250e,	// (0x0005633b) popup_call2_audio_in_window_t3

0x2528,	// (0x00056355) popup_call2_audio_in_window_t4_ParamLimits

0x2528,	// (0x00056355) popup_call2_audio_in_window_t4

0x253a,	// (0x00056367) popup_call2_audio_in_window_t5_ParamLimits

0x253a,	// (0x00056367) popup_call2_audio_in_window_t5

0x254f,	// (0x0005637c) popup_call2_audio_in_window_t6_ParamLimits

0x254f,	// (0x0005637c) popup_call2_audio_in_window_t6

0x0005,

0xf4ee,	// (0x0006331b) popup_call2_audio_in_window_t_ParamLimits

0xf4ee,	// (0x0006331b) popup_call2_audio_in_window_t

0xc41b,	// (0x00060248) bg_popup_call2_in_pane_g1

0x266e,	// (0x0005649b) popup_cale_lunar_info_window_t4

0x0003,

0xf556,	// (0x00063383) popup_cale_lunar_info_window_t

0xc423,	// (0x00060250) bg_popup_call2_rect_pane_ParamLimits

0xc423,	// (0x00060250) bg_popup_call2_rect_pane

0xc1c8,	// (0x0005fff5) call2_cli_visual_graphic_pane

0xc1c8,	// (0x0005fff5) call2_cli_visual_text_pane

0xc681,	// (0x000604ae) smil_status_volume_pane_g3

0x0002,

0xc43b,	// (0x00060268) call2_cli_visual_graphic_pane_g1

0xc43b,	// (0x00060268) call2_cli_visual_graphic_pane_g2

0xc43b,	// (0x00060268) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4fb,	// (0x00063328) call2_cli_visual_graphic_pane_g

0x2564,	// (0x00056391) bg_popup_call2_rect_pane_g1

0x0887,	// (0x000546b4) bg_popup_call2_rect_pane_g2

0x256c,	// (0x00056399) bg_popup_call2_rect_pane_g3

0x2574,	// (0x000563a1) bg_popup_call2_rect_pane_g4

0x257c,	// (0x000563a9) bg_popup_call2_rect_pane_g5

0x2584,	// (0x000563b1) bg_popup_call2_rect_pane_g6

0x258c,	// (0x000563b9) bg_popup_call2_rect_pane_g7

0x2594,	// (0x000563c1) bg_popup_call2_rect_pane_g8

0x259c,	// (0x000563c9) bg_popup_call2_rect_pane_g9

0x0008,

0xf502,	// (0x0006332f) bg_popup_call2_rect_pane_g

0x25a4,	// (0x000563d1) bg_popup_call2_bubble_pane_g1

0x25ac,	// (0x000563d9) bg_popup_call2_bubble_pane_g2

0x25b4,	// (0x000563e1) bg_popup_call2_bubble_pane_g3

0x25bc,	// (0x000563e9) bg_popup_call2_bubble_pane_g4

0x25c4,	// (0x000563f1) bg_popup_call2_bubble_pane_g5

0x25cc,	// (0x000563f9) bg_popup_call2_bubble_pane_g6

0x25d4,	// (0x00056401) bg_popup_call2_bubble_pane_g7

0x25dc,	// (0x00056409) bg_popup_call2_bubble_pane_g8

0x25e4,	// (0x00056411) bg_popup_call2_bubble_pane_g9

0x0008,

0xf515,	// (0x00063342) bg_popup_call2_bubble_pane_g

0x3da3,	// (0x00057bd0) aid_cale_week_size_cell_pane

0x4349,	// (0x00058176) aid_cams_cif_uncrop_pane_ParamLimits

0x4349,	// (0x00058176) aid_cams_cif_uncrop_pane

0x449f,	// (0x000582cc) aid_cams_size_cell_ParamLimits

0x449f,	// (0x000582cc) aid_cams_size_cell

0x44b3,	// (0x000582e0) grid_cams_pane_ParamLimits

0x44cd,	// (0x000582fa) linegrid_cams_pane_ParamLimits

0x45b4,	// (0x000583e1) call_video_pane_t1

0x45d2,	// (0x000583ff) call_video_pane_t2

0x0001,

0xf222,	// (0x0006304f) call_video_pane_t

0x4a00,	// (0x0005882d) aid_cale_month_size_cell_pane_ParamLimits

0x4a00,	// (0x0005882d) aid_cale_month_size_cell_pane

0xf59a,	// (0x000633c7) smil_status_volume_pane_g

0xc68e,	// (0x000604bb) volume_smil_pane_ParamLimits

0xbd38,	// (0x0005fb65) aid_popup2_width_pane

0x3d1a,	// (0x00057b47) cell_qdial_pane_g4_ParamLimits

0x3d1a,	// (0x00057b47) cell_qdial_pane_g4

0x5764,	// (0x00059591) aid_blid_cardinal_pane_ParamLimits

0x5770,	// (0x0005959d) aid_blid_destination_pane_ParamLimits

0x5770,	// (0x0005959d) aid_blid_destination_pane

0xc423,	// (0x00060250) bg_popup_call_poc_act_pane_ParamLimits

0xc423,	// (0x00060250) bg_popup_call_poc_act_pane

0xc423,	// (0x00060250) bg_popup_call_poc_inact_pane_ParamLimits

0xc423,	// (0x00060250) bg_popup_call_poc_inact_pane

0x25ec,	// (0x00056419) bg_popup_call_poc_act_pane_g1

0x25f4,	// (0x00056421) bg_popup_call_poc_act_pane_g2

0x25fc,	// (0x00056429) bg_popup_call_poc_act_pane_g3

0x25bc,	// (0x000563e9) bg_popup_call_poc_act_pane_g4

0x25c4,	// (0x000563f1) bg_popup_call_poc_act_pane_g5

0x2604,	// (0x00056431) bg_popup_call_poc_act_pane_g6

0x25d4,	// (0x00056401) bg_popup_call_poc_act_pane_g7

0x260c,	// (0x00056439) bg_popup_call_poc_act_pane_g8

0xc1c8,	// (0x0005fff5) main_usb_pane

0xc635,	// (0x00060462) popup_cale_lunar_info_window

0x48ac,	// (0x000586d9) im_reading_pane_t1_ParamLimits

0x0a65,	// (0x00054892) list_im_pane_ParamLimits

0x0a76,	// (0x000548a3) scroll_pane_cp07_ParamLimits

0xc1c8,	// (0x0005fff5) grid_highlight_pane_cp012

0xc423,	// (0x00060250) mup_scale_pane_ParamLimits

0x1566,	// (0x00055393) main_usb_pane_g1_ParamLimits

0x1566,	// (0x00055393) main_usb_pane_g1

0x61ee,	// (0x0005a01b) main_usb_pane_g2_ParamLimits

0x61ee,	// (0x0005a01b) main_usb_pane_g2

0x0001,

0xf53f,	// (0x0006336c) main_usb_pane_g_ParamLimits

0xf53f,	// (0x0006336c) main_usb_pane_g

0x6204,	// (0x0005a031) main_usb_pane_t1_ParamLimits

0x6204,	// (0x0005a031) main_usb_pane_t1

0x6216,	// (0x0005a043) main_usb_pane_t2_ParamLimits

0x6216,	// (0x0005a043) main_usb_pane_t2

0x6228,	// (0x0005a055) main_usb_pane_t3_ParamLimits

0x6228,	// (0x0005a055) main_usb_pane_t3

0x623a,	// (0x0005a067) main_usb_pane_t4_ParamLimits

0x623a,	// (0x0005a067) main_usb_pane_t4

0x624c,	// (0x0005a079) main_usb_pane_t5_ParamLimits

0x624c,	// (0x0005a079) main_usb_pane_t5

0x625e,	// (0x0005a08b) main_usb_pane_t6_ParamLimits

0x625e,	// (0x0005a08b) main_usb_pane_t6

0x0005,

0xf544,	// (0x00063371) main_usb_pane_t_ParamLimits

0x5713,	// (0x00059540) aid_text_placing

0x571c,	// (0x00059549) main_location2_pane_t1_ParamLimits

0x572e,	// (0x0005955b) main_location2_pane_t2_ParamLimits

0x5740,	// (0x0005956d) main_location2_pane_t3_ParamLimits

0x5752,	// (0x0005957f) main_location2_pane_t4_ParamLimits

0x5752,	// (0x0005957f) main_location2_pane_t4

0xf35e,	// (0x0006318b) main_location2_pane_t_ParamLimits

0xc45f,	// (0x0006028c) find_pinb_pane_g2_ParamLimits

0xc45f,	// (0x0006028c) find_pinb_pane_g2

0x0001,

0xf0da,	// (0x00062f07) find_pinb_pane_g_ParamLimits

0xf0da,	// (0x00062f07) find_pinb_pane_g

0xc46b,	// (0x00060298) find_pinb_pane_t1_ParamLimits

0xc47d,	// (0x000602aa) find_pinb_pane_t2_ParamLimits

0xf0df,	// (0x00062f0c) find_pinb_pane_t_ParamLimits

0xc1c8,	// (0x0005fff5) main_call3_pane

0x4eeb,	// (0x00058d18) cale_month_day_heading_pane_t1_ParamLimits

0x4f71,	// (0x00058d9e) cale_month_day_heading_pane_t2_ParamLimits

0x4fea,	// (0x00058e17) cale_month_day_heading_pane_t3_ParamLimits

0x5063,	// (0x00058e90) cale_month_day_heading_pane_t4_ParamLimits

0x50e4,	// (0x00058f11) cale_month_day_heading_pane_t5_ParamLimits

0x516d,	// (0x00058f9a) cale_month_day_heading_pane_t6_ParamLimits

0x51f6,	// (0x00059023) cale_month_day_heading_pane_t7_ParamLimits

0xf25a,	// (0x00063087) cale_month_day_heading_pane_t_ParamLimits

0x0cc0,	// (0x00054aed) smil_status_volume_pane

0x5c81,	// (0x00059aae) postcard_address_pane_ParamLimits

0x5c81,	// (0x00059aae) postcard_address_pane

0x5c93,	// (0x00059ac0) postcard_message_pane_ParamLimits

0x5c93,	// (0x00059ac0) postcard_message_pane

0x61cc,	// (0x00059ff9) call2_cli_visual_pane_t1_ParamLimits

0x61cc,	// (0x00059ff9) call2_cli_visual_pane_t1

0x2791,	// (0x000565be) postcard_message_pane_t1_ParamLimits

0x2791,	// (0x000565be) postcard_message_pane_t1

0x2779,	// (0x000565a6) postcard_address_pane_t1_ParamLimits

0x2779,	// (0x000565a6) postcard_address_pane_t1

0x6968,	// (0x0005a795) popup_call3_audio_in_window_ParamLimits

0x6968,	// (0x0005a795) popup_call3_audio_in_window

0x67f3,	// (0x0005a620) bg_popup_call3_in_pane_ParamLimits

0x67f3,	// (0x0005a620) bg_popup_call3_in_pane

0x6869,	// (0x0005a696) popup_call3_audio_in_window_g1_ParamLimits

0x6869,	// (0x0005a696) popup_call3_audio_in_window_g1

0x6889,	// (0x0005a6b6) popup_call3_audio_in_window_g2_ParamLimits

0x6889,	// (0x0005a6b6) popup_call3_audio_in_window_g2

0x68a9,	// (0x0005a6d6) popup_call3_audio_in_window_g3_ParamLimits

0x68a9,	// (0x0005a6d6) popup_call3_audio_in_window_g3

0x0003,

0xf5a1,	// (0x000633ce) popup_call3_audio_in_window_g_ParamLimits

0xf5a1,	// (0x000633ce) popup_call3_audio_in_window_g

0x68da,	// (0x0005a707) popup_call3_audio_in_window_t1_ParamLimits

0x68da,	// (0x0005a707) popup_call3_audio_in_window_t1

0x6918,	// (0x0005a745) popup_call3_audio_in_window_t2_ParamLimits

0x6918,	// (0x0005a745) popup_call3_audio_in_window_t2

0x6956,	// (0x0005a783) popup_call3_audio_in_window_t3_ParamLimits

0x6956,	// (0x0005a783) popup_call3_audio_in_window_t3

0x0002,

0xf5aa,	// (0x000633d7) popup_call3_audio_in_window_t_ParamLimits

0xf5aa,	// (0x000633d7) popup_call3_audio_in_window_t

0x0962,	// (0x0005478f) bg_popup_call3_rect_pane

0x2564,	// (0x00056391) bg_popup_call3_rect_pane_g1

0x0887,	// (0x000546b4) bg_popup_call3_rect_pane_g2

0x256c,	// (0x00056399) bg_popup_call3_rect_pane_g3

0x2574,	// (0x000563a1) bg_popup_call3_rect_pane_g4

0x257c,	// (0x000563a9) bg_popup_call3_rect_pane_g5

0x2584,	// (0x000563b1) bg_popup_call3_rect_pane_g6

0x258c,	// (0x000563b9) bg_popup_call3_rect_pane_g7

0xbd26,	// (0x0005fb53) mup_visualizer_osc_pane

0xbd26,	// (0x0005fb53) mup_visualizer_spec_pane

0x6823,	// (0x0005a650) call3_video_qcif_pane_ParamLimits

0x6823,	// (0x0005a650) call3_video_qcif_pane

0x6836,	// (0x0005a663) call3_video_qcif_uncrop_pane_ParamLimits

0x6836,	// (0x0005a663) call3_video_qcif_uncrop_pane

0x6844,	// (0x0005a671) call3_video_subqcif_pane_ParamLimits

0x6844,	// (0x0005a671) call3_video_subqcif_pane

0x6858,	// (0x0005a685) call3_video_subqcif_uncrop_pane_ParamLimits

0x6858,	// (0x0005a685) call3_video_subqcif_uncrop_pane

0x68c9,	// (0x0005a6f6) popup_call3_audio_in_window_g4_ParamLimits

0x68c9,	// (0x0005a6f6) popup_call3_audio_in_window_g4

0xbd26,	// (0x0005fb53) mup_spec_half_pane

0xbd26,	// (0x0005fb53) mup_spec_half_pane_cp

0xbd26,	// (0x0005fb53) mup_osc_middle_pane

0x0998,	// (0x000547c5) mup_visualizer_osc_pane_g1

0x272c,	// (0x00056559) mup_spec_bar_pane_ParamLimits

0x272c,	// (0x00056559) mup_spec_bar_pane

0x0998,	// (0x000547c5) mup_spec_bar_pane_g1

0x0998,	// (0x000547c5) mup_spec_bar_pane_g2

0x0001,

0xf3d8,	// (0x00063205) mup_spec_bar_pane_g

0x3da3,	// (0x00057bd0) aid_cale_week_size_cell_pane_ParamLimits

0x3dbd,	// (0x00057bea) bg_cale_heading_pane_ParamLimits

0x08c4,	// (0x000546f1) bg_cale_pane_cp01_ParamLimits

0x3dd5,	// (0x00057c02) cale_week_corner_pane_ParamLimits

0x3df4,	// (0x00057c21) cale_week_day_heading_pane_ParamLimits

0x3e11,	// (0x00057c3e) cale_week_scroll_pane_g1_ParamLimits

0x3e24,	// (0x00057c51) cale_week_scroll_pane_g2_ParamLimits

0x3e3c,	// (0x00057c69) cale_week_scroll_pane_g3_ParamLimits

0x3e54,	// (0x00057c81) cale_week_scroll_pane_g4_ParamLimits

0x3e6c,	// (0x00057c99) cale_week_scroll_pane_g5_ParamLimits

0x3e8c,	// (0x00057cb9) cale_week_scroll_pane_g6_ParamLimits

0x3eac,	// (0x00057cd9) cale_week_scroll_pane_g7_ParamLimits

0x3ecc,	// (0x00057cf9) cale_week_scroll_pane_g8_ParamLimits

0x3ef0,	// (0x00057d1d) cale_week_scroll_pane_g9_ParamLimits

0x3f08,	// (0x00057d35) cale_week_scroll_pane_g10_ParamLimits

0x3f20,	// (0x00057d4d) cale_week_scroll_pane_g11_ParamLimits

0x3f38,	// (0x00057d65) cale_week_scroll_pane_g12_ParamLimits

0x3f50,	// (0x00057d7d) cale_week_scroll_pane_g13_ParamLimits

0x3f50,	// (0x00057d7d) cale_week_scroll_pane_g14_ParamLimits

0x3f50,	// (0x00057d7d) cale_week_scroll_pane_g15_ParamLimits

0xf16b,	// (0x00062f98) cale_week_scroll_pane_g_ParamLimits

0x3f8c,	// (0x00057db9) cale_week_time_pane_ParamLimits

0x3fb0,	// (0x00057ddd) grid_cale_week_pane_ParamLimits

0x08e1,	// (0x0005470e) listscroll_cale_week_pane_t1

0x08f3,	// (0x00054720) scroll_pane_cp08_ParamLimits

0x4a60,	// (0x0005888d) cale_month_corner_pane_ParamLimits

0x0c96,	// (0x00054ac3) cale_month_pane_t1

0x4e7e,	// (0x00058cab) cale_month_week_pane_ParamLimits

0x5593,	// (0x000593c0) popup_call_status_window_g1_ParamLimits

0x55a7,	// (0x000593d4) popup_call_status_window_g2_ParamLimits

0x55bb,	// (0x000593e8) popup_call_status_window_g3_ParamLimits

0xf2e5,	// (0x00063112) popup_call_status_window_g_ParamLimits

0x1060,	// (0x00054e8d) aid_call2_pane

0x5aac,	// (0x000598d9) msg_header_pane_g1

0x5c81,	// (0x00059aae) postcard_address2_pane_ParamLimits

0x5c81,	// (0x00059aae) postcard_address2_pane

0x5c93,	// (0x00059ac0) postcard_message2_pane_ParamLimits

0x5c93,	// (0x00059ac0) postcard_message2_pane

0x67c4,	// (0x0005a5f1) message2_row_pane_ParamLimits

0x67c4,	// (0x0005a5f1) message2_row_pane

0x67e0,	// (0x0005a60d) address2_row_pane_ParamLimits

0x67e0,	// (0x0005a60d) address2_row_pane

0x26f9,	// (0x00056526) postcard_message2_row_pane_g1

0x2701,	// (0x0005652e) postcard_message2_row_pane_t1

0x26f9,	// (0x00056526) address2_row_pane_g1

0x2701,	// (0x0005652e) address2_row_pane_t1

0x42e0,	// (0x0005810d) aid_size_cell_vorec

0xc1c8,	// (0x0005fff5) main_rss_pane

0x270f,	// (0x0005653c) rss_list_single_pane_ParamLimits

0x270f,	// (0x0005653c) rss_list_single_pane

0x271d,	// (0x0005654a) rss_list_single_pane_t1

0x271d,	// (0x0005654a) rss_list_single_pane_t2

0x0001,

0xf595,	// (0x000633c2) rss_list_single_pane_t

0xc1c8,	// (0x0005fff5) main_camera2_pane

0xc1c8,	// (0x0005fff5) main_video2_pane

0xc6a3,	// (0x000604d0) cams_zoom_pane_cp2_ParamLimits

0xc6a3,	// (0x000604d0) cams_zoom_pane_cp2

0xc6a3,	// (0x000604d0) image2_vga_pane_ParamLimits

0xc6a3,	// (0x000604d0) image2_vga_pane

0xee2b,	// (0x00062c58) main_camera2_pane_g1_ParamLimits

0xee2b,	// (0x00062c58) main_camera2_pane_g1

0xee2b,	// (0x00062c58) main_camera2_pane_g2_ParamLimits

0xee2b,	// (0x00062c58) main_camera2_pane_g2

0xee2b,	// (0x00062c58) main_camera2_pane_g3_ParamLimits

0xee2b,	// (0x00062c58) main_camera2_pane_g3

0xee2b,	// (0x00062c58) main_camera2_pane_g4_ParamLimits

0xee2b,	// (0x00062c58) main_camera2_pane_g4

0xee2b,	// (0x00062c58) main_camera2_pane_g5_ParamLimits

0xee2b,	// (0x00062c58) main_camera2_pane_g5

0xee2b,	// (0x00062c58) main_camera2_pane_g6_ParamLimits

0xee2b,	// (0x00062c58) main_camera2_pane_g6

0xee2b,	// (0x00062c58) main_camera2_pane_g7_ParamLimits

0xee2b,	// (0x00062c58) main_camera2_pane_g7

0xee2b,	// (0x00062c58) main_camera2_pane_g8_ParamLimits

0xee2b,	// (0x00062c58) main_camera2_pane_g8

0x0008,

0xf5b1,	// (0x000633de) main_camera2_pane_g_ParamLimits

0xf5b1,	// (0x000633de) main_camera2_pane_g

0x698a,	// (0x0005a7b7) main_camera2_pane_t1_ParamLimits

0x698a,	// (0x0005a7b7) main_camera2_pane_t1

0x698a,	// (0x0005a7b7) main_camera2_pane_t2_ParamLimits

0x698a,	// (0x0005a7b7) main_camera2_pane_t2

0x698a,	// (0x0005a7b7) main_camera2_pane_t3_ParamLimits

0x698a,	// (0x0005a7b7) main_camera2_pane_t3

0x698a,	// (0x0005a7b7) main_camera2_pane_t4_ParamLimits

0x698a,	// (0x0005a7b7) main_camera2_pane_t4

0x0006,

0xf5c4,	// (0x000633f1) main_camera2_pane_t_ParamLimits

0xf5c4,	// (0x000633f1) main_camera2_pane_t

0xee39,	// (0x00062c66) cams_zoom_pane_cp4_ParamLimits

0xee39,	// (0x00062c66) cams_zoom_pane_cp4

0x699e,	// (0x0005a7cb) image2_cif_pane_ParamLimits

0x699e,	// (0x0005a7cb) image2_cif_pane

0xbd9d,	// (0x0005fbca) image2_subqcif_pane_ParamLimits

0xbd9d,	// (0x0005fbca) image2_subqcif_pane

0x69ac,	// (0x0005a7d9) main_video2_pane_g1_ParamLimits

0x69ac,	// (0x0005a7d9) main_video2_pane_g1

0x69ac,	// (0x0005a7d9) main_video2_pane_g2_ParamLimits

0x69ac,	// (0x0005a7d9) main_video2_pane_g2

0x69ac,	// (0x0005a7d9) main_video2_pane_g3_ParamLimits

0x69ac,	// (0x0005a7d9) main_video2_pane_g3

0x69ac,	// (0x0005a7d9) main_video2_pane_g4_ParamLimits

0x69ac,	// (0x0005a7d9) main_video2_pane_g4

0x69ac,	// (0x0005a7d9) main_video2_pane_g5_ParamLimits

0x69ac,	// (0x0005a7d9) main_video2_pane_g5

0x69ac,	// (0x0005a7d9) main_video2_pane_g6_ParamLimits

0x69ac,	// (0x0005a7d9) main_video2_pane_g6

0x0005,

0xf5d3,	// (0x00063400) main_video2_pane_g_ParamLimits

0xf5d3,	// (0x00063400) main_video2_pane_g

0x69ba,	// (0x0005a7e7) main_video2_pane_t1_ParamLimits

0x69ba,	// (0x0005a7e7) main_video2_pane_t1

0x69ba,	// (0x0005a7e7) main_video2_pane_t2_ParamLimits

0x69ba,	// (0x0005a7e7) main_video2_pane_t2

0x69ba,	// (0x0005a7e7) main_video2_pane_t3_ParamLimits

0x69ba,	// (0x0005a7e7) main_video2_pane_t3

0x0002,

0xf5e0,	// (0x0006340d) main_video2_pane_t_ParamLimits

0xf5e0,	// (0x0006340d) main_video2_pane_t

0x62f2,	// (0x0005a11f) call_muted_g2

0x0001,

0xf587,	// (0x000633b4) call_muted_g

0xc1c8,	// (0x0005fff5) main_mup2_pane

0x2857,	// (0x00056684) main_mup2_pane_g1_ParamLimits

0x2857,	// (0x00056684) main_mup2_pane_g1

0x2857,	// (0x00056684) main_mup2_pane_g2_ParamLimits

0x2857,	// (0x00056684) main_mup2_pane_g2

0xc713,	// (0x00060540) main_mup_pane_g13_cp1

0xbdab,	// (0x0005fbd8) mup_volume_pane_cp1

0x2857,	// (0x00056684) main_mup2_pane_g4_ParamLimits

0x2857,	// (0x00056684) main_mup2_pane_g4

0x2857,	// (0x00056684) main_mup2_pane_g5_ParamLimits

0x2857,	// (0x00056684) main_mup2_pane_g5

0x2857,	// (0x00056684) main_mup2_pane_g6_ParamLimits

0x2857,	// (0x00056684) main_mup2_pane_g6

0x2857,	// (0x00056684) main_mup2_pane_g7_ParamLimits

0x2857,	// (0x00056684) main_mup2_pane_g7

0x0006,

0xf5e7,	// (0x00063414) main_mup2_pane_g_ParamLimits

0xf5e7,	// (0x00063414) main_mup2_pane_g

0x2843,	// (0x00056670) main_mup2_pane_t1_ParamLimits

0x2843,	// (0x00056670) main_mup2_pane_t1

0x2843,	// (0x00056670) main_mup2_pane_t2_ParamLimits

0x2843,	// (0x00056670) main_mup2_pane_t2

0x2843,	// (0x00056670) main_mup2_pane_t3_ParamLimits

0x2843,	// (0x00056670) main_mup2_pane_t3

0x2843,	// (0x00056670) main_mup2_pane_t4_ParamLimits

0x2843,	// (0x00056670) main_mup2_pane_t4

0x2843,	// (0x00056670) main_mup2_pane_t5_ParamLimits

0x2843,	// (0x00056670) main_mup2_pane_t5

0x2843,	// (0x00056670) main_mup2_pane_t6_ParamLimits

0x2843,	// (0x00056670) main_mup2_pane_t6

0x0005,

0xf5f6,	// (0x00063423) main_mup2_pane_t_ParamLimits

0xf5f6,	// (0x00063423) main_mup2_pane_t

0x26d0,	// (0x000564fd) mup2_visualizer_pane_ParamLimits

0x26d0,	// (0x000564fd) mup2_visualizer_pane

0x26d0,	// (0x000564fd) mup_progress_pane_cp_ParamLimits

0x26d0,	// (0x000564fd) mup_progress_pane_cp

0xc6fd,	// (0x0006052a) mup_volume_pane_cp_ParamLimits

0xc6fd,	// (0x0006052a) mup_volume_pane_cp

0x073e,	// (0x0005456b) mup2_visualizer_pane_g1_ParamLimits

0x073e,	// (0x0005456b) mup2_visualizer_pane_g1

0x074c,	// (0x00054579) mup2_visualizer_pane_g2_ParamLimits

0x074c,	// (0x00054579) mup2_visualizer_pane_g2

0x074c,	// (0x00054579) mup2_visualizer_pane_g3_ParamLimits

0x074c,	// (0x00054579) mup2_visualizer_pane_g3

0x0002,

0xf0e4,	// (0x00062f11) mup2_visualizer_pane_g_ParamLimits

0xf0e4,	// (0x00062f11) mup2_visualizer_pane_g

0x16a1,	// (0x000554ce) aid_size_cell_fmradio

0x64a4,	// (0x0005a2d1) aid_height_parent_landcape

0x0af4,	// (0x00054921) wml_content_pane_cp

0x0afc,	// (0x00054929) wml_tabs_pane

0x0b05,	// (0x00054932) popup_wml_miniature_window

0x0b0d,	// (0x0005493a) scroll_pane_cp021

0x0b21,	// (0x0005494e) wml_content_pane_comp8

0xc1c8,	// (0x0005fff5) bg_popup_sub_pane_cp05

0x27c3,	// (0x000565f0) popup_wml_miniature_window_g1

0x27cb,	// (0x000565f8) wml_miniature_view_pane

0x69ce,	// (0x0005a7fb) aid_size_wml_view

0x69d6,	// (0x0005a803) wml_miniature_view_pane_g1

0x69df,	// (0x0005a80c) wml_miniature_view_pane_g2

0x69e8,	// (0x0005a815) wml_miniature_view_pane_g3

0x69f0,	// (0x0005a81d) wml_miniature_view_pane_g4

0x69f8,	// (0x0005a825) wml_miniature_view_pane_g5

0x6a00,	// (0x0005a82d) wml_miniature_view_pane_g6

0x6a08,	// (0x0005a835) wml_miniature_view_pane_g7

0x6a10,	// (0x0005a83d) wml_miniature_view_pane_g8

0x0007,

0xf603,	// (0x00063430) wml_miniature_view_pane_g

0x27d3,	// (0x00056600) background_graphic_ParamLimits

0x27d3,	// (0x00056600) background_graphic

0x27df,	// (0x0005660c) wml_tabs_2_pane

0x27e8,	// (0x00056615) wml_tabs_3_pane_ParamLimits

0x27e8,	// (0x00056615) wml_tabs_3_pane

0x27fa,	// (0x00056627) wml_tabs_4_pane_ParamLimits

0x27fa,	// (0x00056627) wml_tabs_4_pane

0x6a18,	// (0x0005a845) wml_tabs_5_pane_ParamLimits

0x6a18,	// (0x0005a845) wml_tabs_5_pane

0x6a32,	// (0x0005a85f) wml_tabs_pane_g2_ParamLimits

0x6a32,	// (0x0005a85f) wml_tabs_pane_g2

0x6a47,	// (0x0005a874) wml_tabs_pane_g3_ParamLimits

0x6a47,	// (0x0005a874) wml_tabs_pane_g3

0x6a5c,	// (0x0005a889) wml_tabs_2_active_pane_ParamLimits

0x6a5c,	// (0x0005a889) wml_tabs_2_active_pane

0x6a5c,	// (0x0005a889) wml_tabs_2_passive_pane_ParamLimits

0x6a5c,	// (0x0005a889) wml_tabs_2_passive_pane

0x6a6a,	// (0x0005a897) wml_tabs_3_active_pane_cp_ParamLimits

0x6a6a,	// (0x0005a897) wml_tabs_3_active_pane_cp

0x6a7f,	// (0x0005a8ac) wml_tabs_3_passive_pane_ParamLimits

0x6a7f,	// (0x0005a8ac) wml_tabs_3_passive_pane

0x6a92,	// (0x0005a8bf) wml_tabs_3_passive_pane_cp_ParamLimits

0x6a92,	// (0x0005a8bf) wml_tabs_3_passive_pane_cp

0x6aa9,	// (0x0005a8d6) tabs_4_active_pane

0x6ab1,	// (0x0005a8de) tabs_4_passive_pane

0x6abb,	// (0x0005a8e8) tabs_4_passive_pane_cp

0x6ac3,	// (0x0005a8f0) tabs_4_passive_pane_cp2

0x61e6,	// (0x0005a013) aid_height_text

0x26d0,	// (0x000564fd) mup_volume_cont_pane_ParamLimits

0x26d0,	// (0x000564fd) mup_volume_cont_pane

0xbd26,	// (0x0005fb53) aid_size_cell_pinb

0xbd26,	// (0x0005fb53) aid_size_list_pinb

0x26d0,	// (0x000564fd) mup2_volume_cont_pane_ParamLimits

0x26d0,	// (0x000564fd) mup2_volume_cont_pane

0xc6e7,	// (0x00060514) mup2_volume_cont_pane_g1_ParamLimits

0xc6e7,	// (0x00060514) mup2_volume_cont_pane_g1

0x37a4,	// (0x000575d1) aid_size_cell_touch_ParamLimits

0x37a4,	// (0x000575d1) aid_size_cell_touch

0x39d1,	// (0x000577fe) touch_pane_ParamLimits

0x39d1,	// (0x000577fe) touch_pane

0xbdab,	// (0x0005fbd8) main_rss2_pane

0x6ad6,	// (0x0005a903) listscroll_rss2_pane

0x6adf,	// (0x0005a90c) rss2_navigation_pane

0x6ae7,	// (0x0005a914) list_rss2_pane

0x1197,	// (0x00054fc4) scroll_pane_cp22

0x6aef,	// (0x0005a91c) rss2_navigation_pane_g1

0x6af8,	// (0x0005a925) rss2_navigation_pane_g2

0x6b00,	// (0x0005a92d) rss2_navigation_pane_g3

0x0002,

0xf614,	// (0x00063441) rss2_navigation_pane_g

0x6b08,	// (0x0005a935) rss2_navigation_pane_t1

0x6b16,	// (0x0005a943) rss2_list_single_pane_ParamLimits

0x6b16,	// (0x0005a943) rss2_list_single_pane

0x6b2b,	// (0x0005a958) rss2_list_single_pane_t2

0x6b39,	// (0x0005a966) rss2_list_single_pane_t3_ParamLimits

0x6b39,	// (0x0005a966) rss2_list_single_pane_t3

0x6b56,	// (0x0005a983) rss2_list_single_pane_t4

0x5480,	// (0x000592ad) smil_status_pane_g1

0xbd9d,	// (0x0005fbca) main_image2_pane_ParamLimits

0xbd9d,	// (0x0005fbca) main_image2_pane

0xee2b,	// (0x00062c58) main_camera2_pane_g9_ParamLimits

0xee2b,	// (0x00062c58) main_camera2_pane_g9

0x698a,	// (0x0005a7b7) main_camera2_pane_t5_ParamLimits

0x698a,	// (0x0005a7b7) main_camera2_pane_t5

0xc6b1,	// (0x000604de) main_camera2_pane_t6_ParamLimits

0xc6b1,	// (0x000604de) main_camera2_pane_t6

0x6b64,	// (0x0005a991) main_image2_pane_g1_ParamLimits

0x6b64,	// (0x0005a991) main_image2_pane_g1

0x5eba,	// (0x00059ce7) smil2_video_pane_ParamLimits

0x5eba,	// (0x00059ce7) smil2_video_pane

0xbd54,	// (0x0005fb81) aid_zoom_text_primary_cp

0xbd93,	// (0x0005fbc0) popup_preview_fixed_window

0x0a5d,	// (0x0005488a) im_reading_pane_g1

0x697c,	// (0x0005a7a9) cams2_bc_adjust_pane_cp_ParamLimits

0x697c,	// (0x0005a7a9) cams2_bc_adjust_pane_cp

0xc6d9,	// (0x00060506) cams2_bc_adjust_pane_ParamLimits

0xc6d9,	// (0x00060506) cams2_bc_adjust_pane

0xc713,	// (0x00060540) cams2_bc_adjust_pane_g1

0xbdab,	// (0x0005fbd8) cams2_slider_pane

0xc713,	// (0x00060540) cams2_slider_pane_g1

0xc713,	// (0x00060540) cams2_slider_pane_g2

0x0006,

0xf61b,	// (0x00063448) cams2_slider_pane_g

0x3a99,	// (0x000578c6) calc_display_pane_ParamLimits

0x3abe,	// (0x000578eb) calc_paper_pane_ParamLimits

0x3ae1,	// (0x0005790e) grid_calc_pane_ParamLimits

0xc5c8,	// (0x000603f5) popup_clock_digital_window_t1_ParamLimits

0x163e,	// (0x0005546b) main_image_pane_t1

0x3a7b,	// (0x000578a8) aid_size_cell_calc_ParamLimits

0x3a7b,	// (0x000578a8) aid_size_cell_calc

0x6508,	// (0x0005a335) popup_blid_sat_info2_window_ParamLimits

0x6508,	// (0x0005a335) popup_blid_sat_info2_window

0x6b7a,	// (0x0005a9a7) aid_size_cell_blid

0x6b82,	// (0x0005a9af) bg_popup_window_pane_cp07

0x6ba5,	// (0x0005a9d2) grid_popup_blid_pane

0x6baf,	// (0x0005a9dc) heading_pane_cp05_ParamLimits

0x6baf,	// (0x0005a9dc) heading_pane_cp05

0x6c79,	// (0x0005aaa6) cell_popup_blid_pane_ParamLimits

0x6c79,	// (0x0005aaa6) cell_popup_blid_pane

0x6c9d,	// (0x0005aaca) cell_popup_blid_pane_g1

0x6ca5,	// (0x0005aad2) cell_popup_blid_pane_t1

0x26d0,	// (0x000564fd) mup2_indicator_pane_ParamLimits

0x26d0,	// (0x000564fd) mup2_indicator_pane

0xbd26,	// (0x0005fb53) mup2_visualizer_osc_pane

0x27ad,	// (0x000565da) mup2_visualizer_spec_pane_ParamLimits

0x27ad,	// (0x000565da) mup2_visualizer_spec_pane

0xbd26,	// (0x0005fb53) mup2_spec_half_pane

0xbd26,	// (0x0005fb53) mup2_spec_half_pane_cp

0x6cb3,	// (0x0005aae0) mup2_spec_bar_pane_ParamLimits

0x6cb3,	// (0x0005aae0) mup2_spec_bar_pane

0x0998,	// (0x000547c5) mup2_spec_bar_pane_g1

0x6cd2,	// (0x0005aaff) mup2_spec_bar_pane_g2

0x0001,

0xf641,	// (0x0006346e) mup2_spec_bar_pane_g

0xbd26,	// (0x0005fb53) mup2_osc_middle_pane

0x0998,	// (0x000547c5) mup2_visualizer_osc_pane_g1

0xbdd5,	// (0x0005fc02) popup_number_entry_window_t1_ParamLimits

0xbde8,	// (0x0005fc15) popup_number_entry_window_t2_ParamLimits

0xbdfa,	// (0x0005fc27) popup_number_entry_window_t3_ParamLimits

0x3a23,	// (0x00057850) popup_number_entry_window_t5_ParamLimits

0x3a23,	// (0x00057850) popup_number_entry_window_t5

0xf085,	// (0x00062eb2) popup_number_entry_window_t_ParamLimits

0xbe0c,	// (0x0005fc39) text_title_cp2_ParamLimits

0xc607,	// (0x00060434) aid_hotspot_pointer_text2_pane

0xc621,	// (0x0006044e) main_viewer_pane_g9_ParamLimits

0xc621,	// (0x0006044e) main_viewer_pane_g9

0x0c96,	// (0x00054ac3) cale_month_pane_t1_ParamLimits

0x0cd3,	// (0x00054b00) bg_cale_pane_ParamLimits

0x0ceb,	// (0x00054b18) list_cale_pane_ParamLimits

0x0cfc,	// (0x00054b29) listscroll_cale_day_pane_t1

0x0d0e,	// (0x00054b3b) scroll_pane_cp09_ParamLimits

0x583d,	// (0x0005966a) main_mup_eq_pane_t1_ParamLimits

0x583d,	// (0x0005966a) main_mup_eq_pane_t1

0x5857,	// (0x00059684) main_mup_eq_pane_t2_ParamLimits

0x5857,	// (0x00059684) main_mup_eq_pane_t2

0x5871,	// (0x0005969e) main_mup_eq_pane_t3_ParamLimits

0x5871,	// (0x0005969e) main_mup_eq_pane_t3

0x588d,	// (0x000596ba) main_mup_eq_pane_t4_ParamLimits

0x588d,	// (0x000596ba) main_mup_eq_pane_t4

0x58a9,	// (0x000596d6) main_mup_eq_pane_t5_ParamLimits

0x58a9,	// (0x000596d6) main_mup_eq_pane_t5

0x58c5,	// (0x000596f2) main_mup_eq_pane_t6_ParamLimits

0x58c5,	// (0x000596f2) main_mup_eq_pane_t6

0x58d9,	// (0x00059706) main_mup_eq_pane_t7_ParamLimits

0x58d9,	// (0x00059706) main_mup_eq_pane_t7

0x58ed,	// (0x0005971a) main_mup_eq_pane_t8_ParamLimits

0x58ed,	// (0x0005971a) main_mup_eq_pane_t8

0x5901,	// (0x0005972e) main_mup_eq_pane_t9_ParamLimits

0x5901,	// (0x0005972e) main_mup_eq_pane_t9

0x591b,	// (0x00059748) main_mup_eq_pane_t10_ParamLimits

0x591b,	// (0x00059748) main_mup_eq_pane_t10

0x0009,

0xf3e4,	// (0x00063211) main_mup_eq_pane_t_ParamLimits

0xf3e4,	// (0x00063211) main_mup_eq_pane_t

0x59ca,	// (0x000597f7) mup_equalizer_pane_cp5_ParamLimits

0x59de,	// (0x0005980b) mup_equalizer_pane_cp6_ParamLimits

0x59f2,	// (0x0005981f) mup_equalizer_pane_cp7_ParamLimits

0xbdab,	// (0x0005fbd8) main_gallery_pane

0x274b,	// (0x00056578) smil2_volume_pane

0x2753,	// (0x00056580) smil_status_volume_pane_g1_ParamLimits

0x2766,	// (0x00056593) smil_status_volume_pane_g2_ParamLimits

0xc681,	// (0x000604ae) smil_status_volume_pane_g3_ParamLimits

0xf59a,	// (0x000633c7) smil_status_volume_pane_g_ParamLimits

0x6b82,	// (0x0005a9af) bg_popup_window_pane_cp07_ParamLimits

0x6b90,	// (0x0005a9bd) blid_firmament_pane

0xc445,	// (0x00060272) aid_size_cell_gallery_ParamLimits

0xc445,	// (0x00060272) aid_size_cell_gallery

0xc445,	// (0x00060272) grid_gallery_pane_ParamLimits

0xc445,	// (0x00060272) grid_gallery_pane

0x6b82,	// (0x0005a9af) cell_gallery_pane_ParamLimits

0x6b82,	// (0x0005a9af) cell_gallery_pane

0xc445,	// (0x00060272) bg_cell_gallery_focus_pane_ParamLimits

0xc445,	// (0x00060272) bg_cell_gallery_focus_pane

0x073e,	// (0x0005456b) cell_gallery_pane_g1_ParamLimits

0x073e,	// (0x0005456b) cell_gallery_pane_g1

0x073e,	// (0x0005456b) cell_gallery_pane_g2_ParamLimits

0x073e,	// (0x0005456b) cell_gallery_pane_g2

0x073e,	// (0x0005456b) cell_gallery_pane_g3_ParamLimits

0x073e,	// (0x0005456b) cell_gallery_pane_g3

0x074c,	// (0x00054579) cell_gallery_pane_g4_ParamLimits

0x074c,	// (0x00054579) cell_gallery_pane_g4

0x0003,

0xf646,	// (0x00063473) cell_gallery_pane_g_ParamLimits

0xf646,	// (0x00063473) cell_gallery_pane_g

0x6cdc,	// (0x0005ab09) bg_cell_gallery_focus_pane_g1

0x6ce4,	// (0x0005ab11) bg_cell_gallery_focus_pane_g2

0x6cec,	// (0x0005ab19) bg_cell_gallery_focus_pane_g3

0x6cf4,	// (0x0005ab21) bg_cell_gallery_focus_pane_g4

0x6cfc,	// (0x0005ab29) bg_cell_gallery_focus_pane_g5

0x6d04,	// (0x0005ab31) bg_cell_gallery_focus_pane_g6

0x6d0c,	// (0x0005ab39) bg_cell_gallery_focus_pane_g7

0x6d14,	// (0x0005ab41) bg_cell_gallery_focus_pane_g8

0x0007,

0xf64f,	// (0x0006347c) bg_cell_gallery_focus_pane_g

0x6d1c,	// (0x0005ab49) aid_firma_cardinal

0x6d30,	// (0x0005ab5d) blid_firmament_pane_t1

0x6d47,	// (0x0005ab74) blid_firmament_pane_t2

0x6d5e,	// (0x0005ab8b) blid_firmament_pane_t3

0x6d75,	// (0x0005aba2) blid_firmament_pane_t4

0x0003,

0xf660,	// (0x0006348d) blid_firmament_pane_t

0x6d8c,	// (0x0005abb9) blid_sat_info_pane

0x0998,	// (0x000547c5) blid_sat_info_pane_g1

0x0998,	// (0x000547c5) blid_sat_info_pane_g2

0x0001,

0xf3d8,	// (0x00063205) blid_sat_info_pane_g

0x6d9c,	// (0x0005abc9) blid_sat_info_pane_t1

0x6daa,	// (0x0005abd7) smil2_volume_content_pane

0x6db3,	// (0x0005abe0) smil2_volume_pane_g1

0x2810,	// (0x0005663d) smil2_volume_content_pane_g1

0x6dbb,	// (0x0005abe8) smil2_volume_content_pane_g2

0x6dc4,	// (0x0005abf1) smil2_volume_content_pane_g3

0x6dcd,	// (0x0005abfa) smil2_volume_content_pane_g4

0x6dd6,	// (0x0005ac03) smil2_volume_content_pane_g5

0x6ddf,	// (0x0005ac0c) smil2_volume_content_pane_g6

0x6de8,	// (0x0005ac15) smil2_volume_content_pane_g7

0x6df1,	// (0x0005ac1e) smil2_volume_content_pane_g8

0x6dfa,	// (0x0005ac27) smil2_volume_content_pane_g9

0x6e03,	// (0x0005ac30) smil2_volume_content_pane_g10

0x0009,

0xf669,	// (0x00063496) smil2_volume_content_pane_g

0x4064,	// (0x00057e91) cale_week_day_heading_pane_t1_ParamLimits

0x408e,	// (0x00057ebb) cale_week_day_heading_pane_t2_ParamLimits

0x40bd,	// (0x00057eea) cale_week_day_heading_pane_t3_ParamLimits

0x40ec,	// (0x00057f19) cale_week_day_heading_pane_t4_ParamLimits

0x411b,	// (0x00057f48) cale_week_day_heading_pane_t5_ParamLimits

0x4152,	// (0x00057f7f) cale_week_day_heading_pane_t6_ParamLimits

0x4189,	// (0x00057fb6) cale_week_day_heading_pane_t7_ParamLimits

0xf18c,	// (0x00062fb9) cale_week_day_heading_pane_t_ParamLimits

0x0910,	// (0x0005473d) bg_cale_side_pane_ParamLimits

0x41b3,	// (0x00057fe0) cale_week_time_pane_t1_ParamLimits

0x41cd,	// (0x00057ffa) cale_week_time_pane_t2_ParamLimits

0x41e7,	// (0x00058014) cale_week_time_pane_t3_ParamLimits

0x4201,	// (0x0005802e) cale_week_time_pane_t4_ParamLimits

0x421b,	// (0x00058048) cale_week_time_pane_t5_ParamLimits

0x4235,	// (0x00058062) cale_week_time_pane_t6_ParamLimits

0x424f,	// (0x0005807c) cale_week_time_pane_t7_ParamLimits

0x4269,	// (0x00058096) cale_week_time_pane_t8_ParamLimits

0xf19b,	// (0x00062fc8) cale_week_time_pane_t_ParamLimits

0x4283,	// (0x000580b0) cell_cale_week_pane_g2_ParamLimits

0x0910,	// (0x0005473d) bg_cale_side_pane_cp01_ParamLimits

0x5287,	// (0x000590b4) cale_month_week_pane_t1_ParamLimits

0x52a0,	// (0x000590cd) cale_month_week_pane_t2_ParamLimits

0x52b9,	// (0x000590e6) cale_month_week_pane_t3_ParamLimits

0x52d2,	// (0x000590ff) cale_month_week_pane_t4_ParamLimits

0x52eb,	// (0x00059118) cale_month_week_pane_t5_ParamLimits

0x5304,	// (0x00059131) cale_month_week_pane_t6_ParamLimits

0xf269,	// (0x00063096) cale_month_week_pane_t_ParamLimits

0xc544,	// (0x00060371) cell_cale_month_pane_g1_ParamLimits

0xbdab,	// (0x0005fbd8) main_cale_event_viewer_pane

0xbd26,	// (0x0005fb53) listscroll_cale_event_viewer_pane

0x6e0c,	// (0x0005ac39) list_cale_ev_pane

0x6e14,	// (0x0005ac41) scroll_pane_cp023

0x6e20,	// (0x0005ac4d) field_cale_ev_pane_ParamLimits

0x6e20,	// (0x0005ac4d) field_cale_ev_pane

0x6e3e,	// (0x0005ac6b) field_cale_ev_content_pane_ParamLimits

0x6e3e,	// (0x0005ac6b) field_cale_ev_content_pane

0x6e4a,	// (0x0005ac77) field_cale_ev_pane_g1_ParamLimits

0x6e4a,	// (0x0005ac77) field_cale_ev_pane_g1

0x6e56,	// (0x0005ac83) field_cale_ev_pane_g2_ParamLimits

0x6e56,	// (0x0005ac83) field_cale_ev_pane_g2

0x6e6e,	// (0x0005ac9b) field_cale_ev_pane_g3_ParamLimits

0x6e6e,	// (0x0005ac9b) field_cale_ev_pane_g3

0x0002,

0xf67e,	// (0x000634ab) field_cale_ev_pane_g_ParamLimits

0xf67e,	// (0x000634ab) field_cale_ev_pane_g

0x6e86,	// (0x0005acb3) field_cale_ev_pane_t1_ParamLimits

0x6e86,	// (0x0005acb3) field_cale_ev_pane_t1

0x2819,	// (0x00056646) field_cale_ev_content_pane_t1_ParamLimits

0x2819,	// (0x00056646) field_cale_ev_content_pane_t1

0x1524,	// (0x00055351) bg_button_pane_cp01

0x3d91,	// (0x00057bbe) listscroll_cale_week_pane_ParamLimits

0x08bb,	// (0x000546e8) popup_toolbar_window_cp01

0x08e1,	// (0x0005470e) listscroll_cale_week_pane_t1_ParamLimits

0x3d91,	// (0x00057bbe) listscroll_cale_day_pane_ParamLimits

0x08bb,	// (0x000546e8) popup_toolbar_window_cp02

0x0cfc,	// (0x00054b29) listscroll_cale_day_pane_t1_ParamLimits

0x64c2,	// (0x0005a2ef) main_cale_month_pane_ParamLimits

0xc66c,	// (0x00060499) popup_toolbar_window_cp03_ParamLimits

0xc66c,	// (0x00060499) popup_toolbar_window_cp03

0x5d82,	// (0x00059baf) main_image_pane_g2_ParamLimits

0x5d82,	// (0x00059baf) main_image_pane_g2

0x5d93,	// (0x00059bc0) main_image_pane_g3_ParamLimits

0x5d93,	// (0x00059bc0) main_image_pane_g3

0x0002,

0xf476,	// (0x000632a3) main_image_pane_g_ParamLimits

0xf476,	// (0x000632a3) main_image_pane_g

0x163e,	// (0x0005546b) main_image_pane_t1_ParamLimits

0x5da4,	// (0x00059bd1) main_image_pane_t2_ParamLimits

0x5da4,	// (0x00059bd1) main_image_pane_t2

0x5db6,	// (0x00059be3) main_image_pane_t3_ParamLimits

0x5db6,	// (0x00059be3) main_image_pane_t3

0x5dde,	// (0x00059c0b) main_image_pane_t4_ParamLimits

0x5dde,	// (0x00059c0b) main_image_pane_t4

0x0003,

0xf47d,	// (0x000632aa) main_image_pane_t_ParamLimits

0xf47d,	// (0x000632aa) main_image_pane_t

0x5dfe,	// (0x00059c2b) popup_image_details_window_cp01

0x5e08,	// (0x00059c35) popup_toobar_trans_pane_cp01_ParamLimits

0x5e08,	// (0x00059c35) popup_toobar_trans_pane_cp01

0x65e7,	// (0x0005a414) popup_image_details_window_ParamLimits

0x65e7,	// (0x0005a414) popup_image_details_window

0xc63f,	// (0x0006046c) popup_image_focus_window

0xc6a3,	// (0x000604d0) camera2_autofocus_pane_ParamLimits

0xc6a3,	// (0x000604d0) camera2_autofocus_pane

0xbd26,	// (0x0005fb53) bg_popup_sub_pane_cp06

0x6e9d,	// (0x0005acca) popup_image_focus_window_g1

0x6ea5,	// (0x0005acd2) popup_image_focus_window_g2

0x6ead,	// (0x0005acda) popup_image_focus_window_g3

0x6eb5,	// (0x0005ace2) popup_image_focus_window_g4

0x0003,

0xf685,	// (0x000634b2) popup_image_focus_window_g

0x6ebd,	// (0x0005acea) popup_image_focus_window_t1

0x6ecb,	// (0x0005acf8) popup_image_focus_window_t2

0x6edb,	// (0x0005ad08) popup_image_focus_window_t3

0x0002,

0xf68e,	// (0x000634bb) popup_image_focus_window_t

0x073e,	// (0x0005456b) camera2_autofocus_pane_g1

0xc445,	// (0x00060272) bg_tb_trans_pane_cp01

0x6ee9,	// (0x0005ad16) popup_image_details_window_g1

0xc71d,	// (0x0006054a) popup_image_details_window_g2

0x0002,

0xf6a0,	// (0x000634cd) popup_image_details_window_g

0xc746,	// (0x00060573) popup_image_details_window_t1

0xc758,	// (0x00060585) popup_image_details_window_t2

0xc771,	// (0x0006059e) popup_image_details_window_t3

0xc785,	// (0x000605b2) popup_image_details_window_t4

0xc7a0,	// (0x000605cd) popup_image_details_window_t5

0x0004,

0xf6a7,	// (0x000634d4) popup_image_details_window_t

0x079c,	// (0x000545c9) bg_calc_paper_pane_ParamLimits

0xbdab,	// (0x0005fbd8) grid_highlight_pane_cp013

0xc4b4,	// (0x000602e1) list_calc_pane_ParamLimits

0xc4c6,	// (0x000602f3) scroll_pane_cp024

0x07b0,	// (0x000545dd) bg_calc_display_pane_ParamLimits

0x3bdf,	// (0x00057a0c) calc_display_pane_t1_ParamLimits

0x3bf4,	// (0x00057a21) calc_display_pane_t2_ParamLimits

0xc4ce,	// (0x000602fb) calc_display_pane_t3_ParamLimits

0xf10c,	// (0x00062f39) calc_display_pane_t_ParamLimits

0x3cb4,	// (0x00057ae1) cell_calc_pane_g2

0x0001,

0xf129,	// (0x00062f56) cell_calc_pane_g

0x3cbd,	// (0x00057aea) cell_calc_pane_t1

0x0805,	// (0x00054632) grid_highlight_pane_cp02_ParamLimits

0x081b,	// (0x00054648) toolbar_button_pane_cp01_ParamLimits

0x081b,	// (0x00054648) toolbar_button_pane_cp01

0x1683,	// (0x000554b0) temp_image_control_pane_ParamLimits

0x1683,	// (0x000554b0) temp_image_control_pane

0xbd9d,	// (0x0005fbca) main_mp3_pane

0xc7ba,	// (0x000605e7) temp_image_control_pane_g1_ParamLimits

0xc7ba,	// (0x000605e7) temp_image_control_pane_g1

0xc7c8,	// (0x000605f5) temp_image_control_pane_g2_ParamLimits

0xc7c8,	// (0x000605f5) temp_image_control_pane_g2

0xc7da,	// (0x00060607) temp_image_control_pane_g3_ParamLimits

0xc7da,	// (0x00060607) temp_image_control_pane_g3

0x6efc,	// (0x0005ad29) temp_image_control_pane_g4_ParamLimits

0x6efc,	// (0x0005ad29) temp_image_control_pane_g4

0x0003,

0xf6b2,	// (0x000634df) temp_image_control_pane_g_ParamLimits

0xf6b2,	// (0x000634df) temp_image_control_pane_g

0xc7ba,	// (0x000605e7) main_mp3_pane_g1

0x6f0f,	// (0x0005ad3c) main_mp3_pane_g2

0x0007,

0xf6bb,	// (0x000634e8) main_mp3_pane_g

0xc80f,	// (0x0006063c) main_mp3_pane_t1

0x074c,	// (0x00054579) main_camera_pane_g8_ParamLimits

0x074c,	// (0x00054579) main_camera_pane_g8

0x444d,	// (0x0005827a) main_video_pane_g7_ParamLimits

0x444d,	// (0x0005827a) main_video_pane_g7

0xc6c5,	// (0x000604f2) main_camera2_pane_t7_ParamLimits

0xc6c5,	// (0x000604f2) main_camera2_pane_t7

0x0ab4,	// (0x000548e1) scroll_pane_cp025_ParamLimits

0x0ab4,	// (0x000548e1) scroll_pane_cp025

0x0ac8,	// (0x000548f5) scroll_pane_cp026_ParamLimits

0x0ac8,	// (0x000548f5) scroll_pane_cp026

0x0ad7,	// (0x00054904) wml_content_pane_ParamLimits

0xbdab,	// (0x0005fbd8) main_touch_calib_pane

0x6fe3,	// (0x0005ae10) main_touch_calib_pane_g1

0x6ff5,	// (0x0005ae22) main_touch_calib_pane_g2

0x7007,	// (0x0005ae34) main_touch_calib_pane_g3

0x7019,	// (0x0005ae46) main_touch_calib_pane_g4

0x0003,

0xf6d9,	// (0x00063506) main_touch_calib_pane_g

0x702b,	// (0x0005ae58) main_touch_calib_pane_t1

0x7045,	// (0x0005ae72) main_touch_calib_pane_t2

0x0004,

0xf6e2,	// (0x0006350f) main_touch_calib_pane_t

0x1273,	// (0x000550a0) mup_progress_pane_cp02

0x12a8,	// (0x000550d5) navi_pane_g1

0x1363,	// (0x00055190) navi_pane_mp_t3

0xbd9d,	// (0x0005fbca) main_mp3_pane_ParamLimits

0x676c,	// (0x0005a599) navi_pane_ParamLimits

0xc7ba,	// (0x000605e7) main_mp3_pane_g1_ParamLimits

0x6f0f,	// (0x0005ad3c) main_mp3_pane_g2_ParamLimits

0x6f1d,	// (0x0005ad4a) main_mp3_pane_g3_ParamLimits

0x6f1d,	// (0x0005ad4a) main_mp3_pane_g3

0x6f2b,	// (0x0005ad58) main_mp3_pane_g4_ParamLimits

0x6f2b,	// (0x0005ad58) main_mp3_pane_g4

0x073e,	// (0x0005456b) main_mp3_pane_g5_ParamLimits

0x073e,	// (0x0005456b) main_mp3_pane_g5

0xc7ea,	// (0x00060617) main_mp3_pane_g6_ParamLimits

0xc7ea,	// (0x00060617) main_mp3_pane_g6

0xc7f7,	// (0x00060624) main_mp3_pane_g7_ParamLimits

0xc7f7,	// (0x00060624) main_mp3_pane_g7

0xc803,	// (0x00060630) main_mp3_pane_g8_ParamLimits

0xc803,	// (0x00060630) main_mp3_pane_g8

0xf6bb,	// (0x000634e8) main_mp3_pane_g_ParamLimits

0x6f37,	// (0x0005ad64) main_mp3_pane_t2

0x6f45,	// (0x0005ad72) main_mp3_pane_t3

0xc81d,	// (0x0006064a) main_mp3_pane_t4

0xc82b,	// (0x00060658) main_mp3_pane_t5

0x0005,

0xf6cc,	// (0x000634f9) main_mp3_pane_t

0xc839,	// (0x00060666) mup_progress_pane_cp01

0xbd54,	// (0x0005fb81) aid_zoom_text_secondary2

0x6e0c,	// (0x0005ac39) list_cale_ev2_pane

0x6e14,	// (0x0005ac41) scroll_pane_cp023_ParamLimits

0x709b,	// (0x0005aec8) field_cale_ev2_pane_ParamLimits

0x709b,	// (0x0005aec8) field_cale_ev2_pane

0xc841,	// (0x0006066e) field_cale_ev2_pane_g1_ParamLimits

0xc841,	// (0x0006066e) field_cale_ev2_pane_g1

0xc84d,	// (0x0006067a) field_cale_ev2_pane_g2_ParamLimits

0xc84d,	// (0x0006067a) field_cale_ev2_pane_g2

0xc865,	// (0x00060692) field_cale_ev2_pane_g3_ParamLimits

0xc865,	// (0x00060692) field_cale_ev2_pane_g3

0x0003,

0xf6ed,	// (0x0006351a) field_cale_ev2_pane_g_ParamLimits

0xf6ed,	// (0x0006351a) field_cale_ev2_pane_g

0x70bb,	// (0x0005aee8) field_cale_ev2_pane_t1_ParamLimits

0x70bb,	// (0x0005aee8) field_cale_ev2_pane_t1

0x70d2,	// (0x0005aeff) field_cale_ev2_pane_t2_ParamLimits

0x70d2,	// (0x0005aeff) field_cale_ev2_pane_t2

0x0001,

0xf6f6,	// (0x00063523) field_cale_ev2_pane_t_ParamLimits

0xf6f6,	// (0x00063523) field_cale_ev2_pane_t

0x5c37,	// (0x00059a64) main_postcard_pane_g5_ParamLimits

0x5c37,	// (0x00059a64) main_postcard_pane_g5

0x5c4d,	// (0x00059a7a) main_postcard_pane_g6_ParamLimits

0x5c4d,	// (0x00059a7a) main_postcard_pane_g6

0xc445,	// (0x00060272) camera2_autofocus_pane_cp_ParamLimits

0xc445,	// (0x00060272) camera2_autofocus_pane_cp

0xbd9d,	// (0x0005fbca) main_mup3_pane

0x712b,	// (0x0005af58) main_mup3_pane_g1_ParamLimits

0x712b,	// (0x0005af58) main_mup3_pane_g1

0x714d,	// (0x0005af7a) main_mup3_pane_g2_ParamLimits

0x714d,	// (0x0005af7a) main_mup3_pane_g2

0x71cb,	// (0x0005aff8) main_mup3_pane_g3_ParamLimits

0x71cb,	// (0x0005aff8) main_mup3_pane_g3

0x7211,	// (0x0005b03e) main_mup3_pane_g4_ParamLimits

0x7211,	// (0x0005b03e) main_mup3_pane_g4

0x7257,	// (0x0005b084) main_mup3_pane_g5_ParamLimits

0x7257,	// (0x0005b084) main_mup3_pane_g5

0x729d,	// (0x0005b0ca) main_mup3_pane_g6_ParamLimits

0x729d,	// (0x0005b0ca) main_mup3_pane_g6

0x074c,	// (0x00054579) main_mup3_pane_g7_ParamLimits

0x074c,	// (0x00054579) main_mup3_pane_g7

0x0007,

0xf706,	// (0x00063533) main_mup3_pane_g_ParamLimits

0xf706,	// (0x00063533) main_mup3_pane_g

0x731b,	// (0x0005b148) main_mup3_pane_t1_ParamLimits

0x731b,	// (0x0005b148) main_mup3_pane_t1

0x738f,	// (0x0005b1bc) main_mup3_pane_t2_ParamLimits

0x738f,	// (0x0005b1bc) main_mup3_pane_t2

0x7463,	// (0x0005b290) main_mup3_pane_t4_ParamLimits

0x7463,	// (0x0005b290) main_mup3_pane_t4

0x74b9,	// (0x0005b2e6) main_mup3_pane_t5_ParamLimits

0x74b9,	// (0x0005b2e6) main_mup3_pane_t5

0x7575,	// (0x0005b3a2) main_mup3_pane_t6_ParamLimits

0x7575,	// (0x0005b3a2) main_mup3_pane_t6

0x0005,

0xf717,	// (0x00063544) main_mup3_pane_t_ParamLimits

0xf717,	// (0x00063544) main_mup3_pane_t

0x762d,	// (0x0005b45a) mup3_progress_pane_ParamLimits

0x762d,	// (0x0005b45a) mup3_progress_pane

0x76c3,	// (0x0005b4f0) popup_mup3_control_window_ParamLimits

0x76c3,	// (0x0005b4f0) popup_mup3_control_window

0xc889,	// (0x000606b6) popup_mup3_text_window

0x76f5,	// (0x0005b522) mup3_progress_pane_t1

0x7714,	// (0x0005b541) mup3_progress_pane_t2

0xc891,	// (0x000606be) mup3_progress_pane_t3

0x0002,

0xf724,	// (0x00063551) mup3_progress_pane_t

0xc8ae,	// (0x000606db) mup_progress_pane_cp03

0xbd26,	// (0x0005fb53) bg_tb_trans_pane_cp04

0x7733,	// (0x0005b560) mup3_volume_pane

0x773b,	// (0x0005b568) popup_mup3_control_window_g1

0x7744,	// (0x0005b571) mup3_volume_pane_g1

0x774d,	// (0x0005b57a) mup3_volume_pane_g2

0x7756,	// (0x0005b583) mup3_volume_pane_g3

0x0002,

0xf72b,	// (0x00063558) mup3_volume_pane_g

0xbd26,	// (0x0005fb53) bg_tb_trans_pane_cp03

0xc8be,	// (0x000606eb) popup_mup3_text_window_g1

0xc8c6,	// (0x000606f3) popup_mup3_text_window_t1

0x07f8,	// (0x00054625) list_calc_item_pane_g1_ParamLimits

0x6acd,	// (0x0005a8fa) mup_volume_pane_cp_g1

0x705f,	// (0x0005ae8c) main_touch_calib_pane_t3

0x7073,	// (0x0005aea0) main_touch_calib_pane_t4

0x7087,	// (0x0005aeb4) main_touch_calib_pane_t5

0xbd30,	// (0x0005fb5d) aid_cell_size_toolbar2

0xbd38,	// (0x0005fb65) aid_popup3_width_pane

0xbd44,	// (0x0005fb71) aid_zoom_text_msg_primary

0x4328,	// (0x00058155) vorec_t7

0x07bc,	// (0x000545e9) bg_calc_paper_pane_g1_ParamLimits

0x07c8,	// (0x000545f5) bg_calc_paper_pane_g2_ParamLimits

0x07d4,	// (0x00054601) bg_calc_paper_pane_g3_ParamLimits

0x07e0,	// (0x0005460d) bg_calc_paper_pane_g4_ParamLimits

0x07ec,	// (0x00054619) bg_calc_paper_pane_g5_ParamLimits

0x3c3e,	// (0x00057a6b) bg_calc_paper_pane_g6_ParamLimits

0x3c4d,	// (0x00057a7a) bg_calc_paper_pane_g7_ParamLimits

0x3c5c,	// (0x00057a89) bg_calc_paper_pane_g8_ParamLimits

0xf113,	// (0x00062f40) bg_calc_paper_pane_g_ParamLimits

0x3c6f,	// (0x00057a9c) calc_bg_paper_pane_g9_ParamLimits

0xc445,	// (0x00060272) image_qvga_pane_ParamLimits

0xc445,	// (0x00060272) image_qvga_pane

0xc423,	// (0x00060250) bg_popup_sub_pane_cp04_ParamLimits

0x15ba,	// (0x000553e7) popup_mup_playback_window_g1_ParamLimits

0x15c6,	// (0x000553f3) popup_mup_playback_window_t1_ParamLimits

0x15db,	// (0x00055408) popup_mup_playback_window_t2_ParamLimits

0xf471,	// (0x0006329e) popup_mup_playback_window_t_ParamLimits

0x074c,	// (0x00054579) main_mup2_pane_g3_ParamLimits

0x074c,	// (0x00054579) main_mup2_pane_g3

0x4655,	// (0x00058482) popup_toolbar_window_cp04

0x19bd,	// (0x000557ea) popup_call2_audio_second_window_g3_ParamLimits

0x19bd,	// (0x000557ea) popup_call2_audio_second_window_g3

0x1dc7,	// (0x00055bf4) popup_call2_audio_first_window_g4_ParamLimits

0x1dc7,	// (0x00055bf4) popup_call2_audio_first_window_g4

0x23ee,	// (0x0005621b) popup_call2_audio_in_window_g4_ParamLimits

0x23ee,	// (0x0005621b) popup_call2_audio_in_window_g4

0x5d64,	// (0x00059b91) aid_area_sk_bg_cut_ParamLimits

0x5d64,	// (0x00059b91) aid_area_sk_bg_cut

0x15f0,	// (0x0005541d) aid_area_sk_bg_cut_2_ParamLimits

0x15f0,	// (0x0005541d) aid_area_sk_bg_cut_2

0xbd26,	// (0x0005fb53) aid_placing_details_win

0xbd26,	// (0x0005fb53) aid_placing_details_win_2

0x073e,	// (0x0005456b) camera2_autofocus_pane_g1_ParamLimits

0x396a,	// (0x00057797) popup_fixed_preview_cale_window_ParamLimits

0x396a,	// (0x00057797) popup_fixed_preview_cale_window

0x13e1,	// (0x0005520e) navi_slider_pane_g3

0x13ea,	// (0x00055217) navi_slider_pane_g4

0x13f3,	// (0x00055220) navi_slider_pane_g5

0x13e1,	// (0x0005520e) navi_slider_pane_g6

0xc5ee,	// (0x0006041b) navi_slider_pane_g7

0x14f1,	// (0x0005531e) mup_scale_pane_g3

0x14fa,	// (0x00055327) mup_scale_pane_g4

0x1503,	// (0x00055330) mup_scale_pane_g5

0x5a06,	// (0x00059833) mup_scale_pane_g6

0x5a0f,	// (0x0005983c) mup_scale_pane_g7

0xc713,	// (0x00060540) cams2_slider_pane_g3

0xc713,	// (0x00060540) cams2_slider_pane_g4

0xc713,	// (0x00060540) cams2_slider_pane_g5

0xc713,	// (0x00060540) cams2_slider_pane_g6

0xc713,	// (0x00060540) cams2_slider_pane_g7

0x0998,	// (0x000547c5) camera2_autofocus_pane_cp_g1

0x26c4,	// (0x000564f1) bg_popup_preview_window_pane_cp02_ParamLimits

0x26c4,	// (0x000564f1) bg_popup_preview_window_pane_cp02

0xc8d4,	// (0x00060701) list_fp_cale_pane_ParamLimits

0xc8d4,	// (0x00060701) list_fp_cale_pane

0xc8e0,	// (0x0006070d) popup_fixed_preview_cale_window_t1_ParamLimits

0xc8e0,	// (0x0006070d) popup_fixed_preview_cale_window_t1

0x775f,	// (0x0005b58c) popup_fixed_preview_cale_window_t2_ParamLimits

0x775f,	// (0x0005b58c) popup_fixed_preview_cale_window_t2

0x7774,	// (0x0005b5a1) popup_fixed_preview_cale_window_t3_ParamLimits

0x7774,	// (0x0005b5a1) popup_fixed_preview_cale_window_t3

0x0002,

0xf732,	// (0x0006355f) popup_fixed_preview_cale_window_t_ParamLimits

0xf732,	// (0x0006355f) popup_fixed_preview_cale_window_t

0x7789,	// (0x0005b5b6) list_single_fp_cale_pane_ParamLimits

0x7789,	// (0x0005b5b6) list_single_fp_cale_pane

0xc8fe,	// (0x0006072b) list_single_fp_cale_pane_g1_ParamLimits

0xc8fe,	// (0x0006072b) list_single_fp_cale_pane_g1

0xc90a,	// (0x00060737) list_single_fp_cale_pane_g2_ParamLimits

0xc90a,	// (0x00060737) list_single_fp_cale_pane_g2

0x0002,

0xf739,	// (0x00063566) list_single_fp_cale_pane_g_ParamLimits

0xf739,	// (0x00063566) list_single_fp_cale_pane_g

0xc923,	// (0x00060750) list_single_fp_cale_pane_t1_ParamLimits

0xc923,	// (0x00060750) list_single_fp_cale_pane_t1

0xc935,	// (0x00060762) list_single_fp_cale_pane_t2_ParamLimits

0xc935,	// (0x00060762) list_single_fp_cale_pane_t2

0x0001,

0xf740,	// (0x0006356d) list_single_fp_cale_pane_t_ParamLimits

0xf740,	// (0x0006356d) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xbdab,	// (0x0005fbd8) main_dialer_pane

0xbd26,	// (0x0005fb53) aid_cell_size_keypad

0xbd26,	// (0x0005fb53) dialer_ne_pane

0xbd26,	// (0x0005fb53) grid_dialer_command_1_pane

0xbd26,	// (0x0005fb53) grid_dialer_command_2_pane

0xbd26,	// (0x0005fb53) grid_dialer_keypad_pane

0x779e,	// (0x0005b5cb) bg_popup_call_pane_cp06_ParamLimits

0x779e,	// (0x0005b5cb) bg_popup_call_pane_cp06

0x779e,	// (0x0005b5cb) dialer_ne_clear_pane_ParamLimits

0x779e,	// (0x0005b5cb) dialer_ne_clear_pane

0x0998,	// (0x000547c5) dialer_ne_pane_g1

0x096a,	// (0x00054797) dialer_ne_pane_t1_ParamLimits

0x096a,	// (0x00054797) dialer_ne_pane_t1

0x77ac,	// (0x0005b5d9) dialer_ne_pane_t2_ParamLimits

0x77ac,	// (0x0005b5d9) dialer_ne_pane_t2

0x77d4,	// (0x0005b601) dialer_ne_pane_t3_ParamLimits

0x77d4,	// (0x0005b601) dialer_ne_pane_t3

0x0002,

0xf745,	// (0x00063572) dialer_ne_pane_t_ParamLimits

0xf745,	// (0x00063572) dialer_ne_pane_t

0x77d4,	// (0x0005b601) dialer_ne_pane_t3_copy1_ParamLimits

0x77d4,	// (0x0005b601) dialer_ne_pane_t3_copy1

0xc968,	// (0x00060795) cell_dialer_keypad_pane_ParamLimits

0xc968,	// (0x00060795) cell_dialer_keypad_pane

0xc445,	// (0x00060272) cell_dialer_command_1_pane_ParamLimits

0xc445,	// (0x00060272) cell_dialer_command_1_pane

0xc97f,	// (0x000607ac) cell_dialer_command_2_pane_ParamLimits

0xc97f,	// (0x000607ac) cell_dialer_command_2_pane

0xc445,	// (0x00060272) bg_button_pane_cp02_ParamLimits

0xc445,	// (0x00060272) bg_button_pane_cp02

0x073e,	// (0x0005456b) cell_dialer_keypad_pane_g1_ParamLimits

0x073e,	// (0x0005456b) cell_dialer_keypad_pane_g1

0xc445,	// (0x00060272) bg_button_pane_cp03_ParamLimits

0xc445,	// (0x00060272) bg_button_pane_cp03

0x073e,	// (0x0005456b) cell_dialer_command_1_pane_g1_ParamLimits

0x073e,	// (0x0005456b) cell_dialer_command_1_pane_g1

0xbd26,	// (0x0005fb53) bg_button_pane_cp04

0x0998,	// (0x000547c5) cell_dialer_command_2_pane_g1

0xbd26,	// (0x0005fb53) bg_button_pane_cp06

0x0998,	// (0x000547c5) dialer_ne_clear_pane_g1

0x12b4,	// (0x000550e1) navi_pane_g2

0x12e2,	// (0x0005510f) navi_pane_g3

0x0002,

0xf374,	// (0x000631a1) navi_pane_g

0x1371,	// (0x0005519e) navi_pane_mv_g2

0x1398,	// (0x000551c5) navi_pane_mv_g5

0x57e9,	// (0x00059616) navi_pane_mv_t1

0x07b0,	// (0x000545dd) main_clock2_pane

0xc445,	// (0x00060272) main_clock2_list_pane_ParamLimits

0xc445,	// (0x00060272) main_clock2_list_pane

0x786a,	// (0x0005b697) main_clock2_pane_t1_ParamLimits

0x786a,	// (0x0005b697) main_clock2_pane_t1

0x78a5,	// (0x0005b6d2) main_clock2_pane_t2_ParamLimits

0x78a5,	// (0x0005b6d2) main_clock2_pane_t2

0x0004,

0xf751,	// (0x0006357e) main_clock2_pane_t_ParamLimits

0xf751,	// (0x0006357e) main_clock2_pane_t

0x7945,	// (0x0005b772) popup_clock_analogue_window_cp03_ParamLimits

0x7945,	// (0x0005b772) popup_clock_analogue_window_cp03

0x796a,	// (0x0005b797) popup_clock_digital_window_cp02_ParamLimits

0x796a,	// (0x0005b797) popup_clock_digital_window_cp02

0x79e3,	// (0x0005b810) main_clock2_list_single_pane_ParamLimits

0x79e3,	// (0x0005b810) main_clock2_list_single_pane

0x0962,	// (0x0005478f) list_highlight_pane_cp05

0xc9c6,	// (0x000607f3) main_clock2_list_single_pane_t1

0x4655,	// (0x00058482) popup_toolbar_window_cp04_ParamLimits

0x074c,	// (0x00054579) camera2_autofocus_pane_g2_ParamLimits

0x074c,	// (0x00054579) camera2_autofocus_pane_g2

0x074c,	// (0x00054579) camera2_autofocus_pane_g3_ParamLimits

0x074c,	// (0x00054579) camera2_autofocus_pane_g3

0x074c,	// (0x00054579) camera2_autofocus_pane_g4_ParamLimits

0x074c,	// (0x00054579) camera2_autofocus_pane_g4

0x074c,	// (0x00054579) camera2_autofocus_pane_g5_ParamLimits

0x074c,	// (0x00054579) camera2_autofocus_pane_g5

0x0004,

0xf695,	// (0x000634c2) camera2_autofocus_pane_g_ParamLimits

0xf695,	// (0x000634c2) camera2_autofocus_pane_g

0x70e7,	// (0x0005af14) camera2_autofocus_pane_cp_g2

0x70ef,	// (0x0005af1c) camera2_autofocus_pane_cp_g3

0x70f7,	// (0x0005af24) camera2_autofocus_pane_cp_g4

0x70ff,	// (0x0005af2c) camera2_autofocus_pane_cp_g5

0x0004,

0xf6fb,	// (0x00063528) camera2_autofocus_pane_cp_g

0xbd26,	// (0x0005fb53) popup_dialer_spcha_window

0xbd26,	// (0x0005fb53) bg_popup_sub_pane_cp07

0xbd26,	// (0x0005fb53) list_spcha_pane

0xc9d4,	// (0x00060801) list_single_spcha_pane_ParamLimits

0xc9d4,	// (0x00060801) list_single_spcha_pane

0xbd26,	// (0x0005fb53) list_highlight_pane_cp06

0x0edb,	// (0x00054d08) list_single_spcha_pane_t1

0x2198,	// (0x00055fc5) popup_call2_audio_out_window_g4_ParamLimits

0x2198,	// (0x00055fc5) popup_call2_audio_out_window_g4

0xbdab,	// (0x0005fbd8) main_imed2_pane

0xc647,	// (0x00060474) popup_imed_adjust2_window

0x65ff,	// (0x0005a42c) popup_imed_trans_window_ParamLimits

0x65ff,	// (0x0005a42c) popup_imed_trans_window

0x6bdb,	// (0x0005aa08) popup_blid_sat_info2_window_t1

0x6be9,	// (0x0005aa16) popup_blid_sat_info2_window_t2

0x000a,

0xf62a,	// (0x00063457) popup_blid_sat_info2_window_t

0x7a94,	// (0x0005b8c1) aid_size_cell_colour_35

0x7ab4,	// (0x0005b8e1) aid_size_cell_colour_112

0x7ad4,	// (0x0005b901) aid_size_cell_effect

0x26d0,	// (0x000564fd) bg_tb_trans_pane_cp02

0x0e0d,	// (0x00054c3a) heading_imed_pane

0x7af4,	// (0x0005b921) listscroll_imed_pane

0xc9e6,	// (0x00060813) heading_imed_pane_g1

0xc9ee,	// (0x0006081b) heading_imed_pane_t1

0xc9fc,	// (0x00060829) grid_imed_colour_35_pane_ParamLimits

0xc9fc,	// (0x00060829) grid_imed_colour_35_pane

0x7b00,	// (0x0005b92d) grid_imed_effect_pane

0xca13,	// (0x00060840) list_imed_aspect_pane

0x7b16,	// (0x0005b943) scroll_pane_cp027_ParamLimits

0x7b16,	// (0x0005b943) scroll_pane_cp027

0x7b27,	// (0x0005b954) cell_imed_effect_pane_ParamLimits

0x7b27,	// (0x0005b954) cell_imed_effect_pane

0xca1b,	// (0x00060848) cell_imed_colour_pane_ParamLimits

0xca1b,	// (0x00060848) cell_imed_colour_pane

0xca5d,	// (0x0006088a) cell_imed_colour_pane_g1_ParamLimits

0xca5d,	// (0x0006088a) cell_imed_colour_pane_g1

0xca6e,	// (0x0006089b) hgihlgiht_grid_pane_cp016_ParamLimits

0xca6e,	// (0x0006089b) hgihlgiht_grid_pane_cp016

0x7b4e,	// (0x0005b97b) cell_imed_effect_pane_g1

0x7b56,	// (0x0005b983) grid_highlight_pane_cp017

0xca7f,	// (0x000608ac) list_imed_single_pane_ParamLimits

0xca7f,	// (0x000608ac) list_imed_single_pane

0xbd26,	// (0x0005fb53) list_highlight_pane_cp07

0xca94,	// (0x000608c1) list_imed_aspect_pane_comp1_t1

0x26d0,	// (0x000564fd) bg_tb_trans_pane_cp05

0xcab6,	// (0x000608e3) popup_imed_adjust2_window_g1

0xcadd,	// (0x0006090a) popup_imed_adjust2_window_t1

0xcaf5,	// (0x00060922) slider_imed_adjust_pane

0xcb09,	// (0x00060936) slider_imed_adjust_pane_g1

0xcb19,	// (0x00060946) slider_imed_adjust_pane_g2

0xcb29,	// (0x00060956) slider_imed_adjust_pane_g3

0xcb3a,	// (0x00060967) slider_imed_adjust_pane_g4

0x0003,

0xf76e,	// (0x0006359b) slider_imed_adjust_pane_g

0x7b5f,	// (0x0005b98c) aid_size_cell_clipart2

0x7b6b,	// (0x0005b998) grid_imed_clipart_pane

0xcb4b,	// (0x00060978) scroll_pane_cp031

0x7b75,	// (0x0005b9a2) cell_imed_clipart_pane_ParamLimits

0x7b75,	// (0x0005b9a2) cell_imed_clipart_pane

0x7b97,	// (0x0005b9c4) cell_imed_clipart_pane_g1

0xbd26,	// (0x0005fb53) grid_highlight_pane_cp014

0x7846,	// (0x0005b673) main_clock2_pane_g1_ParamLimits

0x7846,	// (0x0005b673) main_clock2_pane_g1

0x798a,	// (0x0005b7b7) aid_call2_pane_cp10

0x799c,	// (0x0005b7c9) aid_call_pane_cp10

0x1215,	// (0x00055042) popup_clock_analogue_window_cp10_g1

0x1215,	// (0x00055042) popup_clock_analogue_window_cp10_g2

0x79ae,	// (0x0005b7db) popup_clock_analogue_window_cp10_g3

0x79ae,	// (0x0005b7db) popup_clock_analogue_window_cp10_g4

0x1215,	// (0x00055042) popup_clock_analogue_window_cp10_g5

0x0004,

0xf75c,	// (0x00063589) popup_clock_analogue_window_cp10_g

0x79c4,	// (0x0005b7f1) popup_clock_analogue_window_cp10_t1

0x79f5,	// (0x0005b822) clock_digital_number_pane_cp10_ParamLimits

0x79f5,	// (0x0005b822) clock_digital_number_pane_cp10

0x7a0d,	// (0x0005b83a) clock_digital_number_pane_cp11_ParamLimits

0x7a0d,	// (0x0005b83a) clock_digital_number_pane_cp11

0x7a25,	// (0x0005b852) clock_digital_number_pane_cp12_ParamLimits

0x7a25,	// (0x0005b852) clock_digital_number_pane_cp12

0x7a3f,	// (0x0005b86c) clock_digital_number_pane_cp13_ParamLimits

0x7a3f,	// (0x0005b86c) clock_digital_number_pane_cp13

0x7a59,	// (0x0005b886) clock_digital_separator_pane_cp10_ParamLimits

0x7a59,	// (0x0005b886) clock_digital_separator_pane_cp10

0x7a73,	// (0x0005b8a0) popup_clock_digital_window_cp02_t1_ParamLimits

0x7a73,	// (0x0005b8a0) popup_clock_digital_window_cp02_t1

0xc41b,	// (0x00060248) clock_digital_number_pane_cp10_g1

0xc41b,	// (0x00060248) clock_digital_number_pane_cp10_g2

0x0001,

0xf777,	// (0x000635a4) clock_digital_number_pane_cp10_g

0xc41b,	// (0x00060248) clock_digital_separator_pane_cp10_g1

0xc41b,	// (0x00060248) clock_digital_separator_pane_g2_cp10

0x13a0,	// (0x000551cd) navi_pane_vded_g4

0x13a9,	// (0x000551d6) navi_pane_vded_g5

0x13b2,	// (0x000551df) navi_pane_vded_t1

0xbdab,	// (0x0005fbd8) main_vded_pane

0x7ba0,	// (0x0005b9cd) main_vded_pane_g1

0x7baa,	// (0x0005b9d7) main_vded_pane_g2

0x7bb4,	// (0x0005b9e1) main_vded_pane_g3

0x0002,

0xf77c,	// (0x000635a9) main_vded_pane_g

0x7bbe,	// (0x0005b9eb) main_vded_pane_t1

0x7bcc,	// (0x0005b9f9) main_vded_pane_t2

0x0001,

0xf783,	// (0x000635b0) main_vded_pane_t

0x7bda,	// (0x0005ba07) vded_slider_pane

0x7be2,	// (0x0005ba0f) vded_video_pane

0xcb53,	// (0x00060980) vded_video_pane_g1

0x7bea,	// (0x0005ba17) vded_video_pane_g2

0x0998,	// (0x000547c5) vded_video_pane_g3

0x0002,

0xf788,	// (0x000635b5) vded_video_pane_g

0xcb5d,	// (0x0006098a) vded_slider_pane_g1

0x6acd,	// (0x0005a8fa) vded_slider_pane_g2

0xcb66,	// (0x00060993) vded_slider_pane_g3

0xcb6f,	// (0x0006099c) vded_slider_pane_g4

0xcb78,	// (0x000609a5) vded_slider_pane_g5

0x0004,

0xf78f,	// (0x000635bc) vded_slider_pane_g

0x76ab,	// (0x0005b4d8) mup3_rocker_pane_ParamLimits

0x76ab,	// (0x0005b4d8) mup3_rocker_pane

0x7bf3,	// (0x0005ba20) mup3_control_keys_pane_g1

0x7bfb,	// (0x0005ba28) mup3_control_keys_pane_g2

0x7c03,	// (0x0005ba30) mup3_control_keys_pane_g3

0x7c0b,	// (0x0005ba38) mup3_control_keys_pane_g4

0x0003,

0xf79a,	// (0x000635c7) mup3_control_keys_pane_g

0x39a1,	// (0x000577ce) popup_toolbar2_fixed_window_cp01_ParamLimits

0x39a1,	// (0x000577ce) popup_toolbar2_fixed_window_cp01

0x76df,	// (0x0005b50c) popup_toolbar2_fixed_window_cp02_ParamLimits

0x76df,	// (0x0005b50c) popup_toolbar2_fixed_window_cp02

0x1b2f,	// (0x0005595c) popup_call2_audio_second_window_t4_ParamLimits

0x1b2f,	// (0x0005595c) popup_call2_audio_second_window_t4

0x205d,	// (0x00055e8a) popup_call2_audio_first_window_t6_ParamLimits

0x205d,	// (0x00055e8a) popup_call2_audio_first_window_t6

0x229b,	// (0x000560c8) popup_call2_audio_out_window_t6_ParamLimits

0x229b,	// (0x000560c8) popup_call2_audio_out_window_t6

0xbdab,	// (0x0005fbd8) main_vitu_pane

0xc445,	// (0x00060272) aid_size_cell_itu_ParamLimits

0xc445,	// (0x00060272) aid_size_cell_itu

0xc445,	// (0x00060272) bg_popup_window_pane_cp08_ParamLimits

0xc445,	// (0x00060272) bg_popup_window_pane_cp08

0xc445,	// (0x00060272) field_vitu_entry_pane_ParamLimits

0xc445,	// (0x00060272) field_vitu_entry_pane

0xc445,	// (0x00060272) grid_vitu_function_pane_ParamLimits

0xc445,	// (0x00060272) grid_vitu_function_pane

0xc445,	// (0x00060272) grid_vitu_itu_pane_ParamLimits

0xc445,	// (0x00060272) grid_vitu_itu_pane

0xc445,	// (0x00060272) cell_vitu_itu_pane_ParamLimits

0xc445,	// (0x00060272) cell_vitu_itu_pane

0xc445,	// (0x00060272) cell_vitu_function_pane_ParamLimits

0xc445,	// (0x00060272) cell_vitu_function_pane

0xc445,	// (0x00060272) bg_popup_sub_pane_cp08_ParamLimits

0xc445,	// (0x00060272) bg_popup_sub_pane_cp08

0x09b2,	// (0x000547df) field_vitu_entry_pane_t1_ParamLimits

0x09b2,	// (0x000547df) field_vitu_entry_pane_t1

0xcb81,	// (0x000609ae) field_vitu_entry_pane_t2_ParamLimits

0xcb81,	// (0x000609ae) field_vitu_entry_pane_t2

0x0001,

0xf7a3,	// (0x000635d0) field_vitu_entry_pane_t_ParamLimits

0xf7a3,	// (0x000635d0) field_vitu_entry_pane_t

0x6b82,	// (0x0005a9af) bg_button_pane_cp05_ParamLimits

0x6b82,	// (0x0005a9af) bg_button_pane_cp05

0xcb9e,	// (0x000609cb) cell_vitu_itu_pane_g1

0x2843,	// (0x00056670) cell_vitu_itu_pane_t1_ParamLimits

0x2843,	// (0x00056670) cell_vitu_itu_pane_t1

0x2843,	// (0x00056670) cell_vitu_itu_pane_t2_ParamLimits

0x2843,	// (0x00056670) cell_vitu_itu_pane_t2

0x0002,

0xf7a8,	// (0x000635d5) cell_vitu_itu_pane_t_ParamLimits

0xf7a8,	// (0x000635d5) cell_vitu_itu_pane_t

0xbd26,	// (0x0005fb53) bg_button_pane_cp07

0x0998,	// (0x000547c5) cell_vitu_function_pane_g1

0xc4ac,	// (0x000602d9) main_calc_pane_g1

0x37c8,	// (0x000575f5) aid_visual_content_pane

0xbdab,	// (0x0005fbd8) main_vradio_pane

0x073e,	// (0x0005456b) main_vradio_pane_g1_ParamLimits

0x073e,	// (0x0005456b) main_vradio_pane_g1

0x074c,	// (0x00054579) main_vradio_pane_g2_ParamLimits

0x074c,	// (0x00054579) main_vradio_pane_g2

0x0001,

0xf7af,	// (0x000635dc) main_vradio_pane_g_ParamLimits

0xf7af,	// (0x000635dc) main_vradio_pane_g

0x09b2,	// (0x000547df) main_vradio_pane_t1_ParamLimits

0x09b2,	// (0x000547df) main_vradio_pane_t1

0x09b2,	// (0x000547df) main_vradio_pane_t2_ParamLimits

0x09b2,	// (0x000547df) main_vradio_pane_t2

0x096a,	// (0x00054797) main_vradio_pane_t3_ParamLimits

0x096a,	// (0x00054797) main_vradio_pane_t3

0x0002,

0xf7b4,	// (0x000635e1) main_vradio_pane_t_ParamLimits

0xf7b4,	// (0x000635e1) main_vradio_pane_t

0xc445,	// (0x00060272) vradio_rocker_control_pane_ParamLimits

0xc445,	// (0x00060272) vradio_rocker_control_pane

0xc445,	// (0x00060272) vradio_station_info_pane_ParamLimits

0xc445,	// (0x00060272) vradio_station_info_pane

0xc445,	// (0x00060272) vradio_frequency_info_pane_ParamLimits

0xc445,	// (0x00060272) vradio_frequency_info_pane

0x0998,	// (0x000547c5) vradio_station_info_pane_g1

0x2843,	// (0x00056670) vradio_station_info_pane_t1_ParamLimits

0x2843,	// (0x00056670) vradio_station_info_pane_t1

0x096a,	// (0x00054797) vradio_station_info_pane_t2_ParamLimits

0x096a,	// (0x00054797) vradio_station_info_pane_t2

0x0001,

0xf7bb,	// (0x000635e8) vradio_station_info_pane_t_ParamLimits

0xf7bb,	// (0x000635e8) vradio_station_info_pane_t

0xbd26,	// (0x0005fb53) vradio_tuning_pane

0x7c1b,	// (0x0005ba48) vradio_rocker_control_pane_g1

0xcbba,	// (0x000609e7) vradio_rocker_control_pane_g2

0x7c25,	// (0x0005ba52) vradio_rocker_control_pane_g3

0x7c2f,	// (0x0005ba5c) vradio_rocker_control_pane_g4

0x7c39,	// (0x0005ba66) vradio_rocker_control_pane_g5

0x0004,

0xf7c0,	// (0x000635ed) vradio_rocker_control_pane_g

0x0998,	// (0x000547c5) vradio_frequency_info_pane_g1

0x09b2,	// (0x000547df) vradio_frequency_info_pane_t1_ParamLimits

0x09b2,	// (0x000547df) vradio_frequency_info_pane_t1

0x7c43,	// (0x0005ba70) vradio_tuning_pane_g1

0x7c50,	// (0x0005ba7d) vradio_tuning_pane_t1

0xbd5c,	// (0x0005fb89) area_side_right_pane_ParamLimits

0xbd5c,	// (0x0005fb89) area_side_right_pane

0x268b,	// (0x000564b8) status_small_pane_g1

0x2693,	// (0x000564c0) status_small_pane_g2

0x269c,	// (0x000564c9) status_small_pane_g3

0x26a5,	// (0x000564d2) status_small_pane_g4

0x0003,

0xf58c,	// (0x000633b9) status_small_pane_g

0x26ae,	// (0x000564db) status_small_pane_t1

0xbdab,	// (0x0005fbd8) main_video3_pane

0xcbc2,	// (0x000609ef) cams_zoom_vslider_pane

0xcbca,	// (0x000609f7) image3_wide_pane_ParamLimits

0xcbca,	// (0x000609f7) image3_wide_pane

0xcbe4,	// (0x00060a11) image3_wide_small_pane

0xcbf0,	// (0x00060a1d) main_video3_pane_g1_ParamLimits

0xcbf0,	// (0x00060a1d) main_video3_pane_g1

0xcc0c,	// (0x00060a39) main_video3_pane_g2_ParamLimits

0xcc0c,	// (0x00060a39) main_video3_pane_g2

0x0001,

0xf7cb,	// (0x000635f8) main_video3_pane_g_ParamLimits

0xf7cb,	// (0x000635f8) main_video3_pane_g

0xcc28,	// (0x00060a55) main_video3_pane_t1_ParamLimits

0xcc28,	// (0x00060a55) main_video3_pane_t1

0xcc53,	// (0x00060a80) main_video3_pane_t2_ParamLimits

0xcc53,	// (0x00060a80) main_video3_pane_t2

0xcc7e,	// (0x00060aab) main_video3_pane_t3_ParamLimits

0xcc7e,	// (0x00060aab) main_video3_pane_t3

0x0002,

0xf7d0,	// (0x000635fd) main_video3_pane_t_ParamLimits

0xf7d0,	// (0x000635fd) main_video3_pane_t

0xccab,	// (0x00060ad8) cams_zoom_vslider_pane_g1

0xccb4,	// (0x00060ae1) cams_zoom_vslider_pane_g2

0x0001,

0xf7d7,	// (0x00063604) cams_zoom_vslider_pane_g

0xccbc,	// (0x00060ae9) small_slider_vertical_pane

0x0998,	// (0x000547c5) small_slider_vertical_pane_g1

0x0998,	// (0x000547c5) small_slider_vertical_pane_g2

0xccc4,	// (0x00060af1) small_slider_vertical_pane_g3

0x0002,

0xf7dc,	// (0x00063609) small_slider_vertical_pane_g

0xbdab,	// (0x0005fbd8) main_hwr_training_pane

0xcccd,	// (0x00060afa) hwr_training_instruct_pane_ParamLimits

0xcccd,	// (0x00060afa) hwr_training_instruct_pane

0x7c5f,	// (0x0005ba8c) hwr_training_navi_pane_ParamLimits

0x7c5f,	// (0x0005ba8c) hwr_training_navi_pane

0x7c7e,	// (0x0005baab) hwr_training_write_pane_ParamLimits

0x7c7e,	// (0x0005baab) hwr_training_write_pane

0xbd26,	// (0x0005fb53) bg_frame_shadow_pane

0xcd04,	// (0x00060b31) hwr_training_write_pane_g1

0xcd0c,	// (0x00060b39) hwr_training_write_pane_g2

0xcd14,	// (0x00060b41) hwr_training_write_pane_g3

0xcd1c,	// (0x00060b49) hwr_training_write_pane_g4

0xcd24,	// (0x00060b51) hwr_training_write_pane_g5

0xcd2c,	// (0x00060b59) hwr_training_write_pane_g6

0xcd34,	// (0x00060b61) hwr_training_write_pane_g7

0x0006,

0xf7e3,	// (0x00063610) hwr_training_write_pane_g

0xcd3c,	// (0x00060b69) hwr_training_navi_pane_g1_ParamLimits

0xcd3c,	// (0x00060b69) hwr_training_navi_pane_g1

0xcd4e,	// (0x00060b7b) hwr_training_navi_pane_g2_ParamLimits

0xcd4e,	// (0x00060b7b) hwr_training_navi_pane_g2

0xcd60,	// (0x00060b8d) hwr_training_navi_pane_g3_ParamLimits

0xcd60,	// (0x00060b8d) hwr_training_navi_pane_g3

0xcd70,	// (0x00060b9d) hwr_training_navi_pane_g4_ParamLimits

0xcd70,	// (0x00060b9d) hwr_training_navi_pane_g4

0x0004,

0xf7f2,	// (0x0006361f) hwr_training_navi_pane_g_ParamLimits

0xf7f2,	// (0x0006361f) hwr_training_navi_pane_g

0xcd7d,	// (0x00060baa) hwr_training_navi_pane_t1

0x7cc6,	// (0x0005baf3) list_single_hwr_training_instruct_pane_ParamLimits

0x7cc6,	// (0x0005baf3) list_single_hwr_training_instruct_pane

0xcd8b,	// (0x00060bb8) list_single_hwr_training_instruct_pane_t1

0x6cdc,	// (0x0005ab09) bg_frame_shadow_pane_g1

0xcd9a,	// (0x00060bc7) bg_frame_shadow_pane_g2

0xcda2,	// (0x00060bcf) bg_frame_shadow_pane_g3

0xcdaa,	// (0x00060bd7) bg_frame_shadow_pane_g4

0xcdb2,	// (0x00060bdf) bg_frame_shadow_pane_g5

0xcdba,	// (0x00060be7) bg_frame_shadow_pane_g6

0xcdc2,	// (0x00060bef) bg_frame_shadow_pane_g7

0x085f,	// (0x0005468c) bg_frame_shadow_pane_g8

0x0007,

0xf7fd,	// (0x0006362a) bg_frame_shadow_pane_g

0xbdab,	// (0x0005fbd8) main_video_tele_dialer_pane

0x7cdb,	// (0x0005bb08) aid_size_cell_video_keypad_ParamLimits

0x7cdb,	// (0x0005bb08) aid_size_cell_video_keypad

0x7cf5,	// (0x0005bb22) grid_video_dialer_keypad_pane_ParamLimits

0x7cf5,	// (0x0005bb22) grid_video_dialer_keypad_pane

0x7d41,	// (0x0005bb6e) video_down_pane_cp_ParamLimits

0x7d41,	// (0x0005bb6e) video_down_pane_cp

0x7d73,	// (0x0005bba0) cell_video_dialer_keypad_pane_ParamLimits

0x7d73,	// (0x0005bba0) cell_video_dialer_keypad_pane

0xcdca,	// (0x00060bf7) bg_button_pane_cp08_ParamLimits

0xcdca,	// (0x00060bf7) bg_button_pane_cp08

0x7d95,	// (0x0005bbc2) cell_video_dialer_keypad_pane_g1_ParamLimits

0x7d95,	// (0x0005bbc2) cell_video_dialer_keypad_pane_g1

0x7695,	// (0x0005b4c2) mup3_rocker2_pane_ParamLimits

0x7695,	// (0x0005b4c2) mup3_rocker2_pane

0x0998,	// (0x000547c5) mup3_rocker2_pane_g1

0x64d4,	// (0x0005a301) main_dialer2_pane

0xbdab,	// (0x0005fbd8) main_mp4_pane

0xcdf4,	// (0x00060c21) main_mp4_pane_g1_ParamLimits

0xcdf4,	// (0x00060c21) main_mp4_pane_g1

0xcdf4,	// (0x00060c21) main_mp4_pane_g2_ParamLimits

0xcdf4,	// (0x00060c21) main_mp4_pane_g2

0x7dcc,	// (0x0005bbf9) main_mp4_pane_g3_ParamLimits

0x7dcc,	// (0x0005bbf9) main_mp4_pane_g3

0xce02,	// (0x00060c2f) main_mp4_pane_g4_ParamLimits

0xce02,	// (0x00060c2f) main_mp4_pane_g4

0xce30,	// (0x00060c5d) main_mp4_pane_g5_ParamLimits

0xce30,	// (0x00060c5d) main_mp4_pane_g5

0x0007,

0xf81d,	// (0x0006364a) main_mp4_pane_g_ParamLimits

0xf81d,	// (0x0006364a) main_mp4_pane_g

0xcea4,	// (0x00060cd1) main_mp4_pane_t1_ParamLimits

0xcea4,	// (0x00060cd1) main_mp4_pane_t1

0xcf00,	// (0x00060d2d) main_mp4_pane_t2_ParamLimits

0xcf00,	// (0x00060d2d) main_mp4_pane_t2

0xcf52,	// (0x00060d7f) main_mp4_pane_t3_ParamLimits

0xcf52,	// (0x00060d7f) main_mp4_pane_t3

0xcf78,	// (0x00060da5) main_mp4_pane_t4_ParamLimits

0xcf78,	// (0x00060da5) main_mp4_pane_t4

0x0003,

0xf82e,	// (0x0006365b) main_mp4_pane_t_ParamLimits

0xf82e,	// (0x0006365b) main_mp4_pane_t

0xcfbc,	// (0x00060de9) mp4_progress_pane_ParamLimits

0xcfbc,	// (0x00060de9) mp4_progress_pane

0xd006,	// (0x00060e33) mp4_rocker_pane_ParamLimits

0xd006,	// (0x00060e33) mp4_rocker_pane

0xd02e,	// (0x00060e5b) mp4_progress_pane_t1

0xd047,	// (0x00060e74) mp4_progress_pane_t2

0x0001,

0xf837,	// (0x00063664) mp4_progress_pane_t

0xd060,	// (0x00060e8d) mup_progress_pane_cp04

0xc713,	// (0x00060540) mp4_rocker_pane_g1

0x7e08,	// (0x0005bc35) aid_cell_size_keypad2_ParamLimits

0x7e08,	// (0x0005bc35) aid_cell_size_keypad2

0x7e1e,	// (0x0005bc4b) dialer2_ne_pane_ParamLimits

0x7e1e,	// (0x0005bc4b) dialer2_ne_pane

0x7e38,	// (0x0005bc65) grid_dialer2_keypad_pane_ParamLimits

0x7e38,	// (0x0005bc65) grid_dialer2_keypad_pane

0x6b82,	// (0x0005a9af) bg_popup_call_pane_cp07_ParamLimits

0x6b82,	// (0x0005a9af) bg_popup_call_pane_cp07

0x7e54,	// (0x0005bc81) dialer2_ne_pane_t1_ParamLimits

0x7e54,	// (0x0005bc81) dialer2_ne_pane_t1

0x7e8f,	// (0x0005bcbc) cell_dialer2_keypad_pane_ParamLimits

0x7e8f,	// (0x0005bcbc) cell_dialer2_keypad_pane

0xd085,	// (0x00060eb2) bg_button_pane_pane_cp04_ParamLimits

0xd085,	// (0x00060eb2) bg_button_pane_pane_cp04

0x7eb1,	// (0x0005bcde) cell_dialer2_keypad_pane_g1_ParamLimits

0x7eb1,	// (0x0005bcde) cell_dialer2_keypad_pane_g1

0x4529,	// (0x00058356) aid_placing_vt_set_content_ParamLimits

0x4529,	// (0x00058356) aid_placing_vt_set_content

0x4551,	// (0x0005837e) aid_placing_vt_set_title_ParamLimits

0x4551,	// (0x0005837e) aid_placing_vt_set_title

0xbdab,	// (0x0005fbd8) main_image3_pane

0x7f77,	// (0x0005bda4) area_side_right_pane_cp01_ParamLimits

0x7f77,	// (0x0005bda4) area_side_right_pane_cp01

0xcdf4,	// (0x00060c21) main_image3_pane_g1_ParamLimits

0xcdf4,	// (0x00060c21) main_image3_pane_g1

0x7f8e,	// (0x0005bdbb) main_image3_pane_g2_ParamLimits

0x7f8e,	// (0x0005bdbb) main_image3_pane_g2

0x7fb6,	// (0x0005bde3) main_image3_pane_g3_ParamLimits

0x7fb6,	// (0x0005bde3) main_image3_pane_g3

0x7fe0,	// (0x0005be0d) main_image3_pane_g4_ParamLimits

0x7fe0,	// (0x0005be0d) main_image3_pane_g4

0x0003,

0xf846,	// (0x00063673) main_image3_pane_g_ParamLimits

0xf846,	// (0x00063673) main_image3_pane_g

0x800a,	// (0x0005be37) main_image3_pane_t1_ParamLimits

0x800a,	// (0x0005be37) main_image3_pane_t1

0x8062,	// (0x0005be8f) main_image3_pane_t2_ParamLimits

0x8062,	// (0x0005be8f) main_image3_pane_t2

0x80b4,	// (0x0005bee1) main_image3_pane_t3_ParamLimits

0x80b4,	// (0x0005bee1) main_image3_pane_t3

0x0003,

0xf84f,	// (0x0006367c) main_image3_pane_t_ParamLimits

0xf84f,	// (0x0006367c) main_image3_pane_t

0xc445,	// (0x00060272) grid_sctrl_middle_pane_cp01_ParamLimits

0xc445,	// (0x00060272) grid_sctrl_middle_pane_cp01

0x813c,	// (0x0005bf69) cell_sctrl_middle_pane_cp01_ParamLimits

0x813c,	// (0x0005bf69) cell_sctrl_middle_pane_cp01

0x8159,	// (0x0005bf86) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x8159,	// (0x0005bf86) cell_sctrl_middle_pane_cp01_g1

0xbdab,	// (0x0005fbd8) main_call4_pane

0x816f,	// (0x0005bf9c) aid_size_button_call4_ParamLimits

0x816f,	// (0x0005bf9c) aid_size_button_call4

0x81a2,	// (0x0005bfcf) call4_windows_pane_ParamLimits

0x81a2,	// (0x0005bfcf) call4_windows_pane

0x81c1,	// (0x0005bfee) grid_call4_button_pane_ParamLimits

0x81c1,	// (0x0005bfee) grid_call4_button_pane

0x81f4,	// (0x0005c021) call4_windows_conf_pane

0x820b,	// (0x0005c038) popup_call4_audio_first_window_ParamLimits

0x820b,	// (0x0005c038) popup_call4_audio_first_window

0x825b,	// (0x0005c088) popup_call4_audio_second_window_ParamLimits

0x825b,	// (0x0005c088) popup_call4_audio_second_window

0x8272,	// (0x0005c09f) popup_call4_audio_wait_window_ParamLimits

0x8272,	// (0x0005c09f) popup_call4_audio_wait_window

0x8280,	// (0x0005c0ad) cell_call4_button_pane_ParamLimits

0x8280,	// (0x0005c0ad) cell_call4_button_pane

0x82a5,	// (0x0005c0d2) bg_button_pane_cp09_ParamLimits

0x82a5,	// (0x0005c0d2) bg_button_pane_cp09

0x82b1,	// (0x0005c0de) cell_call4_button_pane_g1_ParamLimits

0x82b1,	// (0x0005c0de) cell_call4_button_pane_g1

0x82d7,	// (0x0005c104) cell_call4_button_pane_t1_ParamLimits

0x82d7,	// (0x0005c104) cell_call4_button_pane_t1

0xd0cb,	// (0x00060ef8) popup_call4_audio_conf_window_ParamLimits

0xd0cb,	// (0x00060ef8) popup_call4_audio_conf_window

0x76f5,	// (0x0005b522) mup3_progress_pane_t1_ParamLimits

0x7714,	// (0x0005b541) mup3_progress_pane_t2_ParamLimits

0xc891,	// (0x000606be) mup3_progress_pane_t3_ParamLimits

0xf724,	// (0x00063551) mup3_progress_pane_t_ParamLimits

0xc8ae,	// (0x000606db) mup_progress_pane_cp03_ParamLimits

0x7c13,	// (0x0005ba40) mup3_control_keys_pane_g4_copy1

0xcfea,	// (0x00060e17) mp4_rocker2_pane_ParamLimits

0xcfea,	// (0x00060e17) mp4_rocker2_pane

0xd0df,	// (0x00060f0c) mp4_rocker2_pane_g1

0xd0e7,	// (0x00060f14) mp4_rocker2_pane_g2

0xee79,	// (0x00062ca6) mp4_rocker2_pane_g3

0xee81,	// (0x00062cae) mp4_rocker2_pane_g4

0xee89,	// (0x00062cb6) mp4_rocker2_pane_g5

0x0004,

0xf858,	// (0x00063685) mp4_rocker2_pane_g

0xbdab,	// (0x0005fbd8) main_camera4_pane

0xbdab,	// (0x0005fbd8) main_video4_pane

0x7d0f,	// (0x0005bb3c) main_video_tele_dialer_pane_t1_ParamLimits

0x7d0f,	// (0x0005bb3c) main_video_tele_dialer_pane_t1

0x7d28,	// (0x0005bb55) main_video_tele_dialer_pane_t2_ParamLimits

0x7d28,	// (0x0005bb55) main_video_tele_dialer_pane_t2

0x0001,

0xf80e,	// (0x0006363b) main_video_tele_dialer_pane_t_ParamLimits

0xf80e,	// (0x0006363b) main_video_tele_dialer_pane_t

0x8315,	// (0x0005c142) cam4_autofocus_pane_ParamLimits

0x8315,	// (0x0005c142) cam4_autofocus_pane

0x832b,	// (0x0005c158) cam4_image_uncrop_pane_ParamLimits

0x832b,	// (0x0005c158) cam4_image_uncrop_pane

0x8345,	// (0x0005c172) cam4_indicators_pane_ParamLimits

0x8345,	// (0x0005c172) cam4_indicators_pane

0x8370,	// (0x0005c19d) main_camera4_pane_g1_ParamLimits

0x8370,	// (0x0005c19d) main_camera4_pane_g1

0x8382,	// (0x0005c1af) main_camera4_pane_g2_ParamLimits

0x8382,	// (0x0005c1af) main_camera4_pane_g2

0x8395,	// (0x0005c1c2) main_camera4_pane_g3_ParamLimits

0x8395,	// (0x0005c1c2) main_camera4_pane_g3

0x83a8,	// (0x0005c1d5) main_camera4_pane_g4_ParamLimits

0x83a8,	// (0x0005c1d5) main_camera4_pane_g4

0x83bb,	// (0x0005c1e8) main_camera4_pane_g5_ParamLimits

0x83bb,	// (0x0005c1e8) main_camera4_pane_g5

0x0005,

0xf863,	// (0x00063690) main_camera4_pane_g_ParamLimits

0xf863,	// (0x00063690) main_camera4_pane_g

0x83df,	// (0x0005c20c) main_camera4_pane_t1_ParamLimits

0x83df,	// (0x0005c20c) main_camera4_pane_t1

0xd0ef,	// (0x00060f1c) bg_tb_trans_pane_cp06

0xeeb5,	// (0x00062ce2) cam4_indicators_pane_g1

0xeec6,	// (0x00062cf3) cam4_indicators_pane_g2

0x0002,

0xf87e,	// (0x000636ab) cam4_indicators_pane_g

0xeee4,	// (0x00062d11) cam4_indicators_pane_t1

0x8443,	// (0x0005c270) main_video4_pane_g1_ParamLimits

0x8443,	// (0x0005c270) main_video4_pane_g1

0x8452,	// (0x0005c27f) main_video4_pane_g2_ParamLimits

0x8452,	// (0x0005c27f) main_video4_pane_g2

0x8461,	// (0x0005c28e) main_video4_pane_g3_ParamLimits

0x8461,	// (0x0005c28e) main_video4_pane_g3

0x8470,	// (0x0005c29d) main_video4_pane_g4_ParamLimits

0x8470,	// (0x0005c29d) main_video4_pane_g4

0x0004,

0xf885,	// (0x000636b2) main_video4_pane_g_ParamLimits

0xf885,	// (0x000636b2) main_video4_pane_g

0x848e,	// (0x0005c2bb) vid4_indicators_pane_ParamLimits

0x848e,	// (0x0005c2bb) vid4_indicators_pane

0x84bc,	// (0x0005c2e9) video4_image_uncrop_cif_pane_ParamLimits

0x84bc,	// (0x0005c2e9) video4_image_uncrop_cif_pane

0x84d6,	// (0x0005c303) video4_image_uncrop_nhd_pane_ParamLimits

0x84d6,	// (0x0005c303) video4_image_uncrop_nhd_pane

0x832b,	// (0x0005c158) video4_image_uncrop_vga_pane_ParamLimits

0x832b,	// (0x0005c158) video4_image_uncrop_vga_pane

0xbd9d,	// (0x0005fbca) bg_tb_trans_pane_cp07

0xef10,	// (0x00062d3d) vid4_indicators_pane_g1

0xef24,	// (0x00062d51) vid4_indicators_pane_g2

0xef38,	// (0x00062d65) vid4_indicators_pane_g3

0x0004,

0xf890,	// (0x000636bd) vid4_indicators_pane_g

0xef67,	// (0x00062d94) vid4_indicators_pane_t1

0x84ea,	// (0x0005c317) cam4_autofocus_pane_g1

0x84f2,	// (0x0005c31f) cam4_autofocus_pane_g2

0x84fa,	// (0x0005c327) cam4_autofocus_pane_g3

0x0002,

0xf89b,	// (0x000636c8) cam4_autofocus_pane_g

0x8502,	// (0x0005c32f) cam4_autofocus_pane_g3_copy1

0x7d57,	// (0x0005bb84) video_down_pane_cp_t1

0x7d65,	// (0x0005bb92) video_down_pane_cp_t2

0x0001,

0xf813,	// (0x00063640) video_down_pane_cp_t

0xbd9d,	// (0x0005fbca) popup_vitu2_window_ParamLimits

0xbd9d,	// (0x0005fbca) popup_vitu2_window

0x850a,	// (0x0005c337) aid_size_cell2_itu2_ParamLimits

0x850a,	// (0x0005c337) aid_size_cell2_itu2

0x852a,	// (0x0005c357) aid_size_cell_itu2_ParamLimits

0x852a,	// (0x0005c357) aid_size_cell_itu2

0x8577,	// (0x0005c3a4) bg_popup_window_pane_cp09_ParamLimits

0x8577,	// (0x0005c3a4) bg_popup_window_pane_cp09

0x8585,	// (0x0005c3b2) field_vitu2_entry_pane_ParamLimits

0x8585,	// (0x0005c3b2) field_vitu2_entry_pane

0x85a8,	// (0x0005c3d5) grid_vitu2_function_pane_ParamLimits

0x85a8,	// (0x0005c3d5) grid_vitu2_function_pane

0x85f3,	// (0x0005c420) grid_vitu2_itu_pane_ParamLimits

0x85f3,	// (0x0005c420) grid_vitu2_itu_pane

0x8681,	// (0x0005c4ae) cell_vitu2_itu_pane_ParamLimits

0x8681,	// (0x0005c4ae) cell_vitu2_itu_pane

0x86ad,	// (0x0005c4da) cell_vitu2_function_pane_ParamLimits

0x86ad,	// (0x0005c4da) cell_vitu2_function_pane

0xd0fd,	// (0x00060f2a) bg_popup_call_pane_cp08_ParamLimits

0xd0fd,	// (0x00060f2a) bg_popup_call_pane_cp08

0xd114,	// (0x00060f41) field_vitu2_entry_pane_g1

0xd120,	// (0x00060f4d) field_vitu2_entry_pane_g2

0x0002,

0xf8a2,	// (0x000636cf) field_vitu2_entry_pane_g

0x86ec,	// (0x0005c519) field_vitu2_entry_pane_t1_ParamLimits

0x86ec,	// (0x0005c519) field_vitu2_entry_pane_t1

0xd12c,	// (0x00060f59) field_vitu2_entry_pane_t2_ParamLimits

0xd12c,	// (0x00060f59) field_vitu2_entry_pane_t2

0x0001,

0xf8a9,	// (0x000636d6) field_vitu2_entry_pane_t_ParamLimits

0xf8a9,	// (0x000636d6) field_vitu2_entry_pane_t

0x871d,	// (0x0005c54a) bg_button_pane_cp010_ParamLimits

0x871d,	// (0x0005c54a) bg_button_pane_cp010

0x872b,	// (0x0005c558) cell_vitu2_itu_pane_g1

0x8751,	// (0x0005c57e) cell_vitu2_itu_pane_t1_ParamLimits

0x8751,	// (0x0005c57e) cell_vitu2_itu_pane_t1

0x36a0,	// (0x000574cd) cell_vitu2_itu_pane_t2_ParamLimits

0x36a0,	// (0x000574cd) cell_vitu2_itu_pane_t2

0x0002,

0xf8b3,	// (0x000636e0) cell_vitu2_itu_pane_t_ParamLimits

0xf8b3,	// (0x000636e0) cell_vitu2_itu_pane_t

0xbd9d,	// (0x0005fbca) bg_button_pane_cp011

0x87af,	// (0x0005c5dc) cell_vitu2_function_pane_g1

0xbdab,	// (0x0005fbd8) main_myfav_hc_pane

0x8104,	// (0x0005bf31) popup_image3_note_pane_ParamLimits

0x8104,	// (0x0005bf31) popup_image3_note_pane

0x8120,	// (0x0005bf4d) popup_image3_tool_bar_pane_ParamLimits

0x8120,	// (0x0005bf4d) popup_image3_tool_bar_pane

0x372e,	// (0x0005755b) cell_vitu2_itu_pane_t3_ParamLimits

0x372e,	// (0x0005755b) cell_vitu2_itu_pane_t3

0xbd26,	// (0x0005fb53) bg_popup_trans_pane

0xd151,	// (0x00060f7e) grid_image3_tool_bar_pane

0xd15b,	// (0x00060f88) bg_popup_trans_pane_g1

0x0bbd,	// (0x000549ea) bg_popup_trans_pane_g2

0xd163,	// (0x00060f90) bg_popup_trans_pane_g3

0xd16b,	// (0x00060f98) bg_popup_trans_pane_g4

0xd173,	// (0x00060fa0) bg_popup_trans_pane_g5

0xd17b,	// (0x00060fa8) bg_popup_trans_pane_g6

0xd183,	// (0x00060fb0) bg_popup_trans_pane_g7

0xd18b,	// (0x00060fb8) bg_popup_trans_pane_g8

0x0b9d,	// (0x000549ca) bg_popup_trans_pane_g9

0x0008,

0xf8ba,	// (0x000636e7) bg_popup_trans_pane_g

0xd193,	// (0x00060fc0) cell_image3_tool_bar_pane_ParamLimits

0xd193,	// (0x00060fc0) cell_image3_tool_bar_pane

0x0998,	// (0x000547c5) cell_image3_tool_bar_pane_g1

0xbd26,	// (0x0005fb53) bg_popup_trans_pane_cp1

0xd1a7,	// (0x00060fd4) popup_image3_note_pane_t1

0xd1b5,	// (0x00060fe2) popup_image3_note_pane_t2

0xd1c3,	// (0x00060ff0) popup_image3_note_pane_t3

0x0002,

0xf8cd,	// (0x000636fa) popup_image3_note_pane_t

0xd1d1,	// (0x00060ffe) popup_image3_note_pane_t3_copy1

0x87c3,	// (0x0005c5f0) bg_myfav_hc_instruction_pane_ParamLimits

0x87c3,	// (0x0005c5f0) bg_myfav_hc_instruction_pane

0x87d7,	// (0x0005c604) cell_myfav_contact_pane_ParamLimits

0x87d7,	// (0x0005c604) cell_myfav_contact_pane

0x87f5,	// (0x0005c622) cell_myfav_contact_pane_cp1_ParamLimits

0x87f5,	// (0x0005c622) cell_myfav_contact_pane_cp1

0x880d,	// (0x0005c63a) cell_myfav_contact_pane_cp2_ParamLimits

0x880d,	// (0x0005c63a) cell_myfav_contact_pane_cp2

0x8825,	// (0x0005c652) cell_myfav_contact_pane_cp3_ParamLimits

0x8825,	// (0x0005c652) cell_myfav_contact_pane_cp3

0x883c,	// (0x0005c669) cell_myfav_contact_pane_cp4_ParamLimits

0x883c,	// (0x0005c669) cell_myfav_contact_pane_cp4

0x8854,	// (0x0005c681) cell_myfav_contact_pane_cp5_ParamLimits

0x8854,	// (0x0005c681) cell_myfav_contact_pane_cp5

0x8868,	// (0x0005c695) cell_myfav_contact_pane_cp6_ParamLimits

0x8868,	// (0x0005c695) cell_myfav_contact_pane_cp6

0x887e,	// (0x0005c6ab) cell_myfav_contact_pane_cp7_ParamLimits

0x887e,	// (0x0005c6ab) cell_myfav_contact_pane_cp7

0xd1df,	// (0x0006100c) listscroll_gen_pane_cp05

0x8898,	// (0x0005c6c5) main_myfav_hc_pane_g1_ParamLimits

0x8898,	// (0x0005c6c5) main_myfav_hc_pane_g1

0x88b2,	// (0x0005c6df) main_myfav_hc_pane_g2_ParamLimits

0x88b2,	// (0x0005c6df) main_myfav_hc_pane_g2

0x0002,

0xf8d4,	// (0x00063701) main_myfav_hc_pane_g_ParamLimits

0xf8d4,	// (0x00063701) main_myfav_hc_pane_g

0x88e4,	// (0x0005c711) main_myfav_hc_pane_t1_ParamLimits

0x88e4,	// (0x0005c711) main_myfav_hc_pane_t1

0xd1e8,	// (0x00061015) main_myfav_hc_pane_t2_ParamLimits

0xd1e8,	// (0x00061015) main_myfav_hc_pane_t2

0xd1fa,	// (0x00061027) main_myfav_hc_pane_t3_ParamLimits

0xd1fa,	// (0x00061027) main_myfav_hc_pane_t3

0x88fb,	// (0x0005c728) main_myfav_hc_pane_t4_ParamLimits

0x88fb,	// (0x0005c728) main_myfav_hc_pane_t4

0x0004,

0xf8db,	// (0x00063708) main_myfav_hc_pane_t_ParamLimits

0xf8db,	// (0x00063708) main_myfav_hc_pane_t

0x0998,	// (0x000547c5) bg_myfav_hc_instruction_pane_g1

0xd20c,	// (0x00061039) cell_myfav_contact_pane_g1_ParamLimits

0xd20c,	// (0x00061039) cell_myfav_contact_pane_g1

0xd20c,	// (0x00061039) cell_myfav_contact_pane_g2_ParamLimits

0xd20c,	// (0x00061039) cell_myfav_contact_pane_g2

0xd218,	// (0x00061045) cell_myfav_contact_pane_g3_ParamLimits

0xd218,	// (0x00061045) cell_myfav_contact_pane_g3

0x074c,	// (0x00054579) cell_myfav_contact_pane_g4_ParamLimits

0x074c,	// (0x00054579) cell_myfav_contact_pane_g4

0xd225,	// (0x00061052) cell_myfav_contact_pane_g5_ParamLimits

0xd225,	// (0x00061052) cell_myfav_contact_pane_g5

0x0004,

0xf8e6,	// (0x00063713) cell_myfav_contact_pane_g_ParamLimits

0xf8e6,	// (0x00063713) cell_myfav_contact_pane_g

0x88cc,	// (0x0005c6f9) main_myfav_hc_pane_g3_ParamLimits

0x88cc,	// (0x0005c6f9) main_myfav_hc_pane_g3

0x3903,	// (0x00057730) popup_adpt_find_window

0x8923,	// (0x0005c750) afind_page_pane_ParamLimits

0x8923,	// (0x0005c750) afind_page_pane

0x8938,	// (0x0005c765) aid_size_cell_afind_ParamLimits

0x8938,	// (0x0005c765) aid_size_cell_afind

0x8956,	// (0x0005c783) bg_popup_sub_pane_cp09_ParamLimits

0x8956,	// (0x0005c783) bg_popup_sub_pane_cp09

0x8963,	// (0x0005c790) find_pane_cp01_ParamLimits

0x8963,	// (0x0005c790) find_pane_cp01

0xd231,	// (0x0006105e) grid_afind_control_pane_ParamLimits

0xd231,	// (0x0006105e) grid_afind_control_pane

0x8970,	// (0x0005c79d) grid_afind_pane_ParamLimits

0x8970,	// (0x0005c79d) grid_afind_pane

0x8992,	// (0x0005c7bf) cell_afind_pane_ParamLimits

0x8992,	// (0x0005c7bf) cell_afind_pane

0x0998,	// (0x000547c5) afind_page_pane_g1

0x89f9,	// (0x0005c826) afind_page_pane_g2

0x8a02,	// (0x0005c82f) afind_page_pane_g3

0x0002,

0xf8f1,	// (0x0006371e) afind_page_pane_g

0x8a0b,	// (0x0005c838) afind_page_pane_t1

0xd245,	// (0x00061072) cell_afind_grid_control_pane_ParamLimits

0xd245,	// (0x00061072) cell_afind_grid_control_pane

0xd085,	// (0x00060eb2) bg_button_pane_cp69_ParamLimits

0xd085,	// (0x00060eb2) bg_button_pane_cp69

0x8a2b,	// (0x0005c858) cell_afind_pane_g1_ParamLimits

0x8a2b,	// (0x0005c858) cell_afind_pane_g1

0x8a38,	// (0x0005c865) cell_afind_pane_t1_ParamLimits

0x8a38,	// (0x0005c865) cell_afind_pane_t1

0x09a2,	// (0x000547cf) bg_button_pane_cp72

0xd254,	// (0x00061081) cell_afind_grid_control_pane_g1

0x5f41,	// (0x00059d6e) aid_image_placing_area_ParamLimits

0x5f41,	// (0x00059d6e) aid_image_placing_area

0x073e,	// (0x0005456b) field_vitu_entry_pane_g1_ParamLimits

0x073e,	// (0x0005456b) field_vitu_entry_pane_g1

0x073e,	// (0x0005456b) field_vitu_entry_pane_g2_ParamLimits

0x073e,	// (0x0005456b) field_vitu_entry_pane_g2

0x0001,

0xf201,	// (0x0006302e) field_vitu_entry_pane_g_ParamLimits

0xf201,	// (0x0006302e) field_vitu_entry_pane_g

0xcb9e,	// (0x000609cb) cell_vitu_itu_pane_g1_ParamLimits

0xcb81,	// (0x000609ae) cell_vitu_itu_pane_t3_ParamLimits

0xcb81,	// (0x000609ae) cell_vitu_itu_pane_t3

0xd02e,	// (0x00060e5b) mp4_progress_pane_t1_ParamLimits

0xd047,	// (0x00060e74) mp4_progress_pane_t2_ParamLimits

0xf837,	// (0x00063664) mp4_progress_pane_t_ParamLimits

0xd060,	// (0x00060e8d) mup_progress_pane_cp04_ParamLimits

0x890f,	// (0x0005c73c) main_myfav_hc_pane_t5_ParamLimits

0x890f,	// (0x0005c73c) main_myfav_hc_pane_t5

0xbd4c,	// (0x0005fb79) aid_zoom_text_primary

0x3903,	// (0x00057730) popup_adpt_find_window_ParamLimits

0xbd9d,	// (0x0005fbca) main_cam_set_pane

0x835c,	// (0x0005c189) cam4_zoom_pane_ParamLimits

0x835c,	// (0x0005c189) cam4_zoom_pane

0x8a4a,	// (0x0005c877) main_cam_set_pane_g1_ParamLimits

0x8a4a,	// (0x0005c877) main_cam_set_pane_g1

0x8a58,	// (0x0005c885) main_cam_set_pane_g2_ParamLimits

0x8a58,	// (0x0005c885) main_cam_set_pane_g2

0x0001,

0xf8f8,	// (0x00063725) main_cam_set_pane_g_ParamLimits

0xf8f8,	// (0x00063725) main_cam_set_pane_g

0x8a79,	// (0x0005c8a6) main_cam_set_pane_t1_ParamLimits

0x8a79,	// (0x0005c8a6) main_cam_set_pane_t1

0x8a94,	// (0x0005c8c1) main_cset_listscroll_pane_ParamLimits

0x8a94,	// (0x0005c8c1) main_cset_listscroll_pane

0x8aba,	// (0x0005c8e7) main_cset_slider_pane_ParamLimits

0x8aba,	// (0x0005c8e7) main_cset_slider_pane

0xd265,	// (0x00061092) main_cset_list_pane_ParamLimits

0xd265,	// (0x00061092) main_cset_list_pane

0xd275,	// (0x000610a2) scroll_pane_cp028

0x8ae0,	// (0x0005c90d) aid_area_touch_slider

0x8afc,	// (0x0005c929) cset_slider_pane

0x8b1f,	// (0x0005c94c) main_cset_slider_pane_g1

0x8b34,	// (0x0005c961) main_cset_slider_pane_g2

0x0011,

0xf8fd,	// (0x0006372a) main_cset_slider_pane_g

0xd2ae,	// (0x000610db) main_cset_slider_pane_t1

0x8bf0,	// (0x0005ca1d) main_cset_slider_pane_t2

0x8c0a,	// (0x0005ca37) main_cset_slider_pane_t3

0x8c24,	// (0x0005ca51) main_cset_slider_pane_t4

0x8c3e,	// (0x0005ca6b) main_cset_slider_pane_t5

0x8c58,	// (0x0005ca85) main_cset_slider_pane_t6

0x8c6d,	// (0x0005ca9a) main_cset_slider_pane_t7

0x000e,

0xf922,	// (0x0006374f) main_cset_slider_pane_t

0x8d71,	// (0x0005cb9e) cset_list_set_pane_ParamLimits

0x8d71,	// (0x0005cb9e) cset_list_set_pane

0xd348,	// (0x00061175) aid_position_infowindow_above

0xd350,	// (0x0006117d) aid_position_infowindow_below

0xd358,	// (0x00061185) cset_list_set_pane_g1_ParamLimits

0xd358,	// (0x00061185) cset_list_set_pane_g1

0xd364,	// (0x00061191) cset_list_set_pane_g3_ParamLimits

0xd364,	// (0x00061191) cset_list_set_pane_g3

0x0001,

0xf941,	// (0x0006376e) cset_list_set_pane_g_ParamLimits

0xf941,	// (0x0006376e) cset_list_set_pane_g

0xd373,	// (0x000611a0) cset_list_set_pane_t1_ParamLimits

0xd373,	// (0x000611a0) cset_list_set_pane_t1

0xc445,	// (0x00060272) list_highlight_pane_cp021_ParamLimits

0xc445,	// (0x00060272) list_highlight_pane_cp021

0x14f1,	// (0x0005531e) cset_slider_pane_g1

0x1503,	// (0x00055330) cset_slider_pane_g2

0x14fa,	// (0x00055327) cset_slider_pane_g3

0x0002,

0xf946,	// (0x00063773) cset_slider_pane_g

0xef7e,	// (0x00062dab) aid_area_touch_cam4_zoom

0xef86,	// (0x00062db3) cam4_zoom_cont_pane

0xef8e,	// (0x00062dbb) cam4_zoom_pane_g1

0xef96,	// (0x00062dc3) cam4_zoom_pane_g2

0x8d83,	// (0x0005cbb0) cam4_zoom_pane_g3

0x0002,

0xf94d,	// (0x0006377a) cam4_zoom_pane_g

0xef9e,	// (0x00062dcb) cam4_zoom_cont_pane_g1

0xefa7,	// (0x00062dd4) cam4_zoom_cont_pane_g2

0xefb0,	// (0x00062ddd) cam4_zoom_cont_pane_g3

0x0002,

0xf954,	// (0x00063781) cam4_zoom_cont_pane_g

0x818d,	// (0x0005bfba) call4_image_pane_ParamLimits

0x818d,	// (0x0005bfba) call4_image_pane

0x81f4,	// (0x0005c021) call4_windows_conf_pane_ParamLimits

0x8239,	// (0x0005c066) popup_call4_audio_in_window_ParamLimits

0x8239,	// (0x0005c066) popup_call4_audio_in_window

0xbd26,	// (0x0005fb53) bg_popup_call2_act_pane_cp02

0xd0c3,	// (0x00060ef0) call4_list_conf_pane

0x0998,	// (0x000547c5) call4_image_pane_g1

0x0998,	// (0x000547c5) call4_image_pane_g2

0x0001,

0xf3d8,	// (0x00063205) call4_image_pane_g

0xd388,	// (0x000611b5) list_single_graphic_popup_conf4_pane_ParamLimits

0xd388,	// (0x000611b5) list_single_graphic_popup_conf4_pane

0xbd26,	// (0x0005fb53) list_highlight_pane_cp022

0xd39b,	// (0x000611c8) list_single_graphic_popup_conf4_pane_g1

0x10e5,	// (0x00054f12) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf95b,	// (0x00063788) list_single_graphic_popup_conf4_pane_g

0xd3a3,	// (0x000611d0) list_single_graphic_popup_conf4_pane_t1

0x4675,	// (0x000584a2) popup_vtel_slider_window_ParamLimits

0x4675,	// (0x000584a2) popup_vtel_slider_window

0xd073,	// (0x00060ea0) dialer2_ne_pane_t2_ParamLimits

0xd073,	// (0x00060ea0) dialer2_ne_pane_t2

0x0001,

0xf83c,	// (0x00063669) dialer2_ne_pane_t_ParamLimits

0xf83c,	// (0x00063669) dialer2_ne_pane_t

0x6b82,	// (0x0005a9af) bg_popup_sub_pane_cp010_ParamLimits

0x6b82,	// (0x0005a9af) bg_popup_sub_pane_cp010

0x8d8b,	// (0x0005cbb8) popup_vtel_slider_window_g1_ParamLimits

0x8d8b,	// (0x0005cbb8) popup_vtel_slider_window_g1

0x8d9e,	// (0x0005cbcb) popup_vtel_slider_window_g2_ParamLimits

0x8d9e,	// (0x0005cbcb) popup_vtel_slider_window_g2

0x0003,

0xf960,	// (0x0006378d) popup_vtel_slider_window_g_ParamLimits

0xf960,	// (0x0006378d) popup_vtel_slider_window_g

0x8df4,	// (0x0005cc21) vtel_slider_pane_ParamLimits

0x8df4,	// (0x0005cc21) vtel_slider_pane

0x8e16,	// (0x0005cc43) vtel_slider_pane_g1_ParamLimits

0x8e16,	// (0x0005cc43) vtel_slider_pane_g1

0x8e2a,	// (0x0005cc57) vtel_slider_pane_g2_ParamLimits

0x8e2a,	// (0x0005cc57) vtel_slider_pane_g2

0x8e42,	// (0x0005cc6f) vtel_slider_pane_g3_ParamLimits

0x8e42,	// (0x0005cc6f) vtel_slider_pane_g3

0x8e16,	// (0x0005cc43) vtel_slider_pane_g4_ParamLimits

0x8e16,	// (0x0005cc43) vtel_slider_pane_g4

0x8e58,	// (0x0005cc85) vtel_slider_pane_g5_ParamLimits

0x8e58,	// (0x0005cc85) vtel_slider_pane_g5

0x0004,

0xf969,	// (0x00063796) vtel_slider_pane_g_ParamLimits

0xf969,	// (0x00063796) vtel_slider_pane_g

0xbd9d,	// (0x0005fbca) main_gallery2_pane

0x854a,	// (0x0005c377) aid_size_row_itut2_dropdow_list_ParamLimits

0x854a,	// (0x0005c377) aid_size_row_itut2_dropdow_list

0x85cd,	// (0x0005c3fa) grid_vitu2_function_top_pane_ParamLimits

0x85cd,	// (0x0005c3fa) grid_vitu2_function_top_pane

0x862f,	// (0x0005c45c) popup_vitu2_dropdown_list_window_ParamLimits

0x862f,	// (0x0005c45c) popup_vitu2_dropdown_list_window

0x8655,	// (0x0005c482) popup_vitu2_match_list_window

0x8e6e,	// (0x0005cc9b) cell_vitu2_function_top_pane_ParamLimits

0x8e6e,	// (0x0005cc9b) cell_vitu2_function_top_pane

0x8e88,	// (0x0005ccb5) cell_vitu2_function_top_pane_cp01_ParamLimits

0x8e88,	// (0x0005ccb5) cell_vitu2_function_top_pane_cp01

0x8ea4,	// (0x0005ccd1) cell_vitu2_function_top_wide_pane_ParamLimits

0x8ea4,	// (0x0005ccd1) cell_vitu2_function_top_wide_pane

0xbd9d,	// (0x0005fbca) bg_button_pane_cp012

0x8ec2,	// (0x0005ccef) cell_vitu2_function_top_pane_g1

0xefb9,	// (0x00062de6) bg_button_pane_cp013_ParamLimits

0xefb9,	// (0x00062de6) bg_button_pane_cp013

0x8ed6,	// (0x0005cd03) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x8ed6,	// (0x0005cd03) cell_vitu2_function_top_wide_pane_g1

0xbd9d,	// (0x0005fbca) bg_popup_sub_pane_cp20

0x8eee,	// (0x0005cd1b) list_vitu2_match_list_pane

0xd15b,	// (0x00060f88) bg_popup_sub_pane_cp20_g1

0xd163,	// (0x00060f90) bg_popup_sub_pane_cp20_g2

0x0bbd,	// (0x000549ea) bg_popup_sub_pane_cp20_g3

0xd16b,	// (0x00060f98) bg_popup_sub_pane_cp20_g4

0x0b9d,	// (0x000549ca) bg_popup_sub_pane_cp20_g5

0xd3b9,	// (0x000611e6) bg_popup_sub_pane_cp20_g6

0xd17b,	// (0x00060fa8) bg_popup_sub_pane_cp20_g7

0xd183,	// (0x00060fb0) bg_popup_sub_pane_cp20_g8

0xd18b,	// (0x00060fb8) bg_popup_sub_pane_cp20_g9

0x0008,

0xf974,	// (0x000637a1) bg_popup_sub_pane_cp20_g

0xefd5,	// (0x00062e02) list_vitu2_match_list_item_pane_ParamLimits

0xefd5,	// (0x00062e02) list_vitu2_match_list_item_pane

0xefe7,	// (0x00062e14) list_vitu2_match_list_item_pane_t1

0xbdab,	// (0x0005fbd8) bg_popup_sub_pane_cp21

0x0962,	// (0x0005478f) grid_vitu2_dropdown_list_pane

0x8f06,	// (0x0005cd33) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x8f06,	// (0x0005cd33) cell_vitu2_dropdown_list_char_pane

0x8f27,	// (0x0005cd54) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x8f27,	// (0x0005cd54) cell_vitu2_dropdown_list_ctrl_pane

0xd3c1,	// (0x000611ee) cell_vitu2_dropdown_list_char_pane_g1

0xd3ca,	// (0x000611f7) cell_vitu2_dropdown_list_char_pane_g2

0xd3d3,	// (0x00061200) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf987,	// (0x000637b4) cell_vitu2_dropdown_list_char_pane_g

0x8f51,	// (0x0005cd7e) cell_vitu2_dropdown_list_char_pane_t1

0x8f5f,	// (0x0005cd8c) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x8f5f,	// (0x0005cd8c) cell_vitu2_dropdown_list_ctrl_pane_g1

0x8f6f,	// (0x0005cd9c) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x8f6f,	// (0x0005cd9c) cell_vitu2_dropdown_list_ctrl_pane_g2

0x8f80,	// (0x0005cdad) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x8f80,	// (0x0005cdad) cell_vitu2_dropdown_list_ctrl_pane_g3

0x8f90,	// (0x0005cdbd) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x8f90,	// (0x0005cdbd) cell_vitu2_dropdown_list_ctrl_pane_g4

0xd0ef,	// (0x00060f1c) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xd0ef,	// (0x00060f1c) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf98e,	// (0x000637bb) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf98e,	// (0x000637bb) cell_vitu2_dropdown_list_ctrl_pane_g

0x8fac,	// (0x0005cdd9) aid_size_cell_gallery2_ParamLimits

0x8fac,	// (0x0005cdd9) aid_size_cell_gallery2

0x8fca,	// (0x0005cdf7) grid_gallery2_pane_ParamLimits

0x8fca,	// (0x0005cdf7) grid_gallery2_pane

0x8fe4,	// (0x0005ce11) scroll_pane_cp029_ParamLimits

0x8fe4,	// (0x0005ce11) scroll_pane_cp029

0x8ff5,	// (0x0005ce22) cell_gallery2_pane_ParamLimits

0x8ff5,	// (0x0005ce22) cell_gallery2_pane

0xd3dc,	// (0x00061209) cell_gallery2_pane_g2

0x9054,	// (0x0005ce81) cell_gallery2_pane_g3

0xd3e4,	// (0x00061211) cell_gallery2_pane_g4

0xd3ec,	// (0x00061219) cell_gallery2_pane_g5

0x0962,	// (0x0005478f) grid_highlight_pane_cp10

0x8655,	// (0x0005c482) popup_vitu2_match_list_window_ParamLimits

0x866a,	// (0x0005c497) popup_vitu2_query_window_ParamLimits

0x866a,	// (0x0005c497) popup_vitu2_query_window

0xbdab,	// (0x0005fbd8) bg_vitu2_candi_button_pane

0xd3c1,	// (0x000611ee) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd3ca,	// (0x000611f7) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd3d3,	// (0x00061200) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x905c,	// (0x0005ce89) bg_button_pane_cp015

0x906c,	// (0x0005ce99) bg_button_pane_cp016

0x907f,	// (0x0005ceac) bg_button_pane_cp017

0x26d0,	// (0x000564fd) bg_popup_sub_pane_cp22

0xd3f4,	// (0x00061221) popup_vitu2_query_window_g1

0x90c2,	// (0x0005ceef) popup_vitu2_query_window_g2

0x0002,

0xf999,	// (0x000637c6) popup_vitu2_query_window_g

0x90e1,	// (0x0005cf0e) popup_vitu2_query_window_t1_ParamLimits

0x90e1,	// (0x0005cf0e) popup_vitu2_query_window_t1

0x9116,	// (0x0005cf43) popup_vitu2_query_window_t2_ParamLimits

0x9116,	// (0x0005cf43) popup_vitu2_query_window_t2

0x9128,	// (0x0005cf55) popup_vitu2_query_window_t3_ParamLimits

0x9128,	// (0x0005cf55) popup_vitu2_query_window_t3

0x9150,	// (0x0005cf7d) popup_vitu2_query_window_t4_ParamLimits

0x9150,	// (0x0005cf7d) popup_vitu2_query_window_t4

0x9171,	// (0x0005cf9e) popup_vitu2_query_window_t5_ParamLimits

0x9171,	// (0x0005cf9e) popup_vitu2_query_window_t5

0x0006,

0xf9a0,	// (0x000637cd) popup_vitu2_query_window_t_ParamLimits

0xf9a0,	// (0x000637cd) popup_vitu2_query_window_t

0xd25d,	// (0x0006108a) main_cset_text_pane

0x8ae0,	// (0x0005c90d) aid_area_touch_slider_ParamLimits

0x8afc,	// (0x0005c929) cset_slider_pane_ParamLimits

0x8b1f,	// (0x0005c94c) main_cset_slider_pane_g1_ParamLimits

0x8b34,	// (0x0005c961) main_cset_slider_pane_g2_ParamLimits

0xd27e,	// (0x000610ab) main_cset_slider_pane_g3_ParamLimits

0xd27e,	// (0x000610ab) main_cset_slider_pane_g3

0x8b49,	// (0x0005c976) main_cset_slider_pane_g4_ParamLimits

0x8b49,	// (0x0005c976) main_cset_slider_pane_g4

0x8b58,	// (0x0005c985) main_cset_slider_pane_g5_ParamLimits

0x8b58,	// (0x0005c985) main_cset_slider_pane_g5

0x8b64,	// (0x0005c991) main_cset_slider_pane_g6_ParamLimits

0x8b64,	// (0x0005c991) main_cset_slider_pane_g6

0xf8fd,	// (0x0006372a) main_cset_slider_pane_g_ParamLimits

0xd2ae,	// (0x000610db) main_cset_slider_pane_t1_ParamLimits

0x8bf0,	// (0x0005ca1d) main_cset_slider_pane_t2_ParamLimits

0x8c0a,	// (0x0005ca37) main_cset_slider_pane_t3_ParamLimits

0x8c24,	// (0x0005ca51) main_cset_slider_pane_t4_ParamLimits

0x8c3e,	// (0x0005ca6b) main_cset_slider_pane_t5_ParamLimits

0x8c58,	// (0x0005ca85) main_cset_slider_pane_t6_ParamLimits

0x8c6d,	// (0x0005ca9a) main_cset_slider_pane_t7_ParamLimits

0x8c97,	// (0x0005cac4) main_cset_slider_pane_t8_ParamLimits

0x8c97,	// (0x0005cac4) main_cset_slider_pane_t8

0x8cbf,	// (0x0005caec) main_cset_slider_pane_t9_ParamLimits

0x8cbf,	// (0x0005caec) main_cset_slider_pane_t9

0x8ce7,	// (0x0005cb14) main_cset_slider_pane_t10_ParamLimits

0x8ce7,	// (0x0005cb14) main_cset_slider_pane_t10

0x8d0f,	// (0x0005cb3c) main_cset_slider_pane_t11_ParamLimits

0x8d0f,	// (0x0005cb3c) main_cset_slider_pane_t11

0x8d37,	// (0x0005cb64) main_cset_slider_pane_t12_ParamLimits

0x8d37,	// (0x0005cb64) main_cset_slider_pane_t12

0x8d54,	// (0x0005cb81) main_cset_slider_pane_t13_ParamLimits

0x8d54,	// (0x0005cb81) main_cset_slider_pane_t13

0xf922,	// (0x0006374f) main_cset_slider_pane_t_ParamLimits

0xbd26,	// (0x0005fb53) bg_popup_sub_pane_cp011

0xd400,	// (0x0006122d) main_cset_text_pane_g1

0xd408,	// (0x00061235) main_cset_text_pane_t1

0xd416,	// (0x00061243) main_cset_text_pane_t2

0xd424,	// (0x00061251) main_cset_text_pane_t3

0xd432,	// (0x0006125f) main_cset_text_pane_t4

0xd440,	// (0x0006126d) main_cset_text_pane_t5

0xd44e,	// (0x0006127b) main_cset_text_pane_t6

0xd45c,	// (0x00061289) main_cset_text_pane_t7

0x0006,

0xf9af,	// (0x000637dc) main_cset_text_pane_t

0xbdab,	// (0x0005fbd8) main_cam4_burst_pane

0xbdab,	// (0x0005fbd8) main_cam5_pane

0x8a19,	// (0x0005c846) bg_button_pane_cp019

0x8a22,	// (0x0005c84f) bg_button_pane_cp020

0xd28a,	// (0x000610b7) main_cset_slider_pane_g7_ParamLimits

0xd28a,	// (0x000610b7) main_cset_slider_pane_g7

0xd296,	// (0x000610c3) main_cset_slider_pane_g8_ParamLimits

0xd296,	// (0x000610c3) main_cset_slider_pane_g8

0x8b78,	// (0x0005c9a5) main_cset_slider_pane_g9_ParamLimits

0x8b78,	// (0x0005c9a5) main_cset_slider_pane_g9

0x8b84,	// (0x0005c9b1) main_cset_slider_pane_g10_ParamLimits

0x8b84,	// (0x0005c9b1) main_cset_slider_pane_g10

0x8b90,	// (0x0005c9bd) main_cset_slider_pane_g11_ParamLimits

0x8b90,	// (0x0005c9bd) main_cset_slider_pane_g11

0x8b9c,	// (0x0005c9c9) main_cset_slider_pane_g12_ParamLimits

0x8b9c,	// (0x0005c9c9) main_cset_slider_pane_g12

0x8ba8,	// (0x0005c9d5) main_cset_slider_pane_g13_ParamLimits

0x8ba8,	// (0x0005c9d5) main_cset_slider_pane_g13

0x8bb4,	// (0x0005c9e1) main_cset_slider_pane_g14_ParamLimits

0x8bb4,	// (0x0005c9e1) main_cset_slider_pane_g14

0x8bc0,	// (0x0005c9ed) main_cset_slider_pane_g15_ParamLimits

0x8bc0,	// (0x0005c9ed) main_cset_slider_pane_g15

0xd2d6,	// (0x00061103) main_cset_slider_pane_t14_ParamLimits

0xd2d6,	// (0x00061103) main_cset_slider_pane_t14

0xd30f,	// (0x0006113c) main_cset_slider_pane_t15_ParamLimits

0xd30f,	// (0x0006113c) main_cset_slider_pane_t15

0x91e8,	// (0x0005d015) aid_cam4_burst_size_cell_ParamLimits

0x91e8,	// (0x0005d015) aid_cam4_burst_size_cell

0x9208,	// (0x0005d035) grid_cam4_burst_pane_ParamLimits

0x9208,	// (0x0005d035) grid_cam4_burst_pane

0x9240,	// (0x0005d06d) linegrid_cam4_burst_pane_ParamLimits

0x9240,	// (0x0005d06d) linegrid_cam4_burst_pane

0xd46a,	// (0x00061297) scroll_pane_cp30_ParamLimits

0xd46a,	// (0x00061297) scroll_pane_cp30

0x9264,	// (0x0005d091) cell_cam4_burst_pane_ParamLimits

0x9264,	// (0x0005d091) cell_cam4_burst_pane

0xd476,	// (0x000612a3) linegrid_cam4_burst_pane_g1_ParamLimits

0xd476,	// (0x000612a3) linegrid_cam4_burst_pane_g1

0x92b1,	// (0x0005d0de) linegrid_cam4_burst_pane_g2_ParamLimits

0x92b1,	// (0x0005d0de) linegrid_cam4_burst_pane_g2

0xd483,	// (0x000612b0) linegrid_cam4_burst_pane_g3_ParamLimits

0xd483,	// (0x000612b0) linegrid_cam4_burst_pane_g3

0x0002,

0xf9be,	// (0x000637eb) linegrid_cam4_burst_pane_g_ParamLimits

0xf9be,	// (0x000637eb) linegrid_cam4_burst_pane_g

0x92c2,	// (0x0005d0ef) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x92c2,	// (0x0005d0ef) linegrid_cam4_burst_pane_g3_copy1

0xd490,	// (0x000612bd) linegrid_cam4_burst_pane_g4_ParamLimits

0xd490,	// (0x000612bd) linegrid_cam4_burst_pane_g4

0x92dc,	// (0x0005d109) linegrid_cam4_burst_pane_g5_ParamLimits

0x92dc,	// (0x0005d109) linegrid_cam4_burst_pane_g5

0x92ed,	// (0x0005d11a) linegrid_cam4_burst_pane_g6_ParamLimits

0x92ed,	// (0x0005d11a) linegrid_cam4_burst_pane_g6

0xd49d,	// (0x000612ca) linegrid_cam4_burst_pane_g7_ParamLimits

0xd49d,	// (0x000612ca) linegrid_cam4_burst_pane_g7

0x9304,	// (0x0005d131) cell_cam4_burst_pane_g1

0xd4b6,	// (0x000612e3) main_cam5_pane_t1_ParamLimits

0xd4b6,	// (0x000612e3) main_cam5_pane_t1

0xd4c8,	// (0x000612f5) main_cam5_pane_t2_ParamLimits

0xd4c8,	// (0x000612f5) main_cam5_pane_t2

0xd4da,	// (0x00061307) main_cam5_pane_t3_ParamLimits

0xd4da,	// (0x00061307) main_cam5_pane_t3

0xd4ec,	// (0x00061319) main_cam5_pane_t4_ParamLimits

0xd4ec,	// (0x00061319) main_cam5_pane_t4

0xd504,	// (0x00061331) main_cam5_pane_t5_ParamLimits

0xd504,	// (0x00061331) main_cam5_pane_t5

0xd518,	// (0x00061345) main_cam5_pane_t6_ParamLimits

0xd518,	// (0x00061345) main_cam5_pane_t6

0xd52c,	// (0x00061359) main_cam5_pane_t7_ParamLimits

0xd52c,	// (0x00061359) main_cam5_pane_t7

0xd53e,	// (0x0006136b) main_cam5_pane_t8_ParamLimits

0xd53e,	// (0x0006136b) main_cam5_pane_t8

0xd55a,	// (0x00061387) main_cam5_pane_t9_ParamLimits

0xd55a,	// (0x00061387) main_cam5_pane_t9

0xd56c,	// (0x00061399) main_cam5_pane_t10_ParamLimits

0xd56c,	// (0x00061399) main_cam5_pane_t10

0xd57e,	// (0x000613ab) main_cam5_pane_t11_ParamLimits

0xd57e,	// (0x000613ab) main_cam5_pane_t11

0xd590,	// (0x000613bd) main_cam5_pane_t12_ParamLimits

0xd590,	// (0x000613bd) main_cam5_pane_t12

0xd5a5,	// (0x000613d2) main_cam5_pane_t13_ParamLimits

0xd5a5,	// (0x000613d2) main_cam5_pane_t13

0x000c,

0xf9ca,	// (0x000637f7) main_cam5_pane_t_ParamLimits

0xf9ca,	// (0x000637f7) main_cam5_pane_t

0x3985,	// (0x000577b2) popup_scut_keymap_window_ParamLimits

0x3985,	// (0x000577b2) popup_scut_keymap_window

0x9317,	// (0x0005d144) aid_size_cell_brow_shortcut

0x0962,	// (0x0005478f) bg_popup_window_pane_cp010

0x9323,	// (0x0005d150) grid_scut_pane

0x932f,	// (0x0005d15c) cell_scut_pane_ParamLimits

0x932f,	// (0x0005d15c) cell_scut_pane

0x9346,	// (0x0005d173) cell_scut_pane_g1

0xd5c2,	// (0x000613ef) cell_scut_pane_t1

0xd5d1,	// (0x000613fe) cell_scut_pane_t2

0x934f,	// (0x0005d17c) cell_scut_pane_t3

0x0002,

0xf9e5,	// (0x00063812) cell_scut_pane_t

0x72ae,	// (0x0005b0db) main_mup3_pane_g8_ParamLimits

0x72ae,	// (0x0005b0db) main_mup3_pane_g8

0x8561,	// (0x0005c38e) area_vitu2_query_pane_ParamLimits

0x8561,	// (0x0005c38e) area_vitu2_query_pane

0x9092,	// (0x0005cebf) input_focus_pane_cp08

0xd5e0,	// (0x0006140d) area_vitu2_query_pane_g1

0x935d,	// (0x0005d18a) area_vitu2_query_pane_g2

0x0001,

0xf9ec,	// (0x00063819) area_vitu2_query_pane_g

0x936e,	// (0x0005d19b) area_vitu2_query_pane_t1_ParamLimits

0x936e,	// (0x0005d19b) area_vitu2_query_pane_t1

0x9382,	// (0x0005d1af) area_vitu2_query_pane_t2_ParamLimits

0x9382,	// (0x0005d1af) area_vitu2_query_pane_t2

0x9396,	// (0x0005d1c3) area_vitu2_query_pane_t3_ParamLimits

0x9396,	// (0x0005d1c3) area_vitu2_query_pane_t3

0xd5ec,	// (0x00061419) area_vitu2_query_pane_t4_ParamLimits

0xd5ec,	// (0x00061419) area_vitu2_query_pane_t4

0xd614,	// (0x00061441) area_vitu2_query_pane_t5_ParamLimits

0xd614,	// (0x00061441) area_vitu2_query_pane_t5

0xd63c,	// (0x00061469) area_vitu2_query_pane_t6_ParamLimits

0xd63c,	// (0x00061469) area_vitu2_query_pane_t6

0x0006,

0xf9f1,	// (0x0006381e) area_vitu2_query_pane_t_ParamLimits

0xf9f1,	// (0x0006381e) area_vitu2_query_pane_t

0x93be,	// (0x0005d1eb) bg_button_pane_cp018

0x93cc,	// (0x0005d1f9) bg_button_pane_cp021

0x93d8,	// (0x0005d205) bg_button_pane_cp022

0x93e7,	// (0x0005d214) input_focus_pane_cp09

0x1221,	// (0x0005504e) aid_size_touch_mv_arrow_left

0x124a,	// (0x00055077) aid_size_touch_mv_arrow_right

0x8bd8,	// (0x0005ca05) main_cset_slider_pane_g16_ParamLimits

0x8bd8,	// (0x0005ca05) main_cset_slider_pane_g16

0x8be4,	// (0x0005ca11) main_cset_slider_pane_g17_ParamLimits

0x8be4,	// (0x0005ca11) main_cset_slider_pane_g17

0x9304,	// (0x0005d131) cell_cam4_burst_pane_g1_ParamLimits

0xbd26,	// (0x0005fb53) compa_mode_pane

0x8dae,	// (0x0005cbdb) popup_vtel_slider_window_g3_ParamLimits

0x8dae,	// (0x0005cbdb) popup_vtel_slider_window_g3

0x8dc5,	// (0x0005cbf2) popup_vtel_slider_window_g4_ParamLimits

0x8dc5,	// (0x0005cbf2) popup_vtel_slider_window_g4

0x8ddc,	// (0x0005cc09) popup_vtel_slider_window_t1_ParamLimits

0x8ddc,	// (0x0005cc09) popup_vtel_slider_window_t1

0xbdab,	// (0x0005fbd8) main_cl_pane

0xc647,	// (0x00060474) popup_imed_adjust2_window_ParamLimits

0x26d0,	// (0x000564fd) bg_tb_trans_pane_cp05_ParamLimits

0xcab6,	// (0x000608e3) popup_imed_adjust2_window_g1_ParamLimits

0xcac5,	// (0x000608f2) popup_imed_adjust2_window_g2_ParamLimits

0xcac5,	// (0x000608f2) popup_imed_adjust2_window_g2

0xcad1,	// (0x000608fe) popup_imed_adjust2_window_g3_ParamLimits

0xcad1,	// (0x000608fe) popup_imed_adjust2_window_g3

0x0002,

0xf767,	// (0x00063594) popup_imed_adjust2_window_g_ParamLimits

0xf767,	// (0x00063594) popup_imed_adjust2_window_g

0xcadd,	// (0x0006090a) popup_imed_adjust2_window_t1_ParamLimits

0xcaf5,	// (0x00060922) slider_imed_adjust_pane_ParamLimits

0xcb09,	// (0x00060936) slider_imed_adjust_pane_g1_ParamLimits

0xcb19,	// (0x00060946) slider_imed_adjust_pane_g2_ParamLimits

0xcb29,	// (0x00060956) slider_imed_adjust_pane_g3_ParamLimits

0xcb3a,	// (0x00060967) slider_imed_adjust_pane_g4_ParamLimits

0xf76e,	// (0x0006359b) slider_imed_adjust_pane_g_ParamLimits

0x82fd,	// (0x0005c12a) aid_touch_area_cam4_ParamLimits

0x82fd,	// (0x0005c12a) aid_touch_area_cam4

0xee91,	// (0x00062cbe) battery_pane_cp01

0x83cc,	// (0x0005c1f9) main_camera4_pane_g6_ParamLimits

0x83cc,	// (0x0005c1f9) main_camera4_pane_g6

0x83f6,	// (0x0005c223) main_camera4_pane_t2_ParamLimits

0x83f6,	// (0x0005c223) main_camera4_pane_t2

0x0001,

0xf870,	// (0x0006369d) main_camera4_pane_t_ParamLimits

0xf870,	// (0x0006369d) main_camera4_pane_t

0x842b,	// (0x0005c258) aid_touch_area_vid4_ParamLimits

0x842b,	// (0x0005c258) aid_touch_area_vid4

0x847f,	// (0x0005c2ac) main_video4_pane_g5_ParamLimits

0x847f,	// (0x0005c2ac) main_video4_pane_g5

0x84a4,	// (0x0005c2d1) vid4_progress_pane_ParamLimits

0x84a4,	// (0x0005c2d1) vid4_progress_pane

0xd2a2,	// (0x000610cf) main_cset_slider_pane_g18_ParamLimits

0xd2a2,	// (0x000610cf) main_cset_slider_pane_g18

0xd4aa,	// (0x000612d7) cell_cam4_burst_pane_g2_ParamLimits

0xd4aa,	// (0x000612d7) cell_cam4_burst_pane_g2

0x0001,

0xf9c5,	// (0x000637f2) cell_cam4_burst_pane_g_ParamLimits

0xf9c5,	// (0x000637f2) cell_cam4_burst_pane_g

0x07b0,	// (0x000545dd) bg_cl_pane_ParamLimits

0x07b0,	// (0x000545dd) bg_cl_pane

0x93f6,	// (0x0005d223) cl_header_pane_ParamLimits

0x93f6,	// (0x0005d223) cl_header_pane

0x940a,	// (0x0005d237) cl_listscroll_pane_ParamLimits

0x940a,	// (0x0005d237) cl_listscroll_pane

0xd688,	// (0x000614b5) bg_cl_pane_g1

0xd690,	// (0x000614bd) bg_cl_pane_g2

0xd698,	// (0x000614c5) bg_cl_pane_g3

0xd6a0,	// (0x000614cd) bg_cl_pane_g4

0xd6a8,	// (0x000614d5) bg_cl_pane_g5

0xd6b0,	// (0x000614dd) bg_cl_pane_g6

0xd6b8,	// (0x000614e5) bg_cl_pane_g7

0xd6c0,	// (0x000614ed) bg_cl_pane_g8

0xd6c8,	// (0x000614f5) bg_cl_pane_g9

0x0008,

0xfa00,	// (0x0006382d) bg_cl_pane_g

0x941a,	// (0x0005d247) aid_height_cl_leading_ParamLimits

0x941a,	// (0x0005d247) aid_height_cl_leading

0x9426,	// (0x0005d253) aid_height_cl_text_ParamLimits

0x9426,	// (0x0005d253) aid_height_cl_text

0xc445,	// (0x00060272) bg_cl_header_pane_ParamLimits

0xc445,	// (0x00060272) bg_cl_header_pane

0x9445,	// (0x0005d272) cl_header_pane_g1_ParamLimits

0x9445,	// (0x0005d272) cl_header_pane_g1

0x945b,	// (0x0005d288) cl_header_pane_t1_ParamLimits

0x945b,	// (0x0005d288) cl_header_pane_t1

0xd6d0,	// (0x000614fd) cl_list_pane

0xd275,	// (0x000610a2) hc_scroll_pane_cp01

0x0b9d,	// (0x000549ca) bg_cl_header_pane_g1

0xd15b,	// (0x00060f88) bg_cl_header_pane_g2

0x0bbd,	// (0x000549ea) bg_cl_header_pane_g3

0xd16b,	// (0x00060f98) bg_cl_header_pane_g4

0xd163,	// (0x00060f90) bg_cl_header_pane_g5

0xd3b9,	// (0x000611e6) bg_cl_header_pane_g6

0xd183,	// (0x00060fb0) bg_cl_header_pane_g7

0xd18b,	// (0x00060fb8) bg_cl_header_pane_g8

0xd17b,	// (0x00060fa8) bg_cl_header_pane_g9

0x0008,

0xfa13,	// (0x00063840) bg_cl_header_pane_g

0x9474,	// (0x0005d2a1) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x9474,	// (0x0005d2a1) hc_cl_list_double_graphic_heading_pane

0x9485,	// (0x0005d2b2) hc_cl_list_single_graphic_pane_ParamLimits

0x9485,	// (0x0005d2b2) hc_cl_list_single_graphic_pane

0x949b,	// (0x0005d2c8) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x949b,	// (0x0005d2c8) hc_cl_list_single_graphic_pane_g1

0x94a7,	// (0x0005d2d4) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x94a7,	// (0x0005d2d4) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa26,	// (0x00063853) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa26,	// (0x00063853) hc_cl_list_single_graphic_pane_g

0x94bb,	// (0x0005d2e8) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x94bb,	// (0x0005d2e8) hc_cl_list_single_graphic_pane_t1

0x949b,	// (0x0005d2c8) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x949b,	// (0x0005d2c8) hc_cl_list_double_graphic_heading_pane_g1

0x94d0,	// (0x0005d2fd) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x94d0,	// (0x0005d2fd) hc_cl_list_double_graphic_heading_pane_g2

0x94e4,	// (0x0005d311) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x94e4,	// (0x0005d311) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa2b,	// (0x00063858) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa2b,	// (0x00063858) hc_cl_list_double_graphic_heading_pane_g

0x94f8,	// (0x0005d325) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x94f8,	// (0x0005d325) hc_cl_list_double_graphic_heading_pane_t1

0x950d,	// (0x0005d33a) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x950d,	// (0x0005d33a) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa32,	// (0x0006385f) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa32,	// (0x0006385f) hc_cl_list_double_graphic_heading_pane_t

0xeffd,	// (0x00062e2a) vid4_progress_pane_g1

0xf00d,	// (0x00062e3a) vid4_progress_pane_g2

0x9522,	// (0x0005d34f) vid4_progress_pane_g3

0xf01d,	// (0x00062e4a) vid4_progress_pane_g4

0x0004,

0xfa37,	// (0x00063864) vid4_progress_pane_g

0x9534,	// (0x0005d361) vid4_progress_pane_t1

0xf035,	// (0x00062e62) vid4_progress_pane_t2

0x0002,

0xfa42,	// (0x0006386f) vid4_progress_pane_t

0x954c,	// (0x0005d379) wait_bar_pane_cp07

0x6b90,	// (0x0005a9bd) blid_firmament_pane_ParamLimits

0x6bd3,	// (0x0005aa00) popup_blid_sat_info2_window_g1

0x6bf7,	// (0x0005aa24) popup_blid_sat_info2_window_t3

0x6c05,	// (0x0005aa32) popup_blid_sat_info2_window_t4

0x6c13,	// (0x0005aa40) popup_blid_sat_info2_window_t5

0x6c21,	// (0x0005aa4e) popup_blid_sat_info2_window_t6

0x6c31,	// (0x0005aa5e) popup_blid_sat_info2_window_t7

0x6c3f,	// (0x0005aa6c) popup_blid_sat_info2_window_t8

0x6c4d,	// (0x0005aa7a) popup_blid_sat_info2_window_t9

0x6c5b,	// (0x0005aa88) popup_blid_sat_info2_window_t10

0x6d1c,	// (0x0005ab49) aid_firma_cardinal_ParamLimits

0x6d30,	// (0x0005ab5d) blid_firmament_pane_t1_ParamLimits

0x6d47,	// (0x0005ab74) blid_firmament_pane_t2_ParamLimits

0x6d5e,	// (0x0005ab8b) blid_firmament_pane_t3_ParamLimits

0x6d75,	// (0x0005aba2) blid_firmament_pane_t4_ParamLimits

0xf660,	// (0x0006348d) blid_firmament_pane_t_ParamLimits

0x6d8c,	// (0x0005abb9) blid_sat_info_pane_ParamLimits

0xbd9d,	// (0x0005fbca) main_cam_set_pane_ParamLimits

0x7a94,	// (0x0005b8c1) aid_size_cell_colour_35_ParamLimits

0x7ab4,	// (0x0005b8e1) aid_size_cell_colour_112_ParamLimits

0x7ad4,	// (0x0005b901) aid_size_cell_effect_ParamLimits

0x26d0,	// (0x000564fd) bg_tb_trans_pane_cp02_ParamLimits

0x0e0d,	// (0x00054c3a) heading_imed_pane_ParamLimits

0x7af4,	// (0x0005b921) listscroll_imed_pane_ParamLimits

0x1dd9,	// (0x00055c06) popup_call2_audio_first_window_g5_ParamLimits

0x1dd9,	// (0x00055c06) popup_call2_audio_first_window_g5

0x7f19,	// (0x0005bd46) aid_size_touch_image3_arrow_left_ParamLimits

0x7f19,	// (0x0005bd46) aid_size_touch_image3_arrow_left

0x7f45,	// (0x0005bd72) aid_size_touch_image3_arrow_right_ParamLimits

0x7f45,	// (0x0005bd72) aid_size_touch_image3_arrow_right

0xf04a,	// (0x00062e77) vid4_progress_pane_t3

0x7c99,	// (0x0005bac6) main_hwr_training_symbol_option_pane_ParamLimits

0x7c99,	// (0x0005bac6) main_hwr_training_symbol_option_pane

0xccef,	// (0x00060b1c) popup_hwr_training_preview_window_ParamLimits

0xccef,	// (0x00060b1c) popup_hwr_training_preview_window

0x7cb9,	// (0x0005bae6) hwr_training_navi_pane_g5_ParamLimits

0x7cb9,	// (0x0005bae6) hwr_training_navi_pane_g5

0xd149,	// (0x00060f76) popup_char_count_window

0xbd9d,	// (0x0005fbca) bg_popup_sub_pane_cp20_ParamLimits

0x8eee,	// (0x0005cd1b) list_vitu2_match_list_pane_ParamLimits

0x8efa,	// (0x0005cd27) vitu2_page_scroll_pane_ParamLimits

0x8efa,	// (0x0005cd27) vitu2_page_scroll_pane

0xd6fb,	// (0x00061528) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd6fb,	// (0x00061528) list_single_hwr_training_symbol_option_pane

0xd70e,	// (0x0006153b) list_single_hwr_training_symbol_option_pane_g1

0xd716,	// (0x00061543) list_single_hwr_training_symbol_option_pane_t1

0xd724,	// (0x00061551) bg_button_pane_cp023

0xd72d,	// (0x0006155a) bg_button_pane_cp024

0xd760,	// (0x0006158d) vitu2_page_scroll_pane_g1

0xd768,	// (0x00061595) vitu2_page_scroll_pane_g2

0x0001,

0xfa49,	// (0x00063876) vitu2_page_scroll_pane_g

0xd770,	// (0x0006159d) vitu2_page_scroll_pane_t1

0x6acd,	// (0x0005a8fa) popup_char_count_window_g1

0xd77f,	// (0x000615ac) popup_char_count_window_g2

0xd788,	// (0x000615b5) popup_char_count_window_g3

0x0002,

0xfa4e,	// (0x0006387b) popup_char_count_window_g

0xd791,	// (0x000615be) popup_char_count_window_t1

0xbdab,	// (0x0005fbd8) main_vded2_pane

0xcaa2,	// (0x000608cf) aid_size_cell_imed_line

0xcaac,	// (0x000608d9) grid_imed_line_width_pane

0xef49,	// (0x00062d76) vid4_indicators_pane_g4

0xd79f,	// (0x000615cc) cell_imed_line_width_pane_ParamLimits

0xd79f,	// (0x000615cc) cell_imed_line_width_pane

0xd7b3,	// (0x000615e0) cell_imed_line_width_pane_g1

0xd7bc,	// (0x000615e9) cell_imed_line_width_pane_g2

0x0001,

0xfa55,	// (0x00063882) cell_imed_line_width_pane_g

0x9573,	// (0x0005d3a0) main_vded2_pane_g1_ParamLimits

0x9573,	// (0x0005d3a0) main_vded2_pane_g1

0x9589,	// (0x0005d3b6) main_vded2_pane_g2_ParamLimits

0x9589,	// (0x0005d3b6) main_vded2_pane_g2

0x0001,

0xfa5a,	// (0x00063887) main_vded2_pane_g_ParamLimits

0xfa5a,	// (0x00063887) main_vded2_pane_g

0x959b,	// (0x0005d3c8) vded2_slider_pane_ParamLimits

0x959b,	// (0x0005d3c8) vded2_slider_pane

0x95ab,	// (0x0005d3d8) aid_size_touch_vded2_end

0x95b5,	// (0x0005d3e2) aid_size_touch_vded2_playhead

0xd7c4,	// (0x000615f1) aid_size_touch_vded2_start

0xd7cc,	// (0x000615f9) vded2_slider_bg_pane

0xd7d5,	// (0x00061602) vded2_slider_pane_g1

0xd7de,	// (0x0006160b) vded2_slider_pane_g2

0x95bf,	// (0x0005d3ec) vded2_slider_pane_g3

0x0002,

0xfa5f,	// (0x0006388c) vded2_slider_pane_g

0xd7e6,	// (0x00061613) vded2_slider_bg_pane_g1

0xd7ef,	// (0x0006161c) vded2_slider_bg_pane_g2

0xd7f8,	// (0x00061625) vded2_slider_bg_pane_g3

0x0002,

0xfa66,	// (0x00063893) vded2_slider_bg_pane_g

0x5bb0,	// (0x000599dd) aid_postcard_touch_down_pane_ParamLimits

0x5bb0,	// (0x000599dd) aid_postcard_touch_down_pane

0x5bc6,	// (0x000599f3) aid_postcard_touch_up_pane_ParamLimits

0x5bc6,	// (0x000599f3) aid_postcard_touch_up_pane

0xbdab,	// (0x0005fbd8) main_blid2_pane

0xc62d,	// (0x0006045a) popup_blid2_search_window

0xbd26,	// (0x0005fb53) blid2_gps_pane

0xbd26,	// (0x0005fb53) blid2_navig_pane

0xbd26,	// (0x0005fb53) blid2_search_pane

0xbd26,	// (0x0005fb53) blid2_tripm_pane

0x95ca,	// (0x0005d3f7) blid2_search_pane_g1_ParamLimits

0x95ca,	// (0x0005d3f7) blid2_search_pane_g1

0x95e4,	// (0x0005d411) blid2_search_pane_t1_ParamLimits

0x95e4,	// (0x0005d411) blid2_search_pane_t1

0x95f6,	// (0x0005d423) aid_size_cell_blid2_gps_ParamLimits

0x95f6,	// (0x0005d423) aid_size_cell_blid2_gps

0x960e,	// (0x0005d43b) blid2_gps_pane_g1_ParamLimits

0x960e,	// (0x0005d43b) blid2_gps_pane_g1

0x9622,	// (0x0005d44f) grid_blid2_satellite_pane_ParamLimits

0x9622,	// (0x0005d44f) grid_blid2_satellite_pane

0x963c,	// (0x0005d469) blid2_navig_pane_g1_ParamLimits

0x963c,	// (0x0005d469) blid2_navig_pane_g1

0x9648,	// (0x0005d475) blid2_navig_pane_t1_ParamLimits

0x9648,	// (0x0005d475) blid2_navig_pane_t1

0x9663,	// (0x0005d490) blid2_navig_pane_t2_ParamLimits

0x9663,	// (0x0005d490) blid2_navig_pane_t2

0x0001,

0xfa6d,	// (0x0006389a) blid2_navig_pane_t_ParamLimits

0xfa6d,	// (0x0006389a) blid2_navig_pane_t

0x967e,	// (0x0005d4ab) blid2_navig_ring_pane_ParamLimits

0x967e,	// (0x0005d4ab) blid2_navig_ring_pane

0x9697,	// (0x0005d4c4) blid2_speed_pane_ParamLimits

0x9697,	// (0x0005d4c4) blid2_speed_pane

0x96a3,	// (0x0005d4d0) blid2_tripm_pane_g1_ParamLimits

0x96a3,	// (0x0005d4d0) blid2_tripm_pane_g1

0x96bc,	// (0x0005d4e9) blid2_tripm_pane_g2_ParamLimits

0x96bc,	// (0x0005d4e9) blid2_tripm_pane_g2

0x96d0,	// (0x0005d4fd) blid2_tripm_pane_g3_ParamLimits

0x96d0,	// (0x0005d4fd) blid2_tripm_pane_g3

0x96e4,	// (0x0005d511) blid2_tripm_pane_g4_ParamLimits

0x96e4,	// (0x0005d511) blid2_tripm_pane_g4

0x96f8,	// (0x0005d525) blid2_tripm_pane_g5_ParamLimits

0x96f8,	// (0x0005d525) blid2_tripm_pane_g5

0x0005,

0xfa72,	// (0x0006389f) blid2_tripm_pane_g_ParamLimits

0xfa72,	// (0x0006389f) blid2_tripm_pane_g

0x971e,	// (0x0005d54b) blid2_tripm_pane_t1_ParamLimits

0x971e,	// (0x0005d54b) blid2_tripm_pane_t1

0x9739,	// (0x0005d566) blid2_tripm_pane_t2_ParamLimits

0x9739,	// (0x0005d566) blid2_tripm_pane_t2

0x9752,	// (0x0005d57f) blid2_tripm_pane_t3_ParamLimits

0x9752,	// (0x0005d57f) blid2_tripm_pane_t3

0x0003,

0xfa7f,	// (0x000638ac) blid2_tripm_pane_t_ParamLimits

0xfa7f,	// (0x000638ac) blid2_tripm_pane_t

0x9799,	// (0x0005d5c6) cell_blid2_satellite_pane_ParamLimits

0x9799,	// (0x0005d5c6) cell_blid2_satellite_pane

0x97b7,	// (0x0005d5e4) cell_blid2_satellite_pane_g1

0xd801,	// (0x0006162e) cell_blid2_satellite_pane_t1

0x0998,	// (0x000547c5) blid2_speed_pane_g1

0xd80f,	// (0x0006163c) blid2_speed_pane_t1

0xd81d,	// (0x0006164a) blid2_speed_pane_t2

0x0001,

0xfa88,	// (0x000638b5) blid2_speed_pane_t

0x0998,	// (0x000547c5) blid2_navig_ring_pane_g1

0x97c0,	// (0x0005d5ed) blid2_navig_ring_pane_g2

0x97c8,	// (0x0005d5f5) blid2_navig_ring_pane_g3

0x97d0,	// (0x0005d5fd) blid2_navig_ring_pane_g4

0x97d8,	// (0x0005d605) blid2_navig_ring_pane_g5

0x0004,

0xfa8d,	// (0x000638ba) blid2_navig_ring_pane_g

0xbd26,	// (0x0005fb53) bg_popup_window_pane_cp011

0xd82b,	// (0x00061658) popup_blid2_search_window_g1

0xd833,	// (0x00061660) popup_blid2_search_window_t1

0xd841,	// (0x0006166e) popup_blid2_search_window_t2

0x0001,

0xfa98,	// (0x000638c5) popup_blid2_search_window_t

0x0aac,	// (0x000548d9) main_browser_pane_g1

0x07b0,	// (0x000545dd) main_browser_pane_ParamLimits

0xbd9d,	// (0x0005fbca) bg_button_pane_cp011_ParamLimits

0x87af,	// (0x0005c5dc) cell_vitu2_function_pane_g1_ParamLimits

0x26d0,	// (0x000564fd) bg_popup_sub_pane_cp22_ParamLimits

0x9092,	// (0x0005cebf) input_focus_pane_cp08_ParamLimits

0x90a9,	// (0x0005ced6) popup_vitu2_query_button_pane_ParamLimits

0x90a9,	// (0x0005ced6) popup_vitu2_query_button_pane

0x90ba,	// (0x0005cee7) popup_vitu2_query_input_button_pane

0xd3f4,	// (0x00061221) popup_vitu2_query_window_g1_ParamLimits

0x90c2,	// (0x0005ceef) popup_vitu2_query_window_g2_ParamLimits

0xf999,	// (0x000637c6) popup_vitu2_query_window_g_ParamLimits

0xbd26,	// (0x0005fb53) bg_button_pane_cp026

0x97e0,	// (0x0005d60d) popup_vitu2_query_input_button_pane_g1

0xbd26,	// (0x0005fb53) bg_button_pane_cp025

0xd84f,	// (0x0006167c) popup_vitu2_query_button_pane_t1

0x6f53,	// (0x0005ad80) main_mp3_pane_t6

0x6f61,	// (0x0005ad8e) popup_slider_window_cp01

0xeead,	// (0x00062cda) cam4_battery_pane

0xef06,	// (0x00062d33) cam4_battery_pane_cp02

0xeff5,	// (0x00062e22) cam4_battery_pane_cp01

0xeff5,	// (0x00062e22) cam4_battery_pane_cp03

0xc713,	// (0x00060540) cam4_battery_pane_g1

0x0998,	// (0x000547c5) cam4_battery_pane_g2

0x0001,

0xfa9d,	// (0x000638ca) cam4_battery_pane_g

0x6c69,	// (0x0005aa96) popup_blid_sat_info2_window_t11

0x1221,	// (0x0005504e) aid_size_touch_mv_arrow_left_ParamLimits

0x124a,	// (0x00055077) aid_size_touch_mv_arrow_right_ParamLimits

0x12a8,	// (0x000550d5) navi_pane_g1_ParamLimits

0x12b4,	// (0x000550e1) navi_pane_g2_ParamLimits

0x12e2,	// (0x0005510f) navi_pane_g3_ParamLimits

0xf374,	// (0x000631a1) navi_pane_g_ParamLimits

0x57e9,	// (0x00059616) navi_pane_mv_t1_ParamLimits

0x7b00,	// (0x0005b92d) grid_imed_effect_pane_ParamLimits

0x4572,	// (0x0005839f) aid_placing_vt_slider_lsc

0x09fb,	// (0x00054828) aid_placing_vt_slider_prt

0xc445,	// (0x00060272) bg_tb_trans_pane_cp01_ParamLimits

0x6ee9,	// (0x0005ad16) popup_image_details_window_g1_ParamLimits

0xc71d,	// (0x0006054a) popup_image_details_window_g2_ParamLimits

0xc732,	// (0x0006055f) popup_image_details_window_g3_ParamLimits

0xc732,	// (0x0006055f) popup_image_details_window_g3

0xf6a0,	// (0x000634cd) popup_image_details_window_g_ParamLimits

0xc746,	// (0x00060573) popup_image_details_window_t1_ParamLimits

0xc758,	// (0x00060585) popup_image_details_window_t2_ParamLimits

0xc771,	// (0x0006059e) popup_image_details_window_t3_ParamLimits

0xc785,	// (0x000605b2) popup_image_details_window_t4_ParamLimits

0xc7a0,	// (0x000605cd) popup_image_details_window_t5_ParamLimits

0xf6a7,	// (0x000634d4) popup_image_details_window_t_ParamLimits

0x9432,	// (0x0005d25f) cl_header_name_pane_ParamLimits

0x9432,	// (0x0005d25f) cl_header_name_pane

0x97e8,	// (0x0005d615) cl_header_name_pane_t1_ParamLimits

0x97e8,	// (0x0005d615) cl_header_name_pane_t1

0x9809,	// (0x0005d636) cl_header_name_pane_t2_ParamLimits

0x9809,	// (0x0005d636) cl_header_name_pane_t2

0x984b,	// (0x0005d678) cl_header_name_pane_t3_ParamLimits

0x984b,	// (0x0005d678) cl_header_name_pane_t3

0x0002,

0xfaa2,	// (0x000638cf) cl_header_name_pane_t_ParamLimits

0xfaa2,	// (0x000638cf) cl_header_name_pane_t

0x1371,	// (0x0005519e) navi_pane_mv_g2_ParamLimits

0xd114,	// (0x00060f41) field_vitu2_entry_pane_g1_ParamLimits

0xd120,	// (0x00060f4d) field_vitu2_entry_pane_g2_ParamLimits

0x2857,	// (0x00056684) field_vitu2_entry_pane_g3_ParamLimits

0x2857,	// (0x00056684) field_vitu2_entry_pane_g3

0xf8a2,	// (0x000636cf) field_vitu2_entry_pane_g_ParamLimits

0x872b,	// (0x0005c558) cell_vitu2_itu_pane_g1_ParamLimits

0x8743,	// (0x0005c570) cell_vitu2_itu_pane_g2_ParamLimits

0x8743,	// (0x0005c570) cell_vitu2_itu_pane_g2

0x0001,

0xf8ae,	// (0x000636db) cell_vitu2_itu_pane_g_ParamLimits

0xf8ae,	// (0x000636db) cell_vitu2_itu_pane_g

0xbd9d,	// (0x0005fbca) bg_vkb2_func_pane_cp05_ParamLimits

0xbd9d,	// (0x0005fbca) bg_vkb2_func_pane_cp05

0xbd9d,	// (0x0005fbca) bg_vkb2_func_pane_cp03

0xbd9d,	// (0x0005fbca) bg_vkb2_func_pane_cp04

0xbd9d,	// (0x0005fbca) bg_vkb2_func_pane_cp10_ParamLimits

0xbd9d,	// (0x0005fbca) bg_vkb2_func_pane_cp10

0x93d8,	// (0x0005d205) bg_vkb2_func_pane_cp08

0x93be,	// (0x0005d1eb) bg_vkb2_func_pane_cp06

0x93cc,	// (0x0005d1f9) bg_vkb2_func_pane_cp07

0xd736,	// (0x00061563) bg_vkb2_func_pane_cp11_ParamLimits

0xd736,	// (0x00061563) bg_vkb2_func_pane_cp11

0xd74b,	// (0x00061578) bg_vkb2_func_pane_cp12_ParamLimits

0xd74b,	// (0x00061578) bg_vkb2_func_pane_cp12

0xbd26,	// (0x0005fb53) bg_vkb2_func_pane_cp09

0xd15b,	// (0x00060f88) bg_vkb2_func_pane_g1

0x0bbd,	// (0x000549ea) bg_vkb2_func_pane_g2

0xd163,	// (0x00060f90) bg_vkb2_func_pane_g3

0xd16b,	// (0x00060f98) bg_vkb2_func_pane_g4

0xd3b9,	// (0x000611e6) bg_vkb2_func_pane_g5

0xd183,	// (0x00060fb0) bg_vkb2_func_pane_g6

0xd18b,	// (0x00060fb8) bg_vkb2_func_pane_g7

0xd17b,	// (0x00060fa8) bg_vkb2_func_pane_g8

0x0b9d,	// (0x000549ca) bg_vkb2_func_pane_g9

0x0008,

0xfaa9,	// (0x000638d6) bg_vkb2_func_pane_g

0x970c,	// (0x0005d539) blid2_tripm_pane_g6_ParamLimits

0x970c,	// (0x0005d539) blid2_tripm_pane_g6

0xd026,	// (0x00060e53) mp4_progress_pane_g1

0x9785,	// (0x0005d5b2) blid2_tripm_values_pane_ParamLimits

0x9785,	// (0x0005d5b2) blid2_tripm_values_pane

0x987c,	// (0x0005d6a9) blid2_tripm_values_pane_t1

0x988a,	// (0x0005d6b7) blid2_tripm_values_pane_t2

0x9898,	// (0x0005d6c5) blid2_tripm_values_pane_t3

0x98a6,	// (0x0005d6d3) blid2_tripm_values_pane_t4

0x98b4,	// (0x0005d6e1) blid2_tripm_values_pane_t5

0x98c2,	// (0x0005d6ef) blid2_tripm_values_pane_t6

0x98d0,	// (0x0005d6fd) blid2_tripm_values_pane_t7

0x98de,	// (0x0005d70b) blid2_tripm_values_pane_t8

0x98ec,	// (0x0005d719) blid2_tripm_values_pane_t9

0x0008,

0xfabc,	// (0x000638e9) blid2_tripm_values_pane_t

0x45b4,	// (0x000583e1) call_video_pane_t1_ParamLimits

0x45d2,	// (0x000583ff) call_video_pane_t2_ParamLimits

0xf222,	// (0x0006304f) call_video_pane_t_ParamLimits

0x5aac,	// (0x000598d9) msg_header_pane_g1_ParamLimits

0x1536,	// (0x00055363) msg_header_pane_g2_ParamLimits

0x1536,	// (0x00055363) msg_header_pane_g2

0x0001,

0xf417,	// (0x00063244) msg_header_pane_g_ParamLimits

0xf417,	// (0x00063244) msg_header_pane_g

0x07b0,	// (0x000545dd) main_clock2_pane_ParamLimits

0x7801,	// (0x0005b62e) grid_clock2_toolbar_pane_ParamLimits

0x7801,	// (0x0005b62e) grid_clock2_toolbar_pane

0x7801,	// (0x0005b62e) listscroll_clock2_pane_ParamLimits

0x7801,	// (0x0005b62e) listscroll_clock2_pane

0x78e5,	// (0x0005b712) main_clock2_pane_t3_ParamLimits

0x78e5,	// (0x0005b712) main_clock2_pane_t3

0x7909,	// (0x0005b736) main_clock2_pane_t4_ParamLimits

0x7909,	// (0x0005b736) main_clock2_pane_t4

0xd85d,	// (0x0006168a) cell_clock2_toolbar_pane

0xd865,	// (0x00061692) cell_clock2_toolbar_pane_cp01

0xd865,	// (0x00061692) cell_clock2_toolbar_pane_cp02

0xd86d,	// (0x0006169a) cell_clock2_toolbar_pane_cp03

0xd875,	// (0x000616a2) list_clock2_pane

0x1197,	// (0x00054fc4) scroll_pane_cp10

0xd87d,	// (0x000616aa) list_single_clock2_pane_ParamLimits

0xd87d,	// (0x000616aa) list_single_clock2_pane

0x0962,	// (0x0005478f) list_highlight_pane_cp08

0xd88a,	// (0x000616b7) list_single_clock2_pane_t1

0xd898,	// (0x000616c5) list_single_clock2_pane_t2

0x0001,

0xfacf,	// (0x000638fc) list_single_clock2_pane_t

0xbd26,	// (0x0005fb53) bg_button_pane_cp10

0xd8a6,	// (0x000616d3) cell_clock2_toolbar_pane_g1

0x5b3c,	// (0x00059969) aid_main_viewer_pane_g1_ParamLimits

0x5b3c,	// (0x00059969) aid_main_viewer_pane_g1

0x5b4a,	// (0x00059977) aid_main_viewer_pane_g2_ParamLimits

0x5b4a,	// (0x00059977) aid_main_viewer_pane_g2

0x5b58,	// (0x00059985) aid_main_viewer_pane_g3_ParamLimits

0x5b58,	// (0x00059985) aid_main_viewer_pane_g3

0x5b67,	// (0x00059994) aid_main_viewer_pane_g4_ParamLimits

0x5b67,	// (0x00059994) aid_main_viewer_pane_g4

0x0003,

0xf428,	// (0x00063255) aid_main_viewer_pane_g_ParamLimits

0xf428,	// (0x00063255) aid_main_viewer_pane_g

0x64ae,	// (0x0005a2db) main_calc_pane_ParamLimits

0x64d4,	// (0x0005a301) main_dialer2_pane_ParamLimits

0xbdab,	// (0x0005fbd8) main_cam6_pane

0xbdab,	// (0x0005fbd8) main_vid6_pane

0x780d,	// (0x0005b63a) listscroll_gen_pane_cp06_ParamLimits

0x780d,	// (0x0005b63a) listscroll_gen_pane_cp06

0x792c,	// (0x0005b759) main_clock2_pane_t5_ParamLimits

0x792c,	// (0x0005b759) main_clock2_pane_t5

0x798a,	// (0x0005b7b7) aid_call2_pane_cp10_ParamLimits

0x799c,	// (0x0005b7c9) aid_call_pane_cp10_ParamLimits

0x1215,	// (0x00055042) popup_clock_analogue_window_cp10_g1_ParamLimits

0x1215,	// (0x00055042) popup_clock_analogue_window_cp10_g2_ParamLimits

0x79ae,	// (0x0005b7db) popup_clock_analogue_window_cp10_g3_ParamLimits

0x79ae,	// (0x0005b7db) popup_clock_analogue_window_cp10_g4_ParamLimits

0x1215,	// (0x00055042) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf75c,	// (0x00063589) popup_clock_analogue_window_cp10_g_ParamLimits

0x79c4,	// (0x0005b7f1) popup_clock_analogue_window_cp10_t1_ParamLimits

0x7ec6,	// (0x0005bcf3) cell_dialer2_keypad_pane_g2_ParamLimits

0x7ec6,	// (0x0005bcf3) cell_dialer2_keypad_pane_g2

0x0001,

0xf841,	// (0x0006366e) cell_dialer2_keypad_pane_g_ParamLimits

0xf841,	// (0x0006366e) cell_dialer2_keypad_pane_g

0x7ee2,	// (0x0005bd0f) cell_dialer2_keypad_pane_t1

0x8ad2,	// (0x0005c8ff) main_cset_text2_pane_ParamLimits

0x8ad2,	// (0x0005c8ff) main_cset_text2_pane

0xd5e0,	// (0x0006140d) area_vitu2_query_pane_g1_ParamLimits

0x935d,	// (0x0005d18a) area_vitu2_query_pane_g2_ParamLimits

0xf9ec,	// (0x00063819) area_vitu2_query_pane_g_ParamLimits

0xd664,	// (0x00061491) area_vitu2_query_pane_t7_ParamLimits

0xd664,	// (0x00061491) area_vitu2_query_pane_t7

0x93be,	// (0x0005d1eb) bg_button_pane_cp018_ParamLimits

0x93cc,	// (0x0005d1f9) bg_button_pane_cp021_ParamLimits

0x93d8,	// (0x0005d205) bg_button_pane_cp022_ParamLimits

0x93d8,	// (0x0005d205) bg_vkb2_func_pane_cp08_ParamLimits

0x93be,	// (0x0005d1eb) bg_vkb2_func_pane_cp06_ParamLimits

0x93cc,	// (0x0005d1f9) bg_vkb2_func_pane_cp07_ParamLimits

0x93e7,	// (0x0005d214) input_focus_pane_cp09_ParamLimits

0xf05f,	// (0x00062e8c) cam6_autofocus_pane_ParamLimits

0xf05f,	// (0x00062e8c) cam6_autofocus_pane

0x98fa,	// (0x0005d727) cam6_image_uncrop_pane_ParamLimits

0x98fa,	// (0x0005d727) cam6_image_uncrop_pane

0x9909,	// (0x0005d736) cam6_indi_pane_ParamLimits

0x9909,	// (0x0005d736) cam6_indi_pane

0x991f,	// (0x0005d74c) cam6_mode_pane_ParamLimits

0x991f,	// (0x0005d74c) cam6_mode_pane

0x9931,	// (0x0005d75e) cam6_timer_pane_ParamLimits

0x9931,	// (0x0005d75e) cam6_timer_pane

0x993d,	// (0x0005d76a) cam6_zoom_pane_ParamLimits

0x993d,	// (0x0005d76a) cam6_zoom_pane

0x9949,	// (0x0005d776) cam6_mode_pane_g1_ParamLimits

0x9949,	// (0x0005d776) cam6_mode_pane_g1

0x9959,	// (0x0005d786) cam6_mode_pane_g2_ParamLimits

0x9959,	// (0x0005d786) cam6_mode_pane_g2

0x9969,	// (0x0005d796) cam6_mode_pane_g3_ParamLimits

0x9969,	// (0x0005d796) cam6_mode_pane_g3

0x9979,	// (0x0005d7a6) cam6_mode_pane_g4_ParamLimits

0x9979,	// (0x0005d7a6) cam6_mode_pane_g4

0x0003,

0xfad4,	// (0x00063901) cam6_mode_pane_g_ParamLimits

0xfad4,	// (0x00063901) cam6_mode_pane_g

0x9989,	// (0x0005d7b6) bg_tb_trans_pane_cp08_ParamLimits

0x9989,	// (0x0005d7b6) bg_tb_trans_pane_cp08

0xd8ae,	// (0x000616db) cam6_battery_pane_ParamLimits

0xd8ae,	// (0x000616db) cam6_battery_pane

0xd8c4,	// (0x000616f1) cam6_indi_pane_g1_ParamLimits

0xd8c4,	// (0x000616f1) cam6_indi_pane_g1

0xd8d6,	// (0x00061703) cam6_indi_pane_g2_ParamLimits

0xd8d6,	// (0x00061703) cam6_indi_pane_g2

0xd8e8,	// (0x00061715) cam6_indi_pane_g3_ParamLimits

0xd8e8,	// (0x00061715) cam6_indi_pane_g3

0x0002,

0xfadd,	// (0x0006390a) cam6_indi_pane_g_ParamLimits

0xfadd,	// (0x0006390a) cam6_indi_pane_g

0xd8fa,	// (0x00061727) cam6_indi_pane_t1_ParamLimits

0xd8fa,	// (0x00061727) cam6_indi_pane_t1

0x9997,	// (0x0005d7c4) cam6_autofocus_pane_g1

0x999f,	// (0x0005d7cc) cam6_autofocus_pane_g2

0x99a7,	// (0x0005d7d4) cam6_autofocus_pane_g3

0x99af,	// (0x0005d7dc) cam6_autofocus_pane_g4

0x0003,

0xfae4,	// (0x00063911) cam6_autofocus_pane_g

0xd920,	// (0x0006174d) cam6_timer_pane_g1

0xd928,	// (0x00061755) cam6_timer_pane_t1

0xd936,	// (0x00061763) cam6_zoom_cont_pane

0xd93e,	// (0x0006176b) cam6_zoom_pane_g1

0xd946,	// (0x00061773) cam6_zoom_pane_g2

0x99b7,	// (0x0005d7e4) cam6_zoom_pane_g3

0x0002,

0xfaed,	// (0x0006391a) cam6_zoom_pane_g

0x0998,	// (0x000547c5) cam6_battery_pane_g1

0x0998,	// (0x000547c5) cam6_battery_pane_g2

0x0001,

0xf3d8,	// (0x00063205) cam6_battery_pane_g

0xd94e,	// (0x0006177b) cam6_zoom_cont_pane_g1

0xd957,	// (0x00061784) cam6_zoom_cont_pane_g2

0xd960,	// (0x0006178d) cam6_zoom_cont_pane_g3

0x0002,

0xfaf4,	// (0x00063921) cam6_zoom_cont_pane_g

0x99d1,	// (0x0005d7fe) cam6_mode_pane_cp_ParamLimits

0x99d1,	// (0x0005d7fe) cam6_mode_pane_cp

0x99e3,	// (0x0005d810) cam6_zoom_pane_cp_ParamLimits

0x99e3,	// (0x0005d810) cam6_zoom_pane_cp

0x99ef,	// (0x0005d81c) vid6_image_uncrop_cif_pane_ParamLimits

0x99ef,	// (0x0005d81c) vid6_image_uncrop_cif_pane

0x99ff,	// (0x0005d82c) vid6_image_uncrop_nhd_pane_ParamLimits

0x99ff,	// (0x0005d82c) vid6_image_uncrop_nhd_pane

0x9a0e,	// (0x0005d83b) vid6_image_uncrop_vga_pane_ParamLimits

0x9a0e,	// (0x0005d83b) vid6_image_uncrop_vga_pane

0x9a1d,	// (0x0005d84a) vid6_image_uncrop_wvga_pane_ParamLimits

0x9a1d,	// (0x0005d84a) vid6_image_uncrop_wvga_pane

0x9a2c,	// (0x0005d859) vid6_indi_pane_ParamLimits

0x9a2c,	// (0x0005d859) vid6_indi_pane

0x9989,	// (0x0005d7b6) bg_tb_trans_pane_cp09_ParamLimits

0x9989,	// (0x0005d7b6) bg_tb_trans_pane_cp09

0xd978,	// (0x000617a5) cam6_battery_pane_cp_ParamLimits

0xd978,	// (0x000617a5) cam6_battery_pane_cp

0xd984,	// (0x000617b1) vid6_indi_pane_g1_ParamLimits

0xd984,	// (0x000617b1) vid6_indi_pane_g1

0xd996,	// (0x000617c3) vid6_indi_pane_g2_ParamLimits

0xd996,	// (0x000617c3) vid6_indi_pane_g2

0xd9a8,	// (0x000617d5) vid6_indi_pane_g3_ParamLimits

0xd9a8,	// (0x000617d5) vid6_indi_pane_g3

0xd9bd,	// (0x000617ea) vid6_indi_pane_g4_ParamLimits

0xd9bd,	// (0x000617ea) vid6_indi_pane_g4

0xd9d2,	// (0x000617ff) vid6_indi_pane_g5_ParamLimits

0xd9d2,	// (0x000617ff) vid6_indi_pane_g5

0x0004,

0xfafb,	// (0x00063928) vid6_indi_pane_g_ParamLimits

0xfafb,	// (0x00063928) vid6_indi_pane_g

0xd9ec,	// (0x00061819) vid6_indi_pane_t1_ParamLimits

0xd9ec,	// (0x00061819) vid6_indi_pane_t1

0xda02,	// (0x0006182f) vid6_indi_pane_t2_ParamLimits

0xda02,	// (0x0006182f) vid6_indi_pane_t2

0xda2a,	// (0x00061857) vid6_indi_pane_t3_ParamLimits

0xda2a,	// (0x00061857) vid6_indi_pane_t3

0xda52,	// (0x0006187f) vid6_indi_pane_t4_ParamLimits

0xda52,	// (0x0006187f) vid6_indi_pane_t4

0x0003,

0xfb06,	// (0x00063933) vid6_indi_pane_t_ParamLimits

0xfb06,	// (0x00063933) vid6_indi_pane_t

0xda76,	// (0x000618a3) wait_bar_pane_cp08

0x9a44,	// (0x0005d871) main_cset_text2_pane_t1_ParamLimits

0x9a44,	// (0x0005d871) main_cset_text2_pane_t1

0x99bf,	// (0x0005d7ec) listscroll_gen_pane_cp06_t1_ParamLimits

0x99bf,	// (0x0005d7ec) listscroll_gen_pane_cp06_t1

0xbdab,	// (0x0005fbd8) main_cam6_set_pane

0xd0ef,	// (0x00060f1c) bg_tb_trans_pane_cp06_ParamLimits

0xeeb5,	// (0x00062ce2) cam4_indicators_pane_g1_ParamLimits

0xeec6,	// (0x00062cf3) cam4_indicators_pane_g2_ParamLimits

0xf87e,	// (0x000636ab) cam4_indicators_pane_g_ParamLimits

0xeee4,	// (0x00062d11) cam4_indicators_pane_t1_ParamLimits

0xbd9d,	// (0x0005fbca) bg_tb_trans_pane_cp07_ParamLimits

0xef10,	// (0x00062d3d) vid4_indicators_pane_g1_ParamLimits

0xef24,	// (0x00062d51) vid4_indicators_pane_g2_ParamLimits

0xef38,	// (0x00062d65) vid4_indicators_pane_g3_ParamLimits

0xef49,	// (0x00062d76) vid4_indicators_pane_g4_ParamLimits

0xf890,	// (0x000636bd) vid4_indicators_pane_g_ParamLimits

0xef67,	// (0x00062d94) vid4_indicators_pane_t1_ParamLimits

0xeffd,	// (0x00062e2a) vid4_progress_pane_g1_ParamLimits

0xf00d,	// (0x00062e3a) vid4_progress_pane_g2_ParamLimits

0x9522,	// (0x0005d34f) vid4_progress_pane_g3_ParamLimits

0xf01d,	// (0x00062e4a) vid4_progress_pane_g4_ParamLimits

0xfa37,	// (0x00063864) vid4_progress_pane_g_ParamLimits

0x9534,	// (0x0005d361) vid4_progress_pane_t1_ParamLimits

0xf035,	// (0x00062e62) vid4_progress_pane_t2_ParamLimits

0xf04a,	// (0x00062e77) vid4_progress_pane_t3_ParamLimits

0xfa42,	// (0x0006386f) vid4_progress_pane_t_ParamLimits

0x954c,	// (0x0005d379) wait_bar_pane_cp07_ParamLimits

0x9a61,	// (0x0005d88e) main_cam6_set_pane_g2_ParamLimits

0x9a61,	// (0x0005d88e) main_cam6_set_pane_g2

0x9a85,	// (0x0005d8b2) main_cset6_listscroll_pane_ParamLimits

0x9a85,	// (0x0005d8b2) main_cset6_listscroll_pane

0x9aa5,	// (0x0005d8d2) main_cset6_slider_pane_ParamLimits

0x9aa5,	// (0x0005d8d2) main_cset6_slider_pane

0x9abb,	// (0x0005d8e8) main_cset6_text2_pane_ParamLimits

0x9abb,	// (0x0005d8e8) main_cset6_text2_pane

0xda85,	// (0x000618b2) main_cset6_text_pane

0xda8d,	// (0x000618ba) main_cset_list_pane_copy1_ParamLimits

0xda8d,	// (0x000618ba) main_cset_list_pane_copy1

0xda9d,	// (0x000618ca) scroll_pane_cp028_copy1

0x9ac9,	// (0x0005d8f6) cset_list_set_pane_copy1

0x9ada,	// (0x0005d907) aid_position_infowindow_above_copy1

0x9ae2,	// (0x0005d90f) aid_position_infowindow_below_copy1

0x9aea,	// (0x0005d917) cset_list_set_pane_g1_copy1

0x9af2,	// (0x0005d91f) cset_list_set_pane_g3_copy1_ParamLimits

0x9af2,	// (0x0005d91f) cset_list_set_pane_g3_copy1

0x9b01,	// (0x0005d92e) cset_list_set_pane_t1_copy1_ParamLimits

0x9b01,	// (0x0005d92e) cset_list_set_pane_t1_copy1

0xc445,	// (0x00060272) list_highlight_pane_cp021_copy1_ParamLimits

0xc445,	// (0x00060272) list_highlight_pane_cp021_copy1

0xdaa6,	// (0x000618d3) cset6_slider_pane_ParamLimits

0xdaa6,	// (0x000618d3) cset6_slider_pane

0xdad2,	// (0x000618ff) main_cset6_slider_pane_g1_ParamLimits

0xdad2,	// (0x000618ff) main_cset6_slider_pane_g1

0x9b16,	// (0x0005d943) main_cset6_slider_pane_g2_ParamLimits

0x9b16,	// (0x0005d943) main_cset6_slider_pane_g2

0xdafa,	// (0x00061927) main_cset6_slider_pane_g3_ParamLimits

0xdafa,	// (0x00061927) main_cset6_slider_pane_g3

0x9b3e,	// (0x0005d96b) main_cset6_slider_pane_g4_ParamLimits

0x9b3e,	// (0x0005d96b) main_cset6_slider_pane_g4

0x9b4a,	// (0x0005d977) main_cset6_slider_pane_g5_ParamLimits

0x9b4a,	// (0x0005d977) main_cset6_slider_pane_g5

0xd28a,	// (0x000610b7) main_cset6_slider_pane_g7_ParamLimits

0xd28a,	// (0x000610b7) main_cset6_slider_pane_g7

0xd296,	// (0x000610c3) main_cset6_slider_pane_g8_ParamLimits

0xd296,	// (0x000610c3) main_cset6_slider_pane_g8

0x8b78,	// (0x0005c9a5) main_cset6_slider_pane_g9_ParamLimits

0x8b78,	// (0x0005c9a5) main_cset6_slider_pane_g9

0x8b84,	// (0x0005c9b1) main_cset6_slider_pane_g10_ParamLimits

0x8b84,	// (0x0005c9b1) main_cset6_slider_pane_g10

0x8b90,	// (0x0005c9bd) main_cset6_slider_pane_g11_ParamLimits

0x8b90,	// (0x0005c9bd) main_cset6_slider_pane_g11

0x8b9c,	// (0x0005c9c9) main_cset6_slider_pane_g12_ParamLimits

0x8b9c,	// (0x0005c9c9) main_cset6_slider_pane_g12

0x8ba8,	// (0x0005c9d5) main_cset6_slider_pane_g13_ParamLimits

0x8ba8,	// (0x0005c9d5) main_cset6_slider_pane_g13

0x8bb4,	// (0x0005c9e1) main_cset6_slider_pane_g14_ParamLimits

0x8bb4,	// (0x0005c9e1) main_cset6_slider_pane_g14

0x9b56,	// (0x0005d983) main_cset6_slider_pane_g15_ParamLimits

0x9b56,	// (0x0005d983) main_cset6_slider_pane_g15

0x8bd8,	// (0x0005ca05) main_cset6_slider_pane_g16_ParamLimits

0x8bd8,	// (0x0005ca05) main_cset6_slider_pane_g16

0x8be4,	// (0x0005ca11) main_cset6_slider_pane_g17_ParamLimits

0x8be4,	// (0x0005ca11) main_cset6_slider_pane_g17

0x0011,

0xfb0f,	// (0x0006393c) main_cset6_slider_pane_g_ParamLimits

0xfb0f,	// (0x0006393c) main_cset6_slider_pane_g

0xdb06,	// (0x00061933) main_cset6_slider_pane_t1_ParamLimits

0xdb06,	// (0x00061933) main_cset6_slider_pane_t1

0x9b86,	// (0x0005d9b3) main_cset6_slider_pane_t2_ParamLimits

0x9b86,	// (0x0005d9b3) main_cset6_slider_pane_t2

0x9bb1,	// (0x0005d9de) main_cset6_slider_pane_t3_ParamLimits

0x9bb1,	// (0x0005d9de) main_cset6_slider_pane_t3

0x9bdc,	// (0x0005da09) main_cset6_slider_pane_t4_ParamLimits

0x9bdc,	// (0x0005da09) main_cset6_slider_pane_t4

0x9c07,	// (0x0005da34) main_cset6_slider_pane_t5_ParamLimits

0x9c07,	// (0x0005da34) main_cset6_slider_pane_t5

0xdb47,	// (0x00061974) main_cset6_slider_pane_t7_ParamLimits

0xdb47,	// (0x00061974) main_cset6_slider_pane_t7

0x9c32,	// (0x0005da5f) main_cset6_slider_pane_t8_ParamLimits

0x9c32,	// (0x0005da5f) main_cset6_slider_pane_t8

0x9c56,	// (0x0005da83) main_cset6_slider_pane_t9_ParamLimits

0x9c56,	// (0x0005da83) main_cset6_slider_pane_t9

0x9c7a,	// (0x0005daa7) main_cset6_slider_pane_t10_ParamLimits

0x9c7a,	// (0x0005daa7) main_cset6_slider_pane_t10

0x9c9e,	// (0x0005dacb) main_cset6_slider_pane_t11_ParamLimits

0x9c9e,	// (0x0005dacb) main_cset6_slider_pane_t11

0xdb7d,	// (0x000619aa) main_cset6_slider_pane_t14_ParamLimits

0xdb7d,	// (0x000619aa) main_cset6_slider_pane_t14

0xdbb6,	// (0x000619e3) main_cset6_slider_pane_t15_ParamLimits

0xdbb6,	// (0x000619e3) main_cset6_slider_pane_t15

0x000b,

0xfb34,	// (0x00063961) main_cset6_slider_pane_t_ParamLimits

0xfb34,	// (0x00063961) main_cset6_slider_pane_t

0xdbef,	// (0x00061a1c) cset_slider_pane_g1_copy1

0xdbf8,	// (0x00061a25) cset_slider_pane_g2_copy1

0xdc01,	// (0x00061a2e) cset_slider_pane_g3_copy1

0xbd26,	// (0x0005fb53) bg_popup_sub_pane_cp011_copy1

0xdc0a,	// (0x00061a37) main_cset_text_pane_g1_copy1

0xd408,	// (0x00061235) main_cset_text_pane_t1_copy1

0xd416,	// (0x00061243) main_cset_text_pane_t2_copy1

0xd424,	// (0x00061251) main_cset_text_pane_t3_copy1

0xd432,	// (0x0006125f) main_cset_text_pane_t4_copy1

0xd440,	// (0x0006126d) main_cset_text_pane_t5_copy1

0xdc12,	// (0x00061a3f) main_cset_text_pane_t6_copy1

0xdc20,	// (0x00061a4d) main_cset_text_pane_t7_copy1

0x9a44,	// (0x0005d871) main_cset_text2_pane_t1_copy1

0xbd9d,	// (0x0005fbca) main_ncimui_pane

0x672a,	// (0x0005a557) popup_query_ncimui_window_ParamLimits

0x672a,	// (0x0005a557) popup_query_ncimui_window

0xc87d,	// (0x000606aa) field_cale_ev2_pane_g4_ParamLimits

0xc87d,	// (0x000606aa) field_cale_ev2_pane_g4

0x7da6,	// (0x0005bbd3) cell_video_dialer_keypad_pane_g2_ParamLimits

0x7da6,	// (0x0005bbd3) cell_video_dialer_keypad_pane_g2

0x0001,

0xf818,	// (0x00063645) cell_video_dialer_keypad_pane_g_ParamLimits

0xf818,	// (0x00063645) cell_video_dialer_keypad_pane_g

0x7dbe,	// (0x0005bbeb) cell_video_dialer_keypad_pane_t1

0xbd26,	// (0x0005fb53) bg_popup_window_pane_cp012

0x262c,	// (0x00056459) heading_pane_cp06

0xdc4c,	// (0x00061a79) ncim_query_content_pane

0xbd26,	// (0x0005fb53) bg_popup_heading_pane_cp01

0xdc54,	// (0x00061a81) ncim_heading_pane_t1

0xdc62,	// (0x00061a8f) ncim_indicator_popup_pane

0xdc74,	// (0x00061aa1) ncim_query_button_pane

0xdc88,	// (0x00061ab5) ncim_query_content_pane_t1

0xdc9a,	// (0x00061ac7) ncim_query_content_pane_t2

0x0005,

0xfb78,	// (0x000639a5) ncim_query_content_pane_t

0xdcd4,	// (0x00061b01) ncim_query_list_pane

0xdce6,	// (0x00061b13) ncim_query_popup_pane

0xdc62,	// (0x00061a8f) ncim_indicator_popup_pane_ParamLimits

0x9e08,	// (0x0005dc35) ncim_query_content_pane_g1_ParamLimits

0x9e08,	// (0x0005dc35) ncim_query_content_pane_g1

0xdc88,	// (0x00061ab5) ncim_query_content_pane_t1_ParamLimits

0xdc9a,	// (0x00061ac7) ncim_query_content_pane_t2_ParamLimits

0x9e14,	// (0x0005dc41) ncim_query_content_pane_t3_ParamLimits

0x9e14,	// (0x0005dc41) ncim_query_content_pane_t3

0x9e3c,	// (0x0005dc69) ncim_query_content_pane_t4_ParamLimits

0x9e3c,	// (0x0005dc69) ncim_query_content_pane_t4

0x9e64,	// (0x0005dc91) ncim_query_content_pane_t5_ParamLimits

0x9e64,	// (0x0005dc91) ncim_query_content_pane_t5

0xdcac,	// (0x00061ad9) ncim_query_content_pane_t6_ParamLimits

0xdcac,	// (0x00061ad9) ncim_query_content_pane_t6

0xfb78,	// (0x000639a5) ncim_query_content_pane_t_ParamLimits

0xdcd4,	// (0x00061b01) ncim_query_list_pane_ParamLimits

0xdce6,	// (0x00061b13) ncim_query_popup_pane_ParamLimits

0xdcfa,	// (0x00061b27) wait_bar_pane_cp04

0xbd26,	// (0x0005fb53) input_focus_pane_cp011

0xdd02,	// (0x00061b2f) ncim_query_popup_pane_t1

0xdd10,	// (0x00061b3d) ncim_list_query_list_pane_ParamLimits

0xdd10,	// (0x00061b3d) ncim_list_query_list_pane

0xbd26,	// (0x0005fb53) bg_button_pane_cp027

0xdd1d,	// (0x00061b4a) ncim_query_button_pane_g1

0xbd26,	// (0x0005fb53) list_highlight_pane_cp012

0xdd27,	// (0x00061b54) ncim_list_query_list_pane_g1

0xdd2f,	// (0x00061b5c) ncim_list_query_list_pane_t1

0xeed5,	// (0x00062d02) cam4_indicators_pane_g3_ParamLimits

0xeed5,	// (0x00062d02) cam4_indicators_pane_g3

0xef55,	// (0x00062d82) vid4_indicators_pane_g5_ParamLimits

0xef55,	// (0x00062d82) vid4_indicators_pane_g5

0xf029,	// (0x00062e56) vid4_progress_pane_g5_ParamLimits

0xf029,	// (0x00062e56) vid4_progress_pane_g5

0x9cf3,	// (0x0005db20) main_ncimui_pane_g1

0x9d5c,	// (0x0005db89) ncimui_group_query_pane_ParamLimits

0x9d5c,	// (0x0005db89) ncimui_group_query_pane

0x9da4,	// (0x0005dbd1) ncimui_list_pane_ParamLimits

0x9da4,	// (0x0005dbd1) ncimui_list_pane

0x9dcb,	// (0x0005dbf8) ncimui_text_pane_ParamLimits

0x9dcb,	// (0x0005dbf8) ncimui_text_pane

0x9e8c,	// (0x0005dcb9) ncimui_text_pane_t1_ParamLimits

0x9e8c,	// (0x0005dcb9) ncimui_text_pane_t1

0xdd3d,	// (0x00061b6a) ncimui_list_single_graphic_pane_ParamLimits

0xdd3d,	// (0x00061b6a) ncimui_list_single_graphic_pane

0x9eaa,	// (0x0005dcd7) ncimui_query_pane_ParamLimits

0x9eaa,	// (0x0005dcd7) ncimui_query_pane

0xbd26,	// (0x0005fb53) list_highlight_pane_cp013

0xdd4d,	// (0x00061b7a) ncim_list_query_list_pane_t1_copy1

0xdd27,	// (0x00061b54) ncim_list_single_graphic_pane_g1

0x9ebd,	// (0x0005dcea) ncim_query_button_pane_cp01

0x9ec9,	// (0x0005dcf6) ncim_query_entry_pane_ParamLimits

0x9ec9,	// (0x0005dcf6) ncim_query_entry_pane

0x9edc,	// (0x0005dd09) ncimui_query_pane_g1

0x9ee8,	// (0x0005dd15) ncimui_query_pane_t1_ParamLimits

0x9ee8,	// (0x0005dd15) ncimui_query_pane_t1

0xc445,	// (0x00060272) input_focus_pane_cp012

0xdd5b,	// (0x00061b88) ncim_query_entry_pane_t1

0x07b0,	// (0x000545dd) main_im_pane_ParamLimits

0xbd9d,	// (0x0005fbca) main_mobtv_pane_ParamLimits

0xbd9d,	// (0x0005fbca) main_mobtv_pane

0x9b6e,	// (0x0005d99b) main_cset6_slider_pane_g18_ParamLimits

0x9b6e,	// (0x0005d99b) main_cset6_slider_pane_g18

0x9b7a,	// (0x0005d9a7) main_cset6_slider_pane_g19_ParamLimits

0x9b7a,	// (0x0005d9a7) main_cset6_slider_pane_g19

0x075a,	// (0x00054587) bg_main_mobtv_pane_ParamLimits

0x075a,	// (0x00054587) bg_main_mobtv_pane

0x9f01,	// (0x0005dd2e) main_mobtv_info_pane

0x9f0a,	// (0x0005dd37) main_mobtv_loading_pane_ParamLimits

0x9f0a,	// (0x0005dd37) main_mobtv_loading_pane

0xdd6d,	// (0x00061b9a) main_mobtv_pg_channel_list_pane

0xdd77,	// (0x00061ba4) main_mobtv_pg_hdr_pane

0x9f17,	// (0x0005dd44) main_mobtv_programe_curr_pane_ParamLimits

0x9f17,	// (0x0005dd44) main_mobtv_programe_curr_pane

0x9f24,	// (0x0005dd51) main_mobtv_programe_next_pane_ParamLimits

0x9f24,	// (0x0005dd51) main_mobtv_programe_next_pane

0xdd80,	// (0x00061bad) popup_mobtv_noti_window

0x0998,	// (0x000547c5) main_tv_pg_hdr_pane_g1

0xdd88,	// (0x00061bb5) main_tv_pg_hdr_pane_g2

0xdd90,	// (0x00061bbd) main_tv_pg_hdr_pane_g3

0xdd98,	// (0x00061bc5) main_tv_pg_hdr_pane_g4

0xdda0,	// (0x00061bcd) main_tv_pg_hdr_pane_g5

0xddaa,	// (0x00061bd7) main_tv_pg_hdr_pane_g6

0xddb4,	// (0x00061be1) main_tv_pg_hdr_pane_g7

0xddbe,	// (0x00061beb) main_tv_pg_hdr_pane_g8

0xddc8,	// (0x00061bf5) main_tv_pg_hdr_pane_g9

0xddd2,	// (0x00061bff) main_tv_pg_hdr_pane_g10

0xdddc,	// (0x00061c09) main_tv_pg_hdr_pane_g11

0x000a,

0xfb85,	// (0x000639b2) main_tv_pg_hdr_pane_g

0xdde6,	// (0x00061c13) main_tv_pg_hdr_pane_t1

0xddf4,	// (0x00061c21) main_tv_pg_hdr_pane_t2

0xde02,	// (0x00061c2f) main_tv_pg_hdr_pane_t3

0xde12,	// (0x00061c3f) main_tv_pg_hdr_pane_t4

0xde22,	// (0x00061c4f) main_tv_pg_hdr_pane_t5

0x0004,

0xfb9c,	// (0x000639c9) main_tv_pg_hdr_pane_t

0xde32,	// (0x00061c5f) single_mobtv_pg_channel_pane_ParamLimits

0xde32,	// (0x00061c5f) single_mobtv_pg_channel_pane

0xde44,	// (0x00061c71) single_mobtv_pg_channel_table_pane

0xde4d,	// (0x00061c7a) single_mobtv_pg_channel_thumb_pane

0xde56,	// (0x00061c83) single_tv_pg_channel_pane_g1

0xde5f,	// (0x00061c8c) single_tv_pg_channel_pane_g2

0x0001,

0xfba7,	// (0x000639d4) single_tv_pg_channel_pane_g

0x073e,	// (0x0005456b) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x073e,	// (0x0005456b) bg_single_mobtv_pg_channel_thumb_pane

0xde68,	// (0x00061c95) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xde68,	// (0x00061c95) single_mobtv_pg_channel_thumb_pane_g1

0xde76,	// (0x00061ca3) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xde76,	// (0x00061ca3) single_mobtv_pg_channel_thumb_pane_g2

0xde82,	// (0x00061caf) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xde82,	// (0x00061caf) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfbac,	// (0x000639d9) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfbac,	// (0x000639d9) single_mobtv_pg_channel_thumb_pane_g

0xde8e,	// (0x00061cbb) single_mobtv_pg_channel_thumb_pane_t1

0xde9c,	// (0x00061cc9) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfbb3,	// (0x000639e0) single_mobtv_pg_channel_thumb_pane_t

0x0998,	// (0x000547c5) bg_single_mobtv_pg_channel_table_pane_g1

0x0998,	// (0x000547c5) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf3d8,	// (0x00063205) bg_single_mobtv_pg_channel_table_pane_g

0xdeaa,	// (0x00061cd7) single_mobtv_pg_channel_table_pane_t1

0xdeb8,	// (0x00061ce5) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfbb8,	// (0x000639e5) single_mobtv_pg_channel_table_pane_t

0x9f39,	// (0x0005dd66) main_mobtv_info_pane_g1_ParamLimits

0x9f39,	// (0x0005dd66) main_mobtv_info_pane_g1

0x9f57,	// (0x0005dd84) main_mobtv_info_pane_t1_ParamLimits

0x9f57,	// (0x0005dd84) main_mobtv_info_pane_t1

0x9fcf,	// (0x0005ddfc) main_mobtv_info_pane_t2_ParamLimits

0x9fcf,	// (0x0005ddfc) main_mobtv_info_pane_t2

0x0002,

0xfbc2,	// (0x000639ef) main_mobtv_info_pane_t_ParamLimits

0xfbc2,	// (0x000639ef) main_mobtv_info_pane_t

0xa05e,	// (0x0005de8b) wait_bar_pane_cp05

0xa070,	// (0x0005de9d) main_mobtv_loading_pane_g1_ParamLimits

0xa070,	// (0x0005de9d) main_mobtv_loading_pane_g1

0xa083,	// (0x0005deb0) main_mobtv_loading_pane_g2_ParamLimits

0xa083,	// (0x0005deb0) main_mobtv_loading_pane_g2

0xa08f,	// (0x0005debc) main_mobtv_loading_pane_g3_ParamLimits

0xa08f,	// (0x0005debc) main_mobtv_loading_pane_g3

0x0002,

0xfbc9,	// (0x000639f6) main_mobtv_loading_pane_g_ParamLimits

0xfbc9,	// (0x000639f6) main_mobtv_loading_pane_g

0xdec6,	// (0x00061cf3) main_mobtv_loading_pane_t1_ParamLimits

0xdec6,	// (0x00061cf3) main_mobtv_loading_pane_t1

0xdede,	// (0x00061d0b) main_mobtv_loading_pane_t2_ParamLimits

0xdede,	// (0x00061d0b) main_mobtv_loading_pane_t2

0x0001,

0xfbd0,	// (0x000639fd) main_mobtv_loading_pane_t_ParamLimits

0xfbd0,	// (0x000639fd) main_mobtv_loading_pane_t

0xa0a2,	// (0x0005decf) wait_bar_pane_cp06_ParamLimits

0xa0a2,	// (0x0005decf) wait_bar_pane_cp06

0xdf02,	// (0x00061d2f) main_mobtv_programe_curr_pane_t1

0xdf10,	// (0x00061d3d) main_mobtv_programe_curr_pane_t2

0x0001,

0xfbd5,	// (0x00063a02) main_mobtv_programe_curr_pane_t

0xdf1e,	// (0x00061d4b) main_mobtv_programe_next_pane_t1

0xdf2c,	// (0x00061d59) main_mobtv_programe_next_pane_t2

0xdf3a,	// (0x00061d67) main_mobtv_programe_next_pane_t3

0x0002,

0xfbda,	// (0x00063a07) main_mobtv_programe_next_pane_t

0xbd26,	// (0x0005fb53) bg_popup_mobtv_noti_window_pane

0xdf48,	// (0x00061d75) popup_mobtv_noti_window_g1

0xdf50,	// (0x00061d7d) popup_mobtv_noti_window_t1

0xdf5e,	// (0x00061d8b) popup_mobtv_noti_window_t2

0x0001,

0xfbe1,	// (0x00063a0e) popup_mobtv_noti_window_t

0x0998,	// (0x000547c5) bg_popup_mobtv_noti_window_pane_g1

0xbdab,	// (0x0005fbd8) sc_clock_pane

0xbdab,	// (0x0005fbd8) main_fs_bigclock_pane

0x976f,	// (0x0005d59c) blid2_tripm_pane_t4_ParamLimits

0x976f,	// (0x0005d59c) blid2_tripm_pane_t4

0xa0b1,	// (0x0005dede) sc_clock_pane_g1_ParamLimits

0xa0b1,	// (0x0005dede) sc_clock_pane_g1

0xa0c3,	// (0x0005def0) sc_clock_pane_t1_ParamLimits

0xa0c3,	// (0x0005def0) sc_clock_pane_t1

0xa0e5,	// (0x0005df12) sc_clock_pane_t2_ParamLimits

0xa0e5,	// (0x0005df12) sc_clock_pane_t2

0xa0fd,	// (0x0005df2a) sc_clock_pane_t3_ParamLimits

0xa0fd,	// (0x0005df2a) sc_clock_pane_t3

0x0004,

0xfbe6,	// (0x00063a13) sc_clock_pane_t_ParamLimits

0xfbe6,	// (0x00063a13) sc_clock_pane_t

0xae4a,	// (0x0005ec77) main_fs_bigclock_indicator_pane_ParamLimits

0xae4a,	// (0x0005ec77) main_fs_bigclock_indicator_pane

0xa1a3,	// (0x0005dfd0) main_fs_bigclock_pane_g1_ParamLimits

0xa1a3,	// (0x0005dfd0) main_fs_bigclock_pane_g1

0xae56,	// (0x0005ec83) main_fs_bigclock_pane_t1_ParamLimits

0xae56,	// (0x0005ec83) main_fs_bigclock_pane_t1

0xae68,	// (0x0005ec95) main_fs_bigclock_pane_t2_ParamLimits

0xae68,	// (0x0005ec95) main_fs_bigclock_pane_t2

0xae7c,	// (0x0005eca9) main_fs_bigclock_pane_t3_ParamLimits

0xae7c,	// (0x0005eca9) main_fs_bigclock_pane_t3

0x0002,

0xfd77,	// (0x00063ba4) main_fs_bigclock_pane_t_ParamLimits

0xfd77,	// (0x00063ba4) main_fs_bigclock_pane_t

0xeac5,	// (0x000628f2) main_fs_bigclock_indicator_pane_g1

0xdc7c,	// (0x00061aa9) ncim_query_content_pane_g2_ParamLimits

0xdc7c,	// (0x00061aa9) ncim_query_content_pane_g2

0x0001,

0xfb73,	// (0x000639a0) ncim_query_content_pane_g_ParamLimits

0xfb73,	// (0x000639a0) ncim_query_content_pane_g

0xa116,	// (0x0005df43) sc_clock_pane_t4_ParamLimits

0xa116,	// (0x0005df43) sc_clock_pane_t4

0xbd9d,	// (0x0005fbca) main_radioblah_pane

0xee47,	// (0x00062c74) cell_call4_button_pane_t1_copy1_ParamLimits

0xee47,	// (0x00062c74) cell_call4_button_pane_t1_copy1

0x9d0b,	// (0x0005db38) main_ncimui_pane_t1_ParamLimits

0x9d0b,	// (0x0005db38) main_ncimui_pane_t1

0x9d25,	// (0x0005db52) main_ncimui_pane_t2_ParamLimits

0x9d25,	// (0x0005db52) main_ncimui_pane_t2

0x0002,

0xfb6c,	// (0x00063999) main_ncimui_pane_t_ParamLimits

0xfb6c,	// (0x00063999) main_ncimui_pane_t

0xe0a3,	// (0x00061ed0) main_radioblah_anim_pane_ParamLimits

0xe0a3,	// (0x00061ed0) main_radioblah_anim_pane

0xe0b4,	// (0x00061ee1) main_radioblah_info_pane_ParamLimits

0xe0b4,	// (0x00061ee1) main_radioblah_info_pane

0xe0c8,	// (0x00061ef5) main_radioblah_pane_t1_ParamLimits

0xe0c8,	// (0x00061ef5) main_radioblah_pane_t1

0xe0e4,	// (0x00061f11) main_radioblah_pane_t2_ParamLimits

0xe0e4,	// (0x00061f11) main_radioblah_pane_t2

0x0003,

0xfc07,	// (0x00063a34) main_radioblah_pane_t_ParamLimits

0xfc07,	// (0x00063a34) main_radioblah_pane_t

0xa202,	// (0x0005e02f) main_radioblah_rocker_ctrl_pane_ParamLimits

0xa202,	// (0x0005e02f) main_radioblah_rocker_ctrl_pane

0xe12c,	// (0x00061f59) main_radioblah_info_pane_t1_ParamLimits

0xe12c,	// (0x00061f59) main_radioblah_info_pane_t1

0xa25a,	// (0x0005e087) main_radioblah_info_pane_t2_ParamLimits

0xa25a,	// (0x0005e087) main_radioblah_info_pane_t2

0x0003,

0xfc10,	// (0x00063a3d) main_radioblah_info_pane_t_ParamLimits

0xfc10,	// (0x00063a3d) main_radioblah_info_pane_t

0x0998,	// (0x000547c5) main_radioblah_rocker_ctrl_pane_g1

0xa30a,	// (0x0005e137) main_radioblah_rocker_ctrl_pane_g2

0xa312,	// (0x0005e13f) main_radioblah_rocker_ctrl_pane_g3

0xa31a,	// (0x0005e147) main_radioblah_rocker_ctrl_pane_g4

0xa322,	// (0x0005e14f) main_radioblah_rocker_ctrl_pane_g5

0xa32a,	// (0x0005e157) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc19,	// (0x00063a46) main_radioblah_rocker_ctrl_pane_g

0x9a44,	// (0x0005d871) main_cset_text2_pane_t1_copy1_ParamLimits

0xeea5,	// (0x00062cd2) cam4_image_uncrop_qvga_pane

0xeefe,	// (0x00062d2b) vid4_image_uncrop_qcif_pane

0xf05f,	// (0x00062e8c) cam6_image_uncrop_qvga_pane_ParamLimits

0xf05f,	// (0x00062e8c) cam6_image_uncrop_qvga_pane

0xd968,	// (0x00061795) vid6_image_uncrop_qcif_pane_ParamLimits

0xd968,	// (0x00061795) vid6_image_uncrop_qcif_pane

0xbd26,	// (0x0005fb53) bg_popup_preview_window_pane_cp03

0xdc2e,	// (0x00061a5b) list_cset_text2_pane

0xdc36,	// (0x00061a63) main_cset6_text2_pane_g1

0xdc3e,	// (0x00061a6b) main_cset6_text2_pane_t1

0xa332,	// (0x0005e15f) list_cset_text2_pane_t1_ParamLimits

0xa332,	// (0x0005e15f) list_cset_text2_pane_t1

0xbd9d,	// (0x0005fbca) main_radioblah_pane_ParamLimits

0xa04a,	// (0x0005de77) main_mobtv_info_pane_t3_ParamLimits

0xa04a,	// (0x0005de77) main_mobtv_info_pane_t3

0xa1f0,	// (0x0005e01d) main_radioblah_pane_g1

0xa22a,	// (0x0005e057) main_radioblah_info_pane_g1

0xa2af,	// (0x0005e0dc) main_radioblah_info_pane_t3_ParamLimits

0xa2af,	// (0x0005e0dc) main_radioblah_info_pane_t3

0x5425,	// (0x00059252) highlight_cell_cale_month_pane_ParamLimits

0x5425,	// (0x00059252) highlight_cell_cale_month_pane

0xbdab,	// (0x0005fbd8) main_phob_fisheye_pane

0xc8f2,	// (0x0006071f) scroll_pane_cp0031_ParamLimits

0xc8f2,	// (0x0006071f) scroll_pane_cp0031

0xda76,	// (0x000618a3) wait_bar_pane_cp08_ParamLimits

0x9ac9,	// (0x0005d8f6) cset_list_set_pane_copy1_ParamLimits

0xe166,	// (0x00061f93) highlight_cell_cale_month_pane_g1

0xa34b,	// (0x0005e178) highlight_cell_cale_month_pane_t1

0xd6d0,	// (0x000614fd) list_gen_pane_cp01

0xd275,	// (0x000610a2) scroll_pane_01

0xa359,	// (0x0005e186) list_single_double_fisheye_pane

0xa362,	// (0x0005e18f) list_double_fisheye_pane_g1_ParamLimits

0xa362,	// (0x0005e18f) list_double_fisheye_pane_g1

0xa36e,	// (0x0005e19b) list_double_fisheye_pane_g2_ParamLimits

0xa36e,	// (0x0005e19b) list_double_fisheye_pane_g2

0xa382,	// (0x0005e1af) list_double_fisheye_pane_g3_ParamLimits

0xa382,	// (0x0005e1af) list_double_fisheye_pane_g3

0x0004,

0xfc26,	// (0x00063a53) list_double_fisheye_pane_g_ParamLimits

0xfc26,	// (0x00063a53) list_double_fisheye_pane_g

0xa3ab,	// (0x0005e1d8) list_double_fisheye_pane_t1_ParamLimits

0xa3ab,	// (0x0005e1d8) list_double_fisheye_pane_t1

0xa3c6,	// (0x0005e1f3) list_double_fisheye_pane_t2_ParamLimits

0xa3c6,	// (0x0005e1f3) list_double_fisheye_pane_t2

0x0001,

0xfc31,	// (0x00063a5e) list_double_fisheye_pane_t_ParamLimits

0xfc31,	// (0x00063a5e) list_double_fisheye_pane_t

0xbdab,	// (0x0005fbd8) main_call5_pane

0xa141,	// (0x0005df6e) sc_swipe_pane_ParamLimits

0xa141,	// (0x0005df6e) sc_swipe_pane

0xa3fb,	// (0x0005e228) call5_image_pane_ParamLimits

0xa3fb,	// (0x0005e228) call5_image_pane

0xa418,	// (0x0005e245) call5_swipe_1_pane_ParamLimits

0xa418,	// (0x0005e245) call5_swipe_1_pane

0xa42b,	// (0x0005e258) call5_swipe_2_pane_ParamLimits

0xa42b,	// (0x0005e258) call5_swipe_2_pane

0xa456,	// (0x0005e283) popup_call5_audio_first_window_ParamLimits

0xa456,	// (0x0005e283) popup_call5_audio_first_window

0x073e,	// (0x0005456b) call5_swipe_1_pane_g1_ParamLimits

0x073e,	// (0x0005456b) call5_swipe_1_pane_g1

0xe16e,	// (0x00061f9b) call5_swipe_1_pane_g2_ParamLimits

0xe16e,	// (0x00061f9b) call5_swipe_1_pane_g2

0x0001,

0xfc36,	// (0x00063a63) call5_swipe_1_pane_g_ParamLimits

0xfc36,	// (0x00063a63) call5_swipe_1_pane_g

0xe17a,	// (0x00061fa7) call5_swipe_1_pane_t1_ParamLimits

0xe17a,	// (0x00061fa7) call5_swipe_1_pane_t1

0x073e,	// (0x0005456b) call5_swipe_2_pane_g1_ParamLimits

0x073e,	// (0x0005456b) call5_swipe_2_pane_g1

0xe18f,	// (0x00061fbc) call5_swipe_2_pane_g2_ParamLimits

0xe18f,	// (0x00061fbc) call5_swipe_2_pane_g2

0x0001,

0xfc3b,	// (0x00063a68) call5_swipe_2_pane_g_ParamLimits

0xfc3b,	// (0x00063a68) call5_swipe_2_pane_g

0xe19b,	// (0x00061fc8) call5_swipe_2_pane_t1_ParamLimits

0xe19b,	// (0x00061fc8) call5_swipe_2_pane_t1

0xe1b0,	// (0x00061fdd) sc_swipe_pane_g1_ParamLimits

0xe1b0,	// (0x00061fdd) sc_swipe_pane_g1

0xe1bd,	// (0x00061fea) sc_swipe_pane_g2_ParamLimits

0xe1bd,	// (0x00061fea) sc_swipe_pane_g2

0x0001,

0xfc40,	// (0x00063a6d) sc_swipe_pane_g_ParamLimits

0xfc40,	// (0x00063a6d) sc_swipe_pane_g

0xe1c9,	// (0x00061ff6) sc_swipe_pane_t1_ParamLimits

0xe1c9,	// (0x00061ff6) sc_swipe_pane_t1

0xbdab,	// (0x0005fbd8) main_cmail_launcher_pane

0xa467,	// (0x0005e294) aid_size_cell_cmail_l_ParamLimits

0xa467,	// (0x0005e294) aid_size_cell_cmail_l

0xa475,	// (0x0005e2a2) grid_cmail_l_pane_ParamLimits

0xa475,	// (0x0005e2a2) grid_cmail_l_pane

0xa48f,	// (0x0005e2bc) cell_cmail_l_pane_ParamLimits

0xa48f,	// (0x0005e2bc) cell_cmail_l_pane

0xe1de,	// (0x0006200b) cell_cmail_l_pane_g1_ParamLimits

0xe1de,	// (0x0006200b) cell_cmail_l_pane_g1

0xe1ea,	// (0x00062017) cell_cmail_l_pane_t1_ParamLimits

0xe1ea,	// (0x00062017) cell_cmail_l_pane_t1

0xe200,	// (0x0006202d) cell_cmail_l_pane_t2_ParamLimits

0xe200,	// (0x0006202d) cell_cmail_l_pane_t2

0x0001,

0xfc45,	// (0x00063a72) cell_cmail_l_pane_t_ParamLimits

0xfc45,	// (0x00063a72) cell_cmail_l_pane_t

0xc445,	// (0x00060272) grid_highlight_pane_cp018_ParamLimits

0xc445,	// (0x00060272) grid_highlight_pane_cp018

0x386a,	// (0x00057697) main2_pane_ParamLimits

0x386a,	// (0x00057697) main2_pane

0x083f,	// (0x0005466c) popup_sp_fs_action_menu_bg_pane_g1

0x0847,	// (0x00054674) popup_sp_fs_action_menu_bg_pane_g2

0x084f,	// (0x0005467c) popup_sp_fs_action_menu_bg_pane_g3

0x0857,	// (0x00054684) popup_sp_fs_action_menu_bg_pane_g4

0x085f,	// (0x0005468c) popup_sp_fs_action_menu_bg_pane_g5

0x0867,	// (0x00054694) popup_sp_fs_action_menu_bg_pane_g6

0x086f,	// (0x0005469c) popup_sp_fs_action_menu_bg_pane_g7

0x0877,	// (0x000546a4) popup_sp_fs_action_menu_bg_pane_g8

0x087f,	// (0x000546ac) popup_sp_fs_action_menu_bg_pane_g9

0x0887,	// (0x000546b4) popup_sp_fs_action_menu_bg_pane_g10

0x0887,	// (0x000546b4) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf145,	// (0x00062f72) popup_sp_fs_action_menu_bg_pane_g

0x073e,	// (0x0005456b) list_medium_line_x2_t3_g3_g1_ParamLimits

0x073e,	// (0x0005456b) list_medium_line_x2_t3_g3_g1

0x073e,	// (0x0005456b) list_medium_line_x2_t3_g3_g2_ParamLimits

0x073e,	// (0x0005456b) list_medium_line_x2_t3_g3_g2

0x073e,	// (0x0005456b) list_medium_line_x2_t3_g3_g3_ParamLimits

0x073e,	// (0x0005456b) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1f3,	// (0x00063020) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1f3,	// (0x00063020) list_medium_line_x2_t3_g3_g

0x09b2,	// (0x000547df) list_medium_line_x2_t3_g3_t1_ParamLimits

0x09b2,	// (0x000547df) list_medium_line_x2_t3_g3_t1

0x09b2,	// (0x000547df) list_medium_line_x2_t3_g3_t2_ParamLimits

0x09b2,	// (0x000547df) list_medium_line_x2_t3_g3_t2

0x09b2,	// (0x000547df) list_medium_line_x2_t3_g3_t3_ParamLimits

0x09b2,	// (0x000547df) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1fa,	// (0x00063027) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1fa,	// (0x00063027) list_medium_line_x2_t3_g3_t

0x073e,	// (0x0005456b) list_medium_line_x2_t3_g2_g1_ParamLimits

0x073e,	// (0x0005456b) list_medium_line_x2_t3_g2_g1

0x073e,	// (0x0005456b) list_medium_line_x2_t3_g2_g2_ParamLimits

0x073e,	// (0x0005456b) list_medium_line_x2_t3_g2_g2

0x0001,

0xf201,	// (0x0006302e) list_medium_line_x2_t3_g2_g_ParamLimits

0xf201,	// (0x0006302e) list_medium_line_x2_t3_g2_g

0x09b2,	// (0x000547df) list_medium_line_x2_t3_g2_t1_ParamLimits

0x09b2,	// (0x000547df) list_medium_line_x2_t3_g2_t1

0x09b2,	// (0x000547df) list_medium_line_x2_t3_g2_t2_ParamLimits

0x09b2,	// (0x000547df) list_medium_line_x2_t3_g2_t2

0x09b2,	// (0x000547df) list_medium_line_x2_t3_g2_t3_ParamLimits

0x09b2,	// (0x000547df) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1fa,	// (0x00063027) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1fa,	// (0x00063027) list_medium_line_x2_t3_g2_t

0x073e,	// (0x0005456b) list_medium_line_x2_t4_g4_g1_ParamLimits

0x073e,	// (0x0005456b) list_medium_line_x2_t4_g4_g1

0x073e,	// (0x0005456b) list_medium_line_x2_t4_g4_g2_ParamLimits

0x073e,	// (0x0005456b) list_medium_line_x2_t4_g4_g2

0x073e,	// (0x0005456b) list_medium_line_x2_t4_g4_g3_ParamLimits

0x073e,	// (0x0005456b) list_medium_line_x2_t4_g4_g3

0x073e,	// (0x0005456b) list_medium_line_x2_t4_g4_g4_ParamLimits

0x073e,	// (0x0005456b) list_medium_line_x2_t4_g4_g4

0x0003,

0xf206,	// (0x00063033) list_medium_line_x2_t4_g4_g_ParamLimits

0xf206,	// (0x00063033) list_medium_line_x2_t4_g4_g

0x09b2,	// (0x000547df) list_medium_line_x2_t4_g4_t1_ParamLimits

0x09b2,	// (0x000547df) list_medium_line_x2_t4_g4_t1

0x09b2,	// (0x000547df) list_medium_line_x2_t4_g4_t2_ParamLimits

0x09b2,	// (0x000547df) list_medium_line_x2_t4_g4_t2

0x09b2,	// (0x000547df) list_medium_line_x2_t4_g4_t3_ParamLimits

0x09b2,	// (0x000547df) list_medium_line_x2_t4_g4_t3

0x09b2,	// (0x000547df) list_medium_line_x2_t4_g4_t4_ParamLimits

0x09b2,	// (0x000547df) list_medium_line_x2_t4_g4_t4

0x0003,

0xf20f,	// (0x0006303c) list_medium_line_x2_t4_g4_t_ParamLimits

0xf20f,	// (0x0006303c) list_medium_line_x2_t4_g4_t

0x073e,	// (0x0005456b) list_medium_line_x2_t2_g4_g1_ParamLimits

0x073e,	// (0x0005456b) list_medium_line_x2_t2_g4_g1

0x073e,	// (0x0005456b) list_medium_line_x2_t2_g4_g2_ParamLimits

0x073e,	// (0x0005456b) list_medium_line_x2_t2_g4_g2

0x073e,	// (0x0005456b) list_medium_line_x2_t2_g4_g3_ParamLimits

0x073e,	// (0x0005456b) list_medium_line_x2_t2_g4_g3

0x073e,	// (0x0005456b) list_medium_line_x2_t2_g4_g4_ParamLimits

0x073e,	// (0x0005456b) list_medium_line_x2_t2_g4_g4

0x0003,

0xf206,	// (0x00063033) list_medium_line_x2_t2_g4_g_ParamLimits

0xf206,	// (0x00063033) list_medium_line_x2_t2_g4_g

0x09b2,	// (0x000547df) list_medium_line_x2_t2_g4_t1_ParamLimits

0x09b2,	// (0x000547df) list_medium_line_x2_t2_g4_t1

0x09b2,	// (0x000547df) list_medium_line_x2_t2_g4_t2_ParamLimits

0x09b2,	// (0x000547df) list_medium_line_x2_t2_g4_t2

0x0001,

0xf1d6,	// (0x00063003) list_medium_line_x2_t2_g4_t_ParamLimits

0xf1d6,	// (0x00063003) list_medium_line_x2_t2_g4_t

0x073e,	// (0x0005456b) list_medium_line_x2_t2_g3_g1_ParamLimits

0x073e,	// (0x0005456b) list_medium_line_x2_t2_g3_g1

0x073e,	// (0x0005456b) list_medium_line_x2_t2_g3_g2_ParamLimits

0x073e,	// (0x0005456b) list_medium_line_x2_t2_g3_g2

0x073e,	// (0x0005456b) list_medium_line_x2_t2_g3_g3_ParamLimits

0x073e,	// (0x0005456b) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1f3,	// (0x00063020) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1f3,	// (0x00063020) list_medium_line_x2_t2_g3_g

0x09b2,	// (0x000547df) list_medium_line_x2_t2_g3_t1_ParamLimits

0x09b2,	// (0x000547df) list_medium_line_x2_t2_g3_t1

0x09b2,	// (0x000547df) list_medium_line_x2_t2_g3_t2_ParamLimits

0x09b2,	// (0x000547df) list_medium_line_x2_t2_g3_t2

0x0001,

0xf1d6,	// (0x00063003) list_medium_line_x2_t2_g3_t_ParamLimits

0xf1d6,	// (0x00063003) list_medium_line_x2_t2_g3_t

0x5577,	// (0x000593a4) main_sp_fs_list_pane_ParamLimits

0x5577,	// (0x000593a4) main_sp_fs_list_pane

0x2865,	// (0x00056692) sp_fs_scroll_pane_ParamLimits

0x2865,	// (0x00056692) sp_fs_scroll_pane

0x0edb,	// (0x00054d08) list_medium_line_x2_t3_t1

0x0edb,	// (0x00054d08) list_medium_line_x2_t3_t2

0x0edb,	// (0x00054d08) list_medium_line_x2_t3_t3

0x0002,

0xf2bc,	// (0x000630e9) list_medium_line_x2_t3_t

0x0edb,	// (0x00054d08) list_medium_line_x3_t4_t1

0x0edb,	// (0x00054d08) list_medium_line_x3_t4_t2

0x0edb,	// (0x00054d08) list_medium_line_x3_t4_t3

0x0edb,	// (0x00054d08) list_medium_line_x3_t4_t4

0x0003,

0xf2c3,	// (0x000630f0) list_medium_line_x3_t4_t

0x0edb,	// (0x00054d08) list_medium_line_x4_t5_t1

0x0edb,	// (0x00054d08) list_medium_line_x4_t5_t2

0x0edb,	// (0x00054d08) list_medium_line_x4_t5_t3

0x0edb,	// (0x00054d08) list_medium_line_x4_t5_t4

0x0edb,	// (0x00054d08) list_medium_line_x4_t5_t5

0x0004,

0xf2cc,	// (0x000630f9) list_medium_line_x4_t5_t

0x073e,	// (0x0005456b) list_medium_line_t4_g4_g1_ParamLimits

0x073e,	// (0x0005456b) list_medium_line_t4_g4_g1

0x073e,	// (0x0005456b) list_medium_line_t4_g4_g2_ParamLimits

0x073e,	// (0x0005456b) list_medium_line_t4_g4_g2

0x073e,	// (0x0005456b) list_medium_line_t4_g4_g3_ParamLimits

0x073e,	// (0x0005456b) list_medium_line_t4_g4_g3

0x073e,	// (0x0005456b) list_medium_line_t4_g4_g4_ParamLimits

0x073e,	// (0x0005456b) list_medium_line_t4_g4_g4

0x0003,

0xf206,	// (0x00063033) list_medium_line_t4_g4_g_ParamLimits

0xf206,	// (0x00063033) list_medium_line_t4_g4_g

0x09b2,	// (0x000547df) list_medium_line_t4_g4_t1_ParamLimits

0x09b2,	// (0x000547df) list_medium_line_t4_g4_t1

0x09b2,	// (0x000547df) list_medium_line_t4_g4_t2_ParamLimits

0x09b2,	// (0x000547df) list_medium_line_t4_g4_t2

0x09b2,	// (0x000547df) list_medium_line_t4_g4_t3_ParamLimits

0x09b2,	// (0x000547df) list_medium_line_t4_g4_t3

0x09b2,	// (0x000547df) list_medium_line_t4_g4_t4_ParamLimits

0x09b2,	// (0x000547df) list_medium_line_t4_g4_t4

0x0003,

0xf20f,	// (0x0006303c) list_medium_line_t4_g4_t_ParamLimits

0xf20f,	// (0x0006303c) list_medium_line_t4_g4_t

0x5612,	// (0x0005943f) chi_dic_find_pane_g1

0x64f4,	// (0x0005a321) main_tport_pane

0x0edb,	// (0x00054d08) list_medium_line_plain_t1

0x073e,	// (0x0005456b) list_medium_line_t2_g2_g1_ParamLimits

0x073e,	// (0x0005456b) list_medium_line_t2_g2_g1

0x073e,	// (0x0005456b) list_medium_line_t2_g2_g2_ParamLimits

0x073e,	// (0x0005456b) list_medium_line_t2_g2_g2

0x0001,

0xf201,	// (0x0006302e) list_medium_line_t2_g2_g_ParamLimits

0xf201,	// (0x0006302e) list_medium_line_t2_g2_g

0x09b2,	// (0x000547df) list_medium_line_t2_g2_t1_ParamLimits

0x09b2,	// (0x000547df) list_medium_line_t2_g2_t1

0x09b2,	// (0x000547df) list_medium_line_t2_g2_t2_ParamLimits

0x09b2,	// (0x000547df) list_medium_line_t2_g2_t2

0x0001,

0xf1d6,	// (0x00063003) list_medium_line_t2_g2_t_ParamLimits

0xf1d6,	// (0x00063003) list_medium_line_t2_g2_t

0xd6d9,	// (0x00061506) aid_sp_fs_list_icon_a_sm

0xd6e1,	// (0x0006150e) aid_sp_fs_list_icon_d

0xd6e9,	// (0x00061516) aid_sp_fs_text_primary

0xd6f2,	// (0x0006151f) aid_sp_fs_text_secondary

0xbd26,	// (0x0005fb53) list_medium_line

0xbd26,	// (0x0005fb53) list_medium_line_g2

0xbd26,	// (0x0005fb53) list_medium_line_g3

0xbd26,	// (0x0005fb53) list_medium_line_plain

0xbd26,	// (0x0005fb53) list_medium_line_plain_t2

0xbd26,	// (0x0005fb53) list_medium_line_plain_t3

0xbd26,	// (0x0005fb53) list_medium_line_right_icon

0xbd26,	// (0x0005fb53) list_medium_line_right_iconx2

0xbd26,	// (0x0005fb53) list_medium_line_t2

0xbd26,	// (0x0005fb53) list_medium_line_t2_g2

0xbd26,	// (0x0005fb53) list_medium_line_t2_g3

0xbd26,	// (0x0005fb53) list_medium_line_t2_right_icon

0xbd26,	// (0x0005fb53) list_medium_line_t2_right_iconx2

0xbd26,	// (0x0005fb53) list_medium_line_t3

0xbd26,	// (0x0005fb53) list_medium_line_t3_g2

0xbd26,	// (0x0005fb53) list_medium_line_t3_g3

0xbd26,	// (0x0005fb53) list_medium_line_t3_right_iconx2

0xbd26,	// (0x0005fb53) list_medium_line_t4_g4

0xbd26,	// (0x0005fb53) list_medium_line_x2

0xbd26,	// (0x0005fb53) list_medium_line_x2_t2_g2

0xbd26,	// (0x0005fb53) list_medium_line_x2_t2_g3

0xbd26,	// (0x0005fb53) list_medium_line_x2_t2_g4

0xbd26,	// (0x0005fb53) list_medium_line_x2_t3

0xbd26,	// (0x0005fb53) list_medium_line_x2_t3_g2

0xbd26,	// (0x0005fb53) list_medium_line_x2_t3_g3

0xbd26,	// (0x0005fb53) list_medium_line_x2_t3_g4

0xbd26,	// (0x0005fb53) list_medium_line_x2_t4_g2

0xbd26,	// (0x0005fb53) list_medium_line_x2_t4_g4

0xbd26,	// (0x0005fb53) list_medium_line_x3

0xbd26,	// (0x0005fb53) list_medium_line_x3_t4

0xbd26,	// (0x0005fb53) list_medium_line_x3_t4_g4

0xbd26,	// (0x0005fb53) list_medium_line_x4_t4

0xbd26,	// (0x0005fb53) list_medium_line_x4_t4_g7

0xbd26,	// (0x0005fb53) list_medium_line_x4_t5

0x955f,	// (0x0005d38c) list_single_fs_dyc_pane_ParamLimits

0x955f,	// (0x0005d38c) list_single_fs_dyc_pane

0x073e,	// (0x0005456b) list_medium_line_x4_t4_g7_g1_ParamLimits

0x073e,	// (0x0005456b) list_medium_line_x4_t4_g7_g1

0x073e,	// (0x0005456b) list_medium_line_x4_t4_g7_g2_ParamLimits

0x073e,	// (0x0005456b) list_medium_line_x4_t4_g7_g2

0x073e,	// (0x0005456b) list_medium_line_x4_t4_g7_g3_ParamLimits

0x073e,	// (0x0005456b) list_medium_line_x4_t4_g7_g3

0x073e,	// (0x0005456b) list_medium_line_x4_t4_g7_g4_ParamLimits

0x073e,	// (0x0005456b) list_medium_line_x4_t4_g7_g4

0x073e,	// (0x0005456b) list_medium_line_x4_t4_g7_g5_ParamLimits

0x073e,	// (0x0005456b) list_medium_line_x4_t4_g7_g5

0x073e,	// (0x0005456b) list_medium_line_x4_t4_g7_g6_ParamLimits

0x073e,	// (0x0005456b) list_medium_line_x4_t4_g7_g6

0x074c,	// (0x00054579) list_medium_line_x4_t4_g7_g7_ParamLimits

0x074c,	// (0x00054579) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb4d,	// (0x0006397a) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb4d,	// (0x0006397a) list_medium_line_x4_t4_g7_g

0x09b2,	// (0x000547df) list_medium_line_x4_t4_g7_t1_ParamLimits

0x09b2,	// (0x000547df) list_medium_line_x4_t4_g7_t1

0x09b2,	// (0x000547df) list_medium_line_x4_t4_g7_t2_ParamLimits

0x09b2,	// (0x000547df) list_medium_line_x4_t4_g7_t2

0x09b2,	// (0x000547df) list_medium_line_x4_t4_g7_t3_ParamLimits

0x09b2,	// (0x000547df) list_medium_line_x4_t4_g7_t3

0x096a,	// (0x00054797) list_medium_line_x4_t4_g7_t4_ParamLimits

0x096a,	// (0x00054797) list_medium_line_x4_t4_g7_t4

0x096a,	// (0x00054797) list_medium_line_x4_t4_g7_t5_ParamLimits

0x096a,	// (0x00054797) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb5c,	// (0x00063989) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb5c,	// (0x00063989) list_medium_line_x4_t4_g7_t

0x9cc2,	// (0x0005daef) list_single_dyc_row_pane_ParamLimits

0x9cc2,	// (0x0005daef) list_single_dyc_row_pane

0xa3e8,	// (0x0005e215) call5_gesture_pane_ParamLimits

0xa3e8,	// (0x0005e215) call5_gesture_pane

0xa43e,	// (0x0005e26b) call5_windows_pane_ParamLimits

0xa43e,	// (0x0005e26b) call5_windows_pane

0xa4a9,	// (0x0005e2d6) call5_swipe_1_pane_cp_ParamLimits

0xa4a9,	// (0x0005e2d6) call5_swipe_1_pane_cp

0xa4b5,	// (0x0005e2e2) call5_swipe_2_pane_cp_ParamLimits

0xa4b5,	// (0x0005e2e2) call5_swipe_2_pane_cp

0x0962,	// (0x0005478f) call5_image_pane_cp

0xa4c1,	// (0x0005e2ee) popup_call5_audio_first_window_cp_ParamLimits

0xa4c1,	// (0x0005e2ee) popup_call5_audio_first_window_cp

0xe1b0,	// (0x00061fdd) call5_swipe_1_pane_g1_cp_ParamLimits

0xe1b0,	// (0x00061fdd) call5_swipe_1_pane_g1_cp

0xe21d,	// (0x0006204a) call5_swipe_1_pane_g2_cp

0xe1c9,	// (0x00061ff6) call5_swipe_1_pane_t1_cp_ParamLimits

0xe1c9,	// (0x00061ff6) call5_swipe_1_pane_t1_cp

0xe1b0,	// (0x00061fdd) call5_swipe_2_pane_g1_cp_ParamLimits

0xe1b0,	// (0x00061fdd) call5_swipe_2_pane_g1_cp

0xe225,	// (0x00062052) call5_swipe_2_pane_g2_cp

0xe22d,	// (0x0006205a) call5_swipe_2_pane_t1_cp_ParamLimits

0xe22d,	// (0x0006205a) call5_swipe_2_pane_t1_cp

0xc445,	// (0x00060272) main_sp_fs_email_pane

0xe242,	// (0x0006206f) main_sp_fs_listscroll_pane_te

0xa4cf,	// (0x0005e2fc) popup_sp_fs_action_menu_pane_ParamLimits

0xa4cf,	// (0x0005e2fc) popup_sp_fs_action_menu_pane

0x0998,	// (0x000547c5) bg_sp_fs_ctrlbar_pane_g1

0xe24b,	// (0x00062078) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe254,	// (0x00062081) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe25d,	// (0x0006208a) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x0998,	// (0x000547c5) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc4a,	// (0x00063a77) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x6b82,	// (0x0005a9af) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x6b82,	// (0x0005a9af) bg_sp_fs_ctrlbar_ddmenu_pane

0xe266,	// (0x00062093) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe266,	// (0x00062093) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe272,	// (0x0006209f) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe272,	// (0x0006209f) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc53,	// (0x00063a80) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc53,	// (0x00063a80) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe27e,	// (0x000620ab) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe27e,	// (0x000620ab) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x0998,	// (0x000547c5) list_medium_line_t2_right_icon_g1

0x0edb,	// (0x00054d08) list_medium_line_t2_right_icon_t1

0x0edb,	// (0x00054d08) list_medium_line_t2_right_icon_t2

0x0001,

0xfc58,	// (0x00063a85) list_medium_line_t2_right_icon_t

0x26d0,	// (0x000564fd) bg_sp_fs_ctrlbar_pane_ParamLimits

0x26d0,	// (0x000564fd) bg_sp_fs_ctrlbar_pane

0xa559,	// (0x0005e386) main_sp_fs_ctrlbar_button_pane_cp01

0xa563,	// (0x0005e390) main_sp_fs_ctrlbar_ddmenu_pane

0xe2d0,	// (0x000620fd) main_sp_fs_ctrlbar_pane_g1

0xe2dc,	// (0x00062109) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc5d,	// (0x00063a8a) main_sp_fs_ctrlbar_pane_g

0xa5a1,	// (0x0005e3ce) main_sp_fs_ctrlbar_pane_t1

0xa5e0,	// (0x0005e40d) main_sp_fs_ctrlbar_pane

0xa604,	// (0x0005e431) main_sp_fs_listscroll_pane_te_cp01

0xa624,	// (0x0005e451) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0xa624,	// (0x0005e451) popup_sp_fs_action_menu_pane_cp01

0xc445,	// (0x00060272) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xc445,	// (0x00060272) bg_sp_fs_highlight_list_pane_cp01

0xe303,	// (0x00062130) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe303,	// (0x00062130) sp_fs_action_menu_list_gene_pane_g1

0xe312,	// (0x0006213f) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe312,	// (0x0006213f) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc6b,	// (0x00063a98) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc6b,	// (0x00063a98) sp_fs_action_menu_list_gene_pane_g

0xe31f,	// (0x0006214c) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe31f,	// (0x0006214c) sp_fs_action_menu_list_gene_pane_t1

0xe337,	// (0x00062164) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe337,	// (0x00062164) sp_fs_action_menu_list_gene_pane

0xe356,	// (0x00062183) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe356,	// (0x00062183) popup_sp_fs_action_menu_bg_pane

0xe364,	// (0x00062191) sp_fs_action_menu_list_pane_ParamLimits

0xe364,	// (0x00062191) sp_fs_action_menu_list_pane

0xa649,	// (0x0005e476) sp_fs_scroll_pane_cp01_ParamLimits

0xa649,	// (0x0005e476) sp_fs_scroll_pane_cp01

0x0edb,	// (0x00054d08) list_medium_line_plain_t2_t1

0x0edb,	// (0x00054d08) list_medium_line_plain_t2_t2

0x0001,

0xfc58,	// (0x00063a85) list_medium_line_plain_t2_t

0x0edb,	// (0x00054d08) list_medium_line_plain_t3_t1

0x0edb,	// (0x00054d08) list_medium_line_plain_t3_t2

0x0edb,	// (0x00054d08) list_medium_line_plain_t3_t3

0x0002,

0xf2bc,	// (0x000630e9) list_medium_line_plain_t3_t

0x073e,	// (0x0005456b) list_medium_line_x2_t2_g2_g1_ParamLimits

0x073e,	// (0x0005456b) list_medium_line_x2_t2_g2_g1

0x073e,	// (0x0005456b) list_medium_line_x2_t2_g2_g2_ParamLimits

0x073e,	// (0x0005456b) list_medium_line_x2_t2_g2_g2

0x0001,

0xf201,	// (0x0006302e) list_medium_line_x2_t2_g2_g_ParamLimits

0xf201,	// (0x0006302e) list_medium_line_x2_t2_g2_g

0x09b2,	// (0x000547df) list_medium_line_x2_t2_g2_t1_ParamLimits

0x09b2,	// (0x000547df) list_medium_line_x2_t2_g2_t1

0x09b2,	// (0x000547df) list_medium_line_x2_t2_g2_t2_ParamLimits

0x09b2,	// (0x000547df) list_medium_line_x2_t2_g2_t2

0x0001,

0xf1d6,	// (0x00063003) list_medium_line_x2_t2_g2_t_ParamLimits

0xf1d6,	// (0x00063003) list_medium_line_x2_t2_g2_t

0x073e,	// (0x0005456b) list_medium_line_x2_t4_g2_g1_ParamLimits

0x073e,	// (0x0005456b) list_medium_line_x2_t4_g2_g1

0x073e,	// (0x0005456b) list_medium_line_x2_t4_g2_g2_ParamLimits

0x073e,	// (0x0005456b) list_medium_line_x2_t4_g2_g2

0x0001,

0xf201,	// (0x0006302e) list_medium_line_x2_t4_g2_g_ParamLimits

0xf201,	// (0x0006302e) list_medium_line_x2_t4_g2_g

0x09b2,	// (0x000547df) list_medium_line_x2_t4_g2_t1_ParamLimits

0x09b2,	// (0x000547df) list_medium_line_x2_t4_g2_t1

0x09b2,	// (0x000547df) list_medium_line_x2_t4_g2_t2_ParamLimits

0x09b2,	// (0x000547df) list_medium_line_x2_t4_g2_t2

0x09b2,	// (0x000547df) list_medium_line_x2_t4_g2_t3_ParamLimits

0x09b2,	// (0x000547df) list_medium_line_x2_t4_g2_t3

0x09b2,	// (0x000547df) list_medium_line_x2_t4_g2_t4_ParamLimits

0x09b2,	// (0x000547df) list_medium_line_x2_t4_g2_t4

0x0003,

0xf20f,	// (0x0006303c) list_medium_line_x2_t4_g2_t_ParamLimits

0xf20f,	// (0x0006303c) list_medium_line_x2_t4_g2_t

0x0998,	// (0x000547c5) list_medium_line_t3_right_iconx2_g1

0x0998,	// (0x000547c5) list_medium_line_t3_right_iconx2_g2

0x0998,	// (0x000547c5) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf3dd,	// (0x0006320a) list_medium_line_t3_right_iconx2_g

0x0edb,	// (0x00054d08) list_medium_line_t3_right_iconx2_t1

0x0edb,	// (0x00054d08) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc58,	// (0x00063a85) list_medium_line_t3_right_iconx2_t

0x073e,	// (0x0005456b) list_medium_line_x3_t4_g4_g1_ParamLimits

0x073e,	// (0x0005456b) list_medium_line_x3_t4_g4_g1

0x073e,	// (0x0005456b) list_medium_line_x3_t4_g4_g2_ParamLimits

0x073e,	// (0x0005456b) list_medium_line_x3_t4_g4_g2

0x073e,	// (0x0005456b) list_medium_line_x3_t4_g4_g3_ParamLimits

0x073e,	// (0x0005456b) list_medium_line_x3_t4_g4_g3

0x073e,	// (0x0005456b) list_medium_line_x3_t4_g4_g4_ParamLimits

0x073e,	// (0x0005456b) list_medium_line_x3_t4_g4_g4

0x0003,

0xf206,	// (0x00063033) list_medium_line_x3_t4_g4_g_ParamLimits

0xf206,	// (0x00063033) list_medium_line_x3_t4_g4_g

0x09b2,	// (0x000547df) list_medium_line_x3_t4_g4_t1_ParamLimits

0x09b2,	// (0x000547df) list_medium_line_x3_t4_g4_t1

0x09b2,	// (0x000547df) list_medium_line_x3_t4_g4_t2_ParamLimits

0x09b2,	// (0x000547df) list_medium_line_x3_t4_g4_t2

0x09b2,	// (0x000547df) list_medium_line_x3_t4_g4_t3_ParamLimits

0x09b2,	// (0x000547df) list_medium_line_x3_t4_g4_t3

0x09b2,	// (0x000547df) list_medium_line_x3_t4_g4_t4_ParamLimits

0x09b2,	// (0x000547df) list_medium_line_x3_t4_g4_t4

0x0003,

0xf20f,	// (0x0006303c) list_medium_line_x3_t4_g4_t_ParamLimits

0xf20f,	// (0x0006303c) list_medium_line_x3_t4_g4_t

0xa66f,	// (0x0005e49c) list_single_dyc_row_text_pane_t1_ParamLimits

0xa66f,	// (0x0005e49c) list_single_dyc_row_text_pane_t1

0xa6b8,	// (0x0005e4e5) list_single_dyc_row_text_pane_t2_ParamLimits

0xa6b8,	// (0x0005e4e5) list_single_dyc_row_text_pane_t2

0xe384,	// (0x000621b1) list_single_dyc_row_text_pane_t3_ParamLimits

0xe384,	// (0x000621b1) list_single_dyc_row_text_pane_t3

0x0005,

0xfc70,	// (0x00063a9d) list_single_dyc_row_text_pane_t_ParamLimits

0xfc70,	// (0x00063a9d) list_single_dyc_row_text_pane_t

0xe3a8,	// (0x000621d5) list_single_dyc_row_pane_g1_ParamLimits

0xe3a8,	// (0x000621d5) list_single_dyc_row_pane_g1

0xe3b4,	// (0x000621e1) list_single_dyc_row_pane_g2_ParamLimits

0xe3b4,	// (0x000621e1) list_single_dyc_row_pane_g2

0xe3c0,	// (0x000621ed) list_single_dyc_row_pane_g3_ParamLimits

0xe3c0,	// (0x000621ed) list_single_dyc_row_pane_g3

0xe3cc,	// (0x000621f9) list_single_dyc_row_pane_g4_ParamLimits

0xe3cc,	// (0x000621f9) list_single_dyc_row_pane_g4

0x0003,

0xfc7d,	// (0x00063aaa) list_single_dyc_row_pane_g_ParamLimits

0xfc7d,	// (0x00063aaa) list_single_dyc_row_pane_g

0xe3d8,	// (0x00062205) list_single_dyc_row_text_pane_ParamLimits

0xe3d8,	// (0x00062205) list_single_dyc_row_text_pane

0xbd26,	// (0x0005fb53) bg_sp_fs_scroll_pane

0xe3f7,	// (0x00062224) thumb_sp_fs_scroll_pane

0x073e,	// (0x0005456b) list_medium_line_g1_ParamLimits

0x073e,	// (0x0005456b) list_medium_line_g1

0x09b2,	// (0x000547df) list_medium_line_t1_ParamLimits

0x09b2,	// (0x000547df) list_medium_line_t1

0x073e,	// (0x0005456b) list_medium_line_x2_g1_ParamLimits

0x073e,	// (0x0005456b) list_medium_line_x2_g1

0x073e,	// (0x0005456b) list_medium_line_x2_g2_ParamLimits

0x073e,	// (0x0005456b) list_medium_line_x2_g2

0x0001,

0xf201,	// (0x0006302e) list_medium_line_x2_g_ParamLimits

0xf201,	// (0x0006302e) list_medium_line_x2_g

0x09b2,	// (0x000547df) list_medium_line_x2_t1_ParamLimits

0x09b2,	// (0x000547df) list_medium_line_x2_t1

0x073e,	// (0x0005456b) list_medium_line_x3_g1_ParamLimits

0x073e,	// (0x0005456b) list_medium_line_x3_g1

0xd0ef,	// (0x00060f1c) list_medium_line_x3_g2_ParamLimits

0xd0ef,	// (0x00060f1c) list_medium_line_x3_g2

0x0001,

0xfc86,	// (0x00063ab3) list_medium_line_x3_g_ParamLimits

0xfc86,	// (0x00063ab3) list_medium_line_x3_g

0xe400,	// (0x0006222d) list_medium_line_x3_t1_ParamLimits

0xe400,	// (0x0006222d) list_medium_line_x3_t1

0xe414,	// (0x00062241) thumb_sp_fs_scroll_pane_g1

0xe41d,	// (0x0006224a) thumb_sp_fs_scroll_pane_g2

0xe426,	// (0x00062253) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc8b,	// (0x00063ab8) thumb_sp_fs_scroll_pane_g

0xe414,	// (0x00062241) bg_sp_fs_scroll_pane_g1

0xe41d,	// (0x0006224a) bg_sp_fs_scroll_pane_g2

0xe426,	// (0x00062253) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc8b,	// (0x00063ab8) bg_sp_fs_scroll_pane_g

0x073e,	// (0x0005456b) list_medium_line_x2_t3_g4_g1_ParamLimits

0x073e,	// (0x0005456b) list_medium_line_x2_t3_g4_g1

0x073e,	// (0x0005456b) list_medium_line_x2_t3_g4_g2_ParamLimits

0x073e,	// (0x0005456b) list_medium_line_x2_t3_g4_g2

0x073e,	// (0x0005456b) list_medium_line_x2_t3_g4_g3_ParamLimits

0x073e,	// (0x0005456b) list_medium_line_x2_t3_g4_g3

0x073e,	// (0x0005456b) list_medium_line_x2_t3_g4_g4_ParamLimits

0x073e,	// (0x0005456b) list_medium_line_x2_t3_g4_g4

0x0003,

0xf206,	// (0x00063033) list_medium_line_x2_t3_g4_g_ParamLimits

0xf206,	// (0x00063033) list_medium_line_x2_t3_g4_g

0x09b2,	// (0x000547df) list_medium_line_x2_t3_g4_t1_ParamLimits

0x09b2,	// (0x000547df) list_medium_line_x2_t3_g4_t1

0x09b2,	// (0x000547df) list_medium_line_x2_t3_g4_t2_ParamLimits

0x09b2,	// (0x000547df) list_medium_line_x2_t3_g4_t2

0x09b2,	// (0x000547df) list_medium_line_x2_t3_g4_t3_ParamLimits

0x09b2,	// (0x000547df) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1fa,	// (0x00063027) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1fa,	// (0x00063027) list_medium_line_x2_t3_g4_t

0x073e,	// (0x0005456b) list_medium_line_g2_g1_ParamLimits

0x073e,	// (0x0005456b) list_medium_line_g2_g1

0x073e,	// (0x0005456b) list_medium_line_g2_g2_ParamLimits

0x073e,	// (0x0005456b) list_medium_line_g2_g2

0x0001,

0xf201,	// (0x0006302e) list_medium_line_g2_g_ParamLimits

0xf201,	// (0x0006302e) list_medium_line_g2_g

0x09b2,	// (0x000547df) list_medium_line_g2_t1_ParamLimits

0x09b2,	// (0x000547df) list_medium_line_g2_t1

0x073e,	// (0x0005456b) list_medium_line_t3_g2_g1_ParamLimits

0x073e,	// (0x0005456b) list_medium_line_t3_g2_g1

0x073e,	// (0x0005456b) list_medium_line_t3_g2_g2_ParamLimits

0x073e,	// (0x0005456b) list_medium_line_t3_g2_g2

0x0001,

0xf201,	// (0x0006302e) list_medium_line_t3_g2_g_ParamLimits

0xf201,	// (0x0006302e) list_medium_line_t3_g2_g

0x09b2,	// (0x000547df) list_medium_line_t3_g2_t1_ParamLimits

0x09b2,	// (0x000547df) list_medium_line_t3_g2_t1

0x09b2,	// (0x000547df) list_medium_line_t3_g2_t2_ParamLimits

0x09b2,	// (0x000547df) list_medium_line_t3_g2_t2

0x09b2,	// (0x000547df) list_medium_line_t3_g2_t3_ParamLimits

0x09b2,	// (0x000547df) list_medium_line_t3_g2_t3

0x0002,

0xf1fa,	// (0x00063027) list_medium_line_t3_g2_t_ParamLimits

0xf1fa,	// (0x00063027) list_medium_line_t3_g2_t

0x0998,	// (0x000547c5) list_medium_line_right_icon_g1

0x0edb,	// (0x00054d08) list_medium_line_right_icon_t1

0x073e,	// (0x0005456b) list_medium_line_t2_g1_ParamLimits

0x073e,	// (0x0005456b) list_medium_line_t2_g1

0x09b2,	// (0x000547df) list_medium_line_t2_t1_ParamLimits

0x09b2,	// (0x000547df) list_medium_line_t2_t1

0x09b2,	// (0x000547df) list_medium_line_t2_t2_ParamLimits

0x09b2,	// (0x000547df) list_medium_line_t2_t2

0x0001,

0xf1d6,	// (0x00063003) list_medium_line_t2_t_ParamLimits

0xf1d6,	// (0x00063003) list_medium_line_t2_t

0x073e,	// (0x0005456b) list_medium_line_t3_g1_ParamLimits

0x073e,	// (0x0005456b) list_medium_line_t3_g1

0x09b2,	// (0x000547df) list_medium_line_t3_t1_ParamLimits

0x09b2,	// (0x000547df) list_medium_line_t3_t1

0x09b2,	// (0x000547df) list_medium_line_t3_t2_ParamLimits

0x09b2,	// (0x000547df) list_medium_line_t3_t2

0x09b2,	// (0x000547df) list_medium_line_t3_t3_ParamLimits

0x09b2,	// (0x000547df) list_medium_line_t3_t3

0x0002,

0xf1fa,	// (0x00063027) list_medium_line_t3_t_ParamLimits

0xf1fa,	// (0x00063027) list_medium_line_t3_t

0x073e,	// (0x0005456b) list_medium_line_g3_g1_ParamLimits

0x073e,	// (0x0005456b) list_medium_line_g3_g1

0x073e,	// (0x0005456b) list_medium_line_g3_g2_ParamLimits

0x073e,	// (0x0005456b) list_medium_line_g3_g2

0x073e,	// (0x0005456b) list_medium_line_g3_g3_ParamLimits

0x073e,	// (0x0005456b) list_medium_line_g3_g3

0x0002,

0xf1f3,	// (0x00063020) list_medium_line_g3_g_ParamLimits

0xf1f3,	// (0x00063020) list_medium_line_g3_g

0x09b2,	// (0x000547df) list_medium_line_g3_t1_ParamLimits

0x09b2,	// (0x000547df) list_medium_line_g3_t1

0x073e,	// (0x0005456b) list_medium_line_t2_g3_g1_ParamLimits

0x073e,	// (0x0005456b) list_medium_line_t2_g3_g1

0x073e,	// (0x0005456b) list_medium_line_t2_g3_g2_ParamLimits

0x073e,	// (0x0005456b) list_medium_line_t2_g3_g2

0x073e,	// (0x0005456b) list_medium_line_t2_g3_g3_ParamLimits

0x073e,	// (0x0005456b) list_medium_line_t2_g3_g3

0x0002,

0xf1f3,	// (0x00063020) list_medium_line_t2_g3_g_ParamLimits

0xf1f3,	// (0x00063020) list_medium_line_t2_g3_g

0x09b2,	// (0x000547df) list_medium_line_t2_g3_t1_ParamLimits

0x09b2,	// (0x000547df) list_medium_line_t2_g3_t1

0x09b2,	// (0x000547df) list_medium_line_t2_g3_t2_ParamLimits

0x09b2,	// (0x000547df) list_medium_line_t2_g3_t2

0x0001,

0xf1d6,	// (0x00063003) list_medium_line_t2_g3_t_ParamLimits

0xf1d6,	// (0x00063003) list_medium_line_t2_g3_t

0x073e,	// (0x0005456b) list_medium_line_t3_g3_g1_ParamLimits

0x073e,	// (0x0005456b) list_medium_line_t3_g3_g1

0x073e,	// (0x0005456b) list_medium_line_t3_g3_g2_ParamLimits

0x073e,	// (0x0005456b) list_medium_line_t3_g3_g2

0x073e,	// (0x0005456b) list_medium_line_t3_g3_g3_ParamLimits

0x073e,	// (0x0005456b) list_medium_line_t3_g3_g3

0x0002,

0xf1f3,	// (0x00063020) list_medium_line_t3_g3_g_ParamLimits

0xf1f3,	// (0x00063020) list_medium_line_t3_g3_g

0x09b2,	// (0x000547df) list_medium_line_t3_g3_t1_ParamLimits

0x09b2,	// (0x000547df) list_medium_line_t3_g3_t1

0x09b2,	// (0x000547df) list_medium_line_t3_g3_t2_ParamLimits

0x09b2,	// (0x000547df) list_medium_line_t3_g3_t2

0x09b2,	// (0x000547df) list_medium_line_t3_g3_t3_ParamLimits

0x09b2,	// (0x000547df) list_medium_line_t3_g3_t3

0x0002,

0xf1fa,	// (0x00063027) list_medium_line_t3_g3_t_ParamLimits

0xf1fa,	// (0x00063027) list_medium_line_t3_g3_t

0x0998,	// (0x000547c5) list_medium_line_right_iconx2_g1

0x0998,	// (0x000547c5) list_medium_line_right_iconx2_g2

0x0001,

0xf3d8,	// (0x00063205) list_medium_line_right_iconx2_g

0x0edb,	// (0x00054d08) list_medium_line_right_iconx2_t1

0x0998,	// (0x000547c5) list_medium_line_t2_right_iconx2_g1

0x0998,	// (0x000547c5) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf3d8,	// (0x00063205) list_medium_line_t2_right_iconx2_g

0x0edb,	// (0x00054d08) list_medium_line_t2_right_iconx2_t1

0x0edb,	// (0x00054d08) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc58,	// (0x00063a85) list_medium_line_t2_right_iconx2_t

0x0edb,	// (0x00054d08) list_medium_line_x4_t4_t1

0x0edb,	// (0x00054d08) list_medium_line_x4_t4_t2

0x0edb,	// (0x00054d08) list_medium_line_x4_t4_t3

0x0edb,	// (0x00054d08) list_medium_line_x4_t4_t4

0x0003,

0xf2c3,	// (0x000630f0) list_medium_line_x4_t4_t

0xa830,	// (0x0005e65d) tport_appsw_pane_ParamLimits

0xa830,	// (0x0005e65d) tport_appsw_pane

0xa848,	// (0x0005e675) tport_contact_pane_ParamLimits

0xa848,	// (0x0005e675) tport_contact_pane

0xa860,	// (0x0005e68d) tport_listscroll_pane_ParamLimits

0xa860,	// (0x0005e68d) tport_listscroll_pane

0xa87a,	// (0x0005e6a7) cell_tport_appsw_pane_ParamLimits

0xa87a,	// (0x0005e6a7) cell_tport_appsw_pane

0x2857,	// (0x00056684) tport_appsw_pane_g1_ParamLimits

0x2857,	// (0x00056684) tport_appsw_pane_g1

0xe42f,	// (0x0006225c) tport_contact_pane_g1

0xdd02,	// (0x00061b2f) tport_contact_pane_t1

0xe438,	// (0x00062265) tport_contact_pane_t2

0x0001,

0xfc92,	// (0x00063abf) tport_contact_pane_t

0xe446,	// (0x00062273) list_tport_pane

0xe44f,	// (0x0006227c) scroll_pane_cp_030

0xa8c2,	// (0x0005e6ef) cell_tport_appsw_pane_g1

0xa8d2,	// (0x0005e6ff) cell_tport_appsw_pane_t1

0xa8e0,	// (0x0005e70d) grid_highlight_pane_cp019

0xa8e8,	// (0x0005e715) list_tport_double_graphic_pane_ParamLimits

0xa8e8,	// (0x0005e715) list_tport_double_graphic_pane

0xc445,	// (0x00060272) list_highlight_pane_cp023_ParamLimits

0xc445,	// (0x00060272) list_highlight_pane_cp023

0xa8f5,	// (0x0005e722) list_tport_double_graphic_pane_g1_ParamLimits

0xa8f5,	// (0x0005e722) list_tport_double_graphic_pane_g1

0xa902,	// (0x0005e72f) list_tport_double_graphic_pane_t1_ParamLimits

0xa902,	// (0x0005e72f) list_tport_double_graphic_pane_t1

0xa917,	// (0x0005e744) list_tport_double_graphic_pane_t2_ParamLimits

0xa917,	// (0x0005e744) list_tport_double_graphic_pane_t2

0x0001,

0xfc9e,	// (0x00063acb) list_tport_double_graphic_pane_t_ParamLimits

0xfc9e,	// (0x00063acb) list_tport_double_graphic_pane_t

0xbd26,	// (0x0005fb53) main_cale_note_pane

0x86d2,	// (0x0005c4ff) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x86d2,	// (0x0005c4ff) cell_vitu2_function_top_wide_pane_cp01

0xa05e,	// (0x0005de8b) wait_bar_pane_cp05_ParamLimits

0xc445,	// (0x00060272) listscroll_cmail_pane

0xe458,	// (0x00062285) list_cmail_pane

0xa929,	// (0x0005e756) list_cmail_body_pane

0xa93e,	// (0x0005e76b) list_single_cmail_header_caption_pane

0xa954,	// (0x0005e781) list_single_cmail_header_detail_pane_ParamLimits

0xa954,	// (0x0005e781) list_single_cmail_header_detail_pane

0xe468,	// (0x00062295) list_single_cmail_header_caption_pane_t1

0xa97d,	// (0x0005e7aa) list_single_cmail_header_detail_pane_g1_ParamLimits

0xa97d,	// (0x0005e7aa) list_single_cmail_header_detail_pane_g1

0xe47f,	// (0x000622ac) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe47f,	// (0x000622ac) list_single_cmail_header_detail_pane_g2

0x0002,

0xfca3,	// (0x00063ad0) list_single_cmail_header_detail_pane_g_ParamLimits

0xfca3,	// (0x00063ad0) list_single_cmail_header_detail_pane_g

0xe498,	// (0x000622c5) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe498,	// (0x000622c5) list_single_cmail_header_detail_pane_t1

0xe4f8,	// (0x00062325) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe4f8,	// (0x00062325) list_single_cmail_header_editor_pane_bg

0xde5f,	// (0x00061c8c) list_cmail_body_pane_g1

0xe50f,	// (0x0006233c) list_cmail_body_pane_t1

0xd15b,	// (0x00060f88) list_single_cmail_header_editor_pane_bg_g1

0x0bbd,	// (0x000549ea) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd16b,	// (0x00060f98) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd163,	// (0x00060f90) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd3b9,	// (0x000611e6) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd18b,	// (0x00060fb8) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd17b,	// (0x00060fa8) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd183,	// (0x00060fb0) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x0b9d,	// (0x000549ca) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xa995,	// (0x0005e7c2) calenote_gesture_pane_ParamLimits

0xa995,	// (0x0005e7c2) calenote_gesture_pane

0xa9b5,	// (0x0005e7e2) calenote_window_pane_ParamLimits

0xa9b5,	// (0x0005e7e2) calenote_window_pane

0xe51d,	// (0x0006234a) popup_note_window_cp01

0xa9d1,	// (0x0005e7fe) calenote_swipe_1_pane_ParamLimits

0xa9d1,	// (0x0005e7fe) calenote_swipe_1_pane

0xa4b5,	// (0x0005e2e2) calenote_swipe_2_pane_ParamLimits

0xa4b5,	// (0x0005e2e2) calenote_swipe_2_pane

0xe1b0,	// (0x00061fdd) calenote_swipe_1_pane_g1_ParamLimits

0xe1b0,	// (0x00061fdd) calenote_swipe_1_pane_g1

0xe1bd,	// (0x00061fea) calenote_swipe_1_pane_g2_ParamLimits

0xe1bd,	// (0x00061fea) calenote_swipe_1_pane_g2

0x0001,

0xfc40,	// (0x00063a6d) calenote_swipe_1_pane_g_ParamLimits

0xfc40,	// (0x00063a6d) calenote_swipe_1_pane_g

0xe52f,	// (0x0006235c) calenote_swipe_1_pane_t1_ParamLimits

0xe52f,	// (0x0006235c) calenote_swipe_1_pane_t1

0xe1b0,	// (0x00061fdd) calenote_swipe_2_pane_g1_ParamLimits

0xe1b0,	// (0x00061fdd) calenote_swipe_2_pane_g1

0xe54e,	// (0x0006237b) calenote_swipe_2_pane_g2_ParamLimits

0xe54e,	// (0x0006237b) calenote_swipe_2_pane_g2

0x0001,

0xfcaf,	// (0x00063adc) calenote_swipe_2_pane_g_ParamLimits

0xfcaf,	// (0x00063adc) calenote_swipe_2_pane_g

0xe55a,	// (0x00062387) calenote_swipe_2_pane_t1_ParamLimits

0xe55a,	// (0x00062387) calenote_swipe_2_pane_t1

0xbd26,	// (0x0005fb53) main_mup_navstr_pane

0x7587,	// (0x0005b3b4) main_mup3_pane_t7_ParamLimits

0x7587,	// (0x0005b3b4) main_mup3_pane_t7

0xce5e,	// (0x00060c8b) main_mp4_pane_g6_ParamLimits

0xce5e,	// (0x00060c8b) main_mp4_pane_g6

0xd0b1,	// (0x00060ede) main_image3_pane_t4_ParamLimits

0xd0b1,	// (0x00060ede) main_image3_pane_t4

0xa9e6,	// (0x0005e813) popup_navstr_preview_pane_ParamLimits

0xa9e6,	// (0x0005e813) popup_navstr_preview_pane

0xa9fa,	// (0x0005e827) scroll_navstr_pane_ParamLimits

0xa9fa,	// (0x0005e827) scroll_navstr_pane

0xbd26,	// (0x0005fb53) bg_popup_preview_window_pane_cp04

0xe581,	// (0x000623ae) popup_navstr_preview_pane_t1

0xaa0e,	// (0x0005e83b) scroll_navstr_pane_g1_ParamLimits

0xaa0e,	// (0x0005e83b) scroll_navstr_pane_g1

0xaa22,	// (0x0005e84f) scroll_navstr_pane_t1_ParamLimits

0xaa22,	// (0x0005e84f) scroll_navstr_pane_t1

0xe526,	// (0x00062353) bg_button_pane_cp014

0xe526,	// (0x00062353) bg_button_pane_cp030

0xa38e,	// (0x0005e1bb) list_double_fisheye_pane_g4_ParamLimits

0xa38e,	// (0x0005e1bb) list_double_fisheye_pane_g4

0xa39a,	// (0x0005e1c7) list_double_fisheye_pane_g5_ParamLimits

0xa39a,	// (0x0005e1c7) list_double_fisheye_pane_g5

0x2865,	// (0x00056692) sp_fs_scroll_pane_cp03

0xe2d0,	// (0x000620fd) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe2dc,	// (0x00062109) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc5d,	// (0x00063a8a) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xa5a1,	// (0x0005e3ce) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe460,	// (0x0006228d) sp_fs_scroll_pane_cp02

0x08aa,	// (0x000546d7) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x08aa,	// (0x000546d7) popup_sp_fs_calendar_preview_list_single_pane

0xbd26,	// (0x0005fb53) main_cam6_pano_pane

0xbd9d,	// (0x0005fbca) main_mup3_pane_ParamLimits

0xbd26,	// (0x0005fb53) main_phacti_pane

0x9f31,	// (0x0005dd5e) bg_button_pane_cp11

0x9f4b,	// (0x0005dd78) main_mobtv_info_pane_g2_ParamLimits

0x9f4b,	// (0x0005dd78) main_mobtv_info_pane_g2

0x0001,

0xfbbd,	// (0x000639ea) main_mobtv_info_pane_g_ParamLimits

0xfbbd,	// (0x000639ea) main_mobtv_info_pane_g

0xa128,	// (0x0005df55) sc_clock_pane_t5_ParamLimits

0xa128,	// (0x0005df55) sc_clock_pane_t5

0xa1f0,	// (0x0005e01d) main_radioblah_pane_g1_ParamLimits

0xe0fc,	// (0x00061f29) main_radioblah_pane_t3_ParamLimits

0xe0fc,	// (0x00061f29) main_radioblah_pane_t3

0xe114,	// (0x00061f41) main_radioblah_pane_t4_ParamLimits

0xe114,	// (0x00061f41) main_radioblah_pane_t4

0xa218,	// (0x0005e045) main_radioblah_text_pane_ParamLimits

0xa218,	// (0x0005e045) main_radioblah_text_pane

0xa22a,	// (0x0005e057) main_radioblah_info_pane_g1_ParamLimits

0xa2c3,	// (0x0005e0f0) main_radioblah_info_pane_t4_ParamLimits

0xa2c3,	// (0x0005e0f0) main_radioblah_info_pane_t4

0xc445,	// (0x00060272) main_sp_fs_calendar_pane

0xaa39,	// (0x0005e866) main_phacti_pane_g1

0xaa41,	// (0x0005e86e) phacti_note_pane_ParamLimits

0xaa41,	// (0x0005e86e) phacti_note_pane

0xe598,	// (0x000623c5) phacti_term_pane_ParamLimits

0xe598,	// (0x000623c5) phacti_term_pane

0xe5ad,	// (0x000623da) phacti_note_pane_t1_ParamLimits

0xe5ad,	// (0x000623da) phacti_note_pane_t1

0xe5c4,	// (0x000623f1) phacti_term_pane_g1

0xe5cc,	// (0x000623f9) phacti_term_pane_t1_ParamLimits

0xe5cc,	// (0x000623f9) phacti_term_pane_t1

0xe5f6,	// (0x00062423) popup_sp_fs_calendar_preview_list_single_pane_g1

0x0949,	// (0x00054776) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfcb9,	// (0x00063ae6) popup_sp_fs_calendar_preview_list_single_pane_g

0xe5fe,	// (0x0006242b) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe5fe,	// (0x0006242b) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe614,	// (0x00062441) aid_popup_sp_fs_bg_corner_pane

0x0998,	// (0x000547c5) popup_sp_fs_calendar_preview_bg_pane_g1

0xbd26,	// (0x0005fb53) popup_sp_fs_calendar_preview_bg_pane

0xe61c,	// (0x00062449) popup_sp_fs_calendar_preview_list_pane

0x26d0,	// (0x000564fd) bg_main_sp_fs_cale_pane_ParamLimits

0x26d0,	// (0x000564fd) bg_main_sp_fs_cale_pane

0xe62d,	// (0x0006245a) listscroll_cale_mrui_pane_ParamLimits

0xe62d,	// (0x0006245a) listscroll_cale_mrui_pane

0xe642,	// (0x0006246f) listscroll_sp_fs_schedule_track_pane

0xe64b,	// (0x00062478) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe64b,	// (0x00062478) main_sp_fs_ctrlbar_pane_cp01

0xe65e,	// (0x0006248b) main_sp_fs_ribbon_pane

0xe666,	// (0x00062493) popup_sp_fs_cale_preview_window

0xaab6,	// (0x0005e8e3) list_single_sp_fs_schedule_track_pane_ParamLimits

0xaab6,	// (0x0005e8e3) list_single_sp_fs_schedule_track_pane

0xc445,	// (0x00060272) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xc445,	// (0x00060272) bg_sp_fs_highlight_list_pane_cp03

0xaac9,	// (0x0005e8f6) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xaac9,	// (0x0005e8f6) list_single_sp_fs_schedule_track_pane_g1

0xaad5,	// (0x0005e902) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xaad5,	// (0x0005e902) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfcbe,	// (0x00063aeb) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfcbe,	// (0x00063aeb) list_single_sp_fs_schedule_track_pane_g

0xaae1,	// (0x0005e90e) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xaae1,	// (0x0005e90e) list_single_sp_fs_schedule_track_pane_t1

0xaafb,	// (0x0005e928) sp_fs_schedule_track_pane_ParamLimits

0xaafb,	// (0x0005e928) sp_fs_schedule_track_pane

0xe678,	// (0x000624a5) sp_fs_schedule_track_pane_g1

0xe680,	// (0x000624ad) sp_fs_schedule_track_pane_g2

0xe688,	// (0x000624b5) sp_fs_schedule_track_pane_g3

0xe690,	// (0x000624bd) sp_fs_schedule_track_pane_g4

0xe698,	// (0x000624c5) sp_fs_schedule_track_pane_g5

0x0004,

0xfcc3,	// (0x00063af0) sp_fs_schedule_track_pane_g

0xd15b,	// (0x00060f88) bg_sp_fs_schedule_viewer_highlight_g1

0x0bbd,	// (0x000549ea) bg_sp_fs_schedule_viewer_highlight_g2

0xd163,	// (0x00060f90) bg_sp_fs_schedule_viewer_highlight_g3

0xd16b,	// (0x00060f98) bg_sp_fs_schedule_viewer_highlight_g4

0xd3b9,	// (0x000611e6) bg_sp_fs_schedule_viewer_highlight_g5

0xd17b,	// (0x00060fa8) bg_sp_fs_schedule_viewer_highlight_g6

0xd183,	// (0x00060fb0) bg_sp_fs_schedule_viewer_highlight_g7

0xd18b,	// (0x00060fb8) bg_sp_fs_schedule_viewer_highlight_g8

0x0b9d,	// (0x000549ca) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfcce,	// (0x00063afb) bg_sp_fs_schedule_viewer_highlight_g

0xbd26,	// (0x0005fb53) bg_main_sp_fs_ribbon_pane

0xab0c,	// (0x0005e939) main_sp_fs_ribbon_pane_g1

0xe6a0,	// (0x000624cd) main_sp_fs_ribbon_pane_t1

0xab15,	// (0x0005e942) main_sp_fs_ribbon_pane_t2

0xe6af,	// (0x000624dc) main_sp_fs_ribbon_pane_t3

0x0002,

0xfce1,	// (0x00063b0e) main_sp_fs_ribbon_pane_t

0xe6be,	// (0x000624eb) main_sp_fs_ribbon_scheduler_pane

0xe6c6,	// (0x000624f3) bg_main_sp_fs_ribbon_pane_g1

0xe6cf,	// (0x000624fc) bg_main_sp_fs_ribbon_pane_g2

0xe6d8,	// (0x00062505) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfce8,	// (0x00063b15) bg_main_sp_fs_ribbon_pane_g

0xe6e0,	// (0x0006250d) main_sp_fs_ribbon_scheduler_pane_g1

0xe6e9,	// (0x00062516) main_sp_fs_ribbon_scheduler_pane_g2

0xe6f2,	// (0x0006251f) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfcef,	// (0x00063b1c) main_sp_fs_ribbon_scheduler_pane_g

0xe6fb,	// (0x00062528) list_cale_mrui_pane

0xab24,	// (0x0005e951) sp_fs_scroll_pane_cp07_ParamLimits

0xab24,	// (0x0005e951) sp_fs_scroll_pane_cp07

0xab40,	// (0x0005e96d) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xab40,	// (0x0005e96d) bg_sp_fs_schedule_viewer_highlight

0xe708,	// (0x00062535) list_single_sp_fs_schedule_track_pane_cp01

0xe710,	// (0x0006253d) list_sp_fs_schedule_track_pane

0xe718,	// (0x00062545) sp_fs_scroll_pane_cp06_ParamLimits

0xe718,	// (0x00062545) sp_fs_scroll_pane_cp06

0x0998,	// (0x000547c5) bgmain_sp_fs_calendar_pane_g1

0xab50,	// (0x0005e97d) list_single_cale_mrui_pane_ParamLimits

0xab50,	// (0x0005e97d) list_single_cale_mrui_pane

0xe72a,	// (0x00062557) list_single_cale_mrui_row_pane_ParamLimits

0xe72a,	// (0x00062557) list_single_cale_mrui_row_pane

0xe737,	// (0x00062564) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe737,	// (0x00062564) list_single_cale_mrui_row_pane_g1

0xe77c,	// (0x000625a9) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe77c,	// (0x000625a9) list_single_cale_mrui_row_pane_t1

0xab71,	// (0x0005e99e) list_single_cale_mrui_row_pane_t2_ParamLimits

0xab71,	// (0x0005e99e) list_single_cale_mrui_row_pane_t2

0xe78e,	// (0x000625bb) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe78e,	// (0x000625bb) list_single_cale_mrui_row_pane_t3

0xe7bd,	// (0x000625ea) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe7bd,	// (0x000625ea) list_single_cale_mrui_row_pane_t4

0x0003,

0xfcfd,	// (0x00063b2a) list_single_cale_mrui_row_pane_t_ParamLimits

0xfcfd,	// (0x00063b2a) list_single_cale_mrui_row_pane_t

0xabd9,	// (0x0005ea06) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xabd9,	// (0x0005ea06) list_single_cmail_header_editor_pane_bg_cp01

0xabff,	// (0x0005ea2c) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xabff,	// (0x0005ea2c) list_single_cmail_header_editor_pane_bg_cp02

0xac1f,	// (0x0005ea4c) main_radioblah_text_pane_t1_ParamLimits

0xac1f,	// (0x0005ea4c) main_radioblah_text_pane_t1

0xe7ec,	// (0x00062619) cam6_indi_pane_cp01

0xe7f4,	// (0x00062621) cam6_mode_pane_cp01

0xe7fc,	// (0x00062629) cam6_pano_pane

0xe805,	// (0x00062632) cam6_zoom_pane_cp01

0xe80d,	// (0x0006263a) cam6_pano_image_pane

0xe818,	// (0x00062645) cam6_pano_pane_g1

0xde5f,	// (0x00061c8c) cam6_pano_pane_g2

0xe821,	// (0x0006264e) cam6_pano_pane_g3

0xe82a,	// (0x00062657) cam6_pano_pane_g4

0xcb53,	// (0x00060980) cam6_pano_pane_g5

0xe833,	// (0x00062660) cam6_pano_pane_g6

0xe83d,	// (0x0006266a) cam6_pano_pane_g7

0xe845,	// (0x00062672) cam6_pano_pane_g8

0xe84e,	// (0x0006267b) cam6_pano_pane_g9

0x0008,

0xfd06,	// (0x00063b33) cam6_pano_pane_g

0xbd26,	// (0x0005fb53) main_browser_tag_pane

0xe579,	// (0x000623a6) grid_navstr_albumart_pane

0xe859,	// (0x00062686) cell_navstr_albumart_pane_ParamLimits

0xe859,	// (0x00062686) cell_navstr_albumart_pane

0xe879,	// (0x000626a6) cell_navstr_albumart_pane_g1

0x256c,	// (0x00056399) cell_navstr_albumart_pane_g2

0x257c,	// (0x000563a9) cell_navstr_albumart_pane_g3

0x2574,	// (0x000563a1) cell_navstr_albumart_pane_g4

0x0003,

0xfd19,	// (0x00063b46) cell_navstr_albumart_pane_g

0xac39,	// (0x0005ea66) bt_list_pane_ParamLimits

0xac39,	// (0x0005ea66) bt_list_pane

0xac4d,	// (0x0005ea7a) bt_list_pane_t1

0xac5c,	// (0x0005ea89) bt_list_pane_t2

0x0001,

0xfd22,	// (0x00063b4f) bt_list_pane_t

0xbd26,	// (0x0005fb53) main_cale_prevew_pane

0xac6b,	// (0x0005ea98) popup_cale_preview_window_ParamLimits

0xac6b,	// (0x0005ea98) popup_cale_preview_window

0xc445,	// (0x00060272) bg_popup_preview_window_pane_cp05_ParamLimits

0xc445,	// (0x00060272) bg_popup_preview_window_pane_cp05

0xe881,	// (0x000626ae) list_cale_preview_pane_ParamLimits

0xe881,	// (0x000626ae) list_cale_preview_pane

0xac86,	// (0x0005eab3) list_double_cale_preview_pane_ParamLimits

0xac86,	// (0x0005eab3) list_double_cale_preview_pane

0xac98,	// (0x0005eac5) list_single_cale_preview_pane_ParamLimits

0xac98,	// (0x0005eac5) list_single_cale_preview_pane

0xacae,	// (0x0005eadb) list_single_cale_preview_pane_g1

0xacb6,	// (0x0005eae3) list_single_cale_preview_pane_t1_ParamLimits

0xacb6,	// (0x0005eae3) list_single_cale_preview_pane_t1

0xaccb,	// (0x0005eaf8) list_double_cale_preview_pane_g1

0xacd3,	// (0x0005eb00) list_double_cale_preview_pane_t1_ParamLimits

0xacd3,	// (0x0005eb00) list_double_cale_preview_pane_t1

0xace8,	// (0x0005eb15) list_double_cale_preview_pane_t2_ParamLimits

0xace8,	// (0x0005eb15) list_double_cale_preview_pane_t2

0x0001,

0xfd27,	// (0x00063b54) list_double_cale_preview_pane_t_ParamLimits

0xfd27,	// (0x00063b54) list_double_cale_preview_pane_t

0xbd26,	// (0x0005fb53) main_ezdial_pane

0xc445,	// (0x00060272) main_sp_fs_email_pane_ParamLimits

0xa511,	// (0x0005e33e) cmail_ddmenu_btn01_pane_ParamLimits

0xa511,	// (0x0005e33e) cmail_ddmenu_btn01_pane

0xa524,	// (0x0005e351) cmail_ddmenu_btn02_pane_ParamLimits

0xa524,	// (0x0005e351) cmail_ddmenu_btn02_pane

0xa547,	// (0x0005e374) cmail_ddmenu_btn03_pane_ParamLimits

0xa547,	// (0x0005e374) cmail_ddmenu_btn03_pane

0xa5e0,	// (0x0005e40d) main_sp_fs_ctrlbar_pane_ParamLimits

0xa604,	// (0x0005e431) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xa929,	// (0x0005e756) list_cmail_body_pane_ParamLimits

0xe476,	// (0x000622a3) bg_button_pane_cp12

0xe48b,	// (0x000622b8) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe48b,	// (0x000622b8) list_single_cmail_header_detail_pane_g3

0xe4d4,	// (0x00062301) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe4d4,	// (0x00062301) list_single_cmail_header_detail_pane_t2

0x0001,

0xfcaa,	// (0x00063ad7) list_single_cmail_header_detail_pane_t_ParamLimits

0xfcaa,	// (0x00063ad7) list_single_cmail_header_detail_pane_t

0xe5e1,	// (0x0006240e) phacti_term_pane_t2_ParamLimits

0xe5e1,	// (0x0006240e) phacti_term_pane_t2

0x0001,

0xfcb4,	// (0x00063ae1) phacti_term_pane_t_ParamLimits

0xfcb4,	// (0x00063ae1) phacti_term_pane_t

0xe88d,	// (0x000626ba) aid_size_list_single_double

0xad00,	// (0x0005eb2d) popup_ezdial_listscroll_window

0xad1c,	// (0x0005eb49) popup_number_entry_window_cp01

0x0962,	// (0x0005478f) bg_popup_call_pane_cp09

0xe899,	// (0x000626c6) ezdial_list_pane

0xe8a1,	// (0x000626ce) scroll_pane_cp23

0x26d0,	// (0x000564fd) bg_button_pane_cp028_ParamLimits

0x26d0,	// (0x000564fd) bg_button_pane_cp028

0xad2a,	// (0x0005eb57) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xad2a,	// (0x0005eb57) cmail_ddmenu_btn01_pane_g1

0xad36,	// (0x0005eb63) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xad36,	// (0x0005eb63) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd2c,	// (0x00063b59) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd2c,	// (0x00063b59) cmail_ddmenu_btn01_pane_g

0xe8a9,	// (0x000626d6) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe8a9,	// (0x000626d6) cmail_ddmenu_btn01_pane_t1

0x26d0,	// (0x000564fd) bg_button_pane_cp029_ParamLimits

0x26d0,	// (0x000564fd) bg_button_pane_cp029

0xad4a,	// (0x0005eb77) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xad4a,	// (0x0005eb77) cmail_ddmenu_btn02_pane_g1

0xad62,	// (0x0005eb8f) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xad62,	// (0x0005eb8f) cmail_ddmenu_btn02_pane_t1

0xc445,	// (0x00060272) bg_button_pane_cp031_ParamLimits

0xc445,	// (0x00060272) bg_button_pane_cp031

0xad4a,	// (0x0005eb77) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xad4a,	// (0x0005eb77) cmail_ddmenu_btn03_pane_g1

0xad62,	// (0x0005eb8f) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xad62,	// (0x0005eb8f) cmail_ddmenu_btn03_pane_t1

0x7ee2,	// (0x0005bd0f) cell_dialer2_keypad_pane_t1_ParamLimits

0x7efc,	// (0x0005bd29) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x7efc,	// (0x0005bd29) cell_dialer2_keypad_pane_t1_copy1

0x9d54,	// (0x0005db81) ncimui_group_button_pane

0xc445,	// (0x00060272) main_sp_fs_calendar_pane_ParamLimits

0xa93e,	// (0x0005e76b) list_single_cmail_header_caption_pane_ParamLimits

0xe624,	// (0x00062451) aid_recal_txt_sm_pane

0xbd26,	// (0x0005fb53) mian_recal_day_pane

0xe666,	// (0x00062493) popup_sp_fs_cale_preview_window_ParamLimits

0xe8bf,	// (0x000626ec) list_recal_day_pane

0xe901,	// (0x0006272e) list_single_recal_day_pane_ParamLimits

0xe901,	// (0x0006272e) list_single_recal_day_pane

0xe913,	// (0x00062740) list_single_recal_day_pane_g1_ParamLimits

0xe913,	// (0x00062740) list_single_recal_day_pane_g1

0xe91f,	// (0x0006274c) list_single_recal_day_pane_g2_ParamLimits

0xe91f,	// (0x0006274c) list_single_recal_day_pane_g2

0xe92b,	// (0x00062758) list_single_recal_day_pane_g3_ParamLimits

0xe92b,	// (0x00062758) list_single_recal_day_pane_g3

0xad86,	// (0x0005ebb3) list_single_recal_day_pane_g4_ParamLimits

0xad86,	// (0x0005ebb3) list_single_recal_day_pane_g4

0xe937,	// (0x00062764) list_single_recal_day_pane_g5_ParamLimits

0xe937,	// (0x00062764) list_single_recal_day_pane_g5

0xe943,	// (0x00062770) list_single_recal_day_pane_g6_ParamLimits

0xe943,	// (0x00062770) list_single_recal_day_pane_g6

0x0004,

0xfd3b,	// (0x00063b68) list_single_recal_day_pane_g_ParamLimits

0xfd3b,	// (0x00063b68) list_single_recal_day_pane_g

0xe957,	// (0x00062784) list_single_recal_day_pane_t1

0xe969,	// (0x00062796) list_single_recal_day_pane_t2

0x0001,

0xfd46,	// (0x00063b73) list_single_recal_day_pane_t

0xad9e,	// (0x0005ebcb) ncimui_query_button_pane_ParamLimits

0xad9e,	// (0x0005ebcb) ncimui_query_button_pane

0xadae,	// (0x0005ebdb) ncimui_query_button_pane_t1_ParamLimits

0xadae,	// (0x0005ebdb) ncimui_query_button_pane_t1

0xe97b,	// (0x000627a8) ncimui_query_button_pane_t2_ParamLimits

0xe97b,	// (0x000627a8) ncimui_query_button_pane_t2

0x0001,

0xfd4b,	// (0x00063b78) ncimui_query_button_pane_t_ParamLimits

0xfd4b,	// (0x00063b78) ncimui_query_button_pane_t

0xadc1,	// (0x0005ebee) query_button_pane_ParamLimits

0xadc1,	// (0x0005ebee) query_button_pane

0xbd26,	// (0x0005fb53) bg_button_pane_cp0028

0xe98e,	// (0x000627bb) query_button_pane_t1

0x64f4,	// (0x0005a321) main_tport_pane_ParamLimits

0xa7ed,	// (0x0005e61a) bg_popup_window_pane_cp01_ParamLimits

0xa7ed,	// (0x0005e61a) bg_popup_window_pane_cp01

0xa808,	// (0x0005e635) heading_pane_cp08_ParamLimits

0xa808,	// (0x0005e635) heading_pane_cp08

0xa81b,	// (0x0005e648) heading_pane_cp07_ParamLimits

0xa81b,	// (0x0005e648) heading_pane_cp07

0xa8c2,	// (0x0005e6ef) cell_tport_appsw_pane_g2

0x0002,

0xfc97,	// (0x00063ac4) cell_tport_appsw_pane_g

0x5a30,	// (0x0005985d) input_candi_list_open_g1

0x0d88,	// (0x00054bb5) list_cale_time_pane_g6_ParamLimits

0x0d88,	// (0x00054bb5) list_cale_time_pane_g6

0x6f6b,	// (0x0005ad98) aid_size_touch_calib_1_ParamLimits

0x6f6b,	// (0x0005ad98) aid_size_touch_calib_1

0x6f7d,	// (0x0005adaa) aid_size_touch_calib_2_ParamLimits

0x6f7d,	// (0x0005adaa) aid_size_touch_calib_2

0x6f95,	// (0x0005adc2) aid_size_touch_calib_3_ParamLimits

0x6f95,	// (0x0005adc2) aid_size_touch_calib_3

0x6fb3,	// (0x0005ade0) aid_size_touch_calib_4_ParamLimits

0x6fb3,	// (0x0005ade0) aid_size_touch_calib_4

0x6fcb,	// (0x0005adf8) main_touch_calib_button_group_pane_ParamLimits

0x6fcb,	// (0x0005adf8) main_touch_calib_button_group_pane

0x6fe3,	// (0x0005ae10) main_touch_calib_pane_g1_ParamLimits

0x6ff5,	// (0x0005ae22) main_touch_calib_pane_g2_ParamLimits

0x7007,	// (0x0005ae34) main_touch_calib_pane_g3_ParamLimits

0x7019,	// (0x0005ae46) main_touch_calib_pane_g4_ParamLimits

0xf6d9,	// (0x00063506) main_touch_calib_pane_g_ParamLimits

0x702b,	// (0x0005ae58) main_touch_calib_pane_t1_ParamLimits

0x7045,	// (0x0005ae72) main_touch_calib_pane_t2_ParamLimits

0x705f,	// (0x0005ae8c) main_touch_calib_pane_t3_ParamLimits

0x7073,	// (0x0005aea0) main_touch_calib_pane_t4_ParamLimits

0x7087,	// (0x0005aeb4) main_touch_calib_pane_t5_ParamLimits

0xf6e2,	// (0x0006350f) main_touch_calib_pane_t_ParamLimits

0xc916,	// (0x00060743) list_single_fp_cale_pane_g3_ParamLimits

0xc916,	// (0x00060743) list_single_fp_cale_pane_g3

0xbd9d,	// (0x0005fbca) bg_button_pane_cp012_ParamLimits

0xbd9d,	// (0x0005fbca) bg_vkb2_func_pane_cp03_ParamLimits

0x8ec2,	// (0x0005ccef) cell_vitu2_function_top_pane_g1_ParamLimits

0xbd9d,	// (0x0005fbca) bg_vkb2_func_pane_cp04_ParamLimits

0x9cdf,	// (0x0005db0c) main_ncimui_button_group_pane_ParamLimits

0x9cdf,	// (0x0005db0c) main_ncimui_button_group_pane

0x9d3f,	// (0x0005db6c) main_ncimui_pane_t3_ParamLimits

0x9d3f,	// (0x0005db6c) main_ncimui_pane_t3

0xe58f,	// (0x000623bc) phacti_button_group_pane

0xe88d,	// (0x000626ba) aid_size_list_single_double_ParamLimits

0xad00,	// (0x0005eb2d) popup_ezdial_listscroll_window_ParamLimits

0xad1c,	// (0x0005eb49) popup_number_entry_window_cp01_ParamLimits

0xadd4,	// (0x0005ec01) phacti_button_pane_ParamLimits

0xadd4,	// (0x0005ec01) phacti_button_pane

0xbd26,	// (0x0005fb53) bg_button_pane_cp14

0xe99c,	// (0x000627c9) phacti_button_pane_t1

0xade5,	// (0x0005ec12) main_touch_calib_button_pane_ParamLimits

0xade5,	// (0x0005ec12) main_touch_calib_button_pane

0x07b0,	// (0x000545dd) bg_button_pane_cp18_ParamLimits

0x07b0,	// (0x000545dd) bg_button_pane_cp18

0xe9aa,	// (0x000627d7) main_touch_calib_button_pane_t1_ParamLimits

0xe9aa,	// (0x000627d7) main_touch_calib_button_pane_t1

0xe9c0,	// (0x000627ed) main_touch_calib_button_pane_t2_ParamLimits

0xe9c0,	// (0x000627ed) main_touch_calib_button_pane_t2

0x0001,

0xfd50,	// (0x00063b7d) main_touch_calib_button_pane_t_ParamLimits

0xfd50,	// (0x00063b7d) main_touch_calib_button_pane_t

0xbd26,	// (0x0005fb53) cell_ncimui_button_pane

0xbd26,	// (0x0005fb53) bg_button_pane_cp032

0xe9de,	// (0x0006280b) cell_ncimui_button_pane_t1

0xd091,	// (0x00060ebe) image3_infobar_pane_ParamLimits

0xd091,	// (0x00060ebe) image3_infobar_pane

0xa154,	// (0x0005df81) fs_bigclock_status_pane_ParamLimits

0xa154,	// (0x0005df81) fs_bigclock_status_pane

0xa161,	// (0x0005df8e) main_fs_bigclock_clock_pane_ParamLimits

0xa161,	// (0x0005df8e) main_fs_bigclock_clock_pane

0xa17f,	// (0x0005dfac) main_fs_bigclock_indi_pane_ParamLimits

0xa17f,	// (0x0005dfac) main_fs_bigclock_indi_pane

0xa1b1,	// (0x0005dfde) main_fs_bigclock_swipe_pane_ParamLimits

0xa1b1,	// (0x0005dfde) main_fs_bigclock_swipe_pane

0xbd26,	// (0x0005fb53) main_fs_clock_dumped_data

0xdf6c,	// (0x00061d99) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xdf6c,	// (0x00061d99) list_single_fs_bigclock_indicator_pane_g1

0xdf87,	// (0x00061db4) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xdf87,	// (0x00061db4) list_single_fs_bigclock_indicator_pane_g2

0xdfa1,	// (0x00061dce) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xdfa1,	// (0x00061dce) list_single_fs_bigclock_indicator_pane_g3

0xdfbb,	// (0x00061de8) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xdfbb,	// (0x00061de8) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfbf1,	// (0x00063a1e) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfbf1,	// (0x00063a1e) list_single_fs_bigclock_indicator_pane_g

0xdfe6,	// (0x00061e13) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xdfe6,	// (0x00061e13) list_single_fs_bigclock_indicator_pane_t1

0xe00e,	// (0x00061e3b) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe00e,	// (0x00061e3b) list_single_fs_bigclock_indicator_pane_t2

0xe036,	// (0x00061e63) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe036,	// (0x00061e63) list_single_fs_bigclock_indicator_pane_t3

0xe05e,	// (0x00061e8b) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe05e,	// (0x00061e8b) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfbfc,	// (0x00063a29) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfbfc,	// (0x00063a29) list_single_fs_bigclock_indicator_pane_t

0xe9ec,	// (0x00062819) image3_infobar_fav_pane_ParamLimits

0xe9ec,	// (0x00062819) image3_infobar_fav_pane

0xe9fc,	// (0x00062829) image3_infobar_loc_pane_ParamLimits

0xe9fc,	// (0x00062829) image3_infobar_loc_pane

0xea10,	// (0x0006283d) image3_infobar_time_pane_ParamLimits

0xea10,	// (0x0006283d) image3_infobar_time_pane

0x0998,	// (0x000547c5) image3_infobar_time_pane_g1

0xea20,	// (0x0006284d) image3_infobar_time_pane_t1

0x0998,	// (0x000547c5) image3_infobar_loc_pane_g1

0xea2e,	// (0x0006285b) image3_infobar_loc_pane_g2

0x0001,

0xfd55,	// (0x00063b82) image3_infobar_loc_pane_g

0xea36,	// (0x00062863) image3_infobar_loc_pane_t1

0x0998,	// (0x000547c5) image3_infobar_fav_pane_g1

0xea44,	// (0x00062871) image3_infobar_fav_pane_g2

0x0001,

0xfd5a,	// (0x00063b87) image3_infobar_fav_pane_g

0xea4c,	// (0x00062879) fs_bigclock_status_battery_pane

0xea55,	// (0x00062882) fs_bigclock_status_signal_pane

0xea5e,	// (0x0006288b) fs_bigclock_status_title_pane

0xea67,	// (0x00062894) fs_bigclock_status_signal_pane_g1

0xea70,	// (0x0006289d) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd5f,	// (0x00063b8c) fs_bigclock_status_signal_pane_g

0xea78,	// (0x000628a5) fs_bigclock_status_battery_pane_g1

0xea81,	// (0x000628ae) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd64,	// (0x00063b91) fs_bigclock_status_battery_pane_g

0xea89,	// (0x000628b6) fs_bigclock_status_title_pane_t1

0xadfa,	// (0x0005ec27) main_fs_bigclock_clock_pane_g1

0xadfa,	// (0x0005ec27) main_fs_bigclock_clock_pane_g2

0xae0b,	// (0x0005ec38) main_fs_bigclock_clock_pane_g3

0xae0b,	// (0x0005ec38) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd69,	// (0x00063b96) main_fs_bigclock_clock_pane_g

0xae1e,	// (0x0005ec4b) main_fs_bigclock_clock_pane_t1

0xae34,	// (0x0005ec61) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd72,	// (0x00063b9f) main_fs_bigclock_clock_pane_t

0xea97,	// (0x000628c4) list_single_fs_bigclock_indicator_pane_ParamLimits

0xea97,	// (0x000628c4) list_single_fs_bigclock_indicator_pane

0xeaa8,	// (0x000628d5) list_single_fs_bigclock_pane_ParamLimits

0xeaa8,	// (0x000628d5) list_single_fs_bigclock_pane

0xeace,	// (0x000628fb) main_fs_bigclock_indicator_pane_t1

0xeadd,	// (0x0006290a) list_single_fs_bigclock_pane_g1

0xeae5,	// (0x00062912) list_single_fs_bigclock_pane_t1

0x0998,	// (0x000547c5) main_fs_bigclock_swipe_pane_g1

0xeb28,	// (0x00062955) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd83,	// (0x00063bb0) main_fs_bigclock_swipe_pane_g

0xeb30,	// (0x0006295d) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xeb30,	// (0x0006295d) main_fs_bigclock_swipe_pane_t1

0x5583,	// (0x000593b0) call_type_pane_ParamLimits

0xbd26,	// (0x0005fb53) main_btmg_pane

0xe763,	// (0x00062590) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe763,	// (0x00062590) list_single_cale_mrui_row_pane_g2

0x0002,

0xfcf6,	// (0x00063b23) list_single_cale_mrui_row_pane_g_ParamLimits

0xfcf6,	// (0x00063b23) list_single_cale_mrui_row_pane_g

0xe8e8,	// (0x00062715) list_recal_vselct_arw_lo_pane

0xe8f0,	// (0x0006271d) list_recal_vselct_arw_up_pane

0xe8f8,	// (0x00062725) list_recal_vselct_pane

0xae8e,	// (0x0005ecbb) btmg_button_pane

0xae98,	// (0x0005ecc5) main_btmg_pane_g1

0xbd26,	// (0x0005fb53) bg_button_pane_cp044

0xeb4d,	// (0x0006297a) btmg_button_pane_t1

0x26bc,	// (0x000564e9) aid_listscroll_gen

0xc445,	// (0x00060272) main_cntbar_detail_pane

0xe458,	// (0x00062285) list_cmail_folder_pane

0x2865,	// (0x00056692) sp_fs_scroll_pane_cp03_ParamLimits

0xaea2,	// (0x0005eccf) list_single_fs_dyc_pane_cp01_ParamLimits

0xaea2,	// (0x0005eccf) list_single_fs_dyc_pane_cp01

0xeb5b,	// (0x00062988) aid_size_cmail_indent

0xeb64,	// (0x00062991) list_single_dyc_row_pane_cp01

0xaee5,	// (0x0005ed12) cntbar_detail_list_pane_ParamLimits

0xaee5,	// (0x0005ed12) cntbar_detail_list_pane

0xaf31,	// (0x0005ed5e) main_cntbar_detail_cont_pane_ParamLimits

0xaf31,	// (0x0005ed5e) main_cntbar_detail_cont_pane

0x2865,	// (0x00056692) scroll_pane_cp032_ParamLimits

0x2865,	// (0x00056692) scroll_pane_cp032

0xaf45,	// (0x0005ed72) cntbar_detail_list_event_pane_ParamLimits

0xaf45,	// (0x0005ed72) cntbar_detail_list_event_pane

0xaef5,	// (0x0005ed22) cntbar_detail_list_shct_pane

0x0c0b,	// (0x00054a38) aid_list_gen

0xeb6d,	// (0x0006299a) aid_scroll

0xeb76,	// (0x000629a3) aid_size_touch_scroll_bar

0xa359,	// (0x0005e186) aid_list_double

0xaf55,	// (0x0005ed82) aid_list_single

0xeb7f,	// (0x000629ac) aid_list_single_lg

0xaf5e,	// (0x0005ed8b) aid_list_z_g_a_sm

0xaf66,	// (0x0005ed93) aid_list_z_g_d

0xaf6e,	// (0x0005ed9b) aid_txt_z_prm

0xaf7c,	// (0x0005eda9) aid_txt_z_prm_cp01

0xaf8a,	// (0x0005edb7) aid_txt_z_sec

0xaf98,	// (0x0005edc5) main_cntbar_detail_cont_pane_g1_ParamLimits

0xaf98,	// (0x0005edc5) main_cntbar_detail_cont_pane_g1

0xafac,	// (0x0005edd9) main_cntbar_detail_cont_pane_g2_ParamLimits

0xafac,	// (0x0005edd9) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd88,	// (0x00063bb5) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd88,	// (0x00063bb5) main_cntbar_detail_cont_pane_g

0xeb88,	// (0x000629b5) main_cntbar_detail_cont_pane_t1

0xeb96,	// (0x000629c3) main_cntbar_detail_cont_pane_t2

0xeba4,	// (0x000629d1) main_cntbar_detail_cont_pane_t3

0x0002,

0xfd8d,	// (0x00063bba) main_cntbar_detail_cont_pane_t

0xafbc,	// (0x0005ede9) cell_cntbar_detail_list_shct_pane_ParamLimits

0xafbc,	// (0x0005ede9) cell_cntbar_detail_list_shct_pane

0xebb2,	// (0x000629df) cntbar_detail_list_shct_pane_g1

0xebbb,	// (0x000629e8) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd94,	// (0x00063bc1) cntbar_detail_list_shct_pane_g

0xafd0,	// (0x0005edfd) cntbar_detail_list_event_pane_g1_ParamLimits

0xafd0,	// (0x0005edfd) cntbar_detail_list_event_pane_g1

0xafdc,	// (0x0005ee09) cntbar_detail_list_event_pane_g2_ParamLimits

0xafdc,	// (0x0005ee09) cntbar_detail_list_event_pane_g2

0x0005,

0xfd99,	// (0x00063bc6) cntbar_detail_list_event_pane_g_ParamLimits

0xfd99,	// (0x00063bc6) cntbar_detail_list_event_pane_g

0xb048,	// (0x0005ee75) cntbar_detail_list_event_pane_t1_ParamLimits

0xb048,	// (0x0005ee75) cntbar_detail_list_event_pane_t1

0xb05d,	// (0x0005ee8a) cntbar_detail_list_event_pane_t2_ParamLimits

0xb05d,	// (0x0005ee8a) cntbar_detail_list_event_pane_t2

0x0002,

0xfda6,	// (0x00063bd3) cntbar_detail_list_event_pane_t_ParamLimits

0xfda6,	// (0x00063bd3) cntbar_detail_list_event_pane_t

0x0998,	// (0x000547c5) cell_cntbar_detail_list_shct_pane_g1

0x1390,	// (0x000551bd) navi_pane_mv_g3

0xc445,	// (0x00060272) main_cntbar_detail_pane_ParamLimits

0xbd26,	// (0x0005fb53) main_notif_wgt_pane

0xcdec,	// (0x00060c19) aid_tch_main_mp4_pane_g4

0xd01e,	// (0x00060e4b) popup_slider_window_cp02

0xe8de,	// (0x0006270b) list_recal_day_event_pane

0xaeb9,	// (0x0005ece6) cntbar_detail_btn_pane_ParamLimits

0xaeb9,	// (0x0005ece6) cntbar_detail_btn_pane

0xaecf,	// (0x0005ecfc) cntbar_detail_btn_pane_cp01_ParamLimits

0xaecf,	// (0x0005ecfc) cntbar_detail_btn_pane_cp01

0xaef5,	// (0x0005ed22) cntbar_detail_list_shct_pane_ParamLimits

0xaf05,	// (0x0005ed32) cntbar_detail_pane_g1_ParamLimits

0xaf05,	// (0x0005ed32) cntbar_detail_pane_g1

0xaf15,	// (0x0005ed42) cntbar_detail_pane_t1_ParamLimits

0xaf15,	// (0x0005ed42) cntbar_detail_pane_t1

0xafe8,	// (0x0005ee15) cntbar_detail_list_event_pane_g3_ParamLimits

0xafe8,	// (0x0005ee15) cntbar_detail_list_event_pane_g3

0xb000,	// (0x0005ee2d) cntbar_detail_list_event_pane_g4_ParamLimits

0xb000,	// (0x0005ee2d) cntbar_detail_list_event_pane_g4

0xb018,	// (0x0005ee45) cntbar_detail_list_event_pane_g5_ParamLimits

0xb018,	// (0x0005ee45) cntbar_detail_list_event_pane_g5

0xb030,	// (0x0005ee5d) cntbar_detail_list_event_pane_g6_ParamLimits

0xb030,	// (0x0005ee5d) cntbar_detail_list_event_pane_g6

0xb072,	// (0x0005ee9f) cntbar_detail_list_event_pane_t3_ParamLimits

0xb072,	// (0x0005ee9f) cntbar_detail_list_event_pane_t3

0xb084,	// (0x0005eeb1) popup_notif_wgt_window_ParamLimits

0xb084,	// (0x0005eeb1) popup_notif_wgt_window

0xb09d,	// (0x0005eeca) popup_submenu_window_cp01_ParamLimits

0xb09d,	// (0x0005eeca) popup_submenu_window_cp01

0x0962,	// (0x0005478f) bg_popup_window_pane_cp10

0xebc4,	// (0x000629f1) listscroll_notif_wgt_pane

0xebd6,	// (0x00062a03) list_notif_wgt_window

0xebdf,	// (0x00062a0c) scroll_pane_cp033

0xb0b3,	// (0x0005eee0) list_notif_wgt_row_pane_ParamLimits

0xb0b3,	// (0x0005eee0) list_notif_wgt_row_pane

0xebe8,	// (0x00062a15) aid_size_list_notif_wgt_del

0xebf5,	// (0x00062a22) list_notif_wgt_row_pane_g1

0xec01,	// (0x00062a2e) list_notif_wgt_row_pane_g2

0xec10,	// (0x00062a3d) list_notif_wgt_row_pane_g3

0x0002,

0xfdad,	// (0x00063bda) list_notif_wgt_row_pane_g

0xec1d,	// (0x00062a4a) list_notif_wgt_row_pane_t1

0xec33,	// (0x00062a60) list_notif_wgt_row_pane_t2

0xec45,	// (0x00062a72) list_notif_wgt_row_pane_t3

0x0002,

0xfdb4,	// (0x00063be1) list_notif_wgt_row_pane_t

0xd3d3,	// (0x00061200) list_recal_day_event_pane_g1

0xec57,	// (0x00062a84) list_recal_day_event_pane_t1

0xbd26,	// (0x0005fb53) bg_button_pane_cp045

0xec66,	// (0x00062a93) cntbar_detail_btn_pane_t1

0x26d0,	// (0x000564fd) main_callh_pane_ParamLimits

0x26d0,	// (0x000564fd) main_callh_pane

0xbd26,	// (0x0005fb53) main_coverflow0_pane

0xbd26,	// (0x0005fb53) main_wgtman_pane

0xa1c9,	// (0x0005dff6) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xa1c9,	// (0x0005dff6) main_fs_bigclock_unlock_btn_pane

0xa8ba,	// (0x0005e6e7) bg_button_pane_cp16

0xa8ca,	// (0x0005e6f7) cell_tport_appsw_pane_g3

0xb0c3,	// (0x0005eef0) cf0_flow_pane_ParamLimits

0xb0c3,	// (0x0005eef0) cf0_flow_pane

0xec74,	// (0x00062aa1) listscroll_cf0_pane

0xec7f,	// (0x00062aac) main_cf0_pane_g1

0xb0d8,	// (0x0005ef05) main_cf0_pane_t1_ParamLimits

0xb0d8,	// (0x0005ef05) main_cf0_pane_t1

0xb0ef,	// (0x0005ef1c) main_cf0_pane_t2_ParamLimits

0xb0ef,	// (0x0005ef1c) main_cf0_pane_t2

0x0001,

0xfdc0,	// (0x00063bed) main_cf0_pane_t_ParamLimits

0xfdc0,	// (0x00063bed) main_cf0_pane_t

0xec91,	// (0x00062abe) scroll_pane_cp11

0xb106,	// (0x0005ef33) cf0_flow_pane_g1

0xb10e,	// (0x0005ef3b) cf0_flow_pane_g2

0x0001,

0xfdc5,	// (0x00063bf2) cf0_flow_pane_g

0xb116,	// (0x0005ef43) cf0_flow_pane_t1

0xbd26,	// (0x0005fb53) main_call6_pane

0xbd26,	// (0x0005fb53) main_calllock_pane

0xb124,	// (0x0005ef51) call6_btn_grp_pane_ParamLimits

0xb124,	// (0x0005ef51) call6_btn_grp_pane

0xb13e,	// (0x0005ef6b) call6_pane_g1_ParamLimits

0xb13e,	// (0x0005ef6b) call6_pane_g1

0xb154,	// (0x0005ef81) popup_call6_1st_window_ParamLimits

0xb154,	// (0x0005ef81) popup_call6_1st_window

0xb165,	// (0x0005ef92) popup_call6_2nd_window_ParamLimits

0xb165,	// (0x0005ef92) popup_call6_2nd_window

0xb176,	// (0x0005efa3) cell_call6_btn_pane_ParamLimits

0xb176,	// (0x0005efa3) cell_call6_btn_pane

0x0962,	// (0x0005478f) bg_popup_call2_in_pane_cp03

0xec9c,	// (0x00062ac9) popup_call6_1st_window_g1

0xeca4,	// (0x00062ad1) popup_call6_1st_window_g2

0xecac,	// (0x00062ad9) popup_call6_1st_window_g3

0x0002,

0xfdca,	// (0x00063bf7) popup_call6_1st_window_g

0xecb4,	// (0x00062ae1) popup_call6_1st_window_t1

0xecc3,	// (0x00062af0) popup_call6_1st_window_t2

0xecd1,	// (0x00062afe) popup_call6_1st_window_t3

0x0002,

0xfdd1,	// (0x00063bfe) popup_call6_1st_window_t

0x0962,	// (0x0005478f) bg_popup_call2_in_pane_cp04

0xecdf,	// (0x00062b0c) popup_call6_2nd_window_g1

0xece7,	// (0x00062b14) popup_call6_2nd_window_g2

0xecef,	// (0x00062b1c) popup_call6_2nd_window_g3

0x0002,

0xfdd8,	// (0x00063c05) popup_call6_2nd_window_g

0xecf7,	// (0x00062b24) popup_call6_2nd_window_t1

0xbdab,	// (0x0005fbd8) bg_button_pane_cp15

0xf06d,	// (0x00062e9a) cell_call6_btn_pane_g1

0xf076,	// (0x00062ea3) cell_call6_btn_pane_t1

0xb189,	// (0x0005efb6) listscroll_wgtman_pane_ParamLimits

0xb189,	// (0x0005efb6) listscroll_wgtman_pane

0xb1aa,	// (0x0005efd7) wgtman_btn_pane_ParamLimits

0xb1aa,	// (0x0005efd7) wgtman_btn_pane

0x1197,	// (0x00054fc4) aid_scroll_copy1

0xed06,	// (0x00062b33) list_wgtman_pane

0xb1ed,	// (0x0005f01a) wgtman_btn_pane_g1_ParamLimits

0xb1ed,	// (0x0005f01a) wgtman_btn_pane_g1

0xb219,	// (0x0005f046) wgtman_btn_pane_t1_ParamLimits

0xb219,	// (0x0005f046) wgtman_btn_pane_t1

0xed10,	// (0x00062b3d) wgtman_btn_pane_t2_ParamLimits

0xed10,	// (0x00062b3d) wgtman_btn_pane_t2

0x0001,

0xfddf,	// (0x00063c0c) wgtman_btn_pane_t_ParamLimits

0xfddf,	// (0x00063c0c) wgtman_btn_pane_t

0xb256,	// (0x0005f083) listrow_wgtman_pane_ParamLimits

0xb256,	// (0x0005f083) listrow_wgtman_pane

0xb268,	// (0x0005f095) listrow_wgtman_pane_g1

0xb275,	// (0x0005f0a2) listrow_wgtman_pane_g2

0x0001,

0xfde4,	// (0x00063c11) listrow_wgtman_pane_g

0xb293,	// (0x0005f0c0) listrow_wgtman_pane_t1

0xb2ab,	// (0x0005f0d8) listrow_wgtman_pane_t2

0x0001,

0xfde9,	// (0x00063c16) listrow_wgtman_pane_t

0xb2d1,	// (0x0005f0fe) wait_bar_pane_cp09

0xed27,	// (0x00062b54) main_calllock_btn_pane

0xed31,	// (0x00062b5e) main_calllock_pane_g1

0xbd26,	// (0x0005fb53) bg_button_pane_cp17

0xed39,	// (0x00062b66) main_calllock_btn_pane_g1

0xed42,	// (0x00062b6f) main_calllock_btn_pane_t1

0xbd26,	// (0x0005fb53) main_dialer3_pane

0xbd26,	// (0x0005fb53) main_fmrd2_pane

0x0998,	// (0x000547c5) main_fs_bigclock_unlock_btn_pane_g1

0xb2eb,	// (0x0005f118) main_fs_bigclock_unlock_btn_pane_t1

0xb2f9,	// (0x0005f126) area_fmrd2_info_pane_ParamLimits

0xb2f9,	// (0x0005f126) area_fmrd2_info_pane

0xb30a,	// (0x0005f137) area_fmrd2_visual_pane_ParamLimits

0xb30a,	// (0x0005f137) area_fmrd2_visual_pane

0xb318,	// (0x0005f145) fmrd2_indi_pane_ParamLimits

0xb318,	// (0x0005f145) fmrd2_indi_pane

0xb325,	// (0x0005f152) area_fmrd2_visual_pane_g1

0xb32d,	// (0x0005f15a) area_fmrd2_visual_pane_t1

0xb33d,	// (0x0005f16a) area_fmrd2_visual_pane_t2

0xb34d,	// (0x0005f17a) area_fmrd2_visual_pane_t3

0x0002,

0xfdf3,	// (0x00063c20) area_fmrd2_visual_pane_t

0xb35d,	// (0x0005f18a) area_fmrd2_info_pane_g1

0xb365,	// (0x0005f192) area_fmrd2_info_pane_t1

0xb375,	// (0x0005f1a2) area_fmrd2_info_pane_t2

0xb385,	// (0x0005f1b2) area_fmrd2_info_pane_t3

0xb395,	// (0x0005f1c2) area_fmrd2_info_pane_t4

0x0003,

0xfdfa,	// (0x00063c27) area_fmrd2_info_pane_t

0xb3a3,	// (0x0005f1d0) fmrd2_indi_pane_t1

0xb3b3,	// (0x0005f1e0) fmrd2_indi_pane_t2

0xb3c3,	// (0x0005f1f0) fmrd2_indi_pane_t3

0x0002,

0xfe03,	// (0x00063c30) fmrd2_indi_pane_t

0xdfca,	// (0x00061df7) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xdfca,	// (0x00061df7) list_single_fs_bigclock_indicator_pane_g5

0xe07b,	// (0x00061ea8) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe07b,	// (0x00061ea8) list_single_fs_bigclock_indicator_pane_t5

0xaa55,	// (0x0005e882) aid_cell_bcale_month_pane_ParamLimits

0xaa55,	// (0x0005e882) aid_cell_bcale_month_pane

0xaa73,	// (0x0005e8a0) bcale_month_pane_ParamLimits

0xaa73,	// (0x0005e8a0) bcale_month_pane

0xaa97,	// (0x0005e8c4) bcale_preview_pane_ParamLimits

0xaa97,	// (0x0005e8c4) bcale_preview_pane

0xeae5,	// (0x00062912) list_single_fs_bigclock_pane_t1_ParamLimits

0xeb04,	// (0x00062931) list_single_fs_bigclock_pane_t2_ParamLimits

0xeb04,	// (0x00062931) list_single_fs_bigclock_pane_t2

0x0001,

0xfd7e,	// (0x00063bab) list_single_fs_bigclock_pane_t_ParamLimits

0xfd7e,	// (0x00063bab) list_single_fs_bigclock_pane_t

0xb2e3,	// (0x0005f110) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfdee,	// (0x00063c1b) main_fs_bigclock_unlock_btn_pane_g

0xb3d3,	// (0x0005f200) aid_dia3_key_size_ParamLimits

0xb3d3,	// (0x0005f200) aid_dia3_key_size

0xb3e2,	// (0x0005f20f) aid_dia3_listrow_size_ParamLimits

0xb3e2,	// (0x0005f20f) aid_dia3_listrow_size

0xb3f7,	// (0x0005f224) dia3_keypad_fun_pane_ParamLimits

0xb3f7,	// (0x0005f224) dia3_keypad_fun_pane

0xb413,	// (0x0005f240) dia3_keypad_num_pane_ParamLimits

0xb413,	// (0x0005f240) dia3_keypad_num_pane

0xb42e,	// (0x0005f25b) dia3_listscroll_pane_ParamLimits

0xb42e,	// (0x0005f25b) dia3_listscroll_pane

0xb441,	// (0x0005f26e) dia3_numentry_pane_ParamLimits

0xb441,	// (0x0005f26e) dia3_numentry_pane

0xed51,	// (0x00062b7e) dia3_list_pane

0xed5c,	// (0x00062b89) scroll_pane_cp12

0xbd26,	// (0x0005fb53) bg_dia3_numentry_pane

0xb459,	// (0x0005f286) dia3_numentry_pane_t1

0xb468,	// (0x0005f295) cell_dia3_key_num_pane

0xb470,	// (0x0005f29d) cell_dia3_key0_fun_pane_ParamLimits

0xb470,	// (0x0005f29d) cell_dia3_key0_fun_pane

0xb484,	// (0x0005f2b1) cell_dia3_key1_fun_pane_ParamLimits

0xb484,	// (0x0005f2b1) cell_dia3_key1_fun_pane

0xb49c,	// (0x0005f2c9) dia3_listrow_pane

0xdd1d,	// (0x00061b4a) bg_dia3_numentry_pane_g1

0xbd26,	// (0x0005fb53) bg_button_pane_cp21

0xed67,	// (0x00062b94) cell_dia3_key_num_pane_t1

0xed75,	// (0x00062ba2) cell_dia3_key_num_pane_t2

0xed84,	// (0x00062bb1) cell_dia3_key_num_pane_t3

0xed93,	// (0x00062bc0) cell_dia3_key_num_pane_t4

0x0003,

0xfe0a,	// (0x00063c37) cell_dia3_key_num_pane_t

0xbd26,	// (0x0005fb53) bg_button_pane_cp19

0xb4ae,	// (0x0005f2db) cell_dia3_key0_fun_pane_g1

0xbd26,	// (0x0005fb53) bg_button_pane_cp20

0xb4b6,	// (0x0005f2e3) cell_dia3_key1_fun_pane_g1

0xb4be,	// (0x0005f2eb) area_left_week_number_pane

0xb4ca,	// (0x0005f2f7) area_top_day_name_pane

0xb4dd,	// (0x0005f30a) frame_month_view_pane

0xeda2,	// (0x00062bcf) grid_month_view_pane

0xb4f0,	// (0x0005f31d) cell_top_day_name_pane_ParamLimits

0xb4f0,	// (0x0005f31d) cell_top_day_name_pane

0xb51d,	// (0x0005f34a) cell_area_left_week_number_pane_ParamLimits

0xb51d,	// (0x0005f34a) cell_area_left_week_number_pane

0xb531,	// (0x0005f35e) cell_month_view_pane_ParamLimits

0xb531,	// (0x0005f35e) cell_month_view_pane

0xedb0,	// (0x00062bdd) frm_month_g1

0xb55e,	// (0x0005f38b) frm_month_g2

0xb571,	// (0x0005f39e) frm_month_g3

0xb584,	// (0x0005f3b1) frm_month_g4

0xb597,	// (0x0005f3c4) frm_month_g5

0xb5aa,	// (0x0005f3d7) frm_month_g6

0xb5bd,	// (0x0005f3ea) frm_month_g7

0xedbd,	// (0x00062bea) frm_month_g8

0xb5d0,	// (0x0005f3fd) frm_month_g9

0xb5e0,	// (0x0005f40d) frm_month_g10

0xb5f0,	// (0x0005f41d) frm_month_g11

0xb600,	// (0x0005f42d) frm_month_g12

0xb612,	// (0x0005f43f) frm_month_g13

0xb624,	// (0x0005f451) frm_month_g14

0xb638,	// (0x0005f465) frm_month_g15

0xb64c,	// (0x0005f479) frm_month_g16

0x000f,

0xfe13,	// (0x00063c40) frm_month_g

0xedca,	// (0x00062bf7) cell_top_day_name_pane_t1

0xb660,	// (0x0005f48d) cell_area_left_week_number_pane_g1

0xb66c,	// (0x0005f499) cell_area_left_week_number_pane_t1

0x073e,	// (0x0005456b) cell_month_view_pane_g1

0xb67f,	// (0x0005f4ac) cell_month_view_pane_t1

0xbd26,	// (0x0005fb53) main_fps_pane

0xe298,	// (0x000620c5) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe298,	// (0x000620c5) cmail_ddmenu_btn02_pane_cp1

0xe2b4,	// (0x000620e1) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe2b4,	// (0x000620e1) cmail_ddmenu_btn02_pane_cp2

0xad56,	// (0x0005eb83) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xad56,	// (0x0005eb83) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfd31,	// (0x00063b5e) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfd31,	// (0x00063b5e) cmail_ddmenu_btn02_pane_g

0xad74,	// (0x0005eba1) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xad74,	// (0x0005eba1) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfd36,	// (0x00063b63) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfd36,	// (0x00063b63) cmail_ddmenu_btn02_pane_t

0xb692,	// (0x0005f4bf) fps_text_pane_ParamLimits

0xb692,	// (0x0005f4bf) fps_text_pane

0xb6a9,	// (0x0005f4d6) main_fps_pane_g1_ParamLimits

0xb6a9,	// (0x0005f4d6) main_fps_pane_g1

0xb6c3,	// (0x0005f4f0) wait_bar_pane_cp010_ParamLimits

0xb6c3,	// (0x0005f4f0) wait_bar_pane_cp010

0xb6d4,	// (0x0005f501) fps_text_pane_t1_ParamLimits

0xb6d4,	// (0x0005f501) fps_text_pane_t1

0x01b0,	// (0x00053fdd) cam4_image_uncrop_pane_g1

0x01b9,	// (0x00053fe6) cam4_image_uncrop_pane_g2

0x8417,	// (0x0005c244) cam4_image_uncrop_pane_g3

0x8420,	// (0x0005c24d) cam4_image_uncrop_pane_g4

0x0003,

0xf875,	// (0x000636a2) cam4_image_uncrop_pane_g

0xb49c,	// (0x0005f2c9) dia3_listrow_pane_ParamLimits

0xbd26,	// (0x0005fb53) main_phob2_pane

0xa88b,	// (0x0005e6b8) cell_tport_appsw_pane_cp02_ParamLimits

0xa88b,	// (0x0005e6b8) cell_tport_appsw_pane_cp02

0xa89f,	// (0x0005e6cc) cell_tport_appsw_pane_cp03_ParamLimits

0xa89f,	// (0x0005e6cc) cell_tport_appsw_pane_cp03

0xbd26,	// (0x0005fb53) phob2_contact_card_pane

0xbd26,	// (0x0005fb53) phob2_listscroll_pane

0xeddd,	// (0x00062c0a) phob2_list_pane

0xede5,	// (0x00062c12) scroll_pane_cp034

0xb6ec,	// (0x0005f519) phob2_cc_data_pane_ParamLimits

0xb6ec,	// (0x0005f519) phob2_cc_data_pane

0xb70b,	// (0x0005f538) phob2_cc_listscroll_pane_ParamLimits

0xb70b,	// (0x0005f538) phob2_cc_listscroll_pane

0xb256,	// (0x0005f083) list_double_large_graphic_phob2_pane_ParamLimits

0xb256,	// (0x0005f083) list_double_large_graphic_phob2_pane

0xb729,	// (0x0005f556) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xb729,	// (0x0005f556) list_double_large_graphic_phob2_pane_g1

0xb736,	// (0x0005f563) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xb736,	// (0x0005f563) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfe34,	// (0x00063c61) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfe34,	// (0x00063c61) list_double_large_graphic_phob2_pane_g

0xb75c,	// (0x0005f589) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xb75c,	// (0x0005f589) list_double_large_graphic_phob2_pane_t1

0xb771,	// (0x0005f59e) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xb771,	// (0x0005f59e) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfe3d,	// (0x00063c6a) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfe3d,	// (0x00063c6a) list_double_large_graphic_phob2_pane_t

0xbd26,	// (0x0005fb53) list_highlight_pane_cp024

0xeded,	// (0x00062c1a) phob2_cc_button_pane

0xb786,	// (0x0005f5b3) phob2_cc_data_pane_g1_ParamLimits

0xb786,	// (0x0005f5b3) phob2_cc_data_pane_g1

0xb79d,	// (0x0005f5ca) phob2_cc_data_pane_g2_ParamLimits

0xb79d,	// (0x0005f5ca) phob2_cc_data_pane_g2

0x0001,

0xfe42,	// (0x00063c6f) phob2_cc_data_pane_g_ParamLimits

0xfe42,	// (0x00063c6f) phob2_cc_data_pane_g

0xb7af,	// (0x0005f5dc) phob2_cc_data_pane_t1_ParamLimits

0xb7af,	// (0x0005f5dc) phob2_cc_data_pane_t1

0xb7c7,	// (0x0005f5f4) phob2_cc_data_pane_t2_ParamLimits

0xb7c7,	// (0x0005f5f4) phob2_cc_data_pane_t2

0xb7df,	// (0x0005f60c) phob2_cc_data_pane_t3_ParamLimits

0xb7df,	// (0x0005f60c) phob2_cc_data_pane_t3

0x0002,

0xfe47,	// (0x00063c74) phob2_cc_data_pane_t_ParamLimits

0xfe47,	// (0x00063c74) phob2_cc_data_pane_t

0x001c,	// (0x00053e49) phob2_cc_list_pane_ParamLimits

0x001c,	// (0x00053e49) phob2_cc_list_pane

0xd46a,	// (0x00061297) scroll_pane_cp035_ParamLimits

0xd46a,	// (0x00061297) scroll_pane_cp035

0xc445,	// (0x00060272) bg_button_pane_cp033

0x0028,	// (0x00053e55) phob2_cc_button_pane_g1

0x0034,	// (0x00053e61) phob2_cc_button_pane_t1

0x0049,	// (0x00053e76) phob2_cc_button_pane_t2

0x0001,

0xfe4e,	// (0x00063c7b) phob2_cc_button_pane_t

0xb7f7,	// (0x0005f624) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xb7f7,	// (0x0005f624) list_double_large_graphic_phob2_cc_pane

0xb827,	// (0x0005f654) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xb827,	// (0x0005f654) list_double_large_graphic_phob2_cc_pane_g1

0xb833,	// (0x0005f660) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xb833,	// (0x0005f660) list_double_large_graphic_phob2_cc_pane_g2

0xb83f,	// (0x0005f66c) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xb83f,	// (0x0005f66c) list_double_large_graphic_phob2_cc_pane_g3

0xb84b,	// (0x0005f678) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xb84b,	// (0x0005f678) list_double_large_graphic_phob2_cc_pane_g4

0xedf5,	// (0x00062c22) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xedf5,	// (0x00062c22) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe53,	// (0x00063c80) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe53,	// (0x00063c80) list_double_large_graphic_phob2_cc_pane_g

0xb857,	// (0x0005f684) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xb857,	// (0x0005f684) list_double_large_graphic_phob2_cc_pane_t1

0xb880,	// (0x0005f6ad) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xb880,	// (0x0005f6ad) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe5e,	// (0x00063c8b) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe5e,	// (0x00063c8b) list_double_large_graphic_phob2_cc_pane_t

0x0150,	// (0x00053f7d) list_highlight_pane_cp025_ParamLimits

0x0150,	// (0x00053f7d) list_highlight_pane_cp025

0xc445,	// (0x00060272) bg_button_pane_cp033_ParamLimits

0x0028,	// (0x00053e55) phob2_cc_button_pane_g1_ParamLimits

0x0034,	// (0x00053e61) phob2_cc_button_pane_t1_ParamLimits

0x0049,	// (0x00053e76) phob2_cc_button_pane_t2_ParamLimits

0xfe4e,	// (0x00063c7b) phob2_cc_button_pane_t_ParamLimits

0x39c5,	// (0x000577f2) popup_wgtman_window

0xd275,	// (0x000610a2) scroll_pane_cp038

0xb1cf,	// (0x0005effc) wgtman_btn_pane_cp_01_ParamLimits

0xb1cf,	// (0x0005effc) wgtman_btn_pane_cp_01

0x015e,	// (0x00053f8b) wgtman_content_pane

0x0167,	// (0x00053f94) wgtman_heading_pane

0xbd26,	// (0x0005fb53) bg_heading_pane_cp02

0x0170,	// (0x00053f9d) wgtman_heading_pane_g1

0x0178,	// (0x00053fa5) wgtman_heading_pane_t1

0x0186,	// (0x00053fb3) scroll_pane_cp036

0x018e,	// (0x00053fbb) wgtman_list_pane

0x0196,	// (0x00053fc3) wgtman_list_pane_t1_ParamLimits

0x0196,	// (0x00053fc3) wgtman_list_pane_t1

0xee99,	// (0x00062cc6) cam4_grid_pane

0x905c,	// (0x0005ce89) bg_button_pane_cp015_ParamLimits

0x906c,	// (0x0005ce99) bg_button_pane_cp016_ParamLimits

0x907f,	// (0x0005ceac) bg_button_pane_cp017_ParamLimits

0x90d5,	// (0x0005cf02) popup_vitu2_query_window_g3_ParamLimits

0x90d5,	// (0x0005cf02) popup_vitu2_query_window_g3

0x9192,	// (0x0005cfbf) popup_vitu2_query_window_t6_ParamLimits

0x9192,	// (0x0005cfbf) popup_vitu2_query_window_t6

0x91bd,	// (0x0005cfea) popup_vitu2_query_window_t7_ParamLimits

0x91bd,	// (0x0005cfea) popup_vitu2_query_window_t7

0x01b0,	// (0x00053fdd) cam4_grid_pane_g1

0x01b9,	// (0x00053fe6) cam4_grid_pane_g2

0x01c2,	// (0x00053fef) cam4_grid_pane_g3

0x01cb,	// (0x00053ff8) cam4_grid_pane_g4

0x0003,

0xfe63,	// (0x00063c90) cam4_grid_pane_g

0x4572,	// (0x0005839f) aid_placing_vt_slider_lsc_ParamLimits

0x487d,	// (0x000586aa) vidtel_button_pane_ParamLimits

0x487d,	// (0x000586aa) vidtel_button_pane

0xbd26,	// (0x0005fb53) bg_button_pane_cp034

0x01d6,	// (0x00054003) vidtel_button_pane_g1

0x01de,	// (0x0005400b) vidtel_button_pane_t1

0xd3b1,	// (0x000611de) aid_size_vtel_slider_touch

0xd46a,	// (0x00061297) scroll_pane_cp039

0x9ebd,	// (0x0005dcea) ncim_query_button_pane_cp01_ParamLimits

0x9edc,	// (0x0005dd09) ncimui_query_pane_g1_ParamLimits

0xc445,	// (0x00060272) input_focus_pane_cp012_ParamLimits

0xdd5b,	// (0x00061b88) ncim_query_entry_pane_t1_ParamLimits

0xd46a,	// (0x00061297) scroll_pane_cp039_ParamLimits

0x127b,	// (0x000550a8) navi_pane_bcale_mc_g1

0x1283,	// (0x000550b0) navi_pane_bcale_mc_t1

0xe2e8,	// (0x00062115) main_sp_fs_email_pane_g1

0xe2f4,	// (0x00062121) main_sp_fs_email_pane_g2

0x0001,

0xfc66,	// (0x00063a93) main_sp_fs_email_pane_g

0xe76f,	// (0x0006259c) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe76f,	// (0x0006259c) list_single_cale_mrui_row_pane_g3

0xad94,	// (0x0005ebc1) list_single_recal_day_pane_g5_event_pane

0xe94f,	// (0x0006277c) list_single_recal_day_pane_g7

0x01f4,	// (0x00054021) list_recal_day_event_pane_cp01

0x01fd,	// (0x0005402a) list_recal_vselct_arw_lo_pane_cp01

0x0205,	// (0x00054032) list_recal_vselct_arw_up_pane_cp01

0x020d,	// (0x0005403a) list_recal_vselct_pane_cp01

0xd3d3,	// (0x00061200) list_recal_day_event_pane_cp01_g1

0xee01,	// (0x00062c2e) list_recal_day_event_pane_cp01_t1

0xe957,	// (0x00062784) list_single_recal_day_pane_t1_ParamLimits

0xe969,	// (0x00062796) list_single_recal_day_pane_t2_ParamLimits

0xfd46,	// (0x00063b73) list_single_recal_day_pane_t_ParamLimits

0xc423,	// (0x00060250) bg_notes_pane_ParamLimits

0x078e,	// (0x000545bb) list_notes_pane_ParamLimits

0x3bcb,	// (0x000579f8) scroll_pane_cp06_ParamLimits

0x07b0,	// (0x000545dd) main_notes_pane_ParamLimits

0xc445,	// (0x00060272) main_welc_pane

0xb8c5,	// (0x0005f6f2) main_welc_body_pane_ParamLimits

0xb8c5,	// (0x0005f6f2) main_welc_body_pane

0xb8e3,	// (0x0005f710) main_welc_opti_pane_ParamLimits

0xb8e3,	// (0x0005f710) main_welc_opti_pane

0xb957,	// (0x0005f784) main_welc_pane_t1_ParamLimits

0xb957,	// (0x0005f784) main_welc_pane_t1

0xbabe,	// (0x0005f8eb) main_welc_body_row_pane_ParamLimits

0xbabe,	// (0x0005f8eb) main_welc_body_row_pane

0xc49e,	// (0x000602cb) main_welc_opti_row_pane_ParamLimits

0xc49e,	// (0x000602cb) main_welc_opti_row_pane

0x03de,	// (0x0005420b) main_welc_opti_row_pane_g1

0xbad2,	// (0x0005f8ff) main_welc_opti_row_pane_t1

0x03f5,	// (0x00054222) main_welc_body_row_pane_t1

0xebce,	// (0x000629fb) popup_notif_wgt_heading_pane

0xebe8,	// (0x00062a15) aid_size_list_notif_wgt_del_ParamLimits

0xebf5,	// (0x00062a22) list_notif_wgt_row_pane_g1_ParamLimits

0xec01,	// (0x00062a2e) list_notif_wgt_row_pane_g2_ParamLimits

0xec10,	// (0x00062a3d) list_notif_wgt_row_pane_g3_ParamLimits

0xfdad,	// (0x00063bda) list_notif_wgt_row_pane_g_ParamLimits

0xec1d,	// (0x00062a4a) list_notif_wgt_row_pane_t1_ParamLimits

0xec33,	// (0x00062a60) list_notif_wgt_row_pane_t2_ParamLimits

0xec45,	// (0x00062a72) list_notif_wgt_row_pane_t3_ParamLimits

0xfdb4,	// (0x00063be1) list_notif_wgt_row_pane_t_ParamLimits

0xb268,	// (0x0005f095) listrow_wgtman_pane_g1_ParamLimits

0xb275,	// (0x0005f0a2) listrow_wgtman_pane_g2_ParamLimits

0xfde4,	// (0x00063c11) listrow_wgtman_pane_g_ParamLimits

0xb293,	// (0x0005f0c0) listrow_wgtman_pane_t1_ParamLimits

0xb2ab,	// (0x0005f0d8) listrow_wgtman_pane_t2_ParamLimits

0xfde9,	// (0x00063c16) listrow_wgtman_pane_t_ParamLimits

0xb2d1,	// (0x0005f0fe) wait_bar_pane_cp09_ParamLimits

0xbd26,	// (0x0005fb53) bg_popup_heading_pane_cp02

0x0404,	// (0x00054231) popup_notif_wgt_heading_pane_g1

0x040c,	// (0x00054239) popup_notif_wgt_heading_pane_t1

0xbd26,	// (0x0005fb53) main_vids_pane

0xbd26,	// (0x0005fb53) vids_listscroll_pane

0xbae1,	// (0x0005f90e) scroll_pane_cp040

0xbd26,	// (0x0005fb53) vids_list_pane

0xbaec,	// (0x0005f919) vids_list_double_pane_ParamLimits

0xbaec,	// (0x0005f919) vids_list_double_pane

0xbafd,	// (0x0005f92a) vids_list_double_pane_g1

0xbb06,	// (0x0005f933) vids_list_double_pane_t1

0xbb16,	// (0x0005f943) vids_list_double_pane_t2

0x0001,

0xfe82,	// (0x00063caf) vids_list_double_pane_t

0xbd9d,	// (0x0005fbca) main_ncimui_pane_ParamLimits

0x9cf3,	// (0x0005db20) main_ncimui_pane_g1_ParamLimits

0x9cff,	// (0x0005db2c) main_ncimui_pane_g2_ParamLimits

0x9cff,	// (0x0005db2c) main_ncimui_pane_g2

0x0001,

0xfb67,	// (0x00063994) main_ncimui_pane_g_ParamLimits

0xfb67,	// (0x00063994) main_ncimui_pane_g

0xb8fe,	// (0x0005f72b) main_welc_pane_g1_ParamLimits

0xb8fe,	// (0x0005f72b) main_welc_pane_g1

0xb913,	// (0x0005f740) main_welc_pane_g2_ParamLimits

0xb913,	// (0x0005f740) main_welc_pane_g2

0x0003,

0xfe6c,	// (0x00063c99) main_welc_pane_g_ParamLimits

0xfe6c,	// (0x00063c99) main_welc_pane_g

0xc423,	// (0x00060250) listscroll_mce_pane_ParamLimits

0x13d0,	// (0x000551fd) wait_bar_pane_cp10

0x26c4,	// (0x000564f1) main_cale_day_pane_ParamLimits

0x26c4,	// (0x000564f1) main_cale_week_pane_ParamLimits

0xc423,	// (0x00060250) main_messa_pane_ParamLimits

0x7832,	// (0x0005b65f) main_clock2_btn_pane_ParamLimits

0x7832,	// (0x0005b65f) main_clock2_btn_pane

0xc990,	// (0x000607bd) main_clock2_btn_pane_cp01_ParamLimits

0xc990,	// (0x000607bd) main_clock2_btn_pane_cp01

0xe6fb,	// (0x00062528) list_cale_mrui_pane_ParamLimits

0xec89,	// (0x00062ab6) main_cf0_pane_g2

0x0001,

0xfdbb,	// (0x00063be8) main_cf0_pane_g

0xb4be,	// (0x0005f2eb) area_left_week_number_pane_ParamLimits

0xb4ca,	// (0x0005f2f7) area_top_day_name_pane_ParamLimits

0xb4dd,	// (0x0005f30a) frame_month_view_pane_ParamLimits

0xeda2,	// (0x00062bcf) grid_month_view_pane_ParamLimits

0xedb0,	// (0x00062bdd) frm_month_g1_ParamLimits

0xb55e,	// (0x0005f38b) frm_month_g2_ParamLimits

0xb571,	// (0x0005f39e) frm_month_g3_ParamLimits

0xb584,	// (0x0005f3b1) frm_month_g4_ParamLimits

0xb597,	// (0x0005f3c4) frm_month_g5_ParamLimits

0xb5aa,	// (0x0005f3d7) frm_month_g6_ParamLimits

0xb5bd,	// (0x0005f3ea) frm_month_g7_ParamLimits

0xedbd,	// (0x00062bea) frm_month_g8_ParamLimits

0xb5d0,	// (0x0005f3fd) frm_month_g9_ParamLimits

0xb5e0,	// (0x0005f40d) frm_month_g10_ParamLimits

0xb5f0,	// (0x0005f41d) frm_month_g11_ParamLimits

0xb600,	// (0x0005f42d) frm_month_g12_ParamLimits

0xb612,	// (0x0005f43f) frm_month_g13_ParamLimits

0xb624,	// (0x0005f451) frm_month_g14_ParamLimits

0xb638,	// (0x0005f465) frm_month_g15_ParamLimits

0xb64c,	// (0x0005f479) frm_month_g16_ParamLimits

0xfe13,	// (0x00063c40) frm_month_g_ParamLimits

0xedca,	// (0x00062bf7) cell_top_day_name_pane_t1_ParamLimits

0xb660,	// (0x0005f48d) cell_area_left_week_number_pane_g1_ParamLimits

0xb66c,	// (0x0005f499) cell_area_left_week_number_pane_t1_ParamLimits

0x073e,	// (0x0005456b) cell_month_view_pane_g1_ParamLimits

0xb67f,	// (0x0005f4ac) cell_month_view_pane_t1_ParamLimits

0xc41b,	// (0x00060248) main_clock2_btn_pane_g1

0x0463,	// (0x00054290) main_clock2_btn_pane_t1

0xc445,	// (0x00060272) listscroll_cmail_pane_ParamLimits

0xe2e8,	// (0x00062115) main_sp_fs_email_pane_g1_ParamLimits

0xe2f4,	// (0x00062121) main_sp_fs_email_pane_g2_ParamLimits

0xfc66,	// (0x00063a93) main_sp_fs_email_pane_g_ParamLimits

0xe8bf,	// (0x000626ec) list_recal_day_pane_ParamLimits

0xe8d0,	// (0x000626fd) mian_recal_day_pane_t1

0xa72e,	// (0x0005e55b) list_single_dyc_row_text_pane_t4_ParamLimits

0xa72e,	// (0x0005e55b) list_single_dyc_row_text_pane_t4

0xa777,	// (0x0005e5a4) list_single_dyc_row_text_pane_t5_ParamLimits

0xa777,	// (0x0005e5a4) list_single_dyc_row_text_pane_t5

0xe396,	// (0x000621c3) list_single_dyc_row_text_pane_t6_ParamLimits

0xe396,	// (0x000621c3) list_single_dyc_row_text_pane_t6

0x0d67,	// (0x00054b94) aid_mgn_list_cale_time_pane

0xbd9d,	// (0x0005fbca) main_gallery2_pane_ParamLimits

0xc9a6,	// (0x000607d3) main_clock2_pane_cp01_t1

0xc9b6,	// (0x000607e3) main_clock2_pane_cp01_t3

0x0001,

0xf74c,	// (0x00063579) main_clock2_pane_cp01_t

0x3f68,	// (0x00057d95) cale_week_scroll_pane_g16_ParamLimits

0x3f68,	// (0x00057d95) cale_week_scroll_pane_g16

0x0962,	// (0x0005478f) vorec_slider_pane

0x01de,	// (0x0005400b) vidtel_button_pane_t1_ParamLimits

0xadfa,	// (0x0005ec27) main_fs_bigclock_clock_pane_g1_ParamLimits

0xadfa,	// (0x0005ec27) main_fs_bigclock_clock_pane_g2_ParamLimits

0xae0b,	// (0x0005ec38) main_fs_bigclock_clock_pane_g3_ParamLimits

0xae0b,	// (0x0005ec38) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfd69,	// (0x00063b96) main_fs_bigclock_clock_pane_g_ParamLimits

0xae1e,	// (0x0005ec4b) main_fs_bigclock_clock_pane_t1_ParamLimits

0xae34,	// (0x0005ec61) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfd72,	// (0x00063b9f) main_fs_bigclock_clock_pane_t_ParamLimits

0x7107,	// (0x0005af34) main_mup3_lyrics_pane_ParamLimits

0x7107,	// (0x0005af34) main_mup3_lyrics_pane

0xbb4c,	// (0x0005f979) main_mup3_lyrics_pane_t1_ParamLimits

0xbb4c,	// (0x0005f979) main_mup3_lyrics_pane_t1

0xcdd6,	// (0x00060c03) aid_main_mp4_pane_t1_area

0xcde0,	// (0x00060c0d) aid_main_mp4_pane_t2_area

0xce8c,	// (0x00060cb9) main_mp4_pane_g7_ParamLimits

0xce8c,	// (0x00060cb9) main_mp4_pane_g7

0xce98,	// (0x00060cc5) main_mp4_pane_g8_ParamLimits

0xce98,	// (0x00060cc5) main_mp4_pane_g8

0x81ea,	// (0x0005c017) aid_call6_pane_g1_size

0xb811,	// (0x0005f63e) list_double_large_graphic_phob2_other_pane_ParamLimits

0xb811,	// (0x0005f63e) list_double_large_graphic_phob2_other_pane

0x0d1f,	// (0x00054b4c) list_double_large_graphic_phob2_other_pane_g1

0xbd26,	// (0x0005fb53) list_highlight_pane_cp026

0xc445,	// (0x00060272) main_welc_pane_ParamLimits

0xa56d,	// (0x0005e39a) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0xa56d,	// (0x0005e39a) main_sp_fs_ctrlbar_pane_g3

0xa587,	// (0x0005e3b4) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0xa587,	// (0x0005e3b4) main_sp_fs_ctrlbar_pane_g4

0xa5bb,	// (0x0005e3e8) toolbar2_fixed_button_pane_cp01

0xa5c6,	// (0x0005e3f3) toolbar2_fixed_button_pane_cp02

0xa5d3,	// (0x0005e400) toolbar2_fixed_button_pane_cp03

0xb8a9,	// (0x0005f6d6) list_welc_entry_pane_ParamLimits

0xb8a9,	// (0x0005f6d6) list_welc_entry_pane

0xb928,	// (0x0005f755) main_welc_pane_g3_ParamLimits

0xb928,	// (0x0005f755) main_welc_pane_g3

0xb975,	// (0x0005f7a2) main_welc_pane_t2_ParamLimits

0xb975,	// (0x0005f7a2) main_welc_pane_t2

0xb98f,	// (0x0005f7bc) main_welc_pane_t3_ParamLimits

0xb98f,	// (0x0005f7bc) main_welc_pane_t3

0x0005,

0xfe75,	// (0x00063ca2) main_welc_pane_t_ParamLimits

0xfe75,	// (0x00063ca2) main_welc_pane_t

0xba41,	// (0x0005f86e) welc_button_pane_ParamLimits

0xba41,	// (0x0005f86e) welc_button_pane

0xbaa9,	// (0x0005f8d6) welc_service_logo_pane_ParamLimits

0xbaa9,	// (0x0005f8d6) welc_service_logo_pane

0xbb68,	// (0x0005f995) list_single_welc_entry_pane_ParamLimits

0xbb68,	// (0x0005f995) list_single_welc_entry_pane

0xbb79,	// (0x0005f9a6) list_single_welc_entry_pane_g1

0xbb81,	// (0x0005f9ae) list_single_welc_entry_pane_t1

0xbb8f,	// (0x0005f9bc) list_single_welc_entry_pane_t2

0x0001,

0xfe87,	// (0x00063cb4) list_single_welc_entry_pane_t

0xbd26,	// (0x0005fb53) bg_button_pane_cp035

0x04fe,	// (0x0005432b) welc_button_pane_t1

0x050c,	// (0x00054339) welc_service_logo_pane_g1

0x0515,	// (0x00054342) welc_service_logo_pane_g2

0x0001,

0xfe8c,	// (0x00063cb9) welc_service_logo_pane_g

0xbdab,	// (0x0005fbd8) main_int_radio_pane

0x2810,	// (0x0005663d) list_single_fs_dyc_pane_g1

0xb742,	// (0x0005f56f) list_double_large_graphic_phob2_pane_g3_ParamLimits

0xb742,	// (0x0005f56f) list_double_large_graphic_phob2_pane_g3

0xb74e,	// (0x0005f57b) list_double_large_graphic_phob2_pane_g4_ParamLimits

0xb74e,	// (0x0005f57b) list_double_large_graphic_phob2_pane_g4

0xbb9d,	// (0x0005f9ca) main_int_radio1_pane_ParamLimits

0xbb9d,	// (0x0005f9ca) main_int_radio1_pane

0x0530,	// (0x0005435d) find_pane_cp02

0xbbba,	// (0x0005f9e7) input_focus_pane_cp12_ParamLimits

0xbbba,	// (0x0005f9e7) input_focus_pane_cp12

0xbbca,	// (0x0005f9f7) input_focus_pane_cp13_ParamLimits

0xbbca,	// (0x0005f9f7) input_focus_pane_cp13

0xbbde,	// (0x0005fa0b) input_focus_pane_cp14_ParamLimits

0xbbde,	// (0x0005fa0b) input_focus_pane_cp14

0x0575,	// (0x000543a2) int_radio1_listscroll_pane

0xbbf2,	// (0x0005fa1f) main_int_radio1_pane_g1_ParamLimits

0xbbf2,	// (0x0005fa1f) main_int_radio1_pane_g1

0xbc0a,	// (0x0005fa37) main_int_radio1_pane_t1_ParamLimits

0xbc0a,	// (0x0005fa37) main_int_radio1_pane_t1

0xbc25,	// (0x0005fa52) main_int_radio1_pane_t2_ParamLimits

0xbc25,	// (0x0005fa52) main_int_radio1_pane_t2

0xbc40,	// (0x0005fa6d) main_int_radio1_pane_t3_ParamLimits

0xbc40,	// (0x0005fa6d) main_int_radio1_pane_t3

0xbc5b,	// (0x0005fa88) main_int_radio1_pane_t4_ParamLimits

0xbc5b,	// (0x0005fa88) main_int_radio1_pane_t4

0x05e2,	// (0x0005440f) main_int_radio1_pane_t5_ParamLimits

0x05e2,	// (0x0005440f) main_int_radio1_pane_t5

0xbc6d,	// (0x0005fa9a) main_int_radio1_pane_t6_ParamLimits

0xbc6d,	// (0x0005fa9a) main_int_radio1_pane_t6

0xbc82,	// (0x0005faaf) main_int_radio1_pane_t7_ParamLimits

0xbc82,	// (0x0005faaf) main_int_radio1_pane_t7

0xbc97,	// (0x0005fac4) main_int_radio1_pane_t8_ParamLimits

0xbc97,	// (0x0005fac4) main_int_radio1_pane_t8

0xbcb6,	// (0x0005fae3) main_int_radio1_pane_t9_ParamLimits

0xbcb6,	// (0x0005fae3) main_int_radio1_pane_t9

0xbcc8,	// (0x0005faf5) main_int_radio1_pane_t10_ParamLimits

0xbcc8,	// (0x0005faf5) main_int_radio1_pane_t10

0xbcee,	// (0x0005fb1b) main_int_radio1_pane_t11_ParamLimits

0xbcee,	// (0x0005fb1b) main_int_radio1_pane_t11

0xbd14,	// (0x0005fb41) main_int_radio1_pane_t12_ParamLimits

0xbd14,	// (0x0005fb41) main_int_radio1_pane_t12

0x000b,

0xfe91,	// (0x00063cbe) main_int_radio1_pane_t_ParamLimits

0xfe91,	// (0x00063cbe) main_int_radio1_pane_t

0x06b7,	// (0x000544e4) int_radio_list_pane

0xede5,	// (0x00062c12) scroll_pane_cp037

0x06bf,	// (0x000544ec) list_double_large_graphic_int_radio_pane_ParamLimits

0x06bf,	// (0x000544ec) list_double_large_graphic_int_radio_pane

0x06d7,	// (0x00054504) list_double_large_graphic_int_radio_pane_g1

0xee0f,	// (0x00062c3c) list_double_large_graphic_int_radio_pane_t1

0xee1d,	// (0x00062c4a) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfeaa,	// (0x00063cd7) list_double_large_graphic_int_radio_pane_t

0xbd26,	// (0x0005fb53) list_highlight_pane_cp027

0x0226,	// (0x00054053) main_button_pane_4

0xb938,	// (0x0005f765) main_welc_pane_g4_ParamLimits

0xb938,	// (0x0005f765) main_welc_pane_g4

0xb9a7,	// (0x0005f7d4) main_welc_pane_t4_ParamLimits

0xb9a7,	// (0x0005f7d4) main_welc_pane_t4

0xb9bc,	// (0x0005f7e9) main_welc_pane_t5_ParamLimits

0xb9bc,	// (0x0005f7e9) main_welc_pane_t5

0xba06,	// (0x0005f833) main_welc_pane_t6_ParamLimits

0xba06,	// (0x0005f833) main_welc_pane_t6

0xba58,	// (0x0005f885) welc_button_pane_2_ParamLimits

0xba58,	// (0x0005f885) welc_button_pane_2

0xba74,	// (0x0005f8a1) welc_button_pane_3_ParamLimits

0xba74,	// (0x0005f8a1) welc_button_pane_3

0x0226,	// (0x00054053) welc_button_pane_4

0xba93,	// (0x0005f8c0) welc_button_pane_5_ParamLimits

0xba93,	// (0x0005f8c0) welc_button_pane_5

0x64e8,	// (0x0005a315) main_popup_welc_pane

0x06e0,	// (0x0005450d) main_welc_sk_g3

0x06ea,	// (0x00054517) main_welc_sk_g4

0x06f4,	// (0x00054521) main_welc_sk_t3

0x0704,	// (0x00054531) main_welc_sk_t4

0x0714,	// (0x00054541) popup_welc_pane_t4

0x0722,	// (0x0005454f) popup_welc_pane_t5

0x0730,	// (0x0005455d) popup_welc_pane_t6
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

} // end of namespace AknLayoutScalable_Abrw_phl_apps_qhd_lsc_tch_Small

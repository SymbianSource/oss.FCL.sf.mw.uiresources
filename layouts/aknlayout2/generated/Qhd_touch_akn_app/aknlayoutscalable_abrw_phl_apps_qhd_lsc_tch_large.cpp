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

#include "aknlayoutscalable_abrw_phl_apps_qhd_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_phl_apps_qhd_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x000880ee };

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
0x255a,	// (0x0008a648) Screen

0x2566,	// (0x0008a654) application_window

0x25ba,	// (0x0008a6a8) area_bottom_pane_ParamLimits

0x25ba,	// (0x0008a6a8) area_bottom_pane

0x25f3,	// (0x0008a6e1) area_top_pane_ParamLimits

0x25f3,	// (0x0008a6e1) area_top_pane

0x0235,	// (0x00088323) call_video_uplink_pane_ParamLimits

0x0235,	// (0x00088323) call_video_uplink_pane

0x266d,	// (0x0008a75b) main_pane_ParamLimits

0x266d,	// (0x0008a75b) main_pane

0xc647,	// (0x00094735) context_pane

0x5ce1,	// (0x0008ddcf) navi_pane

0x5d09,	// (0x0008ddf7) popup_cale_events_window_ParamLimits

0x5d09,	// (0x0008ddf7) popup_cale_events_window

0xc65a,	// (0x00094748) popup_mup_playback_window

0x5d21,	// (0x0008de0f) signal_pane

0x0998,	// (0x00088a86) main_browser_pane

0xb1b8,	// (0x000932a6) main_burst_pane

0x5a33,	// (0x0008db21) main_calc_pane

0xb1b8,	// (0x000932a6) main_cale_day_pane

0x0998,	// (0x00088a86) main_cale_month_pane

0xb1b8,	// (0x000932a6) main_cale_week_pane

0xb1b8,	// (0x000932a6) main_call_pane

0x0666,	// (0x00088754) main_call_poc_pane

0xb1b8,	// (0x000932a6) main_camera_pane

0xb1b8,	// (0x000932a6) main_chi_dic_pane

0x476c,	// (0x0008c85a) main_clock_pane

0x0666,	// (0x00088754) main_fmradio_pane

0xb1b8,	// (0x000932a6) main_graph_messa_pane

0x0666,	// (0x00088754) main_help_pane

0x0998,	// (0x00088a86) main_im_pane

0x08c1,	// (0x000889af) main_image_pane_ParamLimits

0x08c1,	// (0x000889af) main_image_pane

0x0666,	// (0x00088754) main_location2_pane

0xb1b8,	// (0x000932a6) main_location_pane

0x0666,	// (0x00088754) main_messa_pane

0x0666,	// (0x00088754) main_mp2_pane

0xb1b8,	// (0x000932a6) main_mp_pane

0x0666,	// (0x00088754) main_msg_pane

0x0666,	// (0x00088754) main_mup_eq_pane

0x0666,	// (0x00088754) main_mup_pane

0xb1b8,	// (0x000932a6) main_notes_pane

0x0666,	// (0x00088754) main_pec_pane

0x0666,	// (0x00088754) main_phob_pane

0x0666,	// (0x00088754) main_pinb_pane

0x0666,	// (0x00088754) main_postcard_pane

0x0666,	// (0x00088754) main_qdial_pane

0xb1b8,	// (0x000932a6) main_skin_pane

0x0666,	// (0x00088754) main_smil2_pane

0xb1b8,	// (0x000932a6) main_smil_pane

0xb1b8,	// (0x000932a6) main_video_pane

0xb1b8,	// (0x000932a6) main_video_tele_pane

0x08c1,	// (0x000889af) main_viewer_pane_ParamLimits

0x08c1,	// (0x000889af) main_viewer_pane

0xb1b8,	// (0x000932a6) main_vorec_pane

0x5a87,	// (0x0008db75) popup_blid_sat_info_window_ParamLimits

0x5a87,	// (0x0008db75) popup_blid_sat_info_window

0x5adf,	// (0x0008dbcd) popup_dyc_status_message_window_ParamLimits

0x5adf,	// (0x0008dbcd) popup_dyc_status_message_window

0x5af9,	// (0x0008dbe7) popup_grid_large_graphic_window_ParamLimits

0x5af9,	// (0x0008dbe7) popup_grid_large_graphic_window

0x5bb5,	// (0x0008dca3) popup_loc_request_window_ParamLimits

0x5bb5,	// (0x0008dca3) popup_loc_request_window

0x5cb9,	// (0x0008dda7) popup_wml_address_window_ParamLimits

0x5cb9,	// (0x0008dda7) popup_wml_address_window

0x586d,	// (0x0008d95b) call_muted_g1

0x5522,	// (0x0008d610) popup_call_audio_conf_window_ParamLimits

0x5522,	// (0x0008d610) popup_call_audio_conf_window

0x5881,	// (0x0008d96f) popup_call_audio_first_window_ParamLimits

0x5881,	// (0x0008d96f) popup_call_audio_first_window

0x58f7,	// (0x0008d9e5) popup_call_audio_in_window_ParamLimits

0x58f7,	// (0x0008d9e5) popup_call_audio_in_window

0x5933,	// (0x0008da21) popup_call_audio_out_window_ParamLimits

0x5933,	// (0x0008da21) popup_call_audio_out_window

0x596d,	// (0x0008da5b) popup_call_audio_second_window_ParamLimits

0x596d,	// (0x0008da5b) popup_call_audio_second_window

0x59c3,	// (0x0008dab1) popup_call_audio_wait_window_ParamLimits

0x59c3,	// (0x0008dab1) popup_call_audio_wait_window

0x59f8,	// (0x0008dae6) popup_number_entry_window_ParamLimits

0x59f8,	// (0x0008dae6) popup_number_entry_window

0x0253,	// (0x00088341) bg_popup_call_pane_cp05_ParamLimits

0x0253,	// (0x00088341) bg_popup_call_pane_cp05

0x0273,	// (0x00088361) popup_number_entry_window_t1

0x0286,	// (0x00088374) popup_number_entry_window_t2

0x0298,	// (0x00088386) popup_number_entry_window_t3

0x0003,

0xf0fb,	// (0x000971e9) popup_number_entry_window_t

0x02aa,	// (0x00088398) text_title_cp2

0x02bd,	// (0x000883ab) bg_popup_call_pane_cp_ParamLimits

0x02bd,	// (0x000883ab) bg_popup_call_pane_cp

0x02cb,	// (0x000883b9) call_thumbnail_pane

0x02d3,	// (0x000883c1) popup_call_audio_in_window_g1_ParamLimits

0x02d3,	// (0x000883c1) popup_call_audio_in_window_g1

0x02df,	// (0x000883cd) popup_call_audio_in_window_g2_ParamLimits

0x02df,	// (0x000883cd) popup_call_audio_in_window_g2

0x02eb,	// (0x000883d9) popup_call_audio_in_window_g3_ParamLimits

0x02eb,	// (0x000883d9) popup_call_audio_in_window_g3

0x0002,

0xf104,	// (0x000971f2) popup_call_audio_in_window_g_ParamLimits

0xf104,	// (0x000971f2) popup_call_audio_in_window_g

0x02f7,	// (0x000883e5) popup_call_audio_in_window_t1_ParamLimits

0x02f7,	// (0x000883e5) popup_call_audio_in_window_t1

0x0313,	// (0x00088401) popup_call_audio_in_window_t2_ParamLimits

0x0313,	// (0x00088401) popup_call_audio_in_window_t2

0x032f,	// (0x0008841d) popup_call_audio_in_window_t3_ParamLimits

0x032f,	// (0x0008841d) popup_call_audio_in_window_t3

0x0002,

0xf10b,	// (0x000971f9) popup_call_audio_in_window_t_ParamLimits

0xf10b,	// (0x000971f9) popup_call_audio_in_window_t

0x02bd,	// (0x000883ab) bg_popup_call_pane_cp01_ParamLimits

0x02bd,	// (0x000883ab) bg_popup_call_pane_cp01

0x02cb,	// (0x000883b9) call_thumbnail_pane_cp02

0x0342,	// (0x00088430) call_type_pane_cp022

0x034a,	// (0x00088438) popup_call_audio_out_window_g1_ParamLimits

0x034a,	// (0x00088438) popup_call_audio_out_window_g1

0x035c,	// (0x0008844a) popup_call_audio_out_window_g2_ParamLimits

0x035c,	// (0x0008844a) popup_call_audio_out_window_g2

0x0368,	// (0x00088456) popup_call_audio_out_window_g3_ParamLimits

0x0368,	// (0x00088456) popup_call_audio_out_window_g3

0x0002,

0xf112,	// (0x00097200) popup_call_audio_out_window_g_ParamLimits

0xf112,	// (0x00097200) popup_call_audio_out_window_g

0x037a,	// (0x00088468) popup_call_audio_out_window_t1_ParamLimits

0x037a,	// (0x00088468) popup_call_audio_out_window_t1

0x0392,	// (0x00088480) popup_call_audio_out_window_t2_ParamLimits

0x0392,	// (0x00088480) popup_call_audio_out_window_t2

0x0001,

0xf119,	// (0x00097207) popup_call_audio_out_window_t_ParamLimits

0xf119,	// (0x00097207) popup_call_audio_out_window_t

0x03a7,	// (0x00088495) bg_popup_call_pane_ParamLimits

0x03a7,	// (0x00088495) bg_popup_call_pane

0x2836,	// (0x0008a924) call_thumbnail_pane_cp_ParamLimits

0x2836,	// (0x0008a924) call_thumbnail_pane_cp

0x042b,	// (0x00088519) call_type_pane_cp01_ParamLimits

0x042b,	// (0x00088519) call_type_pane_cp01

0x046f,	// (0x0008855d) popup_call_audio_first_window_g1_ParamLimits

0x046f,	// (0x0008855d) popup_call_audio_first_window_g1

0x04bb,	// (0x000885a9) popup_call_audio_first_window_g2_ParamLimits

0x04bb,	// (0x000885a9) popup_call_audio_first_window_g2

0x0001,

0xf11e,	// (0x0009720c) popup_call_audio_first_window_g_ParamLimits

0xf11e,	// (0x0009720c) popup_call_audio_first_window_g

0x04ff,	// (0x000885ed) popup_call_audio_first_window_t1_ParamLimits

0x04ff,	// (0x000885ed) popup_call_audio_first_window_t1

0x05ab,	// (0x00088699) popup_call_audio_first_window_t4_ParamLimits

0x05ab,	// (0x00088699) popup_call_audio_first_window_t4

0x0637,	// (0x00088725) popup_call_audio_first_window_t5_ParamLimits

0x0637,	// (0x00088725) popup_call_audio_first_window_t5

0x0002,

0xf123,	// (0x00097211) popup_call_audio_first_window_t_ParamLimits

0xf123,	// (0x00097211) popup_call_audio_first_window_t

0x0666,	// (0x00088754) bg_popup_call_pane_cp02

0x0670,	// (0x0008875e) call_type_pane_cp023

0x0678,	// (0x00088766) popup_call_audio_wait_window_g1

0x0680,	// (0x0008876e) popup_call_audio_wait_window_g2

0x0001,

0xf12a,	// (0x00097218) popup_call_audio_wait_window_g

0x0688,	// (0x00088776) popup_call_audio_wait_window_t3

0x0696,	// (0x00088784) bg_popup_call_pane_cp03_ParamLimits

0x0696,	// (0x00088784) bg_popup_call_pane_cp03

0x06f6,	// (0x000887e4) call_thumbnail_pane_cp011_ParamLimits

0x06f6,	// (0x000887e4) call_thumbnail_pane_cp011

0x0702,	// (0x000887f0) call_type_pane_cp034_ParamLimits

0x0702,	// (0x000887f0) call_type_pane_cp034

0x073e,	// (0x0008882c) popup_call_audio_second_window_g1_ParamLimits

0x073e,	// (0x0008882c) popup_call_audio_second_window_g1

0x077a,	// (0x00088868) popup_call_audio_second_window_g2_ParamLimits

0x077a,	// (0x00088868) popup_call_audio_second_window_g2

0x0001,

0xf12f,	// (0x0009721d) popup_call_audio_second_window_g_ParamLimits

0xf12f,	// (0x0009721d) popup_call_audio_second_window_g

0x07b6,	// (0x000888a4) popup_call_audio_second_window_t1_ParamLimits

0x07b6,	// (0x000888a4) popup_call_audio_second_window_t1

0x0837,	// (0x00088925) popup_call_audio_second_window_t2_ParamLimits

0x0837,	// (0x00088925) popup_call_audio_second_window_t2

0x086d,	// (0x0008895b) popup_call_audio_second_window_t3_ParamLimits

0x086d,	// (0x0008895b) popup_call_audio_second_window_t3

0x0002,

0xf134,	// (0x00097222) popup_call_audio_second_window_t_ParamLimits

0xf134,	// (0x00097222) popup_call_audio_second_window_t

0x0666,	// (0x00088754) bg_popup_call_pane_cp04

0x08a3,	// (0x00088991) list_conf_pane

0x08ab,	// (0x00088999) popup_call_audio_conf_window_t1

0x08b9,	// (0x000889a7) call_thumbnail_pane_g1

0x08c1,	// (0x000889af) bg_pinb_pane_ParamLimits

0x08c1,	// (0x000889af) bg_pinb_pane

0x08cf,	// (0x000889bd) find_pinb_pane

0x08d8,	// (0x000889c6) listscroll_pinb_pane_ParamLimits

0x08d8,	// (0x000889c6) listscroll_pinb_pane

0x08e7,	// (0x000889d5) pinb_bg_pane_g1

0x285a,	// (0x0008a948) pinb_bg_pane_g2

0x2866,	// (0x0008a954) pinb_bg_pane_g3

0x2872,	// (0x0008a960) pinb_bg_pane_g4

0x287e,	// (0x0008a96c) pinb_bg_pane_g5

0x288a,	// (0x0008a978) pinb_bg_pane_g6

0x2895,	// (0x0008a983) pinb_bg_pane_g7

0x28a0,	// (0x0008a98e) pinb_bg_pane_g8

0x28ab,	// (0x0008a999) pinb_bg_pane_g9

0x28b5,	// (0x0008a9a3) pinb_bg_pane_g10

0x0009,

0xf13b,	// (0x00097229) pinb_bg_pane_g

0x28d2,	// (0x0008a9c0) grid_pinb_pane

0x28db,	// (0x0008a9c9) list_pinb_pane

0x28e4,	// (0x0008a9d2) scroll_pane_cp01_ParamLimits

0x28e4,	// (0x0008a9d2) scroll_pane_cp01

0x08f1,	// (0x000889df) find_pinb_pane_g1_ParamLimits

0x08f1,	// (0x000889df) find_pinb_pane_g1

0x0909,	// (0x000889f7) find_pinb_pane_t1

0x091b,	// (0x00088a09) find_pinb_pane_t2

0x0001,

0xf155,	// (0x00097243) find_pinb_pane_t

0x0930,	// (0x00088a1e) input_focus_pane_cp01_ParamLimits

0x0930,	// (0x00088a1e) input_focus_pane_cp01

0x28f6,	// (0x0008a9e4) cell_pinb_pane_ParamLimits

0x28f6,	// (0x0008a9e4) cell_pinb_pane

0x291f,	// (0x0008aa0d) cell_pinb_pane_g1_ParamLimits

0x291f,	// (0x0008aa0d) cell_pinb_pane_g1

0x292f,	// (0x0008aa1d) cell_pinb_pane_g2_ParamLimits

0x292f,	// (0x0008aa1d) cell_pinb_pane_g2

0x093c,	// (0x00088a2a) cell_pinb_pane_g3_ParamLimits

0x093c,	// (0x00088a2a) cell_pinb_pane_g3

0x0002,

0xf15a,	// (0x00097248) cell_pinb_pane_g_ParamLimits

0xf15a,	// (0x00097248) cell_pinb_pane_g

0x0666,	// (0x00088754) grid_highlight_pane_cp01

0x293b,	// (0x0008aa29) list_pinb_item_pane_ParamLimits

0x293b,	// (0x0008aa29) list_pinb_item_pane

0x0666,	// (0x00088754) list_highlight_pane_cp02

0x294d,	// (0x0008aa3b) list_pinb_item_pane_g1_ParamLimits

0x294d,	// (0x0008aa3b) list_pinb_item_pane_g1

0x0948,	// (0x00088a36) list_pinb_item_pane_g2_ParamLimits

0x0948,	// (0x00088a36) list_pinb_item_pane_g2

0x295a,	// (0x0008aa48) list_pinb_item_pane_g3_ParamLimits

0x295a,	// (0x0008aa48) list_pinb_item_pane_g3

0x296b,	// (0x0008aa59) list_pinb_item_pane_g4_ParamLimits

0x296b,	// (0x0008aa59) list_pinb_item_pane_g4

0x0003,

0xf161,	// (0x0009724f) list_pinb_item_pane_g_ParamLimits

0xf161,	// (0x0009724f) list_pinb_item_pane_g

0x2977,	// (0x0008aa65) list_pinb_item_pane_t1_ParamLimits

0x2977,	// (0x0008aa65) list_pinb_item_pane_t1

0x29ac,	// (0x0008aa9a) calc_display_pane

0x29d2,	// (0x0008aac0) calc_paper_pane

0x29f3,	// (0x0008aae1) grid_calc_pane

0x0666,	// (0x00088754) bg_list_pane_cp01

0x2a1b,	// (0x0008ab09) clock_g1

0x2a23,	// (0x0008ab11) clock_g2

0x0001,

0xf16a,	// (0x00097258) clock_g

0x2a2b,	// (0x0008ab19) clock_t1_ParamLimits

0x2a2b,	// (0x0008ab19) clock_t1

0x2a40,	// (0x0008ab2e) clock_t2_ParamLimits

0x2a40,	// (0x0008ab2e) clock_t2

0x2a52,	// (0x0008ab40) clock_t3_ParamLimits

0x2a52,	// (0x0008ab40) clock_t3

0x2a64,	// (0x0008ab52) clock_t4_ParamLimits

0x2a64,	// (0x0008ab52) clock_t4

0x2a76,	// (0x0008ab64) clock_t5_ParamLimits

0x2a76,	// (0x0008ab64) clock_t5

0x2a8b,	// (0x0008ab79) clock_t6_ParamLimits

0x2a8b,	// (0x0008ab79) clock_t6

0x2a9d,	// (0x0008ab8b) clock_t7_ParamLimits

0x2a9d,	// (0x0008ab8b) clock_t7

0x2aaf,	// (0x0008ab9d) clock_t8_ParamLimits

0x2aaf,	// (0x0008ab9d) clock_t8

0x2ac3,	// (0x0008abb1) clock_t9_ParamLimits

0x2ac3,	// (0x0008abb1) clock_t9

0x0008,

0xf16f,	// (0x0009725d) clock_t_ParamLimits

0xf16f,	// (0x0009725d) clock_t

0x0954,	// (0x00088a42) popup_clock_analogue_window_cp02

0x0954,	// (0x00088a42) popup_clock_digital_window_cp01

0x095c,	// (0x00088a4a) listscroll_help_pane

0x0666,	// (0x00088754) phob_pre_status_pane

0x0966,	// (0x00088a54) grid_qdial_pane

0x0666,	// (0x00088754) listscroll_mce_pane

0x0970,	// (0x00088a5e) bg_notes_pane

0x097a,	// (0x00088a68) list_notes_pane

0x2ad7,	// (0x0008abc5) scroll_pane_cp06

0x0984,	// (0x00088a72) bg_calc_paper_pane

0xb01f,	// (0x0009310d) list_calc_pane

0x0998,	// (0x00088a86) bg_calc_display_pane

0x2ae2,	// (0x0008abd0) calc_display_pane_t1

0x2af4,	// (0x0008abe2) calc_display_pane_t2

0xb039,	// (0x00093127) calc_display_pane_t3

0x0002,

0xf182,	// (0x00097270) calc_display_pane_t

0x2b06,	// (0x0008abf4) cell_calc_pane_ParamLimits

0x2b06,	// (0x0008abf4) cell_calc_pane

0x09a4,	// (0x00088a92) bg_calc_paper_pane_g1

0x09b0,	// (0x00088a9e) bg_calc_paper_pane_g2

0x09bc,	// (0x00088aaa) bg_calc_paper_pane_g3

0x09c8,	// (0x00088ab6) bg_calc_paper_pane_g4

0x09d4,	// (0x00088ac2) bg_calc_paper_pane_g5

0x2b3b,	// (0x0008ac29) bg_calc_paper_pane_g6

0x2b4a,	// (0x0008ac38) bg_calc_paper_pane_g7

0x2b59,	// (0x0008ac47) bg_calc_paper_pane_g8

0x0007,

0xf189,	// (0x00097277) bg_calc_paper_pane_g

0x2b6c,	// (0x0008ac5a) calc_bg_paper_pane_g9

0x2b7f,	// (0x0008ac6d) list_calc_item_pane_ParamLimits

0x2b7f,	// (0x0008ac6d) list_calc_item_pane

0x09e0,	// (0x00088ace) list_calc_item_pane_g1

0xb04b,	// (0x00093139) list_calc_item_pane_t1_ParamLimits

0xb04b,	// (0x00093139) list_calc_item_pane_t1

0x2b92,	// (0x0008ac80) list_calc_item_pane_t2_ParamLimits

0x2b92,	// (0x0008ac80) list_calc_item_pane_t2

0x0001,

0xf19a,	// (0x00097288) list_calc_item_pane_t_ParamLimits

0xf19a,	// (0x00097288) list_calc_item_pane_t

0x09ed,	// (0x00088adb) cell_calc_pane_g1

0x09f7,	// (0x00088ae5) grid_highlight_pane_cp02

0x2bc6,	// (0x0008acb4) bg_calc_display_pane_g1

0x2bcf,	// (0x0008acbd) bg_calc_display_pane_g2

0x2bd9,	// (0x0008acc7) bg_calc_display_pane_g3

0x0002,

0xf1a4,	// (0x00097292) bg_calc_display_pane_g

0x2be2,	// (0x0008acd0) cell_qdial_pane_ParamLimits

0x2be2,	// (0x0008acd0) cell_qdial_pane

0x2bf6,	// (0x0008ace4) cell_qdial_pane_g1_ParamLimits

0x2bf6,	// (0x0008ace4) cell_qdial_pane_g1

0x2c0c,	// (0x0008acfa) cell_qdial_pane_g2_ParamLimits

0x2c0c,	// (0x0008acfa) cell_qdial_pane_g2

0x0a19,	// (0x00088b07) cell_qdial_pane_g3_ParamLimits

0x0a19,	// (0x00088b07) cell_qdial_pane_g3

0x0003,

0xf1ab,	// (0x00097299) cell_qdial_pane_g_ParamLimits

0xf1ab,	// (0x00097299) cell_qdial_pane_g

0x2c33,	// (0x0008ad21) cell_qdial_pane_t1_ParamLimits

0x2c33,	// (0x0008ad21) cell_qdial_pane_t1

0x2c4b,	// (0x0008ad39) cell_qdial_pane_t2_ParamLimits

0x2c4b,	// (0x0008ad39) cell_qdial_pane_t2

0x2c5e,	// (0x0008ad4c) cell_qdial_pane_t3_ParamLimits

0x2c5e,	// (0x0008ad4c) cell_qdial_pane_t3

0x0002,

0xf1b4,	// (0x000972a2) cell_qdial_pane_t_ParamLimits

0xf1b4,	// (0x000972a2) cell_qdial_pane_t

0x0666,	// (0x00088754) grid_highlight_pane_cp04

0x0a25,	// (0x00088b13) thumbnail_qdial_pane_ParamLimits

0x0a25,	// (0x00088b13) thumbnail_qdial_pane

0x0a81,	// (0x00088b6f) list_help_pane

0x0a8a,	// (0x00088b78) scroll_pane_cp02

0x2c71,	// (0x0008ad5f) help_list_pane_t1_ParamLimits

0x2c71,	// (0x0008ad5f) help_list_pane_t1

0xb05d,	// (0x0009314b) bg_notes_pane_g2

0xb065,	// (0x00093153) bg_notes_pane_g3

0xb06d,	// (0x0009315b) notes_bg_pane_g1

0xb075,	// (0x00093163) notes_bg_pane_g4

0xb07d,	// (0x0009316b) notes_bg_pane_g5

0xb085,	// (0x00093173) notes_bg_pane_g6

0xb08d,	// (0x0009317b) notes_bg_pane_g7

0xb095,	// (0x00093183) notes_bg_pane_g8

0xb09d,	// (0x0009318b) notes_bg_pane_g9

0x0006,

0xf1d2,	// (0x000972c0) notes_bg_pane_g

0x2c8e,	// (0x0008ad7c) list_notes_text_pane_ParamLimits

0x2c8e,	// (0x0008ad7c) list_notes_text_pane

0x0a93,	// (0x00088b81) list_notes_text_pane_g1

0x2ca3,	// (0x0008ad91) list_notes_text_pane_t1

0x0998,	// (0x00088a86) listscroll_cale_week_pane

0x2cce,	// (0x0008adbc) bg_cale_heading_pane

0x0aad,	// (0x00088b9b) bg_cale_pane_cp01

0x2ce2,	// (0x0008add0) cale_week_corner_pane

0x2cf8,	// (0x0008ade6) cale_week_day_heading_pane

0x2d0c,	// (0x0008adfa) cale_week_scroll_pane_g1

0x2d1d,	// (0x0008ae0b) cale_week_scroll_pane_g2

0x2d2e,	// (0x0008ae1c) cale_week_scroll_pane_g3

0x2d3f,	// (0x0008ae2d) cale_week_scroll_pane_g4

0x2d50,	// (0x0008ae3e) cale_week_scroll_pane_g5

0x2d61,	// (0x0008ae4f) cale_week_scroll_pane_g6

0x2d72,	// (0x0008ae60) cale_week_scroll_pane_g7

0x2d83,	// (0x0008ae71) cale_week_scroll_pane_g8

0x2d94,	// (0x0008ae82) cale_week_scroll_pane_g9

0x2da5,	// (0x0008ae93) cale_week_scroll_pane_g10

0x2db6,	// (0x0008aea4) cale_week_scroll_pane_g11

0x2dc7,	// (0x0008aeb5) cale_week_scroll_pane_g12

0x2dd8,	// (0x0008aec6) cale_week_scroll_pane_g13

0x2de9,	// (0x0008aed7) cale_week_scroll_pane_g14

0x2dfa,	// (0x0008aee8) cale_week_scroll_pane_g15

0x000e,

0xf1e1,	// (0x000972cf) cale_week_scroll_pane_g

0x2e0b,	// (0x0008aef9) cale_week_time_pane

0x2e1c,	// (0x0008af0a) grid_cale_week_pane

0x2e2f,	// (0x0008af1d) scroll_pane_cp08

0x2e49,	// (0x0008af37) cell_cale_week_pane_ParamLimits

0x2e49,	// (0x0008af37) cell_cale_week_pane

0x2e85,	// (0x0008af73) cale_week_day_heading_pane_t1

0x2eb2,	// (0x0008afa0) cale_week_day_heading_pane_t2

0x2edf,	// (0x0008afcd) cale_week_day_heading_pane_t3

0x2f0c,	// (0x0008affa) cale_week_day_heading_pane_t4

0x2f39,	// (0x0008b027) cale_week_day_heading_pane_t5

0x2f66,	// (0x0008b054) cale_week_day_heading_pane_t6

0x2f93,	// (0x0008b081) cale_week_day_heading_pane_t7

0x0006,

0xf200,	// (0x000972ee) cale_week_day_heading_pane_t

0x0ad8,	// (0x00088bc6) bg_cale_side_pane

0x2fc0,	// (0x0008b0ae) cale_week_time_pane_t1

0x2fd8,	// (0x0008b0c6) cale_week_time_pane_t2

0x2ff0,	// (0x0008b0de) cale_week_time_pane_t3

0x3008,	// (0x0008b0f6) cale_week_time_pane_t4

0x3020,	// (0x0008b10e) cale_week_time_pane_t5

0x3038,	// (0x0008b126) cale_week_time_pane_t6

0x3050,	// (0x0008b13e) cale_week_time_pane_t7

0x3068,	// (0x0008b156) cale_week_time_pane_t8

0x0007,

0xf20f,	// (0x000972fd) cale_week_time_pane_t

0x3080,	// (0x0008b16e) cell_cale_week_pane_g2

0x3099,	// (0x0008b187) cell_cale_week_pane_g3_ParamLimits

0x3099,	// (0x0008b187) cell_cale_week_pane_g3

0x0ae6,	// (0x00088bd4) grid_highlight_pane_cp07

0x0aee,	// (0x00088bdc) listscroll_gms_pane

0x0af8,	// (0x00088be6) grid_gms_pane

0x0b01,	// (0x00088bef) listscroll_gms_pane_g1

0x0b09,	// (0x00088bf7) listscroll_gms_pane_g2

0x0001,

0xf220,	// (0x0009730e) listscroll_gms_pane_g

0x30b1,	// (0x0008b19f) scroll_pane_cp010

0x30bc,	// (0x0008b1aa) cell_gms_pane_ParamLimits

0x30bc,	// (0x0008b1aa) cell_gms_pane

0x30cf,	// (0x0008b1bd) cell_gms_pane_g1

0x0b11,	// (0x00088bff) cell_gms_pane_g2

0x0b19,	// (0x00088c07) cell_gms_pane_g3

0x0b22,	// (0x00088c10) cell_gms_pane_g4

0x0003,

0xf225,	// (0x00097313) cell_gms_pane_g

0x0b2b,	// (0x00088c19) grid_highlight_pane_cp09

0x5817,	// (0x0008d905) phob_pre_status_pane_g1

0x581f,	// (0x0008d90d) phob_pre_status_pane_g2

0x5827,	// (0x0008d915) phob_pre_status_pane_g3

0x582f,	// (0x0008d91d) phob_pre_status_pane_g4

0x0004,

0xf614,	// (0x00097702) phob_pre_status_pane_g

0x583f,	// (0x0008d92d) phob_pre_status_pane_t1

0x584d,	// (0x0008d93b) phob_pre_status_pane_t2

0x585d,	// (0x0008d94b) phob_pre_status_pane_t3

0x0002,

0xf61f,	// (0x0009770d) phob_pre_status_pane_t

0x0666,	// (0x00088754) bg_list_pane_cp05

0x30df,	// (0x0008b1cd) grid_vorec_pane

0xb0a5,	// (0x00093193) vorec_t1

0xb0b3,	// (0x000931a1) vorec_t2

0xb0c1,	// (0x000931af) vorec_t3

0xb0cf,	// (0x000931bd) vorec_t4

0xb0dd,	// (0x000931cb) vorec_t5

0xb0eb,	// (0x000931d9) vorec_t6

0x0006,

0xf22e,	// (0x0009731c) vorec_t

0xb107,	// (0x000931f5) wait_bar_pane_cp01

0x30e7,	// (0x0008b1d5) cell_vorec_pane_ParamLimits

0x30e7,	// (0x0008b1d5) cell_vorec_pane

0x0b33,	// (0x00088c21) cell_vorec_pane_g1

0x0666,	// (0x00088754) grid_highlight_pane_cp05

0x3112,	// (0x0008b200) cams_zoom_pane

0x3121,	// (0x0008b20f) image_vga_pane

0x313b,	// (0x0008b229) main_camera_pane_g1

0x314d,	// (0x0008b23b) main_camera_pane_g2

0x315d,	// (0x0008b24b) main_camera_pane_g3

0x316d,	// (0x0008b25b) main_camera_pane_g4

0x317d,	// (0x0008b26b) main_camera_pane_g5

0x318d,	// (0x0008b27b) main_camera_pane_g6

0x319f,	// (0x0008b28d) main_camera_pane_g7

0x0007,

0xf23d,	// (0x0009732b) main_camera_pane_g

0x31af,	// (0x0008b29d) main_camera_pane_t1

0x31c5,	// (0x0008b2b3) main_camera_pane_t2

0x0001,

0xf24e,	// (0x0009733c) main_camera_pane_t

0x31ff,	// (0x0008b2ed) cams_zoom_pane_cp_ParamLimits

0x31ff,	// (0x0008b2ed) cams_zoom_pane_cp

0x3227,	// (0x0008b315) image_cif_pane_ParamLimits

0x3227,	// (0x0008b315) image_cif_pane

0x3262,	// (0x0008b350) image_subqcif_pane

0x326a,	// (0x0008b358) main_video_pane_g1_ParamLimits

0x326a,	// (0x0008b358) main_video_pane_g1

0x328e,	// (0x0008b37c) main_video_pane_g2_ParamLimits

0x328e,	// (0x0008b37c) main_video_pane_g2

0x32c2,	// (0x0008b3b0) main_video_pane_g3_ParamLimits

0x32c2,	// (0x0008b3b0) main_video_pane_g3

0x32f0,	// (0x0008b3de) main_video_pane_g4_ParamLimits

0x32f0,	// (0x0008b3de) main_video_pane_g4

0x331e,	// (0x0008b40c) main_video_pane_g5_ParamLimits

0x331e,	// (0x0008b40c) main_video_pane_g5

0x0b49,	// (0x00088c37) main_video_pane_g6_ParamLimits

0x0b49,	// (0x00088c37) main_video_pane_g6

0x0006,

0xf253,	// (0x00097341) main_video_pane_g_ParamLimits

0xf253,	// (0x00097341) main_video_pane_g

0x334b,	// (0x0008b439) main_video_pane_t1_ParamLimits

0x334b,	// (0x0008b439) main_video_pane_t1

0x0b63,	// (0x00088c51) cams_zoom_pane_g1

0x0b6c,	// (0x00088c5a) cams_zoom_pane_g2

0x0b75,	// (0x00088c63) cams_zoom_pane_g3

0x0b7e,	// (0x00088c6c) cams_zoom_pane_g4

0x0003,

0xf262,	// (0x00097350) cams_zoom_pane_g

0x33a8,	// (0x0008b496) grid_cams_pane

0x33c2,	// (0x0008b4b0) linegrid_cams_pane

0x33d6,	// (0x0008b4c4) cell_cams_pane_ParamLimits

0x33d6,	// (0x0008b4c4) cell_cams_pane

0x0b87,	// (0x00088c75) cams_burst_image_pane

0x0b8f,	// (0x00088c7d) cell_cams_pane_g1

0x0666,	// (0x00088754) grid_highlight_pane_cp03

0x09ed,	// (0x00088adb) mp_bg_pane_g1

0x0666,	// (0x00088754) bg_list_pane_cp03

0xc51f,	// (0x0009460d) bg_mp_pane

0xc527,	// (0x00094615) grid_mp_pane

0xc52f,	// (0x0009461d) media_player_g1

0xc537,	// (0x00094625) media_player_t1

0xc545,	// (0x00094633) media_player_t2

0xc553,	// (0x00094641) media_player_t3

0xc561,	// (0x0009464f) media_player_t4

0xc56f,	// (0x0009465d) media_player_t5

0xc57d,	// (0x0009466b) media_player_t6

0xc58b,	// (0x00094679) media_player_t7

0x0006,

0xf5fe,	// (0x000976ec) media_player_t

0xc599,	// (0x00094687) wait_bar_pane_cp02

0xf5e3,	// (0x000976d1) main_usb_pane_t

0x580e,	// (0x0008d8fc) cell_mp_pane

0x09ed,	// (0x00088adb) cell_mp_pane_g1

0x0666,	// (0x00088754) grid_highlight_pane_cp06

0x0b97,	// (0x00088c85) grid_skin_colour_pane

0x0b9f,	// (0x00088c8d) list_highlight_pane_cp03

0x350c,	// (0x0008b5fa) skin_g1

0x0ba7,	// (0x00088c95) skin_t1

0x0bb6,	// (0x00088ca4) skin_t2

0x0001,

0xf297,	// (0x00097385) skin_t

0x3514,	// (0x0008b602) cell_skin_colour_pane_ParamLimits

0x3514,	// (0x0008b602) cell_skin_colour_pane

0x0bc4,	// (0x00088cb2) cell_skin_colour_pane_g1

0x3570,	// (0x0008b65e) call_video_g1_ParamLimits

0x3570,	// (0x0008b65e) call_video_g1

0x358c,	// (0x0008b67a) call_video_g2_ParamLimits

0x358c,	// (0x0008b67a) call_video_g2

0x0001,

0xf29c,	// (0x0009738a) call_video_g_ParamLimits

0xf29c,	// (0x0009738a) call_video_g

0x35c2,	// (0x0008b6b0) call_video_uplink_pane_cp1_ParamLimits

0x35c2,	// (0x0008b6b0) call_video_uplink_pane_cp1

0x0bde,	// (0x00088ccc) call_video_uplink_pane_cp2

0x3640,	// (0x0008b72e) video_down_crop_pane_ParamLimits

0x3640,	// (0x0008b72e) video_down_crop_pane

0x3714,	// (0x0008b802) video_down_pane_ParamLimits

0x3714,	// (0x0008b802) video_down_pane

0x0be6,	// (0x00088cd4) video_down_subqcif_pane_ParamLimits

0x0be6,	// (0x00088cd4) video_down_subqcif_pane

0x0bfe,	// (0x00088cec) video_down_subqcif_pane_cp_ParamLimits

0x0bfe,	// (0x00088cec) video_down_subqcif_pane_cp

0x0c22,	// (0x00088d10) im_reading_pane_ParamLimits

0x0c22,	// (0x00088d10) im_reading_pane

0x37e5,	// (0x0008b8d3) im_writing_pane_ParamLimits

0x37e5,	// (0x0008b8d3) im_writing_pane

0x37fb,	// (0x0008b8e9) im_reading_pane_t1

0x0c3c,	// (0x00088d2a) list_im_pane

0x0c4d,	// (0x00088d3b) scroll_pane_cp07

0x3834,	// (0x0008b922) im_writing_pane_t1_ParamLimits

0x3834,	// (0x0008b922) im_writing_pane_t1

0x0c66,	// (0x00088d54) im_writing_pane_t2_ParamLimits

0x0c66,	// (0x00088d54) im_writing_pane_t2

0x0001,

0xf2a6,	// (0x00097394) im_writing_pane_t_ParamLimits

0xf2a6,	// (0x00097394) im_writing_pane_t

0x0666,	// (0x00088754) input_focus_pane_cp04

0x0666,	// (0x00088754) input_focus_pane_cp05

0x3849,	// (0x0008b937) list_im_single_pane_ParamLimits

0x3849,	// (0x0008b937) list_im_single_pane

0x385d,	// (0x0008b94b) list_single_im_pane_t1

0x57ce,	// (0x0008d8bc) blid_accuracy_pane

0x57d6,	// (0x0008d8c4) blid_compass_pane

0x57e0,	// (0x0008d8ce) main_location_t1

0x57f0,	// (0x0008d8de) main_location_t2

0x5800,	// (0x0008d8ee) main_location_t3

0x0002,

0xf60d,	// (0x000976fb) main_location_t

0x0666,	// (0x00088754) aid_levels_location

0x09ed,	// (0x00088adb) blid_accuracy_pane_g1

0x09ed,	// (0x00088adb) blid_accuracy_pane_g2

0x0001,

0xf308,	// (0x000973f6) blid_accuracy_pane_g

0x0cae,	// (0x00088d9c) wml_content_pane

0x0cec,	// (0x00088dda) wml_button_pane_ParamLimits

0x0cec,	// (0x00088dda) wml_button_pane

0x386c,	// (0x0008b95a) wml_list_single_large_pane_ParamLimits

0x386c,	// (0x0008b95a) wml_list_single_large_pane

0x3881,	// (0x0008b96f) wml_list_single_medium_pane_ParamLimits

0x3881,	// (0x0008b96f) wml_list_single_medium_pane

0x3897,	// (0x0008b985) wml_list_single_small_pane_ParamLimits

0x3897,	// (0x0008b985) wml_list_single_small_pane

0x0d00,	// (0x00088dee) wml_selection_box_pane_ParamLimits

0x0d00,	// (0x00088dee) wml_selection_box_pane

0x0d13,	// (0x00088e01) wml_list_single_pane_t1

0x0d22,	// (0x00088e10) wml_list_single_medium_pane_t1

0x0d31,	// (0x00088e1f) wml_list_single_large_pane_t1

0x0d40,	// (0x00088e2e) input_focus_pane_cp02_ParamLimits

0x0d40,	// (0x00088e2e) input_focus_pane_cp02

0x0d53,	// (0x00088e41) wml_selection_box_pane_g1

0x0d5c,	// (0x00088e4a) wml_selection_box_pane_t1_ParamLimits

0x0d5c,	// (0x00088e4a) wml_selection_box_pane_t1

0x08c1,	// (0x000889af) bg_wml_button_pane_ParamLimits

0x08c1,	// (0x000889af) bg_wml_button_pane

0x0d74,	// (0x00088e62) wml_button_pane_g1

0x0d7c,	// (0x00088e6a) wml_button_pane_t1

0x0d74,	// (0x00088e62) wml_button_bg_pane_g1

0x0d8c,	// (0x00088e7a) wml_button_bg_pane_g2

0x0d94,	// (0x00088e82) wml_button_bg_pane_g3

0x0d9c,	// (0x00088e8a) wml_button_bg_pane_g4

0x0da4,	// (0x00088e92) wml_button_bg_pane_g5

0x0dac,	// (0x00088e9a) wml_button_bg_pane_g6

0x0db4,	// (0x00088ea2) wml_button_bg_pane_g7

0x0dbc,	// (0x00088eaa) wml_button_bg_pane_g8

0x0dc4,	// (0x00088eb2) wml_button_bg_pane_g9

0x0008,

0xf2ab,	// (0x00097399) wml_button_bg_pane_g

0x38af,	// (0x0008b99d) bg_list_pane_cp02

0x0dcc,	// (0x00088eba) mce_header_pane_ParamLimits

0x0dcc,	// (0x00088eba) mce_header_pane

0x0de2,	// (0x00088ed0) mce_icon_pane

0x0de2,	// (0x00088ed0) mce_image_pane

0x0deb,	// (0x00088ed9) mce_text_pane_ParamLimits

0x0deb,	// (0x00088ed9) mce_text_pane

0x38b7,	// (0x0008b9a5) scroll_pane_cp03

0x0ce4,	// (0x00088dd2) scroll_pane_cp04

0x0dfe,	// (0x00088eec) scroll_pane_cp05_ParamLimits

0x0dfe,	// (0x00088eec) scroll_pane_cp05

0x38c1,	// (0x0008b9af) mce_header_field_pane_ParamLimits

0x38c1,	// (0x0008b9af) mce_header_field_pane

0x38d8,	// (0x0008b9c6) mce_header_field_pane_2_ParamLimits

0x38d8,	// (0x0008b9c6) mce_header_field_pane_2

0x38ee,	// (0x0008b9dc) mce_header_field_pane_3

0x38f6,	// (0x0008b9e4) list_single_mce_message_pane_ParamLimits

0x38f6,	// (0x0008b9e4) list_single_mce_message_pane

0x390b,	// (0x0008b9f9) list_single_mce_smart_pane_ParamLimits

0x390b,	// (0x0008b9f9) list_single_mce_smart_pane

0x0e0a,	// (0x00088ef8) input_focus_pane_cp03

0x0e13,	// (0x00088f01) list_header_data_pane

0x392b,	// (0x0008ba19) mce_header_field_pane_t1

0x393b,	// (0x0008ba29) list_single_mce_header_pane_ParamLimits

0x393b,	// (0x0008ba29) list_single_mce_header_pane

0x0e1b,	// (0x00088f09) list_single_mce_header_pane_t1

0x0e2a,	// (0x00088f18) list_single_mce_message_pane_g1

0x0e32,	// (0x00088f20) list_single_mce_message_pane_t1

0x396d,	// (0x0008ba5b) bg_cale_heading_pane_cp01_ParamLimits

0x396d,	// (0x0008ba5b) bg_cale_heading_pane_cp01

0x0e40,	// (0x00088f2e) bg_cale_pane_cp02_ParamLimits

0x0e40,	// (0x00088f2e) bg_cale_pane_cp02

0x3990,	// (0x0008ba7e) cale_month_corner_pane

0x39a6,	// (0x0008ba94) cale_month_day_heading_pane_ParamLimits

0x39a6,	// (0x0008ba94) cale_month_day_heading_pane

0x39d1,	// (0x0008babf) cale_month_pane_g1_ParamLimits

0x39d1,	// (0x0008babf) cale_month_pane_g1

0x39ed,	// (0x0008badb) cale_month_pane_g2_ParamLimits

0x39ed,	// (0x0008badb) cale_month_pane_g2

0x3a08,	// (0x0008baf6) cale_month_pane_g3_ParamLimits

0x3a08,	// (0x0008baf6) cale_month_pane_g3

0x3a34,	// (0x0008bb22) cale_month_pane_g4_ParamLimits

0x3a34,	// (0x0008bb22) cale_month_pane_g4

0x3a60,	// (0x0008bb4e) cale_month_pane_g5_ParamLimits

0x3a60,	// (0x0008bb4e) cale_month_pane_g5

0x3a8c,	// (0x0008bb7a) cale_month_pane_g6_ParamLimits

0x3a8c,	// (0x0008bb7a) cale_month_pane_g6

0x3ab8,	// (0x0008bba6) cale_month_pane_g7_ParamLimits

0x3ab8,	// (0x0008bba6) cale_month_pane_g7

0x3ae4,	// (0x0008bbd2) cale_month_pane_g8_ParamLimits

0x3ae4,	// (0x0008bbd2) cale_month_pane_g8

0x3b18,	// (0x0008bc06) cale_month_pane_g9_ParamLimits

0x3b18,	// (0x0008bc06) cale_month_pane_g9

0x3b4a,	// (0x0008bc38) cale_month_pane_g10_ParamLimits

0x3b4a,	// (0x0008bc38) cale_month_pane_g10

0x3b7c,	// (0x0008bc6a) cale_month_pane_g11_ParamLimits

0x3b7c,	// (0x0008bc6a) cale_month_pane_g11

0x3bae,	// (0x0008bc9c) cale_month_pane_g12_ParamLimits

0x3bae,	// (0x0008bc9c) cale_month_pane_g12

0x3be0,	// (0x0008bcce) cale_month_pane_g13_ParamLimits

0x3be0,	// (0x0008bcce) cale_month_pane_g13

0x000c,

0xf2be,	// (0x000973ac) cale_month_pane_g_ParamLimits

0xf2be,	// (0x000973ac) cale_month_pane_g

0x3c12,	// (0x0008bd00) cale_month_week_pane

0x3c25,	// (0x0008bd13) grid_cale_month_pane_ParamLimits

0x3c25,	// (0x0008bd13) grid_cale_month_pane

0x3c4b,	// (0x0008bd39) cale_month_day_heading_pane_t1

0x3ca9,	// (0x0008bd97) cale_month_day_heading_pane_t2

0x3d0e,	// (0x0008bdfc) cale_month_day_heading_pane_t3

0x3d73,	// (0x0008be61) cale_month_day_heading_pane_t4

0x3dd8,	// (0x0008bec6) cale_month_day_heading_pane_t5

0x3e3d,	// (0x0008bf2b) cale_month_day_heading_pane_t6

0x3ea2,	// (0x0008bf90) cale_month_day_heading_pane_t7

0x0006,

0xf2d9,	// (0x000973c7) cale_month_day_heading_pane_t

0x0ad8,	// (0x00088bc6) bg_cale_side_pane_cp01

0x3f07,	// (0x0008bff5) cale_month_week_pane_t1

0x3f1e,	// (0x0008c00c) cale_month_week_pane_t2

0x3f35,	// (0x0008c023) cale_month_week_pane_t3

0x3f4c,	// (0x0008c03a) cale_month_week_pane_t4

0x3f63,	// (0x0008c051) cale_month_week_pane_t5

0x3f7a,	// (0x0008c068) cale_month_week_pane_t6

0x0005,

0xf2e8,	// (0x000973d6) cale_month_week_pane_t

0x3f91,	// (0x0008c07f) cell_cale_month_pane_ParamLimits

0x3f91,	// (0x0008c07f) cell_cale_month_pane

0xb10f,	// (0x000931fd) cell_cale_month_pane_g1

0x4061,	// (0x0008c14f) cell_cale_month_pane_t1_ParamLimits

0x4061,	// (0x0008c14f) cell_cale_month_pane_t1

0x0ae6,	// (0x00088bd4) grid_highlight_pane_cp08

0x09ed,	// (0x00088adb) main_smil_g1

0x407d,	// (0x0008c16b) smil_status_pane

0x0e75,	// (0x00088f63) smil_text_pane

0xc43f,	// (0x0009452d) bg_popup_call3_rect_pane_g8

0xc447,	// (0x00094535) bg_popup_call3_rect_pane_g9

0x0008,

0xf5a1,	// (0x0009768f) bg_popup_call3_rect_pane_g

0xc6c1,	// (0x000947af) smil_status_volume_pane_g1

0x0e7f,	// (0x00088f6d) smil_status_pane_t1

0xc6f4,	// (0x000947e2) volume_smil_pane

0x4099,	// (0x0008c187) list_smil_text_pane

0x40a3,	// (0x0008c191) scroll_pane_cp011

0x40ae,	// (0x0008c19c) smil_text_list_pane_t1_ParamLimits

0x40ae,	// (0x0008c19c) smil_text_list_pane_t1

0xb11b,	// (0x00093209) aid_volume_smil_ParamLimits

0xb11b,	// (0x00093209) aid_volume_smil

0x09ed,	// (0x00088adb) smil_volume_pane_g1

0x09ed,	// (0x00088adb) smil_volume_pane_g2

0x0001,

0xf308,	// (0x000973f6) smil_volume_pane_g

0x0998,	// (0x00088a86) listscroll_cale_day_pane

0x40f4,	// (0x0008c1e2) bg_cale_pane

0x410c,	// (0x0008c1fa) list_cale_pane

0x411d,	// (0x0008c20b) scroll_pane_cp09

0x412e,	// (0x0008c21c) cale_bg_pane_g1

0x4136,	// (0x0008c224) cale_bg_pane_g2

0x413e,	// (0x0008c22c) cale_bg_pane_g3

0x4146,	// (0x0008c234) cale_bg_pane_g4

0x414e,	// (0x0008c23c) cale_bg_pane_g5

0x4156,	// (0x0008c244) cale_bg_pane_g6

0x415e,	// (0x0008c24c) cale_bg_pane_g7

0x4166,	// (0x0008c254) cale_bg_pane_g8

0x416e,	// (0x0008c25c) cale_bg_pane_g9

0x0008,

0xf30d,	// (0x000973fb) cale_bg_pane_g

0x30e7,	// (0x0008b1d5) list_cale_time_pane_ParamLimits

0x30e7,	// (0x0008b1d5) list_cale_time_pane

0x4176,	// (0x0008c264) list_cale_time_pane_g1_ParamLimits

0x4176,	// (0x0008c264) list_cale_time_pane_g1

0x4182,	// (0x0008c270) list_cale_time_pane_g2_ParamLimits

0x4182,	// (0x0008c270) list_cale_time_pane_g2

0x418f,	// (0x0008c27d) list_cale_time_pane_g3_ParamLimits

0x418f,	// (0x0008c27d) list_cale_time_pane_g3

0x419d,	// (0x0008c28b) list_cale_time_pane_g4_ParamLimits

0x419d,	// (0x0008c28b) list_cale_time_pane_g4

0x41ab,	// (0x0008c299) list_cale_time_pane_g5_ParamLimits

0x41ab,	// (0x0008c299) list_cale_time_pane_g5

0x0005,

0xf320,	// (0x0009740e) list_cale_time_pane_g_ParamLimits

0xf320,	// (0x0009740e) list_cale_time_pane_g

0x41c6,	// (0x0008c2b4) list_cale_time_pane_t1_ParamLimits

0x41c6,	// (0x0008c2b4) list_cale_time_pane_t1

0x41ee,	// (0x0008c2dc) list_cale_time_pane_t2_ParamLimits

0x41ee,	// (0x0008c2dc) list_cale_time_pane_t2

0x4987,	// (0x0008ca75) aid_blid_cardinal_pane

0x49d1,	// (0x0008cabf) compass_pane_t4

0x4216,	// (0x0008c304) list_cale_time_pane_t4_ParamLimits

0x4216,	// (0x0008c304) list_cale_time_pane_t4

0x49df,	// (0x0008cacd) compass_pane_t5

0x49ed,	// (0x0008cadb) compass_pane_t6

0x49fb,	// (0x0008cae9) compass_pane_t7

0x4a7b,	// (0x0008cb69) navi_pane_cc_t1

0xb271,	// (0x0009335f) aid_phob_thumbnail_center_pane

0x51e6,	// (0x0008d2d4) main_postcard_pane_g4_ParamLimits

0x0002,

0xf32d,	// (0x0009741b) list_cale_time_pane_t_ParamLimits

0xf32d,	// (0x0009741b) list_cale_time_pane_t

0x02bd,	// (0x000883ab) bg_popup_window_pane_cp02_ParamLimits

0x02bd,	// (0x000883ab) bg_popup_window_pane_cp02

0x423e,	// (0x0008c32c) heading_pane_cp01_ParamLimits

0x423e,	// (0x0008c32c) heading_pane_cp01

0x424a,	// (0x0008c338) loc_req_pane_ParamLimits

0x424a,	// (0x0008c338) loc_req_pane

0x425a,	// (0x0008c348) loc_type_pane_ParamLimits

0x425a,	// (0x0008c348) loc_type_pane

0x426c,	// (0x0008c35a) loc_type_pane_t1_ParamLimits

0x426c,	// (0x0008c35a) loc_type_pane_t1

0x427e,	// (0x0008c36c) loc_type_pane_t2_ParamLimits

0x427e,	// (0x0008c36c) loc_type_pane_t2

0x4290,	// (0x0008c37e) loc_type_pane_t3_ParamLimits

0x4290,	// (0x0008c37e) loc_type_pane_t3

0x0002,

0xf334,	// (0x00097422) loc_type_pane_t_ParamLimits

0xf334,	// (0x00097422) loc_type_pane_t

0x42a2,	// (0x0008c390) list_loc_req_pane

0x42ac,	// (0x0008c39a) scroll_pane_cp012

0x42b7,	// (0x0008c3a5) list_single_loc_request_popup_menu_pane_ParamLimits

0x42b7,	// (0x0008c3a5) list_single_loc_request_popup_menu_pane

0x42c4,	// (0x0008c3b2) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x42c4,	// (0x0008c3b2) list_single_loc_request_popup_menu_pane_g1

0x42d0,	// (0x0008c3be) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x42d0,	// (0x0008c3be) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf33b,	// (0x00097429) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf33b,	// (0x00097429) list_single_loc_request_popup_menu_pane_g

0x42dc,	// (0x0008c3ca) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x42dc,	// (0x0008c3ca) list_single_loc_request_popup_menu_pane_t1

0x08c1,	// (0x000889af) bg_popup_window_pane_cp03_ParamLimits

0x08c1,	// (0x000889af) bg_popup_window_pane_cp03

0xea9c,	// (0x00096b8a) heading_loc_req_pane_ParamLimits

0xea9c,	// (0x00096b8a) heading_loc_req_pane

0x42f2,	// (0x0008c3e0) popup_dyc_status_message_window_g1_ParamLimits

0x42f2,	// (0x0008c3e0) popup_dyc_status_message_window_g1

0x4306,	// (0x0008c3f4) popup_dyc_status_message_window_t1_ParamLimits

0x4306,	// (0x0008c3f4) popup_dyc_status_message_window_t1

0x431b,	// (0x0008c409) popup_dyc_status_message_window_t2_ParamLimits

0x431b,	// (0x0008c409) popup_dyc_status_message_window_t2

0x4330,	// (0x0008c41e) popup_dyc_status_message_window_t3_ParamLimits

0x4330,	// (0x0008c41e) popup_dyc_status_message_window_t3

0x0002,

0xf340,	// (0x0009742e) popup_dyc_status_message_window_t_ParamLimits

0xf340,	// (0x0009742e) popup_dyc_status_message_window_t

0x0666,	// (0x00088754) bg_heading_pane_cp01

0x434c,	// (0x0008c43a) heading_loc_req_pane_g1

0x4354,	// (0x0008c442) heading_loc_req_pane_g2

0x435c,	// (0x0008c44a) heading_loc_req_pane_g3

0x0002,

0xf347,	// (0x00097435) heading_loc_req_pane_g

0x4364,	// (0x0008c452) heading_loc_req_pane_t1

0x445a,	// (0x0008c548) bg_popup_sub_pane_cp01_ParamLimits

0x445a,	// (0x0008c548) bg_popup_sub_pane_cp01

0x4468,	// (0x0008c556) popup_cale_events_window_g1_ParamLimits

0x4468,	// (0x0008c556) popup_cale_events_window_g1

0x4488,	// (0x0008c576) popup_cale_events_window_g2_ParamLimits

0x4488,	// (0x0008c576) popup_cale_events_window_g2

0x0001,

0xf37b,	// (0x00097469) popup_cale_events_window_g_ParamLimits

0xf37b,	// (0x00097469) popup_cale_events_window_g

0x44a8,	// (0x0008c596) popup_cale_events_window_t1_ParamLimits

0x44a8,	// (0x0008c596) popup_cale_events_window_t1

0x44ba,	// (0x0008c5a8) popup_cale_events_window_t2_ParamLimits

0x44ba,	// (0x0008c5a8) popup_cale_events_window_t2

0x44f8,	// (0x0008c5e6) popup_cale_events_window_t3_ParamLimits

0x44f8,	// (0x0008c5e6) popup_cale_events_window_t3

0x4532,	// (0x0008c620) popup_cale_events_window_t4_ParamLimits

0x4532,	// (0x0008c620) popup_cale_events_window_t4

0x0003,

0xf380,	// (0x0009746e) popup_cale_events_window_t_ParamLimits

0xf380,	// (0x0009746e) popup_cale_events_window_t

0x4568,	// (0x0008c656) call_type_pane

0x4578,	// (0x0008c666) popup_call_status_window_g1

0x458c,	// (0x0008c67a) popup_call_status_window_g2

0x45a0,	// (0x0008c68e) popup_call_status_window_g3

0x0002,

0xf389,	// (0x00097477) popup_call_status_window_g

0x45af,	// (0x0008c69d) call_type_pane_g1

0x45b8,	// (0x0008c6a6) call_type_pane_g2

0x0001,

0xf390,	// (0x0009747e) call_type_pane_g

0x0666,	// (0x00088754) bg_popup_sub_pane_cp02

0x45c1,	// (0x0008c6af) listscroll_popup_wml_pane

0x45c9,	// (0x0008c6b7) list_wml_pane

0x45d3,	// (0x0008c6c1) scroll_pane_cp013

0x45de,	// (0x0008c6cc) list_single_graphic_popup_wml_pane_ParamLimits

0x45de,	// (0x0008c6cc) list_single_graphic_popup_wml_pane

0x09ed,	// (0x00088adb) list_single_graphic_popup_wml_pane_g1

0x45f2,	// (0x0008c6e0) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf395,	// (0x00097483) list_single_graphic_popup_wml_pane_g

0x45fa,	// (0x0008c6e8) list_single_graphic_popup_wml_pane_t1

0x4610,	// (0x0008c6fe) aid_call_pane

0x08b9,	// (0x000889a7) popup_clock_analogue_window_g1

0x08b9,	// (0x000889a7) popup_clock_analogue_window_g2

0xb13d,	// (0x0009322b) popup_clock_analogue_window_g3

0xb13d,	// (0x0009322b) popup_clock_analogue_window_g4

0x09ed,	// (0x00088adb) popup_clock_analogue_window_g5

0x0004,

0xf39a,	// (0x00097488) popup_clock_analogue_window_g

0xb145,	// (0x00093233) popup_clock_analogue_window_t1

0xb153,	// (0x00093241) clock_digital_number_pane_ParamLimits

0xb153,	// (0x00093241) clock_digital_number_pane

0xb15f,	// (0x0009324d) clock_digital_number_pane_cp02_ParamLimits

0xb15f,	// (0x0009324d) clock_digital_number_pane_cp02

0xb16b,	// (0x00093259) clock_digital_number_pane_cp03_ParamLimits

0xb16b,	// (0x00093259) clock_digital_number_pane_cp03

0xb177,	// (0x00093265) clock_digital_number_pane_cp04_ParamLimits

0xb177,	// (0x00093265) clock_digital_number_pane_cp04

0xb187,	// (0x00093275) clock_digital_separator_pane_ParamLimits

0xb187,	// (0x00093275) clock_digital_separator_pane

0xb193,	// (0x00093281) popup_clock_digital_window_t1

0x09ed,	// (0x00088adb) clock_digital_number_pane_g1

0x09ed,	// (0x00088adb) clock_digital_number_pane_g2

0x0001,

0xf308,	// (0x000973f6) clock_digital_number_pane_g

0x09ed,	// (0x00088adb) clock_digital_separator_pane_g1

0x09ed,	// (0x00088adb) clock_digital_separator_pane_g2

0x0001,

0xf308,	// (0x000973f6) clock_digital_separator_pane_g

0x0666,	// (0x00088754) bg_popup_window_pane_cp04

0x4618,	// (0x0008c706) heading_pane_cp03

0x4620,	// (0x0008c70e) listscroll_popup_gms_pane

0x4628,	// (0x0008c716) grid_large_graphic_popup_pane

0x4632,	// (0x0008c720) listscroll_popup_gms_pane_g1

0x463a,	// (0x0008c728) listscroll_popup_gms_pane_g2

0x0001,

0xf3a5,	// (0x00097493) listscroll_popup_gms_pane_g

0x0ce4,	// (0x00088dd2) scroll_pane_cp014

0x4642,	// (0x0008c730) cell_large_graphic_popup_pane_ParamLimits

0x4642,	// (0x0008c730) cell_large_graphic_popup_pane

0x465a,	// (0x0008c748) cell_large_graphic_popup_pane_g1_ParamLimits

0x465a,	// (0x0008c748) cell_large_graphic_popup_pane_g1

0x4666,	// (0x0008c754) cell_large_graphic_popup_pane_g2_ParamLimits

0x4666,	// (0x0008c754) cell_large_graphic_popup_pane_g2

0x4672,	// (0x0008c760) cell_large_graphic_popup_pane_g3_ParamLimits

0x4672,	// (0x0008c760) cell_large_graphic_popup_pane_g3

0x467f,	// (0x0008c76d) cell_large_graphic_popup_pane_g4_ParamLimits

0x467f,	// (0x0008c76d) cell_large_graphic_popup_pane_g4

0x0003,

0xf3aa,	// (0x00097498) cell_large_graphic_popup_pane_g_ParamLimits

0xf3aa,	// (0x00097498) cell_large_graphic_popup_pane_g

0x468f,	// (0x0008c77d) grid_highlight_pane_cp010

0x09ed,	// (0x00088adb) bg_popup_call_pane_g1

0x4699,	// (0x0008c787) list_single_graphic_popup_conf_pane_ParamLimits

0x4699,	// (0x0008c787) list_single_graphic_popup_conf_pane

0x46ac,	// (0x0008c79a) list_highlight_pane_cp01

0x46b5,	// (0x0008c7a3) list_single_graphic_popup_conf_pane_g1

0x46bd,	// (0x0008c7ab) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3b3,	// (0x000974a1) list_single_graphic_popup_conf_pane_g

0x46c5,	// (0x0008c7b3) list_single_graphic_popup_conf_pane_t1

0x46d3,	// (0x0008c7c1) linegrid_cams_pane_g1

0x46dc,	// (0x0008c7ca) linegrid_cams_pane_g2

0x0b19,	// (0x00088c07) linegrid_cams_pane_g3

0x46e5,	// (0x0008c7d3) linegrid_cams_pane_g4

0x46ee,	// (0x0008c7dc) linegrid_cams_pane_g5

0x46f7,	// (0x0008c7e5) linegrid_cams_pane_g6

0x0b22,	// (0x00088c10) linegrid_cams_pane_g7

0x0006,

0xf3b8,	// (0x000974a6) linegrid_cams_pane_g

0x4702,	// (0x0008c7f0) popup_clock_analogue_window

0x4702,	// (0x0008c7f0) popup_clock_digital_window

0x0666,	// (0x00088754) popup_phob_thumbnail_window

0x09ed,	// (0x00088adb) call_video_uplink_pane_g1

0x470b,	// (0x0008c7f9) call_video_uplink_pane_g2

0x0001,

0xf3c7,	// (0x000974b5) call_video_uplink_pane_g

0x4713,	// (0x0008c801) video_uplink_pane

0x471b,	// (0x0008c809) mce_image_pane_g1

0x4725,	// (0x0008c813) mce_image_pane_g2

0x472f,	// (0x0008c81d) mce_image_pane_g3

0x4737,	// (0x0008c825) mce_image_pane_g4

0x473f,	// (0x0008c82d) mce_image_pane_g5

0x0004,

0xf3cc,	// (0x000974ba) mce_image_pane_g

0x4747,	// (0x0008c835) control_top_pane_stacon_cp01_ParamLimits

0x4747,	// (0x0008c835) control_top_pane_stacon_cp01

0x475b,	// (0x0008c849) uni_indicator_pane_stacon_cp01_ParamLimits

0x475b,	// (0x0008c849) uni_indicator_pane_stacon_cp01

0x476c,	// (0x0008c85a) bg_popup_sub_pane_cp03

0x4776,	// (0x0008c864) chi_dic_find_pane

0x477e,	// (0x0008c86c) listscroll_chi_dic_pane

0x4787,	// (0x0008c875) main_pane_chidic_g1

0x479a,	// (0x0008c888) chi_dic_find_pane_t1

0x47a8,	// (0x0008c896) find_chidic_pane

0x47b1,	// (0x0008c89f) chi_dic_list_pane_ParamLimits

0x47b1,	// (0x0008c89f) chi_dic_list_pane

0x47c2,	// (0x0008c8b0) scroll_pane_cp020

0x47ca,	// (0x0008c8b8) find_chidic_pane_t1

0x0666,	// (0x00088754) input_focus_pane_cp06

0x47d9,	// (0x0008c8c7) list_chi_dic_pane_ParamLimits

0x47d9,	// (0x0008c8c7) list_chi_dic_pane

0x47eb,	// (0x0008c8d9) list_chi_dic_pane_t1_ParamLimits

0x47eb,	// (0x0008c8d9) list_chi_dic_pane_t1

0x0666,	// (0x00088754) list_highlight_pane_cp020

0x47fe,	// (0x0008c8ec) bg_cale_heading_pane_g1

0x4806,	// (0x0008c8f4) bg_cale_heading_pane_g2

0x480e,	// (0x0008c8fc) bg_cale_heading_pane_g3

0x4816,	// (0x0008c904) bg_cale_heading_pane_g4

0x4820,	// (0x0008c90e) bg_cale_heading_pane_g5

0x482a,	// (0x0008c918) bg_cale_heading_pane_g6

0x4832,	// (0x0008c920) bg_cale_heading_pane_g7

0x483a,	// (0x0008c928) bg_cale_heading_pane_g8

0x4844,	// (0x0008c932) bg_cale_heading_pane_g9

0x0008,

0xf3d7,	// (0x000974c5) bg_cale_heading_pane_g

0x47fe,	// (0x0008c8ec) bg_cale_side_pane_g1

0x484e,	// (0x0008c93c) bg_cale_side_pane_g2

0x4856,	// (0x0008c944) bg_cale_side_pane_g3

0x485e,	// (0x0008c94c) bg_cale_side_pane_g4

0x4866,	// (0x0008c954) bg_cale_side_pane_g5

0x486e,	// (0x0008c95c) bg_cale_side_pane_g6

0x4876,	// (0x0008c964) bg_cale_side_pane_g7

0x487e,	// (0x0008c96c) bg_cale_side_pane_g8

0x4886,	// (0x0008c974) bg_cale_side_pane_g9

0x0008,

0xf3ea,	// (0x000974d8) bg_cale_side_pane_g

0x488e,	// (0x0008c97c) popup_call_status_window_ParamLimits

0x488e,	// (0x0008c97c) popup_call_status_window

0x48d7,	// (0x0008c9c5) stacon_top_pane

0x48df,	// (0x0008c9cd) status_pane_ParamLimits

0x48df,	// (0x0008c9cd) status_pane

0x48f4,	// (0x0008c9e2) status_small_pane

0x48fc,	// (0x0008c9ea) control_pane

0x0666,	// (0x00088754) stacon_bottom_pane

0x4904,	// (0x0008c9f2) list_single_mce_smart_pane_t1_ParamLimits

0x4904,	// (0x0008c9f2) list_single_mce_smart_pane_t1

0x4917,	// (0x0008ca05) list_single_mce_smart_pane_t2_ParamLimits

0x4917,	// (0x0008ca05) list_single_mce_smart_pane_t2

0x0001,

0xf3fd,	// (0x000974eb) list_single_mce_smart_pane_t_ParamLimits

0xf3fd,	// (0x000974eb) list_single_mce_smart_pane_t

0x4936,	// (0x0008ca24) compass_pane

0x493f,	// (0x0008ca2d) main_location2_pane_t1

0x4951,	// (0x0008ca3f) main_location2_pane_t2

0x4963,	// (0x0008ca51) main_location2_pane_t3

0x0003,

0xf402,	// (0x000974f0) main_location2_pane_t

0x49a7,	// (0x0008ca95) compass_pane_g1_ParamLimits

0x49a7,	// (0x0008ca95) compass_pane_g1

0x49b3,	// (0x0008caa1) compass_pane_t1

0x49c2,	// (0x0008cab0) compass_pane_t2

0x0005,

0xf40b,	// (0x000974f9) compass_pane_t

0x4a09,	// (0x0008caf7) text_secondary_cp61

0x4a72,	// (0x0008cb60) navi_pane_cams_g5

0x4aec,	// (0x0008cbda) navi_pane_im_t1

0x4afa,	// (0x0008cbe8) navi_pane_mp_g1_ParamLimits

0x4afa,	// (0x0008cbe8) navi_pane_mp_g1

0x4b0e,	// (0x0008cbfc) navi_pane_mp_g2_ParamLimits

0x4b0e,	// (0x0008cbfc) navi_pane_mp_g2

0x4b1a,	// (0x0008cc08) navi_pane_mp_g3_ParamLimits

0x4b1a,	// (0x0008cc08) navi_pane_mp_g3

0x0002,

0xf41f,	// (0x0009750d) navi_pane_mp_g_ParamLimits

0xf41f,	// (0x0009750d) navi_pane_mp_g

0x4b26,	// (0x0008cc14) navi_pane_mp_t1

0x4b34,	// (0x0008cc22) navi_pane_mp_t2

0x0002,

0xf426,	// (0x00097514) navi_pane_mp_t

0x4bdd,	// (0x0008cccb) navi_pane_vt_g1

0x4b26,	// (0x0008cc14) navi_pane_vt_t1

0xb1b0,	// (0x0009329e) navi_slider_pane

0xb1b8,	// (0x000932a6) zooming_pane

0xb1c0,	// (0x000932ae) navi_slider_pane_g1

0xb1c9,	// (0x000932b7) navi_slider_pane_g2

0x0006,

0xf42d,	// (0x0009751b) navi_slider_pane_g

0xb1f6,	// (0x000932e4) aid_levels_zoom

0xb1fe,	// (0x000932ec) zooming_pane_g1

0xb206,	// (0x000932f4) zooming_pane_g2

0xb206,	// (0x000932f4) zooming_pane_g3

0x0002,

0xf43c,	// (0x0009752a) zooming_pane_g

0xb20e,	// (0x000932fc) level_10_zoom

0xb217,	// (0x00093305) level_11_zoom

0xb220,	// (0x0009330e) level_1_zoom

0xb229,	// (0x00093317) level_2_zoom

0xb232,	// (0x00093320) level_3_zoom

0xb23b,	// (0x00093329) level_4_zoom

0xb244,	// (0x00093332) level_5_zoom

0xb24d,	// (0x0009333b) level_6_zoom

0xb256,	// (0x00093344) level_7_zoom

0xb25f,	// (0x0009334d) level_8_zoom

0xb268,	// (0x00093356) level_9_zoom

0xb279,	// (0x00093367) popup_phob_thumbnail_window_g1

0xb281,	// (0x0009336f) popup_phob_thumbnail_window_g2

0x0001,

0xf443,	// (0x00097531) popup_phob_thumbnail_window_g

0xc5a1,	// (0x0009468f) level_1_location

0xc5a9,	// (0x00094697) level_2_location

0xc5b1,	// (0x0009469f) level_3_location

0xc5b9,	// (0x000946a7) level_4_location

0xb1b8,	// (0x000932a6) level_5_location

0x4be5,	// (0x0008ccd3) mce_icon_pane_g1

0x4bed,	// (0x0008ccdb) mce_icon_pane_g2

0x0001,

0xf448,	// (0x00097536) mce_icon_pane_g

0x4bf5,	// (0x0008cce3) main_mup_pane_g1_ParamLimits

0x4bf5,	// (0x0008cce3) main_mup_pane_g1

0x4c0b,	// (0x0008ccf9) main_mup_pane_g2_ParamLimits

0x4c0b,	// (0x0008ccf9) main_mup_pane_g2

0x4c23,	// (0x0008cd11) main_mup_pane_g3_ParamLimits

0x4c23,	// (0x0008cd11) main_mup_pane_g3

0x4c3b,	// (0x0008cd29) main_mup_pane_g4_ParamLimits

0x4c3b,	// (0x0008cd29) main_mup_pane_g4

0x4c53,	// (0x0008cd41) main_mup_pane_g5_ParamLimits

0x4c53,	// (0x0008cd41) main_mup_pane_g5

0x4c6f,	// (0x0008cd5d) main_mup_pane_g6_ParamLimits

0x4c6f,	// (0x0008cd5d) main_mup_pane_g6

0x4c87,	// (0x0008cd75) main_mup_pane_g7_ParamLimits

0x4c87,	// (0x0008cd75) main_mup_pane_g7

0x4c9f,	// (0x0008cd8d) main_mup_pane_g8_ParamLimits

0x4c9f,	// (0x0008cd8d) main_mup_pane_g8

0x4cb9,	// (0x0008cda7) main_mup_pane_g9_ParamLimits

0x4cb9,	// (0x0008cda7) main_mup_pane_g9

0x4cd3,	// (0x0008cdc1) main_mup_pane_g10_ParamLimits

0x4cd3,	// (0x0008cdc1) main_mup_pane_g10

0x4ced,	// (0x0008cddb) main_mup_pane_g11_ParamLimits

0x4ced,	// (0x0008cddb) main_mup_pane_g11

0x4d01,	// (0x0008cdef) main_mup_pane_g12_ParamLimits

0x4d01,	// (0x0008cdef) main_mup_pane_g12

0x4d17,	// (0x0008ce05) main_mup_pane_g13_ParamLimits

0x4d17,	// (0x0008ce05) main_mup_pane_g13

0x000c,

0xf44d,	// (0x0009753b) main_mup_pane_g_ParamLimits

0xf44d,	// (0x0009753b) main_mup_pane_g

0x4d2b,	// (0x0008ce19) main_mup_pane_t1_ParamLimits

0x4d2b,	// (0x0008ce19) main_mup_pane_t1

0x4d45,	// (0x0008ce33) main_mup_pane_t2_ParamLimits

0x4d45,	// (0x0008ce33) main_mup_pane_t2

0x4d5d,	// (0x0008ce4b) main_mup_pane_t3_ParamLimits

0x4d5d,	// (0x0008ce4b) main_mup_pane_t3

0x4d75,	// (0x0008ce63) main_mup_pane_t4_ParamLimits

0x4d75,	// (0x0008ce63) main_mup_pane_t4

0x4d93,	// (0x0008ce81) main_mup_pane_t5_ParamLimits

0x4d93,	// (0x0008ce81) main_mup_pane_t5

0x4da8,	// (0x0008ce96) main_mup_pane_t6_ParamLimits

0x4da8,	// (0x0008ce96) main_mup_pane_t6

0x0005,

0xf468,	// (0x00097556) main_mup_pane_t_ParamLimits

0xf468,	// (0x00097556) main_mup_pane_t

0x4dba,	// (0x0008cea8) mup_progress_pane_ParamLimits

0x4dba,	// (0x0008cea8) mup_progress_pane

0x4dc6,	// (0x0008ceb4) mup_visualizer_pane_ParamLimits

0x4dc6,	// (0x0008ceb4) mup_visualizer_pane

0x4df6,	// (0x0008cee4) mup_volume_pane_ParamLimits

0x4df6,	// (0x0008cee4) mup_volume_pane

0xb289,	// (0x00093377) mup_visualizer_pane_g1_ParamLimits

0xb289,	// (0x00093377) mup_visualizer_pane_g1

0xb289,	// (0x00093377) mup_visualizer_pane_g2_ParamLimits

0xb289,	// (0x00093377) mup_visualizer_pane_g2

0x49a7,	// (0x0008ca95) mup_visualizer_pane_g3_ParamLimits

0x49a7,	// (0x0008ca95) mup_visualizer_pane_g3

0x0002,

0xf475,	// (0x00097563) mup_visualizer_pane_g_ParamLimits

0xf475,	// (0x00097563) mup_visualizer_pane_g

0x09ed,	// (0x00088adb) mup_volume_pane_g1

0xb29f,	// (0x0009338d) mup_volume_pane_g2

0x0001,

0xf47c,	// (0x0009756a) mup_volume_pane_g

0x09ed,	// (0x00088adb) mup_progress_pane_g1

0xb2a8,	// (0x00093396) mup_progress_pane_g2

0xb2b1,	// (0x0009339f) mup_progress_pane_g3

0x0002,

0xf481,	// (0x0009756f) mup_progress_pane_g

0x0666,	// (0x00088754) bg_popup_window_pane_cp05

0xb2ba,	// (0x000933a8) heading_pane_cp02_ParamLimits

0xb2ba,	// (0x000933a8) heading_pane_cp02

0xb2d4,	// (0x000933c2) list_popup_blid_pane

0xb2dc,	// (0x000933ca) list_blid_sat_info_pane_ParamLimits

0xb2dc,	// (0x000933ca) list_blid_sat_info_pane

0xb2ef,	// (0x000933dd) list_blid_sat_info_pane_g1

0xb2f7,	// (0x000933e5) list_blid_sat_info_pane_t1

0x4f0c,	// (0x0008cffa) mup_equalizer_pane_ParamLimits

0x4f0c,	// (0x0008cffa) mup_equalizer_pane

0x4f25,	// (0x0008d013) mup_equalizer_pane_cp1_ParamLimits

0x4f25,	// (0x0008d013) mup_equalizer_pane_cp1

0x4f42,	// (0x0008d030) mup_equalizer_pane_cp2_ParamLimits

0x4f42,	// (0x0008d030) mup_equalizer_pane_cp2

0x4f5f,	// (0x0008d04d) mup_equalizer_pane_cp3_ParamLimits

0x4f5f,	// (0x0008d04d) mup_equalizer_pane_cp3

0x4f80,	// (0x0008d06e) mup_equalizer_pane_cp4_ParamLimits

0x4f80,	// (0x0008d06e) mup_equalizer_pane_cp4

0x4fa1,	// (0x0008d08f) mup_equalizer_pane_cp5

0x4fb5,	// (0x0008d0a3) mup_equalizer_pane_cp6

0x4fc9,	// (0x0008d0b7) mup_equalizer_pane_cp7

0xc4bf,	// (0x000945ad) bg_popup_call_poc_act_pane_g9

0xc4c7,	// (0x000945b5) bg_popup_call_poc_act_pane_g10

0xc4cf,	// (0x000945bd) bg_popup_call_poc_act_pane_g11

0x000a,

0x08c1,	// (0x000889af) mup_scale_pane

0x09ed,	// (0x00088adb) mup_scale_pane_g1

0xb305,	// (0x000933f3) mup_scale_pane_g2

0x0006,

0xf49d,	// (0x0009758b) mup_scale_pane_g

0xb329,	// (0x00093417) msg_data_pane

0xb331,	// (0x0009341f) scroll_pane_cp017

0x4fef,	// (0x0008d0dd) bg_list_pane_cp04_ParamLimits

0x4fef,	// (0x0008d0dd) bg_list_pane_cp04

0xb339,	// (0x00093427) msg_data_pane_g1

0x500f,	// (0x0008d0fd) msg_data_pane_g2

0x5019,	// (0x0008d107) msg_data_pane_g3

0x5021,	// (0x0008d10f) msg_data_pane_g4

0x5029,	// (0x0008d117) msg_data_pane_g5

0x5031,	// (0x0008d11f) msg_data_pane_g6

0x5039,	// (0x0008d127) msg_data_pane_g7

0x0006,

0xf4ac,	// (0x0009759a) msg_data_pane_g

0x5041,	// (0x0008d12f) msg_text_pane_ParamLimits

0x5041,	// (0x0008d12f) msg_text_pane

0x5063,	// (0x0008d151) qrid_highlight_pane_cp011_ParamLimits

0x5063,	// (0x0008d151) qrid_highlight_pane_cp011

0x0666,	// (0x00088754) msg_body_pane

0x0666,	// (0x00088754) msg_header_pane

0xb34a,	// (0x00093438) input_focus_pane_cp07

0x5087,	// (0x0008d175) msg_header_pane_t1_ParamLimits

0x5087,	// (0x0008d175) msg_header_pane_t1

0x509b,	// (0x0008d189) msg_header_pane_t2_ParamLimits

0x509b,	// (0x0008d189) msg_header_pane_t2

0x0001,

0xf4c0,	// (0x000975ae) msg_header_pane_t_ParamLimits

0xf4c0,	// (0x000975ae) msg_header_pane_t

0xb35f,	// (0x0009344d) msg_body_pane_g1

0x50ad,	// (0x0008d19b) msg_body_pane_t1_ParamLimits

0x50ad,	// (0x0008d19b) msg_body_pane_t1

0x50de,	// (0x0008d1cc) msg_body_pane_t2_ParamLimits

0x50de,	// (0x0008d1cc) msg_body_pane_t2

0x50f0,	// (0x0008d1de) msg_body_pane_t3_ParamLimits

0x50f0,	// (0x0008d1de) msg_body_pane_t3

0x0002,

0xf4c5,	// (0x000975b3) msg_body_pane_t_ParamLimits

0xf4c5,	// (0x000975b3) msg_body_pane_t

0x513c,	// (0x0008d22a) main_viewer_pane_g1_ParamLimits

0x513c,	// (0x0008d22a) main_viewer_pane_g1

0x514a,	// (0x0008d238) main_viewer_pane_g2_ParamLimits

0x514a,	// (0x0008d238) main_viewer_pane_g2

0x5158,	// (0x0008d246) main_viewer_pane_g3_ParamLimits

0x5158,	// (0x0008d246) main_viewer_pane_g3

0x5167,	// (0x0008d255) main_viewer_pane_g4_ParamLimits

0x5167,	// (0x0008d255) main_viewer_pane_g4

0xb37f,	// (0x0009346d) main_viewer_pane_g5_ParamLimits

0xb37f,	// (0x0009346d) main_viewer_pane_g5

0xb37f,	// (0x0009346d) main_viewer_pane_g7_ParamLimits

0xb37f,	// (0x0009346d) main_viewer_pane_g7

0x42c4,	// (0x0008c3b2) main_viewer_pane_g8_ParamLimits

0x42c4,	// (0x0008c3b2) main_viewer_pane_g8

0x0007,

0xf4d5,	// (0x000975c3) main_viewer_pane_g_ParamLimits

0xf4d5,	// (0x000975c3) main_viewer_pane_g

0xb39d,	// (0x0009348b) viewer_content_pane_ParamLimits

0xb39d,	// (0x0009348b) viewer_content_pane

0x51a3,	// (0x0008d291) main_postcard_pane_g1_ParamLimits

0x51a3,	// (0x0008d291) main_postcard_pane_g1

0x51b9,	// (0x0008d2a7) main_postcard_pane_g2_ParamLimits

0x51b9,	// (0x0008d2a7) main_postcard_pane_g2

0x51cf,	// (0x0008d2bd) main_postcard_pane_g3_ParamLimits

0x51cf,	// (0x0008d2bd) main_postcard_pane_g3

0x0005,

0xf4e6,	// (0x000975d4) main_postcard_pane_g_ParamLimits

0xf4e6,	// (0x000975d4) main_postcard_pane_g

0x51e6,	// (0x0008d2d4) main_postcard_pane_g4

0xc6d4,	// (0x000947c2) smil_status_volume_pane_g2

0x5229,	// (0x0008d317) postcard_pane_ParamLimits

0x5229,	// (0x0008d317) postcard_pane

0xb3ab,	// (0x00093499) postcard_pane_g1_ParamLimits

0xb3ab,	// (0x00093499) postcard_pane_g1

0x526b,	// (0x0008d359) postcard_pane_g2_ParamLimits

0x526b,	// (0x0008d359) postcard_pane_g2

0x5277,	// (0x0008d365) postcard_pane_g3_ParamLimits

0x5277,	// (0x0008d365) postcard_pane_g3

0xb3b9,	// (0x000934a7) postcard_pane_g4_ParamLimits

0xb3b9,	// (0x000934a7) postcard_pane_g4

0x5283,	// (0x0008d371) postcard_pane_g5_ParamLimits

0x5283,	// (0x0008d371) postcard_pane_g5

0x5298,	// (0x0008d386) postcard_pane_g6_ParamLimits

0x5298,	// (0x0008d386) postcard_pane_g6

0xb3ab,	// (0x00093499) postcard_pane_g7_ParamLimits

0xb3ab,	// (0x00093499) postcard_pane_g7

0x0006,

0xf4f3,	// (0x000975e1) postcard_pane_g_ParamLimits

0xf4f3,	// (0x000975e1) postcard_pane_g

0x52ac,	// (0x0008d39a) main_mp2_pane_g1_ParamLimits

0x52ac,	// (0x0008d39a) main_mp2_pane_g1

0x52b8,	// (0x0008d3a6) main_mp2_pane_g2_ParamLimits

0x52b8,	// (0x0008d3a6) main_mp2_pane_g2

0x52c4,	// (0x0008d3b2) main_mp2_pane_g3_ParamLimits

0x52c4,	// (0x0008d3b2) main_mp2_pane_g3

0x0002,

0xf502,	// (0x000975f0) main_mp2_pane_g_ParamLimits

0xf502,	// (0x000975f0) main_mp2_pane_g

0x52d0,	// (0x0008d3be) main_mp2_pane_t1_ParamLimits

0x52d0,	// (0x0008d3be) main_mp2_pane_t1

0x52e5,	// (0x0008d3d3) main_mp2_pane_t2_ParamLimits

0x52e5,	// (0x0008d3d3) main_mp2_pane_t2

0x52f7,	// (0x0008d3e5) main_mp2_pane_t3_ParamLimits

0x52f7,	// (0x0008d3e5) main_mp2_pane_t3

0x0002,

0xf509,	// (0x000975f7) main_mp2_pane_t_ParamLimits

0xf509,	// (0x000975f7) main_mp2_pane_t

0xb3c7,	// (0x000934b5) pec_content_pane_ParamLimits

0xb3c7,	// (0x000934b5) pec_content_pane

0x0ce4,	// (0x00088dd2) scroll_pane_cp015

0xb3d9,	// (0x000934c7) pec_attribute_pane_ParamLimits

0xb3d9,	// (0x000934c7) pec_attribute_pane

0x5309,	// (0x0008d3f7) pec_content_pane_g1_ParamLimits

0x5309,	// (0x0008d3f7) pec_content_pane_g1

0xb3e9,	// (0x000934d7) pec_content_pane_t1_ParamLimits

0xb3e9,	// (0x000934d7) pec_content_pane_t1

0xb3fb,	// (0x000934e9) pec_content_pane_t2_ParamLimits

0xb3fb,	// (0x000934e9) pec_content_pane_t2

0x0001,

0xf510,	// (0x000975fe) pec_content_pane_t_ParamLimits

0xf510,	// (0x000975fe) pec_content_pane_t

0x5315,	// (0x0008d403) list_single_graphic_pane_cp01_ParamLimits

0x5315,	// (0x0008d403) list_single_graphic_pane_cp01

0x08c1,	// (0x000889af) bg_popup_sub_pane_cp04

0xb40d,	// (0x000934fb) popup_mup_playback_window_g1

0xb419,	// (0x00093507) popup_mup_playback_window_t1

0xb42e,	// (0x0009351c) popup_mup_playback_window_t2

0x0001,

0xf515,	// (0x00097603) popup_mup_playback_window_t

0xb465,	// (0x00093553) main_image_pane_g1_ParamLimits

0xb465,	// (0x00093553) main_image_pane_g1

0xb4a8,	// (0x00093596) scroll_pane_cp018_ParamLimits

0xb4a8,	// (0x00093596) scroll_pane_cp018

0xb4c0,	// (0x000935ae) scroll_pane_cp016_ParamLimits

0xb4c0,	// (0x000935ae) scroll_pane_cp016

0x53e2,	// (0x0008d4d0) smil2_image_pane_ParamLimits

0x53e2,	// (0x0008d4d0) smil2_image_pane

0x5412,	// (0x0008d500) smil2_root_pane_ParamLimits

0x5412,	// (0x0008d500) smil2_root_pane

0x544a,	// (0x0008d538) smil2_text_pane_ParamLimits

0x544a,	// (0x0008d538) smil2_text_pane

0x0666,	// (0x00088754) bg_list_pane_cp06

0xb4fc,	// (0x000935ea) grid_radio_pane

0x0666,	// (0x00088754) bg_popup_window_pane_cp06

0xb504,	// (0x000935f2) main_fmradio_pane_t1

0x4618,	// (0x0008c706) heading_pane_cp04

0xb512,	// (0x00093600) main_fmradio_pane_t2

0xc4d7,	// (0x000945c5) popup_cale_lunar_info_window_g1

0xb520,	// (0x0009360e) main_fmradio_pane_t3

0xc4df,	// (0x000945cd) popup_cale_lunar_info_window_g2

0xb52e,	// (0x0009361c) main_fmradio_pane_t4

0x0001,

0xb53c,	// (0x0009362a) main_fmradio_pane_t5

0x0004,

0xf5f0,	// (0x000976de) popup_cale_lunar_info_window_g

0xf52a,	// (0x00097618) main_fmradio_pane_t

0xb54a,	// (0x00093638) wait_bar_pane_cp03

0xb552,	// (0x00093640) cell_fmradio_pane_ParamLimits

0xb552,	// (0x00093640) cell_fmradio_pane

0xb3ab,	// (0x00093499) cell_fmradio_pane_g1_ParamLimits

0xb3ab,	// (0x00093499) cell_fmradio_pane_g1

0x0666,	// (0x00088754) grid_highlight_pane_cp011

0xb565,	// (0x00093653) poc_content_pane_ParamLimits

0xb565,	// (0x00093653) poc_content_pane

0xb577,	// (0x00093665) scroll_pane_cp019

0x54ca,	// (0x0008d5b8) popup_call_poc_act_window_ParamLimits

0x54ca,	// (0x0008d5b8) popup_call_poc_act_window

0x54ee,	// (0x0008d5dc) popup_call_poc_inact_window_ParamLimits

0x54ee,	// (0x0008d5dc) popup_call_poc_inact_window

0xf5c7,	// (0x000976b5) bg_popup_call_poc_act_pane_g

0xc44f,	// (0x0009453d) bg_popup_call_poc_inact_pane_g1

0xc457,	// (0x00094545) bg_popup_call_poc_inact_pane_g2

0xb57f,	// (0x0009366d) popup_call_poc_act_window_g2

0xc45f,	// (0x0009454d) bg_popup_call_poc_inact_pane_g3

0xc467,	// (0x00094555) bg_popup_call_poc_inact_pane_g4

0xc46f,	// (0x0009455d) bg_popup_call_poc_inact_pane_g5

0xb587,	// (0x00093675) popup_call_poc_act_window_t1_ParamLimits

0xb587,	// (0x00093675) popup_call_poc_act_window_t1

0xb5af,	// (0x0009369d) popup_call_poc_act_window_t2_ParamLimits

0xb5af,	// (0x0009369d) popup_call_poc_act_window_t2

0xb5d7,	// (0x000936c5) popup_call_poc_act_window_t3_ParamLimits

0xb5d7,	// (0x000936c5) popup_call_poc_act_window_t3

0xb5ff,	// (0x000936ed) popup_call_poc_act_window_t4_ParamLimits

0xb5ff,	// (0x000936ed) popup_call_poc_act_window_t4

0x0003,

0xf535,	// (0x00097623) popup_call_poc_act_window_t_ParamLimits

0xf535,	// (0x00097623) popup_call_poc_act_window_t

0xc477,	// (0x00094565) bg_popup_call_poc_inact_pane_g6

0xc47f,	// (0x0009456d) bg_popup_call_poc_inact_pane_g7

0xc487,	// (0x00094575) bg_popup_call_poc_inact_pane_g8

0xb611,	// (0x000936ff) popup_call_poc_inact_window_g2

0xc48f,	// (0x0009457d) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5b4,	// (0x000976a2) bg_popup_call_poc_inact_pane_g

0xb619,	// (0x00093707) popup_call_poc_inact_window_t1_ParamLimits

0xb619,	// (0x00093707) popup_call_poc_inact_window_t1

0xb62e,	// (0x0009371c) popup_call_poc_inact_window_t2_ParamLimits

0xb62e,	// (0x0009371c) popup_call_poc_inact_window_t2

0xb643,	// (0x00093731) popup_call_poc_inact_window_t3_ParamLimits

0xb643,	// (0x00093731) popup_call_poc_inact_window_t3

0x0002,

0xf53e,	// (0x0009762c) popup_call_poc_inact_window_t_ParamLimits

0xf53e,	// (0x0009762c) popup_call_poc_inact_window_t

0xc647,	// (0x00094735) context_pane_ParamLimits

0x5d21,	// (0x0008de0f) signal_pane_ParamLimits

0xb1b8,	// (0x000932a6) main_call2_pane

0xc635,	// (0x00094723) popup_phob_thumbnail2_window_ParamLimits

0xc635,	// (0x00094723) popup_phob_thumbnail2_window

0xb367,	// (0x00093455) aid_hotspot_pointer_arrow_pane

0xb36f,	// (0x0009345d) aid_hotspot_pointer_hand_pane

0x5837,	// (0x0008d925) phob_pre_status_pane_g5

0x3112,	// (0x0008b200) cams_zoom_pane_ParamLimits

0x3121,	// (0x0008b20f) image_vga_pane_ParamLimits

0x313b,	// (0x0008b229) main_camera_pane_g1_ParamLimits

0x314d,	// (0x0008b23b) main_camera_pane_g2_ParamLimits

0x315d,	// (0x0008b24b) main_camera_pane_g3_ParamLimits

0x316d,	// (0x0008b25b) main_camera_pane_g4_ParamLimits

0x317d,	// (0x0008b26b) main_camera_pane_g5_ParamLimits

0x318d,	// (0x0008b27b) main_camera_pane_g6_ParamLimits

0x319f,	// (0x0008b28d) main_camera_pane_g7_ParamLimits

0xf23d,	// (0x0009732b) main_camera_pane_g_ParamLimits

0x31af,	// (0x0008b29d) main_camera_pane_t1_ParamLimits

0x31c5,	// (0x0008b2b3) main_camera_pane_t2_ParamLimits

0xf24e,	// (0x0009733c) main_camera_pane_t_ParamLimits

0x08c1,	// (0x000889af) bg_popup_preview_window_pane_cp01_ParamLimits

0x08c1,	// (0x000889af) bg_popup_preview_window_pane_cp01

0xb658,	// (0x00093746) popup_phob_thumbnail2_window_g1_ParamLimits

0xb658,	// (0x00093746) popup_phob_thumbnail2_window_g1

0x0666,	// (0x00088754) call2_cli_visual_pane

0x5522,	// (0x0008d610) popup_call2_audio_conf_window_ParamLimits

0x5522,	// (0x0008d610) popup_call2_audio_conf_window

0x5542,	// (0x0008d630) popup_call2_audio_first_window_ParamLimits

0x5542,	// (0x0008d630) popup_call2_audio_first_window

0x55d8,	// (0x0008d6c6) popup_call2_audio_in_window_ParamLimits

0x55d8,	// (0x0008d6c6) popup_call2_audio_in_window

0x5620,	// (0x0008d70e) popup_call2_audio_out_window_ParamLimits

0x5620,	// (0x0008d70e) popup_call2_audio_out_window

0x568a,	// (0x0008d778) popup_call2_audio_second_window_ParamLimits

0x568a,	// (0x0008d778) popup_call2_audio_second_window

0x56f0,	// (0x0008d7de) popup_call2_audio_wait_window_ParamLimits

0x56f0,	// (0x0008d7de) popup_call2_audio_wait_window

0x0666,	// (0x00088754) bg_popup_call2_act_pane_cp03

0x08a3,	// (0x00088991) list_conf_pane_cp

0xb664,	// (0x00093752) popup_call2_audio_conf_window_t1

0x4699,	// (0x0008c787) list_single_graphic_popup_conf2_pane_ParamLimits

0x4699,	// (0x0008c787) list_single_graphic_popup_conf2_pane

0x46ac,	// (0x0008c79a) list_highlight_pane_cp04

0xb672,	// (0x00093760) list_single_graphic_popup_conf2_pane_g1

0x46bd,	// (0x0008c7ab) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf545,	// (0x00097633) list_single_graphic_popup_conf2_pane_g

0xb67c,	// (0x0009376a) list_single_graphic_popup_conf2_pane_t1

0xb68a,	// (0x00093778) bg_popup_call2_act_pane_cp01_ParamLimits

0xb68a,	// (0x00093778) bg_popup_call2_act_pane_cp01

0xb714,	// (0x00093802) call_type_pane_cp05_ParamLimits

0xb714,	// (0x00093802) call_type_pane_cp05

0xb768,	// (0x00093856) popup_call2_audio_second_window_g1_ParamLimits

0xb768,	// (0x00093856) popup_call2_audio_second_window_g1

0xb7bc,	// (0x000938aa) popup_call2_audio_second_window_g2_ParamLimits

0xb7bc,	// (0x000938aa) popup_call2_audio_second_window_g2

0x0002,

0xf54a,	// (0x00097638) popup_call2_audio_second_window_g_ParamLimits

0xf54a,	// (0x00097638) popup_call2_audio_second_window_g

0xb821,	// (0x0009390f) popup_call2_audio_second_window_t1_ParamLimits

0xb821,	// (0x0009390f) popup_call2_audio_second_window_t1

0xb8dc,	// (0x000939ca) popup_call2_audio_second_window_t2_ParamLimits

0xb8dc,	// (0x000939ca) popup_call2_audio_second_window_t2

0xb92f,	// (0x00093a1d) popup_call2_audio_second_window_t3_ParamLimits

0xb92f,	// (0x00093a1d) popup_call2_audio_second_window_t3

0x0003,

0xf551,	// (0x0009763f) popup_call2_audio_second_window_t_ParamLimits

0xf551,	// (0x0009763f) popup_call2_audio_second_window_t

0x0666,	// (0x00088754) bg_popup_call2_in_pane_cp02

0x0670,	// (0x0008875e) call_type_pane_cp04

0x0678,	// (0x00088766) popup_call2_audio_wait_window_g1

0x0680,	// (0x0008876e) popup_call2_audio_wait_window_g2

0x0001,

0xf12a,	// (0x00097218) popup_call2_audio_wait_window_g

0x0688,	// (0x00088776) popup_call2_audio_wait_window_t3

0xba22,	// (0x00093b10) bg_popup_call2_act_pane_ParamLimits

0xba22,	// (0x00093b10) bg_popup_call2_act_pane

0xbae2,	// (0x00093bd0) call_type_pane_cp03_ParamLimits

0xbae2,	// (0x00093bd0) call_type_pane_cp03

0xbb46,	// (0x00093c34) popup_call2_audio_first_window_g1_ParamLimits

0xbb46,	// (0x00093c34) popup_call2_audio_first_window_g1

0xbbb6,	// (0x00093ca4) popup_call2_audio_first_window_g2_ParamLimits

0xbbb6,	// (0x00093ca4) popup_call2_audio_first_window_g2

0xb289,	// (0x00093377) popup_call2_audio_first_window_g3_ParamLimits

0xb289,	// (0x00093377) popup_call2_audio_first_window_g3

0x0004,

0xf55a,	// (0x00097648) popup_call2_audio_first_window_g_ParamLimits

0xf55a,	// (0x00097648) popup_call2_audio_first_window_g

0xbc94,	// (0x00093d82) popup_call2_audio_first_window_t1_ParamLimits

0xbc94,	// (0x00093d82) popup_call2_audio_first_window_t1

0xbd97,	// (0x00093e85) popup_call2_audio_first_window_t4_ParamLimits

0xbd97,	// (0x00093e85) popup_call2_audio_first_window_t4

0xbe7a,	// (0x00093f68) popup_call2_audio_first_window_t5_ParamLimits

0xbe7a,	// (0x00093f68) popup_call2_audio_first_window_t5

0x0003,

0xf565,	// (0x00097653) popup_call2_audio_first_window_t_ParamLimits

0xf565,	// (0x00097653) popup_call2_audio_first_window_t

0x08b9,	// (0x000889a7) bg_popup_call2_act_pane_g1

0xc4e7,	// (0x000945d5) popup_cale_lunar_info_window_t1

0xc4f5,	// (0x000945e3) popup_cale_lunar_info_window_t2

0xc503,	// (0x000945f1) popup_cale_lunar_info_window_t3

0x0666,	// (0x00088754) bg_popup_call2_bubble_pane

0xbf7b,	// (0x00094069) bg_popup_call2_in_pane_cp01_ParamLimits

0xbf7b,	// (0x00094069) bg_popup_call2_in_pane_cp01

0x0342,	// (0x00088430) call_type_pane_cp02

0xbfc3,	// (0x000940b1) popup_call2_audio_out_window_g1_ParamLimits

0xbfc3,	// (0x000940b1) popup_call2_audio_out_window_g1

0xbfef,	// (0x000940dd) popup_call2_audio_out_window_g2_ParamLimits

0xbfef,	// (0x000940dd) popup_call2_audio_out_window_g2

0xc017,	// (0x00094105) popup_call2_audio_out_window_g3_ParamLimits

0xc017,	// (0x00094105) popup_call2_audio_out_window_g3

0x0003,

0xf56e,	// (0x0009765c) popup_call2_audio_out_window_g_ParamLimits

0xf56e,	// (0x0009765c) popup_call2_audio_out_window_g

0xc052,	// (0x00094140) popup_call2_audio_out_window_t1_ParamLimits

0xc052,	// (0x00094140) popup_call2_audio_out_window_t1

0xc0b1,	// (0x0009419f) popup_call2_audio_out_window_t2_ParamLimits

0xc0b1,	// (0x0009419f) popup_call2_audio_out_window_t2

0xc105,	// (0x000941f3) popup_call2_audio_out_window_t3_ParamLimits

0xc105,	// (0x000941f3) popup_call2_audio_out_window_t3

0xc11b,	// (0x00094209) popup_call2_audio_out_window_t4_ParamLimits

0xc11b,	// (0x00094209) popup_call2_audio_out_window_t4

0xc131,	// (0x0009421f) popup_call2_audio_out_window_t5_ParamLimits

0xc131,	// (0x0009421f) popup_call2_audio_out_window_t5

0x0005,

0xf577,	// (0x00097665) popup_call2_audio_out_window_t_ParamLimits

0xf577,	// (0x00097665) popup_call2_audio_out_window_t

0xc195,	// (0x00094283) bg_popup_call2_in_pane_ParamLimits

0xc195,	// (0x00094283) bg_popup_call2_in_pane

0xc1f1,	// (0x000942df) popup_call2_audio_in_window_g1_ParamLimits

0xc1f1,	// (0x000942df) popup_call2_audio_in_window_g1

0xc229,	// (0x00094317) popup_call2_audio_in_window_g2_ParamLimits

0xc229,	// (0x00094317) popup_call2_audio_in_window_g2

0xc261,	// (0x0009434f) popup_call2_audio_in_window_g3_ParamLimits

0xc261,	// (0x0009434f) popup_call2_audio_in_window_g3

0x0003,

0xf584,	// (0x00097672) popup_call2_audio_in_window_g_ParamLimits

0xf584,	// (0x00097672) popup_call2_audio_in_window_g

0xc2b9,	// (0x000943a7) popup_call2_audio_in_window_t1_ParamLimits

0xc2b9,	// (0x000943a7) popup_call2_audio_in_window_t1

0xc339,	// (0x00094427) popup_call2_audio_in_window_t2_ParamLimits

0xc339,	// (0x00094427) popup_call2_audio_in_window_t2

0xc3b9,	// (0x000944a7) popup_call2_audio_in_window_t3_ParamLimits

0xc3b9,	// (0x000944a7) popup_call2_audio_in_window_t3

0xc3d3,	// (0x000944c1) popup_call2_audio_in_window_t4_ParamLimits

0xc3d3,	// (0x000944c1) popup_call2_audio_in_window_t4

0xc3e5,	// (0x000944d3) popup_call2_audio_in_window_t5_ParamLimits

0xc3e5,	// (0x000944d3) popup_call2_audio_in_window_t5

0xc3fa,	// (0x000944e8) popup_call2_audio_in_window_t6_ParamLimits

0xc3fa,	// (0x000944e8) popup_call2_audio_in_window_t6

0x0005,

0xf58d,	// (0x0009767b) popup_call2_audio_in_window_t_ParamLimits

0xf58d,	// (0x0009767b) popup_call2_audio_in_window_t

0x08b9,	// (0x000889a7) bg_popup_call2_in_pane_g1

0xc511,	// (0x000945ff) popup_cale_lunar_info_window_t4

0x0003,

0xf5f5,	// (0x000976e3) popup_cale_lunar_info_window_t

0x08c1,	// (0x000889af) bg_popup_call2_rect_pane_ParamLimits

0x08c1,	// (0x000889af) bg_popup_call2_rect_pane

0x0666,	// (0x00088754) call2_cli_visual_graphic_pane

0x0666,	// (0x00088754) call2_cli_visual_text_pane

0xc6e7,	// (0x000947d5) smil_status_volume_pane_g3

0x0002,

0x09ed,	// (0x00088adb) call2_cli_visual_graphic_pane_g1

0x09ed,	// (0x00088adb) call2_cli_visual_graphic_pane_g2

0x09ed,	// (0x00088adb) call2_cli_visual_graphic_pane_g3

0x0002,

0xf59a,	// (0x00097688) call2_cli_visual_graphic_pane_g

0xc40f,	// (0x000944fd) bg_popup_call2_rect_pane_g1

0x0a79,	// (0x00088b67) bg_popup_call2_rect_pane_g2

0xc417,	// (0x00094505) bg_popup_call2_rect_pane_g3

0xc41f,	// (0x0009450d) bg_popup_call2_rect_pane_g4

0xc427,	// (0x00094515) bg_popup_call2_rect_pane_g5

0xc42f,	// (0x0009451d) bg_popup_call2_rect_pane_g6

0xc437,	// (0x00094525) bg_popup_call2_rect_pane_g7

0xc43f,	// (0x0009452d) bg_popup_call2_rect_pane_g8

0xc447,	// (0x00094535) bg_popup_call2_rect_pane_g9

0x0008,

0xf5a1,	// (0x0009768f) bg_popup_call2_rect_pane_g

0xc44f,	// (0x0009453d) bg_popup_call2_bubble_pane_g1

0xc457,	// (0x00094545) bg_popup_call2_bubble_pane_g2

0xc45f,	// (0x0009454d) bg_popup_call2_bubble_pane_g3

0xc467,	// (0x00094555) bg_popup_call2_bubble_pane_g4

0xc46f,	// (0x0009455d) bg_popup_call2_bubble_pane_g5

0xc477,	// (0x00094565) bg_popup_call2_bubble_pane_g6

0xc47f,	// (0x0009456d) bg_popup_call2_bubble_pane_g7

0xc487,	// (0x00094575) bg_popup_call2_bubble_pane_g8

0xc48f,	// (0x0009457d) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5b4,	// (0x000976a2) bg_popup_call2_bubble_pane_g

0x2cbb,	// (0x0008ada9) aid_cale_week_size_cell_pane

0x31db,	// (0x0008b2c9) aid_cams_cif_uncrop_pane_ParamLimits

0x31db,	// (0x0008b2c9) aid_cams_cif_uncrop_pane

0x3394,	// (0x0008b482) aid_cams_size_cell_ParamLimits

0x3394,	// (0x0008b482) aid_cams_size_cell

0x33a8,	// (0x0008b496) grid_cams_pane_ParamLimits

0x33c2,	// (0x0008b4b0) linegrid_cams_pane_ParamLimits

0x359e,	// (0x0008b68c) call_video_pane_t1

0x35b0,	// (0x0008b69e) call_video_pane_t2

0x0001,

0xf2a1,	// (0x0009738f) call_video_pane_t

0x394f,	// (0x0008ba3d) aid_cale_month_size_cell_pane_ParamLimits

0x394f,	// (0x0008ba3d) aid_cale_month_size_cell_pane

0xf63e,	// (0x0009772c) smil_status_volume_pane_g

0xc6f4,	// (0x000947e2) volume_smil_pane_ParamLimits

0x0205,	// (0x000882f3) aid_popup2_width_pane

0x2c1d,	// (0x0008ad0b) cell_qdial_pane_g4_ParamLimits

0x2c1d,	// (0x0008ad0b) cell_qdial_pane_g4

0x4987,	// (0x0008ca75) aid_blid_cardinal_pane_ParamLimits

0x4993,	// (0x0008ca81) aid_blid_destination_pane_ParamLimits

0x4993,	// (0x0008ca81) aid_blid_destination_pane

0x08c1,	// (0x000889af) bg_popup_call_poc_act_pane_ParamLimits

0x08c1,	// (0x000889af) bg_popup_call_poc_act_pane

0x08c1,	// (0x000889af) bg_popup_call_poc_inact_pane_ParamLimits

0x08c1,	// (0x000889af) bg_popup_call_poc_inact_pane

0xc497,	// (0x00094585) bg_popup_call_poc_act_pane_g1

0xc49f,	// (0x0009458d) bg_popup_call_poc_act_pane_g2

0xc4a7,	// (0x00094595) bg_popup_call_poc_act_pane_g3

0xc467,	// (0x00094555) bg_popup_call_poc_act_pane_g4

0xc46f,	// (0x0009455d) bg_popup_call_poc_act_pane_g5

0xc4af,	// (0x0009459d) bg_popup_call_poc_act_pane_g6

0xc47f,	// (0x0009456d) bg_popup_call_poc_act_pane_g7

0xc4b7,	// (0x000945a5) bg_popup_call_poc_act_pane_g8

0x0666,	// (0x00088754) main_usb_pane

0xc610,	// (0x000946fe) popup_cale_lunar_info_window

0x37fb,	// (0x0008b8e9) im_reading_pane_t1_ParamLimits

0x0c3c,	// (0x00088d2a) list_im_pane_ParamLimits

0x0c4d,	// (0x00088d3b) scroll_pane_cp07_ParamLimits

0x0666,	// (0x00088754) grid_highlight_pane_cp012

0x08c1,	// (0x000889af) mup_scale_pane_ParamLimits

0xb3ab,	// (0x00093499) main_usb_pane_g1_ParamLimits

0xb3ab,	// (0x00093499) main_usb_pane_g1

0x574c,	// (0x0008d83a) main_usb_pane_g2_ParamLimits

0x574c,	// (0x0008d83a) main_usb_pane_g2

0x0001,

0xf5de,	// (0x000976cc) main_usb_pane_g_ParamLimits

0xf5de,	// (0x000976cc) main_usb_pane_g

0x5762,	// (0x0008d850) main_usb_pane_t1_ParamLimits

0x5762,	// (0x0008d850) main_usb_pane_t1

0x5774,	// (0x0008d862) main_usb_pane_t2_ParamLimits

0x5774,	// (0x0008d862) main_usb_pane_t2

0x5786,	// (0x0008d874) main_usb_pane_t3_ParamLimits

0x5786,	// (0x0008d874) main_usb_pane_t3

0x5798,	// (0x0008d886) main_usb_pane_t4_ParamLimits

0x5798,	// (0x0008d886) main_usb_pane_t4

0x57aa,	// (0x0008d898) main_usb_pane_t5_ParamLimits

0x57aa,	// (0x0008d898) main_usb_pane_t5

0x57bc,	// (0x0008d8aa) main_usb_pane_t6_ParamLimits

0x57bc,	// (0x0008d8aa) main_usb_pane_t6

0x0005,

0xf5e3,	// (0x000976d1) main_usb_pane_t_ParamLimits

0x4936,	// (0x0008ca24) aid_text_placing

0x493f,	// (0x0008ca2d) main_location2_pane_t1_ParamLimits

0x4951,	// (0x0008ca3f) main_location2_pane_t2_ParamLimits

0x4963,	// (0x0008ca51) main_location2_pane_t3_ParamLimits

0x4975,	// (0x0008ca63) main_location2_pane_t4_ParamLimits

0x4975,	// (0x0008ca63) main_location2_pane_t4

0xf402,	// (0x000974f0) main_location2_pane_t_ParamLimits

0x08fd,	// (0x000889eb) find_pinb_pane_g2_ParamLimits

0x08fd,	// (0x000889eb) find_pinb_pane_g2

0x0001,

0xf150,	// (0x0009723e) find_pinb_pane_g_ParamLimits

0xf150,	// (0x0009723e) find_pinb_pane_g

0x0909,	// (0x000889f7) find_pinb_pane_t1_ParamLimits

0x091b,	// (0x00088a09) find_pinb_pane_t2_ParamLimits

0xf155,	// (0x00097243) find_pinb_pane_t_ParamLimits

0x0666,	// (0x00088754) main_call3_pane

0x3c4b,	// (0x0008bd39) cale_month_day_heading_pane_t1_ParamLimits

0x3ca9,	// (0x0008bd97) cale_month_day_heading_pane_t2_ParamLimits

0x3d0e,	// (0x0008bdfc) cale_month_day_heading_pane_t3_ParamLimits

0x3d73,	// (0x0008be61) cale_month_day_heading_pane_t4_ParamLimits

0x3dd8,	// (0x0008bec6) cale_month_day_heading_pane_t5_ParamLimits

0x3e3d,	// (0x0008bf2b) cale_month_day_heading_pane_t6_ParamLimits

0x3ea2,	// (0x0008bf90) cale_month_day_heading_pane_t7_ParamLimits

0xf2d9,	// (0x000973c7) cale_month_day_heading_pane_t_ParamLimits

0x4090,	// (0x0008c17e) smil_status_volume_pane

0x5247,	// (0x0008d335) postcard_address_pane_ParamLimits

0x5247,	// (0x0008d335) postcard_address_pane

0x5259,	// (0x0008d347) postcard_message_pane_ParamLimits

0x5259,	// (0x0008d347) postcard_message_pane

0x572a,	// (0x0008d818) call2_cli_visual_pane_t1_ParamLimits

0x572a,	// (0x0008d818) call2_cli_visual_pane_t1

0x5f4e,	// (0x0008e03c) postcard_message_pane_t1_ParamLimits

0x5f4e,	// (0x0008e03c) postcard_message_pane_t1

0x5f37,	// (0x0008e025) postcard_address_pane_t1_ParamLimits

0x5f37,	// (0x0008e025) postcard_address_pane_t1

0x5f23,	// (0x0008e011) popup_call3_audio_in_window_ParamLimits

0x5f23,	// (0x0008e011) popup_call3_audio_in_window

0x5dae,	// (0x0008de9c) bg_popup_call3_in_pane_ParamLimits

0x5dae,	// (0x0008de9c) bg_popup_call3_in_pane

0x5e24,	// (0x0008df12) popup_call3_audio_in_window_g1_ParamLimits

0x5e24,	// (0x0008df12) popup_call3_audio_in_window_g1

0x5e44,	// (0x0008df32) popup_call3_audio_in_window_g2_ParamLimits

0x5e44,	// (0x0008df32) popup_call3_audio_in_window_g2

0x5e64,	// (0x0008df52) popup_call3_audio_in_window_g3_ParamLimits

0x5e64,	// (0x0008df52) popup_call3_audio_in_window_g3

0x0003,

0xf645,	// (0x00097733) popup_call3_audio_in_window_g_ParamLimits

0xf645,	// (0x00097733) popup_call3_audio_in_window_g

0x5e95,	// (0x0008df83) popup_call3_audio_in_window_t1_ParamLimits

0x5e95,	// (0x0008df83) popup_call3_audio_in_window_t1

0x5ed3,	// (0x0008dfc1) popup_call3_audio_in_window_t2_ParamLimits

0x5ed3,	// (0x0008dfc1) popup_call3_audio_in_window_t2

0x5f11,	// (0x0008dfff) popup_call3_audio_in_window_t3_ParamLimits

0x5f11,	// (0x0008dfff) popup_call3_audio_in_window_t3

0x0002,

0xf64e,	// (0x0009773c) popup_call3_audio_in_window_t_ParamLimits

0xf64e,	// (0x0009773c) popup_call3_audio_in_window_t

0xb1b8,	// (0x000932a6) bg_popup_call3_rect_pane

0xc40f,	// (0x000944fd) bg_popup_call3_rect_pane_g1

0x0a79,	// (0x00088b67) bg_popup_call3_rect_pane_g2

0xc417,	// (0x00094505) bg_popup_call3_rect_pane_g3

0xc41f,	// (0x0009450d) bg_popup_call3_rect_pane_g4

0xc427,	// (0x00094515) bg_popup_call3_rect_pane_g5

0xc42f,	// (0x0009451d) bg_popup_call3_rect_pane_g6

0xc437,	// (0x00094525) bg_popup_call3_rect_pane_g7

0x4e0c,	// (0x0008cefa) mup_visualizer_osc_pane

0xb297,	// (0x00093385) mup_visualizer_spec_pane

0x5dde,	// (0x0008decc) call3_video_qcif_pane_ParamLimits

0x5dde,	// (0x0008decc) call3_video_qcif_pane

0x5df1,	// (0x0008dedf) call3_video_qcif_uncrop_pane_ParamLimits

0x5df1,	// (0x0008dedf) call3_video_qcif_uncrop_pane

0x5dff,	// (0x0008deed) call3_video_subqcif_pane_ParamLimits

0x5dff,	// (0x0008deed) call3_video_subqcif_pane

0x5e13,	// (0x0008df01) call3_video_subqcif_uncrop_pane_ParamLimits

0x5e13,	// (0x0008df01) call3_video_subqcif_uncrop_pane

0x5e84,	// (0x0008df72) popup_call3_audio_in_window_g4_ParamLimits

0x5e84,	// (0x0008df72) popup_call3_audio_in_window_g4

0x5d9d,	// (0x0008de8b) mup_spec_half_pane

0x5da6,	// (0x0008de94) mup_spec_half_pane_cp

0xc6a7,	// (0x00094795) mup_osc_middle_pane

0xc6b0,	// (0x0009479e) mup_visualizer_osc_pane_g1

0x5d7d,	// (0x0008de6b) mup_spec_bar_pane_ParamLimits

0x5d7d,	// (0x0008de6b) mup_spec_bar_pane

0xc694,	// (0x00094782) mup_spec_bar_pane_g1

0xc69e,	// (0x0009478c) mup_spec_bar_pane_g2

0x0001,

0xf639,	// (0x00097727) mup_spec_bar_pane_g

0x2cbb,	// (0x0008ada9) aid_cale_week_size_cell_pane_ParamLimits

0x2cce,	// (0x0008adbc) bg_cale_heading_pane_ParamLimits

0x0aad,	// (0x00088b9b) bg_cale_pane_cp01_ParamLimits

0x2ce2,	// (0x0008add0) cale_week_corner_pane_ParamLimits

0x2cf8,	// (0x0008ade6) cale_week_day_heading_pane_ParamLimits

0x2d0c,	// (0x0008adfa) cale_week_scroll_pane_g1_ParamLimits

0x2d1d,	// (0x0008ae0b) cale_week_scroll_pane_g2_ParamLimits

0x2d2e,	// (0x0008ae1c) cale_week_scroll_pane_g3_ParamLimits

0x2d3f,	// (0x0008ae2d) cale_week_scroll_pane_g4_ParamLimits

0x2d50,	// (0x0008ae3e) cale_week_scroll_pane_g5_ParamLimits

0x2d61,	// (0x0008ae4f) cale_week_scroll_pane_g6_ParamLimits

0x2d72,	// (0x0008ae60) cale_week_scroll_pane_g7_ParamLimits

0x2d83,	// (0x0008ae71) cale_week_scroll_pane_g8_ParamLimits

0x2d94,	// (0x0008ae82) cale_week_scroll_pane_g9_ParamLimits

0x2da5,	// (0x0008ae93) cale_week_scroll_pane_g10_ParamLimits

0x2db6,	// (0x0008aea4) cale_week_scroll_pane_g11_ParamLimits

0x2dc7,	// (0x0008aeb5) cale_week_scroll_pane_g12_ParamLimits

0x2dd8,	// (0x0008aec6) cale_week_scroll_pane_g13_ParamLimits

0x2de9,	// (0x0008aed7) cale_week_scroll_pane_g14_ParamLimits

0x2dfa,	// (0x0008aee8) cale_week_scroll_pane_g15_ParamLimits

0xf1e1,	// (0x000972cf) cale_week_scroll_pane_g_ParamLimits

0x2e0b,	// (0x0008aef9) cale_week_time_pane_ParamLimits

0x2e1c,	// (0x0008af0a) grid_cale_week_pane_ParamLimits

0x0ac6,	// (0x00088bb4) listscroll_cale_week_pane_t1

0x2e2f,	// (0x0008af1d) scroll_pane_cp08_ParamLimits

0x3990,	// (0x0008ba7e) cale_month_corner_pane_ParamLimits

0x0e63,	// (0x00088f51) cale_month_pane_t1

0x3c12,	// (0x0008bd00) cale_month_week_pane_ParamLimits

0x4578,	// (0x0008c666) popup_call_status_window_g1_ParamLimits

0x458c,	// (0x0008c67a) popup_call_status_window_g2_ParamLimits

0x45a0,	// (0x0008c68e) popup_call_status_window_g3_ParamLimits

0xf389,	// (0x00097477) popup_call_status_window_g_ParamLimits

0x4608,	// (0x0008c6f6) aid_call2_pane

0x5079,	// (0x0008d167) msg_header_pane_g1

0x5247,	// (0x0008d335) postcard_address2_pane_ParamLimits

0x5247,	// (0x0008d335) postcard_address2_pane

0x5259,	// (0x0008d347) postcard_message2_pane_ParamLimits

0x5259,	// (0x0008d347) postcard_message2_pane

0x5d2f,	// (0x0008de1d) message2_row_pane_ParamLimits

0x5d2f,	// (0x0008de1d) message2_row_pane

0x5d4b,	// (0x0008de39) address2_row_pane_ParamLimits

0x5d4b,	// (0x0008de39) address2_row_pane

0xc662,	// (0x00094750) postcard_message2_row_pane_g1

0xc66a,	// (0x00094758) postcard_message2_row_pane_t1

0xc662,	// (0x00094750) address2_row_pane_g1

0xc66a,	// (0x00094758) address2_row_pane_t1

0x30d7,	// (0x0008b1c5) aid_size_cell_vorec

0x0666,	// (0x00088754) main_rss_pane

0x5d5e,	// (0x0008de4c) rss_list_single_pane_ParamLimits

0x5d5e,	// (0x0008de4c) rss_list_single_pane

0xc678,	// (0x00094766) rss_list_single_pane_t1

0xc686,	// (0x00094774) rss_list_single_pane_t2

0x0001,

0xf634,	// (0x00097722) rss_list_single_pane_t

0x0666,	// (0x00088754) main_camera2_pane

0x0666,	// (0x00088754) main_video2_pane

0x5fc7,	// (0x0008e0b5) cams_zoom_pane_cp2_ParamLimits

0x5fc7,	// (0x0008e0b5) cams_zoom_pane_cp2

0x5fe7,	// (0x0008e0d5) image2_vga_pane_ParamLimits

0x5fe7,	// (0x0008e0d5) image2_vga_pane

0x6038,	// (0x0008e126) main_camera2_pane_g1_ParamLimits

0x6038,	// (0x0008e126) main_camera2_pane_g1

0x6058,	// (0x0008e146) main_camera2_pane_g2_ParamLimits

0x6058,	// (0x0008e146) main_camera2_pane_g2

0x6078,	// (0x0008e166) main_camera2_pane_g3_ParamLimits

0x6078,	// (0x0008e166) main_camera2_pane_g3

0x6098,	// (0x0008e186) main_camera2_pane_g4_ParamLimits

0x6098,	// (0x0008e186) main_camera2_pane_g4

0x60b8,	// (0x0008e1a6) main_camera2_pane_g5_ParamLimits

0x60b8,	// (0x0008e1a6) main_camera2_pane_g5

0x60d8,	// (0x0008e1c6) main_camera2_pane_g6_ParamLimits

0x60d8,	// (0x0008e1c6) main_camera2_pane_g6

0x60f8,	// (0x0008e1e6) main_camera2_pane_g7_ParamLimits

0x60f8,	// (0x0008e1e6) main_camera2_pane_g7

0x6118,	// (0x0008e206) main_camera2_pane_g8_ParamLimits

0x6118,	// (0x0008e206) main_camera2_pane_g8

0x0008,

0xf655,	// (0x00097743) main_camera2_pane_g_ParamLimits

0xf655,	// (0x00097743) main_camera2_pane_g

0x6158,	// (0x0008e246) main_camera2_pane_t1_ParamLimits

0x6158,	// (0x0008e246) main_camera2_pane_t1

0x618d,	// (0x0008e27b) main_camera2_pane_t2_ParamLimits

0x618d,	// (0x0008e27b) main_camera2_pane_t2

0x61b3,	// (0x0008e2a1) main_camera2_pane_t3_ParamLimits

0x61b3,	// (0x0008e2a1) main_camera2_pane_t3

0x6211,	// (0x0008e2ff) main_camera2_pane_t4_ParamLimits

0x6211,	// (0x0008e2ff) main_camera2_pane_t4

0x0006,

0xf668,	// (0x00097756) main_camera2_pane_t_ParamLimits

0xf668,	// (0x00097756) main_camera2_pane_t

0x62a3,	// (0x0008e391) cams_zoom_pane_cp4_ParamLimits

0x62a3,	// (0x0008e391) cams_zoom_pane_cp4

0x62b9,	// (0x0008e3a7) image2_cif_pane_ParamLimits

0x62b9,	// (0x0008e3a7) image2_cif_pane

0x62e4,	// (0x0008e3d2) image2_subqcif_pane_ParamLimits

0x62e4,	// (0x0008e3d2) image2_subqcif_pane

0x62fe,	// (0x0008e3ec) main_video2_pane_g1_ParamLimits

0x62fe,	// (0x0008e3ec) main_video2_pane_g1

0x6318,	// (0x0008e406) main_video2_pane_g2_ParamLimits

0x6318,	// (0x0008e406) main_video2_pane_g2

0x632e,	// (0x0008e41c) main_video2_pane_g3_ParamLimits

0x632e,	// (0x0008e41c) main_video2_pane_g3

0x6344,	// (0x0008e432) main_video2_pane_g4_ParamLimits

0x6344,	// (0x0008e432) main_video2_pane_g4

0x635a,	// (0x0008e448) main_video2_pane_g5_ParamLimits

0x635a,	// (0x0008e448) main_video2_pane_g5

0x6370,	// (0x0008e45e) main_video2_pane_g6_ParamLimits

0x6370,	// (0x0008e45e) main_video2_pane_g6

0x0005,

0xf677,	// (0x00097765) main_video2_pane_g_ParamLimits

0xf677,	// (0x00097765) main_video2_pane_g

0x638a,	// (0x0008e478) main_video2_pane_t1_ParamLimits

0x638a,	// (0x0008e478) main_video2_pane_t1

0x63ae,	// (0x0008e49c) main_video2_pane_t2_ParamLimits

0x63ae,	// (0x0008e49c) main_video2_pane_t2

0x63fc,	// (0x0008e4ea) main_video2_pane_t3_ParamLimits

0x63fc,	// (0x0008e4ea) main_video2_pane_t3

0x0002,

0xf684,	// (0x00097772) main_video2_pane_t_ParamLimits

0xf684,	// (0x00097772) main_video2_pane_t

0x5877,	// (0x0008d965) call_muted_g2

0x0001,

0xf626,	// (0x00097714) call_muted_g

0x0666,	// (0x00088754) main_mup2_pane

0x6440,	// (0x0008e52e) main_mup2_pane_g1_ParamLimits

0x6440,	// (0x0008e52e) main_mup2_pane_g1

0x644c,	// (0x0008e53a) main_mup2_pane_g2_ParamLimits

0x644c,	// (0x0008e53a) main_mup2_pane_g2

0xc818,	// (0x00094906) main_mup_pane_g13_cp1

0xc820,	// (0x0009490e) mup_volume_pane_cp1

0x6468,	// (0x0008e556) main_mup2_pane_g4_ParamLimits

0x6468,	// (0x0008e556) main_mup2_pane_g4

0x647a,	// (0x0008e568) main_mup2_pane_g5_ParamLimits

0x647a,	// (0x0008e568) main_mup2_pane_g5

0x648c,	// (0x0008e57a) main_mup2_pane_g6_ParamLimits

0x648c,	// (0x0008e57a) main_mup2_pane_g6

0x649e,	// (0x0008e58c) main_mup2_pane_g7_ParamLimits

0x649e,	// (0x0008e58c) main_mup2_pane_g7

0x0006,

0xf68b,	// (0x00097779) main_mup2_pane_g_ParamLimits

0xf68b,	// (0x00097779) main_mup2_pane_g

0x64b6,	// (0x0008e5a4) main_mup2_pane_t1_ParamLimits

0x64b6,	// (0x0008e5a4) main_mup2_pane_t1

0x64cc,	// (0x0008e5ba) main_mup2_pane_t2_ParamLimits

0x64cc,	// (0x0008e5ba) main_mup2_pane_t2

0x64e2,	// (0x0008e5d0) main_mup2_pane_t3_ParamLimits

0x64e2,	// (0x0008e5d0) main_mup2_pane_t3

0x64f8,	// (0x0008e5e6) main_mup2_pane_t4_ParamLimits

0x64f8,	// (0x0008e5e6) main_mup2_pane_t4

0x6510,	// (0x0008e5fe) main_mup2_pane_t5_ParamLimits

0x6510,	// (0x0008e5fe) main_mup2_pane_t5

0x6528,	// (0x0008e616) main_mup2_pane_t6_ParamLimits

0x6528,	// (0x0008e616) main_mup2_pane_t6

0x0005,

0xf69a,	// (0x00097788) main_mup2_pane_t_ParamLimits

0xf69a,	// (0x00097788) main_mup2_pane_t

0x6558,	// (0x0008e646) mup2_visualizer_pane_ParamLimits

0x6558,	// (0x0008e646) mup2_visualizer_pane

0x6586,	// (0x0008e674) mup_progress_pane_cp_ParamLimits

0x6586,	// (0x0008e674) mup_progress_pane_cp

0xc7fa,	// (0x000948e8) mup_volume_pane_cp_ParamLimits

0xc7fa,	// (0x000948e8) mup_volume_pane_cp

0x659a,	// (0x0008e688) mup2_visualizer_pane_g1_ParamLimits

0x659a,	// (0x0008e688) mup2_visualizer_pane_g1

0xc739,	// (0x00094827) mup2_visualizer_pane_g2_ParamLimits

0xc739,	// (0x00094827) mup2_visualizer_pane_g2

0x65b1,	// (0x0008e69f) mup2_visualizer_pane_g3_ParamLimits

0x65b1,	// (0x0008e69f) mup2_visualizer_pane_g3

0x0002,

0xf6a7,	// (0x00097795) mup2_visualizer_pane_g_ParamLimits

0xf6a7,	// (0x00097795) mup2_visualizer_pane_g

0xb4f4,	// (0x000935e2) aid_size_cell_fmradio

0x5a29,	// (0x0008db17) aid_height_parent_landcape

0x0ccb,	// (0x00088db9) wml_content_pane_cp

0x0cd3,	// (0x00088dc1) wml_tabs_pane

0x0cdc,	// (0x00088dca) popup_wml_miniature_window

0x0ce4,	// (0x00088dd2) scroll_pane_cp021

0x0cf8,	// (0x00088de6) wml_content_pane_comp8

0x0666,	// (0x00088754) bg_popup_sub_pane_cp05

0xc757,	// (0x00094845) popup_wml_miniature_window_g1

0xc75f,	// (0x0009484d) wml_miniature_view_pane

0x65bd,	// (0x0008e6ab) aid_size_wml_view

0x65c5,	// (0x0008e6b3) wml_miniature_view_pane_g1

0x65ce,	// (0x0008e6bc) wml_miniature_view_pane_g2

0x65d7,	// (0x0008e6c5) wml_miniature_view_pane_g3

0x65df,	// (0x0008e6cd) wml_miniature_view_pane_g4

0x65e7,	// (0x0008e6d5) wml_miniature_view_pane_g5

0x65ef,	// (0x0008e6dd) wml_miniature_view_pane_g6

0x65f7,	// (0x0008e6e5) wml_miniature_view_pane_g7

0x65ff,	// (0x0008e6ed) wml_miniature_view_pane_g8

0x0007,

0xf6ae,	// (0x0009779c) wml_miniature_view_pane_g

0xc767,	// (0x00094855) background_graphic_ParamLimits

0xc767,	// (0x00094855) background_graphic

0xc773,	// (0x00094861) wml_tabs_2_pane

0xc77c,	// (0x0009486a) wml_tabs_3_pane_ParamLimits

0xc77c,	// (0x0009486a) wml_tabs_3_pane

0xc78e,	// (0x0009487c) wml_tabs_4_pane_ParamLimits

0xc78e,	// (0x0009487c) wml_tabs_4_pane

0xc7a4,	// (0x00094892) wml_tabs_5_pane_ParamLimits

0xc7a4,	// (0x00094892) wml_tabs_5_pane

0xc7be,	// (0x000948ac) wml_tabs_pane_g2_ParamLimits

0xc7be,	// (0x000948ac) wml_tabs_pane_g2

0xc7d2,	// (0x000948c0) wml_tabs_pane_g3_ParamLimits

0xc7d2,	// (0x000948c0) wml_tabs_pane_g3

0x6607,	// (0x0008e6f5) wml_tabs_2_active_pane_ParamLimits

0x6607,	// (0x0008e6f5) wml_tabs_2_active_pane

0x661b,	// (0x0008e709) wml_tabs_2_passive_pane_ParamLimits

0x661b,	// (0x0008e709) wml_tabs_2_passive_pane

0x662f,	// (0x0008e71d) wml_tabs_3_active_pane_cp_ParamLimits

0x662f,	// (0x0008e71d) wml_tabs_3_active_pane_cp

0x6644,	// (0x0008e732) wml_tabs_3_passive_pane_ParamLimits

0x6644,	// (0x0008e732) wml_tabs_3_passive_pane

0x6657,	// (0x0008e745) wml_tabs_3_passive_pane_cp_ParamLimits

0x6657,	// (0x0008e745) wml_tabs_3_passive_pane_cp

0x666e,	// (0x0008e75c) tabs_4_active_pane

0x6676,	// (0x0008e764) tabs_4_passive_pane

0x6680,	// (0x0008e76e) tabs_4_passive_pane_cp

0x6688,	// (0x0008e776) tabs_4_passive_pane_cp2

0x5744,	// (0x0008d832) aid_height_text

0x4de2,	// (0x0008ced0) mup_volume_cont_pane_ParamLimits

0x4de2,	// (0x0008ced0) mup_volume_cont_pane

0x28c0,	// (0x0008a9ae) aid_size_cell_pinb

0x28ca,	// (0x0008a9b8) aid_size_list_pinb

0x6572,	// (0x0008e660) mup2_volume_cont_pane_ParamLimits

0x6572,	// (0x0008e660) mup2_volume_cont_pane

0xc7e6,	// (0x000948d4) mup2_volume_cont_pane_g1_ParamLimits

0xc7e6,	// (0x000948d4) mup2_volume_cont_pane_g1

0x2572,	// (0x0008a660) aid_size_cell_touch_ParamLimits

0x2572,	// (0x0008a660) aid_size_cell_touch

0x27b0,	// (0x0008a89e) touch_pane_ParamLimits

0x27b0,	// (0x0008a89e) touch_pane

0x01f3,	// (0x000882e1) main_rss2_pane

0xc828,	// (0x00094916) listscroll_rss2_pane

0xc831,	// (0x0009491f) rss2_navigation_pane

0xc839,	// (0x00094927) list_rss2_pane

0x47c2,	// (0x0008c8b0) scroll_pane_cp22

0xc841,	// (0x0009492f) rss2_navigation_pane_g1

0xc84a,	// (0x00094938) rss2_navigation_pane_g2

0xc852,	// (0x00094940) rss2_navigation_pane_g3

0x0002,

0xf6bf,	// (0x000977ad) rss2_navigation_pane_g

0xc85a,	// (0x00094948) rss2_navigation_pane_t1

0x6692,	// (0x0008e780) rss2_list_single_pane_ParamLimits

0x6692,	// (0x0008e780) rss2_list_single_pane

0xc868,	// (0x00094956) rss2_list_single_pane_t2

0xc876,	// (0x00094964) rss2_list_single_pane_t3_ParamLimits

0xc876,	// (0x00094964) rss2_list_single_pane_t3

0xc893,	// (0x00094981) rss2_list_single_pane_t4

0x4086,	// (0x0008c174) smil_status_pane_g1

0x2796,	// (0x0008a884) main_image2_pane_ParamLimits

0x2796,	// (0x0008a884) main_image2_pane

0x6138,	// (0x0008e226) main_camera2_pane_g9_ParamLimits

0x6138,	// (0x0008e226) main_camera2_pane_g9

0x6266,	// (0x0008e354) main_camera2_pane_t5_ParamLimits

0x6266,	// (0x0008e354) main_camera2_pane_t5

0xc709,	// (0x000947f7) main_camera2_pane_t6_ParamLimits

0xc709,	// (0x000947f7) main_camera2_pane_t6

0x66a7,	// (0x0008e795) main_image2_pane_g1_ParamLimits

0x66a7,	// (0x0008e795) main_image2_pane_g1

0x5480,	// (0x0008d56e) smil2_video_pane_ParamLimits

0x5480,	// (0x0008d56e) smil2_video_pane

0x25b2,	// (0x0008a6a0) aid_zoom_text_primary_cp

0x0249,	// (0x00088337) popup_preview_fixed_window

0x0c34,	// (0x00088d22) im_reading_pane_g1

0x5faf,	// (0x0008e09d) cams2_bc_adjust_pane_cp_ParamLimits

0x5faf,	// (0x0008e09d) cams2_bc_adjust_pane_cp

0x6295,	// (0x0008e383) cams2_bc_adjust_pane_ParamLimits

0x6295,	// (0x0008e383) cams2_bc_adjust_pane

0xc8a1,	// (0x0009498f) cams2_bc_adjust_pane_g1

0xc8a9,	// (0x00094997) cams2_slider_pane

0xc8b2,	// (0x000949a0) cams2_slider_pane_g1

0xc8bb,	// (0x000949a9) cams2_slider_pane_g2

0x0006,

0xf6c6,	// (0x000977b4) cams2_slider_pane_g

0x29ac,	// (0x0008aa9a) calc_display_pane_ParamLimits

0x29d2,	// (0x0008aac0) calc_paper_pane_ParamLimits

0x29f3,	// (0x0008aae1) grid_calc_pane_ParamLimits

0xb193,	// (0x00093281) popup_clock_digital_window_t1_ParamLimits

0xb491,	// (0x0009357f) main_image_pane_t1

0x298e,	// (0x0008aa7c) aid_size_cell_calc_ParamLimits

0x298e,	// (0x0008aa7c) aid_size_cell_calc

0x5a6f,	// (0x0008db5d) popup_blid_sat_info2_window_ParamLimits

0x5a6f,	// (0x0008db5d) popup_blid_sat_info2_window

0xc8dd,	// (0x000949cb) aid_size_cell_blid

0xc8e5,	// (0x000949d3) bg_popup_window_pane_cp07

0xc908,	// (0x000949f6) grid_popup_blid_pane

0xc912,	// (0x00094a00) heading_pane_cp05_ParamLimits

0xc912,	// (0x00094a00) heading_pane_cp05

0xc9dc,	// (0x00094aca) cell_popup_blid_pane_ParamLimits

0xc9dc,	// (0x00094aca) cell_popup_blid_pane

0xca00,	// (0x00094aee) cell_popup_blid_pane_g1

0xca08,	// (0x00094af6) cell_popup_blid_pane_t1

0x6542,	// (0x0008e630) mup2_indicator_pane_ParamLimits

0x6542,	// (0x0008e630) mup2_indicator_pane

0xb1b8,	// (0x000932a6) mup2_visualizer_osc_pane

0xc745,	// (0x00094833) mup2_visualizer_spec_pane_ParamLimits

0xc745,	// (0x00094833) mup2_visualizer_spec_pane

0x66bd,	// (0x0008e7ab) mup2_spec_half_pane

0x66c6,	// (0x0008e7b4) mup2_spec_half_pane_cp

0x66ce,	// (0x0008e7bc) mup2_spec_bar_pane_ParamLimits

0x66ce,	// (0x0008e7bc) mup2_spec_bar_pane

0xc694,	// (0x00094782) mup2_spec_bar_pane_g1

0xc69e,	// (0x0009478c) mup2_spec_bar_pane_g2

0x0001,

0xf639,	// (0x00097727) mup2_spec_bar_pane_g

0x66ee,	// (0x0008e7dc) mup2_osc_middle_pane

0xc6b0,	// (0x0009479e) mup2_visualizer_osc_pane_g1

0x0273,	// (0x00088361) popup_number_entry_window_t1_ParamLimits

0x0286,	// (0x00088374) popup_number_entry_window_t2_ParamLimits

0x0298,	// (0x00088386) popup_number_entry_window_t3_ParamLimits

0x2802,	// (0x0008a8f0) popup_number_entry_window_t5_ParamLimits

0x2802,	// (0x0008a8f0) popup_number_entry_window_t5

0xf0fb,	// (0x000971e9) popup_number_entry_window_t_ParamLimits

0x02aa,	// (0x00088398) text_title_cp2_ParamLimits

0xb377,	// (0x00093465) aid_hotspot_pointer_text2_pane

0xb391,	// (0x0009347f) main_viewer_pane_g9_ParamLimits

0xb391,	// (0x0009347f) main_viewer_pane_g9

0x0e63,	// (0x00088f51) cale_month_pane_t1_ParamLimits

0x40f4,	// (0x0008c1e2) bg_cale_pane_ParamLimits

0x410c,	// (0x0008c1fa) list_cale_pane_ParamLimits

0x0ac6,	// (0x00088bb4) listscroll_cale_day_pane_t1

0x411d,	// (0x0008c20b) scroll_pane_cp09_ParamLimits

0x4e14,	// (0x0008cf02) main_mup_eq_pane_t1_ParamLimits

0x4e14,	// (0x0008cf02) main_mup_eq_pane_t1

0x4e2e,	// (0x0008cf1c) main_mup_eq_pane_t2_ParamLimits

0x4e2e,	// (0x0008cf1c) main_mup_eq_pane_t2

0x4e48,	// (0x0008cf36) main_mup_eq_pane_t3_ParamLimits

0x4e48,	// (0x0008cf36) main_mup_eq_pane_t3

0x4e64,	// (0x0008cf52) main_mup_eq_pane_t4_ParamLimits

0x4e64,	// (0x0008cf52) main_mup_eq_pane_t4

0x4e80,	// (0x0008cf6e) main_mup_eq_pane_t5_ParamLimits

0x4e80,	// (0x0008cf6e) main_mup_eq_pane_t5

0x4e9c,	// (0x0008cf8a) main_mup_eq_pane_t6_ParamLimits

0x4e9c,	// (0x0008cf8a) main_mup_eq_pane_t6

0x4eb0,	// (0x0008cf9e) main_mup_eq_pane_t7_ParamLimits

0x4eb0,	// (0x0008cf9e) main_mup_eq_pane_t7

0x4ec4,	// (0x0008cfb2) main_mup_eq_pane_t8_ParamLimits

0x4ec4,	// (0x0008cfb2) main_mup_eq_pane_t8

0x4ed8,	// (0x0008cfc6) main_mup_eq_pane_t9_ParamLimits

0x4ed8,	// (0x0008cfc6) main_mup_eq_pane_t9

0x4ef2,	// (0x0008cfe0) main_mup_eq_pane_t10_ParamLimits

0x4ef2,	// (0x0008cfe0) main_mup_eq_pane_t10

0x0009,

0xf488,	// (0x00097576) main_mup_eq_pane_t_ParamLimits

0xf488,	// (0x00097576) main_mup_eq_pane_t

0x4fa1,	// (0x0008d08f) mup_equalizer_pane_cp5_ParamLimits

0x4fb5,	// (0x0008d0a3) mup_equalizer_pane_cp6_ParamLimits

0x4fc9,	// (0x0008d0b7) mup_equalizer_pane_cp7_ParamLimits

0x01f3,	// (0x000882e1) main_gallery_pane

0xc6b9,	// (0x000947a7) smil2_volume_pane

0xc6c1,	// (0x000947af) smil_status_volume_pane_g1_ParamLimits

0xc6d4,	// (0x000947c2) smil_status_volume_pane_g2_ParamLimits

0xc6e7,	// (0x000947d5) smil_status_volume_pane_g3_ParamLimits

0xf63e,	// (0x0009772c) smil_status_volume_pane_g_ParamLimits

0xc8e5,	// (0x000949d3) bg_popup_window_pane_cp07_ParamLimits

0xc8f3,	// (0x000949e1) blid_firmament_pane

0x66f7,	// (0x0008e7e5) aid_size_cell_gallery_ParamLimits

0x66f7,	// (0x0008e7e5) aid_size_cell_gallery

0x670d,	// (0x0008e7fb) grid_gallery_pane_ParamLimits

0x670d,	// (0x0008e7fb) grid_gallery_pane

0x6726,	// (0x0008e814) cell_gallery_pane_ParamLimits

0x6726,	// (0x0008e814) cell_gallery_pane

0xca16,	// (0x00094b04) bg_cell_gallery_focus_pane_ParamLimits

0xca16,	// (0x00094b04) bg_cell_gallery_focus_pane

0xca28,	// (0x00094b16) cell_gallery_pane_g1_ParamLimits

0xca28,	// (0x00094b16) cell_gallery_pane_g1

0x676f,	// (0x0008e85d) cell_gallery_pane_g2_ParamLimits

0x676f,	// (0x0008e85d) cell_gallery_pane_g2

0x677c,	// (0x0008e86a) cell_gallery_pane_g3_ParamLimits

0x677c,	// (0x0008e86a) cell_gallery_pane_g3

0xca34,	// (0x00094b22) cell_gallery_pane_g4_ParamLimits

0xca34,	// (0x00094b22) cell_gallery_pane_g4

0x0003,

0xf6ec,	// (0x000977da) cell_gallery_pane_g_ParamLimits

0xf6ec,	// (0x000977da) cell_gallery_pane_g

0xca40,	// (0x00094b2e) bg_cell_gallery_focus_pane_g1

0xca48,	// (0x00094b36) bg_cell_gallery_focus_pane_g2

0xca50,	// (0x00094b3e) bg_cell_gallery_focus_pane_g3

0xca58,	// (0x00094b46) bg_cell_gallery_focus_pane_g4

0xca60,	// (0x00094b4e) bg_cell_gallery_focus_pane_g5

0xca68,	// (0x00094b56) bg_cell_gallery_focus_pane_g6

0xca70,	// (0x00094b5e) bg_cell_gallery_focus_pane_g7

0xca78,	// (0x00094b66) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6f5,	// (0x000977e3) bg_cell_gallery_focus_pane_g

0xca80,	// (0x00094b6e) aid_firma_cardinal

0xca94,	// (0x00094b82) blid_firmament_pane_t1

0xcaab,	// (0x00094b99) blid_firmament_pane_t2

0xcac2,	// (0x00094bb0) blid_firmament_pane_t3

0xcad9,	// (0x00094bc7) blid_firmament_pane_t4

0x0003,

0xf706,	// (0x000977f4) blid_firmament_pane_t

0xcaf0,	// (0x00094bde) blid_sat_info_pane

0xcb00,	// (0x00094bee) blid_sat_info_pane_g1

0xcb00,	// (0x00094bee) blid_sat_info_pane_g2

0x0001,

0xf70f,	// (0x000977fd) blid_sat_info_pane_g

0xcb0a,	// (0x00094bf8) blid_sat_info_pane_t1

0xcb18,	// (0x00094c06) smil2_volume_content_pane

0xcb21,	// (0x00094c0f) smil2_volume_pane_g1

0xcb29,	// (0x00094c17) smil2_volume_content_pane_g1

0xcb32,	// (0x00094c20) smil2_volume_content_pane_g2

0xcb3b,	// (0x00094c29) smil2_volume_content_pane_g3

0xcb44,	// (0x00094c32) smil2_volume_content_pane_g4

0xcb4d,	// (0x00094c3b) smil2_volume_content_pane_g5

0xcb56,	// (0x00094c44) smil2_volume_content_pane_g6

0xcb5f,	// (0x00094c4d) smil2_volume_content_pane_g7

0xcb68,	// (0x00094c56) smil2_volume_content_pane_g8

0xcb71,	// (0x00094c5f) smil2_volume_content_pane_g9

0xcb7a,	// (0x00094c68) smil2_volume_content_pane_g10

0x0009,

0xf714,	// (0x00097802) smil2_volume_content_pane_g

0x2e85,	// (0x0008af73) cale_week_day_heading_pane_t1_ParamLimits

0x2eb2,	// (0x0008afa0) cale_week_day_heading_pane_t2_ParamLimits

0x2edf,	// (0x0008afcd) cale_week_day_heading_pane_t3_ParamLimits

0x2f0c,	// (0x0008affa) cale_week_day_heading_pane_t4_ParamLimits

0x2f39,	// (0x0008b027) cale_week_day_heading_pane_t5_ParamLimits

0x2f66,	// (0x0008b054) cale_week_day_heading_pane_t6_ParamLimits

0x2f93,	// (0x0008b081) cale_week_day_heading_pane_t7_ParamLimits

0xf200,	// (0x000972ee) cale_week_day_heading_pane_t_ParamLimits

0x0ad8,	// (0x00088bc6) bg_cale_side_pane_ParamLimits

0x2fc0,	// (0x0008b0ae) cale_week_time_pane_t1_ParamLimits

0x2fd8,	// (0x0008b0c6) cale_week_time_pane_t2_ParamLimits

0x2ff0,	// (0x0008b0de) cale_week_time_pane_t3_ParamLimits

0x3008,	// (0x0008b0f6) cale_week_time_pane_t4_ParamLimits

0x3020,	// (0x0008b10e) cale_week_time_pane_t5_ParamLimits

0x3038,	// (0x0008b126) cale_week_time_pane_t6_ParamLimits

0x3050,	// (0x0008b13e) cale_week_time_pane_t7_ParamLimits

0x3068,	// (0x0008b156) cale_week_time_pane_t8_ParamLimits

0xf20f,	// (0x000972fd) cale_week_time_pane_t_ParamLimits

0x3080,	// (0x0008b16e) cell_cale_week_pane_g2_ParamLimits

0x0ad8,	// (0x00088bc6) bg_cale_side_pane_cp01_ParamLimits

0x3f07,	// (0x0008bff5) cale_month_week_pane_t1_ParamLimits

0x3f1e,	// (0x0008c00c) cale_month_week_pane_t2_ParamLimits

0x3f35,	// (0x0008c023) cale_month_week_pane_t3_ParamLimits

0x3f4c,	// (0x0008c03a) cale_month_week_pane_t4_ParamLimits

0x3f63,	// (0x0008c051) cale_month_week_pane_t5_ParamLimits

0x3f7a,	// (0x0008c068) cale_month_week_pane_t6_ParamLimits

0xf2e8,	// (0x000973d6) cale_month_week_pane_t_ParamLimits

0xb10f,	// (0x000931fd) cell_cale_month_pane_g1_ParamLimits

0x01f3,	// (0x000882e1) main_cale_event_viewer_pane

0x01f3,	// (0x000882e1) listscroll_cale_event_viewer_pane

0xcb83,	// (0x00094c71) list_cale_ev_pane

0xcb8b,	// (0x00094c79) scroll_pane_cp023

0xcb97,	// (0x00094c85) field_cale_ev_pane_ParamLimits

0xcb97,	// (0x00094c85) field_cale_ev_pane

0xcbb5,	// (0x00094ca3) field_cale_ev_content_pane_ParamLimits

0xcbb5,	// (0x00094ca3) field_cale_ev_content_pane

0xcbc1,	// (0x00094caf) field_cale_ev_pane_g1_ParamLimits

0xcbc1,	// (0x00094caf) field_cale_ev_pane_g1

0xcbcd,	// (0x00094cbb) field_cale_ev_pane_g2_ParamLimits

0xcbcd,	// (0x00094cbb) field_cale_ev_pane_g2

0xcbe5,	// (0x00094cd3) field_cale_ev_pane_g3_ParamLimits

0xcbe5,	// (0x00094cd3) field_cale_ev_pane_g3

0x0002,

0xf729,	// (0x00097817) field_cale_ev_pane_g_ParamLimits

0xf729,	// (0x00097817) field_cale_ev_pane_g

0xcbfd,	// (0x00094ceb) field_cale_ev_pane_t1_ParamLimits

0xcbfd,	// (0x00094ceb) field_cale_ev_pane_t1

0xcc14,	// (0x00094d02) field_cale_ev_content_pane_t1_ParamLimits

0xcc14,	// (0x00094d02) field_cale_ev_content_pane_t1

0xb341,	// (0x0009342f) bg_button_pane_cp01

0x0998,	// (0x00088a86) listscroll_cale_week_pane_ParamLimits

0x2cb1,	// (0x0008ad9f) popup_toolbar_window_cp01

0x0ac6,	// (0x00088bb4) listscroll_cale_week_pane_t1_ParamLimits

0x0998,	// (0x00088a86) listscroll_cale_day_pane_ParamLimits

0x40ea,	// (0x0008c1d8) popup_toolbar_window_cp02

0x0ac6,	// (0x00088bb4) listscroll_cale_day_pane_t1_ParamLimits

0x0998,	// (0x00088a86) main_cale_month_pane_ParamLimits

0x5ca3,	// (0x0008dd91) popup_toolbar_window_cp03_ParamLimits

0x5ca3,	// (0x0008dd91) popup_toolbar_window_cp03

0x5348,	// (0x0008d436) main_image_pane_g2_ParamLimits

0x5348,	// (0x0008d436) main_image_pane_g2

0x5359,	// (0x0008d447) main_image_pane_g3_ParamLimits

0x5359,	// (0x0008d447) main_image_pane_g3

0x0002,

0xf51a,	// (0x00097608) main_image_pane_g_ParamLimits

0xf51a,	// (0x00097608) main_image_pane_g

0xb491,	// (0x0009357f) main_image_pane_t1_ParamLimits

0x536a,	// (0x0008d458) main_image_pane_t2_ParamLimits

0x536a,	// (0x0008d458) main_image_pane_t2

0x537c,	// (0x0008d46a) main_image_pane_t3_ParamLimits

0x537c,	// (0x0008d46a) main_image_pane_t3

0x53a4,	// (0x0008d492) main_image_pane_t4_ParamLimits

0x53a4,	// (0x0008d492) main_image_pane_t4

0x0003,

0xf521,	// (0x0009760f) main_image_pane_t_ParamLimits

0xf521,	// (0x0009760f) main_image_pane_t

0x53c4,	// (0x0008d4b2) popup_image_details_window_cp01

0x53ce,	// (0x0008d4bc) popup_toobar_trans_pane_cp01_ParamLimits

0x53ce,	// (0x0008d4bc) popup_toobar_trans_pane_cp01

0x5b4e,	// (0x0008dc3c) popup_image_details_window_ParamLimits

0x5b4e,	// (0x0008dc3c) popup_image_details_window

0xc61a,	// (0x00094708) popup_image_focus_window

0x5f69,	// (0x0008e057) camera2_autofocus_pane_ParamLimits

0x5f69,	// (0x0008e057) camera2_autofocus_pane

0x01f3,	// (0x000882e1) bg_popup_sub_pane_cp06

0xcc32,	// (0x00094d20) popup_image_focus_window_g1

0xcc3a,	// (0x00094d28) popup_image_focus_window_g2

0xcc42,	// (0x00094d30) popup_image_focus_window_g3

0xcc4a,	// (0x00094d38) popup_image_focus_window_g4

0x0003,

0xf730,	// (0x0009781e) popup_image_focus_window_g

0xcc52,	// (0x00094d40) popup_image_focus_window_t1

0xcc60,	// (0x00094d4e) popup_image_focus_window_t2

0xcc70,	// (0x00094d5e) popup_image_focus_window_t3

0x0002,

0xf739,	// (0x00097827) popup_image_focus_window_t

0xcc7e,	// (0x00094d6c) camera2_autofocus_pane_g1

0x2796,	// (0x0008a884) bg_tb_trans_pane_cp01

0xcc8c,	// (0x00094d7a) popup_image_details_window_g1

0xcc9f,	// (0x00094d8d) popup_image_details_window_g2

0x0002,

0xf74b,	// (0x00097839) popup_image_details_window_g

0xccc8,	// (0x00094db6) popup_image_details_window_t1

0xccda,	// (0x00094dc8) popup_image_details_window_t2

0xccf3,	// (0x00094de1) popup_image_details_window_t3

0xcd07,	// (0x00094df5) popup_image_details_window_t4

0xcd22,	// (0x00094e10) popup_image_details_window_t5

0x0004,

0xf752,	// (0x00097840) popup_image_details_window_t

0x0984,	// (0x00088a72) bg_calc_paper_pane_ParamLimits

0xb015,	// (0x00093103) grid_highlight_pane_cp013

0xb01f,	// (0x0009310d) list_calc_pane_ParamLimits

0xb031,	// (0x0009311f) scroll_pane_cp024

0x0998,	// (0x00088a86) bg_calc_display_pane_ParamLimits

0x2ae2,	// (0x0008abd0) calc_display_pane_t1_ParamLimits

0x2af4,	// (0x0008abe2) calc_display_pane_t2_ParamLimits

0xb039,	// (0x00093127) calc_display_pane_t3_ParamLimits

0xf182,	// (0x00097270) calc_display_pane_t_ParamLimits

0x2bae,	// (0x0008ac9c) cell_calc_pane_g2

0x0001,

0xf19f,	// (0x0009728d) cell_calc_pane_g

0x2bb7,	// (0x0008aca5) cell_calc_pane_t1

0x09f7,	// (0x00088ae5) grid_highlight_pane_cp02_ParamLimits

0x0a0d,	// (0x00088afb) toolbar_button_pane_cp01_ParamLimits

0x0a0d,	// (0x00088afb) toolbar_button_pane_cp01

0xb4d6,	// (0x000935c4) temp_image_control_pane_ParamLimits

0xb4d6,	// (0x000935c4) temp_image_control_pane

0x2796,	// (0x0008a884) main_mp3_pane

0xcd3c,	// (0x00094e2a) temp_image_control_pane_g1_ParamLimits

0xcd3c,	// (0x00094e2a) temp_image_control_pane_g1

0xcd4a,	// (0x00094e38) temp_image_control_pane_g2_ParamLimits

0xcd4a,	// (0x00094e38) temp_image_control_pane_g2

0xcd5c,	// (0x00094e4a) temp_image_control_pane_g3_ParamLimits

0xcd5c,	// (0x00094e4a) temp_image_control_pane_g3

0x67b9,	// (0x0008e8a7) temp_image_control_pane_g4_ParamLimits

0x67b9,	// (0x0008e8a7) temp_image_control_pane_g4

0x0003,

0xf75d,	// (0x0009784b) temp_image_control_pane_g_ParamLimits

0xf75d,	// (0x0009784b) temp_image_control_pane_g

0xcd3c,	// (0x00094e2a) main_mp3_pane_g1

0x67cc,	// (0x0008e8ba) main_mp3_pane_g2

0x0007,

0xf766,	// (0x00097854) main_mp3_pane_g

0xcd9f,	// (0x00094e8d) main_mp3_pane_t1

0x0b3d,	// (0x00088c2b) main_camera_pane_g8_ParamLimits

0x0b3d,	// (0x00088c2b) main_camera_pane_g8

0x333a,	// (0x0008b428) main_video_pane_g7_ParamLimits

0x333a,	// (0x0008b428) main_video_pane_g7

0xc727,	// (0x00094815) main_camera2_pane_t7_ParamLimits

0xc727,	// (0x00094815) main_camera2_pane_t7

0x0c8b,	// (0x00088d79) scroll_pane_cp025_ParamLimits

0x0c8b,	// (0x00088d79) scroll_pane_cp025

0x0c9f,	// (0x00088d8d) scroll_pane_cp026_ParamLimits

0x0c9f,	// (0x00088d8d) scroll_pane_cp026

0x0cae,	// (0x00088d9c) wml_content_pane_ParamLimits

0x01f3,	// (0x000882e1) main_touch_calib_pane

0x6895,	// (0x0008e983) main_touch_calib_pane_g1

0x68a1,	// (0x0008e98f) main_touch_calib_pane_g2

0x68ad,	// (0x0008e99b) main_touch_calib_pane_g3

0x68b9,	// (0x0008e9a7) main_touch_calib_pane_g4

0x0003,

0xf784,	// (0x00097872) main_touch_calib_pane_g

0x68c5,	// (0x0008e9b3) main_touch_calib_pane_t1

0x68df,	// (0x0008e9cd) main_touch_calib_pane_t2

0x0004,

0xf78d,	// (0x0009787b) main_touch_calib_pane_t

0x4a6a,	// (0x0008cb58) mup_progress_pane_cp02

0x4a89,	// (0x0008cb77) navi_pane_g1

0x4b42,	// (0x0008cc30) navi_pane_mp_t3

0x2796,	// (0x0008a884) main_mp3_pane_ParamLimits

0x5ce1,	// (0x0008ddcf) navi_pane_ParamLimits

0xcd3c,	// (0x00094e2a) main_mp3_pane_g1_ParamLimits

0x67cc,	// (0x0008e8ba) main_mp3_pane_g2_ParamLimits

0x67da,	// (0x0008e8c8) main_mp3_pane_g3_ParamLimits

0x67da,	// (0x0008e8c8) main_mp3_pane_g3

0x67e8,	// (0x0008e8d6) main_mp3_pane_g4_ParamLimits

0x67e8,	// (0x0008e8d6) main_mp3_pane_g4

0xcd6c,	// (0x00094e5a) main_mp3_pane_g5_ParamLimits

0xcd6c,	// (0x00094e5a) main_mp3_pane_g5

0xcd7a,	// (0x00094e68) main_mp3_pane_g6_ParamLimits

0xcd7a,	// (0x00094e68) main_mp3_pane_g6

0xcd87,	// (0x00094e75) main_mp3_pane_g7_ParamLimits

0xcd87,	// (0x00094e75) main_mp3_pane_g7

0xcd93,	// (0x00094e81) main_mp3_pane_g8_ParamLimits

0xcd93,	// (0x00094e81) main_mp3_pane_g8

0xf766,	// (0x00097854) main_mp3_pane_g_ParamLimits

0x67f4,	// (0x0008e8e2) main_mp3_pane_t2

0x6802,	// (0x0008e8f0) main_mp3_pane_t3

0xcdad,	// (0x00094e9b) main_mp3_pane_t4

0xcdbb,	// (0x00094ea9) main_mp3_pane_t5

0x0005,

0xf777,	// (0x00097865) main_mp3_pane_t

0xcdc9,	// (0x00094eb7) mup_progress_pane_cp01

0x25b2,	// (0x0008a6a0) aid_zoom_text_secondary2

0xcb83,	// (0x00094c71) list_cale_ev2_pane

0xcb8b,	// (0x00094c79) scroll_pane_cp023_ParamLimits

0x6935,	// (0x0008ea23) field_cale_ev2_pane_ParamLimits

0x6935,	// (0x0008ea23) field_cale_ev2_pane

0x6955,	// (0x0008ea43) field_cale_ev2_pane_g1_ParamLimits

0x6955,	// (0x0008ea43) field_cale_ev2_pane_g1

0x6961,	// (0x0008ea4f) field_cale_ev2_pane_g2_ParamLimits

0x6961,	// (0x0008ea4f) field_cale_ev2_pane_g2

0x6979,	// (0x0008ea67) field_cale_ev2_pane_g3_ParamLimits

0x6979,	// (0x0008ea67) field_cale_ev2_pane_g3

0x0003,

0xf798,	// (0x00097886) field_cale_ev2_pane_g_ParamLimits

0xf798,	// (0x00097886) field_cale_ev2_pane_g

0xcddd,	// (0x00094ecb) field_cale_ev2_pane_t1_ParamLimits

0xcddd,	// (0x00094ecb) field_cale_ev2_pane_t1

0xcdf4,	// (0x00094ee2) field_cale_ev2_pane_t2_ParamLimits

0xcdf4,	// (0x00094ee2) field_cale_ev2_pane_t2

0x0001,

0xf7a1,	// (0x0009788f) field_cale_ev2_pane_t_ParamLimits

0xf7a1,	// (0x0009788f) field_cale_ev2_pane_t

0x51fd,	// (0x0008d2eb) main_postcard_pane_g5_ParamLimits

0x51fd,	// (0x0008d2eb) main_postcard_pane_g5

0x5213,	// (0x0008d301) main_postcard_pane_g6_ParamLimits

0x5213,	// (0x0008d301) main_postcard_pane_g6

0x30fa,	// (0x0008b1e8) camera2_autofocus_pane_cp_ParamLimits

0x30fa,	// (0x0008b1e8) camera2_autofocus_pane_cp

0x2796,	// (0x0008a884) main_mup3_pane

0x69b1,	// (0x0008ea9f) main_mup3_pane_g1_ParamLimits

0x69b1,	// (0x0008ea9f) main_mup3_pane_g1

0x69d3,	// (0x0008eac1) main_mup3_pane_g2_ParamLimits

0x69d3,	// (0x0008eac1) main_mup3_pane_g2

0x6a51,	// (0x0008eb3f) main_mup3_pane_g3_ParamLimits

0x6a51,	// (0x0008eb3f) main_mup3_pane_g3

0x6a93,	// (0x0008eb81) main_mup3_pane_g4_ParamLimits

0x6a93,	// (0x0008eb81) main_mup3_pane_g4

0x6ad5,	// (0x0008ebc3) main_mup3_pane_g5_ParamLimits

0x6ad5,	// (0x0008ebc3) main_mup3_pane_g5

0x6b17,	// (0x0008ec05) main_mup3_pane_g6_ParamLimits

0x6b17,	// (0x0008ec05) main_mup3_pane_g6

0xce09,	// (0x00094ef7) main_mup3_pane_g7_ParamLimits

0xce09,	// (0x00094ef7) main_mup3_pane_g7

0x0007,

0xf7b1,	// (0x0009789f) main_mup3_pane_g_ParamLimits

0xf7b1,	// (0x0009789f) main_mup3_pane_g

0x6b91,	// (0x0008ec7f) main_mup3_pane_t1_ParamLimits

0x6b91,	// (0x0008ec7f) main_mup3_pane_t1

0x6c01,	// (0x0008ecef) main_mup3_pane_t2_ParamLimits

0x6c01,	// (0x0008ecef) main_mup3_pane_t2

0x6cd1,	// (0x0008edbf) main_mup3_pane_t4_ParamLimits

0x6cd1,	// (0x0008edbf) main_mup3_pane_t4

0x6d27,	// (0x0008ee15) main_mup3_pane_t5_ParamLimits

0x6d27,	// (0x0008ee15) main_mup3_pane_t5

0x6ddb,	// (0x0008eec9) main_mup3_pane_t6_ParamLimits

0x6ddb,	// (0x0008eec9) main_mup3_pane_t6

0x0005,

0xf7c2,	// (0x000978b0) main_mup3_pane_t_ParamLimits

0xf7c2,	// (0x000978b0) main_mup3_pane_t

0x6e8f,	// (0x0008ef7d) mup3_progress_pane_ParamLimits

0x6e8f,	// (0x0008ef7d) mup3_progress_pane

0x6f11,	// (0x0008efff) popup_mup3_control_window_ParamLimits

0x6f11,	// (0x0008efff) popup_mup3_control_window

0xeaa8,	// (0x00096b96) popup_mup3_text_window

0x6f43,	// (0x0008f031) mup3_progress_pane_t1

0x6f5a,	// (0x0008f048) mup3_progress_pane_t2

0xeab0,	// (0x00096b9e) mup3_progress_pane_t3

0x0002,

0xf7cf,	// (0x000978bd) mup3_progress_pane_t

0xeac7,	// (0x00096bb5) mup_progress_pane_cp03

0x01f3,	// (0x000882e1) bg_tb_trans_pane_cp04

0x6f71,	// (0x0008f05f) mup3_volume_pane

0x6f79,	// (0x0008f067) popup_mup3_control_window_g1

0x6f82,	// (0x0008f070) mup3_volume_pane_g1

0x6f8b,	// (0x0008f079) mup3_volume_pane_g2

0x6f94,	// (0x0008f082) mup3_volume_pane_g3

0x0002,

0xf7d6,	// (0x000978c4) mup3_volume_pane_g

0x01f3,	// (0x000882e1) bg_tb_trans_pane_cp03

0xead7,	// (0x00096bc5) popup_mup3_text_window_g1

0xeadf,	// (0x00096bcd) popup_mup3_text_window_t1

0x09e0,	// (0x00088ace) list_calc_item_pane_g1_ParamLimits

0xc80f,	// (0x000948fd) mup_volume_pane_cp_g1

0x68f9,	// (0x0008e9e7) main_touch_calib_pane_t3

0x690d,	// (0x0008e9fb) main_touch_calib_pane_t4

0x6921,	// (0x0008ea0f) main_touch_calib_pane_t5

0x01fd,	// (0x000882eb) aid_cell_size_toolbar2

0x0205,	// (0x000882f3) aid_popup3_width_pane

0x25a2,	// (0x0008a690) aid_zoom_text_msg_primary

0xb0f9,	// (0x000931e7) vorec_t7

0x09a4,	// (0x00088a92) bg_calc_paper_pane_g1_ParamLimits

0x09b0,	// (0x00088a9e) bg_calc_paper_pane_g2_ParamLimits

0x09bc,	// (0x00088aaa) bg_calc_paper_pane_g3_ParamLimits

0x09c8,	// (0x00088ab6) bg_calc_paper_pane_g4_ParamLimits

0x09d4,	// (0x00088ac2) bg_calc_paper_pane_g5_ParamLimits

0x2b3b,	// (0x0008ac29) bg_calc_paper_pane_g6_ParamLimits

0x2b4a,	// (0x0008ac38) bg_calc_paper_pane_g7_ParamLimits

0x2b59,	// (0x0008ac47) bg_calc_paper_pane_g8_ParamLimits

0xf189,	// (0x00097277) bg_calc_paper_pane_g_ParamLimits

0x2b6c,	// (0x0008ac5a) calc_bg_paper_pane_g9_ParamLimits

0x3248,	// (0x0008b336) image_qvga_pane_ParamLimits

0x3248,	// (0x0008b336) image_qvga_pane

0x08c1,	// (0x000889af) bg_popup_sub_pane_cp04_ParamLimits

0xb40d,	// (0x000934fb) popup_mup_playback_window_g1_ParamLimits

0xb419,	// (0x00093507) popup_mup_playback_window_t1_ParamLimits

0xb42e,	// (0x0009351c) popup_mup_playback_window_t2_ParamLimits

0xf515,	// (0x00097603) popup_mup_playback_window_t_ParamLimits

0x645c,	// (0x0008e54a) main_mup2_pane_g3_ParamLimits

0x645c,	// (0x0008e54a) main_mup2_pane_g3

0x3606,	// (0x0008b6f4) popup_toolbar_window_cp04

0xb810,	// (0x000938fe) popup_call2_audio_second_window_g3_ParamLimits

0xb810,	// (0x000938fe) popup_call2_audio_second_window_g3

0xbc1a,	// (0x00093d08) popup_call2_audio_first_window_g4_ParamLimits

0xbc1a,	// (0x00093d08) popup_call2_audio_first_window_g4

0xc299,	// (0x00094387) popup_call2_audio_in_window_g4_ParamLimits

0xc299,	// (0x00094387) popup_call2_audio_in_window_g4

0x532a,	// (0x0008d418) aid_area_sk_bg_cut_ParamLimits

0x532a,	// (0x0008d418) aid_area_sk_bg_cut

0xb443,	// (0x00093531) aid_area_sk_bg_cut_2_ParamLimits

0xb443,	// (0x00093531) aid_area_sk_bg_cut_2

0x675f,	// (0x0008e84d) aid_placing_details_win

0x6767,	// (0x0008e855) aid_placing_details_win_2

0xcc7e,	// (0x00094d6c) camera2_autofocus_pane_g1_ParamLimits

0x2741,	// (0x0008a82f) popup_fixed_preview_cale_window_ParamLimits

0x2741,	// (0x0008a82f) popup_fixed_preview_cale_window

0xb1d2,	// (0x000932c0) navi_slider_pane_g3

0xb1db,	// (0x000932c9) navi_slider_pane_g4

0xb1e4,	// (0x000932d2) navi_slider_pane_g5

0xb1d2,	// (0x000932c0) navi_slider_pane_g6

0xb1ed,	// (0x000932db) navi_slider_pane_g7

0xb30e,	// (0x000933fc) mup_scale_pane_g3

0xb317,	// (0x00093405) mup_scale_pane_g4

0xb320,	// (0x0009340e) mup_scale_pane_g5

0x4fdd,	// (0x0008d0cb) mup_scale_pane_g6

0x4fe6,	// (0x0008d0d4) mup_scale_pane_g7

0xb1d2,	// (0x000932c0) cams2_slider_pane_g3

0xc8c4,	// (0x000949b2) cams2_slider_pane_g4

0xc8cc,	// (0x000949ba) cams2_slider_pane_g5

0xb1d2,	// (0x000932c0) cams2_slider_pane_g6

0xc8d4,	// (0x000949c2) cams2_slider_pane_g7

0xcb00,	// (0x00094bee) camera2_autofocus_pane_cp_g1

0xeaed,	// (0x00096bdb) bg_popup_preview_window_pane_cp02_ParamLimits

0xeaed,	// (0x00096bdb) bg_popup_preview_window_pane_cp02

0xeaf9,	// (0x00096be7) list_fp_cale_pane_ParamLimits

0xeaf9,	// (0x00096be7) list_fp_cale_pane

0xeb05,	// (0x00096bf3) popup_fixed_preview_cale_window_t1_ParamLimits

0xeb05,	// (0x00096bf3) popup_fixed_preview_cale_window_t1

0x6f9d,	// (0x0008f08b) popup_fixed_preview_cale_window_t2_ParamLimits

0x6f9d,	// (0x0008f08b) popup_fixed_preview_cale_window_t2

0x6fb2,	// (0x0008f0a0) popup_fixed_preview_cale_window_t3_ParamLimits

0x6fb2,	// (0x0008f0a0) popup_fixed_preview_cale_window_t3

0x0002,

0xf7dd,	// (0x000978cb) popup_fixed_preview_cale_window_t_ParamLimits

0xf7dd,	// (0x000978cb) popup_fixed_preview_cale_window_t

0x6fc7,	// (0x0008f0b5) list_single_fp_cale_pane_ParamLimits

0x6fc7,	// (0x0008f0b5) list_single_fp_cale_pane

0xeb23,	// (0x00096c11) list_single_fp_cale_pane_g1_ParamLimits

0xeb23,	// (0x00096c11) list_single_fp_cale_pane_g1

0xeb2f,	// (0x00096c1d) list_single_fp_cale_pane_g2_ParamLimits

0xeb2f,	// (0x00096c1d) list_single_fp_cale_pane_g2

0x0002,

0xf7e4,	// (0x000978d2) list_single_fp_cale_pane_g_ParamLimits

0xf7e4,	// (0x000978d2) list_single_fp_cale_pane_g

0xeb48,	// (0x00096c36) list_single_fp_cale_pane_t1_ParamLimits

0xeb48,	// (0x00096c36) list_single_fp_cale_pane_t1

0xeb5a,	// (0x00096c48) list_single_fp_cale_pane_t2_ParamLimits

0xeb5a,	// (0x00096c48) list_single_fp_cale_pane_t2

0x0001,

0xf7eb,	// (0x000978d9) list_single_fp_cale_pane_t_ParamLimits

0xf7eb,	// (0x000978d9) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x01f3,	// (0x000882e1) main_dialer_pane

0x6fdc,	// (0x0008f0ca) aid_cell_size_keypad

0x6fe6,	// (0x0008f0d4) dialer_ne_pane

0x6fee,	// (0x0008f0dc) grid_dialer_command_1_pane

0x6ff6,	// (0x0008f0e4) grid_dialer_command_2_pane

0x6ffe,	// (0x0008f0ec) grid_dialer_keypad_pane

0x7010,	// (0x0008f0fe) bg_popup_call_pane_cp06_ParamLimits

0x7010,	// (0x0008f0fe) bg_popup_call_pane_cp06

0x701c,	// (0x0008f10a) dialer_ne_clear_pane_ParamLimits

0x701c,	// (0x0008f10a) dialer_ne_clear_pane

0xeb8d,	// (0x00096c7b) dialer_ne_pane_g1

0xeb95,	// (0x00096c83) dialer_ne_pane_t1_ParamLimits

0xeb95,	// (0x00096c83) dialer_ne_pane_t1

0x7028,	// (0x0008f116) dialer_ne_pane_t2_ParamLimits

0x7028,	// (0x0008f116) dialer_ne_pane_t2

0x7052,	// (0x0008f140) dialer_ne_pane_t3_ParamLimits

0x7052,	// (0x0008f140) dialer_ne_pane_t3

0x0002,

0xf7f0,	// (0x000978de) dialer_ne_pane_t_ParamLimits

0xf7f0,	// (0x000978de) dialer_ne_pane_t

0x7082,	// (0x0008f170) dialer_ne_pane_t3_copy1_ParamLimits

0x7082,	// (0x0008f170) dialer_ne_pane_t3_copy1

0x70b1,	// (0x0008f19f) cell_dialer_keypad_pane_ParamLimits

0x70b1,	// (0x0008f19f) cell_dialer_keypad_pane

0x70c8,	// (0x0008f1b6) cell_dialer_command_1_pane_ParamLimits

0x70c8,	// (0x0008f1b6) cell_dialer_command_1_pane

0x70de,	// (0x0008f1cc) cell_dialer_command_2_pane_ParamLimits

0x70de,	// (0x0008f1cc) cell_dialer_command_2_pane

0xeba7,	// (0x00096c95) bg_button_pane_cp02_ParamLimits

0xeba7,	// (0x00096c95) bg_button_pane_cp02

0x70ed,	// (0x0008f1db) cell_dialer_keypad_pane_g1_ParamLimits

0x70ed,	// (0x0008f1db) cell_dialer_keypad_pane_g1

0xeba7,	// (0x00096c95) bg_button_pane_cp03_ParamLimits

0xeba7,	// (0x00096c95) bg_button_pane_cp03

0x7101,	// (0x0008f1ef) cell_dialer_command_1_pane_g1_ParamLimits

0x7101,	// (0x0008f1ef) cell_dialer_command_1_pane_g1

0xebb3,	// (0x00096ca1) bg_button_pane_cp04

0x7115,	// (0x0008f203) cell_dialer_command_2_pane_g1

0xb1b8,	// (0x000932a6) bg_button_pane_cp06

0xebbb,	// (0x00096ca9) dialer_ne_clear_pane_g1

0x4a95,	// (0x0008cb83) navi_pane_g2

0x4ac3,	// (0x0008cbb1) navi_pane_g3

0x0002,

0xf418,	// (0x00097506) navi_pane_g

0x4b50,	// (0x0008cc3e) navi_pane_mv_g2

0x4b77,	// (0x0008cc65) navi_pane_mv_g5

0x4b7f,	// (0x0008cc6d) navi_pane_mv_t1

0x0998,	// (0x00088a86) main_clock2_pane

0x7149,	// (0x0008f237) main_clock2_list_pane_ParamLimits

0x7149,	// (0x0008f237) main_clock2_list_pane

0x717f,	// (0x0008f26d) main_clock2_pane_t1_ParamLimits

0x717f,	// (0x0008f26d) main_clock2_pane_t1

0x71bb,	// (0x0008f2a9) main_clock2_pane_t2_ParamLimits

0x71bb,	// (0x0008f2a9) main_clock2_pane_t2

0x0004,

0xf7f7,	// (0x000978e5) main_clock2_pane_t_ParamLimits

0xf7f7,	// (0x000978e5) main_clock2_pane_t

0x7245,	// (0x0008f333) popup_clock_analogue_window_cp03_ParamLimits

0x7245,	// (0x0008f333) popup_clock_analogue_window_cp03

0x726a,	// (0x0008f358) popup_clock_digital_window_cp02_ParamLimits

0x726a,	// (0x0008f358) popup_clock_digital_window_cp02

0x72db,	// (0x0008f3c9) main_clock2_list_single_pane_ParamLimits

0x72db,	// (0x0008f3c9) main_clock2_list_single_pane

0xb1b8,	// (0x000932a6) list_highlight_pane_cp05

0xebc3,	// (0x00096cb1) main_clock2_list_single_pane_t1

0x3606,	// (0x0008b6f4) popup_toolbar_window_cp04_ParamLimits

0x6789,	// (0x0008e877) camera2_autofocus_pane_g2_ParamLimits

0x6789,	// (0x0008e877) camera2_autofocus_pane_g2

0x6795,	// (0x0008e883) camera2_autofocus_pane_g3_ParamLimits

0x6795,	// (0x0008e883) camera2_autofocus_pane_g3

0x67a1,	// (0x0008e88f) camera2_autofocus_pane_g4_ParamLimits

0x67a1,	// (0x0008e88f) camera2_autofocus_pane_g4

0x67ad,	// (0x0008e89b) camera2_autofocus_pane_g5_ParamLimits

0x67ad,	// (0x0008e89b) camera2_autofocus_pane_g5

0x0004,

0xf740,	// (0x0009782e) camera2_autofocus_pane_g_ParamLimits

0xf740,	// (0x0009782e) camera2_autofocus_pane_g

0x6991,	// (0x0008ea7f) camera2_autofocus_pane_cp_g2

0x6999,	// (0x0008ea87) camera2_autofocus_pane_cp_g3

0x69a1,	// (0x0008ea8f) camera2_autofocus_pane_cp_g4

0x69a9,	// (0x0008ea97) camera2_autofocus_pane_cp_g5

0x0004,

0xf7a6,	// (0x00097894) camera2_autofocus_pane_cp_g

0x7008,	// (0x0008f0f6) popup_dialer_spcha_window

0x01f3,	// (0x000882e1) bg_popup_sub_pane_cp07

0xebd1,	// (0x00096cbf) list_spcha_pane

0xebd9,	// (0x00096cc7) list_single_spcha_pane_ParamLimits

0xebd9,	// (0x00096cc7) list_single_spcha_pane

0x01f3,	// (0x000882e1) list_highlight_pane_cp06

0xebea,	// (0x00096cd8) list_single_spcha_pane_t1

0xc043,	// (0x00094131) popup_call2_audio_out_window_g4_ParamLimits

0xc043,	// (0x00094131) popup_call2_audio_out_window_g4

0x01f3,	// (0x000882e1) main_imed2_pane

0xc622,	// (0x00094710) popup_imed_adjust2_window

0x5b66,	// (0x0008dc54) popup_imed_trans_window_ParamLimits

0x5b66,	// (0x0008dc54) popup_imed_trans_window

0xc93e,	// (0x00094a2c) popup_blid_sat_info2_window_t1

0xc94c,	// (0x00094a3a) popup_blid_sat_info2_window_t2

0x000a,

0xf6d5,	// (0x000977c3) popup_blid_sat_info2_window_t

0x7385,	// (0x0008f473) aid_size_cell_colour_35

0x73a5,	// (0x0008f493) aid_size_cell_colour_112

0x73c5,	// (0x0008f4b3) aid_size_cell_effect

0xc5fa,	// (0x000946e8) bg_tb_trans_pane_cp02

0x423e,	// (0x0008c32c) heading_imed_pane

0x73e5,	// (0x0008f4d3) listscroll_imed_pane

0xebf8,	// (0x00096ce6) heading_imed_pane_g1

0xec00,	// (0x00096cee) heading_imed_pane_t1

0xec0e,	// (0x00096cfc) grid_imed_colour_35_pane_ParamLimits

0xec0e,	// (0x00096cfc) grid_imed_colour_35_pane

0x73f1,	// (0x0008f4df) grid_imed_effect_pane

0xec25,	// (0x00096d13) list_imed_aspect_pane

0x7407,	// (0x0008f4f5) scroll_pane_cp027_ParamLimits

0x7407,	// (0x0008f4f5) scroll_pane_cp027

0x7418,	// (0x0008f506) cell_imed_effect_pane_ParamLimits

0x7418,	// (0x0008f506) cell_imed_effect_pane

0xec2d,	// (0x00096d1b) cell_imed_colour_pane_ParamLimits

0xec2d,	// (0x00096d1b) cell_imed_colour_pane

0xec6f,	// (0x00096d5d) cell_imed_colour_pane_g1_ParamLimits

0xec6f,	// (0x00096d5d) cell_imed_colour_pane_g1

0xec80,	// (0x00096d6e) hgihlgiht_grid_pane_cp016_ParamLimits

0xec80,	// (0x00096d6e) hgihlgiht_grid_pane_cp016

0x743f,	// (0x0008f52d) cell_imed_effect_pane_g1

0x7447,	// (0x0008f535) grid_highlight_pane_cp017

0xec91,	// (0x00096d7f) list_imed_single_pane_ParamLimits

0xec91,	// (0x00096d7f) list_imed_single_pane

0x01f3,	// (0x000882e1) list_highlight_pane_cp07

0x0e8d,	// (0x00088f7b) list_imed_aspect_pane_comp1_t1

0xc5fa,	// (0x000946e8) bg_tb_trans_pane_cp05

0x0eaf,	// (0x00088f9d) popup_imed_adjust2_window_g1

0x0ed6,	// (0x00088fc4) popup_imed_adjust2_window_t1

0x0eee,	// (0x00088fdc) slider_imed_adjust_pane

0x0f02,	// (0x00088ff0) slider_imed_adjust_pane_g1

0x0f12,	// (0x00089000) slider_imed_adjust_pane_g2

0x0f22,	// (0x00089010) slider_imed_adjust_pane_g3

0x0f33,	// (0x00089021) slider_imed_adjust_pane_g4

0x0003,

0xf814,	// (0x00097902) slider_imed_adjust_pane_g

0x7450,	// (0x0008f53e) aid_size_cell_clipart2

0x745c,	// (0x0008f54a) grid_imed_clipart_pane

0x0f44,	// (0x00089032) scroll_pane_cp031

0x7466,	// (0x0008f554) cell_imed_clipart_pane_ParamLimits

0x7466,	// (0x0008f554) cell_imed_clipart_pane

0x7488,	// (0x0008f576) cell_imed_clipart_pane_g1

0x01f3,	// (0x000882e1) grid_highlight_pane_cp014

0x715e,	// (0x0008f24c) main_clock2_pane_g1_ParamLimits

0x715e,	// (0x0008f24c) main_clock2_pane_g1

0x7286,	// (0x0008f374) aid_call2_pane_cp10

0x7298,	// (0x0008f386) aid_call_pane_cp10

0x49a7,	// (0x0008ca95) popup_clock_analogue_window_cp10_g1

0x49a7,	// (0x0008ca95) popup_clock_analogue_window_cp10_g2

0x72aa,	// (0x0008f398) popup_clock_analogue_window_cp10_g3

0x72aa,	// (0x0008f398) popup_clock_analogue_window_cp10_g4

0x49a7,	// (0x0008ca95) popup_clock_analogue_window_cp10_g5

0x0004,

0xf802,	// (0x000978f0) popup_clock_analogue_window_cp10_g

0x72bc,	// (0x0008f3aa) popup_clock_analogue_window_cp10_t1

0x72ed,	// (0x0008f3db) clock_digital_number_pane_cp10_ParamLimits

0x72ed,	// (0x0008f3db) clock_digital_number_pane_cp10

0x7305,	// (0x0008f3f3) clock_digital_number_pane_cp11_ParamLimits

0x7305,	// (0x0008f3f3) clock_digital_number_pane_cp11

0x731d,	// (0x0008f40b) clock_digital_number_pane_cp12_ParamLimits

0x731d,	// (0x0008f40b) clock_digital_number_pane_cp12

0x7335,	// (0x0008f423) clock_digital_number_pane_cp13_ParamLimits

0x7335,	// (0x0008f423) clock_digital_number_pane_cp13

0x734d,	// (0x0008f43b) clock_digital_separator_pane_cp10_ParamLimits

0x734d,	// (0x0008f43b) clock_digital_separator_pane_cp10

0x7365,	// (0x0008f453) popup_clock_digital_window_cp02_t1_ParamLimits

0x7365,	// (0x0008f453) popup_clock_digital_window_cp02_t1

0x08b9,	// (0x000889a7) clock_digital_number_pane_cp10_g1

0x08b9,	// (0x000889a7) clock_digital_number_pane_cp10_g2

0x0001,

0xf81d,	// (0x0009790b) clock_digital_number_pane_cp10_g

0x08b9,	// (0x000889a7) clock_digital_separator_pane_cp10_g1

0x08b9,	// (0x000889a7) clock_digital_separator_pane_g2_cp10

0x4bbd,	// (0x0008ccab) navi_pane_vded_g4

0x4bc6,	// (0x0008ccb4) navi_pane_vded_g5

0x4bcf,	// (0x0008ccbd) navi_pane_vded_t1

0x01f3,	// (0x000882e1) main_vded_pane

0x7491,	// (0x0008f57f) main_vded_pane_g1

0x749b,	// (0x0008f589) main_vded_pane_g2

0x74a5,	// (0x0008f593) main_vded_pane_g3

0x0002,

0xf822,	// (0x00097910) main_vded_pane_g

0x74af,	// (0x0008f59d) main_vded_pane_t1

0x74bd,	// (0x0008f5ab) main_vded_pane_t2

0x0001,

0xf829,	// (0x00097917) main_vded_pane_t

0x74cb,	// (0x0008f5b9) vded_slider_pane

0x74d3,	// (0x0008f5c1) vded_video_pane

0x0f4c,	// (0x0008903a) vded_video_pane_g1

0x74db,	// (0x0008f5c9) vded_video_pane_g2

0xcb00,	// (0x00094bee) vded_video_pane_g3

0x0002,

0xf82e,	// (0x0009791c) vded_video_pane_g

0x0f56,	// (0x00089044) vded_slider_pane_g1

0xc80f,	// (0x000948fd) vded_slider_pane_g2

0x0f5f,	// (0x0008904d) vded_slider_pane_g3

0x0f68,	// (0x00089056) vded_slider_pane_g4

0x0f71,	// (0x0008905f) vded_slider_pane_g5

0x0004,

0xf835,	// (0x00097923) vded_slider_pane_g

0x6ef9,	// (0x0008efe7) mup3_rocker_pane_ParamLimits

0x6ef9,	// (0x0008efe7) mup3_rocker_pane

0x74e4,	// (0x0008f5d2) mup3_control_keys_pane_g1

0x74ec,	// (0x0008f5da) mup3_control_keys_pane_g2

0x74f4,	// (0x0008f5e2) mup3_control_keys_pane_g3

0x74fc,	// (0x0008f5ea) mup3_control_keys_pane_g4

0x0003,

0xf840,	// (0x0009792e) mup3_control_keys_pane_g

0x2778,	// (0x0008a866) popup_toolbar2_fixed_window_cp01_ParamLimits

0x2778,	// (0x0008a866) popup_toolbar2_fixed_window_cp01

0x6f2d,	// (0x0008f01b) popup_toolbar2_fixed_window_cp02_ParamLimits

0x6f2d,	// (0x0008f01b) popup_toolbar2_fixed_window_cp02

0xb982,	// (0x00093a70) popup_call2_audio_second_window_t4_ParamLimits

0xb982,	// (0x00093a70) popup_call2_audio_second_window_t4

0xbeb0,	// (0x00093f9e) popup_call2_audio_first_window_t6_ParamLimits

0xbeb0,	// (0x00093f9e) popup_call2_audio_first_window_t6

0xc146,	// (0x00094234) popup_call2_audio_out_window_t6_ParamLimits

0xc146,	// (0x00094234) popup_call2_audio_out_window_t6

0x01f3,	// (0x000882e1) main_vitu_pane

0x750c,	// (0x0008f5fa) aid_size_cell_itu_ParamLimits

0x750c,	// (0x0008f5fa) aid_size_cell_itu

0x2796,	// (0x0008a884) bg_popup_window_pane_cp08_ParamLimits

0x2796,	// (0x0008a884) bg_popup_window_pane_cp08

0x7522,	// (0x0008f610) field_vitu_entry_pane_ParamLimits

0x7522,	// (0x0008f610) field_vitu_entry_pane

0x7539,	// (0x0008f627) grid_vitu_function_pane_ParamLimits

0x7539,	// (0x0008f627) grid_vitu_function_pane

0x7554,	// (0x0008f642) grid_vitu_itu_pane_ParamLimits

0x7554,	// (0x0008f642) grid_vitu_itu_pane

0x7572,	// (0x0008f660) cell_vitu_itu_pane_ParamLimits

0x7572,	// (0x0008f660) cell_vitu_itu_pane

0x7594,	// (0x0008f682) cell_vitu_function_pane_ParamLimits

0x7594,	// (0x0008f682) cell_vitu_function_pane

0x2796,	// (0x0008a884) bg_popup_sub_pane_cp08_ParamLimits

0x2796,	// (0x0008a884) bg_popup_sub_pane_cp08

0x75ad,	// (0x0008f69b) field_vitu_entry_pane_t1_ParamLimits

0x75ad,	// (0x0008f69b) field_vitu_entry_pane_t1

0x0f92,	// (0x00089080) field_vitu_entry_pane_t2_ParamLimits

0x0f92,	// (0x00089080) field_vitu_entry_pane_t2

0x0001,

0xf84e,	// (0x0009793c) field_vitu_entry_pane_t_ParamLimits

0xf84e,	// (0x0009793c) field_vitu_entry_pane_t

0x0faf,	// (0x0008909d) bg_button_pane_cp05_ParamLimits

0x0faf,	// (0x0008909d) bg_button_pane_cp05

0x75cb,	// (0x0008f6b9) cell_vitu_itu_pane_g1

0x75e3,	// (0x0008f6d1) cell_vitu_itu_pane_t1_ParamLimits

0x75e3,	// (0x0008f6d1) cell_vitu_itu_pane_t1

0x75f5,	// (0x0008f6e3) cell_vitu_itu_pane_t2_ParamLimits

0x75f5,	// (0x0008f6e3) cell_vitu_itu_pane_t2

0x0002,

0xf853,	// (0x00097941) cell_vitu_itu_pane_t_ParamLimits

0xf853,	// (0x00097941) cell_vitu_itu_pane_t

0x0fbd,	// (0x000890ab) bg_button_pane_cp07

0x762a,	// (0x0008f718) cell_vitu_function_pane_g1

0xb00d,	// (0x000930fb) main_calc_pane_g1

0x2596,	// (0x0008a684) aid_visual_content_pane

0x01f3,	// (0x000882e1) main_vradio_pane

0x7633,	// (0x0008f721) main_vradio_pane_g1_ParamLimits

0x7633,	// (0x0008f721) main_vradio_pane_g1

0x0fc7,	// (0x000890b5) main_vradio_pane_g2_ParamLimits

0x0fc7,	// (0x000890b5) main_vradio_pane_g2

0x0001,

0xf85a,	// (0x00097948) main_vradio_pane_g_ParamLimits

0xf85a,	// (0x00097948) main_vradio_pane_g

0x764c,	// (0x0008f73a) main_vradio_pane_t1_ParamLimits

0x764c,	// (0x0008f73a) main_vradio_pane_t1

0x7661,	// (0x0008f74f) main_vradio_pane_t2_ParamLimits

0x7661,	// (0x0008f74f) main_vradio_pane_t2

0x0fd4,	// (0x000890c2) main_vradio_pane_t3_ParamLimits

0x0fd4,	// (0x000890c2) main_vradio_pane_t3

0x0002,

0xf85f,	// (0x0009794d) main_vradio_pane_t_ParamLimits

0xf85f,	// (0x0009794d) main_vradio_pane_t

0x7676,	// (0x0008f764) vradio_rocker_control_pane_ParamLimits

0x7676,	// (0x0008f764) vradio_rocker_control_pane

0x7688,	// (0x0008f776) vradio_station_info_pane_ParamLimits

0x7688,	// (0x0008f776) vradio_station_info_pane

0x0fe8,	// (0x000890d6) vradio_frequency_info_pane_ParamLimits

0x0fe8,	// (0x000890d6) vradio_frequency_info_pane

0xcb00,	// (0x00094bee) vradio_station_info_pane_g1

0x0ff7,	// (0x000890e5) vradio_station_info_pane_t1_ParamLimits

0x0ff7,	// (0x000890e5) vradio_station_info_pane_t1

0x1019,	// (0x00089107) vradio_station_info_pane_t2_ParamLimits

0x1019,	// (0x00089107) vradio_station_info_pane_t2

0x0001,

0xf866,	// (0x00097954) vradio_station_info_pane_t_ParamLimits

0xf866,	// (0x00097954) vradio_station_info_pane_t

0x102b,	// (0x00089119) vradio_tuning_pane

0x1033,	// (0x00089121) vradio_rocker_control_pane_g1

0x103b,	// (0x00089129) vradio_rocker_control_pane_g2

0x1043,	// (0x00089131) vradio_rocker_control_pane_g3

0x104b,	// (0x00089139) vradio_rocker_control_pane_g4

0x1053,	// (0x00089141) vradio_rocker_control_pane_g5

0x0004,

0xf86b,	// (0x00097959) vradio_rocker_control_pane_g

0x769a,	// (0x0008f788) vradio_frequency_info_pane_g1

0x105b,	// (0x00089149) vradio_frequency_info_pane_t1_ParamLimits

0x105b,	// (0x00089149) vradio_frequency_info_pane_t1

0x76a4,	// (0x0008f792) vradio_tuning_pane_g1

0x76af,	// (0x0008f79d) vradio_tuning_pane_t1

0x0211,	// (0x000882ff) area_side_right_pane_ParamLimits

0x0211,	// (0x000882ff) area_side_right_pane

0xc5c1,	// (0x000946af) status_small_pane_g1

0xc5c9,	// (0x000946b7) status_small_pane_g2

0xc5d2,	// (0x000946c0) status_small_pane_g3

0xc5db,	// (0x000946c9) status_small_pane_g4

0x0003,

0xf62b,	// (0x00097719) status_small_pane_g

0xc5e4,	// (0x000946d2) status_small_pane_t1

0x01f3,	// (0x000882e1) main_video3_pane

0x106f,	// (0x0008915d) cams_zoom_vslider_pane

0x1077,	// (0x00089165) image3_wide_pane_ParamLimits

0x1077,	// (0x00089165) image3_wide_pane

0x1091,	// (0x0008917f) image3_wide_small_pane

0x109d,	// (0x0008918b) main_video3_pane_g1_ParamLimits

0x109d,	// (0x0008918b) main_video3_pane_g1

0x10b9,	// (0x000891a7) main_video3_pane_g2_ParamLimits

0x10b9,	// (0x000891a7) main_video3_pane_g2

0x0001,

0xf876,	// (0x00097964) main_video3_pane_g_ParamLimits

0xf876,	// (0x00097964) main_video3_pane_g

0x10d5,	// (0x000891c3) main_video3_pane_t1_ParamLimits

0x10d5,	// (0x000891c3) main_video3_pane_t1

0x1100,	// (0x000891ee) main_video3_pane_t2_ParamLimits

0x1100,	// (0x000891ee) main_video3_pane_t2

0x112b,	// (0x00089219) main_video3_pane_t3_ParamLimits

0x112b,	// (0x00089219) main_video3_pane_t3

0x0002,

0xf87b,	// (0x00097969) main_video3_pane_t_ParamLimits

0xf87b,	// (0x00097969) main_video3_pane_t

0x1158,	// (0x00089246) cams_zoom_vslider_pane_g1

0x1161,	// (0x0008924f) cams_zoom_vslider_pane_g2

0x0001,

0xf882,	// (0x00097970) cams_zoom_vslider_pane_g

0x1169,	// (0x00089257) small_slider_vertical_pane

0xcb00,	// (0x00094bee) small_slider_vertical_pane_g1

0xcb00,	// (0x00094bee) small_slider_vertical_pane_g2

0x1171,	// (0x0008925f) small_slider_vertical_pane_g3

0x0002,

0xf887,	// (0x00097975) small_slider_vertical_pane_g

0x01f3,	// (0x000882e1) main_hwr_training_pane

0x117a,	// (0x00089268) hwr_training_instruct_pane_ParamLimits

0x117a,	// (0x00089268) hwr_training_instruct_pane

0x76be,	// (0x0008f7ac) hwr_training_navi_pane_ParamLimits

0x76be,	// (0x0008f7ac) hwr_training_navi_pane

0x76dd,	// (0x0008f7cb) hwr_training_write_pane_ParamLimits

0x76dd,	// (0x0008f7cb) hwr_training_write_pane

0x01f3,	// (0x000882e1) bg_frame_shadow_pane

0x11b1,	// (0x0008929f) hwr_training_write_pane_g1

0x11b9,	// (0x000892a7) hwr_training_write_pane_g2

0x11c1,	// (0x000892af) hwr_training_write_pane_g3

0x11c9,	// (0x000892b7) hwr_training_write_pane_g4

0x11d1,	// (0x000892bf) hwr_training_write_pane_g5

0x11d9,	// (0x000892c7) hwr_training_write_pane_g6

0x11e1,	// (0x000892cf) hwr_training_write_pane_g7

0x0006,

0xf88e,	// (0x0009797c) hwr_training_write_pane_g

0xeca6,	// (0x00096d94) hwr_training_navi_pane_g1_ParamLimits

0xeca6,	// (0x00096d94) hwr_training_navi_pane_g1

0xecb8,	// (0x00096da6) hwr_training_navi_pane_g2_ParamLimits

0xecb8,	// (0x00096da6) hwr_training_navi_pane_g2

0xecca,	// (0x00096db8) hwr_training_navi_pane_g3_ParamLimits

0xecca,	// (0x00096db8) hwr_training_navi_pane_g3

0xecda,	// (0x00096dc8) hwr_training_navi_pane_g4_ParamLimits

0xecda,	// (0x00096dc8) hwr_training_navi_pane_g4

0x0004,

0xf89d,	// (0x0009798b) hwr_training_navi_pane_g_ParamLimits

0xf89d,	// (0x0009798b) hwr_training_navi_pane_g

0xece7,	// (0x00096dd5) hwr_training_navi_pane_t1

0x7725,	// (0x0008f813) list_single_hwr_training_instruct_pane_ParamLimits

0x7725,	// (0x0008f813) list_single_hwr_training_instruct_pane

0x11e9,	// (0x000892d7) list_single_hwr_training_instruct_pane_t1

0xca40,	// (0x00094b2e) bg_frame_shadow_pane_g1

0x11f8,	// (0x000892e6) bg_frame_shadow_pane_g2

0x1200,	// (0x000892ee) bg_frame_shadow_pane_g3

0x1208,	// (0x000892f6) bg_frame_shadow_pane_g4

0x1210,	// (0x000892fe) bg_frame_shadow_pane_g5

0x1218,	// (0x00089306) bg_frame_shadow_pane_g6

0x1220,	// (0x0008930e) bg_frame_shadow_pane_g7

0x0a51,	// (0x00088b3f) bg_frame_shadow_pane_g8

0x0007,

0xf8a8,	// (0x00097996) bg_frame_shadow_pane_g

0x01f3,	// (0x000882e1) main_video_tele_dialer_pane

0x773a,	// (0x0008f828) aid_size_cell_video_keypad_ParamLimits

0x773a,	// (0x0008f828) aid_size_cell_video_keypad

0x7754,	// (0x0008f842) grid_video_dialer_keypad_pane_ParamLimits

0x7754,	// (0x0008f842) grid_video_dialer_keypad_pane

0x77a0,	// (0x0008f88e) video_down_pane_cp_ParamLimits

0x77a0,	// (0x0008f88e) video_down_pane_cp

0x77d4,	// (0x0008f8c2) cell_video_dialer_keypad_pane_ParamLimits

0x77d4,	// (0x0008f8c2) cell_video_dialer_keypad_pane

0x1228,	// (0x00089316) bg_button_pane_cp08_ParamLimits

0x1228,	// (0x00089316) bg_button_pane_cp08

0x77f6,	// (0x0008f8e4) cell_video_dialer_keypad_pane_g1_ParamLimits

0x77f6,	// (0x0008f8e4) cell_video_dialer_keypad_pane_g1

0x6ee3,	// (0x0008efd1) mup3_rocker2_pane_ParamLimits

0x6ee3,	// (0x0008efd1) mup3_rocker2_pane

0xcb00,	// (0x00094bee) mup3_rocker2_pane_g1

0x5a47,	// (0x0008db35) main_dialer2_pane

0x01f3,	// (0x000882e1) main_mp4_pane

0xecfd,	// (0x00096deb) main_mp4_pane_g1_ParamLimits

0xecfd,	// (0x00096deb) main_mp4_pane_g1

0xecfd,	// (0x00096deb) main_mp4_pane_g2_ParamLimits

0xecfd,	// (0x00096deb) main_mp4_pane_g2

0x7830,	// (0x0008f91e) main_mp4_pane_g3_ParamLimits

0x7830,	// (0x0008f91e) main_mp4_pane_g3

0xed0b,	// (0x00096df9) main_mp4_pane_g4_ParamLimits

0xed0b,	// (0x00096df9) main_mp4_pane_g4

0xed33,	// (0x00096e21) main_mp4_pane_g5_ParamLimits

0xed33,	// (0x00096e21) main_mp4_pane_g5

0x0005,

0xf8c8,	// (0x000979b6) main_mp4_pane_g_ParamLimits

0xf8c8,	// (0x000979b6) main_mp4_pane_g

0xed83,	// (0x00096e71) main_mp4_pane_t1_ParamLimits

0xed83,	// (0x00096e71) main_mp4_pane_t1

0xeddf,	// (0x00096ecd) main_mp4_pane_t2_ParamLimits

0xeddf,	// (0x00096ecd) main_mp4_pane_t2

0x1234,	// (0x00089322) main_mp4_pane_t3_ParamLimits

0x1234,	// (0x00089322) main_mp4_pane_t3

0xee31,	// (0x00096f1f) main_mp4_pane_t4_ParamLimits

0xee31,	// (0x00096f1f) main_mp4_pane_t4

0x0003,

0xf8d5,	// (0x000979c3) main_mp4_pane_t_ParamLimits

0xf8d5,	// (0x000979c3) main_mp4_pane_t

0xee75,	// (0x00096f63) mp4_progress_pane_ParamLimits

0xee75,	// (0x00096f63) mp4_progress_pane

0xeebf,	// (0x00096fad) mp4_rocker_pane_ParamLimits

0xeebf,	// (0x00096fad) mp4_rocker_pane

0x125c,	// (0x0008934a) mp4_progress_pane_t1

0x1275,	// (0x00089363) mp4_progress_pane_t2

0x0001,

0xf8de,	// (0x000979cc) mp4_progress_pane_t

0x128e,	// (0x0008937c) mup_progress_pane_cp04

0x1608,	// (0x000896f6) mp4_rocker_pane_g1

0x786c,	// (0x0008f95a) aid_cell_size_keypad2_ParamLimits

0x786c,	// (0x0008f95a) aid_cell_size_keypad2

0x7882,	// (0x0008f970) dialer2_ne_pane_ParamLimits

0x7882,	// (0x0008f970) dialer2_ne_pane

0x789c,	// (0x0008f98a) grid_dialer2_keypad_pane_ParamLimits

0x789c,	// (0x0008f98a) grid_dialer2_keypad_pane

0xc8e5,	// (0x000949d3) bg_popup_call_pane_cp07_ParamLimits

0xc8e5,	// (0x000949d3) bg_popup_call_pane_cp07

0x78b8,	// (0x0008f9a6) dialer2_ne_pane_t1_ParamLimits

0x78b8,	// (0x0008f9a6) dialer2_ne_pane_t1

0x78f3,	// (0x0008f9e1) cell_dialer2_keypad_pane_ParamLimits

0x78f3,	// (0x0008f9e1) cell_dialer2_keypad_pane

0x12ac,	// (0x0008939a) bg_button_pane_pane_cp04_ParamLimits

0x12ac,	// (0x0008939a) bg_button_pane_pane_cp04

0x7915,	// (0x0008fa03) cell_dialer2_keypad_pane_g1_ParamLimits

0x7915,	// (0x0008fa03) cell_dialer2_keypad_pane_g1

0x3534,	// (0x0008b622) aid_placing_vt_set_content_ParamLimits

0x3534,	// (0x0008b622) aid_placing_vt_set_content

0x3554,	// (0x0008b642) aid_placing_vt_set_title_ParamLimits

0x3554,	// (0x0008b642) aid_placing_vt_set_title

0x01f3,	// (0x000882e1) main_image3_pane

0x79db,	// (0x0008fac9) area_side_right_pane_cp01_ParamLimits

0x79db,	// (0x0008fac9) area_side_right_pane_cp01

0xecfd,	// (0x00096deb) main_image3_pane_g1_ParamLimits

0xecfd,	// (0x00096deb) main_image3_pane_g1

0x79f2,	// (0x0008fae0) main_image3_pane_g2_ParamLimits

0x79f2,	// (0x0008fae0) main_image3_pane_g2

0x7a1a,	// (0x0008fb08) main_image3_pane_g3_ParamLimits

0x7a1a,	// (0x0008fb08) main_image3_pane_g3

0x7a44,	// (0x0008fb32) main_image3_pane_g4_ParamLimits

0x7a44,	// (0x0008fb32) main_image3_pane_g4

0x0003,

0xf8ed,	// (0x000979db) main_image3_pane_g_ParamLimits

0xf8ed,	// (0x000979db) main_image3_pane_g

0x7a6e,	// (0x0008fb5c) main_image3_pane_t1_ParamLimits

0x7a6e,	// (0x0008fb5c) main_image3_pane_t1

0x7ac6,	// (0x0008fbb4) main_image3_pane_t2_ParamLimits

0x7ac6,	// (0x0008fbb4) main_image3_pane_t2

0x7b18,	// (0x0008fc06) main_image3_pane_t3_ParamLimits

0x7b18,	// (0x0008fc06) main_image3_pane_t3

0x0003,

0xf8f6,	// (0x000979e4) main_image3_pane_t_ParamLimits

0xf8f6,	// (0x000979e4) main_image3_pane_t

0x2796,	// (0x0008a884) grid_sctrl_middle_pane_cp01_ParamLimits

0x2796,	// (0x0008a884) grid_sctrl_middle_pane_cp01

0x7ba0,	// (0x0008fc8e) cell_sctrl_middle_pane_cp01_ParamLimits

0x7ba0,	// (0x0008fc8e) cell_sctrl_middle_pane_cp01

0x7bbd,	// (0x0008fcab) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x7bbd,	// (0x0008fcab) cell_sctrl_middle_pane_cp01_g1

0x01f3,	// (0x000882e1) main_call4_pane

0x7bd3,	// (0x0008fcc1) aid_size_button_call4_ParamLimits

0x7bd3,	// (0x0008fcc1) aid_size_button_call4

0x7c04,	// (0x0008fcf2) call4_windows_pane_ParamLimits

0x7c04,	// (0x0008fcf2) call4_windows_pane

0x7c24,	// (0x0008fd12) grid_call4_button_pane_ParamLimits

0x7c24,	// (0x0008fd12) grid_call4_button_pane

0x12b8,	// (0x000893a6) call4_windows_conf_pane

0x12cf,	// (0x000893bd) popup_call4_audio_first_window_ParamLimits

0x12cf,	// (0x000893bd) popup_call4_audio_first_window

0x131b,	// (0x00089409) popup_call4_audio_second_window_ParamLimits

0x131b,	// (0x00089409) popup_call4_audio_second_window

0x132f,	// (0x0008941d) popup_call4_audio_wait_window_ParamLimits

0x132f,	// (0x0008941d) popup_call4_audio_wait_window

0x7c51,	// (0x0008fd3f) cell_call4_button_pane_ParamLimits

0x7c51,	// (0x0008fd3f) cell_call4_button_pane

0x7c7a,	// (0x0008fd68) bg_button_pane_cp09_ParamLimits

0x7c7a,	// (0x0008fd68) bg_button_pane_cp09

0x7c86,	// (0x0008fd74) cell_call4_button_pane_g1_ParamLimits

0x7c86,	// (0x0008fd74) cell_call4_button_pane_g1

0x7cac,	// (0x0008fd9a) cell_call4_button_pane_t1_ParamLimits

0x7cac,	// (0x0008fd9a) cell_call4_button_pane_t1

0x1377,	// (0x00089465) popup_call4_audio_conf_window_ParamLimits

0x1377,	// (0x00089465) popup_call4_audio_conf_window

0x6f43,	// (0x0008f031) mup3_progress_pane_t1_ParamLimits

0x6f5a,	// (0x0008f048) mup3_progress_pane_t2_ParamLimits

0xeab0,	// (0x00096b9e) mup3_progress_pane_t3_ParamLimits

0xf7cf,	// (0x000978bd) mup3_progress_pane_t_ParamLimits

0xeac7,	// (0x00096bb5) mup_progress_pane_cp03_ParamLimits

0x7504,	// (0x0008f5f2) mup3_control_keys_pane_g4_copy1

0xeea3,	// (0x00096f91) mp4_rocker2_pane_ParamLimits

0xeea3,	// (0x00096f91) mp4_rocker2_pane

0x138b,	// (0x00089479) mp4_rocker2_pane_g1

0x1393,	// (0x00089481) mp4_rocker2_pane_g2

0xef11,	// (0x00096fff) mp4_rocker2_pane_g3

0xef19,	// (0x00097007) mp4_rocker2_pane_g4

0xef21,	// (0x0009700f) mp4_rocker2_pane_g5

0x0004,

0xf8ff,	// (0x000979ed) mp4_rocker2_pane_g

0x01f3,	// (0x000882e1) main_camera4_pane

0x01f3,	// (0x000882e1) main_video4_pane

0x776e,	// (0x0008f85c) main_video_tele_dialer_pane_t1_ParamLimits

0x776e,	// (0x0008f85c) main_video_tele_dialer_pane_t1

0x7787,	// (0x0008f875) main_video_tele_dialer_pane_t2_ParamLimits

0x7787,	// (0x0008f875) main_video_tele_dialer_pane_t2

0x0001,

0xf8b9,	// (0x000979a7) main_video_tele_dialer_pane_t_ParamLimits

0xf8b9,	// (0x000979a7) main_video_tele_dialer_pane_t

0x7cea,	// (0x0008fdd8) cam4_autofocus_pane_ParamLimits

0x7cea,	// (0x0008fdd8) cam4_autofocus_pane

0x7d00,	// (0x0008fdee) cam4_image_uncrop_pane_ParamLimits

0x7d00,	// (0x0008fdee) cam4_image_uncrop_pane

0x7d1a,	// (0x0008fe08) cam4_indicators_pane_ParamLimits

0x7d1a,	// (0x0008fe08) cam4_indicators_pane

0x7d45,	// (0x0008fe33) main_camera4_pane_g1_ParamLimits

0x7d45,	// (0x0008fe33) main_camera4_pane_g1

0x7d58,	// (0x0008fe46) main_camera4_pane_g2_ParamLimits

0x7d58,	// (0x0008fe46) main_camera4_pane_g2

0x7d6b,	// (0x0008fe59) main_camera4_pane_g3_ParamLimits

0x7d6b,	// (0x0008fe59) main_camera4_pane_g3

0x7d7e,	// (0x0008fe6c) main_camera4_pane_g4_ParamLimits

0x7d7e,	// (0x0008fe6c) main_camera4_pane_g4

0x7d91,	// (0x0008fe7f) main_camera4_pane_g5_ParamLimits

0x7d91,	// (0x0008fe7f) main_camera4_pane_g5

0x0005,

0xf90a,	// (0x000979f8) main_camera4_pane_g_ParamLimits

0xf90a,	// (0x000979f8) main_camera4_pane_g

0x7db5,	// (0x0008fea3) main_camera4_pane_t1_ParamLimits

0x7db5,	// (0x0008fea3) main_camera4_pane_t1

0xef39,	// (0x00097027) bg_tb_trans_pane_cp06

0xef4f,	// (0x0009703d) cam4_indicators_pane_g1

0xef60,	// (0x0009704e) cam4_indicators_pane_g2

0x0002,

0xf925,	// (0x00097a13) cam4_indicators_pane_g

0xef7e,	// (0x0009706c) cam4_indicators_pane_t1

0x7e2b,	// (0x0008ff19) main_video4_pane_g1_ParamLimits

0x7e2b,	// (0x0008ff19) main_video4_pane_g1

0x7e3e,	// (0x0008ff2c) main_video4_pane_g2_ParamLimits

0x7e3e,	// (0x0008ff2c) main_video4_pane_g2

0x7e52,	// (0x0008ff40) main_video4_pane_g3_ParamLimits

0x7e52,	// (0x0008ff40) main_video4_pane_g3

0x7e66,	// (0x0008ff54) main_video4_pane_g4_ParamLimits

0x7e66,	// (0x0008ff54) main_video4_pane_g4

0x0004,

0xf92c,	// (0x00097a1a) main_video4_pane_g_ParamLimits

0xf92c,	// (0x00097a1a) main_video4_pane_g

0x7e8e,	// (0x0008ff7c) vid4_indicators_pane_ParamLimits

0x7e8e,	// (0x0008ff7c) vid4_indicators_pane

0x7ebe,	// (0x0008ffac) video4_image_uncrop_cif_pane_ParamLimits

0x7ebe,	// (0x0008ffac) video4_image_uncrop_cif_pane

0x7ed8,	// (0x0008ffc6) video4_image_uncrop_nhd_pane_ParamLimits

0x7ed8,	// (0x0008ffc6) video4_image_uncrop_nhd_pane

0x7d00,	// (0x0008fdee) video4_image_uncrop_vga_pane_ParamLimits

0x7d00,	// (0x0008fdee) video4_image_uncrop_vga_pane

0xefa0,	// (0x0009708e) bg_tb_trans_pane_cp07

0x7eec,	// (0x0008ffda) vid4_indicators_pane_g1

0x7ef9,	// (0x0008ffe7) vid4_indicators_pane_g2

0x7f06,	// (0x0008fff4) vid4_indicators_pane_g3

0x0004,

0xf937,	// (0x00097a25) vid4_indicators_pane_g

0x7f2b,	// (0x00090019) vid4_indicators_pane_t1

0x7f3d,	// (0x0009002b) cam4_autofocus_pane_g1

0x7f45,	// (0x00090033) cam4_autofocus_pane_g2

0x7f4d,	// (0x0009003b) cam4_autofocus_pane_g3

0x0002,

0xf942,	// (0x00097a30) cam4_autofocus_pane_g

0x7f55,	// (0x00090043) cam4_autofocus_pane_g3_copy1

0x77b8,	// (0x0008f8a6) video_down_pane_cp_t1

0x77c6,	// (0x0008f8b4) video_down_pane_cp_t2

0x0001,

0xf8be,	// (0x000979ac) video_down_pane_cp_t

0x2796,	// (0x0008a884) popup_vitu2_window_ParamLimits

0x2796,	// (0x0008a884) popup_vitu2_window

0x7f5d,	// (0x0009004b) aid_size_cell2_itu2_ParamLimits

0x7f5d,	// (0x0009004b) aid_size_cell2_itu2

0x7f83,	// (0x00090071) aid_size_cell_itu2_ParamLimits

0x7f83,	// (0x00090071) aid_size_cell_itu2

0x7fdf,	// (0x000900cd) bg_popup_window_pane_cp09_ParamLimits

0x7fdf,	// (0x000900cd) bg_popup_window_pane_cp09

0x7fed,	// (0x000900db) field_vitu2_entry_pane_ParamLimits

0x7fed,	// (0x000900db) field_vitu2_entry_pane

0x8013,	// (0x00090101) grid_vitu2_function_pane_ParamLimits

0x8013,	// (0x00090101) grid_vitu2_function_pane

0x8064,	// (0x00090152) grid_vitu2_itu_pane_ParamLimits

0x8064,	// (0x00090152) grid_vitu2_itu_pane

0x80f7,	// (0x000901e5) cell_vitu2_itu_pane_ParamLimits

0x80f7,	// (0x000901e5) cell_vitu2_itu_pane

0x811b,	// (0x00090209) cell_vitu2_function_pane_ParamLimits

0x811b,	// (0x00090209) cell_vitu2_function_pane

0x139b,	// (0x00089489) bg_popup_call_pane_cp08_ParamLimits

0x139b,	// (0x00089489) bg_popup_call_pane_cp08

0x13b4,	// (0x000894a2) field_vitu2_entry_pane_g1

0x13c0,	// (0x000894ae) field_vitu2_entry_pane_g2

0x0002,

0xf949,	// (0x00097a37) field_vitu2_entry_pane_g

0xce17,	// (0x00094f05) field_vitu2_entry_pane_t1_ParamLimits

0xce17,	// (0x00094f05) field_vitu2_entry_pane_t1

0xce46,	// (0x00094f34) field_vitu2_entry_pane_t2_ParamLimits

0xce46,	// (0x00094f34) field_vitu2_entry_pane_t2

0x0001,

0xf950,	// (0x00097a3e) field_vitu2_entry_pane_t_ParamLimits

0xf950,	// (0x00097a3e) field_vitu2_entry_pane_t

0x815a,	// (0x00090248) bg_button_pane_cp010_ParamLimits

0x815a,	// (0x00090248) bg_button_pane_cp010

0x8168,	// (0x00090256) cell_vitu2_itu_pane_g1

0x8186,	// (0x00090274) cell_vitu2_itu_pane_t1_ParamLimits

0x8186,	// (0x00090274) cell_vitu2_itu_pane_t1

0x247e,	// (0x0008a56c) cell_vitu2_itu_pane_t2_ParamLimits

0x247e,	// (0x0008a56c) cell_vitu2_itu_pane_t2

0x0002,

0xf95a,	// (0x00097a48) cell_vitu2_itu_pane_t_ParamLimits

0xf95a,	// (0x00097a48) cell_vitu2_itu_pane_t

0xefb8,	// (0x000970a6) bg_button_pane_cp011

0x81ec,	// (0x000902da) cell_vitu2_function_pane_g1

0x01f3,	// (0x000882e1) main_myfav_hc_pane

0x7b68,	// (0x0008fc56) popup_image3_note_pane_ParamLimits

0x7b68,	// (0x0008fc56) popup_image3_note_pane

0x7b84,	// (0x0008fc72) popup_image3_tool_bar_pane_ParamLimits

0x7b84,	// (0x0008fc72) popup_image3_tool_bar_pane

0x2502,	// (0x0008a5f0) cell_vitu2_itu_pane_t3_ParamLimits

0x2502,	// (0x0008a5f0) cell_vitu2_itu_pane_t3

0x01f3,	// (0x000882e1) bg_popup_trans_pane

0x13e2,	// (0x000894d0) grid_image3_tool_bar_pane

0x13ec,	// (0x000894da) bg_popup_trans_pane_g1

0x0d94,	// (0x00088e82) bg_popup_trans_pane_g2

0x13f4,	// (0x000894e2) bg_popup_trans_pane_g3

0x13fc,	// (0x000894ea) bg_popup_trans_pane_g4

0x1404,	// (0x000894f2) bg_popup_trans_pane_g5

0x140c,	// (0x000894fa) bg_popup_trans_pane_g6

0x1414,	// (0x00089502) bg_popup_trans_pane_g7

0x141c,	// (0x0008950a) bg_popup_trans_pane_g8

0x0d74,	// (0x00088e62) bg_popup_trans_pane_g9

0x0008,

0xf961,	// (0x00097a4f) bg_popup_trans_pane_g

0x1424,	// (0x00089512) cell_image3_tool_bar_pane_ParamLimits

0x1424,	// (0x00089512) cell_image3_tool_bar_pane

0xcb00,	// (0x00094bee) cell_image3_tool_bar_pane_g1

0x01f3,	// (0x000882e1) bg_popup_trans_pane_cp1

0x1438,	// (0x00089526) popup_image3_note_pane_t1

0x1446,	// (0x00089534) popup_image3_note_pane_t2

0x1454,	// (0x00089542) popup_image3_note_pane_t3

0x0002,

0xf974,	// (0x00097a62) popup_image3_note_pane_t

0x1462,	// (0x00089550) popup_image3_note_pane_t3_copy1

0x8200,	// (0x000902ee) bg_myfav_hc_instruction_pane_ParamLimits

0x8200,	// (0x000902ee) bg_myfav_hc_instruction_pane

0x8214,	// (0x00090302) cell_myfav_contact_pane_ParamLimits

0x8214,	// (0x00090302) cell_myfav_contact_pane

0x8232,	// (0x00090320) cell_myfav_contact_pane_cp1_ParamLimits

0x8232,	// (0x00090320) cell_myfav_contact_pane_cp1

0x824a,	// (0x00090338) cell_myfav_contact_pane_cp2_ParamLimits

0x824a,	// (0x00090338) cell_myfav_contact_pane_cp2

0x8262,	// (0x00090350) cell_myfav_contact_pane_cp3_ParamLimits

0x8262,	// (0x00090350) cell_myfav_contact_pane_cp3

0x8279,	// (0x00090367) cell_myfav_contact_pane_cp4_ParamLimits

0x8279,	// (0x00090367) cell_myfav_contact_pane_cp4

0x8291,	// (0x0009037f) cell_myfav_contact_pane_cp5_ParamLimits

0x8291,	// (0x0009037f) cell_myfav_contact_pane_cp5

0x82a5,	// (0x00090393) cell_myfav_contact_pane_cp6_ParamLimits

0x82a5,	// (0x00090393) cell_myfav_contact_pane_cp6

0x82bb,	// (0x000903a9) cell_myfav_contact_pane_cp7_ParamLimits

0x82bb,	// (0x000903a9) cell_myfav_contact_pane_cp7

0x1470,	// (0x0008955e) listscroll_gen_pane_cp05

0x82d5,	// (0x000903c3) main_myfav_hc_pane_g1_ParamLimits

0x82d5,	// (0x000903c3) main_myfav_hc_pane_g1

0x82ef,	// (0x000903dd) main_myfav_hc_pane_g2_ParamLimits

0x82ef,	// (0x000903dd) main_myfav_hc_pane_g2

0x0002,

0xf97b,	// (0x00097a69) main_myfav_hc_pane_g_ParamLimits

0xf97b,	// (0x00097a69) main_myfav_hc_pane_g

0x8321,	// (0x0009040f) main_myfav_hc_pane_t1_ParamLimits

0x8321,	// (0x0009040f) main_myfav_hc_pane_t1

0x1479,	// (0x00089567) main_myfav_hc_pane_t2_ParamLimits

0x1479,	// (0x00089567) main_myfav_hc_pane_t2

0x148b,	// (0x00089579) main_myfav_hc_pane_t3_ParamLimits

0x148b,	// (0x00089579) main_myfav_hc_pane_t3

0x8338,	// (0x00090426) main_myfav_hc_pane_t4_ParamLimits

0x8338,	// (0x00090426) main_myfav_hc_pane_t4

0x0004,

0xf982,	// (0x00097a70) main_myfav_hc_pane_t_ParamLimits

0xf982,	// (0x00097a70) main_myfav_hc_pane_t

0xcb00,	// (0x00094bee) bg_myfav_hc_instruction_pane_g1

0x149d,	// (0x0008958b) cell_myfav_contact_pane_g1_ParamLimits

0x149d,	// (0x0008958b) cell_myfav_contact_pane_g1

0x149d,	// (0x0008958b) cell_myfav_contact_pane_g2_ParamLimits

0x149d,	// (0x0008958b) cell_myfav_contact_pane_g2

0x14a9,	// (0x00089597) cell_myfav_contact_pane_g3_ParamLimits

0x14a9,	// (0x00089597) cell_myfav_contact_pane_g3

0xce09,	// (0x00094ef7) cell_myfav_contact_pane_g4_ParamLimits

0xce09,	// (0x00094ef7) cell_myfav_contact_pane_g4

0x14b6,	// (0x000895a4) cell_myfav_contact_pane_g5_ParamLimits

0x14b6,	// (0x000895a4) cell_myfav_contact_pane_g5

0x0004,

0xf98d,	// (0x00097a7b) cell_myfav_contact_pane_g_ParamLimits

0xf98d,	// (0x00097a7b) cell_myfav_contact_pane_g

0x8309,	// (0x000903f7) main_myfav_hc_pane_g3_ParamLimits

0x8309,	// (0x000903f7) main_myfav_hc_pane_g3

0x26d9,	// (0x0008a7c7) popup_adpt_find_window

0x8360,	// (0x0009044e) afind_page_pane_ParamLimits

0x8360,	// (0x0009044e) afind_page_pane

0x8375,	// (0x00090463) aid_size_cell_afind_ParamLimits

0x8375,	// (0x00090463) aid_size_cell_afind

0x8393,	// (0x00090481) bg_popup_sub_pane_cp09_ParamLimits

0x8393,	// (0x00090481) bg_popup_sub_pane_cp09

0x83a0,	// (0x0009048e) find_pane_cp01_ParamLimits

0x83a0,	// (0x0009048e) find_pane_cp01

0x14c2,	// (0x000895b0) grid_afind_control_pane_ParamLimits

0x14c2,	// (0x000895b0) grid_afind_control_pane

0x83ad,	// (0x0009049b) grid_afind_pane_ParamLimits

0x83ad,	// (0x0009049b) grid_afind_pane

0x83cf,	// (0x000904bd) cell_afind_pane_ParamLimits

0x83cf,	// (0x000904bd) cell_afind_pane

0xcb00,	// (0x00094bee) afind_page_pane_g1

0x842c,	// (0x0009051a) afind_page_pane_g2

0x8435,	// (0x00090523) afind_page_pane_g3

0x0002,

0xf998,	// (0x00097a86) afind_page_pane_g

0x843e,	// (0x0009052c) afind_page_pane_t1

0x14d6,	// (0x000895c4) cell_afind_grid_control_pane_ParamLimits

0x14d6,	// (0x000895c4) cell_afind_grid_control_pane

0x12ac,	// (0x0008939a) bg_button_pane_cp69_ParamLimits

0x12ac,	// (0x0008939a) bg_button_pane_cp69

0x845e,	// (0x0009054c) cell_afind_pane_g1_ParamLimits

0x845e,	// (0x0009054c) cell_afind_pane_g1

0x846b,	// (0x00090559) cell_afind_pane_t1_ParamLimits

0x846b,	// (0x00090559) cell_afind_pane_t1

0x0b87,	// (0x00088c75) bg_button_pane_cp72

0x14e5,	// (0x000895d3) cell_afind_grid_control_pane_g1

0x5507,	// (0x0008d5f5) aid_image_placing_area_ParamLimits

0x5507,	// (0x0008d5f5) aid_image_placing_area

0x0f7a,	// (0x00089068) field_vitu_entry_pane_g1_ParamLimits

0x0f7a,	// (0x00089068) field_vitu_entry_pane_g1

0x0f86,	// (0x00089074) field_vitu_entry_pane_g2_ParamLimits

0x0f86,	// (0x00089074) field_vitu_entry_pane_g2

0x0001,

0xf849,	// (0x00097937) field_vitu_entry_pane_g_ParamLimits

0xf849,	// (0x00097937) field_vitu_entry_pane_g

0x75cb,	// (0x0008f6b9) cell_vitu_itu_pane_g1_ParamLimits

0x760d,	// (0x0008f6fb) cell_vitu_itu_pane_t3_ParamLimits

0x760d,	// (0x0008f6fb) cell_vitu_itu_pane_t3

0x125c,	// (0x0008934a) mp4_progress_pane_t1_ParamLimits

0x1275,	// (0x00089363) mp4_progress_pane_t2_ParamLimits

0xf8de,	// (0x000979cc) mp4_progress_pane_t_ParamLimits

0x128e,	// (0x0008937c) mup_progress_pane_cp04_ParamLimits

0x834c,	// (0x0009043a) main_myfav_hc_pane_t5_ParamLimits

0x834c,	// (0x0009043a) main_myfav_hc_pane_t5

0x25aa,	// (0x0008a698) aid_zoom_text_primary

0x26d9,	// (0x0008a7c7) popup_adpt_find_window_ParamLimits

0x2796,	// (0x0008a884) main_cam_set_pane

0x7d31,	// (0x0008fe1f) cam4_zoom_pane_ParamLimits

0x7d31,	// (0x0008fe1f) cam4_zoom_pane

0x847d,	// (0x0009056b) main_cam_set_pane_g1_ParamLimits

0x847d,	// (0x0009056b) main_cam_set_pane_g1

0x848b,	// (0x00090579) main_cam_set_pane_g2_ParamLimits

0x848b,	// (0x00090579) main_cam_set_pane_g2

0x0001,

0xf99f,	// (0x00097a8d) main_cam_set_pane_g_ParamLimits

0xf99f,	// (0x00097a8d) main_cam_set_pane_g

0x84ac,	// (0x0009059a) main_cam_set_pane_t1_ParamLimits

0x84ac,	// (0x0009059a) main_cam_set_pane_t1

0x84c7,	// (0x000905b5) main_cset_listscroll_pane_ParamLimits

0x84c7,	// (0x000905b5) main_cset_listscroll_pane

0x84e7,	// (0x000905d5) main_cset_slider_pane_ParamLimits

0x84e7,	// (0x000905d5) main_cset_slider_pane

0x14f6,	// (0x000895e4) main_cset_list_pane_ParamLimits

0x14f6,	// (0x000895e4) main_cset_list_pane

0x1506,	// (0x000895f4) scroll_pane_cp028

0x850d,	// (0x000905fb) aid_area_touch_slider

0x8529,	// (0x00090617) cset_slider_pane

0x8553,	// (0x00090641) main_cset_slider_pane_g1

0x8568,	// (0x00090656) main_cset_slider_pane_g2

0x0011,

0xf9a4,	// (0x00097a92) main_cset_slider_pane_g

0x153f,	// (0x0008962d) main_cset_slider_pane_t1

0x8624,	// (0x00090712) main_cset_slider_pane_t2

0x863e,	// (0x0009072c) main_cset_slider_pane_t3

0x8658,	// (0x00090746) main_cset_slider_pane_t4

0x8672,	// (0x00090760) main_cset_slider_pane_t5

0x868c,	// (0x0009077a) main_cset_slider_pane_t6

0x86a1,	// (0x0009078f) main_cset_slider_pane_t7

0x000e,

0xf9c9,	// (0x00097ab7) main_cset_slider_pane_t

0x87a5,	// (0x00090893) cset_list_set_pane_ParamLimits

0x87a5,	// (0x00090893) cset_list_set_pane

0x87b7,	// (0x000908a5) aid_position_infowindow_above

0x87bf,	// (0x000908ad) aid_position_infowindow_below

0x87c7,	// (0x000908b5) cset_list_set_pane_g1_ParamLimits

0x87c7,	// (0x000908b5) cset_list_set_pane_g1

0xce63,	// (0x00094f51) cset_list_set_pane_g3_ParamLimits

0xce63,	// (0x00094f51) cset_list_set_pane_g3

0x0001,

0xf9e8,	// (0x00097ad6) cset_list_set_pane_g_ParamLimits

0xf9e8,	// (0x00097ad6) cset_list_set_pane_g

0xce72,	// (0x00094f60) cset_list_set_pane_t1_ParamLimits

0xce72,	// (0x00094f60) cset_list_set_pane_t1

0x2796,	// (0x0008a884) list_highlight_pane_cp021_ParamLimits

0x2796,	// (0x0008a884) list_highlight_pane_cp021

0xb30e,	// (0x000933fc) cset_slider_pane_g1

0xb320,	// (0x0009340e) cset_slider_pane_g2

0xb317,	// (0x00093405) cset_slider_pane_g3

0x0002,

0xf9ed,	// (0x00097adb) cset_slider_pane_g

0xefc6,	// (0x000970b4) aid_area_touch_cam4_zoom

0xefce,	// (0x000970bc) cam4_zoom_cont_pane

0xefd6,	// (0x000970c4) cam4_zoom_pane_g1

0xefde,	// (0x000970cc) cam4_zoom_pane_g2

0x87d3,	// (0x000908c1) cam4_zoom_pane_g3

0x0002,

0xf9f4,	// (0x00097ae2) cam4_zoom_pane_g

0xefe6,	// (0x000970d4) cam4_zoom_cont_pane_g1

0xefef,	// (0x000970dd) cam4_zoom_cont_pane_g2

0xeff8,	// (0x000970e6) cam4_zoom_cont_pane_g3

0x0002,

0xf9fb,	// (0x00097ae9) cam4_zoom_cont_pane_g

0x7bf1,	// (0x0008fcdf) call4_image_pane_ParamLimits

0x7bf1,	// (0x0008fcdf) call4_image_pane

0x12b8,	// (0x000893a6) call4_windows_conf_pane_ParamLimits

0x12f9,	// (0x000893e7) popup_call4_audio_in_window_ParamLimits

0x12f9,	// (0x000893e7) popup_call4_audio_in_window

0x01f3,	// (0x000882e1) bg_popup_call2_act_pane_cp02

0x136f,	// (0x0008945d) call4_list_conf_pane

0xcb00,	// (0x00094bee) call4_image_pane_g1

0xcb00,	// (0x00094bee) call4_image_pane_g2

0x0001,

0xf70f,	// (0x000977fd) call4_image_pane_g

0x15df,	// (0x000896cd) list_single_graphic_popup_conf4_pane_ParamLimits

0x15df,	// (0x000896cd) list_single_graphic_popup_conf4_pane

0x01f3,	// (0x000882e1) list_highlight_pane_cp022

0x15f2,	// (0x000896e0) list_single_graphic_popup_conf4_pane_g1

0x46bd,	// (0x0008c7ab) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xfa02,	// (0x00097af0) list_single_graphic_popup_conf4_pane_g

0x15fa,	// (0x000896e8) list_single_graphic_popup_conf4_pane_t1

0x3626,	// (0x0008b714) popup_vtel_slider_window_ParamLimits

0x3626,	// (0x0008b714) popup_vtel_slider_window

0x129a,	// (0x00089388) dialer2_ne_pane_t2_ParamLimits

0x129a,	// (0x00089388) dialer2_ne_pane_t2

0x0001,

0xf8e3,	// (0x000979d1) dialer2_ne_pane_t_ParamLimits

0xf8e3,	// (0x000979d1) dialer2_ne_pane_t

0xc8e5,	// (0x000949d3) bg_popup_sub_pane_cp010_ParamLimits

0xc8e5,	// (0x000949d3) bg_popup_sub_pane_cp010

0x87db,	// (0x000908c9) popup_vtel_slider_window_g1_ParamLimits

0x87db,	// (0x000908c9) popup_vtel_slider_window_g1

0x87ee,	// (0x000908dc) popup_vtel_slider_window_g2_ParamLimits

0x87ee,	// (0x000908dc) popup_vtel_slider_window_g2

0x0003,

0xfa07,	// (0x00097af5) popup_vtel_slider_window_g_ParamLimits

0xfa07,	// (0x00097af5) popup_vtel_slider_window_g

0x8844,	// (0x00090932) vtel_slider_pane_ParamLimits

0x8844,	// (0x00090932) vtel_slider_pane

0x8866,	// (0x00090954) vtel_slider_pane_g1_ParamLimits

0x8866,	// (0x00090954) vtel_slider_pane_g1

0x887a,	// (0x00090968) vtel_slider_pane_g2_ParamLimits

0x887a,	// (0x00090968) vtel_slider_pane_g2

0x8892,	// (0x00090980) vtel_slider_pane_g3_ParamLimits

0x8892,	// (0x00090980) vtel_slider_pane_g3

0x8866,	// (0x00090954) vtel_slider_pane_g4_ParamLimits

0x8866,	// (0x00090954) vtel_slider_pane_g4

0x88a8,	// (0x00090996) vtel_slider_pane_g5_ParamLimits

0x88a8,	// (0x00090996) vtel_slider_pane_g5

0x0004,

0xfa10,	// (0x00097afe) vtel_slider_pane_g_ParamLimits

0xfa10,	// (0x00097afe) vtel_slider_pane_g

0x01f3,	// (0x000882e1) main_gallery2_pane

0x7faf,	// (0x0009009d) aid_size_row_itut2_dropdow_list_ParamLimits

0x7faf,	// (0x0009009d) aid_size_row_itut2_dropdow_list

0x803b,	// (0x00090129) grid_vitu2_function_top_pane_ParamLimits

0x803b,	// (0x00090129) grid_vitu2_function_top_pane

0x80a0,	// (0x0009018e) popup_vitu2_dropdown_list_window_ParamLimits

0x80a0,	// (0x0009018e) popup_vitu2_dropdown_list_window

0x80c9,	// (0x000901b7) popup_vitu2_match_list_window

0x88be,	// (0x000909ac) cell_vitu2_function_top_pane_ParamLimits

0x88be,	// (0x000909ac) cell_vitu2_function_top_pane

0x88dc,	// (0x000909ca) cell_vitu2_function_top_pane_cp01_ParamLimits

0x88dc,	// (0x000909ca) cell_vitu2_function_top_pane_cp01

0x88fa,	// (0x000909e8) cell_vitu2_function_top_wide_pane_ParamLimits

0x88fa,	// (0x000909e8) cell_vitu2_function_top_wide_pane

0xefb8,	// (0x000970a6) bg_button_pane_cp012

0x8918,	// (0x00090a06) cell_vitu2_function_top_pane_g1

0xf001,	// (0x000970ef) bg_button_pane_cp013_ParamLimits

0xf001,	// (0x000970ef) bg_button_pane_cp013

0x892c,	// (0x00090a1a) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x892c,	// (0x00090a1a) cell_vitu2_function_top_wide_pane_g1

0xefb8,	// (0x000970a6) bg_popup_sub_pane_cp20

0x8944,	// (0x00090a32) list_vitu2_match_list_pane

0x13ec,	// (0x000894da) bg_popup_sub_pane_cp20_g1

0x13f4,	// (0x000894e2) bg_popup_sub_pane_cp20_g2

0x0d94,	// (0x00088e82) bg_popup_sub_pane_cp20_g3

0x13fc,	// (0x000894ea) bg_popup_sub_pane_cp20_g4

0x0d74,	// (0x00088e62) bg_popup_sub_pane_cp20_g5

0xce95,	// (0x00094f83) bg_popup_sub_pane_cp20_g6

0x140c,	// (0x000894fa) bg_popup_sub_pane_cp20_g7

0x1414,	// (0x00089502) bg_popup_sub_pane_cp20_g8

0x141c,	// (0x0008950a) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa1b,	// (0x00097b09) bg_popup_sub_pane_cp20_g

0xf01d,	// (0x0009710b) list_vitu2_match_list_item_pane_ParamLimits

0xf01d,	// (0x0009710b) list_vitu2_match_list_item_pane

0xf02f,	// (0x0009711d) list_vitu2_match_list_item_pane_t1

0xb015,	// (0x00093103) bg_popup_sub_pane_cp21

0xf03d,	// (0x0009712b) grid_vitu2_dropdown_list_pane

0x8993,	// (0x00090a81) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x8993,	// (0x00090a81) cell_vitu2_dropdown_list_char_pane

0x89b4,	// (0x00090aa2) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x89b4,	// (0x00090aa2) cell_vitu2_dropdown_list_ctrl_pane

0xceb5,	// (0x00094fa3) cell_vitu2_dropdown_list_char_pane_g1

0xcebe,	// (0x00094fac) cell_vitu2_dropdown_list_char_pane_g2

0xcec7,	// (0x00094fb5) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa38,	// (0x00097b26) cell_vitu2_dropdown_list_char_pane_g

0x89e0,	// (0x00090ace) cell_vitu2_dropdown_list_char_pane_t1

0x89ee,	// (0x00090adc) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x89ee,	// (0x00090adc) cell_vitu2_dropdown_list_ctrl_pane_g1

0x89fb,	// (0x00090ae9) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x89fb,	// (0x00090ae9) cell_vitu2_dropdown_list_ctrl_pane_g2

0x8a08,	// (0x00090af6) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x8a08,	// (0x00090af6) cell_vitu2_dropdown_list_ctrl_pane_g3

0x8a15,	// (0x00090b03) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x8a15,	// (0x00090b03) cell_vitu2_dropdown_list_ctrl_pane_g4

0xef39,	// (0x00097027) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xef39,	// (0x00097027) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa3f,	// (0x00097b2d) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa3f,	// (0x00097b2d) cell_vitu2_dropdown_list_ctrl_pane_g

0x8a31,	// (0x00090b1f) aid_size_cell_gallery2_ParamLimits

0x8a31,	// (0x00090b1f) aid_size_cell_gallery2

0x8a47,	// (0x00090b35) grid_gallery2_pane_ParamLimits

0x8a47,	// (0x00090b35) grid_gallery2_pane

0x8a5b,	// (0x00090b49) scroll_pane_cp029_ParamLimits

0x8a5b,	// (0x00090b49) scroll_pane_cp029

0x8a67,	// (0x00090b55) cell_gallery2_pane_ParamLimits

0x8a67,	// (0x00090b55) cell_gallery2_pane

0xced0,	// (0x00094fbe) cell_gallery2_pane_g2

0x8a9d,	// (0x00090b8b) cell_gallery2_pane_g3

0xceda,	// (0x00094fc8) cell_gallery2_pane_g4

0xcee2,	// (0x00094fd0) cell_gallery2_pane_g5

0xb1b8,	// (0x000932a6) grid_highlight_pane_cp10

0x80c9,	// (0x000901b7) popup_vitu2_match_list_window_ParamLimits

0x80e0,	// (0x000901ce) popup_vitu2_query_window_ParamLimits

0x80e0,	// (0x000901ce) popup_vitu2_query_window

0xb015,	// (0x00093103) bg_vitu2_candi_button_pane

0xceb5,	// (0x00094fa3) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xcebe,	// (0x00094fac) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xcec7,	// (0x00094fb5) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x8aa5,	// (0x00090b93) bg_button_pane_cp015

0x8aaf,	// (0x00090b9d) bg_button_pane_cp016

0x8ab9,	// (0x00090ba7) bg_button_pane_cp017

0x2796,	// (0x0008a884) bg_popup_sub_pane_cp22

0xceea,	// (0x00094fd8) popup_vitu2_query_window_g1

0x8ae1,	// (0x00090bcf) popup_vitu2_query_window_g2

0x0001,

0xfa4a,	// (0x00097b38) popup_vitu2_query_window_g

0x8aef,	// (0x00090bdd) popup_vitu2_query_window_t1_ParamLimits

0x8aef,	// (0x00090bdd) popup_vitu2_query_window_t1

0x8b17,	// (0x00090c05) popup_vitu2_query_window_t2_ParamLimits

0x8b17,	// (0x00090c05) popup_vitu2_query_window_t2

0x8b29,	// (0x00090c17) popup_vitu2_query_window_t3_ParamLimits

0x8b29,	// (0x00090c17) popup_vitu2_query_window_t3

0x8b51,	// (0x00090c3f) popup_vitu2_query_window_t4_ParamLimits

0x8b51,	// (0x00090c3f) popup_vitu2_query_window_t4

0x8b65,	// (0x00090c53) popup_vitu2_query_window_t5_ParamLimits

0x8b65,	// (0x00090c53) popup_vitu2_query_window_t5

0x0004,

0xfa4f,	// (0x00097b3d) popup_vitu2_query_window_t_ParamLimits

0xfa4f,	// (0x00097b3d) popup_vitu2_query_window_t

0x14ee,	// (0x000895dc) main_cset_text_pane

0x850d,	// (0x000905fb) aid_area_touch_slider_ParamLimits

0x8529,	// (0x00090617) cset_slider_pane_ParamLimits

0x8553,	// (0x00090641) main_cset_slider_pane_g1_ParamLimits

0x8568,	// (0x00090656) main_cset_slider_pane_g2_ParamLimits

0x150f,	// (0x000895fd) main_cset_slider_pane_g3_ParamLimits

0x150f,	// (0x000895fd) main_cset_slider_pane_g3

0x857d,	// (0x0009066b) main_cset_slider_pane_g4_ParamLimits

0x857d,	// (0x0009066b) main_cset_slider_pane_g4

0x858c,	// (0x0009067a) main_cset_slider_pane_g5_ParamLimits

0x858c,	// (0x0009067a) main_cset_slider_pane_g5

0x8598,	// (0x00090686) main_cset_slider_pane_g6_ParamLimits

0x8598,	// (0x00090686) main_cset_slider_pane_g6

0xf9a4,	// (0x00097a92) main_cset_slider_pane_g_ParamLimits

0x153f,	// (0x0008962d) main_cset_slider_pane_t1_ParamLimits

0x8624,	// (0x00090712) main_cset_slider_pane_t2_ParamLimits

0x863e,	// (0x0009072c) main_cset_slider_pane_t3_ParamLimits

0x8658,	// (0x00090746) main_cset_slider_pane_t4_ParamLimits

0x8672,	// (0x00090760) main_cset_slider_pane_t5_ParamLimits

0x868c,	// (0x0009077a) main_cset_slider_pane_t6_ParamLimits

0x86a1,	// (0x0009078f) main_cset_slider_pane_t7_ParamLimits

0x86cb,	// (0x000907b9) main_cset_slider_pane_t8_ParamLimits

0x86cb,	// (0x000907b9) main_cset_slider_pane_t8

0x86f3,	// (0x000907e1) main_cset_slider_pane_t9_ParamLimits

0x86f3,	// (0x000907e1) main_cset_slider_pane_t9

0x871b,	// (0x00090809) main_cset_slider_pane_t10_ParamLimits

0x871b,	// (0x00090809) main_cset_slider_pane_t10

0x8743,	// (0x00090831) main_cset_slider_pane_t11_ParamLimits

0x8743,	// (0x00090831) main_cset_slider_pane_t11

0x876b,	// (0x00090859) main_cset_slider_pane_t12_ParamLimits

0x876b,	// (0x00090859) main_cset_slider_pane_t12

0x8788,	// (0x00090876) main_cset_slider_pane_t13_ParamLimits

0x8788,	// (0x00090876) main_cset_slider_pane_t13

0xf9c9,	// (0x00097ab7) main_cset_slider_pane_t_ParamLimits

0x01f3,	// (0x000882e1) bg_popup_sub_pane_cp011

0xcef6,	// (0x00094fe4) main_cset_text_pane_g1

0xcefe,	// (0x00094fec) main_cset_text_pane_t1

0xcf0c,	// (0x00094ffa) main_cset_text_pane_t2

0xcf1a,	// (0x00095008) main_cset_text_pane_t3

0xcf28,	// (0x00095016) main_cset_text_pane_t4

0xcf36,	// (0x00095024) main_cset_text_pane_t5

0xcf44,	// (0x00095032) main_cset_text_pane_t6

0xcf52,	// (0x00095040) main_cset_text_pane_t7

0x0006,

0xfa5a,	// (0x00097b48) main_cset_text_pane_t

0x01f3,	// (0x000882e1) main_cam4_burst_pane

0x01f3,	// (0x000882e1) main_cam5_pane

0x844c,	// (0x0009053a) bg_button_pane_cp019

0x8455,	// (0x00090543) bg_button_pane_cp020

0x151b,	// (0x00089609) main_cset_slider_pane_g7_ParamLimits

0x151b,	// (0x00089609) main_cset_slider_pane_g7

0x1527,	// (0x00089615) main_cset_slider_pane_g8_ParamLimits

0x1527,	// (0x00089615) main_cset_slider_pane_g8

0x85ac,	// (0x0009069a) main_cset_slider_pane_g9_ParamLimits

0x85ac,	// (0x0009069a) main_cset_slider_pane_g9

0x85b8,	// (0x000906a6) main_cset_slider_pane_g10_ParamLimits

0x85b8,	// (0x000906a6) main_cset_slider_pane_g10

0x85c4,	// (0x000906b2) main_cset_slider_pane_g11_ParamLimits

0x85c4,	// (0x000906b2) main_cset_slider_pane_g11

0x85d0,	// (0x000906be) main_cset_slider_pane_g12_ParamLimits

0x85d0,	// (0x000906be) main_cset_slider_pane_g12

0x85dc,	// (0x000906ca) main_cset_slider_pane_g13_ParamLimits

0x85dc,	// (0x000906ca) main_cset_slider_pane_g13

0x85e8,	// (0x000906d6) main_cset_slider_pane_g14_ParamLimits

0x85e8,	// (0x000906d6) main_cset_slider_pane_g14

0x85f4,	// (0x000906e2) main_cset_slider_pane_g15_ParamLimits

0x85f4,	// (0x000906e2) main_cset_slider_pane_g15

0x156d,	// (0x0008965b) main_cset_slider_pane_t14_ParamLimits

0x156d,	// (0x0008965b) main_cset_slider_pane_t14

0x15a6,	// (0x00089694) main_cset_slider_pane_t15_ParamLimits

0x15a6,	// (0x00089694) main_cset_slider_pane_t15

0x8b79,	// (0x00090c67) aid_cam4_burst_size_cell_ParamLimits

0x8b79,	// (0x00090c67) aid_cam4_burst_size_cell

0x8b99,	// (0x00090c87) grid_cam4_burst_pane_ParamLimits

0x8b99,	// (0x00090c87) grid_cam4_burst_pane

0x8bd1,	// (0x00090cbf) linegrid_cam4_burst_pane_ParamLimits

0x8bd1,	// (0x00090cbf) linegrid_cam4_burst_pane

0x008c,	// (0x0008817a) scroll_pane_cp30_ParamLimits

0x008c,	// (0x0008817a) scroll_pane_cp30

0x8bf5,	// (0x00090ce3) cell_cam4_burst_pane_ParamLimits

0x8bf5,	// (0x00090ce3) cell_cam4_burst_pane

0xcf60,	// (0x0009504e) linegrid_cam4_burst_pane_g1_ParamLimits

0xcf60,	// (0x0009504e) linegrid_cam4_burst_pane_g1

0x8c42,	// (0x00090d30) linegrid_cam4_burst_pane_g2_ParamLimits

0x8c42,	// (0x00090d30) linegrid_cam4_burst_pane_g2

0xcf6d,	// (0x0009505b) linegrid_cam4_burst_pane_g3_ParamLimits

0xcf6d,	// (0x0009505b) linegrid_cam4_burst_pane_g3

0x0002,

0xfa69,	// (0x00097b57) linegrid_cam4_burst_pane_g_ParamLimits

0xfa69,	// (0x00097b57) linegrid_cam4_burst_pane_g

0x8c53,	// (0x00090d41) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x8c53,	// (0x00090d41) linegrid_cam4_burst_pane_g3_copy1

0xcf7a,	// (0x00095068) linegrid_cam4_burst_pane_g4_ParamLimits

0xcf7a,	// (0x00095068) linegrid_cam4_burst_pane_g4

0x8c6d,	// (0x00090d5b) linegrid_cam4_burst_pane_g5_ParamLimits

0x8c6d,	// (0x00090d5b) linegrid_cam4_burst_pane_g5

0x8c7e,	// (0x00090d6c) linegrid_cam4_burst_pane_g6_ParamLimits

0x8c7e,	// (0x00090d6c) linegrid_cam4_burst_pane_g6

0xcf87,	// (0x00095075) linegrid_cam4_burst_pane_g7_ParamLimits

0xcf87,	// (0x00095075) linegrid_cam4_burst_pane_g7

0x8c95,	// (0x00090d83) cell_cam4_burst_pane_g1

0xcfa0,	// (0x0009508e) main_cam5_pane_t1_ParamLimits

0xcfa0,	// (0x0009508e) main_cam5_pane_t1

0xcfb2,	// (0x000950a0) main_cam5_pane_t2_ParamLimits

0xcfb2,	// (0x000950a0) main_cam5_pane_t2

0xcfc4,	// (0x000950b2) main_cam5_pane_t3_ParamLimits

0xcfc4,	// (0x000950b2) main_cam5_pane_t3

0xcfd6,	// (0x000950c4) main_cam5_pane_t4_ParamLimits

0xcfd6,	// (0x000950c4) main_cam5_pane_t4

0xcfee,	// (0x000950dc) main_cam5_pane_t5_ParamLimits

0xcfee,	// (0x000950dc) main_cam5_pane_t5

0xd002,	// (0x000950f0) main_cam5_pane_t6_ParamLimits

0xd002,	// (0x000950f0) main_cam5_pane_t6

0xd016,	// (0x00095104) main_cam5_pane_t7_ParamLimits

0xd016,	// (0x00095104) main_cam5_pane_t7

0xd028,	// (0x00095116) main_cam5_pane_t8_ParamLimits

0xd028,	// (0x00095116) main_cam5_pane_t8

0xd044,	// (0x00095132) main_cam5_pane_t9_ParamLimits

0xd044,	// (0x00095132) main_cam5_pane_t9

0xd056,	// (0x00095144) main_cam5_pane_t10_ParamLimits

0xd056,	// (0x00095144) main_cam5_pane_t10

0xd068,	// (0x00095156) main_cam5_pane_t11_ParamLimits

0xd068,	// (0x00095156) main_cam5_pane_t11

0xd07a,	// (0x00095168) main_cam5_pane_t12_ParamLimits

0xd07a,	// (0x00095168) main_cam5_pane_t12

0xd08f,	// (0x0009517d) main_cam5_pane_t13_ParamLimits

0xd08f,	// (0x0009517d) main_cam5_pane_t13

0x000c,

0xfa75,	// (0x00097b63) main_cam5_pane_t_ParamLimits

0xfa75,	// (0x00097b63) main_cam5_pane_t

0x275c,	// (0x0008a84a) popup_scut_keymap_window_ParamLimits

0x275c,	// (0x0008a84a) popup_scut_keymap_window

0x8ca8,	// (0x00090d96) aid_size_cell_brow_shortcut

0xb1b8,	// (0x000932a6) bg_popup_window_pane_cp010

0x8cb4,	// (0x00090da2) grid_scut_pane

0x8cc0,	// (0x00090dae) cell_scut_pane_ParamLimits

0x8cc0,	// (0x00090dae) cell_scut_pane

0x8cd7,	// (0x00090dc5) cell_scut_pane_g1

0xd0ac,	// (0x0009519a) cell_scut_pane_t1

0xd0bb,	// (0x000951a9) cell_scut_pane_t2

0x8ce0,	// (0x00090dce) cell_scut_pane_t3

0x0002,

0xfa90,	// (0x00097b7e) cell_scut_pane_t

0x6b28,	// (0x0008ec16) main_mup3_pane_g8_ParamLimits

0x6b28,	// (0x0008ec16) main_mup3_pane_g8

0x7fc7,	// (0x000900b5) area_vitu2_query_pane_ParamLimits

0x7fc7,	// (0x000900b5) area_vitu2_query_pane

0x8ac3,	// (0x00090bb1) input_focus_pane_cp08

0xd0ca,	// (0x000951b8) area_vitu2_query_pane_g1

0x8cee,	// (0x00090ddc) area_vitu2_query_pane_g2

0x0001,

0xfa97,	// (0x00097b85) area_vitu2_query_pane_g

0x8cff,	// (0x00090ded) area_vitu2_query_pane_t1_ParamLimits

0x8cff,	// (0x00090ded) area_vitu2_query_pane_t1

0x8d13,	// (0x00090e01) area_vitu2_query_pane_t2_ParamLimits

0x8d13,	// (0x00090e01) area_vitu2_query_pane_t2

0x8d27,	// (0x00090e15) area_vitu2_query_pane_t3_ParamLimits

0x8d27,	// (0x00090e15) area_vitu2_query_pane_t3

0xd0d6,	// (0x000951c4) area_vitu2_query_pane_t4_ParamLimits

0xd0d6,	// (0x000951c4) area_vitu2_query_pane_t4

0xd0fe,	// (0x000951ec) area_vitu2_query_pane_t5_ParamLimits

0xd0fe,	// (0x000951ec) area_vitu2_query_pane_t5

0xd126,	// (0x00095214) area_vitu2_query_pane_t6_ParamLimits

0xd126,	// (0x00095214) area_vitu2_query_pane_t6

0x0006,

0xfa9c,	// (0x00097b8a) area_vitu2_query_pane_t_ParamLimits

0xfa9c,	// (0x00097b8a) area_vitu2_query_pane_t

0x8d4f,	// (0x00090e3d) bg_button_pane_cp018

0x8d5d,	// (0x00090e4b) bg_button_pane_cp021

0x8d69,	// (0x00090e57) bg_button_pane_cp022

0x8d78,	// (0x00090e66) input_focus_pane_cp09

0x4a18,	// (0x0008cb06) aid_size_touch_mv_arrow_left

0x4a41,	// (0x0008cb2f) aid_size_touch_mv_arrow_right

0x860c,	// (0x000906fa) main_cset_slider_pane_g16_ParamLimits

0x860c,	// (0x000906fa) main_cset_slider_pane_g16

0x8618,	// (0x00090706) main_cset_slider_pane_g17_ParamLimits

0x8618,	// (0x00090706) main_cset_slider_pane_g17

0x8c95,	// (0x00090d83) cell_cam4_burst_pane_g1_ParamLimits

0x01f3,	// (0x000882e1) compa_mode_pane

0x87fe,	// (0x000908ec) popup_vtel_slider_window_g3_ParamLimits

0x87fe,	// (0x000908ec) popup_vtel_slider_window_g3

0x8815,	// (0x00090903) popup_vtel_slider_window_g4_ParamLimits

0x8815,	// (0x00090903) popup_vtel_slider_window_g4

0x882c,	// (0x0009091a) popup_vtel_slider_window_t1_ParamLimits

0x882c,	// (0x0009091a) popup_vtel_slider_window_t1

0x01f3,	// (0x000882e1) main_cl_pane

0xc622,	// (0x00094710) popup_imed_adjust2_window_ParamLimits

0xc5fa,	// (0x000946e8) bg_tb_trans_pane_cp05_ParamLimits

0x0eaf,	// (0x00088f9d) popup_imed_adjust2_window_g1_ParamLimits

0x0ebe,	// (0x00088fac) popup_imed_adjust2_window_g2_ParamLimits

0x0ebe,	// (0x00088fac) popup_imed_adjust2_window_g2

0x0eca,	// (0x00088fb8) popup_imed_adjust2_window_g3_ParamLimits

0x0eca,	// (0x00088fb8) popup_imed_adjust2_window_g3

0x0002,

0xf80d,	// (0x000978fb) popup_imed_adjust2_window_g_ParamLimits

0xf80d,	// (0x000978fb) popup_imed_adjust2_window_g

0x0ed6,	// (0x00088fc4) popup_imed_adjust2_window_t1_ParamLimits

0x0eee,	// (0x00088fdc) slider_imed_adjust_pane_ParamLimits

0x0f02,	// (0x00088ff0) slider_imed_adjust_pane_g1_ParamLimits

0x0f12,	// (0x00089000) slider_imed_adjust_pane_g2_ParamLimits

0x0f22,	// (0x00089010) slider_imed_adjust_pane_g3_ParamLimits

0x0f33,	// (0x00089021) slider_imed_adjust_pane_g4_ParamLimits

0xf814,	// (0x00097902) slider_imed_adjust_pane_g_ParamLimits

0x7cd2,	// (0x0008fdc0) aid_touch_area_cam4_ParamLimits

0x7cd2,	// (0x0008fdc0) aid_touch_area_cam4

0xef29,	// (0x00097017) battery_pane_cp01

0x7da2,	// (0x0008fe90) main_camera4_pane_g6_ParamLimits

0x7da2,	// (0x0008fe90) main_camera4_pane_g6

0x7dcc,	// (0x0008feba) main_camera4_pane_t2_ParamLimits

0x7dcc,	// (0x0008feba) main_camera4_pane_t2

0x0001,

0xf917,	// (0x00097a05) main_camera4_pane_t_ParamLimits

0xf917,	// (0x00097a05) main_camera4_pane_t

0x7e13,	// (0x0008ff01) aid_touch_area_vid4_ParamLimits

0x7e13,	// (0x0008ff01) aid_touch_area_vid4

0x7e7a,	// (0x0008ff68) main_video4_pane_g5_ParamLimits

0x7e7a,	// (0x0008ff68) main_video4_pane_g5

0x7ea5,	// (0x0008ff93) vid4_progress_pane_ParamLimits

0x7ea5,	// (0x0008ff93) vid4_progress_pane

0x1533,	// (0x00089621) main_cset_slider_pane_g18_ParamLimits

0x1533,	// (0x00089621) main_cset_slider_pane_g18

0xcf94,	// (0x00095082) cell_cam4_burst_pane_g2_ParamLimits

0xcf94,	// (0x00095082) cell_cam4_burst_pane_g2

0x0001,

0xfa70,	// (0x00097b5e) cell_cam4_burst_pane_g_ParamLimits

0xfa70,	// (0x00097b5e) cell_cam4_burst_pane_g

0x0998,	// (0x00088a86) bg_cl_pane_ParamLimits

0x0998,	// (0x00088a86) bg_cl_pane

0x8d87,	// (0x00090e75) cl_header_pane_ParamLimits

0x8d87,	// (0x00090e75) cl_header_pane

0x8d9b,	// (0x00090e89) cl_listscroll_pane_ParamLimits

0x8d9b,	// (0x00090e89) cl_listscroll_pane

0xd172,	// (0x00095260) bg_cl_pane_g1

0xd17a,	// (0x00095268) bg_cl_pane_g2

0xd182,	// (0x00095270) bg_cl_pane_g3

0xd18a,	// (0x00095278) bg_cl_pane_g4

0xd192,	// (0x00095280) bg_cl_pane_g5

0xd19a,	// (0x00095288) bg_cl_pane_g6

0xd1a2,	// (0x00095290) bg_cl_pane_g7

0xd1aa,	// (0x00095298) bg_cl_pane_g8

0xd1b2,	// (0x000952a0) bg_cl_pane_g9

0x0008,

0xfaab,	// (0x00097b99) bg_cl_pane_g

0x8dab,	// (0x00090e99) aid_height_cl_leading_ParamLimits

0x8dab,	// (0x00090e99) aid_height_cl_leading

0x8db7,	// (0x00090ea5) aid_height_cl_text_ParamLimits

0x8db7,	// (0x00090ea5) aid_height_cl_text

0x2796,	// (0x0008a884) bg_cl_header_pane_ParamLimits

0x2796,	// (0x0008a884) bg_cl_header_pane

0x8dd6,	// (0x00090ec4) cl_header_pane_g1_ParamLimits

0x8dd6,	// (0x00090ec4) cl_header_pane_g1

0x8dec,	// (0x00090eda) cl_header_pane_t1_ParamLimits

0x8dec,	// (0x00090eda) cl_header_pane_t1

0xd1ba,	// (0x000952a8) cl_list_pane

0x1506,	// (0x000895f4) hc_scroll_pane_cp01

0x0d74,	// (0x00088e62) bg_cl_header_pane_g1

0x13ec,	// (0x000894da) bg_cl_header_pane_g2

0x0d94,	// (0x00088e82) bg_cl_header_pane_g3

0x13fc,	// (0x000894ea) bg_cl_header_pane_g4

0x13f4,	// (0x000894e2) bg_cl_header_pane_g5

0xce95,	// (0x00094f83) bg_cl_header_pane_g6

0x1414,	// (0x00089502) bg_cl_header_pane_g7

0x141c,	// (0x0008950a) bg_cl_header_pane_g8

0x140c,	// (0x000894fa) bg_cl_header_pane_g9

0x0008,

0xfabe,	// (0x00097bac) bg_cl_header_pane_g

0x8e05,	// (0x00090ef3) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x8e05,	// (0x00090ef3) hc_cl_list_double_graphic_heading_pane

0x8e16,	// (0x00090f04) hc_cl_list_single_graphic_pane_ParamLimits

0x8e16,	// (0x00090f04) hc_cl_list_single_graphic_pane

0x8e2c,	// (0x00090f1a) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x8e2c,	// (0x00090f1a) hc_cl_list_single_graphic_pane_g1

0x8e38,	// (0x00090f26) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x8e38,	// (0x00090f26) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfad1,	// (0x00097bbf) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfad1,	// (0x00097bbf) hc_cl_list_single_graphic_pane_g

0x8e4c,	// (0x00090f3a) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x8e4c,	// (0x00090f3a) hc_cl_list_single_graphic_pane_t1

0x8e2c,	// (0x00090f1a) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x8e2c,	// (0x00090f1a) hc_cl_list_double_graphic_heading_pane_g1

0x8e61,	// (0x00090f4f) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x8e61,	// (0x00090f4f) hc_cl_list_double_graphic_heading_pane_g2

0x8e75,	// (0x00090f63) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x8e75,	// (0x00090f63) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfad6,	// (0x00097bc4) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfad6,	// (0x00097bc4) hc_cl_list_double_graphic_heading_pane_g

0x8e89,	// (0x00090f77) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x8e89,	// (0x00090f77) hc_cl_list_double_graphic_heading_pane_t1

0x8e9e,	// (0x00090f8c) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x8e9e,	// (0x00090f8c) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfadd,	// (0x00097bcb) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfadd,	// (0x00097bcb) hc_cl_list_double_graphic_heading_pane_t

0xf04d,	// (0x0009713b) vid4_progress_pane_g1

0xf05d,	// (0x0009714b) vid4_progress_pane_g2

0x42c4,	// (0x0008c3b2) vid4_progress_pane_g3

0xf06d,	// (0x0009715b) vid4_progress_pane_g4

0x0004,

0xfae2,	// (0x00097bd0) vid4_progress_pane_g

0xf08b,	// (0x00097179) vid4_progress_pane_t1

0xf0a0,	// (0x0009718e) vid4_progress_pane_t2

0x0002,

0xfaed,	// (0x00097bdb) vid4_progress_pane_t

0xf0cb,	// (0x000971b9) wait_bar_pane_cp07

0xc8f3,	// (0x000949e1) blid_firmament_pane_ParamLimits

0xc936,	// (0x00094a24) popup_blid_sat_info2_window_g1

0xc95a,	// (0x00094a48) popup_blid_sat_info2_window_t3

0xc968,	// (0x00094a56) popup_blid_sat_info2_window_t4

0xc976,	// (0x00094a64) popup_blid_sat_info2_window_t5

0xc984,	// (0x00094a72) popup_blid_sat_info2_window_t6

0xc994,	// (0x00094a82) popup_blid_sat_info2_window_t7

0xc9a2,	// (0x00094a90) popup_blid_sat_info2_window_t8

0xc9b0,	// (0x00094a9e) popup_blid_sat_info2_window_t9

0xc9be,	// (0x00094aac) popup_blid_sat_info2_window_t10

0xca80,	// (0x00094b6e) aid_firma_cardinal_ParamLimits

0xca94,	// (0x00094b82) blid_firmament_pane_t1_ParamLimits

0xcaab,	// (0x00094b99) blid_firmament_pane_t2_ParamLimits

0xcac2,	// (0x00094bb0) blid_firmament_pane_t3_ParamLimits

0xcad9,	// (0x00094bc7) blid_firmament_pane_t4_ParamLimits

0xf706,	// (0x000977f4) blid_firmament_pane_t_ParamLimits

0xcaf0,	// (0x00094bde) blid_sat_info_pane_ParamLimits

0x2796,	// (0x0008a884) main_cam_set_pane_ParamLimits

0x7385,	// (0x0008f473) aid_size_cell_colour_35_ParamLimits

0x73a5,	// (0x0008f493) aid_size_cell_colour_112_ParamLimits

0x73c5,	// (0x0008f4b3) aid_size_cell_effect_ParamLimits

0xc5fa,	// (0x000946e8) bg_tb_trans_pane_cp02_ParamLimits

0x423e,	// (0x0008c32c) heading_imed_pane_ParamLimits

0x73e5,	// (0x0008f4d3) listscroll_imed_pane_ParamLimits

0xbc2c,	// (0x00093d1a) popup_call2_audio_first_window_g5_ParamLimits

0xbc2c,	// (0x00093d1a) popup_call2_audio_first_window_g5

0x797d,	// (0x0008fa6b) aid_size_touch_image3_arrow_left_ParamLimits

0x797d,	// (0x0008fa6b) aid_size_touch_image3_arrow_left

0x79a9,	// (0x0008fa97) aid_size_touch_image3_arrow_right_ParamLimits

0x79a9,	// (0x0008fa97) aid_size_touch_image3_arrow_right

0xf0b6,	// (0x000971a4) vid4_progress_pane_t3

0x76f8,	// (0x0008f7e6) main_hwr_training_symbol_option_pane_ParamLimits

0x76f8,	// (0x0008f7e6) main_hwr_training_symbol_option_pane

0x119c,	// (0x0008928a) popup_hwr_training_preview_window_ParamLimits

0x119c,	// (0x0008928a) popup_hwr_training_preview_window

0x7718,	// (0x0008f806) hwr_training_navi_pane_g5_ParamLimits

0x7718,	// (0x0008f806) hwr_training_navi_pane_g5

0x13da,	// (0x000894c8) popup_char_count_window

0xefb8,	// (0x000970a6) bg_popup_sub_pane_cp20_ParamLimits

0x8944,	// (0x00090a32) list_vitu2_match_list_pane_ParamLimits

0x8953,	// (0x00090a41) vitu2_page_scroll_pane_ParamLimits

0x8953,	// (0x00090a41) vitu2_page_scroll_pane

0xd21d,	// (0x0009530b) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd21d,	// (0x0009530b) list_single_hwr_training_symbol_option_pane

0xd230,	// (0x0009531e) list_single_hwr_training_symbol_option_pane_g1

0xd238,	// (0x00095326) list_single_hwr_training_symbol_option_pane_t1

0xd246,	// (0x00095334) bg_button_pane_cp023

0xd24f,	// (0x0009533d) bg_button_pane_cp024

0x8eb3,	// (0x00090fa1) vitu2_page_scroll_pane_g1

0x8ebb,	// (0x00090fa9) vitu2_page_scroll_pane_g2

0x0001,

0xfaf4,	// (0x00097be2) vitu2_page_scroll_pane_g

0x8ec3,	// (0x00090fb1) vitu2_page_scroll_pane_t1

0xd282,	// (0x00095370) popup_char_count_window_g1

0xd28b,	// (0x00095379) popup_char_count_window_g2

0xd294,	// (0x00095382) popup_char_count_window_g3

0x0002,

0xfaf9,	// (0x00097be7) popup_char_count_window_g

0xd29d,	// (0x0009538b) popup_char_count_window_t1

0x01f3,	// (0x000882e1) main_vded2_pane

0x0e9b,	// (0x00088f89) aid_size_cell_imed_line

0x0ea5,	// (0x00088f93) grid_imed_line_width_pane

0x7f13,	// (0x00090001) vid4_indicators_pane_g4

0xd2ab,	// (0x00095399) cell_imed_line_width_pane_ParamLimits

0xd2ab,	// (0x00095399) cell_imed_line_width_pane

0xd2bf,	// (0x000953ad) cell_imed_line_width_pane_g1

0xc8a1,	// (0x0009498f) cell_imed_line_width_pane_g2

0x0001,

0xfb00,	// (0x00097bee) cell_imed_line_width_pane_g

0x8ed2,	// (0x00090fc0) main_vded2_pane_g1_ParamLimits

0x8ed2,	// (0x00090fc0) main_vded2_pane_g1

0x8ee8,	// (0x00090fd6) main_vded2_pane_g2_ParamLimits

0x8ee8,	// (0x00090fd6) main_vded2_pane_g2

0x0001,

0xfb05,	// (0x00097bf3) main_vded2_pane_g_ParamLimits

0xfb05,	// (0x00097bf3) main_vded2_pane_g

0x8efa,	// (0x00090fe8) vded2_slider_pane_ParamLimits

0x8efa,	// (0x00090fe8) vded2_slider_pane

0x8f0a,	// (0x00090ff8) aid_size_touch_vded2_end

0x8f14,	// (0x00091002) aid_size_touch_vded2_playhead

0xd2c8,	// (0x000953b6) aid_size_touch_vded2_start

0xd2d0,	// (0x000953be) vded2_slider_bg_pane

0xd2d9,	// (0x000953c7) vded2_slider_pane_g1

0xd2e2,	// (0x000953d0) vded2_slider_pane_g2

0x8f1e,	// (0x0009100c) vded2_slider_pane_g3

0x0002,

0xfb0a,	// (0x00097bf8) vded2_slider_pane_g

0xd2ea,	// (0x000953d8) vded2_slider_bg_pane_g1

0xd2f3,	// (0x000953e1) vded2_slider_bg_pane_g2

0xd2fc,	// (0x000953ea) vded2_slider_bg_pane_g3

0x0002,

0xfb11,	// (0x00097bff) vded2_slider_bg_pane_g

0x5176,	// (0x0008d264) aid_postcard_touch_down_pane_ParamLimits

0x5176,	// (0x0008d264) aid_postcard_touch_down_pane

0x518c,	// (0x0008d27a) aid_postcard_touch_up_pane_ParamLimits

0x518c,	// (0x0008d27a) aid_postcard_touch_up_pane

0x01f3,	// (0x000882e1) main_blid2_pane

0xc608,	// (0x000946f6) popup_blid2_search_window

0x01f3,	// (0x000882e1) blid2_gps_pane

0x01f3,	// (0x000882e1) blid2_navig_pane

0x01f3,	// (0x000882e1) blid2_search_pane

0x01f3,	// (0x000882e1) blid2_tripm_pane

0x8f29,	// (0x00091017) blid2_search_pane_g1_ParamLimits

0x8f29,	// (0x00091017) blid2_search_pane_g1

0x8f43,	// (0x00091031) blid2_search_pane_t1_ParamLimits

0x8f43,	// (0x00091031) blid2_search_pane_t1

0x8f55,	// (0x00091043) aid_size_cell_blid2_gps_ParamLimits

0x8f55,	// (0x00091043) aid_size_cell_blid2_gps

0x8f6d,	// (0x0009105b) blid2_gps_pane_g1_ParamLimits

0x8f6d,	// (0x0009105b) blid2_gps_pane_g1

0x8f81,	// (0x0009106f) grid_blid2_satellite_pane_ParamLimits

0x8f81,	// (0x0009106f) grid_blid2_satellite_pane

0x8f9b,	// (0x00091089) blid2_navig_pane_g1_ParamLimits

0x8f9b,	// (0x00091089) blid2_navig_pane_g1

0x8fa7,	// (0x00091095) blid2_navig_pane_t1_ParamLimits

0x8fa7,	// (0x00091095) blid2_navig_pane_t1

0x8fc2,	// (0x000910b0) blid2_navig_pane_t2_ParamLimits

0x8fc2,	// (0x000910b0) blid2_navig_pane_t2

0x0001,

0xfb18,	// (0x00097c06) blid2_navig_pane_t_ParamLimits

0xfb18,	// (0x00097c06) blid2_navig_pane_t

0x8fdd,	// (0x000910cb) blid2_navig_ring_pane_ParamLimits

0x8fdd,	// (0x000910cb) blid2_navig_ring_pane

0x8ff6,	// (0x000910e4) blid2_speed_pane_ParamLimits

0x8ff6,	// (0x000910e4) blid2_speed_pane

0x9002,	// (0x000910f0) blid2_tripm_pane_g1_ParamLimits

0x9002,	// (0x000910f0) blid2_tripm_pane_g1

0x901b,	// (0x00091109) blid2_tripm_pane_g2_ParamLimits

0x901b,	// (0x00091109) blid2_tripm_pane_g2

0x902f,	// (0x0009111d) blid2_tripm_pane_g3_ParamLimits

0x902f,	// (0x0009111d) blid2_tripm_pane_g3

0x9043,	// (0x00091131) blid2_tripm_pane_g4_ParamLimits

0x9043,	// (0x00091131) blid2_tripm_pane_g4

0x9057,	// (0x00091145) blid2_tripm_pane_g5_ParamLimits

0x9057,	// (0x00091145) blid2_tripm_pane_g5

0x0005,

0xfb1d,	// (0x00097c0b) blid2_tripm_pane_g_ParamLimits

0xfb1d,	// (0x00097c0b) blid2_tripm_pane_g

0x907d,	// (0x0009116b) blid2_tripm_pane_t1_ParamLimits

0x907d,	// (0x0009116b) blid2_tripm_pane_t1

0x9098,	// (0x00091186) blid2_tripm_pane_t2_ParamLimits

0x9098,	// (0x00091186) blid2_tripm_pane_t2

0x90b1,	// (0x0009119f) blid2_tripm_pane_t3_ParamLimits

0x90b1,	// (0x0009119f) blid2_tripm_pane_t3

0x0003,

0xfb2a,	// (0x00097c18) blid2_tripm_pane_t_ParamLimits

0xfb2a,	// (0x00097c18) blid2_tripm_pane_t

0x90f8,	// (0x000911e6) cell_blid2_satellite_pane_ParamLimits

0x90f8,	// (0x000911e6) cell_blid2_satellite_pane

0x9116,	// (0x00091204) cell_blid2_satellite_pane_g1

0xd305,	// (0x000953f3) cell_blid2_satellite_pane_t1

0xcb00,	// (0x00094bee) blid2_speed_pane_g1

0xd313,	// (0x00095401) blid2_speed_pane_t1

0xd321,	// (0x0009540f) blid2_speed_pane_t2

0x0001,

0xfb33,	// (0x00097c21) blid2_speed_pane_t

0xcb00,	// (0x00094bee) blid2_navig_ring_pane_g1

0x911f,	// (0x0009120d) blid2_navig_ring_pane_g2

0x9127,	// (0x00091215) blid2_navig_ring_pane_g3

0x912f,	// (0x0009121d) blid2_navig_ring_pane_g4

0x9137,	// (0x00091225) blid2_navig_ring_pane_g5

0x0004,

0xfb38,	// (0x00097c26) blid2_navig_ring_pane_g

0x01f3,	// (0x000882e1) bg_popup_window_pane_cp011

0xd32f,	// (0x0009541d) popup_blid2_search_window_g1

0xd337,	// (0x00095425) popup_blid2_search_window_t1

0xd345,	// (0x00095433) popup_blid2_search_window_t2

0x0001,

0xfb43,	// (0x00097c31) popup_blid2_search_window_t

0x0c83,	// (0x00088d71) main_browser_pane_g1

0x0998,	// (0x00088a86) main_browser_pane_ParamLimits

0xefb8,	// (0x000970a6) bg_button_pane_cp011_ParamLimits

0x81ec,	// (0x000902da) cell_vitu2_function_pane_g1_ParamLimits

0x2796,	// (0x0008a884) bg_popup_sub_pane_cp22_ParamLimits

0x8ac3,	// (0x00090bb1) input_focus_pane_cp08_ParamLimits

0x8ad0,	// (0x00090bbe) popup_vitu2_query_button_pane_ParamLimits

0x8ad0,	// (0x00090bbe) popup_vitu2_query_button_pane

0x8aa5,	// (0x00090b93) popup_vitu2_query_input_button_pane

0xceea,	// (0x00094fd8) popup_vitu2_query_window_g1_ParamLimits

0x8ae1,	// (0x00090bcf) popup_vitu2_query_window_g2_ParamLimits

0xfa4a,	// (0x00097b38) popup_vitu2_query_window_g_ParamLimits

0x01f3,	// (0x000882e1) bg_button_pane_cp026

0x913f,	// (0x0009122d) popup_vitu2_query_input_button_pane_g1

0x01f3,	// (0x000882e1) bg_button_pane_cp025

0xd353,	// (0x00095441) popup_vitu2_query_button_pane_t1

0x6810,	// (0x0008e8fe) main_mp3_pane_t6

0x681e,	// (0x0008e90c) popup_slider_window_cp01

0xef47,	// (0x00097035) cam4_battery_pane

0xefae,	// (0x0009709c) cam4_battery_pane_cp02

0xf045,	// (0x00097133) cam4_battery_pane_cp01

0xf045,	// (0x00097133) cam4_battery_pane_cp03

0x1608,	// (0x000896f6) cam4_battery_pane_g1

0xcb00,	// (0x00094bee) cam4_battery_pane_g2

0x0001,

0xfb48,	// (0x00097c36) cam4_battery_pane_g

0xc9cc,	// (0x00094aba) popup_blid_sat_info2_window_t11

0x4a18,	// (0x0008cb06) aid_size_touch_mv_arrow_left_ParamLimits

0x4a41,	// (0x0008cb2f) aid_size_touch_mv_arrow_right_ParamLimits

0x4a89,	// (0x0008cb77) navi_pane_g1_ParamLimits

0x4a95,	// (0x0008cb83) navi_pane_g2_ParamLimits

0x4ac3,	// (0x0008cbb1) navi_pane_g3_ParamLimits

0xf418,	// (0x00097506) navi_pane_g_ParamLimits

0x4b7f,	// (0x0008cc6d) navi_pane_mv_t1_ParamLimits

0x73f1,	// (0x0008f4df) grid_imed_effect_pane_ParamLimits

0x0bcc,	// (0x00088cba) aid_placing_vt_slider_lsc

0x0bd4,	// (0x00088cc2) aid_placing_vt_slider_prt

0x2796,	// (0x0008a884) bg_tb_trans_pane_cp01_ParamLimits

0xcc8c,	// (0x00094d7a) popup_image_details_window_g1_ParamLimits

0xcc9f,	// (0x00094d8d) popup_image_details_window_g2_ParamLimits

0xccb4,	// (0x00094da2) popup_image_details_window_g3_ParamLimits

0xccb4,	// (0x00094da2) popup_image_details_window_g3

0xf74b,	// (0x00097839) popup_image_details_window_g_ParamLimits

0xccc8,	// (0x00094db6) popup_image_details_window_t1_ParamLimits

0xccda,	// (0x00094dc8) popup_image_details_window_t2_ParamLimits

0xccf3,	// (0x00094de1) popup_image_details_window_t3_ParamLimits

0xcd07,	// (0x00094df5) popup_image_details_window_t4_ParamLimits

0xcd22,	// (0x00094e10) popup_image_details_window_t5_ParamLimits

0xf752,	// (0x00097840) popup_image_details_window_t_ParamLimits

0x8dc3,	// (0x00090eb1) cl_header_name_pane_ParamLimits

0x8dc3,	// (0x00090eb1) cl_header_name_pane

0x9147,	// (0x00091235) cl_header_name_pane_t1_ParamLimits

0x9147,	// (0x00091235) cl_header_name_pane_t1

0x9168,	// (0x00091256) cl_header_name_pane_t2_ParamLimits

0x9168,	// (0x00091256) cl_header_name_pane_t2

0x91aa,	// (0x00091298) cl_header_name_pane_t3_ParamLimits

0x91aa,	// (0x00091298) cl_header_name_pane_t3

0x0002,

0xfb4d,	// (0x00097c3b) cl_header_name_pane_t_ParamLimits

0xfb4d,	// (0x00097c3b) cl_header_name_pane_t

0x4b50,	// (0x0008cc3e) navi_pane_mv_g2_ParamLimits

0x13b4,	// (0x000894a2) field_vitu2_entry_pane_g1_ParamLimits

0x13c0,	// (0x000894ae) field_vitu2_entry_pane_g2_ParamLimits

0x13cc,	// (0x000894ba) field_vitu2_entry_pane_g3_ParamLimits

0x13cc,	// (0x000894ba) field_vitu2_entry_pane_g3

0xf949,	// (0x00097a37) field_vitu2_entry_pane_g_ParamLimits

0x8168,	// (0x00090256) cell_vitu2_itu_pane_g1_ParamLimits

0x8178,	// (0x00090266) cell_vitu2_itu_pane_g2_ParamLimits

0x8178,	// (0x00090266) cell_vitu2_itu_pane_g2

0x0001,

0xf955,	// (0x00097a43) cell_vitu2_itu_pane_g_ParamLimits

0xf955,	// (0x00097a43) cell_vitu2_itu_pane_g

0xefb8,	// (0x000970a6) bg_vkb2_func_pane_cp05_ParamLimits

0xefb8,	// (0x000970a6) bg_vkb2_func_pane_cp05

0xefb8,	// (0x000970a6) bg_vkb2_func_pane_cp03

0xefb8,	// (0x000970a6) bg_vkb2_func_pane_cp04

0xefb8,	// (0x000970a6) bg_vkb2_func_pane_cp10_ParamLimits

0xefb8,	// (0x000970a6) bg_vkb2_func_pane_cp10

0x8d69,	// (0x00090e57) bg_vkb2_func_pane_cp08

0x8d4f,	// (0x00090e3d) bg_vkb2_func_pane_cp06

0x8d5d,	// (0x00090e4b) bg_vkb2_func_pane_cp07

0xd258,	// (0x00095346) bg_vkb2_func_pane_cp11_ParamLimits

0xd258,	// (0x00095346) bg_vkb2_func_pane_cp11

0xd26d,	// (0x0009535b) bg_vkb2_func_pane_cp12_ParamLimits

0xd26d,	// (0x0009535b) bg_vkb2_func_pane_cp12

0x01f3,	// (0x000882e1) bg_vkb2_func_pane_cp09

0x13ec,	// (0x000894da) bg_vkb2_func_pane_g1

0x0d94,	// (0x00088e82) bg_vkb2_func_pane_g2

0x13f4,	// (0x000894e2) bg_vkb2_func_pane_g3

0x13fc,	// (0x000894ea) bg_vkb2_func_pane_g4

0xce95,	// (0x00094f83) bg_vkb2_func_pane_g5

0x1414,	// (0x00089502) bg_vkb2_func_pane_g6

0x141c,	// (0x0008950a) bg_vkb2_func_pane_g7

0x140c,	// (0x000894fa) bg_vkb2_func_pane_g8

0x0d74,	// (0x00088e62) bg_vkb2_func_pane_g9

0x0008,

0xfb54,	// (0x00097c42) bg_vkb2_func_pane_g

0x906b,	// (0x00091159) blid2_tripm_pane_g6_ParamLimits

0x906b,	// (0x00091159) blid2_tripm_pane_g6

0x1254,	// (0x00089342) mp4_progress_pane_g1

0x90e4,	// (0x000911d2) blid2_tripm_values_pane_ParamLimits

0x90e4,	// (0x000911d2) blid2_tripm_values_pane

0x91db,	// (0x000912c9) blid2_tripm_values_pane_t1

0x91e9,	// (0x000912d7) blid2_tripm_values_pane_t2

0x91f7,	// (0x000912e5) blid2_tripm_values_pane_t3

0x9205,	// (0x000912f3) blid2_tripm_values_pane_t4

0x9213,	// (0x00091301) blid2_tripm_values_pane_t5

0x9221,	// (0x0009130f) blid2_tripm_values_pane_t6

0x922f,	// (0x0009131d) blid2_tripm_values_pane_t7

0x923d,	// (0x0009132b) blid2_tripm_values_pane_t8

0x924b,	// (0x00091339) blid2_tripm_values_pane_t9

0x0008,

0xfb67,	// (0x00097c55) blid2_tripm_values_pane_t

0x359e,	// (0x0008b68c) call_video_pane_t1_ParamLimits

0x35b0,	// (0x0008b69e) call_video_pane_t2_ParamLimits

0xf2a1,	// (0x0009738f) call_video_pane_t_ParamLimits

0x5079,	// (0x0008d167) msg_header_pane_g1_ParamLimits

0xb353,	// (0x00093441) msg_header_pane_g2_ParamLimits

0xb353,	// (0x00093441) msg_header_pane_g2

0x0001,

0xf4bb,	// (0x000975a9) msg_header_pane_g_ParamLimits

0xf4bb,	// (0x000975a9) msg_header_pane_g

0x0998,	// (0x00088a86) main_clock2_pane_ParamLimits

0x711d,	// (0x0008f20b) grid_clock2_toolbar_pane_ParamLimits

0x711d,	// (0x0008f20b) grid_clock2_toolbar_pane

0x711d,	// (0x0008f20b) listscroll_clock2_pane_ParamLimits

0x711d,	// (0x0008f20b) listscroll_clock2_pane

0x71f9,	// (0x0008f2e7) main_clock2_pane_t3_ParamLimits

0x71f9,	// (0x0008f2e7) main_clock2_pane_t3

0x7214,	// (0x0008f302) main_clock2_pane_t4_ParamLimits

0x7214,	// (0x0008f302) main_clock2_pane_t4

0xd361,	// (0x0009544f) cell_clock2_toolbar_pane

0xd369,	// (0x00095457) cell_clock2_toolbar_pane_cp01

0xd369,	// (0x00095457) cell_clock2_toolbar_pane_cp02

0xd371,	// (0x0009545f) cell_clock2_toolbar_pane_cp03

0xd379,	// (0x00095467) list_clock2_pane

0x47c2,	// (0x0008c8b0) scroll_pane_cp10

0xd381,	// (0x0009546f) list_single_clock2_pane_ParamLimits

0xd381,	// (0x0009546f) list_single_clock2_pane

0xb1b8,	// (0x000932a6) list_highlight_pane_cp08

0xd38e,	// (0x0009547c) list_single_clock2_pane_t1

0xd39c,	// (0x0009548a) list_single_clock2_pane_t2

0x0001,

0xfb7a,	// (0x00097c68) list_single_clock2_pane_t

0x01f3,	// (0x000882e1) bg_button_pane_cp10

0xd3aa,	// (0x00095498) cell_clock2_toolbar_pane_g1

0x5102,	// (0x0008d1f0) aid_main_viewer_pane_g1_ParamLimits

0x5102,	// (0x0008d1f0) aid_main_viewer_pane_g1

0x5110,	// (0x0008d1fe) aid_main_viewer_pane_g2_ParamLimits

0x5110,	// (0x0008d1fe) aid_main_viewer_pane_g2

0x511e,	// (0x0008d20c) aid_main_viewer_pane_g3_ParamLimits

0x511e,	// (0x0008d20c) aid_main_viewer_pane_g3

0x512d,	// (0x0008d21b) aid_main_viewer_pane_g4_ParamLimits

0x512d,	// (0x0008d21b) aid_main_viewer_pane_g4

0x0003,

0xf4cc,	// (0x000975ba) aid_main_viewer_pane_g_ParamLimits

0xf4cc,	// (0x000975ba) aid_main_viewer_pane_g

0x5a33,	// (0x0008db21) main_calc_pane_ParamLimits

0x5a47,	// (0x0008db35) main_dialer2_pane_ParamLimits

0x01f3,	// (0x000882e1) main_cam6_pane

0x01f3,	// (0x000882e1) main_vid6_pane

0x7129,	// (0x0008f217) listscroll_gen_pane_cp06_ParamLimits

0x7129,	// (0x0008f217) listscroll_gen_pane_cp06

0x722f,	// (0x0008f31d) main_clock2_pane_t5_ParamLimits

0x722f,	// (0x0008f31d) main_clock2_pane_t5

0x7286,	// (0x0008f374) aid_call2_pane_cp10_ParamLimits

0x7298,	// (0x0008f386) aid_call_pane_cp10_ParamLimits

0x49a7,	// (0x0008ca95) popup_clock_analogue_window_cp10_g1_ParamLimits

0x49a7,	// (0x0008ca95) popup_clock_analogue_window_cp10_g2_ParamLimits

0x72aa,	// (0x0008f398) popup_clock_analogue_window_cp10_g3_ParamLimits

0x72aa,	// (0x0008f398) popup_clock_analogue_window_cp10_g4_ParamLimits

0x49a7,	// (0x0008ca95) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf802,	// (0x000978f0) popup_clock_analogue_window_cp10_g_ParamLimits

0x72bc,	// (0x0008f3aa) popup_clock_analogue_window_cp10_t1_ParamLimits

0x792a,	// (0x0008fa18) cell_dialer2_keypad_pane_g2_ParamLimits

0x792a,	// (0x0008fa18) cell_dialer2_keypad_pane_g2

0x0001,

0xf8e8,	// (0x000979d6) cell_dialer2_keypad_pane_g_ParamLimits

0xf8e8,	// (0x000979d6) cell_dialer2_keypad_pane_g

0x7946,	// (0x0008fa34) cell_dialer2_keypad_pane_t1

0x84ff,	// (0x000905ed) main_cset_text2_pane_ParamLimits

0x84ff,	// (0x000905ed) main_cset_text2_pane

0xd0ca,	// (0x000951b8) area_vitu2_query_pane_g1_ParamLimits

0x8cee,	// (0x00090ddc) area_vitu2_query_pane_g2_ParamLimits

0xfa97,	// (0x00097b85) area_vitu2_query_pane_g_ParamLimits

0xd14e,	// (0x0009523c) area_vitu2_query_pane_t7_ParamLimits

0xd14e,	// (0x0009523c) area_vitu2_query_pane_t7

0x8d4f,	// (0x00090e3d) bg_button_pane_cp018_ParamLimits

0x8d5d,	// (0x00090e4b) bg_button_pane_cp021_ParamLimits

0x8d69,	// (0x00090e57) bg_button_pane_cp022_ParamLimits

0x8d69,	// (0x00090e57) bg_vkb2_func_pane_cp08_ParamLimits

0x8d4f,	// (0x00090e3d) bg_vkb2_func_pane_cp06_ParamLimits

0x8d5d,	// (0x00090e4b) bg_vkb2_func_pane_cp07_ParamLimits

0x8d78,	// (0x00090e66) input_focus_pane_cp09_ParamLimits

0xf0dd,	// (0x000971cb) cam6_autofocus_pane_ParamLimits

0xf0dd,	// (0x000971cb) cam6_autofocus_pane

0x9259,	// (0x00091347) cam6_image_uncrop_pane_ParamLimits

0x9259,	// (0x00091347) cam6_image_uncrop_pane

0x9268,	// (0x00091356) cam6_indi_pane_ParamLimits

0x9268,	// (0x00091356) cam6_indi_pane

0x927e,	// (0x0009136c) cam6_mode_pane_ParamLimits

0x927e,	// (0x0009136c) cam6_mode_pane

0x9290,	// (0x0009137e) cam6_timer_pane_ParamLimits

0x9290,	// (0x0009137e) cam6_timer_pane

0x929c,	// (0x0009138a) cam6_zoom_pane_ParamLimits

0x929c,	// (0x0009138a) cam6_zoom_pane

0x92a8,	// (0x00091396) cam6_mode_pane_g1_ParamLimits

0x92a8,	// (0x00091396) cam6_mode_pane_g1

0x92b8,	// (0x000913a6) cam6_mode_pane_g2_ParamLimits

0x92b8,	// (0x000913a6) cam6_mode_pane_g2

0x92c8,	// (0x000913b6) cam6_mode_pane_g3_ParamLimits

0x92c8,	// (0x000913b6) cam6_mode_pane_g3

0x92d8,	// (0x000913c6) cam6_mode_pane_g4_ParamLimits

0x92d8,	// (0x000913c6) cam6_mode_pane_g4

0x0003,

0xfb7f,	// (0x00097c6d) cam6_mode_pane_g_ParamLimits

0xfb7f,	// (0x00097c6d) cam6_mode_pane_g

0xd3b2,	// (0x000954a0) bg_tb_trans_pane_cp08_ParamLimits

0xd3b2,	// (0x000954a0) bg_tb_trans_pane_cp08

0xd3c0,	// (0x000954ae) cam6_battery_pane_ParamLimits

0xd3c0,	// (0x000954ae) cam6_battery_pane

0xd3d6,	// (0x000954c4) cam6_indi_pane_g1_ParamLimits

0xd3d6,	// (0x000954c4) cam6_indi_pane_g1

0xd3e8,	// (0x000954d6) cam6_indi_pane_g2_ParamLimits

0xd3e8,	// (0x000954d6) cam6_indi_pane_g2

0xd3fa,	// (0x000954e8) cam6_indi_pane_g3_ParamLimits

0xd3fa,	// (0x000954e8) cam6_indi_pane_g3

0x0002,

0xfb88,	// (0x00097c76) cam6_indi_pane_g_ParamLimits

0xfb88,	// (0x00097c76) cam6_indi_pane_g

0xd40c,	// (0x000954fa) cam6_indi_pane_t1_ParamLimits

0xd40c,	// (0x000954fa) cam6_indi_pane_t1

0x92e8,	// (0x000913d6) cam6_autofocus_pane_g1

0x92f0,	// (0x000913de) cam6_autofocus_pane_g2

0x92f8,	// (0x000913e6) cam6_autofocus_pane_g3

0x9300,	// (0x000913ee) cam6_autofocus_pane_g4

0x0003,

0xfb8f,	// (0x00097c7d) cam6_autofocus_pane_g

0xd432,	// (0x00095520) cam6_timer_pane_g1

0xd43a,	// (0x00095528) cam6_timer_pane_t1

0xd448,	// (0x00095536) cam6_zoom_cont_pane

0xd450,	// (0x0009553e) cam6_zoom_pane_g1

0xd458,	// (0x00095546) cam6_zoom_pane_g2

0x9308,	// (0x000913f6) cam6_zoom_pane_g3

0x0002,

0xfb98,	// (0x00097c86) cam6_zoom_pane_g

0xcb00,	// (0x00094bee) cam6_battery_pane_g1

0xcb00,	// (0x00094bee) cam6_battery_pane_g2

0x0001,

0xf70f,	// (0x000977fd) cam6_battery_pane_g

0xd460,	// (0x0009554e) cam6_zoom_cont_pane_g1

0xd469,	// (0x00095557) cam6_zoom_cont_pane_g2

0xd472,	// (0x00095560) cam6_zoom_cont_pane_g3

0x0002,

0xfb9f,	// (0x00097c8d) cam6_zoom_cont_pane_g

0x9325,	// (0x00091413) cam6_mode_pane_cp_ParamLimits

0x9325,	// (0x00091413) cam6_mode_pane_cp

0x9337,	// (0x00091425) cam6_zoom_pane_cp_ParamLimits

0x9337,	// (0x00091425) cam6_zoom_pane_cp

0x9343,	// (0x00091431) vid6_image_uncrop_cif_pane_ParamLimits

0x9343,	// (0x00091431) vid6_image_uncrop_cif_pane

0x9353,	// (0x00091441) vid6_image_uncrop_nhd_pane_ParamLimits

0x9353,	// (0x00091441) vid6_image_uncrop_nhd_pane

0x9362,	// (0x00091450) vid6_image_uncrop_vga_pane_ParamLimits

0x9362,	// (0x00091450) vid6_image_uncrop_vga_pane

0x9371,	// (0x0009145f) vid6_image_uncrop_wvga_pane_ParamLimits

0x9371,	// (0x0009145f) vid6_image_uncrop_wvga_pane

0x9380,	// (0x0009146e) vid6_indi_pane_ParamLimits

0x9380,	// (0x0009146e) vid6_indi_pane

0xd3b2,	// (0x000954a0) bg_tb_trans_pane_cp09_ParamLimits

0xd3b2,	// (0x000954a0) bg_tb_trans_pane_cp09

0xd48a,	// (0x00095578) cam6_battery_pane_cp_ParamLimits

0xd48a,	// (0x00095578) cam6_battery_pane_cp

0xd496,	// (0x00095584) vid6_indi_pane_g1_ParamLimits

0xd496,	// (0x00095584) vid6_indi_pane_g1

0xd4a8,	// (0x00095596) vid6_indi_pane_g2_ParamLimits

0xd4a8,	// (0x00095596) vid6_indi_pane_g2

0xd4ba,	// (0x000955a8) vid6_indi_pane_g3_ParamLimits

0xd4ba,	// (0x000955a8) vid6_indi_pane_g3

0xd4cf,	// (0x000955bd) vid6_indi_pane_g4_ParamLimits

0xd4cf,	// (0x000955bd) vid6_indi_pane_g4

0xd4e4,	// (0x000955d2) vid6_indi_pane_g5_ParamLimits

0xd4e4,	// (0x000955d2) vid6_indi_pane_g5

0x0004,

0xfba6,	// (0x00097c94) vid6_indi_pane_g_ParamLimits

0xfba6,	// (0x00097c94) vid6_indi_pane_g

0xd4fe,	// (0x000955ec) vid6_indi_pane_t1_ParamLimits

0xd4fe,	// (0x000955ec) vid6_indi_pane_t1

0xd514,	// (0x00095602) vid6_indi_pane_t2_ParamLimits

0xd514,	// (0x00095602) vid6_indi_pane_t2

0xd53c,	// (0x0009562a) vid6_indi_pane_t3_ParamLimits

0xd53c,	// (0x0009562a) vid6_indi_pane_t3

0xd564,	// (0x00095652) vid6_indi_pane_t4_ParamLimits

0xd564,	// (0x00095652) vid6_indi_pane_t4

0x0003,

0xfbb1,	// (0x00097c9f) vid6_indi_pane_t_ParamLimits

0xfbb1,	// (0x00097c9f) vid6_indi_pane_t

0xd588,	// (0x00095676) wait_bar_pane_cp08

0x9398,	// (0x00091486) main_cset_text2_pane_t1_ParamLimits

0x9398,	// (0x00091486) main_cset_text2_pane_t1

0x9310,	// (0x000913fe) listscroll_gen_pane_cp06_t1_ParamLimits

0x9310,	// (0x000913fe) listscroll_gen_pane_cp06_t1

0x01f3,	// (0x000882e1) main_cam6_set_pane

0xef39,	// (0x00097027) bg_tb_trans_pane_cp06_ParamLimits

0xef4f,	// (0x0009703d) cam4_indicators_pane_g1_ParamLimits

0xef60,	// (0x0009704e) cam4_indicators_pane_g2_ParamLimits

0xf925,	// (0x00097a13) cam4_indicators_pane_g_ParamLimits

0xef7e,	// (0x0009706c) cam4_indicators_pane_t1_ParamLimits

0xefa0,	// (0x0009708e) bg_tb_trans_pane_cp07_ParamLimits

0x7eec,	// (0x0008ffda) vid4_indicators_pane_g1_ParamLimits

0x7ef9,	// (0x0008ffe7) vid4_indicators_pane_g2_ParamLimits

0x7f06,	// (0x0008fff4) vid4_indicators_pane_g3_ParamLimits

0x7f13,	// (0x00090001) vid4_indicators_pane_g4_ParamLimits

0xf937,	// (0x00097a25) vid4_indicators_pane_g_ParamLimits

0x7f2b,	// (0x00090019) vid4_indicators_pane_t1_ParamLimits

0xf04d,	// (0x0009713b) vid4_progress_pane_g1_ParamLimits

0xf05d,	// (0x0009714b) vid4_progress_pane_g2_ParamLimits

0x42c4,	// (0x0008c3b2) vid4_progress_pane_g3_ParamLimits

0xf06d,	// (0x0009715b) vid4_progress_pane_g4_ParamLimits

0xfae2,	// (0x00097bd0) vid4_progress_pane_g_ParamLimits

0xf08b,	// (0x00097179) vid4_progress_pane_t1_ParamLimits

0xf0a0,	// (0x0009718e) vid4_progress_pane_t2_ParamLimits

0xf0b6,	// (0x000971a4) vid4_progress_pane_t3_ParamLimits

0xfaed,	// (0x00097bdb) vid4_progress_pane_t_ParamLimits

0xf0cb,	// (0x000971b9) wait_bar_pane_cp07_ParamLimits

0x93b5,	// (0x000914a3) main_cam6_set_pane_g2_ParamLimits

0x93b5,	// (0x000914a3) main_cam6_set_pane_g2

0x93d9,	// (0x000914c7) main_cset6_listscroll_pane_ParamLimits

0x93d9,	// (0x000914c7) main_cset6_listscroll_pane

0x93f9,	// (0x000914e7) main_cset6_slider_pane_ParamLimits

0x93f9,	// (0x000914e7) main_cset6_slider_pane

0x940f,	// (0x000914fd) main_cset6_text2_pane_ParamLimits

0x940f,	// (0x000914fd) main_cset6_text2_pane

0xd597,	// (0x00095685) main_cset6_text_pane

0xd59f,	// (0x0009568d) main_cset_list_pane_copy1_ParamLimits

0xd59f,	// (0x0009568d) main_cset_list_pane_copy1

0xd5af,	// (0x0009569d) scroll_pane_cp028_copy1

0x941d,	// (0x0009150b) cset_list_set_pane_copy1

0x942e,	// (0x0009151c) aid_position_infowindow_above_copy1

0x9436,	// (0x00091524) aid_position_infowindow_below_copy1

0x943e,	// (0x0009152c) cset_list_set_pane_g1_copy1

0x9446,	// (0x00091534) cset_list_set_pane_g3_copy1_ParamLimits

0x9446,	// (0x00091534) cset_list_set_pane_g3_copy1

0x9455,	// (0x00091543) cset_list_set_pane_t1_copy1_ParamLimits

0x9455,	// (0x00091543) cset_list_set_pane_t1_copy1

0x2796,	// (0x0008a884) list_highlight_pane_cp021_copy1_ParamLimits

0x2796,	// (0x0008a884) list_highlight_pane_cp021_copy1

0xd5b8,	// (0x000956a6) cset6_slider_pane_ParamLimits

0xd5b8,	// (0x000956a6) cset6_slider_pane

0xd5e4,	// (0x000956d2) main_cset6_slider_pane_g1_ParamLimits

0xd5e4,	// (0x000956d2) main_cset6_slider_pane_g1

0x946a,	// (0x00091558) main_cset6_slider_pane_g2_ParamLimits

0x946a,	// (0x00091558) main_cset6_slider_pane_g2

0xd60c,	// (0x000956fa) main_cset6_slider_pane_g3_ParamLimits

0xd60c,	// (0x000956fa) main_cset6_slider_pane_g3

0x9492,	// (0x00091580) main_cset6_slider_pane_g4_ParamLimits

0x9492,	// (0x00091580) main_cset6_slider_pane_g4

0x949e,	// (0x0009158c) main_cset6_slider_pane_g5_ParamLimits

0x949e,	// (0x0009158c) main_cset6_slider_pane_g5

0x151b,	// (0x00089609) main_cset6_slider_pane_g7_ParamLimits

0x151b,	// (0x00089609) main_cset6_slider_pane_g7

0x1527,	// (0x00089615) main_cset6_slider_pane_g8_ParamLimits

0x1527,	// (0x00089615) main_cset6_slider_pane_g8

0x85ac,	// (0x0009069a) main_cset6_slider_pane_g9_ParamLimits

0x85ac,	// (0x0009069a) main_cset6_slider_pane_g9

0x85b8,	// (0x000906a6) main_cset6_slider_pane_g10_ParamLimits

0x85b8,	// (0x000906a6) main_cset6_slider_pane_g10

0x85c4,	// (0x000906b2) main_cset6_slider_pane_g11_ParamLimits

0x85c4,	// (0x000906b2) main_cset6_slider_pane_g11

0x85d0,	// (0x000906be) main_cset6_slider_pane_g12_ParamLimits

0x85d0,	// (0x000906be) main_cset6_slider_pane_g12

0x85dc,	// (0x000906ca) main_cset6_slider_pane_g13_ParamLimits

0x85dc,	// (0x000906ca) main_cset6_slider_pane_g13

0x85e8,	// (0x000906d6) main_cset6_slider_pane_g14_ParamLimits

0x85e8,	// (0x000906d6) main_cset6_slider_pane_g14

0x94aa,	// (0x00091598) main_cset6_slider_pane_g15_ParamLimits

0x94aa,	// (0x00091598) main_cset6_slider_pane_g15

0x860c,	// (0x000906fa) main_cset6_slider_pane_g16_ParamLimits

0x860c,	// (0x000906fa) main_cset6_slider_pane_g16

0x8618,	// (0x00090706) main_cset6_slider_pane_g17_ParamLimits

0x8618,	// (0x00090706) main_cset6_slider_pane_g17

0x0011,

0xfbba,	// (0x00097ca8) main_cset6_slider_pane_g_ParamLimits

0xfbba,	// (0x00097ca8) main_cset6_slider_pane_g

0xd618,	// (0x00095706) main_cset6_slider_pane_t1_ParamLimits

0xd618,	// (0x00095706) main_cset6_slider_pane_t1

0x94da,	// (0x000915c8) main_cset6_slider_pane_t2_ParamLimits

0x94da,	// (0x000915c8) main_cset6_slider_pane_t2

0x9505,	// (0x000915f3) main_cset6_slider_pane_t3_ParamLimits

0x9505,	// (0x000915f3) main_cset6_slider_pane_t3

0x9530,	// (0x0009161e) main_cset6_slider_pane_t4_ParamLimits

0x9530,	// (0x0009161e) main_cset6_slider_pane_t4

0x955b,	// (0x00091649) main_cset6_slider_pane_t5_ParamLimits

0x955b,	// (0x00091649) main_cset6_slider_pane_t5

0xd659,	// (0x00095747) main_cset6_slider_pane_t7_ParamLimits

0xd659,	// (0x00095747) main_cset6_slider_pane_t7

0x9586,	// (0x00091674) main_cset6_slider_pane_t8_ParamLimits

0x9586,	// (0x00091674) main_cset6_slider_pane_t8

0x95aa,	// (0x00091698) main_cset6_slider_pane_t9_ParamLimits

0x95aa,	// (0x00091698) main_cset6_slider_pane_t9

0x95ce,	// (0x000916bc) main_cset6_slider_pane_t10_ParamLimits

0x95ce,	// (0x000916bc) main_cset6_slider_pane_t10

0x95f2,	// (0x000916e0) main_cset6_slider_pane_t11_ParamLimits

0x95f2,	// (0x000916e0) main_cset6_slider_pane_t11

0xd68f,	// (0x0009577d) main_cset6_slider_pane_t14_ParamLimits

0xd68f,	// (0x0009577d) main_cset6_slider_pane_t14

0xd6c8,	// (0x000957b6) main_cset6_slider_pane_t15_ParamLimits

0xd6c8,	// (0x000957b6) main_cset6_slider_pane_t15

0x000b,

0xfbdf,	// (0x00097ccd) main_cset6_slider_pane_t_ParamLimits

0xfbdf,	// (0x00097ccd) main_cset6_slider_pane_t

0xd701,	// (0x000957ef) cset_slider_pane_g1_copy1

0xd70a,	// (0x000957f8) cset_slider_pane_g2_copy1

0xd713,	// (0x00095801) cset_slider_pane_g3_copy1

0x01f3,	// (0x000882e1) bg_popup_sub_pane_cp011_copy1

0xcef6,	// (0x00094fe4) main_cset_text_pane_g1_copy1

0xcefe,	// (0x00094fec) main_cset_text_pane_t1_copy1

0xcf0c,	// (0x00094ffa) main_cset_text_pane_t2_copy1

0xcf1a,	// (0x00095008) main_cset_text_pane_t3_copy1

0xcf28,	// (0x00095016) main_cset_text_pane_t4_copy1

0xcf36,	// (0x00095024) main_cset_text_pane_t5_copy1

0xcf44,	// (0x00095032) main_cset_text_pane_t6_copy1

0xcf52,	// (0x00095040) main_cset_text_pane_t7_copy1

0x9616,	// (0x00091704) main_cset_text2_pane_t1_copy1

0x01f3,	// (0x000882e1) main_ncimui_pane

0x5c89,	// (0x0008dd77) popup_query_ncimui_window_ParamLimits

0x5c89,	// (0x0008dd77) popup_query_ncimui_window

0xcdd1,	// (0x00094ebf) field_cale_ev2_pane_g4_ParamLimits

0xcdd1,	// (0x00094ebf) field_cale_ev2_pane_g4

0x780a,	// (0x0008f8f8) cell_video_dialer_keypad_pane_g2_ParamLimits

0x780a,	// (0x0008f8f8) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8c3,	// (0x000979b1) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8c3,	// (0x000979b1) cell_video_dialer_keypad_pane_g

0x7822,	// (0x0008f910) cell_video_dialer_keypad_pane_t1

0x01f3,	// (0x000882e1) bg_popup_window_pane_cp012

0x4618,	// (0x0008c706) heading_pane_cp06

0xd80b,	// (0x000958f9) ncim_query_content_pane

0x01f3,	// (0x000882e1) bg_popup_heading_pane_cp01

0xd813,	// (0x00095901) ncim_heading_pane_t1

0xd821,	// (0x0009590f) ncim_indicator_popup_pane

0xd833,	// (0x00095921) ncim_query_button_pane

0xd847,	// (0x00095935) ncim_query_content_pane_t1

0xd859,	// (0x00095947) ncim_query_content_pane_t2

0x0005,

0xfc1e,	// (0x00097d0c) ncim_query_content_pane_t

0xd893,	// (0x00095981) ncim_query_list_pane

0xd8a5,	// (0x00095993) ncim_query_popup_pane

0xd821,	// (0x0009590f) ncim_indicator_popup_pane_ParamLimits

0x96f8,	// (0x000917e6) ncim_query_content_pane_g1_ParamLimits

0x96f8,	// (0x000917e6) ncim_query_content_pane_g1

0xd847,	// (0x00095935) ncim_query_content_pane_t1_ParamLimits

0xd859,	// (0x00095947) ncim_query_content_pane_t2_ParamLimits

0x9704,	// (0x000917f2) ncim_query_content_pane_t3_ParamLimits

0x9704,	// (0x000917f2) ncim_query_content_pane_t3

0x972c,	// (0x0009181a) ncim_query_content_pane_t4_ParamLimits

0x972c,	// (0x0009181a) ncim_query_content_pane_t4

0x9754,	// (0x00091842) ncim_query_content_pane_t5_ParamLimits

0x9754,	// (0x00091842) ncim_query_content_pane_t5

0xd86b,	// (0x00095959) ncim_query_content_pane_t6_ParamLimits

0xd86b,	// (0x00095959) ncim_query_content_pane_t6

0xfc1e,	// (0x00097d0c) ncim_query_content_pane_t_ParamLimits

0xd893,	// (0x00095981) ncim_query_list_pane_ParamLimits

0xd8a5,	// (0x00095993) ncim_query_popup_pane_ParamLimits

0xd8b9,	// (0x000959a7) wait_bar_pane_cp04

0x01f3,	// (0x000882e1) input_focus_pane_cp011

0xd8c1,	// (0x000959af) ncim_query_popup_pane_t1

0xd8cf,	// (0x000959bd) ncim_list_query_list_pane_ParamLimits

0xd8cf,	// (0x000959bd) ncim_list_query_list_pane

0x01f3,	// (0x000882e1) bg_button_pane_cp027

0xd8dc,	// (0x000959ca) ncim_query_button_pane_g1

0x01f3,	// (0x000882e1) list_highlight_pane_cp012

0xd8e6,	// (0x000959d4) ncim_list_query_list_pane_g1

0xd8ee,	// (0x000959dc) ncim_list_query_list_pane_t1

0xef6f,	// (0x0009705d) cam4_indicators_pane_g3_ParamLimits

0xef6f,	// (0x0009705d) cam4_indicators_pane_g3

0x7f1f,	// (0x0009000d) vid4_indicators_pane_g5_ParamLimits

0x7f1f,	// (0x0009000d) vid4_indicators_pane_g5

0xf07c,	// (0x0009716a) vid4_progress_pane_g5_ParamLimits

0xf07c,	// (0x0009716a) vid4_progress_pane_g5

0x9640,	// (0x0009172e) main_ncimui_pane_g1

0x9686,	// (0x00091774) ncimui_group_query_pane_ParamLimits

0x9686,	// (0x00091774) ncimui_group_query_pane

0x96ba,	// (0x000917a8) ncimui_list_pane_ParamLimits

0x96ba,	// (0x000917a8) ncimui_list_pane

0x96d4,	// (0x000917c2) ncimui_text_pane_ParamLimits

0x96d4,	// (0x000917c2) ncimui_text_pane

0x977c,	// (0x0009186a) ncimui_text_pane_t1_ParamLimits

0x977c,	// (0x0009186a) ncimui_text_pane_t1

0xd8fc,	// (0x000959ea) ncimui_list_single_graphic_pane_ParamLimits

0xd8fc,	// (0x000959ea) ncimui_list_single_graphic_pane

0x97a2,	// (0x00091890) ncimui_query_pane_ParamLimits

0x97a2,	// (0x00091890) ncimui_query_pane

0x01f3,	// (0x000882e1) list_highlight_pane_cp013

0xd90c,	// (0x000959fa) ncim_list_query_list_pane_t1_copy1

0xd8e6,	// (0x000959d4) ncim_list_single_graphic_pane_g1

0xd91a,	// (0x00095a08) ncim_query_button_pane_cp01

0xd922,	// (0x00095a10) ncim_query_entry_pane_ParamLimits

0xd922,	// (0x00095a10) ncim_query_entry_pane

0xd932,	// (0x00095a20) ncimui_query_pane_g1

0xd93a,	// (0x00095a28) ncimui_query_pane_t1_ParamLimits

0xd93a,	// (0x00095a28) ncimui_query_pane_t1

0x01f3,	// (0x000882e1) input_focus_pane_cp012

0xd8c1,	// (0x000959af) ncim_query_entry_pane_t1

0x0998,	// (0x00088a86) main_im_pane_ParamLimits

0x2796,	// (0x0008a884) main_mobtv_pane_ParamLimits

0x2796,	// (0x0008a884) main_mobtv_pane

0x94c2,	// (0x000915b0) main_cset6_slider_pane_g18_ParamLimits

0x94c2,	// (0x000915b0) main_cset6_slider_pane_g18

0x94ce,	// (0x000915bc) main_cset6_slider_pane_g19_ParamLimits

0x94ce,	// (0x000915bc) main_cset6_slider_pane_g19

0xd950,	// (0x00095a3e) bg_main_mobtv_pane_ParamLimits

0xd950,	// (0x00095a3e) bg_main_mobtv_pane

0x97b2,	// (0x000918a0) main_mobtv_info_pane

0x97bb,	// (0x000918a9) main_mobtv_loading_pane_ParamLimits

0x97bb,	// (0x000918a9) main_mobtv_loading_pane

0xd95e,	// (0x00095a4c) main_mobtv_pg_channel_list_pane

0xd968,	// (0x00095a56) main_mobtv_pg_hdr_pane

0x97c8,	// (0x000918b6) main_mobtv_programe_curr_pane_ParamLimits

0x97c8,	// (0x000918b6) main_mobtv_programe_curr_pane

0x97d5,	// (0x000918c3) main_mobtv_programe_next_pane_ParamLimits

0x97d5,	// (0x000918c3) main_mobtv_programe_next_pane

0xd971,	// (0x00095a5f) popup_mobtv_noti_window

0xcb00,	// (0x00094bee) main_tv_pg_hdr_pane_g1

0xd979,	// (0x00095a67) main_tv_pg_hdr_pane_g2

0xd981,	// (0x00095a6f) main_tv_pg_hdr_pane_g3

0xd989,	// (0x00095a77) main_tv_pg_hdr_pane_g4

0xd991,	// (0x00095a7f) main_tv_pg_hdr_pane_g5

0xd99b,	// (0x00095a89) main_tv_pg_hdr_pane_g6

0xd9a5,	// (0x00095a93) main_tv_pg_hdr_pane_g7

0xd9af,	// (0x00095a9d) main_tv_pg_hdr_pane_g8

0xd9b9,	// (0x00095aa7) main_tv_pg_hdr_pane_g9

0xd9c3,	// (0x00095ab1) main_tv_pg_hdr_pane_g10

0xd9cd,	// (0x00095abb) main_tv_pg_hdr_pane_g11

0x000a,

0xfc2b,	// (0x00097d19) main_tv_pg_hdr_pane_g

0xd9d7,	// (0x00095ac5) main_tv_pg_hdr_pane_t1

0xd9e5,	// (0x00095ad3) main_tv_pg_hdr_pane_t2

0xd9f3,	// (0x00095ae1) main_tv_pg_hdr_pane_t3

0xda03,	// (0x00095af1) main_tv_pg_hdr_pane_t4

0xda13,	// (0x00095b01) main_tv_pg_hdr_pane_t5

0x0004,

0xfc42,	// (0x00097d30) main_tv_pg_hdr_pane_t

0xda23,	// (0x00095b11) single_mobtv_pg_channel_pane_ParamLimits

0xda23,	// (0x00095b11) single_mobtv_pg_channel_pane

0xda35,	// (0x00095b23) single_mobtv_pg_channel_table_pane

0xda3e,	// (0x00095b2c) single_mobtv_pg_channel_thumb_pane

0xda47,	// (0x00095b35) single_tv_pg_channel_pane_g1

0xda50,	// (0x00095b3e) single_tv_pg_channel_pane_g2

0x0001,

0xfc4d,	// (0x00097d3b) single_tv_pg_channel_pane_g

0xcd6c,	// (0x00094e5a) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xcd6c,	// (0x00094e5a) bg_single_mobtv_pg_channel_thumb_pane

0xda59,	// (0x00095b47) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xda59,	// (0x00095b47) single_mobtv_pg_channel_thumb_pane_g1

0xda67,	// (0x00095b55) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xda67,	// (0x00095b55) single_mobtv_pg_channel_thumb_pane_g2

0xda73,	// (0x00095b61) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xda73,	// (0x00095b61) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc52,	// (0x00097d40) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc52,	// (0x00097d40) single_mobtv_pg_channel_thumb_pane_g

0xda7f,	// (0x00095b6d) single_mobtv_pg_channel_thumb_pane_t1

0xda8d,	// (0x00095b7b) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc59,	// (0x00097d47) single_mobtv_pg_channel_thumb_pane_t

0xcb00,	// (0x00094bee) bg_single_mobtv_pg_channel_table_pane_g1

0xcb00,	// (0x00094bee) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf70f,	// (0x000977fd) bg_single_mobtv_pg_channel_table_pane_g

0xda9b,	// (0x00095b89) single_mobtv_pg_channel_table_pane_t1

0xdaa9,	// (0x00095b97) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc5e,	// (0x00097d4c) single_mobtv_pg_channel_table_pane_t

0x97ea,	// (0x000918d8) main_mobtv_info_pane_g1_ParamLimits

0x97ea,	// (0x000918d8) main_mobtv_info_pane_g1

0x9808,	// (0x000918f6) main_mobtv_info_pane_t1_ParamLimits

0x9808,	// (0x000918f6) main_mobtv_info_pane_t1

0x9880,	// (0x0009196e) main_mobtv_info_pane_t2_ParamLimits

0x9880,	// (0x0009196e) main_mobtv_info_pane_t2

0x0002,

0xfc68,	// (0x00097d56) main_mobtv_info_pane_t_ParamLimits

0xfc68,	// (0x00097d56) main_mobtv_info_pane_t

0x990f,	// (0x000919fd) wait_bar_pane_cp05

0x9921,	// (0x00091a0f) main_mobtv_loading_pane_g1_ParamLimits

0x9921,	// (0x00091a0f) main_mobtv_loading_pane_g1

0x9934,	// (0x00091a22) main_mobtv_loading_pane_g2_ParamLimits

0x9934,	// (0x00091a22) main_mobtv_loading_pane_g2

0x9940,	// (0x00091a2e) main_mobtv_loading_pane_g3_ParamLimits

0x9940,	// (0x00091a2e) main_mobtv_loading_pane_g3

0x0002,

0xfc6f,	// (0x00097d5d) main_mobtv_loading_pane_g_ParamLimits

0xfc6f,	// (0x00097d5d) main_mobtv_loading_pane_g

0xdab7,	// (0x00095ba5) main_mobtv_loading_pane_t1_ParamLimits

0xdab7,	// (0x00095ba5) main_mobtv_loading_pane_t1

0xdacf,	// (0x00095bbd) main_mobtv_loading_pane_t2_ParamLimits

0xdacf,	// (0x00095bbd) main_mobtv_loading_pane_t2

0x0001,

0xfc76,	// (0x00097d64) main_mobtv_loading_pane_t_ParamLimits

0xfc76,	// (0x00097d64) main_mobtv_loading_pane_t

0x9953,	// (0x00091a41) wait_bar_pane_cp06_ParamLimits

0x9953,	// (0x00091a41) wait_bar_pane_cp06

0xdaf3,	// (0x00095be1) main_mobtv_programe_curr_pane_t1

0xdb01,	// (0x00095bef) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc7b,	// (0x00097d69) main_mobtv_programe_curr_pane_t

0xdb0f,	// (0x00095bfd) main_mobtv_programe_next_pane_t1

0xdb1d,	// (0x00095c0b) main_mobtv_programe_next_pane_t2

0xdb2b,	// (0x00095c19) main_mobtv_programe_next_pane_t3

0x0002,

0xfc80,	// (0x00097d6e) main_mobtv_programe_next_pane_t

0x01f3,	// (0x000882e1) bg_popup_mobtv_noti_window_pane

0xdb39,	// (0x00095c27) popup_mobtv_noti_window_g1

0xdb41,	// (0x00095c2f) popup_mobtv_noti_window_t1

0xdb4f,	// (0x00095c3d) popup_mobtv_noti_window_t2

0x0001,

0xfc87,	// (0x00097d75) popup_mobtv_noti_window_t

0xcb00,	// (0x00094bee) bg_popup_mobtv_noti_window_pane_g1

0x01f3,	// (0x000882e1) sc_clock_pane

0x01f3,	// (0x000882e1) main_fs_bigclock_pane

0x90ce,	// (0x000911bc) blid2_tripm_pane_t4_ParamLimits

0x90ce,	// (0x000911bc) blid2_tripm_pane_t4

0x9962,	// (0x00091a50) sc_clock_pane_g1_ParamLimits

0x9962,	// (0x00091a50) sc_clock_pane_g1

0x9974,	// (0x00091a62) sc_clock_pane_t1_ParamLimits

0x9974,	// (0x00091a62) sc_clock_pane_t1

0x9996,	// (0x00091a84) sc_clock_pane_t2_ParamLimits

0x9996,	// (0x00091a84) sc_clock_pane_t2

0x99ae,	// (0x00091a9c) sc_clock_pane_t3_ParamLimits

0x99ae,	// (0x00091a9c) sc_clock_pane_t3

0x0004,

0xfc8c,	// (0x00097d7a) sc_clock_pane_t_ParamLimits

0xfc8c,	// (0x00097d7a) sc_clock_pane_t

0xa766,	// (0x00092854) main_fs_bigclock_indicator_pane_ParamLimits

0xa766,	// (0x00092854) main_fs_bigclock_indicator_pane

0xcd3c,	// (0x00094e2a) main_fs_bigclock_pane_g1_ParamLimits

0xcd3c,	// (0x00094e2a) main_fs_bigclock_pane_g1

0xa772,	// (0x00092860) main_fs_bigclock_pane_t1_ParamLimits

0xa772,	// (0x00092860) main_fs_bigclock_pane_t1

0xa784,	// (0x00092872) main_fs_bigclock_pane_t2_ParamLimits

0xa784,	// (0x00092872) main_fs_bigclock_pane_t2

0xa798,	// (0x00092886) main_fs_bigclock_pane_t3_ParamLimits

0xa798,	// (0x00092886) main_fs_bigclock_pane_t3

0x0002,

0xfe8b,	// (0x00097f79) main_fs_bigclock_pane_t_ParamLimits

0xfe8b,	// (0x00097f79) main_fs_bigclock_pane_t

0xe76b,	// (0x00096859) main_fs_bigclock_indicator_pane_g1

0xd83b,	// (0x00095929) ncim_query_content_pane_g2_ParamLimits

0xd83b,	// (0x00095929) ncim_query_content_pane_g2

0x0001,

0xfc19,	// (0x00097d07) ncim_query_content_pane_g_ParamLimits

0xfc19,	// (0x00097d07) ncim_query_content_pane_g

0x99c5,	// (0x00091ab3) sc_clock_pane_t4_ParamLimits

0x99c5,	// (0x00091ab3) sc_clock_pane_t4

0x2796,	// (0x0008a884) main_radioblah_pane

0x133d,	// (0x0008942b) cell_call4_button_pane_t1_copy1_ParamLimits

0x133d,	// (0x0008942b) cell_call4_button_pane_t1_copy1

0x9648,	// (0x00091736) main_ncimui_pane_t1_ParamLimits

0x9648,	// (0x00091736) main_ncimui_pane_t1

0x965a,	// (0x00091748) main_ncimui_pane_t2_ParamLimits

0x965a,	// (0x00091748) main_ncimui_pane_t2

0x0002,

0xfc12,	// (0x00097d00) main_ncimui_pane_t_ParamLimits

0xfc12,	// (0x00097d00) main_ncimui_pane_t

0xdc7d,	// (0x00095d6b) main_radioblah_anim_pane_ParamLimits

0xdc7d,	// (0x00095d6b) main_radioblah_anim_pane

0xdc8e,	// (0x00095d7c) main_radioblah_info_pane_ParamLimits

0xdc8e,	// (0x00095d7c) main_radioblah_info_pane

0xdca2,	// (0x00095d90) main_radioblah_pane_t1_ParamLimits

0xdca2,	// (0x00095d90) main_radioblah_pane_t1

0xdcbe,	// (0x00095dac) main_radioblah_pane_t2_ParamLimits

0xdcbe,	// (0x00095dac) main_radioblah_pane_t2

0x0003,

0xfcad,	// (0x00097d9b) main_radioblah_pane_t_ParamLimits

0xfcad,	// (0x00097d9b) main_radioblah_pane_t

0x9a6e,	// (0x00091b5c) main_radioblah_rocker_ctrl_pane_ParamLimits

0x9a6e,	// (0x00091b5c) main_radioblah_rocker_ctrl_pane

0xdd06,	// (0x00095df4) main_radioblah_info_pane_t1_ParamLimits

0xdd06,	// (0x00095df4) main_radioblah_info_pane_t1

0x9ac6,	// (0x00091bb4) main_radioblah_info_pane_t2_ParamLimits

0x9ac6,	// (0x00091bb4) main_radioblah_info_pane_t2

0x0003,

0xfcb6,	// (0x00097da4) main_radioblah_info_pane_t_ParamLimits

0xfcb6,	// (0x00097da4) main_radioblah_info_pane_t

0xcb00,	// (0x00094bee) main_radioblah_rocker_ctrl_pane_g1

0x9b76,	// (0x00091c64) main_radioblah_rocker_ctrl_pane_g2

0x9b7e,	// (0x00091c6c) main_radioblah_rocker_ctrl_pane_g3

0x9b86,	// (0x00091c74) main_radioblah_rocker_ctrl_pane_g4

0x9b8e,	// (0x00091c7c) main_radioblah_rocker_ctrl_pane_g5

0x9b96,	// (0x00091c84) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcbf,	// (0x00097dad) main_radioblah_rocker_ctrl_pane_g

0x9616,	// (0x00091704) main_cset_text2_pane_t1_copy1_ParamLimits

0xef31,	// (0x0009701f) cam4_image_uncrop_qvga_pane

0xef98,	// (0x00097086) vid4_image_uncrop_qcif_pane

0xf0dd,	// (0x000971cb) cam6_image_uncrop_qvga_pane_ParamLimits

0xf0dd,	// (0x000971cb) cam6_image_uncrop_qvga_pane

0xd47a,	// (0x00095568) vid6_image_uncrop_qcif_pane_ParamLimits

0xd47a,	// (0x00095568) vid6_image_uncrop_qcif_pane

0x01f3,	// (0x000882e1) bg_popup_preview_window_pane_cp03

0xd7ed,	// (0x000958db) list_cset_text2_pane

0xd7f5,	// (0x000958e3) main_cset6_text2_pane_g1

0xd7fd,	// (0x000958eb) main_cset6_text2_pane_t1

0x9b9e,	// (0x00091c8c) list_cset_text2_pane_t1_ParamLimits

0x9b9e,	// (0x00091c8c) list_cset_text2_pane_t1

0x2796,	// (0x0008a884) main_radioblah_pane_ParamLimits

0x98fb,	// (0x000919e9) main_mobtv_info_pane_t3_ParamLimits

0x98fb,	// (0x000919e9) main_mobtv_info_pane_t3

0x9a5c,	// (0x00091b4a) main_radioblah_pane_g1

0x9a96,	// (0x00091b84) main_radioblah_info_pane_g1

0x9b1b,	// (0x00091c09) main_radioblah_info_pane_t3_ParamLimits

0x9b1b,	// (0x00091c09) main_radioblah_info_pane_t3

0x4019,	// (0x0008c107) highlight_cell_cale_month_pane_ParamLimits

0x4019,	// (0x0008c107) highlight_cell_cale_month_pane

0x01f3,	// (0x000882e1) main_phob_fisheye_pane

0xeb17,	// (0x00096c05) scroll_pane_cp0031_ParamLimits

0xeb17,	// (0x00096c05) scroll_pane_cp0031

0xd588,	// (0x00095676) wait_bar_pane_cp08_ParamLimits

0x941d,	// (0x0009150b) cset_list_set_pane_copy1_ParamLimits

0xdd40,	// (0x00095e2e) highlight_cell_cale_month_pane_g1

0x9bb7,	// (0x00091ca5) highlight_cell_cale_month_pane_t1

0xd1ba,	// (0x000952a8) list_gen_pane_cp01

0x1506,	// (0x000895f4) scroll_pane_01

0x9bc5,	// (0x00091cb3) list_single_double_fisheye_pane

0x9bce,	// (0x00091cbc) list_double_fisheye_pane_g1_ParamLimits

0x9bce,	// (0x00091cbc) list_double_fisheye_pane_g1

0x9bda,	// (0x00091cc8) list_double_fisheye_pane_g2_ParamLimits

0x9bda,	// (0x00091cc8) list_double_fisheye_pane_g2

0x9bee,	// (0x00091cdc) list_double_fisheye_pane_g3_ParamLimits

0x9bee,	// (0x00091cdc) list_double_fisheye_pane_g3

0x0004,

0xfccc,	// (0x00097dba) list_double_fisheye_pane_g_ParamLimits

0xfccc,	// (0x00097dba) list_double_fisheye_pane_g

0x9c17,	// (0x00091d05) list_double_fisheye_pane_t1_ParamLimits

0x9c17,	// (0x00091d05) list_double_fisheye_pane_t1

0x9c32,	// (0x00091d20) list_double_fisheye_pane_t2_ParamLimits

0x9c32,	// (0x00091d20) list_double_fisheye_pane_t2

0x0001,

0xfcd7,	// (0x00097dc5) list_double_fisheye_pane_t_ParamLimits

0xfcd7,	// (0x00097dc5) list_double_fisheye_pane_t

0x01f3,	// (0x000882e1) main_call5_pane

0x99f0,	// (0x00091ade) sc_swipe_pane_ParamLimits

0x99f0,	// (0x00091ade) sc_swipe_pane

0x9c67,	// (0x00091d55) call5_image_pane_ParamLimits

0x9c67,	// (0x00091d55) call5_image_pane

0x9c84,	// (0x00091d72) call5_swipe_1_pane_ParamLimits

0x9c84,	// (0x00091d72) call5_swipe_1_pane

0x9c97,	// (0x00091d85) call5_swipe_2_pane_ParamLimits

0x9c97,	// (0x00091d85) call5_swipe_2_pane

0x9cc2,	// (0x00091db0) popup_call5_audio_first_window_ParamLimits

0x9cc2,	// (0x00091db0) popup_call5_audio_first_window

0xcd6c,	// (0x00094e5a) call5_swipe_1_pane_g1_ParamLimits

0xcd6c,	// (0x00094e5a) call5_swipe_1_pane_g1

0xdd48,	// (0x00095e36) call5_swipe_1_pane_g2_ParamLimits

0xdd48,	// (0x00095e36) call5_swipe_1_pane_g2

0x0001,

0xfcdc,	// (0x00097dca) call5_swipe_1_pane_g_ParamLimits

0xfcdc,	// (0x00097dca) call5_swipe_1_pane_g

0xdd54,	// (0x00095e42) call5_swipe_1_pane_t1_ParamLimits

0xdd54,	// (0x00095e42) call5_swipe_1_pane_t1

0xcd6c,	// (0x00094e5a) call5_swipe_2_pane_g1_ParamLimits

0xcd6c,	// (0x00094e5a) call5_swipe_2_pane_g1

0xdd69,	// (0x00095e57) call5_swipe_2_pane_g2_ParamLimits

0xdd69,	// (0x00095e57) call5_swipe_2_pane_g2

0x0001,

0xfce1,	// (0x00097dcf) call5_swipe_2_pane_g_ParamLimits

0xfce1,	// (0x00097dcf) call5_swipe_2_pane_g

0xdd75,	// (0x00095e63) call5_swipe_2_pane_t1_ParamLimits

0xdd75,	// (0x00095e63) call5_swipe_2_pane_t1

0xdd8a,	// (0x00095e78) sc_swipe_pane_g1_ParamLimits

0xdd8a,	// (0x00095e78) sc_swipe_pane_g1

0xdd97,	// (0x00095e85) sc_swipe_pane_g2_ParamLimits

0xdd97,	// (0x00095e85) sc_swipe_pane_g2

0x0001,

0xfce6,	// (0x00097dd4) sc_swipe_pane_g_ParamLimits

0xfce6,	// (0x00097dd4) sc_swipe_pane_g

0xdda3,	// (0x00095e91) sc_swipe_pane_t1_ParamLimits

0xdda3,	// (0x00095e91) sc_swipe_pane_t1

0x01f3,	// (0x000882e1) main_cmail_launcher_pane

0x9cd3,	// (0x00091dc1) aid_size_cell_cmail_l_ParamLimits

0x9cd3,	// (0x00091dc1) aid_size_cell_cmail_l

0x9ced,	// (0x00091ddb) grid_cmail_l_pane_ParamLimits

0x9ced,	// (0x00091ddb) grid_cmail_l_pane

0x9d08,	// (0x00091df6) cell_cmail_l_pane_ParamLimits

0x9d08,	// (0x00091df6) cell_cmail_l_pane

0x9d2e,	// (0x00091e1c) cell_cmail_l_pane_g1_ParamLimits

0x9d2e,	// (0x00091e1c) cell_cmail_l_pane_g1

0x9d3a,	// (0x00091e28) cell_cmail_l_pane_t1_ParamLimits

0x9d3a,	// (0x00091e28) cell_cmail_l_pane_t1

0xddb8,	// (0x00095ea6) cell_cmail_l_pane_t2_ParamLimits

0xddb8,	// (0x00095ea6) cell_cmail_l_pane_t2

0x0001,

0xfceb,	// (0x00097dd9) cell_cmail_l_pane_t_ParamLimits

0xfceb,	// (0x00097dd9) cell_cmail_l_pane_t

0x2796,	// (0x0008a884) grid_highlight_pane_cp018_ParamLimits

0x2796,	// (0x0008a884) grid_highlight_pane_cp018

0x2650,	// (0x0008a73e) main2_pane_ParamLimits

0x2650,	// (0x0008a73e) main2_pane

0x0a31,	// (0x00088b1f) popup_sp_fs_action_menu_bg_pane_g1

0x0a39,	// (0x00088b27) popup_sp_fs_action_menu_bg_pane_g2

0x0a41,	// (0x00088b2f) popup_sp_fs_action_menu_bg_pane_g3

0x0a49,	// (0x00088b37) popup_sp_fs_action_menu_bg_pane_g4

0x0a51,	// (0x00088b3f) popup_sp_fs_action_menu_bg_pane_g5

0x0a59,	// (0x00088b47) popup_sp_fs_action_menu_bg_pane_g6

0x0a61,	// (0x00088b4f) popup_sp_fs_action_menu_bg_pane_g7

0x0a69,	// (0x00088b57) popup_sp_fs_action_menu_bg_pane_g8

0x0a71,	// (0x00088b5f) popup_sp_fs_action_menu_bg_pane_g9

0x0a79,	// (0x00088b67) popup_sp_fs_action_menu_bg_pane_g10

0x0a79,	// (0x00088b67) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1bb,	// (0x000972a9) popup_sp_fs_action_menu_bg_pane_g

0x33f6,	// (0x0008b4e4) list_medium_line_x2_t3_g3_g1_ParamLimits

0x33f6,	// (0x0008b4e4) list_medium_line_x2_t3_g3_g1

0x3402,	// (0x0008b4f0) list_medium_line_x2_t3_g3_g2_ParamLimits

0x3402,	// (0x0008b4f0) list_medium_line_x2_t3_g3_g2

0x340e,	// (0x0008b4fc) list_medium_line_x2_t3_g3_g3_ParamLimits

0x340e,	// (0x0008b4fc) list_medium_line_x2_t3_g3_g3

0x0002,

0xf26b,	// (0x00097359) list_medium_line_x2_t3_g3_g_ParamLimits

0xf26b,	// (0x00097359) list_medium_line_x2_t3_g3_g

0x341a,	// (0x0008b508) list_medium_line_x2_t3_g3_t1_ParamLimits

0x341a,	// (0x0008b508) list_medium_line_x2_t3_g3_t1

0x342f,	// (0x0008b51d) list_medium_line_x2_t3_g3_t2_ParamLimits

0x342f,	// (0x0008b51d) list_medium_line_x2_t3_g3_t2

0x3443,	// (0x0008b531) list_medium_line_x2_t3_g3_t3_ParamLimits

0x3443,	// (0x0008b531) list_medium_line_x2_t3_g3_t3

0x0002,

0xf272,	// (0x00097360) list_medium_line_x2_t3_g3_t_ParamLimits

0xf272,	// (0x00097360) list_medium_line_x2_t3_g3_t

0x33f6,	// (0x0008b4e4) list_medium_line_x2_t3_g2_g1_ParamLimits

0x33f6,	// (0x0008b4e4) list_medium_line_x2_t3_g2_g1

0x340e,	// (0x0008b4fc) list_medium_line_x2_t3_g2_g2_ParamLimits

0x340e,	// (0x0008b4fc) list_medium_line_x2_t3_g2_g2

0x0001,

0xf279,	// (0x00097367) list_medium_line_x2_t3_g2_g_ParamLimits

0xf279,	// (0x00097367) list_medium_line_x2_t3_g2_g

0x3458,	// (0x0008b546) list_medium_line_x2_t3_g2_t1_ParamLimits

0x3458,	// (0x0008b546) list_medium_line_x2_t3_g2_t1

0x346e,	// (0x0008b55c) list_medium_line_x2_t3_g2_t2_ParamLimits

0x346e,	// (0x0008b55c) list_medium_line_x2_t3_g2_t2

0x3480,	// (0x0008b56e) list_medium_line_x2_t3_g2_t3_ParamLimits

0x3480,	// (0x0008b56e) list_medium_line_x2_t3_g2_t3

0x0002,

0xf27e,	// (0x0009736c) list_medium_line_x2_t3_g2_t_ParamLimits

0xf27e,	// (0x0009736c) list_medium_line_x2_t3_g2_t

0x33f6,	// (0x0008b4e4) list_medium_line_x2_t4_g4_g1_ParamLimits

0x33f6,	// (0x0008b4e4) list_medium_line_x2_t4_g4_g1

0x349d,	// (0x0008b58b) list_medium_line_x2_t4_g4_g2_ParamLimits

0x349d,	// (0x0008b58b) list_medium_line_x2_t4_g4_g2

0x3402,	// (0x0008b4f0) list_medium_line_x2_t4_g4_g3_ParamLimits

0x3402,	// (0x0008b4f0) list_medium_line_x2_t4_g4_g3

0x34a9,	// (0x0008b597) list_medium_line_x2_t4_g4_g4_ParamLimits

0x34a9,	// (0x0008b597) list_medium_line_x2_t4_g4_g4

0x0003,

0xf285,	// (0x00097373) list_medium_line_x2_t4_g4_g_ParamLimits

0xf285,	// (0x00097373) list_medium_line_x2_t4_g4_g

0x34b5,	// (0x0008b5a3) list_medium_line_x2_t4_g4_t1_ParamLimits

0x34b5,	// (0x0008b5a3) list_medium_line_x2_t4_g4_t1

0x34cf,	// (0x0008b5bd) list_medium_line_x2_t4_g4_t2_ParamLimits

0x34cf,	// (0x0008b5bd) list_medium_line_x2_t4_g4_t2

0x34e5,	// (0x0008b5d3) list_medium_line_x2_t4_g4_t3_ParamLimits

0x34e5,	// (0x0008b5d3) list_medium_line_x2_t4_g4_t3

0x34fa,	// (0x0008b5e8) list_medium_line_x2_t4_g4_t4_ParamLimits

0x34fa,	// (0x0008b5e8) list_medium_line_x2_t4_g4_t4

0x0003,

0xf28e,	// (0x0009737c) list_medium_line_x2_t4_g4_t_ParamLimits

0xf28e,	// (0x0009737c) list_medium_line_x2_t4_g4_t

0x33f6,	// (0x0008b4e4) list_medium_line_x2_t2_g4_g1_ParamLimits

0x33f6,	// (0x0008b4e4) list_medium_line_x2_t2_g4_g1

0x349d,	// (0x0008b58b) list_medium_line_x2_t2_g4_g2_ParamLimits

0x349d,	// (0x0008b58b) list_medium_line_x2_t2_g4_g2

0x3402,	// (0x0008b4f0) list_medium_line_x2_t2_g4_g3_ParamLimits

0x3402,	// (0x0008b4f0) list_medium_line_x2_t2_g4_g3

0x340e,	// (0x0008b4fc) list_medium_line_x2_t2_g4_g4_ParamLimits

0x340e,	// (0x0008b4fc) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2f5,	// (0x000973e3) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2f5,	// (0x000973e3) list_medium_line_x2_t2_g4_g

0x4037,	// (0x0008c125) list_medium_line_x2_t2_g4_t1_ParamLimits

0x4037,	// (0x0008c125) list_medium_line_x2_t2_g4_t1

0x3443,	// (0x0008b531) list_medium_line_x2_t2_g4_t2_ParamLimits

0x3443,	// (0x0008b531) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2fe,	// (0x000973ec) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2fe,	// (0x000973ec) list_medium_line_x2_t2_g4_t

0x33f6,	// (0x0008b4e4) list_medium_line_x2_t2_g3_g1_ParamLimits

0x33f6,	// (0x0008b4e4) list_medium_line_x2_t2_g3_g1

0x3402,	// (0x0008b4f0) list_medium_line_x2_t2_g3_g2_ParamLimits

0x3402,	// (0x0008b4f0) list_medium_line_x2_t2_g3_g2

0x340e,	// (0x0008b4fc) list_medium_line_x2_t2_g3_g3_ParamLimits

0x340e,	// (0x0008b4fc) list_medium_line_x2_t2_g3_g3

0x0002,

0xf26b,	// (0x00097359) list_medium_line_x2_t2_g3_g_ParamLimits

0xf26b,	// (0x00097359) list_medium_line_x2_t2_g3_g

0x404c,	// (0x0008c13a) list_medium_line_x2_t2_g3_t1_ParamLimits

0x404c,	// (0x0008c13a) list_medium_line_x2_t2_g3_t1

0x3443,	// (0x0008b531) list_medium_line_x2_t2_g3_t2_ParamLimits

0x3443,	// (0x0008b531) list_medium_line_x2_t2_g3_t2

0x0001,

0xf303,	// (0x000973f1) list_medium_line_x2_t2_g3_t_ParamLimits

0xf303,	// (0x000973f1) list_medium_line_x2_t2_g3_t

0x4373,	// (0x0008c461) main_sp_fs_list_pane_ParamLimits

0x4373,	// (0x0008c461) main_sp_fs_list_pane

0x437f,	// (0x0008c46d) sp_fs_scroll_pane_ParamLimits

0x437f,	// (0x0008c46d) sp_fs_scroll_pane

0x438b,	// (0x0008c479) list_medium_line_x2_t3_t1

0x439b,	// (0x0008c489) list_medium_line_x2_t3_t2

0x43a9,	// (0x0008c497) list_medium_line_x2_t3_t3

0x0002,

0xf34e,	// (0x0009743c) list_medium_line_x2_t3_t

0x43b7,	// (0x0008c4a5) list_medium_line_x3_t4_t1

0x43c7,	// (0x0008c4b5) list_medium_line_x3_t4_t2

0x43d5,	// (0x0008c4c3) list_medium_line_x3_t4_t3

0x43a9,	// (0x0008c497) list_medium_line_x3_t4_t4

0x0003,

0xf355,	// (0x00097443) list_medium_line_x3_t4_t

0x43e3,	// (0x0008c4d1) list_medium_line_x4_t5_t1

0x43f3,	// (0x0008c4e1) list_medium_line_x4_t5_t2

0x43d5,	// (0x0008c4c3) list_medium_line_x4_t5_t3

0x4401,	// (0x0008c4ef) list_medium_line_x4_t5_t4

0x43a9,	// (0x0008c497) list_medium_line_x4_t5_t5

0x0004,

0xf35e,	// (0x0009744c) list_medium_line_x4_t5_t

0x33f6,	// (0x0008b4e4) list_medium_line_t4_g4_g1_ParamLimits

0x33f6,	// (0x0008b4e4) list_medium_line_t4_g4_g1

0x34a9,	// (0x0008b597) list_medium_line_t4_g4_g2_ParamLimits

0x34a9,	// (0x0008b597) list_medium_line_t4_g4_g2

0x440f,	// (0x0008c4fd) list_medium_line_t4_g4_g3_ParamLimits

0x440f,	// (0x0008c4fd) list_medium_line_t4_g4_g3

0x340e,	// (0x0008b4fc) list_medium_line_t4_g4_g4_ParamLimits

0x340e,	// (0x0008b4fc) list_medium_line_t4_g4_g4

0x0003,

0xf369,	// (0x00097457) list_medium_line_t4_g4_g_ParamLimits

0xf369,	// (0x00097457) list_medium_line_t4_g4_g

0x441b,	// (0x0008c509) list_medium_line_t4_g4_t1_ParamLimits

0x441b,	// (0x0008c509) list_medium_line_t4_g4_t1

0x4430,	// (0x0008c51e) list_medium_line_t4_g4_t2_ParamLimits

0x4430,	// (0x0008c51e) list_medium_line_t4_g4_t2

0x4445,	// (0x0008c533) list_medium_line_t4_g4_t3_ParamLimits

0x4445,	// (0x0008c533) list_medium_line_t4_g4_t3

0x3443,	// (0x0008b531) list_medium_line_t4_g4_t4_ParamLimits

0x3443,	// (0x0008b531) list_medium_line_t4_g4_t4

0x0003,

0xf372,	// (0x00097460) list_medium_line_t4_g4_t_ParamLimits

0xf372,	// (0x00097460) list_medium_line_t4_g4_t

0x478f,	// (0x0008c87d) chi_dic_find_pane_g1

0x5a5b,	// (0x0008db49) main_tport_pane

0xce87,	// (0x00094f75) list_medium_line_plain_t1

0xce9d,	// (0x00094f8b) list_medium_line_t2_g2_g1_ParamLimits

0xce9d,	// (0x00094f8b) list_medium_line_t2_g2_g1

0xcea9,	// (0x00094f97) list_medium_line_t2_g2_g2_ParamLimits

0xcea9,	// (0x00094f97) list_medium_line_t2_g2_g2

0x0001,

0xfa2e,	// (0x00097b1c) list_medium_line_t2_g2_g_ParamLimits

0xfa2e,	// (0x00097b1c) list_medium_line_t2_g2_g

0x8962,	// (0x00090a50) list_medium_line_t2_g2_t1_ParamLimits

0x8962,	// (0x00090a50) list_medium_line_t2_g2_t1

0x897c,	// (0x00090a6a) list_medium_line_t2_g2_t2_ParamLimits

0x897c,	// (0x00090a6a) list_medium_line_t2_g2_t2

0x0001,

0xfa33,	// (0x00097b21) list_medium_line_t2_g2_t_ParamLimits

0xfa33,	// (0x00097b21) list_medium_line_t2_g2_t

0xd1c3,	// (0x000952b1) aid_sp_fs_list_icon_a_sm

0xd1cb,	// (0x000952b9) aid_sp_fs_list_icon_d

0xd1d3,	// (0x000952c1) aid_sp_fs_text_primary

0xd1dc,	// (0x000952ca) aid_sp_fs_text_secondary

0xd1e5,	// (0x000952d3) list_medium_line

0xd1e5,	// (0x000952d3) list_medium_line_g2

0xd1e5,	// (0x000952d3) list_medium_line_g3

0xd1e5,	// (0x000952d3) list_medium_line_plain

0xd1e5,	// (0x000952d3) list_medium_line_plain_t2

0xd1e5,	// (0x000952d3) list_medium_line_plain_t3

0xd1e5,	// (0x000952d3) list_medium_line_right_icon

0xd1e5,	// (0x000952d3) list_medium_line_right_iconx2

0xd1e5,	// (0x000952d3) list_medium_line_t2

0xd1e5,	// (0x000952d3) list_medium_line_t2_g2

0xd1e5,	// (0x000952d3) list_medium_line_t2_g3

0xd1e5,	// (0x000952d3) list_medium_line_t2_right_icon

0xd1e5,	// (0x000952d3) list_medium_line_t2_right_iconx2

0xd1e5,	// (0x000952d3) list_medium_line_t3

0xd1e5,	// (0x000952d3) list_medium_line_t3_g2

0xd1e5,	// (0x000952d3) list_medium_line_t3_g3

0xd1e5,	// (0x000952d3) list_medium_line_t3_right_iconx2

0xd1ee,	// (0x000952dc) list_medium_line_t4_g4

0xd1f7,	// (0x000952e5) list_medium_line_x2

0xd1f7,	// (0x000952e5) list_medium_line_x2_t2_g2

0xd1f7,	// (0x000952e5) list_medium_line_x2_t2_g3

0xd1f7,	// (0x000952e5) list_medium_line_x2_t2_g4

0xd1f7,	// (0x000952e5) list_medium_line_x2_t3

0xd1f7,	// (0x000952e5) list_medium_line_x2_t3_g2

0xd1f7,	// (0x000952e5) list_medium_line_x2_t3_g3

0xd1f7,	// (0x000952e5) list_medium_line_x2_t3_g4

0xd1f7,	// (0x000952e5) list_medium_line_x2_t4_g2

0xd1f7,	// (0x000952e5) list_medium_line_x2_t4_g4

0xd200,	// (0x000952ee) list_medium_line_x3

0xd200,	// (0x000952ee) list_medium_line_x3_t4

0xd200,	// (0x000952ee) list_medium_line_x3_t4_g4

0xd1ee,	// (0x000952dc) list_medium_line_x4_t4

0xd1ee,	// (0x000952dc) list_medium_line_x4_t4_g7

0xd1ee,	// (0x000952dc) list_medium_line_x4_t5

0xd209,	// (0x000952f7) list_single_fs_dyc_pane_ParamLimits

0xd209,	// (0x000952f7) list_single_fs_dyc_pane

0x33f6,	// (0x0008b4e4) list_medium_line_x4_t4_g7_g1_ParamLimits

0x33f6,	// (0x0008b4e4) list_medium_line_x4_t4_g7_g1

0xd71c,	// (0x0009580a) list_medium_line_x4_t4_g7_g2_ParamLimits

0xd71c,	// (0x0009580a) list_medium_line_x4_t4_g7_g2

0xd728,	// (0x00095816) list_medium_line_x4_t4_g7_g3_ParamLimits

0xd728,	// (0x00095816) list_medium_line_x4_t4_g7_g3

0xd737,	// (0x00095825) list_medium_line_x4_t4_g7_g4_ParamLimits

0xd737,	// (0x00095825) list_medium_line_x4_t4_g7_g4

0xd743,	// (0x00095831) list_medium_line_x4_t4_g7_g5_ParamLimits

0xd743,	// (0x00095831) list_medium_line_x4_t4_g7_g5

0xd752,	// (0x00095840) list_medium_line_x4_t4_g7_g6_ParamLimits

0xd752,	// (0x00095840) list_medium_line_x4_t4_g7_g6

0xd761,	// (0x0009584f) list_medium_line_x4_t4_g7_g7_ParamLimits

0xd761,	// (0x0009584f) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbf8,	// (0x00097ce6) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbf8,	// (0x00097ce6) list_medium_line_x4_t4_g7_g

0xd76d,	// (0x0009585b) list_medium_line_x4_t4_g7_t1_ParamLimits

0xd76d,	// (0x0009585b) list_medium_line_x4_t4_g7_t1

0xd782,	// (0x00095870) list_medium_line_x4_t4_g7_t2_ParamLimits

0xd782,	// (0x00095870) list_medium_line_x4_t4_g7_t2

0xd797,	// (0x00095885) list_medium_line_x4_t4_g7_t3_ParamLimits

0xd797,	// (0x00095885) list_medium_line_x4_t4_g7_t3

0xd7ac,	// (0x0009589a) list_medium_line_x4_t4_g7_t4_ParamLimits

0xd7ac,	// (0x0009589a) list_medium_line_x4_t4_g7_t4

0xd7be,	// (0x000958ac) list_medium_line_x4_t4_g7_t5_ParamLimits

0xd7be,	// (0x000958ac) list_medium_line_x4_t4_g7_t5

0x0004,

0xfc07,	// (0x00097cf5) list_medium_line_x4_t4_g7_t_ParamLimits

0xfc07,	// (0x00097cf5) list_medium_line_x4_t4_g7_t

0xd7d0,	// (0x000958be) list_single_dyc_row_pane_ParamLimits

0xd7d0,	// (0x000958be) list_single_dyc_row_pane

0x9c54,	// (0x00091d42) call5_gesture_pane_ParamLimits

0x9c54,	// (0x00091d42) call5_gesture_pane

0x9caa,	// (0x00091d98) call5_windows_pane_ParamLimits

0x9caa,	// (0x00091d98) call5_windows_pane

0x9d50,	// (0x00091e3e) call5_swipe_1_pane_cp_ParamLimits

0x9d50,	// (0x00091e3e) call5_swipe_1_pane_cp

0x9d5c,	// (0x00091e4a) call5_swipe_2_pane_cp_ParamLimits

0x9d5c,	// (0x00091e4a) call5_swipe_2_pane_cp

0xb1b8,	// (0x000932a6) call5_image_pane_cp

0x9d68,	// (0x00091e56) popup_call5_audio_first_window_cp_ParamLimits

0x9d68,	// (0x00091e56) popup_call5_audio_first_window_cp

0xdd8a,	// (0x00095e78) call5_swipe_1_pane_g1_cp_ParamLimits

0xdd8a,	// (0x00095e78) call5_swipe_1_pane_g1_cp

0xddca,	// (0x00095eb8) call5_swipe_1_pane_g2_cp

0xdda3,	// (0x00095e91) call5_swipe_1_pane_t1_cp_ParamLimits

0xdda3,	// (0x00095e91) call5_swipe_1_pane_t1_cp

0xdd8a,	// (0x00095e78) call5_swipe_2_pane_g1_cp_ParamLimits

0xdd8a,	// (0x00095e78) call5_swipe_2_pane_g1_cp

0xddd2,	// (0x00095ec0) call5_swipe_2_pane_g2_cp

0xddda,	// (0x00095ec8) call5_swipe_2_pane_t1_cp_ParamLimits

0xddda,	// (0x00095ec8) call5_swipe_2_pane_t1_cp

0x2796,	// (0x0008a884) main_sp_fs_email_pane

0xddef,	// (0x00095edd) main_sp_fs_listscroll_pane_te

0xddf8,	// (0x00095ee6) popup_sp_fs_action_menu_pane_ParamLimits

0xddf8,	// (0x00095ee6) popup_sp_fs_action_menu_pane

0xcb00,	// (0x00094bee) bg_sp_fs_ctrlbar_pane_g1

0xde3c,	// (0x00095f2a) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xde45,	// (0x00095f33) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xde4e,	// (0x00095f3c) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcb00,	// (0x00094bee) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcf0,	// (0x00097dde) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc8e5,	// (0x000949d3) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc8e5,	// (0x000949d3) bg_sp_fs_ctrlbar_ddmenu_pane

0xde57,	// (0x00095f45) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xde57,	// (0x00095f45) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xde63,	// (0x00095f51) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xde63,	// (0x00095f51) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcf9,	// (0x00097de7) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcf9,	// (0x00097de7) main_sp_fs_ctrlbar_ddmenu_pane_g

0xde6f,	// (0x00095f5d) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xde6f,	// (0x00095f5d) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xde89,	// (0x00095f77) list_medium_line_t2_right_icon_g1

0x9d76,	// (0x00091e64) list_medium_line_t2_right_icon_t1

0x9d86,	// (0x00091e74) list_medium_line_t2_right_icon_t2

0x0001,

0xfcfe,	// (0x00097dec) list_medium_line_t2_right_icon_t

0xc5fa,	// (0x000946e8) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc5fa,	// (0x000946e8) bg_sp_fs_ctrlbar_pane

0x9ddc,	// (0x00091eca) main_sp_fs_ctrlbar_button_pane_cp01

0x9de4,	// (0x00091ed2) main_sp_fs_ctrlbar_ddmenu_pane

0xdec9,	// (0x00095fb7) main_sp_fs_ctrlbar_pane_g1

0xded5,	// (0x00095fc3) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfd03,	// (0x00097df1) main_sp_fs_ctrlbar_pane_g

0xdee1,	// (0x00095fcf) main_sp_fs_ctrlbar_pane_t1

0x9dee,	// (0x00091edc) main_sp_fs_ctrlbar_pane

0x9e12,	// (0x00091f00) main_sp_fs_listscroll_pane_te_cp01

0x9e32,	// (0x00091f20) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x9e32,	// (0x00091f20) popup_sp_fs_action_menu_pane_cp01

0x2796,	// (0x0008a884) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x2796,	// (0x0008a884) bg_sp_fs_highlight_list_pane_cp01

0xdef6,	// (0x00095fe4) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xdef6,	// (0x00095fe4) sp_fs_action_menu_list_gene_pane_g1

0xdf05,	// (0x00095ff3) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xdf05,	// (0x00095ff3) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfd08,	// (0x00097df6) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfd08,	// (0x00097df6) sp_fs_action_menu_list_gene_pane_g

0xdf12,	// (0x00096000) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xdf12,	// (0x00096000) sp_fs_action_menu_list_gene_pane_t1

0xdf2a,	// (0x00096018) sp_fs_action_menu_list_gene_pane_ParamLimits

0xdf2a,	// (0x00096018) sp_fs_action_menu_list_gene_pane

0xdf4b,	// (0x00096039) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xdf4b,	// (0x00096039) popup_sp_fs_action_menu_bg_pane

0xdf59,	// (0x00096047) sp_fs_action_menu_list_pane_ParamLimits

0xdf59,	// (0x00096047) sp_fs_action_menu_list_pane

0xdf7b,	// (0x00096069) sp_fs_scroll_pane_cp01_ParamLimits

0xdf7b,	// (0x00096069) sp_fs_scroll_pane_cp01

0x9e4e,	// (0x00091f3c) list_medium_line_plain_t2_t1

0x9e5e,	// (0x00091f4c) list_medium_line_plain_t2_t2

0x0001,

0xfd0d,	// (0x00097dfb) list_medium_line_plain_t2_t

0x9e6e,	// (0x00091f5c) list_medium_line_plain_t3_t1

0x9e7e,	// (0x00091f6c) list_medium_line_plain_t3_t2

0x9e8c,	// (0x00091f7a) list_medium_line_plain_t3_t3

0x0002,

0xfd12,	// (0x00097e00) list_medium_line_plain_t3_t

0x33f6,	// (0x0008b4e4) list_medium_line_x2_t2_g2_g1_ParamLimits

0x33f6,	// (0x0008b4e4) list_medium_line_x2_t2_g2_g1

0x340e,	// (0x0008b4fc) list_medium_line_x2_t2_g2_g2_ParamLimits

0x340e,	// (0x0008b4fc) list_medium_line_x2_t2_g2_g2

0x0001,

0xf279,	// (0x00097367) list_medium_line_x2_t2_g2_g_ParamLimits

0xf279,	// (0x00097367) list_medium_line_x2_t2_g2_g

0x441b,	// (0x0008c509) list_medium_line_x2_t2_g2_t1_ParamLimits

0x441b,	// (0x0008c509) list_medium_line_x2_t2_g2_t1

0x3443,	// (0x0008b531) list_medium_line_x2_t2_g2_t2_ParamLimits

0x3443,	// (0x0008b531) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd19,	// (0x00097e07) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd19,	// (0x00097e07) list_medium_line_x2_t2_g2_t

0x33f6,	// (0x0008b4e4) list_medium_line_x2_t4_g2_g1_ParamLimits

0x33f6,	// (0x0008b4e4) list_medium_line_x2_t4_g2_g1

0xdfa1,	// (0x0009608f) list_medium_line_x2_t4_g2_g2_ParamLimits

0xdfa1,	// (0x0009608f) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd1e,	// (0x00097e0c) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd1e,	// (0x00097e0c) list_medium_line_x2_t4_g2_g

0x9e9a,	// (0x00091f88) list_medium_line_x2_t4_g2_t1_ParamLimits

0x9e9a,	// (0x00091f88) list_medium_line_x2_t4_g2_t1

0x9eb4,	// (0x00091fa2) list_medium_line_x2_t4_g2_t2_ParamLimits

0x9eb4,	// (0x00091fa2) list_medium_line_x2_t4_g2_t2

0x9ec9,	// (0x00091fb7) list_medium_line_x2_t4_g2_t3_ParamLimits

0x9ec9,	// (0x00091fb7) list_medium_line_x2_t4_g2_t3

0x3443,	// (0x0008b531) list_medium_line_x2_t4_g2_t4_ParamLimits

0x3443,	// (0x0008b531) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd23,	// (0x00097e11) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd23,	// (0x00097e11) list_medium_line_x2_t4_g2_t

0xdfb3,	// (0x000960a1) list_medium_line_t3_right_iconx2_g1

0xde89,	// (0x00095f77) list_medium_line_t3_right_iconx2_g2

0x9ede,	// (0x00091fcc) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd2c,	// (0x00097e1a) list_medium_line_t3_right_iconx2_g

0x9ee8,	// (0x00091fd6) list_medium_line_t3_right_iconx2_t1

0x9ef8,	// (0x00091fe6) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd33,	// (0x00097e21) list_medium_line_t3_right_iconx2_t

0x33f6,	// (0x0008b4e4) list_medium_line_x3_t4_g4_g1_ParamLimits

0x33f6,	// (0x0008b4e4) list_medium_line_x3_t4_g4_g1

0x3402,	// (0x0008b4f0) list_medium_line_x3_t4_g4_g2_ParamLimits

0x3402,	// (0x0008b4f0) list_medium_line_x3_t4_g4_g2

0x34a9,	// (0x0008b597) list_medium_line_x3_t4_g4_g3_ParamLimits

0x34a9,	// (0x0008b597) list_medium_line_x3_t4_g4_g3

0xdfbb,	// (0x000960a9) list_medium_line_x3_t4_g4_g4_ParamLimits

0xdfbb,	// (0x000960a9) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd38,	// (0x00097e26) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd38,	// (0x00097e26) list_medium_line_x3_t4_g4_g

0x9f06,	// (0x00091ff4) list_medium_line_x3_t4_g4_t1_ParamLimits

0x9f06,	// (0x00091ff4) list_medium_line_x3_t4_g4_t1

0x9f1d,	// (0x0009200b) list_medium_line_x3_t4_g4_t2_ParamLimits

0x9f1d,	// (0x0009200b) list_medium_line_x3_t4_g4_t2

0x4430,	// (0x0008c51e) list_medium_line_x3_t4_g4_t3_ParamLimits

0x4430,	// (0x0008c51e) list_medium_line_x3_t4_g4_t3

0xdfc7,	// (0x000960b5) list_medium_line_x3_t4_g4_t4_ParamLimits

0xdfc7,	// (0x000960b5) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd41,	// (0x00097e2f) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd41,	// (0x00097e2f) list_medium_line_x3_t4_g4_t

0x9f36,	// (0x00092024) list_single_dyc_row_text_pane_t1_ParamLimits

0x9f36,	// (0x00092024) list_single_dyc_row_text_pane_t1

0x9f7f,	// (0x0009206d) list_single_dyc_row_text_pane_t2_ParamLimits

0x9f7f,	// (0x0009206d) list_single_dyc_row_text_pane_t2

0xdfe4,	// (0x000960d2) list_single_dyc_row_text_pane_t3_ParamLimits

0xdfe4,	// (0x000960d2) list_single_dyc_row_text_pane_t3

0x0002,

0xfd4a,	// (0x00097e38) list_single_dyc_row_text_pane_t_ParamLimits

0xfd4a,	// (0x00097e38) list_single_dyc_row_text_pane_t

0xdff6,	// (0x000960e4) list_single_dyc_row_pane_g1_ParamLimits

0xdff6,	// (0x000960e4) list_single_dyc_row_pane_g1

0xe002,	// (0x000960f0) list_single_dyc_row_pane_g2_ParamLimits

0xe002,	// (0x000960f0) list_single_dyc_row_pane_g2

0xe00e,	// (0x000960fc) list_single_dyc_row_pane_g3_ParamLimits

0xe00e,	// (0x000960fc) list_single_dyc_row_pane_g3

0xe01a,	// (0x00096108) list_single_dyc_row_pane_g4_ParamLimits

0xe01a,	// (0x00096108) list_single_dyc_row_pane_g4

0x0003,

0xfd51,	// (0x00097e3f) list_single_dyc_row_pane_g_ParamLimits

0xfd51,	// (0x00097e3f) list_single_dyc_row_pane_g

0xe026,	// (0x00096114) list_single_dyc_row_text_pane_ParamLimits

0xe026,	// (0x00096114) list_single_dyc_row_text_pane

0x01f3,	// (0x000882e1) bg_sp_fs_scroll_pane

0xe045,	// (0x00096133) thumb_sp_fs_scroll_pane

0xce9d,	// (0x00094f8b) list_medium_line_g1_ParamLimits

0xce9d,	// (0x00094f8b) list_medium_line_g1

0xe04e,	// (0x0009613c) list_medium_line_t1_ParamLimits

0xe04e,	// (0x0009613c) list_medium_line_t1

0x33f6,	// (0x0008b4e4) list_medium_line_x2_g1_ParamLimits

0x33f6,	// (0x0008b4e4) list_medium_line_x2_g1

0x3402,	// (0x0008b4f0) list_medium_line_x2_g2_ParamLimits

0x3402,	// (0x0008b4f0) list_medium_line_x2_g2

0x0001,

0xfd5a,	// (0x00097e48) list_medium_line_x2_g_ParamLimits

0xfd5a,	// (0x00097e48) list_medium_line_x2_g

0xe063,	// (0x00096151) list_medium_line_x2_t1_ParamLimits

0xe063,	// (0x00096151) list_medium_line_x2_t1

0x33f6,	// (0x0008b4e4) list_medium_line_x3_g1_ParamLimits

0x33f6,	// (0x0008b4e4) list_medium_line_x3_g1

0x3402,	// (0x0008b4f0) list_medium_line_x3_g2_ParamLimits

0x3402,	// (0x0008b4f0) list_medium_line_x3_g2

0x0001,

0xfd5a,	// (0x00097e48) list_medium_line_x3_g_ParamLimits

0xfd5a,	// (0x00097e48) list_medium_line_x3_g

0xe063,	// (0x00096151) list_medium_line_x3_t1_ParamLimits

0xe063,	// (0x00096151) list_medium_line_x3_t1

0xe079,	// (0x00096167) thumb_sp_fs_scroll_pane_g1

0xe082,	// (0x00096170) thumb_sp_fs_scroll_pane_g2

0xe08b,	// (0x00096179) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd5f,	// (0x00097e4d) thumb_sp_fs_scroll_pane_g

0xe079,	// (0x00096167) bg_sp_fs_scroll_pane_g1

0xe082,	// (0x00096170) bg_sp_fs_scroll_pane_g2

0xe08b,	// (0x00096179) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd5f,	// (0x00097e4d) bg_sp_fs_scroll_pane_g

0x33f6,	// (0x0008b4e4) list_medium_line_x2_t3_g4_g1_ParamLimits

0x33f6,	// (0x0008b4e4) list_medium_line_x2_t3_g4_g1

0x349d,	// (0x0008b58b) list_medium_line_x2_t3_g4_g2_ParamLimits

0x349d,	// (0x0008b58b) list_medium_line_x2_t3_g4_g2

0x3402,	// (0x0008b4f0) list_medium_line_x2_t3_g4_g3_ParamLimits

0x3402,	// (0x0008b4f0) list_medium_line_x2_t3_g4_g3

0x340e,	// (0x0008b4fc) list_medium_line_x2_t3_g4_g4_ParamLimits

0x340e,	// (0x0008b4fc) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2f5,	// (0x000973e3) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2f5,	// (0x000973e3) list_medium_line_x2_t3_g4_g

0x9fd9,	// (0x000920c7) list_medium_line_x2_t3_g4_t1_ParamLimits

0x9fd9,	// (0x000920c7) list_medium_line_x2_t3_g4_t1

0x9fef,	// (0x000920dd) list_medium_line_x2_t3_g4_t2_ParamLimits

0x9fef,	// (0x000920dd) list_medium_line_x2_t3_g4_t2

0x3443,	// (0x0008b531) list_medium_line_x2_t3_g4_t3_ParamLimits

0x3443,	// (0x0008b531) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd66,	// (0x00097e54) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd66,	// (0x00097e54) list_medium_line_x2_t3_g4_t

0xce9d,	// (0x00094f8b) list_medium_line_g2_g1_ParamLimits

0xce9d,	// (0x00094f8b) list_medium_line_g2_g1

0xcea9,	// (0x00094f97) list_medium_line_g2_g2_ParamLimits

0xcea9,	// (0x00094f97) list_medium_line_g2_g2

0x0001,

0xfa2e,	// (0x00097b1c) list_medium_line_g2_g_ParamLimits

0xfa2e,	// (0x00097b1c) list_medium_line_g2_g

0xe094,	// (0x00096182) list_medium_line_g2_t1_ParamLimits

0xe094,	// (0x00096182) list_medium_line_g2_t1

0xce9d,	// (0x00094f8b) list_medium_line_t3_g2_g1_ParamLimits

0xce9d,	// (0x00094f8b) list_medium_line_t3_g2_g1

0xcea9,	// (0x00094f97) list_medium_line_t3_g2_g2_ParamLimits

0xcea9,	// (0x00094f97) list_medium_line_t3_g2_g2

0x0001,

0xfa2e,	// (0x00097b1c) list_medium_line_t3_g2_g_ParamLimits

0xfa2e,	// (0x00097b1c) list_medium_line_t3_g2_g

0xa009,	// (0x000920f7) list_medium_line_t3_g2_t1_ParamLimits

0xa009,	// (0x000920f7) list_medium_line_t3_g2_t1

0xa020,	// (0x0009210e) list_medium_line_t3_g2_t2_ParamLimits

0xa020,	// (0x0009210e) list_medium_line_t3_g2_t2

0xa035,	// (0x00092123) list_medium_line_t3_g2_t3_ParamLimits

0xa035,	// (0x00092123) list_medium_line_t3_g2_t3

0x0002,

0xfd6d,	// (0x00097e5b) list_medium_line_t3_g2_t_ParamLimits

0xfd6d,	// (0x00097e5b) list_medium_line_t3_g2_t

0xde89,	// (0x00095f77) list_medium_line_right_icon_g1

0xe0a9,	// (0x00096197) list_medium_line_right_icon_t1

0xce9d,	// (0x00094f8b) list_medium_line_t2_g1_ParamLimits

0xce9d,	// (0x00094f8b) list_medium_line_t2_g1

0xa04e,	// (0x0009213c) list_medium_line_t2_t1_ParamLimits

0xa04e,	// (0x0009213c) list_medium_line_t2_t1

0xa068,	// (0x00092156) list_medium_line_t2_t2_ParamLimits

0xa068,	// (0x00092156) list_medium_line_t2_t2

0x0001,

0xfd74,	// (0x00097e62) list_medium_line_t2_t_ParamLimits

0xfd74,	// (0x00097e62) list_medium_line_t2_t

0xce9d,	// (0x00094f8b) list_medium_line_t3_g1_ParamLimits

0xce9d,	// (0x00094f8b) list_medium_line_t3_g1

0xa07d,	// (0x0009216b) list_medium_line_t3_t1_ParamLimits

0xa07d,	// (0x0009216b) list_medium_line_t3_t1

0xa097,	// (0x00092185) list_medium_line_t3_t2_ParamLimits

0xa097,	// (0x00092185) list_medium_line_t3_t2

0xa0ac,	// (0x0009219a) list_medium_line_t3_t3_ParamLimits

0xa0ac,	// (0x0009219a) list_medium_line_t3_t3

0x0002,

0xfd79,	// (0x00097e67) list_medium_line_t3_t_ParamLimits

0xfd79,	// (0x00097e67) list_medium_line_t3_t

0xce9d,	// (0x00094f8b) list_medium_line_g3_g1_ParamLimits

0xce9d,	// (0x00094f8b) list_medium_line_g3_g1

0xe0b7,	// (0x000961a5) list_medium_line_g3_g2_ParamLimits

0xe0b7,	// (0x000961a5) list_medium_line_g3_g2

0xcea9,	// (0x00094f97) list_medium_line_g3_g3_ParamLimits

0xcea9,	// (0x00094f97) list_medium_line_g3_g3

0x0002,

0xfd80,	// (0x00097e6e) list_medium_line_g3_g_ParamLimits

0xfd80,	// (0x00097e6e) list_medium_line_g3_g

0xe0c3,	// (0x000961b1) list_medium_line_g3_t1_ParamLimits

0xe0c3,	// (0x000961b1) list_medium_line_g3_t1

0xce9d,	// (0x00094f8b) list_medium_line_t2_g3_g1_ParamLimits

0xce9d,	// (0x00094f8b) list_medium_line_t2_g3_g1

0xe0b7,	// (0x000961a5) list_medium_line_t2_g3_g2_ParamLimits

0xe0b7,	// (0x000961a5) list_medium_line_t2_g3_g2

0xcea9,	// (0x00094f97) list_medium_line_t2_g3_g3_ParamLimits

0xcea9,	// (0x00094f97) list_medium_line_t2_g3_g3

0x0002,

0xfd80,	// (0x00097e6e) list_medium_line_t2_g3_g_ParamLimits

0xfd80,	// (0x00097e6e) list_medium_line_t2_g3_g

0xa0c1,	// (0x000921af) list_medium_line_t2_g3_t1_ParamLimits

0xa0c1,	// (0x000921af) list_medium_line_t2_g3_t1

0xa0db,	// (0x000921c9) list_medium_line_t2_g3_t2_ParamLimits

0xa0db,	// (0x000921c9) list_medium_line_t2_g3_t2

0x0001,

0xfd87,	// (0x00097e75) list_medium_line_t2_g3_t_ParamLimits

0xfd87,	// (0x00097e75) list_medium_line_t2_g3_t

0xce9d,	// (0x00094f8b) list_medium_line_t3_g3_g1_ParamLimits

0xce9d,	// (0x00094f8b) list_medium_line_t3_g3_g1

0xe0b7,	// (0x000961a5) list_medium_line_t3_g3_g2_ParamLimits

0xe0b7,	// (0x000961a5) list_medium_line_t3_g3_g2

0xcea9,	// (0x00094f97) list_medium_line_t3_g3_g3_ParamLimits

0xcea9,	// (0x00094f97) list_medium_line_t3_g3_g3

0x0002,

0xfd80,	// (0x00097e6e) list_medium_line_t3_g3_g_ParamLimits

0xfd80,	// (0x00097e6e) list_medium_line_t3_g3_g

0xa0f2,	// (0x000921e0) list_medium_line_t3_g3_t1_ParamLimits

0xa0f2,	// (0x000921e0) list_medium_line_t3_g3_t1

0xa106,	// (0x000921f4) list_medium_line_t3_g3_t2_ParamLimits

0xa106,	// (0x000921f4) list_medium_line_t3_g3_t2

0xa118,	// (0x00092206) list_medium_line_t3_g3_t3_ParamLimits

0xa118,	// (0x00092206) list_medium_line_t3_g3_t3

0x0002,

0xfd8c,	// (0x00097e7a) list_medium_line_t3_g3_t_ParamLimits

0xfd8c,	// (0x00097e7a) list_medium_line_t3_g3_t

0xdfb3,	// (0x000960a1) list_medium_line_right_iconx2_g1

0xde89,	// (0x00095f77) list_medium_line_right_iconx2_g2

0x0001,

0xfd93,	// (0x00097e81) list_medium_line_right_iconx2_g

0xe0d8,	// (0x000961c6) list_medium_line_right_iconx2_t1

0xdfb3,	// (0x000960a1) list_medium_line_t2_right_iconx2_g1

0xde89,	// (0x00095f77) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd93,	// (0x00097e81) list_medium_line_t2_right_iconx2_g

0xa12c,	// (0x0009221a) list_medium_line_t2_right_iconx2_t1

0xa13c,	// (0x0009222a) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd98,	// (0x00097e86) list_medium_line_t2_right_iconx2_t

0xe0e6,	// (0x000961d4) list_medium_line_x4_t4_t1

0xa14a,	// (0x00092238) list_medium_line_x4_t4_t2

0xa15a,	// (0x00092248) list_medium_line_x4_t4_t3

0xa16a,	// (0x00092258) list_medium_line_x4_t4_t4

0x0003,

0xfd9d,	// (0x00097e8b) list_medium_line_x4_t4_t

0xa1bd,	// (0x000922ab) tport_appsw_pane_ParamLimits

0xa1bd,	// (0x000922ab) tport_appsw_pane

0xa1ce,	// (0x000922bc) tport_contact_pane_ParamLimits

0xa1ce,	// (0x000922bc) tport_contact_pane

0xa1e7,	// (0x000922d5) tport_listscroll_pane_ParamLimits

0xa1e7,	// (0x000922d5) tport_listscroll_pane

0xa202,	// (0x000922f0) cell_tport_appsw_pane_ParamLimits

0xa202,	// (0x000922f0) cell_tport_appsw_pane

0x13cc,	// (0x000894ba) tport_appsw_pane_g1_ParamLimits

0x13cc,	// (0x000894ba) tport_appsw_pane_g1

0xe0f4,	// (0x000961e2) tport_contact_pane_g1

0xd8c1,	// (0x000959af) tport_contact_pane_t1

0xe0fd,	// (0x000961eb) tport_contact_pane_t2

0x0001,

0xfda6,	// (0x00097e94) tport_contact_pane_t

0xe10b,	// (0x000961f9) list_tport_pane

0xe114,	// (0x00096202) scroll_pane_cp_030

0xe125,	// (0x00096213) cell_tport_appsw_pane_g1

0xe135,	// (0x00096223) cell_tport_appsw_pane_t1

0x01f3,	// (0x000882e1) grid_highlight_pane_cp019

0xa242,	// (0x00092330) list_tport_double_graphic_pane_ParamLimits

0xa242,	// (0x00092330) list_tport_double_graphic_pane

0x2796,	// (0x0008a884) list_highlight_pane_cp023_ParamLimits

0x2796,	// (0x0008a884) list_highlight_pane_cp023

0xa24f,	// (0x0009233d) list_tport_double_graphic_pane_g1_ParamLimits

0xa24f,	// (0x0009233d) list_tport_double_graphic_pane_g1

0xa25c,	// (0x0009234a) list_tport_double_graphic_pane_t1_ParamLimits

0xa25c,	// (0x0009234a) list_tport_double_graphic_pane_t1

0xa271,	// (0x0009235f) list_tport_double_graphic_pane_t2_ParamLimits

0xa271,	// (0x0009235f) list_tport_double_graphic_pane_t2

0x0001,

0xfdb2,	// (0x00097ea0) list_tport_double_graphic_pane_t_ParamLimits

0xfdb2,	// (0x00097ea0) list_tport_double_graphic_pane_t

0x01f3,	// (0x000882e1) main_cale_note_pane

0x8140,	// (0x0009022e) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x8140,	// (0x0009022e) cell_vitu2_function_top_wide_pane_cp01

0x990f,	// (0x000919fd) wait_bar_pane_cp05_ParamLimits

0x01f3,	// (0x000882e1) listscroll_cmail_pane

0xe14b,	// (0x00096239) list_cmail_pane

0xa28d,	// (0x0009237b) list_cmail_body_pane

0xe163,	// (0x00096251) list_single_cmail_header_caption_pane

0xa2a1,	// (0x0009238f) list_single_cmail_header_detail_pane_ParamLimits

0xa2a1,	// (0x0009238f) list_single_cmail_header_detail_pane

0xa2cb,	// (0x000923b9) list_single_cmail_header_caption_pane_t1

0xa2db,	// (0x000923c9) list_single_cmail_header_detail_pane_g1_ParamLimits

0xa2db,	// (0x000923c9) list_single_cmail_header_detail_pane_g1

0xe185,	// (0x00096273) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe185,	// (0x00096273) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdb7,	// (0x00097ea5) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdb7,	// (0x00097ea5) list_single_cmail_header_detail_pane_g

0xe19e,	// (0x0009628c) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe19e,	// (0x0009628c) list_single_cmail_header_detail_pane_t1

0xe1d8,	// (0x000962c6) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe1d8,	// (0x000962c6) list_single_cmail_header_editor_pane_bg

0xda50,	// (0x00095b3e) list_cmail_body_pane_g1

0xe1ea,	// (0x000962d8) list_cmail_body_pane_t1

0x13ec,	// (0x000894da) list_single_cmail_header_editor_pane_bg_g1

0x0d94,	// (0x00088e82) list_single_cmail_header_editor_pane_bg_g1_copy1

0x13fc,	// (0x000894ea) list_single_cmail_header_editor_pane_bg_g1_copy2

0x13f4,	// (0x000894e2) list_single_cmail_header_editor_pane_bg_g1_copy3

0xce95,	// (0x00094f83) list_single_cmail_header_editor_pane_bg_g1_copy4

0x141c,	// (0x0008950a) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x140c,	// (0x000894fa) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x1414,	// (0x00089502) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x0d74,	// (0x00088e62) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xa319,	// (0x00092407) calenote_gesture_pane_ParamLimits

0xa319,	// (0x00092407) calenote_gesture_pane

0xa339,	// (0x00092427) calenote_window_pane_ParamLimits

0xa339,	// (0x00092427) calenote_window_pane

0xe1f8,	// (0x000962e6) popup_note_window_cp01

0xa355,	// (0x00092443) calenote_swipe_1_pane_ParamLimits

0xa355,	// (0x00092443) calenote_swipe_1_pane

0x9d5c,	// (0x00091e4a) calenote_swipe_2_pane_ParamLimits

0x9d5c,	// (0x00091e4a) calenote_swipe_2_pane

0xdd8a,	// (0x00095e78) calenote_swipe_1_pane_g1_ParamLimits

0xdd8a,	// (0x00095e78) calenote_swipe_1_pane_g1

0xdd97,	// (0x00095e85) calenote_swipe_1_pane_g2_ParamLimits

0xdd97,	// (0x00095e85) calenote_swipe_1_pane_g2

0x0001,

0xfce6,	// (0x00097dd4) calenote_swipe_1_pane_g_ParamLimits

0xfce6,	// (0x00097dd4) calenote_swipe_1_pane_g

0xe20a,	// (0x000962f8) calenote_swipe_1_pane_t1_ParamLimits

0xe20a,	// (0x000962f8) calenote_swipe_1_pane_t1

0xdd8a,	// (0x00095e78) calenote_swipe_2_pane_g1_ParamLimits

0xdd8a,	// (0x00095e78) calenote_swipe_2_pane_g1

0xe229,	// (0x00096317) calenote_swipe_2_pane_g2_ParamLimits

0xe229,	// (0x00096317) calenote_swipe_2_pane_g2

0x0001,

0xfdc3,	// (0x00097eb1) calenote_swipe_2_pane_g_ParamLimits

0xfdc3,	// (0x00097eb1) calenote_swipe_2_pane_g

0xe235,	// (0x00096323) calenote_swipe_2_pane_t1_ParamLimits

0xe235,	// (0x00096323) calenote_swipe_2_pane_t1

0x01f3,	// (0x000882e1) main_mup_navstr_pane

0x6ded,	// (0x0008eedb) main_mup3_pane_t7_ParamLimits

0x6ded,	// (0x0008eedb) main_mup3_pane_t7

0xed5b,	// (0x00096e49) main_mp4_pane_g6_ParamLimits

0xed5b,	// (0x00096e49) main_mp4_pane_g6

0xeeff,	// (0x00096fed) main_image3_pane_t4_ParamLimits

0xeeff,	// (0x00096fed) main_image3_pane_t4

0xa36a,	// (0x00092458) popup_navstr_preview_pane_ParamLimits

0xa36a,	// (0x00092458) popup_navstr_preview_pane

0xa37e,	// (0x0009246c) scroll_navstr_pane_ParamLimits

0xa37e,	// (0x0009246c) scroll_navstr_pane

0x01f3,	// (0x000882e1) bg_popup_preview_window_pane_cp04

0xe25c,	// (0x0009634a) popup_navstr_preview_pane_t1

0xa392,	// (0x00092480) scroll_navstr_pane_g1_ParamLimits

0xa392,	// (0x00092480) scroll_navstr_pane_g1

0xa3a6,	// (0x00092494) scroll_navstr_pane_t1_ParamLimits

0xa3a6,	// (0x00092494) scroll_navstr_pane_t1

0xe201,	// (0x000962ef) bg_button_pane_cp014

0xe201,	// (0x000962ef) bg_button_pane_cp030

0x9bfa,	// (0x00091ce8) list_double_fisheye_pane_g4_ParamLimits

0x9bfa,	// (0x00091ce8) list_double_fisheye_pane_g4

0x9c06,	// (0x00091cf4) list_double_fisheye_pane_g5_ParamLimits

0x9c06,	// (0x00091cf4) list_double_fisheye_pane_g5

0xe153,	// (0x00096241) sp_fs_scroll_pane_cp03

0xdec9,	// (0x00095fb7) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xded5,	// (0x00095fc3) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfd03,	// (0x00097df1) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xdee1,	// (0x00095fcf) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xa283,	// (0x00092371) sp_fs_scroll_pane_cp02

0x0a9c,	// (0x00088b8a) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x0a9c,	// (0x00088b8a) popup_sp_fs_calendar_preview_list_single_pane

0x01f3,	// (0x000882e1) main_cam6_pano_pane

0x2796,	// (0x0008a884) main_mup3_pane_ParamLimits

0x01f3,	// (0x000882e1) main_phacti_pane

0x97e2,	// (0x000918d0) bg_button_pane_cp11

0x97fc,	// (0x000918ea) main_mobtv_info_pane_g2_ParamLimits

0x97fc,	// (0x000918ea) main_mobtv_info_pane_g2

0x0001,

0xfc63,	// (0x00097d51) main_mobtv_info_pane_g_ParamLimits

0xfc63,	// (0x00097d51) main_mobtv_info_pane_g

0x99d7,	// (0x00091ac5) sc_clock_pane_t5_ParamLimits

0x99d7,	// (0x00091ac5) sc_clock_pane_t5

0x9a5c,	// (0x00091b4a) main_radioblah_pane_g1_ParamLimits

0xdcd6,	// (0x00095dc4) main_radioblah_pane_t3_ParamLimits

0xdcd6,	// (0x00095dc4) main_radioblah_pane_t3

0xdcee,	// (0x00095ddc) main_radioblah_pane_t4_ParamLimits

0xdcee,	// (0x00095ddc) main_radioblah_pane_t4

0x9a84,	// (0x00091b72) main_radioblah_text_pane_ParamLimits

0x9a84,	// (0x00091b72) main_radioblah_text_pane

0x9a96,	// (0x00091b84) main_radioblah_info_pane_g1_ParamLimits

0x9b2f,	// (0x00091c1d) main_radioblah_info_pane_t4_ParamLimits

0x9b2f,	// (0x00091c1d) main_radioblah_info_pane_t4

0x2796,	// (0x0008a884) main_sp_fs_calendar_pane

0xa3bd,	// (0x000924ab) main_phacti_pane_g1

0xa3c5,	// (0x000924b3) phacti_note_pane_ParamLimits

0xa3c5,	// (0x000924b3) phacti_note_pane

0xe273,	// (0x00096361) phacti_term_pane_ParamLimits

0xe273,	// (0x00096361) phacti_term_pane

0xe288,	// (0x00096376) phacti_note_pane_t1_ParamLimits

0xe288,	// (0x00096376) phacti_note_pane_t1

0xe29f,	// (0x0009638d) phacti_term_pane_g1

0xe2a7,	// (0x00096395) phacti_term_pane_t1_ParamLimits

0xe2a7,	// (0x00096395) phacti_term_pane_t1

0xe2d1,	// (0x000963bf) popup_sp_fs_calendar_preview_list_single_pane_g1

0x0b8f,	// (0x00088c7d) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdcd,	// (0x00097ebb) popup_sp_fs_calendar_preview_list_single_pane_g

0xe2d9,	// (0x000963c7) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe2d9,	// (0x000963c7) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe2ee,	// (0x000963dc) aid_popup_sp_fs_bg_corner_pane

0xcb00,	// (0x00094bee) popup_sp_fs_calendar_preview_bg_pane_g1

0x01f3,	// (0x000882e1) popup_sp_fs_calendar_preview_bg_pane

0xe2f6,	// (0x000963e4) popup_sp_fs_calendar_preview_list_pane

0x2796,	// (0x0008a884) bg_main_sp_fs_cale_pane_ParamLimits

0x2796,	// (0x0008a884) bg_main_sp_fs_cale_pane

0xe307,	// (0x000963f5) listscroll_cale_mrui_pane_ParamLimits

0xe307,	// (0x000963f5) listscroll_cale_mrui_pane

0xe31b,	// (0x00096409) listscroll_sp_fs_schedule_track_pane

0xe324,	// (0x00096412) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe324,	// (0x00096412) main_sp_fs_ctrlbar_pane_cp01

0xe335,	// (0x00096423) main_sp_fs_ribbon_pane

0xe33d,	// (0x0009642b) popup_sp_fs_cale_preview_window

0xa41c,	// (0x0009250a) list_single_sp_fs_schedule_track_pane_ParamLimits

0xa41c,	// (0x0009250a) list_single_sp_fs_schedule_track_pane

0x2796,	// (0x0008a884) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x2796,	// (0x0008a884) bg_sp_fs_highlight_list_pane_cp03

0xa42f,	// (0x0009251d) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xa42f,	// (0x0009251d) list_single_sp_fs_schedule_track_pane_g1

0xa43b,	// (0x00092529) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xa43b,	// (0x00092529) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdd2,	// (0x00097ec0) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdd2,	// (0x00097ec0) list_single_sp_fs_schedule_track_pane_g

0xa447,	// (0x00092535) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xa447,	// (0x00092535) list_single_sp_fs_schedule_track_pane_t1

0xa461,	// (0x0009254f) sp_fs_schedule_track_pane_ParamLimits

0xa461,	// (0x0009254f) sp_fs_schedule_track_pane

0xe34f,	// (0x0009643d) sp_fs_schedule_track_pane_g1

0xe357,	// (0x00096445) sp_fs_schedule_track_pane_g2

0xe35f,	// (0x0009644d) sp_fs_schedule_track_pane_g3

0xe367,	// (0x00096455) sp_fs_schedule_track_pane_g4

0xe36f,	// (0x0009645d) sp_fs_schedule_track_pane_g5

0x0004,

0xfdd7,	// (0x00097ec5) sp_fs_schedule_track_pane_g

0x13ec,	// (0x000894da) bg_sp_fs_schedule_viewer_highlight_g1

0x0d94,	// (0x00088e82) bg_sp_fs_schedule_viewer_highlight_g2

0x13f4,	// (0x000894e2) bg_sp_fs_schedule_viewer_highlight_g3

0x13fc,	// (0x000894ea) bg_sp_fs_schedule_viewer_highlight_g4

0xce95,	// (0x00094f83) bg_sp_fs_schedule_viewer_highlight_g5

0x140c,	// (0x000894fa) bg_sp_fs_schedule_viewer_highlight_g6

0x1414,	// (0x00089502) bg_sp_fs_schedule_viewer_highlight_g7

0x141c,	// (0x0008950a) bg_sp_fs_schedule_viewer_highlight_g8

0x0d74,	// (0x00088e62) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfde2,	// (0x00097ed0) bg_sp_fs_schedule_viewer_highlight_g

0x01f3,	// (0x000882e1) bg_main_sp_fs_ribbon_pane

0xa472,	// (0x00092560) main_sp_fs_ribbon_pane_g1

0xe377,	// (0x00096465) main_sp_fs_ribbon_pane_t1

0xa47b,	// (0x00092569) main_sp_fs_ribbon_pane_t2

0xe386,	// (0x00096474) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdf5,	// (0x00097ee3) main_sp_fs_ribbon_pane_t

0xe395,	// (0x00096483) main_sp_fs_ribbon_scheduler_pane

0xe39d,	// (0x0009648b) bg_main_sp_fs_ribbon_pane_g1

0xe3a6,	// (0x00096494) bg_main_sp_fs_ribbon_pane_g2

0xe3af,	// (0x0009649d) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdfc,	// (0x00097eea) bg_main_sp_fs_ribbon_pane_g

0xe3b7,	// (0x000964a5) main_sp_fs_ribbon_scheduler_pane_g1

0xe3c0,	// (0x000964ae) main_sp_fs_ribbon_scheduler_pane_g2

0xe3c9,	// (0x000964b7) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfe03,	// (0x00097ef1) main_sp_fs_ribbon_scheduler_pane_g

0xe3d2,	// (0x000964c0) list_cale_mrui_pane

0xa48a,	// (0x00092578) sp_fs_scroll_pane_cp07_ParamLimits

0xa48a,	// (0x00092578) sp_fs_scroll_pane_cp07

0xa4a0,	// (0x0009258e) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xa4a0,	// (0x0009258e) bg_sp_fs_schedule_viewer_highlight

0xe3db,	// (0x000964c9) list_single_sp_fs_schedule_track_pane_cp01

0xe3e3,	// (0x000964d1) list_sp_fs_schedule_track_pane

0xe3eb,	// (0x000964d9) sp_fs_scroll_pane_cp06_ParamLimits

0xe3eb,	// (0x000964d9) sp_fs_scroll_pane_cp06

0xcb00,	// (0x00094bee) bgmain_sp_fs_calendar_pane_g1

0xa4b0,	// (0x0009259e) list_single_cale_mrui_pane_ParamLimits

0xa4b0,	// (0x0009259e) list_single_cale_mrui_pane

0xe3fd,	// (0x000964eb) list_single_cale_mrui_row_pane_ParamLimits

0xe3fd,	// (0x000964eb) list_single_cale_mrui_row_pane

0xe40a,	// (0x000964f8) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe40a,	// (0x000964f8) list_single_cale_mrui_row_pane_g1

0xe442,	// (0x00096530) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe442,	// (0x00096530) list_single_cale_mrui_row_pane_t1

0xa4d1,	// (0x000925bf) list_single_cale_mrui_row_pane_t2_ParamLimits

0xa4d1,	// (0x000925bf) list_single_cale_mrui_row_pane_t2

0xe454,	// (0x00096542) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe454,	// (0x00096542) list_single_cale_mrui_row_pane_t3

0xe483,	// (0x00096571) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe483,	// (0x00096571) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe0f,	// (0x00097efd) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe0f,	// (0x00097efd) list_single_cale_mrui_row_pane_t

0xa537,	// (0x00092625) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xa537,	// (0x00092625) list_single_cmail_header_editor_pane_bg_cp01

0xa55b,	// (0x00092649) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xa55b,	// (0x00092649) list_single_cmail_header_editor_pane_bg_cp02

0xa579,	// (0x00092667) main_radioblah_text_pane_t1_ParamLimits

0xa579,	// (0x00092667) main_radioblah_text_pane_t1

0xe4b2,	// (0x000965a0) cam6_indi_pane_cp01

0xe4ba,	// (0x000965a8) cam6_mode_pane_cp01

0xe4c2,	// (0x000965b0) cam6_pano_pane

0xe4cb,	// (0x000965b9) cam6_zoom_pane_cp01

0xe4d3,	// (0x000965c1) cam6_pano_image_pane

0xe4de,	// (0x000965cc) cam6_pano_pane_g1

0xda50,	// (0x00095b3e) cam6_pano_pane_g2

0xe4e7,	// (0x000965d5) cam6_pano_pane_g3

0xe4f0,	// (0x000965de) cam6_pano_pane_g4

0x0f4c,	// (0x0008903a) cam6_pano_pane_g5

0xe4f9,	// (0x000965e7) cam6_pano_pane_g6

0xe503,	// (0x000965f1) cam6_pano_pane_g7

0xe50b,	// (0x000965f9) cam6_pano_pane_g8

0xe514,	// (0x00096602) cam6_pano_pane_g9

0x0008,

0xfe18,	// (0x00097f06) cam6_pano_pane_g

0x01f3,	// (0x000882e1) main_browser_tag_pane

0xe254,	// (0x00096342) grid_navstr_albumart_pane

0xe51f,	// (0x0009660d) cell_navstr_albumart_pane_ParamLimits

0xe51f,	// (0x0009660d) cell_navstr_albumart_pane

0xe542,	// (0x00096630) cell_navstr_albumart_pane_g1

0xc417,	// (0x00094505) cell_navstr_albumart_pane_g2

0xc427,	// (0x00094515) cell_navstr_albumart_pane_g3

0xc41f,	// (0x0009450d) cell_navstr_albumart_pane_g4

0x0003,

0xfe2b,	// (0x00097f19) cell_navstr_albumart_pane_g

0xa593,	// (0x00092681) bt_list_pane_ParamLimits

0xa593,	// (0x00092681) bt_list_pane

0xa5a7,	// (0x00092695) bt_list_pane_t1

0xa5b6,	// (0x000926a4) bt_list_pane_t2

0x0001,

0xfe34,	// (0x00097f22) bt_list_pane_t

0x01f3,	// (0x000882e1) main_cale_prevew_pane

0xa5c5,	// (0x000926b3) popup_cale_preview_window_ParamLimits

0xa5c5,	// (0x000926b3) popup_cale_preview_window

0x2796,	// (0x0008a884) bg_popup_preview_window_pane_cp05_ParamLimits

0x2796,	// (0x0008a884) bg_popup_preview_window_pane_cp05

0xe54a,	// (0x00096638) list_cale_preview_pane_ParamLimits

0xe54a,	// (0x00096638) list_cale_preview_pane

0xa5de,	// (0x000926cc) list_double_cale_preview_pane_ParamLimits

0xa5de,	// (0x000926cc) list_double_cale_preview_pane

0xa5f0,	// (0x000926de) list_single_cale_preview_pane_ParamLimits

0xa5f0,	// (0x000926de) list_single_cale_preview_pane

0xa606,	// (0x000926f4) list_single_cale_preview_pane_g1

0xa60e,	// (0x000926fc) list_single_cale_preview_pane_t1_ParamLimits

0xa60e,	// (0x000926fc) list_single_cale_preview_pane_t1

0xa623,	// (0x00092711) list_double_cale_preview_pane_g1

0xa62b,	// (0x00092719) list_double_cale_preview_pane_t1_ParamLimits

0xa62b,	// (0x00092719) list_double_cale_preview_pane_t1

0xa640,	// (0x0009272e) list_double_cale_preview_pane_t2_ParamLimits

0xa640,	// (0x0009272e) list_double_cale_preview_pane_t2

0x0001,

0xfe39,	// (0x00097f27) list_double_cale_preview_pane_t_ParamLimits

0xfe39,	// (0x00097f27) list_double_cale_preview_pane_t

0x01f3,	// (0x000882e1) main_ezdial_pane

0x2796,	// (0x0008a884) main_sp_fs_email_pane_ParamLimits

0x9d94,	// (0x00091e82) cmail_ddmenu_btn01_pane_ParamLimits

0x9d94,	// (0x00091e82) cmail_ddmenu_btn01_pane

0x9da7,	// (0x00091e95) cmail_ddmenu_btn02_pane_ParamLimits

0x9da7,	// (0x00091e95) cmail_ddmenu_btn02_pane

0x9dca,	// (0x00091eb8) cmail_ddmenu_btn03_pane_ParamLimits

0x9dca,	// (0x00091eb8) cmail_ddmenu_btn03_pane

0x9dee,	// (0x00091edc) main_sp_fs_ctrlbar_pane_ParamLimits

0x9e12,	// (0x00091f00) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xa28d,	// (0x0009237b) list_cmail_body_pane_ParamLimits

0xe17c,	// (0x0009626a) bg_button_pane_cp12

0xe191,	// (0x0009627f) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe191,	// (0x0009627f) list_single_cmail_header_detail_pane_g3

0xa2f3,	// (0x000923e1) list_single_cmail_header_detail_pane_t2_ParamLimits

0xa2f3,	// (0x000923e1) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdbe,	// (0x00097eac) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdbe,	// (0x00097eac) list_single_cmail_header_detail_pane_t

0xe2bc,	// (0x000963aa) phacti_term_pane_t2_ParamLimits

0xe2bc,	// (0x000963aa) phacti_term_pane_t2

0x0001,

0xfdc8,	// (0x00097eb6) phacti_term_pane_t_ParamLimits

0xfdc8,	// (0x00097eb6) phacti_term_pane_t

0xe556,	// (0x00096644) aid_size_list_single_double

0xa658,	// (0x00092746) popup_ezdial_listscroll_window

0xa674,	// (0x00092762) popup_number_entry_window_cp01

0xb1b8,	// (0x000932a6) bg_popup_call_pane_cp09

0xe562,	// (0x00096650) ezdial_list_pane

0xe56a,	// (0x00096658) scroll_pane_cp23

0xc5fa,	// (0x000946e8) bg_button_pane_cp028_ParamLimits

0xc5fa,	// (0x000946e8) bg_button_pane_cp028

0xa682,	// (0x00092770) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xa682,	// (0x00092770) cmail_ddmenu_btn01_pane_g1

0xa68e,	// (0x0009277c) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xa68e,	// (0x0009277c) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe3e,	// (0x00097f2c) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe3e,	// (0x00097f2c) cmail_ddmenu_btn01_pane_g

0xe572,	// (0x00096660) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe572,	// (0x00096660) cmail_ddmenu_btn01_pane_t1

0xc5fa,	// (0x000946e8) bg_button_pane_cp029_ParamLimits

0xc5fa,	// (0x000946e8) bg_button_pane_cp029

0xa69a,	// (0x00092788) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xa69a,	// (0x00092788) cmail_ddmenu_btn02_pane_g1

0xa6b2,	// (0x000927a0) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xa6b2,	// (0x000927a0) cmail_ddmenu_btn02_pane_t1

0x2796,	// (0x0008a884) bg_button_pane_cp031_ParamLimits

0x2796,	// (0x0008a884) bg_button_pane_cp031

0xa69a,	// (0x00092788) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xa69a,	// (0x00092788) cmail_ddmenu_btn03_pane_g1

0xa6b2,	// (0x000927a0) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xa6b2,	// (0x000927a0) cmail_ddmenu_btn03_pane_t1

0x7946,	// (0x0008fa34) cell_dialer2_keypad_pane_t1_ParamLimits

0x7960,	// (0x0008fa4e) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x7960,	// (0x0008fa4e) cell_dialer2_keypad_pane_t1_copy1

0x967e,	// (0x0009176c) ncimui_group_button_pane

0x2796,	// (0x0008a884) main_sp_fs_calendar_pane_ParamLimits

0xe163,	// (0x00096251) list_single_cmail_header_caption_pane_ParamLimits

0xe2fe,	// (0x000963ec) aid_recal_txt_sm_pane

0x01f3,	// (0x000882e1) mian_recal_day_pane

0xe33d,	// (0x0009642b) popup_sp_fs_cale_preview_window_ParamLimits

0x01f3,	// (0x000882e1) list_recal_day_pane

0xe5a9,	// (0x00096697) list_single_recal_day_pane_ParamLimits

0xe5a9,	// (0x00096697) list_single_recal_day_pane

0xe5bb,	// (0x000966a9) list_single_recal_day_pane_g1_ParamLimits

0xe5bb,	// (0x000966a9) list_single_recal_day_pane_g1

0xe5c7,	// (0x000966b5) list_single_recal_day_pane_g2_ParamLimits

0xe5c7,	// (0x000966b5) list_single_recal_day_pane_g2

0xe5d6,	// (0x000966c4) list_single_recal_day_pane_g3_ParamLimits

0xe5d6,	// (0x000966c4) list_single_recal_day_pane_g3

0xa6d6,	// (0x000927c4) list_single_recal_day_pane_g4_ParamLimits

0xa6d6,	// (0x000927c4) list_single_recal_day_pane_g4

0xe5e2,	// (0x000966d0) list_single_recal_day_pane_g5_ParamLimits

0xe5e2,	// (0x000966d0) list_single_recal_day_pane_g5

0xe5f1,	// (0x000966df) list_single_recal_day_pane_g6_ParamLimits

0xe5f1,	// (0x000966df) list_single_recal_day_pane_g6

0x0005,

0xfe4d,	// (0x00097f3b) list_single_recal_day_pane_g_ParamLimits

0xfe4d,	// (0x00097f3b) list_single_recal_day_pane_g

0xe5fd,	// (0x000966eb) list_single_recal_day_pane_t1

0xe60b,	// (0x000966f9) list_single_recal_day_pane_t2

0x0001,

0xfe5a,	// (0x00097f48) list_single_recal_day_pane_t

0xa6e9,	// (0x000927d7) ncimui_query_button_pane_ParamLimits

0xa6e9,	// (0x000927d7) ncimui_query_button_pane

0xa6f9,	// (0x000927e7) ncimui_query_button_pane_t1_ParamLimits

0xa6f9,	// (0x000927e7) ncimui_query_button_pane_t1

0xe619,	// (0x00096707) ncimui_query_button_pane_t2_ParamLimits

0xe619,	// (0x00096707) ncimui_query_button_pane_t2

0x0001,

0xfe5f,	// (0x00097f4d) ncimui_query_button_pane_t_ParamLimits

0xfe5f,	// (0x00097f4d) ncimui_query_button_pane_t

0xa70c,	// (0x000927fa) query_button_pane_ParamLimits

0xa70c,	// (0x000927fa) query_button_pane

0x01f3,	// (0x000882e1) bg_button_pane_cp0028

0xe62c,	// (0x0009671a) query_button_pane_t1

0x5a5b,	// (0x0008db49) main_tport_pane_ParamLimits

0xa17a,	// (0x00092268) bg_popup_window_pane_cp01_ParamLimits

0xa17a,	// (0x00092268) bg_popup_window_pane_cp01

0xa194,	// (0x00092282) heading_pane_cp08_ParamLimits

0xa194,	// (0x00092282) heading_pane_cp08

0xa1a8,	// (0x00092296) heading_pane_cp07_ParamLimits

0xa1a8,	// (0x00092296) heading_pane_cp07

0xe125,	// (0x00096213) cell_tport_appsw_pane_g2

0x0002,

0xfdab,	// (0x00097e99) cell_tport_appsw_pane_g

0x5007,	// (0x0008d0f5) input_candi_list_open_g1

0x41b9,	// (0x0008c2a7) list_cale_time_pane_g6_ParamLimits

0x41b9,	// (0x0008c2a7) list_cale_time_pane_g6

0x6828,	// (0x0008e916) aid_size_touch_calib_1_ParamLimits

0x6828,	// (0x0008e916) aid_size_touch_calib_1

0x6834,	// (0x0008e922) aid_size_touch_calib_2_ParamLimits

0x6834,	// (0x0008e922) aid_size_touch_calib_2

0x684a,	// (0x0008e938) aid_size_touch_calib_3_ParamLimits

0x684a,	// (0x0008e938) aid_size_touch_calib_3

0x6868,	// (0x0008e956) aid_size_touch_calib_4_ParamLimits

0x6868,	// (0x0008e956) aid_size_touch_calib_4

0x687e,	// (0x0008e96c) main_touch_calib_button_group_pane_ParamLimits

0x687e,	// (0x0008e96c) main_touch_calib_button_group_pane

0x6895,	// (0x0008e983) main_touch_calib_pane_g1_ParamLimits

0x68a1,	// (0x0008e98f) main_touch_calib_pane_g2_ParamLimits

0x68ad,	// (0x0008e99b) main_touch_calib_pane_g3_ParamLimits

0x68b9,	// (0x0008e9a7) main_touch_calib_pane_g4_ParamLimits

0xf784,	// (0x00097872) main_touch_calib_pane_g_ParamLimits

0x68c5,	// (0x0008e9b3) main_touch_calib_pane_t1_ParamLimits

0x68df,	// (0x0008e9cd) main_touch_calib_pane_t2_ParamLimits

0x68f9,	// (0x0008e9e7) main_touch_calib_pane_t3_ParamLimits

0x690d,	// (0x0008e9fb) main_touch_calib_pane_t4_ParamLimits

0x6921,	// (0x0008ea0f) main_touch_calib_pane_t5_ParamLimits

0xf78d,	// (0x0009787b) main_touch_calib_pane_t_ParamLimits

0xeb3b,	// (0x00096c29) list_single_fp_cale_pane_g3_ParamLimits

0xeb3b,	// (0x00096c29) list_single_fp_cale_pane_g3

0xefb8,	// (0x000970a6) bg_button_pane_cp012_ParamLimits

0xefb8,	// (0x000970a6) bg_vkb2_func_pane_cp03_ParamLimits

0x8918,	// (0x00090a06) cell_vitu2_function_top_pane_g1_ParamLimits

0xefb8,	// (0x000970a6) bg_vkb2_func_pane_cp04_ParamLimits

0x9632,	// (0x00091720) main_ncimui_button_group_pane_ParamLimits

0x9632,	// (0x00091720) main_ncimui_button_group_pane

0x966c,	// (0x0009175a) main_ncimui_pane_t3_ParamLimits

0x966c,	// (0x0009175a) main_ncimui_pane_t3

0xe26a,	// (0x00096358) phacti_button_group_pane

0xe556,	// (0x00096644) aid_size_list_single_double_ParamLimits

0xa658,	// (0x00092746) popup_ezdial_listscroll_window_ParamLimits

0xa674,	// (0x00092762) popup_number_entry_window_cp01_ParamLimits

0xa71f,	// (0x0009280d) phacti_button_pane_ParamLimits

0xa71f,	// (0x0009280d) phacti_button_pane

0x01f3,	// (0x000882e1) bg_button_pane_cp14

0xe63a,	// (0x00096728) phacti_button_pane_t1

0xa730,	// (0x0009281e) main_touch_calib_button_pane_ParamLimits

0xa730,	// (0x0009281e) main_touch_calib_button_pane

0x0998,	// (0x00088a86) bg_button_pane_cp18_ParamLimits

0x0998,	// (0x00088a86) bg_button_pane_cp18

0xe648,	// (0x00096736) main_touch_calib_button_pane_t1_ParamLimits

0xe648,	// (0x00096736) main_touch_calib_button_pane_t1

0xe65e,	// (0x0009674c) main_touch_calib_button_pane_t2_ParamLimits

0xe65e,	// (0x0009674c) main_touch_calib_button_pane_t2

0x0001,

0xfe64,	// (0x00097f52) main_touch_calib_button_pane_t_ParamLimits

0xfe64,	// (0x00097f52) main_touch_calib_button_pane_t

0x01f3,	// (0x000882e1) cell_ncimui_button_pane

0x01f3,	// (0x000882e1) bg_button_pane_cp032

0xe67c,	// (0x0009676a) cell_ncimui_button_pane_t1

0xeedf,	// (0x00096fcd) image3_infobar_pane_ParamLimits

0xeedf,	// (0x00096fcd) image3_infobar_pane

0x9a03,	// (0x00091af1) fs_bigclock_status_pane_ParamLimits

0x9a03,	// (0x00091af1) fs_bigclock_status_pane

0x9a10,	// (0x00091afe) main_fs_bigclock_clock_pane_ParamLimits

0x9a10,	// (0x00091afe) main_fs_bigclock_clock_pane

0x9a23,	// (0x00091b11) main_fs_bigclock_indi_pane_ParamLimits

0x9a23,	// (0x00091b11) main_fs_bigclock_indi_pane

0x9a3b,	// (0x00091b29) main_fs_bigclock_swipe_pane_ParamLimits

0x9a3b,	// (0x00091b29) main_fs_bigclock_swipe_pane

0x01f3,	// (0x000882e1) main_fs_clock_dumped_data

0xdb5d,	// (0x00095c4b) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xdb5d,	// (0x00095c4b) list_single_fs_bigclock_indicator_pane_g1

0xdb79,	// (0x00095c67) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xdb79,	// (0x00095c67) list_single_fs_bigclock_indicator_pane_g2

0xdb93,	// (0x00095c81) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xdb93,	// (0x00095c81) list_single_fs_bigclock_indicator_pane_g3

0xdbad,	// (0x00095c9b) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xdbad,	// (0x00095c9b) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc97,	// (0x00097d85) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc97,	// (0x00097d85) list_single_fs_bigclock_indicator_pane_g

0xdbd3,	// (0x00095cc1) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xdbd3,	// (0x00095cc1) list_single_fs_bigclock_indicator_pane_t1

0xdbfb,	// (0x00095ce9) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xdbfb,	// (0x00095ce9) list_single_fs_bigclock_indicator_pane_t2

0xdc23,	// (0x00095d11) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xdc23,	// (0x00095d11) list_single_fs_bigclock_indicator_pane_t3

0xdc4b,	// (0x00095d39) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xdc4b,	// (0x00095d39) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfca2,	// (0x00097d90) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfca2,	// (0x00097d90) list_single_fs_bigclock_indicator_pane_t

0xe68a,	// (0x00096778) image3_infobar_fav_pane_ParamLimits

0xe68a,	// (0x00096778) image3_infobar_fav_pane

0xe69a,	// (0x00096788) image3_infobar_loc_pane_ParamLimits

0xe69a,	// (0x00096788) image3_infobar_loc_pane

0xe6ae,	// (0x0009679c) image3_infobar_time_pane_ParamLimits

0xe6ae,	// (0x0009679c) image3_infobar_time_pane

0xcb00,	// (0x00094bee) image3_infobar_time_pane_g1

0xe6be,	// (0x000967ac) image3_infobar_time_pane_t1

0xcb00,	// (0x00094bee) image3_infobar_loc_pane_g1

0xe6cc,	// (0x000967ba) image3_infobar_loc_pane_g2

0x0001,

0xfe69,	// (0x00097f57) image3_infobar_loc_pane_g

0xe6d4,	// (0x000967c2) image3_infobar_loc_pane_t1

0xcb00,	// (0x00094bee) image3_infobar_fav_pane_g1

0xe6e2,	// (0x000967d0) image3_infobar_fav_pane_g2

0x0001,

0xfe6e,	// (0x00097f5c) image3_infobar_fav_pane_g

0xe6ea,	// (0x000967d8) fs_bigclock_status_battery_pane

0xe6f3,	// (0x000967e1) fs_bigclock_status_signal_pane

0xe6fc,	// (0x000967ea) fs_bigclock_status_title_pane

0xe705,	// (0x000967f3) fs_bigclock_status_signal_pane_g1

0xe70e,	// (0x000967fc) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe73,	// (0x00097f61) fs_bigclock_status_signal_pane_g

0xe716,	// (0x00096804) fs_bigclock_status_battery_pane_g1

0xe71f,	// (0x0009680d) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe78,	// (0x00097f66) fs_bigclock_status_battery_pane_g

0xe727,	// (0x00096815) fs_bigclock_status_title_pane_t1

0xcb00,	// (0x00094bee) main_fs_bigclock_clock_pane_g1

0xe735,	// (0x00096823) main_fs_bigclock_clock_pane_g2

0xe735,	// (0x00096823) main_fs_bigclock_clock_pane_g3

0xe735,	// (0x00096823) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe7d,	// (0x00097f6b) main_fs_bigclock_clock_pane_g

0xe73d,	// (0x0009682b) main_fs_bigclock_clock_pane_t1

0xe74b,	// (0x00096839) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe86,	// (0x00097f74) main_fs_bigclock_clock_pane_t

0xe75a,	// (0x00096848) list_single_fs_bigclock_indicator_pane_ParamLimits

0xe75a,	// (0x00096848) list_single_fs_bigclock_indicator_pane

0xa745,	// (0x00092833) list_single_fs_bigclock_pane_ParamLimits

0xa745,	// (0x00092833) list_single_fs_bigclock_pane

0xe774,	// (0x00096862) main_fs_bigclock_indicator_pane_t1

0xe783,	// (0x00096871) list_single_fs_bigclock_pane_g1

0xe78b,	// (0x00096879) list_single_fs_bigclock_pane_t1

0xcb00,	// (0x00094bee) main_fs_bigclock_swipe_pane_g1

0xe7c9,	// (0x000968b7) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe97,	// (0x00097f85) main_fs_bigclock_swipe_pane_g

0xe7d1,	// (0x000968bf) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xe7d1,	// (0x000968bf) main_fs_bigclock_swipe_pane_t1

0x4568,	// (0x0008c656) call_type_pane_ParamLimits

0x01f3,	// (0x000882e1) main_btmg_pane

0xe436,	// (0x00096524) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe436,	// (0x00096524) list_single_cale_mrui_row_pane_g2

0x0001,

0xfe0a,	// (0x00097ef8) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe0a,	// (0x00097ef8) list_single_cale_mrui_row_pane_g

0xe590,	// (0x0009667e) list_recal_vselct_arw_lo_pane

0xe598,	// (0x00096686) list_recal_vselct_arw_up_pane

0xe5a0,	// (0x0009668e) list_recal_vselct_pane

0xe7ee,	// (0x000968dc) btmg_button_pane

0xa7aa,	// (0x00092898) main_btmg_pane_g1

0x01f3,	// (0x000882e1) bg_button_pane_cp044

0xe7f8,	// (0x000968e6) btmg_button_pane_t1

0xc5f2,	// (0x000946e0) aid_listscroll_gen

0x2796,	// (0x0008a884) main_cntbar_detail_pane

0xe143,	// (0x00096231) list_cmail_folder_pane

0xe153,	// (0x00096241) sp_fs_scroll_pane_cp03_ParamLimits

0xa7b4,	// (0x000928a2) list_single_fs_dyc_pane_cp01_ParamLimits

0xa7b4,	// (0x000928a2) list_single_fs_dyc_pane_cp01

0xe806,	// (0x000968f4) aid_size_cmail_indent

0xe80f,	// (0x000968fd) list_single_dyc_row_pane_cp01

0xa7f6,	// (0x000928e4) cntbar_detail_list_pane_ParamLimits

0xa7f6,	// (0x000928e4) cntbar_detail_list_pane

0xa842,	// (0x00092930) main_cntbar_detail_cont_pane_ParamLimits

0xa842,	// (0x00092930) main_cntbar_detail_cont_pane

0x437f,	// (0x0008c46d) scroll_pane_cp032_ParamLimits

0x437f,	// (0x0008c46d) scroll_pane_cp032

0xa856,	// (0x00092944) cntbar_detail_list_event_pane_ParamLimits

0xa856,	// (0x00092944) cntbar_detail_list_event_pane

0xa806,	// (0x000928f4) cntbar_detail_list_shct_pane

0x0de2,	// (0x00088ed0) aid_list_gen

0xe818,	// (0x00096906) aid_scroll

0xe821,	// (0x0009690f) aid_size_touch_scroll_bar

0xa866,	// (0x00092954) aid_list_double

0xe82a,	// (0x00096918) aid_list_single

0xa86f,	// (0x0009295d) aid_list_single_lg

0xe833,	// (0x00096921) aid_list_z_g_a_sm

0xe83b,	// (0x00096929) aid_list_z_g_d

0xe843,	// (0x00096931) aid_txt_z_prm

0xa878,	// (0x00092966) aid_txt_z_prm_cp01

0xa886,	// (0x00092974) aid_txt_z_sec

0xa894,	// (0x00092982) main_cntbar_detail_cont_pane_g1_ParamLimits

0xa894,	// (0x00092982) main_cntbar_detail_cont_pane_g1

0xa8a8,	// (0x00092996) main_cntbar_detail_cont_pane_g2_ParamLimits

0xa8a8,	// (0x00092996) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe9c,	// (0x00097f8a) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe9c,	// (0x00097f8a) main_cntbar_detail_cont_pane_g

0xe851,	// (0x0009693f) main_cntbar_detail_cont_pane_t1

0xe85f,	// (0x0009694d) main_cntbar_detail_cont_pane_t2

0xe86d,	// (0x0009695b) main_cntbar_detail_cont_pane_t3

0x0002,

0xfea1,	// (0x00097f8f) main_cntbar_detail_cont_pane_t

0xa8b8,	// (0x000929a6) cell_cntbar_detail_list_shct_pane_ParamLimits

0xa8b8,	// (0x000929a6) cell_cntbar_detail_list_shct_pane

0xe87b,	// (0x00096969) cntbar_detail_list_shct_pane_g1

0xe884,	// (0x00096972) cntbar_detail_list_shct_pane_g2

0x0001,

0xfea8,	// (0x00097f96) cntbar_detail_list_shct_pane_g

0xa8cc,	// (0x000929ba) cntbar_detail_list_event_pane_g1_ParamLimits

0xa8cc,	// (0x000929ba) cntbar_detail_list_event_pane_g1

0xa8d8,	// (0x000929c6) cntbar_detail_list_event_pane_g2_ParamLimits

0xa8d8,	// (0x000929c6) cntbar_detail_list_event_pane_g2

0x0005,

0xfead,	// (0x00097f9b) cntbar_detail_list_event_pane_g_ParamLimits

0xfead,	// (0x00097f9b) cntbar_detail_list_event_pane_g

0xa944,	// (0x00092a32) cntbar_detail_list_event_pane_t1_ParamLimits

0xa944,	// (0x00092a32) cntbar_detail_list_event_pane_t1

0xa959,	// (0x00092a47) cntbar_detail_list_event_pane_t2_ParamLimits

0xa959,	// (0x00092a47) cntbar_detail_list_event_pane_t2

0x0002,

0xfeba,	// (0x00097fa8) cntbar_detail_list_event_pane_t_ParamLimits

0xfeba,	// (0x00097fa8) cntbar_detail_list_event_pane_t

0xcb00,	// (0x00094bee) cell_cntbar_detail_list_shct_pane_g1

0x4b6f,	// (0x0008cc5d) navi_pane_mv_g3

0x2796,	// (0x0008a884) main_cntbar_detail_pane_ParamLimits

0x01f3,	// (0x000882e1) main_notif_wgt_pane

0xecf5,	// (0x00096de3) aid_tch_main_mp4_pane_g4

0xeed7,	// (0x00096fc5) popup_slider_window_cp02

0xe587,	// (0x00096675) list_recal_day_event_pane

0xa7ca,	// (0x000928b8) cntbar_detail_btn_pane_ParamLimits

0xa7ca,	// (0x000928b8) cntbar_detail_btn_pane

0xa7e0,	// (0x000928ce) cntbar_detail_btn_pane_cp01_ParamLimits

0xa7e0,	// (0x000928ce) cntbar_detail_btn_pane_cp01

0xa806,	// (0x000928f4) cntbar_detail_list_shct_pane_ParamLimits

0xa816,	// (0x00092904) cntbar_detail_pane_g1_ParamLimits

0xa816,	// (0x00092904) cntbar_detail_pane_g1

0xa826,	// (0x00092914) cntbar_detail_pane_t1_ParamLimits

0xa826,	// (0x00092914) cntbar_detail_pane_t1

0xa8e4,	// (0x000929d2) cntbar_detail_list_event_pane_g3_ParamLimits

0xa8e4,	// (0x000929d2) cntbar_detail_list_event_pane_g3

0xa8fc,	// (0x000929ea) cntbar_detail_list_event_pane_g4_ParamLimits

0xa8fc,	// (0x000929ea) cntbar_detail_list_event_pane_g4

0xa914,	// (0x00092a02) cntbar_detail_list_event_pane_g5_ParamLimits

0xa914,	// (0x00092a02) cntbar_detail_list_event_pane_g5

0xa92c,	// (0x00092a1a) cntbar_detail_list_event_pane_g6_ParamLimits

0xa92c,	// (0x00092a1a) cntbar_detail_list_event_pane_g6

0xa96e,	// (0x00092a5c) cntbar_detail_list_event_pane_t3_ParamLimits

0xa96e,	// (0x00092a5c) cntbar_detail_list_event_pane_t3

0xa980,	// (0x00092a6e) popup_notif_wgt_window_ParamLimits

0xa980,	// (0x00092a6e) popup_notif_wgt_window

0xa999,	// (0x00092a87) popup_submenu_window_cp01_ParamLimits

0xa999,	// (0x00092a87) popup_submenu_window_cp01

0xb1b8,	// (0x000932a6) bg_popup_window_pane_cp10

0xe88d,	// (0x0009697b) listscroll_notif_wgt_pane

0xe897,	// (0x00096985) list_notif_wgt_window

0xe8a0,	// (0x0009698e) scroll_pane_cp033

0xe8a9,	// (0x00096997) list_notif_wgt_row_pane_ParamLimits

0xe8a9,	// (0x00096997) list_notif_wgt_row_pane

0xe8bb,	// (0x000969a9) aid_size_list_notif_wgt_del

0xe8c4,	// (0x000969b2) list_notif_wgt_row_pane_g1

0xe8cc,	// (0x000969ba) list_notif_wgt_row_pane_g2

0xe8d4,	// (0x000969c2) list_notif_wgt_row_pane_g3

0x0002,

0xfec1,	// (0x00097faf) list_notif_wgt_row_pane_g

0xe8dd,	// (0x000969cb) list_notif_wgt_row_pane_t1

0xe8eb,	// (0x000969d9) list_notif_wgt_row_pane_t2

0xe8f9,	// (0x000969e7) list_notif_wgt_row_pane_t3

0x0002,

0xfec8,	// (0x00097fb6) list_notif_wgt_row_pane_t

0xcec7,	// (0x00094fb5) list_recal_day_event_pane_g1

0xe907,	// (0x000969f5) list_recal_day_event_pane_t1

0x01f3,	// (0x000882e1) bg_button_pane_cp045

0xe916,	// (0x00096a04) cntbar_detail_btn_pane_t1

0xc5fa,	// (0x000946e8) main_callh_pane_ParamLimits

0xc5fa,	// (0x000946e8) main_callh_pane

0x01f3,	// (0x000882e1) main_coverflow0_pane

0x01f3,	// (0x000882e1) main_wgtman_pane

0x9a49,	// (0x00091b37) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x9a49,	// (0x00091b37) main_fs_bigclock_unlock_btn_pane

0xe11d,	// (0x0009620b) bg_button_pane_cp16

0xe12d,	// (0x0009621b) cell_tport_appsw_pane_g3

0xa9ab,	// (0x00092a99) cf0_flow_pane_ParamLimits

0xa9ab,	// (0x00092a99) cf0_flow_pane

0xe924,	// (0x00096a12) listscroll_cf0_pane

0xe92d,	// (0x00096a1b) main_cf0_pane_g1

0xa9c0,	// (0x00092aae) main_cf0_pane_t1_ParamLimits

0xa9c0,	// (0x00092aae) main_cf0_pane_t1

0xa9d8,	// (0x00092ac6) main_cf0_pane_t2_ParamLimits

0xa9d8,	// (0x00092ac6) main_cf0_pane_t2

0x0001,

0xfecf,	// (0x00097fbd) main_cf0_pane_t_ParamLimits

0xfecf,	// (0x00097fbd) main_cf0_pane_t

0xe937,	// (0x00096a25) scroll_pane_cp11

0xa9f0,	// (0x00092ade) cf0_flow_pane_g1

0xa9f8,	// (0x00092ae6) cf0_flow_pane_g2

0x0001,

0xfed4,	// (0x00097fc2) cf0_flow_pane_g

0xaa00,	// (0x00092aee) cf0_flow_pane_t1

0x01f3,	// (0x000882e1) main_call6_pane

0x01f3,	// (0x000882e1) main_calllock_pane

0xaa0e,	// (0x00092afc) call6_btn_grp_pane_ParamLimits

0xaa0e,	// (0x00092afc) call6_btn_grp_pane

0xaa28,	// (0x00092b16) call6_pane_g1_ParamLimits

0xaa28,	// (0x00092b16) call6_pane_g1

0xaa3d,	// (0x00092b2b) popup_call6_1st_window_ParamLimits

0xaa3d,	// (0x00092b2b) popup_call6_1st_window

0xaa4e,	// (0x00092b3c) popup_call6_2nd_window_ParamLimits

0xaa4e,	// (0x00092b3c) popup_call6_2nd_window

0xaa5f,	// (0x00092b4d) cell_call6_btn_pane_ParamLimits

0xaa5f,	// (0x00092b4d) cell_call6_btn_pane

0xb1b8,	// (0x000932a6) bg_popup_call2_in_pane_cp03

0xe942,	// (0x00096a30) popup_call6_1st_window_g1

0xe94a,	// (0x00096a38) popup_call6_1st_window_g2

0xe952,	// (0x00096a40) popup_call6_1st_window_g3

0x0002,

0xfed9,	// (0x00097fc7) popup_call6_1st_window_g

0xe95a,	// (0x00096a48) popup_call6_1st_window_t1

0xe969,	// (0x00096a57) popup_call6_1st_window_t2

0xe979,	// (0x00096a67) popup_call6_1st_window_t3

0x0002,

0xfee0,	// (0x00097fce) popup_call6_1st_window_t

0xb1b8,	// (0x000932a6) bg_popup_call2_in_pane_cp04

0xe942,	// (0x00096a30) popup_call6_2nd_window_g1

0xe94a,	// (0x00096a38) popup_call6_2nd_window_g2

0xe952,	// (0x00096a40) popup_call6_2nd_window_g3

0x0002,

0xfed9,	// (0x00097fc7) popup_call6_2nd_window_g

0xe95a,	// (0x00096a48) popup_call6_2nd_window_t1

0x01f3,	// (0x000882e1) bg_button_pane_cp15

0xe989,	// (0x00096a77) cell_call6_btn_pane_g1

0xe992,	// (0x00096a80) cell_call6_btn_pane_t1

0xaa73,	// (0x00092b61) listscroll_wgtman_pane_ParamLimits

0xaa73,	// (0x00092b61) listscroll_wgtman_pane

0xaa96,	// (0x00092b84) wgtman_btn_pane_ParamLimits

0xaa96,	// (0x00092b84) wgtman_btn_pane

0x47c2,	// (0x0008c8b0) aid_scroll_copy1

0xe9a1,	// (0x00096a8f) list_wgtman_pane

0xaad9,	// (0x00092bc7) wgtman_btn_pane_g1_ParamLimits

0xaad9,	// (0x00092bc7) wgtman_btn_pane_g1

0xab05,	// (0x00092bf3) wgtman_btn_pane_t1_ParamLimits

0xab05,	// (0x00092bf3) wgtman_btn_pane_t1

0xe9ab,	// (0x00096a99) wgtman_btn_pane_t2_ParamLimits

0xe9ab,	// (0x00096a99) wgtman_btn_pane_t2

0x0001,

0xfee7,	// (0x00097fd5) wgtman_btn_pane_t_ParamLimits

0xfee7,	// (0x00097fd5) wgtman_btn_pane_t

0xab42,	// (0x00092c30) listrow_wgtman_pane_ParamLimits

0xab42,	// (0x00092c30) listrow_wgtman_pane

0xab54,	// (0x00092c42) listrow_wgtman_pane_g1

0xab5d,	// (0x00092c4b) listrow_wgtman_pane_g2

0x0001,

0xfeec,	// (0x00097fda) listrow_wgtman_pane_g

0xab67,	// (0x00092c55) listrow_wgtman_pane_t1

0xab75,	// (0x00092c63) listrow_wgtman_pane_t2

0x0001,

0xfef1,	// (0x00097fdf) listrow_wgtman_pane_t

0xab83,	// (0x00092c71) wait_bar_pane_cp09

0xe9c2,	// (0x00096ab0) main_calllock_btn_pane

0xe9cc,	// (0x00096aba) main_calllock_pane_g1

0x01f3,	// (0x000882e1) bg_button_pane_cp17

0xe9d8,	// (0x00096ac6) main_calllock_btn_pane_g1

0xe9e1,	// (0x00096acf) main_calllock_btn_pane_t1

0x01f3,	// (0x000882e1) main_dialer3_pane

0x01f3,	// (0x000882e1) main_fmrd2_pane

0xcb00,	// (0x00094bee) main_fs_bigclock_unlock_btn_pane_g1

0xe9f8,	// (0x00096ae6) main_fs_bigclock_unlock_btn_pane_t1

0xab8b,	// (0x00092c79) area_fmrd2_info_pane_ParamLimits

0xab8b,	// (0x00092c79) area_fmrd2_info_pane

0xab9c,	// (0x00092c8a) area_fmrd2_visual_pane_ParamLimits

0xab9c,	// (0x00092c8a) area_fmrd2_visual_pane

0xabaa,	// (0x00092c98) fmrd2_indi_pane_ParamLimits

0xabaa,	// (0x00092c98) fmrd2_indi_pane

0xabb7,	// (0x00092ca5) area_fmrd2_visual_pane_g1

0xabbf,	// (0x00092cad) area_fmrd2_visual_pane_t1

0xabcf,	// (0x00092cbd) area_fmrd2_visual_pane_t2

0xabdf,	// (0x00092ccd) area_fmrd2_visual_pane_t3

0x0002,

0xfefb,	// (0x00097fe9) area_fmrd2_visual_pane_t

0xabef,	// (0x00092cdd) area_fmrd2_info_pane_g1

0xabf7,	// (0x00092ce5) area_fmrd2_info_pane_t1

0xac07,	// (0x00092cf5) area_fmrd2_info_pane_t2

0xac17,	// (0x00092d05) area_fmrd2_info_pane_t3

0xac27,	// (0x00092d15) area_fmrd2_info_pane_t4

0x0003,

0xff02,	// (0x00097ff0) area_fmrd2_info_pane_t

0xac35,	// (0x00092d23) fmrd2_indi_pane_t1

0xac45,	// (0x00092d33) fmrd2_indi_pane_t2

0xac55,	// (0x00092d43) fmrd2_indi_pane_t3

0x0002,

0xff0b,	// (0x00097ff9) fmrd2_indi_pane_t

0xdbbc,	// (0x00095caa) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xdbbc,	// (0x00095caa) list_single_fs_bigclock_indicator_pane_g5

0xdc60,	// (0x00095d4e) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xdc60,	// (0x00095d4e) list_single_fs_bigclock_indicator_pane_t5

0xa3d9,	// (0x000924c7) aid_cell_bcale_month_pane_ParamLimits

0xa3d9,	// (0x000924c7) aid_cell_bcale_month_pane

0xa3eb,	// (0x000924d9) bcale_month_pane_ParamLimits

0xa3eb,	// (0x000924d9) bcale_month_pane

0xa403,	// (0x000924f1) bcale_preview_pane_ParamLimits

0xa403,	// (0x000924f1) bcale_preview_pane

0xe78b,	// (0x00096879) list_single_fs_bigclock_pane_t1_ParamLimits

0xe7a5,	// (0x00096893) list_single_fs_bigclock_pane_t2_ParamLimits

0xe7a5,	// (0x00096893) list_single_fs_bigclock_pane_t2

0x0001,

0xfe92,	// (0x00097f80) list_single_fs_bigclock_pane_t_ParamLimits

0xfe92,	// (0x00097f80) list_single_fs_bigclock_pane_t

0xe9f0,	// (0x00096ade) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfef6,	// (0x00097fe4) main_fs_bigclock_unlock_btn_pane_g

0xac65,	// (0x00092d53) aid_dia3_key_size_ParamLimits

0xac65,	// (0x00092d53) aid_dia3_key_size

0xac74,	// (0x00092d62) aid_dia3_listrow_size_ParamLimits

0xac74,	// (0x00092d62) aid_dia3_listrow_size

0xac89,	// (0x00092d77) dia3_keypad_fun_pane_ParamLimits

0xac89,	// (0x00092d77) dia3_keypad_fun_pane

0xaca5,	// (0x00092d93) dia3_keypad_num_pane_ParamLimits

0xaca5,	// (0x00092d93) dia3_keypad_num_pane

0xacc0,	// (0x00092dae) dia3_listscroll_pane_ParamLimits

0xacc0,	// (0x00092dae) dia3_listscroll_pane

0xacd3,	// (0x00092dc1) dia3_numentry_pane_ParamLimits

0xacd3,	// (0x00092dc1) dia3_numentry_pane

0xea06,	// (0x00096af4) dia3_list_pane

0xea11,	// (0x00096aff) scroll_pane_cp12

0x01f3,	// (0x000882e1) bg_dia3_numentry_pane

0xace7,	// (0x00092dd5) dia3_numentry_pane_t1

0xacf6,	// (0x00092de4) cell_dia3_key_num_pane

0xacfe,	// (0x00092dec) cell_dia3_key0_fun_pane_ParamLimits

0xacfe,	// (0x00092dec) cell_dia3_key0_fun_pane

0xad12,	// (0x00092e00) cell_dia3_key1_fun_pane_ParamLimits

0xad12,	// (0x00092e00) cell_dia3_key1_fun_pane

0xad2a,	// (0x00092e18) dia3_listrow_pane

0xd8dc,	// (0x000959ca) bg_dia3_numentry_pane_g1

0x01f3,	// (0x000882e1) bg_button_pane_cp21

0xea1c,	// (0x00096b0a) cell_dia3_key_num_pane_t1

0xea2a,	// (0x00096b18) cell_dia3_key_num_pane_t2

0xea39,	// (0x00096b27) cell_dia3_key_num_pane_t3

0xea48,	// (0x00096b36) cell_dia3_key_num_pane_t4

0x0003,

0xff12,	// (0x00098000) cell_dia3_key_num_pane_t

0x01f3,	// (0x000882e1) bg_button_pane_cp19

0xad3c,	// (0x00092e2a) cell_dia3_key0_fun_pane_g1

0x01f3,	// (0x000882e1) bg_button_pane_cp20

0xad44,	// (0x00092e32) cell_dia3_key1_fun_pane_g1

0xad4c,	// (0x00092e3a) area_left_week_number_pane

0xad55,	// (0x00092e43) area_top_day_name_pane

0xad5e,	// (0x00092e4c) frame_month_view_pane

0xad6a,	// (0x00092e58) grid_month_view_pane

0xad74,	// (0x00092e62) cell_top_day_name_pane_ParamLimits

0xad74,	// (0x00092e62) cell_top_day_name_pane

0x1424,	// (0x00089512) cell_area_left_week_number_pane_ParamLimits

0x1424,	// (0x00089512) cell_area_left_week_number_pane

0xad8c,	// (0x00092e7a) cell_month_view_pane_ParamLimits

0xad8c,	// (0x00092e7a) cell_month_view_pane

0xea57,	// (0x00096b45) frm_month_g1

0xada7,	// (0x00092e95) frm_month_g2

0xadb1,	// (0x00092e9f) frm_month_g3

0xadbb,	// (0x00092ea9) frm_month_g4

0xadc5,	// (0x00092eb3) frm_month_g5

0xadcf,	// (0x00092ebd) frm_month_g6

0xadd9,	// (0x00092ec7) frm_month_g7

0xea60,	// (0x00096b4e) frm_month_g8

0xade5,	// (0x00092ed3) frm_month_g9

0xadee,	// (0x00092edc) frm_month_g10

0xadf7,	// (0x00092ee5) frm_month_g11

0xae00,	// (0x00092eee) frm_month_g12

0xae09,	// (0x00092ef7) frm_month_g13

0xae12,	// (0x00092f00) frm_month_g14

0xae1b,	// (0x00092f09) frm_month_g15

0xae24,	// (0x00092f12) frm_month_g16

0x000f,

0xff1b,	// (0x00098009) frm_month_g

0xae2f,	// (0x00092f1d) cell_top_day_name_pane_t1

0xae3e,	// (0x00092f2c) cell_area_left_week_number_pane_g1

0xae2f,	// (0x00092f1d) cell_area_left_week_number_pane_t1

0xcb00,	// (0x00094bee) cell_month_view_pane_g1

0xae46,	// (0x00092f34) cell_month_view_pane_t1

0x01f3,	// (0x000882e1) main_fps_pane

0xde91,	// (0x00095f7f) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xde91,	// (0x00095f7f) cmail_ddmenu_btn02_pane_cp1

0xdead,	// (0x00095f9b) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xdead,	// (0x00095f9b) cmail_ddmenu_btn02_pane_cp2

0xa6a6,	// (0x00092794) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xa6a6,	// (0x00092794) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe43,	// (0x00097f31) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe43,	// (0x00097f31) cmail_ddmenu_btn02_pane_g

0xa6c4,	// (0x000927b2) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xa6c4,	// (0x000927b2) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe48,	// (0x00097f36) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe48,	// (0x00097f36) cmail_ddmenu_btn02_pane_t

0xae55,	// (0x00092f43) fps_text_pane_ParamLimits

0xae55,	// (0x00092f43) fps_text_pane

0xae6c,	// (0x00092f5a) main_fps_pane_g1_ParamLimits

0xae6c,	// (0x00092f5a) main_fps_pane_g1

0xae86,	// (0x00092f74) wait_bar_pane_cp010_ParamLimits

0xae86,	// (0x00092f74) wait_bar_pane_cp010

0xae97,	// (0x00092f85) fps_text_pane_t1_ParamLimits

0xae97,	// (0x00092f85) fps_text_pane_t1

0x7ded,	// (0x0008fedb) cam4_image_uncrop_pane_g1

0x7df6,	// (0x0008fee4) cam4_image_uncrop_pane_g2

0x7dff,	// (0x0008feed) cam4_image_uncrop_pane_g3

0x7e08,	// (0x0008fef6) cam4_image_uncrop_pane_g4

0x0003,

0xf91c,	// (0x00097a0a) cam4_image_uncrop_pane_g

0xad2a,	// (0x00092e18) dia3_listrow_pane_ParamLimits

0x01f3,	// (0x000882e1) main_phob2_pane

0xa213,	// (0x00092301) cell_tport_appsw_pane_cp02_ParamLimits

0xa213,	// (0x00092301) cell_tport_appsw_pane_cp02

0xa227,	// (0x00092315) cell_tport_appsw_pane_cp03_ParamLimits

0xa227,	// (0x00092315) cell_tport_appsw_pane_cp03

0x01f3,	// (0x000882e1) phob2_contact_card_pane

0x01f3,	// (0x000882e1) phob2_listscroll_pane

0xf0eb,	// (0x000971d9) phob2_list_pane

0xf0f3,	// (0x000971e1) scroll_pane_cp034

0xaeaf,	// (0x00092f9d) phob2_cc_data_pane_ParamLimits

0xaeaf,	// (0x00092f9d) phob2_cc_data_pane

0xaece,	// (0x00092fbc) phob2_cc_listscroll_pane_ParamLimits

0xaece,	// (0x00092fbc) phob2_cc_listscroll_pane

0xaeec,	// (0x00092fda) list_double_large_graphic_phob2_pane_ParamLimits

0xaeec,	// (0x00092fda) list_double_large_graphic_phob2_pane

0x001d,	// (0x0008810b) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x001d,	// (0x0008810b) list_double_large_graphic_phob2_pane_g1

0xea69,	// (0x00096b57) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xea69,	// (0x00096b57) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff3c,	// (0x0009802a) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff3c,	// (0x0009802a) list_double_large_graphic_phob2_pane_g

0xea75,	// (0x00096b63) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xea75,	// (0x00096b63) list_double_large_graphic_phob2_pane_t1

0xea8a,	// (0x00096b78) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xea8a,	// (0x00096b78) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff41,	// (0x0009802f) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff41,	// (0x0009802f) list_double_large_graphic_phob2_pane_t

0x01f3,	// (0x000882e1) list_highlight_pane_cp024

0x002a,	// (0x00088118) phob2_cc_button_pane

0xaefe,	// (0x00092fec) phob2_cc_data_pane_g1_ParamLimits

0xaefe,	// (0x00092fec) phob2_cc_data_pane_g1

0xaf13,	// (0x00093001) phob2_cc_data_pane_g2_ParamLimits

0xaf13,	// (0x00093001) phob2_cc_data_pane_g2

0x0001,

0xff46,	// (0x00098034) phob2_cc_data_pane_g_ParamLimits

0xff46,	// (0x00098034) phob2_cc_data_pane_g

0xaf25,	// (0x00093013) phob2_cc_data_pane_t1_ParamLimits

0xaf25,	// (0x00093013) phob2_cc_data_pane_t1

0xaf3d,	// (0x0009302b) phob2_cc_data_pane_t2_ParamLimits

0xaf3d,	// (0x0009302b) phob2_cc_data_pane_t2

0xaf55,	// (0x00093043) phob2_cc_data_pane_t3_ParamLimits

0xaf55,	// (0x00093043) phob2_cc_data_pane_t3

0x0002,

0xff4b,	// (0x00098039) phob2_cc_data_pane_t_ParamLimits

0xff4b,	// (0x00098039) phob2_cc_data_pane_t

0x0080,	// (0x0008816e) phob2_cc_list_pane_ParamLimits

0x0080,	// (0x0008816e) phob2_cc_list_pane

0x008c,	// (0x0008817a) scroll_pane_cp035_ParamLimits

0x008c,	// (0x0008817a) scroll_pane_cp035

0x2796,	// (0x0008a884) bg_button_pane_cp033

0x0098,	// (0x00088186) phob2_cc_button_pane_g1

0x00a4,	// (0x00088192) phob2_cc_button_pane_t1

0x00b9,	// (0x000881a7) phob2_cc_button_pane_t2

0x0001,

0xff52,	// (0x00098040) phob2_cc_button_pane_t

0xaf6d,	// (0x0009305b) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xaf6d,	// (0x0009305b) list_double_large_graphic_phob2_cc_pane

0xaf7f,	// (0x0009306d) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xaf7f,	// (0x0009306d) list_double_large_graphic_phob2_cc_pane_g1

0xaf8b,	// (0x00093079) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xaf8b,	// (0x00093079) list_double_large_graphic_phob2_cc_pane_g2

0xaf97,	// (0x00093085) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xaf97,	// (0x00093085) list_double_large_graphic_phob2_cc_pane_g3

0xafa3,	// (0x00093091) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xafa3,	// (0x00093091) list_double_large_graphic_phob2_cc_pane_g4

0xafaf,	// (0x0009309d) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xafaf,	// (0x0009309d) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff57,	// (0x00098045) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff57,	// (0x00098045) list_double_large_graphic_phob2_cc_pane_g

0xafbb,	// (0x000930a9) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xafbb,	// (0x000930a9) list_double_large_graphic_phob2_cc_pane_t1

0xafe4,	// (0x000930d2) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xafe4,	// (0x000930d2) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff62,	// (0x00098050) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff62,	// (0x00098050) list_double_large_graphic_phob2_cc_pane_t

0x0193,	// (0x00088281) list_highlight_pane_cp025_ParamLimits

0x0193,	// (0x00088281) list_highlight_pane_cp025

0x2796,	// (0x0008a884) bg_button_pane_cp033_ParamLimits

0x0098,	// (0x00088186) phob2_cc_button_pane_g1_ParamLimits

0x00a4,	// (0x00088192) phob2_cc_button_pane_t1_ParamLimits

0x00b9,	// (0x000881a7) phob2_cc_button_pane_t2_ParamLimits

0xff52,	// (0x00098040) phob2_cc_button_pane_t_ParamLimits

0x27a4,	// (0x0008a892) popup_wgtman_window

0x1506,	// (0x000895f4) scroll_pane_cp038

0xaabb,	// (0x00092ba9) wgtman_btn_pane_cp_01_ParamLimits

0xaabb,	// (0x00092ba9) wgtman_btn_pane_cp_01

0x01a1,	// (0x0008828f) wgtman_content_pane

0x01aa,	// (0x00088298) wgtman_heading_pane

0x01f3,	// (0x000882e1) bg_heading_pane_cp02

0x01b3,	// (0x000882a1) wgtman_heading_pane_g1

0x01bb,	// (0x000882a9) wgtman_heading_pane_t1

0x01c9,	// (0x000882b7) scroll_pane_cp036

0x01d1,	// (0x000882bf) wgtman_list_pane

0x01d9,	// (0x000882c7) wgtman_list_pane_t1_ParamLimits

0x01d9,	// (0x000882c7) wgtman_list_pane_t1
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
	};

} // end of namespace AknLayoutScalable_Abrw_phl_apps_qhd_lsc_tch_Large

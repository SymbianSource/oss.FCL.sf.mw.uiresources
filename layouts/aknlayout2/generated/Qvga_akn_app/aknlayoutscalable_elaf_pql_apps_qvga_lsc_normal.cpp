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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt + 0x0000b358 };

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
0x23a1,	// (0x0000d6f9) Screen

0x23ab,	// (0x0000d703) application_window

0x23da,	// (0x0000d732) area_bottom_pane_ParamLimits

0x23da,	// (0x0000d732) area_bottom_pane

0x240d,	// (0x0000d765) area_top_pane_ParamLimits

0x240d,	// (0x0000d765) area_top_pane

0x9f2c,	// (0x00015284) call_video_uplink_pane_ParamLimits

0x9f2c,	// (0x00015284) call_video_uplink_pane

0x247e,	// (0x0000d7d6) main_pane_ParamLimits

0x247e,	// (0x0000d7d6) main_pane

0xca5f,	// (0x00017db7) context_pane

0x500d,	// (0x00010365) navi_pane

0x5036,	// (0x0001038e) popup_cale_events_window_ParamLimits

0x5036,	// (0x0001038e) popup_cale_events_window

0xca72,	// (0x00017dca) popup_mup_playback_window

0x504e,	// (0x000103a6) signal_pane

0xa6b3,	// (0x00015a0b) main_browser_pane

0xb520,	// (0x00016878) main_burst_pane

0x9f48,	// (0x000152a0) main_calc_pane

0xb520,	// (0x00016878) main_cale_day_pane

0xa87b,	// (0x00015bd3) main_cale_month_pane

0xb520,	// (0x00016878) main_cale_week_pane

0xb520,	// (0x00016878) main_call_pane

0xa367,	// (0x000156bf) main_call_poc_pane

0xb520,	// (0x00016878) main_camera_pane

0xb520,	// (0x00016878) main_chi_dic_pane

0xb31f,	// (0x00016677) main_clock_pane

0xa367,	// (0x000156bf) main_fmradio_pane

0xb520,	// (0x00016878) main_graph_messa_pane

0xa367,	// (0x000156bf) main_help_pane

0xa6b3,	// (0x00015a0b) main_im_pane

0xa5c2,	// (0x0001591a) main_image_pane_ParamLimits

0xa5c2,	// (0x0001591a) main_image_pane

0xa367,	// (0x000156bf) main_location2_pane

0xb520,	// (0x00016878) main_location_pane

0xa367,	// (0x000156bf) main_messa_pane

0xa367,	// (0x000156bf) main_mp2_pane

0xb520,	// (0x00016878) main_mp_pane

0xa367,	// (0x000156bf) main_msg_pane

0xa367,	// (0x000156bf) main_mup_eq_pane

0xa367,	// (0x000156bf) main_mup_pane

0xb520,	// (0x00016878) main_notes_pane

0xa367,	// (0x000156bf) main_pec_pane

0xa367,	// (0x000156bf) main_phob_pane

0xa367,	// (0x000156bf) main_pinb_pane

0xa367,	// (0x000156bf) main_postcard_pane

0xa367,	// (0x000156bf) main_qdial_pane

0xb520,	// (0x00016878) main_skin_pane

0xa367,	// (0x000156bf) main_smil2_pane

0xb520,	// (0x00016878) main_smil_pane

0xb520,	// (0x00016878) main_video_pane

0xb520,	// (0x00016878) main_video_tele_pane

0xa5c2,	// (0x0001591a) main_viewer_pane_ParamLimits

0xa5c2,	// (0x0001591a) main_viewer_pane

0xb520,	// (0x00016878) main_vorec_pane

0x4ded,	// (0x00010145) popup_blid_sat_info_window_ParamLimits

0x4ded,	// (0x00010145) popup_blid_sat_info_window

0x4e43,	// (0x0001019b) popup_dyc_status_message_window_ParamLimits

0x4e43,	// (0x0001019b) popup_dyc_status_message_window

0x4e59,	// (0x000101b1) popup_grid_large_graphic_window_ParamLimits

0x4e59,	// (0x000101b1) popup_grid_large_graphic_window

0x4eef,	// (0x00010247) popup_loc_request_window_ParamLimits

0x4eef,	// (0x00010247) popup_loc_request_window

0x4fe7,	// (0x0001033f) popup_wml_address_window_ParamLimits

0x4fe7,	// (0x0001033f) popup_wml_address_window

0x4c43,	// (0x0000ff9b) call_muted_g1

0x4968,	// (0x0000fcc0) popup_call_audio_conf_window_ParamLimits

0x4968,	// (0x0000fcc0) popup_call_audio_conf_window

0x4c53,	// (0x0000ffab) popup_call_audio_first_window_ParamLimits

0x4c53,	// (0x0000ffab) popup_call_audio_first_window

0x4cb1,	// (0x00010009) popup_call_audio_in_window_ParamLimits

0x4cb1,	// (0x00010009) popup_call_audio_in_window

0x4cdd,	// (0x00010035) popup_call_audio_out_window_ParamLimits

0x4cdd,	// (0x00010035) popup_call_audio_out_window

0x4d0b,	// (0x00010063) popup_call_audio_second_window_ParamLimits

0x4d0b,	// (0x00010063) popup_call_audio_second_window

0x4d51,	// (0x000100a9) popup_call_audio_wait_window_ParamLimits

0x4d51,	// (0x000100a9) popup_call_audio_wait_window

0x4d84,	// (0x000100dc) popup_number_entry_window_ParamLimits

0x4d84,	// (0x000100dc) popup_number_entry_window

0x9f56,	// (0x000152ae) bg_popup_call_pane_cp05_ParamLimits

0x9f56,	// (0x000152ae) bg_popup_call_pane_cp05

0x9f76,	// (0x000152ce) popup_number_entry_window_t1

0x9f89,	// (0x000152e1) popup_number_entry_window_t2

0x9f9b,	// (0x000152f3) popup_number_entry_window_t3

0x0003,

0xf0fb,	// (0x0001a453) popup_number_entry_window_t

0x9fad,	// (0x00015305) text_title_cp2

0x9fc0,	// (0x00015318) bg_popup_call_pane_cp_ParamLimits

0x9fc0,	// (0x00015318) bg_popup_call_pane_cp

0x9fce,	// (0x00015326) call_thumbnail_pane

0x9fd6,	// (0x0001532e) popup_call_audio_in_window_g1_ParamLimits

0x9fd6,	// (0x0001532e) popup_call_audio_in_window_g1

0x9fe2,	// (0x0001533a) popup_call_audio_in_window_g2_ParamLimits

0x9fe2,	// (0x0001533a) popup_call_audio_in_window_g2

0x9fee,	// (0x00015346) popup_call_audio_in_window_g3_ParamLimits

0x9fee,	// (0x00015346) popup_call_audio_in_window_g3

0x0002,

0xf104,	// (0x0001a45c) popup_call_audio_in_window_g_ParamLimits

0xf104,	// (0x0001a45c) popup_call_audio_in_window_g

0x9ffa,	// (0x00015352) popup_call_audio_in_window_t1_ParamLimits

0x9ffa,	// (0x00015352) popup_call_audio_in_window_t1

0xa015,	// (0x0001536d) popup_call_audio_in_window_t2_ParamLimits

0xa015,	// (0x0001536d) popup_call_audio_in_window_t2

0xa030,	// (0x00015388) popup_call_audio_in_window_t3_ParamLimits

0xa030,	// (0x00015388) popup_call_audio_in_window_t3

0x0002,

0xf10b,	// (0x0001a463) popup_call_audio_in_window_t_ParamLimits

0xf10b,	// (0x0001a463) popup_call_audio_in_window_t

0x9fc0,	// (0x00015318) bg_popup_call_pane_cp01_ParamLimits

0x9fc0,	// (0x00015318) bg_popup_call_pane_cp01

0x9fce,	// (0x00015326) call_thumbnail_pane_cp02

0xa043,	// (0x0001539b) call_type_pane_cp022

0xa04b,	// (0x000153a3) popup_call_audio_out_window_g1_ParamLimits

0xa04b,	// (0x000153a3) popup_call_audio_out_window_g1

0xa05d,	// (0x000153b5) popup_call_audio_out_window_g2_ParamLimits

0xa05d,	// (0x000153b5) popup_call_audio_out_window_g2

0xa069,	// (0x000153c1) popup_call_audio_out_window_g3_ParamLimits

0xa069,	// (0x000153c1) popup_call_audio_out_window_g3

0x0002,

0xf112,	// (0x0001a46a) popup_call_audio_out_window_g_ParamLimits

0xf112,	// (0x0001a46a) popup_call_audio_out_window_g

0xa07b,	// (0x000153d3) popup_call_audio_out_window_t1_ParamLimits

0xa07b,	// (0x000153d3) popup_call_audio_out_window_t1

0xa093,	// (0x000153eb) popup_call_audio_out_window_t2_ParamLimits

0xa093,	// (0x000153eb) popup_call_audio_out_window_t2

0x0001,

0xf119,	// (0x0001a471) popup_call_audio_out_window_t_ParamLimits

0xf119,	// (0x0001a471) popup_call_audio_out_window_t

0xa0a8,	// (0x00015400) bg_popup_call_pane_ParamLimits

0xa0a8,	// (0x00015400) bg_popup_call_pane

0x2610,	// (0x0000d968) call_thumbnail_pane_cp_ParamLimits

0x2610,	// (0x0000d968) call_thumbnail_pane_cp

0xa12c,	// (0x00015484) call_type_pane_cp01_ParamLimits

0xa12c,	// (0x00015484) call_type_pane_cp01

0xa170,	// (0x000154c8) popup_call_audio_first_window_g1_ParamLimits

0xa170,	// (0x000154c8) popup_call_audio_first_window_g1

0xa1bc,	// (0x00015514) popup_call_audio_first_window_g2_ParamLimits

0xa1bc,	// (0x00015514) popup_call_audio_first_window_g2

0x0001,

0xf11e,	// (0x0001a476) popup_call_audio_first_window_g_ParamLimits

0xf11e,	// (0x0001a476) popup_call_audio_first_window_g

0xa200,	// (0x00015558) popup_call_audio_first_window_t1_ParamLimits

0xa200,	// (0x00015558) popup_call_audio_first_window_t1

0xa2ac,	// (0x00015604) popup_call_audio_first_window_t4_ParamLimits

0xa2ac,	// (0x00015604) popup_call_audio_first_window_t4

0xa338,	// (0x00015690) popup_call_audio_first_window_t5_ParamLimits

0xa338,	// (0x00015690) popup_call_audio_first_window_t5

0x0002,

0xf123,	// (0x0001a47b) popup_call_audio_first_window_t_ParamLimits

0xf123,	// (0x0001a47b) popup_call_audio_first_window_t

0xa367,	// (0x000156bf) bg_popup_call_pane_cp02

0xa371,	// (0x000156c9) call_type_pane_cp023

0xa379,	// (0x000156d1) popup_call_audio_wait_window_g1

0xa381,	// (0x000156d9) popup_call_audio_wait_window_g2

0x0001,

0xf12a,	// (0x0001a482) popup_call_audio_wait_window_g

0xa389,	// (0x000156e1) popup_call_audio_wait_window_t3

0xa397,	// (0x000156ef) bg_popup_call_pane_cp03_ParamLimits

0xa397,	// (0x000156ef) bg_popup_call_pane_cp03

0xa3f7,	// (0x0001574f) call_thumbnail_pane_cp011_ParamLimits

0xa3f7,	// (0x0001574f) call_thumbnail_pane_cp011

0xa403,	// (0x0001575b) call_type_pane_cp034_ParamLimits

0xa403,	// (0x0001575b) call_type_pane_cp034

0xa43f,	// (0x00015797) popup_call_audio_second_window_g1_ParamLimits

0xa43f,	// (0x00015797) popup_call_audio_second_window_g1

0xa47b,	// (0x000157d3) popup_call_audio_second_window_g2_ParamLimits

0xa47b,	// (0x000157d3) popup_call_audio_second_window_g2

0x0001,

0xf12f,	// (0x0001a487) popup_call_audio_second_window_g_ParamLimits

0xf12f,	// (0x0001a487) popup_call_audio_second_window_g

0xa4b7,	// (0x0001580f) popup_call_audio_second_window_t1_ParamLimits

0xa4b7,	// (0x0001580f) popup_call_audio_second_window_t1

0xa538,	// (0x00015890) popup_call_audio_second_window_t2_ParamLimits

0xa538,	// (0x00015890) popup_call_audio_second_window_t2

0xa56e,	// (0x000158c6) popup_call_audio_second_window_t3_ParamLimits

0xa56e,	// (0x000158c6) popup_call_audio_second_window_t3

0x0002,

0xf134,	// (0x0001a48c) popup_call_audio_second_window_t_ParamLimits

0xf134,	// (0x0001a48c) popup_call_audio_second_window_t

0xa367,	// (0x000156bf) bg_popup_call_pane_cp04

0xa5a4,	// (0x000158fc) list_conf_pane

0xa5ac,	// (0x00015904) popup_call_audio_conf_window_t1

0xa5ba,	// (0x00015912) call_thumbnail_pane_g1

0xa5c2,	// (0x0001591a) bg_pinb_pane_ParamLimits

0xa5c2,	// (0x0001591a) bg_pinb_pane

0xa5d0,	// (0x00015928) find_pinb_pane

0xa5d9,	// (0x00015931) listscroll_pinb_pane_ParamLimits

0xa5d9,	// (0x00015931) listscroll_pinb_pane

0xa5e8,	// (0x00015940) pinb_bg_pane_g1

0x2634,	// (0x0000d98c) pinb_bg_pane_g2

0x263e,	// (0x0000d996) pinb_bg_pane_g3

0x2648,	// (0x0000d9a0) pinb_bg_pane_g4

0x2652,	// (0x0000d9aa) pinb_bg_pane_g5

0x265c,	// (0x0000d9b4) pinb_bg_pane_g6

0x2665,	// (0x0000d9bd) pinb_bg_pane_g7

0x266e,	// (0x0000d9c6) pinb_bg_pane_g8

0x2679,	// (0x0000d9d1) pinb_bg_pane_g9

0x2683,	// (0x0000d9db) pinb_bg_pane_g10

0x0009,

0xf13b,	// (0x0001a493) pinb_bg_pane_g

0x269e,	// (0x0000d9f6) grid_pinb_pane

0x26a7,	// (0x0000d9ff) list_pinb_pane

0x26b0,	// (0x0000da08) scroll_pane_cp01_ParamLimits

0x26b0,	// (0x0000da08) scroll_pane_cp01

0xa5f2,	// (0x0001594a) find_pinb_pane_g1_ParamLimits

0xa5f2,	// (0x0001594a) find_pinb_pane_g1

0xa60a,	// (0x00015962) find_pinb_pane_t1

0xa61c,	// (0x00015974) find_pinb_pane_t2

0x0001,

0xf155,	// (0x0001a4ad) find_pinb_pane_t

0xa631,	// (0x00015989) input_focus_pane_cp01_ParamLimits

0xa631,	// (0x00015989) input_focus_pane_cp01

0x26c2,	// (0x0000da1a) cell_pinb_pane_ParamLimits

0x26c2,	// (0x0000da1a) cell_pinb_pane

0x26dd,	// (0x0000da35) cell_pinb_pane_g1_ParamLimits

0x26dd,	// (0x0000da35) cell_pinb_pane_g1

0x26ed,	// (0x0000da45) cell_pinb_pane_g2_ParamLimits

0x26ed,	// (0x0000da45) cell_pinb_pane_g2

0xa63d,	// (0x00015995) cell_pinb_pane_g3_ParamLimits

0xa63d,	// (0x00015995) cell_pinb_pane_g3

0x0002,

0xf15a,	// (0x0001a4b2) cell_pinb_pane_g_ParamLimits

0xf15a,	// (0x0001a4b2) cell_pinb_pane_g

0xa367,	// (0x000156bf) grid_highlight_pane_cp01

0x26f9,	// (0x0000da51) list_pinb_item_pane_ParamLimits

0x26f9,	// (0x0000da51) list_pinb_item_pane

0xa367,	// (0x000156bf) list_highlight_pane_cp02

0x270b,	// (0x0000da63) list_pinb_item_pane_g1_ParamLimits

0x270b,	// (0x0000da63) list_pinb_item_pane_g1

0x2718,	// (0x0000da70) list_pinb_item_pane_g2_ParamLimits

0x2718,	// (0x0000da70) list_pinb_item_pane_g2

0x2724,	// (0x0000da7c) list_pinb_item_pane_g3_ParamLimits

0x2724,	// (0x0000da7c) list_pinb_item_pane_g3

0x2735,	// (0x0000da8d) list_pinb_item_pane_g4_ParamLimits

0x2735,	// (0x0000da8d) list_pinb_item_pane_g4

0x0003,

0xf161,	// (0x0001a4b9) list_pinb_item_pane_g_ParamLimits

0xf161,	// (0x0001a4b9) list_pinb_item_pane_g

0x2741,	// (0x0000da99) list_pinb_item_pane_t1_ParamLimits

0x2741,	// (0x0000da99) list_pinb_item_pane_t1

0x2776,	// (0x0000dace) calc_display_pane

0x2792,	// (0x0000daea) calc_paper_pane

0x27b3,	// (0x0000db0b) grid_calc_pane

0xa367,	// (0x000156bf) bg_list_pane_cp01

0x27cf,	// (0x0000db27) clock_g1

0x27d7,	// (0x0000db2f) clock_g2

0x0001,

0xf16a,	// (0x0001a4c2) clock_g

0x27df,	// (0x0000db37) clock_t1_ParamLimits

0x27df,	// (0x0000db37) clock_t1

0x27f4,	// (0x0000db4c) clock_t2_ParamLimits

0x27f4,	// (0x0000db4c) clock_t2

0x2806,	// (0x0000db5e) clock_t3_ParamLimits

0x2806,	// (0x0000db5e) clock_t3

0x2818,	// (0x0000db70) clock_t4_ParamLimits

0x2818,	// (0x0000db70) clock_t4

0x282a,	// (0x0000db82) clock_t5_ParamLimits

0x282a,	// (0x0000db82) clock_t5

0x283f,	// (0x0000db97) clock_t6_ParamLimits

0x283f,	// (0x0000db97) clock_t6

0x2851,	// (0x0000dba9) clock_t7_ParamLimits

0x2851,	// (0x0000dba9) clock_t7

0x2863,	// (0x0000dbbb) clock_t8_ParamLimits

0x2863,	// (0x0000dbbb) clock_t8

0x2875,	// (0x0000dbcd) clock_t9_ParamLimits

0x2875,	// (0x0000dbcd) clock_t9

0x0008,

0xf16f,	// (0x0001a4c7) clock_t_ParamLimits

0xf16f,	// (0x0001a4c7) clock_t

0xa651,	// (0x000159a9) popup_clock_analogue_window_cp02

0xa651,	// (0x000159a9) popup_clock_digital_window_cp01

0xa659,	// (0x000159b1) listscroll_help_pane

0xa367,	// (0x000156bf) phob_pre_status_pane

0xa663,	// (0x000159bb) grid_qdial_pane

0xa367,	// (0x000156bf) listscroll_mce_pane

0xa66d,	// (0x000159c5) bg_notes_pane

0xa677,	// (0x000159cf) list_notes_pane

0x2887,	// (0x0000dbdf) scroll_pane_cp06

0xa681,	// (0x000159d9) bg_calc_paper_pane

0xa699,	// (0x000159f1) list_calc_pane

0xa6b3,	// (0x00015a0b) bg_calc_display_pane

0xa6bf,	// (0x00015a17) calc_display_pane_t1

0xa6d4,	// (0x00015a2c) calc_display_pane_t2

0xa6e9,	// (0x00015a41) calc_display_pane_t3

0x0002,

0xf182,	// (0x0001a4da) calc_display_pane_t

0x2892,	// (0x0000dbea) cell_calc_pane_ParamLimits

0x2892,	// (0x0000dbea) cell_calc_pane

0xa6fb,	// (0x00015a53) bg_calc_paper_pane_g1

0xa707,	// (0x00015a5f) bg_calc_paper_pane_g2

0xa713,	// (0x00015a6b) bg_calc_paper_pane_g3

0xa71f,	// (0x00015a77) bg_calc_paper_pane_g4

0xa72b,	// (0x00015a83) bg_calc_paper_pane_g5

0x28c5,	// (0x0000dc1d) bg_calc_paper_pane_g6

0x28d4,	// (0x0000dc2c) bg_calc_paper_pane_g7

0x28e3,	// (0x0000dc3b) bg_calc_paper_pane_g8

0x0007,

0xf189,	// (0x0001a4e1) bg_calc_paper_pane_g

0x28f2,	// (0x0000dc4a) calc_bg_paper_pane_g9

0x2901,	// (0x0000dc59) list_calc_item_pane_ParamLimits

0x2901,	// (0x0000dc59) list_calc_item_pane

0xa737,	// (0x00015a8f) list_calc_item_pane_g1

0xa744,	// (0x00015a9c) list_calc_item_pane_t1_ParamLimits

0xa744,	// (0x00015a9c) list_calc_item_pane_t1

0x2915,	// (0x0000dc6d) list_calc_item_pane_t2_ParamLimits

0x2915,	// (0x0000dc6d) list_calc_item_pane_t2

0x0001,

0xf19a,	// (0x0001a4f2) list_calc_item_pane_t_ParamLimits

0xf19a,	// (0x0001a4f2) list_calc_item_pane_t

0xa756,	// (0x00015aae) cell_calc_pane_g1

0xa760,	// (0x00015ab8) grid_highlight_pane_cp02

0xa782,	// (0x00015ada) bg_calc_display_pane_g1

0xa78b,	// (0x00015ae3) bg_calc_display_pane_g2

0xa795,	// (0x00015aed) bg_calc_display_pane_g3

0x0002,

0xf1a4,	// (0x0001a4fc) bg_calc_display_pane_g

0x2943,	// (0x0000dc9b) cell_qdial_pane_ParamLimits

0x2943,	// (0x0000dc9b) cell_qdial_pane

0x2955,	// (0x0000dcad) cell_qdial_pane_g1_ParamLimits

0x2955,	// (0x0000dcad) cell_qdial_pane_g1

0x296b,	// (0x0000dcc3) cell_qdial_pane_g2_ParamLimits

0x296b,	// (0x0000dcc3) cell_qdial_pane_g2

0xa79e,	// (0x00015af6) cell_qdial_pane_g3_ParamLimits

0xa79e,	// (0x00015af6) cell_qdial_pane_g3

0x0003,

0xf1ab,	// (0x0001a503) cell_qdial_pane_g_ParamLimits

0xf1ab,	// (0x0001a503) cell_qdial_pane_g

0x2992,	// (0x0000dcea) cell_qdial_pane_t1_ParamLimits

0x2992,	// (0x0000dcea) cell_qdial_pane_t1

0x29aa,	// (0x0000dd02) cell_qdial_pane_t2_ParamLimits

0x29aa,	// (0x0000dd02) cell_qdial_pane_t2

0x29bd,	// (0x0000dd15) cell_qdial_pane_t3_ParamLimits

0x29bd,	// (0x0000dd15) cell_qdial_pane_t3

0x0002,

0xf1b4,	// (0x0001a50c) cell_qdial_pane_t_ParamLimits

0xf1b4,	// (0x0001a50c) cell_qdial_pane_t

0xa367,	// (0x000156bf) grid_highlight_pane_cp04

0xa7aa,	// (0x00015b02) thumbnail_qdial_pane_ParamLimits

0xa7aa,	// (0x00015b02) thumbnail_qdial_pane

0xa806,	// (0x00015b5e) list_help_pane

0xa810,	// (0x00015b68) scroll_pane_cp02

0x29d0,	// (0x0000dd28) help_list_pane_t1_ParamLimits

0x29d0,	// (0x0000dd28) help_list_pane_t1

0xa819,	// (0x00015b71) bg_notes_pane_g2

0xa821,	// (0x00015b79) bg_notes_pane_g3

0xa829,	// (0x00015b81) notes_bg_pane_g1

0xa831,	// (0x00015b89) notes_bg_pane_g4

0xa839,	// (0x00015b91) notes_bg_pane_g5

0xa841,	// (0x00015b99) notes_bg_pane_g6

0xa849,	// (0x00015ba1) notes_bg_pane_g7

0xa851,	// (0x00015ba9) notes_bg_pane_g8

0xa859,	// (0x00015bb1) notes_bg_pane_g9

0x0006,

0xf1d2,	// (0x0001a52a) notes_bg_pane_g

0xd0e3,	// (0x0001843b) list_notes_text_pane_ParamLimits

0xd0e3,	// (0x0001843b) list_notes_text_pane

0xa861,	// (0x00015bb9) list_notes_text_pane_g1

0x29ec,	// (0x0000dd44) list_notes_text_pane_t1

0xa87b,	// (0x00015bd3) listscroll_cale_week_pane

0x2a15,	// (0x0000dd6d) bg_cale_heading_pane

0xa88a,	// (0x00015be2) bg_cale_pane_cp01

0x2a29,	// (0x0000dd81) cale_week_corner_pane

0x2a3f,	// (0x0000dd97) cale_week_day_heading_pane

0x2a53,	// (0x0000ddab) cale_week_scroll_pane_g1

0x2a64,	// (0x0000ddbc) cale_week_scroll_pane_g2

0x2a75,	// (0x0000ddcd) cale_week_scroll_pane_g3

0x2a86,	// (0x0000ddde) cale_week_scroll_pane_g4

0x2a97,	// (0x0000ddef) cale_week_scroll_pane_g5

0x2aa8,	// (0x0000de00) cale_week_scroll_pane_g6

0x2ab9,	// (0x0000de11) cale_week_scroll_pane_g7

0x2aca,	// (0x0000de22) cale_week_scroll_pane_g8

0x2add,	// (0x0000de35) cale_week_scroll_pane_g9

0x2aee,	// (0x0000de46) cale_week_scroll_pane_g10

0x2aff,	// (0x0000de57) cale_week_scroll_pane_g11

0x2b10,	// (0x0000de68) cale_week_scroll_pane_g12

0x2b21,	// (0x0000de79) cale_week_scroll_pane_g13

0x2b32,	// (0x0000de8a) cale_week_scroll_pane_g14

0x2b43,	// (0x0000de9b) cale_week_scroll_pane_g15

0x000e,

0xf1e1,	// (0x0001a539) cale_week_scroll_pane_g

0x2b54,	// (0x0000deac) cale_week_time_pane

0x2b67,	// (0x0000debf) grid_cale_week_pane

0x2b7a,	// (0x0000ded2) scroll_pane_cp08

0x2b94,	// (0x0000deec) cell_cale_week_pane_ParamLimits

0x2b94,	// (0x0000deec) cell_cale_week_pane

0x2bd0,	// (0x0000df28) cale_week_day_heading_pane_t1

0x2bfa,	// (0x0000df52) cale_week_day_heading_pane_t2

0x2c24,	// (0x0000df7c) cale_week_day_heading_pane_t3

0x2c4e,	// (0x0000dfa6) cale_week_day_heading_pane_t4

0x2c78,	// (0x0000dfd0) cale_week_day_heading_pane_t5

0x2ca2,	// (0x0000dffa) cale_week_day_heading_pane_t6

0x2ccc,	// (0x0000e024) cale_week_day_heading_pane_t7

0x0006,

0xf200,	// (0x0001a558) cale_week_day_heading_pane_t

0xa8b5,	// (0x00015c0d) bg_cale_side_pane

0x2cf6,	// (0x0000e04e) cale_week_time_pane_t1

0x2d22,	// (0x0000e07a) cale_week_time_pane_t2

0x2d4e,	// (0x0000e0a6) cale_week_time_pane_t3

0x2d7a,	// (0x0000e0d2) cale_week_time_pane_t4

0x2da6,	// (0x0000e0fe) cale_week_time_pane_t5

0x2dd2,	// (0x0000e12a) cale_week_time_pane_t6

0x2dfe,	// (0x0000e156) cale_week_time_pane_t7

0x2e2a,	// (0x0000e182) cale_week_time_pane_t8

0x0007,

0xf20f,	// (0x0001a567) cale_week_time_pane_t

0x2e56,	// (0x0000e1ae) cell_cale_week_pane_g2

0x2e6f,	// (0x0000e1c7) cell_cale_week_pane_g3_ParamLimits

0x2e6f,	// (0x0000e1c7) cell_cale_week_pane_g3

0xa8c3,	// (0x00015c1b) grid_highlight_pane_cp07

0xa8cb,	// (0x00015c23) listscroll_gms_pane

0xa8d5,	// (0x00015c2d) grid_gms_pane

0xa8de,	// (0x00015c36) listscroll_gms_pane_g1

0xa8e6,	// (0x00015c3e) listscroll_gms_pane_g2

0x0001,

0xf220,	// (0x0001a578) listscroll_gms_pane_g

0x2e87,	// (0x0000e1df) scroll_pane_cp010

0x2e92,	// (0x0000e1ea) cell_gms_pane_ParamLimits

0x2e92,	// (0x0000e1ea) cell_gms_pane

0x2ea2,	// (0x0000e1fa) cell_gms_pane_g1

0xa8ee,	// (0x00015c46) cell_gms_pane_g2

0xa861,	// (0x00015bb9) cell_gms_pane_g3

0xa8f6,	// (0x00015c4e) cell_gms_pane_g4

0x0003,

0xf225,	// (0x0001a57d) cell_gms_pane_g

0xa8ff,	// (0x00015c57) grid_highlight_pane_cp09

0x4bf1,	// (0x0000ff49) phob_pre_status_pane_g1

0x4bf9,	// (0x0000ff51) phob_pre_status_pane_g2

0x4c01,	// (0x0000ff59) phob_pre_status_pane_g3

0x4c09,	// (0x0000ff61) phob_pre_status_pane_g4

0x0004,

0xf627,	// (0x0001a97f) phob_pre_status_pane_g

0x4c19,	// (0x0000ff71) phob_pre_status_pane_t1

0x4c27,	// (0x0000ff7f) phob_pre_status_pane_t2

0x4c35,	// (0x0000ff8d) phob_pre_status_pane_t3

0x0002,

0xf632,	// (0x0001a98a) phob_pre_status_pane_t

0xa367,	// (0x000156bf) bg_list_pane_cp05

0x2eb2,	// (0x0000e20a) grid_vorec_pane

0xa907,	// (0x00015c5f) vorec_t1

0xa915,	// (0x00015c6d) vorec_t2

0xa923,	// (0x00015c7b) vorec_t3

0xa931,	// (0x00015c89) vorec_t4

0xa93f,	// (0x00015c97) vorec_t5

0xa94d,	// (0x00015ca5) vorec_t6

0x0006,

0xf22e,	// (0x0001a586) vorec_t

0xa969,	// (0x00015cc1) wait_bar_pane_cp01

0x2eba,	// (0x0000e212) cell_vorec_pane_ParamLimits

0x2eba,	// (0x0000e212) cell_vorec_pane

0xa971,	// (0x00015cc9) cell_vorec_pane_g1

0xa367,	// (0x000156bf) grid_highlight_pane_cp05

0x2edf,	// (0x0000e237) cams_zoom_pane

0x2eee,	// (0x0000e246) image_vga_pane

0x2f06,	// (0x0000e25e) main_camera_pane_g1

0x2f16,	// (0x0000e26e) main_camera_pane_g2

0x2f26,	// (0x0000e27e) main_camera_pane_g3

0x2f36,	// (0x0000e28e) main_camera_pane_g4

0x2f46,	// (0x0000e29e) main_camera_pane_g5

0x2f56,	// (0x0000e2ae) main_camera_pane_g6

0x2f66,	// (0x0000e2be) main_camera_pane_g7

0x0007,

0xf23d,	// (0x0001a595) main_camera_pane_g

0x2f76,	// (0x0000e2ce) main_camera_pane_t1

0x2f8c,	// (0x0000e2e4) main_camera_pane_t2

0x0001,

0xf24e,	// (0x0001a5a6) main_camera_pane_t

0x2fbe,	// (0x0000e316) cams_zoom_pane_cp_ParamLimits

0x2fbe,	// (0x0000e316) cams_zoom_pane_cp

0x2fe6,	// (0x0000e33e) image_cif_pane_ParamLimits

0x2fe6,	// (0x0000e33e) image_cif_pane

0x3017,	// (0x0000e36f) image_subqcif_pane

0x301f,	// (0x0000e377) main_video_pane_g1_ParamLimits

0x301f,	// (0x0000e377) main_video_pane_g1

0x3043,	// (0x0000e39b) main_video_pane_g2_ParamLimits

0x3043,	// (0x0000e39b) main_video_pane_g2

0x3077,	// (0x0000e3cf) main_video_pane_g3_ParamLimits

0x3077,	// (0x0000e3cf) main_video_pane_g3

0x30a5,	// (0x0000e3fd) main_video_pane_g4_ParamLimits

0x30a5,	// (0x0000e3fd) main_video_pane_g4

0x30d3,	// (0x0000e42b) main_video_pane_g5_ParamLimits

0x30d3,	// (0x0000e42b) main_video_pane_g5

0xa987,	// (0x00015cdf) main_video_pane_g6_ParamLimits

0xa987,	// (0x00015cdf) main_video_pane_g6

0x0006,

0xf253,	// (0x0001a5ab) main_video_pane_g_ParamLimits

0xf253,	// (0x0001a5ab) main_video_pane_g

0x30fa,	// (0x0000e452) main_video_pane_t1_ParamLimits

0x30fa,	// (0x0000e452) main_video_pane_t1

0xa9a1,	// (0x00015cf9) cams_zoom_pane_g1

0xa9aa,	// (0x00015d02) cams_zoom_pane_g2

0xa9b3,	// (0x00015d0b) cams_zoom_pane_g3

0xa9bc,	// (0x00015d14) cams_zoom_pane_g4

0x0003,

0xf262,	// (0x0001a5ba) cams_zoom_pane_g

0x3157,	// (0x0000e4af) grid_cams_pane

0x316c,	// (0x0000e4c4) linegrid_cams_pane

0x317d,	// (0x0000e4d5) cell_cams_pane_ParamLimits

0x317d,	// (0x0000e4d5) cell_cams_pane

0xa9c5,	// (0x00015d1d) cams_burst_image_pane

0xa9cd,	// (0x00015d25) cell_cams_pane_g1

0xa367,	// (0x000156bf) grid_highlight_pane_cp03

0xa756,	// (0x00015aae) mp_bg_pane_g1

0xa367,	// (0x000156bf) bg_list_pane_cp03

0xc93b,	// (0x00017c93) bg_mp_pane

0xc943,	// (0x00017c9b) grid_mp_pane

0xc94b,	// (0x00017ca3) media_player_g1

0xc953,	// (0x00017cab) media_player_t1

0xc961,	// (0x00017cb9) media_player_t2

0xc96f,	// (0x00017cc7) media_player_t3

0xc97d,	// (0x00017cd5) media_player_t4

0xc98b,	// (0x00017ce3) media_player_t5

0xc999,	// (0x00017cf1) media_player_t6

0xc9a7,	// (0x00017cff) media_player_t7

0x0006,

0xf611,	// (0x0001a969) media_player_t

0xc9b5,	// (0x00017d0d) wait_bar_pane_cp02

0xf5f6,	// (0x0001a94e) main_usb_pane_t

0x4be8,	// (0x0000ff40) cell_mp_pane

0xa756,	// (0x00015aae) cell_mp_pane_g1

0xa367,	// (0x000156bf) grid_highlight_pane_cp06

0xaa75,	// (0x00015dcd) grid_skin_colour_pane

0xaa7d,	// (0x00015dd5) list_highlight_pane_cp03

0x31eb,	// (0x0000e543) skin_g1

0xaa85,	// (0x00015ddd) skin_t1

0xaa94,	// (0x00015dec) skin_t2

0x0001,

0xf297,	// (0x0001a5ef) skin_t

0x31f3,	// (0x0000e54b) cell_skin_colour_pane_ParamLimits

0x31f3,	// (0x0000e54b) cell_skin_colour_pane

0xaaa2,	// (0x00015dfa) cell_skin_colour_pane_g1

0x3245,	// (0x0000e59d) call_video_g1_ParamLimits

0x3245,	// (0x0000e59d) call_video_g1

0x325b,	// (0x0000e5b3) call_video_g2_ParamLimits

0x325b,	// (0x0000e5b3) call_video_g2

0x0001,

0xf29c,	// (0x0001a5f4) call_video_g_ParamLimits

0xf29c,	// (0x0001a5f4) call_video_g

0x3291,	// (0x0000e5e9) call_video_uplink_pane_cp1_ParamLimits

0x3291,	// (0x0000e5e9) call_video_uplink_pane_cp1

0xaabc,	// (0x00015e14) call_video_uplink_pane_cp2

0x32f8,	// (0x0000e650) video_down_crop_pane_ParamLimits

0x32f8,	// (0x0000e650) video_down_crop_pane

0x33a0,	// (0x0000e6f8) video_down_pane_ParamLimits

0x33a0,	// (0x0000e6f8) video_down_pane

0xaac4,	// (0x00015e1c) video_down_subqcif_pane_ParamLimits

0xaac4,	// (0x00015e1c) video_down_subqcif_pane

0xaadc,	// (0x00015e34) video_down_subqcif_pane_cp_ParamLimits

0xaadc,	// (0x00015e34) video_down_subqcif_pane_cp

0xab00,	// (0x00015e58) im_reading_pane_ParamLimits

0xab00,	// (0x00015e58) im_reading_pane

0x3430,	// (0x0000e788) im_writing_pane_ParamLimits

0x3430,	// (0x0000e788) im_writing_pane

0x3446,	// (0x0000e79e) im_reading_pane_t1

0xab1a,	// (0x00015e72) list_im_pane

0xab2b,	// (0x00015e83) scroll_pane_cp07

0x347c,	// (0x0000e7d4) im_writing_pane_t1_ParamLimits

0x347c,	// (0x0000e7d4) im_writing_pane_t1

0xab44,	// (0x00015e9c) im_writing_pane_t2_ParamLimits

0xab44,	// (0x00015e9c) im_writing_pane_t2

0x0001,

0xf2a6,	// (0x0001a5fe) im_writing_pane_t_ParamLimits

0xf2a6,	// (0x0001a5fe) im_writing_pane_t

0xa367,	// (0x000156bf) input_focus_pane_cp04

0xa367,	// (0x000156bf) input_focus_pane_cp05

0x3491,	// (0x0000e7e9) list_im_single_pane_ParamLimits

0x3491,	// (0x0000e7e9) list_im_single_pane

0xab61,	// (0x00015eb9) list_single_im_pane_t1

0x4bae,	// (0x0000ff06) blid_accuracy_pane

0x4bb6,	// (0x0000ff0e) blid_compass_pane

0x4bbe,	// (0x0000ff16) main_location_t1

0x4bcc,	// (0x0000ff24) main_location_t2

0x4bda,	// (0x0000ff32) main_location_t3

0x0002,

0xf620,	// (0x0001a978) main_location_t

0xa367,	// (0x000156bf) aid_levels_location

0xa756,	// (0x00015aae) blid_accuracy_pane_g1

0xa756,	// (0x00015aae) blid_accuracy_pane_g2

0x0001,

0xf308,	// (0x0001a660) blid_accuracy_pane_g

0xab9b,	// (0x00015ef3) wml_content_pane

0xabd9,	// (0x00015f31) wml_button_pane_ParamLimits

0xabd9,	// (0x00015f31) wml_button_pane

0x34a7,	// (0x0000e7ff) wml_list_single_large_pane_ParamLimits

0x34a7,	// (0x0000e7ff) wml_list_single_large_pane

0x34bb,	// (0x0000e813) wml_list_single_medium_pane_ParamLimits

0x34bb,	// (0x0000e813) wml_list_single_medium_pane

0x34d0,	// (0x0000e828) wml_list_single_small_pane_ParamLimits

0x34d0,	// (0x0000e828) wml_list_single_small_pane

0xabed,	// (0x00015f45) wml_selection_box_pane_ParamLimits

0xabed,	// (0x00015f45) wml_selection_box_pane

0xac00,	// (0x00015f58) wml_list_single_pane_t1

0xac0f,	// (0x00015f67) wml_list_single_medium_pane_t1

0xac1e,	// (0x00015f76) wml_list_single_large_pane_t1

0xac2d,	// (0x00015f85) input_focus_pane_cp02_ParamLimits

0xac2d,	// (0x00015f85) input_focus_pane_cp02

0xac40,	// (0x00015f98) wml_selection_box_pane_g1

0xac49,	// (0x00015fa1) wml_selection_box_pane_t1_ParamLimits

0xac49,	// (0x00015fa1) wml_selection_box_pane_t1

0xa5c2,	// (0x0001591a) bg_wml_button_pane_ParamLimits

0xa5c2,	// (0x0001591a) bg_wml_button_pane

0xac61,	// (0x00015fb9) wml_button_pane_g1

0xac69,	// (0x00015fc1) wml_button_pane_t1

0xac61,	// (0x00015fb9) wml_button_bg_pane_g1

0xac79,	// (0x00015fd1) wml_button_bg_pane_g2

0xac81,	// (0x00015fd9) wml_button_bg_pane_g3

0xac89,	// (0x00015fe1) wml_button_bg_pane_g4

0xac91,	// (0x00015fe9) wml_button_bg_pane_g5

0xac99,	// (0x00015ff1) wml_button_bg_pane_g6

0xaca1,	// (0x00015ff9) wml_button_bg_pane_g7

0xaca9,	// (0x00016001) wml_button_bg_pane_g8

0xacb1,	// (0x00016009) wml_button_bg_pane_g9

0x0008,

0xf2ab,	// (0x0001a603) wml_button_bg_pane_g

0x34e7,	// (0x0000e83f) bg_list_pane_cp02

0xacb9,	// (0x00016011) mce_header_pane_ParamLimits

0xacb9,	// (0x00016011) mce_header_pane

0xaccd,	// (0x00016025) mce_icon_pane

0xaccd,	// (0x00016025) mce_image_pane

0xacd6,	// (0x0001602e) mce_text_pane_ParamLimits

0xacd6,	// (0x0001602e) mce_text_pane

0x34f0,	// (0x0000e848) scroll_pane_cp03

0x34f0,	// (0x0000e848) scroll_pane_cp04

0xacea,	// (0x00016042) scroll_pane_cp05_ParamLimits

0xacea,	// (0x00016042) scroll_pane_cp05

0x34fa,	// (0x0000e852) mce_header_field_pane_ParamLimits

0x34fa,	// (0x0000e852) mce_header_field_pane

0x3511,	// (0x0000e869) mce_header_field_pane_2_ParamLimits

0x3511,	// (0x0000e869) mce_header_field_pane_2

0x3527,	// (0x0000e87f) mce_header_field_pane_3

0x352f,	// (0x0000e887) list_single_mce_message_pane_ParamLimits

0x352f,	// (0x0000e887) list_single_mce_message_pane

0x3544,	// (0x0000e89c) list_single_mce_smart_pane_ParamLimits

0x3544,	// (0x0000e89c) list_single_mce_smart_pane

0xacf6,	// (0x0001604e) input_focus_pane_cp03

0xacff,	// (0x00016057) list_header_data_pane

0x3564,	// (0x0000e8bc) mce_header_field_pane_t1

0x3572,	// (0x0000e8ca) list_single_mce_header_pane_ParamLimits

0x3572,	// (0x0000e8ca) list_single_mce_header_pane

0xad07,	// (0x0001605f) list_single_mce_header_pane_t1

0xad16,	// (0x0001606e) list_single_mce_message_pane_g1

0xad1f,	// (0x00016077) list_single_mce_message_pane_t1

0x35a4,	// (0x0000e8fc) bg_cale_heading_pane_cp01_ParamLimits

0x35a4,	// (0x0000e8fc) bg_cale_heading_pane_cp01

0xad2e,	// (0x00016086) bg_cale_pane_cp02_ParamLimits

0xad2e,	// (0x00016086) bg_cale_pane_cp02

0x35c7,	// (0x0000e91f) cale_month_corner_pane

0x35dd,	// (0x0000e935) cale_month_day_heading_pane_ParamLimits

0x35dd,	// (0x0000e935) cale_month_day_heading_pane

0x3610,	// (0x0000e968) cale_month_pane_g1_ParamLimits

0x3610,	// (0x0000e968) cale_month_pane_g1

0x362c,	// (0x0000e984) cale_month_pane_g2_ParamLimits

0x362c,	// (0x0000e984) cale_month_pane_g2

0x3647,	// (0x0000e99f) cale_month_pane_g3_ParamLimits

0x3647,	// (0x0000e99f) cale_month_pane_g3

0x3673,	// (0x0000e9cb) cale_month_pane_g4_ParamLimits

0x3673,	// (0x0000e9cb) cale_month_pane_g4

0x369f,	// (0x0000e9f7) cale_month_pane_g5_ParamLimits

0x369f,	// (0x0000e9f7) cale_month_pane_g5

0x36cb,	// (0x0000ea23) cale_month_pane_g6_ParamLimits

0x36cb,	// (0x0000ea23) cale_month_pane_g6

0x36f7,	// (0x0000ea4f) cale_month_pane_g7_ParamLimits

0x36f7,	// (0x0000ea4f) cale_month_pane_g7

0x3723,	// (0x0000ea7b) cale_month_pane_g8_ParamLimits

0x3723,	// (0x0000ea7b) cale_month_pane_g8

0x375f,	// (0x0000eab7) cale_month_pane_g9_ParamLimits

0x375f,	// (0x0000eab7) cale_month_pane_g9

0x3799,	// (0x0000eaf1) cale_month_pane_g10_ParamLimits

0x3799,	// (0x0000eaf1) cale_month_pane_g10

0x37d3,	// (0x0000eb2b) cale_month_pane_g11_ParamLimits

0x37d3,	// (0x0000eb2b) cale_month_pane_g11

0x380d,	// (0x0000eb65) cale_month_pane_g12_ParamLimits

0x380d,	// (0x0000eb65) cale_month_pane_g12

0x3847,	// (0x0000eb9f) cale_month_pane_g13_ParamLimits

0x3847,	// (0x0000eb9f) cale_month_pane_g13

0x000c,

0xf2be,	// (0x0001a616) cale_month_pane_g_ParamLimits

0xf2be,	// (0x0001a616) cale_month_pane_g

0x3881,	// (0x0000ebd9) cale_month_week_pane

0x3894,	// (0x0000ebec) grid_cale_month_pane_ParamLimits

0x3894,	// (0x0000ebec) grid_cale_month_pane

0x38c2,	// (0x0000ec1a) cale_month_day_heading_pane_t1

0x3920,	// (0x0000ec78) cale_month_day_heading_pane_t2

0x3985,	// (0x0000ecdd) cale_month_day_heading_pane_t3

0x39ea,	// (0x0000ed42) cale_month_day_heading_pane_t4

0x3a4f,	// (0x0000eda7) cale_month_day_heading_pane_t5

0x3ab4,	// (0x0000ee0c) cale_month_day_heading_pane_t6

0x3b19,	// (0x0000ee71) cale_month_day_heading_pane_t7

0x0006,

0xf2d9,	// (0x0001a631) cale_month_day_heading_pane_t

0xa8b5,	// (0x00015c0d) bg_cale_side_pane_cp01

0x3b86,	// (0x0000eede) cale_month_week_pane_t1

0x3b9d,	// (0x0000eef5) cale_month_week_pane_t2

0x3bb4,	// (0x0000ef0c) cale_month_week_pane_t3

0x3bcb,	// (0x0000ef23) cale_month_week_pane_t4

0x3be2,	// (0x0000ef3a) cale_month_week_pane_t5

0x3bf9,	// (0x0000ef51) cale_month_week_pane_t6

0x0005,

0xf2e8,	// (0x0001a640) cale_month_week_pane_t

0x3c10,	// (0x0000ef68) cell_cale_month_pane_ParamLimits

0x3c10,	// (0x0000ef68) cell_cale_month_pane

0xad8d,	// (0x000160e5) cell_cale_month_pane_g1

0x3cbe,	// (0x0000f016) cell_cale_month_pane_t1_ParamLimits

0x3cbe,	// (0x0000f016) cell_cale_month_pane_t1

0xa8c3,	// (0x00015c1b) grid_highlight_pane_cp08

0xa756,	// (0x00015aae) main_smil_g1

0x3cda,	// (0x0000f032) smil_status_pane

0xad99,	// (0x000160f1) smil_text_pane

0xc81b,	// (0x00017b73) bg_popup_call3_rect_pane_g8

0xc823,	// (0x00017b7b) bg_popup_call3_rect_pane_g9

0x0008,

0xf5a1,	// (0x0001a8f9) bg_popup_call3_rect_pane_g

0xcad9,	// (0x00017e31) smil_status_volume_pane_g1

0xada3,	// (0x000160fb) smil_status_pane_t1

0xcb0c,	// (0x00017e64) volume_smil_pane

0xadba,	// (0x00016112) list_smil_text_pane

0x3ceb,	// (0x0000f043) scroll_pane_cp011

0x3cf6,	// (0x0000f04e) smil_text_list_pane_t1_ParamLimits

0x3cf6,	// (0x0000f04e) smil_text_list_pane_t1

0xadc4,	// (0x0001611c) aid_volume_smil_ParamLimits

0xadc4,	// (0x0001611c) aid_volume_smil

0xa756,	// (0x00015aae) smil_volume_pane_g1

0xa756,	// (0x00015aae) smil_volume_pane_g2

0x0001,

0xf308,	// (0x0001a660) smil_volume_pane_g

0xa6b3,	// (0x00015a0b) listscroll_cale_day_pane

0xade6,	// (0x0001613e) bg_cale_pane

0xadfe,	// (0x00016156) list_cale_pane

0xae0f,	// (0x00016167) scroll_pane_cp09

0xae20,	// (0x00016178) cale_bg_pane_g1

0xae28,	// (0x00016180) cale_bg_pane_g2

0xae30,	// (0x00016188) cale_bg_pane_g3

0xae38,	// (0x00016190) cale_bg_pane_g4

0xae40,	// (0x00016198) cale_bg_pane_g5

0xae48,	// (0x000161a0) cale_bg_pane_g6

0xae50,	// (0x000161a8) cale_bg_pane_g7

0xae58,	// (0x000161b0) cale_bg_pane_g8

0xae60,	// (0x000161b8) cale_bg_pane_g9

0x0008,

0xf30d,	// (0x0001a665) cale_bg_pane_g

0x3d34,	// (0x0000f08c) list_cale_time_pane_ParamLimits

0x3d34,	// (0x0000f08c) list_cale_time_pane

0xae68,	// (0x000161c0) list_cale_time_pane_g1_ParamLimits

0xae68,	// (0x000161c0) list_cale_time_pane_g1

0xae74,	// (0x000161cc) list_cale_time_pane_g2_ParamLimits

0xae74,	// (0x000161cc) list_cale_time_pane_g2

0x3d49,	// (0x0000f0a1) list_cale_time_pane_g3_ParamLimits

0x3d49,	// (0x0000f0a1) list_cale_time_pane_g3

0x3d57,	// (0x0000f0af) list_cale_time_pane_g4_ParamLimits

0x3d57,	// (0x0000f0af) list_cale_time_pane_g4

0x3d65,	// (0x0000f0bd) list_cale_time_pane_g5_ParamLimits

0x3d65,	// (0x0000f0bd) list_cale_time_pane_g5

0x0005,

0xf320,	// (0x0001a678) list_cale_time_pane_g_ParamLimits

0xf320,	// (0x0001a678) list_cale_time_pane_g

0xae8e,	// (0x000161e6) list_cale_time_pane_t1_ParamLimits

0xae8e,	// (0x000161e6) list_cale_time_pane_t1

0xaeb6,	// (0x0001620e) list_cale_time_pane_t2_ParamLimits

0xaeb6,	// (0x0001620e) list_cale_time_pane_t2

0x4069,	// (0x0000f3c1) aid_blid_cardinal_pane

0x40a7,	// (0x0000f3ff) compass_pane_t4

0xaede,	// (0x00016236) list_cale_time_pane_t4_ParamLimits

0xaede,	// (0x00016236) list_cale_time_pane_t4

0x40b5,	// (0x0000f40d) compass_pane_t5

0x40c3,	// (0x0000f41b) compass_pane_t6

0x40d1,	// (0x0000f429) compass_pane_t7

0xb423,	// (0x0001677b) navi_pane_cc_t1

0xb5d9,	// (0x00016931) aid_phob_thumbnail_center_pane

0x4660,	// (0x0000f9b8) main_postcard_pane_g4_ParamLimits

0x0002,

0xf32d,	// (0x0001a685) list_cale_time_pane_t_ParamLimits

0xf32d,	// (0x0001a685) list_cale_time_pane_t

0x9fc0,	// (0x00015318) bg_popup_window_pane_cp02_ParamLimits

0x9fc0,	// (0x00015318) bg_popup_window_pane_cp02

0xaf06,	// (0x0001625e) heading_pane_cp01_ParamLimits

0xaf06,	// (0x0001625e) heading_pane_cp01

0xaf12,	// (0x0001626a) loc_req_pane_ParamLimits

0xaf12,	// (0x0001626a) loc_req_pane

0xaf22,	// (0x0001627a) loc_type_pane_ParamLimits

0xaf22,	// (0x0001627a) loc_type_pane

0xaf34,	// (0x0001628c) loc_type_pane_t1_ParamLimits

0xaf34,	// (0x0001628c) loc_type_pane_t1

0xaf46,	// (0x0001629e) loc_type_pane_t2_ParamLimits

0xaf46,	// (0x0001629e) loc_type_pane_t2

0xaf58,	// (0x000162b0) loc_type_pane_t3_ParamLimits

0xaf58,	// (0x000162b0) loc_type_pane_t3

0x0002,

0xf334,	// (0x0001a68c) loc_type_pane_t_ParamLimits

0xf334,	// (0x0001a68c) loc_type_pane_t

0xaf6a,	// (0x000162c2) list_loc_req_pane

0xaf74,	// (0x000162cc) scroll_pane_cp012

0x3d71,	// (0x0000f0c9) list_single_loc_request_popup_menu_pane_ParamLimits

0x3d71,	// (0x0000f0c9) list_single_loc_request_popup_menu_pane

0xaf7d,	// (0x000162d5) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xaf7d,	// (0x000162d5) list_single_loc_request_popup_menu_pane_g1

0xaf89,	// (0x000162e1) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xaf89,	// (0x000162e1) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf33b,	// (0x0001a693) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf33b,	// (0x0001a693) list_single_loc_request_popup_menu_pane_g

0xaf95,	// (0x000162ed) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xaf95,	// (0x000162ed) list_single_loc_request_popup_menu_pane_t1

0xa5c2,	// (0x0001591a) bg_popup_window_pane_cp03_ParamLimits

0xa5c2,	// (0x0001591a) bg_popup_window_pane_cp03

0xd0f7,	// (0x0001844f) heading_loc_req_pane_ParamLimits

0xd0f7,	// (0x0001844f) heading_loc_req_pane

0x3d7e,	// (0x0000f0d6) popup_dyc_status_message_window_g1_ParamLimits

0x3d7e,	// (0x0000f0d6) popup_dyc_status_message_window_g1

0x3d92,	// (0x0000f0ea) popup_dyc_status_message_window_t1_ParamLimits

0x3d92,	// (0x0000f0ea) popup_dyc_status_message_window_t1

0x3da7,	// (0x0000f0ff) popup_dyc_status_message_window_t2_ParamLimits

0x3da7,	// (0x0000f0ff) popup_dyc_status_message_window_t2

0x3dbc,	// (0x0000f114) popup_dyc_status_message_window_t3_ParamLimits

0x3dbc,	// (0x0000f114) popup_dyc_status_message_window_t3

0x0002,

0xf340,	// (0x0001a698) popup_dyc_status_message_window_t_ParamLimits

0xf340,	// (0x0001a698) popup_dyc_status_message_window_t

0xa367,	// (0x000156bf) bg_heading_pane_cp01

0xafab,	// (0x00016303) heading_loc_req_pane_g1

0xafb3,	// (0x0001630b) heading_loc_req_pane_g2

0xafbb,	// (0x00016313) heading_loc_req_pane_g3

0x0002,

0xf347,	// (0x0001a69f) heading_loc_req_pane_g

0xafc3,	// (0x0001631b) heading_loc_req_pane_t1

0xb06a,	// (0x000163c2) bg_popup_sub_pane_cp01_ParamLimits

0xb06a,	// (0x000163c2) bg_popup_sub_pane_cp01

0xb078,	// (0x000163d0) popup_cale_events_window_g1_ParamLimits

0xb078,	// (0x000163d0) popup_cale_events_window_g1

0xb098,	// (0x000163f0) popup_cale_events_window_g2_ParamLimits

0xb098,	// (0x000163f0) popup_cale_events_window_g2

0x0001,

0xf37b,	// (0x0001a6d3) popup_cale_events_window_g_ParamLimits

0xf37b,	// (0x0001a6d3) popup_cale_events_window_g

0xb0b8,	// (0x00016410) popup_cale_events_window_t1_ParamLimits

0xb0b8,	// (0x00016410) popup_cale_events_window_t1

0xb0ca,	// (0x00016422) popup_cale_events_window_t2_ParamLimits

0xb0ca,	// (0x00016422) popup_cale_events_window_t2

0xb108,	// (0x00016460) popup_cale_events_window_t3_ParamLimits

0xb108,	// (0x00016460) popup_cale_events_window_t3

0xb142,	// (0x0001649a) popup_cale_events_window_t4_ParamLimits

0xb142,	// (0x0001649a) popup_cale_events_window_t4

0x0003,

0xf380,	// (0x0001a6d8) popup_cale_events_window_t_ParamLimits

0xf380,	// (0x0001a6d8) popup_cale_events_window_t

0x3e4c,	// (0x0000f1a4) call_type_pane

0x3e5c,	// (0x0000f1b4) popup_call_status_window_g1

0x3e70,	// (0x0000f1c8) popup_call_status_window_g2

0x3e84,	// (0x0000f1dc) popup_call_status_window_g3

0x0002,

0xf389,	// (0x0001a6e1) popup_call_status_window_g

0xb178,	// (0x000164d0) call_type_pane_g1

0xb181,	// (0x000164d9) call_type_pane_g2

0x0001,

0xf390,	// (0x0001a6e8) call_type_pane_g

0xa367,	// (0x000156bf) bg_popup_sub_pane_cp02

0xb18a,	// (0x000164e2) listscroll_popup_wml_pane

0xb192,	// (0x000164ea) list_wml_pane

0xb19c,	// (0x000164f4) scroll_pane_cp013

0x3e94,	// (0x0000f1ec) list_single_graphic_popup_wml_pane_ParamLimits

0x3e94,	// (0x0000f1ec) list_single_graphic_popup_wml_pane

0xa756,	// (0x00015aae) list_single_graphic_popup_wml_pane_g1

0xb1a5,	// (0x000164fd) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf395,	// (0x0001a6ed) list_single_graphic_popup_wml_pane_g

0xb1ad,	// (0x00016505) list_single_graphic_popup_wml_pane_t1

0xb1c3,	// (0x0001651b) aid_call_pane

0xa5ba,	// (0x00015912) popup_clock_analogue_window_g1

0xa5ba,	// (0x00015912) popup_clock_analogue_window_g2

0xb1cb,	// (0x00016523) popup_clock_analogue_window_g3

0xb1cb,	// (0x00016523) popup_clock_analogue_window_g4

0xa756,	// (0x00015aae) popup_clock_analogue_window_g5

0x0004,

0xf39a,	// (0x0001a6f2) popup_clock_analogue_window_g

0xb1d3,	// (0x0001652b) popup_clock_analogue_window_t1

0xb1e1,	// (0x00016539) clock_digital_number_pane_ParamLimits

0xb1e1,	// (0x00016539) clock_digital_number_pane

0xb1ed,	// (0x00016545) clock_digital_number_pane_cp02_ParamLimits

0xb1ed,	// (0x00016545) clock_digital_number_pane_cp02

0xb1f9,	// (0x00016551) clock_digital_number_pane_cp03_ParamLimits

0xb1f9,	// (0x00016551) clock_digital_number_pane_cp03

0xb205,	// (0x0001655d) clock_digital_number_pane_cp04_ParamLimits

0xb205,	// (0x0001655d) clock_digital_number_pane_cp04

0xb211,	// (0x00016569) clock_digital_separator_pane_ParamLimits

0xb211,	// (0x00016569) clock_digital_separator_pane

0xb21d,	// (0x00016575) popup_clock_digital_window_t1

0xa756,	// (0x00015aae) clock_digital_number_pane_g1

0xa756,	// (0x00015aae) clock_digital_number_pane_g2

0x0001,

0xf308,	// (0x0001a660) clock_digital_number_pane_g

0xa756,	// (0x00015aae) clock_digital_separator_pane_g1

0xa756,	// (0x00015aae) clock_digital_separator_pane_g2

0x0001,

0xf308,	// (0x0001a660) clock_digital_separator_pane_g

0xa367,	// (0x000156bf) bg_popup_window_pane_cp04

0xb23a,	// (0x00016592) heading_pane_cp03

0xb242,	// (0x0001659a) listscroll_popup_gms_pane

0xb24a,	// (0x000165a2) grid_large_graphic_popup_pane

0xb254,	// (0x000165ac) listscroll_popup_gms_pane_g1

0xb25c,	// (0x000165b4) listscroll_popup_gms_pane_g2

0x0001,

0xf3a5,	// (0x0001a6fd) listscroll_popup_gms_pane_g

0xabd1,	// (0x00015f29) scroll_pane_cp014

0x3ea7,	// (0x0000f1ff) cell_large_graphic_popup_pane_ParamLimits

0x3ea7,	// (0x0000f1ff) cell_large_graphic_popup_pane

0x3ebd,	// (0x0000f215) cell_large_graphic_popup_pane_g1_ParamLimits

0x3ebd,	// (0x0000f215) cell_large_graphic_popup_pane_g1

0xb264,	// (0x000165bc) cell_large_graphic_popup_pane_g2_ParamLimits

0xb264,	// (0x000165bc) cell_large_graphic_popup_pane_g2

0xb270,	// (0x000165c8) cell_large_graphic_popup_pane_g3_ParamLimits

0xb270,	// (0x000165c8) cell_large_graphic_popup_pane_g3

0xb27d,	// (0x000165d5) cell_large_graphic_popup_pane_g4_ParamLimits

0xb27d,	// (0x000165d5) cell_large_graphic_popup_pane_g4

0x0003,

0xf3aa,	// (0x0001a702) cell_large_graphic_popup_pane_g_ParamLimits

0xf3aa,	// (0x0001a702) cell_large_graphic_popup_pane_g

0xb28d,	// (0x000165e5) grid_highlight_pane_cp010

0xa756,	// (0x00015aae) bg_popup_call_pane_g1

0xb297,	// (0x000165ef) list_single_graphic_popup_conf_pane_ParamLimits

0xb297,	// (0x000165ef) list_single_graphic_popup_conf_pane

0xb2aa,	// (0x00016602) list_highlight_pane_cp01

0xb2b3,	// (0x0001660b) list_single_graphic_popup_conf_pane_g1

0xb2bb,	// (0x00016613) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3b3,	// (0x0001a70b) list_single_graphic_popup_conf_pane_g

0xb2c3,	// (0x0001661b) list_single_graphic_popup_conf_pane_t1

0xb2d1,	// (0x00016629) linegrid_cams_pane_g1

0x3ec9,	// (0x0000f221) linegrid_cams_pane_g2

0xa861,	// (0x00015bb9) linegrid_cams_pane_g3

0xb2da,	// (0x00016632) linegrid_cams_pane_g4

0x3ed2,	// (0x0000f22a) linegrid_cams_pane_g5

0x3edb,	// (0x0000f233) linegrid_cams_pane_g6

0xa8f6,	// (0x00015c4e) linegrid_cams_pane_g7

0x0006,

0xf3b8,	// (0x0001a710) linegrid_cams_pane_g

0xb2e3,	// (0x0001663b) popup_clock_analogue_window

0xb2e3,	// (0x0001663b) popup_clock_digital_window

0xa367,	// (0x000156bf) popup_phob_thumbnail_window

0xa756,	// (0x00015aae) call_video_uplink_pane_g1

0xb2ec,	// (0x00016644) call_video_uplink_pane_g2

0x0001,

0xf3c7,	// (0x0001a71f) call_video_uplink_pane_g

0xa8c3,	// (0x00015c1b) video_uplink_pane

0xb2f4,	// (0x0001664c) mce_image_pane_g1

0x3ee4,	// (0x0000f23c) mce_image_pane_g2

0x3eec,	// (0x0000f244) mce_image_pane_g3

0x3ef4,	// (0x0000f24c) mce_image_pane_g4

0x3efc,	// (0x0000f254) mce_image_pane_g5

0x0004,

0xf3cc,	// (0x0001a724) mce_image_pane_g

0xb2fe,	// (0x00016656) control_top_pane_stacon_cp01_ParamLimits

0xb2fe,	// (0x00016656) control_top_pane_stacon_cp01

0xb30e,	// (0x00016666) uni_indicator_pane_stacon_cp01_ParamLimits

0xb30e,	// (0x00016666) uni_indicator_pane_stacon_cp01

0xb31f,	// (0x00016677) bg_popup_sub_pane_cp03

0xb329,	// (0x00016681) chi_dic_find_pane

0x3f04,	// (0x0000f25c) listscroll_chi_dic_pane

0xb331,	// (0x00016689) main_pane_chidic_g1

0xb339,	// (0x00016691) chi_dic_find_pane_t1

0xb347,	// (0x0001669f) find_chidic_pane

0xb350,	// (0x000166a8) chi_dic_list_pane_ParamLimits

0xb350,	// (0x000166a8) chi_dic_list_pane

0xb361,	// (0x000166b9) scroll_pane_cp020

0xb369,	// (0x000166c1) find_chidic_pane_t1

0xa367,	// (0x000156bf) input_focus_pane_cp06

0x3f18,	// (0x0000f270) list_chi_dic_pane_ParamLimits

0x3f18,	// (0x0000f270) list_chi_dic_pane

0x3f2a,	// (0x0000f282) list_chi_dic_pane_t1_ParamLimits

0x3f2a,	// (0x0000f282) list_chi_dic_pane_t1

0xa367,	// (0x000156bf) list_highlight_pane_cp020

0xb378,	// (0x000166d0) bg_cale_heading_pane_g1

0x3f3d,	// (0x0000f295) bg_cale_heading_pane_g2

0x3f45,	// (0x0000f29d) bg_cale_heading_pane_g3

0x3f4d,	// (0x0000f2a5) bg_cale_heading_pane_g4

0x3f57,	// (0x0000f2af) bg_cale_heading_pane_g5

0x3f61,	// (0x0000f2b9) bg_cale_heading_pane_g6

0x3f69,	// (0x0000f2c1) bg_cale_heading_pane_g7

0x3f71,	// (0x0000f2c9) bg_cale_heading_pane_g8

0x3f7b,	// (0x0000f2d3) bg_cale_heading_pane_g9

0x0008,

0xf3d7,	// (0x0001a72f) bg_cale_heading_pane_g

0xb378,	// (0x000166d0) bg_cale_side_pane_g1

0x3f85,	// (0x0000f2dd) bg_cale_side_pane_g2

0x3f8d,	// (0x0000f2e5) bg_cale_side_pane_g3

0x3f95,	// (0x0000f2ed) bg_cale_side_pane_g4

0x3f9d,	// (0x0000f2f5) bg_cale_side_pane_g5

0x3fa5,	// (0x0000f2fd) bg_cale_side_pane_g6

0x3fad,	// (0x0000f305) bg_cale_side_pane_g7

0x3fb5,	// (0x0000f30d) bg_cale_side_pane_g8

0x3fbd,	// (0x0000f315) bg_cale_side_pane_g9

0x0008,

0xf3ea,	// (0x0001a742) bg_cale_side_pane_g

0x3fc5,	// (0x0000f31d) popup_call_status_window_ParamLimits

0x3fc5,	// (0x0000f31d) popup_call_status_window

0xb380,	// (0x000166d8) stacon_top_pane

0xb388,	// (0x000166e0) status_pane_ParamLimits

0xb388,	// (0x000166e0) status_pane

0xb3a2,	// (0x000166fa) status_small_pane

0xb3aa,	// (0x00016702) control_pane

0xa367,	// (0x000156bf) stacon_bottom_pane

0xb3b2,	// (0x0001670a) list_single_mce_smart_pane_t1_ParamLimits

0xb3b2,	// (0x0001670a) list_single_mce_smart_pane_t1

0xb3c5,	// (0x0001671d) list_single_mce_smart_pane_t2_ParamLimits

0xb3c5,	// (0x0001671d) list_single_mce_smart_pane_t2

0x0001,

0xf3fd,	// (0x0001a755) list_single_mce_smart_pane_t_ParamLimits

0xf3fd,	// (0x0001a755) list_single_mce_smart_pane_t

0x400c,	// (0x0000f364) compass_pane

0x4015,	// (0x0000f36d) main_location2_pane_t1

0x402b,	// (0x0000f383) main_location2_pane_t2

0x4041,	// (0x0000f399) main_location2_pane_t3

0x0003,

0xf402,	// (0x0001a75a) main_location2_pane_t

0xb3ed,	// (0x00016745) compass_pane_g1_ParamLimits

0xb3ed,	// (0x00016745) compass_pane_g1

0x4089,	// (0x0000f3e1) compass_pane_t1

0x4098,	// (0x0000f3f0) compass_pane_t2

0x0005,

0xf40b,	// (0x0001a763) compass_pane_t

0x40df,	// (0x0000f437) text_secondary_cp61

0xb41a,	// (0x00016772) navi_pane_cams_g5

0xb45b,	// (0x000167b3) navi_pane_im_t1

0xb469,	// (0x000167c1) navi_pane_mp_g1_ParamLimits

0xb469,	// (0x000167c1) navi_pane_mp_g1

0xb47d,	// (0x000167d5) navi_pane_mp_g2_ParamLimits

0xb47d,	// (0x000167d5) navi_pane_mp_g2

0xb489,	// (0x000167e1) navi_pane_mp_g3_ParamLimits

0xb489,	// (0x000167e1) navi_pane_mp_g3

0x0002,

0xf41f,	// (0x0001a777) navi_pane_mp_g_ParamLimits

0xf41f,	// (0x0001a777) navi_pane_mp_g

0xb495,	// (0x000167ed) navi_pane_mp_t1

0xb4a3,	// (0x000167fb) navi_pane_mp_t2

0x0002,

0xf426,	// (0x0001a77e) navi_pane_mp_t

0xb510,	// (0x00016868) navi_pane_vt_g1

0xb495,	// (0x000167ed) navi_pane_vt_t1

0xb518,	// (0x00016870) navi_slider_pane

0xb520,	// (0x00016878) zooming_pane

0xb528,	// (0x00016880) navi_slider_pane_g1

0xb531,	// (0x00016889) navi_slider_pane_g2

0x0006,

0xf42d,	// (0x0001a785) navi_slider_pane_g

0xb55e,	// (0x000168b6) aid_levels_zoom

0xb566,	// (0x000168be) zooming_pane_g1

0xb56e,	// (0x000168c6) zooming_pane_g2

0xb56e,	// (0x000168c6) zooming_pane_g3

0x0002,

0xf43c,	// (0x0001a794) zooming_pane_g

0xb576,	// (0x000168ce) level_10_zoom

0xb57f,	// (0x000168d7) level_11_zoom

0xb588,	// (0x000168e0) level_1_zoom

0xb591,	// (0x000168e9) level_2_zoom

0xb59a,	// (0x000168f2) level_3_zoom

0xb5a3,	// (0x000168fb) level_4_zoom

0xb5ac,	// (0x00016904) level_5_zoom

0xb5b5,	// (0x0001690d) level_6_zoom

0xb5be,	// (0x00016916) level_7_zoom

0xb5c7,	// (0x0001691f) level_8_zoom

0xb5d0,	// (0x00016928) level_9_zoom

0xb5e1,	// (0x00016939) popup_phob_thumbnail_window_g1

0xb5e9,	// (0x00016941) popup_phob_thumbnail_window_g2

0x0001,

0xf443,	// (0x0001a79b) popup_phob_thumbnail_window_g

0xc9bd,	// (0x00017d15) level_1_location

0xc9c5,	// (0x00017d1d) level_2_location

0xc9cd,	// (0x00017d25) level_3_location

0xc9d5,	// (0x00017d2d) level_4_location

0xb520,	// (0x00016878) level_5_location

0x416a,	// (0x0000f4c2) mce_icon_pane_g1

0x4172,	// (0x0000f4ca) mce_icon_pane_g2

0x0001,

0xf448,	// (0x0001a7a0) mce_icon_pane_g

0x417a,	// (0x0000f4d2) main_mup_pane_g1_ParamLimits

0x417a,	// (0x0000f4d2) main_mup_pane_g1

0x4190,	// (0x0000f4e8) main_mup_pane_g2_ParamLimits

0x4190,	// (0x0000f4e8) main_mup_pane_g2

0x41a8,	// (0x0000f500) main_mup_pane_g3_ParamLimits

0x41a8,	// (0x0000f500) main_mup_pane_g3

0x41c0,	// (0x0000f518) main_mup_pane_g4_ParamLimits

0x41c0,	// (0x0000f518) main_mup_pane_g4

0x41d8,	// (0x0000f530) main_mup_pane_g5_ParamLimits

0x41d8,	// (0x0000f530) main_mup_pane_g5

0x41f2,	// (0x0000f54a) main_mup_pane_g6_ParamLimits

0x41f2,	// (0x0000f54a) main_mup_pane_g6

0x420a,	// (0x0000f562) main_mup_pane_g7_ParamLimits

0x420a,	// (0x0000f562) main_mup_pane_g7

0x4222,	// (0x0000f57a) main_mup_pane_g8_ParamLimits

0x4222,	// (0x0000f57a) main_mup_pane_g8

0x423a,	// (0x0000f592) main_mup_pane_g9_ParamLimits

0x423a,	// (0x0000f592) main_mup_pane_g9

0x424e,	// (0x0000f5a6) main_mup_pane_g10_ParamLimits

0x424e,	// (0x0000f5a6) main_mup_pane_g10

0x4262,	// (0x0000f5ba) main_mup_pane_g11_ParamLimits

0x4262,	// (0x0000f5ba) main_mup_pane_g11

0x4274,	// (0x0000f5cc) main_mup_pane_g12_ParamLimits

0x4274,	// (0x0000f5cc) main_mup_pane_g12

0x4288,	// (0x0000f5e0) main_mup_pane_g13_ParamLimits

0x4288,	// (0x0000f5e0) main_mup_pane_g13

0x000c,

0xf44d,	// (0x0001a7a5) main_mup_pane_g_ParamLimits

0xf44d,	// (0x0001a7a5) main_mup_pane_g

0x429a,	// (0x0000f5f2) main_mup_pane_t1_ParamLimits

0x429a,	// (0x0000f5f2) main_mup_pane_t1

0x42b4,	// (0x0000f60c) main_mup_pane_t2_ParamLimits

0x42b4,	// (0x0000f60c) main_mup_pane_t2

0x42cc,	// (0x0000f624) main_mup_pane_t3_ParamLimits

0x42cc,	// (0x0000f624) main_mup_pane_t3

0x42e4,	// (0x0000f63c) main_mup_pane_t4_ParamLimits

0x42e4,	// (0x0000f63c) main_mup_pane_t4

0x4302,	// (0x0000f65a) main_mup_pane_t5_ParamLimits

0x4302,	// (0x0000f65a) main_mup_pane_t5

0x4317,	// (0x0000f66f) main_mup_pane_t6_ParamLimits

0x4317,	// (0x0000f66f) main_mup_pane_t6

0x0005,

0xf468,	// (0x0001a7c0) main_mup_pane_t_ParamLimits

0xf468,	// (0x0001a7c0) main_mup_pane_t

0x4329,	// (0x0000f681) mup_progress_pane_ParamLimits

0x4329,	// (0x0000f681) mup_progress_pane

0x4335,	// (0x0000f68d) mup_visualizer_pane_ParamLimits

0x4335,	// (0x0000f68d) mup_visualizer_pane

0x435d,	// (0x0000f6b5) mup_volume_pane_ParamLimits

0x435d,	// (0x0000f6b5) mup_volume_pane

0xb5f1,	// (0x00016949) mup_visualizer_pane_g1_ParamLimits

0xb5f1,	// (0x00016949) mup_visualizer_pane_g1

0xb5f1,	// (0x00016949) mup_visualizer_pane_g2_ParamLimits

0xb5f1,	// (0x00016949) mup_visualizer_pane_g2

0xb3ed,	// (0x00016745) mup_visualizer_pane_g3_ParamLimits

0xb3ed,	// (0x00016745) mup_visualizer_pane_g3

0x0002,

0xf475,	// (0x0001a7cd) mup_visualizer_pane_g_ParamLimits

0xf475,	// (0x0001a7cd) mup_visualizer_pane_g

0xa756,	// (0x00015aae) mup_volume_pane_g1

0xb607,	// (0x0001695f) mup_volume_pane_g2

0x0001,

0xf47c,	// (0x0001a7d4) mup_volume_pane_g

0xa756,	// (0x00015aae) mup_progress_pane_g1

0xb610,	// (0x00016968) mup_progress_pane_g2

0xb619,	// (0x00016971) mup_progress_pane_g3

0x0002,

0xf481,	// (0x0001a7d9) mup_progress_pane_g

0xa367,	// (0x000156bf) bg_popup_window_pane_cp05

0xb622,	// (0x0001697a) heading_pane_cp02_ParamLimits

0xb622,	// (0x0001697a) heading_pane_cp02

0xb63c,	// (0x00016994) list_popup_blid_pane

0xb644,	// (0x0001699c) list_blid_sat_info_pane_ParamLimits

0xb644,	// (0x0001699c) list_blid_sat_info_pane

0xb657,	// (0x000169af) list_blid_sat_info_pane_g1

0xb65f,	// (0x000169b7) list_blid_sat_info_pane_t1

0x444d,	// (0x0000f7a5) mup_equalizer_pane_ParamLimits

0x444d,	// (0x0000f7a5) mup_equalizer_pane

0x4466,	// (0x0000f7be) mup_equalizer_pane_cp1_ParamLimits

0x4466,	// (0x0000f7be) mup_equalizer_pane_cp1

0x447f,	// (0x0000f7d7) mup_equalizer_pane_cp2_ParamLimits

0x447f,	// (0x0000f7d7) mup_equalizer_pane_cp2

0x4498,	// (0x0000f7f0) mup_equalizer_pane_cp3_ParamLimits

0x4498,	// (0x0000f7f0) mup_equalizer_pane_cp3

0x44b1,	// (0x0000f809) mup_equalizer_pane_cp4_ParamLimits

0x44b1,	// (0x0000f809) mup_equalizer_pane_cp4

0x44ca,	// (0x0000f822) mup_equalizer_pane_cp5

0x44dc,	// (0x0000f834) mup_equalizer_pane_cp6

0x44ee,	// (0x0000f846) mup_equalizer_pane_cp7

0xc89b,	// (0x00017bf3) bg_popup_call_poc_act_pane_g9

0xc8a3,	// (0x00017bfb) bg_popup_call_poc_act_pane_g10

0xc8ab,	// (0x00017c03) bg_popup_call_poc_act_pane_g11

0x000a,

0xa5c2,	// (0x0001591a) mup_scale_pane

0xa756,	// (0x00015aae) mup_scale_pane_g1

0xb66d,	// (0x000169c5) mup_scale_pane_g2

0x0006,

0xf49d,	// (0x0001a7f5) mup_scale_pane_g

0xb691,	// (0x000169e9) msg_data_pane

0xb699,	// (0x000169f1) scroll_pane_cp017

0x4514,	// (0x0000f86c) bg_list_pane_cp04_ParamLimits

0x4514,	// (0x0000f86c) bg_list_pane_cp04

0xb6a9,	// (0x00016a01) msg_data_pane_g1

0x3ee4,	// (0x0000f23c) msg_data_pane_g2

0x3eec,	// (0x0000f244) msg_data_pane_g3

0x452c,	// (0x0000f884) msg_data_pane_g4

0x3efc,	// (0x0000f254) msg_data_pane_g5

0x416a,	// (0x0000f4c2) msg_data_pane_g6

0x4534,	// (0x0000f88c) msg_data_pane_g7

0x0006,

0xf4ac,	// (0x0001a804) msg_data_pane_g

0x453c,	// (0x0000f894) msg_text_pane_ParamLimits

0x453c,	// (0x0000f894) msg_text_pane

0x4560,	// (0x0000f8b8) qrid_highlight_pane_cp011_ParamLimits

0x4560,	// (0x0000f8b8) qrid_highlight_pane_cp011

0xa367,	// (0x000156bf) msg_body_pane

0xa367,	// (0x000156bf) msg_header_pane

0xb6ba,	// (0x00016a12) input_focus_pane_cp07

0x4582,	// (0x0000f8da) msg_header_pane_t1_ParamLimits

0x4582,	// (0x0000f8da) msg_header_pane_t1

0xb6cf,	// (0x00016a27) msg_header_pane_t2_ParamLimits

0xb6cf,	// (0x00016a27) msg_header_pane_t2

0x0001,

0xf4c0,	// (0x0001a818) msg_header_pane_t_ParamLimits

0xf4c0,	// (0x0001a818) msg_header_pane_t

0xb6e1,	// (0x00016a39) msg_body_pane_g1

0xb6e9,	// (0x00016a41) msg_body_pane_t1_ParamLimits

0xb6e9,	// (0x00016a41) msg_body_pane_t1

0xb714,	// (0x00016a6c) msg_body_pane_t2_ParamLimits

0xb714,	// (0x00016a6c) msg_body_pane_t2

0xb726,	// (0x00016a7e) msg_body_pane_t3_ParamLimits

0xb726,	// (0x00016a7e) msg_body_pane_t3

0x0002,

0xf4c5,	// (0x0001a81d) msg_body_pane_t_ParamLimits

0xf4c5,	// (0x0001a81d) msg_body_pane_t

0x45ca,	// (0x0000f922) main_viewer_pane_g1_ParamLimits

0x45ca,	// (0x0000f922) main_viewer_pane_g1

0x45d6,	// (0x0000f92e) main_viewer_pane_g2_ParamLimits

0x45d6,	// (0x0000f92e) main_viewer_pane_g2

0x45e2,	// (0x0000f93a) main_viewer_pane_g3_ParamLimits

0x45e2,	// (0x0000f93a) main_viewer_pane_g3

0x45f1,	// (0x0000f949) main_viewer_pane_g4_ParamLimits

0x45f1,	// (0x0000f949) main_viewer_pane_g4

0xb750,	// (0x00016aa8) main_viewer_pane_g5_ParamLimits

0xb750,	// (0x00016aa8) main_viewer_pane_g5

0xb750,	// (0x00016aa8) main_viewer_pane_g7_ParamLimits

0xb750,	// (0x00016aa8) main_viewer_pane_g7

0xb762,	// (0x00016aba) main_viewer_pane_g8_ParamLimits

0xb762,	// (0x00016aba) main_viewer_pane_g8

0x0007,

0xf4d5,	// (0x0001a82d) main_viewer_pane_g_ParamLimits

0xf4d5,	// (0x0001a82d) main_viewer_pane_g

0xb77a,	// (0x00016ad2) viewer_content_pane_ParamLimits

0xb77a,	// (0x00016ad2) viewer_content_pane

0x4625,	// (0x0000f97d) main_postcard_pane_g1_ParamLimits

0x4625,	// (0x0000f97d) main_postcard_pane_g1

0x4639,	// (0x0000f991) main_postcard_pane_g2_ParamLimits

0x4639,	// (0x0000f991) main_postcard_pane_g2

0x464d,	// (0x0000f9a5) main_postcard_pane_g3_ParamLimits

0x464d,	// (0x0000f9a5) main_postcard_pane_g3

0x0005,

0xf4e6,	// (0x0001a83e) main_postcard_pane_g_ParamLimits

0xf4e6,	// (0x0001a83e) main_postcard_pane_g

0x4660,	// (0x0000f9b8) main_postcard_pane_g4

0xcaec,	// (0x00017e44) smil_status_volume_pane_g2

0x469b,	// (0x0000f9f3) postcard_pane_ParamLimits

0x469b,	// (0x0000f9f3) postcard_pane

0xb788,	// (0x00016ae0) postcard_pane_g1_ParamLimits

0xb788,	// (0x00016ae0) postcard_pane_g1

0x46db,	// (0x0000fa33) postcard_pane_g2_ParamLimits

0x46db,	// (0x0000fa33) postcard_pane_g2

0x46e7,	// (0x0000fa3f) postcard_pane_g3_ParamLimits

0x46e7,	// (0x0000fa3f) postcard_pane_g3

0xb796,	// (0x00016aee) postcard_pane_g4_ParamLimits

0xb796,	// (0x00016aee) postcard_pane_g4

0x46f3,	// (0x0000fa4b) postcard_pane_g5_ParamLimits

0x46f3,	// (0x0000fa4b) postcard_pane_g5

0x4708,	// (0x0000fa60) postcard_pane_g6_ParamLimits

0x4708,	// (0x0000fa60) postcard_pane_g6

0xb788,	// (0x00016ae0) postcard_pane_g7_ParamLimits

0xb788,	// (0x00016ae0) postcard_pane_g7

0x0006,

0xf4f3,	// (0x0001a84b) postcard_pane_g_ParamLimits

0xf4f3,	// (0x0001a84b) postcard_pane_g

0x471c,	// (0x0000fa74) main_mp2_pane_g1_ParamLimits

0x471c,	// (0x0000fa74) main_mp2_pane_g1

0x4728,	// (0x0000fa80) main_mp2_pane_g2_ParamLimits

0x4728,	// (0x0000fa80) main_mp2_pane_g2

0x4734,	// (0x0000fa8c) main_mp2_pane_g3_ParamLimits

0x4734,	// (0x0000fa8c) main_mp2_pane_g3

0x0002,

0xf502,	// (0x0001a85a) main_mp2_pane_g_ParamLimits

0xf502,	// (0x0001a85a) main_mp2_pane_g

0x4740,	// (0x0000fa98) main_mp2_pane_t1_ParamLimits

0x4740,	// (0x0000fa98) main_mp2_pane_t1

0x4755,	// (0x0000faad) main_mp2_pane_t2_ParamLimits

0x4755,	// (0x0000faad) main_mp2_pane_t2

0x4767,	// (0x0000fabf) main_mp2_pane_t3_ParamLimits

0x4767,	// (0x0000fabf) main_mp2_pane_t3

0x0002,

0xf509,	// (0x0001a861) main_mp2_pane_t_ParamLimits

0xf509,	// (0x0001a861) main_mp2_pane_t

0xb7a4,	// (0x00016afc) pec_content_pane_ParamLimits

0xb7a4,	// (0x00016afc) pec_content_pane

0xabd1,	// (0x00015f29) scroll_pane_cp015

0xb7b6,	// (0x00016b0e) pec_attribute_pane_ParamLimits

0xb7b6,	// (0x00016b0e) pec_attribute_pane

0x4779,	// (0x0000fad1) pec_content_pane_g1_ParamLimits

0x4779,	// (0x0000fad1) pec_content_pane_g1

0xb7c6,	// (0x00016b1e) pec_content_pane_t1_ParamLimits

0xb7c6,	// (0x00016b1e) pec_content_pane_t1

0xb7d8,	// (0x00016b30) pec_content_pane_t2_ParamLimits

0xb7d8,	// (0x00016b30) pec_content_pane_t2

0x0001,

0xf510,	// (0x0001a868) pec_content_pane_t_ParamLimits

0xf510,	// (0x0001a868) pec_content_pane_t

0x4785,	// (0x0000fadd) list_single_graphic_pane_cp01_ParamLimits

0x4785,	// (0x0000fadd) list_single_graphic_pane_cp01

0xa5c2,	// (0x0001591a) bg_popup_sub_pane_cp04

0xb7ea,	// (0x00016b42) popup_mup_playback_window_g1

0xb7f6,	// (0x00016b4e) popup_mup_playback_window_t1

0xb80b,	// (0x00016b63) popup_mup_playback_window_t2

0x0001,

0xf515,	// (0x0001a86d) popup_mup_playback_window_t

0xb842,	// (0x00016b9a) main_image_pane_g1_ParamLimits

0xb842,	// (0x00016b9a) main_image_pane_g1

0xb885,	// (0x00016bdd) scroll_pane_cp018_ParamLimits

0xb885,	// (0x00016bdd) scroll_pane_cp018

0xb89d,	// (0x00016bf5) scroll_pane_cp016_ParamLimits

0xb89d,	// (0x00016bf5) scroll_pane_cp016

0x4850,	// (0x0000fba8) smil2_image_pane_ParamLimits

0x4850,	// (0x0000fba8) smil2_image_pane

0x4878,	// (0x0000fbd0) smil2_root_pane_ParamLimits

0x4878,	// (0x0000fbd0) smil2_root_pane

0x48b0,	// (0x0000fc08) smil2_text_pane_ParamLimits

0x48b0,	// (0x0000fc08) smil2_text_pane

0xa367,	// (0x000156bf) bg_list_pane_cp06

0xb8d9,	// (0x00016c31) grid_radio_pane

0xa367,	// (0x000156bf) bg_popup_window_pane_cp06

0xb8e1,	// (0x00016c39) main_fmradio_pane_t1

0xb23a,	// (0x00016592) heading_pane_cp04

0xb8ef,	// (0x00016c47) main_fmradio_pane_t2

0xc8f3,	// (0x00017c4b) popup_cale_lunar_info_window_g1

0xb8fd,	// (0x00016c55) main_fmradio_pane_t3

0xc8fb,	// (0x00017c53) popup_cale_lunar_info_window_g2

0xb90b,	// (0x00016c63) main_fmradio_pane_t4

0x0001,

0xb919,	// (0x00016c71) main_fmradio_pane_t5

0x0004,

0xf603,	// (0x0001a95b) popup_cale_lunar_info_window_g

0xf52a,	// (0x0001a882) main_fmradio_pane_t

0xb927,	// (0x00016c7f) wait_bar_pane_cp03

0xb92f,	// (0x00016c87) cell_fmradio_pane_ParamLimits

0xb92f,	// (0x00016c87) cell_fmradio_pane

0xb788,	// (0x00016ae0) cell_fmradio_pane_g1_ParamLimits

0xb788,	// (0x00016ae0) cell_fmradio_pane_g1

0xa367,	// (0x000156bf) grid_highlight_pane_cp011

0xb942,	// (0x00016c9a) poc_content_pane_ParamLimits

0xb942,	// (0x00016c9a) poc_content_pane

0xb955,	// (0x00016cad) scroll_pane_cp019

0x491c,	// (0x0000fc74) popup_call_poc_act_window_ParamLimits

0x491c,	// (0x0000fc74) popup_call_poc_act_window

0x493c,	// (0x0000fc94) popup_call_poc_inact_window_ParamLimits

0x493c,	// (0x0000fc94) popup_call_poc_inact_window

0xf5c7,	// (0x0001a91f) bg_popup_call_poc_act_pane_g

0xc8b3,	// (0x00017c0b) bg_popup_call_poc_inact_pane_g1

0xc8bb,	// (0x00017c13) bg_popup_call_poc_inact_pane_g2

0xb95d,	// (0x00016cb5) popup_call_poc_act_window_g2

0xc8c3,	// (0x00017c1b) bg_popup_call_poc_inact_pane_g3

0xc843,	// (0x00017b9b) bg_popup_call_poc_inact_pane_g4

0xc8cb,	// (0x00017c23) bg_popup_call_poc_inact_pane_g5

0xb965,	// (0x00016cbd) popup_call_poc_act_window_t1_ParamLimits

0xb965,	// (0x00016cbd) popup_call_poc_act_window_t1

0xb98d,	// (0x00016ce5) popup_call_poc_act_window_t2_ParamLimits

0xb98d,	// (0x00016ce5) popup_call_poc_act_window_t2

0xb9b5,	// (0x00016d0d) popup_call_poc_act_window_t3_ParamLimits

0xb9b5,	// (0x00016d0d) popup_call_poc_act_window_t3

0xb9dd,	// (0x00016d35) popup_call_poc_act_window_t4_ParamLimits

0xb9dd,	// (0x00016d35) popup_call_poc_act_window_t4

0x0003,

0xf535,	// (0x0001a88d) popup_call_poc_act_window_t_ParamLimits

0xf535,	// (0x0001a88d) popup_call_poc_act_window_t

0xc8d3,	// (0x00017c2b) bg_popup_call_poc_inact_pane_g6

0xc8db,	// (0x00017c33) bg_popup_call_poc_inact_pane_g7

0xc8e3,	// (0x00017c3b) bg_popup_call_poc_inact_pane_g8

0xb9ef,	// (0x00016d47) popup_call_poc_inact_window_g2

0xc8eb,	// (0x00017c43) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5de,	// (0x0001a936) bg_popup_call_poc_inact_pane_g

0xb9f7,	// (0x00016d4f) popup_call_poc_inact_window_t1_ParamLimits

0xb9f7,	// (0x00016d4f) popup_call_poc_inact_window_t1

0xba0c,	// (0x00016d64) popup_call_poc_inact_window_t2_ParamLimits

0xba0c,	// (0x00016d64) popup_call_poc_inact_window_t2

0xba21,	// (0x00016d79) popup_call_poc_inact_window_t3_ParamLimits

0xba21,	// (0x00016d79) popup_call_poc_inact_window_t3

0x0002,

0xf53e,	// (0x0001a896) popup_call_poc_inact_window_t_ParamLimits

0xf53e,	// (0x0001a896) popup_call_poc_inact_window_t

0xca5f,	// (0x00017db7) context_pane_ParamLimits

0x504e,	// (0x000103a6) signal_pane_ParamLimits

0xb520,	// (0x00016878) main_call2_pane

0xca4d,	// (0x00017da5) popup_phob_thumbnail2_window_ParamLimits

0xca4d,	// (0x00017da5) popup_phob_thumbnail2_window

0xb738,	// (0x00016a90) aid_hotspot_pointer_arrow_pane

0xb740,	// (0x00016a98) aid_hotspot_pointer_hand_pane

0x4c11,	// (0x0000ff69) phob_pre_status_pane_g5

0x2edf,	// (0x0000e237) cams_zoom_pane_ParamLimits

0x2eee,	// (0x0000e246) image_vga_pane_ParamLimits

0x2f06,	// (0x0000e25e) main_camera_pane_g1_ParamLimits

0x2f16,	// (0x0000e26e) main_camera_pane_g2_ParamLimits

0x2f26,	// (0x0000e27e) main_camera_pane_g3_ParamLimits

0x2f36,	// (0x0000e28e) main_camera_pane_g4_ParamLimits

0x2f46,	// (0x0000e29e) main_camera_pane_g5_ParamLimits

0x2f56,	// (0x0000e2ae) main_camera_pane_g6_ParamLimits

0x2f66,	// (0x0000e2be) main_camera_pane_g7_ParamLimits

0xf23d,	// (0x0001a595) main_camera_pane_g_ParamLimits

0x2f76,	// (0x0000e2ce) main_camera_pane_t1_ParamLimits

0x2f8c,	// (0x0000e2e4) main_camera_pane_t2_ParamLimits

0xf24e,	// (0x0001a5a6) main_camera_pane_t_ParamLimits

0xa5c2,	// (0x0001591a) bg_popup_preview_window_pane_cp01_ParamLimits

0xa5c2,	// (0x0001591a) bg_popup_preview_window_pane_cp01

0xba36,	// (0x00016d8e) popup_phob_thumbnail2_window_g1_ParamLimits

0xba36,	// (0x00016d8e) popup_phob_thumbnail2_window_g1

0xa367,	// (0x000156bf) call2_cli_visual_pane

0x4968,	// (0x0000fcc0) popup_call2_audio_conf_window_ParamLimits

0x4968,	// (0x0000fcc0) popup_call2_audio_conf_window

0x4986,	// (0x0000fcde) popup_call2_audio_first_window_ParamLimits

0x4986,	// (0x0000fcde) popup_call2_audio_first_window

0x49fc,	// (0x0000fd54) popup_call2_audio_in_window_ParamLimits

0x49fc,	// (0x0000fd54) popup_call2_audio_in_window

0x4a30,	// (0x0000fd88) popup_call2_audio_out_window_ParamLimits

0x4a30,	// (0x0000fd88) popup_call2_audio_out_window

0x4a82,	// (0x0000fdda) popup_call2_audio_second_window_ParamLimits

0x4a82,	// (0x0000fdda) popup_call2_audio_second_window

0x4ad4,	// (0x0000fe2c) popup_call2_audio_wait_window_ParamLimits

0x4ad4,	// (0x0000fe2c) popup_call2_audio_wait_window

0xa367,	// (0x000156bf) bg_popup_call2_act_pane_cp03

0xa5a4,	// (0x000158fc) list_conf_pane_cp

0xba42,	// (0x00016d9a) popup_call2_audio_conf_window_t1

0xb297,	// (0x000165ef) list_single_graphic_popup_conf2_pane_ParamLimits

0xb297,	// (0x000165ef) list_single_graphic_popup_conf2_pane

0xb2aa,	// (0x00016602) list_highlight_pane_cp04

0xba50,	// (0x00016da8) list_single_graphic_popup_conf2_pane_g1

0xb2bb,	// (0x00016613) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf545,	// (0x0001a89d) list_single_graphic_popup_conf2_pane_g

0xba58,	// (0x00016db0) list_single_graphic_popup_conf2_pane_t1

0xba66,	// (0x00016dbe) bg_popup_call2_act_pane_cp01_ParamLimits

0xba66,	// (0x00016dbe) bg_popup_call2_act_pane_cp01

0xbaf0,	// (0x00016e48) call_type_pane_cp05_ParamLimits

0xbaf0,	// (0x00016e48) call_type_pane_cp05

0xbb44,	// (0x00016e9c) popup_call2_audio_second_window_g1_ParamLimits

0xbb44,	// (0x00016e9c) popup_call2_audio_second_window_g1

0xbb98,	// (0x00016ef0) popup_call2_audio_second_window_g2_ParamLimits

0xbb98,	// (0x00016ef0) popup_call2_audio_second_window_g2

0x0002,

0xf54a,	// (0x0001a8a2) popup_call2_audio_second_window_g_ParamLimits

0xf54a,	// (0x0001a8a2) popup_call2_audio_second_window_g

0xbbfd,	// (0x00016f55) popup_call2_audio_second_window_t1_ParamLimits

0xbbfd,	// (0x00016f55) popup_call2_audio_second_window_t1

0xbcb8,	// (0x00017010) popup_call2_audio_second_window_t2_ParamLimits

0xbcb8,	// (0x00017010) popup_call2_audio_second_window_t2

0xbd0b,	// (0x00017063) popup_call2_audio_second_window_t3_ParamLimits

0xbd0b,	// (0x00017063) popup_call2_audio_second_window_t3

0x0003,

0xf551,	// (0x0001a8a9) popup_call2_audio_second_window_t_ParamLimits

0xf551,	// (0x0001a8a9) popup_call2_audio_second_window_t

0xa367,	// (0x000156bf) bg_popup_call2_in_pane_cp02

0xa371,	// (0x000156c9) call_type_pane_cp04

0xa379,	// (0x000156d1) popup_call2_audio_wait_window_g1

0xa381,	// (0x000156d9) popup_call2_audio_wait_window_g2

0x0001,

0xf12a,	// (0x0001a482) popup_call2_audio_wait_window_g

0xa389,	// (0x000156e1) popup_call2_audio_wait_window_t3

0xbdfe,	// (0x00017156) bg_popup_call2_act_pane_ParamLimits

0xbdfe,	// (0x00017156) bg_popup_call2_act_pane

0xbebe,	// (0x00017216) call_type_pane_cp03_ParamLimits

0xbebe,	// (0x00017216) call_type_pane_cp03

0xbf22,	// (0x0001727a) popup_call2_audio_first_window_g1_ParamLimits

0xbf22,	// (0x0001727a) popup_call2_audio_first_window_g1

0xbf92,	// (0x000172ea) popup_call2_audio_first_window_g2_ParamLimits

0xbf92,	// (0x000172ea) popup_call2_audio_first_window_g2

0xb5f1,	// (0x00016949) popup_call2_audio_first_window_g3_ParamLimits

0xb5f1,	// (0x00016949) popup_call2_audio_first_window_g3

0x0004,

0xf55a,	// (0x0001a8b2) popup_call2_audio_first_window_g_ParamLimits

0xf55a,	// (0x0001a8b2) popup_call2_audio_first_window_g

0xc070,	// (0x000173c8) popup_call2_audio_first_window_t1_ParamLimits

0xc070,	// (0x000173c8) popup_call2_audio_first_window_t1

0xc173,	// (0x000174cb) popup_call2_audio_first_window_t4_ParamLimits

0xc173,	// (0x000174cb) popup_call2_audio_first_window_t4

0xc256,	// (0x000175ae) popup_call2_audio_first_window_t5_ParamLimits

0xc256,	// (0x000175ae) popup_call2_audio_first_window_t5

0x0003,

0xf565,	// (0x0001a8bd) popup_call2_audio_first_window_t_ParamLimits

0xf565,	// (0x0001a8bd) popup_call2_audio_first_window_t

0xa5ba,	// (0x00015912) bg_popup_call2_act_pane_g1

0xc903,	// (0x00017c5b) popup_cale_lunar_info_window_t1

0xc911,	// (0x00017c69) popup_cale_lunar_info_window_t2

0xc91f,	// (0x00017c77) popup_cale_lunar_info_window_t3

0xa367,	// (0x000156bf) bg_popup_call2_bubble_pane

0xc357,	// (0x000176af) bg_popup_call2_in_pane_cp01_ParamLimits

0xc357,	// (0x000176af) bg_popup_call2_in_pane_cp01

0xa043,	// (0x0001539b) call_type_pane_cp02

0xc39f,	// (0x000176f7) popup_call2_audio_out_window_g1_ParamLimits

0xc39f,	// (0x000176f7) popup_call2_audio_out_window_g1

0xc3cb,	// (0x00017723) popup_call2_audio_out_window_g2_ParamLimits

0xc3cb,	// (0x00017723) popup_call2_audio_out_window_g2

0xc3f3,	// (0x0001774b) popup_call2_audio_out_window_g3_ParamLimits

0xc3f3,	// (0x0001774b) popup_call2_audio_out_window_g3

0x0003,

0xf56e,	// (0x0001a8c6) popup_call2_audio_out_window_g_ParamLimits

0xf56e,	// (0x0001a8c6) popup_call2_audio_out_window_g

0xc42e,	// (0x00017786) popup_call2_audio_out_window_t1_ParamLimits

0xc42e,	// (0x00017786) popup_call2_audio_out_window_t1

0xc48d,	// (0x000177e5) popup_call2_audio_out_window_t2_ParamLimits

0xc48d,	// (0x000177e5) popup_call2_audio_out_window_t2

0xc4e1,	// (0x00017839) popup_call2_audio_out_window_t3_ParamLimits

0xc4e1,	// (0x00017839) popup_call2_audio_out_window_t3

0xc4f7,	// (0x0001784f) popup_call2_audio_out_window_t4_ParamLimits

0xc4f7,	// (0x0001784f) popup_call2_audio_out_window_t4

0xc50d,	// (0x00017865) popup_call2_audio_out_window_t5_ParamLimits

0xc50d,	// (0x00017865) popup_call2_audio_out_window_t5

0x0005,

0xf577,	// (0x0001a8cf) popup_call2_audio_out_window_t_ParamLimits

0xf577,	// (0x0001a8cf) popup_call2_audio_out_window_t

0xc571,	// (0x000178c9) bg_popup_call2_in_pane_ParamLimits

0xc571,	// (0x000178c9) bg_popup_call2_in_pane

0xc5cd,	// (0x00017925) popup_call2_audio_in_window_g1_ParamLimits

0xc5cd,	// (0x00017925) popup_call2_audio_in_window_g1

0xc605,	// (0x0001795d) popup_call2_audio_in_window_g2_ParamLimits

0xc605,	// (0x0001795d) popup_call2_audio_in_window_g2

0xc63d,	// (0x00017995) popup_call2_audio_in_window_g3_ParamLimits

0xc63d,	// (0x00017995) popup_call2_audio_in_window_g3

0x0003,

0xf584,	// (0x0001a8dc) popup_call2_audio_in_window_g_ParamLimits

0xf584,	// (0x0001a8dc) popup_call2_audio_in_window_g

0xc695,	// (0x000179ed) popup_call2_audio_in_window_t1_ParamLimits

0xc695,	// (0x000179ed) popup_call2_audio_in_window_t1

0xc715,	// (0x00017a6d) popup_call2_audio_in_window_t2_ParamLimits

0xc715,	// (0x00017a6d) popup_call2_audio_in_window_t2

0xc795,	// (0x00017aed) popup_call2_audio_in_window_t3_ParamLimits

0xc795,	// (0x00017aed) popup_call2_audio_in_window_t3

0xc7af,	// (0x00017b07) popup_call2_audio_in_window_t4_ParamLimits

0xc7af,	// (0x00017b07) popup_call2_audio_in_window_t4

0xc7c1,	// (0x00017b19) popup_call2_audio_in_window_t5_ParamLimits

0xc7c1,	// (0x00017b19) popup_call2_audio_in_window_t5

0xc7d6,	// (0x00017b2e) popup_call2_audio_in_window_t6_ParamLimits

0xc7d6,	// (0x00017b2e) popup_call2_audio_in_window_t6

0x0005,

0xf58d,	// (0x0001a8e5) popup_call2_audio_in_window_t_ParamLimits

0xf58d,	// (0x0001a8e5) popup_call2_audio_in_window_t

0xa5ba,	// (0x00015912) bg_popup_call2_in_pane_g1

0xc92d,	// (0x00017c85) popup_cale_lunar_info_window_t4

0x0003,

0xf608,	// (0x0001a960) popup_cale_lunar_info_window_t

0xa5c2,	// (0x0001591a) bg_popup_call2_rect_pane_ParamLimits

0xa5c2,	// (0x0001591a) bg_popup_call2_rect_pane

0xa367,	// (0x000156bf) call2_cli_visual_graphic_pane

0xa367,	// (0x000156bf) call2_cli_visual_text_pane

0xcaff,	// (0x00017e57) smil_status_volume_pane_g3

0x0002,

0xa756,	// (0x00015aae) call2_cli_visual_graphic_pane_g1

0xa756,	// (0x00015aae) call2_cli_visual_graphic_pane_g2

0xa756,	// (0x00015aae) call2_cli_visual_graphic_pane_g3

0x0002,

0xf59a,	// (0x0001a8f2) call2_cli_visual_graphic_pane_g

0xc7eb,	// (0x00017b43) bg_popup_call2_rect_pane_g1

0xa7fe,	// (0x00015b56) bg_popup_call2_rect_pane_g2

0xc7f3,	// (0x00017b4b) bg_popup_call2_rect_pane_g3

0xc7fb,	// (0x00017b53) bg_popup_call2_rect_pane_g4

0xc803,	// (0x00017b5b) bg_popup_call2_rect_pane_g5

0xc80b,	// (0x00017b63) bg_popup_call2_rect_pane_g6

0xc813,	// (0x00017b6b) bg_popup_call2_rect_pane_g7

0xc81b,	// (0x00017b73) bg_popup_call2_rect_pane_g8

0xc823,	// (0x00017b7b) bg_popup_call2_rect_pane_g9

0x0008,

0xf5a1,	// (0x0001a8f9) bg_popup_call2_rect_pane_g

0xc82b,	// (0x00017b83) bg_popup_call2_bubble_pane_g1

0xc833,	// (0x00017b8b) bg_popup_call2_bubble_pane_g2

0xc83b,	// (0x00017b93) bg_popup_call2_bubble_pane_g3

0xc843,	// (0x00017b9b) bg_popup_call2_bubble_pane_g4

0xc84b,	// (0x00017ba3) bg_popup_call2_bubble_pane_g5

0xc853,	// (0x00017bab) bg_popup_call2_bubble_pane_g6

0xc85b,	// (0x00017bb3) bg_popup_call2_bubble_pane_g7

0xc863,	// (0x00017bbb) bg_popup_call2_bubble_pane_g8

0xc86b,	// (0x00017bc3) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5b4,	// (0x0001a90c) bg_popup_call2_bubble_pane_g

0x2a02,	// (0x0000dd5a) aid_cale_week_size_cell_pane

0x2fa2,	// (0x0000e2fa) aid_cams_cif_uncrop_pane_ParamLimits

0x2fa2,	// (0x0000e2fa) aid_cams_cif_uncrop_pane

0x3143,	// (0x0000e49b) aid_cams_size_cell_ParamLimits

0x3143,	// (0x0000e49b) aid_cams_size_cell

0x3157,	// (0x0000e4af) grid_cams_pane_ParamLimits

0x316c,	// (0x0000e4c4) linegrid_cams_pane_ParamLimits

0x326d,	// (0x0000e5c5) call_video_pane_t1

0x327f,	// (0x0000e5d7) call_video_pane_t2

0x0001,

0xf2a1,	// (0x0001a5f9) call_video_pane_t

0x3586,	// (0x0000e8de) aid_cale_month_size_cell_pane_ParamLimits

0x3586,	// (0x0000e8de) aid_cale_month_size_cell_pane

0xf651,	// (0x0001a9a9) smil_status_volume_pane_g

0xcb0c,	// (0x00017e64) volume_smil_pane_ParamLimits

0x9f07,	// (0x0001525f) aid_popup2_width_pane

0x297c,	// (0x0000dcd4) cell_qdial_pane_g4_ParamLimits

0x297c,	// (0x0000dcd4) cell_qdial_pane_g4

0x4069,	// (0x0000f3c1) aid_blid_cardinal_pane_ParamLimits

0x4075,	// (0x0000f3cd) aid_blid_destination_pane_ParamLimits

0x4075,	// (0x0000f3cd) aid_blid_destination_pane

0xa5c2,	// (0x0001591a) bg_popup_call_poc_act_pane_ParamLimits

0xa5c2,	// (0x0001591a) bg_popup_call_poc_act_pane

0xa5c2,	// (0x0001591a) bg_popup_call_poc_inact_pane_ParamLimits

0xa5c2,	// (0x0001591a) bg_popup_call_poc_inact_pane

0xc873,	// (0x00017bcb) bg_popup_call_poc_act_pane_g1

0xc87b,	// (0x00017bd3) bg_popup_call_poc_act_pane_g2

0xc883,	// (0x00017bdb) bg_popup_call_poc_act_pane_g3

0xc843,	// (0x00017b9b) bg_popup_call_poc_act_pane_g4

0xc84b,	// (0x00017ba3) bg_popup_call_poc_act_pane_g5

0xc88b,	// (0x00017be3) bg_popup_call_poc_act_pane_g6

0xc85b,	// (0x00017bb3) bg_popup_call_poc_act_pane_g7

0xc893,	// (0x00017beb) bg_popup_call_poc_act_pane_g8

0xa367,	// (0x000156bf) main_usb_pane

0xca2c,	// (0x00017d84) popup_cale_lunar_info_window

0x3446,	// (0x0000e79e) im_reading_pane_t1_ParamLimits

0xab1a,	// (0x00015e72) list_im_pane_ParamLimits

0xab2b,	// (0x00015e83) scroll_pane_cp07_ParamLimits

0xa367,	// (0x000156bf) grid_highlight_pane_cp012

0xa5c2,	// (0x0001591a) mup_scale_pane_ParamLimits

0xb788,	// (0x00016ae0) main_usb_pane_g1_ParamLimits

0xb788,	// (0x00016ae0) main_usb_pane_g1

0x4b2e,	// (0x0000fe86) main_usb_pane_g2_ParamLimits

0x4b2e,	// (0x0000fe86) main_usb_pane_g2

0x0001,

0xf5f1,	// (0x0001a949) main_usb_pane_g_ParamLimits

0xf5f1,	// (0x0001a949) main_usb_pane_g

0x4b42,	// (0x0000fe9a) main_usb_pane_t1_ParamLimits

0x4b42,	// (0x0000fe9a) main_usb_pane_t1

0x4b54,	// (0x0000feac) main_usb_pane_t2_ParamLimits

0x4b54,	// (0x0000feac) main_usb_pane_t2

0x4b66,	// (0x0000febe) main_usb_pane_t3_ParamLimits

0x4b66,	// (0x0000febe) main_usb_pane_t3

0x4b78,	// (0x0000fed0) main_usb_pane_t4_ParamLimits

0x4b78,	// (0x0000fed0) main_usb_pane_t4

0x4b8a,	// (0x0000fee2) main_usb_pane_t5_ParamLimits

0x4b8a,	// (0x0000fee2) main_usb_pane_t5

0x4b9c,	// (0x0000fef4) main_usb_pane_t6_ParamLimits

0x4b9c,	// (0x0000fef4) main_usb_pane_t6

0x0005,

0xf5f6,	// (0x0001a94e) main_usb_pane_t_ParamLimits

0xb3e4,	// (0x0001673c) aid_text_placing

0x4015,	// (0x0000f36d) main_location2_pane_t1_ParamLimits

0x402b,	// (0x0000f383) main_location2_pane_t2_ParamLimits

0x4041,	// (0x0000f399) main_location2_pane_t3_ParamLimits

0x4057,	// (0x0000f3af) main_location2_pane_t4_ParamLimits

0x4057,	// (0x0000f3af) main_location2_pane_t4

0xf402,	// (0x0001a75a) main_location2_pane_t_ParamLimits

0xa5fe,	// (0x00015956) find_pinb_pane_g2_ParamLimits

0xa5fe,	// (0x00015956) find_pinb_pane_g2

0x0001,

0xf150,	// (0x0001a4a8) find_pinb_pane_g_ParamLimits

0xf150,	// (0x0001a4a8) find_pinb_pane_g

0xa60a,	// (0x00015962) find_pinb_pane_t1_ParamLimits

0xa61c,	// (0x00015974) find_pinb_pane_t2_ParamLimits

0xf155,	// (0x0001a4ad) find_pinb_pane_t_ParamLimits

0xa367,	// (0x000156bf) main_call3_pane

0x38c2,	// (0x0000ec1a) cale_month_day_heading_pane_t1_ParamLimits

0x3920,	// (0x0000ec78) cale_month_day_heading_pane_t2_ParamLimits

0x3985,	// (0x0000ecdd) cale_month_day_heading_pane_t3_ParamLimits

0x39ea,	// (0x0000ed42) cale_month_day_heading_pane_t4_ParamLimits

0x3a4f,	// (0x0000eda7) cale_month_day_heading_pane_t5_ParamLimits

0x3ab4,	// (0x0000ee0c) cale_month_day_heading_pane_t6_ParamLimits

0x3b19,	// (0x0000ee71) cale_month_day_heading_pane_t7_ParamLimits

0xf2d9,	// (0x0001a631) cale_month_day_heading_pane_t_ParamLimits

0xadb1,	// (0x00016109) smil_status_volume_pane

0x46b7,	// (0x0000fa0f) postcard_address_pane_ParamLimits

0x46b7,	// (0x0000fa0f) postcard_address_pane

0x46c9,	// (0x0000fa21) postcard_message_pane_ParamLimits

0x46c9,	// (0x0000fa21) postcard_message_pane

0x4b0c,	// (0x0000fe64) call2_cli_visual_pane_t1_ParamLimits

0x4b0c,	// (0x0000fe64) call2_cli_visual_pane_t1

0x526a,	// (0x000105c2) postcard_message_pane_t1_ParamLimits

0x526a,	// (0x000105c2) postcard_message_pane_t1

0x5253,	// (0x000105ab) postcard_address_pane_t1_ParamLimits

0x5253,	// (0x000105ab) postcard_address_pane_t1

0x5241,	// (0x00010599) popup_call3_audio_in_window_ParamLimits

0x5241,	// (0x00010599) popup_call3_audio_in_window

0x50d0,	// (0x00010428) bg_popup_call3_in_pane_ParamLimits

0x50d0,	// (0x00010428) bg_popup_call3_in_pane

0x5142,	// (0x0001049a) popup_call3_audio_in_window_g1_ParamLimits

0x5142,	// (0x0001049a) popup_call3_audio_in_window_g1

0x5162,	// (0x000104ba) popup_call3_audio_in_window_g2_ParamLimits

0x5162,	// (0x000104ba) popup_call3_audio_in_window_g2

0x5182,	// (0x000104da) popup_call3_audio_in_window_g3_ParamLimits

0x5182,	// (0x000104da) popup_call3_audio_in_window_g3

0x0003,

0xf658,	// (0x0001a9b0) popup_call3_audio_in_window_g_ParamLimits

0xf658,	// (0x0001a9b0) popup_call3_audio_in_window_g

0x51b3,	// (0x0001050b) popup_call3_audio_in_window_t1_ParamLimits

0x51b3,	// (0x0001050b) popup_call3_audio_in_window_t1

0x51f1,	// (0x00010549) popup_call3_audio_in_window_t2_ParamLimits

0x51f1,	// (0x00010549) popup_call3_audio_in_window_t2

0x522f,	// (0x00010587) popup_call3_audio_in_window_t3_ParamLimits

0x522f,	// (0x00010587) popup_call3_audio_in_window_t3

0x0002,

0xf661,	// (0x0001a9b9) popup_call3_audio_in_window_t_ParamLimits

0xf661,	// (0x0001a9b9) popup_call3_audio_in_window_t

0xb520,	// (0x00016878) bg_popup_call3_rect_pane

0xc7eb,	// (0x00017b43) bg_popup_call3_rect_pane_g1

0xa7fe,	// (0x00015b56) bg_popup_call3_rect_pane_g2

0xc7f3,	// (0x00017b4b) bg_popup_call3_rect_pane_g3

0xc7fb,	// (0x00017b53) bg_popup_call3_rect_pane_g4

0xc803,	// (0x00017b5b) bg_popup_call3_rect_pane_g5

0xc80b,	// (0x00017b63) bg_popup_call3_rect_pane_g6

0xc813,	// (0x00017b6b) bg_popup_call3_rect_pane_g7

0x4373,	// (0x0000f6cb) mup_visualizer_osc_pane

0xb5ff,	// (0x00016957) mup_visualizer_spec_pane

0x5100,	// (0x00010458) call3_video_qcif_pane_ParamLimits

0x5100,	// (0x00010458) call3_video_qcif_pane

0x5111,	// (0x00010469) call3_video_qcif_uncrop_pane_ParamLimits

0x5111,	// (0x00010469) call3_video_qcif_uncrop_pane

0x511d,	// (0x00010475) call3_video_subqcif_pane_ParamLimits

0x511d,	// (0x00010475) call3_video_subqcif_pane

0x5131,	// (0x00010489) call3_video_subqcif_uncrop_pane_ParamLimits

0x5131,	// (0x00010489) call3_video_subqcif_uncrop_pane

0x51a2,	// (0x000104fa) popup_call3_audio_in_window_g4_ParamLimits

0x51a2,	// (0x000104fa) popup_call3_audio_in_window_g4

0x50bf,	// (0x00010417) mup_spec_half_pane

0x50c8,	// (0x00010420) mup_spec_half_pane_cp

0xcabf,	// (0x00017e17) mup_osc_middle_pane

0xcac8,	// (0x00017e20) mup_visualizer_osc_pane_g1

0x50a0,	// (0x000103f8) mup_spec_bar_pane_ParamLimits

0x50a0,	// (0x000103f8) mup_spec_bar_pane

0xcaac,	// (0x00017e04) mup_spec_bar_pane_g1

0xcab6,	// (0x00017e0e) mup_spec_bar_pane_g2

0x0001,

0xf64c,	// (0x0001a9a4) mup_spec_bar_pane_g

0x2a02,	// (0x0000dd5a) aid_cale_week_size_cell_pane_ParamLimits

0x2a15,	// (0x0000dd6d) bg_cale_heading_pane_ParamLimits

0xa88a,	// (0x00015be2) bg_cale_pane_cp01_ParamLimits

0x2a29,	// (0x0000dd81) cale_week_corner_pane_ParamLimits

0x2a3f,	// (0x0000dd97) cale_week_day_heading_pane_ParamLimits

0x2a53,	// (0x0000ddab) cale_week_scroll_pane_g1_ParamLimits

0x2a64,	// (0x0000ddbc) cale_week_scroll_pane_g2_ParamLimits

0x2a75,	// (0x0000ddcd) cale_week_scroll_pane_g3_ParamLimits

0x2a86,	// (0x0000ddde) cale_week_scroll_pane_g4_ParamLimits

0x2a97,	// (0x0000ddef) cale_week_scroll_pane_g5_ParamLimits

0x2aa8,	// (0x0000de00) cale_week_scroll_pane_g6_ParamLimits

0x2ab9,	// (0x0000de11) cale_week_scroll_pane_g7_ParamLimits

0x2aca,	// (0x0000de22) cale_week_scroll_pane_g8_ParamLimits

0x2add,	// (0x0000de35) cale_week_scroll_pane_g9_ParamLimits

0x2aee,	// (0x0000de46) cale_week_scroll_pane_g10_ParamLimits

0x2aff,	// (0x0000de57) cale_week_scroll_pane_g11_ParamLimits

0x2b10,	// (0x0000de68) cale_week_scroll_pane_g12_ParamLimits

0x2b21,	// (0x0000de79) cale_week_scroll_pane_g13_ParamLimits

0x2b32,	// (0x0000de8a) cale_week_scroll_pane_g14_ParamLimits

0x2b43,	// (0x0000de9b) cale_week_scroll_pane_g15_ParamLimits

0xf1e1,	// (0x0001a539) cale_week_scroll_pane_g_ParamLimits

0x2b54,	// (0x0000deac) cale_week_time_pane_ParamLimits

0x2b67,	// (0x0000debf) grid_cale_week_pane_ParamLimits

0xa8a3,	// (0x00015bfb) listscroll_cale_week_pane_t1

0x2b7a,	// (0x0000ded2) scroll_pane_cp08_ParamLimits

0x35c7,	// (0x0000e91f) cale_month_corner_pane_ParamLimits

0xad51,	// (0x000160a9) cale_month_pane_t1

0x3881,	// (0x0000ebd9) cale_month_week_pane_ParamLimits

0x3e5c,	// (0x0000f1b4) popup_call_status_window_g1_ParamLimits

0x3e70,	// (0x0000f1c8) popup_call_status_window_g2_ParamLimits

0x3e84,	// (0x0000f1dc) popup_call_status_window_g3_ParamLimits

0xf389,	// (0x0001a6e1) popup_call_status_window_g_ParamLimits

0xb1bb,	// (0x00016513) aid_call2_pane

0x4576,	// (0x0000f8ce) msg_header_pane_g1

0x46b7,	// (0x0000fa0f) postcard_address2_pane_ParamLimits

0x46b7,	// (0x0000fa0f) postcard_address2_pane

0x46c9,	// (0x0000fa21) postcard_message2_pane_ParamLimits

0x46c9,	// (0x0000fa21) postcard_message2_pane

0x505c,	// (0x000103b4) message2_row_pane_ParamLimits

0x505c,	// (0x000103b4) message2_row_pane

0x5076,	// (0x000103ce) address2_row_pane_ParamLimits

0x5076,	// (0x000103ce) address2_row_pane

0xca7a,	// (0x00017dd2) postcard_message2_row_pane_g1

0xca82,	// (0x00017dda) postcard_message2_row_pane_t1

0xca7a,	// (0x00017dd2) address2_row_pane_g1

0xca82,	// (0x00017dda) address2_row_pane_t1

0x2eaa,	// (0x0000e202) aid_size_cell_vorec

0xa367,	// (0x000156bf) main_rss_pane

0x5089,	// (0x000103e1) rss_list_single_pane_ParamLimits

0x5089,	// (0x000103e1) rss_list_single_pane

0xca90,	// (0x00017de8) rss_list_single_pane_t1

0xca9e,	// (0x00017df6) rss_list_single_pane_t2

0x0001,

0xf647,	// (0x0001a99f) rss_list_single_pane_t

0xa367,	// (0x000156bf) main_camera2_pane

0xa367,	// (0x000156bf) main_video2_pane

0x52c3,	// (0x0001061b) cams_zoom_pane_cp2_ParamLimits

0x52c3,	// (0x0001061b) cams_zoom_pane_cp2

0x52da,	// (0x00010632) image2_vga_pane_ParamLimits

0x52da,	// (0x00010632) image2_vga_pane

0x5310,	// (0x00010668) main_camera2_pane_g1_ParamLimits

0x5310,	// (0x00010668) main_camera2_pane_g1

0x5330,	// (0x00010688) main_camera2_pane_g2_ParamLimits

0x5330,	// (0x00010688) main_camera2_pane_g2

0x5347,	// (0x0001069f) main_camera2_pane_g3_ParamLimits

0x5347,	// (0x0001069f) main_camera2_pane_g3

0x535e,	// (0x000106b6) main_camera2_pane_g4_ParamLimits

0x535e,	// (0x000106b6) main_camera2_pane_g4

0x5375,	// (0x000106cd) main_camera2_pane_g5_ParamLimits

0x5375,	// (0x000106cd) main_camera2_pane_g5

0x538c,	// (0x000106e4) main_camera2_pane_g6_ParamLimits

0x538c,	// (0x000106e4) main_camera2_pane_g6

0x53a3,	// (0x000106fb) main_camera2_pane_g7_ParamLimits

0x53a3,	// (0x000106fb) main_camera2_pane_g7

0x53ba,	// (0x00010712) main_camera2_pane_g8_ParamLimits

0x53ba,	// (0x00010712) main_camera2_pane_g8

0x0008,

0xf668,	// (0x0001a9c0) main_camera2_pane_g_ParamLimits

0xf668,	// (0x0001a9c0) main_camera2_pane_g

0x53e8,	// (0x00010740) main_camera2_pane_t1_ParamLimits

0x53e8,	// (0x00010740) main_camera2_pane_t1

0x5417,	// (0x0001076f) main_camera2_pane_t2_ParamLimits

0x5417,	// (0x0001076f) main_camera2_pane_t2

0x5434,	// (0x0001078c) main_camera2_pane_t3_ParamLimits

0x5434,	// (0x0001078c) main_camera2_pane_t3

0x5480,	// (0x000107d8) main_camera2_pane_t4_ParamLimits

0x5480,	// (0x000107d8) main_camera2_pane_t4

0x0006,

0xf67b,	// (0x0001a9d3) main_camera2_pane_t_ParamLimits

0xf67b,	// (0x0001a9d3) main_camera2_pane_t

0x54f5,	// (0x0001084d) cams_zoom_pane_cp4_ParamLimits

0x54f5,	// (0x0001084d) cams_zoom_pane_cp4

0x550b,	// (0x00010863) image2_cif_pane_ParamLimits

0x550b,	// (0x00010863) image2_cif_pane

0x552e,	// (0x00010886) image2_subqcif_pane_ParamLimits

0x552e,	// (0x00010886) image2_subqcif_pane

0x5544,	// (0x0001089c) main_video2_pane_g1_ParamLimits

0x5544,	// (0x0001089c) main_video2_pane_g1

0x555e,	// (0x000108b6) main_video2_pane_g2_ParamLimits

0x555e,	// (0x000108b6) main_video2_pane_g2

0x5574,	// (0x000108cc) main_video2_pane_g3_ParamLimits

0x5574,	// (0x000108cc) main_video2_pane_g3

0x558a,	// (0x000108e2) main_video2_pane_g4_ParamLimits

0x558a,	// (0x000108e2) main_video2_pane_g4

0x55a0,	// (0x000108f8) main_video2_pane_g5_ParamLimits

0x55a0,	// (0x000108f8) main_video2_pane_g5

0x55b6,	// (0x0001090e) main_video2_pane_g6_ParamLimits

0x55b6,	// (0x0001090e) main_video2_pane_g6

0x0005,

0xf68a,	// (0x0001a9e2) main_video2_pane_g_ParamLimits

0xf68a,	// (0x0001a9e2) main_video2_pane_g

0x55d0,	// (0x00010928) main_video2_pane_t1_ParamLimits

0x55d0,	// (0x00010928) main_video2_pane_t1

0x55f4,	// (0x0001094c) main_video2_pane_t2_ParamLimits

0x55f4,	// (0x0001094c) main_video2_pane_t2

0x563e,	// (0x00010996) main_video2_pane_t3_ParamLimits

0x563e,	// (0x00010996) main_video2_pane_t3

0x0002,

0xf697,	// (0x0001a9ef) main_video2_pane_t_ParamLimits

0xf697,	// (0x0001a9ef) main_video2_pane_t

0x4c4b,	// (0x0000ffa3) call_muted_g2

0x0001,

0xf639,	// (0x0001a991) call_muted_g

0xa367,	// (0x000156bf) main_mup2_pane

0x5680,	// (0x000109d8) main_mup2_pane_g1_ParamLimits

0x5680,	// (0x000109d8) main_mup2_pane_g1

0x568c,	// (0x000109e4) main_mup2_pane_g2_ParamLimits

0x568c,	// (0x000109e4) main_mup2_pane_g2

0xcc2b,	// (0x00017f83) main_mup_pane_g13_cp1

0xcc33,	// (0x00017f8b) mup_volume_pane_cp1

0x56a8,	// (0x00010a00) main_mup2_pane_g4_ParamLimits

0x56a8,	// (0x00010a00) main_mup2_pane_g4

0x56b8,	// (0x00010a10) main_mup2_pane_g5_ParamLimits

0x56b8,	// (0x00010a10) main_mup2_pane_g5

0x56c8,	// (0x00010a20) main_mup2_pane_g6_ParamLimits

0x56c8,	// (0x00010a20) main_mup2_pane_g6

0x56d8,	// (0x00010a30) main_mup2_pane_g7_ParamLimits

0x56d8,	// (0x00010a30) main_mup2_pane_g7

0x0006,

0xf69e,	// (0x0001a9f6) main_mup2_pane_g_ParamLimits

0xf69e,	// (0x0001a9f6) main_mup2_pane_g

0x56f0,	// (0x00010a48) main_mup2_pane_t1_ParamLimits

0x56f0,	// (0x00010a48) main_mup2_pane_t1

0x5706,	// (0x00010a5e) main_mup2_pane_t2_ParamLimits

0x5706,	// (0x00010a5e) main_mup2_pane_t2

0x571c,	// (0x00010a74) main_mup2_pane_t3_ParamLimits

0x571c,	// (0x00010a74) main_mup2_pane_t3

0x5732,	// (0x00010a8a) main_mup2_pane_t4_ParamLimits

0x5732,	// (0x00010a8a) main_mup2_pane_t4

0x574a,	// (0x00010aa2) main_mup2_pane_t5_ParamLimits

0x574a,	// (0x00010aa2) main_mup2_pane_t5

0x5762,	// (0x00010aba) main_mup2_pane_t6_ParamLimits

0x5762,	// (0x00010aba) main_mup2_pane_t6

0x0005,

0xf6ad,	// (0x0001aa05) main_mup2_pane_t_ParamLimits

0xf6ad,	// (0x0001aa05) main_mup2_pane_t

0x5792,	// (0x00010aea) mup2_visualizer_pane_ParamLimits

0x5792,	// (0x00010aea) mup2_visualizer_pane

0x57bd,	// (0x00010b15) mup_progress_pane_cp_ParamLimits

0x57bd,	// (0x00010b15) mup_progress_pane_cp

0xcc0d,	// (0x00017f65) mup_volume_pane_cp_ParamLimits

0xcc0d,	// (0x00017f65) mup_volume_pane_cp

0x57d1,	// (0x00010b29) mup2_visualizer_pane_g1_ParamLimits

0x57d1,	// (0x00010b29) mup2_visualizer_pane_g1

0xcb4c,	// (0x00017ea4) mup2_visualizer_pane_g2_ParamLimits

0xcb4c,	// (0x00017ea4) mup2_visualizer_pane_g2

0x57e6,	// (0x00010b3e) mup2_visualizer_pane_g3_ParamLimits

0x57e6,	// (0x00010b3e) mup2_visualizer_pane_g3

0x0002,

0xf6ba,	// (0x0001aa12) mup2_visualizer_pane_g_ParamLimits

0xf6ba,	// (0x0001aa12) mup2_visualizer_pane_g

0xb8d1,	// (0x00016c29) aid_size_cell_fmradio

0x4da7,	// (0x000100ff) aid_height_parent_landcape

0xabb8,	// (0x00015f10) wml_content_pane_cp

0xabc0,	// (0x00015f18) wml_tabs_pane

0xabc9,	// (0x00015f21) popup_wml_miniature_window

0xabd1,	// (0x00015f29) scroll_pane_cp021

0xabe5,	// (0x00015f3d) wml_content_pane_comp8

0xa367,	// (0x000156bf) bg_popup_sub_pane_cp05

0xcb6a,	// (0x00017ec2) popup_wml_miniature_window_g1

0xcb72,	// (0x00017eca) wml_miniature_view_pane

0x57f2,	// (0x00010b4a) aid_size_wml_view

0x57fa,	// (0x00010b52) wml_miniature_view_pane_g1

0x5803,	// (0x00010b5b) wml_miniature_view_pane_g2

0x580c,	// (0x00010b64) wml_miniature_view_pane_g3

0x5814,	// (0x00010b6c) wml_miniature_view_pane_g4

0x581c,	// (0x00010b74) wml_miniature_view_pane_g5

0x5824,	// (0x00010b7c) wml_miniature_view_pane_g6

0x582c,	// (0x00010b84) wml_miniature_view_pane_g7

0x5834,	// (0x00010b8c) wml_miniature_view_pane_g8

0x0007,

0xf6c1,	// (0x0001aa19) wml_miniature_view_pane_g

0xcb7a,	// (0x00017ed2) background_graphic_ParamLimits

0xcb7a,	// (0x00017ed2) background_graphic

0xcb86,	// (0x00017ede) wml_tabs_2_pane

0xcb8f,	// (0x00017ee7) wml_tabs_3_pane_ParamLimits

0xcb8f,	// (0x00017ee7) wml_tabs_3_pane

0xcba1,	// (0x00017ef9) wml_tabs_4_pane_ParamLimits

0xcba1,	// (0x00017ef9) wml_tabs_4_pane

0xcbb7,	// (0x00017f0f) wml_tabs_5_pane_ParamLimits

0xcbb7,	// (0x00017f0f) wml_tabs_5_pane

0xcbd1,	// (0x00017f29) wml_tabs_pane_g2_ParamLimits

0xcbd1,	// (0x00017f29) wml_tabs_pane_g2

0xcbe5,	// (0x00017f3d) wml_tabs_pane_g3_ParamLimits

0xcbe5,	// (0x00017f3d) wml_tabs_pane_g3

0x583c,	// (0x00010b94) wml_tabs_2_active_pane_ParamLimits

0x583c,	// (0x00010b94) wml_tabs_2_active_pane

0x584c,	// (0x00010ba4) wml_tabs_2_passive_pane_ParamLimits

0x584c,	// (0x00010ba4) wml_tabs_2_passive_pane

0x585c,	// (0x00010bb4) wml_tabs_3_active_pane_cp_ParamLimits

0x585c,	// (0x00010bb4) wml_tabs_3_active_pane_cp

0x586d,	// (0x00010bc5) wml_tabs_3_passive_pane_ParamLimits

0x586d,	// (0x00010bc5) wml_tabs_3_passive_pane

0x587e,	// (0x00010bd6) wml_tabs_3_passive_pane_cp_ParamLimits

0x587e,	// (0x00010bd6) wml_tabs_3_passive_pane_cp

0x588f,	// (0x00010be7) tabs_4_active_pane

0x5897,	// (0x00010bef) tabs_4_passive_pane

0x589f,	// (0x00010bf7) tabs_4_passive_pane_cp

0x58a7,	// (0x00010bff) tabs_4_passive_pane_cp2

0x4b26,	// (0x0000fe7e) aid_height_text

0x4349,	// (0x0000f6a1) mup_volume_cont_pane_ParamLimits

0x4349,	// (0x0000f6a1) mup_volume_cont_pane

0x268c,	// (0x0000d9e4) aid_size_cell_pinb

0x2696,	// (0x0000d9ee) aid_size_list_pinb

0x57a9,	// (0x00010b01) mup2_volume_cont_pane_ParamLimits

0x57a9,	// (0x00010b01) mup2_volume_cont_pane

0xcbf9,	// (0x00017f51) mup2_volume_cont_pane_g1_ParamLimits

0xcbf9,	// (0x00017f51) mup2_volume_cont_pane_g1

0x23b5,	// (0x0000d70d) aid_size_cell_touch_ParamLimits

0x23b5,	// (0x0000d70d) aid_size_cell_touch

0x2594,	// (0x0000d8ec) touch_pane_ParamLimits

0x2594,	// (0x0000d8ec) touch_pane

0x9ef5,	// (0x0001524d) main_rss2_pane

0xcc3b,	// (0x00017f93) listscroll_rss2_pane

0xcc44,	// (0x00017f9c) rss2_navigation_pane

0xcc4c,	// (0x00017fa4) list_rss2_pane

0xb361,	// (0x000166b9) scroll_pane_cp22

0xcc54,	// (0x00017fac) rss2_navigation_pane_g1

0xcc5d,	// (0x00017fb5) rss2_navigation_pane_g2

0xcc65,	// (0x00017fbd) rss2_navigation_pane_g3

0x0002,

0xf6d2,	// (0x0001aa2a) rss2_navigation_pane_g

0xcc6d,	// (0x00017fc5) rss2_navigation_pane_t1

0x58af,	// (0x00010c07) rss2_list_single_pane_ParamLimits

0x58af,	// (0x00010c07) rss2_list_single_pane

0xcc7b,	// (0x00017fd3) rss2_list_single_pane_t2

0xcc89,	// (0x00017fe1) rss2_list_single_pane_t3_ParamLimits

0xcc89,	// (0x00017fe1) rss2_list_single_pane_t3

0xcca6,	// (0x00017ffe) rss2_list_single_pane_t4

0x3ce3,	// (0x0000f03b) smil_status_pane_g1

0x9f48,	// (0x000152a0) main_image2_pane_ParamLimits

0x9f48,	// (0x000152a0) main_image2_pane

0x53d1,	// (0x00010729) main_camera2_pane_g9_ParamLimits

0x53d1,	// (0x00010729) main_camera2_pane_g9

0x54c3,	// (0x0001081b) main_camera2_pane_t5_ParamLimits

0x54c3,	// (0x0001081b) main_camera2_pane_t5

0xcb21,	// (0x00017e79) main_camera2_pane_t6_ParamLimits

0xcb21,	// (0x00017e79) main_camera2_pane_t6

0x58c3,	// (0x00010c1b) main_image2_pane_g1_ParamLimits

0x58c3,	// (0x00010c1b) main_image2_pane_g1

0x48de,	// (0x0000fc36) smil2_video_pane_ParamLimits

0x48de,	// (0x0000fc36) smil2_video_pane

0x9f0f,	// (0x00015267) aid_zoom_text_primary_cp

0x9f40,	// (0x00015298) popup_preview_fixed_window

0xab12,	// (0x00015e6a) im_reading_pane_g1

0x52b7,	// (0x0001060f) cams2_bc_adjust_pane_cp_ParamLimits

0x52b7,	// (0x0001060f) cams2_bc_adjust_pane_cp

0x54e9,	// (0x00010841) cams2_bc_adjust_pane_ParamLimits

0x54e9,	// (0x00010841) cams2_bc_adjust_pane

0xccb4,	// (0x0001800c) cams2_bc_adjust_pane_g1

0xccbc,	// (0x00018014) cams2_slider_pane

0xccc5,	// (0x0001801d) cams2_slider_pane_g1

0xccce,	// (0x00018026) cams2_slider_pane_g2

0x0006,

0xf6d9,	// (0x0001aa31) cams2_slider_pane_g

0x2776,	// (0x0000dace) calc_display_pane_ParamLimits

0x2792,	// (0x0000daea) calc_paper_pane_ParamLimits

0x27b3,	// (0x0000db0b) grid_calc_pane_ParamLimits

0xb21d,	// (0x00016575) popup_clock_digital_window_t1_ParamLimits

0xb86e,	// (0x00016bc6) main_image_pane_t1

0x2758,	// (0x0000dab0) aid_size_cell_calc_ParamLimits

0x2758,	// (0x0000dab0) aid_size_cell_calc

0x4dd7,	// (0x0001012f) popup_blid_sat_info2_window_ParamLimits

0x4dd7,	// (0x0001012f) popup_blid_sat_info2_window

0xccf0,	// (0x00018048) aid_size_cell_blid

0xccf8,	// (0x00018050) bg_popup_window_pane_cp07

0xcd1b,	// (0x00018073) grid_popup_blid_pane

0xcd23,	// (0x0001807b) heading_pane_cp05_ParamLimits

0xcd23,	// (0x0001807b) heading_pane_cp05

0xcdeb,	// (0x00018143) cell_popup_blid_pane_ParamLimits

0xcdeb,	// (0x00018143) cell_popup_blid_pane

0xce0b,	// (0x00018163) cell_popup_blid_pane_g1

0xce13,	// (0x0001816b) cell_popup_blid_pane_t1

0x577c,	// (0x00010ad4) mup2_indicator_pane_ParamLimits

0x577c,	// (0x00010ad4) mup2_indicator_pane

0xb520,	// (0x00016878) mup2_visualizer_osc_pane

0xcb58,	// (0x00017eb0) mup2_visualizer_spec_pane_ParamLimits

0xcb58,	// (0x00017eb0) mup2_visualizer_spec_pane

0x58d7,	// (0x00010c2f) mup2_spec_half_pane

0x58e0,	// (0x00010c38) mup2_spec_half_pane_cp

0x58e8,	// (0x00010c40) mup2_spec_bar_pane_ParamLimits

0x58e8,	// (0x00010c40) mup2_spec_bar_pane

0xcaac,	// (0x00017e04) mup2_spec_bar_pane_g1

0xcab6,	// (0x00017e0e) mup2_spec_bar_pane_g2

0x0001,

0xf64c,	// (0x0001a9a4) mup2_spec_bar_pane_g

0x5907,	// (0x00010c5f) mup2_osc_middle_pane

0xcac8,	// (0x00017e20) mup2_visualizer_osc_pane_g1

0x9f76,	// (0x000152ce) popup_number_entry_window_t1_ParamLimits

0x9f89,	// (0x000152e1) popup_number_entry_window_t2_ParamLimits

0x9f9b,	// (0x000152f3) popup_number_entry_window_t3_ParamLimits

0x25dc,	// (0x0000d934) popup_number_entry_window_t5_ParamLimits

0x25dc,	// (0x0000d934) popup_number_entry_window_t5

0xf0fb,	// (0x0001a453) popup_number_entry_window_t_ParamLimits

0x9fad,	// (0x00015305) text_title_cp2_ParamLimits

0xb748,	// (0x00016aa0) aid_hotspot_pointer_text2_pane

0xb76e,	// (0x00016ac6) main_viewer_pane_g9_ParamLimits

0xb76e,	// (0x00016ac6) main_viewer_pane_g9

0xad51,	// (0x000160a9) cale_month_pane_t1_ParamLimits

0xade6,	// (0x0001613e) bg_cale_pane_ParamLimits

0xadfe,	// (0x00016156) list_cale_pane_ParamLimits

0xa8a3,	// (0x00015bfb) listscroll_cale_day_pane_t1

0xae0f,	// (0x00016167) scroll_pane_cp09_ParamLimits

0x437b,	// (0x0000f6d3) main_mup_eq_pane_t1_ParamLimits

0x437b,	// (0x0000f6d3) main_mup_eq_pane_t1

0x4393,	// (0x0000f6eb) main_mup_eq_pane_t2_ParamLimits

0x4393,	// (0x0000f6eb) main_mup_eq_pane_t2

0x43a9,	// (0x0000f701) main_mup_eq_pane_t3_ParamLimits

0x43a9,	// (0x0000f701) main_mup_eq_pane_t3

0x43bf,	// (0x0000f717) main_mup_eq_pane_t4_ParamLimits

0x43bf,	// (0x0000f717) main_mup_eq_pane_t4

0x43d5,	// (0x0000f72d) main_mup_eq_pane_t5_ParamLimits

0x43d5,	// (0x0000f72d) main_mup_eq_pane_t5

0x43eb,	// (0x0000f743) main_mup_eq_pane_t6_ParamLimits

0x43eb,	// (0x0000f743) main_mup_eq_pane_t6

0x43fd,	// (0x0000f755) main_mup_eq_pane_t7_ParamLimits

0x43fd,	// (0x0000f755) main_mup_eq_pane_t7

0x440f,	// (0x0000f767) main_mup_eq_pane_t8_ParamLimits

0x440f,	// (0x0000f767) main_mup_eq_pane_t8

0x4421,	// (0x0000f779) main_mup_eq_pane_t9_ParamLimits

0x4421,	// (0x0000f779) main_mup_eq_pane_t9

0x4437,	// (0x0000f78f) main_mup_eq_pane_t10_ParamLimits

0x4437,	// (0x0000f78f) main_mup_eq_pane_t10

0x0009,

0xf488,	// (0x0001a7e0) main_mup_eq_pane_t_ParamLimits

0xf488,	// (0x0001a7e0) main_mup_eq_pane_t

0x44ca,	// (0x0000f822) mup_equalizer_pane_cp5_ParamLimits

0x44dc,	// (0x0000f834) mup_equalizer_pane_cp6_ParamLimits

0x44ee,	// (0x0000f846) mup_equalizer_pane_cp7_ParamLimits

0x9ef5,	// (0x0001524d) main_gallery_pane

0xcad1,	// (0x00017e29) smil2_volume_pane

0xcad9,	// (0x00017e31) smil_status_volume_pane_g1_ParamLimits

0xcaec,	// (0x00017e44) smil_status_volume_pane_g2_ParamLimits

0xcaff,	// (0x00017e57) smil_status_volume_pane_g3_ParamLimits

0xf651,	// (0x0001a9a9) smil_status_volume_pane_g_ParamLimits

0xccf8,	// (0x00018050) bg_popup_window_pane_cp07_ParamLimits

0xcd06,	// (0x0001805e) blid_firmament_pane

0x5910,	// (0x00010c68) aid_size_cell_gallery_ParamLimits

0x5910,	// (0x00010c68) aid_size_cell_gallery

0x5926,	// (0x00010c7e) grid_gallery_pane_ParamLimits

0x5926,	// (0x00010c7e) grid_gallery_pane

0x593a,	// (0x00010c92) cell_gallery_pane_ParamLimits

0x593a,	// (0x00010c92) cell_gallery_pane

0xce21,	// (0x00018179) bg_cell_gallery_focus_pane_ParamLimits

0xce21,	// (0x00018179) bg_cell_gallery_focus_pane

0xce33,	// (0x0001818b) cell_gallery_pane_g1_ParamLimits

0xce33,	// (0x0001818b) cell_gallery_pane_g1

0x5981,	// (0x00010cd9) cell_gallery_pane_g2_ParamLimits

0x5981,	// (0x00010cd9) cell_gallery_pane_g2

0x598e,	// (0x00010ce6) cell_gallery_pane_g3_ParamLimits

0x598e,	// (0x00010ce6) cell_gallery_pane_g3

0xce3f,	// (0x00018197) cell_gallery_pane_g4_ParamLimits

0xce3f,	// (0x00018197) cell_gallery_pane_g4

0x0003,

0xf6ff,	// (0x0001aa57) cell_gallery_pane_g_ParamLimits

0xf6ff,	// (0x0001aa57) cell_gallery_pane_g

0xce4b,	// (0x000181a3) bg_cell_gallery_focus_pane_g1

0xce53,	// (0x000181ab) bg_cell_gallery_focus_pane_g2

0xce5b,	// (0x000181b3) bg_cell_gallery_focus_pane_g3

0xce63,	// (0x000181bb) bg_cell_gallery_focus_pane_g4

0xce6b,	// (0x000181c3) bg_cell_gallery_focus_pane_g5

0xce73,	// (0x000181cb) bg_cell_gallery_focus_pane_g6

0xce7b,	// (0x000181d3) bg_cell_gallery_focus_pane_g7

0xce83,	// (0x000181db) bg_cell_gallery_focus_pane_g8

0x0007,

0xf708,	// (0x0001aa60) bg_cell_gallery_focus_pane_g

0xce8b,	// (0x000181e3) aid_firma_cardinal

0xce9f,	// (0x000181f7) blid_firmament_pane_t1

0xceb6,	// (0x0001820e) blid_firmament_pane_t2

0xcecd,	// (0x00018225) blid_firmament_pane_t3

0xcee4,	// (0x0001823c) blid_firmament_pane_t4

0x0003,

0xf719,	// (0x0001aa71) blid_firmament_pane_t

0xcefb,	// (0x00018253) blid_sat_info_pane

0xcf0b,	// (0x00018263) blid_sat_info_pane_g1

0xcf0b,	// (0x00018263) blid_sat_info_pane_g2

0x0001,

0xf722,	// (0x0001aa7a) blid_sat_info_pane_g

0xcf15,	// (0x0001826d) blid_sat_info_pane_t1

0xcf23,	// (0x0001827b) smil2_volume_content_pane

0xcf2c,	// (0x00018284) smil2_volume_pane_g1

0xcf34,	// (0x0001828c) smil2_volume_content_pane_g1

0xcf3d,	// (0x00018295) smil2_volume_content_pane_g2

0xcf46,	// (0x0001829e) smil2_volume_content_pane_g3

0xcf4f,	// (0x000182a7) smil2_volume_content_pane_g4

0xcf58,	// (0x000182b0) smil2_volume_content_pane_g5

0xcf61,	// (0x000182b9) smil2_volume_content_pane_g6

0xcf6a,	// (0x000182c2) smil2_volume_content_pane_g7

0xcf73,	// (0x000182cb) smil2_volume_content_pane_g8

0xcf7c,	// (0x000182d4) smil2_volume_content_pane_g9

0xcf85,	// (0x000182dd) smil2_volume_content_pane_g10

0x0009,

0xf727,	// (0x0001aa7f) smil2_volume_content_pane_g

0x2bd0,	// (0x0000df28) cale_week_day_heading_pane_t1_ParamLimits

0x2bfa,	// (0x0000df52) cale_week_day_heading_pane_t2_ParamLimits

0x2c24,	// (0x0000df7c) cale_week_day_heading_pane_t3_ParamLimits

0x2c4e,	// (0x0000dfa6) cale_week_day_heading_pane_t4_ParamLimits

0x2c78,	// (0x0000dfd0) cale_week_day_heading_pane_t5_ParamLimits

0x2ca2,	// (0x0000dffa) cale_week_day_heading_pane_t6_ParamLimits

0x2ccc,	// (0x0000e024) cale_week_day_heading_pane_t7_ParamLimits

0xf200,	// (0x0001a558) cale_week_day_heading_pane_t_ParamLimits

0xa8b5,	// (0x00015c0d) bg_cale_side_pane_ParamLimits

0x2cf6,	// (0x0000e04e) cale_week_time_pane_t1_ParamLimits

0x2d22,	// (0x0000e07a) cale_week_time_pane_t2_ParamLimits

0x2d4e,	// (0x0000e0a6) cale_week_time_pane_t3_ParamLimits

0x2d7a,	// (0x0000e0d2) cale_week_time_pane_t4_ParamLimits

0x2da6,	// (0x0000e0fe) cale_week_time_pane_t5_ParamLimits

0x2dd2,	// (0x0000e12a) cale_week_time_pane_t6_ParamLimits

0x2dfe,	// (0x0000e156) cale_week_time_pane_t7_ParamLimits

0x2e2a,	// (0x0000e182) cale_week_time_pane_t8_ParamLimits

0xf20f,	// (0x0001a567) cale_week_time_pane_t_ParamLimits

0x2e56,	// (0x0000e1ae) cell_cale_week_pane_g2_ParamLimits

0xa8b5,	// (0x00015c0d) bg_cale_side_pane_cp01_ParamLimits

0x3b86,	// (0x0000eede) cale_month_week_pane_t1_ParamLimits

0x3b9d,	// (0x0000eef5) cale_month_week_pane_t2_ParamLimits

0x3bb4,	// (0x0000ef0c) cale_month_week_pane_t3_ParamLimits

0x3bcb,	// (0x0000ef23) cale_month_week_pane_t4_ParamLimits

0x3be2,	// (0x0000ef3a) cale_month_week_pane_t5_ParamLimits

0x3bf9,	// (0x0000ef51) cale_month_week_pane_t6_ParamLimits

0xf2e8,	// (0x0001a640) cale_month_week_pane_t_ParamLimits

0xad8d,	// (0x000160e5) cell_cale_month_pane_g1_ParamLimits

0x9ef5,	// (0x0001524d) main_cale_event_viewer_pane

0x9ef5,	// (0x0001524d) listscroll_cale_event_viewer_pane

0xcf8e,	// (0x000182e6) list_cale_ev_pane

0xcf96,	// (0x000182ee) scroll_pane_cp023

0x599b,	// (0x00010cf3) field_cale_ev_pane_ParamLimits

0x599b,	// (0x00010cf3) field_cale_ev_pane

0xcfa2,	// (0x000182fa) field_cale_ev_content_pane_ParamLimits

0xcfa2,	// (0x000182fa) field_cale_ev_content_pane

0xcfae,	// (0x00018306) field_cale_ev_pane_g1_ParamLimits

0xcfae,	// (0x00018306) field_cale_ev_pane_g1

0xcfba,	// (0x00018312) field_cale_ev_pane_g2_ParamLimits

0xcfba,	// (0x00018312) field_cale_ev_pane_g2

0xcfd2,	// (0x0001832a) field_cale_ev_pane_g3_ParamLimits

0xcfd2,	// (0x0001832a) field_cale_ev_pane_g3

0x0002,

0xf73c,	// (0x0001aa94) field_cale_ev_pane_g_ParamLimits

0xf73c,	// (0x0001aa94) field_cale_ev_pane_g

0xcfea,	// (0x00018342) field_cale_ev_pane_t1_ParamLimits

0xcfea,	// (0x00018342) field_cale_ev_pane_t1

0x59b5,	// (0x00010d0d) field_cale_ev_content_pane_t1_ParamLimits

0x59b5,	// (0x00010d0d) field_cale_ev_content_pane_t1

0xb6b1,	// (0x00016a09) bg_button_pane_cp01

0xa87b,	// (0x00015bd3) listscroll_cale_week_pane_ParamLimits

0x29fa,	// (0x0000dd52) popup_toolbar_window_cp01

0xa8a3,	// (0x00015bfb) listscroll_cale_week_pane_t1_ParamLimits

0xa6b3,	// (0x00015a0b) listscroll_cale_day_pane_ParamLimits

0x29fa,	// (0x0000dd52) popup_toolbar_window_cp02

0xa8a3,	// (0x00015bfb) listscroll_cale_day_pane_t1_ParamLimits

0xa87b,	// (0x00015bd3) main_cale_month_pane_ParamLimits

0x4fd3,	// (0x0001032b) popup_toolbar_window_cp03_ParamLimits

0x4fd3,	// (0x0001032b) popup_toolbar_window_cp03

0x47b8,	// (0x0000fb10) main_image_pane_g2_ParamLimits

0x47b8,	// (0x0000fb10) main_image_pane_g2

0x47c9,	// (0x0000fb21) main_image_pane_g3_ParamLimits

0x47c9,	// (0x0000fb21) main_image_pane_g3

0x0002,

0xf51a,	// (0x0001a872) main_image_pane_g_ParamLimits

0xf51a,	// (0x0001a872) main_image_pane_g

0xb86e,	// (0x00016bc6) main_image_pane_t1_ParamLimits

0x47da,	// (0x0000fb32) main_image_pane_t2_ParamLimits

0x47da,	// (0x0000fb32) main_image_pane_t2

0x47ec,	// (0x0000fb44) main_image_pane_t3_ParamLimits

0x47ec,	// (0x0000fb44) main_image_pane_t3

0x4814,	// (0x0000fb6c) main_image_pane_t4_ParamLimits

0x4814,	// (0x0000fb6c) main_image_pane_t4

0x0003,

0xf521,	// (0x0001a879) main_image_pane_t_ParamLimits

0xf521,	// (0x0001a879) main_image_pane_t

0x4834,	// (0x0000fb8c) popup_image_details_window_cp01

0x483c,	// (0x0000fb94) popup_toobar_trans_pane_cp01_ParamLimits

0x483c,	// (0x0000fb94) popup_toobar_trans_pane_cp01

0x4ea0,	// (0x000101f8) popup_image_details_window_ParamLimits

0x4ea0,	// (0x000101f8) popup_image_details_window

0xca34,	// (0x00017d8c) popup_image_focus_window

0x5285,	// (0x000105dd) camera2_autofocus_pane_ParamLimits

0x5285,	// (0x000105dd) camera2_autofocus_pane

0x9ef5,	// (0x0001524d) bg_popup_sub_pane_cp06

0xd001,	// (0x00018359) popup_image_focus_window_g1

0xd009,	// (0x00018361) popup_image_focus_window_g2

0xd011,	// (0x00018369) popup_image_focus_window_g3

0xd019,	// (0x00018371) popup_image_focus_window_g4

0x0003,

0xf743,	// (0x0001aa9b) popup_image_focus_window_g

0xd021,	// (0x00018379) popup_image_focus_window_t1

0xd02f,	// (0x00018387) popup_image_focus_window_t2

0xd03e,	// (0x00018396) popup_image_focus_window_t3

0x0002,

0xf74c,	// (0x0001aaa4) popup_image_focus_window_t

0xd04c,	// (0x000183a4) camera2_autofocus_pane_g1

0x9f48,	// (0x000152a0) bg_tb_trans_pane_cp01

0xd05a,	// (0x000183b2) popup_image_details_window_g1

0xd06d,	// (0x000183c5) popup_image_details_window_g2

0x0002,

0xf75e,	// (0x0001aab6) popup_image_details_window_g

0xd096,	// (0x000183ee) popup_image_details_window_t1

0xd0a8,	// (0x00018400) popup_image_details_window_t2

0xd0c1,	// (0x00018419) popup_image_details_window_t3

0xd103,	// (0x0001845b) popup_image_details_window_t4

0xd11e,	// (0x00018476) popup_image_details_window_t5

0x0004,

0xf765,	// (0x0001aabd) popup_image_details_window_t

0xa681,	// (0x000159d9) bg_calc_paper_pane_ParamLimits

0x9ef5,	// (0x0001524d) grid_highlight_pane_cp013

0xa699,	// (0x000159f1) list_calc_pane_ParamLimits

0xa6ab,	// (0x00015a03) scroll_pane_cp024

0xa6b3,	// (0x00015a0b) bg_calc_display_pane_ParamLimits

0xa6bf,	// (0x00015a17) calc_display_pane_t1_ParamLimits

0xa6d4,	// (0x00015a2c) calc_display_pane_t2_ParamLimits

0xa6e9,	// (0x00015a41) calc_display_pane_t3_ParamLimits

0xf182,	// (0x0001a4da) calc_display_pane_t_ParamLimits

0x292b,	// (0x0000dc83) cell_calc_pane_g2

0x0001,

0xf19f,	// (0x0001a4f7) cell_calc_pane_g

0x2934,	// (0x0000dc8c) cell_calc_pane_t1

0xa760,	// (0x00015ab8) grid_highlight_pane_cp02_ParamLimits

0xa776,	// (0x00015ace) toolbar_button_pane_cp01_ParamLimits

0xa776,	// (0x00015ace) toolbar_button_pane_cp01

0xb8b3,	// (0x00016c0b) temp_image_control_pane_ParamLimits

0xb8b3,	// (0x00016c0b) temp_image_control_pane

0x9f48,	// (0x000152a0) main_mp3_pane

0xd138,	// (0x00018490) temp_image_control_pane_g1_ParamLimits

0xd138,	// (0x00018490) temp_image_control_pane_g1

0xd146,	// (0x0001849e) temp_image_control_pane_g2_ParamLimits

0xd146,	// (0x0001849e) temp_image_control_pane_g2

0xd158,	// (0x000184b0) temp_image_control_pane_g3_ParamLimits

0xd158,	// (0x000184b0) temp_image_control_pane_g3

0x5a02,	// (0x00010d5a) temp_image_control_pane_g4_ParamLimits

0x5a02,	// (0x00010d5a) temp_image_control_pane_g4

0x0003,

0xf770,	// (0x0001aac8) temp_image_control_pane_g_ParamLimits

0xf770,	// (0x0001aac8) temp_image_control_pane_g

0xd138,	// (0x00018490) main_mp3_pane_g1

0x5a13,	// (0x00010d6b) main_mp3_pane_g2

0x0007,

0xf779,	// (0x0001aad1) main_mp3_pane_g

0xd19b,	// (0x000184f3) main_mp3_pane_t1

0xa97b,	// (0x00015cd3) main_camera_pane_g8_ParamLimits

0xa97b,	// (0x00015cd3) main_camera_pane_g8

0x30eb,	// (0x0000e443) main_video_pane_g7_ParamLimits

0x30eb,	// (0x0000e443) main_video_pane_g7

0xcb3a,	// (0x00017e92) main_camera2_pane_t7_ParamLimits

0xcb3a,	// (0x00017e92) main_camera2_pane_t7

0xab78,	// (0x00015ed0) scroll_pane_cp025_ParamLimits

0xab78,	// (0x00015ed0) scroll_pane_cp025

0xab8c,	// (0x00015ee4) scroll_pane_cp026_ParamLimits

0xab8c,	// (0x00015ee4) scroll_pane_cp026

0xab9b,	// (0x00015ef3) wml_content_pane_ParamLimits

0x9ef5,	// (0x0001524d) main_touch_calib_pane

0x5ac9,	// (0x00010e21) main_touch_calib_pane_g1

0x5ad5,	// (0x00010e2d) main_touch_calib_pane_g2

0x5ae1,	// (0x00010e39) main_touch_calib_pane_g3

0x5aed,	// (0x00010e45) main_touch_calib_pane_g4

0x0003,

0xf797,	// (0x0001aaef) main_touch_calib_pane_g

0x5af9,	// (0x00010e51) main_touch_calib_pane_t1

0x5b11,	// (0x00010e69) main_touch_calib_pane_t2

0x0004,

0xf7a0,	// (0x0001aaf8) main_touch_calib_pane_t

0xb412,	// (0x0001676a) mup_progress_pane_cp02

0xb431,	// (0x00016789) navi_pane_g1

0xb4b1,	// (0x00016809) navi_pane_mp_t3

0x9f48,	// (0x000152a0) main_mp3_pane_ParamLimits

0x500d,	// (0x00010365) navi_pane_ParamLimits

0xd138,	// (0x00018490) main_mp3_pane_g1_ParamLimits

0x5a13,	// (0x00010d6b) main_mp3_pane_g2_ParamLimits

0x5a1f,	// (0x00010d77) main_mp3_pane_g3_ParamLimits

0x5a1f,	// (0x00010d77) main_mp3_pane_g3

0x5a2b,	// (0x00010d83) main_mp3_pane_g4_ParamLimits

0x5a2b,	// (0x00010d83) main_mp3_pane_g4

0xd168,	// (0x000184c0) main_mp3_pane_g5_ParamLimits

0xd168,	// (0x000184c0) main_mp3_pane_g5

0xd176,	// (0x000184ce) main_mp3_pane_g6_ParamLimits

0xd176,	// (0x000184ce) main_mp3_pane_g6

0xd183,	// (0x000184db) main_mp3_pane_g7_ParamLimits

0xd183,	// (0x000184db) main_mp3_pane_g7

0xd18f,	// (0x000184e7) main_mp3_pane_g8_ParamLimits

0xd18f,	// (0x000184e7) main_mp3_pane_g8

0xf779,	// (0x0001aad1) main_mp3_pane_g_ParamLimits

0x5a37,	// (0x00010d8f) main_mp3_pane_t2

0x5a45,	// (0x00010d9d) main_mp3_pane_t3

0xd1a9,	// (0x00018501) main_mp3_pane_t4

0xd1b7,	// (0x0001850f) main_mp3_pane_t5

0x0005,

0xf78a,	// (0x0001aae2) main_mp3_pane_t

0xd1c5,	// (0x0001851d) mup_progress_pane_cp01

0x9f0f,	// (0x00015267) aid_zoom_text_secondary2

0xcf8e,	// (0x000182e6) list_cale_ev2_pane

0xcf96,	// (0x000182ee) scroll_pane_cp023_ParamLimits

0x0ad5,	// (0x0000be2d) field_cale_ev2_pane_ParamLimits

0x0ad5,	// (0x0000be2d) field_cale_ev2_pane

0xd1cd,	// (0x00018525) field_cale_ev2_pane_g1_ParamLimits

0xd1cd,	// (0x00018525) field_cale_ev2_pane_g1

0xd1d9,	// (0x00018531) field_cale_ev2_pane_g2_ParamLimits

0xd1d9,	// (0x00018531) field_cale_ev2_pane_g2

0xd1f1,	// (0x00018549) field_cale_ev2_pane_g3_ParamLimits

0xd1f1,	// (0x00018549) field_cale_ev2_pane_g3

0x0003,

0xf7ab,	// (0x0001ab03) field_cale_ev2_pane_g_ParamLimits

0xf7ab,	// (0x0001ab03) field_cale_ev2_pane_g

0xd215,	// (0x0001856d) field_cale_ev2_pane_t1_ParamLimits

0xd215,	// (0x0001856d) field_cale_ev2_pane_t1

0xd22c,	// (0x00018584) field_cale_ev2_pane_t2_ParamLimits

0xd22c,	// (0x00018584) field_cale_ev2_pane_t2

0x0001,

0xf7b4,	// (0x0001ab0c) field_cale_ev2_pane_t_ParamLimits

0xf7b4,	// (0x0001ab0c) field_cale_ev2_pane_t

0x4673,	// (0x0000f9cb) main_postcard_pane_g5_ParamLimits

0x4673,	// (0x0000f9cb) main_postcard_pane_g5

0x4687,	// (0x0000f9df) main_postcard_pane_g6_ParamLimits

0x4687,	// (0x0000f9df) main_postcard_pane_g6

0x2ecd,	// (0x0000e225) camera2_autofocus_pane_cp_ParamLimits

0x2ecd,	// (0x0000e225) camera2_autofocus_pane_cp

0x9f48,	// (0x000152a0) main_mup3_pane

0x5b7f,	// (0x00010ed7) main_mup3_pane_g1_ParamLimits

0x5b7f,	// (0x00010ed7) main_mup3_pane_g1

0x5ba1,	// (0x00010ef9) main_mup3_pane_g2_ParamLimits

0x5ba1,	// (0x00010ef9) main_mup3_pane_g2

0x5c09,	// (0x00010f61) main_mup3_pane_g3_ParamLimits

0x5c09,	// (0x00010f61) main_mup3_pane_g3

0x5c47,	// (0x00010f9f) main_mup3_pane_g4_ParamLimits

0x5c47,	// (0x00010f9f) main_mup3_pane_g4

0x5c85,	// (0x00010fdd) main_mup3_pane_g5_ParamLimits

0x5c85,	// (0x00010fdd) main_mup3_pane_g5

0x5cc3,	// (0x0001101b) main_mup3_pane_g6_ParamLimits

0x5cc3,	// (0x0001101b) main_mup3_pane_g6

0xd241,	// (0x00018599) main_mup3_pane_g7_ParamLimits

0xd241,	// (0x00018599) main_mup3_pane_g7

0x0007,

0xf7c4,	// (0x0001ab1c) main_mup3_pane_g_ParamLimits

0xf7c4,	// (0x0001ab1c) main_mup3_pane_g

0x5d39,	// (0x00011091) main_mup3_pane_t1_ParamLimits

0x5d39,	// (0x00011091) main_mup3_pane_t1

0x5da1,	// (0x000110f9) main_mup3_pane_t2_ParamLimits

0x5da1,	// (0x000110f9) main_mup3_pane_t2

0x5e69,	// (0x000111c1) main_mup3_pane_t4_ParamLimits

0x5e69,	// (0x000111c1) main_mup3_pane_t4

0x5eb7,	// (0x0001120f) main_mup3_pane_t5_ParamLimits

0x5eb7,	// (0x0001120f) main_mup3_pane_t5

0x5f65,	// (0x000112bd) main_mup3_pane_t6_ParamLimits

0x5f65,	// (0x000112bd) main_mup3_pane_t6

0x0005,

0xf7d5,	// (0x0001ab2d) main_mup3_pane_t_ParamLimits

0xf7d5,	// (0x0001ab2d) main_mup3_pane_t

0x6019,	// (0x00011371) mup3_progress_pane_ParamLimits

0x6019,	// (0x00011371) mup3_progress_pane

0x6075,	// (0x000113cd) popup_mup3_control_window_ParamLimits

0x6075,	// (0x000113cd) popup_mup3_control_window

0xd24f,	// (0x000185a7) popup_mup3_text_window

0x60a3,	// (0x000113fb) mup3_progress_pane_t1

0x60b9,	// (0x00011411) mup3_progress_pane_t2

0xd257,	// (0x000185af) mup3_progress_pane_t3

0x0002,

0xf7e2,	// (0x0001ab3a) mup3_progress_pane_t

0xd26e,	// (0x000185c6) mup_progress_pane_cp03

0x9ef5,	// (0x0001524d) bg_tb_trans_pane_cp04

0x60cf,	// (0x00011427) mup3_volume_pane

0x60d7,	// (0x0001142f) popup_mup3_control_window_g1

0x60e0,	// (0x00011438) mup3_volume_pane_g1

0x60e9,	// (0x00011441) mup3_volume_pane_g2

0x60f2,	// (0x0001144a) mup3_volume_pane_g3

0x0002,

0xf7e9,	// (0x0001ab41) mup3_volume_pane_g

0x9ef5,	// (0x0001524d) bg_tb_trans_pane_cp03

0xd27e,	// (0x000185d6) popup_mup3_text_window_g1

0xd286,	// (0x000185de) popup_mup3_text_window_t1

0xa737,	// (0x00015a8f) list_calc_item_pane_g1_ParamLimits

0xcc22,	// (0x00017f7a) mup_volume_pane_cp_g1

0x5b29,	// (0x00010e81) main_touch_calib_pane_t3

0x5b3b,	// (0x00010e93) main_touch_calib_pane_t4

0x5b4d,	// (0x00010ea5) main_touch_calib_pane_t5

0x9eff,	// (0x00015257) aid_cell_size_toolbar2

0x9f07,	// (0x0001525f) aid_popup3_width_pane

0x9f0f,	// (0x00015267) aid_zoom_text_msg_primary

0xa95b,	// (0x00015cb3) vorec_t7

0xa6fb,	// (0x00015a53) bg_calc_paper_pane_g1_ParamLimits

0xa707,	// (0x00015a5f) bg_calc_paper_pane_g2_ParamLimits

0xa713,	// (0x00015a6b) bg_calc_paper_pane_g3_ParamLimits

0xa71f,	// (0x00015a77) bg_calc_paper_pane_g4_ParamLimits

0xa72b,	// (0x00015a83) bg_calc_paper_pane_g5_ParamLimits

0x28c5,	// (0x0000dc1d) bg_calc_paper_pane_g6_ParamLimits

0x28d4,	// (0x0000dc2c) bg_calc_paper_pane_g7_ParamLimits

0x28e3,	// (0x0000dc3b) bg_calc_paper_pane_g8_ParamLimits

0xf189,	// (0x0001a4e1) bg_calc_paper_pane_g_ParamLimits

0x28f2,	// (0x0000dc4a) calc_bg_paper_pane_g9_ParamLimits

0x3001,	// (0x0000e359) image_qvga_pane_ParamLimits

0x3001,	// (0x0000e359) image_qvga_pane

0xa5c2,	// (0x0001591a) bg_popup_sub_pane_cp04_ParamLimits

0xb7ea,	// (0x00016b42) popup_mup_playback_window_g1_ParamLimits

0xb7f6,	// (0x00016b4e) popup_mup_playback_window_t1_ParamLimits

0xb80b,	// (0x00016b63) popup_mup_playback_window_t2_ParamLimits

0xf515,	// (0x0001a86d) popup_mup_playback_window_t_ParamLimits

0x569c,	// (0x000109f4) main_mup2_pane_g3_ParamLimits

0x569c,	// (0x000109f4) main_mup2_pane_g3

0x32c8,	// (0x0000e620) popup_toolbar_window_cp04

0xbbec,	// (0x00016f44) popup_call2_audio_second_window_g3_ParamLimits

0xbbec,	// (0x00016f44) popup_call2_audio_second_window_g3

0xbff6,	// (0x0001734e) popup_call2_audio_first_window_g4_ParamLimits

0xbff6,	// (0x0001734e) popup_call2_audio_first_window_g4

0xc675,	// (0x000179cd) popup_call2_audio_in_window_g4_ParamLimits

0xc675,	// (0x000179cd) popup_call2_audio_in_window_g4

0x479a,	// (0x0000faf2) aid_area_sk_bg_cut_ParamLimits

0x479a,	// (0x0000faf2) aid_area_sk_bg_cut

0xb820,	// (0x00016b78) aid_area_sk_bg_cut_2_ParamLimits

0xb820,	// (0x00016b78) aid_area_sk_bg_cut_2

0x5971,	// (0x00010cc9) aid_placing_details_win

0x5979,	// (0x00010cd1) aid_placing_details_win_2

0xd04c,	// (0x000183a4) camera2_autofocus_pane_g1_ParamLimits

0x253b,	// (0x0000d893) popup_fixed_preview_cale_window_ParamLimits

0x253b,	// (0x0000d893) popup_fixed_preview_cale_window

0xb53a,	// (0x00016892) navi_slider_pane_g3

0xb543,	// (0x0001689b) navi_slider_pane_g4

0xb54c,	// (0x000168a4) navi_slider_pane_g5

0xb53a,	// (0x00016892) navi_slider_pane_g6

0xb555,	// (0x000168ad) navi_slider_pane_g7

0xb676,	// (0x000169ce) mup_scale_pane_g3

0xb67f,	// (0x000169d7) mup_scale_pane_g4

0xb688,	// (0x000169e0) mup_scale_pane_g5

0x4502,	// (0x0000f85a) mup_scale_pane_g6

0x450b,	// (0x0000f863) mup_scale_pane_g7

0xb53a,	// (0x00016892) cams2_slider_pane_g3

0xccd7,	// (0x0001802f) cams2_slider_pane_g4

0xccdf,	// (0x00018037) cams2_slider_pane_g5

0xb53a,	// (0x00016892) cams2_slider_pane_g6

0xcce7,	// (0x0001803f) cams2_slider_pane_g7

0xcf0b,	// (0x00018263) camera2_autofocus_pane_cp_g1

0xd294,	// (0x000185ec) bg_popup_preview_window_pane_cp02_ParamLimits

0xd294,	// (0x000185ec) bg_popup_preview_window_pane_cp02

0x60fb,	// (0x00011453) list_fp_cale_pane_ParamLimits

0x60fb,	// (0x00011453) list_fp_cale_pane

0xd2a0,	// (0x000185f8) popup_fixed_preview_cale_window_t1_ParamLimits

0xd2a0,	// (0x000185f8) popup_fixed_preview_cale_window_t1

0x6107,	// (0x0001145f) popup_fixed_preview_cale_window_t2_ParamLimits

0x6107,	// (0x0001145f) popup_fixed_preview_cale_window_t2

0x611c,	// (0x00011474) popup_fixed_preview_cale_window_t3_ParamLimits

0x611c,	// (0x00011474) popup_fixed_preview_cale_window_t3

0x0002,

0xf7f0,	// (0x0001ab48) popup_fixed_preview_cale_window_t_ParamLimits

0xf7f0,	// (0x0001ab48) popup_fixed_preview_cale_window_t

0x6131,	// (0x00011489) list_single_fp_cale_pane_ParamLimits

0x6131,	// (0x00011489) list_single_fp_cale_pane

0x6145,	// (0x0001149d) list_single_fp_cale_pane_g1_ParamLimits

0x6145,	// (0x0001149d) list_single_fp_cale_pane_g1

0xd2be,	// (0x00018616) list_single_fp_cale_pane_g2_ParamLimits

0xd2be,	// (0x00018616) list_single_fp_cale_pane_g2

0x0002,

0xf7f7,	// (0x0001ab4f) list_single_fp_cale_pane_g_ParamLimits

0xf7f7,	// (0x0001ab4f) list_single_fp_cale_pane_g

0x6151,	// (0x000114a9) list_single_fp_cale_pane_t1_ParamLimits

0x6151,	// (0x000114a9) list_single_fp_cale_pane_t1

0x6163,	// (0x000114bb) list_single_fp_cale_pane_t2_ParamLimits

0x6163,	// (0x000114bb) list_single_fp_cale_pane_t2

0x0001,

0xf7fe,	// (0x0001ab56) list_single_fp_cale_pane_t_ParamLimits

0xf7fe,	// (0x0001ab56) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9ef5,	// (0x0001524d) main_dialer_pane

0x6196,	// (0x000114ee) aid_cell_size_keypad

0x61a0,	// (0x000114f8) dialer_ne_pane

0x61a8,	// (0x00011500) grid_dialer_command_1_pane

0x61b0,	// (0x00011508) grid_dialer_command_2_pane

0x61b8,	// (0x00011510) grid_dialer_keypad_pane

0x61c8,	// (0x00011520) bg_popup_call_pane_cp06_ParamLimits

0x61c8,	// (0x00011520) bg_popup_call_pane_cp06

0x61d4,	// (0x0001152c) dialer_ne_clear_pane_ParamLimits

0x61d4,	// (0x0001152c) dialer_ne_clear_pane

0xd2d7,	// (0x0001862f) dialer_ne_pane_g1

0xd2df,	// (0x00018637) dialer_ne_pane_t1_ParamLimits

0xd2df,	// (0x00018637) dialer_ne_pane_t1

0x61e0,	// (0x00011538) dialer_ne_pane_t2_ParamLimits

0x61e0,	// (0x00011538) dialer_ne_pane_t2

0x620a,	// (0x00011562) dialer_ne_pane_t3_ParamLimits

0x620a,	// (0x00011562) dialer_ne_pane_t3

0x0002,

0xf803,	// (0x0001ab5b) dialer_ne_pane_t_ParamLimits

0xf803,	// (0x0001ab5b) dialer_ne_pane_t

0x623a,	// (0x00011592) dialer_ne_pane_t3_copy1_ParamLimits

0x623a,	// (0x00011592) dialer_ne_pane_t3_copy1

0x6269,	// (0x000115c1) cell_dialer_keypad_pane_ParamLimits

0x6269,	// (0x000115c1) cell_dialer_keypad_pane

0x627e,	// (0x000115d6) cell_dialer_command_1_pane_ParamLimits

0x627e,	// (0x000115d6) cell_dialer_command_1_pane

0x6294,	// (0x000115ec) cell_dialer_command_2_pane_ParamLimits

0x6294,	// (0x000115ec) cell_dialer_command_2_pane

0xd2f1,	// (0x00018649) bg_button_pane_cp02_ParamLimits

0xd2f1,	// (0x00018649) bg_button_pane_cp02

0x62a3,	// (0x000115fb) cell_dialer_keypad_pane_g1_ParamLimits

0x62a3,	// (0x000115fb) cell_dialer_keypad_pane_g1

0xd2f1,	// (0x00018649) bg_button_pane_cp03_ParamLimits

0xd2f1,	// (0x00018649) bg_button_pane_cp03

0x62b8,	// (0x00011610) cell_dialer_command_1_pane_g1_ParamLimits

0x62b8,	// (0x00011610) cell_dialer_command_1_pane_g1

0xd2fd,	// (0x00018655) bg_button_pane_cp04

0x62cc,	// (0x00011624) cell_dialer_command_2_pane_g1

0xb520,	// (0x00016878) bg_button_pane_cp06

0xd305,	// (0x0001865d) dialer_ne_clear_pane_g1

0xb43d,	// (0x00016795) navi_pane_g2

0x4107,	// (0x0000f45f) navi_pane_g3

0x0002,

0xf418,	// (0x0001a770) navi_pane_g

0xb4bf,	// (0x00016817) navi_pane_mv_g2

0xb4e7,	// (0x0001683f) navi_pane_mv_g5

0x412c,	// (0x0000f484) navi_pane_mv_t1

0xa6b3,	// (0x00015a0b) main_clock2_pane

0x6300,	// (0x00011658) main_clock2_list_pane_ParamLimits

0x6300,	// (0x00011658) main_clock2_list_pane

0x6332,	// (0x0001168a) main_clock2_pane_t1_ParamLimits

0x6332,	// (0x0001168a) main_clock2_pane_t1

0x6369,	// (0x000116c1) main_clock2_pane_t2_ParamLimits

0x6369,	// (0x000116c1) main_clock2_pane_t2

0x0004,

0xf80a,	// (0x0001ab62) main_clock2_pane_t_ParamLimits

0xf80a,	// (0x0001ab62) main_clock2_pane_t

0x63eb,	// (0x00011743) popup_clock_analogue_window_cp03_ParamLimits

0x63eb,	// (0x00011743) popup_clock_analogue_window_cp03

0x640e,	// (0x00011766) popup_clock_digital_window_cp02_ParamLimits

0x640e,	// (0x00011766) popup_clock_digital_window_cp02

0x647f,	// (0x000117d7) main_clock2_list_single_pane_ParamLimits

0x647f,	// (0x000117d7) main_clock2_list_single_pane

0xb520,	// (0x00016878) list_highlight_pane_cp05

0xd30d,	// (0x00018665) main_clock2_list_single_pane_t1

0x32c8,	// (0x0000e620) popup_toolbar_window_cp04_ParamLimits

0x59d2,	// (0x00010d2a) camera2_autofocus_pane_g2_ParamLimits

0x59d2,	// (0x00010d2a) camera2_autofocus_pane_g2

0x59de,	// (0x00010d36) camera2_autofocus_pane_g3_ParamLimits

0x59de,	// (0x00010d36) camera2_autofocus_pane_g3

0x59ea,	// (0x00010d42) camera2_autofocus_pane_g4_ParamLimits

0x59ea,	// (0x00010d42) camera2_autofocus_pane_g4

0x59f6,	// (0x00010d4e) camera2_autofocus_pane_g5_ParamLimits

0x59f6,	// (0x00010d4e) camera2_autofocus_pane_g5

0x0004,

0xf753,	// (0x0001aaab) camera2_autofocus_pane_g_ParamLimits

0xf753,	// (0x0001aaab) camera2_autofocus_pane_g

0x5b5f,	// (0x00010eb7) camera2_autofocus_pane_cp_g2

0x5b67,	// (0x00010ebf) camera2_autofocus_pane_cp_g3

0x5b6f,	// (0x00010ec7) camera2_autofocus_pane_cp_g4

0x5b77,	// (0x00010ecf) camera2_autofocus_pane_cp_g5

0x0004,

0xf7b9,	// (0x0001ab11) camera2_autofocus_pane_cp_g

0x61c0,	// (0x00011518) popup_dialer_spcha_window

0x9ef5,	// (0x0001524d) bg_popup_sub_pane_cp07

0xd31b,	// (0x00018673) list_spcha_pane

0xd323,	// (0x0001867b) list_single_spcha_pane_ParamLimits

0xd323,	// (0x0001867b) list_single_spcha_pane

0x9ef5,	// (0x0001524d) list_highlight_pane_cp06

0xd334,	// (0x0001868c) list_single_spcha_pane_t1

0xc41f,	// (0x00017777) popup_call2_audio_out_window_g4_ParamLimits

0xc41f,	// (0x00017777) popup_call2_audio_out_window_g4

0x9ef5,	// (0x0001524d) main_imed2_pane

0xca3c,	// (0x00017d94) popup_imed_adjust2_window

0x4eb6,	// (0x0001020e) popup_imed_trans_window_ParamLimits

0x4eb6,	// (0x0001020e) popup_imed_trans_window

0xcd4f,	// (0x000180a7) popup_blid_sat_info2_window_t1

0xcd5d,	// (0x000180b5) popup_blid_sat_info2_window_t2

0x000a,

0xf6e8,	// (0x0001aa40) popup_blid_sat_info2_window_t

0x6529,	// (0x00011881) aid_size_cell_colour_35

0x6549,	// (0x000118a1) aid_size_cell_colour_112

0x6569,	// (0x000118c1) aid_size_cell_effect

0xca16,	// (0x00017d6e) bg_tb_trans_pane_cp02

0xaf06,	// (0x0001625e) heading_imed_pane

0x6589,	// (0x000118e1) listscroll_imed_pane

0xd342,	// (0x0001869a) heading_imed_pane_g1

0xd34a,	// (0x000186a2) heading_imed_pane_t1

0xd358,	// (0x000186b0) grid_imed_colour_35_pane_ParamLimits

0xd358,	// (0x000186b0) grid_imed_colour_35_pane

0x6595,	// (0x000118ed) grid_imed_effect_pane

0xd36b,	// (0x000186c3) list_imed_aspect_pane

0x65a8,	// (0x00011900) scroll_pane_cp027_ParamLimits

0x65a8,	// (0x00011900) scroll_pane_cp027

0x65b4,	// (0x0001190c) cell_imed_effect_pane_ParamLimits

0x65b4,	// (0x0001190c) cell_imed_effect_pane

0xd373,	// (0x000186cb) cell_imed_colour_pane_ParamLimits

0xd373,	// (0x000186cb) cell_imed_colour_pane

0xd3ad,	// (0x00018705) cell_imed_colour_pane_g1_ParamLimits

0xd3ad,	// (0x00018705) cell_imed_colour_pane_g1

0xd3be,	// (0x00018716) hgihlgiht_grid_pane_cp016_ParamLimits

0xd3be,	// (0x00018716) hgihlgiht_grid_pane_cp016

0x65d9,	// (0x00011931) cell_imed_effect_pane_g1

0x65e1,	// (0x00011939) grid_highlight_pane_cp017

0xd3cf,	// (0x00018727) list_imed_single_pane_ParamLimits

0xd3cf,	// (0x00018727) list_imed_single_pane

0x9ef5,	// (0x0001524d) list_highlight_pane_cp07

0xd3e2,	// (0x0001873a) list_imed_aspect_pane_comp1_t1

0xca16,	// (0x00017d6e) bg_tb_trans_pane_cp05

0xd402,	// (0x0001875a) popup_imed_adjust2_window_g1

0xd429,	// (0x00018781) popup_imed_adjust2_window_t1

0xd441,	// (0x00018799) slider_imed_adjust_pane

0xd455,	// (0x000187ad) slider_imed_adjust_pane_g1

0xd465,	// (0x000187bd) slider_imed_adjust_pane_g2

0xd475,	// (0x000187cd) slider_imed_adjust_pane_g3

0xd486,	// (0x000187de) slider_imed_adjust_pane_g4

0x0003,

0xf827,	// (0x0001ab7f) slider_imed_adjust_pane_g

0x65ea,	// (0x00011942) aid_size_cell_clipart2

0x65f6,	// (0x0001194e) grid_imed_clipart_pane

0xd497,	// (0x000187ef) scroll_pane_cp031

0x6600,	// (0x00011958) cell_imed_clipart_pane_ParamLimits

0x6600,	// (0x00011958) cell_imed_clipart_pane

0x6618,	// (0x00011970) cell_imed_clipart_pane_g1

0x9ef5,	// (0x0001524d) grid_highlight_pane_cp014

0x6313,	// (0x0001166b) main_clock2_pane_g1_ParamLimits

0x6313,	// (0x0001166b) main_clock2_pane_g1

0x642a,	// (0x00011782) aid_call2_pane_cp10

0x643c,	// (0x00011794) aid_call_pane_cp10

0xb3ed,	// (0x00016745) popup_clock_analogue_window_cp10_g1

0xb3ed,	// (0x00016745) popup_clock_analogue_window_cp10_g2

0x644e,	// (0x000117a6) popup_clock_analogue_window_cp10_g3

0x644e,	// (0x000117a6) popup_clock_analogue_window_cp10_g4

0xb3ed,	// (0x00016745) popup_clock_analogue_window_cp10_g5

0x0004,

0xf815,	// (0x0001ab6d) popup_clock_analogue_window_cp10_g

0x6460,	// (0x000117b8) popup_clock_analogue_window_cp10_t1

0x6491,	// (0x000117e9) clock_digital_number_pane_cp10_ParamLimits

0x6491,	// (0x000117e9) clock_digital_number_pane_cp10

0x64a9,	// (0x00011801) clock_digital_number_pane_cp11_ParamLimits

0x64a9,	// (0x00011801) clock_digital_number_pane_cp11

0x64c1,	// (0x00011819) clock_digital_number_pane_cp12_ParamLimits

0x64c1,	// (0x00011819) clock_digital_number_pane_cp12

0x64d9,	// (0x00011831) clock_digital_number_pane_cp13_ParamLimits

0x64d9,	// (0x00011831) clock_digital_number_pane_cp13

0x64f1,	// (0x00011849) clock_digital_separator_pane_cp10_ParamLimits

0x64f1,	// (0x00011849) clock_digital_separator_pane_cp10

0x6509,	// (0x00011861) popup_clock_digital_window_cp02_t1_ParamLimits

0x6509,	// (0x00011861) popup_clock_digital_window_cp02_t1

0xa5ba,	// (0x00015912) clock_digital_number_pane_cp10_g1

0xa5ba,	// (0x00015912) clock_digital_number_pane_cp10_g2

0x0001,

0xf830,	// (0x0001ab88) clock_digital_number_pane_cp10_g

0xa5ba,	// (0x00015912) clock_digital_separator_pane_cp10_g1

0xa5ba,	// (0x00015912) clock_digital_separator_pane_g2_cp10

0xb4f0,	// (0x00016848) navi_pane_vded_g4

0xb4f9,	// (0x00016851) navi_pane_vded_g5

0xb502,	// (0x0001685a) navi_pane_vded_t1

0x9ef5,	// (0x0001524d) main_vded_pane

0x6621,	// (0x00011979) main_vded_pane_g1

0x662b,	// (0x00011983) main_vded_pane_g2

0x6633,	// (0x0001198b) main_vded_pane_g3

0x0002,

0xf835,	// (0x0001ab8d) main_vded_pane_g

0x663b,	// (0x00011993) main_vded_pane_t1

0x6649,	// (0x000119a1) main_vded_pane_t2

0x0001,

0xf83c,	// (0x0001ab94) main_vded_pane_t

0x6657,	// (0x000119af) vded_slider_pane

0x665f,	// (0x000119b7) vded_video_pane

0xd49f,	// (0x000187f7) vded_video_pane_g1

0x6667,	// (0x000119bf) vded_video_pane_g2

0xcf0b,	// (0x00018263) vded_video_pane_g3

0x0002,

0xf841,	// (0x0001ab99) vded_video_pane_g

0xd4a9,	// (0x00018801) vded_slider_pane_g1

0xcc22,	// (0x00017f7a) vded_slider_pane_g2

0xd4b2,	// (0x0001880a) vded_slider_pane_g3

0xd4bb,	// (0x00018813) vded_slider_pane_g4

0xd4c4,	// (0x0001881c) vded_slider_pane_g5

0x0004,

0xf848,	// (0x0001aba0) vded_slider_pane_g

0x605f,	// (0x000113b7) mup3_rocker_pane_ParamLimits

0x605f,	// (0x000113b7) mup3_rocker_pane

0x6670,	// (0x000119c8) mup3_control_keys_pane_g1

0x6678,	// (0x000119d0) mup3_control_keys_pane_g2

0x6680,	// (0x000119d8) mup3_control_keys_pane_g3

0x6688,	// (0x000119e0) mup3_control_keys_pane_g4

0x0003,

0xf853,	// (0x0001abab) mup3_control_keys_pane_g

0x256e,	// (0x0000d8c6) popup_toolbar2_fixed_window_cp01_ParamLimits

0x256e,	// (0x0000d8c6) popup_toolbar2_fixed_window_cp01

0x608d,	// (0x000113e5) popup_toolbar2_fixed_window_cp02_ParamLimits

0x608d,	// (0x000113e5) popup_toolbar2_fixed_window_cp02

0xbd5e,	// (0x000170b6) popup_call2_audio_second_window_t4_ParamLimits

0xbd5e,	// (0x000170b6) popup_call2_audio_second_window_t4

0xc28c,	// (0x000175e4) popup_call2_audio_first_window_t6_ParamLimits

0xc28c,	// (0x000175e4) popup_call2_audio_first_window_t6

0xc522,	// (0x0001787a) popup_call2_audio_out_window_t6_ParamLimits

0xc522,	// (0x0001787a) popup_call2_audio_out_window_t6

0x9ef5,	// (0x0001524d) main_vitu_pane

0x6698,	// (0x000119f0) aid_size_cell_itu_ParamLimits

0x6698,	// (0x000119f0) aid_size_cell_itu

0x9f48,	// (0x000152a0) bg_popup_window_pane_cp08_ParamLimits

0x9f48,	// (0x000152a0) bg_popup_window_pane_cp08

0x66ae,	// (0x00011a06) field_vitu_entry_pane_ParamLimits

0x66ae,	// (0x00011a06) field_vitu_entry_pane

0x66c1,	// (0x00011a19) grid_vitu_function_pane_ParamLimits

0x66c1,	// (0x00011a19) grid_vitu_function_pane

0x66d6,	// (0x00011a2e) grid_vitu_itu_pane_ParamLimits

0x66d6,	// (0x00011a2e) grid_vitu_itu_pane

0x66ec,	// (0x00011a44) cell_vitu_itu_pane_ParamLimits

0x66ec,	// (0x00011a44) cell_vitu_itu_pane

0x670e,	// (0x00011a66) cell_vitu_function_pane_ParamLimits

0x670e,	// (0x00011a66) cell_vitu_function_pane

0x9f48,	// (0x000152a0) bg_popup_sub_pane_cp08_ParamLimits

0x9f48,	// (0x000152a0) bg_popup_sub_pane_cp08

0x6727,	// (0x00011a7f) field_vitu_entry_pane_t1_ParamLimits

0x6727,	// (0x00011a7f) field_vitu_entry_pane_t1

0xd4e5,	// (0x0001883d) field_vitu_entry_pane_t2_ParamLimits

0xd4e5,	// (0x0001883d) field_vitu_entry_pane_t2

0x0001,

0xf861,	// (0x0001abb9) field_vitu_entry_pane_t_ParamLimits

0xf861,	// (0x0001abb9) field_vitu_entry_pane_t

0xd502,	// (0x0001885a) bg_button_pane_cp05_ParamLimits

0xd502,	// (0x0001885a) bg_button_pane_cp05

0x6743,	// (0x00011a9b) cell_vitu_itu_pane_g1

0x675b,	// (0x00011ab3) cell_vitu_itu_pane_t1_ParamLimits

0x675b,	// (0x00011ab3) cell_vitu_itu_pane_t1

0x676d,	// (0x00011ac5) cell_vitu_itu_pane_t2_ParamLimits

0x676d,	// (0x00011ac5) cell_vitu_itu_pane_t2

0x0002,

0xf866,	// (0x0001abbe) cell_vitu_itu_pane_t_ParamLimits

0xf866,	// (0x0001abbe) cell_vitu_itu_pane_t

0xd510,	// (0x00018868) bg_button_pane_cp07

0x67a2,	// (0x00011afa) cell_vitu_function_pane_g1

0xa649,	// (0x000159a1) main_calc_pane_g1

0x23d2,	// (0x0000d72a) aid_visual_content_pane

0x9ef5,	// (0x0001524d) main_vradio_pane

0x67ab,	// (0x00011b03) main_vradio_pane_g1_ParamLimits

0x67ab,	// (0x00011b03) main_vradio_pane_g1

0xd51a,	// (0x00018872) main_vradio_pane_g2_ParamLimits

0xd51a,	// (0x00018872) main_vradio_pane_g2

0x0001,

0xf86d,	// (0x0001abc5) main_vradio_pane_g_ParamLimits

0xf86d,	// (0x0001abc5) main_vradio_pane_g

0x67c1,	// (0x00011b19) main_vradio_pane_t1_ParamLimits

0x67c1,	// (0x00011b19) main_vradio_pane_t1

0x67d6,	// (0x00011b2e) main_vradio_pane_t2_ParamLimits

0x67d6,	// (0x00011b2e) main_vradio_pane_t2

0xd527,	// (0x0001887f) main_vradio_pane_t3_ParamLimits

0xd527,	// (0x0001887f) main_vradio_pane_t3

0x0002,

0xf872,	// (0x0001abca) main_vradio_pane_t_ParamLimits

0xf872,	// (0x0001abca) main_vradio_pane_t

0x67eb,	// (0x00011b43) vradio_rocker_control_pane_ParamLimits

0x67eb,	// (0x00011b43) vradio_rocker_control_pane

0x67fd,	// (0x00011b55) vradio_station_info_pane_ParamLimits

0x67fd,	// (0x00011b55) vradio_station_info_pane

0xd539,	// (0x00018891) vradio_frequency_info_pane_ParamLimits

0xd539,	// (0x00018891) vradio_frequency_info_pane

0xcf0b,	// (0x00018263) vradio_station_info_pane_g1

0xd548,	// (0x000188a0) vradio_station_info_pane_t1_ParamLimits

0xd548,	// (0x000188a0) vradio_station_info_pane_t1

0xd56a,	// (0x000188c2) vradio_station_info_pane_t2_ParamLimits

0xd56a,	// (0x000188c2) vradio_station_info_pane_t2

0x0001,

0xf879,	// (0x0001abd1) vradio_station_info_pane_t_ParamLimits

0xf879,	// (0x0001abd1) vradio_station_info_pane_t

0xd57c,	// (0x000188d4) vradio_tuning_pane

0xd584,	// (0x000188dc) vradio_rocker_control_pane_g1

0xd58c,	// (0x000188e4) vradio_rocker_control_pane_g2

0xd594,	// (0x000188ec) vradio_rocker_control_pane_g3

0xd59c,	// (0x000188f4) vradio_rocker_control_pane_g4

0xd5a4,	// (0x000188fc) vradio_rocker_control_pane_g5

0x0004,

0xf87e,	// (0x0001abd6) vradio_rocker_control_pane_g

0x680d,	// (0x00011b65) vradio_frequency_info_pane_g1

0xd5ac,	// (0x00018904) vradio_frequency_info_pane_t1_ParamLimits

0xd5ac,	// (0x00018904) vradio_frequency_info_pane_t1

0x6817,	// (0x00011b6f) vradio_tuning_pane_g1

0x6820,	// (0x00011b78) vradio_tuning_pane_t1

0x9f1f,	// (0x00015277) area_side_right_pane_ParamLimits

0x9f1f,	// (0x00015277) area_side_right_pane

0xc9dd,	// (0x00017d35) status_small_pane_g1

0xc9e5,	// (0x00017d3d) status_small_pane_g2

0xc9ee,	// (0x00017d46) status_small_pane_g3

0xc9f7,	// (0x00017d4f) status_small_pane_g4

0x0003,

0xf63e,	// (0x0001a996) status_small_pane_g

0xca00,	// (0x00017d58) status_small_pane_t1

0x9ef5,	// (0x0001524d) main_video3_pane

0xd5c0,	// (0x00018918) cams_zoom_vslider_pane

0xd5c8,	// (0x00018920) image3_wide_pane_ParamLimits

0xd5c8,	// (0x00018920) image3_wide_pane

0xd5e2,	// (0x0001893a) image3_wide_small_pane

0xd5ec,	// (0x00018944) main_video3_pane_g1_ParamLimits

0xd5ec,	// (0x00018944) main_video3_pane_g1

0xd608,	// (0x00018960) main_video3_pane_g2_ParamLimits

0xd608,	// (0x00018960) main_video3_pane_g2

0x0001,

0xf889,	// (0x0001abe1) main_video3_pane_g_ParamLimits

0xf889,	// (0x0001abe1) main_video3_pane_g

0xd624,	// (0x0001897c) main_video3_pane_t1_ParamLimits

0xd624,	// (0x0001897c) main_video3_pane_t1

0xd64f,	// (0x000189a7) main_video3_pane_t2_ParamLimits

0xd64f,	// (0x000189a7) main_video3_pane_t2

0xd67a,	// (0x000189d2) main_video3_pane_t3_ParamLimits

0xd67a,	// (0x000189d2) main_video3_pane_t3

0x0002,

0xf88e,	// (0x0001abe6) main_video3_pane_t_ParamLimits

0xf88e,	// (0x0001abe6) main_video3_pane_t

0xd6a5,	// (0x000189fd) cams_zoom_vslider_pane_g1

0xd6ae,	// (0x00018a06) cams_zoom_vslider_pane_g2

0x0001,

0xf895,	// (0x0001abed) cams_zoom_vslider_pane_g

0xd6b6,	// (0x00018a0e) small_slider_vertical_pane

0xcf0b,	// (0x00018263) small_slider_vertical_pane_g1

0xcf0b,	// (0x00018263) small_slider_vertical_pane_g2

0xd6be,	// (0x00018a16) small_slider_vertical_pane_g3

0x0002,

0xf89a,	// (0x0001abf2) small_slider_vertical_pane_g

0x9ef5,	// (0x0001524d) main_hwr_training_pane

0xd6c7,	// (0x00018a1f) hwr_training_instruct_pane_ParamLimits

0xd6c7,	// (0x00018a1f) hwr_training_instruct_pane

0x682f,	// (0x00011b87) hwr_training_navi_pane_ParamLimits

0x682f,	// (0x00011b87) hwr_training_navi_pane

0x6846,	// (0x00011b9e) hwr_training_write_pane_ParamLimits

0x6846,	// (0x00011b9e) hwr_training_write_pane

0x9ef5,	// (0x0001524d) bg_frame_shadow_pane

0xd6f6,	// (0x00018a4e) hwr_training_write_pane_g1

0xd6fe,	// (0x00018a56) hwr_training_write_pane_g2

0xd706,	// (0x00018a5e) hwr_training_write_pane_g3

0xd70e,	// (0x00018a66) hwr_training_write_pane_g4

0xd716,	// (0x00018a6e) hwr_training_write_pane_g5

0xd71e,	// (0x00018a76) hwr_training_write_pane_g6

0xd726,	// (0x00018a7e) hwr_training_write_pane_g7

0x0006,

0xf8a1,	// (0x0001abf9) hwr_training_write_pane_g

0xd72e,	// (0x00018a86) hwr_training_navi_pane_g1_ParamLimits

0xd72e,	// (0x00018a86) hwr_training_navi_pane_g1

0xd740,	// (0x00018a98) hwr_training_navi_pane_g2_ParamLimits

0xd740,	// (0x00018a98) hwr_training_navi_pane_g2

0xd752,	// (0x00018aaa) hwr_training_navi_pane_g3_ParamLimits

0xd752,	// (0x00018aaa) hwr_training_navi_pane_g3

0xd762,	// (0x00018aba) hwr_training_navi_pane_g4_ParamLimits

0xd762,	// (0x00018aba) hwr_training_navi_pane_g4

0x0004,

0xf8b0,	// (0x0001ac08) hwr_training_navi_pane_g_ParamLimits

0xf8b0,	// (0x0001ac08) hwr_training_navi_pane_g

0xd76f,	// (0x00018ac7) hwr_training_navi_pane_t1

0x6886,	// (0x00011bde) list_single_hwr_training_instruct_pane_ParamLimits

0x6886,	// (0x00011bde) list_single_hwr_training_instruct_pane

0xd77d,	// (0x00018ad5) list_single_hwr_training_instruct_pane_t1

0xce4b,	// (0x000181a3) bg_frame_shadow_pane_g1

0xd78c,	// (0x00018ae4) bg_frame_shadow_pane_g2

0xd794,	// (0x00018aec) bg_frame_shadow_pane_g3

0xd79c,	// (0x00018af4) bg_frame_shadow_pane_g4

0xd7a4,	// (0x00018afc) bg_frame_shadow_pane_g5

0xd7ac,	// (0x00018b04) bg_frame_shadow_pane_g6

0xd7b4,	// (0x00018b0c) bg_frame_shadow_pane_g7

0xa7d6,	// (0x00015b2e) bg_frame_shadow_pane_g8

0x0007,

0xf8bb,	// (0x0001ac13) bg_frame_shadow_pane_g

0x9ef5,	// (0x0001524d) main_video_tele_dialer_pane

0x689e,	// (0x00011bf6) aid_size_cell_video_keypad_ParamLimits

0x689e,	// (0x00011bf6) aid_size_cell_video_keypad

0x68b8,	// (0x00011c10) grid_video_dialer_keypad_pane_ParamLimits

0x68b8,	// (0x00011c10) grid_video_dialer_keypad_pane

0x68fa,	// (0x00011c52) video_down_pane_cp_ParamLimits

0x68fa,	// (0x00011c52) video_down_pane_cp

0x692a,	// (0x00011c82) cell_video_dialer_keypad_pane_ParamLimits

0x692a,	// (0x00011c82) cell_video_dialer_keypad_pane

0xd7bc,	// (0x00018b14) bg_button_pane_cp08_ParamLimits

0xd7bc,	// (0x00018b14) bg_button_pane_cp08

0x694c,	// (0x00011ca4) cell_video_dialer_keypad_pane_g1_ParamLimits

0x694c,	// (0x00011ca4) cell_video_dialer_keypad_pane_g1

0x6049,	// (0x000113a1) mup3_rocker2_pane_ParamLimits

0x6049,	// (0x000113a1) mup3_rocker2_pane

0xcf0b,	// (0x00018263) mup3_rocker2_pane_g1

0x4daf,	// (0x00010107) main_dialer2_pane

0x9ef5,	// (0x0001524d) main_mp4_pane

0xd7d0,	// (0x00018b28) main_mp4_pane_g1_ParamLimits

0xd7d0,	// (0x00018b28) main_mp4_pane_g1

0xd7d0,	// (0x00018b28) main_mp4_pane_g2_ParamLimits

0xd7d0,	// (0x00018b28) main_mp4_pane_g2

0x6987,	// (0x00011cdf) main_mp4_pane_g3_ParamLimits

0x6987,	// (0x00011cdf) main_mp4_pane_g3

0xd7de,	// (0x00018b36) main_mp4_pane_g4_ParamLimits

0xd7de,	// (0x00018b36) main_mp4_pane_g4

0xd80c,	// (0x00018b64) main_mp4_pane_g5_ParamLimits

0xd80c,	// (0x00018b64) main_mp4_pane_g5

0x0005,

0xf8db,	// (0x0001ac33) main_mp4_pane_g_ParamLimits

0xf8db,	// (0x0001ac33) main_mp4_pane_g

0xd868,	// (0x00018bc0) main_mp4_pane_t1_ParamLimits

0xd868,	// (0x00018bc0) main_mp4_pane_t1

0xd8c0,	// (0x00018c18) main_mp4_pane_t2_ParamLimits

0xd8c0,	// (0x00018c18) main_mp4_pane_t2

0xd912,	// (0x00018c6a) main_mp4_pane_t3_ParamLimits

0xd912,	// (0x00018c6a) main_mp4_pane_t3

0xd938,	// (0x00018c90) main_mp4_pane_t4_ParamLimits

0xd938,	// (0x00018c90) main_mp4_pane_t4

0x0003,

0xf8e8,	// (0x0001ac40) main_mp4_pane_t_ParamLimits

0xf8e8,	// (0x0001ac40) main_mp4_pane_t

0xd978,	// (0x00018cd0) mp4_progress_pane_ParamLimits

0xd978,	// (0x00018cd0) mp4_progress_pane

0xd9bc,	// (0x00018d14) mp4_rocker_pane_ParamLimits

0xd9bc,	// (0x00018d14) mp4_rocker_pane

0xd9e2,	// (0x00018d3a) mp4_progress_pane_t1

0xd9f9,	// (0x00018d51) mp4_progress_pane_t2

0x0001,

0xf8f1,	// (0x0001ac49) mp4_progress_pane_t

0xda10,	// (0x00018d68) mup_progress_pane_cp04

0xcf0b,	// (0x00018263) mp4_rocker_pane_g1

0x69b7,	// (0x00011d0f) aid_cell_size_keypad2_ParamLimits

0x69b7,	// (0x00011d0f) aid_cell_size_keypad2

0x69d1,	// (0x00011d29) dialer2_ne_pane_ParamLimits

0x69d1,	// (0x00011d29) dialer2_ne_pane

0x69e6,	// (0x00011d3e) grid_dialer2_keypad_pane_ParamLimits

0x69e6,	// (0x00011d3e) grid_dialer2_keypad_pane

0xccf8,	// (0x00018050) bg_popup_call_pane_cp07_ParamLimits

0xccf8,	// (0x00018050) bg_popup_call_pane_cp07

0x69fc,	// (0x00011d54) dialer2_ne_pane_t1_ParamLimits

0x69fc,	// (0x00011d54) dialer2_ne_pane_t1

0x6a39,	// (0x00011d91) cell_dialer2_keypad_pane_ParamLimits

0x6a39,	// (0x00011d91) cell_dialer2_keypad_pane

0xda2e,	// (0x00018d86) bg_button_pane_pane_cp04_ParamLimits

0xda2e,	// (0x00018d86) bg_button_pane_pane_cp04

0x6a5b,	// (0x00011db3) cell_dialer2_keypad_pane_g1_ParamLimits

0x6a5b,	// (0x00011db3) cell_dialer2_keypad_pane_g1

0x320d,	// (0x0000e565) aid_placing_vt_set_content_ParamLimits

0x320d,	// (0x0000e565) aid_placing_vt_set_content

0x322b,	// (0x0000e583) aid_placing_vt_set_title_ParamLimits

0x322b,	// (0x0000e583) aid_placing_vt_set_title

0x9ef5,	// (0x0001524d) main_image3_pane

0x6aea,	// (0x00011e42) area_side_right_pane_cp01_ParamLimits

0x6aea,	// (0x00011e42) area_side_right_pane_cp01

0xd7d0,	// (0x00018b28) main_image3_pane_g1_ParamLimits

0xd7d0,	// (0x00018b28) main_image3_pane_g1

0x6b01,	// (0x00011e59) main_image3_pane_g2_ParamLimits

0x6b01,	// (0x00011e59) main_image3_pane_g2

0x6b27,	// (0x00011e7f) main_image3_pane_g3_ParamLimits

0x6b27,	// (0x00011e7f) main_image3_pane_g3

0x6b4d,	// (0x00011ea5) main_image3_pane_g4_ParamLimits

0x6b4d,	// (0x00011ea5) main_image3_pane_g4

0x0003,

0xf900,	// (0x0001ac58) main_image3_pane_g_ParamLimits

0xf900,	// (0x0001ac58) main_image3_pane_g

0x6b73,	// (0x00011ecb) main_image3_pane_t1_ParamLimits

0x6b73,	// (0x00011ecb) main_image3_pane_t1

0x6bcb,	// (0x00011f23) main_image3_pane_t2_ParamLimits

0x6bcb,	// (0x00011f23) main_image3_pane_t2

0x6c1d,	// (0x00011f75) main_image3_pane_t3_ParamLimits

0x6c1d,	// (0x00011f75) main_image3_pane_t3

0x0003,

0xf909,	// (0x0001ac61) main_image3_pane_t_ParamLimits

0xf909,	// (0x0001ac61) main_image3_pane_t

0x9f48,	// (0x000152a0) grid_sctrl_middle_pane_cp01_ParamLimits

0x9f48,	// (0x000152a0) grid_sctrl_middle_pane_cp01

0x6c9d,	// (0x00011ff5) cell_sctrl_middle_pane_cp01_ParamLimits

0x6c9d,	// (0x00011ff5) cell_sctrl_middle_pane_cp01

0x6cba,	// (0x00012012) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x6cba,	// (0x00012012) cell_sctrl_middle_pane_cp01_g1

0x9ef5,	// (0x0001524d) main_call4_pane

0x6cd0,	// (0x00012028) aid_size_button_call4_ParamLimits

0x6cd0,	// (0x00012028) aid_size_button_call4

0x6cfd,	// (0x00012055) call4_windows_pane_ParamLimits

0x6cfd,	// (0x00012055) call4_windows_pane

0x6d13,	// (0x0001206b) grid_call4_button_pane_ParamLimits

0x6d13,	// (0x0001206b) grid_call4_button_pane

0xda84,	// (0x00018ddc) call4_windows_conf_pane

0x6d32,	// (0x0001208a) popup_call4_audio_first_window_ParamLimits

0x6d32,	// (0x0001208a) popup_call4_audio_first_window

0x6d52,	// (0x000120aa) popup_call4_audio_second_window_ParamLimits

0x6d52,	// (0x000120aa) popup_call4_audio_second_window

0xdab7,	// (0x00018e0f) popup_call4_audio_wait_window_ParamLimits

0xdab7,	// (0x00018e0f) popup_call4_audio_wait_window

0x6d64,	// (0x000120bc) cell_call4_button_pane_ParamLimits

0x6d64,	// (0x000120bc) cell_call4_button_pane

0x6d89,	// (0x000120e1) bg_button_pane_cp09_ParamLimits

0x6d89,	// (0x000120e1) bg_button_pane_cp09

0x6d95,	// (0x000120ed) cell_call4_button_pane_g1_ParamLimits

0x6d95,	// (0x000120ed) cell_call4_button_pane_g1

0x6dbb,	// (0x00012113) cell_call4_button_pane_t1_ParamLimits

0x6dbb,	// (0x00012113) cell_call4_button_pane_t1

0xdafd,	// (0x00018e55) popup_call4_audio_conf_window_ParamLimits

0xdafd,	// (0x00018e55) popup_call4_audio_conf_window

0x60a3,	// (0x000113fb) mup3_progress_pane_t1_ParamLimits

0x60b9,	// (0x00011411) mup3_progress_pane_t2_ParamLimits

0xd257,	// (0x000185af) mup3_progress_pane_t3_ParamLimits

0xf7e2,	// (0x0001ab3a) mup3_progress_pane_t_ParamLimits

0xd26e,	// (0x000185c6) mup_progress_pane_cp03_ParamLimits

0x6690,	// (0x000119e8) mup3_control_keys_pane_g4_copy1

0xd9a6,	// (0x00018cfe) mp4_rocker2_pane_ParamLimits

0xd9a6,	// (0x00018cfe) mp4_rocker2_pane

0xdb11,	// (0x00018e69) mp4_rocker2_pane_g1

0xdb19,	// (0x00018e71) mp4_rocker2_pane_g2

0xdb21,	// (0x00018e79) mp4_rocker2_pane_g3

0xdb29,	// (0x00018e81) mp4_rocker2_pane_g4

0xdb31,	// (0x00018e89) mp4_rocker2_pane_g5

0x0004,

0xf912,	// (0x0001ac6a) mp4_rocker2_pane_g

0x9ef5,	// (0x0001524d) main_camera4_pane

0x9ef5,	// (0x0001524d) main_video4_pane

0x68cc,	// (0x00011c24) main_video_tele_dialer_pane_t1_ParamLimits

0x68cc,	// (0x00011c24) main_video_tele_dialer_pane_t1

0x68e3,	// (0x00011c3b) main_video_tele_dialer_pane_t2_ParamLimits

0x68e3,	// (0x00011c3b) main_video_tele_dialer_pane_t2

0x0001,

0xf8cc,	// (0x0001ac24) main_video_tele_dialer_pane_t_ParamLimits

0xf8cc,	// (0x0001ac24) main_video_tele_dialer_pane_t

0x6df9,	// (0x00012151) cam4_autofocus_pane_ParamLimits

0x6df9,	// (0x00012151) cam4_autofocus_pane

0x6e0d,	// (0x00012165) cam4_image_uncrop_pane_ParamLimits

0x6e0d,	// (0x00012165) cam4_image_uncrop_pane

0x6e24,	// (0x0001217c) cam4_indicators_pane_ParamLimits

0x6e24,	// (0x0001217c) cam4_indicators_pane

0x6e48,	// (0x000121a0) main_camera4_pane_g1_ParamLimits

0x6e48,	// (0x000121a0) main_camera4_pane_g1

0x6e54,	// (0x000121ac) main_camera4_pane_g2_ParamLimits

0x6e54,	// (0x000121ac) main_camera4_pane_g2

0x6e54,	// (0x000121ac) main_camera4_pane_g3_ParamLimits

0x6e54,	// (0x000121ac) main_camera4_pane_g3

0x6e60,	// (0x000121b8) main_camera4_pane_g4_ParamLimits

0x6e60,	// (0x000121b8) main_camera4_pane_g4

0x6e6c,	// (0x000121c4) main_camera4_pane_g5_ParamLimits

0x6e6c,	// (0x000121c4) main_camera4_pane_g5

0x0005,

0xf91d,	// (0x0001ac75) main_camera4_pane_g_ParamLimits

0xf91d,	// (0x0001ac75) main_camera4_pane_g

0x6e89,	// (0x000121e1) main_camera4_pane_t1_ParamLimits

0x6e89,	// (0x000121e1) main_camera4_pane_t1

0xd168,	// (0x000184c0) bg_tb_trans_pane_cp06

0xdb51,	// (0x00018ea9) cam4_indicators_pane_g1

0xdb61,	// (0x00018eb9) cam4_indicators_pane_g2

0x0002,

0xf938,	// (0x0001ac90) cam4_indicators_pane_g

0xdb81,	// (0x00018ed9) cam4_indicators_pane_t1

0x6ef0,	// (0x00012248) main_video4_pane_g1_ParamLimits

0x6ef0,	// (0x00012248) main_video4_pane_g1

0x6f02,	// (0x0001225a) main_video4_pane_g2_ParamLimits

0x6f02,	// (0x0001225a) main_video4_pane_g2

0x6f02,	// (0x0001225a) main_video4_pane_g3_ParamLimits

0x6f02,	// (0x0001225a) main_video4_pane_g3

0x6f11,	// (0x00012269) main_video4_pane_g4_ParamLimits

0x6f11,	// (0x00012269) main_video4_pane_g4

0x0004,

0xf93f,	// (0x0001ac97) main_video4_pane_g_ParamLimits

0xf93f,	// (0x0001ac97) main_video4_pane_g

0x6f2f,	// (0x00012287) vid4_indicators_pane_ParamLimits

0x6f2f,	// (0x00012287) vid4_indicators_pane

0x6f57,	// (0x000122af) video4_image_uncrop_cif_pane_ParamLimits

0x6f57,	// (0x000122af) video4_image_uncrop_cif_pane

0x6f6f,	// (0x000122c7) video4_image_uncrop_nhd_pane_ParamLimits

0x6f6f,	// (0x000122c7) video4_image_uncrop_nhd_pane

0x6f83,	// (0x000122db) video4_image_uncrop_vga_pane_ParamLimits

0x6f83,	// (0x000122db) video4_image_uncrop_vga_pane

0xd0d5,	// (0x0001842d) bg_tb_trans_pane_cp07

0x6f9b,	// (0x000122f3) vid4_indicators_pane_g1

0x6fa8,	// (0x00012300) vid4_indicators_pane_g2

0x6fb5,	// (0x0001230d) vid4_indicators_pane_g3

0x0004,

0xf94a,	// (0x0001aca2) vid4_indicators_pane_g

0x6fda,	// (0x00012332) vid4_indicators_pane_t1

0x6fec,	// (0x00012344) cam4_autofocus_pane_g1

0x6ff4,	// (0x0001234c) cam4_autofocus_pane_g2

0x6ffc,	// (0x00012354) cam4_autofocus_pane_g3

0x0002,

0xf955,	// (0x0001acad) cam4_autofocus_pane_g

0x7004,	// (0x0001235c) cam4_autofocus_pane_g3_copy1

0x690e,	// (0x00011c66) video_down_pane_cp_t1

0x691c,	// (0x00011c74) video_down_pane_cp_t2

0x0001,

0xf8d1,	// (0x0001ac29) video_down_pane_cp_t

0x9f48,	// (0x000152a0) popup_vitu2_window_ParamLimits

0x9f48,	// (0x000152a0) popup_vitu2_window

0x700c,	// (0x00012364) aid_size_cell2_itu2_ParamLimits

0x700c,	// (0x00012364) aid_size_cell2_itu2

0x7032,	// (0x0001238a) aid_size_cell_itu2_ParamLimits

0x7032,	// (0x0001238a) aid_size_cell_itu2

0x7084,	// (0x000123dc) bg_popup_window_pane_cp09_ParamLimits

0x7084,	// (0x000123dc) bg_popup_window_pane_cp09

0x7092,	// (0x000123ea) field_vitu2_entry_pane_ParamLimits

0x7092,	// (0x000123ea) field_vitu2_entry_pane

0x70ac,	// (0x00012404) grid_vitu2_function_pane_ParamLimits

0x70ac,	// (0x00012404) grid_vitu2_function_pane

0x70e7,	// (0x0001243f) grid_vitu2_itu_pane_ParamLimits

0x70e7,	// (0x0001243f) grid_vitu2_itu_pane

0x714c,	// (0x000124a4) cell_vitu2_itu_pane_ParamLimits

0x714c,	// (0x000124a4) cell_vitu2_itu_pane

0x716e,	// (0x000124c6) cell_vitu2_function_pane_ParamLimits

0x716e,	// (0x000124c6) cell_vitu2_function_pane

0xdba3,	// (0x00018efb) bg_popup_call_pane_cp08_ParamLimits

0xdba3,	// (0x00018efb) bg_popup_call_pane_cp08

0xdbbc,	// (0x00018f14) field_vitu2_entry_pane_g1

0xdbc8,	// (0x00018f20) field_vitu2_entry_pane_g2

0x0002,

0xf95c,	// (0x0001acb4) field_vitu2_entry_pane_g

0x71ad,	// (0x00012505) field_vitu2_entry_pane_t1_ParamLimits

0x71ad,	// (0x00012505) field_vitu2_entry_pane_t1

0xdbe2,	// (0x00018f3a) field_vitu2_entry_pane_t2_ParamLimits

0xdbe2,	// (0x00018f3a) field_vitu2_entry_pane_t2

0x0001,

0xf963,	// (0x0001acbb) field_vitu2_entry_pane_t_ParamLimits

0xf963,	// (0x0001acbb) field_vitu2_entry_pane_t

0x71c9,	// (0x00012521) bg_button_pane_cp010_ParamLimits

0x71c9,	// (0x00012521) bg_button_pane_cp010

0x71d7,	// (0x0001252f) cell_vitu2_itu_pane_g1

0x71f5,	// (0x0001254d) cell_vitu2_itu_pane_t1_ParamLimits

0x71f5,	// (0x0001254d) cell_vitu2_itu_pane_t1

0x725b,	// (0x000125b3) cell_vitu2_itu_pane_t2_ParamLimits

0x725b,	// (0x000125b3) cell_vitu2_itu_pane_t2

0x0002,

0xf96d,	// (0x0001acc5) cell_vitu2_itu_pane_t_ParamLimits

0xf96d,	// (0x0001acc5) cell_vitu2_itu_pane_t

0x9f48,	// (0x000152a0) bg_button_pane_cp011

0x7337,	// (0x0001268f) cell_vitu2_function_pane_g1

0x9ef5,	// (0x0001524d) main_myfav_hc_pane

0x6c69,	// (0x00011fc1) popup_image3_note_pane_ParamLimits

0x6c69,	// (0x00011fc1) popup_image3_note_pane

0x6c83,	// (0x00011fdb) popup_image3_tool_bar_pane_ParamLimits

0x6c83,	// (0x00011fdb) popup_image3_tool_bar_pane

0x72df,	// (0x00012637) cell_vitu2_itu_pane_t3_ParamLimits

0x72df,	// (0x00012637) cell_vitu2_itu_pane_t3

0x9ef5,	// (0x0001524d) bg_popup_trans_pane

0xdc07,	// (0x00018f5f) grid_image3_tool_bar_pane

0xdc11,	// (0x00018f69) bg_popup_trans_pane_g1

0xac81,	// (0x00015fd9) bg_popup_trans_pane_g2

0xdc19,	// (0x00018f71) bg_popup_trans_pane_g3

0xdc21,	// (0x00018f79) bg_popup_trans_pane_g4

0xdc29,	// (0x00018f81) bg_popup_trans_pane_g5

0xdc31,	// (0x00018f89) bg_popup_trans_pane_g6

0xdc39,	// (0x00018f91) bg_popup_trans_pane_g7

0xdc41,	// (0x00018f99) bg_popup_trans_pane_g8

0xac61,	// (0x00015fb9) bg_popup_trans_pane_g9

0x0008,

0xf974,	// (0x0001accc) bg_popup_trans_pane_g

0xd0e3,	// (0x0001843b) cell_image3_tool_bar_pane_ParamLimits

0xd0e3,	// (0x0001843b) cell_image3_tool_bar_pane

0xcf0b,	// (0x00018263) cell_image3_tool_bar_pane_g1

0x9ef5,	// (0x0001524d) bg_popup_trans_pane_cp1

0xdc49,	// (0x00018fa1) popup_image3_note_pane_t1

0xdc57,	// (0x00018faf) popup_image3_note_pane_t2

0xdc65,	// (0x00018fbd) popup_image3_note_pane_t3

0x0002,

0xf987,	// (0x0001acdf) popup_image3_note_pane_t

0xdc73,	// (0x00018fcb) popup_image3_note_pane_t3_copy1

0x734b,	// (0x000126a3) bg_myfav_hc_instruction_pane_ParamLimits

0x734b,	// (0x000126a3) bg_myfav_hc_instruction_pane

0x735d,	// (0x000126b5) cell_myfav_contact_pane_ParamLimits

0x735d,	// (0x000126b5) cell_myfav_contact_pane

0x7377,	// (0x000126cf) cell_myfav_contact_pane_cp1_ParamLimits

0x7377,	// (0x000126cf) cell_myfav_contact_pane_cp1

0x738d,	// (0x000126e5) cell_myfav_contact_pane_cp2_ParamLimits

0x738d,	// (0x000126e5) cell_myfav_contact_pane_cp2

0x73a3,	// (0x000126fb) cell_myfav_contact_pane_cp3_ParamLimits

0x73a3,	// (0x000126fb) cell_myfav_contact_pane_cp3

0x73b8,	// (0x00012710) cell_myfav_contact_pane_cp4_ParamLimits

0x73b8,	// (0x00012710) cell_myfav_contact_pane_cp4

0x73cc,	// (0x00012724) cell_myfav_contact_pane_cp5_ParamLimits

0x73cc,	// (0x00012724) cell_myfav_contact_pane_cp5

0x73e0,	// (0x00012738) cell_myfav_contact_pane_cp6_ParamLimits

0x73e0,	// (0x00012738) cell_myfav_contact_pane_cp6

0x73f4,	// (0x0001274c) cell_myfav_contact_pane_cp7_ParamLimits

0x73f4,	// (0x0001274c) cell_myfav_contact_pane_cp7

0xdc81,	// (0x00018fd9) listscroll_gen_pane_cp05

0x740c,	// (0x00012764) main_myfav_hc_pane_g1_ParamLimits

0x740c,	// (0x00012764) main_myfav_hc_pane_g1

0x7422,	// (0x0001277a) main_myfav_hc_pane_g2_ParamLimits

0x7422,	// (0x0001277a) main_myfav_hc_pane_g2

0x0002,

0xf98e,	// (0x0001ace6) main_myfav_hc_pane_g_ParamLimits

0xf98e,	// (0x0001ace6) main_myfav_hc_pane_g

0x744c,	// (0x000127a4) main_myfav_hc_pane_t1_ParamLimits

0x744c,	// (0x000127a4) main_myfav_hc_pane_t1

0xdc8a,	// (0x00018fe2) main_myfav_hc_pane_t2_ParamLimits

0xdc8a,	// (0x00018fe2) main_myfav_hc_pane_t2

0xdc9c,	// (0x00018ff4) main_myfav_hc_pane_t3_ParamLimits

0xdc9c,	// (0x00018ff4) main_myfav_hc_pane_t3

0x7461,	// (0x000127b9) main_myfav_hc_pane_t4_ParamLimits

0x7461,	// (0x000127b9) main_myfav_hc_pane_t4

0x0004,

0xf995,	// (0x0001aced) main_myfav_hc_pane_t_ParamLimits

0xf995,	// (0x0001aced) main_myfav_hc_pane_t

0xcf0b,	// (0x00018263) bg_myfav_hc_instruction_pane_g1

0xdcae,	// (0x00019006) cell_myfav_contact_pane_g1_ParamLimits

0xdcae,	// (0x00019006) cell_myfav_contact_pane_g1

0xdcae,	// (0x00019006) cell_myfav_contact_pane_g2_ParamLimits

0xdcae,	// (0x00019006) cell_myfav_contact_pane_g2

0xdcba,	// (0x00019012) cell_myfav_contact_pane_g3_ParamLimits

0xdcba,	// (0x00019012) cell_myfav_contact_pane_g3

0xd241,	// (0x00018599) cell_myfav_contact_pane_g4_ParamLimits

0xd241,	// (0x00018599) cell_myfav_contact_pane_g4

0xdcc7,	// (0x0001901f) cell_myfav_contact_pane_g5_ParamLimits

0xdcc7,	// (0x0001901f) cell_myfav_contact_pane_g5

0x0004,

0xf9a0,	// (0x0001acf8) cell_myfav_contact_pane_g_ParamLimits

0xf9a0,	// (0x0001acf8) cell_myfav_contact_pane_g

0x7438,	// (0x00012790) main_myfav_hc_pane_g3_ParamLimits

0x7438,	// (0x00012790) main_myfav_hc_pane_g3

0x24f4,	// (0x0000d84c) popup_adpt_find_window

0x7485,	// (0x000127dd) afind_page_pane_ParamLimits

0x7485,	// (0x000127dd) afind_page_pane

0x749a,	// (0x000127f2) aid_size_cell_afind_ParamLimits

0x749a,	// (0x000127f2) aid_size_cell_afind

0x74b8,	// (0x00012810) bg_popup_sub_pane_cp09_ParamLimits

0x74b8,	// (0x00012810) bg_popup_sub_pane_cp09

0x74c5,	// (0x0001281d) find_pane_cp01_ParamLimits

0x74c5,	// (0x0001281d) find_pane_cp01

0xdcd3,	// (0x0001902b) grid_afind_control_pane_ParamLimits

0xdcd3,	// (0x0001902b) grid_afind_control_pane

0x74d2,	// (0x0001282a) grid_afind_pane_ParamLimits

0x74d2,	// (0x0001282a) grid_afind_pane

0x74f0,	// (0x00012848) cell_afind_pane_ParamLimits

0x74f0,	// (0x00012848) cell_afind_pane

0xcf0b,	// (0x00018263) afind_page_pane_g1

0x753d,	// (0x00012895) afind_page_pane_g2

0x7546,	// (0x0001289e) afind_page_pane_g3

0x0002,

0xf9ab,	// (0x0001ad03) afind_page_pane_g

0x754f,	// (0x000128a7) afind_page_pane_t1

0xdce7,	// (0x0001903f) cell_afind_grid_control_pane_ParamLimits

0xdce7,	// (0x0001903f) cell_afind_grid_control_pane

0xda2e,	// (0x00018d86) bg_button_pane_cp69_ParamLimits

0xda2e,	// (0x00018d86) bg_button_pane_cp69

0x756f,	// (0x000128c7) cell_afind_pane_g1_ParamLimits

0x756f,	// (0x000128c7) cell_afind_pane_g1

0x757c,	// (0x000128d4) cell_afind_pane_t1_ParamLimits

0x757c,	// (0x000128d4) cell_afind_pane_t1

0xa9c5,	// (0x00015d1d) bg_button_pane_cp72

0xdcf6,	// (0x0001904e) cell_afind_grid_control_pane_g1

0x4951,	// (0x0000fca9) aid_image_placing_area_ParamLimits

0x4951,	// (0x0000fca9) aid_image_placing_area

0xd4cd,	// (0x00018825) field_vitu_entry_pane_g1_ParamLimits

0xd4cd,	// (0x00018825) field_vitu_entry_pane_g1

0xd4d9,	// (0x00018831) field_vitu_entry_pane_g2_ParamLimits

0xd4d9,	// (0x00018831) field_vitu_entry_pane_g2

0x0001,

0xf85c,	// (0x0001abb4) field_vitu_entry_pane_g_ParamLimits

0xf85c,	// (0x0001abb4) field_vitu_entry_pane_g

0x6743,	// (0x00011a9b) cell_vitu_itu_pane_g1_ParamLimits

0x6785,	// (0x00011add) cell_vitu_itu_pane_t3_ParamLimits

0x6785,	// (0x00011add) cell_vitu_itu_pane_t3

0xd9e2,	// (0x00018d3a) mp4_progress_pane_t1_ParamLimits

0xd9f9,	// (0x00018d51) mp4_progress_pane_t2_ParamLimits

0xf8f1,	// (0x0001ac49) mp4_progress_pane_t_ParamLimits

0xda10,	// (0x00018d68) mup_progress_pane_cp04_ParamLimits

0x7473,	// (0x000127cb) main_myfav_hc_pane_t5_ParamLimits

0x7473,	// (0x000127cb) main_myfav_hc_pane_t5

0x9f17,	// (0x0001526f) aid_zoom_text_primary

0x24f4,	// (0x0000d84c) popup_adpt_find_window_ParamLimits

0x9f48,	// (0x000152a0) main_cam_set_pane

0x6e36,	// (0x0001218e) cam4_zoom_pane_ParamLimits

0x6e36,	// (0x0001218e) cam4_zoom_pane

0x758e,	// (0x000128e6) main_cam_set_pane_g1_ParamLimits

0x758e,	// (0x000128e6) main_cam_set_pane_g1

0x759c,	// (0x000128f4) main_cam_set_pane_g2_ParamLimits

0x759c,	// (0x000128f4) main_cam_set_pane_g2

0x0001,

0xf9b2,	// (0x0001ad0a) main_cam_set_pane_g_ParamLimits

0xf9b2,	// (0x0001ad0a) main_cam_set_pane_g

0x75bb,	// (0x00012913) main_cam_set_pane_t1_ParamLimits

0x75bb,	// (0x00012913) main_cam_set_pane_t1

0x75cd,	// (0x00012925) main_cset_listscroll_pane_ParamLimits

0x75cd,	// (0x00012925) main_cset_listscroll_pane

0x75eb,	// (0x00012943) main_cset_slider_pane_ParamLimits

0x75eb,	// (0x00012943) main_cset_slider_pane

0xdd07,	// (0x0001905f) main_cset_list_pane_ParamLimits

0xdd07,	// (0x0001905f) main_cset_list_pane

0xdd17,	// (0x0001906f) scroll_pane_cp028

0x760f,	// (0x00012967) aid_area_touch_slider

0x762b,	// (0x00012983) cset_slider_pane

0x7655,	// (0x000129ad) main_cset_slider_pane_g1

0x766a,	// (0x000129c2) main_cset_slider_pane_g2

0x0011,

0xf9b7,	// (0x0001ad0f) main_cset_slider_pane_g

0xdd50,	// (0x000190a8) main_cset_slider_pane_t1

0x7726,	// (0x00012a7e) main_cset_slider_pane_t2

0x7740,	// (0x00012a98) main_cset_slider_pane_t3

0x775a,	// (0x00012ab2) main_cset_slider_pane_t4

0x7774,	// (0x00012acc) main_cset_slider_pane_t5

0x778e,	// (0x00012ae6) main_cset_slider_pane_t6

0x77a3,	// (0x00012afb) main_cset_slider_pane_t7

0x000e,

0xf9dc,	// (0x0001ad34) main_cset_slider_pane_t

0x78a7,	// (0x00012bff) cset_list_set_pane_ParamLimits

0x78a7,	// (0x00012bff) cset_list_set_pane

0x78b8,	// (0x00012c10) aid_position_infowindow_above

0x78c0,	// (0x00012c18) aid_position_infowindow_below

0x78c8,	// (0x00012c20) cset_list_set_pane_g1_ParamLimits

0x78c8,	// (0x00012c20) cset_list_set_pane_g1

0xddf0,	// (0x00019148) cset_list_set_pane_g3_ParamLimits

0xddf0,	// (0x00019148) cset_list_set_pane_g3

0x0001,

0xf9fb,	// (0x0001ad53) cset_list_set_pane_g_ParamLimits

0xf9fb,	// (0x0001ad53) cset_list_set_pane_g

0xddff,	// (0x00019157) cset_list_set_pane_t1_ParamLimits

0xddff,	// (0x00019157) cset_list_set_pane_t1

0x9f48,	// (0x000152a0) list_highlight_pane_cp021_ParamLimits

0x9f48,	// (0x000152a0) list_highlight_pane_cp021

0xb676,	// (0x000169ce) cset_slider_pane_g1

0xb688,	// (0x000169e0) cset_slider_pane_g2

0xb67f,	// (0x000169d7) cset_slider_pane_g3

0x0002,

0xfa00,	// (0x0001ad58) cset_slider_pane_g

0xde14,	// (0x0001916c) aid_area_touch_cam4_zoom

0xde1c,	// (0x00019174) cam4_zoom_cont_pane

0xde24,	// (0x0001917c) cam4_zoom_pane_g1

0xde2c,	// (0x00019184) cam4_zoom_pane_g2

0x78d4,	// (0x00012c2c) cam4_zoom_pane_g3

0x0002,

0xfa07,	// (0x0001ad5f) cam4_zoom_pane_g

0xde34,	// (0x0001918c) cam4_zoom_cont_pane_g1

0xde3d,	// (0x00019195) cam4_zoom_cont_pane_g2

0xde46,	// (0x0001919e) cam4_zoom_cont_pane_g3

0x0002,

0xfa0e,	// (0x0001ad66) cam4_zoom_cont_pane_g

0x6cee,	// (0x00012046) call4_image_pane_ParamLimits

0x6cee,	// (0x00012046) call4_image_pane

0xda84,	// (0x00018ddc) call4_windows_conf_pane_ParamLimits

0xda97,	// (0x00018def) popup_call4_audio_in_window_ParamLimits

0xda97,	// (0x00018def) popup_call4_audio_in_window

0x9ef5,	// (0x0001524d) bg_popup_call2_act_pane_cp02

0xdaf5,	// (0x00018e4d) call4_list_conf_pane

0xcf0b,	// (0x00018263) call4_image_pane_g1

0xcf0b,	// (0x00018263) call4_image_pane_g2

0x0001,

0xf722,	// (0x0001aa7a) call4_image_pane_g

0xde4f,	// (0x000191a7) list_single_graphic_popup_conf4_pane_ParamLimits

0xde4f,	// (0x000191a7) list_single_graphic_popup_conf4_pane

0x9ef5,	// (0x0001524d) list_highlight_pane_cp022

0xde62,	// (0x000191ba) list_single_graphic_popup_conf4_pane_g1

0xb2bb,	// (0x00016613) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xfa15,	// (0x0001ad6d) list_single_graphic_popup_conf4_pane_g

0xde6a,	// (0x000191c2) list_single_graphic_popup_conf4_pane_t1

0x32e2,	// (0x0000e63a) popup_vtel_slider_window_ParamLimits

0x32e2,	// (0x0000e63a) popup_vtel_slider_window

0xda1c,	// (0x00018d74) dialer2_ne_pane_t2_ParamLimits

0xda1c,	// (0x00018d74) dialer2_ne_pane_t2

0x0001,

0xf8f6,	// (0x0001ac4e) dialer2_ne_pane_t_ParamLimits

0xf8f6,	// (0x0001ac4e) dialer2_ne_pane_t

0xccf8,	// (0x00018050) bg_popup_sub_pane_cp010_ParamLimits

0xccf8,	// (0x00018050) bg_popup_sub_pane_cp010

0x78dc,	// (0x00012c34) popup_vtel_slider_window_g1_ParamLimits

0x78dc,	// (0x00012c34) popup_vtel_slider_window_g1

0x78ef,	// (0x00012c47) popup_vtel_slider_window_g2_ParamLimits

0x78ef,	// (0x00012c47) popup_vtel_slider_window_g2

0x0003,

0xfa1a,	// (0x0001ad72) popup_vtel_slider_window_g_ParamLimits

0xfa1a,	// (0x0001ad72) popup_vtel_slider_window_g

0x7943,	// (0x00012c9b) vtel_slider_pane_ParamLimits

0x7943,	// (0x00012c9b) vtel_slider_pane

0x7965,	// (0x00012cbd) vtel_slider_pane_g1_ParamLimits

0x7965,	// (0x00012cbd) vtel_slider_pane_g1

0x7979,	// (0x00012cd1) vtel_slider_pane_g2_ParamLimits

0x7979,	// (0x00012cd1) vtel_slider_pane_g2

0x7991,	// (0x00012ce9) vtel_slider_pane_g3_ParamLimits

0x7991,	// (0x00012ce9) vtel_slider_pane_g3

0x7965,	// (0x00012cbd) vtel_slider_pane_g4_ParamLimits

0x7965,	// (0x00012cbd) vtel_slider_pane_g4

0x79a7,	// (0x00012cff) vtel_slider_pane_g5_ParamLimits

0x79a7,	// (0x00012cff) vtel_slider_pane_g5

0x0004,

0xfa23,	// (0x0001ad7b) vtel_slider_pane_g_ParamLimits

0xfa23,	// (0x0001ad7b) vtel_slider_pane_g

0x9ef5,	// (0x0001524d) main_gallery2_pane

0x705e,	// (0x000123b6) aid_size_row_itut2_dropdow_list_ParamLimits

0x705e,	// (0x000123b6) aid_size_row_itut2_dropdow_list

0x70c8,	// (0x00012420) grid_vitu2_function_top_pane_ParamLimits

0x70c8,	// (0x00012420) grid_vitu2_function_top_pane

0x710b,	// (0x00012463) popup_vitu2_dropdown_list_window_ParamLimits

0x710b,	// (0x00012463) popup_vitu2_dropdown_list_window

0x712a,	// (0x00012482) popup_vitu2_match_list_window

0x79bd,	// (0x00012d15) cell_vitu2_function_top_pane_ParamLimits

0x79bd,	// (0x00012d15) cell_vitu2_function_top_pane

0x79dd,	// (0x00012d35) cell_vitu2_function_top_pane_cp01_ParamLimits

0x79dd,	// (0x00012d35) cell_vitu2_function_top_pane_cp01

0x79fd,	// (0x00012d55) cell_vitu2_function_top_wide_pane_ParamLimits

0x79fd,	// (0x00012d55) cell_vitu2_function_top_wide_pane

0x9f48,	// (0x000152a0) bg_button_pane_cp012

0x7a1b,	// (0x00012d73) cell_vitu2_function_top_pane_g1

0xde86,	// (0x000191de) bg_button_pane_cp013_ParamLimits

0xde86,	// (0x000191de) bg_button_pane_cp013

0x7a2f,	// (0x00012d87) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x7a2f,	// (0x00012d87) cell_vitu2_function_top_wide_pane_g1

0x9f48,	// (0x000152a0) bg_popup_sub_pane_cp20

0x7a47,	// (0x00012d9f) list_vitu2_match_list_pane

0xdc11,	// (0x00018f69) bg_popup_sub_pane_cp20_g1

0xdc19,	// (0x00018f71) bg_popup_sub_pane_cp20_g2

0xac81,	// (0x00015fd9) bg_popup_sub_pane_cp20_g3

0xdc21,	// (0x00018f79) bg_popup_sub_pane_cp20_g4

0xac61,	// (0x00015fb9) bg_popup_sub_pane_cp20_g5

0xdea2,	// (0x000191fa) bg_popup_sub_pane_cp20_g6

0xdc31,	// (0x00018f89) bg_popup_sub_pane_cp20_g7

0xdc39,	// (0x00018f91) bg_popup_sub_pane_cp20_g8

0xdc41,	// (0x00018f99) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa2e,	// (0x0001ad86) bg_popup_sub_pane_cp20_g

0xdeaa,	// (0x00019202) list_vitu2_match_list_item_pane_ParamLimits

0xdeaa,	// (0x00019202) list_vitu2_match_list_item_pane

0xdebc,	// (0x00019214) list_vitu2_match_list_item_pane_t1

0x9ef5,	// (0x0001524d) bg_popup_sub_pane_cp21

0xb18a,	// (0x000164e2) grid_vitu2_dropdown_list_pane

0x7a91,	// (0x00012de9) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x7a91,	// (0x00012de9) cell_vitu2_dropdown_list_char_pane

0x7ab2,	// (0x00012e0a) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x7ab2,	// (0x00012e0a) cell_vitu2_dropdown_list_ctrl_pane

0xdeca,	// (0x00019222) cell_vitu2_dropdown_list_char_pane_g1

0xded3,	// (0x0001922b) cell_vitu2_dropdown_list_char_pane_g2

0xdedc,	// (0x00019234) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa4b,	// (0x0001ada3) cell_vitu2_dropdown_list_char_pane_g

0x7ade,	// (0x00012e36) cell_vitu2_dropdown_list_char_pane_t1

0x7aec,	// (0x00012e44) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x7aec,	// (0x00012e44) cell_vitu2_dropdown_list_ctrl_pane_g1

0x7af9,	// (0x00012e51) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x7af9,	// (0x00012e51) cell_vitu2_dropdown_list_ctrl_pane_g2

0x7b06,	// (0x00012e5e) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x7b06,	// (0x00012e5e) cell_vitu2_dropdown_list_ctrl_pane_g3

0x7b13,	// (0x00012e6b) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x7b13,	// (0x00012e6b) cell_vitu2_dropdown_list_ctrl_pane_g4

0xd168,	// (0x000184c0) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xd168,	// (0x000184c0) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa52,	// (0x0001adaa) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa52,	// (0x0001adaa) cell_vitu2_dropdown_list_ctrl_pane_g

0x7b2f,	// (0x00012e87) aid_size_cell_gallery2_ParamLimits

0x7b2f,	// (0x00012e87) aid_size_cell_gallery2

0x7b45,	// (0x00012e9d) grid_gallery2_pane_ParamLimits

0x7b45,	// (0x00012e9d) grid_gallery2_pane

0x7b57,	// (0x00012eaf) scroll_pane_cp029_ParamLimits

0x7b57,	// (0x00012eaf) scroll_pane_cp029

0x7b63,	// (0x00012ebb) cell_gallery2_pane_ParamLimits

0x7b63,	// (0x00012ebb) cell_gallery2_pane

0xdee5,	// (0x0001923d) cell_gallery2_pane_g2

0x7b95,	// (0x00012eed) cell_gallery2_pane_g3

0xdeef,	// (0x00019247) cell_gallery2_pane_g4

0xdef7,	// (0x0001924f) cell_gallery2_pane_g5

0xb520,	// (0x00016878) grid_highlight_pane_cp10

0x712a,	// (0x00012482) popup_vitu2_match_list_window_ParamLimits

0x713b,	// (0x00012493) popup_vitu2_query_window_ParamLimits

0x713b,	// (0x00012493) popup_vitu2_query_window

0x9ef5,	// (0x0001524d) bg_vitu2_candi_button_pane

0xdeca,	// (0x00019222) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xded3,	// (0x0001922b) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xdedc,	// (0x00019234) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x7b9d,	// (0x00012ef5) bg_button_pane_cp015

0x7ba5,	// (0x00012efd) bg_button_pane_cp016

0x7bae,	// (0x00012f06) bg_button_pane_cp017

0x9f48,	// (0x000152a0) bg_popup_sub_pane_cp22

0xdeff,	// (0x00019257) popup_vitu2_query_window_g1

0x7bd4,	// (0x00012f2c) popup_vitu2_query_window_g2

0x0001,

0xfa5d,	// (0x0001adb5) popup_vitu2_query_window_g

0x7be0,	// (0x00012f38) popup_vitu2_query_window_t1_ParamLimits

0x7be0,	// (0x00012f38) popup_vitu2_query_window_t1

0x7c08,	// (0x00012f60) popup_vitu2_query_window_t2_ParamLimits

0x7c08,	// (0x00012f60) popup_vitu2_query_window_t2

0x7c1a,	// (0x00012f72) popup_vitu2_query_window_t3_ParamLimits

0x7c1a,	// (0x00012f72) popup_vitu2_query_window_t3

0x7c42,	// (0x00012f9a) popup_vitu2_query_window_t4_ParamLimits

0x7c42,	// (0x00012f9a) popup_vitu2_query_window_t4

0x7c54,	// (0x00012fac) popup_vitu2_query_window_t5_ParamLimits

0x7c54,	// (0x00012fac) popup_vitu2_query_window_t5

0x0004,

0xfa62,	// (0x0001adba) popup_vitu2_query_window_t_ParamLimits

0xfa62,	// (0x0001adba) popup_vitu2_query_window_t

0xdcff,	// (0x00019057) main_cset_text_pane

0x760f,	// (0x00012967) aid_area_touch_slider_ParamLimits

0x762b,	// (0x00012983) cset_slider_pane_ParamLimits

0x7655,	// (0x000129ad) main_cset_slider_pane_g1_ParamLimits

0x766a,	// (0x000129c2) main_cset_slider_pane_g2_ParamLimits

0xdd20,	// (0x00019078) main_cset_slider_pane_g3_ParamLimits

0xdd20,	// (0x00019078) main_cset_slider_pane_g3

0x767f,	// (0x000129d7) main_cset_slider_pane_g4_ParamLimits

0x767f,	// (0x000129d7) main_cset_slider_pane_g4

0x768e,	// (0x000129e6) main_cset_slider_pane_g5_ParamLimits

0x768e,	// (0x000129e6) main_cset_slider_pane_g5

0x769a,	// (0x000129f2) main_cset_slider_pane_g6_ParamLimits

0x769a,	// (0x000129f2) main_cset_slider_pane_g6

0xf9b7,	// (0x0001ad0f) main_cset_slider_pane_g_ParamLimits

0xdd50,	// (0x000190a8) main_cset_slider_pane_t1_ParamLimits

0x7726,	// (0x00012a7e) main_cset_slider_pane_t2_ParamLimits

0x7740,	// (0x00012a98) main_cset_slider_pane_t3_ParamLimits

0x775a,	// (0x00012ab2) main_cset_slider_pane_t4_ParamLimits

0x7774,	// (0x00012acc) main_cset_slider_pane_t5_ParamLimits

0x778e,	// (0x00012ae6) main_cset_slider_pane_t6_ParamLimits

0x77a3,	// (0x00012afb) main_cset_slider_pane_t7_ParamLimits

0x77cd,	// (0x00012b25) main_cset_slider_pane_t8_ParamLimits

0x77cd,	// (0x00012b25) main_cset_slider_pane_t8

0x77f5,	// (0x00012b4d) main_cset_slider_pane_t9_ParamLimits

0x77f5,	// (0x00012b4d) main_cset_slider_pane_t9

0x781d,	// (0x00012b75) main_cset_slider_pane_t10_ParamLimits

0x781d,	// (0x00012b75) main_cset_slider_pane_t10

0x7845,	// (0x00012b9d) main_cset_slider_pane_t11_ParamLimits

0x7845,	// (0x00012b9d) main_cset_slider_pane_t11

0x786d,	// (0x00012bc5) main_cset_slider_pane_t12_ParamLimits

0x786d,	// (0x00012bc5) main_cset_slider_pane_t12

0x788a,	// (0x00012be2) main_cset_slider_pane_t13_ParamLimits

0x788a,	// (0x00012be2) main_cset_slider_pane_t13

0xf9dc,	// (0x0001ad34) main_cset_slider_pane_t_ParamLimits

0x9ef5,	// (0x0001524d) bg_popup_sub_pane_cp011

0xdf0b,	// (0x00019263) main_cset_text_pane_g1

0xdf13,	// (0x0001926b) main_cset_text_pane_t1

0xdf21,	// (0x00019279) main_cset_text_pane_t2

0xdf2f,	// (0x00019287) main_cset_text_pane_t3

0xdf3d,	// (0x00019295) main_cset_text_pane_t4

0xdf4b,	// (0x000192a3) main_cset_text_pane_t5

0xdf59,	// (0x000192b1) main_cset_text_pane_t6

0xdf67,	// (0x000192bf) main_cset_text_pane_t7

0x0006,

0xfa6d,	// (0x0001adc5) main_cset_text_pane_t

0x9ef5,	// (0x0001524d) main_cam4_burst_pane

0x9ef5,	// (0x0001524d) main_cam5_pane

0x755d,	// (0x000128b5) bg_button_pane_cp019

0x7566,	// (0x000128be) bg_button_pane_cp020

0xdd2c,	// (0x00019084) main_cset_slider_pane_g7_ParamLimits

0xdd2c,	// (0x00019084) main_cset_slider_pane_g7

0xdd38,	// (0x00019090) main_cset_slider_pane_g8_ParamLimits

0xdd38,	// (0x00019090) main_cset_slider_pane_g8

0x76ae,	// (0x00012a06) main_cset_slider_pane_g9_ParamLimits

0x76ae,	// (0x00012a06) main_cset_slider_pane_g9

0x76ba,	// (0x00012a12) main_cset_slider_pane_g10_ParamLimits

0x76ba,	// (0x00012a12) main_cset_slider_pane_g10

0x76c6,	// (0x00012a1e) main_cset_slider_pane_g11_ParamLimits

0x76c6,	// (0x00012a1e) main_cset_slider_pane_g11

0x76d2,	// (0x00012a2a) main_cset_slider_pane_g12_ParamLimits

0x76d2,	// (0x00012a2a) main_cset_slider_pane_g12

0x76de,	// (0x00012a36) main_cset_slider_pane_g13_ParamLimits

0x76de,	// (0x00012a36) main_cset_slider_pane_g13

0x76ea,	// (0x00012a42) main_cset_slider_pane_g14_ParamLimits

0x76ea,	// (0x00012a42) main_cset_slider_pane_g14

0x76f6,	// (0x00012a4e) main_cset_slider_pane_g15_ParamLimits

0x76f6,	// (0x00012a4e) main_cset_slider_pane_g15

0xdd7e,	// (0x000190d6) main_cset_slider_pane_t14_ParamLimits

0xdd7e,	// (0x000190d6) main_cset_slider_pane_t14

0xddb7,	// (0x0001910f) main_cset_slider_pane_t15_ParamLimits

0xddb7,	// (0x0001910f) main_cset_slider_pane_t15

0x7c66,	// (0x00012fbe) aid_cam4_burst_size_cell_ParamLimits

0x7c66,	// (0x00012fbe) aid_cam4_burst_size_cell

0x7c86,	// (0x00012fde) grid_cam4_burst_pane_ParamLimits

0x7c86,	// (0x00012fde) grid_cam4_burst_pane

0x7cac,	// (0x00013004) linegrid_cam4_burst_pane_ParamLimits

0x7cac,	// (0x00013004) linegrid_cam4_burst_pane

0x7cce,	// (0x00013026) scroll_pane_cp30_ParamLimits

0x7cce,	// (0x00013026) scroll_pane_cp30

0x7cda,	// (0x00013032) cell_cam4_burst_pane_ParamLimits

0x7cda,	// (0x00013032) cell_cam4_burst_pane

0xdf75,	// (0x000192cd) linegrid_cam4_burst_pane_g1_ParamLimits

0xdf75,	// (0x000192cd) linegrid_cam4_burst_pane_g1

0x7d21,	// (0x00013079) linegrid_cam4_burst_pane_g2_ParamLimits

0x7d21,	// (0x00013079) linegrid_cam4_burst_pane_g2

0xdf82,	// (0x000192da) linegrid_cam4_burst_pane_g3_ParamLimits

0xdf82,	// (0x000192da) linegrid_cam4_burst_pane_g3

0x0002,

0xfa7c,	// (0x0001add4) linegrid_cam4_burst_pane_g_ParamLimits

0xfa7c,	// (0x0001add4) linegrid_cam4_burst_pane_g

0x7d32,	// (0x0001308a) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x7d32,	// (0x0001308a) linegrid_cam4_burst_pane_g3_copy1

0xdf8f,	// (0x000192e7) linegrid_cam4_burst_pane_g4_ParamLimits

0xdf8f,	// (0x000192e7) linegrid_cam4_burst_pane_g4

0x7d4c,	// (0x000130a4) linegrid_cam4_burst_pane_g5_ParamLimits

0x7d4c,	// (0x000130a4) linegrid_cam4_burst_pane_g5

0x7d5d,	// (0x000130b5) linegrid_cam4_burst_pane_g6_ParamLimits

0x7d5d,	// (0x000130b5) linegrid_cam4_burst_pane_g6

0xdf9c,	// (0x000192f4) linegrid_cam4_burst_pane_g7_ParamLimits

0xdf9c,	// (0x000192f4) linegrid_cam4_burst_pane_g7

0x7d6e,	// (0x000130c6) cell_cam4_burst_pane_g1

0xdfb5,	// (0x0001930d) main_cam5_pane_t1_ParamLimits

0xdfb5,	// (0x0001930d) main_cam5_pane_t1

0xdfc7,	// (0x0001931f) main_cam5_pane_t2_ParamLimits

0xdfc7,	// (0x0001931f) main_cam5_pane_t2

0xdfd9,	// (0x00019331) main_cam5_pane_t3_ParamLimits

0xdfd9,	// (0x00019331) main_cam5_pane_t3

0xdfeb,	// (0x00019343) main_cam5_pane_t4_ParamLimits

0xdfeb,	// (0x00019343) main_cam5_pane_t4

0xe001,	// (0x00019359) main_cam5_pane_t5_ParamLimits

0xe001,	// (0x00019359) main_cam5_pane_t5

0xe013,	// (0x0001936b) main_cam5_pane_t6_ParamLimits

0xe013,	// (0x0001936b) main_cam5_pane_t6

0xe025,	// (0x0001937d) main_cam5_pane_t7_ParamLimits

0xe025,	// (0x0001937d) main_cam5_pane_t7

0xe037,	// (0x0001938f) main_cam5_pane_t8_ParamLimits

0xe037,	// (0x0001938f) main_cam5_pane_t8

0xe053,	// (0x000193ab) main_cam5_pane_t9_ParamLimits

0xe053,	// (0x000193ab) main_cam5_pane_t9

0xe065,	// (0x000193bd) main_cam5_pane_t10_ParamLimits

0xe065,	// (0x000193bd) main_cam5_pane_t10

0xe077,	// (0x000193cf) main_cam5_pane_t11_ParamLimits

0xe077,	// (0x000193cf) main_cam5_pane_t11

0xe089,	// (0x000193e1) main_cam5_pane_t12_ParamLimits

0xe089,	// (0x000193e1) main_cam5_pane_t12

0xe09e,	// (0x000193f6) main_cam5_pane_t13_ParamLimits

0xe09e,	// (0x000193f6) main_cam5_pane_t13

0x000c,

0xfa88,	// (0x0001ade0) main_cam5_pane_t_ParamLimits

0xfa88,	// (0x0001ade0) main_cam5_pane_t

0x2552,	// (0x0000d8aa) popup_scut_keymap_window_ParamLimits

0x2552,	// (0x0000d8aa) popup_scut_keymap_window

0x7d83,	// (0x000130db) aid_size_cell_brow_shortcut

0xb520,	// (0x00016878) bg_popup_window_pane_cp010

0x7d8f,	// (0x000130e7) grid_scut_pane

0x7d99,	// (0x000130f1) cell_scut_pane_ParamLimits

0x7d99,	// (0x000130f1) cell_scut_pane

0x7dae,	// (0x00013106) cell_scut_pane_g1

0xe0bb,	// (0x00019413) cell_scut_pane_t1

0xe0ca,	// (0x00019422) cell_scut_pane_t2

0x7db7,	// (0x0001310f) cell_scut_pane_t3

0x0002,

0xfaa3,	// (0x0001adfb) cell_scut_pane_t

0x5cd2,	// (0x0001102a) main_mup3_pane_g8_ParamLimits

0x5cd2,	// (0x0001102a) main_mup3_pane_g8

0x7072,	// (0x000123ca) area_vitu2_query_pane_ParamLimits

0x7072,	// (0x000123ca) area_vitu2_query_pane

0x7bb7,	// (0x00012f0f) input_focus_pane_cp08

0xe0d9,	// (0x00019431) area_vitu2_query_pane_g1

0x7dc5,	// (0x0001311d) area_vitu2_query_pane_g2

0x0001,

0xfaaa,	// (0x0001ae02) area_vitu2_query_pane_g

0x7dd4,	// (0x0001312c) area_vitu2_query_pane_t1_ParamLimits

0x7dd4,	// (0x0001312c) area_vitu2_query_pane_t1

0x7de6,	// (0x0001313e) area_vitu2_query_pane_t2_ParamLimits

0x7de6,	// (0x0001313e) area_vitu2_query_pane_t2

0x7df8,	// (0x00013150) area_vitu2_query_pane_t3_ParamLimits

0x7df8,	// (0x00013150) area_vitu2_query_pane_t3

0xe0e5,	// (0x0001943d) area_vitu2_query_pane_t4_ParamLimits

0xe0e5,	// (0x0001943d) area_vitu2_query_pane_t4

0xe10d,	// (0x00019465) area_vitu2_query_pane_t5_ParamLimits

0xe10d,	// (0x00019465) area_vitu2_query_pane_t5

0xe135,	// (0x0001948d) area_vitu2_query_pane_t6_ParamLimits

0xe135,	// (0x0001948d) area_vitu2_query_pane_t6

0x0006,

0xfaaf,	// (0x0001ae07) area_vitu2_query_pane_t_ParamLimits

0xfaaf,	// (0x0001ae07) area_vitu2_query_pane_t

0x7e20,	// (0x00013178) bg_button_pane_cp018

0x7e2d,	// (0x00013185) bg_button_pane_cp021

0x7e39,	// (0x00013191) bg_button_pane_cp022

0x7e48,	// (0x000131a0) input_focus_pane_cp09

0x40ee,	// (0x0000f446) aid_size_touch_mv_arrow_left

0xb3f9,	// (0x00016751) aid_size_touch_mv_arrow_right

0x770e,	// (0x00012a66) main_cset_slider_pane_g16_ParamLimits

0x770e,	// (0x00012a66) main_cset_slider_pane_g16

0x771a,	// (0x00012a72) main_cset_slider_pane_g17_ParamLimits

0x771a,	// (0x00012a72) main_cset_slider_pane_g17

0x7d6e,	// (0x000130c6) cell_cam4_burst_pane_g1_ParamLimits

0x9ef5,	// (0x0001524d) compa_mode_pane

0x78ff,	// (0x00012c57) popup_vtel_slider_window_g3_ParamLimits

0x78ff,	// (0x00012c57) popup_vtel_slider_window_g3

0x7916,	// (0x00012c6e) popup_vtel_slider_window_g4_ParamLimits

0x7916,	// (0x00012c6e) popup_vtel_slider_window_g4

0x792d,	// (0x00012c85) popup_vtel_slider_window_t1_ParamLimits

0x792d,	// (0x00012c85) popup_vtel_slider_window_t1

0x9ef5,	// (0x0001524d) main_cl_pane

0xca3c,	// (0x00017d94) popup_imed_adjust2_window_ParamLimits

0xca16,	// (0x00017d6e) bg_tb_trans_pane_cp05_ParamLimits

0xd402,	// (0x0001875a) popup_imed_adjust2_window_g1_ParamLimits

0xd411,	// (0x00018769) popup_imed_adjust2_window_g2_ParamLimits

0xd411,	// (0x00018769) popup_imed_adjust2_window_g2

0xd41d,	// (0x00018775) popup_imed_adjust2_window_g3_ParamLimits

0xd41d,	// (0x00018775) popup_imed_adjust2_window_g3

0x0002,

0xf820,	// (0x0001ab78) popup_imed_adjust2_window_g_ParamLimits

0xf820,	// (0x0001ab78) popup_imed_adjust2_window_g

0xd429,	// (0x00018781) popup_imed_adjust2_window_t1_ParamLimits

0xd441,	// (0x00018799) slider_imed_adjust_pane_ParamLimits

0xd455,	// (0x000187ad) slider_imed_adjust_pane_g1_ParamLimits

0xd465,	// (0x000187bd) slider_imed_adjust_pane_g2_ParamLimits

0xd475,	// (0x000187cd) slider_imed_adjust_pane_g3_ParamLimits

0xd486,	// (0x000187de) slider_imed_adjust_pane_g4_ParamLimits

0xf827,	// (0x0001ab7f) slider_imed_adjust_pane_g_ParamLimits

0x6de5,	// (0x0001213d) aid_touch_area_cam4_ParamLimits

0x6de5,	// (0x0001213d) aid_touch_area_cam4

0xdb39,	// (0x00018e91) battery_pane_cp01

0x6e7d,	// (0x000121d5) main_camera4_pane_g6_ParamLimits

0x6e7d,	// (0x000121d5) main_camera4_pane_g6

0x6e9e,	// (0x000121f6) main_camera4_pane_t2_ParamLimits

0x6e9e,	// (0x000121f6) main_camera4_pane_t2

0x0001,

0xf92a,	// (0x0001ac82) main_camera4_pane_t_ParamLimits

0xf92a,	// (0x0001ac82) main_camera4_pane_t

0x6ede,	// (0x00012236) aid_touch_area_vid4_ParamLimits

0x6ede,	// (0x00012236) aid_touch_area_vid4

0x6f20,	// (0x00012278) main_video4_pane_g5_ParamLimits

0x6f20,	// (0x00012278) main_video4_pane_g5

0x6f41,	// (0x00012299) vid4_progress_pane_ParamLimits

0x6f41,	// (0x00012299) vid4_progress_pane

0xdd44,	// (0x0001909c) main_cset_slider_pane_g18_ParamLimits

0xdd44,	// (0x0001909c) main_cset_slider_pane_g18

0xdfa9,	// (0x00019301) cell_cam4_burst_pane_g2_ParamLimits

0xdfa9,	// (0x00019301) cell_cam4_burst_pane_g2

0x0001,

0xfa83,	// (0x0001addb) cell_cam4_burst_pane_g_ParamLimits

0xfa83,	// (0x0001addb) cell_cam4_burst_pane_g

0xa6b3,	// (0x00015a0b) bg_cl_pane_ParamLimits

0xa6b3,	// (0x00015a0b) bg_cl_pane

0x7e57,	// (0x000131af) cl_header_pane_ParamLimits

0x7e57,	// (0x000131af) cl_header_pane

0x7e6b,	// (0x000131c3) cl_listscroll_pane_ParamLimits

0x7e6b,	// (0x000131c3) cl_listscroll_pane

0xe181,	// (0x000194d9) bg_cl_pane_g1

0xe189,	// (0x000194e1) bg_cl_pane_g2

0xe191,	// (0x000194e9) bg_cl_pane_g3

0xe199,	// (0x000194f1) bg_cl_pane_g4

0xe1a1,	// (0x000194f9) bg_cl_pane_g5

0xe1a9,	// (0x00019501) bg_cl_pane_g6

0xe1b1,	// (0x00019509) bg_cl_pane_g7

0xe1b9,	// (0x00019511) bg_cl_pane_g8

0xe1c1,	// (0x00019519) bg_cl_pane_g9

0x0008,

0xfabe,	// (0x0001ae16) bg_cl_pane_g

0x7e7b,	// (0x000131d3) aid_height_cl_leading_ParamLimits

0x7e7b,	// (0x000131d3) aid_height_cl_leading

0x7e87,	// (0x000131df) aid_height_cl_text_ParamLimits

0x7e87,	// (0x000131df) aid_height_cl_text

0x9f48,	// (0x000152a0) bg_cl_header_pane_ParamLimits

0x9f48,	// (0x000152a0) bg_cl_header_pane

0x7ea6,	// (0x000131fe) cl_header_pane_g1_ParamLimits

0x7ea6,	// (0x000131fe) cl_header_pane_g1

0x7ebc,	// (0x00013214) cl_header_pane_t1_ParamLimits

0x7ebc,	// (0x00013214) cl_header_pane_t1

0xe1c9,	// (0x00019521) cl_list_pane

0xe1d2,	// (0x0001952a) hc_scroll_pane_cp01

0xac61,	// (0x00015fb9) bg_cl_header_pane_g1

0xdc11,	// (0x00018f69) bg_cl_header_pane_g2

0xac81,	// (0x00015fd9) bg_cl_header_pane_g3

0xdc21,	// (0x00018f79) bg_cl_header_pane_g4

0xdc19,	// (0x00018f71) bg_cl_header_pane_g5

0xdea2,	// (0x000191fa) bg_cl_header_pane_g6

0xdc39,	// (0x00018f91) bg_cl_header_pane_g7

0xdc41,	// (0x00018f99) bg_cl_header_pane_g8

0xdc31,	// (0x00018f89) bg_cl_header_pane_g9

0x0008,

0xfad1,	// (0x0001ae29) bg_cl_header_pane_g

0x7ed5,	// (0x0001322d) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x7ed5,	// (0x0001322d) hc_cl_list_double_graphic_heading_pane

0x7ee5,	// (0x0001323d) hc_cl_list_single_graphic_pane_ParamLimits

0x7ee5,	// (0x0001323d) hc_cl_list_single_graphic_pane

0x7ef8,	// (0x00013250) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x7ef8,	// (0x00013250) hc_cl_list_single_graphic_pane_g1

0x7f04,	// (0x0001325c) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x7f04,	// (0x0001325c) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfae4,	// (0x0001ae3c) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfae4,	// (0x0001ae3c) hc_cl_list_single_graphic_pane_g

0x7f18,	// (0x00013270) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x7f18,	// (0x00013270) hc_cl_list_single_graphic_pane_t1

0x7ef8,	// (0x00013250) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x7ef8,	// (0x00013250) hc_cl_list_double_graphic_heading_pane_g1

0x7f2d,	// (0x00013285) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x7f2d,	// (0x00013285) hc_cl_list_double_graphic_heading_pane_g2

0x7f41,	// (0x00013299) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x7f41,	// (0x00013299) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfae9,	// (0x0001ae41) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfae9,	// (0x0001ae41) hc_cl_list_double_graphic_heading_pane_g

0x7f55,	// (0x000132ad) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x7f55,	// (0x000132ad) hc_cl_list_double_graphic_heading_pane_t1

0x7f6a,	// (0x000132c2) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x7f6a,	// (0x000132c2) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfaf0,	// (0x0001ae48) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfaf0,	// (0x0001ae48) hc_cl_list_double_graphic_heading_pane_t

0xe1db,	// (0x00019533) vid4_progress_pane_g1

0xe1ea,	// (0x00019542) vid4_progress_pane_g2

0xe1f9,	// (0x00019551) vid4_progress_pane_g3

0xe208,	// (0x00019560) vid4_progress_pane_g4

0x0004,

0xfaf5,	// (0x0001ae4d) vid4_progress_pane_g

0xe214,	// (0x0001956c) vid4_progress_pane_t1

0xe22a,	// (0x00019582) vid4_progress_pane_t2

0x0002,

0xfb00,	// (0x0001ae58) vid4_progress_pane_t

0xe254,	// (0x000195ac) wait_bar_pane_cp07

0xcd06,	// (0x0001805e) blid_firmament_pane_ParamLimits

0xcd47,	// (0x0001809f) popup_blid_sat_info2_window_g1

0xcd6b,	// (0x000180c3) popup_blid_sat_info2_window_t3

0xcd79,	// (0x000180d1) popup_blid_sat_info2_window_t4

0xcd87,	// (0x000180df) popup_blid_sat_info2_window_t5

0xcd95,	// (0x000180ed) popup_blid_sat_info2_window_t6

0xcda5,	// (0x000180fd) popup_blid_sat_info2_window_t7

0xcdb3,	// (0x0001810b) popup_blid_sat_info2_window_t8

0xcdc1,	// (0x00018119) popup_blid_sat_info2_window_t9

0xcdcf,	// (0x00018127) popup_blid_sat_info2_window_t10

0xce8b,	// (0x000181e3) aid_firma_cardinal_ParamLimits

0xce9f,	// (0x000181f7) blid_firmament_pane_t1_ParamLimits

0xceb6,	// (0x0001820e) blid_firmament_pane_t2_ParamLimits

0xcecd,	// (0x00018225) blid_firmament_pane_t3_ParamLimits

0xcee4,	// (0x0001823c) blid_firmament_pane_t4_ParamLimits

0xf719,	// (0x0001aa71) blid_firmament_pane_t_ParamLimits

0xcefb,	// (0x00018253) blid_sat_info_pane_ParamLimits

0x9f48,	// (0x000152a0) main_cam_set_pane_ParamLimits

0x6529,	// (0x00011881) aid_size_cell_colour_35_ParamLimits

0x6549,	// (0x000118a1) aid_size_cell_colour_112_ParamLimits

0x6569,	// (0x000118c1) aid_size_cell_effect_ParamLimits

0xca16,	// (0x00017d6e) bg_tb_trans_pane_cp02_ParamLimits

0xaf06,	// (0x0001625e) heading_imed_pane_ParamLimits

0x6589,	// (0x000118e1) listscroll_imed_pane_ParamLimits

0xc008,	// (0x00017360) popup_call2_audio_first_window_g5_ParamLimits

0xc008,	// (0x00017360) popup_call2_audio_first_window_g5

0x6aa6,	// (0x00011dfe) aid_size_touch_image3_arrow_left_ParamLimits

0x6aa6,	// (0x00011dfe) aid_size_touch_image3_arrow_left

0x6ac6,	// (0x00011e1e) aid_size_touch_image3_arrow_right_ParamLimits

0x6ac6,	// (0x00011e1e) aid_size_touch_image3_arrow_right

0xe23f,	// (0x00019597) vid4_progress_pane_t3

0x685d,	// (0x00011bb5) main_hwr_training_symbol_option_pane_ParamLimits

0x685d,	// (0x00011bb5) main_hwr_training_symbol_option_pane

0xd6e1,	// (0x00018a39) popup_hwr_training_preview_window_ParamLimits

0xd6e1,	// (0x00018a39) popup_hwr_training_preview_window

0x6879,	// (0x00011bd1) hwr_training_navi_pane_g5_ParamLimits

0x6879,	// (0x00011bd1) hwr_training_navi_pane_g5

0xdbff,	// (0x00018f57) popup_char_count_window

0x9f48,	// (0x000152a0) bg_popup_sub_pane_cp20_ParamLimits

0x7a47,	// (0x00012d9f) list_vitu2_match_list_pane_ParamLimits

0x7a56,	// (0x00012dae) vitu2_page_scroll_pane_ParamLimits

0x7a56,	// (0x00012dae) vitu2_page_scroll_pane

0xe2f0,	// (0x00019648) list_single_hwr_training_symbol_option_pane_ParamLimits

0xe2f0,	// (0x00019648) list_single_hwr_training_symbol_option_pane

0xe303,	// (0x0001965b) list_single_hwr_training_symbol_option_pane_g1

0xe30b,	// (0x00019663) list_single_hwr_training_symbol_option_pane_t1

0xe319,	// (0x00019671) bg_button_pane_cp023

0xe322,	// (0x0001967a) bg_button_pane_cp024

0x7f7f,	// (0x000132d7) vitu2_page_scroll_pane_g1

0x7f87,	// (0x000132df) vitu2_page_scroll_pane_g2

0x0001,

0xfb07,	// (0x0001ae5f) vitu2_page_scroll_pane_g

0x7f8f,	// (0x000132e7) vitu2_page_scroll_pane_t1

0xcc22,	// (0x00017f7a) popup_char_count_window_g1

0xe355,	// (0x000196ad) popup_char_count_window_g2

0xe35e,	// (0x000196b6) popup_char_count_window_g3

0x0002,

0xfb0c,	// (0x0001ae64) popup_char_count_window_g

0xe367,	// (0x000196bf) popup_char_count_window_t1

0x9ef5,	// (0x0001524d) main_vded2_pane

0xd3f0,	// (0x00018748) aid_size_cell_imed_line

0xd3fa,	// (0x00018752) grid_imed_line_width_pane

0x6fc2,	// (0x0001231a) vid4_indicators_pane_g4

0xe375,	// (0x000196cd) cell_imed_line_width_pane_ParamLimits

0xe375,	// (0x000196cd) cell_imed_line_width_pane

0xe387,	// (0x000196df) cell_imed_line_width_pane_g1

0xe390,	// (0x000196e8) cell_imed_line_width_pane_g2

0x0001,

0xfb13,	// (0x0001ae6b) cell_imed_line_width_pane_g

0x7f9e,	// (0x000132f6) main_vded2_pane_g1_ParamLimits

0x7f9e,	// (0x000132f6) main_vded2_pane_g1

0x7fb4,	// (0x0001330c) main_vded2_pane_g2_ParamLimits

0x7fb4,	// (0x0001330c) main_vded2_pane_g2

0x0001,

0xfb18,	// (0x0001ae70) main_vded2_pane_g_ParamLimits

0xfb18,	// (0x0001ae70) main_vded2_pane_g

0x7fc4,	// (0x0001331c) vded2_slider_pane_ParamLimits

0x7fc4,	// (0x0001331c) vded2_slider_pane

0x7fd7,	// (0x0001332f) aid_size_touch_vded2_end

0x7fdf,	// (0x00013337) aid_size_touch_vded2_playhead

0x7fe7,	// (0x0001333f) aid_size_touch_vded2_start

0x7fef,	// (0x00013347) vded2_slider_bg_pane

0x7ff8,	// (0x00013350) vded2_slider_pane_g1

0x8001,	// (0x00013359) vded2_slider_pane_g2

0x8009,	// (0x00013361) vded2_slider_pane_g3

0x0002,

0xfb1d,	// (0x0001ae75) vded2_slider_pane_g

0x8012,	// (0x0001336a) vded2_slider_bg_pane_g1

0x801b,	// (0x00013373) vded2_slider_bg_pane_g2

0x8024,	// (0x0001337c) vded2_slider_bg_pane_g3

0x0002,

0xfb24,	// (0x0001ae7c) vded2_slider_bg_pane_g

0x4600,	// (0x0000f958) aid_postcard_touch_down_pane_ParamLimits

0x4600,	// (0x0000f958) aid_postcard_touch_down_pane

0x4612,	// (0x0000f96a) aid_postcard_touch_up_pane_ParamLimits

0x4612,	// (0x0000f96a) aid_postcard_touch_up_pane

0x9ef5,	// (0x0001524d) main_blid2_pane

0xca24,	// (0x00017d7c) popup_blid2_search_window

0x9ef5,	// (0x0001524d) blid2_gps_pane

0x9ef5,	// (0x0001524d) blid2_navig_pane

0x9ef5,	// (0x0001524d) blid2_search_pane

0x9ef5,	// (0x0001524d) blid2_tripm_pane

0x802d,	// (0x00013385) blid2_search_pane_g1_ParamLimits

0x802d,	// (0x00013385) blid2_search_pane_g1

0x8041,	// (0x00013399) blid2_search_pane_t1_ParamLimits

0x8041,	// (0x00013399) blid2_search_pane_t1

0x8053,	// (0x000133ab) aid_size_cell_blid2_gps_ParamLimits

0x8053,	// (0x000133ab) aid_size_cell_blid2_gps

0x806b,	// (0x000133c3) blid2_gps_pane_g1_ParamLimits

0x806b,	// (0x000133c3) blid2_gps_pane_g1

0x807f,	// (0x000133d7) grid_blid2_satellite_pane_ParamLimits

0x807f,	// (0x000133d7) grid_blid2_satellite_pane

0x8093,	// (0x000133eb) blid2_navig_pane_g1_ParamLimits

0x8093,	// (0x000133eb) blid2_navig_pane_g1

0x809f,	// (0x000133f7) blid2_navig_pane_t1_ParamLimits

0x809f,	// (0x000133f7) blid2_navig_pane_t1

0x80b8,	// (0x00013410) blid2_navig_pane_t2_ParamLimits

0x80b8,	// (0x00013410) blid2_navig_pane_t2

0x0001,

0xfb2b,	// (0x0001ae83) blid2_navig_pane_t_ParamLimits

0xfb2b,	// (0x0001ae83) blid2_navig_pane_t

0x80d1,	// (0x00013429) blid2_navig_ring_pane_ParamLimits

0x80d1,	// (0x00013429) blid2_navig_ring_pane

0x80e6,	// (0x0001343e) blid2_speed_pane_ParamLimits

0x80e6,	// (0x0001343e) blid2_speed_pane

0x80f2,	// (0x0001344a) blid2_tripm_pane_g1_ParamLimits

0x80f2,	// (0x0001344a) blid2_tripm_pane_g1

0x8107,	// (0x0001345f) blid2_tripm_pane_g2_ParamLimits

0x8107,	// (0x0001345f) blid2_tripm_pane_g2

0x811b,	// (0x00013473) blid2_tripm_pane_g3_ParamLimits

0x811b,	// (0x00013473) blid2_tripm_pane_g3

0x812f,	// (0x00013487) blid2_tripm_pane_g4_ParamLimits

0x812f,	// (0x00013487) blid2_tripm_pane_g4

0x8143,	// (0x0001349b) blid2_tripm_pane_g5_ParamLimits

0x8143,	// (0x0001349b) blid2_tripm_pane_g5

0x0005,

0xfb30,	// (0x0001ae88) blid2_tripm_pane_g_ParamLimits

0xfb30,	// (0x0001ae88) blid2_tripm_pane_g

0x8165,	// (0x000134bd) blid2_tripm_pane_t1_ParamLimits

0x8165,	// (0x000134bd) blid2_tripm_pane_t1

0x817c,	// (0x000134d4) blid2_tripm_pane_t2_ParamLimits

0x817c,	// (0x000134d4) blid2_tripm_pane_t2

0x8193,	// (0x000134eb) blid2_tripm_pane_t3_ParamLimits

0x8193,	// (0x000134eb) blid2_tripm_pane_t3

0x0003,

0xfb3d,	// (0x0001ae95) blid2_tripm_pane_t_ParamLimits

0xfb3d,	// (0x0001ae95) blid2_tripm_pane_t

0x81d6,	// (0x0001352e) cell_blid2_satellite_pane_ParamLimits

0x81d6,	// (0x0001352e) cell_blid2_satellite_pane

0x81ee,	// (0x00013546) cell_blid2_satellite_pane_g1

0xe398,	// (0x000196f0) cell_blid2_satellite_pane_t1

0xcf0b,	// (0x00018263) blid2_speed_pane_g1

0xe3a6,	// (0x000196fe) blid2_speed_pane_t1

0xe3b4,	// (0x0001970c) blid2_speed_pane_t2

0x0001,

0xfb46,	// (0x0001ae9e) blid2_speed_pane_t

0xcf0b,	// (0x00018263) blid2_navig_ring_pane_g1

0x81f7,	// (0x0001354f) blid2_navig_ring_pane_g2

0x81ff,	// (0x00013557) blid2_navig_ring_pane_g3

0x8207,	// (0x0001355f) blid2_navig_ring_pane_g4

0x820f,	// (0x00013567) blid2_navig_ring_pane_g5

0x0004,

0xfb4b,	// (0x0001aea3) blid2_navig_ring_pane_g

0x9ef5,	// (0x0001524d) bg_popup_window_pane_cp011

0xe3c2,	// (0x0001971a) popup_blid2_search_window_g1

0xe3ca,	// (0x00019722) popup_blid2_search_window_t1

0xe3d8,	// (0x00019730) popup_blid2_search_window_t2

0x0001,

0xfb56,	// (0x0001aeae) popup_blid2_search_window_t

0xab70,	// (0x00015ec8) main_browser_pane_g1

0xa6b3,	// (0x00015a0b) main_browser_pane_ParamLimits

0x9f48,	// (0x000152a0) bg_button_pane_cp011_ParamLimits

0x7337,	// (0x0001268f) cell_vitu2_function_pane_g1_ParamLimits

0x9f48,	// (0x000152a0) bg_popup_sub_pane_cp22_ParamLimits

0x7bb7,	// (0x00012f0f) input_focus_pane_cp08_ParamLimits

0x7bc4,	// (0x00012f1c) popup_vitu2_query_button_pane_ParamLimits

0x7bc4,	// (0x00012f1c) popup_vitu2_query_button_pane

0x7b9d,	// (0x00012ef5) popup_vitu2_query_input_button_pane

0xdeff,	// (0x00019257) popup_vitu2_query_window_g1_ParamLimits

0x7bd4,	// (0x00012f2c) popup_vitu2_query_window_g2_ParamLimits

0xfa5d,	// (0x0001adb5) popup_vitu2_query_window_g_ParamLimits

0x9ef5,	// (0x0001524d) bg_button_pane_cp026

0x8217,	// (0x0001356f) popup_vitu2_query_input_button_pane_g1

0x9ef5,	// (0x0001524d) bg_button_pane_cp025

0xe3e6,	// (0x0001973e) popup_vitu2_query_button_pane_t1

0x5a53,	// (0x00010dab) main_mp3_pane_t6

0x5a61,	// (0x00010db9) popup_slider_window_cp01

0xdb49,	// (0x00018ea1) cam4_battery_pane

0xdb49,	// (0x00018ea1) cam4_battery_pane_cp02

0xdb49,	// (0x00018ea1) cam4_battery_pane_cp01

0xdb49,	// (0x00018ea1) cam4_battery_pane_cp03

0xcf0b,	// (0x00018263) cam4_battery_pane_g1

0xe3f4,	// (0x0001974c) cam4_battery_pane_g2

0x0001,

0xfb5b,	// (0x0001aeb3) cam4_battery_pane_g

0xcddd,	// (0x00018135) popup_blid_sat_info2_window_t11

0x40ee,	// (0x0000f446) aid_size_touch_mv_arrow_left_ParamLimits

0xb3f9,	// (0x00016751) aid_size_touch_mv_arrow_right_ParamLimits

0xb431,	// (0x00016789) navi_pane_g1_ParamLimits

0xb43d,	// (0x00016795) navi_pane_g2_ParamLimits

0x4107,	// (0x0000f45f) navi_pane_g3_ParamLimits

0xf418,	// (0x0001a770) navi_pane_g_ParamLimits

0x412c,	// (0x0000f484) navi_pane_mv_t1_ParamLimits

0x6595,	// (0x000118ed) grid_imed_effect_pane_ParamLimits

0xaaaa,	// (0x00015e02) aid_placing_vt_slider_lsc

0xaab2,	// (0x00015e0a) aid_placing_vt_slider_prt

0x9f48,	// (0x000152a0) bg_tb_trans_pane_cp01_ParamLimits

0xd05a,	// (0x000183b2) popup_image_details_window_g1_ParamLimits

0xd06d,	// (0x000183c5) popup_image_details_window_g2_ParamLimits

0xd082,	// (0x000183da) popup_image_details_window_g3_ParamLimits

0xd082,	// (0x000183da) popup_image_details_window_g3

0xf75e,	// (0x0001aab6) popup_image_details_window_g_ParamLimits

0xd096,	// (0x000183ee) popup_image_details_window_t1_ParamLimits

0xd0a8,	// (0x00018400) popup_image_details_window_t2_ParamLimits

0xd0c1,	// (0x00018419) popup_image_details_window_t3_ParamLimits

0xd103,	// (0x0001845b) popup_image_details_window_t4_ParamLimits

0xd11e,	// (0x00018476) popup_image_details_window_t5_ParamLimits

0xf765,	// (0x0001aabd) popup_image_details_window_t_ParamLimits

0x7e93,	// (0x000131eb) cl_header_name_pane_ParamLimits

0x7e93,	// (0x000131eb) cl_header_name_pane

0x821f,	// (0x00013577) cl_header_name_pane_t1_ParamLimits

0x821f,	// (0x00013577) cl_header_name_pane_t1

0x8240,	// (0x00013598) cl_header_name_pane_t2_ParamLimits

0x8240,	// (0x00013598) cl_header_name_pane_t2

0x8282,	// (0x000135da) cl_header_name_pane_t3_ParamLimits

0x8282,	// (0x000135da) cl_header_name_pane_t3

0x0002,

0xfb60,	// (0x0001aeb8) cl_header_name_pane_t_ParamLimits

0xfb60,	// (0x0001aeb8) cl_header_name_pane_t

0xb4bf,	// (0x00016817) navi_pane_mv_g2_ParamLimits

0xdbbc,	// (0x00018f14) field_vitu2_entry_pane_g1_ParamLimits

0xdbc8,	// (0x00018f20) field_vitu2_entry_pane_g2_ParamLimits

0xdbd4,	// (0x00018f2c) field_vitu2_entry_pane_g3_ParamLimits

0xdbd4,	// (0x00018f2c) field_vitu2_entry_pane_g3

0xf95c,	// (0x0001acb4) field_vitu2_entry_pane_g_ParamLimits

0x71d7,	// (0x0001252f) cell_vitu2_itu_pane_g1_ParamLimits

0x71e7,	// (0x0001253f) cell_vitu2_itu_pane_g2_ParamLimits

0x71e7,	// (0x0001253f) cell_vitu2_itu_pane_g2

0x0001,

0xf968,	// (0x0001acc0) cell_vitu2_itu_pane_g_ParamLimits

0xf968,	// (0x0001acc0) cell_vitu2_itu_pane_g

0x9f48,	// (0x000152a0) bg_vkb2_func_pane_cp05_ParamLimits

0x9f48,	// (0x000152a0) bg_vkb2_func_pane_cp05

0x9f48,	// (0x000152a0) bg_vkb2_func_pane_cp03

0x9f48,	// (0x000152a0) bg_vkb2_func_pane_cp04

0x9f48,	// (0x000152a0) bg_vkb2_func_pane_cp10_ParamLimits

0x9f48,	// (0x000152a0) bg_vkb2_func_pane_cp10

0x7e39,	// (0x00013191) bg_vkb2_func_pane_cp08

0x7e20,	// (0x00013178) bg_vkb2_func_pane_cp06

0x7e2d,	// (0x00013185) bg_vkb2_func_pane_cp07

0xe32b,	// (0x00019683) bg_vkb2_func_pane_cp11_ParamLimits

0xe32b,	// (0x00019683) bg_vkb2_func_pane_cp11

0xe340,	// (0x00019698) bg_vkb2_func_pane_cp12_ParamLimits

0xe340,	// (0x00019698) bg_vkb2_func_pane_cp12

0x9ef5,	// (0x0001524d) bg_vkb2_func_pane_cp09

0xdc11,	// (0x00018f69) bg_vkb2_func_pane_g1

0xac81,	// (0x00015fd9) bg_vkb2_func_pane_g2

0xdc19,	// (0x00018f71) bg_vkb2_func_pane_g3

0xdc21,	// (0x00018f79) bg_vkb2_func_pane_g4

0xdea2,	// (0x000191fa) bg_vkb2_func_pane_g5

0xdc39,	// (0x00018f91) bg_vkb2_func_pane_g6

0xdc41,	// (0x00018f99) bg_vkb2_func_pane_g7

0xdc31,	// (0x00018f89) bg_vkb2_func_pane_g8

0xac61,	// (0x00015fb9) bg_vkb2_func_pane_g9

0x0008,

0xfb67,	// (0x0001aebf) bg_vkb2_func_pane_g

0x8155,	// (0x000134ad) blid2_tripm_pane_g6_ParamLimits

0x8155,	// (0x000134ad) blid2_tripm_pane_g6

0xd9da,	// (0x00018d32) mp4_progress_pane_g1

0x81c4,	// (0x0001351c) blid2_tripm_values_pane_ParamLimits

0x81c4,	// (0x0001351c) blid2_tripm_values_pane

0x82b3,	// (0x0001360b) blid2_tripm_values_pane_t1

0x82c1,	// (0x00013619) blid2_tripm_values_pane_t2

0x82cf,	// (0x00013627) blid2_tripm_values_pane_t3

0x82dd,	// (0x00013635) blid2_tripm_values_pane_t4

0x82eb,	// (0x00013643) blid2_tripm_values_pane_t5

0x82f9,	// (0x00013651) blid2_tripm_values_pane_t6

0x8307,	// (0x0001365f) blid2_tripm_values_pane_t7

0x8315,	// (0x0001366d) blid2_tripm_values_pane_t8

0x8323,	// (0x0001367b) blid2_tripm_values_pane_t9

0x0008,

0xfb7a,	// (0x0001aed2) blid2_tripm_values_pane_t

0x326d,	// (0x0000e5c5) call_video_pane_t1_ParamLimits

0x327f,	// (0x0000e5d7) call_video_pane_t2_ParamLimits

0xf2a1,	// (0x0001a5f9) call_video_pane_t_ParamLimits

0x4576,	// (0x0000f8ce) msg_header_pane_g1_ParamLimits

0xb6c3,	// (0x00016a1b) msg_header_pane_g2_ParamLimits

0xb6c3,	// (0x00016a1b) msg_header_pane_g2

0x0001,

0xf4bb,	// (0x0001a813) msg_header_pane_g_ParamLimits

0xf4bb,	// (0x0001a813) msg_header_pane_g

0xa6b3,	// (0x00015a0b) main_clock2_pane_ParamLimits

0x62d4,	// (0x0001162c) grid_clock2_toolbar_pane_ParamLimits

0x62d4,	// (0x0001162c) grid_clock2_toolbar_pane

0x62d4,	// (0x0001162c) listscroll_clock2_pane_ParamLimits

0x62d4,	// (0x0001162c) listscroll_clock2_pane

0x63a3,	// (0x000116fb) main_clock2_pane_t3_ParamLimits

0x63a3,	// (0x000116fb) main_clock2_pane_t3

0x63bc,	// (0x00011714) main_clock2_pane_t4_ParamLimits

0x63bc,	// (0x00011714) main_clock2_pane_t4

0xe3fe,	// (0x00019756) cell_clock2_toolbar_pane

0xe406,	// (0x0001975e) cell_clock2_toolbar_pane_cp01

0xe406,	// (0x0001975e) cell_clock2_toolbar_pane_cp02

0xe40e,	// (0x00019766) cell_clock2_toolbar_pane_cp03

0xe416,	// (0x0001976e) list_clock2_pane

0xb361,	// (0x000166b9) scroll_pane_cp10

0xe41e,	// (0x00019776) list_single_clock2_pane_ParamLimits

0xe41e,	// (0x00019776) list_single_clock2_pane

0xb520,	// (0x00016878) list_highlight_pane_cp08

0xe42b,	// (0x00019783) list_single_clock2_pane_t1

0xe439,	// (0x00019791) list_single_clock2_pane_t2

0x0001,

0xfb8d,	// (0x0001aee5) list_single_clock2_pane_t

0x9ef5,	// (0x0001524d) bg_button_pane_cp10

0xe447,	// (0x0001979f) cell_clock2_toolbar_pane_g1

0x4594,	// (0x0000f8ec) aid_main_viewer_pane_g1_ParamLimits

0x4594,	// (0x0000f8ec) aid_main_viewer_pane_g1

0x45a0,	// (0x0000f8f8) aid_main_viewer_pane_g2_ParamLimits

0x45a0,	// (0x0000f8f8) aid_main_viewer_pane_g2

0x45ac,	// (0x0000f904) aid_main_viewer_pane_g3_ParamLimits

0x45ac,	// (0x0000f904) aid_main_viewer_pane_g3

0x45bb,	// (0x0000f913) aid_main_viewer_pane_g4_ParamLimits

0x45bb,	// (0x0000f913) aid_main_viewer_pane_g4

0x0003,

0xf4cc,	// (0x0001a824) aid_main_viewer_pane_g_ParamLimits

0xf4cc,	// (0x0001a824) aid_main_viewer_pane_g

0x9f48,	// (0x000152a0) main_calc_pane_ParamLimits

0x4daf,	// (0x00010107) main_dialer2_pane_ParamLimits

0x9ef5,	// (0x0001524d) main_cam6_pane

0x9ef5,	// (0x0001524d) main_vid6_pane

0x62e0,	// (0x00011638) listscroll_gen_pane_cp06_ParamLimits

0x62e0,	// (0x00011638) listscroll_gen_pane_cp06

0x63d5,	// (0x0001172d) main_clock2_pane_t5_ParamLimits

0x63d5,	// (0x0001172d) main_clock2_pane_t5

0x642a,	// (0x00011782) aid_call2_pane_cp10_ParamLimits

0x643c,	// (0x00011794) aid_call_pane_cp10_ParamLimits

0xb3ed,	// (0x00016745) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb3ed,	// (0x00016745) popup_clock_analogue_window_cp10_g2_ParamLimits

0x644e,	// (0x000117a6) popup_clock_analogue_window_cp10_g3_ParamLimits

0x644e,	// (0x000117a6) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb3ed,	// (0x00016745) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf815,	// (0x0001ab6d) popup_clock_analogue_window_cp10_g_ParamLimits

0x6460,	// (0x000117b8) popup_clock_analogue_window_cp10_t1_ParamLimits

0xda3a,	// (0x00018d92) cell_dialer2_keypad_pane_g2_ParamLimits

0xda3a,	// (0x00018d92) cell_dialer2_keypad_pane_g2

0x0001,

0xf8fb,	// (0x0001ac53) cell_dialer2_keypad_pane_g_ParamLimits

0xf8fb,	// (0x0001ac53) cell_dialer2_keypad_pane_g

0x6a6f,	// (0x00011dc7) cell_dialer2_keypad_pane_t1

0x7601,	// (0x00012959) main_cset_text2_pane_ParamLimits

0x7601,	// (0x00012959) main_cset_text2_pane

0xe0d9,	// (0x00019431) area_vitu2_query_pane_g1_ParamLimits

0x7dc5,	// (0x0001311d) area_vitu2_query_pane_g2_ParamLimits

0xfaaa,	// (0x0001ae02) area_vitu2_query_pane_g_ParamLimits

0xe15d,	// (0x000194b5) area_vitu2_query_pane_t7_ParamLimits

0xe15d,	// (0x000194b5) area_vitu2_query_pane_t7

0x7e20,	// (0x00013178) bg_button_pane_cp018_ParamLimits

0x7e2d,	// (0x00013185) bg_button_pane_cp021_ParamLimits

0x7e39,	// (0x00013191) bg_button_pane_cp022_ParamLimits

0x7e39,	// (0x00013191) bg_vkb2_func_pane_cp08_ParamLimits

0x7e20,	// (0x00013178) bg_vkb2_func_pane_cp06_ParamLimits

0x7e2d,	// (0x00013185) bg_vkb2_func_pane_cp07_ParamLimits

0x7e48,	// (0x000131a0) input_focus_pane_cp09_ParamLimits

0xe44f,	// (0x000197a7) cam6_autofocus_pane_ParamLimits

0xe44f,	// (0x000197a7) cam6_autofocus_pane

0x8331,	// (0x00013689) cam6_image_uncrop_pane_ParamLimits

0x8331,	// (0x00013689) cam6_image_uncrop_pane

0x833e,	// (0x00013696) cam6_indi_pane_ParamLimits

0x833e,	// (0x00013696) cam6_indi_pane

0x8354,	// (0x000136ac) cam6_mode_pane_ParamLimits

0x8354,	// (0x000136ac) cam6_mode_pane

0x8366,	// (0x000136be) cam6_timer_pane_ParamLimits

0x8366,	// (0x000136be) cam6_timer_pane

0x8372,	// (0x000136ca) cam6_zoom_pane_ParamLimits

0x8372,	// (0x000136ca) cam6_zoom_pane

0x837e,	// (0x000136d6) cam6_mode_pane_g1_ParamLimits

0x837e,	// (0x000136d6) cam6_mode_pane_g1

0x838e,	// (0x000136e6) cam6_mode_pane_g2_ParamLimits

0x838e,	// (0x000136e6) cam6_mode_pane_g2

0x839e,	// (0x000136f6) cam6_mode_pane_g3_ParamLimits

0x839e,	// (0x000136f6) cam6_mode_pane_g3

0x83ae,	// (0x00013706) cam6_mode_pane_g4_ParamLimits

0x83ae,	// (0x00013706) cam6_mode_pane_g4

0x0003,

0xfb92,	// (0x0001aeea) cam6_mode_pane_g_ParamLimits

0xfb92,	// (0x0001aeea) cam6_mode_pane_g

0xe264,	// (0x000195bc) bg_tb_trans_pane_cp08_ParamLimits

0xe264,	// (0x000195bc) bg_tb_trans_pane_cp08

0xe45b,	// (0x000197b3) cam6_battery_pane_ParamLimits

0xe45b,	// (0x000197b3) cam6_battery_pane

0xe471,	// (0x000197c9) cam6_indi_pane_g1_ParamLimits

0xe471,	// (0x000197c9) cam6_indi_pane_g1

0xe483,	// (0x000197db) cam6_indi_pane_g2_ParamLimits

0xe483,	// (0x000197db) cam6_indi_pane_g2

0xe495,	// (0x000197ed) cam6_indi_pane_g3_ParamLimits

0xe495,	// (0x000197ed) cam6_indi_pane_g3

0x0002,

0xfb9b,	// (0x0001aef3) cam6_indi_pane_g_ParamLimits

0xfb9b,	// (0x0001aef3) cam6_indi_pane_g

0xe4a7,	// (0x000197ff) cam6_indi_pane_t1_ParamLimits

0xe4a7,	// (0x000197ff) cam6_indi_pane_t1

0x6fec,	// (0x00012344) cam6_autofocus_pane_g1

0x6ff4,	// (0x0001234c) cam6_autofocus_pane_g2

0x6ffc,	// (0x00012354) cam6_autofocus_pane_g3

0x7004,	// (0x0001235c) cam6_autofocus_pane_g4

0x0003,

0xfba2,	// (0x0001aefa) cam6_autofocus_pane_g

0xe4cd,	// (0x00019825) cam6_timer_pane_g1

0xe4d5,	// (0x0001982d) cam6_timer_pane_t1

0xe4e3,	// (0x0001983b) cam6_zoom_cont_pane

0xe4eb,	// (0x00019843) cam6_zoom_pane_g1

0xe4f3,	// (0x0001984b) cam6_zoom_pane_g2

0x83be,	// (0x00013716) cam6_zoom_pane_g3

0x0002,

0xfbab,	// (0x0001af03) cam6_zoom_pane_g

0xcf0b,	// (0x00018263) cam6_battery_pane_g1

0xcf0b,	// (0x00018263) cam6_battery_pane_g2

0x0001,

0xf722,	// (0x0001aa7a) cam6_battery_pane_g

0xe4fb,	// (0x00019853) cam6_zoom_cont_pane_g1

0xe504,	// (0x0001985c) cam6_zoom_cont_pane_g2

0xe50d,	// (0x00019865) cam6_zoom_cont_pane_g3

0x0002,

0xfbb2,	// (0x0001af0a) cam6_zoom_cont_pane_g

0x83db,	// (0x00013733) cam6_mode_pane_cp_ParamLimits

0x83db,	// (0x00013733) cam6_mode_pane_cp

0x8372,	// (0x000136ca) cam6_zoom_pane_cp_ParamLimits

0x8372,	// (0x000136ca) cam6_zoom_pane_cp

0x83ed,	// (0x00013745) vid6_image_uncrop_cif_pane_ParamLimits

0x83ed,	// (0x00013745) vid6_image_uncrop_cif_pane

0x83fb,	// (0x00013753) vid6_image_uncrop_nhd_pane_ParamLimits

0x83fb,	// (0x00013753) vid6_image_uncrop_nhd_pane

0x8331,	// (0x00013689) vid6_image_uncrop_vga_pane_ParamLimits

0x8331,	// (0x00013689) vid6_image_uncrop_vga_pane

0x8408,	// (0x00013760) vid6_image_uncrop_wvga_pane_ParamLimits

0x8408,	// (0x00013760) vid6_image_uncrop_wvga_pane

0x8415,	// (0x0001376d) vid6_indi_pane_ParamLimits

0x8415,	// (0x0001376d) vid6_indi_pane

0xe264,	// (0x000195bc) bg_tb_trans_pane_cp09_ParamLimits

0xe264,	// (0x000195bc) bg_tb_trans_pane_cp09

0xe521,	// (0x00019879) cam6_battery_pane_cp_ParamLimits

0xe521,	// (0x00019879) cam6_battery_pane_cp

0xe52d,	// (0x00019885) vid6_indi_pane_g1_ParamLimits

0xe52d,	// (0x00019885) vid6_indi_pane_g1

0xe53f,	// (0x00019897) vid6_indi_pane_g2_ParamLimits

0xe53f,	// (0x00019897) vid6_indi_pane_g2

0xe551,	// (0x000198a9) vid6_indi_pane_g3_ParamLimits

0xe551,	// (0x000198a9) vid6_indi_pane_g3

0xe566,	// (0x000198be) vid6_indi_pane_g4_ParamLimits

0xe566,	// (0x000198be) vid6_indi_pane_g4

0xe57b,	// (0x000198d3) vid6_indi_pane_g5_ParamLimits

0xe57b,	// (0x000198d3) vid6_indi_pane_g5

0x0004,

0xfbb9,	// (0x0001af11) vid6_indi_pane_g_ParamLimits

0xfbb9,	// (0x0001af11) vid6_indi_pane_g

0xe595,	// (0x000198ed) vid6_indi_pane_t1_ParamLimits

0xe595,	// (0x000198ed) vid6_indi_pane_t1

0xe5ab,	// (0x00019903) vid6_indi_pane_t2_ParamLimits

0xe5ab,	// (0x00019903) vid6_indi_pane_t2

0xe5d3,	// (0x0001992b) vid6_indi_pane_t3_ParamLimits

0xe5d3,	// (0x0001992b) vid6_indi_pane_t3

0xe5fb,	// (0x00019953) vid6_indi_pane_t4_ParamLimits

0xe5fb,	// (0x00019953) vid6_indi_pane_t4

0x0003,

0xfbc4,	// (0x0001af1c) vid6_indi_pane_t_ParamLimits

0xfbc4,	// (0x0001af1c) vid6_indi_pane_t

0xe61f,	// (0x00019977) wait_bar_pane_cp08

0x842c,	// (0x00013784) main_cset_text2_pane_t1_ParamLimits

0x842c,	// (0x00013784) main_cset_text2_pane_t1

0x83c6,	// (0x0001371e) listscroll_gen_pane_cp06_t1_ParamLimits

0x83c6,	// (0x0001371e) listscroll_gen_pane_cp06_t1

0x9ef5,	// (0x0001524d) main_cam6_set_pane

0xd168,	// (0x000184c0) bg_tb_trans_pane_cp06_ParamLimits

0xdb51,	// (0x00018ea9) cam4_indicators_pane_g1_ParamLimits

0xdb61,	// (0x00018eb9) cam4_indicators_pane_g2_ParamLimits

0xf938,	// (0x0001ac90) cam4_indicators_pane_g_ParamLimits

0xdb81,	// (0x00018ed9) cam4_indicators_pane_t1_ParamLimits

0xd0d5,	// (0x0001842d) bg_tb_trans_pane_cp07_ParamLimits

0x6f9b,	// (0x000122f3) vid4_indicators_pane_g1_ParamLimits

0x6fa8,	// (0x00012300) vid4_indicators_pane_g2_ParamLimits

0x6fb5,	// (0x0001230d) vid4_indicators_pane_g3_ParamLimits

0x6fc2,	// (0x0001231a) vid4_indicators_pane_g4_ParamLimits

0xf94a,	// (0x0001aca2) vid4_indicators_pane_g_ParamLimits

0x6fda,	// (0x00012332) vid4_indicators_pane_t1_ParamLimits

0xe1db,	// (0x00019533) vid4_progress_pane_g1_ParamLimits

0xe1ea,	// (0x00019542) vid4_progress_pane_g2_ParamLimits

0xe1f9,	// (0x00019551) vid4_progress_pane_g3_ParamLimits

0xe208,	// (0x00019560) vid4_progress_pane_g4_ParamLimits

0xfaf5,	// (0x0001ae4d) vid4_progress_pane_g_ParamLimits

0xe214,	// (0x0001956c) vid4_progress_pane_t1_ParamLimits

0xe22a,	// (0x00019582) vid4_progress_pane_t2_ParamLimits

0xe23f,	// (0x00019597) vid4_progress_pane_t3_ParamLimits

0xfb00,	// (0x0001ae58) vid4_progress_pane_t_ParamLimits

0xe254,	// (0x000195ac) wait_bar_pane_cp07_ParamLimits

0x8446,	// (0x0001379e) main_cam6_set_pane_g2_ParamLimits

0x8446,	// (0x0001379e) main_cam6_set_pane_g2

0x8468,	// (0x000137c0) main_cset6_listscroll_pane_ParamLimits

0x8468,	// (0x000137c0) main_cset6_listscroll_pane

0x8482,	// (0x000137da) main_cset6_slider_pane_ParamLimits

0x8482,	// (0x000137da) main_cset6_slider_pane

0x8498,	// (0x000137f0) main_cset6_text2_pane_ParamLimits

0x8498,	// (0x000137f0) main_cset6_text2_pane

0xe62f,	// (0x00019987) main_cset6_text_pane

0xdd07,	// (0x0001905f) main_cset_list_pane_copy1_ParamLimits

0xdd07,	// (0x0001905f) main_cset_list_pane_copy1

0xdd17,	// (0x0001906f) scroll_pane_cp028_copy1

0x84a6,	// (0x000137fe) cset_list_set_pane_copy1

0x84b8,	// (0x00013810) aid_position_infowindow_above_copy1

0x84c0,	// (0x00013818) aid_position_infowindow_below_copy1

0x84c8,	// (0x00013820) cset_list_set_pane_g1_copy1

0x84d0,	// (0x00013828) cset_list_set_pane_g3_copy1_ParamLimits

0x84d0,	// (0x00013828) cset_list_set_pane_g3_copy1

0x84df,	// (0x00013837) cset_list_set_pane_t1_copy1_ParamLimits

0x84df,	// (0x00013837) cset_list_set_pane_t1_copy1

0x9f48,	// (0x000152a0) list_highlight_pane_cp021_copy1_ParamLimits

0x9f48,	// (0x000152a0) list_highlight_pane_cp021_copy1

0xe637,	// (0x0001998f) cset6_slider_pane_ParamLimits

0xe637,	// (0x0001998f) cset6_slider_pane

0xe663,	// (0x000199bb) main_cset6_slider_pane_g1_ParamLimits

0xe663,	// (0x000199bb) main_cset6_slider_pane_g1

0x84f4,	// (0x0001384c) main_cset6_slider_pane_g2_ParamLimits

0x84f4,	// (0x0001384c) main_cset6_slider_pane_g2

0xdd2c,	// (0x00019084) main_cset6_slider_pane_g3_ParamLimits

0xdd2c,	// (0x00019084) main_cset6_slider_pane_g3

0x76c6,	// (0x00012a1e) main_cset6_slider_pane_g4_ParamLimits

0x76c6,	// (0x00012a1e) main_cset6_slider_pane_g4

0x770e,	// (0x00012a66) main_cset6_slider_pane_g5_ParamLimits

0x770e,	// (0x00012a66) main_cset6_slider_pane_g5

0xdd2c,	// (0x00019084) main_cset6_slider_pane_g7_ParamLimits

0xdd2c,	// (0x00019084) main_cset6_slider_pane_g7

0xdd38,	// (0x00019090) main_cset6_slider_pane_g8_ParamLimits

0xdd38,	// (0x00019090) main_cset6_slider_pane_g8

0x76ae,	// (0x00012a06) main_cset6_slider_pane_g9_ParamLimits

0x76ae,	// (0x00012a06) main_cset6_slider_pane_g9

0x76ba,	// (0x00012a12) main_cset6_slider_pane_g10_ParamLimits

0x76ba,	// (0x00012a12) main_cset6_slider_pane_g10

0x76c6,	// (0x00012a1e) main_cset6_slider_pane_g11_ParamLimits

0x76c6,	// (0x00012a1e) main_cset6_slider_pane_g11

0x76d2,	// (0x00012a2a) main_cset6_slider_pane_g12_ParamLimits

0x76d2,	// (0x00012a2a) main_cset6_slider_pane_g12

0x76de,	// (0x00012a36) main_cset6_slider_pane_g13_ParamLimits

0x76de,	// (0x00012a36) main_cset6_slider_pane_g13

0x76ea,	// (0x00012a42) main_cset6_slider_pane_g14_ParamLimits

0x76ea,	// (0x00012a42) main_cset6_slider_pane_g14

0x851c,	// (0x00013874) main_cset6_slider_pane_g15_ParamLimits

0x851c,	// (0x00013874) main_cset6_slider_pane_g15

0x770e,	// (0x00012a66) main_cset6_slider_pane_g16_ParamLimits

0x770e,	// (0x00012a66) main_cset6_slider_pane_g16

0x771a,	// (0x00012a72) main_cset6_slider_pane_g17_ParamLimits

0x771a,	// (0x00012a72) main_cset6_slider_pane_g17

0x0011,

0xfbcd,	// (0x0001af25) main_cset6_slider_pane_g_ParamLimits

0xfbcd,	// (0x0001af25) main_cset6_slider_pane_g

0xe68b,	// (0x000199e3) main_cset6_slider_pane_t1_ParamLimits

0xe68b,	// (0x000199e3) main_cset6_slider_pane_t1

0xe6cc,	// (0x00019a24) main_cset6_slider_pane_t2_ParamLimits

0xe6cc,	// (0x00019a24) main_cset6_slider_pane_t2

0xe6f7,	// (0x00019a4f) main_cset6_slider_pane_t3_ParamLimits

0xe6f7,	// (0x00019a4f) main_cset6_slider_pane_t3

0x8534,	// (0x0001388c) main_cset6_slider_pane_t4_ParamLimits

0x8534,	// (0x0001388c) main_cset6_slider_pane_t4

0x855f,	// (0x000138b7) main_cset6_slider_pane_t5_ParamLimits

0x855f,	// (0x000138b7) main_cset6_slider_pane_t5

0xe722,	// (0x00019a7a) main_cset6_slider_pane_t7_ParamLimits

0xe722,	// (0x00019a7a) main_cset6_slider_pane_t7

0x858a,	// (0x000138e2) main_cset6_slider_pane_t8_ParamLimits

0x858a,	// (0x000138e2) main_cset6_slider_pane_t8

0x85ae,	// (0x00013906) main_cset6_slider_pane_t9_ParamLimits

0x85ae,	// (0x00013906) main_cset6_slider_pane_t9

0x85d2,	// (0x0001392a) main_cset6_slider_pane_t10_ParamLimits

0x85d2,	// (0x0001392a) main_cset6_slider_pane_t10

0x85f6,	// (0x0001394e) main_cset6_slider_pane_t11_ParamLimits

0x85f6,	// (0x0001394e) main_cset6_slider_pane_t11

0xe758,	// (0x00019ab0) main_cset6_slider_pane_t14_ParamLimits

0xe758,	// (0x00019ab0) main_cset6_slider_pane_t14

0xe791,	// (0x00019ae9) main_cset6_slider_pane_t15_ParamLimits

0xe791,	// (0x00019ae9) main_cset6_slider_pane_t15

0x000b,

0xfbf2,	// (0x0001af4a) main_cset6_slider_pane_t_ParamLimits

0xfbf2,	// (0x0001af4a) main_cset6_slider_pane_t

0xde34,	// (0x0001918c) cset_slider_pane_g1_copy1

0xde3d,	// (0x00019195) cset_slider_pane_g2_copy1

0xde46,	// (0x0001919e) cset_slider_pane_g3_copy1

0x9ef5,	// (0x0001524d) bg_popup_sub_pane_cp011_copy1

0xdf0b,	// (0x00019263) main_cset_text_pane_g1_copy1

0xdf13,	// (0x0001926b) main_cset_text_pane_t1_copy1

0xdf21,	// (0x00019279) main_cset_text_pane_t2_copy1

0xdf2f,	// (0x00019287) main_cset_text_pane_t3_copy1

0xdf3d,	// (0x00019295) main_cset_text_pane_t4_copy1

0xdf4b,	// (0x000192a3) main_cset_text_pane_t5_copy1

0xdf59,	// (0x000192b1) main_cset_text_pane_t6_copy1

0xdf67,	// (0x000192bf) main_cset_text_pane_t7_copy1

0x861a,	// (0x00013972) main_cset_text2_pane_t1_copy1

0x9ef5,	// (0x0001524d) main_ncimui_pane

0x4fbd,	// (0x00010315) popup_query_ncimui_window_ParamLimits

0x4fbd,	// (0x00010315) popup_query_ncimui_window

0xd209,	// (0x00018561) field_cale_ev2_pane_g4_ParamLimits

0xd209,	// (0x00018561) field_cale_ev2_pane_g4

0x6961,	// (0x00011cb9) cell_video_dialer_keypad_pane_g2_ParamLimits

0x6961,	// (0x00011cb9) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8d6,	// (0x0001ac2e) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8d6,	// (0x0001ac2e) cell_video_dialer_keypad_pane_g

0x6979,	// (0x00011cd1) cell_video_dialer_keypad_pane_t1

0x9ef5,	// (0x0001524d) bg_popup_window_pane_cp012

0xb23a,	// (0x00016592) heading_pane_cp06

0xe8b3,	// (0x00019c0b) ncim_query_content_pane

0x9ef5,	// (0x0001524d) bg_popup_heading_pane_cp01

0xe8bb,	// (0x00019c13) ncim_heading_pane_t1

0xe8c9,	// (0x00019c21) ncim_indicator_popup_pane

0xe8db,	// (0x00019c33) ncim_query_button_pane

0xe8ef,	// (0x00019c47) ncim_query_content_pane_t1

0xe901,	// (0x00019c59) ncim_query_content_pane_t2

0x0005,

0xfc31,	// (0x0001af89) ncim_query_content_pane_t

0xe93b,	// (0x00019c93) ncim_query_list_pane

0xe94d,	// (0x00019ca5) ncim_query_popup_pane

0xe8c9,	// (0x00019c21) ncim_indicator_popup_pane_ParamLimits

0x86fa,	// (0x00013a52) ncim_query_content_pane_g1_ParamLimits

0x86fa,	// (0x00013a52) ncim_query_content_pane_g1

0xe8ef,	// (0x00019c47) ncim_query_content_pane_t1_ParamLimits

0xe901,	// (0x00019c59) ncim_query_content_pane_t2_ParamLimits

0x8706,	// (0x00013a5e) ncim_query_content_pane_t3_ParamLimits

0x8706,	// (0x00013a5e) ncim_query_content_pane_t3

0x872e,	// (0x00013a86) ncim_query_content_pane_t4_ParamLimits

0x872e,	// (0x00013a86) ncim_query_content_pane_t4

0x8756,	// (0x00013aae) ncim_query_content_pane_t5_ParamLimits

0x8756,	// (0x00013aae) ncim_query_content_pane_t5

0xe913,	// (0x00019c6b) ncim_query_content_pane_t6_ParamLimits

0xe913,	// (0x00019c6b) ncim_query_content_pane_t6

0xfc31,	// (0x0001af89) ncim_query_content_pane_t_ParamLimits

0xe93b,	// (0x00019c93) ncim_query_list_pane_ParamLimits

0xe94d,	// (0x00019ca5) ncim_query_popup_pane_ParamLimits

0xe961,	// (0x00019cb9) wait_bar_pane_cp04

0x9ef5,	// (0x0001524d) input_focus_pane_cp011

0xe969,	// (0x00019cc1) ncim_query_popup_pane_t1

0xe977,	// (0x00019ccf) ncim_list_query_list_pane_ParamLimits

0xe977,	// (0x00019ccf) ncim_list_query_list_pane

0x9ef5,	// (0x0001524d) bg_button_pane_cp027

0xe98a,	// (0x00019ce2) ncim_query_button_pane_g1

0x9ef5,	// (0x0001524d) list_highlight_pane_cp012

0xe994,	// (0x00019cec) ncim_list_query_list_pane_g1

0xe99c,	// (0x00019cf4) ncim_list_query_list_pane_t1

0xdb71,	// (0x00018ec9) cam4_indicators_pane_g3_ParamLimits

0xdb71,	// (0x00018ec9) cam4_indicators_pane_g3

0x6fce,	// (0x00012326) vid4_indicators_pane_g5_ParamLimits

0x6fce,	// (0x00012326) vid4_indicators_pane_g5

0xaf7d,	// (0x000162d5) vid4_progress_pane_g5_ParamLimits

0xaf7d,	// (0x000162d5) vid4_progress_pane_g5

0x8644,	// (0x0001399c) main_ncimui_pane_g1

0x868a,	// (0x000139e2) ncimui_group_query_pane_ParamLimits

0x868a,	// (0x000139e2) ncimui_group_query_pane

0x86be,	// (0x00013a16) ncimui_list_pane_ParamLimits

0x86be,	// (0x00013a16) ncimui_list_pane

0x86d6,	// (0x00013a2e) ncimui_text_pane_ParamLimits

0x86d6,	// (0x00013a2e) ncimui_text_pane

0x877e,	// (0x00013ad6) ncimui_text_pane_t1_ParamLimits

0x877e,	// (0x00013ad6) ncimui_text_pane_t1

0xe9b3,	// (0x00019d0b) ncimui_list_single_graphic_pane_ParamLimits

0xe9b3,	// (0x00019d0b) ncimui_list_single_graphic_pane

0x87a4,	// (0x00013afc) ncimui_query_pane_ParamLimits

0x87a4,	// (0x00013afc) ncimui_query_pane

0x9ef5,	// (0x0001524d) list_highlight_pane_cp013

0xe9c0,	// (0x00019d18) ncim_list_query_list_pane_t1_copy1

0xe9ce,	// (0x00019d26) ncim_list_single_graphic_pane_g1

0xe9d6,	// (0x00019d2e) ncim_query_button_pane_cp01

0xe9de,	// (0x00019d36) ncim_query_entry_pane_ParamLimits

0xe9de,	// (0x00019d36) ncim_query_entry_pane

0xe9ee,	// (0x00019d46) ncimui_query_pane_g1

0xe9f6,	// (0x00019d4e) ncimui_query_pane_t1_ParamLimits

0xe9f6,	// (0x00019d4e) ncimui_query_pane_t1

0x9ef5,	// (0x0001524d) input_focus_pane_cp012

0xe969,	// (0x00019cc1) ncim_query_entry_pane_t1

0xa6b3,	// (0x00015a0b) main_im_pane_ParamLimits

0x9f48,	// (0x000152a0) main_mobtv_pane_ParamLimits

0x9f48,	// (0x000152a0) main_mobtv_pane

0x76ae,	// (0x00012a06) main_cset6_slider_pane_g18_ParamLimits

0x76ae,	// (0x00012a06) main_cset6_slider_pane_g18

0x76de,	// (0x00012a36) main_cset6_slider_pane_g19_ParamLimits

0x76de,	// (0x00012a36) main_cset6_slider_pane_g19

0xe272,	// (0x000195ca) bg_main_mobtv_pane_ParamLimits

0xe272,	// (0x000195ca) bg_main_mobtv_pane

0x87b4,	// (0x00013b0c) main_mobtv_info_pane

0x87bd,	// (0x00013b15) main_mobtv_loading_pane_ParamLimits

0x87bd,	// (0x00013b15) main_mobtv_loading_pane

0xea0c,	// (0x00019d64) main_mobtv_pg_channel_list_pane

0xea16,	// (0x00019d6e) main_mobtv_pg_hdr_pane

0x87ca,	// (0x00013b22) main_mobtv_programe_curr_pane_ParamLimits

0x87ca,	// (0x00013b22) main_mobtv_programe_curr_pane

0x87d7,	// (0x00013b2f) main_mobtv_programe_next_pane_ParamLimits

0x87d7,	// (0x00013b2f) main_mobtv_programe_next_pane

0xea1f,	// (0x00019d77) popup_mobtv_noti_window

0xcf0b,	// (0x00018263) main_tv_pg_hdr_pane_g1

0xea27,	// (0x00019d7f) main_tv_pg_hdr_pane_g2

0xea2f,	// (0x00019d87) main_tv_pg_hdr_pane_g3

0xea37,	// (0x00019d8f) main_tv_pg_hdr_pane_g4

0xea3f,	// (0x00019d97) main_tv_pg_hdr_pane_g5

0xea47,	// (0x00019d9f) main_tv_pg_hdr_pane_g6

0xea4f,	// (0x00019da7) main_tv_pg_hdr_pane_g7

0xea57,	// (0x00019daf) main_tv_pg_hdr_pane_g8

0xea5f,	// (0x00019db7) main_tv_pg_hdr_pane_g9

0xea67,	// (0x00019dbf) main_tv_pg_hdr_pane_g10

0xea71,	// (0x00019dc9) main_tv_pg_hdr_pane_g11

0x000a,

0xfc3e,	// (0x0001af96) main_tv_pg_hdr_pane_g

0xea7b,	// (0x00019dd3) main_tv_pg_hdr_pane_t1

0xea89,	// (0x00019de1) main_tv_pg_hdr_pane_t2

0xea97,	// (0x00019def) main_tv_pg_hdr_pane_t3

0xeaa5,	// (0x00019dfd) main_tv_pg_hdr_pane_t4

0xeab3,	// (0x00019e0b) main_tv_pg_hdr_pane_t5

0x0004,

0xfc55,	// (0x0001afad) main_tv_pg_hdr_pane_t

0xeac1,	// (0x00019e19) single_mobtv_pg_channel_pane_ParamLimits

0xeac1,	// (0x00019e19) single_mobtv_pg_channel_pane

0xead3,	// (0x00019e2b) single_mobtv_pg_channel_table_pane

0xeadc,	// (0x00019e34) single_mobtv_pg_channel_thumb_pane

0xeae5,	// (0x00019e3d) single_tv_pg_channel_pane_g1

0xeaee,	// (0x00019e46) single_tv_pg_channel_pane_g2

0x0001,

0xfc60,	// (0x0001afb8) single_tv_pg_channel_pane_g

0xd168,	// (0x000184c0) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xd168,	// (0x000184c0) bg_single_mobtv_pg_channel_thumb_pane

0xeaf7,	// (0x00019e4f) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xeaf7,	// (0x00019e4f) single_mobtv_pg_channel_thumb_pane_g1

0xeb05,	// (0x00019e5d) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xeb05,	// (0x00019e5d) single_mobtv_pg_channel_thumb_pane_g2

0xeb11,	// (0x00019e69) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xeb11,	// (0x00019e69) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc65,	// (0x0001afbd) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc65,	// (0x0001afbd) single_mobtv_pg_channel_thumb_pane_g

0xeb1d,	// (0x00019e75) single_mobtv_pg_channel_thumb_pane_t1

0xeb2b,	// (0x00019e83) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc6c,	// (0x0001afc4) single_mobtv_pg_channel_thumb_pane_t

0xcf0b,	// (0x00018263) bg_single_mobtv_pg_channel_table_pane_g1

0xcf0b,	// (0x00018263) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf722,	// (0x0001aa7a) bg_single_mobtv_pg_channel_table_pane_g

0xeb39,	// (0x00019e91) single_mobtv_pg_channel_table_pane_t1

0xeb47,	// (0x00019e9f) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc71,	// (0x0001afc9) single_mobtv_pg_channel_table_pane_t

0x87ec,	// (0x00013b44) main_mobtv_info_pane_g1_ParamLimits

0x87ec,	// (0x00013b44) main_mobtv_info_pane_g1

0x8808,	// (0x00013b60) main_mobtv_info_pane_t1_ParamLimits

0x8808,	// (0x00013b60) main_mobtv_info_pane_t1

0x886e,	// (0x00013bc6) main_mobtv_info_pane_t2_ParamLimits

0x886e,	// (0x00013bc6) main_mobtv_info_pane_t2

0x0002,

0xfc7b,	// (0x0001afd3) main_mobtv_info_pane_t_ParamLimits

0xfc7b,	// (0x0001afd3) main_mobtv_info_pane_t

0x88f1,	// (0x00013c49) wait_bar_pane_cp05

0x8901,	// (0x00013c59) main_mobtv_loading_pane_g1_ParamLimits

0x8901,	// (0x00013c59) main_mobtv_loading_pane_g1

0x8912,	// (0x00013c6a) main_mobtv_loading_pane_g2_ParamLimits

0x8912,	// (0x00013c6a) main_mobtv_loading_pane_g2

0x891e,	// (0x00013c76) main_mobtv_loading_pane_g3_ParamLimits

0x891e,	// (0x00013c76) main_mobtv_loading_pane_g3

0x0002,

0xfc82,	// (0x0001afda) main_mobtv_loading_pane_g_ParamLimits

0xfc82,	// (0x0001afda) main_mobtv_loading_pane_g

0xeb55,	// (0x00019ead) main_mobtv_loading_pane_t1_ParamLimits

0xeb55,	// (0x00019ead) main_mobtv_loading_pane_t1

0xeb6d,	// (0x00019ec5) main_mobtv_loading_pane_t2_ParamLimits

0xeb6d,	// (0x00019ec5) main_mobtv_loading_pane_t2

0x0001,

0xfc89,	// (0x0001afe1) main_mobtv_loading_pane_t_ParamLimits

0xfc89,	// (0x0001afe1) main_mobtv_loading_pane_t

0x892f,	// (0x00013c87) wait_bar_pane_cp06_ParamLimits

0x892f,	// (0x00013c87) wait_bar_pane_cp06

0xeb91,	// (0x00019ee9) main_mobtv_programe_curr_pane_t1

0xeb9f,	// (0x00019ef7) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc8e,	// (0x0001afe6) main_mobtv_programe_curr_pane_t

0xebad,	// (0x00019f05) main_mobtv_programe_next_pane_t1

0xebbb,	// (0x00019f13) main_mobtv_programe_next_pane_t2

0xebc9,	// (0x00019f21) main_mobtv_programe_next_pane_t3

0x0002,

0xfc93,	// (0x0001afeb) main_mobtv_programe_next_pane_t

0x9ef5,	// (0x0001524d) bg_popup_mobtv_noti_window_pane

0xebd7,	// (0x00019f2f) popup_mobtv_noti_window_g1

0xebdf,	// (0x00019f37) popup_mobtv_noti_window_t1

0xebed,	// (0x00019f45) popup_mobtv_noti_window_t2

0x0001,

0xfc9a,	// (0x0001aff2) popup_mobtv_noti_window_t

0xcf0b,	// (0x00018263) bg_popup_mobtv_noti_window_pane_g1

0x9ef5,	// (0x0001524d) sc_clock_pane

0x9ef5,	// (0x0001524d) main_fs_bigclock_pane

0x81ae,	// (0x00013506) blid2_tripm_pane_t4_ParamLimits

0x81ae,	// (0x00013506) blid2_tripm_pane_t4

0x893e,	// (0x00013c96) sc_clock_pane_g1_ParamLimits

0x893e,	// (0x00013c96) sc_clock_pane_g1

0x8950,	// (0x00013ca8) sc_clock_pane_t1_ParamLimits

0x8950,	// (0x00013ca8) sc_clock_pane_t1

0x8972,	// (0x00013cca) sc_clock_pane_t2_ParamLimits

0x8972,	// (0x00013cca) sc_clock_pane_t2

0x8988,	// (0x00013ce0) sc_clock_pane_t3_ParamLimits

0x8988,	// (0x00013ce0) sc_clock_pane_t3

0x0004,

0xfc9f,	// (0x0001aff7) sc_clock_pane_t_ParamLimits

0xfc9f,	// (0x0001aff7) sc_clock_pane_t

0x966b,	// (0x000149c3) main_fs_bigclock_indicator_pane_ParamLimits

0x966b,	// (0x000149c3) main_fs_bigclock_indicator_pane

0xd138,	// (0x00018490) main_fs_bigclock_pane_g1_ParamLimits

0xd138,	// (0x00018490) main_fs_bigclock_pane_g1

0x9677,	// (0x000149cf) main_fs_bigclock_pane_t1_ParamLimits

0x9677,	// (0x000149cf) main_fs_bigclock_pane_t1

0x9689,	// (0x000149e1) main_fs_bigclock_pane_t2_ParamLimits

0x9689,	// (0x000149e1) main_fs_bigclock_pane_t2

0x969b,	// (0x000149f3) main_fs_bigclock_pane_t3_ParamLimits

0x969b,	// (0x000149f3) main_fs_bigclock_pane_t3

0x0002,

0xfe94,	// (0x0001b1ec) main_fs_bigclock_pane_t_ParamLimits

0xfe94,	// (0x0001b1ec) main_fs_bigclock_pane_t

0x0a34,	// (0x0000bd8c) main_fs_bigclock_indicator_pane_g1

0xe8e3,	// (0x00019c3b) ncim_query_content_pane_g2_ParamLimits

0xe8e3,	// (0x00019c3b) ncim_query_content_pane_g2

0x0001,

0xfc2c,	// (0x0001af84) ncim_query_content_pane_g_ParamLimits

0xfc2c,	// (0x0001af84) ncim_query_content_pane_g

0x899d,	// (0x00013cf5) sc_clock_pane_t4_ParamLimits

0x899d,	// (0x00013cf5) sc_clock_pane_t4

0x9f48,	// (0x000152a0) main_radioblah_pane

0xdac3,	// (0x00018e1b) cell_call4_button_pane_t1_copy1_ParamLimits

0xdac3,	// (0x00018e1b) cell_call4_button_pane_t1_copy1

0x864c,	// (0x000139a4) main_ncimui_pane_t1_ParamLimits

0x864c,	// (0x000139a4) main_ncimui_pane_t1

0x865e,	// (0x000139b6) main_ncimui_pane_t2_ParamLimits

0x865e,	// (0x000139b6) main_ncimui_pane_t2

0x0002,

0xfc25,	// (0x0001af7d) main_ncimui_pane_t_ParamLimits

0xfc25,	// (0x0001af7d) main_ncimui_pane_t

0xed17,	// (0x0001a06f) main_radioblah_anim_pane_ParamLimits

0xed17,	// (0x0001a06f) main_radioblah_anim_pane

0xed28,	// (0x0001a080) main_radioblah_info_pane_ParamLimits

0xed28,	// (0x0001a080) main_radioblah_info_pane

0xed3c,	// (0x0001a094) main_radioblah_pane_t1_ParamLimits

0xed3c,	// (0x0001a094) main_radioblah_pane_t1

0xed58,	// (0x0001a0b0) main_radioblah_pane_t2_ParamLimits

0xed58,	// (0x0001a0b0) main_radioblah_pane_t2

0x0003,

0xfcc0,	// (0x0001b018) main_radioblah_pane_t_ParamLimits

0xfcc0,	// (0x0001b018) main_radioblah_pane_t

0x8a34,	// (0x00013d8c) main_radioblah_rocker_ctrl_pane_ParamLimits

0x8a34,	// (0x00013d8c) main_radioblah_rocker_ctrl_pane

0xeda0,	// (0x0001a0f8) main_radioblah_info_pane_t1_ParamLimits

0xeda0,	// (0x0001a0f8) main_radioblah_info_pane_t1

0x8a88,	// (0x00013de0) main_radioblah_info_pane_t2_ParamLimits

0x8a88,	// (0x00013de0) main_radioblah_info_pane_t2

0x0003,

0xfcc9,	// (0x0001b021) main_radioblah_info_pane_t_ParamLimits

0xfcc9,	// (0x0001b021) main_radioblah_info_pane_t

0xcf0b,	// (0x00018263) main_radioblah_rocker_ctrl_pane_g1

0x8b36,	// (0x00013e8e) main_radioblah_rocker_ctrl_pane_g2

0x8b3e,	// (0x00013e96) main_radioblah_rocker_ctrl_pane_g3

0x8b46,	// (0x00013e9e) main_radioblah_rocker_ctrl_pane_g4

0x8b4e,	// (0x00013ea6) main_radioblah_rocker_ctrl_pane_g5

0x8b56,	// (0x00013eae) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcd2,	// (0x0001b02a) main_radioblah_rocker_ctrl_pane_g

0x861a,	// (0x00013972) main_cset_text2_pane_t1_copy1_ParamLimits

0xdb41,	// (0x00018e99) cam4_image_uncrop_qvga_pane

0xdb9b,	// (0x00018ef3) vid4_image_uncrop_qcif_pane

0xe44f,	// (0x000197a7) cam6_image_uncrop_qvga_pane_ParamLimits

0xe44f,	// (0x000197a7) cam6_image_uncrop_qvga_pane

0xe515,	// (0x0001986d) vid6_image_uncrop_qcif_pane_ParamLimits

0xe515,	// (0x0001986d) vid6_image_uncrop_qcif_pane

0x9ef5,	// (0x0001524d) bg_popup_preview_window_pane_cp03

0xe895,	// (0x00019bed) list_cset_text2_pane

0xe89d,	// (0x00019bf5) main_cset6_text2_pane_g1

0xe8a5,	// (0x00019bfd) main_cset6_text2_pane_t1

0x8b5e,	// (0x00013eb6) list_cset_text2_pane_t1_ParamLimits

0x8b5e,	// (0x00013eb6) list_cset_text2_pane_t1

0x9f48,	// (0x000152a0) main_radioblah_pane_ParamLimits

0x88df,	// (0x00013c37) main_mobtv_info_pane_t3_ParamLimits

0x88df,	// (0x00013c37) main_mobtv_info_pane_t3

0x8a22,	// (0x00013d7a) main_radioblah_pane_g1

0x8a5c,	// (0x00013db4) main_radioblah_info_pane_g1

0x8adb,	// (0x00013e33) main_radioblah_info_pane_t3_ParamLimits

0x8adb,	// (0x00013e33) main_radioblah_info_pane_t3

0x3ca0,	// (0x0000eff8) highlight_cell_cale_month_pane_ParamLimits

0x3ca0,	// (0x0000eff8) highlight_cell_cale_month_pane

0x9ef5,	// (0x0001524d) main_phob_fisheye_pane

0xd2b2,	// (0x0001860a) scroll_pane_cp0031_ParamLimits

0xd2b2,	// (0x0001860a) scroll_pane_cp0031

0xe61f,	// (0x00019977) wait_bar_pane_cp08_ParamLimits

0x84a6,	// (0x000137fe) cset_list_set_pane_copy1_ParamLimits

0xedda,	// (0x0001a132) highlight_cell_cale_month_pane_g1

0x8b77,	// (0x00013ecf) highlight_cell_cale_month_pane_t1

0xede2,	// (0x0001a13a) list_gen_pane_cp01

0xdd17,	// (0x0001906f) scroll_pane_01

0x8b85,	// (0x00013edd) list_single_double_fisheye_pane

0x8b8e,	// (0x00013ee6) list_double_fisheye_pane_g1_ParamLimits

0x8b8e,	// (0x00013ee6) list_double_fisheye_pane_g1

0x8b9a,	// (0x00013ef2) list_double_fisheye_pane_g2_ParamLimits

0x8b9a,	// (0x00013ef2) list_double_fisheye_pane_g2

0x8ba6,	// (0x00013efe) list_double_fisheye_pane_g3_ParamLimits

0x8ba6,	// (0x00013efe) list_double_fisheye_pane_g3

0x0004,

0xfcdf,	// (0x0001b037) list_double_fisheye_pane_g_ParamLimits

0xfcdf,	// (0x0001b037) list_double_fisheye_pane_g

0x8bca,	// (0x00013f22) list_double_fisheye_pane_t1_ParamLimits

0x8bca,	// (0x00013f22) list_double_fisheye_pane_t1

0x8be5,	// (0x00013f3d) list_double_fisheye_pane_t2_ParamLimits

0x8be5,	// (0x00013f3d) list_double_fisheye_pane_t2

0x0001,

0xfcea,	// (0x0001b042) list_double_fisheye_pane_t_ParamLimits

0xfcea,	// (0x0001b042) list_double_fisheye_pane_t

0x9ef5,	// (0x0001524d) main_call5_pane

0x89c6,	// (0x00013d1e) sc_swipe_pane_ParamLimits

0x89c6,	// (0x00013d1e) sc_swipe_pane

0x8c18,	// (0x00013f70) call5_image_pane_ParamLimits

0x8c18,	// (0x00013f70) call5_image_pane

0x8c2d,	// (0x00013f85) call5_swipe_1_pane_ParamLimits

0x8c2d,	// (0x00013f85) call5_swipe_1_pane

0x8c3e,	// (0x00013f96) call5_swipe_2_pane_ParamLimits

0x8c3e,	// (0x00013f96) call5_swipe_2_pane

0x8c63,	// (0x00013fbb) popup_call5_audio_first_window_ParamLimits

0x8c63,	// (0x00013fbb) popup_call5_audio_first_window

0xd168,	// (0x000184c0) call5_swipe_1_pane_g1_ParamLimits

0xd168,	// (0x000184c0) call5_swipe_1_pane_g1

0xedeb,	// (0x0001a143) call5_swipe_1_pane_g2_ParamLimits

0xedeb,	// (0x0001a143) call5_swipe_1_pane_g2

0x0001,

0xfcef,	// (0x0001b047) call5_swipe_1_pane_g_ParamLimits

0xfcef,	// (0x0001b047) call5_swipe_1_pane_g

0xedf7,	// (0x0001a14f) call5_swipe_1_pane_t1_ParamLimits

0xedf7,	// (0x0001a14f) call5_swipe_1_pane_t1

0xd168,	// (0x000184c0) call5_swipe_2_pane_g1_ParamLimits

0xd168,	// (0x000184c0) call5_swipe_2_pane_g1

0xee0c,	// (0x0001a164) call5_swipe_2_pane_g2_ParamLimits

0xee0c,	// (0x0001a164) call5_swipe_2_pane_g2

0x0001,

0xfcf4,	// (0x0001b04c) call5_swipe_2_pane_g_ParamLimits

0xfcf4,	// (0x0001b04c) call5_swipe_2_pane_g

0xee18,	// (0x0001a170) call5_swipe_2_pane_t1_ParamLimits

0xee18,	// (0x0001a170) call5_swipe_2_pane_t1

0xee2d,	// (0x0001a185) sc_swipe_pane_g1_ParamLimits

0xee2d,	// (0x0001a185) sc_swipe_pane_g1

0xee3a,	// (0x0001a192) sc_swipe_pane_g2_ParamLimits

0xee3a,	// (0x0001a192) sc_swipe_pane_g2

0x0001,

0xfcf9,	// (0x0001b051) sc_swipe_pane_g_ParamLimits

0xfcf9,	// (0x0001b051) sc_swipe_pane_g

0xee46,	// (0x0001a19e) sc_swipe_pane_t1_ParamLimits

0xee46,	// (0x0001a19e) sc_swipe_pane_t1

0x9ef5,	// (0x0001524d) main_cmail_launcher_pane

0x8c72,	// (0x00013fca) aid_size_cell_cmail_l_ParamLimits

0x8c72,	// (0x00013fca) aid_size_cell_cmail_l

0x8c8b,	// (0x00013fe3) grid_cmail_l_pane_ParamLimits

0x8c8b,	// (0x00013fe3) grid_cmail_l_pane

0x8ca0,	// (0x00013ff8) cell_cmail_l_pane_ParamLimits

0x8ca0,	// (0x00013ff8) cell_cmail_l_pane

0x8cc2,	// (0x0001401a) cell_cmail_l_pane_g1_ParamLimits

0x8cc2,	// (0x0001401a) cell_cmail_l_pane_g1

0x8cd2,	// (0x0001402a) cell_cmail_l_pane_t1_ParamLimits

0x8cd2,	// (0x0001402a) cell_cmail_l_pane_t1

0xee5b,	// (0x0001a1b3) cell_cmail_l_pane_t2_ParamLimits

0xee5b,	// (0x0001a1b3) cell_cmail_l_pane_t2

0x0001,

0xfcfe,	// (0x0001b056) cell_cmail_l_pane_t_ParamLimits

0xfcfe,	// (0x0001b056) cell_cmail_l_pane_t

0x9f48,	// (0x000152a0) grid_highlight_pane_cp018_ParamLimits

0x9f48,	// (0x000152a0) grid_highlight_pane_cp018

0x2462,	// (0x0000d7ba) main2_pane_ParamLimits

0x2462,	// (0x0000d7ba) main2_pane

0xa7b6,	// (0x00015b0e) popup_sp_fs_action_menu_bg_pane_g1

0xa7be,	// (0x00015b16) popup_sp_fs_action_menu_bg_pane_g2

0xa7c6,	// (0x00015b1e) popup_sp_fs_action_menu_bg_pane_g3

0xa7ce,	// (0x00015b26) popup_sp_fs_action_menu_bg_pane_g4

0xa7d6,	// (0x00015b2e) popup_sp_fs_action_menu_bg_pane_g5

0xa7de,	// (0x00015b36) popup_sp_fs_action_menu_bg_pane_g6

0xa7e6,	// (0x00015b3e) popup_sp_fs_action_menu_bg_pane_g7

0xa7ee,	// (0x00015b46) popup_sp_fs_action_menu_bg_pane_g8

0xa7f6,	// (0x00015b4e) popup_sp_fs_action_menu_bg_pane_g9

0xa7fe,	// (0x00015b56) popup_sp_fs_action_menu_bg_pane_g10

0xa7fe,	// (0x00015b56) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1bb,	// (0x0001a513) popup_sp_fs_action_menu_bg_pane_g

0xa9d5,	// (0x00015d2d) list_medium_line_x2_t3_g3_g1_ParamLimits

0xa9d5,	// (0x00015d2d) list_medium_line_x2_t3_g3_g1

0xa9e1,	// (0x00015d39) list_medium_line_x2_t3_g3_g2_ParamLimits

0xa9e1,	// (0x00015d39) list_medium_line_x2_t3_g3_g2

0xa9ed,	// (0x00015d45) list_medium_line_x2_t3_g3_g3_ParamLimits

0xa9ed,	// (0x00015d45) list_medium_line_x2_t3_g3_g3

0x0002,

0xf26b,	// (0x0001a5c3) list_medium_line_x2_t3_g3_g_ParamLimits

0xf26b,	// (0x0001a5c3) list_medium_line_x2_t3_g3_g

0xa9f9,	// (0x00015d51) list_medium_line_x2_t3_g3_t1_ParamLimits

0xa9f9,	// (0x00015d51) list_medium_line_x2_t3_g3_t1

0x319b,	// (0x0000e4f3) list_medium_line_x2_t3_g3_t2_ParamLimits

0x319b,	// (0x0000e4f3) list_medium_line_x2_t3_g3_t2

0xaa0e,	// (0x00015d66) list_medium_line_x2_t3_g3_t3_ParamLimits

0xaa0e,	// (0x00015d66) list_medium_line_x2_t3_g3_t3

0x0002,

0xf272,	// (0x0001a5ca) list_medium_line_x2_t3_g3_t_ParamLimits

0xf272,	// (0x0001a5ca) list_medium_line_x2_t3_g3_t

0xa9d5,	// (0x00015d2d) list_medium_line_x2_t3_g2_g1_ParamLimits

0xa9d5,	// (0x00015d2d) list_medium_line_x2_t3_g2_g1

0xa9ed,	// (0x00015d45) list_medium_line_x2_t3_g2_g2_ParamLimits

0xa9ed,	// (0x00015d45) list_medium_line_x2_t3_g2_g2

0x0001,

0xf279,	// (0x0001a5d1) list_medium_line_x2_t3_g2_g_ParamLimits

0xf279,	// (0x0001a5d1) list_medium_line_x2_t3_g2_g

0xaa23,	// (0x00015d7b) list_medium_line_x2_t3_g2_t1_ParamLimits

0xaa23,	// (0x00015d7b) list_medium_line_x2_t3_g2_t1

0xaa39,	// (0x00015d91) list_medium_line_x2_t3_g2_t2_ParamLimits

0xaa39,	// (0x00015d91) list_medium_line_x2_t3_g2_t2

0xaa0e,	// (0x00015d66) list_medium_line_x2_t3_g2_t3_ParamLimits

0xaa0e,	// (0x00015d66) list_medium_line_x2_t3_g2_t3

0x0002,

0xf27e,	// (0x0001a5d6) list_medium_line_x2_t3_g2_t_ParamLimits

0xf27e,	// (0x0001a5d6) list_medium_line_x2_t3_g2_t

0xa9d5,	// (0x00015d2d) list_medium_line_x2_t4_g4_g1_ParamLimits

0xa9d5,	// (0x00015d2d) list_medium_line_x2_t4_g4_g1

0xaa4b,	// (0x00015da3) list_medium_line_x2_t4_g4_g2_ParamLimits

0xaa4b,	// (0x00015da3) list_medium_line_x2_t4_g4_g2

0xa9e1,	// (0x00015d39) list_medium_line_x2_t4_g4_g3_ParamLimits

0xa9e1,	// (0x00015d39) list_medium_line_x2_t4_g4_g3

0xaa57,	// (0x00015daf) list_medium_line_x2_t4_g4_g4_ParamLimits

0xaa57,	// (0x00015daf) list_medium_line_x2_t4_g4_g4

0x0003,

0xf285,	// (0x0001a5dd) list_medium_line_x2_t4_g4_g_ParamLimits

0xf285,	// (0x0001a5dd) list_medium_line_x2_t4_g4_g

0x31ad,	// (0x0000e505) list_medium_line_x2_t4_g4_t1_ParamLimits

0x31ad,	// (0x0000e505) list_medium_line_x2_t4_g4_t1

0x31c4,	// (0x0000e51c) list_medium_line_x2_t4_g4_t2_ParamLimits

0x31c4,	// (0x0000e51c) list_medium_line_x2_t4_g4_t2

0x31d9,	// (0x0000e531) list_medium_line_x2_t4_g4_t3_ParamLimits

0x31d9,	// (0x0000e531) list_medium_line_x2_t4_g4_t3

0xaa63,	// (0x00015dbb) list_medium_line_x2_t4_g4_t4_ParamLimits

0xaa63,	// (0x00015dbb) list_medium_line_x2_t4_g4_t4

0x0003,

0xf28e,	// (0x0001a5e6) list_medium_line_x2_t4_g4_t_ParamLimits

0xf28e,	// (0x0001a5e6) list_medium_line_x2_t4_g4_t

0xa9d5,	// (0x00015d2d) list_medium_line_x2_t2_g4_g1_ParamLimits

0xa9d5,	// (0x00015d2d) list_medium_line_x2_t2_g4_g1

0xaa4b,	// (0x00015da3) list_medium_line_x2_t2_g4_g2_ParamLimits

0xaa4b,	// (0x00015da3) list_medium_line_x2_t2_g4_g2

0xa9e1,	// (0x00015d39) list_medium_line_x2_t2_g4_g3_ParamLimits

0xa9e1,	// (0x00015d39) list_medium_line_x2_t2_g4_g3

0xa9ed,	// (0x00015d45) list_medium_line_x2_t2_g4_g4_ParamLimits

0xa9ed,	// (0x00015d45) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2f5,	// (0x0001a64d) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2f5,	// (0x0001a64d) list_medium_line_x2_t2_g4_g

0xad63,	// (0x000160bb) list_medium_line_x2_t2_g4_t1_ParamLimits

0xad63,	// (0x000160bb) list_medium_line_x2_t2_g4_t1

0xaa0e,	// (0x00015d66) list_medium_line_x2_t2_g4_t2_ParamLimits

0xaa0e,	// (0x00015d66) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2fe,	// (0x0001a656) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2fe,	// (0x0001a656) list_medium_line_x2_t2_g4_t

0xa9d5,	// (0x00015d2d) list_medium_line_x2_t2_g3_g1_ParamLimits

0xa9d5,	// (0x00015d2d) list_medium_line_x2_t2_g3_g1

0xa9e1,	// (0x00015d39) list_medium_line_x2_t2_g3_g2_ParamLimits

0xa9e1,	// (0x00015d39) list_medium_line_x2_t2_g3_g2

0xa9ed,	// (0x00015d45) list_medium_line_x2_t2_g3_g3_ParamLimits

0xa9ed,	// (0x00015d45) list_medium_line_x2_t2_g3_g3

0x0002,

0xf26b,	// (0x0001a5c3) list_medium_line_x2_t2_g3_g_ParamLimits

0xf26b,	// (0x0001a5c3) list_medium_line_x2_t2_g3_g

0xad78,	// (0x000160d0) list_medium_line_x2_t2_g3_t1_ParamLimits

0xad78,	// (0x000160d0) list_medium_line_x2_t2_g3_t1

0xaa0e,	// (0x00015d66) list_medium_line_x2_t2_g3_t2_ParamLimits

0xaa0e,	// (0x00015d66) list_medium_line_x2_t2_g3_t2

0x0001,

0xf303,	// (0x0001a65b) list_medium_line_x2_t2_g3_t_ParamLimits

0xf303,	// (0x0001a65b) list_medium_line_x2_t2_g3_t

0x3dd8,	// (0x0000f130) main_sp_fs_list_pane_ParamLimits

0x3dd8,	// (0x0000f130) main_sp_fs_list_pane

0x3de5,	// (0x0000f13d) sp_fs_scroll_pane_ParamLimits

0x3de5,	// (0x0000f13d) sp_fs_scroll_pane

0x3df2,	// (0x0000f14a) list_medium_line_x2_t3_t1

0x3e02,	// (0x0000f15a) list_medium_line_x2_t3_t2

0xafd2,	// (0x0001632a) list_medium_line_x2_t3_t3

0x0002,

0xf34e,	// (0x0001a6a6) list_medium_line_x2_t3_t

0x3e10,	// (0x0000f168) list_medium_line_x3_t4_t1

0x3e20,	// (0x0000f178) list_medium_line_x3_t4_t2

0xafe0,	// (0x00016338) list_medium_line_x3_t4_t3

0xafee,	// (0x00016346) list_medium_line_x3_t4_t4

0x0003,

0xf355,	// (0x0001a6ad) list_medium_line_x3_t4_t

0x3e2e,	// (0x0000f186) list_medium_line_x4_t5_t1

0x3e3e,	// (0x0000f196) list_medium_line_x4_t5_t2

0xafe0,	// (0x00016338) list_medium_line_x4_t5_t3

0xaffc,	// (0x00016354) list_medium_line_x4_t5_t4

0xafee,	// (0x00016346) list_medium_line_x4_t5_t5

0x0004,

0xf35e,	// (0x0001a6b6) list_medium_line_x4_t5_t

0xa9d5,	// (0x00015d2d) list_medium_line_t4_g4_g1_ParamLimits

0xa9d5,	// (0x00015d2d) list_medium_line_t4_g4_g1

0xaa57,	// (0x00015daf) list_medium_line_t4_g4_g2_ParamLimits

0xaa57,	// (0x00015daf) list_medium_line_t4_g4_g2

0xb00a,	// (0x00016362) list_medium_line_t4_g4_g3_ParamLimits

0xb00a,	// (0x00016362) list_medium_line_t4_g4_g3

0xa9ed,	// (0x00015d45) list_medium_line_t4_g4_g4_ParamLimits

0xa9ed,	// (0x00015d45) list_medium_line_t4_g4_g4

0x0003,

0xf369,	// (0x0001a6c1) list_medium_line_t4_g4_g_ParamLimits

0xf369,	// (0x0001a6c1) list_medium_line_t4_g4_g

0xb016,	// (0x0001636e) list_medium_line_t4_g4_t1_ParamLimits

0xb016,	// (0x0001636e) list_medium_line_t4_g4_t1

0xb02b,	// (0x00016383) list_medium_line_t4_g4_t2_ParamLimits

0xb02b,	// (0x00016383) list_medium_line_t4_g4_t2

0xb040,	// (0x00016398) list_medium_line_t4_g4_t3_ParamLimits

0xb040,	// (0x00016398) list_medium_line_t4_g4_t3

0xb055,	// (0x000163ad) list_medium_line_t4_g4_t4_ParamLimits

0xb055,	// (0x000163ad) list_medium_line_t4_g4_t4

0x0003,

0xf372,	// (0x0001a6ca) list_medium_line_t4_g4_t_ParamLimits

0xf372,	// (0x0001a6ca) list_medium_line_t4_g4_t

0x3f0d,	// (0x0000f265) chi_dic_find_pane_g1

0x4dc3,	// (0x0001011b) main_tport_pane

0xde78,	// (0x000191d0) list_medium_line_plain_t1

0xa9d5,	// (0x00015d2d) list_medium_line_t2_g2_g1_ParamLimits

0xa9d5,	// (0x00015d2d) list_medium_line_t2_g2_g1

0xa9e1,	// (0x00015d39) list_medium_line_t2_g2_g2_ParamLimits

0xa9e1,	// (0x00015d39) list_medium_line_t2_g2_g2

0x0001,

0xfa41,	// (0x0001ad99) list_medium_line_t2_g2_g_ParamLimits

0xfa41,	// (0x0001ad99) list_medium_line_t2_g2_g

0x7a65,	// (0x00012dbd) list_medium_line_t2_g2_t1_ParamLimits

0x7a65,	// (0x00012dbd) list_medium_line_t2_g2_t1

0x7a7c,	// (0x00012dd4) list_medium_line_t2_g2_t2_ParamLimits

0x7a7c,	// (0x00012dd4) list_medium_line_t2_g2_t2

0x0001,

0xfa46,	// (0x0001ad9e) list_medium_line_t2_g2_t_ParamLimits

0xfa46,	// (0x0001ad9e) list_medium_line_t2_g2_t

0xe296,	// (0x000195ee) aid_sp_fs_list_icon_a_sm

0xe29e,	// (0x000195f6) aid_sp_fs_list_icon_d

0xe2a6,	// (0x000195fe) aid_sp_fs_text_primary

0xe2af,	// (0x00019607) aid_sp_fs_text_secondary

0xe2b8,	// (0x00019610) list_medium_line

0xe2b8,	// (0x00019610) list_medium_line_g2

0xe2b8,	// (0x00019610) list_medium_line_g3

0xe2b8,	// (0x00019610) list_medium_line_plain

0xe2b8,	// (0x00019610) list_medium_line_plain_t2

0xe2b8,	// (0x00019610) list_medium_line_plain_t3

0xe2b8,	// (0x00019610) list_medium_line_right_icon

0xe2b8,	// (0x00019610) list_medium_line_right_iconx2

0xe2b8,	// (0x00019610) list_medium_line_t2

0xe2b8,	// (0x00019610) list_medium_line_t2_g2

0xe2b8,	// (0x00019610) list_medium_line_t2_g3

0xe2b8,	// (0x00019610) list_medium_line_t2_right_icon

0xe2b8,	// (0x00019610) list_medium_line_t2_right_iconx2

0xe2b8,	// (0x00019610) list_medium_line_t3

0xe2b8,	// (0x00019610) list_medium_line_t3_g2

0xe2b8,	// (0x00019610) list_medium_line_t3_g3

0xe2b8,	// (0x00019610) list_medium_line_t3_right_iconx2

0xe2c1,	// (0x00019619) list_medium_line_t4_g4

0xe2ca,	// (0x00019622) list_medium_line_x2

0xe2ca,	// (0x00019622) list_medium_line_x2_t2_g2

0xe2ca,	// (0x00019622) list_medium_line_x2_t2_g3

0xe2ca,	// (0x00019622) list_medium_line_x2_t2_g4

0xe2ca,	// (0x00019622) list_medium_line_x2_t3

0xe2ca,	// (0x00019622) list_medium_line_x2_t3_g2

0xe2ca,	// (0x00019622) list_medium_line_x2_t3_g3

0xe2ca,	// (0x00019622) list_medium_line_x2_t3_g4

0xe2ca,	// (0x00019622) list_medium_line_x2_t4_g2

0xe2ca,	// (0x00019622) list_medium_line_x2_t4_g4

0xe2d3,	// (0x0001962b) list_medium_line_x3

0xe2d3,	// (0x0001962b) list_medium_line_x3_t4

0xe2d3,	// (0x0001962b) list_medium_line_x3_t4_g4

0xe2c1,	// (0x00019619) list_medium_line_x4_t4

0xe2c1,	// (0x00019619) list_medium_line_x4_t4_g7

0xe2c1,	// (0x00019619) list_medium_line_x4_t5

0xe2dc,	// (0x00019634) list_single_fs_dyc_pane_ParamLimits

0xe2dc,	// (0x00019634) list_single_fs_dyc_pane

0xa9d5,	// (0x00015d2d) list_medium_line_x4_t4_g7_g1_ParamLimits

0xa9d5,	// (0x00015d2d) list_medium_line_x4_t4_g7_g1

0xe7ca,	// (0x00019b22) list_medium_line_x4_t4_g7_g2_ParamLimits

0xe7ca,	// (0x00019b22) list_medium_line_x4_t4_g7_g2

0xe7d6,	// (0x00019b2e) list_medium_line_x4_t4_g7_g3_ParamLimits

0xe7d6,	// (0x00019b2e) list_medium_line_x4_t4_g7_g3

0xe7e5,	// (0x00019b3d) list_medium_line_x4_t4_g7_g4_ParamLimits

0xe7e5,	// (0x00019b3d) list_medium_line_x4_t4_g7_g4

0xe7f1,	// (0x00019b49) list_medium_line_x4_t4_g7_g5_ParamLimits

0xe7f1,	// (0x00019b49) list_medium_line_x4_t4_g7_g5

0xe800,	// (0x00019b58) list_medium_line_x4_t4_g7_g6_ParamLimits

0xe800,	// (0x00019b58) list_medium_line_x4_t4_g7_g6

0xe80f,	// (0x00019b67) list_medium_line_x4_t4_g7_g7_ParamLimits

0xe80f,	// (0x00019b67) list_medium_line_x4_t4_g7_g7

0x0006,

0xfc0b,	// (0x0001af63) list_medium_line_x4_t4_g7_g_ParamLimits

0xfc0b,	// (0x0001af63) list_medium_line_x4_t4_g7_g

0xe81b,	// (0x00019b73) list_medium_line_x4_t4_g7_t1_ParamLimits

0xe81b,	// (0x00019b73) list_medium_line_x4_t4_g7_t1

0xe830,	// (0x00019b88) list_medium_line_x4_t4_g7_t2_ParamLimits

0xe830,	// (0x00019b88) list_medium_line_x4_t4_g7_t2

0xe845,	// (0x00019b9d) list_medium_line_x4_t4_g7_t3_ParamLimits

0xe845,	// (0x00019b9d) list_medium_line_x4_t4_g7_t3

0xe85a,	// (0x00019bb2) list_medium_line_x4_t4_g7_t4_ParamLimits

0xe85a,	// (0x00019bb2) list_medium_line_x4_t4_g7_t4

0xe86c,	// (0x00019bc4) list_medium_line_x4_t4_g7_t5_ParamLimits

0xe86c,	// (0x00019bc4) list_medium_line_x4_t4_g7_t5

0x0004,

0xfc1a,	// (0x0001af72) list_medium_line_x4_t4_g7_t_ParamLimits

0xfc1a,	// (0x0001af72) list_medium_line_x4_t4_g7_t

0xe87e,	// (0x00019bd6) list_single_dyc_row_pane_ParamLimits

0xe87e,	// (0x00019bd6) list_single_dyc_row_pane

0x8c07,	// (0x00013f5f) call5_gesture_pane_ParamLimits

0x8c07,	// (0x00013f5f) call5_gesture_pane

0x8c4f,	// (0x00013fa7) call5_windows_pane_ParamLimits

0x8c4f,	// (0x00013fa7) call5_windows_pane

0x8ce8,	// (0x00014040) call5_swipe_1_pane_cp_ParamLimits

0x8ce8,	// (0x00014040) call5_swipe_1_pane_cp

0x8cf4,	// (0x0001404c) call5_swipe_2_pane_cp_ParamLimits

0x8cf4,	// (0x0001404c) call5_swipe_2_pane_cp

0xb520,	// (0x00016878) call5_image_pane_cp

0x8d00,	// (0x00014058) popup_call5_audio_first_window_cp_ParamLimits

0x8d00,	// (0x00014058) popup_call5_audio_first_window_cp

0xee2d,	// (0x0001a185) call5_swipe_1_pane_g1_cp_ParamLimits

0xee2d,	// (0x0001a185) call5_swipe_1_pane_g1_cp

0xee6d,	// (0x0001a1c5) call5_swipe_1_pane_g2_cp

0xee46,	// (0x0001a19e) call5_swipe_1_pane_t1_cp_ParamLimits

0xee46,	// (0x0001a19e) call5_swipe_1_pane_t1_cp

0xee2d,	// (0x0001a185) call5_swipe_2_pane_g1_cp_ParamLimits

0xee2d,	// (0x0001a185) call5_swipe_2_pane_g1_cp

0xee75,	// (0x0001a1cd) call5_swipe_2_pane_g2_cp

0xee7d,	// (0x0001a1d5) call5_swipe_2_pane_t1_cp_ParamLimits

0xee7d,	// (0x0001a1d5) call5_swipe_2_pane_t1_cp

0x9f48,	// (0x000152a0) main_sp_fs_email_pane

0xee92,	// (0x0001a1ea) main_sp_fs_listscroll_pane_te

0x8d0c,	// (0x00014064) popup_sp_fs_action_menu_pane_ParamLimits

0x8d0c,	// (0x00014064) popup_sp_fs_action_menu_pane

0xcf0b,	// (0x00018263) bg_sp_fs_ctrlbar_pane_g1

0xee9b,	// (0x0001a1f3) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xeea4,	// (0x0001a1fc) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xeead,	// (0x0001a205) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcf0b,	// (0x00018263) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfd03,	// (0x0001b05b) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xccf8,	// (0x00018050) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xccf8,	// (0x00018050) bg_sp_fs_ctrlbar_ddmenu_pane

0xeeb6,	// (0x0001a20e) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xeeb6,	// (0x0001a20e) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xa9d5,	// (0x00015d2d) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xa9d5,	// (0x00015d2d) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfd0c,	// (0x0001b064) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfd0c,	// (0x0001b064) main_sp_fs_ctrlbar_ddmenu_pane_g

0xeec2,	// (0x0001a21a) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xeec2,	// (0x0001a21a) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xeedc,	// (0x0001a234) list_medium_line_t2_right_icon_g1

0xef52,	// (0x0001a2aa) list_medium_line_t2_right_icon_t1

0x8d3c,	// (0x00014094) list_medium_line_t2_right_icon_t2

0x0001,

0xfd11,	// (0x0001b069) list_medium_line_t2_right_icon_t

0xca16,	// (0x00017d6e) bg_sp_fs_ctrlbar_pane_ParamLimits

0xca16,	// (0x00017d6e) bg_sp_fs_ctrlbar_pane

0x8d93,	// (0x000140eb) main_sp_fs_ctrlbar_button_pane_cp01

0x8d9b,	// (0x000140f3) main_sp_fs_ctrlbar_ddmenu_pane

0xef1c,	// (0x0001a274) main_sp_fs_ctrlbar_pane_g1

0xef28,	// (0x0001a280) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfd16,	// (0x0001b06e) main_sp_fs_ctrlbar_pane_g

0xef34,	// (0x0001a28c) main_sp_fs_ctrlbar_pane_t1

0x8da5,	// (0x000140fd) main_sp_fs_ctrlbar_pane

0x8dc6,	// (0x0001411e) main_sp_fs_listscroll_pane_te_cp01

0x8de6,	// (0x0001413e) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x8de6,	// (0x0001413e) popup_sp_fs_action_menu_pane_cp01

0x9f48,	// (0x000152a0) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x9f48,	// (0x000152a0) bg_sp_fs_highlight_list_pane_cp01

0x8e05,	// (0x0001415d) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x8e05,	// (0x0001415d) sp_fs_action_menu_list_gene_pane_g1

0xef62,	// (0x0001a2ba) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xef62,	// (0x0001a2ba) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfd1b,	// (0x0001b073) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfd1b,	// (0x0001b073) sp_fs_action_menu_list_gene_pane_g

0x8e14,	// (0x0001416c) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x8e14,	// (0x0001416c) sp_fs_action_menu_list_gene_pane_t1

0x8e2c,	// (0x00014184) sp_fs_action_menu_list_gene_pane_ParamLimits

0x8e2c,	// (0x00014184) sp_fs_action_menu_list_gene_pane

0xef6f,	// (0x0001a2c7) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xef6f,	// (0x0001a2c7) popup_sp_fs_action_menu_bg_pane

0x8e49,	// (0x000141a1) sp_fs_action_menu_list_pane_ParamLimits

0x8e49,	// (0x000141a1) sp_fs_action_menu_list_pane

0xef7d,	// (0x0001a2d5) sp_fs_scroll_pane_cp01_ParamLimits

0xef7d,	// (0x0001a2d5) sp_fs_scroll_pane_cp01

0x8e65,	// (0x000141bd) list_medium_line_plain_t2_t1

0x8e75,	// (0x000141cd) list_medium_line_plain_t2_t2

0x0001,

0xfd20,	// (0x0001b078) list_medium_line_plain_t2_t

0x8e83,	// (0x000141db) list_medium_line_plain_t3_t1

0x8e93,	// (0x000141eb) list_medium_line_plain_t3_t2

0x8ea1,	// (0x000141f9) list_medium_line_plain_t3_t3

0x0002,

0xfd25,	// (0x0001b07d) list_medium_line_plain_t3_t

0xa9d5,	// (0x00015d2d) list_medium_line_x2_t2_g2_g1_ParamLimits

0xa9d5,	// (0x00015d2d) list_medium_line_x2_t2_g2_g1

0xa9ed,	// (0x00015d45) list_medium_line_x2_t2_g2_g2_ParamLimits

0xa9ed,	// (0x00015d45) list_medium_line_x2_t2_g2_g2

0x0001,

0xf279,	// (0x0001a5d1) list_medium_line_x2_t2_g2_g_ParamLimits

0xf279,	// (0x0001a5d1) list_medium_line_x2_t2_g2_g

0xb016,	// (0x0001636e) list_medium_line_x2_t2_g2_t1_ParamLimits

0xb016,	// (0x0001636e) list_medium_line_x2_t2_g2_t1

0xaa0e,	// (0x00015d66) list_medium_line_x2_t2_g2_t2_ParamLimits

0xaa0e,	// (0x00015d66) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd2c,	// (0x0001b084) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd2c,	// (0x0001b084) list_medium_line_x2_t2_g2_t

0xa9d5,	// (0x00015d2d) list_medium_line_x2_t4_g2_g1_ParamLimits

0xa9d5,	// (0x00015d2d) list_medium_line_x2_t4_g2_g1

0xa9ed,	// (0x00015d45) list_medium_line_x2_t4_g2_g2_ParamLimits

0xa9ed,	// (0x00015d45) list_medium_line_x2_t4_g2_g2

0x0001,

0xf279,	// (0x0001a5d1) list_medium_line_x2_t4_g2_g_ParamLimits

0xf279,	// (0x0001a5d1) list_medium_line_x2_t4_g2_g

0x8eaf,	// (0x00014207) list_medium_line_x2_t4_g2_t1_ParamLimits

0x8eaf,	// (0x00014207) list_medium_line_x2_t4_g2_t1

0x8ec9,	// (0x00014221) list_medium_line_x2_t4_g2_t2_ParamLimits

0x8ec9,	// (0x00014221) list_medium_line_x2_t4_g2_t2

0x8ede,	// (0x00014236) list_medium_line_x2_t4_g2_t3_ParamLimits

0x8ede,	// (0x00014236) list_medium_line_x2_t4_g2_t3

0xaa0e,	// (0x00015d66) list_medium_line_x2_t4_g2_t4_ParamLimits

0xaa0e,	// (0x00015d66) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd31,	// (0x0001b089) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd31,	// (0x0001b089) list_medium_line_x2_t4_g2_t

0xefa3,	// (0x0001a2fb) list_medium_line_t3_right_iconx2_g1

0xeedc,	// (0x0001a234) list_medium_line_t3_right_iconx2_g2

0x8ef3,	// (0x0001424b) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd3a,	// (0x0001b092) list_medium_line_t3_right_iconx2_g

0x8efb,	// (0x00014253) list_medium_line_t3_right_iconx2_t1

0x8f0b,	// (0x00014263) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd41,	// (0x0001b099) list_medium_line_t3_right_iconx2_t

0xa9d5,	// (0x00015d2d) list_medium_line_x3_t4_g4_g1_ParamLimits

0xa9d5,	// (0x00015d2d) list_medium_line_x3_t4_g4_g1

0xa9e1,	// (0x00015d39) list_medium_line_x3_t4_g4_g2_ParamLimits

0xa9e1,	// (0x00015d39) list_medium_line_x3_t4_g4_g2

0xaa57,	// (0x00015daf) list_medium_line_x3_t4_g4_g3_ParamLimits

0xaa57,	// (0x00015daf) list_medium_line_x3_t4_g4_g3

0xefab,	// (0x0001a303) list_medium_line_x3_t4_g4_g4_ParamLimits

0xefab,	// (0x0001a303) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd46,	// (0x0001b09e) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd46,	// (0x0001b09e) list_medium_line_x3_t4_g4_g

0x7a65,	// (0x00012dbd) list_medium_line_x3_t4_g4_t1_ParamLimits

0x7a65,	// (0x00012dbd) list_medium_line_x3_t4_g4_t1

0x7a7c,	// (0x00012dd4) list_medium_line_x3_t4_g4_t2_ParamLimits

0x7a7c,	// (0x00012dd4) list_medium_line_x3_t4_g4_t2

0xb02b,	// (0x00016383) list_medium_line_x3_t4_g4_t3_ParamLimits

0xb02b,	// (0x00016383) list_medium_line_x3_t4_g4_t3

0xefb7,	// (0x0001a30f) list_medium_line_x3_t4_g4_t4_ParamLimits

0xefb7,	// (0x0001a30f) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd4f,	// (0x0001b0a7) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd4f,	// (0x0001b0a7) list_medium_line_x3_t4_g4_t

0x8f19,	// (0x00014271) list_single_dyc_row_text_pane_t1_ParamLimits

0x8f19,	// (0x00014271) list_single_dyc_row_text_pane_t1

0x8f50,	// (0x000142a8) list_single_dyc_row_text_pane_t2_ParamLimits

0x8f50,	// (0x000142a8) list_single_dyc_row_text_pane_t2

0xefd4,	// (0x0001a32c) list_single_dyc_row_text_pane_t3_ParamLimits

0xefd4,	// (0x0001a32c) list_single_dyc_row_text_pane_t3

0x0002,

0xfd58,	// (0x0001b0b0) list_single_dyc_row_text_pane_t_ParamLimits

0xfd58,	// (0x0001b0b0) list_single_dyc_row_text_pane_t

0xefe6,	// (0x0001a33e) list_single_dyc_row_pane_g1_ParamLimits

0xefe6,	// (0x0001a33e) list_single_dyc_row_pane_g1

0xeff2,	// (0x0001a34a) list_single_dyc_row_pane_g2_ParamLimits

0xeff2,	// (0x0001a34a) list_single_dyc_row_pane_g2

0xeffe,	// (0x0001a356) list_single_dyc_row_pane_g3_ParamLimits

0xeffe,	// (0x0001a356) list_single_dyc_row_pane_g3

0xf00a,	// (0x0001a362) list_single_dyc_row_pane_g4_ParamLimits

0xf00a,	// (0x0001a362) list_single_dyc_row_pane_g4

0x0003,

0xfd5f,	// (0x0001b0b7) list_single_dyc_row_pane_g_ParamLimits

0xfd5f,	// (0x0001b0b7) list_single_dyc_row_pane_g

0xf016,	// (0x0001a36e) list_single_dyc_row_text_pane_ParamLimits

0xf016,	// (0x0001a36e) list_single_dyc_row_text_pane

0x9ef5,	// (0x0001524d) bg_sp_fs_scroll_pane

0xf035,	// (0x0001a38d) thumb_sp_fs_scroll_pane

0xa9d5,	// (0x00015d2d) list_medium_line_g1_ParamLimits

0xa9d5,	// (0x00015d2d) list_medium_line_g1

0xb016,	// (0x0001636e) list_medium_line_t1_ParamLimits

0xb016,	// (0x0001636e) list_medium_line_t1

0xa9d5,	// (0x00015d2d) list_medium_line_x2_g1_ParamLimits

0xa9d5,	// (0x00015d2d) list_medium_line_x2_g1

0xa9e1,	// (0x00015d39) list_medium_line_x2_g2_ParamLimits

0xa9e1,	// (0x00015d39) list_medium_line_x2_g2

0x0001,

0xfa41,	// (0x0001ad99) list_medium_line_x2_g_ParamLimits

0xfa41,	// (0x0001ad99) list_medium_line_x2_g

0xf03e,	// (0x0001a396) list_medium_line_x2_t1_ParamLimits

0xf03e,	// (0x0001a396) list_medium_line_x2_t1

0xa9d5,	// (0x00015d2d) list_medium_line_x3_g1_ParamLimits

0xa9d5,	// (0x00015d2d) list_medium_line_x3_g1

0xa9e1,	// (0x00015d39) list_medium_line_x3_g2_ParamLimits

0xa9e1,	// (0x00015d39) list_medium_line_x3_g2

0x0001,

0xfa41,	// (0x0001ad99) list_medium_line_x3_g_ParamLimits

0xfa41,	// (0x0001ad99) list_medium_line_x3_g

0xf03e,	// (0x0001a396) list_medium_line_x3_t1_ParamLimits

0xf03e,	// (0x0001a396) list_medium_line_x3_t1

0xf054,	// (0x0001a3ac) thumb_sp_fs_scroll_pane_g1

0xf05d,	// (0x0001a3b5) thumb_sp_fs_scroll_pane_g2

0xf066,	// (0x0001a3be) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd68,	// (0x0001b0c0) thumb_sp_fs_scroll_pane_g

0xf054,	// (0x0001a3ac) bg_sp_fs_scroll_pane_g1

0xf05d,	// (0x0001a3b5) bg_sp_fs_scroll_pane_g2

0xf066,	// (0x0001a3be) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd68,	// (0x0001b0c0) bg_sp_fs_scroll_pane_g

0xa9d5,	// (0x00015d2d) list_medium_line_x2_t3_g4_g1_ParamLimits

0xa9d5,	// (0x00015d2d) list_medium_line_x2_t3_g4_g1

0xaa4b,	// (0x00015da3) list_medium_line_x2_t3_g4_g2_ParamLimits

0xaa4b,	// (0x00015da3) list_medium_line_x2_t3_g4_g2

0xa9e1,	// (0x00015d39) list_medium_line_x2_t3_g4_g3_ParamLimits

0xa9e1,	// (0x00015d39) list_medium_line_x2_t3_g4_g3

0xa9ed,	// (0x00015d45) list_medium_line_x2_t3_g4_g4_ParamLimits

0xa9ed,	// (0x00015d45) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2f5,	// (0x0001a64d) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2f5,	// (0x0001a64d) list_medium_line_x2_t3_g4_g

0x8faa,	// (0x00014302) list_medium_line_x2_t3_g4_t1_ParamLimits

0x8faa,	// (0x00014302) list_medium_line_x2_t3_g4_t1

0x8fc0,	// (0x00014318) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8fc0,	// (0x00014318) list_medium_line_x2_t3_g4_t2

0xaa0e,	// (0x00015d66) list_medium_line_x2_t3_g4_t3_ParamLimits

0xaa0e,	// (0x00015d66) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd6f,	// (0x0001b0c7) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd6f,	// (0x0001b0c7) list_medium_line_x2_t3_g4_t

0xa9d5,	// (0x00015d2d) list_medium_line_g2_g1_ParamLimits

0xa9d5,	// (0x00015d2d) list_medium_line_g2_g1

0xa9e1,	// (0x00015d39) list_medium_line_g2_g2_ParamLimits

0xa9e1,	// (0x00015d39) list_medium_line_g2_g2

0x0001,

0xfa41,	// (0x0001ad99) list_medium_line_g2_g_ParamLimits

0xfa41,	// (0x0001ad99) list_medium_line_g2_g

0xad78,	// (0x000160d0) list_medium_line_g2_t1_ParamLimits

0xad78,	// (0x000160d0) list_medium_line_g2_t1

0xa9d5,	// (0x00015d2d) list_medium_line_t3_g2_g1_ParamLimits

0xa9d5,	// (0x00015d2d) list_medium_line_t3_g2_g1

0xa9e1,	// (0x00015d39) list_medium_line_t3_g2_g2_ParamLimits

0xa9e1,	// (0x00015d39) list_medium_line_t3_g2_g2

0x0001,

0xfa41,	// (0x0001ad99) list_medium_line_t3_g2_g_ParamLimits

0xfa41,	// (0x0001ad99) list_medium_line_t3_g2_g

0x8fd9,	// (0x00014331) list_medium_line_t3_g2_t1_ParamLimits

0x8fd9,	// (0x00014331) list_medium_line_t3_g2_t1

0x8ff0,	// (0x00014348) list_medium_line_t3_g2_t2_ParamLimits

0x8ff0,	// (0x00014348) list_medium_line_t3_g2_t2

0x9005,	// (0x0001435d) list_medium_line_t3_g2_t3_ParamLimits

0x9005,	// (0x0001435d) list_medium_line_t3_g2_t3

0x0002,

0xfd76,	// (0x0001b0ce) list_medium_line_t3_g2_t_ParamLimits

0xfd76,	// (0x0001b0ce) list_medium_line_t3_g2_t

0xeedc,	// (0x0001a234) list_medium_line_right_icon_g1

0xf06f,	// (0x0001a3c7) list_medium_line_right_icon_t1

0xa9d5,	// (0x00015d2d) list_medium_line_t2_g1_ParamLimits

0xa9d5,	// (0x00015d2d) list_medium_line_t2_g1

0x901a,	// (0x00014372) list_medium_line_t2_t1_ParamLimits

0x901a,	// (0x00014372) list_medium_line_t2_t1

0x9034,	// (0x0001438c) list_medium_line_t2_t2_ParamLimits

0x9034,	// (0x0001438c) list_medium_line_t2_t2

0x0001,

0xfd7d,	// (0x0001b0d5) list_medium_line_t2_t_ParamLimits

0xfd7d,	// (0x0001b0d5) list_medium_line_t2_t

0xa9d5,	// (0x00015d2d) list_medium_line_t3_g1_ParamLimits

0xa9d5,	// (0x00015d2d) list_medium_line_t3_g1

0x8eaf,	// (0x00014207) list_medium_line_t3_t1_ParamLimits

0x8eaf,	// (0x00014207) list_medium_line_t3_t1

0x8ec9,	// (0x00014221) list_medium_line_t3_t2_ParamLimits

0x8ec9,	// (0x00014221) list_medium_line_t3_t2

0x8ede,	// (0x00014236) list_medium_line_t3_t3_ParamLimits

0x8ede,	// (0x00014236) list_medium_line_t3_t3

0x0002,

0xfd82,	// (0x0001b0da) list_medium_line_t3_t_ParamLimits

0xfd82,	// (0x0001b0da) list_medium_line_t3_t

0xa9d5,	// (0x00015d2d) list_medium_line_g3_g1_ParamLimits

0xa9d5,	// (0x00015d2d) list_medium_line_g3_g1

0xaa4b,	// (0x00015da3) list_medium_line_g3_g2_ParamLimits

0xaa4b,	// (0x00015da3) list_medium_line_g3_g2

0xa9e1,	// (0x00015d39) list_medium_line_g3_g3_ParamLimits

0xa9e1,	// (0x00015d39) list_medium_line_g3_g3

0x0002,

0xfd89,	// (0x0001b0e1) list_medium_line_g3_g_ParamLimits

0xfd89,	// (0x0001b0e1) list_medium_line_g3_g

0xad63,	// (0x000160bb) list_medium_line_g3_t1_ParamLimits

0xad63,	// (0x000160bb) list_medium_line_g3_t1

0xa9d5,	// (0x00015d2d) list_medium_line_t2_g3_g1_ParamLimits

0xa9d5,	// (0x00015d2d) list_medium_line_t2_g3_g1

0xaa4b,	// (0x00015da3) list_medium_line_t2_g3_g2_ParamLimits

0xaa4b,	// (0x00015da3) list_medium_line_t2_g3_g2

0xa9e1,	// (0x00015d39) list_medium_line_t2_g3_g3_ParamLimits

0xa9e1,	// (0x00015d39) list_medium_line_t2_g3_g3

0x0002,

0xfd89,	// (0x0001b0e1) list_medium_line_t2_g3_g_ParamLimits

0xfd89,	// (0x0001b0e1) list_medium_line_t2_g3_g

0x9049,	// (0x000143a1) list_medium_line_t2_g3_t1_ParamLimits

0x9049,	// (0x000143a1) list_medium_line_t2_g3_t1

0x9060,	// (0x000143b8) list_medium_line_t2_g3_t2_ParamLimits

0x9060,	// (0x000143b8) list_medium_line_t2_g3_t2

0x0001,

0xfd90,	// (0x0001b0e8) list_medium_line_t2_g3_t_ParamLimits

0xfd90,	// (0x0001b0e8) list_medium_line_t2_g3_t

0xa9d5,	// (0x00015d2d) list_medium_line_t3_g3_g1_ParamLimits

0xa9d5,	// (0x00015d2d) list_medium_line_t3_g3_g1

0xaa4b,	// (0x00015da3) list_medium_line_t3_g3_g2_ParamLimits

0xaa4b,	// (0x00015da3) list_medium_line_t3_g3_g2

0xa9e1,	// (0x00015d39) list_medium_line_t3_g3_g3_ParamLimits

0xa9e1,	// (0x00015d39) list_medium_line_t3_g3_g3

0x0002,

0xfd89,	// (0x0001b0e1) list_medium_line_t3_g3_g_ParamLimits

0xfd89,	// (0x0001b0e1) list_medium_line_t3_g3_g

0x9075,	// (0x000143cd) list_medium_line_t3_g3_t1_ParamLimits

0x9075,	// (0x000143cd) list_medium_line_t3_g3_t1

0x908e,	// (0x000143e6) list_medium_line_t3_g3_t2_ParamLimits

0x908e,	// (0x000143e6) list_medium_line_t3_g3_t2

0x90a4,	// (0x000143fc) list_medium_line_t3_g3_t3_ParamLimits

0x90a4,	// (0x000143fc) list_medium_line_t3_g3_t3

0x0002,

0xfd95,	// (0x0001b0ed) list_medium_line_t3_g3_t_ParamLimits

0xfd95,	// (0x0001b0ed) list_medium_line_t3_g3_t

0xefa3,	// (0x0001a2fb) list_medium_line_right_iconx2_g1

0xeedc,	// (0x0001a234) list_medium_line_right_iconx2_g2

0x0001,

0xfd9c,	// (0x0001b0f4) list_medium_line_right_iconx2_g

0xf07d,	// (0x0001a3d5) list_medium_line_right_iconx2_t1

0xefa3,	// (0x0001a2fb) list_medium_line_t2_right_iconx2_g1

0xeedc,	// (0x0001a234) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd9c,	// (0x0001b0f4) list_medium_line_t2_right_iconx2_g

0x90ba,	// (0x00014412) list_medium_line_t2_right_iconx2_t1

0x90ca,	// (0x00014422) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfda1,	// (0x0001b0f9) list_medium_line_t2_right_iconx2_t

0xde78,	// (0x000191d0) list_medium_line_x4_t4_t1

0x90d8,	// (0x00014430) list_medium_line_x4_t4_t2

0x90e8,	// (0x00014440) list_medium_line_x4_t4_t3

0x90f8,	// (0x00014450) list_medium_line_x4_t4_t4

0x0003,

0xfda6,	// (0x0001b0fe) list_medium_line_x4_t4_t

0x9143,	// (0x0001449b) tport_appsw_pane_ParamLimits

0x9143,	// (0x0001449b) tport_appsw_pane

0x9154,	// (0x000144ac) tport_contact_pane_ParamLimits

0x9154,	// (0x000144ac) tport_contact_pane

0x9169,	// (0x000144c1) tport_listscroll_pane_ParamLimits

0x9169,	// (0x000144c1) tport_listscroll_pane

0x9182,	// (0x000144da) cell_tport_appsw_pane_ParamLimits

0x9182,	// (0x000144da) cell_tport_appsw_pane

0xdbd4,	// (0x00018f2c) tport_appsw_pane_g1_ParamLimits

0xdbd4,	// (0x00018f2c) tport_appsw_pane_g1

0xf08b,	// (0x0001a3e3) tport_contact_pane_g1

0xf094,	// (0x0001a3ec) tport_contact_pane_t1

0xf0a2,	// (0x0001a3fa) tport_contact_pane_t2

0x0001,

0xfdaf,	// (0x0001b107) tport_contact_pane_t

0xf0b0,	// (0x0001a408) list_tport_pane

0xa810,	// (0x00015b68) scroll_pane_cp_030

0xf0c1,	// (0x0001a419) cell_tport_appsw_pane_g1

0xf0d1,	// (0x0001a429) cell_tport_appsw_pane_t1

0x9ef5,	// (0x0001524d) grid_highlight_pane_cp019

0x91b8,	// (0x00014510) list_tport_double_graphic_pane_ParamLimits

0x91b8,	// (0x00014510) list_tport_double_graphic_pane

0x9f48,	// (0x000152a0) list_highlight_pane_cp023_ParamLimits

0x9f48,	// (0x000152a0) list_highlight_pane_cp023

0x91c5,	// (0x0001451d) list_tport_double_graphic_pane_g1_ParamLimits

0x91c5,	// (0x0001451d) list_tport_double_graphic_pane_g1

0x91d2,	// (0x0001452a) list_tport_double_graphic_pane_t1_ParamLimits

0x91d2,	// (0x0001452a) list_tport_double_graphic_pane_t1

0x91e7,	// (0x0001453f) list_tport_double_graphic_pane_t2_ParamLimits

0x91e7,	// (0x0001453f) list_tport_double_graphic_pane_t2

0x0001,

0xfdbb,	// (0x0001b113) list_tport_double_graphic_pane_t_ParamLimits

0xfdbb,	// (0x0001b113) list_tport_double_graphic_pane_t

0x9ef5,	// (0x0001524d) main_cale_note_pane

0x7193,	// (0x000124eb) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x7193,	// (0x000124eb) cell_vitu2_function_top_wide_pane_cp01

0x88f1,	// (0x00013c49) wait_bar_pane_cp05_ParamLimits

0x9ef5,	// (0x0001524d) listscroll_cmail_pane

0xf0df,	// (0x0001a437) list_cmail_pane

0x91f9,	// (0x00014551) list_cmail_body_pane

0x91f9,	// (0x00014551) list_single_cmail_header_caption_pane

0x920f,	// (0x00014567) list_single_cmail_header_detail_pane_ParamLimits

0x920f,	// (0x00014567) list_single_cmail_header_detail_pane

0x0011,	// (0x0000b369) list_single_cmail_header_caption_pane_t1

0x9237,	// (0x0001458f) list_single_cmail_header_detail_pane_g1_ParamLimits

0x9237,	// (0x0001458f) list_single_cmail_header_detail_pane_g1

0x003d,	// (0x0000b395) list_single_cmail_header_detail_pane_g2_ParamLimits

0x003d,	// (0x0000b395) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdc0,	// (0x0001b118) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdc0,	// (0x0001b118) list_single_cmail_header_detail_pane_g

0x0056,	// (0x0000b3ae) list_single_cmail_header_detail_pane_t1_ParamLimits

0x0056,	// (0x0000b3ae) list_single_cmail_header_detail_pane_t1

0x00ac,	// (0x0000b404) list_single_cmail_header_editor_pane_bg_ParamLimits

0x00ac,	// (0x0000b404) list_single_cmail_header_editor_pane_bg

0x00be,	// (0x0000b416) list_cmail_body_pane_g1

0x00c7,	// (0x0000b41f) list_cmail_body_pane_t1

0xdc11,	// (0x00018f69) list_single_cmail_header_editor_pane_bg_g1

0xac81,	// (0x00015fd9) list_single_cmail_header_editor_pane_bg_g1_copy1

0xdc21,	// (0x00018f79) list_single_cmail_header_editor_pane_bg_g1_copy2

0xdc19,	// (0x00018f71) list_single_cmail_header_editor_pane_bg_g1_copy3

0xdea2,	// (0x000191fa) list_single_cmail_header_editor_pane_bg_g1_copy4

0xdc41,	// (0x00018f99) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xdc31,	// (0x00018f89) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xdc39,	// (0x00018f91) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xac61,	// (0x00015fb9) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x9271,	// (0x000145c9) calenote_gesture_pane_ParamLimits

0x9271,	// (0x000145c9) calenote_gesture_pane

0x928d,	// (0x000145e5) calenote_window_pane_ParamLimits

0x928d,	// (0x000145e5) calenote_window_pane

0x0105,	// (0x0000b45d) popup_note_window_cp01

0x92a9,	// (0x00014601) calenote_swipe_1_pane_ParamLimits

0x92a9,	// (0x00014601) calenote_swipe_1_pane

0x8cf4,	// (0x0001404c) calenote_swipe_2_pane_ParamLimits

0x8cf4,	// (0x0001404c) calenote_swipe_2_pane

0xee2d,	// (0x0001a185) calenote_swipe_1_pane_g1_ParamLimits

0xee2d,	// (0x0001a185) calenote_swipe_1_pane_g1

0xee3a,	// (0x0001a192) calenote_swipe_1_pane_g2_ParamLimits

0xee3a,	// (0x0001a192) calenote_swipe_1_pane_g2

0x0001,

0xfcf9,	// (0x0001b051) calenote_swipe_1_pane_g_ParamLimits

0xfcf9,	// (0x0001b051) calenote_swipe_1_pane_g

0x012a,	// (0x0000b482) calenote_swipe_1_pane_t1_ParamLimits

0x012a,	// (0x0000b482) calenote_swipe_1_pane_t1

0xee2d,	// (0x0001a185) calenote_swipe_2_pane_g1_ParamLimits

0xee2d,	// (0x0001a185) calenote_swipe_2_pane_g1

0x0149,	// (0x0000b4a1) calenote_swipe_2_pane_g2_ParamLimits

0x0149,	// (0x0000b4a1) calenote_swipe_2_pane_g2

0x0001,

0xfdcc,	// (0x0001b124) calenote_swipe_2_pane_g_ParamLimits

0xfdcc,	// (0x0001b124) calenote_swipe_2_pane_g

0x0155,	// (0x0000b4ad) calenote_swipe_2_pane_t1_ParamLimits

0x0155,	// (0x0000b4ad) calenote_swipe_2_pane_t1

0x9ef5,	// (0x0001524d) main_mup_navstr_pane

0x5f77,	// (0x000112cf) main_mup3_pane_t7_ParamLimits

0x5f77,	// (0x000112cf) main_mup3_pane_t7

0xd83a,	// (0x00018b92) main_mp4_pane_g6_ParamLimits

0xd83a,	// (0x00018b92) main_mp4_pane_g6

0xda72,	// (0x00018dca) main_image3_pane_t4_ParamLimits

0xda72,	// (0x00018dca) main_image3_pane_t4

0x92be,	// (0x00014616) popup_navstr_preview_pane_ParamLimits

0x92be,	// (0x00014616) popup_navstr_preview_pane

0x92ce,	// (0x00014626) scroll_navstr_pane_ParamLimits

0x92ce,	// (0x00014626) scroll_navstr_pane

0x9ef5,	// (0x0001524d) bg_popup_preview_window_pane_cp04

0x0194,	// (0x0000b4ec) popup_navstr_preview_pane_t1

0x92e2,	// (0x0001463a) scroll_navstr_pane_g1_ParamLimits

0x92e2,	// (0x0001463a) scroll_navstr_pane_g1

0x92f6,	// (0x0001464e) scroll_navstr_pane_t1_ParamLimits

0x92f6,	// (0x0001464e) scroll_navstr_pane_t1

0x0121,	// (0x0000b479) bg_button_pane_cp014

0x0121,	// (0x0000b479) bg_button_pane_cp030

0x8bb2,	// (0x00013f0a) list_double_fisheye_pane_g4_ParamLimits

0x8bb2,	// (0x00013f0a) list_double_fisheye_pane_g4

0x8bbe,	// (0x00013f16) list_double_fisheye_pane_g5_ParamLimits

0x8bbe,	// (0x00013f16) list_double_fisheye_pane_g5

0xf0ef,	// (0x0001a447) sp_fs_scroll_pane_cp03

0xef1c,	// (0x0001a274) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xef28,	// (0x0001a280) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfd16,	// (0x0001b06e) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xef34,	// (0x0001a28c) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xf0e7,	// (0x0001a43f) sp_fs_scroll_pane_cp02

0xa86a,	// (0x00015bc2) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa86a,	// (0x00015bc2) popup_sp_fs_calendar_preview_list_single_pane

0x9ef5,	// (0x0001524d) main_cam6_pano_pane

0x9f48,	// (0x000152a0) main_mup3_pane_ParamLimits

0x9ef5,	// (0x0001524d) main_phacti_pane

0x87e4,	// (0x00013b3c) bg_button_pane_cp11

0x87fc,	// (0x00013b54) main_mobtv_info_pane_g2_ParamLimits

0x87fc,	// (0x00013b54) main_mobtv_info_pane_g2

0x0001,

0xfc76,	// (0x0001afce) main_mobtv_info_pane_g_ParamLimits

0xfc76,	// (0x0001afce) main_mobtv_info_pane_g

0x89af,	// (0x00013d07) sc_clock_pane_t5_ParamLimits

0x89af,	// (0x00013d07) sc_clock_pane_t5

0x8a22,	// (0x00013d7a) main_radioblah_pane_g1_ParamLimits

0xed70,	// (0x0001a0c8) main_radioblah_pane_t3_ParamLimits

0xed70,	// (0x0001a0c8) main_radioblah_pane_t3

0xed88,	// (0x0001a0e0) main_radioblah_pane_t4_ParamLimits

0xed88,	// (0x0001a0e0) main_radioblah_pane_t4

0x8a4a,	// (0x00013da2) main_radioblah_text_pane_ParamLimits

0x8a4a,	// (0x00013da2) main_radioblah_text_pane

0x8a5c,	// (0x00013db4) main_radioblah_info_pane_g1_ParamLimits

0x8aef,	// (0x00013e47) main_radioblah_info_pane_t4_ParamLimits

0x8aef,	// (0x00013e47) main_radioblah_info_pane_t4

0x9f48,	// (0x000152a0) main_sp_fs_calendar_pane

0x930c,	// (0x00014664) main_phacti_pane_g1

0x9314,	// (0x0001466c) phacti_note_pane_ParamLimits

0x9314,	// (0x0001466c) phacti_note_pane

0x01e6,	// (0x0000b53e) phacti_term_pane_ParamLimits

0x01e6,	// (0x0000b53e) phacti_term_pane

0x01fb,	// (0x0000b553) phacti_note_pane_t1_ParamLimits

0x01fb,	// (0x0000b553) phacti_note_pane_t1

0x0212,	// (0x0000b56a) phacti_term_pane_g1

0x021a,	// (0x0000b572) phacti_term_pane_t1_ParamLimits

0x021a,	// (0x0000b572) phacti_term_pane_t1

0x0244,	// (0x0000b59c) popup_sp_fs_calendar_preview_list_single_pane_g1

0x024c,	// (0x0000b5a4) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdd6,	// (0x0001b12e) popup_sp_fs_calendar_preview_list_single_pane_g

0x0254,	// (0x0000b5ac) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x0254,	// (0x0000b5ac) popup_sp_fs_calendar_preview_list_single_pane_t1

0x026a,	// (0x0000b5c2) aid_popup_sp_fs_bg_corner_pane

0xcf0b,	// (0x00018263) popup_sp_fs_calendar_preview_bg_pane_g1

0x9ef5,	// (0x0001524d) popup_sp_fs_calendar_preview_bg_pane

0x0272,	// (0x0000b5ca) popup_sp_fs_calendar_preview_list_pane

0x9f48,	// (0x000152a0) bg_main_sp_fs_cale_pane_ParamLimits

0x9f48,	// (0x000152a0) bg_main_sp_fs_cale_pane

0x02aa,	// (0x0000b602) listscroll_cale_mrui_pane_ParamLimits

0x02aa,	// (0x0000b602) listscroll_cale_mrui_pane

0x02be,	// (0x0000b616) listscroll_sp_fs_schedule_track_pane

0x02c7,	// (0x0000b61f) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x02c7,	// (0x0000b61f) main_sp_fs_ctrlbar_pane_cp01

0x02d8,	// (0x0000b630) main_sp_fs_ribbon_pane

0x02e0,	// (0x0000b638) popup_sp_fs_cale_preview_window

0x9363,	// (0x000146bb) list_single_sp_fs_schedule_track_pane_ParamLimits

0x9363,	// (0x000146bb) list_single_sp_fs_schedule_track_pane

0x9f48,	// (0x000152a0) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x9f48,	// (0x000152a0) bg_sp_fs_highlight_list_pane_cp03

0x9376,	// (0x000146ce) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x9376,	// (0x000146ce) list_single_sp_fs_schedule_track_pane_g1

0x9382,	// (0x000146da) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x9382,	// (0x000146da) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfddb,	// (0x0001b133) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfddb,	// (0x0001b133) list_single_sp_fs_schedule_track_pane_g

0x938e,	// (0x000146e6) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x938e,	// (0x000146e6) list_single_sp_fs_schedule_track_pane_t1

0x93a8,	// (0x00014700) sp_fs_schedule_track_pane_ParamLimits

0x93a8,	// (0x00014700) sp_fs_schedule_track_pane

0x0347,	// (0x0000b69f) sp_fs_schedule_track_pane_g1

0x034f,	// (0x0000b6a7) sp_fs_schedule_track_pane_g2

0x0357,	// (0x0000b6af) sp_fs_schedule_track_pane_g3

0x035f,	// (0x0000b6b7) sp_fs_schedule_track_pane_g4

0x0367,	// (0x0000b6bf) sp_fs_schedule_track_pane_g5

0x0004,

0xfde0,	// (0x0001b138) sp_fs_schedule_track_pane_g

0xdc11,	// (0x00018f69) bg_sp_fs_schedule_viewer_highlight_g1

0xac81,	// (0x00015fd9) bg_sp_fs_schedule_viewer_highlight_g2

0xdc19,	// (0x00018f71) bg_sp_fs_schedule_viewer_highlight_g3

0xdc21,	// (0x00018f79) bg_sp_fs_schedule_viewer_highlight_g4

0xdea2,	// (0x000191fa) bg_sp_fs_schedule_viewer_highlight_g5

0xdc31,	// (0x00018f89) bg_sp_fs_schedule_viewer_highlight_g6

0xdc39,	// (0x00018f91) bg_sp_fs_schedule_viewer_highlight_g7

0xdc41,	// (0x00018f99) bg_sp_fs_schedule_viewer_highlight_g8

0xac61,	// (0x00015fb9) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdeb,	// (0x0001b143) bg_sp_fs_schedule_viewer_highlight_g

0x9ef5,	// (0x0001524d) bg_main_sp_fs_ribbon_pane

0x93b9,	// (0x00014711) main_sp_fs_ribbon_pane_g1

0x036f,	// (0x0000b6c7) main_sp_fs_ribbon_pane_t1

0x93c2,	// (0x0001471a) main_sp_fs_ribbon_pane_t2

0x038d,	// (0x0000b6e5) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdfe,	// (0x0001b156) main_sp_fs_ribbon_pane_t

0x039c,	// (0x0000b6f4) main_sp_fs_ribbon_scheduler_pane

0x03a4,	// (0x0000b6fc) bg_main_sp_fs_ribbon_pane_g1

0x03ad,	// (0x0000b705) bg_main_sp_fs_ribbon_pane_g2

0x03b6,	// (0x0000b70e) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfe05,	// (0x0001b15d) bg_main_sp_fs_ribbon_pane_g

0x03be,	// (0x0000b716) main_sp_fs_ribbon_scheduler_pane_g1

0x03c7,	// (0x0000b71f) main_sp_fs_ribbon_scheduler_pane_g2

0x03d0,	// (0x0000b728) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfe0c,	// (0x0001b164) main_sp_fs_ribbon_scheduler_pane_g

0xede2,	// (0x0001a13a) list_cale_mrui_pane

0x03d9,	// (0x0000b731) sp_fs_scroll_pane_cp07_ParamLimits

0x03d9,	// (0x0000b731) sp_fs_scroll_pane_cp07

0x93d1,	// (0x00014729) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x93d1,	// (0x00014729) bg_sp_fs_schedule_viewer_highlight

0x03fb,	// (0x0000b753) list_single_sp_fs_schedule_track_pane_cp01

0x0403,	// (0x0000b75b) list_sp_fs_schedule_track_pane

0x040b,	// (0x0000b763) sp_fs_scroll_pane_cp06_ParamLimits

0x040b,	// (0x0000b763) sp_fs_scroll_pane_cp06

0xcf0b,	// (0x00018263) bgmain_sp_fs_calendar_pane_g1

0x93e1,	// (0x00014739) list_single_cale_mrui_pane_ParamLimits

0x93e1,	// (0x00014739) list_single_cale_mrui_pane

0x0443,	// (0x0000b79b) list_single_cale_mrui_row_pane_ParamLimits

0x0443,	// (0x0000b79b) list_single_cale_mrui_row_pane

0x0450,	// (0x0000b7a8) list_single_cale_mrui_row_pane_g1_ParamLimits

0x0450,	// (0x0000b7a8) list_single_cale_mrui_row_pane_g1

0x0488,	// (0x0000b7e0) list_single_cale_mrui_row_pane_t1_ParamLimits

0x0488,	// (0x0000b7e0) list_single_cale_mrui_row_pane_t1

0x9404,	// (0x0001475c) list_single_cale_mrui_row_pane_t2_ParamLimits

0x9404,	// (0x0001475c) list_single_cale_mrui_row_pane_t2

0x0500,	// (0x0000b858) list_single_cale_mrui_row_pane_t3_ParamLimits

0x0500,	// (0x0000b858) list_single_cale_mrui_row_pane_t3

0x052f,	// (0x0000b887) list_single_cale_mrui_row_pane_t4_ParamLimits

0x052f,	// (0x0000b887) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe18,	// (0x0001b170) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe18,	// (0x0001b170) list_single_cale_mrui_row_pane_t

0x946a,	// (0x000147c2) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x946a,	// (0x000147c2) list_single_cmail_header_editor_pane_bg_cp01

0x948e,	// (0x000147e6) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x948e,	// (0x000147e6) list_single_cmail_header_editor_pane_bg_cp02

0x94ac,	// (0x00014804) main_radioblah_text_pane_t1_ParamLimits

0x94ac,	// (0x00014804) main_radioblah_text_pane_t1

0x05b9,	// (0x0000b911) cam6_indi_pane_cp01

0x05c1,	// (0x0000b919) cam6_mode_pane_cp01

0x05c9,	// (0x0000b921) cam6_pano_pane

0x05d2,	// (0x0000b92a) cam6_zoom_pane_cp01

0x05da,	// (0x0000b932) cam6_pano_image_pane

0x05e3,	// (0x0000b93b) cam6_pano_pane_g1

0xeaee,	// (0x00019e46) cam6_pano_pane_g2

0x05ec,	// (0x0000b944) cam6_pano_pane_g3

0x05f5,	// (0x0000b94d) cam6_pano_pane_g4

0xd49f,	// (0x000187f7) cam6_pano_pane_g5

0x05fe,	// (0x0000b956) cam6_pano_pane_g6

0x0606,	// (0x0000b95e) cam6_pano_pane_g7

0x060e,	// (0x0000b966) cam6_pano_pane_g8

0x0617,	// (0x0000b96f) cam6_pano_pane_g9

0x0008,

0xfe21,	// (0x0001b179) cam6_pano_pane_g

0x9ef5,	// (0x0001524d) main_browser_tag_pane

0x0174,	// (0x0000b4cc) grid_navstr_albumart_pane

0x0620,	// (0x0000b978) cell_navstr_albumart_pane_ParamLimits

0x0620,	// (0x0000b978) cell_navstr_albumart_pane

0xb6a9,	// (0x00016a01) cell_navstr_albumart_pane_g1

0xc7f3,	// (0x00017b4b) cell_navstr_albumart_pane_g2

0xc803,	// (0x00017b5b) cell_navstr_albumart_pane_g3

0xc7fb,	// (0x00017b53) cell_navstr_albumart_pane_g4

0x0003,

0xfe34,	// (0x0001b18c) cell_navstr_albumart_pane_g

0x94c5,	// (0x0001481d) bt_list_pane_ParamLimits

0x94c5,	// (0x0001481d) bt_list_pane

0x94d8,	// (0x00014830) bt_list_pane_t1

0x94e7,	// (0x0001483f) bt_list_pane_t2

0x0001,

0xfe3d,	// (0x0001b195) bt_list_pane_t

0x9ef5,	// (0x0001524d) main_cale_prevew_pane

0x94f6,	// (0x0001484e) popup_cale_preview_window_ParamLimits

0x94f6,	// (0x0001484e) popup_cale_preview_window

0x9f48,	// (0x000152a0) bg_popup_preview_window_pane_cp05_ParamLimits

0x9f48,	// (0x000152a0) bg_popup_preview_window_pane_cp05

0x067f,	// (0x0000b9d7) list_cale_preview_pane_ParamLimits

0x067f,	// (0x0000b9d7) list_cale_preview_pane

0x950b,	// (0x00014863) list_double_cale_preview_pane_ParamLimits

0x950b,	// (0x00014863) list_double_cale_preview_pane

0x951c,	// (0x00014874) list_single_cale_preview_pane_ParamLimits

0x951c,	// (0x00014874) list_single_cale_preview_pane

0x06cd,	// (0x0000ba25) list_single_cale_preview_pane_g1

0x06d5,	// (0x0000ba2d) list_single_cale_preview_pane_t1_ParamLimits

0x06d5,	// (0x0000ba2d) list_single_cale_preview_pane_t1

0x9530,	// (0x00014888) list_double_cale_preview_pane_g1

0x9538,	// (0x00014890) list_double_cale_preview_pane_t1_ParamLimits

0x9538,	// (0x00014890) list_double_cale_preview_pane_t1

0x954d,	// (0x000148a5) list_double_cale_preview_pane_t2_ParamLimits

0x954d,	// (0x000148a5) list_double_cale_preview_pane_t2

0x0001,

0xfe42,	// (0x0001b19a) list_double_cale_preview_pane_t_ParamLimits

0xfe42,	// (0x0001b19a) list_double_cale_preview_pane_t

0x9ef5,	// (0x0001524d) main_ezdial_pane

0x9f48,	// (0x000152a0) main_sp_fs_email_pane_ParamLimits

0x8d4a,	// (0x000140a2) cmail_ddmenu_btn01_pane_ParamLimits

0x8d4a,	// (0x000140a2) cmail_ddmenu_btn01_pane

0x8d5d,	// (0x000140b5) cmail_ddmenu_btn02_pane_ParamLimits

0x8d5d,	// (0x000140b5) cmail_ddmenu_btn02_pane

0x8d80,	// (0x000140d8) cmail_ddmenu_btn03_pane_ParamLimits

0x8d80,	// (0x000140d8) cmail_ddmenu_btn03_pane

0x8da5,	// (0x000140fd) main_sp_fs_ctrlbar_pane_ParamLimits

0x8dc6,	// (0x0001411e) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x91f9,	// (0x00014551) list_cmail_body_pane_ParamLimits

0x001f,	// (0x0000b377) bg_button_pane_cp12

0x0049,	// (0x0000b3a1) list_single_cmail_header_detail_pane_g3_ParamLimits

0x0049,	// (0x0000b3a1) list_single_cmail_header_detail_pane_g3

0x924d,	// (0x000145a5) list_single_cmail_header_detail_pane_t2_ParamLimits

0x924d,	// (0x000145a5) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdc7,	// (0x0001b11f) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdc7,	// (0x0001b11f) list_single_cmail_header_detail_pane_t

0x022f,	// (0x0000b587) phacti_term_pane_t2_ParamLimits

0x022f,	// (0x0000b587) phacti_term_pane_t2

0x0001,

0xfdd1,	// (0x0001b129) phacti_term_pane_t_ParamLimits

0xfdd1,	// (0x0001b129) phacti_term_pane_t

0x0702,	// (0x0000ba5a) aid_size_list_single_double

0x9565,	// (0x000148bd) popup_ezdial_listscroll_window

0x957b,	// (0x000148d3) popup_number_entry_window_cp01

0xb520,	// (0x00016878) bg_popup_call_pane_cp09

0x0733,	// (0x0000ba8b) ezdial_list_pane

0x073b,	// (0x0000ba93) scroll_pane_cp23

0xca16,	// (0x00017d6e) bg_button_pane_cp028_ParamLimits

0xca16,	// (0x00017d6e) bg_button_pane_cp028

0x9587,	// (0x000148df) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x9587,	// (0x000148df) cmail_ddmenu_btn01_pane_g1

0x9596,	// (0x000148ee) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x9596,	// (0x000148ee) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe47,	// (0x0001b19f) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe47,	// (0x0001b19f) cmail_ddmenu_btn01_pane_g

0x0761,	// (0x0000bab9) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x0761,	// (0x0000bab9) cmail_ddmenu_btn01_pane_t1

0xca16,	// (0x00017d6e) bg_button_pane_cp029_ParamLimits

0xca16,	// (0x00017d6e) bg_button_pane_cp029

0x95a6,	// (0x000148fe) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x95a6,	// (0x000148fe) cmail_ddmenu_btn02_pane_g1

0x95c1,	// (0x00014919) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x95c1,	// (0x00014919) cmail_ddmenu_btn02_pane_t1

0x9f48,	// (0x000152a0) bg_button_pane_cp031_ParamLimits

0x9f48,	// (0x000152a0) bg_button_pane_cp031

0x95a6,	// (0x000148fe) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x95a6,	// (0x000148fe) cmail_ddmenu_btn03_pane_g1

0x95c1,	// (0x00014919) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x95c1,	// (0x00014919) cmail_ddmenu_btn03_pane_t1

0x6a6f,	// (0x00011dc7) cell_dialer2_keypad_pane_t1_ParamLimits

0x6a89,	// (0x00011de1) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x6a89,	// (0x00011de1) cell_dialer2_keypad_pane_t1_copy1

0x8682,	// (0x000139da) ncimui_group_button_pane

0x9f48,	// (0x000152a0) main_sp_fs_calendar_pane_ParamLimits

0x91f9,	// (0x00014551) list_single_cmail_header_caption_pane_ParamLimits

0x0286,	// (0x0000b5de) aid_recal_txt_sm_pane

0x9ef5,	// (0x0001524d) mian_recal_day_pane

0x02e0,	// (0x0000b638) popup_sp_fs_cale_preview_window_ParamLimits

0x9ef5,	// (0x0001524d) list_recal_day_pane

0x07bf,	// (0x0000bb17) list_single_recal_day_pane_ParamLimits

0x07bf,	// (0x0000bb17) list_single_recal_day_pane

0x07d1,	// (0x0000bb29) list_single_recal_day_pane_g1_ParamLimits

0x07d1,	// (0x0000bb29) list_single_recal_day_pane_g1

0x07dd,	// (0x0000bb35) list_single_recal_day_pane_g2_ParamLimits

0x07dd,	// (0x0000bb35) list_single_recal_day_pane_g2

0x07e9,	// (0x0000bb41) list_single_recal_day_pane_g3_ParamLimits

0x07e9,	// (0x0000bb41) list_single_recal_day_pane_g3

0x95e8,	// (0x00014940) list_single_recal_day_pane_g4_ParamLimits

0x95e8,	// (0x00014940) list_single_recal_day_pane_g4

0x0801,	// (0x0000bb59) list_single_recal_day_pane_g5_ParamLimits

0x0801,	// (0x0000bb59) list_single_recal_day_pane_g5

0x080d,	// (0x0000bb65) list_single_recal_day_pane_g6_ParamLimits

0x080d,	// (0x0000bb65) list_single_recal_day_pane_g6

0x0005,

0xfe56,	// (0x0001b1ae) list_single_recal_day_pane_g_ParamLimits

0xfe56,	// (0x0001b1ae) list_single_recal_day_pane_g

0x0819,	// (0x0000bb71) list_single_recal_day_pane_t1

0x0827,	// (0x0000bb7f) list_single_recal_day_pane_t2

0x0001,

0xfe63,	// (0x0001b1bb) list_single_recal_day_pane_t

0x95f6,	// (0x0001494e) ncimui_query_button_pane_ParamLimits

0x95f6,	// (0x0001494e) ncimui_query_button_pane

0x9606,	// (0x0001495e) ncimui_query_button_pane_t1_ParamLimits

0x9606,	// (0x0001495e) ncimui_query_button_pane_t1

0x0858,	// (0x0000bbb0) ncimui_query_button_pane_t2_ParamLimits

0x0858,	// (0x0000bbb0) ncimui_query_button_pane_t2

0x0001,

0xfe68,	// (0x0001b1c0) ncimui_query_button_pane_t_ParamLimits

0xfe68,	// (0x0001b1c0) ncimui_query_button_pane_t

0x9619,	// (0x00014971) query_button_pane_ParamLimits

0x9619,	// (0x00014971) query_button_pane

0x9ef5,	// (0x0001524d) bg_button_pane_cp0028

0x0878,	// (0x0000bbd0) query_button_pane_t1

0x4dc3,	// (0x0001011b) main_tport_pane_ParamLimits

0x9108,	// (0x00014460) bg_popup_window_pane_cp01_ParamLimits

0x9108,	// (0x00014460) bg_popup_window_pane_cp01

0x9120,	// (0x00014478) heading_pane_cp08_ParamLimits

0x9120,	// (0x00014478) heading_pane_cp08

0x9132,	// (0x0001448a) heading_pane_cp07_ParamLimits

0x9132,	// (0x0001448a) heading_pane_cp07

0xf0c1,	// (0x0001a419) cell_tport_appsw_pane_g2

0x0002,

0xfdb4,	// (0x0001b10c) cell_tport_appsw_pane_g

0xb6a1,	// (0x000169f9) input_candi_list_open_g1

0xae81,	// (0x000161d9) list_cale_time_pane_g6_ParamLimits

0xae81,	// (0x000161d9) list_cale_time_pane_g6

0x5a69,	// (0x00010dc1) aid_size_touch_calib_1_ParamLimits

0x5a69,	// (0x00010dc1) aid_size_touch_calib_1

0x5a75,	// (0x00010dcd) aid_size_touch_calib_2_ParamLimits

0x5a75,	// (0x00010dcd) aid_size_touch_calib_2

0x5a89,	// (0x00010de1) aid_size_touch_calib_3_ParamLimits

0x5a89,	// (0x00010de1) aid_size_touch_calib_3

0x5aa1,	// (0x00010df9) aid_size_touch_calib_4_ParamLimits

0x5aa1,	// (0x00010df9) aid_size_touch_calib_4

0x5ab3,	// (0x00010e0b) main_touch_calib_button_group_pane_ParamLimits

0x5ab3,	// (0x00010e0b) main_touch_calib_button_group_pane

0x5ac9,	// (0x00010e21) main_touch_calib_pane_g1_ParamLimits

0x5ad5,	// (0x00010e2d) main_touch_calib_pane_g2_ParamLimits

0x5ae1,	// (0x00010e39) main_touch_calib_pane_g3_ParamLimits

0x5aed,	// (0x00010e45) main_touch_calib_pane_g4_ParamLimits

0xf797,	// (0x0001aaef) main_touch_calib_pane_g_ParamLimits

0x5af9,	// (0x00010e51) main_touch_calib_pane_t1_ParamLimits

0x5b11,	// (0x00010e69) main_touch_calib_pane_t2_ParamLimits

0x5b29,	// (0x00010e81) main_touch_calib_pane_t3_ParamLimits

0x5b3b,	// (0x00010e93) main_touch_calib_pane_t4_ParamLimits

0x5b4d,	// (0x00010ea5) main_touch_calib_pane_t5_ParamLimits

0xf7a0,	// (0x0001aaf8) main_touch_calib_pane_t_ParamLimits

0xd2ca,	// (0x00018622) list_single_fp_cale_pane_g3_ParamLimits

0xd2ca,	// (0x00018622) list_single_fp_cale_pane_g3

0x9f48,	// (0x000152a0) bg_button_pane_cp012_ParamLimits

0x9f48,	// (0x000152a0) bg_vkb2_func_pane_cp03_ParamLimits

0x7a1b,	// (0x00012d73) cell_vitu2_function_top_pane_g1_ParamLimits

0x9f48,	// (0x000152a0) bg_vkb2_func_pane_cp04_ParamLimits

0x8638,	// (0x00013990) main_ncimui_button_group_pane_ParamLimits

0x8638,	// (0x00013990) main_ncimui_button_group_pane

0x8670,	// (0x000139c8) main_ncimui_pane_t3_ParamLimits

0x8670,	// (0x000139c8) main_ncimui_pane_t3

0x01c9,	// (0x0000b521) phacti_button_group_pane

0x0702,	// (0x0000ba5a) aid_size_list_single_double_ParamLimits

0x9565,	// (0x000148bd) popup_ezdial_listscroll_window_ParamLimits

0x957b,	// (0x000148d3) popup_number_entry_window_cp01_ParamLimits

0x962b,	// (0x00014983) phacti_button_pane_ParamLimits

0x962b,	// (0x00014983) phacti_button_pane

0x9ef5,	// (0x0001524d) bg_button_pane_cp14

0x0895,	// (0x0000bbed) phacti_button_pane_t1

0x963a,	// (0x00014992) main_touch_calib_button_pane_ParamLimits

0x963a,	// (0x00014992) main_touch_calib_button_pane

0xa6b3,	// (0x00015a0b) bg_button_pane_cp18_ParamLimits

0xa6b3,	// (0x00015a0b) bg_button_pane_cp18

0x08b3,	// (0x0000bc0b) main_touch_calib_button_pane_t1_ParamLimits

0x08b3,	// (0x0000bc0b) main_touch_calib_button_pane_t1

0x08c9,	// (0x0000bc21) main_touch_calib_button_pane_t2_ParamLimits

0x08c9,	// (0x0000bc21) main_touch_calib_button_pane_t2

0x0001,

0xfe6d,	// (0x0001b1c5) main_touch_calib_button_pane_t_ParamLimits

0xfe6d,	// (0x0001b1c5) main_touch_calib_button_pane_t

0x9ef5,	// (0x0001524d) cell_ncimui_button_pane

0x9ef5,	// (0x0001524d) bg_button_pane_cp032

0x08e7,	// (0x0000bc3f) cell_ncimui_button_pane_t1

0xda52,	// (0x00018daa) image3_infobar_pane_ParamLimits

0xda52,	// (0x00018daa) image3_infobar_pane

0x89d7,	// (0x00013d2f) fs_bigclock_status_pane_ParamLimits

0x89d7,	// (0x00013d2f) fs_bigclock_status_pane

0x89e4,	// (0x00013d3c) main_fs_bigclock_clock_pane_ParamLimits

0x89e4,	// (0x00013d3c) main_fs_bigclock_clock_pane

0x89f3,	// (0x00013d4b) main_fs_bigclock_indi_pane_ParamLimits

0x89f3,	// (0x00013d4b) main_fs_bigclock_indi_pane

0x8a07,	// (0x00013d5f) main_fs_bigclock_swipe_pane_ParamLimits

0x8a07,	// (0x00013d5f) main_fs_bigclock_swipe_pane

0x9ef5,	// (0x0001524d) main_fs_clock_dumped_data

0xebfb,	// (0x00019f53) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xebfb,	// (0x00019f53) list_single_fs_bigclock_indicator_pane_g1

0xec15,	// (0x00019f6d) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xec15,	// (0x00019f6d) list_single_fs_bigclock_indicator_pane_g2

0xec2f,	// (0x00019f87) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xec2f,	// (0x00019f87) list_single_fs_bigclock_indicator_pane_g3

0xec49,	// (0x00019fa1) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xec49,	// (0x00019fa1) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfcaa,	// (0x0001b002) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfcaa,	// (0x0001b002) list_single_fs_bigclock_indicator_pane_g

0xec6d,	// (0x00019fc5) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xec6d,	// (0x00019fc5) list_single_fs_bigclock_indicator_pane_t1

0xec95,	// (0x00019fed) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xec95,	// (0x00019fed) list_single_fs_bigclock_indicator_pane_t2

0xecbd,	// (0x0001a015) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xecbd,	// (0x0001a015) list_single_fs_bigclock_indicator_pane_t3

0xece5,	// (0x0001a03d) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xece5,	// (0x0001a03d) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfcb5,	// (0x0001b00d) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfcb5,	// (0x0001b00d) list_single_fs_bigclock_indicator_pane_t

0x08f5,	// (0x0000bc4d) image3_infobar_fav_pane_ParamLimits

0x08f5,	// (0x0000bc4d) image3_infobar_fav_pane

0x0905,	// (0x0000bc5d) image3_infobar_loc_pane_ParamLimits

0x0905,	// (0x0000bc5d) image3_infobar_loc_pane

0x0919,	// (0x0000bc71) image3_infobar_time_pane_ParamLimits

0x0919,	// (0x0000bc71) image3_infobar_time_pane

0xcf0b,	// (0x00018263) image3_infobar_time_pane_g1

0x0929,	// (0x0000bc81) image3_infobar_time_pane_t1

0xcf0b,	// (0x00018263) image3_infobar_loc_pane_g1

0x0937,	// (0x0000bc8f) image3_infobar_loc_pane_g2

0x0001,

0xfe72,	// (0x0001b1ca) image3_infobar_loc_pane_g

0x093f,	// (0x0000bc97) image3_infobar_loc_pane_t1

0xcf0b,	// (0x00018263) image3_infobar_fav_pane_g1

0x094d,	// (0x0000bca5) image3_infobar_fav_pane_g2

0x0001,

0xfe77,	// (0x0001b1cf) image3_infobar_fav_pane_g

0x0955,	// (0x0000bcad) fs_bigclock_status_battery_pane

0x095e,	// (0x0000bcb6) fs_bigclock_status_signal_pane

0x0967,	// (0x0000bcbf) fs_bigclock_status_title_pane

0x0970,	// (0x0000bcc8) fs_bigclock_status_signal_pane_g1

0x0979,	// (0x0000bcd1) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe7c,	// (0x0001b1d4) fs_bigclock_status_signal_pane_g

0x0981,	// (0x0000bcd9) fs_bigclock_status_battery_pane_g1

0x098a,	// (0x0000bce2) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe81,	// (0x0001b1d9) fs_bigclock_status_battery_pane_g

0x0992,	// (0x0000bcea) fs_bigclock_status_title_pane_t1

0xcf0b,	// (0x00018263) main_fs_bigclock_clock_pane_g1

0x09a0,	// (0x0000bcf8) main_fs_bigclock_clock_pane_g2

0x09a0,	// (0x0000bcf8) main_fs_bigclock_clock_pane_g3

0x09a0,	// (0x0000bcf8) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe86,	// (0x0001b1de) main_fs_bigclock_clock_pane_g

0x09a8,	// (0x0000bd00) main_fs_bigclock_clock_pane_t1

0x09b6,	// (0x0000bd0e) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe8f,	// (0x0001b1e7) main_fs_bigclock_clock_pane_t

0x09c5,	// (0x0000bd1d) list_single_fs_bigclock_indicator_pane_ParamLimits

0x09c5,	// (0x0000bd1d) list_single_fs_bigclock_indicator_pane

0x964d,	// (0x000149a5) list_single_fs_bigclock_pane_ParamLimits

0x964d,	// (0x000149a5) list_single_fs_bigclock_pane

0x0a3d,	// (0x0000bd95) main_fs_bigclock_indicator_pane_t1

0x0a4c,	// (0x0000bda4) list_single_fs_bigclock_pane_g1

0x0a54,	// (0x0000bdac) list_single_fs_bigclock_pane_t1

0xcf0b,	// (0x00018263) main_fs_bigclock_swipe_pane_g1

0x0a92,	// (0x0000bdea) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfea0,	// (0x0001b1f8) main_fs_bigclock_swipe_pane_g

0x0a9a,	// (0x0000bdf2) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x0a9a,	// (0x0000bdf2) main_fs_bigclock_swipe_pane_t1

0x3e4c,	// (0x0000f1a4) call_type_pane_ParamLimits

0x9ef5,	// (0x0001524d) main_btmg_pane

0x047c,	// (0x0000b7d4) list_single_cale_mrui_row_pane_g2_ParamLimits

0x047c,	// (0x0000b7d4) list_single_cale_mrui_row_pane_g2

0x0001,

0xfe13,	// (0x0001b16b) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe13,	// (0x0001b16b) list_single_cale_mrui_row_pane_g

0x07af,	// (0x0000bb07) list_recal_vselct_arw_lo_pane

0x07b7,	// (0x0000bb0f) list_recal_vselct_arw_up_pane

0x07a6,	// (0x0000bafe) list_recal_vselct_pane

0x0ab7,	// (0x0000be0f) btmg_button_pane

0x96ad,	// (0x00014a05) main_btmg_pane_g1

0x9ef5,	// (0x0001524d) bg_button_pane_cp044

0x0ac7,	// (0x0000be1f) btmg_button_pane_t1

0xca0e,	// (0x00017d66) aid_listscroll_gen

0x9f48,	// (0x000152a0) main_cntbar_detail_pane

0xf0df,	// (0x0001a437) list_cmail_folder_pane

0xf0ef,	// (0x0001a447) sp_fs_scroll_pane_cp03_ParamLimits

0xe280,	// (0x000195d8) list_single_fs_dyc_pane_cp01_ParamLimits

0xe280,	// (0x000195d8) list_single_fs_dyc_pane_cp01

0x0aed,	// (0x0000be45) aid_size_cmail_indent

0xe2b8,	// (0x00019610) list_single_dyc_row_pane_cp01

0x96dd,	// (0x00014a35) cntbar_detail_list_pane_ParamLimits

0x96dd,	// (0x00014a35) cntbar_detail_list_pane

0x9723,	// (0x00014a7b) main_cntbar_detail_cont_pane_ParamLimits

0x9723,	// (0x00014a7b) main_cntbar_detail_cont_pane

0x9737,	// (0x00014a8f) scroll_pane_cp032_ParamLimits

0x9737,	// (0x00014a8f) scroll_pane_cp032

0x9743,	// (0x00014a9b) cntbar_detail_list_event_pane_ParamLimits

0x9743,	// (0x00014a9b) cntbar_detail_list_event_pane

0x96ed,	// (0x00014a45) cntbar_detail_list_shct_pane

0x0b6e,	// (0x0000bec6) aid_list_gen

0xa810,	// (0x00015b68) aid_scroll

0xe1d2,	// (0x0001952a) aid_size_touch_scroll_bar

0xef49,	// (0x0001a2a1) aid_list_double

0x9754,	// (0x00014aac) aid_list_single

0xe2ca,	// (0x00019622) aid_list_single_lg

0x975d,	// (0x00014ab5) aid_list_z_g_a_sm

0x9765,	// (0x00014abd) aid_list_z_g_d

0x976d,	// (0x00014ac5) aid_txt_z_prm

0x977b,	// (0x00014ad3) aid_txt_z_prm_cp01

0x9789,	// (0x00014ae1) aid_txt_z_sec

0x9797,	// (0x00014aef) main_cntbar_detail_cont_pane_g1_ParamLimits

0x9797,	// (0x00014aef) main_cntbar_detail_cont_pane_g1

0x97ab,	// (0x00014b03) main_cntbar_detail_cont_pane_g2_ParamLimits

0x97ab,	// (0x00014b03) main_cntbar_detail_cont_pane_g2

0x0001,

0xfea5,	// (0x0001b1fd) main_cntbar_detail_cont_pane_g_ParamLimits

0xfea5,	// (0x0001b1fd) main_cntbar_detail_cont_pane_g

0x0bdc,	// (0x0000bf34) main_cntbar_detail_cont_pane_t1

0x0bea,	// (0x0000bf42) main_cntbar_detail_cont_pane_t2

0x0bf8,	// (0x0000bf50) main_cntbar_detail_cont_pane_t3

0x0002,

0xfeaa,	// (0x0001b202) main_cntbar_detail_cont_pane_t

0x97bb,	// (0x00014b13) cell_cntbar_detail_list_shct_pane_ParamLimits

0x97bb,	// (0x00014b13) cell_cntbar_detail_list_shct_pane

0x0c18,	// (0x0000bf70) cntbar_detail_list_shct_pane_g1

0x0c21,	// (0x0000bf79) cntbar_detail_list_shct_pane_g2

0x0001,

0xfeb1,	// (0x0001b209) cntbar_detail_list_shct_pane_g

0x97cd,	// (0x00014b25) cntbar_detail_list_event_pane_g1_ParamLimits

0x97cd,	// (0x00014b25) cntbar_detail_list_event_pane_g1

0x97d9,	// (0x00014b31) cntbar_detail_list_event_pane_g2_ParamLimits

0x97d9,	// (0x00014b31) cntbar_detail_list_event_pane_g2

0x0005,

0xfeb6,	// (0x0001b20e) cntbar_detail_list_event_pane_g_ParamLimits

0xfeb6,	// (0x0001b20e) cntbar_detail_list_event_pane_g

0x9845,	// (0x00014b9d) cntbar_detail_list_event_pane_t1_ParamLimits

0x9845,	// (0x00014b9d) cntbar_detail_list_event_pane_t1

0x985a,	// (0x00014bb2) cntbar_detail_list_event_pane_t2_ParamLimits

0x985a,	// (0x00014bb2) cntbar_detail_list_event_pane_t2

0x0002,

0xfec3,	// (0x0001b21b) cntbar_detail_list_event_pane_t_ParamLimits

0xfec3,	// (0x0001b21b) cntbar_detail_list_event_pane_t

0xcf0b,	// (0x00018263) cell_cntbar_detail_list_shct_pane_g1

0xb4df,	// (0x00016837) navi_pane_mv_g3

0x9f48,	// (0x000152a0) main_cntbar_detail_pane_ParamLimits

0x9ef5,	// (0x0001524d) main_notif_wgt_pane

0xd7c8,	// (0x00018b20) aid_tch_main_mp4_pane_g4

0xd9d2,	// (0x00018d2a) popup_slider_window_cp02

0x07a6,	// (0x0000bafe) list_recal_day_event_pane

0x96b5,	// (0x00014a0d) cntbar_detail_btn_pane_ParamLimits

0x96b5,	// (0x00014a0d) cntbar_detail_btn_pane

0x96c8,	// (0x00014a20) cntbar_detail_btn_pane_cp01_ParamLimits

0x96c8,	// (0x00014a20) cntbar_detail_btn_pane_cp01

0x96ed,	// (0x00014a45) cntbar_detail_list_shct_pane_ParamLimits

0x96fd,	// (0x00014a55) cntbar_detail_pane_g1_ParamLimits

0x96fd,	// (0x00014a55) cntbar_detail_pane_g1

0x970d,	// (0x00014a65) cntbar_detail_pane_t1_ParamLimits

0x970d,	// (0x00014a65) cntbar_detail_pane_t1

0x97e5,	// (0x00014b3d) cntbar_detail_list_event_pane_g3_ParamLimits

0x97e5,	// (0x00014b3d) cntbar_detail_list_event_pane_g3

0x97fd,	// (0x00014b55) cntbar_detail_list_event_pane_g4_ParamLimits

0x97fd,	// (0x00014b55) cntbar_detail_list_event_pane_g4

0x9815,	// (0x00014b6d) cntbar_detail_list_event_pane_g5_ParamLimits

0x9815,	// (0x00014b6d) cntbar_detail_list_event_pane_g5

0x982d,	// (0x00014b85) cntbar_detail_list_event_pane_g6_ParamLimits

0x982d,	// (0x00014b85) cntbar_detail_list_event_pane_g6

0x986f,	// (0x00014bc7) cntbar_detail_list_event_pane_t3_ParamLimits

0x986f,	// (0x00014bc7) cntbar_detail_list_event_pane_t3

0x9881,	// (0x00014bd9) popup_notif_wgt_window_ParamLimits

0x9881,	// (0x00014bd9) popup_notif_wgt_window

0x9896,	// (0x00014bee) popup_submenu_window_cp01_ParamLimits

0x9896,	// (0x00014bee) popup_submenu_window_cp01

0xb520,	// (0x00016878) bg_popup_window_pane_cp10

0x0cf8,	// (0x0000c050) listscroll_notif_wgt_pane

0x0d00,	// (0x0000c058) list_notif_wgt_window

0x0d09,	// (0x0000c061) scroll_pane_cp033

0x0d12,	// (0x0000c06a) list_notif_wgt_row_pane_ParamLimits

0x0d12,	// (0x0000c06a) list_notif_wgt_row_pane

0x0d24,	// (0x0000c07c) aid_size_list_notif_wgt_del

0x0d2d,	// (0x0000c085) list_notif_wgt_row_pane_g1

0x0d35,	// (0x0000c08d) list_notif_wgt_row_pane_g2

0x0d3d,	// (0x0000c095) list_notif_wgt_row_pane_g3

0x0002,

0xfeca,	// (0x0001b222) list_notif_wgt_row_pane_g

0x0d46,	// (0x0000c09e) list_notif_wgt_row_pane_t1

0x0d54,	// (0x0000c0ac) list_notif_wgt_row_pane_t2

0x0d62,	// (0x0000c0ba) list_notif_wgt_row_pane_t3

0x0002,

0xfed1,	// (0x0001b229) list_notif_wgt_row_pane_t

0xdeca,	// (0x00019222) list_recal_day_event_pane_g1

0x0d70,	// (0x0000c0c8) list_recal_day_event_pane_t1

0x9ef5,	// (0x0001524d) bg_button_pane_cp045

0x98a6,	// (0x00014bfe) cntbar_detail_btn_pane_t1

0xca16,	// (0x00017d6e) main_callh_pane_ParamLimits

0xca16,	// (0x00017d6e) main_callh_pane

0x9ef5,	// (0x0001524d) main_coverflow0_pane

0x9ef5,	// (0x0001524d) main_wgtman_pane

0x8a13,	// (0x00013d6b) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x8a13,	// (0x00013d6b) main_fs_bigclock_unlock_btn_pane

0xf0b9,	// (0x0001a411) bg_button_pane_cp16

0xf0c9,	// (0x0001a421) cell_tport_appsw_pane_g3

0x98b4,	// (0x00014c0c) cf0_flow_pane_ParamLimits

0x98b4,	// (0x00014c0c) cf0_flow_pane

0x0d9c,	// (0x0000c0f4) listscroll_cf0_pane

0x0da5,	// (0x0000c0fd) main_cf0_pane_g1

0x98c9,	// (0x00014c21) main_cf0_pane_t1_ParamLimits

0x98c9,	// (0x00014c21) main_cf0_pane_t1

0x98df,	// (0x00014c37) main_cf0_pane_t2_ParamLimits

0x98df,	// (0x00014c37) main_cf0_pane_t2

0x0001,

0xfed8,	// (0x0001b230) main_cf0_pane_t_ParamLimits

0xfed8,	// (0x0001b230) main_cf0_pane_t

0x0dd3,	// (0x0000c12b) scroll_pane_cp11

0x98f5,	// (0x00014c4d) cf0_flow_pane_g1

0x98fd,	// (0x00014c55) cf0_flow_pane_g2

0x0001,

0xfedd,	// (0x0001b235) cf0_flow_pane_g

0x9905,	// (0x00014c5d) cf0_flow_pane_t1

0x9ef5,	// (0x0001524d) main_call6_pane

0x9ef5,	// (0x0001524d) main_calllock_pane

0x9913,	// (0x00014c6b) call6_btn_grp_pane_ParamLimits

0x9913,	// (0x00014c6b) call6_btn_grp_pane

0x9929,	// (0x00014c81) call6_pane_g1_ParamLimits

0x9929,	// (0x00014c81) call6_pane_g1

0x993c,	// (0x00014c94) popup_call6_1st_window_ParamLimits

0x993c,	// (0x00014c94) popup_call6_1st_window

0x994b,	// (0x00014ca3) popup_call6_2nd_window_ParamLimits

0x994b,	// (0x00014ca3) popup_call6_2nd_window

0x995a,	// (0x00014cb2) cell_call6_btn_pane_ParamLimits

0x995a,	// (0x00014cb2) cell_call6_btn_pane

0xb520,	// (0x00016878) bg_popup_call2_in_pane_cp03

0x0e3b,	// (0x0000c193) popup_call6_1st_window_g1

0x0e43,	// (0x0000c19b) popup_call6_1st_window_g2

0x0e4b,	// (0x0000c1a3) popup_call6_1st_window_g3

0x0002,

0xfee2,	// (0x0001b23a) popup_call6_1st_window_g

0x0e53,	// (0x0000c1ab) popup_call6_1st_window_t1

0x0e62,	// (0x0000c1ba) popup_call6_1st_window_t2

0x0e70,	// (0x0000c1c8) popup_call6_1st_window_t3

0x0002,

0xfee9,	// (0x0001b241) popup_call6_1st_window_t

0xb520,	// (0x00016878) bg_popup_call2_in_pane_cp04

0x0e3b,	// (0x0000c193) popup_call6_2nd_window_g1

0x0e43,	// (0x0000c19b) popup_call6_2nd_window_g2

0x0e4b,	// (0x0000c1a3) popup_call6_2nd_window_g3

0x0002,

0xfee2,	// (0x0001b23a) popup_call6_2nd_window_g

0x0e53,	// (0x0000c1ab) popup_call6_2nd_window_t1

0x9ef5,	// (0x0001524d) bg_button_pane_cp15

0x0e7e,	// (0x0000c1d6) cell_call6_btn_pane_g1

0x0e87,	// (0x0000c1df) cell_call6_btn_pane_t1

0x996e,	// (0x00014cc6) listscroll_wgtman_pane_ParamLimits

0x996e,	// (0x00014cc6) listscroll_wgtman_pane

0x998d,	// (0x00014ce5) wgtman_btn_pane_ParamLimits

0x998d,	// (0x00014ce5) wgtman_btn_pane

0xb361,	// (0x000166b9) aid_scroll_copy1

0x0ee3,	// (0x0000c23b) list_wgtman_pane

0x99cd,	// (0x00014d25) wgtman_btn_pane_g1_ParamLimits

0x99cd,	// (0x00014d25) wgtman_btn_pane_g1

0x99f9,	// (0x00014d51) wgtman_btn_pane_t1_ParamLimits

0x99f9,	// (0x00014d51) wgtman_btn_pane_t1

0x0f4c,	// (0x0000c2a4) wgtman_btn_pane_t2_ParamLimits

0x0f4c,	// (0x0000c2a4) wgtman_btn_pane_t2

0x0001,

0xfef0,	// (0x0001b248) wgtman_btn_pane_t_ParamLimits

0xfef0,	// (0x0001b248) wgtman_btn_pane_t

0x9a36,	// (0x00014d8e) listrow_wgtman_pane_ParamLimits

0x9a36,	// (0x00014d8e) listrow_wgtman_pane

0x9a47,	// (0x00014d9f) listrow_wgtman_pane_g1

0x9a50,	// (0x00014da8) listrow_wgtman_pane_g2

0x0001,

0xfef5,	// (0x0001b24d) listrow_wgtman_pane_g

0x9a58,	// (0x00014db0) listrow_wgtman_pane_t1

0x9a66,	// (0x00014dbe) listrow_wgtman_pane_t2

0x0001,

0xfefa,	// (0x0001b252) listrow_wgtman_pane_t

0x9a74,	// (0x00014dcc) wait_bar_pane_cp09

0x0fa9,	// (0x0000c301) main_calllock_btn_pane

0x0fb1,	// (0x0000c309) main_calllock_pane_g1

0x9ef5,	// (0x0001524d) bg_button_pane_cp17

0x0fba,	// (0x0000c312) main_calllock_btn_pane_g1

0x0fc3,	// (0x0000c31b) main_calllock_btn_pane_t1

0x9ef5,	// (0x0001524d) main_dialer3_pane

0x9ef5,	// (0x0001524d) main_fmrd2_pane

0xcf0b,	// (0x00018263) main_fs_bigclock_unlock_btn_pane_g1

0x0fda,	// (0x0000c332) main_fs_bigclock_unlock_btn_pane_t1

0x9a7c,	// (0x00014dd4) area_fmrd2_info_pane_ParamLimits

0x9a7c,	// (0x00014dd4) area_fmrd2_info_pane

0x9a8b,	// (0x00014de3) area_fmrd2_visual_pane_ParamLimits

0x9a8b,	// (0x00014de3) area_fmrd2_visual_pane

0x9a99,	// (0x00014df1) fmrd2_indi_pane_ParamLimits

0x9a99,	// (0x00014df1) fmrd2_indi_pane

0x9aa6,	// (0x00014dfe) area_fmrd2_visual_pane_g1

0x9aae,	// (0x00014e06) area_fmrd2_visual_pane_t1

0x9abc,	// (0x00014e14) area_fmrd2_visual_pane_t2

0x9aca,	// (0x00014e22) area_fmrd2_visual_pane_t3

0x0002,

0xff04,	// (0x0001b25c) area_fmrd2_visual_pane_t

0x9ad8,	// (0x00014e30) area_fmrd2_info_pane_g1

0x9ae0,	// (0x00014e38) area_fmrd2_info_pane_t1

0x9aee,	// (0x00014e46) area_fmrd2_info_pane_t2

0x9afc,	// (0x00014e54) area_fmrd2_info_pane_t3

0x9b0a,	// (0x00014e62) area_fmrd2_info_pane_t4

0x0003,

0xff0b,	// (0x0001b263) area_fmrd2_info_pane_t

0x9b18,	// (0x00014e70) fmrd2_indi_pane_t1

0x9b26,	// (0x00014e7e) fmrd2_indi_pane_t2

0x9b34,	// (0x00014e8c) fmrd2_indi_pane_t3

0x0002,

0xff14,	// (0x0001b26c) fmrd2_indi_pane_t

0xec58,	// (0x00019fb0) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xec58,	// (0x00019fb0) list_single_fs_bigclock_indicator_pane_g5

0xecfa,	// (0x0001a052) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xecfa,	// (0x0001a052) list_single_fs_bigclock_indicator_pane_t5

0x9328,	// (0x00014680) aid_cell_bcale_month_pane_ParamLimits

0x9328,	// (0x00014680) aid_cell_bcale_month_pane

0x933a,	// (0x00014692) bcale_month_pane_ParamLimits

0x933a,	// (0x00014692) bcale_month_pane

0x934c,	// (0x000146a4) bcale_preview_pane_ParamLimits

0x934c,	// (0x000146a4) bcale_preview_pane

0x0a54,	// (0x0000bdac) list_single_fs_bigclock_pane_t1_ParamLimits

0x0a6e,	// (0x0000bdc6) list_single_fs_bigclock_pane_t2_ParamLimits

0x0a6e,	// (0x0000bdc6) list_single_fs_bigclock_pane_t2

0x0001,

0xfe9b,	// (0x0001b1f3) list_single_fs_bigclock_pane_t_ParamLimits

0xfe9b,	// (0x0001b1f3) list_single_fs_bigclock_pane_t

0x0fd2,	// (0x0000c32a) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfeff,	// (0x0001b257) main_fs_bigclock_unlock_btn_pane_g

0x9b42,	// (0x00014e9a) aid_dia3_key_size_ParamLimits

0x9b42,	// (0x00014e9a) aid_dia3_key_size

0x9b51,	// (0x00014ea9) aid_dia3_listrow_size_ParamLimits

0x9b51,	// (0x00014ea9) aid_dia3_listrow_size

0x9b64,	// (0x00014ebc) dia3_keypad_fun_pane_ParamLimits

0x9b64,	// (0x00014ebc) dia3_keypad_fun_pane

0x9b78,	// (0x00014ed0) dia3_keypad_num_pane_ParamLimits

0x9b78,	// (0x00014ed0) dia3_keypad_num_pane

0x9b89,	// (0x00014ee1) dia3_listscroll_pane_ParamLimits

0x9b89,	// (0x00014ee1) dia3_listscroll_pane

0x9b9a,	// (0x00014ef2) dia3_numentry_pane_ParamLimits

0x9b9a,	// (0x00014ef2) dia3_numentry_pane

0x10f5,	// (0x0000c44d) dia3_list_pane

0x10fe,	// (0x0000c456) scroll_pane_cp12

0x9ef5,	// (0x0001524d) bg_dia3_numentry_pane

0x9bac,	// (0x00014f04) dia3_numentry_pane_t1

0x9bbb,	// (0x00014f13) cell_dia3_key_num_pane

0x9bc3,	// (0x00014f1b) cell_dia3_key0_fun_pane_ParamLimits

0x9bc3,	// (0x00014f1b) cell_dia3_key0_fun_pane

0x9bd7,	// (0x00014f2f) cell_dia3_key1_fun_pane_ParamLimits

0x9bd7,	// (0x00014f2f) cell_dia3_key1_fun_pane

0x9bee,	// (0x00014f46) dia3_listrow_pane

0xe98a,	// (0x00019ce2) bg_dia3_numentry_pane_g1

0x9ef5,	// (0x0001524d) bg_button_pane_cp21

0x1145,	// (0x0000c49d) cell_dia3_key_num_pane_t1

0x1153,	// (0x0000c4ab) cell_dia3_key_num_pane_t2

0x1162,	// (0x0000c4ba) cell_dia3_key_num_pane_t3

0x1171,	// (0x0000c4c9) cell_dia3_key_num_pane_t4

0x0003,

0xff1b,	// (0x0001b273) cell_dia3_key_num_pane_t

0x9ef5,	// (0x0001524d) bg_button_pane_cp19

0x1180,	// (0x0000c4d8) cell_dia3_key0_fun_pane_g1

0x9ef5,	// (0x0001524d) bg_button_pane_cp20

0x9c00,	// (0x00014f58) cell_dia3_key1_fun_pane_g1

0x9c08,	// (0x00014f60) area_left_week_number_pane

0x0b80,	// (0x0000bed8) area_top_day_name_pane

0x9c11,	// (0x00014f69) frame_month_view_pane

0x9c19,	// (0x00014f71) grid_month_view_pane

0x9c23,	// (0x00014f7b) cell_top_day_name_pane_ParamLimits

0x9c23,	// (0x00014f7b) cell_top_day_name_pane

0x9c39,	// (0x00014f91) cell_area_left_week_number_pane_ParamLimits

0x9c39,	// (0x00014f91) cell_area_left_week_number_pane

0x9c4d,	// (0x00014fa5) cell_month_view_pane_ParamLimits

0x9c4d,	// (0x00014fa5) cell_month_view_pane

0x11f9,	// (0x0000c551) frm_month_g1

0x9c68,	// (0x00014fc0) frm_month_g2

0x9c70,	// (0x00014fc8) frm_month_g3

0x9c78,	// (0x00014fd0) frm_month_g4

0x9c80,	// (0x00014fd8) frm_month_g5

0x9c88,	// (0x00014fe0) frm_month_g6

0x9c90,	// (0x00014fe8) frm_month_g7

0x1232,	// (0x0000c58a) frm_month_g8

0x9c98,	// (0x00014ff0) frm_month_g9

0x9ca1,	// (0x00014ff9) frm_month_g10

0x9caa,	// (0x00015002) frm_month_g11

0x9cb3,	// (0x0001500b) frm_month_g12

0x9cbc,	// (0x00015014) frm_month_g13

0x9cc5,	// (0x0001501d) frm_month_g14

0x9cce,	// (0x00015026) frm_month_g15

0x9cd7,	// (0x0001502f) frm_month_g16

0x000f,

0xff24,	// (0x0001b27c) frm_month_g

0x9ce0,	// (0x00015038) cell_top_day_name_pane_t1

0x9cef,	// (0x00015047) cell_area_left_week_number_pane_g1

0x9ce0,	// (0x00015038) cell_area_left_week_number_pane_t1

0xcf0b,	// (0x00018263) cell_month_view_pane_g1

0x9cf7,	// (0x0001504f) cell_month_view_pane_t1

0x9ef5,	// (0x0001524d) main_fps_pane

0xeee4,	// (0x0001a23c) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xeee4,	// (0x0001a23c) cmail_ddmenu_btn02_pane_cp1

0xef00,	// (0x0001a258) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xef00,	// (0x0001a258) cmail_ddmenu_btn02_pane_cp2

0x95b5,	// (0x0001490d) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x95b5,	// (0x0001490d) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe4c,	// (0x0001b1a4) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe4c,	// (0x0001b1a4) cmail_ddmenu_btn02_pane_g

0x95d6,	// (0x0001492e) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x95d6,	// (0x0001492e) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe51,	// (0x0001b1a9) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe51,	// (0x0001b1a9) cmail_ddmenu_btn02_pane_t

0x9d06,	// (0x0001505e) fps_text_pane_ParamLimits

0x9d06,	// (0x0001505e) fps_text_pane

0x9d1c,	// (0x00015074) main_fps_pane_g1_ParamLimits

0x9d1c,	// (0x00015074) main_fps_pane_g1

0x9d32,	// (0x0001508a) wait_bar_pane_cp010_ParamLimits

0x9d32,	// (0x0001508a) wait_bar_pane_cp010

0x9d43,	// (0x0001509b) fps_text_pane_t1_ParamLimits

0x9d43,	// (0x0001509b) fps_text_pane_t1

0x6eba,	// (0x00012212) cam4_image_uncrop_pane_g1

0x6ec3,	// (0x0001221b) cam4_image_uncrop_pane_g2

0x6ecc,	// (0x00012224) cam4_image_uncrop_pane_g3

0x6ed5,	// (0x0001222d) cam4_image_uncrop_pane_g4

0x0003,

0xf92f,	// (0x0001ac87) cam4_image_uncrop_pane_g

0x9bee,	// (0x00014f46) dia3_listrow_pane_ParamLimits

0x9ef5,	// (0x0001524d) main_phob2_pane

0x9193,	// (0x000144eb) cell_tport_appsw_pane_cp02_ParamLimits

0x9193,	// (0x000144eb) cell_tport_appsw_pane_cp02

0x91a3,	// (0x000144fb) cell_tport_appsw_pane_cp03_ParamLimits

0x91a3,	// (0x000144fb) cell_tport_appsw_pane_cp03

0x9ef5,	// (0x0001524d) phob2_contact_card_pane

0x9ef5,	// (0x0001524d) phob2_listscroll_pane

0x12de,	// (0x0000c636) phob2_list_pane

0x12e6,	// (0x0000c63e) scroll_pane_cp034

0x9d5b,	// (0x000150b3) phob2_cc_data_pane_ParamLimits

0x9d5b,	// (0x000150b3) phob2_cc_data_pane

0x9d78,	// (0x000150d0) phob2_cc_listscroll_pane_ParamLimits

0x9d78,	// (0x000150d0) phob2_cc_listscroll_pane

0x9d94,	// (0x000150ec) list_double_large_graphic_phob2_pane_ParamLimits

0x9d94,	// (0x000150ec) list_double_large_graphic_phob2_pane

0x9da6,	// (0x000150fe) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9da6,	// (0x000150fe) list_double_large_graphic_phob2_pane_g1

0x9db3,	// (0x0001510b) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9db3,	// (0x0001510b) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff45,	// (0x0001b29d) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff45,	// (0x0001b29d) list_double_large_graphic_phob2_pane_g

0x9dbf,	// (0x00015117) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9dbf,	// (0x00015117) list_double_large_graphic_phob2_pane_t1

0x9dd4,	// (0x0001512c) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9dd4,	// (0x0001512c) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff4a,	// (0x0001b2a2) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff4a,	// (0x0001b2a2) list_double_large_graphic_phob2_pane_t

0x9ef5,	// (0x0001524d) list_highlight_pane_cp024

0x1371,	// (0x0000c6c9) phob2_cc_button_pane

0x9de6,	// (0x0001513e) phob2_cc_data_pane_g1_ParamLimits

0x9de6,	// (0x0001513e) phob2_cc_data_pane_g1

0x9dfb,	// (0x00015153) phob2_cc_data_pane_g2_ParamLimits

0x9dfb,	// (0x00015153) phob2_cc_data_pane_g2

0x0001,

0xff4f,	// (0x0001b2a7) phob2_cc_data_pane_g_ParamLimits

0xff4f,	// (0x0001b2a7) phob2_cc_data_pane_g

0x9e0d,	// (0x00015165) phob2_cc_data_pane_t1_ParamLimits

0x9e0d,	// (0x00015165) phob2_cc_data_pane_t1

0x9e25,	// (0x0001517d) phob2_cc_data_pane_t2_ParamLimits

0x9e25,	// (0x0001517d) phob2_cc_data_pane_t2

0x9e3d,	// (0x00015195) phob2_cc_data_pane_t3_ParamLimits

0x9e3d,	// (0x00015195) phob2_cc_data_pane_t3

0x0002,

0xff54,	// (0x0001b2ac) phob2_cc_data_pane_t_ParamLimits

0xff54,	// (0x0001b2ac) phob2_cc_data_pane_t

0x13c7,	// (0x0000c71f) phob2_cc_list_pane_ParamLimits

0x13c7,	// (0x0000c71f) phob2_cc_list_pane

0x13d3,	// (0x0000c72b) scroll_pane_cp035_ParamLimits

0x13d3,	// (0x0000c72b) scroll_pane_cp035

0x9f48,	// (0x000152a0) bg_button_pane_cp033

0x13df,	// (0x0000c737) phob2_cc_button_pane_g1

0x13eb,	// (0x0000c743) phob2_cc_button_pane_t1

0x1400,	// (0x0000c758) phob2_cc_button_pane_t2

0x0001,

0xff5b,	// (0x0001b2b3) phob2_cc_button_pane_t

0x9e55,	// (0x000151ad) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9e55,	// (0x000151ad) list_double_large_graphic_phob2_cc_pane

0x9e67,	// (0x000151bf) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9e67,	// (0x000151bf) list_double_large_graphic_phob2_cc_pane_g1

0x9e73,	// (0x000151cb) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9e73,	// (0x000151cb) list_double_large_graphic_phob2_cc_pane_g2

0x9e7f,	// (0x000151d7) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9e7f,	// (0x000151d7) list_double_large_graphic_phob2_cc_pane_g3

0x9e8b,	// (0x000151e3) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9e8b,	// (0x000151e3) list_double_large_graphic_phob2_cc_pane_g4

0x9e97,	// (0x000151ef) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9e97,	// (0x000151ef) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff60,	// (0x0001b2b8) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff60,	// (0x0001b2b8) list_double_large_graphic_phob2_cc_pane_g

0x9ea3,	// (0x000151fb) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9ea3,	// (0x000151fb) list_double_large_graphic_phob2_cc_pane_t1

0x9ecc,	// (0x00015224) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9ecc,	// (0x00015224) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff6b,	// (0x0001b2c3) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff6b,	// (0x0001b2c3) list_double_large_graphic_phob2_cc_pane_t

0x14ce,	// (0x0000c826) list_highlight_pane_cp025_ParamLimits

0x14ce,	// (0x0000c826) list_highlight_pane_cp025

0x9f48,	// (0x000152a0) bg_button_pane_cp033_ParamLimits

0x13df,	// (0x0000c737) phob2_cc_button_pane_g1_ParamLimits

0x13eb,	// (0x0000c743) phob2_cc_button_pane_t1_ParamLimits

0x1400,	// (0x0000c758) phob2_cc_button_pane_t2_ParamLimits

0xff5b,	// (0x0001b2b3) phob2_cc_button_pane_t_ParamLimits

0x258c,	// (0x0000d8e4) popup_wgtman_window

0xe9aa,	// (0x00019d02) scroll_pane_cp038

0x99af,	// (0x00014d07) wgtman_btn_pane_cp_01_ParamLimits

0x99af,	// (0x00014d07) wgtman_btn_pane_cp_01

0x14dc,	// (0x0000c834) wgtman_content_pane

0x14e5,	// (0x0000c83d) wgtman_heading_pane

0x9ef5,	// (0x0001524d) bg_heading_pane_cp02

0x14ee,	// (0x0000c846) wgtman_heading_pane_g1

0x14f6,	// (0x0000c84e) wgtman_heading_pane_t1

0x1504,	// (0x0000c85c) scroll_pane_cp036

0x150c,	// (0x0000c864) wgtman_list_pane

0x1514,	// (0x0000c86c) wgtman_list_pane_t1_ParamLimits

0x1514,	// (0x0000c86c) wgtman_list_pane_t1
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

} // end of namespace AknLayoutScalable_Elaf_pql_apps_qvga_lsc_Normal

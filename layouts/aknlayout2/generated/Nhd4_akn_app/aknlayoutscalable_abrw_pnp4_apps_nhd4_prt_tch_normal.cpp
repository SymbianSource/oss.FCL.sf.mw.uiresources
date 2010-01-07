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

#include "aknlayoutscalable_abrw_pnp4_apps_nhd4_prt_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnp4_apps_nhd4_prt_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x000161d0 };

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
0x841d,	// (0x0001e5ed) Screen

0x8429,	// (0x0001e5f9) application_window

0x8469,	// (0x0001e639) area_bottom_pane_ParamLimits

0x8469,	// (0x0001e639) area_bottom_pane

0x849e,	// (0x0001e66e) area_top_pane_ParamLimits

0x849e,	// (0x0001e66e) area_top_pane

0x05f4,	// (0x000167c4) call_video_uplink_pane_ParamLimits

0x05f4,	// (0x000167c4) call_video_uplink_pane

0x852c,	// (0x0001e6fc) main_pane_ParamLimits

0x852c,	// (0x0001e6fc) main_pane

0x303d,	// (0x0001920d) context_pane

0xb077,	// (0x00021247) navi_pane

0xb097,	// (0x00021267) popup_cale_events_window_ParamLimits

0xb097,	// (0x00021267) popup_cale_events_window

0x3050,	// (0x00019220) popup_mup_playback_window

0xb0af,	// (0x0002127f) signal_pane

0x0dbd,	// (0x00016f8d) main_browser_pane

0x1b59,	// (0x00017d29) main_burst_pane

0xaf4d,	// (0x0002111d) main_calc_pane

0x1b59,	// (0x00017d29) main_cale_day_pane

0x0dbd,	// (0x00016f8d) main_cale_month_pane

0x1b59,	// (0x00017d29) main_cale_week_pane

0x1b59,	// (0x00017d29) main_call_pane

0x0a31,	// (0x00016c01) main_call_poc_pane

0x1b59,	// (0x00017d29) main_camera_pane

0x1b59,	// (0x00017d29) main_chi_dic_pane

0x19e8,	// (0x00017bb8) main_clock_pane

0x0a31,	// (0x00016c01) main_fmradio_pane

0x1b59,	// (0x00017d29) main_graph_messa_pane

0x0a31,	// (0x00016c01) main_help_pane

0x0dbd,	// (0x00016f8d) main_im_pane

0x0c8c,	// (0x00016e5c) main_image_pane_ParamLimits

0x0c8c,	// (0x00016e5c) main_image_pane

0x0a31,	// (0x00016c01) main_location2_pane

0x1b59,	// (0x00017d29) main_location_pane

0x0a31,	// (0x00016c01) main_messa_pane

0x0a31,	// (0x00016c01) main_mp2_pane

0x1b59,	// (0x00017d29) main_mp_pane

0x0a31,	// (0x00016c01) main_msg_pane

0x0a31,	// (0x00016c01) main_mup_eq_pane

0x0a31,	// (0x00016c01) main_mup_pane

0x1b59,	// (0x00017d29) main_notes_pane

0x0a31,	// (0x00016c01) main_pec_pane

0x0a31,	// (0x00016c01) main_phob_pane

0x0a31,	// (0x00016c01) main_pinb_pane

0x0a31,	// (0x00016c01) main_postcard_pane

0x0a31,	// (0x00016c01) main_qdial_pane

0x1b59,	// (0x00017d29) main_skin_pane

0x0a31,	// (0x00016c01) main_smil2_pane

0x1b59,	// (0x00017d29) main_smil_pane

0x1b59,	// (0x00017d29) main_video_pane

0x1b59,	// (0x00017d29) main_video_tele_pane

0x0c8c,	// (0x00016e5c) main_viewer_pane_ParamLimits

0x0c8c,	// (0x00016e5c) main_viewer_pane

0x1b59,	// (0x00017d29) main_vorec_pane

0xaf83,	// (0x00021153) popup_blid_sat_info_window_ParamLimits

0xaf83,	// (0x00021153) popup_blid_sat_info_window

0xaf99,	// (0x00021169) popup_dyc_status_message_window_ParamLimits

0xaf99,	// (0x00021169) popup_dyc_status_message_window

0xafa7,	// (0x00021177) popup_grid_large_graphic_window_ParamLimits

0xafa7,	// (0x00021177) popup_grid_large_graphic_window

0xb01b,	// (0x000211eb) popup_loc_request_window_ParamLimits

0xb01b,	// (0x000211eb) popup_loc_request_window

0xb04f,	// (0x0002121f) popup_wml_address_window_ParamLimits

0xb04f,	// (0x0002121f) popup_wml_address_window

0xae25,	// (0x00020ff5) call_muted_g1

0xaadc,	// (0x00020cac) popup_call_audio_conf_window_ParamLimits

0xaadc,	// (0x00020cac) popup_call_audio_conf_window

0xae35,	// (0x00021005) popup_call_audio_first_window_ParamLimits

0xae35,	// (0x00021005) popup_call_audio_first_window

0xae75,	// (0x00021045) popup_call_audio_in_window_ParamLimits

0xae75,	// (0x00021045) popup_call_audio_in_window

0xae99,	// (0x00021069) popup_call_audio_out_window_ParamLimits

0xae99,	// (0x00021069) popup_call_audio_out_window

0xaebb,	// (0x0002108b) popup_call_audio_second_window_ParamLimits

0xaebb,	// (0x0002108b) popup_call_audio_second_window

0xaeeb,	// (0x000210bb) popup_call_audio_wait_window_ParamLimits

0xaeeb,	// (0x000210bb) popup_call_audio_wait_window

0xaf0c,	// (0x000210dc) popup_number_entry_window_ParamLimits

0xaf0c,	// (0x000210dc) popup_number_entry_window

0x0620,	// (0x000167f0) bg_popup_call_pane_cp05_ParamLimits

0x0620,	// (0x000167f0) bg_popup_call_pane_cp05

0x0640,	// (0x00016810) popup_number_entry_window_t1

0x0653,	// (0x00016823) popup_number_entry_window_t2

0x0665,	// (0x00016835) popup_number_entry_window_t3

0x0003,

0xf0fb,	// (0x000252cb) popup_number_entry_window_t

0x0677,	// (0x00016847) text_title_cp2

0x068a,	// (0x0001685a) bg_popup_call_pane_cp_ParamLimits

0x068a,	// (0x0001685a) bg_popup_call_pane_cp

0x0698,	// (0x00016868) call_thumbnail_pane

0x06a0,	// (0x00016870) popup_call_audio_in_window_g1_ParamLimits

0x06a0,	// (0x00016870) popup_call_audio_in_window_g1

0x06ac,	// (0x0001687c) popup_call_audio_in_window_g2_ParamLimits

0x06ac,	// (0x0001687c) popup_call_audio_in_window_g2

0x06b8,	// (0x00016888) popup_call_audio_in_window_g3_ParamLimits

0x06b8,	// (0x00016888) popup_call_audio_in_window_g3

0x0002,

0xf104,	// (0x000252d4) popup_call_audio_in_window_g_ParamLimits

0xf104,	// (0x000252d4) popup_call_audio_in_window_g

0x06c4,	// (0x00016894) popup_call_audio_in_window_t1_ParamLimits

0x06c4,	// (0x00016894) popup_call_audio_in_window_t1

0x06df,	// (0x000168af) popup_call_audio_in_window_t2_ParamLimits

0x06df,	// (0x000168af) popup_call_audio_in_window_t2

0x06fa,	// (0x000168ca) popup_call_audio_in_window_t3_ParamLimits

0x06fa,	// (0x000168ca) popup_call_audio_in_window_t3

0x0002,

0xf10b,	// (0x000252db) popup_call_audio_in_window_t_ParamLimits

0xf10b,	// (0x000252db) popup_call_audio_in_window_t

0x068a,	// (0x0001685a) bg_popup_call_pane_cp01_ParamLimits

0x068a,	// (0x0001685a) bg_popup_call_pane_cp01

0x0698,	// (0x00016868) call_thumbnail_pane_cp02

0x070d,	// (0x000168dd) call_type_pane_cp022

0x0715,	// (0x000168e5) popup_call_audio_out_window_g1_ParamLimits

0x0715,	// (0x000168e5) popup_call_audio_out_window_g1

0x0727,	// (0x000168f7) popup_call_audio_out_window_g2_ParamLimits

0x0727,	// (0x000168f7) popup_call_audio_out_window_g2

0x0733,	// (0x00016903) popup_call_audio_out_window_g3_ParamLimits

0x0733,	// (0x00016903) popup_call_audio_out_window_g3

0x0002,

0xf112,	// (0x000252e2) popup_call_audio_out_window_g_ParamLimits

0xf112,	// (0x000252e2) popup_call_audio_out_window_g

0x0745,	// (0x00016915) popup_call_audio_out_window_t1_ParamLimits

0x0745,	// (0x00016915) popup_call_audio_out_window_t1

0x075d,	// (0x0001692d) popup_call_audio_out_window_t2_ParamLimits

0x075d,	// (0x0001692d) popup_call_audio_out_window_t2

0x0001,

0xf119,	// (0x000252e9) popup_call_audio_out_window_t_ParamLimits

0xf119,	// (0x000252e9) popup_call_audio_out_window_t

0x0772,	// (0x00016942) bg_popup_call_pane_ParamLimits

0x0772,	// (0x00016942) bg_popup_call_pane

0x8724,	// (0x0001e8f4) call_thumbnail_pane_cp_ParamLimits

0x8724,	// (0x0001e8f4) call_thumbnail_pane_cp

0x07f6,	// (0x000169c6) call_type_pane_cp01_ParamLimits

0x07f6,	// (0x000169c6) call_type_pane_cp01

0x083a,	// (0x00016a0a) popup_call_audio_first_window_g1_ParamLimits

0x083a,	// (0x00016a0a) popup_call_audio_first_window_g1

0x0886,	// (0x00016a56) popup_call_audio_first_window_g2_ParamLimits

0x0886,	// (0x00016a56) popup_call_audio_first_window_g2

0x0001,

0xf11e,	// (0x000252ee) popup_call_audio_first_window_g_ParamLimits

0xf11e,	// (0x000252ee) popup_call_audio_first_window_g

0x08ca,	// (0x00016a9a) popup_call_audio_first_window_t1_ParamLimits

0x08ca,	// (0x00016a9a) popup_call_audio_first_window_t1

0x0976,	// (0x00016b46) popup_call_audio_first_window_t4_ParamLimits

0x0976,	// (0x00016b46) popup_call_audio_first_window_t4

0x0a02,	// (0x00016bd2) popup_call_audio_first_window_t5_ParamLimits

0x0a02,	// (0x00016bd2) popup_call_audio_first_window_t5

0x0002,

0xf123,	// (0x000252f3) popup_call_audio_first_window_t_ParamLimits

0xf123,	// (0x000252f3) popup_call_audio_first_window_t

0x0a31,	// (0x00016c01) bg_popup_call_pane_cp02

0x0a3b,	// (0x00016c0b) call_type_pane_cp023

0x0a43,	// (0x00016c13) popup_call_audio_wait_window_g1

0x0a4b,	// (0x00016c1b) popup_call_audio_wait_window_g2

0x0001,

0xf12a,	// (0x000252fa) popup_call_audio_wait_window_g

0x0a53,	// (0x00016c23) popup_call_audio_wait_window_t3

0x0a61,	// (0x00016c31) bg_popup_call_pane_cp03_ParamLimits

0x0a61,	// (0x00016c31) bg_popup_call_pane_cp03

0x0ac1,	// (0x00016c91) call_thumbnail_pane_cp011_ParamLimits

0x0ac1,	// (0x00016c91) call_thumbnail_pane_cp011

0x0acd,	// (0x00016c9d) call_type_pane_cp034_ParamLimits

0x0acd,	// (0x00016c9d) call_type_pane_cp034

0x0b09,	// (0x00016cd9) popup_call_audio_second_window_g1_ParamLimits

0x0b09,	// (0x00016cd9) popup_call_audio_second_window_g1

0x0b45,	// (0x00016d15) popup_call_audio_second_window_g2_ParamLimits

0x0b45,	// (0x00016d15) popup_call_audio_second_window_g2

0x0001,

0xf12f,	// (0x000252ff) popup_call_audio_second_window_g_ParamLimits

0xf12f,	// (0x000252ff) popup_call_audio_second_window_g

0x0b81,	// (0x00016d51) popup_call_audio_second_window_t1_ParamLimits

0x0b81,	// (0x00016d51) popup_call_audio_second_window_t1

0x0c02,	// (0x00016dd2) popup_call_audio_second_window_t2_ParamLimits

0x0c02,	// (0x00016dd2) popup_call_audio_second_window_t2

0x0c38,	// (0x00016e08) popup_call_audio_second_window_t3_ParamLimits

0x0c38,	// (0x00016e08) popup_call_audio_second_window_t3

0x0002,

0xf134,	// (0x00025304) popup_call_audio_second_window_t_ParamLimits

0xf134,	// (0x00025304) popup_call_audio_second_window_t

0x0a31,	// (0x00016c01) bg_popup_call_pane_cp04

0x0c6e,	// (0x00016e3e) list_conf_pane

0x0c76,	// (0x00016e46) popup_call_audio_conf_window_t1

0x0c84,	// (0x00016e54) call_thumbnail_pane_g1

0x0c8c,	// (0x00016e5c) bg_pinb_pane_ParamLimits

0x0c8c,	// (0x00016e5c) bg_pinb_pane

0x0c9a,	// (0x00016e6a) find_pinb_pane

0x0ca3,	// (0x00016e73) listscroll_pinb_pane_ParamLimits

0x0ca3,	// (0x00016e73) listscroll_pinb_pane

0x0cb2,	// (0x00016e82) pinb_bg_pane_g1

0x8748,	// (0x0001e918) pinb_bg_pane_g2

0x8754,	// (0x0001e924) pinb_bg_pane_g3

0x8760,	// (0x0001e930) pinb_bg_pane_g4

0x876c,	// (0x0001e93c) pinb_bg_pane_g5

0x8778,	// (0x0001e948) pinb_bg_pane_g6

0x8783,	// (0x0001e953) pinb_bg_pane_g7

0x878e,	// (0x0001e95e) pinb_bg_pane_g8

0x8799,	// (0x0001e969) pinb_bg_pane_g9

0x87a3,	// (0x0001e973) pinb_bg_pane_g10

0x0009,

0xf13b,	// (0x0002530b) pinb_bg_pane_g

0x87b8,	// (0x0001e988) grid_pinb_pane

0x87c3,	// (0x0001e993) list_pinb_pane

0x87ce,	// (0x0001e99e) scroll_pane_cp01_ParamLimits

0x87ce,	// (0x0001e99e) scroll_pane_cp01

0x0cc4,	// (0x00016e94) find_pinb_pane_g1_ParamLimits

0x0cc4,	// (0x00016e94) find_pinb_pane_g1

0x0cdc,	// (0x00016eac) find_pinb_pane_t1

0x0cee,	// (0x00016ebe) find_pinb_pane_t2

0x0001,

0xf155,	// (0x00025325) find_pinb_pane_t

0x0d03,	// (0x00016ed3) input_focus_pane_cp01_ParamLimits

0x0d03,	// (0x00016ed3) input_focus_pane_cp01

0x87e0,	// (0x0001e9b0) cell_pinb_pane_ParamLimits

0x87e0,	// (0x0001e9b0) cell_pinb_pane

0x880e,	// (0x0001e9de) cell_pinb_pane_g1_ParamLimits

0x880e,	// (0x0001e9de) cell_pinb_pane_g1

0x8823,	// (0x0001e9f3) cell_pinb_pane_g2_ParamLimits

0x8823,	// (0x0001e9f3) cell_pinb_pane_g2

0x0d0f,	// (0x00016edf) cell_pinb_pane_g3_ParamLimits

0x0d0f,	// (0x00016edf) cell_pinb_pane_g3

0x0002,

0xf15a,	// (0x0002532a) cell_pinb_pane_g_ParamLimits

0xf15a,	// (0x0002532a) cell_pinb_pane_g

0x0a31,	// (0x00016c01) grid_highlight_pane_cp01

0x882f,	// (0x0001e9ff) list_pinb_item_pane_ParamLimits

0x882f,	// (0x0001e9ff) list_pinb_item_pane

0x0a31,	// (0x00016c01) list_highlight_pane_cp02

0x0d1b,	// (0x00016eeb) list_pinb_item_pane_g1_ParamLimits

0x0d1b,	// (0x00016eeb) list_pinb_item_pane_g1

0x0d28,	// (0x00016ef8) list_pinb_item_pane_g2_ParamLimits

0x0d28,	// (0x00016ef8) list_pinb_item_pane_g2

0x8859,	// (0x0001ea29) list_pinb_item_pane_g3_ParamLimits

0x8859,	// (0x0001ea29) list_pinb_item_pane_g3

0x0d34,	// (0x00016f04) list_pinb_item_pane_g4_ParamLimits

0x0d34,	// (0x00016f04) list_pinb_item_pane_g4

0x0003,

0xf161,	// (0x00025331) list_pinb_item_pane_g_ParamLimits

0xf161,	// (0x00025331) list_pinb_item_pane_g

0x0d40,	// (0x00016f10) list_pinb_item_pane_t1_ParamLimits

0x0d40,	// (0x00016f10) list_pinb_item_pane_t1

0x7062,	// (0x0001d232) calc_display_pane

0x7080,	// (0x0001d250) calc_paper_pane

0x709c,	// (0x0001d26c) grid_calc_pane

0x0a31,	// (0x00016c01) bg_list_pane_cp01

0x886a,	// (0x0001ea3a) clock_g1

0x8872,	// (0x0001ea42) clock_g2

0x0001,

0xf16a,	// (0x0002533a) clock_g

0x887c,	// (0x0001ea4c) clock_t1_ParamLimits

0x887c,	// (0x0001ea4c) clock_t1

0x8891,	// (0x0001ea61) clock_t2_ParamLimits

0x8891,	// (0x0001ea61) clock_t2

0x88a3,	// (0x0001ea73) clock_t3_ParamLimits

0x88a3,	// (0x0001ea73) clock_t3

0x88b5,	// (0x0001ea85) clock_t4_ParamLimits

0x88b5,	// (0x0001ea85) clock_t4

0x88c7,	// (0x0001ea97) clock_t5_ParamLimits

0x88c7,	// (0x0001ea97) clock_t5

0x88dc,	// (0x0001eaac) clock_t6_ParamLimits

0x88dc,	// (0x0001eaac) clock_t6

0x88ee,	// (0x0001eabe) clock_t7_ParamLimits

0x88ee,	// (0x0001eabe) clock_t7

0x8900,	// (0x0001ead0) clock_t8_ParamLimits

0x8900,	// (0x0001ead0) clock_t8

0x8916,	// (0x0001eae6) clock_t9_ParamLimits

0x8916,	// (0x0001eae6) clock_t9

0x0008,

0xf16f,	// (0x0002533f) clock_t_ParamLimits

0xf16f,	// (0x0002533f) clock_t

0x0d5f,	// (0x00016f2f) popup_clock_analogue_window_cp02

0x0d5f,	// (0x00016f2f) popup_clock_digital_window_cp01

0x0d67,	// (0x00016f37) listscroll_help_pane

0x0a31,	// (0x00016c01) phob_pre_status_pane

0x0d71,	// (0x00016f41) grid_qdial_pane

0x0a31,	// (0x00016c01) listscroll_mce_pane

0x0d7b,	// (0x00016f4b) bg_notes_pane

0x0d85,	// (0x00016f55) list_notes_pane

0x892c,	// (0x0001eafc) scroll_pane_cp06

0x0d8f,	// (0x00016f5f) bg_calc_paper_pane

0x70d2,	// (0x0001d2a2) list_calc_pane

0x0dbd,	// (0x00016f8d) bg_calc_display_pane

0x70ec,	// (0x0001d2bc) calc_display_pane_t1

0x7101,	// (0x0001d2d1) calc_display_pane_t2

0x7116,	// (0x0001d2e6) calc_display_pane_t3

0x0002,

0xf182,	// (0x00025352) calc_display_pane_t

0x7128,	// (0x0001d2f8) cell_calc_pane_ParamLimits

0x7128,	// (0x0001d2f8) cell_calc_pane

0x0ddb,	// (0x00016fab) bg_calc_paper_pane_g1

0x0df3,	// (0x00016fc3) bg_calc_paper_pane_g2

0x0de7,	// (0x00016fb7) bg_calc_paper_pane_g3

0x0e0b,	// (0x00016fdb) bg_calc_paper_pane_g4

0x0dff,	// (0x00016fcf) bg_calc_paper_pane_g5

0x8937,	// (0x0001eb07) bg_calc_paper_pane_g6

0x8948,	// (0x0001eb18) bg_calc_paper_pane_g7

0x8959,	// (0x0001eb29) bg_calc_paper_pane_g8

0x0007,

0xf189,	// (0x00025359) bg_calc_paper_pane_g

0x896a,	// (0x0001eb3a) calc_bg_paper_pane_g9

0x897b,	// (0x0001eb4b) list_calc_item_pane_ParamLimits

0x897b,	// (0x0001eb4b) list_calc_item_pane

0x0e17,	// (0x00016fe7) list_calc_item_pane_g1

0x7155,	// (0x0001d325) list_calc_item_pane_t1_ParamLimits

0x7155,	// (0x0001d325) list_calc_item_pane_t1

0x7167,	// (0x0001d337) list_calc_item_pane_t2_ParamLimits

0x7167,	// (0x0001d337) list_calc_item_pane_t2

0x0001,

0xf19a,	// (0x0002536a) list_calc_item_pane_t_ParamLimits

0xf19a,	// (0x0002536a) list_calc_item_pane_t

0x0e36,	// (0x00017006) cell_calc_pane_g1

0x0e40,	// (0x00017010) grid_highlight_pane_cp02

0x0e75,	// (0x00017045) bg_calc_display_pane_g1

0x7197,	// (0x0001d367) bg_calc_display_pane_g2

0x0e62,	// (0x00017032) bg_calc_display_pane_g3

0x0002,

0xf1a4,	// (0x00025374) bg_calc_display_pane_g

0x71a1,	// (0x0001d371) cell_qdial_pane_ParamLimits

0x71a1,	// (0x0001d371) cell_qdial_pane

0x89b5,	// (0x0001eb85) cell_qdial_pane_g1_ParamLimits

0x89b5,	// (0x0001eb85) cell_qdial_pane_g1

0x89c2,	// (0x0001eb92) cell_qdial_pane_g2_ParamLimits

0x89c2,	// (0x0001eb92) cell_qdial_pane_g2

0x0e7e,	// (0x0001704e) cell_qdial_pane_g3_ParamLimits

0x0e7e,	// (0x0001704e) cell_qdial_pane_g3

0x0003,

0xf1ab,	// (0x0002537b) cell_qdial_pane_g_ParamLimits

0xf1ab,	// (0x0002537b) cell_qdial_pane_g

0x89e0,	// (0x0001ebb0) cell_qdial_pane_t1_ParamLimits

0x89e0,	// (0x0001ebb0) cell_qdial_pane_t1

0x89f8,	// (0x0001ebc8) cell_qdial_pane_t2_ParamLimits

0x89f8,	// (0x0001ebc8) cell_qdial_pane_t2

0x8a0b,	// (0x0001ebdb) cell_qdial_pane_t3_ParamLimits

0x8a0b,	// (0x0001ebdb) cell_qdial_pane_t3

0x0002,

0xf1b4,	// (0x00025384) cell_qdial_pane_t_ParamLimits

0xf1b4,	// (0x00025384) cell_qdial_pane_t

0x0a31,	// (0x00016c01) grid_highlight_pane_cp04

0x0e8a,	// (0x0001705a) thumbnail_qdial_pane_ParamLimits

0x0e8a,	// (0x0001705a) thumbnail_qdial_pane

0x0ee6,	// (0x000170b6) list_help_pane

0x0eef,	// (0x000170bf) scroll_pane_cp02

0x8a1e,	// (0x0001ebee) help_list_pane_t1_ParamLimits

0x8a1e,	// (0x0001ebee) help_list_pane_t1

0x71b5,	// (0x0001d385) bg_notes_pane_g2

0x71bd,	// (0x0001d38d) bg_notes_pane_g3

0x71c5,	// (0x0001d395) notes_bg_pane_g1

0x71cd,	// (0x0001d39d) notes_bg_pane_g4

0x71d5,	// (0x0001d3a5) notes_bg_pane_g5

0x71dd,	// (0x0001d3ad) notes_bg_pane_g6

0x71e5,	// (0x0001d3b5) notes_bg_pane_g7

0x71ed,	// (0x0001d3bd) notes_bg_pane_g8

0x71f5,	// (0x0001d3c5) notes_bg_pane_g9

0x0006,

0xf1d2,	// (0x000253a2) notes_bg_pane_g

0x8a5c,	// (0x0001ec2c) list_notes_text_pane_ParamLimits

0x8a5c,	// (0x0001ec2c) list_notes_text_pane

0x0f57,	// (0x00017127) list_notes_text_pane_g1

0x0f60,	// (0x00017130) list_notes_text_pane_t1

0x0dbd,	// (0x00016f8d) listscroll_cale_week_pane

0x8aa9,	// (0x0001ec79) bg_cale_heading_pane

0x0f7f,	// (0x0001714f) bg_cale_pane_cp01

0x8abd,	// (0x0001ec8d) cale_week_corner_pane

0x8ace,	// (0x0001ec9e) cale_week_day_heading_pane

0x8ae2,	// (0x0001ecb2) cale_week_scroll_pane_g1

0x8af3,	// (0x0001ecc3) cale_week_scroll_pane_g2

0x8b04,	// (0x0001ecd4) cale_week_scroll_pane_g3

0x8b15,	// (0x0001ece5) cale_week_scroll_pane_g4

0x8b26,	// (0x0001ecf6) cale_week_scroll_pane_g5

0x8b37,	// (0x0001ed07) cale_week_scroll_pane_g6

0x8b48,	// (0x0001ed18) cale_week_scroll_pane_g7

0x8b5b,	// (0x0001ed2b) cale_week_scroll_pane_g8

0x8b6e,	// (0x0001ed3e) cale_week_scroll_pane_g9

0x8b7f,	// (0x0001ed4f) cale_week_scroll_pane_g10

0x8b90,	// (0x0001ed60) cale_week_scroll_pane_g11

0x8ba1,	// (0x0001ed71) cale_week_scroll_pane_g12

0x8bb2,	// (0x0001ed82) cale_week_scroll_pane_g13

0x8bc3,	// (0x0001ed93) cale_week_scroll_pane_g14

0x8bd4,	// (0x0001eda4) cale_week_scroll_pane_g15

0x000e,

0xf1e1,	// (0x000253b1) cale_week_scroll_pane_g

0x8be5,	// (0x0001edb5) cale_week_time_pane

0x8bf8,	// (0x0001edc8) grid_cale_week_pane

0x8c0d,	// (0x0001eddd) scroll_pane_cp08

0x8c27,	// (0x0001edf7) cell_cale_week_pane_ParamLimits

0x8c27,	// (0x0001edf7) cell_cale_week_pane

0x8c63,	// (0x0001ee33) cale_week_day_heading_pane_t1

0x8c77,	// (0x0001ee47) cale_week_day_heading_pane_t2

0x8c8b,	// (0x0001ee5b) cale_week_day_heading_pane_t3

0x8c9f,	// (0x0001ee6f) cale_week_day_heading_pane_t4

0x8cb3,	// (0x0001ee83) cale_week_day_heading_pane_t5

0x8cc7,	// (0x0001ee97) cale_week_day_heading_pane_t6

0x8cdb,	// (0x0001eeab) cale_week_day_heading_pane_t7

0x0006,

0xf200,	// (0x000253d0) cale_week_day_heading_pane_t

0x0faa,	// (0x0001717a) bg_cale_side_pane

0x71fd,	// (0x0001d3cd) cale_week_time_pane_t1

0x7215,	// (0x0001d3e5) cale_week_time_pane_t2

0x722d,	// (0x0001d3fd) cale_week_time_pane_t3

0x7245,	// (0x0001d415) cale_week_time_pane_t4

0x725d,	// (0x0001d42d) cale_week_time_pane_t5

0x7275,	// (0x0001d445) cale_week_time_pane_t6

0x728d,	// (0x0001d45d) cale_week_time_pane_t7

0x72a5,	// (0x0001d475) cale_week_time_pane_t8

0x0007,

0xf20f,	// (0x000253df) cale_week_time_pane_t

0x8cef,	// (0x0001eebf) cell_cale_week_pane_g2

0x8d08,	// (0x0001eed8) cell_cale_week_pane_g3_ParamLimits

0x8d08,	// (0x0001eed8) cell_cale_week_pane_g3

0x0fb8,	// (0x00017188) grid_highlight_pane_cp07

0x0fc0,	// (0x00017190) listscroll_gms_pane

0x0fca,	// (0x0001719a) grid_gms_pane

0x0fd3,	// (0x000171a3) listscroll_gms_pane_g1

0x0fdb,	// (0x000171ab) listscroll_gms_pane_g2

0x0001,

0xf220,	// (0x000253f0) listscroll_gms_pane_g

0x8d20,	// (0x0001eef0) scroll_pane_cp010

0x8d2b,	// (0x0001eefb) cell_gms_pane_ParamLimits

0x8d2b,	// (0x0001eefb) cell_gms_pane

0x8d3d,	// (0x0001ef0d) cell_gms_pane_g1

0x0fe3,	// (0x000171b3) cell_gms_pane_g2

0x0f57,	// (0x00017127) cell_gms_pane_g3

0x0feb,	// (0x000171bb) cell_gms_pane_g4

0x0003,

0xf225,	// (0x000253f5) cell_gms_pane_g

0x0ff4,	// (0x000171c4) grid_highlight_pane_cp09

0xadcd,	// (0x00020f9d) phob_pre_status_pane_g1

0xadd5,	// (0x00020fa5) phob_pre_status_pane_g2

0xaddd,	// (0x00020fad) phob_pre_status_pane_g3

0xade5,	// (0x00020fb5) phob_pre_status_pane_g4

0x0004,

0xf614,	// (0x000257e4) phob_pre_status_pane_g

0xadf5,	// (0x00020fc5) phob_pre_status_pane_t1

0xae05,	// (0x00020fd5) phob_pre_status_pane_t2

0xae15,	// (0x00020fe5) phob_pre_status_pane_t3

0x0002,

0xf61f,	// (0x000257ef) phob_pre_status_pane_t

0x0a31,	// (0x00016c01) bg_list_pane_cp05

0x72c5,	// (0x0001d495) grid_vorec_pane

0x72cd,	// (0x0001d49d) vorec_t1

0x72db,	// (0x0001d4ab) vorec_t2

0x72e9,	// (0x0001d4b9) vorec_t3

0x72f7,	// (0x0001d4c7) vorec_t4

0x7305,	// (0x0001d4d5) vorec_t5

0x7313,	// (0x0001d4e3) vorec_t6

0x0006,

0xf22e,	// (0x000253fe) vorec_t

0x732f,	// (0x0001d4ff) wait_bar_pane_cp01

0x1076,	// (0x00017246) cell_vorec_pane_ParamLimits

0x1076,	// (0x00017246) cell_vorec_pane

0x1089,	// (0x00017259) cell_vorec_pane_g1

0x0a31,	// (0x00016c01) grid_highlight_pane_cp05

0x8d55,	// (0x0001ef25) cams_zoom_pane

0x8d61,	// (0x0001ef31) image_vga_pane

0x8d70,	// (0x0001ef40) main_camera_pane_g1

0x8d7e,	// (0x0001ef4e) main_camera_pane_g2

0x8d8c,	// (0x0001ef5c) main_camera_pane_g3

0x8d98,	// (0x0001ef68) main_camera_pane_g4

0x8da4,	// (0x0001ef74) main_camera_pane_g5

0x8db0,	// (0x0001ef80) main_camera_pane_g6

0x8dbc,	// (0x0001ef8c) main_camera_pane_g7

0x0007,

0xf23d,	// (0x0002540d) main_camera_pane_g

0x8dc8,	// (0x0001ef98) main_camera_pane_t1

0x8dda,	// (0x0001efaa) main_camera_pane_t2

0x0001,

0xf24e,	// (0x0002541e) main_camera_pane_t

0x8dfb,	// (0x0001efcb) cams_zoom_pane_cp_ParamLimits

0x8dfb,	// (0x0001efcb) cams_zoom_pane_cp

0x8e1f,	// (0x0001efef) image_cif_pane_ParamLimits

0x8e1f,	// (0x0001efef) image_cif_pane

0x8e3d,	// (0x0001f00d) image_subqcif_pane

0x8e45,	// (0x0001f015) main_video_pane_g1_ParamLimits

0x8e45,	// (0x0001f015) main_video_pane_g1

0x8e65,	// (0x0001f035) main_video_pane_g2_ParamLimits

0x8e65,	// (0x0001f035) main_video_pane_g2

0x8e97,	// (0x0001f067) main_video_pane_g3_ParamLimits

0x8e97,	// (0x0001f067) main_video_pane_g3

0x8ec2,	// (0x0001f092) main_video_pane_g4_ParamLimits

0x8ec2,	// (0x0001f092) main_video_pane_g4

0x8eed,	// (0x0001f0bd) main_video_pane_g5_ParamLimits

0x8eed,	// (0x0001f0bd) main_video_pane_g5

0x109f,	// (0x0001726f) main_video_pane_g6_ParamLimits

0x109f,	// (0x0001726f) main_video_pane_g6

0x0006,

0xf253,	// (0x00025423) main_video_pane_g_ParamLimits

0xf253,	// (0x00025423) main_video_pane_g

0x8f11,	// (0x0001f0e1) main_video_pane_t1_ParamLimits

0x8f11,	// (0x0001f0e1) main_video_pane_t1

0x10b9,	// (0x00017289) cams_zoom_pane_g1

0x10c2,	// (0x00017292) cams_zoom_pane_g2

0x10cb,	// (0x0001729b) cams_zoom_pane_g3

0x10d4,	// (0x000172a4) cams_zoom_pane_g4

0x0003,

0xf262,	// (0x00025432) cams_zoom_pane_g

0x8f5b,	// (0x0001f12b) grid_cams_pane

0x8f69,	// (0x0001f139) linegrid_cams_pane

0x8f77,	// (0x0001f147) cell_cams_pane_ParamLimits

0x8f77,	// (0x0001f147) cell_cams_pane

0x10dd,	// (0x000172ad) cams_burst_image_pane

0x10e5,	// (0x000172b5) cell_cams_pane_g1

0x0a31,	// (0x00016c01) grid_highlight_pane_cp03

0x0e36,	// (0x00017006) mp_bg_pane_g1

0x0a31,	// (0x00016c01) bg_list_pane_cp03

0x2f15,	// (0x000190e5) bg_mp_pane

0x2f1d,	// (0x000190ed) grid_mp_pane

0x2f25,	// (0x000190f5) media_player_g1

0x2f2d,	// (0x000190fd) media_player_t1

0x2f3b,	// (0x0001910b) media_player_t2

0x2f49,	// (0x00019119) media_player_t3

0x2f57,	// (0x00019127) media_player_t4

0x2f65,	// (0x00019135) media_player_t5

0x2f73,	// (0x00019143) media_player_t6

0x2f81,	// (0x00019151) media_player_t7

0x0006,

0xf5fe,	// (0x000257ce) media_player_t

0x2f8f,	// (0x0001915f) wait_bar_pane_cp02

0xf5e3,	// (0x000257b3) main_usb_pane_t

0xadc4,	// (0x00020f94) cell_mp_pane

0x0e36,	// (0x00017006) cell_mp_pane_g1

0x0a31,	// (0x00016c01) grid_highlight_pane_cp06

0x11aa,	// (0x0001737a) grid_skin_colour_pane

0x11b2,	// (0x00017382) list_highlight_pane_cp03

0x8fe0,	// (0x0001f1b0) skin_g1

0x11ba,	// (0x0001738a) skin_t1

0x11c9,	// (0x00017399) skin_t2

0x0001,

0xf297,	// (0x00025467) skin_t

0x8fea,	// (0x0001f1ba) cell_skin_colour_pane_ParamLimits

0x8fea,	// (0x0001f1ba) cell_skin_colour_pane

0x11d7,	// (0x000173a7) cell_skin_colour_pane_g1

0x9039,	// (0x0001f209) call_video_g1_ParamLimits

0x9039,	// (0x0001f209) call_video_g1

0x9049,	// (0x0001f219) call_video_g2_ParamLimits

0x9049,	// (0x0001f219) call_video_g2

0x0001,

0xf29c,	// (0x0002546c) call_video_g_ParamLimits

0xf29c,	// (0x0002546c) call_video_g

0x9087,	// (0x0001f257) call_video_uplink_pane_cp1_ParamLimits

0x9087,	// (0x0001f257) call_video_uplink_pane_cp1

0x11f1,	// (0x000173c1) call_video_uplink_pane_cp2

0x9133,	// (0x0001f303) video_down_crop_pane_ParamLimits

0x9133,	// (0x0001f303) video_down_crop_pane

0x920b,	// (0x0001f3db) video_down_pane_ParamLimits

0x920b,	// (0x0001f3db) video_down_pane

0x11f9,	// (0x000173c9) video_down_subqcif_pane_ParamLimits

0x11f9,	// (0x000173c9) video_down_subqcif_pane

0x1211,	// (0x000173e1) video_down_subqcif_pane_cp_ParamLimits

0x1211,	// (0x000173e1) video_down_subqcif_pane_cp

0x1235,	// (0x00017405) im_reading_pane_ParamLimits

0x1235,	// (0x00017405) im_reading_pane

0x92ed,	// (0x0001f4bd) im_writing_pane_ParamLimits

0x92ed,	// (0x0001f4bd) im_writing_pane

0x930b,	// (0x0001f4db) im_reading_pane_t1

0x124f,	// (0x0001741f) list_im_pane

0x1260,	// (0x00017430) scroll_pane_cp07

0x936b,	// (0x0001f53b) im_writing_pane_t1_ParamLimits

0x936b,	// (0x0001f53b) im_writing_pane_t1

0x1279,	// (0x00017449) im_writing_pane_t2_ParamLimits

0x1279,	// (0x00017449) im_writing_pane_t2

0x0001,

0xf2a6,	// (0x00025476) im_writing_pane_t_ParamLimits

0xf2a6,	// (0x00025476) im_writing_pane_t

0x0a31,	// (0x00016c01) input_focus_pane_cp04

0x0a31,	// (0x00016c01) input_focus_pane_cp05

0x937d,	// (0x0001f54d) list_im_single_pane_ParamLimits

0x937d,	// (0x0001f54d) list_im_single_pane

0x93a9,	// (0x0001f579) list_single_im_pane_t1

0xad88,	// (0x00020f58) blid_accuracy_pane

0xad90,	// (0x00020f60) blid_compass_pane

0xad9a,	// (0x00020f6a) main_location_t1

0xada8,	// (0x00020f78) main_location_t2

0xadb6,	// (0x00020f86) main_location_t3

0x0002,

0xf60d,	// (0x000257dd) main_location_t

0x0a31,	// (0x00016c01) aid_levels_location

0x0e36,	// (0x00017006) blid_accuracy_pane_g1

0x0e36,	// (0x00017006) blid_accuracy_pane_g2

0x0001,

0xf308,	// (0x000254d8) blid_accuracy_pane_g

0x12c1,	// (0x00017491) wml_content_pane

0x12ff,	// (0x000174cf) wml_button_pane_ParamLimits

0x12ff,	// (0x000174cf) wml_button_pane

0x93b8,	// (0x0001f588) wml_list_single_large_pane_ParamLimits

0x93b8,	// (0x0001f588) wml_list_single_large_pane

0x93ea,	// (0x0001f5ba) wml_list_single_medium_pane_ParamLimits

0x93ea,	// (0x0001f5ba) wml_list_single_medium_pane

0x9423,	// (0x0001f5f3) wml_list_single_small_pane_ParamLimits

0x9423,	// (0x0001f5f3) wml_list_single_small_pane

0x1313,	// (0x000174e3) wml_selection_box_pane_ParamLimits

0x1313,	// (0x000174e3) wml_selection_box_pane

0x1326,	// (0x000174f6) wml_list_single_pane_t1

0x1335,	// (0x00017505) wml_list_single_medium_pane_t1

0x1344,	// (0x00017514) wml_list_single_large_pane_t1

0x1353,	// (0x00017523) input_focus_pane_cp02_ParamLimits

0x1353,	// (0x00017523) input_focus_pane_cp02

0x1366,	// (0x00017536) wml_selection_box_pane_g1

0x136f,	// (0x0001753f) wml_selection_box_pane_t1_ParamLimits

0x136f,	// (0x0001753f) wml_selection_box_pane_t1

0x0c8c,	// (0x00016e5c) bg_wml_button_pane_ParamLimits

0x0c8c,	// (0x00016e5c) bg_wml_button_pane

0x1387,	// (0x00017557) wml_button_pane_g1

0x138f,	// (0x0001755f) wml_button_pane_t1

0x1387,	// (0x00017557) wml_button_bg_pane_g1

0x139f,	// (0x0001756f) wml_button_bg_pane_g2

0x13a7,	// (0x00017577) wml_button_bg_pane_g3

0x13af,	// (0x0001757f) wml_button_bg_pane_g4

0x13b7,	// (0x00017587) wml_button_bg_pane_g5

0x13bf,	// (0x0001758f) wml_button_bg_pane_g6

0x13c7,	// (0x00017597) wml_button_bg_pane_g7

0x13cf,	// (0x0001759f) wml_button_bg_pane_g8

0x13d7,	// (0x000175a7) wml_button_bg_pane_g9

0x0008,

0xf2ab,	// (0x0002547b) wml_button_bg_pane_g

0x946b,	// (0x0001f63b) bg_list_pane_cp02

0x13df,	// (0x000175af) mce_header_pane_ParamLimits

0x13df,	// (0x000175af) mce_header_pane

0x13f5,	// (0x000175c5) mce_icon_pane

0x13f5,	// (0x000175c5) mce_image_pane

0x13fe,	// (0x000175ce) mce_text_pane_ParamLimits

0x13fe,	// (0x000175ce) mce_text_pane

0x9475,	// (0x0001f645) scroll_pane_cp03

0x12f7,	// (0x000174c7) scroll_pane_cp04

0x1411,	// (0x000175e1) scroll_pane_cp05_ParamLimits

0x1411,	// (0x000175e1) scroll_pane_cp05

0x947f,	// (0x0001f64f) mce_header_field_pane_ParamLimits

0x947f,	// (0x0001f64f) mce_header_field_pane

0x949f,	// (0x0001f66f) mce_header_field_pane_2_ParamLimits

0x949f,	// (0x0001f66f) mce_header_field_pane_2

0x94b5,	// (0x0001f685) mce_header_field_pane_3

0x94bd,	// (0x0001f68d) list_single_mce_message_pane_ParamLimits

0x94bd,	// (0x0001f68d) list_single_mce_message_pane

0x94ed,	// (0x0001f6bd) list_single_mce_smart_pane_ParamLimits

0x94ed,	// (0x0001f6bd) list_single_mce_smart_pane

0x141d,	// (0x000175ed) input_focus_pane_cp03

0x1426,	// (0x000175f6) list_header_data_pane

0x9528,	// (0x0001f6f8) mce_header_field_pane_t1

0x9538,	// (0x0001f708) list_single_mce_header_pane_ParamLimits

0x9538,	// (0x0001f708) list_single_mce_header_pane

0x142e,	// (0x000175fe) list_single_mce_header_pane_t1

0x143d,	// (0x0001760d) list_single_mce_message_pane_g1

0x1445,	// (0x00017615) list_single_mce_message_pane_t1

0x958a,	// (0x0001f75a) bg_cale_heading_pane_cp01_ParamLimits

0x958a,	// (0x0001f75a) bg_cale_heading_pane_cp01

0x1453,	// (0x00017623) bg_cale_pane_cp02_ParamLimits

0x1453,	// (0x00017623) bg_cale_pane_cp02

0x95ad,	// (0x0001f77d) cale_month_corner_pane

0x95c3,	// (0x0001f793) cale_month_day_heading_pane_ParamLimits

0x95c3,	// (0x0001f793) cale_month_day_heading_pane

0x95f6,	// (0x0001f7c6) cale_month_pane_g1_ParamLimits

0x95f6,	// (0x0001f7c6) cale_month_pane_g1

0x9612,	// (0x0001f7e2) cale_month_pane_g2_ParamLimits

0x9612,	// (0x0001f7e2) cale_month_pane_g2

0x962d,	// (0x0001f7fd) cale_month_pane_g3_ParamLimits

0x962d,	// (0x0001f7fd) cale_month_pane_g3

0x9659,	// (0x0001f829) cale_month_pane_g4_ParamLimits

0x9659,	// (0x0001f829) cale_month_pane_g4

0x9685,	// (0x0001f855) cale_month_pane_g5_ParamLimits

0x9685,	// (0x0001f855) cale_month_pane_g5

0x96b1,	// (0x0001f881) cale_month_pane_g6_ParamLimits

0x96b1,	// (0x0001f881) cale_month_pane_g6

0x96dd,	// (0x0001f8ad) cale_month_pane_g7_ParamLimits

0x96dd,	// (0x0001f8ad) cale_month_pane_g7

0x9719,	// (0x0001f8e9) cale_month_pane_g8_ParamLimits

0x9719,	// (0x0001f8e9) cale_month_pane_g8

0x9755,	// (0x0001f925) cale_month_pane_g9_ParamLimits

0x9755,	// (0x0001f925) cale_month_pane_g9

0x978f,	// (0x0001f95f) cale_month_pane_g10_ParamLimits

0x978f,	// (0x0001f95f) cale_month_pane_g10

0x97c9,	// (0x0001f999) cale_month_pane_g11_ParamLimits

0x97c9,	// (0x0001f999) cale_month_pane_g11

0x9803,	// (0x0001f9d3) cale_month_pane_g12_ParamLimits

0x9803,	// (0x0001f9d3) cale_month_pane_g12

0x983d,	// (0x0001fa0d) cale_month_pane_g13_ParamLimits

0x983d,	// (0x0001fa0d) cale_month_pane_g13

0x000c,

0xf2be,	// (0x0002548e) cale_month_pane_g_ParamLimits

0xf2be,	// (0x0002548e) cale_month_pane_g

0x9877,	// (0x0001fa47) cale_month_week_pane

0x988a,	// (0x0001fa5a) grid_cale_month_pane_ParamLimits

0x988a,	// (0x0001fa5a) grid_cale_month_pane

0x98b8,	// (0x0001fa88) cale_month_day_heading_pane_t1

0x9916,	// (0x0001fae6) cale_month_day_heading_pane_t2

0x997b,	// (0x0001fb4b) cale_month_day_heading_pane_t3

0x99e0,	// (0x0001fbb0) cale_month_day_heading_pane_t4

0x9a45,	// (0x0001fc15) cale_month_day_heading_pane_t5

0x9aaa,	// (0x0001fc7a) cale_month_day_heading_pane_t6

0x9b17,	// (0x0001fce7) cale_month_day_heading_pane_t7

0x0006,

0xf2d9,	// (0x000254a9) cale_month_day_heading_pane_t

0x0faa,	// (0x0001717a) bg_cale_side_pane_cp01

0x9b8c,	// (0x0001fd5c) cale_month_week_pane_t1

0x9ba3,	// (0x0001fd73) cale_month_week_pane_t2

0x9bba,	// (0x0001fd8a) cale_month_week_pane_t3

0x9bd1,	// (0x0001fda1) cale_month_week_pane_t4

0x9be8,	// (0x0001fdb8) cale_month_week_pane_t5

0x9bff,	// (0x0001fdcf) cale_month_week_pane_t6

0x0005,

0xf2e8,	// (0x000254b8) cale_month_week_pane_t

0x9c16,	// (0x0001fde6) cell_cale_month_pane_ParamLimits

0x9c16,	// (0x0001fde6) cell_cale_month_pane

0x7337,	// (0x0001d507) cell_cale_month_pane_g1

0x7343,	// (0x0001d513) cell_cale_month_pane_t1_ParamLimits

0x7343,	// (0x0001d513) cell_cale_month_pane_t1

0x0fb8,	// (0x00017188) grid_highlight_pane_cp08

0x0e36,	// (0x00017006) main_smil_g1

0x9ccc,	// (0x0001fe9c) smil_status_pane

0x14be,	// (0x0001768e) smil_text_pane

0x2e35,	// (0x00019005) bg_popup_call3_rect_pane_g8

0x2e3d,	// (0x0001900d) bg_popup_call3_rect_pane_g9

0x0008,

0xf5a1,	// (0x00025771) bg_popup_call3_rect_pane_g

0x30ca,	// (0x0001929a) smil_status_volume_pane_g1

0x14c8,	// (0x00017698) smil_status_pane_t1

0x7481,	// (0x0001d651) volume_smil_pane

0x14df,	// (0x000176af) list_smil_text_pane

0x9cdf,	// (0x0001feaf) scroll_pane_cp011

0x9cea,	// (0x0001feba) smil_text_list_pane_t1_ParamLimits

0x9cea,	// (0x0001feba) smil_text_list_pane_t1

0x735f,	// (0x0001d52f) aid_volume_smil_ParamLimits

0x735f,	// (0x0001d52f) aid_volume_smil

0x0e36,	// (0x00017006) smil_volume_pane_g1

0x0e36,	// (0x00017006) smil_volume_pane_g2

0x0001,

0xf308,	// (0x000254d8) smil_volume_pane_g

0x0dbd,	// (0x00016f8d) listscroll_cale_day_pane

0x150b,	// (0x000176db) bg_cale_pane

0x1523,	// (0x000176f3) list_cale_pane

0x1534,	// (0x00017704) scroll_pane_cp09

0x1545,	// (0x00017715) cale_bg_pane_g1

0x154d,	// (0x0001771d) cale_bg_pane_g2

0x1555,	// (0x00017725) cale_bg_pane_g3

0x155d,	// (0x0001772d) cale_bg_pane_g4

0x1565,	// (0x00017735) cale_bg_pane_g5

0x156d,	// (0x0001773d) cale_bg_pane_g6

0x1575,	// (0x00017745) cale_bg_pane_g7

0x157d,	// (0x0001774d) cale_bg_pane_g8

0x1585,	// (0x00017755) cale_bg_pane_g9

0x0008,

0xf30d,	// (0x000254dd) cale_bg_pane_g

0x9d95,	// (0x0001ff65) list_cale_time_pane_ParamLimits

0x9d95,	// (0x0001ff65) list_cale_time_pane

0x9db6,	// (0x0001ff86) list_cale_time_pane_g1_ParamLimits

0x9db6,	// (0x0001ff86) list_cale_time_pane_g1

0x158d,	// (0x0001775d) list_cale_time_pane_g2_ParamLimits

0x158d,	// (0x0001775d) list_cale_time_pane_g2

0x9dc2,	// (0x0001ff92) list_cale_time_pane_g3_ParamLimits

0x9dc2,	// (0x0001ff92) list_cale_time_pane_g3

0x9dde,	// (0x0001ffae) list_cale_time_pane_g4_ParamLimits

0x9dde,	// (0x0001ffae) list_cale_time_pane_g4

0x9dec,	// (0x0001ffbc) list_cale_time_pane_g5_ParamLimits

0x9dec,	// (0x0001ffbc) list_cale_time_pane_g5

0x0005,

0xf320,	// (0x000254f0) list_cale_time_pane_g_ParamLimits

0xf320,	// (0x000254f0) list_cale_time_pane_g

0x9dfa,	// (0x0001ffca) list_cale_time_pane_t1_ParamLimits

0x9dfa,	// (0x0001ffca) list_cale_time_pane_t1

0x9e22,	// (0x0001fff2) list_cale_time_pane_t2_ParamLimits

0x9e22,	// (0x0001fff2) list_cale_time_pane_t2

0xa101,	// (0x000202d1) aid_blid_cardinal_pane

0xa143,	// (0x00020313) compass_pane_t4

0x9e4a,	// (0x0002001a) list_cale_time_pane_t4_ParamLimits

0x9e4a,	// (0x0002001a) list_cale_time_pane_t4

0xa151,	// (0x00020321) compass_pane_t5

0xa161,	// (0x00020331) compass_pane_t6

0xa16f,	// (0x0002033f) compass_pane_t7

0x1aab,	// (0x00017c7b) navi_pane_cc_t1

0x1c12,	// (0x00017de2) aid_phob_thumbnail_center_pane

0xa876,	// (0x00020a46) main_postcard_pane_g4_ParamLimits

0x0002,

0xf32d,	// (0x000254fd) list_cale_time_pane_t_ParamLimits

0xf32d,	// (0x000254fd) list_cale_time_pane_t

0x068a,	// (0x0001685a) bg_popup_window_pane_cp02_ParamLimits

0x068a,	// (0x0001685a) bg_popup_window_pane_cp02

0x15a7,	// (0x00017777) heading_pane_cp01_ParamLimits

0x15a7,	// (0x00017777) heading_pane_cp01

0x15b3,	// (0x00017783) loc_req_pane_ParamLimits

0x15b3,	// (0x00017783) loc_req_pane

0x15c3,	// (0x00017793) loc_type_pane_ParamLimits

0x15c3,	// (0x00017793) loc_type_pane

0x15d5,	// (0x000177a5) loc_type_pane_t1_ParamLimits

0x15d5,	// (0x000177a5) loc_type_pane_t1

0x15e7,	// (0x000177b7) loc_type_pane_t2_ParamLimits

0x15e7,	// (0x000177b7) loc_type_pane_t2

0x15f9,	// (0x000177c9) loc_type_pane_t3_ParamLimits

0x15f9,	// (0x000177c9) loc_type_pane_t3

0x0002,

0xf334,	// (0x00025504) loc_type_pane_t_ParamLimits

0xf334,	// (0x00025504) loc_type_pane_t

0x160b,	// (0x000177db) list_loc_req_pane

0x1615,	// (0x000177e5) scroll_pane_cp012

0x9e72,	// (0x00020042) list_single_loc_request_popup_menu_pane_ParamLimits

0x9e72,	// (0x00020042) list_single_loc_request_popup_menu_pane

0x1620,	// (0x000177f0) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x1620,	// (0x000177f0) list_single_loc_request_popup_menu_pane_g1

0x162c,	// (0x000177fc) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x162c,	// (0x000177fc) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf33b,	// (0x0002550b) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf33b,	// (0x0002550b) list_single_loc_request_popup_menu_pane_g

0x1638,	// (0x00017808) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x1638,	// (0x00017808) list_single_loc_request_popup_menu_pane_t1

0x9e84,	// (0x00020054) bg_popup_window_pane_cp03_ParamLimits

0x9e84,	// (0x00020054) bg_popup_window_pane_cp03

0x9e92,	// (0x00020062) heading_loc_req_pane_ParamLimits

0x9e92,	// (0x00020062) heading_loc_req_pane

0x9e9e,	// (0x0002006e) popup_dyc_status_message_window_g1_ParamLimits

0x9e9e,	// (0x0002006e) popup_dyc_status_message_window_g1

0x9eaa,	// (0x0002007a) popup_dyc_status_message_window_t1_ParamLimits

0x9eaa,	// (0x0002007a) popup_dyc_status_message_window_t1

0x9ebc,	// (0x0002008c) popup_dyc_status_message_window_t2_ParamLimits

0x9ebc,	// (0x0002008c) popup_dyc_status_message_window_t2

0x9ece,	// (0x0002009e) popup_dyc_status_message_window_t3_ParamLimits

0x9ece,	// (0x0002009e) popup_dyc_status_message_window_t3

0x0002,

0xf340,	// (0x00025510) popup_dyc_status_message_window_t_ParamLimits

0xf340,	// (0x00025510) popup_dyc_status_message_window_t

0x0a31,	// (0x00016c01) bg_heading_pane_cp01

0x165a,	// (0x0001782a) heading_loc_req_pane_g1

0x1662,	// (0x00017832) heading_loc_req_pane_g2

0x166a,	// (0x0001783a) heading_loc_req_pane_g3

0x0002,

0xf347,	// (0x00025517) heading_loc_req_pane_g

0x1672,	// (0x00017842) heading_loc_req_pane_t1

0x16f6,	// (0x000178c6) bg_popup_sub_pane_cp01_ParamLimits

0x16f6,	// (0x000178c6) bg_popup_sub_pane_cp01

0x1704,	// (0x000178d4) popup_cale_events_window_g1_ParamLimits

0x1704,	// (0x000178d4) popup_cale_events_window_g1

0x1724,	// (0x000178f4) popup_cale_events_window_g2_ParamLimits

0x1724,	// (0x000178f4) popup_cale_events_window_g2

0x0001,

0xf37b,	// (0x0002554b) popup_cale_events_window_g_ParamLimits

0xf37b,	// (0x0002554b) popup_cale_events_window_g

0x1744,	// (0x00017914) popup_cale_events_window_t1_ParamLimits

0x1744,	// (0x00017914) popup_cale_events_window_t1

0x1756,	// (0x00017926) popup_cale_events_window_t2_ParamLimits

0x1756,	// (0x00017926) popup_cale_events_window_t2

0x1794,	// (0x00017964) popup_cale_events_window_t3_ParamLimits

0x1794,	// (0x00017964) popup_cale_events_window_t3

0x17ce,	// (0x0001799e) popup_cale_events_window_t4_ParamLimits

0x17ce,	// (0x0001799e) popup_cale_events_window_t4

0x0003,

0xf380,	// (0x00025550) popup_cale_events_window_t_ParamLimits

0xf380,	// (0x00025550) popup_cale_events_window_t

0x9f52,	// (0x00020122) call_type_pane

0x1c2a,	// (0x00017dfa) popup_call_status_window_g1

0x9f5e,	// (0x0002012e) popup_call_status_window_g2

0x9f6a,	// (0x0002013a) popup_call_status_window_g3

0x0002,

0xf389,	// (0x00025559) popup_call_status_window_g

0x1804,	// (0x000179d4) call_type_pane_g1

0x180d,	// (0x000179dd) call_type_pane_g2

0x0001,

0xf390,	// (0x00025560) call_type_pane_g

0x0a31,	// (0x00016c01) bg_popup_sub_pane_cp02

0x1816,	// (0x000179e6) listscroll_popup_wml_pane

0x181e,	// (0x000179ee) list_wml_pane

0x1828,	// (0x000179f8) scroll_pane_cp013

0x1833,	// (0x00017a03) list_single_graphic_popup_wml_pane_ParamLimits

0x1833,	// (0x00017a03) list_single_graphic_popup_wml_pane

0x0e36,	// (0x00017006) list_single_graphic_popup_wml_pane_g1

0x1847,	// (0x00017a17) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf395,	// (0x00025565) list_single_graphic_popup_wml_pane_g

0x184f,	// (0x00017a1f) list_single_graphic_popup_wml_pane_t1

0x185d,	// (0x00017a2d) aid_call_pane

0x0c84,	// (0x00016e54) popup_clock_analogue_window_g1

0x0c84,	// (0x00016e54) popup_clock_analogue_window_g2

0x7381,	// (0x0001d551) popup_clock_analogue_window_g3

0x7381,	// (0x0001d551) popup_clock_analogue_window_g4

0x0e36,	// (0x00017006) popup_clock_analogue_window_g5

0x0004,

0xf39a,	// (0x0002556a) popup_clock_analogue_window_g

0x7389,	// (0x0001d559) popup_clock_analogue_window_t1

0x7397,	// (0x0001d567) clock_digital_number_pane_ParamLimits

0x7397,	// (0x0001d567) clock_digital_number_pane

0x73a3,	// (0x0001d573) clock_digital_number_pane_cp02_ParamLimits

0x73a3,	// (0x0001d573) clock_digital_number_pane_cp02

0x73af,	// (0x0001d57f) clock_digital_number_pane_cp03_ParamLimits

0x73af,	// (0x0001d57f) clock_digital_number_pane_cp03

0x73bb,	// (0x0001d58b) clock_digital_number_pane_cp04_ParamLimits

0x73bb,	// (0x0001d58b) clock_digital_number_pane_cp04

0x73c7,	// (0x0001d597) clock_digital_separator_pane_ParamLimits

0x73c7,	// (0x0001d597) clock_digital_separator_pane

0x73d3,	// (0x0001d5a3) popup_clock_digital_window_t1

0x0e36,	// (0x00017006) clock_digital_number_pane_g1

0x0e36,	// (0x00017006) clock_digital_number_pane_g2

0x0001,

0xf308,	// (0x000254d8) clock_digital_number_pane_g

0x0e36,	// (0x00017006) clock_digital_separator_pane_g1

0x0e36,	// (0x00017006) clock_digital_separator_pane_g2

0x0001,

0xf308,	// (0x000254d8) clock_digital_separator_pane_g

0x0a31,	// (0x00016c01) bg_popup_window_pane_cp04

0x18dc,	// (0x00017aac) heading_pane_cp03

0x18e4,	// (0x00017ab4) listscroll_popup_gms_pane

0x18ec,	// (0x00017abc) grid_large_graphic_popup_pane

0x18f6,	// (0x00017ac6) listscroll_popup_gms_pane_g1

0x18fe,	// (0x00017ace) listscroll_popup_gms_pane_g2

0x0001,

0xf3a5,	// (0x00025575) listscroll_popup_gms_pane_g

0x12f7,	// (0x000174c7) scroll_pane_cp014

0x1906,	// (0x00017ad6) cell_large_graphic_popup_pane_ParamLimits

0x1906,	// (0x00017ad6) cell_large_graphic_popup_pane

0x191e,	// (0x00017aee) cell_large_graphic_popup_pane_g1_ParamLimits

0x191e,	// (0x00017aee) cell_large_graphic_popup_pane_g1

0x192a,	// (0x00017afa) cell_large_graphic_popup_pane_g2_ParamLimits

0x192a,	// (0x00017afa) cell_large_graphic_popup_pane_g2

0x1936,	// (0x00017b06) cell_large_graphic_popup_pane_g3_ParamLimits

0x1936,	// (0x00017b06) cell_large_graphic_popup_pane_g3

0x1943,	// (0x00017b13) cell_large_graphic_popup_pane_g4_ParamLimits

0x1943,	// (0x00017b13) cell_large_graphic_popup_pane_g4

0x0003,

0xf3aa,	// (0x0002557a) cell_large_graphic_popup_pane_g_ParamLimits

0xf3aa,	// (0x0002557a) cell_large_graphic_popup_pane_g

0x1953,	// (0x00017b23) grid_highlight_pane_cp010

0x0e36,	// (0x00017006) bg_popup_call_pane_g1

0x195d,	// (0x00017b2d) list_single_graphic_popup_conf_pane_ParamLimits

0x195d,	// (0x00017b2d) list_single_graphic_popup_conf_pane

0x196f,	// (0x00017b3f) list_highlight_pane_cp01

0x1978,	// (0x00017b48) list_single_graphic_popup_conf_pane_g1

0x1980,	// (0x00017b50) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3b3,	// (0x00025583) list_single_graphic_popup_conf_pane_g

0x1988,	// (0x00017b58) list_single_graphic_popup_conf_pane_t1

0x1996,	// (0x00017b66) linegrid_cams_pane_g1

0x9f76,	// (0x00020146) linegrid_cams_pane_g2

0x0f57,	// (0x00017127) linegrid_cams_pane_g3

0x199f,	// (0x00017b6f) linegrid_cams_pane_g4

0x9f7f,	// (0x0002014f) linegrid_cams_pane_g5

0x9f88,	// (0x00020158) linegrid_cams_pane_g6

0x0feb,	// (0x000171bb) linegrid_cams_pane_g7

0x0006,

0xf3b8,	// (0x00025588) linegrid_cams_pane_g

0x19a8,	// (0x00017b78) popup_clock_analogue_window

0x19a8,	// (0x00017b78) popup_clock_digital_window

0x0a31,	// (0x00016c01) popup_phob_thumbnail_window

0x0e36,	// (0x00017006) call_video_uplink_pane_g1

0x19b1,	// (0x00017b81) call_video_uplink_pane_g2

0x0001,

0xf3c7,	// (0x00025597) call_video_uplink_pane_g

0x0fb8,	// (0x00017188) video_uplink_pane

0x19b9,	// (0x00017b89) mce_image_pane_g1

0x9f91,	// (0x00020161) mce_image_pane_g2

0x9f99,	// (0x00020169) mce_image_pane_g3

0x9fa1,	// (0x00020171) mce_image_pane_g4

0x9fa9,	// (0x00020179) mce_image_pane_g5

0x0004,

0xf3cc,	// (0x0002559c) mce_image_pane_g

0x19c3,	// (0x00017b93) control_top_pane_stacon_cp01_ParamLimits

0x19c3,	// (0x00017b93) control_top_pane_stacon_cp01

0x19d7,	// (0x00017ba7) uni_indicator_pane_stacon_cp01_ParamLimits

0x19d7,	// (0x00017ba7) uni_indicator_pane_stacon_cp01

0x19e8,	// (0x00017bb8) bg_popup_sub_pane_cp03

0x9fb1,	// (0x00020181) chi_dic_find_pane

0x9fb9,	// (0x00020189) listscroll_chi_dic_pane

0x9fc2,	// (0x00020192) main_pane_chidic_g1

0x9fd5,	// (0x000201a5) chi_dic_find_pane_t1

0x19f2,	// (0x00017bc2) find_chidic_pane

0x19fb,	// (0x00017bcb) chi_dic_list_pane_ParamLimits

0x19fb,	// (0x00017bcb) chi_dic_list_pane

0x1a0c,	// (0x00017bdc) scroll_pane_cp020

0x9fe3,	// (0x000201b3) find_chidic_pane_t1

0x0a31,	// (0x00016c01) input_focus_pane_cp06

0x9ff2,	// (0x000201c2) list_chi_dic_pane_ParamLimits

0x9ff2,	// (0x000201c2) list_chi_dic_pane

0x1a14,	// (0x00017be4) list_chi_dic_pane_t1_ParamLimits

0x1a14,	// (0x00017be4) list_chi_dic_pane_t1

0x0a31,	// (0x00016c01) list_highlight_pane_cp020

0x1a27,	// (0x00017bf7) bg_cale_heading_pane_g1

0xa013,	// (0x000201e3) bg_cale_heading_pane_g2

0xa01b,	// (0x000201eb) bg_cale_heading_pane_g3

0xa023,	// (0x000201f3) bg_cale_heading_pane_g4

0xa02d,	// (0x000201fd) bg_cale_heading_pane_g5

0xa037,	// (0x00020207) bg_cale_heading_pane_g6

0xa03f,	// (0x0002020f) bg_cale_heading_pane_g7

0xa047,	// (0x00020217) bg_cale_heading_pane_g8

0xa051,	// (0x00020221) bg_cale_heading_pane_g9

0x0008,

0xf3d7,	// (0x000255a7) bg_cale_heading_pane_g

0x1a27,	// (0x00017bf7) bg_cale_side_pane_g1

0xa05b,	// (0x0002022b) bg_cale_side_pane_g2

0xa063,	// (0x00020233) bg_cale_side_pane_g3

0xa06b,	// (0x0002023b) bg_cale_side_pane_g4

0xa073,	// (0x00020243) bg_cale_side_pane_g5

0xa07b,	// (0x0002024b) bg_cale_side_pane_g6

0xa083,	// (0x00020253) bg_cale_side_pane_g7

0xa08b,	// (0x0002025b) bg_cale_side_pane_g8

0xa093,	// (0x00020263) bg_cale_side_pane_g9

0x0008,

0xf3ea,	// (0x000255ba) bg_cale_side_pane_g

0xa09b,	// (0x0002026b) popup_call_status_window_ParamLimits

0xa09b,	// (0x0002026b) popup_call_status_window

0x1a2f,	// (0x00017bff) stacon_top_pane

0x1a37,	// (0x00017c07) status_pane_ParamLimits

0x1a37,	// (0x00017c07) status_pane

0x1a4c,	// (0x00017c1c) status_small_pane

0x1a54,	// (0x00017c24) control_pane

0x0a31,	// (0x00016c01) stacon_bottom_pane

0x1a5c,	// (0x00017c2c) list_single_mce_smart_pane_t1_ParamLimits

0x1a5c,	// (0x00017c2c) list_single_mce_smart_pane_t1

0x1a6f,	// (0x00017c3f) list_single_mce_smart_pane_t2_ParamLimits

0x1a6f,	// (0x00017c3f) list_single_mce_smart_pane_t2

0x0001,

0xf3fd,	// (0x000255cd) list_single_mce_smart_pane_t_ParamLimits

0xf3fd,	// (0x000255cd) list_single_mce_smart_pane_t

0xa0a7,	// (0x00020277) compass_pane

0xa0b3,	// (0x00020283) main_location2_pane_t1

0xa0c7,	// (0x00020297) main_location2_pane_t2

0xa0db,	// (0x000202ab) main_location2_pane_t3

0x0003,

0xf402,	// (0x000255d2) main_location2_pane_t

0x1a8e,	// (0x00017c5e) compass_pane_g1_ParamLimits

0x1a8e,	// (0x00017c5e) compass_pane_g1

0xa125,	// (0x000202f5) compass_pane_t1

0xa134,	// (0x00020304) compass_pane_t2

0x0005,

0xf40b,	// (0x000255db) compass_pane_t

0xa17f,	// (0x0002034f) text_secondary_cp61

0x1aa2,	// (0x00017c72) navi_pane_cams_g5

0x1ac5,	// (0x00017c95) navi_pane_im_t1

0x1ad3,	// (0x00017ca3) navi_pane_mp_g1_ParamLimits

0x1ad3,	// (0x00017ca3) navi_pane_mp_g1

0x1ae7,	// (0x00017cb7) navi_pane_mp_g2_ParamLimits

0x1ae7,	// (0x00017cb7) navi_pane_mp_g2

0x1af3,	// (0x00017cc3) navi_pane_mp_g3_ParamLimits

0x1af3,	// (0x00017cc3) navi_pane_mp_g3

0x0002,

0xf41f,	// (0x000255ef) navi_pane_mp_g_ParamLimits

0xf41f,	// (0x000255ef) navi_pane_mp_g

0x1aff,	// (0x00017ccf) navi_pane_mp_t1

0x1b0d,	// (0x00017cdd) navi_pane_mp_t2

0x0002,

0xf426,	// (0x000255f6) navi_pane_mp_t

0x1b49,	// (0x00017d19) navi_pane_vt_g1

0x1aff,	// (0x00017ccf) navi_pane_vt_t1

0x1b51,	// (0x00017d21) navi_slider_pane

0x1b59,	// (0x00017d29) zooming_pane

0x1b61,	// (0x00017d31) navi_slider_pane_g1

0x73f0,	// (0x0001d5c0) navi_slider_pane_g2

0x0006,

0xf42d,	// (0x000255fd) navi_slider_pane_g

0x1b97,	// (0x00017d67) aid_levels_zoom

0x1b9f,	// (0x00017d6f) zooming_pane_g1

0x1ba7,	// (0x00017d77) zooming_pane_g2

0x1ba7,	// (0x00017d77) zooming_pane_g3

0x0002,

0xf43c,	// (0x0002560c) zooming_pane_g

0x1baf,	// (0x00017d7f) level_10_zoom

0x1bb8,	// (0x00017d88) level_11_zoom

0x1bc1,	// (0x00017d91) level_1_zoom

0x1bca,	// (0x00017d9a) level_2_zoom

0x1bd3,	// (0x00017da3) level_3_zoom

0x1bdc,	// (0x00017dac) level_4_zoom

0x1be5,	// (0x00017db5) level_5_zoom

0x1bee,	// (0x00017dbe) level_6_zoom

0x1bf7,	// (0x00017dc7) level_7_zoom

0x1c00,	// (0x00017dd0) level_8_zoom

0x1c09,	// (0x00017dd9) level_9_zoom

0x1c1a,	// (0x00017dea) popup_phob_thumbnail_window_g1

0x1c22,	// (0x00017df2) popup_phob_thumbnail_window_g2

0x0001,

0xf443,	// (0x00025613) popup_phob_thumbnail_window_g

0x2f97,	// (0x00019167) level_1_location

0x2f9f,	// (0x0001916f) level_2_location

0x2fa7,	// (0x00019177) level_3_location

0x2faf,	// (0x0001917f) level_4_location

0x1b59,	// (0x00017d29) level_5_location

0xa296,	// (0x00020466) mce_icon_pane_g1

0xa29e,	// (0x0002046e) mce_icon_pane_g2

0x0001,

0xf448,	// (0x00025618) mce_icon_pane_g

0xa2a6,	// (0x00020476) main_mup_pane_g1_ParamLimits

0xa2a6,	// (0x00020476) main_mup_pane_g1

0xa2be,	// (0x0002048e) main_mup_pane_g2_ParamLimits

0xa2be,	// (0x0002048e) main_mup_pane_g2

0xa2da,	// (0x000204aa) main_mup_pane_g3_ParamLimits

0xa2da,	// (0x000204aa) main_mup_pane_g3

0xa2f6,	// (0x000204c6) main_mup_pane_g4_ParamLimits

0xa2f6,	// (0x000204c6) main_mup_pane_g4

0xa312,	// (0x000204e2) main_mup_pane_g5_ParamLimits

0xa312,	// (0x000204e2) main_mup_pane_g5

0xa333,	// (0x00020503) main_mup_pane_g6_ParamLimits

0xa333,	// (0x00020503) main_mup_pane_g6

0xa34f,	// (0x0002051f) main_mup_pane_g7_ParamLimits

0xa34f,	// (0x0002051f) main_mup_pane_g7

0xa36b,	// (0x0002053b) main_mup_pane_g8_ParamLimits

0xa36b,	// (0x0002053b) main_mup_pane_g8

0xa387,	// (0x00020557) main_mup_pane_g9_ParamLimits

0xa387,	// (0x00020557) main_mup_pane_g9

0xa3a6,	// (0x00020576) main_mup_pane_g10_ParamLimits

0xa3a6,	// (0x00020576) main_mup_pane_g10

0xa3c5,	// (0x00020595) main_mup_pane_g11_ParamLimits

0xa3c5,	// (0x00020595) main_mup_pane_g11

0xa3dd,	// (0x000205ad) main_mup_pane_g12_ParamLimits

0xa3dd,	// (0x000205ad) main_mup_pane_g12

0xa3eb,	// (0x000205bb) main_mup_pane_g13_ParamLimits

0xa3eb,	// (0x000205bb) main_mup_pane_g13

0x000c,

0xf44d,	// (0x0002561d) main_mup_pane_g_ParamLimits

0xf44d,	// (0x0002561d) main_mup_pane_g

0xa401,	// (0x000205d1) main_mup_pane_t1_ParamLimits

0xa401,	// (0x000205d1) main_mup_pane_t1

0xa41e,	// (0x000205ee) main_mup_pane_t2_ParamLimits

0xa41e,	// (0x000205ee) main_mup_pane_t2

0xa438,	// (0x00020608) main_mup_pane_t3_ParamLimits

0xa438,	// (0x00020608) main_mup_pane_t3

0xa452,	// (0x00020622) main_mup_pane_t4_ParamLimits

0xa452,	// (0x00020622) main_mup_pane_t4

0xa464,	// (0x00020634) main_mup_pane_t5_ParamLimits

0xa464,	// (0x00020634) main_mup_pane_t5

0xa476,	// (0x00020646) main_mup_pane_t6_ParamLimits

0xa476,	// (0x00020646) main_mup_pane_t6

0x0005,

0xf468,	// (0x00025638) main_mup_pane_t_ParamLimits

0xf468,	// (0x00025638) main_mup_pane_t

0xa48c,	// (0x0002065c) mup_progress_pane_ParamLimits

0xa48c,	// (0x0002065c) mup_progress_pane

0xa498,	// (0x00020668) mup_visualizer_pane_ParamLimits

0xa498,	// (0x00020668) mup_visualizer_pane

0xa4d6,	// (0x000206a6) mup_volume_pane_ParamLimits

0xa4d6,	// (0x000206a6) mup_volume_pane

0x1c2a,	// (0x00017dfa) mup_visualizer_pane_g1_ParamLimits

0x1c2a,	// (0x00017dfa) mup_visualizer_pane_g1

0x1c2a,	// (0x00017dfa) mup_visualizer_pane_g2_ParamLimits

0x1c2a,	// (0x00017dfa) mup_visualizer_pane_g2

0x1a8e,	// (0x00017c5e) mup_visualizer_pane_g3_ParamLimits

0x1a8e,	// (0x00017c5e) mup_visualizer_pane_g3

0x0002,

0xf475,	// (0x00025645) mup_visualizer_pane_g_ParamLimits

0xf475,	// (0x00025645) mup_visualizer_pane_g

0x0e36,	// (0x00017006) mup_volume_pane_g1

0x1c40,	// (0x00017e10) mup_volume_pane_g2

0x0001,

0xf47c,	// (0x0002564c) mup_volume_pane_g

0x0e36,	// (0x00017006) mup_progress_pane_g1

0x1c49,	// (0x00017e19) mup_progress_pane_g2

0x1c52,	// (0x00017e22) mup_progress_pane_g3

0x0002,

0xf481,	// (0x00025651) mup_progress_pane_g

0x0a31,	// (0x00016c01) bg_popup_window_pane_cp05

0x1c5b,	// (0x00017e2b) heading_pane_cp02_ParamLimits

0x1c5b,	// (0x00017e2b) heading_pane_cp02

0x1c75,	// (0x00017e45) list_popup_blid_pane

0x1c7d,	// (0x00017e4d) list_blid_sat_info_pane_ParamLimits

0x1c7d,	// (0x00017e4d) list_blid_sat_info_pane

0x1c90,	// (0x00017e60) list_blid_sat_info_pane_g1

0x1c98,	// (0x00017e68) list_blid_sat_info_pane_t1

0xa5e1,	// (0x000207b1) mup_equalizer_pane_ParamLimits

0xa5e1,	// (0x000207b1) mup_equalizer_pane

0xa602,	// (0x000207d2) mup_equalizer_pane_cp1_ParamLimits

0xa602,	// (0x000207d2) mup_equalizer_pane_cp1

0xa623,	// (0x000207f3) mup_equalizer_pane_cp2_ParamLimits

0xa623,	// (0x000207f3) mup_equalizer_pane_cp2

0xa644,	// (0x00020814) mup_equalizer_pane_cp3_ParamLimits

0xa644,	// (0x00020814) mup_equalizer_pane_cp3

0xa665,	// (0x00020835) mup_equalizer_pane_cp4_ParamLimits

0xa665,	// (0x00020835) mup_equalizer_pane_cp4

0xa686,	// (0x00020856) mup_equalizer_pane_cp5

0xa69c,	// (0x0002086c) mup_equalizer_pane_cp6

0xa6b4,	// (0x00020884) mup_equalizer_pane_cp7

0x2eb5,	// (0x00019085) bg_popup_call_poc_act_pane_g9

0x2ebd,	// (0x0001908d) bg_popup_call_poc_act_pane_g10

0x2ec5,	// (0x00019095) bg_popup_call_poc_act_pane_g11

0x000a,

0x0c8c,	// (0x00016e5c) mup_scale_pane

0x0e36,	// (0x00017006) mup_scale_pane_g1

0x1ca6,	// (0x00017e76) mup_scale_pane_g2

0x0006,

0xf49d,	// (0x0002566d) mup_scale_pane_g

0x1cca,	// (0x00017e9a) msg_data_pane

0x1cd2,	// (0x00017ea2) scroll_pane_cp017

0xa6de,	// (0x000208ae) bg_list_pane_cp04_ParamLimits

0xa6de,	// (0x000208ae) bg_list_pane_cp04

0x1cda,	// (0x00017eaa) msg_data_pane_g1

0xa6fe,	// (0x000208ce) msg_data_pane_g2

0x9f99,	// (0x00020169) msg_data_pane_g3

0xa706,	// (0x000208d6) msg_data_pane_g4

0xa70e,	// (0x000208de) msg_data_pane_g5

0xa716,	// (0x000208e6) msg_data_pane_g6

0xa71e,	// (0x000208ee) msg_data_pane_g7

0x0006,

0xf4ac,	// (0x0002567c) msg_data_pane_g

0xa726,	// (0x000208f6) msg_text_pane_ParamLimits

0xa726,	// (0x000208f6) msg_text_pane

0xa777,	// (0x00020947) qrid_highlight_pane_cp011_ParamLimits

0xa777,	// (0x00020947) qrid_highlight_pane_cp011

0x0a31,	// (0x00016c01) msg_body_pane

0x0a31,	// (0x00016c01) msg_header_pane

0x1ceb,	// (0x00017ebb) input_focus_pane_cp07

0xa7a1,	// (0x00020971) msg_header_pane_t1_ParamLimits

0xa7a1,	// (0x00020971) msg_header_pane_t1

0x1d00,	// (0x00017ed0) msg_header_pane_t2_ParamLimits

0x1d00,	// (0x00017ed0) msg_header_pane_t2

0x0001,

0xf4c0,	// (0x00025690) msg_header_pane_t_ParamLimits

0xf4c0,	// (0x00025690) msg_header_pane_t

0x1d12,	// (0x00017ee2) msg_body_pane_g1

0xa7b5,	// (0x00020985) msg_body_pane_t1_ParamLimits

0xa7b5,	// (0x00020985) msg_body_pane_t1

0x1d1a,	// (0x00017eea) msg_body_pane_t2_ParamLimits

0x1d1a,	// (0x00017eea) msg_body_pane_t2

0x1d2c,	// (0x00017efc) msg_body_pane_t3_ParamLimits

0x1d2c,	// (0x00017efc) msg_body_pane_t3

0x0002,

0xf4c5,	// (0x00025695) msg_body_pane_t_ParamLimits

0xf4c5,	// (0x00025695) msg_body_pane_t

0x7432,	// (0x0001d602) main_viewer_pane_g1_ParamLimits

0x7432,	// (0x0001d602) main_viewer_pane_g1

0x743e,	// (0x0001d60e) main_viewer_pane_g2_ParamLimits

0x743e,	// (0x0001d60e) main_viewer_pane_g2

0xa808,	// (0x000209d8) main_viewer_pane_g3_ParamLimits

0xa808,	// (0x000209d8) main_viewer_pane_g3

0xa819,	// (0x000209e9) main_viewer_pane_g4_ParamLimits

0xa819,	// (0x000209e9) main_viewer_pane_g4

0x744a,	// (0x0001d61a) main_viewer_pane_g5_ParamLimits

0x744a,	// (0x0001d61a) main_viewer_pane_g5

0x744a,	// (0x0001d61a) main_viewer_pane_g7_ParamLimits

0x744a,	// (0x0001d61a) main_viewer_pane_g7

0x745c,	// (0x0001d62c) main_viewer_pane_g8_ParamLimits

0x745c,	// (0x0001d62c) main_viewer_pane_g8

0x0007,

0xf4d5,	// (0x000256a5) main_viewer_pane_g_ParamLimits

0xf4d5,	// (0x000256a5) main_viewer_pane_g

0x1d80,	// (0x00017f50) viewer_content_pane_ParamLimits

0x1d80,	// (0x00017f50) viewer_content_pane

0xa84a,	// (0x00020a1a) main_postcard_pane_g1_ParamLimits

0xa84a,	// (0x00020a1a) main_postcard_pane_g1

0xa858,	// (0x00020a28) main_postcard_pane_g2_ParamLimits

0xa858,	// (0x00020a28) main_postcard_pane_g2

0xa866,	// (0x00020a36) main_postcard_pane_g3_ParamLimits

0xa866,	// (0x00020a36) main_postcard_pane_g3

0x0005,

0xf4e6,	// (0x000256b6) main_postcard_pane_g_ParamLimits

0xf4e6,	// (0x000256b6) main_postcard_pane_g

0xa876,	// (0x00020a46) main_postcard_pane_g4

0x30b7,	// (0x00019287) smil_status_volume_pane_g2

0xa8a2,	// (0x00020a72) postcard_pane_ParamLimits

0xa8a2,	// (0x00020a72) postcard_pane

0x1c2a,	// (0x00017dfa) postcard_pane_g1_ParamLimits

0x1c2a,	// (0x00017dfa) postcard_pane_g1

0xa8d4,	// (0x00020aa4) postcard_pane_g2_ParamLimits

0xa8d4,	// (0x00020aa4) postcard_pane_g2

0xa8e0,	// (0x00020ab0) postcard_pane_g3_ParamLimits

0xa8e0,	// (0x00020ab0) postcard_pane_g3

0x1d9c,	// (0x00017f6c) postcard_pane_g4_ParamLimits

0x1d9c,	// (0x00017f6c) postcard_pane_g4

0xa8ec,	// (0x00020abc) postcard_pane_g5_ParamLimits

0xa8ec,	// (0x00020abc) postcard_pane_g5

0xa8f8,	// (0x00020ac8) postcard_pane_g6_ParamLimits

0xa8f8,	// (0x00020ac8) postcard_pane_g6

0x1d8e,	// (0x00017f5e) postcard_pane_g7_ParamLimits

0x1d8e,	// (0x00017f5e) postcard_pane_g7

0x0006,

0xf4f3,	// (0x000256c3) postcard_pane_g_ParamLimits

0xf4f3,	// (0x000256c3) postcard_pane_g

0xa904,	// (0x00020ad4) main_mp2_pane_g1_ParamLimits

0xa904,	// (0x00020ad4) main_mp2_pane_g1

0xa910,	// (0x00020ae0) main_mp2_pane_g2_ParamLimits

0xa910,	// (0x00020ae0) main_mp2_pane_g2

0xa91c,	// (0x00020aec) main_mp2_pane_g3_ParamLimits

0xa91c,	// (0x00020aec) main_mp2_pane_g3

0x0002,

0xf502,	// (0x000256d2) main_mp2_pane_g_ParamLimits

0xf502,	// (0x000256d2) main_mp2_pane_g

0xa928,	// (0x00020af8) main_mp2_pane_t1_ParamLimits

0xa928,	// (0x00020af8) main_mp2_pane_t1

0xa93f,	// (0x00020b0f) main_mp2_pane_t2_ParamLimits

0xa93f,	// (0x00020b0f) main_mp2_pane_t2

0xa951,	// (0x00020b21) main_mp2_pane_t3_ParamLimits

0xa951,	// (0x00020b21) main_mp2_pane_t3

0x0002,

0xf509,	// (0x000256d9) main_mp2_pane_t_ParamLimits

0xf509,	// (0x000256d9) main_mp2_pane_t

0x1daa,	// (0x00017f7a) pec_content_pane_ParamLimits

0x1daa,	// (0x00017f7a) pec_content_pane

0x12f7,	// (0x000174c7) scroll_pane_cp015

0x1dbc,	// (0x00017f8c) pec_attribute_pane_ParamLimits

0x1dbc,	// (0x00017f8c) pec_attribute_pane

0xa963,	// (0x00020b33) pec_content_pane_g1_ParamLimits

0xa963,	// (0x00020b33) pec_content_pane_g1

0x1dcc,	// (0x00017f9c) pec_content_pane_t1_ParamLimits

0x1dcc,	// (0x00017f9c) pec_content_pane_t1

0x1dde,	// (0x00017fae) pec_content_pane_t2_ParamLimits

0x1dde,	// (0x00017fae) pec_content_pane_t2

0x0001,

0xf510,	// (0x000256e0) pec_content_pane_t_ParamLimits

0xf510,	// (0x000256e0) pec_content_pane_t

0xa96f,	// (0x00020b3f) list_single_graphic_pane_cp01_ParamLimits

0xa96f,	// (0x00020b3f) list_single_graphic_pane_cp01

0x0c8c,	// (0x00016e5c) bg_popup_sub_pane_cp04

0x1df0,	// (0x00017fc0) popup_mup_playback_window_g1

0x1dfc,	// (0x00017fcc) popup_mup_playback_window_t1

0x1e11,	// (0x00017fe1) popup_mup_playback_window_t2

0x0001,

0xf515,	// (0x000256e5) popup_mup_playback_window_t

0x1e48,	// (0x00018018) main_image_pane_g1_ParamLimits

0x1e48,	// (0x00018018) main_image_pane_g1

0x1e8b,	// (0x0001805b) scroll_pane_cp018_ParamLimits

0x1e8b,	// (0x0001805b) scroll_pane_cp018

0x1ea3,	// (0x00018073) scroll_pane_cp016_ParamLimits

0x1ea3,	// (0x00018073) scroll_pane_cp016

0xaa13,	// (0x00020be3) smil2_image_pane_ParamLimits

0xaa13,	// (0x00020be3) smil2_image_pane

0xaa47,	// (0x00020c17) smil2_root_pane_ParamLimits

0xaa47,	// (0x00020c17) smil2_root_pane

0xaa73,	// (0x00020c43) smil2_text_pane_ParamLimits

0xaa73,	// (0x00020c43) smil2_text_pane

0x0a31,	// (0x00016c01) bg_list_pane_cp06

0x1edf,	// (0x000180af) grid_radio_pane

0x0a31,	// (0x00016c01) bg_popup_window_pane_cp06

0x1ee7,	// (0x000180b7) main_fmradio_pane_t1

0x18dc,	// (0x00017aac) heading_pane_cp04

0x1ef5,	// (0x000180c5) main_fmradio_pane_t2

0x2ecd,	// (0x0001909d) popup_cale_lunar_info_window_g1

0x1f03,	// (0x000180d3) main_fmradio_pane_t3

0x2ed5,	// (0x000190a5) popup_cale_lunar_info_window_g2

0x1f11,	// (0x000180e1) main_fmradio_pane_t4

0x0001,

0x1f1f,	// (0x000180ef) main_fmradio_pane_t5

0x0004,

0xf5f0,	// (0x000257c0) popup_cale_lunar_info_window_g

0xf52a,	// (0x000256fa) main_fmradio_pane_t

0x1f2d,	// (0x000180fd) wait_bar_pane_cp03

0x1f35,	// (0x00018105) cell_fmradio_pane_ParamLimits

0x1f35,	// (0x00018105) cell_fmradio_pane

0x1d8e,	// (0x00017f5e) cell_fmradio_pane_g1_ParamLimits

0x1d8e,	// (0x00017f5e) cell_fmradio_pane_g1

0x0a31,	// (0x00016c01) grid_highlight_pane_cp011

0x1f48,	// (0x00018118) poc_content_pane_ParamLimits

0x1f48,	// (0x00018118) poc_content_pane

0x1f5a,	// (0x0001812a) scroll_pane_cp019

0xaab3,	// (0x00020c83) popup_call_poc_act_window_ParamLimits

0xaab3,	// (0x00020c83) popup_call_poc_act_window

0xaac0,	// (0x00020c90) popup_call_poc_inact_window_ParamLimits

0xaac0,	// (0x00020c90) popup_call_poc_inact_window

0xf5c7,	// (0x00025797) bg_popup_call_poc_act_pane_g

0x2e45,	// (0x00019015) bg_popup_call_poc_inact_pane_g1

0x2e4d,	// (0x0001901d) bg_popup_call_poc_inact_pane_g2

0x1f62,	// (0x00018132) popup_call_poc_act_window_g2

0x2e55,	// (0x00019025) bg_popup_call_poc_inact_pane_g3

0x2e5d,	// (0x0001902d) bg_popup_call_poc_inact_pane_g4

0x2e65,	// (0x00019035) bg_popup_call_poc_inact_pane_g5

0x1f6a,	// (0x0001813a) popup_call_poc_act_window_t1_ParamLimits

0x1f6a,	// (0x0001813a) popup_call_poc_act_window_t1

0x1f92,	// (0x00018162) popup_call_poc_act_window_t2_ParamLimits

0x1f92,	// (0x00018162) popup_call_poc_act_window_t2

0x1fba,	// (0x0001818a) popup_call_poc_act_window_t3_ParamLimits

0x1fba,	// (0x0001818a) popup_call_poc_act_window_t3

0x1fe2,	// (0x000181b2) popup_call_poc_act_window_t4_ParamLimits

0x1fe2,	// (0x000181b2) popup_call_poc_act_window_t4

0x0003,

0xf535,	// (0x00025705) popup_call_poc_act_window_t_ParamLimits

0xf535,	// (0x00025705) popup_call_poc_act_window_t

0x2e6d,	// (0x0001903d) bg_popup_call_poc_inact_pane_g6

0x2e75,	// (0x00019045) bg_popup_call_poc_inact_pane_g7

0x2e7d,	// (0x0001904d) bg_popup_call_poc_inact_pane_g8

0x1ff4,	// (0x000181c4) popup_call_poc_inact_window_g2

0x2e85,	// (0x00019055) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5b4,	// (0x00025784) bg_popup_call_poc_inact_pane_g

0x1ffc,	// (0x000181cc) popup_call_poc_inact_window_t1_ParamLimits

0x1ffc,	// (0x000181cc) popup_call_poc_inact_window_t1

0x2011,	// (0x000181e1) popup_call_poc_inact_window_t2_ParamLimits

0x2011,	// (0x000181e1) popup_call_poc_inact_window_t2

0x2026,	// (0x000181f6) popup_call_poc_inact_window_t3_ParamLimits

0x2026,	// (0x000181f6) popup_call_poc_inact_window_t3

0x0002,

0xf53e,	// (0x0002570e) popup_call_poc_inact_window_t_ParamLimits

0xf53e,	// (0x0002570e) popup_call_poc_inact_window_t

0x303d,	// (0x0001920d) context_pane_ParamLimits

0xb0af,	// (0x0002127f) signal_pane_ParamLimits

0x1b59,	// (0x00017d29) main_call2_pane

0x302b,	// (0x000191fb) popup_phob_thumbnail2_window_ParamLimits

0x302b,	// (0x000191fb) popup_phob_thumbnail2_window

0x7402,	// (0x0001d5d2) aid_hotspot_pointer_arrow_pane

0x740a,	// (0x0001d5da) aid_hotspot_pointer_hand_pane

0xaded,	// (0x00020fbd) phob_pre_status_pane_g5

0x8d55,	// (0x0001ef25) cams_zoom_pane_ParamLimits

0x8d61,	// (0x0001ef31) image_vga_pane_ParamLimits

0x8d70,	// (0x0001ef40) main_camera_pane_g1_ParamLimits

0x8d7e,	// (0x0001ef4e) main_camera_pane_g2_ParamLimits

0x8d8c,	// (0x0001ef5c) main_camera_pane_g3_ParamLimits

0x8d98,	// (0x0001ef68) main_camera_pane_g4_ParamLimits

0x8da4,	// (0x0001ef74) main_camera_pane_g5_ParamLimits

0x8db0,	// (0x0001ef80) main_camera_pane_g6_ParamLimits

0x8dbc,	// (0x0001ef8c) main_camera_pane_g7_ParamLimits

0xf23d,	// (0x0002540d) main_camera_pane_g_ParamLimits

0x8dc8,	// (0x0001ef98) main_camera_pane_t1_ParamLimits

0x8dda,	// (0x0001efaa) main_camera_pane_t2_ParamLimits

0xf24e,	// (0x0002541e) main_camera_pane_t_ParamLimits

0x0c8c,	// (0x00016e5c) bg_popup_preview_window_pane_cp01_ParamLimits

0x0c8c,	// (0x00016e5c) bg_popup_preview_window_pane_cp01

0x203b,	// (0x0001820b) popup_phob_thumbnail2_window_g1_ParamLimits

0x203b,	// (0x0001820b) popup_phob_thumbnail2_window_g1

0x0a31,	// (0x00016c01) call2_cli_visual_pane

0xaadc,	// (0x00020cac) popup_call2_audio_conf_window_ParamLimits

0xaadc,	// (0x00020cac) popup_call2_audio_conf_window

0xaaf1,	// (0x00020cc1) popup_call2_audio_first_window_ParamLimits

0xaaf1,	// (0x00020cc1) popup_call2_audio_first_window

0xab8f,	// (0x00020d5f) popup_call2_audio_in_window_ParamLimits

0xab8f,	// (0x00020d5f) popup_call2_audio_in_window

0xabd1,	// (0x00020da1) popup_call2_audio_out_window_ParamLimits

0xabd1,	// (0x00020da1) popup_call2_audio_out_window

0xac33,	// (0x00020e03) popup_call2_audio_second_window_ParamLimits

0xac33,	// (0x00020e03) popup_call2_audio_second_window

0xac91,	// (0x00020e61) popup_call2_audio_wait_window_ParamLimits

0xac91,	// (0x00020e61) popup_call2_audio_wait_window

0x0a31,	// (0x00016c01) bg_popup_call2_act_pane_cp03

0x0c6e,	// (0x00016e3e) list_conf_pane_cp

0x2047,	// (0x00018217) popup_call2_audio_conf_window_t1

0x2055,	// (0x00018225) list_single_graphic_popup_conf2_pane_ParamLimits

0x2055,	// (0x00018225) list_single_graphic_popup_conf2_pane

0x196f,	// (0x00017b3f) list_highlight_pane_cp04

0x2068,	// (0x00018238) list_single_graphic_popup_conf2_pane_g1

0x1980,	// (0x00017b50) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf545,	// (0x00025715) list_single_graphic_popup_conf2_pane_g

0x2072,	// (0x00018242) list_single_graphic_popup_conf2_pane_t1

0x2080,	// (0x00018250) bg_popup_call2_act_pane_cp01_ParamLimits

0x2080,	// (0x00018250) bg_popup_call2_act_pane_cp01

0x210a,	// (0x000182da) call_type_pane_cp05_ParamLimits

0x210a,	// (0x000182da) call_type_pane_cp05

0x215e,	// (0x0001832e) popup_call2_audio_second_window_g1_ParamLimits

0x215e,	// (0x0001832e) popup_call2_audio_second_window_g1

0x21b2,	// (0x00018382) popup_call2_audio_second_window_g2_ParamLimits

0x21b2,	// (0x00018382) popup_call2_audio_second_window_g2

0x0002,

0xf54a,	// (0x0002571a) popup_call2_audio_second_window_g_ParamLimits

0xf54a,	// (0x0002571a) popup_call2_audio_second_window_g

0x2217,	// (0x000183e7) popup_call2_audio_second_window_t1_ParamLimits

0x2217,	// (0x000183e7) popup_call2_audio_second_window_t1

0x22d2,	// (0x000184a2) popup_call2_audio_second_window_t2_ParamLimits

0x22d2,	// (0x000184a2) popup_call2_audio_second_window_t2

0x2325,	// (0x000184f5) popup_call2_audio_second_window_t3_ParamLimits

0x2325,	// (0x000184f5) popup_call2_audio_second_window_t3

0x0003,

0xf551,	// (0x00025721) popup_call2_audio_second_window_t_ParamLimits

0xf551,	// (0x00025721) popup_call2_audio_second_window_t

0x0a31,	// (0x00016c01) bg_popup_call2_in_pane_cp02

0x0a3b,	// (0x00016c0b) call_type_pane_cp04

0x0a43,	// (0x00016c13) popup_call2_audio_wait_window_g1

0x0a4b,	// (0x00016c1b) popup_call2_audio_wait_window_g2

0x0001,

0xf12a,	// (0x000252fa) popup_call2_audio_wait_window_g

0x0a53,	// (0x00016c23) popup_call2_audio_wait_window_t3

0x2418,	// (0x000185e8) bg_popup_call2_act_pane_ParamLimits

0x2418,	// (0x000185e8) bg_popup_call2_act_pane

0x24d8,	// (0x000186a8) call_type_pane_cp03_ParamLimits

0x24d8,	// (0x000186a8) call_type_pane_cp03

0x253c,	// (0x0001870c) popup_call2_audio_first_window_g1_ParamLimits

0x253c,	// (0x0001870c) popup_call2_audio_first_window_g1

0x25ac,	// (0x0001877c) popup_call2_audio_first_window_g2_ParamLimits

0x25ac,	// (0x0001877c) popup_call2_audio_first_window_g2

0x1c2a,	// (0x00017dfa) popup_call2_audio_first_window_g3_ParamLimits

0x1c2a,	// (0x00017dfa) popup_call2_audio_first_window_g3

0x0004,

0xf55a,	// (0x0002572a) popup_call2_audio_first_window_g_ParamLimits

0xf55a,	// (0x0002572a) popup_call2_audio_first_window_g

0x268a,	// (0x0001885a) popup_call2_audio_first_window_t1_ParamLimits

0x268a,	// (0x0001885a) popup_call2_audio_first_window_t1

0x278d,	// (0x0001895d) popup_call2_audio_first_window_t4_ParamLimits

0x278d,	// (0x0001895d) popup_call2_audio_first_window_t4

0x2870,	// (0x00018a40) popup_call2_audio_first_window_t5_ParamLimits

0x2870,	// (0x00018a40) popup_call2_audio_first_window_t5

0x0003,

0xf565,	// (0x00025735) popup_call2_audio_first_window_t_ParamLimits

0xf565,	// (0x00025735) popup_call2_audio_first_window_t

0x0c84,	// (0x00016e54) bg_popup_call2_act_pane_g1

0x2edd,	// (0x000190ad) popup_cale_lunar_info_window_t1

0x2eeb,	// (0x000190bb) popup_cale_lunar_info_window_t2

0x2ef9,	// (0x000190c9) popup_cale_lunar_info_window_t3

0x0a31,	// (0x00016c01) bg_popup_call2_bubble_pane

0x2971,	// (0x00018b41) bg_popup_call2_in_pane_cp01_ParamLimits

0x2971,	// (0x00018b41) bg_popup_call2_in_pane_cp01

0x070d,	// (0x000168dd) call_type_pane_cp02

0x29b9,	// (0x00018b89) popup_call2_audio_out_window_g1_ParamLimits

0x29b9,	// (0x00018b89) popup_call2_audio_out_window_g1

0x29e5,	// (0x00018bb5) popup_call2_audio_out_window_g2_ParamLimits

0x29e5,	// (0x00018bb5) popup_call2_audio_out_window_g2

0x2a0d,	// (0x00018bdd) popup_call2_audio_out_window_g3_ParamLimits

0x2a0d,	// (0x00018bdd) popup_call2_audio_out_window_g3

0x0003,

0xf56e,	// (0x0002573e) popup_call2_audio_out_window_g_ParamLimits

0xf56e,	// (0x0002573e) popup_call2_audio_out_window_g

0x2a48,	// (0x00018c18) popup_call2_audio_out_window_t1_ParamLimits

0x2a48,	// (0x00018c18) popup_call2_audio_out_window_t1

0x2aa7,	// (0x00018c77) popup_call2_audio_out_window_t2_ParamLimits

0x2aa7,	// (0x00018c77) popup_call2_audio_out_window_t2

0x2afb,	// (0x00018ccb) popup_call2_audio_out_window_t3_ParamLimits

0x2afb,	// (0x00018ccb) popup_call2_audio_out_window_t3

0x2b11,	// (0x00018ce1) popup_call2_audio_out_window_t4_ParamLimits

0x2b11,	// (0x00018ce1) popup_call2_audio_out_window_t4

0x2b27,	// (0x00018cf7) popup_call2_audio_out_window_t5_ParamLimits

0x2b27,	// (0x00018cf7) popup_call2_audio_out_window_t5

0x0005,

0xf577,	// (0x00025747) popup_call2_audio_out_window_t_ParamLimits

0xf577,	// (0x00025747) popup_call2_audio_out_window_t

0x2b8b,	// (0x00018d5b) bg_popup_call2_in_pane_ParamLimits

0x2b8b,	// (0x00018d5b) bg_popup_call2_in_pane

0x2be7,	// (0x00018db7) popup_call2_audio_in_window_g1_ParamLimits

0x2be7,	// (0x00018db7) popup_call2_audio_in_window_g1

0x2c1f,	// (0x00018def) popup_call2_audio_in_window_g2_ParamLimits

0x2c1f,	// (0x00018def) popup_call2_audio_in_window_g2

0x2c57,	// (0x00018e27) popup_call2_audio_in_window_g3_ParamLimits

0x2c57,	// (0x00018e27) popup_call2_audio_in_window_g3

0x0003,

0xf584,	// (0x00025754) popup_call2_audio_in_window_g_ParamLimits

0xf584,	// (0x00025754) popup_call2_audio_in_window_g

0x2caf,	// (0x00018e7f) popup_call2_audio_in_window_t1_ParamLimits

0x2caf,	// (0x00018e7f) popup_call2_audio_in_window_t1

0x2d2f,	// (0x00018eff) popup_call2_audio_in_window_t2_ParamLimits

0x2d2f,	// (0x00018eff) popup_call2_audio_in_window_t2

0x2daf,	// (0x00018f7f) popup_call2_audio_in_window_t3_ParamLimits

0x2daf,	// (0x00018f7f) popup_call2_audio_in_window_t3

0x2dc9,	// (0x00018f99) popup_call2_audio_in_window_t4_ParamLimits

0x2dc9,	// (0x00018f99) popup_call2_audio_in_window_t4

0x2ddb,	// (0x00018fab) popup_call2_audio_in_window_t5_ParamLimits

0x2ddb,	// (0x00018fab) popup_call2_audio_in_window_t5

0x2df0,	// (0x00018fc0) popup_call2_audio_in_window_t6_ParamLimits

0x2df0,	// (0x00018fc0) popup_call2_audio_in_window_t6

0x0005,

0xf58d,	// (0x0002575d) popup_call2_audio_in_window_t_ParamLimits

0xf58d,	// (0x0002575d) popup_call2_audio_in_window_t

0x0c84,	// (0x00016e54) bg_popup_call2_in_pane_g1

0x2f07,	// (0x000190d7) popup_cale_lunar_info_window_t4

0x0003,

0xf5f5,	// (0x000257c5) popup_cale_lunar_info_window_t

0x0c8c,	// (0x00016e5c) bg_popup_call2_rect_pane_ParamLimits

0x0c8c,	// (0x00016e5c) bg_popup_call2_rect_pane

0x0a31,	// (0x00016c01) call2_cli_visual_graphic_pane

0x0a31,	// (0x00016c01) call2_cli_visual_text_pane

0x7474,	// (0x0001d644) smil_status_volume_pane_g3

0x0002,

0x0e36,	// (0x00017006) call2_cli_visual_graphic_pane_g1

0x0e36,	// (0x00017006) call2_cli_visual_graphic_pane_g2

0x0e36,	// (0x00017006) call2_cli_visual_graphic_pane_g3

0x0002,

0xf59a,	// (0x0002576a) call2_cli_visual_graphic_pane_g

0x2e05,	// (0x00018fd5) bg_popup_call2_rect_pane_g1

0x0ede,	// (0x000170ae) bg_popup_call2_rect_pane_g2

0x2e0d,	// (0x00018fdd) bg_popup_call2_rect_pane_g3

0x2e15,	// (0x00018fe5) bg_popup_call2_rect_pane_g4

0x2e1d,	// (0x00018fed) bg_popup_call2_rect_pane_g5

0x2e25,	// (0x00018ff5) bg_popup_call2_rect_pane_g6

0x2e2d,	// (0x00018ffd) bg_popup_call2_rect_pane_g7

0x2e35,	// (0x00019005) bg_popup_call2_rect_pane_g8

0x2e3d,	// (0x0001900d) bg_popup_call2_rect_pane_g9

0x0008,

0xf5a1,	// (0x00025771) bg_popup_call2_rect_pane_g

0x2e45,	// (0x00019015) bg_popup_call2_bubble_pane_g1

0x2e4d,	// (0x0001901d) bg_popup_call2_bubble_pane_g2

0x2e55,	// (0x00019025) bg_popup_call2_bubble_pane_g3

0x2e5d,	// (0x0001902d) bg_popup_call2_bubble_pane_g4

0x2e65,	// (0x00019035) bg_popup_call2_bubble_pane_g5

0x2e6d,	// (0x0001903d) bg_popup_call2_bubble_pane_g6

0x2e75,	// (0x00019045) bg_popup_call2_bubble_pane_g7

0x2e7d,	// (0x0001904d) bg_popup_call2_bubble_pane_g8

0x2e85,	// (0x00019055) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5b4,	// (0x00025784) bg_popup_call2_bubble_pane_g

0x8a96,	// (0x0001ec66) aid_cale_week_size_cell_pane

0x8dec,	// (0x0001efbc) aid_cams_cif_uncrop_pane_ParamLimits

0x8dec,	// (0x0001efbc) aid_cams_cif_uncrop_pane

0x8f4f,	// (0x0001f11f) aid_cams_size_cell_ParamLimits

0x8f4f,	// (0x0001f11f) aid_cams_size_cell

0x8f5b,	// (0x0001f12b) grid_cams_pane_ParamLimits

0x8f69,	// (0x0001f139) linegrid_cams_pane_ParamLimits

0x9055,	// (0x0001f225) call_video_pane_t1

0x906e,	// (0x0001f23e) call_video_pane_t2

0x0001,

0xf2a1,	// (0x00025471) call_video_pane_t

0x956c,	// (0x0001f73c) aid_cale_month_size_cell_pane_ParamLimits

0x956c,	// (0x0001f73c) aid_cale_month_size_cell_pane

0xf63e,	// (0x0002580e) smil_status_volume_pane_g

0x7481,	// (0x0001d651) volume_smil_pane_ParamLimits

0x05b4,	// (0x00016784) aid_popup2_width_pane

0x89d3,	// (0x0001eba3) cell_qdial_pane_g4_ParamLimits

0x89d3,	// (0x0001eba3) cell_qdial_pane_g4

0xa101,	// (0x000202d1) aid_blid_cardinal_pane_ParamLimits

0xa111,	// (0x000202e1) aid_blid_destination_pane_ParamLimits

0xa111,	// (0x000202e1) aid_blid_destination_pane

0x0c8c,	// (0x00016e5c) bg_popup_call_poc_act_pane_ParamLimits

0x0c8c,	// (0x00016e5c) bg_popup_call_poc_act_pane

0x0c8c,	// (0x00016e5c) bg_popup_call_poc_inact_pane_ParamLimits

0x0c8c,	// (0x00016e5c) bg_popup_call_poc_inact_pane

0x2e8d,	// (0x0001905d) bg_popup_call_poc_act_pane_g1

0x2e95,	// (0x00019065) bg_popup_call_poc_act_pane_g2

0x2e9d,	// (0x0001906d) bg_popup_call_poc_act_pane_g3

0x2e5d,	// (0x0001902d) bg_popup_call_poc_act_pane_g4

0x2e65,	// (0x00019035) bg_popup_call_poc_act_pane_g5

0x2ea5,	// (0x00019075) bg_popup_call_poc_act_pane_g6

0x2e75,	// (0x00019045) bg_popup_call_poc_act_pane_g7

0x2ead,	// (0x0001907d) bg_popup_call_poc_act_pane_g8

0x0a31,	// (0x00016c01) main_usb_pane

0x3006,	// (0x000191d6) popup_cale_lunar_info_window

0x930b,	// (0x0001f4db) im_reading_pane_t1_ParamLimits

0x124f,	// (0x0001741f) list_im_pane_ParamLimits

0x1260,	// (0x00017430) scroll_pane_cp07_ParamLimits

0x0a31,	// (0x00016c01) grid_highlight_pane_cp012

0x0c8c,	// (0x00016e5c) mup_scale_pane_ParamLimits

0x1c2a,	// (0x00017dfa) main_usb_pane_g1_ParamLimits

0x1c2a,	// (0x00017dfa) main_usb_pane_g1

0xad10,	// (0x00020ee0) main_usb_pane_g2_ParamLimits

0xad10,	// (0x00020ee0) main_usb_pane_g2

0x0001,

0xf5de,	// (0x000257ae) main_usb_pane_g_ParamLimits

0xf5de,	// (0x000257ae) main_usb_pane_g

0xad1c,	// (0x00020eec) main_usb_pane_t1_ParamLimits

0xad1c,	// (0x00020eec) main_usb_pane_t1

0xad2e,	// (0x00020efe) main_usb_pane_t2_ParamLimits

0xad2e,	// (0x00020efe) main_usb_pane_t2

0xad40,	// (0x00020f10) main_usb_pane_t3_ParamLimits

0xad40,	// (0x00020f10) main_usb_pane_t3

0xad52,	// (0x00020f22) main_usb_pane_t4_ParamLimits

0xad52,	// (0x00020f22) main_usb_pane_t4

0xad64,	// (0x00020f34) main_usb_pane_t5_ParamLimits

0xad64,	// (0x00020f34) main_usb_pane_t5

0xad76,	// (0x00020f46) main_usb_pane_t6_ParamLimits

0xad76,	// (0x00020f46) main_usb_pane_t6

0x0005,

0xf5e3,	// (0x000257b3) main_usb_pane_t_ParamLimits

0xa0a7,	// (0x00020277) aid_text_placing

0xa0b3,	// (0x00020283) main_location2_pane_t1_ParamLimits

0xa0c7,	// (0x00020297) main_location2_pane_t2_ParamLimits

0xa0db,	// (0x000202ab) main_location2_pane_t3_ParamLimits

0xa0ef,	// (0x000202bf) main_location2_pane_t4_ParamLimits

0xa0ef,	// (0x000202bf) main_location2_pane_t4

0xf402,	// (0x000255d2) main_location2_pane_t_ParamLimits

0x0cd0,	// (0x00016ea0) find_pinb_pane_g2_ParamLimits

0x0cd0,	// (0x00016ea0) find_pinb_pane_g2

0x0001,

0xf150,	// (0x00025320) find_pinb_pane_g_ParamLimits

0xf150,	// (0x00025320) find_pinb_pane_g

0x0cdc,	// (0x00016eac) find_pinb_pane_t1_ParamLimits

0x0cee,	// (0x00016ebe) find_pinb_pane_t2_ParamLimits

0xf155,	// (0x00025325) find_pinb_pane_t_ParamLimits

0x0a31,	// (0x00016c01) main_call3_pane

0x98b8,	// (0x0001fa88) cale_month_day_heading_pane_t1_ParamLimits

0x9916,	// (0x0001fae6) cale_month_day_heading_pane_t2_ParamLimits

0x997b,	// (0x0001fb4b) cale_month_day_heading_pane_t3_ParamLimits

0x99e0,	// (0x0001fbb0) cale_month_day_heading_pane_t4_ParamLimits

0x9a45,	// (0x0001fc15) cale_month_day_heading_pane_t5_ParamLimits

0x9aaa,	// (0x0001fc7a) cale_month_day_heading_pane_t6_ParamLimits

0x9b17,	// (0x0001fce7) cale_month_day_heading_pane_t7_ParamLimits

0xf2d9,	// (0x000254a9) cale_month_day_heading_pane_t_ParamLimits

0x14d6,	// (0x000176a6) smil_status_volume_pane

0xa8bc,	// (0x00020a8c) postcard_address_pane_ParamLimits

0xa8bc,	// (0x00020a8c) postcard_address_pane

0xa8c8,	// (0x00020a98) postcard_message_pane_ParamLimits

0xa8c8,	// (0x00020a98) postcard_message_pane

0xacd0,	// (0x00020ea0) call2_cli_visual_pane_t1_ParamLimits

0xacd0,	// (0x00020ea0) call2_cli_visual_pane_t1

0xb29d,	// (0x0002146d) postcard_message_pane_t1_ParamLimits

0xb29d,	// (0x0002146d) postcard_message_pane_t1

0xb286,	// (0x00021456) postcard_address_pane_t1_ParamLimits

0xb286,	// (0x00021456) postcard_address_pane_t1

0xb277,	// (0x00021447) popup_call3_audio_in_window_ParamLimits

0xb277,	// (0x00021447) popup_call3_audio_in_window

0xb15f,	// (0x0002132f) bg_popup_call3_in_pane_ParamLimits

0xb15f,	// (0x0002132f) bg_popup_call3_in_pane

0xb1bd,	// (0x0002138d) popup_call3_audio_in_window_g1_ParamLimits

0xb1bd,	// (0x0002138d) popup_call3_audio_in_window_g1

0xb1d5,	// (0x000213a5) popup_call3_audio_in_window_g2_ParamLimits

0xb1d5,	// (0x000213a5) popup_call3_audio_in_window_g2

0xb1ed,	// (0x000213bd) popup_call3_audio_in_window_g3_ParamLimits

0xb1ed,	// (0x000213bd) popup_call3_audio_in_window_g3

0x0003,

0xf645,	// (0x00025815) popup_call3_audio_in_window_g_ParamLimits

0xf645,	// (0x00025815) popup_call3_audio_in_window_g

0xb215,	// (0x000213e5) popup_call3_audio_in_window_t1_ParamLimits

0xb215,	// (0x000213e5) popup_call3_audio_in_window_t1

0xb23d,	// (0x0002140d) popup_call3_audio_in_window_t2_ParamLimits

0xb23d,	// (0x0002140d) popup_call3_audio_in_window_t2

0xb265,	// (0x00021435) popup_call3_audio_in_window_t3_ParamLimits

0xb265,	// (0x00021435) popup_call3_audio_in_window_t3

0x0002,

0xf64e,	// (0x0002581e) popup_call3_audio_in_window_t_ParamLimits

0xf64e,	// (0x0002581e) popup_call3_audio_in_window_t

0x1b59,	// (0x00017d29) bg_popup_call3_rect_pane

0x2e05,	// (0x00018fd5) bg_popup_call3_rect_pane_g1

0x0ede,	// (0x000170ae) bg_popup_call3_rect_pane_g2

0x2e0d,	// (0x00018fdd) bg_popup_call3_rect_pane_g3

0x2e15,	// (0x00018fe5) bg_popup_call3_rect_pane_g4

0x2e1d,	// (0x00018fed) bg_popup_call3_rect_pane_g5

0x2e25,	// (0x00018ff5) bg_popup_call3_rect_pane_g6

0x2e2d,	// (0x00018ffd) bg_popup_call3_rect_pane_g7

0xa4f1,	// (0x000206c1) mup_visualizer_osc_pane

0x1c38,	// (0x00017e08) mup_visualizer_spec_pane

0xb17f,	// (0x0002134f) call3_video_qcif_pane_ParamLimits

0xb17f,	// (0x0002134f) call3_video_qcif_pane

0xb18f,	// (0x0002135f) call3_video_qcif_uncrop_pane_ParamLimits

0xb18f,	// (0x0002135f) call3_video_qcif_uncrop_pane

0xb19b,	// (0x0002136b) call3_video_subqcif_pane_ParamLimits

0xb19b,	// (0x0002136b) call3_video_subqcif_pane

0xb1ad,	// (0x0002137d) call3_video_subqcif_uncrop_pane_ParamLimits

0xb1ad,	// (0x0002137d) call3_video_subqcif_uncrop_pane

0xb205,	// (0x000213d5) popup_call3_audio_in_window_g4_ParamLimits

0xb205,	// (0x000213d5) popup_call3_audio_in_window_g4

0xb14e,	// (0x0002131e) mup_spec_half_pane

0xb157,	// (0x00021327) mup_spec_half_pane_cp

0x309d,	// (0x0001926d) mup_osc_middle_pane

0x30a6,	// (0x00019276) mup_visualizer_osc_pane_g1

0xb12f,	// (0x000212ff) mup_spec_bar_pane_ParamLimits

0xb12f,	// (0x000212ff) mup_spec_bar_pane

0x308a,	// (0x0001925a) mup_spec_bar_pane_g1

0x3094,	// (0x00019264) mup_spec_bar_pane_g2

0x0001,

0xf639,	// (0x00025809) mup_spec_bar_pane_g

0x8a96,	// (0x0001ec66) aid_cale_week_size_cell_pane_ParamLimits

0x8aa9,	// (0x0001ec79) bg_cale_heading_pane_ParamLimits

0x0f7f,	// (0x0001714f) bg_cale_pane_cp01_ParamLimits

0x8abd,	// (0x0001ec8d) cale_week_corner_pane_ParamLimits

0x8ace,	// (0x0001ec9e) cale_week_day_heading_pane_ParamLimits

0x8ae2,	// (0x0001ecb2) cale_week_scroll_pane_g1_ParamLimits

0x8af3,	// (0x0001ecc3) cale_week_scroll_pane_g2_ParamLimits

0x8b04,	// (0x0001ecd4) cale_week_scroll_pane_g3_ParamLimits

0x8b15,	// (0x0001ece5) cale_week_scroll_pane_g4_ParamLimits

0x8b26,	// (0x0001ecf6) cale_week_scroll_pane_g5_ParamLimits

0x8b37,	// (0x0001ed07) cale_week_scroll_pane_g6_ParamLimits

0x8b48,	// (0x0001ed18) cale_week_scroll_pane_g7_ParamLimits

0x8b5b,	// (0x0001ed2b) cale_week_scroll_pane_g8_ParamLimits

0x8b6e,	// (0x0001ed3e) cale_week_scroll_pane_g9_ParamLimits

0x8b7f,	// (0x0001ed4f) cale_week_scroll_pane_g10_ParamLimits

0x8b90,	// (0x0001ed60) cale_week_scroll_pane_g11_ParamLimits

0x8ba1,	// (0x0001ed71) cale_week_scroll_pane_g12_ParamLimits

0x8bb2,	// (0x0001ed82) cale_week_scroll_pane_g13_ParamLimits

0x8bc3,	// (0x0001ed93) cale_week_scroll_pane_g14_ParamLimits

0x8bd4,	// (0x0001eda4) cale_week_scroll_pane_g15_ParamLimits

0xf1e1,	// (0x000253b1) cale_week_scroll_pane_g_ParamLimits

0x8be5,	// (0x0001edb5) cale_week_time_pane_ParamLimits

0x8bf8,	// (0x0001edc8) grid_cale_week_pane_ParamLimits

0x0f98,	// (0x00017168) listscroll_cale_week_pane_t1

0x8c0d,	// (0x0001eddd) scroll_pane_cp08_ParamLimits

0x95ad,	// (0x0001f77d) cale_month_corner_pane_ParamLimits

0x1476,	// (0x00017646) cale_month_pane_t1

0x9877,	// (0x0001fa47) cale_month_week_pane_ParamLimits

0x1c2a,	// (0x00017dfa) popup_call_status_window_g1_ParamLimits

0x9f5e,	// (0x0002012e) popup_call_status_window_g2_ParamLimits

0x9f6a,	// (0x0002013a) popup_call_status_window_g3_ParamLimits

0xf389,	// (0x00025559) popup_call_status_window_g_ParamLimits

0x1865,	// (0x00017a35) aid_call2_pane

0xa793,	// (0x00020963) msg_header_pane_g1

0xa8bc,	// (0x00020a8c) postcard_address2_pane_ParamLimits

0xa8bc,	// (0x00020a8c) postcard_address2_pane

0xa8c8,	// (0x00020a98) postcard_message2_pane_ParamLimits

0xa8c8,	// (0x00020a98) postcard_message2_pane

0xb0bd,	// (0x0002128d) message2_row_pane_ParamLimits

0xb0bd,	// (0x0002128d) message2_row_pane

0xb0da,	// (0x000212aa) address2_row_pane_ParamLimits

0xb0da,	// (0x000212aa) address2_row_pane

0x3058,	// (0x00019228) postcard_message2_row_pane_g1

0x3060,	// (0x00019230) postcard_message2_row_pane_t1

0x3058,	// (0x00019228) address2_row_pane_g1

0x3060,	// (0x00019230) address2_row_pane_t1

0x72bd,	// (0x0001d48d) aid_size_cell_vorec

0x0a31,	// (0x00016c01) main_rss_pane

0xb0ed,	// (0x000212bd) rss_list_single_pane_ParamLimits

0xb0ed,	// (0x000212bd) rss_list_single_pane

0x306e,	// (0x0001923e) rss_list_single_pane_t1

0x307c,	// (0x0001924c) rss_list_single_pane_t2

0x0001,

0xf634,	// (0x00025804) rss_list_single_pane_t

0x0a31,	// (0x00016c01) main_camera2_pane

0x0a31,	// (0x00016c01) main_video2_pane

0x74df,	// (0x0001d6af) cams_zoom_pane_cp2_ParamLimits

0x74df,	// (0x0001d6af) cams_zoom_pane_cp2

0x74eb,	// (0x0001d6bb) image2_vga_pane_ParamLimits

0x74eb,	// (0x0001d6bb) image2_vga_pane

0x74fa,	// (0x0001d6ca) main_camera2_pane_g1_ParamLimits

0x74fa,	// (0x0001d6ca) main_camera2_pane_g1

0x7506,	// (0x0001d6d6) main_camera2_pane_g2_ParamLimits

0x7506,	// (0x0001d6d6) main_camera2_pane_g2

0x7512,	// (0x0001d6e2) main_camera2_pane_g3_ParamLimits

0x7512,	// (0x0001d6e2) main_camera2_pane_g3

0x751e,	// (0x0001d6ee) main_camera2_pane_g4_ParamLimits

0x751e,	// (0x0001d6ee) main_camera2_pane_g4

0x752a,	// (0x0001d6fa) main_camera2_pane_g5_ParamLimits

0x752a,	// (0x0001d6fa) main_camera2_pane_g5

0x7536,	// (0x0001d706) main_camera2_pane_g6_ParamLimits

0x7536,	// (0x0001d706) main_camera2_pane_g6

0x7542,	// (0x0001d712) main_camera2_pane_g7_ParamLimits

0x7542,	// (0x0001d712) main_camera2_pane_g7

0x754e,	// (0x0001d71e) main_camera2_pane_g8_ParamLimits

0x754e,	// (0x0001d71e) main_camera2_pane_g8

0x0008,

0xf655,	// (0x00025825) main_camera2_pane_g_ParamLimits

0xf655,	// (0x00025825) main_camera2_pane_g

0x7566,	// (0x0001d736) main_camera2_pane_t1_ParamLimits

0x7566,	// (0x0001d736) main_camera2_pane_t1

0x7578,	// (0x0001d748) main_camera2_pane_t2_ParamLimits

0x7578,	// (0x0001d748) main_camera2_pane_t2

0x758a,	// (0x0001d75a) main_camera2_pane_t3_ParamLimits

0x758a,	// (0x0001d75a) main_camera2_pane_t3

0x759c,	// (0x0001d76c) main_camera2_pane_t4_ParamLimits

0x759c,	// (0x0001d76c) main_camera2_pane_t4

0x0006,

0xf668,	// (0x00025838) main_camera2_pane_t_ParamLimits

0xf668,	// (0x00025838) main_camera2_pane_t

0x75fe,	// (0x0001d7ce) cams_zoom_pane_cp4_ParamLimits

0x75fe,	// (0x0001d7ce) cams_zoom_pane_cp4

0x760e,	// (0x0001d7de) image2_cif_pane_ParamLimits

0x760e,	// (0x0001d7de) image2_cif_pane

0x7623,	// (0x0001d7f3) image2_subqcif_pane_ParamLimits

0x7623,	// (0x0001d7f3) image2_subqcif_pane

0x7632,	// (0x0001d802) main_video2_pane_g1_ParamLimits

0x7632,	// (0x0001d802) main_video2_pane_g1

0x7644,	// (0x0001d814) main_video2_pane_g2_ParamLimits

0x7644,	// (0x0001d814) main_video2_pane_g2

0x7654,	// (0x0001d824) main_video2_pane_g3_ParamLimits

0x7654,	// (0x0001d824) main_video2_pane_g3

0x7664,	// (0x0001d834) main_video2_pane_g4_ParamLimits

0x7664,	// (0x0001d834) main_video2_pane_g4

0x7674,	// (0x0001d844) main_video2_pane_g5_ParamLimits

0x7674,	// (0x0001d844) main_video2_pane_g5

0x7684,	// (0x0001d854) main_video2_pane_g6_ParamLimits

0x7684,	// (0x0001d854) main_video2_pane_g6

0x0005,

0xf677,	// (0x00025847) main_video2_pane_g_ParamLimits

0xf677,	// (0x00025847) main_video2_pane_g

0x7696,	// (0x0001d866) main_video2_pane_t1_ParamLimits

0x7696,	// (0x0001d866) main_video2_pane_t1

0x76b0,	// (0x0001d880) main_video2_pane_t2_ParamLimits

0x76b0,	// (0x0001d880) main_video2_pane_t2

0x76d6,	// (0x0001d8a6) main_video2_pane_t3_ParamLimits

0x76d6,	// (0x0001d8a6) main_video2_pane_t3

0x0002,

0xf684,	// (0x00025854) main_video2_pane_t_ParamLimits

0xf684,	// (0x00025854) main_video2_pane_t

0xae2d,	// (0x00020ffd) call_muted_g2

0x0001,

0xf626,	// (0x000257f6) call_muted_g

0x0a31,	// (0x00016c01) main_mup2_pane

0x315d,	// (0x0001932d) main_mup2_pane_g1_ParamLimits

0x315d,	// (0x0001932d) main_mup2_pane_g1

0xb2b8,	// (0x00021488) main_mup2_pane_g2_ParamLimits

0xb2b8,	// (0x00021488) main_mup2_pane_g2

0x7725,	// (0x0001d8f5) main_mup_pane_g13_cp1

0x772d,	// (0x0001d8fd) mup_volume_pane_cp1

0xb2d8,	// (0x000214a8) main_mup2_pane_g4_ParamLimits

0xb2d8,	// (0x000214a8) main_mup2_pane_g4

0xb2ed,	// (0x000214bd) main_mup2_pane_g5_ParamLimits

0xb2ed,	// (0x000214bd) main_mup2_pane_g5

0xb302,	// (0x000214d2) main_mup2_pane_g6_ParamLimits

0xb302,	// (0x000214d2) main_mup2_pane_g6

0xb317,	// (0x000214e7) main_mup2_pane_g7_ParamLimits

0xb317,	// (0x000214e7) main_mup2_pane_g7

0x0006,

0xf68b,	// (0x0002585b) main_mup2_pane_g_ParamLimits

0xf68b,	// (0x0002585b) main_mup2_pane_g

0xb333,	// (0x00021503) main_mup2_pane_t1_ParamLimits

0xb333,	// (0x00021503) main_mup2_pane_t1

0xb34a,	// (0x0002151a) main_mup2_pane_t2_ParamLimits

0xb34a,	// (0x0002151a) main_mup2_pane_t2

0xb361,	// (0x00021531) main_mup2_pane_t3_ParamLimits

0xb361,	// (0x00021531) main_mup2_pane_t3

0xb378,	// (0x00021548) main_mup2_pane_t4_ParamLimits

0xb378,	// (0x00021548) main_mup2_pane_t4

0xb392,	// (0x00021562) main_mup2_pane_t5_ParamLimits

0xb392,	// (0x00021562) main_mup2_pane_t5

0xb3ac,	// (0x0002157c) main_mup2_pane_t6_ParamLimits

0xb3ac,	// (0x0002157c) main_mup2_pane_t6

0x0005,

0xf69a,	// (0x0002586a) main_mup2_pane_t_ParamLimits

0xf69a,	// (0x0002586a) main_mup2_pane_t

0xb3e4,	// (0x000215b4) mup2_visualizer_pane_ParamLimits

0xb3e4,	// (0x000215b4) mup2_visualizer_pane

0xb41a,	// (0x000215ea) mup_progress_pane_cp_ParamLimits

0xb41a,	// (0x000215ea) mup_progress_pane_cp

0x7710,	// (0x0001d8e0) mup_volume_pane_cp_ParamLimits

0x7710,	// (0x0001d8e0) mup_volume_pane_cp

0xb431,	// (0x00021601) mup2_visualizer_pane_g1_ParamLimits

0xb431,	// (0x00021601) mup2_visualizer_pane_g1

0x312f,	// (0x000192ff) mup2_visualizer_pane_g2_ParamLimits

0x312f,	// (0x000192ff) mup2_visualizer_pane_g2

0xb446,	// (0x00021616) mup2_visualizer_pane_g3_ParamLimits

0xb446,	// (0x00021616) mup2_visualizer_pane_g3

0x0002,

0xf6a7,	// (0x00025877) mup2_visualizer_pane_g_ParamLimits

0xf6a7,	// (0x00025877) mup2_visualizer_pane_g

0x1ed7,	// (0x000180a7) aid_size_cell_fmradio

0xaf43,	// (0x00021113) aid_height_parent_landcape

0x12de,	// (0x000174ae) wml_content_pane_cp

0x12e6,	// (0x000174b6) wml_tabs_pane

0x12ef,	// (0x000174bf) popup_wml_miniature_window

0x12f7,	// (0x000174c7) scroll_pane_cp021

0x130b,	// (0x000174db) wml_content_pane_comp8

0x0a31,	// (0x00016c01) bg_popup_sub_pane_cp05

0x314d,	// (0x0001931d) popup_wml_miniature_window_g1

0x3155,	// (0x00019325) wml_miniature_view_pane

0xb454,	// (0x00021624) aid_size_wml_view

0xb45c,	// (0x0002162c) wml_miniature_view_pane_g1

0xb465,	// (0x00021635) wml_miniature_view_pane_g2

0xb46e,	// (0x0002163e) wml_miniature_view_pane_g3

0xb476,	// (0x00021646) wml_miniature_view_pane_g4

0xb47e,	// (0x0002164e) wml_miniature_view_pane_g5

0xb486,	// (0x00021656) wml_miniature_view_pane_g6

0xb48e,	// (0x0002165e) wml_miniature_view_pane_g7

0xb496,	// (0x00021666) wml_miniature_view_pane_g8

0x0007,

0xf6ae,	// (0x0002587e) wml_miniature_view_pane_g

0x315d,	// (0x0001932d) background_graphic_ParamLimits

0x315d,	// (0x0001932d) background_graphic

0x3169,	// (0x00019339) wml_tabs_2_pane

0x3172,	// (0x00019342) wml_tabs_3_pane_ParamLimits

0x3172,	// (0x00019342) wml_tabs_3_pane

0x3184,	// (0x00019354) wml_tabs_4_pane_ParamLimits

0x3184,	// (0x00019354) wml_tabs_4_pane

0x319a,	// (0x0001936a) wml_tabs_5_pane_ParamLimits

0x319a,	// (0x0001936a) wml_tabs_5_pane

0x31b4,	// (0x00019384) wml_tabs_pane_g2_ParamLimits

0x31b4,	// (0x00019384) wml_tabs_pane_g2

0x31c8,	// (0x00019398) wml_tabs_pane_g3_ParamLimits

0x31c8,	// (0x00019398) wml_tabs_pane_g3

0xb49e,	// (0x0002166e) wml_tabs_2_active_pane_ParamLimits

0xb49e,	// (0x0002166e) wml_tabs_2_active_pane

0xb4ae,	// (0x0002167e) wml_tabs_2_passive_pane_ParamLimits

0xb4ae,	// (0x0002167e) wml_tabs_2_passive_pane

0xb4be,	// (0x0002168e) wml_tabs_3_active_pane_cp_ParamLimits

0xb4be,	// (0x0002168e) wml_tabs_3_active_pane_cp

0xb4cf,	// (0x0002169f) wml_tabs_3_passive_pane_ParamLimits

0xb4cf,	// (0x0002169f) wml_tabs_3_passive_pane

0xb4e0,	// (0x000216b0) wml_tabs_3_passive_pane_cp_ParamLimits

0xb4e0,	// (0x000216b0) wml_tabs_3_passive_pane_cp

0xb4f1,	// (0x000216c1) tabs_4_active_pane

0xb4f9,	// (0x000216c9) tabs_4_passive_pane

0xb501,	// (0x000216d1) tabs_4_passive_pane_cp

0xb509,	// (0x000216d9) tabs_4_passive_pane_cp2

0xad08,	// (0x00020ed8) aid_height_text

0xa4ba,	// (0x0002068a) mup_volume_cont_pane_ParamLimits

0xa4ba,	// (0x0002068a) mup_volume_cont_pane

0x87ae,	// (0x0001e97e) aid_size_cell_pinb

0x0cbc,	// (0x00016e8c) aid_size_list_pinb

0xb403,	// (0x000215d3) mup2_volume_cont_pane_ParamLimits

0xb403,	// (0x000215d3) mup2_volume_cont_pane

0x76fc,	// (0x0001d8cc) mup2_volume_cont_pane_g1_ParamLimits

0x76fc,	// (0x0001d8cc) mup2_volume_cont_pane_g1

0x8435,	// (0x0001e605) aid_size_cell_touch_ParamLimits

0x8435,	// (0x0001e605) aid_size_cell_touch

0x868e,	// (0x0001e85e) touch_pane_ParamLimits

0x868e,	// (0x0001e85e) touch_pane

0x05a2,	// (0x00016772) main_rss2_pane

0x321e,	// (0x000193ee) listscroll_rss2_pane

0x3227,	// (0x000193f7) rss2_navigation_pane

0x322f,	// (0x000193ff) list_rss2_pane

0x1a0c,	// (0x00017bdc) scroll_pane_cp22

0x3237,	// (0x00019407) rss2_navigation_pane_g1

0x3240,	// (0x00019410) rss2_navigation_pane_g2

0x3248,	// (0x00019418) rss2_navigation_pane_g3

0x0002,

0xf6bf,	// (0x0002588f) rss2_navigation_pane_g

0x3250,	// (0x00019420) rss2_navigation_pane_t1

0xb511,	// (0x000216e1) rss2_list_single_pane_ParamLimits

0xb511,	// (0x000216e1) rss2_list_single_pane

0x325e,	// (0x0001942e) rss2_list_single_pane_t2

0x326c,	// (0x0001943c) rss2_list_single_pane_t3_ParamLimits

0x326c,	// (0x0001943c) rss2_list_single_pane_t3

0x3289,	// (0x00019459) rss2_list_single_pane_t4

0x9cd7,	// (0x0001fea7) smil_status_pane_g1

0x0612,	// (0x000167e2) main_image2_pane_ParamLimits

0x0612,	// (0x000167e2) main_image2_pane

0x755a,	// (0x0001d72a) main_camera2_pane_g9_ParamLimits

0x755a,	// (0x0001d72a) main_camera2_pane_g9

0x75ae,	// (0x0001d77e) main_camera2_pane_t5_ParamLimits

0x75ae,	// (0x0001d77e) main_camera2_pane_t5

0x75c0,	// (0x0001d790) main_camera2_pane_t6_ParamLimits

0x75c0,	// (0x0001d790) main_camera2_pane_t6

0xb54d,	// (0x0002171d) main_image2_pane_g1_ParamLimits

0xb54d,	// (0x0002171d) main_image2_pane_g1

0xaa9d,	// (0x00020c6d) smil2_video_pane_ParamLimits

0xaa9d,	// (0x00020c6d) smil2_video_pane

0x05c0,	// (0x00016790) aid_zoom_text_primary_cp

0x0608,	// (0x000167d8) popup_preview_fixed_window

0x1247,	// (0x00017417) im_reading_pane_g1

0x74a4,	// (0x0001d674) cams2_bc_adjust_pane_cp_ParamLimits

0x74a4,	// (0x0001d674) cams2_bc_adjust_pane_cp

0x75f0,	// (0x0001d7c0) cams2_bc_adjust_pane_ParamLimits

0x75f0,	// (0x0001d7c0) cams2_bc_adjust_pane

0x49ef,	// (0x0001abbf) cams2_bc_adjust_pane_g1

0x7735,	// (0x0001d905) cams2_slider_pane

0x773e,	// (0x0001d90e) cams2_slider_pane_g1

0x7747,	// (0x0001d917) cams2_slider_pane_g2

0x0006,

0xf6c6,	// (0x00025896) cams2_slider_pane_g

0x7062,	// (0x0001d232) calc_display_pane_ParamLimits

0x7080,	// (0x0001d250) calc_paper_pane_ParamLimits

0x709c,	// (0x0001d26c) grid_calc_pane_ParamLimits

0x73d3,	// (0x0001d5a3) popup_clock_digital_window_t1_ParamLimits

0x1e74,	// (0x00018044) main_image_pane_t1

0x7048,	// (0x0001d218) aid_size_cell_calc_ParamLimits

0x7048,	// (0x0001d218) aid_size_cell_calc

0xaf75,	// (0x00021145) popup_blid_sat_info2_window_ParamLimits

0xaf75,	// (0x00021145) popup_blid_sat_info2_window

0x32d3,	// (0x000194a3) aid_size_cell_blid

0x32db,	// (0x000194ab) bg_popup_window_pane_cp07

0x32fe,	// (0x000194ce) grid_popup_blid_pane

0x3308,	// (0x000194d8) heading_pane_cp05_ParamLimits

0x3308,	// (0x000194d8) heading_pane_cp05

0x33d2,	// (0x000195a2) cell_popup_blid_pane_ParamLimits

0x33d2,	// (0x000195a2) cell_popup_blid_pane

0x33f8,	// (0x000195c8) cell_popup_blid_pane_g1

0x3400,	// (0x000195d0) cell_popup_blid_pane_t1

0xb3c9,	// (0x00021599) mup2_indicator_pane_ParamLimits

0xb3c9,	// (0x00021599) mup2_indicator_pane

0x1b59,	// (0x00017d29) mup2_visualizer_osc_pane

0x313b,	// (0x0001930b) mup2_visualizer_spec_pane_ParamLimits

0x313b,	// (0x0001930b) mup2_visualizer_spec_pane

0xb559,	// (0x00021729) mup2_spec_half_pane

0xb562,	// (0x00021732) mup2_spec_half_pane_cp

0xb56c,	// (0x0002173c) mup2_spec_bar_pane_ParamLimits

0xb56c,	// (0x0002173c) mup2_spec_bar_pane

0x308a,	// (0x0001925a) mup2_spec_bar_pane_g1

0x3094,	// (0x00019264) mup2_spec_bar_pane_g2

0x0001,

0xf639,	// (0x00025809) mup2_spec_bar_pane_g

0xb58b,	// (0x0002175b) mup2_osc_middle_pane

0x30a6,	// (0x00019276) mup2_visualizer_osc_pane_g1

0x0640,	// (0x00016810) popup_number_entry_window_t1_ParamLimits

0x0653,	// (0x00016823) popup_number_entry_window_t2_ParamLimits

0x0665,	// (0x00016835) popup_number_entry_window_t3_ParamLimits

0x86e5,	// (0x0001e8b5) popup_number_entry_window_t5_ParamLimits

0x86e5,	// (0x0001e8b5) popup_number_entry_window_t5

0xf0fb,	// (0x000252cb) popup_number_entry_window_t_ParamLimits

0x0677,	// (0x00016847) text_title_cp2_ParamLimits

0x7412,	// (0x0001d5e2) aid_hotspot_pointer_text2_pane

0x7468,	// (0x0001d638) main_viewer_pane_g9_ParamLimits

0x7468,	// (0x0001d638) main_viewer_pane_g9

0x1476,	// (0x00017646) cale_month_pane_t1_ParamLimits

0x150b,	// (0x000176db) bg_cale_pane_ParamLimits

0x1523,	// (0x000176f3) list_cale_pane_ParamLimits

0x0f98,	// (0x00017168) listscroll_cale_day_pane_t1

0x1534,	// (0x00017704) scroll_pane_cp09_ParamLimits

0xa4f9,	// (0x000206c9) main_mup_eq_pane_t1_ParamLimits

0xa4f9,	// (0x000206c9) main_mup_eq_pane_t1

0xa513,	// (0x000206e3) main_mup_eq_pane_t2_ParamLimits

0xa513,	// (0x000206e3) main_mup_eq_pane_t2

0xa52b,	// (0x000206fb) main_mup_eq_pane_t3_ParamLimits

0xa52b,	// (0x000206fb) main_mup_eq_pane_t3

0xa543,	// (0x00020713) main_mup_eq_pane_t4_ParamLimits

0xa543,	// (0x00020713) main_mup_eq_pane_t4

0xa55b,	// (0x0002072b) main_mup_eq_pane_t5_ParamLimits

0xa55b,	// (0x0002072b) main_mup_eq_pane_t5

0xa573,	// (0x00020743) main_mup_eq_pane_t6_ParamLimits

0xa573,	// (0x00020743) main_mup_eq_pane_t6

0xa587,	// (0x00020757) main_mup_eq_pane_t7_ParamLimits

0xa587,	// (0x00020757) main_mup_eq_pane_t7

0xa59b,	// (0x0002076b) main_mup_eq_pane_t8_ParamLimits

0xa59b,	// (0x0002076b) main_mup_eq_pane_t8

0xa5b1,	// (0x00020781) main_mup_eq_pane_t9_ParamLimits

0xa5b1,	// (0x00020781) main_mup_eq_pane_t9

0xa5c9,	// (0x00020799) main_mup_eq_pane_t10_ParamLimits

0xa5c9,	// (0x00020799) main_mup_eq_pane_t10

0x0009,

0xf488,	// (0x00025658) main_mup_eq_pane_t_ParamLimits

0xf488,	// (0x00025658) main_mup_eq_pane_t

0xa686,	// (0x00020856) mup_equalizer_pane_cp5_ParamLimits

0xa69c,	// (0x0002086c) mup_equalizer_pane_cp6_ParamLimits

0xa6b4,	// (0x00020884) mup_equalizer_pane_cp7_ParamLimits

0x05a2,	// (0x00016772) main_gallery_pane

0x30af,	// (0x0001927f) smil2_volume_pane

0x30ca,	// (0x0001929a) smil_status_volume_pane_g1_ParamLimits

0x30b7,	// (0x00019287) smil_status_volume_pane_g2_ParamLimits

0x7474,	// (0x0001d644) smil_status_volume_pane_g3_ParamLimits

0xf63e,	// (0x0002580e) smil_status_volume_pane_g_ParamLimits

0x32db,	// (0x000194ab) bg_popup_window_pane_cp07_ParamLimits

0x32e9,	// (0x000194b9) blid_firmament_pane

0xb594,	// (0x00021764) aid_size_cell_gallery_ParamLimits

0xb594,	// (0x00021764) aid_size_cell_gallery

0xb5a2,	// (0x00021772) grid_gallery_pane_ParamLimits

0xb5a2,	// (0x00021772) grid_gallery_pane

0xb5b2,	// (0x00021782) cell_gallery_pane_ParamLimits

0xb5b2,	// (0x00021782) cell_gallery_pane

0x340e,	// (0x000195de) bg_cell_gallery_focus_pane_ParamLimits

0x340e,	// (0x000195de) bg_cell_gallery_focus_pane

0x3420,	// (0x000195f0) cell_gallery_pane_g1_ParamLimits

0x3420,	// (0x000195f0) cell_gallery_pane_g1

0xb600,	// (0x000217d0) cell_gallery_pane_g2_ParamLimits

0xb600,	// (0x000217d0) cell_gallery_pane_g2

0xb60d,	// (0x000217dd) cell_gallery_pane_g3_ParamLimits

0xb60d,	// (0x000217dd) cell_gallery_pane_g3

0x342c,	// (0x000195fc) cell_gallery_pane_g4_ParamLimits

0x342c,	// (0x000195fc) cell_gallery_pane_g4

0x0003,

0xf6ec,	// (0x000258bc) cell_gallery_pane_g_ParamLimits

0xf6ec,	// (0x000258bc) cell_gallery_pane_g

0x3438,	// (0x00019608) bg_cell_gallery_focus_pane_g1

0x3440,	// (0x00019610) bg_cell_gallery_focus_pane_g2

0x3448,	// (0x00019618) bg_cell_gallery_focus_pane_g3

0x3450,	// (0x00019620) bg_cell_gallery_focus_pane_g4

0x3458,	// (0x00019628) bg_cell_gallery_focus_pane_g5

0x3460,	// (0x00019630) bg_cell_gallery_focus_pane_g6

0x3468,	// (0x00019638) bg_cell_gallery_focus_pane_g7

0x3470,	// (0x00019640) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6f5,	// (0x000258c5) bg_cell_gallery_focus_pane_g

0x3478,	// (0x00019648) aid_firma_cardinal

0x348c,	// (0x0001965c) blid_firmament_pane_t1

0x34a3,	// (0x00019673) blid_firmament_pane_t2

0x34ba,	// (0x0001968a) blid_firmament_pane_t3

0x34d1,	// (0x000196a1) blid_firmament_pane_t4

0x0003,

0xf706,	// (0x000258d6) blid_firmament_pane_t

0x34e8,	// (0x000196b8) blid_sat_info_pane

0x34f8,	// (0x000196c8) blid_sat_info_pane_g1

0x34f8,	// (0x000196c8) blid_sat_info_pane_g2

0x0001,

0xf70f,	// (0x000258df) blid_sat_info_pane_g

0x3502,	// (0x000196d2) blid_sat_info_pane_t1

0x3510,	// (0x000196e0) smil2_volume_content_pane

0x3519,	// (0x000196e9) smil2_volume_pane_g1

0x3521,	// (0x000196f1) smil2_volume_content_pane_g1

0x352a,	// (0x000196fa) smil2_volume_content_pane_g2

0x3533,	// (0x00019703) smil2_volume_content_pane_g3

0x353c,	// (0x0001970c) smil2_volume_content_pane_g4

0x3545,	// (0x00019715) smil2_volume_content_pane_g5

0x354e,	// (0x0001971e) smil2_volume_content_pane_g6

0x3557,	// (0x00019727) smil2_volume_content_pane_g7

0x3560,	// (0x00019730) smil2_volume_content_pane_g8

0x3569,	// (0x00019739) smil2_volume_content_pane_g9

0x3572,	// (0x00019742) smil2_volume_content_pane_g10

0x0009,

0xf714,	// (0x000258e4) smil2_volume_content_pane_g

0x8c63,	// (0x0001ee33) cale_week_day_heading_pane_t1_ParamLimits

0x8c77,	// (0x0001ee47) cale_week_day_heading_pane_t2_ParamLimits

0x8c8b,	// (0x0001ee5b) cale_week_day_heading_pane_t3_ParamLimits

0x8c9f,	// (0x0001ee6f) cale_week_day_heading_pane_t4_ParamLimits

0x8cb3,	// (0x0001ee83) cale_week_day_heading_pane_t5_ParamLimits

0x8cc7,	// (0x0001ee97) cale_week_day_heading_pane_t6_ParamLimits

0x8cdb,	// (0x0001eeab) cale_week_day_heading_pane_t7_ParamLimits

0xf200,	// (0x000253d0) cale_week_day_heading_pane_t_ParamLimits

0x0faa,	// (0x0001717a) bg_cale_side_pane_ParamLimits

0x71fd,	// (0x0001d3cd) cale_week_time_pane_t1_ParamLimits

0x7215,	// (0x0001d3e5) cale_week_time_pane_t2_ParamLimits

0x722d,	// (0x0001d3fd) cale_week_time_pane_t3_ParamLimits

0x7245,	// (0x0001d415) cale_week_time_pane_t4_ParamLimits

0x725d,	// (0x0001d42d) cale_week_time_pane_t5_ParamLimits

0x7275,	// (0x0001d445) cale_week_time_pane_t6_ParamLimits

0x728d,	// (0x0001d45d) cale_week_time_pane_t7_ParamLimits

0x72a5,	// (0x0001d475) cale_week_time_pane_t8_ParamLimits

0xf20f,	// (0x000253df) cale_week_time_pane_t_ParamLimits

0x8cef,	// (0x0001eebf) cell_cale_week_pane_g2_ParamLimits

0x0faa,	// (0x0001717a) bg_cale_side_pane_cp01_ParamLimits

0x9b8c,	// (0x0001fd5c) cale_month_week_pane_t1_ParamLimits

0x9ba3,	// (0x0001fd73) cale_month_week_pane_t2_ParamLimits

0x9bba,	// (0x0001fd8a) cale_month_week_pane_t3_ParamLimits

0x9bd1,	// (0x0001fda1) cale_month_week_pane_t4_ParamLimits

0x9be8,	// (0x0001fdb8) cale_month_week_pane_t5_ParamLimits

0x9bff,	// (0x0001fdcf) cale_month_week_pane_t6_ParamLimits

0xf2e8,	// (0x000254b8) cale_month_week_pane_t_ParamLimits

0x7337,	// (0x0001d507) cell_cale_month_pane_g1_ParamLimits

0x05a2,	// (0x00016772) main_cale_event_viewer_pane

0x05a2,	// (0x00016772) listscroll_cale_event_viewer_pane

0x357b,	// (0x0001974b) list_cale_ev_pane

0x3583,	// (0x00019753) scroll_pane_cp023

0x358f,	// (0x0001975f) field_cale_ev_pane_ParamLimits

0x358f,	// (0x0001975f) field_cale_ev_pane

0x35a9,	// (0x00019779) field_cale_ev_content_pane_ParamLimits

0x35a9,	// (0x00019779) field_cale_ev_content_pane

0x35b5,	// (0x00019785) field_cale_ev_pane_g1_ParamLimits

0x35b5,	// (0x00019785) field_cale_ev_pane_g1

0x35c1,	// (0x00019791) field_cale_ev_pane_g2_ParamLimits

0x35c1,	// (0x00019791) field_cale_ev_pane_g2

0x35d9,	// (0x000197a9) field_cale_ev_pane_g3_ParamLimits

0x35d9,	// (0x000197a9) field_cale_ev_pane_g3

0x0002,

0xf729,	// (0x000258f9) field_cale_ev_pane_g_ParamLimits

0xf729,	// (0x000258f9) field_cale_ev_pane_g

0x35f1,	// (0x000197c1) field_cale_ev_pane_t1_ParamLimits

0x35f1,	// (0x000197c1) field_cale_ev_pane_t1

0x3608,	// (0x000197d8) field_cale_ev_content_pane_t1_ParamLimits

0x3608,	// (0x000197d8) field_cale_ev_content_pane_t1

0x1ce2,	// (0x00017eb2) bg_button_pane_cp01

0x0dbd,	// (0x00016f8d) listscroll_cale_week_pane_ParamLimits

0x8a8c,	// (0x0001ec5c) popup_toolbar_window_cp01

0x0f98,	// (0x00017168) listscroll_cale_week_pane_t1_ParamLimits

0x0dbd,	// (0x00016f8d) listscroll_cale_day_pane_ParamLimits

0x8a8c,	// (0x0001ec5c) popup_toolbar_window_cp02

0x0f98,	// (0x00017168) listscroll_cale_day_pane_t1_ParamLimits

0x0dbd,	// (0x00016f8d) main_cale_month_pane_ParamLimits

0xb039,	// (0x00021209) popup_toolbar_window_cp03_ParamLimits

0xb039,	// (0x00021209) popup_toolbar_window_cp03

0xa9af,	// (0x00020b7f) main_image_pane_g2_ParamLimits

0xa9af,	// (0x00020b7f) main_image_pane_g2

0xa9bb,	// (0x00020b8b) main_image_pane_g3_ParamLimits

0xa9bb,	// (0x00020b8b) main_image_pane_g3

0x0002,

0xf51a,	// (0x000256ea) main_image_pane_g_ParamLimits

0xf51a,	// (0x000256ea) main_image_pane_g

0x1e74,	// (0x00018044) main_image_pane_t1_ParamLimits

0xa9c7,	// (0x00020b97) main_image_pane_t2_ParamLimits

0xa9c7,	// (0x00020b97) main_image_pane_t2

0xa9d9,	// (0x00020ba9) main_image_pane_t3_ParamLimits

0xa9d9,	// (0x00020ba9) main_image_pane_t3

0xa9eb,	// (0x00020bbb) main_image_pane_t4_ParamLimits

0xa9eb,	// (0x00020bbb) main_image_pane_t4

0x0003,

0xf521,	// (0x000256f1) main_image_pane_t_ParamLimits

0xf521,	// (0x000256f1) main_image_pane_t

0xa9fd,	// (0x00020bcd) popup_image_details_window_cp01

0xaa07,	// (0x00020bd7) popup_toobar_trans_pane_cp01_ParamLimits

0xaa07,	// (0x00020bd7) popup_toobar_trans_pane_cp01

0xafbe,	// (0x0002118e) popup_image_details_window_ParamLimits

0xafbe,	// (0x0002118e) popup_image_details_window

0x3010,	// (0x000191e0) popup_image_focus_window

0x7496,	// (0x0001d666) camera2_autofocus_pane_ParamLimits

0x7496,	// (0x0001d666) camera2_autofocus_pane

0x05a2,	// (0x00016772) bg_popup_sub_pane_cp06

0x3625,	// (0x000197f5) popup_image_focus_window_g1

0x362d,	// (0x000197fd) popup_image_focus_window_g2

0x3635,	// (0x00019805) popup_image_focus_window_g3

0x363d,	// (0x0001980d) popup_image_focus_window_g4

0x0003,

0xf730,	// (0x00025900) popup_image_focus_window_g

0x3645,	// (0x00019815) popup_image_focus_window_t1

0x3653,	// (0x00019823) popup_image_focus_window_t2

0x3663,	// (0x00019833) popup_image_focus_window_t3

0x0002,

0xf739,	// (0x00025909) popup_image_focus_window_t

0x3671,	// (0x00019841) camera2_autofocus_pane_g1

0x0612,	// (0x000167e2) bg_tb_trans_pane_cp01

0x367f,	// (0x0001984f) popup_image_details_window_g1

0x3692,	// (0x00019862) popup_image_details_window_g2

0x0002,

0xf74b,	// (0x0002591b) popup_image_details_window_g

0x36bb,	// (0x0001988b) popup_image_details_window_t1

0x36cd,	// (0x0001989d) popup_image_details_window_t2

0x36e6,	// (0x000198b6) popup_image_details_window_t3

0x36fa,	// (0x000198ca) popup_image_details_window_t4

0x3715,	// (0x000198e5) popup_image_details_window_t5

0x0004,

0xf752,	// (0x00025922) popup_image_details_window_t

0x0d8f,	// (0x00016f5f) bg_calc_paper_pane_ParamLimits

0x70c8,	// (0x0001d298) grid_highlight_pane_cp013

0x70d2,	// (0x0001d2a2) list_calc_pane_ParamLimits

0x70e4,	// (0x0001d2b4) scroll_pane_cp024

0x0dbd,	// (0x00016f8d) bg_calc_display_pane_ParamLimits

0x70ec,	// (0x0001d2bc) calc_display_pane_t1_ParamLimits

0x7101,	// (0x0001d2d1) calc_display_pane_t2_ParamLimits

0x7116,	// (0x0001d2e6) calc_display_pane_t3_ParamLimits

0xf182,	// (0x00025352) calc_display_pane_t_ParamLimits

0x717f,	// (0x0001d34f) cell_calc_pane_g2

0x0001,

0xf19f,	// (0x0002536f) cell_calc_pane_g

0x7188,	// (0x0001d358) cell_calc_pane_t1

0x0e40,	// (0x00017010) grid_highlight_pane_cp02_ParamLimits

0x0e56,	// (0x00017026) toolbar_button_pane_cp01_ParamLimits

0x0e56,	// (0x00017026) toolbar_button_pane_cp01

0x1eb9,	// (0x00018089) temp_image_control_pane_ParamLimits

0x1eb9,	// (0x00018089) temp_image_control_pane

0x0612,	// (0x000167e2) main_mp3_pane

0x372f,	// (0x000198ff) temp_image_control_pane_g1_ParamLimits

0x372f,	// (0x000198ff) temp_image_control_pane_g1

0x373d,	// (0x0001990d) temp_image_control_pane_g2_ParamLimits

0x373d,	// (0x0001990d) temp_image_control_pane_g2

0x374f,	// (0x0001991f) temp_image_control_pane_g3_ParamLimits

0x374f,	// (0x0001991f) temp_image_control_pane_g3

0xb64a,	// (0x0002181a) temp_image_control_pane_g4_ParamLimits

0xb64a,	// (0x0002181a) temp_image_control_pane_g4

0x0003,

0xf75d,	// (0x0002592d) temp_image_control_pane_g_ParamLimits

0xf75d,	// (0x0002592d) temp_image_control_pane_g

0x372f,	// (0x000198ff) main_mp3_pane_g1

0xb65b,	// (0x0002182b) main_mp3_pane_g2

0x0007,

0xf766,	// (0x00025936) main_mp3_pane_g

0x3792,	// (0x00019962) main_mp3_pane_t1

0x1093,	// (0x00017263) main_camera_pane_g8_ParamLimits

0x1093,	// (0x00017263) main_camera_pane_g8

0x8f05,	// (0x0001f0d5) main_video_pane_g7_ParamLimits

0x8f05,	// (0x0001f0d5) main_video_pane_g7

0x75de,	// (0x0001d7ae) main_camera2_pane_t7_ParamLimits

0x75de,	// (0x0001d7ae) main_camera2_pane_t7

0x129e,	// (0x0001746e) scroll_pane_cp025_ParamLimits

0x129e,	// (0x0001746e) scroll_pane_cp025

0x12b2,	// (0x00017482) scroll_pane_cp026_ParamLimits

0x12b2,	// (0x00017482) scroll_pane_cp026

0x12c1,	// (0x00017491) wml_content_pane_ParamLimits

0x05a2,	// (0x00016772) main_touch_calib_pane

0xb6ff,	// (0x000218cf) main_touch_calib_pane_g1

0xb70b,	// (0x000218db) main_touch_calib_pane_g2

0xb717,	// (0x000218e7) main_touch_calib_pane_g3

0xb723,	// (0x000218f3) main_touch_calib_pane_g4

0x0003,

0xf784,	// (0x00025954) main_touch_calib_pane_g

0xb72f,	// (0x000218ff) main_touch_calib_pane_t1

0xb746,	// (0x00021916) main_touch_calib_pane_t2

0x0004,

0xf78d,	// (0x0002595d) main_touch_calib_pane_t

0x1a9a,	// (0x00017c6a) mup_progress_pane_cp02

0x1ab9,	// (0x00017c89) navi_pane_g1

0x1b1b,	// (0x00017ceb) navi_pane_mp_t3

0x0612,	// (0x000167e2) main_mp3_pane_ParamLimits

0xb077,	// (0x00021247) navi_pane_ParamLimits

0x372f,	// (0x000198ff) main_mp3_pane_g1_ParamLimits

0xb65b,	// (0x0002182b) main_mp3_pane_g2_ParamLimits

0xb667,	// (0x00021837) main_mp3_pane_g3_ParamLimits

0xb667,	// (0x00021837) main_mp3_pane_g3

0xb673,	// (0x00021843) main_mp3_pane_g4_ParamLimits

0xb673,	// (0x00021843) main_mp3_pane_g4

0x375f,	// (0x0001992f) main_mp3_pane_g5_ParamLimits

0x375f,	// (0x0001992f) main_mp3_pane_g5

0x376d,	// (0x0001993d) main_mp3_pane_g6_ParamLimits

0x376d,	// (0x0001993d) main_mp3_pane_g6

0x377a,	// (0x0001994a) main_mp3_pane_g7_ParamLimits

0x377a,	// (0x0001994a) main_mp3_pane_g7

0x3786,	// (0x00019956) main_mp3_pane_g8_ParamLimits

0x3786,	// (0x00019956) main_mp3_pane_g8

0xf766,	// (0x00025936) main_mp3_pane_g_ParamLimits

0xb67f,	// (0x0002184f) main_mp3_pane_t2

0xb68f,	// (0x0002185f) main_mp3_pane_t3

0x37a0,	// (0x00019970) main_mp3_pane_t4

0x37ae,	// (0x0001997e) main_mp3_pane_t5

0x0005,

0xf777,	// (0x00025947) main_mp3_pane_t

0x37bc,	// (0x0001998c) mup_progress_pane_cp01

0x05c0,	// (0x00016790) aid_zoom_text_secondary2

0x357b,	// (0x0001974b) list_cale_ev2_pane

0x3583,	// (0x00019753) scroll_pane_cp023_ParamLimits

0xb799,	// (0x00021969) field_cale_ev2_pane_ParamLimits

0xb799,	// (0x00021969) field_cale_ev2_pane

0xb7cd,	// (0x0002199d) field_cale_ev2_pane_g1_ParamLimits

0xb7cd,	// (0x0002199d) field_cale_ev2_pane_g1

0xb7d9,	// (0x000219a9) field_cale_ev2_pane_g2_ParamLimits

0xb7d9,	// (0x000219a9) field_cale_ev2_pane_g2

0xb7f1,	// (0x000219c1) field_cale_ev2_pane_g3_ParamLimits

0xb7f1,	// (0x000219c1) field_cale_ev2_pane_g3

0x0003,

0xf798,	// (0x00025968) field_cale_ev2_pane_g_ParamLimits

0xf798,	// (0x00025968) field_cale_ev2_pane_g

0x37d0,	// (0x000199a0) field_cale_ev2_pane_t1_ParamLimits

0x37d0,	// (0x000199a0) field_cale_ev2_pane_t1

0x37e7,	// (0x000199b7) field_cale_ev2_pane_t2_ParamLimits

0x37e7,	// (0x000199b7) field_cale_ev2_pane_t2

0x0001,

0xf7a1,	// (0x00025971) field_cale_ev2_pane_t_ParamLimits

0xf7a1,	// (0x00025971) field_cale_ev2_pane_t

0xa886,	// (0x00020a56) main_postcard_pane_g5_ParamLimits

0xa886,	// (0x00020a56) main_postcard_pane_g5

0xa894,	// (0x00020a64) main_postcard_pane_g6_ParamLimits

0xa894,	// (0x00020a64) main_postcard_pane_g6

0x8d45,	// (0x0001ef15) camera2_autofocus_pane_cp_ParamLimits

0x8d45,	// (0x0001ef15) camera2_autofocus_pane_cp

0x0612,	// (0x000167e2) main_mup3_pane

0xb829,	// (0x000219f9) main_mup3_pane_g1_ParamLimits

0xb829,	// (0x000219f9) main_mup3_pane_g1

0xb84a,	// (0x00021a1a) main_mup3_pane_g2_ParamLimits

0xb84a,	// (0x00021a1a) main_mup3_pane_g2

0xb8c5,	// (0x00021a95) main_mup3_pane_g3_ParamLimits

0xb8c5,	// (0x00021a95) main_mup3_pane_g3

0xb904,	// (0x00021ad4) main_mup3_pane_g4_ParamLimits

0xb904,	// (0x00021ad4) main_mup3_pane_g4

0xb943,	// (0x00021b13) main_mup3_pane_g5_ParamLimits

0xb943,	// (0x00021b13) main_mup3_pane_g5

0xb984,	// (0x00021b54) main_mup3_pane_g6_ParamLimits

0xb984,	// (0x00021b54) main_mup3_pane_g6

0x37fc,	// (0x000199cc) main_mup3_pane_g7_ParamLimits

0x37fc,	// (0x000199cc) main_mup3_pane_g7

0x0007,

0xf7b1,	// (0x00025981) main_mup3_pane_g_ParamLimits

0xf7b1,	// (0x00025981) main_mup3_pane_g

0xb9f6,	// (0x00021bc6) main_mup3_pane_t1_ParamLimits

0xb9f6,	// (0x00021bc6) main_mup3_pane_t1

0xba65,	// (0x00021c35) main_mup3_pane_t2_ParamLimits

0xba65,	// (0x00021c35) main_mup3_pane_t2

0xbb2e,	// (0x00021cfe) main_mup3_pane_t4_ParamLimits

0xbb2e,	// (0x00021cfe) main_mup3_pane_t4

0xbb80,	// (0x00021d50) main_mup3_pane_t5_ParamLimits

0xbb80,	// (0x00021d50) main_mup3_pane_t5

0xbc28,	// (0x00021df8) main_mup3_pane_t6_ParamLimits

0xbc28,	// (0x00021df8) main_mup3_pane_t6

0x0005,

0xf7c2,	// (0x00025992) main_mup3_pane_t_ParamLimits

0xf7c2,	// (0x00025992) main_mup3_pane_t

0xbcd0,	// (0x00021ea0) mup3_progress_pane_ParamLimits

0xbcd0,	// (0x00021ea0) mup3_progress_pane

0xbd35,	// (0x00021f05) popup_mup3_control_window_ParamLimits

0xbd35,	// (0x00021f05) popup_mup3_control_window

0x380a,	// (0x000199da) popup_mup3_text_window

0xbd4e,	// (0x00021f1e) mup3_progress_pane_t1

0xbd65,	// (0x00021f35) mup3_progress_pane_t2

0x3812,	// (0x000199e2) mup3_progress_pane_t3

0x0002,

0xf7cf,	// (0x0002599f) mup3_progress_pane_t

0x3829,	// (0x000199f9) mup_progress_pane_cp03

0x05a2,	// (0x00016772) bg_tb_trans_pane_cp04

0xbd7c,	// (0x00021f4c) mup3_volume_pane

0xbd84,	// (0x00021f54) popup_mup3_control_window_g1

0xbd8d,	// (0x00021f5d) mup3_volume_pane_g1

0xbd96,	// (0x00021f66) mup3_volume_pane_g2

0xbd9f,	// (0x00021f6f) mup3_volume_pane_g3

0x0002,

0xf7d6,	// (0x000259a6) mup3_volume_pane_g

0x05a2,	// (0x00016772) bg_tb_trans_pane_cp03

0x3839,	// (0x00019a09) popup_mup3_text_window_g1

0x3841,	// (0x00019a11) popup_mup3_text_window_t1

0x0e17,	// (0x00016fe7) list_calc_item_pane_g1_ParamLimits

0x3205,	// (0x000193d5) mup_volume_pane_cp_g1

0xb75d,	// (0x0002192d) main_touch_calib_pane_t3

0xb771,	// (0x00021941) main_touch_calib_pane_t4

0xb785,	// (0x00021955) main_touch_calib_pane_t5

0x05ac,	// (0x0001677c) aid_cell_size_toolbar2

0x05b4,	// (0x00016784) aid_popup3_width_pane

0x05c0,	// (0x00016790) aid_zoom_text_msg_primary

0x7321,	// (0x0001d4f1) vorec_t7

0x0ddb,	// (0x00016fab) bg_calc_paper_pane_g1_ParamLimits

0x0df3,	// (0x00016fc3) bg_calc_paper_pane_g2_ParamLimits

0x0de7,	// (0x00016fb7) bg_calc_paper_pane_g3_ParamLimits

0x0e0b,	// (0x00016fdb) bg_calc_paper_pane_g4_ParamLimits

0x0dff,	// (0x00016fcf) bg_calc_paper_pane_g5_ParamLimits

0x8937,	// (0x0001eb07) bg_calc_paper_pane_g6_ParamLimits

0x8948,	// (0x0001eb18) bg_calc_paper_pane_g7_ParamLimits

0x8959,	// (0x0001eb29) bg_calc_paper_pane_g8_ParamLimits

0xf189,	// (0x00025359) bg_calc_paper_pane_g_ParamLimits

0x896a,	// (0x0001eb3a) calc_bg_paper_pane_g9_ParamLimits

0x8e2e,	// (0x0001effe) image_qvga_pane_ParamLimits

0x8e2e,	// (0x0001effe) image_qvga_pane

0x0c8c,	// (0x00016e5c) bg_popup_sub_pane_cp04_ParamLimits

0x1df0,	// (0x00017fc0) popup_mup_playback_window_g1_ParamLimits

0x1dfc,	// (0x00017fcc) popup_mup_playback_window_t1_ParamLimits

0x1e11,	// (0x00017fe1) popup_mup_playback_window_t2_ParamLimits

0xf515,	// (0x000256e5) popup_mup_playback_window_t_ParamLimits

0xb2c9,	// (0x00021499) main_mup2_pane_g3_ParamLimits

0xb2c9,	// (0x00021499) main_mup2_pane_g3

0x90d3,	// (0x0001f2a3) popup_toolbar_window_cp04

0x2206,	// (0x000183d6) popup_call2_audio_second_window_g3_ParamLimits

0x2206,	// (0x000183d6) popup_call2_audio_second_window_g3

0x2610,	// (0x000187e0) popup_call2_audio_first_window_g4_ParamLimits

0x2610,	// (0x000187e0) popup_call2_audio_first_window_g4

0x2c8f,	// (0x00018e5f) popup_call2_audio_in_window_g4_ParamLimits

0x2c8f,	// (0x00018e5f) popup_call2_audio_in_window_g4

0xa9a2,	// (0x00020b72) aid_area_sk_bg_cut_ParamLimits

0xa9a2,	// (0x00020b72) aid_area_sk_bg_cut

0x1e26,	// (0x00017ff6) aid_area_sk_bg_cut_2_ParamLimits

0x1e26,	// (0x00017ff6) aid_area_sk_bg_cut_2

0xb5f0,	// (0x000217c0) aid_placing_details_win

0xb5f8,	// (0x000217c8) aid_placing_details_win_2

0x3671,	// (0x00019841) camera2_autofocus_pane_g1_ParamLimits

0x863c,	// (0x0001e80c) popup_fixed_preview_cale_window_ParamLimits

0x863c,	// (0x0001e80c) popup_fixed_preview_cale_window

0x1b85,	// (0x00017d55) navi_slider_pane_g3

0x1b7c,	// (0x00017d4c) navi_slider_pane_g4

0x1b73,	// (0x00017d43) navi_slider_pane_g5

0x1b85,	// (0x00017d55) navi_slider_pane_g6

0x73f9,	// (0x0001d5c9) navi_slider_pane_g7

0x1caf,	// (0x00017e7f) mup_scale_pane_g3

0x1cb8,	// (0x00017e88) mup_scale_pane_g4

0x1cc1,	// (0x00017e91) mup_scale_pane_g5

0xa6cc,	// (0x0002089c) mup_scale_pane_g6

0xa6d5,	// (0x000208a5) mup_scale_pane_g7

0x1b85,	// (0x00017d55) cams2_slider_pane_g3

0x32ba,	// (0x0001948a) cams2_slider_pane_g4

0x7750,	// (0x0001d920) cams2_slider_pane_g5

0x1b85,	// (0x00017d55) cams2_slider_pane_g6

0x7758,	// (0x0001d928) cams2_slider_pane_g7

0x34f8,	// (0x000196c8) camera2_autofocus_pane_cp_g1

0x384f,	// (0x00019a1f) bg_popup_preview_window_pane_cp02_ParamLimits

0x384f,	// (0x00019a1f) bg_popup_preview_window_pane_cp02

0x385b,	// (0x00019a2b) list_fp_cale_pane_ParamLimits

0x385b,	// (0x00019a2b) list_fp_cale_pane

0x3867,	// (0x00019a37) popup_fixed_preview_cale_window_t1_ParamLimits

0x3867,	// (0x00019a37) popup_fixed_preview_cale_window_t1

0xbda8,	// (0x00021f78) popup_fixed_preview_cale_window_t2_ParamLimits

0xbda8,	// (0x00021f78) popup_fixed_preview_cale_window_t2

0xbdbd,	// (0x00021f8d) popup_fixed_preview_cale_window_t3_ParamLimits

0xbdbd,	// (0x00021f8d) popup_fixed_preview_cale_window_t3

0x0002,

0xf7dd,	// (0x000259ad) popup_fixed_preview_cale_window_t_ParamLimits

0xf7dd,	// (0x000259ad) popup_fixed_preview_cale_window_t

0xbdd2,	// (0x00021fa2) list_single_fp_cale_pane_ParamLimits

0xbdd2,	// (0x00021fa2) list_single_fp_cale_pane

0x3885,	// (0x00019a55) list_single_fp_cale_pane_g1_ParamLimits

0x3885,	// (0x00019a55) list_single_fp_cale_pane_g1

0x3891,	// (0x00019a61) list_single_fp_cale_pane_g2_ParamLimits

0x3891,	// (0x00019a61) list_single_fp_cale_pane_g2

0x0002,

0xf7e4,	// (0x000259b4) list_single_fp_cale_pane_g_ParamLimits

0xf7e4,	// (0x000259b4) list_single_fp_cale_pane_g

0x38aa,	// (0x00019a7a) list_single_fp_cale_pane_t1_ParamLimits

0x38aa,	// (0x00019a7a) list_single_fp_cale_pane_t1

0x38bc,	// (0x00019a8c) list_single_fp_cale_pane_t2_ParamLimits

0x38bc,	// (0x00019a8c) list_single_fp_cale_pane_t2

0x0001,

0xf7eb,	// (0x000259bb) list_single_fp_cale_pane_t_ParamLimits

0xf7eb,	// (0x000259bb) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x05a2,	// (0x00016772) main_dialer_pane

0xbde6,	// (0x00021fb6) aid_cell_size_keypad

0xbdf0,	// (0x00021fc0) dialer_ne_pane

0xbdfa,	// (0x00021fca) grid_dialer_command_1_pane

0xbe02,	// (0x00021fd2) grid_dialer_command_2_pane

0xbe0a,	// (0x00021fda) grid_dialer_keypad_pane

0xbe1e,	// (0x00021fee) bg_popup_call_pane_cp06_ParamLimits

0xbe1e,	// (0x00021fee) bg_popup_call_pane_cp06

0xbe2a,	// (0x00021ffa) dialer_ne_clear_pane_ParamLimits

0xbe2a,	// (0x00021ffa) dialer_ne_clear_pane

0x38ef,	// (0x00019abf) dialer_ne_pane_g1

0x38f7,	// (0x00019ac7) dialer_ne_pane_t1_ParamLimits

0x38f7,	// (0x00019ac7) dialer_ne_pane_t1

0xbe36,	// (0x00022006) dialer_ne_pane_t2_ParamLimits

0xbe36,	// (0x00022006) dialer_ne_pane_t2

0xbe53,	// (0x00022023) dialer_ne_pane_t3_ParamLimits

0xbe53,	// (0x00022023) dialer_ne_pane_t3

0x0002,

0xf7f0,	// (0x000259c0) dialer_ne_pane_t_ParamLimits

0xf7f0,	// (0x000259c0) dialer_ne_pane_t

0xbe77,	// (0x00022047) dialer_ne_pane_t3_copy1_ParamLimits

0xbe77,	// (0x00022047) dialer_ne_pane_t3_copy1

0xbe9b,	// (0x0002206b) cell_dialer_keypad_pane_ParamLimits

0xbe9b,	// (0x0002206b) cell_dialer_keypad_pane

0xbeb2,	// (0x00022082) cell_dialer_command_1_pane_ParamLimits

0xbeb2,	// (0x00022082) cell_dialer_command_1_pane

0xbec8,	// (0x00022098) cell_dialer_command_2_pane_ParamLimits

0xbec8,	// (0x00022098) cell_dialer_command_2_pane

0x3909,	// (0x00019ad9) bg_button_pane_cp02_ParamLimits

0x3909,	// (0x00019ad9) bg_button_pane_cp02

0xbed7,	// (0x000220a7) cell_dialer_keypad_pane_g1_ParamLimits

0xbed7,	// (0x000220a7) cell_dialer_keypad_pane_g1

0x3909,	// (0x00019ad9) bg_button_pane_cp03_ParamLimits

0x3909,	// (0x00019ad9) bg_button_pane_cp03

0xbeec,	// (0x000220bc) cell_dialer_command_1_pane_g1_ParamLimits

0xbeec,	// (0x000220bc) cell_dialer_command_1_pane_g1

0x3915,	// (0x00019ae5) bg_button_pane_cp04

0xbeff,	// (0x000220cf) cell_dialer_command_2_pane_g1

0x1b59,	// (0x00017d29) bg_button_pane_cp06

0x391d,	// (0x00019aed) dialer_ne_clear_pane_g1

0xa1e2,	// (0x000203b2) navi_pane_g2

0xa210,	// (0x000203e0) navi_pane_g3

0x0002,

0xf418,	// (0x000255e8) navi_pane_g

0xa23b,	// (0x0002040b) navi_pane_mv_g2

0xa262,	// (0x00020432) navi_pane_mv_g5

0xa26a,	// (0x0002043a) navi_pane_mv_t1

0x0dbd,	// (0x00016f8d) main_clock2_pane

0xbf2d,	// (0x000220fd) main_clock2_list_pane_ParamLimits

0xbf2d,	// (0x000220fd) main_clock2_list_pane

0xbf55,	// (0x00022125) main_clock2_pane_t1_ParamLimits

0xbf55,	// (0x00022125) main_clock2_pane_t1

0xbf85,	// (0x00022155) main_clock2_pane_t2_ParamLimits

0xbf85,	// (0x00022155) main_clock2_pane_t2

0x0004,

0xf7f7,	// (0x000259c7) main_clock2_pane_t_ParamLimits

0xf7f7,	// (0x000259c7) main_clock2_pane_t

0xbfec,	// (0x000221bc) popup_clock_analogue_window_cp03_ParamLimits

0xbfec,	// (0x000221bc) popup_clock_analogue_window_cp03

0xc00c,	// (0x000221dc) popup_clock_digital_window_cp02_ParamLimits

0xc00c,	// (0x000221dc) popup_clock_digital_window_cp02

0xc081,	// (0x00022251) main_clock2_list_single_pane_ParamLimits

0xc081,	// (0x00022251) main_clock2_list_single_pane

0x1b59,	// (0x00017d29) list_highlight_pane_cp05

0x3925,	// (0x00019af5) main_clock2_list_single_pane_t1

0x90d3,	// (0x0001f2a3) popup_toolbar_window_cp04_ParamLimits

0xb61a,	// (0x000217ea) camera2_autofocus_pane_g2_ParamLimits

0xb61a,	// (0x000217ea) camera2_autofocus_pane_g2

0xb626,	// (0x000217f6) camera2_autofocus_pane_g3_ParamLimits

0xb626,	// (0x000217f6) camera2_autofocus_pane_g3

0xb632,	// (0x00021802) camera2_autofocus_pane_g4_ParamLimits

0xb632,	// (0x00021802) camera2_autofocus_pane_g4

0xb63e,	// (0x0002180e) camera2_autofocus_pane_g5_ParamLimits

0xb63e,	// (0x0002180e) camera2_autofocus_pane_g5

0x0004,

0xf740,	// (0x00025910) camera2_autofocus_pane_g_ParamLimits

0xf740,	// (0x00025910) camera2_autofocus_pane_g

0xb809,	// (0x000219d9) camera2_autofocus_pane_cp_g2

0xb811,	// (0x000219e1) camera2_autofocus_pane_cp_g3

0xb819,	// (0x000219e9) camera2_autofocus_pane_cp_g4

0xb821,	// (0x000219f1) camera2_autofocus_pane_cp_g5

0x0004,

0xf7a6,	// (0x00025976) camera2_autofocus_pane_cp_g

0xbe16,	// (0x00021fe6) popup_dialer_spcha_window

0x05a2,	// (0x00016772) bg_popup_sub_pane_cp07

0x3933,	// (0x00019b03) list_spcha_pane

0x393b,	// (0x00019b0b) list_single_spcha_pane_ParamLimits

0x393b,	// (0x00019b0b) list_single_spcha_pane

0x05a2,	// (0x00016772) list_highlight_pane_cp06

0x394c,	// (0x00019b1c) list_single_spcha_pane_t1

0x2a39,	// (0x00018c09) popup_call2_audio_out_window_g4_ParamLimits

0x2a39,	// (0x00018c09) popup_call2_audio_out_window_g4

0x05a2,	// (0x00016772) main_imed2_pane

0x3018,	// (0x000191e8) popup_imed_adjust2_window

0xafcc,	// (0x0002119c) popup_imed_trans_window_ParamLimits

0xafcc,	// (0x0002119c) popup_imed_trans_window

0x3334,	// (0x00019504) popup_blid_sat_info2_window_t1

0x3342,	// (0x00019512) popup_blid_sat_info2_window_t2

0x000a,

0xf6d5,	// (0x000258a5) popup_blid_sat_info2_window_t

0xc0b3,	// (0x00022283) aid_size_cell_colour_35

0xc0cd,	// (0x0002229d) aid_size_cell_colour_112

0xc0e4,	// (0x000222b4) aid_size_cell_effect

0x0612,	// (0x000167e2) bg_tb_trans_pane_cp02

0x164e,	// (0x0001781e) heading_imed_pane

0xc0fe,	// (0x000222ce) listscroll_imed_pane

0x395a,	// (0x00019b2a) heading_imed_pane_g1

0x3962,	// (0x00019b32) heading_imed_pane_t1

0x3970,	// (0x00019b40) grid_imed_colour_35_pane_ParamLimits

0x3970,	// (0x00019b40) grid_imed_colour_35_pane

0xc10a,	// (0x000222da) grid_imed_effect_pane

0x398b,	// (0x00019b5b) list_imed_aspect_pane

0xc11a,	// (0x000222ea) scroll_pane_cp027_ParamLimits

0xc11a,	// (0x000222ea) scroll_pane_cp027

0xc126,	// (0x000222f6) cell_imed_effect_pane_ParamLimits

0xc126,	// (0x000222f6) cell_imed_effect_pane

0x3993,	// (0x00019b63) cell_imed_colour_pane_ParamLimits

0x3993,	// (0x00019b63) cell_imed_colour_pane

0x39d5,	// (0x00019ba5) cell_imed_colour_pane_g1_ParamLimits

0x39d5,	// (0x00019ba5) cell_imed_colour_pane_g1

0x39e6,	// (0x00019bb6) hgihlgiht_grid_pane_cp016_ParamLimits

0x39e6,	// (0x00019bb6) hgihlgiht_grid_pane_cp016

0xc13e,	// (0x0002230e) cell_imed_effect_pane_g1

0xc146,	// (0x00022316) grid_highlight_pane_cp017

0x0f40,	// (0x00017110) list_imed_single_pane_ParamLimits

0x0f40,	// (0x00017110) list_imed_single_pane

0x05a2,	// (0x00016772) list_highlight_pane_cp07

0x39f7,	// (0x00019bc7) list_imed_aspect_pane_comp1_t1

0x2ff0,	// (0x000191c0) bg_tb_trans_pane_cp05

0x3a27,	// (0x00019bf7) popup_imed_adjust2_window_g1

0x3a4e,	// (0x00019c1e) popup_imed_adjust2_window_t1

0x3a66,	// (0x00019c36) slider_imed_adjust_pane

0x3a7a,	// (0x00019c4a) slider_imed_adjust_pane_g1

0x3a8a,	// (0x00019c5a) slider_imed_adjust_pane_g2

0x3a9a,	// (0x00019c6a) slider_imed_adjust_pane_g3

0x3aab,	// (0x00019c7b) slider_imed_adjust_pane_g4

0x0003,

0xf814,	// (0x000259e4) slider_imed_adjust_pane_g

0xc14f,	// (0x0002231f) aid_size_cell_clipart2

0xc15b,	// (0x0002232b) grid_imed_clipart_pane

0x3abc,	// (0x00019c8c) scroll_pane_cp031

0xc165,	// (0x00022335) cell_imed_clipart_pane_ParamLimits

0xc165,	// (0x00022335) cell_imed_clipart_pane

0xc18c,	// (0x0002235c) cell_imed_clipart_pane_g1

0x05a2,	// (0x00016772) grid_highlight_pane_cp014

0xbf39,	// (0x00022109) main_clock2_pane_g1_ParamLimits

0xbf39,	// (0x00022109) main_clock2_pane_g1

0xc028,	// (0x000221f8) aid_call2_pane_cp10

0xc03a,	// (0x0002220a) aid_call_pane_cp10

0x1a8e,	// (0x00017c5e) popup_clock_analogue_window_cp10_g1

0x1a8e,	// (0x00017c5e) popup_clock_analogue_window_cp10_g2

0xc04c,	// (0x0002221c) popup_clock_analogue_window_cp10_g3

0xc04c,	// (0x0002221c) popup_clock_analogue_window_cp10_g4

0x1a8e,	// (0x00017c5e) popup_clock_analogue_window_cp10_g5

0x0004,

0xf802,	// (0x000259d2) popup_clock_analogue_window_cp10_g

0xc062,	// (0x00022232) popup_clock_analogue_window_cp10_t1

0x7761,	// (0x0001d931) clock_digital_number_pane_cp10_ParamLimits

0x7761,	// (0x0001d931) clock_digital_number_pane_cp10

0x7779,	// (0x0001d949) clock_digital_number_pane_cp11_ParamLimits

0x7779,	// (0x0001d949) clock_digital_number_pane_cp11

0x7791,	// (0x0001d961) clock_digital_number_pane_cp12_ParamLimits

0x7791,	// (0x0001d961) clock_digital_number_pane_cp12

0x77a9,	// (0x0001d979) clock_digital_number_pane_cp13_ParamLimits

0x77a9,	// (0x0001d979) clock_digital_number_pane_cp13

0x77c1,	// (0x0001d991) clock_digital_separator_pane_cp10_ParamLimits

0x77c1,	// (0x0001d991) clock_digital_separator_pane_cp10

0xc093,	// (0x00022263) popup_clock_digital_window_cp02_t1_ParamLimits

0xc093,	// (0x00022263) popup_clock_digital_window_cp02_t1

0x0c84,	// (0x00016e54) clock_digital_number_pane_cp10_g1

0x0c84,	// (0x00016e54) clock_digital_number_pane_cp10_g2

0x0001,

0xf81d,	// (0x000259ed) clock_digital_number_pane_cp10_g

0x0c84,	// (0x00016e54) clock_digital_separator_pane_cp10_g1

0x0c84,	// (0x00016e54) clock_digital_separator_pane_g2_cp10

0x1b29,	// (0x00017cf9) navi_pane_vded_g4

0x1b32,	// (0x00017d02) navi_pane_vded_g5

0x1b3b,	// (0x00017d0b) navi_pane_vded_t1

0x05a2,	// (0x00016772) main_vded_pane

0xc195,	// (0x00022365) main_vded_pane_g1

0xc1a1,	// (0x00022371) main_vded_pane_g2

0xc1ab,	// (0x0002237b) main_vded_pane_g3

0x0002,

0xf822,	// (0x000259f2) main_vded_pane_g

0xc1b5,	// (0x00022385) main_vded_pane_t1

0xc1c3,	// (0x00022393) main_vded_pane_t2

0x0001,

0xf829,	// (0x000259f9) main_vded_pane_t

0xc1d1,	// (0x000223a1) vded_slider_pane

0xc1db,	// (0x000223ab) vded_video_pane

0x3ac4,	// (0x00019c94) vded_video_pane_g1

0xc1e5,	// (0x000223b5) vded_video_pane_g2

0x34f8,	// (0x000196c8) vded_video_pane_g3

0x0002,

0xf82e,	// (0x000259fe) vded_video_pane_g

0x3ace,	// (0x00019c9e) vded_slider_pane_g1

0x3205,	// (0x000193d5) vded_slider_pane_g2

0x3ad7,	// (0x00019ca7) vded_slider_pane_g3

0x3ae0,	// (0x00019cb0) vded_slider_pane_g4

0x3ae9,	// (0x00019cb9) vded_slider_pane_g5

0x0004,

0xf835,	// (0x00025a05) vded_slider_pane_g

0xbd27,	// (0x00021ef7) mup3_rocker_pane_ParamLimits

0xbd27,	// (0x00021ef7) mup3_rocker_pane

0xc1ee,	// (0x000223be) mup3_control_keys_pane_g1

0xc1f6,	// (0x000223c6) mup3_control_keys_pane_g2

0xc1fe,	// (0x000223ce) mup3_control_keys_pane_g3

0xc206,	// (0x000223d6) mup3_control_keys_pane_g4

0x0003,

0xf840,	// (0x00025a10) mup3_control_keys_pane_g

0x865a,	// (0x0001e82a) popup_toolbar2_fixed_window_cp01_ParamLimits

0x865a,	// (0x0001e82a) popup_toolbar2_fixed_window_cp01

0xbd41,	// (0x00021f11) popup_toolbar2_fixed_window_cp02_ParamLimits

0xbd41,	// (0x00021f11) popup_toolbar2_fixed_window_cp02

0x2378,	// (0x00018548) popup_call2_audio_second_window_t4_ParamLimits

0x2378,	// (0x00018548) popup_call2_audio_second_window_t4

0x28a6,	// (0x00018a76) popup_call2_audio_first_window_t6_ParamLimits

0x28a6,	// (0x00018a76) popup_call2_audio_first_window_t6

0x2b3c,	// (0x00018d0c) popup_call2_audio_out_window_t6_ParamLimits

0x2b3c,	// (0x00018d0c) popup_call2_audio_out_window_t6

0x05a2,	// (0x00016772) main_vitu_pane

0xc216,	// (0x000223e6) aid_size_cell_itu_ParamLimits

0xc216,	// (0x000223e6) aid_size_cell_itu

0x3a0f,	// (0x00019bdf) bg_popup_window_pane_cp08_ParamLimits

0x3a0f,	// (0x00019bdf) bg_popup_window_pane_cp08

0xc224,	// (0x000223f4) field_vitu_entry_pane_ParamLimits

0xc224,	// (0x000223f4) field_vitu_entry_pane

0xc233,	// (0x00022403) grid_vitu_function_pane_ParamLimits

0xc233,	// (0x00022403) grid_vitu_function_pane

0xc243,	// (0x00022413) grid_vitu_itu_pane_ParamLimits

0xc243,	// (0x00022413) grid_vitu_itu_pane

0xc253,	// (0x00022423) cell_vitu_itu_pane_ParamLimits

0xc253,	// (0x00022423) cell_vitu_itu_pane

0xc268,	// (0x00022438) cell_vitu_function_pane_ParamLimits

0xc268,	// (0x00022438) cell_vitu_function_pane

0x0612,	// (0x000167e2) bg_popup_sub_pane_cp08_ParamLimits

0x0612,	// (0x000167e2) bg_popup_sub_pane_cp08

0xc27c,	// (0x0002244c) field_vitu_entry_pane_t1_ParamLimits

0xc27c,	// (0x0002244c) field_vitu_entry_pane_t1

0x3b0a,	// (0x00019cda) field_vitu_entry_pane_t2_ParamLimits

0x3b0a,	// (0x00019cda) field_vitu_entry_pane_t2

0x0001,

0xf84e,	// (0x00025a1e) field_vitu_entry_pane_t_ParamLimits

0xf84e,	// (0x00025a1e) field_vitu_entry_pane_t

0x3b27,	// (0x00019cf7) bg_button_pane_cp05_ParamLimits

0x3b27,	// (0x00019cf7) bg_button_pane_cp05

0xc299,	// (0x00022469) cell_vitu_itu_pane_g1

0xc2b1,	// (0x00022481) cell_vitu_itu_pane_t1_ParamLimits

0xc2b1,	// (0x00022481) cell_vitu_itu_pane_t1

0xc2c3,	// (0x00022493) cell_vitu_itu_pane_t2_ParamLimits

0xc2c3,	// (0x00022493) cell_vitu_itu_pane_t2

0x0002,

0xf853,	// (0x00025a23) cell_vitu_itu_pane_t_ParamLimits

0xf853,	// (0x00025a23) cell_vitu_itu_pane_t

0x3b35,	// (0x00019d05) bg_button_pane_cp07

0xc2f8,	// (0x000224c8) cell_vitu_function_pane_g1

0x70c0,	// (0x0001d290) main_calc_pane_g1

0x845d,	// (0x0001e62d) aid_visual_content_pane

0x05a2,	// (0x00016772) main_vradio_pane

0xc301,	// (0x000224d1) main_vradio_pane_g1_ParamLimits

0xc301,	// (0x000224d1) main_vradio_pane_g1

0x3b3f,	// (0x00019d0f) main_vradio_pane_g2_ParamLimits

0x3b3f,	// (0x00019d0f) main_vradio_pane_g2

0x0001,

0xf85a,	// (0x00025a2a) main_vradio_pane_g_ParamLimits

0xf85a,	// (0x00025a2a) main_vradio_pane_g

0xc311,	// (0x000224e1) main_vradio_pane_t1_ParamLimits

0xc311,	// (0x000224e1) main_vradio_pane_t1

0xc323,	// (0x000224f3) main_vradio_pane_t2_ParamLimits

0xc323,	// (0x000224f3) main_vradio_pane_t2

0x3b4c,	// (0x00019d1c) main_vradio_pane_t3_ParamLimits

0x3b4c,	// (0x00019d1c) main_vradio_pane_t3

0x0002,

0xf85f,	// (0x00025a2f) main_vradio_pane_t_ParamLimits

0xf85f,	// (0x00025a2f) main_vradio_pane_t

0xc335,	// (0x00022505) vradio_rocker_control_pane_ParamLimits

0xc335,	// (0x00022505) vradio_rocker_control_pane

0xc341,	// (0x00022511) vradio_station_info_pane_ParamLimits

0xc341,	// (0x00022511) vradio_station_info_pane

0x3b60,	// (0x00019d30) vradio_frequency_info_pane_ParamLimits

0x3b60,	// (0x00019d30) vradio_frequency_info_pane

0x34f8,	// (0x000196c8) vradio_station_info_pane_g1

0x3b6f,	// (0x00019d3f) vradio_station_info_pane_t1_ParamLimits

0x3b6f,	// (0x00019d3f) vradio_station_info_pane_t1

0x3b91,	// (0x00019d61) vradio_station_info_pane_t2_ParamLimits

0x3b91,	// (0x00019d61) vradio_station_info_pane_t2

0x0001,

0xf866,	// (0x00025a36) vradio_station_info_pane_t_ParamLimits

0xf866,	// (0x00025a36) vradio_station_info_pane_t

0x3ba3,	// (0x00019d73) vradio_tuning_pane

0x3bab,	// (0x00019d7b) vradio_rocker_control_pane_g1

0x3bb3,	// (0x00019d83) vradio_rocker_control_pane_g2

0x3bbb,	// (0x00019d8b) vradio_rocker_control_pane_g3

0x3bc3,	// (0x00019d93) vradio_rocker_control_pane_g4

0x3bcb,	// (0x00019d9b) vradio_rocker_control_pane_g5

0x0004,

0xf86b,	// (0x00025a3b) vradio_rocker_control_pane_g

0xc350,	// (0x00022520) vradio_frequency_info_pane_g1

0x3bd3,	// (0x00019da3) vradio_frequency_info_pane_t1_ParamLimits

0x3bd3,	// (0x00019da3) vradio_frequency_info_pane_t1

0xc35a,	// (0x0002252a) vradio_tuning_pane_g1

0xc363,	// (0x00022533) vradio_tuning_pane_t1

0x05d0,	// (0x000167a0) area_side_right_pane_ParamLimits

0x05d0,	// (0x000167a0) area_side_right_pane

0x2fb7,	// (0x00019187) status_small_pane_g1

0x2fbf,	// (0x0001918f) status_small_pane_g2

0x2fc8,	// (0x00019198) status_small_pane_g3

0x2fd1,	// (0x000191a1) status_small_pane_g4

0x0003,

0xf62b,	// (0x000257fb) status_small_pane_g

0x2fda,	// (0x000191aa) status_small_pane_t1

0x05a2,	// (0x00016772) main_video3_pane

0x3be7,	// (0x00019db7) cams_zoom_vslider_pane

0x3bef,	// (0x00019dbf) image3_wide_pane_ParamLimits

0x3bef,	// (0x00019dbf) image3_wide_pane

0x3c09,	// (0x00019dd9) image3_wide_small_pane

0x3c15,	// (0x00019de5) main_video3_pane_g1_ParamLimits

0x3c15,	// (0x00019de5) main_video3_pane_g1

0x3c31,	// (0x00019e01) main_video3_pane_g2_ParamLimits

0x3c31,	// (0x00019e01) main_video3_pane_g2

0x0001,

0xf876,	// (0x00025a46) main_video3_pane_g_ParamLimits

0xf876,	// (0x00025a46) main_video3_pane_g

0x3c4d,	// (0x00019e1d) main_video3_pane_t1_ParamLimits

0x3c4d,	// (0x00019e1d) main_video3_pane_t1

0x3c78,	// (0x00019e48) main_video3_pane_t2_ParamLimits

0x3c78,	// (0x00019e48) main_video3_pane_t2

0x3ca3,	// (0x00019e73) main_video3_pane_t3_ParamLimits

0x3ca3,	// (0x00019e73) main_video3_pane_t3

0x0002,

0xf87b,	// (0x00025a4b) main_video3_pane_t_ParamLimits

0xf87b,	// (0x00025a4b) main_video3_pane_t

0x3cd0,	// (0x00019ea0) cams_zoom_vslider_pane_g1

0x3cd9,	// (0x00019ea9) cams_zoom_vslider_pane_g2

0x0001,

0xf882,	// (0x00025a52) cams_zoom_vslider_pane_g

0x3ce1,	// (0x00019eb1) small_slider_vertical_pane

0x34f8,	// (0x000196c8) small_slider_vertical_pane_g1

0x34f8,	// (0x000196c8) small_slider_vertical_pane_g2

0x3ce9,	// (0x00019eb9) small_slider_vertical_pane_g3

0x0002,

0xf887,	// (0x00025a57) small_slider_vertical_pane_g

0x05a2,	// (0x00016772) main_hwr_training_pane

0x3cf2,	// (0x00019ec2) hwr_training_instruct_pane_ParamLimits

0x3cf2,	// (0x00019ec2) hwr_training_instruct_pane

0xc372,	// (0x00022542) hwr_training_navi_pane_ParamLimits

0xc372,	// (0x00022542) hwr_training_navi_pane

0xc38c,	// (0x0002255c) hwr_training_write_pane_ParamLimits

0xc38c,	// (0x0002255c) hwr_training_write_pane

0x05a2,	// (0x00016772) bg_frame_shadow_pane

0x3d29,	// (0x00019ef9) hwr_training_write_pane_g1

0x3d31,	// (0x00019f01) hwr_training_write_pane_g2

0x3d39,	// (0x00019f09) hwr_training_write_pane_g3

0x3d41,	// (0x00019f11) hwr_training_write_pane_g4

0x3d49,	// (0x00019f19) hwr_training_write_pane_g5

0x3d51,	// (0x00019f21) hwr_training_write_pane_g6

0x3d59,	// (0x00019f29) hwr_training_write_pane_g7

0x0006,

0xf88e,	// (0x00025a5e) hwr_training_write_pane_g

0x77d9,	// (0x0001d9a9) hwr_training_navi_pane_g1_ParamLimits

0x77d9,	// (0x0001d9a9) hwr_training_navi_pane_g1

0x77eb,	// (0x0001d9bb) hwr_training_navi_pane_g2_ParamLimits

0x77eb,	// (0x0001d9bb) hwr_training_navi_pane_g2

0x77fd,	// (0x0001d9cd) hwr_training_navi_pane_g3_ParamLimits

0x77fd,	// (0x0001d9cd) hwr_training_navi_pane_g3

0x780d,	// (0x0001d9dd) hwr_training_navi_pane_g4_ParamLimits

0x780d,	// (0x0001d9dd) hwr_training_navi_pane_g4

0x0004,

0xf89d,	// (0x00025a6d) hwr_training_navi_pane_g_ParamLimits

0xf89d,	// (0x00025a6d) hwr_training_navi_pane_g

0x7827,	// (0x0001d9f7) hwr_training_navi_pane_t1

0xc3c4,	// (0x00022594) list_single_hwr_training_instruct_pane_ParamLimits

0xc3c4,	// (0x00022594) list_single_hwr_training_instruct_pane

0x3db0,	// (0x00019f80) list_single_hwr_training_instruct_pane_t1

0x3438,	// (0x00019608) bg_frame_shadow_pane_g1

0x3dbf,	// (0x00019f8f) bg_frame_shadow_pane_g2

0x3dc7,	// (0x00019f97) bg_frame_shadow_pane_g3

0x3dcf,	// (0x00019f9f) bg_frame_shadow_pane_g4

0x3dd7,	// (0x00019fa7) bg_frame_shadow_pane_g5

0x3ddf,	// (0x00019faf) bg_frame_shadow_pane_g6

0x3de7,	// (0x00019fb7) bg_frame_shadow_pane_g7

0x0eb6,	// (0x00017086) bg_frame_shadow_pane_g8

0x0007,

0xf8a8,	// (0x00025a78) bg_frame_shadow_pane_g

0x05a2,	// (0x00016772) main_video_tele_dialer_pane

0x7835,	// (0x0001da05) aid_size_cell_video_keypad_ParamLimits

0x7835,	// (0x0001da05) aid_size_cell_video_keypad

0x7845,	// (0x0001da15) grid_video_dialer_keypad_pane_ParamLimits

0x7845,	// (0x0001da15) grid_video_dialer_keypad_pane

0x7855,	// (0x0001da25) video_down_pane_cp_ParamLimits

0x7855,	// (0x0001da25) video_down_pane_cp

0x7863,	// (0x0001da33) cell_video_dialer_keypad_pane_ParamLimits

0x7863,	// (0x0001da33) cell_video_dialer_keypad_pane

0x3def,	// (0x00019fbf) bg_button_pane_cp08_ParamLimits

0x3def,	// (0x00019fbf) bg_button_pane_cp08

0xc43a,	// (0x0002260a) cell_video_dialer_keypad_pane_g1_ParamLimits

0xc43a,	// (0x0002260a) cell_video_dialer_keypad_pane_g1

0xbd1b,	// (0x00021eeb) mup3_rocker2_pane_ParamLimits

0xbd1b,	// (0x00021eeb) mup3_rocker2_pane

0x34f8,	// (0x000196c8) mup3_rocker2_pane_g1

0xaf5a,	// (0x0002112a) main_dialer2_pane

0x05a2,	// (0x00016772) main_mp4_pane

0x7880,	// (0x0001da50) main_mp4_pane_g1_ParamLimits

0x7880,	// (0x0001da50) main_mp4_pane_g1

0x788e,	// (0x0001da5e) main_mp4_pane_g2_ParamLimits

0x788e,	// (0x0001da5e) main_mp4_pane_g2

0x789c,	// (0x0001da6c) main_mp4_pane_g3_ParamLimits

0x789c,	// (0x0001da6c) main_mp4_pane_g3

0x78e1,	// (0x0001dab1) main_mp4_pane_g4_ParamLimits

0x78e1,	// (0x0001dab1) main_mp4_pane_g4

0x7909,	// (0x0001dad9) main_mp4_pane_g5_ParamLimits

0x7909,	// (0x0001dad9) main_mp4_pane_g5

0x0005,

0xf8c8,	// (0x00025a98) main_mp4_pane_g_ParamLimits

0xf8c8,	// (0x00025a98) main_mp4_pane_g

0x7959,	// (0x0001db29) main_mp4_pane_t1_ParamLimits

0x7959,	// (0x0001db29) main_mp4_pane_t1

0x79b5,	// (0x0001db85) main_mp4_pane_t2_ParamLimits

0x79b5,	// (0x0001db85) main_mp4_pane_t2

0x3f37,	// (0x0001a107) main_mp4_pane_t3_ParamLimits

0x3f37,	// (0x0001a107) main_mp4_pane_t3

0x7a07,	// (0x0001dbd7) main_mp4_pane_t4_ParamLimits

0x7a07,	// (0x0001dbd7) main_mp4_pane_t4

0x0003,

0xf8d5,	// (0x00025aa5) main_mp4_pane_t_ParamLimits

0xf8d5,	// (0x00025aa5) main_mp4_pane_t

0x7a4b,	// (0x0001dc1b) mp4_progress_pane_ParamLimits

0x7a4b,	// (0x0001dc1b) mp4_progress_pane

0x7a95,	// (0x0001dc65) mp4_rocker_pane_ParamLimits

0x7a95,	// (0x0001dc65) mp4_rocker_pane

0x400d,	// (0x0001a1dd) mp4_progress_pane_t1

0x4026,	// (0x0001a1f6) mp4_progress_pane_t2

0x0001,

0xf8de,	// (0x00025aae) mp4_progress_pane_t

0x403f,	// (0x0001a20f) mup_progress_pane_cp04

0x4a90,	// (0x0001ac60) mp4_rocker_pane_g1

0x7ab5,	// (0x0001dc85) aid_cell_size_keypad2_ParamLimits

0x7ab5,	// (0x0001dc85) aid_cell_size_keypad2

0x7ac5,	// (0x0001dc95) dialer2_ne_pane_ParamLimits

0x7ac5,	// (0x0001dc95) dialer2_ne_pane

0x7ad3,	// (0x0001dca3) grid_dialer2_keypad_pane_ParamLimits

0x7ad3,	// (0x0001dca3) grid_dialer2_keypad_pane

0x4af9,	// (0x0001acc9) bg_popup_call_pane_cp07_ParamLimits

0x4af9,	// (0x0001acc9) bg_popup_call_pane_cp07

0xc471,	// (0x00022641) dialer2_ne_pane_t1_ParamLimits

0xc471,	// (0x00022641) dialer2_ne_pane_t1

0x7ae3,	// (0x0001dcb3) cell_dialer2_keypad_pane_ParamLimits

0x7ae3,	// (0x0001dcb3) cell_dialer2_keypad_pane

0x405d,	// (0x0001a22d) bg_button_pane_pane_cp04_ParamLimits

0x405d,	// (0x0001a22d) bg_button_pane_pane_cp04

0xc496,	// (0x00022666) cell_dialer2_keypad_pane_g1_ParamLimits

0xc496,	// (0x00022666) cell_dialer2_keypad_pane_g1

0x9006,	// (0x0001f1d6) aid_placing_vt_set_content_ParamLimits

0x9006,	// (0x0001f1d6) aid_placing_vt_set_content

0x9022,	// (0x0001f1f2) aid_placing_vt_set_title_ParamLimits

0x9022,	// (0x0001f1f2) aid_placing_vt_set_title

0x05a2,	// (0x00016772) main_image3_pane

0x7b2c,	// (0x0001dcfc) area_side_right_pane_cp01_ParamLimits

0x7b2c,	// (0x0001dcfc) area_side_right_pane_cp01

0x7b59,	// (0x0001dd29) main_image3_pane_g1_ParamLimits

0x7b59,	// (0x0001dd29) main_image3_pane_g1

0x7b67,	// (0x0001dd37) main_image3_pane_g2_ParamLimits

0x7b67,	// (0x0001dd37) main_image3_pane_g2

0x7b80,	// (0x0001dd50) main_image3_pane_g3_ParamLimits

0x7b80,	// (0x0001dd50) main_image3_pane_g3

0x7b99,	// (0x0001dd69) main_image3_pane_g4_ParamLimits

0x7b99,	// (0x0001dd69) main_image3_pane_g4

0x0003,

0xf8ed,	// (0x00025abd) main_image3_pane_g_ParamLimits

0xf8ed,	// (0x00025abd) main_image3_pane_g

0x7bb2,	// (0x0001dd82) main_image3_pane_t1_ParamLimits

0x7bb2,	// (0x0001dd82) main_image3_pane_t1

0x7bd7,	// (0x0001dda7) main_image3_pane_t2_ParamLimits

0x7bd7,	// (0x0001dda7) main_image3_pane_t2

0x7bf6,	// (0x0001ddc6) main_image3_pane_t3_ParamLimits

0x7bf6,	// (0x0001ddc6) main_image3_pane_t3

0x0003,

0xf8f6,	// (0x00025ac6) main_image3_pane_t_ParamLimits

0xf8f6,	// (0x00025ac6) main_image3_pane_t

0x3a0f,	// (0x00019bdf) grid_sctrl_middle_pane_cp01_ParamLimits

0x3a0f,	// (0x00019bdf) grid_sctrl_middle_pane_cp01

0xc4fe,	// (0x000226ce) cell_sctrl_middle_pane_cp01_ParamLimits

0xc4fe,	// (0x000226ce) cell_sctrl_middle_pane_cp01

0xc50f,	// (0x000226df) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xc50f,	// (0x000226df) cell_sctrl_middle_pane_cp01_g1

0x05a2,	// (0x00016772) main_call4_pane

0xc51c,	// (0x000226ec) aid_size_button_call4_ParamLimits

0xc51c,	// (0x000226ec) aid_size_button_call4

0xc54c,	// (0x0002271c) call4_windows_pane_ParamLimits

0xc54c,	// (0x0002271c) call4_windows_pane

0xc566,	// (0x00022736) grid_call4_button_pane_ParamLimits

0xc566,	// (0x00022736) grid_call4_button_pane

0x409b,	// (0x0001a26b) call4_windows_conf_pane

0x40b0,	// (0x0001a280) popup_call4_audio_first_window_ParamLimits

0x40b0,	// (0x0001a280) popup_call4_audio_first_window

0x40fc,	// (0x0001a2cc) popup_call4_audio_second_window_ParamLimits

0x40fc,	// (0x0001a2cc) popup_call4_audio_second_window

0x4110,	// (0x0001a2e0) popup_call4_audio_wait_window_ParamLimits

0x4110,	// (0x0001a2e0) popup_call4_audio_wait_window

0xc58a,	// (0x0002275a) cell_call4_button_pane_ParamLimits

0xc58a,	// (0x0002275a) cell_call4_button_pane

0xc5af,	// (0x0002277f) bg_button_pane_cp09_ParamLimits

0xc5af,	// (0x0002277f) bg_button_pane_cp09

0xc5bb,	// (0x0002278b) cell_call4_button_pane_g1_ParamLimits

0xc5bb,	// (0x0002278b) cell_call4_button_pane_g1

0xc5c8,	// (0x00022798) cell_call4_button_pane_t1_ParamLimits

0xc5c8,	// (0x00022798) cell_call4_button_pane_t1

0x4158,	// (0x0001a328) popup_call4_audio_conf_window_ParamLimits

0x4158,	// (0x0001a328) popup_call4_audio_conf_window

0xbd4e,	// (0x00021f1e) mup3_progress_pane_t1_ParamLimits

0xbd65,	// (0x00021f35) mup3_progress_pane_t2_ParamLimits

0x3812,	// (0x000199e2) mup3_progress_pane_t3_ParamLimits

0xf7cf,	// (0x0002599f) mup3_progress_pane_t_ParamLimits

0x3829,	// (0x000199f9) mup_progress_pane_cp03_ParamLimits

0xc20e,	// (0x000223de) mup3_control_keys_pane_g4_copy1

0x7a79,	// (0x0001dc49) mp4_rocker2_pane_ParamLimits

0x7a79,	// (0x0001dc49) mp4_rocker2_pane

0x4174,	// (0x0001a344) mp4_rocker2_pane_g1

0x416c,	// (0x0001a33c) mp4_rocker2_pane_g2

0x7c57,	// (0x0001de27) mp4_rocker2_pane_g3

0x7c5f,	// (0x0001de2f) mp4_rocker2_pane_g4

0x7c67,	// (0x0001de37) mp4_rocker2_pane_g5

0x0004,

0xf8ff,	// (0x00025acf) mp4_rocker2_pane_g

0x05a2,	// (0x00016772) main_camera4_pane

0x05a2,	// (0x00016772) main_video4_pane

0xc3fa,	// (0x000225ca) main_video_tele_dialer_pane_t1_ParamLimits

0xc3fa,	// (0x000225ca) main_video_tele_dialer_pane_t1

0xc40c,	// (0x000225dc) main_video_tele_dialer_pane_t2_ParamLimits

0xc40c,	// (0x000225dc) main_video_tele_dialer_pane_t2

0x0001,

0xf8b9,	// (0x00025a89) main_video_tele_dialer_pane_t_ParamLimits

0xf8b9,	// (0x00025a89) main_video_tele_dialer_pane_t

0x7c87,	// (0x0001de57) cam4_autofocus_pane_ParamLimits

0x7c87,	// (0x0001de57) cam4_autofocus_pane

0x7c95,	// (0x0001de65) cam4_image_uncrop_pane_ParamLimits

0x7c95,	// (0x0001de65) cam4_image_uncrop_pane

0x7cac,	// (0x0001de7c) cam4_indicators_pane_ParamLimits

0x7cac,	// (0x0001de7c) cam4_indicators_pane

0x7cc8,	// (0x0001de98) main_camera4_pane_g1_ParamLimits

0x7cc8,	// (0x0001de98) main_camera4_pane_g1

0x7cd4,	// (0x0001dea4) main_camera4_pane_g2_ParamLimits

0x7cd4,	// (0x0001dea4) main_camera4_pane_g2

0x7cd4,	// (0x0001dea4) main_camera4_pane_g3_ParamLimits

0x7cd4,	// (0x0001dea4) main_camera4_pane_g3

0x7ce0,	// (0x0001deb0) main_camera4_pane_g4_ParamLimits

0x7ce0,	// (0x0001deb0) main_camera4_pane_g4

0x7cec,	// (0x0001debc) main_camera4_pane_g5_ParamLimits

0x7cec,	// (0x0001debc) main_camera4_pane_g5

0x0005,

0xf90a,	// (0x00025ada) main_camera4_pane_g_ParamLimits

0xf90a,	// (0x00025ada) main_camera4_pane_g

0x7d06,	// (0x0001ded6) main_camera4_pane_t1_ParamLimits

0x7d06,	// (0x0001ded6) main_camera4_pane_t1

0x7d2a,	// (0x0001defa) bg_tb_trans_pane_cp06

0x7d40,	// (0x0001df10) cam4_indicators_pane_g1

0x7d51,	// (0x0001df21) cam4_indicators_pane_g2

0x0002,

0xf925,	// (0x00025af5) cam4_indicators_pane_g

0x7d6f,	// (0x0001df3f) cam4_indicators_pane_t1

0x7d99,	// (0x0001df69) main_video4_pane_g1_ParamLimits

0x7d99,	// (0x0001df69) main_video4_pane_g1

0x7da5,	// (0x0001df75) main_video4_pane_g2_ParamLimits

0x7da5,	// (0x0001df75) main_video4_pane_g2

0x7db1,	// (0x0001df81) main_video4_pane_g3_ParamLimits

0x7db1,	// (0x0001df81) main_video4_pane_g3

0x7dbd,	// (0x0001df8d) main_video4_pane_g4_ParamLimits

0x7dbd,	// (0x0001df8d) main_video4_pane_g4

0x0004,

0xf92c,	// (0x00025afc) main_video4_pane_g_ParamLimits

0xf92c,	// (0x00025afc) main_video4_pane_g

0x7ddd,	// (0x0001dfad) vid4_indicators_pane_ParamLimits

0x7ddd,	// (0x0001dfad) vid4_indicators_pane

0x7dfb,	// (0x0001dfcb) video4_image_uncrop_cif_pane_ParamLimits

0x7dfb,	// (0x0001dfcb) video4_image_uncrop_cif_pane

0x7e0a,	// (0x0001dfda) video4_image_uncrop_nhd_pane_ParamLimits

0x7e0a,	// (0x0001dfda) video4_image_uncrop_nhd_pane

0x7c95,	// (0x0001de65) video4_image_uncrop_vga_pane_ParamLimits

0x7c95,	// (0x0001de65) video4_image_uncrop_vga_pane

0x7e17,	// (0x0001dfe7) bg_tb_trans_pane_cp07

0x7d40,	// (0x0001df10) vid4_indicators_pane_g1

0x7e2d,	// (0x0001dffd) vid4_indicators_pane_g2

0x7e3e,	// (0x0001e00e) vid4_indicators_pane_g3

0x0004,

0xf937,	// (0x00025b07) vid4_indicators_pane_g

0x7e6b,	// (0x0001e03b) vid4_indicators_pane_t1

0xc5f5,	// (0x000227c5) cam4_autofocus_pane_g1

0xc5fd,	// (0x000227cd) cam4_autofocus_pane_g2

0xc605,	// (0x000227d5) cam4_autofocus_pane_g3

0x0002,

0xf942,	// (0x00025b12) cam4_autofocus_pane_g

0xc60d,	// (0x000227dd) cam4_autofocus_pane_g3_copy1

0xc41e,	// (0x000225ee) video_down_pane_cp_t1

0xc42c,	// (0x000225fc) video_down_pane_cp_t2

0x0001,

0xf8be,	// (0x00025a8e) video_down_pane_cp_t

0x3a0f,	// (0x00019bdf) popup_vitu2_window_ParamLimits

0x3a0f,	// (0x00019bdf) popup_vitu2_window

0x7e84,	// (0x0001e054) aid_size_cell2_itu2_ParamLimits

0x7e84,	// (0x0001e054) aid_size_cell2_itu2

0x7ea6,	// (0x0001e076) aid_size_cell_itu2_ParamLimits

0x7ea6,	// (0x0001e076) aid_size_cell_itu2

0x7eea,	// (0x0001e0ba) bg_popup_window_pane_cp09_ParamLimits

0x7eea,	// (0x0001e0ba) bg_popup_window_pane_cp09

0x7ef8,	// (0x0001e0c8) field_vitu2_entry_pane_ParamLimits

0x7ef8,	// (0x0001e0c8) field_vitu2_entry_pane

0x7f18,	// (0x0001e0e8) grid_vitu2_function_pane_ParamLimits

0x7f18,	// (0x0001e0e8) grid_vitu2_function_pane

0x7f5c,	// (0x0001e12c) grid_vitu2_itu_pane_ParamLimits

0x7f5c,	// (0x0001e12c) grid_vitu2_itu_pane

0x7fd2,	// (0x0001e1a2) cell_vitu2_itu_pane_ParamLimits

0x7fd2,	// (0x0001e1a2) cell_vitu2_itu_pane

0x7fe7,	// (0x0001e1b7) cell_vitu2_function_pane_ParamLimits

0x7fe7,	// (0x0001e1b7) cell_vitu2_function_pane

0x4205,	// (0x0001a3d5) bg_popup_call_pane_cp08_ParamLimits

0x4205,	// (0x0001a3d5) bg_popup_call_pane_cp08

0x421e,	// (0x0001a3ee) field_vitu2_entry_pane_g1

0x422a,	// (0x0001a3fa) field_vitu2_entry_pane_g2

0x0002,

0xf949,	// (0x00025b19) field_vitu2_entry_pane_g

0x4244,	// (0x0001a414) field_vitu2_entry_pane_t1_ParamLimits

0x4244,	// (0x0001a414) field_vitu2_entry_pane_t1

0x4275,	// (0x0001a445) field_vitu2_entry_pane_t2_ParamLimits

0x4275,	// (0x0001a445) field_vitu2_entry_pane_t2

0x0001,

0xf950,	// (0x00025b20) field_vitu2_entry_pane_t_ParamLimits

0xf950,	// (0x00025b20) field_vitu2_entry_pane_t

0x8028,	// (0x0001e1f8) bg_button_pane_cp010_ParamLimits

0x8028,	// (0x0001e1f8) bg_button_pane_cp010

0x8036,	// (0x0001e206) cell_vitu2_itu_pane_g1

0x8054,	// (0x0001e224) cell_vitu2_itu_pane_t1_ParamLimits

0x8054,	// (0x0001e224) cell_vitu2_itu_pane_t1

0x80a6,	// (0x0001e276) cell_vitu2_itu_pane_t2_ParamLimits

0x80a6,	// (0x0001e276) cell_vitu2_itu_pane_t2

0x0002,

0xf95a,	// (0x00025b2a) cell_vitu2_itu_pane_t_ParamLimits

0xf95a,	// (0x00025b2a) cell_vitu2_itu_pane_t

0x7e17,	// (0x0001dfe7) bg_button_pane_cp011

0x8161,	// (0x0001e331) cell_vitu2_function_pane_g1

0x05a2,	// (0x00016772) main_myfav_hc_pane

0x7c38,	// (0x0001de08) popup_image3_note_pane_ParamLimits

0x7c38,	// (0x0001de08) popup_image3_note_pane

0x7c46,	// (0x0001de16) popup_image3_tool_bar_pane_ParamLimits

0x7c46,	// (0x0001de16) popup_image3_tool_bar_pane

0x8114,	// (0x0001e2e4) cell_vitu2_itu_pane_t3_ParamLimits

0x8114,	// (0x0001e2e4) cell_vitu2_itu_pane_t3

0x05a2,	// (0x00016772) bg_popup_trans_pane

0x429a,	// (0x0001a46a) grid_image3_tool_bar_pane

0x42a4,	// (0x0001a474) bg_popup_trans_pane_g1

0x13a7,	// (0x00017577) bg_popup_trans_pane_g2

0x42ac,	// (0x0001a47c) bg_popup_trans_pane_g3

0x42b4,	// (0x0001a484) bg_popup_trans_pane_g4

0x42bc,	// (0x0001a48c) bg_popup_trans_pane_g5

0x42c4,	// (0x0001a494) bg_popup_trans_pane_g6

0x42cc,	// (0x0001a49c) bg_popup_trans_pane_g7

0x42d4,	// (0x0001a4a4) bg_popup_trans_pane_g8

0x1387,	// (0x00017557) bg_popup_trans_pane_g9

0x0008,

0xf961,	// (0x00025b31) bg_popup_trans_pane_g

0x42dc,	// (0x0001a4ac) cell_image3_tool_bar_pane_ParamLimits

0x42dc,	// (0x0001a4ac) cell_image3_tool_bar_pane

0x34f8,	// (0x000196c8) cell_image3_tool_bar_pane_g1

0x05a2,	// (0x00016772) bg_popup_trans_pane_cp1

0x42f0,	// (0x0001a4c0) popup_image3_note_pane_t1

0x42fe,	// (0x0001a4ce) popup_image3_note_pane_t2

0x430c,	// (0x0001a4dc) popup_image3_note_pane_t3

0x0002,

0xf974,	// (0x00025b44) popup_image3_note_pane_t

0x431a,	// (0x0001a4ea) popup_image3_note_pane_t3_copy1

0xc615,	// (0x000227e5) bg_myfav_hc_instruction_pane_ParamLimits

0xc615,	// (0x000227e5) bg_myfav_hc_instruction_pane

0xc62d,	// (0x000227fd) cell_myfav_contact_pane_ParamLimits

0xc62d,	// (0x000227fd) cell_myfav_contact_pane

0xc647,	// (0x00022817) cell_myfav_contact_pane_cp1_ParamLimits

0xc647,	// (0x00022817) cell_myfav_contact_pane_cp1

0xc65f,	// (0x0002282f) cell_myfav_contact_pane_cp2_ParamLimits

0xc65f,	// (0x0002282f) cell_myfav_contact_pane_cp2

0xc677,	// (0x00022847) cell_myfav_contact_pane_cp3_ParamLimits

0xc677,	// (0x00022847) cell_myfav_contact_pane_cp3

0xc68e,	// (0x0002285e) cell_myfav_contact_pane_cp4_ParamLimits

0xc68e,	// (0x0002285e) cell_myfav_contact_pane_cp4

0xc6a4,	// (0x00022874) cell_myfav_contact_pane_cp5_ParamLimits

0xc6a4,	// (0x00022874) cell_myfav_contact_pane_cp5

0xc6b8,	// (0x00022888) cell_myfav_contact_pane_cp6_ParamLimits

0xc6b8,	// (0x00022888) cell_myfav_contact_pane_cp6

0xc6cc,	// (0x0002289c) cell_myfav_contact_pane_cp7_ParamLimits

0xc6cc,	// (0x0002289c) cell_myfav_contact_pane_cp7

0x4328,	// (0x0001a4f8) listscroll_gen_pane_cp05

0xc6e4,	// (0x000228b4) main_myfav_hc_pane_g1_ParamLimits

0xc6e4,	// (0x000228b4) main_myfav_hc_pane_g1

0xc6fc,	// (0x000228cc) main_myfav_hc_pane_g2_ParamLimits

0xc6fc,	// (0x000228cc) main_myfav_hc_pane_g2

0x0002,

0xf97b,	// (0x00025b4b) main_myfav_hc_pane_g_ParamLimits

0xf97b,	// (0x00025b4b) main_myfav_hc_pane_g

0xc72c,	// (0x000228fc) main_myfav_hc_pane_t1_ParamLimits

0xc72c,	// (0x000228fc) main_myfav_hc_pane_t1

0x4331,	// (0x0001a501) main_myfav_hc_pane_t2_ParamLimits

0x4331,	// (0x0001a501) main_myfav_hc_pane_t2

0x4343,	// (0x0001a513) main_myfav_hc_pane_t3_ParamLimits

0x4343,	// (0x0001a513) main_myfav_hc_pane_t3

0xc743,	// (0x00022913) main_myfav_hc_pane_t4_ParamLimits

0xc743,	// (0x00022913) main_myfav_hc_pane_t4

0x0004,

0xf982,	// (0x00025b52) main_myfav_hc_pane_t_ParamLimits

0xf982,	// (0x00025b52) main_myfav_hc_pane_t

0x34f8,	// (0x000196c8) bg_myfav_hc_instruction_pane_g1

0x4355,	// (0x0001a525) cell_myfav_contact_pane_g1_ParamLimits

0x4355,	// (0x0001a525) cell_myfav_contact_pane_g1

0x4355,	// (0x0001a525) cell_myfav_contact_pane_g2_ParamLimits

0x4355,	// (0x0001a525) cell_myfav_contact_pane_g2

0x4361,	// (0x0001a531) cell_myfav_contact_pane_g3_ParamLimits

0x4361,	// (0x0001a531) cell_myfav_contact_pane_g3

0x37fc,	// (0x000199cc) cell_myfav_contact_pane_g4_ParamLimits

0x37fc,	// (0x000199cc) cell_myfav_contact_pane_g4

0x436e,	// (0x0001a53e) cell_myfav_contact_pane_g5_ParamLimits

0x436e,	// (0x0001a53e) cell_myfav_contact_pane_g5

0x0004,

0xf98d,	// (0x00025b5d) cell_myfav_contact_pane_g_ParamLimits

0xf98d,	// (0x00025b5d) cell_myfav_contact_pane_g

0xc714,	// (0x000228e4) main_myfav_hc_pane_g3_ParamLimits

0xc714,	// (0x000228e4) main_myfav_hc_pane_g3

0x859e,	// (0x0001e76e) popup_adpt_find_window

0xc76d,	// (0x0002293d) afind_page_pane_ParamLimits

0xc76d,	// (0x0002293d) afind_page_pane

0xc77a,	// (0x0002294a) aid_size_cell_afind_ParamLimits

0xc77a,	// (0x0002294a) aid_size_cell_afind

0xc794,	// (0x00022964) bg_popup_sub_pane_cp09_ParamLimits

0xc794,	// (0x00022964) bg_popup_sub_pane_cp09

0xc7a1,	// (0x00022971) find_pane_cp01_ParamLimits

0xc7a1,	// (0x00022971) find_pane_cp01

0x437a,	// (0x0001a54a) grid_afind_control_pane_ParamLimits

0x437a,	// (0x0001a54a) grid_afind_control_pane

0xc7ae,	// (0x0002297e) grid_afind_pane_ParamLimits

0xc7ae,	// (0x0002297e) grid_afind_pane

0xc7ca,	// (0x0002299a) cell_afind_pane_ParamLimits

0xc7ca,	// (0x0002299a) cell_afind_pane

0x34f8,	// (0x000196c8) afind_page_pane_g1

0xc812,	// (0x000229e2) afind_page_pane_g2

0xc81b,	// (0x000229eb) afind_page_pane_g3

0x0002,

0xf998,	// (0x00025b68) afind_page_pane_g

0xc824,	// (0x000229f4) afind_page_pane_t1

0x438e,	// (0x0001a55e) cell_afind_grid_control_pane_ParamLimits

0x438e,	// (0x0001a55e) cell_afind_grid_control_pane

0x405d,	// (0x0001a22d) bg_button_pane_cp69_ParamLimits

0x405d,	// (0x0001a22d) bg_button_pane_cp69

0xc83b,	// (0x00022a0b) cell_afind_pane_g1_ParamLimits

0xc83b,	// (0x00022a0b) cell_afind_pane_g1

0xc848,	// (0x00022a18) cell_afind_pane_t1_ParamLimits

0xc848,	// (0x00022a18) cell_afind_pane_t1

0x10dd,	// (0x000172ad) bg_button_pane_cp72

0x439d,	// (0x0001a56d) cell_afind_grid_control_pane_g1

0xaacd,	// (0x00020c9d) aid_image_placing_area_ParamLimits

0xaacd,	// (0x00020c9d) aid_image_placing_area

0x3af2,	// (0x00019cc2) field_vitu_entry_pane_g1_ParamLimits

0x3af2,	// (0x00019cc2) field_vitu_entry_pane_g1

0x3afe,	// (0x00019cce) field_vitu_entry_pane_g2_ParamLimits

0x3afe,	// (0x00019cce) field_vitu_entry_pane_g2

0x0001,

0xf849,	// (0x00025a19) field_vitu_entry_pane_g_ParamLimits

0xf849,	// (0x00025a19) field_vitu_entry_pane_g

0xc299,	// (0x00022469) cell_vitu_itu_pane_g1_ParamLimits

0xc2db,	// (0x000224ab) cell_vitu_itu_pane_t3_ParamLimits

0xc2db,	// (0x000224ab) cell_vitu_itu_pane_t3

0x400d,	// (0x0001a1dd) mp4_progress_pane_t1_ParamLimits

0x4026,	// (0x0001a1f6) mp4_progress_pane_t2_ParamLimits

0xf8de,	// (0x00025aae) mp4_progress_pane_t_ParamLimits

0x403f,	// (0x0001a20f) mup_progress_pane_cp04_ParamLimits

0xc757,	// (0x00022927) main_myfav_hc_pane_t5_ParamLimits

0xc757,	// (0x00022927) main_myfav_hc_pane_t5

0x05c8,	// (0x00016798) aid_zoom_text_primary

0x859e,	// (0x0001e76e) popup_adpt_find_window_ParamLimits

0x0612,	// (0x000167e2) main_cam_set_pane

0x7cba,	// (0x0001de8a) cam4_zoom_pane_ParamLimits

0x7cba,	// (0x0001de8a) cam4_zoom_pane

0xc85a,	// (0x00022a2a) main_cam_set_pane_g1_ParamLimits

0xc85a,	// (0x00022a2a) main_cam_set_pane_g1

0xc868,	// (0x00022a38) main_cam_set_pane_g2_ParamLimits

0xc868,	// (0x00022a38) main_cam_set_pane_g2

0x0001,

0xf99f,	// (0x00025b6f) main_cam_set_pane_g_ParamLimits

0xf99f,	// (0x00025b6f) main_cam_set_pane_g

0xc874,	// (0x00022a44) main_cam_set_pane_t1_ParamLimits

0xc874,	// (0x00022a44) main_cam_set_pane_t1

0xc890,	// (0x00022a60) main_cset_listscroll_pane_ParamLimits

0xc890,	// (0x00022a60) main_cset_listscroll_pane

0xc8bb,	// (0x00022a8b) main_cset_slider_pane_ParamLimits

0xc8bb,	// (0x00022a8b) main_cset_slider_pane

0x43ae,	// (0x0001a57e) main_cset_list_pane_ParamLimits

0x43ae,	// (0x0001a57e) main_cset_list_pane

0x43be,	// (0x0001a58e) scroll_pane_cp028

0xc8da,	// (0x00022aaa) aid_area_touch_slider

0xc8f6,	// (0x00022ac6) cset_slider_pane

0xc920,	// (0x00022af0) main_cset_slider_pane_g1

0xc935,	// (0x00022b05) main_cset_slider_pane_g2

0x0011,

0xf9a4,	// (0x00025b74) main_cset_slider_pane_g

0x43f7,	// (0x0001a5c7) main_cset_slider_pane_t1

0xc9fd,	// (0x00022bcd) main_cset_slider_pane_t2

0xca17,	// (0x00022be7) main_cset_slider_pane_t3

0xca31,	// (0x00022c01) main_cset_slider_pane_t4

0xca4f,	// (0x00022c1f) main_cset_slider_pane_t5

0xca71,	// (0x00022c41) main_cset_slider_pane_t6

0xca88,	// (0x00022c58) main_cset_slider_pane_t7

0x000e,

0xf9c9,	// (0x00025b99) main_cset_slider_pane_t

0xcb96,	// (0x00022d66) cset_list_set_pane_ParamLimits

0xcb96,	// (0x00022d66) cset_list_set_pane

0xcbb3,	// (0x00022d83) aid_position_infowindow_above

0xcbbb,	// (0x00022d8b) aid_position_infowindow_below

0xcbc3,	// (0x00022d93) cset_list_set_pane_g1_ParamLimits

0xcbc3,	// (0x00022d93) cset_list_set_pane_g1

0x4d07,	// (0x0001aed7) cset_list_set_pane_g3_ParamLimits

0x4d07,	// (0x0001aed7) cset_list_set_pane_g3

0x0001,

0xf9e8,	// (0x00025bb8) cset_list_set_pane_g_ParamLimits

0xf9e8,	// (0x00025bb8) cset_list_set_pane_g

0x4d16,	// (0x0001aee6) cset_list_set_pane_t1_ParamLimits

0x4d16,	// (0x0001aee6) cset_list_set_pane_t1

0x0612,	// (0x000167e2) list_highlight_pane_cp021_ParamLimits

0x0612,	// (0x000167e2) list_highlight_pane_cp021

0x1caf,	// (0x00017e7f) cset_slider_pane_g1

0x1cc1,	// (0x00017e91) cset_slider_pane_g2

0x1cb8,	// (0x00017e88) cset_slider_pane_g3

0x0002,

0xf9ed,	// (0x00025bbd) cset_slider_pane_g

0x8175,	// (0x0001e345) aid_area_touch_cam4_zoom

0x817d,	// (0x0001e34d) cam4_zoom_cont_pane

0x8185,	// (0x0001e355) cam4_zoom_pane_g1

0x818d,	// (0x0001e35d) cam4_zoom_pane_g2

0x8195,	// (0x0001e365) cam4_zoom_pane_g3

0x0002,

0xf9f4,	// (0x00025bc4) cam4_zoom_pane_g

0x819d,	// (0x0001e36d) cam4_zoom_cont_pane_g1

0x81a6,	// (0x0001e376) cam4_zoom_cont_pane_g2

0x81af,	// (0x0001e37f) cam4_zoom_cont_pane_g3

0x0002,

0xf9fb,	// (0x00025bcb) cam4_zoom_cont_pane_g

0xc536,	// (0x00022706) call4_image_pane_ParamLimits

0xc536,	// (0x00022706) call4_image_pane

0x409b,	// (0x0001a26b) call4_windows_conf_pane_ParamLimits

0x40da,	// (0x0001a2aa) popup_call4_audio_in_window_ParamLimits

0x40da,	// (0x0001a2aa) popup_call4_audio_in_window

0x05a2,	// (0x00016772) bg_popup_call2_act_pane_cp02

0x4150,	// (0x0001a320) call4_list_conf_pane

0x34f8,	// (0x000196c8) call4_image_pane_g1

0x34f8,	// (0x000196c8) call4_image_pane_g2

0x0001,

0xf70f,	// (0x000258df) call4_image_pane_g

0x44d2,	// (0x0001a6a2) list_single_graphic_popup_conf4_pane_ParamLimits

0x44d2,	// (0x0001a6a2) list_single_graphic_popup_conf4_pane

0x05a2,	// (0x00016772) list_highlight_pane_cp022

0x44e5,	// (0x0001a6b5) list_single_graphic_popup_conf4_pane_g1

0x1980,	// (0x00017b50) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xfa02,	// (0x00025bd2) list_single_graphic_popup_conf4_pane_g

0x44ed,	// (0x0001a6bd) list_single_graphic_popup_conf4_pane_t1

0x9125,	// (0x0001f2f5) popup_vtel_slider_window_ParamLimits

0x9125,	// (0x0001f2f5) popup_vtel_slider_window

0x404b,	// (0x0001a21b) dialer2_ne_pane_t2_ParamLimits

0x404b,	// (0x0001a21b) dialer2_ne_pane_t2

0x0001,

0xf8e3,	// (0x00025ab3) dialer2_ne_pane_t_ParamLimits

0xf8e3,	// (0x00025ab3) dialer2_ne_pane_t

0x0612,	// (0x000167e2) bg_popup_sub_pane_cp010_ParamLimits

0x0612,	// (0x000167e2) bg_popup_sub_pane_cp010

0xcbcf,	// (0x00022d9f) popup_vtel_slider_window_g1_ParamLimits

0xcbcf,	// (0x00022d9f) popup_vtel_slider_window_g1

0xcbdb,	// (0x00022dab) popup_vtel_slider_window_g2_ParamLimits

0xcbdb,	// (0x00022dab) popup_vtel_slider_window_g2

0x0003,

0xfa07,	// (0x00025bd7) popup_vtel_slider_window_g_ParamLimits

0xfa07,	// (0x00025bd7) popup_vtel_slider_window_g

0xcc23,	// (0x00022df3) vtel_slider_pane_ParamLimits

0xcc23,	// (0x00022df3) vtel_slider_pane

0xcc32,	// (0x00022e02) vtel_slider_pane_g1_ParamLimits

0xcc32,	// (0x00022e02) vtel_slider_pane_g1

0xcc3f,	// (0x00022e0f) vtel_slider_pane_g2_ParamLimits

0xcc3f,	// (0x00022e0f) vtel_slider_pane_g2

0xcc4c,	// (0x00022e1c) vtel_slider_pane_g3_ParamLimits

0xcc4c,	// (0x00022e1c) vtel_slider_pane_g3

0xcc32,	// (0x00022e02) vtel_slider_pane_g4_ParamLimits

0xcc32,	// (0x00022e02) vtel_slider_pane_g4

0xcc59,	// (0x00022e29) vtel_slider_pane_g5_ParamLimits

0xcc59,	// (0x00022e29) vtel_slider_pane_g5

0x0004,

0xfa10,	// (0x00025be0) vtel_slider_pane_g_ParamLimits

0xfa10,	// (0x00025be0) vtel_slider_pane_g

0x05a2,	// (0x00016772) main_gallery2_pane

0x7ecc,	// (0x0001e09c) aid_size_row_itut2_dropdow_list_ParamLimits

0x7ecc,	// (0x0001e09c) aid_size_row_itut2_dropdow_list

0x7f3a,	// (0x0001e10a) grid_vitu2_function_top_pane_ParamLimits

0x7f3a,	// (0x0001e10a) grid_vitu2_function_top_pane

0x7f90,	// (0x0001e160) popup_vitu2_dropdown_list_window_ParamLimits

0x7f90,	// (0x0001e160) popup_vitu2_dropdown_list_window

0x7fb0,	// (0x0001e180) popup_vitu2_match_list_window

0x81b8,	// (0x0001e388) cell_vitu2_function_top_pane_ParamLimits

0x81b8,	// (0x0001e388) cell_vitu2_function_top_pane

0x81d8,	// (0x0001e3a8) cell_vitu2_function_top_pane_cp01_ParamLimits

0x81d8,	// (0x0001e3a8) cell_vitu2_function_top_pane_cp01

0x81f6,	// (0x0001e3c6) cell_vitu2_function_top_wide_pane_ParamLimits

0x81f6,	// (0x0001e3c6) cell_vitu2_function_top_wide_pane

0x7e17,	// (0x0001dfe7) bg_button_pane_cp012

0x8214,	// (0x0001e3e4) cell_vitu2_function_top_pane_g1

0x8223,	// (0x0001e3f3) bg_button_pane_cp013_ParamLimits

0x8223,	// (0x0001e3f3) bg_button_pane_cp013

0xcc66,	// (0x00022e36) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xcc66,	// (0x00022e36) cell_vitu2_function_top_wide_pane_g1

0x823f,	// (0x0001e40f) bg_popup_sub_pane_cp20

0x824d,	// (0x0001e41d) list_vitu2_match_list_pane

0x42a4,	// (0x0001a474) bg_popup_sub_pane_cp20_g1

0x42ac,	// (0x0001a47c) bg_popup_sub_pane_cp20_g2

0x13a7,	// (0x00017577) bg_popup_sub_pane_cp20_g3

0x42b4,	// (0x0001a484) bg_popup_sub_pane_cp20_g4

0x1387,	// (0x00017557) bg_popup_sub_pane_cp20_g5

0x4525,	// (0x0001a6f5) bg_popup_sub_pane_cp20_g6

0x42c4,	// (0x0001a494) bg_popup_sub_pane_cp20_g7

0x42cc,	// (0x0001a49c) bg_popup_sub_pane_cp20_g8

0x42d4,	// (0x0001a4a4) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa1b,	// (0x00025beb) bg_popup_sub_pane_cp20_g

0x8265,	// (0x0001e435) list_vitu2_match_list_item_pane_ParamLimits

0x8265,	// (0x0001e435) list_vitu2_match_list_item_pane

0x8277,	// (0x0001e447) list_vitu2_match_list_item_pane_t1

0x70c8,	// (0x0001d298) bg_popup_sub_pane_cp21

0x8285,	// (0x0001e455) grid_vitu2_dropdown_list_pane

0x828d,	// (0x0001e45d) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x828d,	// (0x0001e45d) cell_vitu2_dropdown_list_char_pane

0x82ae,	// (0x0001e47e) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x82ae,	// (0x0001e47e) cell_vitu2_dropdown_list_ctrl_pane

0x4577,	// (0x0001a747) cell_vitu2_dropdown_list_char_pane_g1

0x456e,	// (0x0001a73e) cell_vitu2_dropdown_list_char_pane_g2

0x4565,	// (0x0001a735) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa38,	// (0x00025c08) cell_vitu2_dropdown_list_char_pane_g

0x82da,	// (0x0001e4aa) cell_vitu2_dropdown_list_char_pane_t1

0xccad,	// (0x00022e7d) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xccad,	// (0x00022e7d) cell_vitu2_dropdown_list_ctrl_pane_g1

0xccbd,	// (0x00022e8d) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xccbd,	// (0x00022e8d) cell_vitu2_dropdown_list_ctrl_pane_g2

0xccce,	// (0x00022e9e) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xccce,	// (0x00022e9e) cell_vitu2_dropdown_list_ctrl_pane_g3

0x82e8,	// (0x0001e4b8) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x82e8,	// (0x0001e4b8) cell_vitu2_dropdown_list_ctrl_pane_g4

0x7d2a,	// (0x0001defa) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x7d2a,	// (0x0001defa) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa3f,	// (0x00025c0f) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa3f,	// (0x00025c0f) cell_vitu2_dropdown_list_ctrl_pane_g

0xccde,	// (0x00022eae) aid_size_cell_gallery2_ParamLimits

0xccde,	// (0x00022eae) aid_size_cell_gallery2

0xccec,	// (0x00022ebc) grid_gallery2_pane_ParamLimits

0xccec,	// (0x00022ebc) grid_gallery2_pane

0xccfb,	// (0x00022ecb) scroll_pane_cp029_ParamLimits

0xccfb,	// (0x00022ecb) scroll_pane_cp029

0xcd07,	// (0x00022ed7) cell_gallery2_pane_ParamLimits

0xcd07,	// (0x00022ed7) cell_gallery2_pane

0x4580,	// (0x0001a750) cell_gallery2_pane_g2

0xcd38,	// (0x00022f08) cell_gallery2_pane_g3

0x458a,	// (0x0001a75a) cell_gallery2_pane_g4

0x4592,	// (0x0001a762) cell_gallery2_pane_g5

0x1b59,	// (0x00017d29) grid_highlight_pane_cp10

0x7fb0,	// (0x0001e180) popup_vitu2_match_list_window_ParamLimits

0x7fc2,	// (0x0001e192) popup_vitu2_query_window_ParamLimits

0x7fc2,	// (0x0001e192) popup_vitu2_query_window

0x70c8,	// (0x0001d298) bg_vitu2_candi_button_pane

0x4577,	// (0x0001a747) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x456e,	// (0x0001a73e) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x4565,	// (0x0001a735) cell_vitu2_dropdown_list_char_pane_g2_copy2

0xcd40,	// (0x00022f10) bg_button_pane_cp015

0xcd4a,	// (0x00022f1a) bg_button_pane_cp016

0xcd54,	// (0x00022f24) bg_button_pane_cp017

0x0612,	// (0x000167e2) bg_popup_sub_pane_cp22

0x459a,	// (0x0001a76a) popup_vitu2_query_window_g1

0xcd7c,	// (0x00022f4c) popup_vitu2_query_window_g2

0x0001,

0xfa4a,	// (0x00025c1a) popup_vitu2_query_window_g

0xcd8a,	// (0x00022f5a) popup_vitu2_query_window_t1_ParamLimits

0xcd8a,	// (0x00022f5a) popup_vitu2_query_window_t1

0xcdb2,	// (0x00022f82) popup_vitu2_query_window_t2_ParamLimits

0xcdb2,	// (0x00022f82) popup_vitu2_query_window_t2

0xcdc4,	// (0x00022f94) popup_vitu2_query_window_t3_ParamLimits

0xcdc4,	// (0x00022f94) popup_vitu2_query_window_t3

0xcdec,	// (0x00022fbc) popup_vitu2_query_window_t4_ParamLimits

0xcdec,	// (0x00022fbc) popup_vitu2_query_window_t4

0xce00,	// (0x00022fd0) popup_vitu2_query_window_t5_ParamLimits

0xce00,	// (0x00022fd0) popup_vitu2_query_window_t5

0x0004,

0xfa4f,	// (0x00025c1f) popup_vitu2_query_window_t_ParamLimits

0xfa4f,	// (0x00025c1f) popup_vitu2_query_window_t

0x43a6,	// (0x0001a576) main_cset_text_pane

0xc8da,	// (0x00022aaa) aid_area_touch_slider_ParamLimits

0xc8f6,	// (0x00022ac6) cset_slider_pane_ParamLimits

0xc920,	// (0x00022af0) main_cset_slider_pane_g1_ParamLimits

0xc935,	// (0x00022b05) main_cset_slider_pane_g2_ParamLimits

0x43c7,	// (0x0001a597) main_cset_slider_pane_g3_ParamLimits

0x43c7,	// (0x0001a597) main_cset_slider_pane_g3

0xc94a,	// (0x00022b1a) main_cset_slider_pane_g4_ParamLimits

0xc94a,	// (0x00022b1a) main_cset_slider_pane_g4

0xc959,	// (0x00022b29) main_cset_slider_pane_g5_ParamLimits

0xc959,	// (0x00022b29) main_cset_slider_pane_g5

0xc967,	// (0x00022b37) main_cset_slider_pane_g6_ParamLimits

0xc967,	// (0x00022b37) main_cset_slider_pane_g6

0xf9a4,	// (0x00025b74) main_cset_slider_pane_g_ParamLimits

0x43f7,	// (0x0001a5c7) main_cset_slider_pane_t1_ParamLimits

0xc9fd,	// (0x00022bcd) main_cset_slider_pane_t2_ParamLimits

0xca17,	// (0x00022be7) main_cset_slider_pane_t3_ParamLimits

0xca31,	// (0x00022c01) main_cset_slider_pane_t4_ParamLimits

0xca4f,	// (0x00022c1f) main_cset_slider_pane_t5_ParamLimits

0xca71,	// (0x00022c41) main_cset_slider_pane_t6_ParamLimits

0xca88,	// (0x00022c58) main_cset_slider_pane_t7_ParamLimits

0xcab6,	// (0x00022c86) main_cset_slider_pane_t8_ParamLimits

0xcab6,	// (0x00022c86) main_cset_slider_pane_t8

0xcade,	// (0x00022cae) main_cset_slider_pane_t9_ParamLimits

0xcade,	// (0x00022cae) main_cset_slider_pane_t9

0xcb06,	// (0x00022cd6) main_cset_slider_pane_t10_ParamLimits

0xcb06,	// (0x00022cd6) main_cset_slider_pane_t10

0xcb2e,	// (0x00022cfe) main_cset_slider_pane_t11_ParamLimits

0xcb2e,	// (0x00022cfe) main_cset_slider_pane_t11

0xcb58,	// (0x00022d28) main_cset_slider_pane_t12_ParamLimits

0xcb58,	// (0x00022d28) main_cset_slider_pane_t12

0xcb77,	// (0x00022d47) main_cset_slider_pane_t13_ParamLimits

0xcb77,	// (0x00022d47) main_cset_slider_pane_t13

0xf9c9,	// (0x00025b99) main_cset_slider_pane_t_ParamLimits

0x05a2,	// (0x00016772) bg_popup_sub_pane_cp011

0x45a6,	// (0x0001a776) main_cset_text_pane_g1

0x45ae,	// (0x0001a77e) main_cset_text_pane_t1

0x45bc,	// (0x0001a78c) main_cset_text_pane_t2

0x45ca,	// (0x0001a79a) main_cset_text_pane_t3

0x45d8,	// (0x0001a7a8) main_cset_text_pane_t4

0x45e6,	// (0x0001a7b6) main_cset_text_pane_t5

0x45f4,	// (0x0001a7c4) main_cset_text_pane_t6

0x4602,	// (0x0001a7d2) main_cset_text_pane_t7

0x0006,

0xfa5a,	// (0x00025c2a) main_cset_text_pane_t

0x05a2,	// (0x00016772) main_cam4_burst_pane

0x05a2,	// (0x00016772) main_cam5_pane

0x14d6,	// (0x000176a6) bg_button_pane_cp019

0xc832,	// (0x00022a02) bg_button_pane_cp020

0x43d3,	// (0x0001a5a3) main_cset_slider_pane_g7_ParamLimits

0x43d3,	// (0x0001a5a3) main_cset_slider_pane_g7

0x43df,	// (0x0001a5af) main_cset_slider_pane_g8_ParamLimits

0x43df,	// (0x0001a5af) main_cset_slider_pane_g8

0xc97d,	// (0x00022b4d) main_cset_slider_pane_g9_ParamLimits

0xc97d,	// (0x00022b4d) main_cset_slider_pane_g9

0xc989,	// (0x00022b59) main_cset_slider_pane_g10_ParamLimits

0xc989,	// (0x00022b59) main_cset_slider_pane_g10

0xc995,	// (0x00022b65) main_cset_slider_pane_g11_ParamLimits

0xc995,	// (0x00022b65) main_cset_slider_pane_g11

0xc9a1,	// (0x00022b71) main_cset_slider_pane_g12_ParamLimits

0xc9a1,	// (0x00022b71) main_cset_slider_pane_g12

0xc9ad,	// (0x00022b7d) main_cset_slider_pane_g13_ParamLimits

0xc9ad,	// (0x00022b7d) main_cset_slider_pane_g13

0xc9bb,	// (0x00022b8b) main_cset_slider_pane_g14_ParamLimits

0xc9bb,	// (0x00022b8b) main_cset_slider_pane_g14

0xc9c9,	// (0x00022b99) main_cset_slider_pane_g15_ParamLimits

0xc9c9,	// (0x00022b99) main_cset_slider_pane_g15

0x4425,	// (0x0001a5f5) main_cset_slider_pane_t14_ParamLimits

0x4425,	// (0x0001a5f5) main_cset_slider_pane_t14

0x445e,	// (0x0001a62e) main_cset_slider_pane_t15_ParamLimits

0x445e,	// (0x0001a62e) main_cset_slider_pane_t15

0xce14,	// (0x00022fe4) aid_cam4_burst_size_cell_ParamLimits

0xce14,	// (0x00022fe4) aid_cam4_burst_size_cell

0xce30,	// (0x00023000) grid_cam4_burst_pane_ParamLimits

0xce30,	// (0x00023000) grid_cam4_burst_pane

0xce60,	// (0x00023030) linegrid_cam4_burst_pane_ParamLimits

0xce60,	// (0x00023030) linegrid_cam4_burst_pane

0xce82,	// (0x00023052) scroll_pane_cp30_ParamLimits

0xce82,	// (0x00023052) scroll_pane_cp30

0xce8e,	// (0x0002305e) cell_cam4_burst_pane_ParamLimits

0xce8e,	// (0x0002305e) cell_cam4_burst_pane

0x4610,	// (0x0001a7e0) linegrid_cam4_burst_pane_g1_ParamLimits

0x4610,	// (0x0001a7e0) linegrid_cam4_burst_pane_g1

0xceca,	// (0x0002309a) linegrid_cam4_burst_pane_g2_ParamLimits

0xceca,	// (0x0002309a) linegrid_cam4_burst_pane_g2

0x461d,	// (0x0001a7ed) linegrid_cam4_burst_pane_g3_ParamLimits

0x461d,	// (0x0001a7ed) linegrid_cam4_burst_pane_g3

0x0002,

0xfa69,	// (0x00025c39) linegrid_cam4_burst_pane_g_ParamLimits

0xfa69,	// (0x00025c39) linegrid_cam4_burst_pane_g

0xcedb,	// (0x000230ab) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xcedb,	// (0x000230ab) linegrid_cam4_burst_pane_g3_copy1

0x462a,	// (0x0001a7fa) linegrid_cam4_burst_pane_g4_ParamLimits

0x462a,	// (0x0001a7fa) linegrid_cam4_burst_pane_g4

0xcef5,	// (0x000230c5) linegrid_cam4_burst_pane_g5_ParamLimits

0xcef5,	// (0x000230c5) linegrid_cam4_burst_pane_g5

0xcf06,	// (0x000230d6) linegrid_cam4_burst_pane_g6_ParamLimits

0xcf06,	// (0x000230d6) linegrid_cam4_burst_pane_g6

0x4637,	// (0x0001a807) linegrid_cam4_burst_pane_g7_ParamLimits

0x4637,	// (0x0001a807) linegrid_cam4_burst_pane_g7

0xcf17,	// (0x000230e7) cell_cam4_burst_pane_g1

0x4650,	// (0x0001a820) main_cam5_pane_t1_ParamLimits

0x4650,	// (0x0001a820) main_cam5_pane_t1

0x4662,	// (0x0001a832) main_cam5_pane_t2_ParamLimits

0x4662,	// (0x0001a832) main_cam5_pane_t2

0x4674,	// (0x0001a844) main_cam5_pane_t3_ParamLimits

0x4674,	// (0x0001a844) main_cam5_pane_t3

0x4686,	// (0x0001a856) main_cam5_pane_t4_ParamLimits

0x4686,	// (0x0001a856) main_cam5_pane_t4

0x469c,	// (0x0001a86c) main_cam5_pane_t5_ParamLimits

0x469c,	// (0x0001a86c) main_cam5_pane_t5

0x46ae,	// (0x0001a87e) main_cam5_pane_t6_ParamLimits

0x46ae,	// (0x0001a87e) main_cam5_pane_t6

0x46c2,	// (0x0001a892) main_cam5_pane_t7_ParamLimits

0x46c2,	// (0x0001a892) main_cam5_pane_t7

0x46d4,	// (0x0001a8a4) main_cam5_pane_t8_ParamLimits

0x46d4,	// (0x0001a8a4) main_cam5_pane_t8

0x46f0,	// (0x0001a8c0) main_cam5_pane_t9_ParamLimits

0x46f0,	// (0x0001a8c0) main_cam5_pane_t9

0x4702,	// (0x0001a8d2) main_cam5_pane_t10_ParamLimits

0x4702,	// (0x0001a8d2) main_cam5_pane_t10

0x4714,	// (0x0001a8e4) main_cam5_pane_t11_ParamLimits

0x4714,	// (0x0001a8e4) main_cam5_pane_t11

0x4726,	// (0x0001a8f6) main_cam5_pane_t12_ParamLimits

0x4726,	// (0x0001a8f6) main_cam5_pane_t12

0x473b,	// (0x0001a90b) main_cam5_pane_t13_ParamLimits

0x473b,	// (0x0001a90b) main_cam5_pane_t13

0x000c,

0xfa75,	// (0x00025c45) main_cam5_pane_t_ParamLimits

0xfa75,	// (0x00025c45) main_cam5_pane_t

0x864b,	// (0x0001e81b) popup_scut_keymap_window_ParamLimits

0x864b,	// (0x0001e81b) popup_scut_keymap_window

0xcf2a,	// (0x000230fa) aid_size_cell_brow_shortcut

0x1b59,	// (0x00017d29) bg_popup_window_pane_cp010

0xcf36,	// (0x00023106) grid_scut_pane

0xcf42,	// (0x00023112) cell_scut_pane_ParamLimits

0xcf42,	// (0x00023112) cell_scut_pane

0xcf59,	// (0x00023129) cell_scut_pane_g1

0x4758,	// (0x0001a928) cell_scut_pane_t1

0x4767,	// (0x0001a937) cell_scut_pane_t2

0xcf62,	// (0x00023132) cell_scut_pane_t3

0x0002,

0xfa90,	// (0x00025c60) cell_scut_pane_t

0xb992,	// (0x00021b62) main_mup3_pane_g8_ParamLimits

0xb992,	// (0x00021b62) main_mup3_pane_g8

0x7eda,	// (0x0001e0aa) area_vitu2_query_pane_ParamLimits

0x7eda,	// (0x0001e0aa) area_vitu2_query_pane

0xcd5e,	// (0x00022f2e) input_focus_pane_cp08

0x4776,	// (0x0001a946) area_vitu2_query_pane_g1

0xcf70,	// (0x00023140) area_vitu2_query_pane_g2

0x0001,

0xfa97,	// (0x00025c67) area_vitu2_query_pane_g

0xcf81,	// (0x00023151) area_vitu2_query_pane_t1_ParamLimits

0xcf81,	// (0x00023151) area_vitu2_query_pane_t1

0xcf95,	// (0x00023165) area_vitu2_query_pane_t2_ParamLimits

0xcf95,	// (0x00023165) area_vitu2_query_pane_t2

0xcfa9,	// (0x00023179) area_vitu2_query_pane_t3_ParamLimits

0xcfa9,	// (0x00023179) area_vitu2_query_pane_t3

0x4782,	// (0x0001a952) area_vitu2_query_pane_t4_ParamLimits

0x4782,	// (0x0001a952) area_vitu2_query_pane_t4

0x47aa,	// (0x0001a97a) area_vitu2_query_pane_t5_ParamLimits

0x47aa,	// (0x0001a97a) area_vitu2_query_pane_t5

0x47d2,	// (0x0001a9a2) area_vitu2_query_pane_t6_ParamLimits

0x47d2,	// (0x0001a9a2) area_vitu2_query_pane_t6

0x0006,

0xfa9c,	// (0x00025c6c) area_vitu2_query_pane_t_ParamLimits

0xfa9c,	// (0x00025c6c) area_vitu2_query_pane_t

0xcfd1,	// (0x000231a1) bg_button_pane_cp018

0xcfdf,	// (0x000231af) bg_button_pane_cp021

0xcfeb,	// (0x000231bb) bg_button_pane_cp022

0xcffc,	// (0x000231cc) input_focus_pane_cp09

0xa18e,	// (0x0002035e) aid_size_touch_mv_arrow_left

0xa1b9,	// (0x00020389) aid_size_touch_mv_arrow_right

0xc9e1,	// (0x00022bb1) main_cset_slider_pane_g16_ParamLimits

0xc9e1,	// (0x00022bb1) main_cset_slider_pane_g16

0xc9ef,	// (0x00022bbf) main_cset_slider_pane_g17_ParamLimits

0xc9ef,	// (0x00022bbf) main_cset_slider_pane_g17

0xcf17,	// (0x000230e7) cell_cam4_burst_pane_g1_ParamLimits

0x05a2,	// (0x00016772) compa_mode_pane

0xcbe7,	// (0x00022db7) popup_vtel_slider_window_g3_ParamLimits

0xcbe7,	// (0x00022db7) popup_vtel_slider_window_g3

0xcbfb,	// (0x00022dcb) popup_vtel_slider_window_g4_ParamLimits

0xcbfb,	// (0x00022dcb) popup_vtel_slider_window_g4

0xcc0f,	// (0x00022ddf) popup_vtel_slider_window_t1_ParamLimits

0xcc0f,	// (0x00022ddf) popup_vtel_slider_window_t1

0x05a2,	// (0x00016772) main_cl_pane

0x3018,	// (0x000191e8) popup_imed_adjust2_window_ParamLimits

0x2ff0,	// (0x000191c0) bg_tb_trans_pane_cp05_ParamLimits

0x3a27,	// (0x00019bf7) popup_imed_adjust2_window_g1_ParamLimits

0x3a36,	// (0x00019c06) popup_imed_adjust2_window_g2_ParamLimits

0x3a36,	// (0x00019c06) popup_imed_adjust2_window_g2

0x3a42,	// (0x00019c12) popup_imed_adjust2_window_g3_ParamLimits

0x3a42,	// (0x00019c12) popup_imed_adjust2_window_g3

0x0002,

0xf80d,	// (0x000259dd) popup_imed_adjust2_window_g_ParamLimits

0xf80d,	// (0x000259dd) popup_imed_adjust2_window_g

0x3a4e,	// (0x00019c1e) popup_imed_adjust2_window_t1_ParamLimits

0x3a66,	// (0x00019c36) slider_imed_adjust_pane_ParamLimits

0x3a7a,	// (0x00019c4a) slider_imed_adjust_pane_g1_ParamLimits

0x3a8a,	// (0x00019c5a) slider_imed_adjust_pane_g2_ParamLimits

0x3a9a,	// (0x00019c6a) slider_imed_adjust_pane_g3_ParamLimits

0x3aab,	// (0x00019c7b) slider_imed_adjust_pane_g4_ParamLimits

0xf814,	// (0x000259e4) slider_imed_adjust_pane_g_ParamLimits

0x7c6f,	// (0x0001de3f) aid_touch_area_cam4_ParamLimits

0x7c6f,	// (0x0001de3f) aid_touch_area_cam4

0x7c7f,	// (0x0001de4f) battery_pane_cp01

0x7cfa,	// (0x0001deca) main_camera4_pane_g6_ParamLimits

0x7cfa,	// (0x0001deca) main_camera4_pane_g6

0x7d18,	// (0x0001dee8) main_camera4_pane_t2_ParamLimits

0x7d18,	// (0x0001dee8) main_camera4_pane_t2

0x0001,

0xf917,	// (0x00025ae7) main_camera4_pane_t_ParamLimits

0xf917,	// (0x00025ae7) main_camera4_pane_t

0x7d89,	// (0x0001df59) aid_touch_area_vid4_ParamLimits

0x7d89,	// (0x0001df59) aid_touch_area_vid4

0x7dc9,	// (0x0001df99) main_video4_pane_g5_ParamLimits

0x7dc9,	// (0x0001df99) main_video4_pane_g5

0x7deb,	// (0x0001dfbb) vid4_progress_pane_ParamLimits

0x7deb,	// (0x0001dfbb) vid4_progress_pane

0x43eb,	// (0x0001a5bb) main_cset_slider_pane_g18_ParamLimits

0x43eb,	// (0x0001a5bb) main_cset_slider_pane_g18

0x4644,	// (0x0001a814) cell_cam4_burst_pane_g2_ParamLimits

0x4644,	// (0x0001a814) cell_cam4_burst_pane_g2

0x0001,

0xfa70,	// (0x00025c40) cell_cam4_burst_pane_g_ParamLimits

0xfa70,	// (0x00025c40) cell_cam4_burst_pane_g

0xd00d,	// (0x000231dd) bg_cl_pane_ParamLimits

0xd00d,	// (0x000231dd) bg_cl_pane

0xd019,	// (0x000231e9) cl_header_pane_ParamLimits

0xd019,	// (0x000231e9) cl_header_pane

0xd025,	// (0x000231f5) cl_listscroll_pane_ParamLimits

0xd025,	// (0x000231f5) cl_listscroll_pane

0x481e,	// (0x0001a9ee) bg_cl_pane_g1

0x4826,	// (0x0001a9f6) bg_cl_pane_g2

0x482e,	// (0x0001a9fe) bg_cl_pane_g3

0x4836,	// (0x0001aa06) bg_cl_pane_g4

0x483e,	// (0x0001aa0e) bg_cl_pane_g5

0x4846,	// (0x0001aa16) bg_cl_pane_g6

0x484e,	// (0x0001aa1e) bg_cl_pane_g7

0x4856,	// (0x0001aa26) bg_cl_pane_g8

0x485e,	// (0x0001aa2e) bg_cl_pane_g9

0x0008,

0xfaab,	// (0x00025c7b) bg_cl_pane_g

0xd031,	// (0x00023201) aid_height_cl_leading_ParamLimits

0xd031,	// (0x00023201) aid_height_cl_leading

0xd03d,	// (0x0002320d) aid_height_cl_text_ParamLimits

0xd03d,	// (0x0002320d) aid_height_cl_text

0x3a0f,	// (0x00019bdf) bg_cl_header_pane_ParamLimits

0x3a0f,	// (0x00019bdf) bg_cl_header_pane

0xd055,	// (0x00023225) cl_header_pane_g1_ParamLimits

0xd055,	// (0x00023225) cl_header_pane_g1

0xd062,	// (0x00023232) cl_header_pane_t1_ParamLimits

0xd062,	// (0x00023232) cl_header_pane_t1

0x4866,	// (0x0001aa36) cl_list_pane

0x43be,	// (0x0001a58e) hc_scroll_pane_cp01

0x1387,	// (0x00017557) bg_cl_header_pane_g1

0x42a4,	// (0x0001a474) bg_cl_header_pane_g2

0x13a7,	// (0x00017577) bg_cl_header_pane_g3

0x42b4,	// (0x0001a484) bg_cl_header_pane_g4

0x42ac,	// (0x0001a47c) bg_cl_header_pane_g5

0x4525,	// (0x0001a6f5) bg_cl_header_pane_g6

0x42cc,	// (0x0001a49c) bg_cl_header_pane_g7

0x42d4,	// (0x0001a4a4) bg_cl_header_pane_g8

0x42c4,	// (0x0001a494) bg_cl_header_pane_g9

0x0008,

0xfabe,	// (0x00025c8e) bg_cl_header_pane_g

0xd074,	// (0x00023244) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xd074,	// (0x00023244) hc_cl_list_double_graphic_heading_pane

0xd08b,	// (0x0002325b) hc_cl_list_single_graphic_pane_ParamLimits

0xd08b,	// (0x0002325b) hc_cl_list_single_graphic_pane

0xd0ab,	// (0x0002327b) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xd0ab,	// (0x0002327b) hc_cl_list_single_graphic_pane_g1

0xd0b7,	// (0x00023287) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xd0b7,	// (0x00023287) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfad1,	// (0x00025ca1) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfad1,	// (0x00025ca1) hc_cl_list_single_graphic_pane_g

0xd0cb,	// (0x0002329b) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xd0cb,	// (0x0002329b) hc_cl_list_single_graphic_pane_t1

0xd0ab,	// (0x0002327b) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xd0ab,	// (0x0002327b) hc_cl_list_double_graphic_heading_pane_g1

0xd0e0,	// (0x000232b0) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xd0e0,	// (0x000232b0) hc_cl_list_double_graphic_heading_pane_g2

0xd0f4,	// (0x000232c4) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xd0f4,	// (0x000232c4) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfad6,	// (0x00025ca6) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfad6,	// (0x00025ca6) hc_cl_list_double_graphic_heading_pane_g

0xd108,	// (0x000232d8) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xd108,	// (0x000232d8) hc_cl_list_double_graphic_heading_pane_t1

0xd11d,	// (0x000232ed) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xd11d,	// (0x000232ed) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfadd,	// (0x00025cad) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfadd,	// (0x00025cad) hc_cl_list_double_graphic_heading_pane_t

0x830c,	// (0x0001e4dc) vid4_progress_pane_g1

0x831c,	// (0x0001e4ec) vid4_progress_pane_g2

0x1620,	// (0x000177f0) vid4_progress_pane_g3

0x7d51,	// (0x0001df21) vid4_progress_pane_g4

0x0004,

0xfae2,	// (0x00025cb2) vid4_progress_pane_g

0x832c,	// (0x0001e4fc) vid4_progress_pane_t1

0x8341,	// (0x0001e511) vid4_progress_pane_t2

0x0002,

0xfaed,	// (0x00025cbd) vid4_progress_pane_t

0x836c,	// (0x0001e53c) wait_bar_pane_cp07

0x32e9,	// (0x000194b9) blid_firmament_pane_ParamLimits

0x332c,	// (0x000194fc) popup_blid_sat_info2_window_g1

0x3350,	// (0x00019520) popup_blid_sat_info2_window_t3

0x335e,	// (0x0001952e) popup_blid_sat_info2_window_t4

0x336c,	// (0x0001953c) popup_blid_sat_info2_window_t5

0x337a,	// (0x0001954a) popup_blid_sat_info2_window_t6

0x338a,	// (0x0001955a) popup_blid_sat_info2_window_t7

0x3398,	// (0x00019568) popup_blid_sat_info2_window_t8

0x33a6,	// (0x00019576) popup_blid_sat_info2_window_t9

0x33b4,	// (0x00019584) popup_blid_sat_info2_window_t10

0x3478,	// (0x00019648) aid_firma_cardinal_ParamLimits

0x348c,	// (0x0001965c) blid_firmament_pane_t1_ParamLimits

0x34a3,	// (0x00019673) blid_firmament_pane_t2_ParamLimits

0x34ba,	// (0x0001968a) blid_firmament_pane_t3_ParamLimits

0x34d1,	// (0x000196a1) blid_firmament_pane_t4_ParamLimits

0xf706,	// (0x000258d6) blid_firmament_pane_t_ParamLimits

0x34e8,	// (0x000196b8) blid_sat_info_pane_ParamLimits

0x0612,	// (0x000167e2) main_cam_set_pane_ParamLimits

0xc0b3,	// (0x00022283) aid_size_cell_colour_35_ParamLimits

0xc0cd,	// (0x0002229d) aid_size_cell_colour_112_ParamLimits

0xc0e4,	// (0x000222b4) aid_size_cell_effect_ParamLimits

0x0612,	// (0x000167e2) bg_tb_trans_pane_cp02_ParamLimits

0x164e,	// (0x0001781e) heading_imed_pane_ParamLimits

0xc0fe,	// (0x000222ce) listscroll_imed_pane_ParamLimits

0x2622,	// (0x000187f2) popup_call2_audio_first_window_g5_ParamLimits

0x2622,	// (0x000187f2) popup_call2_audio_first_window_g5

0x7afa,	// (0x0001dcca) aid_size_touch_image3_arrow_left_ParamLimits

0x7afa,	// (0x0001dcca) aid_size_touch_image3_arrow_left

0x7b10,	// (0x0001dce0) aid_size_touch_image3_arrow_right_ParamLimits

0x7b10,	// (0x0001dce0) aid_size_touch_image3_arrow_right

0x8357,	// (0x0001e527) vid4_progress_pane_t3

0xc3a4,	// (0x00022574) main_hwr_training_symbol_option_pane_ParamLimits

0xc3a4,	// (0x00022574) main_hwr_training_symbol_option_pane

0x3d14,	// (0x00019ee4) popup_hwr_training_preview_window_ParamLimits

0x3d14,	// (0x00019ee4) popup_hwr_training_preview_window

0x781a,	// (0x0001d9ea) hwr_training_navi_pane_g5_ParamLimits

0x781a,	// (0x0001d9ea) hwr_training_navi_pane_g5

0x4292,	// (0x0001a462) popup_char_count_window

0x823f,	// (0x0001e40f) bg_popup_sub_pane_cp20_ParamLimits

0x824d,	// (0x0001e41d) list_vitu2_match_list_pane_ParamLimits

0x8259,	// (0x0001e429) vitu2_page_scroll_pane_ParamLimits

0x8259,	// (0x0001e429) vitu2_page_scroll_pane

0x494d,	// (0x0001ab1d) list_single_hwr_training_symbol_option_pane_ParamLimits

0x494d,	// (0x0001ab1d) list_single_hwr_training_symbol_option_pane

0x4960,	// (0x0001ab30) list_single_hwr_training_symbol_option_pane_g1

0x4968,	// (0x0001ab38) list_single_hwr_training_symbol_option_pane_t1

0x4976,	// (0x0001ab46) bg_button_pane_cp023

0x497f,	// (0x0001ab4f) bg_button_pane_cp024

0xd132,	// (0x00023302) vitu2_page_scroll_pane_g1

0xd13a,	// (0x0002330a) vitu2_page_scroll_pane_g2

0x0001,

0xfaf4,	// (0x00025cc4) vitu2_page_scroll_pane_g

0xd142,	// (0x00023312) vitu2_page_scroll_pane_t1

0x3205,	// (0x000193d5) popup_char_count_window_g1

0x49b2,	// (0x0001ab82) popup_char_count_window_g2

0x49bb,	// (0x0001ab8b) popup_char_count_window_g3

0x0002,

0xfaf9,	// (0x00025cc9) popup_char_count_window_g

0x49c4,	// (0x0001ab94) popup_char_count_window_t1

0x05a2,	// (0x00016772) main_vded2_pane

0x3a05,	// (0x00019bd5) aid_size_cell_imed_line

0x3a1d,	// (0x00019bed) grid_imed_line_width_pane

0x7e4f,	// (0x0001e01f) vid4_indicators_pane_g4

0x49d2,	// (0x0001aba2) cell_imed_line_width_pane_ParamLimits

0x49d2,	// (0x0001aba2) cell_imed_line_width_pane

0x49e6,	// (0x0001abb6) cell_imed_line_width_pane_g1

0x49ef,	// (0x0001abbf) cell_imed_line_width_pane_g2

0x0001,

0xfb00,	// (0x00025cd0) cell_imed_line_width_pane_g

0xd151,	// (0x00023321) main_vded2_pane_g1_ParamLimits

0xd151,	// (0x00023321) main_vded2_pane_g1

0xd15e,	// (0x0002332e) main_vded2_pane_g2_ParamLimits

0xd15e,	// (0x0002332e) main_vded2_pane_g2

0x0001,

0xfb05,	// (0x00025cd5) main_vded2_pane_g_ParamLimits

0xfb05,	// (0x00025cd5) main_vded2_pane_g

0xd16c,	// (0x0002333c) vded2_slider_pane_ParamLimits

0xd16c,	// (0x0002333c) vded2_slider_pane

0xd179,	// (0x00023349) aid_size_touch_vded2_end

0xd183,	// (0x00023353) aid_size_touch_vded2_playhead

0x49f7,	// (0x0001abc7) aid_size_touch_vded2_start

0x49ff,	// (0x0001abcf) vded2_slider_bg_pane

0x4a08,	// (0x0001abd8) vded2_slider_pane_g1

0x4a11,	// (0x0001abe1) vded2_slider_pane_g2

0xd18b,	// (0x0002335b) vded2_slider_pane_g3

0x0002,

0xfb0a,	// (0x00025cda) vded2_slider_pane_g

0x4a19,	// (0x0001abe9) vded2_slider_bg_pane_g1

0x4a22,	// (0x0001abf2) vded2_slider_bg_pane_g2

0x4a2b,	// (0x0001abfb) vded2_slider_bg_pane_g3

0x0002,

0xfb11,	// (0x00025ce1) vded2_slider_bg_pane_g

0xa82a,	// (0x000209fa) aid_postcard_touch_down_pane_ParamLimits

0xa82a,	// (0x000209fa) aid_postcard_touch_down_pane

0xa83a,	// (0x00020a0a) aid_postcard_touch_up_pane_ParamLimits

0xa83a,	// (0x00020a0a) aid_postcard_touch_up_pane

0x05a2,	// (0x00016772) main_blid2_pane

0x2ffe,	// (0x000191ce) popup_blid2_search_window

0x05a2,	// (0x00016772) blid2_gps_pane

0x05a2,	// (0x00016772) blid2_navig_pane

0x05a2,	// (0x00016772) blid2_search_pane

0x05a2,	// (0x00016772) blid2_tripm_pane

0xd194,	// (0x00023364) blid2_search_pane_g1_ParamLimits

0xd194,	// (0x00023364) blid2_search_pane_g1

0xd1a4,	// (0x00023374) blid2_search_pane_t1_ParamLimits

0xd1a4,	// (0x00023374) blid2_search_pane_t1

0xd1b6,	// (0x00023386) aid_size_cell_blid2_gps_ParamLimits

0xd1b6,	// (0x00023386) aid_size_cell_blid2_gps

0xd1c6,	// (0x00023396) blid2_gps_pane_g1_ParamLimits

0xd1c6,	// (0x00023396) blid2_gps_pane_g1

0xd1d2,	// (0x000233a2) grid_blid2_satellite_pane_ParamLimits

0xd1d2,	// (0x000233a2) grid_blid2_satellite_pane

0xd1e2,	// (0x000233b2) blid2_navig_pane_g1_ParamLimits

0xd1e2,	// (0x000233b2) blid2_navig_pane_g1

0xd1ee,	// (0x000233be) blid2_navig_pane_t1_ParamLimits

0xd1ee,	// (0x000233be) blid2_navig_pane_t1

0xd200,	// (0x000233d0) blid2_navig_pane_t2_ParamLimits

0xd200,	// (0x000233d0) blid2_navig_pane_t2

0x0001,

0xfb18,	// (0x00025ce8) blid2_navig_pane_t_ParamLimits

0xfb18,	// (0x00025ce8) blid2_navig_pane_t

0xd212,	// (0x000233e2) blid2_navig_ring_pane_ParamLimits

0xd212,	// (0x000233e2) blid2_navig_ring_pane

0xd222,	// (0x000233f2) blid2_speed_pane_ParamLimits

0xd222,	// (0x000233f2) blid2_speed_pane

0xd22e,	// (0x000233fe) blid2_tripm_pane_g1_ParamLimits

0xd22e,	// (0x000233fe) blid2_tripm_pane_g1

0xd23e,	// (0x0002340e) blid2_tripm_pane_g2_ParamLimits

0xd23e,	// (0x0002340e) blid2_tripm_pane_g2

0xd24a,	// (0x0002341a) blid2_tripm_pane_g3_ParamLimits

0xd24a,	// (0x0002341a) blid2_tripm_pane_g3

0xd256,	// (0x00023426) blid2_tripm_pane_g4_ParamLimits

0xd256,	// (0x00023426) blid2_tripm_pane_g4

0xd262,	// (0x00023432) blid2_tripm_pane_g5_ParamLimits

0xd262,	// (0x00023432) blid2_tripm_pane_g5

0x0005,

0xfb1d,	// (0x00025ced) blid2_tripm_pane_g_ParamLimits

0xfb1d,	// (0x00025ced) blid2_tripm_pane_g

0xd27e,	// (0x0002344e) blid2_tripm_pane_t1_ParamLimits

0xd27e,	// (0x0002344e) blid2_tripm_pane_t1

0xd292,	// (0x00023462) blid2_tripm_pane_t2_ParamLimits

0xd292,	// (0x00023462) blid2_tripm_pane_t2

0xd2a6,	// (0x00023476) blid2_tripm_pane_t3_ParamLimits

0xd2a6,	// (0x00023476) blid2_tripm_pane_t3

0x0003,

0xfb2a,	// (0x00025cfa) blid2_tripm_pane_t_ParamLimits

0xfb2a,	// (0x00025cfa) blid2_tripm_pane_t

0xd2d8,	// (0x000234a8) cell_blid2_satellite_pane_ParamLimits

0xd2d8,	// (0x000234a8) cell_blid2_satellite_pane

0xd2f2,	// (0x000234c2) cell_blid2_satellite_pane_g1

0x4a34,	// (0x0001ac04) cell_blid2_satellite_pane_t1

0x34f8,	// (0x000196c8) blid2_speed_pane_g1

0x4a42,	// (0x0001ac12) blid2_speed_pane_t1

0x4a50,	// (0x0001ac20) blid2_speed_pane_t2

0x0001,

0xfb33,	// (0x00025d03) blid2_speed_pane_t

0x34f8,	// (0x000196c8) blid2_navig_ring_pane_g1

0xd2fb,	// (0x000234cb) blid2_navig_ring_pane_g2

0xd303,	// (0x000234d3) blid2_navig_ring_pane_g3

0xd30b,	// (0x000234db) blid2_navig_ring_pane_g4

0xd313,	// (0x000234e3) blid2_navig_ring_pane_g5

0x0004,

0xfb38,	// (0x00025d08) blid2_navig_ring_pane_g

0x05a2,	// (0x00016772) bg_popup_window_pane_cp011

0x4a5e,	// (0x0001ac2e) popup_blid2_search_window_g1

0x4a66,	// (0x0001ac36) popup_blid2_search_window_t1

0x4a74,	// (0x0001ac44) popup_blid2_search_window_t2

0x0001,

0xfb43,	// (0x00025d13) popup_blid2_search_window_t

0x1296,	// (0x00017466) main_browser_pane_g1

0x0dbd,	// (0x00016f8d) main_browser_pane_ParamLimits

0x7e17,	// (0x0001dfe7) bg_button_pane_cp011_ParamLimits

0x8161,	// (0x0001e331) cell_vitu2_function_pane_g1_ParamLimits

0x0612,	// (0x000167e2) bg_popup_sub_pane_cp22_ParamLimits

0xcd5e,	// (0x00022f2e) input_focus_pane_cp08_ParamLimits

0xcd6b,	// (0x00022f3b) popup_vitu2_query_button_pane_ParamLimits

0xcd6b,	// (0x00022f3b) popup_vitu2_query_button_pane

0xcd40,	// (0x00022f10) popup_vitu2_query_input_button_pane

0x459a,	// (0x0001a76a) popup_vitu2_query_window_g1_ParamLimits

0xcd7c,	// (0x00022f4c) popup_vitu2_query_window_g2_ParamLimits

0xfa4a,	// (0x00025c1a) popup_vitu2_query_window_g_ParamLimits

0x05a2,	// (0x00016772) bg_button_pane_cp026

0xd31b,	// (0x000234eb) popup_vitu2_query_input_button_pane_g1

0x05a2,	// (0x00016772) bg_button_pane_cp025

0x4a82,	// (0x0001ac52) popup_vitu2_query_button_pane_t1

0xb69f,	// (0x0002186f) main_mp3_pane_t6

0xb6af,	// (0x0002187f) popup_slider_window_cp01

0x7d38,	// (0x0001df08) cam4_battery_pane

0x7e25,	// (0x0001dff5) cam4_battery_pane_cp02

0x8304,	// (0x0001e4d4) cam4_battery_pane_cp01

0x8304,	// (0x0001e4d4) cam4_battery_pane_cp03

0x4a90,	// (0x0001ac60) cam4_battery_pane_g1

0x34f8,	// (0x000196c8) cam4_battery_pane_g2

0x0001,

0xfb48,	// (0x00025d18) cam4_battery_pane_g

0x33c2,	// (0x00019592) popup_blid_sat_info2_window_t11

0xa18e,	// (0x0002035e) aid_size_touch_mv_arrow_left_ParamLimits

0xa1b9,	// (0x00020389) aid_size_touch_mv_arrow_right_ParamLimits

0x1ab9,	// (0x00017c89) navi_pane_g1_ParamLimits

0xa1e2,	// (0x000203b2) navi_pane_g2_ParamLimits

0xa210,	// (0x000203e0) navi_pane_g3_ParamLimits

0xf418,	// (0x000255e8) navi_pane_g_ParamLimits

0xa26a,	// (0x0002043a) navi_pane_mv_t1_ParamLimits

0xc10a,	// (0x000222da) grid_imed_effect_pane_ParamLimits

0x11df,	// (0x000173af) aid_placing_vt_slider_lsc

0x11e7,	// (0x000173b7) aid_placing_vt_slider_prt

0x0612,	// (0x000167e2) bg_tb_trans_pane_cp01_ParamLimits

0x367f,	// (0x0001984f) popup_image_details_window_g1_ParamLimits

0x3692,	// (0x00019862) popup_image_details_window_g2_ParamLimits

0x36a7,	// (0x00019877) popup_image_details_window_g3_ParamLimits

0x36a7,	// (0x00019877) popup_image_details_window_g3

0xf74b,	// (0x0002591b) popup_image_details_window_g_ParamLimits

0x36bb,	// (0x0001988b) popup_image_details_window_t1_ParamLimits

0x36cd,	// (0x0001989d) popup_image_details_window_t2_ParamLimits

0x36e6,	// (0x000198b6) popup_image_details_window_t3_ParamLimits

0x36fa,	// (0x000198ca) popup_image_details_window_t4_ParamLimits

0x3715,	// (0x000198e5) popup_image_details_window_t5_ParamLimits

0xf752,	// (0x00025922) popup_image_details_window_t_ParamLimits

0xd049,	// (0x00023219) cl_header_name_pane_ParamLimits

0xd049,	// (0x00023219) cl_header_name_pane

0xd323,	// (0x000234f3) cl_header_name_pane_t1_ParamLimits

0xd323,	// (0x000234f3) cl_header_name_pane_t1

0xd33a,	// (0x0002350a) cl_header_name_pane_t2_ParamLimits

0xd33a,	// (0x0002350a) cl_header_name_pane_t2

0xd364,	// (0x00023534) cl_header_name_pane_t3_ParamLimits

0xd364,	// (0x00023534) cl_header_name_pane_t3

0x0002,

0xfb4d,	// (0x00025d1d) cl_header_name_pane_t_ParamLimits

0xfb4d,	// (0x00025d1d) cl_header_name_pane_t

0xa23b,	// (0x0002040b) navi_pane_mv_g2_ParamLimits

0x421e,	// (0x0001a3ee) field_vitu2_entry_pane_g1_ParamLimits

0x422a,	// (0x0001a3fa) field_vitu2_entry_pane_g2_ParamLimits

0x4236,	// (0x0001a406) field_vitu2_entry_pane_g3_ParamLimits

0x4236,	// (0x0001a406) field_vitu2_entry_pane_g3

0xf949,	// (0x00025b19) field_vitu2_entry_pane_g_ParamLimits

0x8036,	// (0x0001e206) cell_vitu2_itu_pane_g1_ParamLimits

0x8046,	// (0x0001e216) cell_vitu2_itu_pane_g2_ParamLimits

0x8046,	// (0x0001e216) cell_vitu2_itu_pane_g2

0x0001,

0xf955,	// (0x00025b25) cell_vitu2_itu_pane_g_ParamLimits

0xf955,	// (0x00025b25) cell_vitu2_itu_pane_g

0x7e17,	// (0x0001dfe7) bg_vkb2_func_pane_cp05_ParamLimits

0x7e17,	// (0x0001dfe7) bg_vkb2_func_pane_cp05

0x7e17,	// (0x0001dfe7) bg_vkb2_func_pane_cp03

0x7e17,	// (0x0001dfe7) bg_vkb2_func_pane_cp04

0x7e17,	// (0x0001dfe7) bg_vkb2_func_pane_cp10_ParamLimits

0x7e17,	// (0x0001dfe7) bg_vkb2_func_pane_cp10

0xcfeb,	// (0x000231bb) bg_vkb2_func_pane_cp08

0xcfd1,	// (0x000231a1) bg_vkb2_func_pane_cp06

0xcfdf,	// (0x000231af) bg_vkb2_func_pane_cp07

0x4988,	// (0x0001ab58) bg_vkb2_func_pane_cp11_ParamLimits

0x4988,	// (0x0001ab58) bg_vkb2_func_pane_cp11

0x499d,	// (0x0001ab6d) bg_vkb2_func_pane_cp12_ParamLimits

0x499d,	// (0x0001ab6d) bg_vkb2_func_pane_cp12

0x05a2,	// (0x00016772) bg_vkb2_func_pane_cp09

0x42a4,	// (0x0001a474) bg_vkb2_func_pane_g1

0x13a7,	// (0x00017577) bg_vkb2_func_pane_g2

0x42ac,	// (0x0001a47c) bg_vkb2_func_pane_g3

0x42b4,	// (0x0001a484) bg_vkb2_func_pane_g4

0x4525,	// (0x0001a6f5) bg_vkb2_func_pane_g5

0x42cc,	// (0x0001a49c) bg_vkb2_func_pane_g6

0x42d4,	// (0x0001a4a4) bg_vkb2_func_pane_g7

0x42c4,	// (0x0001a494) bg_vkb2_func_pane_g8

0x1387,	// (0x00017557) bg_vkb2_func_pane_g9

0x0008,

0xfb54,	// (0x00025d24) bg_vkb2_func_pane_g

0xd270,	// (0x00023440) blid2_tripm_pane_g6_ParamLimits

0xd270,	// (0x00023440) blid2_tripm_pane_g6

0x4005,	// (0x0001a1d5) mp4_progress_pane_g1

0xd2cc,	// (0x0002349c) blid2_tripm_values_pane_ParamLimits

0xd2cc,	// (0x0002349c) blid2_tripm_values_pane

0xd389,	// (0x00023559) blid2_tripm_values_pane_t1

0xd397,	// (0x00023567) blid2_tripm_values_pane_t2

0xd3a5,	// (0x00023575) blid2_tripm_values_pane_t3

0xd3b3,	// (0x00023583) blid2_tripm_values_pane_t4

0xd3c1,	// (0x00023591) blid2_tripm_values_pane_t5

0xd3cf,	// (0x0002359f) blid2_tripm_values_pane_t6

0xd3dd,	// (0x000235ad) blid2_tripm_values_pane_t7

0xd3eb,	// (0x000235bb) blid2_tripm_values_pane_t8

0xd3f9,	// (0x000235c9) blid2_tripm_values_pane_t9

0x0008,

0xfb67,	// (0x00025d37) blid2_tripm_values_pane_t

0x9055,	// (0x0001f225) call_video_pane_t1_ParamLimits

0x906e,	// (0x0001f23e) call_video_pane_t2_ParamLimits

0xf2a1,	// (0x00025471) call_video_pane_t_ParamLimits

0xa793,	// (0x00020963) msg_header_pane_g1_ParamLimits

0x1cf4,	// (0x00017ec4) msg_header_pane_g2_ParamLimits

0x1cf4,	// (0x00017ec4) msg_header_pane_g2

0x0001,

0xf4bb,	// (0x0002568b) msg_header_pane_g_ParamLimits

0xf4bb,	// (0x0002568b) msg_header_pane_g

0x0dbd,	// (0x00016f8d) main_clock2_pane_ParamLimits

0xbf07,	// (0x000220d7) grid_clock2_toolbar_pane_ParamLimits

0xbf07,	// (0x000220d7) grid_clock2_toolbar_pane

0xbf07,	// (0x000220d7) listscroll_clock2_pane_ParamLimits

0xbf07,	// (0x000220d7) listscroll_clock2_pane

0xbfb5,	// (0x00022185) main_clock2_pane_t3_ParamLimits

0xbfb5,	// (0x00022185) main_clock2_pane_t3

0xbfc7,	// (0x00022197) main_clock2_pane_t4_ParamLimits

0xbfc7,	// (0x00022197) main_clock2_pane_t4

0x4a9a,	// (0x0001ac6a) cell_clock2_toolbar_pane

0x4aa2,	// (0x0001ac72) cell_clock2_toolbar_pane_cp01

0x4aa2,	// (0x0001ac72) cell_clock2_toolbar_pane_cp02

0x4aaa,	// (0x0001ac7a) cell_clock2_toolbar_pane_cp03

0x4ab2,	// (0x0001ac82) list_clock2_pane

0x1a0c,	// (0x00017bdc) scroll_pane_cp10

0x4aba,	// (0x0001ac8a) list_single_clock2_pane_ParamLimits

0x4aba,	// (0x0001ac8a) list_single_clock2_pane

0x1b59,	// (0x00017d29) list_highlight_pane_cp08

0x4ac7,	// (0x0001ac97) list_single_clock2_pane_t1

0x4ad5,	// (0x0001aca5) list_single_clock2_pane_t2

0x0001,

0xfb7a,	// (0x00025d4a) list_single_clock2_pane_t

0x05a2,	// (0x00016772) bg_button_pane_cp10

0x4ae3,	// (0x0001acb3) cell_clock2_toolbar_pane_g1

0x741a,	// (0x0001d5ea) aid_main_viewer_pane_g1_ParamLimits

0x741a,	// (0x0001d5ea) aid_main_viewer_pane_g1

0x7426,	// (0x0001d5f6) aid_main_viewer_pane_g2_ParamLimits

0x7426,	// (0x0001d5f6) aid_main_viewer_pane_g2

0xa7e6,	// (0x000209b6) aid_main_viewer_pane_g3_ParamLimits

0xa7e6,	// (0x000209b6) aid_main_viewer_pane_g3

0xa7f7,	// (0x000209c7) aid_main_viewer_pane_g4_ParamLimits

0xa7f7,	// (0x000209c7) aid_main_viewer_pane_g4

0x0003,

0xf4cc,	// (0x0002569c) aid_main_viewer_pane_g_ParamLimits

0xf4cc,	// (0x0002569c) aid_main_viewer_pane_g

0xaf4d,	// (0x0002111d) main_calc_pane_ParamLimits

0xaf5a,	// (0x0002112a) main_dialer2_pane_ParamLimits

0x05a2,	// (0x00016772) main_cam6_pane

0x05a2,	// (0x00016772) main_vid6_pane

0xbf13,	// (0x000220e3) listscroll_gen_pane_cp06_ParamLimits

0xbf13,	// (0x000220e3) listscroll_gen_pane_cp06

0xbfd9,	// (0x000221a9) main_clock2_pane_t5_ParamLimits

0xbfd9,	// (0x000221a9) main_clock2_pane_t5

0xc028,	// (0x000221f8) aid_call2_pane_cp10_ParamLimits

0xc03a,	// (0x0002220a) aid_call_pane_cp10_ParamLimits

0x1a8e,	// (0x00017c5e) popup_clock_analogue_window_cp10_g1_ParamLimits

0x1a8e,	// (0x00017c5e) popup_clock_analogue_window_cp10_g2_ParamLimits

0xc04c,	// (0x0002221c) popup_clock_analogue_window_cp10_g3_ParamLimits

0xc04c,	// (0x0002221c) popup_clock_analogue_window_cp10_g4_ParamLimits

0x1a8e,	// (0x00017c5e) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf802,	// (0x000259d2) popup_clock_analogue_window_cp10_g_ParamLimits

0xc062,	// (0x00022232) popup_clock_analogue_window_cp10_t1_ParamLimits

0xc4ab,	// (0x0002267b) cell_dialer2_keypad_pane_g2_ParamLimits

0xc4ab,	// (0x0002267b) cell_dialer2_keypad_pane_g2

0x0001,

0xf8e8,	// (0x00025ab8) cell_dialer2_keypad_pane_g_ParamLimits

0xf8e8,	// (0x00025ab8) cell_dialer2_keypad_pane_g

0xc4c7,	// (0x00022697) cell_dialer2_keypad_pane_t1

0xc8c7,	// (0x00022a97) main_cset_text2_pane_ParamLimits

0xc8c7,	// (0x00022a97) main_cset_text2_pane

0x4776,	// (0x0001a946) area_vitu2_query_pane_g1_ParamLimits

0xcf70,	// (0x00023140) area_vitu2_query_pane_g2_ParamLimits

0xfa97,	// (0x00025c67) area_vitu2_query_pane_g_ParamLimits

0x47fa,	// (0x0001a9ca) area_vitu2_query_pane_t7_ParamLimits

0x47fa,	// (0x0001a9ca) area_vitu2_query_pane_t7

0xcfd1,	// (0x000231a1) bg_button_pane_cp018_ParamLimits

0xcfdf,	// (0x000231af) bg_button_pane_cp021_ParamLimits

0xcfeb,	// (0x000231bb) bg_button_pane_cp022_ParamLimits

0xcfeb,	// (0x000231bb) bg_vkb2_func_pane_cp08_ParamLimits

0xcfd1,	// (0x000231a1) bg_vkb2_func_pane_cp06_ParamLimits

0xcfdf,	// (0x000231af) bg_vkb2_func_pane_cp07_ParamLimits

0xcffc,	// (0x000231cc) input_focus_pane_cp09_ParamLimits

0x837c,	// (0x0001e54c) cam6_autofocus_pane_ParamLimits

0x837c,	// (0x0001e54c) cam6_autofocus_pane

0x839e,	// (0x0001e56e) cam6_image_uncrop_pane_ParamLimits

0x839e,	// (0x0001e56e) cam6_image_uncrop_pane

0x83cb,	// (0x0001e59b) cam6_indi_pane_ParamLimits

0x83cb,	// (0x0001e59b) cam6_indi_pane

0x83e5,	// (0x0001e5b5) cam6_mode_pane_ParamLimits

0x83e5,	// (0x0001e5b5) cam6_mode_pane

0x83f9,	// (0x0001e5c9) cam6_timer_pane_ParamLimits

0x83f9,	// (0x0001e5c9) cam6_timer_pane

0x8405,	// (0x0001e5d5) cam6_zoom_pane_ParamLimits

0x8405,	// (0x0001e5d5) cam6_zoom_pane

0xd407,	// (0x000235d7) cam6_mode_pane_g1_ParamLimits

0xd407,	// (0x000235d7) cam6_mode_pane_g1

0xd413,	// (0x000235e3) cam6_mode_pane_g2_ParamLimits

0xd413,	// (0x000235e3) cam6_mode_pane_g2

0xd41f,	// (0x000235ef) cam6_mode_pane_g3_ParamLimits

0xd41f,	// (0x000235ef) cam6_mode_pane_g3

0xd42b,	// (0x000235fb) cam6_mode_pane_g4_ParamLimits

0xd42b,	// (0x000235fb) cam6_mode_pane_g4

0x0003,

0xfb7f,	// (0x00025d4f) cam6_mode_pane_g_ParamLimits

0xfb7f,	// (0x00025d4f) cam6_mode_pane_g

0x4af9,	// (0x0001acc9) bg_tb_trans_pane_cp08_ParamLimits

0x4af9,	// (0x0001acc9) bg_tb_trans_pane_cp08

0x4b07,	// (0x0001acd7) cam6_battery_pane_ParamLimits

0x4b07,	// (0x0001acd7) cam6_battery_pane

0x4b1d,	// (0x0001aced) cam6_indi_pane_g1_ParamLimits

0x4b1d,	// (0x0001aced) cam6_indi_pane_g1

0x4b2f,	// (0x0001acff) cam6_indi_pane_g2_ParamLimits

0x4b2f,	// (0x0001acff) cam6_indi_pane_g2

0x4b41,	// (0x0001ad11) cam6_indi_pane_g3_ParamLimits

0x4b41,	// (0x0001ad11) cam6_indi_pane_g3

0x0002,

0xfb88,	// (0x00025d58) cam6_indi_pane_g_ParamLimits

0xfb88,	// (0x00025d58) cam6_indi_pane_g

0x4b53,	// (0x0001ad23) cam6_indi_pane_t1_ParamLimits

0x4b53,	// (0x0001ad23) cam6_indi_pane_t1

0xc5fd,	// (0x000227cd) cam6_autofocus_pane_g1

0xc5f5,	// (0x000227c5) cam6_autofocus_pane_g2

0xc60d,	// (0x000227dd) cam6_autofocus_pane_g3

0xc605,	// (0x000227d5) cam6_autofocus_pane_g4

0x0003,

0xfb8f,	// (0x00025d5f) cam6_autofocus_pane_g

0x4b79,	// (0x0001ad49) cam6_timer_pane_g1

0x4b81,	// (0x0001ad51) cam6_timer_pane_t1

0x4b8f,	// (0x0001ad5f) cam6_zoom_cont_pane

0x4b97,	// (0x0001ad67) cam6_zoom_pane_g1

0x4b9f,	// (0x0001ad6f) cam6_zoom_pane_g2

0xd437,	// (0x00023607) cam6_zoom_pane_g3

0x0002,

0xfb98,	// (0x00025d68) cam6_zoom_pane_g

0x34f8,	// (0x000196c8) cam6_battery_pane_g1

0x34f8,	// (0x000196c8) cam6_battery_pane_g2

0x0001,

0xf70f,	// (0x000258df) cam6_battery_pane_g

0x4ba7,	// (0x0001ad77) cam6_zoom_cont_pane_g1

0x4bb0,	// (0x0001ad80) cam6_zoom_cont_pane_g2

0x4bb9,	// (0x0001ad89) cam6_zoom_cont_pane_g3

0x0002,

0xfb9f,	// (0x00025d6f) cam6_zoom_cont_pane_g

0xd451,	// (0x00023621) cam6_mode_pane_cp_ParamLimits

0xd451,	// (0x00023621) cam6_mode_pane_cp

0xd465,	// (0x00023635) cam6_zoom_pane_cp_ParamLimits

0xd465,	// (0x00023635) cam6_zoom_pane_cp

0xd47d,	// (0x0002364d) vid6_image_uncrop_cif_pane_ParamLimits

0xd47d,	// (0x0002364d) vid6_image_uncrop_cif_pane

0xd4a9,	// (0x00023679) vid6_image_uncrop_nhd_pane_ParamLimits

0xd4a9,	// (0x00023679) vid6_image_uncrop_nhd_pane

0xd4c6,	// (0x00023696) vid6_image_uncrop_vga_pane_ParamLimits

0xd4c6,	// (0x00023696) vid6_image_uncrop_vga_pane

0xd4e5,	// (0x000236b5) vid6_image_uncrop_wvga_pane_ParamLimits

0xd4e5,	// (0x000236b5) vid6_image_uncrop_wvga_pane

0xd502,	// (0x000236d2) vid6_indi_pane_ParamLimits

0xd502,	// (0x000236d2) vid6_indi_pane

0x4af9,	// (0x0001acc9) bg_tb_trans_pane_cp09_ParamLimits

0x4af9,	// (0x0001acc9) bg_tb_trans_pane_cp09

0x4bd1,	// (0x0001ada1) cam6_battery_pane_cp_ParamLimits

0x4bd1,	// (0x0001ada1) cam6_battery_pane_cp

0x4bdd,	// (0x0001adad) vid6_indi_pane_g1_ParamLimits

0x4bdd,	// (0x0001adad) vid6_indi_pane_g1

0x4bef,	// (0x0001adbf) vid6_indi_pane_g2_ParamLimits

0x4bef,	// (0x0001adbf) vid6_indi_pane_g2

0x4c01,	// (0x0001add1) vid6_indi_pane_g3_ParamLimits

0x4c01,	// (0x0001add1) vid6_indi_pane_g3

0x4c16,	// (0x0001ade6) vid6_indi_pane_g4_ParamLimits

0x4c16,	// (0x0001ade6) vid6_indi_pane_g4

0x4c2b,	// (0x0001adfb) vid6_indi_pane_g5_ParamLimits

0x4c2b,	// (0x0001adfb) vid6_indi_pane_g5

0x0004,

0xfba6,	// (0x00025d76) vid6_indi_pane_g_ParamLimits

0xfba6,	// (0x00025d76) vid6_indi_pane_g

0x4c45,	// (0x0001ae15) vid6_indi_pane_t1_ParamLimits

0x4c45,	// (0x0001ae15) vid6_indi_pane_t1

0x4c5b,	// (0x0001ae2b) vid6_indi_pane_t2_ParamLimits

0x4c5b,	// (0x0001ae2b) vid6_indi_pane_t2

0x4c83,	// (0x0001ae53) vid6_indi_pane_t3_ParamLimits

0x4c83,	// (0x0001ae53) vid6_indi_pane_t3

0x4cab,	// (0x0001ae7b) vid6_indi_pane_t4_ParamLimits

0x4cab,	// (0x0001ae7b) vid6_indi_pane_t4

0x0003,

0xfbb1,	// (0x00025d81) vid6_indi_pane_t_ParamLimits

0xfbb1,	// (0x00025d81) vid6_indi_pane_t

0x4ccf,	// (0x0001ae9f) wait_bar_pane_cp08

0xd525,	// (0x000236f5) main_cset_text2_pane_t1_ParamLimits

0xd525,	// (0x000236f5) main_cset_text2_pane_t1

0xd43f,	// (0x0002360f) listscroll_gen_pane_cp06_t1_ParamLimits

0xd43f,	// (0x0002360f) listscroll_gen_pane_cp06_t1

0x05a2,	// (0x00016772) main_cam6_set_pane

0x7d2a,	// (0x0001defa) bg_tb_trans_pane_cp06_ParamLimits

0x7d40,	// (0x0001df10) cam4_indicators_pane_g1_ParamLimits

0x7d51,	// (0x0001df21) cam4_indicators_pane_g2_ParamLimits

0xf925,	// (0x00025af5) cam4_indicators_pane_g_ParamLimits

0x7d6f,	// (0x0001df3f) cam4_indicators_pane_t1_ParamLimits

0x7e17,	// (0x0001dfe7) bg_tb_trans_pane_cp07_ParamLimits

0x7d40,	// (0x0001df10) vid4_indicators_pane_g1_ParamLimits

0x7e2d,	// (0x0001dffd) vid4_indicators_pane_g2_ParamLimits

0x7e3e,	// (0x0001e00e) vid4_indicators_pane_g3_ParamLimits

0x7e4f,	// (0x0001e01f) vid4_indicators_pane_g4_ParamLimits

0xf937,	// (0x00025b07) vid4_indicators_pane_g_ParamLimits

0x7e6b,	// (0x0001e03b) vid4_indicators_pane_t1_ParamLimits

0x830c,	// (0x0001e4dc) vid4_progress_pane_g1_ParamLimits

0x831c,	// (0x0001e4ec) vid4_progress_pane_g2_ParamLimits

0x1620,	// (0x000177f0) vid4_progress_pane_g3_ParamLimits

0x7d51,	// (0x0001df21) vid4_progress_pane_g4_ParamLimits

0xfae2,	// (0x00025cb2) vid4_progress_pane_g_ParamLimits

0x832c,	// (0x0001e4fc) vid4_progress_pane_t1_ParamLimits

0x8341,	// (0x0001e511) vid4_progress_pane_t2_ParamLimits

0x8357,	// (0x0001e527) vid4_progress_pane_t3_ParamLimits

0xfaed,	// (0x00025cbd) vid4_progress_pane_t_ParamLimits

0x836c,	// (0x0001e53c) wait_bar_pane_cp07_ParamLimits

0xd563,	// (0x00023733) main_cam6_set_pane_g2_ParamLimits

0xd563,	// (0x00023733) main_cam6_set_pane_g2

0xd56f,	// (0x0002373f) main_cset6_listscroll_pane_ParamLimits

0xd56f,	// (0x0002373f) main_cset6_listscroll_pane

0xd59a,	// (0x0002376a) main_cset6_slider_pane_ParamLimits

0xd59a,	// (0x0002376a) main_cset6_slider_pane

0xd5a6,	// (0x00023776) main_cset6_text2_pane_ParamLimits

0xd5a6,	// (0x00023776) main_cset6_text2_pane

0x4cde,	// (0x0001aeae) main_cset6_text_pane

0x4ce6,	// (0x0001aeb6) main_cset_list_pane_copy1_ParamLimits

0x4ce6,	// (0x0001aeb6) main_cset_list_pane_copy1

0x4cf6,	// (0x0001aec6) scroll_pane_cp028_copy1

0xd5b9,	// (0x00023789) cset_list_set_pane_copy1

0xd5d3,	// (0x000237a3) aid_position_infowindow_above_copy1

0xd5db,	// (0x000237ab) aid_position_infowindow_below_copy1

0x4cff,	// (0x0001aecf) cset_list_set_pane_g1_copy1

0x4d07,	// (0x0001aed7) cset_list_set_pane_g3_copy1_ParamLimits

0x4d07,	// (0x0001aed7) cset_list_set_pane_g3_copy1

0x4d16,	// (0x0001aee6) cset_list_set_pane_t1_copy1_ParamLimits

0x4d16,	// (0x0001aee6) cset_list_set_pane_t1_copy1

0x0612,	// (0x000167e2) list_highlight_pane_cp021_copy1_ParamLimits

0x0612,	// (0x000167e2) list_highlight_pane_cp021_copy1

0x4d2b,	// (0x0001aefb) cset6_slider_pane_ParamLimits

0x4d2b,	// (0x0001aefb) cset6_slider_pane

0x4d57,	// (0x0001af27) main_cset6_slider_pane_g1_ParamLimits

0x4d57,	// (0x0001af27) main_cset6_slider_pane_g1

0xd5e3,	// (0x000237b3) main_cset6_slider_pane_g2_ParamLimits

0xd5e3,	// (0x000237b3) main_cset6_slider_pane_g2

0x43d3,	// (0x0001a5a3) main_cset6_slider_pane_g3_ParamLimits

0x43d3,	// (0x0001a5a3) main_cset6_slider_pane_g3

0xd60b,	// (0x000237db) main_cset6_slider_pane_g4_ParamLimits

0xd60b,	// (0x000237db) main_cset6_slider_pane_g4

0xd617,	// (0x000237e7) main_cset6_slider_pane_g5_ParamLimits

0xd617,	// (0x000237e7) main_cset6_slider_pane_g5

0x43d3,	// (0x0001a5a3) main_cset6_slider_pane_g7_ParamLimits

0x43d3,	// (0x0001a5a3) main_cset6_slider_pane_g7

0x43df,	// (0x0001a5af) main_cset6_slider_pane_g8_ParamLimits

0x43df,	// (0x0001a5af) main_cset6_slider_pane_g8

0xd625,	// (0x000237f5) main_cset6_slider_pane_g9_ParamLimits

0xd625,	// (0x000237f5) main_cset6_slider_pane_g9

0xd631,	// (0x00023801) main_cset6_slider_pane_g10_ParamLimits

0xd631,	// (0x00023801) main_cset6_slider_pane_g10

0xd60b,	// (0x000237db) main_cset6_slider_pane_g11_ParamLimits

0xd60b,	// (0x000237db) main_cset6_slider_pane_g11

0xd63d,	// (0x0002380d) main_cset6_slider_pane_g12_ParamLimits

0xd63d,	// (0x0002380d) main_cset6_slider_pane_g12

0xd649,	// (0x00023819) main_cset6_slider_pane_g13_ParamLimits

0xd649,	// (0x00023819) main_cset6_slider_pane_g13

0xd657,	// (0x00023827) main_cset6_slider_pane_g14_ParamLimits

0xd657,	// (0x00023827) main_cset6_slider_pane_g14

0xd665,	// (0x00023835) main_cset6_slider_pane_g15_ParamLimits

0xd665,	// (0x00023835) main_cset6_slider_pane_g15

0xd617,	// (0x000237e7) main_cset6_slider_pane_g16_ParamLimits

0xd617,	// (0x000237e7) main_cset6_slider_pane_g16

0xd67d,	// (0x0002384d) main_cset6_slider_pane_g17_ParamLimits

0xd67d,	// (0x0002384d) main_cset6_slider_pane_g17

0x0011,

0xfbba,	// (0x00025d8a) main_cset6_slider_pane_g_ParamLimits

0xfbba,	// (0x00025d8a) main_cset6_slider_pane_g

0x4d7f,	// (0x0001af4f) main_cset6_slider_pane_t1_ParamLimits

0x4d7f,	// (0x0001af4f) main_cset6_slider_pane_t1

0xd68b,	// (0x0002385b) main_cset6_slider_pane_t2_ParamLimits

0xd68b,	// (0x0002385b) main_cset6_slider_pane_t2

0xd6b6,	// (0x00023886) main_cset6_slider_pane_t3_ParamLimits

0xd6b6,	// (0x00023886) main_cset6_slider_pane_t3

0xd6e1,	// (0x000238b1) main_cset6_slider_pane_t4_ParamLimits

0xd6e1,	// (0x000238b1) main_cset6_slider_pane_t4

0xd70e,	// (0x000238de) main_cset6_slider_pane_t5_ParamLimits

0xd70e,	// (0x000238de) main_cset6_slider_pane_t5

0x4dc0,	// (0x0001af90) main_cset6_slider_pane_t7_ParamLimits

0x4dc0,	// (0x0001af90) main_cset6_slider_pane_t7

0xd73b,	// (0x0002390b) main_cset6_slider_pane_t8_ParamLimits

0xd73b,	// (0x0002390b) main_cset6_slider_pane_t8

0xd75f,	// (0x0002392f) main_cset6_slider_pane_t9_ParamLimits

0xd75f,	// (0x0002392f) main_cset6_slider_pane_t9

0xd783,	// (0x00023953) main_cset6_slider_pane_t10_ParamLimits

0xd783,	// (0x00023953) main_cset6_slider_pane_t10

0xd7a7,	// (0x00023977) main_cset6_slider_pane_t11_ParamLimits

0xd7a7,	// (0x00023977) main_cset6_slider_pane_t11

0x4df6,	// (0x0001afc6) main_cset6_slider_pane_t14_ParamLimits

0x4df6,	// (0x0001afc6) main_cset6_slider_pane_t14

0x4e2f,	// (0x0001afff) main_cset6_slider_pane_t15_ParamLimits

0x4e2f,	// (0x0001afff) main_cset6_slider_pane_t15

0x000b,

0xfbdf,	// (0x00025daf) main_cset6_slider_pane_t_ParamLimits

0xfbdf,	// (0x00025daf) main_cset6_slider_pane_t

0x44b7,	// (0x0001a687) cset_slider_pane_g1_copy1

0x44c0,	// (0x0001a690) cset_slider_pane_g2_copy1

0x44c9,	// (0x0001a699) cset_slider_pane_g3_copy1

0x05a2,	// (0x00016772) bg_popup_sub_pane_cp011_copy1

0x45a6,	// (0x0001a776) main_cset_text_pane_g1_copy1

0x45ae,	// (0x0001a77e) main_cset_text_pane_t1_copy1

0x45bc,	// (0x0001a78c) main_cset_text_pane_t2_copy1

0x45ca,	// (0x0001a79a) main_cset_text_pane_t3_copy1

0x45d8,	// (0x0001a7a8) main_cset_text_pane_t4_copy1

0x45e6,	// (0x0001a7b6) main_cset_text_pane_t5_copy1

0x45f4,	// (0x0001a7c4) main_cset_text_pane_t6_copy1

0x4602,	// (0x0001a7d2) main_cset_text_pane_t7_copy1

0xd7cd,	// (0x0002399d) main_cset_text2_pane_t1_copy1

0x05a2,	// (0x00016772) main_ncimui_pane

0xaf99,	// (0x00021169) popup_query_ncimui_window_ParamLimits

0xaf99,	// (0x00021169) popup_query_ncimui_window

0x37c4,	// (0x00019994) field_cale_ev2_pane_g4_ParamLimits

0x37c4,	// (0x00019994) field_cale_ev2_pane_g4

0xc44b,	// (0x0002261b) cell_video_dialer_keypad_pane_g2_ParamLimits

0xc44b,	// (0x0002261b) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8c3,	// (0x00025a93) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8c3,	// (0x00025a93) cell_video_dialer_keypad_pane_g

0xc463,	// (0x00022633) cell_video_dialer_keypad_pane_t1

0x05a2,	// (0x00016772) bg_popup_window_pane_cp012

0x18dc,	// (0x00017aac) heading_pane_cp06

0x4f57,	// (0x0001b127) ncim_query_content_pane

0x05a2,	// (0x00016772) bg_popup_heading_pane_cp01

0x4f5f,	// (0x0001b12f) ncim_heading_pane_t1

0x4f84,	// (0x0001b154) ncim_indicator_popup_pane

0x4f96,	// (0x0001b166) ncim_query_button_pane

0x4faa,	// (0x0001b17a) ncim_query_content_pane_t1

0x4fbc,	// (0x0001b18c) ncim_query_content_pane_t2

0x0005,

0xfc1e,	// (0x00025dee) ncim_query_content_pane_t

0x4ff6,	// (0x0001b1c6) ncim_query_list_pane

0x5008,	// (0x0001b1d8) ncim_query_popup_pane

0x4f84,	// (0x0001b154) ncim_indicator_popup_pane_ParamLimits

0xd8c8,	// (0x00023a98) ncim_query_content_pane_g1_ParamLimits

0xd8c8,	// (0x00023a98) ncim_query_content_pane_g1

0x4faa,	// (0x0001b17a) ncim_query_content_pane_t1_ParamLimits

0x4fbc,	// (0x0001b18c) ncim_query_content_pane_t2_ParamLimits

0xd8d4,	// (0x00023aa4) ncim_query_content_pane_t3_ParamLimits

0xd8d4,	// (0x00023aa4) ncim_query_content_pane_t3

0xd8f1,	// (0x00023ac1) ncim_query_content_pane_t4_ParamLimits

0xd8f1,	// (0x00023ac1) ncim_query_content_pane_t4

0xd90e,	// (0x00023ade) ncim_query_content_pane_t5_ParamLimits

0xd90e,	// (0x00023ade) ncim_query_content_pane_t5

0x4fce,	// (0x0001b19e) ncim_query_content_pane_t6_ParamLimits

0x4fce,	// (0x0001b19e) ncim_query_content_pane_t6

0xfc1e,	// (0x00025dee) ncim_query_content_pane_t_ParamLimits

0x4ff6,	// (0x0001b1c6) ncim_query_list_pane_ParamLimits

0x5008,	// (0x0001b1d8) ncim_query_popup_pane_ParamLimits

0x501c,	// (0x0001b1ec) wait_bar_pane_cp04

0x05a2,	// (0x00016772) input_focus_pane_cp011

0x5024,	// (0x0001b1f4) ncim_query_popup_pane_t1

0x5032,	// (0x0001b202) ncim_list_query_list_pane_ParamLimits

0x5032,	// (0x0001b202) ncim_list_query_list_pane

0x05a2,	// (0x00016772) bg_button_pane_cp027

0x5045,	// (0x0001b215) ncim_query_button_pane_g1

0x05a2,	// (0x00016772) list_highlight_pane_cp012

0x504f,	// (0x0001b21f) ncim_list_query_list_pane_g1

0x5057,	// (0x0001b227) ncim_list_query_list_pane_t1

0x7d60,	// (0x0001df30) cam4_indicators_pane_g3_ParamLimits

0x7d60,	// (0x0001df30) cam4_indicators_pane_g3

0x7e5b,	// (0x0001e02b) vid4_indicators_pane_g5_ParamLimits

0x7e5b,	// (0x0001e02b) vid4_indicators_pane_g5

0x7d60,	// (0x0001df30) vid4_progress_pane_g5_ParamLimits

0x7d60,	// (0x0001df30) vid4_progress_pane_g5

0xd810,	// (0x000239e0) main_ncimui_pane_g1

0xd856,	// (0x00023a26) ncimui_group_query_pane_ParamLimits

0xd856,	// (0x00023a26) ncimui_group_query_pane

0xd88a,	// (0x00023a5a) ncimui_list_pane_ParamLimits

0xd88a,	// (0x00023a5a) ncimui_list_pane

0xd8a4,	// (0x00023a74) ncimui_text_pane_ParamLimits

0xd8a4,	// (0x00023a74) ncimui_text_pane

0xd92b,	// (0x00023afb) ncimui_text_pane_t1_ParamLimits

0xd92b,	// (0x00023afb) ncimui_text_pane_t1

0x5065,	// (0x0001b235) ncimui_list_single_graphic_pane_ParamLimits

0x5065,	// (0x0001b235) ncimui_list_single_graphic_pane

0xd94a,	// (0x00023b1a) ncimui_query_pane_ParamLimits

0xd94a,	// (0x00023b1a) ncimui_query_pane

0x05a2,	// (0x00016772) list_highlight_pane_cp013

0x5075,	// (0x0001b245) ncim_list_query_list_pane_t1_copy1

0x504f,	// (0x0001b21f) ncim_list_single_graphic_pane_g1

0x5083,	// (0x0001b253) ncim_query_button_pane_cp01

0x508b,	// (0x0001b25b) ncim_query_entry_pane_ParamLimits

0x508b,	// (0x0001b25b) ncim_query_entry_pane

0x509b,	// (0x0001b26b) ncimui_query_pane_g1

0x50a3,	// (0x0001b273) ncimui_query_pane_t1_ParamLimits

0x50a3,	// (0x0001b273) ncimui_query_pane_t1

0x05a2,	// (0x00016772) input_focus_pane_cp012

0x5024,	// (0x0001b1f4) ncim_query_entry_pane_t1

0x0dbd,	// (0x00016f8d) main_im_pane_ParamLimits

0x0612,	// (0x000167e2) main_mobtv_pane_ParamLimits

0x0612,	// (0x000167e2) main_mobtv_pane

0xd625,	// (0x000237f5) main_cset6_slider_pane_g18_ParamLimits

0xd625,	// (0x000237f5) main_cset6_slider_pane_g18

0xd649,	// (0x00023819) main_cset6_slider_pane_g19_ParamLimits

0xd649,	// (0x00023819) main_cset6_slider_pane_g19

0x4236,	// (0x0001a406) bg_main_mobtv_pane_ParamLimits

0x4236,	// (0x0001a406) bg_main_mobtv_pane

0xd95a,	// (0x00023b2a) main_mobtv_info_pane

0xd965,	// (0x00023b35) main_mobtv_loading_pane_ParamLimits

0xd965,	// (0x00023b35) main_mobtv_loading_pane

0x50b9,	// (0x0001b289) main_mobtv_pg_channel_list_pane

0x50c3,	// (0x0001b293) main_mobtv_pg_hdr_pane

0xd972,	// (0x00023b42) main_mobtv_programe_curr_pane_ParamLimits

0xd972,	// (0x00023b42) main_mobtv_programe_curr_pane

0xd97f,	// (0x00023b4f) main_mobtv_programe_next_pane_ParamLimits

0xd97f,	// (0x00023b4f) main_mobtv_programe_next_pane

0x50cc,	// (0x0001b29c) popup_mobtv_noti_window

0x34f8,	// (0x000196c8) main_tv_pg_hdr_pane_g1

0x50d4,	// (0x0001b2a4) main_tv_pg_hdr_pane_g2

0x50dc,	// (0x0001b2ac) main_tv_pg_hdr_pane_g3

0x50e4,	// (0x0001b2b4) main_tv_pg_hdr_pane_g4

0x50ec,	// (0x0001b2bc) main_tv_pg_hdr_pane_g5

0x50f6,	// (0x0001b2c6) main_tv_pg_hdr_pane_g6

0x5100,	// (0x0001b2d0) main_tv_pg_hdr_pane_g7

0x510a,	// (0x0001b2da) main_tv_pg_hdr_pane_g8

0x5114,	// (0x0001b2e4) main_tv_pg_hdr_pane_g9

0x511e,	// (0x0001b2ee) main_tv_pg_hdr_pane_g10

0x5128,	// (0x0001b2f8) main_tv_pg_hdr_pane_g11

0x000a,

0xfc2b,	// (0x00025dfb) main_tv_pg_hdr_pane_g

0x5132,	// (0x0001b302) main_tv_pg_hdr_pane_t1

0x5140,	// (0x0001b310) main_tv_pg_hdr_pane_t2

0x514e,	// (0x0001b31e) main_tv_pg_hdr_pane_t3

0x515e,	// (0x0001b32e) main_tv_pg_hdr_pane_t4

0x516e,	// (0x0001b33e) main_tv_pg_hdr_pane_t5

0x0004,

0xfc42,	// (0x00025e12) main_tv_pg_hdr_pane_t

0x517e,	// (0x0001b34e) single_mobtv_pg_channel_pane_ParamLimits

0x517e,	// (0x0001b34e) single_mobtv_pg_channel_pane

0x5190,	// (0x0001b360) single_mobtv_pg_channel_table_pane

0x5199,	// (0x0001b369) single_mobtv_pg_channel_thumb_pane

0x51a2,	// (0x0001b372) single_tv_pg_channel_pane_g1

0x51ab,	// (0x0001b37b) single_tv_pg_channel_pane_g2

0x0001,

0xfc4d,	// (0x00025e1d) single_tv_pg_channel_pane_g

0x375f,	// (0x0001992f) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x375f,	// (0x0001992f) bg_single_mobtv_pg_channel_thumb_pane

0x51b4,	// (0x0001b384) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x51b4,	// (0x0001b384) single_mobtv_pg_channel_thumb_pane_g1

0x51c2,	// (0x0001b392) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x51c2,	// (0x0001b392) single_mobtv_pg_channel_thumb_pane_g2

0x51ce,	// (0x0001b39e) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x51ce,	// (0x0001b39e) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc52,	// (0x00025e22) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc52,	// (0x00025e22) single_mobtv_pg_channel_thumb_pane_g

0x51da,	// (0x0001b3aa) single_mobtv_pg_channel_thumb_pane_t1

0x51e8,	// (0x0001b3b8) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc59,	// (0x00025e29) single_mobtv_pg_channel_thumb_pane_t

0x34f8,	// (0x000196c8) bg_single_mobtv_pg_channel_table_pane_g1

0x34f8,	// (0x000196c8) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf70f,	// (0x000258df) bg_single_mobtv_pg_channel_table_pane_g

0x51f6,	// (0x0001b3c6) single_mobtv_pg_channel_table_pane_t1

0x5204,	// (0x0001b3d4) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc5e,	// (0x00025e2e) single_mobtv_pg_channel_table_pane_t

0xd994,	// (0x00023b64) main_mobtv_info_pane_g1_ParamLimits

0xd994,	// (0x00023b64) main_mobtv_info_pane_g1

0xd9b0,	// (0x00023b80) main_mobtv_info_pane_t1_ParamLimits

0xd9b0,	// (0x00023b80) main_mobtv_info_pane_t1

0xda28,	// (0x00023bf8) main_mobtv_info_pane_t2_ParamLimits

0xda28,	// (0x00023bf8) main_mobtv_info_pane_t2

0x0002,

0xfc68,	// (0x00025e38) main_mobtv_info_pane_t_ParamLimits

0xfc68,	// (0x00025e38) main_mobtv_info_pane_t

0xdab7,	// (0x00023c87) wait_bar_pane_cp05

0xdac9,	// (0x00023c99) main_mobtv_loading_pane_g1_ParamLimits

0xdac9,	// (0x00023c99) main_mobtv_loading_pane_g1

0xdad7,	// (0x00023ca7) main_mobtv_loading_pane_g2_ParamLimits

0xdad7,	// (0x00023ca7) main_mobtv_loading_pane_g2

0xdae3,	// (0x00023cb3) main_mobtv_loading_pane_g3_ParamLimits

0xdae3,	// (0x00023cb3) main_mobtv_loading_pane_g3

0x0002,

0xfc6f,	// (0x00025e3f) main_mobtv_loading_pane_g_ParamLimits

0xfc6f,	// (0x00025e3f) main_mobtv_loading_pane_g

0x5212,	// (0x0001b3e2) main_mobtv_loading_pane_t1_ParamLimits

0x5212,	// (0x0001b3e2) main_mobtv_loading_pane_t1

0x522a,	// (0x0001b3fa) main_mobtv_loading_pane_t2_ParamLimits

0x522a,	// (0x0001b3fa) main_mobtv_loading_pane_t2

0x0001,

0xfc76,	// (0x00025e46) main_mobtv_loading_pane_t_ParamLimits

0xfc76,	// (0x00025e46) main_mobtv_loading_pane_t

0xdaf1,	// (0x00023cc1) wait_bar_pane_cp06_ParamLimits

0xdaf1,	// (0x00023cc1) wait_bar_pane_cp06

0x524e,	// (0x0001b41e) main_mobtv_programe_curr_pane_t1

0x525c,	// (0x0001b42c) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc7b,	// (0x00025e4b) main_mobtv_programe_curr_pane_t

0x526a,	// (0x0001b43a) main_mobtv_programe_next_pane_t1

0x5278,	// (0x0001b448) main_mobtv_programe_next_pane_t2

0x5286,	// (0x0001b456) main_mobtv_programe_next_pane_t3

0x0002,

0xfc80,	// (0x00025e50) main_mobtv_programe_next_pane_t

0x05a2,	// (0x00016772) bg_popup_mobtv_noti_window_pane

0x5294,	// (0x0001b464) popup_mobtv_noti_window_g1

0x529c,	// (0x0001b46c) popup_mobtv_noti_window_t1

0x52aa,	// (0x0001b47a) popup_mobtv_noti_window_t2

0x0001,

0xfc87,	// (0x00025e57) popup_mobtv_noti_window_t

0x34f8,	// (0x000196c8) bg_popup_mobtv_noti_window_pane_g1

0x05a2,	// (0x00016772) sc_clock_pane

0x05a2,	// (0x00016772) main_fs_bigclock_pane

0xd2ba,	// (0x0002348a) blid2_tripm_pane_t4_ParamLimits

0xd2ba,	// (0x0002348a) blid2_tripm_pane_t4

0xdafd,	// (0x00023ccd) sc_clock_pane_g1_ParamLimits

0xdafd,	// (0x00023ccd) sc_clock_pane_g1

0xdb0b,	// (0x00023cdb) sc_clock_pane_t1_ParamLimits

0xdb0b,	// (0x00023cdb) sc_clock_pane_t1

0xdb1e,	// (0x00023cee) sc_clock_pane_t2_ParamLimits

0xdb1e,	// (0x00023cee) sc_clock_pane_t2

0xdb30,	// (0x00023d00) sc_clock_pane_t3_ParamLimits

0xdb30,	// (0x00023d00) sc_clock_pane_t3

0x0004,

0xfc8c,	// (0x00025e5c) sc_clock_pane_t_ParamLimits

0xfc8c,	// (0x00025e5c) sc_clock_pane_t

0xe81c,	// (0x000249ec) main_fs_bigclock_indicator_pane_ParamLimits

0xe81c,	// (0x000249ec) main_fs_bigclock_indicator_pane

0xdbb8,	// (0x00023d88) main_fs_bigclock_pane_g1_ParamLimits

0xdbb8,	// (0x00023d88) main_fs_bigclock_pane_g1

0xe828,	// (0x000249f8) main_fs_bigclock_pane_t1_ParamLimits

0xe828,	// (0x000249f8) main_fs_bigclock_pane_t1

0xe83a,	// (0x00024a0a) main_fs_bigclock_pane_t2_ParamLimits

0xe83a,	// (0x00024a0a) main_fs_bigclock_pane_t2

0xe84c,	// (0x00024a1c) main_fs_bigclock_pane_t3_ParamLimits

0xe84c,	// (0x00024a1c) main_fs_bigclock_pane_t3

0x0002,

0xfe86,	// (0x00026056) main_fs_bigclock_pane_t_ParamLimits

0xfe86,	// (0x00026056) main_fs_bigclock_pane_t

0x5ed0,	// (0x0001c0a0) main_fs_bigclock_indicator_pane_g1

0x4f9e,	// (0x0001b16e) ncim_query_content_pane_g2_ParamLimits

0x4f9e,	// (0x0001b16e) ncim_query_content_pane_g2

0x0001,

0xfc19,	// (0x00025de9) ncim_query_content_pane_g_ParamLimits

0xfc19,	// (0x00025de9) ncim_query_content_pane_g

0xdb44,	// (0x00023d14) sc_clock_pane_t4_ParamLimits

0xdb44,	// (0x00023d14) sc_clock_pane_t4

0x0612,	// (0x000167e2) main_radioblah_pane

0x411e,	// (0x0001a2ee) cell_call4_button_pane_t1_copy1_ParamLimits

0x411e,	// (0x0001a2ee) cell_call4_button_pane_t1_copy1

0xd818,	// (0x000239e8) main_ncimui_pane_t1_ParamLimits

0xd818,	// (0x000239e8) main_ncimui_pane_t1

0xd82a,	// (0x000239fa) main_ncimui_pane_t2_ParamLimits

0xd82a,	// (0x000239fa) main_ncimui_pane_t2

0x0002,

0xfc12,	// (0x00025de2) main_ncimui_pane_t_ParamLimits

0xfc12,	// (0x00025de2) main_ncimui_pane_t

0x53da,	// (0x0001b5aa) main_radioblah_anim_pane_ParamLimits

0x53da,	// (0x0001b5aa) main_radioblah_anim_pane

0x53eb,	// (0x0001b5bb) main_radioblah_info_pane_ParamLimits

0x53eb,	// (0x0001b5bb) main_radioblah_info_pane

0x53ff,	// (0x0001b5cf) main_radioblah_pane_t1_ParamLimits

0x53ff,	// (0x0001b5cf) main_radioblah_pane_t1

0x541b,	// (0x0001b5eb) main_radioblah_pane_t2_ParamLimits

0x541b,	// (0x0001b5eb) main_radioblah_pane_t2

0x0003,

0xfcad,	// (0x00025e7d) main_radioblah_pane_t_ParamLimits

0xfcad,	// (0x00025e7d) main_radioblah_pane_t

0xdc0a,	// (0x00023dda) main_radioblah_rocker_ctrl_pane_ParamLimits

0xdc0a,	// (0x00023dda) main_radioblah_rocker_ctrl_pane

0x5463,	// (0x0001b633) main_radioblah_info_pane_t1_ParamLimits

0x5463,	// (0x0001b633) main_radioblah_info_pane_t1

0xdc4f,	// (0x00023e1f) main_radioblah_info_pane_t2_ParamLimits

0xdc4f,	// (0x00023e1f) main_radioblah_info_pane_t2

0x0003,

0xfcb6,	// (0x00025e86) main_radioblah_info_pane_t_ParamLimits

0xfcb6,	// (0x00025e86) main_radioblah_info_pane_t

0x34f8,	// (0x000196c8) main_radioblah_rocker_ctrl_pane_g1

0xdcff,	// (0x00023ecf) main_radioblah_rocker_ctrl_pane_g2

0xdd07,	// (0x00023ed7) main_radioblah_rocker_ctrl_pane_g3

0xdd0f,	// (0x00023edf) main_radioblah_rocker_ctrl_pane_g4

0xdd17,	// (0x00023ee7) main_radioblah_rocker_ctrl_pane_g5

0xdd1f,	// (0x00023eef) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcbf,	// (0x00025e8f) main_radioblah_rocker_ctrl_pane_g

0xd7cd,	// (0x0002399d) main_cset_text2_pane_t1_copy1_ParamLimits

0x7ca4,	// (0x0001de74) cam4_image_uncrop_qvga_pane

0x7dd5,	// (0x0001dfa5) vid4_image_uncrop_qcif_pane

0x83bd,	// (0x0001e58d) cam6_image_uncrop_qvga_pane_ParamLimits

0x83bd,	// (0x0001e58d) cam6_image_uncrop_qvga_pane

0x4bc1,	// (0x0001ad91) vid6_image_uncrop_qcif_pane_ParamLimits

0x4bc1,	// (0x0001ad91) vid6_image_uncrop_qcif_pane

0x05a2,	// (0x00016772) bg_popup_preview_window_pane_cp03

0x4f39,	// (0x0001b109) list_cset_text2_pane

0x4f41,	// (0x0001b111) main_cset6_text2_pane_g1

0x4f49,	// (0x0001b119) main_cset6_text2_pane_t1

0xdd27,	// (0x00023ef7) list_cset_text2_pane_t1_ParamLimits

0xdd27,	// (0x00023ef7) list_cset_text2_pane_t1

0x0612,	// (0x000167e2) main_radioblah_pane_ParamLimits

0xdaa3,	// (0x00023c73) main_mobtv_info_pane_t3_ParamLimits

0xdaa3,	// (0x00023c73) main_mobtv_info_pane_t3

0xdbf8,	// (0x00023dc8) main_radioblah_pane_g1

0xdc23,	// (0x00023df3) main_radioblah_info_pane_g1

0xdca4,	// (0x00023e74) main_radioblah_info_pane_t3_ParamLimits

0xdca4,	// (0x00023e74) main_radioblah_info_pane_t3

0x9cae,	// (0x0001fe7e) highlight_cell_cale_month_pane_ParamLimits

0x9cae,	// (0x0001fe7e) highlight_cell_cale_month_pane

0x05a2,	// (0x00016772) main_phob_fisheye_pane

0x3879,	// (0x00019a49) scroll_pane_cp0031_ParamLimits

0x3879,	// (0x00019a49) scroll_pane_cp0031

0x4ccf,	// (0x0001ae9f) wait_bar_pane_cp08_ParamLimits

0xd5b9,	// (0x00023789) cset_list_set_pane_copy1_ParamLimits

0x549d,	// (0x0001b66d) highlight_cell_cale_month_pane_g1

0xdd52,	// (0x00023f22) highlight_cell_cale_month_pane_t1

0x4866,	// (0x0001aa36) list_gen_pane_cp01

0x43be,	// (0x0001a58e) scroll_pane_01

0xdd60,	// (0x00023f30) list_single_double_fisheye_pane

0x54a5,	// (0x0001b675) list_double_fisheye_pane_g1_ParamLimits

0x54a5,	// (0x0001b675) list_double_fisheye_pane_g1

0x54b1,	// (0x0001b681) list_double_fisheye_pane_g2_ParamLimits

0x54b1,	// (0x0001b681) list_double_fisheye_pane_g2

0xdd69,	// (0x00023f39) list_double_fisheye_pane_g3_ParamLimits

0xdd69,	// (0x00023f39) list_double_fisheye_pane_g3

0x0004,

0xfccc,	// (0x00025e9c) list_double_fisheye_pane_g_ParamLimits

0xfccc,	// (0x00025e9c) list_double_fisheye_pane_g

0xdd75,	// (0x00023f45) list_double_fisheye_pane_t1_ParamLimits

0xdd75,	// (0x00023f45) list_double_fisheye_pane_t1

0xdd90,	// (0x00023f60) list_double_fisheye_pane_t2_ParamLimits

0xdd90,	// (0x00023f60) list_double_fisheye_pane_t2

0x0001,

0xfcd7,	// (0x00025ea7) list_double_fisheye_pane_t_ParamLimits

0xfcd7,	// (0x00025ea7) list_double_fisheye_pane_t

0x05a2,	// (0x00016772) main_call5_pane

0xdb6a,	// (0x00023d3a) sc_swipe_pane_ParamLimits

0xdb6a,	// (0x00023d3a) sc_swipe_pane

0xddbe,	// (0x00023f8e) call5_image_pane_ParamLimits

0xddbe,	// (0x00023f8e) call5_image_pane

0xddce,	// (0x00023f9e) call5_swipe_1_pane_ParamLimits

0xddce,	// (0x00023f9e) call5_swipe_1_pane

0xddda,	// (0x00023faa) call5_swipe_2_pane_ParamLimits

0xddda,	// (0x00023faa) call5_swipe_2_pane

0xddf4,	// (0x00023fc4) popup_call5_audio_first_window_ParamLimits

0xddf4,	// (0x00023fc4) popup_call5_audio_first_window

0x375f,	// (0x0001992f) call5_swipe_1_pane_g1_ParamLimits

0x375f,	// (0x0001992f) call5_swipe_1_pane_g1

0x54e2,	// (0x0001b6b2) call5_swipe_1_pane_g2_ParamLimits

0x54e2,	// (0x0001b6b2) call5_swipe_1_pane_g2

0x0001,

0xfcdc,	// (0x00025eac) call5_swipe_1_pane_g_ParamLimits

0xfcdc,	// (0x00025eac) call5_swipe_1_pane_g

0x54ee,	// (0x0001b6be) call5_swipe_1_pane_t1_ParamLimits

0x54ee,	// (0x0001b6be) call5_swipe_1_pane_t1

0x375f,	// (0x0001992f) call5_swipe_2_pane_g1_ParamLimits

0x375f,	// (0x0001992f) call5_swipe_2_pane_g1

0x5503,	// (0x0001b6d3) call5_swipe_2_pane_g2_ParamLimits

0x5503,	// (0x0001b6d3) call5_swipe_2_pane_g2

0x0001,

0xfce1,	// (0x00025eb1) call5_swipe_2_pane_g_ParamLimits

0xfce1,	// (0x00025eb1) call5_swipe_2_pane_g

0x550f,	// (0x0001b6df) call5_swipe_2_pane_t1_ParamLimits

0x550f,	// (0x0001b6df) call5_swipe_2_pane_t1

0x5524,	// (0x0001b6f4) sc_swipe_pane_g1_ParamLimits

0x5524,	// (0x0001b6f4) sc_swipe_pane_g1

0x5531,	// (0x0001b701) sc_swipe_pane_g2_ParamLimits

0x5531,	// (0x0001b701) sc_swipe_pane_g2

0x0001,

0xfce6,	// (0x00025eb6) sc_swipe_pane_g_ParamLimits

0xfce6,	// (0x00025eb6) sc_swipe_pane_g

0x553d,	// (0x0001b70d) sc_swipe_pane_t1_ParamLimits

0x553d,	// (0x0001b70d) sc_swipe_pane_t1

0x05a2,	// (0x00016772) main_cmail_launcher_pane

0xde02,	// (0x00023fd2) aid_size_cell_cmail_l_ParamLimits

0xde02,	// (0x00023fd2) aid_size_cell_cmail_l

0xde12,	// (0x00023fe2) grid_cmail_l_pane_ParamLimits

0xde12,	// (0x00023fe2) grid_cmail_l_pane

0xde22,	// (0x00023ff2) cell_cmail_l_pane_ParamLimits

0xde22,	// (0x00023ff2) cell_cmail_l_pane

0xde36,	// (0x00024006) cell_cmail_l_pane_g1_ParamLimits

0xde36,	// (0x00024006) cell_cmail_l_pane_g1

0xde42,	// (0x00024012) cell_cmail_l_pane_t1_ParamLimits

0xde42,	// (0x00024012) cell_cmail_l_pane_t1

0x5552,	// (0x0001b722) cell_cmail_l_pane_t2_ParamLimits

0x5552,	// (0x0001b722) cell_cmail_l_pane_t2

0x0001,

0xfceb,	// (0x00025ebb) cell_cmail_l_pane_t_ParamLimits

0xfceb,	// (0x00025ebb) cell_cmail_l_pane_t

0x0612,	// (0x000167e2) grid_highlight_pane_cp018_ParamLimits

0x0612,	// (0x000167e2) grid_highlight_pane_cp018

0x8502,	// (0x0001e6d2) main2_pane_ParamLimits

0x8502,	// (0x0001e6d2) main2_pane

0x0e96,	// (0x00017066) popup_sp_fs_action_menu_bg_pane_g1

0x0e9e,	// (0x0001706e) popup_sp_fs_action_menu_bg_pane_g2

0x0ea6,	// (0x00017076) popup_sp_fs_action_menu_bg_pane_g3

0x0eae,	// (0x0001707e) popup_sp_fs_action_menu_bg_pane_g4

0x0eb6,	// (0x00017086) popup_sp_fs_action_menu_bg_pane_g5

0x0ebe,	// (0x0001708e) popup_sp_fs_action_menu_bg_pane_g6

0x0ec6,	// (0x00017096) popup_sp_fs_action_menu_bg_pane_g7

0x0ece,	// (0x0001709e) popup_sp_fs_action_menu_bg_pane_g8

0x0ed6,	// (0x000170a6) popup_sp_fs_action_menu_bg_pane_g9

0x0ede,	// (0x000170ae) popup_sp_fs_action_menu_bg_pane_g10

0x0ede,	// (0x000170ae) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1bb,	// (0x0002538b) popup_sp_fs_action_menu_bg_pane_g

0x10ed,	// (0x000172bd) list_medium_line_x2_t3_g3_g1_ParamLimits

0x10ed,	// (0x000172bd) list_medium_line_x2_t3_g3_g1

0x10f9,	// (0x000172c9) list_medium_line_x2_t3_g3_g2_ParamLimits

0x10f9,	// (0x000172c9) list_medium_line_x2_t3_g3_g2

0x1105,	// (0x000172d5) list_medium_line_x2_t3_g3_g3_ParamLimits

0x1105,	// (0x000172d5) list_medium_line_x2_t3_g3_g3

0x0002,

0xf26b,	// (0x0002543b) list_medium_line_x2_t3_g3_g_ParamLimits

0xf26b,	// (0x0002543b) list_medium_line_x2_t3_g3_g

0x1111,	// (0x000172e1) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1111,	// (0x000172e1) list_medium_line_x2_t3_g3_t1

0x8f8a,	// (0x0001f15a) list_medium_line_x2_t3_g3_t2_ParamLimits

0x8f8a,	// (0x0001f15a) list_medium_line_x2_t3_g3_t2

0x1126,	// (0x000172f6) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1126,	// (0x000172f6) list_medium_line_x2_t3_g3_t3

0x0002,

0xf272,	// (0x00025442) list_medium_line_x2_t3_g3_t_ParamLimits

0xf272,	// (0x00025442) list_medium_line_x2_t3_g3_t

0x10ed,	// (0x000172bd) list_medium_line_x2_t3_g2_g1_ParamLimits

0x10ed,	// (0x000172bd) list_medium_line_x2_t3_g2_g1

0x1105,	// (0x000172d5) list_medium_line_x2_t3_g2_g2_ParamLimits

0x1105,	// (0x000172d5) list_medium_line_x2_t3_g2_g2

0x0001,

0xf279,	// (0x00025449) list_medium_line_x2_t3_g2_g_ParamLimits

0xf279,	// (0x00025449) list_medium_line_x2_t3_g2_g

0x113b,	// (0x0001730b) list_medium_line_x2_t3_g2_t1_ParamLimits

0x113b,	// (0x0001730b) list_medium_line_x2_t3_g2_t1

0x1151,	// (0x00017321) list_medium_line_x2_t3_g2_t2_ParamLimits

0x1151,	// (0x00017321) list_medium_line_x2_t3_g2_t2

0x1163,	// (0x00017333) list_medium_line_x2_t3_g2_t3_ParamLimits

0x1163,	// (0x00017333) list_medium_line_x2_t3_g2_t3

0x0002,

0xf27e,	// (0x0002544e) list_medium_line_x2_t3_g2_t_ParamLimits

0xf27e,	// (0x0002544e) list_medium_line_x2_t3_g2_t

0x10ed,	// (0x000172bd) list_medium_line_x2_t4_g4_g1_ParamLimits

0x10ed,	// (0x000172bd) list_medium_line_x2_t4_g4_g1

0x1180,	// (0x00017350) list_medium_line_x2_t4_g4_g2_ParamLimits

0x1180,	// (0x00017350) list_medium_line_x2_t4_g4_g2

0x10f9,	// (0x000172c9) list_medium_line_x2_t4_g4_g3_ParamLimits

0x10f9,	// (0x000172c9) list_medium_line_x2_t4_g4_g3

0x118c,	// (0x0001735c) list_medium_line_x2_t4_g4_g4_ParamLimits

0x118c,	// (0x0001735c) list_medium_line_x2_t4_g4_g4

0x0003,

0xf285,	// (0x00025455) list_medium_line_x2_t4_g4_g_ParamLimits

0xf285,	// (0x00025455) list_medium_line_x2_t4_g4_g

0x8f9c,	// (0x0001f16c) list_medium_line_x2_t4_g4_t1_ParamLimits

0x8f9c,	// (0x0001f16c) list_medium_line_x2_t4_g4_t1

0x8fb6,	// (0x0001f186) list_medium_line_x2_t4_g4_t2_ParamLimits

0x8fb6,	// (0x0001f186) list_medium_line_x2_t4_g4_t2

0x8fcb,	// (0x0001f19b) list_medium_line_x2_t4_g4_t3_ParamLimits

0x8fcb,	// (0x0001f19b) list_medium_line_x2_t4_g4_t3

0x1198,	// (0x00017368) list_medium_line_x2_t4_g4_t4_ParamLimits

0x1198,	// (0x00017368) list_medium_line_x2_t4_g4_t4

0x0003,

0xf28e,	// (0x0002545e) list_medium_line_x2_t4_g4_t_ParamLimits

0xf28e,	// (0x0002545e) list_medium_line_x2_t4_g4_t

0x10ed,	// (0x000172bd) list_medium_line_x2_t2_g4_g1_ParamLimits

0x10ed,	// (0x000172bd) list_medium_line_x2_t2_g4_g1

0x1180,	// (0x00017350) list_medium_line_x2_t2_g4_g2_ParamLimits

0x1180,	// (0x00017350) list_medium_line_x2_t2_g4_g2

0x10f9,	// (0x000172c9) list_medium_line_x2_t2_g4_g3_ParamLimits

0x10f9,	// (0x000172c9) list_medium_line_x2_t2_g4_g3

0x1105,	// (0x000172d5) list_medium_line_x2_t2_g4_g4_ParamLimits

0x1105,	// (0x000172d5) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2f5,	// (0x000254c5) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2f5,	// (0x000254c5) list_medium_line_x2_t2_g4_g

0x1488,	// (0x00017658) list_medium_line_x2_t2_g4_t1_ParamLimits

0x1488,	// (0x00017658) list_medium_line_x2_t2_g4_t1

0x1126,	// (0x000172f6) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1126,	// (0x000172f6) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2fe,	// (0x000254ce) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2fe,	// (0x000254ce) list_medium_line_x2_t2_g4_t

0x10ed,	// (0x000172bd) list_medium_line_x2_t2_g3_g1_ParamLimits

0x10ed,	// (0x000172bd) list_medium_line_x2_t2_g3_g1

0x10f9,	// (0x000172c9) list_medium_line_x2_t2_g3_g2_ParamLimits

0x10f9,	// (0x000172c9) list_medium_line_x2_t2_g3_g2

0x1105,	// (0x000172d5) list_medium_line_x2_t2_g3_g3_ParamLimits

0x1105,	// (0x000172d5) list_medium_line_x2_t2_g3_g3

0x0002,

0xf26b,	// (0x0002543b) list_medium_line_x2_t2_g3_g_ParamLimits

0xf26b,	// (0x0002543b) list_medium_line_x2_t2_g3_g

0x149d,	// (0x0001766d) list_medium_line_x2_t2_g3_t1_ParamLimits

0x149d,	// (0x0001766d) list_medium_line_x2_t2_g3_t1

0x1126,	// (0x000172f6) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1126,	// (0x000172f6) list_medium_line_x2_t2_g3_t2

0x0001,

0xf303,	// (0x000254d3) list_medium_line_x2_t2_g3_t_ParamLimits

0xf303,	// (0x000254d3) list_medium_line_x2_t2_g3_t

0x9ee0,	// (0x000200b0) main_sp_fs_list_pane_ParamLimits

0x9ee0,	// (0x000200b0) main_sp_fs_list_pane

0x9eec,	// (0x000200bc) sp_fs_scroll_pane_ParamLimits

0x9eec,	// (0x000200bc) sp_fs_scroll_pane

0x9ef8,	// (0x000200c8) list_medium_line_x2_t3_t1

0x9f08,	// (0x000200d8) list_medium_line_x2_t3_t2

0x1681,	// (0x00017851) list_medium_line_x2_t3_t3

0x0002,

0xf34e,	// (0x0002551e) list_medium_line_x2_t3_t

0x9f16,	// (0x000200e6) list_medium_line_x3_t4_t1

0x9f26,	// (0x000200f6) list_medium_line_x3_t4_t2

0x168f,	// (0x0001785f) list_medium_line_x3_t4_t3

0x1681,	// (0x00017851) list_medium_line_x3_t4_t4

0x0003,

0xf355,	// (0x00025525) list_medium_line_x3_t4_t

0x9f34,	// (0x00020104) list_medium_line_x4_t5_t1

0x9f44,	// (0x00020114) list_medium_line_x4_t5_t2

0x168f,	// (0x0001785f) list_medium_line_x4_t5_t3

0x169d,	// (0x0001786d) list_medium_line_x4_t5_t4

0x1681,	// (0x00017851) list_medium_line_x4_t5_t5

0x0004,

0xf35e,	// (0x0002552e) list_medium_line_x4_t5_t

0x10ed,	// (0x000172bd) list_medium_line_t4_g4_g1_ParamLimits

0x10ed,	// (0x000172bd) list_medium_line_t4_g4_g1

0x118c,	// (0x0001735c) list_medium_line_t4_g4_g2_ParamLimits

0x118c,	// (0x0001735c) list_medium_line_t4_g4_g2

0x16ab,	// (0x0001787b) list_medium_line_t4_g4_g3_ParamLimits

0x16ab,	// (0x0001787b) list_medium_line_t4_g4_g3

0x1105,	// (0x000172d5) list_medium_line_t4_g4_g4_ParamLimits

0x1105,	// (0x000172d5) list_medium_line_t4_g4_g4

0x0003,

0xf369,	// (0x00025539) list_medium_line_t4_g4_g_ParamLimits

0xf369,	// (0x00025539) list_medium_line_t4_g4_g

0x16b7,	// (0x00017887) list_medium_line_t4_g4_t1_ParamLimits

0x16b7,	// (0x00017887) list_medium_line_t4_g4_t1

0x16cc,	// (0x0001789c) list_medium_line_t4_g4_t2_ParamLimits

0x16cc,	// (0x0001789c) list_medium_line_t4_g4_t2

0x16e1,	// (0x000178b1) list_medium_line_t4_g4_t3_ParamLimits

0x16e1,	// (0x000178b1) list_medium_line_t4_g4_t3

0x1126,	// (0x000172f6) list_medium_line_t4_g4_t4_ParamLimits

0x1126,	// (0x000172f6) list_medium_line_t4_g4_t4

0x0003,

0xf372,	// (0x00025542) list_medium_line_t4_g4_t_ParamLimits

0xf372,	// (0x00025542) list_medium_line_t4_g4_t

0x9fca,	// (0x0002019a) chi_dic_find_pane_g1

0xaf68,	// (0x00021138) main_tport_pane

0x44fb,	// (0x0001a6cb) list_medium_line_plain_t1

0x454d,	// (0x0001a71d) list_medium_line_t2_g2_g1_ParamLimits

0x454d,	// (0x0001a71d) list_medium_line_t2_g2_g1

0x4559,	// (0x0001a729) list_medium_line_t2_g2_g2_ParamLimits

0x4559,	// (0x0001a729) list_medium_line_t2_g2_g2

0x0001,

0xfa2e,	// (0x00025bfe) list_medium_line_t2_g2_g_ParamLimits

0xfa2e,	// (0x00025bfe) list_medium_line_t2_g2_g

0xcc7e,	// (0x00022e4e) list_medium_line_t2_g2_t1_ParamLimits

0xcc7e,	// (0x00022e4e) list_medium_line_t2_g2_t1

0xcc98,	// (0x00022e68) list_medium_line_t2_g2_t2_ParamLimits

0xcc98,	// (0x00022e68) list_medium_line_t2_g2_t2

0x0001,

0xfa33,	// (0x00025c03) list_medium_line_t2_g2_t_ParamLimits

0xfa33,	// (0x00025c03) list_medium_line_t2_g2_t

0x48f3,	// (0x0001aac3) aid_sp_fs_list_icon_a_sm

0x48fb,	// (0x0001aacb) aid_sp_fs_list_icon_d

0x4903,	// (0x0001aad3) aid_sp_fs_text_primary

0x490c,	// (0x0001aadc) aid_sp_fs_text_secondary

0x4915,	// (0x0001aae5) list_medium_line

0x4915,	// (0x0001aae5) list_medium_line_g2

0x4915,	// (0x0001aae5) list_medium_line_g3

0x4915,	// (0x0001aae5) list_medium_line_plain

0x4915,	// (0x0001aae5) list_medium_line_plain_t2

0x4915,	// (0x0001aae5) list_medium_line_plain_t3

0x4915,	// (0x0001aae5) list_medium_line_right_icon

0x4915,	// (0x0001aae5) list_medium_line_right_iconx2

0x4915,	// (0x0001aae5) list_medium_line_t2

0x4915,	// (0x0001aae5) list_medium_line_t2_g2

0x4915,	// (0x0001aae5) list_medium_line_t2_g3

0x4915,	// (0x0001aae5) list_medium_line_t2_right_icon

0x4915,	// (0x0001aae5) list_medium_line_t2_right_iconx2

0x4915,	// (0x0001aae5) list_medium_line_t3

0x4915,	// (0x0001aae5) list_medium_line_t3_g2

0x4915,	// (0x0001aae5) list_medium_line_t3_g3

0x4915,	// (0x0001aae5) list_medium_line_t3_right_iconx2

0x491e,	// (0x0001aaee) list_medium_line_t4_g4

0x4927,	// (0x0001aaf7) list_medium_line_x2

0x4927,	// (0x0001aaf7) list_medium_line_x2_t2_g2

0x4927,	// (0x0001aaf7) list_medium_line_x2_t2_g3

0x4927,	// (0x0001aaf7) list_medium_line_x2_t2_g4

0x4927,	// (0x0001aaf7) list_medium_line_x2_t3

0x4927,	// (0x0001aaf7) list_medium_line_x2_t3_g2

0x4927,	// (0x0001aaf7) list_medium_line_x2_t3_g3

0x4927,	// (0x0001aaf7) list_medium_line_x2_t3_g4

0x4927,	// (0x0001aaf7) list_medium_line_x2_t4_g2

0x4927,	// (0x0001aaf7) list_medium_line_x2_t4_g4

0x4930,	// (0x0001ab00) list_medium_line_x3

0x4930,	// (0x0001ab00) list_medium_line_x3_t4

0x4930,	// (0x0001ab00) list_medium_line_x3_t4_g4

0x491e,	// (0x0001aaee) list_medium_line_x4_t4

0x491e,	// (0x0001aaee) list_medium_line_x4_t4_g7

0x491e,	// (0x0001aaee) list_medium_line_x4_t5

0x4939,	// (0x0001ab09) list_single_fs_dyc_pane_ParamLimits

0x4939,	// (0x0001ab09) list_single_fs_dyc_pane

0x10ed,	// (0x000172bd) list_medium_line_x4_t4_g7_g1_ParamLimits

0x10ed,	// (0x000172bd) list_medium_line_x4_t4_g7_g1

0x4e68,	// (0x0001b038) list_medium_line_x4_t4_g7_g2_ParamLimits

0x4e68,	// (0x0001b038) list_medium_line_x4_t4_g7_g2

0x4e74,	// (0x0001b044) list_medium_line_x4_t4_g7_g3_ParamLimits

0x4e74,	// (0x0001b044) list_medium_line_x4_t4_g7_g3

0x4e83,	// (0x0001b053) list_medium_line_x4_t4_g7_g4_ParamLimits

0x4e83,	// (0x0001b053) list_medium_line_x4_t4_g7_g4

0x4e8f,	// (0x0001b05f) list_medium_line_x4_t4_g7_g5_ParamLimits

0x4e8f,	// (0x0001b05f) list_medium_line_x4_t4_g7_g5

0x4e9e,	// (0x0001b06e) list_medium_line_x4_t4_g7_g6_ParamLimits

0x4e9e,	// (0x0001b06e) list_medium_line_x4_t4_g7_g6

0x4ead,	// (0x0001b07d) list_medium_line_x4_t4_g7_g7_ParamLimits

0x4ead,	// (0x0001b07d) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbf8,	// (0x00025dc8) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbf8,	// (0x00025dc8) list_medium_line_x4_t4_g7_g

0x4eb9,	// (0x0001b089) list_medium_line_x4_t4_g7_t1_ParamLimits

0x4eb9,	// (0x0001b089) list_medium_line_x4_t4_g7_t1

0x4ece,	// (0x0001b09e) list_medium_line_x4_t4_g7_t2_ParamLimits

0x4ece,	// (0x0001b09e) list_medium_line_x4_t4_g7_t2

0x4ee3,	// (0x0001b0b3) list_medium_line_x4_t4_g7_t3_ParamLimits

0x4ee3,	// (0x0001b0b3) list_medium_line_x4_t4_g7_t3

0x4ef8,	// (0x0001b0c8) list_medium_line_x4_t4_g7_t4_ParamLimits

0x4ef8,	// (0x0001b0c8) list_medium_line_x4_t4_g7_t4

0x4f0a,	// (0x0001b0da) list_medium_line_x4_t4_g7_t5_ParamLimits

0x4f0a,	// (0x0001b0da) list_medium_line_x4_t4_g7_t5

0x0004,

0xfc07,	// (0x00025dd7) list_medium_line_x4_t4_g7_t_ParamLimits

0xfc07,	// (0x00025dd7) list_medium_line_x4_t4_g7_t

0x4f1c,	// (0x0001b0ec) list_single_dyc_row_pane_ParamLimits

0x4f1c,	// (0x0001b0ec) list_single_dyc_row_pane

0xddb2,	// (0x00023f82) call5_gesture_pane_ParamLimits

0xddb2,	// (0x00023f82) call5_gesture_pane

0xdde6,	// (0x00023fb6) call5_windows_pane_ParamLimits

0xdde6,	// (0x00023fb6) call5_windows_pane

0xde58,	// (0x00024028) call5_swipe_1_pane_cp_ParamLimits

0xde58,	// (0x00024028) call5_swipe_1_pane_cp

0xde64,	// (0x00024034) call5_swipe_2_pane_cp_ParamLimits

0xde64,	// (0x00024034) call5_swipe_2_pane_cp

0x1b59,	// (0x00017d29) call5_image_pane_cp

0xde70,	// (0x00024040) popup_call5_audio_first_window_cp_ParamLimits

0xde70,	// (0x00024040) popup_call5_audio_first_window_cp

0x5524,	// (0x0001b6f4) call5_swipe_1_pane_g1_cp_ParamLimits

0x5524,	// (0x0001b6f4) call5_swipe_1_pane_g1_cp

0x5564,	// (0x0001b734) call5_swipe_1_pane_g2_cp

0x553d,	// (0x0001b70d) call5_swipe_1_pane_t1_cp_ParamLimits

0x553d,	// (0x0001b70d) call5_swipe_1_pane_t1_cp

0x5524,	// (0x0001b6f4) call5_swipe_2_pane_g1_cp_ParamLimits

0x5524,	// (0x0001b6f4) call5_swipe_2_pane_g1_cp

0x556c,	// (0x0001b73c) call5_swipe_2_pane_g2_cp

0x5574,	// (0x0001b744) call5_swipe_2_pane_t1_cp_ParamLimits

0x5574,	// (0x0001b744) call5_swipe_2_pane_t1_cp

0x0612,	// (0x000167e2) main_sp_fs_email_pane

0x5589,	// (0x0001b759) main_sp_fs_listscroll_pane_te

0x5592,	// (0x0001b762) popup_sp_fs_action_menu_pane_ParamLimits

0x5592,	// (0x0001b762) popup_sp_fs_action_menu_pane

0x34f8,	// (0x000196c8) bg_sp_fs_ctrlbar_pane_g1

0x55d2,	// (0x0001b7a2) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x55db,	// (0x0001b7ab) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x55e4,	// (0x0001b7b4) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x34f8,	// (0x000196c8) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcf0,	// (0x00025ec0) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x32db,	// (0x000194ab) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x32db,	// (0x000194ab) bg_sp_fs_ctrlbar_ddmenu_pane

0x55ed,	// (0x0001b7bd) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x55ed,	// (0x0001b7bd) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x55f9,	// (0x0001b7c9) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x55f9,	// (0x0001b7c9) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcf9,	// (0x00025ec9) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcf9,	// (0x00025ec9) main_sp_fs_ctrlbar_ddmenu_pane_g

0x5605,	// (0x0001b7d5) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x5605,	// (0x0001b7d5) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x561f,	// (0x0001b7ef) list_medium_line_t2_right_icon_g1

0xde7c,	// (0x0002404c) list_medium_line_t2_right_icon_t1

0xde8c,	// (0x0002405c) list_medium_line_t2_right_icon_t2

0x0001,

0xfcfe,	// (0x00025ece) list_medium_line_t2_right_icon_t

0x2ff0,	// (0x000191c0) bg_sp_fs_ctrlbar_pane_ParamLimits

0x2ff0,	// (0x000191c0) bg_sp_fs_ctrlbar_pane

0xdef1,	// (0x000240c1) main_sp_fs_ctrlbar_button_pane_cp01

0xdef9,	// (0x000240c9) main_sp_fs_ctrlbar_ddmenu_pane

0x10ed,	// (0x000172bd) main_sp_fs_ctrlbar_pane_g1

0x565f,	// (0x0001b82f) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfd03,	// (0x00025ed3) main_sp_fs_ctrlbar_pane_g

0x566b,	// (0x0001b83b) main_sp_fs_ctrlbar_pane_t1

0xdf03,	// (0x000240d3) main_sp_fs_ctrlbar_pane

0xdf1f,	// (0x000240ef) main_sp_fs_listscroll_pane_te_cp01

0xdf30,	// (0x00024100) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0xdf30,	// (0x00024100) popup_sp_fs_action_menu_pane_cp01

0x0612,	// (0x000167e2) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x0612,	// (0x000167e2) bg_sp_fs_highlight_list_pane_cp01

0x5680,	// (0x0001b850) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x5680,	// (0x0001b850) sp_fs_action_menu_list_gene_pane_g1

0x568f,	// (0x0001b85f) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x568f,	// (0x0001b85f) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfd08,	// (0x00025ed8) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfd08,	// (0x00025ed8) sp_fs_action_menu_list_gene_pane_g

0x569c,	// (0x0001b86c) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x569c,	// (0x0001b86c) sp_fs_action_menu_list_gene_pane_t1

0x56b4,	// (0x0001b884) sp_fs_action_menu_list_gene_pane_ParamLimits

0x56b4,	// (0x0001b884) sp_fs_action_menu_list_gene_pane

0x56d1,	// (0x0001b8a1) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x56d1,	// (0x0001b8a1) popup_sp_fs_action_menu_bg_pane

0x56df,	// (0x0001b8af) sp_fs_action_menu_list_pane_ParamLimits

0x56df,	// (0x0001b8af) sp_fs_action_menu_list_pane

0x56fd,	// (0x0001b8cd) sp_fs_scroll_pane_cp01_ParamLimits

0x56fd,	// (0x0001b8cd) sp_fs_scroll_pane_cp01

0xdf48,	// (0x00024118) list_medium_line_plain_t2_t1

0xdf58,	// (0x00024128) list_medium_line_plain_t2_t2

0x0001,

0xfd0d,	// (0x00025edd) list_medium_line_plain_t2_t

0xdf66,	// (0x00024136) list_medium_line_plain_t3_t1

0xdf76,	// (0x00024146) list_medium_line_plain_t3_t2

0xdf84,	// (0x00024154) list_medium_line_plain_t3_t3

0x0002,

0xfd12,	// (0x00025ee2) list_medium_line_plain_t3_t

0x10ed,	// (0x000172bd) list_medium_line_x2_t2_g2_g1_ParamLimits

0x10ed,	// (0x000172bd) list_medium_line_x2_t2_g2_g1

0x1105,	// (0x000172d5) list_medium_line_x2_t2_g2_g2_ParamLimits

0x1105,	// (0x000172d5) list_medium_line_x2_t2_g2_g2

0x0001,

0xf279,	// (0x00025449) list_medium_line_x2_t2_g2_g_ParamLimits

0xf279,	// (0x00025449) list_medium_line_x2_t2_g2_g

0x16b7,	// (0x00017887) list_medium_line_x2_t2_g2_t1_ParamLimits

0x16b7,	// (0x00017887) list_medium_line_x2_t2_g2_t1

0x1126,	// (0x000172f6) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1126,	// (0x000172f6) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd19,	// (0x00025ee9) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd19,	// (0x00025ee9) list_medium_line_x2_t2_g2_t

0x10ed,	// (0x000172bd) list_medium_line_x2_t4_g2_g1_ParamLimits

0x10ed,	// (0x000172bd) list_medium_line_x2_t4_g2_g1

0x1105,	// (0x000172d5) list_medium_line_x2_t4_g2_g2_ParamLimits

0x1105,	// (0x000172d5) list_medium_line_x2_t4_g2_g2

0x0001,

0xf279,	// (0x00025449) list_medium_line_x2_t4_g2_g_ParamLimits

0xf279,	// (0x00025449) list_medium_line_x2_t4_g2_g

0xdf92,	// (0x00024162) list_medium_line_x2_t4_g2_t1_ParamLimits

0xdf92,	// (0x00024162) list_medium_line_x2_t4_g2_t1

0xdfac,	// (0x0002417c) list_medium_line_x2_t4_g2_t2_ParamLimits

0xdfac,	// (0x0002417c) list_medium_line_x2_t4_g2_t2

0xdfc1,	// (0x00024191) list_medium_line_x2_t4_g2_t3_ParamLimits

0xdfc1,	// (0x00024191) list_medium_line_x2_t4_g2_t3

0x1126,	// (0x000172f6) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1126,	// (0x000172f6) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd1e,	// (0x00025eee) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd1e,	// (0x00025eee) list_medium_line_x2_t4_g2_t

0x5723,	// (0x0001b8f3) list_medium_line_t3_right_iconx2_g1

0x561f,	// (0x0001b7ef) list_medium_line_t3_right_iconx2_g2

0xdfd6,	// (0x000241a6) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd27,	// (0x00025ef7) list_medium_line_t3_right_iconx2_g

0xdfde,	// (0x000241ae) list_medium_line_t3_right_iconx2_t1

0xdfee,	// (0x000241be) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd2e,	// (0x00025efe) list_medium_line_t3_right_iconx2_t

0x10ed,	// (0x000172bd) list_medium_line_x3_t4_g4_g1_ParamLimits

0x10ed,	// (0x000172bd) list_medium_line_x3_t4_g4_g1

0x10f9,	// (0x000172c9) list_medium_line_x3_t4_g4_g2_ParamLimits

0x10f9,	// (0x000172c9) list_medium_line_x3_t4_g4_g2

0x118c,	// (0x0001735c) list_medium_line_x3_t4_g4_g3_ParamLimits

0x118c,	// (0x0001735c) list_medium_line_x3_t4_g4_g3

0x572b,	// (0x0001b8fb) list_medium_line_x3_t4_g4_g4_ParamLimits

0x572b,	// (0x0001b8fb) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd33,	// (0x00025f03) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd33,	// (0x00025f03) list_medium_line_x3_t4_g4_g

0xdffc,	// (0x000241cc) list_medium_line_x3_t4_g4_t1_ParamLimits

0xdffc,	// (0x000241cc) list_medium_line_x3_t4_g4_t1

0xe013,	// (0x000241e3) list_medium_line_x3_t4_g4_t2_ParamLimits

0xe013,	// (0x000241e3) list_medium_line_x3_t4_g4_t2

0x16cc,	// (0x0001789c) list_medium_line_x3_t4_g4_t3_ParamLimits

0x16cc,	// (0x0001789c) list_medium_line_x3_t4_g4_t3

0x5737,	// (0x0001b907) list_medium_line_x3_t4_g4_t4_ParamLimits

0x5737,	// (0x0001b907) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd3c,	// (0x00025f0c) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd3c,	// (0x00025f0c) list_medium_line_x3_t4_g4_t

0xe028,	// (0x000241f8) list_single_dyc_row_text_pane_t1_ParamLimits

0xe028,	// (0x000241f8) list_single_dyc_row_text_pane_t1

0xe05f,	// (0x0002422f) list_single_dyc_row_text_pane_t2_ParamLimits

0xe05f,	// (0x0002422f) list_single_dyc_row_text_pane_t2

0x5754,	// (0x0001b924) list_single_dyc_row_text_pane_t3_ParamLimits

0x5754,	// (0x0001b924) list_single_dyc_row_text_pane_t3

0x0002,

0xfd45,	// (0x00025f15) list_single_dyc_row_text_pane_t_ParamLimits

0xfd45,	// (0x00025f15) list_single_dyc_row_text_pane_t

0x5766,	// (0x0001b936) list_single_dyc_row_pane_g1_ParamLimits

0x5766,	// (0x0001b936) list_single_dyc_row_pane_g1

0x5772,	// (0x0001b942) list_single_dyc_row_pane_g2_ParamLimits

0x5772,	// (0x0001b942) list_single_dyc_row_pane_g2

0x577e,	// (0x0001b94e) list_single_dyc_row_pane_g3_ParamLimits

0x577e,	// (0x0001b94e) list_single_dyc_row_pane_g3

0x578a,	// (0x0001b95a) list_single_dyc_row_pane_g4_ParamLimits

0x578a,	// (0x0001b95a) list_single_dyc_row_pane_g4

0x0003,

0xfd4c,	// (0x00025f1c) list_single_dyc_row_pane_g_ParamLimits

0xfd4c,	// (0x00025f1c) list_single_dyc_row_pane_g

0x5796,	// (0x0001b966) list_single_dyc_row_text_pane_ParamLimits

0x5796,	// (0x0001b966) list_single_dyc_row_text_pane

0x05a2,	// (0x00016772) bg_sp_fs_scroll_pane

0x57b5,	// (0x0001b985) thumb_sp_fs_scroll_pane

0x454d,	// (0x0001a71d) list_medium_line_g1_ParamLimits

0x454d,	// (0x0001a71d) list_medium_line_g1

0x57be,	// (0x0001b98e) list_medium_line_t1_ParamLimits

0x57be,	// (0x0001b98e) list_medium_line_t1

0x10ed,	// (0x000172bd) list_medium_line_x2_g1_ParamLimits

0x10ed,	// (0x000172bd) list_medium_line_x2_g1

0x10f9,	// (0x000172c9) list_medium_line_x2_g2_ParamLimits

0x10f9,	// (0x000172c9) list_medium_line_x2_g2

0x0001,

0xfd55,	// (0x00025f25) list_medium_line_x2_g_ParamLimits

0xfd55,	// (0x00025f25) list_medium_line_x2_g

0x57d3,	// (0x0001b9a3) list_medium_line_x2_t1_ParamLimits

0x57d3,	// (0x0001b9a3) list_medium_line_x2_t1

0x10ed,	// (0x000172bd) list_medium_line_x3_g1_ParamLimits

0x10ed,	// (0x000172bd) list_medium_line_x3_g1

0x10f9,	// (0x000172c9) list_medium_line_x3_g2_ParamLimits

0x10f9,	// (0x000172c9) list_medium_line_x3_g2

0x0001,

0xfd55,	// (0x00025f25) list_medium_line_x3_g_ParamLimits

0xfd55,	// (0x00025f25) list_medium_line_x3_g

0x57d3,	// (0x0001b9a3) list_medium_line_x3_t1_ParamLimits

0x57d3,	// (0x0001b9a3) list_medium_line_x3_t1

0x57e9,	// (0x0001b9b9) thumb_sp_fs_scroll_pane_g1

0x57f2,	// (0x0001b9c2) thumb_sp_fs_scroll_pane_g2

0x57fb,	// (0x0001b9cb) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd5a,	// (0x00025f2a) thumb_sp_fs_scroll_pane_g

0x57e9,	// (0x0001b9b9) bg_sp_fs_scroll_pane_g1

0x57f2,	// (0x0001b9c2) bg_sp_fs_scroll_pane_g2

0x57fb,	// (0x0001b9cb) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd5a,	// (0x00025f2a) bg_sp_fs_scroll_pane_g

0x10ed,	// (0x000172bd) list_medium_line_x2_t3_g4_g1_ParamLimits

0x10ed,	// (0x000172bd) list_medium_line_x2_t3_g4_g1

0x1180,	// (0x00017350) list_medium_line_x2_t3_g4_g2_ParamLimits

0x1180,	// (0x00017350) list_medium_line_x2_t3_g4_g2

0x10f9,	// (0x000172c9) list_medium_line_x2_t3_g4_g3_ParamLimits

0x10f9,	// (0x000172c9) list_medium_line_x2_t3_g4_g3

0x1105,	// (0x000172d5) list_medium_line_x2_t3_g4_g4_ParamLimits

0x1105,	// (0x000172d5) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2f5,	// (0x000254c5) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2f5,	// (0x000254c5) list_medium_line_x2_t3_g4_g

0xe0b9,	// (0x00024289) list_medium_line_x2_t3_g4_t1_ParamLimits

0xe0b9,	// (0x00024289) list_medium_line_x2_t3_g4_t1

0xe0cf,	// (0x0002429f) list_medium_line_x2_t3_g4_t2_ParamLimits

0xe0cf,	// (0x0002429f) list_medium_line_x2_t3_g4_t2

0x1126,	// (0x000172f6) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1126,	// (0x000172f6) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd61,	// (0x00025f31) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd61,	// (0x00025f31) list_medium_line_x2_t3_g4_t

0x454d,	// (0x0001a71d) list_medium_line_g2_g1_ParamLimits

0x454d,	// (0x0001a71d) list_medium_line_g2_g1

0x4559,	// (0x0001a729) list_medium_line_g2_g2_ParamLimits

0x4559,	// (0x0001a729) list_medium_line_g2_g2

0x0001,

0xfa2e,	// (0x00025bfe) list_medium_line_g2_g_ParamLimits

0xfa2e,	// (0x00025bfe) list_medium_line_g2_g

0x5804,	// (0x0001b9d4) list_medium_line_g2_t1_ParamLimits

0x5804,	// (0x0001b9d4) list_medium_line_g2_t1

0x454d,	// (0x0001a71d) list_medium_line_t3_g2_g1_ParamLimits

0x454d,	// (0x0001a71d) list_medium_line_t3_g2_g1

0x4559,	// (0x0001a729) list_medium_line_t3_g2_g2_ParamLimits

0x4559,	// (0x0001a729) list_medium_line_t3_g2_g2

0x0001,

0xfa2e,	// (0x00025bfe) list_medium_line_t3_g2_g_ParamLimits

0xfa2e,	// (0x00025bfe) list_medium_line_t3_g2_g

0xe0e8,	// (0x000242b8) list_medium_line_t3_g2_t1_ParamLimits

0xe0e8,	// (0x000242b8) list_medium_line_t3_g2_t1

0xe0ff,	// (0x000242cf) list_medium_line_t3_g2_t2_ParamLimits

0xe0ff,	// (0x000242cf) list_medium_line_t3_g2_t2

0xe114,	// (0x000242e4) list_medium_line_t3_g2_t3_ParamLimits

0xe114,	// (0x000242e4) list_medium_line_t3_g2_t3

0x0002,

0xfd68,	// (0x00025f38) list_medium_line_t3_g2_t_ParamLimits

0xfd68,	// (0x00025f38) list_medium_line_t3_g2_t

0x561f,	// (0x0001b7ef) list_medium_line_right_icon_g1

0x5819,	// (0x0001b9e9) list_medium_line_right_icon_t1

0x454d,	// (0x0001a71d) list_medium_line_t2_g1_ParamLimits

0x454d,	// (0x0001a71d) list_medium_line_t2_g1

0xe129,	// (0x000242f9) list_medium_line_t2_t1_ParamLimits

0xe129,	// (0x000242f9) list_medium_line_t2_t1

0xe143,	// (0x00024313) list_medium_line_t2_t2_ParamLimits

0xe143,	// (0x00024313) list_medium_line_t2_t2

0x0001,

0xfd6f,	// (0x00025f3f) list_medium_line_t2_t_ParamLimits

0xfd6f,	// (0x00025f3f) list_medium_line_t2_t

0x454d,	// (0x0001a71d) list_medium_line_t3_g1_ParamLimits

0x454d,	// (0x0001a71d) list_medium_line_t3_g1

0xe158,	// (0x00024328) list_medium_line_t3_t1_ParamLimits

0xe158,	// (0x00024328) list_medium_line_t3_t1

0xe16f,	// (0x0002433f) list_medium_line_t3_t2_ParamLimits

0xe16f,	// (0x0002433f) list_medium_line_t3_t2

0xe184,	// (0x00024354) list_medium_line_t3_t3_ParamLimits

0xe184,	// (0x00024354) list_medium_line_t3_t3

0x0002,

0xfd74,	// (0x00025f44) list_medium_line_t3_t_ParamLimits

0xfd74,	// (0x00025f44) list_medium_line_t3_t

0x454d,	// (0x0001a71d) list_medium_line_g3_g1_ParamLimits

0x454d,	// (0x0001a71d) list_medium_line_g3_g1

0x5827,	// (0x0001b9f7) list_medium_line_g3_g2_ParamLimits

0x5827,	// (0x0001b9f7) list_medium_line_g3_g2

0x4559,	// (0x0001a729) list_medium_line_g3_g3_ParamLimits

0x4559,	// (0x0001a729) list_medium_line_g3_g3

0x0002,

0xfd7b,	// (0x00025f4b) list_medium_line_g3_g_ParamLimits

0xfd7b,	// (0x00025f4b) list_medium_line_g3_g

0x5833,	// (0x0001ba03) list_medium_line_g3_t1_ParamLimits

0x5833,	// (0x0001ba03) list_medium_line_g3_t1

0x454d,	// (0x0001a71d) list_medium_line_t2_g3_g1_ParamLimits

0x454d,	// (0x0001a71d) list_medium_line_t2_g3_g1

0x5827,	// (0x0001b9f7) list_medium_line_t2_g3_g2_ParamLimits

0x5827,	// (0x0001b9f7) list_medium_line_t2_g3_g2

0x4559,	// (0x0001a729) list_medium_line_t2_g3_g3_ParamLimits

0x4559,	// (0x0001a729) list_medium_line_t2_g3_g3

0x0002,

0xfd7b,	// (0x00025f4b) list_medium_line_t2_g3_g_ParamLimits

0xfd7b,	// (0x00025f4b) list_medium_line_t2_g3_g

0xe196,	// (0x00024366) list_medium_line_t2_g3_t1_ParamLimits

0xe196,	// (0x00024366) list_medium_line_t2_g3_t1

0xe1ad,	// (0x0002437d) list_medium_line_t2_g3_t2_ParamLimits

0xe1ad,	// (0x0002437d) list_medium_line_t2_g3_t2

0x0001,

0xfd82,	// (0x00025f52) list_medium_line_t2_g3_t_ParamLimits

0xfd82,	// (0x00025f52) list_medium_line_t2_g3_t

0x454d,	// (0x0001a71d) list_medium_line_t3_g3_g1_ParamLimits

0x454d,	// (0x0001a71d) list_medium_line_t3_g3_g1

0x5827,	// (0x0001b9f7) list_medium_line_t3_g3_g2_ParamLimits

0x5827,	// (0x0001b9f7) list_medium_line_t3_g3_g2

0x4559,	// (0x0001a729) list_medium_line_t3_g3_g3_ParamLimits

0x4559,	// (0x0001a729) list_medium_line_t3_g3_g3

0x0002,

0xfd7b,	// (0x00025f4b) list_medium_line_t3_g3_g_ParamLimits

0xfd7b,	// (0x00025f4b) list_medium_line_t3_g3_g

0xe1c2,	// (0x00024392) list_medium_line_t3_g3_t1_ParamLimits

0xe1c2,	// (0x00024392) list_medium_line_t3_g3_t1

0xe1d6,	// (0x000243a6) list_medium_line_t3_g3_t2_ParamLimits

0xe1d6,	// (0x000243a6) list_medium_line_t3_g3_t2

0xe1e8,	// (0x000243b8) list_medium_line_t3_g3_t3_ParamLimits

0xe1e8,	// (0x000243b8) list_medium_line_t3_g3_t3

0x0002,

0xfd87,	// (0x00025f57) list_medium_line_t3_g3_t_ParamLimits

0xfd87,	// (0x00025f57) list_medium_line_t3_g3_t

0x5723,	// (0x0001b8f3) list_medium_line_right_iconx2_g1

0x561f,	// (0x0001b7ef) list_medium_line_right_iconx2_g2

0x0001,

0xfd8e,	// (0x00025f5e) list_medium_line_right_iconx2_g

0x5848,	// (0x0001ba18) list_medium_line_right_iconx2_t1

0x5723,	// (0x0001b8f3) list_medium_line_t2_right_iconx2_g1

0x561f,	// (0x0001b7ef) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd8e,	// (0x00025f5e) list_medium_line_t2_right_iconx2_g

0xe1fa,	// (0x000243ca) list_medium_line_t2_right_iconx2_t1

0xe20a,	// (0x000243da) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd93,	// (0x00025f63) list_medium_line_t2_right_iconx2_t

0x5856,	// (0x0001ba26) list_medium_line_x4_t4_t1

0xe218,	// (0x000243e8) list_medium_line_x4_t4_t2

0xe228,	// (0x000243f8) list_medium_line_x4_t4_t3

0xe238,	// (0x00024408) list_medium_line_x4_t4_t4

0x0003,

0xfd98,	// (0x00025f68) list_medium_line_x4_t4_t

0xe271,	// (0x00024441) tport_appsw_pane_ParamLimits

0xe271,	// (0x00024441) tport_appsw_pane

0xe27d,	// (0x0002444d) tport_contact_pane_ParamLimits

0xe27d,	// (0x0002444d) tport_contact_pane

0xe28d,	// (0x0002445d) tport_listscroll_pane_ParamLimits

0xe28d,	// (0x0002445d) tport_listscroll_pane

0xe29d,	// (0x0002446d) cell_tport_appsw_pane_ParamLimits

0xe29d,	// (0x0002446d) cell_tport_appsw_pane

0x37fc,	// (0x000199cc) tport_appsw_pane_g1_ParamLimits

0x37fc,	// (0x000199cc) tport_appsw_pane_g1

0x5864,	// (0x0001ba34) tport_contact_pane_g1

0x586d,	// (0x0001ba3d) tport_contact_pane_t1

0x587b,	// (0x0001ba4b) tport_contact_pane_t2

0x0001,

0xfda1,	// (0x00025f71) tport_contact_pane_t

0x5889,	// (0x0001ba59) list_tport_pane

0x5892,	// (0x0001ba62) scroll_pane_cp_030

0x58a3,	// (0x0001ba73) cell_tport_appsw_pane_g1

0x58b3,	// (0x0001ba83) cell_tport_appsw_pane_t1

0x05a2,	// (0x00016772) grid_highlight_pane_cp019

0xe2c8,	// (0x00024498) list_tport_double_graphic_pane_ParamLimits

0xe2c8,	// (0x00024498) list_tport_double_graphic_pane

0x0612,	// (0x000167e2) list_highlight_pane_cp023_ParamLimits

0x0612,	// (0x000167e2) list_highlight_pane_cp023

0xe2db,	// (0x000244ab) list_tport_double_graphic_pane_g1_ParamLimits

0xe2db,	// (0x000244ab) list_tport_double_graphic_pane_g1

0xe2e8,	// (0x000244b8) list_tport_double_graphic_pane_t1_ParamLimits

0xe2e8,	// (0x000244b8) list_tport_double_graphic_pane_t1

0xe2fd,	// (0x000244cd) list_tport_double_graphic_pane_t2_ParamLimits

0xe2fd,	// (0x000244cd) list_tport_double_graphic_pane_t2

0x0001,

0xfdad,	// (0x00025f7d) list_tport_double_graphic_pane_t_ParamLimits

0xfdad,	// (0x00025f7d) list_tport_double_graphic_pane_t

0x05a2,	// (0x00016772) main_cale_note_pane

0x800e,	// (0x0001e1de) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x800e,	// (0x0001e1de) cell_vitu2_function_top_wide_pane_cp01

0xdab7,	// (0x00023c87) wait_bar_pane_cp05_ParamLimits

0x05a2,	// (0x00016772) listscroll_cmail_pane

0x58c9,	// (0x0001ba99) list_cmail_pane

0xe319,	// (0x000244e9) list_cmail_body_pane

0xe33d,	// (0x0002450d) list_single_cmail_header_caption_pane

0xe36b,	// (0x0002453b) list_single_cmail_header_detail_pane_ParamLimits

0xe36b,	// (0x0002453b) list_single_cmail_header_detail_pane

0xe3a3,	// (0x00024573) list_single_cmail_header_caption_pane_t1

0xe3b3,	// (0x00024583) list_single_cmail_header_detail_pane_g1_ParamLimits

0xe3b3,	// (0x00024583) list_single_cmail_header_detail_pane_g1

0x58e9,	// (0x0001bab9) list_single_cmail_header_detail_pane_g2_ParamLimits

0x58e9,	// (0x0001bab9) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdb2,	// (0x00025f82) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdb2,	// (0x00025f82) list_single_cmail_header_detail_pane_g

0x5902,	// (0x0001bad2) list_single_cmail_header_detail_pane_t1_ParamLimits

0x5902,	// (0x0001bad2) list_single_cmail_header_detail_pane_t1

0x5934,	// (0x0001bb04) list_single_cmail_header_editor_pane_bg_ParamLimits

0x5934,	// (0x0001bb04) list_single_cmail_header_editor_pane_bg

0x5946,	// (0x0001bb16) list_cmail_body_pane_g1

0x594f,	// (0x0001bb1f) list_cmail_body_pane_t1

0x42a4,	// (0x0001a474) list_single_cmail_header_editor_pane_bg_g1

0x13a7,	// (0x00017577) list_single_cmail_header_editor_pane_bg_g1_copy1

0x42b4,	// (0x0001a484) list_single_cmail_header_editor_pane_bg_g1_copy2

0x42ac,	// (0x0001a47c) list_single_cmail_header_editor_pane_bg_g1_copy3

0x4525,	// (0x0001a6f5) list_single_cmail_header_editor_pane_bg_g1_copy4

0x42d4,	// (0x0001a4a4) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x42c4,	// (0x0001a494) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x42cc,	// (0x0001a49c) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x1387,	// (0x00017557) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xe3f1,	// (0x000245c1) calenote_gesture_pane_ParamLimits

0xe3f1,	// (0x000245c1) calenote_gesture_pane

0xe40b,	// (0x000245db) calenote_window_pane_ParamLimits

0xe40b,	// (0x000245db) calenote_window_pane

0x595d,	// (0x0001bb2d) popup_note_window_cp01

0xe423,	// (0x000245f3) calenote_swipe_1_pane_ParamLimits

0xe423,	// (0x000245f3) calenote_swipe_1_pane

0xde64,	// (0x00024034) calenote_swipe_2_pane_ParamLimits

0xde64,	// (0x00024034) calenote_swipe_2_pane

0x5524,	// (0x0001b6f4) calenote_swipe_1_pane_g1_ParamLimits

0x5524,	// (0x0001b6f4) calenote_swipe_1_pane_g1

0x5531,	// (0x0001b701) calenote_swipe_1_pane_g2_ParamLimits

0x5531,	// (0x0001b701) calenote_swipe_1_pane_g2

0x0001,

0xfce6,	// (0x00025eb6) calenote_swipe_1_pane_g_ParamLimits

0xfce6,	// (0x00025eb6) calenote_swipe_1_pane_g

0x596f,	// (0x0001bb3f) calenote_swipe_1_pane_t1_ParamLimits

0x596f,	// (0x0001bb3f) calenote_swipe_1_pane_t1

0x5524,	// (0x0001b6f4) calenote_swipe_2_pane_g1_ParamLimits

0x5524,	// (0x0001b6f4) calenote_swipe_2_pane_g1

0x598e,	// (0x0001bb5e) calenote_swipe_2_pane_g2_ParamLimits

0x598e,	// (0x0001bb5e) calenote_swipe_2_pane_g2

0x0001,

0xfdbe,	// (0x00025f8e) calenote_swipe_2_pane_g_ParamLimits

0xfdbe,	// (0x00025f8e) calenote_swipe_2_pane_g

0x599a,	// (0x0001bb6a) calenote_swipe_2_pane_t1_ParamLimits

0x599a,	// (0x0001bb6a) calenote_swipe_2_pane_t1

0x05a2,	// (0x00016772) main_mup_navstr_pane

0xbc3a,	// (0x00021e0a) main_mup3_pane_t7_ParamLimits

0xbc3a,	// (0x00021e0a) main_mup3_pane_t7

0x7931,	// (0x0001db01) main_mp4_pane_g6_ParamLimits

0x7931,	// (0x0001db01) main_mp4_pane_g6

0x7c26,	// (0x0001ddf6) main_image3_pane_t4_ParamLimits

0x7c26,	// (0x0001ddf6) main_image3_pane_t4

0xe436,	// (0x00024606) popup_navstr_preview_pane_ParamLimits

0xe436,	// (0x00024606) popup_navstr_preview_pane

0xe442,	// (0x00024612) scroll_navstr_pane_ParamLimits

0xe442,	// (0x00024612) scroll_navstr_pane

0x05a2,	// (0x00016772) bg_popup_preview_window_pane_cp04

0x59c1,	// (0x0001bb91) popup_navstr_preview_pane_t1

0xe44e,	// (0x0002461e) scroll_navstr_pane_g1_ParamLimits

0xe44e,	// (0x0002461e) scroll_navstr_pane_g1

0xe45b,	// (0x0002462b) scroll_navstr_pane_t1_ParamLimits

0xe45b,	// (0x0002462b) scroll_navstr_pane_t1

0x5966,	// (0x0001bb36) bg_button_pane_cp014

0x5966,	// (0x0001bb36) bg_button_pane_cp030

0x54c5,	// (0x0001b695) list_double_fisheye_pane_g4_ParamLimits

0x54c5,	// (0x0001b695) list_double_fisheye_pane_g4

0x54d1,	// (0x0001b6a1) list_double_fisheye_pane_g5_ParamLimits

0x54d1,	// (0x0001b6a1) list_double_fisheye_pane_g5

0x58d1,	// (0x0001baa1) sp_fs_scroll_pane_cp03

0x10ed,	// (0x000172bd) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x565f,	// (0x0001b82f) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfd03,	// (0x00025ed3) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x566b,	// (0x0001b83b) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe30f,	// (0x000244df) sp_fs_scroll_pane_cp02

0x0f6e,	// (0x0001713e) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x0f6e,	// (0x0001713e) popup_sp_fs_calendar_preview_list_single_pane

0x05a2,	// (0x00016772) main_cam6_pano_pane

0x0612,	// (0x000167e2) main_mup3_pane_ParamLimits

0x05a2,	// (0x00016772) main_phacti_pane

0xd98c,	// (0x00023b5c) bg_button_pane_cp11

0xd9a4,	// (0x00023b74) main_mobtv_info_pane_g2_ParamLimits

0xd9a4,	// (0x00023b74) main_mobtv_info_pane_g2

0x0001,

0xfc63,	// (0x00025e33) main_mobtv_info_pane_g_ParamLimits

0xfc63,	// (0x00025e33) main_mobtv_info_pane_g

0xdb56,	// (0x00023d26) sc_clock_pane_t5_ParamLimits

0xdb56,	// (0x00023d26) sc_clock_pane_t5

0xdbf8,	// (0x00023dc8) main_radioblah_pane_g1_ParamLimits

0x5433,	// (0x0001b603) main_radioblah_pane_t3_ParamLimits

0x5433,	// (0x0001b603) main_radioblah_pane_t3

0x544b,	// (0x0001b61b) main_radioblah_pane_t4_ParamLimits

0x544b,	// (0x0001b61b) main_radioblah_pane_t4

0xdc16,	// (0x00023de6) main_radioblah_text_pane_ParamLimits

0xdc16,	// (0x00023de6) main_radioblah_text_pane

0xdc23,	// (0x00023df3) main_radioblah_info_pane_g1_ParamLimits

0xdcb8,	// (0x00023e88) main_radioblah_info_pane_t4_ParamLimits

0xdcb8,	// (0x00023e88) main_radioblah_info_pane_t4

0x0612,	// (0x000167e2) main_sp_fs_calendar_pane

0xe46d,	// (0x0002463d) main_phacti_pane_g1

0xe475,	// (0x00024645) phacti_note_pane_ParamLimits

0xe475,	// (0x00024645) phacti_note_pane

0x59d8,	// (0x0001bba8) phacti_term_pane_ParamLimits

0x59d8,	// (0x0001bba8) phacti_term_pane

0x59ed,	// (0x0001bbbd) phacti_note_pane_t1_ParamLimits

0x59ed,	// (0x0001bbbd) phacti_note_pane_t1

0x5a04,	// (0x0001bbd4) phacti_term_pane_g1

0x5a0c,	// (0x0001bbdc) phacti_term_pane_t1_ParamLimits

0x5a0c,	// (0x0001bbdc) phacti_term_pane_t1

0x5a36,	// (0x0001bc06) popup_sp_fs_calendar_preview_list_single_pane_g1

0x5a3e,	// (0x0001bc0e) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdc8,	// (0x00025f98) popup_sp_fs_calendar_preview_list_single_pane_g

0x5a46,	// (0x0001bc16) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x5a46,	// (0x0001bc16) popup_sp_fs_calendar_preview_list_single_pane_t1

0x5a5c,	// (0x0001bc2c) aid_popup_sp_fs_bg_corner_pane

0x34f8,	// (0x000196c8) popup_sp_fs_calendar_preview_bg_pane_g1

0x05a2,	// (0x00016772) popup_sp_fs_calendar_preview_bg_pane

0x5a64,	// (0x0001bc34) popup_sp_fs_calendar_preview_list_pane

0x0612,	// (0x000167e2) bg_main_sp_fs_cale_pane_ParamLimits

0x0612,	// (0x000167e2) bg_main_sp_fs_cale_pane

0x5a75,	// (0x0001bc45) listscroll_cale_mrui_pane_ParamLimits

0x5a75,	// (0x0001bc45) listscroll_cale_mrui_pane

0x5a89,	// (0x0001bc59) listscroll_sp_fs_schedule_track_pane

0x5a92,	// (0x0001bc62) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x5a92,	// (0x0001bc62) main_sp_fs_ctrlbar_pane_cp01

0x5aa3,	// (0x0001bc73) main_sp_fs_ribbon_pane

0x5aab,	// (0x0001bc7b) popup_sp_fs_cale_preview_window

0xe4b8,	// (0x00024688) list_single_sp_fs_schedule_track_pane_ParamLimits

0xe4b8,	// (0x00024688) list_single_sp_fs_schedule_track_pane

0x3a0f,	// (0x00019bdf) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x3a0f,	// (0x00019bdf) bg_sp_fs_highlight_list_pane_cp03

0xe4da,	// (0x000246aa) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xe4da,	// (0x000246aa) list_single_sp_fs_schedule_track_pane_g1

0xe4e6,	// (0x000246b6) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xe4e6,	// (0x000246b6) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdcd,	// (0x00025f9d) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdcd,	// (0x00025f9d) list_single_sp_fs_schedule_track_pane_g

0xe4f2,	// (0x000246c2) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xe4f2,	// (0x000246c2) list_single_sp_fs_schedule_track_pane_t1

0xe50a,	// (0x000246da) sp_fs_schedule_track_pane_ParamLimits

0xe50a,	// (0x000246da) sp_fs_schedule_track_pane

0x5abd,	// (0x0001bc8d) sp_fs_schedule_track_pane_g1

0x5ac5,	// (0x0001bc95) sp_fs_schedule_track_pane_g2

0x5acd,	// (0x0001bc9d) sp_fs_schedule_track_pane_g3

0x5ad5,	// (0x0001bca5) sp_fs_schedule_track_pane_g4

0x5add,	// (0x0001bcad) sp_fs_schedule_track_pane_g5

0x0004,

0xfdd2,	// (0x00025fa2) sp_fs_schedule_track_pane_g

0x42a4,	// (0x0001a474) bg_sp_fs_schedule_viewer_highlight_g1

0x13a7,	// (0x00017577) bg_sp_fs_schedule_viewer_highlight_g2

0x42ac,	// (0x0001a47c) bg_sp_fs_schedule_viewer_highlight_g3

0x42b4,	// (0x0001a484) bg_sp_fs_schedule_viewer_highlight_g4

0x4525,	// (0x0001a6f5) bg_sp_fs_schedule_viewer_highlight_g5

0x42c4,	// (0x0001a494) bg_sp_fs_schedule_viewer_highlight_g6

0x42cc,	// (0x0001a49c) bg_sp_fs_schedule_viewer_highlight_g7

0x42d4,	// (0x0001a4a4) bg_sp_fs_schedule_viewer_highlight_g8

0x1387,	// (0x00017557) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfddd,	// (0x00025fad) bg_sp_fs_schedule_viewer_highlight_g

0x05a2,	// (0x00016772) bg_main_sp_fs_ribbon_pane

0xe51a,	// (0x000246ea) main_sp_fs_ribbon_pane_g1

0x5ae5,	// (0x0001bcb5) main_sp_fs_ribbon_pane_t1

0xe523,	// (0x000246f3) main_sp_fs_ribbon_pane_t2

0x5af4,	// (0x0001bcc4) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdf0,	// (0x00025fc0) main_sp_fs_ribbon_pane_t

0x5b03,	// (0x0001bcd3) main_sp_fs_ribbon_scheduler_pane

0x5b0b,	// (0x0001bcdb) bg_main_sp_fs_ribbon_pane_g1

0x5b14,	// (0x0001bce4) bg_main_sp_fs_ribbon_pane_g2

0x5b1d,	// (0x0001bced) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdf7,	// (0x00025fc7) bg_main_sp_fs_ribbon_pane_g

0x5b25,	// (0x0001bcf5) main_sp_fs_ribbon_scheduler_pane_g1

0x5b2e,	// (0x0001bcfe) main_sp_fs_ribbon_scheduler_pane_g2

0x5b37,	// (0x0001bd07) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdfe,	// (0x00025fce) main_sp_fs_ribbon_scheduler_pane_g

0x5b40,	// (0x0001bd10) list_cale_mrui_pane

0xe532,	// (0x00024702) sp_fs_scroll_pane_cp07_ParamLimits

0xe532,	// (0x00024702) sp_fs_scroll_pane_cp07

0xe548,	// (0x00024718) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xe548,	// (0x00024718) bg_sp_fs_schedule_viewer_highlight

0x5b49,	// (0x0001bd19) list_single_sp_fs_schedule_track_pane_cp01

0x5b51,	// (0x0001bd21) list_sp_fs_schedule_track_pane

0x5b59,	// (0x0001bd29) sp_fs_scroll_pane_cp06_ParamLimits

0x5b59,	// (0x0001bd29) sp_fs_scroll_pane_cp06

0x34f8,	// (0x000196c8) bgmain_sp_fs_calendar_pane_g1

0xe555,	// (0x00024725) list_single_cale_mrui_pane_ParamLimits

0xe555,	// (0x00024725) list_single_cale_mrui_pane

0x5b6b,	// (0x0001bd3b) list_single_cale_mrui_row_pane_ParamLimits

0x5b6b,	// (0x0001bd3b) list_single_cale_mrui_row_pane

0x5b78,	// (0x0001bd48) list_single_cale_mrui_row_pane_g1_ParamLimits

0x5b78,	// (0x0001bd48) list_single_cale_mrui_row_pane_g1

0x5bb0,	// (0x0001bd80) list_single_cale_mrui_row_pane_t1_ParamLimits

0x5bb0,	// (0x0001bd80) list_single_cale_mrui_row_pane_t1

0xe584,	// (0x00024754) list_single_cale_mrui_row_pane_t2_ParamLimits

0xe584,	// (0x00024754) list_single_cale_mrui_row_pane_t2

0x5bc2,	// (0x0001bd92) list_single_cale_mrui_row_pane_t3_ParamLimits

0x5bc2,	// (0x0001bd92) list_single_cale_mrui_row_pane_t3

0x5bf1,	// (0x0001bdc1) list_single_cale_mrui_row_pane_t4_ParamLimits

0x5bf1,	// (0x0001bdc1) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe0a,	// (0x00025fda) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe0a,	// (0x00025fda) list_single_cale_mrui_row_pane_t

0xe5ea,	// (0x000247ba) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xe5ea,	// (0x000247ba) list_single_cmail_header_editor_pane_bg_cp01

0xe60c,	// (0x000247dc) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xe60c,	// (0x000247dc) list_single_cmail_header_editor_pane_bg_cp02

0xe628,	// (0x000247f8) main_radioblah_text_pane_t1_ParamLimits

0xe628,	// (0x000247f8) main_radioblah_text_pane_t1

0x5c20,	// (0x0001bdf0) cam6_indi_pane_cp01

0x5c28,	// (0x0001bdf8) cam6_mode_pane_cp01

0x5c30,	// (0x0001be00) cam6_pano_pane

0x5c39,	// (0x0001be09) cam6_zoom_pane_cp01

0x5c41,	// (0x0001be11) cam6_pano_image_pane

0x5c4c,	// (0x0001be1c) cam6_pano_pane_g1

0x51ab,	// (0x0001b37b) cam6_pano_pane_g2

0x5c55,	// (0x0001be25) cam6_pano_pane_g3

0x5c5e,	// (0x0001be2e) cam6_pano_pane_g4

0x3ac4,	// (0x00019c94) cam6_pano_pane_g5

0x5c67,	// (0x0001be37) cam6_pano_pane_g6

0x5c71,	// (0x0001be41) cam6_pano_pane_g7

0x5c79,	// (0x0001be49) cam6_pano_pane_g8

0x5c82,	// (0x0001be52) cam6_pano_pane_g9

0x0008,

0xfe13,	// (0x00025fe3) cam6_pano_pane_g

0x05a2,	// (0x00016772) main_browser_tag_pane

0x59b9,	// (0x0001bb89) grid_navstr_albumart_pane

0x5c8d,	// (0x0001be5d) cell_navstr_albumart_pane_ParamLimits

0x5c8d,	// (0x0001be5d) cell_navstr_albumart_pane

0x1cda,	// (0x00017eaa) cell_navstr_albumart_pane_g1

0x2e0d,	// (0x00018fdd) cell_navstr_albumart_pane_g2

0x2e1d,	// (0x00018fed) cell_navstr_albumart_pane_g3

0x2e15,	// (0x00018fe5) cell_navstr_albumart_pane_g4

0x0003,

0xfe26,	// (0x00025ff6) cell_navstr_albumart_pane_g

0xe645,	// (0x00024815) bt_list_pane_ParamLimits

0xe645,	// (0x00024815) bt_list_pane

0xe66c,	// (0x0002483c) bt_list_pane_t1

0xe67b,	// (0x0002484b) bt_list_pane_t2

0x0001,

0xfe2f,	// (0x00025fff) bt_list_pane_t

0x05a2,	// (0x00016772) main_cale_prevew_pane

0xe68a,	// (0x0002485a) popup_cale_preview_window_ParamLimits

0xe68a,	// (0x0002485a) popup_cale_preview_window

0x0612,	// (0x000167e2) bg_popup_preview_window_pane_cp05_ParamLimits

0x0612,	// (0x000167e2) bg_popup_preview_window_pane_cp05

0x5caf,	// (0x0001be7f) list_cale_preview_pane_ParamLimits

0x5caf,	// (0x0001be7f) list_cale_preview_pane

0xe6a1,	// (0x00024871) list_double_cale_preview_pane_ParamLimits

0xe6a1,	// (0x00024871) list_double_cale_preview_pane

0xe6b3,	// (0x00024883) list_single_cale_preview_pane_ParamLimits

0xe6b3,	// (0x00024883) list_single_cale_preview_pane

0xe6c7,	// (0x00024897) list_single_cale_preview_pane_g1

0xe6cf,	// (0x0002489f) list_single_cale_preview_pane_t1_ParamLimits

0xe6cf,	// (0x0002489f) list_single_cale_preview_pane_t1

0xe6e4,	// (0x000248b4) list_double_cale_preview_pane_g1

0xe6ec,	// (0x000248bc) list_double_cale_preview_pane_t1_ParamLimits

0xe6ec,	// (0x000248bc) list_double_cale_preview_pane_t1

0xe701,	// (0x000248d1) list_double_cale_preview_pane_t2_ParamLimits

0xe701,	// (0x000248d1) list_double_cale_preview_pane_t2

0x0001,

0xfe34,	// (0x00026004) list_double_cale_preview_pane_t_ParamLimits

0xfe34,	// (0x00026004) list_double_cale_preview_pane_t

0x05a2,	// (0x00016772) main_ezdial_pane

0x0612,	// (0x000167e2) main_sp_fs_email_pane_ParamLimits

0xde9a,	// (0x0002406a) cmail_ddmenu_btn01_pane_ParamLimits

0xde9a,	// (0x0002406a) cmail_ddmenu_btn01_pane

0xdeb7,	// (0x00024087) cmail_ddmenu_btn02_pane_ParamLimits

0xdeb7,	// (0x00024087) cmail_ddmenu_btn02_pane

0xded5,	// (0x000240a5) cmail_ddmenu_btn03_pane_ParamLimits

0xded5,	// (0x000240a5) cmail_ddmenu_btn03_pane

0xdf03,	// (0x000240d3) main_sp_fs_ctrlbar_pane_ParamLimits

0xdf1f,	// (0x000240ef) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xe319,	// (0x000244e9) list_cmail_body_pane_ParamLimits

0x58e0,	// (0x0001bab0) bg_button_pane_cp12

0x58f5,	// (0x0001bac5) list_single_cmail_header_detail_pane_g3_ParamLimits

0x58f5,	// (0x0001bac5) list_single_cmail_header_detail_pane_g3

0xe3cb,	// (0x0002459b) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe3cb,	// (0x0002459b) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdb9,	// (0x00025f89) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdb9,	// (0x00025f89) list_single_cmail_header_detail_pane_t

0x5a21,	// (0x0001bbf1) phacti_term_pane_t2_ParamLimits

0x5a21,	// (0x0001bbf1) phacti_term_pane_t2

0x0001,

0xfdc3,	// (0x00025f93) phacti_term_pane_t_ParamLimits

0xfdc3,	// (0x00025f93) phacti_term_pane_t

0x5cbb,	// (0x0001be8b) aid_size_list_single_double

0xe719,	// (0x000248e9) popup_ezdial_listscroll_window

0xe73a,	// (0x0002490a) popup_number_entry_window_cp01

0x1b59,	// (0x00017d29) bg_popup_call_pane_cp09

0x5cc7,	// (0x0001be97) ezdial_list_pane

0x5ccf,	// (0x0001be9f) scroll_pane_cp23

0x32db,	// (0x000194ab) bg_button_pane_cp028_ParamLimits

0x32db,	// (0x000194ab) bg_button_pane_cp028

0xe748,	// (0x00024918) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xe748,	// (0x00024918) cmail_ddmenu_btn01_pane_g1

0xe75a,	// (0x0002492a) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xe75a,	// (0x0002492a) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe39,	// (0x00026009) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe39,	// (0x00026009) cmail_ddmenu_btn01_pane_g

0x5cd7,	// (0x0001bea7) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x5cd7,	// (0x0001bea7) cmail_ddmenu_btn01_pane_t1

0x2ff0,	// (0x000191c0) bg_button_pane_cp029_ParamLimits

0x2ff0,	// (0x000191c0) bg_button_pane_cp029

0xe75a,	// (0x0002492a) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xe75a,	// (0x0002492a) cmail_ddmenu_btn02_pane_g1

0xe772,	// (0x00024942) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xe772,	// (0x00024942) cmail_ddmenu_btn02_pane_t1

0x3a0f,	// (0x00019bdf) bg_button_pane_cp031_ParamLimits

0x3a0f,	// (0x00019bdf) bg_button_pane_cp031

0xe75a,	// (0x0002492a) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xe75a,	// (0x0002492a) cmail_ddmenu_btn03_pane_g1

0xe772,	// (0x00024942) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xe772,	// (0x00024942) cmail_ddmenu_btn03_pane_t1

0xc4c7,	// (0x00022697) cell_dialer2_keypad_pane_t1_ParamLimits

0xc4e1,	// (0x000226b1) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xc4e1,	// (0x000226b1) cell_dialer2_keypad_pane_t1_copy1

0xd84e,	// (0x00023a1e) ncimui_group_button_pane

0x0612,	// (0x000167e2) main_sp_fs_calendar_pane_ParamLimits

0xe33d,	// (0x0002450d) list_single_cmail_header_caption_pane_ParamLimits

0x5a6c,	// (0x0001bc3c) aid_recal_txt_sm_pane

0x05a2,	// (0x00016772) mian_recal_day_pane

0x5aab,	// (0x0001bc7b) popup_sp_fs_cale_preview_window_ParamLimits

0x05a2,	// (0x00016772) list_recal_day_pane

0x5d0e,	// (0x0001bede) list_single_recal_day_pane_ParamLimits

0x5d0e,	// (0x0001bede) list_single_recal_day_pane

0x5d20,	// (0x0001bef0) list_single_recal_day_pane_g1_ParamLimits

0x5d20,	// (0x0001bef0) list_single_recal_day_pane_g1

0x5d2c,	// (0x0001befc) list_single_recal_day_pane_g2_ParamLimits

0x5d2c,	// (0x0001befc) list_single_recal_day_pane_g2

0x5d3b,	// (0x0001bf0b) list_single_recal_day_pane_g3_ParamLimits

0x5d3b,	// (0x0001bf0b) list_single_recal_day_pane_g3

0xe796,	// (0x00024966) list_single_recal_day_pane_g4_ParamLimits

0xe796,	// (0x00024966) list_single_recal_day_pane_g4

0x5d47,	// (0x0001bf17) list_single_recal_day_pane_g5_ParamLimits

0x5d47,	// (0x0001bf17) list_single_recal_day_pane_g5

0x5d56,	// (0x0001bf26) list_single_recal_day_pane_g6_ParamLimits

0x5d56,	// (0x0001bf26) list_single_recal_day_pane_g6

0x0005,

0xfe48,	// (0x00026018) list_single_recal_day_pane_g_ParamLimits

0xfe48,	// (0x00026018) list_single_recal_day_pane_g

0x5d62,	// (0x0001bf32) list_single_recal_day_pane_t1

0x5d70,	// (0x0001bf40) list_single_recal_day_pane_t2

0x0001,

0xfe55,	// (0x00026025) list_single_recal_day_pane_t

0xe7a9,	// (0x00024979) ncimui_query_button_pane_ParamLimits

0xe7a9,	// (0x00024979) ncimui_query_button_pane

0xe7b9,	// (0x00024989) ncimui_query_button_pane_t1_ParamLimits

0xe7b9,	// (0x00024989) ncimui_query_button_pane_t1

0x5d7e,	// (0x0001bf4e) ncimui_query_button_pane_t2_ParamLimits

0x5d7e,	// (0x0001bf4e) ncimui_query_button_pane_t2

0x0001,

0xfe5a,	// (0x0002602a) ncimui_query_button_pane_t_ParamLimits

0xfe5a,	// (0x0002602a) ncimui_query_button_pane_t

0xe7cc,	// (0x0002499c) query_button_pane_ParamLimits

0xe7cc,	// (0x0002499c) query_button_pane

0x05a2,	// (0x00016772) bg_button_pane_cp0028

0x5d91,	// (0x0001bf61) query_button_pane_t1

0xaf68,	// (0x00021138) main_tport_pane_ParamLimits

0xe248,	// (0x00024418) bg_popup_window_pane_cp01_ParamLimits

0xe248,	// (0x00024418) bg_popup_window_pane_cp01

0xe255,	// (0x00024425) heading_pane_cp08_ParamLimits

0xe255,	// (0x00024425) heading_pane_cp08

0xe263,	// (0x00024433) heading_pane_cp07_ParamLimits

0xe263,	// (0x00024433) heading_pane_cp07

0x58a3,	// (0x0001ba73) cell_tport_appsw_pane_g2

0x0002,

0xfda6,	// (0x00025f76) cell_tport_appsw_pane_g

0xa6f6,	// (0x000208c6) input_candi_list_open_g1

0x159a,	// (0x0001776a) list_cale_time_pane_g6_ParamLimits

0x159a,	// (0x0001776a) list_cale_time_pane_g6

0xb6b9,	// (0x00021889) aid_size_touch_calib_1_ParamLimits

0xb6b9,	// (0x00021889) aid_size_touch_calib_1

0xb6c5,	// (0x00021895) aid_size_touch_calib_2_ParamLimits

0xb6c5,	// (0x00021895) aid_size_touch_calib_2

0xb6d3,	// (0x000218a3) aid_size_touch_calib_3_ParamLimits

0xb6d3,	// (0x000218a3) aid_size_touch_calib_3

0xb6e3,	// (0x000218b3) aid_size_touch_calib_4_ParamLimits

0xb6e3,	// (0x000218b3) aid_size_touch_calib_4

0xb6f1,	// (0x000218c1) main_touch_calib_button_group_pane_ParamLimits

0xb6f1,	// (0x000218c1) main_touch_calib_button_group_pane

0xb6ff,	// (0x000218cf) main_touch_calib_pane_g1_ParamLimits

0xb70b,	// (0x000218db) main_touch_calib_pane_g2_ParamLimits

0xb717,	// (0x000218e7) main_touch_calib_pane_g3_ParamLimits

0xb723,	// (0x000218f3) main_touch_calib_pane_g4_ParamLimits

0xf784,	// (0x00025954) main_touch_calib_pane_g_ParamLimits

0xb72f,	// (0x000218ff) main_touch_calib_pane_t1_ParamLimits

0xb746,	// (0x00021916) main_touch_calib_pane_t2_ParamLimits

0xb75d,	// (0x0002192d) main_touch_calib_pane_t3_ParamLimits

0xb771,	// (0x00021941) main_touch_calib_pane_t4_ParamLimits

0xb785,	// (0x00021955) main_touch_calib_pane_t5_ParamLimits

0xf78d,	// (0x0002595d) main_touch_calib_pane_t_ParamLimits

0x389d,	// (0x00019a6d) list_single_fp_cale_pane_g3_ParamLimits

0x389d,	// (0x00019a6d) list_single_fp_cale_pane_g3

0x7e17,	// (0x0001dfe7) bg_button_pane_cp012_ParamLimits

0x7e17,	// (0x0001dfe7) bg_vkb2_func_pane_cp03_ParamLimits

0x8214,	// (0x0001e3e4) cell_vitu2_function_top_pane_g1_ParamLimits

0x7e17,	// (0x0001dfe7) bg_vkb2_func_pane_cp04_ParamLimits

0xd7ff,	// (0x000239cf) main_ncimui_button_group_pane_ParamLimits

0xd7ff,	// (0x000239cf) main_ncimui_button_group_pane

0xd83c,	// (0x00023a0c) main_ncimui_pane_t3_ParamLimits

0xd83c,	// (0x00023a0c) main_ncimui_pane_t3

0x59cf,	// (0x0001bb9f) phacti_button_group_pane

0x5cbb,	// (0x0001be8b) aid_size_list_single_double_ParamLimits

0xe719,	// (0x000248e9) popup_ezdial_listscroll_window_ParamLimits

0xe73a,	// (0x0002490a) popup_number_entry_window_cp01_ParamLimits

0xe7d9,	// (0x000249a9) phacti_button_pane_ParamLimits

0xe7d9,	// (0x000249a9) phacti_button_pane

0x05a2,	// (0x00016772) bg_button_pane_cp14

0x5d9f,	// (0x0001bf6f) phacti_button_pane_t1

0xe7ea,	// (0x000249ba) main_touch_calib_button_pane_ParamLimits

0xe7ea,	// (0x000249ba) main_touch_calib_button_pane

0x0dbd,	// (0x00016f8d) bg_button_pane_cp18_ParamLimits

0x0dbd,	// (0x00016f8d) bg_button_pane_cp18

0x5dad,	// (0x0001bf7d) main_touch_calib_button_pane_t1_ParamLimits

0x5dad,	// (0x0001bf7d) main_touch_calib_button_pane_t1

0x5dc3,	// (0x0001bf93) main_touch_calib_button_pane_t2_ParamLimits

0x5dc3,	// (0x0001bf93) main_touch_calib_button_pane_t2

0x0001,

0xfe5f,	// (0x0002602f) main_touch_calib_button_pane_t_ParamLimits

0xfe5f,	// (0x0002602f) main_touch_calib_button_pane_t

0x05a2,	// (0x00016772) cell_ncimui_button_pane

0x05a2,	// (0x00016772) bg_button_pane_cp032

0x5de1,	// (0x0001bfb1) cell_ncimui_button_pane_t1

0x7b39,	// (0x0001dd09) image3_infobar_pane_ParamLimits

0x7b39,	// (0x0001dd09) image3_infobar_pane

0xdb78,	// (0x00023d48) fs_bigclock_status_pane_ParamLimits

0xdb78,	// (0x00023d48) fs_bigclock_status_pane

0xdb85,	// (0x00023d55) main_fs_bigclock_clock_pane_ParamLimits

0xdb85,	// (0x00023d55) main_fs_bigclock_clock_pane

0xdb99,	// (0x00023d69) main_fs_bigclock_indi_pane_ParamLimits

0xdb99,	// (0x00023d69) main_fs_bigclock_indi_pane

0xdbc6,	// (0x00023d96) main_fs_bigclock_swipe_pane_ParamLimits

0xdbc6,	// (0x00023d96) main_fs_bigclock_swipe_pane

0x05a2,	// (0x00016772) main_fs_clock_dumped_data

0x52b8,	// (0x0001b488) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x52b8,	// (0x0001b488) list_single_fs_bigclock_indicator_pane_g1

0x52d6,	// (0x0001b4a6) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x52d6,	// (0x0001b4a6) list_single_fs_bigclock_indicator_pane_g2

0x52f0,	// (0x0001b4c0) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x52f0,	// (0x0001b4c0) list_single_fs_bigclock_indicator_pane_g3

0x530a,	// (0x0001b4da) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x530a,	// (0x0001b4da) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc97,	// (0x00025e67) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc97,	// (0x00025e67) list_single_fs_bigclock_indicator_pane_g

0x5330,	// (0x0001b500) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x5330,	// (0x0001b500) list_single_fs_bigclock_indicator_pane_t1

0x5358,	// (0x0001b528) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x5358,	// (0x0001b528) list_single_fs_bigclock_indicator_pane_t2

0x5380,	// (0x0001b550) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x5380,	// (0x0001b550) list_single_fs_bigclock_indicator_pane_t3

0x53a8,	// (0x0001b578) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x53a8,	// (0x0001b578) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfca2,	// (0x00025e72) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfca2,	// (0x00025e72) list_single_fs_bigclock_indicator_pane_t

0x5def,	// (0x0001bfbf) image3_infobar_fav_pane_ParamLimits

0x5def,	// (0x0001bfbf) image3_infobar_fav_pane

0x5dff,	// (0x0001bfcf) image3_infobar_loc_pane_ParamLimits

0x5dff,	// (0x0001bfcf) image3_infobar_loc_pane

0x5e13,	// (0x0001bfe3) image3_infobar_time_pane_ParamLimits

0x5e13,	// (0x0001bfe3) image3_infobar_time_pane

0x34f8,	// (0x000196c8) image3_infobar_time_pane_g1

0x5e23,	// (0x0001bff3) image3_infobar_time_pane_t1

0x34f8,	// (0x000196c8) image3_infobar_loc_pane_g1

0x5e31,	// (0x0001c001) image3_infobar_loc_pane_g2

0x0001,

0xfe64,	// (0x00026034) image3_infobar_loc_pane_g

0x5e39,	// (0x0001c009) image3_infobar_loc_pane_t1

0x34f8,	// (0x000196c8) image3_infobar_fav_pane_g1

0x5e47,	// (0x0001c017) image3_infobar_fav_pane_g2

0x0001,

0xfe69,	// (0x00026039) image3_infobar_fav_pane_g

0x5e4f,	// (0x0001c01f) fs_bigclock_status_battery_pane

0x5e58,	// (0x0001c028) fs_bigclock_status_signal_pane

0x5e61,	// (0x0001c031) fs_bigclock_status_title_pane

0x5e6a,	// (0x0001c03a) fs_bigclock_status_signal_pane_g1

0x5e73,	// (0x0001c043) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe6e,	// (0x0002603e) fs_bigclock_status_signal_pane_g

0x5e7b,	// (0x0001c04b) fs_bigclock_status_battery_pane_g1

0x5e84,	// (0x0001c054) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe73,	// (0x00026043) fs_bigclock_status_battery_pane_g

0x5e8c,	// (0x0001c05c) fs_bigclock_status_title_pane_t1

0x34f8,	// (0x000196c8) main_fs_bigclock_clock_pane_g1

0x5e9a,	// (0x0001c06a) main_fs_bigclock_clock_pane_g2

0x5e9a,	// (0x0001c06a) main_fs_bigclock_clock_pane_g3

0x5e9a,	// (0x0001c06a) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe78,	// (0x00026048) main_fs_bigclock_clock_pane_g

0x5ea2,	// (0x0001c072) main_fs_bigclock_clock_pane_t1

0x5eb0,	// (0x0001c080) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe81,	// (0x00026051) main_fs_bigclock_clock_pane_t

0x5ebf,	// (0x0001c08f) list_single_fs_bigclock_indicator_pane_ParamLimits

0x5ebf,	// (0x0001c08f) list_single_fs_bigclock_indicator_pane

0xe7fa,	// (0x000249ca) list_single_fs_bigclock_pane_ParamLimits

0xe7fa,	// (0x000249ca) list_single_fs_bigclock_pane

0x5ed9,	// (0x0001c0a9) main_fs_bigclock_indicator_pane_t1

0x5ee8,	// (0x0001c0b8) list_single_fs_bigclock_pane_g1

0x5ef0,	// (0x0001c0c0) list_single_fs_bigclock_pane_t1

0x34f8,	// (0x000196c8) main_fs_bigclock_swipe_pane_g1

0x5f2e,	// (0x0001c0fe) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe92,	// (0x00026062) main_fs_bigclock_swipe_pane_g

0x5f36,	// (0x0001c106) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x5f36,	// (0x0001c106) main_fs_bigclock_swipe_pane_t1

0x9f52,	// (0x00020122) call_type_pane_ParamLimits

0x05a2,	// (0x00016772) main_btmg_pane

0x5ba4,	// (0x0001bd74) list_single_cale_mrui_row_pane_g2_ParamLimits

0x5ba4,	// (0x0001bd74) list_single_cale_mrui_row_pane_g2

0x0001,

0xfe05,	// (0x00025fd5) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe05,	// (0x00025fd5) list_single_cale_mrui_row_pane_g

0x5cf5,	// (0x0001bec5) list_recal_vselct_arw_lo_pane

0x5cfd,	// (0x0001becd) list_recal_vselct_arw_up_pane

0x5d05,	// (0x0001bed5) list_recal_vselct_pane

0x5f53,	// (0x0001c123) btmg_button_pane

0xe85e,	// (0x00024a2e) main_btmg_pane_g1

0x05a2,	// (0x00016772) bg_button_pane_cp044

0x5f66,	// (0x0001c136) btmg_button_pane_t1

0x2fe8,	// (0x000191b8) aid_listscroll_gen

0x0612,	// (0x000167e2) main_cntbar_detail_pane

0x58c1,	// (0x0001ba91) list_cmail_folder_pane

0x58d1,	// (0x0001baa1) sp_fs_scroll_pane_cp03_ParamLimits

0xe33d,	// (0x0002450d) list_single_fs_dyc_pane_cp01_ParamLimits

0xe33d,	// (0x0002450d) list_single_fs_dyc_pane_cp01

0x5f74,	// (0x0001c144) aid_size_cmail_indent

0x5f7d,	// (0x0001c14d) list_single_dyc_row_pane_cp01

0xe886,	// (0x00024a56) cntbar_detail_list_pane_ParamLimits

0xe886,	// (0x00024a56) cntbar_detail_list_pane

0xe8c0,	// (0x00024a90) main_cntbar_detail_cont_pane_ParamLimits

0xe8c0,	// (0x00024a90) main_cntbar_detail_cont_pane

0x9eec,	// (0x000200bc) scroll_pane_cp032_ParamLimits

0x9eec,	// (0x000200bc) scroll_pane_cp032

0xe8cc,	// (0x00024a9c) cntbar_detail_list_event_pane_ParamLimits

0xe8cc,	// (0x00024a9c) cntbar_detail_list_event_pane

0xe892,	// (0x00024a62) cntbar_detail_list_shct_pane

0x13f5,	// (0x000175c5) aid_list_gen

0x5f86,	// (0x0001c156) aid_scroll

0x5f8f,	// (0x0001c15f) aid_size_touch_scroll_bar

0x5f5d,	// (0x0001c12d) aid_list_double

0x5f98,	// (0x0001c168) aid_list_single

0x5fa1,	// (0x0001c171) aid_list_single_lg

0x5faa,	// (0x0001c17a) aid_list_z_g_a_sm

0x5fb2,	// (0x0001c182) aid_list_z_g_d

0x5fba,	// (0x0001c18a) aid_txt_z_prm

0xe8e0,	// (0x00024ab0) aid_txt_z_prm_cp01

0xe8ee,	// (0x00024abe) aid_txt_z_sec

0xe8fc,	// (0x00024acc) main_cntbar_detail_cont_pane_g1_ParamLimits

0xe8fc,	// (0x00024acc) main_cntbar_detail_cont_pane_g1

0xe909,	// (0x00024ad9) main_cntbar_detail_cont_pane_g2_ParamLimits

0xe909,	// (0x00024ad9) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe97,	// (0x00026067) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe97,	// (0x00026067) main_cntbar_detail_cont_pane_g

0x5fc8,	// (0x0001c198) main_cntbar_detail_cont_pane_t1

0x5fd6,	// (0x0001c1a6) main_cntbar_detail_cont_pane_t2

0x5fe4,	// (0x0001c1b4) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe9c,	// (0x0002606c) main_cntbar_detail_cont_pane_t

0xe915,	// (0x00024ae5) cell_cntbar_detail_list_shct_pane_ParamLimits

0xe915,	// (0x00024ae5) cell_cntbar_detail_list_shct_pane

0x5ff2,	// (0x0001c1c2) cntbar_detail_list_shct_pane_g1

0x5ffb,	// (0x0001c1cb) cntbar_detail_list_shct_pane_g2

0x0001,

0xfea3,	// (0x00026073) cntbar_detail_list_shct_pane_g

0xe929,	// (0x00024af9) cntbar_detail_list_event_pane_g1_ParamLimits

0xe929,	// (0x00024af9) cntbar_detail_list_event_pane_g1

0xe935,	// (0x00024b05) cntbar_detail_list_event_pane_g2_ParamLimits

0xe935,	// (0x00024b05) cntbar_detail_list_event_pane_g2

0x0005,

0xfea8,	// (0x00026078) cntbar_detail_list_event_pane_g_ParamLimits

0xfea8,	// (0x00026078) cntbar_detail_list_event_pane_g

0xe9a1,	// (0x00024b71) cntbar_detail_list_event_pane_t1_ParamLimits

0xe9a1,	// (0x00024b71) cntbar_detail_list_event_pane_t1

0xe9b6,	// (0x00024b86) cntbar_detail_list_event_pane_t2_ParamLimits

0xe9b6,	// (0x00024b86) cntbar_detail_list_event_pane_t2

0x0002,

0xfeb5,	// (0x00026085) cntbar_detail_list_event_pane_t_ParamLimits

0xfeb5,	// (0x00026085) cntbar_detail_list_event_pane_t

0x34f8,	// (0x000196c8) cell_cntbar_detail_list_shct_pane_g1

0xa25a,	// (0x0002042a) navi_pane_mv_g3

0x0612,	// (0x000167e2) main_cntbar_detail_pane_ParamLimits

0x05a2,	// (0x00016772) main_notif_wgt_pane

0x7878,	// (0x0001da48) aid_tch_main_mp4_pane_g4

0x7aad,	// (0x0001dc7d) popup_slider_window_cp02

0x5cec,	// (0x0001bebc) list_recal_day_event_pane

0xe866,	// (0x00024a36) cntbar_detail_btn_pane_ParamLimits

0xe866,	// (0x00024a36) cntbar_detail_btn_pane

0xe876,	// (0x00024a46) cntbar_detail_btn_pane_cp01_ParamLimits

0xe876,	// (0x00024a46) cntbar_detail_btn_pane_cp01

0xe892,	// (0x00024a62) cntbar_detail_list_shct_pane_ParamLimits

0xe89e,	// (0x00024a6e) cntbar_detail_pane_g1_ParamLimits

0xe89e,	// (0x00024a6e) cntbar_detail_pane_g1

0xe8aa,	// (0x00024a7a) cntbar_detail_pane_t1_ParamLimits

0xe8aa,	// (0x00024a7a) cntbar_detail_pane_t1

0xe941,	// (0x00024b11) cntbar_detail_list_event_pane_g3_ParamLimits

0xe941,	// (0x00024b11) cntbar_detail_list_event_pane_g3

0xe959,	// (0x00024b29) cntbar_detail_list_event_pane_g4_ParamLimits

0xe959,	// (0x00024b29) cntbar_detail_list_event_pane_g4

0xe971,	// (0x00024b41) cntbar_detail_list_event_pane_g5_ParamLimits

0xe971,	// (0x00024b41) cntbar_detail_list_event_pane_g5

0xe989,	// (0x00024b59) cntbar_detail_list_event_pane_g6_ParamLimits

0xe989,	// (0x00024b59) cntbar_detail_list_event_pane_g6

0xe9cb,	// (0x00024b9b) cntbar_detail_list_event_pane_t3_ParamLimits

0xe9cb,	// (0x00024b9b) cntbar_detail_list_event_pane_t3

0xe9dd,	// (0x00024bad) popup_notif_wgt_window_ParamLimits

0xe9dd,	// (0x00024bad) popup_notif_wgt_window

0xe9ed,	// (0x00024bbd) popup_submenu_window_cp01_ParamLimits

0xe9ed,	// (0x00024bbd) popup_submenu_window_cp01

0x1b59,	// (0x00017d29) bg_popup_window_pane_cp10

0x6004,	// (0x0001c1d4) listscroll_notif_wgt_pane

0x600e,	// (0x0001c1de) list_notif_wgt_window

0x6017,	// (0x0001c1e7) scroll_pane_cp033

0x6020,	// (0x0001c1f0) list_notif_wgt_row_pane_ParamLimits

0x6020,	// (0x0001c1f0) list_notif_wgt_row_pane

0x6034,	// (0x0001c204) aid_size_list_notif_wgt_del

0x603d,	// (0x0001c20d) list_notif_wgt_row_pane_g1

0x6045,	// (0x0001c215) list_notif_wgt_row_pane_g2

0x604d,	// (0x0001c21d) list_notif_wgt_row_pane_g3

0x0002,

0xfebc,	// (0x0002608c) list_notif_wgt_row_pane_g

0x6056,	// (0x0001c226) list_notif_wgt_row_pane_t1

0x6064,	// (0x0001c234) list_notif_wgt_row_pane_t2

0x6072,	// (0x0001c242) list_notif_wgt_row_pane_t3

0x0002,

0xfec3,	// (0x00026093) list_notif_wgt_row_pane_t

0x4565,	// (0x0001a735) list_recal_day_event_pane_g1

0x6080,	// (0x0001c250) list_recal_day_event_pane_t1

0x05a2,	// (0x00016772) bg_button_pane_cp045

0x608f,	// (0x0001c25f) cntbar_detail_btn_pane_t1

0x2ff0,	// (0x000191c0) main_callh_pane_ParamLimits

0x2ff0,	// (0x000191c0) main_callh_pane

0x05a2,	// (0x00016772) main_coverflow0_pane

0x05a2,	// (0x00016772) main_wgtman_pane

0xdbde,	// (0x00023dae) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xdbde,	// (0x00023dae) main_fs_bigclock_unlock_btn_pane

0x589b,	// (0x0001ba6b) bg_button_pane_cp16

0x58ab,	// (0x0001ba7b) cell_tport_appsw_pane_g3

0xe9fb,	// (0x00024bcb) cf0_flow_pane_ParamLimits

0xe9fb,	// (0x00024bcb) cf0_flow_pane

0x609d,	// (0x0001c26d) listscroll_cf0_pane

0x60a6,	// (0x0001c276) main_cf0_pane_g1

0xea0a,	// (0x00024bda) main_cf0_pane_t1_ParamLimits

0xea0a,	// (0x00024bda) main_cf0_pane_t1

0xea1e,	// (0x00024bee) main_cf0_pane_t2_ParamLimits

0xea1e,	// (0x00024bee) main_cf0_pane_t2

0x0001,

0xfeca,	// (0x0002609a) main_cf0_pane_t_ParamLimits

0xfeca,	// (0x0002609a) main_cf0_pane_t

0x60b0,	// (0x0001c280) scroll_pane_cp11

0xea32,	// (0x00024c02) cf0_flow_pane_g1

0xea3a,	// (0x00024c0a) cf0_flow_pane_g2

0x0001,

0xfecf,	// (0x0002609f) cf0_flow_pane_g

0xea42,	// (0x00024c12) cf0_flow_pane_t1

0x05a2,	// (0x00016772) main_call6_pane

0x05a2,	// (0x00016772) main_calllock_pane

0xea50,	// (0x00024c20) call6_btn_grp_pane_ParamLimits

0xea50,	// (0x00024c20) call6_btn_grp_pane

0xea5f,	// (0x00024c2f) call6_pane_g1_ParamLimits

0xea5f,	// (0x00024c2f) call6_pane_g1

0xea6e,	// (0x00024c3e) popup_call6_1st_window_ParamLimits

0xea6e,	// (0x00024c3e) popup_call6_1st_window

0xea7c,	// (0x00024c4c) popup_call6_2nd_window_ParamLimits

0xea7c,	// (0x00024c4c) popup_call6_2nd_window

0xea8a,	// (0x00024c5a) cell_call6_btn_pane_ParamLimits

0xea8a,	// (0x00024c5a) cell_call6_btn_pane

0x1b59,	// (0x00017d29) bg_popup_call2_in_pane_cp03

0x60bb,	// (0x0001c28b) popup_call6_1st_window_g1

0x60c3,	// (0x0001c293) popup_call6_1st_window_g2

0x60cb,	// (0x0001c29b) popup_call6_1st_window_g3

0x0002,

0xfed4,	// (0x000260a4) popup_call6_1st_window_g

0x60d3,	// (0x0001c2a3) popup_call6_1st_window_t1

0x60e2,	// (0x0001c2b2) popup_call6_1st_window_t2

0x60f2,	// (0x0001c2c2) popup_call6_1st_window_t3

0x0002,

0xfedb,	// (0x000260ab) popup_call6_1st_window_t

0x1b59,	// (0x00017d29) bg_popup_call2_in_pane_cp04

0x60bb,	// (0x0001c28b) popup_call6_2nd_window_g1

0x60c3,	// (0x0001c293) popup_call6_2nd_window_g2

0x60cb,	// (0x0001c29b) popup_call6_2nd_window_g3

0x0002,

0xfed4,	// (0x000260a4) popup_call6_2nd_window_g

0x60d3,	// (0x0001c2a3) popup_call6_2nd_window_t1

0x05a2,	// (0x00016772) bg_button_pane_cp15

0x6102,	// (0x0001c2d2) cell_call6_btn_pane_g1

0x610b,	// (0x0001c2db) cell_call6_btn_pane_t1

0xea99,	// (0x00024c69) listscroll_wgtman_pane_ParamLimits

0xea99,	// (0x00024c69) listscroll_wgtman_pane

0xeab7,	// (0x00024c87) wgtman_btn_pane_ParamLimits

0xeab7,	// (0x00024c87) wgtman_btn_pane

0x1a0c,	// (0x00017bdc) aid_scroll_copy1

0x611a,	// (0x0001c2ea) list_wgtman_pane

0xeaec,	// (0x00024cbc) wgtman_btn_pane_g1_ParamLimits

0xeaec,	// (0x00024cbc) wgtman_btn_pane_g1

0xeb14,	// (0x00024ce4) wgtman_btn_pane_t1_ParamLimits

0xeb14,	// (0x00024ce4) wgtman_btn_pane_t1

0x6124,	// (0x0001c2f4) wgtman_btn_pane_t2_ParamLimits

0x6124,	// (0x0001c2f4) wgtman_btn_pane_t2

0x0001,

0xfee2,	// (0x000260b2) wgtman_btn_pane_t_ParamLimits

0xfee2,	// (0x000260b2) wgtman_btn_pane_t

0xeb4b,	// (0x00024d1b) listrow_wgtman_pane_ParamLimits

0xeb4b,	// (0x00024d1b) listrow_wgtman_pane

0xeb67,	// (0x00024d37) listrow_wgtman_pane_g1

0xeb70,	// (0x00024d40) listrow_wgtman_pane_g2

0x0001,

0xfee7,	// (0x000260b7) listrow_wgtman_pane_g

0xeb7a,	// (0x00024d4a) listrow_wgtman_pane_t1

0xeb88,	// (0x00024d58) listrow_wgtman_pane_t2

0x0001,

0xfeec,	// (0x000260bc) listrow_wgtman_pane_t

0xeb96,	// (0x00024d66) wait_bar_pane_cp09

0x613b,	// (0x0001c30b) main_calllock_btn_pane

0x6145,	// (0x0001c315) main_calllock_pane_g1

0x05a2,	// (0x00016772) bg_button_pane_cp17

0x6150,	// (0x0001c320) main_calllock_btn_pane_g1

0x6159,	// (0x0001c329) main_calllock_btn_pane_t1

0x05a2,	// (0x00016772) main_dialer3_pane

0x05a2,	// (0x00016772) main_fmrd2_pane

0x34f8,	// (0x000196c8) main_fs_bigclock_unlock_btn_pane_g1

0x6170,	// (0x0001c340) main_fs_bigclock_unlock_btn_pane_t1

0xeb9e,	// (0x00024d6e) area_fmrd2_info_pane_ParamLimits

0xeb9e,	// (0x00024d6e) area_fmrd2_info_pane

0xebac,	// (0x00024d7c) area_fmrd2_visual_pane_ParamLimits

0xebac,	// (0x00024d7c) area_fmrd2_visual_pane

0xebba,	// (0x00024d8a) fmrd2_indi_pane_ParamLimits

0xebba,	// (0x00024d8a) fmrd2_indi_pane

0xebc7,	// (0x00024d97) area_fmrd2_visual_pane_g1

0xebcf,	// (0x00024d9f) area_fmrd2_visual_pane_t1

0xebdf,	// (0x00024daf) area_fmrd2_visual_pane_t2

0xebef,	// (0x00024dbf) area_fmrd2_visual_pane_t3

0x0002,

0xfef6,	// (0x000260c6) area_fmrd2_visual_pane_t

0xebff,	// (0x00024dcf) area_fmrd2_info_pane_g1

0xec07,	// (0x00024dd7) area_fmrd2_info_pane_t1

0xec17,	// (0x00024de7) area_fmrd2_info_pane_t2

0xec27,	// (0x00024df7) area_fmrd2_info_pane_t3

0xec37,	// (0x00024e07) area_fmrd2_info_pane_t4

0x0003,

0xfefd,	// (0x000260cd) area_fmrd2_info_pane_t

0xec45,	// (0x00024e15) fmrd2_indi_pane_t1

0xec55,	// (0x00024e25) fmrd2_indi_pane_t2

0xec65,	// (0x00024e35) fmrd2_indi_pane_t3

0x0002,

0xff06,	// (0x000260d6) fmrd2_indi_pane_t

0x5319,	// (0x0001b4e9) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x5319,	// (0x0001b4e9) list_single_fs_bigclock_indicator_pane_g5

0x53bd,	// (0x0001b58d) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x53bd,	// (0x0001b58d) list_single_fs_bigclock_indicator_pane_t5

0xe48b,	// (0x0002465b) aid_cell_bcale_month_pane_ParamLimits

0xe48b,	// (0x0002465b) aid_cell_bcale_month_pane

0xe497,	// (0x00024667) bcale_month_pane_ParamLimits

0xe497,	// (0x00024667) bcale_month_pane

0xe4a7,	// (0x00024677) bcale_preview_pane_ParamLimits

0xe4a7,	// (0x00024677) bcale_preview_pane

0x5ef0,	// (0x0001c0c0) list_single_fs_bigclock_pane_t1_ParamLimits

0x5f0a,	// (0x0001c0da) list_single_fs_bigclock_pane_t2_ParamLimits

0x5f0a,	// (0x0001c0da) list_single_fs_bigclock_pane_t2

0x0001,

0xfe8d,	// (0x0002605d) list_single_fs_bigclock_pane_t_ParamLimits

0xfe8d,	// (0x0002605d) list_single_fs_bigclock_pane_t

0x6168,	// (0x0001c338) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfef1,	// (0x000260c1) main_fs_bigclock_unlock_btn_pane_g

0xec75,	// (0x00024e45) aid_dia3_key_size_ParamLimits

0xec75,	// (0x00024e45) aid_dia3_key_size

0xec81,	// (0x00024e51) aid_dia3_listrow_size_ParamLimits

0xec81,	// (0x00024e51) aid_dia3_listrow_size

0xec91,	// (0x00024e61) dia3_keypad_fun_pane_ParamLimits

0xec91,	// (0x00024e61) dia3_keypad_fun_pane

0xeca3,	// (0x00024e73) dia3_keypad_num_pane_ParamLimits

0xeca3,	// (0x00024e73) dia3_keypad_num_pane

0xecb5,	// (0x00024e85) dia3_listscroll_pane_ParamLimits

0xecb5,	// (0x00024e85) dia3_listscroll_pane

0xecc3,	// (0x00024e93) dia3_numentry_pane_ParamLimits

0xecc3,	// (0x00024e93) dia3_numentry_pane

0x617e,	// (0x0001c34e) dia3_list_pane

0x6189,	// (0x0001c359) scroll_pane_cp12

0x05a2,	// (0x00016772) bg_dia3_numentry_pane

0xecd1,	// (0x00024ea1) dia3_numentry_pane_t1

0xece0,	// (0x00024eb0) cell_dia3_key_num_pane

0xece8,	// (0x00024eb8) cell_dia3_key0_fun_pane_ParamLimits

0xece8,	// (0x00024eb8) cell_dia3_key0_fun_pane

0xecf5,	// (0x00024ec5) cell_dia3_key1_fun_pane_ParamLimits

0xecf5,	// (0x00024ec5) cell_dia3_key1_fun_pane

0xed02,	// (0x00024ed2) dia3_listrow_pane

0x5045,	// (0x0001b215) bg_dia3_numentry_pane_g1

0x05a2,	// (0x00016772) bg_button_pane_cp21

0x6194,	// (0x0001c364) cell_dia3_key_num_pane_t1

0x61a2,	// (0x0001c372) cell_dia3_key_num_pane_t2

0x61b1,	// (0x0001c381) cell_dia3_key_num_pane_t3

0x61c0,	// (0x0001c390) cell_dia3_key_num_pane_t4

0x0003,

0xff0d,	// (0x000260dd) cell_dia3_key_num_pane_t

0x05a2,	// (0x00016772) bg_button_pane_cp19

0xed0f,	// (0x00024edf) cell_dia3_key0_fun_pane_g1

0x05a2,	// (0x00016772) bg_button_pane_cp20

0xed17,	// (0x00024ee7) cell_dia3_key1_fun_pane_g1

0xed1f,	// (0x00024eef) area_left_week_number_pane

0xed28,	// (0x00024ef8) area_top_day_name_pane

0xed31,	// (0x00024f01) frame_month_view_pane

0xed3b,	// (0x00024f0b) grid_month_view_pane

0xed45,	// (0x00024f15) cell_top_day_name_pane_ParamLimits

0xed45,	// (0x00024f15) cell_top_day_name_pane

0xed5f,	// (0x00024f2f) cell_area_left_week_number_pane_ParamLimits

0xed5f,	// (0x00024f2f) cell_area_left_week_number_pane

0xed73,	// (0x00024f43) cell_month_view_pane_ParamLimits

0xed73,	// (0x00024f43) cell_month_view_pane

0x61cf,	// (0x0001c39f) frm_month_g1

0xed90,	// (0x00024f60) frm_month_g2

0xed9a,	// (0x00024f6a) frm_month_g3

0xeda4,	// (0x00024f74) frm_month_g4

0xedae,	// (0x00024f7e) frm_month_g5

0xedb8,	// (0x00024f88) frm_month_g6

0xedc2,	// (0x00024f92) frm_month_g7

0x61d8,	// (0x0001c3a8) frm_month_g8

0xedcc,	// (0x00024f9c) frm_month_g9

0xedd5,	// (0x00024fa5) frm_month_g10

0xedde,	// (0x00024fae) frm_month_g11

0xede7,	// (0x00024fb7) frm_month_g12

0xedf0,	// (0x00024fc0) frm_month_g13

0xedf9,	// (0x00024fc9) frm_month_g14

0xee02,	// (0x00024fd2) frm_month_g15

0xee0d,	// (0x00024fdd) frm_month_g16

0x000f,

0xff16,	// (0x000260e6) frm_month_g

0xee18,	// (0x00024fe8) cell_top_day_name_pane_t1

0xee27,	// (0x00024ff7) cell_area_left_week_number_pane_g1

0xee18,	// (0x00024fe8) cell_area_left_week_number_pane_t1

0x34f8,	// (0x000196c8) cell_month_view_pane_g1

0xee2f,	// (0x00024fff) cell_month_view_pane_t1

0x05a2,	// (0x00016772) main_fps_pane

0x5627,	// (0x0001b7f7) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x5627,	// (0x0001b7f7) cmail_ddmenu_btn02_pane_cp1

0x5643,	// (0x0001b813) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x5643,	// (0x0001b813) cmail_ddmenu_btn02_pane_cp2

0xe766,	// (0x00024936) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xe766,	// (0x00024936) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe3e,	// (0x0002600e) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe3e,	// (0x0002600e) cmail_ddmenu_btn02_pane_g

0xe784,	// (0x00024954) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xe784,	// (0x00024954) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe43,	// (0x00026013) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe43,	// (0x00026013) cmail_ddmenu_btn02_pane_t

0xee3e,	// (0x0002500e) fps_text_pane_ParamLimits

0xee3e,	// (0x0002500e) fps_text_pane

0xee4b,	// (0x0002501b) main_fps_pane_g1_ParamLimits

0xee4b,	// (0x0002501b) main_fps_pane_g1

0xee59,	// (0x00025029) wait_bar_pane_cp010_ParamLimits

0xee59,	// (0x00025029) wait_bar_pane_cp010

0xee65,	// (0x00025035) fps_text_pane_t1_ParamLimits

0xee65,	// (0x00025035) fps_text_pane_t1

0xc5da,	// (0x000227aa) cam4_image_uncrop_pane_g1

0xc5e3,	// (0x000227b3) cam4_image_uncrop_pane_g2

0xc5ec,	// (0x000227bc) cam4_image_uncrop_pane_g3

0x4f7b,	// (0x0001b14b) cam4_image_uncrop_pane_g4

0x0003,

0xf91c,	// (0x00025aec) cam4_image_uncrop_pane_g

0xed02,	// (0x00024ed2) dia3_listrow_pane_ParamLimits

0x05a2,	// (0x00016772) main_phob2_pane

0xe2aa,	// (0x0002447a) cell_tport_appsw_pane_cp02_ParamLimits

0xe2aa,	// (0x0002447a) cell_tport_appsw_pane_cp02

0xe2b9,	// (0x00024489) cell_tport_appsw_pane_cp03_ParamLimits

0xe2b9,	// (0x00024489) cell_tport_appsw_pane_cp03

0x05a2,	// (0x00016772) phob2_contact_card_pane

0x05a2,	// (0x00016772) phob2_listscroll_pane

0xee7e,	// (0x0002504e) phob2_list_pane

0xee86,	// (0x00025056) scroll_pane_cp034

0xee8e,	// (0x0002505e) phob2_cc_data_pane_ParamLimits

0xee8e,	// (0x0002505e) phob2_cc_data_pane

0xeea8,	// (0x00025078) phob2_cc_listscroll_pane_ParamLimits

0xeea8,	// (0x00025078) phob2_cc_listscroll_pane

0xeec2,	// (0x00025092) list_double_large_graphic_phob2_pane_ParamLimits

0xeec2,	// (0x00025092) list_double_large_graphic_phob2_pane

0xeee5,	// (0x000250b5) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xeee5,	// (0x000250b5) list_double_large_graphic_phob2_pane_g1

0xeef2,	// (0x000250c2) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xeef2,	// (0x000250c2) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff37,	// (0x00026107) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff37,	// (0x00026107) list_double_large_graphic_phob2_pane_g

0xeefe,	// (0x000250ce) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xeefe,	// (0x000250ce) list_double_large_graphic_phob2_pane_t1

0xef13,	// (0x000250e3) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xef13,	// (0x000250e3) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff3c,	// (0x0002610c) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff3c,	// (0x0002610c) list_double_large_graphic_phob2_pane_t

0x05a2,	// (0x00016772) list_highlight_pane_cp024

0xef25,	// (0x000250f5) phob2_cc_button_pane

0xef2d,	// (0x000250fd) phob2_cc_data_pane_g1_ParamLimits

0xef2d,	// (0x000250fd) phob2_cc_data_pane_g1

0xef39,	// (0x00025109) phob2_cc_data_pane_g2_ParamLimits

0xef39,	// (0x00025109) phob2_cc_data_pane_g2

0x0001,

0xff41,	// (0x00026111) phob2_cc_data_pane_g_ParamLimits

0xff41,	// (0x00026111) phob2_cc_data_pane_g

0xef45,	// (0x00025115) phob2_cc_data_pane_t1_ParamLimits

0xef45,	// (0x00025115) phob2_cc_data_pane_t1

0xef57,	// (0x00025127) phob2_cc_data_pane_t2_ParamLimits

0xef57,	// (0x00025127) phob2_cc_data_pane_t2

0xef69,	// (0x00025139) phob2_cc_data_pane_t3_ParamLimits

0xef69,	// (0x00025139) phob2_cc_data_pane_t3

0x0002,

0xff46,	// (0x00026116) phob2_cc_data_pane_t_ParamLimits

0xff46,	// (0x00026116) phob2_cc_data_pane_t

0xef7b,	// (0x0002514b) phob2_cc_list_pane_ParamLimits

0xef7b,	// (0x0002514b) phob2_cc_list_pane

0xef87,	// (0x00025157) scroll_pane_cp035_ParamLimits

0xef87,	// (0x00025157) scroll_pane_cp035

0x0612,	// (0x000167e2) bg_button_pane_cp033

0xef93,	// (0x00025163) phob2_cc_button_pane_g1

0xef9f,	// (0x0002516f) phob2_cc_button_pane_t1

0xefb4,	// (0x00025184) phob2_cc_button_pane_t2

0x0001,

0xff4d,	// (0x0002611d) phob2_cc_button_pane_t

0xefc6,	// (0x00025196) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xefc6,	// (0x00025196) list_double_large_graphic_phob2_cc_pane

0xeff6,	// (0x000251c6) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xeff6,	// (0x000251c6) list_double_large_graphic_phob2_cc_pane_g1

0xf007,	// (0x000251d7) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xf007,	// (0x000251d7) list_double_large_graphic_phob2_cc_pane_g2

0xf016,	// (0x000251e6) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xf016,	// (0x000251e6) list_double_large_graphic_phob2_cc_pane_g3

0xf025,	// (0x000251f5) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xf025,	// (0x000251f5) list_double_large_graphic_phob2_cc_pane_g4

0xf036,	// (0x00025206) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xf036,	// (0x00025206) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff52,	// (0x00026122) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff52,	// (0x00026122) list_double_large_graphic_phob2_cc_pane_g

0xf045,	// (0x00025215) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xf045,	// (0x00025215) list_double_large_graphic_phob2_cc_pane_t1

0xf06e,	// (0x0002523e) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xf06e,	// (0x0002523e) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff5d,	// (0x0002612d) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff5d,	// (0x0002612d) list_double_large_graphic_phob2_cc_pane_t

0xf097,	// (0x00025267) list_highlight_pane_cp025_ParamLimits

0xf097,	// (0x00025267) list_highlight_pane_cp025

0x0612,	// (0x000167e2) bg_button_pane_cp033_ParamLimits

0xef93,	// (0x00025163) phob2_cc_button_pane_g1_ParamLimits

0xef9f,	// (0x0002516f) phob2_cc_button_pane_t1_ParamLimits

0xefb4,	// (0x00025184) phob2_cc_button_pane_t2_ParamLimits

0xff4d,	// (0x0002611d) phob2_cc_button_pane_t_ParamLimits

0x8682,	// (0x0001e852) popup_wgtman_window

0x43be,	// (0x0001a58e) scroll_pane_cp038

0xead4,	// (0x00024ca4) wgtman_btn_pane_cp_01_ParamLimits

0xead4,	// (0x00024ca4) wgtman_btn_pane_cp_01

0xf0a5,	// (0x00025275) wgtman_content_pane

0xf0ae,	// (0x0002527e) wgtman_heading_pane

0x05a2,	// (0x00016772) bg_heading_pane_cp02

0xf0b7,	// (0x00025287) wgtman_heading_pane_g1

0xf0bf,	// (0x0002528f) wgtman_heading_pane_t1

0xf0cd,	// (0x0002529d) scroll_pane_cp036

0xf0d5,	// (0x000252a5) wgtman_list_pane

0xf0dd,	// (0x000252ad) wgtman_list_pane_t1_ParamLimits

0xf0dd,	// (0x000252ad) wgtman_list_pane_t1
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

} // end of namespace AknLayoutScalable_Abrw_pnp4_apps_nhd4_prt_tch_Normal

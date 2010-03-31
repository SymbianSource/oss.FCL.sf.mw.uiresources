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

#include "aknlayoutscalable_elaf_pnp4_apps_nhd4_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0007b401 };

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
0x1efe,	// (0x0007d2ff) Screen

0x1f0a,	// (0x0007d30b) application_window

0x1f66,	// (0x0007d367) area_bottom_pane_ParamLimits

0x1f66,	// (0x0007d367) area_bottom_pane

0x1fbf,	// (0x0007d3c0) area_top_pane_ParamLimits

0x1fbf,	// (0x0007d3c0) area_top_pane

0x2023,	// (0x0007d424) call_video_uplink_pane_ParamLimits

0x2023,	// (0x0007d424) call_video_uplink_pane

0x2062,	// (0x0007d463) main_pane_ParamLimits

0x2062,	// (0x0007d463) main_pane

0xc820,	// (0x00087c21) context_pane

0x53da,	// (0x000807db) navi_pane

0x5400,	// (0x00080801) popup_cale_events_window_ParamLimits

0x5400,	// (0x00080801) popup_cale_events_window

0xc833,	// (0x00087c34) popup_mup_playback_window

0x5418,	// (0x00080819) signal_pane

0xa758,	// (0x00085b59) main_browser_pane

0xb404,	// (0x00086805) main_burst_pane

0x5270,	// (0x00080671) main_calc_pane

0xc806,	// (0x00087c07) main_cale_day_pane

0x2795,	// (0x0007db96) main_cale_month_pane

0xc806,	// (0x00087c07) main_cale_week_pane

0xb404,	// (0x00086805) main_call_pane

0xa419,	// (0x0008581a) main_call_poc_pane

0xb404,	// (0x00086805) main_camera_pane

0xb404,	// (0x00086805) main_chi_dic_pane

0xb181,	// (0x00086582) main_clock_pane

0xa419,	// (0x0008581a) main_fmradio_pane

0xb404,	// (0x00086805) main_graph_messa_pane

0xa419,	// (0x0008581a) main_help_pane

0xa758,	// (0x00085b59) main_im_pane

0xa674,	// (0x00085a75) main_image_pane_ParamLimits

0xa674,	// (0x00085a75) main_image_pane

0xa419,	// (0x0008581a) main_location2_pane

0xb404,	// (0x00086805) main_location_pane

0xa674,	// (0x00085a75) main_messa_pane

0xa419,	// (0x0008581a) main_mp2_pane

0xb404,	// (0x00086805) main_mp_pane

0xa419,	// (0x0008581a) main_msg_pane

0xa419,	// (0x0008581a) main_mup_eq_pane

0xa419,	// (0x0008581a) main_mup_pane

0xa758,	// (0x00085b59) main_notes_pane

0xa419,	// (0x0008581a) main_pec_pane

0xa419,	// (0x0008581a) main_phob_pane

0xa419,	// (0x0008581a) main_pinb_pane

0xa419,	// (0x0008581a) main_postcard_pane

0xa419,	// (0x0008581a) main_qdial_pane

0xb404,	// (0x00086805) main_skin_pane

0xa419,	// (0x0008581a) main_smil2_pane

0xb404,	// (0x00086805) main_smil_pane

0xb404,	// (0x00086805) main_video_pane

0xb404,	// (0x00086805) main_video_tele_pane

0xa674,	// (0x00085a75) main_viewer_pane_ParamLimits

0xa674,	// (0x00085a75) main_viewer_pane

0xb404,	// (0x00086805) main_vorec_pane

0x52ae,	// (0x000806af) popup_blid_sat_info_window_ParamLimits

0x52ae,	// (0x000806af) popup_blid_sat_info_window

0x52ce,	// (0x000806cf) popup_dyc_status_message_window_ParamLimits

0x52ce,	// (0x000806cf) popup_dyc_status_message_window

0x52dc,	// (0x000806dd) popup_grid_large_graphic_window_ParamLimits

0x52dc,	// (0x000806dd) popup_grid_large_graphic_window

0x536b,	// (0x0008076c) popup_loc_request_window_ParamLimits

0x536b,	// (0x0008076c) popup_loc_request_window

0x53b2,	// (0x000807b3) popup_wml_address_window_ParamLimits

0x53b2,	// (0x000807b3) popup_wml_address_window

0x5148,	// (0x00080549) call_muted_g1

0x4e06,	// (0x00080207) popup_call_audio_conf_window_ParamLimits

0x4e06,	// (0x00080207) popup_call_audio_conf_window

0x5158,	// (0x00080559) popup_call_audio_first_window_ParamLimits

0x5158,	// (0x00080559) popup_call_audio_first_window

0x5198,	// (0x00080599) popup_call_audio_in_window_ParamLimits

0x5198,	// (0x00080599) popup_call_audio_in_window

0x51bc,	// (0x000805bd) popup_call_audio_out_window_ParamLimits

0x51bc,	// (0x000805bd) popup_call_audio_out_window

0x51de,	// (0x000805df) popup_call_audio_second_window_ParamLimits

0x51de,	// (0x000805df) popup_call_audio_second_window

0x520e,	// (0x0008060f) popup_call_audio_wait_window_ParamLimits

0x520e,	// (0x0008060f) popup_call_audio_wait_window

0x522f,	// (0x00080630) popup_number_entry_window_ParamLimits

0x522f,	// (0x00080630) popup_number_entry_window

0xa006,	// (0x00085407) bg_popup_call_pane_cp05_ParamLimits

0xa006,	// (0x00085407) bg_popup_call_pane_cp05

0xa026,	// (0x00085427) popup_number_entry_window_t1

0xa039,	// (0x0008543a) popup_number_entry_window_t2

0xa04b,	// (0x0008544c) popup_number_entry_window_t3

0x0003,

0xf0cd,	// (0x0008a4ce) popup_number_entry_window_t

0xa05d,	// (0x0008545e) text_title_cp2

0xa070,	// (0x00085471) bg_popup_call_pane_cp_ParamLimits

0xa070,	// (0x00085471) bg_popup_call_pane_cp

0xa07e,	// (0x0008547f) call_thumbnail_pane

0xa086,	// (0x00085487) popup_call_audio_in_window_g1_ParamLimits

0xa086,	// (0x00085487) popup_call_audio_in_window_g1

0xa092,	// (0x00085493) popup_call_audio_in_window_g2_ParamLimits

0xa092,	// (0x00085493) popup_call_audio_in_window_g2

0xa09e,	// (0x0008549f) popup_call_audio_in_window_g3_ParamLimits

0xa09e,	// (0x0008549f) popup_call_audio_in_window_g3

0x0002,

0xf0d6,	// (0x0008a4d7) popup_call_audio_in_window_g_ParamLimits

0xf0d6,	// (0x0008a4d7) popup_call_audio_in_window_g

0xa0aa,	// (0x000854ab) popup_call_audio_in_window_t1_ParamLimits

0xa0aa,	// (0x000854ab) popup_call_audio_in_window_t1

0xa0c6,	// (0x000854c7) popup_call_audio_in_window_t2_ParamLimits

0xa0c6,	// (0x000854c7) popup_call_audio_in_window_t2

0xa0e2,	// (0x000854e3) popup_call_audio_in_window_t3_ParamLimits

0xa0e2,	// (0x000854e3) popup_call_audio_in_window_t3

0x0002,

0xf0dd,	// (0x0008a4de) popup_call_audio_in_window_t_ParamLimits

0xf0dd,	// (0x0008a4de) popup_call_audio_in_window_t

0xa070,	// (0x00085471) bg_popup_call_pane_cp01_ParamLimits

0xa070,	// (0x00085471) bg_popup_call_pane_cp01

0xa07e,	// (0x0008547f) call_thumbnail_pane_cp02

0xa0f5,	// (0x000854f6) call_type_pane_cp022

0xa0fd,	// (0x000854fe) popup_call_audio_out_window_g1_ParamLimits

0xa0fd,	// (0x000854fe) popup_call_audio_out_window_g1

0xa10f,	// (0x00085510) popup_call_audio_out_window_g2_ParamLimits

0xa10f,	// (0x00085510) popup_call_audio_out_window_g2

0xa11b,	// (0x0008551c) popup_call_audio_out_window_g3_ParamLimits

0xa11b,	// (0x0008551c) popup_call_audio_out_window_g3

0x0002,

0xf0e4,	// (0x0008a4e5) popup_call_audio_out_window_g_ParamLimits

0xf0e4,	// (0x0008a4e5) popup_call_audio_out_window_g

0xa12d,	// (0x0008552e) popup_call_audio_out_window_t1_ParamLimits

0xa12d,	// (0x0008552e) popup_call_audio_out_window_t1

0xa145,	// (0x00085546) popup_call_audio_out_window_t2_ParamLimits

0xa145,	// (0x00085546) popup_call_audio_out_window_t2

0x0001,

0xf0eb,	// (0x0008a4ec) popup_call_audio_out_window_t_ParamLimits

0xf0eb,	// (0x0008a4ec) popup_call_audio_out_window_t

0xa15a,	// (0x0008555b) bg_popup_call_pane_ParamLimits

0xa15a,	// (0x0008555b) bg_popup_call_pane

0x2266,	// (0x0007d667) call_thumbnail_pane_cp_ParamLimits

0x2266,	// (0x0007d667) call_thumbnail_pane_cp

0xa1de,	// (0x000855df) call_type_pane_cp01_ParamLimits

0xa1de,	// (0x000855df) call_type_pane_cp01

0xa222,	// (0x00085623) popup_call_audio_first_window_g1_ParamLimits

0xa222,	// (0x00085623) popup_call_audio_first_window_g1

0xa26e,	// (0x0008566f) popup_call_audio_first_window_g2_ParamLimits

0xa26e,	// (0x0008566f) popup_call_audio_first_window_g2

0x0001,

0xf0f0,	// (0x0008a4f1) popup_call_audio_first_window_g_ParamLimits

0xf0f0,	// (0x0008a4f1) popup_call_audio_first_window_g

0xa2b2,	// (0x000856b3) popup_call_audio_first_window_t1_ParamLimits

0xa2b2,	// (0x000856b3) popup_call_audio_first_window_t1

0xa35e,	// (0x0008575f) popup_call_audio_first_window_t4_ParamLimits

0xa35e,	// (0x0008575f) popup_call_audio_first_window_t4

0xa3ea,	// (0x000857eb) popup_call_audio_first_window_t5_ParamLimits

0xa3ea,	// (0x000857eb) popup_call_audio_first_window_t5

0x0002,

0xf0f5,	// (0x0008a4f6) popup_call_audio_first_window_t_ParamLimits

0xf0f5,	// (0x0008a4f6) popup_call_audio_first_window_t

0xa419,	// (0x0008581a) bg_popup_call_pane_cp02

0xa423,	// (0x00085824) call_type_pane_cp023

0xa42b,	// (0x0008582c) popup_call_audio_wait_window_g1

0xa433,	// (0x00085834) popup_call_audio_wait_window_g2

0x0001,

0xf0fc,	// (0x0008a4fd) popup_call_audio_wait_window_g

0xa43b,	// (0x0008583c) popup_call_audio_wait_window_t3

0xa449,	// (0x0008584a) bg_popup_call_pane_cp03_ParamLimits

0xa449,	// (0x0008584a) bg_popup_call_pane_cp03

0xa4a9,	// (0x000858aa) call_thumbnail_pane_cp011_ParamLimits

0xa4a9,	// (0x000858aa) call_thumbnail_pane_cp011

0xa4b5,	// (0x000858b6) call_type_pane_cp034_ParamLimits

0xa4b5,	// (0x000858b6) call_type_pane_cp034

0xa4f1,	// (0x000858f2) popup_call_audio_second_window_g1_ParamLimits

0xa4f1,	// (0x000858f2) popup_call_audio_second_window_g1

0xa52d,	// (0x0008592e) popup_call_audio_second_window_g2_ParamLimits

0xa52d,	// (0x0008592e) popup_call_audio_second_window_g2

0x0001,

0xf101,	// (0x0008a502) popup_call_audio_second_window_g_ParamLimits

0xf101,	// (0x0008a502) popup_call_audio_second_window_g

0xa569,	// (0x0008596a) popup_call_audio_second_window_t1_ParamLimits

0xa569,	// (0x0008596a) popup_call_audio_second_window_t1

0xa5ea,	// (0x000859eb) popup_call_audio_second_window_t2_ParamLimits

0xa5ea,	// (0x000859eb) popup_call_audio_second_window_t2

0xa620,	// (0x00085a21) popup_call_audio_second_window_t3_ParamLimits

0xa620,	// (0x00085a21) popup_call_audio_second_window_t3

0x0002,

0xf106,	// (0x0008a507) popup_call_audio_second_window_t_ParamLimits

0xf106,	// (0x0008a507) popup_call_audio_second_window_t

0xa419,	// (0x0008581a) bg_popup_call_pane_cp04

0xa656,	// (0x00085a57) list_conf_pane

0xa65e,	// (0x00085a5f) popup_call_audio_conf_window_t1

0xa66c,	// (0x00085a6d) call_thumbnail_pane_g1

0xa674,	// (0x00085a75) bg_pinb_pane_ParamLimits

0xa674,	// (0x00085a75) bg_pinb_pane

0xa682,	// (0x00085a83) find_pinb_pane

0xa68b,	// (0x00085a8c) listscroll_pinb_pane_ParamLimits

0xa68b,	// (0x00085a8c) listscroll_pinb_pane

0xa69a,	// (0x00085a9b) pinb_bg_pane_g1

0x228a,	// (0x0007d68b) pinb_bg_pane_g2

0x2296,	// (0x0007d697) pinb_bg_pane_g3

0x22a2,	// (0x0007d6a3) pinb_bg_pane_g4

0x22ae,	// (0x0007d6af) pinb_bg_pane_g5

0x22ba,	// (0x0007d6bb) pinb_bg_pane_g6

0x22c5,	// (0x0007d6c6) pinb_bg_pane_g7

0x22d0,	// (0x0007d6d1) pinb_bg_pane_g8

0x22db,	// (0x0007d6dc) pinb_bg_pane_g9

0x22e5,	// (0x0007d6e6) pinb_bg_pane_g10

0x0009,

0xf10d,	// (0x0008a50e) pinb_bg_pane_g

0x2302,	// (0x0007d703) grid_pinb_pane

0x230d,	// (0x0007d70e) list_pinb_pane

0x2318,	// (0x0007d719) scroll_pane_cp01_ParamLimits

0x2318,	// (0x0007d719) scroll_pane_cp01

0xa6a4,	// (0x00085aa5) find_pinb_pane_g1_ParamLimits

0xa6a4,	// (0x00085aa5) find_pinb_pane_g1

0xa6bc,	// (0x00085abd) find_pinb_pane_t1

0xa6ce,	// (0x00085acf) find_pinb_pane_t2

0x0001,

0xf127,	// (0x0008a528) find_pinb_pane_t

0xa6e3,	// (0x00085ae4) input_focus_pane_cp01_ParamLimits

0xa6e3,	// (0x00085ae4) input_focus_pane_cp01

0x232a,	// (0x0007d72b) cell_pinb_pane_ParamLimits

0x232a,	// (0x0007d72b) cell_pinb_pane

0xa6ef,	// (0x00085af0) cell_pinb_pane_g1_ParamLimits

0xa6ef,	// (0x00085af0) cell_pinb_pane_g1

0xa702,	// (0x00085b03) cell_pinb_pane_g2_ParamLimits

0xa702,	// (0x00085b03) cell_pinb_pane_g2

0xa70e,	// (0x00085b0f) cell_pinb_pane_g3_ParamLimits

0xa70e,	// (0x00085b0f) cell_pinb_pane_g3

0x0002,

0xf12c,	// (0x0008a52d) cell_pinb_pane_g_ParamLimits

0xf12c,	// (0x0008a52d) cell_pinb_pane_g

0xa419,	// (0x0008581a) grid_highlight_pane_cp01

0x2359,	// (0x0007d75a) list_pinb_item_pane_ParamLimits

0x2359,	// (0x0007d75a) list_pinb_item_pane

0xa419,	// (0x0008581a) list_highlight_pane_cp02

0x2383,	// (0x0007d784) list_pinb_item_pane_g1_ParamLimits

0x2383,	// (0x0007d784) list_pinb_item_pane_g1

0x2390,	// (0x0007d791) list_pinb_item_pane_g2_ParamLimits

0x2390,	// (0x0007d791) list_pinb_item_pane_g2

0x239c,	// (0x0007d79d) list_pinb_item_pane_g3_ParamLimits

0x239c,	// (0x0007d79d) list_pinb_item_pane_g3

0x23ad,	// (0x0007d7ae) list_pinb_item_pane_g4_ParamLimits

0x23ad,	// (0x0007d7ae) list_pinb_item_pane_g4

0x0003,

0xf133,	// (0x0008a534) list_pinb_item_pane_g_ParamLimits

0xf133,	// (0x0008a534) list_pinb_item_pane_g

0x23b9,	// (0x0007d7ba) list_pinb_item_pane_t1_ParamLimits

0x23b9,	// (0x0007d7ba) list_pinb_item_pane_t1

0x23ea,	// (0x0007d7eb) calc_display_pane

0x2408,	// (0x0007d809) calc_paper_pane

0x2424,	// (0x0007d825) grid_calc_pane

0xa419,	// (0x0008581a) bg_list_pane_cp01

0x2450,	// (0x0007d851) clock_g1

0x2458,	// (0x0007d859) clock_g2

0x0001,

0xf13c,	// (0x0008a53d) clock_g

0x2462,	// (0x0007d863) clock_t1_ParamLimits

0x2462,	// (0x0007d863) clock_t1

0x2477,	// (0x0007d878) clock_t2_ParamLimits

0x2477,	// (0x0007d878) clock_t2

0x2489,	// (0x0007d88a) clock_t3_ParamLimits

0x2489,	// (0x0007d88a) clock_t3

0x249b,	// (0x0007d89c) clock_t4_ParamLimits

0x249b,	// (0x0007d89c) clock_t4

0x24ad,	// (0x0007d8ae) clock_t5_ParamLimits

0x24ad,	// (0x0007d8ae) clock_t5

0x24c2,	// (0x0007d8c3) clock_t6_ParamLimits

0x24c2,	// (0x0007d8c3) clock_t6

0x24d4,	// (0x0007d8d5) clock_t7_ParamLimits

0x24d4,	// (0x0007d8d5) clock_t7

0x24e6,	// (0x0007d8e7) clock_t8_ParamLimits

0x24e6,	// (0x0007d8e7) clock_t8

0x24fc,	// (0x0007d8fd) clock_t9_ParamLimits

0x24fc,	// (0x0007d8fd) clock_t9

0x0008,

0xf141,	// (0x0008a542) clock_t_ParamLimits

0xf141,	// (0x0008a542) clock_t

0xa71a,	// (0x00085b1b) popup_clock_analogue_window_cp02

0xa71a,	// (0x00085b1b) popup_clock_digital_window_cp01

0xa722,	// (0x00085b23) listscroll_help_pane

0xa419,	// (0x0008581a) phob_pre_status_pane

0xa72c,	// (0x00085b2d) grid_qdial_pane

0xa674,	// (0x00085a75) listscroll_mce_pane

0xa674,	// (0x00085a75) bg_notes_pane

0xa736,	// (0x00085b37) list_notes_pane

0x2512,	// (0x0007d913) scroll_pane_cp06

0xa744,	// (0x00085b45) bg_calc_paper_pane

0x2521,	// (0x0007d922) list_calc_pane

0xa758,	// (0x00085b59) bg_calc_display_pane

0x253b,	// (0x0007d93c) calc_display_pane_t1

0x2550,	// (0x0007d951) calc_display_pane_t2

0x2565,	// (0x0007d966) calc_display_pane_t3

0x0002,

0xf154,	// (0x0008a555) calc_display_pane_t

0x2577,	// (0x0007d978) cell_calc_pane_ParamLimits

0x2577,	// (0x0007d978) cell_calc_pane

0xa764,	// (0x00085b65) bg_calc_paper_pane_g1

0xa770,	// (0x00085b71) bg_calc_paper_pane_g2

0xa77c,	// (0x00085b7d) bg_calc_paper_pane_g3

0xa788,	// (0x00085b89) bg_calc_paper_pane_g4

0xa794,	// (0x00085b95) bg_calc_paper_pane_g5

0x25a4,	// (0x0007d9a5) bg_calc_paper_pane_g6

0x25b5,	// (0x0007d9b6) bg_calc_paper_pane_g7

0x25c6,	// (0x0007d9c7) bg_calc_paper_pane_g8

0x0007,

0xf15b,	// (0x0008a55c) bg_calc_paper_pane_g

0x25d7,	// (0x0007d9d8) calc_bg_paper_pane_g9

0x25e8,	// (0x0007d9e9) list_calc_item_pane_ParamLimits

0x25e8,	// (0x0007d9e9) list_calc_item_pane

0xa7f0,	// (0x00085bf1) list_calc_item_pane_g1

0x261c,	// (0x0007da1d) list_calc_item_pane_t1_ParamLimits

0x261c,	// (0x0007da1d) list_calc_item_pane_t1

0x262e,	// (0x0007da2f) list_calc_item_pane_t2_ParamLimits

0x262e,	// (0x0007da2f) list_calc_item_pane_t2

0x0001,

0xf16c,	// (0x0008a56d) list_calc_item_pane_t_ParamLimits

0xf16c,	// (0x0008a56d) list_calc_item_pane_t

0xa7fd,	// (0x00085bfe) cell_calc_pane_g1

0xa807,	// (0x00085c08) grid_highlight_pane_cp02

0xa829,	// (0x00085c2a) bg_calc_display_pane_g1

0x265e,	// (0x0007da5f) bg_calc_display_pane_g2

0xa832,	// (0x00085c33) bg_calc_display_pane_g3

0x0002,

0xf176,	// (0x0008a577) bg_calc_display_pane_g

0x2668,	// (0x0007da69) cell_qdial_pane_ParamLimits

0x2668,	// (0x0007da69) cell_qdial_pane

0x267c,	// (0x0007da7d) cell_qdial_pane_g1_ParamLimits

0x267c,	// (0x0007da7d) cell_qdial_pane_g1

0x2689,	// (0x0007da8a) cell_qdial_pane_g2_ParamLimits

0x2689,	// (0x0007da8a) cell_qdial_pane_g2

0xa83b,	// (0x00085c3c) cell_qdial_pane_g3_ParamLimits

0xa83b,	// (0x00085c3c) cell_qdial_pane_g3

0x0003,

0xf17d,	// (0x0008a57e) cell_qdial_pane_g_ParamLimits

0xf17d,	// (0x0008a57e) cell_qdial_pane_g

0x26a6,	// (0x0007daa7) cell_qdial_pane_t1_ParamLimits

0x26a6,	// (0x0007daa7) cell_qdial_pane_t1

0x26be,	// (0x0007dabf) cell_qdial_pane_t2_ParamLimits

0x26be,	// (0x0007dabf) cell_qdial_pane_t2

0x26d1,	// (0x0007dad2) cell_qdial_pane_t3_ParamLimits

0x26d1,	// (0x0007dad2) cell_qdial_pane_t3

0x0002,

0xf186,	// (0x0008a587) cell_qdial_pane_t_ParamLimits

0xf186,	// (0x0008a587) cell_qdial_pane_t

0xa419,	// (0x0008581a) grid_highlight_pane_cp04

0xa847,	// (0x00085c48) thumbnail_qdial_pane_ParamLimits

0xa847,	// (0x00085c48) thumbnail_qdial_pane

0xa8a3,	// (0x00085ca4) list_help_pane

0xa8ac,	// (0x00085cad) scroll_pane_cp02

0x26e4,	// (0x0007dae5) help_list_pane_t1_ParamLimits

0x26e4,	// (0x0007dae5) help_list_pane_t1

0x271e,	// (0x0007db1f) bg_notes_pane_g2

0x2726,	// (0x0007db27) bg_notes_pane_g3

0x272e,	// (0x0007db2f) notes_bg_pane_g1

0x2736,	// (0x0007db37) notes_bg_pane_g4

0x273e,	// (0x0007db3f) notes_bg_pane_g5

0x2746,	// (0x0007db47) notes_bg_pane_g6

0x274e,	// (0x0007db4f) notes_bg_pane_g7

0x2756,	// (0x0007db57) notes_bg_pane_g8

0x275e,	// (0x0007db5f) notes_bg_pane_g9

0x0006,

0xf1a4,	// (0x0008a5a5) notes_bg_pane_g

0x2766,	// (0x0007db67) list_notes_text_pane_ParamLimits

0x2766,	// (0x0007db67) list_notes_text_pane

0xa8b5,	// (0x00085cb6) list_notes_text_pane_g1

0x0d13,	// (0x0007c114) list_notes_text_pane_t1

0x2795,	// (0x0007db96) listscroll_cale_week_pane

0x27ba,	// (0x0007dbbb) bg_cale_heading_pane

0xa8d8,	// (0x00085cd9) bg_cale_pane_cp01

0x27dc,	// (0x0007dbdd) cale_week_corner_pane

0x27f6,	// (0x0007dbf7) cale_week_day_heading_pane

0x2818,	// (0x0007dc19) cale_week_scroll_pane_g1

0x2835,	// (0x0007dc36) cale_week_scroll_pane_g2

0x2848,	// (0x0007dc49) cale_week_scroll_pane_g3

0x285b,	// (0x0007dc5c) cale_week_scroll_pane_g4

0x286e,	// (0x0007dc6f) cale_week_scroll_pane_g5

0x2881,	// (0x0007dc82) cale_week_scroll_pane_g6

0x2894,	// (0x0007dc95) cale_week_scroll_pane_g7

0x28a7,	// (0x0007dca8) cale_week_scroll_pane_g8

0x28bc,	// (0x0007dcbd) cale_week_scroll_pane_g9

0x28cf,	// (0x0007dcd0) cale_week_scroll_pane_g10

0x28e2,	// (0x0007dce3) cale_week_scroll_pane_g11

0x28f5,	// (0x0007dcf6) cale_week_scroll_pane_g12

0x290c,	// (0x0007dd0d) cale_week_scroll_pane_g13

0x2927,	// (0x0007dd28) cale_week_scroll_pane_g14

0x2942,	// (0x0007dd43) cale_week_scroll_pane_g15

0x000e,

0xf1b3,	// (0x0008a5b4) cale_week_scroll_pane_g

0x295d,	// (0x0007dd5e) cale_week_time_pane

0x2972,	// (0x0007dd73) grid_cale_week_pane

0xa908,	// (0x00085d09) scroll_pane_cp08

0x2993,	// (0x0007dd94) cell_cale_week_pane_ParamLimits

0x2993,	// (0x0007dd94) cell_cale_week_pane

0x29f7,	// (0x0007ddf8) cale_week_day_heading_pane_t1

0x2a32,	// (0x0007de33) cale_week_day_heading_pane_t2

0x2a6d,	// (0x0007de6e) cale_week_day_heading_pane_t3

0x2aa8,	// (0x0007dea9) cale_week_day_heading_pane_t4

0x2ae3,	// (0x0007dee4) cale_week_day_heading_pane_t5

0x2b1e,	// (0x0007df1f) cale_week_day_heading_pane_t6

0x2b59,	// (0x0007df5a) cale_week_day_heading_pane_t7

0x0006,

0xf1d2,	// (0x0008a5d3) cale_week_day_heading_pane_t

0xa925,	// (0x00085d26) bg_cale_side_pane

0x2b94,	// (0x0007df95) cale_week_time_pane_t1

0x2bae,	// (0x0007dfaf) cale_week_time_pane_t2

0x2bc8,	// (0x0007dfc9) cale_week_time_pane_t3

0x2be2,	// (0x0007dfe3) cale_week_time_pane_t4

0x2bfc,	// (0x0007dffd) cale_week_time_pane_t5

0x2c18,	// (0x0007e019) cale_week_time_pane_t6

0x2c3a,	// (0x0007e03b) cale_week_time_pane_t7

0x2c5e,	// (0x0007e05f) cale_week_time_pane_t8

0x0007,

0xf1e1,	// (0x0008a5e2) cale_week_time_pane_t

0x2c84,	// (0x0007e085) cell_cale_week_pane_g2

0x2c97,	// (0x0007e098) cell_cale_week_pane_g3_ParamLimits

0x2c97,	// (0x0007e098) cell_cale_week_pane_g3

0xa933,	// (0x00085d34) grid_highlight_pane_cp07

0xa93b,	// (0x00085d3c) listscroll_gms_pane

0xa945,	// (0x00085d46) grid_gms_pane

0xa94e,	// (0x00085d4f) listscroll_gms_pane_g1

0xa956,	// (0x00085d57) listscroll_gms_pane_g2

0x0001,

0xf1f2,	// (0x0008a5f3) listscroll_gms_pane_g

0x2caf,	// (0x0007e0b0) scroll_pane_cp010

0x2cba,	// (0x0007e0bb) cell_gms_pane_ParamLimits

0x2cba,	// (0x0007e0bb) cell_gms_pane

0x2cca,	// (0x0007e0cb) cell_gms_pane_g1

0xa95e,	// (0x00085d5f) cell_gms_pane_g2

0xa8b5,	// (0x00085cb6) cell_gms_pane_g3

0xa966,	// (0x00085d67) cell_gms_pane_g4

0x0003,

0xf1f7,	// (0x0008a5f8) cell_gms_pane_g

0xa96f,	// (0x00085d70) grid_highlight_pane_cp09

0x50f0,	// (0x000804f1) phob_pre_status_pane_g1

0x50f8,	// (0x000804f9) phob_pre_status_pane_g2

0x5100,	// (0x00080501) phob_pre_status_pane_g3

0x5108,	// (0x00080509) phob_pre_status_pane_g4

0x0004,

0xf5e6,	// (0x0008a9e7) phob_pre_status_pane_g

0x5118,	// (0x00080519) phob_pre_status_pane_t1

0x5128,	// (0x00080529) phob_pre_status_pane_t2

0x5138,	// (0x00080539) phob_pre_status_pane_t3

0x0002,

0xf5f1,	// (0x0008a9f2) phob_pre_status_pane_t

0xa419,	// (0x0008581a) bg_list_pane_cp05

0x2cda,	// (0x0007e0db) grid_vorec_pane

0x2ce4,	// (0x0007e0e5) vorec_t1

0x2cf2,	// (0x0007e0f3) vorec_t2

0x2d00,	// (0x0007e101) vorec_t3

0x2d0e,	// (0x0007e10f) vorec_t4

0x2d1c,	// (0x0007e11d) vorec_t5

0x2d2a,	// (0x0007e12b) vorec_t6

0x0006,

0xf200,	// (0x0008a601) vorec_t

0x2d46,	// (0x0007e147) wait_bar_pane_cp01

0x2d4e,	// (0x0007e14f) cell_vorec_pane_ParamLimits

0x2d4e,	// (0x0007e14f) cell_vorec_pane

0x2d61,	// (0x0007e162) cell_vorec_pane_g1

0xa419,	// (0x0008581a) grid_highlight_pane_cp05

0x2d7b,	// (0x0007e17c) cams_zoom_pane

0x2d87,	// (0x0007e188) image_vga_pane

0x2d96,	// (0x0007e197) main_camera_pane_g1

0x2da4,	// (0x0007e1a5) main_camera_pane_g2

0x2db0,	// (0x0007e1b1) main_camera_pane_g3

0x2dbc,	// (0x0007e1bd) main_camera_pane_g4

0x2dc8,	// (0x0007e1c9) main_camera_pane_g5

0x2dd4,	// (0x0007e1d5) main_camera_pane_g6

0x2de0,	// (0x0007e1e1) main_camera_pane_g7

0x0007,

0xf20f,	// (0x0008a610) main_camera_pane_g

0x2dec,	// (0x0007e1ed) main_camera_pane_t1

0x2dfe,	// (0x0007e1ff) main_camera_pane_t2

0x0001,

0xf220,	// (0x0008a621) main_camera_pane_t

0x2e1f,	// (0x0007e220) cams_zoom_pane_cp_ParamLimits

0x2e1f,	// (0x0007e220) cams_zoom_pane_cp

0x2e43,	// (0x0007e244) image_cif_pane_ParamLimits

0x2e43,	// (0x0007e244) image_cif_pane

0x2e61,	// (0x0007e262) image_subqcif_pane

0x2e69,	// (0x0007e26a) main_video_pane_g1_ParamLimits

0x2e69,	// (0x0007e26a) main_video_pane_g1

0x2e89,	// (0x0007e28a) main_video_pane_g2_ParamLimits

0x2e89,	// (0x0007e28a) main_video_pane_g2

0x2eb9,	// (0x0007e2ba) main_video_pane_g3_ParamLimits

0x2eb9,	// (0x0007e2ba) main_video_pane_g3

0x2ee2,	// (0x0007e2e3) main_video_pane_g4_ParamLimits

0x2ee2,	// (0x0007e2e3) main_video_pane_g4

0x2f0b,	// (0x0007e30c) main_video_pane_g5_ParamLimits

0x2f0b,	// (0x0007e30c) main_video_pane_g5

0xa983,	// (0x00085d84) main_video_pane_g6_ParamLimits

0xa983,	// (0x00085d84) main_video_pane_g6

0x0006,

0xf225,	// (0x0008a626) main_video_pane_g_ParamLimits

0xf225,	// (0x0008a626) main_video_pane_g

0x2f2d,	// (0x0007e32e) main_video_pane_t1_ParamLimits

0x2f2d,	// (0x0007e32e) main_video_pane_t1

0xa9b4,	// (0x00085db5) cams_zoom_pane_g1

0xa9bd,	// (0x00085dbe) cams_zoom_pane_g2

0xa9c6,	// (0x00085dc7) cams_zoom_pane_g3

0xa9cf,	// (0x00085dd0) cams_zoom_pane_g4

0x0003,

0xf234,	// (0x0008a635) cams_zoom_pane_g

0x2f77,	// (0x0007e378) grid_cams_pane

0x2f85,	// (0x0007e386) linegrid_cams_pane

0x2f93,	// (0x0007e394) cell_cams_pane_ParamLimits

0x2f93,	// (0x0007e394) cell_cams_pane

0xa9d8,	// (0x00085dd9) cams_burst_image_pane

0xa9e0,	// (0x00085de1) cell_cams_pane_g1

0xa419,	// (0x0008581a) grid_highlight_pane_cp03

0xa7fd,	// (0x00085bfe) mp_bg_pane_g1

0xa419,	// (0x0008581a) bg_list_pane_cp03

0xc72b,	// (0x00087b2c) bg_mp_pane

0xc733,	// (0x00087b34) grid_mp_pane

0xc73b,	// (0x00087b3c) media_player_g1

0xc743,	// (0x00087b44) media_player_t1

0xc751,	// (0x00087b52) media_player_t2

0xc75f,	// (0x00087b60) media_player_t3

0xc76d,	// (0x00087b6e) media_player_t4

0xc77b,	// (0x00087b7c) media_player_t5

0xc789,	// (0x00087b8a) media_player_t6

0xc797,	// (0x00087b98) media_player_t7

0x0006,

0xf5d0,	// (0x0008a9d1) media_player_t

0xc7a5,	// (0x00087ba6) wait_bar_pane_cp02

0xf5b5,	// (0x0008a9b6) main_usb_pane_t

0x50e7,	// (0x000804e8) cell_mp_pane

0xa7fd,	// (0x00085bfe) cell_mp_pane_g1

0xa419,	// (0x0008581a) grid_highlight_pane_cp06

0xa9e8,	// (0x00085de9) grid_skin_colour_pane

0xa9f0,	// (0x00085df1) list_highlight_pane_cp03

0x2fbe,	// (0x0007e3bf) skin_g1

0xa9f8,	// (0x00085df9) skin_t1

0xaa07,	// (0x00085e08) skin_t2

0x0001,

0xf269,	// (0x0008a66a) skin_t

0x2fc8,	// (0x0007e3c9) cell_skin_colour_pane_ParamLimits

0x2fc8,	// (0x0007e3c9) cell_skin_colour_pane

0xaa15,	// (0x00085e16) cell_skin_colour_pane_g1

0x304c,	// (0x0007e44d) call_video_g1_ParamLimits

0x304c,	// (0x0007e44d) call_video_g1

0x305c,	// (0x0007e45d) call_video_g2_ParamLimits

0x305c,	// (0x0007e45d) call_video_g2

0x0001,

0xf26e,	// (0x0008a66f) call_video_g_ParamLimits

0xf26e,	// (0x0008a66f) call_video_g

0x30b6,	// (0x0007e4b7) call_video_uplink_pane_cp1_ParamLimits

0x30b6,	// (0x0007e4b7) call_video_uplink_pane_cp1

0xaa27,	// (0x00085e28) call_video_uplink_pane_cp2

0x3182,	// (0x0007e583) video_down_crop_pane_ParamLimits

0x3182,	// (0x0007e583) video_down_crop_pane

0x3274,	// (0x0007e675) video_down_pane_ParamLimits

0x3274,	// (0x0007e675) video_down_pane

0xaa2f,	// (0x00085e30) video_down_subqcif_pane_ParamLimits

0xaa2f,	// (0x00085e30) video_down_subqcif_pane

0xaa47,	// (0x00085e48) video_down_subqcif_pane_cp_ParamLimits

0xaa47,	// (0x00085e48) video_down_subqcif_pane_cp

0xaa6d,	// (0x00085e6e) im_reading_pane_ParamLimits

0xaa6d,	// (0x00085e6e) im_reading_pane

0x3396,	// (0x0007e797) im_writing_pane_ParamLimits

0x3396,	// (0x0007e797) im_writing_pane

0x33b4,	// (0x0007e7b5) im_reading_pane_t1

0xaa87,	// (0x00085e88) list_im_pane

0xaa98,	// (0x00085e99) scroll_pane_cp07

0x340f,	// (0x0007e810) im_writing_pane_t1_ParamLimits

0x340f,	// (0x0007e810) im_writing_pane_t1

0xaab1,	// (0x00085eb2) im_writing_pane_t2_ParamLimits

0xaab1,	// (0x00085eb2) im_writing_pane_t2

0x0001,

0xf278,	// (0x0008a679) im_writing_pane_t_ParamLimits

0xf278,	// (0x0008a679) im_writing_pane_t

0xa419,	// (0x0008581a) input_focus_pane_cp04

0xa419,	// (0x0008581a) input_focus_pane_cp05

0x3421,	// (0x0007e822) list_im_single_pane_ParamLimits

0x3421,	// (0x0007e822) list_im_single_pane

0x3449,	// (0x0007e84a) list_single_im_pane_t1

0x50ab,	// (0x000804ac) blid_accuracy_pane

0x50b3,	// (0x000804b4) blid_compass_pane

0x50bd,	// (0x000804be) main_location_t1

0x50cb,	// (0x000804cc) main_location_t2

0x50d9,	// (0x000804da) main_location_t3

0x0002,

0xf5df,	// (0x0008a9e0) main_location_t

0xa419,	// (0x0008581a) aid_levels_location

0xa7fd,	// (0x00085bfe) blid_accuracy_pane_g1

0xa7fd,	// (0x00085bfe) blid_accuracy_pane_g2

0x0001,

0xf2da,	// (0x0008a6db) blid_accuracy_pane_g

0xaaf9,	// (0x00085efa) wml_content_pane

0xab37,	// (0x00085f38) wml_button_pane_ParamLimits

0xab37,	// (0x00085f38) wml_button_pane

0x3458,	// (0x0007e859) wml_list_single_large_pane_ParamLimits

0x3458,	// (0x0007e859) wml_list_single_large_pane

0x3489,	// (0x0007e88a) wml_list_single_medium_pane_ParamLimits

0x3489,	// (0x0007e88a) wml_list_single_medium_pane

0x34c1,	// (0x0007e8c2) wml_list_single_small_pane_ParamLimits

0x34c1,	// (0x0007e8c2) wml_list_single_small_pane

0xab4b,	// (0x00085f4c) wml_selection_box_pane_ParamLimits

0xab4b,	// (0x00085f4c) wml_selection_box_pane

0xab5e,	// (0x00085f5f) wml_list_single_pane_t1

0xab6d,	// (0x00085f6e) wml_list_single_medium_pane_t1

0xab7c,	// (0x00085f7d) wml_list_single_large_pane_t1

0xab8b,	// (0x00085f8c) input_focus_pane_cp02_ParamLimits

0xab8b,	// (0x00085f8c) input_focus_pane_cp02

0xab9e,	// (0x00085f9f) wml_selection_box_pane_g1

0xaba7,	// (0x00085fa8) wml_selection_box_pane_t1_ParamLimits

0xaba7,	// (0x00085fa8) wml_selection_box_pane_t1

0xa674,	// (0x00085a75) bg_wml_button_pane_ParamLimits

0xa674,	// (0x00085a75) bg_wml_button_pane

0xabbf,	// (0x00085fc0) wml_button_pane_g1

0xabc7,	// (0x00085fc8) wml_button_pane_t1

0xabbf,	// (0x00085fc0) wml_button_bg_pane_g1

0xabd7,	// (0x00085fd8) wml_button_bg_pane_g2

0xabdf,	// (0x00085fe0) wml_button_bg_pane_g3

0xabe7,	// (0x00085fe8) wml_button_bg_pane_g4

0xabef,	// (0x00085ff0) wml_button_bg_pane_g5

0xabf7,	// (0x00085ff8) wml_button_bg_pane_g6

0xabff,	// (0x00086000) wml_button_bg_pane_g7

0xac07,	// (0x00086008) wml_button_bg_pane_g8

0xac0f,	// (0x00086010) wml_button_bg_pane_g9

0x0008,

0xf27d,	// (0x0008a67e) wml_button_bg_pane_g

0x3502,	// (0x0007e903) bg_list_pane_cp02

0xac17,	// (0x00086018) mce_header_pane_ParamLimits

0xac17,	// (0x00086018) mce_header_pane

0xac2d,	// (0x0008602e) mce_icon_pane

0xac2d,	// (0x0008602e) mce_image_pane

0xac36,	// (0x00086037) mce_text_pane_ParamLimits

0xac36,	// (0x00086037) mce_text_pane

0x350c,	// (0x0007e90d) scroll_pane_cp03

0xab2f,	// (0x00085f30) scroll_pane_cp04

0xac49,	// (0x0008604a) scroll_pane_cp05_ParamLimits

0xac49,	// (0x0008604a) scroll_pane_cp05

0x3516,	// (0x0007e917) mce_header_field_pane_ParamLimits

0x3516,	// (0x0007e917) mce_header_field_pane

0x3536,	// (0x0007e937) mce_header_field_pane_2_ParamLimits

0x3536,	// (0x0007e937) mce_header_field_pane_2

0x354c,	// (0x0007e94d) mce_header_field_pane_3

0x3554,	// (0x0007e955) list_single_mce_message_pane_ParamLimits

0x3554,	// (0x0007e955) list_single_mce_message_pane

0x3586,	// (0x0007e987) list_single_mce_smart_pane_ParamLimits

0x3586,	// (0x0007e987) list_single_mce_smart_pane

0xac55,	// (0x00086056) input_focus_pane_cp03

0xac5e,	// (0x0008605f) list_header_data_pane

0x35c3,	// (0x0007e9c4) mce_header_field_pane_t1

0x35d3,	// (0x0007e9d4) list_single_mce_header_pane_ParamLimits

0x35d3,	// (0x0007e9d4) list_single_mce_header_pane

0xac66,	// (0x00086067) list_single_mce_header_pane_t1

0xac75,	// (0x00086076) list_single_mce_message_pane_g1

0xac7d,	// (0x0008607e) list_single_mce_message_pane_t1

0x362a,	// (0x0007ea2b) bg_cale_heading_pane_cp01_ParamLimits

0x362a,	// (0x0007ea2b) bg_cale_heading_pane_cp01

0xac8b,	// (0x0008608c) bg_cale_pane_cp02_ParamLimits

0xac8b,	// (0x0008608c) bg_cale_pane_cp02

0x366d,	// (0x0007ea6e) cale_month_corner_pane

0x3687,	// (0x0007ea88) cale_month_day_heading_pane_ParamLimits

0x3687,	// (0x0007ea88) cale_month_day_heading_pane

0x36e2,	// (0x0007eae3) cale_month_pane_g1_ParamLimits

0x36e2,	// (0x0007eae3) cale_month_pane_g1

0x371a,	// (0x0007eb1b) cale_month_pane_g2_ParamLimits

0x371a,	// (0x0007eb1b) cale_month_pane_g2

0x3745,	// (0x0007eb46) cale_month_pane_g3_ParamLimits

0x3745,	// (0x0007eb46) cale_month_pane_g3

0x3795,	// (0x0007eb96) cale_month_pane_g4_ParamLimits

0x3795,	// (0x0007eb96) cale_month_pane_g4

0x37e5,	// (0x0007ebe6) cale_month_pane_g5_ParamLimits

0x37e5,	// (0x0007ebe6) cale_month_pane_g5

0x3835,	// (0x0007ec36) cale_month_pane_g6_ParamLimits

0x3835,	// (0x0007ec36) cale_month_pane_g6

0x3885,	// (0x0007ec86) cale_month_pane_g7_ParamLimits

0x3885,	// (0x0007ec86) cale_month_pane_g7

0x38ed,	// (0x0007ecee) cale_month_pane_g8_ParamLimits

0x38ed,	// (0x0007ecee) cale_month_pane_g8

0x3955,	// (0x0007ed56) cale_month_pane_g9_ParamLimits

0x3955,	// (0x0007ed56) cale_month_pane_g9

0x39b3,	// (0x0007edb4) cale_month_pane_g10_ParamLimits

0x39b3,	// (0x0007edb4) cale_month_pane_g10

0x3a11,	// (0x0007ee12) cale_month_pane_g11_ParamLimits

0x3a11,	// (0x0007ee12) cale_month_pane_g11

0x3a65,	// (0x0007ee66) cale_month_pane_g12_ParamLimits

0x3a65,	// (0x0007ee66) cale_month_pane_g12

0x3abb,	// (0x0007eebc) cale_month_pane_g13_ParamLimits

0x3abb,	// (0x0007eebc) cale_month_pane_g13

0x000c,

0xf290,	// (0x0008a691) cale_month_pane_g_ParamLimits

0xf290,	// (0x0008a691) cale_month_pane_g

0x3b11,	// (0x0007ef12) cale_month_week_pane

0x3b26,	// (0x0007ef27) grid_cale_month_pane_ParamLimits

0x3b26,	// (0x0007ef27) grid_cale_month_pane

0x3b78,	// (0x0007ef79) cale_month_day_heading_pane_t1

0x3bfe,	// (0x0007efff) cale_month_day_heading_pane_t2

0x3c8f,	// (0x0007f090) cale_month_day_heading_pane_t3

0x3d20,	// (0x0007f121) cale_month_day_heading_pane_t4

0x3db1,	// (0x0007f1b2) cale_month_day_heading_pane_t5

0x3e42,	// (0x0007f243) cale_month_day_heading_pane_t6

0x3edf,	// (0x0007f2e0) cale_month_day_heading_pane_t7

0x0006,

0xf2ab,	// (0x0008a6ac) cale_month_day_heading_pane_t

0xa925,	// (0x00085d26) bg_cale_side_pane_cp01

0x3f88,	// (0x0007f389) cale_month_week_pane_t1

0x3fa1,	// (0x0007f3a2) cale_month_week_pane_t2

0x3fba,	// (0x0007f3bb) cale_month_week_pane_t3

0x3fd3,	// (0x0007f3d4) cale_month_week_pane_t4

0x3ff0,	// (0x0007f3f1) cale_month_week_pane_t5

0x4011,	// (0x0007f412) cale_month_week_pane_t6

0x0005,

0xf2ba,	// (0x0008a6bb) cale_month_week_pane_t

0x4032,	// (0x0007f433) cell_cale_month_pane_ParamLimits

0x4032,	// (0x0007f433) cell_cale_month_pane

0x4158,	// (0x0007f559) cell_cale_month_pane_g1

0x4164,	// (0x0007f565) cell_cale_month_pane_t1_ParamLimits

0x4164,	// (0x0007f565) cell_cale_month_pane_t1

0xa933,	// (0x00085d34) grid_highlight_pane_cp08

0xa7fd,	// (0x00085bfe) main_smil_g1

0x4184,	// (0x0007f585) smil_status_pane

0xacca,	// (0x000860cb) smil_text_pane

0xc64b,	// (0x00087a4c) bg_popup_call3_rect_pane_g8

0xc653,	// (0x00087a54) bg_popup_call3_rect_pane_g9

0x0008,

0xf573,	// (0x0008a974) bg_popup_call3_rect_pane_g

0xc89a,	// (0x00087c9b) smil_status_volume_pane_g1

0xacd4,	// (0x000860d5) smil_status_pane_t1

0x54d3,	// (0x000808d4) volume_smil_pane

0xaceb,	// (0x000860ec) list_smil_text_pane

0x4197,	// (0x0007f598) scroll_pane_cp011

0x41a2,	// (0x0007f5a3) smil_text_list_pane_t1_ParamLimits

0x41a2,	// (0x0007f5a3) smil_text_list_pane_t1

0x4236,	// (0x0007f637) aid_volume_smil_ParamLimits

0x4236,	// (0x0007f637) aid_volume_smil

0xa7fd,	// (0x00085bfe) smil_volume_pane_g1

0xa7fd,	// (0x00085bfe) smil_volume_pane_g2

0x0001,

0xf2da,	// (0x0008a6db) smil_volume_pane_g

0x2795,	// (0x0007db96) listscroll_cale_day_pane

0xacf5,	// (0x000860f6) bg_cale_pane

0xad0d,	// (0x0008610e) list_cale_pane

0xad30,	// (0x00086131) scroll_pane_cp09

0xad41,	// (0x00086142) cale_bg_pane_g1

0xad49,	// (0x0008614a) cale_bg_pane_g2

0xad51,	// (0x00086152) cale_bg_pane_g3

0xad59,	// (0x0008615a) cale_bg_pane_g4

0xad61,	// (0x00086162) cale_bg_pane_g5

0xad69,	// (0x0008616a) cale_bg_pane_g6

0xad71,	// (0x00086172) cale_bg_pane_g7

0xad79,	// (0x0008617a) cale_bg_pane_g8

0xad81,	// (0x00086182) cale_bg_pane_g9

0x0008,

0xf2df,	// (0x0008a6e0) cale_bg_pane_g

0x4258,	// (0x0007f659) list_cale_time_pane_ParamLimits

0x4258,	// (0x0007f659) list_cale_time_pane

0xad91,	// (0x00086192) list_cale_time_pane_g1_ParamLimits

0xad91,	// (0x00086192) list_cale_time_pane_g1

0xad9d,	// (0x0008619e) list_cale_time_pane_g2_ParamLimits

0xad9d,	// (0x0008619e) list_cale_time_pane_g2

0x4284,	// (0x0007f685) list_cale_time_pane_g3_ParamLimits

0x4284,	// (0x0007f685) list_cale_time_pane_g3

0x4292,	// (0x0007f693) list_cale_time_pane_g4_ParamLimits

0x4292,	// (0x0007f693) list_cale_time_pane_g4

0x42a0,	// (0x0007f6a1) list_cale_time_pane_g5_ParamLimits

0x42a0,	// (0x0007f6a1) list_cale_time_pane_g5

0x0005,

0xf2f2,	// (0x0008a6f3) list_cale_time_pane_g_ParamLimits

0xf2f2,	// (0x0008a6f3) list_cale_time_pane_g

0xadb7,	// (0x000861b8) list_cale_time_pane_t1_ParamLimits

0xadb7,	// (0x000861b8) list_cale_time_pane_t1

0xaddf,	// (0x000861e0) list_cale_time_pane_t2_ParamLimits

0xaddf,	// (0x000861e0) list_cale_time_pane_t2

0x4542,	// (0x0007f943) aid_blid_cardinal_pane

0x4584,	// (0x0007f985) compass_pane_t4

0xae07,	// (0x00086208) list_cale_time_pane_t4_ParamLimits

0xae07,	// (0x00086208) list_cale_time_pane_t4

0x4592,	// (0x0007f993) compass_pane_t5

0x45a2,	// (0x0007f9a3) compass_pane_t6

0x45b0,	// (0x0007f9b1) compass_pane_t7

0xb2c6,	// (0x000866c7) navi_pane_cc_t1

0xb4b7,	// (0x000868b8) aid_phob_thumbnail_center_pane

0x4ba4,	// (0x0007ffa5) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2ff,	// (0x0008a700) list_cale_time_pane_t_ParamLimits

0xf2ff,	// (0x0008a700) list_cale_time_pane_t

0xa070,	// (0x00085471) bg_popup_window_pane_cp02_ParamLimits

0xa070,	// (0x00085471) bg_popup_window_pane_cp02

0xae2f,	// (0x00086230) heading_pane_cp01_ParamLimits

0xae2f,	// (0x00086230) heading_pane_cp01

0xae3b,	// (0x0008623c) loc_req_pane_ParamLimits

0xae3b,	// (0x0008623c) loc_req_pane

0xae4b,	// (0x0008624c) loc_type_pane_ParamLimits

0xae4b,	// (0x0008624c) loc_type_pane

0xae5d,	// (0x0008625e) loc_type_pane_t1_ParamLimits

0xae5d,	// (0x0008625e) loc_type_pane_t1

0xae6f,	// (0x00086270) loc_type_pane_t2_ParamLimits

0xae6f,	// (0x00086270) loc_type_pane_t2

0xae81,	// (0x00086282) loc_type_pane_t3_ParamLimits

0xae81,	// (0x00086282) loc_type_pane_t3

0x0002,

0xf306,	// (0x0008a707) loc_type_pane_t_ParamLimits

0xf306,	// (0x0008a707) loc_type_pane_t

0xae93,	// (0x00086294) list_loc_req_pane

0xae9d,	// (0x0008629e) scroll_pane_cp012

0x0e41,	// (0x0007c242) list_single_loc_request_popup_menu_pane_ParamLimits

0x0e41,	// (0x0007c242) list_single_loc_request_popup_menu_pane

0xaea8,	// (0x000862a9) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xaea8,	// (0x000862a9) list_single_loc_request_popup_menu_pane_g1

0xaeb4,	// (0x000862b5) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xaeb4,	// (0x000862b5) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf30d,	// (0x0008a70e) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf30d,	// (0x0008a70e) list_single_loc_request_popup_menu_pane_g

0xaec0,	// (0x000862c1) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xaec0,	// (0x000862c1) list_single_loc_request_popup_menu_pane_t1

0x42ae,	// (0x0007f6af) bg_popup_window_pane_cp03_ParamLimits

0x42ae,	// (0x0007f6af) bg_popup_window_pane_cp03

0x42bc,	// (0x0007f6bd) heading_loc_req_pane_ParamLimits

0x42bc,	// (0x0007f6bd) heading_loc_req_pane

0x42c8,	// (0x0007f6c9) popup_dyc_status_message_window_g1_ParamLimits

0x42c8,	// (0x0007f6c9) popup_dyc_status_message_window_g1

0x42d4,	// (0x0007f6d5) popup_dyc_status_message_window_t1_ParamLimits

0x42d4,	// (0x0007f6d5) popup_dyc_status_message_window_t1

0x42e6,	// (0x0007f6e7) popup_dyc_status_message_window_t2_ParamLimits

0x42e6,	// (0x0007f6e7) popup_dyc_status_message_window_t2

0x42f8,	// (0x0007f6f9) popup_dyc_status_message_window_t3_ParamLimits

0x42f8,	// (0x0007f6f9) popup_dyc_status_message_window_t3

0x0002,

0xf312,	// (0x0008a713) popup_dyc_status_message_window_t_ParamLimits

0xf312,	// (0x0008a713) popup_dyc_status_message_window_t

0xa419,	// (0x0008581a) bg_heading_pane_cp01

0xaed6,	// (0x000862d7) heading_loc_req_pane_g1

0xaede,	// (0x000862df) heading_loc_req_pane_g2

0xaee6,	// (0x000862e7) heading_loc_req_pane_g3

0x0002,

0xf319,	// (0x0008a71a) heading_loc_req_pane_g

0xaeee,	// (0x000862ef) heading_loc_req_pane_t1

0xaefd,	// (0x000862fe) bg_popup_sub_pane_cp01_ParamLimits

0xaefd,	// (0x000862fe) bg_popup_sub_pane_cp01

0xaf0b,	// (0x0008630c) popup_cale_events_window_g1_ParamLimits

0xaf0b,	// (0x0008630c) popup_cale_events_window_g1

0xaf2b,	// (0x0008632c) popup_cale_events_window_g2_ParamLimits

0xaf2b,	// (0x0008632c) popup_cale_events_window_g2

0x0001,

0xf34d,	// (0x0008a74e) popup_cale_events_window_g_ParamLimits

0xf34d,	// (0x0008a74e) popup_cale_events_window_g

0xaf4b,	// (0x0008634c) popup_cale_events_window_t1_ParamLimits

0xaf4b,	// (0x0008634c) popup_cale_events_window_t1

0xaf5d,	// (0x0008635e) popup_cale_events_window_t2_ParamLimits

0xaf5d,	// (0x0008635e) popup_cale_events_window_t2

0xaf9b,	// (0x0008639c) popup_cale_events_window_t3_ParamLimits

0xaf9b,	// (0x0008639c) popup_cale_events_window_t3

0xafd5,	// (0x000863d6) popup_cale_events_window_t4_ParamLimits

0xafd5,	// (0x000863d6) popup_cale_events_window_t4

0x0003,

0xf352,	// (0x0008a753) popup_cale_events_window_t_ParamLimits

0xf352,	// (0x0008a753) popup_cale_events_window_t

0x4322,	// (0x0007f723) call_type_pane

0xb268,	// (0x00086669) popup_call_status_window_g1

0x432e,	// (0x0007f72f) popup_call_status_window_g2

0x433a,	// (0x0007f73b) popup_call_status_window_g3

0x0002,

0xf35b,	// (0x0008a75c) popup_call_status_window_g

0xb00b,	// (0x0008640c) call_type_pane_g1

0xb014,	// (0x00086415) call_type_pane_g2

0x0001,

0xf362,	// (0x0008a763) call_type_pane_g

0xa419,	// (0x0008581a) bg_popup_sub_pane_cp02

0xb01d,	// (0x0008641e) listscroll_popup_wml_pane

0xb025,	// (0x00086426) list_wml_pane

0xb02f,	// (0x00086430) scroll_pane_cp013

0xb03a,	// (0x0008643b) list_single_graphic_popup_wml_pane_ParamLimits

0xb03a,	// (0x0008643b) list_single_graphic_popup_wml_pane

0xa7fd,	// (0x00085bfe) list_single_graphic_popup_wml_pane_g1

0xb04e,	// (0x0008644f) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf367,	// (0x0008a768) list_single_graphic_popup_wml_pane_g

0xb056,	// (0x00086457) list_single_graphic_popup_wml_pane_t1

0xb06c,	// (0x0008646d) aid_call_pane

0xa66c,	// (0x00085a6d) popup_clock_analogue_window_g1

0xa66c,	// (0x00085a6d) popup_clock_analogue_window_g2

0x4346,	// (0x0007f747) popup_clock_analogue_window_g3

0x4346,	// (0x0007f747) popup_clock_analogue_window_g4

0xa7fd,	// (0x00085bfe) popup_clock_analogue_window_g5

0x0004,

0xf36c,	// (0x0008a76d) popup_clock_analogue_window_g

0x434e,	// (0x0007f74f) popup_clock_analogue_window_t1

0x435c,	// (0x0007f75d) clock_digital_number_pane_ParamLimits

0x435c,	// (0x0007f75d) clock_digital_number_pane

0x4368,	// (0x0007f769) clock_digital_number_pane_cp02_ParamLimits

0x4368,	// (0x0007f769) clock_digital_number_pane_cp02

0x4374,	// (0x0007f775) clock_digital_number_pane_cp03_ParamLimits

0x4374,	// (0x0007f775) clock_digital_number_pane_cp03

0x4380,	// (0x0007f781) clock_digital_number_pane_cp04_ParamLimits

0x4380,	// (0x0007f781) clock_digital_number_pane_cp04

0x4390,	// (0x0007f791) clock_digital_separator_pane_ParamLimits

0x4390,	// (0x0007f791) clock_digital_separator_pane

0x439c,	// (0x0007f79d) popup_clock_digital_window_t1

0xa7fd,	// (0x00085bfe) clock_digital_number_pane_g1

0xa7fd,	// (0x00085bfe) clock_digital_number_pane_g2

0x0001,

0xf2da,	// (0x0008a6db) clock_digital_number_pane_g

0xa7fd,	// (0x00085bfe) clock_digital_separator_pane_g1

0xa7fd,	// (0x00085bfe) clock_digital_separator_pane_g2

0x0001,

0xf2da,	// (0x0008a6db) clock_digital_separator_pane_g

0xa419,	// (0x0008581a) bg_popup_window_pane_cp04

0xb074,	// (0x00086475) heading_pane_cp03

0xb07c,	// (0x0008647d) listscroll_popup_gms_pane

0xb084,	// (0x00086485) grid_large_graphic_popup_pane

0xb08e,	// (0x0008648f) listscroll_popup_gms_pane_g1

0xb096,	// (0x00086497) listscroll_popup_gms_pane_g2

0x0001,

0xf377,	// (0x0008a778) listscroll_popup_gms_pane_g

0xab2f,	// (0x00085f30) scroll_pane_cp014

0xb09e,	// (0x0008649f) cell_large_graphic_popup_pane_ParamLimits

0xb09e,	// (0x0008649f) cell_large_graphic_popup_pane

0xb0b6,	// (0x000864b7) cell_large_graphic_popup_pane_g1_ParamLimits

0xb0b6,	// (0x000864b7) cell_large_graphic_popup_pane_g1

0xb0c2,	// (0x000864c3) cell_large_graphic_popup_pane_g2_ParamLimits

0xb0c2,	// (0x000864c3) cell_large_graphic_popup_pane_g2

0xb0ce,	// (0x000864cf) cell_large_graphic_popup_pane_g3_ParamLimits

0xb0ce,	// (0x000864cf) cell_large_graphic_popup_pane_g3

0xb0db,	// (0x000864dc) cell_large_graphic_popup_pane_g4_ParamLimits

0xb0db,	// (0x000864dc) cell_large_graphic_popup_pane_g4

0x0003,

0xf37c,	// (0x0008a77d) cell_large_graphic_popup_pane_g_ParamLimits

0xf37c,	// (0x0008a77d) cell_large_graphic_popup_pane_g

0xb0eb,	// (0x000864ec) grid_highlight_pane_cp010

0xa7fd,	// (0x00085bfe) bg_popup_call_pane_g1

0xb0f5,	// (0x000864f6) list_single_graphic_popup_conf_pane_ParamLimits

0xb0f5,	// (0x000864f6) list_single_graphic_popup_conf_pane

0xb108,	// (0x00086509) list_highlight_pane_cp01

0xb111,	// (0x00086512) list_single_graphic_popup_conf_pane_g1

0xb119,	// (0x0008651a) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf385,	// (0x0008a786) list_single_graphic_popup_conf_pane_g

0xb121,	// (0x00086522) list_single_graphic_popup_conf_pane_t1

0xb12f,	// (0x00086530) linegrid_cams_pane_g1

0x43b9,	// (0x0007f7ba) linegrid_cams_pane_g2

0xa8b5,	// (0x00085cb6) linegrid_cams_pane_g3

0xb138,	// (0x00086539) linegrid_cams_pane_g4

0x43c2,	// (0x0007f7c3) linegrid_cams_pane_g5

0x43cb,	// (0x0007f7cc) linegrid_cams_pane_g6

0xa966,	// (0x00085d67) linegrid_cams_pane_g7

0x0006,

0xf38a,	// (0x0008a78b) linegrid_cams_pane_g

0xb141,	// (0x00086542) popup_clock_analogue_window

0xb141,	// (0x00086542) popup_clock_digital_window

0xa419,	// (0x0008581a) popup_phob_thumbnail_window

0xa7fd,	// (0x00085bfe) call_video_uplink_pane_g1

0xb14a,	// (0x0008654b) call_video_uplink_pane_g2

0x0001,

0xf399,	// (0x0008a79a) call_video_uplink_pane_g

0xa933,	// (0x00085d34) video_uplink_pane

0xb152,	// (0x00086553) mce_image_pane_g1

0x43d4,	// (0x0007f7d5) mce_image_pane_g2

0x43dc,	// (0x0007f7dd) mce_image_pane_g3

0x43e4,	// (0x0007f7e5) mce_image_pane_g4

0x43ec,	// (0x0007f7ed) mce_image_pane_g5

0x0004,

0xf39e,	// (0x0008a79f) mce_image_pane_g

0xb15c,	// (0x0008655d) control_top_pane_stacon_cp01_ParamLimits

0xb15c,	// (0x0008655d) control_top_pane_stacon_cp01

0xb170,	// (0x00086571) uni_indicator_pane_stacon_cp01_ParamLimits

0xb170,	// (0x00086571) uni_indicator_pane_stacon_cp01

0xb181,	// (0x00086582) bg_popup_sub_pane_cp03

0x43f4,	// (0x0007f7f5) chi_dic_find_pane

0x43fc,	// (0x0007f7fd) listscroll_chi_dic_pane

0x4405,	// (0x0007f806) main_pane_chidic_g1

0xb18b,	// (0x0008658c) chi_dic_find_pane_t1

0xb199,	// (0x0008659a) find_chidic_pane

0xb1a2,	// (0x000865a3) chi_dic_list_pane_ParamLimits

0xb1a2,	// (0x000865a3) chi_dic_list_pane

0xb1b3,	// (0x000865b4) scroll_pane_cp020

0xb1bb,	// (0x000865bc) find_chidic_pane_t1

0xa419,	// (0x0008581a) input_focus_pane_cp06

0x4418,	// (0x0007f819) list_chi_dic_pane_ParamLimits

0x4418,	// (0x0007f819) list_chi_dic_pane

0x4435,	// (0x0007f836) list_chi_dic_pane_t1_ParamLimits

0x4435,	// (0x0007f836) list_chi_dic_pane_t1

0xa419,	// (0x0008581a) list_highlight_pane_cp020

0xb1ca,	// (0x000865cb) bg_cale_heading_pane_g1

0x4448,	// (0x0007f849) bg_cale_heading_pane_g2

0x4450,	// (0x0007f851) bg_cale_heading_pane_g3

0x4458,	// (0x0007f859) bg_cale_heading_pane_g4

0x4462,	// (0x0007f863) bg_cale_heading_pane_g5

0x446c,	// (0x0007f86d) bg_cale_heading_pane_g6

0x4474,	// (0x0007f875) bg_cale_heading_pane_g7

0x447c,	// (0x0007f87d) bg_cale_heading_pane_g8

0x4486,	// (0x0007f887) bg_cale_heading_pane_g9

0x0008,

0xf3a9,	// (0x0008a7aa) bg_cale_heading_pane_g

0xb1ca,	// (0x000865cb) bg_cale_side_pane_g1

0x4490,	// (0x0007f891) bg_cale_side_pane_g2

0x449a,	// (0x0007f89b) bg_cale_side_pane_g3

0x44a4,	// (0x0007f8a5) bg_cale_side_pane_g4

0x44ae,	// (0x0007f8af) bg_cale_side_pane_g5

0x44b8,	// (0x0007f8b9) bg_cale_side_pane_g6

0x44c2,	// (0x0007f8c3) bg_cale_side_pane_g7

0x44cc,	// (0x0007f8cd) bg_cale_side_pane_g8

0x44d4,	// (0x0007f8d5) bg_cale_side_pane_g9

0x0008,

0xf3bc,	// (0x0008a7bd) bg_cale_side_pane_g

0x44dc,	// (0x0007f8dd) popup_call_status_window_ParamLimits

0x44dc,	// (0x0007f8dd) popup_call_status_window

0xb1d2,	// (0x000865d3) stacon_top_pane

0xb1da,	// (0x000865db) status_pane_ParamLimits

0xb1da,	// (0x000865db) status_pane

0xb1ef,	// (0x000865f0) status_small_pane

0xb1f7,	// (0x000865f8) control_pane

0xa419,	// (0x0008581a) stacon_bottom_pane

0xb1ff,	// (0x00086600) list_single_mce_smart_pane_t1_ParamLimits

0xb1ff,	// (0x00086600) list_single_mce_smart_pane_t1

0xb212,	// (0x00086613) list_single_mce_smart_pane_t2_ParamLimits

0xb212,	// (0x00086613) list_single_mce_smart_pane_t2

0x0001,

0xf3cf,	// (0x0008a7d0) list_single_mce_smart_pane_t_ParamLimits

0xf3cf,	// (0x0008a7d0) list_single_mce_smart_pane_t

0x44e8,	// (0x0007f8e9) compass_pane

0x44f4,	// (0x0007f8f5) main_location2_pane_t1

0x4508,	// (0x0007f909) main_location2_pane_t2

0x451c,	// (0x0007f91d) main_location2_pane_t3

0x0003,

0xf3d4,	// (0x0008a7d5) main_location2_pane_t

0xb231,	// (0x00086632) compass_pane_g1_ParamLimits

0xb231,	// (0x00086632) compass_pane_g1

0x4566,	// (0x0007f967) compass_pane_t1

0x4575,	// (0x0007f976) compass_pane_t2

0x0005,

0xf3dd,	// (0x0008a7de) compass_pane_t

0x45c0,	// (0x0007f9c1) text_secondary_cp61

0xb2bd,	// (0x000866be) navi_pane_cams_g5

0xb339,	// (0x0008673a) navi_pane_im_t1

0xb347,	// (0x00086748) navi_pane_mp_g1_ParamLimits

0xb347,	// (0x00086748) navi_pane_mp_g1

0xb35b,	// (0x0008675c) navi_pane_mp_g2_ParamLimits

0xb35b,	// (0x0008675c) navi_pane_mp_g2

0xb367,	// (0x00086768) navi_pane_mp_g3_ParamLimits

0xb367,	// (0x00086768) navi_pane_mp_g3

0x0002,

0xf3f1,	// (0x0008a7f2) navi_pane_mp_g_ParamLimits

0xf3f1,	// (0x0008a7f2) navi_pane_mp_g

0xb373,	// (0x00086774) navi_pane_mp_t1

0xb381,	// (0x00086782) navi_pane_mp_t2

0x0002,

0xf3f8,	// (0x0008a7f9) navi_pane_mp_t

0xb3ec,	// (0x000867ed) navi_pane_vt_g1

0xb373,	// (0x00086774) navi_pane_vt_t1

0xb3f4,	// (0x000867f5) navi_slider_pane

0xb404,	// (0x00086805) zooming_pane

0xb418,	// (0x00086819) navi_slider_pane_g1

0x45fb,	// (0x0007f9fc) navi_slider_pane_g2

0x0006,

0xf3ff,	// (0x0008a800) navi_slider_pane_g

0xb43c,	// (0x0008683d) aid_levels_zoom

0xb444,	// (0x00086845) zooming_pane_g1

0xb44c,	// (0x0008684d) zooming_pane_g2

0xb44c,	// (0x0008684d) zooming_pane_g3

0x0002,

0xf40e,	// (0x0008a80f) zooming_pane_g

0xb454,	// (0x00086855) level_10_zoom

0xb45d,	// (0x0008685e) level_11_zoom

0xb466,	// (0x00086867) level_1_zoom

0xb46f,	// (0x00086870) level_2_zoom

0xb478,	// (0x00086879) level_3_zoom

0xb481,	// (0x00086882) level_4_zoom

0xb48a,	// (0x0008688b) level_5_zoom

0xb493,	// (0x00086894) level_6_zoom

0xb49c,	// (0x0008689d) level_7_zoom

0xb4a5,	// (0x000868a6) level_8_zoom

0xb4ae,	// (0x000868af) level_9_zoom

0xb4bf,	// (0x000868c0) popup_phob_thumbnail_window_g1

0xb4c7,	// (0x000868c8) popup_phob_thumbnail_window_g2

0x0001,

0xf415,	// (0x0008a816) popup_phob_thumbnail_window_g

0xc7ad,	// (0x00087bae) level_1_location

0xc7b5,	// (0x00087bb6) level_2_location

0xc7bd,	// (0x00087bbe) level_3_location

0xc7c5,	// (0x00087bc6) level_4_location

0xb404,	// (0x00086805) level_5_location

0x460d,	// (0x0007fa0e) mce_icon_pane_g1

0x4615,	// (0x0007fa16) mce_icon_pane_g2

0x0001,

0xf41a,	// (0x0008a81b) mce_icon_pane_g

0x461d,	// (0x0007fa1e) main_mup_pane_g1_ParamLimits

0x461d,	// (0x0007fa1e) main_mup_pane_g1

0x4635,	// (0x0007fa36) main_mup_pane_g2_ParamLimits

0x4635,	// (0x0007fa36) main_mup_pane_g2

0x4651,	// (0x0007fa52) main_mup_pane_g3_ParamLimits

0x4651,	// (0x0007fa52) main_mup_pane_g3

0x466d,	// (0x0007fa6e) main_mup_pane_g4_ParamLimits

0x466d,	// (0x0007fa6e) main_mup_pane_g4

0x4689,	// (0x0007fa8a) main_mup_pane_g5_ParamLimits

0x4689,	// (0x0007fa8a) main_mup_pane_g5

0x46aa,	// (0x0007faab) main_mup_pane_g6_ParamLimits

0x46aa,	// (0x0007faab) main_mup_pane_g6

0x46c6,	// (0x0007fac7) main_mup_pane_g7_ParamLimits

0x46c6,	// (0x0007fac7) main_mup_pane_g7

0x46e2,	// (0x0007fae3) main_mup_pane_g8_ParamLimits

0x46e2,	// (0x0007fae3) main_mup_pane_g8

0x46fe,	// (0x0007faff) main_mup_pane_g9_ParamLimits

0x46fe,	// (0x0007faff) main_mup_pane_g9

0x471d,	// (0x0007fb1e) main_mup_pane_g10_ParamLimits

0x471d,	// (0x0007fb1e) main_mup_pane_g10

0x473c,	// (0x0007fb3d) main_mup_pane_g11_ParamLimits

0x473c,	// (0x0007fb3d) main_mup_pane_g11

0x4754,	// (0x0007fb55) main_mup_pane_g12_ParamLimits

0x4754,	// (0x0007fb55) main_mup_pane_g12

0x4762,	// (0x0007fb63) main_mup_pane_g13_ParamLimits

0x4762,	// (0x0007fb63) main_mup_pane_g13

0x000c,

0xf41f,	// (0x0008a820) main_mup_pane_g_ParamLimits

0xf41f,	// (0x0008a820) main_mup_pane_g

0x4778,	// (0x0007fb79) main_mup_pane_t1_ParamLimits

0x4778,	// (0x0007fb79) main_mup_pane_t1

0x4795,	// (0x0007fb96) main_mup_pane_t2_ParamLimits

0x4795,	// (0x0007fb96) main_mup_pane_t2

0x47af,	// (0x0007fbb0) main_mup_pane_t3_ParamLimits

0x47af,	// (0x0007fbb0) main_mup_pane_t3

0x47c9,	// (0x0007fbca) main_mup_pane_t4_ParamLimits

0x47c9,	// (0x0007fbca) main_mup_pane_t4

0x47db,	// (0x0007fbdc) main_mup_pane_t5_ParamLimits

0x47db,	// (0x0007fbdc) main_mup_pane_t5

0x47ed,	// (0x0007fbee) main_mup_pane_t6_ParamLimits

0x47ed,	// (0x0007fbee) main_mup_pane_t6

0x0005,

0xf43a,	// (0x0008a83b) main_mup_pane_t_ParamLimits

0xf43a,	// (0x0008a83b) main_mup_pane_t

0x4803,	// (0x0007fc04) mup_progress_pane_ParamLimits

0x4803,	// (0x0007fc04) mup_progress_pane

0x480f,	// (0x0007fc10) mup_visualizer_pane_ParamLimits

0x480f,	// (0x0007fc10) mup_visualizer_pane

0x484d,	// (0x0007fc4e) mup_volume_pane_ParamLimits

0x484d,	// (0x0007fc4e) mup_volume_pane

0xb268,	// (0x00086669) mup_visualizer_pane_g1_ParamLimits

0xb268,	// (0x00086669) mup_visualizer_pane_g1

0xb268,	// (0x00086669) mup_visualizer_pane_g2_ParamLimits

0xb268,	// (0x00086669) mup_visualizer_pane_g2

0xb231,	// (0x00086632) mup_visualizer_pane_g3_ParamLimits

0xb231,	// (0x00086632) mup_visualizer_pane_g3

0x0002,

0xf447,	// (0x0008a848) mup_visualizer_pane_g_ParamLimits

0xf447,	// (0x0008a848) mup_visualizer_pane_g

0xa7fd,	// (0x00085bfe) mup_volume_pane_g1

0xb4d7,	// (0x000868d8) mup_volume_pane_g2

0x0001,

0xf44e,	// (0x0008a84f) mup_volume_pane_g

0xa7fd,	// (0x00085bfe) mup_progress_pane_g1

0xb4e0,	// (0x000868e1) mup_progress_pane_g2

0xb4e9,	// (0x000868ea) mup_progress_pane_g3

0x0002,

0xf453,	// (0x0008a854) mup_progress_pane_g

0xa419,	// (0x0008581a) bg_popup_window_pane_cp05

0xb4f2,	// (0x000868f3) heading_pane_cp02_ParamLimits

0xb4f2,	// (0x000868f3) heading_pane_cp02

0xb50c,	// (0x0008690d) list_popup_blid_pane

0xb514,	// (0x00086915) list_blid_sat_info_pane_ParamLimits

0xb514,	// (0x00086915) list_blid_sat_info_pane

0xb527,	// (0x00086928) list_blid_sat_info_pane_g1

0xb52f,	// (0x00086930) list_blid_sat_info_pane_t1

0x4958,	// (0x0007fd59) mup_equalizer_pane_ParamLimits

0x4958,	// (0x0007fd59) mup_equalizer_pane

0x4979,	// (0x0007fd7a) mup_equalizer_pane_cp1_ParamLimits

0x4979,	// (0x0007fd7a) mup_equalizer_pane_cp1

0x499a,	// (0x0007fd9b) mup_equalizer_pane_cp2_ParamLimits

0x499a,	// (0x0007fd9b) mup_equalizer_pane_cp2

0x49bb,	// (0x0007fdbc) mup_equalizer_pane_cp3_ParamLimits

0x49bb,	// (0x0007fdbc) mup_equalizer_pane_cp3

0x49dc,	// (0x0007fddd) mup_equalizer_pane_cp4_ParamLimits

0x49dc,	// (0x0007fddd) mup_equalizer_pane_cp4

0x49fd,	// (0x0007fdfe) mup_equalizer_pane_cp5

0x4a13,	// (0x0007fe14) mup_equalizer_pane_cp6

0x4a2b,	// (0x0007fe2c) mup_equalizer_pane_cp7

0xc6cb,	// (0x00087acc) bg_popup_call_poc_act_pane_g9

0xc6d3,	// (0x00087ad4) bg_popup_call_poc_act_pane_g10

0xc6db,	// (0x00087adc) bg_popup_call_poc_act_pane_g11

0x000a,

0xa674,	// (0x00085a75) mup_scale_pane

0xa7fd,	// (0x00085bfe) mup_scale_pane_g1

0xb53d,	// (0x0008693e) mup_scale_pane_g2

0x0006,

0xf46f,	// (0x0008a870) mup_scale_pane_g

0xb561,	// (0x00086962) msg_data_pane

0xb569,	// (0x0008696a) scroll_pane_cp017

0x0f2c,	// (0x0007c32d) bg_list_pane_cp04_ParamLimits

0x0f2c,	// (0x0007c32d) bg_list_pane_cp04

0xb571,	// (0x00086972) msg_data_pane_g1

0x4a55,	// (0x0007fe56) msg_data_pane_g2

0x43dc,	// (0x0007f7dd) msg_data_pane_g3

0x4a5d,	// (0x0007fe5e) msg_data_pane_g4

0x4a65,	// (0x0007fe66) msg_data_pane_g5

0x4a6d,	// (0x0007fe6e) msg_data_pane_g6

0x4a75,	// (0x0007fe76) msg_data_pane_g7

0x0006,

0xf47e,	// (0x0008a87f) msg_data_pane_g

0x0f50,	// (0x0007c351) msg_text_pane_ParamLimits

0x0f50,	// (0x0007c351) msg_text_pane

0x4a7d,	// (0x0007fe7e) qrid_highlight_pane_cp011_ParamLimits

0x4a7d,	// (0x0007fe7e) qrid_highlight_pane_cp011

0xa419,	// (0x0008581a) msg_body_pane

0xa419,	// (0x0008581a) msg_header_pane

0xb579,	// (0x0008697a) input_focus_pane_cp07

0x0fa0,	// (0x0007c3a1) msg_header_pane_t1_ParamLimits

0x0fa0,	// (0x0007c3a1) msg_header_pane_t1

0x0fb2,	// (0x0007c3b3) msg_header_pane_t2_ParamLimits

0x0fb2,	// (0x0007c3b3) msg_header_pane_t2

0x0001,

0xf492,	// (0x0008a893) msg_header_pane_t_ParamLimits

0xf492,	// (0x0008a893) msg_header_pane_t

0xb58e,	// (0x0008698f) msg_body_pane_g1

0x0fc4,	// (0x0007c3c5) msg_body_pane_t1_ParamLimits

0x0fc4,	// (0x0007c3c5) msg_body_pane_t1

0x0ff5,	// (0x0007c3f6) msg_body_pane_t2_ParamLimits

0x0ff5,	// (0x0007c3f6) msg_body_pane_t2

0x1007,	// (0x0007c408) msg_body_pane_t3_ParamLimits

0x1007,	// (0x0007c408) msg_body_pane_t3

0x0002,

0xf497,	// (0x0008a898) msg_body_pane_t_ParamLimits

0xf497,	// (0x0008a898) msg_body_pane_t

0x4af4,	// (0x0007fef5) main_viewer_pane_g1_ParamLimits

0x4af4,	// (0x0007fef5) main_viewer_pane_g1

0x4b00,	// (0x0007ff01) main_viewer_pane_g2_ParamLimits

0x4b00,	// (0x0007ff01) main_viewer_pane_g2

0x4b0c,	// (0x0007ff0d) main_viewer_pane_g3_ParamLimits

0x4b0c,	// (0x0007ff0d) main_viewer_pane_g3

0x4b1d,	// (0x0007ff1e) main_viewer_pane_g4_ParamLimits

0x4b1d,	// (0x0007ff1e) main_viewer_pane_g4

0x4b2e,	// (0x0007ff2f) main_viewer_pane_g5_ParamLimits

0x4b2e,	// (0x0007ff2f) main_viewer_pane_g5

0x4b2e,	// (0x0007ff2f) main_viewer_pane_g7_ParamLimits

0x4b2e,	// (0x0007ff2f) main_viewer_pane_g7

0x4b40,	// (0x0007ff41) main_viewer_pane_g8_ParamLimits

0x4b40,	// (0x0007ff41) main_viewer_pane_g8

0x0007,

0xf4a7,	// (0x0008a8a8) main_viewer_pane_g_ParamLimits

0xf4a7,	// (0x0008a8a8) main_viewer_pane_g

0xb596,	// (0x00086997) viewer_content_pane_ParamLimits

0xb596,	// (0x00086997) viewer_content_pane

0x4b78,	// (0x0007ff79) main_postcard_pane_g1_ParamLimits

0x4b78,	// (0x0007ff79) main_postcard_pane_g1

0x4b86,	// (0x0007ff87) main_postcard_pane_g2_ParamLimits

0x4b86,	// (0x0007ff87) main_postcard_pane_g2

0x4b94,	// (0x0007ff95) main_postcard_pane_g3_ParamLimits

0x4b94,	// (0x0007ff95) main_postcard_pane_g3

0x0005,

0xf4b8,	// (0x0008a8b9) main_postcard_pane_g_ParamLimits

0xf4b8,	// (0x0008a8b9) main_postcard_pane_g

0x4ba4,	// (0x0007ffa5) main_postcard_pane_g4

0xc8ad,	// (0x00087cae) smil_status_volume_pane_g2

0x4bd0,	// (0x0007ffd1) postcard_pane_ParamLimits

0x4bd0,	// (0x0007ffd1) postcard_pane

0xb268,	// (0x00086669) postcard_pane_g1_ParamLimits

0xb268,	// (0x00086669) postcard_pane_g1

0x4c02,	// (0x00080003) postcard_pane_g2_ParamLimits

0x4c02,	// (0x00080003) postcard_pane_g2

0x4c0e,	// (0x0008000f) postcard_pane_g3_ParamLimits

0x4c0e,	// (0x0008000f) postcard_pane_g3

0xb5a4,	// (0x000869a5) postcard_pane_g4_ParamLimits

0xb5a4,	// (0x000869a5) postcard_pane_g4

0x4c1a,	// (0x0008001b) postcard_pane_g5_ParamLimits

0x4c1a,	// (0x0008001b) postcard_pane_g5

0x4c26,	// (0x00080027) postcard_pane_g6_ParamLimits

0x4c26,	// (0x00080027) postcard_pane_g6

0xb5b2,	// (0x000869b3) postcard_pane_g7_ParamLimits

0xb5b2,	// (0x000869b3) postcard_pane_g7

0x0006,

0xf4c5,	// (0x0008a8c6) postcard_pane_g_ParamLimits

0xf4c5,	// (0x0008a8c6) postcard_pane_g

0x4c32,	// (0x00080033) main_mp2_pane_g1_ParamLimits

0x4c32,	// (0x00080033) main_mp2_pane_g1

0x4c3e,	// (0x0008003f) main_mp2_pane_g2_ParamLimits

0x4c3e,	// (0x0008003f) main_mp2_pane_g2

0x4c4a,	// (0x0008004b) main_mp2_pane_g3_ParamLimits

0x4c4a,	// (0x0008004b) main_mp2_pane_g3

0x0002,

0xf4d4,	// (0x0008a8d5) main_mp2_pane_g_ParamLimits

0xf4d4,	// (0x0008a8d5) main_mp2_pane_g

0x4c56,	// (0x00080057) main_mp2_pane_t1_ParamLimits

0x4c56,	// (0x00080057) main_mp2_pane_t1

0x4c6d,	// (0x0008006e) main_mp2_pane_t2_ParamLimits

0x4c6d,	// (0x0008006e) main_mp2_pane_t2

0x4c7f,	// (0x00080080) main_mp2_pane_t3_ParamLimits

0x4c7f,	// (0x00080080) main_mp2_pane_t3

0x0002,

0xf4db,	// (0x0008a8dc) main_mp2_pane_t_ParamLimits

0xf4db,	// (0x0008a8dc) main_mp2_pane_t

0xb5c0,	// (0x000869c1) pec_content_pane_ParamLimits

0xb5c0,	// (0x000869c1) pec_content_pane

0xab2f,	// (0x00085f30) scroll_pane_cp015

0xb5d2,	// (0x000869d3) pec_attribute_pane_ParamLimits

0xb5d2,	// (0x000869d3) pec_attribute_pane

0x4c91,	// (0x00080092) pec_content_pane_g1_ParamLimits

0x4c91,	// (0x00080092) pec_content_pane_g1

0xb5e2,	// (0x000869e3) pec_content_pane_t1_ParamLimits

0xb5e2,	// (0x000869e3) pec_content_pane_t1

0xb5f4,	// (0x000869f5) pec_content_pane_t2_ParamLimits

0xb5f4,	// (0x000869f5) pec_content_pane_t2

0x0001,

0xf4e2,	// (0x0008a8e3) pec_content_pane_t_ParamLimits

0xf4e2,	// (0x0008a8e3) pec_content_pane_t

0x4c9d,	// (0x0008009e) list_single_graphic_pane_cp01_ParamLimits

0x4c9d,	// (0x0008009e) list_single_graphic_pane_cp01

0xa674,	// (0x00085a75) bg_popup_sub_pane_cp04

0xb606,	// (0x00086a07) popup_mup_playback_window_g1

0xb612,	// (0x00086a13) popup_mup_playback_window_t1

0xb627,	// (0x00086a28) popup_mup_playback_window_t2

0x0001,

0xf4e7,	// (0x0008a8e8) popup_mup_playback_window_t

0xb65e,	// (0x00086a5f) main_image_pane_g1_ParamLimits

0xb65e,	// (0x00086a5f) main_image_pane_g1

0xb6a1,	// (0x00086aa2) scroll_pane_cp018_ParamLimits

0xb6a1,	// (0x00086aa2) scroll_pane_cp018

0xb6b9,	// (0x00086aba) scroll_pane_cp016_ParamLimits

0xb6b9,	// (0x00086aba) scroll_pane_cp016

0x4d3d,	// (0x0008013e) smil2_image_pane_ParamLimits

0x4d3d,	// (0x0008013e) smil2_image_pane

0x4d71,	// (0x00080172) smil2_root_pane_ParamLimits

0x4d71,	// (0x00080172) smil2_root_pane

0x4d9d,	// (0x0008019e) smil2_text_pane_ParamLimits

0x4d9d,	// (0x0008019e) smil2_text_pane

0xa419,	// (0x0008581a) bg_list_pane_cp06

0xb6f5,	// (0x00086af6) grid_radio_pane

0xa419,	// (0x0008581a) bg_popup_window_pane_cp06

0xb6fd,	// (0x00086afe) main_fmradio_pane_t1

0xb074,	// (0x00086475) heading_pane_cp04

0xb70b,	// (0x00086b0c) main_fmradio_pane_t2

0xc6e3,	// (0x00087ae4) popup_cale_lunar_info_window_g1

0xb719,	// (0x00086b1a) main_fmradio_pane_t3

0xc6eb,	// (0x00087aec) popup_cale_lunar_info_window_g2

0xb727,	// (0x00086b28) main_fmradio_pane_t4

0x0001,

0xb735,	// (0x00086b36) main_fmradio_pane_t5

0x0004,

0xf5c2,	// (0x0008a9c3) popup_cale_lunar_info_window_g

0xf4fc,	// (0x0008a8fd) main_fmradio_pane_t

0xb743,	// (0x00086b44) wait_bar_pane_cp03

0xb74b,	// (0x00086b4c) cell_fmradio_pane_ParamLimits

0xb74b,	// (0x00086b4c) cell_fmradio_pane

0xb5b2,	// (0x000869b3) cell_fmradio_pane_g1_ParamLimits

0xb5b2,	// (0x000869b3) cell_fmradio_pane_g1

0xa419,	// (0x0008581a) grid_highlight_pane_cp011

0xb75e,	// (0x00086b5f) poc_content_pane_ParamLimits

0xb75e,	// (0x00086b5f) poc_content_pane

0xb770,	// (0x00086b71) scroll_pane_cp019

0x4ddd,	// (0x000801de) popup_call_poc_act_window_ParamLimits

0x4ddd,	// (0x000801de) popup_call_poc_act_window

0x4dea,	// (0x000801eb) popup_call_poc_inact_window_ParamLimits

0x4dea,	// (0x000801eb) popup_call_poc_inact_window

0xf599,	// (0x0008a99a) bg_popup_call_poc_act_pane_g

0xc65b,	// (0x00087a5c) bg_popup_call_poc_inact_pane_g1

0xc663,	// (0x00087a64) bg_popup_call_poc_inact_pane_g2

0xb778,	// (0x00086b79) popup_call_poc_act_window_g2

0xc66b,	// (0x00087a6c) bg_popup_call_poc_inact_pane_g3

0xc673,	// (0x00087a74) bg_popup_call_poc_inact_pane_g4

0xc67b,	// (0x00087a7c) bg_popup_call_poc_inact_pane_g5

0xb780,	// (0x00086b81) popup_call_poc_act_window_t1_ParamLimits

0xb780,	// (0x00086b81) popup_call_poc_act_window_t1

0xb7a8,	// (0x00086ba9) popup_call_poc_act_window_t2_ParamLimits

0xb7a8,	// (0x00086ba9) popup_call_poc_act_window_t2

0xb7d0,	// (0x00086bd1) popup_call_poc_act_window_t3_ParamLimits

0xb7d0,	// (0x00086bd1) popup_call_poc_act_window_t3

0xb7f8,	// (0x00086bf9) popup_call_poc_act_window_t4_ParamLimits

0xb7f8,	// (0x00086bf9) popup_call_poc_act_window_t4

0x0003,

0xf507,	// (0x0008a908) popup_call_poc_act_window_t_ParamLimits

0xf507,	// (0x0008a908) popup_call_poc_act_window_t

0xc683,	// (0x00087a84) bg_popup_call_poc_inact_pane_g6

0xc68b,	// (0x00087a8c) bg_popup_call_poc_inact_pane_g7

0xc693,	// (0x00087a94) bg_popup_call_poc_inact_pane_g8

0xb80a,	// (0x00086c0b) popup_call_poc_inact_window_g2

0xc69b,	// (0x00087a9c) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf586,	// (0x0008a987) bg_popup_call_poc_inact_pane_g

0xb812,	// (0x00086c13) popup_call_poc_inact_window_t1_ParamLimits

0xb812,	// (0x00086c13) popup_call_poc_inact_window_t1

0xb827,	// (0x00086c28) popup_call_poc_inact_window_t2_ParamLimits

0xb827,	// (0x00086c28) popup_call_poc_inact_window_t2

0xb83c,	// (0x00086c3d) popup_call_poc_inact_window_t3_ParamLimits

0xb83c,	// (0x00086c3d) popup_call_poc_inact_window_t3

0x0002,

0xf510,	// (0x0008a911) popup_call_poc_inact_window_t_ParamLimits

0xf510,	// (0x0008a911) popup_call_poc_inact_window_t

0xc820,	// (0x00087c21) context_pane_ParamLimits

0x5418,	// (0x00080819) signal_pane_ParamLimits

0xb404,	// (0x00086805) main_call2_pane

0x538b,	// (0x0008078c) popup_phob_thumbnail2_window_ParamLimits

0x538b,	// (0x0008078c) popup_phob_thumbnail2_window

0x4aa2,	// (0x0007fea3) aid_hotspot_pointer_arrow_pane

0x4aaa,	// (0x0007feab) aid_hotspot_pointer_hand_pane

0x5110,	// (0x00080511) phob_pre_status_pane_g5

0x2d7b,	// (0x0007e17c) cams_zoom_pane_ParamLimits

0x2d87,	// (0x0007e188) image_vga_pane_ParamLimits

0x2d96,	// (0x0007e197) main_camera_pane_g1_ParamLimits

0x2da4,	// (0x0007e1a5) main_camera_pane_g2_ParamLimits

0x2db0,	// (0x0007e1b1) main_camera_pane_g3_ParamLimits

0x2dbc,	// (0x0007e1bd) main_camera_pane_g4_ParamLimits

0x2dc8,	// (0x0007e1c9) main_camera_pane_g5_ParamLimits

0x2dd4,	// (0x0007e1d5) main_camera_pane_g6_ParamLimits

0x2de0,	// (0x0007e1e1) main_camera_pane_g7_ParamLimits

0xf20f,	// (0x0008a610) main_camera_pane_g_ParamLimits

0x2dec,	// (0x0007e1ed) main_camera_pane_t1_ParamLimits

0x2dfe,	// (0x0007e1ff) main_camera_pane_t2_ParamLimits

0xf220,	// (0x0008a621) main_camera_pane_t_ParamLimits

0xa674,	// (0x00085a75) bg_popup_preview_window_pane_cp01_ParamLimits

0xa674,	// (0x00085a75) bg_popup_preview_window_pane_cp01

0xb851,	// (0x00086c52) popup_phob_thumbnail2_window_g1_ParamLimits

0xb851,	// (0x00086c52) popup_phob_thumbnail2_window_g1

0xa419,	// (0x0008581a) call2_cli_visual_pane

0x4e06,	// (0x00080207) popup_call2_audio_conf_window_ParamLimits

0x4e06,	// (0x00080207) popup_call2_audio_conf_window

0x4e1b,	// (0x0008021c) popup_call2_audio_first_window_ParamLimits

0x4e1b,	// (0x0008021c) popup_call2_audio_first_window

0x4eb9,	// (0x000802ba) popup_call2_audio_in_window_ParamLimits

0x4eb9,	// (0x000802ba) popup_call2_audio_in_window

0x4efb,	// (0x000802fc) popup_call2_audio_out_window_ParamLimits

0x4efb,	// (0x000802fc) popup_call2_audio_out_window

0x4f5d,	// (0x0008035e) popup_call2_audio_second_window_ParamLimits

0x4f5d,	// (0x0008035e) popup_call2_audio_second_window

0x4fbb,	// (0x000803bc) popup_call2_audio_wait_window_ParamLimits

0x4fbb,	// (0x000803bc) popup_call2_audio_wait_window

0xa419,	// (0x0008581a) bg_popup_call2_act_pane_cp03

0xa656,	// (0x00085a57) list_conf_pane_cp

0xb85d,	// (0x00086c5e) popup_call2_audio_conf_window_t1

0xb86b,	// (0x00086c6c) list_single_graphic_popup_conf2_pane_ParamLimits

0xb86b,	// (0x00086c6c) list_single_graphic_popup_conf2_pane

0xb108,	// (0x00086509) list_highlight_pane_cp04

0xb87e,	// (0x00086c7f) list_single_graphic_popup_conf2_pane_g1

0xb119,	// (0x0008651a) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf517,	// (0x0008a918) list_single_graphic_popup_conf2_pane_g

0xb888,	// (0x00086c89) list_single_graphic_popup_conf2_pane_t1

0xb896,	// (0x00086c97) bg_popup_call2_act_pane_cp01_ParamLimits

0xb896,	// (0x00086c97) bg_popup_call2_act_pane_cp01

0xb920,	// (0x00086d21) call_type_pane_cp05_ParamLimits

0xb920,	// (0x00086d21) call_type_pane_cp05

0xb974,	// (0x00086d75) popup_call2_audio_second_window_g1_ParamLimits

0xb974,	// (0x00086d75) popup_call2_audio_second_window_g1

0xb9c8,	// (0x00086dc9) popup_call2_audio_second_window_g2_ParamLimits

0xb9c8,	// (0x00086dc9) popup_call2_audio_second_window_g2

0x0002,

0xf51c,	// (0x0008a91d) popup_call2_audio_second_window_g_ParamLimits

0xf51c,	// (0x0008a91d) popup_call2_audio_second_window_g

0xba2d,	// (0x00086e2e) popup_call2_audio_second_window_t1_ParamLimits

0xba2d,	// (0x00086e2e) popup_call2_audio_second_window_t1

0xbae8,	// (0x00086ee9) popup_call2_audio_second_window_t2_ParamLimits

0xbae8,	// (0x00086ee9) popup_call2_audio_second_window_t2

0xbb3b,	// (0x00086f3c) popup_call2_audio_second_window_t3_ParamLimits

0xbb3b,	// (0x00086f3c) popup_call2_audio_second_window_t3

0x0003,

0xf523,	// (0x0008a924) popup_call2_audio_second_window_t_ParamLimits

0xf523,	// (0x0008a924) popup_call2_audio_second_window_t

0xa419,	// (0x0008581a) bg_popup_call2_in_pane_cp02

0xa423,	// (0x00085824) call_type_pane_cp04

0xa42b,	// (0x0008582c) popup_call2_audio_wait_window_g1

0xa433,	// (0x00085834) popup_call2_audio_wait_window_g2

0x0001,

0xf0fc,	// (0x0008a4fd) popup_call2_audio_wait_window_g

0xa43b,	// (0x0008583c) popup_call2_audio_wait_window_t3

0xbc2e,	// (0x0008702f) bg_popup_call2_act_pane_ParamLimits

0xbc2e,	// (0x0008702f) bg_popup_call2_act_pane

0xbcee,	// (0x000870ef) call_type_pane_cp03_ParamLimits

0xbcee,	// (0x000870ef) call_type_pane_cp03

0xbd52,	// (0x00087153) popup_call2_audio_first_window_g1_ParamLimits

0xbd52,	// (0x00087153) popup_call2_audio_first_window_g1

0xbdc2,	// (0x000871c3) popup_call2_audio_first_window_g2_ParamLimits

0xbdc2,	// (0x000871c3) popup_call2_audio_first_window_g2

0xb268,	// (0x00086669) popup_call2_audio_first_window_g3_ParamLimits

0xb268,	// (0x00086669) popup_call2_audio_first_window_g3

0x0004,

0xf52c,	// (0x0008a92d) popup_call2_audio_first_window_g_ParamLimits

0xf52c,	// (0x0008a92d) popup_call2_audio_first_window_g

0xbea0,	// (0x000872a1) popup_call2_audio_first_window_t1_ParamLimits

0xbea0,	// (0x000872a1) popup_call2_audio_first_window_t1

0xbfa3,	// (0x000873a4) popup_call2_audio_first_window_t4_ParamLimits

0xbfa3,	// (0x000873a4) popup_call2_audio_first_window_t4

0xc086,	// (0x00087487) popup_call2_audio_first_window_t5_ParamLimits

0xc086,	// (0x00087487) popup_call2_audio_first_window_t5

0x0003,

0xf537,	// (0x0008a938) popup_call2_audio_first_window_t_ParamLimits

0xf537,	// (0x0008a938) popup_call2_audio_first_window_t

0xa66c,	// (0x00085a6d) bg_popup_call2_act_pane_g1

0xc6f3,	// (0x00087af4) popup_cale_lunar_info_window_t1

0xc701,	// (0x00087b02) popup_cale_lunar_info_window_t2

0xc70f,	// (0x00087b10) popup_cale_lunar_info_window_t3

0xa419,	// (0x0008581a) bg_popup_call2_bubble_pane

0xc187,	// (0x00087588) bg_popup_call2_in_pane_cp01_ParamLimits

0xc187,	// (0x00087588) bg_popup_call2_in_pane_cp01

0xa0f5,	// (0x000854f6) call_type_pane_cp02

0xc1cf,	// (0x000875d0) popup_call2_audio_out_window_g1_ParamLimits

0xc1cf,	// (0x000875d0) popup_call2_audio_out_window_g1

0xc1fb,	// (0x000875fc) popup_call2_audio_out_window_g2_ParamLimits

0xc1fb,	// (0x000875fc) popup_call2_audio_out_window_g2

0xc223,	// (0x00087624) popup_call2_audio_out_window_g3_ParamLimits

0xc223,	// (0x00087624) popup_call2_audio_out_window_g3

0x0003,

0xf540,	// (0x0008a941) popup_call2_audio_out_window_g_ParamLimits

0xf540,	// (0x0008a941) popup_call2_audio_out_window_g

0xc25e,	// (0x0008765f) popup_call2_audio_out_window_t1_ParamLimits

0xc25e,	// (0x0008765f) popup_call2_audio_out_window_t1

0xc2bd,	// (0x000876be) popup_call2_audio_out_window_t2_ParamLimits

0xc2bd,	// (0x000876be) popup_call2_audio_out_window_t2

0xc311,	// (0x00087712) popup_call2_audio_out_window_t3_ParamLimits

0xc311,	// (0x00087712) popup_call2_audio_out_window_t3

0xc327,	// (0x00087728) popup_call2_audio_out_window_t4_ParamLimits

0xc327,	// (0x00087728) popup_call2_audio_out_window_t4

0xc33d,	// (0x0008773e) popup_call2_audio_out_window_t5_ParamLimits

0xc33d,	// (0x0008773e) popup_call2_audio_out_window_t5

0x0005,

0xf549,	// (0x0008a94a) popup_call2_audio_out_window_t_ParamLimits

0xf549,	// (0x0008a94a) popup_call2_audio_out_window_t

0xc3a1,	// (0x000877a2) bg_popup_call2_in_pane_ParamLimits

0xc3a1,	// (0x000877a2) bg_popup_call2_in_pane

0xc3fd,	// (0x000877fe) popup_call2_audio_in_window_g1_ParamLimits

0xc3fd,	// (0x000877fe) popup_call2_audio_in_window_g1

0xc435,	// (0x00087836) popup_call2_audio_in_window_g2_ParamLimits

0xc435,	// (0x00087836) popup_call2_audio_in_window_g2

0xc46d,	// (0x0008786e) popup_call2_audio_in_window_g3_ParamLimits

0xc46d,	// (0x0008786e) popup_call2_audio_in_window_g3

0x0003,

0xf556,	// (0x0008a957) popup_call2_audio_in_window_g_ParamLimits

0xf556,	// (0x0008a957) popup_call2_audio_in_window_g

0xc4c5,	// (0x000878c6) popup_call2_audio_in_window_t1_ParamLimits

0xc4c5,	// (0x000878c6) popup_call2_audio_in_window_t1

0xc545,	// (0x00087946) popup_call2_audio_in_window_t2_ParamLimits

0xc545,	// (0x00087946) popup_call2_audio_in_window_t2

0xc5c5,	// (0x000879c6) popup_call2_audio_in_window_t3_ParamLimits

0xc5c5,	// (0x000879c6) popup_call2_audio_in_window_t3

0xc5df,	// (0x000879e0) popup_call2_audio_in_window_t4_ParamLimits

0xc5df,	// (0x000879e0) popup_call2_audio_in_window_t4

0xc5f1,	// (0x000879f2) popup_call2_audio_in_window_t5_ParamLimits

0xc5f1,	// (0x000879f2) popup_call2_audio_in_window_t5

0xc606,	// (0x00087a07) popup_call2_audio_in_window_t6_ParamLimits

0xc606,	// (0x00087a07) popup_call2_audio_in_window_t6

0x0005,

0xf55f,	// (0x0008a960) popup_call2_audio_in_window_t_ParamLimits

0xf55f,	// (0x0008a960) popup_call2_audio_in_window_t

0xa66c,	// (0x00085a6d) bg_popup_call2_in_pane_g1

0xc71d,	// (0x00087b1e) popup_cale_lunar_info_window_t4

0x0003,

0xf5c7,	// (0x0008a9c8) popup_cale_lunar_info_window_t

0xa674,	// (0x00085a75) bg_popup_call2_rect_pane_ParamLimits

0xa674,	// (0x00085a75) bg_popup_call2_rect_pane

0xa419,	// (0x0008581a) call2_cli_visual_graphic_pane

0xa419,	// (0x0008581a) call2_cli_visual_text_pane

0x54c6,	// (0x000808c7) smil_status_volume_pane_g3

0x0002,

0xa7fd,	// (0x00085bfe) call2_cli_visual_graphic_pane_g1

0xa7fd,	// (0x00085bfe) call2_cli_visual_graphic_pane_g2

0xa7fd,	// (0x00085bfe) call2_cli_visual_graphic_pane_g3

0x0002,

0xf56c,	// (0x0008a96d) call2_cli_visual_graphic_pane_g

0xc61b,	// (0x00087a1c) bg_popup_call2_rect_pane_g1

0xa89b,	// (0x00085c9c) bg_popup_call2_rect_pane_g2

0xc623,	// (0x00087a24) bg_popup_call2_rect_pane_g3

0xc62b,	// (0x00087a2c) bg_popup_call2_rect_pane_g4

0xc633,	// (0x00087a34) bg_popup_call2_rect_pane_g5

0xc63b,	// (0x00087a3c) bg_popup_call2_rect_pane_g6

0xc643,	// (0x00087a44) bg_popup_call2_rect_pane_g7

0xc64b,	// (0x00087a4c) bg_popup_call2_rect_pane_g8

0xc653,	// (0x00087a54) bg_popup_call2_rect_pane_g9

0x0008,

0xf573,	// (0x0008a974) bg_popup_call2_rect_pane_g

0xc65b,	// (0x00087a5c) bg_popup_call2_bubble_pane_g1

0xc663,	// (0x00087a64) bg_popup_call2_bubble_pane_g2

0xc66b,	// (0x00087a6c) bg_popup_call2_bubble_pane_g3

0xc673,	// (0x00087a74) bg_popup_call2_bubble_pane_g4

0xc67b,	// (0x00087a7c) bg_popup_call2_bubble_pane_g5

0xc683,	// (0x00087a84) bg_popup_call2_bubble_pane_g6

0xc68b,	// (0x00087a8c) bg_popup_call2_bubble_pane_g7

0xc693,	// (0x00087a94) bg_popup_call2_bubble_pane_g8

0xc69b,	// (0x00087a9c) bg_popup_call2_bubble_pane_g9

0x0008,

0xf586,	// (0x0008a987) bg_popup_call2_bubble_pane_g

0x27a5,	// (0x0007dba6) aid_cale_week_size_cell_pane

0x2e10,	// (0x0007e211) aid_cams_cif_uncrop_pane_ParamLimits

0x2e10,	// (0x0007e211) aid_cams_cif_uncrop_pane

0x2f6b,	// (0x0007e36c) aid_cams_size_cell_ParamLimits

0x2f6b,	// (0x0007e36c) aid_cams_size_cell

0x2f77,	// (0x0007e378) grid_cams_pane_ParamLimits

0x2f85,	// (0x0007e386) linegrid_cams_pane_ParamLimits

0x3074,	// (0x0007e475) call_video_pane_t1

0x3095,	// (0x0007e496) call_video_pane_t2

0x0001,

0xf273,	// (0x0008a674) call_video_pane_t

0x3604,	// (0x0007ea05) aid_cale_month_size_cell_pane_ParamLimits

0x3604,	// (0x0007ea05) aid_cale_month_size_cell_pane

0xf610,	// (0x0008aa11) smil_status_volume_pane_g

0x54d3,	// (0x000808d4) volume_smil_pane_ParamLimits

0x1f1e,	// (0x0007d31f) aid_popup2_width_pane

0x2699,	// (0x0007da9a) cell_qdial_pane_g4_ParamLimits

0x2699,	// (0x0007da9a) cell_qdial_pane_g4

0x4542,	// (0x0007f943) aid_blid_cardinal_pane_ParamLimits

0x4552,	// (0x0007f953) aid_blid_destination_pane_ParamLimits

0x4552,	// (0x0007f953) aid_blid_destination_pane

0xa674,	// (0x00085a75) bg_popup_call_poc_act_pane_ParamLimits

0xa674,	// (0x00085a75) bg_popup_call_poc_act_pane

0xa674,	// (0x00085a75) bg_popup_call_poc_inact_pane_ParamLimits

0xa674,	// (0x00085a75) bg_popup_call_poc_inact_pane

0xc6a3,	// (0x00087aa4) bg_popup_call_poc_act_pane_g1

0xc6ab,	// (0x00087aac) bg_popup_call_poc_act_pane_g2

0xc6b3,	// (0x00087ab4) bg_popup_call_poc_act_pane_g3

0xc673,	// (0x00087a74) bg_popup_call_poc_act_pane_g4

0xc67b,	// (0x00087a7c) bg_popup_call_poc_act_pane_g5

0xc6bb,	// (0x00087abc) bg_popup_call_poc_act_pane_g6

0xc68b,	// (0x00087a8c) bg_popup_call_poc_act_pane_g7

0xc6c3,	// (0x00087ac4) bg_popup_call_poc_act_pane_g8

0xa419,	// (0x0008581a) main_usb_pane

0x52c4,	// (0x000806c5) popup_cale_lunar_info_window

0x33b4,	// (0x0007e7b5) im_reading_pane_t1_ParamLimits

0xaa87,	// (0x00085e88) list_im_pane_ParamLimits

0xaa98,	// (0x00085e99) scroll_pane_cp07_ParamLimits

0xa419,	// (0x0008581a) grid_highlight_pane_cp012

0xa674,	// (0x00085a75) mup_scale_pane_ParamLimits

0xb268,	// (0x00086669) main_usb_pane_g1_ParamLimits

0xb268,	// (0x00086669) main_usb_pane_g1

0x5033,	// (0x00080434) main_usb_pane_g2_ParamLimits

0x5033,	// (0x00080434) main_usb_pane_g2

0x0001,

0xf5b0,	// (0x0008a9b1) main_usb_pane_g_ParamLimits

0xf5b0,	// (0x0008a9b1) main_usb_pane_g

0x503f,	// (0x00080440) main_usb_pane_t1_ParamLimits

0x503f,	// (0x00080440) main_usb_pane_t1

0x5051,	// (0x00080452) main_usb_pane_t2_ParamLimits

0x5051,	// (0x00080452) main_usb_pane_t2

0x5063,	// (0x00080464) main_usb_pane_t3_ParamLimits

0x5063,	// (0x00080464) main_usb_pane_t3

0x5075,	// (0x00080476) main_usb_pane_t4_ParamLimits

0x5075,	// (0x00080476) main_usb_pane_t4

0x5087,	// (0x00080488) main_usb_pane_t5_ParamLimits

0x5087,	// (0x00080488) main_usb_pane_t5

0x5099,	// (0x0008049a) main_usb_pane_t6_ParamLimits

0x5099,	// (0x0008049a) main_usb_pane_t6

0x0005,

0xf5b5,	// (0x0008a9b6) main_usb_pane_t_ParamLimits

0x44e8,	// (0x0007f8e9) aid_text_placing

0x44f4,	// (0x0007f8f5) main_location2_pane_t1_ParamLimits

0x4508,	// (0x0007f909) main_location2_pane_t2_ParamLimits

0x451c,	// (0x0007f91d) main_location2_pane_t3_ParamLimits

0x4530,	// (0x0007f931) main_location2_pane_t4_ParamLimits

0x4530,	// (0x0007f931) main_location2_pane_t4

0xf3d4,	// (0x0008a7d5) main_location2_pane_t_ParamLimits

0xa6b0,	// (0x00085ab1) find_pinb_pane_g2_ParamLimits

0xa6b0,	// (0x00085ab1) find_pinb_pane_g2

0x0001,

0xf122,	// (0x0008a523) find_pinb_pane_g_ParamLimits

0xf122,	// (0x0008a523) find_pinb_pane_g

0xa6bc,	// (0x00085abd) find_pinb_pane_t1_ParamLimits

0xa6ce,	// (0x00085acf) find_pinb_pane_t2_ParamLimits

0xf127,	// (0x0008a528) find_pinb_pane_t_ParamLimits

0xa419,	// (0x0008581a) main_call3_pane

0x3b78,	// (0x0007ef79) cale_month_day_heading_pane_t1_ParamLimits

0x3bfe,	// (0x0007efff) cale_month_day_heading_pane_t2_ParamLimits

0x3c8f,	// (0x0007f090) cale_month_day_heading_pane_t3_ParamLimits

0x3d20,	// (0x0007f121) cale_month_day_heading_pane_t4_ParamLimits

0x3db1,	// (0x0007f1b2) cale_month_day_heading_pane_t5_ParamLimits

0x3e42,	// (0x0007f243) cale_month_day_heading_pane_t6_ParamLimits

0x3edf,	// (0x0007f2e0) cale_month_day_heading_pane_t7_ParamLimits

0xf2ab,	// (0x0008a6ac) cale_month_day_heading_pane_t_ParamLimits

0xace2,	// (0x000860e3) smil_status_volume_pane

0x4bea,	// (0x0007ffeb) postcard_address_pane_ParamLimits

0x4bea,	// (0x0007ffeb) postcard_address_pane

0x4bf6,	// (0x0007fff7) postcard_message_pane_ParamLimits

0x4bf6,	// (0x0007fff7) postcard_message_pane

0x4ffa,	// (0x000803fb) call2_cli_visual_pane_t1_ParamLimits

0x4ffa,	// (0x000803fb) call2_cli_visual_pane_t1

0x5628,	// (0x00080a29) postcard_message_pane_t1_ParamLimits

0x5628,	// (0x00080a29) postcard_message_pane_t1

0x5611,	// (0x00080a12) postcard_address_pane_t1_ParamLimits

0x5611,	// (0x00080a12) postcard_address_pane_t1

0x5602,	// (0x00080a03) popup_call3_audio_in_window_ParamLimits

0x5602,	// (0x00080a03) popup_call3_audio_in_window

0x54e8,	// (0x000808e9) bg_popup_call3_in_pane_ParamLimits

0x54e8,	// (0x000808e9) bg_popup_call3_in_pane

0x5548,	// (0x00080949) popup_call3_audio_in_window_g1_ParamLimits

0x5548,	// (0x00080949) popup_call3_audio_in_window_g1

0x5560,	// (0x00080961) popup_call3_audio_in_window_g2_ParamLimits

0x5560,	// (0x00080961) popup_call3_audio_in_window_g2

0x5578,	// (0x00080979) popup_call3_audio_in_window_g3_ParamLimits

0x5578,	// (0x00080979) popup_call3_audio_in_window_g3

0x0003,

0xf617,	// (0x0008aa18) popup_call3_audio_in_window_g_ParamLimits

0xf617,	// (0x0008aa18) popup_call3_audio_in_window_g

0x55a0,	// (0x000809a1) popup_call3_audio_in_window_t1_ParamLimits

0x55a0,	// (0x000809a1) popup_call3_audio_in_window_t1

0x55c8,	// (0x000809c9) popup_call3_audio_in_window_t2_ParamLimits

0x55c8,	// (0x000809c9) popup_call3_audio_in_window_t2

0x55f0,	// (0x000809f1) popup_call3_audio_in_window_t3_ParamLimits

0x55f0,	// (0x000809f1) popup_call3_audio_in_window_t3

0x0002,

0xf620,	// (0x0008aa21) popup_call3_audio_in_window_t_ParamLimits

0xf620,	// (0x0008aa21) popup_call3_audio_in_window_t

0xb404,	// (0x00086805) bg_popup_call3_rect_pane

0xc61b,	// (0x00087a1c) bg_popup_call3_rect_pane_g1

0xa89b,	// (0x00085c9c) bg_popup_call3_rect_pane_g2

0xc623,	// (0x00087a24) bg_popup_call3_rect_pane_g3

0xc62b,	// (0x00087a2c) bg_popup_call3_rect_pane_g4

0xc633,	// (0x00087a34) bg_popup_call3_rect_pane_g5

0xc63b,	// (0x00087a3c) bg_popup_call3_rect_pane_g6

0xc643,	// (0x00087a44) bg_popup_call3_rect_pane_g7

0x4868,	// (0x0007fc69) mup_visualizer_osc_pane

0xb4cf,	// (0x000868d0) mup_visualizer_spec_pane

0x5508,	// (0x00080909) call3_video_qcif_pane_ParamLimits

0x5508,	// (0x00080909) call3_video_qcif_pane

0x5518,	// (0x00080919) call3_video_qcif_uncrop_pane_ParamLimits

0x5518,	// (0x00080919) call3_video_qcif_uncrop_pane

0x5526,	// (0x00080927) call3_video_subqcif_pane_ParamLimits

0x5526,	// (0x00080927) call3_video_subqcif_pane

0x5538,	// (0x00080939) call3_video_subqcif_uncrop_pane_ParamLimits

0x5538,	// (0x00080939) call3_video_subqcif_uncrop_pane

0x5590,	// (0x00080991) popup_call3_audio_in_window_g4_ParamLimits

0x5590,	// (0x00080991) popup_call3_audio_in_window_g4

0x54b3,	// (0x000808b4) mup_spec_half_pane

0x54bc,	// (0x000808bd) mup_spec_half_pane_cp

0xc880,	// (0x00087c81) mup_osc_middle_pane

0xc889,	// (0x00087c8a) mup_visualizer_osc_pane_g1

0x5494,	// (0x00080895) mup_spec_bar_pane_ParamLimits

0x5494,	// (0x00080895) mup_spec_bar_pane

0xc86d,	// (0x00087c6e) mup_spec_bar_pane_g1

0xc877,	// (0x00087c78) mup_spec_bar_pane_g2

0x0001,

0xf60b,	// (0x0008aa0c) mup_spec_bar_pane_g

0x27a5,	// (0x0007dba6) aid_cale_week_size_cell_pane_ParamLimits

0x27ba,	// (0x0007dbbb) bg_cale_heading_pane_ParamLimits

0xa8d8,	// (0x00085cd9) bg_cale_pane_cp01_ParamLimits

0x27dc,	// (0x0007dbdd) cale_week_corner_pane_ParamLimits

0x27f6,	// (0x0007dbf7) cale_week_day_heading_pane_ParamLimits

0x2818,	// (0x0007dc19) cale_week_scroll_pane_g1_ParamLimits

0x2835,	// (0x0007dc36) cale_week_scroll_pane_g2_ParamLimits

0x2848,	// (0x0007dc49) cale_week_scroll_pane_g3_ParamLimits

0x285b,	// (0x0007dc5c) cale_week_scroll_pane_g4_ParamLimits

0x286e,	// (0x0007dc6f) cale_week_scroll_pane_g5_ParamLimits

0x2881,	// (0x0007dc82) cale_week_scroll_pane_g6_ParamLimits

0x2894,	// (0x0007dc95) cale_week_scroll_pane_g7_ParamLimits

0x28a7,	// (0x0007dca8) cale_week_scroll_pane_g8_ParamLimits

0x28bc,	// (0x0007dcbd) cale_week_scroll_pane_g9_ParamLimits

0x28cf,	// (0x0007dcd0) cale_week_scroll_pane_g10_ParamLimits

0x28e2,	// (0x0007dce3) cale_week_scroll_pane_g11_ParamLimits

0x28f5,	// (0x0007dcf6) cale_week_scroll_pane_g12_ParamLimits

0x290c,	// (0x0007dd0d) cale_week_scroll_pane_g13_ParamLimits

0x2927,	// (0x0007dd28) cale_week_scroll_pane_g14_ParamLimits

0x2942,	// (0x0007dd43) cale_week_scroll_pane_g15_ParamLimits

0xf1b3,	// (0x0008a5b4) cale_week_scroll_pane_g_ParamLimits

0x295d,	// (0x0007dd5e) cale_week_time_pane_ParamLimits

0x2972,	// (0x0007dd73) grid_cale_week_pane_ParamLimits

0xa8f6,	// (0x00085cf7) listscroll_cale_week_pane_t1

0xa908,	// (0x00085d09) scroll_pane_cp08_ParamLimits

0x366d,	// (0x0007ea6e) cale_month_corner_pane_ParamLimits

0xacb8,	// (0x000860b9) cale_month_pane_t1

0x3b11,	// (0x0007ef12) cale_month_week_pane_ParamLimits

0xb268,	// (0x00086669) popup_call_status_window_g1_ParamLimits

0x432e,	// (0x0007f72f) popup_call_status_window_g2_ParamLimits

0x433a,	// (0x0007f73b) popup_call_status_window_g3_ParamLimits

0xf35b,	// (0x0008a75c) popup_call_status_window_g_ParamLimits

0xb064,	// (0x00086465) aid_call2_pane

0x0f92,	// (0x0007c393) msg_header_pane_g1

0x4bea,	// (0x0007ffeb) postcard_address2_pane_ParamLimits

0x4bea,	// (0x0007ffeb) postcard_address2_pane

0x4bf6,	// (0x0007fff7) postcard_message2_pane_ParamLimits

0x4bf6,	// (0x0007fff7) postcard_message2_pane

0x5426,	// (0x00080827) message2_row_pane_ParamLimits

0x5426,	// (0x00080827) message2_row_pane

0x5443,	// (0x00080844) address2_row_pane_ParamLimits

0x5443,	// (0x00080844) address2_row_pane

0xc83b,	// (0x00087c3c) postcard_message2_row_pane_g1

0xc843,	// (0x00087c44) postcard_message2_row_pane_t1

0xc83b,	// (0x00087c3c) address2_row_pane_g1

0xc843,	// (0x00087c44) address2_row_pane_t1

0x2cd2,	// (0x0007e0d3) aid_size_cell_vorec

0xa419,	// (0x0008581a) main_rss_pane

0x5456,	// (0x00080857) rss_list_single_pane_ParamLimits

0x5456,	// (0x00080857) rss_list_single_pane

0xc851,	// (0x00087c52) rss_list_single_pane_t1

0xc85f,	// (0x00087c60) rss_list_single_pane_t2

0x0001,

0xf606,	// (0x0008aa07) rss_list_single_pane_t

0xa419,	// (0x0008581a) main_camera2_pane

0xa419,	// (0x0008581a) main_video2_pane

0x568c,	// (0x00080a8d) cams_zoom_pane_cp2_ParamLimits

0x568c,	// (0x00080a8d) cams_zoom_pane_cp2

0x5698,	// (0x00080a99) image2_vga_pane_ParamLimits

0x5698,	// (0x00080a99) image2_vga_pane

0x56a7,	// (0x00080aa8) main_camera2_pane_g1_ParamLimits

0x56a7,	// (0x00080aa8) main_camera2_pane_g1

0x56b3,	// (0x00080ab4) main_camera2_pane_g2_ParamLimits

0x56b3,	// (0x00080ab4) main_camera2_pane_g2

0x56bf,	// (0x00080ac0) main_camera2_pane_g3_ParamLimits

0x56bf,	// (0x00080ac0) main_camera2_pane_g3

0x56cb,	// (0x00080acc) main_camera2_pane_g4_ParamLimits

0x56cb,	// (0x00080acc) main_camera2_pane_g4

0x56d7,	// (0x00080ad8) main_camera2_pane_g5_ParamLimits

0x56d7,	// (0x00080ad8) main_camera2_pane_g5

0x56e3,	// (0x00080ae4) main_camera2_pane_g6_ParamLimits

0x56e3,	// (0x00080ae4) main_camera2_pane_g6

0x56ef,	// (0x00080af0) main_camera2_pane_g7_ParamLimits

0x56ef,	// (0x00080af0) main_camera2_pane_g7

0x56fb,	// (0x00080afc) main_camera2_pane_g8_ParamLimits

0x56fb,	// (0x00080afc) main_camera2_pane_g8

0x0008,

0xf627,	// (0x0008aa28) main_camera2_pane_g_ParamLimits

0xf627,	// (0x0008aa28) main_camera2_pane_g

0x5713,	// (0x00080b14) main_camera2_pane_t1_ParamLimits

0x5713,	// (0x00080b14) main_camera2_pane_t1

0x5725,	// (0x00080b26) main_camera2_pane_t2_ParamLimits

0x5725,	// (0x00080b26) main_camera2_pane_t2

0x5737,	// (0x00080b38) main_camera2_pane_t3_ParamLimits

0x5737,	// (0x00080b38) main_camera2_pane_t3

0x5749,	// (0x00080b4a) main_camera2_pane_t4_ParamLimits

0x5749,	// (0x00080b4a) main_camera2_pane_t4

0x0006,

0xf63a,	// (0x0008aa3b) main_camera2_pane_t_ParamLimits

0xf63a,	// (0x0008aa3b) main_camera2_pane_t

0x57ab,	// (0x00080bac) cams_zoom_pane_cp4_ParamLimits

0x57ab,	// (0x00080bac) cams_zoom_pane_cp4

0x57bb,	// (0x00080bbc) image2_cif_pane_ParamLimits

0x57bb,	// (0x00080bbc) image2_cif_pane

0x57d0,	// (0x00080bd1) image2_subqcif_pane_ParamLimits

0x57d0,	// (0x00080bd1) image2_subqcif_pane

0x57df,	// (0x00080be0) main_video2_pane_g1_ParamLimits

0x57df,	// (0x00080be0) main_video2_pane_g1

0x57f1,	// (0x00080bf2) main_video2_pane_g2_ParamLimits

0x57f1,	// (0x00080bf2) main_video2_pane_g2

0x5801,	// (0x00080c02) main_video2_pane_g3_ParamLimits

0x5801,	// (0x00080c02) main_video2_pane_g3

0x5811,	// (0x00080c12) main_video2_pane_g4_ParamLimits

0x5811,	// (0x00080c12) main_video2_pane_g4

0x5821,	// (0x00080c22) main_video2_pane_g5_ParamLimits

0x5821,	// (0x00080c22) main_video2_pane_g5

0x5831,	// (0x00080c32) main_video2_pane_g6_ParamLimits

0x5831,	// (0x00080c32) main_video2_pane_g6

0x0005,

0xf649,	// (0x0008aa4a) main_video2_pane_g_ParamLimits

0xf649,	// (0x0008aa4a) main_video2_pane_g

0x5843,	// (0x00080c44) main_video2_pane_t1_ParamLimits

0x5843,	// (0x00080c44) main_video2_pane_t1

0x585d,	// (0x00080c5e) main_video2_pane_t2_ParamLimits

0x585d,	// (0x00080c5e) main_video2_pane_t2

0x5883,	// (0x00080c84) main_video2_pane_t3_ParamLimits

0x5883,	// (0x00080c84) main_video2_pane_t3

0x0002,

0xf656,	// (0x0008aa57) main_video2_pane_t_ParamLimits

0xf656,	// (0x0008aa57) main_video2_pane_t

0x5150,	// (0x00080551) call_muted_g2

0x0001,

0xf5f8,	// (0x0008a9f9) call_muted_g

0xa419,	// (0x0008581a) main_mup2_pane

0xc8c0,	// (0x00087cc1) main_mup2_pane_g1_ParamLimits

0xc8c0,	// (0x00087cc1) main_mup2_pane_g1

0x58a9,	// (0x00080caa) main_mup2_pane_g2_ParamLimits

0x58a9,	// (0x00080caa) main_mup2_pane_g2

0x5b2b,	// (0x00080f2c) main_mup_pane_g13_cp1

0x5b33,	// (0x00080f34) mup_volume_pane_cp1

0x58c9,	// (0x00080cca) main_mup2_pane_g4_ParamLimits

0x58c9,	// (0x00080cca) main_mup2_pane_g4

0x58de,	// (0x00080cdf) main_mup2_pane_g5_ParamLimits

0x58de,	// (0x00080cdf) main_mup2_pane_g5

0x58f3,	// (0x00080cf4) main_mup2_pane_g6_ParamLimits

0x58f3,	// (0x00080cf4) main_mup2_pane_g6

0x5908,	// (0x00080d09) main_mup2_pane_g7_ParamLimits

0x5908,	// (0x00080d09) main_mup2_pane_g7

0x0006,

0xf65d,	// (0x0008aa5e) main_mup2_pane_g_ParamLimits

0xf65d,	// (0x0008aa5e) main_mup2_pane_g

0x5924,	// (0x00080d25) main_mup2_pane_t1_ParamLimits

0x5924,	// (0x00080d25) main_mup2_pane_t1

0x593b,	// (0x00080d3c) main_mup2_pane_t2_ParamLimits

0x593b,	// (0x00080d3c) main_mup2_pane_t2

0x5952,	// (0x00080d53) main_mup2_pane_t3_ParamLimits

0x5952,	// (0x00080d53) main_mup2_pane_t3

0x5969,	// (0x00080d6a) main_mup2_pane_t4_ParamLimits

0x5969,	// (0x00080d6a) main_mup2_pane_t4

0x5983,	// (0x00080d84) main_mup2_pane_t5_ParamLimits

0x5983,	// (0x00080d84) main_mup2_pane_t5

0x599d,	// (0x00080d9e) main_mup2_pane_t6_ParamLimits

0x599d,	// (0x00080d9e) main_mup2_pane_t6

0x0005,

0xf66c,	// (0x0008aa6d) main_mup2_pane_t_ParamLimits

0xf66c,	// (0x0008aa6d) main_mup2_pane_t

0x59d5,	// (0x00080dd6) mup2_visualizer_pane_ParamLimits

0x59d5,	// (0x00080dd6) mup2_visualizer_pane

0x5a0b,	// (0x00080e0c) mup_progress_pane_cp_ParamLimits

0x5a0b,	// (0x00080e0c) mup_progress_pane_cp

0x5b16,	// (0x00080f17) mup_volume_pane_cp_ParamLimits

0x5b16,	// (0x00080f17) mup_volume_pane_cp

0x5a22,	// (0x00080e23) mup2_visualizer_pane_g1_ParamLimits

0x5a22,	// (0x00080e23) mup2_visualizer_pane_g1

0xc8cc,	// (0x00087ccd) mup2_visualizer_pane_g2_ParamLimits

0xc8cc,	// (0x00087ccd) mup2_visualizer_pane_g2

0x5a37,	// (0x00080e38) mup2_visualizer_pane_g3_ParamLimits

0x5a37,	// (0x00080e38) mup2_visualizer_pane_g3

0x0002,

0xf679,	// (0x0008aa7a) mup2_visualizer_pane_g_ParamLimits

0xf679,	// (0x0008aa7a) mup2_visualizer_pane_g

0xb6ed,	// (0x00086aee) aid_size_cell_fmradio

0x5266,	// (0x00080667) aid_height_parent_landcape

0xab16,	// (0x00085f17) wml_content_pane_cp

0xab1e,	// (0x00085f1f) wml_tabs_pane

0xab27,	// (0x00085f28) popup_wml_miniature_window

0xab2f,	// (0x00085f30) scroll_pane_cp021

0xab43,	// (0x00085f44) wml_content_pane_comp8

0xa419,	// (0x0008581a) bg_popup_sub_pane_cp05

0xc8ea,	// (0x00087ceb) popup_wml_miniature_window_g1

0xc8f2,	// (0x00087cf3) wml_miniature_view_pane

0x5a45,	// (0x00080e46) aid_size_wml_view

0x5a4d,	// (0x00080e4e) wml_miniature_view_pane_g1

0x5a56,	// (0x00080e57) wml_miniature_view_pane_g2

0x5a5f,	// (0x00080e60) wml_miniature_view_pane_g3

0x5a67,	// (0x00080e68) wml_miniature_view_pane_g4

0x5a6f,	// (0x00080e70) wml_miniature_view_pane_g5

0x5a77,	// (0x00080e78) wml_miniature_view_pane_g6

0x5a7f,	// (0x00080e80) wml_miniature_view_pane_g7

0x5a87,	// (0x00080e88) wml_miniature_view_pane_g8

0x0007,

0xf680,	// (0x0008aa81) wml_miniature_view_pane_g

0xc8c0,	// (0x00087cc1) background_graphic_ParamLimits

0xc8c0,	// (0x00087cc1) background_graphic

0xc8fa,	// (0x00087cfb) wml_tabs_2_pane

0xc903,	// (0x00087d04) wml_tabs_3_pane_ParamLimits

0xc903,	// (0x00087d04) wml_tabs_3_pane

0xc915,	// (0x00087d16) wml_tabs_4_pane_ParamLimits

0xc915,	// (0x00087d16) wml_tabs_4_pane

0xc92b,	// (0x00087d2c) wml_tabs_5_pane_ParamLimits

0xc92b,	// (0x00087d2c) wml_tabs_5_pane

0xc945,	// (0x00087d46) wml_tabs_pane_g2_ParamLimits

0xc945,	// (0x00087d46) wml_tabs_pane_g2

0xc959,	// (0x00087d5a) wml_tabs_pane_g3_ParamLimits

0xc959,	// (0x00087d5a) wml_tabs_pane_g3

0x5a8f,	// (0x00080e90) wml_tabs_2_active_pane_ParamLimits

0x5a8f,	// (0x00080e90) wml_tabs_2_active_pane

0x5a9f,	// (0x00080ea0) wml_tabs_2_passive_pane_ParamLimits

0x5a9f,	// (0x00080ea0) wml_tabs_2_passive_pane

0x5aaf,	// (0x00080eb0) wml_tabs_3_active_pane_cp_ParamLimits

0x5aaf,	// (0x00080eb0) wml_tabs_3_active_pane_cp

0x5ac0,	// (0x00080ec1) wml_tabs_3_passive_pane_ParamLimits

0x5ac0,	// (0x00080ec1) wml_tabs_3_passive_pane

0x5ad1,	// (0x00080ed2) wml_tabs_3_passive_pane_cp_ParamLimits

0x5ad1,	// (0x00080ed2) wml_tabs_3_passive_pane_cp

0x5ae2,	// (0x00080ee3) tabs_4_active_pane

0x5aea,	// (0x00080eeb) tabs_4_passive_pane

0x5af2,	// (0x00080ef3) tabs_4_passive_pane_cp

0x5afa,	// (0x00080efb) tabs_4_passive_pane_cp2

0x502b,	// (0x0008042c) aid_height_text

0x4831,	// (0x0007fc32) mup_volume_cont_pane_ParamLimits

0x4831,	// (0x0007fc32) mup_volume_cont_pane

0x22f0,	// (0x0007d6f1) aid_size_cell_pinb

0x22fa,	// (0x0007d6fb) aid_size_list_pinb

0x59f4,	// (0x00080df5) mup2_volume_cont_pane_ParamLimits

0x59f4,	// (0x00080df5) mup2_volume_cont_pane

0x5b02,	// (0x00080f03) mup2_volume_cont_pane_g1_ParamLimits

0x5b02,	// (0x00080f03) mup2_volume_cont_pane_g1

0x1f2a,	// (0x0007d32b) aid_size_cell_touch_ParamLimits

0x1f2a,	// (0x0007d32b) aid_size_cell_touch

0x21d3,	// (0x0007d5d4) touch_pane_ParamLimits

0x21d3,	// (0x0007d5d4) touch_pane

0x9ffc,	// (0x000853fd) main_rss2_pane

0xc976,	// (0x00087d77) listscroll_rss2_pane

0xc97f,	// (0x00087d80) rss2_navigation_pane

0xc987,	// (0x00087d88) list_rss2_pane

0xb1b3,	// (0x000865b4) scroll_pane_cp22

0xc98f,	// (0x00087d90) rss2_navigation_pane_g1

0xc998,	// (0x00087d99) rss2_navigation_pane_g2

0xc9a0,	// (0x00087da1) rss2_navigation_pane_g3

0x0002,

0xf691,	// (0x0008aa92) rss2_navigation_pane_g

0xc9a8,	// (0x00087da9) rss2_navigation_pane_t1

0x5b3b,	// (0x00080f3c) rss2_list_single_pane_ParamLimits

0x5b3b,	// (0x00080f3c) rss2_list_single_pane

0xc9b6,	// (0x00087db7) rss2_list_single_pane_t2

0xc9c4,	// (0x00087dc5) rss2_list_single_pane_t3_ParamLimits

0xc9c4,	// (0x00087dc5) rss2_list_single_pane_t3

0xc9e1,	// (0x00087de2) rss2_list_single_pane_t4

0x418f,	// (0x0007f590) smil_status_pane_g1

0xa99d,	// (0x00085d9e) main_image2_pane_ParamLimits

0xa99d,	// (0x00085d9e) main_image2_pane

0x5707,	// (0x00080b08) main_camera2_pane_g9_ParamLimits

0x5707,	// (0x00080b08) main_camera2_pane_g9

0x575b,	// (0x00080b5c) main_camera2_pane_t5_ParamLimits

0x575b,	// (0x00080b5c) main_camera2_pane_t5

0x576d,	// (0x00080b6e) main_camera2_pane_t6_ParamLimits

0x576d,	// (0x00080b6e) main_camera2_pane_t6

0x5b73,	// (0x00080f74) main_image2_pane_g1_ParamLimits

0x5b73,	// (0x00080f74) main_image2_pane_g1

0x4dc7,	// (0x000801c8) smil2_video_pane_ParamLimits

0x4dc7,	// (0x000801c8) smil2_video_pane

0x0d0b,	// (0x0007c10c) aid_zoom_text_primary_cp

0x217c,	// (0x0007d57d) popup_preview_fixed_window

0xaa7f,	// (0x00085e80) im_reading_pane_g1

0x5651,	// (0x00080a52) cams2_bc_adjust_pane_cp_ParamLimits

0x5651,	// (0x00080a52) cams2_bc_adjust_pane_cp

0x579d,	// (0x00080b9e) cams2_bc_adjust_pane_ParamLimits

0x579d,	// (0x00080b9e) cams2_bc_adjust_pane

0x5b7f,	// (0x00080f80) cams2_bc_adjust_pane_g1

0x5b87,	// (0x00080f88) cams2_slider_pane

0x5b90,	// (0x00080f91) cams2_slider_pane_g1

0x5b99,	// (0x00080f9a) cams2_slider_pane_g2

0x0006,

0xf698,	// (0x0008aa99) cams2_slider_pane_g

0x23ea,	// (0x0007d7eb) calc_display_pane_ParamLimits

0x2408,	// (0x0007d809) calc_paper_pane_ParamLimits

0x2424,	// (0x0007d825) grid_calc_pane_ParamLimits

0x439c,	// (0x0007f79d) popup_clock_digital_window_t1_ParamLimits

0xb68a,	// (0x00086a8b) main_image_pane_t1

0x23d0,	// (0x0007d7d1) aid_size_cell_calc_ParamLimits

0x23d0,	// (0x0007d7d1) aid_size_cell_calc

0x52a0,	// (0x000806a1) popup_blid_sat_info2_window_ParamLimits

0x52a0,	// (0x000806a1) popup_blid_sat_info2_window

0xc9f7,	// (0x00087df8) aid_size_cell_blid

0xc9ff,	// (0x00087e00) bg_popup_window_pane_cp07

0xca22,	// (0x00087e23) grid_popup_blid_pane

0xca2c,	// (0x00087e2d) heading_pane_cp05_ParamLimits

0xca2c,	// (0x00087e2d) heading_pane_cp05

0xcaf6,	// (0x00087ef7) cell_popup_blid_pane_ParamLimits

0xcaf6,	// (0x00087ef7) cell_popup_blid_pane

0xcb1c,	// (0x00087f1d) cell_popup_blid_pane_g1

0xcb24,	// (0x00087f25) cell_popup_blid_pane_t1

0x59ba,	// (0x00080dbb) mup2_indicator_pane_ParamLimits

0x59ba,	// (0x00080dbb) mup2_indicator_pane

0xb404,	// (0x00086805) mup2_visualizer_osc_pane

0xc8d8,	// (0x00087cd9) mup2_visualizer_spec_pane_ParamLimits

0xc8d8,	// (0x00087cd9) mup2_visualizer_spec_pane

0x5bb3,	// (0x00080fb4) mup2_spec_half_pane

0x5bbc,	// (0x00080fbd) mup2_spec_half_pane_cp

0x5bc6,	// (0x00080fc7) mup2_spec_bar_pane_ParamLimits

0x5bc6,	// (0x00080fc7) mup2_spec_bar_pane

0xc86d,	// (0x00087c6e) mup2_spec_bar_pane_g1

0xc877,	// (0x00087c78) mup2_spec_bar_pane_g2

0x0001,

0xf60b,	// (0x0008aa0c) mup2_spec_bar_pane_g

0x5be5,	// (0x00080fe6) mup2_osc_middle_pane

0xc889,	// (0x00087c8a) mup2_visualizer_osc_pane_g1

0xa026,	// (0x00085427) popup_number_entry_window_t1_ParamLimits

0xa039,	// (0x0008543a) popup_number_entry_window_t2_ParamLimits

0xa04b,	// (0x0008544c) popup_number_entry_window_t3_ParamLimits

0x222a,	// (0x0007d62b) popup_number_entry_window_t5_ParamLimits

0x222a,	// (0x0007d62b) popup_number_entry_window_t5

0xf0cd,	// (0x0008a4ce) popup_number_entry_window_t_ParamLimits

0xa05d,	// (0x0008545e) text_title_cp2_ParamLimits

0x4ab2,	// (0x0007feb3) aid_hotspot_pointer_text2_pane

0x4b4c,	// (0x0007ff4d) main_viewer_pane_g9_ParamLimits

0x4b4c,	// (0x0007ff4d) main_viewer_pane_g9

0xacb8,	// (0x000860b9) cale_month_pane_t1_ParamLimits

0xacf5,	// (0x000860f6) bg_cale_pane_ParamLimits

0xad0d,	// (0x0008610e) list_cale_pane_ParamLimits

0xad1e,	// (0x0008611f) listscroll_cale_day_pane_t1

0xad30,	// (0x00086131) scroll_pane_cp09_ParamLimits

0x4870,	// (0x0007fc71) main_mup_eq_pane_t1_ParamLimits

0x4870,	// (0x0007fc71) main_mup_eq_pane_t1

0x488a,	// (0x0007fc8b) main_mup_eq_pane_t2_ParamLimits

0x488a,	// (0x0007fc8b) main_mup_eq_pane_t2

0x48a2,	// (0x0007fca3) main_mup_eq_pane_t3_ParamLimits

0x48a2,	// (0x0007fca3) main_mup_eq_pane_t3

0x48ba,	// (0x0007fcbb) main_mup_eq_pane_t4_ParamLimits

0x48ba,	// (0x0007fcbb) main_mup_eq_pane_t4

0x48d2,	// (0x0007fcd3) main_mup_eq_pane_t5_ParamLimits

0x48d2,	// (0x0007fcd3) main_mup_eq_pane_t5

0x48ea,	// (0x0007fceb) main_mup_eq_pane_t6_ParamLimits

0x48ea,	// (0x0007fceb) main_mup_eq_pane_t6

0x48fe,	// (0x0007fcff) main_mup_eq_pane_t7_ParamLimits

0x48fe,	// (0x0007fcff) main_mup_eq_pane_t7

0x4912,	// (0x0007fd13) main_mup_eq_pane_t8_ParamLimits

0x4912,	// (0x0007fd13) main_mup_eq_pane_t8

0x4928,	// (0x0007fd29) main_mup_eq_pane_t9_ParamLimits

0x4928,	// (0x0007fd29) main_mup_eq_pane_t9

0x4940,	// (0x0007fd41) main_mup_eq_pane_t10_ParamLimits

0x4940,	// (0x0007fd41) main_mup_eq_pane_t10

0x0009,

0xf45a,	// (0x0008a85b) main_mup_eq_pane_t_ParamLimits

0xf45a,	// (0x0008a85b) main_mup_eq_pane_t

0x49fd,	// (0x0007fdfe) mup_equalizer_pane_cp5_ParamLimits

0x4a13,	// (0x0007fe14) mup_equalizer_pane_cp6_ParamLimits

0x4a2b,	// (0x0007fe2c) mup_equalizer_pane_cp7_ParamLimits

0x9ffc,	// (0x000853fd) main_gallery_pane

0xc892,	// (0x00087c93) smil2_volume_pane

0xc89a,	// (0x00087c9b) smil_status_volume_pane_g1_ParamLimits

0xc8ad,	// (0x00087cae) smil_status_volume_pane_g2_ParamLimits

0x54c6,	// (0x000808c7) smil_status_volume_pane_g3_ParamLimits

0xf610,	// (0x0008aa11) smil_status_volume_pane_g_ParamLimits

0xc9ff,	// (0x00087e00) bg_popup_window_pane_cp07_ParamLimits

0xca0d,	// (0x00087e0e) blid_firmament_pane

0x5bee,	// (0x00080fef) aid_size_cell_gallery_ParamLimits

0x5bee,	// (0x00080fef) aid_size_cell_gallery

0x5bfc,	// (0x00080ffd) grid_gallery_pane_ParamLimits

0x5bfc,	// (0x00080ffd) grid_gallery_pane

0x5c0c,	// (0x0008100d) cell_gallery_pane_ParamLimits

0x5c0c,	// (0x0008100d) cell_gallery_pane

0xcb32,	// (0x00087f33) bg_cell_gallery_focus_pane_ParamLimits

0xcb32,	// (0x00087f33) bg_cell_gallery_focus_pane

0xcb44,	// (0x00087f45) cell_gallery_pane_g1_ParamLimits

0xcb44,	// (0x00087f45) cell_gallery_pane_g1

0x5c5a,	// (0x0008105b) cell_gallery_pane_g2_ParamLimits

0x5c5a,	// (0x0008105b) cell_gallery_pane_g2

0x5c67,	// (0x00081068) cell_gallery_pane_g3_ParamLimits

0x5c67,	// (0x00081068) cell_gallery_pane_g3

0xcb50,	// (0x00087f51) cell_gallery_pane_g4_ParamLimits

0xcb50,	// (0x00087f51) cell_gallery_pane_g4

0x0003,

0xf6be,	// (0x0008aabf) cell_gallery_pane_g_ParamLimits

0xf6be,	// (0x0008aabf) cell_gallery_pane_g

0xcb5c,	// (0x00087f5d) bg_cell_gallery_focus_pane_g1

0xcb64,	// (0x00087f65) bg_cell_gallery_focus_pane_g2

0xcb6c,	// (0x00087f6d) bg_cell_gallery_focus_pane_g3

0xcb74,	// (0x00087f75) bg_cell_gallery_focus_pane_g4

0xcb7c,	// (0x00087f7d) bg_cell_gallery_focus_pane_g5

0xcb84,	// (0x00087f85) bg_cell_gallery_focus_pane_g6

0xcb8c,	// (0x00087f8d) bg_cell_gallery_focus_pane_g7

0xcb94,	// (0x00087f95) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c7,	// (0x0008aac8) bg_cell_gallery_focus_pane_g

0xcb9c,	// (0x00087f9d) aid_firma_cardinal

0xcbb0,	// (0x00087fb1) blid_firmament_pane_t1

0xcbc7,	// (0x00087fc8) blid_firmament_pane_t2

0xcbde,	// (0x00087fdf) blid_firmament_pane_t3

0xcbf5,	// (0x00087ff6) blid_firmament_pane_t4

0x0003,

0xf6d8,	// (0x0008aad9) blid_firmament_pane_t

0xcc0c,	// (0x0008800d) blid_sat_info_pane

0xcc1c,	// (0x0008801d) blid_sat_info_pane_g1

0xcc1c,	// (0x0008801d) blid_sat_info_pane_g2

0x0001,

0xf6e1,	// (0x0008aae2) blid_sat_info_pane_g

0xcc26,	// (0x00088027) blid_sat_info_pane_t1

0xcc34,	// (0x00088035) smil2_volume_content_pane

0xcc3d,	// (0x0008803e) smil2_volume_pane_g1

0xa829,	// (0x00085c2a) smil2_volume_content_pane_g1

0xcc45,	// (0x00088046) smil2_volume_content_pane_g2

0xcc5a,	// (0x0008805b) smil2_volume_content_pane_g3

0xcc63,	// (0x00088064) smil2_volume_content_pane_g4

0xcc6c,	// (0x0008806d) smil2_volume_content_pane_g5

0xcc75,	// (0x00088076) smil2_volume_content_pane_g6

0xcc7e,	// (0x0008807f) smil2_volume_content_pane_g7

0xcc87,	// (0x00088088) smil2_volume_content_pane_g8

0xcc90,	// (0x00088091) smil2_volume_content_pane_g9

0xcc99,	// (0x0008809a) smil2_volume_content_pane_g10

0x0009,

0xf6e6,	// (0x0008aae7) smil2_volume_content_pane_g

0x29f7,	// (0x0007ddf8) cale_week_day_heading_pane_t1_ParamLimits

0x2a32,	// (0x0007de33) cale_week_day_heading_pane_t2_ParamLimits

0x2a6d,	// (0x0007de6e) cale_week_day_heading_pane_t3_ParamLimits

0x2aa8,	// (0x0007dea9) cale_week_day_heading_pane_t4_ParamLimits

0x2ae3,	// (0x0007dee4) cale_week_day_heading_pane_t5_ParamLimits

0x2b1e,	// (0x0007df1f) cale_week_day_heading_pane_t6_ParamLimits

0x2b59,	// (0x0007df5a) cale_week_day_heading_pane_t7_ParamLimits

0xf1d2,	// (0x0008a5d3) cale_week_day_heading_pane_t_ParamLimits

0xa925,	// (0x00085d26) bg_cale_side_pane_ParamLimits

0x2b94,	// (0x0007df95) cale_week_time_pane_t1_ParamLimits

0x2bae,	// (0x0007dfaf) cale_week_time_pane_t2_ParamLimits

0x2bc8,	// (0x0007dfc9) cale_week_time_pane_t3_ParamLimits

0x2be2,	// (0x0007dfe3) cale_week_time_pane_t4_ParamLimits

0x2bfc,	// (0x0007dffd) cale_week_time_pane_t5_ParamLimits

0x2c18,	// (0x0007e019) cale_week_time_pane_t6_ParamLimits

0x2c3a,	// (0x0007e03b) cale_week_time_pane_t7_ParamLimits

0x2c5e,	// (0x0007e05f) cale_week_time_pane_t8_ParamLimits

0xf1e1,	// (0x0008a5e2) cale_week_time_pane_t_ParamLimits

0x2c84,	// (0x0007e085) cell_cale_week_pane_g2_ParamLimits

0xa925,	// (0x00085d26) bg_cale_side_pane_cp01_ParamLimits

0x3f88,	// (0x0007f389) cale_month_week_pane_t1_ParamLimits

0x3fa1,	// (0x0007f3a2) cale_month_week_pane_t2_ParamLimits

0x3fba,	// (0x0007f3bb) cale_month_week_pane_t3_ParamLimits

0x3fd3,	// (0x0007f3d4) cale_month_week_pane_t4_ParamLimits

0x3ff0,	// (0x0007f3f1) cale_month_week_pane_t5_ParamLimits

0x4011,	// (0x0007f412) cale_month_week_pane_t6_ParamLimits

0xf2ba,	// (0x0008a6bb) cale_month_week_pane_t_ParamLimits

0x4158,	// (0x0007f559) cell_cale_month_pane_g1_ParamLimits

0x9ffc,	// (0x000853fd) main_cale_event_viewer_pane

0x9ffc,	// (0x000853fd) listscroll_cale_event_viewer_pane

0xcca2,	// (0x000880a3) list_cale_ev_pane

0xccaa,	// (0x000880ab) scroll_pane_cp023

0xccb6,	// (0x000880b7) field_cale_ev_pane_ParamLimits

0xccb6,	// (0x000880b7) field_cale_ev_pane

0xccd2,	// (0x000880d3) field_cale_ev_content_pane_ParamLimits

0xccd2,	// (0x000880d3) field_cale_ev_content_pane

0xccde,	// (0x000880df) field_cale_ev_pane_g1_ParamLimits

0xccde,	// (0x000880df) field_cale_ev_pane_g1

0xccea,	// (0x000880eb) field_cale_ev_pane_g2_ParamLimits

0xccea,	// (0x000880eb) field_cale_ev_pane_g2

0xcd02,	// (0x00088103) field_cale_ev_pane_g3_ParamLimits

0xcd02,	// (0x00088103) field_cale_ev_pane_g3

0x0002,

0xf6fb,	// (0x0008aafc) field_cale_ev_pane_g_ParamLimits

0xf6fb,	// (0x0008aafc) field_cale_ev_pane_g

0xcd1a,	// (0x0008811b) field_cale_ev_pane_t1_ParamLimits

0xcd1a,	// (0x0008811b) field_cale_ev_pane_t1

0xcd31,	// (0x00088132) field_cale_ev_content_pane_t1_ParamLimits

0xcd31,	// (0x00088132) field_cale_ev_content_pane_t1

0x4a99,	// (0x0007fe9a) bg_button_pane_cp01

0x2795,	// (0x0007db96) listscroll_cale_week_pane_ParamLimits

0xa8cf,	// (0x00085cd0) popup_toolbar_window_cp01

0xa8f6,	// (0x00085cf7) listscroll_cale_week_pane_t1_ParamLimits

0x2795,	// (0x0007db96) listscroll_cale_day_pane_ParamLimits

0xa8cf,	// (0x00085cd0) popup_toolbar_window_cp02

0xad1e,	// (0x0008611f) listscroll_cale_day_pane_t1_ParamLimits

0x2795,	// (0x0007db96) main_cale_month_pane_ParamLimits

0x539d,	// (0x0008079e) popup_toolbar_window_cp03_ParamLimits

0x539d,	// (0x0008079e) popup_toolbar_window_cp03

0x4cd9,	// (0x000800da) main_image_pane_g2_ParamLimits

0x4cd9,	// (0x000800da) main_image_pane_g2

0x4ce5,	// (0x000800e6) main_image_pane_g3_ParamLimits

0x4ce5,	// (0x000800e6) main_image_pane_g3

0x0002,

0xf4ec,	// (0x0008a8ed) main_image_pane_g_ParamLimits

0xf4ec,	// (0x0008a8ed) main_image_pane_g

0xb68a,	// (0x00086a8b) main_image_pane_t1_ParamLimits

0x4cf1,	// (0x000800f2) main_image_pane_t2_ParamLimits

0x4cf1,	// (0x000800f2) main_image_pane_t2

0x4d03,	// (0x00080104) main_image_pane_t3_ParamLimits

0x4d03,	// (0x00080104) main_image_pane_t3

0x4d15,	// (0x00080116) main_image_pane_t4_ParamLimits

0x4d15,	// (0x00080116) main_image_pane_t4

0x0003,

0xf4f3,	// (0x0008a8f4) main_image_pane_t_ParamLimits

0xf4f3,	// (0x0008a8f4) main_image_pane_t

0x4d27,	// (0x00080128) popup_image_details_window_cp01

0x4d31,	// (0x00080132) popup_toobar_trans_pane_cp01_ParamLimits

0x4d31,	// (0x00080132) popup_toobar_trans_pane_cp01

0x52f3,	// (0x000806f4) popup_image_details_window_ParamLimits

0x52f3,	// (0x000806f4) popup_image_details_window

0x5301,	// (0x00080702) popup_image_focus_window

0x5643,	// (0x00080a44) camera2_autofocus_pane_ParamLimits

0x5643,	// (0x00080a44) camera2_autofocus_pane

0x9ffc,	// (0x000853fd) bg_popup_sub_pane_cp06

0xcd4e,	// (0x0008814f) popup_image_focus_window_g1

0xcd56,	// (0x00088157) popup_image_focus_window_g2

0xcd5e,	// (0x0008815f) popup_image_focus_window_g3

0xcd66,	// (0x00088167) popup_image_focus_window_g4

0x0003,

0xf702,	// (0x0008ab03) popup_image_focus_window_g

0xcd6e,	// (0x0008816f) popup_image_focus_window_t1

0xcd7c,	// (0x0008817d) popup_image_focus_window_t2

0xcd8c,	// (0x0008818d) popup_image_focus_window_t3

0x0002,

0xf70b,	// (0x0008ab0c) popup_image_focus_window_t

0xcd9a,	// (0x0008819b) camera2_autofocus_pane_g1

0xa99d,	// (0x00085d9e) bg_tb_trans_pane_cp01

0xcda8,	// (0x000881a9) popup_image_details_window_g1

0xcdbb,	// (0x000881bc) popup_image_details_window_g2

0x0002,

0xf71d,	// (0x0008ab1e) popup_image_details_window_g

0xcde4,	// (0x000881e5) popup_image_details_window_t1

0xcdf6,	// (0x000881f7) popup_image_details_window_t2

0xce0f,	// (0x00088210) popup_image_details_window_t3

0xce23,	// (0x00088224) popup_image_details_window_t4

0xce3e,	// (0x0008823f) popup_image_details_window_t5

0x0004,

0xf724,	// (0x0008ab25) popup_image_details_window_t

0xa744,	// (0x00085b45) bg_calc_paper_pane_ParamLimits

0x9ffc,	// (0x000853fd) grid_highlight_pane_cp013

0x2521,	// (0x0007d922) list_calc_pane_ParamLimits

0x2533,	// (0x0007d934) scroll_pane_cp024

0xa758,	// (0x00085b59) bg_calc_display_pane_ParamLimits

0x253b,	// (0x0007d93c) calc_display_pane_t1_ParamLimits

0x2550,	// (0x0007d951) calc_display_pane_t2_ParamLimits

0x2565,	// (0x0007d966) calc_display_pane_t3_ParamLimits

0xf154,	// (0x0008a555) calc_display_pane_t_ParamLimits

0x2646,	// (0x0007da47) cell_calc_pane_g2

0x0001,

0xf171,	// (0x0008a572) cell_calc_pane_g

0x264f,	// (0x0007da50) cell_calc_pane_t1

0xa807,	// (0x00085c08) grid_highlight_pane_cp02_ParamLimits

0xa81d,	// (0x00085c1e) toolbar_button_pane_cp01_ParamLimits

0xa81d,	// (0x00085c1e) toolbar_button_pane_cp01

0xb6cf,	// (0x00086ad0) temp_image_control_pane_ParamLimits

0xb6cf,	// (0x00086ad0) temp_image_control_pane

0xa99d,	// (0x00085d9e) main_mp3_pane

0xce58,	// (0x00088259) temp_image_control_pane_g1_ParamLimits

0xce58,	// (0x00088259) temp_image_control_pane_g1

0xce66,	// (0x00088267) temp_image_control_pane_g2_ParamLimits

0xce66,	// (0x00088267) temp_image_control_pane_g2

0xce78,	// (0x00088279) temp_image_control_pane_g3_ParamLimits

0xce78,	// (0x00088279) temp_image_control_pane_g3

0x5ca4,	// (0x000810a5) temp_image_control_pane_g4_ParamLimits

0x5ca4,	// (0x000810a5) temp_image_control_pane_g4

0x0003,

0xf72f,	// (0x0008ab30) temp_image_control_pane_g_ParamLimits

0xf72f,	// (0x0008ab30) temp_image_control_pane_g

0xce58,	// (0x00088259) main_mp3_pane_g1

0x5cb5,	// (0x000810b6) main_mp3_pane_g2

0x0007,

0xf738,	// (0x0008ab39) main_mp3_pane_g

0xcebb,	// (0x000882bc) main_mp3_pane_t1

0xa977,	// (0x00085d78) main_camera_pane_g8_ParamLimits

0xa977,	// (0x00085d78) main_camera_pane_g8

0x2f21,	// (0x0007e322) main_video_pane_g7_ParamLimits

0x2f21,	// (0x0007e322) main_video_pane_g7

0x578b,	// (0x00080b8c) main_camera2_pane_t7_ParamLimits

0x578b,	// (0x00080b8c) main_camera2_pane_t7

0xaad6,	// (0x00085ed7) scroll_pane_cp025_ParamLimits

0xaad6,	// (0x00085ed7) scroll_pane_cp025

0xaaea,	// (0x00085eeb) scroll_pane_cp026_ParamLimits

0xaaea,	// (0x00085eeb) scroll_pane_cp026

0xaaf9,	// (0x00085efa) wml_content_pane_ParamLimits

0x9ffc,	// (0x000853fd) main_touch_calib_pane

0x5d59,	// (0x0008115a) main_touch_calib_pane_g1

0x5d65,	// (0x00081166) main_touch_calib_pane_g2

0x5d71,	// (0x00081172) main_touch_calib_pane_g3

0x5d7d,	// (0x0008117e) main_touch_calib_pane_g4

0x0003,

0xf756,	// (0x0008ab57) main_touch_calib_pane_g

0x5d89,	// (0x0008118a) main_touch_calib_pane_t1

0x5da2,	// (0x000811a3) main_touch_calib_pane_t2

0x0004,

0xf75f,	// (0x0008ab60) main_touch_calib_pane_t

0xb29f,	// (0x000866a0) mup_progress_pane_cp02

0xb2d4,	// (0x000866d5) navi_pane_g1

0xb38f,	// (0x00086790) navi_pane_mp_t3

0xa99d,	// (0x00085d9e) main_mp3_pane_ParamLimits

0x53da,	// (0x000807db) navi_pane_ParamLimits

0xce58,	// (0x00088259) main_mp3_pane_g1_ParamLimits

0x5cb5,	// (0x000810b6) main_mp3_pane_g2_ParamLimits

0x5cc1,	// (0x000810c2) main_mp3_pane_g3_ParamLimits

0x5cc1,	// (0x000810c2) main_mp3_pane_g3

0x5ccd,	// (0x000810ce) main_mp3_pane_g4_ParamLimits

0x5ccd,	// (0x000810ce) main_mp3_pane_g4

0xce88,	// (0x00088289) main_mp3_pane_g5_ParamLimits

0xce88,	// (0x00088289) main_mp3_pane_g5

0xce96,	// (0x00088297) main_mp3_pane_g6_ParamLimits

0xce96,	// (0x00088297) main_mp3_pane_g6

0xcea3,	// (0x000882a4) main_mp3_pane_g7_ParamLimits

0xcea3,	// (0x000882a4) main_mp3_pane_g7

0xceaf,	// (0x000882b0) main_mp3_pane_g8_ParamLimits

0xceaf,	// (0x000882b0) main_mp3_pane_g8

0xf738,	// (0x0008ab39) main_mp3_pane_g_ParamLimits

0x5cd9,	// (0x000810da) main_mp3_pane_t2

0x5ce9,	// (0x000810ea) main_mp3_pane_t3

0xcec9,	// (0x000882ca) main_mp3_pane_t4

0xced7,	// (0x000882d8) main_mp3_pane_t5

0x0005,

0xf749,	// (0x0008ab4a) main_mp3_pane_t

0xcee5,	// (0x000882e6) mup_progress_pane_cp01

0x0d0b,	// (0x0007c10c) aid_zoom_text_secondary2

0xcca2,	// (0x000880a3) list_cale_ev2_pane

0xccaa,	// (0x000880ab) scroll_pane_cp023_ParamLimits

0x5dfd,	// (0x000811fe) field_cale_ev2_pane_ParamLimits

0x5dfd,	// (0x000811fe) field_cale_ev2_pane

0x5e2b,	// (0x0008122c) field_cale_ev2_pane_g1_ParamLimits

0x5e2b,	// (0x0008122c) field_cale_ev2_pane_g1

0x5e37,	// (0x00081238) field_cale_ev2_pane_g2_ParamLimits

0x5e37,	// (0x00081238) field_cale_ev2_pane_g2

0x5e4f,	// (0x00081250) field_cale_ev2_pane_g3_ParamLimits

0x5e4f,	// (0x00081250) field_cale_ev2_pane_g3

0x0003,

0xf76a,	// (0x0008ab6b) field_cale_ev2_pane_g_ParamLimits

0xf76a,	// (0x0008ab6b) field_cale_ev2_pane_g

0x1019,	// (0x0007c41a) field_cale_ev2_pane_t1_ParamLimits

0x1019,	// (0x0007c41a) field_cale_ev2_pane_t1

0x1030,	// (0x0007c431) field_cale_ev2_pane_t2_ParamLimits

0x1030,	// (0x0007c431) field_cale_ev2_pane_t2

0x0001,

0xf773,	// (0x0008ab74) field_cale_ev2_pane_t_ParamLimits

0xf773,	// (0x0008ab74) field_cale_ev2_pane_t

0x4bb4,	// (0x0007ffb5) main_postcard_pane_g5_ParamLimits

0x4bb4,	// (0x0007ffb5) main_postcard_pane_g5

0x4bc2,	// (0x0007ffc3) main_postcard_pane_g6_ParamLimits

0x4bc2,	// (0x0007ffc3) main_postcard_pane_g6

0x2d6b,	// (0x0007e16c) camera2_autofocus_pane_cp_ParamLimits

0x2d6b,	// (0x0007e16c) camera2_autofocus_pane_cp

0xa99d,	// (0x00085d9e) main_mup3_pane

0x5e93,	// (0x00081294) main_mup3_pane_g1_ParamLimits

0x5e93,	// (0x00081294) main_mup3_pane_g1

0x5eb4,	// (0x000812b5) main_mup3_pane_g2_ParamLimits

0x5eb4,	// (0x000812b5) main_mup3_pane_g2

0x5f30,	// (0x00081331) main_mup3_pane_g3_ParamLimits

0x5f30,	// (0x00081331) main_mup3_pane_g3

0x5f73,	// (0x00081374) main_mup3_pane_g4_ParamLimits

0x5f73,	// (0x00081374) main_mup3_pane_g4

0x5fb6,	// (0x000813b7) main_mup3_pane_g5_ParamLimits

0x5fb6,	// (0x000813b7) main_mup3_pane_g5

0x5ffb,	// (0x000813fc) main_mup3_pane_g6_ParamLimits

0x5ffb,	// (0x000813fc) main_mup3_pane_g6

0xceed,	// (0x000882ee) main_mup3_pane_g7_ParamLimits

0xceed,	// (0x000882ee) main_mup3_pane_g7

0x0007,

0xf783,	// (0x0008ab84) main_mup3_pane_g_ParamLimits

0xf783,	// (0x0008ab84) main_mup3_pane_g

0x6071,	// (0x00081472) main_mup3_pane_t1_ParamLimits

0x6071,	// (0x00081472) main_mup3_pane_t1

0x60e0,	// (0x000814e1) main_mup3_pane_t2_ParamLimits

0x60e0,	// (0x000814e1) main_mup3_pane_t2

0x61a9,	// (0x000815aa) main_mup3_pane_t4_ParamLimits

0x61a9,	// (0x000815aa) main_mup3_pane_t4

0x61f7,	// (0x000815f8) main_mup3_pane_t5_ParamLimits

0x61f7,	// (0x000815f8) main_mup3_pane_t5

0x62a7,	// (0x000816a8) main_mup3_pane_t6_ParamLimits

0x62a7,	// (0x000816a8) main_mup3_pane_t6

0x0005,

0xf794,	// (0x0008ab95) main_mup3_pane_t_ParamLimits

0xf794,	// (0x0008ab95) main_mup3_pane_t

0x6353,	// (0x00081754) mup3_progress_pane_ParamLimits

0x6353,	// (0x00081754) mup3_progress_pane

0x63c7,	// (0x000817c8) popup_mup3_control_window_ParamLimits

0x63c7,	// (0x000817c8) popup_mup3_control_window

0xcefb,	// (0x000882fc) popup_mup3_text_window

0x63e0,	// (0x000817e1) mup3_progress_pane_t1

0x63ff,	// (0x00081800) mup3_progress_pane_t2

0xcf03,	// (0x00088304) mup3_progress_pane_t3

0x0002,

0xf7a1,	// (0x0008aba2) mup3_progress_pane_t

0xcf20,	// (0x00088321) mup_progress_pane_cp03

0x9ffc,	// (0x000853fd) bg_tb_trans_pane_cp04

0x641e,	// (0x0008181f) mup3_volume_pane

0x6426,	// (0x00081827) popup_mup3_control_window_g1

0x642f,	// (0x00081830) mup3_volume_pane_g1

0x6438,	// (0x00081839) mup3_volume_pane_g2

0x6441,	// (0x00081842) mup3_volume_pane_g3

0x0002,

0xf7a8,	// (0x0008aba9) mup3_volume_pane_g

0x9ffc,	// (0x000853fd) bg_tb_trans_pane_cp03

0xcf30,	// (0x00088331) popup_mup3_text_window_g1

0xcf38,	// (0x00088339) popup_mup3_text_window_t1

0xa7f0,	// (0x00085bf1) list_calc_item_pane_g1_ParamLimits

0xc96d,	// (0x00087d6e) mup_volume_pane_cp_g1

0x5dbb,	// (0x000811bc) main_touch_calib_pane_t3

0x5dd1,	// (0x000811d2) main_touch_calib_pane_t4

0x5de7,	// (0x000811e8) main_touch_calib_pane_t5

0x1f16,	// (0x0007d317) aid_cell_size_toolbar2

0x1f1e,	// (0x0007d31f) aid_popup3_width_pane

0x1f5e,	// (0x0007d35f) aid_zoom_text_msg_primary

0x2d38,	// (0x0007e139) vorec_t7

0xa764,	// (0x00085b65) bg_calc_paper_pane_g1_ParamLimits

0xa770,	// (0x00085b71) bg_calc_paper_pane_g2_ParamLimits

0xa77c,	// (0x00085b7d) bg_calc_paper_pane_g3_ParamLimits

0xa788,	// (0x00085b89) bg_calc_paper_pane_g4_ParamLimits

0xa794,	// (0x00085b95) bg_calc_paper_pane_g5_ParamLimits

0x25a4,	// (0x0007d9a5) bg_calc_paper_pane_g6_ParamLimits

0x25b5,	// (0x0007d9b6) bg_calc_paper_pane_g7_ParamLimits

0x25c6,	// (0x0007d9c7) bg_calc_paper_pane_g8_ParamLimits

0xf15b,	// (0x0008a55c) bg_calc_paper_pane_g_ParamLimits

0x25d7,	// (0x0007d9d8) calc_bg_paper_pane_g9_ParamLimits

0x2e52,	// (0x0007e253) image_qvga_pane_ParamLimits

0x2e52,	// (0x0007e253) image_qvga_pane

0xa674,	// (0x00085a75) bg_popup_sub_pane_cp04_ParamLimits

0xb606,	// (0x00086a07) popup_mup_playback_window_g1_ParamLimits

0xb612,	// (0x00086a13) popup_mup_playback_window_t1_ParamLimits

0xb627,	// (0x00086a28) popup_mup_playback_window_t2_ParamLimits

0xf4e7,	// (0x0008a8e8) popup_mup_playback_window_t_ParamLimits

0x58ba,	// (0x00080cbb) main_mup2_pane_g3_ParamLimits

0x58ba,	// (0x00080cbb) main_mup2_pane_g3

0x3122,	// (0x0007e523) popup_toolbar_window_cp04

0xba1c,	// (0x00086e1d) popup_call2_audio_second_window_g3_ParamLimits

0xba1c,	// (0x00086e1d) popup_call2_audio_second_window_g3

0xbe26,	// (0x00087227) popup_call2_audio_first_window_g4_ParamLimits

0xbe26,	// (0x00087227) popup_call2_audio_first_window_g4

0xc4a5,	// (0x000878a6) popup_call2_audio_in_window_g4_ParamLimits

0xc4a5,	// (0x000878a6) popup_call2_audio_in_window_g4

0x4ccc,	// (0x000800cd) aid_area_sk_bg_cut_ParamLimits

0x4ccc,	// (0x000800cd) aid_area_sk_bg_cut

0xb63c,	// (0x00086a3d) aid_area_sk_bg_cut_2_ParamLimits

0xb63c,	// (0x00086a3d) aid_area_sk_bg_cut_2

0x5c4a,	// (0x0008104b) aid_placing_details_win

0x5c52,	// (0x00081053) aid_placing_details_win_2

0xcd9a,	// (0x0008819b) camera2_autofocus_pane_g1_ParamLimits

0x216d,	// (0x0007d56e) popup_fixed_preview_cale_window_ParamLimits

0x216d,	// (0x0007d56e) popup_fixed_preview_cale_window

0xb421,	// (0x00086822) navi_slider_pane_g3

0xb42a,	// (0x0008682b) navi_slider_pane_g4

0xb433,	// (0x00086834) navi_slider_pane_g5

0xb421,	// (0x00086822) navi_slider_pane_g6

0x4604,	// (0x0007fa05) navi_slider_pane_g7

0xb546,	// (0x00086947) mup_scale_pane_g3

0xb54f,	// (0x00086950) mup_scale_pane_g4

0xb558,	// (0x00086959) mup_scale_pane_g5

0x4a43,	// (0x0007fe44) mup_scale_pane_g6

0x4a4c,	// (0x0007fe4d) mup_scale_pane_g7

0xb421,	// (0x00086822) cams2_slider_pane_g3

0xc9ef,	// (0x00087df0) cams2_slider_pane_g4

0x5ba2,	// (0x00080fa3) cams2_slider_pane_g5

0xb421,	// (0x00086822) cams2_slider_pane_g6

0x5baa,	// (0x00080fab) cams2_slider_pane_g7

0xcc1c,	// (0x0008801d) camera2_autofocus_pane_cp_g1

0xc806,	// (0x00087c07) bg_popup_preview_window_pane_cp02_ParamLimits

0xc806,	// (0x00087c07) bg_popup_preview_window_pane_cp02

0xcf46,	// (0x00088347) list_fp_cale_pane_ParamLimits

0xcf46,	// (0x00088347) list_fp_cale_pane

0xcf52,	// (0x00088353) popup_fixed_preview_cale_window_t1_ParamLimits

0xcf52,	// (0x00088353) popup_fixed_preview_cale_window_t1

0x644a,	// (0x0008184b) popup_fixed_preview_cale_window_t2_ParamLimits

0x644a,	// (0x0008184b) popup_fixed_preview_cale_window_t2

0x645f,	// (0x00081860) popup_fixed_preview_cale_window_t3_ParamLimits

0x645f,	// (0x00081860) popup_fixed_preview_cale_window_t3

0x0002,

0xf7af,	// (0x0008abb0) popup_fixed_preview_cale_window_t_ParamLimits

0xf7af,	// (0x0008abb0) popup_fixed_preview_cale_window_t

0x6474,	// (0x00081875) list_single_fp_cale_pane_ParamLimits

0x6474,	// (0x00081875) list_single_fp_cale_pane

0xcf70,	// (0x00088371) list_single_fp_cale_pane_g1_ParamLimits

0xcf70,	// (0x00088371) list_single_fp_cale_pane_g1

0xcf7c,	// (0x0008837d) list_single_fp_cale_pane_g2_ParamLimits

0xcf7c,	// (0x0008837d) list_single_fp_cale_pane_g2

0x0002,

0xf7b6,	// (0x0008abb7) list_single_fp_cale_pane_g_ParamLimits

0xf7b6,	// (0x0008abb7) list_single_fp_cale_pane_g

0xcf95,	// (0x00088396) list_single_fp_cale_pane_t1_ParamLimits

0xcf95,	// (0x00088396) list_single_fp_cale_pane_t1

0xcfa7,	// (0x000883a8) list_single_fp_cale_pane_t2_ParamLimits

0xcfa7,	// (0x000883a8) list_single_fp_cale_pane_t2

0x0001,

0xf7bd,	// (0x0008abbe) list_single_fp_cale_pane_t_ParamLimits

0xf7bd,	// (0x0008abbe) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9ffc,	// (0x000853fd) main_dialer_pane

0x6488,	// (0x00081889) aid_cell_size_keypad

0x6492,	// (0x00081893) dialer_ne_pane

0x649c,	// (0x0008189d) grid_dialer_command_1_pane

0x64a4,	// (0x000818a5) grid_dialer_command_2_pane

0x64ac,	// (0x000818ad) grid_dialer_keypad_pane

0x64c0,	// (0x000818c1) bg_popup_call_pane_cp06_ParamLimits

0x64c0,	// (0x000818c1) bg_popup_call_pane_cp06

0x64cc,	// (0x000818cd) dialer_ne_clear_pane_ParamLimits

0x64cc,	// (0x000818cd) dialer_ne_clear_pane

0xcfda,	// (0x000883db) dialer_ne_pane_g1

0xcfe2,	// (0x000883e3) dialer_ne_pane_t1_ParamLimits

0xcfe2,	// (0x000883e3) dialer_ne_pane_t1

0x64d8,	// (0x000818d9) dialer_ne_pane_t2_ParamLimits

0x64d8,	// (0x000818d9) dialer_ne_pane_t2

0x64f5,	// (0x000818f6) dialer_ne_pane_t3_ParamLimits

0x64f5,	// (0x000818f6) dialer_ne_pane_t3

0x0002,

0xf7c2,	// (0x0008abc3) dialer_ne_pane_t_ParamLimits

0xf7c2,	// (0x0008abc3) dialer_ne_pane_t

0x6519,	// (0x0008191a) dialer_ne_pane_t3_copy1_ParamLimits

0x6519,	// (0x0008191a) dialer_ne_pane_t3_copy1

0x653d,	// (0x0008193e) cell_dialer_keypad_pane_ParamLimits

0x653d,	// (0x0008193e) cell_dialer_keypad_pane

0x6554,	// (0x00081955) cell_dialer_command_1_pane_ParamLimits

0x6554,	// (0x00081955) cell_dialer_command_1_pane

0x656a,	// (0x0008196b) cell_dialer_command_2_pane_ParamLimits

0x656a,	// (0x0008196b) cell_dialer_command_2_pane

0xcff4,	// (0x000883f5) bg_button_pane_cp02_ParamLimits

0xcff4,	// (0x000883f5) bg_button_pane_cp02

0x6579,	// (0x0008197a) cell_dialer_keypad_pane_g1_ParamLimits

0x6579,	// (0x0008197a) cell_dialer_keypad_pane_g1

0xcff4,	// (0x000883f5) bg_button_pane_cp03_ParamLimits

0xcff4,	// (0x000883f5) bg_button_pane_cp03

0x658e,	// (0x0008198f) cell_dialer_command_1_pane_g1_ParamLimits

0x658e,	// (0x0008198f) cell_dialer_command_1_pane_g1

0xd000,	// (0x00088401) bg_button_pane_cp04

0x65a2,	// (0x000819a3) cell_dialer_command_2_pane_g1

0xb404,	// (0x00086805) bg_button_pane_cp06

0xd008,	// (0x00088409) dialer_ne_clear_pane_g1

0xb2e0,	// (0x000866e1) navi_pane_g2

0xb30e,	// (0x0008670f) navi_pane_g3

0x0002,

0xf3ea,	// (0x0008a7eb) navi_pane_g

0xb39d,	// (0x0008679e) navi_pane_mv_g2

0xb3c4,	// (0x000867c5) navi_pane_mv_g5

0x45cf,	// (0x0007f9d0) navi_pane_mv_t1

0xa758,	// (0x00085b59) main_clock2_pane

0x65e2,	// (0x000819e3) main_clock2_list_pane_ParamLimits

0x65e2,	// (0x000819e3) main_clock2_list_pane

0x660c,	// (0x00081a0d) main_clock2_pane_t1_ParamLimits

0x660c,	// (0x00081a0d) main_clock2_pane_t1

0x6630,	// (0x00081a31) main_clock2_pane_t2_ParamLimits

0x6630,	// (0x00081a31) main_clock2_pane_t2

0x0004,

0xf7c9,	// (0x0008abca) main_clock2_pane_t_ParamLimits

0xf7c9,	// (0x0008abca) main_clock2_pane_t

0x668b,	// (0x00081a8c) popup_clock_analogue_window_cp03_ParamLimits

0x668b,	// (0x00081a8c) popup_clock_analogue_window_cp03

0x66a9,	// (0x00081aaa) popup_clock_digital_window_cp02_ParamLimits

0x66a9,	// (0x00081aaa) popup_clock_digital_window_cp02

0x6718,	// (0x00081b19) main_clock2_list_single_pane_ParamLimits

0x6718,	// (0x00081b19) main_clock2_list_single_pane

0xb404,	// (0x00086805) list_highlight_pane_cp05

0xd026,	// (0x00088427) main_clock2_list_single_pane_t1

0x3122,	// (0x0007e523) popup_toolbar_window_cp04_ParamLimits

0x5c74,	// (0x00081075) camera2_autofocus_pane_g2_ParamLimits

0x5c74,	// (0x00081075) camera2_autofocus_pane_g2

0x5c80,	// (0x00081081) camera2_autofocus_pane_g3_ParamLimits

0x5c80,	// (0x00081081) camera2_autofocus_pane_g3

0x5c8c,	// (0x0008108d) camera2_autofocus_pane_g4_ParamLimits

0x5c8c,	// (0x0008108d) camera2_autofocus_pane_g4

0x5c98,	// (0x00081099) camera2_autofocus_pane_g5_ParamLimits

0x5c98,	// (0x00081099) camera2_autofocus_pane_g5

0x0004,

0xf712,	// (0x0008ab13) camera2_autofocus_pane_g_ParamLimits

0xf712,	// (0x0008ab13) camera2_autofocus_pane_g

0x5e73,	// (0x00081274) camera2_autofocus_pane_cp_g2

0x5e7b,	// (0x0008127c) camera2_autofocus_pane_cp_g3

0x5e83,	// (0x00081284) camera2_autofocus_pane_cp_g4

0x5e8b,	// (0x0008128c) camera2_autofocus_pane_cp_g5

0x0004,

0xf778,	// (0x0008ab79) camera2_autofocus_pane_cp_g

0x64b8,	// (0x000818b9) popup_dialer_spcha_window

0x9ffc,	// (0x000853fd) bg_popup_sub_pane_cp07

0xd034,	// (0x00088435) list_spcha_pane

0xd03c,	// (0x0008843d) list_single_spcha_pane_ParamLimits

0xd03c,	// (0x0008843d) list_single_spcha_pane

0x9ffc,	// (0x000853fd) list_highlight_pane_cp06

0xd04d,	// (0x0008844e) list_single_spcha_pane_t1

0xc24f,	// (0x00087650) popup_call2_audio_out_window_g4_ParamLimits

0xc24f,	// (0x00087650) popup_call2_audio_out_window_g4

0x9ffc,	// (0x000853fd) main_imed2_pane

0x5309,	// (0x0008070a) popup_imed_adjust2_window

0x531c,	// (0x0008071d) popup_imed_trans_window_ParamLimits

0x531c,	// (0x0008071d) popup_imed_trans_window

0xca58,	// (0x00087e59) popup_blid_sat_info2_window_t1

0xca66,	// (0x00087e67) popup_blid_sat_info2_window_t2

0x000a,

0xf6a7,	// (0x0008aaa8) popup_blid_sat_info2_window_t

0x67c2,	// (0x00081bc3) aid_size_cell_colour_35

0x67dc,	// (0x00081bdd) aid_size_cell_colour_112

0x67f3,	// (0x00081bf4) aid_size_cell_effect

0xa99d,	// (0x00085d9e) bg_tb_trans_pane_cp02

0xb40c,	// (0x0008680d) heading_imed_pane

0x680d,	// (0x00081c0e) listscroll_imed_pane

0xd05b,	// (0x0008845c) heading_imed_pane_g1

0xd063,	// (0x00088464) heading_imed_pane_t1

0xd071,	// (0x00088472) grid_imed_colour_35_pane_ParamLimits

0xd071,	// (0x00088472) grid_imed_colour_35_pane

0x6819,	// (0x00081c1a) grid_imed_effect_pane

0xd089,	// (0x0008848a) list_imed_aspect_pane

0x6829,	// (0x00081c2a) scroll_pane_cp027_ParamLimits

0x6829,	// (0x00081c2a) scroll_pane_cp027

0x6835,	// (0x00081c36) cell_imed_effect_pane_ParamLimits

0x6835,	// (0x00081c36) cell_imed_effect_pane

0xd091,	// (0x00088492) cell_imed_colour_pane_ParamLimits

0xd091,	// (0x00088492) cell_imed_colour_pane

0xd0d3,	// (0x000884d4) cell_imed_colour_pane_g1_ParamLimits

0xd0d3,	// (0x000884d4) cell_imed_colour_pane_g1

0xd0e4,	// (0x000884e5) hgihlgiht_grid_pane_cp016_ParamLimits

0xd0e4,	// (0x000884e5) hgihlgiht_grid_pane_cp016

0x684d,	// (0x00081c4e) cell_imed_effect_pane_g1

0x6855,	// (0x00081c56) grid_highlight_pane_cp017

0xd0f5,	// (0x000884f6) list_imed_single_pane_ParamLimits

0xd0f5,	// (0x000884f6) list_imed_single_pane

0x9ffc,	// (0x000853fd) list_highlight_pane_cp07

0xd10b,	// (0x0008850c) list_imed_aspect_pane_comp1_t1

0xc812,	// (0x00087c13) bg_tb_trans_pane_cp05

0xd12d,	// (0x0008852e) popup_imed_adjust2_window_g1

0xd154,	// (0x00088555) popup_imed_adjust2_window_t1

0xd16c,	// (0x0008856d) slider_imed_adjust_pane

0xd180,	// (0x00088581) slider_imed_adjust_pane_g1

0xd190,	// (0x00088591) slider_imed_adjust_pane_g2

0xd1a0,	// (0x000885a1) slider_imed_adjust_pane_g3

0xd1b1,	// (0x000885b2) slider_imed_adjust_pane_g4

0x0003,

0xf7e6,	// (0x0008abe7) slider_imed_adjust_pane_g

0x685e,	// (0x00081c5f) aid_size_cell_clipart2

0x686a,	// (0x00081c6b) grid_imed_clipart_pane

0xd1c2,	// (0x000885c3) scroll_pane_cp031

0x6874,	// (0x00081c75) cell_imed_clipart_pane_ParamLimits

0x6874,	// (0x00081c75) cell_imed_clipart_pane

0x689b,	// (0x00081c9c) cell_imed_clipart_pane_g1

0x9ffc,	// (0x000853fd) grid_highlight_pane_cp014

0x65ee,	// (0x000819ef) main_clock2_pane_g1_ParamLimits

0x65ee,	// (0x000819ef) main_clock2_pane_g1

0x66c3,	// (0x00081ac4) aid_call2_pane_cp10

0x66d5,	// (0x00081ad6) aid_call_pane_cp10

0xb231,	// (0x00086632) popup_clock_analogue_window_cp10_g1

0xb231,	// (0x00086632) popup_clock_analogue_window_cp10_g2

0x66e7,	// (0x00081ae8) popup_clock_analogue_window_cp10_g3

0x66e7,	// (0x00081ae8) popup_clock_analogue_window_cp10_g4

0xb231,	// (0x00086632) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d4,	// (0x0008abd5) popup_clock_analogue_window_cp10_g

0x66f9,	// (0x00081afa) popup_clock_analogue_window_cp10_t1

0x672a,	// (0x00081b2b) clock_digital_number_pane_cp10_ParamLimits

0x672a,	// (0x00081b2b) clock_digital_number_pane_cp10

0x6742,	// (0x00081b43) clock_digital_number_pane_cp11_ParamLimits

0x6742,	// (0x00081b43) clock_digital_number_pane_cp11

0x675a,	// (0x00081b5b) clock_digital_number_pane_cp12_ParamLimits

0x675a,	// (0x00081b5b) clock_digital_number_pane_cp12

0x6772,	// (0x00081b73) clock_digital_number_pane_cp13_ParamLimits

0x6772,	// (0x00081b73) clock_digital_number_pane_cp13

0x678a,	// (0x00081b8b) clock_digital_separator_pane_cp10_ParamLimits

0x678a,	// (0x00081b8b) clock_digital_separator_pane_cp10

0x67a2,	// (0x00081ba3) popup_clock_digital_window_cp02_t1_ParamLimits

0x67a2,	// (0x00081ba3) popup_clock_digital_window_cp02_t1

0xa66c,	// (0x00085a6d) clock_digital_number_pane_cp10_g1

0xa66c,	// (0x00085a6d) clock_digital_number_pane_cp10_g2

0x0001,

0xf7ef,	// (0x0008abf0) clock_digital_number_pane_cp10_g

0xa66c,	// (0x00085a6d) clock_digital_separator_pane_cp10_g1

0xa66c,	// (0x00085a6d) clock_digital_separator_pane_g2_cp10

0xb3cc,	// (0x000867cd) navi_pane_vded_g4

0xb3d5,	// (0x000867d6) navi_pane_vded_g5

0xb3de,	// (0x000867df) navi_pane_vded_t1

0x9ffc,	// (0x000853fd) main_vded_pane

0x68a4,	// (0x00081ca5) main_vded_pane_g1

0x68b0,	// (0x00081cb1) main_vded_pane_g2

0x68ba,	// (0x00081cbb) main_vded_pane_g3

0x0002,

0xf7f4,	// (0x0008abf5) main_vded_pane_g

0x68c4,	// (0x00081cc5) main_vded_pane_t1

0x68d2,	// (0x00081cd3) main_vded_pane_t2

0x0001,

0xf7fb,	// (0x0008abfc) main_vded_pane_t

0x68e0,	// (0x00081ce1) vded_slider_pane

0x68ea,	// (0x00081ceb) vded_video_pane

0xd1ca,	// (0x000885cb) vded_video_pane_g1

0x68f4,	// (0x00081cf5) vded_video_pane_g2

0xcc1c,	// (0x0008801d) vded_video_pane_g3

0x0002,

0xf800,	// (0x0008ac01) vded_video_pane_g

0xd1d4,	// (0x000885d5) vded_slider_pane_g1

0xd1dd,	// (0x000885de) vded_slider_pane_g2

0xd1e6,	// (0x000885e7) vded_slider_pane_g3

0xd1ef,	// (0x000885f0) vded_slider_pane_g4

0xd1f8,	// (0x000885f9) vded_slider_pane_g5

0x0004,

0xf807,	// (0x0008ac08) vded_slider_pane_g

0x63b9,	// (0x000817ba) mup3_rocker_pane_ParamLimits

0x63b9,	// (0x000817ba) mup3_rocker_pane

0x68fd,	// (0x00081cfe) mup3_control_keys_pane_g1

0x6905,	// (0x00081d06) mup3_control_keys_pane_g2

0x690d,	// (0x00081d0e) mup3_control_keys_pane_g3

0x6915,	// (0x00081d16) mup3_control_keys_pane_g4

0x0003,

0xf812,	// (0x0008ac13) mup3_control_keys_pane_g

0x2195,	// (0x0007d596) popup_toolbar2_fixed_window_cp01_ParamLimits

0x2195,	// (0x0007d596) popup_toolbar2_fixed_window_cp01

0x63d3,	// (0x000817d4) popup_toolbar2_fixed_window_cp02_ParamLimits

0x63d3,	// (0x000817d4) popup_toolbar2_fixed_window_cp02

0xbb8e,	// (0x00086f8f) popup_call2_audio_second_window_t4_ParamLimits

0xbb8e,	// (0x00086f8f) popup_call2_audio_second_window_t4

0xc0bc,	// (0x000874bd) popup_call2_audio_first_window_t6_ParamLimits

0xc0bc,	// (0x000874bd) popup_call2_audio_first_window_t6

0xc352,	// (0x00087753) popup_call2_audio_out_window_t6_ParamLimits

0xc352,	// (0x00087753) popup_call2_audio_out_window_t6

0x9ffc,	// (0x000853fd) main_vitu_pane

0x6925,	// (0x00081d26) aid_size_cell_itu_ParamLimits

0x6925,	// (0x00081d26) aid_size_cell_itu

0xed32,	// (0x0008a133) bg_popup_window_pane_cp08_ParamLimits

0xed32,	// (0x0008a133) bg_popup_window_pane_cp08

0x6933,	// (0x00081d34) field_vitu_entry_pane_ParamLimits

0x6933,	// (0x00081d34) field_vitu_entry_pane

0x6942,	// (0x00081d43) grid_vitu_function_pane_ParamLimits

0x6942,	// (0x00081d43) grid_vitu_function_pane

0x6952,	// (0x00081d53) grid_vitu_itu_pane_ParamLimits

0x6952,	// (0x00081d53) grid_vitu_itu_pane

0x6962,	// (0x00081d63) cell_vitu_itu_pane_ParamLimits

0x6962,	// (0x00081d63) cell_vitu_itu_pane

0x6977,	// (0x00081d78) cell_vitu_function_pane_ParamLimits

0x6977,	// (0x00081d78) cell_vitu_function_pane

0xa99d,	// (0x00085d9e) bg_popup_sub_pane_cp08_ParamLimits

0xa99d,	// (0x00085d9e) bg_popup_sub_pane_cp08

0x698b,	// (0x00081d8c) field_vitu_entry_pane_t1_ParamLimits

0x698b,	// (0x00081d8c) field_vitu_entry_pane_t1

0xd219,	// (0x0008861a) field_vitu_entry_pane_t2_ParamLimits

0xd219,	// (0x0008861a) field_vitu_entry_pane_t2

0x0001,

0xf820,	// (0x0008ac21) field_vitu_entry_pane_t_ParamLimits

0xf820,	// (0x0008ac21) field_vitu_entry_pane_t

0xd236,	// (0x00088637) bg_button_pane_cp05_ParamLimits

0xd236,	// (0x00088637) bg_button_pane_cp05

0x69a8,	// (0x00081da9) cell_vitu_itu_pane_g1

0x69c0,	// (0x00081dc1) cell_vitu_itu_pane_t1_ParamLimits

0x69c0,	// (0x00081dc1) cell_vitu_itu_pane_t1

0x69d2,	// (0x00081dd3) cell_vitu_itu_pane_t2_ParamLimits

0x69d2,	// (0x00081dd3) cell_vitu_itu_pane_t2

0x0002,

0xf825,	// (0x0008ac26) cell_vitu_itu_pane_t_ParamLimits

0xf825,	// (0x0008ac26) cell_vitu_itu_pane_t

0xd244,	// (0x00088645) bg_button_pane_cp07

0x6a15,	// (0x00081e16) cell_vitu_function_pane_g1

0x2448,	// (0x0007d849) main_calc_pane_g1

0x1f52,	// (0x0007d353) aid_visual_content_pane

0x9ffc,	// (0x000853fd) main_vradio_pane

0x6a1e,	// (0x00081e1f) main_vradio_pane_g1_ParamLimits

0x6a1e,	// (0x00081e1f) main_vradio_pane_g1

0xd24e,	// (0x0008864f) main_vradio_pane_g2_ParamLimits

0xd24e,	// (0x0008864f) main_vradio_pane_g2

0x0001,

0xf82c,	// (0x0008ac2d) main_vradio_pane_g_ParamLimits

0xf82c,	// (0x0008ac2d) main_vradio_pane_g

0x6a2e,	// (0x00081e2f) main_vradio_pane_t1_ParamLimits

0x6a2e,	// (0x00081e2f) main_vradio_pane_t1

0x6a40,	// (0x00081e41) main_vradio_pane_t2_ParamLimits

0x6a40,	// (0x00081e41) main_vradio_pane_t2

0xd25b,	// (0x0008865c) main_vradio_pane_t3_ParamLimits

0xd25b,	// (0x0008865c) main_vradio_pane_t3

0x0002,

0xf831,	// (0x0008ac32) main_vradio_pane_t_ParamLimits

0xf831,	// (0x0008ac32) main_vradio_pane_t

0x6a52,	// (0x00081e53) vradio_rocker_control_pane_ParamLimits

0x6a52,	// (0x00081e53) vradio_rocker_control_pane

0x6a5e,	// (0x00081e5f) vradio_station_info_pane_ParamLimits

0x6a5e,	// (0x00081e5f) vradio_station_info_pane

0xd26f,	// (0x00088670) vradio_frequency_info_pane_ParamLimits

0xd26f,	// (0x00088670) vradio_frequency_info_pane

0xcc1c,	// (0x0008801d) vradio_station_info_pane_g1

0xd27e,	// (0x0008867f) vradio_station_info_pane_t1_ParamLimits

0xd27e,	// (0x0008867f) vradio_station_info_pane_t1

0xd2a0,	// (0x000886a1) vradio_station_info_pane_t2_ParamLimits

0xd2a0,	// (0x000886a1) vradio_station_info_pane_t2

0x0001,

0xf838,	// (0x0008ac39) vradio_station_info_pane_t_ParamLimits

0xf838,	// (0x0008ac39) vradio_station_info_pane_t

0xd2b2,	// (0x000886b3) vradio_tuning_pane

0xd2ba,	// (0x000886bb) vradio_rocker_control_pane_g1

0xd2c2,	// (0x000886c3) vradio_rocker_control_pane_g2

0xd2ca,	// (0x000886cb) vradio_rocker_control_pane_g3

0xd2d2,	// (0x000886d3) vradio_rocker_control_pane_g4

0xd2da,	// (0x000886db) vradio_rocker_control_pane_g5

0x0004,

0xf83d,	// (0x0008ac3e) vradio_rocker_control_pane_g

0x6a6d,	// (0x00081e6e) vradio_frequency_info_pane_g1

0xd2e2,	// (0x000886e3) vradio_frequency_info_pane_t1_ParamLimits

0xd2e2,	// (0x000886e3) vradio_frequency_info_pane_t1

0x6a77,	// (0x00081e78) vradio_tuning_pane_g1

0x6a80,	// (0x00081e81) vradio_tuning_pane_t1

0x1f9b,	// (0x0007d39c) area_side_right_pane_ParamLimits

0x1f9b,	// (0x0007d39c) area_side_right_pane

0xc7cd,	// (0x00087bce) status_small_pane_g1

0xc7d5,	// (0x00087bd6) status_small_pane_g2

0xc7de,	// (0x00087bdf) status_small_pane_g3

0xc7e7,	// (0x00087be8) status_small_pane_g4

0x0003,

0xf5fd,	// (0x0008a9fe) status_small_pane_g

0xc7f0,	// (0x00087bf1) status_small_pane_t1

0x9ffc,	// (0x000853fd) main_video3_pane

0xd2f6,	// (0x000886f7) cams_zoom_vslider_pane

0xd2fe,	// (0x000886ff) image3_wide_pane_ParamLimits

0xd2fe,	// (0x000886ff) image3_wide_pane

0xd318,	// (0x00088719) image3_wide_small_pane

0xd324,	// (0x00088725) main_video3_pane_g1_ParamLimits

0xd324,	// (0x00088725) main_video3_pane_g1

0xd340,	// (0x00088741) main_video3_pane_g2_ParamLimits

0xd340,	// (0x00088741) main_video3_pane_g2

0x0001,

0xf848,	// (0x0008ac49) main_video3_pane_g_ParamLimits

0xf848,	// (0x0008ac49) main_video3_pane_g

0xd35c,	// (0x0008875d) main_video3_pane_t1_ParamLimits

0xd35c,	// (0x0008875d) main_video3_pane_t1

0xd387,	// (0x00088788) main_video3_pane_t2_ParamLimits

0xd387,	// (0x00088788) main_video3_pane_t2

0xd3b2,	// (0x000887b3) main_video3_pane_t3_ParamLimits

0xd3b2,	// (0x000887b3) main_video3_pane_t3

0x0002,

0xf84d,	// (0x0008ac4e) main_video3_pane_t_ParamLimits

0xf84d,	// (0x0008ac4e) main_video3_pane_t

0xd3df,	// (0x000887e0) cams_zoom_vslider_pane_g1

0xd3e8,	// (0x000887e9) cams_zoom_vslider_pane_g2

0x0001,

0xf854,	// (0x0008ac55) cams_zoom_vslider_pane_g

0xd3f0,	// (0x000887f1) small_slider_vertical_pane

0xcc1c,	// (0x0008801d) small_slider_vertical_pane_g1

0xcc1c,	// (0x0008801d) small_slider_vertical_pane_g2

0xd3f8,	// (0x000887f9) small_slider_vertical_pane_g3

0x0002,

0xf859,	// (0x0008ac5a) small_slider_vertical_pane_g

0x9ffc,	// (0x000853fd) main_hwr_training_pane

0xd401,	// (0x00088802) hwr_training_instruct_pane_ParamLimits

0xd401,	// (0x00088802) hwr_training_instruct_pane

0x6a8f,	// (0x00081e90) hwr_training_navi_pane_ParamLimits

0x6a8f,	// (0x00081e90) hwr_training_navi_pane

0x6aa9,	// (0x00081eaa) hwr_training_write_pane_ParamLimits

0x6aa9,	// (0x00081eaa) hwr_training_write_pane

0x9ffc,	// (0x000853fd) bg_frame_shadow_pane

0xd438,	// (0x00088839) hwr_training_write_pane_g1

0xd440,	// (0x00088841) hwr_training_write_pane_g2

0xd448,	// (0x00088849) hwr_training_write_pane_g3

0xd450,	// (0x00088851) hwr_training_write_pane_g4

0xd458,	// (0x00088859) hwr_training_write_pane_g5

0xd460,	// (0x00088861) hwr_training_write_pane_g6

0xd468,	// (0x00088869) hwr_training_write_pane_g7

0x0006,

0xf860,	// (0x0008ac61) hwr_training_write_pane_g

0x6ae1,	// (0x00081ee2) hwr_training_navi_pane_g1_ParamLimits

0x6ae1,	// (0x00081ee2) hwr_training_navi_pane_g1

0x6af3,	// (0x00081ef4) hwr_training_navi_pane_g2_ParamLimits

0x6af3,	// (0x00081ef4) hwr_training_navi_pane_g2

0x6b05,	// (0x00081f06) hwr_training_navi_pane_g3_ParamLimits

0x6b05,	// (0x00081f06) hwr_training_navi_pane_g3

0x6b15,	// (0x00081f16) hwr_training_navi_pane_g4_ParamLimits

0x6b15,	// (0x00081f16) hwr_training_navi_pane_g4

0x0004,

0xf86f,	// (0x0008ac70) hwr_training_navi_pane_g_ParamLimits

0xf86f,	// (0x0008ac70) hwr_training_navi_pane_g

0x6b2f,	// (0x00081f30) hwr_training_navi_pane_t1

0x6b3d,	// (0x00081f3e) list_single_hwr_training_instruct_pane_ParamLimits

0x6b3d,	// (0x00081f3e) list_single_hwr_training_instruct_pane

0xd470,	// (0x00088871) list_single_hwr_training_instruct_pane_t1

0xcb5c,	// (0x00087f5d) bg_frame_shadow_pane_g1

0xd47f,	// (0x00088880) bg_frame_shadow_pane_g2

0xd487,	// (0x00088888) bg_frame_shadow_pane_g3

0xd48f,	// (0x00088890) bg_frame_shadow_pane_g4

0xd497,	// (0x00088898) bg_frame_shadow_pane_g5

0xd49f,	// (0x000888a0) bg_frame_shadow_pane_g6

0xd4a7,	// (0x000888a8) bg_frame_shadow_pane_g7

0xa873,	// (0x00085c74) bg_frame_shadow_pane_g8

0x0007,

0xf87a,	// (0x0008ac7b) bg_frame_shadow_pane_g

0x9ffc,	// (0x000853fd) main_video_tele_dialer_pane

0x6b6c,	// (0x00081f6d) aid_size_cell_video_keypad_ParamLimits

0x6b6c,	// (0x00081f6d) aid_size_cell_video_keypad

0x6b7c,	// (0x00081f7d) grid_video_dialer_keypad_pane_ParamLimits

0x6b7c,	// (0x00081f7d) grid_video_dialer_keypad_pane

0x6bb0,	// (0x00081fb1) video_down_pane_cp_ParamLimits

0x6bb0,	// (0x00081fb1) video_down_pane_cp

0x6bda,	// (0x00081fdb) cell_video_dialer_keypad_pane_ParamLimits

0x6bda,	// (0x00081fdb) cell_video_dialer_keypad_pane

0xd4af,	// (0x000888b0) bg_button_pane_cp08_ParamLimits

0xd4af,	// (0x000888b0) bg_button_pane_cp08

0x6bef,	// (0x00081ff0) cell_video_dialer_keypad_pane_g1_ParamLimits

0x6bef,	// (0x00081ff0) cell_video_dialer_keypad_pane_g1

0x63ad,	// (0x000817ae) mup3_rocker2_pane_ParamLimits

0x63ad,	// (0x000817ae) mup3_rocker2_pane

0xcc1c,	// (0x0008801d) mup3_rocker2_pane_g1

0x527d,	// (0x0008067e) main_dialer2_pane

0x9ffc,	// (0x000853fd) main_mp4_pane

0x6c32,	// (0x00082033) main_mp4_pane_g1_ParamLimits

0x6c32,	// (0x00082033) main_mp4_pane_g1

0x6c40,	// (0x00082041) main_mp4_pane_g2_ParamLimits

0x6c40,	// (0x00082041) main_mp4_pane_g2

0x6c4e,	// (0x0008204f) main_mp4_pane_g3_ParamLimits

0x6c4e,	// (0x0008204f) main_mp4_pane_g3

0x6c93,	// (0x00082094) main_mp4_pane_g4_ParamLimits

0x6c93,	// (0x00082094) main_mp4_pane_g4

0x6cbb,	// (0x000820bc) main_mp4_pane_g5_ParamLimits

0x6cbb,	// (0x000820bc) main_mp4_pane_g5

0x0005,

0xf89a,	// (0x0008ac9b) main_mp4_pane_g_ParamLimits

0xf89a,	// (0x0008ac9b) main_mp4_pane_g

0x6d0b,	// (0x0008210c) main_mp4_pane_t1_ParamLimits

0x6d0b,	// (0x0008210c) main_mp4_pane_t1

0x6d67,	// (0x00082168) main_mp4_pane_t2_ParamLimits

0x6d67,	// (0x00082168) main_mp4_pane_t2

0xd4bb,	// (0x000888bc) main_mp4_pane_t3_ParamLimits

0xd4bb,	// (0x000888bc) main_mp4_pane_t3

0x6db9,	// (0x000821ba) main_mp4_pane_t4_ParamLimits

0x6db9,	// (0x000821ba) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x0008aca8) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x0008aca8) main_mp4_pane_t

0x6dfd,	// (0x000821fe) mp4_progress_pane_ParamLimits

0x6dfd,	// (0x000821fe) mp4_progress_pane

0x6e47,	// (0x00082248) mp4_rocker_pane_ParamLimits

0x6e47,	// (0x00082248) mp4_rocker_pane

0xd4e3,	// (0x000888e4) mp4_progress_pane_t1

0xd4fc,	// (0x000888fd) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x0008acb1) mp4_progress_pane_t

0xd515,	// (0x00088916) mup_progress_pane_cp04

0xcc1c,	// (0x0008801d) mp4_rocker_pane_g1

0x6e67,	// (0x00082268) aid_cell_size_keypad2_ParamLimits

0x6e67,	// (0x00082268) aid_cell_size_keypad2

0x6e77,	// (0x00082278) dialer2_ne_pane_ParamLimits

0x6e77,	// (0x00082278) dialer2_ne_pane

0x6e85,	// (0x00082286) grid_dialer2_keypad_pane_ParamLimits

0x6e85,	// (0x00082286) grid_dialer2_keypad_pane

0xdcb3,	// (0x000890b4) bg_popup_call_pane_cp07_ParamLimits

0xdcb3,	// (0x000890b4) bg_popup_call_pane_cp07

0x6e95,	// (0x00082296) dialer2_ne_pane_t1_ParamLimits

0x6e95,	// (0x00082296) dialer2_ne_pane_t1

0x6eba,	// (0x000822bb) cell_dialer2_keypad_pane_ParamLimits

0x6eba,	// (0x000822bb) cell_dialer2_keypad_pane

0xd533,	// (0x00088934) bg_button_pane_pane_cp04_ParamLimits

0xd533,	// (0x00088934) bg_button_pane_pane_cp04

0x6ecf,	// (0x000822d0) cell_dialer2_keypad_pane_g1_ParamLimits

0x6ecf,	// (0x000822d0) cell_dialer2_keypad_pane_g1

0x2fe4,	// (0x0007e3e5) aid_placing_vt_set_content_ParamLimits

0x2fe4,	// (0x0007e3e5) aid_placing_vt_set_content

0x3010,	// (0x0007e411) aid_placing_vt_set_title_ParamLimits

0x3010,	// (0x0007e411) aid_placing_vt_set_title

0x9ffc,	// (0x000853fd) main_image3_pane

0x6f69,	// (0x0008236a) area_side_right_pane_cp01_ParamLimits

0x6f69,	// (0x0008236a) area_side_right_pane_cp01

0xa7a0,	// (0x00085ba1) main_image3_pane_g1_ParamLimits

0xa7a0,	// (0x00085ba1) main_image3_pane_g1

0x6f96,	// (0x00082397) main_image3_pane_g2_ParamLimits

0x6f96,	// (0x00082397) main_image3_pane_g2

0x6faf,	// (0x000823b0) main_image3_pane_g3_ParamLimits

0x6faf,	// (0x000823b0) main_image3_pane_g3

0x6fc8,	// (0x000823c9) main_image3_pane_g4_ParamLimits

0x6fc8,	// (0x000823c9) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x0008acc0) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x0008acc0) main_image3_pane_g

0x6fe1,	// (0x000823e2) main_image3_pane_t1_ParamLimits

0x6fe1,	// (0x000823e2) main_image3_pane_t1

0x7006,	// (0x00082407) main_image3_pane_t2_ParamLimits

0x7006,	// (0x00082407) main_image3_pane_t2

0x7025,	// (0x00082426) main_image3_pane_t3_ParamLimits

0x7025,	// (0x00082426) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x0008acc9) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x0008acc9) main_image3_pane_t

0xed32,	// (0x0008a133) grid_sctrl_middle_pane_cp01_ParamLimits

0xed32,	// (0x0008a133) grid_sctrl_middle_pane_cp01

0x7086,	// (0x00082487) cell_sctrl_middle_pane_cp01_ParamLimits

0x7086,	// (0x00082487) cell_sctrl_middle_pane_cp01

0x7097,	// (0x00082498) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x7097,	// (0x00082498) cell_sctrl_middle_pane_cp01_g1

0x9ffc,	// (0x000853fd) main_call4_pane

0x70a4,	// (0x000824a5) aid_size_button_call4_ParamLimits

0x70a4,	// (0x000824a5) aid_size_button_call4

0x70d4,	// (0x000824d5) call4_windows_pane_ParamLimits

0x70d4,	// (0x000824d5) call4_windows_pane

0x70ee,	// (0x000824ef) grid_call4_button_pane_ParamLimits

0x70ee,	// (0x000824ef) grid_call4_button_pane

0xd53f,	// (0x00088940) call4_windows_conf_pane

0xd554,	// (0x00088955) popup_call4_audio_first_window_ParamLimits

0xd554,	// (0x00088955) popup_call4_audio_first_window

0xd5a0,	// (0x000889a1) popup_call4_audio_second_window_ParamLimits

0xd5a0,	// (0x000889a1) popup_call4_audio_second_window

0xd5b4,	// (0x000889b5) popup_call4_audio_wait_window_ParamLimits

0xd5b4,	// (0x000889b5) popup_call4_audio_wait_window

0x7112,	// (0x00082513) cell_call4_button_pane_ParamLimits

0x7112,	// (0x00082513) cell_call4_button_pane

0x7137,	// (0x00082538) bg_button_pane_cp09_ParamLimits

0x7137,	// (0x00082538) bg_button_pane_cp09

0x7143,	// (0x00082544) cell_call4_button_pane_g1_ParamLimits

0x7143,	// (0x00082544) cell_call4_button_pane_g1

0x7150,	// (0x00082551) cell_call4_button_pane_t1_ParamLimits

0x7150,	// (0x00082551) cell_call4_button_pane_t1

0xd5fc,	// (0x000889fd) popup_call4_audio_conf_window_ParamLimits

0xd5fc,	// (0x000889fd) popup_call4_audio_conf_window

0x63e0,	// (0x000817e1) mup3_progress_pane_t1_ParamLimits

0x63ff,	// (0x00081800) mup3_progress_pane_t2_ParamLimits

0xcf03,	// (0x00088304) mup3_progress_pane_t3_ParamLimits

0xf7a1,	// (0x0008aba2) mup3_progress_pane_t_ParamLimits

0xcf20,	// (0x00088321) mup_progress_pane_cp03_ParamLimits

0x691d,	// (0x00081d1e) mup3_control_keys_pane_g4_copy1

0x6e2b,	// (0x0008222c) mp4_rocker2_pane_ParamLimits

0x6e2b,	// (0x0008222c) mp4_rocker2_pane

0xd610,	// (0x00088a11) mp4_rocker2_pane_g1

0xd618,	// (0x00088a19) mp4_rocker2_pane_g2

0x7162,	// (0x00082563) mp4_rocker2_pane_g3

0x716a,	// (0x0008256b) mp4_rocker2_pane_g4

0x7172,	// (0x00082573) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x0008acd2) mp4_rocker2_pane_g

0x9ffc,	// (0x000853fd) main_camera4_pane

0x9ffc,	// (0x000853fd) main_video4_pane

0x6b8c,	// (0x00081f8d) main_video_tele_dialer_pane_t1_ParamLimits

0x6b8c,	// (0x00081f8d) main_video_tele_dialer_pane_t1

0x6b9e,	// (0x00081f9f) main_video_tele_dialer_pane_t2_ParamLimits

0x6b9e,	// (0x00081f9f) main_video_tele_dialer_pane_t2

0x0001,

0xf88b,	// (0x0008ac8c) main_video_tele_dialer_pane_t_ParamLimits

0xf88b,	// (0x0008ac8c) main_video_tele_dialer_pane_t

0x7192,	// (0x00082593) cam4_autofocus_pane_ParamLimits

0x7192,	// (0x00082593) cam4_autofocus_pane

0x71ac,	// (0x000825ad) cam4_image_uncrop_pane_ParamLimits

0x71ac,	// (0x000825ad) cam4_image_uncrop_pane

0x71c3,	// (0x000825c4) cam4_indicators_pane_ParamLimits

0x71c3,	// (0x000825c4) cam4_indicators_pane

0x71df,	// (0x000825e0) main_camera4_pane_g1_ParamLimits

0x71df,	// (0x000825e0) main_camera4_pane_g1

0x71eb,	// (0x000825ec) main_camera4_pane_g2_ParamLimits

0x71eb,	// (0x000825ec) main_camera4_pane_g2

0x71eb,	// (0x000825ec) main_camera4_pane_g3_ParamLimits

0x71eb,	// (0x000825ec) main_camera4_pane_g3

0x71f7,	// (0x000825f8) main_camera4_pane_g4_ParamLimits

0x71f7,	// (0x000825f8) main_camera4_pane_g4

0x7203,	// (0x00082604) main_camera4_pane_g5_ParamLimits

0x7203,	// (0x00082604) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x0008acdd) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x0008acdd) main_camera4_pane_g

0x721d,	// (0x0008261e) main_camera4_pane_t1_ParamLimits

0x721d,	// (0x0008261e) main_camera4_pane_t1

0xce88,	// (0x00088289) bg_tb_trans_pane_cp06

0x726d,	// (0x0008266e) cam4_indicators_pane_g1

0x727e,	// (0x0008267f) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x0008acf8) cam4_indicators_pane_g

0x729c,	// (0x0008269d) cam4_indicators_pane_t1

0x72c6,	// (0x000826c7) main_video4_pane_g1_ParamLimits

0x72c6,	// (0x000826c7) main_video4_pane_g1

0x72d2,	// (0x000826d3) main_video4_pane_g2_ParamLimits

0x72d2,	// (0x000826d3) main_video4_pane_g2

0x72de,	// (0x000826df) main_video4_pane_g3_ParamLimits

0x72de,	// (0x000826df) main_video4_pane_g3

0x72ea,	// (0x000826eb) main_video4_pane_g4_ParamLimits

0x72ea,	// (0x000826eb) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x0008acff) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x0008acff) main_video4_pane_g

0x730a,	// (0x0008270b) vid4_indicators_pane_ParamLimits

0x730a,	// (0x0008270b) vid4_indicators_pane

0x7329,	// (0x0008272a) video4_image_uncrop_cif_pane_ParamLimits

0x7329,	// (0x0008272a) video4_image_uncrop_cif_pane

0x7338,	// (0x00082739) video4_image_uncrop_nhd_pane_ParamLimits

0x7338,	// (0x00082739) video4_image_uncrop_nhd_pane

0x71ac,	// (0x000825ad) video4_image_uncrop_vga_pane_ParamLimits

0x71ac,	// (0x000825ad) video4_image_uncrop_vga_pane

0xa99d,	// (0x00085d9e) bg_tb_trans_pane_cp07

0x734d,	// (0x0008274e) vid4_indicators_pane_g1

0x7361,	// (0x00082762) vid4_indicators_pane_g2

0x7375,	// (0x00082776) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x0008ad0a) vid4_indicators_pane_g

0x73a2,	// (0x000827a3) vid4_indicators_pane_t1

0x73b9,	// (0x000827ba) cam4_autofocus_pane_g1

0x73c1,	// (0x000827c2) cam4_autofocus_pane_g2

0x73c9,	// (0x000827ca) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x0008ad15) cam4_autofocus_pane_g

0x73d1,	// (0x000827d2) cam4_autofocus_pane_g3_copy1

0x6bbe,	// (0x00081fbf) video_down_pane_cp_t1

0x6bcc,	// (0x00081fcd) video_down_pane_cp_t2

0x0001,

0xf890,	// (0x0008ac91) video_down_pane_cp_t

0xed32,	// (0x0008a133) popup_vitu2_window_ParamLimits

0xed32,	// (0x0008a133) popup_vitu2_window

0x73d9,	// (0x000827da) aid_size_cell2_itu2_ParamLimits

0x73d9,	// (0x000827da) aid_size_cell2_itu2

0x73fb,	// (0x000827fc) aid_size_cell_itu2_ParamLimits

0x73fb,	// (0x000827fc) aid_size_cell_itu2

0xdcb3,	// (0x000890b4) bg_popup_window_pane_cp09_ParamLimits

0xdcb3,	// (0x000890b4) bg_popup_window_pane_cp09

0x743f,	// (0x00082840) field_vitu2_entry_pane_ParamLimits

0x743f,	// (0x00082840) field_vitu2_entry_pane

0x745f,	// (0x00082860) grid_vitu2_function_pane_ParamLimits

0x745f,	// (0x00082860) grid_vitu2_function_pane

0x74a3,	// (0x000828a4) grid_vitu2_itu_pane_ParamLimits

0x74a3,	// (0x000828a4) grid_vitu2_itu_pane

0x7519,	// (0x0008291a) cell_vitu2_itu_pane_ParamLimits

0x7519,	// (0x0008291a) cell_vitu2_itu_pane

0x752e,	// (0x0008292f) cell_vitu2_function_pane_ParamLimits

0x752e,	// (0x0008292f) cell_vitu2_function_pane

0xd620,	// (0x00088a21) bg_popup_call_pane_cp08_ParamLimits

0xd620,	// (0x00088a21) bg_popup_call_pane_cp08

0xd639,	// (0x00088a3a) field_vitu2_entry_pane_g1

0xd645,	// (0x00088a46) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x0008ad1c) field_vitu2_entry_pane_g

0x1045,	// (0x0007c446) field_vitu2_entry_pane_t1_ParamLimits

0x1045,	// (0x0007c446) field_vitu2_entry_pane_t1

0x1076,	// (0x0007c477) field_vitu2_entry_pane_t2_ParamLimits

0x1076,	// (0x0007c477) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x0008ad23) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x0008ad23) field_vitu2_entry_pane_t

0x756f,	// (0x00082970) bg_button_pane_cp010_ParamLimits

0x756f,	// (0x00082970) bg_button_pane_cp010

0x757d,	// (0x0008297e) cell_vitu2_itu_pane_g1

0x75a6,	// (0x000829a7) cell_vitu2_itu_pane_t1_ParamLimits

0x75a6,	// (0x000829a7) cell_vitu2_itu_pane_t1

0x1093,	// (0x0007c494) cell_vitu2_itu_pane_t2_ParamLimits

0x1093,	// (0x0007c494) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x0008ad2d) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x0008ad2d) cell_vitu2_itu_pane_t

0xa99d,	// (0x00085d9e) bg_button_pane_cp011

0x75f2,	// (0x000829f3) cell_vitu2_function_pane_g1

0x9ffc,	// (0x000853fd) main_myfav_hc_pane

0x7067,	// (0x00082468) popup_image3_note_pane_ParamLimits

0x7067,	// (0x00082468) popup_image3_note_pane

0x7075,	// (0x00082476) popup_image3_tool_bar_pane_ParamLimits

0x7075,	// (0x00082476) popup_image3_tool_bar_pane

0x1109,	// (0x0007c50a) cell_vitu2_itu_pane_t3_ParamLimits

0x1109,	// (0x0007c50a) cell_vitu2_itu_pane_t3

0x9ffc,	// (0x000853fd) bg_popup_trans_pane

0xd667,	// (0x00088a68) grid_image3_tool_bar_pane

0xd671,	// (0x00088a72) bg_popup_trans_pane_g1

0xabdf,	// (0x00085fe0) bg_popup_trans_pane_g2

0xd679,	// (0x00088a7a) bg_popup_trans_pane_g3

0xd681,	// (0x00088a82) bg_popup_trans_pane_g4

0xd689,	// (0x00088a8a) bg_popup_trans_pane_g5

0xd691,	// (0x00088a92) bg_popup_trans_pane_g6

0xd699,	// (0x00088a9a) bg_popup_trans_pane_g7

0xd6a1,	// (0x00088aa2) bg_popup_trans_pane_g8

0xabbf,	// (0x00085fc0) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x0008ad34) bg_popup_trans_pane_g

0xd6a9,	// (0x00088aaa) cell_image3_tool_bar_pane_ParamLimits

0xd6a9,	// (0x00088aaa) cell_image3_tool_bar_pane

0xcc1c,	// (0x0008801d) cell_image3_tool_bar_pane_g1

0x9ffc,	// (0x000853fd) bg_popup_trans_pane_cp1

0xd6bd,	// (0x00088abe) popup_image3_note_pane_t1

0xd6cb,	// (0x00088acc) popup_image3_note_pane_t2

0xd6d9,	// (0x00088ada) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x0008ad47) popup_image3_note_pane_t

0xd6e7,	// (0x00088ae8) popup_image3_note_pane_t3_copy1

0x7606,	// (0x00082a07) bg_myfav_hc_instruction_pane_ParamLimits

0x7606,	// (0x00082a07) bg_myfav_hc_instruction_pane

0x761e,	// (0x00082a1f) cell_myfav_contact_pane_ParamLimits

0x761e,	// (0x00082a1f) cell_myfav_contact_pane

0x7638,	// (0x00082a39) cell_myfav_contact_pane_cp1_ParamLimits

0x7638,	// (0x00082a39) cell_myfav_contact_pane_cp1

0x7650,	// (0x00082a51) cell_myfav_contact_pane_cp2_ParamLimits

0x7650,	// (0x00082a51) cell_myfav_contact_pane_cp2

0x7668,	// (0x00082a69) cell_myfav_contact_pane_cp3_ParamLimits

0x7668,	// (0x00082a69) cell_myfav_contact_pane_cp3

0x767f,	// (0x00082a80) cell_myfav_contact_pane_cp4_ParamLimits

0x767f,	// (0x00082a80) cell_myfav_contact_pane_cp4

0x7695,	// (0x00082a96) cell_myfav_contact_pane_cp5_ParamLimits

0x7695,	// (0x00082a96) cell_myfav_contact_pane_cp5

0x76a9,	// (0x00082aaa) cell_myfav_contact_pane_cp6_ParamLimits

0x76a9,	// (0x00082aaa) cell_myfav_contact_pane_cp6

0x76bd,	// (0x00082abe) cell_myfav_contact_pane_cp7_ParamLimits

0x76bd,	// (0x00082abe) cell_myfav_contact_pane_cp7

0xd6f5,	// (0x00088af6) listscroll_gen_pane_cp05

0x76d5,	// (0x00082ad6) main_myfav_hc_pane_g1_ParamLimits

0x76d5,	// (0x00082ad6) main_myfav_hc_pane_g1

0x76ed,	// (0x00082aee) main_myfav_hc_pane_g2_ParamLimits

0x76ed,	// (0x00082aee) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x0008ad4e) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x0008ad4e) main_myfav_hc_pane_g

0x771d,	// (0x00082b1e) main_myfav_hc_pane_t1_ParamLimits

0x771d,	// (0x00082b1e) main_myfav_hc_pane_t1

0xd6fe,	// (0x00088aff) main_myfav_hc_pane_t2_ParamLimits

0xd6fe,	// (0x00088aff) main_myfav_hc_pane_t2

0xd710,	// (0x00088b11) main_myfav_hc_pane_t3_ParamLimits

0xd710,	// (0x00088b11) main_myfav_hc_pane_t3

0x7734,	// (0x00082b35) main_myfav_hc_pane_t4_ParamLimits

0x7734,	// (0x00082b35) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x0008ad55) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x0008ad55) main_myfav_hc_pane_t

0xcc1c,	// (0x0008801d) bg_myfav_hc_instruction_pane_g1

0xd722,	// (0x00088b23) cell_myfav_contact_pane_g1_ParamLimits

0xd722,	// (0x00088b23) cell_myfav_contact_pane_g1

0xd722,	// (0x00088b23) cell_myfav_contact_pane_g2_ParamLimits

0xd722,	// (0x00088b23) cell_myfav_contact_pane_g2

0xd72e,	// (0x00088b2f) cell_myfav_contact_pane_g3_ParamLimits

0xd72e,	// (0x00088b2f) cell_myfav_contact_pane_g3

0xceed,	// (0x000882ee) cell_myfav_contact_pane_g4_ParamLimits

0xceed,	// (0x000882ee) cell_myfav_contact_pane_g4

0xd73b,	// (0x00088b3c) cell_myfav_contact_pane_g5_ParamLimits

0xd73b,	// (0x00088b3c) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x0008ad60) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x0008ad60) cell_myfav_contact_pane_g

0x7705,	// (0x00082b06) main_myfav_hc_pane_g3_ParamLimits

0x7705,	// (0x00082b06) main_myfav_hc_pane_g3

0x20d0,	// (0x0007d4d1) popup_adpt_find_window

0x775e,	// (0x00082b5f) afind_page_pane_ParamLimits

0x775e,	// (0x00082b5f) afind_page_pane

0x776b,	// (0x00082b6c) aid_size_cell_afind_ParamLimits

0x776b,	// (0x00082b6c) aid_size_cell_afind

0x7785,	// (0x00082b86) bg_popup_sub_pane_cp09_ParamLimits

0x7785,	// (0x00082b86) bg_popup_sub_pane_cp09

0x7792,	// (0x00082b93) find_pane_cp01_ParamLimits

0x7792,	// (0x00082b93) find_pane_cp01

0xd747,	// (0x00088b48) grid_afind_control_pane_ParamLimits

0xd747,	// (0x00088b48) grid_afind_control_pane

0x779f,	// (0x00082ba0) grid_afind_pane_ParamLimits

0x779f,	// (0x00082ba0) grid_afind_pane

0x77b9,	// (0x00082bba) cell_afind_pane_ParamLimits

0x77b9,	// (0x00082bba) cell_afind_pane

0xcc1c,	// (0x0008801d) afind_page_pane_g1

0x7801,	// (0x00082c02) afind_page_pane_g2

0x780a,	// (0x00082c0b) afind_page_pane_g3

0x0002,

0xf96a,	// (0x0008ad6b) afind_page_pane_g

0x7813,	// (0x00082c14) afind_page_pane_t1

0xd75b,	// (0x00088b5c) cell_afind_grid_control_pane_ParamLimits

0xd75b,	// (0x00088b5c) cell_afind_grid_control_pane

0xd533,	// (0x00088934) bg_button_pane_cp69_ParamLimits

0xd533,	// (0x00088934) bg_button_pane_cp69

0x7833,	// (0x00082c34) cell_afind_pane_g1_ParamLimits

0x7833,	// (0x00082c34) cell_afind_pane_g1

0x7840,	// (0x00082c41) cell_afind_pane_t1_ParamLimits

0x7840,	// (0x00082c41) cell_afind_pane_t1

0xa9d8,	// (0x00085dd9) bg_button_pane_cp72

0xd76a,	// (0x00088b6b) cell_afind_grid_control_pane_g1

0x4df7,	// (0x000801f8) aid_image_placing_area_ParamLimits

0x4df7,	// (0x000801f8) aid_image_placing_area

0xd201,	// (0x00088602) field_vitu_entry_pane_g1_ParamLimits

0xd201,	// (0x00088602) field_vitu_entry_pane_g1

0xd20d,	// (0x0008860e) field_vitu_entry_pane_g2_ParamLimits

0xd20d,	// (0x0008860e) field_vitu_entry_pane_g2

0x0001,

0xf81b,	// (0x0008ac1c) field_vitu_entry_pane_g_ParamLimits

0xf81b,	// (0x0008ac1c) field_vitu_entry_pane_g

0x69a8,	// (0x00081da9) cell_vitu_itu_pane_g1_ParamLimits

0x69f8,	// (0x00081df9) cell_vitu_itu_pane_t3_ParamLimits

0x69f8,	// (0x00081df9) cell_vitu_itu_pane_t3

0xd4e3,	// (0x000888e4) mp4_progress_pane_t1_ParamLimits

0xd4fc,	// (0x000888fd) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x0008acb1) mp4_progress_pane_t_ParamLimits

0xd515,	// (0x00088916) mup_progress_pane_cp04_ParamLimits

0x7748,	// (0x00082b49) main_myfav_hc_pane_t5_ParamLimits

0x7748,	// (0x00082b49) main_myfav_hc_pane_t5

0x0d03,	// (0x0007c104) aid_zoom_text_primary

0x20d0,	// (0x0007d4d1) popup_adpt_find_window_ParamLimits

0xa99d,	// (0x00085d9e) main_cam_set_pane

0x71d1,	// (0x000825d2) cam4_zoom_pane_ParamLimits

0x71d1,	// (0x000825d2) cam4_zoom_pane

0x7852,	// (0x00082c53) main_cam_set_pane_g1_ParamLimits

0x7852,	// (0x00082c53) main_cam_set_pane_g1

0x7860,	// (0x00082c61) main_cam_set_pane_g2_ParamLimits

0x7860,	// (0x00082c61) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x0008ad72) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x0008ad72) main_cam_set_pane_g

0x786c,	// (0x00082c6d) main_cam_set_pane_t1_ParamLimits

0x786c,	// (0x00082c6d) main_cam_set_pane_t1

0x7888,	// (0x00082c89) main_cset_listscroll_pane_ParamLimits

0x7888,	// (0x00082c89) main_cset_listscroll_pane

0x78b3,	// (0x00082cb4) main_cset_slider_pane_ParamLimits

0x78b3,	// (0x00082cb4) main_cset_slider_pane

0xd77b,	// (0x00088b7c) main_cset_list_pane_ParamLimits

0xd77b,	// (0x00088b7c) main_cset_list_pane

0xd78b,	// (0x00088b8c) scroll_pane_cp028

0x78d2,	// (0x00082cd3) aid_area_touch_slider

0x78ee,	// (0x00082cef) cset_slider_pane

0x7918,	// (0x00082d19) main_cset_slider_pane_g1

0x792d,	// (0x00082d2e) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x0008ad77) main_cset_slider_pane_g

0xd7e8,	// (0x00088be9) main_cset_slider_pane_t1

0x79f3,	// (0x00082df4) main_cset_slider_pane_t2

0x7a0d,	// (0x00082e0e) main_cset_slider_pane_t3

0x7a27,	// (0x00082e28) main_cset_slider_pane_t4

0x7a45,	// (0x00082e46) main_cset_slider_pane_t5

0x7a63,	// (0x00082e64) main_cset_slider_pane_t6

0x7a7a,	// (0x00082e7b) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x0008ad9c) main_cset_slider_pane_t

0x7b88,	// (0x00082f89) cset_list_set_pane_ParamLimits

0x7b88,	// (0x00082f89) cset_list_set_pane

0x7ba4,	// (0x00082fa5) aid_position_infowindow_above

0x7bac,	// (0x00082fad) aid_position_infowindow_below

0x7bb4,	// (0x00082fb5) cset_list_set_pane_g1_ParamLimits

0x7bb4,	// (0x00082fb5) cset_list_set_pane_g1

0x1156,	// (0x0007c557) cset_list_set_pane_g3_ParamLimits

0x1156,	// (0x0007c557) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x0008adbb) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x0008adbb) cset_list_set_pane_g

0x1165,	// (0x0007c566) cset_list_set_pane_t1_ParamLimits

0x1165,	// (0x0007c566) cset_list_set_pane_t1

0xa99d,	// (0x00085d9e) list_highlight_pane_cp021_ParamLimits

0xa99d,	// (0x00085d9e) list_highlight_pane_cp021

0xb546,	// (0x00086947) cset_slider_pane_g1

0xb558,	// (0x00086959) cset_slider_pane_g2

0xb54f,	// (0x00086950) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x0008adc0) cset_slider_pane_g

0x7bc0,	// (0x00082fc1) aid_area_touch_cam4_zoom

0x7bc8,	// (0x00082fc9) cam4_zoom_cont_pane

0x7bd0,	// (0x00082fd1) cam4_zoom_pane_g1

0x7bd8,	// (0x00082fd9) cam4_zoom_pane_g2

0x7be0,	// (0x00082fe1) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x0008adc7) cam4_zoom_pane_g

0xe018,	// (0x00089419) cam4_zoom_cont_pane_g1

0xe021,	// (0x00089422) cam4_zoom_cont_pane_g2

0xe02a,	// (0x0008942b) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x0008adce) cam4_zoom_cont_pane_g

0x70be,	// (0x000824bf) call4_image_pane_ParamLimits

0x70be,	// (0x000824bf) call4_image_pane

0xd53f,	// (0x00088940) call4_windows_conf_pane_ParamLimits

0xd57e,	// (0x0008897f) popup_call4_audio_in_window_ParamLimits

0xd57e,	// (0x0008897f) popup_call4_audio_in_window

0x9ffc,	// (0x000853fd) bg_popup_call2_act_pane_cp02

0xd5f4,	// (0x000889f5) call4_list_conf_pane

0xcc1c,	// (0x0008801d) call4_image_pane_g1

0xcc1c,	// (0x0008801d) call4_image_pane_g2

0x0001,

0xf6e1,	// (0x0008aae2) call4_image_pane_g

0xd888,	// (0x00088c89) list_single_graphic_popup_conf4_pane_ParamLimits

0xd888,	// (0x00088c89) list_single_graphic_popup_conf4_pane

0x9ffc,	// (0x000853fd) list_highlight_pane_cp022

0xd89b,	// (0x00088c9c) list_single_graphic_popup_conf4_pane_g1

0xb119,	// (0x0008651a) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x0008add5) list_single_graphic_popup_conf4_pane_g

0xd8a3,	// (0x00088ca4) list_single_graphic_popup_conf4_pane_t1

0x3174,	// (0x0007e575) popup_vtel_slider_window_ParamLimits

0x3174,	// (0x0007e575) popup_vtel_slider_window

0xd521,	// (0x00088922) dialer2_ne_pane_t2_ParamLimits

0xd521,	// (0x00088922) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x0008acb6) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x0008acb6) dialer2_ne_pane_t

0xa99d,	// (0x00085d9e) bg_popup_sub_pane_cp010_ParamLimits

0xa99d,	// (0x00085d9e) bg_popup_sub_pane_cp010

0x7be8,	// (0x00082fe9) popup_vtel_slider_window_g1_ParamLimits

0x7be8,	// (0x00082fe9) popup_vtel_slider_window_g1

0x7bf4,	// (0x00082ff5) popup_vtel_slider_window_g2_ParamLimits

0x7bf4,	// (0x00082ff5) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x0008adda) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x0008adda) popup_vtel_slider_window_g

0x7c3c,	// (0x0008303d) vtel_slider_pane_ParamLimits

0x7c3c,	// (0x0008303d) vtel_slider_pane

0x7c4b,	// (0x0008304c) vtel_slider_pane_g1_ParamLimits

0x7c4b,	// (0x0008304c) vtel_slider_pane_g1

0x7c58,	// (0x00083059) vtel_slider_pane_g2_ParamLimits

0x7c58,	// (0x00083059) vtel_slider_pane_g2

0x7c65,	// (0x00083066) vtel_slider_pane_g3_ParamLimits

0x7c65,	// (0x00083066) vtel_slider_pane_g3

0x7c4b,	// (0x0008304c) vtel_slider_pane_g4_ParamLimits

0x7c4b,	// (0x0008304c) vtel_slider_pane_g4

0x7c72,	// (0x00083073) vtel_slider_pane_g5_ParamLimits

0x7c72,	// (0x00083073) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x0008ade3) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x0008ade3) vtel_slider_pane_g

0xa99d,	// (0x00085d9e) main_gallery2_pane

0x7421,	// (0x00082822) aid_size_row_itut2_dropdow_list_ParamLimits

0x7421,	// (0x00082822) aid_size_row_itut2_dropdow_list

0x7481,	// (0x00082882) grid_vitu2_function_top_pane_ParamLimits

0x7481,	// (0x00082882) grid_vitu2_function_top_pane

0x74d7,	// (0x000828d8) popup_vitu2_dropdown_list_window_ParamLimits

0x74d7,	// (0x000828d8) popup_vitu2_dropdown_list_window

0x74f7,	// (0x000828f8) popup_vitu2_match_list_window

0x7c7f,	// (0x00083080) cell_vitu2_function_top_pane_ParamLimits

0x7c7f,	// (0x00083080) cell_vitu2_function_top_pane

0x7c9f,	// (0x000830a0) cell_vitu2_function_top_pane_cp01_ParamLimits

0x7c9f,	// (0x000830a0) cell_vitu2_function_top_pane_cp01

0x7cbd,	// (0x000830be) cell_vitu2_function_top_wide_pane_ParamLimits

0x7cbd,	// (0x000830be) cell_vitu2_function_top_wide_pane

0xa99d,	// (0x00085d9e) bg_button_pane_cp012

0x7cdb,	// (0x000830dc) cell_vitu2_function_top_pane_g1

0x7cef,	// (0x000830f0) bg_button_pane_cp013_ParamLimits

0x7cef,	// (0x000830f0) bg_button_pane_cp013

0x7d0b,	// (0x0008310c) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x7d0b,	// (0x0008310c) cell_vitu2_function_top_wide_pane_g1

0xed32,	// (0x0008a133) bg_popup_sub_pane_cp20

0x7d23,	// (0x00083124) list_vitu2_match_list_pane

0xd671,	// (0x00088a72) bg_popup_sub_pane_cp20_g1

0xd679,	// (0x00088a7a) bg_popup_sub_pane_cp20_g2

0xabdf,	// (0x00085fe0) bg_popup_sub_pane_cp20_g3

0xd681,	// (0x00088a82) bg_popup_sub_pane_cp20_g4

0xabbf,	// (0x00085fc0) bg_popup_sub_pane_cp20_g5

0xd8b9,	// (0x00088cba) bg_popup_sub_pane_cp20_g6

0xd691,	// (0x00088a92) bg_popup_sub_pane_cp20_g7

0xd699,	// (0x00088a9a) bg_popup_sub_pane_cp20_g8

0xd6a1,	// (0x00088aa2) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x0008adee) bg_popup_sub_pane_cp20_g

0x7d3b,	// (0x0008313c) list_vitu2_match_list_item_pane_ParamLimits

0x7d3b,	// (0x0008313c) list_vitu2_match_list_item_pane

0x7d4d,	// (0x0008314e) list_vitu2_match_list_item_pane_t1

0x9ffc,	// (0x000853fd) bg_popup_sub_pane_cp21

0xb01d,	// (0x0008641e) grid_vitu2_dropdown_list_pane

0x7d67,	// (0x00083168) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x7d67,	// (0x00083168) cell_vitu2_dropdown_list_char_pane

0x7d88,	// (0x00083189) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x7d88,	// (0x00083189) cell_vitu2_dropdown_list_ctrl_pane

0xd8c1,	// (0x00088cc2) cell_vitu2_dropdown_list_char_pane_g1

0xd8ca,	// (0x00088ccb) cell_vitu2_dropdown_list_char_pane_g2

0xd8d3,	// (0x00088cd4) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x0008ae0b) cell_vitu2_dropdown_list_char_pane_g

0x7db4,	// (0x000831b5) cell_vitu2_dropdown_list_char_pane_t1

0x7dc2,	// (0x000831c3) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x7dc2,	// (0x000831c3) cell_vitu2_dropdown_list_ctrl_pane_g1

0x7dd2,	// (0x000831d3) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x7dd2,	// (0x000831d3) cell_vitu2_dropdown_list_ctrl_pane_g2

0x7de3,	// (0x000831e4) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x7de3,	// (0x000831e4) cell_vitu2_dropdown_list_ctrl_pane_g3

0x7df3,	// (0x000831f4) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x7df3,	// (0x000831f4) cell_vitu2_dropdown_list_ctrl_pane_g4

0xce88,	// (0x00088289) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xce88,	// (0x00088289) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x0008ae12) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x0008ae12) cell_vitu2_dropdown_list_ctrl_pane_g

0x7e0f,	// (0x00083210) aid_size_cell_gallery2_ParamLimits

0x7e0f,	// (0x00083210) aid_size_cell_gallery2

0x7e29,	// (0x0008322a) grid_gallery2_pane_ParamLimits

0x7e29,	// (0x0008322a) grid_gallery2_pane

0x6829,	// (0x00081c2a) scroll_pane_cp029_ParamLimits

0x6829,	// (0x00081c2a) scroll_pane_cp029

0x7e40,	// (0x00083241) cell_gallery2_pane_ParamLimits

0x7e40,	// (0x00083241) cell_gallery2_pane

0xd8dc,	// (0x00088cdd) cell_gallery2_pane_g2

0x7e95,	// (0x00083296) cell_gallery2_pane_g3

0xd8e4,	// (0x00088ce5) cell_gallery2_pane_g4

0xd8ec,	// (0x00088ced) cell_gallery2_pane_g5

0xb404,	// (0x00086805) grid_highlight_pane_cp10

0x74f7,	// (0x000828f8) popup_vitu2_match_list_window_ParamLimits

0x7509,	// (0x0008290a) popup_vitu2_query_window_ParamLimits

0x7509,	// (0x0008290a) popup_vitu2_query_window

0x9ffc,	// (0x000853fd) bg_vitu2_candi_button_pane

0xd8c1,	// (0x00088cc2) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd8ca,	// (0x00088ccb) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd8d3,	// (0x00088cd4) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x11c0,	// (0x0007c5c1) bg_button_pane_cp015

0x7e9d,	// (0x0008329e) bg_button_pane_cp016

0x7eb0,	// (0x000832b1) bg_button_pane_cp017

0xc812,	// (0x00087c13) bg_popup_sub_pane_cp22

0xd8f4,	// (0x00088cf5) popup_vitu2_query_window_g1

0x7ed4,	// (0x000832d5) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x0008ae1d) popup_vitu2_query_window_g

0x11f3,	// (0x0007c5f4) popup_vitu2_query_window_t1_ParamLimits

0x11f3,	// (0x0007c5f4) popup_vitu2_query_window_t1

0x1226,	// (0x0007c627) popup_vitu2_query_window_t2_ParamLimits

0x1226,	// (0x0007c627) popup_vitu2_query_window_t2

0x1238,	// (0x0007c639) popup_vitu2_query_window_t3_ParamLimits

0x1238,	// (0x0007c639) popup_vitu2_query_window_t3

0x7ef1,	// (0x000832f2) popup_vitu2_query_window_t4_ParamLimits

0x7ef1,	// (0x000832f2) popup_vitu2_query_window_t4

0x7f12,	// (0x00083313) popup_vitu2_query_window_t5_ParamLimits

0x7f12,	// (0x00083313) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x0008ae24) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x0008ae24) popup_vitu2_query_window_t

0xd773,	// (0x00088b74) main_cset_text_pane

0x78d2,	// (0x00082cd3) aid_area_touch_slider_ParamLimits

0x78ee,	// (0x00082cef) cset_slider_pane_ParamLimits

0x7918,	// (0x00082d19) main_cset_slider_pane_g1_ParamLimits

0x792d,	// (0x00082d2e) main_cset_slider_pane_g2_ParamLimits

0xd794,	// (0x00088b95) main_cset_slider_pane_g3_ParamLimits

0xd794,	// (0x00088b95) main_cset_slider_pane_g3

0x7942,	// (0x00082d43) main_cset_slider_pane_g4_ParamLimits

0x7942,	// (0x00082d43) main_cset_slider_pane_g4

0x7951,	// (0x00082d52) main_cset_slider_pane_g5_ParamLimits

0x7951,	// (0x00082d52) main_cset_slider_pane_g5

0x795f,	// (0x00082d60) main_cset_slider_pane_g6_ParamLimits

0x795f,	// (0x00082d60) main_cset_slider_pane_g6

0xf976,	// (0x0008ad77) main_cset_slider_pane_g_ParamLimits

0xd7e8,	// (0x00088be9) main_cset_slider_pane_t1_ParamLimits

0x79f3,	// (0x00082df4) main_cset_slider_pane_t2_ParamLimits

0x7a0d,	// (0x00082e0e) main_cset_slider_pane_t3_ParamLimits

0x7a27,	// (0x00082e28) main_cset_slider_pane_t4_ParamLimits

0x7a45,	// (0x00082e46) main_cset_slider_pane_t5_ParamLimits

0x7a63,	// (0x00082e64) main_cset_slider_pane_t6_ParamLimits

0x7a7a,	// (0x00082e7b) main_cset_slider_pane_t7_ParamLimits

0x7aa8,	// (0x00082ea9) main_cset_slider_pane_t8_ParamLimits

0x7aa8,	// (0x00082ea9) main_cset_slider_pane_t8

0x7ad0,	// (0x00082ed1) main_cset_slider_pane_t9_ParamLimits

0x7ad0,	// (0x00082ed1) main_cset_slider_pane_t9

0x7af8,	// (0x00082ef9) main_cset_slider_pane_t10_ParamLimits

0x7af8,	// (0x00082ef9) main_cset_slider_pane_t10

0x7b20,	// (0x00082f21) main_cset_slider_pane_t11_ParamLimits

0x7b20,	// (0x00082f21) main_cset_slider_pane_t11

0x7b4a,	// (0x00082f4b) main_cset_slider_pane_t12_ParamLimits

0x7b4a,	// (0x00082f4b) main_cset_slider_pane_t12

0x7b69,	// (0x00082f6a) main_cset_slider_pane_t13_ParamLimits

0x7b69,	// (0x00082f6a) main_cset_slider_pane_t13

0xf99b,	// (0x0008ad9c) main_cset_slider_pane_t_ParamLimits

0x9ffc,	// (0x000853fd) bg_popup_sub_pane_cp011

0xd900,	// (0x00088d01) main_cset_text_pane_g1

0xd908,	// (0x00088d09) main_cset_text_pane_t1

0xd916,	// (0x00088d17) main_cset_text_pane_t2

0xd924,	// (0x00088d25) main_cset_text_pane_t3

0xd932,	// (0x00088d33) main_cset_text_pane_t4

0xd940,	// (0x00088d41) main_cset_text_pane_t5

0xd94e,	// (0x00088d4f) main_cset_text_pane_t6

0xd95c,	// (0x00088d5d) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x0008ae33) main_cset_text_pane_t

0x9ffc,	// (0x000853fd) main_cam4_burst_pane

0x9ffc,	// (0x000853fd) main_cam5_pane

0x7821,	// (0x00082c22) bg_button_pane_cp019

0x782a,	// (0x00082c2b) bg_button_pane_cp020

0xd7c4,	// (0x00088bc5) main_cset_slider_pane_g7_ParamLimits

0xd7c4,	// (0x00088bc5) main_cset_slider_pane_g7

0xd7d0,	// (0x00088bd1) main_cset_slider_pane_g8_ParamLimits

0xd7d0,	// (0x00088bd1) main_cset_slider_pane_g8

0x7973,	// (0x00082d74) main_cset_slider_pane_g9_ParamLimits

0x7973,	// (0x00082d74) main_cset_slider_pane_g9

0x797f,	// (0x00082d80) main_cset_slider_pane_g10_ParamLimits

0x797f,	// (0x00082d80) main_cset_slider_pane_g10

0x798b,	// (0x00082d8c) main_cset_slider_pane_g11_ParamLimits

0x798b,	// (0x00082d8c) main_cset_slider_pane_g11

0x7997,	// (0x00082d98) main_cset_slider_pane_g12_ParamLimits

0x7997,	// (0x00082d98) main_cset_slider_pane_g12

0x79a3,	// (0x00082da4) main_cset_slider_pane_g13_ParamLimits

0x79a3,	// (0x00082da4) main_cset_slider_pane_g13

0x79b1,	// (0x00082db2) main_cset_slider_pane_g14_ParamLimits

0x79b1,	// (0x00082db2) main_cset_slider_pane_g14

0x79bf,	// (0x00082dc0) main_cset_slider_pane_g15_ParamLimits

0x79bf,	// (0x00082dc0) main_cset_slider_pane_g15

0xd816,	// (0x00088c17) main_cset_slider_pane_t14_ParamLimits

0xd816,	// (0x00088c17) main_cset_slider_pane_t14

0xd84f,	// (0x00088c50) main_cset_slider_pane_t15_ParamLimits

0xd84f,	// (0x00088c50) main_cset_slider_pane_t15

0x7f89,	// (0x0008338a) aid_cam4_burst_size_cell_ParamLimits

0x7f89,	// (0x0008338a) aid_cam4_burst_size_cell

0x7fa5,	// (0x000833a6) grid_cam4_burst_pane_ParamLimits

0x7fa5,	// (0x000833a6) grid_cam4_burst_pane

0x7fd5,	// (0x000833d6) linegrid_cam4_burst_pane_ParamLimits

0x7fd5,	// (0x000833d6) linegrid_cam4_burst_pane

0x7ff7,	// (0x000833f8) scroll_pane_cp30_ParamLimits

0x7ff7,	// (0x000833f8) scroll_pane_cp30

0x8003,	// (0x00083404) cell_cam4_burst_pane_ParamLimits

0x8003,	// (0x00083404) cell_cam4_burst_pane

0xd96a,	// (0x00088d6b) linegrid_cam4_burst_pane_g1_ParamLimits

0xd96a,	// (0x00088d6b) linegrid_cam4_burst_pane_g1

0x803f,	// (0x00083440) linegrid_cam4_burst_pane_g2_ParamLimits

0x803f,	// (0x00083440) linegrid_cam4_burst_pane_g2

0xd977,	// (0x00088d78) linegrid_cam4_burst_pane_g3_ParamLimits

0xd977,	// (0x00088d78) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x0008ae42) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x0008ae42) linegrid_cam4_burst_pane_g

0x8050,	// (0x00083451) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x8050,	// (0x00083451) linegrid_cam4_burst_pane_g3_copy1

0xd984,	// (0x00088d85) linegrid_cam4_burst_pane_g4_ParamLimits

0xd984,	// (0x00088d85) linegrid_cam4_burst_pane_g4

0x806a,	// (0x0008346b) linegrid_cam4_burst_pane_g5_ParamLimits

0x806a,	// (0x0008346b) linegrid_cam4_burst_pane_g5

0x807b,	// (0x0008347c) linegrid_cam4_burst_pane_g6_ParamLimits

0x807b,	// (0x0008347c) linegrid_cam4_burst_pane_g6

0xd991,	// (0x00088d92) linegrid_cam4_burst_pane_g7_ParamLimits

0xd991,	// (0x00088d92) linegrid_cam4_burst_pane_g7

0x808c,	// (0x0008348d) cell_cam4_burst_pane_g1

0xd9aa,	// (0x00088dab) main_cam5_pane_t1_ParamLimits

0xd9aa,	// (0x00088dab) main_cam5_pane_t1

0xd9bc,	// (0x00088dbd) main_cam5_pane_t2_ParamLimits

0xd9bc,	// (0x00088dbd) main_cam5_pane_t2

0xd9ce,	// (0x00088dcf) main_cam5_pane_t3_ParamLimits

0xd9ce,	// (0x00088dcf) main_cam5_pane_t3

0xd9e0,	// (0x00088de1) main_cam5_pane_t4_ParamLimits

0xd9e0,	// (0x00088de1) main_cam5_pane_t4

0xd9f8,	// (0x00088df9) main_cam5_pane_t5_ParamLimits

0xd9f8,	// (0x00088df9) main_cam5_pane_t5

0xda0c,	// (0x00088e0d) main_cam5_pane_t6_ParamLimits

0xda0c,	// (0x00088e0d) main_cam5_pane_t6

0xda20,	// (0x00088e21) main_cam5_pane_t7_ParamLimits

0xda20,	// (0x00088e21) main_cam5_pane_t7

0xda32,	// (0x00088e33) main_cam5_pane_t8_ParamLimits

0xda32,	// (0x00088e33) main_cam5_pane_t8

0xda4e,	// (0x00088e4f) main_cam5_pane_t9_ParamLimits

0xda4e,	// (0x00088e4f) main_cam5_pane_t9

0xda60,	// (0x00088e61) main_cam5_pane_t10_ParamLimits

0xda60,	// (0x00088e61) main_cam5_pane_t10

0xda72,	// (0x00088e73) main_cam5_pane_t11_ParamLimits

0xda72,	// (0x00088e73) main_cam5_pane_t11

0xda84,	// (0x00088e85) main_cam5_pane_t12_ParamLimits

0xda84,	// (0x00088e85) main_cam5_pane_t12

0xda99,	// (0x00088e9a) main_cam5_pane_t13_ParamLimits

0xda99,	// (0x00088e9a) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x0008ae4e) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x0008ae4e) main_cam5_pane_t

0x2186,	// (0x0007d587) popup_scut_keymap_window_ParamLimits

0x2186,	// (0x0007d587) popup_scut_keymap_window

0x80a1,	// (0x000834a2) aid_size_cell_brow_shortcut

0xb404,	// (0x00086805) bg_popup_window_pane_cp010

0x80ad,	// (0x000834ae) grid_scut_pane

0x80b9,	// (0x000834ba) cell_scut_pane_ParamLimits

0x80b9,	// (0x000834ba) cell_scut_pane

0x80d0,	// (0x000834d1) cell_scut_pane_g1

0xdab6,	// (0x00088eb7) cell_scut_pane_t1

0xdac5,	// (0x00088ec6) cell_scut_pane_t2

0x80d9,	// (0x000834da) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x0008ae69) cell_scut_pane_t

0x6009,	// (0x0008140a) main_mup3_pane_g8_ParamLimits

0x6009,	// (0x0008140a) main_mup3_pane_g8

0x742f,	// (0x00082830) area_vitu2_query_pane_ParamLimits

0x742f,	// (0x00082830) area_vitu2_query_pane

0x11d2,	// (0x0007c5d3) input_focus_pane_cp08

0xdad4,	// (0x00088ed5) area_vitu2_query_pane_g1

0x1260,	// (0x0007c661) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x0008ae70) area_vitu2_query_pane_g

0x80e7,	// (0x000834e8) area_vitu2_query_pane_t1_ParamLimits

0x80e7,	// (0x000834e8) area_vitu2_query_pane_t1

0x80fb,	// (0x000834fc) area_vitu2_query_pane_t2_ParamLimits

0x80fb,	// (0x000834fc) area_vitu2_query_pane_t2

0x1271,	// (0x0007c672) area_vitu2_query_pane_t3_ParamLimits

0x1271,	// (0x0007c672) area_vitu2_query_pane_t3

0x1299,	// (0x0007c69a) area_vitu2_query_pane_t4_ParamLimits

0x1299,	// (0x0007c69a) area_vitu2_query_pane_t4

0x12c1,	// (0x0007c6c2) area_vitu2_query_pane_t5_ParamLimits

0x12c1,	// (0x0007c6c2) area_vitu2_query_pane_t5

0x12e9,	// (0x0007c6ea) area_vitu2_query_pane_t6_ParamLimits

0x12e9,	// (0x0007c6ea) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x0008ae75) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x0008ae75) area_vitu2_query_pane_t

0x810f,	// (0x00083510) bg_button_pane_cp018

0x811d,	// (0x0008351e) bg_button_pane_cp021

0x1335,	// (0x0007c736) bg_button_pane_cp022

0x1346,	// (0x0007c747) input_focus_pane_cp09

0xb23d,	// (0x0008663e) aid_size_touch_mv_arrow_left

0xb276,	// (0x00086677) aid_size_touch_mv_arrow_right

0x79d7,	// (0x00082dd8) main_cset_slider_pane_g16_ParamLimits

0x79d7,	// (0x00082dd8) main_cset_slider_pane_g16

0x79e5,	// (0x00082de6) main_cset_slider_pane_g17_ParamLimits

0x79e5,	// (0x00082de6) main_cset_slider_pane_g17

0x808c,	// (0x0008348d) cell_cam4_burst_pane_g1_ParamLimits

0x9ffc,	// (0x000853fd) compa_mode_pane

0x7c00,	// (0x00083001) popup_vtel_slider_window_g3_ParamLimits

0x7c00,	// (0x00083001) popup_vtel_slider_window_g3

0x7c14,	// (0x00083015) popup_vtel_slider_window_g4_ParamLimits

0x7c14,	// (0x00083015) popup_vtel_slider_window_g4

0x7c28,	// (0x00083029) popup_vtel_slider_window_t1_ParamLimits

0x7c28,	// (0x00083029) popup_vtel_slider_window_t1

0x9ffc,	// (0x000853fd) main_cl_pane

0x5309,	// (0x0008070a) popup_imed_adjust2_window_ParamLimits

0xc812,	// (0x00087c13) bg_tb_trans_pane_cp05_ParamLimits

0xd12d,	// (0x0008852e) popup_imed_adjust2_window_g1_ParamLimits

0xd13c,	// (0x0008853d) popup_imed_adjust2_window_g2_ParamLimits

0xd13c,	// (0x0008853d) popup_imed_adjust2_window_g2

0xd148,	// (0x00088549) popup_imed_adjust2_window_g3_ParamLimits

0xd148,	// (0x00088549) popup_imed_adjust2_window_g3

0x0002,

0xf7df,	// (0x0008abe0) popup_imed_adjust2_window_g_ParamLimits

0xf7df,	// (0x0008abe0) popup_imed_adjust2_window_g

0xd154,	// (0x00088555) popup_imed_adjust2_window_t1_ParamLimits

0xd16c,	// (0x0008856d) slider_imed_adjust_pane_ParamLimits

0xd180,	// (0x00088581) slider_imed_adjust_pane_g1_ParamLimits

0xd190,	// (0x00088591) slider_imed_adjust_pane_g2_ParamLimits

0xd1a0,	// (0x000885a1) slider_imed_adjust_pane_g3_ParamLimits

0xd1b1,	// (0x000885b2) slider_imed_adjust_pane_g4_ParamLimits

0xf7e6,	// (0x0008abe7) slider_imed_adjust_pane_g_ParamLimits

0x717a,	// (0x0008257b) aid_touch_area_cam4_ParamLimits

0x717a,	// (0x0008257b) aid_touch_area_cam4

0x718a,	// (0x0008258b) battery_pane_cp01

0x7211,	// (0x00082612) main_camera4_pane_g6_ParamLimits

0x7211,	// (0x00082612) main_camera4_pane_g6

0x722f,	// (0x00082630) main_camera4_pane_t2_ParamLimits

0x722f,	// (0x00082630) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x0008acea) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x0008acea) main_camera4_pane_t

0x72b6,	// (0x000826b7) aid_touch_area_vid4_ParamLimits

0x72b6,	// (0x000826b7) aid_touch_area_vid4

0x72f6,	// (0x000826f7) main_video4_pane_g5_ParamLimits

0x72f6,	// (0x000826f7) main_video4_pane_g5

0x731a,	// (0x0008271b) vid4_progress_pane_ParamLimits

0x731a,	// (0x0008271b) vid4_progress_pane

0xd7dc,	// (0x00088bdd) main_cset_slider_pane_g18_ParamLimits

0xd7dc,	// (0x00088bdd) main_cset_slider_pane_g18

0xd99e,	// (0x00088d9f) cell_cam4_burst_pane_g2_ParamLimits

0xd99e,	// (0x00088d9f) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x0008ae49) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x0008ae49) cell_cam4_burst_pane_g

0x8129,	// (0x0008352a) bg_cl_pane_ParamLimits

0x8129,	// (0x0008352a) bg_cl_pane

0x8135,	// (0x00083536) cl_header_pane_ParamLimits

0x8135,	// (0x00083536) cl_header_pane

0x8141,	// (0x00083542) cl_listscroll_pane_ParamLimits

0x8141,	// (0x00083542) cl_listscroll_pane

0xdae0,	// (0x00088ee1) bg_cl_pane_g1

0xdae8,	// (0x00088ee9) bg_cl_pane_g2

0xdaf0,	// (0x00088ef1) bg_cl_pane_g3

0xdaf8,	// (0x00088ef9) bg_cl_pane_g4

0xdb0c,	// (0x00088f0d) bg_cl_pane_g5

0xdb14,	// (0x00088f15) bg_cl_pane_g6

0xdb1c,	// (0x00088f1d) bg_cl_pane_g7

0xdb24,	// (0x00088f25) bg_cl_pane_g8

0xdb2c,	// (0x00088f2d) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x0008ae84) bg_cl_pane_g

0x814d,	// (0x0008354e) aid_height_cl_leading_ParamLimits

0x814d,	// (0x0008354e) aid_height_cl_leading

0x8159,	// (0x0008355a) aid_height_cl_text_ParamLimits

0x8159,	// (0x0008355a) aid_height_cl_text

0xed32,	// (0x0008a133) bg_cl_header_pane_ParamLimits

0xed32,	// (0x0008a133) bg_cl_header_pane

0x8171,	// (0x00083572) cl_header_pane_g1_ParamLimits

0x8171,	// (0x00083572) cl_header_pane_g1

0x817e,	// (0x0008357f) cl_header_pane_t1_ParamLimits

0x817e,	// (0x0008357f) cl_header_pane_t1

0xdb34,	// (0x00088f35) cl_list_pane

0xd78b,	// (0x00088b8c) hc_scroll_pane_cp01

0xabbf,	// (0x00085fc0) bg_cl_header_pane_g1

0xd671,	// (0x00088a72) bg_cl_header_pane_g2

0xabdf,	// (0x00085fe0) bg_cl_header_pane_g3

0xd681,	// (0x00088a82) bg_cl_header_pane_g4

0xd679,	// (0x00088a7a) bg_cl_header_pane_g5

0xd8b9,	// (0x00088cba) bg_cl_header_pane_g6

0xd699,	// (0x00088a9a) bg_cl_header_pane_g7

0xd6a1,	// (0x00088aa2) bg_cl_header_pane_g8

0xd691,	// (0x00088a92) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x0008ae97) bg_cl_header_pane_g

0x8190,	// (0x00083591) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x8190,	// (0x00083591) hc_cl_list_double_graphic_heading_pane

0x81a4,	// (0x000835a5) hc_cl_list_single_graphic_pane_ParamLimits

0x81a4,	// (0x000835a5) hc_cl_list_single_graphic_pane

0x81be,	// (0x000835bf) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x81be,	// (0x000835bf) hc_cl_list_single_graphic_pane_g1

0x81ca,	// (0x000835cb) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x81ca,	// (0x000835cb) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x0008aeaa) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x0008aeaa) hc_cl_list_single_graphic_pane_g

0x81de,	// (0x000835df) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x81de,	// (0x000835df) hc_cl_list_single_graphic_pane_t1

0x81be,	// (0x000835bf) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x81be,	// (0x000835bf) hc_cl_list_double_graphic_heading_pane_g1

0x81f3,	// (0x000835f4) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x81f3,	// (0x000835f4) hc_cl_list_double_graphic_heading_pane_g2

0x8207,	// (0x00083608) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x8207,	// (0x00083608) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x0008aeaf) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x0008aeaf) hc_cl_list_double_graphic_heading_pane_g

0x821b,	// (0x0008361c) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x821b,	// (0x0008361c) hc_cl_list_double_graphic_heading_pane_t1

0x8230,	// (0x00083631) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x8230,	// (0x00083631) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x0008aeb6) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x0008aeb6) hc_cl_list_double_graphic_heading_pane_t

0x824d,	// (0x0008364e) vid4_progress_pane_g1

0x825f,	// (0x00083660) vid4_progress_pane_g2

0x4b40,	// (0x0007ff41) vid4_progress_pane_g3

0x826f,	// (0x00083670) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x0008aebb) vid4_progress_pane_g

0x828d,	// (0x0008368e) vid4_progress_pane_t1

0x82a2,	// (0x000836a3) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x0008aec6) vid4_progress_pane_t

0x82ce,	// (0x000836cf) wait_bar_pane_cp07

0xca0d,	// (0x00087e0e) blid_firmament_pane_ParamLimits

0xca50,	// (0x00087e51) popup_blid_sat_info2_window_g1

0xca74,	// (0x00087e75) popup_blid_sat_info2_window_t3

0xca82,	// (0x00087e83) popup_blid_sat_info2_window_t4

0xca90,	// (0x00087e91) popup_blid_sat_info2_window_t5

0xca9e,	// (0x00087e9f) popup_blid_sat_info2_window_t6

0xcaae,	// (0x00087eaf) popup_blid_sat_info2_window_t7

0xcabc,	// (0x00087ebd) popup_blid_sat_info2_window_t8

0xcaca,	// (0x00087ecb) popup_blid_sat_info2_window_t9

0xcad8,	// (0x00087ed9) popup_blid_sat_info2_window_t10

0xcb9c,	// (0x00087f9d) aid_firma_cardinal_ParamLimits

0xcbb0,	// (0x00087fb1) blid_firmament_pane_t1_ParamLimits

0xcbc7,	// (0x00087fc8) blid_firmament_pane_t2_ParamLimits

0xcbde,	// (0x00087fdf) blid_firmament_pane_t3_ParamLimits

0xcbf5,	// (0x00087ff6) blid_firmament_pane_t4_ParamLimits

0xf6d8,	// (0x0008aad9) blid_firmament_pane_t_ParamLimits

0xcc0c,	// (0x0008800d) blid_sat_info_pane_ParamLimits

0xa99d,	// (0x00085d9e) main_cam_set_pane_ParamLimits

0x67c2,	// (0x00081bc3) aid_size_cell_colour_35_ParamLimits

0x67dc,	// (0x00081bdd) aid_size_cell_colour_112_ParamLimits

0x67f3,	// (0x00081bf4) aid_size_cell_effect_ParamLimits

0xa99d,	// (0x00085d9e) bg_tb_trans_pane_cp02_ParamLimits

0xb40c,	// (0x0008680d) heading_imed_pane_ParamLimits

0x680d,	// (0x00081c0e) listscroll_imed_pane_ParamLimits

0xbe38,	// (0x00087239) popup_call2_audio_first_window_g5_ParamLimits

0xbe38,	// (0x00087239) popup_call2_audio_first_window_g5

0x6f37,	// (0x00082338) aid_size_touch_image3_arrow_left_ParamLimits

0x6f37,	// (0x00082338) aid_size_touch_image3_arrow_left

0x6f4d,	// (0x0008234e) aid_size_touch_image3_arrow_right_ParamLimits

0x6f4d,	// (0x0008234e) aid_size_touch_image3_arrow_right

0x82b8,	// (0x000836b9) vid4_progress_pane_t3

0x6ac1,	// (0x00081ec2) main_hwr_training_symbol_option_pane_ParamLimits

0x6ac1,	// (0x00081ec2) main_hwr_training_symbol_option_pane

0xd423,	// (0x00088824) popup_hwr_training_preview_window_ParamLimits

0xd423,	// (0x00088824) popup_hwr_training_preview_window

0x6b22,	// (0x00081f23) hwr_training_navi_pane_g5_ParamLimits

0x6b22,	// (0x00081f23) hwr_training_navi_pane_g5

0xd65f,	// (0x00088a60) popup_char_count_window

0xed32,	// (0x0008a133) bg_popup_sub_pane_cp20_ParamLimits

0x7d23,	// (0x00083124) list_vitu2_match_list_pane_ParamLimits

0x7d2f,	// (0x00083130) vitu2_page_scroll_pane_ParamLimits

0x7d2f,	// (0x00083130) vitu2_page_scroll_pane

0xdb3d,	// (0x00088f3e) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdb3d,	// (0x00088f3e) list_single_hwr_training_symbol_option_pane

0xdb50,	// (0x00088f51) list_single_hwr_training_symbol_option_pane_g1

0xdb58,	// (0x00088f59) list_single_hwr_training_symbol_option_pane_t1

0xdb66,	// (0x00088f67) bg_button_pane_cp023

0xdb6f,	// (0x00088f70) bg_button_pane_cp024

0x8313,	// (0x00083714) vitu2_page_scroll_pane_g1

0x831b,	// (0x0008371c) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x0008aecd) vitu2_page_scroll_pane_g

0x8323,	// (0x00083724) vitu2_page_scroll_pane_t1

0xd1dd,	// (0x000885de) popup_char_count_window_g1

0xdba2,	// (0x00088fa3) popup_char_count_window_g2

0xdbab,	// (0x00088fac) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x0008aed2) popup_char_count_window_g

0xdbb4,	// (0x00088fb5) popup_char_count_window_t1

0x9ffc,	// (0x000853fd) main_vded2_pane

0xd119,	// (0x0008851a) aid_size_cell_imed_line

0xd123,	// (0x00088524) grid_imed_line_width_pane

0x7386,	// (0x00082787) vid4_indicators_pane_g4

0xdbc2,	// (0x00088fc3) cell_imed_line_width_pane_ParamLimits

0xdbc2,	// (0x00088fc3) cell_imed_line_width_pane

0xdbd6,	// (0x00088fd7) cell_imed_line_width_pane_g1

0xd7a0,	// (0x00088ba1) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x0008aed9) cell_imed_line_width_pane_g

0x8332,	// (0x00083733) main_vded2_pane_g1_ParamLimits

0x8332,	// (0x00083733) main_vded2_pane_g1

0x833f,	// (0x00083740) main_vded2_pane_g2_ParamLimits

0x833f,	// (0x00083740) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x0008aede) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x0008aede) main_vded2_pane_g

0x834d,	// (0x0008374e) vded2_slider_pane_ParamLimits

0x834d,	// (0x0008374e) vded2_slider_pane

0x835a,	// (0x0008375b) aid_size_touch_vded2_end

0x8364,	// (0x00083765) aid_size_touch_vded2_playhead

0xdbdf,	// (0x00088fe0) aid_size_touch_vded2_start

0xdbe7,	// (0x00088fe8) vded2_slider_bg_pane

0xdbf0,	// (0x00088ff1) vded2_slider_pane_g1

0xdbf9,	// (0x00088ffa) vded2_slider_pane_g2

0x836c,	// (0x0008376d) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x0008aee3) vded2_slider_pane_g

0xdc01,	// (0x00089002) vded2_slider_bg_pane_g1

0xdc0a,	// (0x0008900b) vded2_slider_bg_pane_g2

0xdc13,	// (0x00089014) vded2_slider_bg_pane_g3

0x0002,

0xfae9,	// (0x0008aeea) vded2_slider_bg_pane_g

0x4b58,	// (0x0007ff59) aid_postcard_touch_down_pane_ParamLimits

0x4b58,	// (0x0007ff59) aid_postcard_touch_down_pane

0x4b68,	// (0x0007ff69) aid_postcard_touch_up_pane_ParamLimits

0x4b68,	// (0x0007ff69) aid_postcard_touch_up_pane

0x9ffc,	// (0x000853fd) main_blid2_pane

0x5298,	// (0x00080699) popup_blid2_search_window

0x9ffc,	// (0x000853fd) blid2_gps_pane

0x9ffc,	// (0x000853fd) blid2_navig_pane

0x9ffc,	// (0x000853fd) blid2_search_pane

0x9ffc,	// (0x000853fd) blid2_tripm_pane

0x8375,	// (0x00083776) blid2_search_pane_g1_ParamLimits

0x8375,	// (0x00083776) blid2_search_pane_g1

0x8385,	// (0x00083786) blid2_search_pane_t1_ParamLimits

0x8385,	// (0x00083786) blid2_search_pane_t1

0x8397,	// (0x00083798) aid_size_cell_blid2_gps_ParamLimits

0x8397,	// (0x00083798) aid_size_cell_blid2_gps

0x83a7,	// (0x000837a8) blid2_gps_pane_g1_ParamLimits

0x83a7,	// (0x000837a8) blid2_gps_pane_g1

0x83b3,	// (0x000837b4) grid_blid2_satellite_pane_ParamLimits

0x83b3,	// (0x000837b4) grid_blid2_satellite_pane

0x83c3,	// (0x000837c4) blid2_navig_pane_g1_ParamLimits

0x83c3,	// (0x000837c4) blid2_navig_pane_g1

0x83cf,	// (0x000837d0) blid2_navig_pane_t1_ParamLimits

0x83cf,	// (0x000837d0) blid2_navig_pane_t1

0x83e1,	// (0x000837e2) blid2_navig_pane_t2_ParamLimits

0x83e1,	// (0x000837e2) blid2_navig_pane_t2

0x0001,

0xfaf0,	// (0x0008aef1) blid2_navig_pane_t_ParamLimits

0xfaf0,	// (0x0008aef1) blid2_navig_pane_t

0x83f3,	// (0x000837f4) blid2_navig_ring_pane_ParamLimits

0x83f3,	// (0x000837f4) blid2_navig_ring_pane

0x8403,	// (0x00083804) blid2_speed_pane_ParamLimits

0x8403,	// (0x00083804) blid2_speed_pane

0x840f,	// (0x00083810) blid2_tripm_pane_g1_ParamLimits

0x840f,	// (0x00083810) blid2_tripm_pane_g1

0x841f,	// (0x00083820) blid2_tripm_pane_g2_ParamLimits

0x841f,	// (0x00083820) blid2_tripm_pane_g2

0x842b,	// (0x0008382c) blid2_tripm_pane_g3_ParamLimits

0x842b,	// (0x0008382c) blid2_tripm_pane_g3

0x8437,	// (0x00083838) blid2_tripm_pane_g4_ParamLimits

0x8437,	// (0x00083838) blid2_tripm_pane_g4

0x8443,	// (0x00083844) blid2_tripm_pane_g5_ParamLimits

0x8443,	// (0x00083844) blid2_tripm_pane_g5

0x0005,

0xfaf5,	// (0x0008aef6) blid2_tripm_pane_g_ParamLimits

0xfaf5,	// (0x0008aef6) blid2_tripm_pane_g

0x845f,	// (0x00083860) blid2_tripm_pane_t1_ParamLimits

0x845f,	// (0x00083860) blid2_tripm_pane_t1

0x8473,	// (0x00083874) blid2_tripm_pane_t2_ParamLimits

0x8473,	// (0x00083874) blid2_tripm_pane_t2

0x8485,	// (0x00083886) blid2_tripm_pane_t3_ParamLimits

0x8485,	// (0x00083886) blid2_tripm_pane_t3

0x0003,

0xfb02,	// (0x0008af03) blid2_tripm_pane_t_ParamLimits

0xfb02,	// (0x0008af03) blid2_tripm_pane_t

0x84b7,	// (0x000838b8) cell_blid2_satellite_pane_ParamLimits

0x84b7,	// (0x000838b8) cell_blid2_satellite_pane

0x84d1,	// (0x000838d2) cell_blid2_satellite_pane_g1

0xdc1c,	// (0x0008901d) cell_blid2_satellite_pane_t1

0xcc1c,	// (0x0008801d) blid2_speed_pane_g1

0xdc2a,	// (0x0008902b) blid2_speed_pane_t1

0xdc38,	// (0x00089039) blid2_speed_pane_t2

0x0001,

0xfb0b,	// (0x0008af0c) blid2_speed_pane_t

0xcc1c,	// (0x0008801d) blid2_navig_ring_pane_g1

0x84da,	// (0x000838db) blid2_navig_ring_pane_g2

0x84e2,	// (0x000838e3) blid2_navig_ring_pane_g3

0x84ea,	// (0x000838eb) blid2_navig_ring_pane_g4

0x84f2,	// (0x000838f3) blid2_navig_ring_pane_g5

0x0004,

0xfb10,	// (0x0008af11) blid2_navig_ring_pane_g

0x9ffc,	// (0x000853fd) bg_popup_window_pane_cp011

0xdc46,	// (0x00089047) popup_blid2_search_window_g1

0xdc4e,	// (0x0008904f) popup_blid2_search_window_t1

0xdc5c,	// (0x0008905d) popup_blid2_search_window_t2

0x0001,

0xfb1b,	// (0x0008af1c) popup_blid2_search_window_t

0xaace,	// (0x00085ecf) main_browser_pane_g1

0xa758,	// (0x00085b59) main_browser_pane_ParamLimits

0xa99d,	// (0x00085d9e) bg_button_pane_cp011_ParamLimits

0x75f2,	// (0x000829f3) cell_vitu2_function_pane_g1_ParamLimits

0xc812,	// (0x00087c13) bg_popup_sub_pane_cp22_ParamLimits

0x11d2,	// (0x0007c5d3) input_focus_pane_cp08_ParamLimits

0x7ec3,	// (0x000832c4) popup_vitu2_query_button_pane_ParamLimits

0x7ec3,	// (0x000832c4) popup_vitu2_query_button_pane

0x11e9,	// (0x0007c5ea) popup_vitu2_query_input_button_pane

0xd8f4,	// (0x00088cf5) popup_vitu2_query_window_g1_ParamLimits

0x7ed4,	// (0x000832d5) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x0008ae1d) popup_vitu2_query_window_g_ParamLimits

0x9ffc,	// (0x000853fd) bg_button_pane_cp026

0x84fa,	// (0x000838fb) popup_vitu2_query_input_button_pane_g1

0x9ffc,	// (0x000853fd) bg_button_pane_cp025

0xdc6a,	// (0x0008906b) popup_vitu2_query_button_pane_t1

0x5cf9,	// (0x000810fa) main_mp3_pane_t6

0x5d09,	// (0x0008110a) popup_slider_window_cp01

0x7265,	// (0x00082666) cam4_battery_pane

0x7345,	// (0x00082746) cam4_battery_pane_cp02

0x8245,	// (0x00083646) cam4_battery_pane_cp01

0x8245,	// (0x00083646) cam4_battery_pane_cp03

0xcc1c,	// (0x0008801d) cam4_battery_pane_g1

0xd7a8,	// (0x00088ba9) cam4_battery_pane_g2

0x0001,

0xfb20,	// (0x0008af21) cam4_battery_pane_g

0xcae6,	// (0x00087ee7) popup_blid_sat_info2_window_t11

0xb23d,	// (0x0008663e) aid_size_touch_mv_arrow_left_ParamLimits

0xb276,	// (0x00086677) aid_size_touch_mv_arrow_right_ParamLimits

0xb2d4,	// (0x000866d5) navi_pane_g1_ParamLimits

0xb2e0,	// (0x000866e1) navi_pane_g2_ParamLimits

0xb30e,	// (0x0008670f) navi_pane_g3_ParamLimits

0xf3ea,	// (0x0008a7eb) navi_pane_g_ParamLimits

0x45cf,	// (0x0007f9d0) navi_pane_mv_t1_ParamLimits

0x6819,	// (0x00081c1a) grid_imed_effect_pane_ParamLimits

0x3034,	// (0x0007e435) aid_placing_vt_slider_lsc

0xaa1d,	// (0x00085e1e) aid_placing_vt_slider_prt

0xa99d,	// (0x00085d9e) bg_tb_trans_pane_cp01_ParamLimits

0xcda8,	// (0x000881a9) popup_image_details_window_g1_ParamLimits

0xcdbb,	// (0x000881bc) popup_image_details_window_g2_ParamLimits

0xcdd0,	// (0x000881d1) popup_image_details_window_g3_ParamLimits

0xcdd0,	// (0x000881d1) popup_image_details_window_g3

0xf71d,	// (0x0008ab1e) popup_image_details_window_g_ParamLimits

0xcde4,	// (0x000881e5) popup_image_details_window_t1_ParamLimits

0xcdf6,	// (0x000881f7) popup_image_details_window_t2_ParamLimits

0xce0f,	// (0x00088210) popup_image_details_window_t3_ParamLimits

0xce23,	// (0x00088224) popup_image_details_window_t4_ParamLimits

0xce3e,	// (0x0008823f) popup_image_details_window_t5_ParamLimits

0xf724,	// (0x0008ab25) popup_image_details_window_t_ParamLimits

0x8165,	// (0x00083566) cl_header_name_pane_ParamLimits

0x8165,	// (0x00083566) cl_header_name_pane

0x8502,	// (0x00083903) cl_header_name_pane_t1_ParamLimits

0x8502,	// (0x00083903) cl_header_name_pane_t1

0x8519,	// (0x0008391a) cl_header_name_pane_t2_ParamLimits

0x8519,	// (0x0008391a) cl_header_name_pane_t2

0x8543,	// (0x00083944) cl_header_name_pane_t3_ParamLimits

0x8543,	// (0x00083944) cl_header_name_pane_t3

0x0002,

0xfb25,	// (0x0008af26) cl_header_name_pane_t_ParamLimits

0xfb25,	// (0x0008af26) cl_header_name_pane_t

0xb39d,	// (0x0008679e) navi_pane_mv_g2_ParamLimits

0xd639,	// (0x00088a3a) field_vitu2_entry_pane_g1_ParamLimits

0xd645,	// (0x00088a46) field_vitu2_entry_pane_g2_ParamLimits

0xd651,	// (0x00088a52) field_vitu2_entry_pane_g3_ParamLimits

0xd651,	// (0x00088a52) field_vitu2_entry_pane_g3

0xf91b,	// (0x0008ad1c) field_vitu2_entry_pane_g_ParamLimits

0x757d,	// (0x0008297e) cell_vitu2_itu_pane_g1_ParamLimits

0x758d,	// (0x0008298e) cell_vitu2_itu_pane_g2_ParamLimits

0x758d,	// (0x0008298e) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x0008ad28) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x0008ad28) cell_vitu2_itu_pane_g

0xa99d,	// (0x00085d9e) bg_vkb2_func_pane_cp05_ParamLimits

0xa99d,	// (0x00085d9e) bg_vkb2_func_pane_cp05

0xa99d,	// (0x00085d9e) bg_vkb2_func_pane_cp03

0xa99d,	// (0x00085d9e) bg_vkb2_func_pane_cp04

0xa99d,	// (0x00085d9e) bg_vkb2_func_pane_cp10_ParamLimits

0xa99d,	// (0x00085d9e) bg_vkb2_func_pane_cp10

0x1335,	// (0x0007c736) bg_vkb2_func_pane_cp08

0x810f,	// (0x00083510) bg_vkb2_func_pane_cp06

0x811d,	// (0x0008351e) bg_vkb2_func_pane_cp07

0xdb78,	// (0x00088f79) bg_vkb2_func_pane_cp11_ParamLimits

0xdb78,	// (0x00088f79) bg_vkb2_func_pane_cp11

0xdb8d,	// (0x00088f8e) bg_vkb2_func_pane_cp12_ParamLimits

0xdb8d,	// (0x00088f8e) bg_vkb2_func_pane_cp12

0x9ffc,	// (0x000853fd) bg_vkb2_func_pane_cp09

0xd671,	// (0x00088a72) bg_vkb2_func_pane_g1

0xabdf,	// (0x00085fe0) bg_vkb2_func_pane_g2

0xd679,	// (0x00088a7a) bg_vkb2_func_pane_g3

0xd681,	// (0x00088a82) bg_vkb2_func_pane_g4

0xd8b9,	// (0x00088cba) bg_vkb2_func_pane_g5

0xd699,	// (0x00088a9a) bg_vkb2_func_pane_g6

0xd6a1,	// (0x00088aa2) bg_vkb2_func_pane_g7

0xd691,	// (0x00088a92) bg_vkb2_func_pane_g8

0xabbf,	// (0x00085fc0) bg_vkb2_func_pane_g9

0x0008,

0xfb2c,	// (0x0008af2d) bg_vkb2_func_pane_g

0x8451,	// (0x00083852) blid2_tripm_pane_g6_ParamLimits

0x8451,	// (0x00083852) blid2_tripm_pane_g6

0xd4db,	// (0x000888dc) mp4_progress_pane_g1

0x84ab,	// (0x000838ac) blid2_tripm_values_pane_ParamLimits

0x84ab,	// (0x000838ac) blid2_tripm_values_pane

0x8568,	// (0x00083969) blid2_tripm_values_pane_t1

0x8576,	// (0x00083977) blid2_tripm_values_pane_t2

0x8584,	// (0x00083985) blid2_tripm_values_pane_t3

0x8592,	// (0x00083993) blid2_tripm_values_pane_t4

0x85a0,	// (0x000839a1) blid2_tripm_values_pane_t5

0x85ae,	// (0x000839af) blid2_tripm_values_pane_t6

0x85bc,	// (0x000839bd) blid2_tripm_values_pane_t7

0x85ca,	// (0x000839cb) blid2_tripm_values_pane_t8

0x85d8,	// (0x000839d9) blid2_tripm_values_pane_t9

0x0008,

0xfb3f,	// (0x0008af40) blid2_tripm_values_pane_t

0x3074,	// (0x0007e475) call_video_pane_t1_ParamLimits

0x3095,	// (0x0007e496) call_video_pane_t2_ParamLimits

0xf273,	// (0x0008a674) call_video_pane_t_ParamLimits

0x0f92,	// (0x0007c393) msg_header_pane_g1_ParamLimits

0xb582,	// (0x00086983) msg_header_pane_g2_ParamLimits

0xb582,	// (0x00086983) msg_header_pane_g2

0x0001,

0xf48d,	// (0x0008a88e) msg_header_pane_g_ParamLimits

0xf48d,	// (0x0008a88e) msg_header_pane_g

0xa758,	// (0x00085b59) main_clock2_pane_ParamLimits

0x65aa,	// (0x000819ab) grid_clock2_toolbar_pane_ParamLimits

0x65aa,	// (0x000819ab) grid_clock2_toolbar_pane

0x65aa,	// (0x000819ab) listscroll_clock2_pane_ParamLimits

0x65aa,	// (0x000819ab) listscroll_clock2_pane

0x6654,	// (0x00081a55) main_clock2_pane_t3_ParamLimits

0x6654,	// (0x00081a55) main_clock2_pane_t3

0x6666,	// (0x00081a67) main_clock2_pane_t4_ParamLimits

0x6666,	// (0x00081a67) main_clock2_pane_t4

0xdc78,	// (0x00089079) cell_clock2_toolbar_pane

0xdc80,	// (0x00089081) cell_clock2_toolbar_pane_cp01

0xdc80,	// (0x00089081) cell_clock2_toolbar_pane_cp02

0xdc88,	// (0x00089089) cell_clock2_toolbar_pane_cp03

0xdc90,	// (0x00089091) list_clock2_pane

0xb1b3,	// (0x000865b4) scroll_pane_cp10

0xdc98,	// (0x00089099) list_single_clock2_pane_ParamLimits

0xdc98,	// (0x00089099) list_single_clock2_pane

0xb404,	// (0x00086805) list_highlight_pane_cp08

0xdca5,	// (0x000890a6) list_single_clock2_pane_t1

0xdcc1,	// (0x000890c2) list_single_clock2_pane_t2

0x0001,

0xfb52,	// (0x0008af53) list_single_clock2_pane_t

0x9ffc,	// (0x000853fd) bg_button_pane_cp10

0xdccf,	// (0x000890d0) cell_clock2_toolbar_pane_g1

0x4aba,	// (0x0007febb) aid_main_viewer_pane_g1_ParamLimits

0x4aba,	// (0x0007febb) aid_main_viewer_pane_g1

0x4ac6,	// (0x0007fec7) aid_main_viewer_pane_g2_ParamLimits

0x4ac6,	// (0x0007fec7) aid_main_viewer_pane_g2

0x4ad2,	// (0x0007fed3) aid_main_viewer_pane_g3_ParamLimits

0x4ad2,	// (0x0007fed3) aid_main_viewer_pane_g3

0x4ae3,	// (0x0007fee4) aid_main_viewer_pane_g4_ParamLimits

0x4ae3,	// (0x0007fee4) aid_main_viewer_pane_g4

0x0003,

0xf49e,	// (0x0008a89f) aid_main_viewer_pane_g_ParamLimits

0xf49e,	// (0x0008a89f) aid_main_viewer_pane_g

0x5270,	// (0x00080671) main_calc_pane_ParamLimits

0x527d,	// (0x0008067e) main_dialer2_pane_ParamLimits

0x9ffc,	// (0x000853fd) main_cam6_pane

0x9ffc,	// (0x000853fd) main_vid6_pane

0x65b6,	// (0x000819b7) listscroll_gen_pane_cp06_ParamLimits

0x65b6,	// (0x000819b7) listscroll_gen_pane_cp06

0x6678,	// (0x00081a79) main_clock2_pane_t5_ParamLimits

0x6678,	// (0x00081a79) main_clock2_pane_t5

0x66c3,	// (0x00081ac4) aid_call2_pane_cp10_ParamLimits

0x66d5,	// (0x00081ad6) aid_call_pane_cp10_ParamLimits

0xb231,	// (0x00086632) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb231,	// (0x00086632) popup_clock_analogue_window_cp10_g2_ParamLimits

0x66e7,	// (0x00081ae8) popup_clock_analogue_window_cp10_g3_ParamLimits

0x66e7,	// (0x00081ae8) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb231,	// (0x00086632) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d4,	// (0x0008abd5) popup_clock_analogue_window_cp10_g_ParamLimits

0x66f9,	// (0x00081afa) popup_clock_analogue_window_cp10_t1_ParamLimits

0x6ee4,	// (0x000822e5) cell_dialer2_keypad_pane_g2_ParamLimits

0x6ee4,	// (0x000822e5) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x0008acbb) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x0008acbb) cell_dialer2_keypad_pane_g

0x6f00,	// (0x00082301) cell_dialer2_keypad_pane_t1

0x78bf,	// (0x00082cc0) main_cset_text2_pane_ParamLimits

0x78bf,	// (0x00082cc0) main_cset_text2_pane

0xdad4,	// (0x00088ed5) area_vitu2_query_pane_g1_ParamLimits

0x1260,	// (0x0007c661) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x0008ae70) area_vitu2_query_pane_g_ParamLimits

0x1311,	// (0x0007c712) area_vitu2_query_pane_t7_ParamLimits

0x1311,	// (0x0007c712) area_vitu2_query_pane_t7

0x810f,	// (0x00083510) bg_button_pane_cp018_ParamLimits

0x811d,	// (0x0008351e) bg_button_pane_cp021_ParamLimits

0x1335,	// (0x0007c736) bg_button_pane_cp022_ParamLimits

0x1335,	// (0x0007c736) bg_vkb2_func_pane_cp08_ParamLimits

0x810f,	// (0x00083510) bg_vkb2_func_pane_cp06_ParamLimits

0x811d,	// (0x0008351e) bg_vkb2_func_pane_cp07_ParamLimits

0x1346,	// (0x0007c747) input_focus_pane_cp09_ParamLimits

0x85e6,	// (0x000839e7) cam6_autofocus_pane_ParamLimits

0x85e6,	// (0x000839e7) cam6_autofocus_pane

0x8608,	// (0x00083a09) cam6_image_uncrop_pane_ParamLimits

0x8608,	// (0x00083a09) cam6_image_uncrop_pane

0x8635,	// (0x00083a36) cam6_indi_pane_ParamLimits

0x8635,	// (0x00083a36) cam6_indi_pane

0x864f,	// (0x00083a50) cam6_mode_pane_ParamLimits

0x864f,	// (0x00083a50) cam6_mode_pane

0x8663,	// (0x00083a64) cam6_timer_pane_ParamLimits

0x8663,	// (0x00083a64) cam6_timer_pane

0x866f,	// (0x00083a70) cam6_zoom_pane_ParamLimits

0x866f,	// (0x00083a70) cam6_zoom_pane

0x8687,	// (0x00083a88) cam6_mode_pane_g1_ParamLimits

0x8687,	// (0x00083a88) cam6_mode_pane_g1

0x8693,	// (0x00083a94) cam6_mode_pane_g2_ParamLimits

0x8693,	// (0x00083a94) cam6_mode_pane_g2

0x869f,	// (0x00083aa0) cam6_mode_pane_g3_ParamLimits

0x869f,	// (0x00083aa0) cam6_mode_pane_g3

0x86ab,	// (0x00083aac) cam6_mode_pane_g4_ParamLimits

0x86ab,	// (0x00083aac) cam6_mode_pane_g4

0x0003,

0xfb57,	// (0x0008af58) cam6_mode_pane_g_ParamLimits

0xfb57,	// (0x0008af58) cam6_mode_pane_g

0xdcb3,	// (0x000890b4) bg_tb_trans_pane_cp08_ParamLimits

0xdcb3,	// (0x000890b4) bg_tb_trans_pane_cp08

0xdcd7,	// (0x000890d8) cam6_battery_pane_ParamLimits

0xdcd7,	// (0x000890d8) cam6_battery_pane

0xdced,	// (0x000890ee) cam6_indi_pane_g1_ParamLimits

0xdced,	// (0x000890ee) cam6_indi_pane_g1

0xdcff,	// (0x00089100) cam6_indi_pane_g2_ParamLimits

0xdcff,	// (0x00089100) cam6_indi_pane_g2

0xdd11,	// (0x00089112) cam6_indi_pane_g3_ParamLimits

0xdd11,	// (0x00089112) cam6_indi_pane_g3

0x0002,

0xfb60,	// (0x0008af61) cam6_indi_pane_g_ParamLimits

0xfb60,	// (0x0008af61) cam6_indi_pane_g

0xdd23,	// (0x00089124) cam6_indi_pane_t1_ParamLimits

0xdd23,	// (0x00089124) cam6_indi_pane_t1

0x73b9,	// (0x000827ba) cam6_autofocus_pane_g1

0x73c1,	// (0x000827c2) cam6_autofocus_pane_g2

0x73c9,	// (0x000827ca) cam6_autofocus_pane_g3

0x73d1,	// (0x000827d2) cam6_autofocus_pane_g4

0x0003,

0xfb67,	// (0x0008af68) cam6_autofocus_pane_g

0xdd49,	// (0x0008914a) cam6_timer_pane_g1

0xdd51,	// (0x00089152) cam6_timer_pane_t1

0xdd5f,	// (0x00089160) cam6_zoom_cont_pane

0xdd67,	// (0x00089168) cam6_zoom_pane_g1

0xdd6f,	// (0x00089170) cam6_zoom_pane_g2

0x86b7,	// (0x00083ab8) cam6_zoom_pane_g3

0x0002,

0xfb70,	// (0x0008af71) cam6_zoom_pane_g

0xcc1c,	// (0x0008801d) cam6_battery_pane_g1

0xcc1c,	// (0x0008801d) cam6_battery_pane_g2

0x0001,

0xf6e1,	// (0x0008aae2) cam6_battery_pane_g

0xdd77,	// (0x00089178) cam6_zoom_cont_pane_g1

0xdd80,	// (0x00089181) cam6_zoom_cont_pane_g2

0xdd89,	// (0x0008918a) cam6_zoom_cont_pane_g3

0x0002,

0xfb77,	// (0x0008af78) cam6_zoom_cont_pane_g

0x86d4,	// (0x00083ad5) cam6_mode_pane_cp_ParamLimits

0x86d4,	// (0x00083ad5) cam6_mode_pane_cp

0x866f,	// (0x00083a70) cam6_zoom_pane_cp_ParamLimits

0x866f,	// (0x00083a70) cam6_zoom_pane_cp

0x86e8,	// (0x00083ae9) vid6_image_uncrop_cif_pane_ParamLimits

0x86e8,	// (0x00083ae9) vid6_image_uncrop_cif_pane

0x8714,	// (0x00083b15) vid6_image_uncrop_nhd_pane_ParamLimits

0x8714,	// (0x00083b15) vid6_image_uncrop_nhd_pane

0x8608,	// (0x00083a09) vid6_image_uncrop_vga_pane_ParamLimits

0x8608,	// (0x00083a09) vid6_image_uncrop_vga_pane

0x8731,	// (0x00083b32) vid6_image_uncrop_wvga_pane_ParamLimits

0x8731,	// (0x00083b32) vid6_image_uncrop_wvga_pane

0x874e,	// (0x00083b4f) vid6_indi_pane_ParamLimits

0x874e,	// (0x00083b4f) vid6_indi_pane

0xdcb3,	// (0x000890b4) bg_tb_trans_pane_cp09_ParamLimits

0xdcb3,	// (0x000890b4) bg_tb_trans_pane_cp09

0xdda1,	// (0x000891a2) cam6_battery_pane_cp_ParamLimits

0xdda1,	// (0x000891a2) cam6_battery_pane_cp

0xddad,	// (0x000891ae) vid6_indi_pane_g1_ParamLimits

0xddad,	// (0x000891ae) vid6_indi_pane_g1

0xddbf,	// (0x000891c0) vid6_indi_pane_g2_ParamLimits

0xddbf,	// (0x000891c0) vid6_indi_pane_g2

0xddd1,	// (0x000891d2) vid6_indi_pane_g3_ParamLimits

0xddd1,	// (0x000891d2) vid6_indi_pane_g3

0xdde6,	// (0x000891e7) vid6_indi_pane_g4_ParamLimits

0xdde6,	// (0x000891e7) vid6_indi_pane_g4

0xddfb,	// (0x000891fc) vid6_indi_pane_g5_ParamLimits

0xddfb,	// (0x000891fc) vid6_indi_pane_g5

0x0004,

0xfb7e,	// (0x0008af7f) vid6_indi_pane_g_ParamLimits

0xfb7e,	// (0x0008af7f) vid6_indi_pane_g

0xde15,	// (0x00089216) vid6_indi_pane_t1_ParamLimits

0xde15,	// (0x00089216) vid6_indi_pane_t1

0xde2b,	// (0x0008922c) vid6_indi_pane_t2_ParamLimits

0xde2b,	// (0x0008922c) vid6_indi_pane_t2

0xde53,	// (0x00089254) vid6_indi_pane_t3_ParamLimits

0xde53,	// (0x00089254) vid6_indi_pane_t3

0xde7b,	// (0x0008927c) vid6_indi_pane_t4_ParamLimits

0xde7b,	// (0x0008927c) vid6_indi_pane_t4

0x0003,

0xfb89,	// (0x0008af8a) vid6_indi_pane_t_ParamLimits

0xfb89,	// (0x0008af8a) vid6_indi_pane_t

0xde9f,	// (0x000892a0) wait_bar_pane_cp08

0x8771,	// (0x00083b72) main_cset_text2_pane_t1_ParamLimits

0x8771,	// (0x00083b72) main_cset_text2_pane_t1

0x86bf,	// (0x00083ac0) listscroll_gen_pane_cp06_t1_ParamLimits

0x86bf,	// (0x00083ac0) listscroll_gen_pane_cp06_t1

0x9ffc,	// (0x000853fd) main_cam6_set_pane

0xce88,	// (0x00088289) bg_tb_trans_pane_cp06_ParamLimits

0x726d,	// (0x0008266e) cam4_indicators_pane_g1_ParamLimits

0x727e,	// (0x0008267f) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x0008acf8) cam4_indicators_pane_g_ParamLimits

0x729c,	// (0x0008269d) cam4_indicators_pane_t1_ParamLimits

0xa99d,	// (0x00085d9e) bg_tb_trans_pane_cp07_ParamLimits

0x734d,	// (0x0008274e) vid4_indicators_pane_g1_ParamLimits

0x7361,	// (0x00082762) vid4_indicators_pane_g2_ParamLimits

0x7375,	// (0x00082776) vid4_indicators_pane_g3_ParamLimits

0x7386,	// (0x00082787) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x0008ad0a) vid4_indicators_pane_g_ParamLimits

0x73a2,	// (0x000827a3) vid4_indicators_pane_t1_ParamLimits

0x824d,	// (0x0008364e) vid4_progress_pane_g1_ParamLimits

0x825f,	// (0x00083660) vid4_progress_pane_g2_ParamLimits

0x4b40,	// (0x0007ff41) vid4_progress_pane_g3_ParamLimits

0x826f,	// (0x00083670) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x0008aebb) vid4_progress_pane_g_ParamLimits

0x828d,	// (0x0008368e) vid4_progress_pane_t1_ParamLimits

0x82a2,	// (0x000836a3) vid4_progress_pane_t2_ParamLimits

0x82b8,	// (0x000836b9) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x0008aec6) vid4_progress_pane_t_ParamLimits

0x82ce,	// (0x000836cf) wait_bar_pane_cp07_ParamLimits

0x87ab,	// (0x00083bac) main_cam6_set_pane_g2_ParamLimits

0x87ab,	// (0x00083bac) main_cam6_set_pane_g2

0x87b7,	// (0x00083bb8) main_cset6_listscroll_pane_ParamLimits

0x87b7,	// (0x00083bb8) main_cset6_listscroll_pane

0x87e2,	// (0x00083be3) main_cset6_slider_pane_ParamLimits

0x87e2,	// (0x00083be3) main_cset6_slider_pane

0x87ee,	// (0x00083bef) main_cset6_text2_pane_ParamLimits

0x87ee,	// (0x00083bef) main_cset6_text2_pane

0xdeae,	// (0x000892af) main_cset6_text_pane

0xdeb6,	// (0x000892b7) main_cset_list_pane_copy1_ParamLimits

0xdeb6,	// (0x000892b7) main_cset_list_pane_copy1

0xdec6,	// (0x000892c7) scroll_pane_cp028_copy1

0x8801,	// (0x00083c02) cset_list_set_pane_copy1

0x881a,	// (0x00083c1b) aid_position_infowindow_above_copy1

0x8822,	// (0x00083c23) aid_position_infowindow_below_copy1

0x882a,	// (0x00083c2b) cset_list_set_pane_g1_copy1

0x1156,	// (0x0007c557) cset_list_set_pane_g3_copy1_ParamLimits

0x1156,	// (0x0007c557) cset_list_set_pane_g3_copy1

0x1165,	// (0x0007c566) cset_list_set_pane_t1_copy1_ParamLimits

0x1165,	// (0x0007c566) cset_list_set_pane_t1_copy1

0xa99d,	// (0x00085d9e) list_highlight_pane_cp021_copy1_ParamLimits

0xa99d,	// (0x00085d9e) list_highlight_pane_cp021_copy1

0xdecf,	// (0x000892d0) cset6_slider_pane_ParamLimits

0xdecf,	// (0x000892d0) cset6_slider_pane

0xdefb,	// (0x000892fc) main_cset6_slider_pane_g1_ParamLimits

0xdefb,	// (0x000892fc) main_cset6_slider_pane_g1

0x8832,	// (0x00083c33) main_cset6_slider_pane_g2_ParamLimits

0x8832,	// (0x00083c33) main_cset6_slider_pane_g2

0xdf23,	// (0x00089324) main_cset6_slider_pane_g3_ParamLimits

0xdf23,	// (0x00089324) main_cset6_slider_pane_g3

0x885a,	// (0x00083c5b) main_cset6_slider_pane_g4_ParamLimits

0x885a,	// (0x00083c5b) main_cset6_slider_pane_g4

0x8866,	// (0x00083c67) main_cset6_slider_pane_g5_ParamLimits

0x8866,	// (0x00083c67) main_cset6_slider_pane_g5

0xd7c4,	// (0x00088bc5) main_cset6_slider_pane_g7_ParamLimits

0xd7c4,	// (0x00088bc5) main_cset6_slider_pane_g7

0xd7d0,	// (0x00088bd1) main_cset6_slider_pane_g8_ParamLimits

0xd7d0,	// (0x00088bd1) main_cset6_slider_pane_g8

0x8874,	// (0x00083c75) main_cset6_slider_pane_g9_ParamLimits

0x8874,	// (0x00083c75) main_cset6_slider_pane_g9

0x8880,	// (0x00083c81) main_cset6_slider_pane_g10_ParamLimits

0x8880,	// (0x00083c81) main_cset6_slider_pane_g10

0x888c,	// (0x00083c8d) main_cset6_slider_pane_g11_ParamLimits

0x888c,	// (0x00083c8d) main_cset6_slider_pane_g11

0x8898,	// (0x00083c99) main_cset6_slider_pane_g12_ParamLimits

0x8898,	// (0x00083c99) main_cset6_slider_pane_g12

0x88a4,	// (0x00083ca5) main_cset6_slider_pane_g13_ParamLimits

0x88a4,	// (0x00083ca5) main_cset6_slider_pane_g13

0x88b0,	// (0x00083cb1) main_cset6_slider_pane_g14_ParamLimits

0x88b0,	// (0x00083cb1) main_cset6_slider_pane_g14

0x88bc,	// (0x00083cbd) main_cset6_slider_pane_g15_ParamLimits

0x88bc,	// (0x00083cbd) main_cset6_slider_pane_g15

0x88d4,	// (0x00083cd5) main_cset6_slider_pane_g16_ParamLimits

0x88d4,	// (0x00083cd5) main_cset6_slider_pane_g16

0x88e2,	// (0x00083ce3) main_cset6_slider_pane_g17_ParamLimits

0x88e2,	// (0x00083ce3) main_cset6_slider_pane_g17

0x0011,

0xfb92,	// (0x0008af93) main_cset6_slider_pane_g_ParamLimits

0xfb92,	// (0x0008af93) main_cset6_slider_pane_g

0xdf2f,	// (0x00089330) main_cset6_slider_pane_t1_ParamLimits

0xdf2f,	// (0x00089330) main_cset6_slider_pane_t1

0x8908,	// (0x00083d09) main_cset6_slider_pane_t2_ParamLimits

0x8908,	// (0x00083d09) main_cset6_slider_pane_t2

0x8933,	// (0x00083d34) main_cset6_slider_pane_t3_ParamLimits

0x8933,	// (0x00083d34) main_cset6_slider_pane_t3

0x895e,	// (0x00083d5f) main_cset6_slider_pane_t4_ParamLimits

0x895e,	// (0x00083d5f) main_cset6_slider_pane_t4

0x8989,	// (0x00083d8a) main_cset6_slider_pane_t5_ParamLimits

0x8989,	// (0x00083d8a) main_cset6_slider_pane_t5

0xdf70,	// (0x00089371) main_cset6_slider_pane_t7_ParamLimits

0xdf70,	// (0x00089371) main_cset6_slider_pane_t7

0x89b6,	// (0x00083db7) main_cset6_slider_pane_t8_ParamLimits

0x89b6,	// (0x00083db7) main_cset6_slider_pane_t8

0x89da,	// (0x00083ddb) main_cset6_slider_pane_t9_ParamLimits

0x89da,	// (0x00083ddb) main_cset6_slider_pane_t9

0x89fe,	// (0x00083dff) main_cset6_slider_pane_t10_ParamLimits

0x89fe,	// (0x00083dff) main_cset6_slider_pane_t10

0x8a22,	// (0x00083e23) main_cset6_slider_pane_t11_ParamLimits

0x8a22,	// (0x00083e23) main_cset6_slider_pane_t11

0xdfa6,	// (0x000893a7) main_cset6_slider_pane_t14_ParamLimits

0xdfa6,	// (0x000893a7) main_cset6_slider_pane_t14

0xdfdf,	// (0x000893e0) main_cset6_slider_pane_t15_ParamLimits

0xdfdf,	// (0x000893e0) main_cset6_slider_pane_t15

0x000b,

0xfbb7,	// (0x0008afb8) main_cset6_slider_pane_t_ParamLimits

0xfbb7,	// (0x0008afb8) main_cset6_slider_pane_t

0xe018,	// (0x00089419) cset_slider_pane_g1_copy1

0xe021,	// (0x00089422) cset_slider_pane_g2_copy1

0xe02a,	// (0x0008942b) cset_slider_pane_g3_copy1

0x9ffc,	// (0x000853fd) bg_popup_sub_pane_cp011_copy1

0xe033,	// (0x00089434) main_cset_text_pane_g1_copy1

0xd908,	// (0x00088d09) main_cset_text_pane_t1_copy1

0xd916,	// (0x00088d17) main_cset_text_pane_t2_copy1

0xd924,	// (0x00088d25) main_cset_text_pane_t3_copy1

0xd932,	// (0x00088d33) main_cset_text_pane_t4_copy1

0xd940,	// (0x00088d41) main_cset_text_pane_t5_copy1

0xe03b,	// (0x0008943c) main_cset_text_pane_t6_copy1

0xe049,	// (0x0008944a) main_cset_text_pane_t7_copy1

0x8a63,	// (0x00083e64) main_cset_text2_pane_t1_copy1

0xa99d,	// (0x00085d9e) main_ncimui_pane

0x52ce,	// (0x000806cf) popup_query_ncimui_window_ParamLimits

0x52ce,	// (0x000806cf) popup_query_ncimui_window

0x5e67,	// (0x00081268) field_cale_ev2_pane_g4_ParamLimits

0x5e67,	// (0x00081268) field_cale_ev2_pane_g4

0x6c04,	// (0x00082005) cell_video_dialer_keypad_pane_g2_ParamLimits

0x6c04,	// (0x00082005) cell_video_dialer_keypad_pane_g2

0x0001,

0xf895,	// (0x0008ac96) cell_video_dialer_keypad_pane_g_ParamLimits

0xf895,	// (0x0008ac96) cell_video_dialer_keypad_pane_g

0x6c1c,	// (0x0008201d) cell_video_dialer_keypad_pane_t1

0x9ffc,	// (0x000853fd) bg_popup_window_pane_cp012

0xb074,	// (0x00086475) heading_pane_cp06

0xe075,	// (0x00089476) ncim_query_content_pane

0x9ffc,	// (0x000853fd) bg_popup_heading_pane_cp01

0xe07d,	// (0x0008947e) ncim_heading_pane_t1

0xe08b,	// (0x0008948c) ncim_indicator_popup_pane

0xe09d,	// (0x0008949e) ncim_query_button_pane

0xe0b1,	// (0x000894b2) ncim_query_content_pane_t1

0xe0c3,	// (0x000894c4) ncim_query_content_pane_t2

0x0005,

0xfbfb,	// (0x0008affc) ncim_query_content_pane_t

0xe0fd,	// (0x000894fe) ncim_query_list_pane

0xe10f,	// (0x00089510) ncim_query_popup_pane

0xe08b,	// (0x0008948c) ncim_indicator_popup_pane_ParamLimits

0x8bbd,	// (0x00083fbe) ncim_query_content_pane_g1_ParamLimits

0x8bbd,	// (0x00083fbe) ncim_query_content_pane_g1

0xe0b1,	// (0x000894b2) ncim_query_content_pane_t1_ParamLimits

0xe0c3,	// (0x000894c4) ncim_query_content_pane_t2_ParamLimits

0x8bc9,	// (0x00083fca) ncim_query_content_pane_t3_ParamLimits

0x8bc9,	// (0x00083fca) ncim_query_content_pane_t3

0x8be6,	// (0x00083fe7) ncim_query_content_pane_t4_ParamLimits

0x8be6,	// (0x00083fe7) ncim_query_content_pane_t4

0x8c03,	// (0x00084004) ncim_query_content_pane_t5_ParamLimits

0x8c03,	// (0x00084004) ncim_query_content_pane_t5

0xe0d5,	// (0x000894d6) ncim_query_content_pane_t6_ParamLimits

0xe0d5,	// (0x000894d6) ncim_query_content_pane_t6

0xfbfb,	// (0x0008affc) ncim_query_content_pane_t_ParamLimits

0xe0fd,	// (0x000894fe) ncim_query_list_pane_ParamLimits

0xe10f,	// (0x00089510) ncim_query_popup_pane_ParamLimits

0xe123,	// (0x00089524) wait_bar_pane_cp04

0x9ffc,	// (0x000853fd) input_focus_pane_cp011

0xe12b,	// (0x0008952c) ncim_query_popup_pane_t1

0xe139,	// (0x0008953a) ncim_list_query_list_pane_ParamLimits

0xe139,	// (0x0008953a) ncim_list_query_list_pane

0x9ffc,	// (0x000853fd) bg_button_pane_cp027

0xe14c,	// (0x0008954d) ncim_query_button_pane_g1

0x9ffc,	// (0x000853fd) list_highlight_pane_cp012

0xe156,	// (0x00089557) ncim_list_query_list_pane_g1

0xe15e,	// (0x0008955f) ncim_list_query_list_pane_t1

0x728d,	// (0x0008268e) cam4_indicators_pane_g3_ParamLimits

0x728d,	// (0x0008268e) cam4_indicators_pane_g3

0x7392,	// (0x00082793) vid4_indicators_pane_g5_ParamLimits

0x7392,	// (0x00082793) vid4_indicators_pane_g5

0x827e,	// (0x0008367f) vid4_progress_pane_g5_ParamLimits

0x827e,	// (0x0008367f) vid4_progress_pane_g5

0x8aa9,	// (0x00083eaa) main_ncimui_pane_g1

0x8b11,	// (0x00083f12) ncimui_group_query_pane_ParamLimits

0x8b11,	// (0x00083f12) ncimui_group_query_pane

0x8b59,	// (0x00083f5a) ncimui_list_pane_ParamLimits

0x8b59,	// (0x00083f5a) ncimui_list_pane

0x8b80,	// (0x00083f81) ncimui_text_pane_ParamLimits

0x8b80,	// (0x00083f81) ncimui_text_pane

0x8c20,	// (0x00084021) ncimui_text_pane_t1_ParamLimits

0x8c20,	// (0x00084021) ncimui_text_pane_t1

0xe16c,	// (0x0008956d) ncimui_list_single_graphic_pane_ParamLimits

0xe16c,	// (0x0008956d) ncimui_list_single_graphic_pane

0x8c3f,	// (0x00084040) ncimui_query_pane_ParamLimits

0x8c3f,	// (0x00084040) ncimui_query_pane

0x9ffc,	// (0x000853fd) list_highlight_pane_cp013

0xe17c,	// (0x0008957d) ncim_list_query_list_pane_t1_copy1

0xe156,	// (0x00089557) ncim_list_single_graphic_pane_g1

0xe18a,	// (0x0008958b) ncim_query_button_pane_cp01

0xe196,	// (0x00089597) ncim_query_entry_pane_ParamLimits

0xe196,	// (0x00089597) ncim_query_entry_pane

0xe1a9,	// (0x000895aa) ncimui_query_pane_g1

0xe1b5,	// (0x000895b6) ncimui_query_pane_t1_ParamLimits

0xe1b5,	// (0x000895b6) ncimui_query_pane_t1

0xa99d,	// (0x00085d9e) input_focus_pane_cp012

0xe1ce,	// (0x000895cf) ncim_query_entry_pane_t1

0xa758,	// (0x00085b59) main_im_pane_ParamLimits

0xa99d,	// (0x00085d9e) main_mobtv_pane_ParamLimits

0xa99d,	// (0x00085d9e) main_mobtv_pane

0x88f0,	// (0x00083cf1) main_cset6_slider_pane_g18_ParamLimits

0x88f0,	// (0x00083cf1) main_cset6_slider_pane_g18

0x88fc,	// (0x00083cfd) main_cset6_slider_pane_g19_ParamLimits

0x88fc,	// (0x00083cfd) main_cset6_slider_pane_g19

0xd651,	// (0x00088a52) bg_main_mobtv_pane_ParamLimits

0xd651,	// (0x00088a52) bg_main_mobtv_pane

0x8c52,	// (0x00084053) main_mobtv_info_pane

0x8c5d,	// (0x0008405e) main_mobtv_loading_pane_ParamLimits

0x8c5d,	// (0x0008405e) main_mobtv_loading_pane

0xe1e0,	// (0x000895e1) main_mobtv_pg_channel_list_pane

0xe1ea,	// (0x000895eb) main_mobtv_pg_hdr_pane

0x8c6a,	// (0x0008406b) main_mobtv_programe_curr_pane_ParamLimits

0x8c6a,	// (0x0008406b) main_mobtv_programe_curr_pane

0x8c77,	// (0x00084078) main_mobtv_programe_next_pane_ParamLimits

0x8c77,	// (0x00084078) main_mobtv_programe_next_pane

0xe1f3,	// (0x000895f4) popup_mobtv_noti_window

0xcc1c,	// (0x0008801d) main_tv_pg_hdr_pane_g1

0xe1fb,	// (0x000895fc) main_tv_pg_hdr_pane_g2

0xe203,	// (0x00089604) main_tv_pg_hdr_pane_g3

0xe20b,	// (0x0008960c) main_tv_pg_hdr_pane_g4

0xe213,	// (0x00089614) main_tv_pg_hdr_pane_g5

0xe21d,	// (0x0008961e) main_tv_pg_hdr_pane_g6

0xe227,	// (0x00089628) main_tv_pg_hdr_pane_g7

0xe231,	// (0x00089632) main_tv_pg_hdr_pane_g8

0xe23b,	// (0x0008963c) main_tv_pg_hdr_pane_g9

0xe245,	// (0x00089646) main_tv_pg_hdr_pane_g10

0xe24f,	// (0x00089650) main_tv_pg_hdr_pane_g11

0x000a,

0xfc08,	// (0x0008b009) main_tv_pg_hdr_pane_g

0xe259,	// (0x0008965a) main_tv_pg_hdr_pane_t1

0xe267,	// (0x00089668) main_tv_pg_hdr_pane_t2

0xe275,	// (0x00089676) main_tv_pg_hdr_pane_t3

0xe285,	// (0x00089686) main_tv_pg_hdr_pane_t4

0xe295,	// (0x00089696) main_tv_pg_hdr_pane_t5

0x0004,

0x09c0,	// (0x0007bdc1) main_tv_pg_hdr_pane_t

0xe2a5,	// (0x000896a6) single_mobtv_pg_channel_pane_ParamLimits

0xe2a5,	// (0x000896a6) single_mobtv_pg_channel_pane

0xe2b7,	// (0x000896b8) single_mobtv_pg_channel_table_pane

0xe2c0,	// (0x000896c1) single_mobtv_pg_channel_thumb_pane

0xe2c9,	// (0x000896ca) single_tv_pg_channel_pane_g1

0xe2d2,	// (0x000896d3) single_tv_pg_channel_pane_g2

0x0001,

0x09cb,	// (0x0007bdcc) single_tv_pg_channel_pane_g

0xce88,	// (0x00088289) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xce88,	// (0x00088289) bg_single_mobtv_pg_channel_thumb_pane

0xe2db,	// (0x000896dc) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe2db,	// (0x000896dc) single_mobtv_pg_channel_thumb_pane_g1

0xe2e9,	// (0x000896ea) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe2e9,	// (0x000896ea) single_mobtv_pg_channel_thumb_pane_g2

0xe2f5,	// (0x000896f6) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe2f5,	// (0x000896f6) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0x09d0,	// (0x0007bdd1) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0x09d0,	// (0x0007bdd1) single_mobtv_pg_channel_thumb_pane_g

0xe301,	// (0x00089702) single_mobtv_pg_channel_thumb_pane_t1

0xe30f,	// (0x00089710) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0x09d7,	// (0x0007bdd8) single_mobtv_pg_channel_thumb_pane_t

0xcc1c,	// (0x0008801d) bg_single_mobtv_pg_channel_table_pane_g1

0xcc1c,	// (0x0008801d) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6e1,	// (0x0008aae2) bg_single_mobtv_pg_channel_table_pane_g

0xe31d,	// (0x0008971e) single_mobtv_pg_channel_table_pane_t1

0xe32b,	// (0x0008972c) single_mobtv_pg_channel_table_pane_t2

0x0001,

0x09dc,	// (0x0007bddd) single_mobtv_pg_channel_table_pane_t

0x8c8c,	// (0x0008408d) main_mobtv_info_pane_g1_ParamLimits

0x8c8c,	// (0x0008408d) main_mobtv_info_pane_g1

0x8ca8,	// (0x000840a9) main_mobtv_info_pane_t1_ParamLimits

0x8ca8,	// (0x000840a9) main_mobtv_info_pane_t1

0x8d20,	// (0x00084121) main_mobtv_info_pane_t2_ParamLimits

0x8d20,	// (0x00084121) main_mobtv_info_pane_t2

0x0002,

0xfc24,	// (0x0008b025) main_mobtv_info_pane_t_ParamLimits

0xfc24,	// (0x0008b025) main_mobtv_info_pane_t

0x8daf,	// (0x000841b0) wait_bar_pane_cp05

0x8dc1,	// (0x000841c2) main_mobtv_loading_pane_g1_ParamLimits

0x8dc1,	// (0x000841c2) main_mobtv_loading_pane_g1

0x8dcf,	// (0x000841d0) main_mobtv_loading_pane_g2_ParamLimits

0x8dcf,	// (0x000841d0) main_mobtv_loading_pane_g2

0x8ddb,	// (0x000841dc) main_mobtv_loading_pane_g3_ParamLimits

0x8ddb,	// (0x000841dc) main_mobtv_loading_pane_g3

0x0002,

0xfc2b,	// (0x0008b02c) main_mobtv_loading_pane_g_ParamLimits

0xfc2b,	// (0x0008b02c) main_mobtv_loading_pane_g

0xe339,	// (0x0008973a) main_mobtv_loading_pane_t1_ParamLimits

0xe339,	// (0x0008973a) main_mobtv_loading_pane_t1

0xe35a,	// (0x0008975b) main_mobtv_loading_pane_t2_ParamLimits

0xe35a,	// (0x0008975b) main_mobtv_loading_pane_t2

0x0001,

0xfc32,	// (0x0008b033) main_mobtv_loading_pane_t_ParamLimits

0xfc32,	// (0x0008b033) main_mobtv_loading_pane_t

0x8de9,	// (0x000841ea) wait_bar_pane_cp06_ParamLimits

0x8de9,	// (0x000841ea) wait_bar_pane_cp06

0xe37e,	// (0x0008977f) main_mobtv_programe_curr_pane_t1

0xe38c,	// (0x0008978d) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc37,	// (0x0008b038) main_mobtv_programe_curr_pane_t

0xe39a,	// (0x0008979b) main_mobtv_programe_next_pane_t1

0xe3a8,	// (0x000897a9) main_mobtv_programe_next_pane_t2

0xe3b6,	// (0x000897b7) main_mobtv_programe_next_pane_t3

0x0002,

0xfc3c,	// (0x0008b03d) main_mobtv_programe_next_pane_t

0x9ffc,	// (0x000853fd) bg_popup_mobtv_noti_window_pane

0xe3c4,	// (0x000897c5) popup_mobtv_noti_window_g1

0xe3cc,	// (0x000897cd) popup_mobtv_noti_window_t1

0xe3da,	// (0x000897db) popup_mobtv_noti_window_t2

0x0001,

0xfc43,	// (0x0008b044) popup_mobtv_noti_window_t

0xcc1c,	// (0x0008801d) bg_popup_mobtv_noti_window_pane_g1

0x9ffc,	// (0x000853fd) sc_clock_pane

0x9ffc,	// (0x000853fd) main_fs_bigclock_pane

0x8499,	// (0x0008389a) blid2_tripm_pane_t4_ParamLimits

0x8499,	// (0x0008389a) blid2_tripm_pane_t4

0x8df5,	// (0x000841f6) sc_clock_pane_g1_ParamLimits

0x8df5,	// (0x000841f6) sc_clock_pane_g1

0x8e03,	// (0x00084204) sc_clock_pane_t1_ParamLimits

0x8e03,	// (0x00084204) sc_clock_pane_t1

0x8e16,	// (0x00084217) sc_clock_pane_t2_ParamLimits

0x8e16,	// (0x00084217) sc_clock_pane_t2

0x8e28,	// (0x00084229) sc_clock_pane_t3_ParamLimits

0x8e28,	// (0x00084229) sc_clock_pane_t3

0x0004,

0xfc48,	// (0x0008b049) sc_clock_pane_t_ParamLimits

0xfc48,	// (0x0008b049) sc_clock_pane_t

0x971f,	// (0x00084b20) main_fs_bigclock_indicator_pane_ParamLimits

0x971f,	// (0x00084b20) main_fs_bigclock_indicator_pane

0x8ec3,	// (0x000842c4) main_fs_bigclock_pane_g1_ParamLimits

0x8ec3,	// (0x000842c4) main_fs_bigclock_pane_g1

0x972b,	// (0x00084b2c) main_fs_bigclock_pane_t1_ParamLimits

0x972b,	// (0x00084b2c) main_fs_bigclock_pane_t1

0x973d,	// (0x00084b3e) main_fs_bigclock_pane_t2_ParamLimits

0x973d,	// (0x00084b3e) main_fs_bigclock_pane_t2

0x974f,	// (0x00084b50) main_fs_bigclock_pane_t3_ParamLimits

0x974f,	// (0x00084b50) main_fs_bigclock_pane_t3

0x0002,

0xfe20,	// (0x0008b221) main_fs_bigclock_pane_t_ParamLimits

0xfe20,	// (0x0008b221) main_fs_bigclock_pane_t

0xec65,	// (0x0008a066) main_fs_bigclock_indicator_pane_g1

0xe0a5,	// (0x000894a6) ncim_query_content_pane_g2_ParamLimits

0xe0a5,	// (0x000894a6) ncim_query_content_pane_g2

0x0001,

0xfbf6,	// (0x0008aff7) ncim_query_content_pane_g_ParamLimits

0xfbf6,	// (0x0008aff7) ncim_query_content_pane_g

0x8e3c,	// (0x0008423d) sc_clock_pane_t4_ParamLimits

0x8e3c,	// (0x0008423d) sc_clock_pane_t4

0xa99d,	// (0x00085d9e) main_radioblah_pane

0xd5c2,	// (0x000889c3) cell_call4_button_pane_t1_copy1_ParamLimits

0xd5c2,	// (0x000889c3) cell_call4_button_pane_t1_copy1

0x8ac3,	// (0x00083ec4) main_ncimui_pane_t1_ParamLimits

0x8ac3,	// (0x00083ec4) main_ncimui_pane_t1

0x8add,	// (0x00083ede) main_ncimui_pane_t2_ParamLimits

0x8add,	// (0x00083ede) main_ncimui_pane_t2

0x0002,

0xfbef,	// (0x0008aff0) main_ncimui_pane_t_ParamLimits

0xfbef,	// (0x0008aff0) main_ncimui_pane_t

0xe515,	// (0x00089916) main_radioblah_anim_pane_ParamLimits

0xe515,	// (0x00089916) main_radioblah_anim_pane

0xe526,	// (0x00089927) main_radioblah_info_pane_ParamLimits

0xe526,	// (0x00089927) main_radioblah_info_pane

0xe53a,	// (0x0008993b) main_radioblah_pane_t1_ParamLimits

0xe53a,	// (0x0008993b) main_radioblah_pane_t1

0xe556,	// (0x00089957) main_radioblah_pane_t2_ParamLimits

0xe556,	// (0x00089957) main_radioblah_pane_t2

0x0003,

0xfc69,	// (0x0008b06a) main_radioblah_pane_t_ParamLimits

0xfc69,	// (0x0008b06a) main_radioblah_pane_t

0x8f15,	// (0x00084316) main_radioblah_rocker_ctrl_pane_ParamLimits

0x8f15,	// (0x00084316) main_radioblah_rocker_ctrl_pane

0xe59e,	// (0x0008999f) main_radioblah_info_pane_t1_ParamLimits

0xe59e,	// (0x0008999f) main_radioblah_info_pane_t1

0x8f5a,	// (0x0008435b) main_radioblah_info_pane_t2_ParamLimits

0x8f5a,	// (0x0008435b) main_radioblah_info_pane_t2

0x0003,

0xfc72,	// (0x0008b073) main_radioblah_info_pane_t_ParamLimits

0xfc72,	// (0x0008b073) main_radioblah_info_pane_t

0xcc1c,	// (0x0008801d) main_radioblah_rocker_ctrl_pane_g1

0x900a,	// (0x0008440b) main_radioblah_rocker_ctrl_pane_g2

0x9012,	// (0x00084413) main_radioblah_rocker_ctrl_pane_g3

0x901a,	// (0x0008441b) main_radioblah_rocker_ctrl_pane_g4

0x9022,	// (0x00084423) main_radioblah_rocker_ctrl_pane_g5

0x902a,	// (0x0008442b) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc7b,	// (0x0008b07c) main_radioblah_rocker_ctrl_pane_g

0x8a63,	// (0x00083e64) main_cset_text2_pane_t1_copy1_ParamLimits

0x71bb,	// (0x000825bc) cam4_image_uncrop_qvga_pane

0x7302,	// (0x00082703) vid4_image_uncrop_qcif_pane

0x8627,	// (0x00083a28) cam6_image_uncrop_qvga_pane_ParamLimits

0x8627,	// (0x00083a28) cam6_image_uncrop_qvga_pane

0xdd91,	// (0x00089192) vid6_image_uncrop_qcif_pane_ParamLimits

0xdd91,	// (0x00089192) vid6_image_uncrop_qcif_pane

0x9ffc,	// (0x000853fd) bg_popup_preview_window_pane_cp03

0xe057,	// (0x00089458) list_cset_text2_pane

0xe05f,	// (0x00089460) main_cset6_text2_pane_g1

0xe067,	// (0x00089468) main_cset6_text2_pane_t1

0x9032,	// (0x00084433) list_cset_text2_pane_t1_ParamLimits

0x9032,	// (0x00084433) list_cset_text2_pane_t1

0xa99d,	// (0x00085d9e) main_radioblah_pane_ParamLimits

0x8d9b,	// (0x0008419c) main_mobtv_info_pane_t3_ParamLimits

0x8d9b,	// (0x0008419c) main_mobtv_info_pane_t3

0x8f03,	// (0x00084304) main_radioblah_pane_g1

0x8f2e,	// (0x0008432f) main_radioblah_info_pane_g1

0x8faf,	// (0x000843b0) main_radioblah_info_pane_t3_ParamLimits

0x8faf,	// (0x000843b0) main_radioblah_info_pane_t3

0x4132,	// (0x0007f533) highlight_cell_cale_month_pane_ParamLimits

0x4132,	// (0x0007f533) highlight_cell_cale_month_pane

0x9ffc,	// (0x000853fd) main_phob_fisheye_pane

0xcf64,	// (0x00088365) scroll_pane_cp0031_ParamLimits

0xcf64,	// (0x00088365) scroll_pane_cp0031

0xde9f,	// (0x000892a0) wait_bar_pane_cp08_ParamLimits

0x8801,	// (0x00083c02) cset_list_set_pane_copy1_ParamLimits

0xe5d8,	// (0x000899d9) highlight_cell_cale_month_pane_g1

0x9059,	// (0x0008445a) highlight_cell_cale_month_pane_t1

0xdb34,	// (0x00088f35) list_gen_pane_cp01

0xd78b,	// (0x00088b8c) scroll_pane_01

0x9067,	// (0x00084468) list_single_double_fisheye_pane

0x1427,	// (0x0007c828) list_double_fisheye_pane_g1_ParamLimits

0x1427,	// (0x0007c828) list_double_fisheye_pane_g1

0x9070,	// (0x00084471) list_double_fisheye_pane_g2_ParamLimits

0x9070,	// (0x00084471) list_double_fisheye_pane_g2

0x9084,	// (0x00084485) list_double_fisheye_pane_g3_ParamLimits

0x9084,	// (0x00084485) list_double_fisheye_pane_g3

0x0004,

0xfc88,	// (0x0008b089) list_double_fisheye_pane_g_ParamLimits

0xfc88,	// (0x0008b089) list_double_fisheye_pane_g

0x143f,	// (0x0007c840) list_double_fisheye_pane_t1_ParamLimits

0x143f,	// (0x0007c840) list_double_fisheye_pane_t1

0x145a,	// (0x0007c85b) list_double_fisheye_pane_t2_ParamLimits

0x145a,	// (0x0007c85b) list_double_fisheye_pane_t2

0x0001,

0xfc93,	// (0x0008b094) list_double_fisheye_pane_t_ParamLimits

0xfc93,	// (0x0008b094) list_double_fisheye_pane_t

0x9ffc,	// (0x000853fd) main_call5_pane

0x8e62,	// (0x00084263) sc_swipe_pane_ParamLimits

0x8e62,	// (0x00084263) sc_swipe_pane

0x90ad,	// (0x000844ae) call5_image_pane_ParamLimits

0x90ad,	// (0x000844ae) call5_image_pane

0x90bd,	// (0x000844be) call5_swipe_1_pane_ParamLimits

0x90bd,	// (0x000844be) call5_swipe_1_pane

0x90c9,	// (0x000844ca) call5_swipe_2_pane_ParamLimits

0x90c9,	// (0x000844ca) call5_swipe_2_pane

0x90e3,	// (0x000844e4) popup_call5_audio_first_window_ParamLimits

0x90e3,	// (0x000844e4) popup_call5_audio_first_window

0xce88,	// (0x00088289) call5_swipe_1_pane_g1_ParamLimits

0xce88,	// (0x00088289) call5_swipe_1_pane_g1

0xe5e0,	// (0x000899e1) call5_swipe_1_pane_g2_ParamLimits

0xe5e0,	// (0x000899e1) call5_swipe_1_pane_g2

0x0001,

0xfc98,	// (0x0008b099) call5_swipe_1_pane_g_ParamLimits

0xfc98,	// (0x0008b099) call5_swipe_1_pane_g

0xe5ec,	// (0x000899ed) call5_swipe_1_pane_t1_ParamLimits

0xe5ec,	// (0x000899ed) call5_swipe_1_pane_t1

0xce88,	// (0x00088289) call5_swipe_2_pane_g1_ParamLimits

0xce88,	// (0x00088289) call5_swipe_2_pane_g1

0xe601,	// (0x00089a02) call5_swipe_2_pane_g2_ParamLimits

0xe601,	// (0x00089a02) call5_swipe_2_pane_g2

0x0001,

0xfc9d,	// (0x0008b09e) call5_swipe_2_pane_g_ParamLimits

0xfc9d,	// (0x0008b09e) call5_swipe_2_pane_g

0xe60d,	// (0x00089a0e) call5_swipe_2_pane_t1_ParamLimits

0xe60d,	// (0x00089a0e) call5_swipe_2_pane_t1

0xe622,	// (0x00089a23) sc_swipe_pane_g1_ParamLimits

0xe622,	// (0x00089a23) sc_swipe_pane_g1

0xe62f,	// (0x00089a30) sc_swipe_pane_g2_ParamLimits

0xe62f,	// (0x00089a30) sc_swipe_pane_g2

0x0001,

0xfca2,	// (0x0008b0a3) sc_swipe_pane_g_ParamLimits

0xfca2,	// (0x0008b0a3) sc_swipe_pane_g

0xe63b,	// (0x00089a3c) sc_swipe_pane_t1_ParamLimits

0xe63b,	// (0x00089a3c) sc_swipe_pane_t1

0x9ffc,	// (0x000853fd) main_cmail_launcher_pane

0x90f1,	// (0x000844f2) aid_size_cell_cmail_l_ParamLimits

0x90f1,	// (0x000844f2) aid_size_cell_cmail_l

0x9101,	// (0x00084502) grid_cmail_l_pane_ParamLimits

0x9101,	// (0x00084502) grid_cmail_l_pane

0x9111,	// (0x00084512) cell_cmail_l_pane_ParamLimits

0x9111,	// (0x00084512) cell_cmail_l_pane

0x9125,	// (0x00084526) cell_cmail_l_pane_g1_ParamLimits

0x9125,	// (0x00084526) cell_cmail_l_pane_g1

0x9136,	// (0x00084537) cell_cmail_l_pane_t1_ParamLimits

0x9136,	// (0x00084537) cell_cmail_l_pane_t1

0xe650,	// (0x00089a51) cell_cmail_l_pane_t2_ParamLimits

0xe650,	// (0x00089a51) cell_cmail_l_pane_t2

0x0001,

0xfca7,	// (0x0008b0a8) cell_cmail_l_pane_t_ParamLimits

0xfca7,	// (0x0008b0a8) cell_cmail_l_pane_t

0xa99d,	// (0x00085d9e) grid_highlight_pane_cp018_ParamLimits

0xa99d,	// (0x00085d9e) grid_highlight_pane_cp018

0x2037,	// (0x0007d438) main2_pane_ParamLimits

0x2037,	// (0x0007d438) main2_pane

0xa853,	// (0x00085c54) popup_sp_fs_action_menu_bg_pane_g1

0xa85b,	// (0x00085c5c) popup_sp_fs_action_menu_bg_pane_g2

0xa863,	// (0x00085c64) popup_sp_fs_action_menu_bg_pane_g3

0xa86b,	// (0x00085c6c) popup_sp_fs_action_menu_bg_pane_g4

0xa873,	// (0x00085c74) popup_sp_fs_action_menu_bg_pane_g5

0xa87b,	// (0x00085c7c) popup_sp_fs_action_menu_bg_pane_g6

0xa883,	// (0x00085c84) popup_sp_fs_action_menu_bg_pane_g7

0xa88b,	// (0x00085c8c) popup_sp_fs_action_menu_bg_pane_g8

0xa893,	// (0x00085c94) popup_sp_fs_action_menu_bg_pane_g9

0xa89b,	// (0x00085c9c) popup_sp_fs_action_menu_bg_pane_g10

0xa89b,	// (0x00085c9c) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18d,	// (0x0008a58e) popup_sp_fs_action_menu_bg_pane_g

0x0d21,	// (0x0007c122) list_medium_line_x2_t3_g3_g1_ParamLimits

0x0d21,	// (0x0007c122) list_medium_line_x2_t3_g3_g1

0x2fa6,	// (0x0007e3a7) list_medium_line_x2_t3_g3_g2_ParamLimits

0x2fa6,	// (0x0007e3a7) list_medium_line_x2_t3_g3_g2

0x0d2d,	// (0x0007c12e) list_medium_line_x2_t3_g3_g3_ParamLimits

0x0d2d,	// (0x0007c12e) list_medium_line_x2_t3_g3_g3

0x0002,

0xf23d,	// (0x0008a63e) list_medium_line_x2_t3_g3_g_ParamLimits

0xf23d,	// (0x0008a63e) list_medium_line_x2_t3_g3_g

0x0d39,	// (0x0007c13a) list_medium_line_x2_t3_g3_t1_ParamLimits

0x0d39,	// (0x0007c13a) list_medium_line_x2_t3_g3_t1

0x0d4e,	// (0x0007c14f) list_medium_line_x2_t3_g3_t2_ParamLimits

0x0d4e,	// (0x0007c14f) list_medium_line_x2_t3_g3_t2

0x0d60,	// (0x0007c161) list_medium_line_x2_t3_g3_t3_ParamLimits

0x0d60,	// (0x0007c161) list_medium_line_x2_t3_g3_t3

0x0002,

0xf244,	// (0x0008a645) list_medium_line_x2_t3_g3_t_ParamLimits

0xf244,	// (0x0008a645) list_medium_line_x2_t3_g3_t

0x0d21,	// (0x0007c122) list_medium_line_x2_t3_g2_g1_ParamLimits

0x0d21,	// (0x0007c122) list_medium_line_x2_t3_g2_g1

0x0d2d,	// (0x0007c12e) list_medium_line_x2_t3_g2_g2_ParamLimits

0x0d2d,	// (0x0007c12e) list_medium_line_x2_t3_g2_g2

0x0001,

0xf24b,	// (0x0008a64c) list_medium_line_x2_t3_g2_g_ParamLimits

0xf24b,	// (0x0008a64c) list_medium_line_x2_t3_g2_g

0x0d75,	// (0x0007c176) list_medium_line_x2_t3_g2_t1_ParamLimits

0x0d75,	// (0x0007c176) list_medium_line_x2_t3_g2_t1

0x0d8b,	// (0x0007c18c) list_medium_line_x2_t3_g2_t2_ParamLimits

0x0d8b,	// (0x0007c18c) list_medium_line_x2_t3_g2_t2

0x0d9d,	// (0x0007c19e) list_medium_line_x2_t3_g2_t3_ParamLimits

0x0d9d,	// (0x0007c19e) list_medium_line_x2_t3_g2_t3

0x0002,

0xf250,	// (0x0008a651) list_medium_line_x2_t3_g2_t_ParamLimits

0xf250,	// (0x0008a651) list_medium_line_x2_t3_g2_t

0x0d21,	// (0x0007c122) list_medium_line_x2_t4_g4_g1_ParamLimits

0x0d21,	// (0x0007c122) list_medium_line_x2_t4_g4_g1

0x2fb2,	// (0x0007e3b3) list_medium_line_x2_t4_g4_g2_ParamLimits

0x2fb2,	// (0x0007e3b3) list_medium_line_x2_t4_g4_g2

0x2fa6,	// (0x0007e3a7) list_medium_line_x2_t4_g4_g3_ParamLimits

0x2fa6,	// (0x0007e3a7) list_medium_line_x2_t4_g4_g3

0x0dbb,	// (0x0007c1bc) list_medium_line_x2_t4_g4_g4_ParamLimits

0x0dbb,	// (0x0007c1bc) list_medium_line_x2_t4_g4_g4

0x0003,

0xf257,	// (0x0008a658) list_medium_line_x2_t4_g4_g_ParamLimits

0xf257,	// (0x0008a658) list_medium_line_x2_t4_g4_g

0x0dc7,	// (0x0007c1c8) list_medium_line_x2_t4_g4_t1_ParamLimits

0x0dc7,	// (0x0007c1c8) list_medium_line_x2_t4_g4_t1

0x0dde,	// (0x0007c1df) list_medium_line_x2_t4_g4_t2_ParamLimits

0x0dde,	// (0x0007c1df) list_medium_line_x2_t4_g4_t2

0x0df3,	// (0x0007c1f4) list_medium_line_x2_t4_g4_t3_ParamLimits

0x0df3,	// (0x0007c1f4) list_medium_line_x2_t4_g4_t3

0x0e05,	// (0x0007c206) list_medium_line_x2_t4_g4_t4_ParamLimits

0x0e05,	// (0x0007c206) list_medium_line_x2_t4_g4_t4

0x0003,

0xf260,	// (0x0008a661) list_medium_line_x2_t4_g4_t_ParamLimits

0xf260,	// (0x0008a661) list_medium_line_x2_t4_g4_t

0x0d21,	// (0x0007c122) list_medium_line_x2_t2_g4_g1_ParamLimits

0x0d21,	// (0x0007c122) list_medium_line_x2_t2_g4_g1

0x2fb2,	// (0x0007e3b3) list_medium_line_x2_t2_g4_g2_ParamLimits

0x2fb2,	// (0x0007e3b3) list_medium_line_x2_t2_g4_g2

0x2fa6,	// (0x0007e3a7) list_medium_line_x2_t2_g4_g3_ParamLimits

0x2fa6,	// (0x0007e3a7) list_medium_line_x2_t2_g4_g3

0x0d2d,	// (0x0007c12e) list_medium_line_x2_t2_g4_g4_ParamLimits

0x0d2d,	// (0x0007c12e) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c7,	// (0x0008a6c8) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c7,	// (0x0008a6c8) list_medium_line_x2_t2_g4_g

0x0e17,	// (0x0007c218) list_medium_line_x2_t2_g4_t1_ParamLimits

0x0e17,	// (0x0007c218) list_medium_line_x2_t2_g4_t1

0x0d60,	// (0x0007c161) list_medium_line_x2_t2_g4_t2_ParamLimits

0x0d60,	// (0x0007c161) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2d0,	// (0x0008a6d1) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2d0,	// (0x0008a6d1) list_medium_line_x2_t2_g4_t

0x0d21,	// (0x0007c122) list_medium_line_x2_t2_g3_g1_ParamLimits

0x0d21,	// (0x0007c122) list_medium_line_x2_t2_g3_g1

0x2fa6,	// (0x0007e3a7) list_medium_line_x2_t2_g3_g2_ParamLimits

0x2fa6,	// (0x0007e3a7) list_medium_line_x2_t2_g3_g2

0x0d2d,	// (0x0007c12e) list_medium_line_x2_t2_g3_g3_ParamLimits

0x0d2d,	// (0x0007c12e) list_medium_line_x2_t2_g3_g3

0x0002,

0xf23d,	// (0x0008a63e) list_medium_line_x2_t2_g3_g_ParamLimits

0xf23d,	// (0x0008a63e) list_medium_line_x2_t2_g3_g

0x0e2c,	// (0x0007c22d) list_medium_line_x2_t2_g3_t1_ParamLimits

0x0e2c,	// (0x0007c22d) list_medium_line_x2_t2_g3_t1

0x0d60,	// (0x0007c161) list_medium_line_x2_t2_g3_t2_ParamLimits

0x0d60,	// (0x0007c161) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d5,	// (0x0008a6d6) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d5,	// (0x0008a6d6) list_medium_line_x2_t2_g3_t

0x430a,	// (0x0007f70b) main_sp_fs_list_pane_ParamLimits

0x430a,	// (0x0007f70b) main_sp_fs_list_pane

0x4316,	// (0x0007f717) sp_fs_scroll_pane_ParamLimits

0x4316,	// (0x0007f717) sp_fs_scroll_pane

0x0e5b,	// (0x0007c25c) list_medium_line_x2_t3_t1

0x0e6b,	// (0x0007c26c) list_medium_line_x2_t3_t2

0x0e79,	// (0x0007c27a) list_medium_line_x2_t3_t3

0x0002,

0xf320,	// (0x0008a721) list_medium_line_x2_t3_t

0x0e87,	// (0x0007c288) list_medium_line_x3_t4_t1

0x0e97,	// (0x0007c298) list_medium_line_x3_t4_t2

0x0ea5,	// (0x0007c2a6) list_medium_line_x3_t4_t3

0x0e79,	// (0x0007c27a) list_medium_line_x3_t4_t4

0x0003,

0xf327,	// (0x0008a728) list_medium_line_x3_t4_t

0x0eb3,	// (0x0007c2b4) list_medium_line_x4_t5_t1

0x0ec3,	// (0x0007c2c4) list_medium_line_x4_t5_t2

0x0ea5,	// (0x0007c2a6) list_medium_line_x4_t5_t3

0x0ed1,	// (0x0007c2d2) list_medium_line_x4_t5_t4

0x0e79,	// (0x0007c27a) list_medium_line_x4_t5_t5

0x0004,

0xf330,	// (0x0008a731) list_medium_line_x4_t5_t

0x0d21,	// (0x0007c122) list_medium_line_t4_g4_g1_ParamLimits

0x0d21,	// (0x0007c122) list_medium_line_t4_g4_g1

0x0dbb,	// (0x0007c1bc) list_medium_line_t4_g4_g2_ParamLimits

0x0dbb,	// (0x0007c1bc) list_medium_line_t4_g4_g2

0x0edf,	// (0x0007c2e0) list_medium_line_t4_g4_g3_ParamLimits

0x0edf,	// (0x0007c2e0) list_medium_line_t4_g4_g3

0x0d2d,	// (0x0007c12e) list_medium_line_t4_g4_g4_ParamLimits

0x0d2d,	// (0x0007c12e) list_medium_line_t4_g4_g4

0x0003,

0xf33b,	// (0x0008a73c) list_medium_line_t4_g4_g_ParamLimits

0xf33b,	// (0x0008a73c) list_medium_line_t4_g4_g

0x0eeb,	// (0x0007c2ec) list_medium_line_t4_g4_t1_ParamLimits

0x0eeb,	// (0x0007c2ec) list_medium_line_t4_g4_t1

0x0f00,	// (0x0007c301) list_medium_line_t4_g4_t2_ParamLimits

0x0f00,	// (0x0007c301) list_medium_line_t4_g4_t2

0x0f16,	// (0x0007c317) list_medium_line_t4_g4_t3_ParamLimits

0x0f16,	// (0x0007c317) list_medium_line_t4_g4_t3

0x0d60,	// (0x0007c161) list_medium_line_t4_g4_t4_ParamLimits

0x0d60,	// (0x0007c161) list_medium_line_t4_g4_t4

0x0003,

0xf344,	// (0x0008a745) list_medium_line_t4_g4_t_ParamLimits

0xf344,	// (0x0008a745) list_medium_line_t4_g4_t

0x440d,	// (0x0007f80e) chi_dic_find_pane_g1

0x528b,	// (0x0008068c) main_tport_pane

0x117a,	// (0x0007c57b) list_medium_line_plain_t1

0x1188,	// (0x0007c589) list_medium_line_t2_g2_g1_ParamLimits

0x1188,	// (0x0007c589) list_medium_line_t2_g2_g1

0x7d5b,	// (0x0008315c) list_medium_line_t2_g2_g2_ParamLimits

0x7d5b,	// (0x0008315c) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x0008ae01) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x0008ae01) list_medium_line_t2_g2_g

0x1194,	// (0x0007c595) list_medium_line_t2_g2_t1_ParamLimits

0x1194,	// (0x0007c595) list_medium_line_t2_g2_t1

0x11ab,	// (0x0007c5ac) list_medium_line_t2_g2_t2_ParamLimits

0x11ab,	// (0x0007c5ac) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x0008ae06) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x0008ae06) list_medium_line_t2_g2_t

0x1357,	// (0x0007c758) aid_sp_fs_list_icon_a_sm

0x82de,	// (0x000836df) aid_sp_fs_list_icon_d

0xa9ab,	// (0x00085dac) aid_sp_fs_text_primary

0x82e6,	// (0x000836e7) aid_sp_fs_text_secondary

0x82ef,	// (0x000836f0) list_medium_line

0x82ef,	// (0x000836f0) list_medium_line_g2

0x82ef,	// (0x000836f0) list_medium_line_g3

0x82ef,	// (0x000836f0) list_medium_line_plain

0x82ef,	// (0x000836f0) list_medium_line_plain_t2

0x82ef,	// (0x000836f0) list_medium_line_plain_t3

0x82ef,	// (0x000836f0) list_medium_line_right_icon

0x82ef,	// (0x000836f0) list_medium_line_right_iconx2

0x82ef,	// (0x000836f0) list_medium_line_t2

0x82ef,	// (0x000836f0) list_medium_line_t2_g2

0x82ef,	// (0x000836f0) list_medium_line_t2_g3

0x82ef,	// (0x000836f0) list_medium_line_t2_right_icon

0x82ef,	// (0x000836f0) list_medium_line_t2_right_iconx2

0x82ef,	// (0x000836f0) list_medium_line_t3

0x82ef,	// (0x000836f0) list_medium_line_t3_g2

0x82ef,	// (0x000836f0) list_medium_line_t3_g3

0x82ef,	// (0x000836f0) list_medium_line_t3_right_iconx2

0x82f8,	// (0x000836f9) list_medium_line_t4_g4

0x8301,	// (0x00083702) list_medium_line_x2

0x8301,	// (0x00083702) list_medium_line_x2_t2_g2

0x8301,	// (0x00083702) list_medium_line_x2_t2_g3

0x8301,	// (0x00083702) list_medium_line_x2_t2_g4

0x8301,	// (0x00083702) list_medium_line_x2_t3

0x8301,	// (0x00083702) list_medium_line_x2_t3_g2

0x8301,	// (0x00083702) list_medium_line_x2_t3_g3

0x8301,	// (0x00083702) list_medium_line_x2_t3_g4

0x8301,	// (0x00083702) list_medium_line_x2_t4_g2

0x8301,	// (0x00083702) list_medium_line_x2_t4_g4

0x830a,	// (0x0008370b) list_medium_line_x3

0x830a,	// (0x0008370b) list_medium_line_x3_t4

0x830a,	// (0x0008370b) list_medium_line_x3_t4_g4

0x82f8,	// (0x000836f9) list_medium_line_x4_t4

0x82f8,	// (0x000836f9) list_medium_line_x4_t4_g7

0x82f8,	// (0x000836f9) list_medium_line_x4_t5

0x135f,	// (0x0007c760) list_single_fs_dyc_pane_ParamLimits

0x135f,	// (0x0007c760) list_single_fs_dyc_pane

0x0d21,	// (0x0007c122) list_medium_line_x4_t4_g7_g1_ParamLimits

0x0d21,	// (0x0007c122) list_medium_line_x4_t4_g7_g1

0x1373,	// (0x0007c774) list_medium_line_x4_t4_g7_g2_ParamLimits

0x1373,	// (0x0007c774) list_medium_line_x4_t4_g7_g2

0x8a48,	// (0x00083e49) list_medium_line_x4_t4_g7_g3_ParamLimits

0x8a48,	// (0x00083e49) list_medium_line_x4_t4_g7_g3

0x8a57,	// (0x00083e58) list_medium_line_x4_t4_g7_g4_ParamLimits

0x8a57,	// (0x00083e58) list_medium_line_x4_t4_g7_g4

0x137f,	// (0x0007c780) list_medium_line_x4_t4_g7_g5_ParamLimits

0x137f,	// (0x0007c780) list_medium_line_x4_t4_g7_g5

0x138e,	// (0x0007c78f) list_medium_line_x4_t4_g7_g6_ParamLimits

0x138e,	// (0x0007c78f) list_medium_line_x4_t4_g7_g6

0x139d,	// (0x0007c79e) list_medium_line_x4_t4_g7_g7_ParamLimits

0x139d,	// (0x0007c79e) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd0,	// (0x0008afd1) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd0,	// (0x0008afd1) list_medium_line_x4_t4_g7_g

0x13a9,	// (0x0007c7aa) list_medium_line_x4_t4_g7_t1_ParamLimits

0x13a9,	// (0x0007c7aa) list_medium_line_x4_t4_g7_t1

0x13be,	// (0x0007c7bf) list_medium_line_x4_t4_g7_t2_ParamLimits

0x13be,	// (0x0007c7bf) list_medium_line_x4_t4_g7_t2

0x13d3,	// (0x0007c7d4) list_medium_line_x4_t4_g7_t3_ParamLimits

0x13d3,	// (0x0007c7d4) list_medium_line_x4_t4_g7_t3

0x13e8,	// (0x0007c7e9) list_medium_line_x4_t4_g7_t4_ParamLimits

0x13e8,	// (0x0007c7e9) list_medium_line_x4_t4_g7_t4

0x13fa,	// (0x0007c7fb) list_medium_line_x4_t4_g7_t5_ParamLimits

0x13fa,	// (0x0007c7fb) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdf,	// (0x0008afe0) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdf,	// (0x0008afe0) list_medium_line_x4_t4_g7_t

0x140c,	// (0x0007c80d) list_single_dyc_row_pane_ParamLimits

0x140c,	// (0x0007c80d) list_single_dyc_row_pane

0x90a1,	// (0x000844a2) call5_gesture_pane_ParamLimits

0x90a1,	// (0x000844a2) call5_gesture_pane

0x90d5,	// (0x000844d6) call5_windows_pane_ParamLimits

0x90d5,	// (0x000844d6) call5_windows_pane

0x914c,	// (0x0008454d) call5_swipe_1_pane_cp_ParamLimits

0x914c,	// (0x0008454d) call5_swipe_1_pane_cp

0x9158,	// (0x00084559) call5_swipe_2_pane_cp_ParamLimits

0x9158,	// (0x00084559) call5_swipe_2_pane_cp

0xb404,	// (0x00086805) call5_image_pane_cp

0x9164,	// (0x00084565) popup_call5_audio_first_window_cp_ParamLimits

0x9164,	// (0x00084565) popup_call5_audio_first_window_cp

0xe622,	// (0x00089a23) call5_swipe_1_pane_g1_cp_ParamLimits

0xe622,	// (0x00089a23) call5_swipe_1_pane_g1_cp

0xe662,	// (0x00089a63) call5_swipe_1_pane_g2_cp

0xe63b,	// (0x00089a3c) call5_swipe_1_pane_t1_cp_ParamLimits

0xe63b,	// (0x00089a3c) call5_swipe_1_pane_t1_cp

0xe622,	// (0x00089a23) call5_swipe_2_pane_g1_cp_ParamLimits

0xe622,	// (0x00089a23) call5_swipe_2_pane_g1_cp

0xe66a,	// (0x00089a6b) call5_swipe_2_pane_g2_cp

0xe672,	// (0x00089a73) call5_swipe_2_pane_t1_cp_ParamLimits

0xe672,	// (0x00089a73) call5_swipe_2_pane_t1_cp

0xa99d,	// (0x00085d9e) main_sp_fs_email_pane

0xe687,	// (0x00089a88) main_sp_fs_listscroll_pane_te

0xa7ae,	// (0x00085baf) popup_sp_fs_action_menu_pane_ParamLimits

0xa7ae,	// (0x00085baf) popup_sp_fs_action_menu_pane

0xcc1c,	// (0x0008801d) bg_sp_fs_ctrlbar_pane_g1

0xe690,	// (0x00089a91) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe699,	// (0x00089a9a) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe6a2,	// (0x00089aa3) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcc1c,	// (0x0008801d) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcac,	// (0x0008b0ad) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc9ff,	// (0x00087e00) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc9ff,	// (0x00087e00) bg_sp_fs_ctrlbar_ddmenu_pane

0xe6ab,	// (0x00089aac) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe6ab,	// (0x00089aac) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe6b7,	// (0x00089ab8) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe6b7,	// (0x00089ab8) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcb5,	// (0x0008b0b6) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcb5,	// (0x0008b0b6) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe6c3,	// (0x00089ac4) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe6c3,	// (0x00089ac4) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x9172,	// (0x00084573) list_medium_line_t2_right_icon_g1

0x147c,	// (0x0007c87d) list_medium_line_t2_right_icon_t1

0x148c,	// (0x0007c88d) list_medium_line_t2_right_icon_t2

0x0001,

0xfcba,	// (0x0008b0bb) list_medium_line_t2_right_icon_t

0xc812,	// (0x00087c13) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc812,	// (0x00087c13) bg_sp_fs_ctrlbar_pane

0x91d1,	// (0x000845d2) main_sp_fs_ctrlbar_button_pane_cp01

0x91d9,	// (0x000845da) main_sp_fs_ctrlbar_ddmenu_pane

0xe715,	// (0x00089b16) main_sp_fs_ctrlbar_pane_g1

0xe721,	// (0x00089b22) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcbf,	// (0x0008b0c0) main_sp_fs_ctrlbar_pane_g

0xe72d,	// (0x00089b2e) main_sp_fs_ctrlbar_pane_t1

0x91e3,	// (0x000845e4) main_sp_fs_ctrlbar_pane

0x91f9,	// (0x000845fa) main_sp_fs_listscroll_pane_te_cp01

0x149a,	// (0x0007c89b) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x149a,	// (0x0007c89b) popup_sp_fs_action_menu_pane_cp01

0xa99d,	// (0x00085d9e) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa99d,	// (0x00085d9e) bg_sp_fs_highlight_list_pane_cp01

0x14c4,	// (0x0007c8c5) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x14c4,	// (0x0007c8c5) sp_fs_action_menu_list_gene_pane_g1

0xe75d,	// (0x00089b5e) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe75d,	// (0x00089b5e) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcc9,	// (0x0008b0ca) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcc9,	// (0x0008b0ca) sp_fs_action_menu_list_gene_pane_g

0x14d3,	// (0x0007c8d4) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x14d3,	// (0x0007c8d4) sp_fs_action_menu_list_gene_pane_t1

0x14eb,	// (0x0007c8ec) sp_fs_action_menu_list_gene_pane_ParamLimits

0x14eb,	// (0x0007c8ec) sp_fs_action_menu_list_gene_pane

0xe76a,	// (0x00089b6b) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe76a,	// (0x00089b6b) popup_sp_fs_action_menu_bg_pane

0x150a,	// (0x0007c90b) sp_fs_action_menu_list_pane_ParamLimits

0x150a,	// (0x0007c90b) sp_fs_action_menu_list_pane

0x920a,	// (0x0008460b) sp_fs_scroll_pane_cp01_ParamLimits

0x920a,	// (0x0008460b) sp_fs_scroll_pane_cp01

0x152a,	// (0x0007c92b) list_medium_line_plain_t2_t1

0x153a,	// (0x0007c93b) list_medium_line_plain_t2_t2

0x0001,

0xfcce,	// (0x0008b0cf) list_medium_line_plain_t2_t

0x1548,	// (0x0007c949) list_medium_line_plain_t3_t1

0x1558,	// (0x0007c959) list_medium_line_plain_t3_t2

0x1566,	// (0x0007c967) list_medium_line_plain_t3_t3

0x0002,

0xfcd3,	// (0x0008b0d4) list_medium_line_plain_t3_t

0x0d21,	// (0x0007c122) list_medium_line_x2_t2_g2_g1_ParamLimits

0x0d21,	// (0x0007c122) list_medium_line_x2_t2_g2_g1

0x0d2d,	// (0x0007c12e) list_medium_line_x2_t2_g2_g2_ParamLimits

0x0d2d,	// (0x0007c12e) list_medium_line_x2_t2_g2_g2

0x0001,

0xf24b,	// (0x0008a64c) list_medium_line_x2_t2_g2_g_ParamLimits

0xf24b,	// (0x0008a64c) list_medium_line_x2_t2_g2_g

0x0eeb,	// (0x0007c2ec) list_medium_line_x2_t2_g2_t1_ParamLimits

0x0eeb,	// (0x0007c2ec) list_medium_line_x2_t2_g2_t1

0x0d60,	// (0x0007c161) list_medium_line_x2_t2_g2_t2_ParamLimits

0x0d60,	// (0x0007c161) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcda,	// (0x0008b0db) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcda,	// (0x0008b0db) list_medium_line_x2_t2_g2_t

0x0d21,	// (0x0007c122) list_medium_line_x2_t4_g2_g1_ParamLimits

0x0d21,	// (0x0007c122) list_medium_line_x2_t4_g2_g1

0x1574,	// (0x0007c975) list_medium_line_x2_t4_g2_g2_ParamLimits

0x1574,	// (0x0007c975) list_medium_line_x2_t4_g2_g2

0x0001,

0xfcdf,	// (0x0008b0e0) list_medium_line_x2_t4_g2_g_ParamLimits

0xfcdf,	// (0x0008b0e0) list_medium_line_x2_t4_g2_g

0x1586,	// (0x0007c987) list_medium_line_x2_t4_g2_t1_ParamLimits

0x1586,	// (0x0007c987) list_medium_line_x2_t4_g2_t1

0x15a0,	// (0x0007c9a1) list_medium_line_x2_t4_g2_t2_ParamLimits

0x15a0,	// (0x0007c9a1) list_medium_line_x2_t4_g2_t2

0x15b5,	// (0x0007c9b6) list_medium_line_x2_t4_g2_t3_ParamLimits

0x15b5,	// (0x0007c9b6) list_medium_line_x2_t4_g2_t3

0x0d60,	// (0x0007c161) list_medium_line_x2_t4_g2_t4_ParamLimits

0x0d60,	// (0x0007c161) list_medium_line_x2_t4_g2_t4

0x0003,

0xfce4,	// (0x0008b0e5) list_medium_line_x2_t4_g2_t_ParamLimits

0xfce4,	// (0x0008b0e5) list_medium_line_x2_t4_g2_t

0x9230,	// (0x00084631) list_medium_line_t3_right_iconx2_g1

0x9172,	// (0x00084573) list_medium_line_t3_right_iconx2_g2

0x15ca,	// (0x0007c9cb) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfced,	// (0x0008b0ee) list_medium_line_t3_right_iconx2_g

0x15d2,	// (0x0007c9d3) list_medium_line_t3_right_iconx2_t1

0x15e2,	// (0x0007c9e3) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfcf4,	// (0x0008b0f5) list_medium_line_t3_right_iconx2_t

0x0d21,	// (0x0007c122) list_medium_line_x3_t4_g4_g1_ParamLimits

0x0d21,	// (0x0007c122) list_medium_line_x3_t4_g4_g1

0x2fa6,	// (0x0007e3a7) list_medium_line_x3_t4_g4_g2_ParamLimits

0x2fa6,	// (0x0007e3a7) list_medium_line_x3_t4_g4_g2

0x0dbb,	// (0x0007c1bc) list_medium_line_x3_t4_g4_g3_ParamLimits

0x0dbb,	// (0x0007c1bc) list_medium_line_x3_t4_g4_g3

0x9238,	// (0x00084639) list_medium_line_x3_t4_g4_g4_ParamLimits

0x9238,	// (0x00084639) list_medium_line_x3_t4_g4_g4

0x0003,

0xfcf9,	// (0x0008b0fa) list_medium_line_x3_t4_g4_g_ParamLimits

0xfcf9,	// (0x0008b0fa) list_medium_line_x3_t4_g4_g

0x15f0,	// (0x0007c9f1) list_medium_line_x3_t4_g4_t1_ParamLimits

0x15f0,	// (0x0007c9f1) list_medium_line_x3_t4_g4_t1

0x1607,	// (0x0007ca08) list_medium_line_x3_t4_g4_t2_ParamLimits

0x1607,	// (0x0007ca08) list_medium_line_x3_t4_g4_t2

0x161c,	// (0x0007ca1d) list_medium_line_x3_t4_g4_t3_ParamLimits

0x161c,	// (0x0007ca1d) list_medium_line_x3_t4_g4_t3

0x1631,	// (0x0007ca32) list_medium_line_x3_t4_g4_t4_ParamLimits

0x1631,	// (0x0007ca32) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd02,	// (0x0008b103) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd02,	// (0x0008b103) list_medium_line_x3_t4_g4_t

0x164e,	// (0x0007ca4f) list_single_dyc_row_text_pane_t1_ParamLimits

0x164e,	// (0x0007ca4f) list_single_dyc_row_text_pane_t1

0x1685,	// (0x0007ca86) list_single_dyc_row_text_pane_t2_ParamLimits

0x1685,	// (0x0007ca86) list_single_dyc_row_text_pane_t2

0x16fb,	// (0x0007cafc) list_single_dyc_row_text_pane_t3_ParamLimits

0x16fb,	// (0x0007cafc) list_single_dyc_row_text_pane_t3

0x0005,

0xfd0b,	// (0x0008b10c) list_single_dyc_row_text_pane_t_ParamLimits

0xfd0b,	// (0x0008b10c) list_single_dyc_row_text_pane_t

0x17cc,	// (0x0007cbcd) list_single_dyc_row_pane_g1_ParamLimits

0x17cc,	// (0x0007cbcd) list_single_dyc_row_pane_g1

0x17d8,	// (0x0007cbd9) list_single_dyc_row_pane_g2_ParamLimits

0x17d8,	// (0x0007cbd9) list_single_dyc_row_pane_g2

0x17e4,	// (0x0007cbe5) list_single_dyc_row_pane_g3_ParamLimits

0x17e4,	// (0x0007cbe5) list_single_dyc_row_pane_g3

0x17f0,	// (0x0007cbf1) list_single_dyc_row_pane_g4_ParamLimits

0x17f0,	// (0x0007cbf1) list_single_dyc_row_pane_g4

0x0003,

0xfd18,	// (0x0008b119) list_single_dyc_row_pane_g_ParamLimits

0xfd18,	// (0x0008b119) list_single_dyc_row_pane_g

0x17fc,	// (0x0007cbfd) list_single_dyc_row_text_pane_ParamLimits

0x17fc,	// (0x0007cbfd) list_single_dyc_row_text_pane

0x9ffc,	// (0x000853fd) bg_sp_fs_scroll_pane

0xe778,	// (0x00089b79) thumb_sp_fs_scroll_pane

0x1188,	// (0x0007c589) list_medium_line_g1_ParamLimits

0x1188,	// (0x0007c589) list_medium_line_g1

0x181b,	// (0x0007cc1c) list_medium_line_t1_ParamLimits

0x181b,	// (0x0007cc1c) list_medium_line_t1

0x0d21,	// (0x0007c122) list_medium_line_x2_g1_ParamLimits

0x0d21,	// (0x0007c122) list_medium_line_x2_g1

0x2fa6,	// (0x0007e3a7) list_medium_line_x2_g2_ParamLimits

0x2fa6,	// (0x0007e3a7) list_medium_line_x2_g2

0x0001,

0xfd21,	// (0x0008b122) list_medium_line_x2_g_ParamLimits

0xfd21,	// (0x0008b122) list_medium_line_x2_g

0x1830,	// (0x0007cc31) list_medium_line_x2_t1_ParamLimits

0x1830,	// (0x0007cc31) list_medium_line_x2_t1

0x0d21,	// (0x0007c122) list_medium_line_x3_g1_ParamLimits

0x0d21,	// (0x0007c122) list_medium_line_x3_g1

0x2fa6,	// (0x0007e3a7) list_medium_line_x3_g2_ParamLimits

0x2fa6,	// (0x0007e3a7) list_medium_line_x3_g2

0x0001,

0xfd21,	// (0x0008b122) list_medium_line_x3_g_ParamLimits

0xfd21,	// (0x0008b122) list_medium_line_x3_g

0x1830,	// (0x0007cc31) list_medium_line_x3_t1_ParamLimits

0x1830,	// (0x0007cc31) list_medium_line_x3_t1

0xe781,	// (0x00089b82) thumb_sp_fs_scroll_pane_g1

0xe78a,	// (0x00089b8b) thumb_sp_fs_scroll_pane_g2

0xe793,	// (0x00089b94) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd26,	// (0x0008b127) thumb_sp_fs_scroll_pane_g

0xe781,	// (0x00089b82) bg_sp_fs_scroll_pane_g1

0xe78a,	// (0x00089b8b) bg_sp_fs_scroll_pane_g2

0xe793,	// (0x00089b94) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd26,	// (0x0008b127) bg_sp_fs_scroll_pane_g

0x0d21,	// (0x0007c122) list_medium_line_x2_t3_g4_g1_ParamLimits

0x0d21,	// (0x0007c122) list_medium_line_x2_t3_g4_g1

0x2fb2,	// (0x0007e3b3) list_medium_line_x2_t3_g4_g2_ParamLimits

0x2fb2,	// (0x0007e3b3) list_medium_line_x2_t3_g4_g2

0x2fa6,	// (0x0007e3a7) list_medium_line_x2_t3_g4_g3_ParamLimits

0x2fa6,	// (0x0007e3a7) list_medium_line_x2_t3_g4_g3

0x0d2d,	// (0x0007c12e) list_medium_line_x2_t3_g4_g4_ParamLimits

0x0d2d,	// (0x0007c12e) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c7,	// (0x0008a6c8) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c7,	// (0x0008a6c8) list_medium_line_x2_t3_g4_g

0x1846,	// (0x0007cc47) list_medium_line_x2_t3_g4_t1_ParamLimits

0x1846,	// (0x0007cc47) list_medium_line_x2_t3_g4_t1

0x185c,	// (0x0007cc5d) list_medium_line_x2_t3_g4_t2_ParamLimits

0x185c,	// (0x0007cc5d) list_medium_line_x2_t3_g4_t2

0x0d60,	// (0x0007c161) list_medium_line_x2_t3_g4_t3_ParamLimits

0x0d60,	// (0x0007c161) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd2d,	// (0x0008b12e) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd2d,	// (0x0008b12e) list_medium_line_x2_t3_g4_t

0x1188,	// (0x0007c589) list_medium_line_g2_g1_ParamLimits

0x1188,	// (0x0007c589) list_medium_line_g2_g1

0x7d5b,	// (0x0008315c) list_medium_line_g2_g2_ParamLimits

0x7d5b,	// (0x0008315c) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x0008ae01) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x0008ae01) list_medium_line_g2_g

0x1875,	// (0x0007cc76) list_medium_line_g2_t1_ParamLimits

0x1875,	// (0x0007cc76) list_medium_line_g2_t1

0x1188,	// (0x0007c589) list_medium_line_t3_g2_g1_ParamLimits

0x1188,	// (0x0007c589) list_medium_line_t3_g2_g1

0x7d5b,	// (0x0008315c) list_medium_line_t3_g2_g2_ParamLimits

0x7d5b,	// (0x0008315c) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x0008ae01) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x0008ae01) list_medium_line_t3_g2_g

0x188a,	// (0x0007cc8b) list_medium_line_t3_g2_t1_ParamLimits

0x188a,	// (0x0007cc8b) list_medium_line_t3_g2_t1

0x18a1,	// (0x0007cca2) list_medium_line_t3_g2_t2_ParamLimits

0x18a1,	// (0x0007cca2) list_medium_line_t3_g2_t2

0x18b6,	// (0x0007ccb7) list_medium_line_t3_g2_t3_ParamLimits

0x18b6,	// (0x0007ccb7) list_medium_line_t3_g2_t3

0x0002,

0xfd34,	// (0x0008b135) list_medium_line_t3_g2_t_ParamLimits

0xfd34,	// (0x0008b135) list_medium_line_t3_g2_t

0x9172,	// (0x00084573) list_medium_line_right_icon_g1

0x18cb,	// (0x0007cccc) list_medium_line_right_icon_t1

0x1188,	// (0x0007c589) list_medium_line_t2_g1_ParamLimits

0x1188,	// (0x0007c589) list_medium_line_t2_g1

0x18d9,	// (0x0007ccda) list_medium_line_t2_t1_ParamLimits

0x18d9,	// (0x0007ccda) list_medium_line_t2_t1

0x18f3,	// (0x0007ccf4) list_medium_line_t2_t2_ParamLimits

0x18f3,	// (0x0007ccf4) list_medium_line_t2_t2

0x0001,

0xfd3b,	// (0x0008b13c) list_medium_line_t2_t_ParamLimits

0xfd3b,	// (0x0008b13c) list_medium_line_t2_t

0x1188,	// (0x0007c589) list_medium_line_t3_g1_ParamLimits

0x1188,	// (0x0007c589) list_medium_line_t3_g1

0x1908,	// (0x0007cd09) list_medium_line_t3_t1_ParamLimits

0x1908,	// (0x0007cd09) list_medium_line_t3_t1

0x1922,	// (0x0007cd23) list_medium_line_t3_t2_ParamLimits

0x1922,	// (0x0007cd23) list_medium_line_t3_t2

0x1937,	// (0x0007cd38) list_medium_line_t3_t3_ParamLimits

0x1937,	// (0x0007cd38) list_medium_line_t3_t3

0x0002,

0xfd40,	// (0x0008b141) list_medium_line_t3_t_ParamLimits

0xfd40,	// (0x0008b141) list_medium_line_t3_t

0x1188,	// (0x0007c589) list_medium_line_g3_g1_ParamLimits

0x1188,	// (0x0007c589) list_medium_line_g3_g1

0x9244,	// (0x00084645) list_medium_line_g3_g2_ParamLimits

0x9244,	// (0x00084645) list_medium_line_g3_g2

0x7d5b,	// (0x0008315c) list_medium_line_g3_g3_ParamLimits

0x7d5b,	// (0x0008315c) list_medium_line_g3_g3

0x0002,

0xfd47,	// (0x0008b148) list_medium_line_g3_g_ParamLimits

0xfd47,	// (0x0008b148) list_medium_line_g3_g

0x194c,	// (0x0007cd4d) list_medium_line_g3_t1_ParamLimits

0x194c,	// (0x0007cd4d) list_medium_line_g3_t1

0x1188,	// (0x0007c589) list_medium_line_t2_g3_g1_ParamLimits

0x1188,	// (0x0007c589) list_medium_line_t2_g3_g1

0x9244,	// (0x00084645) list_medium_line_t2_g3_g2_ParamLimits

0x9244,	// (0x00084645) list_medium_line_t2_g3_g2

0x7d5b,	// (0x0008315c) list_medium_line_t2_g3_g3_ParamLimits

0x7d5b,	// (0x0008315c) list_medium_line_t2_g3_g3

0x0002,

0xfd47,	// (0x0008b148) list_medium_line_t2_g3_g_ParamLimits

0xfd47,	// (0x0008b148) list_medium_line_t2_g3_g

0x1961,	// (0x0007cd62) list_medium_line_t2_g3_t1_ParamLimits

0x1961,	// (0x0007cd62) list_medium_line_t2_g3_t1

0x197b,	// (0x0007cd7c) list_medium_line_t2_g3_t2_ParamLimits

0x197b,	// (0x0007cd7c) list_medium_line_t2_g3_t2

0x0001,

0xfd4e,	// (0x0008b14f) list_medium_line_t2_g3_t_ParamLimits

0xfd4e,	// (0x0008b14f) list_medium_line_t2_g3_t

0x1188,	// (0x0007c589) list_medium_line_t3_g3_g1_ParamLimits

0x1188,	// (0x0007c589) list_medium_line_t3_g3_g1

0x9244,	// (0x00084645) list_medium_line_t3_g3_g2_ParamLimits

0x9244,	// (0x00084645) list_medium_line_t3_g3_g2

0x7d5b,	// (0x0008315c) list_medium_line_t3_g3_g3_ParamLimits

0x7d5b,	// (0x0008315c) list_medium_line_t3_g3_g3

0x0002,

0xfd47,	// (0x0008b148) list_medium_line_t3_g3_g_ParamLimits

0xfd47,	// (0x0008b148) list_medium_line_t3_g3_g

0x1990,	// (0x0007cd91) list_medium_line_t3_g3_t1_ParamLimits

0x1990,	// (0x0007cd91) list_medium_line_t3_g3_t1

0x19a9,	// (0x0007cdaa) list_medium_line_t3_g3_t2_ParamLimits

0x19a9,	// (0x0007cdaa) list_medium_line_t3_g3_t2

0x19bf,	// (0x0007cdc0) list_medium_line_t3_g3_t3_ParamLimits

0x19bf,	// (0x0007cdc0) list_medium_line_t3_g3_t3

0x0002,

0xfd53,	// (0x0008b154) list_medium_line_t3_g3_t_ParamLimits

0xfd53,	// (0x0008b154) list_medium_line_t3_g3_t

0x9230,	// (0x00084631) list_medium_line_right_iconx2_g1

0x9172,	// (0x00084573) list_medium_line_right_iconx2_g2

0x0001,

0xfd5a,	// (0x0008b15b) list_medium_line_right_iconx2_g

0x9250,	// (0x00084651) list_medium_line_right_iconx2_t1

0x9230,	// (0x00084631) list_medium_line_t2_right_iconx2_g1

0x9172,	// (0x00084573) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd5a,	// (0x0008b15b) list_medium_line_t2_right_iconx2_g

0x19d5,	// (0x0007cdd6) list_medium_line_t2_right_iconx2_t1

0x19e5,	// (0x0007cde6) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd5f,	// (0x0008b160) list_medium_line_t2_right_iconx2_t

0x19f3,	// (0x0007cdf4) list_medium_line_x4_t4_t1

0x1a01,	// (0x0007ce02) list_medium_line_x4_t4_t2

0x1a11,	// (0x0007ce12) list_medium_line_x4_t4_t3

0x1a21,	// (0x0007ce22) list_medium_line_x4_t4_t4

0x0003,

0xfd64,	// (0x0008b165) list_medium_line_x4_t4_t

0x9288,	// (0x00084689) tport_appsw_pane_ParamLimits

0x9288,	// (0x00084689) tport_appsw_pane

0x9296,	// (0x00084697) tport_contact_pane_ParamLimits

0x9296,	// (0x00084697) tport_contact_pane

0x92a6,	// (0x000846a7) tport_listscroll_pane_ParamLimits

0x92a6,	// (0x000846a7) tport_listscroll_pane

0x92b6,	// (0x000846b7) cell_tport_appsw_pane_ParamLimits

0x92b6,	// (0x000846b7) cell_tport_appsw_pane

0xceed,	// (0x000882ee) tport_appsw_pane_g1_ParamLimits

0xceed,	// (0x000882ee) tport_appsw_pane_g1

0xe79c,	// (0x00089b9d) tport_contact_pane_g1

0xe12b,	// (0x0008952c) tport_contact_pane_t1

0xe7a5,	// (0x00089ba6) tport_contact_pane_t2

0x0001,

0xfd6d,	// (0x0008b16e) tport_contact_pane_t

0xe7b3,	// (0x00089bb4) list_tport_pane

0xe7bc,	// (0x00089bbd) scroll_pane_cp_030

0x92e9,	// (0x000846ea) cell_tport_appsw_pane_g1

0x92f9,	// (0x000846fa) cell_tport_appsw_pane_t1

0x9307,	// (0x00084708) grid_highlight_pane_cp019

0x930f,	// (0x00084710) list_tport_double_graphic_pane_ParamLimits

0x930f,	// (0x00084710) list_tport_double_graphic_pane

0xa99d,	// (0x00085d9e) list_highlight_pane_cp023_ParamLimits

0xa99d,	// (0x00085d9e) list_highlight_pane_cp023

0x9321,	// (0x00084722) list_tport_double_graphic_pane_g1_ParamLimits

0x9321,	// (0x00084722) list_tport_double_graphic_pane_g1

0x932e,	// (0x0008472f) list_tport_double_graphic_pane_t1_ParamLimits

0x932e,	// (0x0008472f) list_tport_double_graphic_pane_t1

0x9343,	// (0x00084744) list_tport_double_graphic_pane_t2_ParamLimits

0x9343,	// (0x00084744) list_tport_double_graphic_pane_t2

0x0001,

0xfd79,	// (0x0008b17a) list_tport_double_graphic_pane_t_ParamLimits

0xfd79,	// (0x0008b17a) list_tport_double_graphic_pane_t

0x9ffc,	// (0x000853fd) main_cale_note_pane

0x7555,	// (0x00082956) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x7555,	// (0x00082956) cell_vitu2_function_top_wide_pane_cp01

0x8daf,	// (0x000841b0) wait_bar_pane_cp05_ParamLimits

0xa99d,	// (0x00085d9e) listscroll_cmail_pane

0xe7c5,	// (0x00089bc6) list_cmail_pane

0x9355,	// (0x00084756) list_cmail_body_pane

0x937c,	// (0x0008477d) list_single_cmail_header_caption_pane

0x93b0,	// (0x000847b1) list_single_cmail_header_detail_pane_ParamLimits

0x93b0,	// (0x000847b1) list_single_cmail_header_detail_pane

0xe7d5,	// (0x00089bd6) list_single_cmail_header_caption_pane_t1

0x1a31,	// (0x0007ce32) list_single_cmail_header_detail_pane_g1_ParamLimits

0x1a31,	// (0x0007ce32) list_single_cmail_header_detail_pane_g1

0x93f4,	// (0x000847f5) list_single_cmail_header_detail_pane_g2_ParamLimits

0x93f4,	// (0x000847f5) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd7e,	// (0x0008b17f) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd7e,	// (0x0008b17f) list_single_cmail_header_detail_pane_g

0x1a47,	// (0x0007ce48) list_single_cmail_header_detail_pane_t1_ParamLimits

0x1a47,	// (0x0007ce48) list_single_cmail_header_detail_pane_t1

0x1aa7,	// (0x0007cea8) list_single_cmail_header_editor_pane_bg_ParamLimits

0x1aa7,	// (0x0007cea8) list_single_cmail_header_editor_pane_bg

0xe7f0,	// (0x00089bf1) list_cmail_body_pane_g1

0xe7f9,	// (0x00089bfa) list_cmail_body_pane_t1

0xd671,	// (0x00088a72) list_single_cmail_header_editor_pane_bg_g1

0xabdf,	// (0x00085fe0) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd681,	// (0x00088a82) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd679,	// (0x00088a7a) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd8b9,	// (0x00088cba) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd6a1,	// (0x00088aa2) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd691,	// (0x00088a92) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd699,	// (0x00088a9a) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xabbf,	// (0x00085fc0) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x9400,	// (0x00084801) calenote_gesture_pane_ParamLimits

0x9400,	// (0x00084801) calenote_gesture_pane

0x941a,	// (0x0008481b) calenote_window_pane_ParamLimits

0x941a,	// (0x0008481b) calenote_window_pane

0xe807,	// (0x00089c08) popup_note_window_cp01

0x9432,	// (0x00084833) calenote_swipe_1_pane_ParamLimits

0x9432,	// (0x00084833) calenote_swipe_1_pane

0x9158,	// (0x00084559) calenote_swipe_2_pane_ParamLimits

0x9158,	// (0x00084559) calenote_swipe_2_pane

0xe622,	// (0x00089a23) calenote_swipe_1_pane_g1_ParamLimits

0xe622,	// (0x00089a23) calenote_swipe_1_pane_g1

0xe62f,	// (0x00089a30) calenote_swipe_1_pane_g2_ParamLimits

0xe62f,	// (0x00089a30) calenote_swipe_1_pane_g2

0x0001,

0xfca2,	// (0x0008b0a3) calenote_swipe_1_pane_g_ParamLimits

0xfca2,	// (0x0008b0a3) calenote_swipe_1_pane_g

0xe819,	// (0x00089c1a) calenote_swipe_1_pane_t1_ParamLimits

0xe819,	// (0x00089c1a) calenote_swipe_1_pane_t1

0xe622,	// (0x00089a23) calenote_swipe_2_pane_g1_ParamLimits

0xe622,	// (0x00089a23) calenote_swipe_2_pane_g1

0xe838,	// (0x00089c39) calenote_swipe_2_pane_g2_ParamLimits

0xe838,	// (0x00089c39) calenote_swipe_2_pane_g2

0x0001,

0xfd8a,	// (0x0008b18b) calenote_swipe_2_pane_g_ParamLimits

0xfd8a,	// (0x0008b18b) calenote_swipe_2_pane_g

0xe844,	// (0x00089c45) calenote_swipe_2_pane_t1_ParamLimits

0xe844,	// (0x00089c45) calenote_swipe_2_pane_t1

0x9ffc,	// (0x000853fd) main_mup_navstr_pane

0x62b9,	// (0x000816ba) main_mup3_pane_t7_ParamLimits

0x62b9,	// (0x000816ba) main_mup3_pane_t7

0x6ce3,	// (0x000820e4) main_mp4_pane_g6_ParamLimits

0x6ce3,	// (0x000820e4) main_mp4_pane_g6

0x7055,	// (0x00082456) main_image3_pane_t4_ParamLimits

0x7055,	// (0x00082456) main_image3_pane_t4

0x9445,	// (0x00084846) popup_navstr_preview_pane_ParamLimits

0x9445,	// (0x00084846) popup_navstr_preview_pane

0x9451,	// (0x00084852) scroll_navstr_pane_ParamLimits

0x9451,	// (0x00084852) scroll_navstr_pane

0x9ffc,	// (0x000853fd) bg_popup_preview_window_pane_cp04

0xe86b,	// (0x00089c6c) popup_navstr_preview_pane_t1

0x945d,	// (0x0008485e) scroll_navstr_pane_g1_ParamLimits

0x945d,	// (0x0008485e) scroll_navstr_pane_g1

0x946a,	// (0x0008486b) scroll_navstr_pane_t1_ParamLimits

0x946a,	// (0x0008486b) scroll_navstr_pane_t1

0xe810,	// (0x00089c11) bg_button_pane_cp014

0xe810,	// (0x00089c11) bg_button_pane_cp030

0x1433,	// (0x0007c834) list_double_fisheye_pane_g4_ParamLimits

0x1433,	// (0x0007c834) list_double_fisheye_pane_g4

0x9090,	// (0x00084491) list_double_fisheye_pane_g5_ParamLimits

0x9090,	// (0x00084491) list_double_fisheye_pane_g5

0xcc4e,	// (0x0008804f) sp_fs_scroll_pane_cp03

0xe715,	// (0x00089b16) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe721,	// (0x00089b22) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcbf,	// (0x0008b0c0) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe72d,	// (0x00089b2e) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe7cd,	// (0x00089bce) sp_fs_scroll_pane_cp02

0xa8be,	// (0x00085cbf) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa8be,	// (0x00085cbf) popup_sp_fs_calendar_preview_list_single_pane

0x9ffc,	// (0x000853fd) main_cam6_pano_pane

0xa99d,	// (0x00085d9e) main_mup3_pane_ParamLimits

0x9ffc,	// (0x000853fd) main_phacti_pane

0x8c84,	// (0x00084085) bg_button_pane_cp11

0x8c9c,	// (0x0008409d) main_mobtv_info_pane_g2_ParamLimits

0x8c9c,	// (0x0008409d) main_mobtv_info_pane_g2

0x0001,

0xfc1f,	// (0x0008b020) main_mobtv_info_pane_g_ParamLimits

0xfc1f,	// (0x0008b020) main_mobtv_info_pane_g

0x8e4e,	// (0x0008424f) sc_clock_pane_t5_ParamLimits

0x8e4e,	// (0x0008424f) sc_clock_pane_t5

0x8f03,	// (0x00084304) main_radioblah_pane_g1_ParamLimits

0xe56e,	// (0x0008996f) main_radioblah_pane_t3_ParamLimits

0xe56e,	// (0x0008996f) main_radioblah_pane_t3

0xe586,	// (0x00089987) main_radioblah_pane_t4_ParamLimits

0xe586,	// (0x00089987) main_radioblah_pane_t4

0x8f21,	// (0x00084322) main_radioblah_text_pane_ParamLimits

0x8f21,	// (0x00084322) main_radioblah_text_pane

0x8f2e,	// (0x0008432f) main_radioblah_info_pane_g1_ParamLimits

0x8fc3,	// (0x000843c4) main_radioblah_info_pane_t4_ParamLimits

0x8fc3,	// (0x000843c4) main_radioblah_info_pane_t4

0xa99d,	// (0x00085d9e) main_sp_fs_calendar_pane

0x947c,	// (0x0008487d) main_phacti_pane_g1

0x9484,	// (0x00084885) phacti_note_pane_ParamLimits

0x9484,	// (0x00084885) phacti_note_pane

0xe882,	// (0x00089c83) phacti_term_pane_ParamLimits

0xe882,	// (0x00089c83) phacti_term_pane

0xe897,	// (0x00089c98) phacti_note_pane_t1_ParamLimits

0xe897,	// (0x00089c98) phacti_note_pane_t1

0x1abe,	// (0x0007cebf) phacti_term_pane_g1

0x1ac6,	// (0x0007cec7) phacti_term_pane_t1_ParamLimits

0x1ac6,	// (0x0007cec7) phacti_term_pane_t1

0xe8ae,	// (0x00089caf) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe8b6,	// (0x00089cb7) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfd94,	// (0x0008b195) popup_sp_fs_calendar_preview_list_single_pane_g

0xe8be,	// (0x00089cbf) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe8be,	// (0x00089cbf) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe8d4,	// (0x00089cd5) aid_popup_sp_fs_bg_corner_pane

0xcc1c,	// (0x0008801d) popup_sp_fs_calendar_preview_bg_pane_g1

0x9ffc,	// (0x000853fd) popup_sp_fs_calendar_preview_bg_pane

0x949a,	// (0x0008489b) popup_sp_fs_calendar_preview_list_pane

0xc812,	// (0x00087c13) bg_main_sp_fs_cale_pane_ParamLimits

0xc812,	// (0x00087c13) bg_main_sp_fs_cale_pane

0x1af0,	// (0x0007cef1) listscroll_cale_mrui_pane_ParamLimits

0x1af0,	// (0x0007cef1) listscroll_cale_mrui_pane

0x1b05,	// (0x0007cf06) listscroll_sp_fs_schedule_track_pane

0x1b0e,	// (0x0007cf0f) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x1b0e,	// (0x0007cf0f) main_sp_fs_ctrlbar_pane_cp01

0xe8dc,	// (0x00089cdd) main_sp_fs_ribbon_pane

0x1b21,	// (0x0007cf22) popup_sp_fs_cale_preview_window

0x94f8,	// (0x000848f9) list_single_sp_fs_schedule_track_pane_ParamLimits

0x94f8,	// (0x000848f9) list_single_sp_fs_schedule_track_pane

0xed32,	// (0x0008a133) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xed32,	// (0x0008a133) bg_sp_fs_highlight_list_pane_cp03

0x9526,	// (0x00084927) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x9526,	// (0x00084927) list_single_sp_fs_schedule_track_pane_g1

0x9532,	// (0x00084933) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x9532,	// (0x00084933) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfd99,	// (0x0008b19a) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfd99,	// (0x0008b19a) list_single_sp_fs_schedule_track_pane_g

0x953e,	// (0x0008493f) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x953e,	// (0x0008493f) list_single_sp_fs_schedule_track_pane_t1

0x9556,	// (0x00084957) sp_fs_schedule_track_pane_ParamLimits

0x9556,	// (0x00084957) sp_fs_schedule_track_pane

0xe8e4,	// (0x00089ce5) sp_fs_schedule_track_pane_g1

0xe8ec,	// (0x00089ced) sp_fs_schedule_track_pane_g2

0xe8f4,	// (0x00089cf5) sp_fs_schedule_track_pane_g3

0xe8fc,	// (0x00089cfd) sp_fs_schedule_track_pane_g4

0xe904,	// (0x00089d05) sp_fs_schedule_track_pane_g5

0x0004,

0x0b60,	// (0x0007bf61) sp_fs_schedule_track_pane_g

0xd671,	// (0x00088a72) bg_sp_fs_schedule_viewer_highlight_g1

0xabdf,	// (0x00085fe0) bg_sp_fs_schedule_viewer_highlight_g2

0xd679,	// (0x00088a7a) bg_sp_fs_schedule_viewer_highlight_g3

0xd681,	// (0x00088a82) bg_sp_fs_schedule_viewer_highlight_g4

0xd8b9,	// (0x00088cba) bg_sp_fs_schedule_viewer_highlight_g5

0xd691,	// (0x00088a92) bg_sp_fs_schedule_viewer_highlight_g6

0xd699,	// (0x00088a9a) bg_sp_fs_schedule_viewer_highlight_g7

0xd6a1,	// (0x00088aa2) bg_sp_fs_schedule_viewer_highlight_g8

0xabbf,	// (0x00085fc0) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfd9e,	// (0x0008b19f) bg_sp_fs_schedule_viewer_highlight_g

0x9ffc,	// (0x000853fd) bg_main_sp_fs_ribbon_pane

0x9566,	// (0x00084967) main_sp_fs_ribbon_pane_g1

0xe90c,	// (0x00089d0d) main_sp_fs_ribbon_pane_t1

0x956f,	// (0x00084970) main_sp_fs_ribbon_pane_t2

0xe91b,	// (0x00089d1c) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdb1,	// (0x0008b1b2) main_sp_fs_ribbon_pane_t

0xe92a,	// (0x00089d2b) main_sp_fs_ribbon_scheduler_pane

0xe932,	// (0x00089d33) bg_main_sp_fs_ribbon_pane_g1

0xe93b,	// (0x00089d3c) bg_main_sp_fs_ribbon_pane_g2

0xe944,	// (0x00089d45) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0x0b85,	// (0x0007bf86) bg_main_sp_fs_ribbon_pane_g

0xe94c,	// (0x00089d4d) main_sp_fs_ribbon_scheduler_pane_g1

0xe955,	// (0x00089d56) main_sp_fs_ribbon_scheduler_pane_g2

0xe95e,	// (0x00089d5f) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0x0b8c,	// (0x0007bf8d) main_sp_fs_ribbon_scheduler_pane_g

0xe967,	// (0x00089d68) list_cale_mrui_pane

0x9580,	// (0x00084981) sp_fs_scroll_pane_cp07_ParamLimits

0x9580,	// (0x00084981) sp_fs_scroll_pane_cp07

0x959c,	// (0x0008499d) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x959c,	// (0x0008499d) bg_sp_fs_schedule_viewer_highlight

0xe974,	// (0x00089d75) list_single_sp_fs_schedule_track_pane_cp01

0xe97c,	// (0x00089d7d) list_sp_fs_schedule_track_pane

0xe984,	// (0x00089d85) sp_fs_scroll_pane_cp06_ParamLimits

0xe984,	// (0x00089d85) sp_fs_scroll_pane_cp06

0xcc1c,	// (0x0008801d) bgmain_sp_fs_calendar_pane_g1

0x1b33,	// (0x0007cf34) list_single_cale_mrui_pane_ParamLimits

0x1b33,	// (0x0007cf34) list_single_cale_mrui_pane

0x1b64,	// (0x0007cf65) list_single_cale_mrui_row_pane_ParamLimits

0x1b64,	// (0x0007cf65) list_single_cale_mrui_row_pane

0x1b71,	// (0x0007cf72) list_single_cale_mrui_row_pane_g1_ParamLimits

0x1b71,	// (0x0007cf72) list_single_cale_mrui_row_pane_g1

0x1ba9,	// (0x0007cfaa) list_single_cale_mrui_row_pane_t1_ParamLimits

0x1ba9,	// (0x0007cfaa) list_single_cale_mrui_row_pane_t1

0x1bbb,	// (0x0007cfbc) list_single_cale_mrui_row_pane_t2_ParamLimits

0x1bbb,	// (0x0007cfbc) list_single_cale_mrui_row_pane_t2

0x1c21,	// (0x0007d022) list_single_cale_mrui_row_pane_t3_ParamLimits

0x1c21,	// (0x0007d022) list_single_cale_mrui_row_pane_t3

0x1c50,	// (0x0007d051) list_single_cale_mrui_row_pane_t4_ParamLimits

0x1c50,	// (0x0007d051) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdbf,	// (0x0008b1c0) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdbf,	// (0x0008b1c0) list_single_cale_mrui_row_pane_t

0x1c7f,	// (0x0007d080) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x1c7f,	// (0x0007d080) list_single_cmail_header_editor_pane_bg_cp01

0x1ca1,	// (0x0007d0a2) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x1ca1,	// (0x0007d0a2) list_single_cmail_header_editor_pane_bg_cp02

0x95a9,	// (0x000849aa) main_radioblah_text_pane_t1_ParamLimits

0x95a9,	// (0x000849aa) main_radioblah_text_pane_t1

0xe9a3,	// (0x00089da4) cam6_indi_pane_cp01

0xe9ab,	// (0x00089dac) cam6_mode_pane_cp01

0xe9b3,	// (0x00089db4) cam6_pano_pane

0xe9bc,	// (0x00089dbd) cam6_zoom_pane_cp01

0xe9c4,	// (0x00089dc5) cam6_pano_image_pane

0xe9cf,	// (0x00089dd0) cam6_pano_pane_g1

0xe2d2,	// (0x000896d3) cam6_pano_pane_g2

0xe9d8,	// (0x00089dd9) cam6_pano_pane_g3

0xe9e1,	// (0x00089de2) cam6_pano_pane_g4

0xd1ca,	// (0x000885cb) cam6_pano_pane_g5

0xe9ea,	// (0x00089deb) cam6_pano_pane_g6

0xe9f4,	// (0x00089df5) cam6_pano_pane_g7

0xe9fc,	// (0x00089dfd) cam6_pano_pane_g8

0xea05,	// (0x00089e06) cam6_pano_pane_g9

0x0008,

0xfdc8,	// (0x0008b1c9) cam6_pano_pane_g

0x9ffc,	// (0x000853fd) main_browser_tag_pane

0xe863,	// (0x00089c64) grid_navstr_albumart_pane

0xea10,	// (0x00089e11) cell_navstr_albumart_pane_ParamLimits

0xea10,	// (0x00089e11) cell_navstr_albumart_pane

0xb571,	// (0x00086972) cell_navstr_albumart_pane_g1

0xc623,	// (0x00087a24) cell_navstr_albumart_pane_g2

0xc633,	// (0x00087a34) cell_navstr_albumart_pane_g3

0xc62b,	// (0x00087a2c) cell_navstr_albumart_pane_g4

0x0003,

0xfddb,	// (0x0008b1dc) cell_navstr_albumart_pane_g

0x95c4,	// (0x000849c5) bt_list_pane_ParamLimits

0x95c4,	// (0x000849c5) bt_list_pane

0xea32,	// (0x00089e33) bt_list_pane_t1

0xea41,	// (0x00089e42) bt_list_pane_t2

0x0001,

0x0bbf,	// (0x0007bfc0) bt_list_pane_t

0x9ffc,	// (0x000853fd) main_cale_prevew_pane

0x95e8,	// (0x000849e9) popup_cale_preview_window_ParamLimits

0x95e8,	// (0x000849e9) popup_cale_preview_window

0xa99d,	// (0x00085d9e) bg_popup_preview_window_pane_cp05_ParamLimits

0xa99d,	// (0x00085d9e) bg_popup_preview_window_pane_cp05

0xea50,	// (0x00089e51) list_cale_preview_pane_ParamLimits

0xea50,	// (0x00089e51) list_cale_preview_pane

0xea5c,	// (0x00089e5d) list_double_cale_preview_pane_ParamLimits

0xea5c,	// (0x00089e5d) list_double_cale_preview_pane

0xea6e,	// (0x00089e6f) list_single_cale_preview_pane_ParamLimits

0xea6e,	// (0x00089e6f) list_single_cale_preview_pane

0xea82,	// (0x00089e83) list_single_cale_preview_pane_g1

0xea8a,	// (0x00089e8b) list_single_cale_preview_pane_t1_ParamLimits

0xea8a,	// (0x00089e8b) list_single_cale_preview_pane_t1

0xea9f,	// (0x00089ea0) list_double_cale_preview_pane_g1

0xeaa7,	// (0x00089ea8) list_double_cale_preview_pane_t1_ParamLimits

0xeaa7,	// (0x00089ea8) list_double_cale_preview_pane_t1

0xeabc,	// (0x00089ebd) list_double_cale_preview_pane_t2_ParamLimits

0xeabc,	// (0x00089ebd) list_double_cale_preview_pane_t2

0x0001,

0x0bc4,	// (0x0007bfc5) list_double_cale_preview_pane_t_ParamLimits

0x0bc4,	// (0x0007bfc5) list_double_cale_preview_pane_t

0x9ffc,	// (0x000853fd) main_ezdial_pane

0xa99d,	// (0x00085d9e) main_sp_fs_email_pane_ParamLimits

0x917a,	// (0x0008457b) cmail_ddmenu_btn01_pane_ParamLimits

0x917a,	// (0x0008457b) cmail_ddmenu_btn01_pane

0x9197,	// (0x00084598) cmail_ddmenu_btn02_pane_ParamLimits

0x9197,	// (0x00084598) cmail_ddmenu_btn02_pane

0x91b5,	// (0x000845b6) cmail_ddmenu_btn03_pane_ParamLimits

0x91b5,	// (0x000845b6) cmail_ddmenu_btn03_pane

0x91e3,	// (0x000845e4) main_sp_fs_ctrlbar_pane_ParamLimits

0x91f9,	// (0x000845fa) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x9355,	// (0x00084756) list_cmail_body_pane_ParamLimits

0x93eb,	// (0x000847ec) bg_button_pane_cp12

0xe7e3,	// (0x00089be4) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe7e3,	// (0x00089be4) list_single_cmail_header_detail_pane_g3

0x1a83,	// (0x0007ce84) list_single_cmail_header_detail_pane_t2_ParamLimits

0x1a83,	// (0x0007ce84) list_single_cmail_header_detail_pane_t2

0x0001,

0xfd85,	// (0x0008b186) list_single_cmail_header_detail_pane_t_ParamLimits

0xfd85,	// (0x0008b186) list_single_cmail_header_detail_pane_t

0x1adb,	// (0x0007cedc) phacti_term_pane_t2_ParamLimits

0x1adb,	// (0x0007cedc) phacti_term_pane_t2

0x0001,

0xfd8f,	// (0x0008b190) phacti_term_pane_t_ParamLimits

0xfd8f,	// (0x0008b190) phacti_term_pane_t

0xead4,	// (0x00089ed5) aid_size_list_single_double

0x95ff,	// (0x00084a00) popup_ezdial_listscroll_window

0x9622,	// (0x00084a23) popup_number_entry_window_cp01

0xb404,	// (0x00086805) bg_popup_call_pane_cp09

0xeae0,	// (0x00089ee1) ezdial_list_pane

0xeae8,	// (0x00089ee9) scroll_pane_cp23

0xc9ff,	// (0x00087e00) bg_button_pane_cp028_ParamLimits

0xc9ff,	// (0x00087e00) bg_button_pane_cp028

0x9630,	// (0x00084a31) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x9630,	// (0x00084a31) cmail_ddmenu_btn01_pane_g1

0x9642,	// (0x00084a43) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x9642,	// (0x00084a43) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfde4,	// (0x0008b1e5) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfde4,	// (0x0008b1e5) cmail_ddmenu_btn01_pane_g

0xeaf0,	// (0x00089ef1) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeaf0,	// (0x00089ef1) cmail_ddmenu_btn01_pane_t1

0xc812,	// (0x00087c13) bg_button_pane_cp029_ParamLimits

0xc812,	// (0x00087c13) bg_button_pane_cp029

0x964e,	// (0x00084a4f) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x964e,	// (0x00084a4f) cmail_ddmenu_btn02_pane_g1

0x9666,	// (0x00084a67) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x9666,	// (0x00084a67) cmail_ddmenu_btn02_pane_t1

0xed32,	// (0x0008a133) bg_button_pane_cp031_ParamLimits

0xed32,	// (0x0008a133) bg_button_pane_cp031

0x964e,	// (0x00084a4f) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x964e,	// (0x00084a4f) cmail_ddmenu_btn03_pane_g1

0x9666,	// (0x00084a67) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x9666,	// (0x00084a67) cmail_ddmenu_btn03_pane_t1

0x6f00,	// (0x00082301) cell_dialer2_keypad_pane_t1_ParamLimits

0x6f1a,	// (0x0008231b) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x6f1a,	// (0x0008231b) cell_dialer2_keypad_pane_t1_copy1

0x8b09,	// (0x00083f0a) ncimui_group_button_pane

0xa99d,	// (0x00085d9e) main_sp_fs_calendar_pane_ParamLimits

0x937c,	// (0x0008477d) list_single_cmail_header_caption_pane_ParamLimits

0x94c0,	// (0x000848c1) aid_recal_txt_sm_pane

0x9ffc,	// (0x000853fd) mian_recal_day_pane

0x1b21,	// (0x0007cf22) popup_sp_fs_cale_preview_window_ParamLimits

0xeb05,	// (0x00089f06) list_recal_day_pane

0x1cd8,	// (0x0007d0d9) list_single_recal_day_pane_ParamLimits

0x1cd8,	// (0x0007d0d9) list_single_recal_day_pane

0xeb2c,	// (0x00089f2d) list_single_recal_day_pane_g1_ParamLimits

0xeb2c,	// (0x00089f2d) list_single_recal_day_pane_g1

0x1cea,	// (0x0007d0eb) list_single_recal_day_pane_g2_ParamLimits

0x1cea,	// (0x0007d0eb) list_single_recal_day_pane_g2

0x1cfa,	// (0x0007d0fb) list_single_recal_day_pane_g3_ParamLimits

0x1cfa,	// (0x0007d0fb) list_single_recal_day_pane_g3

0x1d06,	// (0x0007d107) list_single_recal_day_pane_g4_ParamLimits

0x1d06,	// (0x0007d107) list_single_recal_day_pane_g4

0x1d1c,	// (0x0007d11d) list_single_recal_day_pane_g5_ParamLimits

0x1d1c,	// (0x0007d11d) list_single_recal_day_pane_g5

0x1d36,	// (0x0007d137) list_single_recal_day_pane_g6_ParamLimits

0x1d36,	// (0x0007d137) list_single_recal_day_pane_g6

0x0004,

0xfdf3,	// (0x0008b1f4) list_single_recal_day_pane_g_ParamLimits

0xfdf3,	// (0x0008b1f4) list_single_recal_day_pane_g

0x1d4a,	// (0x0007d14b) list_single_recal_day_pane_t1

0x1d5c,	// (0x0007d15d) list_single_recal_day_pane_t2

0x0001,

0xfdfe,	// (0x0008b1ff) list_single_recal_day_pane_t

0x968a,	// (0x00084a8b) ncimui_query_button_pane_ParamLimits

0x968a,	// (0x00084a8b) ncimui_query_button_pane

0x969a,	// (0x00084a9b) ncimui_query_button_pane_t1_ParamLimits

0x969a,	// (0x00084a9b) ncimui_query_button_pane_t1

0xeb38,	// (0x00089f39) ncimui_query_button_pane_t2_ParamLimits

0xeb38,	// (0x00089f39) ncimui_query_button_pane_t2

0x0001,

0xfe03,	// (0x0008b204) ncimui_query_button_pane_t_ParamLimits

0xfe03,	// (0x0008b204) ncimui_query_button_pane_t

0x96ad,	// (0x00084aae) query_button_pane_ParamLimits

0x96ad,	// (0x00084aae) query_button_pane

0x9ffc,	// (0x000853fd) bg_button_pane_cp0028

0xeb4b,	// (0x00089f4c) query_button_pane_t1

0x528b,	// (0x0008068c) main_tport_pane_ParamLimits

0x925e,	// (0x0008465f) bg_popup_window_pane_cp01_ParamLimits

0x925e,	// (0x0008465f) bg_popup_window_pane_cp01

0x926c,	// (0x0008466d) heading_pane_cp08_ParamLimits

0x926c,	// (0x0008466d) heading_pane_cp08

0x927a,	// (0x0008467b) heading_pane_cp07_ParamLimits

0x927a,	// (0x0008467b) heading_pane_cp07

0x92e9,	// (0x000846ea) cell_tport_appsw_pane_g2

0x0002,

0xfd72,	// (0x0008b173) cell_tport_appsw_pane_g

0x0f48,	// (0x0007c349) input_candi_list_open_g1

0xadaa,	// (0x000861ab) list_cale_time_pane_g6_ParamLimits

0xadaa,	// (0x000861ab) list_cale_time_pane_g6

0x5d13,	// (0x00081114) aid_size_touch_calib_1_ParamLimits

0x5d13,	// (0x00081114) aid_size_touch_calib_1

0x5d1f,	// (0x00081120) aid_size_touch_calib_2_ParamLimits

0x5d1f,	// (0x00081120) aid_size_touch_calib_2

0x5d2d,	// (0x0008112e) aid_size_touch_calib_3_ParamLimits

0x5d2d,	// (0x0008112e) aid_size_touch_calib_3

0x5d3d,	// (0x0008113e) aid_size_touch_calib_4_ParamLimits

0x5d3d,	// (0x0008113e) aid_size_touch_calib_4

0x5d4b,	// (0x0008114c) main_touch_calib_button_group_pane_ParamLimits

0x5d4b,	// (0x0008114c) main_touch_calib_button_group_pane

0x5d59,	// (0x0008115a) main_touch_calib_pane_g1_ParamLimits

0x5d65,	// (0x00081166) main_touch_calib_pane_g2_ParamLimits

0x5d71,	// (0x00081172) main_touch_calib_pane_g3_ParamLimits

0x5d7d,	// (0x0008117e) main_touch_calib_pane_g4_ParamLimits

0xf756,	// (0x0008ab57) main_touch_calib_pane_g_ParamLimits

0x5d89,	// (0x0008118a) main_touch_calib_pane_t1_ParamLimits

0x5da2,	// (0x000811a3) main_touch_calib_pane_t2_ParamLimits

0x5dbb,	// (0x000811bc) main_touch_calib_pane_t3_ParamLimits

0x5dd1,	// (0x000811d2) main_touch_calib_pane_t4_ParamLimits

0x5de7,	// (0x000811e8) main_touch_calib_pane_t5_ParamLimits

0xf75f,	// (0x0008ab60) main_touch_calib_pane_t_ParamLimits

0xcf88,	// (0x00088389) list_single_fp_cale_pane_g3_ParamLimits

0xcf88,	// (0x00088389) list_single_fp_cale_pane_g3

0xa99d,	// (0x00085d9e) bg_button_pane_cp012_ParamLimits

0xa99d,	// (0x00085d9e) bg_vkb2_func_pane_cp03_ParamLimits

0x7cdb,	// (0x000830dc) cell_vitu2_function_top_pane_g1_ParamLimits

0xa99d,	// (0x00085d9e) bg_vkb2_func_pane_cp04_ParamLimits

0x8a91,	// (0x00083e92) main_ncimui_button_group_pane_ParamLimits

0x8a91,	// (0x00083e92) main_ncimui_button_group_pane

0x8af7,	// (0x00083ef8) main_ncimui_pane_t3_ParamLimits

0x8af7,	// (0x00083ef8) main_ncimui_pane_t3

0xe879,	// (0x00089c7a) phacti_button_group_pane

0xead4,	// (0x00089ed5) aid_size_list_single_double_ParamLimits

0x95ff,	// (0x00084a00) popup_ezdial_listscroll_window_ParamLimits

0x9622,	// (0x00084a23) popup_number_entry_window_cp01_ParamLimits

0x96ba,	// (0x00084abb) phacti_button_pane_ParamLimits

0x96ba,	// (0x00084abb) phacti_button_pane

0x9ffc,	// (0x000853fd) bg_button_pane_cp14

0xeb59,	// (0x00089f5a) phacti_button_pane_t1

0x96cb,	// (0x00084acc) main_touch_calib_button_pane_ParamLimits

0x96cb,	// (0x00084acc) main_touch_calib_button_pane

0xa758,	// (0x00085b59) bg_button_pane_cp18_ParamLimits

0xa758,	// (0x00085b59) bg_button_pane_cp18

0xeb67,	// (0x00089f68) main_touch_calib_button_pane_t1_ParamLimits

0xeb67,	// (0x00089f68) main_touch_calib_button_pane_t1

0xeb7d,	// (0x00089f7e) main_touch_calib_button_pane_t2_ParamLimits

0xeb7d,	// (0x00089f7e) main_touch_calib_button_pane_t2

0x0001,

0x0bed,	// (0x0007bfee) main_touch_calib_button_pane_t_ParamLimits

0x0bed,	// (0x0007bfee) main_touch_calib_button_pane_t

0x9ffc,	// (0x000853fd) cell_ncimui_button_pane

0x9ffc,	// (0x000853fd) bg_button_pane_cp032

0xeb9b,	// (0x00089f9c) cell_ncimui_button_pane_t1

0x6f76,	// (0x00082377) image3_infobar_pane_ParamLimits

0x6f76,	// (0x00082377) image3_infobar_pane

0x8e70,	// (0x00084271) fs_bigclock_status_pane_ParamLimits

0x8e70,	// (0x00084271) fs_bigclock_status_pane

0x8e7d,	// (0x0008427e) main_fs_bigclock_clock_pane_ParamLimits

0x8e7d,	// (0x0008427e) main_fs_bigclock_clock_pane

0x8ea1,	// (0x000842a2) main_fs_bigclock_indi_pane_ParamLimits

0x8ea1,	// (0x000842a2) main_fs_bigclock_indi_pane

0x8ed1,	// (0x000842d2) main_fs_bigclock_swipe_pane_ParamLimits

0x8ed1,	// (0x000842d2) main_fs_bigclock_swipe_pane

0x9ffc,	// (0x000853fd) main_fs_clock_dumped_data

0xe3e8,	// (0x000897e9) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe3e8,	// (0x000897e9) list_single_fs_bigclock_indicator_pane_g1

0xe403,	// (0x00089804) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe403,	// (0x00089804) list_single_fs_bigclock_indicator_pane_g2

0xe41d,	// (0x0008981e) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe41d,	// (0x0008981e) list_single_fs_bigclock_indicator_pane_g3

0xe437,	// (0x00089838) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe437,	// (0x00089838) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc53,	// (0x0008b054) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc53,	// (0x0008b054) list_single_fs_bigclock_indicator_pane_g

0xe460,	// (0x00089861) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe460,	// (0x00089861) list_single_fs_bigclock_indicator_pane_t1

0xe488,	// (0x00089889) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe488,	// (0x00089889) list_single_fs_bigclock_indicator_pane_t2

0xe4b0,	// (0x000898b1) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe4b0,	// (0x000898b1) list_single_fs_bigclock_indicator_pane_t3

0xe4d8,	// (0x000898d9) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe4d8,	// (0x000898d9) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc5e,	// (0x0008b05f) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc5e,	// (0x0008b05f) list_single_fs_bigclock_indicator_pane_t

0xeba9,	// (0x00089faa) image3_infobar_fav_pane_ParamLimits

0xeba9,	// (0x00089faa) image3_infobar_fav_pane

0xebb9,	// (0x00089fba) image3_infobar_loc_pane_ParamLimits

0xebb9,	// (0x00089fba) image3_infobar_loc_pane

0xebcd,	// (0x00089fce) image3_infobar_time_pane_ParamLimits

0xebcd,	// (0x00089fce) image3_infobar_time_pane

0xcc1c,	// (0x0008801d) image3_infobar_time_pane_g1

0xebdd,	// (0x00089fde) image3_infobar_time_pane_t1

0xcc1c,	// (0x0008801d) image3_infobar_loc_pane_g1

0xebeb,	// (0x00089fec) image3_infobar_loc_pane_g2

0x0001,

0xfe08,	// (0x0008b209) image3_infobar_loc_pane_g

0xebf3,	// (0x00089ff4) image3_infobar_loc_pane_t1

0xcc1c,	// (0x0008801d) image3_infobar_fav_pane_g1

0xec01,	// (0x0008a002) image3_infobar_fav_pane_g2

0x0001,

0xfe0d,	// (0x0008b20e) image3_infobar_fav_pane_g

0xec09,	// (0x0008a00a) fs_bigclock_status_battery_pane

0xec12,	// (0x0008a013) fs_bigclock_status_signal_pane

0xec1b,	// (0x0008a01c) fs_bigclock_status_title_pane

0xec24,	// (0x0008a025) fs_bigclock_status_signal_pane_g1

0xec2d,	// (0x0008a02e) fs_bigclock_status_signal_pane_g2

0x0001,

0x0bfc,	// (0x0007bffd) fs_bigclock_status_signal_pane_g

0xec35,	// (0x0008a036) fs_bigclock_status_battery_pane_g1

0xec3e,	// (0x0008a03f) fs_bigclock_status_battery_pane_g2

0x0001,

0x0c01,	// (0x0007c002) fs_bigclock_status_battery_pane_g

0xec46,	// (0x0008a047) fs_bigclock_status_title_pane_t1

0xcc1c,	// (0x0008801d) main_fs_bigclock_clock_pane_g1

0x96db,	// (0x00084adc) main_fs_bigclock_clock_pane_g2

0x96db,	// (0x00084adc) main_fs_bigclock_clock_pane_g3

0x96db,	// (0x00084adc) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe12,	// (0x0008b213) main_fs_bigclock_clock_pane_g

0x96e3,	// (0x00084ae4) main_fs_bigclock_clock_pane_t1

0x96f1,	// (0x00084af2) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe1b,	// (0x0008b21c) main_fs_bigclock_clock_pane_t

0xec54,	// (0x0008a055) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec54,	// (0x0008a055) list_single_fs_bigclock_indicator_pane

0x9700,	// (0x00084b01) list_single_fs_bigclock_pane_ParamLimits

0x9700,	// (0x00084b01) list_single_fs_bigclock_pane

0xec6e,	// (0x0008a06f) main_fs_bigclock_indicator_pane_t1

0xec7d,	// (0x0008a07e) list_single_fs_bigclock_pane_g1

0xec85,	// (0x0008a086) list_single_fs_bigclock_pane_t1

0xcc1c,	// (0x0008801d) main_fs_bigclock_swipe_pane_g1

0xecc8,	// (0x0008a0c9) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe27,	// (0x0008b228) main_fs_bigclock_swipe_pane_g

0xecd0,	// (0x0008a0d1) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xecd0,	// (0x0008a0d1) main_fs_bigclock_swipe_pane_t1

0x4322,	// (0x0007f723) call_type_pane_ParamLimits

0x9ffc,	// (0x000853fd) main_btmg_pane

0x1b9d,	// (0x0007cf9e) list_single_cale_mrui_row_pane_g2_ParamLimits

0x1b9d,	// (0x0007cf9e) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdb8,	// (0x0008b1b9) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdb8,	// (0x0008b1b9) list_single_cale_mrui_row_pane_g

0x1cc7,	// (0x0007d0c8) list_recal_vselct_arw_lo_pane

0xeb24,	// (0x00089f25) list_recal_vselct_arw_up_pane

0x1ccf,	// (0x0007d0d0) list_recal_vselct_pane

0x9761,	// (0x00084b62) btmg_button_pane

0x976d,	// (0x00084b6e) main_btmg_pane_g1

0x9ffc,	// (0x000853fd) bg_button_pane_cp044

0xeced,	// (0x0008a0ee) btmg_button_pane_t1

0xc7fe,	// (0x00087bff) aid_listscroll_gen

0xa99d,	// (0x00085d9e) main_cntbar_detail_pane

0xe7c5,	// (0x00089bc6) list_cmail_folder_pane

0xcc4e,	// (0x0008804f) sp_fs_scroll_pane_cp03_ParamLimits

0x1d6e,	// (0x0007d16f) list_single_fs_dyc_pane_cp01_ParamLimits

0x1d6e,	// (0x0007d16f) list_single_fs_dyc_pane_cp01

0xecfb,	// (0x0008a0fc) aid_size_cmail_indent

0x1d9e,	// (0x0007d19f) list_single_dyc_row_pane_cp01

0x9795,	// (0x00084b96) cntbar_detail_list_pane_ParamLimits

0x9795,	// (0x00084b96) cntbar_detail_list_pane

0x97cf,	// (0x00084bd0) main_cntbar_detail_cont_pane_ParamLimits

0x97cf,	// (0x00084bd0) main_cntbar_detail_cont_pane

0x4316,	// (0x0007f717) scroll_pane_cp032_ParamLimits

0x4316,	// (0x0007f717) scroll_pane_cp032

0x97db,	// (0x00084bdc) cntbar_detail_list_event_pane_ParamLimits

0x97db,	// (0x00084bdc) cntbar_detail_list_event_pane

0x97a1,	// (0x00084ba2) cntbar_detail_list_shct_pane

0xac2d,	// (0x0008602e) aid_list_gen

0xed04,	// (0x0008a105) aid_scroll

0xed0d,	// (0x0008a10e) aid_size_touch_scroll_bar

0x8301,	// (0x00083702) aid_list_double

0xe351,	// (0x00089752) aid_list_single

0x82ef,	// (0x000836f0) aid_list_single_lg

0x1da7,	// (0x0007d1a8) aid_list_z_g_a_sm

0x97ef,	// (0x00084bf0) aid_list_z_g_d

0x1daf,	// (0x0007d1b0) aid_txt_z_prm

0x1dbd,	// (0x0007d1be) aid_txt_z_prm_cp01

0x1dcb,	// (0x0007d1cc) aid_txt_z_sec

0x97f7,	// (0x00084bf8) main_cntbar_detail_cont_pane_g1_ParamLimits

0x97f7,	// (0x00084bf8) main_cntbar_detail_cont_pane_g1

0x9804,	// (0x00084c05) main_cntbar_detail_cont_pane_g2_ParamLimits

0x9804,	// (0x00084c05) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe2c,	// (0x0008b22d) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe2c,	// (0x0008b22d) main_cntbar_detail_cont_pane_g

0xed16,	// (0x0008a117) main_cntbar_detail_cont_pane_t1

0xed24,	// (0x0008a125) main_cntbar_detail_cont_pane_t2

0xed40,	// (0x0008a141) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe31,	// (0x0008b232) main_cntbar_detail_cont_pane_t

0x9810,	// (0x00084c11) cell_cntbar_detail_list_shct_pane_ParamLimits

0x9810,	// (0x00084c11) cell_cntbar_detail_list_shct_pane

0xed4e,	// (0x0008a14f) cntbar_detail_list_shct_pane_g1

0xed57,	// (0x0008a158) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe38,	// (0x0008b239) cntbar_detail_list_shct_pane_g

0x9824,	// (0x00084c25) cntbar_detail_list_event_pane_g1_ParamLimits

0x9824,	// (0x00084c25) cntbar_detail_list_event_pane_g1

0x9830,	// (0x00084c31) cntbar_detail_list_event_pane_g2_ParamLimits

0x9830,	// (0x00084c31) cntbar_detail_list_event_pane_g2

0x0005,

0xfe3d,	// (0x0008b23e) cntbar_detail_list_event_pane_g_ParamLimits

0xfe3d,	// (0x0008b23e) cntbar_detail_list_event_pane_g

0x989c,	// (0x00084c9d) cntbar_detail_list_event_pane_t1_ParamLimits

0x989c,	// (0x00084c9d) cntbar_detail_list_event_pane_t1

0x98b1,	// (0x00084cb2) cntbar_detail_list_event_pane_t2_ParamLimits

0x98b1,	// (0x00084cb2) cntbar_detail_list_event_pane_t2

0x0002,

0xfe4a,	// (0x0008b24b) cntbar_detail_list_event_pane_t_ParamLimits

0xfe4a,	// (0x0008b24b) cntbar_detail_list_event_pane_t

0xcc1c,	// (0x0008801d) cell_cntbar_detail_list_shct_pane_g1

0xb3bc,	// (0x000867bd) navi_pane_mv_g3

0xa99d,	// (0x00085d9e) main_cntbar_detail_pane_ParamLimits

0x9ffc,	// (0x000853fd) main_notif_wgt_pane

0x6c2a,	// (0x0008202b) aid_tch_main_mp4_pane_g4

0x6e5f,	// (0x00082260) popup_slider_window_cp02

0x1cbd,	// (0x0007d0be) list_recal_day_event_pane

0x9775,	// (0x00084b76) cntbar_detail_btn_pane_ParamLimits

0x9775,	// (0x00084b76) cntbar_detail_btn_pane

0x9785,	// (0x00084b86) cntbar_detail_btn_pane_cp01_ParamLimits

0x9785,	// (0x00084b86) cntbar_detail_btn_pane_cp01

0x97a1,	// (0x00084ba2) cntbar_detail_list_shct_pane_ParamLimits

0x97ad,	// (0x00084bae) cntbar_detail_pane_g1_ParamLimits

0x97ad,	// (0x00084bae) cntbar_detail_pane_g1

0x97b9,	// (0x00084bba) cntbar_detail_pane_t1_ParamLimits

0x97b9,	// (0x00084bba) cntbar_detail_pane_t1

0x983c,	// (0x00084c3d) cntbar_detail_list_event_pane_g3_ParamLimits

0x983c,	// (0x00084c3d) cntbar_detail_list_event_pane_g3

0x9854,	// (0x00084c55) cntbar_detail_list_event_pane_g4_ParamLimits

0x9854,	// (0x00084c55) cntbar_detail_list_event_pane_g4

0x986c,	// (0x00084c6d) cntbar_detail_list_event_pane_g5_ParamLimits

0x986c,	// (0x00084c6d) cntbar_detail_list_event_pane_g5

0x9884,	// (0x00084c85) cntbar_detail_list_event_pane_g6_ParamLimits

0x9884,	// (0x00084c85) cntbar_detail_list_event_pane_g6

0x98c6,	// (0x00084cc7) cntbar_detail_list_event_pane_t3_ParamLimits

0x98c6,	// (0x00084cc7) cntbar_detail_list_event_pane_t3

0x98d8,	// (0x00084cd9) popup_notif_wgt_window_ParamLimits

0x98d8,	// (0x00084cd9) popup_notif_wgt_window

0x98e8,	// (0x00084ce9) popup_submenu_window_cp01_ParamLimits

0x98e8,	// (0x00084ce9) popup_submenu_window_cp01

0xb404,	// (0x00086805) bg_popup_window_pane_cp10

0xed60,	// (0x0008a161) listscroll_notif_wgt_pane

0xed71,	// (0x0008a172) list_notif_wgt_window

0xed7a,	// (0x0008a17b) scroll_pane_cp033

0x98f6,	// (0x00084cf7) list_notif_wgt_row_pane_ParamLimits

0x98f6,	// (0x00084cf7) list_notif_wgt_row_pane

0xed83,	// (0x0008a184) aid_size_list_notif_wgt_del

0xed90,	// (0x0008a191) list_notif_wgt_row_pane_g1

0xed9c,	// (0x0008a19d) list_notif_wgt_row_pane_g2

0xeda8,	// (0x0008a1a9) list_notif_wgt_row_pane_g3

0x0002,

0x0c4a,	// (0x0007c04b) list_notif_wgt_row_pane_g

0xedb5,	// (0x0008a1b6) list_notif_wgt_row_pane_t1

0xedca,	// (0x0008a1cb) list_notif_wgt_row_pane_t2

0xeddc,	// (0x0008a1dd) list_notif_wgt_row_pane_t3

0x0002,

0x0c51,	// (0x0007c052) list_notif_wgt_row_pane_t

0xd8c1,	// (0x00088cc2) list_recal_day_event_pane_g1

0xedee,	// (0x0008a1ef) list_recal_day_event_pane_t1

0x9ffc,	// (0x000853fd) bg_button_pane_cp045

0xedfd,	// (0x0008a1fe) cntbar_detail_btn_pane_t1

0xc812,	// (0x00087c13) main_callh_pane_ParamLimits

0xc812,	// (0x00087c13) main_callh_pane

0x9ffc,	// (0x000853fd) main_coverflow0_pane

0x9ffc,	// (0x000853fd) main_wgtman_pane

0x8ee9,	// (0x000842ea) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x8ee9,	// (0x000842ea) main_fs_bigclock_unlock_btn_pane

0x92e1,	// (0x000846e2) bg_button_pane_cp16

0x92f1,	// (0x000846f2) cell_tport_appsw_pane_g3

0x9908,	// (0x00084d09) cf0_flow_pane_ParamLimits

0x9908,	// (0x00084d09) cf0_flow_pane

0xee0b,	// (0x0008a20c) listscroll_cf0_pane

0xee16,	// (0x0008a217) main_cf0_pane_g1

0x9917,	// (0x00084d18) main_cf0_pane_t1_ParamLimits

0x9917,	// (0x00084d18) main_cf0_pane_t1

0x992b,	// (0x00084d2c) main_cf0_pane_t2_ParamLimits

0x992b,	// (0x00084d2c) main_cf0_pane_t2

0x0001,

0xfe51,	// (0x0008b252) main_cf0_pane_t_ParamLimits

0xfe51,	// (0x0008b252) main_cf0_pane_t

0xee28,	// (0x0008a229) scroll_pane_cp11

0x993f,	// (0x00084d40) cf0_flow_pane_g1

0x9947,	// (0x00084d48) cf0_flow_pane_g2

0x0001,

0xfe56,	// (0x0008b257) cf0_flow_pane_g

0x994f,	// (0x00084d50) cf0_flow_pane_t1

0x9ffc,	// (0x000853fd) main_call6_pane

0x9ffc,	// (0x000853fd) main_calllock_pane

0x995d,	// (0x00084d5e) call6_btn_grp_pane_ParamLimits

0x995d,	// (0x00084d5e) call6_btn_grp_pane

0x996c,	// (0x00084d6d) call6_pane_g1_ParamLimits

0x996c,	// (0x00084d6d) call6_pane_g1

0x997b,	// (0x00084d7c) popup_call6_1st_window_ParamLimits

0x997b,	// (0x00084d7c) popup_call6_1st_window

0x9989,	// (0x00084d8a) popup_call6_2nd_window_ParamLimits

0x9989,	// (0x00084d8a) popup_call6_2nd_window

0x9997,	// (0x00084d98) cell_call6_btn_pane_ParamLimits

0x9997,	// (0x00084d98) cell_call6_btn_pane

0xb404,	// (0x00086805) bg_popup_call2_in_pane_cp03

0xee33,	// (0x0008a234) popup_call6_1st_window_g1

0xee3b,	// (0x0008a23c) popup_call6_1st_window_g2

0xee43,	// (0x0008a244) popup_call6_1st_window_g3

0x0002,

0x0c67,	// (0x0007c068) popup_call6_1st_window_g

0xee4b,	// (0x0008a24c) popup_call6_1st_window_t1

0xee5a,	// (0x0008a25b) popup_call6_1st_window_t2

0xee6a,	// (0x0008a26b) popup_call6_1st_window_t3

0x0002,

0x0c6e,	// (0x0007c06f) popup_call6_1st_window_t

0xb404,	// (0x00086805) bg_popup_call2_in_pane_cp04

0xee33,	// (0x0008a234) popup_call6_2nd_window_g1

0xee3b,	// (0x0008a23c) popup_call6_2nd_window_g2

0xee43,	// (0x0008a244) popup_call6_2nd_window_g3

0x0002,

0x0c67,	// (0x0007c068) popup_call6_2nd_window_g

0xee4b,	// (0x0008a24c) popup_call6_2nd_window_t1

0x9ffc,	// (0x000853fd) bg_button_pane_cp15

0xee7a,	// (0x0008a27b) cell_call6_btn_pane_g1

0xee83,	// (0x0008a284) cell_call6_btn_pane_t1

0x99a6,	// (0x00084da7) listscroll_wgtman_pane_ParamLimits

0x99a6,	// (0x00084da7) listscroll_wgtman_pane

0x99c2,	// (0x00084dc3) wgtman_btn_pane_ParamLimits

0x99c2,	// (0x00084dc3) wgtman_btn_pane

0xb1b3,	// (0x000865b4) aid_scroll_copy1

0xee92,	// (0x0008a293) list_wgtman_pane

0x99f7,	// (0x00084df8) wgtman_btn_pane_g1_ParamLimits

0x99f7,	// (0x00084df8) wgtman_btn_pane_g1

0x9a1f,	// (0x00084e20) wgtman_btn_pane_t1_ParamLimits

0x9a1f,	// (0x00084e20) wgtman_btn_pane_t1

0xee9c,	// (0x0008a29d) wgtman_btn_pane_t2_ParamLimits

0xee9c,	// (0x0008a29d) wgtman_btn_pane_t2

0x0001,

0xfe5b,	// (0x0008b25c) wgtman_btn_pane_t_ParamLimits

0xfe5b,	// (0x0008b25c) wgtman_btn_pane_t

0x9a56,	// (0x00084e57) listrow_wgtman_pane_ParamLimits

0x9a56,	// (0x00084e57) listrow_wgtman_pane

0x9a72,	// (0x00084e73) listrow_wgtman_pane_g1

0x9a7f,	// (0x00084e80) listrow_wgtman_pane_g2

0x0001,

0xfe60,	// (0x0008b261) listrow_wgtman_pane_g

0x1dd9,	// (0x0007d1da) listrow_wgtman_pane_t1

0x1df1,	// (0x0007d1f2) listrow_wgtman_pane_t2

0x0001,

0xfe65,	// (0x0008b266) listrow_wgtman_pane_t

0x1e17,	// (0x0007d218) wait_bar_pane_cp09

0xeeb3,	// (0x0008a2b4) main_calllock_btn_pane

0xeebd,	// (0x0008a2be) main_calllock_pane_g1

0x9ffc,	// (0x000853fd) bg_button_pane_cp17

0xeec8,	// (0x0008a2c9) main_calllock_btn_pane_g1

0xeed1,	// (0x0008a2d2) main_calllock_btn_pane_t1

0x9ffc,	// (0x000853fd) main_dialer3_pane

0x9ffc,	// (0x000853fd) main_fmrd2_pane

0xcc1c,	// (0x0008801d) main_fs_bigclock_unlock_btn_pane_g1

0xeee8,	// (0x0008a2e9) main_fs_bigclock_unlock_btn_pane_t1

0x9a9d,	// (0x00084e9e) area_fmrd2_info_pane_ParamLimits

0x9a9d,	// (0x00084e9e) area_fmrd2_info_pane

0x9aab,	// (0x00084eac) area_fmrd2_visual_pane_ParamLimits

0x9aab,	// (0x00084eac) area_fmrd2_visual_pane

0x9ab9,	// (0x00084eba) fmrd2_indi_pane_ParamLimits

0x9ab9,	// (0x00084eba) fmrd2_indi_pane

0x9ac6,	// (0x00084ec7) area_fmrd2_visual_pane_g1

0x9ace,	// (0x00084ecf) area_fmrd2_visual_pane_t1

0x9ade,	// (0x00084edf) area_fmrd2_visual_pane_t2

0x9aee,	// (0x00084eef) area_fmrd2_visual_pane_t3

0x0002,

0xfe6f,	// (0x0008b270) area_fmrd2_visual_pane_t

0x9afe,	// (0x00084eff) area_fmrd2_info_pane_g1

0x9b06,	// (0x00084f07) area_fmrd2_info_pane_t1

0x9b16,	// (0x00084f17) area_fmrd2_info_pane_t2

0x9b26,	// (0x00084f27) area_fmrd2_info_pane_t3

0x9b36,	// (0x00084f37) area_fmrd2_info_pane_t4

0x0003,

0xfe76,	// (0x0008b277) area_fmrd2_info_pane_t

0x9b44,	// (0x00084f45) fmrd2_indi_pane_t1

0x9b54,	// (0x00084f55) fmrd2_indi_pane_t2

0x9b64,	// (0x00084f65) fmrd2_indi_pane_t3

0x0002,

0xfe7f,	// (0x0008b280) fmrd2_indi_pane_t

0xe446,	// (0x00089847) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe446,	// (0x00089847) list_single_fs_bigclock_indicator_pane_g5

0xe4ed,	// (0x000898ee) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe4ed,	// (0x000898ee) list_single_fs_bigclock_indicator_pane_t5

0x94a2,	// (0x000848a3) aid_cell_bcale_month_pane_ParamLimits

0x94a2,	// (0x000848a3) aid_cell_bcale_month_pane

0x94c9,	// (0x000848ca) bcale_month_pane_ParamLimits

0x94c9,	// (0x000848ca) bcale_month_pane

0x94e7,	// (0x000848e8) bcale_preview_pane_ParamLimits

0x94e7,	// (0x000848e8) bcale_preview_pane

0xec85,	// (0x0008a086) list_single_fs_bigclock_pane_t1_ParamLimits

0xeca4,	// (0x0008a0a5) list_single_fs_bigclock_pane_t2_ParamLimits

0xeca4,	// (0x0008a0a5) list_single_fs_bigclock_pane_t2

0x0001,

0x0c1b,	// (0x0007c01c) list_single_fs_bigclock_pane_t_ParamLimits

0x0c1b,	// (0x0007c01c) list_single_fs_bigclock_pane_t

0xeee0,	// (0x0008a2e1) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfe6a,	// (0x0008b26b) main_fs_bigclock_unlock_btn_pane_g

0x9b72,	// (0x00084f73) aid_dia3_key_size_ParamLimits

0x9b72,	// (0x00084f73) aid_dia3_key_size

0x9b7e,	// (0x00084f7f) aid_dia3_listrow_size_ParamLimits

0x9b7e,	// (0x00084f7f) aid_dia3_listrow_size

0x9b8e,	// (0x00084f8f) dia3_keypad_fun_pane_ParamLimits

0x9b8e,	// (0x00084f8f) dia3_keypad_fun_pane

0x9ba0,	// (0x00084fa1) dia3_keypad_num_pane_ParamLimits

0x9ba0,	// (0x00084fa1) dia3_keypad_num_pane

0x9bb2,	// (0x00084fb3) dia3_listscroll_pane_ParamLimits

0x9bb2,	// (0x00084fb3) dia3_listscroll_pane

0x9bc0,	// (0x00084fc1) dia3_numentry_pane_ParamLimits

0x9bc0,	// (0x00084fc1) dia3_numentry_pane

0xeef6,	// (0x0008a2f7) dia3_list_pane

0xef01,	// (0x0008a302) scroll_pane_cp12

0x9ffc,	// (0x000853fd) bg_dia3_numentry_pane

0x9bce,	// (0x00084fcf) dia3_numentry_pane_t1

0x9bdd,	// (0x00084fde) cell_dia3_key_num_pane

0x9be5,	// (0x00084fe6) cell_dia3_key0_fun_pane_ParamLimits

0x9be5,	// (0x00084fe6) cell_dia3_key0_fun_pane

0x9bf2,	// (0x00084ff3) cell_dia3_key1_fun_pane_ParamLimits

0x9bf2,	// (0x00084ff3) cell_dia3_key1_fun_pane

0x9bff,	// (0x00085000) dia3_listrow_pane

0xe14c,	// (0x0008954d) bg_dia3_numentry_pane_g1

0x9ffc,	// (0x000853fd) bg_button_pane_cp21

0xef0c,	// (0x0008a30d) cell_dia3_key_num_pane_t1

0xef1a,	// (0x0008a31b) cell_dia3_key_num_pane_t2

0xef29,	// (0x0008a32a) cell_dia3_key_num_pane_t3

0xef38,	// (0x0008a339) cell_dia3_key_num_pane_t4

0x0003,

0x0ca0,	// (0x0007c0a1) cell_dia3_key_num_pane_t

0x9ffc,	// (0x000853fd) bg_button_pane_cp19

0x9c0c,	// (0x0008500d) cell_dia3_key0_fun_pane_g1

0x9ffc,	// (0x000853fd) bg_button_pane_cp20

0x9c14,	// (0x00085015) cell_dia3_key1_fun_pane_g1

0x9c1c,	// (0x0008501d) area_left_week_number_pane

0x9c2f,	// (0x00085030) area_top_day_name_pane

0x9c3d,	// (0x0008503e) frame_month_view_pane

0xef47,	// (0x0008a348) grid_month_view_pane

0x9c52,	// (0x00085053) cell_top_day_name_pane_ParamLimits

0x9c52,	// (0x00085053) cell_top_day_name_pane

0x9c6c,	// (0x0008506d) cell_area_left_week_number_pane_ParamLimits

0x9c6c,	// (0x0008506d) cell_area_left_week_number_pane

0x9c8f,	// (0x00085090) cell_month_view_pane_ParamLimits

0x9c8f,	// (0x00085090) cell_month_view_pane

0xef55,	// (0x0008a356) frm_month_g1

0x9cbb,	// (0x000850bc) frm_month_g2

0x9ccc,	// (0x000850cd) frm_month_g3

0x9cdd,	// (0x000850de) frm_month_g4

0x9cee,	// (0x000850ef) frm_month_g5

0x9d01,	// (0x00085102) frm_month_g6

0x9d14,	// (0x00085115) frm_month_g7

0xef62,	// (0x0008a363) frm_month_g8

0x9d27,	// (0x00085128) frm_month_g9

0x9d34,	// (0x00085135) frm_month_g10

0x9d41,	// (0x00085142) frm_month_g11

0x9d4e,	// (0x0008514f) frm_month_g12

0x9d5b,	// (0x0008515c) frm_month_g13

0x9d68,	// (0x00085169) frm_month_g14

0x9d77,	// (0x00085178) frm_month_g15

0x9d86,	// (0x00085187) frm_month_g16

0x000f,

0xfe86,	// (0x0008b287) frm_month_g

0xef6f,	// (0x0008a370) cell_top_day_name_pane_t1

0x9d95,	// (0x00085196) cell_area_left_week_number_pane_g1

0x9da4,	// (0x000851a5) cell_area_left_week_number_pane_t1

0xce88,	// (0x00088289) cell_month_view_pane_g1

0x9dba,	// (0x000851bb) cell_month_view_pane_t1

0x9ffc,	// (0x000853fd) main_fps_pane

0xe6dd,	// (0x00089ade) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe6dd,	// (0x00089ade) cmail_ddmenu_btn02_pane_cp1

0xe6f9,	// (0x00089afa) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe6f9,	// (0x00089afa) cmail_ddmenu_btn02_pane_cp2

0x965a,	// (0x00084a5b) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x965a,	// (0x00084a5b) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfde9,	// (0x0008b1ea) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfde9,	// (0x0008b1ea) cmail_ddmenu_btn02_pane_g

0x9678,	// (0x00084a79) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x9678,	// (0x00084a79) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfdee,	// (0x0008b1ef) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfdee,	// (0x0008b1ef) cmail_ddmenu_btn02_pane_t

0x9dd0,	// (0x000851d1) fps_text_pane_ParamLimits

0x9dd0,	// (0x000851d1) fps_text_pane

0x9ddd,	// (0x000851de) main_fps_pane_g1_ParamLimits

0x9ddd,	// (0x000851de) main_fps_pane_g1

0x9deb,	// (0x000851ec) wait_bar_pane_cp010_ParamLimits

0x9deb,	// (0x000851ec) wait_bar_pane_cp010

0x9df7,	// (0x000851f8) fps_text_pane_t1_ParamLimits

0x9df7,	// (0x000851f8) fps_text_pane_t1

0x7241,	// (0x00082642) cam4_image_uncrop_pane_g1

0x724a,	// (0x0008264b) cam4_image_uncrop_pane_g2

0x7253,	// (0x00082654) cam4_image_uncrop_pane_g3

0x725c,	// (0x0008265d) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x0008acef) cam4_image_uncrop_pane_g

0x9bff,	// (0x00085000) dia3_listrow_pane_ParamLimits

0x9ffc,	// (0x000853fd) main_phob2_pane

0x92c3,	// (0x000846c4) cell_tport_appsw_pane_cp02_ParamLimits

0x92c3,	// (0x000846c4) cell_tport_appsw_pane_cp02

0x92d2,	// (0x000846d3) cell_tport_appsw_pane_cp03_ParamLimits

0x92d2,	// (0x000846d3) cell_tport_appsw_pane_cp03

0x9ffc,	// (0x000853fd) phob2_contact_card_pane

0x9ffc,	// (0x000853fd) phob2_listscroll_pane

0xef82,	// (0x0008a383) phob2_list_pane

0xef8a,	// (0x0008a38b) scroll_pane_cp034

0x9e10,	// (0x00085211) phob2_cc_data_pane_ParamLimits

0x9e10,	// (0x00085211) phob2_cc_data_pane

0x9e2a,	// (0x0008522b) phob2_cc_listscroll_pane_ParamLimits

0x9e2a,	// (0x0008522b) phob2_cc_listscroll_pane

0x9e44,	// (0x00085245) list_double_large_graphic_phob2_pane_ParamLimits

0x9e44,	// (0x00085245) list_double_large_graphic_phob2_pane

0x9e66,	// (0x00085267) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9e66,	// (0x00085267) list_double_large_graphic_phob2_pane_g1

0x1e29,	// (0x0007d22a) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x1e29,	// (0x0007d22a) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfea7,	// (0x0008b2a8) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfea7,	// (0x0008b2a8) list_double_large_graphic_phob2_pane_g

0x1e35,	// (0x0007d236) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x1e35,	// (0x0007d236) list_double_large_graphic_phob2_pane_t1

0x1e4b,	// (0x0007d24c) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x1e4b,	// (0x0007d24c) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfeac,	// (0x0008b2ad) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfeac,	// (0x0008b2ad) list_double_large_graphic_phob2_pane_t

0x9ffc,	// (0x000853fd) list_highlight_pane_cp024

0x9e7c,	// (0x0008527d) phob2_cc_button_pane

0x9e84,	// (0x00085285) phob2_cc_data_pane_g1_ParamLimits

0x9e84,	// (0x00085285) phob2_cc_data_pane_g1

0x9e90,	// (0x00085291) phob2_cc_data_pane_g2_ParamLimits

0x9e90,	// (0x00085291) phob2_cc_data_pane_g2

0x0001,

0xfeb1,	// (0x0008b2b2) phob2_cc_data_pane_g_ParamLimits

0xfeb1,	// (0x0008b2b2) phob2_cc_data_pane_g

0x9e9c,	// (0x0008529d) phob2_cc_data_pane_t1_ParamLimits

0x9e9c,	// (0x0008529d) phob2_cc_data_pane_t1

0x9eae,	// (0x000852af) phob2_cc_data_pane_t2_ParamLimits

0x9eae,	// (0x000852af) phob2_cc_data_pane_t2

0x9ec0,	// (0x000852c1) phob2_cc_data_pane_t3_ParamLimits

0x9ec0,	// (0x000852c1) phob2_cc_data_pane_t3

0x0002,

0xfeb6,	// (0x0008b2b7) phob2_cc_data_pane_t_ParamLimits

0xfeb6,	// (0x0008b2b7) phob2_cc_data_pane_t

0xef92,	// (0x0008a393) phob2_cc_list_pane_ParamLimits

0xef92,	// (0x0008a393) phob2_cc_list_pane

0xdb00,	// (0x00088f01) scroll_pane_cp035_ParamLimits

0xdb00,	// (0x00088f01) scroll_pane_cp035

0xa99d,	// (0x00085d9e) bg_button_pane_cp033

0xef9e,	// (0x0008a39f) phob2_cc_button_pane_g1

0xefaa,	// (0x0008a3ab) phob2_cc_button_pane_t1

0xefbf,	// (0x0008a3c0) phob2_cc_button_pane_t2

0x0001,

0xfebd,	// (0x0008b2be) phob2_cc_button_pane_t

0x9ed2,	// (0x000852d3) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9ed2,	// (0x000852d3) list_double_large_graphic_phob2_cc_pane

0x9f01,	// (0x00085302) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9f01,	// (0x00085302) list_double_large_graphic_phob2_cc_pane_g1

0x1e60,	// (0x0007d261) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x1e60,	// (0x0007d261) list_double_large_graphic_phob2_cc_pane_g2

0x1e6f,	// (0x0007d270) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x1e6f,	// (0x0007d270) list_double_large_graphic_phob2_cc_pane_g3

0x1e7e,	// (0x0007d27f) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x1e7e,	// (0x0007d27f) list_double_large_graphic_phob2_cc_pane_g4

0x1e8f,	// (0x0007d290) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x1e8f,	// (0x0007d290) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfec2,	// (0x0008b2c3) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfec2,	// (0x0008b2c3) list_double_large_graphic_phob2_cc_pane_g

0x1e9e,	// (0x0007d29f) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x1e9e,	// (0x0007d29f) list_double_large_graphic_phob2_cc_pane_t1

0x1ec7,	// (0x0007d2c8) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x1ec7,	// (0x0007d2c8) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfecd,	// (0x0008b2ce) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfecd,	// (0x0008b2ce) list_double_large_graphic_phob2_cc_pane_t

0xefd1,	// (0x0008a3d2) list_highlight_pane_cp025_ParamLimits

0xefd1,	// (0x0008a3d2) list_highlight_pane_cp025

0xa99d,	// (0x00085d9e) bg_button_pane_cp033_ParamLimits

0xef9e,	// (0x0008a39f) phob2_cc_button_pane_g1_ParamLimits

0xefaa,	// (0x0008a3ab) phob2_cc_button_pane_t1_ParamLimits

0xefbf,	// (0x0008a3c0) phob2_cc_button_pane_t2_ParamLimits

0xfebd,	// (0x0008b2be) phob2_cc_button_pane_t_ParamLimits

0x21c7,	// (0x0007d5c8) popup_wgtman_window

0xd78b,	// (0x00088b8c) scroll_pane_cp038

0x99df,	// (0x00084de0) wgtman_btn_pane_cp_01_ParamLimits

0x99df,	// (0x00084de0) wgtman_btn_pane_cp_01

0xefdf,	// (0x0008a3e0) wgtman_content_pane

0xefe8,	// (0x0008a3e9) wgtman_heading_pane

0x9ffc,	// (0x000853fd) bg_heading_pane_cp02

0xeff1,	// (0x0008a3f2) wgtman_heading_pane_g1

0xeff9,	// (0x0008a3fa) wgtman_heading_pane_t1

0xf007,	// (0x0008a408) scroll_pane_cp036

0xf00f,	// (0x0008a410) wgtman_list_pane

0xf017,	// (0x0008a418) wgtman_list_pane_t1_ParamLimits

0xf017,	// (0x0008a418) wgtman_list_pane_t1

0x71a0,	// (0x000825a1) cam4_grid_pane

0x11c0,	// (0x0007c5c1) bg_button_pane_cp015_ParamLimits

0x7e9d,	// (0x0008329e) bg_button_pane_cp016_ParamLimits

0x7eb0,	// (0x000832b1) bg_button_pane_cp017_ParamLimits

0x7ee5,	// (0x000832e6) popup_vitu2_query_window_g3_ParamLimits

0x7ee5,	// (0x000832e6) popup_vitu2_query_window_g3

0x7f33,	// (0x00083334) popup_vitu2_query_window_t6_ParamLimits

0x7f33,	// (0x00083334) popup_vitu2_query_window_t6

0x7f5e,	// (0x0008335f) popup_vitu2_query_window_t7_ParamLimits

0x7f5e,	// (0x0008335f) popup_vitu2_query_window_t7

0xd7b2,	// (0x00088bb3) cam4_grid_pane_g1

0xd7bb,	// (0x00088bbc) cam4_grid_pane_g2

0xf033,	// (0x0008a434) cam4_grid_pane_g3

0xf03c,	// (0x0008a43d) cam4_grid_pane_g4

0x0003,

0xfed2,	// (0x0008b2d3) cam4_grid_pane_g

0x3034,	// (0x0007e435) aid_placing_vt_slider_lsc_ParamLimits

0x3374,	// (0x0007e775) vidtel_button_pane_ParamLimits

0x3374,	// (0x0007e775) vidtel_button_pane

0xf047,	// (0x0008a448) bg_button_pane_cp034

0x9f12,	// (0x00085313) vidtel_button_pane_g1

0xf051,	// (0x0008a452) vidtel_button_pane_t1

0xd8b1,	// (0x00088cb2) aid_size_vtel_slider_touch

0xdb00,	// (0x00088f01) scroll_pane_cp039

0xe18a,	// (0x0008958b) ncim_query_button_pane_cp01_ParamLimits

0xe1a9,	// (0x000895aa) ncimui_query_pane_g1_ParamLimits

0xa99d,	// (0x00085d9e) input_focus_pane_cp012_ParamLimits

0xe1ce,	// (0x000895cf) ncim_query_entry_pane_t1_ParamLimits

0xdb00,	// (0x00088f01) scroll_pane_cp039_ParamLimits

0xb2a7,	// (0x000866a8) navi_pane_bcale_mc_g1

0xb2af,	// (0x000866b0) navi_pane_bcale_mc_t1

0xe742,	// (0x00089b43) main_sp_fs_email_pane_g1

0xe74e,	// (0x00089b4f) main_sp_fs_email_pane_g2

0x0001,

0xfcc4,	// (0x0008b0c5) main_sp_fs_email_pane_g

0xe996,	// (0x00089d97) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe996,	// (0x00089d97) list_single_cale_mrui_row_pane_g3

0x1d2c,	// (0x0007d12d) list_single_recal_day_pane_g5_event_pane

0x1d42,	// (0x0007d143) list_single_recal_day_pane_g7

0xf05f,	// (0x0008a460) list_recal_day_event_pane_cp01

0xf068,	// (0x0008a469) list_recal_vselct_arw_lo_pane_cp01

0xf070,	// (0x0008a471) list_recal_vselct_arw_up_pane_cp01

0xf078,	// (0x0008a479) list_recal_vselct_pane_cp01

0xd8c1,	// (0x00088cc2) list_recal_day_event_pane_cp01_g1

0x1ef0,	// (0x0007d2f1) list_recal_day_event_pane_cp01_t1

0x1d4a,	// (0x0007d14b) list_single_recal_day_pane_t1_ParamLimits

0x1d5c,	// (0x0007d15d) list_single_recal_day_pane_t2_ParamLimits

0xfdfe,	// (0x0008b1ff) list_single_recal_day_pane_t_ParamLimits

0xa674,	// (0x00085a75) bg_notes_pane_ParamLimits

0xa736,	// (0x00085b37) list_notes_pane_ParamLimits

0x2512,	// (0x0007d913) scroll_pane_cp06_ParamLimits

0xa758,	// (0x00085b59) main_notes_pane_ParamLimits

0x9ffc,	// (0x000853fd) main_welc_pane

0x9f1a,	// (0x0008531b) main_welc_body_pane_ParamLimits

0x9f1a,	// (0x0008531b) main_welc_body_pane

0x9f33,	// (0x00085334) main_welc_opti_pane_ParamLimits

0x9f33,	// (0x00085334) main_welc_opti_pane

0x9f68,	// (0x00085369) main_welc_pane_t1_ParamLimits

0x9f68,	// (0x00085369) main_welc_pane_t1

0x9f86,	// (0x00085387) main_welc_body_row_pane_ParamLimits

0x9f86,	// (0x00085387) main_welc_body_row_pane

0xed32,	// (0x0008a133) main_welc_opti_row_pane_ParamLimits

0xed32,	// (0x0008a133) main_welc_opti_row_pane

0xf082,	// (0x0008a483) main_welc_opti_row_pane_g1

0xf08a,	// (0x0008a48b) main_welc_opti_row_pane_t1

0xf09a,	// (0x0008a49b) main_welc_body_row_pane_t1

0xed69,	// (0x0008a16a) popup_notif_wgt_heading_pane

0xed83,	// (0x0008a184) aid_size_list_notif_wgt_del_ParamLimits

0xed90,	// (0x0008a191) list_notif_wgt_row_pane_g1_ParamLimits

0xed9c,	// (0x0008a19d) list_notif_wgt_row_pane_g2_ParamLimits

0xeda8,	// (0x0008a1a9) list_notif_wgt_row_pane_g3_ParamLimits

0x0c4a,	// (0x0007c04b) list_notif_wgt_row_pane_g_ParamLimits

0xedb5,	// (0x0008a1b6) list_notif_wgt_row_pane_t1_ParamLimits

0xedca,	// (0x0008a1cb) list_notif_wgt_row_pane_t2_ParamLimits

0xeddc,	// (0x0008a1dd) list_notif_wgt_row_pane_t3_ParamLimits

0x0c51,	// (0x0007c052) list_notif_wgt_row_pane_t_ParamLimits

0x9a72,	// (0x00084e73) listrow_wgtman_pane_g1_ParamLimits

0x9a7f,	// (0x00084e80) listrow_wgtman_pane_g2_ParamLimits

0xfe60,	// (0x0008b261) listrow_wgtman_pane_g_ParamLimits

0x1dd9,	// (0x0007d1da) listrow_wgtman_pane_t1_ParamLimits

0x1df1,	// (0x0007d1f2) listrow_wgtman_pane_t2_ParamLimits

0xfe65,	// (0x0008b266) listrow_wgtman_pane_t_ParamLimits

0x1e17,	// (0x0007d218) wait_bar_pane_cp09_ParamLimits

0x9ffc,	// (0x000853fd) bg_popup_heading_pane_cp02

0xf0a9,	// (0x0008a4aa) popup_notif_wgt_heading_pane_g1

0xf0b1,	// (0x0008a4b2) popup_notif_wgt_heading_pane_t1

0x9ffc,	// (0x000853fd) main_vids_pane

0x9ffc,	// (0x000853fd) vids_listscroll_pane

0x9fb2,	// (0x000853b3) scroll_pane_cp040

0x9ffc,	// (0x000853fd) vids_list_pane

0x9fbd,	// (0x000853be) vids_list_double_pane_ParamLimits

0x9fbd,	// (0x000853be) vids_list_double_pane

0x9fd5,	// (0x000853d6) vids_list_double_pane_g1

0x9fde,	// (0x000853df) vids_list_double_pane_t1

0x9fee,	// (0x000853ef) vids_list_double_pane_t2

0x0001,

0xfee0,	// (0x0008b2e1) vids_list_double_pane_t

0xa99d,	// (0x00085d9e) main_ncimui_pane_ParamLimits

0x8aa9,	// (0x00083eaa) main_ncimui_pane_g1_ParamLimits

0x8ab5,	// (0x00083eb6) main_ncimui_pane_g2_ParamLimits

0x8ab5,	// (0x00083eb6) main_ncimui_pane_g2

0x0001,

0xfbea,	// (0x0008afeb) main_ncimui_pane_g_ParamLimits

0xfbea,	// (0x0008afeb) main_ncimui_pane_g

0x9f4e,	// (0x0008534f) main_welc_pane_g1_ParamLimits

0x9f4e,	// (0x0008534f) main_welc_pane_g1

0x9f5a,	// (0x0008535b) main_welc_pane_g2_ParamLimits

0x9f5a,	// (0x0008535b) main_welc_pane_g2

0x0001,

0xfedb,	// (0x0008b2dc) main_welc_pane_g_ParamLimits

0xfedb,	// (0x0008b2dc) main_welc_pane_g

0xa674,	// (0x00085a75) listscroll_mce_pane_ParamLimits

0xb3fc,	// (0x000867fd) wait_bar_pane_cp10

0xc806,	// (0x00087c07) main_cale_day_pane_ParamLimits

0xc806,	// (0x00087c07) main_cale_week_pane_ParamLimits

0xa674,	// (0x00085a75) main_messa_pane_ParamLimits

0x65d4,	// (0x000819d5) main_clock2_btn_pane_ParamLimits

0x65d4,	// (0x000819d5) main_clock2_btn_pane

0xd010,	// (0x00088411) main_clock2_btn_pane_cp01_ParamLimits

0xd010,	// (0x00088411) main_clock2_btn_pane_cp01

0xe967,	// (0x00089d68) list_cale_mrui_pane_ParamLimits

0xee20,	// (0x0008a221) main_cf0_pane_g2

0x0001,

0x0c58,	// (0x0007c059) main_cf0_pane_g

0x9c1c,	// (0x0008501d) area_left_week_number_pane_ParamLimits

0x9c2f,	// (0x00085030) area_top_day_name_pane_ParamLimits

0x9c3d,	// (0x0008503e) frame_month_view_pane_ParamLimits

0xef47,	// (0x0008a348) grid_month_view_pane_ParamLimits

0xef55,	// (0x0008a356) frm_month_g1_ParamLimits

0x9cbb,	// (0x000850bc) frm_month_g2_ParamLimits

0x9ccc,	// (0x000850cd) frm_month_g3_ParamLimits

0x9cdd,	// (0x000850de) frm_month_g4_ParamLimits

0x9cee,	// (0x000850ef) frm_month_g5_ParamLimits

0x9d01,	// (0x00085102) frm_month_g6_ParamLimits

0x9d14,	// (0x00085115) frm_month_g7_ParamLimits

0xef62,	// (0x0008a363) frm_month_g8_ParamLimits

0x9d27,	// (0x00085128) frm_month_g9_ParamLimits

0x9d34,	// (0x00085135) frm_month_g10_ParamLimits

0x9d41,	// (0x00085142) frm_month_g11_ParamLimits

0x9d4e,	// (0x0008514f) frm_month_g12_ParamLimits

0x9d5b,	// (0x0008515c) frm_month_g13_ParamLimits

0x9d68,	// (0x00085169) frm_month_g14_ParamLimits

0x9d77,	// (0x00085178) frm_month_g15_ParamLimits

0x9d86,	// (0x00085187) frm_month_g16_ParamLimits

0xfe86,	// (0x0008b287) frm_month_g_ParamLimits

0xef6f,	// (0x0008a370) cell_top_day_name_pane_t1_ParamLimits

0x9d95,	// (0x00085196) cell_area_left_week_number_pane_g1_ParamLimits

0x9da4,	// (0x000851a5) cell_area_left_week_number_pane_t1_ParamLimits

0xce88,	// (0x00088289) cell_month_view_pane_g1_ParamLimits

0x9dba,	// (0x000851bb) cell_month_view_pane_t1_ParamLimits

0xa66c,	// (0x00085a6d) main_clock2_btn_pane_g1

0xf0bf,	// (0x0008a4c0) main_clock2_btn_pane_t1

0xa99d,	// (0x00085d9e) listscroll_cmail_pane_ParamLimits

0xe742,	// (0x00089b43) main_sp_fs_email_pane_g1_ParamLimits

0xe74e,	// (0x00089b4f) main_sp_fs_email_pane_g2_ParamLimits

0xfcc4,	// (0x0008b0c5) main_sp_fs_email_pane_g_ParamLimits

0xeb05,	// (0x00089f06) list_recal_day_pane_ParamLimits

0xeb16,	// (0x00089f17) mian_recal_day_pane_t1

0x170d,	// (0x0007cb0e) list_single_dyc_row_text_pane_t4_ParamLimits

0x170d,	// (0x0007cb0e) list_single_dyc_row_text_pane_t4

0x1744,	// (0x0007cb45) list_single_dyc_row_text_pane_t5_ParamLimits

0x1744,	// (0x0007cb45) list_single_dyc_row_text_pane_t5

0x17ba,	// (0x0007cbbb) list_single_dyc_row_text_pane_t6_ParamLimits

0x17ba,	// (0x0007cbbb) list_single_dyc_row_text_pane_t6

0xad89,	// (0x0008618a) aid_mgn_list_cale_time_pane

0xa99d,	// (0x00085d9e) main_gallery2_pane_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch_Large

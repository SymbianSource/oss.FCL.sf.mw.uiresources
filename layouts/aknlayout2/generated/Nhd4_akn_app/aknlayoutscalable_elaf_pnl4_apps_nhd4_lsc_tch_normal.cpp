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

#include "aknlayoutscalable_elaf_pnl4_apps_nhd4_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnl4_apps_nhd4_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0000ddb3 };

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
0x0ba4,	// (0x0000e957) Screen

0x0bb0,	// (0x0000e963) application_window

0x0bec,	// (0x0000e99f) area_bottom_pane_ParamLimits

0x0bec,	// (0x0000e99f) area_bottom_pane

0x0c25,	// (0x0000e9d8) area_top_pane_ParamLimits

0x0c25,	// (0x0000e9d8) area_top_pane

0x92d0,	// (0x00017083) call_video_uplink_pane_ParamLimits

0x92d0,	// (0x00017083) call_video_uplink_pane

0x0c9a,	// (0x0000ea4d) main_pane_ParamLimits

0x0c9a,	// (0x0000ea4d) main_pane

0xbcfe,	// (0x00019ab1) context_pane

0x3d09,	// (0x00011abc) navi_pane

0x3d31,	// (0x00011ae4) popup_cale_events_window_ParamLimits

0x3d31,	// (0x00011ae4) popup_cale_events_window

0xbd11,	// (0x00019ac4) popup_mup_playback_window

0x3d49,	// (0x00011afc) signal_pane

0x9aa1,	// (0x00017854) main_browser_pane

0xa812,	// (0x000185c5) main_burst_pane

0x3a69,	// (0x0001181c) main_calc_pane

0xa812,	// (0x000185c5) main_cale_day_pane

0x9aa1,	// (0x00017854) main_cale_month_pane

0xa812,	// (0x000185c5) main_cale_week_pane

0xa812,	// (0x000185c5) main_call_pane

0x970d,	// (0x000174c0) main_call_poc_pane

0xa812,	// (0x000185c5) main_camera_pane

0xa812,	// (0x000185c5) main_chi_dic_pane

0xa6a1,	// (0x00018454) main_clock_pane

0x970d,	// (0x000174c0) main_fmradio_pane

0xa812,	// (0x000185c5) main_graph_messa_pane

0x970d,	// (0x000174c0) main_help_pane

0x9aa1,	// (0x00017854) main_im_pane

0x9968,	// (0x0001771b) main_image_pane_ParamLimits

0x9968,	// (0x0001771b) main_image_pane

0x970d,	// (0x000174c0) main_location2_pane

0xa812,	// (0x000185c5) main_location_pane

0x970d,	// (0x000174c0) main_messa_pane

0x970d,	// (0x000174c0) main_mp2_pane

0xa812,	// (0x000185c5) main_mp_pane

0x970d,	// (0x000174c0) main_msg_pane

0x970d,	// (0x000174c0) main_mup_eq_pane

0x970d,	// (0x000174c0) main_mup_pane

0x9aa1,	// (0x00017854) main_notes_pane

0x970d,	// (0x000174c0) main_pec_pane

0x970d,	// (0x000174c0) main_phob_pane

0x970d,	// (0x000174c0) main_pinb_pane

0x970d,	// (0x000174c0) main_postcard_pane

0x970d,	// (0x000174c0) main_qdial_pane

0xa812,	// (0x000185c5) main_skin_pane

0x970d,	// (0x000174c0) main_smil2_pane

0xa812,	// (0x000185c5) main_smil_pane

0xa812,	// (0x000185c5) main_video_pane

0xa812,	// (0x000185c5) main_video_tele_pane

0x9968,	// (0x0001771b) main_viewer_pane_ParamLimits

0x9968,	// (0x0001771b) main_viewer_pane

0xa812,	// (0x000185c5) main_vorec_pane

0x3abd,	// (0x00011870) popup_blid_sat_info_window_ParamLimits

0x3abd,	// (0x00011870) popup_blid_sat_info_window

0x3b15,	// (0x000118c8) popup_dyc_status_message_window_ParamLimits

0x3b15,	// (0x000118c8) popup_dyc_status_message_window

0x3b2d,	// (0x000118e0) popup_grid_large_graphic_window_ParamLimits

0x3b2d,	// (0x000118e0) popup_grid_large_graphic_window

0x3be3,	// (0x00011996) popup_loc_request_window_ParamLimits

0x3be3,	// (0x00011996) popup_loc_request_window

0x3ce1,	// (0x00011a94) popup_wml_address_window_ParamLimits

0x3ce1,	// (0x00011a94) popup_wml_address_window

0x38a3,	// (0x00011656) call_muted_g1

0x355b,	// (0x0001130e) popup_call_audio_conf_window_ParamLimits

0x355b,	// (0x0001130e) popup_call_audio_conf_window

0x38b7,	// (0x0001166a) popup_call_audio_first_window_ParamLimits

0x38b7,	// (0x0001166a) popup_call_audio_first_window

0x392d,	// (0x000116e0) popup_call_audio_in_window_ParamLimits

0x392d,	// (0x000116e0) popup_call_audio_in_window

0x3969,	// (0x0001171c) popup_call_audio_out_window_ParamLimits

0x3969,	// (0x0001171c) popup_call_audio_out_window

0x39a3,	// (0x00011756) popup_call_audio_second_window_ParamLimits

0x39a3,	// (0x00011756) popup_call_audio_second_window

0x39f9,	// (0x000117ac) popup_call_audio_wait_window_ParamLimits

0x39f9,	// (0x000117ac) popup_call_audio_wait_window

0x3a2e,	// (0x000117e1) popup_number_entry_window_ParamLimits

0x3a2e,	// (0x000117e1) popup_number_entry_window

0x92fc,	// (0x000170af) bg_popup_call_pane_cp05_ParamLimits

0x92fc,	// (0x000170af) bg_popup_call_pane_cp05

0x931c,	// (0x000170cf) popup_number_entry_window_t1

0x932f,	// (0x000170e2) popup_number_entry_window_t2

0x9341,	// (0x000170f4) popup_number_entry_window_t3

0x0003,

0xf0e7,	// (0x0001ce9a) popup_number_entry_window_t

0x9353,	// (0x00017106) text_title_cp2

0x9366,	// (0x00017119) bg_popup_call_pane_cp_ParamLimits

0x9366,	// (0x00017119) bg_popup_call_pane_cp

0x9374,	// (0x00017127) call_thumbnail_pane

0x937c,	// (0x0001712f) popup_call_audio_in_window_g1_ParamLimits

0x937c,	// (0x0001712f) popup_call_audio_in_window_g1

0x9388,	// (0x0001713b) popup_call_audio_in_window_g2_ParamLimits

0x9388,	// (0x0001713b) popup_call_audio_in_window_g2

0x9394,	// (0x00017147) popup_call_audio_in_window_g3_ParamLimits

0x9394,	// (0x00017147) popup_call_audio_in_window_g3

0x0002,

0xf0f0,	// (0x0001cea3) popup_call_audio_in_window_g_ParamLimits

0xf0f0,	// (0x0001cea3) popup_call_audio_in_window_g

0x93a0,	// (0x00017153) popup_call_audio_in_window_t1_ParamLimits

0x93a0,	// (0x00017153) popup_call_audio_in_window_t1

0x93bb,	// (0x0001716e) popup_call_audio_in_window_t2_ParamLimits

0x93bb,	// (0x0001716e) popup_call_audio_in_window_t2

0x93d6,	// (0x00017189) popup_call_audio_in_window_t3_ParamLimits

0x93d6,	// (0x00017189) popup_call_audio_in_window_t3

0x0002,

0xf0f7,	// (0x0001ceaa) popup_call_audio_in_window_t_ParamLimits

0xf0f7,	// (0x0001ceaa) popup_call_audio_in_window_t

0x9366,	// (0x00017119) bg_popup_call_pane_cp01_ParamLimits

0x9366,	// (0x00017119) bg_popup_call_pane_cp01

0x9374,	// (0x00017127) call_thumbnail_pane_cp02

0x93e9,	// (0x0001719c) call_type_pane_cp022

0x93f1,	// (0x000171a4) popup_call_audio_out_window_g1_ParamLimits

0x93f1,	// (0x000171a4) popup_call_audio_out_window_g1

0x9403,	// (0x000171b6) popup_call_audio_out_window_g2_ParamLimits

0x9403,	// (0x000171b6) popup_call_audio_out_window_g2

0x940f,	// (0x000171c2) popup_call_audio_out_window_g3_ParamLimits

0x940f,	// (0x000171c2) popup_call_audio_out_window_g3

0x0002,

0xf0fe,	// (0x0001ceb1) popup_call_audio_out_window_g_ParamLimits

0xf0fe,	// (0x0001ceb1) popup_call_audio_out_window_g

0x9421,	// (0x000171d4) popup_call_audio_out_window_t1_ParamLimits

0x9421,	// (0x000171d4) popup_call_audio_out_window_t1

0x9439,	// (0x000171ec) popup_call_audio_out_window_t2_ParamLimits

0x9439,	// (0x000171ec) popup_call_audio_out_window_t2

0x0001,

0xf105,	// (0x0001ceb8) popup_call_audio_out_window_t_ParamLimits

0xf105,	// (0x0001ceb8) popup_call_audio_out_window_t

0x944e,	// (0x00017201) bg_popup_call_pane_ParamLimits

0x944e,	// (0x00017201) bg_popup_call_pane

0x0e52,	// (0x0000ec05) call_thumbnail_pane_cp_ParamLimits

0x0e52,	// (0x0000ec05) call_thumbnail_pane_cp

0x94d2,	// (0x00017285) call_type_pane_cp01_ParamLimits

0x94d2,	// (0x00017285) call_type_pane_cp01

0x9516,	// (0x000172c9) popup_call_audio_first_window_g1_ParamLimits

0x9516,	// (0x000172c9) popup_call_audio_first_window_g1

0x9562,	// (0x00017315) popup_call_audio_first_window_g2_ParamLimits

0x9562,	// (0x00017315) popup_call_audio_first_window_g2

0x0001,

0xf10a,	// (0x0001cebd) popup_call_audio_first_window_g_ParamLimits

0xf10a,	// (0x0001cebd) popup_call_audio_first_window_g

0x95a6,	// (0x00017359) popup_call_audio_first_window_t1_ParamLimits

0x95a6,	// (0x00017359) popup_call_audio_first_window_t1

0x9652,	// (0x00017405) popup_call_audio_first_window_t4_ParamLimits

0x9652,	// (0x00017405) popup_call_audio_first_window_t4

0x96de,	// (0x00017491) popup_call_audio_first_window_t5_ParamLimits

0x96de,	// (0x00017491) popup_call_audio_first_window_t5

0x0002,

0xf10f,	// (0x0001cec2) popup_call_audio_first_window_t_ParamLimits

0xf10f,	// (0x0001cec2) popup_call_audio_first_window_t

0x970d,	// (0x000174c0) bg_popup_call_pane_cp02

0x9717,	// (0x000174ca) call_type_pane_cp023

0x971f,	// (0x000174d2) popup_call_audio_wait_window_g1

0x9727,	// (0x000174da) popup_call_audio_wait_window_g2

0x0001,

0xf116,	// (0x0001cec9) popup_call_audio_wait_window_g

0x972f,	// (0x000174e2) popup_call_audio_wait_window_t3

0x973d,	// (0x000174f0) bg_popup_call_pane_cp03_ParamLimits

0x973d,	// (0x000174f0) bg_popup_call_pane_cp03

0x979d,	// (0x00017550) call_thumbnail_pane_cp011_ParamLimits

0x979d,	// (0x00017550) call_thumbnail_pane_cp011

0x97a9,	// (0x0001755c) call_type_pane_cp034_ParamLimits

0x97a9,	// (0x0001755c) call_type_pane_cp034

0x97e5,	// (0x00017598) popup_call_audio_second_window_g1_ParamLimits

0x97e5,	// (0x00017598) popup_call_audio_second_window_g1

0x9821,	// (0x000175d4) popup_call_audio_second_window_g2_ParamLimits

0x9821,	// (0x000175d4) popup_call_audio_second_window_g2

0x0001,

0xf11b,	// (0x0001cece) popup_call_audio_second_window_g_ParamLimits

0xf11b,	// (0x0001cece) popup_call_audio_second_window_g

0x985d,	// (0x00017610) popup_call_audio_second_window_t1_ParamLimits

0x985d,	// (0x00017610) popup_call_audio_second_window_t1

0x98de,	// (0x00017691) popup_call_audio_second_window_t2_ParamLimits

0x98de,	// (0x00017691) popup_call_audio_second_window_t2

0x9914,	// (0x000176c7) popup_call_audio_second_window_t3_ParamLimits

0x9914,	// (0x000176c7) popup_call_audio_second_window_t3

0x0002,

0xf120,	// (0x0001ced3) popup_call_audio_second_window_t_ParamLimits

0xf120,	// (0x0001ced3) popup_call_audio_second_window_t

0x970d,	// (0x000174c0) bg_popup_call_pane_cp04

0x994a,	// (0x000176fd) list_conf_pane

0x9952,	// (0x00017705) popup_call_audio_conf_window_t1

0x9960,	// (0x00017713) call_thumbnail_pane_g1

0x9968,	// (0x0001771b) bg_pinb_pane_ParamLimits

0x9968,	// (0x0001771b) bg_pinb_pane

0x9976,	// (0x00017729) find_pinb_pane

0x997f,	// (0x00017732) listscroll_pinb_pane_ParamLimits

0x997f,	// (0x00017732) listscroll_pinb_pane

0x998e,	// (0x00017741) pinb_bg_pane_g1

0x0e76,	// (0x0000ec29) pinb_bg_pane_g2

0x0e82,	// (0x0000ec35) pinb_bg_pane_g3

0x0e8e,	// (0x0000ec41) pinb_bg_pane_g4

0x0e9a,	// (0x0000ec4d) pinb_bg_pane_g5

0x0ea6,	// (0x0000ec59) pinb_bg_pane_g6

0x0eb1,	// (0x0000ec64) pinb_bg_pane_g7

0x0ebc,	// (0x0000ec6f) pinb_bg_pane_g8

0x0ec7,	// (0x0000ec7a) pinb_bg_pane_g9

0x0ed1,	// (0x0000ec84) pinb_bg_pane_g10

0x0009,

0xf127,	// (0x0001ceda) pinb_bg_pane_g

0x0ee6,	// (0x0000ec99) grid_pinb_pane

0x0eef,	// (0x0000eca2) list_pinb_pane

0x0ef8,	// (0x0000ecab) scroll_pane_cp01_ParamLimits

0x0ef8,	// (0x0000ecab) scroll_pane_cp01

0x99a0,	// (0x00017753) find_pinb_pane_g1_ParamLimits

0x99a0,	// (0x00017753) find_pinb_pane_g1

0x99b8,	// (0x0001776b) find_pinb_pane_t1

0x99ca,	// (0x0001777d) find_pinb_pane_t2

0x0001,

0xf141,	// (0x0001cef4) find_pinb_pane_t

0x99df,	// (0x00017792) input_focus_pane_cp01_ParamLimits

0x99df,	// (0x00017792) input_focus_pane_cp01

0x0f0a,	// (0x0000ecbd) cell_pinb_pane_ParamLimits

0x0f0a,	// (0x0000ecbd) cell_pinb_pane

0x0f3c,	// (0x0000ecef) cell_pinb_pane_g1_ParamLimits

0x0f3c,	// (0x0000ecef) cell_pinb_pane_g1

0x0f4c,	// (0x0000ecff) cell_pinb_pane_g2_ParamLimits

0x0f4c,	// (0x0000ecff) cell_pinb_pane_g2

0x99eb,	// (0x0001779e) cell_pinb_pane_g3_ParamLimits

0x99eb,	// (0x0001779e) cell_pinb_pane_g3

0x0002,

0xf146,	// (0x0001cef9) cell_pinb_pane_g_ParamLimits

0xf146,	// (0x0001cef9) cell_pinb_pane_g

0x970d,	// (0x000174c0) grid_highlight_pane_cp01

0x0f58,	// (0x0000ed0b) list_pinb_item_pane_ParamLimits

0x0f58,	// (0x0000ed0b) list_pinb_item_pane

0x970d,	// (0x000174c0) list_highlight_pane_cp02

0x99f7,	// (0x000177aa) list_pinb_item_pane_g1_ParamLimits

0x99f7,	// (0x000177aa) list_pinb_item_pane_g1

0x9a04,	// (0x000177b7) list_pinb_item_pane_g2_ParamLimits

0x9a04,	// (0x000177b7) list_pinb_item_pane_g2

0x0f6c,	// (0x0000ed1f) list_pinb_item_pane_g3_ParamLimits

0x0f6c,	// (0x0000ed1f) list_pinb_item_pane_g3

0x9a10,	// (0x000177c3) list_pinb_item_pane_g4_ParamLimits

0x9a10,	// (0x000177c3) list_pinb_item_pane_g4

0x0003,

0xf14d,	// (0x0001cf00) list_pinb_item_pane_g_ParamLimits

0xf14d,	// (0x0001cf00) list_pinb_item_pane_g

0x9a1c,	// (0x000177cf) list_pinb_item_pane_t1_ParamLimits

0x9a1c,	// (0x000177cf) list_pinb_item_pane_t1

0x0f9b,	// (0x0000ed4e) calc_display_pane

0x0fc3,	// (0x0000ed76) calc_paper_pane

0x0fe6,	// (0x0000ed99) grid_calc_pane

0x970d,	// (0x000174c0) bg_list_pane_cp01

0x1014,	// (0x0000edc7) clock_g1

0x101c,	// (0x0000edcf) clock_g2

0x0001,

0xf156,	// (0x0001cf09) clock_g

0x1024,	// (0x0000edd7) clock_t1_ParamLimits

0x1024,	// (0x0000edd7) clock_t1

0x1039,	// (0x0000edec) clock_t2_ParamLimits

0x1039,	// (0x0000edec) clock_t2

0x104b,	// (0x0000edfe) clock_t3_ParamLimits

0x104b,	// (0x0000edfe) clock_t3

0x105d,	// (0x0000ee10) clock_t4_ParamLimits

0x105d,	// (0x0000ee10) clock_t4

0x106f,	// (0x0000ee22) clock_t5_ParamLimits

0x106f,	// (0x0000ee22) clock_t5

0x1084,	// (0x0000ee37) clock_t6_ParamLimits

0x1084,	// (0x0000ee37) clock_t6

0x1096,	// (0x0000ee49) clock_t7_ParamLimits

0x1096,	// (0x0000ee49) clock_t7

0x10a8,	// (0x0000ee5b) clock_t8_ParamLimits

0x10a8,	// (0x0000ee5b) clock_t8

0x10bc,	// (0x0000ee6f) clock_t9_ParamLimits

0x10bc,	// (0x0000ee6f) clock_t9

0x0008,

0xf15b,	// (0x0001cf0e) clock_t_ParamLimits

0xf15b,	// (0x0001cf0e) clock_t

0x9a3b,	// (0x000177ee) popup_clock_analogue_window_cp02

0x9a3b,	// (0x000177ee) popup_clock_digital_window_cp01

0x9a43,	// (0x000177f6) listscroll_help_pane

0x970d,	// (0x000174c0) phob_pre_status_pane

0x9a4d,	// (0x00017800) grid_qdial_pane

0x970d,	// (0x000174c0) listscroll_mce_pane

0x9a57,	// (0x0001780a) bg_notes_pane

0x9a65,	// (0x00017818) list_notes_pane

0x10d0,	// (0x0000ee83) scroll_pane_cp06

0x9a73,	// (0x00017826) bg_calc_paper_pane

0x9a87,	// (0x0001783a) list_calc_pane

0x9aa1,	// (0x00017854) bg_calc_display_pane

0x10e4,	// (0x0000ee97) calc_display_pane_t1

0x10f6,	// (0x0000eea9) calc_display_pane_t2

0x9aad,	// (0x00017860) calc_display_pane_t3

0x0002,

0xf16e,	// (0x0001cf21) calc_display_pane_t

0x1108,	// (0x0000eebb) cell_calc_pane_ParamLimits

0x1108,	// (0x0000eebb) cell_calc_pane

0x9abf,	// (0x00017872) bg_calc_paper_pane_g1

0x9acb,	// (0x0001787e) bg_calc_paper_pane_g2

0x9ad7,	// (0x0001788a) bg_calc_paper_pane_g3

0x9ae3,	// (0x00017896) bg_calc_paper_pane_g4

0x9aef,	// (0x000178a2) bg_calc_paper_pane_g5

0x113f,	// (0x0000eef2) bg_calc_paper_pane_g6

0x1150,	// (0x0000ef03) bg_calc_paper_pane_g7

0x1161,	// (0x0000ef14) bg_calc_paper_pane_g8

0x0007,

0xf175,	// (0x0001cf28) bg_calc_paper_pane_g

0x1174,	// (0x0000ef27) calc_bg_paper_pane_g9

0x1187,	// (0x0000ef3a) list_calc_item_pane_ParamLimits

0x1187,	// (0x0000ef3a) list_calc_item_pane

0x9afb,	// (0x000178ae) list_calc_item_pane_g1

0x9b08,	// (0x000178bb) list_calc_item_pane_t1_ParamLimits

0x9b08,	// (0x000178bb) list_calc_item_pane_t1

0x119f,	// (0x0000ef52) list_calc_item_pane_t2_ParamLimits

0x119f,	// (0x0000ef52) list_calc_item_pane_t2

0x0001,

0xf186,	// (0x0001cf39) list_calc_item_pane_t_ParamLimits

0xf186,	// (0x0001cf39) list_calc_item_pane_t

0x9b1a,	// (0x000178cd) cell_calc_pane_g1

0x9b24,	// (0x000178d7) grid_highlight_pane_cp02

0x9b46,	// (0x000178f9) bg_calc_display_pane_g1

0x9b4f,	// (0x00017902) bg_calc_display_pane_g2

0x9b59,	// (0x0001790c) bg_calc_display_pane_g3

0x0002,

0xf190,	// (0x0001cf43) bg_calc_display_pane_g

0x11d1,	// (0x0000ef84) cell_qdial_pane_ParamLimits

0x11d1,	// (0x0000ef84) cell_qdial_pane

0x11e5,	// (0x0000ef98) cell_qdial_pane_g1_ParamLimits

0x11e5,	// (0x0000ef98) cell_qdial_pane_g1

0x11fb,	// (0x0000efae) cell_qdial_pane_g2_ParamLimits

0x11fb,	// (0x0000efae) cell_qdial_pane_g2

0x9b62,	// (0x00017915) cell_qdial_pane_g3_ParamLimits

0x9b62,	// (0x00017915) cell_qdial_pane_g3

0x0003,

0xf197,	// (0x0001cf4a) cell_qdial_pane_g_ParamLimits

0xf197,	// (0x0001cf4a) cell_qdial_pane_g

0x1222,	// (0x0000efd5) cell_qdial_pane_t1_ParamLimits

0x1222,	// (0x0000efd5) cell_qdial_pane_t1

0x123a,	// (0x0000efed) cell_qdial_pane_t2_ParamLimits

0x123a,	// (0x0000efed) cell_qdial_pane_t2

0x124d,	// (0x0000f000) cell_qdial_pane_t3_ParamLimits

0x124d,	// (0x0000f000) cell_qdial_pane_t3

0x0002,

0xf1a0,	// (0x0001cf53) cell_qdial_pane_t_ParamLimits

0xf1a0,	// (0x0001cf53) cell_qdial_pane_t

0x970d,	// (0x000174c0) grid_highlight_pane_cp04

0x9b6e,	// (0x00017921) thumbnail_qdial_pane_ParamLimits

0x9b6e,	// (0x00017921) thumbnail_qdial_pane

0x9bca,	// (0x0001797d) list_help_pane

0x9bd3,	// (0x00017986) scroll_pane_cp02

0x1260,	// (0x0000f013) help_list_pane_t1_ParamLimits

0x1260,	// (0x0000f013) help_list_pane_t1

0x9bdc,	// (0x0001798f) bg_notes_pane_g2

0x9be4,	// (0x00017997) bg_notes_pane_g3

0x9bec,	// (0x0001799f) notes_bg_pane_g1

0x9bf4,	// (0x000179a7) notes_bg_pane_g4

0x9bfc,	// (0x000179af) notes_bg_pane_g5

0x9c04,	// (0x000179b7) notes_bg_pane_g6

0x9c0c,	// (0x000179bf) notes_bg_pane_g7

0x9c14,	// (0x000179c7) notes_bg_pane_g8

0x9c1c,	// (0x000179cf) notes_bg_pane_g9

0x0006,

0xf1be,	// (0x0001cf71) notes_bg_pane_g

0x1280,	// (0x0000f033) list_notes_text_pane_ParamLimits

0x1280,	// (0x0000f033) list_notes_text_pane

0x9c24,	// (0x000179d7) list_notes_text_pane_g1

0x1297,	// (0x0000f04a) list_notes_text_pane_t1

0x9aa1,	// (0x00017854) listscroll_cale_week_pane

0x12c2,	// (0x0000f075) bg_cale_heading_pane

0x9c3e,	// (0x000179f1) bg_cale_pane_cp01

0x12da,	// (0x0000f08d) cale_week_corner_pane

0x12eb,	// (0x0000f09e) cale_week_day_heading_pane

0x1303,	// (0x0000f0b6) cale_week_scroll_pane_g1

0x1318,	// (0x0000f0cb) cale_week_scroll_pane_g2

0x1329,	// (0x0000f0dc) cale_week_scroll_pane_g3

0x133a,	// (0x0000f0ed) cale_week_scroll_pane_g4

0x134b,	// (0x0000f0fe) cale_week_scroll_pane_g5

0x135e,	// (0x0000f111) cale_week_scroll_pane_g6

0x1371,	// (0x0000f124) cale_week_scroll_pane_g7

0x1384,	// (0x0000f137) cale_week_scroll_pane_g8

0x1397,	// (0x0000f14a) cale_week_scroll_pane_g9

0x13a8,	// (0x0000f15b) cale_week_scroll_pane_g10

0x13b9,	// (0x0000f16c) cale_week_scroll_pane_g11

0x13ca,	// (0x0000f17d) cale_week_scroll_pane_g12

0x13db,	// (0x0000f18e) cale_week_scroll_pane_g13

0x13ec,	// (0x0000f19f) cale_week_scroll_pane_g14

0x13fd,	// (0x0000f1b0) cale_week_scroll_pane_g15

0x000e,

0xf1cd,	// (0x0001cf80) cale_week_scroll_pane_g

0x1412,	// (0x0000f1c5) cale_week_time_pane

0x1425,	// (0x0000f1d8) grid_cale_week_pane

0x143a,	// (0x0000f1ed) scroll_pane_cp08

0x1454,	// (0x0000f207) cell_cale_week_pane_ParamLimits

0x1454,	// (0x0000f207) cell_cale_week_pane

0x1494,	// (0x0000f247) cale_week_day_heading_pane_t1

0x14a8,	// (0x0000f25b) cale_week_day_heading_pane_t2

0x14bc,	// (0x0000f26f) cale_week_day_heading_pane_t3

0x14d0,	// (0x0000f283) cale_week_day_heading_pane_t4

0x14e4,	// (0x0000f297) cale_week_day_heading_pane_t5

0x14f8,	// (0x0000f2ab) cale_week_day_heading_pane_t6

0x150e,	// (0x0000f2c1) cale_week_day_heading_pane_t7

0x0006,

0xf1ec,	// (0x0001cf9f) cale_week_day_heading_pane_t

0x9c69,	// (0x00017a1c) bg_cale_side_pane

0x1522,	// (0x0000f2d5) cale_week_time_pane_t1

0x153a,	// (0x0000f2ed) cale_week_time_pane_t2

0x1552,	// (0x0000f305) cale_week_time_pane_t3

0x156a,	// (0x0000f31d) cale_week_time_pane_t4

0x1582,	// (0x0000f335) cale_week_time_pane_t5

0x159a,	// (0x0000f34d) cale_week_time_pane_t6

0x15b2,	// (0x0000f365) cale_week_time_pane_t7

0x15ca,	// (0x0000f37d) cale_week_time_pane_t8

0x0007,

0xf1fb,	// (0x0001cfae) cale_week_time_pane_t

0x15e2,	// (0x0000f395) cell_cale_week_pane_g2

0x15fb,	// (0x0000f3ae) cell_cale_week_pane_g3_ParamLimits

0x15fb,	// (0x0000f3ae) cell_cale_week_pane_g3

0x9c77,	// (0x00017a2a) grid_highlight_pane_cp07

0x9c7f,	// (0x00017a32) listscroll_gms_pane

0x9c89,	// (0x00017a3c) grid_gms_pane

0x9c92,	// (0x00017a45) listscroll_gms_pane_g1

0x9c9a,	// (0x00017a4d) listscroll_gms_pane_g2

0x0001,

0xf20c,	// (0x0001cfbf) listscroll_gms_pane_g

0x1613,	// (0x0000f3c6) scroll_pane_cp010

0x161e,	// (0x0000f3d1) cell_gms_pane_ParamLimits

0x161e,	// (0x0000f3d1) cell_gms_pane

0x1630,	// (0x0000f3e3) cell_gms_pane_g1

0x9ca2,	// (0x00017a55) cell_gms_pane_g2

0x9c24,	// (0x000179d7) cell_gms_pane_g3

0x9caa,	// (0x00017a5d) cell_gms_pane_g4

0x0003,

0xf211,	// (0x0001cfc4) cell_gms_pane_g

0x9cb3,	// (0x00017a66) grid_highlight_pane_cp09

0x384b,	// (0x000115fe) phob_pre_status_pane_g1

0x3853,	// (0x00011606) phob_pre_status_pane_g2

0x385b,	// (0x0001160e) phob_pre_status_pane_g3

0x3863,	// (0x00011616) phob_pre_status_pane_g4

0x0004,

0xf600,	// (0x0001d3b3) phob_pre_status_pane_g

0x3875,	// (0x00011628) phob_pre_status_pane_t1

0x3883,	// (0x00011636) phob_pre_status_pane_t2

0x3893,	// (0x00011646) phob_pre_status_pane_t3

0x0002,

0xf60b,	// (0x0001d3be) phob_pre_status_pane_t

0x970d,	// (0x000174c0) bg_list_pane_cp05

0x9cc3,	// (0x00017a76) grid_vorec_pane

0x9ccb,	// (0x00017a7e) vorec_t1

0x9cd9,	// (0x00017a8c) vorec_t2

0x9ce7,	// (0x00017a9a) vorec_t3

0x9cf5,	// (0x00017aa8) vorec_t4

0x9d03,	// (0x00017ab6) vorec_t5

0x9d11,	// (0x00017ac4) vorec_t6

0x0006,

0xf21a,	// (0x0001cfcd) vorec_t

0x9d2d,	// (0x00017ae0) wait_bar_pane_cp01

0x9d35,	// (0x00017ae8) cell_vorec_pane_ParamLimits

0x9d35,	// (0x00017ae8) cell_vorec_pane

0x9d48,	// (0x00017afb) cell_vorec_pane_g1

0x970d,	// (0x000174c0) grid_highlight_pane_cp05

0x1650,	// (0x0000f403) cams_zoom_pane

0x165f,	// (0x0000f412) image_vga_pane

0x1679,	// (0x0000f42c) main_camera_pane_g1

0x168b,	// (0x0000f43e) main_camera_pane_g2

0x169d,	// (0x0000f450) main_camera_pane_g3

0x16af,	// (0x0000f462) main_camera_pane_g4

0x16c1,	// (0x0000f474) main_camera_pane_g5

0x16d3,	// (0x0000f486) main_camera_pane_g6

0x16e5,	// (0x0000f498) main_camera_pane_g7

0x0007,

0xf229,	// (0x0001cfdc) main_camera_pane_g

0x16f7,	// (0x0000f4aa) main_camera_pane_t1

0x170d,	// (0x0000f4c0) main_camera_pane_t2

0x0001,

0xf23a,	// (0x0001cfed) main_camera_pane_t

0x1749,	// (0x0000f4fc) cams_zoom_pane_cp_ParamLimits

0x1749,	// (0x0000f4fc) cams_zoom_pane_cp

0x1771,	// (0x0000f524) image_cif_pane_ParamLimits

0x1771,	// (0x0000f524) image_cif_pane

0x17ac,	// (0x0000f55f) image_subqcif_pane

0x17b4,	// (0x0000f567) main_video_pane_g1_ParamLimits

0x17b4,	// (0x0000f567) main_video_pane_g1

0x17d8,	// (0x0000f58b) main_video_pane_g2_ParamLimits

0x17d8,	// (0x0000f58b) main_video_pane_g2

0x180e,	// (0x0000f5c1) main_video_pane_g3_ParamLimits

0x180e,	// (0x0000f5c1) main_video_pane_g3

0x183e,	// (0x0000f5f1) main_video_pane_g4_ParamLimits

0x183e,	// (0x0000f5f1) main_video_pane_g4

0x186e,	// (0x0000f621) main_video_pane_g5_ParamLimits

0x186e,	// (0x0000f621) main_video_pane_g5

0x9d5e,	// (0x00017b11) main_video_pane_g6_ParamLimits

0x9d5e,	// (0x00017b11) main_video_pane_g6

0x0006,

0xf23f,	// (0x0001cff2) main_video_pane_g_ParamLimits

0xf23f,	// (0x0001cff2) main_video_pane_g

0x1899,	// (0x0000f64c) main_video_pane_t1_ParamLimits

0x1899,	// (0x0000f64c) main_video_pane_t1

0x9d78,	// (0x00017b2b) cams_zoom_pane_g1

0x9d81,	// (0x00017b34) cams_zoom_pane_g2

0x9d8a,	// (0x00017b3d) cams_zoom_pane_g3

0x9d93,	// (0x00017b46) cams_zoom_pane_g4

0x0003,

0xf24e,	// (0x0001d001) cams_zoom_pane_g

0x18f6,	// (0x0000f6a9) grid_cams_pane

0x1910,	// (0x0000f6c3) linegrid_cams_pane

0x1923,	// (0x0000f6d6) cell_cams_pane_ParamLimits

0x1923,	// (0x0000f6d6) cell_cams_pane

0x9d9c,	// (0x00017b4f) cams_burst_image_pane

0x9da4,	// (0x00017b57) cell_cams_pane_g1

0x970d,	// (0x000174c0) grid_highlight_pane_cp03

0x9b1a,	// (0x000178cd) mp_bg_pane_g1

0x970d,	// (0x000174c0) bg_list_pane_cp03

0xbbd6,	// (0x00019989) bg_mp_pane

0xbbde,	// (0x00019991) grid_mp_pane

0xbbe6,	// (0x00019999) media_player_g1

0xbbee,	// (0x000199a1) media_player_t1

0xbbfc,	// (0x000199af) media_player_t2

0xbc0a,	// (0x000199bd) media_player_t3

0xbc18,	// (0x000199cb) media_player_t4

0xbc26,	// (0x000199d9) media_player_t5

0xbc34,	// (0x000199e7) media_player_t6

0xbc42,	// (0x000199f5) media_player_t7

0x0006,

0xf5ea,	// (0x0001d39d) media_player_t

0xbc50,	// (0x00019a03) wait_bar_pane_cp02

0xf5cf,	// (0x0001d382) main_usb_pane_t

0x3842,	// (0x000115f5) cell_mp_pane

0x9b1a,	// (0x000178cd) cell_mp_pane_g1

0x970d,	// (0x000174c0) grid_highlight_pane_cp06

0x9e69,	// (0x00017c1c) grid_skin_colour_pane

0x9e71,	// (0x00017c24) list_highlight_pane_cp03

0x1995,	// (0x0000f748) skin_g1

0x9e79,	// (0x00017c2c) skin_t1

0x9e88,	// (0x00017c3b) skin_t2

0x0001,

0xf283,	// (0x0001d036) skin_t

0x199d,	// (0x0000f750) cell_skin_colour_pane_ParamLimits

0x199d,	// (0x0000f750) cell_skin_colour_pane

0x9e96,	// (0x00017c49) cell_skin_colour_pane_g1

0x1a16,	// (0x0000f7c9) call_video_g1_ParamLimits

0x1a16,	// (0x0000f7c9) call_video_g1

0x1a32,	// (0x0000f7e5) call_video_g2_ParamLimits

0x1a32,	// (0x0000f7e5) call_video_g2

0x0001,

0xf288,	// (0x0001d03b) call_video_g_ParamLimits

0xf288,	// (0x0001d03b) call_video_g

0x1a84,	// (0x0000f837) call_video_uplink_pane_cp1_ParamLimits

0x1a84,	// (0x0000f837) call_video_uplink_pane_cp1

0x9ea8,	// (0x00017c5b) call_video_uplink_pane_cp2

0x1b23,	// (0x0000f8d6) video_down_crop_pane_ParamLimits

0x1b23,	// (0x0000f8d6) video_down_crop_pane

0x1c0c,	// (0x0000f9bf) video_down_pane_ParamLimits

0x1c0c,	// (0x0000f9bf) video_down_pane

0x9eb0,	// (0x00017c63) video_down_subqcif_pane_ParamLimits

0x9eb0,	// (0x00017c63) video_down_subqcif_pane

0x9ec8,	// (0x00017c7b) video_down_subqcif_pane_cp_ParamLimits

0x9ec8,	// (0x00017c7b) video_down_subqcif_pane_cp

0x9eee,	// (0x00017ca1) im_reading_pane_ParamLimits

0x9eee,	// (0x00017ca1) im_reading_pane

0x1d1a,	// (0x0000facd) im_writing_pane_ParamLimits

0x1d1a,	// (0x0000facd) im_writing_pane

0x1d30,	// (0x0000fae3) im_reading_pane_t1

0x9f08,	// (0x00017cbb) list_im_pane

0x9f19,	// (0x00017ccc) scroll_pane_cp07

0x1d6c,	// (0x0000fb1f) im_writing_pane_t1_ParamLimits

0x1d6c,	// (0x0000fb1f) im_writing_pane_t1

0x9f32,	// (0x00017ce5) im_writing_pane_t2_ParamLimits

0x9f32,	// (0x00017ce5) im_writing_pane_t2

0x0001,

0xf292,	// (0x0001d045) im_writing_pane_t_ParamLimits

0xf292,	// (0x0001d045) im_writing_pane_t

0x970d,	// (0x000174c0) input_focus_pane_cp04

0x970d,	// (0x000174c0) input_focus_pane_cp05

0x1d81,	// (0x0000fb34) list_im_single_pane_ParamLimits

0x1d81,	// (0x0000fb34) list_im_single_pane

0x1d97,	// (0x0000fb4a) list_single_im_pane_t1

0x3802,	// (0x000115b5) blid_accuracy_pane

0x380a,	// (0x000115bd) blid_compass_pane

0x3814,	// (0x000115c7) main_location_t1

0x3824,	// (0x000115d7) main_location_t2

0x3834,	// (0x000115e7) main_location_t3

0x0002,

0xf5f9,	// (0x0001d3ac) main_location_t

0x970d,	// (0x000174c0) aid_levels_location

0x9b1a,	// (0x000178cd) blid_accuracy_pane_g1

0x9b1a,	// (0x000178cd) blid_accuracy_pane_g2

0x0001,

0xf2f4,	// (0x0001d0a7) blid_accuracy_pane_g

0x9f7a,	// (0x00017d2d) wml_content_pane

0x9fb8,	// (0x00017d6b) wml_button_pane_ParamLimits

0x9fb8,	// (0x00017d6b) wml_button_pane

0x1da6,	// (0x0000fb59) wml_list_single_large_pane_ParamLimits

0x1da6,	// (0x0000fb59) wml_list_single_large_pane

0x1dbd,	// (0x0000fb70) wml_list_single_medium_pane_ParamLimits

0x1dbd,	// (0x0000fb70) wml_list_single_medium_pane

0x1dd5,	// (0x0000fb88) wml_list_single_small_pane_ParamLimits

0x1dd5,	// (0x0000fb88) wml_list_single_small_pane

0x9fcc,	// (0x00017d7f) wml_selection_box_pane_ParamLimits

0x9fcc,	// (0x00017d7f) wml_selection_box_pane

0x9fdf,	// (0x00017d92) wml_list_single_pane_t1

0x9fee,	// (0x00017da1) wml_list_single_medium_pane_t1

0x9ffd,	// (0x00017db0) wml_list_single_large_pane_t1

0xa00c,	// (0x00017dbf) input_focus_pane_cp02_ParamLimits

0xa00c,	// (0x00017dbf) input_focus_pane_cp02

0xa01f,	// (0x00017dd2) wml_selection_box_pane_g1

0xa028,	// (0x00017ddb) wml_selection_box_pane_t1_ParamLimits

0xa028,	// (0x00017ddb) wml_selection_box_pane_t1

0x9968,	// (0x0001771b) bg_wml_button_pane_ParamLimits

0x9968,	// (0x0001771b) bg_wml_button_pane

0xa040,	// (0x00017df3) wml_button_pane_g1

0xa048,	// (0x00017dfb) wml_button_pane_t1

0xa040,	// (0x00017df3) wml_button_bg_pane_g1

0xa058,	// (0x00017e0b) wml_button_bg_pane_g2

0xa060,	// (0x00017e13) wml_button_bg_pane_g3

0xa068,	// (0x00017e1b) wml_button_bg_pane_g4

0xa070,	// (0x00017e23) wml_button_bg_pane_g5

0xa078,	// (0x00017e2b) wml_button_bg_pane_g6

0xa080,	// (0x00017e33) wml_button_bg_pane_g7

0xa088,	// (0x00017e3b) wml_button_bg_pane_g8

0xa090,	// (0x00017e43) wml_button_bg_pane_g9

0x0008,

0xf297,	// (0x0001d04a) wml_button_bg_pane_g

0x1df3,	// (0x0000fba6) bg_list_pane_cp02

0xa098,	// (0x00017e4b) mce_header_pane_ParamLimits

0xa098,	// (0x00017e4b) mce_header_pane

0xa0ae,	// (0x00017e61) mce_icon_pane

0xa0ae,	// (0x00017e61) mce_image_pane

0xa0b7,	// (0x00017e6a) mce_text_pane_ParamLimits

0xa0b7,	// (0x00017e6a) mce_text_pane

0x1dfb,	// (0x0000fbae) scroll_pane_cp03

0x9fb0,	// (0x00017d63) scroll_pane_cp04

0xa0ca,	// (0x00017e7d) scroll_pane_cp05_ParamLimits

0xa0ca,	// (0x00017e7d) scroll_pane_cp05

0x1e05,	// (0x0000fbb8) mce_header_field_pane_ParamLimits

0x1e05,	// (0x0000fbb8) mce_header_field_pane

0x1e1c,	// (0x0000fbcf) mce_header_field_pane_2_ParamLimits

0x1e1c,	// (0x0000fbcf) mce_header_field_pane_2

0x1e32,	// (0x0000fbe5) mce_header_field_pane_3

0x1e3a,	// (0x0000fbed) list_single_mce_message_pane_ParamLimits

0x1e3a,	// (0x0000fbed) list_single_mce_message_pane

0x1e52,	// (0x0000fc05) list_single_mce_smart_pane_ParamLimits

0x1e52,	// (0x0000fc05) list_single_mce_smart_pane

0xa0d6,	// (0x00017e89) input_focus_pane_cp03

0xa0df,	// (0x00017e92) list_header_data_pane

0x1e75,	// (0x0000fc28) mce_header_field_pane_t1

0x1e85,	// (0x0000fc38) list_single_mce_header_pane_ParamLimits

0x1e85,	// (0x0000fc38) list_single_mce_header_pane

0xa0e7,	// (0x00017e9a) list_single_mce_header_pane_t1

0xa0f6,	// (0x00017ea9) list_single_mce_message_pane_g1

0xa0fe,	// (0x00017eb1) list_single_mce_message_pane_t1

0x1eb7,	// (0x0000fc6a) bg_cale_heading_pane_cp01_ParamLimits

0x1eb7,	// (0x0000fc6a) bg_cale_heading_pane_cp01

0xa10c,	// (0x00017ebf) bg_cale_pane_cp02_ParamLimits

0xa10c,	// (0x00017ebf) bg_cale_pane_cp02

0x1eda,	// (0x0000fc8d) cale_month_corner_pane

0x1ef0,	// (0x0000fca3) cale_month_day_heading_pane_ParamLimits

0x1ef0,	// (0x0000fca3) cale_month_day_heading_pane

0x1f23,	// (0x0000fcd6) cale_month_pane_g1_ParamLimits

0x1f23,	// (0x0000fcd6) cale_month_pane_g1

0x1f3f,	// (0x0000fcf2) cale_month_pane_g2_ParamLimits

0x1f3f,	// (0x0000fcf2) cale_month_pane_g2

0x1f5a,	// (0x0000fd0d) cale_month_pane_g3_ParamLimits

0x1f5a,	// (0x0000fd0d) cale_month_pane_g3

0x1f86,	// (0x0000fd39) cale_month_pane_g4_ParamLimits

0x1f86,	// (0x0000fd39) cale_month_pane_g4

0x1fb2,	// (0x0000fd65) cale_month_pane_g5_ParamLimits

0x1fb2,	// (0x0000fd65) cale_month_pane_g5

0x1fe6,	// (0x0000fd99) cale_month_pane_g6_ParamLimits

0x1fe6,	// (0x0000fd99) cale_month_pane_g6

0x2022,	// (0x0000fdd5) cale_month_pane_g7_ParamLimits

0x2022,	// (0x0000fdd5) cale_month_pane_g7

0x205e,	// (0x0000fe11) cale_month_pane_g8_ParamLimits

0x205e,	// (0x0000fe11) cale_month_pane_g8

0x209a,	// (0x0000fe4d) cale_month_pane_g9_ParamLimits

0x209a,	// (0x0000fe4d) cale_month_pane_g9

0x20d4,	// (0x0000fe87) cale_month_pane_g10_ParamLimits

0x20d4,	// (0x0000fe87) cale_month_pane_g10

0x210e,	// (0x0000fec1) cale_month_pane_g11_ParamLimits

0x210e,	// (0x0000fec1) cale_month_pane_g11

0x2148,	// (0x0000fefb) cale_month_pane_g12_ParamLimits

0x2148,	// (0x0000fefb) cale_month_pane_g12

0x2182,	// (0x0000ff35) cale_month_pane_g13_ParamLimits

0x2182,	// (0x0000ff35) cale_month_pane_g13

0x000c,

0xf2aa,	// (0x0001d05d) cale_month_pane_g_ParamLimits

0xf2aa,	// (0x0001d05d) cale_month_pane_g

0x21bc,	// (0x0000ff6f) cale_month_week_pane

0x21cf,	// (0x0000ff82) grid_cale_month_pane_ParamLimits

0x21cf,	// (0x0000ff82) grid_cale_month_pane

0x21fd,	// (0x0000ffb0) cale_month_day_heading_pane_t1

0x225b,	// (0x0001000e) cale_month_day_heading_pane_t2

0x22c0,	// (0x00010073) cale_month_day_heading_pane_t3

0x2325,	// (0x000100d8) cale_month_day_heading_pane_t4

0x238a,	// (0x0001013d) cale_month_day_heading_pane_t5

0x23ff,	// (0x000101b2) cale_month_day_heading_pane_t6

0x2474,	// (0x00010227) cale_month_day_heading_pane_t7

0x0006,

0xf2c5,	// (0x0001d078) cale_month_day_heading_pane_t

0x9c69,	// (0x00017a1c) bg_cale_side_pane_cp01

0x24e9,	// (0x0001029c) cale_month_week_pane_t1

0x2500,	// (0x000102b3) cale_month_week_pane_t2

0x2517,	// (0x000102ca) cale_month_week_pane_t3

0x252e,	// (0x000102e1) cale_month_week_pane_t4

0x2545,	// (0x000102f8) cale_month_week_pane_t5

0x255c,	// (0x0001030f) cale_month_week_pane_t6

0x0005,

0xf2d4,	// (0x0001d087) cale_month_week_pane_t

0x2573,	// (0x00010326) cell_cale_month_pane_ParamLimits

0x2573,	// (0x00010326) cell_cale_month_pane

0xa16b,	// (0x00017f1e) cell_cale_month_pane_g1

0x2649,	// (0x000103fc) cell_cale_month_pane_t1_ParamLimits

0x2649,	// (0x000103fc) cell_cale_month_pane_t1

0x9c77,	// (0x00017a2a) grid_highlight_pane_cp08

0x9b1a,	// (0x000178cd) main_smil_g1

0x2665,	// (0x00010418) smil_status_pane

0xa177,	// (0x00017f2a) smil_text_pane

0xbaee,	// (0x000198a1) bg_popup_call3_rect_pane_g8

0xbaf6,	// (0x000198a9) bg_popup_call3_rect_pane_g9

0x0008,

0xf58d,	// (0x0001d340) bg_popup_call3_rect_pane_g

0xbd78,	// (0x00019b2b) smil_status_volume_pane_g1

0xa181,	// (0x00017f34) smil_status_pane_t1

0xbdab,	// (0x00019b5e) volume_smil_pane

0xa198,	// (0x00017f4b) list_smil_text_pane

0x267a,	// (0x0001042d) scroll_pane_cp011

0x2685,	// (0x00010438) smil_text_list_pane_t1_ParamLimits

0x2685,	// (0x00010438) smil_text_list_pane_t1

0xa1a2,	// (0x00017f55) aid_volume_smil_ParamLimits

0xa1a2,	// (0x00017f55) aid_volume_smil

0x9b1a,	// (0x000178cd) smil_volume_pane_g1

0x9b1a,	// (0x000178cd) smil_volume_pane_g2

0x0001,

0xf2f4,	// (0x0001d0a7) smil_volume_pane_g

0x9aa1,	// (0x00017854) listscroll_cale_day_pane

0xa1c4,	// (0x00017f77) bg_cale_pane

0xa1dc,	// (0x00017f8f) list_cale_pane

0xa1ed,	// (0x00017fa0) scroll_pane_cp09

0xa1fe,	// (0x00017fb1) cale_bg_pane_g1

0xa206,	// (0x00017fb9) cale_bg_pane_g2

0xa20e,	// (0x00017fc1) cale_bg_pane_g3

0xa216,	// (0x00017fc9) cale_bg_pane_g4

0xa21e,	// (0x00017fd1) cale_bg_pane_g5

0xa226,	// (0x00017fd9) cale_bg_pane_g6

0xa22e,	// (0x00017fe1) cale_bg_pane_g7

0xa236,	// (0x00017fe9) cale_bg_pane_g8

0xa23e,	// (0x00017ff1) cale_bg_pane_g9

0x0008,

0xf2f9,	// (0x0001d0ac) cale_bg_pane_g

0x26d9,	// (0x0001048c) list_cale_time_pane_ParamLimits

0x26d9,	// (0x0001048c) list_cale_time_pane

0x26ee,	// (0x000104a1) list_cale_time_pane_g1_ParamLimits

0x26ee,	// (0x000104a1) list_cale_time_pane_g1

0xa246,	// (0x00017ff9) list_cale_time_pane_g2_ParamLimits

0xa246,	// (0x00017ff9) list_cale_time_pane_g2

0x26fa,	// (0x000104ad) list_cale_time_pane_g3_ParamLimits

0x26fa,	// (0x000104ad) list_cale_time_pane_g3

0x2716,	// (0x000104c9) list_cale_time_pane_g4_ParamLimits

0x2716,	// (0x000104c9) list_cale_time_pane_g4

0x2724,	// (0x000104d7) list_cale_time_pane_g5_ParamLimits

0x2724,	// (0x000104d7) list_cale_time_pane_g5

0x0005,

0xf30c,	// (0x0001d0bf) list_cale_time_pane_g_ParamLimits

0xf30c,	// (0x0001d0bf) list_cale_time_pane_g

0x2732,	// (0x000104e5) list_cale_time_pane_t1_ParamLimits

0x2732,	// (0x000104e5) list_cale_time_pane_t1

0x275a,	// (0x0001050d) list_cale_time_pane_t2_ParamLimits

0x275a,	// (0x0001050d) list_cale_time_pane_t2

0x2a87,	// (0x0001083a) aid_blid_cardinal_pane

0x2ac5,	// (0x00010878) compass_pane_t4

0x2782,	// (0x00010535) list_cale_time_pane_t4_ParamLimits

0x2782,	// (0x00010535) list_cale_time_pane_t4

0x2ad3,	// (0x00010886) compass_pane_t5

0x2ae1,	// (0x00010894) compass_pane_t6

0x2aef,	// (0x000108a2) compass_pane_t7

0xa764,	// (0x00018517) navi_pane_cc_t1

0xa8cb,	// (0x0001867e) aid_phob_thumbnail_center_pane

0x3216,	// (0x00010fc9) main_postcard_pane_g4_ParamLimits

0x0002,

0xf319,	// (0x0001d0cc) list_cale_time_pane_t_ParamLimits

0xf319,	// (0x0001d0cc) list_cale_time_pane_t

0x9366,	// (0x00017119) bg_popup_window_pane_cp02_ParamLimits

0x9366,	// (0x00017119) bg_popup_window_pane_cp02

0xa260,	// (0x00018013) heading_pane_cp01_ParamLimits

0xa260,	// (0x00018013) heading_pane_cp01

0xa26c,	// (0x0001801f) loc_req_pane_ParamLimits

0xa26c,	// (0x0001801f) loc_req_pane

0xa27c,	// (0x0001802f) loc_type_pane_ParamLimits

0xa27c,	// (0x0001802f) loc_type_pane

0xa28e,	// (0x00018041) loc_type_pane_t1_ParamLimits

0xa28e,	// (0x00018041) loc_type_pane_t1

0xa2a0,	// (0x00018053) loc_type_pane_t2_ParamLimits

0xa2a0,	// (0x00018053) loc_type_pane_t2

0xa2b2,	// (0x00018065) loc_type_pane_t3_ParamLimits

0xa2b2,	// (0x00018065) loc_type_pane_t3

0x0002,

0xf320,	// (0x0001d0d3) loc_type_pane_t_ParamLimits

0xf320,	// (0x0001d0d3) loc_type_pane_t

0xa2c4,	// (0x00018077) list_loc_req_pane

0xa2ce,	// (0x00018081) scroll_pane_cp012

0x27aa,	// (0x0001055d) list_single_loc_request_popup_menu_pane_ParamLimits

0x27aa,	// (0x0001055d) list_single_loc_request_popup_menu_pane

0xa2d9,	// (0x0001808c) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xa2d9,	// (0x0001808c) list_single_loc_request_popup_menu_pane_g1

0xa2e5,	// (0x00018098) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xa2e5,	// (0x00018098) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf327,	// (0x0001d0da) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf327,	// (0x0001d0da) list_single_loc_request_popup_menu_pane_g

0xa2f1,	// (0x000180a4) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xa2f1,	// (0x000180a4) list_single_loc_request_popup_menu_pane_t1

0x9968,	// (0x0001771b) bg_popup_window_pane_cp03_ParamLimits

0x9968,	// (0x0001771b) bg_popup_window_pane_cp03

0xa307,	// (0x000180ba) heading_loc_req_pane_ParamLimits

0xa307,	// (0x000180ba) heading_loc_req_pane

0x27b7,	// (0x0001056a) popup_dyc_status_message_window_g1_ParamLimits

0x27b7,	// (0x0001056a) popup_dyc_status_message_window_g1

0x27cb,	// (0x0001057e) popup_dyc_status_message_window_t1_ParamLimits

0x27cb,	// (0x0001057e) popup_dyc_status_message_window_t1

0x27e0,	// (0x00010593) popup_dyc_status_message_window_t2_ParamLimits

0x27e0,	// (0x00010593) popup_dyc_status_message_window_t2

0x27f5,	// (0x000105a8) popup_dyc_status_message_window_t3_ParamLimits

0x27f5,	// (0x000105a8) popup_dyc_status_message_window_t3

0x0002,

0xf32c,	// (0x0001d0df) popup_dyc_status_message_window_t_ParamLimits

0xf32c,	// (0x0001d0df) popup_dyc_status_message_window_t

0x970d,	// (0x000174c0) bg_heading_pane_cp01

0xa313,	// (0x000180c6) heading_loc_req_pane_g1

0xa31b,	// (0x000180ce) heading_loc_req_pane_g2

0xa323,	// (0x000180d6) heading_loc_req_pane_g3

0x0002,

0xf333,	// (0x0001d0e6) heading_loc_req_pane_g

0xa32b,	// (0x000180de) heading_loc_req_pane_t1

0xa3af,	// (0x00018162) bg_popup_sub_pane_cp01_ParamLimits

0xa3af,	// (0x00018162) bg_popup_sub_pane_cp01

0xa3bd,	// (0x00018170) popup_cale_events_window_g1_ParamLimits

0xa3bd,	// (0x00018170) popup_cale_events_window_g1

0xa3dd,	// (0x00018190) popup_cale_events_window_g2_ParamLimits

0xa3dd,	// (0x00018190) popup_cale_events_window_g2

0x0001,

0xf367,	// (0x0001d11a) popup_cale_events_window_g_ParamLimits

0xf367,	// (0x0001d11a) popup_cale_events_window_g

0xa3fd,	// (0x000181b0) popup_cale_events_window_t1_ParamLimits

0xa3fd,	// (0x000181b0) popup_cale_events_window_t1

0xa40f,	// (0x000181c2) popup_cale_events_window_t2_ParamLimits

0xa40f,	// (0x000181c2) popup_cale_events_window_t2

0xa44d,	// (0x00018200) popup_cale_events_window_t3_ParamLimits

0xa44d,	// (0x00018200) popup_cale_events_window_t3

0xa487,	// (0x0001823a) popup_cale_events_window_t4_ParamLimits

0xa487,	// (0x0001823a) popup_cale_events_window_t4

0x0003,

0xf36c,	// (0x0001d11f) popup_cale_events_window_t_ParamLimits

0xf36c,	// (0x0001d11f) popup_cale_events_window_t

0x2883,	// (0x00010636) call_type_pane

0x2893,	// (0x00010646) popup_call_status_window_g1

0x28a7,	// (0x0001065a) popup_call_status_window_g2

0x28bb,	// (0x0001066e) popup_call_status_window_g3

0x0002,

0xf375,	// (0x0001d128) popup_call_status_window_g

0xa4bd,	// (0x00018270) call_type_pane_g1

0xa4c6,	// (0x00018279) call_type_pane_g2

0x0001,

0xf37c,	// (0x0001d12f) call_type_pane_g

0x970d,	// (0x000174c0) bg_popup_sub_pane_cp02

0xa4cf,	// (0x00018282) listscroll_popup_wml_pane

0xa4d7,	// (0x0001828a) list_wml_pane

0xa4e1,	// (0x00018294) scroll_pane_cp013

0xa4ec,	// (0x0001829f) list_single_graphic_popup_wml_pane_ParamLimits

0xa4ec,	// (0x0001829f) list_single_graphic_popup_wml_pane

0x9b1a,	// (0x000178cd) list_single_graphic_popup_wml_pane_g1

0xa500,	// (0x000182b3) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf381,	// (0x0001d134) list_single_graphic_popup_wml_pane_g

0xa508,	// (0x000182bb) list_single_graphic_popup_wml_pane_t1

0xa51e,	// (0x000182d1) aid_call_pane

0x9960,	// (0x00017713) popup_clock_analogue_window_g1

0x9960,	// (0x00017713) popup_clock_analogue_window_g2

0xa526,	// (0x000182d9) popup_clock_analogue_window_g3

0xa526,	// (0x000182d9) popup_clock_analogue_window_g4

0x9b1a,	// (0x000178cd) popup_clock_analogue_window_g5

0x0004,

0xf386,	// (0x0001d139) popup_clock_analogue_window_g

0xa52e,	// (0x000182e1) popup_clock_analogue_window_t1

0xa53c,	// (0x000182ef) clock_digital_number_pane_ParamLimits

0xa53c,	// (0x000182ef) clock_digital_number_pane

0xa548,	// (0x000182fb) clock_digital_number_pane_cp02_ParamLimits

0xa548,	// (0x000182fb) clock_digital_number_pane_cp02

0xa554,	// (0x00018307) clock_digital_number_pane_cp03_ParamLimits

0xa554,	// (0x00018307) clock_digital_number_pane_cp03

0xa560,	// (0x00018313) clock_digital_number_pane_cp04_ParamLimits

0xa560,	// (0x00018313) clock_digital_number_pane_cp04

0xa56c,	// (0x0001831f) clock_digital_separator_pane_ParamLimits

0xa56c,	// (0x0001831f) clock_digital_separator_pane

0xa578,	// (0x0001832b) popup_clock_digital_window_t1

0x9b1a,	// (0x000178cd) clock_digital_number_pane_g1

0x9b1a,	// (0x000178cd) clock_digital_number_pane_g2

0x0001,

0xf2f4,	// (0x0001d0a7) clock_digital_number_pane_g

0x9b1a,	// (0x000178cd) clock_digital_separator_pane_g1

0x9b1a,	// (0x000178cd) clock_digital_separator_pane_g2

0x0001,

0xf2f4,	// (0x0001d0a7) clock_digital_separator_pane_g

0x970d,	// (0x000174c0) bg_popup_window_pane_cp04

0xa595,	// (0x00018348) heading_pane_cp03

0xa59d,	// (0x00018350) listscroll_popup_gms_pane

0xa5a5,	// (0x00018358) grid_large_graphic_popup_pane

0xa5af,	// (0x00018362) listscroll_popup_gms_pane_g1

0xa5b7,	// (0x0001836a) listscroll_popup_gms_pane_g2

0x0001,

0xf391,	// (0x0001d144) listscroll_popup_gms_pane_g

0x9fb0,	// (0x00017d63) scroll_pane_cp014

0xa5bf,	// (0x00018372) cell_large_graphic_popup_pane_ParamLimits

0xa5bf,	// (0x00018372) cell_large_graphic_popup_pane

0xa5d7,	// (0x0001838a) cell_large_graphic_popup_pane_g1_ParamLimits

0xa5d7,	// (0x0001838a) cell_large_graphic_popup_pane_g1

0xa5e3,	// (0x00018396) cell_large_graphic_popup_pane_g2_ParamLimits

0xa5e3,	// (0x00018396) cell_large_graphic_popup_pane_g2

0xa5ef,	// (0x000183a2) cell_large_graphic_popup_pane_g3_ParamLimits

0xa5ef,	// (0x000183a2) cell_large_graphic_popup_pane_g3

0xa5fc,	// (0x000183af) cell_large_graphic_popup_pane_g4_ParamLimits

0xa5fc,	// (0x000183af) cell_large_graphic_popup_pane_g4

0x0003,

0xf396,	// (0x0001d149) cell_large_graphic_popup_pane_g_ParamLimits

0xf396,	// (0x0001d149) cell_large_graphic_popup_pane_g

0xa60c,	// (0x000183bf) grid_highlight_pane_cp010

0x9b1a,	// (0x000178cd) bg_popup_call_pane_g1

0xa616,	// (0x000183c9) list_single_graphic_popup_conf_pane_ParamLimits

0xa616,	// (0x000183c9) list_single_graphic_popup_conf_pane

0xa628,	// (0x000183db) list_highlight_pane_cp01

0xa631,	// (0x000183e4) list_single_graphic_popup_conf_pane_g1

0xa639,	// (0x000183ec) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf39f,	// (0x0001d152) list_single_graphic_popup_conf_pane_g

0xa641,	// (0x000183f4) list_single_graphic_popup_conf_pane_t1

0xa64f,	// (0x00018402) linegrid_cams_pane_g1

0x28cb,	// (0x0001067e) linegrid_cams_pane_g2

0x9c24,	// (0x000179d7) linegrid_cams_pane_g3

0xa658,	// (0x0001840b) linegrid_cams_pane_g4

0x28d4,	// (0x00010687) linegrid_cams_pane_g5

0x28dd,	// (0x00010690) linegrid_cams_pane_g6

0x9caa,	// (0x00017a5d) linegrid_cams_pane_g7

0x0006,

0xf3a4,	// (0x0001d157) linegrid_cams_pane_g

0xa661,	// (0x00018414) popup_clock_analogue_window

0xa661,	// (0x00018414) popup_clock_digital_window

0x970d,	// (0x000174c0) popup_phob_thumbnail_window

0x9b1a,	// (0x000178cd) call_video_uplink_pane_g1

0xa66a,	// (0x0001841d) call_video_uplink_pane_g2

0x0001,

0xf3b3,	// (0x0001d166) call_video_uplink_pane_g

0x9c77,	// (0x00017a2a) video_uplink_pane

0xa672,	// (0x00018425) mce_image_pane_g1

0x28e8,	// (0x0001069b) mce_image_pane_g2

0x28f0,	// (0x000106a3) mce_image_pane_g3

0x28f8,	// (0x000106ab) mce_image_pane_g4

0x2900,	// (0x000106b3) mce_image_pane_g5

0x0004,

0xf3b8,	// (0x0001d16b) mce_image_pane_g

0xa67c,	// (0x0001842f) control_top_pane_stacon_cp01_ParamLimits

0xa67c,	// (0x0001842f) control_top_pane_stacon_cp01

0xa690,	// (0x00018443) uni_indicator_pane_stacon_cp01_ParamLimits

0xa690,	// (0x00018443) uni_indicator_pane_stacon_cp01

0xa6a1,	// (0x00018454) bg_popup_sub_pane_cp03

0x2908,	// (0x000106bb) chi_dic_find_pane

0x2910,	// (0x000106c3) listscroll_chi_dic_pane

0x2919,	// (0x000106cc) main_pane_chidic_g1

0x292c,	// (0x000106df) chi_dic_find_pane_t1

0xa6ab,	// (0x0001845e) find_chidic_pane

0xa6b4,	// (0x00018467) chi_dic_list_pane_ParamLimits

0xa6b4,	// (0x00018467) chi_dic_list_pane

0xa6c5,	// (0x00018478) scroll_pane_cp020

0x293a,	// (0x000106ed) find_chidic_pane_t1

0x970d,	// (0x000174c0) input_focus_pane_cp06

0x2949,	// (0x000106fc) list_chi_dic_pane_ParamLimits

0x2949,	// (0x000106fc) list_chi_dic_pane

0xa6cd,	// (0x00018480) list_chi_dic_pane_t1_ParamLimits

0xa6cd,	// (0x00018480) list_chi_dic_pane_t1

0x970d,	// (0x000174c0) list_highlight_pane_cp020

0xa6e0,	// (0x00018493) bg_cale_heading_pane_g1

0x295d,	// (0x00010710) bg_cale_heading_pane_g2

0x2965,	// (0x00010718) bg_cale_heading_pane_g3

0x296d,	// (0x00010720) bg_cale_heading_pane_g4

0x2977,	// (0x0001072a) bg_cale_heading_pane_g5

0x2981,	// (0x00010734) bg_cale_heading_pane_g6

0x2989,	// (0x0001073c) bg_cale_heading_pane_g7

0x2991,	// (0x00010744) bg_cale_heading_pane_g8

0x299b,	// (0x0001074e) bg_cale_heading_pane_g9

0x0008,

0xf3c3,	// (0x0001d176) bg_cale_heading_pane_g

0xa6e0,	// (0x00018493) bg_cale_side_pane_g1

0x29a5,	// (0x00010758) bg_cale_side_pane_g2

0x29ad,	// (0x00010760) bg_cale_side_pane_g3

0x29b5,	// (0x00010768) bg_cale_side_pane_g4

0x29bd,	// (0x00010770) bg_cale_side_pane_g5

0x29c5,	// (0x00010778) bg_cale_side_pane_g6

0x29cd,	// (0x00010780) bg_cale_side_pane_g7

0x29d5,	// (0x00010788) bg_cale_side_pane_g8

0x29dd,	// (0x00010790) bg_cale_side_pane_g9

0x0008,

0xf3d6,	// (0x0001d189) bg_cale_side_pane_g

0x29e5,	// (0x00010798) popup_call_status_window_ParamLimits

0x29e5,	// (0x00010798) popup_call_status_window

0xa6e8,	// (0x0001849b) stacon_top_pane

0xa6f0,	// (0x000184a3) status_pane_ParamLimits

0xa6f0,	// (0x000184a3) status_pane

0xa705,	// (0x000184b8) status_small_pane

0xa70d,	// (0x000184c0) control_pane

0x970d,	// (0x000174c0) stacon_bottom_pane

0xa715,	// (0x000184c8) list_single_mce_smart_pane_t1_ParamLimits

0xa715,	// (0x000184c8) list_single_mce_smart_pane_t1

0xa728,	// (0x000184db) list_single_mce_smart_pane_t2_ParamLimits

0xa728,	// (0x000184db) list_single_mce_smart_pane_t2

0x0001,

0xf3e9,	// (0x0001d19c) list_single_mce_smart_pane_t_ParamLimits

0xf3e9,	// (0x0001d19c) list_single_mce_smart_pane_t

0x2a2c,	// (0x000107df) compass_pane

0x2a35,	// (0x000107e8) main_location2_pane_t1

0x2a49,	// (0x000107fc) main_location2_pane_t2

0x2a5d,	// (0x00010810) main_location2_pane_t3

0x0003,

0xf3ee,	// (0x0001d1a1) main_location2_pane_t

0xa747,	// (0x000184fa) compass_pane_g1_ParamLimits

0xa747,	// (0x000184fa) compass_pane_g1

0x2aa7,	// (0x0001085a) compass_pane_t1

0x2ab6,	// (0x00010869) compass_pane_t2

0x0005,

0xf3f7,	// (0x0001d1aa) compass_pane_t

0x2afd,	// (0x000108b0) text_secondary_cp61

0xa75b,	// (0x0001850e) navi_pane_cams_g5

0xa77e,	// (0x00018531) navi_pane_im_t1

0xa78c,	// (0x0001853f) navi_pane_mp_g1_ParamLimits

0xa78c,	// (0x0001853f) navi_pane_mp_g1

0xa7a0,	// (0x00018553) navi_pane_mp_g2_ParamLimits

0xa7a0,	// (0x00018553) navi_pane_mp_g2

0xa7ac,	// (0x0001855f) navi_pane_mp_g3_ParamLimits

0xa7ac,	// (0x0001855f) navi_pane_mp_g3

0x0002,

0xf40b,	// (0x0001d1be) navi_pane_mp_g_ParamLimits

0xf40b,	// (0x0001d1be) navi_pane_mp_g

0xa7b8,	// (0x0001856b) navi_pane_mp_t1

0xa7c6,	// (0x00018579) navi_pane_mp_t2

0x0002,

0xf412,	// (0x0001d1c5) navi_pane_mp_t

0xa802,	// (0x000185b5) navi_pane_vt_g1

0xa7b8,	// (0x0001856b) navi_pane_vt_t1

0xa80a,	// (0x000185bd) navi_slider_pane

0xa812,	// (0x000185c5) zooming_pane

0xa81a,	// (0x000185cd) navi_slider_pane_g1

0xa823,	// (0x000185d6) navi_slider_pane_g2

0x0006,

0xf419,	// (0x0001d1cc) navi_slider_pane_g

0xa850,	// (0x00018603) aid_levels_zoom

0xa858,	// (0x0001860b) zooming_pane_g1

0xa860,	// (0x00018613) zooming_pane_g2

0xa860,	// (0x00018613) zooming_pane_g3

0x0002,

0xf428,	// (0x0001d1db) zooming_pane_g

0xa868,	// (0x0001861b) level_10_zoom

0xa871,	// (0x00018624) level_11_zoom

0xa87a,	// (0x0001862d) level_1_zoom

0xa883,	// (0x00018636) level_2_zoom

0xa88c,	// (0x0001863f) level_3_zoom

0xa895,	// (0x00018648) level_4_zoom

0xa89e,	// (0x00018651) level_5_zoom

0xa8a7,	// (0x0001865a) level_6_zoom

0xa8b0,	// (0x00018663) level_7_zoom

0xa8b9,	// (0x0001866c) level_8_zoom

0xa8c2,	// (0x00018675) level_9_zoom

0xa8d3,	// (0x00018686) popup_phob_thumbnail_window_g1

0xa8db,	// (0x0001868e) popup_phob_thumbnail_window_g2

0x0001,

0xf42f,	// (0x0001d1e2) popup_phob_thumbnail_window_g

0xbc58,	// (0x00019a0b) level_1_location

0xbc60,	// (0x00019a13) level_2_location

0xbc68,	// (0x00019a1b) level_3_location

0xbc70,	// (0x00019a23) level_4_location

0xa812,	// (0x000185c5) level_5_location

0x2c3c,	// (0x000109ef) mce_icon_pane_g1

0x2c44,	// (0x000109f7) mce_icon_pane_g2

0x0001,

0xf434,	// (0x0001d1e7) mce_icon_pane_g

0x2c4c,	// (0x000109ff) main_mup_pane_g1_ParamLimits

0x2c4c,	// (0x000109ff) main_mup_pane_g1

0x2c62,	// (0x00010a15) main_mup_pane_g2_ParamLimits

0x2c62,	// (0x00010a15) main_mup_pane_g2

0x2c7a,	// (0x00010a2d) main_mup_pane_g3_ParamLimits

0x2c7a,	// (0x00010a2d) main_mup_pane_g3

0x2c92,	// (0x00010a45) main_mup_pane_g4_ParamLimits

0x2c92,	// (0x00010a45) main_mup_pane_g4

0x2caa,	// (0x00010a5d) main_mup_pane_g5_ParamLimits

0x2caa,	// (0x00010a5d) main_mup_pane_g5

0x2cc6,	// (0x00010a79) main_mup_pane_g6_ParamLimits

0x2cc6,	// (0x00010a79) main_mup_pane_g6

0x2cde,	// (0x00010a91) main_mup_pane_g7_ParamLimits

0x2cde,	// (0x00010a91) main_mup_pane_g7

0x2cf6,	// (0x00010aa9) main_mup_pane_g8_ParamLimits

0x2cf6,	// (0x00010aa9) main_mup_pane_g8

0x2d0e,	// (0x00010ac1) main_mup_pane_g9_ParamLimits

0x2d0e,	// (0x00010ac1) main_mup_pane_g9

0x2d28,	// (0x00010adb) main_mup_pane_g10_ParamLimits

0x2d28,	// (0x00010adb) main_mup_pane_g10

0x2d42,	// (0x00010af5) main_mup_pane_g11_ParamLimits

0x2d42,	// (0x00010af5) main_mup_pane_g11

0x2d56,	// (0x00010b09) main_mup_pane_g12_ParamLimits

0x2d56,	// (0x00010b09) main_mup_pane_g12

0x2d6c,	// (0x00010b1f) main_mup_pane_g13_ParamLimits

0x2d6c,	// (0x00010b1f) main_mup_pane_g13

0x000c,

0xf439,	// (0x0001d1ec) main_mup_pane_g_ParamLimits

0xf439,	// (0x0001d1ec) main_mup_pane_g

0x2d80,	// (0x00010b33) main_mup_pane_t1_ParamLimits

0x2d80,	// (0x00010b33) main_mup_pane_t1

0x2d9a,	// (0x00010b4d) main_mup_pane_t2_ParamLimits

0x2d9a,	// (0x00010b4d) main_mup_pane_t2

0x2db2,	// (0x00010b65) main_mup_pane_t3_ParamLimits

0x2db2,	// (0x00010b65) main_mup_pane_t3

0x2dca,	// (0x00010b7d) main_mup_pane_t4_ParamLimits

0x2dca,	// (0x00010b7d) main_mup_pane_t4

0x2de8,	// (0x00010b9b) main_mup_pane_t5_ParamLimits

0x2de8,	// (0x00010b9b) main_mup_pane_t5

0x2dfd,	// (0x00010bb0) main_mup_pane_t6_ParamLimits

0x2dfd,	// (0x00010bb0) main_mup_pane_t6

0x0005,

0xf454,	// (0x0001d207) main_mup_pane_t_ParamLimits

0xf454,	// (0x0001d207) main_mup_pane_t

0x2e0f,	// (0x00010bc2) mup_progress_pane_ParamLimits

0x2e0f,	// (0x00010bc2) mup_progress_pane

0x2e1b,	// (0x00010bce) mup_visualizer_pane_ParamLimits

0x2e1b,	// (0x00010bce) mup_visualizer_pane

0x2e4f,	// (0x00010c02) mup_volume_pane_ParamLimits

0x2e4f,	// (0x00010c02) mup_volume_pane

0xa8e3,	// (0x00018696) mup_visualizer_pane_g1_ParamLimits

0xa8e3,	// (0x00018696) mup_visualizer_pane_g1

0xa8e3,	// (0x00018696) mup_visualizer_pane_g2_ParamLimits

0xa8e3,	// (0x00018696) mup_visualizer_pane_g2

0xa747,	// (0x000184fa) mup_visualizer_pane_g3_ParamLimits

0xa747,	// (0x000184fa) mup_visualizer_pane_g3

0x0002,

0xf461,	// (0x0001d214) mup_visualizer_pane_g_ParamLimits

0xf461,	// (0x0001d214) mup_visualizer_pane_g

0x9b1a,	// (0x000178cd) mup_volume_pane_g1

0xa8f9,	// (0x000186ac) mup_volume_pane_g2

0x0001,

0xf468,	// (0x0001d21b) mup_volume_pane_g

0x9b1a,	// (0x000178cd) mup_progress_pane_g1

0xa902,	// (0x000186b5) mup_progress_pane_g2

0xa90b,	// (0x000186be) mup_progress_pane_g3

0x0002,

0xf46d,	// (0x0001d220) mup_progress_pane_g

0x970d,	// (0x000174c0) bg_popup_window_pane_cp05

0xa914,	// (0x000186c7) heading_pane_cp02_ParamLimits

0xa914,	// (0x000186c7) heading_pane_cp02

0xa92e,	// (0x000186e1) list_popup_blid_pane

0xa936,	// (0x000186e9) list_blid_sat_info_pane_ParamLimits

0xa936,	// (0x000186e9) list_blid_sat_info_pane

0xa949,	// (0x000186fc) list_blid_sat_info_pane_g1

0xa951,	// (0x00018704) list_blid_sat_info_pane_t1

0x2f75,	// (0x00010d28) mup_equalizer_pane_ParamLimits

0x2f75,	// (0x00010d28) mup_equalizer_pane

0x2f8e,	// (0x00010d41) mup_equalizer_pane_cp1_ParamLimits

0x2f8e,	// (0x00010d41) mup_equalizer_pane_cp1

0x2fab,	// (0x00010d5e) mup_equalizer_pane_cp2_ParamLimits

0x2fab,	// (0x00010d5e) mup_equalizer_pane_cp2

0x2fc8,	// (0x00010d7b) mup_equalizer_pane_cp3_ParamLimits

0x2fc8,	// (0x00010d7b) mup_equalizer_pane_cp3

0x2fe9,	// (0x00010d9c) mup_equalizer_pane_cp4_ParamLimits

0x2fe9,	// (0x00010d9c) mup_equalizer_pane_cp4

0x300a,	// (0x00010dbd) mup_equalizer_pane_cp5

0x301e,	// (0x00010dd1) mup_equalizer_pane_cp6

0x3032,	// (0x00010de5) mup_equalizer_pane_cp7

0xbb76,	// (0x00019929) bg_popup_call_poc_act_pane_g9

0xbb7e,	// (0x00019931) bg_popup_call_poc_act_pane_g10

0xbb86,	// (0x00019939) bg_popup_call_poc_act_pane_g11

0x000a,

0x9968,	// (0x0001771b) mup_scale_pane

0x9b1a,	// (0x000178cd) mup_scale_pane_g1

0xa95f,	// (0x00018712) mup_scale_pane_g2

0x0006,

0xf489,	// (0x0001d23c) mup_scale_pane_g

0xa983,	// (0x00018736) msg_data_pane

0xa98b,	// (0x0001873e) scroll_pane_cp017

0x3058,	// (0x00010e0b) bg_list_pane_cp04_ParamLimits

0x3058,	// (0x00010e0b) bg_list_pane_cp04

0xa993,	// (0x00018746) msg_data_pane_g1

0x3078,	// (0x00010e2b) msg_data_pane_g2

0x28f0,	// (0x000106a3) msg_data_pane_g3

0x3080,	// (0x00010e33) msg_data_pane_g4

0x3088,	// (0x00010e3b) msg_data_pane_g5

0x3090,	// (0x00010e43) msg_data_pane_g6

0x3098,	// (0x00010e4b) msg_data_pane_g7

0x0006,

0xf498,	// (0x0001d24b) msg_data_pane_g

0x30a0,	// (0x00010e53) msg_text_pane_ParamLimits

0x30a0,	// (0x00010e53) msg_text_pane

0x30c9,	// (0x00010e7c) qrid_highlight_pane_cp011_ParamLimits

0x30c9,	// (0x00010e7c) qrid_highlight_pane_cp011

0x970d,	// (0x000174c0) msg_body_pane

0x970d,	// (0x000174c0) msg_header_pane

0xa9a4,	// (0x00018757) input_focus_pane_cp07

0x30ed,	// (0x00010ea0) msg_header_pane_t1_ParamLimits

0x30ed,	// (0x00010ea0) msg_header_pane_t1

0xa9b9,	// (0x0001876c) msg_header_pane_t2_ParamLimits

0xa9b9,	// (0x0001876c) msg_header_pane_t2

0x0001,

0xf4ac,	// (0x0001d25f) msg_header_pane_t_ParamLimits

0xf4ac,	// (0x0001d25f) msg_header_pane_t

0xa9cb,	// (0x0001877e) msg_body_pane_g1

0x3101,	// (0x00010eb4) msg_body_pane_t1_ParamLimits

0x3101,	// (0x00010eb4) msg_body_pane_t1

0xa9d3,	// (0x00018786) msg_body_pane_t2_ParamLimits

0xa9d3,	// (0x00018786) msg_body_pane_t2

0xa9e5,	// (0x00018798) msg_body_pane_t3_ParamLimits

0xa9e5,	// (0x00018798) msg_body_pane_t3

0x0002,

0xf4b1,	// (0x0001d264) msg_body_pane_t_ParamLimits

0xf4b1,	// (0x0001d264) msg_body_pane_t

0x316c,	// (0x00010f1f) main_viewer_pane_g1_ParamLimits

0x316c,	// (0x00010f1f) main_viewer_pane_g1

0x317a,	// (0x00010f2d) main_viewer_pane_g2_ParamLimits

0x317a,	// (0x00010f2d) main_viewer_pane_g2

0x3188,	// (0x00010f3b) main_viewer_pane_g3_ParamLimits

0x3188,	// (0x00010f3b) main_viewer_pane_g3

0x3197,	// (0x00010f4a) main_viewer_pane_g4_ParamLimits

0x3197,	// (0x00010f4a) main_viewer_pane_g4

0xaa0f,	// (0x000187c2) main_viewer_pane_g5_ParamLimits

0xaa0f,	// (0x000187c2) main_viewer_pane_g5

0xaa0f,	// (0x000187c2) main_viewer_pane_g7_ParamLimits

0xaa0f,	// (0x000187c2) main_viewer_pane_g7

0xaa21,	// (0x000187d4) main_viewer_pane_g8_ParamLimits

0xaa21,	// (0x000187d4) main_viewer_pane_g8

0x0007,

0xf4c1,	// (0x0001d274) main_viewer_pane_g_ParamLimits

0xf4c1,	// (0x0001d274) main_viewer_pane_g

0xaa39,	// (0x000187ec) viewer_content_pane_ParamLimits

0xaa39,	// (0x000187ec) viewer_content_pane

0x31d3,	// (0x00010f86) main_postcard_pane_g1_ParamLimits

0x31d3,	// (0x00010f86) main_postcard_pane_g1

0x31e9,	// (0x00010f9c) main_postcard_pane_g2_ParamLimits

0x31e9,	// (0x00010f9c) main_postcard_pane_g2

0x31ff,	// (0x00010fb2) main_postcard_pane_g3_ParamLimits

0x31ff,	// (0x00010fb2) main_postcard_pane_g3

0x0005,

0xf4d2,	// (0x0001d285) main_postcard_pane_g_ParamLimits

0xf4d2,	// (0x0001d285) main_postcard_pane_g

0x3216,	// (0x00010fc9) main_postcard_pane_g4

0xbd8b,	// (0x00019b3e) smil_status_volume_pane_g2

0x3259,	// (0x0001100c) postcard_pane_ParamLimits

0x3259,	// (0x0001100c) postcard_pane

0xaa47,	// (0x000187fa) postcard_pane_g1_ParamLimits

0xaa47,	// (0x000187fa) postcard_pane_g1

0x329b,	// (0x0001104e) postcard_pane_g2_ParamLimits

0x329b,	// (0x0001104e) postcard_pane_g2

0x32a7,	// (0x0001105a) postcard_pane_g3_ParamLimits

0x32a7,	// (0x0001105a) postcard_pane_g3

0xaa55,	// (0x00018808) postcard_pane_g4_ParamLimits

0xaa55,	// (0x00018808) postcard_pane_g4

0x32b3,	// (0x00011066) postcard_pane_g5_ParamLimits

0x32b3,	// (0x00011066) postcard_pane_g5

0x32c8,	// (0x0001107b) postcard_pane_g6_ParamLimits

0x32c8,	// (0x0001107b) postcard_pane_g6

0xaa47,	// (0x000187fa) postcard_pane_g7_ParamLimits

0xaa47,	// (0x000187fa) postcard_pane_g7

0x0006,

0xf4df,	// (0x0001d292) postcard_pane_g_ParamLimits

0xf4df,	// (0x0001d292) postcard_pane_g

0x32dc,	// (0x0001108f) main_mp2_pane_g1_ParamLimits

0x32dc,	// (0x0001108f) main_mp2_pane_g1

0x32e8,	// (0x0001109b) main_mp2_pane_g2_ParamLimits

0x32e8,	// (0x0001109b) main_mp2_pane_g2

0x32f4,	// (0x000110a7) main_mp2_pane_g3_ParamLimits

0x32f4,	// (0x000110a7) main_mp2_pane_g3

0x0002,

0xf4ee,	// (0x0001d2a1) main_mp2_pane_g_ParamLimits

0xf4ee,	// (0x0001d2a1) main_mp2_pane_g

0x3300,	// (0x000110b3) main_mp2_pane_t1_ParamLimits

0x3300,	// (0x000110b3) main_mp2_pane_t1

0x3315,	// (0x000110c8) main_mp2_pane_t2_ParamLimits

0x3315,	// (0x000110c8) main_mp2_pane_t2

0x3327,	// (0x000110da) main_mp2_pane_t3_ParamLimits

0x3327,	// (0x000110da) main_mp2_pane_t3

0x0002,

0xf4f5,	// (0x0001d2a8) main_mp2_pane_t_ParamLimits

0xf4f5,	// (0x0001d2a8) main_mp2_pane_t

0xaa63,	// (0x00018816) pec_content_pane_ParamLimits

0xaa63,	// (0x00018816) pec_content_pane

0x9fb0,	// (0x00017d63) scroll_pane_cp015

0xaa75,	// (0x00018828) pec_attribute_pane_ParamLimits

0xaa75,	// (0x00018828) pec_attribute_pane

0x3339,	// (0x000110ec) pec_content_pane_g1_ParamLimits

0x3339,	// (0x000110ec) pec_content_pane_g1

0xaa85,	// (0x00018838) pec_content_pane_t1_ParamLimits

0xaa85,	// (0x00018838) pec_content_pane_t1

0xaa97,	// (0x0001884a) pec_content_pane_t2_ParamLimits

0xaa97,	// (0x0001884a) pec_content_pane_t2

0x0001,

0xf4fc,	// (0x0001d2af) pec_content_pane_t_ParamLimits

0xf4fc,	// (0x0001d2af) pec_content_pane_t

0x3347,	// (0x000110fa) list_single_graphic_pane_cp01_ParamLimits

0x3347,	// (0x000110fa) list_single_graphic_pane_cp01

0x9968,	// (0x0001771b) bg_popup_sub_pane_cp04

0xaaa9,	// (0x0001885c) popup_mup_playback_window_g1

0xaab5,	// (0x00018868) popup_mup_playback_window_t1

0xaaca,	// (0x0001887d) popup_mup_playback_window_t2

0x0001,

0xf501,	// (0x0001d2b4) popup_mup_playback_window_t

0xab01,	// (0x000188b4) main_image_pane_g1_ParamLimits

0xab01,	// (0x000188b4) main_image_pane_g1

0xab44,	// (0x000188f7) scroll_pane_cp018_ParamLimits

0xab44,	// (0x000188f7) scroll_pane_cp018

0xab5c,	// (0x0001890f) scroll_pane_cp016_ParamLimits

0xab5c,	// (0x0001890f) scroll_pane_cp016

0x3417,	// (0x000111ca) smil2_image_pane_ParamLimits

0x3417,	// (0x000111ca) smil2_image_pane

0x344b,	// (0x000111fe) smil2_root_pane_ParamLimits

0x344b,	// (0x000111fe) smil2_root_pane

0x3483,	// (0x00011236) smil2_text_pane_ParamLimits

0x3483,	// (0x00011236) smil2_text_pane

0x970d,	// (0x000174c0) bg_list_pane_cp06

0xab98,	// (0x0001894b) grid_radio_pane

0x970d,	// (0x000174c0) bg_popup_window_pane_cp06

0xaba0,	// (0x00018953) main_fmradio_pane_t1

0xa595,	// (0x00018348) heading_pane_cp04

0xabae,	// (0x00018961) main_fmradio_pane_t2

0xbb8e,	// (0x00019941) popup_cale_lunar_info_window_g1

0xabbc,	// (0x0001896f) main_fmradio_pane_t3

0xbb96,	// (0x00019949) popup_cale_lunar_info_window_g2

0xabca,	// (0x0001897d) main_fmradio_pane_t4

0x0001,

0xabd8,	// (0x0001898b) main_fmradio_pane_t5

0x0004,

0xf5dc,	// (0x0001d38f) popup_cale_lunar_info_window_g

0xf516,	// (0x0001d2c9) main_fmradio_pane_t

0xabe6,	// (0x00018999) wait_bar_pane_cp03

0xabee,	// (0x000189a1) cell_fmradio_pane_ParamLimits

0xabee,	// (0x000189a1) cell_fmradio_pane

0xaa47,	// (0x000187fa) cell_fmradio_pane_g1_ParamLimits

0xaa47,	// (0x000187fa) cell_fmradio_pane_g1

0x970d,	// (0x000174c0) grid_highlight_pane_cp011

0xac01,	// (0x000189b4) poc_content_pane_ParamLimits

0xac01,	// (0x000189b4) poc_content_pane

0xac13,	// (0x000189c6) scroll_pane_cp019

0x3503,	// (0x000112b6) popup_call_poc_act_window_ParamLimits

0x3503,	// (0x000112b6) popup_call_poc_act_window

0x3527,	// (0x000112da) popup_call_poc_inact_window_ParamLimits

0x3527,	// (0x000112da) popup_call_poc_inact_window

0xf5b3,	// (0x0001d366) bg_popup_call_poc_act_pane_g

0xbafe,	// (0x000198b1) bg_popup_call_poc_inact_pane_g1

0xbb06,	// (0x000198b9) bg_popup_call_poc_inact_pane_g2

0xac1b,	// (0x000189ce) popup_call_poc_act_window_g2

0xbb0e,	// (0x000198c1) bg_popup_call_poc_inact_pane_g3

0xbb16,	// (0x000198c9) bg_popup_call_poc_inact_pane_g4

0xbb1e,	// (0x000198d1) bg_popup_call_poc_inact_pane_g5

0xac23,	// (0x000189d6) popup_call_poc_act_window_t1_ParamLimits

0xac23,	// (0x000189d6) popup_call_poc_act_window_t1

0xac4b,	// (0x000189fe) popup_call_poc_act_window_t2_ParamLimits

0xac4b,	// (0x000189fe) popup_call_poc_act_window_t2

0xac73,	// (0x00018a26) popup_call_poc_act_window_t3_ParamLimits

0xac73,	// (0x00018a26) popup_call_poc_act_window_t3

0xac9b,	// (0x00018a4e) popup_call_poc_act_window_t4_ParamLimits

0xac9b,	// (0x00018a4e) popup_call_poc_act_window_t4

0x0003,

0xf521,	// (0x0001d2d4) popup_call_poc_act_window_t_ParamLimits

0xf521,	// (0x0001d2d4) popup_call_poc_act_window_t

0xbb26,	// (0x000198d9) bg_popup_call_poc_inact_pane_g6

0xbb2e,	// (0x000198e1) bg_popup_call_poc_inact_pane_g7

0xbb36,	// (0x000198e9) bg_popup_call_poc_inact_pane_g8

0xacad,	// (0x00018a60) popup_call_poc_inact_window_g2

0xbb3e,	// (0x000198f1) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5a0,	// (0x0001d353) bg_popup_call_poc_inact_pane_g

0xacb5,	// (0x00018a68) popup_call_poc_inact_window_t1_ParamLimits

0xacb5,	// (0x00018a68) popup_call_poc_inact_window_t1

0xacca,	// (0x00018a7d) popup_call_poc_inact_window_t2_ParamLimits

0xacca,	// (0x00018a7d) popup_call_poc_inact_window_t2

0xacdf,	// (0x00018a92) popup_call_poc_inact_window_t3_ParamLimits

0xacdf,	// (0x00018a92) popup_call_poc_inact_window_t3

0x0002,

0xf52a,	// (0x0001d2dd) popup_call_poc_inact_window_t_ParamLimits

0xf52a,	// (0x0001d2dd) popup_call_poc_inact_window_t

0xbcfe,	// (0x00019ab1) context_pane_ParamLimits

0x3d49,	// (0x00011afc) signal_pane_ParamLimits

0xa812,	// (0x000185c5) main_call2_pane

0xbcec,	// (0x00019a9f) popup_phob_thumbnail2_window_ParamLimits

0xbcec,	// (0x00019a9f) popup_phob_thumbnail2_window

0xa9f7,	// (0x000187aa) aid_hotspot_pointer_arrow_pane

0xa9ff,	// (0x000187b2) aid_hotspot_pointer_hand_pane

0x386d,	// (0x00011620) phob_pre_status_pane_g5

0x1650,	// (0x0000f403) cams_zoom_pane_ParamLimits

0x165f,	// (0x0000f412) image_vga_pane_ParamLimits

0x1679,	// (0x0000f42c) main_camera_pane_g1_ParamLimits

0x168b,	// (0x0000f43e) main_camera_pane_g2_ParamLimits

0x169d,	// (0x0000f450) main_camera_pane_g3_ParamLimits

0x16af,	// (0x0000f462) main_camera_pane_g4_ParamLimits

0x16c1,	// (0x0000f474) main_camera_pane_g5_ParamLimits

0x16d3,	// (0x0000f486) main_camera_pane_g6_ParamLimits

0x16e5,	// (0x0000f498) main_camera_pane_g7_ParamLimits

0xf229,	// (0x0001cfdc) main_camera_pane_g_ParamLimits

0x16f7,	// (0x0000f4aa) main_camera_pane_t1_ParamLimits

0x170d,	// (0x0000f4c0) main_camera_pane_t2_ParamLimits

0xf23a,	// (0x0001cfed) main_camera_pane_t_ParamLimits

0x9968,	// (0x0001771b) bg_popup_preview_window_pane_cp01_ParamLimits

0x9968,	// (0x0001771b) bg_popup_preview_window_pane_cp01

0xacf4,	// (0x00018aa7) popup_phob_thumbnail2_window_g1_ParamLimits

0xacf4,	// (0x00018aa7) popup_phob_thumbnail2_window_g1

0x970d,	// (0x000174c0) call2_cli_visual_pane

0x355b,	// (0x0001130e) popup_call2_audio_conf_window_ParamLimits

0x355b,	// (0x0001130e) popup_call2_audio_conf_window

0x357b,	// (0x0001132e) popup_call2_audio_first_window_ParamLimits

0x357b,	// (0x0001132e) popup_call2_audio_first_window

0x3611,	// (0x000113c4) popup_call2_audio_in_window_ParamLimits

0x3611,	// (0x000113c4) popup_call2_audio_in_window

0x3659,	// (0x0001140c) popup_call2_audio_out_window_ParamLimits

0x3659,	// (0x0001140c) popup_call2_audio_out_window

0x36c3,	// (0x00011476) popup_call2_audio_second_window_ParamLimits

0x36c3,	// (0x00011476) popup_call2_audio_second_window

0x3729,	// (0x000114dc) popup_call2_audio_wait_window_ParamLimits

0x3729,	// (0x000114dc) popup_call2_audio_wait_window

0x970d,	// (0x000174c0) bg_popup_call2_act_pane_cp03

0x994a,	// (0x000176fd) list_conf_pane_cp

0xad00,	// (0x00018ab3) popup_call2_audio_conf_window_t1

0xad0e,	// (0x00018ac1) list_single_graphic_popup_conf2_pane_ParamLimits

0xad0e,	// (0x00018ac1) list_single_graphic_popup_conf2_pane

0xa628,	// (0x000183db) list_highlight_pane_cp04

0xad21,	// (0x00018ad4) list_single_graphic_popup_conf2_pane_g1

0xa639,	// (0x000183ec) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf531,	// (0x0001d2e4) list_single_graphic_popup_conf2_pane_g

0xad2b,	// (0x00018ade) list_single_graphic_popup_conf2_pane_t1

0xad39,	// (0x00018aec) bg_popup_call2_act_pane_cp01_ParamLimits

0xad39,	// (0x00018aec) bg_popup_call2_act_pane_cp01

0xadc3,	// (0x00018b76) call_type_pane_cp05_ParamLimits

0xadc3,	// (0x00018b76) call_type_pane_cp05

0xae17,	// (0x00018bca) popup_call2_audio_second_window_g1_ParamLimits

0xae17,	// (0x00018bca) popup_call2_audio_second_window_g1

0xae6b,	// (0x00018c1e) popup_call2_audio_second_window_g2_ParamLimits

0xae6b,	// (0x00018c1e) popup_call2_audio_second_window_g2

0x0002,

0xf536,	// (0x0001d2e9) popup_call2_audio_second_window_g_ParamLimits

0xf536,	// (0x0001d2e9) popup_call2_audio_second_window_g

0xaed0,	// (0x00018c83) popup_call2_audio_second_window_t1_ParamLimits

0xaed0,	// (0x00018c83) popup_call2_audio_second_window_t1

0xaf8b,	// (0x00018d3e) popup_call2_audio_second_window_t2_ParamLimits

0xaf8b,	// (0x00018d3e) popup_call2_audio_second_window_t2

0xafde,	// (0x00018d91) popup_call2_audio_second_window_t3_ParamLimits

0xafde,	// (0x00018d91) popup_call2_audio_second_window_t3

0x0003,

0xf53d,	// (0x0001d2f0) popup_call2_audio_second_window_t_ParamLimits

0xf53d,	// (0x0001d2f0) popup_call2_audio_second_window_t

0x970d,	// (0x000174c0) bg_popup_call2_in_pane_cp02

0x9717,	// (0x000174ca) call_type_pane_cp04

0x971f,	// (0x000174d2) popup_call2_audio_wait_window_g1

0x9727,	// (0x000174da) popup_call2_audio_wait_window_g2

0x0001,

0xf116,	// (0x0001cec9) popup_call2_audio_wait_window_g

0x972f,	// (0x000174e2) popup_call2_audio_wait_window_t3

0xb0d1,	// (0x00018e84) bg_popup_call2_act_pane_ParamLimits

0xb0d1,	// (0x00018e84) bg_popup_call2_act_pane

0xb191,	// (0x00018f44) call_type_pane_cp03_ParamLimits

0xb191,	// (0x00018f44) call_type_pane_cp03

0xb1f5,	// (0x00018fa8) popup_call2_audio_first_window_g1_ParamLimits

0xb1f5,	// (0x00018fa8) popup_call2_audio_first_window_g1

0xb265,	// (0x00019018) popup_call2_audio_first_window_g2_ParamLimits

0xb265,	// (0x00019018) popup_call2_audio_first_window_g2

0xa8e3,	// (0x00018696) popup_call2_audio_first_window_g3_ParamLimits

0xa8e3,	// (0x00018696) popup_call2_audio_first_window_g3

0x0004,

0xf546,	// (0x0001d2f9) popup_call2_audio_first_window_g_ParamLimits

0xf546,	// (0x0001d2f9) popup_call2_audio_first_window_g

0xb343,	// (0x000190f6) popup_call2_audio_first_window_t1_ParamLimits

0xb343,	// (0x000190f6) popup_call2_audio_first_window_t1

0xb446,	// (0x000191f9) popup_call2_audio_first_window_t4_ParamLimits

0xb446,	// (0x000191f9) popup_call2_audio_first_window_t4

0xb529,	// (0x000192dc) popup_call2_audio_first_window_t5_ParamLimits

0xb529,	// (0x000192dc) popup_call2_audio_first_window_t5

0x0003,

0xf551,	// (0x0001d304) popup_call2_audio_first_window_t_ParamLimits

0xf551,	// (0x0001d304) popup_call2_audio_first_window_t

0x9960,	// (0x00017713) bg_popup_call2_act_pane_g1

0xbb9e,	// (0x00019951) popup_cale_lunar_info_window_t1

0xbbac,	// (0x0001995f) popup_cale_lunar_info_window_t2

0xbbba,	// (0x0001996d) popup_cale_lunar_info_window_t3

0x970d,	// (0x000174c0) bg_popup_call2_bubble_pane

0xb62a,	// (0x000193dd) bg_popup_call2_in_pane_cp01_ParamLimits

0xb62a,	// (0x000193dd) bg_popup_call2_in_pane_cp01

0x93e9,	// (0x0001719c) call_type_pane_cp02

0xb672,	// (0x00019425) popup_call2_audio_out_window_g1_ParamLimits

0xb672,	// (0x00019425) popup_call2_audio_out_window_g1

0xb69e,	// (0x00019451) popup_call2_audio_out_window_g2_ParamLimits

0xb69e,	// (0x00019451) popup_call2_audio_out_window_g2

0xb6c6,	// (0x00019479) popup_call2_audio_out_window_g3_ParamLimits

0xb6c6,	// (0x00019479) popup_call2_audio_out_window_g3

0x0003,

0xf55a,	// (0x0001d30d) popup_call2_audio_out_window_g_ParamLimits

0xf55a,	// (0x0001d30d) popup_call2_audio_out_window_g

0xb701,	// (0x000194b4) popup_call2_audio_out_window_t1_ParamLimits

0xb701,	// (0x000194b4) popup_call2_audio_out_window_t1

0xb760,	// (0x00019513) popup_call2_audio_out_window_t2_ParamLimits

0xb760,	// (0x00019513) popup_call2_audio_out_window_t2

0xb7b4,	// (0x00019567) popup_call2_audio_out_window_t3_ParamLimits

0xb7b4,	// (0x00019567) popup_call2_audio_out_window_t3

0xb7ca,	// (0x0001957d) popup_call2_audio_out_window_t4_ParamLimits

0xb7ca,	// (0x0001957d) popup_call2_audio_out_window_t4

0xb7e0,	// (0x00019593) popup_call2_audio_out_window_t5_ParamLimits

0xb7e0,	// (0x00019593) popup_call2_audio_out_window_t5

0x0005,

0xf563,	// (0x0001d316) popup_call2_audio_out_window_t_ParamLimits

0xf563,	// (0x0001d316) popup_call2_audio_out_window_t

0xb844,	// (0x000195f7) bg_popup_call2_in_pane_ParamLimits

0xb844,	// (0x000195f7) bg_popup_call2_in_pane

0xb8a0,	// (0x00019653) popup_call2_audio_in_window_g1_ParamLimits

0xb8a0,	// (0x00019653) popup_call2_audio_in_window_g1

0xb8d8,	// (0x0001968b) popup_call2_audio_in_window_g2_ParamLimits

0xb8d8,	// (0x0001968b) popup_call2_audio_in_window_g2

0xb910,	// (0x000196c3) popup_call2_audio_in_window_g3_ParamLimits

0xb910,	// (0x000196c3) popup_call2_audio_in_window_g3

0x0003,

0xf570,	// (0x0001d323) popup_call2_audio_in_window_g_ParamLimits

0xf570,	// (0x0001d323) popup_call2_audio_in_window_g

0xb968,	// (0x0001971b) popup_call2_audio_in_window_t1_ParamLimits

0xb968,	// (0x0001971b) popup_call2_audio_in_window_t1

0xb9e8,	// (0x0001979b) popup_call2_audio_in_window_t2_ParamLimits

0xb9e8,	// (0x0001979b) popup_call2_audio_in_window_t2

0xba68,	// (0x0001981b) popup_call2_audio_in_window_t3_ParamLimits

0xba68,	// (0x0001981b) popup_call2_audio_in_window_t3

0xba82,	// (0x00019835) popup_call2_audio_in_window_t4_ParamLimits

0xba82,	// (0x00019835) popup_call2_audio_in_window_t4

0xba94,	// (0x00019847) popup_call2_audio_in_window_t5_ParamLimits

0xba94,	// (0x00019847) popup_call2_audio_in_window_t5

0xbaa9,	// (0x0001985c) popup_call2_audio_in_window_t6_ParamLimits

0xbaa9,	// (0x0001985c) popup_call2_audio_in_window_t6

0x0005,

0xf579,	// (0x0001d32c) popup_call2_audio_in_window_t_ParamLimits

0xf579,	// (0x0001d32c) popup_call2_audio_in_window_t

0x9960,	// (0x00017713) bg_popup_call2_in_pane_g1

0xbbc8,	// (0x0001997b) popup_cale_lunar_info_window_t4

0x0003,

0xf5e1,	// (0x0001d394) popup_cale_lunar_info_window_t

0x9968,	// (0x0001771b) bg_popup_call2_rect_pane_ParamLimits

0x9968,	// (0x0001771b) bg_popup_call2_rect_pane

0x970d,	// (0x000174c0) call2_cli_visual_graphic_pane

0x970d,	// (0x000174c0) call2_cli_visual_text_pane

0xbd9e,	// (0x00019b51) smil_status_volume_pane_g3

0x0002,

0x9b1a,	// (0x000178cd) call2_cli_visual_graphic_pane_g1

0x9b1a,	// (0x000178cd) call2_cli_visual_graphic_pane_g2

0x9b1a,	// (0x000178cd) call2_cli_visual_graphic_pane_g3

0x0002,

0xf586,	// (0x0001d339) call2_cli_visual_graphic_pane_g

0xbabe,	// (0x00019871) bg_popup_call2_rect_pane_g1

0x9bc2,	// (0x00017975) bg_popup_call2_rect_pane_g2

0xbac6,	// (0x00019879) bg_popup_call2_rect_pane_g3

0xbace,	// (0x00019881) bg_popup_call2_rect_pane_g4

0xbad6,	// (0x00019889) bg_popup_call2_rect_pane_g5

0xbade,	// (0x00019891) bg_popup_call2_rect_pane_g6

0xbae6,	// (0x00019899) bg_popup_call2_rect_pane_g7

0xbaee,	// (0x000198a1) bg_popup_call2_rect_pane_g8

0xbaf6,	// (0x000198a9) bg_popup_call2_rect_pane_g9

0x0008,

0xf58d,	// (0x0001d340) bg_popup_call2_rect_pane_g

0xbafe,	// (0x000198b1) bg_popup_call2_bubble_pane_g1

0xbb06,	// (0x000198b9) bg_popup_call2_bubble_pane_g2

0xbb0e,	// (0x000198c1) bg_popup_call2_bubble_pane_g3

0xbb16,	// (0x000198c9) bg_popup_call2_bubble_pane_g4

0xbb1e,	// (0x000198d1) bg_popup_call2_bubble_pane_g5

0xbb26,	// (0x000198d9) bg_popup_call2_bubble_pane_g6

0xbb2e,	// (0x000198e1) bg_popup_call2_bubble_pane_g7

0xbb36,	// (0x000198e9) bg_popup_call2_bubble_pane_g8

0xbb3e,	// (0x000198f1) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5a0,	// (0x0001d353) bg_popup_call2_bubble_pane_g

0x12af,	// (0x0000f062) aid_cale_week_size_cell_pane

0x1725,	// (0x0000f4d8) aid_cams_cif_uncrop_pane_ParamLimits

0x1725,	// (0x0000f4d8) aid_cams_cif_uncrop_pane

0x18e2,	// (0x0000f695) aid_cams_size_cell_ParamLimits

0x18e2,	// (0x0000f695) aid_cams_size_cell

0x18f6,	// (0x0000f6a9) grid_cams_pane_ParamLimits

0x1910,	// (0x0000f6c3) linegrid_cams_pane_ParamLimits

0x1a48,	// (0x0000f7fb) call_video_pane_t1

0x1a66,	// (0x0000f819) call_video_pane_t2

0x0001,

0xf28d,	// (0x0001d040) call_video_pane_t

0x1e99,	// (0x0000fc4c) aid_cale_month_size_cell_pane_ParamLimits

0x1e99,	// (0x0000fc4c) aid_cale_month_size_cell_pane

0xf62a,	// (0x0001d3dd) smil_status_volume_pane_g

0xbdab,	// (0x00019b5e) volume_smil_pane_ParamLimits

0x9290,	// (0x00017043) aid_popup2_width_pane

0x120c,	// (0x0000efbf) cell_qdial_pane_g4_ParamLimits

0x120c,	// (0x0000efbf) cell_qdial_pane_g4

0x2a87,	// (0x0001083a) aid_blid_cardinal_pane_ParamLimits

0x2a93,	// (0x00010846) aid_blid_destination_pane_ParamLimits

0x2a93,	// (0x00010846) aid_blid_destination_pane

0x9968,	// (0x0001771b) bg_popup_call_poc_act_pane_ParamLimits

0x9968,	// (0x0001771b) bg_popup_call_poc_act_pane

0x9968,	// (0x0001771b) bg_popup_call_poc_inact_pane_ParamLimits

0x9968,	// (0x0001771b) bg_popup_call_poc_inact_pane

0xbb4e,	// (0x00019901) bg_popup_call_poc_act_pane_g1

0xbb56,	// (0x00019909) bg_popup_call_poc_act_pane_g2

0xbb5e,	// (0x00019911) bg_popup_call_poc_act_pane_g3

0xbb16,	// (0x000198c9) bg_popup_call_poc_act_pane_g4

0xbb1e,	// (0x000198d1) bg_popup_call_poc_act_pane_g5

0xbb66,	// (0x00019919) bg_popup_call_poc_act_pane_g6

0xbb2e,	// (0x000198e1) bg_popup_call_poc_act_pane_g7

0xbb6e,	// (0x00019921) bg_popup_call_poc_act_pane_g8

0x970d,	// (0x000174c0) main_usb_pane

0xbcc7,	// (0x00019a7a) popup_cale_lunar_info_window

0x1d30,	// (0x0000fae3) im_reading_pane_t1_ParamLimits

0x9f08,	// (0x00017cbb) list_im_pane_ParamLimits

0x9f19,	// (0x00017ccc) scroll_pane_cp07_ParamLimits

0x970d,	// (0x000174c0) grid_highlight_pane_cp012

0x9968,	// (0x0001771b) mup_scale_pane_ParamLimits

0xaa47,	// (0x000187fa) main_usb_pane_g1_ParamLimits

0xaa47,	// (0x000187fa) main_usb_pane_g1

0x3780,	// (0x00011533) main_usb_pane_g2_ParamLimits

0x3780,	// (0x00011533) main_usb_pane_g2

0x0001,

0xf5ca,	// (0x0001d37d) main_usb_pane_g_ParamLimits

0xf5ca,	// (0x0001d37d) main_usb_pane_g

0x3796,	// (0x00011549) main_usb_pane_t1_ParamLimits

0x3796,	// (0x00011549) main_usb_pane_t1

0x37a8,	// (0x0001155b) main_usb_pane_t2_ParamLimits

0x37a8,	// (0x0001155b) main_usb_pane_t2

0x37ba,	// (0x0001156d) main_usb_pane_t3_ParamLimits

0x37ba,	// (0x0001156d) main_usb_pane_t3

0x37cc,	// (0x0001157f) main_usb_pane_t4_ParamLimits

0x37cc,	// (0x0001157f) main_usb_pane_t4

0x37de,	// (0x00011591) main_usb_pane_t5_ParamLimits

0x37de,	// (0x00011591) main_usb_pane_t5

0x37f0,	// (0x000115a3) main_usb_pane_t6_ParamLimits

0x37f0,	// (0x000115a3) main_usb_pane_t6

0x0005,

0xf5cf,	// (0x0001d382) main_usb_pane_t_ParamLimits

0x2a2c,	// (0x000107df) aid_text_placing

0x2a35,	// (0x000107e8) main_location2_pane_t1_ParamLimits

0x2a49,	// (0x000107fc) main_location2_pane_t2_ParamLimits

0x2a5d,	// (0x00010810) main_location2_pane_t3_ParamLimits

0x2a73,	// (0x00010826) main_location2_pane_t4_ParamLimits

0x2a73,	// (0x00010826) main_location2_pane_t4

0xf3ee,	// (0x0001d1a1) main_location2_pane_t_ParamLimits

0x99ac,	// (0x0001775f) find_pinb_pane_g2_ParamLimits

0x99ac,	// (0x0001775f) find_pinb_pane_g2

0x0001,

0xf13c,	// (0x0001ceef) find_pinb_pane_g_ParamLimits

0xf13c,	// (0x0001ceef) find_pinb_pane_g

0x99b8,	// (0x0001776b) find_pinb_pane_t1_ParamLimits

0x99ca,	// (0x0001777d) find_pinb_pane_t2_ParamLimits

0xf141,	// (0x0001cef4) find_pinb_pane_t_ParamLimits

0x970d,	// (0x000174c0) main_call3_pane

0x21fd,	// (0x0000ffb0) cale_month_day_heading_pane_t1_ParamLimits

0x225b,	// (0x0001000e) cale_month_day_heading_pane_t2_ParamLimits

0x22c0,	// (0x00010073) cale_month_day_heading_pane_t3_ParamLimits

0x2325,	// (0x000100d8) cale_month_day_heading_pane_t4_ParamLimits

0x238a,	// (0x0001013d) cale_month_day_heading_pane_t5_ParamLimits

0x23ff,	// (0x000101b2) cale_month_day_heading_pane_t6_ParamLimits

0x2474,	// (0x00010227) cale_month_day_heading_pane_t7_ParamLimits

0xf2c5,	// (0x0001d078) cale_month_day_heading_pane_t_ParamLimits

0xa18f,	// (0x00017f42) smil_status_volume_pane

0x3277,	// (0x0001102a) postcard_address_pane_ParamLimits

0x3277,	// (0x0001102a) postcard_address_pane

0x3289,	// (0x0001103c) postcard_message_pane_ParamLimits

0x3289,	// (0x0001103c) postcard_message_pane

0x3763,	// (0x00011516) call2_cli_visual_pane_t1_ParamLimits

0x3763,	// (0x00011516) call2_cli_visual_pane_t1

0x3f77,	// (0x00011d2a) postcard_message_pane_t1_ParamLimits

0x3f77,	// (0x00011d2a) postcard_message_pane_t1

0x3f60,	// (0x00011d13) postcard_address_pane_t1_ParamLimits

0x3f60,	// (0x00011d13) postcard_address_pane_t1

0x3f4c,	// (0x00011cff) popup_call3_audio_in_window_ParamLimits

0x3f4c,	// (0x00011cff) popup_call3_audio_in_window

0x3ddb,	// (0x00011b8e) bg_popup_call3_in_pane_ParamLimits

0x3ddb,	// (0x00011b8e) bg_popup_call3_in_pane

0x3e4d,	// (0x00011c00) popup_call3_audio_in_window_g1_ParamLimits

0x3e4d,	// (0x00011c00) popup_call3_audio_in_window_g1

0x3e6d,	// (0x00011c20) popup_call3_audio_in_window_g2_ParamLimits

0x3e6d,	// (0x00011c20) popup_call3_audio_in_window_g2

0x3e8d,	// (0x00011c40) popup_call3_audio_in_window_g3_ParamLimits

0x3e8d,	// (0x00011c40) popup_call3_audio_in_window_g3

0x0003,

0xf631,	// (0x0001d3e4) popup_call3_audio_in_window_g_ParamLimits

0xf631,	// (0x0001d3e4) popup_call3_audio_in_window_g

0x3ebe,	// (0x00011c71) popup_call3_audio_in_window_t1_ParamLimits

0x3ebe,	// (0x00011c71) popup_call3_audio_in_window_t1

0x3efc,	// (0x00011caf) popup_call3_audio_in_window_t2_ParamLimits

0x3efc,	// (0x00011caf) popup_call3_audio_in_window_t2

0x3f3a,	// (0x00011ced) popup_call3_audio_in_window_t3_ParamLimits

0x3f3a,	// (0x00011ced) popup_call3_audio_in_window_t3

0x0002,

0xf63a,	// (0x0001d3ed) popup_call3_audio_in_window_t_ParamLimits

0xf63a,	// (0x0001d3ed) popup_call3_audio_in_window_t

0xa812,	// (0x000185c5) bg_popup_call3_rect_pane

0xbabe,	// (0x00019871) bg_popup_call3_rect_pane_g1

0x9bc2,	// (0x00017975) bg_popup_call3_rect_pane_g2

0xbac6,	// (0x00019879) bg_popup_call3_rect_pane_g3

0xbace,	// (0x00019881) bg_popup_call3_rect_pane_g4

0xbad6,	// (0x00019889) bg_popup_call3_rect_pane_g5

0xbade,	// (0x00019891) bg_popup_call3_rect_pane_g6

0xbae6,	// (0x00019899) bg_popup_call3_rect_pane_g7

0x2e65,	// (0x00010c18) mup_visualizer_osc_pane

0xa8f1,	// (0x000186a4) mup_visualizer_spec_pane

0x3e0b,	// (0x00011bbe) call3_video_qcif_pane_ParamLimits

0x3e0b,	// (0x00011bbe) call3_video_qcif_pane

0x3e1c,	// (0x00011bcf) call3_video_qcif_uncrop_pane_ParamLimits

0x3e1c,	// (0x00011bcf) call3_video_qcif_uncrop_pane

0x3e28,	// (0x00011bdb) call3_video_subqcif_pane_ParamLimits

0x3e28,	// (0x00011bdb) call3_video_subqcif_pane

0x3e3c,	// (0x00011bef) call3_video_subqcif_uncrop_pane_ParamLimits

0x3e3c,	// (0x00011bef) call3_video_subqcif_uncrop_pane

0x3ead,	// (0x00011c60) popup_call3_audio_in_window_g4_ParamLimits

0x3ead,	// (0x00011c60) popup_call3_audio_in_window_g4

0x3dca,	// (0x00011b7d) mup_spec_half_pane

0x3dd3,	// (0x00011b86) mup_spec_half_pane_cp

0xbd5e,	// (0x00019b11) mup_osc_middle_pane

0xbd67,	// (0x00019b1a) mup_visualizer_osc_pane_g1

0x3daa,	// (0x00011b5d) mup_spec_bar_pane_ParamLimits

0x3daa,	// (0x00011b5d) mup_spec_bar_pane

0xbd4b,	// (0x00019afe) mup_spec_bar_pane_g1

0xbd55,	// (0x00019b08) mup_spec_bar_pane_g2

0x0001,

0xf625,	// (0x0001d3d8) mup_spec_bar_pane_g

0x12af,	// (0x0000f062) aid_cale_week_size_cell_pane_ParamLimits

0x12c2,	// (0x0000f075) bg_cale_heading_pane_ParamLimits

0x9c3e,	// (0x000179f1) bg_cale_pane_cp01_ParamLimits

0x12da,	// (0x0000f08d) cale_week_corner_pane_ParamLimits

0x12eb,	// (0x0000f09e) cale_week_day_heading_pane_ParamLimits

0x1303,	// (0x0000f0b6) cale_week_scroll_pane_g1_ParamLimits

0x1318,	// (0x0000f0cb) cale_week_scroll_pane_g2_ParamLimits

0x1329,	// (0x0000f0dc) cale_week_scroll_pane_g3_ParamLimits

0x133a,	// (0x0000f0ed) cale_week_scroll_pane_g4_ParamLimits

0x134b,	// (0x0000f0fe) cale_week_scroll_pane_g5_ParamLimits

0x135e,	// (0x0000f111) cale_week_scroll_pane_g6_ParamLimits

0x1371,	// (0x0000f124) cale_week_scroll_pane_g7_ParamLimits

0x1384,	// (0x0000f137) cale_week_scroll_pane_g8_ParamLimits

0x1397,	// (0x0000f14a) cale_week_scroll_pane_g9_ParamLimits

0x13a8,	// (0x0000f15b) cale_week_scroll_pane_g10_ParamLimits

0x13b9,	// (0x0000f16c) cale_week_scroll_pane_g11_ParamLimits

0x13ca,	// (0x0000f17d) cale_week_scroll_pane_g12_ParamLimits

0x13db,	// (0x0000f18e) cale_week_scroll_pane_g13_ParamLimits

0x13ec,	// (0x0000f19f) cale_week_scroll_pane_g14_ParamLimits

0x13fd,	// (0x0000f1b0) cale_week_scroll_pane_g15_ParamLimits

0xf1cd,	// (0x0001cf80) cale_week_scroll_pane_g_ParamLimits

0x1412,	// (0x0000f1c5) cale_week_time_pane_ParamLimits

0x1425,	// (0x0000f1d8) grid_cale_week_pane_ParamLimits

0x9c57,	// (0x00017a0a) listscroll_cale_week_pane_t1

0x143a,	// (0x0000f1ed) scroll_pane_cp08_ParamLimits

0x1eda,	// (0x0000fc8d) cale_month_corner_pane_ParamLimits

0xa12f,	// (0x00017ee2) cale_month_pane_t1

0x21bc,	// (0x0000ff6f) cale_month_week_pane_ParamLimits

0x2893,	// (0x00010646) popup_call_status_window_g1_ParamLimits

0x28a7,	// (0x0001065a) popup_call_status_window_g2_ParamLimits

0x28bb,	// (0x0001066e) popup_call_status_window_g3_ParamLimits

0xf375,	// (0x0001d128) popup_call_status_window_g_ParamLimits

0xa516,	// (0x000182c9) aid_call2_pane

0x30df,	// (0x00010e92) msg_header_pane_g1

0x3277,	// (0x0001102a) postcard_address2_pane_ParamLimits

0x3277,	// (0x0001102a) postcard_address2_pane

0x3289,	// (0x0001103c) postcard_message2_pane_ParamLimits

0x3289,	// (0x0001103c) postcard_message2_pane

0x3d57,	// (0x00011b0a) message2_row_pane_ParamLimits

0x3d57,	// (0x00011b0a) message2_row_pane

0x3d76,	// (0x00011b29) address2_row_pane_ParamLimits

0x3d76,	// (0x00011b29) address2_row_pane

0xbd19,	// (0x00019acc) postcard_message2_row_pane_g1

0xbd21,	// (0x00019ad4) postcard_message2_row_pane_t1

0xbd19,	// (0x00019acc) address2_row_pane_g1

0xbd21,	// (0x00019ad4) address2_row_pane_t1

0x9cbb,	// (0x00017a6e) aid_size_cell_vorec

0x970d,	// (0x000174c0) main_rss_pane

0x3d89,	// (0x00011b3c) rss_list_single_pane_ParamLimits

0x3d89,	// (0x00011b3c) rss_list_single_pane

0xbd2f,	// (0x00019ae2) rss_list_single_pane_t1

0xbd3d,	// (0x00019af0) rss_list_single_pane_t2

0x0001,

0xf620,	// (0x0001d3d3) rss_list_single_pane_t

0x970d,	// (0x000174c0) main_camera2_pane

0x970d,	// (0x000174c0) main_video2_pane

0x3ff0,	// (0x00011da3) cams_zoom_pane_cp2_ParamLimits

0x3ff0,	// (0x00011da3) cams_zoom_pane_cp2

0x4010,	// (0x00011dc3) image2_vga_pane_ParamLimits

0x4010,	// (0x00011dc3) image2_vga_pane

0x4061,	// (0x00011e14) main_camera2_pane_g1_ParamLimits

0x4061,	// (0x00011e14) main_camera2_pane_g1

0x4081,	// (0x00011e34) main_camera2_pane_g2_ParamLimits

0x4081,	// (0x00011e34) main_camera2_pane_g2

0x40a1,	// (0x00011e54) main_camera2_pane_g3_ParamLimits

0x40a1,	// (0x00011e54) main_camera2_pane_g3

0x40c1,	// (0x00011e74) main_camera2_pane_g4_ParamLimits

0x40c1,	// (0x00011e74) main_camera2_pane_g4

0x40e1,	// (0x00011e94) main_camera2_pane_g5_ParamLimits

0x40e1,	// (0x00011e94) main_camera2_pane_g5

0x4101,	// (0x00011eb4) main_camera2_pane_g6_ParamLimits

0x4101,	// (0x00011eb4) main_camera2_pane_g6

0x4121,	// (0x00011ed4) main_camera2_pane_g7_ParamLimits

0x4121,	// (0x00011ed4) main_camera2_pane_g7

0x4141,	// (0x00011ef4) main_camera2_pane_g8_ParamLimits

0x4141,	// (0x00011ef4) main_camera2_pane_g8

0x0008,

0xf641,	// (0x0001d3f4) main_camera2_pane_g_ParamLimits

0xf641,	// (0x0001d3f4) main_camera2_pane_g

0x4181,	// (0x00011f34) main_camera2_pane_t1_ParamLimits

0x4181,	// (0x00011f34) main_camera2_pane_t1

0x41b6,	// (0x00011f69) main_camera2_pane_t2_ParamLimits

0x41b6,	// (0x00011f69) main_camera2_pane_t2

0x41dc,	// (0x00011f8f) main_camera2_pane_t3_ParamLimits

0x41dc,	// (0x00011f8f) main_camera2_pane_t3

0x423a,	// (0x00011fed) main_camera2_pane_t4_ParamLimits

0x423a,	// (0x00011fed) main_camera2_pane_t4

0x0006,

0xf654,	// (0x0001d407) main_camera2_pane_t_ParamLimits

0xf654,	// (0x0001d407) main_camera2_pane_t

0x42cc,	// (0x0001207f) cams_zoom_pane_cp4_ParamLimits

0x42cc,	// (0x0001207f) cams_zoom_pane_cp4

0x42e2,	// (0x00012095) image2_cif_pane_ParamLimits

0x42e2,	// (0x00012095) image2_cif_pane

0x430d,	// (0x000120c0) image2_subqcif_pane_ParamLimits

0x430d,	// (0x000120c0) image2_subqcif_pane

0x4327,	// (0x000120da) main_video2_pane_g1_ParamLimits

0x4327,	// (0x000120da) main_video2_pane_g1

0x4341,	// (0x000120f4) main_video2_pane_g2_ParamLimits

0x4341,	// (0x000120f4) main_video2_pane_g2

0x4357,	// (0x0001210a) main_video2_pane_g3_ParamLimits

0x4357,	// (0x0001210a) main_video2_pane_g3

0x436d,	// (0x00012120) main_video2_pane_g4_ParamLimits

0x436d,	// (0x00012120) main_video2_pane_g4

0x4383,	// (0x00012136) main_video2_pane_g5_ParamLimits

0x4383,	// (0x00012136) main_video2_pane_g5

0x4399,	// (0x0001214c) main_video2_pane_g6_ParamLimits

0x4399,	// (0x0001214c) main_video2_pane_g6

0x0005,

0xf663,	// (0x0001d416) main_video2_pane_g_ParamLimits

0xf663,	// (0x0001d416) main_video2_pane_g

0x43b3,	// (0x00012166) main_video2_pane_t1_ParamLimits

0x43b3,	// (0x00012166) main_video2_pane_t1

0x43d7,	// (0x0001218a) main_video2_pane_t2_ParamLimits

0x43d7,	// (0x0001218a) main_video2_pane_t2

0x4425,	// (0x000121d8) main_video2_pane_t3_ParamLimits

0x4425,	// (0x000121d8) main_video2_pane_t3

0x0002,

0xf670,	// (0x0001d423) main_video2_pane_t_ParamLimits

0xf670,	// (0x0001d423) main_video2_pane_t

0x38ad,	// (0x00011660) call_muted_g2

0x0001,

0xf612,	// (0x0001d3c5) call_muted_g

0x970d,	// (0x000174c0) main_mup2_pane

0x446d,	// (0x00012220) main_mup2_pane_g1_ParamLimits

0x446d,	// (0x00012220) main_mup2_pane_g1

0x4479,	// (0x0001222c) main_mup2_pane_g2_ParamLimits

0x4479,	// (0x0001222c) main_mup2_pane_g2

0xbecf,	// (0x00019c82) main_mup_pane_g13_cp1

0xbed7,	// (0x00019c8a) mup_volume_pane_cp1

0x4495,	// (0x00012248) main_mup2_pane_g4_ParamLimits

0x4495,	// (0x00012248) main_mup2_pane_g4

0x44a7,	// (0x0001225a) main_mup2_pane_g5_ParamLimits

0x44a7,	// (0x0001225a) main_mup2_pane_g5

0x44b9,	// (0x0001226c) main_mup2_pane_g6_ParamLimits

0x44b9,	// (0x0001226c) main_mup2_pane_g6

0x44cb,	// (0x0001227e) main_mup2_pane_g7_ParamLimits

0x44cb,	// (0x0001227e) main_mup2_pane_g7

0x0006,

0xf677,	// (0x0001d42a) main_mup2_pane_g_ParamLimits

0xf677,	// (0x0001d42a) main_mup2_pane_g

0x44e3,	// (0x00012296) main_mup2_pane_t1_ParamLimits

0x44e3,	// (0x00012296) main_mup2_pane_t1

0x44f9,	// (0x000122ac) main_mup2_pane_t2_ParamLimits

0x44f9,	// (0x000122ac) main_mup2_pane_t2

0x450f,	// (0x000122c2) main_mup2_pane_t3_ParamLimits

0x450f,	// (0x000122c2) main_mup2_pane_t3

0x4525,	// (0x000122d8) main_mup2_pane_t4_ParamLimits

0x4525,	// (0x000122d8) main_mup2_pane_t4

0x453d,	// (0x000122f0) main_mup2_pane_t5_ParamLimits

0x453d,	// (0x000122f0) main_mup2_pane_t5

0x4555,	// (0x00012308) main_mup2_pane_t6_ParamLimits

0x4555,	// (0x00012308) main_mup2_pane_t6

0x0005,

0xf686,	// (0x0001d439) main_mup2_pane_t_ParamLimits

0xf686,	// (0x0001d439) main_mup2_pane_t

0x4585,	// (0x00012338) mup2_visualizer_pane_ParamLimits

0x4585,	// (0x00012338) mup2_visualizer_pane

0x45b3,	// (0x00012366) mup_progress_pane_cp_ParamLimits

0x45b3,	// (0x00012366) mup_progress_pane_cp

0xbeb1,	// (0x00019c64) mup_volume_pane_cp_ParamLimits

0xbeb1,	// (0x00019c64) mup_volume_pane_cp

0x45c7,	// (0x0001237a) mup2_visualizer_pane_g1_ParamLimits

0x45c7,	// (0x0001237a) mup2_visualizer_pane_g1

0xbdf0,	// (0x00019ba3) mup2_visualizer_pane_g2_ParamLimits

0xbdf0,	// (0x00019ba3) mup2_visualizer_pane_g2

0x45de,	// (0x00012391) mup2_visualizer_pane_g3_ParamLimits

0x45de,	// (0x00012391) mup2_visualizer_pane_g3

0x0002,

0xf693,	// (0x0001d446) mup2_visualizer_pane_g_ParamLimits

0xf693,	// (0x0001d446) mup2_visualizer_pane_g

0xab90,	// (0x00018943) aid_size_cell_fmradio

0x3a5f,	// (0x00011812) aid_height_parent_landcape

0x9f97,	// (0x00017d4a) wml_content_pane_cp

0x9f9f,	// (0x00017d52) wml_tabs_pane

0x9fa8,	// (0x00017d5b) popup_wml_miniature_window

0x9fb0,	// (0x00017d63) scroll_pane_cp021

0x9fc4,	// (0x00017d77) wml_content_pane_comp8

0x970d,	// (0x000174c0) bg_popup_sub_pane_cp05

0xbe0e,	// (0x00019bc1) popup_wml_miniature_window_g1

0xbe16,	// (0x00019bc9) wml_miniature_view_pane

0x45ea,	// (0x0001239d) aid_size_wml_view

0x45f2,	// (0x000123a5) wml_miniature_view_pane_g1

0x45fb,	// (0x000123ae) wml_miniature_view_pane_g2

0x4604,	// (0x000123b7) wml_miniature_view_pane_g3

0x460c,	// (0x000123bf) wml_miniature_view_pane_g4

0x4614,	// (0x000123c7) wml_miniature_view_pane_g5

0x461c,	// (0x000123cf) wml_miniature_view_pane_g6

0x4624,	// (0x000123d7) wml_miniature_view_pane_g7

0x462c,	// (0x000123df) wml_miniature_view_pane_g8

0x0007,

0xf69a,	// (0x0001d44d) wml_miniature_view_pane_g

0xbe1e,	// (0x00019bd1) background_graphic_ParamLimits

0xbe1e,	// (0x00019bd1) background_graphic

0xbe2a,	// (0x00019bdd) wml_tabs_2_pane

0xbe33,	// (0x00019be6) wml_tabs_3_pane_ParamLimits

0xbe33,	// (0x00019be6) wml_tabs_3_pane

0xbe45,	// (0x00019bf8) wml_tabs_4_pane_ParamLimits

0xbe45,	// (0x00019bf8) wml_tabs_4_pane

0xbe5b,	// (0x00019c0e) wml_tabs_5_pane_ParamLimits

0xbe5b,	// (0x00019c0e) wml_tabs_5_pane

0xbe75,	// (0x00019c28) wml_tabs_pane_g2_ParamLimits

0xbe75,	// (0x00019c28) wml_tabs_pane_g2

0xbe89,	// (0x00019c3c) wml_tabs_pane_g3_ParamLimits

0xbe89,	// (0x00019c3c) wml_tabs_pane_g3

0x4634,	// (0x000123e7) wml_tabs_2_active_pane_ParamLimits

0x4634,	// (0x000123e7) wml_tabs_2_active_pane

0x4648,	// (0x000123fb) wml_tabs_2_passive_pane_ParamLimits

0x4648,	// (0x000123fb) wml_tabs_2_passive_pane

0x465c,	// (0x0001240f) wml_tabs_3_active_pane_cp_ParamLimits

0x465c,	// (0x0001240f) wml_tabs_3_active_pane_cp

0x4671,	// (0x00012424) wml_tabs_3_passive_pane_ParamLimits

0x4671,	// (0x00012424) wml_tabs_3_passive_pane

0x4684,	// (0x00012437) wml_tabs_3_passive_pane_cp_ParamLimits

0x4684,	// (0x00012437) wml_tabs_3_passive_pane_cp

0x469b,	// (0x0001244e) tabs_4_active_pane

0x46a3,	// (0x00012456) tabs_4_passive_pane

0x46ad,	// (0x00012460) tabs_4_passive_pane_cp

0x46b5,	// (0x00012468) tabs_4_passive_pane_cp2

0xbb46,	// (0x000198f9) aid_height_text

0x2e37,	// (0x00010bea) mup_volume_cont_pane_ParamLimits

0x2e37,	// (0x00010bea) mup_volume_cont_pane

0x0edc,	// (0x0000ec8f) aid_size_cell_pinb

0x9998,	// (0x0001774b) aid_size_list_pinb

0x459f,	// (0x00012352) mup2_volume_cont_pane_ParamLimits

0x459f,	// (0x00012352) mup2_volume_cont_pane

0xbe9d,	// (0x00019c50) mup2_volume_cont_pane_g1_ParamLimits

0xbe9d,	// (0x00019c50) mup2_volume_cont_pane_g1

0x0bbc,	// (0x0000e96f) aid_size_cell_touch_ParamLimits

0x0bbc,	// (0x0000e96f) aid_size_cell_touch

0x0dca,	// (0x0000eb7d) touch_pane_ParamLimits

0x0dca,	// (0x0000eb7d) touch_pane

0x927e,	// (0x00017031) main_rss2_pane

0xbedf,	// (0x00019c92) listscroll_rss2_pane

0xbee8,	// (0x00019c9b) rss2_navigation_pane

0xbef0,	// (0x00019ca3) list_rss2_pane

0xa6c5,	// (0x00018478) scroll_pane_cp22

0xbef8,	// (0x00019cab) rss2_navigation_pane_g1

0xbf01,	// (0x00019cb4) rss2_navigation_pane_g2

0xbf09,	// (0x00019cbc) rss2_navigation_pane_g3

0x0002,

0xf6ab,	// (0x0001d45e) rss2_navigation_pane_g

0xbf11,	// (0x00019cc4) rss2_navigation_pane_t1

0x46bf,	// (0x00012472) rss2_list_single_pane_ParamLimits

0x46bf,	// (0x00012472) rss2_list_single_pane

0xbf1f,	// (0x00019cd2) rss2_list_single_pane_t2

0xbf2d,	// (0x00019ce0) rss2_list_single_pane_t3_ParamLimits

0xbf2d,	// (0x00019ce0) rss2_list_single_pane_t3

0xbf4a,	// (0x00019cfd) rss2_list_single_pane_t4

0x2670,	// (0x00010423) smil_status_pane_g1

0x92ee,	// (0x000170a1) main_image2_pane_ParamLimits

0x92ee,	// (0x000170a1) main_image2_pane

0x4161,	// (0x00011f14) main_camera2_pane_g9_ParamLimits

0x4161,	// (0x00011f14) main_camera2_pane_g9

0x428f,	// (0x00012042) main_camera2_pane_t5_ParamLimits

0x428f,	// (0x00012042) main_camera2_pane_t5

0xbdc0,	// (0x00019b73) main_camera2_pane_t6_ParamLimits

0xbdc0,	// (0x00019b73) main_camera2_pane_t6

0x46d7,	// (0x0001248a) main_image2_pane_g1_ParamLimits

0x46d7,	// (0x0001248a) main_image2_pane_g1

0x34b9,	// (0x0001126c) smil2_video_pane_ParamLimits

0x34b9,	// (0x0001126c) smil2_video_pane

0x929c,	// (0x0001704f) aid_zoom_text_primary_cp

0x92e4,	// (0x00017097) popup_preview_fixed_window

0x9f00,	// (0x00017cb3) im_reading_pane_g1

0x3fd8,	// (0x00011d8b) cams2_bc_adjust_pane_cp_ParamLimits

0x3fd8,	// (0x00011d8b) cams2_bc_adjust_pane_cp

0x42be,	// (0x00012071) cams2_bc_adjust_pane_ParamLimits

0x42be,	// (0x00012071) cams2_bc_adjust_pane

0xbf58,	// (0x00019d0b) cams2_bc_adjust_pane_g1

0xbf60,	// (0x00019d13) cams2_slider_pane

0xbf69,	// (0x00019d1c) cams2_slider_pane_g1

0xbf72,	// (0x00019d25) cams2_slider_pane_g2

0x0006,

0xf6b2,	// (0x0001d465) cams2_slider_pane_g

0x0f9b,	// (0x0000ed4e) calc_display_pane_ParamLimits

0x0fc3,	// (0x0000ed76) calc_paper_pane_ParamLimits

0x0fe6,	// (0x0000ed99) grid_calc_pane_ParamLimits

0xa578,	// (0x0001832b) popup_clock_digital_window_t1_ParamLimits

0xab2d,	// (0x000188e0) main_image_pane_t1

0x0f7d,	// (0x0000ed30) aid_size_cell_calc_ParamLimits

0x0f7d,	// (0x0000ed30) aid_size_cell_calc

0x3aa5,	// (0x00011858) popup_blid_sat_info2_window_ParamLimits

0x3aa5,	// (0x00011858) popup_blid_sat_info2_window

0xbf94,	// (0x00019d47) aid_size_cell_blid

0xbf9c,	// (0x00019d4f) bg_popup_window_pane_cp07

0xbfbf,	// (0x00019d72) grid_popup_blid_pane

0xbfc9,	// (0x00019d7c) heading_pane_cp05_ParamLimits

0xbfc9,	// (0x00019d7c) heading_pane_cp05

0xc093,	// (0x00019e46) cell_popup_blid_pane_ParamLimits

0xc093,	// (0x00019e46) cell_popup_blid_pane

0xc0b9,	// (0x00019e6c) cell_popup_blid_pane_g1

0xc0c1,	// (0x00019e74) cell_popup_blid_pane_t1

0x456f,	// (0x00012322) mup2_indicator_pane_ParamLimits

0x456f,	// (0x00012322) mup2_indicator_pane

0xa812,	// (0x000185c5) mup2_visualizer_osc_pane

0xbdfc,	// (0x00019baf) mup2_visualizer_spec_pane_ParamLimits

0xbdfc,	// (0x00019baf) mup2_visualizer_spec_pane

0x46ed,	// (0x000124a0) mup2_spec_half_pane

0x46f6,	// (0x000124a9) mup2_spec_half_pane_cp

0x46fe,	// (0x000124b1) mup2_spec_bar_pane_ParamLimits

0x46fe,	// (0x000124b1) mup2_spec_bar_pane

0xbd4b,	// (0x00019afe) mup2_spec_bar_pane_g1

0xbd55,	// (0x00019b08) mup2_spec_bar_pane_g2

0x0001,

0xf625,	// (0x0001d3d8) mup2_spec_bar_pane_g

0x471e,	// (0x000124d1) mup2_osc_middle_pane

0xbd67,	// (0x00019b1a) mup2_visualizer_osc_pane_g1

0x931c,	// (0x000170cf) popup_number_entry_window_t1_ParamLimits

0x932f,	// (0x000170e2) popup_number_entry_window_t2_ParamLimits

0x9341,	// (0x000170f4) popup_number_entry_window_t3_ParamLimits

0x0e1c,	// (0x0000ebcf) popup_number_entry_window_t5_ParamLimits

0x0e1c,	// (0x0000ebcf) popup_number_entry_window_t5

0xf0e7,	// (0x0001ce9a) popup_number_entry_window_t_ParamLimits

0x9353,	// (0x00017106) text_title_cp2_ParamLimits

0xaa07,	// (0x000187ba) aid_hotspot_pointer_text2_pane

0xaa2d,	// (0x000187e0) main_viewer_pane_g9_ParamLimits

0xaa2d,	// (0x000187e0) main_viewer_pane_g9

0xa12f,	// (0x00017ee2) cale_month_pane_t1_ParamLimits

0xa1c4,	// (0x00017f77) bg_cale_pane_ParamLimits

0xa1dc,	// (0x00017f8f) list_cale_pane_ParamLimits

0x9c57,	// (0x00017a0a) listscroll_cale_day_pane_t1

0xa1ed,	// (0x00017fa0) scroll_pane_cp09_ParamLimits

0x2e6d,	// (0x00010c20) main_mup_eq_pane_t1_ParamLimits

0x2e6d,	// (0x00010c20) main_mup_eq_pane_t1

0x2e89,	// (0x00010c3c) main_mup_eq_pane_t2_ParamLimits

0x2e89,	// (0x00010c3c) main_mup_eq_pane_t2

0x2ea5,	// (0x00010c58) main_mup_eq_pane_t3_ParamLimits

0x2ea5,	// (0x00010c58) main_mup_eq_pane_t3

0x2ec3,	// (0x00010c76) main_mup_eq_pane_t4_ParamLimits

0x2ec3,	// (0x00010c76) main_mup_eq_pane_t4

0x2ee1,	// (0x00010c94) main_mup_eq_pane_t5_ParamLimits

0x2ee1,	// (0x00010c94) main_mup_eq_pane_t5

0x2eff,	// (0x00010cb2) main_mup_eq_pane_t6_ParamLimits

0x2eff,	// (0x00010cb2) main_mup_eq_pane_t6

0x2f15,	// (0x00010cc8) main_mup_eq_pane_t7_ParamLimits

0x2f15,	// (0x00010cc8) main_mup_eq_pane_t7

0x2f2b,	// (0x00010cde) main_mup_eq_pane_t8_ParamLimits

0x2f2b,	// (0x00010cde) main_mup_eq_pane_t8

0x2f41,	// (0x00010cf4) main_mup_eq_pane_t9_ParamLimits

0x2f41,	// (0x00010cf4) main_mup_eq_pane_t9

0x2f5b,	// (0x00010d0e) main_mup_eq_pane_t10_ParamLimits

0x2f5b,	// (0x00010d0e) main_mup_eq_pane_t10

0x0009,

0xf474,	// (0x0001d227) main_mup_eq_pane_t_ParamLimits

0xf474,	// (0x0001d227) main_mup_eq_pane_t

0x300a,	// (0x00010dbd) mup_equalizer_pane_cp5_ParamLimits

0x301e,	// (0x00010dd1) mup_equalizer_pane_cp6_ParamLimits

0x3032,	// (0x00010de5) mup_equalizer_pane_cp7_ParamLimits

0x927e,	// (0x00017031) main_gallery_pane

0xbd70,	// (0x00019b23) smil2_volume_pane

0xbd78,	// (0x00019b2b) smil_status_volume_pane_g1_ParamLimits

0xbd8b,	// (0x00019b3e) smil_status_volume_pane_g2_ParamLimits

0xbd9e,	// (0x00019b51) smil_status_volume_pane_g3_ParamLimits

0xf62a,	// (0x0001d3dd) smil_status_volume_pane_g_ParamLimits

0xbf9c,	// (0x00019d4f) bg_popup_window_pane_cp07_ParamLimits

0xbfaa,	// (0x00019d5d) blid_firmament_pane

0x4727,	// (0x000124da) aid_size_cell_gallery_ParamLimits

0x4727,	// (0x000124da) aid_size_cell_gallery

0x473d,	// (0x000124f0) grid_gallery_pane_ParamLimits

0x473d,	// (0x000124f0) grid_gallery_pane

0x4756,	// (0x00012509) cell_gallery_pane_ParamLimits

0x4756,	// (0x00012509) cell_gallery_pane

0xc0cf,	// (0x00019e82) bg_cell_gallery_focus_pane_ParamLimits

0xc0cf,	// (0x00019e82) bg_cell_gallery_focus_pane

0xc0e1,	// (0x00019e94) cell_gallery_pane_g1_ParamLimits

0xc0e1,	// (0x00019e94) cell_gallery_pane_g1

0x479f,	// (0x00012552) cell_gallery_pane_g2_ParamLimits

0x479f,	// (0x00012552) cell_gallery_pane_g2

0x47ac,	// (0x0001255f) cell_gallery_pane_g3_ParamLimits

0x47ac,	// (0x0001255f) cell_gallery_pane_g3

0xc0ed,	// (0x00019ea0) cell_gallery_pane_g4_ParamLimits

0xc0ed,	// (0x00019ea0) cell_gallery_pane_g4

0x0003,

0xf6d8,	// (0x0001d48b) cell_gallery_pane_g_ParamLimits

0xf6d8,	// (0x0001d48b) cell_gallery_pane_g

0xc0f9,	// (0x00019eac) bg_cell_gallery_focus_pane_g1

0xc101,	// (0x00019eb4) bg_cell_gallery_focus_pane_g2

0xc109,	// (0x00019ebc) bg_cell_gallery_focus_pane_g3

0xc111,	// (0x00019ec4) bg_cell_gallery_focus_pane_g4

0xc119,	// (0x00019ecc) bg_cell_gallery_focus_pane_g5

0xc121,	// (0x00019ed4) bg_cell_gallery_focus_pane_g6

0xc129,	// (0x00019edc) bg_cell_gallery_focus_pane_g7

0xc131,	// (0x00019ee4) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6e1,	// (0x0001d494) bg_cell_gallery_focus_pane_g

0xc139,	// (0x00019eec) aid_firma_cardinal

0xc14d,	// (0x00019f00) blid_firmament_pane_t1

0xc164,	// (0x00019f17) blid_firmament_pane_t2

0xc17b,	// (0x00019f2e) blid_firmament_pane_t3

0xc192,	// (0x00019f45) blid_firmament_pane_t4

0x0003,

0xf6f2,	// (0x0001d4a5) blid_firmament_pane_t

0xc1a9,	// (0x00019f5c) blid_sat_info_pane

0xc1b9,	// (0x00019f6c) blid_sat_info_pane_g1

0xc1b9,	// (0x00019f6c) blid_sat_info_pane_g2

0x0001,

0xf6fb,	// (0x0001d4ae) blid_sat_info_pane_g

0xc1c3,	// (0x00019f76) blid_sat_info_pane_t1

0xc1d1,	// (0x00019f84) smil2_volume_content_pane

0xc1da,	// (0x00019f8d) smil2_volume_pane_g1

0xc1e2,	// (0x00019f95) smil2_volume_content_pane_g1

0xc1eb,	// (0x00019f9e) smil2_volume_content_pane_g2

0xc1f4,	// (0x00019fa7) smil2_volume_content_pane_g3

0xc1fd,	// (0x00019fb0) smil2_volume_content_pane_g4

0xc206,	// (0x00019fb9) smil2_volume_content_pane_g5

0xc20f,	// (0x00019fc2) smil2_volume_content_pane_g6

0xc218,	// (0x00019fcb) smil2_volume_content_pane_g7

0xc221,	// (0x00019fd4) smil2_volume_content_pane_g8

0xc22a,	// (0x00019fdd) smil2_volume_content_pane_g9

0xc233,	// (0x00019fe6) smil2_volume_content_pane_g10

0x0009,

0xf700,	// (0x0001d4b3) smil2_volume_content_pane_g

0x1494,	// (0x0000f247) cale_week_day_heading_pane_t1_ParamLimits

0x14a8,	// (0x0000f25b) cale_week_day_heading_pane_t2_ParamLimits

0x14bc,	// (0x0000f26f) cale_week_day_heading_pane_t3_ParamLimits

0x14d0,	// (0x0000f283) cale_week_day_heading_pane_t4_ParamLimits

0x14e4,	// (0x0000f297) cale_week_day_heading_pane_t5_ParamLimits

0x14f8,	// (0x0000f2ab) cale_week_day_heading_pane_t6_ParamLimits

0x150e,	// (0x0000f2c1) cale_week_day_heading_pane_t7_ParamLimits

0xf1ec,	// (0x0001cf9f) cale_week_day_heading_pane_t_ParamLimits

0x9c69,	// (0x00017a1c) bg_cale_side_pane_ParamLimits

0x1522,	// (0x0000f2d5) cale_week_time_pane_t1_ParamLimits

0x153a,	// (0x0000f2ed) cale_week_time_pane_t2_ParamLimits

0x1552,	// (0x0000f305) cale_week_time_pane_t3_ParamLimits

0x156a,	// (0x0000f31d) cale_week_time_pane_t4_ParamLimits

0x1582,	// (0x0000f335) cale_week_time_pane_t5_ParamLimits

0x159a,	// (0x0000f34d) cale_week_time_pane_t6_ParamLimits

0x15b2,	// (0x0000f365) cale_week_time_pane_t7_ParamLimits

0x15ca,	// (0x0000f37d) cale_week_time_pane_t8_ParamLimits

0xf1fb,	// (0x0001cfae) cale_week_time_pane_t_ParamLimits

0x15e2,	// (0x0000f395) cell_cale_week_pane_g2_ParamLimits

0x9c69,	// (0x00017a1c) bg_cale_side_pane_cp01_ParamLimits

0x24e9,	// (0x0001029c) cale_month_week_pane_t1_ParamLimits

0x2500,	// (0x000102b3) cale_month_week_pane_t2_ParamLimits

0x2517,	// (0x000102ca) cale_month_week_pane_t3_ParamLimits

0x252e,	// (0x000102e1) cale_month_week_pane_t4_ParamLimits

0x2545,	// (0x000102f8) cale_month_week_pane_t5_ParamLimits

0x255c,	// (0x0001030f) cale_month_week_pane_t6_ParamLimits

0xf2d4,	// (0x0001d087) cale_month_week_pane_t_ParamLimits

0xa16b,	// (0x00017f1e) cell_cale_month_pane_g1_ParamLimits

0x927e,	// (0x00017031) main_cale_event_viewer_pane

0x927e,	// (0x00017031) listscroll_cale_event_viewer_pane

0xc23c,	// (0x00019fef) list_cale_ev_pane

0xc244,	// (0x00019ff7) scroll_pane_cp023

0xc250,	// (0x0001a003) field_cale_ev_pane_ParamLimits

0xc250,	// (0x0001a003) field_cale_ev_pane

0xc26a,	// (0x0001a01d) field_cale_ev_content_pane_ParamLimits

0xc26a,	// (0x0001a01d) field_cale_ev_content_pane

0xc276,	// (0x0001a029) field_cale_ev_pane_g1_ParamLimits

0xc276,	// (0x0001a029) field_cale_ev_pane_g1

0xc282,	// (0x0001a035) field_cale_ev_pane_g2_ParamLimits

0xc282,	// (0x0001a035) field_cale_ev_pane_g2

0xc29a,	// (0x0001a04d) field_cale_ev_pane_g3_ParamLimits

0xc29a,	// (0x0001a04d) field_cale_ev_pane_g3

0x0002,

0xf715,	// (0x0001d4c8) field_cale_ev_pane_g_ParamLimits

0xf715,	// (0x0001d4c8) field_cale_ev_pane_g

0xc2b2,	// (0x0001a065) field_cale_ev_pane_t1_ParamLimits

0xc2b2,	// (0x0001a065) field_cale_ev_pane_t1

0xc2c9,	// (0x0001a07c) field_cale_ev_content_pane_t1_ParamLimits

0xc2c9,	// (0x0001a07c) field_cale_ev_content_pane_t1

0xa99b,	// (0x0001874e) bg_button_pane_cp01

0x9aa1,	// (0x00017854) listscroll_cale_week_pane_ParamLimits

0x12a5,	// (0x0000f058) popup_toolbar_window_cp01

0x9c57,	// (0x00017a0a) listscroll_cale_week_pane_t1_ParamLimits

0x9aa1,	// (0x00017854) listscroll_cale_day_pane_ParamLimits

0x26cf,	// (0x00010482) popup_toolbar_window_cp02

0x9c57,	// (0x00017a0a) listscroll_cale_day_pane_t1_ParamLimits

0x9aa1,	// (0x00017854) main_cale_month_pane_ParamLimits

0x3ccb,	// (0x00011a7e) popup_toolbar_window_cp03_ParamLimits

0x3ccb,	// (0x00011a7e) popup_toolbar_window_cp03

0x337d,	// (0x00011130) main_image_pane_g2_ParamLimits

0x337d,	// (0x00011130) main_image_pane_g2

0x338e,	// (0x00011141) main_image_pane_g3_ParamLimits

0x338e,	// (0x00011141) main_image_pane_g3

0x0002,

0xf506,	// (0x0001d2b9) main_image_pane_g_ParamLimits

0xf506,	// (0x0001d2b9) main_image_pane_g

0xab2d,	// (0x000188e0) main_image_pane_t1_ParamLimits

0x339f,	// (0x00011152) main_image_pane_t2_ParamLimits

0x339f,	// (0x00011152) main_image_pane_t2

0x33b1,	// (0x00011164) main_image_pane_t3_ParamLimits

0x33b1,	// (0x00011164) main_image_pane_t3

0x33d9,	// (0x0001118c) main_image_pane_t4_ParamLimits

0x33d9,	// (0x0001118c) main_image_pane_t4

0x0003,

0xf50d,	// (0x0001d2c0) main_image_pane_t_ParamLimits

0xf50d,	// (0x0001d2c0) main_image_pane_t

0x33f9,	// (0x000111ac) popup_image_details_window_cp01

0x3403,	// (0x000111b6) popup_toobar_trans_pane_cp01_ParamLimits

0x3403,	// (0x000111b6) popup_toobar_trans_pane_cp01

0x3b7c,	// (0x0001192f) popup_image_details_window_ParamLimits

0x3b7c,	// (0x0001192f) popup_image_details_window

0xbcd1,	// (0x00019a84) popup_image_focus_window

0x3f92,	// (0x00011d45) camera2_autofocus_pane_ParamLimits

0x3f92,	// (0x00011d45) camera2_autofocus_pane

0x927e,	// (0x00017031) bg_popup_sub_pane_cp06

0xc2e6,	// (0x0001a099) popup_image_focus_window_g1

0xc2ee,	// (0x0001a0a1) popup_image_focus_window_g2

0xc2f6,	// (0x0001a0a9) popup_image_focus_window_g3

0xc2fe,	// (0x0001a0b1) popup_image_focus_window_g4

0x0003,

0xf71c,	// (0x0001d4cf) popup_image_focus_window_g

0xc306,	// (0x0001a0b9) popup_image_focus_window_t1

0xc314,	// (0x0001a0c7) popup_image_focus_window_t2

0xc324,	// (0x0001a0d7) popup_image_focus_window_t3

0x0002,

0xf725,	// (0x0001d4d8) popup_image_focus_window_t

0xc332,	// (0x0001a0e5) camera2_autofocus_pane_g1

0x92ee,	// (0x000170a1) bg_tb_trans_pane_cp01

0xc340,	// (0x0001a0f3) popup_image_details_window_g1

0xc353,	// (0x0001a106) popup_image_details_window_g2

0x0002,

0xf737,	// (0x0001d4ea) popup_image_details_window_g

0xc37c,	// (0x0001a12f) popup_image_details_window_t1

0xc38e,	// (0x0001a141) popup_image_details_window_t2

0xc3a7,	// (0x0001a15a) popup_image_details_window_t3

0xc3bb,	// (0x0001a16e) popup_image_details_window_t4

0xc3d6,	// (0x0001a189) popup_image_details_window_t5

0x0004,

0xf73e,	// (0x0001d4f1) popup_image_details_window_t

0x9a73,	// (0x00017826) bg_calc_paper_pane_ParamLimits

0x927e,	// (0x00017031) grid_highlight_pane_cp013

0x9a87,	// (0x0001783a) list_calc_pane_ParamLimits

0x9a99,	// (0x0001784c) scroll_pane_cp024

0x9aa1,	// (0x00017854) bg_calc_display_pane_ParamLimits

0x10e4,	// (0x0000ee97) calc_display_pane_t1_ParamLimits

0x10f6,	// (0x0000eea9) calc_display_pane_t2_ParamLimits

0x9aad,	// (0x00017860) calc_display_pane_t3_ParamLimits

0xf16e,	// (0x0001cf21) calc_display_pane_t_ParamLimits

0x11b9,	// (0x0000ef6c) cell_calc_pane_g2

0x0001,

0xf18b,	// (0x0001cf3e) cell_calc_pane_g

0x11c2,	// (0x0000ef75) cell_calc_pane_t1

0x9b24,	// (0x000178d7) grid_highlight_pane_cp02_ParamLimits

0x9b3a,	// (0x000178ed) toolbar_button_pane_cp01_ParamLimits

0x9b3a,	// (0x000178ed) toolbar_button_pane_cp01

0xab72,	// (0x00018925) temp_image_control_pane_ParamLimits

0xab72,	// (0x00018925) temp_image_control_pane

0x92ee,	// (0x000170a1) main_mp3_pane

0xc3f0,	// (0x0001a1a3) temp_image_control_pane_g1_ParamLimits

0xc3f0,	// (0x0001a1a3) temp_image_control_pane_g1

0xc3fe,	// (0x0001a1b1) temp_image_control_pane_g2_ParamLimits

0xc3fe,	// (0x0001a1b1) temp_image_control_pane_g2

0xc410,	// (0x0001a1c3) temp_image_control_pane_g3_ParamLimits

0xc410,	// (0x0001a1c3) temp_image_control_pane_g3

0x47e9,	// (0x0001259c) temp_image_control_pane_g4_ParamLimits

0x47e9,	// (0x0001259c) temp_image_control_pane_g4

0x0003,

0xf749,	// (0x0001d4fc) temp_image_control_pane_g_ParamLimits

0xf749,	// (0x0001d4fc) temp_image_control_pane_g

0xc3f0,	// (0x0001a1a3) main_mp3_pane_g1

0x47fc,	// (0x000125af) main_mp3_pane_g2

0x0007,

0xf752,	// (0x0001d505) main_mp3_pane_g

0xc453,	// (0x0001a206) main_mp3_pane_t1

0x9d52,	// (0x00017b05) main_camera_pane_g8_ParamLimits

0x9d52,	// (0x00017b05) main_camera_pane_g8

0x1888,	// (0x0000f63b) main_video_pane_g7_ParamLimits

0x1888,	// (0x0000f63b) main_video_pane_g7

0xbdde,	// (0x00019b91) main_camera2_pane_t7_ParamLimits

0xbdde,	// (0x00019b91) main_camera2_pane_t7

0x9f57,	// (0x00017d0a) scroll_pane_cp025_ParamLimits

0x9f57,	// (0x00017d0a) scroll_pane_cp025

0x9f6b,	// (0x00017d1e) scroll_pane_cp026_ParamLimits

0x9f6b,	// (0x00017d1e) scroll_pane_cp026

0x9f7a,	// (0x00017d2d) wml_content_pane_ParamLimits

0x927e,	// (0x00017031) main_touch_calib_pane

0x48c8,	// (0x0001267b) main_touch_calib_pane_g1

0x48d4,	// (0x00012687) main_touch_calib_pane_g2

0x48e0,	// (0x00012693) main_touch_calib_pane_g3

0x48ec,	// (0x0001269f) main_touch_calib_pane_g4

0x0003,

0xf770,	// (0x0001d523) main_touch_calib_pane_g

0x48f8,	// (0x000126ab) main_touch_calib_pane_t1

0x4912,	// (0x000126c5) main_touch_calib_pane_t2

0x0004,

0xf779,	// (0x0001d52c) main_touch_calib_pane_t

0xa753,	// (0x00018506) mup_progress_pane_cp02

0xa772,	// (0x00018525) navi_pane_g1

0xa7d4,	// (0x00018587) navi_pane_mp_t3

0x92ee,	// (0x000170a1) main_mp3_pane_ParamLimits

0x3d09,	// (0x00011abc) navi_pane_ParamLimits

0xc3f0,	// (0x0001a1a3) main_mp3_pane_g1_ParamLimits

0x47fc,	// (0x000125af) main_mp3_pane_g2_ParamLimits

0x480a,	// (0x000125bd) main_mp3_pane_g3_ParamLimits

0x480a,	// (0x000125bd) main_mp3_pane_g3

0x4818,	// (0x000125cb) main_mp3_pane_g4_ParamLimits

0x4818,	// (0x000125cb) main_mp3_pane_g4

0xc420,	// (0x0001a1d3) main_mp3_pane_g5_ParamLimits

0xc420,	// (0x0001a1d3) main_mp3_pane_g5

0xc42e,	// (0x0001a1e1) main_mp3_pane_g6_ParamLimits

0xc42e,	// (0x0001a1e1) main_mp3_pane_g6

0xc43b,	// (0x0001a1ee) main_mp3_pane_g7_ParamLimits

0xc43b,	// (0x0001a1ee) main_mp3_pane_g7

0xc447,	// (0x0001a1fa) main_mp3_pane_g8_ParamLimits

0xc447,	// (0x0001a1fa) main_mp3_pane_g8

0xf752,	// (0x0001d505) main_mp3_pane_g_ParamLimits

0x4826,	// (0x000125d9) main_mp3_pane_t2

0x4834,	// (0x000125e7) main_mp3_pane_t3

0xc461,	// (0x0001a214) main_mp3_pane_t4

0xc46f,	// (0x0001a222) main_mp3_pane_t5

0x0005,

0xf763,	// (0x0001d516) main_mp3_pane_t

0xc47d,	// (0x0001a230) mup_progress_pane_cp01

0x929c,	// (0x0001704f) aid_zoom_text_secondary2

0xc23c,	// (0x00019fef) list_cale_ev2_pane

0xc244,	// (0x00019ff7) scroll_pane_cp023_ParamLimits

0x4968,	// (0x0001271b) field_cale_ev2_pane_ParamLimits

0x4968,	// (0x0001271b) field_cale_ev2_pane

0x498e,	// (0x00012741) field_cale_ev2_pane_g1_ParamLimits

0x498e,	// (0x00012741) field_cale_ev2_pane_g1

0x499a,	// (0x0001274d) field_cale_ev2_pane_g2_ParamLimits

0x499a,	// (0x0001274d) field_cale_ev2_pane_g2

0x49b2,	// (0x00012765) field_cale_ev2_pane_g3_ParamLimits

0x49b2,	// (0x00012765) field_cale_ev2_pane_g3

0x0003,

0xf784,	// (0x0001d537) field_cale_ev2_pane_g_ParamLimits

0xf784,	// (0x0001d537) field_cale_ev2_pane_g

0xc491,	// (0x0001a244) field_cale_ev2_pane_t1_ParamLimits

0xc491,	// (0x0001a244) field_cale_ev2_pane_t1

0xc4a8,	// (0x0001a25b) field_cale_ev2_pane_t2_ParamLimits

0xc4a8,	// (0x0001a25b) field_cale_ev2_pane_t2

0x0001,

0xf78d,	// (0x0001d540) field_cale_ev2_pane_t_ParamLimits

0xf78d,	// (0x0001d540) field_cale_ev2_pane_t

0x322d,	// (0x00010fe0) main_postcard_pane_g5_ParamLimits

0x322d,	// (0x00010fe0) main_postcard_pane_g5

0x3243,	// (0x00010ff6) main_postcard_pane_g6_ParamLimits

0x3243,	// (0x00010ff6) main_postcard_pane_g6

0x1638,	// (0x0000f3eb) camera2_autofocus_pane_cp_ParamLimits

0x1638,	// (0x0000f3eb) camera2_autofocus_pane_cp

0x92ee,	// (0x000170a1) main_mup3_pane

0x49ea,	// (0x0001279d) main_mup3_pane_g1_ParamLimits

0x49ea,	// (0x0001279d) main_mup3_pane_g1

0x4a0c,	// (0x000127bf) main_mup3_pane_g2_ParamLimits

0x4a0c,	// (0x000127bf) main_mup3_pane_g2

0x4a91,	// (0x00012844) main_mup3_pane_g3_ParamLimits

0x4a91,	// (0x00012844) main_mup3_pane_g3

0x4ad7,	// (0x0001288a) main_mup3_pane_g4_ParamLimits

0x4ad7,	// (0x0001288a) main_mup3_pane_g4

0x4b1d,	// (0x000128d0) main_mup3_pane_g5_ParamLimits

0x4b1d,	// (0x000128d0) main_mup3_pane_g5

0x4b65,	// (0x00012918) main_mup3_pane_g6_ParamLimits

0x4b65,	// (0x00012918) main_mup3_pane_g6

0xc4bd,	// (0x0001a270) main_mup3_pane_g7_ParamLimits

0xc4bd,	// (0x0001a270) main_mup3_pane_g7

0x0007,

0xf79d,	// (0x0001d550) main_mup3_pane_g_ParamLimits

0xf79d,	// (0x0001d550) main_mup3_pane_g

0x4be5,	// (0x00012998) main_mup3_pane_t1_ParamLimits

0x4be5,	// (0x00012998) main_mup3_pane_t1

0x4c59,	// (0x00012a0c) main_mup3_pane_t2_ParamLimits

0x4c59,	// (0x00012a0c) main_mup3_pane_t2

0x4d2d,	// (0x00012ae0) main_mup3_pane_t4_ParamLimits

0x4d2d,	// (0x00012ae0) main_mup3_pane_t4

0x4d8b,	// (0x00012b3e) main_mup3_pane_t5_ParamLimits

0x4d8b,	// (0x00012b3e) main_mup3_pane_t5

0x4e47,	// (0x00012bfa) main_mup3_pane_t6_ParamLimits

0x4e47,	// (0x00012bfa) main_mup3_pane_t6

0x0005,

0xf7ae,	// (0x0001d561) main_mup3_pane_t_ParamLimits

0xf7ae,	// (0x0001d561) main_mup3_pane_t

0x4eff,	// (0x00012cb2) mup3_progress_pane_ParamLimits

0x4eff,	// (0x00012cb2) mup3_progress_pane

0x4f8b,	// (0x00012d3e) popup_mup3_control_window_ParamLimits

0x4f8b,	// (0x00012d3e) popup_mup3_control_window

0xc4cb,	// (0x0001a27e) popup_mup3_text_window

0x4fbd,	// (0x00012d70) mup3_progress_pane_t1

0x4fdc,	// (0x00012d8f) mup3_progress_pane_t2

0xc4d3,	// (0x0001a286) mup3_progress_pane_t3

0x0002,

0xf7bb,	// (0x0001d56e) mup3_progress_pane_t

0xc4f0,	// (0x0001a2a3) mup_progress_pane_cp03

0x927e,	// (0x00017031) bg_tb_trans_pane_cp04

0x4ffb,	// (0x00012dae) mup3_volume_pane

0x5003,	// (0x00012db6) popup_mup3_control_window_g1

0x500c,	// (0x00012dbf) mup3_volume_pane_g1

0x5015,	// (0x00012dc8) mup3_volume_pane_g2

0x501e,	// (0x00012dd1) mup3_volume_pane_g3

0x0002,

0xf7c2,	// (0x0001d575) mup3_volume_pane_g

0x927e,	// (0x00017031) bg_tb_trans_pane_cp03

0xc500,	// (0x0001a2b3) popup_mup3_text_window_g1

0xc508,	// (0x0001a2bb) popup_mup3_text_window_t1

0x9afb,	// (0x000178ae) list_calc_item_pane_g1_ParamLimits

0xbec6,	// (0x00019c79) mup_volume_pane_cp_g1

0x492c,	// (0x000126df) main_touch_calib_pane_t3

0x4940,	// (0x000126f3) main_touch_calib_pane_t4

0x4954,	// (0x00012707) main_touch_calib_pane_t5

0x9288,	// (0x0001703b) aid_cell_size_toolbar2

0x9290,	// (0x00017043) aid_popup3_width_pane

0x929c,	// (0x0001704f) aid_zoom_text_msg_primary

0x9d1f,	// (0x00017ad2) vorec_t7

0x9abf,	// (0x00017872) bg_calc_paper_pane_g1_ParamLimits

0x9acb,	// (0x0001787e) bg_calc_paper_pane_g2_ParamLimits

0x9ad7,	// (0x0001788a) bg_calc_paper_pane_g3_ParamLimits

0x9ae3,	// (0x00017896) bg_calc_paper_pane_g4_ParamLimits

0x9aef,	// (0x000178a2) bg_calc_paper_pane_g5_ParamLimits

0x113f,	// (0x0000eef2) bg_calc_paper_pane_g6_ParamLimits

0x1150,	// (0x0000ef03) bg_calc_paper_pane_g7_ParamLimits

0x1161,	// (0x0000ef14) bg_calc_paper_pane_g8_ParamLimits

0xf175,	// (0x0001cf28) bg_calc_paper_pane_g_ParamLimits

0x1174,	// (0x0000ef27) calc_bg_paper_pane_g9_ParamLimits

0x1792,	// (0x0000f545) image_qvga_pane_ParamLimits

0x1792,	// (0x0000f545) image_qvga_pane

0x9968,	// (0x0001771b) bg_popup_sub_pane_cp04_ParamLimits

0xaaa9,	// (0x0001885c) popup_mup_playback_window_g1_ParamLimits

0xaab5,	// (0x00018868) popup_mup_playback_window_t1_ParamLimits

0xaaca,	// (0x0001887d) popup_mup_playback_window_t2_ParamLimits

0xf501,	// (0x0001d2b4) popup_mup_playback_window_t_ParamLimits

0x4489,	// (0x0001223c) main_mup2_pane_g3_ParamLimits

0x4489,	// (0x0001223c) main_mup2_pane_g3

0x1ae9,	// (0x0000f89c) popup_toolbar_window_cp04

0xaebf,	// (0x00018c72) popup_call2_audio_second_window_g3_ParamLimits

0xaebf,	// (0x00018c72) popup_call2_audio_second_window_g3

0xb2c9,	// (0x0001907c) popup_call2_audio_first_window_g4_ParamLimits

0xb2c9,	// (0x0001907c) popup_call2_audio_first_window_g4

0xb948,	// (0x000196fb) popup_call2_audio_in_window_g4_ParamLimits

0xb948,	// (0x000196fb) popup_call2_audio_in_window_g4

0x335f,	// (0x00011112) aid_area_sk_bg_cut_ParamLimits

0x335f,	// (0x00011112) aid_area_sk_bg_cut

0xaadf,	// (0x00018892) aid_area_sk_bg_cut_2_ParamLimits

0xaadf,	// (0x00018892) aid_area_sk_bg_cut_2

0x478f,	// (0x00012542) aid_placing_details_win

0x4797,	// (0x0001254a) aid_placing_details_win_2

0xc332,	// (0x0001a0e5) camera2_autofocus_pane_g1_ParamLimits

0x0d69,	// (0x0000eb1c) popup_fixed_preview_cale_window_ParamLimits

0x0d69,	// (0x0000eb1c) popup_fixed_preview_cale_window

0xa82c,	// (0x000185df) navi_slider_pane_g3

0xa835,	// (0x000185e8) navi_slider_pane_g4

0xa83e,	// (0x000185f1) navi_slider_pane_g5

0xa82c,	// (0x000185df) navi_slider_pane_g6

0xa847,	// (0x000185fa) navi_slider_pane_g7

0xa968,	// (0x0001871b) mup_scale_pane_g3

0xa971,	// (0x00018724) mup_scale_pane_g4

0xa97a,	// (0x0001872d) mup_scale_pane_g5

0x3046,	// (0x00010df9) mup_scale_pane_g6

0x304f,	// (0x00010e02) mup_scale_pane_g7

0xa82c,	// (0x000185df) cams2_slider_pane_g3

0xbf7b,	// (0x00019d2e) cams2_slider_pane_g4

0xbf83,	// (0x00019d36) cams2_slider_pane_g5

0xa82c,	// (0x000185df) cams2_slider_pane_g6

0xbf8b,	// (0x00019d3e) cams2_slider_pane_g7

0xc1b9,	// (0x00019f6c) camera2_autofocus_pane_cp_g1

0xc516,	// (0x0001a2c9) bg_popup_preview_window_pane_cp02_ParamLimits

0xc516,	// (0x0001a2c9) bg_popup_preview_window_pane_cp02

0xc522,	// (0x0001a2d5) list_fp_cale_pane_ParamLimits

0xc522,	// (0x0001a2d5) list_fp_cale_pane

0xc52e,	// (0x0001a2e1) popup_fixed_preview_cale_window_t1_ParamLimits

0xc52e,	// (0x0001a2e1) popup_fixed_preview_cale_window_t1

0x5027,	// (0x00012dda) popup_fixed_preview_cale_window_t2_ParamLimits

0x5027,	// (0x00012dda) popup_fixed_preview_cale_window_t2

0x503c,	// (0x00012def) popup_fixed_preview_cale_window_t3_ParamLimits

0x503c,	// (0x00012def) popup_fixed_preview_cale_window_t3

0x0002,

0xf7c9,	// (0x0001d57c) popup_fixed_preview_cale_window_t_ParamLimits

0xf7c9,	// (0x0001d57c) popup_fixed_preview_cale_window_t

0x5051,	// (0x00012e04) list_single_fp_cale_pane_ParamLimits

0x5051,	// (0x00012e04) list_single_fp_cale_pane

0xc54c,	// (0x0001a2ff) list_single_fp_cale_pane_g1_ParamLimits

0xc54c,	// (0x0001a2ff) list_single_fp_cale_pane_g1

0xc558,	// (0x0001a30b) list_single_fp_cale_pane_g2_ParamLimits

0xc558,	// (0x0001a30b) list_single_fp_cale_pane_g2

0x0002,

0xf7d0,	// (0x0001d583) list_single_fp_cale_pane_g_ParamLimits

0xf7d0,	// (0x0001d583) list_single_fp_cale_pane_g

0xc571,	// (0x0001a324) list_single_fp_cale_pane_t1_ParamLimits

0xc571,	// (0x0001a324) list_single_fp_cale_pane_t1

0xc583,	// (0x0001a336) list_single_fp_cale_pane_t2_ParamLimits

0xc583,	// (0x0001a336) list_single_fp_cale_pane_t2

0x0001,

0xf7d7,	// (0x0001d58a) list_single_fp_cale_pane_t_ParamLimits

0xf7d7,	// (0x0001d58a) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x927e,	// (0x00017031) main_dialer_pane

0x5069,	// (0x00012e1c) aid_cell_size_keypad

0x5073,	// (0x00012e26) dialer_ne_pane

0x507b,	// (0x00012e2e) grid_dialer_command_1_pane

0x5083,	// (0x00012e36) grid_dialer_command_2_pane

0x508b,	// (0x00012e3e) grid_dialer_keypad_pane

0x509d,	// (0x00012e50) bg_popup_call_pane_cp06_ParamLimits

0x509d,	// (0x00012e50) bg_popup_call_pane_cp06

0x50a9,	// (0x00012e5c) dialer_ne_clear_pane_ParamLimits

0x50a9,	// (0x00012e5c) dialer_ne_clear_pane

0xc5b6,	// (0x0001a369) dialer_ne_pane_g1

0xc5be,	// (0x0001a371) dialer_ne_pane_t1_ParamLimits

0xc5be,	// (0x0001a371) dialer_ne_pane_t1

0x50b5,	// (0x00012e68) dialer_ne_pane_t2_ParamLimits

0x50b5,	// (0x00012e68) dialer_ne_pane_t2

0x50df,	// (0x00012e92) dialer_ne_pane_t3_ParamLimits

0x50df,	// (0x00012e92) dialer_ne_pane_t3

0x0002,

0xf7dc,	// (0x0001d58f) dialer_ne_pane_t_ParamLimits

0xf7dc,	// (0x0001d58f) dialer_ne_pane_t

0x510f,	// (0x00012ec2) dialer_ne_pane_t3_copy1_ParamLimits

0x510f,	// (0x00012ec2) dialer_ne_pane_t3_copy1

0x513e,	// (0x00012ef1) cell_dialer_keypad_pane_ParamLimits

0x513e,	// (0x00012ef1) cell_dialer_keypad_pane

0x5155,	// (0x00012f08) cell_dialer_command_1_pane_ParamLimits

0x5155,	// (0x00012f08) cell_dialer_command_1_pane

0x516b,	// (0x00012f1e) cell_dialer_command_2_pane_ParamLimits

0x516b,	// (0x00012f1e) cell_dialer_command_2_pane

0xc5d0,	// (0x0001a383) bg_button_pane_cp02_ParamLimits

0xc5d0,	// (0x0001a383) bg_button_pane_cp02

0x517a,	// (0x00012f2d) cell_dialer_keypad_pane_g1_ParamLimits

0x517a,	// (0x00012f2d) cell_dialer_keypad_pane_g1

0xc5d0,	// (0x0001a383) bg_button_pane_cp03_ParamLimits

0xc5d0,	// (0x0001a383) bg_button_pane_cp03

0x518f,	// (0x00012f42) cell_dialer_command_1_pane_g1_ParamLimits

0x518f,	// (0x00012f42) cell_dialer_command_1_pane_g1

0xc5dc,	// (0x0001a38f) bg_button_pane_cp04

0x51a3,	// (0x00012f56) cell_dialer_command_2_pane_g1

0xa812,	// (0x000185c5) bg_button_pane_cp06

0xc5e4,	// (0x0001a397) dialer_ne_clear_pane_g1

0x2b74,	// (0x00010927) navi_pane_g2

0x2ba2,	// (0x00010955) navi_pane_g3

0x0002,

0xf404,	// (0x0001d1b7) navi_pane_g

0x2bcb,	// (0x0001097e) navi_pane_mv_g2

0x2bf2,	// (0x000109a5) navi_pane_mv_g5

0x2bfa,	// (0x000109ad) navi_pane_mv_t1

0x9aa1,	// (0x00017854) main_clock2_pane

0x51dd,	// (0x00012f90) main_clock2_list_pane_ParamLimits

0x51dd,	// (0x00012f90) main_clock2_list_pane

0x5217,	// (0x00012fca) main_clock2_pane_t1_ParamLimits

0x5217,	// (0x00012fca) main_clock2_pane_t1

0x5255,	// (0x00013008) main_clock2_pane_t2_ParamLimits

0x5255,	// (0x00013008) main_clock2_pane_t2

0x0004,

0xf7e3,	// (0x0001d596) main_clock2_pane_t_ParamLimits

0xf7e3,	// (0x0001d596) main_clock2_pane_t

0x52f2,	// (0x000130a5) popup_clock_analogue_window_cp03_ParamLimits

0x52f2,	// (0x000130a5) popup_clock_analogue_window_cp03

0x5319,	// (0x000130cc) popup_clock_digital_window_cp02_ParamLimits

0x5319,	// (0x000130cc) popup_clock_digital_window_cp02

0x538e,	// (0x00013141) main_clock2_list_single_pane_ParamLimits

0x538e,	// (0x00013141) main_clock2_list_single_pane

0xa812,	// (0x000185c5) list_highlight_pane_cp05

0xc5ec,	// (0x0001a39f) main_clock2_list_single_pane_t1

0x1ae9,	// (0x0000f89c) popup_toolbar_window_cp04_ParamLimits

0x47b9,	// (0x0001256c) camera2_autofocus_pane_g2_ParamLimits

0x47b9,	// (0x0001256c) camera2_autofocus_pane_g2

0x47c5,	// (0x00012578) camera2_autofocus_pane_g3_ParamLimits

0x47c5,	// (0x00012578) camera2_autofocus_pane_g3

0x47d1,	// (0x00012584) camera2_autofocus_pane_g4_ParamLimits

0x47d1,	// (0x00012584) camera2_autofocus_pane_g4

0x47dd,	// (0x00012590) camera2_autofocus_pane_g5_ParamLimits

0x47dd,	// (0x00012590) camera2_autofocus_pane_g5

0x0004,

0xf72c,	// (0x0001d4df) camera2_autofocus_pane_g_ParamLimits

0xf72c,	// (0x0001d4df) camera2_autofocus_pane_g

0x49ca,	// (0x0001277d) camera2_autofocus_pane_cp_g2

0x49d2,	// (0x00012785) camera2_autofocus_pane_cp_g3

0x49da,	// (0x0001278d) camera2_autofocus_pane_cp_g4

0x49e2,	// (0x00012795) camera2_autofocus_pane_cp_g5

0x0004,

0xf792,	// (0x0001d545) camera2_autofocus_pane_cp_g

0x5095,	// (0x00012e48) popup_dialer_spcha_window

0x927e,	// (0x00017031) bg_popup_sub_pane_cp07

0xc5fa,	// (0x0001a3ad) list_spcha_pane

0xc602,	// (0x0001a3b5) list_single_spcha_pane_ParamLimits

0xc602,	// (0x0001a3b5) list_single_spcha_pane

0x927e,	// (0x00017031) list_highlight_pane_cp06

0xc613,	// (0x0001a3c6) list_single_spcha_pane_t1

0xb6f2,	// (0x000194a5) popup_call2_audio_out_window_g4_ParamLimits

0xb6f2,	// (0x000194a5) popup_call2_audio_out_window_g4

0x927e,	// (0x00017031) main_imed2_pane

0xbcd9,	// (0x00019a8c) popup_imed_adjust2_window

0x3b94,	// (0x00011947) popup_imed_trans_window_ParamLimits

0x3b94,	// (0x00011947) popup_imed_trans_window

0xbff5,	// (0x00019da8) popup_blid_sat_info2_window_t1

0xc003,	// (0x00019db6) popup_blid_sat_info2_window_t2

0x000a,

0xf6c1,	// (0x0001d474) popup_blid_sat_info2_window_t

0x5436,	// (0x000131e9) aid_size_cell_colour_35

0x5456,	// (0x00013209) aid_size_cell_colour_112

0x5476,	// (0x00013229) aid_size_cell_effect

0xbcb1,	// (0x00019a64) bg_tb_trans_pane_cp02

0xa260,	// (0x00018013) heading_imed_pane

0x5496,	// (0x00013249) listscroll_imed_pane

0xc621,	// (0x0001a3d4) heading_imed_pane_g1

0xc629,	// (0x0001a3dc) heading_imed_pane_t1

0xc637,	// (0x0001a3ea) grid_imed_colour_35_pane_ParamLimits

0xc637,	// (0x0001a3ea) grid_imed_colour_35_pane

0x54a2,	// (0x00013255) grid_imed_effect_pane

0xc652,	// (0x0001a405) list_imed_aspect_pane

0x54b7,	// (0x0001326a) scroll_pane_cp027_ParamLimits

0x54b7,	// (0x0001326a) scroll_pane_cp027

0x54c8,	// (0x0001327b) cell_imed_effect_pane_ParamLimits

0x54c8,	// (0x0001327b) cell_imed_effect_pane

0xc65a,	// (0x0001a40d) cell_imed_colour_pane_ParamLimits

0xc65a,	// (0x0001a40d) cell_imed_colour_pane

0xc69c,	// (0x0001a44f) cell_imed_colour_pane_g1_ParamLimits

0xc69c,	// (0x0001a44f) cell_imed_colour_pane_g1

0xc6ad,	// (0x0001a460) hgihlgiht_grid_pane_cp016_ParamLimits

0xc6ad,	// (0x0001a460) hgihlgiht_grid_pane_cp016

0x54ef,	// (0x000132a2) cell_imed_effect_pane_g1

0x54f7,	// (0x000132aa) grid_highlight_pane_cp017

0xc6be,	// (0x0001a471) list_imed_single_pane_ParamLimits

0xc6be,	// (0x0001a471) list_imed_single_pane

0x927e,	// (0x00017031) list_highlight_pane_cp07

0xc6d5,	// (0x0001a488) list_imed_aspect_pane_comp1_t1

0xbcb1,	// (0x00019a64) bg_tb_trans_pane_cp05

0xc6f7,	// (0x0001a4aa) popup_imed_adjust2_window_g1

0xc71e,	// (0x0001a4d1) popup_imed_adjust2_window_t1

0xc736,	// (0x0001a4e9) slider_imed_adjust_pane

0xc74a,	// (0x0001a4fd) slider_imed_adjust_pane_g1

0xc75a,	// (0x0001a50d) slider_imed_adjust_pane_g2

0xc76a,	// (0x0001a51d) slider_imed_adjust_pane_g3

0xc77b,	// (0x0001a52e) slider_imed_adjust_pane_g4

0x0003,

0xf800,	// (0x0001d5b3) slider_imed_adjust_pane_g

0x5500,	// (0x000132b3) aid_size_cell_clipart2

0x550c,	// (0x000132bf) grid_imed_clipart_pane

0xc78c,	// (0x0001a53f) scroll_pane_cp031

0x5516,	// (0x000132c9) cell_imed_clipart_pane_ParamLimits

0x5516,	// (0x000132c9) cell_imed_clipart_pane

0x553d,	// (0x000132f0) cell_imed_clipart_pane_g1

0x927e,	// (0x00017031) grid_highlight_pane_cp014

0x51f2,	// (0x00012fa5) main_clock2_pane_g1_ParamLimits

0x51f2,	// (0x00012fa5) main_clock2_pane_g1

0x5339,	// (0x000130ec) aid_call2_pane_cp10

0x534b,	// (0x000130fe) aid_call_pane_cp10

0xa747,	// (0x000184fa) popup_clock_analogue_window_cp10_g1

0xa747,	// (0x000184fa) popup_clock_analogue_window_cp10_g2

0x535d,	// (0x00013110) popup_clock_analogue_window_cp10_g3

0x535d,	// (0x00013110) popup_clock_analogue_window_cp10_g4

0xa747,	// (0x000184fa) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7ee,	// (0x0001d5a1) popup_clock_analogue_window_cp10_g

0x536f,	// (0x00013122) popup_clock_analogue_window_cp10_t1

0x53a0,	// (0x00013153) clock_digital_number_pane_cp10_ParamLimits

0x53a0,	// (0x00013153) clock_digital_number_pane_cp10

0x53b8,	// (0x0001316b) clock_digital_number_pane_cp11_ParamLimits

0x53b8,	// (0x0001316b) clock_digital_number_pane_cp11

0x53d0,	// (0x00013183) clock_digital_number_pane_cp12_ParamLimits

0x53d0,	// (0x00013183) clock_digital_number_pane_cp12

0x53e8,	// (0x0001319b) clock_digital_number_pane_cp13_ParamLimits

0x53e8,	// (0x0001319b) clock_digital_number_pane_cp13

0x5400,	// (0x000131b3) clock_digital_separator_pane_cp10_ParamLimits

0x5400,	// (0x000131b3) clock_digital_separator_pane_cp10

0x5418,	// (0x000131cb) popup_clock_digital_window_cp02_t1_ParamLimits

0x5418,	// (0x000131cb) popup_clock_digital_window_cp02_t1

0x9960,	// (0x00017713) clock_digital_number_pane_cp10_g1

0x9960,	// (0x00017713) clock_digital_number_pane_cp10_g2

0x0001,

0xf809,	// (0x0001d5bc) clock_digital_number_pane_cp10_g

0x9960,	// (0x00017713) clock_digital_separator_pane_cp10_g1

0x9960,	// (0x00017713) clock_digital_separator_pane_g2_cp10

0xa7e2,	// (0x00018595) navi_pane_vded_g4

0xa7eb,	// (0x0001859e) navi_pane_vded_g5

0xa7f4,	// (0x000185a7) navi_pane_vded_t1

0x927e,	// (0x00017031) main_vded_pane

0x5546,	// (0x000132f9) main_vded_pane_g1

0x5552,	// (0x00013305) main_vded_pane_g2

0x555c,	// (0x0001330f) main_vded_pane_g3

0x0002,

0xf80e,	// (0x0001d5c1) main_vded_pane_g

0x5566,	// (0x00013319) main_vded_pane_t1

0x5574,	// (0x00013327) main_vded_pane_t2

0x0001,

0xf815,	// (0x0001d5c8) main_vded_pane_t

0x5582,	// (0x00013335) vded_slider_pane

0x558c,	// (0x0001333f) vded_video_pane

0xc794,	// (0x0001a547) vded_video_pane_g1

0x5596,	// (0x00013349) vded_video_pane_g2

0xc1b9,	// (0x00019f6c) vded_video_pane_g3

0x0002,

0xf81a,	// (0x0001d5cd) vded_video_pane_g

0xc79e,	// (0x0001a551) vded_slider_pane_g1

0xbec6,	// (0x00019c79) vded_slider_pane_g2

0xc7a7,	// (0x0001a55a) vded_slider_pane_g3

0xc7b0,	// (0x0001a563) vded_slider_pane_g4

0xc7b9,	// (0x0001a56c) vded_slider_pane_g5

0x0004,

0xf821,	// (0x0001d5d4) vded_slider_pane_g

0x4f73,	// (0x00012d26) mup3_rocker_pane_ParamLimits

0x4f73,	// (0x00012d26) mup3_rocker_pane

0x559f,	// (0x00013352) mup3_control_keys_pane_g1

0x55a7,	// (0x0001335a) mup3_control_keys_pane_g2

0x55af,	// (0x00013362) mup3_control_keys_pane_g3

0x55b7,	// (0x0001336a) mup3_control_keys_pane_g4

0x0003,

0xf82c,	// (0x0001d5df) mup3_control_keys_pane_g

0x0da0,	// (0x0000eb53) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0da0,	// (0x0000eb53) popup_toolbar2_fixed_window_cp01

0x4fa7,	// (0x00012d5a) popup_toolbar2_fixed_window_cp02_ParamLimits

0x4fa7,	// (0x00012d5a) popup_toolbar2_fixed_window_cp02

0xb031,	// (0x00018de4) popup_call2_audio_second_window_t4_ParamLimits

0xb031,	// (0x00018de4) popup_call2_audio_second_window_t4

0xb55f,	// (0x00019312) popup_call2_audio_first_window_t6_ParamLimits

0xb55f,	// (0x00019312) popup_call2_audio_first_window_t6

0xb7f5,	// (0x000195a8) popup_call2_audio_out_window_t6_ParamLimits

0xb7f5,	// (0x000195a8) popup_call2_audio_out_window_t6

0x927e,	// (0x00017031) main_vitu_pane

0x55c7,	// (0x0001337a) aid_size_cell_itu_ParamLimits

0x55c7,	// (0x0001337a) aid_size_cell_itu

0x92ee,	// (0x000170a1) bg_popup_window_pane_cp08_ParamLimits

0x92ee,	// (0x000170a1) bg_popup_window_pane_cp08

0x55dd,	// (0x00013390) field_vitu_entry_pane_ParamLimits

0x55dd,	// (0x00013390) field_vitu_entry_pane

0x55f4,	// (0x000133a7) grid_vitu_function_pane_ParamLimits

0x55f4,	// (0x000133a7) grid_vitu_function_pane

0x560f,	// (0x000133c2) grid_vitu_itu_pane_ParamLimits

0x560f,	// (0x000133c2) grid_vitu_itu_pane

0x562d,	// (0x000133e0) cell_vitu_itu_pane_ParamLimits

0x562d,	// (0x000133e0) cell_vitu_itu_pane

0x5651,	// (0x00013404) cell_vitu_function_pane_ParamLimits

0x5651,	// (0x00013404) cell_vitu_function_pane

0x92ee,	// (0x000170a1) bg_popup_sub_pane_cp08_ParamLimits

0x92ee,	// (0x000170a1) bg_popup_sub_pane_cp08

0x566c,	// (0x0001341f) field_vitu_entry_pane_t1_ParamLimits

0x566c,	// (0x0001341f) field_vitu_entry_pane_t1

0xc7da,	// (0x0001a58d) field_vitu_entry_pane_t2_ParamLimits

0xc7da,	// (0x0001a58d) field_vitu_entry_pane_t2

0x0001,

0xf83a,	// (0x0001d5ed) field_vitu_entry_pane_t_ParamLimits

0xf83a,	// (0x0001d5ed) field_vitu_entry_pane_t

0xc7f7,	// (0x0001a5aa) bg_button_pane_cp05_ParamLimits

0xc7f7,	// (0x0001a5aa) bg_button_pane_cp05

0x568c,	// (0x0001343f) cell_vitu_itu_pane_g1

0x56a4,	// (0x00013457) cell_vitu_itu_pane_t1_ParamLimits

0x56a4,	// (0x00013457) cell_vitu_itu_pane_t1

0x56b6,	// (0x00013469) cell_vitu_itu_pane_t2_ParamLimits

0x56b6,	// (0x00013469) cell_vitu_itu_pane_t2

0x0002,

0xf83f,	// (0x0001d5f2) cell_vitu_itu_pane_t_ParamLimits

0xf83f,	// (0x0001d5f2) cell_vitu_itu_pane_t

0xc805,	// (0x0001a5b8) bg_button_pane_cp07

0x56eb,	// (0x0001349e) cell_vitu_function_pane_g1

0x9a33,	// (0x000177e6) main_calc_pane_g1

0x0be0,	// (0x0000e993) aid_visual_content_pane

0x927e,	// (0x00017031) main_vradio_pane

0x56f4,	// (0x000134a7) main_vradio_pane_g1_ParamLimits

0x56f4,	// (0x000134a7) main_vradio_pane_g1

0xc80f,	// (0x0001a5c2) main_vradio_pane_g2_ParamLimits

0xc80f,	// (0x0001a5c2) main_vradio_pane_g2

0x0001,

0xf846,	// (0x0001d5f9) main_vradio_pane_g_ParamLimits

0xf846,	// (0x0001d5f9) main_vradio_pane_g

0x570d,	// (0x000134c0) main_vradio_pane_t1_ParamLimits

0x570d,	// (0x000134c0) main_vradio_pane_t1

0x5722,	// (0x000134d5) main_vradio_pane_t2_ParamLimits

0x5722,	// (0x000134d5) main_vradio_pane_t2

0xc81c,	// (0x0001a5cf) main_vradio_pane_t3_ParamLimits

0xc81c,	// (0x0001a5cf) main_vradio_pane_t3

0x0002,

0xf84b,	// (0x0001d5fe) main_vradio_pane_t_ParamLimits

0xf84b,	// (0x0001d5fe) main_vradio_pane_t

0x5737,	// (0x000134ea) vradio_rocker_control_pane_ParamLimits

0x5737,	// (0x000134ea) vradio_rocker_control_pane

0x5749,	// (0x000134fc) vradio_station_info_pane_ParamLimits

0x5749,	// (0x000134fc) vradio_station_info_pane

0xc830,	// (0x0001a5e3) vradio_frequency_info_pane_ParamLimits

0xc830,	// (0x0001a5e3) vradio_frequency_info_pane

0xc1b9,	// (0x00019f6c) vradio_station_info_pane_g1

0xc83f,	// (0x0001a5f2) vradio_station_info_pane_t1_ParamLimits

0xc83f,	// (0x0001a5f2) vradio_station_info_pane_t1

0xc861,	// (0x0001a614) vradio_station_info_pane_t2_ParamLimits

0xc861,	// (0x0001a614) vradio_station_info_pane_t2

0x0001,

0xf852,	// (0x0001d605) vradio_station_info_pane_t_ParamLimits

0xf852,	// (0x0001d605) vradio_station_info_pane_t

0xc873,	// (0x0001a626) vradio_tuning_pane

0xc87b,	// (0x0001a62e) vradio_rocker_control_pane_g1

0xc883,	// (0x0001a636) vradio_rocker_control_pane_g2

0xc88b,	// (0x0001a63e) vradio_rocker_control_pane_g3

0xc893,	// (0x0001a646) vradio_rocker_control_pane_g4

0xc89b,	// (0x0001a64e) vradio_rocker_control_pane_g5

0x0004,

0xf857,	// (0x0001d60a) vradio_rocker_control_pane_g

0x575b,	// (0x0001350e) vradio_frequency_info_pane_g1

0xc8a3,	// (0x0001a656) vradio_frequency_info_pane_t1_ParamLimits

0xc8a3,	// (0x0001a656) vradio_frequency_info_pane_t1

0x5765,	// (0x00013518) vradio_tuning_pane_g1

0x5770,	// (0x00013523) vradio_tuning_pane_t1

0x92ac,	// (0x0001705f) area_side_right_pane_ParamLimits

0x92ac,	// (0x0001705f) area_side_right_pane

0xbc78,	// (0x00019a2b) status_small_pane_g1

0xbc80,	// (0x00019a33) status_small_pane_g2

0xbc89,	// (0x00019a3c) status_small_pane_g3

0xbc92,	// (0x00019a45) status_small_pane_g4

0x0003,

0xf617,	// (0x0001d3ca) status_small_pane_g

0xbc9b,	// (0x00019a4e) status_small_pane_t1

0x927e,	// (0x00017031) main_video3_pane

0xc8b7,	// (0x0001a66a) cams_zoom_vslider_pane

0xc8bf,	// (0x0001a672) image3_wide_pane_ParamLimits

0xc8bf,	// (0x0001a672) image3_wide_pane

0xc8d9,	// (0x0001a68c) image3_wide_small_pane

0xc8e5,	// (0x0001a698) main_video3_pane_g1_ParamLimits

0xc8e5,	// (0x0001a698) main_video3_pane_g1

0xc901,	// (0x0001a6b4) main_video3_pane_g2_ParamLimits

0xc901,	// (0x0001a6b4) main_video3_pane_g2

0x0001,

0xf862,	// (0x0001d615) main_video3_pane_g_ParamLimits

0xf862,	// (0x0001d615) main_video3_pane_g

0xc91d,	// (0x0001a6d0) main_video3_pane_t1_ParamLimits

0xc91d,	// (0x0001a6d0) main_video3_pane_t1

0xc948,	// (0x0001a6fb) main_video3_pane_t2_ParamLimits

0xc948,	// (0x0001a6fb) main_video3_pane_t2

0xc973,	// (0x0001a726) main_video3_pane_t3_ParamLimits

0xc973,	// (0x0001a726) main_video3_pane_t3

0x0002,

0xf867,	// (0x0001d61a) main_video3_pane_t_ParamLimits

0xf867,	// (0x0001d61a) main_video3_pane_t

0xc9a0,	// (0x0001a753) cams_zoom_vslider_pane_g1

0xc9a9,	// (0x0001a75c) cams_zoom_vslider_pane_g2

0x0001,

0xf86e,	// (0x0001d621) cams_zoom_vslider_pane_g

0xc9b1,	// (0x0001a764) small_slider_vertical_pane

0xc1b9,	// (0x00019f6c) small_slider_vertical_pane_g1

0xc1b9,	// (0x00019f6c) small_slider_vertical_pane_g2

0xc9b9,	// (0x0001a76c) small_slider_vertical_pane_g3

0x0002,

0xf873,	// (0x0001d626) small_slider_vertical_pane_g

0x927e,	// (0x00017031) main_hwr_training_pane

0xc9c2,	// (0x0001a775) hwr_training_instruct_pane_ParamLimits

0xc9c2,	// (0x0001a775) hwr_training_instruct_pane

0x577f,	// (0x00013532) hwr_training_navi_pane_ParamLimits

0x577f,	// (0x00013532) hwr_training_navi_pane

0x579e,	// (0x00013551) hwr_training_write_pane_ParamLimits

0x579e,	// (0x00013551) hwr_training_write_pane

0x927e,	// (0x00017031) bg_frame_shadow_pane

0xc9f9,	// (0x0001a7ac) hwr_training_write_pane_g1

0xca01,	// (0x0001a7b4) hwr_training_write_pane_g2

0xca09,	// (0x0001a7bc) hwr_training_write_pane_g3

0xca11,	// (0x0001a7c4) hwr_training_write_pane_g4

0xca19,	// (0x0001a7cc) hwr_training_write_pane_g5

0xca21,	// (0x0001a7d4) hwr_training_write_pane_g6

0xca29,	// (0x0001a7dc) hwr_training_write_pane_g7

0x0006,

0xf87a,	// (0x0001d62d) hwr_training_write_pane_g

0xca31,	// (0x0001a7e4) hwr_training_navi_pane_g1_ParamLimits

0xca31,	// (0x0001a7e4) hwr_training_navi_pane_g1

0xca43,	// (0x0001a7f6) hwr_training_navi_pane_g2_ParamLimits

0xca43,	// (0x0001a7f6) hwr_training_navi_pane_g2

0xca55,	// (0x0001a808) hwr_training_navi_pane_g3_ParamLimits

0xca55,	// (0x0001a808) hwr_training_navi_pane_g3

0xca65,	// (0x0001a818) hwr_training_navi_pane_g4_ParamLimits

0xca65,	// (0x0001a818) hwr_training_navi_pane_g4

0x0004,

0xf889,	// (0x0001d63c) hwr_training_navi_pane_g_ParamLimits

0xf889,	// (0x0001d63c) hwr_training_navi_pane_g

0xca72,	// (0x0001a825) hwr_training_navi_pane_t1

0x57e8,	// (0x0001359b) list_single_hwr_training_instruct_pane_ParamLimits

0x57e8,	// (0x0001359b) list_single_hwr_training_instruct_pane

0xca8e,	// (0x0001a841) list_single_hwr_training_instruct_pane_t1

0xc0f9,	// (0x00019eac) bg_frame_shadow_pane_g1

0xca9d,	// (0x0001a850) bg_frame_shadow_pane_g2

0xcaa5,	// (0x0001a858) bg_frame_shadow_pane_g3

0xcaad,	// (0x0001a860) bg_frame_shadow_pane_g4

0xcab5,	// (0x0001a868) bg_frame_shadow_pane_g5

0xcabd,	// (0x0001a870) bg_frame_shadow_pane_g6

0xcac5,	// (0x0001a878) bg_frame_shadow_pane_g7

0x9b9a,	// (0x0001794d) bg_frame_shadow_pane_g8

0x0007,

0xf894,	// (0x0001d647) bg_frame_shadow_pane_g

0x927e,	// (0x00017031) main_video_tele_dialer_pane

0x5805,	// (0x000135b8) aid_size_cell_video_keypad_ParamLimits

0x5805,	// (0x000135b8) aid_size_cell_video_keypad

0x581f,	// (0x000135d2) grid_video_dialer_keypad_pane_ParamLimits

0x581f,	// (0x000135d2) grid_video_dialer_keypad_pane

0x586b,	// (0x0001361e) video_down_pane_cp_ParamLimits

0x586b,	// (0x0001361e) video_down_pane_cp

0x589b,	// (0x0001364e) cell_video_dialer_keypad_pane_ParamLimits

0x589b,	// (0x0001364e) cell_video_dialer_keypad_pane

0xcacd,	// (0x0001a880) bg_button_pane_cp08_ParamLimits

0xcacd,	// (0x0001a880) bg_button_pane_cp08

0x58bd,	// (0x00013670) cell_video_dialer_keypad_pane_g1_ParamLimits

0x58bd,	// (0x00013670) cell_video_dialer_keypad_pane_g1

0x4f5d,	// (0x00012d10) mup3_rocker2_pane_ParamLimits

0x4f5d,	// (0x00012d10) mup3_rocker2_pane

0xc1b9,	// (0x00019f6c) mup3_rocker2_pane_g1

0x3a7d,	// (0x00011830) main_dialer2_pane

0x927e,	// (0x00017031) main_mp4_pane

0xcae1,	// (0x0001a894) main_mp4_pane_g1_ParamLimits

0xcae1,	// (0x0001a894) main_mp4_pane_g1

0xcae1,	// (0x0001a894) main_mp4_pane_g2_ParamLimits

0xcae1,	// (0x0001a894) main_mp4_pane_g2

0x58f8,	// (0x000136ab) main_mp4_pane_g3_ParamLimits

0x58f8,	// (0x000136ab) main_mp4_pane_g3

0xcaef,	// (0x0001a8a2) main_mp4_pane_g4_ParamLimits

0xcaef,	// (0x0001a8a2) main_mp4_pane_g4

0xcb17,	// (0x0001a8ca) main_mp4_pane_g5_ParamLimits

0xcb17,	// (0x0001a8ca) main_mp4_pane_g5

0x0005,

0xf8b4,	// (0x0001d667) main_mp4_pane_g_ParamLimits

0xf8b4,	// (0x0001d667) main_mp4_pane_g

0xcb67,	// (0x0001a91a) main_mp4_pane_t1_ParamLimits

0xcb67,	// (0x0001a91a) main_mp4_pane_t1

0xcbc3,	// (0x0001a976) main_mp4_pane_t2_ParamLimits

0xcbc3,	// (0x0001a976) main_mp4_pane_t2

0xcc15,	// (0x0001a9c8) main_mp4_pane_t3_ParamLimits

0xcc15,	// (0x0001a9c8) main_mp4_pane_t3

0xcc35,	// (0x0001a9e8) main_mp4_pane_t4_ParamLimits

0xcc35,	// (0x0001a9e8) main_mp4_pane_t4

0x0003,

0xf8c1,	// (0x0001d674) main_mp4_pane_t_ParamLimits

0xf8c1,	// (0x0001d674) main_mp4_pane_t

0xcc79,	// (0x0001aa2c) mp4_progress_pane_ParamLimits

0xcc79,	// (0x0001aa2c) mp4_progress_pane

0xccc3,	// (0x0001aa76) mp4_rocker_pane_ParamLimits

0xccc3,	// (0x0001aa76) mp4_rocker_pane

0xcceb,	// (0x0001aa9e) mp4_progress_pane_t1

0xcd04,	// (0x0001aab7) mp4_progress_pane_t2

0x0001,

0xf8ca,	// (0x0001d67d) mp4_progress_pane_t

0xcd1d,	// (0x0001aad0) mup_progress_pane_cp04

0xc1b9,	// (0x00019f6c) mp4_rocker_pane_g1

0x5934,	// (0x000136e7) aid_cell_size_keypad2_ParamLimits

0x5934,	// (0x000136e7) aid_cell_size_keypad2

0x594a,	// (0x000136fd) dialer2_ne_pane_ParamLimits

0x594a,	// (0x000136fd) dialer2_ne_pane

0x5964,	// (0x00013717) grid_dialer2_keypad_pane_ParamLimits

0x5964,	// (0x00013717) grid_dialer2_keypad_pane

0xbf9c,	// (0x00019d4f) bg_popup_call_pane_cp07_ParamLimits

0xbf9c,	// (0x00019d4f) bg_popup_call_pane_cp07

0x5982,	// (0x00013735) dialer2_ne_pane_t1_ParamLimits

0x5982,	// (0x00013735) dialer2_ne_pane_t1

0x59c1,	// (0x00013774) cell_dialer2_keypad_pane_ParamLimits

0x59c1,	// (0x00013774) cell_dialer2_keypad_pane

0xcd3b,	// (0x0001aaee) bg_button_pane_pane_cp04_ParamLimits

0xcd3b,	// (0x0001aaee) bg_button_pane_pane_cp04

0x59e5,	// (0x00013798) cell_dialer2_keypad_pane_g1_ParamLimits

0x59e5,	// (0x00013798) cell_dialer2_keypad_pane_g1

0x19bd,	// (0x0000f770) aid_placing_vt_set_content_ParamLimits

0x19bd,	// (0x0000f770) aid_placing_vt_set_content

0x19e5,	// (0x0000f798) aid_placing_vt_set_title_ParamLimits

0x19e5,	// (0x0000f798) aid_placing_vt_set_title

0x927e,	// (0x00017031) main_image3_pane

0x5aab,	// (0x0001385e) area_side_right_pane_cp01_ParamLimits

0x5aab,	// (0x0001385e) area_side_right_pane_cp01

0xcae1,	// (0x0001a894) main_image3_pane_g1_ParamLimits

0xcae1,	// (0x0001a894) main_image3_pane_g1

0x5ac2,	// (0x00013875) main_image3_pane_g2_ParamLimits

0x5ac2,	// (0x00013875) main_image3_pane_g2

0x5aea,	// (0x0001389d) main_image3_pane_g3_ParamLimits

0x5aea,	// (0x0001389d) main_image3_pane_g3

0x5b14,	// (0x000138c7) main_image3_pane_g4_ParamLimits

0x5b14,	// (0x000138c7) main_image3_pane_g4

0x0003,

0xf8d9,	// (0x0001d68c) main_image3_pane_g_ParamLimits

0xf8d9,	// (0x0001d68c) main_image3_pane_g

0x5b3e,	// (0x000138f1) main_image3_pane_t1_ParamLimits

0x5b3e,	// (0x000138f1) main_image3_pane_t1

0x5b96,	// (0x00013949) main_image3_pane_t2_ParamLimits

0x5b96,	// (0x00013949) main_image3_pane_t2

0x5be8,	// (0x0001399b) main_image3_pane_t3_ParamLimits

0x5be8,	// (0x0001399b) main_image3_pane_t3

0x0003,

0xf8e2,	// (0x0001d695) main_image3_pane_t_ParamLimits

0xf8e2,	// (0x0001d695) main_image3_pane_t

0x92ee,	// (0x000170a1) grid_sctrl_middle_pane_cp01_ParamLimits

0x92ee,	// (0x000170a1) grid_sctrl_middle_pane_cp01

0x5c70,	// (0x00013a23) cell_sctrl_middle_pane_cp01_ParamLimits

0x5c70,	// (0x00013a23) cell_sctrl_middle_pane_cp01

0x5c8d,	// (0x00013a40) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x5c8d,	// (0x00013a40) cell_sctrl_middle_pane_cp01_g1

0x927e,	// (0x00017031) main_call4_pane

0x5ca3,	// (0x00013a56) aid_size_button_call4_ParamLimits

0x5ca3,	// (0x00013a56) aid_size_button_call4

0x5cd4,	// (0x00013a87) call4_windows_pane_ParamLimits

0x5cd4,	// (0x00013a87) call4_windows_pane

0x5cf4,	// (0x00013aa7) grid_call4_button_pane_ParamLimits

0x5cf4,	// (0x00013aa7) grid_call4_button_pane

0xcd79,	// (0x0001ab2c) call4_windows_conf_pane

0xcd8e,	// (0x0001ab41) popup_call4_audio_first_window_ParamLimits

0xcd8e,	// (0x0001ab41) popup_call4_audio_first_window

0xcdda,	// (0x0001ab8d) popup_call4_audio_second_window_ParamLimits

0xcdda,	// (0x0001ab8d) popup_call4_audio_second_window

0xcdee,	// (0x0001aba1) popup_call4_audio_wait_window_ParamLimits

0xcdee,	// (0x0001aba1) popup_call4_audio_wait_window

0x5d21,	// (0x00013ad4) cell_call4_button_pane_ParamLimits

0x5d21,	// (0x00013ad4) cell_call4_button_pane

0x5d4a,	// (0x00013afd) bg_button_pane_cp09_ParamLimits

0x5d4a,	// (0x00013afd) bg_button_pane_cp09

0x5d56,	// (0x00013b09) cell_call4_button_pane_g1_ParamLimits

0x5d56,	// (0x00013b09) cell_call4_button_pane_g1

0x5d7c,	// (0x00013b2f) cell_call4_button_pane_t1_ParamLimits

0x5d7c,	// (0x00013b2f) cell_call4_button_pane_t1

0xce36,	// (0x0001abe9) popup_call4_audio_conf_window_ParamLimits

0xce36,	// (0x0001abe9) popup_call4_audio_conf_window

0x4fbd,	// (0x00012d70) mup3_progress_pane_t1_ParamLimits

0x4fdc,	// (0x00012d8f) mup3_progress_pane_t2_ParamLimits

0xc4d3,	// (0x0001a286) mup3_progress_pane_t3_ParamLimits

0xf7bb,	// (0x0001d56e) mup3_progress_pane_t_ParamLimits

0xc4f0,	// (0x0001a2a3) mup_progress_pane_cp03_ParamLimits

0x55bf,	// (0x00013372) mup3_control_keys_pane_g4_copy1

0xcca7,	// (0x0001aa5a) mp4_rocker2_pane_ParamLimits

0xcca7,	// (0x0001aa5a) mp4_rocker2_pane

0xce4a,	// (0x0001abfd) mp4_rocker2_pane_g1

0xce52,	// (0x0001ac05) mp4_rocker2_pane_g2

0xce5a,	// (0x0001ac0d) mp4_rocker2_pane_g3

0xce62,	// (0x0001ac15) mp4_rocker2_pane_g4

0xce6a,	// (0x0001ac1d) mp4_rocker2_pane_g5

0x0004,

0xf8eb,	// (0x0001d69e) mp4_rocker2_pane_g

0x927e,	// (0x00017031) main_camera4_pane

0x927e,	// (0x00017031) main_video4_pane

0x5839,	// (0x000135ec) main_video_tele_dialer_pane_t1_ParamLimits

0x5839,	// (0x000135ec) main_video_tele_dialer_pane_t1

0x5852,	// (0x00013605) main_video_tele_dialer_pane_t2_ParamLimits

0x5852,	// (0x00013605) main_video_tele_dialer_pane_t2

0x0001,

0xf8a5,	// (0x0001d658) main_video_tele_dialer_pane_t_ParamLimits

0xf8a5,	// (0x0001d658) main_video_tele_dialer_pane_t

0x5dbe,	// (0x00013b71) cam4_autofocus_pane_ParamLimits

0x5dbe,	// (0x00013b71) cam4_autofocus_pane

0x5dd4,	// (0x00013b87) cam4_image_uncrop_pane_ParamLimits

0x5dd4,	// (0x00013b87) cam4_image_uncrop_pane

0x5dee,	// (0x00013ba1) cam4_indicators_pane_ParamLimits

0x5dee,	// (0x00013ba1) cam4_indicators_pane

0x5e19,	// (0x00013bcc) main_camera4_pane_g1_ParamLimits

0x5e19,	// (0x00013bcc) main_camera4_pane_g1

0x5e2c,	// (0x00013bdf) main_camera4_pane_g2_ParamLimits

0x5e2c,	// (0x00013bdf) main_camera4_pane_g2

0x5e3f,	// (0x00013bf2) main_camera4_pane_g3_ParamLimits

0x5e3f,	// (0x00013bf2) main_camera4_pane_g3

0x5e52,	// (0x00013c05) main_camera4_pane_g4_ParamLimits

0x5e52,	// (0x00013c05) main_camera4_pane_g4

0x5e65,	// (0x00013c18) main_camera4_pane_g5_ParamLimits

0x5e65,	// (0x00013c18) main_camera4_pane_g5

0x0005,

0xf8f6,	// (0x0001d6a9) main_camera4_pane_g_ParamLimits

0xf8f6,	// (0x0001d6a9) main_camera4_pane_g

0x5e89,	// (0x00013c3c) main_camera4_pane_t1_ParamLimits

0x5e89,	// (0x00013c3c) main_camera4_pane_t1

0xc420,	// (0x0001a1d3) bg_tb_trans_pane_cp06

0xce96,	// (0x0001ac49) cam4_indicators_pane_g1

0xcea7,	// (0x0001ac5a) cam4_indicators_pane_g2

0x0002,

0xf911,	// (0x0001d6c4) cam4_indicators_pane_g

0xcec5,	// (0x0001ac78) cam4_indicators_pane_t1

0x5eed,	// (0x00013ca0) main_video4_pane_g1_ParamLimits

0x5eed,	// (0x00013ca0) main_video4_pane_g1

0x5f00,	// (0x00013cb3) main_video4_pane_g2_ParamLimits

0x5f00,	// (0x00013cb3) main_video4_pane_g2

0x5f14,	// (0x00013cc7) main_video4_pane_g3_ParamLimits

0x5f14,	// (0x00013cc7) main_video4_pane_g3

0x5f28,	// (0x00013cdb) main_video4_pane_g4_ParamLimits

0x5f28,	// (0x00013cdb) main_video4_pane_g4

0x0004,

0xf918,	// (0x0001d6cb) main_video4_pane_g_ParamLimits

0xf918,	// (0x0001d6cb) main_video4_pane_g

0x5f50,	// (0x00013d03) vid4_indicators_pane_ParamLimits

0x5f50,	// (0x00013d03) vid4_indicators_pane

0x5f82,	// (0x00013d35) video4_image_uncrop_cif_pane_ParamLimits

0x5f82,	// (0x00013d35) video4_image_uncrop_cif_pane

0x5f9c,	// (0x00013d4f) video4_image_uncrop_nhd_pane_ParamLimits

0x5f9c,	// (0x00013d4f) video4_image_uncrop_nhd_pane

0x5dd4,	// (0x00013b87) video4_image_uncrop_vga_pane_ParamLimits

0x5dd4,	// (0x00013b87) video4_image_uncrop_vga_pane

0xca80,	// (0x0001a833) bg_tb_trans_pane_cp07

0x5fb0,	// (0x00013d63) vid4_indicators_pane_g1

0x5fbd,	// (0x00013d70) vid4_indicators_pane_g2

0x5fca,	// (0x00013d7d) vid4_indicators_pane_g3

0x0004,

0xf923,	// (0x0001d6d6) vid4_indicators_pane_g

0x5fef,	// (0x00013da2) vid4_indicators_pane_t1

0x6001,	// (0x00013db4) cam4_autofocus_pane_g1

0x6009,	// (0x00013dbc) cam4_autofocus_pane_g2

0x6011,	// (0x00013dc4) cam4_autofocus_pane_g3

0x0002,

0xf92e,	// (0x0001d6e1) cam4_autofocus_pane_g

0x6019,	// (0x00013dcc) cam4_autofocus_pane_g3_copy1

0x587f,	// (0x00013632) video_down_pane_cp_t1

0x588d,	// (0x00013640) video_down_pane_cp_t2

0x0001,

0xf8aa,	// (0x0001d65d) video_down_pane_cp_t

0x92ee,	// (0x000170a1) popup_vitu2_window_ParamLimits

0x92ee,	// (0x000170a1) popup_vitu2_window

0x6021,	// (0x00013dd4) aid_size_cell2_itu2_ParamLimits

0x6021,	// (0x00013dd4) aid_size_cell2_itu2

0x6047,	// (0x00013dfa) aid_size_cell_itu2_ParamLimits

0x6047,	// (0x00013dfa) aid_size_cell_itu2

0x60a3,	// (0x00013e56) bg_popup_window_pane_cp09_ParamLimits

0x60a3,	// (0x00013e56) bg_popup_window_pane_cp09

0x60b1,	// (0x00013e64) field_vitu2_entry_pane_ParamLimits

0x60b1,	// (0x00013e64) field_vitu2_entry_pane

0x60d7,	// (0x00013e8a) grid_vitu2_function_pane_ParamLimits

0x60d7,	// (0x00013e8a) grid_vitu2_function_pane

0x6128,	// (0x00013edb) grid_vitu2_itu_pane_ParamLimits

0x6128,	// (0x00013edb) grid_vitu2_itu_pane

0x61b9,	// (0x00013f6c) cell_vitu2_itu_pane_ParamLimits

0x61b9,	// (0x00013f6c) cell_vitu2_itu_pane

0x61dd,	// (0x00013f90) cell_vitu2_function_pane_ParamLimits

0x61dd,	// (0x00013f90) cell_vitu2_function_pane

0xceef,	// (0x0001aca2) bg_popup_call_pane_cp08_ParamLimits

0xceef,	// (0x0001aca2) bg_popup_call_pane_cp08

0xcf08,	// (0x0001acbb) field_vitu2_entry_pane_g1

0xcf14,	// (0x0001acc7) field_vitu2_entry_pane_g2

0x0002,

0xf935,	// (0x0001d6e8) field_vitu2_entry_pane_g

0xcf2e,	// (0x0001ace1) field_vitu2_entry_pane_t1_ParamLimits

0xcf2e,	// (0x0001ace1) field_vitu2_entry_pane_t1

0xcf5f,	// (0x0001ad12) field_vitu2_entry_pane_t2_ParamLimits

0xcf5f,	// (0x0001ad12) field_vitu2_entry_pane_t2

0x0001,

0xf93c,	// (0x0001d6ef) field_vitu2_entry_pane_t_ParamLimits

0xf93c,	// (0x0001d6ef) field_vitu2_entry_pane_t

0x621c,	// (0x00013fcf) bg_button_pane_cp010_ParamLimits

0x621c,	// (0x00013fcf) bg_button_pane_cp010

0x622a,	// (0x00013fdd) cell_vitu2_itu_pane_g1

0x6248,	// (0x00013ffb) cell_vitu2_itu_pane_t1_ParamLimits

0x6248,	// (0x00013ffb) cell_vitu2_itu_pane_t1

0x62ae,	// (0x00014061) cell_vitu2_itu_pane_t2_ParamLimits

0x62ae,	// (0x00014061) cell_vitu2_itu_pane_t2

0x0002,

0xf946,	// (0x0001d6f9) cell_vitu2_itu_pane_t_ParamLimits

0xf946,	// (0x0001d6f9) cell_vitu2_itu_pane_t

0x92ee,	// (0x000170a1) bg_button_pane_cp011

0x638a,	// (0x0001413d) cell_vitu2_function_pane_g1

0x927e,	// (0x00017031) main_myfav_hc_pane

0x5c38,	// (0x000139eb) popup_image3_note_pane_ParamLimits

0x5c38,	// (0x000139eb) popup_image3_note_pane

0x5c54,	// (0x00013a07) popup_image3_tool_bar_pane_ParamLimits

0x5c54,	// (0x00013a07) popup_image3_tool_bar_pane

0x6332,	// (0x000140e5) cell_vitu2_itu_pane_t3_ParamLimits

0x6332,	// (0x000140e5) cell_vitu2_itu_pane_t3

0x927e,	// (0x00017031) bg_popup_trans_pane

0xcf84,	// (0x0001ad37) grid_image3_tool_bar_pane

0xcf8e,	// (0x0001ad41) bg_popup_trans_pane_g1

0xa060,	// (0x00017e13) bg_popup_trans_pane_g2

0xcf96,	// (0x0001ad49) bg_popup_trans_pane_g3

0xcf9e,	// (0x0001ad51) bg_popup_trans_pane_g4

0xcfa6,	// (0x0001ad59) bg_popup_trans_pane_g5

0xcfae,	// (0x0001ad61) bg_popup_trans_pane_g6

0xcfb6,	// (0x0001ad69) bg_popup_trans_pane_g7

0xcfbe,	// (0x0001ad71) bg_popup_trans_pane_g8

0xa040,	// (0x00017df3) bg_popup_trans_pane_g9

0x0008,

0xf94d,	// (0x0001d700) bg_popup_trans_pane_g

0xcfc6,	// (0x0001ad79) cell_image3_tool_bar_pane_ParamLimits

0xcfc6,	// (0x0001ad79) cell_image3_tool_bar_pane

0xc1b9,	// (0x00019f6c) cell_image3_tool_bar_pane_g1

0x927e,	// (0x00017031) bg_popup_trans_pane_cp1

0xcfda,	// (0x0001ad8d) popup_image3_note_pane_t1

0xcfe8,	// (0x0001ad9b) popup_image3_note_pane_t2

0xcff6,	// (0x0001ada9) popup_image3_note_pane_t3

0x0002,

0xf960,	// (0x0001d713) popup_image3_note_pane_t

0xd004,	// (0x0001adb7) popup_image3_note_pane_t3_copy1

0x639e,	// (0x00014151) bg_myfav_hc_instruction_pane_ParamLimits

0x639e,	// (0x00014151) bg_myfav_hc_instruction_pane

0x63b4,	// (0x00014167) cell_myfav_contact_pane_ParamLimits

0x63b4,	// (0x00014167) cell_myfav_contact_pane

0x63d0,	// (0x00014183) cell_myfav_contact_pane_cp1_ParamLimits

0x63d0,	// (0x00014183) cell_myfav_contact_pane_cp1

0x63e8,	// (0x0001419b) cell_myfav_contact_pane_cp2_ParamLimits

0x63e8,	// (0x0001419b) cell_myfav_contact_pane_cp2

0x6400,	// (0x000141b3) cell_myfav_contact_pane_cp3_ParamLimits

0x6400,	// (0x000141b3) cell_myfav_contact_pane_cp3

0x6417,	// (0x000141ca) cell_myfav_contact_pane_cp4_ParamLimits

0x6417,	// (0x000141ca) cell_myfav_contact_pane_cp4

0x642f,	// (0x000141e2) cell_myfav_contact_pane_cp5_ParamLimits

0x642f,	// (0x000141e2) cell_myfav_contact_pane_cp5

0x6443,	// (0x000141f6) cell_myfav_contact_pane_cp6_ParamLimits

0x6443,	// (0x000141f6) cell_myfav_contact_pane_cp6

0x6459,	// (0x0001420c) cell_myfav_contact_pane_cp7_ParamLimits

0x6459,	// (0x0001420c) cell_myfav_contact_pane_cp7

0xd012,	// (0x0001adc5) listscroll_gen_pane_cp05

0x6473,	// (0x00014226) main_myfav_hc_pane_g1_ParamLimits

0x6473,	// (0x00014226) main_myfav_hc_pane_g1

0x648d,	// (0x00014240) main_myfav_hc_pane_g2_ParamLimits

0x648d,	// (0x00014240) main_myfav_hc_pane_g2

0x0002,

0xf967,	// (0x0001d71a) main_myfav_hc_pane_g_ParamLimits

0xf967,	// (0x0001d71a) main_myfav_hc_pane_g

0x64bf,	// (0x00014272) main_myfav_hc_pane_t1_ParamLimits

0x64bf,	// (0x00014272) main_myfav_hc_pane_t1

0xd01b,	// (0x0001adce) main_myfav_hc_pane_t2_ParamLimits

0xd01b,	// (0x0001adce) main_myfav_hc_pane_t2

0xd02d,	// (0x0001ade0) main_myfav_hc_pane_t3_ParamLimits

0xd02d,	// (0x0001ade0) main_myfav_hc_pane_t3

0x64d6,	// (0x00014289) main_myfav_hc_pane_t4_ParamLimits

0x64d6,	// (0x00014289) main_myfav_hc_pane_t4

0x0004,

0xf96e,	// (0x0001d721) main_myfav_hc_pane_t_ParamLimits

0xf96e,	// (0x0001d721) main_myfav_hc_pane_t

0xc1b9,	// (0x00019f6c) bg_myfav_hc_instruction_pane_g1

0xd03f,	// (0x0001adf2) cell_myfav_contact_pane_g1_ParamLimits

0xd03f,	// (0x0001adf2) cell_myfav_contact_pane_g1

0xd03f,	// (0x0001adf2) cell_myfav_contact_pane_g2_ParamLimits

0xd03f,	// (0x0001adf2) cell_myfav_contact_pane_g2

0xd04b,	// (0x0001adfe) cell_myfav_contact_pane_g3_ParamLimits

0xd04b,	// (0x0001adfe) cell_myfav_contact_pane_g3

0xc4bd,	// (0x0001a270) cell_myfav_contact_pane_g4_ParamLimits

0xc4bd,	// (0x0001a270) cell_myfav_contact_pane_g4

0xd058,	// (0x0001ae0b) cell_myfav_contact_pane_g5_ParamLimits

0xd058,	// (0x0001ae0b) cell_myfav_contact_pane_g5

0x0004,

0xf979,	// (0x0001d72c) cell_myfav_contact_pane_g_ParamLimits

0xf979,	// (0x0001d72c) cell_myfav_contact_pane_g

0x64a7,	// (0x0001425a) main_myfav_hc_pane_g3_ParamLimits

0x64a7,	// (0x0001425a) main_myfav_hc_pane_g3

0x0d02,	// (0x0000eab5) popup_adpt_find_window

0x64fe,	// (0x000142b1) afind_page_pane_ParamLimits

0x64fe,	// (0x000142b1) afind_page_pane

0x6513,	// (0x000142c6) aid_size_cell_afind_ParamLimits

0x6513,	// (0x000142c6) aid_size_cell_afind

0x6531,	// (0x000142e4) bg_popup_sub_pane_cp09_ParamLimits

0x6531,	// (0x000142e4) bg_popup_sub_pane_cp09

0x653e,	// (0x000142f1) find_pane_cp01_ParamLimits

0x653e,	// (0x000142f1) find_pane_cp01

0xd064,	// (0x0001ae17) grid_afind_control_pane_ParamLimits

0xd064,	// (0x0001ae17) grid_afind_control_pane

0x654b,	// (0x000142fe) grid_afind_pane_ParamLimits

0x654b,	// (0x000142fe) grid_afind_pane

0x656d,	// (0x00014320) cell_afind_pane_ParamLimits

0x656d,	// (0x00014320) cell_afind_pane

0xc1b9,	// (0x00019f6c) afind_page_pane_g1

0x65ce,	// (0x00014381) afind_page_pane_g2

0x65d7,	// (0x0001438a) afind_page_pane_g3

0x0002,

0xf984,	// (0x0001d737) afind_page_pane_g

0x65e0,	// (0x00014393) afind_page_pane_t1

0xd078,	// (0x0001ae2b) cell_afind_grid_control_pane_ParamLimits

0xd078,	// (0x0001ae2b) cell_afind_grid_control_pane

0xcd3b,	// (0x0001aaee) bg_button_pane_cp69_ParamLimits

0xcd3b,	// (0x0001aaee) bg_button_pane_cp69

0x6600,	// (0x000143b3) cell_afind_pane_g1_ParamLimits

0x6600,	// (0x000143b3) cell_afind_pane_g1

0x660d,	// (0x000143c0) cell_afind_pane_t1_ParamLimits

0x660d,	// (0x000143c0) cell_afind_pane_t1

0x9d9c,	// (0x00017b4f) bg_button_pane_cp72

0xd087,	// (0x0001ae3a) cell_afind_grid_control_pane_g1

0x3540,	// (0x000112f3) aid_image_placing_area_ParamLimits

0x3540,	// (0x000112f3) aid_image_placing_area

0xc7c2,	// (0x0001a575) field_vitu_entry_pane_g1_ParamLimits

0xc7c2,	// (0x0001a575) field_vitu_entry_pane_g1

0xc7ce,	// (0x0001a581) field_vitu_entry_pane_g2_ParamLimits

0xc7ce,	// (0x0001a581) field_vitu_entry_pane_g2

0x0001,

0xf835,	// (0x0001d5e8) field_vitu_entry_pane_g_ParamLimits

0xf835,	// (0x0001d5e8) field_vitu_entry_pane_g

0x568c,	// (0x0001343f) cell_vitu_itu_pane_g1_ParamLimits

0x56ce,	// (0x00013481) cell_vitu_itu_pane_t3_ParamLimits

0x56ce,	// (0x00013481) cell_vitu_itu_pane_t3

0xcceb,	// (0x0001aa9e) mp4_progress_pane_t1_ParamLimits

0xcd04,	// (0x0001aab7) mp4_progress_pane_t2_ParamLimits

0xf8ca,	// (0x0001d67d) mp4_progress_pane_t_ParamLimits

0xcd1d,	// (0x0001aad0) mup_progress_pane_cp04_ParamLimits

0x64ea,	// (0x0001429d) main_myfav_hc_pane_t5_ParamLimits

0x64ea,	// (0x0001429d) main_myfav_hc_pane_t5

0x92a4,	// (0x00017057) aid_zoom_text_primary

0x0d02,	// (0x0000eab5) popup_adpt_find_window_ParamLimits

0x92ee,	// (0x000170a1) main_cam_set_pane

0x5e05,	// (0x00013bb8) cam4_zoom_pane_ParamLimits

0x5e05,	// (0x00013bb8) cam4_zoom_pane

0x661f,	// (0x000143d2) main_cam_set_pane_g1_ParamLimits

0x661f,	// (0x000143d2) main_cam_set_pane_g1

0x662d,	// (0x000143e0) main_cam_set_pane_g2_ParamLimits

0x662d,	// (0x000143e0) main_cam_set_pane_g2

0x0001,

0xf98b,	// (0x0001d73e) main_cam_set_pane_g_ParamLimits

0xf98b,	// (0x0001d73e) main_cam_set_pane_g

0x664e,	// (0x00014401) main_cam_set_pane_t1_ParamLimits

0x664e,	// (0x00014401) main_cam_set_pane_t1

0x6669,	// (0x0001441c) main_cset_listscroll_pane_ParamLimits

0x6669,	// (0x0001441c) main_cset_listscroll_pane

0x6689,	// (0x0001443c) main_cset_slider_pane_ParamLimits

0x6689,	// (0x0001443c) main_cset_slider_pane

0xd098,	// (0x0001ae4b) main_cset_list_pane_ParamLimits

0xd098,	// (0x0001ae4b) main_cset_list_pane

0xd0a8,	// (0x0001ae5b) scroll_pane_cp028

0x66af,	// (0x00014462) aid_area_touch_slider

0x66cb,	// (0x0001447e) cset_slider_pane

0x66f5,	// (0x000144a8) main_cset_slider_pane_g1

0x670a,	// (0x000144bd) main_cset_slider_pane_g2

0x0011,

0xf990,	// (0x0001d743) main_cset_slider_pane_g

0xd0e1,	// (0x0001ae94) main_cset_slider_pane_t1

0x67c6,	// (0x00014579) main_cset_slider_pane_t2

0x67e0,	// (0x00014593) main_cset_slider_pane_t3

0x67fa,	// (0x000145ad) main_cset_slider_pane_t4

0x6814,	// (0x000145c7) main_cset_slider_pane_t5

0x6830,	// (0x000145e3) main_cset_slider_pane_t6

0x6845,	// (0x000145f8) main_cset_slider_pane_t7

0x000e,

0xf9b5,	// (0x0001d768) main_cset_slider_pane_t

0x6949,	// (0x000146fc) cset_list_set_pane_ParamLimits

0x6949,	// (0x000146fc) cset_list_set_pane

0x695d,	// (0x00014710) aid_position_infowindow_above

0x6965,	// (0x00014718) aid_position_infowindow_below

0x696d,	// (0x00014720) cset_list_set_pane_g1_ParamLimits

0x696d,	// (0x00014720) cset_list_set_pane_g1

0x6979,	// (0x0001472c) cset_list_set_pane_g3_ParamLimits

0x6979,	// (0x0001472c) cset_list_set_pane_g3

0x0001,

0xf9d4,	// (0x0001d787) cset_list_set_pane_g_ParamLimits

0xf9d4,	// (0x0001d787) cset_list_set_pane_g

0x6988,	// (0x0001473b) cset_list_set_pane_t1_ParamLimits

0x6988,	// (0x0001473b) cset_list_set_pane_t1

0x92ee,	// (0x000170a1) list_highlight_pane_cp021_ParamLimits

0x92ee,	// (0x000170a1) list_highlight_pane_cp021

0xa968,	// (0x0001871b) cset_slider_pane_g1

0xa97a,	// (0x0001872d) cset_slider_pane_g2

0xa971,	// (0x00018724) cset_slider_pane_g3

0x0002,

0xf9d9,	// (0x0001d78c) cset_slider_pane_g

0xd181,	// (0x0001af34) aid_area_touch_cam4_zoom

0xd189,	// (0x0001af3c) cam4_zoom_cont_pane

0xd191,	// (0x0001af44) cam4_zoom_pane_g1

0xd199,	// (0x0001af4c) cam4_zoom_pane_g2

0x699d,	// (0x00014750) cam4_zoom_pane_g3

0x0002,

0xf9e0,	// (0x0001d793) cam4_zoom_pane_g

0xd1a1,	// (0x0001af54) cam4_zoom_cont_pane_g1

0xd1aa,	// (0x0001af5d) cam4_zoom_cont_pane_g2

0xd1b3,	// (0x0001af66) cam4_zoom_cont_pane_g3

0x0002,

0xf9e7,	// (0x0001d79a) cam4_zoom_cont_pane_g

0x5cc1,	// (0x00013a74) call4_image_pane_ParamLimits

0x5cc1,	// (0x00013a74) call4_image_pane

0xcd79,	// (0x0001ab2c) call4_windows_conf_pane_ParamLimits

0xcdb8,	// (0x0001ab6b) popup_call4_audio_in_window_ParamLimits

0xcdb8,	// (0x0001ab6b) popup_call4_audio_in_window

0x927e,	// (0x00017031) bg_popup_call2_act_pane_cp02

0xce2e,	// (0x0001abe1) call4_list_conf_pane

0xc1b9,	// (0x00019f6c) call4_image_pane_g1

0xc1b9,	// (0x00019f6c) call4_image_pane_g2

0x0001,

0xf6fb,	// (0x0001d4ae) call4_image_pane_g

0xd1bc,	// (0x0001af6f) list_single_graphic_popup_conf4_pane_ParamLimits

0xd1bc,	// (0x0001af6f) list_single_graphic_popup_conf4_pane

0x927e,	// (0x00017031) list_highlight_pane_cp022

0xd1cf,	// (0x0001af82) list_single_graphic_popup_conf4_pane_g1

0xa639,	// (0x000183ec) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9ee,	// (0x0001d7a1) list_single_graphic_popup_conf4_pane_g

0xd1d7,	// (0x0001af8a) list_single_graphic_popup_conf4_pane_t1

0x1b09,	// (0x0000f8bc) popup_vtel_slider_window_ParamLimits

0x1b09,	// (0x0000f8bc) popup_vtel_slider_window

0xcd29,	// (0x0001aadc) dialer2_ne_pane_t2_ParamLimits

0xcd29,	// (0x0001aadc) dialer2_ne_pane_t2

0x0001,

0xf8cf,	// (0x0001d682) dialer2_ne_pane_t_ParamLimits

0xf8cf,	// (0x0001d682) dialer2_ne_pane_t

0xbf9c,	// (0x00019d4f) bg_popup_sub_pane_cp010_ParamLimits

0xbf9c,	// (0x00019d4f) bg_popup_sub_pane_cp010

0x69a5,	// (0x00014758) popup_vtel_slider_window_g1_ParamLimits

0x69a5,	// (0x00014758) popup_vtel_slider_window_g1

0x69b8,	// (0x0001476b) popup_vtel_slider_window_g2_ParamLimits

0x69b8,	// (0x0001476b) popup_vtel_slider_window_g2

0x0003,

0xf9f3,	// (0x0001d7a6) popup_vtel_slider_window_g_ParamLimits

0xf9f3,	// (0x0001d7a6) popup_vtel_slider_window_g

0x6a0e,	// (0x000147c1) vtel_slider_pane_ParamLimits

0x6a0e,	// (0x000147c1) vtel_slider_pane

0x6a30,	// (0x000147e3) vtel_slider_pane_g1_ParamLimits

0x6a30,	// (0x000147e3) vtel_slider_pane_g1

0x6a44,	// (0x000147f7) vtel_slider_pane_g2_ParamLimits

0x6a44,	// (0x000147f7) vtel_slider_pane_g2

0x6a5c,	// (0x0001480f) vtel_slider_pane_g3_ParamLimits

0x6a5c,	// (0x0001480f) vtel_slider_pane_g3

0x6a30,	// (0x000147e3) vtel_slider_pane_g4_ParamLimits

0x6a30,	// (0x000147e3) vtel_slider_pane_g4

0x6a72,	// (0x00014825) vtel_slider_pane_g5_ParamLimits

0x6a72,	// (0x00014825) vtel_slider_pane_g5

0x0004,

0xf9fc,	// (0x0001d7af) vtel_slider_pane_g_ParamLimits

0xf9fc,	// (0x0001d7af) vtel_slider_pane_g

0x927e,	// (0x00017031) main_gallery2_pane

0x6073,	// (0x00013e26) aid_size_row_itut2_dropdow_list_ParamLimits

0x6073,	// (0x00013e26) aid_size_row_itut2_dropdow_list

0x60ff,	// (0x00013eb2) grid_vitu2_function_top_pane_ParamLimits

0x60ff,	// (0x00013eb2) grid_vitu2_function_top_pane

0x6164,	// (0x00013f17) popup_vitu2_dropdown_list_window_ParamLimits

0x6164,	// (0x00013f17) popup_vitu2_dropdown_list_window

0x618d,	// (0x00013f40) popup_vitu2_match_list_window

0x6a88,	// (0x0001483b) cell_vitu2_function_top_pane_ParamLimits

0x6a88,	// (0x0001483b) cell_vitu2_function_top_pane

0x6aa6,	// (0x00014859) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6aa6,	// (0x00014859) cell_vitu2_function_top_pane_cp01

0x6ac4,	// (0x00014877) cell_vitu2_function_top_wide_pane_ParamLimits

0x6ac4,	// (0x00014877) cell_vitu2_function_top_wide_pane

0x92ee,	// (0x000170a1) bg_button_pane_cp012

0x6ae2,	// (0x00014895) cell_vitu2_function_top_pane_g1

0xd1fb,	// (0x0001afae) bg_button_pane_cp013_ParamLimits

0xd1fb,	// (0x0001afae) bg_button_pane_cp013

0x6af6,	// (0x000148a9) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6af6,	// (0x000148a9) cell_vitu2_function_top_wide_pane_g1

0x92ee,	// (0x000170a1) bg_popup_sub_pane_cp20

0x6b0e,	// (0x000148c1) list_vitu2_match_list_pane

0xcf8e,	// (0x0001ad41) bg_popup_sub_pane_cp20_g1

0xcf96,	// (0x0001ad49) bg_popup_sub_pane_cp20_g2

0xa060,	// (0x00017e13) bg_popup_sub_pane_cp20_g3

0xcf9e,	// (0x0001ad51) bg_popup_sub_pane_cp20_g4

0xa040,	// (0x00017df3) bg_popup_sub_pane_cp20_g5

0xd217,	// (0x0001afca) bg_popup_sub_pane_cp20_g6

0xcfae,	// (0x0001ad61) bg_popup_sub_pane_cp20_g7

0xcfb6,	// (0x0001ad69) bg_popup_sub_pane_cp20_g8

0xcfbe,	// (0x0001ad71) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa07,	// (0x0001d7ba) bg_popup_sub_pane_cp20_g

0xd21f,	// (0x0001afd2) list_vitu2_match_list_item_pane_ParamLimits

0xd21f,	// (0x0001afd2) list_vitu2_match_list_item_pane

0xd231,	// (0x0001afe4) list_vitu2_match_list_item_pane_t1

0x927e,	// (0x00017031) bg_popup_sub_pane_cp21

0xa4cf,	// (0x00018282) grid_vitu2_dropdown_list_pane

0x6b61,	// (0x00014914) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x6b61,	// (0x00014914) cell_vitu2_dropdown_list_char_pane

0x6b82,	// (0x00014935) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x6b82,	// (0x00014935) cell_vitu2_dropdown_list_ctrl_pane

0xd257,	// (0x0001b00a) cell_vitu2_dropdown_list_char_pane_g1

0xd260,	// (0x0001b013) cell_vitu2_dropdown_list_char_pane_g2

0xd269,	// (0x0001b01c) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa24,	// (0x0001d7d7) cell_vitu2_dropdown_list_char_pane_g

0x6bae,	// (0x00014961) cell_vitu2_dropdown_list_char_pane_t1

0x6bbc,	// (0x0001496f) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6bbc,	// (0x0001496f) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6bcc,	// (0x0001497f) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6bcc,	// (0x0001497f) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6bdd,	// (0x00014990) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6bdd,	// (0x00014990) cell_vitu2_dropdown_list_ctrl_pane_g3

0x6bed,	// (0x000149a0) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x6bed,	// (0x000149a0) cell_vitu2_dropdown_list_ctrl_pane_g4

0xc420,	// (0x0001a1d3) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xc420,	// (0x0001a1d3) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa2b,	// (0x0001d7de) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa2b,	// (0x0001d7de) cell_vitu2_dropdown_list_ctrl_pane_g

0x6c09,	// (0x000149bc) aid_size_cell_gallery2_ParamLimits

0x6c09,	// (0x000149bc) aid_size_cell_gallery2

0x6c1f,	// (0x000149d2) grid_gallery2_pane_ParamLimits

0x6c1f,	// (0x000149d2) grid_gallery2_pane

0x6c33,	// (0x000149e6) scroll_pane_cp029_ParamLimits

0x6c33,	// (0x000149e6) scroll_pane_cp029

0x6c3f,	// (0x000149f2) cell_gallery2_pane_ParamLimits

0x6c3f,	// (0x000149f2) cell_gallery2_pane

0xd272,	// (0x0001b025) cell_gallery2_pane_g2

0x6c75,	// (0x00014a28) cell_gallery2_pane_g3

0xd27c,	// (0x0001b02f) cell_gallery2_pane_g4

0xd284,	// (0x0001b037) cell_gallery2_pane_g5

0xa812,	// (0x000185c5) grid_highlight_pane_cp10

0x618d,	// (0x00013f40) popup_vitu2_match_list_window_ParamLimits

0x61a2,	// (0x00013f55) popup_vitu2_query_window_ParamLimits

0x61a2,	// (0x00013f55) popup_vitu2_query_window

0x927e,	// (0x00017031) bg_vitu2_candi_button_pane

0xd257,	// (0x0001b00a) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd260,	// (0x0001b013) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd269,	// (0x0001b01c) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x6c7d,	// (0x00014a30) bg_button_pane_cp015

0x6c91,	// (0x00014a44) bg_button_pane_cp016

0x6ca4,	// (0x00014a57) bg_button_pane_cp017

0xbcb1,	// (0x00019a64) bg_popup_sub_pane_cp22

0xd28c,	// (0x0001b03f) popup_vitu2_query_window_g1

0x6ce9,	// (0x00014a9c) popup_vitu2_query_window_g2

0x0002,

0xfa36,	// (0x0001d7e9) popup_vitu2_query_window_g

0x6d08,	// (0x00014abb) popup_vitu2_query_window_t1_ParamLimits

0x6d08,	// (0x00014abb) popup_vitu2_query_window_t1

0x6d3d,	// (0x00014af0) popup_vitu2_query_window_t2_ParamLimits

0x6d3d,	// (0x00014af0) popup_vitu2_query_window_t2

0x6d4f,	// (0x00014b02) popup_vitu2_query_window_t3_ParamLimits

0x6d4f,	// (0x00014b02) popup_vitu2_query_window_t3

0x6d77,	// (0x00014b2a) popup_vitu2_query_window_t4_ParamLimits

0x6d77,	// (0x00014b2a) popup_vitu2_query_window_t4

0x6d98,	// (0x00014b4b) popup_vitu2_query_window_t5_ParamLimits

0x6d98,	// (0x00014b4b) popup_vitu2_query_window_t5

0x0006,

0xfa3d,	// (0x0001d7f0) popup_vitu2_query_window_t_ParamLimits

0xfa3d,	// (0x0001d7f0) popup_vitu2_query_window_t

0xd090,	// (0x0001ae43) main_cset_text_pane

0x66af,	// (0x00014462) aid_area_touch_slider_ParamLimits

0x66cb,	// (0x0001447e) cset_slider_pane_ParamLimits

0x66f5,	// (0x000144a8) main_cset_slider_pane_g1_ParamLimits

0x670a,	// (0x000144bd) main_cset_slider_pane_g2_ParamLimits

0xd0b1,	// (0x0001ae64) main_cset_slider_pane_g3_ParamLimits

0xd0b1,	// (0x0001ae64) main_cset_slider_pane_g3

0x671f,	// (0x000144d2) main_cset_slider_pane_g4_ParamLimits

0x671f,	// (0x000144d2) main_cset_slider_pane_g4

0x672e,	// (0x000144e1) main_cset_slider_pane_g5_ParamLimits

0x672e,	// (0x000144e1) main_cset_slider_pane_g5

0x673a,	// (0x000144ed) main_cset_slider_pane_g6_ParamLimits

0x673a,	// (0x000144ed) main_cset_slider_pane_g6

0xf990,	// (0x0001d743) main_cset_slider_pane_g_ParamLimits

0xd0e1,	// (0x0001ae94) main_cset_slider_pane_t1_ParamLimits

0x67c6,	// (0x00014579) main_cset_slider_pane_t2_ParamLimits

0x67e0,	// (0x00014593) main_cset_slider_pane_t3_ParamLimits

0x67fa,	// (0x000145ad) main_cset_slider_pane_t4_ParamLimits

0x6814,	// (0x000145c7) main_cset_slider_pane_t5_ParamLimits

0x6830,	// (0x000145e3) main_cset_slider_pane_t6_ParamLimits

0x6845,	// (0x000145f8) main_cset_slider_pane_t7_ParamLimits

0x686f,	// (0x00014622) main_cset_slider_pane_t8_ParamLimits

0x686f,	// (0x00014622) main_cset_slider_pane_t8

0x6897,	// (0x0001464a) main_cset_slider_pane_t9_ParamLimits

0x6897,	// (0x0001464a) main_cset_slider_pane_t9

0x68bf,	// (0x00014672) main_cset_slider_pane_t10_ParamLimits

0x68bf,	// (0x00014672) main_cset_slider_pane_t10

0x68e7,	// (0x0001469a) main_cset_slider_pane_t11_ParamLimits

0x68e7,	// (0x0001469a) main_cset_slider_pane_t11

0x690f,	// (0x000146c2) main_cset_slider_pane_t12_ParamLimits

0x690f,	// (0x000146c2) main_cset_slider_pane_t12

0x692c,	// (0x000146df) main_cset_slider_pane_t13_ParamLimits

0x692c,	// (0x000146df) main_cset_slider_pane_t13

0xf9b5,	// (0x0001d768) main_cset_slider_pane_t_ParamLimits

0x927e,	// (0x00017031) bg_popup_sub_pane_cp011

0xd298,	// (0x0001b04b) main_cset_text_pane_g1

0xd2a0,	// (0x0001b053) main_cset_text_pane_t1

0xd2ae,	// (0x0001b061) main_cset_text_pane_t2

0xd2bc,	// (0x0001b06f) main_cset_text_pane_t3

0xd2ca,	// (0x0001b07d) main_cset_text_pane_t4

0xd2d8,	// (0x0001b08b) main_cset_text_pane_t5

0xd2e6,	// (0x0001b099) main_cset_text_pane_t6

0xd2f4,	// (0x0001b0a7) main_cset_text_pane_t7

0x0006,

0xfa4c,	// (0x0001d7ff) main_cset_text_pane_t

0x927e,	// (0x00017031) main_cam4_burst_pane

0x927e,	// (0x00017031) main_cam5_pane

0x65ee,	// (0x000143a1) bg_button_pane_cp019

0x65f7,	// (0x000143aa) bg_button_pane_cp020

0xd0bd,	// (0x0001ae70) main_cset_slider_pane_g7_ParamLimits

0xd0bd,	// (0x0001ae70) main_cset_slider_pane_g7

0xd0c9,	// (0x0001ae7c) main_cset_slider_pane_g8_ParamLimits

0xd0c9,	// (0x0001ae7c) main_cset_slider_pane_g8

0x674e,	// (0x00014501) main_cset_slider_pane_g9_ParamLimits

0x674e,	// (0x00014501) main_cset_slider_pane_g9

0x675a,	// (0x0001450d) main_cset_slider_pane_g10_ParamLimits

0x675a,	// (0x0001450d) main_cset_slider_pane_g10

0x6766,	// (0x00014519) main_cset_slider_pane_g11_ParamLimits

0x6766,	// (0x00014519) main_cset_slider_pane_g11

0x6772,	// (0x00014525) main_cset_slider_pane_g12_ParamLimits

0x6772,	// (0x00014525) main_cset_slider_pane_g12

0x677e,	// (0x00014531) main_cset_slider_pane_g13_ParamLimits

0x677e,	// (0x00014531) main_cset_slider_pane_g13

0x678a,	// (0x0001453d) main_cset_slider_pane_g14_ParamLimits

0x678a,	// (0x0001453d) main_cset_slider_pane_g14

0x6796,	// (0x00014549) main_cset_slider_pane_g15_ParamLimits

0x6796,	// (0x00014549) main_cset_slider_pane_g15

0xd10f,	// (0x0001aec2) main_cset_slider_pane_t14_ParamLimits

0xd10f,	// (0x0001aec2) main_cset_slider_pane_t14

0xd148,	// (0x0001aefb) main_cset_slider_pane_t15_ParamLimits

0xd148,	// (0x0001aefb) main_cset_slider_pane_t15

0x6e0f,	// (0x00014bc2) aid_cam4_burst_size_cell_ParamLimits

0x6e0f,	// (0x00014bc2) aid_cam4_burst_size_cell

0x6e2f,	// (0x00014be2) grid_cam4_burst_pane_ParamLimits

0x6e2f,	// (0x00014be2) grid_cam4_burst_pane

0x6e67,	// (0x00014c1a) linegrid_cam4_burst_pane_ParamLimits

0x6e67,	// (0x00014c1a) linegrid_cam4_burst_pane

0xd302,	// (0x0001b0b5) scroll_pane_cp30_ParamLimits

0xd302,	// (0x0001b0b5) scroll_pane_cp30

0x6e8d,	// (0x00014c40) cell_cam4_burst_pane_ParamLimits

0x6e8d,	// (0x00014c40) cell_cam4_burst_pane

0xd30e,	// (0x0001b0c1) linegrid_cam4_burst_pane_g1_ParamLimits

0xd30e,	// (0x0001b0c1) linegrid_cam4_burst_pane_g1

0x6eda,	// (0x00014c8d) linegrid_cam4_burst_pane_g2_ParamLimits

0x6eda,	// (0x00014c8d) linegrid_cam4_burst_pane_g2

0xd31b,	// (0x0001b0ce) linegrid_cam4_burst_pane_g3_ParamLimits

0xd31b,	// (0x0001b0ce) linegrid_cam4_burst_pane_g3

0x0002,

0xfa5b,	// (0x0001d80e) linegrid_cam4_burst_pane_g_ParamLimits

0xfa5b,	// (0x0001d80e) linegrid_cam4_burst_pane_g

0x6eeb,	// (0x00014c9e) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x6eeb,	// (0x00014c9e) linegrid_cam4_burst_pane_g3_copy1

0xd328,	// (0x0001b0db) linegrid_cam4_burst_pane_g4_ParamLimits

0xd328,	// (0x0001b0db) linegrid_cam4_burst_pane_g4

0x6f05,	// (0x00014cb8) linegrid_cam4_burst_pane_g5_ParamLimits

0x6f05,	// (0x00014cb8) linegrid_cam4_burst_pane_g5

0x6f16,	// (0x00014cc9) linegrid_cam4_burst_pane_g6_ParamLimits

0x6f16,	// (0x00014cc9) linegrid_cam4_burst_pane_g6

0xd335,	// (0x0001b0e8) linegrid_cam4_burst_pane_g7_ParamLimits

0xd335,	// (0x0001b0e8) linegrid_cam4_burst_pane_g7

0x6f2d,	// (0x00014ce0) cell_cam4_burst_pane_g1

0xd34e,	// (0x0001b101) main_cam5_pane_t1_ParamLimits

0xd34e,	// (0x0001b101) main_cam5_pane_t1

0xd360,	// (0x0001b113) main_cam5_pane_t2_ParamLimits

0xd360,	// (0x0001b113) main_cam5_pane_t2

0xd372,	// (0x0001b125) main_cam5_pane_t3_ParamLimits

0xd372,	// (0x0001b125) main_cam5_pane_t3

0xd384,	// (0x0001b137) main_cam5_pane_t4_ParamLimits

0xd384,	// (0x0001b137) main_cam5_pane_t4

0xd39a,	// (0x0001b14d) main_cam5_pane_t5_ParamLimits

0xd39a,	// (0x0001b14d) main_cam5_pane_t5

0xd3ac,	// (0x0001b15f) main_cam5_pane_t6_ParamLimits

0xd3ac,	// (0x0001b15f) main_cam5_pane_t6

0xd3c0,	// (0x0001b173) main_cam5_pane_t7_ParamLimits

0xd3c0,	// (0x0001b173) main_cam5_pane_t7

0xd3d2,	// (0x0001b185) main_cam5_pane_t8_ParamLimits

0xd3d2,	// (0x0001b185) main_cam5_pane_t8

0xd3ee,	// (0x0001b1a1) main_cam5_pane_t9_ParamLimits

0xd3ee,	// (0x0001b1a1) main_cam5_pane_t9

0xd400,	// (0x0001b1b3) main_cam5_pane_t10_ParamLimits

0xd400,	// (0x0001b1b3) main_cam5_pane_t10

0xd412,	// (0x0001b1c5) main_cam5_pane_t11_ParamLimits

0xd412,	// (0x0001b1c5) main_cam5_pane_t11

0xd424,	// (0x0001b1d7) main_cam5_pane_t12_ParamLimits

0xd424,	// (0x0001b1d7) main_cam5_pane_t12

0xd439,	// (0x0001b1ec) main_cam5_pane_t13_ParamLimits

0xd439,	// (0x0001b1ec) main_cam5_pane_t13

0x000c,

0xfa67,	// (0x0001d81a) main_cam5_pane_t_ParamLimits

0xfa67,	// (0x0001d81a) main_cam5_pane_t

0x0d84,	// (0x0000eb37) popup_scut_keymap_window_ParamLimits

0x0d84,	// (0x0000eb37) popup_scut_keymap_window

0x6f42,	// (0x00014cf5) aid_size_cell_brow_shortcut

0xa812,	// (0x000185c5) bg_popup_window_pane_cp010

0x6f4e,	// (0x00014d01) grid_scut_pane

0x6f5a,	// (0x00014d0d) cell_scut_pane_ParamLimits

0x6f5a,	// (0x00014d0d) cell_scut_pane

0x6f71,	// (0x00014d24) cell_scut_pane_g1

0xd456,	// (0x0001b209) cell_scut_pane_t1

0xd465,	// (0x0001b218) cell_scut_pane_t2

0x6f7a,	// (0x00014d2d) cell_scut_pane_t3

0x0002,

0xfa82,	// (0x0001d835) cell_scut_pane_t

0x4b78,	// (0x0001292b) main_mup3_pane_g8_ParamLimits

0x4b78,	// (0x0001292b) main_mup3_pane_g8

0x608b,	// (0x00013e3e) area_vitu2_query_pane_ParamLimits

0x608b,	// (0x00013e3e) area_vitu2_query_pane

0x6cb7,	// (0x00014a6a) input_focus_pane_cp08

0xd474,	// (0x0001b227) area_vitu2_query_pane_g1

0x6f88,	// (0x00014d3b) area_vitu2_query_pane_g2

0x0001,

0xfa89,	// (0x0001d83c) area_vitu2_query_pane_g

0x6f99,	// (0x00014d4c) area_vitu2_query_pane_t1_ParamLimits

0x6f99,	// (0x00014d4c) area_vitu2_query_pane_t1

0x6fad,	// (0x00014d60) area_vitu2_query_pane_t2_ParamLimits

0x6fad,	// (0x00014d60) area_vitu2_query_pane_t2

0x6fc1,	// (0x00014d74) area_vitu2_query_pane_t3_ParamLimits

0x6fc1,	// (0x00014d74) area_vitu2_query_pane_t3

0xd480,	// (0x0001b233) area_vitu2_query_pane_t4_ParamLimits

0xd480,	// (0x0001b233) area_vitu2_query_pane_t4

0xd4a8,	// (0x0001b25b) area_vitu2_query_pane_t5_ParamLimits

0xd4a8,	// (0x0001b25b) area_vitu2_query_pane_t5

0xd4d0,	// (0x0001b283) area_vitu2_query_pane_t6_ParamLimits

0xd4d0,	// (0x0001b283) area_vitu2_query_pane_t6

0x0006,

0xfa8e,	// (0x0001d841) area_vitu2_query_pane_t_ParamLimits

0xfa8e,	// (0x0001d841) area_vitu2_query_pane_t

0x6fe9,	// (0x00014d9c) bg_button_pane_cp018

0x6ff7,	// (0x00014daa) bg_button_pane_cp021

0x7003,	// (0x00014db6) bg_button_pane_cp022

0x7014,	// (0x00014dc7) input_focus_pane_cp09

0x2b0c,	// (0x000108bf) aid_size_touch_mv_arrow_left

0x2b35,	// (0x000108e8) aid_size_touch_mv_arrow_right

0x67ae,	// (0x00014561) main_cset_slider_pane_g16_ParamLimits

0x67ae,	// (0x00014561) main_cset_slider_pane_g16

0x67ba,	// (0x0001456d) main_cset_slider_pane_g17_ParamLimits

0x67ba,	// (0x0001456d) main_cset_slider_pane_g17

0x6f2d,	// (0x00014ce0) cell_cam4_burst_pane_g1_ParamLimits

0x927e,	// (0x00017031) compa_mode_pane

0x69c8,	// (0x0001477b) popup_vtel_slider_window_g3_ParamLimits

0x69c8,	// (0x0001477b) popup_vtel_slider_window_g3

0x69df,	// (0x00014792) popup_vtel_slider_window_g4_ParamLimits

0x69df,	// (0x00014792) popup_vtel_slider_window_g4

0x69f6,	// (0x000147a9) popup_vtel_slider_window_t1_ParamLimits

0x69f6,	// (0x000147a9) popup_vtel_slider_window_t1

0x927e,	// (0x00017031) main_cl_pane

0xbcd9,	// (0x00019a8c) popup_imed_adjust2_window_ParamLimits

0xbcb1,	// (0x00019a64) bg_tb_trans_pane_cp05_ParamLimits

0xc6f7,	// (0x0001a4aa) popup_imed_adjust2_window_g1_ParamLimits

0xc706,	// (0x0001a4b9) popup_imed_adjust2_window_g2_ParamLimits

0xc706,	// (0x0001a4b9) popup_imed_adjust2_window_g2

0xc712,	// (0x0001a4c5) popup_imed_adjust2_window_g3_ParamLimits

0xc712,	// (0x0001a4c5) popup_imed_adjust2_window_g3

0x0002,

0xf7f9,	// (0x0001d5ac) popup_imed_adjust2_window_g_ParamLimits

0xf7f9,	// (0x0001d5ac) popup_imed_adjust2_window_g

0xc71e,	// (0x0001a4d1) popup_imed_adjust2_window_t1_ParamLimits

0xc736,	// (0x0001a4e9) slider_imed_adjust_pane_ParamLimits

0xc74a,	// (0x0001a4fd) slider_imed_adjust_pane_g1_ParamLimits

0xc75a,	// (0x0001a50d) slider_imed_adjust_pane_g2_ParamLimits

0xc76a,	// (0x0001a51d) slider_imed_adjust_pane_g3_ParamLimits

0xc77b,	// (0x0001a52e) slider_imed_adjust_pane_g4_ParamLimits

0xf800,	// (0x0001d5b3) slider_imed_adjust_pane_g_ParamLimits

0x5da6,	// (0x00013b59) aid_touch_area_cam4_ParamLimits

0x5da6,	// (0x00013b59) aid_touch_area_cam4

0xce72,	// (0x0001ac25) battery_pane_cp01

0x5e76,	// (0x00013c29) main_camera4_pane_g6_ParamLimits

0x5e76,	// (0x00013c29) main_camera4_pane_g6

0x5ea0,	// (0x00013c53) main_camera4_pane_t2_ParamLimits

0x5ea0,	// (0x00013c53) main_camera4_pane_t2

0x0001,

0xf903,	// (0x0001d6b6) main_camera4_pane_t_ParamLimits

0xf903,	// (0x0001d6b6) main_camera4_pane_t

0x5ed5,	// (0x00013c88) aid_touch_area_vid4_ParamLimits

0x5ed5,	// (0x00013c88) aid_touch_area_vid4

0x5f3c,	// (0x00013cef) main_video4_pane_g5_ParamLimits

0x5f3c,	// (0x00013cef) main_video4_pane_g5

0x5f67,	// (0x00013d1a) vid4_progress_pane_ParamLimits

0x5f67,	// (0x00013d1a) vid4_progress_pane

0xd0d5,	// (0x0001ae88) main_cset_slider_pane_g18_ParamLimits

0xd0d5,	// (0x0001ae88) main_cset_slider_pane_g18

0xd342,	// (0x0001b0f5) cell_cam4_burst_pane_g2_ParamLimits

0xd342,	// (0x0001b0f5) cell_cam4_burst_pane_g2

0x0001,

0xfa62,	// (0x0001d815) cell_cam4_burst_pane_g_ParamLimits

0xfa62,	// (0x0001d815) cell_cam4_burst_pane_g

0x9aa1,	// (0x00017854) bg_cl_pane_ParamLimits

0x9aa1,	// (0x00017854) bg_cl_pane

0x7025,	// (0x00014dd8) cl_header_pane_ParamLimits

0x7025,	// (0x00014dd8) cl_header_pane

0x7039,	// (0x00014dec) cl_listscroll_pane_ParamLimits

0x7039,	// (0x00014dec) cl_listscroll_pane

0xd51c,	// (0x0001b2cf) bg_cl_pane_g1

0xd524,	// (0x0001b2d7) bg_cl_pane_g2

0xd52c,	// (0x0001b2df) bg_cl_pane_g3

0xd534,	// (0x0001b2e7) bg_cl_pane_g4

0xd53c,	// (0x0001b2ef) bg_cl_pane_g5

0xd544,	// (0x0001b2f7) bg_cl_pane_g6

0xd54c,	// (0x0001b2ff) bg_cl_pane_g7

0xd554,	// (0x0001b307) bg_cl_pane_g8

0xd55c,	// (0x0001b30f) bg_cl_pane_g9

0x0008,

0xfa9d,	// (0x0001d850) bg_cl_pane_g

0x7049,	// (0x00014dfc) aid_height_cl_leading_ParamLimits

0x7049,	// (0x00014dfc) aid_height_cl_leading

0x7055,	// (0x00014e08) aid_height_cl_text_ParamLimits

0x7055,	// (0x00014e08) aid_height_cl_text

0x92ee,	// (0x000170a1) bg_cl_header_pane_ParamLimits

0x92ee,	// (0x000170a1) bg_cl_header_pane

0x7074,	// (0x00014e27) cl_header_pane_g1_ParamLimits

0x7074,	// (0x00014e27) cl_header_pane_g1

0x708a,	// (0x00014e3d) cl_header_pane_t1_ParamLimits

0x708a,	// (0x00014e3d) cl_header_pane_t1

0xd564,	// (0x0001b317) cl_list_pane

0xd0a8,	// (0x0001ae5b) hc_scroll_pane_cp01

0xa040,	// (0x00017df3) bg_cl_header_pane_g1

0xcf8e,	// (0x0001ad41) bg_cl_header_pane_g2

0xa060,	// (0x00017e13) bg_cl_header_pane_g3

0xcf9e,	// (0x0001ad51) bg_cl_header_pane_g4

0xcf96,	// (0x0001ad49) bg_cl_header_pane_g5

0xd217,	// (0x0001afca) bg_cl_header_pane_g6

0xcfb6,	// (0x0001ad69) bg_cl_header_pane_g7

0xcfbe,	// (0x0001ad71) bg_cl_header_pane_g8

0xcfae,	// (0x0001ad61) bg_cl_header_pane_g9

0x0008,

0xfab0,	// (0x0001d863) bg_cl_header_pane_g

0x70a3,	// (0x00014e56) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x70a3,	// (0x00014e56) hc_cl_list_double_graphic_heading_pane

0x70b7,	// (0x00014e6a) hc_cl_list_single_graphic_pane_ParamLimits

0x70b7,	// (0x00014e6a) hc_cl_list_single_graphic_pane

0x70d1,	// (0x00014e84) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x70d1,	// (0x00014e84) hc_cl_list_single_graphic_pane_g1

0x70dd,	// (0x00014e90) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x70dd,	// (0x00014e90) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfac3,	// (0x0001d876) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfac3,	// (0x0001d876) hc_cl_list_single_graphic_pane_g

0x70f1,	// (0x00014ea4) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x70f1,	// (0x00014ea4) hc_cl_list_single_graphic_pane_t1

0x70d1,	// (0x00014e84) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x70d1,	// (0x00014e84) hc_cl_list_double_graphic_heading_pane_g1

0x7106,	// (0x00014eb9) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x7106,	// (0x00014eb9) hc_cl_list_double_graphic_heading_pane_g2

0x711a,	// (0x00014ecd) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x711a,	// (0x00014ecd) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfac8,	// (0x0001d87b) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfac8,	// (0x0001d87b) hc_cl_list_double_graphic_heading_pane_g

0x712e,	// (0x00014ee1) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x712e,	// (0x00014ee1) hc_cl_list_double_graphic_heading_pane_t1

0x7143,	// (0x00014ef6) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x7143,	// (0x00014ef6) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfacf,	// (0x0001d882) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfacf,	// (0x0001d882) hc_cl_list_double_graphic_heading_pane_t

0xd575,	// (0x0001b328) vid4_progress_pane_g1

0xd585,	// (0x0001b338) vid4_progress_pane_g2

0xd595,	// (0x0001b348) vid4_progress_pane_g3

0xcea7,	// (0x0001ac5a) vid4_progress_pane_g4

0x0004,

0xfad4,	// (0x0001d887) vid4_progress_pane_g

0xd5a1,	// (0x0001b354) vid4_progress_pane_t1

0xd5b6,	// (0x0001b369) vid4_progress_pane_t2

0x0002,

0xfadf,	// (0x0001d892) vid4_progress_pane_t

0xd5e1,	// (0x0001b394) wait_bar_pane_cp07

0xbfaa,	// (0x00019d5d) blid_firmament_pane_ParamLimits

0xbfed,	// (0x00019da0) popup_blid_sat_info2_window_g1

0xc011,	// (0x00019dc4) popup_blid_sat_info2_window_t3

0xc01f,	// (0x00019dd2) popup_blid_sat_info2_window_t4

0xc02d,	// (0x00019de0) popup_blid_sat_info2_window_t5

0xc03b,	// (0x00019dee) popup_blid_sat_info2_window_t6

0xc04b,	// (0x00019dfe) popup_blid_sat_info2_window_t7

0xc059,	// (0x00019e0c) popup_blid_sat_info2_window_t8

0xc067,	// (0x00019e1a) popup_blid_sat_info2_window_t9

0xc075,	// (0x00019e28) popup_blid_sat_info2_window_t10

0xc139,	// (0x00019eec) aid_firma_cardinal_ParamLimits

0xc14d,	// (0x00019f00) blid_firmament_pane_t1_ParamLimits

0xc164,	// (0x00019f17) blid_firmament_pane_t2_ParamLimits

0xc17b,	// (0x00019f2e) blid_firmament_pane_t3_ParamLimits

0xc192,	// (0x00019f45) blid_firmament_pane_t4_ParamLimits

0xf6f2,	// (0x0001d4a5) blid_firmament_pane_t_ParamLimits

0xc1a9,	// (0x00019f5c) blid_sat_info_pane_ParamLimits

0x92ee,	// (0x000170a1) main_cam_set_pane_ParamLimits

0x5436,	// (0x000131e9) aid_size_cell_colour_35_ParamLimits

0x5456,	// (0x00013209) aid_size_cell_colour_112_ParamLimits

0x5476,	// (0x00013229) aid_size_cell_effect_ParamLimits

0xbcb1,	// (0x00019a64) bg_tb_trans_pane_cp02_ParamLimits

0xa260,	// (0x00018013) heading_imed_pane_ParamLimits

0x5496,	// (0x00013249) listscroll_imed_pane_ParamLimits

0xb2db,	// (0x0001908e) popup_call2_audio_first_window_g5_ParamLimits

0xb2db,	// (0x0001908e) popup_call2_audio_first_window_g5

0x5a4d,	// (0x00013800) aid_size_touch_image3_arrow_left_ParamLimits

0x5a4d,	// (0x00013800) aid_size_touch_image3_arrow_left

0x5a79,	// (0x0001382c) aid_size_touch_image3_arrow_right_ParamLimits

0x5a79,	// (0x0001382c) aid_size_touch_image3_arrow_right

0xd5cc,	// (0x0001b37f) vid4_progress_pane_t3

0x57b9,	// (0x0001356c) main_hwr_training_symbol_option_pane_ParamLimits

0x57b9,	// (0x0001356c) main_hwr_training_symbol_option_pane

0xc9e4,	// (0x0001a797) popup_hwr_training_preview_window_ParamLimits

0xc9e4,	// (0x0001a797) popup_hwr_training_preview_window

0x57d9,	// (0x0001358c) hwr_training_navi_pane_g5_ParamLimits

0x57d9,	// (0x0001358c) hwr_training_navi_pane_g5

0xcf7c,	// (0x0001ad2f) popup_char_count_window

0x92ee,	// (0x000170a1) bg_popup_sub_pane_cp20_ParamLimits

0x6b0e,	// (0x000148c1) list_vitu2_match_list_pane_ParamLimits

0x6b1d,	// (0x000148d0) vitu2_page_scroll_pane_ParamLimits

0x6b1d,	// (0x000148d0) vitu2_page_scroll_pane

0xd64b,	// (0x0001b3fe) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd64b,	// (0x0001b3fe) list_single_hwr_training_symbol_option_pane

0xd65e,	// (0x0001b411) list_single_hwr_training_symbol_option_pane_g1

0xd666,	// (0x0001b419) list_single_hwr_training_symbol_option_pane_t1

0xd674,	// (0x0001b427) bg_button_pane_cp023

0xd67d,	// (0x0001b430) bg_button_pane_cp024

0x7158,	// (0x00014f0b) vitu2_page_scroll_pane_g1

0x7160,	// (0x00014f13) vitu2_page_scroll_pane_g2

0x0001,

0xfae6,	// (0x0001d899) vitu2_page_scroll_pane_g

0x7168,	// (0x00014f1b) vitu2_page_scroll_pane_t1

0xbec6,	// (0x00019c79) popup_char_count_window_g1

0xd6b0,	// (0x0001b463) popup_char_count_window_g2

0xd6b9,	// (0x0001b46c) popup_char_count_window_g3

0x0002,

0xfaeb,	// (0x0001d89e) popup_char_count_window_g

0xd6c2,	// (0x0001b475) popup_char_count_window_t1

0x927e,	// (0x00017031) main_vded2_pane

0xc6e3,	// (0x0001a496) aid_size_cell_imed_line

0xc6ed,	// (0x0001a4a0) grid_imed_line_width_pane

0x5fd7,	// (0x00013d8a) vid4_indicators_pane_g4

0xd6d0,	// (0x0001b483) cell_imed_line_width_pane_ParamLimits

0xd6d0,	// (0x0001b483) cell_imed_line_width_pane

0xd6e4,	// (0x0001b497) cell_imed_line_width_pane_g1

0xd6ed,	// (0x0001b4a0) cell_imed_line_width_pane_g2

0x0001,

0xfaf2,	// (0x0001d8a5) cell_imed_line_width_pane_g

0x7177,	// (0x00014f2a) main_vded2_pane_g1_ParamLimits

0x7177,	// (0x00014f2a) main_vded2_pane_g1

0x718f,	// (0x00014f42) main_vded2_pane_g2_ParamLimits

0x718f,	// (0x00014f42) main_vded2_pane_g2

0x0001,

0xfaf7,	// (0x0001d8aa) main_vded2_pane_g_ParamLimits

0xfaf7,	// (0x0001d8aa) main_vded2_pane_g

0x71a1,	// (0x00014f54) vded2_slider_pane_ParamLimits

0x71a1,	// (0x00014f54) vded2_slider_pane

0x71b1,	// (0x00014f64) aid_size_touch_vded2_end

0x71bb,	// (0x00014f6e) aid_size_touch_vded2_playhead

0xd6f5,	// (0x0001b4a8) aid_size_touch_vded2_start

0xd6fd,	// (0x0001b4b0) vded2_slider_bg_pane

0xd706,	// (0x0001b4b9) vded2_slider_pane_g1

0xd70f,	// (0x0001b4c2) vded2_slider_pane_g2

0x71c5,	// (0x00014f78) vded2_slider_pane_g3

0x0002,

0xfafc,	// (0x0001d8af) vded2_slider_pane_g

0xd717,	// (0x0001b4ca) vded2_slider_bg_pane_g1

0xd720,	// (0x0001b4d3) vded2_slider_bg_pane_g2

0xd729,	// (0x0001b4dc) vded2_slider_bg_pane_g3

0x0002,

0xfb03,	// (0x0001d8b6) vded2_slider_bg_pane_g

0x31a6,	// (0x00010f59) aid_postcard_touch_down_pane_ParamLimits

0x31a6,	// (0x00010f59) aid_postcard_touch_down_pane

0x31bc,	// (0x00010f6f) aid_postcard_touch_up_pane_ParamLimits

0x31bc,	// (0x00010f6f) aid_postcard_touch_up_pane

0x927e,	// (0x00017031) main_blid2_pane

0xbcbf,	// (0x00019a72) popup_blid2_search_window

0x927e,	// (0x00017031) blid2_gps_pane

0x927e,	// (0x00017031) blid2_navig_pane

0x927e,	// (0x00017031) blid2_search_pane

0x927e,	// (0x00017031) blid2_tripm_pane

0x71d0,	// (0x00014f83) blid2_search_pane_g1_ParamLimits

0x71d0,	// (0x00014f83) blid2_search_pane_g1

0x71e8,	// (0x00014f9b) blid2_search_pane_t1_ParamLimits

0x71e8,	// (0x00014f9b) blid2_search_pane_t1

0x71fa,	// (0x00014fad) aid_size_cell_blid2_gps_ParamLimits

0x71fa,	// (0x00014fad) aid_size_cell_blid2_gps

0x7212,	// (0x00014fc5) blid2_gps_pane_g1_ParamLimits

0x7212,	// (0x00014fc5) blid2_gps_pane_g1

0x7226,	// (0x00014fd9) grid_blid2_satellite_pane_ParamLimits

0x7226,	// (0x00014fd9) grid_blid2_satellite_pane

0x7240,	// (0x00014ff3) blid2_navig_pane_g1_ParamLimits

0x7240,	// (0x00014ff3) blid2_navig_pane_g1

0x724c,	// (0x00014fff) blid2_navig_pane_t1_ParamLimits

0x724c,	// (0x00014fff) blid2_navig_pane_t1

0x7267,	// (0x0001501a) blid2_navig_pane_t2_ParamLimits

0x7267,	// (0x0001501a) blid2_navig_pane_t2

0x0001,

0xfb0a,	// (0x0001d8bd) blid2_navig_pane_t_ParamLimits

0xfb0a,	// (0x0001d8bd) blid2_navig_pane_t

0x7282,	// (0x00015035) blid2_navig_ring_pane_ParamLimits

0x7282,	// (0x00015035) blid2_navig_ring_pane

0x729b,	// (0x0001504e) blid2_speed_pane_ParamLimits

0x729b,	// (0x0001504e) blid2_speed_pane

0x72a7,	// (0x0001505a) blid2_tripm_pane_g1_ParamLimits

0x72a7,	// (0x0001505a) blid2_tripm_pane_g1

0x72c2,	// (0x00015075) blid2_tripm_pane_g2_ParamLimits

0x72c2,	// (0x00015075) blid2_tripm_pane_g2

0x72d6,	// (0x00015089) blid2_tripm_pane_g3_ParamLimits

0x72d6,	// (0x00015089) blid2_tripm_pane_g3

0x72ea,	// (0x0001509d) blid2_tripm_pane_g4_ParamLimits

0x72ea,	// (0x0001509d) blid2_tripm_pane_g4

0x72fe,	// (0x000150b1) blid2_tripm_pane_g5_ParamLimits

0x72fe,	// (0x000150b1) blid2_tripm_pane_g5

0x0005,

0xfb0f,	// (0x0001d8c2) blid2_tripm_pane_g_ParamLimits

0xfb0f,	// (0x0001d8c2) blid2_tripm_pane_g

0x7324,	// (0x000150d7) blid2_tripm_pane_t1_ParamLimits

0x7324,	// (0x000150d7) blid2_tripm_pane_t1

0x733f,	// (0x000150f2) blid2_tripm_pane_t2_ParamLimits

0x733f,	// (0x000150f2) blid2_tripm_pane_t2

0x735a,	// (0x0001510d) blid2_tripm_pane_t3_ParamLimits

0x735a,	// (0x0001510d) blid2_tripm_pane_t3

0x0003,

0xfb1c,	// (0x0001d8cf) blid2_tripm_pane_t_ParamLimits

0xfb1c,	// (0x0001d8cf) blid2_tripm_pane_t

0x73a1,	// (0x00015154) cell_blid2_satellite_pane_ParamLimits

0x73a1,	// (0x00015154) cell_blid2_satellite_pane

0x73bf,	// (0x00015172) cell_blid2_satellite_pane_g1

0xd732,	// (0x0001b4e5) cell_blid2_satellite_pane_t1

0xc1b9,	// (0x00019f6c) blid2_speed_pane_g1

0xd740,	// (0x0001b4f3) blid2_speed_pane_t1

0xd74e,	// (0x0001b501) blid2_speed_pane_t2

0x0001,

0xfb25,	// (0x0001d8d8) blid2_speed_pane_t

0xc1b9,	// (0x00019f6c) blid2_navig_ring_pane_g1

0x73c8,	// (0x0001517b) blid2_navig_ring_pane_g2

0x73d0,	// (0x00015183) blid2_navig_ring_pane_g3

0x73d8,	// (0x0001518b) blid2_navig_ring_pane_g4

0x73e0,	// (0x00015193) blid2_navig_ring_pane_g5

0x0004,

0xfb2a,	// (0x0001d8dd) blid2_navig_ring_pane_g

0x927e,	// (0x00017031) bg_popup_window_pane_cp011

0xd75c,	// (0x0001b50f) popup_blid2_search_window_g1

0xd764,	// (0x0001b517) popup_blid2_search_window_t1

0xd772,	// (0x0001b525) popup_blid2_search_window_t2

0x0001,

0xfb35,	// (0x0001d8e8) popup_blid2_search_window_t

0x9f4f,	// (0x00017d02) main_browser_pane_g1

0x9aa1,	// (0x00017854) main_browser_pane_ParamLimits

0x92ee,	// (0x000170a1) bg_button_pane_cp011_ParamLimits

0x638a,	// (0x0001413d) cell_vitu2_function_pane_g1_ParamLimits

0xbcb1,	// (0x00019a64) bg_popup_sub_pane_cp22_ParamLimits

0x6cb7,	// (0x00014a6a) input_focus_pane_cp08_ParamLimits

0x6cce,	// (0x00014a81) popup_vitu2_query_button_pane_ParamLimits

0x6cce,	// (0x00014a81) popup_vitu2_query_button_pane

0x6cdf,	// (0x00014a92) popup_vitu2_query_input_button_pane

0xd28c,	// (0x0001b03f) popup_vitu2_query_window_g1_ParamLimits

0x6ce9,	// (0x00014a9c) popup_vitu2_query_window_g2_ParamLimits

0xfa36,	// (0x0001d7e9) popup_vitu2_query_window_g_ParamLimits

0x927e,	// (0x00017031) bg_button_pane_cp026

0x73e8,	// (0x0001519b) popup_vitu2_query_input_button_pane_g1

0x927e,	// (0x00017031) bg_button_pane_cp025

0xd780,	// (0x0001b533) popup_vitu2_query_button_pane_t1

0x4842,	// (0x000125f5) main_mp3_pane_t6

0x4850,	// (0x00012603) popup_slider_window_cp01

0xce8e,	// (0x0001ac41) cam4_battery_pane

0xcee7,	// (0x0001ac9a) cam4_battery_pane_cp02

0xd56d,	// (0x0001b320) cam4_battery_pane_cp01

0xd56d,	// (0x0001b320) cam4_battery_pane_cp03

0xc1b9,	// (0x00019f6c) cam4_battery_pane_g1

0xd78e,	// (0x0001b541) cam4_battery_pane_g2

0x0001,

0xfb3a,	// (0x0001d8ed) cam4_battery_pane_g

0xc083,	// (0x00019e36) popup_blid_sat_info2_window_t11

0x2b0c,	// (0x000108bf) aid_size_touch_mv_arrow_left_ParamLimits

0x2b35,	// (0x000108e8) aid_size_touch_mv_arrow_right_ParamLimits

0xa772,	// (0x00018525) navi_pane_g1_ParamLimits

0x2b74,	// (0x00010927) navi_pane_g2_ParamLimits

0x2ba2,	// (0x00010955) navi_pane_g3_ParamLimits

0xf404,	// (0x0001d1b7) navi_pane_g_ParamLimits

0x2bfa,	// (0x000109ad) navi_pane_mv_t1_ParamLimits

0x54a2,	// (0x00013255) grid_imed_effect_pane_ParamLimits

0x1a06,	// (0x0000f7b9) aid_placing_vt_slider_lsc

0x9e9e,	// (0x00017c51) aid_placing_vt_slider_prt

0x92ee,	// (0x000170a1) bg_tb_trans_pane_cp01_ParamLimits

0xc340,	// (0x0001a0f3) popup_image_details_window_g1_ParamLimits

0xc353,	// (0x0001a106) popup_image_details_window_g2_ParamLimits

0xc368,	// (0x0001a11b) popup_image_details_window_g3_ParamLimits

0xc368,	// (0x0001a11b) popup_image_details_window_g3

0xf737,	// (0x0001d4ea) popup_image_details_window_g_ParamLimits

0xc37c,	// (0x0001a12f) popup_image_details_window_t1_ParamLimits

0xc38e,	// (0x0001a141) popup_image_details_window_t2_ParamLimits

0xc3a7,	// (0x0001a15a) popup_image_details_window_t3_ParamLimits

0xc3bb,	// (0x0001a16e) popup_image_details_window_t4_ParamLimits

0xc3d6,	// (0x0001a189) popup_image_details_window_t5_ParamLimits

0xf73e,	// (0x0001d4f1) popup_image_details_window_t_ParamLimits

0x7061,	// (0x00014e14) cl_header_name_pane_ParamLimits

0x7061,	// (0x00014e14) cl_header_name_pane

0x73f0,	// (0x000151a3) cl_header_name_pane_t1_ParamLimits

0x73f0,	// (0x000151a3) cl_header_name_pane_t1

0x7411,	// (0x000151c4) cl_header_name_pane_t2_ParamLimits

0x7411,	// (0x000151c4) cl_header_name_pane_t2

0x7453,	// (0x00015206) cl_header_name_pane_t3_ParamLimits

0x7453,	// (0x00015206) cl_header_name_pane_t3

0x0002,

0xfb3f,	// (0x0001d8f2) cl_header_name_pane_t_ParamLimits

0xfb3f,	// (0x0001d8f2) cl_header_name_pane_t

0x2bcb,	// (0x0001097e) navi_pane_mv_g2_ParamLimits

0xcf08,	// (0x0001acbb) field_vitu2_entry_pane_g1_ParamLimits

0xcf14,	// (0x0001acc7) field_vitu2_entry_pane_g2_ParamLimits

0xcf20,	// (0x0001acd3) field_vitu2_entry_pane_g3_ParamLimits

0xcf20,	// (0x0001acd3) field_vitu2_entry_pane_g3

0xf935,	// (0x0001d6e8) field_vitu2_entry_pane_g_ParamLimits

0x622a,	// (0x00013fdd) cell_vitu2_itu_pane_g1_ParamLimits

0x623a,	// (0x00013fed) cell_vitu2_itu_pane_g2_ParamLimits

0x623a,	// (0x00013fed) cell_vitu2_itu_pane_g2

0x0001,

0xf941,	// (0x0001d6f4) cell_vitu2_itu_pane_g_ParamLimits

0xf941,	// (0x0001d6f4) cell_vitu2_itu_pane_g

0x92ee,	// (0x000170a1) bg_vkb2_func_pane_cp05_ParamLimits

0x92ee,	// (0x000170a1) bg_vkb2_func_pane_cp05

0x92ee,	// (0x000170a1) bg_vkb2_func_pane_cp03

0x92ee,	// (0x000170a1) bg_vkb2_func_pane_cp04

0x92ee,	// (0x000170a1) bg_vkb2_func_pane_cp10_ParamLimits

0x92ee,	// (0x000170a1) bg_vkb2_func_pane_cp10

0x7003,	// (0x00014db6) bg_vkb2_func_pane_cp08

0x6fe9,	// (0x00014d9c) bg_vkb2_func_pane_cp06

0x6ff7,	// (0x00014daa) bg_vkb2_func_pane_cp07

0xd686,	// (0x0001b439) bg_vkb2_func_pane_cp11_ParamLimits

0xd686,	// (0x0001b439) bg_vkb2_func_pane_cp11

0xd69b,	// (0x0001b44e) bg_vkb2_func_pane_cp12_ParamLimits

0xd69b,	// (0x0001b44e) bg_vkb2_func_pane_cp12

0x927e,	// (0x00017031) bg_vkb2_func_pane_cp09

0xcf8e,	// (0x0001ad41) bg_vkb2_func_pane_g1

0xa060,	// (0x00017e13) bg_vkb2_func_pane_g2

0xcf96,	// (0x0001ad49) bg_vkb2_func_pane_g3

0xcf9e,	// (0x0001ad51) bg_vkb2_func_pane_g4

0xd217,	// (0x0001afca) bg_vkb2_func_pane_g5

0xcfb6,	// (0x0001ad69) bg_vkb2_func_pane_g6

0xcfbe,	// (0x0001ad71) bg_vkb2_func_pane_g7

0xcfae,	// (0x0001ad61) bg_vkb2_func_pane_g8

0xa040,	// (0x00017df3) bg_vkb2_func_pane_g9

0x0008,

0xfb46,	// (0x0001d8f9) bg_vkb2_func_pane_g

0x7312,	// (0x000150c5) blid2_tripm_pane_g6_ParamLimits

0x7312,	// (0x000150c5) blid2_tripm_pane_g6

0xcce3,	// (0x0001aa96) mp4_progress_pane_g1

0x738d,	// (0x00015140) blid2_tripm_values_pane_ParamLimits

0x738d,	// (0x00015140) blid2_tripm_values_pane

0x7484,	// (0x00015237) blid2_tripm_values_pane_t1

0x7492,	// (0x00015245) blid2_tripm_values_pane_t2

0x74a0,	// (0x00015253) blid2_tripm_values_pane_t3

0x74ae,	// (0x00015261) blid2_tripm_values_pane_t4

0x74bc,	// (0x0001526f) blid2_tripm_values_pane_t5

0x74ca,	// (0x0001527d) blid2_tripm_values_pane_t6

0x74d8,	// (0x0001528b) blid2_tripm_values_pane_t7

0x74e6,	// (0x00015299) blid2_tripm_values_pane_t8

0x74f4,	// (0x000152a7) blid2_tripm_values_pane_t9

0x0008,

0xfb59,	// (0x0001d90c) blid2_tripm_values_pane_t

0x1a48,	// (0x0000f7fb) call_video_pane_t1_ParamLimits

0x1a66,	// (0x0000f819) call_video_pane_t2_ParamLimits

0xf28d,	// (0x0001d040) call_video_pane_t_ParamLimits

0x30df,	// (0x00010e92) msg_header_pane_g1_ParamLimits

0xa9ad,	// (0x00018760) msg_header_pane_g2_ParamLimits

0xa9ad,	// (0x00018760) msg_header_pane_g2

0x0001,

0xf4a7,	// (0x0001d25a) msg_header_pane_g_ParamLimits

0xf4a7,	// (0x0001d25a) msg_header_pane_g

0x9aa1,	// (0x00017854) main_clock2_pane_ParamLimits

0x51ab,	// (0x00012f5e) grid_clock2_toolbar_pane_ParamLimits

0x51ab,	// (0x00012f5e) grid_clock2_toolbar_pane

0x51ab,	// (0x00012f5e) listscroll_clock2_pane_ParamLimits

0x51ab,	// (0x00012f5e) listscroll_clock2_pane

0x5293,	// (0x00013046) main_clock2_pane_t3_ParamLimits

0x5293,	// (0x00013046) main_clock2_pane_t3

0x52b6,	// (0x00013069) main_clock2_pane_t4_ParamLimits

0x52b6,	// (0x00013069) main_clock2_pane_t4

0xd798,	// (0x0001b54b) cell_clock2_toolbar_pane

0xd7a0,	// (0x0001b553) cell_clock2_toolbar_pane_cp01

0xd7a0,	// (0x0001b553) cell_clock2_toolbar_pane_cp02

0xd7a8,	// (0x0001b55b) cell_clock2_toolbar_pane_cp03

0xd7b0,	// (0x0001b563) list_clock2_pane

0xa6c5,	// (0x00018478) scroll_pane_cp10

0xd7b8,	// (0x0001b56b) list_single_clock2_pane_ParamLimits

0xd7b8,	// (0x0001b56b) list_single_clock2_pane

0xa812,	// (0x000185c5) list_highlight_pane_cp08

0xd7c5,	// (0x0001b578) list_single_clock2_pane_t1

0xd7d3,	// (0x0001b586) list_single_clock2_pane_t2

0x0001,

0xfb6c,	// (0x0001d91f) list_single_clock2_pane_t

0x927e,	// (0x00017031) bg_button_pane_cp10

0xd7e1,	// (0x0001b594) cell_clock2_toolbar_pane_g1

0x3132,	// (0x00010ee5) aid_main_viewer_pane_g1_ParamLimits

0x3132,	// (0x00010ee5) aid_main_viewer_pane_g1

0x3140,	// (0x00010ef3) aid_main_viewer_pane_g2_ParamLimits

0x3140,	// (0x00010ef3) aid_main_viewer_pane_g2

0x314e,	// (0x00010f01) aid_main_viewer_pane_g3_ParamLimits

0x314e,	// (0x00010f01) aid_main_viewer_pane_g3

0x315d,	// (0x00010f10) aid_main_viewer_pane_g4_ParamLimits

0x315d,	// (0x00010f10) aid_main_viewer_pane_g4

0x0003,

0xf4b8,	// (0x0001d26b) aid_main_viewer_pane_g_ParamLimits

0xf4b8,	// (0x0001d26b) aid_main_viewer_pane_g

0x3a69,	// (0x0001181c) main_calc_pane_ParamLimits

0x3a7d,	// (0x00011830) main_dialer2_pane_ParamLimits

0x927e,	// (0x00017031) main_cam6_pane

0x927e,	// (0x00017031) main_vid6_pane

0x51b7,	// (0x00012f6a) listscroll_gen_pane_cp06_ParamLimits

0x51b7,	// (0x00012f6a) listscroll_gen_pane_cp06

0x52d9,	// (0x0001308c) main_clock2_pane_t5_ParamLimits

0x52d9,	// (0x0001308c) main_clock2_pane_t5

0x5339,	// (0x000130ec) aid_call2_pane_cp10_ParamLimits

0x534b,	// (0x000130fe) aid_call_pane_cp10_ParamLimits

0xa747,	// (0x000184fa) popup_clock_analogue_window_cp10_g1_ParamLimits

0xa747,	// (0x000184fa) popup_clock_analogue_window_cp10_g2_ParamLimits

0x535d,	// (0x00013110) popup_clock_analogue_window_cp10_g3_ParamLimits

0x535d,	// (0x00013110) popup_clock_analogue_window_cp10_g4_ParamLimits

0xa747,	// (0x000184fa) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7ee,	// (0x0001d5a1) popup_clock_analogue_window_cp10_g_ParamLimits

0x536f,	// (0x00013122) popup_clock_analogue_window_cp10_t1_ParamLimits

0x59fa,	// (0x000137ad) cell_dialer2_keypad_pane_g2_ParamLimits

0x59fa,	// (0x000137ad) cell_dialer2_keypad_pane_g2

0x0001,

0xf8d4,	// (0x0001d687) cell_dialer2_keypad_pane_g_ParamLimits

0xf8d4,	// (0x0001d687) cell_dialer2_keypad_pane_g

0x5a16,	// (0x000137c9) cell_dialer2_keypad_pane_t1

0x66a1,	// (0x00014454) main_cset_text2_pane_ParamLimits

0x66a1,	// (0x00014454) main_cset_text2_pane

0xd474,	// (0x0001b227) area_vitu2_query_pane_g1_ParamLimits

0x6f88,	// (0x00014d3b) area_vitu2_query_pane_g2_ParamLimits

0xfa89,	// (0x0001d83c) area_vitu2_query_pane_g_ParamLimits

0xd4f8,	// (0x0001b2ab) area_vitu2_query_pane_t7_ParamLimits

0xd4f8,	// (0x0001b2ab) area_vitu2_query_pane_t7

0x6fe9,	// (0x00014d9c) bg_button_pane_cp018_ParamLimits

0x6ff7,	// (0x00014daa) bg_button_pane_cp021_ParamLimits

0x7003,	// (0x00014db6) bg_button_pane_cp022_ParamLimits

0x7003,	// (0x00014db6) bg_vkb2_func_pane_cp08_ParamLimits

0x6fe9,	// (0x00014d9c) bg_vkb2_func_pane_cp06_ParamLimits

0x6ff7,	// (0x00014daa) bg_vkb2_func_pane_cp07_ParamLimits

0x7014,	// (0x00014dc7) input_focus_pane_cp09_ParamLimits

0xd7e9,	// (0x0001b59c) cam6_autofocus_pane_ParamLimits

0xd7e9,	// (0x0001b59c) cam6_autofocus_pane

0x7502,	// (0x000152b5) cam6_image_uncrop_pane_ParamLimits

0x7502,	// (0x000152b5) cam6_image_uncrop_pane

0x7511,	// (0x000152c4) cam6_indi_pane_ParamLimits

0x7511,	// (0x000152c4) cam6_indi_pane

0x7527,	// (0x000152da) cam6_mode_pane_ParamLimits

0x7527,	// (0x000152da) cam6_mode_pane

0x7539,	// (0x000152ec) cam6_timer_pane_ParamLimits

0x7539,	// (0x000152ec) cam6_timer_pane

0x7545,	// (0x000152f8) cam6_zoom_pane_ParamLimits

0x7545,	// (0x000152f8) cam6_zoom_pane

0x7551,	// (0x00015304) cam6_mode_pane_g1_ParamLimits

0x7551,	// (0x00015304) cam6_mode_pane_g1

0x7561,	// (0x00015314) cam6_mode_pane_g2_ParamLimits

0x7561,	// (0x00015314) cam6_mode_pane_g2

0x7571,	// (0x00015324) cam6_mode_pane_g3_ParamLimits

0x7571,	// (0x00015324) cam6_mode_pane_g3

0x7581,	// (0x00015334) cam6_mode_pane_g4_ParamLimits

0x7581,	// (0x00015334) cam6_mode_pane_g4

0x0003,

0xfb71,	// (0x0001d924) cam6_mode_pane_g_ParamLimits

0xfb71,	// (0x0001d924) cam6_mode_pane_g

0xd7f7,	// (0x0001b5aa) bg_tb_trans_pane_cp08_ParamLimits

0xd7f7,	// (0x0001b5aa) bg_tb_trans_pane_cp08

0xd805,	// (0x0001b5b8) cam6_battery_pane_ParamLimits

0xd805,	// (0x0001b5b8) cam6_battery_pane

0xd81b,	// (0x0001b5ce) cam6_indi_pane_g1_ParamLimits

0xd81b,	// (0x0001b5ce) cam6_indi_pane_g1

0xd82d,	// (0x0001b5e0) cam6_indi_pane_g2_ParamLimits

0xd82d,	// (0x0001b5e0) cam6_indi_pane_g2

0xd83f,	// (0x0001b5f2) cam6_indi_pane_g3_ParamLimits

0xd83f,	// (0x0001b5f2) cam6_indi_pane_g3

0x0002,

0xfb7a,	// (0x0001d92d) cam6_indi_pane_g_ParamLimits

0xfb7a,	// (0x0001d92d) cam6_indi_pane_g

0xd851,	// (0x0001b604) cam6_indi_pane_t1_ParamLimits

0xd851,	// (0x0001b604) cam6_indi_pane_t1

0x7591,	// (0x00015344) cam6_autofocus_pane_g1

0x7599,	// (0x0001534c) cam6_autofocus_pane_g2

0x75a1,	// (0x00015354) cam6_autofocus_pane_g3

0x75a9,	// (0x0001535c) cam6_autofocus_pane_g4

0x0003,

0xfb81,	// (0x0001d934) cam6_autofocus_pane_g

0xd877,	// (0x0001b62a) cam6_timer_pane_g1

0xd87f,	// (0x0001b632) cam6_timer_pane_t1

0xd88d,	// (0x0001b640) cam6_zoom_cont_pane

0xd895,	// (0x0001b648) cam6_zoom_pane_g1

0xd89d,	// (0x0001b650) cam6_zoom_pane_g2

0x75b1,	// (0x00015364) cam6_zoom_pane_g3

0x0002,

0xfb8a,	// (0x0001d93d) cam6_zoom_pane_g

0xc1b9,	// (0x00019f6c) cam6_battery_pane_g1

0xc1b9,	// (0x00019f6c) cam6_battery_pane_g2

0x0001,

0xf6fb,	// (0x0001d4ae) cam6_battery_pane_g

0xd8a5,	// (0x0001b658) cam6_zoom_cont_pane_g1

0xd8ae,	// (0x0001b661) cam6_zoom_cont_pane_g2

0xd8b7,	// (0x0001b66a) cam6_zoom_cont_pane_g3

0x0002,

0xfb91,	// (0x0001d944) cam6_zoom_cont_pane_g

0x75ce,	// (0x00015381) cam6_mode_pane_cp_ParamLimits

0x75ce,	// (0x00015381) cam6_mode_pane_cp

0x7545,	// (0x000152f8) cam6_zoom_pane_cp_ParamLimits

0x7545,	// (0x000152f8) cam6_zoom_pane_cp

0x75e0,	// (0x00015393) vid6_image_uncrop_cif_pane_ParamLimits

0x75e0,	// (0x00015393) vid6_image_uncrop_cif_pane

0x75f0,	// (0x000153a3) vid6_image_uncrop_nhd_pane_ParamLimits

0x75f0,	// (0x000153a3) vid6_image_uncrop_nhd_pane

0x7502,	// (0x000152b5) vid6_image_uncrop_vga_pane_ParamLimits

0x7502,	// (0x000152b5) vid6_image_uncrop_vga_pane

0x75ff,	// (0x000153b2) vid6_image_uncrop_wvga_pane_ParamLimits

0x75ff,	// (0x000153b2) vid6_image_uncrop_wvga_pane

0x760e,	// (0x000153c1) vid6_indi_pane_ParamLimits

0x760e,	// (0x000153c1) vid6_indi_pane

0xd7f7,	// (0x0001b5aa) bg_tb_trans_pane_cp09_ParamLimits

0xd7f7,	// (0x0001b5aa) bg_tb_trans_pane_cp09

0xd8cf,	// (0x0001b682) cam6_battery_pane_cp_ParamLimits

0xd8cf,	// (0x0001b682) cam6_battery_pane_cp

0xd8db,	// (0x0001b68e) vid6_indi_pane_g1_ParamLimits

0xd8db,	// (0x0001b68e) vid6_indi_pane_g1

0xd8ed,	// (0x0001b6a0) vid6_indi_pane_g2_ParamLimits

0xd8ed,	// (0x0001b6a0) vid6_indi_pane_g2

0xd8ff,	// (0x0001b6b2) vid6_indi_pane_g3_ParamLimits

0xd8ff,	// (0x0001b6b2) vid6_indi_pane_g3

0xd914,	// (0x0001b6c7) vid6_indi_pane_g4_ParamLimits

0xd914,	// (0x0001b6c7) vid6_indi_pane_g4

0xd929,	// (0x0001b6dc) vid6_indi_pane_g5_ParamLimits

0xd929,	// (0x0001b6dc) vid6_indi_pane_g5

0x0004,

0xfb98,	// (0x0001d94b) vid6_indi_pane_g_ParamLimits

0xfb98,	// (0x0001d94b) vid6_indi_pane_g

0xd943,	// (0x0001b6f6) vid6_indi_pane_t1_ParamLimits

0xd943,	// (0x0001b6f6) vid6_indi_pane_t1

0xd959,	// (0x0001b70c) vid6_indi_pane_t2_ParamLimits

0xd959,	// (0x0001b70c) vid6_indi_pane_t2

0xd981,	// (0x0001b734) vid6_indi_pane_t3_ParamLimits

0xd981,	// (0x0001b734) vid6_indi_pane_t3

0xd9a9,	// (0x0001b75c) vid6_indi_pane_t4_ParamLimits

0xd9a9,	// (0x0001b75c) vid6_indi_pane_t4

0x0003,

0xfba3,	// (0x0001d956) vid6_indi_pane_t_ParamLimits

0xfba3,	// (0x0001d956) vid6_indi_pane_t

0xd9cd,	// (0x0001b780) wait_bar_pane_cp08

0x7626,	// (0x000153d9) main_cset_text2_pane_t1_ParamLimits

0x7626,	// (0x000153d9) main_cset_text2_pane_t1

0x75b9,	// (0x0001536c) listscroll_gen_pane_cp06_t1_ParamLimits

0x75b9,	// (0x0001536c) listscroll_gen_pane_cp06_t1

0x927e,	// (0x00017031) main_cam6_set_pane

0xc420,	// (0x0001a1d3) bg_tb_trans_pane_cp06_ParamLimits

0xce96,	// (0x0001ac49) cam4_indicators_pane_g1_ParamLimits

0xcea7,	// (0x0001ac5a) cam4_indicators_pane_g2_ParamLimits

0xf911,	// (0x0001d6c4) cam4_indicators_pane_g_ParamLimits

0xcec5,	// (0x0001ac78) cam4_indicators_pane_t1_ParamLimits

0xca80,	// (0x0001a833) bg_tb_trans_pane_cp07_ParamLimits

0x5fb0,	// (0x00013d63) vid4_indicators_pane_g1_ParamLimits

0x5fbd,	// (0x00013d70) vid4_indicators_pane_g2_ParamLimits

0x5fca,	// (0x00013d7d) vid4_indicators_pane_g3_ParamLimits

0x5fd7,	// (0x00013d8a) vid4_indicators_pane_g4_ParamLimits

0xf923,	// (0x0001d6d6) vid4_indicators_pane_g_ParamLimits

0x5fef,	// (0x00013da2) vid4_indicators_pane_t1_ParamLimits

0xd575,	// (0x0001b328) vid4_progress_pane_g1_ParamLimits

0xd585,	// (0x0001b338) vid4_progress_pane_g2_ParamLimits

0xd595,	// (0x0001b348) vid4_progress_pane_g3_ParamLimits

0xcea7,	// (0x0001ac5a) vid4_progress_pane_g4_ParamLimits

0xfad4,	// (0x0001d887) vid4_progress_pane_g_ParamLimits

0xd5a1,	// (0x0001b354) vid4_progress_pane_t1_ParamLimits

0xd5b6,	// (0x0001b369) vid4_progress_pane_t2_ParamLimits

0xd5cc,	// (0x0001b37f) vid4_progress_pane_t3_ParamLimits

0xfadf,	// (0x0001d892) vid4_progress_pane_t_ParamLimits

0xd5e1,	// (0x0001b394) wait_bar_pane_cp07_ParamLimits

0x7646,	// (0x000153f9) main_cam6_set_pane_g2_ParamLimits

0x7646,	// (0x000153f9) main_cam6_set_pane_g2

0x766a,	// (0x0001541d) main_cset6_listscroll_pane_ParamLimits

0x766a,	// (0x0001541d) main_cset6_listscroll_pane

0x7686,	// (0x00015439) main_cset6_slider_pane_ParamLimits

0x7686,	// (0x00015439) main_cset6_slider_pane

0x769c,	// (0x0001544f) main_cset6_text2_pane_ParamLimits

0x769c,	// (0x0001544f) main_cset6_text2_pane

0xd9dc,	// (0x0001b78f) main_cset6_text_pane

0xd9e4,	// (0x0001b797) main_cset_list_pane_copy1_ParamLimits

0xd9e4,	// (0x0001b797) main_cset_list_pane_copy1

0xd9f4,	// (0x0001b7a7) scroll_pane_cp028_copy1

0x76aa,	// (0x0001545d) cset_list_set_pane_copy1

0x76bd,	// (0x00015470) aid_position_infowindow_above_copy1

0x76c5,	// (0x00015478) aid_position_infowindow_below_copy1

0xd9fd,	// (0x0001b7b0) cset_list_set_pane_g1_copy1

0xda05,	// (0x0001b7b8) cset_list_set_pane_g3_copy1_ParamLimits

0xda05,	// (0x0001b7b8) cset_list_set_pane_g3_copy1

0xda14,	// (0x0001b7c7) cset_list_set_pane_t1_copy1_ParamLimits

0xda14,	// (0x0001b7c7) cset_list_set_pane_t1_copy1

0x92ee,	// (0x000170a1) list_highlight_pane_cp021_copy1_ParamLimits

0x92ee,	// (0x000170a1) list_highlight_pane_cp021_copy1

0xda29,	// (0x0001b7dc) cset6_slider_pane_ParamLimits

0xda29,	// (0x0001b7dc) cset6_slider_pane

0xda55,	// (0x0001b808) main_cset6_slider_pane_g1_ParamLimits

0xda55,	// (0x0001b808) main_cset6_slider_pane_g1

0x76cd,	// (0x00015480) main_cset6_slider_pane_g2_ParamLimits

0x76cd,	// (0x00015480) main_cset6_slider_pane_g2

0xd0bd,	// (0x0001ae70) main_cset6_slider_pane_g3_ParamLimits

0xd0bd,	// (0x0001ae70) main_cset6_slider_pane_g3

0x6766,	// (0x00014519) main_cset6_slider_pane_g4_ParamLimits

0x6766,	// (0x00014519) main_cset6_slider_pane_g4

0x67ae,	// (0x00014561) main_cset6_slider_pane_g5_ParamLimits

0x67ae,	// (0x00014561) main_cset6_slider_pane_g5

0xd0bd,	// (0x0001ae70) main_cset6_slider_pane_g7_ParamLimits

0xd0bd,	// (0x0001ae70) main_cset6_slider_pane_g7

0xd0c9,	// (0x0001ae7c) main_cset6_slider_pane_g8_ParamLimits

0xd0c9,	// (0x0001ae7c) main_cset6_slider_pane_g8

0x674e,	// (0x00014501) main_cset6_slider_pane_g9_ParamLimits

0x674e,	// (0x00014501) main_cset6_slider_pane_g9

0x675a,	// (0x0001450d) main_cset6_slider_pane_g10_ParamLimits

0x675a,	// (0x0001450d) main_cset6_slider_pane_g10

0x6766,	// (0x00014519) main_cset6_slider_pane_g11_ParamLimits

0x6766,	// (0x00014519) main_cset6_slider_pane_g11

0x6772,	// (0x00014525) main_cset6_slider_pane_g12_ParamLimits

0x6772,	// (0x00014525) main_cset6_slider_pane_g12

0x677e,	// (0x00014531) main_cset6_slider_pane_g13_ParamLimits

0x677e,	// (0x00014531) main_cset6_slider_pane_g13

0x678a,	// (0x0001453d) main_cset6_slider_pane_g14_ParamLimits

0x678a,	// (0x0001453d) main_cset6_slider_pane_g14

0x76f5,	// (0x000154a8) main_cset6_slider_pane_g15_ParamLimits

0x76f5,	// (0x000154a8) main_cset6_slider_pane_g15

0x67ae,	// (0x00014561) main_cset6_slider_pane_g16_ParamLimits

0x67ae,	// (0x00014561) main_cset6_slider_pane_g16

0x67ba,	// (0x0001456d) main_cset6_slider_pane_g17_ParamLimits

0x67ba,	// (0x0001456d) main_cset6_slider_pane_g17

0x0011,

0xfbac,	// (0x0001d95f) main_cset6_slider_pane_g_ParamLimits

0xfbac,	// (0x0001d95f) main_cset6_slider_pane_g

0xda7d,	// (0x0001b830) main_cset6_slider_pane_t1_ParamLimits

0xda7d,	// (0x0001b830) main_cset6_slider_pane_t1

0x770d,	// (0x000154c0) main_cset6_slider_pane_t2_ParamLimits

0x770d,	// (0x000154c0) main_cset6_slider_pane_t2

0x7738,	// (0x000154eb) main_cset6_slider_pane_t3_ParamLimits

0x7738,	// (0x000154eb) main_cset6_slider_pane_t3

0x7763,	// (0x00015516) main_cset6_slider_pane_t4_ParamLimits

0x7763,	// (0x00015516) main_cset6_slider_pane_t4

0x778e,	// (0x00015541) main_cset6_slider_pane_t5_ParamLimits

0x778e,	// (0x00015541) main_cset6_slider_pane_t5

0xdabe,	// (0x0001b871) main_cset6_slider_pane_t7_ParamLimits

0xdabe,	// (0x0001b871) main_cset6_slider_pane_t7

0x77b9,	// (0x0001556c) main_cset6_slider_pane_t8_ParamLimits

0x77b9,	// (0x0001556c) main_cset6_slider_pane_t8

0x77dd,	// (0x00015590) main_cset6_slider_pane_t9_ParamLimits

0x77dd,	// (0x00015590) main_cset6_slider_pane_t9

0x7801,	// (0x000155b4) main_cset6_slider_pane_t10_ParamLimits

0x7801,	// (0x000155b4) main_cset6_slider_pane_t10

0x7825,	// (0x000155d8) main_cset6_slider_pane_t11_ParamLimits

0x7825,	// (0x000155d8) main_cset6_slider_pane_t11

0xdaf4,	// (0x0001b8a7) main_cset6_slider_pane_t14_ParamLimits

0xdaf4,	// (0x0001b8a7) main_cset6_slider_pane_t14

0xdb2d,	// (0x0001b8e0) main_cset6_slider_pane_t15_ParamLimits

0xdb2d,	// (0x0001b8e0) main_cset6_slider_pane_t15

0x000b,

0xfbd1,	// (0x0001d984) main_cset6_slider_pane_t_ParamLimits

0xfbd1,	// (0x0001d984) main_cset6_slider_pane_t

0xd1a1,	// (0x0001af54) cset_slider_pane_g1_copy1

0xd1aa,	// (0x0001af5d) cset_slider_pane_g2_copy1

0xd1b3,	// (0x0001af66) cset_slider_pane_g3_copy1

0x927e,	// (0x00017031) bg_popup_sub_pane_cp011_copy1

0xd298,	// (0x0001b04b) main_cset_text_pane_g1_copy1

0xd2a0,	// (0x0001b053) main_cset_text_pane_t1_copy1

0xd2ae,	// (0x0001b061) main_cset_text_pane_t2_copy1

0xd2bc,	// (0x0001b06f) main_cset_text_pane_t3_copy1

0xd2ca,	// (0x0001b07d) main_cset_text_pane_t4_copy1

0xd2d8,	// (0x0001b08b) main_cset_text_pane_t5_copy1

0xd2e6,	// (0x0001b099) main_cset_text_pane_t6_copy1

0xd2f4,	// (0x0001b0a7) main_cset_text_pane_t7_copy1

0x7626,	// (0x000153d9) main_cset_text2_pane_t1_copy1

0x927e,	// (0x00017031) main_ncimui_pane

0x3cb3,	// (0x00011a66) popup_query_ncimui_window_ParamLimits

0x3cb3,	// (0x00011a66) popup_query_ncimui_window

0xc485,	// (0x0001a238) field_cale_ev2_pane_g4_ParamLimits

0xc485,	// (0x0001a238) field_cale_ev2_pane_g4

0x58d2,	// (0x00013685) cell_video_dialer_keypad_pane_g2_ParamLimits

0x58d2,	// (0x00013685) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8af,	// (0x0001d662) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8af,	// (0x0001d662) cell_video_dialer_keypad_pane_g

0x58ea,	// (0x0001369d) cell_video_dialer_keypad_pane_t1

0x927e,	// (0x00017031) bg_popup_window_pane_cp012

0xa595,	// (0x00018348) heading_pane_cp06

0xdc55,	// (0x0001ba08) ncim_query_content_pane

0x927e,	// (0x00017031) bg_popup_heading_pane_cp01

0xdc5d,	// (0x0001ba10) ncim_heading_pane_t1

0xdc6b,	// (0x0001ba1e) ncim_indicator_popup_pane

0xdc7d,	// (0x0001ba30) ncim_query_button_pane

0xdc91,	// (0x0001ba44) ncim_query_content_pane_t1

0xdca3,	// (0x0001ba56) ncim_query_content_pane_t2

0x0005,

0xfc10,	// (0x0001d9c3) ncim_query_content_pane_t

0xdcdd,	// (0x0001ba90) ncim_query_list_pane

0xdcef,	// (0x0001baa2) ncim_query_popup_pane

0xdc6b,	// (0x0001ba1e) ncim_indicator_popup_pane_ParamLimits

0x7942,	// (0x000156f5) ncim_query_content_pane_g1_ParamLimits

0x7942,	// (0x000156f5) ncim_query_content_pane_g1

0xdc91,	// (0x0001ba44) ncim_query_content_pane_t1_ParamLimits

0xdca3,	// (0x0001ba56) ncim_query_content_pane_t2_ParamLimits

0x794e,	// (0x00015701) ncim_query_content_pane_t3_ParamLimits

0x794e,	// (0x00015701) ncim_query_content_pane_t3

0x7976,	// (0x00015729) ncim_query_content_pane_t4_ParamLimits

0x7976,	// (0x00015729) ncim_query_content_pane_t4

0x799e,	// (0x00015751) ncim_query_content_pane_t5_ParamLimits

0x799e,	// (0x00015751) ncim_query_content_pane_t5

0xdcb5,	// (0x0001ba68) ncim_query_content_pane_t6_ParamLimits

0xdcb5,	// (0x0001ba68) ncim_query_content_pane_t6

0xfc10,	// (0x0001d9c3) ncim_query_content_pane_t_ParamLimits

0xdcdd,	// (0x0001ba90) ncim_query_list_pane_ParamLimits

0xdcef,	// (0x0001baa2) ncim_query_popup_pane_ParamLimits

0xdd03,	// (0x0001bab6) wait_bar_pane_cp04

0x927e,	// (0x00017031) input_focus_pane_cp011

0xdd0b,	// (0x0001babe) ncim_query_popup_pane_t1

0xdd19,	// (0x0001bacc) ncim_list_query_list_pane_ParamLimits

0xdd19,	// (0x0001bacc) ncim_list_query_list_pane

0x927e,	// (0x00017031) bg_button_pane_cp027

0xdd2c,	// (0x0001badf) ncim_query_button_pane_g1

0x927e,	// (0x00017031) list_highlight_pane_cp012

0xdd36,	// (0x0001bae9) ncim_list_query_list_pane_g1

0xdd3e,	// (0x0001baf1) ncim_list_query_list_pane_t1

0xceb6,	// (0x0001ac69) cam4_indicators_pane_g3_ParamLimits

0xceb6,	// (0x0001ac69) cam4_indicators_pane_g3

0x5fe3,	// (0x00013d96) vid4_indicators_pane_g5_ParamLimits

0x5fe3,	// (0x00013d96) vid4_indicators_pane_g5

0xceb6,	// (0x0001ac69) vid4_progress_pane_g5_ParamLimits

0xceb6,	// (0x0001ac69) vid4_progress_pane_g5

0x785b,	// (0x0001560e) main_ncimui_pane_g1

0x78b1,	// (0x00015664) ncimui_group_query_pane_ParamLimits

0x78b1,	// (0x00015664) ncimui_group_query_pane

0x78ed,	// (0x000156a0) ncimui_list_pane_ParamLimits

0x78ed,	// (0x000156a0) ncimui_list_pane

0x790e,	// (0x000156c1) ncimui_text_pane_ParamLimits

0x790e,	// (0x000156c1) ncimui_text_pane

0x79c6,	// (0x00015779) ncimui_text_pane_t1_ParamLimits

0x79c6,	// (0x00015779) ncimui_text_pane_t1

0xdd4c,	// (0x0001baff) ncimui_list_single_graphic_pane_ParamLimits

0xdd4c,	// (0x0001baff) ncimui_list_single_graphic_pane

0x79e4,	// (0x00015797) ncimui_query_pane_ParamLimits

0x79e4,	// (0x00015797) ncimui_query_pane

0x927e,	// (0x00017031) list_highlight_pane_cp013

0xdd5c,	// (0x0001bb0f) ncim_list_query_list_pane_t1_copy1

0xdd36,	// (0x0001bae9) ncim_list_single_graphic_pane_g1

0xdd6a,	// (0x0001bb1d) ncim_query_button_pane_cp01

0xdd76,	// (0x0001bb29) ncim_query_entry_pane_ParamLimits

0xdd76,	// (0x0001bb29) ncim_query_entry_pane

0xdd89,	// (0x0001bb3c) ncimui_query_pane_g1

0xdd95,	// (0x0001bb48) ncimui_query_pane_t1_ParamLimits

0xdd95,	// (0x0001bb48) ncimui_query_pane_t1

0x92ee,	// (0x000170a1) input_focus_pane_cp012

0xddae,	// (0x0001bb61) ncim_query_entry_pane_t1

0x9aa1,	// (0x00017854) main_im_pane_ParamLimits

0x92ee,	// (0x000170a1) main_mobtv_pane_ParamLimits

0x92ee,	// (0x000170a1) main_mobtv_pane

0x674e,	// (0x00014501) main_cset6_slider_pane_g18_ParamLimits

0x674e,	// (0x00014501) main_cset6_slider_pane_g18

0x677e,	// (0x00014531) main_cset6_slider_pane_g19_ParamLimits

0x677e,	// (0x00014531) main_cset6_slider_pane_g19

0xddc0,	// (0x0001bb73) bg_main_mobtv_pane_ParamLimits

0xddc0,	// (0x0001bb73) bg_main_mobtv_pane

0x79f7,	// (0x000157aa) main_mobtv_info_pane

0x7a00,	// (0x000157b3) main_mobtv_loading_pane_ParamLimits

0x7a00,	// (0x000157b3) main_mobtv_loading_pane

0xddce,	// (0x0001bb81) main_mobtv_pg_channel_list_pane

0xddd8,	// (0x0001bb8b) main_mobtv_pg_hdr_pane

0x7a0d,	// (0x000157c0) main_mobtv_programe_curr_pane_ParamLimits

0x7a0d,	// (0x000157c0) main_mobtv_programe_curr_pane

0x7a1a,	// (0x000157cd) main_mobtv_programe_next_pane_ParamLimits

0x7a1a,	// (0x000157cd) main_mobtv_programe_next_pane

0xdde1,	// (0x0001bb94) popup_mobtv_noti_window

0xc1b9,	// (0x00019f6c) main_tv_pg_hdr_pane_g1

0xdde9,	// (0x0001bb9c) main_tv_pg_hdr_pane_g2

0xddf1,	// (0x0001bba4) main_tv_pg_hdr_pane_g3

0xddf9,	// (0x0001bbac) main_tv_pg_hdr_pane_g4

0xde01,	// (0x0001bbb4) main_tv_pg_hdr_pane_g5

0xde0b,	// (0x0001bbbe) main_tv_pg_hdr_pane_g6

0xde15,	// (0x0001bbc8) main_tv_pg_hdr_pane_g7

0xde1f,	// (0x0001bbd2) main_tv_pg_hdr_pane_g8

0xde29,	// (0x0001bbdc) main_tv_pg_hdr_pane_g9

0xde33,	// (0x0001bbe6) main_tv_pg_hdr_pane_g10

0xde3d,	// (0x0001bbf0) main_tv_pg_hdr_pane_g11

0x000a,

0xfc1d,	// (0x0001d9d0) main_tv_pg_hdr_pane_g

0xde47,	// (0x0001bbfa) main_tv_pg_hdr_pane_t1

0xde55,	// (0x0001bc08) main_tv_pg_hdr_pane_t2

0xde63,	// (0x0001bc16) main_tv_pg_hdr_pane_t3

0xde73,	// (0x0001bc26) main_tv_pg_hdr_pane_t4

0xde83,	// (0x0001bc36) main_tv_pg_hdr_pane_t5

0x0004,

0xfc34,	// (0x0001d9e7) main_tv_pg_hdr_pane_t

0xde93,	// (0x0001bc46) single_mobtv_pg_channel_pane_ParamLimits

0xde93,	// (0x0001bc46) single_mobtv_pg_channel_pane

0xdea5,	// (0x0001bc58) single_mobtv_pg_channel_table_pane

0xdeae,	// (0x0001bc61) single_mobtv_pg_channel_thumb_pane

0xdeb7,	// (0x0001bc6a) single_tv_pg_channel_pane_g1

0xdec0,	// (0x0001bc73) single_tv_pg_channel_pane_g2

0x0001,

0xfc3f,	// (0x0001d9f2) single_tv_pg_channel_pane_g

0xc420,	// (0x0001a1d3) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc420,	// (0x0001a1d3) bg_single_mobtv_pg_channel_thumb_pane

0xdec9,	// (0x0001bc7c) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdec9,	// (0x0001bc7c) single_mobtv_pg_channel_thumb_pane_g1

0xded7,	// (0x0001bc8a) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xded7,	// (0x0001bc8a) single_mobtv_pg_channel_thumb_pane_g2

0xdee3,	// (0x0001bc96) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xdee3,	// (0x0001bc96) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc44,	// (0x0001d9f7) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc44,	// (0x0001d9f7) single_mobtv_pg_channel_thumb_pane_g

0xdeef,	// (0x0001bca2) single_mobtv_pg_channel_thumb_pane_t1

0xdefd,	// (0x0001bcb0) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc4b,	// (0x0001d9fe) single_mobtv_pg_channel_thumb_pane_t

0xc1b9,	// (0x00019f6c) bg_single_mobtv_pg_channel_table_pane_g1

0xc1b9,	// (0x00019f6c) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6fb,	// (0x0001d4ae) bg_single_mobtv_pg_channel_table_pane_g

0xdf0b,	// (0x0001bcbe) single_mobtv_pg_channel_table_pane_t1

0xdf19,	// (0x0001bccc) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc50,	// (0x0001da03) single_mobtv_pg_channel_table_pane_t

0x7a2f,	// (0x000157e2) main_mobtv_info_pane_g1_ParamLimits

0x7a2f,	// (0x000157e2) main_mobtv_info_pane_g1

0x7a4d,	// (0x00015800) main_mobtv_info_pane_t1_ParamLimits

0x7a4d,	// (0x00015800) main_mobtv_info_pane_t1

0x7ac5,	// (0x00015878) main_mobtv_info_pane_t2_ParamLimits

0x7ac5,	// (0x00015878) main_mobtv_info_pane_t2

0x0002,

0xfc5a,	// (0x0001da0d) main_mobtv_info_pane_t_ParamLimits

0xfc5a,	// (0x0001da0d) main_mobtv_info_pane_t

0x7b54,	// (0x00015907) wait_bar_pane_cp05

0x7b66,	// (0x00015919) main_mobtv_loading_pane_g1_ParamLimits

0x7b66,	// (0x00015919) main_mobtv_loading_pane_g1

0x7b79,	// (0x0001592c) main_mobtv_loading_pane_g2_ParamLimits

0x7b79,	// (0x0001592c) main_mobtv_loading_pane_g2

0x7b85,	// (0x00015938) main_mobtv_loading_pane_g3_ParamLimits

0x7b85,	// (0x00015938) main_mobtv_loading_pane_g3

0x0002,

0xfc61,	// (0x0001da14) main_mobtv_loading_pane_g_ParamLimits

0xfc61,	// (0x0001da14) main_mobtv_loading_pane_g

0xdf27,	// (0x0001bcda) main_mobtv_loading_pane_t1_ParamLimits

0xdf27,	// (0x0001bcda) main_mobtv_loading_pane_t1

0xdf3f,	// (0x0001bcf2) main_mobtv_loading_pane_t2_ParamLimits

0xdf3f,	// (0x0001bcf2) main_mobtv_loading_pane_t2

0x0001,

0xfc68,	// (0x0001da1b) main_mobtv_loading_pane_t_ParamLimits

0xfc68,	// (0x0001da1b) main_mobtv_loading_pane_t

0x7b98,	// (0x0001594b) wait_bar_pane_cp06_ParamLimits

0x7b98,	// (0x0001594b) wait_bar_pane_cp06

0xdf63,	// (0x0001bd16) main_mobtv_programe_curr_pane_t1

0xdf71,	// (0x0001bd24) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc6d,	// (0x0001da20) main_mobtv_programe_curr_pane_t

0xdf7f,	// (0x0001bd32) main_mobtv_programe_next_pane_t1

0xdf8d,	// (0x0001bd40) main_mobtv_programe_next_pane_t2

0xdf9b,	// (0x0001bd4e) main_mobtv_programe_next_pane_t3

0x0002,

0xfc72,	// (0x0001da25) main_mobtv_programe_next_pane_t

0x927e,	// (0x00017031) bg_popup_mobtv_noti_window_pane

0xdfa9,	// (0x0001bd5c) popup_mobtv_noti_window_g1

0xdfb1,	// (0x0001bd64) popup_mobtv_noti_window_t1

0xdfbf,	// (0x0001bd72) popup_mobtv_noti_window_t2

0x0001,

0xfc79,	// (0x0001da2c) popup_mobtv_noti_window_t

0xc1b9,	// (0x00019f6c) bg_popup_mobtv_noti_window_pane_g1

0x927e,	// (0x00017031) sc_clock_pane

0x927e,	// (0x00017031) main_fs_bigclock_pane

0x7377,	// (0x0001512a) blid2_tripm_pane_t4_ParamLimits

0x7377,	// (0x0001512a) blid2_tripm_pane_t4

0x7ba7,	// (0x0001595a) sc_clock_pane_g1_ParamLimits

0x7ba7,	// (0x0001595a) sc_clock_pane_g1

0x7bb9,	// (0x0001596c) sc_clock_pane_t1_ParamLimits

0x7bb9,	// (0x0001596c) sc_clock_pane_t1

0x7bdb,	// (0x0001598e) sc_clock_pane_t2_ParamLimits

0x7bdb,	// (0x0001598e) sc_clock_pane_t2

0x7bf3,	// (0x000159a6) sc_clock_pane_t3_ParamLimits

0x7bf3,	// (0x000159a6) sc_clock_pane_t3

0x0004,

0xfc7e,	// (0x0001da31) sc_clock_pane_t_ParamLimits

0xfc7e,	// (0x0001da31) sc_clock_pane_t

0x8973,	// (0x00016726) main_fs_bigclock_indicator_pane_ParamLimits

0x8973,	// (0x00016726) main_fs_bigclock_indicator_pane

0xc3f0,	// (0x0001a1a3) main_fs_bigclock_pane_g1_ParamLimits

0xc3f0,	// (0x0001a1a3) main_fs_bigclock_pane_g1

0x897f,	// (0x00016732) main_fs_bigclock_pane_t1_ParamLimits

0x897f,	// (0x00016732) main_fs_bigclock_pane_t1

0x8991,	// (0x00016744) main_fs_bigclock_pane_t2_ParamLimits

0x8991,	// (0x00016744) main_fs_bigclock_pane_t2

0x89a3,	// (0x00016756) main_fs_bigclock_pane_t3_ParamLimits

0x89a3,	// (0x00016756) main_fs_bigclock_pane_t3

0x0002,

0xfe7d,	// (0x0001dc30) main_fs_bigclock_pane_t_ParamLimits

0xfe7d,	// (0x0001dc30) main_fs_bigclock_pane_t

0xec86,	// (0x0001ca39) main_fs_bigclock_indicator_pane_g1

0xdc85,	// (0x0001ba38) ncim_query_content_pane_g2_ParamLimits

0xdc85,	// (0x0001ba38) ncim_query_content_pane_g2

0x0001,

0xfc0b,	// (0x0001d9be) ncim_query_content_pane_g_ParamLimits

0xfc0b,	// (0x0001d9be) ncim_query_content_pane_g

0x7c0c,	// (0x000159bf) sc_clock_pane_t4_ParamLimits

0x7c0c,	// (0x000159bf) sc_clock_pane_t4

0x92ee,	// (0x000170a1) main_radioblah_pane

0xcdfc,	// (0x0001abaf) cell_call4_button_pane_t1_copy1_ParamLimits

0xcdfc,	// (0x0001abaf) cell_call4_button_pane_t1_copy1

0x7863,	// (0x00015616) main_ncimui_pane_t1_ParamLimits

0x7863,	// (0x00015616) main_ncimui_pane_t1

0x787d,	// (0x00015630) main_ncimui_pane_t2_ParamLimits

0x787d,	// (0x00015630) main_ncimui_pane_t2

0x0002,

0xfc04,	// (0x0001d9b7) main_ncimui_pane_t_ParamLimits

0xfc04,	// (0x0001d9b7) main_ncimui_pane_t

0xe108,	// (0x0001bebb) main_radioblah_anim_pane_ParamLimits

0xe108,	// (0x0001bebb) main_radioblah_anim_pane

0xe119,	// (0x0001becc) main_radioblah_info_pane_ParamLimits

0xe119,	// (0x0001becc) main_radioblah_info_pane

0xe12d,	// (0x0001bee0) main_radioblah_pane_t1_ParamLimits

0xe12d,	// (0x0001bee0) main_radioblah_pane_t1

0xe149,	// (0x0001befc) main_radioblah_pane_t2_ParamLimits

0xe149,	// (0x0001befc) main_radioblah_pane_t2

0x0003,

0xfc9f,	// (0x0001da52) main_radioblah_pane_t_ParamLimits

0xfc9f,	// (0x0001da52) main_radioblah_pane_t

0x7cbb,	// (0x00015a6e) main_radioblah_rocker_ctrl_pane_ParamLimits

0x7cbb,	// (0x00015a6e) main_radioblah_rocker_ctrl_pane

0xe191,	// (0x0001bf44) main_radioblah_info_pane_t1_ParamLimits

0xe191,	// (0x0001bf44) main_radioblah_info_pane_t1

0x7d13,	// (0x00015ac6) main_radioblah_info_pane_t2_ParamLimits

0x7d13,	// (0x00015ac6) main_radioblah_info_pane_t2

0x0003,

0xfca8,	// (0x0001da5b) main_radioblah_info_pane_t_ParamLimits

0xfca8,	// (0x0001da5b) main_radioblah_info_pane_t

0xc1b9,	// (0x00019f6c) main_radioblah_rocker_ctrl_pane_g1

0x7dc5,	// (0x00015b78) main_radioblah_rocker_ctrl_pane_g2

0x7dcd,	// (0x00015b80) main_radioblah_rocker_ctrl_pane_g3

0x7dd5,	// (0x00015b88) main_radioblah_rocker_ctrl_pane_g4

0x7ddd,	// (0x00015b90) main_radioblah_rocker_ctrl_pane_g5

0x7de5,	// (0x00015b98) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcb1,	// (0x0001da64) main_radioblah_rocker_ctrl_pane_g

0x7626,	// (0x000153d9) main_cset_text2_pane_t1_copy1_ParamLimits

0xce86,	// (0x0001ac39) cam4_image_uncrop_qvga_pane

0xcedf,	// (0x0001ac92) vid4_image_uncrop_qcif_pane

0xd7e9,	// (0x0001b59c) cam6_image_uncrop_qvga_pane_ParamLimits

0xd7e9,	// (0x0001b59c) cam6_image_uncrop_qvga_pane

0xd8bf,	// (0x0001b672) vid6_image_uncrop_qcif_pane_ParamLimits

0xd8bf,	// (0x0001b672) vid6_image_uncrop_qcif_pane

0x927e,	// (0x00017031) bg_popup_preview_window_pane_cp03

0xdc37,	// (0x0001b9ea) list_cset_text2_pane

0xdc3f,	// (0x0001b9f2) main_cset6_text2_pane_g1

0xdc47,	// (0x0001b9fa) main_cset6_text2_pane_t1

0x7ded,	// (0x00015ba0) list_cset_text2_pane_t1_ParamLimits

0x7ded,	// (0x00015ba0) list_cset_text2_pane_t1

0x92ee,	// (0x000170a1) main_radioblah_pane_ParamLimits

0x7b40,	// (0x000158f3) main_mobtv_info_pane_t3_ParamLimits

0x7b40,	// (0x000158f3) main_mobtv_info_pane_t3

0x7ca9,	// (0x00015a5c) main_radioblah_pane_g1

0x7ce3,	// (0x00015a96) main_radioblah_info_pane_g1

0x7d6a,	// (0x00015b1d) main_radioblah_info_pane_t3_ParamLimits

0x7d6a,	// (0x00015b1d) main_radioblah_info_pane_t3

0x262b,	// (0x000103de) highlight_cell_cale_month_pane_ParamLimits

0x262b,	// (0x000103de) highlight_cell_cale_month_pane

0x927e,	// (0x00017031) main_phob_fisheye_pane

0xc540,	// (0x0001a2f3) scroll_pane_cp0031_ParamLimits

0xc540,	// (0x0001a2f3) scroll_pane_cp0031

0xd9cd,	// (0x0001b780) wait_bar_pane_cp08_ParamLimits

0x76aa,	// (0x0001545d) cset_list_set_pane_copy1_ParamLimits

0xe1cb,	// (0x0001bf7e) highlight_cell_cale_month_pane_g1

0x7e0a,	// (0x00015bbd) highlight_cell_cale_month_pane_t1

0xd564,	// (0x0001b317) list_gen_pane_cp01

0xd0a8,	// (0x0001ae5b) scroll_pane_01

0xe1d3,	// (0x0001bf86) list_single_double_fisheye_pane

0xe1dc,	// (0x0001bf8f) list_double_fisheye_pane_g1_ParamLimits

0xe1dc,	// (0x0001bf8f) list_double_fisheye_pane_g1

0xe1e8,	// (0x0001bf9b) list_double_fisheye_pane_g2_ParamLimits

0xe1e8,	// (0x0001bf9b) list_double_fisheye_pane_g2

0xe1fc,	// (0x0001bfaf) list_double_fisheye_pane_g3_ParamLimits

0xe1fc,	// (0x0001bfaf) list_double_fisheye_pane_g3

0x0004,

0xfcbe,	// (0x0001da71) list_double_fisheye_pane_g_ParamLimits

0xfcbe,	// (0x0001da71) list_double_fisheye_pane_g

0xe225,	// (0x0001bfd8) list_double_fisheye_pane_t1_ParamLimits

0xe225,	// (0x0001bfd8) list_double_fisheye_pane_t1

0xe240,	// (0x0001bff3) list_double_fisheye_pane_t2_ParamLimits

0xe240,	// (0x0001bff3) list_double_fisheye_pane_t2

0x0001,

0xfcc9,	// (0x0001da7c) list_double_fisheye_pane_t_ParamLimits

0xfcc9,	// (0x0001da7c) list_double_fisheye_pane_t

0x927e,	// (0x00017031) main_call5_pane

0x7c37,	// (0x000159ea) sc_swipe_pane_ParamLimits

0x7c37,	// (0x000159ea) sc_swipe_pane

0x7e2b,	// (0x00015bde) call5_image_pane_ParamLimits

0x7e2b,	// (0x00015bde) call5_image_pane

0x7e48,	// (0x00015bfb) call5_swipe_1_pane_ParamLimits

0x7e48,	// (0x00015bfb) call5_swipe_1_pane

0x7e5b,	// (0x00015c0e) call5_swipe_2_pane_ParamLimits

0x7e5b,	// (0x00015c0e) call5_swipe_2_pane

0x7e86,	// (0x00015c39) popup_call5_audio_first_window_ParamLimits

0x7e86,	// (0x00015c39) popup_call5_audio_first_window

0xc420,	// (0x0001a1d3) call5_swipe_1_pane_g1_ParamLimits

0xc420,	// (0x0001a1d3) call5_swipe_1_pane_g1

0xe262,	// (0x0001c015) call5_swipe_1_pane_g2_ParamLimits

0xe262,	// (0x0001c015) call5_swipe_1_pane_g2

0x0001,

0xfcce,	// (0x0001da81) call5_swipe_1_pane_g_ParamLimits

0xfcce,	// (0x0001da81) call5_swipe_1_pane_g

0xe26e,	// (0x0001c021) call5_swipe_1_pane_t1_ParamLimits

0xe26e,	// (0x0001c021) call5_swipe_1_pane_t1

0xc420,	// (0x0001a1d3) call5_swipe_2_pane_g1_ParamLimits

0xc420,	// (0x0001a1d3) call5_swipe_2_pane_g1

0xe283,	// (0x0001c036) call5_swipe_2_pane_g2_ParamLimits

0xe283,	// (0x0001c036) call5_swipe_2_pane_g2

0x0001,

0xfcd3,	// (0x0001da86) call5_swipe_2_pane_g_ParamLimits

0xfcd3,	// (0x0001da86) call5_swipe_2_pane_g

0xe28f,	// (0x0001c042) call5_swipe_2_pane_t1_ParamLimits

0xe28f,	// (0x0001c042) call5_swipe_2_pane_t1

0xe2a4,	// (0x0001c057) sc_swipe_pane_g1_ParamLimits

0xe2a4,	// (0x0001c057) sc_swipe_pane_g1

0xe2b1,	// (0x0001c064) sc_swipe_pane_g2_ParamLimits

0xe2b1,	// (0x0001c064) sc_swipe_pane_g2

0x0001,

0xfcd8,	// (0x0001da8b) sc_swipe_pane_g_ParamLimits

0xfcd8,	// (0x0001da8b) sc_swipe_pane_g

0xe2bd,	// (0x0001c070) sc_swipe_pane_t1_ParamLimits

0xe2bd,	// (0x0001c070) sc_swipe_pane_t1

0x927e,	// (0x00017031) main_cmail_launcher_pane

0x7e97,	// (0x00015c4a) aid_size_cell_cmail_l_ParamLimits

0x7e97,	// (0x00015c4a) aid_size_cell_cmail_l

0x7eb1,	// (0x00015c64) grid_cmail_l_pane_ParamLimits

0x7eb1,	// (0x00015c64) grid_cmail_l_pane

0x7ecc,	// (0x00015c7f) cell_cmail_l_pane_ParamLimits

0x7ecc,	// (0x00015c7f) cell_cmail_l_pane

0x7ef2,	// (0x00015ca5) cell_cmail_l_pane_g1_ParamLimits

0x7ef2,	// (0x00015ca5) cell_cmail_l_pane_g1

0x7efe,	// (0x00015cb1) cell_cmail_l_pane_t1_ParamLimits

0x7efe,	// (0x00015cb1) cell_cmail_l_pane_t1

0xe2d2,	// (0x0001c085) cell_cmail_l_pane_t2_ParamLimits

0xe2d2,	// (0x0001c085) cell_cmail_l_pane_t2

0x0001,

0xfcdd,	// (0x0001da90) cell_cmail_l_pane_t_ParamLimits

0xfcdd,	// (0x0001da90) cell_cmail_l_pane_t

0x92ee,	// (0x000170a1) grid_highlight_pane_cp018_ParamLimits

0x92ee,	// (0x000170a1) grid_highlight_pane_cp018

0x0c82,	// (0x0000ea35) main2_pane_ParamLimits

0x0c82,	// (0x0000ea35) main2_pane

0x9b7a,	// (0x0001792d) popup_sp_fs_action_menu_bg_pane_g1

0x9b82,	// (0x00017935) popup_sp_fs_action_menu_bg_pane_g2

0x9b8a,	// (0x0001793d) popup_sp_fs_action_menu_bg_pane_g3

0x9b92,	// (0x00017945) popup_sp_fs_action_menu_bg_pane_g4

0x9b9a,	// (0x0001794d) popup_sp_fs_action_menu_bg_pane_g5

0x9ba2,	// (0x00017955) popup_sp_fs_action_menu_bg_pane_g6

0x9baa,	// (0x0001795d) popup_sp_fs_action_menu_bg_pane_g7

0x9bb2,	// (0x00017965) popup_sp_fs_action_menu_bg_pane_g8

0x9bba,	// (0x0001796d) popup_sp_fs_action_menu_bg_pane_g9

0x9bc2,	// (0x00017975) popup_sp_fs_action_menu_bg_pane_g10

0x9bc2,	// (0x00017975) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1a7,	// (0x0001cf5a) popup_sp_fs_action_menu_bg_pane_g

0x9dac,	// (0x00017b5f) list_medium_line_x2_t3_g3_g1_ParamLimits

0x9dac,	// (0x00017b5f) list_medium_line_x2_t3_g3_g1

0x9db8,	// (0x00017b6b) list_medium_line_x2_t3_g3_g2_ParamLimits

0x9db8,	// (0x00017b6b) list_medium_line_x2_t3_g3_g2

0x9dc4,	// (0x00017b77) list_medium_line_x2_t3_g3_g3_ParamLimits

0x9dc4,	// (0x00017b77) list_medium_line_x2_t3_g3_g3

0x0002,

0xf257,	// (0x0001d00a) list_medium_line_x2_t3_g3_g_ParamLimits

0xf257,	// (0x0001d00a) list_medium_line_x2_t3_g3_g

0x9dd0,	// (0x00017b83) list_medium_line_x2_t3_g3_t1_ParamLimits

0x9dd0,	// (0x00017b83) list_medium_line_x2_t3_g3_t1

0x1943,	// (0x0000f6f6) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1943,	// (0x0000f6f6) list_medium_line_x2_t3_g3_t2

0x9de5,	// (0x00017b98) list_medium_line_x2_t3_g3_t3_ParamLimits

0x9de5,	// (0x00017b98) list_medium_line_x2_t3_g3_t3

0x0002,

0xf25e,	// (0x0001d011) list_medium_line_x2_t3_g3_t_ParamLimits

0xf25e,	// (0x0001d011) list_medium_line_x2_t3_g3_t

0x9dac,	// (0x00017b5f) list_medium_line_x2_t3_g2_g1_ParamLimits

0x9dac,	// (0x00017b5f) list_medium_line_x2_t3_g2_g1

0x9dc4,	// (0x00017b77) list_medium_line_x2_t3_g2_g2_ParamLimits

0x9dc4,	// (0x00017b77) list_medium_line_x2_t3_g2_g2

0x0001,

0xf265,	// (0x0001d018) list_medium_line_x2_t3_g2_g_ParamLimits

0xf265,	// (0x0001d018) list_medium_line_x2_t3_g2_g

0x9dfa,	// (0x00017bad) list_medium_line_x2_t3_g2_t1_ParamLimits

0x9dfa,	// (0x00017bad) list_medium_line_x2_t3_g2_t1

0x9e10,	// (0x00017bc3) list_medium_line_x2_t3_g2_t2_ParamLimits

0x9e10,	// (0x00017bc3) list_medium_line_x2_t3_g2_t2

0x9e22,	// (0x00017bd5) list_medium_line_x2_t3_g2_t3_ParamLimits

0x9e22,	// (0x00017bd5) list_medium_line_x2_t3_g2_t3

0x0002,

0xf26a,	// (0x0001d01d) list_medium_line_x2_t3_g2_t_ParamLimits

0xf26a,	// (0x0001d01d) list_medium_line_x2_t3_g2_t

0x9dac,	// (0x00017b5f) list_medium_line_x2_t4_g4_g1_ParamLimits

0x9dac,	// (0x00017b5f) list_medium_line_x2_t4_g4_g1

0x9e3f,	// (0x00017bf2) list_medium_line_x2_t4_g4_g2_ParamLimits

0x9e3f,	// (0x00017bf2) list_medium_line_x2_t4_g4_g2

0x9db8,	// (0x00017b6b) list_medium_line_x2_t4_g4_g3_ParamLimits

0x9db8,	// (0x00017b6b) list_medium_line_x2_t4_g4_g3

0x9e4b,	// (0x00017bfe) list_medium_line_x2_t4_g4_g4_ParamLimits

0x9e4b,	// (0x00017bfe) list_medium_line_x2_t4_g4_g4

0x0003,

0xf271,	// (0x0001d024) list_medium_line_x2_t4_g4_g_ParamLimits

0xf271,	// (0x0001d024) list_medium_line_x2_t4_g4_g

0x1957,	// (0x0000f70a) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1957,	// (0x0000f70a) list_medium_line_x2_t4_g4_t1

0x196e,	// (0x0000f721) list_medium_line_x2_t4_g4_t2_ParamLimits

0x196e,	// (0x0000f721) list_medium_line_x2_t4_g4_t2

0x1983,	// (0x0000f736) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1983,	// (0x0000f736) list_medium_line_x2_t4_g4_t3

0x9e57,	// (0x00017c0a) list_medium_line_x2_t4_g4_t4_ParamLimits

0x9e57,	// (0x00017c0a) list_medium_line_x2_t4_g4_t4

0x0003,

0xf27a,	// (0x0001d02d) list_medium_line_x2_t4_g4_t_ParamLimits

0xf27a,	// (0x0001d02d) list_medium_line_x2_t4_g4_t

0x9dac,	// (0x00017b5f) list_medium_line_x2_t2_g4_g1_ParamLimits

0x9dac,	// (0x00017b5f) list_medium_line_x2_t2_g4_g1

0x9e3f,	// (0x00017bf2) list_medium_line_x2_t2_g4_g2_ParamLimits

0x9e3f,	// (0x00017bf2) list_medium_line_x2_t2_g4_g2

0x9db8,	// (0x00017b6b) list_medium_line_x2_t2_g4_g3_ParamLimits

0x9db8,	// (0x00017b6b) list_medium_line_x2_t2_g4_g3

0x9dc4,	// (0x00017b77) list_medium_line_x2_t2_g4_g4_ParamLimits

0x9dc4,	// (0x00017b77) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2e1,	// (0x0001d094) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2e1,	// (0x0001d094) list_medium_line_x2_t2_g4_g

0xa141,	// (0x00017ef4) list_medium_line_x2_t2_g4_t1_ParamLimits

0xa141,	// (0x00017ef4) list_medium_line_x2_t2_g4_t1

0x9de5,	// (0x00017b98) list_medium_line_x2_t2_g4_t2_ParamLimits

0x9de5,	// (0x00017b98) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2ea,	// (0x0001d09d) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2ea,	// (0x0001d09d) list_medium_line_x2_t2_g4_t

0x9dac,	// (0x00017b5f) list_medium_line_x2_t2_g3_g1_ParamLimits

0x9dac,	// (0x00017b5f) list_medium_line_x2_t2_g3_g1

0x9db8,	// (0x00017b6b) list_medium_line_x2_t2_g3_g2_ParamLimits

0x9db8,	// (0x00017b6b) list_medium_line_x2_t2_g3_g2

0x9dc4,	// (0x00017b77) list_medium_line_x2_t2_g3_g3_ParamLimits

0x9dc4,	// (0x00017b77) list_medium_line_x2_t2_g3_g3

0x0002,

0xf257,	// (0x0001d00a) list_medium_line_x2_t2_g3_g_ParamLimits

0xf257,	// (0x0001d00a) list_medium_line_x2_t2_g3_g

0xa156,	// (0x00017f09) list_medium_line_x2_t2_g3_t1_ParamLimits

0xa156,	// (0x00017f09) list_medium_line_x2_t2_g3_t1

0x9de5,	// (0x00017b98) list_medium_line_x2_t2_g3_t2_ParamLimits

0x9de5,	// (0x00017b98) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2ef,	// (0x0001d0a2) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2ef,	// (0x0001d0a2) list_medium_line_x2_t2_g3_t

0x2811,	// (0x000105c4) main_sp_fs_list_pane_ParamLimits

0x2811,	// (0x000105c4) main_sp_fs_list_pane

0x281d,	// (0x000105d0) sp_fs_scroll_pane_ParamLimits

0x281d,	// (0x000105d0) sp_fs_scroll_pane

0x2829,	// (0x000105dc) list_medium_line_x2_t3_t1

0x2839,	// (0x000105ec) list_medium_line_x2_t3_t2

0xa33a,	// (0x000180ed) list_medium_line_x2_t3_t3

0x0002,

0xf33a,	// (0x0001d0ed) list_medium_line_x2_t3_t

0x2847,	// (0x000105fa) list_medium_line_x3_t4_t1

0x2857,	// (0x0001060a) list_medium_line_x3_t4_t2

0xa348,	// (0x000180fb) list_medium_line_x3_t4_t3

0xa33a,	// (0x000180ed) list_medium_line_x3_t4_t4

0x0003,

0xf341,	// (0x0001d0f4) list_medium_line_x3_t4_t

0x2865,	// (0x00010618) list_medium_line_x4_t5_t1

0x2875,	// (0x00010628) list_medium_line_x4_t5_t2

0xa348,	// (0x000180fb) list_medium_line_x4_t5_t3

0xa356,	// (0x00018109) list_medium_line_x4_t5_t4

0xa33a,	// (0x000180ed) list_medium_line_x4_t5_t5

0x0004,

0xf34a,	// (0x0001d0fd) list_medium_line_x4_t5_t

0x9dac,	// (0x00017b5f) list_medium_line_t4_g4_g1_ParamLimits

0x9dac,	// (0x00017b5f) list_medium_line_t4_g4_g1

0x9e4b,	// (0x00017bfe) list_medium_line_t4_g4_g2_ParamLimits

0x9e4b,	// (0x00017bfe) list_medium_line_t4_g4_g2

0xa364,	// (0x00018117) list_medium_line_t4_g4_g3_ParamLimits

0xa364,	// (0x00018117) list_medium_line_t4_g4_g3

0x9dc4,	// (0x00017b77) list_medium_line_t4_g4_g4_ParamLimits

0x9dc4,	// (0x00017b77) list_medium_line_t4_g4_g4

0x0003,

0xf355,	// (0x0001d108) list_medium_line_t4_g4_g_ParamLimits

0xf355,	// (0x0001d108) list_medium_line_t4_g4_g

0xa370,	// (0x00018123) list_medium_line_t4_g4_t1_ParamLimits

0xa370,	// (0x00018123) list_medium_line_t4_g4_t1

0xa385,	// (0x00018138) list_medium_line_t4_g4_t2_ParamLimits

0xa385,	// (0x00018138) list_medium_line_t4_g4_t2

0xa39a,	// (0x0001814d) list_medium_line_t4_g4_t3_ParamLimits

0xa39a,	// (0x0001814d) list_medium_line_t4_g4_t3

0x9de5,	// (0x00017b98) list_medium_line_t4_g4_t4_ParamLimits

0x9de5,	// (0x00017b98) list_medium_line_t4_g4_t4

0x0003,

0xf35e,	// (0x0001d111) list_medium_line_t4_g4_t_ParamLimits

0xf35e,	// (0x0001d111) list_medium_line_t4_g4_t

0x2921,	// (0x000106d4) chi_dic_find_pane_g1

0x3a91,	// (0x00011844) main_tport_pane

0xd1ed,	// (0x0001afa0) list_medium_line_plain_t1

0xd23f,	// (0x0001aff2) list_medium_line_t2_g2_g1_ParamLimits

0xd23f,	// (0x0001aff2) list_medium_line_t2_g2_g1

0xd24b,	// (0x0001affe) list_medium_line_t2_g2_g2_ParamLimits

0xd24b,	// (0x0001affe) list_medium_line_t2_g2_g2

0x0001,

0xfa1a,	// (0x0001d7cd) list_medium_line_t2_g2_g_ParamLimits

0xfa1a,	// (0x0001d7cd) list_medium_line_t2_g2_g

0x6b2c,	// (0x000148df) list_medium_line_t2_g2_t1_ParamLimits

0x6b2c,	// (0x000148df) list_medium_line_t2_g2_t1

0x6b46,	// (0x000148f9) list_medium_line_t2_g2_t2_ParamLimits

0x6b46,	// (0x000148f9) list_medium_line_t2_g2_t2

0x0001,

0xfa1f,	// (0x0001d7d2) list_medium_line_t2_g2_t_ParamLimits

0xfa1f,	// (0x0001d7d2) list_medium_line_t2_g2_t

0xd5f1,	// (0x0001b3a4) aid_sp_fs_list_icon_a_sm

0xd5f9,	// (0x0001b3ac) aid_sp_fs_list_icon_d

0xd601,	// (0x0001b3b4) aid_sp_fs_text_primary

0xd60a,	// (0x0001b3bd) aid_sp_fs_text_secondary

0xd613,	// (0x0001b3c6) list_medium_line

0xd613,	// (0x0001b3c6) list_medium_line_g2

0xd613,	// (0x0001b3c6) list_medium_line_g3

0xd613,	// (0x0001b3c6) list_medium_line_plain

0xd613,	// (0x0001b3c6) list_medium_line_plain_t2

0xd613,	// (0x0001b3c6) list_medium_line_plain_t3

0xd613,	// (0x0001b3c6) list_medium_line_right_icon

0xd613,	// (0x0001b3c6) list_medium_line_right_iconx2

0xd613,	// (0x0001b3c6) list_medium_line_t2

0xd613,	// (0x0001b3c6) list_medium_line_t2_g2

0xd613,	// (0x0001b3c6) list_medium_line_t2_g3

0xd613,	// (0x0001b3c6) list_medium_line_t2_right_icon

0xd613,	// (0x0001b3c6) list_medium_line_t2_right_iconx2

0xd613,	// (0x0001b3c6) list_medium_line_t3

0xd613,	// (0x0001b3c6) list_medium_line_t3_g2

0xd613,	// (0x0001b3c6) list_medium_line_t3_g3

0xd613,	// (0x0001b3c6) list_medium_line_t3_right_iconx2

0xd61c,	// (0x0001b3cf) list_medium_line_t4_g4

0xd625,	// (0x0001b3d8) list_medium_line_x2

0xd625,	// (0x0001b3d8) list_medium_line_x2_t2_g2

0xd625,	// (0x0001b3d8) list_medium_line_x2_t2_g3

0xd625,	// (0x0001b3d8) list_medium_line_x2_t2_g4

0xd625,	// (0x0001b3d8) list_medium_line_x2_t3

0xd625,	// (0x0001b3d8) list_medium_line_x2_t3_g2

0xd625,	// (0x0001b3d8) list_medium_line_x2_t3_g3

0xd625,	// (0x0001b3d8) list_medium_line_x2_t3_g4

0xd625,	// (0x0001b3d8) list_medium_line_x2_t4_g2

0xd625,	// (0x0001b3d8) list_medium_line_x2_t4_g4

0xd62e,	// (0x0001b3e1) list_medium_line_x3

0xd62e,	// (0x0001b3e1) list_medium_line_x3_t4

0xd62e,	// (0x0001b3e1) list_medium_line_x3_t4_g4

0xd61c,	// (0x0001b3cf) list_medium_line_x4_t4

0xd61c,	// (0x0001b3cf) list_medium_line_x4_t4_g7

0xd61c,	// (0x0001b3cf) list_medium_line_x4_t5

0xd637,	// (0x0001b3ea) list_single_fs_dyc_pane_ParamLimits

0xd637,	// (0x0001b3ea) list_single_fs_dyc_pane

0x9dac,	// (0x00017b5f) list_medium_line_x4_t4_g7_g1_ParamLimits

0x9dac,	// (0x00017b5f) list_medium_line_x4_t4_g7_g1

0xdb66,	// (0x0001b919) list_medium_line_x4_t4_g7_g2_ParamLimits

0xdb66,	// (0x0001b919) list_medium_line_x4_t4_g7_g2

0xdb72,	// (0x0001b925) list_medium_line_x4_t4_g7_g3_ParamLimits

0xdb72,	// (0x0001b925) list_medium_line_x4_t4_g7_g3

0xdb81,	// (0x0001b934) list_medium_line_x4_t4_g7_g4_ParamLimits

0xdb81,	// (0x0001b934) list_medium_line_x4_t4_g7_g4

0xdb8d,	// (0x0001b940) list_medium_line_x4_t4_g7_g5_ParamLimits

0xdb8d,	// (0x0001b940) list_medium_line_x4_t4_g7_g5

0xdb9c,	// (0x0001b94f) list_medium_line_x4_t4_g7_g6_ParamLimits

0xdb9c,	// (0x0001b94f) list_medium_line_x4_t4_g7_g6

0xdbab,	// (0x0001b95e) list_medium_line_x4_t4_g7_g7_ParamLimits

0xdbab,	// (0x0001b95e) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbea,	// (0x0001d99d) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbea,	// (0x0001d99d) list_medium_line_x4_t4_g7_g

0xdbb7,	// (0x0001b96a) list_medium_line_x4_t4_g7_t1_ParamLimits

0xdbb7,	// (0x0001b96a) list_medium_line_x4_t4_g7_t1

0xdbcc,	// (0x0001b97f) list_medium_line_x4_t4_g7_t2_ParamLimits

0xdbcc,	// (0x0001b97f) list_medium_line_x4_t4_g7_t2

0xdbe1,	// (0x0001b994) list_medium_line_x4_t4_g7_t3_ParamLimits

0xdbe1,	// (0x0001b994) list_medium_line_x4_t4_g7_t3

0xdbf6,	// (0x0001b9a9) list_medium_line_x4_t4_g7_t4_ParamLimits

0xdbf6,	// (0x0001b9a9) list_medium_line_x4_t4_g7_t4

0xdc08,	// (0x0001b9bb) list_medium_line_x4_t4_g7_t5_ParamLimits

0xdc08,	// (0x0001b9bb) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbf9,	// (0x0001d9ac) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbf9,	// (0x0001d9ac) list_medium_line_x4_t4_g7_t

0xdc1a,	// (0x0001b9cd) list_single_dyc_row_pane_ParamLimits

0xdc1a,	// (0x0001b9cd) list_single_dyc_row_pane

0x7e18,	// (0x00015bcb) call5_gesture_pane_ParamLimits

0x7e18,	// (0x00015bcb) call5_gesture_pane

0x7e6e,	// (0x00015c21) call5_windows_pane_ParamLimits

0x7e6e,	// (0x00015c21) call5_windows_pane

0x7f14,	// (0x00015cc7) call5_swipe_1_pane_cp_ParamLimits

0x7f14,	// (0x00015cc7) call5_swipe_1_pane_cp

0x7f20,	// (0x00015cd3) call5_swipe_2_pane_cp_ParamLimits

0x7f20,	// (0x00015cd3) call5_swipe_2_pane_cp

0xa812,	// (0x000185c5) call5_image_pane_cp

0x7f2c,	// (0x00015cdf) popup_call5_audio_first_window_cp_ParamLimits

0x7f2c,	// (0x00015cdf) popup_call5_audio_first_window_cp

0xe2a4,	// (0x0001c057) call5_swipe_1_pane_g1_cp_ParamLimits

0xe2a4,	// (0x0001c057) call5_swipe_1_pane_g1_cp

0xe2e4,	// (0x0001c097) call5_swipe_1_pane_g2_cp

0xe2bd,	// (0x0001c070) call5_swipe_1_pane_t1_cp_ParamLimits

0xe2bd,	// (0x0001c070) call5_swipe_1_pane_t1_cp

0xe2a4,	// (0x0001c057) call5_swipe_2_pane_g1_cp_ParamLimits

0xe2a4,	// (0x0001c057) call5_swipe_2_pane_g1_cp

0xe2ec,	// (0x0001c09f) call5_swipe_2_pane_g2_cp

0xe2f4,	// (0x0001c0a7) call5_swipe_2_pane_t1_cp_ParamLimits

0xe2f4,	// (0x0001c0a7) call5_swipe_2_pane_t1_cp

0x92ee,	// (0x000170a1) main_sp_fs_email_pane

0xe309,	// (0x0001c0bc) main_sp_fs_listscroll_pane_te

0xe312,	// (0x0001c0c5) popup_sp_fs_action_menu_pane_ParamLimits

0xe312,	// (0x0001c0c5) popup_sp_fs_action_menu_pane

0xc1b9,	// (0x00019f6c) bg_sp_fs_ctrlbar_pane_g1

0xe352,	// (0x0001c105) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe35b,	// (0x0001c10e) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe364,	// (0x0001c117) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc1b9,	// (0x00019f6c) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfce2,	// (0x0001da95) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xbf9c,	// (0x00019d4f) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xbf9c,	// (0x00019d4f) bg_sp_fs_ctrlbar_ddmenu_pane

0xe36d,	// (0x0001c120) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe36d,	// (0x0001c120) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe379,	// (0x0001c12c) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe379,	// (0x0001c12c) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfceb,	// (0x0001da9e) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfceb,	// (0x0001da9e) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe385,	// (0x0001c138) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe385,	// (0x0001c138) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xe39f,	// (0x0001c152) list_medium_line_t2_right_icon_g1

0x7f38,	// (0x00015ceb) list_medium_line_t2_right_icon_t1

0x7f48,	// (0x00015cfb) list_medium_line_t2_right_icon_t2

0x0001,

0xfcf0,	// (0x0001daa3) list_medium_line_t2_right_icon_t

0xbcb1,	// (0x00019a64) bg_sp_fs_ctrlbar_pane_ParamLimits

0xbcb1,	// (0x00019a64) bg_sp_fs_ctrlbar_pane

0x7fa5,	// (0x00015d58) main_sp_fs_ctrlbar_button_pane_cp01

0x7faf,	// (0x00015d62) main_sp_fs_ctrlbar_ddmenu_pane

0x9dac,	// (0x00017b5f) main_sp_fs_ctrlbar_pane_g1

0xe3df,	// (0x0001c192) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcf5,	// (0x0001daa8) main_sp_fs_ctrlbar_pane_g

0xe3eb,	// (0x0001c19e) main_sp_fs_ctrlbar_pane_t1

0x7fb9,	// (0x00015d6c) main_sp_fs_ctrlbar_pane

0x7fdd,	// (0x00015d90) main_sp_fs_listscroll_pane_te_cp01

0x7ffd,	// (0x00015db0) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x7ffd,	// (0x00015db0) popup_sp_fs_action_menu_pane_cp01

0x92ee,	// (0x000170a1) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x92ee,	// (0x000170a1) bg_sp_fs_highlight_list_pane_cp01

0xe410,	// (0x0001c1c3) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe410,	// (0x0001c1c3) sp_fs_action_menu_list_gene_pane_g1

0xe41f,	// (0x0001c1d2) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe41f,	// (0x0001c1d2) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcff,	// (0x0001dab2) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcff,	// (0x0001dab2) sp_fs_action_menu_list_gene_pane_g

0xe42c,	// (0x0001c1df) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe42c,	// (0x0001c1df) sp_fs_action_menu_list_gene_pane_t1

0xe444,	// (0x0001c1f7) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe444,	// (0x0001c1f7) sp_fs_action_menu_list_gene_pane

0xe461,	// (0x0001c214) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe461,	// (0x0001c214) popup_sp_fs_action_menu_bg_pane

0xe46f,	// (0x0001c222) sp_fs_action_menu_list_pane_ParamLimits

0xe46f,	// (0x0001c222) sp_fs_action_menu_list_pane

0xe48d,	// (0x0001c240) sp_fs_scroll_pane_cp01_ParamLimits

0xe48d,	// (0x0001c240) sp_fs_scroll_pane_cp01

0x8017,	// (0x00015dca) list_medium_line_plain_t2_t1

0x8027,	// (0x00015dda) list_medium_line_plain_t2_t2

0x0001,

0xfd04,	// (0x0001dab7) list_medium_line_plain_t2_t

0x8037,	// (0x00015dea) list_medium_line_plain_t3_t1

0x8047,	// (0x00015dfa) list_medium_line_plain_t3_t2

0x8055,	// (0x00015e08) list_medium_line_plain_t3_t3

0x0002,

0xfd09,	// (0x0001dabc) list_medium_line_plain_t3_t

0x9dac,	// (0x00017b5f) list_medium_line_x2_t2_g2_g1_ParamLimits

0x9dac,	// (0x00017b5f) list_medium_line_x2_t2_g2_g1

0x9dc4,	// (0x00017b77) list_medium_line_x2_t2_g2_g2_ParamLimits

0x9dc4,	// (0x00017b77) list_medium_line_x2_t2_g2_g2

0x0001,

0xf265,	// (0x0001d018) list_medium_line_x2_t2_g2_g_ParamLimits

0xf265,	// (0x0001d018) list_medium_line_x2_t2_g2_g

0xa370,	// (0x00018123) list_medium_line_x2_t2_g2_t1_ParamLimits

0xa370,	// (0x00018123) list_medium_line_x2_t2_g2_t1

0x9de5,	// (0x00017b98) list_medium_line_x2_t2_g2_t2_ParamLimits

0x9de5,	// (0x00017b98) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd10,	// (0x0001dac3) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd10,	// (0x0001dac3) list_medium_line_x2_t2_g2_t

0x9dac,	// (0x00017b5f) list_medium_line_x2_t4_g2_g1_ParamLimits

0x9dac,	// (0x00017b5f) list_medium_line_x2_t4_g2_g1

0x9dc4,	// (0x00017b77) list_medium_line_x2_t4_g2_g2_ParamLimits

0x9dc4,	// (0x00017b77) list_medium_line_x2_t4_g2_g2

0x0001,

0xf265,	// (0x0001d018) list_medium_line_x2_t4_g2_g_ParamLimits

0xf265,	// (0x0001d018) list_medium_line_x2_t4_g2_g

0x8063,	// (0x00015e16) list_medium_line_x2_t4_g2_t1_ParamLimits

0x8063,	// (0x00015e16) list_medium_line_x2_t4_g2_t1

0x807a,	// (0x00015e2d) list_medium_line_x2_t4_g2_t2_ParamLimits

0x807a,	// (0x00015e2d) list_medium_line_x2_t4_g2_t2

0x808f,	// (0x00015e42) list_medium_line_x2_t4_g2_t3_ParamLimits

0x808f,	// (0x00015e42) list_medium_line_x2_t4_g2_t3

0x9de5,	// (0x00017b98) list_medium_line_x2_t4_g2_t4_ParamLimits

0x9de5,	// (0x00017b98) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd15,	// (0x0001dac8) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd15,	// (0x0001dac8) list_medium_line_x2_t4_g2_t

0xe4b3,	// (0x0001c266) list_medium_line_t3_right_iconx2_g1

0xe39f,	// (0x0001c152) list_medium_line_t3_right_iconx2_g2

0x80a1,	// (0x00015e54) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd1e,	// (0x0001dad1) list_medium_line_t3_right_iconx2_g

0x80ab,	// (0x00015e5e) list_medium_line_t3_right_iconx2_t1

0x80bb,	// (0x00015e6e) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd25,	// (0x0001dad8) list_medium_line_t3_right_iconx2_t

0x9dac,	// (0x00017b5f) list_medium_line_x3_t4_g4_g1_ParamLimits

0x9dac,	// (0x00017b5f) list_medium_line_x3_t4_g4_g1

0x9db8,	// (0x00017b6b) list_medium_line_x3_t4_g4_g2_ParamLimits

0x9db8,	// (0x00017b6b) list_medium_line_x3_t4_g4_g2

0x9e4b,	// (0x00017bfe) list_medium_line_x3_t4_g4_g3_ParamLimits

0x9e4b,	// (0x00017bfe) list_medium_line_x3_t4_g4_g3

0xe4bb,	// (0x0001c26e) list_medium_line_x3_t4_g4_g4_ParamLimits

0xe4bb,	// (0x0001c26e) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd2a,	// (0x0001dadd) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd2a,	// (0x0001dadd) list_medium_line_x3_t4_g4_g

0x80c9,	// (0x00015e7c) list_medium_line_x3_t4_g4_t1_ParamLimits

0x80c9,	// (0x00015e7c) list_medium_line_x3_t4_g4_t1

0x80e0,	// (0x00015e93) list_medium_line_x3_t4_g4_t2_ParamLimits

0x80e0,	// (0x00015e93) list_medium_line_x3_t4_g4_t2

0xa385,	// (0x00018138) list_medium_line_x3_t4_g4_t3_ParamLimits

0xa385,	// (0x00018138) list_medium_line_x3_t4_g4_t3

0xe4c7,	// (0x0001c27a) list_medium_line_x3_t4_g4_t4_ParamLimits

0xe4c7,	// (0x0001c27a) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd33,	// (0x0001dae6) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd33,	// (0x0001dae6) list_medium_line_x3_t4_g4_t

0x80fb,	// (0x00015eae) list_single_dyc_row_text_pane_t1_ParamLimits

0x80fb,	// (0x00015eae) list_single_dyc_row_text_pane_t1

0x8144,	// (0x00015ef7) list_single_dyc_row_text_pane_t2_ParamLimits

0x8144,	// (0x00015ef7) list_single_dyc_row_text_pane_t2

0xe4e4,	// (0x0001c297) list_single_dyc_row_text_pane_t3_ParamLimits

0xe4e4,	// (0x0001c297) list_single_dyc_row_text_pane_t3

0x0002,

0xfd3c,	// (0x0001daef) list_single_dyc_row_text_pane_t_ParamLimits

0xfd3c,	// (0x0001daef) list_single_dyc_row_text_pane_t

0xe4f6,	// (0x0001c2a9) list_single_dyc_row_pane_g1_ParamLimits

0xe4f6,	// (0x0001c2a9) list_single_dyc_row_pane_g1

0xe502,	// (0x0001c2b5) list_single_dyc_row_pane_g2_ParamLimits

0xe502,	// (0x0001c2b5) list_single_dyc_row_pane_g2

0xe50e,	// (0x0001c2c1) list_single_dyc_row_pane_g3_ParamLimits

0xe50e,	// (0x0001c2c1) list_single_dyc_row_pane_g3

0xe51a,	// (0x0001c2cd) list_single_dyc_row_pane_g4_ParamLimits

0xe51a,	// (0x0001c2cd) list_single_dyc_row_pane_g4

0x0003,

0xfd43,	// (0x0001daf6) list_single_dyc_row_pane_g_ParamLimits

0xfd43,	// (0x0001daf6) list_single_dyc_row_pane_g

0xe526,	// (0x0001c2d9) list_single_dyc_row_text_pane_ParamLimits

0xe526,	// (0x0001c2d9) list_single_dyc_row_text_pane

0x927e,	// (0x00017031) bg_sp_fs_scroll_pane

0xe545,	// (0x0001c2f8) thumb_sp_fs_scroll_pane

0xd23f,	// (0x0001aff2) list_medium_line_g1_ParamLimits

0xd23f,	// (0x0001aff2) list_medium_line_g1

0xe54e,	// (0x0001c301) list_medium_line_t1_ParamLimits

0xe54e,	// (0x0001c301) list_medium_line_t1

0x9dac,	// (0x00017b5f) list_medium_line_x2_g1_ParamLimits

0x9dac,	// (0x00017b5f) list_medium_line_x2_g1

0x9db8,	// (0x00017b6b) list_medium_line_x2_g2_ParamLimits

0x9db8,	// (0x00017b6b) list_medium_line_x2_g2

0x0001,

0xfd4c,	// (0x0001daff) list_medium_line_x2_g_ParamLimits

0xfd4c,	// (0x0001daff) list_medium_line_x2_g

0xe563,	// (0x0001c316) list_medium_line_x2_t1_ParamLimits

0xe563,	// (0x0001c316) list_medium_line_x2_t1

0x9dac,	// (0x00017b5f) list_medium_line_x3_g1_ParamLimits

0x9dac,	// (0x00017b5f) list_medium_line_x3_g1

0x9db8,	// (0x00017b6b) list_medium_line_x3_g2_ParamLimits

0x9db8,	// (0x00017b6b) list_medium_line_x3_g2

0x0001,

0xfd4c,	// (0x0001daff) list_medium_line_x3_g_ParamLimits

0xfd4c,	// (0x0001daff) list_medium_line_x3_g

0xe563,	// (0x0001c316) list_medium_line_x3_t1_ParamLimits

0xe563,	// (0x0001c316) list_medium_line_x3_t1

0xe579,	// (0x0001c32c) thumb_sp_fs_scroll_pane_g1

0xe582,	// (0x0001c335) thumb_sp_fs_scroll_pane_g2

0xe58b,	// (0x0001c33e) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd51,	// (0x0001db04) thumb_sp_fs_scroll_pane_g

0xe579,	// (0x0001c32c) bg_sp_fs_scroll_pane_g1

0xe582,	// (0x0001c335) bg_sp_fs_scroll_pane_g2

0xe58b,	// (0x0001c33e) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd51,	// (0x0001db04) bg_sp_fs_scroll_pane_g

0x9dac,	// (0x00017b5f) list_medium_line_x2_t3_g4_g1_ParamLimits

0x9dac,	// (0x00017b5f) list_medium_line_x2_t3_g4_g1

0x9e3f,	// (0x00017bf2) list_medium_line_x2_t3_g4_g2_ParamLimits

0x9e3f,	// (0x00017bf2) list_medium_line_x2_t3_g4_g2

0x9db8,	// (0x00017b6b) list_medium_line_x2_t3_g4_g3_ParamLimits

0x9db8,	// (0x00017b6b) list_medium_line_x2_t3_g4_g3

0x9dc4,	// (0x00017b77) list_medium_line_x2_t3_g4_g4_ParamLimits

0x9dc4,	// (0x00017b77) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2e1,	// (0x0001d094) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2e1,	// (0x0001d094) list_medium_line_x2_t3_g4_g

0x819e,	// (0x00015f51) list_medium_line_x2_t3_g4_t1_ParamLimits

0x819e,	// (0x00015f51) list_medium_line_x2_t3_g4_t1

0x81b8,	// (0x00015f6b) list_medium_line_x2_t3_g4_t2_ParamLimits

0x81b8,	// (0x00015f6b) list_medium_line_x2_t3_g4_t2

0x9de5,	// (0x00017b98) list_medium_line_x2_t3_g4_t3_ParamLimits

0x9de5,	// (0x00017b98) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd58,	// (0x0001db0b) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd58,	// (0x0001db0b) list_medium_line_x2_t3_g4_t

0xd23f,	// (0x0001aff2) list_medium_line_g2_g1_ParamLimits

0xd23f,	// (0x0001aff2) list_medium_line_g2_g1

0xd24b,	// (0x0001affe) list_medium_line_g2_g2_ParamLimits

0xd24b,	// (0x0001affe) list_medium_line_g2_g2

0x0001,

0xfa1a,	// (0x0001d7cd) list_medium_line_g2_g_ParamLimits

0xfa1a,	// (0x0001d7cd) list_medium_line_g2_g

0xe594,	// (0x0001c347) list_medium_line_g2_t1_ParamLimits

0xe594,	// (0x0001c347) list_medium_line_g2_t1

0xd23f,	// (0x0001aff2) list_medium_line_t3_g2_g1_ParamLimits

0xd23f,	// (0x0001aff2) list_medium_line_t3_g2_g1

0xd24b,	// (0x0001affe) list_medium_line_t3_g2_g2_ParamLimits

0xd24b,	// (0x0001affe) list_medium_line_t3_g2_g2

0x0001,

0xfa1a,	// (0x0001d7cd) list_medium_line_t3_g2_g_ParamLimits

0xfa1a,	// (0x0001d7cd) list_medium_line_t3_g2_g

0x81d1,	// (0x00015f84) list_medium_line_t3_g2_t1_ParamLimits

0x81d1,	// (0x00015f84) list_medium_line_t3_g2_t1

0x81eb,	// (0x00015f9e) list_medium_line_t3_g2_t2_ParamLimits

0x81eb,	// (0x00015f9e) list_medium_line_t3_g2_t2

0x8200,	// (0x00015fb3) list_medium_line_t3_g2_t3_ParamLimits

0x8200,	// (0x00015fb3) list_medium_line_t3_g2_t3

0x0002,

0xfd5f,	// (0x0001db12) list_medium_line_t3_g2_t_ParamLimits

0xfd5f,	// (0x0001db12) list_medium_line_t3_g2_t

0xe39f,	// (0x0001c152) list_medium_line_right_icon_g1

0xe5a9,	// (0x0001c35c) list_medium_line_right_icon_t1

0xd23f,	// (0x0001aff2) list_medium_line_t2_g1_ParamLimits

0xd23f,	// (0x0001aff2) list_medium_line_t2_g1

0x821a,	// (0x00015fcd) list_medium_line_t2_t1_ParamLimits

0x821a,	// (0x00015fcd) list_medium_line_t2_t1

0x8234,	// (0x00015fe7) list_medium_line_t2_t2_ParamLimits

0x8234,	// (0x00015fe7) list_medium_line_t2_t2

0x0001,

0xfd66,	// (0x0001db19) list_medium_line_t2_t_ParamLimits

0xfd66,	// (0x0001db19) list_medium_line_t2_t

0xd23f,	// (0x0001aff2) list_medium_line_t3_g1_ParamLimits

0xd23f,	// (0x0001aff2) list_medium_line_t3_g1

0x824d,	// (0x00016000) list_medium_line_t3_t1_ParamLimits

0x824d,	// (0x00016000) list_medium_line_t3_t1

0x8264,	// (0x00016017) list_medium_line_t3_t2_ParamLimits

0x8264,	// (0x00016017) list_medium_line_t3_t2

0x8279,	// (0x0001602c) list_medium_line_t3_t3_ParamLimits

0x8279,	// (0x0001602c) list_medium_line_t3_t3

0x0002,

0xfd6b,	// (0x0001db1e) list_medium_line_t3_t_ParamLimits

0xfd6b,	// (0x0001db1e) list_medium_line_t3_t

0xd23f,	// (0x0001aff2) list_medium_line_g3_g1_ParamLimits

0xd23f,	// (0x0001aff2) list_medium_line_g3_g1

0xe5b7,	// (0x0001c36a) list_medium_line_g3_g2_ParamLimits

0xe5b7,	// (0x0001c36a) list_medium_line_g3_g2

0xd24b,	// (0x0001affe) list_medium_line_g3_g3_ParamLimits

0xd24b,	// (0x0001affe) list_medium_line_g3_g3

0x0002,

0xfd72,	// (0x0001db25) list_medium_line_g3_g_ParamLimits

0xfd72,	// (0x0001db25) list_medium_line_g3_g

0xe5c3,	// (0x0001c376) list_medium_line_g3_t1_ParamLimits

0xe5c3,	// (0x0001c376) list_medium_line_g3_t1

0xd23f,	// (0x0001aff2) list_medium_line_t2_g3_g1_ParamLimits

0xd23f,	// (0x0001aff2) list_medium_line_t2_g3_g1

0xe5b7,	// (0x0001c36a) list_medium_line_t2_g3_g2_ParamLimits

0xe5b7,	// (0x0001c36a) list_medium_line_t2_g3_g2

0xd24b,	// (0x0001affe) list_medium_line_t2_g3_g3_ParamLimits

0xd24b,	// (0x0001affe) list_medium_line_t2_g3_g3

0x0002,

0xfd72,	// (0x0001db25) list_medium_line_t2_g3_g_ParamLimits

0xfd72,	// (0x0001db25) list_medium_line_t2_g3_g

0x828b,	// (0x0001603e) list_medium_line_t2_g3_t1_ParamLimits

0x828b,	// (0x0001603e) list_medium_line_t2_g3_t1

0x82a2,	// (0x00016055) list_medium_line_t2_g3_t2_ParamLimits

0x82a2,	// (0x00016055) list_medium_line_t2_g3_t2

0x0001,

0xfd79,	// (0x0001db2c) list_medium_line_t2_g3_t_ParamLimits

0xfd79,	// (0x0001db2c) list_medium_line_t2_g3_t

0xd23f,	// (0x0001aff2) list_medium_line_t3_g3_g1_ParamLimits

0xd23f,	// (0x0001aff2) list_medium_line_t3_g3_g1

0xe5b7,	// (0x0001c36a) list_medium_line_t3_g3_g2_ParamLimits

0xe5b7,	// (0x0001c36a) list_medium_line_t3_g3_g2

0xd24b,	// (0x0001affe) list_medium_line_t3_g3_g3_ParamLimits

0xd24b,	// (0x0001affe) list_medium_line_t3_g3_g3

0x0002,

0xfd72,	// (0x0001db25) list_medium_line_t3_g3_g_ParamLimits

0xfd72,	// (0x0001db25) list_medium_line_t3_g3_g

0x82bd,	// (0x00016070) list_medium_line_t3_g3_t1_ParamLimits

0x82bd,	// (0x00016070) list_medium_line_t3_g3_t1

0x82d1,	// (0x00016084) list_medium_line_t3_g3_t2_ParamLimits

0x82d1,	// (0x00016084) list_medium_line_t3_g3_t2

0x82e3,	// (0x00016096) list_medium_line_t3_g3_t3_ParamLimits

0x82e3,	// (0x00016096) list_medium_line_t3_g3_t3

0x0002,

0xfd7e,	// (0x0001db31) list_medium_line_t3_g3_t_ParamLimits

0xfd7e,	// (0x0001db31) list_medium_line_t3_g3_t

0xe4b3,	// (0x0001c266) list_medium_line_right_iconx2_g1

0xe39f,	// (0x0001c152) list_medium_line_right_iconx2_g2

0x0001,

0xfd85,	// (0x0001db38) list_medium_line_right_iconx2_g

0xe5d8,	// (0x0001c38b) list_medium_line_right_iconx2_t1

0xe4b3,	// (0x0001c266) list_medium_line_t2_right_iconx2_g1

0xe39f,	// (0x0001c152) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd85,	// (0x0001db38) list_medium_line_t2_right_iconx2_g

0x82f7,	// (0x000160aa) list_medium_line_t2_right_iconx2_t1

0x8307,	// (0x000160ba) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd8a,	// (0x0001db3d) list_medium_line_t2_right_iconx2_t

0xe5e6,	// (0x0001c399) list_medium_line_x4_t4_t1

0x8319,	// (0x000160cc) list_medium_line_x4_t4_t2

0x8329,	// (0x000160dc) list_medium_line_x4_t4_t3

0x8339,	// (0x000160ec) list_medium_line_x4_t4_t4

0x0003,

0xfd8f,	// (0x0001db42) list_medium_line_x4_t4_t

0x838c,	// (0x0001613f) tport_appsw_pane_ParamLimits

0x838c,	// (0x0001613f) tport_appsw_pane

0x839d,	// (0x00016150) tport_contact_pane_ParamLimits

0x839d,	// (0x00016150) tport_contact_pane

0x83b6,	// (0x00016169) tport_listscroll_pane_ParamLimits

0x83b6,	// (0x00016169) tport_listscroll_pane

0x83d1,	// (0x00016184) cell_tport_appsw_pane_ParamLimits

0x83d1,	// (0x00016184) cell_tport_appsw_pane

0xcf20,	// (0x0001acd3) tport_appsw_pane_g1_ParamLimits

0xcf20,	// (0x0001acd3) tport_appsw_pane_g1

0xe5f4,	// (0x0001c3a7) tport_contact_pane_g1

0xe5fd,	// (0x0001c3b0) tport_contact_pane_t1

0xe60b,	// (0x0001c3be) tport_contact_pane_t2

0x0001,

0xfd98,	// (0x0001db4b) tport_contact_pane_t

0xe619,	// (0x0001c3cc) list_tport_pane

0xe622,	// (0x0001c3d5) scroll_pane_cp_030

0xe633,	// (0x0001c3e6) cell_tport_appsw_pane_g1

0xe643,	// (0x0001c3f6) cell_tport_appsw_pane_t1

0x927e,	// (0x00017031) grid_highlight_pane_cp019

0x8411,	// (0x000161c4) list_tport_double_graphic_pane_ParamLimits

0x8411,	// (0x000161c4) list_tport_double_graphic_pane

0x92ee,	// (0x000170a1) list_highlight_pane_cp023_ParamLimits

0x92ee,	// (0x000170a1) list_highlight_pane_cp023

0x841e,	// (0x000161d1) list_tport_double_graphic_pane_g1_ParamLimits

0x841e,	// (0x000161d1) list_tport_double_graphic_pane_g1

0x842b,	// (0x000161de) list_tport_double_graphic_pane_t1_ParamLimits

0x842b,	// (0x000161de) list_tport_double_graphic_pane_t1

0x8440,	// (0x000161f3) list_tport_double_graphic_pane_t2_ParamLimits

0x8440,	// (0x000161f3) list_tport_double_graphic_pane_t2

0x0001,

0xfda4,	// (0x0001db57) list_tport_double_graphic_pane_t_ParamLimits

0xfda4,	// (0x0001db57) list_tport_double_graphic_pane_t

0x927e,	// (0x00017031) main_cale_note_pane

0x6202,	// (0x00013fb5) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x6202,	// (0x00013fb5) cell_vitu2_function_top_wide_pane_cp01

0x7b54,	// (0x00015907) wait_bar_pane_cp05_ParamLimits

0x927e,	// (0x00017031) listscroll_cmail_pane

0xe659,	// (0x0001c40c) list_cmail_pane

0x845c,	// (0x0001620f) list_cmail_body_pane

0x8471,	// (0x00016224) list_single_cmail_header_caption_pane

0x848a,	// (0x0001623d) list_single_cmail_header_detail_pane_ParamLimits

0x848a,	// (0x0001623d) list_single_cmail_header_detail_pane

0x84b3,	// (0x00016266) list_single_cmail_header_caption_pane_t1

0x84c3,	// (0x00016276) list_single_cmail_header_detail_pane_g1_ParamLimits

0x84c3,	// (0x00016276) list_single_cmail_header_detail_pane_g1

0xe679,	// (0x0001c42c) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe679,	// (0x0001c42c) list_single_cmail_header_detail_pane_g2

0x0002,

0xfda9,	// (0x0001db5c) list_single_cmail_header_detail_pane_g_ParamLimits

0xfda9,	// (0x0001db5c) list_single_cmail_header_detail_pane_g

0xe692,	// (0x0001c445) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe692,	// (0x0001c445) list_single_cmail_header_detail_pane_t1

0xe6c4,	// (0x0001c477) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe6c4,	// (0x0001c477) list_single_cmail_header_editor_pane_bg

0xe6d6,	// (0x0001c489) list_cmail_body_pane_g1

0xe6df,	// (0x0001c492) list_cmail_body_pane_t1

0xcf8e,	// (0x0001ad41) list_single_cmail_header_editor_pane_bg_g1

0xa060,	// (0x00017e13) list_single_cmail_header_editor_pane_bg_g1_copy1

0xcf9e,	// (0x0001ad51) list_single_cmail_header_editor_pane_bg_g1_copy2

0xcf96,	// (0x0001ad49) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd217,	// (0x0001afca) list_single_cmail_header_editor_pane_bg_g1_copy4

0xcfbe,	// (0x0001ad71) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xcfae,	// (0x0001ad61) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xcfb6,	// (0x0001ad69) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa040,	// (0x00017df3) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8501,	// (0x000162b4) calenote_gesture_pane_ParamLimits

0x8501,	// (0x000162b4) calenote_gesture_pane

0x8521,	// (0x000162d4) calenote_window_pane_ParamLimits

0x8521,	// (0x000162d4) calenote_window_pane

0xe6ed,	// (0x0001c4a0) popup_note_window_cp01

0x853d,	// (0x000162f0) calenote_swipe_1_pane_ParamLimits

0x853d,	// (0x000162f0) calenote_swipe_1_pane

0x7f20,	// (0x00015cd3) calenote_swipe_2_pane_ParamLimits

0x7f20,	// (0x00015cd3) calenote_swipe_2_pane

0xe2a4,	// (0x0001c057) calenote_swipe_1_pane_g1_ParamLimits

0xe2a4,	// (0x0001c057) calenote_swipe_1_pane_g1

0xe2b1,	// (0x0001c064) calenote_swipe_1_pane_g2_ParamLimits

0xe2b1,	// (0x0001c064) calenote_swipe_1_pane_g2

0x0001,

0xfcd8,	// (0x0001da8b) calenote_swipe_1_pane_g_ParamLimits

0xfcd8,	// (0x0001da8b) calenote_swipe_1_pane_g

0xe6ff,	// (0x0001c4b2) calenote_swipe_1_pane_t1_ParamLimits

0xe6ff,	// (0x0001c4b2) calenote_swipe_1_pane_t1

0xe2a4,	// (0x0001c057) calenote_swipe_2_pane_g1_ParamLimits

0xe2a4,	// (0x0001c057) calenote_swipe_2_pane_g1

0xe71e,	// (0x0001c4d1) calenote_swipe_2_pane_g2_ParamLimits

0xe71e,	// (0x0001c4d1) calenote_swipe_2_pane_g2

0x0001,

0xfdb5,	// (0x0001db68) calenote_swipe_2_pane_g_ParamLimits

0xfdb5,	// (0x0001db68) calenote_swipe_2_pane_g

0xe72a,	// (0x0001c4dd) calenote_swipe_2_pane_t1_ParamLimits

0xe72a,	// (0x0001c4dd) calenote_swipe_2_pane_t1

0x927e,	// (0x00017031) main_mup_navstr_pane

0x4e59,	// (0x00012c0c) main_mup3_pane_t7_ParamLimits

0x4e59,	// (0x00012c0c) main_mup3_pane_t7

0xcb3f,	// (0x0001a8f2) main_mp4_pane_g6_ParamLimits

0xcb3f,	// (0x0001a8f2) main_mp4_pane_g6

0xcd67,	// (0x0001ab1a) main_image3_pane_t4_ParamLimits

0xcd67,	// (0x0001ab1a) main_image3_pane_t4

0x8552,	// (0x00016305) popup_navstr_preview_pane_ParamLimits

0x8552,	// (0x00016305) popup_navstr_preview_pane

0x8566,	// (0x00016319) scroll_navstr_pane_ParamLimits

0x8566,	// (0x00016319) scroll_navstr_pane

0x927e,	// (0x00017031) bg_popup_preview_window_pane_cp04

0xe751,	// (0x0001c504) popup_navstr_preview_pane_t1

0x857a,	// (0x0001632d) scroll_navstr_pane_g1_ParamLimits

0x857a,	// (0x0001632d) scroll_navstr_pane_g1

0x858e,	// (0x00016341) scroll_navstr_pane_t1_ParamLimits

0x858e,	// (0x00016341) scroll_navstr_pane_t1

0xe6f6,	// (0x0001c4a9) bg_button_pane_cp014

0xe6f6,	// (0x0001c4a9) bg_button_pane_cp030

0xe208,	// (0x0001bfbb) list_double_fisheye_pane_g4_ParamLimits

0xe208,	// (0x0001bfbb) list_double_fisheye_pane_g4

0xe214,	// (0x0001bfc7) list_double_fisheye_pane_g5_ParamLimits

0xe214,	// (0x0001bfc7) list_double_fisheye_pane_g5

0xe661,	// (0x0001c414) sp_fs_scroll_pane_cp03

0x9dac,	// (0x00017b5f) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe3df,	// (0x0001c192) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcf5,	// (0x0001daa8) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe3eb,	// (0x0001c19e) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x8452,	// (0x00016205) sp_fs_scroll_pane_cp02

0x9c2d,	// (0x000179e0) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x9c2d,	// (0x000179e0) popup_sp_fs_calendar_preview_list_single_pane

0x927e,	// (0x00017031) main_cam6_pano_pane

0x92ee,	// (0x000170a1) main_mup3_pane_ParamLimits

0x927e,	// (0x00017031) main_phacti_pane

0x7a27,	// (0x000157da) bg_button_pane_cp11

0x7a41,	// (0x000157f4) main_mobtv_info_pane_g2_ParamLimits

0x7a41,	// (0x000157f4) main_mobtv_info_pane_g2

0x0001,

0xfc55,	// (0x0001da08) main_mobtv_info_pane_g_ParamLimits

0xfc55,	// (0x0001da08) main_mobtv_info_pane_g

0x7c1e,	// (0x000159d1) sc_clock_pane_t5_ParamLimits

0x7c1e,	// (0x000159d1) sc_clock_pane_t5

0x7ca9,	// (0x00015a5c) main_radioblah_pane_g1_ParamLimits

0xe161,	// (0x0001bf14) main_radioblah_pane_t3_ParamLimits

0xe161,	// (0x0001bf14) main_radioblah_pane_t3

0xe179,	// (0x0001bf2c) main_radioblah_pane_t4_ParamLimits

0xe179,	// (0x0001bf2c) main_radioblah_pane_t4

0x7cd1,	// (0x00015a84) main_radioblah_text_pane_ParamLimits

0x7cd1,	// (0x00015a84) main_radioblah_text_pane

0x7ce3,	// (0x00015a96) main_radioblah_info_pane_g1_ParamLimits

0x7d7e,	// (0x00015b31) main_radioblah_info_pane_t4_ParamLimits

0x7d7e,	// (0x00015b31) main_radioblah_info_pane_t4

0x92ee,	// (0x000170a1) main_sp_fs_calendar_pane

0x85a4,	// (0x00016357) main_phacti_pane_g1

0x85ac,	// (0x0001635f) phacti_note_pane_ParamLimits

0x85ac,	// (0x0001635f) phacti_note_pane

0xe768,	// (0x0001c51b) phacti_term_pane_ParamLimits

0xe768,	// (0x0001c51b) phacti_term_pane

0xe77d,	// (0x0001c530) phacti_note_pane_t1_ParamLimits

0xe77d,	// (0x0001c530) phacti_note_pane_t1

0xe794,	// (0x0001c547) phacti_term_pane_g1

0xe79c,	// (0x0001c54f) phacti_term_pane_t1_ParamLimits

0xe79c,	// (0x0001c54f) phacti_term_pane_t1

0xe7c6,	// (0x0001c579) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe7ce,	// (0x0001c581) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdbf,	// (0x0001db72) popup_sp_fs_calendar_preview_list_single_pane_g

0xe7d6,	// (0x0001c589) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe7d6,	// (0x0001c589) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe7ec,	// (0x0001c59f) aid_popup_sp_fs_bg_corner_pane

0xc1b9,	// (0x00019f6c) popup_sp_fs_calendar_preview_bg_pane_g1

0x927e,	// (0x00017031) popup_sp_fs_calendar_preview_bg_pane

0xe7f4,	// (0x0001c5a7) popup_sp_fs_calendar_preview_list_pane

0x92ee,	// (0x000170a1) bg_main_sp_fs_cale_pane_ParamLimits

0x92ee,	// (0x000170a1) bg_main_sp_fs_cale_pane

0xe805,	// (0x0001c5b8) listscroll_cale_mrui_pane_ParamLimits

0xe805,	// (0x0001c5b8) listscroll_cale_mrui_pane

0xe819,	// (0x0001c5cc) listscroll_sp_fs_schedule_track_pane

0xe822,	// (0x0001c5d5) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe822,	// (0x0001c5d5) main_sp_fs_ctrlbar_pane_cp01

0xe833,	// (0x0001c5e6) main_sp_fs_ribbon_pane

0xe83b,	// (0x0001c5ee) popup_sp_fs_cale_preview_window

0x8607,	// (0x000163ba) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8607,	// (0x000163ba) list_single_sp_fs_schedule_track_pane

0x92ee,	// (0x000170a1) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x92ee,	// (0x000170a1) bg_sp_fs_highlight_list_pane_cp03

0x861c,	// (0x000163cf) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x861c,	// (0x000163cf) list_single_sp_fs_schedule_track_pane_g1

0x8628,	// (0x000163db) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8628,	// (0x000163db) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdc4,	// (0x0001db77) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdc4,	// (0x0001db77) list_single_sp_fs_schedule_track_pane_g

0x8634,	// (0x000163e7) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8634,	// (0x000163e7) list_single_sp_fs_schedule_track_pane_t1

0x864e,	// (0x00016401) sp_fs_schedule_track_pane_ParamLimits

0x864e,	// (0x00016401) sp_fs_schedule_track_pane

0xe84d,	// (0x0001c600) sp_fs_schedule_track_pane_g1

0xe855,	// (0x0001c608) sp_fs_schedule_track_pane_g2

0xe85d,	// (0x0001c610) sp_fs_schedule_track_pane_g3

0xe865,	// (0x0001c618) sp_fs_schedule_track_pane_g4

0xe86d,	// (0x0001c620) sp_fs_schedule_track_pane_g5

0x0004,

0xfdc9,	// (0x0001db7c) sp_fs_schedule_track_pane_g

0xcf8e,	// (0x0001ad41) bg_sp_fs_schedule_viewer_highlight_g1

0xa060,	// (0x00017e13) bg_sp_fs_schedule_viewer_highlight_g2

0xcf96,	// (0x0001ad49) bg_sp_fs_schedule_viewer_highlight_g3

0xcf9e,	// (0x0001ad51) bg_sp_fs_schedule_viewer_highlight_g4

0xd217,	// (0x0001afca) bg_sp_fs_schedule_viewer_highlight_g5

0xcfae,	// (0x0001ad61) bg_sp_fs_schedule_viewer_highlight_g6

0xcfb6,	// (0x0001ad69) bg_sp_fs_schedule_viewer_highlight_g7

0xcfbe,	// (0x0001ad71) bg_sp_fs_schedule_viewer_highlight_g8

0xa040,	// (0x00017df3) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdd4,	// (0x0001db87) bg_sp_fs_schedule_viewer_highlight_g

0x927e,	// (0x00017031) bg_main_sp_fs_ribbon_pane

0x865f,	// (0x00016412) main_sp_fs_ribbon_pane_g1

0xe875,	// (0x0001c628) main_sp_fs_ribbon_pane_t1

0x8668,	// (0x0001641b) main_sp_fs_ribbon_pane_t2

0xe884,	// (0x0001c637) main_sp_fs_ribbon_pane_t3

0x0002,

0xfde7,	// (0x0001db9a) main_sp_fs_ribbon_pane_t

0xe893,	// (0x0001c646) main_sp_fs_ribbon_scheduler_pane

0xe89b,	// (0x0001c64e) bg_main_sp_fs_ribbon_pane_g1

0xe8a4,	// (0x0001c657) bg_main_sp_fs_ribbon_pane_g2

0xe8ad,	// (0x0001c660) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdee,	// (0x0001dba1) bg_main_sp_fs_ribbon_pane_g

0xe8b5,	// (0x0001c668) main_sp_fs_ribbon_scheduler_pane_g1

0xe8be,	// (0x0001c671) main_sp_fs_ribbon_scheduler_pane_g2

0xe8c7,	// (0x0001c67a) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdf5,	// (0x0001dba8) main_sp_fs_ribbon_scheduler_pane_g

0xe8d0,	// (0x0001c683) list_cale_mrui_pane

0x8677,	// (0x0001642a) sp_fs_scroll_pane_cp07_ParamLimits

0x8677,	// (0x0001642a) sp_fs_scroll_pane_cp07

0x868b,	// (0x0001643e) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x868b,	// (0x0001643e) bg_sp_fs_schedule_viewer_highlight

0xe8d9,	// (0x0001c68c) list_single_sp_fs_schedule_track_pane_cp01

0xe8e1,	// (0x0001c694) list_sp_fs_schedule_track_pane

0xe8e9,	// (0x0001c69c) sp_fs_scroll_pane_cp06_ParamLimits

0xe8e9,	// (0x0001c69c) sp_fs_scroll_pane_cp06

0xc1b9,	// (0x00019f6c) bgmain_sp_fs_calendar_pane_g1

0x869b,	// (0x0001644e) list_single_cale_mrui_pane_ParamLimits

0x869b,	// (0x0001644e) list_single_cale_mrui_pane

0xe8fb,	// (0x0001c6ae) list_single_cale_mrui_row_pane_ParamLimits

0xe8fb,	// (0x0001c6ae) list_single_cale_mrui_row_pane

0xe908,	// (0x0001c6bb) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe908,	// (0x0001c6bb) list_single_cale_mrui_row_pane_g1

0xe94d,	// (0x0001c700) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe94d,	// (0x0001c700) list_single_cale_mrui_row_pane_t1

0x86bd,	// (0x00016470) list_single_cale_mrui_row_pane_t2_ParamLimits

0x86bd,	// (0x00016470) list_single_cale_mrui_row_pane_t2

0xe95f,	// (0x0001c712) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe95f,	// (0x0001c712) list_single_cale_mrui_row_pane_t3

0xe98e,	// (0x0001c741) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe98e,	// (0x0001c741) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe03,	// (0x0001dbb6) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe03,	// (0x0001dbb6) list_single_cale_mrui_row_pane_t

0x8725,	// (0x000164d8) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8725,	// (0x000164d8) list_single_cmail_header_editor_pane_bg_cp01

0x874b,	// (0x000164fe) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x874b,	// (0x000164fe) list_single_cmail_header_editor_pane_bg_cp02

0x876b,	// (0x0001651e) main_radioblah_text_pane_t1_ParamLimits

0x876b,	// (0x0001651e) main_radioblah_text_pane_t1

0xe9bd,	// (0x0001c770) cam6_indi_pane_cp01

0xe9c5,	// (0x0001c778) cam6_mode_pane_cp01

0xe9cd,	// (0x0001c780) cam6_pano_pane

0xe9d6,	// (0x0001c789) cam6_zoom_pane_cp01

0xe9de,	// (0x0001c791) cam6_pano_image_pane

0xe9e9,	// (0x0001c79c) cam6_pano_pane_g1

0xdec0,	// (0x0001bc73) cam6_pano_pane_g2

0xe9f2,	// (0x0001c7a5) cam6_pano_pane_g3

0xe9fb,	// (0x0001c7ae) cam6_pano_pane_g4

0xc794,	// (0x0001a547) cam6_pano_pane_g5

0xea04,	// (0x0001c7b7) cam6_pano_pane_g6

0xea0e,	// (0x0001c7c1) cam6_pano_pane_g7

0xea16,	// (0x0001c7c9) cam6_pano_pane_g8

0xea1f,	// (0x0001c7d2) cam6_pano_pane_g9

0x0008,

0xfe0c,	// (0x0001dbbf) cam6_pano_pane_g

0x927e,	// (0x00017031) main_browser_tag_pane

0xe749,	// (0x0001c4fc) grid_navstr_albumart_pane

0xea2a,	// (0x0001c7dd) cell_navstr_albumart_pane_ParamLimits

0xea2a,	// (0x0001c7dd) cell_navstr_albumart_pane

0xa993,	// (0x00018746) cell_navstr_albumart_pane_g1

0xbac6,	// (0x00019879) cell_navstr_albumart_pane_g2

0xbad6,	// (0x00019889) cell_navstr_albumart_pane_g3

0xbace,	// (0x00019881) cell_navstr_albumart_pane_g4

0x0003,

0xfe1f,	// (0x0001dbd2) cell_navstr_albumart_pane_g

0x8786,	// (0x00016539) bt_list_pane_ParamLimits

0x8786,	// (0x00016539) bt_list_pane

0x879b,	// (0x0001654e) bt_list_pane_t1

0x87aa,	// (0x0001655d) bt_list_pane_t2

0x0001,

0xfe28,	// (0x0001dbdb) bt_list_pane_t

0x927e,	// (0x00017031) main_cale_prevew_pane

0x87b9,	// (0x0001656c) popup_cale_preview_window_ParamLimits

0x87b9,	// (0x0001656c) popup_cale_preview_window

0x92ee,	// (0x000170a1) bg_popup_preview_window_pane_cp05_ParamLimits

0x92ee,	// (0x000170a1) bg_popup_preview_window_pane_cp05

0xea4c,	// (0x0001c7ff) list_cale_preview_pane_ParamLimits

0xea4c,	// (0x0001c7ff) list_cale_preview_pane

0x87d0,	// (0x00016583) list_double_cale_preview_pane_ParamLimits

0x87d0,	// (0x00016583) list_double_cale_preview_pane

0x87e2,	// (0x00016595) list_single_cale_preview_pane_ParamLimits

0x87e2,	// (0x00016595) list_single_cale_preview_pane

0x87f6,	// (0x000165a9) list_single_cale_preview_pane_g1

0x87fe,	// (0x000165b1) list_single_cale_preview_pane_t1_ParamLimits

0x87fe,	// (0x000165b1) list_single_cale_preview_pane_t1

0x8813,	// (0x000165c6) list_double_cale_preview_pane_g1

0x881b,	// (0x000165ce) list_double_cale_preview_pane_t1_ParamLimits

0x881b,	// (0x000165ce) list_double_cale_preview_pane_t1

0x8830,	// (0x000165e3) list_double_cale_preview_pane_t2_ParamLimits

0x8830,	// (0x000165e3) list_double_cale_preview_pane_t2

0x0001,

0xfe2d,	// (0x0001dbe0) list_double_cale_preview_pane_t_ParamLimits

0xfe2d,	// (0x0001dbe0) list_double_cale_preview_pane_t

0x927e,	// (0x00017031) main_ezdial_pane

0x92ee,	// (0x000170a1) main_sp_fs_email_pane_ParamLimits

0x7f5a,	// (0x00015d0d) cmail_ddmenu_btn01_pane_ParamLimits

0x7f5a,	// (0x00015d0d) cmail_ddmenu_btn01_pane

0x7f6d,	// (0x00015d20) cmail_ddmenu_btn02_pane_ParamLimits

0x7f6d,	// (0x00015d20) cmail_ddmenu_btn02_pane

0x7f90,	// (0x00015d43) cmail_ddmenu_btn03_pane_ParamLimits

0x7f90,	// (0x00015d43) cmail_ddmenu_btn03_pane

0x7fb9,	// (0x00015d6c) main_sp_fs_ctrlbar_pane_ParamLimits

0x7fdd,	// (0x00015d90) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x845c,	// (0x0001620f) list_cmail_body_pane_ParamLimits

0xe670,	// (0x0001c423) bg_button_pane_cp12

0xe685,	// (0x0001c438) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe685,	// (0x0001c438) list_single_cmail_header_detail_pane_g3

0x84db,	// (0x0001628e) list_single_cmail_header_detail_pane_t2_ParamLimits

0x84db,	// (0x0001628e) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdb0,	// (0x0001db63) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdb0,	// (0x0001db63) list_single_cmail_header_detail_pane_t

0xe7b1,	// (0x0001c564) phacti_term_pane_t2_ParamLimits

0xe7b1,	// (0x0001c564) phacti_term_pane_t2

0x0001,

0xfdba,	// (0x0001db6d) phacti_term_pane_t_ParamLimits

0xfdba,	// (0x0001db6d) phacti_term_pane_t

0xea58,	// (0x0001c80b) aid_size_list_single_double

0x8848,	// (0x000165fb) popup_ezdial_listscroll_window

0x8864,	// (0x00016617) popup_number_entry_window_cp01

0xa812,	// (0x000185c5) bg_popup_call_pane_cp09

0xea64,	// (0x0001c817) ezdial_list_pane

0xea6c,	// (0x0001c81f) scroll_pane_cp23

0xbcb1,	// (0x00019a64) bg_button_pane_cp028_ParamLimits

0xbcb1,	// (0x00019a64) bg_button_pane_cp028

0x8872,	// (0x00016625) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8872,	// (0x00016625) cmail_ddmenu_btn01_pane_g1

0x8881,	// (0x00016634) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8881,	// (0x00016634) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe32,	// (0x0001dbe5) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe32,	// (0x0001dbe5) cmail_ddmenu_btn01_pane_g

0xea74,	// (0x0001c827) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xea74,	// (0x0001c827) cmail_ddmenu_btn01_pane_t1

0xbcb1,	// (0x00019a64) bg_button_pane_cp029_ParamLimits

0xbcb1,	// (0x00019a64) bg_button_pane_cp029

0x8891,	// (0x00016644) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8891,	// (0x00016644) cmail_ddmenu_btn02_pane_g1

0x88ac,	// (0x0001665f) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x88ac,	// (0x0001665f) cmail_ddmenu_btn02_pane_t1

0x92ee,	// (0x000170a1) bg_button_pane_cp031_ParamLimits

0x92ee,	// (0x000170a1) bg_button_pane_cp031

0x8891,	// (0x00016644) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8891,	// (0x00016644) cmail_ddmenu_btn03_pane_g1

0x88ac,	// (0x0001665f) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x88ac,	// (0x0001665f) cmail_ddmenu_btn03_pane_t1

0x5a16,	// (0x000137c9) cell_dialer2_keypad_pane_t1_ParamLimits

0x5a30,	// (0x000137e3) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x5a30,	// (0x000137e3) cell_dialer2_keypad_pane_t1_copy1

0x78a9,	// (0x0001565c) ncimui_group_button_pane

0x92ee,	// (0x000170a1) main_sp_fs_calendar_pane_ParamLimits

0x8471,	// (0x00016224) list_single_cmail_header_caption_pane_ParamLimits

0xe7fc,	// (0x0001c5af) aid_recal_txt_sm_pane

0x927e,	// (0x00017031) mian_recal_day_pane

0xe83b,	// (0x0001c5ee) popup_sp_fs_cale_preview_window_ParamLimits

0x927e,	// (0x00017031) list_recal_day_pane

0xeaac,	// (0x0001c85f) list_single_recal_day_pane_ParamLimits

0xeaac,	// (0x0001c85f) list_single_recal_day_pane

0xeabe,	// (0x0001c871) list_single_recal_day_pane_g1_ParamLimits

0xeabe,	// (0x0001c871) list_single_recal_day_pane_g1

0xeaca,	// (0x0001c87d) list_single_recal_day_pane_g2_ParamLimits

0xeaca,	// (0x0001c87d) list_single_recal_day_pane_g2

0xeada,	// (0x0001c88d) list_single_recal_day_pane_g3_ParamLimits

0xeada,	// (0x0001c88d) list_single_recal_day_pane_g3

0x88d3,	// (0x00016686) list_single_recal_day_pane_g4_ParamLimits

0x88d3,	// (0x00016686) list_single_recal_day_pane_g4

0xeae6,	// (0x0001c899) list_single_recal_day_pane_g5_ParamLimits

0xeae6,	// (0x0001c899) list_single_recal_day_pane_g5

0xeaf6,	// (0x0001c8a9) list_single_recal_day_pane_g6_ParamLimits

0xeaf6,	// (0x0001c8a9) list_single_recal_day_pane_g6

0x0004,

0xfe41,	// (0x0001dbf4) list_single_recal_day_pane_g_ParamLimits

0xfe41,	// (0x0001dbf4) list_single_recal_day_pane_g

0xeb0d,	// (0x0001c8c0) list_single_recal_day_pane_t1

0xeb1f,	// (0x0001c8d2) list_single_recal_day_pane_t2

0x0001,

0xfe4c,	// (0x0001dbff) list_single_recal_day_pane_t

0x88f3,	// (0x000166a6) ncimui_query_button_pane_ParamLimits

0x88f3,	// (0x000166a6) ncimui_query_button_pane

0x8903,	// (0x000166b6) ncimui_query_button_pane_t1_ParamLimits

0x8903,	// (0x000166b6) ncimui_query_button_pane_t1

0xeb34,	// (0x0001c8e7) ncimui_query_button_pane_t2_ParamLimits

0xeb34,	// (0x0001c8e7) ncimui_query_button_pane_t2

0x0001,

0xfe51,	// (0x0001dc04) ncimui_query_button_pane_t_ParamLimits

0xfe51,	// (0x0001dc04) ncimui_query_button_pane_t

0x8916,	// (0x000166c9) query_button_pane_ParamLimits

0x8916,	// (0x000166c9) query_button_pane

0x927e,	// (0x00017031) bg_button_pane_cp0028

0xeb47,	// (0x0001c8fa) query_button_pane_t1

0x3a91,	// (0x00011844) main_tport_pane_ParamLimits

0x8349,	// (0x000160fc) bg_popup_window_pane_cp01_ParamLimits

0x8349,	// (0x000160fc) bg_popup_window_pane_cp01

0x8363,	// (0x00016116) heading_pane_cp08_ParamLimits

0x8363,	// (0x00016116) heading_pane_cp08

0x8377,	// (0x0001612a) heading_pane_cp07_ParamLimits

0x8377,	// (0x0001612a) heading_pane_cp07

0xe633,	// (0x0001c3e6) cell_tport_appsw_pane_g2

0x0002,

0xfd9d,	// (0x0001db50) cell_tport_appsw_pane_g

0x3070,	// (0x00010e23) input_candi_list_open_g1

0xa253,	// (0x00018006) list_cale_time_pane_g6_ParamLimits

0xa253,	// (0x00018006) list_cale_time_pane_g6

0x485a,	// (0x0001260d) aid_size_touch_calib_1_ParamLimits

0x485a,	// (0x0001260d) aid_size_touch_calib_1

0x4866,	// (0x00012619) aid_size_touch_calib_2_ParamLimits

0x4866,	// (0x00012619) aid_size_touch_calib_2

0x487c,	// (0x0001262f) aid_size_touch_calib_3_ParamLimits

0x487c,	// (0x0001262f) aid_size_touch_calib_3

0x489a,	// (0x0001264d) aid_size_touch_calib_4_ParamLimits

0x489a,	// (0x0001264d) aid_size_touch_calib_4

0x48b0,	// (0x00012663) main_touch_calib_button_group_pane_ParamLimits

0x48b0,	// (0x00012663) main_touch_calib_button_group_pane

0x48c8,	// (0x0001267b) main_touch_calib_pane_g1_ParamLimits

0x48d4,	// (0x00012687) main_touch_calib_pane_g2_ParamLimits

0x48e0,	// (0x00012693) main_touch_calib_pane_g3_ParamLimits

0x48ec,	// (0x0001269f) main_touch_calib_pane_g4_ParamLimits

0xf770,	// (0x0001d523) main_touch_calib_pane_g_ParamLimits

0x48f8,	// (0x000126ab) main_touch_calib_pane_t1_ParamLimits

0x4912,	// (0x000126c5) main_touch_calib_pane_t2_ParamLimits

0x492c,	// (0x000126df) main_touch_calib_pane_t3_ParamLimits

0x4940,	// (0x000126f3) main_touch_calib_pane_t4_ParamLimits

0x4954,	// (0x00012707) main_touch_calib_pane_t5_ParamLimits

0xf779,	// (0x0001d52c) main_touch_calib_pane_t_ParamLimits

0xc564,	// (0x0001a317) list_single_fp_cale_pane_g3_ParamLimits

0xc564,	// (0x0001a317) list_single_fp_cale_pane_g3

0x92ee,	// (0x000170a1) bg_button_pane_cp012_ParamLimits

0x92ee,	// (0x000170a1) bg_vkb2_func_pane_cp03_ParamLimits

0x6ae2,	// (0x00014895) cell_vitu2_function_top_pane_g1_ParamLimits

0x92ee,	// (0x000170a1) bg_vkb2_func_pane_cp04_ParamLimits

0x7849,	// (0x000155fc) main_ncimui_button_group_pane_ParamLimits

0x7849,	// (0x000155fc) main_ncimui_button_group_pane

0x7897,	// (0x0001564a) main_ncimui_pane_t3_ParamLimits

0x7897,	// (0x0001564a) main_ncimui_pane_t3

0xe75f,	// (0x0001c512) phacti_button_group_pane

0xea58,	// (0x0001c80b) aid_size_list_single_double_ParamLimits

0x8848,	// (0x000165fb) popup_ezdial_listscroll_window_ParamLimits

0x8864,	// (0x00016617) popup_number_entry_window_cp01_ParamLimits

0x8929,	// (0x000166dc) phacti_button_pane_ParamLimits

0x8929,	// (0x000166dc) phacti_button_pane

0x927e,	// (0x00017031) bg_button_pane_cp14

0xeb55,	// (0x0001c908) phacti_button_pane_t1

0x893a,	// (0x000166ed) main_touch_calib_button_pane_ParamLimits

0x893a,	// (0x000166ed) main_touch_calib_button_pane

0x9aa1,	// (0x00017854) bg_button_pane_cp18_ParamLimits

0x9aa1,	// (0x00017854) bg_button_pane_cp18

0xeb63,	// (0x0001c916) main_touch_calib_button_pane_t1_ParamLimits

0xeb63,	// (0x0001c916) main_touch_calib_button_pane_t1

0xeb79,	// (0x0001c92c) main_touch_calib_button_pane_t2_ParamLimits

0xeb79,	// (0x0001c92c) main_touch_calib_button_pane_t2

0x0001,

0xfe56,	// (0x0001dc09) main_touch_calib_button_pane_t_ParamLimits

0xfe56,	// (0x0001dc09) main_touch_calib_button_pane_t

0x927e,	// (0x00017031) cell_ncimui_button_pane

0x927e,	// (0x00017031) bg_button_pane_cp032

0xeb97,	// (0x0001c94a) cell_ncimui_button_pane_t1

0xcd47,	// (0x0001aafa) image3_infobar_pane_ParamLimits

0xcd47,	// (0x0001aafa) image3_infobar_pane

0x7c4a,	// (0x000159fd) fs_bigclock_status_pane_ParamLimits

0x7c4a,	// (0x000159fd) fs_bigclock_status_pane

0x7c57,	// (0x00015a0a) main_fs_bigclock_clock_pane_ParamLimits

0x7c57,	// (0x00015a0a) main_fs_bigclock_clock_pane

0x7c6b,	// (0x00015a1e) main_fs_bigclock_indi_pane_ParamLimits

0x7c6b,	// (0x00015a1e) main_fs_bigclock_indi_pane

0x7c83,	// (0x00015a36) main_fs_bigclock_swipe_pane_ParamLimits

0x7c83,	// (0x00015a36) main_fs_bigclock_swipe_pane

0x927e,	// (0x00017031) main_fs_clock_dumped_data

0xdfcd,	// (0x0001bd80) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xdfcd,	// (0x0001bd80) list_single_fs_bigclock_indicator_pane_g1

0xdff6,	// (0x0001bda9) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xdff6,	// (0x0001bda9) list_single_fs_bigclock_indicator_pane_g2

0xe010,	// (0x0001bdc3) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe010,	// (0x0001bdc3) list_single_fs_bigclock_indicator_pane_g3

0xe02a,	// (0x0001bddd) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe02a,	// (0x0001bddd) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc89,	// (0x0001da3c) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc89,	// (0x0001da3c) list_single_fs_bigclock_indicator_pane_g

0xe053,	// (0x0001be06) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe053,	// (0x0001be06) list_single_fs_bigclock_indicator_pane_t1

0xe07b,	// (0x0001be2e) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe07b,	// (0x0001be2e) list_single_fs_bigclock_indicator_pane_t2

0xe0a3,	// (0x0001be56) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe0a3,	// (0x0001be56) list_single_fs_bigclock_indicator_pane_t3

0xe0cb,	// (0x0001be7e) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe0cb,	// (0x0001be7e) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc94,	// (0x0001da47) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc94,	// (0x0001da47) list_single_fs_bigclock_indicator_pane_t

0xeba5,	// (0x0001c958) image3_infobar_fav_pane_ParamLimits

0xeba5,	// (0x0001c958) image3_infobar_fav_pane

0xebb5,	// (0x0001c968) image3_infobar_loc_pane_ParamLimits

0xebb5,	// (0x0001c968) image3_infobar_loc_pane

0xebc9,	// (0x0001c97c) image3_infobar_time_pane_ParamLimits

0xebc9,	// (0x0001c97c) image3_infobar_time_pane

0xc1b9,	// (0x00019f6c) image3_infobar_time_pane_g1

0xebd9,	// (0x0001c98c) image3_infobar_time_pane_t1

0xc1b9,	// (0x00019f6c) image3_infobar_loc_pane_g1

0xebe7,	// (0x0001c99a) image3_infobar_loc_pane_g2

0x0001,

0xfe5b,	// (0x0001dc0e) image3_infobar_loc_pane_g

0xebef,	// (0x0001c9a2) image3_infobar_loc_pane_t1

0xc1b9,	// (0x00019f6c) image3_infobar_fav_pane_g1

0xebfd,	// (0x0001c9b0) image3_infobar_fav_pane_g2

0x0001,

0xfe60,	// (0x0001dc13) image3_infobar_fav_pane_g

0xec05,	// (0x0001c9b8) fs_bigclock_status_battery_pane

0xec0e,	// (0x0001c9c1) fs_bigclock_status_signal_pane

0xec17,	// (0x0001c9ca) fs_bigclock_status_title_pane

0xec20,	// (0x0001c9d3) fs_bigclock_status_signal_pane_g1

0xec29,	// (0x0001c9dc) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe65,	// (0x0001dc18) fs_bigclock_status_signal_pane_g

0xec31,	// (0x0001c9e4) fs_bigclock_status_battery_pane_g1

0xec3a,	// (0x0001c9ed) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe6a,	// (0x0001dc1d) fs_bigclock_status_battery_pane_g

0xec42,	// (0x0001c9f5) fs_bigclock_status_title_pane_t1

0xc1b9,	// (0x00019f6c) main_fs_bigclock_clock_pane_g1

0xec50,	// (0x0001ca03) main_fs_bigclock_clock_pane_g2

0xec50,	// (0x0001ca03) main_fs_bigclock_clock_pane_g3

0xec50,	// (0x0001ca03) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe6f,	// (0x0001dc22) main_fs_bigclock_clock_pane_g

0xec58,	// (0x0001ca0b) main_fs_bigclock_clock_pane_t1

0xec66,	// (0x0001ca19) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe78,	// (0x0001dc2b) main_fs_bigclock_clock_pane_t

0xec75,	// (0x0001ca28) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec75,	// (0x0001ca28) list_single_fs_bigclock_indicator_pane

0x894f,	// (0x00016702) list_single_fs_bigclock_pane_ParamLimits

0x894f,	// (0x00016702) list_single_fs_bigclock_pane

0xec8f,	// (0x0001ca42) main_fs_bigclock_indicator_pane_t1

0xec9e,	// (0x0001ca51) list_single_fs_bigclock_pane_g1

0xeca6,	// (0x0001ca59) list_single_fs_bigclock_pane_t1

0xc1b9,	// (0x00019f6c) main_fs_bigclock_swipe_pane_g1

0xece9,	// (0x0001ca9c) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe89,	// (0x0001dc3c) main_fs_bigclock_swipe_pane_g

0xecf1,	// (0x0001caa4) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xecf1,	// (0x0001caa4) main_fs_bigclock_swipe_pane_t1

0x2883,	// (0x00010636) call_type_pane_ParamLimits

0x927e,	// (0x00017031) main_btmg_pane

0xe934,	// (0x0001c6e7) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe934,	// (0x0001c6e7) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdfc,	// (0x0001dbaf) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdfc,	// (0x0001dbaf) list_single_cale_mrui_row_pane_g

0xea93,	// (0x0001c846) list_recal_vselct_arw_lo_pane

0xea9b,	// (0x0001c84e) list_recal_vselct_arw_up_pane

0xeaa3,	// (0x0001c856) list_recal_vselct_pane

0xed20,	// (0x0001cad3) btmg_button_pane

0x89b5,	// (0x00016768) main_btmg_pane_g1

0x927e,	// (0x00017031) bg_button_pane_cp044

0xed2a,	// (0x0001cadd) btmg_button_pane_t1

0xbca9,	// (0x00019a5c) aid_listscroll_gen

0x92ee,	// (0x000170a1) main_cntbar_detail_pane

0xe651,	// (0x0001c404) list_cmail_folder_pane

0xe661,	// (0x0001c414) sp_fs_scroll_pane_cp03_ParamLimits

0x8471,	// (0x00016224) list_single_fs_dyc_pane_cp01_ParamLimits

0x8471,	// (0x00016224) list_single_fs_dyc_pane_cp01

0xed38,	// (0x0001caeb) aid_size_cmail_indent

0xed41,	// (0x0001caf4) list_single_dyc_row_pane_cp01

0x89eb,	// (0x0001679e) cntbar_detail_list_pane_ParamLimits

0x89eb,	// (0x0001679e) cntbar_detail_list_pane

0x8a37,	// (0x000167ea) main_cntbar_detail_cont_pane_ParamLimits

0x8a37,	// (0x000167ea) main_cntbar_detail_cont_pane

0x281d,	// (0x000105d0) scroll_pane_cp032_ParamLimits

0x281d,	// (0x000105d0) scroll_pane_cp032

0x8a4b,	// (0x000167fe) cntbar_detail_list_event_pane_ParamLimits

0x8a4b,	// (0x000167fe) cntbar_detail_list_event_pane

0x89fb,	// (0x000167ae) cntbar_detail_list_shct_pane

0xa0ae,	// (0x00017e61) aid_list_gen

0xed4a,	// (0x0001cafd) aid_scroll

0xed53,	// (0x0001cb06) aid_size_touch_scroll_bar

0xed5c,	// (0x0001cb0f) aid_list_double

0xed65,	// (0x0001cb18) aid_list_single

0xed6e,	// (0x0001cb21) aid_list_single_lg

0xed77,	// (0x0001cb2a) aid_list_z_g_a_sm

0xed7f,	// (0x0001cb32) aid_list_z_g_d

0xed87,	// (0x0001cb3a) aid_txt_z_prm

0x8a5b,	// (0x0001680e) aid_txt_z_prm_cp01

0x8a69,	// (0x0001681c) aid_txt_z_sec

0x8a77,	// (0x0001682a) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8a77,	// (0x0001682a) main_cntbar_detail_cont_pane_g1

0x8a8b,	// (0x0001683e) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8a8b,	// (0x0001683e) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe8e,	// (0x0001dc41) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe8e,	// (0x0001dc41) main_cntbar_detail_cont_pane_g

0xed95,	// (0x0001cb48) main_cntbar_detail_cont_pane_t1

0xeda3,	// (0x0001cb56) main_cntbar_detail_cont_pane_t2

0xedb1,	// (0x0001cb64) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe93,	// (0x0001dc46) main_cntbar_detail_cont_pane_t

0x8a9b,	// (0x0001684e) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8a9b,	// (0x0001684e) cell_cntbar_detail_list_shct_pane

0xedbf,	// (0x0001cb72) cntbar_detail_list_shct_pane_g1

0xedc8,	// (0x0001cb7b) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe9a,	// (0x0001dc4d) cntbar_detail_list_shct_pane_g

0x8aaf,	// (0x00016862) cntbar_detail_list_event_pane_g1_ParamLimits

0x8aaf,	// (0x00016862) cntbar_detail_list_event_pane_g1

0x8abb,	// (0x0001686e) cntbar_detail_list_event_pane_g2_ParamLimits

0x8abb,	// (0x0001686e) cntbar_detail_list_event_pane_g2

0x0005,

0xfe9f,	// (0x0001dc52) cntbar_detail_list_event_pane_g_ParamLimits

0xfe9f,	// (0x0001dc52) cntbar_detail_list_event_pane_g

0x8b27,	// (0x000168da) cntbar_detail_list_event_pane_t1_ParamLimits

0x8b27,	// (0x000168da) cntbar_detail_list_event_pane_t1

0x8b3c,	// (0x000168ef) cntbar_detail_list_event_pane_t2_ParamLimits

0x8b3c,	// (0x000168ef) cntbar_detail_list_event_pane_t2

0x0002,

0xfeac,	// (0x0001dc5f) cntbar_detail_list_event_pane_t_ParamLimits

0xfeac,	// (0x0001dc5f) cntbar_detail_list_event_pane_t

0xc1b9,	// (0x00019f6c) cell_cntbar_detail_list_shct_pane_g1

0x2bea,	// (0x0001099d) navi_pane_mv_g3

0x92ee,	// (0x000170a1) main_cntbar_detail_pane_ParamLimits

0x927e,	// (0x00017031) main_notif_wgt_pane

0xcad9,	// (0x0001a88c) aid_tch_main_mp4_pane_g4

0xccdb,	// (0x0001aa8e) popup_slider_window_cp02

0xea89,	// (0x0001c83c) list_recal_day_event_pane

0x89bf,	// (0x00016772) cntbar_detail_btn_pane_ParamLimits

0x89bf,	// (0x00016772) cntbar_detail_btn_pane

0x89d5,	// (0x00016788) cntbar_detail_btn_pane_cp01_ParamLimits

0x89d5,	// (0x00016788) cntbar_detail_btn_pane_cp01

0x89fb,	// (0x000167ae) cntbar_detail_list_shct_pane_ParamLimits

0x8a0b,	// (0x000167be) cntbar_detail_pane_g1_ParamLimits

0x8a0b,	// (0x000167be) cntbar_detail_pane_g1

0x8a1b,	// (0x000167ce) cntbar_detail_pane_t1_ParamLimits

0x8a1b,	// (0x000167ce) cntbar_detail_pane_t1

0x8ac7,	// (0x0001687a) cntbar_detail_list_event_pane_g3_ParamLimits

0x8ac7,	// (0x0001687a) cntbar_detail_list_event_pane_g3

0x8adf,	// (0x00016892) cntbar_detail_list_event_pane_g4_ParamLimits

0x8adf,	// (0x00016892) cntbar_detail_list_event_pane_g4

0x8af7,	// (0x000168aa) cntbar_detail_list_event_pane_g5_ParamLimits

0x8af7,	// (0x000168aa) cntbar_detail_list_event_pane_g5

0x8b0f,	// (0x000168c2) cntbar_detail_list_event_pane_g6_ParamLimits

0x8b0f,	// (0x000168c2) cntbar_detail_list_event_pane_g6

0x8b51,	// (0x00016904) cntbar_detail_list_event_pane_t3_ParamLimits

0x8b51,	// (0x00016904) cntbar_detail_list_event_pane_t3

0x8b63,	// (0x00016916) popup_notif_wgt_window_ParamLimits

0x8b63,	// (0x00016916) popup_notif_wgt_window

0x8b7c,	// (0x0001692f) popup_submenu_window_cp01_ParamLimits

0x8b7c,	// (0x0001692f) popup_submenu_window_cp01

0xa812,	// (0x000185c5) bg_popup_window_pane_cp10

0xedd1,	// (0x0001cb84) listscroll_notif_wgt_pane

0xeddb,	// (0x0001cb8e) list_notif_wgt_window

0xede4,	// (0x0001cb97) scroll_pane_cp033

0xeded,	// (0x0001cba0) list_notif_wgt_row_pane_ParamLimits

0xeded,	// (0x0001cba0) list_notif_wgt_row_pane

0xee01,	// (0x0001cbb4) aid_size_list_notif_wgt_del

0xee0a,	// (0x0001cbbd) list_notif_wgt_row_pane_g1

0xee12,	// (0x0001cbc5) list_notif_wgt_row_pane_g2

0xee1a,	// (0x0001cbcd) list_notif_wgt_row_pane_g3

0x0002,

0xfeb3,	// (0x0001dc66) list_notif_wgt_row_pane_g

0xee23,	// (0x0001cbd6) list_notif_wgt_row_pane_t1

0xee31,	// (0x0001cbe4) list_notif_wgt_row_pane_t2

0xee3f,	// (0x0001cbf2) list_notif_wgt_row_pane_t3

0x0002,

0xfeba,	// (0x0001dc6d) list_notif_wgt_row_pane_t

0xd257,	// (0x0001b00a) list_recal_day_event_pane_g1

0xee4d,	// (0x0001cc00) list_recal_day_event_pane_t1

0x927e,	// (0x00017031) bg_button_pane_cp045

0xee5c,	// (0x0001cc0f) cntbar_detail_btn_pane_t1

0xbcb1,	// (0x00019a64) main_callh_pane_ParamLimits

0xbcb1,	// (0x00019a64) main_callh_pane

0x927e,	// (0x00017031) main_coverflow0_pane

0x927e,	// (0x00017031) main_wgtman_pane

0x7c91,	// (0x00015a44) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x7c91,	// (0x00015a44) main_fs_bigclock_unlock_btn_pane

0xe62b,	// (0x0001c3de) bg_button_pane_cp16

0xe63b,	// (0x0001c3ee) cell_tport_appsw_pane_g3

0x8b8e,	// (0x00016941) cf0_flow_pane_ParamLimits

0x8b8e,	// (0x00016941) cf0_flow_pane

0xee6a,	// (0x0001cc1d) listscroll_cf0_pane

0xee73,	// (0x0001cc26) main_cf0_pane_g1

0x8ba3,	// (0x00016956) main_cf0_pane_t1_ParamLimits

0x8ba3,	// (0x00016956) main_cf0_pane_t1

0x8bba,	// (0x0001696d) main_cf0_pane_t2_ParamLimits

0x8bba,	// (0x0001696d) main_cf0_pane_t2

0x0001,

0xfec1,	// (0x0001dc74) main_cf0_pane_t_ParamLimits

0xfec1,	// (0x0001dc74) main_cf0_pane_t

0xee7d,	// (0x0001cc30) scroll_pane_cp11

0x8bd1,	// (0x00016984) cf0_flow_pane_g1

0x8bd9,	// (0x0001698c) cf0_flow_pane_g2

0x0001,

0xfec6,	// (0x0001dc79) cf0_flow_pane_g

0x8be1,	// (0x00016994) cf0_flow_pane_t1

0x927e,	// (0x00017031) main_call6_pane

0x927e,	// (0x00017031) main_calllock_pane

0x8bef,	// (0x000169a2) call6_btn_grp_pane_ParamLimits

0x8bef,	// (0x000169a2) call6_btn_grp_pane

0x8c09,	// (0x000169bc) call6_pane_g1_ParamLimits

0x8c09,	// (0x000169bc) call6_pane_g1

0x8c1e,	// (0x000169d1) popup_call6_1st_window_ParamLimits

0x8c1e,	// (0x000169d1) popup_call6_1st_window

0x8c2f,	// (0x000169e2) popup_call6_2nd_window_ParamLimits

0x8c2f,	// (0x000169e2) popup_call6_2nd_window

0x8c40,	// (0x000169f3) cell_call6_btn_pane_ParamLimits

0x8c40,	// (0x000169f3) cell_call6_btn_pane

0xa812,	// (0x000185c5) bg_popup_call2_in_pane_cp03

0xee88,	// (0x0001cc3b) popup_call6_1st_window_g1

0xee90,	// (0x0001cc43) popup_call6_1st_window_g2

0xee98,	// (0x0001cc4b) popup_call6_1st_window_g3

0x0002,

0xfecb,	// (0x0001dc7e) popup_call6_1st_window_g

0xeea0,	// (0x0001cc53) popup_call6_1st_window_t1

0xeeaf,	// (0x0001cc62) popup_call6_1st_window_t2

0xeebf,	// (0x0001cc72) popup_call6_1st_window_t3

0x0002,

0xfed2,	// (0x0001dc85) popup_call6_1st_window_t

0xa812,	// (0x000185c5) bg_popup_call2_in_pane_cp04

0xee88,	// (0x0001cc3b) popup_call6_2nd_window_g1

0xee90,	// (0x0001cc43) popup_call6_2nd_window_g2

0xee98,	// (0x0001cc4b) popup_call6_2nd_window_g3

0x0002,

0xfecb,	// (0x0001dc7e) popup_call6_2nd_window_g

0xeea0,	// (0x0001cc53) popup_call6_2nd_window_t1

0x927e,	// (0x00017031) bg_button_pane_cp15

0xeecf,	// (0x0001cc82) cell_call6_btn_pane_g1

0xeed8,	// (0x0001cc8b) cell_call6_btn_pane_t1

0x8c54,	// (0x00016a07) listscroll_wgtman_pane_ParamLimits

0x8c54,	// (0x00016a07) listscroll_wgtman_pane

0x8c77,	// (0x00016a2a) wgtman_btn_pane_ParamLimits

0x8c77,	// (0x00016a2a) wgtman_btn_pane

0xa6c5,	// (0x00018478) aid_scroll_copy1

0xeee7,	// (0x0001cc9a) list_wgtman_pane

0x8cba,	// (0x00016a6d) wgtman_btn_pane_g1_ParamLimits

0x8cba,	// (0x00016a6d) wgtman_btn_pane_g1

0x8ce6,	// (0x00016a99) wgtman_btn_pane_t1_ParamLimits

0x8ce6,	// (0x00016a99) wgtman_btn_pane_t1

0xeef1,	// (0x0001cca4) wgtman_btn_pane_t2_ParamLimits

0xeef1,	// (0x0001cca4) wgtman_btn_pane_t2

0x0001,

0xfed9,	// (0x0001dc8c) wgtman_btn_pane_t_ParamLimits

0xfed9,	// (0x0001dc8c) wgtman_btn_pane_t

0x8d23,	// (0x00016ad6) listrow_wgtman_pane_ParamLimits

0x8d23,	// (0x00016ad6) listrow_wgtman_pane

0x8d36,	// (0x00016ae9) listrow_wgtman_pane_g1

0x8d3f,	// (0x00016af2) listrow_wgtman_pane_g2

0x0001,

0xfede,	// (0x0001dc91) listrow_wgtman_pane_g

0x8d49,	// (0x00016afc) listrow_wgtman_pane_t1

0x8d57,	// (0x00016b0a) listrow_wgtman_pane_t2

0x0001,

0xfee3,	// (0x0001dc96) listrow_wgtman_pane_t

0x8d65,	// (0x00016b18) wait_bar_pane_cp09

0xef08,	// (0x0001ccbb) main_calllock_btn_pane

0xef12,	// (0x0001ccc5) main_calllock_pane_g1

0x927e,	// (0x00017031) bg_button_pane_cp17

0xef1d,	// (0x0001ccd0) main_calllock_btn_pane_g1

0xef26,	// (0x0001ccd9) main_calllock_btn_pane_t1

0x927e,	// (0x00017031) main_dialer3_pane

0x927e,	// (0x00017031) main_fmrd2_pane

0xc1b9,	// (0x00019f6c) main_fs_bigclock_unlock_btn_pane_g1

0xef3d,	// (0x0001ccf0) main_fs_bigclock_unlock_btn_pane_t1

0x8d6d,	// (0x00016b20) area_fmrd2_info_pane_ParamLimits

0x8d6d,	// (0x00016b20) area_fmrd2_info_pane

0x8d7e,	// (0x00016b31) area_fmrd2_visual_pane_ParamLimits

0x8d7e,	// (0x00016b31) area_fmrd2_visual_pane

0x8d8c,	// (0x00016b3f) fmrd2_indi_pane_ParamLimits

0x8d8c,	// (0x00016b3f) fmrd2_indi_pane

0x8d99,	// (0x00016b4c) area_fmrd2_visual_pane_g1

0x8da1,	// (0x00016b54) area_fmrd2_visual_pane_t1

0x8db1,	// (0x00016b64) area_fmrd2_visual_pane_t2

0x8dc1,	// (0x00016b74) area_fmrd2_visual_pane_t3

0x0002,

0xfeed,	// (0x0001dca0) area_fmrd2_visual_pane_t

0x8dd1,	// (0x00016b84) area_fmrd2_info_pane_g1

0x8dd9,	// (0x00016b8c) area_fmrd2_info_pane_t1

0x8de9,	// (0x00016b9c) area_fmrd2_info_pane_t2

0x8df9,	// (0x00016bac) area_fmrd2_info_pane_t3

0x8e09,	// (0x00016bbc) area_fmrd2_info_pane_t4

0x0003,

0xfef4,	// (0x0001dca7) area_fmrd2_info_pane_t

0x8e17,	// (0x00016bca) fmrd2_indi_pane_t1

0x8e27,	// (0x00016bda) fmrd2_indi_pane_t2

0x8e37,	// (0x00016bea) fmrd2_indi_pane_t3

0x0002,

0xfefd,	// (0x0001dcb0) fmrd2_indi_pane_t

0xe039,	// (0x0001bdec) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe039,	// (0x0001bdec) list_single_fs_bigclock_indicator_pane_g5

0xe0e0,	// (0x0001be93) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe0e0,	// (0x0001be93) list_single_fs_bigclock_indicator_pane_t5

0x85c0,	// (0x00016373) aid_cell_bcale_month_pane_ParamLimits

0x85c0,	// (0x00016373) aid_cell_bcale_month_pane

0x85d2,	// (0x00016385) bcale_month_pane_ParamLimits

0x85d2,	// (0x00016385) bcale_month_pane

0x85ec,	// (0x0001639f) bcale_preview_pane_ParamLimits

0x85ec,	// (0x0001639f) bcale_preview_pane

0xeca6,	// (0x0001ca59) list_single_fs_bigclock_pane_t1_ParamLimits

0xecc5,	// (0x0001ca78) list_single_fs_bigclock_pane_t2_ParamLimits

0xecc5,	// (0x0001ca78) list_single_fs_bigclock_pane_t2

0x0001,

0xfe84,	// (0x0001dc37) list_single_fs_bigclock_pane_t_ParamLimits

0xfe84,	// (0x0001dc37) list_single_fs_bigclock_pane_t

0xef35,	// (0x0001cce8) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee8,	// (0x0001dc9b) main_fs_bigclock_unlock_btn_pane_g

0x8e47,	// (0x00016bfa) aid_dia3_key_size_ParamLimits

0x8e47,	// (0x00016bfa) aid_dia3_key_size

0x8e56,	// (0x00016c09) aid_dia3_listrow_size_ParamLimits

0x8e56,	// (0x00016c09) aid_dia3_listrow_size

0x8e6b,	// (0x00016c1e) dia3_keypad_fun_pane_ParamLimits

0x8e6b,	// (0x00016c1e) dia3_keypad_fun_pane

0x8e87,	// (0x00016c3a) dia3_keypad_num_pane_ParamLimits

0x8e87,	// (0x00016c3a) dia3_keypad_num_pane

0x8ea2,	// (0x00016c55) dia3_listscroll_pane_ParamLimits

0x8ea2,	// (0x00016c55) dia3_listscroll_pane

0x8eb5,	// (0x00016c68) dia3_numentry_pane_ParamLimits

0x8eb5,	// (0x00016c68) dia3_numentry_pane

0xef4b,	// (0x0001ccfe) dia3_list_pane

0xef56,	// (0x0001cd09) scroll_pane_cp12

0x927e,	// (0x00017031) bg_dia3_numentry_pane

0x8ec9,	// (0x00016c7c) dia3_numentry_pane_t1

0x8ed8,	// (0x00016c8b) cell_dia3_key_num_pane

0x8ee0,	// (0x00016c93) cell_dia3_key0_fun_pane_ParamLimits

0x8ee0,	// (0x00016c93) cell_dia3_key0_fun_pane

0x8ef4,	// (0x00016ca7) cell_dia3_key1_fun_pane_ParamLimits

0x8ef4,	// (0x00016ca7) cell_dia3_key1_fun_pane

0x8f0c,	// (0x00016cbf) dia3_listrow_pane

0xdd2c,	// (0x0001badf) bg_dia3_numentry_pane_g1

0x927e,	// (0x00017031) bg_button_pane_cp21

0xef61,	// (0x0001cd14) cell_dia3_key_num_pane_t1

0xef6f,	// (0x0001cd22) cell_dia3_key_num_pane_t2

0xef7e,	// (0x0001cd31) cell_dia3_key_num_pane_t3

0xef8d,	// (0x0001cd40) cell_dia3_key_num_pane_t4

0x0003,

0xff04,	// (0x0001dcb7) cell_dia3_key_num_pane_t

0x927e,	// (0x00017031) bg_button_pane_cp19

0x8f1e,	// (0x00016cd1) cell_dia3_key0_fun_pane_g1

0x927e,	// (0x00017031) bg_button_pane_cp20

0x8f26,	// (0x00016cd9) cell_dia3_key1_fun_pane_g1

0x8f2e,	// (0x00016ce1) area_left_week_number_pane

0x8f37,	// (0x00016cea) area_top_day_name_pane

0x8f40,	// (0x00016cf3) frame_month_view_pane

0x8f48,	// (0x00016cfb) grid_month_view_pane

0x8f52,	// (0x00016d05) cell_top_day_name_pane_ParamLimits

0x8f52,	// (0x00016d05) cell_top_day_name_pane

0x87e2,	// (0x00016595) cell_area_left_week_number_pane_ParamLimits

0x87e2,	// (0x00016595) cell_area_left_week_number_pane

0x8f68,	// (0x00016d1b) cell_month_view_pane_ParamLimits

0x8f68,	// (0x00016d1b) cell_month_view_pane

0xef9c,	// (0x0001cd4f) frm_month_g1

0x8f83,	// (0x00016d36) frm_month_g2

0x8f8b,	// (0x00016d3e) frm_month_g3

0x8f93,	// (0x00016d46) frm_month_g4

0x8f9b,	// (0x00016d4e) frm_month_g5

0x8fa3,	// (0x00016d56) frm_month_g6

0x8fab,	// (0x00016d5e) frm_month_g7

0xefa5,	// (0x0001cd58) frm_month_g8

0x8fb3,	// (0x00016d66) frm_month_g9

0x8fbc,	// (0x00016d6f) frm_month_g10

0x8fc5,	// (0x00016d78) frm_month_g11

0x8fce,	// (0x00016d81) frm_month_g12

0x8fd7,	// (0x00016d8a) frm_month_g13

0x8fe0,	// (0x00016d93) frm_month_g14

0x8fe9,	// (0x00016d9c) frm_month_g15

0x8ff2,	// (0x00016da5) frm_month_g16

0x000f,

0xff0d,	// (0x0001dcc0) frm_month_g

0x8ffb,	// (0x00016dae) cell_top_day_name_pane_t1

0x900a,	// (0x00016dbd) cell_area_left_week_number_pane_g1

0x8ffb,	// (0x00016dae) cell_area_left_week_number_pane_t1

0xc1b9,	// (0x00019f6c) cell_month_view_pane_g1

0x9012,	// (0x00016dc5) cell_month_view_pane_t1

0x927e,	// (0x00017031) main_fps_pane

0xe3a7,	// (0x0001c15a) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe3a7,	// (0x0001c15a) cmail_ddmenu_btn02_pane_cp1

0xe3c3,	// (0x0001c176) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe3c3,	// (0x0001c176) cmail_ddmenu_btn02_pane_cp2

0x88a0,	// (0x00016653) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x88a0,	// (0x00016653) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe37,	// (0x0001dbea) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe37,	// (0x0001dbea) cmail_ddmenu_btn02_pane_g

0x88c1,	// (0x00016674) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x88c1,	// (0x00016674) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe3c,	// (0x0001dbef) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe3c,	// (0x0001dbef) cmail_ddmenu_btn02_pane_t

0x9021,	// (0x00016dd4) fps_text_pane_ParamLimits

0x9021,	// (0x00016dd4) fps_text_pane

0x9038,	// (0x00016deb) main_fps_pane_g1_ParamLimits

0x9038,	// (0x00016deb) main_fps_pane_g1

0x9052,	// (0x00016e05) wait_bar_pane_cp010_ParamLimits

0x9052,	// (0x00016e05) wait_bar_pane_cp010

0x9063,	// (0x00016e16) fps_text_pane_t1_ParamLimits

0x9063,	// (0x00016e16) fps_text_pane_t1

0xed0e,	// (0x0001cac1) cam4_image_uncrop_pane_g1

0xed17,	// (0x0001caca) cam4_image_uncrop_pane_g2

0x5ec1,	// (0x00013c74) cam4_image_uncrop_pane_g3

0x5eca,	// (0x00013c7d) cam4_image_uncrop_pane_g4

0x0003,

0xf908,	// (0x0001d6bb) cam4_image_uncrop_pane_g

0x8f0c,	// (0x00016cbf) dia3_listrow_pane_ParamLimits

0x927e,	// (0x00017031) main_phob2_pane

0x83e2,	// (0x00016195) cell_tport_appsw_pane_cp02_ParamLimits

0x83e2,	// (0x00016195) cell_tport_appsw_pane_cp02

0x83f6,	// (0x000161a9) cell_tport_appsw_pane_cp03_ParamLimits

0x83f6,	// (0x000161a9) cell_tport_appsw_pane_cp03

0x927e,	// (0x00017031) phob2_contact_card_pane

0x927e,	// (0x00017031) phob2_listscroll_pane

0xefae,	// (0x0001cd61) phob2_list_pane

0xefb6,	// (0x0001cd69) scroll_pane_cp034

0x907b,	// (0x00016e2e) phob2_cc_data_pane_ParamLimits

0x907b,	// (0x00016e2e) phob2_cc_data_pane

0x909a,	// (0x00016e4d) phob2_cc_listscroll_pane_ParamLimits

0x909a,	// (0x00016e4d) phob2_cc_listscroll_pane

0xcfc6,	// (0x0001ad79) list_double_large_graphic_phob2_pane_ParamLimits

0xcfc6,	// (0x0001ad79) list_double_large_graphic_phob2_pane

0x90b8,	// (0x00016e6b) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x90b8,	// (0x00016e6b) list_double_large_graphic_phob2_pane_g1

0x90c5,	// (0x00016e78) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x90c5,	// (0x00016e78) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff2e,	// (0x0001dce1) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff2e,	// (0x0001dce1) list_double_large_graphic_phob2_pane_g

0x90d1,	// (0x00016e84) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x90d1,	// (0x00016e84) list_double_large_graphic_phob2_pane_t1

0x90e6,	// (0x00016e99) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x90e6,	// (0x00016e99) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff33,	// (0x0001dce6) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff33,	// (0x0001dce6) list_double_large_graphic_phob2_pane_t

0x927e,	// (0x00017031) list_highlight_pane_cp024

0xefbe,	// (0x0001cd71) phob2_cc_button_pane

0x90f8,	// (0x00016eab) phob2_cc_data_pane_g1_ParamLimits

0x90f8,	// (0x00016eab) phob2_cc_data_pane_g1

0x910d,	// (0x00016ec0) phob2_cc_data_pane_g2_ParamLimits

0x910d,	// (0x00016ec0) phob2_cc_data_pane_g2

0x0001,

0xff38,	// (0x0001dceb) phob2_cc_data_pane_g_ParamLimits

0xff38,	// (0x0001dceb) phob2_cc_data_pane_g

0x911f,	// (0x00016ed2) phob2_cc_data_pane_t1_ParamLimits

0x911f,	// (0x00016ed2) phob2_cc_data_pane_t1

0x9137,	// (0x00016eea) phob2_cc_data_pane_t2_ParamLimits

0x9137,	// (0x00016eea) phob2_cc_data_pane_t2

0x914f,	// (0x00016f02) phob2_cc_data_pane_t3_ParamLimits

0x914f,	// (0x00016f02) phob2_cc_data_pane_t3

0x0002,

0xff3d,	// (0x0001dcf0) phob2_cc_data_pane_t_ParamLimits

0xff3d,	// (0x0001dcf0) phob2_cc_data_pane_t

0xefc6,	// (0x0001cd79) phob2_cc_list_pane_ParamLimits

0xefc6,	// (0x0001cd79) phob2_cc_list_pane

0xd302,	// (0x0001b0b5) scroll_pane_cp035_ParamLimits

0xd302,	// (0x0001b0b5) scroll_pane_cp035

0x92ee,	// (0x000170a1) bg_button_pane_cp033

0xefd2,	// (0x0001cd85) phob2_cc_button_pane_g1

0xefde,	// (0x0001cd91) phob2_cc_button_pane_t1

0xeff3,	// (0x0001cda6) phob2_cc_button_pane_t2

0x0001,

0xff44,	// (0x0001dcf7) phob2_cc_button_pane_t

0x9169,	// (0x00016f1c) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9169,	// (0x00016f1c) list_double_large_graphic_phob2_cc_pane

0x917d,	// (0x00016f30) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x917d,	// (0x00016f30) list_double_large_graphic_phob2_cc_pane_g1

0x9189,	// (0x00016f3c) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9189,	// (0x00016f3c) list_double_large_graphic_phob2_cc_pane_g2

0x9195,	// (0x00016f48) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9195,	// (0x00016f48) list_double_large_graphic_phob2_cc_pane_g3

0x91a1,	// (0x00016f54) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x91a1,	// (0x00016f54) list_double_large_graphic_phob2_cc_pane_g4

0x91ad,	// (0x00016f60) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x91ad,	// (0x00016f60) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff49,	// (0x0001dcfc) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff49,	// (0x0001dcfc) list_double_large_graphic_phob2_cc_pane_g

0x91b9,	// (0x00016f6c) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x91b9,	// (0x00016f6c) list_double_large_graphic_phob2_cc_pane_t1

0x91e2,	// (0x00016f95) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x91e2,	// (0x00016f95) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff54,	// (0x0001dd07) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff54,	// (0x0001dd07) list_double_large_graphic_phob2_cc_pane_t

0xf005,	// (0x0001cdb8) list_highlight_pane_cp025_ParamLimits

0xf005,	// (0x0001cdb8) list_highlight_pane_cp025

0x92ee,	// (0x000170a1) bg_button_pane_cp033_ParamLimits

0xefd2,	// (0x0001cd85) phob2_cc_button_pane_g1_ParamLimits

0xefde,	// (0x0001cd91) phob2_cc_button_pane_t1_ParamLimits

0xeff3,	// (0x0001cda6) phob2_cc_button_pane_t2_ParamLimits

0xff44,	// (0x0001dcf7) phob2_cc_button_pane_t_ParamLimits

0x0dbe,	// (0x0000eb71) popup_wgtman_window

0xd0a8,	// (0x0001ae5b) scroll_pane_cp038

0x8c9c,	// (0x00016a4f) wgtman_btn_pane_cp_01_ParamLimits

0x8c9c,	// (0x00016a4f) wgtman_btn_pane_cp_01

0xf013,	// (0x0001cdc6) wgtman_content_pane

0xed5c,	// (0x0001cb0f) wgtman_heading_pane

0x927e,	// (0x00017031) bg_heading_pane_cp02

0xf01c,	// (0x0001cdcf) wgtman_heading_pane_g1

0xf024,	// (0x0001cdd7) wgtman_heading_pane_t1

0xf032,	// (0x0001cde5) scroll_pane_cp036

0xf03a,	// (0x0001cded) wgtman_list_pane

0xf042,	// (0x0001cdf5) wgtman_list_pane_t1_ParamLimits

0xf042,	// (0x0001cdf5) wgtman_list_pane_t1

0xce7a,	// (0x0001ac2d) cam4_grid_pane

0x6c7d,	// (0x00014a30) bg_button_pane_cp015_ParamLimits

0x6c91,	// (0x00014a44) bg_button_pane_cp016_ParamLimits

0x6ca4,	// (0x00014a57) bg_button_pane_cp017_ParamLimits

0x6cfc,	// (0x00014aaf) popup_vitu2_query_window_g3_ParamLimits

0x6cfc,	// (0x00014aaf) popup_vitu2_query_window_g3

0x6db9,	// (0x00014b6c) popup_vitu2_query_window_t6_ParamLimits

0x6db9,	// (0x00014b6c) popup_vitu2_query_window_t6

0x6de4,	// (0x00014b97) popup_vitu2_query_window_t7_ParamLimits

0x6de4,	// (0x00014b97) popup_vitu2_query_window_t7

0xed0e,	// (0x0001cac1) cam4_grid_pane_g1

0xed17,	// (0x0001caca) cam4_grid_pane_g2

0xf064,	// (0x0001ce17) cam4_grid_pane_g3

0xf06d,	// (0x0001ce20) cam4_grid_pane_g4

0x0003,

0xff59,	// (0x0001dd0c) cam4_grid_pane_g

0x1a06,	// (0x0000f7b9) aid_placing_vt_slider_lsc_ParamLimits

0x1d03,	// (0x0000fab6) vidtel_button_pane_ParamLimits

0x1d03,	// (0x0000fab6) vidtel_button_pane

0xf078,	// (0x0001ce2b) bg_button_pane_cp034

0x920b,	// (0x00016fbe) vidtel_button_pane_g1

0xf082,	// (0x0001ce35) vidtel_button_pane_t1

0xd1e5,	// (0x0001af98) aid_size_vtel_slider_touch

0xd302,	// (0x0001b0b5) scroll_pane_cp039

0xdd6a,	// (0x0001bb1d) ncim_query_button_pane_cp01_ParamLimits

0xdd89,	// (0x0001bb3c) ncimui_query_pane_g1_ParamLimits

0x92ee,	// (0x000170a1) input_focus_pane_cp012_ParamLimits

0xddae,	// (0x0001bb61) ncim_query_entry_pane_t1_ParamLimits

0xd302,	// (0x0001b0b5) scroll_pane_cp039_ParamLimits

0x2b5e,	// (0x00010911) navi_pane_bcale_mc_g1

0x2b66,	// (0x00010919) navi_pane_bcale_mc_t1

0xe400,	// (0x0001c1b3) main_sp_fs_email_pane_g1

0xe408,	// (0x0001c1bb) main_sp_fs_email_pane_g2

0x0001,

0xfcfa,	// (0x0001daad) main_sp_fs_email_pane_g

0xe940,	// (0x0001c6f3) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe940,	// (0x0001c6f3) list_single_cale_mrui_row_pane_g3

0x88e9,	// (0x0001669c) list_single_recal_day_pane_g5_event_pane

0xeb05,	// (0x0001c8b8) list_single_recal_day_pane_g7

0xf090,	// (0x0001ce43) list_recal_day_event_pane_cp01

0xf099,	// (0x0001ce4c) list_recal_vselct_arw_lo_pane_cp01

0xf0a1,	// (0x0001ce54) list_recal_vselct_arw_up_pane_cp01

0xf0a9,	// (0x0001ce5c) list_recal_vselct_pane_cp01

0xd257,	// (0x0001b00a) list_recal_day_event_pane_cp01_g1

0xf0b3,	// (0x0001ce66) list_recal_day_event_pane_cp01_t1

0xeb0d,	// (0x0001c8c0) list_single_recal_day_pane_t1_ParamLimits

0xeb1f,	// (0x0001c8d2) list_single_recal_day_pane_t2_ParamLimits

0xfe4c,	// (0x0001dbff) list_single_recal_day_pane_t_ParamLimits

0x9a57,	// (0x0001780a) bg_notes_pane_ParamLimits

0x9a65,	// (0x00017818) list_notes_pane_ParamLimits

0x10d0,	// (0x0000ee83) scroll_pane_cp06_ParamLimits

0x9aa1,	// (0x00017854) main_notes_pane_ParamLimits

0x927e,	// (0x00017031) main_welc_pane

0x9213,	// (0x00016fc6) main_welc_body_pane_ParamLimits

0x9213,	// (0x00016fc6) main_welc_body_pane

0x9227,	// (0x00016fda) main_welc_opti_pane_ParamLimits

0x9227,	// (0x00016fda) main_welc_opti_pane

0x923e,	// (0x00016ff1) main_welc_pane_t1_ParamLimits

0x923e,	// (0x00016ff1) main_welc_pane_t1

0x9257,	// (0x0001700a) main_welc_body_row_pane_ParamLimits

0x9257,	// (0x0001700a) main_welc_body_row_pane

0x926e,	// (0x00017021) main_welc_opti_row_pane_ParamLimits

0x926e,	// (0x00017021) main_welc_opti_row_pane

0xf0c1,	// (0x0001ce74) main_welc_opti_row_pane_g1

0xf0c9,	// (0x0001ce7c) main_welc_opti_row_pane_t1

0xf0d8,	// (0x0001ce8b) main_welc_body_row_pane_t1
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
	};

} // end of namespace AknLayoutScalable_Elaf_pnl4_apps_nhd4_lsc_tch_Normal

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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x00017017 };

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
0x8117,	// (0x0001f12e) Screen

0x8123,	// (0x0001f13a) application_window

0x8163,	// (0x0001f17a) area_bottom_pane_ParamLimits

0x8163,	// (0x0001f17a) area_bottom_pane

0x8198,	// (0x0001f1af) area_top_pane_ParamLimits

0x8198,	// (0x0001f1af) area_top_pane

0x006c,	// (0x00017083) call_video_uplink_pane_ParamLimits

0x006c,	// (0x00017083) call_video_uplink_pane

0x8225,	// (0x0001f23c) main_pane_ParamLimits

0x8225,	// (0x0001f23c) main_pane

0x2a9a,	// (0x00019ab1) context_pane

0xafcf,	// (0x00021fe6) navi_pane

0xafef,	// (0x00022006) popup_cale_events_window_ParamLimits

0xafef,	// (0x00022006) popup_cale_events_window

0x2aad,	// (0x00019ac4) popup_mup_playback_window

0xb007,	// (0x0002201e) signal_pane

0x083d,	// (0x00017854) main_browser_pane

0x15ae,	// (0x000185c5) main_burst_pane

0xaea5,	// (0x00021ebc) main_calc_pane

0x15ae,	// (0x000185c5) main_cale_day_pane

0x083d,	// (0x00017854) main_cale_month_pane

0x15ae,	// (0x000185c5) main_cale_week_pane

0x15ae,	// (0x000185c5) main_call_pane

0x04a9,	// (0x000174c0) main_call_poc_pane

0x15ae,	// (0x000185c5) main_camera_pane

0x15ae,	// (0x000185c5) main_chi_dic_pane

0x143d,	// (0x00018454) main_clock_pane

0x04a9,	// (0x000174c0) main_fmradio_pane

0x15ae,	// (0x000185c5) main_graph_messa_pane

0x04a9,	// (0x000174c0) main_help_pane

0x083d,	// (0x00017854) main_im_pane

0x0704,	// (0x0001771b) main_image_pane_ParamLimits

0x0704,	// (0x0001771b) main_image_pane

0x04a9,	// (0x000174c0) main_location2_pane

0x15ae,	// (0x000185c5) main_location_pane

0x04a9,	// (0x000174c0) main_messa_pane

0x04a9,	// (0x000174c0) main_mp2_pane

0x15ae,	// (0x000185c5) main_mp_pane

0x04a9,	// (0x000174c0) main_msg_pane

0x04a9,	// (0x000174c0) main_mup_eq_pane

0x04a9,	// (0x000174c0) main_mup_pane

0x083d,	// (0x00017854) main_notes_pane

0x04a9,	// (0x000174c0) main_pec_pane

0x04a9,	// (0x000174c0) main_phob_pane

0x04a9,	// (0x000174c0) main_pinb_pane

0x04a9,	// (0x000174c0) main_postcard_pane

0x04a9,	// (0x000174c0) main_qdial_pane

0x15ae,	// (0x000185c5) main_skin_pane

0x04a9,	// (0x000174c0) main_smil2_pane

0x15ae,	// (0x000185c5) main_smil_pane

0x15ae,	// (0x000185c5) main_video_pane

0x15ae,	// (0x000185c5) main_video_tele_pane

0x0704,	// (0x0001771b) main_viewer_pane_ParamLimits

0x0704,	// (0x0001771b) main_viewer_pane

0x15ae,	// (0x000185c5) main_vorec_pane

0xaedb,	// (0x00021ef2) popup_blid_sat_info_window_ParamLimits

0xaedb,	// (0x00021ef2) popup_blid_sat_info_window

0xaef1,	// (0x00021f08) popup_dyc_status_message_window_ParamLimits

0xaef1,	// (0x00021f08) popup_dyc_status_message_window

0xaeff,	// (0x00021f16) popup_grid_large_graphic_window_ParamLimits

0xaeff,	// (0x00021f16) popup_grid_large_graphic_window

0xaf73,	// (0x00021f8a) popup_loc_request_window_ParamLimits

0xaf73,	// (0x00021f8a) popup_loc_request_window

0xafa7,	// (0x00021fbe) popup_wml_address_window_ParamLimits

0xafa7,	// (0x00021fbe) popup_wml_address_window

0xad7d,	// (0x00021d94) call_muted_g1

0xaa3c,	// (0x00021a53) popup_call_audio_conf_window_ParamLimits

0xaa3c,	// (0x00021a53) popup_call_audio_conf_window

0xad8d,	// (0x00021da4) popup_call_audio_first_window_ParamLimits

0xad8d,	// (0x00021da4) popup_call_audio_first_window

0xadcd,	// (0x00021de4) popup_call_audio_in_window_ParamLimits

0xadcd,	// (0x00021de4) popup_call_audio_in_window

0xadf1,	// (0x00021e08) popup_call_audio_out_window_ParamLimits

0xadf1,	// (0x00021e08) popup_call_audio_out_window

0xae13,	// (0x00021e2a) popup_call_audio_second_window_ParamLimits

0xae13,	// (0x00021e2a) popup_call_audio_second_window

0xae43,	// (0x00021e5a) popup_call_audio_wait_window_ParamLimits

0xae43,	// (0x00021e5a) popup_call_audio_wait_window

0xae64,	// (0x00021e7b) popup_number_entry_window_ParamLimits

0xae64,	// (0x00021e7b) popup_number_entry_window

0x0098,	// (0x000170af) bg_popup_call_pane_cp05_ParamLimits

0x0098,	// (0x000170af) bg_popup_call_pane_cp05

0x00b8,	// (0x000170cf) popup_number_entry_window_t1

0x00cb,	// (0x000170e2) popup_number_entry_window_t2

0x00dd,	// (0x000170f4) popup_number_entry_window_t3

0x0003,

0xf0e7,	// (0x000260fe) popup_number_entry_window_t

0x00ef,	// (0x00017106) text_title_cp2

0x0102,	// (0x00017119) bg_popup_call_pane_cp_ParamLimits

0x0102,	// (0x00017119) bg_popup_call_pane_cp

0x0110,	// (0x00017127) call_thumbnail_pane

0x0118,	// (0x0001712f) popup_call_audio_in_window_g1_ParamLimits

0x0118,	// (0x0001712f) popup_call_audio_in_window_g1

0x0124,	// (0x0001713b) popup_call_audio_in_window_g2_ParamLimits

0x0124,	// (0x0001713b) popup_call_audio_in_window_g2

0x0130,	// (0x00017147) popup_call_audio_in_window_g3_ParamLimits

0x0130,	// (0x00017147) popup_call_audio_in_window_g3

0x0002,

0xf0f0,	// (0x00026107) popup_call_audio_in_window_g_ParamLimits

0xf0f0,	// (0x00026107) popup_call_audio_in_window_g

0x013c,	// (0x00017153) popup_call_audio_in_window_t1_ParamLimits

0x013c,	// (0x00017153) popup_call_audio_in_window_t1

0x0157,	// (0x0001716e) popup_call_audio_in_window_t2_ParamLimits

0x0157,	// (0x0001716e) popup_call_audio_in_window_t2

0x0172,	// (0x00017189) popup_call_audio_in_window_t3_ParamLimits

0x0172,	// (0x00017189) popup_call_audio_in_window_t3

0x0002,

0xf0f7,	// (0x0002610e) popup_call_audio_in_window_t_ParamLimits

0xf0f7,	// (0x0002610e) popup_call_audio_in_window_t

0x0102,	// (0x00017119) bg_popup_call_pane_cp01_ParamLimits

0x0102,	// (0x00017119) bg_popup_call_pane_cp01

0x0110,	// (0x00017127) call_thumbnail_pane_cp02

0x0185,	// (0x0001719c) call_type_pane_cp022

0x018d,	// (0x000171a4) popup_call_audio_out_window_g1_ParamLimits

0x018d,	// (0x000171a4) popup_call_audio_out_window_g1

0x019f,	// (0x000171b6) popup_call_audio_out_window_g2_ParamLimits

0x019f,	// (0x000171b6) popup_call_audio_out_window_g2

0x01ab,	// (0x000171c2) popup_call_audio_out_window_g3_ParamLimits

0x01ab,	// (0x000171c2) popup_call_audio_out_window_g3

0x0002,

0xf0fe,	// (0x00026115) popup_call_audio_out_window_g_ParamLimits

0xf0fe,	// (0x00026115) popup_call_audio_out_window_g

0x01bd,	// (0x000171d4) popup_call_audio_out_window_t1_ParamLimits

0x01bd,	// (0x000171d4) popup_call_audio_out_window_t1

0x01d5,	// (0x000171ec) popup_call_audio_out_window_t2_ParamLimits

0x01d5,	// (0x000171ec) popup_call_audio_out_window_t2

0x0001,

0xf105,	// (0x0002611c) popup_call_audio_out_window_t_ParamLimits

0xf105,	// (0x0002611c) popup_call_audio_out_window_t

0x01ea,	// (0x00017201) bg_popup_call_pane_ParamLimits

0x01ea,	// (0x00017201) bg_popup_call_pane

0x8418,	// (0x0001f42f) call_thumbnail_pane_cp_ParamLimits

0x8418,	// (0x0001f42f) call_thumbnail_pane_cp

0x026e,	// (0x00017285) call_type_pane_cp01_ParamLimits

0x026e,	// (0x00017285) call_type_pane_cp01

0x02b2,	// (0x000172c9) popup_call_audio_first_window_g1_ParamLimits

0x02b2,	// (0x000172c9) popup_call_audio_first_window_g1

0x02fe,	// (0x00017315) popup_call_audio_first_window_g2_ParamLimits

0x02fe,	// (0x00017315) popup_call_audio_first_window_g2

0x0001,

0xf10a,	// (0x00026121) popup_call_audio_first_window_g_ParamLimits

0xf10a,	// (0x00026121) popup_call_audio_first_window_g

0x0342,	// (0x00017359) popup_call_audio_first_window_t1_ParamLimits

0x0342,	// (0x00017359) popup_call_audio_first_window_t1

0x03ee,	// (0x00017405) popup_call_audio_first_window_t4_ParamLimits

0x03ee,	// (0x00017405) popup_call_audio_first_window_t4

0x047a,	// (0x00017491) popup_call_audio_first_window_t5_ParamLimits

0x047a,	// (0x00017491) popup_call_audio_first_window_t5

0x0002,

0xf10f,	// (0x00026126) popup_call_audio_first_window_t_ParamLimits

0xf10f,	// (0x00026126) popup_call_audio_first_window_t

0x04a9,	// (0x000174c0) bg_popup_call_pane_cp02

0x04b3,	// (0x000174ca) call_type_pane_cp023

0x04bb,	// (0x000174d2) popup_call_audio_wait_window_g1

0x04c3,	// (0x000174da) popup_call_audio_wait_window_g2

0x0001,

0xf116,	// (0x0002612d) popup_call_audio_wait_window_g

0x04cb,	// (0x000174e2) popup_call_audio_wait_window_t3

0x04d9,	// (0x000174f0) bg_popup_call_pane_cp03_ParamLimits

0x04d9,	// (0x000174f0) bg_popup_call_pane_cp03

0x0539,	// (0x00017550) call_thumbnail_pane_cp011_ParamLimits

0x0539,	// (0x00017550) call_thumbnail_pane_cp011

0x0545,	// (0x0001755c) call_type_pane_cp034_ParamLimits

0x0545,	// (0x0001755c) call_type_pane_cp034

0x0581,	// (0x00017598) popup_call_audio_second_window_g1_ParamLimits

0x0581,	// (0x00017598) popup_call_audio_second_window_g1

0x05bd,	// (0x000175d4) popup_call_audio_second_window_g2_ParamLimits

0x05bd,	// (0x000175d4) popup_call_audio_second_window_g2

0x0001,

0xf11b,	// (0x00026132) popup_call_audio_second_window_g_ParamLimits

0xf11b,	// (0x00026132) popup_call_audio_second_window_g

0x05f9,	// (0x00017610) popup_call_audio_second_window_t1_ParamLimits

0x05f9,	// (0x00017610) popup_call_audio_second_window_t1

0x067a,	// (0x00017691) popup_call_audio_second_window_t2_ParamLimits

0x067a,	// (0x00017691) popup_call_audio_second_window_t2

0x06b0,	// (0x000176c7) popup_call_audio_second_window_t3_ParamLimits

0x06b0,	// (0x000176c7) popup_call_audio_second_window_t3

0x0002,

0xf120,	// (0x00026137) popup_call_audio_second_window_t_ParamLimits

0xf120,	// (0x00026137) popup_call_audio_second_window_t

0x04a9,	// (0x000174c0) bg_popup_call_pane_cp04

0x06e6,	// (0x000176fd) list_conf_pane

0x06ee,	// (0x00017705) popup_call_audio_conf_window_t1

0x06fc,	// (0x00017713) call_thumbnail_pane_g1

0x0704,	// (0x0001771b) bg_pinb_pane_ParamLimits

0x0704,	// (0x0001771b) bg_pinb_pane

0x0712,	// (0x00017729) find_pinb_pane

0x071b,	// (0x00017732) listscroll_pinb_pane_ParamLimits

0x071b,	// (0x00017732) listscroll_pinb_pane

0x072a,	// (0x00017741) pinb_bg_pane_g1

0x843c,	// (0x0001f453) pinb_bg_pane_g2

0x8448,	// (0x0001f45f) pinb_bg_pane_g3

0x8454,	// (0x0001f46b) pinb_bg_pane_g4

0x8460,	// (0x0001f477) pinb_bg_pane_g5

0x846c,	// (0x0001f483) pinb_bg_pane_g6

0x8477,	// (0x0001f48e) pinb_bg_pane_g7

0x8482,	// (0x0001f499) pinb_bg_pane_g8

0x848d,	// (0x0001f4a4) pinb_bg_pane_g9

0x8497,	// (0x0001f4ae) pinb_bg_pane_g10

0x0009,

0xf127,	// (0x0002613e) pinb_bg_pane_g

0x84ac,	// (0x0001f4c3) grid_pinb_pane

0x84b7,	// (0x0001f4ce) list_pinb_pane

0x84c2,	// (0x0001f4d9) scroll_pane_cp01_ParamLimits

0x84c2,	// (0x0001f4d9) scroll_pane_cp01

0x073c,	// (0x00017753) find_pinb_pane_g1_ParamLimits

0x073c,	// (0x00017753) find_pinb_pane_g1

0x0754,	// (0x0001776b) find_pinb_pane_t1

0x0766,	// (0x0001777d) find_pinb_pane_t2

0x0001,

0xf141,	// (0x00026158) find_pinb_pane_t

0x077b,	// (0x00017792) input_focus_pane_cp01_ParamLimits

0x077b,	// (0x00017792) input_focus_pane_cp01

0x84d4,	// (0x0001f4eb) cell_pinb_pane_ParamLimits

0x84d4,	// (0x0001f4eb) cell_pinb_pane

0x8508,	// (0x0001f51f) cell_pinb_pane_g1_ParamLimits

0x8508,	// (0x0001f51f) cell_pinb_pane_g1

0x851d,	// (0x0001f534) cell_pinb_pane_g2_ParamLimits

0x851d,	// (0x0001f534) cell_pinb_pane_g2

0x0787,	// (0x0001779e) cell_pinb_pane_g3_ParamLimits

0x0787,	// (0x0001779e) cell_pinb_pane_g3

0x0002,

0xf146,	// (0x0002615d) cell_pinb_pane_g_ParamLimits

0xf146,	// (0x0002615d) cell_pinb_pane_g

0x04a9,	// (0x000174c0) grid_highlight_pane_cp01

0x8529,	// (0x0001f540) list_pinb_item_pane_ParamLimits

0x8529,	// (0x0001f540) list_pinb_item_pane

0x04a9,	// (0x000174c0) list_highlight_pane_cp02

0x0793,	// (0x000177aa) list_pinb_item_pane_g1_ParamLimits

0x0793,	// (0x000177aa) list_pinb_item_pane_g1

0x07a0,	// (0x000177b7) list_pinb_item_pane_g2_ParamLimits

0x07a0,	// (0x000177b7) list_pinb_item_pane_g2

0x8556,	// (0x0001f56d) list_pinb_item_pane_g3_ParamLimits

0x8556,	// (0x0001f56d) list_pinb_item_pane_g3

0x07ac,	// (0x000177c3) list_pinb_item_pane_g4_ParamLimits

0x07ac,	// (0x000177c3) list_pinb_item_pane_g4

0x0003,

0xf14d,	// (0x00026164) list_pinb_item_pane_g_ParamLimits

0xf14d,	// (0x00026164) list_pinb_item_pane_g

0x07b8,	// (0x000177cf) list_pinb_item_pane_t1_ParamLimits

0x07b8,	// (0x000177cf) list_pinb_item_pane_t1

0x6d18,	// (0x0001dd2f) calc_display_pane

0x6d36,	// (0x0001dd4d) calc_paper_pane

0x6d52,	// (0x0001dd69) grid_calc_pane

0x04a9,	// (0x000174c0) bg_list_pane_cp01

0x8567,	// (0x0001f57e) clock_g1

0x856f,	// (0x0001f586) clock_g2

0x0001,

0xf156,	// (0x0002616d) clock_g

0x8579,	// (0x0001f590) clock_t1_ParamLimits

0x8579,	// (0x0001f590) clock_t1

0x858e,	// (0x0001f5a5) clock_t2_ParamLimits

0x858e,	// (0x0001f5a5) clock_t2

0x85a0,	// (0x0001f5b7) clock_t3_ParamLimits

0x85a0,	// (0x0001f5b7) clock_t3

0x85b2,	// (0x0001f5c9) clock_t4_ParamLimits

0x85b2,	// (0x0001f5c9) clock_t4

0x85c4,	// (0x0001f5db) clock_t5_ParamLimits

0x85c4,	// (0x0001f5db) clock_t5

0x85d9,	// (0x0001f5f0) clock_t6_ParamLimits

0x85d9,	// (0x0001f5f0) clock_t6

0x85eb,	// (0x0001f602) clock_t7_ParamLimits

0x85eb,	// (0x0001f602) clock_t7

0x85fd,	// (0x0001f614) clock_t8_ParamLimits

0x85fd,	// (0x0001f614) clock_t8

0x8613,	// (0x0001f62a) clock_t9_ParamLimits

0x8613,	// (0x0001f62a) clock_t9

0x0008,

0xf15b,	// (0x00026172) clock_t_ParamLimits

0xf15b,	// (0x00026172) clock_t

0x07d7,	// (0x000177ee) popup_clock_analogue_window_cp02

0x07d7,	// (0x000177ee) popup_clock_digital_window_cp01

0x07df,	// (0x000177f6) listscroll_help_pane

0x04a9,	// (0x000174c0) phob_pre_status_pane

0x07e9,	// (0x00017800) grid_qdial_pane

0x04a9,	// (0x000174c0) listscroll_mce_pane

0x07f3,	// (0x0001780a) bg_notes_pane

0x0801,	// (0x00017818) list_notes_pane

0x8629,	// (0x0001f640) scroll_pane_cp06

0x080f,	// (0x00017826) bg_calc_paper_pane

0x6d88,	// (0x0001dd9f) list_calc_pane

0x083d,	// (0x00017854) bg_calc_display_pane

0x6da2,	// (0x0001ddb9) calc_display_pane_t1

0x6db7,	// (0x0001ddce) calc_display_pane_t2

0x6dcc,	// (0x0001dde3) calc_display_pane_t3

0x0002,

0xf16e,	// (0x00026185) calc_display_pane_t

0x6dde,	// (0x0001ddf5) cell_calc_pane_ParamLimits

0x6dde,	// (0x0001ddf5) cell_calc_pane

0x085b,	// (0x00017872) bg_calc_paper_pane_g1

0x0873,	// (0x0001788a) bg_calc_paper_pane_g2

0x0867,	// (0x0001787e) bg_calc_paper_pane_g3

0x088b,	// (0x000178a2) bg_calc_paper_pane_g4

0x087f,	// (0x00017896) bg_calc_paper_pane_g5

0x8638,	// (0x0001f64f) bg_calc_paper_pane_g6

0x8649,	// (0x0001f660) bg_calc_paper_pane_g7

0x865a,	// (0x0001f671) bg_calc_paper_pane_g8

0x0007,

0xf175,	// (0x0002618c) bg_calc_paper_pane_g

0x866b,	// (0x0001f682) calc_bg_paper_pane_g9

0x867c,	// (0x0001f693) list_calc_item_pane_ParamLimits

0x867c,	// (0x0001f693) list_calc_item_pane

0x0897,	// (0x000178ae) list_calc_item_pane_g1

0x6e0b,	// (0x0001de22) list_calc_item_pane_t1_ParamLimits

0x6e0b,	// (0x0001de22) list_calc_item_pane_t1

0x6e1d,	// (0x0001de34) list_calc_item_pane_t2_ParamLimits

0x6e1d,	// (0x0001de34) list_calc_item_pane_t2

0x0001,

0xf186,	// (0x0002619d) list_calc_item_pane_t_ParamLimits

0xf186,	// (0x0002619d) list_calc_item_pane_t

0x08b6,	// (0x000178cd) cell_calc_pane_g1

0x08c0,	// (0x000178d7) grid_highlight_pane_cp02

0x08f5,	// (0x0001790c) bg_calc_display_pane_g1

0x6e4d,	// (0x0001de64) bg_calc_display_pane_g2

0x08e2,	// (0x000178f9) bg_calc_display_pane_g3

0x0002,

0xf190,	// (0x000261a7) bg_calc_display_pane_g

0x6e57,	// (0x0001de6e) cell_qdial_pane_ParamLimits

0x6e57,	// (0x0001de6e) cell_qdial_pane

0x86b6,	// (0x0001f6cd) cell_qdial_pane_g1_ParamLimits

0x86b6,	// (0x0001f6cd) cell_qdial_pane_g1

0x86c3,	// (0x0001f6da) cell_qdial_pane_g2_ParamLimits

0x86c3,	// (0x0001f6da) cell_qdial_pane_g2

0x08fe,	// (0x00017915) cell_qdial_pane_g3_ParamLimits

0x08fe,	// (0x00017915) cell_qdial_pane_g3

0x0003,

0xf197,	// (0x000261ae) cell_qdial_pane_g_ParamLimits

0xf197,	// (0x000261ae) cell_qdial_pane_g

0x86e1,	// (0x0001f6f8) cell_qdial_pane_t1_ParamLimits

0x86e1,	// (0x0001f6f8) cell_qdial_pane_t1

0x86f9,	// (0x0001f710) cell_qdial_pane_t2_ParamLimits

0x86f9,	// (0x0001f710) cell_qdial_pane_t2

0x870c,	// (0x0001f723) cell_qdial_pane_t3_ParamLimits

0x870c,	// (0x0001f723) cell_qdial_pane_t3

0x0002,

0xf1a0,	// (0x000261b7) cell_qdial_pane_t_ParamLimits

0xf1a0,	// (0x000261b7) cell_qdial_pane_t

0x04a9,	// (0x000174c0) grid_highlight_pane_cp04

0x090a,	// (0x00017921) thumbnail_qdial_pane_ParamLimits

0x090a,	// (0x00017921) thumbnail_qdial_pane

0x0966,	// (0x0001797d) list_help_pane

0x096f,	// (0x00017986) scroll_pane_cp02

0x871f,	// (0x0001f736) help_list_pane_t1_ParamLimits

0x871f,	// (0x0001f736) help_list_pane_t1

0x6e6b,	// (0x0001de82) bg_notes_pane_g2

0x6e73,	// (0x0001de8a) bg_notes_pane_g3

0x6e7b,	// (0x0001de92) notes_bg_pane_g1

0x6e83,	// (0x0001de9a) notes_bg_pane_g4

0x6e8b,	// (0x0001dea2) notes_bg_pane_g5

0x6e93,	// (0x0001deaa) notes_bg_pane_g6

0x6e9b,	// (0x0001deb2) notes_bg_pane_g7

0x6ea3,	// (0x0001deba) notes_bg_pane_g8

0x6eab,	// (0x0001dec2) notes_bg_pane_g9

0x0006,

0xf1be,	// (0x000261d5) notes_bg_pane_g

0x875d,	// (0x0001f774) list_notes_text_pane_ParamLimits

0x875d,	// (0x0001f774) list_notes_text_pane

0x09c0,	// (0x000179d7) list_notes_text_pane_g1

0x87b1,	// (0x0001f7c8) list_notes_text_pane_t1

0x083d,	// (0x00017854) listscroll_cale_week_pane

0x87dc,	// (0x0001f7f3) bg_cale_heading_pane

0x09da,	// (0x000179f1) bg_cale_pane_cp01

0x87f8,	// (0x0001f80f) cale_week_corner_pane

0x8809,	// (0x0001f820) cale_week_day_heading_pane

0x8825,	// (0x0001f83c) cale_week_scroll_pane_g1

0x883e,	// (0x0001f855) cale_week_scroll_pane_g2

0x884f,	// (0x0001f866) cale_week_scroll_pane_g3

0x8860,	// (0x0001f877) cale_week_scroll_pane_g4

0x8871,	// (0x0001f888) cale_week_scroll_pane_g5

0x8882,	// (0x0001f899) cale_week_scroll_pane_g6

0x8893,	// (0x0001f8aa) cale_week_scroll_pane_g7

0x88a6,	// (0x0001f8bd) cale_week_scroll_pane_g8

0x88b9,	// (0x0001f8d0) cale_week_scroll_pane_g9

0x88ca,	// (0x0001f8e1) cale_week_scroll_pane_g10

0x88db,	// (0x0001f8f2) cale_week_scroll_pane_g11

0x88ec,	// (0x0001f903) cale_week_scroll_pane_g12

0x8905,	// (0x0001f91c) cale_week_scroll_pane_g13

0x891e,	// (0x0001f935) cale_week_scroll_pane_g14

0x8937,	// (0x0001f94e) cale_week_scroll_pane_g15

0x000e,

0xf1cd,	// (0x000261e4) cale_week_scroll_pane_g

0x8950,	// (0x0001f967) cale_week_time_pane

0x8963,	// (0x0001f97a) grid_cale_week_pane

0x8980,	// (0x0001f997) scroll_pane_cp08

0x899a,	// (0x0001f9b1) cell_cale_week_pane_ParamLimits

0x899a,	// (0x0001f9b1) cell_cale_week_pane

0x89ea,	// (0x0001fa01) cale_week_day_heading_pane_t1

0x89fe,	// (0x0001fa15) cale_week_day_heading_pane_t2

0x8a12,	// (0x0001fa29) cale_week_day_heading_pane_t3

0x8a26,	// (0x0001fa3d) cale_week_day_heading_pane_t4

0x8a3a,	// (0x0001fa51) cale_week_day_heading_pane_t5

0x8a4e,	// (0x0001fa65) cale_week_day_heading_pane_t6

0x8a62,	// (0x0001fa79) cale_week_day_heading_pane_t7

0x0006,

0xf1ec,	// (0x00026203) cale_week_day_heading_pane_t

0x0a05,	// (0x00017a1c) bg_cale_side_pane

0x6eb3,	// (0x0001deca) cale_week_time_pane_t1

0x6ecb,	// (0x0001dee2) cale_week_time_pane_t2

0x6ee3,	// (0x0001defa) cale_week_time_pane_t3

0x6efb,	// (0x0001df12) cale_week_time_pane_t4

0x6f13,	// (0x0001df2a) cale_week_time_pane_t5

0x6f2b,	// (0x0001df42) cale_week_time_pane_t6

0x6f4b,	// (0x0001df62) cale_week_time_pane_t7

0x6f6b,	// (0x0001df82) cale_week_time_pane_t8

0x0007,

0xf1fb,	// (0x00026212) cale_week_time_pane_t

0x8a76,	// (0x0001fa8d) cell_cale_week_pane_g2

0x8a87,	// (0x0001fa9e) cell_cale_week_pane_g3_ParamLimits

0x8a87,	// (0x0001fa9e) cell_cale_week_pane_g3

0x0a13,	// (0x00017a2a) grid_highlight_pane_cp07

0x0a1b,	// (0x00017a32) listscroll_gms_pane

0x0a25,	// (0x00017a3c) grid_gms_pane

0x0a2e,	// (0x00017a45) listscroll_gms_pane_g1

0x0a36,	// (0x00017a4d) listscroll_gms_pane_g2

0x0001,

0xf20c,	// (0x00026223) listscroll_gms_pane_g

0x8a9f,	// (0x0001fab6) scroll_pane_cp010

0x8aaa,	// (0x0001fac1) cell_gms_pane_ParamLimits

0x8aaa,	// (0x0001fac1) cell_gms_pane

0x8abc,	// (0x0001fad3) cell_gms_pane_g1

0x0a3e,	// (0x00017a55) cell_gms_pane_g2

0x09c0,	// (0x000179d7) cell_gms_pane_g3

0x0a46,	// (0x00017a5d) cell_gms_pane_g4

0x0003,

0xf211,	// (0x00026228) cell_gms_pane_g

0x0a4f,	// (0x00017a66) grid_highlight_pane_cp09

0xad25,	// (0x00021d3c) phob_pre_status_pane_g1

0xad2d,	// (0x00021d44) phob_pre_status_pane_g2

0xad35,	// (0x00021d4c) phob_pre_status_pane_g3

0xad3d,	// (0x00021d54) phob_pre_status_pane_g4

0x0004,

0xf600,	// (0x00026617) phob_pre_status_pane_g

0xad4d,	// (0x00021d64) phob_pre_status_pane_t1

0xad5d,	// (0x00021d74) phob_pre_status_pane_t2

0xad6d,	// (0x00021d84) phob_pre_status_pane_t3

0x0002,

0xf60b,	// (0x00026622) phob_pre_status_pane_t

0x04a9,	// (0x000174c0) bg_list_pane_cp05

0x6f93,	// (0x0001dfaa) grid_vorec_pane

0x6f9b,	// (0x0001dfb2) vorec_t1

0x6fa9,	// (0x0001dfc0) vorec_t2

0x6fb7,	// (0x0001dfce) vorec_t3

0x6fc5,	// (0x0001dfdc) vorec_t4

0x6fd3,	// (0x0001dfea) vorec_t5

0x6fe1,	// (0x0001dff8) vorec_t6

0x0006,

0xf21a,	// (0x00026231) vorec_t

0x6ffd,	// (0x0001e014) wait_bar_pane_cp01

0x0ad1,	// (0x00017ae8) cell_vorec_pane_ParamLimits

0x0ad1,	// (0x00017ae8) cell_vorec_pane

0x0ae4,	// (0x00017afb) cell_vorec_pane_g1

0x04a9,	// (0x000174c0) grid_highlight_pane_cp05

0x8ad4,	// (0x0001faeb) cams_zoom_pane

0x8ae0,	// (0x0001faf7) image_vga_pane

0x8aef,	// (0x0001fb06) main_camera_pane_g1

0x8afd,	// (0x0001fb14) main_camera_pane_g2

0x8b0b,	// (0x0001fb22) main_camera_pane_g3

0x8b17,	// (0x0001fb2e) main_camera_pane_g4

0x8b23,	// (0x0001fb3a) main_camera_pane_g5

0x8b2f,	// (0x0001fb46) main_camera_pane_g6

0x8b3b,	// (0x0001fb52) main_camera_pane_g7

0x0007,

0xf229,	// (0x00026240) main_camera_pane_g

0x8b47,	// (0x0001fb5e) main_camera_pane_t1

0x8b59,	// (0x0001fb70) main_camera_pane_t2

0x0001,

0xf23a,	// (0x00026251) main_camera_pane_t

0x8b7a,	// (0x0001fb91) cams_zoom_pane_cp_ParamLimits

0x8b7a,	// (0x0001fb91) cams_zoom_pane_cp

0x8b9e,	// (0x0001fbb5) image_cif_pane_ParamLimits

0x8b9e,	// (0x0001fbb5) image_cif_pane

0x8bbc,	// (0x0001fbd3) image_subqcif_pane

0x8bc4,	// (0x0001fbdb) main_video_pane_g1_ParamLimits

0x8bc4,	// (0x0001fbdb) main_video_pane_g1

0x8be4,	// (0x0001fbfb) main_video_pane_g2_ParamLimits

0x8be4,	// (0x0001fbfb) main_video_pane_g2

0x8c16,	// (0x0001fc2d) main_video_pane_g3_ParamLimits

0x8c16,	// (0x0001fc2d) main_video_pane_g3

0x8c41,	// (0x0001fc58) main_video_pane_g4_ParamLimits

0x8c41,	// (0x0001fc58) main_video_pane_g4

0x8c6c,	// (0x0001fc83) main_video_pane_g5_ParamLimits

0x8c6c,	// (0x0001fc83) main_video_pane_g5

0x0afa,	// (0x00017b11) main_video_pane_g6_ParamLimits

0x0afa,	// (0x00017b11) main_video_pane_g6

0x0006,

0xf23f,	// (0x00026256) main_video_pane_g_ParamLimits

0xf23f,	// (0x00026256) main_video_pane_g

0x8c90,	// (0x0001fca7) main_video_pane_t1_ParamLimits

0x8c90,	// (0x0001fca7) main_video_pane_t1

0x0b14,	// (0x00017b2b) cams_zoom_pane_g1

0x0b1d,	// (0x00017b34) cams_zoom_pane_g2

0x0b26,	// (0x00017b3d) cams_zoom_pane_g3

0x0b2f,	// (0x00017b46) cams_zoom_pane_g4

0x0003,

0xf24e,	// (0x00026265) cams_zoom_pane_g

0x8cda,	// (0x0001fcf1) grid_cams_pane

0x8ce8,	// (0x0001fcff) linegrid_cams_pane

0x8cf6,	// (0x0001fd0d) cell_cams_pane_ParamLimits

0x8cf6,	// (0x0001fd0d) cell_cams_pane

0x0b38,	// (0x00017b4f) cams_burst_image_pane

0x0b40,	// (0x00017b57) cell_cams_pane_g1

0x04a9,	// (0x000174c0) grid_highlight_pane_cp03

0x08b6,	// (0x000178cd) mp_bg_pane_g1

0x04a9,	// (0x000174c0) bg_list_pane_cp03

0x2972,	// (0x00019989) bg_mp_pane

0x297a,	// (0x00019991) grid_mp_pane

0x2982,	// (0x00019999) media_player_g1

0x298a,	// (0x000199a1) media_player_t1

0x2998,	// (0x000199af) media_player_t2

0x29a6,	// (0x000199bd) media_player_t3

0x29b4,	// (0x000199cb) media_player_t4

0x29c2,	// (0x000199d9) media_player_t5

0x29d0,	// (0x000199e7) media_player_t6

0x29de,	// (0x000199f5) media_player_t7

0x0006,

0xf5ea,	// (0x00026601) media_player_t

0x29ec,	// (0x00019a03) wait_bar_pane_cp02

0xf5cf,	// (0x000265e6) main_usb_pane_t

0xad1c,	// (0x00021d33) cell_mp_pane

0x08b6,	// (0x000178cd) cell_mp_pane_g1

0x04a9,	// (0x000174c0) grid_highlight_pane_cp06

0x0c05,	// (0x00017c1c) grid_skin_colour_pane

0x0c0d,	// (0x00017c24) list_highlight_pane_cp03

0x8d5f,	// (0x0001fd76) skin_g1

0x0c15,	// (0x00017c2c) skin_t1

0x0c24,	// (0x00017c3b) skin_t2

0x0001,

0xf283,	// (0x0002629a) skin_t

0x8d69,	// (0x0001fd80) cell_skin_colour_pane_ParamLimits

0x8d69,	// (0x0001fd80) cell_skin_colour_pane

0x0c32,	// (0x00017c49) cell_skin_colour_pane_g1

0x8ded,	// (0x0001fe04) call_video_g1_ParamLimits

0x8ded,	// (0x0001fe04) call_video_g1

0x8dfd,	// (0x0001fe14) call_video_g2_ParamLimits

0x8dfd,	// (0x0001fe14) call_video_g2

0x0001,

0xf288,	// (0x0002629f) call_video_g_ParamLimits

0xf288,	// (0x0002629f) call_video_g

0x8e57,	// (0x0001fe6e) call_video_uplink_pane_cp1_ParamLimits

0x8e57,	// (0x0001fe6e) call_video_uplink_pane_cp1

0x0c44,	// (0x00017c5b) call_video_uplink_pane_cp2

0x8f23,	// (0x0001ff3a) video_down_crop_pane_ParamLimits

0x8f23,	// (0x0001ff3a) video_down_crop_pane

0x9015,	// (0x0002002c) video_down_pane_ParamLimits

0x9015,	// (0x0002002c) video_down_pane

0x0c4c,	// (0x00017c63) video_down_subqcif_pane_ParamLimits

0x0c4c,	// (0x00017c63) video_down_subqcif_pane

0x0c64,	// (0x00017c7b) video_down_subqcif_pane_cp_ParamLimits

0x0c64,	// (0x00017c7b) video_down_subqcif_pane_cp

0x0c8a,	// (0x00017ca1) im_reading_pane_ParamLimits

0x0c8a,	// (0x00017ca1) im_reading_pane

0x9137,	// (0x0002014e) im_writing_pane_ParamLimits

0x9137,	// (0x0002014e) im_writing_pane

0x9155,	// (0x0002016c) im_reading_pane_t1

0x0ca4,	// (0x00017cbb) list_im_pane

0x0cb5,	// (0x00017ccc) scroll_pane_cp07

0x91b5,	// (0x000201cc) im_writing_pane_t1_ParamLimits

0x91b5,	// (0x000201cc) im_writing_pane_t1

0x0cce,	// (0x00017ce5) im_writing_pane_t2_ParamLimits

0x0cce,	// (0x00017ce5) im_writing_pane_t2

0x0001,

0xf292,	// (0x000262a9) im_writing_pane_t_ParamLimits

0xf292,	// (0x000262a9) im_writing_pane_t

0x04a9,	// (0x000174c0) input_focus_pane_cp04

0x04a9,	// (0x000174c0) input_focus_pane_cp05

0x91c7,	// (0x000201de) list_im_single_pane_ParamLimits

0x91c7,	// (0x000201de) list_im_single_pane

0x91f3,	// (0x0002020a) list_single_im_pane_t1

0xace0,	// (0x00021cf7) blid_accuracy_pane

0xace8,	// (0x00021cff) blid_compass_pane

0xacf2,	// (0x00021d09) main_location_t1

0xad00,	// (0x00021d17) main_location_t2

0xad0e,	// (0x00021d25) main_location_t3

0x0002,

0xf5f9,	// (0x00026610) main_location_t

0x04a9,	// (0x000174c0) aid_levels_location

0x08b6,	// (0x000178cd) blid_accuracy_pane_g1

0x08b6,	// (0x000178cd) blid_accuracy_pane_g2

0x0001,

0xf2f4,	// (0x0002630b) blid_accuracy_pane_g

0x0d16,	// (0x00017d2d) wml_content_pane

0x0d54,	// (0x00017d6b) wml_button_pane_ParamLimits

0x0d54,	// (0x00017d6b) wml_button_pane

0x9202,	// (0x00020219) wml_list_single_large_pane_ParamLimits

0x9202,	// (0x00020219) wml_list_single_large_pane

0x9234,	// (0x0002024b) wml_list_single_medium_pane_ParamLimits

0x9234,	// (0x0002024b) wml_list_single_medium_pane

0x926d,	// (0x00020284) wml_list_single_small_pane_ParamLimits

0x926d,	// (0x00020284) wml_list_single_small_pane

0x0d68,	// (0x00017d7f) wml_selection_box_pane_ParamLimits

0x0d68,	// (0x00017d7f) wml_selection_box_pane

0x0d7b,	// (0x00017d92) wml_list_single_pane_t1

0x0d8a,	// (0x00017da1) wml_list_single_medium_pane_t1

0x0d99,	// (0x00017db0) wml_list_single_large_pane_t1

0x0da8,	// (0x00017dbf) input_focus_pane_cp02_ParamLimits

0x0da8,	// (0x00017dbf) input_focus_pane_cp02

0x0dbb,	// (0x00017dd2) wml_selection_box_pane_g1

0x0dc4,	// (0x00017ddb) wml_selection_box_pane_t1_ParamLimits

0x0dc4,	// (0x00017ddb) wml_selection_box_pane_t1

0x0704,	// (0x0001771b) bg_wml_button_pane_ParamLimits

0x0704,	// (0x0001771b) bg_wml_button_pane

0x0ddc,	// (0x00017df3) wml_button_pane_g1

0x0de4,	// (0x00017dfb) wml_button_pane_t1

0x0ddc,	// (0x00017df3) wml_button_bg_pane_g1

0x0df4,	// (0x00017e0b) wml_button_bg_pane_g2

0x0dfc,	// (0x00017e13) wml_button_bg_pane_g3

0x0e04,	// (0x00017e1b) wml_button_bg_pane_g4

0x0e0c,	// (0x00017e23) wml_button_bg_pane_g5

0x0e14,	// (0x00017e2b) wml_button_bg_pane_g6

0x0e1c,	// (0x00017e33) wml_button_bg_pane_g7

0x0e24,	// (0x00017e3b) wml_button_bg_pane_g8

0x0e2c,	// (0x00017e43) wml_button_bg_pane_g9

0x0008,

0xf297,	// (0x000262ae) wml_button_bg_pane_g

0x92b5,	// (0x000202cc) bg_list_pane_cp02

0x0e34,	// (0x00017e4b) mce_header_pane_ParamLimits

0x0e34,	// (0x00017e4b) mce_header_pane

0x0e4a,	// (0x00017e61) mce_icon_pane

0x0e4a,	// (0x00017e61) mce_image_pane

0x0e53,	// (0x00017e6a) mce_text_pane_ParamLimits

0x0e53,	// (0x00017e6a) mce_text_pane

0x92bf,	// (0x000202d6) scroll_pane_cp03

0x0d4c,	// (0x00017d63) scroll_pane_cp04

0x0e66,	// (0x00017e7d) scroll_pane_cp05_ParamLimits

0x0e66,	// (0x00017e7d) scroll_pane_cp05

0x92c9,	// (0x000202e0) mce_header_field_pane_ParamLimits

0x92c9,	// (0x000202e0) mce_header_field_pane

0x92e9,	// (0x00020300) mce_header_field_pane_2_ParamLimits

0x92e9,	// (0x00020300) mce_header_field_pane_2

0x92ff,	// (0x00020316) mce_header_field_pane_3

0x9307,	// (0x0002031e) list_single_mce_message_pane_ParamLimits

0x9307,	// (0x0002031e) list_single_mce_message_pane

0x9337,	// (0x0002034e) list_single_mce_smart_pane_ParamLimits

0x9337,	// (0x0002034e) list_single_mce_smart_pane

0x0e72,	// (0x00017e89) input_focus_pane_cp03

0x0e7b,	// (0x00017e92) list_header_data_pane

0x9372,	// (0x00020389) mce_header_field_pane_t1

0x9382,	// (0x00020399) list_single_mce_header_pane_ParamLimits

0x9382,	// (0x00020399) list_single_mce_header_pane

0x0e83,	// (0x00017e9a) list_single_mce_header_pane_t1

0x0e92,	// (0x00017ea9) list_single_mce_message_pane_g1

0x0e9a,	// (0x00017eb1) list_single_mce_message_pane_t1

0x93d4,	// (0x000203eb) bg_cale_heading_pane_cp01_ParamLimits

0x93d4,	// (0x000203eb) bg_cale_heading_pane_cp01

0x0ea8,	// (0x00017ebf) bg_cale_pane_cp02_ParamLimits

0x0ea8,	// (0x00017ebf) bg_cale_pane_cp02

0x9407,	// (0x0002041e) cale_month_corner_pane

0x941d,	// (0x00020434) cale_month_day_heading_pane_ParamLimits

0x941d,	// (0x00020434) cale_month_day_heading_pane

0x9460,	// (0x00020477) cale_month_pane_g1_ParamLimits

0x9460,	// (0x00020477) cale_month_pane_g1

0x948c,	// (0x000204a3) cale_month_pane_g2_ParamLimits

0x948c,	// (0x000204a3) cale_month_pane_g2

0x94af,	// (0x000204c6) cale_month_pane_g3_ParamLimits

0x94af,	// (0x000204c6) cale_month_pane_g3

0x94eb,	// (0x00020502) cale_month_pane_g4_ParamLimits

0x94eb,	// (0x00020502) cale_month_pane_g4

0x9527,	// (0x0002053e) cale_month_pane_g5_ParamLimits

0x9527,	// (0x0002053e) cale_month_pane_g5

0x9563,	// (0x0002057a) cale_month_pane_g6_ParamLimits

0x9563,	// (0x0002057a) cale_month_pane_g6

0x959f,	// (0x000205b6) cale_month_pane_g7_ParamLimits

0x959f,	// (0x000205b6) cale_month_pane_g7

0x95eb,	// (0x00020602) cale_month_pane_g8_ParamLimits

0x95eb,	// (0x00020602) cale_month_pane_g8

0x9637,	// (0x0002064e) cale_month_pane_g9_ParamLimits

0x9637,	// (0x0002064e) cale_month_pane_g9

0x967d,	// (0x00020694) cale_month_pane_g10_ParamLimits

0x967d,	// (0x00020694) cale_month_pane_g10

0x96c3,	// (0x000206da) cale_month_pane_g11_ParamLimits

0x96c3,	// (0x000206da) cale_month_pane_g11

0x9701,	// (0x00020718) cale_month_pane_g12_ParamLimits

0x9701,	// (0x00020718) cale_month_pane_g12

0x973f,	// (0x00020756) cale_month_pane_g13_ParamLimits

0x973f,	// (0x00020756) cale_month_pane_g13

0x000c,

0xf2aa,	// (0x000262c1) cale_month_pane_g_ParamLimits

0xf2aa,	// (0x000262c1) cale_month_pane_g

0x977d,	// (0x00020794) cale_month_week_pane

0x9790,	// (0x000207a7) grid_cale_month_pane_ParamLimits

0x9790,	// (0x000207a7) grid_cale_month_pane

0x97ce,	// (0x000207e5) cale_month_day_heading_pane_t1

0x982c,	// (0x00020843) cale_month_day_heading_pane_t2

0x9891,	// (0x000208a8) cale_month_day_heading_pane_t3

0x98f6,	// (0x0002090d) cale_month_day_heading_pane_t4

0x995b,	// (0x00020972) cale_month_day_heading_pane_t5

0x99c0,	// (0x000209d7) cale_month_day_heading_pane_t6

0x9a2d,	// (0x00020a44) cale_month_day_heading_pane_t7

0x0006,

0xf2c5,	// (0x000262dc) cale_month_day_heading_pane_t

0x0a05,	// (0x00017a1c) bg_cale_side_pane_cp01

0x9aa2,	// (0x00020ab9) cale_month_week_pane_t1

0x9ab9,	// (0x00020ad0) cale_month_week_pane_t2

0x9ad0,	// (0x00020ae7) cale_month_week_pane_t3

0x9ae7,	// (0x00020afe) cale_month_week_pane_t4

0x9afe,	// (0x00020b15) cale_month_week_pane_t5

0x9b1d,	// (0x00020b34) cale_month_week_pane_t6

0x0005,

0xf2d4,	// (0x000262eb) cale_month_week_pane_t

0x9b3c,	// (0x00020b53) cell_cale_month_pane_ParamLimits

0x9b3c,	// (0x00020b53) cell_cale_month_pane

0x7005,	// (0x0001e01c) cell_cale_month_pane_g1

0x7011,	// (0x0001e028) cell_cale_month_pane_t1_ParamLimits

0x7011,	// (0x0001e028) cell_cale_month_pane_t1

0x0a13,	// (0x00017a2a) grid_highlight_pane_cp08

0x08b6,	// (0x000178cd) main_smil_g1

0x9c0a,	// (0x00020c21) smil_status_pane

0x0f13,	// (0x00017f2a) smil_text_pane

0x288a,	// (0x000198a1) bg_popup_call3_rect_pane_g8

0x2892,	// (0x000198a9) bg_popup_call3_rect_pane_g9

0x0008,

0xf58d,	// (0x000265a4) bg_popup_call3_rect_pane_g

0x2b27,	// (0x00019b3e) smil_status_volume_pane_g1

0x0f1d,	// (0x00017f34) smil_status_pane_t1

0x714f,	// (0x0001e166) volume_smil_pane

0x0f34,	// (0x00017f4b) list_smil_text_pane

0x9c1d,	// (0x00020c34) scroll_pane_cp011

0x9c28,	// (0x00020c3f) smil_text_list_pane_t1_ParamLimits

0x9c28,	// (0x00020c3f) smil_text_list_pane_t1

0x702d,	// (0x0001e044) aid_volume_smil_ParamLimits

0x702d,	// (0x0001e044) aid_volume_smil

0x08b6,	// (0x000178cd) smil_volume_pane_g1

0x08b6,	// (0x000178cd) smil_volume_pane_g2

0x0001,

0xf2f4,	// (0x0002630b) smil_volume_pane_g

0x083d,	// (0x00017854) listscroll_cale_day_pane

0x0f60,	// (0x00017f77) bg_cale_pane

0x0f78,	// (0x00017f8f) list_cale_pane

0x0f89,	// (0x00017fa0) scroll_pane_cp09

0x0f9a,	// (0x00017fb1) cale_bg_pane_g1

0x0fa2,	// (0x00017fb9) cale_bg_pane_g2

0x0faa,	// (0x00017fc1) cale_bg_pane_g3

0x0fb2,	// (0x00017fc9) cale_bg_pane_g4

0x0fba,	// (0x00017fd1) cale_bg_pane_g5

0x0fc2,	// (0x00017fd9) cale_bg_pane_g6

0x0fca,	// (0x00017fe1) cale_bg_pane_g7

0x0fd2,	// (0x00017fe9) cale_bg_pane_g8

0x0fda,	// (0x00017ff1) cale_bg_pane_g9

0x0008,

0xf2f9,	// (0x00026310) cale_bg_pane_g

0x9cd3,	// (0x00020cea) list_cale_time_pane_ParamLimits

0x9cd3,	// (0x00020cea) list_cale_time_pane

0x9cf4,	// (0x00020d0b) list_cale_time_pane_g1_ParamLimits

0x9cf4,	// (0x00020d0b) list_cale_time_pane_g1

0x0fe2,	// (0x00017ff9) list_cale_time_pane_g2_ParamLimits

0x0fe2,	// (0x00017ff9) list_cale_time_pane_g2

0x9d00,	// (0x00020d17) list_cale_time_pane_g3_ParamLimits

0x9d00,	// (0x00020d17) list_cale_time_pane_g3

0x9d1c,	// (0x00020d33) list_cale_time_pane_g4_ParamLimits

0x9d1c,	// (0x00020d33) list_cale_time_pane_g4

0x9d2a,	// (0x00020d41) list_cale_time_pane_g5_ParamLimits

0x9d2a,	// (0x00020d41) list_cale_time_pane_g5

0x0005,

0xf30c,	// (0x00026323) list_cale_time_pane_g_ParamLimits

0xf30c,	// (0x00026323) list_cale_time_pane_g

0x9d38,	// (0x00020d4f) list_cale_time_pane_t1_ParamLimits

0x9d38,	// (0x00020d4f) list_cale_time_pane_t1

0x9d60,	// (0x00020d77) list_cale_time_pane_t2_ParamLimits

0x9d60,	// (0x00020d77) list_cale_time_pane_t2

0xa04b,	// (0x00021062) aid_blid_cardinal_pane

0xa08d,	// (0x000210a4) compass_pane_t4

0x9d88,	// (0x00020d9f) list_cale_time_pane_t4_ParamLimits

0x9d88,	// (0x00020d9f) list_cale_time_pane_t4

0xa09b,	// (0x000210b2) compass_pane_t5

0xa0ab,	// (0x000210c2) compass_pane_t6

0xa0b9,	// (0x000210d0) compass_pane_t7

0x1500,	// (0x00018517) navi_pane_cc_t1

0x1667,	// (0x0001867e) aid_phob_thumbnail_center_pane

0xa7d6,	// (0x000217ed) main_postcard_pane_g4_ParamLimits

0x0002,

0xf319,	// (0x00026330) list_cale_time_pane_t_ParamLimits

0xf319,	// (0x00026330) list_cale_time_pane_t

0x0102,	// (0x00017119) bg_popup_window_pane_cp02_ParamLimits

0x0102,	// (0x00017119) bg_popup_window_pane_cp02

0x0ffc,	// (0x00018013) heading_pane_cp01_ParamLimits

0x0ffc,	// (0x00018013) heading_pane_cp01

0x1008,	// (0x0001801f) loc_req_pane_ParamLimits

0x1008,	// (0x0001801f) loc_req_pane

0x1018,	// (0x0001802f) loc_type_pane_ParamLimits

0x1018,	// (0x0001802f) loc_type_pane

0x102a,	// (0x00018041) loc_type_pane_t1_ParamLimits

0x102a,	// (0x00018041) loc_type_pane_t1

0x103c,	// (0x00018053) loc_type_pane_t2_ParamLimits

0x103c,	// (0x00018053) loc_type_pane_t2

0x104e,	// (0x00018065) loc_type_pane_t3_ParamLimits

0x104e,	// (0x00018065) loc_type_pane_t3

0x0002,

0xf320,	// (0x00026337) loc_type_pane_t_ParamLimits

0xf320,	// (0x00026337) loc_type_pane_t

0x1060,	// (0x00018077) list_loc_req_pane

0x106a,	// (0x00018081) scroll_pane_cp012

0x9db0,	// (0x00020dc7) list_single_loc_request_popup_menu_pane_ParamLimits

0x9db0,	// (0x00020dc7) list_single_loc_request_popup_menu_pane

0x1075,	// (0x0001808c) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x1075,	// (0x0001808c) list_single_loc_request_popup_menu_pane_g1

0x1081,	// (0x00018098) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x1081,	// (0x00018098) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf327,	// (0x0002633e) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf327,	// (0x0002633e) list_single_loc_request_popup_menu_pane_g

0x108d,	// (0x000180a4) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x108d,	// (0x000180a4) list_single_loc_request_popup_menu_pane_t1

0x9dc2,	// (0x00020dd9) bg_popup_window_pane_cp03_ParamLimits

0x9dc2,	// (0x00020dd9) bg_popup_window_pane_cp03

0x9dd0,	// (0x00020de7) heading_loc_req_pane_ParamLimits

0x9dd0,	// (0x00020de7) heading_loc_req_pane

0x9ddc,	// (0x00020df3) popup_dyc_status_message_window_g1_ParamLimits

0x9ddc,	// (0x00020df3) popup_dyc_status_message_window_g1

0x9de8,	// (0x00020dff) popup_dyc_status_message_window_t1_ParamLimits

0x9de8,	// (0x00020dff) popup_dyc_status_message_window_t1

0x9dfa,	// (0x00020e11) popup_dyc_status_message_window_t2_ParamLimits

0x9dfa,	// (0x00020e11) popup_dyc_status_message_window_t2

0x9e0c,	// (0x00020e23) popup_dyc_status_message_window_t3_ParamLimits

0x9e0c,	// (0x00020e23) popup_dyc_status_message_window_t3

0x0002,

0xf32c,	// (0x00026343) popup_dyc_status_message_window_t_ParamLimits

0xf32c,	// (0x00026343) popup_dyc_status_message_window_t

0x04a9,	// (0x000174c0) bg_heading_pane_cp01

0x10af,	// (0x000180c6) heading_loc_req_pane_g1

0x10b7,	// (0x000180ce) heading_loc_req_pane_g2

0x10bf,	// (0x000180d6) heading_loc_req_pane_g3

0x0002,

0xf333,	// (0x0002634a) heading_loc_req_pane_g

0x10c7,	// (0x000180de) heading_loc_req_pane_t1

0x114b,	// (0x00018162) bg_popup_sub_pane_cp01_ParamLimits

0x114b,	// (0x00018162) bg_popup_sub_pane_cp01

0x1159,	// (0x00018170) popup_cale_events_window_g1_ParamLimits

0x1159,	// (0x00018170) popup_cale_events_window_g1

0x1179,	// (0x00018190) popup_cale_events_window_g2_ParamLimits

0x1179,	// (0x00018190) popup_cale_events_window_g2

0x0001,

0xf367,	// (0x0002637e) popup_cale_events_window_g_ParamLimits

0xf367,	// (0x0002637e) popup_cale_events_window_g

0x1199,	// (0x000181b0) popup_cale_events_window_t1_ParamLimits

0x1199,	// (0x000181b0) popup_cale_events_window_t1

0x11ab,	// (0x000181c2) popup_cale_events_window_t2_ParamLimits

0x11ab,	// (0x000181c2) popup_cale_events_window_t2

0x11e9,	// (0x00018200) popup_cale_events_window_t3_ParamLimits

0x11e9,	// (0x00018200) popup_cale_events_window_t3

0x1223,	// (0x0001823a) popup_cale_events_window_t4_ParamLimits

0x1223,	// (0x0001823a) popup_cale_events_window_t4

0x0003,

0xf36c,	// (0x00026383) popup_cale_events_window_t_ParamLimits

0xf36c,	// (0x00026383) popup_cale_events_window_t

0x9e90,	// (0x00020ea7) call_type_pane

0x167f,	// (0x00018696) popup_call_status_window_g1

0x9e9c,	// (0x00020eb3) popup_call_status_window_g2

0x9ea8,	// (0x00020ebf) popup_call_status_window_g3

0x0002,

0xf375,	// (0x0002638c) popup_call_status_window_g

0x1259,	// (0x00018270) call_type_pane_g1

0x1262,	// (0x00018279) call_type_pane_g2

0x0001,

0xf37c,	// (0x00026393) call_type_pane_g

0x04a9,	// (0x000174c0) bg_popup_sub_pane_cp02

0x126b,	// (0x00018282) listscroll_popup_wml_pane

0x1273,	// (0x0001828a) list_wml_pane

0x127d,	// (0x00018294) scroll_pane_cp013

0x1288,	// (0x0001829f) list_single_graphic_popup_wml_pane_ParamLimits

0x1288,	// (0x0001829f) list_single_graphic_popup_wml_pane

0x08b6,	// (0x000178cd) list_single_graphic_popup_wml_pane_g1

0x129c,	// (0x000182b3) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf381,	// (0x00026398) list_single_graphic_popup_wml_pane_g

0x12a4,	// (0x000182bb) list_single_graphic_popup_wml_pane_t1

0x12b2,	// (0x000182c9) aid_call_pane

0x06fc,	// (0x00017713) popup_clock_analogue_window_g1

0x06fc,	// (0x00017713) popup_clock_analogue_window_g2

0x704f,	// (0x0001e066) popup_clock_analogue_window_g3

0x704f,	// (0x0001e066) popup_clock_analogue_window_g4

0x08b6,	// (0x000178cd) popup_clock_analogue_window_g5

0x0004,

0xf386,	// (0x0002639d) popup_clock_analogue_window_g

0x7057,	// (0x0001e06e) popup_clock_analogue_window_t1

0x7065,	// (0x0001e07c) clock_digital_number_pane_ParamLimits

0x7065,	// (0x0001e07c) clock_digital_number_pane

0x7071,	// (0x0001e088) clock_digital_number_pane_cp02_ParamLimits

0x7071,	// (0x0001e088) clock_digital_number_pane_cp02

0x707d,	// (0x0001e094) clock_digital_number_pane_cp03_ParamLimits

0x707d,	// (0x0001e094) clock_digital_number_pane_cp03

0x7089,	// (0x0001e0a0) clock_digital_number_pane_cp04_ParamLimits

0x7089,	// (0x0001e0a0) clock_digital_number_pane_cp04

0x7095,	// (0x0001e0ac) clock_digital_separator_pane_ParamLimits

0x7095,	// (0x0001e0ac) clock_digital_separator_pane

0x70a1,	// (0x0001e0b8) popup_clock_digital_window_t1

0x08b6,	// (0x000178cd) clock_digital_number_pane_g1

0x08b6,	// (0x000178cd) clock_digital_number_pane_g2

0x0001,

0xf2f4,	// (0x0002630b) clock_digital_number_pane_g

0x08b6,	// (0x000178cd) clock_digital_separator_pane_g1

0x08b6,	// (0x000178cd) clock_digital_separator_pane_g2

0x0001,

0xf2f4,	// (0x0002630b) clock_digital_separator_pane_g

0x04a9,	// (0x000174c0) bg_popup_window_pane_cp04

0x1331,	// (0x00018348) heading_pane_cp03

0x1339,	// (0x00018350) listscroll_popup_gms_pane

0x1341,	// (0x00018358) grid_large_graphic_popup_pane

0x134b,	// (0x00018362) listscroll_popup_gms_pane_g1

0x1353,	// (0x0001836a) listscroll_popup_gms_pane_g2

0x0001,

0xf391,	// (0x000263a8) listscroll_popup_gms_pane_g

0x0d4c,	// (0x00017d63) scroll_pane_cp014

0x135b,	// (0x00018372) cell_large_graphic_popup_pane_ParamLimits

0x135b,	// (0x00018372) cell_large_graphic_popup_pane

0x1373,	// (0x0001838a) cell_large_graphic_popup_pane_g1_ParamLimits

0x1373,	// (0x0001838a) cell_large_graphic_popup_pane_g1

0x137f,	// (0x00018396) cell_large_graphic_popup_pane_g2_ParamLimits

0x137f,	// (0x00018396) cell_large_graphic_popup_pane_g2

0x138b,	// (0x000183a2) cell_large_graphic_popup_pane_g3_ParamLimits

0x138b,	// (0x000183a2) cell_large_graphic_popup_pane_g3

0x1398,	// (0x000183af) cell_large_graphic_popup_pane_g4_ParamLimits

0x1398,	// (0x000183af) cell_large_graphic_popup_pane_g4

0x0003,

0xf396,	// (0x000263ad) cell_large_graphic_popup_pane_g_ParamLimits

0xf396,	// (0x000263ad) cell_large_graphic_popup_pane_g

0x13a8,	// (0x000183bf) grid_highlight_pane_cp010

0x08b6,	// (0x000178cd) bg_popup_call_pane_g1

0x13b2,	// (0x000183c9) list_single_graphic_popup_conf_pane_ParamLimits

0x13b2,	// (0x000183c9) list_single_graphic_popup_conf_pane

0x13c4,	// (0x000183db) list_highlight_pane_cp01

0x13cd,	// (0x000183e4) list_single_graphic_popup_conf_pane_g1

0x13d5,	// (0x000183ec) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf39f,	// (0x000263b6) list_single_graphic_popup_conf_pane_g

0x13dd,	// (0x000183f4) list_single_graphic_popup_conf_pane_t1

0x13eb,	// (0x00018402) linegrid_cams_pane_g1

0x9eb4,	// (0x00020ecb) linegrid_cams_pane_g2

0x09c0,	// (0x000179d7) linegrid_cams_pane_g3

0x13f4,	// (0x0001840b) linegrid_cams_pane_g4

0x9ebd,	// (0x00020ed4) linegrid_cams_pane_g5

0x9ec6,	// (0x00020edd) linegrid_cams_pane_g6

0x0a46,	// (0x00017a5d) linegrid_cams_pane_g7

0x0006,

0xf3a4,	// (0x000263bb) linegrid_cams_pane_g

0x13fd,	// (0x00018414) popup_clock_analogue_window

0x13fd,	// (0x00018414) popup_clock_digital_window

0x04a9,	// (0x000174c0) popup_phob_thumbnail_window

0x08b6,	// (0x000178cd) call_video_uplink_pane_g1

0x1406,	// (0x0001841d) call_video_uplink_pane_g2

0x0001,

0xf3b3,	// (0x000263ca) call_video_uplink_pane_g

0x0a13,	// (0x00017a2a) video_uplink_pane

0x140e,	// (0x00018425) mce_image_pane_g1

0x9ecf,	// (0x00020ee6) mce_image_pane_g2

0x9ed7,	// (0x00020eee) mce_image_pane_g3

0x9edf,	// (0x00020ef6) mce_image_pane_g4

0x9ee7,	// (0x00020efe) mce_image_pane_g5

0x0004,

0xf3b8,	// (0x000263cf) mce_image_pane_g

0x1418,	// (0x0001842f) control_top_pane_stacon_cp01_ParamLimits

0x1418,	// (0x0001842f) control_top_pane_stacon_cp01

0x142c,	// (0x00018443) uni_indicator_pane_stacon_cp01_ParamLimits

0x142c,	// (0x00018443) uni_indicator_pane_stacon_cp01

0x143d,	// (0x00018454) bg_popup_sub_pane_cp03

0x9eef,	// (0x00020f06) chi_dic_find_pane

0x9ef7,	// (0x00020f0e) listscroll_chi_dic_pane

0x9f00,	// (0x00020f17) main_pane_chidic_g1

0x9f13,	// (0x00020f2a) chi_dic_find_pane_t1

0x1447,	// (0x0001845e) find_chidic_pane

0x1450,	// (0x00018467) chi_dic_list_pane_ParamLimits

0x1450,	// (0x00018467) chi_dic_list_pane

0x1461,	// (0x00018478) scroll_pane_cp020

0x9f21,	// (0x00020f38) find_chidic_pane_t1

0x04a9,	// (0x000174c0) input_focus_pane_cp06

0x9f30,	// (0x00020f47) list_chi_dic_pane_ParamLimits

0x9f30,	// (0x00020f47) list_chi_dic_pane

0x1469,	// (0x00018480) list_chi_dic_pane_t1_ParamLimits

0x1469,	// (0x00018480) list_chi_dic_pane_t1

0x04a9,	// (0x000174c0) list_highlight_pane_cp020

0x147c,	// (0x00018493) bg_cale_heading_pane_g1

0x9f51,	// (0x00020f68) bg_cale_heading_pane_g2

0x9f59,	// (0x00020f70) bg_cale_heading_pane_g3

0x9f61,	// (0x00020f78) bg_cale_heading_pane_g4

0x9f6b,	// (0x00020f82) bg_cale_heading_pane_g5

0x9f75,	// (0x00020f8c) bg_cale_heading_pane_g6

0x9f7d,	// (0x00020f94) bg_cale_heading_pane_g7

0x9f85,	// (0x00020f9c) bg_cale_heading_pane_g8

0x9f8f,	// (0x00020fa6) bg_cale_heading_pane_g9

0x0008,

0xf3c3,	// (0x000263da) bg_cale_heading_pane_g

0x147c,	// (0x00018493) bg_cale_side_pane_g1

0x9f99,	// (0x00020fb0) bg_cale_side_pane_g2

0x9fa3,	// (0x00020fba) bg_cale_side_pane_g3

0x9fad,	// (0x00020fc4) bg_cale_side_pane_g4

0x9fb7,	// (0x00020fce) bg_cale_side_pane_g5

0x9fc1,	// (0x00020fd8) bg_cale_side_pane_g6

0x9fcb,	// (0x00020fe2) bg_cale_side_pane_g7

0x9fd5,	// (0x00020fec) bg_cale_side_pane_g8

0x9fdd,	// (0x00020ff4) bg_cale_side_pane_g9

0x0008,

0xf3d6,	// (0x000263ed) bg_cale_side_pane_g

0x9fe5,	// (0x00020ffc) popup_call_status_window_ParamLimits

0x9fe5,	// (0x00020ffc) popup_call_status_window

0x1484,	// (0x0001849b) stacon_top_pane

0x148c,	// (0x000184a3) status_pane_ParamLimits

0x148c,	// (0x000184a3) status_pane

0x14a1,	// (0x000184b8) status_small_pane

0x14a9,	// (0x000184c0) control_pane

0x04a9,	// (0x000174c0) stacon_bottom_pane

0x14b1,	// (0x000184c8) list_single_mce_smart_pane_t1_ParamLimits

0x14b1,	// (0x000184c8) list_single_mce_smart_pane_t1

0x14c4,	// (0x000184db) list_single_mce_smart_pane_t2_ParamLimits

0x14c4,	// (0x000184db) list_single_mce_smart_pane_t2

0x0001,

0xf3e9,	// (0x00026400) list_single_mce_smart_pane_t_ParamLimits

0xf3e9,	// (0x00026400) list_single_mce_smart_pane_t

0x9ff1,	// (0x00021008) compass_pane

0x9ffd,	// (0x00021014) main_location2_pane_t1

0xa011,	// (0x00021028) main_location2_pane_t2

0xa025,	// (0x0002103c) main_location2_pane_t3

0x0003,

0xf3ee,	// (0x00026405) main_location2_pane_t

0x14e3,	// (0x000184fa) compass_pane_g1_ParamLimits

0x14e3,	// (0x000184fa) compass_pane_g1

0xa06f,	// (0x00021086) compass_pane_t1

0xa07e,	// (0x00021095) compass_pane_t2

0x0005,

0xf3f7,	// (0x0002640e) compass_pane_t

0xa0c9,	// (0x000210e0) text_secondary_cp61

0x14f7,	// (0x0001850e) navi_pane_cams_g5

0x151a,	// (0x00018531) navi_pane_im_t1

0x1528,	// (0x0001853f) navi_pane_mp_g1_ParamLimits

0x1528,	// (0x0001853f) navi_pane_mp_g1

0x153c,	// (0x00018553) navi_pane_mp_g2_ParamLimits

0x153c,	// (0x00018553) navi_pane_mp_g2

0x1548,	// (0x0001855f) navi_pane_mp_g3_ParamLimits

0x1548,	// (0x0001855f) navi_pane_mp_g3

0x0002,

0xf40b,	// (0x00026422) navi_pane_mp_g_ParamLimits

0xf40b,	// (0x00026422) navi_pane_mp_g

0x1554,	// (0x0001856b) navi_pane_mp_t1

0x1562,	// (0x00018579) navi_pane_mp_t2

0x0002,

0xf412,	// (0x00026429) navi_pane_mp_t

0x159e,	// (0x000185b5) navi_pane_vt_g1

0x1554,	// (0x0001856b) navi_pane_vt_t1

0x15a6,	// (0x000185bd) navi_slider_pane

0x15ae,	// (0x000185c5) zooming_pane

0x15b6,	// (0x000185cd) navi_slider_pane_g1

0x70be,	// (0x0001e0d5) navi_slider_pane_g2

0x0006,

0xf419,	// (0x00026430) navi_slider_pane_g

0x15ec,	// (0x00018603) aid_levels_zoom

0x15f4,	// (0x0001860b) zooming_pane_g1

0x15fc,	// (0x00018613) zooming_pane_g2

0x15fc,	// (0x00018613) zooming_pane_g3

0x0002,

0xf428,	// (0x0002643f) zooming_pane_g

0x1604,	// (0x0001861b) level_10_zoom

0x160d,	// (0x00018624) level_11_zoom

0x1616,	// (0x0001862d) level_1_zoom

0x161f,	// (0x00018636) level_2_zoom

0x1628,	// (0x0001863f) level_3_zoom

0x1631,	// (0x00018648) level_4_zoom

0x163a,	// (0x00018651) level_5_zoom

0x1643,	// (0x0001865a) level_6_zoom

0x164c,	// (0x00018663) level_7_zoom

0x1655,	// (0x0001866c) level_8_zoom

0x165e,	// (0x00018675) level_9_zoom

0x166f,	// (0x00018686) popup_phob_thumbnail_window_g1

0x1677,	// (0x0001868e) popup_phob_thumbnail_window_g2

0x0001,

0xf42f,	// (0x00026446) popup_phob_thumbnail_window_g

0x29f4,	// (0x00019a0b) level_1_location

0x29fc,	// (0x00019a13) level_2_location

0x2a04,	// (0x00019a1b) level_3_location

0x2a0c,	// (0x00019a23) level_4_location

0x15ae,	// (0x000185c5) level_5_location

0xa1f6,	// (0x0002120d) mce_icon_pane_g1

0xa1fe,	// (0x00021215) mce_icon_pane_g2

0x0001,

0xf434,	// (0x0002644b) mce_icon_pane_g

0xa206,	// (0x0002121d) main_mup_pane_g1_ParamLimits

0xa206,	// (0x0002121d) main_mup_pane_g1

0xa21e,	// (0x00021235) main_mup_pane_g2_ParamLimits

0xa21e,	// (0x00021235) main_mup_pane_g2

0xa23a,	// (0x00021251) main_mup_pane_g3_ParamLimits

0xa23a,	// (0x00021251) main_mup_pane_g3

0xa256,	// (0x0002126d) main_mup_pane_g4_ParamLimits

0xa256,	// (0x0002126d) main_mup_pane_g4

0xa272,	// (0x00021289) main_mup_pane_g5_ParamLimits

0xa272,	// (0x00021289) main_mup_pane_g5

0xa293,	// (0x000212aa) main_mup_pane_g6_ParamLimits

0xa293,	// (0x000212aa) main_mup_pane_g6

0xa2af,	// (0x000212c6) main_mup_pane_g7_ParamLimits

0xa2af,	// (0x000212c6) main_mup_pane_g7

0xa2cb,	// (0x000212e2) main_mup_pane_g8_ParamLimits

0xa2cb,	// (0x000212e2) main_mup_pane_g8

0xa2e7,	// (0x000212fe) main_mup_pane_g9_ParamLimits

0xa2e7,	// (0x000212fe) main_mup_pane_g9

0xa306,	// (0x0002131d) main_mup_pane_g10_ParamLimits

0xa306,	// (0x0002131d) main_mup_pane_g10

0xa325,	// (0x0002133c) main_mup_pane_g11_ParamLimits

0xa325,	// (0x0002133c) main_mup_pane_g11

0xa33d,	// (0x00021354) main_mup_pane_g12_ParamLimits

0xa33d,	// (0x00021354) main_mup_pane_g12

0xa34b,	// (0x00021362) main_mup_pane_g13_ParamLimits

0xa34b,	// (0x00021362) main_mup_pane_g13

0x000c,

0xf439,	// (0x00026450) main_mup_pane_g_ParamLimits

0xf439,	// (0x00026450) main_mup_pane_g

0xa361,	// (0x00021378) main_mup_pane_t1_ParamLimits

0xa361,	// (0x00021378) main_mup_pane_t1

0xa37e,	// (0x00021395) main_mup_pane_t2_ParamLimits

0xa37e,	// (0x00021395) main_mup_pane_t2

0xa398,	// (0x000213af) main_mup_pane_t3_ParamLimits

0xa398,	// (0x000213af) main_mup_pane_t3

0xa3b2,	// (0x000213c9) main_mup_pane_t4_ParamLimits

0xa3b2,	// (0x000213c9) main_mup_pane_t4

0xa3c4,	// (0x000213db) main_mup_pane_t5_ParamLimits

0xa3c4,	// (0x000213db) main_mup_pane_t5

0xa3d6,	// (0x000213ed) main_mup_pane_t6_ParamLimits

0xa3d6,	// (0x000213ed) main_mup_pane_t6

0x0005,

0xf454,	// (0x0002646b) main_mup_pane_t_ParamLimits

0xf454,	// (0x0002646b) main_mup_pane_t

0xa3ec,	// (0x00021403) mup_progress_pane_ParamLimits

0xa3ec,	// (0x00021403) mup_progress_pane

0xa3f8,	// (0x0002140f) mup_visualizer_pane_ParamLimits

0xa3f8,	// (0x0002140f) mup_visualizer_pane

0xa436,	// (0x0002144d) mup_volume_pane_ParamLimits

0xa436,	// (0x0002144d) mup_volume_pane

0x167f,	// (0x00018696) mup_visualizer_pane_g1_ParamLimits

0x167f,	// (0x00018696) mup_visualizer_pane_g1

0x167f,	// (0x00018696) mup_visualizer_pane_g2_ParamLimits

0x167f,	// (0x00018696) mup_visualizer_pane_g2

0x14e3,	// (0x000184fa) mup_visualizer_pane_g3_ParamLimits

0x14e3,	// (0x000184fa) mup_visualizer_pane_g3

0x0002,

0xf461,	// (0x00026478) mup_visualizer_pane_g_ParamLimits

0xf461,	// (0x00026478) mup_visualizer_pane_g

0x08b6,	// (0x000178cd) mup_volume_pane_g1

0x1695,	// (0x000186ac) mup_volume_pane_g2

0x0001,

0xf468,	// (0x0002647f) mup_volume_pane_g

0x08b6,	// (0x000178cd) mup_progress_pane_g1

0x169e,	// (0x000186b5) mup_progress_pane_g2

0x16a7,	// (0x000186be) mup_progress_pane_g3

0x0002,

0xf46d,	// (0x00026484) mup_progress_pane_g

0x04a9,	// (0x000174c0) bg_popup_window_pane_cp05

0x16b0,	// (0x000186c7) heading_pane_cp02_ParamLimits

0x16b0,	// (0x000186c7) heading_pane_cp02

0x16ca,	// (0x000186e1) list_popup_blid_pane

0x16d2,	// (0x000186e9) list_blid_sat_info_pane_ParamLimits

0x16d2,	// (0x000186e9) list_blid_sat_info_pane

0x16e5,	// (0x000186fc) list_blid_sat_info_pane_g1

0x16ed,	// (0x00018704) list_blid_sat_info_pane_t1

0xa541,	// (0x00021558) mup_equalizer_pane_ParamLimits

0xa541,	// (0x00021558) mup_equalizer_pane

0xa562,	// (0x00021579) mup_equalizer_pane_cp1_ParamLimits

0xa562,	// (0x00021579) mup_equalizer_pane_cp1

0xa583,	// (0x0002159a) mup_equalizer_pane_cp2_ParamLimits

0xa583,	// (0x0002159a) mup_equalizer_pane_cp2

0xa5a4,	// (0x000215bb) mup_equalizer_pane_cp3_ParamLimits

0xa5a4,	// (0x000215bb) mup_equalizer_pane_cp3

0xa5c5,	// (0x000215dc) mup_equalizer_pane_cp4_ParamLimits

0xa5c5,	// (0x000215dc) mup_equalizer_pane_cp4

0xa5e6,	// (0x000215fd) mup_equalizer_pane_cp5

0xa5fc,	// (0x00021613) mup_equalizer_pane_cp6

0xa614,	// (0x0002162b) mup_equalizer_pane_cp7

0x2912,	// (0x00019929) bg_popup_call_poc_act_pane_g9

0x291a,	// (0x00019931) bg_popup_call_poc_act_pane_g10

0x2922,	// (0x00019939) bg_popup_call_poc_act_pane_g11

0x000a,

0x0704,	// (0x0001771b) mup_scale_pane

0x08b6,	// (0x000178cd) mup_scale_pane_g1

0x16fb,	// (0x00018712) mup_scale_pane_g2

0x0006,

0xf489,	// (0x000264a0) mup_scale_pane_g

0x171f,	// (0x00018736) msg_data_pane

0x1727,	// (0x0001873e) scroll_pane_cp017

0xa63e,	// (0x00021655) bg_list_pane_cp04_ParamLimits

0xa63e,	// (0x00021655) bg_list_pane_cp04

0x172f,	// (0x00018746) msg_data_pane_g1

0xa65e,	// (0x00021675) msg_data_pane_g2

0x9ed7,	// (0x00020eee) msg_data_pane_g3

0xa666,	// (0x0002167d) msg_data_pane_g4

0xa66e,	// (0x00021685) msg_data_pane_g5

0xa676,	// (0x0002168d) msg_data_pane_g6

0xa67e,	// (0x00021695) msg_data_pane_g7

0x0006,

0xf498,	// (0x000264af) msg_data_pane_g

0xa686,	// (0x0002169d) msg_text_pane_ParamLimits

0xa686,	// (0x0002169d) msg_text_pane

0xa6d7,	// (0x000216ee) qrid_highlight_pane_cp011_ParamLimits

0xa6d7,	// (0x000216ee) qrid_highlight_pane_cp011

0x04a9,	// (0x000174c0) msg_body_pane

0x04a9,	// (0x000174c0) msg_header_pane

0x1740,	// (0x00018757) input_focus_pane_cp07

0xa701,	// (0x00021718) msg_header_pane_t1_ParamLimits

0xa701,	// (0x00021718) msg_header_pane_t1

0x1755,	// (0x0001876c) msg_header_pane_t2_ParamLimits

0x1755,	// (0x0001876c) msg_header_pane_t2

0x0001,

0xf4ac,	// (0x000264c3) msg_header_pane_t_ParamLimits

0xf4ac,	// (0x000264c3) msg_header_pane_t

0x1767,	// (0x0001877e) msg_body_pane_g1

0xa715,	// (0x0002172c) msg_body_pane_t1_ParamLimits

0xa715,	// (0x0002172c) msg_body_pane_t1

0x176f,	// (0x00018786) msg_body_pane_t2_ParamLimits

0x176f,	// (0x00018786) msg_body_pane_t2

0x1781,	// (0x00018798) msg_body_pane_t3_ParamLimits

0x1781,	// (0x00018798) msg_body_pane_t3

0x0002,

0xf4b1,	// (0x000264c8) msg_body_pane_t_ParamLimits

0xf4b1,	// (0x000264c8) msg_body_pane_t

0x7100,	// (0x0001e117) main_viewer_pane_g1_ParamLimits

0x7100,	// (0x0001e117) main_viewer_pane_g1

0x710c,	// (0x0001e123) main_viewer_pane_g2_ParamLimits

0x710c,	// (0x0001e123) main_viewer_pane_g2

0xa768,	// (0x0002177f) main_viewer_pane_g3_ParamLimits

0xa768,	// (0x0002177f) main_viewer_pane_g3

0xa779,	// (0x00021790) main_viewer_pane_g4_ParamLimits

0xa779,	// (0x00021790) main_viewer_pane_g4

0x7118,	// (0x0001e12f) main_viewer_pane_g5_ParamLimits

0x7118,	// (0x0001e12f) main_viewer_pane_g5

0x7118,	// (0x0001e12f) main_viewer_pane_g7_ParamLimits

0x7118,	// (0x0001e12f) main_viewer_pane_g7

0x712a,	// (0x0001e141) main_viewer_pane_g8_ParamLimits

0x712a,	// (0x0001e141) main_viewer_pane_g8

0x0007,

0xf4c1,	// (0x000264d8) main_viewer_pane_g_ParamLimits

0xf4c1,	// (0x000264d8) main_viewer_pane_g

0x17d5,	// (0x000187ec) viewer_content_pane_ParamLimits

0x17d5,	// (0x000187ec) viewer_content_pane

0xa7aa,	// (0x000217c1) main_postcard_pane_g1_ParamLimits

0xa7aa,	// (0x000217c1) main_postcard_pane_g1

0xa7b8,	// (0x000217cf) main_postcard_pane_g2_ParamLimits

0xa7b8,	// (0x000217cf) main_postcard_pane_g2

0xa7c6,	// (0x000217dd) main_postcard_pane_g3_ParamLimits

0xa7c6,	// (0x000217dd) main_postcard_pane_g3

0x0005,

0xf4d2,	// (0x000264e9) main_postcard_pane_g_ParamLimits

0xf4d2,	// (0x000264e9) main_postcard_pane_g

0xa7d6,	// (0x000217ed) main_postcard_pane_g4

0x2b14,	// (0x00019b2b) smil_status_volume_pane_g2

0xa802,	// (0x00021819) postcard_pane_ParamLimits

0xa802,	// (0x00021819) postcard_pane

0x167f,	// (0x00018696) postcard_pane_g1_ParamLimits

0x167f,	// (0x00018696) postcard_pane_g1

0xa834,	// (0x0002184b) postcard_pane_g2_ParamLimits

0xa834,	// (0x0002184b) postcard_pane_g2

0xa840,	// (0x00021857) postcard_pane_g3_ParamLimits

0xa840,	// (0x00021857) postcard_pane_g3

0x17f1,	// (0x00018808) postcard_pane_g4_ParamLimits

0x17f1,	// (0x00018808) postcard_pane_g4

0xa84c,	// (0x00021863) postcard_pane_g5_ParamLimits

0xa84c,	// (0x00021863) postcard_pane_g5

0xa858,	// (0x0002186f) postcard_pane_g6_ParamLimits

0xa858,	// (0x0002186f) postcard_pane_g6

0x17e3,	// (0x000187fa) postcard_pane_g7_ParamLimits

0x17e3,	// (0x000187fa) postcard_pane_g7

0x0006,

0xf4df,	// (0x000264f6) postcard_pane_g_ParamLimits

0xf4df,	// (0x000264f6) postcard_pane_g

0xa864,	// (0x0002187b) main_mp2_pane_g1_ParamLimits

0xa864,	// (0x0002187b) main_mp2_pane_g1

0xa870,	// (0x00021887) main_mp2_pane_g2_ParamLimits

0xa870,	// (0x00021887) main_mp2_pane_g2

0xa87c,	// (0x00021893) main_mp2_pane_g3_ParamLimits

0xa87c,	// (0x00021893) main_mp2_pane_g3

0x0002,

0xf4ee,	// (0x00026505) main_mp2_pane_g_ParamLimits

0xf4ee,	// (0x00026505) main_mp2_pane_g

0xa888,	// (0x0002189f) main_mp2_pane_t1_ParamLimits

0xa888,	// (0x0002189f) main_mp2_pane_t1

0xa89f,	// (0x000218b6) main_mp2_pane_t2_ParamLimits

0xa89f,	// (0x000218b6) main_mp2_pane_t2

0xa8b1,	// (0x000218c8) main_mp2_pane_t3_ParamLimits

0xa8b1,	// (0x000218c8) main_mp2_pane_t3

0x0002,

0xf4f5,	// (0x0002650c) main_mp2_pane_t_ParamLimits

0xf4f5,	// (0x0002650c) main_mp2_pane_t

0x17ff,	// (0x00018816) pec_content_pane_ParamLimits

0x17ff,	// (0x00018816) pec_content_pane

0x0d4c,	// (0x00017d63) scroll_pane_cp015

0x1811,	// (0x00018828) pec_attribute_pane_ParamLimits

0x1811,	// (0x00018828) pec_attribute_pane

0xa8c3,	// (0x000218da) pec_content_pane_g1_ParamLimits

0xa8c3,	// (0x000218da) pec_content_pane_g1

0x1821,	// (0x00018838) pec_content_pane_t1_ParamLimits

0x1821,	// (0x00018838) pec_content_pane_t1

0x1833,	// (0x0001884a) pec_content_pane_t2_ParamLimits

0x1833,	// (0x0001884a) pec_content_pane_t2

0x0001,

0xf4fc,	// (0x00026513) pec_content_pane_t_ParamLimits

0xf4fc,	// (0x00026513) pec_content_pane_t

0xa8cf,	// (0x000218e6) list_single_graphic_pane_cp01_ParamLimits

0xa8cf,	// (0x000218e6) list_single_graphic_pane_cp01

0x0704,	// (0x0001771b) bg_popup_sub_pane_cp04

0x1845,	// (0x0001885c) popup_mup_playback_window_g1

0x1851,	// (0x00018868) popup_mup_playback_window_t1

0x1866,	// (0x0001887d) popup_mup_playback_window_t2

0x0001,

0xf501,	// (0x00026518) popup_mup_playback_window_t

0x189d,	// (0x000188b4) main_image_pane_g1_ParamLimits

0x189d,	// (0x000188b4) main_image_pane_g1

0x18e0,	// (0x000188f7) scroll_pane_cp018_ParamLimits

0x18e0,	// (0x000188f7) scroll_pane_cp018

0x18f8,	// (0x0001890f) scroll_pane_cp016_ParamLimits

0x18f8,	// (0x0001890f) scroll_pane_cp016

0xa973,	// (0x0002198a) smil2_image_pane_ParamLimits

0xa973,	// (0x0002198a) smil2_image_pane

0xa9a7,	// (0x000219be) smil2_root_pane_ParamLimits

0xa9a7,	// (0x000219be) smil2_root_pane

0xa9d3,	// (0x000219ea) smil2_text_pane_ParamLimits

0xa9d3,	// (0x000219ea) smil2_text_pane

0x04a9,	// (0x000174c0) bg_list_pane_cp06

0x1934,	// (0x0001894b) grid_radio_pane

0x04a9,	// (0x000174c0) bg_popup_window_pane_cp06

0x193c,	// (0x00018953) main_fmradio_pane_t1

0x1331,	// (0x00018348) heading_pane_cp04

0x194a,	// (0x00018961) main_fmradio_pane_t2

0x292a,	// (0x00019941) popup_cale_lunar_info_window_g1

0x1958,	// (0x0001896f) main_fmradio_pane_t3

0x2932,	// (0x00019949) popup_cale_lunar_info_window_g2

0x1966,	// (0x0001897d) main_fmradio_pane_t4

0x0001,

0x1974,	// (0x0001898b) main_fmradio_pane_t5

0x0004,

0xf5dc,	// (0x000265f3) popup_cale_lunar_info_window_g

0xf516,	// (0x0002652d) main_fmradio_pane_t

0x1982,	// (0x00018999) wait_bar_pane_cp03

0x198a,	// (0x000189a1) cell_fmradio_pane_ParamLimits

0x198a,	// (0x000189a1) cell_fmradio_pane

0x17e3,	// (0x000187fa) cell_fmradio_pane_g1_ParamLimits

0x17e3,	// (0x000187fa) cell_fmradio_pane_g1

0x04a9,	// (0x000174c0) grid_highlight_pane_cp011

0x199d,	// (0x000189b4) poc_content_pane_ParamLimits

0x199d,	// (0x000189b4) poc_content_pane

0x19af,	// (0x000189c6) scroll_pane_cp019

0xaa13,	// (0x00021a2a) popup_call_poc_act_window_ParamLimits

0xaa13,	// (0x00021a2a) popup_call_poc_act_window

0xaa20,	// (0x00021a37) popup_call_poc_inact_window_ParamLimits

0xaa20,	// (0x00021a37) popup_call_poc_inact_window

0xf5b3,	// (0x000265ca) bg_popup_call_poc_act_pane_g

0x289a,	// (0x000198b1) bg_popup_call_poc_inact_pane_g1

0x28a2,	// (0x000198b9) bg_popup_call_poc_inact_pane_g2

0x19b7,	// (0x000189ce) popup_call_poc_act_window_g2

0x28aa,	// (0x000198c1) bg_popup_call_poc_inact_pane_g3

0x28b2,	// (0x000198c9) bg_popup_call_poc_inact_pane_g4

0x28ba,	// (0x000198d1) bg_popup_call_poc_inact_pane_g5

0x19bf,	// (0x000189d6) popup_call_poc_act_window_t1_ParamLimits

0x19bf,	// (0x000189d6) popup_call_poc_act_window_t1

0x19e7,	// (0x000189fe) popup_call_poc_act_window_t2_ParamLimits

0x19e7,	// (0x000189fe) popup_call_poc_act_window_t2

0x1a0f,	// (0x00018a26) popup_call_poc_act_window_t3_ParamLimits

0x1a0f,	// (0x00018a26) popup_call_poc_act_window_t3

0x1a37,	// (0x00018a4e) popup_call_poc_act_window_t4_ParamLimits

0x1a37,	// (0x00018a4e) popup_call_poc_act_window_t4

0x0003,

0xf521,	// (0x00026538) popup_call_poc_act_window_t_ParamLimits

0xf521,	// (0x00026538) popup_call_poc_act_window_t

0x28c2,	// (0x000198d9) bg_popup_call_poc_inact_pane_g6

0x28ca,	// (0x000198e1) bg_popup_call_poc_inact_pane_g7

0x28d2,	// (0x000198e9) bg_popup_call_poc_inact_pane_g8

0x1a49,	// (0x00018a60) popup_call_poc_inact_window_g2

0x28da,	// (0x000198f1) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5a0,	// (0x000265b7) bg_popup_call_poc_inact_pane_g

0x1a51,	// (0x00018a68) popup_call_poc_inact_window_t1_ParamLimits

0x1a51,	// (0x00018a68) popup_call_poc_inact_window_t1

0x1a66,	// (0x00018a7d) popup_call_poc_inact_window_t2_ParamLimits

0x1a66,	// (0x00018a7d) popup_call_poc_inact_window_t2

0x1a7b,	// (0x00018a92) popup_call_poc_inact_window_t3_ParamLimits

0x1a7b,	// (0x00018a92) popup_call_poc_inact_window_t3

0x0002,

0xf52a,	// (0x00026541) popup_call_poc_inact_window_t_ParamLimits

0xf52a,	// (0x00026541) popup_call_poc_inact_window_t

0x2a9a,	// (0x00019ab1) context_pane_ParamLimits

0xb007,	// (0x0002201e) signal_pane_ParamLimits

0x15ae,	// (0x000185c5) main_call2_pane

0x2a88,	// (0x00019a9f) popup_phob_thumbnail2_window_ParamLimits

0x2a88,	// (0x00019a9f) popup_phob_thumbnail2_window

0x70d0,	// (0x0001e0e7) aid_hotspot_pointer_arrow_pane

0x70d8,	// (0x0001e0ef) aid_hotspot_pointer_hand_pane

0xad45,	// (0x00021d5c) phob_pre_status_pane_g5

0x8ad4,	// (0x0001faeb) cams_zoom_pane_ParamLimits

0x8ae0,	// (0x0001faf7) image_vga_pane_ParamLimits

0x8aef,	// (0x0001fb06) main_camera_pane_g1_ParamLimits

0x8afd,	// (0x0001fb14) main_camera_pane_g2_ParamLimits

0x8b0b,	// (0x0001fb22) main_camera_pane_g3_ParamLimits

0x8b17,	// (0x0001fb2e) main_camera_pane_g4_ParamLimits

0x8b23,	// (0x0001fb3a) main_camera_pane_g5_ParamLimits

0x8b2f,	// (0x0001fb46) main_camera_pane_g6_ParamLimits

0x8b3b,	// (0x0001fb52) main_camera_pane_g7_ParamLimits

0xf229,	// (0x00026240) main_camera_pane_g_ParamLimits

0x8b47,	// (0x0001fb5e) main_camera_pane_t1_ParamLimits

0x8b59,	// (0x0001fb70) main_camera_pane_t2_ParamLimits

0xf23a,	// (0x00026251) main_camera_pane_t_ParamLimits

0x0704,	// (0x0001771b) bg_popup_preview_window_pane_cp01_ParamLimits

0x0704,	// (0x0001771b) bg_popup_preview_window_pane_cp01

0x1a90,	// (0x00018aa7) popup_phob_thumbnail2_window_g1_ParamLimits

0x1a90,	// (0x00018aa7) popup_phob_thumbnail2_window_g1

0x04a9,	// (0x000174c0) call2_cli_visual_pane

0xaa3c,	// (0x00021a53) popup_call2_audio_conf_window_ParamLimits

0xaa3c,	// (0x00021a53) popup_call2_audio_conf_window

0xaa51,	// (0x00021a68) popup_call2_audio_first_window_ParamLimits

0xaa51,	// (0x00021a68) popup_call2_audio_first_window

0xaaef,	// (0x00021b06) popup_call2_audio_in_window_ParamLimits

0xaaef,	// (0x00021b06) popup_call2_audio_in_window

0xab31,	// (0x00021b48) popup_call2_audio_out_window_ParamLimits

0xab31,	// (0x00021b48) popup_call2_audio_out_window

0xab93,	// (0x00021baa) popup_call2_audio_second_window_ParamLimits

0xab93,	// (0x00021baa) popup_call2_audio_second_window

0xabf1,	// (0x00021c08) popup_call2_audio_wait_window_ParamLimits

0xabf1,	// (0x00021c08) popup_call2_audio_wait_window

0x04a9,	// (0x000174c0) bg_popup_call2_act_pane_cp03

0x06e6,	// (0x000176fd) list_conf_pane_cp

0x1a9c,	// (0x00018ab3) popup_call2_audio_conf_window_t1

0x1aaa,	// (0x00018ac1) list_single_graphic_popup_conf2_pane_ParamLimits

0x1aaa,	// (0x00018ac1) list_single_graphic_popup_conf2_pane

0x13c4,	// (0x000183db) list_highlight_pane_cp04

0x1abd,	// (0x00018ad4) list_single_graphic_popup_conf2_pane_g1

0x13d5,	// (0x000183ec) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf531,	// (0x00026548) list_single_graphic_popup_conf2_pane_g

0x1ac7,	// (0x00018ade) list_single_graphic_popup_conf2_pane_t1

0x1ad5,	// (0x00018aec) bg_popup_call2_act_pane_cp01_ParamLimits

0x1ad5,	// (0x00018aec) bg_popup_call2_act_pane_cp01

0x1b5f,	// (0x00018b76) call_type_pane_cp05_ParamLimits

0x1b5f,	// (0x00018b76) call_type_pane_cp05

0x1bb3,	// (0x00018bca) popup_call2_audio_second_window_g1_ParamLimits

0x1bb3,	// (0x00018bca) popup_call2_audio_second_window_g1

0x1c07,	// (0x00018c1e) popup_call2_audio_second_window_g2_ParamLimits

0x1c07,	// (0x00018c1e) popup_call2_audio_second_window_g2

0x0002,

0xf536,	// (0x0002654d) popup_call2_audio_second_window_g_ParamLimits

0xf536,	// (0x0002654d) popup_call2_audio_second_window_g

0x1c6c,	// (0x00018c83) popup_call2_audio_second_window_t1_ParamLimits

0x1c6c,	// (0x00018c83) popup_call2_audio_second_window_t1

0x1d27,	// (0x00018d3e) popup_call2_audio_second_window_t2_ParamLimits

0x1d27,	// (0x00018d3e) popup_call2_audio_second_window_t2

0x1d7a,	// (0x00018d91) popup_call2_audio_second_window_t3_ParamLimits

0x1d7a,	// (0x00018d91) popup_call2_audio_second_window_t3

0x0003,

0xf53d,	// (0x00026554) popup_call2_audio_second_window_t_ParamLimits

0xf53d,	// (0x00026554) popup_call2_audio_second_window_t

0x04a9,	// (0x000174c0) bg_popup_call2_in_pane_cp02

0x04b3,	// (0x000174ca) call_type_pane_cp04

0x04bb,	// (0x000174d2) popup_call2_audio_wait_window_g1

0x04c3,	// (0x000174da) popup_call2_audio_wait_window_g2

0x0001,

0xf116,	// (0x0002612d) popup_call2_audio_wait_window_g

0x04cb,	// (0x000174e2) popup_call2_audio_wait_window_t3

0x1e6d,	// (0x00018e84) bg_popup_call2_act_pane_ParamLimits

0x1e6d,	// (0x00018e84) bg_popup_call2_act_pane

0x1f2d,	// (0x00018f44) call_type_pane_cp03_ParamLimits

0x1f2d,	// (0x00018f44) call_type_pane_cp03

0x1f91,	// (0x00018fa8) popup_call2_audio_first_window_g1_ParamLimits

0x1f91,	// (0x00018fa8) popup_call2_audio_first_window_g1

0x2001,	// (0x00019018) popup_call2_audio_first_window_g2_ParamLimits

0x2001,	// (0x00019018) popup_call2_audio_first_window_g2

0x167f,	// (0x00018696) popup_call2_audio_first_window_g3_ParamLimits

0x167f,	// (0x00018696) popup_call2_audio_first_window_g3

0x0004,

0xf546,	// (0x0002655d) popup_call2_audio_first_window_g_ParamLimits

0xf546,	// (0x0002655d) popup_call2_audio_first_window_g

0x20df,	// (0x000190f6) popup_call2_audio_first_window_t1_ParamLimits

0x20df,	// (0x000190f6) popup_call2_audio_first_window_t1

0x21e2,	// (0x000191f9) popup_call2_audio_first_window_t4_ParamLimits

0x21e2,	// (0x000191f9) popup_call2_audio_first_window_t4

0x22c5,	// (0x000192dc) popup_call2_audio_first_window_t5_ParamLimits

0x22c5,	// (0x000192dc) popup_call2_audio_first_window_t5

0x0003,

0xf551,	// (0x00026568) popup_call2_audio_first_window_t_ParamLimits

0xf551,	// (0x00026568) popup_call2_audio_first_window_t

0x06fc,	// (0x00017713) bg_popup_call2_act_pane_g1

0x293a,	// (0x00019951) popup_cale_lunar_info_window_t1

0x2948,	// (0x0001995f) popup_cale_lunar_info_window_t2

0x2956,	// (0x0001996d) popup_cale_lunar_info_window_t3

0x04a9,	// (0x000174c0) bg_popup_call2_bubble_pane

0x23c6,	// (0x000193dd) bg_popup_call2_in_pane_cp01_ParamLimits

0x23c6,	// (0x000193dd) bg_popup_call2_in_pane_cp01

0x0185,	// (0x0001719c) call_type_pane_cp02

0x240e,	// (0x00019425) popup_call2_audio_out_window_g1_ParamLimits

0x240e,	// (0x00019425) popup_call2_audio_out_window_g1

0x243a,	// (0x00019451) popup_call2_audio_out_window_g2_ParamLimits

0x243a,	// (0x00019451) popup_call2_audio_out_window_g2

0x2462,	// (0x00019479) popup_call2_audio_out_window_g3_ParamLimits

0x2462,	// (0x00019479) popup_call2_audio_out_window_g3

0x0003,

0xf55a,	// (0x00026571) popup_call2_audio_out_window_g_ParamLimits

0xf55a,	// (0x00026571) popup_call2_audio_out_window_g

0x249d,	// (0x000194b4) popup_call2_audio_out_window_t1_ParamLimits

0x249d,	// (0x000194b4) popup_call2_audio_out_window_t1

0x24fc,	// (0x00019513) popup_call2_audio_out_window_t2_ParamLimits

0x24fc,	// (0x00019513) popup_call2_audio_out_window_t2

0x2550,	// (0x00019567) popup_call2_audio_out_window_t3_ParamLimits

0x2550,	// (0x00019567) popup_call2_audio_out_window_t3

0x2566,	// (0x0001957d) popup_call2_audio_out_window_t4_ParamLimits

0x2566,	// (0x0001957d) popup_call2_audio_out_window_t4

0x257c,	// (0x00019593) popup_call2_audio_out_window_t5_ParamLimits

0x257c,	// (0x00019593) popup_call2_audio_out_window_t5

0x0005,

0xf563,	// (0x0002657a) popup_call2_audio_out_window_t_ParamLimits

0xf563,	// (0x0002657a) popup_call2_audio_out_window_t

0x25e0,	// (0x000195f7) bg_popup_call2_in_pane_ParamLimits

0x25e0,	// (0x000195f7) bg_popup_call2_in_pane

0x263c,	// (0x00019653) popup_call2_audio_in_window_g1_ParamLimits

0x263c,	// (0x00019653) popup_call2_audio_in_window_g1

0x2674,	// (0x0001968b) popup_call2_audio_in_window_g2_ParamLimits

0x2674,	// (0x0001968b) popup_call2_audio_in_window_g2

0x26ac,	// (0x000196c3) popup_call2_audio_in_window_g3_ParamLimits

0x26ac,	// (0x000196c3) popup_call2_audio_in_window_g3

0x0003,

0xf570,	// (0x00026587) popup_call2_audio_in_window_g_ParamLimits

0xf570,	// (0x00026587) popup_call2_audio_in_window_g

0x2704,	// (0x0001971b) popup_call2_audio_in_window_t1_ParamLimits

0x2704,	// (0x0001971b) popup_call2_audio_in_window_t1

0x2784,	// (0x0001979b) popup_call2_audio_in_window_t2_ParamLimits

0x2784,	// (0x0001979b) popup_call2_audio_in_window_t2

0x2804,	// (0x0001981b) popup_call2_audio_in_window_t3_ParamLimits

0x2804,	// (0x0001981b) popup_call2_audio_in_window_t3

0x281e,	// (0x00019835) popup_call2_audio_in_window_t4_ParamLimits

0x281e,	// (0x00019835) popup_call2_audio_in_window_t4

0x2830,	// (0x00019847) popup_call2_audio_in_window_t5_ParamLimits

0x2830,	// (0x00019847) popup_call2_audio_in_window_t5

0x2845,	// (0x0001985c) popup_call2_audio_in_window_t6_ParamLimits

0x2845,	// (0x0001985c) popup_call2_audio_in_window_t6

0x0005,

0xf579,	// (0x00026590) popup_call2_audio_in_window_t_ParamLimits

0xf579,	// (0x00026590) popup_call2_audio_in_window_t

0x06fc,	// (0x00017713) bg_popup_call2_in_pane_g1

0x2964,	// (0x0001997b) popup_cale_lunar_info_window_t4

0x0003,

0xf5e1,	// (0x000265f8) popup_cale_lunar_info_window_t

0x0704,	// (0x0001771b) bg_popup_call2_rect_pane_ParamLimits

0x0704,	// (0x0001771b) bg_popup_call2_rect_pane

0x04a9,	// (0x000174c0) call2_cli_visual_graphic_pane

0x04a9,	// (0x000174c0) call2_cli_visual_text_pane

0x7142,	// (0x0001e159) smil_status_volume_pane_g3

0x0002,

0x08b6,	// (0x000178cd) call2_cli_visual_graphic_pane_g1

0x08b6,	// (0x000178cd) call2_cli_visual_graphic_pane_g2

0x08b6,	// (0x000178cd) call2_cli_visual_graphic_pane_g3

0x0002,

0xf586,	// (0x0002659d) call2_cli_visual_graphic_pane_g

0x285a,	// (0x00019871) bg_popup_call2_rect_pane_g1

0x095e,	// (0x00017975) bg_popup_call2_rect_pane_g2

0x2862,	// (0x00019879) bg_popup_call2_rect_pane_g3

0x286a,	// (0x00019881) bg_popup_call2_rect_pane_g4

0x2872,	// (0x00019889) bg_popup_call2_rect_pane_g5

0x287a,	// (0x00019891) bg_popup_call2_rect_pane_g6

0x2882,	// (0x00019899) bg_popup_call2_rect_pane_g7

0x288a,	// (0x000198a1) bg_popup_call2_rect_pane_g8

0x2892,	// (0x000198a9) bg_popup_call2_rect_pane_g9

0x0008,

0xf58d,	// (0x000265a4) bg_popup_call2_rect_pane_g

0x289a,	// (0x000198b1) bg_popup_call2_bubble_pane_g1

0x28a2,	// (0x000198b9) bg_popup_call2_bubble_pane_g2

0x28aa,	// (0x000198c1) bg_popup_call2_bubble_pane_g3

0x28b2,	// (0x000198c9) bg_popup_call2_bubble_pane_g4

0x28ba,	// (0x000198d1) bg_popup_call2_bubble_pane_g5

0x28c2,	// (0x000198d9) bg_popup_call2_bubble_pane_g6

0x28ca,	// (0x000198e1) bg_popup_call2_bubble_pane_g7

0x28d2,	// (0x000198e9) bg_popup_call2_bubble_pane_g8

0x28da,	// (0x000198f1) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5a0,	// (0x000265b7) bg_popup_call2_bubble_pane_g

0x87c9,	// (0x0001f7e0) aid_cale_week_size_cell_pane

0x8b6b,	// (0x0001fb82) aid_cams_cif_uncrop_pane_ParamLimits

0x8b6b,	// (0x0001fb82) aid_cams_cif_uncrop_pane

0x8cce,	// (0x0001fce5) aid_cams_size_cell_ParamLimits

0x8cce,	// (0x0001fce5) aid_cams_size_cell

0x8cda,	// (0x0001fcf1) grid_cams_pane_ParamLimits

0x8ce8,	// (0x0001fcff) linegrid_cams_pane_ParamLimits

0x8e15,	// (0x0001fe2c) call_video_pane_t1

0x8e36,	// (0x0001fe4d) call_video_pane_t2

0x0001,

0xf28d,	// (0x000262a4) call_video_pane_t

0x93b6,	// (0x000203cd) aid_cale_month_size_cell_pane_ParamLimits

0x93b6,	// (0x000203cd) aid_cale_month_size_cell_pane

0xf62a,	// (0x00026641) smil_status_volume_pane_g

0x714f,	// (0x0001e166) volume_smil_pane_ParamLimits

0x002c,	// (0x00017043) aid_popup2_width_pane

0x86d4,	// (0x0001f6eb) cell_qdial_pane_g4_ParamLimits

0x86d4,	// (0x0001f6eb) cell_qdial_pane_g4

0xa04b,	// (0x00021062) aid_blid_cardinal_pane_ParamLimits

0xa05b,	// (0x00021072) aid_blid_destination_pane_ParamLimits

0xa05b,	// (0x00021072) aid_blid_destination_pane

0x0704,	// (0x0001771b) bg_popup_call_poc_act_pane_ParamLimits

0x0704,	// (0x0001771b) bg_popup_call_poc_act_pane

0x0704,	// (0x0001771b) bg_popup_call_poc_inact_pane_ParamLimits

0x0704,	// (0x0001771b) bg_popup_call_poc_inact_pane

0x28ea,	// (0x00019901) bg_popup_call_poc_act_pane_g1

0x28f2,	// (0x00019909) bg_popup_call_poc_act_pane_g2

0x28fa,	// (0x00019911) bg_popup_call_poc_act_pane_g3

0x28b2,	// (0x000198c9) bg_popup_call_poc_act_pane_g4

0x28ba,	// (0x000198d1) bg_popup_call_poc_act_pane_g5

0x2902,	// (0x00019919) bg_popup_call_poc_act_pane_g6

0x28ca,	// (0x000198e1) bg_popup_call_poc_act_pane_g7

0x290a,	// (0x00019921) bg_popup_call_poc_act_pane_g8

0x04a9,	// (0x000174c0) main_usb_pane

0x2a63,	// (0x00019a7a) popup_cale_lunar_info_window

0x9155,	// (0x0002016c) im_reading_pane_t1_ParamLimits

0x0ca4,	// (0x00017cbb) list_im_pane_ParamLimits

0x0cb5,	// (0x00017ccc) scroll_pane_cp07_ParamLimits

0x04a9,	// (0x000174c0) grid_highlight_pane_cp012

0x0704,	// (0x0001771b) mup_scale_pane_ParamLimits

0x167f,	// (0x00018696) main_usb_pane_g1_ParamLimits

0x167f,	// (0x00018696) main_usb_pane_g1

0xac68,	// (0x00021c7f) main_usb_pane_g2_ParamLimits

0xac68,	// (0x00021c7f) main_usb_pane_g2

0x0001,

0xf5ca,	// (0x000265e1) main_usb_pane_g_ParamLimits

0xf5ca,	// (0x000265e1) main_usb_pane_g

0xac74,	// (0x00021c8b) main_usb_pane_t1_ParamLimits

0xac74,	// (0x00021c8b) main_usb_pane_t1

0xac86,	// (0x00021c9d) main_usb_pane_t2_ParamLimits

0xac86,	// (0x00021c9d) main_usb_pane_t2

0xac98,	// (0x00021caf) main_usb_pane_t3_ParamLimits

0xac98,	// (0x00021caf) main_usb_pane_t3

0xacaa,	// (0x00021cc1) main_usb_pane_t4_ParamLimits

0xacaa,	// (0x00021cc1) main_usb_pane_t4

0xacbc,	// (0x00021cd3) main_usb_pane_t5_ParamLimits

0xacbc,	// (0x00021cd3) main_usb_pane_t5

0xacce,	// (0x00021ce5) main_usb_pane_t6_ParamLimits

0xacce,	// (0x00021ce5) main_usb_pane_t6

0x0005,

0xf5cf,	// (0x000265e6) main_usb_pane_t_ParamLimits

0x9ff1,	// (0x00021008) aid_text_placing

0x9ffd,	// (0x00021014) main_location2_pane_t1_ParamLimits

0xa011,	// (0x00021028) main_location2_pane_t2_ParamLimits

0xa025,	// (0x0002103c) main_location2_pane_t3_ParamLimits

0xa039,	// (0x00021050) main_location2_pane_t4_ParamLimits

0xa039,	// (0x00021050) main_location2_pane_t4

0xf3ee,	// (0x00026405) main_location2_pane_t_ParamLimits

0x0748,	// (0x0001775f) find_pinb_pane_g2_ParamLimits

0x0748,	// (0x0001775f) find_pinb_pane_g2

0x0001,

0xf13c,	// (0x00026153) find_pinb_pane_g_ParamLimits

0xf13c,	// (0x00026153) find_pinb_pane_g

0x0754,	// (0x0001776b) find_pinb_pane_t1_ParamLimits

0x0766,	// (0x0001777d) find_pinb_pane_t2_ParamLimits

0xf141,	// (0x00026158) find_pinb_pane_t_ParamLimits

0x04a9,	// (0x000174c0) main_call3_pane

0x97ce,	// (0x000207e5) cale_month_day_heading_pane_t1_ParamLimits

0x982c,	// (0x00020843) cale_month_day_heading_pane_t2_ParamLimits

0x9891,	// (0x000208a8) cale_month_day_heading_pane_t3_ParamLimits

0x98f6,	// (0x0002090d) cale_month_day_heading_pane_t4_ParamLimits

0x995b,	// (0x00020972) cale_month_day_heading_pane_t5_ParamLimits

0x99c0,	// (0x000209d7) cale_month_day_heading_pane_t6_ParamLimits

0x9a2d,	// (0x00020a44) cale_month_day_heading_pane_t7_ParamLimits

0xf2c5,	// (0x000262dc) cale_month_day_heading_pane_t_ParamLimits

0x0f2b,	// (0x00017f42) smil_status_volume_pane

0xa81c,	// (0x00021833) postcard_address_pane_ParamLimits

0xa81c,	// (0x00021833) postcard_address_pane

0xa828,	// (0x0002183f) postcard_message_pane_ParamLimits

0xa828,	// (0x0002183f) postcard_message_pane

0xac30,	// (0x00021c47) call2_cli_visual_pane_t1_ParamLimits

0xac30,	// (0x00021c47) call2_cli_visual_pane_t1

0xb1f7,	// (0x0002220e) postcard_message_pane_t1_ParamLimits

0xb1f7,	// (0x0002220e) postcard_message_pane_t1

0xb1e0,	// (0x000221f7) postcard_address_pane_t1_ParamLimits

0xb1e0,	// (0x000221f7) postcard_address_pane_t1

0xb1d1,	// (0x000221e8) popup_call3_audio_in_window_ParamLimits

0xb1d1,	// (0x000221e8) popup_call3_audio_in_window

0xb0b9,	// (0x000220d0) bg_popup_call3_in_pane_ParamLimits

0xb0b9,	// (0x000220d0) bg_popup_call3_in_pane

0xb117,	// (0x0002212e) popup_call3_audio_in_window_g1_ParamLimits

0xb117,	// (0x0002212e) popup_call3_audio_in_window_g1

0xb12f,	// (0x00022146) popup_call3_audio_in_window_g2_ParamLimits

0xb12f,	// (0x00022146) popup_call3_audio_in_window_g2

0xb147,	// (0x0002215e) popup_call3_audio_in_window_g3_ParamLimits

0xb147,	// (0x0002215e) popup_call3_audio_in_window_g3

0x0003,

0xf631,	// (0x00026648) popup_call3_audio_in_window_g_ParamLimits

0xf631,	// (0x00026648) popup_call3_audio_in_window_g

0xb16f,	// (0x00022186) popup_call3_audio_in_window_t1_ParamLimits

0xb16f,	// (0x00022186) popup_call3_audio_in_window_t1

0xb197,	// (0x000221ae) popup_call3_audio_in_window_t2_ParamLimits

0xb197,	// (0x000221ae) popup_call3_audio_in_window_t2

0xb1bf,	// (0x000221d6) popup_call3_audio_in_window_t3_ParamLimits

0xb1bf,	// (0x000221d6) popup_call3_audio_in_window_t3

0x0002,

0xf63a,	// (0x00026651) popup_call3_audio_in_window_t_ParamLimits

0xf63a,	// (0x00026651) popup_call3_audio_in_window_t

0x15ae,	// (0x000185c5) bg_popup_call3_rect_pane

0x285a,	// (0x00019871) bg_popup_call3_rect_pane_g1

0x095e,	// (0x00017975) bg_popup_call3_rect_pane_g2

0x2862,	// (0x00019879) bg_popup_call3_rect_pane_g3

0x286a,	// (0x00019881) bg_popup_call3_rect_pane_g4

0x2872,	// (0x00019889) bg_popup_call3_rect_pane_g5

0x287a,	// (0x00019891) bg_popup_call3_rect_pane_g6

0x2882,	// (0x00019899) bg_popup_call3_rect_pane_g7

0xa451,	// (0x00021468) mup_visualizer_osc_pane

0x168d,	// (0x000186a4) mup_visualizer_spec_pane

0xb0d9,	// (0x000220f0) call3_video_qcif_pane_ParamLimits

0xb0d9,	// (0x000220f0) call3_video_qcif_pane

0xb0e9,	// (0x00022100) call3_video_qcif_uncrop_pane_ParamLimits

0xb0e9,	// (0x00022100) call3_video_qcif_uncrop_pane

0xb0f5,	// (0x0002210c) call3_video_subqcif_pane_ParamLimits

0xb0f5,	// (0x0002210c) call3_video_subqcif_pane

0xb107,	// (0x0002211e) call3_video_subqcif_uncrop_pane_ParamLimits

0xb107,	// (0x0002211e) call3_video_subqcif_uncrop_pane

0xb15f,	// (0x00022176) popup_call3_audio_in_window_g4_ParamLimits

0xb15f,	// (0x00022176) popup_call3_audio_in_window_g4

0xb0a6,	// (0x000220bd) mup_spec_half_pane

0xb0af,	// (0x000220c6) mup_spec_half_pane_cp

0x2afa,	// (0x00019b11) mup_osc_middle_pane

0x2b03,	// (0x00019b1a) mup_visualizer_osc_pane_g1

0xb087,	// (0x0002209e) mup_spec_bar_pane_ParamLimits

0xb087,	// (0x0002209e) mup_spec_bar_pane

0x2ae7,	// (0x00019afe) mup_spec_bar_pane_g1

0x2af1,	// (0x00019b08) mup_spec_bar_pane_g2

0x0001,

0xf625,	// (0x0002663c) mup_spec_bar_pane_g

0x87c9,	// (0x0001f7e0) aid_cale_week_size_cell_pane_ParamLimits

0x87dc,	// (0x0001f7f3) bg_cale_heading_pane_ParamLimits

0x09da,	// (0x000179f1) bg_cale_pane_cp01_ParamLimits

0x87f8,	// (0x0001f80f) cale_week_corner_pane_ParamLimits

0x8809,	// (0x0001f820) cale_week_day_heading_pane_ParamLimits

0x8825,	// (0x0001f83c) cale_week_scroll_pane_g1_ParamLimits

0x883e,	// (0x0001f855) cale_week_scroll_pane_g2_ParamLimits

0x884f,	// (0x0001f866) cale_week_scroll_pane_g3_ParamLimits

0x8860,	// (0x0001f877) cale_week_scroll_pane_g4_ParamLimits

0x8871,	// (0x0001f888) cale_week_scroll_pane_g5_ParamLimits

0x8882,	// (0x0001f899) cale_week_scroll_pane_g6_ParamLimits

0x8893,	// (0x0001f8aa) cale_week_scroll_pane_g7_ParamLimits

0x88a6,	// (0x0001f8bd) cale_week_scroll_pane_g8_ParamLimits

0x88b9,	// (0x0001f8d0) cale_week_scroll_pane_g9_ParamLimits

0x88ca,	// (0x0001f8e1) cale_week_scroll_pane_g10_ParamLimits

0x88db,	// (0x0001f8f2) cale_week_scroll_pane_g11_ParamLimits

0x88ec,	// (0x0001f903) cale_week_scroll_pane_g12_ParamLimits

0x8905,	// (0x0001f91c) cale_week_scroll_pane_g13_ParamLimits

0x891e,	// (0x0001f935) cale_week_scroll_pane_g14_ParamLimits

0x8937,	// (0x0001f94e) cale_week_scroll_pane_g15_ParamLimits

0xf1cd,	// (0x000261e4) cale_week_scroll_pane_g_ParamLimits

0x8950,	// (0x0001f967) cale_week_time_pane_ParamLimits

0x8963,	// (0x0001f97a) grid_cale_week_pane_ParamLimits

0x09f3,	// (0x00017a0a) listscroll_cale_week_pane_t1

0x8980,	// (0x0001f997) scroll_pane_cp08_ParamLimits

0x9407,	// (0x0002041e) cale_month_corner_pane_ParamLimits

0x0ecb,	// (0x00017ee2) cale_month_pane_t1

0x977d,	// (0x00020794) cale_month_week_pane_ParamLimits

0x167f,	// (0x00018696) popup_call_status_window_g1_ParamLimits

0x9e9c,	// (0x00020eb3) popup_call_status_window_g2_ParamLimits

0x9ea8,	// (0x00020ebf) popup_call_status_window_g3_ParamLimits

0xf375,	// (0x0002638c) popup_call_status_window_g_ParamLimits

0x12ba,	// (0x000182d1) aid_call2_pane

0xa6f3,	// (0x0002170a) msg_header_pane_g1

0xa81c,	// (0x00021833) postcard_address2_pane_ParamLimits

0xa81c,	// (0x00021833) postcard_address2_pane

0xa828,	// (0x0002183f) postcard_message2_pane_ParamLimits

0xa828,	// (0x0002183f) postcard_message2_pane

0xb015,	// (0x0002202c) message2_row_pane_ParamLimits

0xb015,	// (0x0002202c) message2_row_pane

0xb032,	// (0x00022049) address2_row_pane_ParamLimits

0xb032,	// (0x00022049) address2_row_pane

0x2ab5,	// (0x00019acc) postcard_message2_row_pane_g1

0x2abd,	// (0x00019ad4) postcard_message2_row_pane_t1

0x2ab5,	// (0x00019acc) address2_row_pane_g1

0x2abd,	// (0x00019ad4) address2_row_pane_t1

0x6f8b,	// (0x0001dfa2) aid_size_cell_vorec

0x04a9,	// (0x000174c0) main_rss_pane

0xb045,	// (0x0002205c) rss_list_single_pane_ParamLimits

0xb045,	// (0x0002205c) rss_list_single_pane

0x2acb,	// (0x00019ae2) rss_list_single_pane_t1

0x2ad9,	// (0x00019af0) rss_list_single_pane_t2

0x0001,

0xf620,	// (0x00026637) rss_list_single_pane_t

0x04a9,	// (0x000174c0) main_camera2_pane

0x04a9,	// (0x000174c0) main_video2_pane

0x71ad,	// (0x0001e1c4) cams_zoom_pane_cp2_ParamLimits

0x71ad,	// (0x0001e1c4) cams_zoom_pane_cp2

0x71b9,	// (0x0001e1d0) image2_vga_pane_ParamLimits

0x71b9,	// (0x0001e1d0) image2_vga_pane

0x71c8,	// (0x0001e1df) main_camera2_pane_g1_ParamLimits

0x71c8,	// (0x0001e1df) main_camera2_pane_g1

0x71d4,	// (0x0001e1eb) main_camera2_pane_g2_ParamLimits

0x71d4,	// (0x0001e1eb) main_camera2_pane_g2

0x71e0,	// (0x0001e1f7) main_camera2_pane_g3_ParamLimits

0x71e0,	// (0x0001e1f7) main_camera2_pane_g3

0x71ec,	// (0x0001e203) main_camera2_pane_g4_ParamLimits

0x71ec,	// (0x0001e203) main_camera2_pane_g4

0x71f8,	// (0x0001e20f) main_camera2_pane_g5_ParamLimits

0x71f8,	// (0x0001e20f) main_camera2_pane_g5

0x7204,	// (0x0001e21b) main_camera2_pane_g6_ParamLimits

0x7204,	// (0x0001e21b) main_camera2_pane_g6

0x7210,	// (0x0001e227) main_camera2_pane_g7_ParamLimits

0x7210,	// (0x0001e227) main_camera2_pane_g7

0x721c,	// (0x0001e233) main_camera2_pane_g8_ParamLimits

0x721c,	// (0x0001e233) main_camera2_pane_g8

0x0008,

0xf641,	// (0x00026658) main_camera2_pane_g_ParamLimits

0xf641,	// (0x00026658) main_camera2_pane_g

0x7234,	// (0x0001e24b) main_camera2_pane_t1_ParamLimits

0x7234,	// (0x0001e24b) main_camera2_pane_t1

0x7246,	// (0x0001e25d) main_camera2_pane_t2_ParamLimits

0x7246,	// (0x0001e25d) main_camera2_pane_t2

0x7258,	// (0x0001e26f) main_camera2_pane_t3_ParamLimits

0x7258,	// (0x0001e26f) main_camera2_pane_t3

0x726a,	// (0x0001e281) main_camera2_pane_t4_ParamLimits

0x726a,	// (0x0001e281) main_camera2_pane_t4

0x0006,

0xf654,	// (0x0002666b) main_camera2_pane_t_ParamLimits

0xf654,	// (0x0002666b) main_camera2_pane_t

0x72cc,	// (0x0001e2e3) cams_zoom_pane_cp4_ParamLimits

0x72cc,	// (0x0001e2e3) cams_zoom_pane_cp4

0x72dc,	// (0x0001e2f3) image2_cif_pane_ParamLimits

0x72dc,	// (0x0001e2f3) image2_cif_pane

0x72f1,	// (0x0001e308) image2_subqcif_pane_ParamLimits

0x72f1,	// (0x0001e308) image2_subqcif_pane

0x7300,	// (0x0001e317) main_video2_pane_g1_ParamLimits

0x7300,	// (0x0001e317) main_video2_pane_g1

0x7312,	// (0x0001e329) main_video2_pane_g2_ParamLimits

0x7312,	// (0x0001e329) main_video2_pane_g2

0x7322,	// (0x0001e339) main_video2_pane_g3_ParamLimits

0x7322,	// (0x0001e339) main_video2_pane_g3

0x7332,	// (0x0001e349) main_video2_pane_g4_ParamLimits

0x7332,	// (0x0001e349) main_video2_pane_g4

0x7342,	// (0x0001e359) main_video2_pane_g5_ParamLimits

0x7342,	// (0x0001e359) main_video2_pane_g5

0x7352,	// (0x0001e369) main_video2_pane_g6_ParamLimits

0x7352,	// (0x0001e369) main_video2_pane_g6

0x0005,

0xf663,	// (0x0002667a) main_video2_pane_g_ParamLimits

0xf663,	// (0x0002667a) main_video2_pane_g

0x7364,	// (0x0001e37b) main_video2_pane_t1_ParamLimits

0x7364,	// (0x0001e37b) main_video2_pane_t1

0x737e,	// (0x0001e395) main_video2_pane_t2_ParamLimits

0x737e,	// (0x0001e395) main_video2_pane_t2

0x73a4,	// (0x0001e3bb) main_video2_pane_t3_ParamLimits

0x73a4,	// (0x0001e3bb) main_video2_pane_t3

0x0002,

0xf670,	// (0x00026687) main_video2_pane_t_ParamLimits

0xf670,	// (0x00026687) main_video2_pane_t

0xad85,	// (0x00021d9c) call_muted_g2

0x0001,

0xf612,	// (0x00026629) call_muted_g

0x04a9,	// (0x000174c0) main_mup2_pane

0x2bba,	// (0x00019bd1) main_mup2_pane_g1_ParamLimits

0x2bba,	// (0x00019bd1) main_mup2_pane_g1

0xb212,	// (0x00022229) main_mup2_pane_g2_ParamLimits

0xb212,	// (0x00022229) main_mup2_pane_g2

0x73f3,	// (0x0001e40a) main_mup_pane_g13_cp1

0x73fb,	// (0x0001e412) mup_volume_pane_cp1

0xb232,	// (0x00022249) main_mup2_pane_g4_ParamLimits

0xb232,	// (0x00022249) main_mup2_pane_g4

0xb247,	// (0x0002225e) main_mup2_pane_g5_ParamLimits

0xb247,	// (0x0002225e) main_mup2_pane_g5

0xb25c,	// (0x00022273) main_mup2_pane_g6_ParamLimits

0xb25c,	// (0x00022273) main_mup2_pane_g6

0xb271,	// (0x00022288) main_mup2_pane_g7_ParamLimits

0xb271,	// (0x00022288) main_mup2_pane_g7

0x0006,

0xf677,	// (0x0002668e) main_mup2_pane_g_ParamLimits

0xf677,	// (0x0002668e) main_mup2_pane_g

0xb28d,	// (0x000222a4) main_mup2_pane_t1_ParamLimits

0xb28d,	// (0x000222a4) main_mup2_pane_t1

0xb2a4,	// (0x000222bb) main_mup2_pane_t2_ParamLimits

0xb2a4,	// (0x000222bb) main_mup2_pane_t2

0xb2bb,	// (0x000222d2) main_mup2_pane_t3_ParamLimits

0xb2bb,	// (0x000222d2) main_mup2_pane_t3

0xb2d2,	// (0x000222e9) main_mup2_pane_t4_ParamLimits

0xb2d2,	// (0x000222e9) main_mup2_pane_t4

0xb2ec,	// (0x00022303) main_mup2_pane_t5_ParamLimits

0xb2ec,	// (0x00022303) main_mup2_pane_t5

0xb306,	// (0x0002231d) main_mup2_pane_t6_ParamLimits

0xb306,	// (0x0002231d) main_mup2_pane_t6

0x0005,

0xf686,	// (0x0002669d) main_mup2_pane_t_ParamLimits

0xf686,	// (0x0002669d) main_mup2_pane_t

0xb33e,	// (0x00022355) mup2_visualizer_pane_ParamLimits

0xb33e,	// (0x00022355) mup2_visualizer_pane

0xb374,	// (0x0002238b) mup_progress_pane_cp_ParamLimits

0xb374,	// (0x0002238b) mup_progress_pane_cp

0x73de,	// (0x0001e3f5) mup_volume_pane_cp_ParamLimits

0x73de,	// (0x0001e3f5) mup_volume_pane_cp

0xb38b,	// (0x000223a2) mup2_visualizer_pane_g1_ParamLimits

0xb38b,	// (0x000223a2) mup2_visualizer_pane_g1

0x2b8c,	// (0x00019ba3) mup2_visualizer_pane_g2_ParamLimits

0x2b8c,	// (0x00019ba3) mup2_visualizer_pane_g2

0xb3a0,	// (0x000223b7) mup2_visualizer_pane_g3_ParamLimits

0xb3a0,	// (0x000223b7) mup2_visualizer_pane_g3

0x0002,

0xf693,	// (0x000266aa) mup2_visualizer_pane_g_ParamLimits

0xf693,	// (0x000266aa) mup2_visualizer_pane_g

0x192c,	// (0x00018943) aid_size_cell_fmradio

0xae9b,	// (0x00021eb2) aid_height_parent_landcape

0x0d33,	// (0x00017d4a) wml_content_pane_cp

0x0d3b,	// (0x00017d52) wml_tabs_pane

0x0d44,	// (0x00017d5b) popup_wml_miniature_window

0x0d4c,	// (0x00017d63) scroll_pane_cp021

0x0d60,	// (0x00017d77) wml_content_pane_comp8

0x04a9,	// (0x000174c0) bg_popup_sub_pane_cp05

0x2baa,	// (0x00019bc1) popup_wml_miniature_window_g1

0x2bb2,	// (0x00019bc9) wml_miniature_view_pane

0xb3ae,	// (0x000223c5) aid_size_wml_view

0xb3b6,	// (0x000223cd) wml_miniature_view_pane_g1

0xb3bf,	// (0x000223d6) wml_miniature_view_pane_g2

0xb3c8,	// (0x000223df) wml_miniature_view_pane_g3

0xb3d0,	// (0x000223e7) wml_miniature_view_pane_g4

0xb3d8,	// (0x000223ef) wml_miniature_view_pane_g5

0xb3e0,	// (0x000223f7) wml_miniature_view_pane_g6

0xb3e8,	// (0x000223ff) wml_miniature_view_pane_g7

0xb3f0,	// (0x00022407) wml_miniature_view_pane_g8

0x0007,

0xf69a,	// (0x000266b1) wml_miniature_view_pane_g

0x2bba,	// (0x00019bd1) background_graphic_ParamLimits

0x2bba,	// (0x00019bd1) background_graphic

0x2bc6,	// (0x00019bdd) wml_tabs_2_pane

0x2bcf,	// (0x00019be6) wml_tabs_3_pane_ParamLimits

0x2bcf,	// (0x00019be6) wml_tabs_3_pane

0x2be1,	// (0x00019bf8) wml_tabs_4_pane_ParamLimits

0x2be1,	// (0x00019bf8) wml_tabs_4_pane

0x2bf7,	// (0x00019c0e) wml_tabs_5_pane_ParamLimits

0x2bf7,	// (0x00019c0e) wml_tabs_5_pane

0x2c11,	// (0x00019c28) wml_tabs_pane_g2_ParamLimits

0x2c11,	// (0x00019c28) wml_tabs_pane_g2

0x2c25,	// (0x00019c3c) wml_tabs_pane_g3_ParamLimits

0x2c25,	// (0x00019c3c) wml_tabs_pane_g3

0xb3f8,	// (0x0002240f) wml_tabs_2_active_pane_ParamLimits

0xb3f8,	// (0x0002240f) wml_tabs_2_active_pane

0xb408,	// (0x0002241f) wml_tabs_2_passive_pane_ParamLimits

0xb408,	// (0x0002241f) wml_tabs_2_passive_pane

0xb418,	// (0x0002242f) wml_tabs_3_active_pane_cp_ParamLimits

0xb418,	// (0x0002242f) wml_tabs_3_active_pane_cp

0xb429,	// (0x00022440) wml_tabs_3_passive_pane_ParamLimits

0xb429,	// (0x00022440) wml_tabs_3_passive_pane

0xb43a,	// (0x00022451) wml_tabs_3_passive_pane_cp_ParamLimits

0xb43a,	// (0x00022451) wml_tabs_3_passive_pane_cp

0xb44b,	// (0x00022462) tabs_4_active_pane

0xb453,	// (0x0002246a) tabs_4_passive_pane

0xb45b,	// (0x00022472) tabs_4_passive_pane_cp

0xb463,	// (0x0002247a) tabs_4_passive_pane_cp2

0x28e2,	// (0x000198f9) aid_height_text

0xa41a,	// (0x00021431) mup_volume_cont_pane_ParamLimits

0xa41a,	// (0x00021431) mup_volume_cont_pane

0x84a2,	// (0x0001f4b9) aid_size_cell_pinb

0x0734,	// (0x0001774b) aid_size_list_pinb

0xb35d,	// (0x00022374) mup2_volume_cont_pane_ParamLimits

0xb35d,	// (0x00022374) mup2_volume_cont_pane

0x73ca,	// (0x0001e3e1) mup2_volume_cont_pane_g1_ParamLimits

0x73ca,	// (0x0001e3e1) mup2_volume_cont_pane_g1

0x812f,	// (0x0001f146) aid_size_cell_touch_ParamLimits

0x812f,	// (0x0001f146) aid_size_cell_touch

0x8382,	// (0x0001f399) touch_pane_ParamLimits

0x8382,	// (0x0001f399) touch_pane

0x001a,	// (0x00017031) main_rss2_pane

0x2c7b,	// (0x00019c92) listscroll_rss2_pane

0x2c84,	// (0x00019c9b) rss2_navigation_pane

0x2c8c,	// (0x00019ca3) list_rss2_pane

0x1461,	// (0x00018478) scroll_pane_cp22

0x2c94,	// (0x00019cab) rss2_navigation_pane_g1

0x2c9d,	// (0x00019cb4) rss2_navigation_pane_g2

0x2ca5,	// (0x00019cbc) rss2_navigation_pane_g3

0x0002,

0xf6ab,	// (0x000266c2) rss2_navigation_pane_g

0x2cad,	// (0x00019cc4) rss2_navigation_pane_t1

0xb46b,	// (0x00022482) rss2_list_single_pane_ParamLimits

0xb46b,	// (0x00022482) rss2_list_single_pane

0x2cbb,	// (0x00019cd2) rss2_list_single_pane_t2

0x2cc9,	// (0x00019ce0) rss2_list_single_pane_t3_ParamLimits

0x2cc9,	// (0x00019ce0) rss2_list_single_pane_t3

0x2ce6,	// (0x00019cfd) rss2_list_single_pane_t4

0x9c15,	// (0x00020c2c) smil_status_pane_g1

0x008a,	// (0x000170a1) main_image2_pane_ParamLimits

0x008a,	// (0x000170a1) main_image2_pane

0x7228,	// (0x0001e23f) main_camera2_pane_g9_ParamLimits

0x7228,	// (0x0001e23f) main_camera2_pane_g9

0x727c,	// (0x0001e293) main_camera2_pane_t5_ParamLimits

0x727c,	// (0x0001e293) main_camera2_pane_t5

0x728e,	// (0x0001e2a5) main_camera2_pane_t6_ParamLimits

0x728e,	// (0x0001e2a5) main_camera2_pane_t6

0xb4a7,	// (0x000224be) main_image2_pane_g1_ParamLimits

0xb4a7,	// (0x000224be) main_image2_pane_g1

0xa9fd,	// (0x00021a14) smil2_video_pane_ParamLimits

0xa9fd,	// (0x00021a14) smil2_video_pane

0x0038,	// (0x0001704f) aid_zoom_text_primary_cp

0x0080,	// (0x00017097) popup_preview_fixed_window

0x0c9c,	// (0x00017cb3) im_reading_pane_g1

0x7172,	// (0x0001e189) cams2_bc_adjust_pane_cp_ParamLimits

0x7172,	// (0x0001e189) cams2_bc_adjust_pane_cp

0x72be,	// (0x0001e2d5) cams2_bc_adjust_pane_ParamLimits

0x72be,	// (0x0001e2d5) cams2_bc_adjust_pane

0x4489,	// (0x0001b4a0) cams2_bc_adjust_pane_g1

0x7403,	// (0x0001e41a) cams2_slider_pane

0x740c,	// (0x0001e423) cams2_slider_pane_g1

0x7415,	// (0x0001e42c) cams2_slider_pane_g2

0x0006,

0xf6b2,	// (0x000266c9) cams2_slider_pane_g

0x6d18,	// (0x0001dd2f) calc_display_pane_ParamLimits

0x6d36,	// (0x0001dd4d) calc_paper_pane_ParamLimits

0x6d52,	// (0x0001dd69) grid_calc_pane_ParamLimits

0x70a1,	// (0x0001e0b8) popup_clock_digital_window_t1_ParamLimits

0x18c9,	// (0x000188e0) main_image_pane_t1

0x6cfe,	// (0x0001dd15) aid_size_cell_calc_ParamLimits

0x6cfe,	// (0x0001dd15) aid_size_cell_calc

0xaecd,	// (0x00021ee4) popup_blid_sat_info2_window_ParamLimits

0xaecd,	// (0x00021ee4) popup_blid_sat_info2_window

0x2d30,	// (0x00019d47) aid_size_cell_blid

0x2d38,	// (0x00019d4f) bg_popup_window_pane_cp07

0x2d5b,	// (0x00019d72) grid_popup_blid_pane

0x2d65,	// (0x00019d7c) heading_pane_cp05_ParamLimits

0x2d65,	// (0x00019d7c) heading_pane_cp05

0x2e2f,	// (0x00019e46) cell_popup_blid_pane_ParamLimits

0x2e2f,	// (0x00019e46) cell_popup_blid_pane

0x2e55,	// (0x00019e6c) cell_popup_blid_pane_g1

0x2e5d,	// (0x00019e74) cell_popup_blid_pane_t1

0xb323,	// (0x0002233a) mup2_indicator_pane_ParamLimits

0xb323,	// (0x0002233a) mup2_indicator_pane

0x15ae,	// (0x000185c5) mup2_visualizer_osc_pane

0x2b98,	// (0x00019baf) mup2_visualizer_spec_pane_ParamLimits

0x2b98,	// (0x00019baf) mup2_visualizer_spec_pane

0xb4b3,	// (0x000224ca) mup2_spec_half_pane

0xb4bc,	// (0x000224d3) mup2_spec_half_pane_cp

0xb4c6,	// (0x000224dd) mup2_spec_bar_pane_ParamLimits

0xb4c6,	// (0x000224dd) mup2_spec_bar_pane

0x2ae7,	// (0x00019afe) mup2_spec_bar_pane_g1

0x2af1,	// (0x00019b08) mup2_spec_bar_pane_g2

0x0001,

0xf625,	// (0x0002663c) mup2_spec_bar_pane_g

0xb4e5,	// (0x000224fc) mup2_osc_middle_pane

0x2b03,	// (0x00019b1a) mup2_visualizer_osc_pane_g1

0x00b8,	// (0x000170cf) popup_number_entry_window_t1_ParamLimits

0x00cb,	// (0x000170e2) popup_number_entry_window_t2_ParamLimits

0x00dd,	// (0x000170f4) popup_number_entry_window_t3_ParamLimits

0x83d9,	// (0x0001f3f0) popup_number_entry_window_t5_ParamLimits

0x83d9,	// (0x0001f3f0) popup_number_entry_window_t5

0xf0e7,	// (0x000260fe) popup_number_entry_window_t_ParamLimits

0x00ef,	// (0x00017106) text_title_cp2_ParamLimits

0x70e0,	// (0x0001e0f7) aid_hotspot_pointer_text2_pane

0x7136,	// (0x0001e14d) main_viewer_pane_g9_ParamLimits

0x7136,	// (0x0001e14d) main_viewer_pane_g9

0x0ecb,	// (0x00017ee2) cale_month_pane_t1_ParamLimits

0x0f60,	// (0x00017f77) bg_cale_pane_ParamLimits

0x0f78,	// (0x00017f8f) list_cale_pane_ParamLimits

0x09f3,	// (0x00017a0a) listscroll_cale_day_pane_t1

0x0f89,	// (0x00017fa0) scroll_pane_cp09_ParamLimits

0xa459,	// (0x00021470) main_mup_eq_pane_t1_ParamLimits

0xa459,	// (0x00021470) main_mup_eq_pane_t1

0xa473,	// (0x0002148a) main_mup_eq_pane_t2_ParamLimits

0xa473,	// (0x0002148a) main_mup_eq_pane_t2

0xa48b,	// (0x000214a2) main_mup_eq_pane_t3_ParamLimits

0xa48b,	// (0x000214a2) main_mup_eq_pane_t3

0xa4a3,	// (0x000214ba) main_mup_eq_pane_t4_ParamLimits

0xa4a3,	// (0x000214ba) main_mup_eq_pane_t4

0xa4bb,	// (0x000214d2) main_mup_eq_pane_t5_ParamLimits

0xa4bb,	// (0x000214d2) main_mup_eq_pane_t5

0xa4d3,	// (0x000214ea) main_mup_eq_pane_t6_ParamLimits

0xa4d3,	// (0x000214ea) main_mup_eq_pane_t6

0xa4e7,	// (0x000214fe) main_mup_eq_pane_t7_ParamLimits

0xa4e7,	// (0x000214fe) main_mup_eq_pane_t7

0xa4fb,	// (0x00021512) main_mup_eq_pane_t8_ParamLimits

0xa4fb,	// (0x00021512) main_mup_eq_pane_t8

0xa511,	// (0x00021528) main_mup_eq_pane_t9_ParamLimits

0xa511,	// (0x00021528) main_mup_eq_pane_t9

0xa529,	// (0x00021540) main_mup_eq_pane_t10_ParamLimits

0xa529,	// (0x00021540) main_mup_eq_pane_t10

0x0009,

0xf474,	// (0x0002648b) main_mup_eq_pane_t_ParamLimits

0xf474,	// (0x0002648b) main_mup_eq_pane_t

0xa5e6,	// (0x000215fd) mup_equalizer_pane_cp5_ParamLimits

0xa5fc,	// (0x00021613) mup_equalizer_pane_cp6_ParamLimits

0xa614,	// (0x0002162b) mup_equalizer_pane_cp7_ParamLimits

0x001a,	// (0x00017031) main_gallery_pane

0x2b0c,	// (0x00019b23) smil2_volume_pane

0x2b27,	// (0x00019b3e) smil_status_volume_pane_g1_ParamLimits

0x2b14,	// (0x00019b2b) smil_status_volume_pane_g2_ParamLimits

0x7142,	// (0x0001e159) smil_status_volume_pane_g3_ParamLimits

0xf62a,	// (0x00026641) smil_status_volume_pane_g_ParamLimits

0x2d38,	// (0x00019d4f) bg_popup_window_pane_cp07_ParamLimits

0x2d46,	// (0x00019d5d) blid_firmament_pane

0xb4ee,	// (0x00022505) aid_size_cell_gallery_ParamLimits

0xb4ee,	// (0x00022505) aid_size_cell_gallery

0xb4fc,	// (0x00022513) grid_gallery_pane_ParamLimits

0xb4fc,	// (0x00022513) grid_gallery_pane

0xb50c,	// (0x00022523) cell_gallery_pane_ParamLimits

0xb50c,	// (0x00022523) cell_gallery_pane

0x2e6b,	// (0x00019e82) bg_cell_gallery_focus_pane_ParamLimits

0x2e6b,	// (0x00019e82) bg_cell_gallery_focus_pane

0x2e7d,	// (0x00019e94) cell_gallery_pane_g1_ParamLimits

0x2e7d,	// (0x00019e94) cell_gallery_pane_g1

0xb55a,	// (0x00022571) cell_gallery_pane_g2_ParamLimits

0xb55a,	// (0x00022571) cell_gallery_pane_g2

0xb567,	// (0x0002257e) cell_gallery_pane_g3_ParamLimits

0xb567,	// (0x0002257e) cell_gallery_pane_g3

0x2e89,	// (0x00019ea0) cell_gallery_pane_g4_ParamLimits

0x2e89,	// (0x00019ea0) cell_gallery_pane_g4

0x0003,

0xf6d8,	// (0x000266ef) cell_gallery_pane_g_ParamLimits

0xf6d8,	// (0x000266ef) cell_gallery_pane_g

0x2e95,	// (0x00019eac) bg_cell_gallery_focus_pane_g1

0x2e9d,	// (0x00019eb4) bg_cell_gallery_focus_pane_g2

0x2ea5,	// (0x00019ebc) bg_cell_gallery_focus_pane_g3

0x2ead,	// (0x00019ec4) bg_cell_gallery_focus_pane_g4

0x2eb5,	// (0x00019ecc) bg_cell_gallery_focus_pane_g5

0x2ebd,	// (0x00019ed4) bg_cell_gallery_focus_pane_g6

0x2ec5,	// (0x00019edc) bg_cell_gallery_focus_pane_g7

0x2ecd,	// (0x00019ee4) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6e1,	// (0x000266f8) bg_cell_gallery_focus_pane_g

0x2ed5,	// (0x00019eec) aid_firma_cardinal

0x2ee9,	// (0x00019f00) blid_firmament_pane_t1

0x2f00,	// (0x00019f17) blid_firmament_pane_t2

0x2f17,	// (0x00019f2e) blid_firmament_pane_t3

0x2f2e,	// (0x00019f45) blid_firmament_pane_t4

0x0003,

0xf6f2,	// (0x00026709) blid_firmament_pane_t

0x2f45,	// (0x00019f5c) blid_sat_info_pane

0x2f55,	// (0x00019f6c) blid_sat_info_pane_g1

0x2f55,	// (0x00019f6c) blid_sat_info_pane_g2

0x0001,

0xf6fb,	// (0x00026712) blid_sat_info_pane_g

0x2f5f,	// (0x00019f76) blid_sat_info_pane_t1

0x2f6d,	// (0x00019f84) smil2_volume_content_pane

0x2f76,	// (0x00019f8d) smil2_volume_pane_g1

0x2f7e,	// (0x00019f95) smil2_volume_content_pane_g1

0x2f87,	// (0x00019f9e) smil2_volume_content_pane_g2

0x2f90,	// (0x00019fa7) smil2_volume_content_pane_g3

0x2f99,	// (0x00019fb0) smil2_volume_content_pane_g4

0x2fa2,	// (0x00019fb9) smil2_volume_content_pane_g5

0x2fab,	// (0x00019fc2) smil2_volume_content_pane_g6

0x2fb4,	// (0x00019fcb) smil2_volume_content_pane_g7

0x2fbd,	// (0x00019fd4) smil2_volume_content_pane_g8

0x2fc6,	// (0x00019fdd) smil2_volume_content_pane_g9

0x2fcf,	// (0x00019fe6) smil2_volume_content_pane_g10

0x0009,

0xf700,	// (0x00026717) smil2_volume_content_pane_g

0x89ea,	// (0x0001fa01) cale_week_day_heading_pane_t1_ParamLimits

0x89fe,	// (0x0001fa15) cale_week_day_heading_pane_t2_ParamLimits

0x8a12,	// (0x0001fa29) cale_week_day_heading_pane_t3_ParamLimits

0x8a26,	// (0x0001fa3d) cale_week_day_heading_pane_t4_ParamLimits

0x8a3a,	// (0x0001fa51) cale_week_day_heading_pane_t5_ParamLimits

0x8a4e,	// (0x0001fa65) cale_week_day_heading_pane_t6_ParamLimits

0x8a62,	// (0x0001fa79) cale_week_day_heading_pane_t7_ParamLimits

0xf1ec,	// (0x00026203) cale_week_day_heading_pane_t_ParamLimits

0x0a05,	// (0x00017a1c) bg_cale_side_pane_ParamLimits

0x6eb3,	// (0x0001deca) cale_week_time_pane_t1_ParamLimits

0x6ecb,	// (0x0001dee2) cale_week_time_pane_t2_ParamLimits

0x6ee3,	// (0x0001defa) cale_week_time_pane_t3_ParamLimits

0x6efb,	// (0x0001df12) cale_week_time_pane_t4_ParamLimits

0x6f13,	// (0x0001df2a) cale_week_time_pane_t5_ParamLimits

0x6f2b,	// (0x0001df42) cale_week_time_pane_t6_ParamLimits

0x6f4b,	// (0x0001df62) cale_week_time_pane_t7_ParamLimits

0x6f6b,	// (0x0001df82) cale_week_time_pane_t8_ParamLimits

0xf1fb,	// (0x00026212) cale_week_time_pane_t_ParamLimits

0x8a76,	// (0x0001fa8d) cell_cale_week_pane_g2_ParamLimits

0x0a05,	// (0x00017a1c) bg_cale_side_pane_cp01_ParamLimits

0x9aa2,	// (0x00020ab9) cale_month_week_pane_t1_ParamLimits

0x9ab9,	// (0x00020ad0) cale_month_week_pane_t2_ParamLimits

0x9ad0,	// (0x00020ae7) cale_month_week_pane_t3_ParamLimits

0x9ae7,	// (0x00020afe) cale_month_week_pane_t4_ParamLimits

0x9afe,	// (0x00020b15) cale_month_week_pane_t5_ParamLimits

0x9b1d,	// (0x00020b34) cale_month_week_pane_t6_ParamLimits

0xf2d4,	// (0x000262eb) cale_month_week_pane_t_ParamLimits

0x7005,	// (0x0001e01c) cell_cale_month_pane_g1_ParamLimits

0x001a,	// (0x00017031) main_cale_event_viewer_pane

0x001a,	// (0x00017031) listscroll_cale_event_viewer_pane

0x2fd8,	// (0x00019fef) list_cale_ev_pane

0x2fe0,	// (0x00019ff7) scroll_pane_cp023

0x2fec,	// (0x0001a003) field_cale_ev_pane_ParamLimits

0x2fec,	// (0x0001a003) field_cale_ev_pane

0x3006,	// (0x0001a01d) field_cale_ev_content_pane_ParamLimits

0x3006,	// (0x0001a01d) field_cale_ev_content_pane

0x3012,	// (0x0001a029) field_cale_ev_pane_g1_ParamLimits

0x3012,	// (0x0001a029) field_cale_ev_pane_g1

0x301e,	// (0x0001a035) field_cale_ev_pane_g2_ParamLimits

0x301e,	// (0x0001a035) field_cale_ev_pane_g2

0x3036,	// (0x0001a04d) field_cale_ev_pane_g3_ParamLimits

0x3036,	// (0x0001a04d) field_cale_ev_pane_g3

0x0002,

0xf715,	// (0x0002672c) field_cale_ev_pane_g_ParamLimits

0xf715,	// (0x0002672c) field_cale_ev_pane_g

0x304e,	// (0x0001a065) field_cale_ev_pane_t1_ParamLimits

0x304e,	// (0x0001a065) field_cale_ev_pane_t1

0x3065,	// (0x0001a07c) field_cale_ev_content_pane_t1_ParamLimits

0x3065,	// (0x0001a07c) field_cale_ev_content_pane_t1

0x1737,	// (0x0001874e) bg_button_pane_cp01

0x083d,	// (0x00017854) listscroll_cale_week_pane_ParamLimits

0x87bf,	// (0x0001f7d6) popup_toolbar_window_cp01

0x09f3,	// (0x00017a0a) listscroll_cale_week_pane_t1_ParamLimits

0x083d,	// (0x00017854) listscroll_cale_day_pane_ParamLimits

0x87bf,	// (0x0001f7d6) popup_toolbar_window_cp02

0x09f3,	// (0x00017a0a) listscroll_cale_day_pane_t1_ParamLimits

0x083d,	// (0x00017854) main_cale_month_pane_ParamLimits

0xaf91,	// (0x00021fa8) popup_toolbar_window_cp03_ParamLimits

0xaf91,	// (0x00021fa8) popup_toolbar_window_cp03

0xa90f,	// (0x00021926) main_image_pane_g2_ParamLimits

0xa90f,	// (0x00021926) main_image_pane_g2

0xa91b,	// (0x00021932) main_image_pane_g3_ParamLimits

0xa91b,	// (0x00021932) main_image_pane_g3

0x0002,

0xf506,	// (0x0002651d) main_image_pane_g_ParamLimits

0xf506,	// (0x0002651d) main_image_pane_g

0x18c9,	// (0x000188e0) main_image_pane_t1_ParamLimits

0xa927,	// (0x0002193e) main_image_pane_t2_ParamLimits

0xa927,	// (0x0002193e) main_image_pane_t2

0xa939,	// (0x00021950) main_image_pane_t3_ParamLimits

0xa939,	// (0x00021950) main_image_pane_t3

0xa94b,	// (0x00021962) main_image_pane_t4_ParamLimits

0xa94b,	// (0x00021962) main_image_pane_t4

0x0003,

0xf50d,	// (0x00026524) main_image_pane_t_ParamLimits

0xf50d,	// (0x00026524) main_image_pane_t

0xa95d,	// (0x00021974) popup_image_details_window_cp01

0xa967,	// (0x0002197e) popup_toobar_trans_pane_cp01_ParamLimits

0xa967,	// (0x0002197e) popup_toobar_trans_pane_cp01

0xaf16,	// (0x00021f2d) popup_image_details_window_ParamLimits

0xaf16,	// (0x00021f2d) popup_image_details_window

0x2a6d,	// (0x00019a84) popup_image_focus_window

0x7164,	// (0x0001e17b) camera2_autofocus_pane_ParamLimits

0x7164,	// (0x0001e17b) camera2_autofocus_pane

0x001a,	// (0x00017031) bg_popup_sub_pane_cp06

0x3082,	// (0x0001a099) popup_image_focus_window_g1

0x308a,	// (0x0001a0a1) popup_image_focus_window_g2

0x3092,	// (0x0001a0a9) popup_image_focus_window_g3

0x309a,	// (0x0001a0b1) popup_image_focus_window_g4

0x0003,

0xf71c,	// (0x00026733) popup_image_focus_window_g

0x30a2,	// (0x0001a0b9) popup_image_focus_window_t1

0x30b0,	// (0x0001a0c7) popup_image_focus_window_t2

0x30c0,	// (0x0001a0d7) popup_image_focus_window_t3

0x0002,

0xf725,	// (0x0002673c) popup_image_focus_window_t

0x30ce,	// (0x0001a0e5) camera2_autofocus_pane_g1

0x008a,	// (0x000170a1) bg_tb_trans_pane_cp01

0x30dc,	// (0x0001a0f3) popup_image_details_window_g1

0x30ef,	// (0x0001a106) popup_image_details_window_g2

0x0002,

0xf737,	// (0x0002674e) popup_image_details_window_g

0x3118,	// (0x0001a12f) popup_image_details_window_t1

0x312a,	// (0x0001a141) popup_image_details_window_t2

0x3143,	// (0x0001a15a) popup_image_details_window_t3

0x3157,	// (0x0001a16e) popup_image_details_window_t4

0x3172,	// (0x0001a189) popup_image_details_window_t5

0x0004,

0xf73e,	// (0x00026755) popup_image_details_window_t

0x080f,	// (0x00017826) bg_calc_paper_pane_ParamLimits

0x6d7e,	// (0x0001dd95) grid_highlight_pane_cp013

0x6d88,	// (0x0001dd9f) list_calc_pane_ParamLimits

0x6d9a,	// (0x0001ddb1) scroll_pane_cp024

0x083d,	// (0x00017854) bg_calc_display_pane_ParamLimits

0x6da2,	// (0x0001ddb9) calc_display_pane_t1_ParamLimits

0x6db7,	// (0x0001ddce) calc_display_pane_t2_ParamLimits

0x6dcc,	// (0x0001dde3) calc_display_pane_t3_ParamLimits

0xf16e,	// (0x00026185) calc_display_pane_t_ParamLimits

0x6e35,	// (0x0001de4c) cell_calc_pane_g2

0x0001,

0xf18b,	// (0x000261a2) cell_calc_pane_g

0x6e3e,	// (0x0001de55) cell_calc_pane_t1

0x08c0,	// (0x000178d7) grid_highlight_pane_cp02_ParamLimits

0x08d6,	// (0x000178ed) toolbar_button_pane_cp01_ParamLimits

0x08d6,	// (0x000178ed) toolbar_button_pane_cp01

0x190e,	// (0x00018925) temp_image_control_pane_ParamLimits

0x190e,	// (0x00018925) temp_image_control_pane

0x008a,	// (0x000170a1) main_mp3_pane

0x318c,	// (0x0001a1a3) temp_image_control_pane_g1_ParamLimits

0x318c,	// (0x0001a1a3) temp_image_control_pane_g1

0x319a,	// (0x0001a1b1) temp_image_control_pane_g2_ParamLimits

0x319a,	// (0x0001a1b1) temp_image_control_pane_g2

0x31ac,	// (0x0001a1c3) temp_image_control_pane_g3_ParamLimits

0x31ac,	// (0x0001a1c3) temp_image_control_pane_g3

0xb5a4,	// (0x000225bb) temp_image_control_pane_g4_ParamLimits

0xb5a4,	// (0x000225bb) temp_image_control_pane_g4

0x0003,

0xf749,	// (0x00026760) temp_image_control_pane_g_ParamLimits

0xf749,	// (0x00026760) temp_image_control_pane_g

0x318c,	// (0x0001a1a3) main_mp3_pane_g1

0xb5b5,	// (0x000225cc) main_mp3_pane_g2

0x0007,

0xf752,	// (0x00026769) main_mp3_pane_g

0x31ef,	// (0x0001a206) main_mp3_pane_t1

0x0aee,	// (0x00017b05) main_camera_pane_g8_ParamLimits

0x0aee,	// (0x00017b05) main_camera_pane_g8

0x8c84,	// (0x0001fc9b) main_video_pane_g7_ParamLimits

0x8c84,	// (0x0001fc9b) main_video_pane_g7

0x72ac,	// (0x0001e2c3) main_camera2_pane_t7_ParamLimits

0x72ac,	// (0x0001e2c3) main_camera2_pane_t7

0x0cf3,	// (0x00017d0a) scroll_pane_cp025_ParamLimits

0x0cf3,	// (0x00017d0a) scroll_pane_cp025

0x0d07,	// (0x00017d1e) scroll_pane_cp026_ParamLimits

0x0d07,	// (0x00017d1e) scroll_pane_cp026

0x0d16,	// (0x00017d2d) wml_content_pane_ParamLimits

0x001a,	// (0x00017031) main_touch_calib_pane

0xb659,	// (0x00022670) main_touch_calib_pane_g1

0xb665,	// (0x0002267c) main_touch_calib_pane_g2

0xb671,	// (0x00022688) main_touch_calib_pane_g3

0xb67d,	// (0x00022694) main_touch_calib_pane_g4

0x0003,

0xf770,	// (0x00026787) main_touch_calib_pane_g

0xb689,	// (0x000226a0) main_touch_calib_pane_t1

0xb6a0,	// (0x000226b7) main_touch_calib_pane_t2

0x0004,

0xf779,	// (0x00026790) main_touch_calib_pane_t

0x14ef,	// (0x00018506) mup_progress_pane_cp02

0x150e,	// (0x00018525) navi_pane_g1

0x1570,	// (0x00018587) navi_pane_mp_t3

0x008a,	// (0x000170a1) main_mp3_pane_ParamLimits

0xafcf,	// (0x00021fe6) navi_pane_ParamLimits

0x318c,	// (0x0001a1a3) main_mp3_pane_g1_ParamLimits

0xb5b5,	// (0x000225cc) main_mp3_pane_g2_ParamLimits

0xb5c1,	// (0x000225d8) main_mp3_pane_g3_ParamLimits

0xb5c1,	// (0x000225d8) main_mp3_pane_g3

0xb5cd,	// (0x000225e4) main_mp3_pane_g4_ParamLimits

0xb5cd,	// (0x000225e4) main_mp3_pane_g4

0x31bc,	// (0x0001a1d3) main_mp3_pane_g5_ParamLimits

0x31bc,	// (0x0001a1d3) main_mp3_pane_g5

0x31ca,	// (0x0001a1e1) main_mp3_pane_g6_ParamLimits

0x31ca,	// (0x0001a1e1) main_mp3_pane_g6

0x31d7,	// (0x0001a1ee) main_mp3_pane_g7_ParamLimits

0x31d7,	// (0x0001a1ee) main_mp3_pane_g7

0x31e3,	// (0x0001a1fa) main_mp3_pane_g8_ParamLimits

0x31e3,	// (0x0001a1fa) main_mp3_pane_g8

0xf752,	// (0x00026769) main_mp3_pane_g_ParamLimits

0xb5d9,	// (0x000225f0) main_mp3_pane_t2

0xb5e9,	// (0x00022600) main_mp3_pane_t3

0x31fd,	// (0x0001a214) main_mp3_pane_t4

0x320b,	// (0x0001a222) main_mp3_pane_t5

0x0005,

0xf763,	// (0x0002677a) main_mp3_pane_t

0x3219,	// (0x0001a230) mup_progress_pane_cp01

0x0038,	// (0x0001704f) aid_zoom_text_secondary2

0x2fd8,	// (0x00019fef) list_cale_ev2_pane

0x2fe0,	// (0x00019ff7) scroll_pane_cp023_ParamLimits

0xb6f3,	// (0x0002270a) field_cale_ev2_pane_ParamLimits

0xb6f3,	// (0x0002270a) field_cale_ev2_pane

0xb727,	// (0x0002273e) field_cale_ev2_pane_g1_ParamLimits

0xb727,	// (0x0002273e) field_cale_ev2_pane_g1

0xb733,	// (0x0002274a) field_cale_ev2_pane_g2_ParamLimits

0xb733,	// (0x0002274a) field_cale_ev2_pane_g2

0xb74b,	// (0x00022762) field_cale_ev2_pane_g3_ParamLimits

0xb74b,	// (0x00022762) field_cale_ev2_pane_g3

0x0003,

0xf784,	// (0x0002679b) field_cale_ev2_pane_g_ParamLimits

0xf784,	// (0x0002679b) field_cale_ev2_pane_g

0x322d,	// (0x0001a244) field_cale_ev2_pane_t1_ParamLimits

0x322d,	// (0x0001a244) field_cale_ev2_pane_t1

0x3244,	// (0x0001a25b) field_cale_ev2_pane_t2_ParamLimits

0x3244,	// (0x0001a25b) field_cale_ev2_pane_t2

0x0001,

0xf78d,	// (0x000267a4) field_cale_ev2_pane_t_ParamLimits

0xf78d,	// (0x000267a4) field_cale_ev2_pane_t

0xa7e6,	// (0x000217fd) main_postcard_pane_g5_ParamLimits

0xa7e6,	// (0x000217fd) main_postcard_pane_g5

0xa7f4,	// (0x0002180b) main_postcard_pane_g6_ParamLimits

0xa7f4,	// (0x0002180b) main_postcard_pane_g6

0x8ac4,	// (0x0001fadb) camera2_autofocus_pane_cp_ParamLimits

0x8ac4,	// (0x0001fadb) camera2_autofocus_pane_cp

0x008a,	// (0x000170a1) main_mup3_pane

0xb783,	// (0x0002279a) main_mup3_pane_g1_ParamLimits

0xb783,	// (0x0002279a) main_mup3_pane_g1

0xb7a4,	// (0x000227bb) main_mup3_pane_g2_ParamLimits

0xb7a4,	// (0x000227bb) main_mup3_pane_g2

0xb823,	// (0x0002283a) main_mup3_pane_g3_ParamLimits

0xb823,	// (0x0002283a) main_mup3_pane_g3

0xb866,	// (0x0002287d) main_mup3_pane_g4_ParamLimits

0xb866,	// (0x0002287d) main_mup3_pane_g4

0xb8a9,	// (0x000228c0) main_mup3_pane_g5_ParamLimits

0xb8a9,	// (0x000228c0) main_mup3_pane_g5

0xb8ee,	// (0x00022905) main_mup3_pane_g6_ParamLimits

0xb8ee,	// (0x00022905) main_mup3_pane_g6

0x3259,	// (0x0001a270) main_mup3_pane_g7_ParamLimits

0x3259,	// (0x0001a270) main_mup3_pane_g7

0x0007,

0xf79d,	// (0x000267b4) main_mup3_pane_g_ParamLimits

0xf79d,	// (0x000267b4) main_mup3_pane_g

0xb964,	// (0x0002297b) main_mup3_pane_t1_ParamLimits

0xb964,	// (0x0002297b) main_mup3_pane_t1

0xb9d3,	// (0x000229ea) main_mup3_pane_t2_ParamLimits

0xb9d3,	// (0x000229ea) main_mup3_pane_t2

0xba9c,	// (0x00022ab3) main_mup3_pane_t4_ParamLimits

0xba9c,	// (0x00022ab3) main_mup3_pane_t4

0xbaf0,	// (0x00022b07) main_mup3_pane_t5_ParamLimits

0xbaf0,	// (0x00022b07) main_mup3_pane_t5

0xbba0,	// (0x00022bb7) main_mup3_pane_t6_ParamLimits

0xbba0,	// (0x00022bb7) main_mup3_pane_t6

0x0005,

0xf7ae,	// (0x000267c5) main_mup3_pane_t_ParamLimits

0xf7ae,	// (0x000267c5) main_mup3_pane_t

0xbc4c,	// (0x00022c63) mup3_progress_pane_ParamLimits

0xbc4c,	// (0x00022c63) mup3_progress_pane

0xbcc0,	// (0x00022cd7) popup_mup3_control_window_ParamLimits

0xbcc0,	// (0x00022cd7) popup_mup3_control_window

0x3267,	// (0x0001a27e) popup_mup3_text_window

0xbcd9,	// (0x00022cf0) mup3_progress_pane_t1

0xbcf8,	// (0x00022d0f) mup3_progress_pane_t2

0x326f,	// (0x0001a286) mup3_progress_pane_t3

0x0002,

0xf7bb,	// (0x000267d2) mup3_progress_pane_t

0x328c,	// (0x0001a2a3) mup_progress_pane_cp03

0x001a,	// (0x00017031) bg_tb_trans_pane_cp04

0xbd17,	// (0x00022d2e) mup3_volume_pane

0xbd1f,	// (0x00022d36) popup_mup3_control_window_g1

0xbd28,	// (0x00022d3f) mup3_volume_pane_g1

0xbd31,	// (0x00022d48) mup3_volume_pane_g2

0xbd3a,	// (0x00022d51) mup3_volume_pane_g3

0x0002,

0xf7c2,	// (0x000267d9) mup3_volume_pane_g

0x001a,	// (0x00017031) bg_tb_trans_pane_cp03

0x329c,	// (0x0001a2b3) popup_mup3_text_window_g1

0x32a4,	// (0x0001a2bb) popup_mup3_text_window_t1

0x0897,	// (0x000178ae) list_calc_item_pane_g1_ParamLimits

0x2c62,	// (0x00019c79) mup_volume_pane_cp_g1

0xb6b7,	// (0x000226ce) main_touch_calib_pane_t3

0xb6cb,	// (0x000226e2) main_touch_calib_pane_t4

0xb6df,	// (0x000226f6) main_touch_calib_pane_t5

0x0024,	// (0x0001703b) aid_cell_size_toolbar2

0x002c,	// (0x00017043) aid_popup3_width_pane

0x0038,	// (0x0001704f) aid_zoom_text_msg_primary

0x6fef,	// (0x0001e006) vorec_t7

0x085b,	// (0x00017872) bg_calc_paper_pane_g1_ParamLimits

0x0873,	// (0x0001788a) bg_calc_paper_pane_g2_ParamLimits

0x0867,	// (0x0001787e) bg_calc_paper_pane_g3_ParamLimits

0x088b,	// (0x000178a2) bg_calc_paper_pane_g4_ParamLimits

0x087f,	// (0x00017896) bg_calc_paper_pane_g5_ParamLimits

0x8638,	// (0x0001f64f) bg_calc_paper_pane_g6_ParamLimits

0x8649,	// (0x0001f660) bg_calc_paper_pane_g7_ParamLimits

0x865a,	// (0x0001f671) bg_calc_paper_pane_g8_ParamLimits

0xf175,	// (0x0002618c) bg_calc_paper_pane_g_ParamLimits

0x866b,	// (0x0001f682) calc_bg_paper_pane_g9_ParamLimits

0x8bad,	// (0x0001fbc4) image_qvga_pane_ParamLimits

0x8bad,	// (0x0001fbc4) image_qvga_pane

0x0704,	// (0x0001771b) bg_popup_sub_pane_cp04_ParamLimits

0x1845,	// (0x0001885c) popup_mup_playback_window_g1_ParamLimits

0x1851,	// (0x00018868) popup_mup_playback_window_t1_ParamLimits

0x1866,	// (0x0001887d) popup_mup_playback_window_t2_ParamLimits

0xf501,	// (0x00026518) popup_mup_playback_window_t_ParamLimits

0xb223,	// (0x0002223a) main_mup2_pane_g3_ParamLimits

0xb223,	// (0x0002223a) main_mup2_pane_g3

0x8ec3,	// (0x0001feda) popup_toolbar_window_cp04

0x1c5b,	// (0x00018c72) popup_call2_audio_second_window_g3_ParamLimits

0x1c5b,	// (0x00018c72) popup_call2_audio_second_window_g3

0x2065,	// (0x0001907c) popup_call2_audio_first_window_g4_ParamLimits

0x2065,	// (0x0001907c) popup_call2_audio_first_window_g4

0x26e4,	// (0x000196fb) popup_call2_audio_in_window_g4_ParamLimits

0x26e4,	// (0x000196fb) popup_call2_audio_in_window_g4

0xa902,	// (0x00021919) aid_area_sk_bg_cut_ParamLimits

0xa902,	// (0x00021919) aid_area_sk_bg_cut

0x187b,	// (0x00018892) aid_area_sk_bg_cut_2_ParamLimits

0x187b,	// (0x00018892) aid_area_sk_bg_cut_2

0xb54a,	// (0x00022561) aid_placing_details_win

0xb552,	// (0x00022569) aid_placing_details_win_2

0x30ce,	// (0x0001a0e5) camera2_autofocus_pane_g1_ParamLimits

0x8330,	// (0x0001f347) popup_fixed_preview_cale_window_ParamLimits

0x8330,	// (0x0001f347) popup_fixed_preview_cale_window

0x15da,	// (0x000185f1) navi_slider_pane_g3

0x15d1,	// (0x000185e8) navi_slider_pane_g4

0x15c8,	// (0x000185df) navi_slider_pane_g5

0x15da,	// (0x000185f1) navi_slider_pane_g6

0x70c7,	// (0x0001e0de) navi_slider_pane_g7

0x1704,	// (0x0001871b) mup_scale_pane_g3

0x170d,	// (0x00018724) mup_scale_pane_g4

0x1716,	// (0x0001872d) mup_scale_pane_g5

0xa62c,	// (0x00021643) mup_scale_pane_g6

0xa635,	// (0x0002164c) mup_scale_pane_g7

0x15da,	// (0x000185f1) cams2_slider_pane_g3

0x2d17,	// (0x00019d2e) cams2_slider_pane_g4

0x741e,	// (0x0001e435) cams2_slider_pane_g5

0x15da,	// (0x000185f1) cams2_slider_pane_g6

0x7426,	// (0x0001e43d) cams2_slider_pane_g7

0x2f55,	// (0x00019f6c) camera2_autofocus_pane_cp_g1

0x32b2,	// (0x0001a2c9) bg_popup_preview_window_pane_cp02_ParamLimits

0x32b2,	// (0x0001a2c9) bg_popup_preview_window_pane_cp02

0x32be,	// (0x0001a2d5) list_fp_cale_pane_ParamLimits

0x32be,	// (0x0001a2d5) list_fp_cale_pane

0x32ca,	// (0x0001a2e1) popup_fixed_preview_cale_window_t1_ParamLimits

0x32ca,	// (0x0001a2e1) popup_fixed_preview_cale_window_t1

0xbd43,	// (0x00022d5a) popup_fixed_preview_cale_window_t2_ParamLimits

0xbd43,	// (0x00022d5a) popup_fixed_preview_cale_window_t2

0xbd58,	// (0x00022d6f) popup_fixed_preview_cale_window_t3_ParamLimits

0xbd58,	// (0x00022d6f) popup_fixed_preview_cale_window_t3

0x0002,

0xf7c9,	// (0x000267e0) popup_fixed_preview_cale_window_t_ParamLimits

0xf7c9,	// (0x000267e0) popup_fixed_preview_cale_window_t

0xbd6d,	// (0x00022d84) list_single_fp_cale_pane_ParamLimits

0xbd6d,	// (0x00022d84) list_single_fp_cale_pane

0x32e8,	// (0x0001a2ff) list_single_fp_cale_pane_g1_ParamLimits

0x32e8,	// (0x0001a2ff) list_single_fp_cale_pane_g1

0x32f4,	// (0x0001a30b) list_single_fp_cale_pane_g2_ParamLimits

0x32f4,	// (0x0001a30b) list_single_fp_cale_pane_g2

0x0002,

0xf7d0,	// (0x000267e7) list_single_fp_cale_pane_g_ParamLimits

0xf7d0,	// (0x000267e7) list_single_fp_cale_pane_g

0x330d,	// (0x0001a324) list_single_fp_cale_pane_t1_ParamLimits

0x330d,	// (0x0001a324) list_single_fp_cale_pane_t1

0x331f,	// (0x0001a336) list_single_fp_cale_pane_t2_ParamLimits

0x331f,	// (0x0001a336) list_single_fp_cale_pane_t2

0x0001,

0xf7d7,	// (0x000267ee) list_single_fp_cale_pane_t_ParamLimits

0xf7d7,	// (0x000267ee) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x001a,	// (0x00017031) main_dialer_pane

0xbd82,	// (0x00022d99) aid_cell_size_keypad

0xbd8c,	// (0x00022da3) dialer_ne_pane

0xbd96,	// (0x00022dad) grid_dialer_command_1_pane

0xbd9e,	// (0x00022db5) grid_dialer_command_2_pane

0xbda6,	// (0x00022dbd) grid_dialer_keypad_pane

0xbdba,	// (0x00022dd1) bg_popup_call_pane_cp06_ParamLimits

0xbdba,	// (0x00022dd1) bg_popup_call_pane_cp06

0xbdc6,	// (0x00022ddd) dialer_ne_clear_pane_ParamLimits

0xbdc6,	// (0x00022ddd) dialer_ne_clear_pane

0x3352,	// (0x0001a369) dialer_ne_pane_g1

0x335a,	// (0x0001a371) dialer_ne_pane_t1_ParamLimits

0x335a,	// (0x0001a371) dialer_ne_pane_t1

0xbdd2,	// (0x00022de9) dialer_ne_pane_t2_ParamLimits

0xbdd2,	// (0x00022de9) dialer_ne_pane_t2

0xbdef,	// (0x00022e06) dialer_ne_pane_t3_ParamLimits

0xbdef,	// (0x00022e06) dialer_ne_pane_t3

0x0002,

0xf7dc,	// (0x000267f3) dialer_ne_pane_t_ParamLimits

0xf7dc,	// (0x000267f3) dialer_ne_pane_t

0xbe13,	// (0x00022e2a) dialer_ne_pane_t3_copy1_ParamLimits

0xbe13,	// (0x00022e2a) dialer_ne_pane_t3_copy1

0xbe37,	// (0x00022e4e) cell_dialer_keypad_pane_ParamLimits

0xbe37,	// (0x00022e4e) cell_dialer_keypad_pane

0xbe4e,	// (0x00022e65) cell_dialer_command_1_pane_ParamLimits

0xbe4e,	// (0x00022e65) cell_dialer_command_1_pane

0xbe64,	// (0x00022e7b) cell_dialer_command_2_pane_ParamLimits

0xbe64,	// (0x00022e7b) cell_dialer_command_2_pane

0x336c,	// (0x0001a383) bg_button_pane_cp02_ParamLimits

0x336c,	// (0x0001a383) bg_button_pane_cp02

0xbe73,	// (0x00022e8a) cell_dialer_keypad_pane_g1_ParamLimits

0xbe73,	// (0x00022e8a) cell_dialer_keypad_pane_g1

0x336c,	// (0x0001a383) bg_button_pane_cp03_ParamLimits

0x336c,	// (0x0001a383) bg_button_pane_cp03

0xbe88,	// (0x00022e9f) cell_dialer_command_1_pane_g1_ParamLimits

0xbe88,	// (0x00022e9f) cell_dialer_command_1_pane_g1

0x3378,	// (0x0001a38f) bg_button_pane_cp04

0xbe9c,	// (0x00022eb3) cell_dialer_command_2_pane_g1

0x15ae,	// (0x000185c5) bg_button_pane_cp06

0x3380,	// (0x0001a397) dialer_ne_clear_pane_g1

0xa142,	// (0x00021159) navi_pane_g2

0xa170,	// (0x00021187) navi_pane_g3

0x0002,

0xf404,	// (0x0002641b) navi_pane_g

0xa19b,	// (0x000211b2) navi_pane_mv_g2

0xa1c2,	// (0x000211d9) navi_pane_mv_g5

0xa1ca,	// (0x000211e1) navi_pane_mv_t1

0x083d,	// (0x00017854) main_clock2_pane

0xbecf,	// (0x00022ee6) main_clock2_list_pane_ParamLimits

0xbecf,	// (0x00022ee6) main_clock2_list_pane

0xbef9,	// (0x00022f10) main_clock2_pane_t1_ParamLimits

0xbef9,	// (0x00022f10) main_clock2_pane_t1

0xbf1d,	// (0x00022f34) main_clock2_pane_t2_ParamLimits

0xbf1d,	// (0x00022f34) main_clock2_pane_t2

0x0004,

0xf7e3,	// (0x000267fa) main_clock2_pane_t_ParamLimits

0xf7e3,	// (0x000267fa) main_clock2_pane_t

0xbf78,	// (0x00022f8f) popup_clock_analogue_window_cp03_ParamLimits

0xbf78,	// (0x00022f8f) popup_clock_analogue_window_cp03

0xbf98,	// (0x00022faf) popup_clock_digital_window_cp02_ParamLimits

0xbf98,	// (0x00022faf) popup_clock_digital_window_cp02

0xc00d,	// (0x00023024) main_clock2_list_single_pane_ParamLimits

0xc00d,	// (0x00023024) main_clock2_list_single_pane

0x15ae,	// (0x000185c5) list_highlight_pane_cp05

0x3388,	// (0x0001a39f) main_clock2_list_single_pane_t1

0x8ec3,	// (0x0001feda) popup_toolbar_window_cp04_ParamLimits

0xb574,	// (0x0002258b) camera2_autofocus_pane_g2_ParamLimits

0xb574,	// (0x0002258b) camera2_autofocus_pane_g2

0xb580,	// (0x00022597) camera2_autofocus_pane_g3_ParamLimits

0xb580,	// (0x00022597) camera2_autofocus_pane_g3

0xb58c,	// (0x000225a3) camera2_autofocus_pane_g4_ParamLimits

0xb58c,	// (0x000225a3) camera2_autofocus_pane_g4

0xb598,	// (0x000225af) camera2_autofocus_pane_g5_ParamLimits

0xb598,	// (0x000225af) camera2_autofocus_pane_g5

0x0004,

0xf72c,	// (0x00026743) camera2_autofocus_pane_g_ParamLimits

0xf72c,	// (0x00026743) camera2_autofocus_pane_g

0xb763,	// (0x0002277a) camera2_autofocus_pane_cp_g2

0xb76b,	// (0x00022782) camera2_autofocus_pane_cp_g3

0xb773,	// (0x0002278a) camera2_autofocus_pane_cp_g4

0xb77b,	// (0x00022792) camera2_autofocus_pane_cp_g5

0x0004,

0xf792,	// (0x000267a9) camera2_autofocus_pane_cp_g

0xbdb2,	// (0x00022dc9) popup_dialer_spcha_window

0x001a,	// (0x00017031) bg_popup_sub_pane_cp07

0x3396,	// (0x0001a3ad) list_spcha_pane

0x339e,	// (0x0001a3b5) list_single_spcha_pane_ParamLimits

0x339e,	// (0x0001a3b5) list_single_spcha_pane

0x001a,	// (0x00017031) list_highlight_pane_cp06

0x33af,	// (0x0001a3c6) list_single_spcha_pane_t1

0x248e,	// (0x000194a5) popup_call2_audio_out_window_g4_ParamLimits

0x248e,	// (0x000194a5) popup_call2_audio_out_window_g4

0x001a,	// (0x00017031) main_imed2_pane

0x2a75,	// (0x00019a8c) popup_imed_adjust2_window

0xaf24,	// (0x00021f3b) popup_imed_trans_window_ParamLimits

0xaf24,	// (0x00021f3b) popup_imed_trans_window

0x2d91,	// (0x00019da8) popup_blid_sat_info2_window_t1

0x2d9f,	// (0x00019db6) popup_blid_sat_info2_window_t2

0x000a,

0xf6c1,	// (0x000266d8) popup_blid_sat_info2_window_t

0xc03f,	// (0x00023056) aid_size_cell_colour_35

0xc059,	// (0x00023070) aid_size_cell_colour_112

0xc070,	// (0x00023087) aid_size_cell_effect

0x008a,	// (0x000170a1) bg_tb_trans_pane_cp02

0x10a3,	// (0x000180ba) heading_imed_pane

0xc08a,	// (0x000230a1) listscroll_imed_pane

0x33bd,	// (0x0001a3d4) heading_imed_pane_g1

0x33c5,	// (0x0001a3dc) heading_imed_pane_t1

0x33d3,	// (0x0001a3ea) grid_imed_colour_35_pane_ParamLimits

0x33d3,	// (0x0001a3ea) grid_imed_colour_35_pane

0xc096,	// (0x000230ad) grid_imed_effect_pane

0x33ee,	// (0x0001a405) list_imed_aspect_pane

0xc0a6,	// (0x000230bd) scroll_pane_cp027_ParamLimits

0xc0a6,	// (0x000230bd) scroll_pane_cp027

0xc0b2,	// (0x000230c9) cell_imed_effect_pane_ParamLimits

0xc0b2,	// (0x000230c9) cell_imed_effect_pane

0x33f6,	// (0x0001a40d) cell_imed_colour_pane_ParamLimits

0x33f6,	// (0x0001a40d) cell_imed_colour_pane

0x3438,	// (0x0001a44f) cell_imed_colour_pane_g1_ParamLimits

0x3438,	// (0x0001a44f) cell_imed_colour_pane_g1

0x3449,	// (0x0001a460) hgihlgiht_grid_pane_cp016_ParamLimits

0x3449,	// (0x0001a460) hgihlgiht_grid_pane_cp016

0xc0ca,	// (0x000230e1) cell_imed_effect_pane_g1

0xc0d2,	// (0x000230e9) grid_highlight_pane_cp017

0x345a,	// (0x0001a471) list_imed_single_pane_ParamLimits

0x345a,	// (0x0001a471) list_imed_single_pane

0x001a,	// (0x00017031) list_highlight_pane_cp07

0x3471,	// (0x0001a488) list_imed_aspect_pane_comp1_t1

0x2a4d,	// (0x00019a64) bg_tb_trans_pane_cp05

0x3493,	// (0x0001a4aa) popup_imed_adjust2_window_g1

0x34ba,	// (0x0001a4d1) popup_imed_adjust2_window_t1

0x34d2,	// (0x0001a4e9) slider_imed_adjust_pane

0x34e6,	// (0x0001a4fd) slider_imed_adjust_pane_g1

0x34f6,	// (0x0001a50d) slider_imed_adjust_pane_g2

0x3506,	// (0x0001a51d) slider_imed_adjust_pane_g3

0x3517,	// (0x0001a52e) slider_imed_adjust_pane_g4

0x0003,

0xf800,	// (0x00026817) slider_imed_adjust_pane_g

0xc0db,	// (0x000230f2) aid_size_cell_clipart2

0xc0e7,	// (0x000230fe) grid_imed_clipart_pane

0x3528,	// (0x0001a53f) scroll_pane_cp031

0xc0f1,	// (0x00023108) cell_imed_clipart_pane_ParamLimits

0xc0f1,	// (0x00023108) cell_imed_clipart_pane

0xc118,	// (0x0002312f) cell_imed_clipart_pane_g1

0x001a,	// (0x00017031) grid_highlight_pane_cp014

0xbedb,	// (0x00022ef2) main_clock2_pane_g1_ParamLimits

0xbedb,	// (0x00022ef2) main_clock2_pane_g1

0xbfb4,	// (0x00022fcb) aid_call2_pane_cp10

0xbfc6,	// (0x00022fdd) aid_call_pane_cp10

0x14e3,	// (0x000184fa) popup_clock_analogue_window_cp10_g1

0x14e3,	// (0x000184fa) popup_clock_analogue_window_cp10_g2

0xbfd8,	// (0x00022fef) popup_clock_analogue_window_cp10_g3

0xbfd8,	// (0x00022fef) popup_clock_analogue_window_cp10_g4

0x14e3,	// (0x000184fa) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7ee,	// (0x00026805) popup_clock_analogue_window_cp10_g

0xbfee,	// (0x00023005) popup_clock_analogue_window_cp10_t1

0x742f,	// (0x0001e446) clock_digital_number_pane_cp10_ParamLimits

0x742f,	// (0x0001e446) clock_digital_number_pane_cp10

0x7447,	// (0x0001e45e) clock_digital_number_pane_cp11_ParamLimits

0x7447,	// (0x0001e45e) clock_digital_number_pane_cp11

0x745f,	// (0x0001e476) clock_digital_number_pane_cp12_ParamLimits

0x745f,	// (0x0001e476) clock_digital_number_pane_cp12

0x7477,	// (0x0001e48e) clock_digital_number_pane_cp13_ParamLimits

0x7477,	// (0x0001e48e) clock_digital_number_pane_cp13

0x748f,	// (0x0001e4a6) clock_digital_separator_pane_cp10_ParamLimits

0x748f,	// (0x0001e4a6) clock_digital_separator_pane_cp10

0xc01f,	// (0x00023036) popup_clock_digital_window_cp02_t1_ParamLimits

0xc01f,	// (0x00023036) popup_clock_digital_window_cp02_t1

0x06fc,	// (0x00017713) clock_digital_number_pane_cp10_g1

0x06fc,	// (0x00017713) clock_digital_number_pane_cp10_g2

0x0001,

0xf809,	// (0x00026820) clock_digital_number_pane_cp10_g

0x06fc,	// (0x00017713) clock_digital_separator_pane_cp10_g1

0x06fc,	// (0x00017713) clock_digital_separator_pane_g2_cp10

0x157e,	// (0x00018595) navi_pane_vded_g4

0x1587,	// (0x0001859e) navi_pane_vded_g5

0x1590,	// (0x000185a7) navi_pane_vded_t1

0x001a,	// (0x00017031) main_vded_pane

0xc121,	// (0x00023138) main_vded_pane_g1

0xc12d,	// (0x00023144) main_vded_pane_g2

0xc137,	// (0x0002314e) main_vded_pane_g3

0x0002,

0xf80e,	// (0x00026825) main_vded_pane_g

0xc141,	// (0x00023158) main_vded_pane_t1

0xc14f,	// (0x00023166) main_vded_pane_t2

0x0001,

0xf815,	// (0x0002682c) main_vded_pane_t

0xc15d,	// (0x00023174) vded_slider_pane

0xc167,	// (0x0002317e) vded_video_pane

0x3530,	// (0x0001a547) vded_video_pane_g1

0xc171,	// (0x00023188) vded_video_pane_g2

0x2f55,	// (0x00019f6c) vded_video_pane_g3

0x0002,

0xf81a,	// (0x00026831) vded_video_pane_g

0x353a,	// (0x0001a551) vded_slider_pane_g1

0x2c62,	// (0x00019c79) vded_slider_pane_g2

0x3543,	// (0x0001a55a) vded_slider_pane_g3

0x354c,	// (0x0001a563) vded_slider_pane_g4

0x3555,	// (0x0001a56c) vded_slider_pane_g5

0x0004,

0xf821,	// (0x00026838) vded_slider_pane_g

0xbcb2,	// (0x00022cc9) mup3_rocker_pane_ParamLimits

0xbcb2,	// (0x00022cc9) mup3_rocker_pane

0xc17a,	// (0x00023191) mup3_control_keys_pane_g1

0xc182,	// (0x00023199) mup3_control_keys_pane_g2

0xc18a,	// (0x000231a1) mup3_control_keys_pane_g3

0xc192,	// (0x000231a9) mup3_control_keys_pane_g4

0x0003,

0xf82c,	// (0x00026843) mup3_control_keys_pane_g

0x834e,	// (0x0001f365) popup_toolbar2_fixed_window_cp01_ParamLimits

0x834e,	// (0x0001f365) popup_toolbar2_fixed_window_cp01

0xbccc,	// (0x00022ce3) popup_toolbar2_fixed_window_cp02_ParamLimits

0xbccc,	// (0x00022ce3) popup_toolbar2_fixed_window_cp02

0x1dcd,	// (0x00018de4) popup_call2_audio_second_window_t4_ParamLimits

0x1dcd,	// (0x00018de4) popup_call2_audio_second_window_t4

0x22fb,	// (0x00019312) popup_call2_audio_first_window_t6_ParamLimits

0x22fb,	// (0x00019312) popup_call2_audio_first_window_t6

0x2591,	// (0x000195a8) popup_call2_audio_out_window_t6_ParamLimits

0x2591,	// (0x000195a8) popup_call2_audio_out_window_t6

0x001a,	// (0x00017031) main_vitu_pane

0xc1a2,	// (0x000231b9) aid_size_cell_itu_ParamLimits

0xc1a2,	// (0x000231b9) aid_size_cell_itu

0x381c,	// (0x0001a833) bg_popup_window_pane_cp08_ParamLimits

0x381c,	// (0x0001a833) bg_popup_window_pane_cp08

0xc1b0,	// (0x000231c7) field_vitu_entry_pane_ParamLimits

0xc1b0,	// (0x000231c7) field_vitu_entry_pane

0xc1bf,	// (0x000231d6) grid_vitu_function_pane_ParamLimits

0xc1bf,	// (0x000231d6) grid_vitu_function_pane

0xc1cf,	// (0x000231e6) grid_vitu_itu_pane_ParamLimits

0xc1cf,	// (0x000231e6) grid_vitu_itu_pane

0xc1df,	// (0x000231f6) cell_vitu_itu_pane_ParamLimits

0xc1df,	// (0x000231f6) cell_vitu_itu_pane

0xc1f4,	// (0x0002320b) cell_vitu_function_pane_ParamLimits

0xc1f4,	// (0x0002320b) cell_vitu_function_pane

0x008a,	// (0x000170a1) bg_popup_sub_pane_cp08_ParamLimits

0x008a,	// (0x000170a1) bg_popup_sub_pane_cp08

0xc208,	// (0x0002321f) field_vitu_entry_pane_t1_ParamLimits

0xc208,	// (0x0002321f) field_vitu_entry_pane_t1

0x3576,	// (0x0001a58d) field_vitu_entry_pane_t2_ParamLimits

0x3576,	// (0x0001a58d) field_vitu_entry_pane_t2

0x0001,

0xf83a,	// (0x00026851) field_vitu_entry_pane_t_ParamLimits

0xf83a,	// (0x00026851) field_vitu_entry_pane_t

0x3593,	// (0x0001a5aa) bg_button_pane_cp05_ParamLimits

0x3593,	// (0x0001a5aa) bg_button_pane_cp05

0xc226,	// (0x0002323d) cell_vitu_itu_pane_g1

0xc23e,	// (0x00023255) cell_vitu_itu_pane_t1_ParamLimits

0xc23e,	// (0x00023255) cell_vitu_itu_pane_t1

0xc250,	// (0x00023267) cell_vitu_itu_pane_t2_ParamLimits

0xc250,	// (0x00023267) cell_vitu_itu_pane_t2

0x0002,

0xf83f,	// (0x00026856) cell_vitu_itu_pane_t_ParamLimits

0xf83f,	// (0x00026856) cell_vitu_itu_pane_t

0x35a1,	// (0x0001a5b8) bg_button_pane_cp07

0xc285,	// (0x0002329c) cell_vitu_function_pane_g1

0x6d76,	// (0x0001dd8d) main_calc_pane_g1

0x8157,	// (0x0001f16e) aid_visual_content_pane

0x001a,	// (0x00017031) main_vradio_pane

0xc28e,	// (0x000232a5) main_vradio_pane_g1_ParamLimits

0xc28e,	// (0x000232a5) main_vradio_pane_g1

0x35ab,	// (0x0001a5c2) main_vradio_pane_g2_ParamLimits

0x35ab,	// (0x0001a5c2) main_vradio_pane_g2

0x0001,

0xf846,	// (0x0002685d) main_vradio_pane_g_ParamLimits

0xf846,	// (0x0002685d) main_vradio_pane_g

0xc29e,	// (0x000232b5) main_vradio_pane_t1_ParamLimits

0xc29e,	// (0x000232b5) main_vradio_pane_t1

0xc2b0,	// (0x000232c7) main_vradio_pane_t2_ParamLimits

0xc2b0,	// (0x000232c7) main_vradio_pane_t2

0x35b8,	// (0x0001a5cf) main_vradio_pane_t3_ParamLimits

0x35b8,	// (0x0001a5cf) main_vradio_pane_t3

0x0002,

0xf84b,	// (0x00026862) main_vradio_pane_t_ParamLimits

0xf84b,	// (0x00026862) main_vradio_pane_t

0xc2c2,	// (0x000232d9) vradio_rocker_control_pane_ParamLimits

0xc2c2,	// (0x000232d9) vradio_rocker_control_pane

0xc2ce,	// (0x000232e5) vradio_station_info_pane_ParamLimits

0xc2ce,	// (0x000232e5) vradio_station_info_pane

0x35cc,	// (0x0001a5e3) vradio_frequency_info_pane_ParamLimits

0x35cc,	// (0x0001a5e3) vradio_frequency_info_pane

0x2f55,	// (0x00019f6c) vradio_station_info_pane_g1

0x35db,	// (0x0001a5f2) vradio_station_info_pane_t1_ParamLimits

0x35db,	// (0x0001a5f2) vradio_station_info_pane_t1

0x35fd,	// (0x0001a614) vradio_station_info_pane_t2_ParamLimits

0x35fd,	// (0x0001a614) vradio_station_info_pane_t2

0x0001,

0xf852,	// (0x00026869) vradio_station_info_pane_t_ParamLimits

0xf852,	// (0x00026869) vradio_station_info_pane_t

0x360f,	// (0x0001a626) vradio_tuning_pane

0x3617,	// (0x0001a62e) vradio_rocker_control_pane_g1

0x361f,	// (0x0001a636) vradio_rocker_control_pane_g2

0x3627,	// (0x0001a63e) vradio_rocker_control_pane_g3

0x362f,	// (0x0001a646) vradio_rocker_control_pane_g4

0x3637,	// (0x0001a64e) vradio_rocker_control_pane_g5

0x0004,

0xf857,	// (0x0002686e) vradio_rocker_control_pane_g

0xc2dd,	// (0x000232f4) vradio_frequency_info_pane_g1

0x363f,	// (0x0001a656) vradio_frequency_info_pane_t1_ParamLimits

0x363f,	// (0x0001a656) vradio_frequency_info_pane_t1

0xc2e7,	// (0x000232fe) vradio_tuning_pane_g1

0xc2f0,	// (0x00023307) vradio_tuning_pane_t1

0x0048,	// (0x0001705f) area_side_right_pane_ParamLimits

0x0048,	// (0x0001705f) area_side_right_pane

0x2a14,	// (0x00019a2b) status_small_pane_g1

0x2a1c,	// (0x00019a33) status_small_pane_g2

0x2a25,	// (0x00019a3c) status_small_pane_g3

0x2a2e,	// (0x00019a45) status_small_pane_g4

0x0003,

0xf617,	// (0x0002662e) status_small_pane_g

0x2a37,	// (0x00019a4e) status_small_pane_t1

0x001a,	// (0x00017031) main_video3_pane

0x3653,	// (0x0001a66a) cams_zoom_vslider_pane

0x365b,	// (0x0001a672) image3_wide_pane_ParamLimits

0x365b,	// (0x0001a672) image3_wide_pane

0x3675,	// (0x0001a68c) image3_wide_small_pane

0x3681,	// (0x0001a698) main_video3_pane_g1_ParamLimits

0x3681,	// (0x0001a698) main_video3_pane_g1

0x369d,	// (0x0001a6b4) main_video3_pane_g2_ParamLimits

0x369d,	// (0x0001a6b4) main_video3_pane_g2

0x0001,

0xf862,	// (0x00026879) main_video3_pane_g_ParamLimits

0xf862,	// (0x00026879) main_video3_pane_g

0x36b9,	// (0x0001a6d0) main_video3_pane_t1_ParamLimits

0x36b9,	// (0x0001a6d0) main_video3_pane_t1

0x36e4,	// (0x0001a6fb) main_video3_pane_t2_ParamLimits

0x36e4,	// (0x0001a6fb) main_video3_pane_t2

0x370f,	// (0x0001a726) main_video3_pane_t3_ParamLimits

0x370f,	// (0x0001a726) main_video3_pane_t3

0x0002,

0xf867,	// (0x0002687e) main_video3_pane_t_ParamLimits

0xf867,	// (0x0002687e) main_video3_pane_t

0x373c,	// (0x0001a753) cams_zoom_vslider_pane_g1

0x3745,	// (0x0001a75c) cams_zoom_vslider_pane_g2

0x0001,

0xf86e,	// (0x00026885) cams_zoom_vslider_pane_g

0x374d,	// (0x0001a764) small_slider_vertical_pane

0x2f55,	// (0x00019f6c) small_slider_vertical_pane_g1

0x2f55,	// (0x00019f6c) small_slider_vertical_pane_g2

0x3755,	// (0x0001a76c) small_slider_vertical_pane_g3

0x0002,

0xf873,	// (0x0002688a) small_slider_vertical_pane_g

0x001a,	// (0x00017031) main_hwr_training_pane

0x375e,	// (0x0001a775) hwr_training_instruct_pane_ParamLimits

0x375e,	// (0x0001a775) hwr_training_instruct_pane

0xc2ff,	// (0x00023316) hwr_training_navi_pane_ParamLimits

0xc2ff,	// (0x00023316) hwr_training_navi_pane

0xc319,	// (0x00023330) hwr_training_write_pane_ParamLimits

0xc319,	// (0x00023330) hwr_training_write_pane

0x001a,	// (0x00017031) bg_frame_shadow_pane

0x3795,	// (0x0001a7ac) hwr_training_write_pane_g1

0x379d,	// (0x0001a7b4) hwr_training_write_pane_g2

0x37a5,	// (0x0001a7bc) hwr_training_write_pane_g3

0x37ad,	// (0x0001a7c4) hwr_training_write_pane_g4

0x37b5,	// (0x0001a7cc) hwr_training_write_pane_g5

0x37bd,	// (0x0001a7d4) hwr_training_write_pane_g6

0x37c5,	// (0x0001a7dc) hwr_training_write_pane_g7

0x0006,

0xf87a,	// (0x00026891) hwr_training_write_pane_g

0x74a7,	// (0x0001e4be) hwr_training_navi_pane_g1_ParamLimits

0x74a7,	// (0x0001e4be) hwr_training_navi_pane_g1

0x74b9,	// (0x0001e4d0) hwr_training_navi_pane_g2_ParamLimits

0x74b9,	// (0x0001e4d0) hwr_training_navi_pane_g2

0x74cb,	// (0x0001e4e2) hwr_training_navi_pane_g3_ParamLimits

0x74cb,	// (0x0001e4e2) hwr_training_navi_pane_g3

0x74db,	// (0x0001e4f2) hwr_training_navi_pane_g4_ParamLimits

0x74db,	// (0x0001e4f2) hwr_training_navi_pane_g4

0x0004,

0xf889,	// (0x000268a0) hwr_training_navi_pane_g_ParamLimits

0xf889,	// (0x000268a0) hwr_training_navi_pane_g

0x74f5,	// (0x0001e50c) hwr_training_navi_pane_t1

0xc351,	// (0x00023368) list_single_hwr_training_instruct_pane_ParamLimits

0xc351,	// (0x00023368) list_single_hwr_training_instruct_pane

0x382a,	// (0x0001a841) list_single_hwr_training_instruct_pane_t1

0x2e95,	// (0x00019eac) bg_frame_shadow_pane_g1

0x3839,	// (0x0001a850) bg_frame_shadow_pane_g2

0x3841,	// (0x0001a858) bg_frame_shadow_pane_g3

0x3849,	// (0x0001a860) bg_frame_shadow_pane_g4

0x3851,	// (0x0001a868) bg_frame_shadow_pane_g5

0x3859,	// (0x0001a870) bg_frame_shadow_pane_g6

0x3861,	// (0x0001a878) bg_frame_shadow_pane_g7

0x0936,	// (0x0001794d) bg_frame_shadow_pane_g8

0x0007,

0xf894,	// (0x000268ab) bg_frame_shadow_pane_g

0x001a,	// (0x00017031) main_video_tele_dialer_pane

0x7503,	// (0x0001e51a) aid_size_cell_video_keypad_ParamLimits

0x7503,	// (0x0001e51a) aid_size_cell_video_keypad

0x7513,	// (0x0001e52a) grid_video_dialer_keypad_pane_ParamLimits

0x7513,	// (0x0001e52a) grid_video_dialer_keypad_pane

0x7545,	// (0x0001e55c) video_down_pane_cp_ParamLimits

0x7545,	// (0x0001e55c) video_down_pane_cp

0x7551,	// (0x0001e568) cell_video_dialer_keypad_pane_ParamLimits

0x7551,	// (0x0001e568) cell_video_dialer_keypad_pane

0x3869,	// (0x0001a880) bg_button_pane_cp08_ParamLimits

0x3869,	// (0x0001a880) bg_button_pane_cp08

0xc3a3,	// (0x000233ba) cell_video_dialer_keypad_pane_g1_ParamLimits

0xc3a3,	// (0x000233ba) cell_video_dialer_keypad_pane_g1

0xbca6,	// (0x00022cbd) mup3_rocker2_pane_ParamLimits

0xbca6,	// (0x00022cbd) mup3_rocker2_pane

0x2f55,	// (0x00019f6c) mup3_rocker2_pane_g1

0xaeb2,	// (0x00021ec9) main_dialer2_pane

0x001a,	// (0x00017031) main_mp4_pane

0x756e,	// (0x0001e585) main_mp4_pane_g1_ParamLimits

0x756e,	// (0x0001e585) main_mp4_pane_g1

0x757c,	// (0x0001e593) main_mp4_pane_g2_ParamLimits

0x757c,	// (0x0001e593) main_mp4_pane_g2

0x758a,	// (0x0001e5a1) main_mp4_pane_g3_ParamLimits

0x758a,	// (0x0001e5a1) main_mp4_pane_g3

0x75cf,	// (0x0001e5e6) main_mp4_pane_g4_ParamLimits

0x75cf,	// (0x0001e5e6) main_mp4_pane_g4

0x75f7,	// (0x0001e60e) main_mp4_pane_g5_ParamLimits

0x75f7,	// (0x0001e60e) main_mp4_pane_g5

0x0005,

0xf8b4,	// (0x000268cb) main_mp4_pane_g_ParamLimits

0xf8b4,	// (0x000268cb) main_mp4_pane_g

0x7647,	// (0x0001e65e) main_mp4_pane_t1_ParamLimits

0x7647,	// (0x0001e65e) main_mp4_pane_t1

0x76a3,	// (0x0001e6ba) main_mp4_pane_t2_ParamLimits

0x76a3,	// (0x0001e6ba) main_mp4_pane_t2

0x39b1,	// (0x0001a9c8) main_mp4_pane_t3_ParamLimits

0x39b1,	// (0x0001a9c8) main_mp4_pane_t3

0x76f5,	// (0x0001e70c) main_mp4_pane_t4_ParamLimits

0x76f5,	// (0x0001e70c) main_mp4_pane_t4

0x0003,

0xf8c1,	// (0x000268d8) main_mp4_pane_t_ParamLimits

0xf8c1,	// (0x000268d8) main_mp4_pane_t

0x7739,	// (0x0001e750) mp4_progress_pane_ParamLimits

0x7739,	// (0x0001e750) mp4_progress_pane

0x7783,	// (0x0001e79a) mp4_rocker_pane_ParamLimits

0x7783,	// (0x0001e79a) mp4_rocker_pane

0x3a87,	// (0x0001aa9e) mp4_progress_pane_t1

0x3aa0,	// (0x0001aab7) mp4_progress_pane_t2

0x0001,

0xf8ca,	// (0x000268e1) mp4_progress_pane_t

0x3ab9,	// (0x0001aad0) mup_progress_pane_cp04

0x452a,	// (0x0001b541) mp4_rocker_pane_g1

0x77a3,	// (0x0001e7ba) aid_cell_size_keypad2_ParamLimits

0x77a3,	// (0x0001e7ba) aid_cell_size_keypad2

0x77b3,	// (0x0001e7ca) dialer2_ne_pane_ParamLimits

0x77b3,	// (0x0001e7ca) dialer2_ne_pane

0x77c1,	// (0x0001e7d8) grid_dialer2_keypad_pane_ParamLimits

0x77c1,	// (0x0001e7d8) grid_dialer2_keypad_pane

0x4593,	// (0x0001b5aa) bg_popup_call_pane_cp07_ParamLimits

0x4593,	// (0x0001b5aa) bg_popup_call_pane_cp07

0xc3da,	// (0x000233f1) dialer2_ne_pane_t1_ParamLimits

0xc3da,	// (0x000233f1) dialer2_ne_pane_t1

0x77d1,	// (0x0001e7e8) cell_dialer2_keypad_pane_ParamLimits

0x77d1,	// (0x0001e7e8) cell_dialer2_keypad_pane

0x3ad7,	// (0x0001aaee) bg_button_pane_pane_cp04_ParamLimits

0x3ad7,	// (0x0001aaee) bg_button_pane_pane_cp04

0xc3ff,	// (0x00023416) cell_dialer2_keypad_pane_g1_ParamLimits

0xc3ff,	// (0x00023416) cell_dialer2_keypad_pane_g1

0x8d85,	// (0x0001fd9c) aid_placing_vt_set_content_ParamLimits

0x8d85,	// (0x0001fd9c) aid_placing_vt_set_content

0x8db1,	// (0x0001fdc8) aid_placing_vt_set_title_ParamLimits

0x8db1,	// (0x0001fdc8) aid_placing_vt_set_title

0x001a,	// (0x00017031) main_image3_pane

0x781a,	// (0x0001e831) area_side_right_pane_cp01_ParamLimits

0x781a,	// (0x0001e831) area_side_right_pane_cp01

0x7847,	// (0x0001e85e) main_image3_pane_g1_ParamLimits

0x7847,	// (0x0001e85e) main_image3_pane_g1

0x7855,	// (0x0001e86c) main_image3_pane_g2_ParamLimits

0x7855,	// (0x0001e86c) main_image3_pane_g2

0x786e,	// (0x0001e885) main_image3_pane_g3_ParamLimits

0x786e,	// (0x0001e885) main_image3_pane_g3

0x7887,	// (0x0001e89e) main_image3_pane_g4_ParamLimits

0x7887,	// (0x0001e89e) main_image3_pane_g4

0x0003,

0xf8d9,	// (0x000268f0) main_image3_pane_g_ParamLimits

0xf8d9,	// (0x000268f0) main_image3_pane_g

0x78a0,	// (0x0001e8b7) main_image3_pane_t1_ParamLimits

0x78a0,	// (0x0001e8b7) main_image3_pane_t1

0x78c5,	// (0x0001e8dc) main_image3_pane_t2_ParamLimits

0x78c5,	// (0x0001e8dc) main_image3_pane_t2

0x78e4,	// (0x0001e8fb) main_image3_pane_t3_ParamLimits

0x78e4,	// (0x0001e8fb) main_image3_pane_t3

0x0003,

0xf8e2,	// (0x000268f9) main_image3_pane_t_ParamLimits

0xf8e2,	// (0x000268f9) main_image3_pane_t

0x381c,	// (0x0001a833) grid_sctrl_middle_pane_cp01_ParamLimits

0x381c,	// (0x0001a833) grid_sctrl_middle_pane_cp01

0xc467,	// (0x0002347e) cell_sctrl_middle_pane_cp01_ParamLimits

0xc467,	// (0x0002347e) cell_sctrl_middle_pane_cp01

0xc478,	// (0x0002348f) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xc478,	// (0x0002348f) cell_sctrl_middle_pane_cp01_g1

0x001a,	// (0x00017031) main_call4_pane

0xc485,	// (0x0002349c) aid_size_button_call4_ParamLimits

0xc485,	// (0x0002349c) aid_size_button_call4

0xc4b5,	// (0x000234cc) call4_windows_pane_ParamLimits

0xc4b5,	// (0x000234cc) call4_windows_pane

0xc4cf,	// (0x000234e6) grid_call4_button_pane_ParamLimits

0xc4cf,	// (0x000234e6) grid_call4_button_pane

0x3b15,	// (0x0001ab2c) call4_windows_conf_pane

0x3b2a,	// (0x0001ab41) popup_call4_audio_first_window_ParamLimits

0x3b2a,	// (0x0001ab41) popup_call4_audio_first_window

0x3b76,	// (0x0001ab8d) popup_call4_audio_second_window_ParamLimits

0x3b76,	// (0x0001ab8d) popup_call4_audio_second_window

0x3b8a,	// (0x0001aba1) popup_call4_audio_wait_window_ParamLimits

0x3b8a,	// (0x0001aba1) popup_call4_audio_wait_window

0xc4f3,	// (0x0002350a) cell_call4_button_pane_ParamLimits

0xc4f3,	// (0x0002350a) cell_call4_button_pane

0xc518,	// (0x0002352f) bg_button_pane_cp09_ParamLimits

0xc518,	// (0x0002352f) bg_button_pane_cp09

0xc524,	// (0x0002353b) cell_call4_button_pane_g1_ParamLimits

0xc524,	// (0x0002353b) cell_call4_button_pane_g1

0xc531,	// (0x00023548) cell_call4_button_pane_t1_ParamLimits

0xc531,	// (0x00023548) cell_call4_button_pane_t1

0x3bd2,	// (0x0001abe9) popup_call4_audio_conf_window_ParamLimits

0x3bd2,	// (0x0001abe9) popup_call4_audio_conf_window

0xbcd9,	// (0x00022cf0) mup3_progress_pane_t1_ParamLimits

0xbcf8,	// (0x00022d0f) mup3_progress_pane_t2_ParamLimits

0x326f,	// (0x0001a286) mup3_progress_pane_t3_ParamLimits

0xf7bb,	// (0x000267d2) mup3_progress_pane_t_ParamLimits

0x328c,	// (0x0001a2a3) mup_progress_pane_cp03_ParamLimits

0xc19a,	// (0x000231b1) mup3_control_keys_pane_g4_copy1

0x7767,	// (0x0001e77e) mp4_rocker2_pane_ParamLimits

0x7767,	// (0x0001e77e) mp4_rocker2_pane

0x3bee,	// (0x0001ac05) mp4_rocker2_pane_g1

0x3be6,	// (0x0001abfd) mp4_rocker2_pane_g2

0x7945,	// (0x0001e95c) mp4_rocker2_pane_g3

0x794d,	// (0x0001e964) mp4_rocker2_pane_g4

0x7955,	// (0x0001e96c) mp4_rocker2_pane_g5

0x0004,

0xf8eb,	// (0x00026902) mp4_rocker2_pane_g

0x001a,	// (0x00017031) main_camera4_pane

0x001a,	// (0x00017031) main_video4_pane

0x7521,	// (0x0001e538) main_video_tele_dialer_pane_t1_ParamLimits

0x7521,	// (0x0001e538) main_video_tele_dialer_pane_t1

0x7533,	// (0x0001e54a) main_video_tele_dialer_pane_t2_ParamLimits

0x7533,	// (0x0001e54a) main_video_tele_dialer_pane_t2

0x0001,

0xf8a5,	// (0x000268bc) main_video_tele_dialer_pane_t_ParamLimits

0xf8a5,	// (0x000268bc) main_video_tele_dialer_pane_t

0x7975,	// (0x0001e98c) cam4_autofocus_pane_ParamLimits

0x7975,	// (0x0001e98c) cam4_autofocus_pane

0x798f,	// (0x0001e9a6) cam4_image_uncrop_pane_ParamLimits

0x798f,	// (0x0001e9a6) cam4_image_uncrop_pane

0x79a6,	// (0x0001e9bd) cam4_indicators_pane_ParamLimits

0x79a6,	// (0x0001e9bd) cam4_indicators_pane

0x79c2,	// (0x0001e9d9) main_camera4_pane_g1_ParamLimits

0x79c2,	// (0x0001e9d9) main_camera4_pane_g1

0x79ce,	// (0x0001e9e5) main_camera4_pane_g2_ParamLimits

0x79ce,	// (0x0001e9e5) main_camera4_pane_g2

0x79ce,	// (0x0001e9e5) main_camera4_pane_g3_ParamLimits

0x79ce,	// (0x0001e9e5) main_camera4_pane_g3

0x79da,	// (0x0001e9f1) main_camera4_pane_g4_ParamLimits

0x79da,	// (0x0001e9f1) main_camera4_pane_g4

0x79e6,	// (0x0001e9fd) main_camera4_pane_g5_ParamLimits

0x79e6,	// (0x0001e9fd) main_camera4_pane_g5

0x0005,

0xf8f6,	// (0x0002690d) main_camera4_pane_g_ParamLimits

0xf8f6,	// (0x0002690d) main_camera4_pane_g

0x7a00,	// (0x0001ea17) main_camera4_pane_t1_ParamLimits

0x7a00,	// (0x0001ea17) main_camera4_pane_t1

0x7a24,	// (0x0001ea3b) bg_tb_trans_pane_cp06

0x7a3a,	// (0x0001ea51) cam4_indicators_pane_g1

0x7a4b,	// (0x0001ea62) cam4_indicators_pane_g2

0x0002,

0xf911,	// (0x00026928) cam4_indicators_pane_g

0x7a69,	// (0x0001ea80) cam4_indicators_pane_t1

0x7a93,	// (0x0001eaaa) main_video4_pane_g1_ParamLimits

0x7a93,	// (0x0001eaaa) main_video4_pane_g1

0x7a9f,	// (0x0001eab6) main_video4_pane_g2_ParamLimits

0x7a9f,	// (0x0001eab6) main_video4_pane_g2

0x7aab,	// (0x0001eac2) main_video4_pane_g3_ParamLimits

0x7aab,	// (0x0001eac2) main_video4_pane_g3

0x7ab7,	// (0x0001eace) main_video4_pane_g4_ParamLimits

0x7ab7,	// (0x0001eace) main_video4_pane_g4

0x0004,

0xf918,	// (0x0002692f) main_video4_pane_g_ParamLimits

0xf918,	// (0x0002692f) main_video4_pane_g

0x7ad7,	// (0x0001eaee) vid4_indicators_pane_ParamLimits

0x7ad7,	// (0x0001eaee) vid4_indicators_pane

0x7af5,	// (0x0001eb0c) video4_image_uncrop_cif_pane_ParamLimits

0x7af5,	// (0x0001eb0c) video4_image_uncrop_cif_pane

0x7b04,	// (0x0001eb1b) video4_image_uncrop_nhd_pane_ParamLimits

0x7b04,	// (0x0001eb1b) video4_image_uncrop_nhd_pane

0x798f,	// (0x0001e9a6) video4_image_uncrop_vga_pane_ParamLimits

0x798f,	// (0x0001e9a6) video4_image_uncrop_vga_pane

0x7b11,	// (0x0001eb28) bg_tb_trans_pane_cp07

0x7a3a,	// (0x0001ea51) vid4_indicators_pane_g1

0x7b27,	// (0x0001eb3e) vid4_indicators_pane_g2

0x7b38,	// (0x0001eb4f) vid4_indicators_pane_g3

0x0004,

0xf923,	// (0x0002693a) vid4_indicators_pane_g

0x7b65,	// (0x0001eb7c) vid4_indicators_pane_t1

0xc567,	// (0x0002357e) cam4_autofocus_pane_g1

0xc56f,	// (0x00023586) cam4_autofocus_pane_g2

0xc577,	// (0x0002358e) cam4_autofocus_pane_g3

0x0002,

0xf92e,	// (0x00026945) cam4_autofocus_pane_g

0xc57f,	// (0x00023596) cam4_autofocus_pane_g3_copy1

0xc387,	// (0x0002339e) video_down_pane_cp_t1

0xc395,	// (0x000233ac) video_down_pane_cp_t2

0x0001,

0xf8aa,	// (0x000268c1) video_down_pane_cp_t

0x381c,	// (0x0001a833) popup_vitu2_window_ParamLimits

0x381c,	// (0x0001a833) popup_vitu2_window

0x7b7e,	// (0x0001eb95) aid_size_cell2_itu2_ParamLimits

0x7b7e,	// (0x0001eb95) aid_size_cell2_itu2

0x7ba0,	// (0x0001ebb7) aid_size_cell_itu2_ParamLimits

0x7ba0,	// (0x0001ebb7) aid_size_cell_itu2

0x7be4,	// (0x0001ebfb) bg_popup_window_pane_cp09_ParamLimits

0x7be4,	// (0x0001ebfb) bg_popup_window_pane_cp09

0x7bf2,	// (0x0001ec09) field_vitu2_entry_pane_ParamLimits

0x7bf2,	// (0x0001ec09) field_vitu2_entry_pane

0x7c12,	// (0x0001ec29) grid_vitu2_function_pane_ParamLimits

0x7c12,	// (0x0001ec29) grid_vitu2_function_pane

0x7c56,	// (0x0001ec6d) grid_vitu2_itu_pane_ParamLimits

0x7c56,	// (0x0001ec6d) grid_vitu2_itu_pane

0x7ccc,	// (0x0001ece3) cell_vitu2_itu_pane_ParamLimits

0x7ccc,	// (0x0001ece3) cell_vitu2_itu_pane

0x7ce1,	// (0x0001ecf8) cell_vitu2_function_pane_ParamLimits

0x7ce1,	// (0x0001ecf8) cell_vitu2_function_pane

0x3c8b,	// (0x0001aca2) bg_popup_call_pane_cp08_ParamLimits

0x3c8b,	// (0x0001aca2) bg_popup_call_pane_cp08

0x3ca4,	// (0x0001acbb) field_vitu2_entry_pane_g1

0x3cb0,	// (0x0001acc7) field_vitu2_entry_pane_g2

0x0002,

0xf935,	// (0x0002694c) field_vitu2_entry_pane_g

0x3cca,	// (0x0001ace1) field_vitu2_entry_pane_t1_ParamLimits

0x3cca,	// (0x0001ace1) field_vitu2_entry_pane_t1

0x3cfb,	// (0x0001ad12) field_vitu2_entry_pane_t2_ParamLimits

0x3cfb,	// (0x0001ad12) field_vitu2_entry_pane_t2

0x0001,

0xf93c,	// (0x00026953) field_vitu2_entry_pane_t_ParamLimits

0xf93c,	// (0x00026953) field_vitu2_entry_pane_t

0x7d22,	// (0x0001ed39) bg_button_pane_cp010_ParamLimits

0x7d22,	// (0x0001ed39) bg_button_pane_cp010

0x7d30,	// (0x0001ed47) cell_vitu2_itu_pane_g1

0x7d4e,	// (0x0001ed65) cell_vitu2_itu_pane_t1_ParamLimits

0x7d4e,	// (0x0001ed65) cell_vitu2_itu_pane_t1

0x7da0,	// (0x0001edb7) cell_vitu2_itu_pane_t2_ParamLimits

0x7da0,	// (0x0001edb7) cell_vitu2_itu_pane_t2

0x0002,

0xf946,	// (0x0002695d) cell_vitu2_itu_pane_t_ParamLimits

0xf946,	// (0x0002695d) cell_vitu2_itu_pane_t

0x7b11,	// (0x0001eb28) bg_button_pane_cp011

0x7e5b,	// (0x0001ee72) cell_vitu2_function_pane_g1

0x001a,	// (0x00017031) main_myfav_hc_pane

0x7926,	// (0x0001e93d) popup_image3_note_pane_ParamLimits

0x7926,	// (0x0001e93d) popup_image3_note_pane

0x7934,	// (0x0001e94b) popup_image3_tool_bar_pane_ParamLimits

0x7934,	// (0x0001e94b) popup_image3_tool_bar_pane

0x7e0e,	// (0x0001ee25) cell_vitu2_itu_pane_t3_ParamLimits

0x7e0e,	// (0x0001ee25) cell_vitu2_itu_pane_t3

0x001a,	// (0x00017031) bg_popup_trans_pane

0x3d20,	// (0x0001ad37) grid_image3_tool_bar_pane

0x3d2a,	// (0x0001ad41) bg_popup_trans_pane_g1

0x0dfc,	// (0x00017e13) bg_popup_trans_pane_g2

0x3d32,	// (0x0001ad49) bg_popup_trans_pane_g3

0x3d3a,	// (0x0001ad51) bg_popup_trans_pane_g4

0x3d42,	// (0x0001ad59) bg_popup_trans_pane_g5

0x3d4a,	// (0x0001ad61) bg_popup_trans_pane_g6

0x3d52,	// (0x0001ad69) bg_popup_trans_pane_g7

0x3d5a,	// (0x0001ad71) bg_popup_trans_pane_g8

0x0ddc,	// (0x00017df3) bg_popup_trans_pane_g9

0x0008,

0xf94d,	// (0x00026964) bg_popup_trans_pane_g

0x3d62,	// (0x0001ad79) cell_image3_tool_bar_pane_ParamLimits

0x3d62,	// (0x0001ad79) cell_image3_tool_bar_pane

0x2f55,	// (0x00019f6c) cell_image3_tool_bar_pane_g1

0x001a,	// (0x00017031) bg_popup_trans_pane_cp1

0x3d76,	// (0x0001ad8d) popup_image3_note_pane_t1

0x3d84,	// (0x0001ad9b) popup_image3_note_pane_t2

0x3d92,	// (0x0001ada9) popup_image3_note_pane_t3

0x0002,

0xf960,	// (0x00026977) popup_image3_note_pane_t

0x3da0,	// (0x0001adb7) popup_image3_note_pane_t3_copy1

0xc587,	// (0x0002359e) bg_myfav_hc_instruction_pane_ParamLimits

0xc587,	// (0x0002359e) bg_myfav_hc_instruction_pane

0xc59f,	// (0x000235b6) cell_myfav_contact_pane_ParamLimits

0xc59f,	// (0x000235b6) cell_myfav_contact_pane

0xc5b9,	// (0x000235d0) cell_myfav_contact_pane_cp1_ParamLimits

0xc5b9,	// (0x000235d0) cell_myfav_contact_pane_cp1

0xc5d1,	// (0x000235e8) cell_myfav_contact_pane_cp2_ParamLimits

0xc5d1,	// (0x000235e8) cell_myfav_contact_pane_cp2

0xc5e9,	// (0x00023600) cell_myfav_contact_pane_cp3_ParamLimits

0xc5e9,	// (0x00023600) cell_myfav_contact_pane_cp3

0xc600,	// (0x00023617) cell_myfav_contact_pane_cp4_ParamLimits

0xc600,	// (0x00023617) cell_myfav_contact_pane_cp4

0xc616,	// (0x0002362d) cell_myfav_contact_pane_cp5_ParamLimits

0xc616,	// (0x0002362d) cell_myfav_contact_pane_cp5

0xc62a,	// (0x00023641) cell_myfav_contact_pane_cp6_ParamLimits

0xc62a,	// (0x00023641) cell_myfav_contact_pane_cp6

0xc63e,	// (0x00023655) cell_myfav_contact_pane_cp7_ParamLimits

0xc63e,	// (0x00023655) cell_myfav_contact_pane_cp7

0x3dae,	// (0x0001adc5) listscroll_gen_pane_cp05

0xc656,	// (0x0002366d) main_myfav_hc_pane_g1_ParamLimits

0xc656,	// (0x0002366d) main_myfav_hc_pane_g1

0xc66e,	// (0x00023685) main_myfav_hc_pane_g2_ParamLimits

0xc66e,	// (0x00023685) main_myfav_hc_pane_g2

0x0002,

0xf967,	// (0x0002697e) main_myfav_hc_pane_g_ParamLimits

0xf967,	// (0x0002697e) main_myfav_hc_pane_g

0xc69e,	// (0x000236b5) main_myfav_hc_pane_t1_ParamLimits

0xc69e,	// (0x000236b5) main_myfav_hc_pane_t1

0x3db7,	// (0x0001adce) main_myfav_hc_pane_t2_ParamLimits

0x3db7,	// (0x0001adce) main_myfav_hc_pane_t2

0x3dc9,	// (0x0001ade0) main_myfav_hc_pane_t3_ParamLimits

0x3dc9,	// (0x0001ade0) main_myfav_hc_pane_t3

0xc6b5,	// (0x000236cc) main_myfav_hc_pane_t4_ParamLimits

0xc6b5,	// (0x000236cc) main_myfav_hc_pane_t4

0x0004,

0xf96e,	// (0x00026985) main_myfav_hc_pane_t_ParamLimits

0xf96e,	// (0x00026985) main_myfav_hc_pane_t

0x2f55,	// (0x00019f6c) bg_myfav_hc_instruction_pane_g1

0x3ddb,	// (0x0001adf2) cell_myfav_contact_pane_g1_ParamLimits

0x3ddb,	// (0x0001adf2) cell_myfav_contact_pane_g1

0x3ddb,	// (0x0001adf2) cell_myfav_contact_pane_g2_ParamLimits

0x3ddb,	// (0x0001adf2) cell_myfav_contact_pane_g2

0x3de7,	// (0x0001adfe) cell_myfav_contact_pane_g3_ParamLimits

0x3de7,	// (0x0001adfe) cell_myfav_contact_pane_g3

0x3259,	// (0x0001a270) cell_myfav_contact_pane_g4_ParamLimits

0x3259,	// (0x0001a270) cell_myfav_contact_pane_g4

0x3df4,	// (0x0001ae0b) cell_myfav_contact_pane_g5_ParamLimits

0x3df4,	// (0x0001ae0b) cell_myfav_contact_pane_g5

0x0004,

0xf979,	// (0x00026990) cell_myfav_contact_pane_g_ParamLimits

0xf979,	// (0x00026990) cell_myfav_contact_pane_g

0xc686,	// (0x0002369d) main_myfav_hc_pane_g3_ParamLimits

0xc686,	// (0x0002369d) main_myfav_hc_pane_g3

0x8293,	// (0x0001f2aa) popup_adpt_find_window

0xc6df,	// (0x000236f6) afind_page_pane_ParamLimits

0xc6df,	// (0x000236f6) afind_page_pane

0xc6ec,	// (0x00023703) aid_size_cell_afind_ParamLimits

0xc6ec,	// (0x00023703) aid_size_cell_afind

0xc706,	// (0x0002371d) bg_popup_sub_pane_cp09_ParamLimits

0xc706,	// (0x0002371d) bg_popup_sub_pane_cp09

0xc713,	// (0x0002372a) find_pane_cp01_ParamLimits

0xc713,	// (0x0002372a) find_pane_cp01

0x3e00,	// (0x0001ae17) grid_afind_control_pane_ParamLimits

0x3e00,	// (0x0001ae17) grid_afind_control_pane

0xc720,	// (0x00023737) grid_afind_pane_ParamLimits

0xc720,	// (0x00023737) grid_afind_pane

0xc73c,	// (0x00023753) cell_afind_pane_ParamLimits

0xc73c,	// (0x00023753) cell_afind_pane

0x2f55,	// (0x00019f6c) afind_page_pane_g1

0xc784,	// (0x0002379b) afind_page_pane_g2

0xc78d,	// (0x000237a4) afind_page_pane_g3

0x0002,

0xf984,	// (0x0002699b) afind_page_pane_g

0xc796,	// (0x000237ad) afind_page_pane_t1

0x3e14,	// (0x0001ae2b) cell_afind_grid_control_pane_ParamLimits

0x3e14,	// (0x0001ae2b) cell_afind_grid_control_pane

0x3ad7,	// (0x0001aaee) bg_button_pane_cp69_ParamLimits

0x3ad7,	// (0x0001aaee) bg_button_pane_cp69

0xc7ad,	// (0x000237c4) cell_afind_pane_g1_ParamLimits

0xc7ad,	// (0x000237c4) cell_afind_pane_g1

0xc7ba,	// (0x000237d1) cell_afind_pane_t1_ParamLimits

0xc7ba,	// (0x000237d1) cell_afind_pane_t1

0x0b38,	// (0x00017b4f) bg_button_pane_cp72

0x3e23,	// (0x0001ae3a) cell_afind_grid_control_pane_g1

0xaa2d,	// (0x00021a44) aid_image_placing_area_ParamLimits

0xaa2d,	// (0x00021a44) aid_image_placing_area

0x355e,	// (0x0001a575) field_vitu_entry_pane_g1_ParamLimits

0x355e,	// (0x0001a575) field_vitu_entry_pane_g1

0x356a,	// (0x0001a581) field_vitu_entry_pane_g2_ParamLimits

0x356a,	// (0x0001a581) field_vitu_entry_pane_g2

0x0001,

0xf835,	// (0x0002684c) field_vitu_entry_pane_g_ParamLimits

0xf835,	// (0x0002684c) field_vitu_entry_pane_g

0xc226,	// (0x0002323d) cell_vitu_itu_pane_g1_ParamLimits

0xc268,	// (0x0002327f) cell_vitu_itu_pane_t3_ParamLimits

0xc268,	// (0x0002327f) cell_vitu_itu_pane_t3

0x3a87,	// (0x0001aa9e) mp4_progress_pane_t1_ParamLimits

0x3aa0,	// (0x0001aab7) mp4_progress_pane_t2_ParamLimits

0xf8ca,	// (0x000268e1) mp4_progress_pane_t_ParamLimits

0x3ab9,	// (0x0001aad0) mup_progress_pane_cp04_ParamLimits

0xc6c9,	// (0x000236e0) main_myfav_hc_pane_t5_ParamLimits

0xc6c9,	// (0x000236e0) main_myfav_hc_pane_t5

0x0040,	// (0x00017057) aid_zoom_text_primary

0x8293,	// (0x0001f2aa) popup_adpt_find_window_ParamLimits

0x008a,	// (0x000170a1) main_cam_set_pane

0x79b4,	// (0x0001e9cb) cam4_zoom_pane_ParamLimits

0x79b4,	// (0x0001e9cb) cam4_zoom_pane

0xc7cc,	// (0x000237e3) main_cam_set_pane_g1_ParamLimits

0xc7cc,	// (0x000237e3) main_cam_set_pane_g1

0xc7da,	// (0x000237f1) main_cam_set_pane_g2_ParamLimits

0xc7da,	// (0x000237f1) main_cam_set_pane_g2

0x0001,

0xf98b,	// (0x000269a2) main_cam_set_pane_g_ParamLimits

0xf98b,	// (0x000269a2) main_cam_set_pane_g

0xc7e6,	// (0x000237fd) main_cam_set_pane_t1_ParamLimits

0xc7e6,	// (0x000237fd) main_cam_set_pane_t1

0xc802,	// (0x00023819) main_cset_listscroll_pane_ParamLimits

0xc802,	// (0x00023819) main_cset_listscroll_pane

0xc82d,	// (0x00023844) main_cset_slider_pane_ParamLimits

0xc82d,	// (0x00023844) main_cset_slider_pane

0x3e34,	// (0x0001ae4b) main_cset_list_pane_ParamLimits

0x3e34,	// (0x0001ae4b) main_cset_list_pane

0x3e44,	// (0x0001ae5b) scroll_pane_cp028

0xc84c,	// (0x00023863) aid_area_touch_slider

0xc868,	// (0x0002387f) cset_slider_pane

0xc892,	// (0x000238a9) main_cset_slider_pane_g1

0xc8a7,	// (0x000238be) main_cset_slider_pane_g2

0x0011,

0xf990,	// (0x000269a7) main_cset_slider_pane_g

0x3e7d,	// (0x0001ae94) main_cset_slider_pane_t1

0xc96f,	// (0x00023986) main_cset_slider_pane_t2

0xc989,	// (0x000239a0) main_cset_slider_pane_t3

0xc9a3,	// (0x000239ba) main_cset_slider_pane_t4

0xc9c1,	// (0x000239d8) main_cset_slider_pane_t5

0xc9e3,	// (0x000239fa) main_cset_slider_pane_t6

0xc9fa,	// (0x00023a11) main_cset_slider_pane_t7

0x000e,

0xf9b5,	// (0x000269cc) main_cset_slider_pane_t

0xcb08,	// (0x00023b1f) cset_list_set_pane_ParamLimits

0xcb08,	// (0x00023b1f) cset_list_set_pane

0xcb25,	// (0x00023b3c) aid_position_infowindow_above

0xcb2d,	// (0x00023b44) aid_position_infowindow_below

0xcb35,	// (0x00023b4c) cset_list_set_pane_g1_ParamLimits

0xcb35,	// (0x00023b4c) cset_list_set_pane_g1

0x47a1,	// (0x0001b7b8) cset_list_set_pane_g3_ParamLimits

0x47a1,	// (0x0001b7b8) cset_list_set_pane_g3

0x0001,

0xf9d4,	// (0x000269eb) cset_list_set_pane_g_ParamLimits

0xf9d4,	// (0x000269eb) cset_list_set_pane_g

0x47b0,	// (0x0001b7c7) cset_list_set_pane_t1_ParamLimits

0x47b0,	// (0x0001b7c7) cset_list_set_pane_t1

0x008a,	// (0x000170a1) list_highlight_pane_cp021_ParamLimits

0x008a,	// (0x000170a1) list_highlight_pane_cp021

0x1704,	// (0x0001871b) cset_slider_pane_g1

0x1716,	// (0x0001872d) cset_slider_pane_g2

0x170d,	// (0x00018724) cset_slider_pane_g3

0x0002,

0xf9d9,	// (0x000269f0) cset_slider_pane_g

0x7e6f,	// (0x0001ee86) aid_area_touch_cam4_zoom

0x7e77,	// (0x0001ee8e) cam4_zoom_cont_pane

0x7e7f,	// (0x0001ee96) cam4_zoom_pane_g1

0x7e87,	// (0x0001ee9e) cam4_zoom_pane_g2

0x7e8f,	// (0x0001eea6) cam4_zoom_pane_g3

0x0002,

0xf9e0,	// (0x000269f7) cam4_zoom_pane_g

0x7e97,	// (0x0001eeae) cam4_zoom_cont_pane_g1

0x7ea0,	// (0x0001eeb7) cam4_zoom_cont_pane_g2

0x7ea9,	// (0x0001eec0) cam4_zoom_cont_pane_g3

0x0002,

0xf9e7,	// (0x000269fe) cam4_zoom_cont_pane_g

0xc49f,	// (0x000234b6) call4_image_pane_ParamLimits

0xc49f,	// (0x000234b6) call4_image_pane

0x3b15,	// (0x0001ab2c) call4_windows_conf_pane_ParamLimits

0x3b54,	// (0x0001ab6b) popup_call4_audio_in_window_ParamLimits

0x3b54,	// (0x0001ab6b) popup_call4_audio_in_window

0x001a,	// (0x00017031) bg_popup_call2_act_pane_cp02

0x3bca,	// (0x0001abe1) call4_list_conf_pane

0x2f55,	// (0x00019f6c) call4_image_pane_g1

0x2f55,	// (0x00019f6c) call4_image_pane_g2

0x0001,

0xf6fb,	// (0x00026712) call4_image_pane_g

0x3f58,	// (0x0001af6f) list_single_graphic_popup_conf4_pane_ParamLimits

0x3f58,	// (0x0001af6f) list_single_graphic_popup_conf4_pane

0x001a,	// (0x00017031) list_highlight_pane_cp022

0x3f6b,	// (0x0001af82) list_single_graphic_popup_conf4_pane_g1

0x13d5,	// (0x000183ec) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9ee,	// (0x00026a05) list_single_graphic_popup_conf4_pane_g

0x3f73,	// (0x0001af8a) list_single_graphic_popup_conf4_pane_t1

0x8f15,	// (0x0001ff2c) popup_vtel_slider_window_ParamLimits

0x8f15,	// (0x0001ff2c) popup_vtel_slider_window

0x3ac5,	// (0x0001aadc) dialer2_ne_pane_t2_ParamLimits

0x3ac5,	// (0x0001aadc) dialer2_ne_pane_t2

0x0001,

0xf8cf,	// (0x000268e6) dialer2_ne_pane_t_ParamLimits

0xf8cf,	// (0x000268e6) dialer2_ne_pane_t

0x008a,	// (0x000170a1) bg_popup_sub_pane_cp010_ParamLimits

0x008a,	// (0x000170a1) bg_popup_sub_pane_cp010

0xcb41,	// (0x00023b58) popup_vtel_slider_window_g1_ParamLimits

0xcb41,	// (0x00023b58) popup_vtel_slider_window_g1

0xcb4d,	// (0x00023b64) popup_vtel_slider_window_g2_ParamLimits

0xcb4d,	// (0x00023b64) popup_vtel_slider_window_g2

0x0003,

0xf9f3,	// (0x00026a0a) popup_vtel_slider_window_g_ParamLimits

0xf9f3,	// (0x00026a0a) popup_vtel_slider_window_g

0xcb95,	// (0x00023bac) vtel_slider_pane_ParamLimits

0xcb95,	// (0x00023bac) vtel_slider_pane

0xcba4,	// (0x00023bbb) vtel_slider_pane_g1_ParamLimits

0xcba4,	// (0x00023bbb) vtel_slider_pane_g1

0xcbb1,	// (0x00023bc8) vtel_slider_pane_g2_ParamLimits

0xcbb1,	// (0x00023bc8) vtel_slider_pane_g2

0xcbbe,	// (0x00023bd5) vtel_slider_pane_g3_ParamLimits

0xcbbe,	// (0x00023bd5) vtel_slider_pane_g3

0xcba4,	// (0x00023bbb) vtel_slider_pane_g4_ParamLimits

0xcba4,	// (0x00023bbb) vtel_slider_pane_g4

0xcbcb,	// (0x00023be2) vtel_slider_pane_g5_ParamLimits

0xcbcb,	// (0x00023be2) vtel_slider_pane_g5

0x0004,

0xf9fc,	// (0x00026a13) vtel_slider_pane_g_ParamLimits

0xf9fc,	// (0x00026a13) vtel_slider_pane_g

0x001a,	// (0x00017031) main_gallery2_pane

0x7bc6,	// (0x0001ebdd) aid_size_row_itut2_dropdow_list_ParamLimits

0x7bc6,	// (0x0001ebdd) aid_size_row_itut2_dropdow_list

0x7c34,	// (0x0001ec4b) grid_vitu2_function_top_pane_ParamLimits

0x7c34,	// (0x0001ec4b) grid_vitu2_function_top_pane

0x7c8a,	// (0x0001eca1) popup_vitu2_dropdown_list_window_ParamLimits

0x7c8a,	// (0x0001eca1) popup_vitu2_dropdown_list_window

0x7caa,	// (0x0001ecc1) popup_vitu2_match_list_window

0x7eb2,	// (0x0001eec9) cell_vitu2_function_top_pane_ParamLimits

0x7eb2,	// (0x0001eec9) cell_vitu2_function_top_pane

0x7ed2,	// (0x0001eee9) cell_vitu2_function_top_pane_cp01_ParamLimits

0x7ed2,	// (0x0001eee9) cell_vitu2_function_top_pane_cp01

0x7ef0,	// (0x0001ef07) cell_vitu2_function_top_wide_pane_ParamLimits

0x7ef0,	// (0x0001ef07) cell_vitu2_function_top_wide_pane

0x7b11,	// (0x0001eb28) bg_button_pane_cp012

0x7f0e,	// (0x0001ef25) cell_vitu2_function_top_pane_g1

0x7f1d,	// (0x0001ef34) bg_button_pane_cp013_ParamLimits

0x7f1d,	// (0x0001ef34) bg_button_pane_cp013

0xcbd8,	// (0x00023bef) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xcbd8,	// (0x00023bef) cell_vitu2_function_top_wide_pane_g1

0x7f39,	// (0x0001ef50) bg_popup_sub_pane_cp20

0x7f47,	// (0x0001ef5e) list_vitu2_match_list_pane

0x3d2a,	// (0x0001ad41) bg_popup_sub_pane_cp20_g1

0x3d32,	// (0x0001ad49) bg_popup_sub_pane_cp20_g2

0x0dfc,	// (0x00017e13) bg_popup_sub_pane_cp20_g3

0x3d3a,	// (0x0001ad51) bg_popup_sub_pane_cp20_g4

0x0ddc,	// (0x00017df3) bg_popup_sub_pane_cp20_g5

0x3fb3,	// (0x0001afca) bg_popup_sub_pane_cp20_g6

0x3d4a,	// (0x0001ad61) bg_popup_sub_pane_cp20_g7

0x3d52,	// (0x0001ad69) bg_popup_sub_pane_cp20_g8

0x3d5a,	// (0x0001ad71) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa07,	// (0x00026a1e) bg_popup_sub_pane_cp20_g

0x7f5f,	// (0x0001ef76) list_vitu2_match_list_item_pane_ParamLimits

0x7f5f,	// (0x0001ef76) list_vitu2_match_list_item_pane

0x7f71,	// (0x0001ef88) list_vitu2_match_list_item_pane_t1

0x6d7e,	// (0x0001dd95) bg_popup_sub_pane_cp21

0x7f7f,	// (0x0001ef96) grid_vitu2_dropdown_list_pane

0x7f87,	// (0x0001ef9e) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x7f87,	// (0x0001ef9e) cell_vitu2_dropdown_list_char_pane

0x7fa8,	// (0x0001efbf) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x7fa8,	// (0x0001efbf) cell_vitu2_dropdown_list_ctrl_pane

0x4005,	// (0x0001b01c) cell_vitu2_dropdown_list_char_pane_g1

0x3ffc,	// (0x0001b013) cell_vitu2_dropdown_list_char_pane_g2

0x3ff3,	// (0x0001b00a) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa24,	// (0x00026a3b) cell_vitu2_dropdown_list_char_pane_g

0x7fd4,	// (0x0001efeb) cell_vitu2_dropdown_list_char_pane_t1

0xcc1f,	// (0x00023c36) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xcc1f,	// (0x00023c36) cell_vitu2_dropdown_list_ctrl_pane_g1

0xcc2f,	// (0x00023c46) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xcc2f,	// (0x00023c46) cell_vitu2_dropdown_list_ctrl_pane_g2

0xcc40,	// (0x00023c57) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xcc40,	// (0x00023c57) cell_vitu2_dropdown_list_ctrl_pane_g3

0x7fe2,	// (0x0001eff9) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x7fe2,	// (0x0001eff9) cell_vitu2_dropdown_list_ctrl_pane_g4

0x7a24,	// (0x0001ea3b) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x7a24,	// (0x0001ea3b) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa2b,	// (0x00026a42) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa2b,	// (0x00026a42) cell_vitu2_dropdown_list_ctrl_pane_g

0xcc50,	// (0x00023c67) aid_size_cell_gallery2_ParamLimits

0xcc50,	// (0x00023c67) aid_size_cell_gallery2

0xcc5e,	// (0x00023c75) grid_gallery2_pane_ParamLimits

0xcc5e,	// (0x00023c75) grid_gallery2_pane

0xcc6d,	// (0x00023c84) scroll_pane_cp029_ParamLimits

0xcc6d,	// (0x00023c84) scroll_pane_cp029

0xcc79,	// (0x00023c90) cell_gallery2_pane_ParamLimits

0xcc79,	// (0x00023c90) cell_gallery2_pane

0x400e,	// (0x0001b025) cell_gallery2_pane_g2

0xccaa,	// (0x00023cc1) cell_gallery2_pane_g3

0x4018,	// (0x0001b02f) cell_gallery2_pane_g4

0x4020,	// (0x0001b037) cell_gallery2_pane_g5

0x15ae,	// (0x000185c5) grid_highlight_pane_cp10

0x7caa,	// (0x0001ecc1) popup_vitu2_match_list_window_ParamLimits

0x7cbc,	// (0x0001ecd3) popup_vitu2_query_window_ParamLimits

0x7cbc,	// (0x0001ecd3) popup_vitu2_query_window

0x6d7e,	// (0x0001dd95) bg_vitu2_candi_button_pane

0x4005,	// (0x0001b01c) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x3ffc,	// (0x0001b013) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x3ff3,	// (0x0001b00a) cell_vitu2_dropdown_list_char_pane_g2_copy2

0xccb2,	// (0x00023cc9) bg_button_pane_cp015

0xccc4,	// (0x00023cdb) bg_button_pane_cp016

0xccd7,	// (0x00023cee) bg_button_pane_cp017

0x2a4d,	// (0x00019a64) bg_popup_sub_pane_cp22

0x4028,	// (0x0001b03f) popup_vitu2_query_window_g1

0xcd1c,	// (0x00023d33) popup_vitu2_query_window_g2

0x0002,

0xfa36,	// (0x00026a4d) popup_vitu2_query_window_g

0xcd39,	// (0x00023d50) popup_vitu2_query_window_t1_ParamLimits

0xcd39,	// (0x00023d50) popup_vitu2_query_window_t1

0xcd6c,	// (0x00023d83) popup_vitu2_query_window_t2_ParamLimits

0xcd6c,	// (0x00023d83) popup_vitu2_query_window_t2

0xcd7e,	// (0x00023d95) popup_vitu2_query_window_t3_ParamLimits

0xcd7e,	// (0x00023d95) popup_vitu2_query_window_t3

0xcda6,	// (0x00023dbd) popup_vitu2_query_window_t4_ParamLimits

0xcda6,	// (0x00023dbd) popup_vitu2_query_window_t4

0xcdc7,	// (0x00023dde) popup_vitu2_query_window_t5_ParamLimits

0xcdc7,	// (0x00023dde) popup_vitu2_query_window_t5

0x0006,

0xfa3d,	// (0x00026a54) popup_vitu2_query_window_t_ParamLimits

0xfa3d,	// (0x00026a54) popup_vitu2_query_window_t

0x3e2c,	// (0x0001ae43) main_cset_text_pane

0xc84c,	// (0x00023863) aid_area_touch_slider_ParamLimits

0xc868,	// (0x0002387f) cset_slider_pane_ParamLimits

0xc892,	// (0x000238a9) main_cset_slider_pane_g1_ParamLimits

0xc8a7,	// (0x000238be) main_cset_slider_pane_g2_ParamLimits

0x3e4d,	// (0x0001ae64) main_cset_slider_pane_g3_ParamLimits

0x3e4d,	// (0x0001ae64) main_cset_slider_pane_g3

0xc8bc,	// (0x000238d3) main_cset_slider_pane_g4_ParamLimits

0xc8bc,	// (0x000238d3) main_cset_slider_pane_g4

0xc8cb,	// (0x000238e2) main_cset_slider_pane_g5_ParamLimits

0xc8cb,	// (0x000238e2) main_cset_slider_pane_g5

0xc8d9,	// (0x000238f0) main_cset_slider_pane_g6_ParamLimits

0xc8d9,	// (0x000238f0) main_cset_slider_pane_g6

0xf990,	// (0x000269a7) main_cset_slider_pane_g_ParamLimits

0x3e7d,	// (0x0001ae94) main_cset_slider_pane_t1_ParamLimits

0xc96f,	// (0x00023986) main_cset_slider_pane_t2_ParamLimits

0xc989,	// (0x000239a0) main_cset_slider_pane_t3_ParamLimits

0xc9a3,	// (0x000239ba) main_cset_slider_pane_t4_ParamLimits

0xc9c1,	// (0x000239d8) main_cset_slider_pane_t5_ParamLimits

0xc9e3,	// (0x000239fa) main_cset_slider_pane_t6_ParamLimits

0xc9fa,	// (0x00023a11) main_cset_slider_pane_t7_ParamLimits

0xca28,	// (0x00023a3f) main_cset_slider_pane_t8_ParamLimits

0xca28,	// (0x00023a3f) main_cset_slider_pane_t8

0xca50,	// (0x00023a67) main_cset_slider_pane_t9_ParamLimits

0xca50,	// (0x00023a67) main_cset_slider_pane_t9

0xca78,	// (0x00023a8f) main_cset_slider_pane_t10_ParamLimits

0xca78,	// (0x00023a8f) main_cset_slider_pane_t10

0xcaa0,	// (0x00023ab7) main_cset_slider_pane_t11_ParamLimits

0xcaa0,	// (0x00023ab7) main_cset_slider_pane_t11

0xcaca,	// (0x00023ae1) main_cset_slider_pane_t12_ParamLimits

0xcaca,	// (0x00023ae1) main_cset_slider_pane_t12

0xcae9,	// (0x00023b00) main_cset_slider_pane_t13_ParamLimits

0xcae9,	// (0x00023b00) main_cset_slider_pane_t13

0xf9b5,	// (0x000269cc) main_cset_slider_pane_t_ParamLimits

0x001a,	// (0x00017031) bg_popup_sub_pane_cp011

0x4034,	// (0x0001b04b) main_cset_text_pane_g1

0x403c,	// (0x0001b053) main_cset_text_pane_t1

0x404a,	// (0x0001b061) main_cset_text_pane_t2

0x4058,	// (0x0001b06f) main_cset_text_pane_t3

0x4066,	// (0x0001b07d) main_cset_text_pane_t4

0x4074,	// (0x0001b08b) main_cset_text_pane_t5

0x4082,	// (0x0001b099) main_cset_text_pane_t6

0x4090,	// (0x0001b0a7) main_cset_text_pane_t7

0x0006,

0xfa4c,	// (0x00026a63) main_cset_text_pane_t

0x001a,	// (0x00017031) main_cam4_burst_pane

0x001a,	// (0x00017031) main_cam5_pane

0x0f2b,	// (0x00017f42) bg_button_pane_cp019

0xc7a4,	// (0x000237bb) bg_button_pane_cp020

0x3e59,	// (0x0001ae70) main_cset_slider_pane_g7_ParamLimits

0x3e59,	// (0x0001ae70) main_cset_slider_pane_g7

0x3e65,	// (0x0001ae7c) main_cset_slider_pane_g8_ParamLimits

0x3e65,	// (0x0001ae7c) main_cset_slider_pane_g8

0xc8ef,	// (0x00023906) main_cset_slider_pane_g9_ParamLimits

0xc8ef,	// (0x00023906) main_cset_slider_pane_g9

0xc8fb,	// (0x00023912) main_cset_slider_pane_g10_ParamLimits

0xc8fb,	// (0x00023912) main_cset_slider_pane_g10

0xc907,	// (0x0002391e) main_cset_slider_pane_g11_ParamLimits

0xc907,	// (0x0002391e) main_cset_slider_pane_g11

0xc913,	// (0x0002392a) main_cset_slider_pane_g12_ParamLimits

0xc913,	// (0x0002392a) main_cset_slider_pane_g12

0xc91f,	// (0x00023936) main_cset_slider_pane_g13_ParamLimits

0xc91f,	// (0x00023936) main_cset_slider_pane_g13

0xc92d,	// (0x00023944) main_cset_slider_pane_g14_ParamLimits

0xc92d,	// (0x00023944) main_cset_slider_pane_g14

0xc93b,	// (0x00023952) main_cset_slider_pane_g15_ParamLimits

0xc93b,	// (0x00023952) main_cset_slider_pane_g15

0x3eab,	// (0x0001aec2) main_cset_slider_pane_t14_ParamLimits

0x3eab,	// (0x0001aec2) main_cset_slider_pane_t14

0x3ee4,	// (0x0001aefb) main_cset_slider_pane_t15_ParamLimits

0x3ee4,	// (0x0001aefb) main_cset_slider_pane_t15

0xce3e,	// (0x00023e55) aid_cam4_burst_size_cell_ParamLimits

0xce3e,	// (0x00023e55) aid_cam4_burst_size_cell

0xce5a,	// (0x00023e71) grid_cam4_burst_pane_ParamLimits

0xce5a,	// (0x00023e71) grid_cam4_burst_pane

0xce8a,	// (0x00023ea1) linegrid_cam4_burst_pane_ParamLimits

0xce8a,	// (0x00023ea1) linegrid_cam4_burst_pane

0xceac,	// (0x00023ec3) scroll_pane_cp30_ParamLimits

0xceac,	// (0x00023ec3) scroll_pane_cp30

0xceb8,	// (0x00023ecf) cell_cam4_burst_pane_ParamLimits

0xceb8,	// (0x00023ecf) cell_cam4_burst_pane

0x40aa,	// (0x0001b0c1) linegrid_cam4_burst_pane_g1_ParamLimits

0x40aa,	// (0x0001b0c1) linegrid_cam4_burst_pane_g1

0xcef4,	// (0x00023f0b) linegrid_cam4_burst_pane_g2_ParamLimits

0xcef4,	// (0x00023f0b) linegrid_cam4_burst_pane_g2

0x40b7,	// (0x0001b0ce) linegrid_cam4_burst_pane_g3_ParamLimits

0x40b7,	// (0x0001b0ce) linegrid_cam4_burst_pane_g3

0x0002,

0xfa5b,	// (0x00026a72) linegrid_cam4_burst_pane_g_ParamLimits

0xfa5b,	// (0x00026a72) linegrid_cam4_burst_pane_g

0xcf05,	// (0x00023f1c) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xcf05,	// (0x00023f1c) linegrid_cam4_burst_pane_g3_copy1

0x40c4,	// (0x0001b0db) linegrid_cam4_burst_pane_g4_ParamLimits

0x40c4,	// (0x0001b0db) linegrid_cam4_burst_pane_g4

0xcf1f,	// (0x00023f36) linegrid_cam4_burst_pane_g5_ParamLimits

0xcf1f,	// (0x00023f36) linegrid_cam4_burst_pane_g5

0xcf30,	// (0x00023f47) linegrid_cam4_burst_pane_g6_ParamLimits

0xcf30,	// (0x00023f47) linegrid_cam4_burst_pane_g6

0x40d1,	// (0x0001b0e8) linegrid_cam4_burst_pane_g7_ParamLimits

0x40d1,	// (0x0001b0e8) linegrid_cam4_burst_pane_g7

0xcf41,	// (0x00023f58) cell_cam4_burst_pane_g1

0x40ea,	// (0x0001b101) main_cam5_pane_t1_ParamLimits

0x40ea,	// (0x0001b101) main_cam5_pane_t1

0x40fc,	// (0x0001b113) main_cam5_pane_t2_ParamLimits

0x40fc,	// (0x0001b113) main_cam5_pane_t2

0x410e,	// (0x0001b125) main_cam5_pane_t3_ParamLimits

0x410e,	// (0x0001b125) main_cam5_pane_t3

0x4120,	// (0x0001b137) main_cam5_pane_t4_ParamLimits

0x4120,	// (0x0001b137) main_cam5_pane_t4

0x4136,	// (0x0001b14d) main_cam5_pane_t5_ParamLimits

0x4136,	// (0x0001b14d) main_cam5_pane_t5

0x4148,	// (0x0001b15f) main_cam5_pane_t6_ParamLimits

0x4148,	// (0x0001b15f) main_cam5_pane_t6

0x415c,	// (0x0001b173) main_cam5_pane_t7_ParamLimits

0x415c,	// (0x0001b173) main_cam5_pane_t7

0x416e,	// (0x0001b185) main_cam5_pane_t8_ParamLimits

0x416e,	// (0x0001b185) main_cam5_pane_t8

0x418a,	// (0x0001b1a1) main_cam5_pane_t9_ParamLimits

0x418a,	// (0x0001b1a1) main_cam5_pane_t9

0x419c,	// (0x0001b1b3) main_cam5_pane_t10_ParamLimits

0x419c,	// (0x0001b1b3) main_cam5_pane_t10

0x41ae,	// (0x0001b1c5) main_cam5_pane_t11_ParamLimits

0x41ae,	// (0x0001b1c5) main_cam5_pane_t11

0x41c0,	// (0x0001b1d7) main_cam5_pane_t12_ParamLimits

0x41c0,	// (0x0001b1d7) main_cam5_pane_t12

0x41d5,	// (0x0001b1ec) main_cam5_pane_t13_ParamLimits

0x41d5,	// (0x0001b1ec) main_cam5_pane_t13

0x000c,

0xfa67,	// (0x00026a7e) main_cam5_pane_t_ParamLimits

0xfa67,	// (0x00026a7e) main_cam5_pane_t

0x833f,	// (0x0001f356) popup_scut_keymap_window_ParamLimits

0x833f,	// (0x0001f356) popup_scut_keymap_window

0xcf54,	// (0x00023f6b) aid_size_cell_brow_shortcut

0x15ae,	// (0x000185c5) bg_popup_window_pane_cp010

0xcf60,	// (0x00023f77) grid_scut_pane

0xcf6c,	// (0x00023f83) cell_scut_pane_ParamLimits

0xcf6c,	// (0x00023f83) cell_scut_pane

0xcf83,	// (0x00023f9a) cell_scut_pane_g1

0x41f2,	// (0x0001b209) cell_scut_pane_t1

0x4201,	// (0x0001b218) cell_scut_pane_t2

0xcf8c,	// (0x00023fa3) cell_scut_pane_t3

0x0002,

0xfa82,	// (0x00026a99) cell_scut_pane_t

0xb8fc,	// (0x00022913) main_mup3_pane_g8_ParamLimits

0xb8fc,	// (0x00022913) main_mup3_pane_g8

0x7bd4,	// (0x0001ebeb) area_vitu2_query_pane_ParamLimits

0x7bd4,	// (0x0001ebeb) area_vitu2_query_pane

0xccea,	// (0x00023d01) input_focus_pane_cp08

0x4210,	// (0x0001b227) area_vitu2_query_pane_g1

0xcf9a,	// (0x00023fb1) area_vitu2_query_pane_g2

0x0001,

0xfa89,	// (0x00026aa0) area_vitu2_query_pane_g

0xcfab,	// (0x00023fc2) area_vitu2_query_pane_t1_ParamLimits

0xcfab,	// (0x00023fc2) area_vitu2_query_pane_t1

0xcfbf,	// (0x00023fd6) area_vitu2_query_pane_t2_ParamLimits

0xcfbf,	// (0x00023fd6) area_vitu2_query_pane_t2

0xcfd3,	// (0x00023fea) area_vitu2_query_pane_t3_ParamLimits

0xcfd3,	// (0x00023fea) area_vitu2_query_pane_t3

0x421c,	// (0x0001b233) area_vitu2_query_pane_t4_ParamLimits

0x421c,	// (0x0001b233) area_vitu2_query_pane_t4

0x4244,	// (0x0001b25b) area_vitu2_query_pane_t5_ParamLimits

0x4244,	// (0x0001b25b) area_vitu2_query_pane_t5

0x426c,	// (0x0001b283) area_vitu2_query_pane_t6_ParamLimits

0x426c,	// (0x0001b283) area_vitu2_query_pane_t6

0x0006,

0xfa8e,	// (0x00026aa5) area_vitu2_query_pane_t_ParamLimits

0xfa8e,	// (0x00026aa5) area_vitu2_query_pane_t

0xcffb,	// (0x00024012) bg_button_pane_cp018

0xd009,	// (0x00024020) bg_button_pane_cp021

0xd015,	// (0x0002402c) bg_button_pane_cp022

0xd026,	// (0x0002403d) input_focus_pane_cp09

0xa0d8,	// (0x000210ef) aid_size_touch_mv_arrow_left

0xa103,	// (0x0002111a) aid_size_touch_mv_arrow_right

0xc953,	// (0x0002396a) main_cset_slider_pane_g16_ParamLimits

0xc953,	// (0x0002396a) main_cset_slider_pane_g16

0xc961,	// (0x00023978) main_cset_slider_pane_g17_ParamLimits

0xc961,	// (0x00023978) main_cset_slider_pane_g17

0xcf41,	// (0x00023f58) cell_cam4_burst_pane_g1_ParamLimits

0x001a,	// (0x00017031) compa_mode_pane

0xcb59,	// (0x00023b70) popup_vtel_slider_window_g3_ParamLimits

0xcb59,	// (0x00023b70) popup_vtel_slider_window_g3

0xcb6d,	// (0x00023b84) popup_vtel_slider_window_g4_ParamLimits

0xcb6d,	// (0x00023b84) popup_vtel_slider_window_g4

0xcb81,	// (0x00023b98) popup_vtel_slider_window_t1_ParamLimits

0xcb81,	// (0x00023b98) popup_vtel_slider_window_t1

0x001a,	// (0x00017031) main_cl_pane

0x2a75,	// (0x00019a8c) popup_imed_adjust2_window_ParamLimits

0x2a4d,	// (0x00019a64) bg_tb_trans_pane_cp05_ParamLimits

0x3493,	// (0x0001a4aa) popup_imed_adjust2_window_g1_ParamLimits

0x34a2,	// (0x0001a4b9) popup_imed_adjust2_window_g2_ParamLimits

0x34a2,	// (0x0001a4b9) popup_imed_adjust2_window_g2

0x34ae,	// (0x0001a4c5) popup_imed_adjust2_window_g3_ParamLimits

0x34ae,	// (0x0001a4c5) popup_imed_adjust2_window_g3

0x0002,

0xf7f9,	// (0x00026810) popup_imed_adjust2_window_g_ParamLimits

0xf7f9,	// (0x00026810) popup_imed_adjust2_window_g

0x34ba,	// (0x0001a4d1) popup_imed_adjust2_window_t1_ParamLimits

0x34d2,	// (0x0001a4e9) slider_imed_adjust_pane_ParamLimits

0x34e6,	// (0x0001a4fd) slider_imed_adjust_pane_g1_ParamLimits

0x34f6,	// (0x0001a50d) slider_imed_adjust_pane_g2_ParamLimits

0x3506,	// (0x0001a51d) slider_imed_adjust_pane_g3_ParamLimits

0x3517,	// (0x0001a52e) slider_imed_adjust_pane_g4_ParamLimits

0xf800,	// (0x00026817) slider_imed_adjust_pane_g_ParamLimits

0x795d,	// (0x0001e974) aid_touch_area_cam4_ParamLimits

0x795d,	// (0x0001e974) aid_touch_area_cam4

0x796d,	// (0x0001e984) battery_pane_cp01

0x79f4,	// (0x0001ea0b) main_camera4_pane_g6_ParamLimits

0x79f4,	// (0x0001ea0b) main_camera4_pane_g6

0x7a12,	// (0x0001ea29) main_camera4_pane_t2_ParamLimits

0x7a12,	// (0x0001ea29) main_camera4_pane_t2

0x0001,

0xf903,	// (0x0002691a) main_camera4_pane_t_ParamLimits

0xf903,	// (0x0002691a) main_camera4_pane_t

0x7a83,	// (0x0001ea9a) aid_touch_area_vid4_ParamLimits

0x7a83,	// (0x0001ea9a) aid_touch_area_vid4

0x7ac3,	// (0x0001eada) main_video4_pane_g5_ParamLimits

0x7ac3,	// (0x0001eada) main_video4_pane_g5

0x7ae5,	// (0x0001eafc) vid4_progress_pane_ParamLimits

0x7ae5,	// (0x0001eafc) vid4_progress_pane

0x3e71,	// (0x0001ae88) main_cset_slider_pane_g18_ParamLimits

0x3e71,	// (0x0001ae88) main_cset_slider_pane_g18

0x40de,	// (0x0001b0f5) cell_cam4_burst_pane_g2_ParamLimits

0x40de,	// (0x0001b0f5) cell_cam4_burst_pane_g2

0x0001,

0xfa62,	// (0x00026a79) cell_cam4_burst_pane_g_ParamLimits

0xfa62,	// (0x00026a79) cell_cam4_burst_pane_g

0xd037,	// (0x0002404e) bg_cl_pane_ParamLimits

0xd037,	// (0x0002404e) bg_cl_pane

0xd043,	// (0x0002405a) cl_header_pane_ParamLimits

0xd043,	// (0x0002405a) cl_header_pane

0xd04f,	// (0x00024066) cl_listscroll_pane_ParamLimits

0xd04f,	// (0x00024066) cl_listscroll_pane

0x42b8,	// (0x0001b2cf) bg_cl_pane_g1

0x42c0,	// (0x0001b2d7) bg_cl_pane_g2

0x42c8,	// (0x0001b2df) bg_cl_pane_g3

0x42d0,	// (0x0001b2e7) bg_cl_pane_g4

0x42d8,	// (0x0001b2ef) bg_cl_pane_g5

0x42e0,	// (0x0001b2f7) bg_cl_pane_g6

0x42e8,	// (0x0001b2ff) bg_cl_pane_g7

0x42f0,	// (0x0001b307) bg_cl_pane_g8

0x42f8,	// (0x0001b30f) bg_cl_pane_g9

0x0008,

0xfa9d,	// (0x00026ab4) bg_cl_pane_g

0xd05b,	// (0x00024072) aid_height_cl_leading_ParamLimits

0xd05b,	// (0x00024072) aid_height_cl_leading

0xd067,	// (0x0002407e) aid_height_cl_text_ParamLimits

0xd067,	// (0x0002407e) aid_height_cl_text

0x381c,	// (0x0001a833) bg_cl_header_pane_ParamLimits

0x381c,	// (0x0001a833) bg_cl_header_pane

0xd07f,	// (0x00024096) cl_header_pane_g1_ParamLimits

0xd07f,	// (0x00024096) cl_header_pane_g1

0xd08c,	// (0x000240a3) cl_header_pane_t1_ParamLimits

0xd08c,	// (0x000240a3) cl_header_pane_t1

0x4300,	// (0x0001b317) cl_list_pane

0x3e44,	// (0x0001ae5b) hc_scroll_pane_cp01

0x0ddc,	// (0x00017df3) bg_cl_header_pane_g1

0x3d2a,	// (0x0001ad41) bg_cl_header_pane_g2

0x0dfc,	// (0x00017e13) bg_cl_header_pane_g3

0x3d3a,	// (0x0001ad51) bg_cl_header_pane_g4

0x3d32,	// (0x0001ad49) bg_cl_header_pane_g5

0x3fb3,	// (0x0001afca) bg_cl_header_pane_g6

0x3d52,	// (0x0001ad69) bg_cl_header_pane_g7

0x3d5a,	// (0x0001ad71) bg_cl_header_pane_g8

0x3d4a,	// (0x0001ad61) bg_cl_header_pane_g9

0x0008,

0xfab0,	// (0x00026ac7) bg_cl_header_pane_g

0xd09e,	// (0x000240b5) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xd09e,	// (0x000240b5) hc_cl_list_double_graphic_heading_pane

0xd0b5,	// (0x000240cc) hc_cl_list_single_graphic_pane_ParamLimits

0xd0b5,	// (0x000240cc) hc_cl_list_single_graphic_pane

0xd0d5,	// (0x000240ec) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xd0d5,	// (0x000240ec) hc_cl_list_single_graphic_pane_g1

0xd0e1,	// (0x000240f8) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xd0e1,	// (0x000240f8) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfac3,	// (0x00026ada) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfac3,	// (0x00026ada) hc_cl_list_single_graphic_pane_g

0xd0f5,	// (0x0002410c) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xd0f5,	// (0x0002410c) hc_cl_list_single_graphic_pane_t1

0xd0d5,	// (0x000240ec) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xd0d5,	// (0x000240ec) hc_cl_list_double_graphic_heading_pane_g1

0xd10a,	// (0x00024121) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xd10a,	// (0x00024121) hc_cl_list_double_graphic_heading_pane_g2

0xd11e,	// (0x00024135) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xd11e,	// (0x00024135) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfac8,	// (0x00026adf) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfac8,	// (0x00026adf) hc_cl_list_double_graphic_heading_pane_g

0xd132,	// (0x00024149) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xd132,	// (0x00024149) hc_cl_list_double_graphic_heading_pane_t1

0xd147,	// (0x0002415e) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xd147,	// (0x0002415e) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfacf,	// (0x00026ae6) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfacf,	// (0x00026ae6) hc_cl_list_double_graphic_heading_pane_t

0x8006,	// (0x0001f01d) vid4_progress_pane_g1

0x8016,	// (0x0001f02d) vid4_progress_pane_g2

0x1075,	// (0x0001808c) vid4_progress_pane_g3

0x7a4b,	// (0x0001ea62) vid4_progress_pane_g4

0x0004,

0xfad4,	// (0x00026aeb) vid4_progress_pane_g

0x8026,	// (0x0001f03d) vid4_progress_pane_t1

0x803b,	// (0x0001f052) vid4_progress_pane_t2

0x0002,

0xfadf,	// (0x00026af6) vid4_progress_pane_t

0x8066,	// (0x0001f07d) wait_bar_pane_cp07

0x2d46,	// (0x00019d5d) blid_firmament_pane_ParamLimits

0x2d89,	// (0x00019da0) popup_blid_sat_info2_window_g1

0x2dad,	// (0x00019dc4) popup_blid_sat_info2_window_t3

0x2dbb,	// (0x00019dd2) popup_blid_sat_info2_window_t4

0x2dc9,	// (0x00019de0) popup_blid_sat_info2_window_t5

0x2dd7,	// (0x00019dee) popup_blid_sat_info2_window_t6

0x2de7,	// (0x00019dfe) popup_blid_sat_info2_window_t7

0x2df5,	// (0x00019e0c) popup_blid_sat_info2_window_t8

0x2e03,	// (0x00019e1a) popup_blid_sat_info2_window_t9

0x2e11,	// (0x00019e28) popup_blid_sat_info2_window_t10

0x2ed5,	// (0x00019eec) aid_firma_cardinal_ParamLimits

0x2ee9,	// (0x00019f00) blid_firmament_pane_t1_ParamLimits

0x2f00,	// (0x00019f17) blid_firmament_pane_t2_ParamLimits

0x2f17,	// (0x00019f2e) blid_firmament_pane_t3_ParamLimits

0x2f2e,	// (0x00019f45) blid_firmament_pane_t4_ParamLimits

0xf6f2,	// (0x00026709) blid_firmament_pane_t_ParamLimits

0x2f45,	// (0x00019f5c) blid_sat_info_pane_ParamLimits

0x008a,	// (0x000170a1) main_cam_set_pane_ParamLimits

0xc03f,	// (0x00023056) aid_size_cell_colour_35_ParamLimits

0xc059,	// (0x00023070) aid_size_cell_colour_112_ParamLimits

0xc070,	// (0x00023087) aid_size_cell_effect_ParamLimits

0x008a,	// (0x000170a1) bg_tb_trans_pane_cp02_ParamLimits

0x10a3,	// (0x000180ba) heading_imed_pane_ParamLimits

0xc08a,	// (0x000230a1) listscroll_imed_pane_ParamLimits

0x2077,	// (0x0001908e) popup_call2_audio_first_window_g5_ParamLimits

0x2077,	// (0x0001908e) popup_call2_audio_first_window_g5

0x77e8,	// (0x0001e7ff) aid_size_touch_image3_arrow_left_ParamLimits

0x77e8,	// (0x0001e7ff) aid_size_touch_image3_arrow_left

0x77fe,	// (0x0001e815) aid_size_touch_image3_arrow_right_ParamLimits

0x77fe,	// (0x0001e815) aid_size_touch_image3_arrow_right

0x8051,	// (0x0001f068) vid4_progress_pane_t3

0xc331,	// (0x00023348) main_hwr_training_symbol_option_pane_ParamLimits

0xc331,	// (0x00023348) main_hwr_training_symbol_option_pane

0x3780,	// (0x0001a797) popup_hwr_training_preview_window_ParamLimits

0x3780,	// (0x0001a797) popup_hwr_training_preview_window

0x74e8,	// (0x0001e4ff) hwr_training_navi_pane_g5_ParamLimits

0x74e8,	// (0x0001e4ff) hwr_training_navi_pane_g5

0x3d18,	// (0x0001ad2f) popup_char_count_window

0x7f39,	// (0x0001ef50) bg_popup_sub_pane_cp20_ParamLimits

0x7f47,	// (0x0001ef5e) list_vitu2_match_list_pane_ParamLimits

0x7f53,	// (0x0001ef6a) vitu2_page_scroll_pane_ParamLimits

0x7f53,	// (0x0001ef6a) vitu2_page_scroll_pane

0x43e7,	// (0x0001b3fe) list_single_hwr_training_symbol_option_pane_ParamLimits

0x43e7,	// (0x0001b3fe) list_single_hwr_training_symbol_option_pane

0x43fa,	// (0x0001b411) list_single_hwr_training_symbol_option_pane_g1

0x4402,	// (0x0001b419) list_single_hwr_training_symbol_option_pane_t1

0x4410,	// (0x0001b427) bg_button_pane_cp023

0x4419,	// (0x0001b430) bg_button_pane_cp024

0xd15c,	// (0x00024173) vitu2_page_scroll_pane_g1

0xd164,	// (0x0002417b) vitu2_page_scroll_pane_g2

0x0001,

0xfae6,	// (0x00026afd) vitu2_page_scroll_pane_g

0xd16c,	// (0x00024183) vitu2_page_scroll_pane_t1

0x2c62,	// (0x00019c79) popup_char_count_window_g1

0x444c,	// (0x0001b463) popup_char_count_window_g2

0x4455,	// (0x0001b46c) popup_char_count_window_g3

0x0002,

0xfaeb,	// (0x00026b02) popup_char_count_window_g

0x445e,	// (0x0001b475) popup_char_count_window_t1

0x001a,	// (0x00017031) main_vded2_pane

0x347f,	// (0x0001a496) aid_size_cell_imed_line

0x3489,	// (0x0001a4a0) grid_imed_line_width_pane

0x7b49,	// (0x0001eb60) vid4_indicators_pane_g4

0x446c,	// (0x0001b483) cell_imed_line_width_pane_ParamLimits

0x446c,	// (0x0001b483) cell_imed_line_width_pane

0x4480,	// (0x0001b497) cell_imed_line_width_pane_g1

0x4489,	// (0x0001b4a0) cell_imed_line_width_pane_g2

0x0001,

0xfaf2,	// (0x00026b09) cell_imed_line_width_pane_g

0xd17b,	// (0x00024192) main_vded2_pane_g1_ParamLimits

0xd17b,	// (0x00024192) main_vded2_pane_g1

0xd188,	// (0x0002419f) main_vded2_pane_g2_ParamLimits

0xd188,	// (0x0002419f) main_vded2_pane_g2

0x0001,

0xfaf7,	// (0x00026b0e) main_vded2_pane_g_ParamLimits

0xfaf7,	// (0x00026b0e) main_vded2_pane_g

0xd196,	// (0x000241ad) vded2_slider_pane_ParamLimits

0xd196,	// (0x000241ad) vded2_slider_pane

0xd1a3,	// (0x000241ba) aid_size_touch_vded2_end

0xd1ad,	// (0x000241c4) aid_size_touch_vded2_playhead

0x4491,	// (0x0001b4a8) aid_size_touch_vded2_start

0x4499,	// (0x0001b4b0) vded2_slider_bg_pane

0x44a2,	// (0x0001b4b9) vded2_slider_pane_g1

0x44ab,	// (0x0001b4c2) vded2_slider_pane_g2

0xd1b5,	// (0x000241cc) vded2_slider_pane_g3

0x0002,

0xfafc,	// (0x00026b13) vded2_slider_pane_g

0x44b3,	// (0x0001b4ca) vded2_slider_bg_pane_g1

0x44bc,	// (0x0001b4d3) vded2_slider_bg_pane_g2

0x44c5,	// (0x0001b4dc) vded2_slider_bg_pane_g3

0x0002,

0xfb03,	// (0x00026b1a) vded2_slider_bg_pane_g

0xa78a,	// (0x000217a1) aid_postcard_touch_down_pane_ParamLimits

0xa78a,	// (0x000217a1) aid_postcard_touch_down_pane

0xa79a,	// (0x000217b1) aid_postcard_touch_up_pane_ParamLimits

0xa79a,	// (0x000217b1) aid_postcard_touch_up_pane

0x001a,	// (0x00017031) main_blid2_pane

0x2a5b,	// (0x00019a72) popup_blid2_search_window

0x001a,	// (0x00017031) blid2_gps_pane

0x001a,	// (0x00017031) blid2_navig_pane

0x001a,	// (0x00017031) blid2_search_pane

0x001a,	// (0x00017031) blid2_tripm_pane

0xd1be,	// (0x000241d5) blid2_search_pane_g1_ParamLimits

0xd1be,	// (0x000241d5) blid2_search_pane_g1

0xd1ce,	// (0x000241e5) blid2_search_pane_t1_ParamLimits

0xd1ce,	// (0x000241e5) blid2_search_pane_t1

0xd1e0,	// (0x000241f7) aid_size_cell_blid2_gps_ParamLimits

0xd1e0,	// (0x000241f7) aid_size_cell_blid2_gps

0xd1f0,	// (0x00024207) blid2_gps_pane_g1_ParamLimits

0xd1f0,	// (0x00024207) blid2_gps_pane_g1

0xd1fc,	// (0x00024213) grid_blid2_satellite_pane_ParamLimits

0xd1fc,	// (0x00024213) grid_blid2_satellite_pane

0xd20c,	// (0x00024223) blid2_navig_pane_g1_ParamLimits

0xd20c,	// (0x00024223) blid2_navig_pane_g1

0xd218,	// (0x0002422f) blid2_navig_pane_t1_ParamLimits

0xd218,	// (0x0002422f) blid2_navig_pane_t1

0xd22a,	// (0x00024241) blid2_navig_pane_t2_ParamLimits

0xd22a,	// (0x00024241) blid2_navig_pane_t2

0x0001,

0xfb0a,	// (0x00026b21) blid2_navig_pane_t_ParamLimits

0xfb0a,	// (0x00026b21) blid2_navig_pane_t

0xd23c,	// (0x00024253) blid2_navig_ring_pane_ParamLimits

0xd23c,	// (0x00024253) blid2_navig_ring_pane

0xd24c,	// (0x00024263) blid2_speed_pane_ParamLimits

0xd24c,	// (0x00024263) blid2_speed_pane

0xd258,	// (0x0002426f) blid2_tripm_pane_g1_ParamLimits

0xd258,	// (0x0002426f) blid2_tripm_pane_g1

0xd268,	// (0x0002427f) blid2_tripm_pane_g2_ParamLimits

0xd268,	// (0x0002427f) blid2_tripm_pane_g2

0xd274,	// (0x0002428b) blid2_tripm_pane_g3_ParamLimits

0xd274,	// (0x0002428b) blid2_tripm_pane_g3

0xd280,	// (0x00024297) blid2_tripm_pane_g4_ParamLimits

0xd280,	// (0x00024297) blid2_tripm_pane_g4

0xd28c,	// (0x000242a3) blid2_tripm_pane_g5_ParamLimits

0xd28c,	// (0x000242a3) blid2_tripm_pane_g5

0x0005,

0xfb0f,	// (0x00026b26) blid2_tripm_pane_g_ParamLimits

0xfb0f,	// (0x00026b26) blid2_tripm_pane_g

0xd2a8,	// (0x000242bf) blid2_tripm_pane_t1_ParamLimits

0xd2a8,	// (0x000242bf) blid2_tripm_pane_t1

0xd2bc,	// (0x000242d3) blid2_tripm_pane_t2_ParamLimits

0xd2bc,	// (0x000242d3) blid2_tripm_pane_t2

0xd2d0,	// (0x000242e7) blid2_tripm_pane_t3_ParamLimits

0xd2d0,	// (0x000242e7) blid2_tripm_pane_t3

0x0003,

0xfb1c,	// (0x00026b33) blid2_tripm_pane_t_ParamLimits

0xfb1c,	// (0x00026b33) blid2_tripm_pane_t

0xd302,	// (0x00024319) cell_blid2_satellite_pane_ParamLimits

0xd302,	// (0x00024319) cell_blid2_satellite_pane

0xd31c,	// (0x00024333) cell_blid2_satellite_pane_g1

0x44ce,	// (0x0001b4e5) cell_blid2_satellite_pane_t1

0x2f55,	// (0x00019f6c) blid2_speed_pane_g1

0x44dc,	// (0x0001b4f3) blid2_speed_pane_t1

0x44ea,	// (0x0001b501) blid2_speed_pane_t2

0x0001,

0xfb25,	// (0x00026b3c) blid2_speed_pane_t

0x2f55,	// (0x00019f6c) blid2_navig_ring_pane_g1

0xd325,	// (0x0002433c) blid2_navig_ring_pane_g2

0xd32d,	// (0x00024344) blid2_navig_ring_pane_g3

0xd335,	// (0x0002434c) blid2_navig_ring_pane_g4

0xd33d,	// (0x00024354) blid2_navig_ring_pane_g5

0x0004,

0xfb2a,	// (0x00026b41) blid2_navig_ring_pane_g

0x001a,	// (0x00017031) bg_popup_window_pane_cp011

0x44f8,	// (0x0001b50f) popup_blid2_search_window_g1

0x4500,	// (0x0001b517) popup_blid2_search_window_t1

0x450e,	// (0x0001b525) popup_blid2_search_window_t2

0x0001,

0xfb35,	// (0x00026b4c) popup_blid2_search_window_t

0x0ceb,	// (0x00017d02) main_browser_pane_g1

0x083d,	// (0x00017854) main_browser_pane_ParamLimits

0x7b11,	// (0x0001eb28) bg_button_pane_cp011_ParamLimits

0x7e5b,	// (0x0001ee72) cell_vitu2_function_pane_g1_ParamLimits

0x2a4d,	// (0x00019a64) bg_popup_sub_pane_cp22_ParamLimits

0xccea,	// (0x00023d01) input_focus_pane_cp08_ParamLimits

0xcd01,	// (0x00023d18) popup_vitu2_query_button_pane_ParamLimits

0xcd01,	// (0x00023d18) popup_vitu2_query_button_pane

0xcd12,	// (0x00023d29) popup_vitu2_query_input_button_pane

0x4028,	// (0x0001b03f) popup_vitu2_query_window_g1_ParamLimits

0xcd1c,	// (0x00023d33) popup_vitu2_query_window_g2_ParamLimits

0xfa36,	// (0x00026a4d) popup_vitu2_query_window_g_ParamLimits

0x001a,	// (0x00017031) bg_button_pane_cp026

0xd345,	// (0x0002435c) popup_vitu2_query_input_button_pane_g1

0x001a,	// (0x00017031) bg_button_pane_cp025

0x451c,	// (0x0001b533) popup_vitu2_query_button_pane_t1

0xb5f9,	// (0x00022610) main_mp3_pane_t6

0xb609,	// (0x00022620) popup_slider_window_cp01

0x7a32,	// (0x0001ea49) cam4_battery_pane

0x7b1f,	// (0x0001eb36) cam4_battery_pane_cp02

0x7ffe,	// (0x0001f015) cam4_battery_pane_cp01

0x7ffe,	// (0x0001f015) cam4_battery_pane_cp03

0x452a,	// (0x0001b541) cam4_battery_pane_g1

0x2f55,	// (0x00019f6c) cam4_battery_pane_g2

0x0001,

0xfb3a,	// (0x00026b51) cam4_battery_pane_g

0x2e1f,	// (0x00019e36) popup_blid_sat_info2_window_t11

0xa0d8,	// (0x000210ef) aid_size_touch_mv_arrow_left_ParamLimits

0xa103,	// (0x0002111a) aid_size_touch_mv_arrow_right_ParamLimits

0x150e,	// (0x00018525) navi_pane_g1_ParamLimits

0xa142,	// (0x00021159) navi_pane_g2_ParamLimits

0xa170,	// (0x00021187) navi_pane_g3_ParamLimits

0xf404,	// (0x0002641b) navi_pane_g_ParamLimits

0xa1ca,	// (0x000211e1) navi_pane_mv_t1_ParamLimits

0xc096,	// (0x000230ad) grid_imed_effect_pane_ParamLimits

0x8dd5,	// (0x0001fdec) aid_placing_vt_slider_lsc

0x0c3a,	// (0x00017c51) aid_placing_vt_slider_prt

0x008a,	// (0x000170a1) bg_tb_trans_pane_cp01_ParamLimits

0x30dc,	// (0x0001a0f3) popup_image_details_window_g1_ParamLimits

0x30ef,	// (0x0001a106) popup_image_details_window_g2_ParamLimits

0x3104,	// (0x0001a11b) popup_image_details_window_g3_ParamLimits

0x3104,	// (0x0001a11b) popup_image_details_window_g3

0xf737,	// (0x0002674e) popup_image_details_window_g_ParamLimits

0x3118,	// (0x0001a12f) popup_image_details_window_t1_ParamLimits

0x312a,	// (0x0001a141) popup_image_details_window_t2_ParamLimits

0x3143,	// (0x0001a15a) popup_image_details_window_t3_ParamLimits

0x3157,	// (0x0001a16e) popup_image_details_window_t4_ParamLimits

0x3172,	// (0x0001a189) popup_image_details_window_t5_ParamLimits

0xf73e,	// (0x00026755) popup_image_details_window_t_ParamLimits

0xd073,	// (0x0002408a) cl_header_name_pane_ParamLimits

0xd073,	// (0x0002408a) cl_header_name_pane

0xd34d,	// (0x00024364) cl_header_name_pane_t1_ParamLimits

0xd34d,	// (0x00024364) cl_header_name_pane_t1

0xd364,	// (0x0002437b) cl_header_name_pane_t2_ParamLimits

0xd364,	// (0x0002437b) cl_header_name_pane_t2

0xd38e,	// (0x000243a5) cl_header_name_pane_t3_ParamLimits

0xd38e,	// (0x000243a5) cl_header_name_pane_t3

0x0002,

0xfb3f,	// (0x00026b56) cl_header_name_pane_t_ParamLimits

0xfb3f,	// (0x00026b56) cl_header_name_pane_t

0xa19b,	// (0x000211b2) navi_pane_mv_g2_ParamLimits

0x3ca4,	// (0x0001acbb) field_vitu2_entry_pane_g1_ParamLimits

0x3cb0,	// (0x0001acc7) field_vitu2_entry_pane_g2_ParamLimits

0x3cbc,	// (0x0001acd3) field_vitu2_entry_pane_g3_ParamLimits

0x3cbc,	// (0x0001acd3) field_vitu2_entry_pane_g3

0xf935,	// (0x0002694c) field_vitu2_entry_pane_g_ParamLimits

0x7d30,	// (0x0001ed47) cell_vitu2_itu_pane_g1_ParamLimits

0x7d40,	// (0x0001ed57) cell_vitu2_itu_pane_g2_ParamLimits

0x7d40,	// (0x0001ed57) cell_vitu2_itu_pane_g2

0x0001,

0xf941,	// (0x00026958) cell_vitu2_itu_pane_g_ParamLimits

0xf941,	// (0x00026958) cell_vitu2_itu_pane_g

0x7b11,	// (0x0001eb28) bg_vkb2_func_pane_cp05_ParamLimits

0x7b11,	// (0x0001eb28) bg_vkb2_func_pane_cp05

0x7b11,	// (0x0001eb28) bg_vkb2_func_pane_cp03

0x7b11,	// (0x0001eb28) bg_vkb2_func_pane_cp04

0x7b11,	// (0x0001eb28) bg_vkb2_func_pane_cp10_ParamLimits

0x7b11,	// (0x0001eb28) bg_vkb2_func_pane_cp10

0xd015,	// (0x0002402c) bg_vkb2_func_pane_cp08

0xcffb,	// (0x00024012) bg_vkb2_func_pane_cp06

0xd009,	// (0x00024020) bg_vkb2_func_pane_cp07

0x4422,	// (0x0001b439) bg_vkb2_func_pane_cp11_ParamLimits

0x4422,	// (0x0001b439) bg_vkb2_func_pane_cp11

0x4437,	// (0x0001b44e) bg_vkb2_func_pane_cp12_ParamLimits

0x4437,	// (0x0001b44e) bg_vkb2_func_pane_cp12

0x001a,	// (0x00017031) bg_vkb2_func_pane_cp09

0x3d2a,	// (0x0001ad41) bg_vkb2_func_pane_g1

0x0dfc,	// (0x00017e13) bg_vkb2_func_pane_g2

0x3d32,	// (0x0001ad49) bg_vkb2_func_pane_g3

0x3d3a,	// (0x0001ad51) bg_vkb2_func_pane_g4

0x3fb3,	// (0x0001afca) bg_vkb2_func_pane_g5

0x3d52,	// (0x0001ad69) bg_vkb2_func_pane_g6

0x3d5a,	// (0x0001ad71) bg_vkb2_func_pane_g7

0x3d4a,	// (0x0001ad61) bg_vkb2_func_pane_g8

0x0ddc,	// (0x00017df3) bg_vkb2_func_pane_g9

0x0008,

0xfb46,	// (0x00026b5d) bg_vkb2_func_pane_g

0xd29a,	// (0x000242b1) blid2_tripm_pane_g6_ParamLimits

0xd29a,	// (0x000242b1) blid2_tripm_pane_g6

0x3a7f,	// (0x0001aa96) mp4_progress_pane_g1

0xd2f6,	// (0x0002430d) blid2_tripm_values_pane_ParamLimits

0xd2f6,	// (0x0002430d) blid2_tripm_values_pane

0xd3b3,	// (0x000243ca) blid2_tripm_values_pane_t1

0xd3c1,	// (0x000243d8) blid2_tripm_values_pane_t2

0xd3cf,	// (0x000243e6) blid2_tripm_values_pane_t3

0xd3dd,	// (0x000243f4) blid2_tripm_values_pane_t4

0xd3eb,	// (0x00024402) blid2_tripm_values_pane_t5

0xd3f9,	// (0x00024410) blid2_tripm_values_pane_t6

0xd407,	// (0x0002441e) blid2_tripm_values_pane_t7

0xd415,	// (0x0002442c) blid2_tripm_values_pane_t8

0xd423,	// (0x0002443a) blid2_tripm_values_pane_t9

0x0008,

0xfb59,	// (0x00026b70) blid2_tripm_values_pane_t

0x8e15,	// (0x0001fe2c) call_video_pane_t1_ParamLimits

0x8e36,	// (0x0001fe4d) call_video_pane_t2_ParamLimits

0xf28d,	// (0x000262a4) call_video_pane_t_ParamLimits

0xa6f3,	// (0x0002170a) msg_header_pane_g1_ParamLimits

0x1749,	// (0x00018760) msg_header_pane_g2_ParamLimits

0x1749,	// (0x00018760) msg_header_pane_g2

0x0001,

0xf4a7,	// (0x000264be) msg_header_pane_g_ParamLimits

0xf4a7,	// (0x000264be) msg_header_pane_g

0x083d,	// (0x00017854) main_clock2_pane_ParamLimits

0xbea4,	// (0x00022ebb) grid_clock2_toolbar_pane_ParamLimits

0xbea4,	// (0x00022ebb) grid_clock2_toolbar_pane

0xbea4,	// (0x00022ebb) listscroll_clock2_pane_ParamLimits

0xbea4,	// (0x00022ebb) listscroll_clock2_pane

0xbf41,	// (0x00022f58) main_clock2_pane_t3_ParamLimits

0xbf41,	// (0x00022f58) main_clock2_pane_t3

0xbf53,	// (0x00022f6a) main_clock2_pane_t4_ParamLimits

0xbf53,	// (0x00022f6a) main_clock2_pane_t4

0x4534,	// (0x0001b54b) cell_clock2_toolbar_pane

0x453c,	// (0x0001b553) cell_clock2_toolbar_pane_cp01

0x453c,	// (0x0001b553) cell_clock2_toolbar_pane_cp02

0x4544,	// (0x0001b55b) cell_clock2_toolbar_pane_cp03

0x454c,	// (0x0001b563) list_clock2_pane

0x1461,	// (0x00018478) scroll_pane_cp10

0x4554,	// (0x0001b56b) list_single_clock2_pane_ParamLimits

0x4554,	// (0x0001b56b) list_single_clock2_pane

0x15ae,	// (0x000185c5) list_highlight_pane_cp08

0x4561,	// (0x0001b578) list_single_clock2_pane_t1

0x456f,	// (0x0001b586) list_single_clock2_pane_t2

0x0001,

0xfb6c,	// (0x00026b83) list_single_clock2_pane_t

0x001a,	// (0x00017031) bg_button_pane_cp10

0x457d,	// (0x0001b594) cell_clock2_toolbar_pane_g1

0x70e8,	// (0x0001e0ff) aid_main_viewer_pane_g1_ParamLimits

0x70e8,	// (0x0001e0ff) aid_main_viewer_pane_g1

0x70f4,	// (0x0001e10b) aid_main_viewer_pane_g2_ParamLimits

0x70f4,	// (0x0001e10b) aid_main_viewer_pane_g2

0xa746,	// (0x0002175d) aid_main_viewer_pane_g3_ParamLimits

0xa746,	// (0x0002175d) aid_main_viewer_pane_g3

0xa757,	// (0x0002176e) aid_main_viewer_pane_g4_ParamLimits

0xa757,	// (0x0002176e) aid_main_viewer_pane_g4

0x0003,

0xf4b8,	// (0x000264cf) aid_main_viewer_pane_g_ParamLimits

0xf4b8,	// (0x000264cf) aid_main_viewer_pane_g

0xaea5,	// (0x00021ebc) main_calc_pane_ParamLimits

0xaeb2,	// (0x00021ec9) main_dialer2_pane_ParamLimits

0x001a,	// (0x00017031) main_cam6_pane

0x001a,	// (0x00017031) main_vid6_pane

0xbeb0,	// (0x00022ec7) listscroll_gen_pane_cp06_ParamLimits

0xbeb0,	// (0x00022ec7) listscroll_gen_pane_cp06

0xbf65,	// (0x00022f7c) main_clock2_pane_t5_ParamLimits

0xbf65,	// (0x00022f7c) main_clock2_pane_t5

0xbfb4,	// (0x00022fcb) aid_call2_pane_cp10_ParamLimits

0xbfc6,	// (0x00022fdd) aid_call_pane_cp10_ParamLimits

0x14e3,	// (0x000184fa) popup_clock_analogue_window_cp10_g1_ParamLimits

0x14e3,	// (0x000184fa) popup_clock_analogue_window_cp10_g2_ParamLimits

0xbfd8,	// (0x00022fef) popup_clock_analogue_window_cp10_g3_ParamLimits

0xbfd8,	// (0x00022fef) popup_clock_analogue_window_cp10_g4_ParamLimits

0x14e3,	// (0x000184fa) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7ee,	// (0x00026805) popup_clock_analogue_window_cp10_g_ParamLimits

0xbfee,	// (0x00023005) popup_clock_analogue_window_cp10_t1_ParamLimits

0xc414,	// (0x0002342b) cell_dialer2_keypad_pane_g2_ParamLimits

0xc414,	// (0x0002342b) cell_dialer2_keypad_pane_g2

0x0001,

0xf8d4,	// (0x000268eb) cell_dialer2_keypad_pane_g_ParamLimits

0xf8d4,	// (0x000268eb) cell_dialer2_keypad_pane_g

0xc430,	// (0x00023447) cell_dialer2_keypad_pane_t1

0xc839,	// (0x00023850) main_cset_text2_pane_ParamLimits

0xc839,	// (0x00023850) main_cset_text2_pane

0x4210,	// (0x0001b227) area_vitu2_query_pane_g1_ParamLimits

0xcf9a,	// (0x00023fb1) area_vitu2_query_pane_g2_ParamLimits

0xfa89,	// (0x00026aa0) area_vitu2_query_pane_g_ParamLimits

0x4294,	// (0x0001b2ab) area_vitu2_query_pane_t7_ParamLimits

0x4294,	// (0x0001b2ab) area_vitu2_query_pane_t7

0xcffb,	// (0x00024012) bg_button_pane_cp018_ParamLimits

0xd009,	// (0x00024020) bg_button_pane_cp021_ParamLimits

0xd015,	// (0x0002402c) bg_button_pane_cp022_ParamLimits

0xd015,	// (0x0002402c) bg_vkb2_func_pane_cp08_ParamLimits

0xcffb,	// (0x00024012) bg_vkb2_func_pane_cp06_ParamLimits

0xd009,	// (0x00024020) bg_vkb2_func_pane_cp07_ParamLimits

0xd026,	// (0x0002403d) input_focus_pane_cp09_ParamLimits

0x8076,	// (0x0001f08d) cam6_autofocus_pane_ParamLimits

0x8076,	// (0x0001f08d) cam6_autofocus_pane

0x8098,	// (0x0001f0af) cam6_image_uncrop_pane_ParamLimits

0x8098,	// (0x0001f0af) cam6_image_uncrop_pane

0x80c5,	// (0x0001f0dc) cam6_indi_pane_ParamLimits

0x80c5,	// (0x0001f0dc) cam6_indi_pane

0x80df,	// (0x0001f0f6) cam6_mode_pane_ParamLimits

0x80df,	// (0x0001f0f6) cam6_mode_pane

0x80f3,	// (0x0001f10a) cam6_timer_pane_ParamLimits

0x80f3,	// (0x0001f10a) cam6_timer_pane

0x80ff,	// (0x0001f116) cam6_zoom_pane_ParamLimits

0x80ff,	// (0x0001f116) cam6_zoom_pane

0xd431,	// (0x00024448) cam6_mode_pane_g1_ParamLimits

0xd431,	// (0x00024448) cam6_mode_pane_g1

0xd43d,	// (0x00024454) cam6_mode_pane_g2_ParamLimits

0xd43d,	// (0x00024454) cam6_mode_pane_g2

0xd449,	// (0x00024460) cam6_mode_pane_g3_ParamLimits

0xd449,	// (0x00024460) cam6_mode_pane_g3

0xd455,	// (0x0002446c) cam6_mode_pane_g4_ParamLimits

0xd455,	// (0x0002446c) cam6_mode_pane_g4

0x0003,

0xfb71,	// (0x00026b88) cam6_mode_pane_g_ParamLimits

0xfb71,	// (0x00026b88) cam6_mode_pane_g

0x4593,	// (0x0001b5aa) bg_tb_trans_pane_cp08_ParamLimits

0x4593,	// (0x0001b5aa) bg_tb_trans_pane_cp08

0x45a1,	// (0x0001b5b8) cam6_battery_pane_ParamLimits

0x45a1,	// (0x0001b5b8) cam6_battery_pane

0x45b7,	// (0x0001b5ce) cam6_indi_pane_g1_ParamLimits

0x45b7,	// (0x0001b5ce) cam6_indi_pane_g1

0x45c9,	// (0x0001b5e0) cam6_indi_pane_g2_ParamLimits

0x45c9,	// (0x0001b5e0) cam6_indi_pane_g2

0x45db,	// (0x0001b5f2) cam6_indi_pane_g3_ParamLimits

0x45db,	// (0x0001b5f2) cam6_indi_pane_g3

0x0002,

0xfb7a,	// (0x00026b91) cam6_indi_pane_g_ParamLimits

0xfb7a,	// (0x00026b91) cam6_indi_pane_g

0x45ed,	// (0x0001b604) cam6_indi_pane_t1_ParamLimits

0x45ed,	// (0x0001b604) cam6_indi_pane_t1

0xc56f,	// (0x00023586) cam6_autofocus_pane_g1

0xc567,	// (0x0002357e) cam6_autofocus_pane_g2

0xc57f,	// (0x00023596) cam6_autofocus_pane_g3

0xc577,	// (0x0002358e) cam6_autofocus_pane_g4

0x0003,

0xfb81,	// (0x00026b98) cam6_autofocus_pane_g

0x4613,	// (0x0001b62a) cam6_timer_pane_g1

0x461b,	// (0x0001b632) cam6_timer_pane_t1

0x4629,	// (0x0001b640) cam6_zoom_cont_pane

0x4631,	// (0x0001b648) cam6_zoom_pane_g1

0x4639,	// (0x0001b650) cam6_zoom_pane_g2

0xd461,	// (0x00024478) cam6_zoom_pane_g3

0x0002,

0xfb8a,	// (0x00026ba1) cam6_zoom_pane_g

0x2f55,	// (0x00019f6c) cam6_battery_pane_g1

0x2f55,	// (0x00019f6c) cam6_battery_pane_g2

0x0001,

0xf6fb,	// (0x00026712) cam6_battery_pane_g

0x4641,	// (0x0001b658) cam6_zoom_cont_pane_g1

0x464a,	// (0x0001b661) cam6_zoom_cont_pane_g2

0x4653,	// (0x0001b66a) cam6_zoom_cont_pane_g3

0x0002,

0xfb91,	// (0x00026ba8) cam6_zoom_cont_pane_g

0xd47e,	// (0x00024495) cam6_mode_pane_cp_ParamLimits

0xd47e,	// (0x00024495) cam6_mode_pane_cp

0xd492,	// (0x000244a9) cam6_zoom_pane_cp_ParamLimits

0xd492,	// (0x000244a9) cam6_zoom_pane_cp

0xd4aa,	// (0x000244c1) vid6_image_uncrop_cif_pane_ParamLimits

0xd4aa,	// (0x000244c1) vid6_image_uncrop_cif_pane

0xd4d6,	// (0x000244ed) vid6_image_uncrop_nhd_pane_ParamLimits

0xd4d6,	// (0x000244ed) vid6_image_uncrop_nhd_pane

0xd4f3,	// (0x0002450a) vid6_image_uncrop_vga_pane_ParamLimits

0xd4f3,	// (0x0002450a) vid6_image_uncrop_vga_pane

0xd512,	// (0x00024529) vid6_image_uncrop_wvga_pane_ParamLimits

0xd512,	// (0x00024529) vid6_image_uncrop_wvga_pane

0xd52f,	// (0x00024546) vid6_indi_pane_ParamLimits

0xd52f,	// (0x00024546) vid6_indi_pane

0x4593,	// (0x0001b5aa) bg_tb_trans_pane_cp09_ParamLimits

0x4593,	// (0x0001b5aa) bg_tb_trans_pane_cp09

0x466b,	// (0x0001b682) cam6_battery_pane_cp_ParamLimits

0x466b,	// (0x0001b682) cam6_battery_pane_cp

0x4677,	// (0x0001b68e) vid6_indi_pane_g1_ParamLimits

0x4677,	// (0x0001b68e) vid6_indi_pane_g1

0x4689,	// (0x0001b6a0) vid6_indi_pane_g2_ParamLimits

0x4689,	// (0x0001b6a0) vid6_indi_pane_g2

0x469b,	// (0x0001b6b2) vid6_indi_pane_g3_ParamLimits

0x469b,	// (0x0001b6b2) vid6_indi_pane_g3

0x46b0,	// (0x0001b6c7) vid6_indi_pane_g4_ParamLimits

0x46b0,	// (0x0001b6c7) vid6_indi_pane_g4

0x46c5,	// (0x0001b6dc) vid6_indi_pane_g5_ParamLimits

0x46c5,	// (0x0001b6dc) vid6_indi_pane_g5

0x0004,

0xfb98,	// (0x00026baf) vid6_indi_pane_g_ParamLimits

0xfb98,	// (0x00026baf) vid6_indi_pane_g

0x46df,	// (0x0001b6f6) vid6_indi_pane_t1_ParamLimits

0x46df,	// (0x0001b6f6) vid6_indi_pane_t1

0x46f5,	// (0x0001b70c) vid6_indi_pane_t2_ParamLimits

0x46f5,	// (0x0001b70c) vid6_indi_pane_t2

0x471d,	// (0x0001b734) vid6_indi_pane_t3_ParamLimits

0x471d,	// (0x0001b734) vid6_indi_pane_t3

0x4745,	// (0x0001b75c) vid6_indi_pane_t4_ParamLimits

0x4745,	// (0x0001b75c) vid6_indi_pane_t4

0x0003,

0xfba3,	// (0x00026bba) vid6_indi_pane_t_ParamLimits

0xfba3,	// (0x00026bba) vid6_indi_pane_t

0x4769,	// (0x0001b780) wait_bar_pane_cp08

0xd552,	// (0x00024569) main_cset_text2_pane_t1_ParamLimits

0xd552,	// (0x00024569) main_cset_text2_pane_t1

0xd469,	// (0x00024480) listscroll_gen_pane_cp06_t1_ParamLimits

0xd469,	// (0x00024480) listscroll_gen_pane_cp06_t1

0x001a,	// (0x00017031) main_cam6_set_pane

0x7a24,	// (0x0001ea3b) bg_tb_trans_pane_cp06_ParamLimits

0x7a3a,	// (0x0001ea51) cam4_indicators_pane_g1_ParamLimits

0x7a4b,	// (0x0001ea62) cam4_indicators_pane_g2_ParamLimits

0xf911,	// (0x00026928) cam4_indicators_pane_g_ParamLimits

0x7a69,	// (0x0001ea80) cam4_indicators_pane_t1_ParamLimits

0x7b11,	// (0x0001eb28) bg_tb_trans_pane_cp07_ParamLimits

0x7a3a,	// (0x0001ea51) vid4_indicators_pane_g1_ParamLimits

0x7b27,	// (0x0001eb3e) vid4_indicators_pane_g2_ParamLimits

0x7b38,	// (0x0001eb4f) vid4_indicators_pane_g3_ParamLimits

0x7b49,	// (0x0001eb60) vid4_indicators_pane_g4_ParamLimits

0xf923,	// (0x0002693a) vid4_indicators_pane_g_ParamLimits

0x7b65,	// (0x0001eb7c) vid4_indicators_pane_t1_ParamLimits

0x8006,	// (0x0001f01d) vid4_progress_pane_g1_ParamLimits

0x8016,	// (0x0001f02d) vid4_progress_pane_g2_ParamLimits

0x1075,	// (0x0001808c) vid4_progress_pane_g3_ParamLimits

0x7a4b,	// (0x0001ea62) vid4_progress_pane_g4_ParamLimits

0xfad4,	// (0x00026aeb) vid4_progress_pane_g_ParamLimits

0x8026,	// (0x0001f03d) vid4_progress_pane_t1_ParamLimits

0x803b,	// (0x0001f052) vid4_progress_pane_t2_ParamLimits

0x8051,	// (0x0001f068) vid4_progress_pane_t3_ParamLimits

0xfadf,	// (0x00026af6) vid4_progress_pane_t_ParamLimits

0x8066,	// (0x0001f07d) wait_bar_pane_cp07_ParamLimits

0xd590,	// (0x000245a7) main_cam6_set_pane_g2_ParamLimits

0xd590,	// (0x000245a7) main_cam6_set_pane_g2

0xd59c,	// (0x000245b3) main_cset6_listscroll_pane_ParamLimits

0xd59c,	// (0x000245b3) main_cset6_listscroll_pane

0xd5c7,	// (0x000245de) main_cset6_slider_pane_ParamLimits

0xd5c7,	// (0x000245de) main_cset6_slider_pane

0xd5d3,	// (0x000245ea) main_cset6_text2_pane_ParamLimits

0xd5d3,	// (0x000245ea) main_cset6_text2_pane

0x4778,	// (0x0001b78f) main_cset6_text_pane

0x4780,	// (0x0001b797) main_cset_list_pane_copy1_ParamLimits

0x4780,	// (0x0001b797) main_cset_list_pane_copy1

0x4790,	// (0x0001b7a7) scroll_pane_cp028_copy1

0xd5e6,	// (0x000245fd) cset_list_set_pane_copy1

0xd600,	// (0x00024617) aid_position_infowindow_above_copy1

0xd608,	// (0x0002461f) aid_position_infowindow_below_copy1

0x4799,	// (0x0001b7b0) cset_list_set_pane_g1_copy1

0x47a1,	// (0x0001b7b8) cset_list_set_pane_g3_copy1_ParamLimits

0x47a1,	// (0x0001b7b8) cset_list_set_pane_g3_copy1

0x47b0,	// (0x0001b7c7) cset_list_set_pane_t1_copy1_ParamLimits

0x47b0,	// (0x0001b7c7) cset_list_set_pane_t1_copy1

0x008a,	// (0x000170a1) list_highlight_pane_cp021_copy1_ParamLimits

0x008a,	// (0x000170a1) list_highlight_pane_cp021_copy1

0x47c5,	// (0x0001b7dc) cset6_slider_pane_ParamLimits

0x47c5,	// (0x0001b7dc) cset6_slider_pane

0x47f1,	// (0x0001b808) main_cset6_slider_pane_g1_ParamLimits

0x47f1,	// (0x0001b808) main_cset6_slider_pane_g1

0xd610,	// (0x00024627) main_cset6_slider_pane_g2_ParamLimits

0xd610,	// (0x00024627) main_cset6_slider_pane_g2

0x3e59,	// (0x0001ae70) main_cset6_slider_pane_g3_ParamLimits

0x3e59,	// (0x0001ae70) main_cset6_slider_pane_g3

0xd638,	// (0x0002464f) main_cset6_slider_pane_g4_ParamLimits

0xd638,	// (0x0002464f) main_cset6_slider_pane_g4

0xd644,	// (0x0002465b) main_cset6_slider_pane_g5_ParamLimits

0xd644,	// (0x0002465b) main_cset6_slider_pane_g5

0x3e59,	// (0x0001ae70) main_cset6_slider_pane_g7_ParamLimits

0x3e59,	// (0x0001ae70) main_cset6_slider_pane_g7

0x3e65,	// (0x0001ae7c) main_cset6_slider_pane_g8_ParamLimits

0x3e65,	// (0x0001ae7c) main_cset6_slider_pane_g8

0xd652,	// (0x00024669) main_cset6_slider_pane_g9_ParamLimits

0xd652,	// (0x00024669) main_cset6_slider_pane_g9

0xd65e,	// (0x00024675) main_cset6_slider_pane_g10_ParamLimits

0xd65e,	// (0x00024675) main_cset6_slider_pane_g10

0xd638,	// (0x0002464f) main_cset6_slider_pane_g11_ParamLimits

0xd638,	// (0x0002464f) main_cset6_slider_pane_g11

0xd66a,	// (0x00024681) main_cset6_slider_pane_g12_ParamLimits

0xd66a,	// (0x00024681) main_cset6_slider_pane_g12

0xd676,	// (0x0002468d) main_cset6_slider_pane_g13_ParamLimits

0xd676,	// (0x0002468d) main_cset6_slider_pane_g13

0xd684,	// (0x0002469b) main_cset6_slider_pane_g14_ParamLimits

0xd684,	// (0x0002469b) main_cset6_slider_pane_g14

0xd692,	// (0x000246a9) main_cset6_slider_pane_g15_ParamLimits

0xd692,	// (0x000246a9) main_cset6_slider_pane_g15

0xd644,	// (0x0002465b) main_cset6_slider_pane_g16_ParamLimits

0xd644,	// (0x0002465b) main_cset6_slider_pane_g16

0xd6aa,	// (0x000246c1) main_cset6_slider_pane_g17_ParamLimits

0xd6aa,	// (0x000246c1) main_cset6_slider_pane_g17

0x0011,

0xfbac,	// (0x00026bc3) main_cset6_slider_pane_g_ParamLimits

0xfbac,	// (0x00026bc3) main_cset6_slider_pane_g

0x4819,	// (0x0001b830) main_cset6_slider_pane_t1_ParamLimits

0x4819,	// (0x0001b830) main_cset6_slider_pane_t1

0xd6b8,	// (0x000246cf) main_cset6_slider_pane_t2_ParamLimits

0xd6b8,	// (0x000246cf) main_cset6_slider_pane_t2

0xd6e3,	// (0x000246fa) main_cset6_slider_pane_t3_ParamLimits

0xd6e3,	// (0x000246fa) main_cset6_slider_pane_t3

0xd70e,	// (0x00024725) main_cset6_slider_pane_t4_ParamLimits

0xd70e,	// (0x00024725) main_cset6_slider_pane_t4

0xd73b,	// (0x00024752) main_cset6_slider_pane_t5_ParamLimits

0xd73b,	// (0x00024752) main_cset6_slider_pane_t5

0x485a,	// (0x0001b871) main_cset6_slider_pane_t7_ParamLimits

0x485a,	// (0x0001b871) main_cset6_slider_pane_t7

0xd768,	// (0x0002477f) main_cset6_slider_pane_t8_ParamLimits

0xd768,	// (0x0002477f) main_cset6_slider_pane_t8

0xd78c,	// (0x000247a3) main_cset6_slider_pane_t9_ParamLimits

0xd78c,	// (0x000247a3) main_cset6_slider_pane_t9

0xd7b0,	// (0x000247c7) main_cset6_slider_pane_t10_ParamLimits

0xd7b0,	// (0x000247c7) main_cset6_slider_pane_t10

0xd7d4,	// (0x000247eb) main_cset6_slider_pane_t11_ParamLimits

0xd7d4,	// (0x000247eb) main_cset6_slider_pane_t11

0x4890,	// (0x0001b8a7) main_cset6_slider_pane_t14_ParamLimits

0x4890,	// (0x0001b8a7) main_cset6_slider_pane_t14

0x48c9,	// (0x0001b8e0) main_cset6_slider_pane_t15_ParamLimits

0x48c9,	// (0x0001b8e0) main_cset6_slider_pane_t15

0x000b,

0xfbd1,	// (0x00026be8) main_cset6_slider_pane_t_ParamLimits

0xfbd1,	// (0x00026be8) main_cset6_slider_pane_t

0x3f3d,	// (0x0001af54) cset_slider_pane_g1_copy1

0x3f46,	// (0x0001af5d) cset_slider_pane_g2_copy1

0x3f4f,	// (0x0001af66) cset_slider_pane_g3_copy1

0x001a,	// (0x00017031) bg_popup_sub_pane_cp011_copy1

0x4034,	// (0x0001b04b) main_cset_text_pane_g1_copy1

0x403c,	// (0x0001b053) main_cset_text_pane_t1_copy1

0x404a,	// (0x0001b061) main_cset_text_pane_t2_copy1

0x4058,	// (0x0001b06f) main_cset_text_pane_t3_copy1

0x4066,	// (0x0001b07d) main_cset_text_pane_t4_copy1

0x4074,	// (0x0001b08b) main_cset_text_pane_t5_copy1

0x4082,	// (0x0001b099) main_cset_text_pane_t6_copy1

0x4090,	// (0x0001b0a7) main_cset_text_pane_t7_copy1

0xd7fa,	// (0x00024811) main_cset_text2_pane_t1_copy1

0x001a,	// (0x00017031) main_ncimui_pane

0xaef1,	// (0x00021f08) popup_query_ncimui_window_ParamLimits

0xaef1,	// (0x00021f08) popup_query_ncimui_window

0x3221,	// (0x0001a238) field_cale_ev2_pane_g4_ParamLimits

0x3221,	// (0x0001a238) field_cale_ev2_pane_g4

0xc3b4,	// (0x000233cb) cell_video_dialer_keypad_pane_g2_ParamLimits

0xc3b4,	// (0x000233cb) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8af,	// (0x000268c6) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8af,	// (0x000268c6) cell_video_dialer_keypad_pane_g

0xc3cc,	// (0x000233e3) cell_video_dialer_keypad_pane_t1

0x001a,	// (0x00017031) bg_popup_window_pane_cp012

0x1331,	// (0x00018348) heading_pane_cp06

0x49f1,	// (0x0001ba08) ncim_query_content_pane

0x001a,	// (0x00017031) bg_popup_heading_pane_cp01

0x49f9,	// (0x0001ba10) ncim_heading_pane_t1

0x4a07,	// (0x0001ba1e) ncim_indicator_popup_pane

0x4a19,	// (0x0001ba30) ncim_query_button_pane

0x4a2d,	// (0x0001ba44) ncim_query_content_pane_t1

0x4a3f,	// (0x0001ba56) ncim_query_content_pane_t2

0x0005,

0xfc10,	// (0x00026c27) ncim_query_content_pane_t

0x4a79,	// (0x0001ba90) ncim_query_list_pane

0x4a8b,	// (0x0001baa2) ncim_query_popup_pane

0x4a07,	// (0x0001ba1e) ncim_indicator_popup_pane_ParamLimits

0xd927,	// (0x0002493e) ncim_query_content_pane_g1_ParamLimits

0xd927,	// (0x0002493e) ncim_query_content_pane_g1

0x4a2d,	// (0x0001ba44) ncim_query_content_pane_t1_ParamLimits

0x4a3f,	// (0x0001ba56) ncim_query_content_pane_t2_ParamLimits

0xd933,	// (0x0002494a) ncim_query_content_pane_t3_ParamLimits

0xd933,	// (0x0002494a) ncim_query_content_pane_t3

0xd950,	// (0x00024967) ncim_query_content_pane_t4_ParamLimits

0xd950,	// (0x00024967) ncim_query_content_pane_t4

0xd96d,	// (0x00024984) ncim_query_content_pane_t5_ParamLimits

0xd96d,	// (0x00024984) ncim_query_content_pane_t5

0x4a51,	// (0x0001ba68) ncim_query_content_pane_t6_ParamLimits

0x4a51,	// (0x0001ba68) ncim_query_content_pane_t6

0xfc10,	// (0x00026c27) ncim_query_content_pane_t_ParamLimits

0x4a79,	// (0x0001ba90) ncim_query_list_pane_ParamLimits

0x4a8b,	// (0x0001baa2) ncim_query_popup_pane_ParamLimits

0x4a9f,	// (0x0001bab6) wait_bar_pane_cp04

0x001a,	// (0x00017031) input_focus_pane_cp011

0x4aa7,	// (0x0001babe) ncim_query_popup_pane_t1

0x4ab5,	// (0x0001bacc) ncim_list_query_list_pane_ParamLimits

0x4ab5,	// (0x0001bacc) ncim_list_query_list_pane

0x001a,	// (0x00017031) bg_button_pane_cp027

0x4ac8,	// (0x0001badf) ncim_query_button_pane_g1

0x001a,	// (0x00017031) list_highlight_pane_cp012

0x4ad2,	// (0x0001bae9) ncim_list_query_list_pane_g1

0x4ada,	// (0x0001baf1) ncim_list_query_list_pane_t1

0x7a5a,	// (0x0001ea71) cam4_indicators_pane_g3_ParamLimits

0x7a5a,	// (0x0001ea71) cam4_indicators_pane_g3

0x7b55,	// (0x0001eb6c) vid4_indicators_pane_g5_ParamLimits

0x7b55,	// (0x0001eb6c) vid4_indicators_pane_g5

0x7a5a,	// (0x0001ea71) vid4_progress_pane_g5_ParamLimits

0x7a5a,	// (0x0001ea71) vid4_progress_pane_g5

0xd840,	// (0x00024857) main_ncimui_pane_g1

0xd896,	// (0x000248ad) ncimui_group_query_pane_ParamLimits

0xd896,	// (0x000248ad) ncimui_group_query_pane

0xd8d2,	// (0x000248e9) ncimui_list_pane_ParamLimits

0xd8d2,	// (0x000248e9) ncimui_list_pane

0xd8f3,	// (0x0002490a) ncimui_text_pane_ParamLimits

0xd8f3,	// (0x0002490a) ncimui_text_pane

0xd98a,	// (0x000249a1) ncimui_text_pane_t1_ParamLimits

0xd98a,	// (0x000249a1) ncimui_text_pane_t1

0x4ae8,	// (0x0001baff) ncimui_list_single_graphic_pane_ParamLimits

0x4ae8,	// (0x0001baff) ncimui_list_single_graphic_pane

0xd9a9,	// (0x000249c0) ncimui_query_pane_ParamLimits

0xd9a9,	// (0x000249c0) ncimui_query_pane

0x001a,	// (0x00017031) list_highlight_pane_cp013

0x4af8,	// (0x0001bb0f) ncim_list_query_list_pane_t1_copy1

0x4ad2,	// (0x0001bae9) ncim_list_single_graphic_pane_g1

0x4b06,	// (0x0001bb1d) ncim_query_button_pane_cp01

0x4b12,	// (0x0001bb29) ncim_query_entry_pane_ParamLimits

0x4b12,	// (0x0001bb29) ncim_query_entry_pane

0x4b25,	// (0x0001bb3c) ncimui_query_pane_g1

0x4b31,	// (0x0001bb48) ncimui_query_pane_t1_ParamLimits

0x4b31,	// (0x0001bb48) ncimui_query_pane_t1

0x008a,	// (0x000170a1) input_focus_pane_cp012

0x4b4a,	// (0x0001bb61) ncim_query_entry_pane_t1

0x083d,	// (0x00017854) main_im_pane_ParamLimits

0x008a,	// (0x000170a1) main_mobtv_pane_ParamLimits

0x008a,	// (0x000170a1) main_mobtv_pane

0xd652,	// (0x00024669) main_cset6_slider_pane_g18_ParamLimits

0xd652,	// (0x00024669) main_cset6_slider_pane_g18

0xd676,	// (0x0002468d) main_cset6_slider_pane_g19_ParamLimits

0xd676,	// (0x0002468d) main_cset6_slider_pane_g19

0x3cbc,	// (0x0001acd3) bg_main_mobtv_pane_ParamLimits

0x3cbc,	// (0x0001acd3) bg_main_mobtv_pane

0xd9bc,	// (0x000249d3) main_mobtv_info_pane

0xd9c7,	// (0x000249de) main_mobtv_loading_pane_ParamLimits

0xd9c7,	// (0x000249de) main_mobtv_loading_pane

0x4b6a,	// (0x0001bb81) main_mobtv_pg_channel_list_pane

0x4b74,	// (0x0001bb8b) main_mobtv_pg_hdr_pane

0xd9d4,	// (0x000249eb) main_mobtv_programe_curr_pane_ParamLimits

0xd9d4,	// (0x000249eb) main_mobtv_programe_curr_pane

0xd9e1,	// (0x000249f8) main_mobtv_programe_next_pane_ParamLimits

0xd9e1,	// (0x000249f8) main_mobtv_programe_next_pane

0x4b7d,	// (0x0001bb94) popup_mobtv_noti_window

0x2f55,	// (0x00019f6c) main_tv_pg_hdr_pane_g1

0x4b85,	// (0x0001bb9c) main_tv_pg_hdr_pane_g2

0x4b8d,	// (0x0001bba4) main_tv_pg_hdr_pane_g3

0x4b95,	// (0x0001bbac) main_tv_pg_hdr_pane_g4

0x4b9d,	// (0x0001bbb4) main_tv_pg_hdr_pane_g5

0x4ba7,	// (0x0001bbbe) main_tv_pg_hdr_pane_g6

0x4bb1,	// (0x0001bbc8) main_tv_pg_hdr_pane_g7

0x4bbb,	// (0x0001bbd2) main_tv_pg_hdr_pane_g8

0x4bc5,	// (0x0001bbdc) main_tv_pg_hdr_pane_g9

0x4bcf,	// (0x0001bbe6) main_tv_pg_hdr_pane_g10

0x4bd9,	// (0x0001bbf0) main_tv_pg_hdr_pane_g11

0x000a,

0xfc1d,	// (0x00026c34) main_tv_pg_hdr_pane_g

0x4be3,	// (0x0001bbfa) main_tv_pg_hdr_pane_t1

0x4bf1,	// (0x0001bc08) main_tv_pg_hdr_pane_t2

0x4bff,	// (0x0001bc16) main_tv_pg_hdr_pane_t3

0x4c0f,	// (0x0001bc26) main_tv_pg_hdr_pane_t4

0x4c1f,	// (0x0001bc36) main_tv_pg_hdr_pane_t5

0x0004,

0xfc34,	// (0x00026c4b) main_tv_pg_hdr_pane_t

0x4c2f,	// (0x0001bc46) single_mobtv_pg_channel_pane_ParamLimits

0x4c2f,	// (0x0001bc46) single_mobtv_pg_channel_pane

0x4c41,	// (0x0001bc58) single_mobtv_pg_channel_table_pane

0x4c4a,	// (0x0001bc61) single_mobtv_pg_channel_thumb_pane

0x4c53,	// (0x0001bc6a) single_tv_pg_channel_pane_g1

0x4c5c,	// (0x0001bc73) single_tv_pg_channel_pane_g2

0x0001,

0xfc3f,	// (0x00026c56) single_tv_pg_channel_pane_g

0x31bc,	// (0x0001a1d3) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x31bc,	// (0x0001a1d3) bg_single_mobtv_pg_channel_thumb_pane

0x4c65,	// (0x0001bc7c) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x4c65,	// (0x0001bc7c) single_mobtv_pg_channel_thumb_pane_g1

0x4c73,	// (0x0001bc8a) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x4c73,	// (0x0001bc8a) single_mobtv_pg_channel_thumb_pane_g2

0x4c7f,	// (0x0001bc96) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x4c7f,	// (0x0001bc96) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc44,	// (0x00026c5b) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc44,	// (0x00026c5b) single_mobtv_pg_channel_thumb_pane_g

0x4c8b,	// (0x0001bca2) single_mobtv_pg_channel_thumb_pane_t1

0x4c99,	// (0x0001bcb0) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc4b,	// (0x00026c62) single_mobtv_pg_channel_thumb_pane_t

0x2f55,	// (0x00019f6c) bg_single_mobtv_pg_channel_table_pane_g1

0x2f55,	// (0x00019f6c) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6fb,	// (0x00026712) bg_single_mobtv_pg_channel_table_pane_g

0x4ca7,	// (0x0001bcbe) single_mobtv_pg_channel_table_pane_t1

0x4cb5,	// (0x0001bccc) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc50,	// (0x00026c67) single_mobtv_pg_channel_table_pane_t

0xd9f6,	// (0x00024a0d) main_mobtv_info_pane_g1_ParamLimits

0xd9f6,	// (0x00024a0d) main_mobtv_info_pane_g1

0xda12,	// (0x00024a29) main_mobtv_info_pane_t1_ParamLimits

0xda12,	// (0x00024a29) main_mobtv_info_pane_t1

0xda8a,	// (0x00024aa1) main_mobtv_info_pane_t2_ParamLimits

0xda8a,	// (0x00024aa1) main_mobtv_info_pane_t2

0x0002,

0xfc5a,	// (0x00026c71) main_mobtv_info_pane_t_ParamLimits

0xfc5a,	// (0x00026c71) main_mobtv_info_pane_t

0xdb19,	// (0x00024b30) wait_bar_pane_cp05

0xdb2b,	// (0x00024b42) main_mobtv_loading_pane_g1_ParamLimits

0xdb2b,	// (0x00024b42) main_mobtv_loading_pane_g1

0xdb39,	// (0x00024b50) main_mobtv_loading_pane_g2_ParamLimits

0xdb39,	// (0x00024b50) main_mobtv_loading_pane_g2

0xdb45,	// (0x00024b5c) main_mobtv_loading_pane_g3_ParamLimits

0xdb45,	// (0x00024b5c) main_mobtv_loading_pane_g3

0x0002,

0xfc61,	// (0x00026c78) main_mobtv_loading_pane_g_ParamLimits

0xfc61,	// (0x00026c78) main_mobtv_loading_pane_g

0x4cc3,	// (0x0001bcda) main_mobtv_loading_pane_t1_ParamLimits

0x4cc3,	// (0x0001bcda) main_mobtv_loading_pane_t1

0x4cdb,	// (0x0001bcf2) main_mobtv_loading_pane_t2_ParamLimits

0x4cdb,	// (0x0001bcf2) main_mobtv_loading_pane_t2

0x0001,

0xfc68,	// (0x00026c7f) main_mobtv_loading_pane_t_ParamLimits

0xfc68,	// (0x00026c7f) main_mobtv_loading_pane_t

0xdb53,	// (0x00024b6a) wait_bar_pane_cp06_ParamLimits

0xdb53,	// (0x00024b6a) wait_bar_pane_cp06

0x4cff,	// (0x0001bd16) main_mobtv_programe_curr_pane_t1

0x4d0d,	// (0x0001bd24) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc6d,	// (0x00026c84) main_mobtv_programe_curr_pane_t

0x4d1b,	// (0x0001bd32) main_mobtv_programe_next_pane_t1

0x4d29,	// (0x0001bd40) main_mobtv_programe_next_pane_t2

0x4d37,	// (0x0001bd4e) main_mobtv_programe_next_pane_t3

0x0002,

0xfc72,	// (0x00026c89) main_mobtv_programe_next_pane_t

0x001a,	// (0x00017031) bg_popup_mobtv_noti_window_pane

0x4d45,	// (0x0001bd5c) popup_mobtv_noti_window_g1

0x4d4d,	// (0x0001bd64) popup_mobtv_noti_window_t1

0x4d5b,	// (0x0001bd72) popup_mobtv_noti_window_t2

0x0001,

0xfc79,	// (0x00026c90) popup_mobtv_noti_window_t

0x2f55,	// (0x00019f6c) bg_popup_mobtv_noti_window_pane_g1

0x001a,	// (0x00017031) sc_clock_pane

0x001a,	// (0x00017031) main_fs_bigclock_pane

0xd2e4,	// (0x000242fb) blid2_tripm_pane_t4_ParamLimits

0xd2e4,	// (0x000242fb) blid2_tripm_pane_t4

0xdb5f,	// (0x00024b76) sc_clock_pane_g1_ParamLimits

0xdb5f,	// (0x00024b76) sc_clock_pane_g1

0xdb6d,	// (0x00024b84) sc_clock_pane_t1_ParamLimits

0xdb6d,	// (0x00024b84) sc_clock_pane_t1

0xdb80,	// (0x00024b97) sc_clock_pane_t2_ParamLimits

0xdb80,	// (0x00024b97) sc_clock_pane_t2

0xdb92,	// (0x00024ba9) sc_clock_pane_t3_ParamLimits

0xdb92,	// (0x00024ba9) sc_clock_pane_t3

0x0004,

0xfc7e,	// (0x00026c95) sc_clock_pane_t_ParamLimits

0xfc7e,	// (0x00026c95) sc_clock_pane_t

0xe849,	// (0x00025860) main_fs_bigclock_indicator_pane_ParamLimits

0xe849,	// (0x00025860) main_fs_bigclock_indicator_pane

0xdc1e,	// (0x00024c35) main_fs_bigclock_pane_g1_ParamLimits

0xdc1e,	// (0x00024c35) main_fs_bigclock_pane_g1

0xe855,	// (0x0002586c) main_fs_bigclock_pane_t1_ParamLimits

0xe855,	// (0x0002586c) main_fs_bigclock_pane_t1

0xe867,	// (0x0002587e) main_fs_bigclock_pane_t2_ParamLimits

0xe867,	// (0x0002587e) main_fs_bigclock_pane_t2

0xe879,	// (0x00025890) main_fs_bigclock_pane_t3_ParamLimits

0xe879,	// (0x00025890) main_fs_bigclock_pane_t3

0x0002,

0xfe7d,	// (0x00026e94) main_fs_bigclock_pane_t_ParamLimits

0xfe7d,	// (0x00026e94) main_fs_bigclock_pane_t

0x5a22,	// (0x0001ca39) main_fs_bigclock_indicator_pane_g1

0x4a21,	// (0x0001ba38) ncim_query_content_pane_g2_ParamLimits

0x4a21,	// (0x0001ba38) ncim_query_content_pane_g2

0x0001,

0xfc0b,	// (0x00026c22) ncim_query_content_pane_g_ParamLimits

0xfc0b,	// (0x00026c22) ncim_query_content_pane_g

0xdba6,	// (0x00024bbd) sc_clock_pane_t4_ParamLimits

0xdba6,	// (0x00024bbd) sc_clock_pane_t4

0x008a,	// (0x000170a1) main_radioblah_pane

0x3b98,	// (0x0001abaf) cell_call4_button_pane_t1_copy1_ParamLimits

0x3b98,	// (0x0001abaf) cell_call4_button_pane_t1_copy1

0xd848,	// (0x0002485f) main_ncimui_pane_t1_ParamLimits

0xd848,	// (0x0002485f) main_ncimui_pane_t1

0xd862,	// (0x00024879) main_ncimui_pane_t2_ParamLimits

0xd862,	// (0x00024879) main_ncimui_pane_t2

0x0002,

0xfc04,	// (0x00026c1b) main_ncimui_pane_t_ParamLimits

0xfc04,	// (0x00026c1b) main_ncimui_pane_t

0x4ea4,	// (0x0001bebb) main_radioblah_anim_pane_ParamLimits

0x4ea4,	// (0x0001bebb) main_radioblah_anim_pane

0x4eb5,	// (0x0001becc) main_radioblah_info_pane_ParamLimits

0x4eb5,	// (0x0001becc) main_radioblah_info_pane

0x4ec9,	// (0x0001bee0) main_radioblah_pane_t1_ParamLimits

0x4ec9,	// (0x0001bee0) main_radioblah_pane_t1

0x4ee5,	// (0x0001befc) main_radioblah_pane_t2_ParamLimits

0x4ee5,	// (0x0001befc) main_radioblah_pane_t2

0x0003,

0xfc9f,	// (0x00026cb6) main_radioblah_pane_t_ParamLimits

0xfc9f,	// (0x00026cb6) main_radioblah_pane_t

0xdc70,	// (0x00024c87) main_radioblah_rocker_ctrl_pane_ParamLimits

0xdc70,	// (0x00024c87) main_radioblah_rocker_ctrl_pane

0x4f2d,	// (0x0001bf44) main_radioblah_info_pane_t1_ParamLimits

0x4f2d,	// (0x0001bf44) main_radioblah_info_pane_t1

0xdcb5,	// (0x00024ccc) main_radioblah_info_pane_t2_ParamLimits

0xdcb5,	// (0x00024ccc) main_radioblah_info_pane_t2

0x0003,

0xfca8,	// (0x00026cbf) main_radioblah_info_pane_t_ParamLimits

0xfca8,	// (0x00026cbf) main_radioblah_info_pane_t

0x2f55,	// (0x00019f6c) main_radioblah_rocker_ctrl_pane_g1

0xdd65,	// (0x00024d7c) main_radioblah_rocker_ctrl_pane_g2

0xdd6d,	// (0x00024d84) main_radioblah_rocker_ctrl_pane_g3

0xdd75,	// (0x00024d8c) main_radioblah_rocker_ctrl_pane_g4

0xdd7d,	// (0x00024d94) main_radioblah_rocker_ctrl_pane_g5

0xdd85,	// (0x00024d9c) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcb1,	// (0x00026cc8) main_radioblah_rocker_ctrl_pane_g

0xd7fa,	// (0x00024811) main_cset_text2_pane_t1_copy1_ParamLimits

0x799e,	// (0x0001e9b5) cam4_image_uncrop_qvga_pane

0x7acf,	// (0x0001eae6) vid4_image_uncrop_qcif_pane

0x80b7,	// (0x0001f0ce) cam6_image_uncrop_qvga_pane_ParamLimits

0x80b7,	// (0x0001f0ce) cam6_image_uncrop_qvga_pane

0x465b,	// (0x0001b672) vid6_image_uncrop_qcif_pane_ParamLimits

0x465b,	// (0x0001b672) vid6_image_uncrop_qcif_pane

0x001a,	// (0x00017031) bg_popup_preview_window_pane_cp03

0x49d3,	// (0x0001b9ea) list_cset_text2_pane

0x49db,	// (0x0001b9f2) main_cset6_text2_pane_g1

0x49e3,	// (0x0001b9fa) main_cset6_text2_pane_t1

0xdd8d,	// (0x00024da4) list_cset_text2_pane_t1_ParamLimits

0xdd8d,	// (0x00024da4) list_cset_text2_pane_t1

0x008a,	// (0x000170a1) main_radioblah_pane_ParamLimits

0xdb05,	// (0x00024b1c) main_mobtv_info_pane_t3_ParamLimits

0xdb05,	// (0x00024b1c) main_mobtv_info_pane_t3

0xdc5e,	// (0x00024c75) main_radioblah_pane_g1

0xdc89,	// (0x00024ca0) main_radioblah_info_pane_g1

0xdd0a,	// (0x00024d21) main_radioblah_info_pane_t3_ParamLimits

0xdd0a,	// (0x00024d21) main_radioblah_info_pane_t3

0x9bec,	// (0x00020c03) highlight_cell_cale_month_pane_ParamLimits

0x9bec,	// (0x00020c03) highlight_cell_cale_month_pane

0x001a,	// (0x00017031) main_phob_fisheye_pane

0x32dc,	// (0x0001a2f3) scroll_pane_cp0031_ParamLimits

0x32dc,	// (0x0001a2f3) scroll_pane_cp0031

0x4769,	// (0x0001b780) wait_bar_pane_cp08_ParamLimits

0xd5e6,	// (0x000245fd) cset_list_set_pane_copy1_ParamLimits

0x4f67,	// (0x0001bf7e) highlight_cell_cale_month_pane_g1

0xddb8,	// (0x00024dcf) highlight_cell_cale_month_pane_t1

0x4300,	// (0x0001b317) list_gen_pane_cp01

0x3e44,	// (0x0001ae5b) scroll_pane_01

0x4f6f,	// (0x0001bf86) list_single_double_fisheye_pane

0x4f78,	// (0x0001bf8f) list_double_fisheye_pane_g1_ParamLimits

0x4f78,	// (0x0001bf8f) list_double_fisheye_pane_g1

0x4f84,	// (0x0001bf9b) list_double_fisheye_pane_g2_ParamLimits

0x4f84,	// (0x0001bf9b) list_double_fisheye_pane_g2

0x4f98,	// (0x0001bfaf) list_double_fisheye_pane_g3_ParamLimits

0x4f98,	// (0x0001bfaf) list_double_fisheye_pane_g3

0x0004,

0xfcbe,	// (0x00026cd5) list_double_fisheye_pane_g_ParamLimits

0xfcbe,	// (0x00026cd5) list_double_fisheye_pane_g

0x4fc1,	// (0x0001bfd8) list_double_fisheye_pane_t1_ParamLimits

0x4fc1,	// (0x0001bfd8) list_double_fisheye_pane_t1

0x4fdc,	// (0x0001bff3) list_double_fisheye_pane_t2_ParamLimits

0x4fdc,	// (0x0001bff3) list_double_fisheye_pane_t2

0x0001,

0xfcc9,	// (0x00026ce0) list_double_fisheye_pane_t_ParamLimits

0xfcc9,	// (0x00026ce0) list_double_fisheye_pane_t

0x001a,	// (0x00017031) main_call5_pane

0xdbcc,	// (0x00024be3) sc_swipe_pane_ParamLimits

0xdbcc,	// (0x00024be3) sc_swipe_pane

0xddd2,	// (0x00024de9) call5_image_pane_ParamLimits

0xddd2,	// (0x00024de9) call5_image_pane

0xdde2,	// (0x00024df9) call5_swipe_1_pane_ParamLimits

0xdde2,	// (0x00024df9) call5_swipe_1_pane

0xddee,	// (0x00024e05) call5_swipe_2_pane_ParamLimits

0xddee,	// (0x00024e05) call5_swipe_2_pane

0xde08,	// (0x00024e1f) popup_call5_audio_first_window_ParamLimits

0xde08,	// (0x00024e1f) popup_call5_audio_first_window

0x31bc,	// (0x0001a1d3) call5_swipe_1_pane_g1_ParamLimits

0x31bc,	// (0x0001a1d3) call5_swipe_1_pane_g1

0x4ffe,	// (0x0001c015) call5_swipe_1_pane_g2_ParamLimits

0x4ffe,	// (0x0001c015) call5_swipe_1_pane_g2

0x0001,

0xfcce,	// (0x00026ce5) call5_swipe_1_pane_g_ParamLimits

0xfcce,	// (0x00026ce5) call5_swipe_1_pane_g

0x500a,	// (0x0001c021) call5_swipe_1_pane_t1_ParamLimits

0x500a,	// (0x0001c021) call5_swipe_1_pane_t1

0x31bc,	// (0x0001a1d3) call5_swipe_2_pane_g1_ParamLimits

0x31bc,	// (0x0001a1d3) call5_swipe_2_pane_g1

0x501f,	// (0x0001c036) call5_swipe_2_pane_g2_ParamLimits

0x501f,	// (0x0001c036) call5_swipe_2_pane_g2

0x0001,

0xfcd3,	// (0x00026cea) call5_swipe_2_pane_g_ParamLimits

0xfcd3,	// (0x00026cea) call5_swipe_2_pane_g

0x502b,	// (0x0001c042) call5_swipe_2_pane_t1_ParamLimits

0x502b,	// (0x0001c042) call5_swipe_2_pane_t1

0x5040,	// (0x0001c057) sc_swipe_pane_g1_ParamLimits

0x5040,	// (0x0001c057) sc_swipe_pane_g1

0x504d,	// (0x0001c064) sc_swipe_pane_g2_ParamLimits

0x504d,	// (0x0001c064) sc_swipe_pane_g2

0x0001,

0xfcd8,	// (0x00026cef) sc_swipe_pane_g_ParamLimits

0xfcd8,	// (0x00026cef) sc_swipe_pane_g

0x5059,	// (0x0001c070) sc_swipe_pane_t1_ParamLimits

0x5059,	// (0x0001c070) sc_swipe_pane_t1

0x001a,	// (0x00017031) main_cmail_launcher_pane

0xde16,	// (0x00024e2d) aid_size_cell_cmail_l_ParamLimits

0xde16,	// (0x00024e2d) aid_size_cell_cmail_l

0xde26,	// (0x00024e3d) grid_cmail_l_pane_ParamLimits

0xde26,	// (0x00024e3d) grid_cmail_l_pane

0xde36,	// (0x00024e4d) cell_cmail_l_pane_ParamLimits

0xde36,	// (0x00024e4d) cell_cmail_l_pane

0xde4a,	// (0x00024e61) cell_cmail_l_pane_g1_ParamLimits

0xde4a,	// (0x00024e61) cell_cmail_l_pane_g1

0xde56,	// (0x00024e6d) cell_cmail_l_pane_t1_ParamLimits

0xde56,	// (0x00024e6d) cell_cmail_l_pane_t1

0x506e,	// (0x0001c085) cell_cmail_l_pane_t2_ParamLimits

0x506e,	// (0x0001c085) cell_cmail_l_pane_t2

0x0001,

0xfcdd,	// (0x00026cf4) cell_cmail_l_pane_t_ParamLimits

0xfcdd,	// (0x00026cf4) cell_cmail_l_pane_t

0x008a,	// (0x000170a1) grid_highlight_pane_cp018_ParamLimits

0x008a,	// (0x000170a1) grid_highlight_pane_cp018

0x81fc,	// (0x0001f213) main2_pane_ParamLimits

0x81fc,	// (0x0001f213) main2_pane

0x0916,	// (0x0001792d) popup_sp_fs_action_menu_bg_pane_g1

0x091e,	// (0x00017935) popup_sp_fs_action_menu_bg_pane_g2

0x0926,	// (0x0001793d) popup_sp_fs_action_menu_bg_pane_g3

0x092e,	// (0x00017945) popup_sp_fs_action_menu_bg_pane_g4

0x0936,	// (0x0001794d) popup_sp_fs_action_menu_bg_pane_g5

0x093e,	// (0x00017955) popup_sp_fs_action_menu_bg_pane_g6

0x0946,	// (0x0001795d) popup_sp_fs_action_menu_bg_pane_g7

0x094e,	// (0x00017965) popup_sp_fs_action_menu_bg_pane_g8

0x0956,	// (0x0001796d) popup_sp_fs_action_menu_bg_pane_g9

0x095e,	// (0x00017975) popup_sp_fs_action_menu_bg_pane_g10

0x095e,	// (0x00017975) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1a7,	// (0x000261be) popup_sp_fs_action_menu_bg_pane_g

0x0b48,	// (0x00017b5f) list_medium_line_x2_t3_g3_g1_ParamLimits

0x0b48,	// (0x00017b5f) list_medium_line_x2_t3_g3_g1

0x0b54,	// (0x00017b6b) list_medium_line_x2_t3_g3_g2_ParamLimits

0x0b54,	// (0x00017b6b) list_medium_line_x2_t3_g3_g2

0x0b60,	// (0x00017b77) list_medium_line_x2_t3_g3_g3_ParamLimits

0x0b60,	// (0x00017b77) list_medium_line_x2_t3_g3_g3

0x0002,

0xf257,	// (0x0002626e) list_medium_line_x2_t3_g3_g_ParamLimits

0xf257,	// (0x0002626e) list_medium_line_x2_t3_g3_g

0x0b6c,	// (0x00017b83) list_medium_line_x2_t3_g3_t1_ParamLimits

0x0b6c,	// (0x00017b83) list_medium_line_x2_t3_g3_t1

0x8d09,	// (0x0001fd20) list_medium_line_x2_t3_g3_t2_ParamLimits

0x8d09,	// (0x0001fd20) list_medium_line_x2_t3_g3_t2

0x0b81,	// (0x00017b98) list_medium_line_x2_t3_g3_t3_ParamLimits

0x0b81,	// (0x00017b98) list_medium_line_x2_t3_g3_t3

0x0002,

0xf25e,	// (0x00026275) list_medium_line_x2_t3_g3_t_ParamLimits

0xf25e,	// (0x00026275) list_medium_line_x2_t3_g3_t

0x0b48,	// (0x00017b5f) list_medium_line_x2_t3_g2_g1_ParamLimits

0x0b48,	// (0x00017b5f) list_medium_line_x2_t3_g2_g1

0x0b60,	// (0x00017b77) list_medium_line_x2_t3_g2_g2_ParamLimits

0x0b60,	// (0x00017b77) list_medium_line_x2_t3_g2_g2

0x0001,

0xf265,	// (0x0002627c) list_medium_line_x2_t3_g2_g_ParamLimits

0xf265,	// (0x0002627c) list_medium_line_x2_t3_g2_g

0x0b96,	// (0x00017bad) list_medium_line_x2_t3_g2_t1_ParamLimits

0x0b96,	// (0x00017bad) list_medium_line_x2_t3_g2_t1

0x0bac,	// (0x00017bc3) list_medium_line_x2_t3_g2_t2_ParamLimits

0x0bac,	// (0x00017bc3) list_medium_line_x2_t3_g2_t2

0x0bbe,	// (0x00017bd5) list_medium_line_x2_t3_g2_t3_ParamLimits

0x0bbe,	// (0x00017bd5) list_medium_line_x2_t3_g2_t3

0x0002,

0xf26a,	// (0x00026281) list_medium_line_x2_t3_g2_t_ParamLimits

0xf26a,	// (0x00026281) list_medium_line_x2_t3_g2_t

0x0b48,	// (0x00017b5f) list_medium_line_x2_t4_g4_g1_ParamLimits

0x0b48,	// (0x00017b5f) list_medium_line_x2_t4_g4_g1

0x0bdb,	// (0x00017bf2) list_medium_line_x2_t4_g4_g2_ParamLimits

0x0bdb,	// (0x00017bf2) list_medium_line_x2_t4_g4_g2

0x0b54,	// (0x00017b6b) list_medium_line_x2_t4_g4_g3_ParamLimits

0x0b54,	// (0x00017b6b) list_medium_line_x2_t4_g4_g3

0x0be7,	// (0x00017bfe) list_medium_line_x2_t4_g4_g4_ParamLimits

0x0be7,	// (0x00017bfe) list_medium_line_x2_t4_g4_g4

0x0003,

0xf271,	// (0x00026288) list_medium_line_x2_t4_g4_g_ParamLimits

0xf271,	// (0x00026288) list_medium_line_x2_t4_g4_g

0x8d1b,	// (0x0001fd32) list_medium_line_x2_t4_g4_t1_ParamLimits

0x8d1b,	// (0x0001fd32) list_medium_line_x2_t4_g4_t1

0x8d35,	// (0x0001fd4c) list_medium_line_x2_t4_g4_t2_ParamLimits

0x8d35,	// (0x0001fd4c) list_medium_line_x2_t4_g4_t2

0x8d4a,	// (0x0001fd61) list_medium_line_x2_t4_g4_t3_ParamLimits

0x8d4a,	// (0x0001fd61) list_medium_line_x2_t4_g4_t3

0x0bf3,	// (0x00017c0a) list_medium_line_x2_t4_g4_t4_ParamLimits

0x0bf3,	// (0x00017c0a) list_medium_line_x2_t4_g4_t4

0x0003,

0xf27a,	// (0x00026291) list_medium_line_x2_t4_g4_t_ParamLimits

0xf27a,	// (0x00026291) list_medium_line_x2_t4_g4_t

0x0b48,	// (0x00017b5f) list_medium_line_x2_t2_g4_g1_ParamLimits

0x0b48,	// (0x00017b5f) list_medium_line_x2_t2_g4_g1

0x0bdb,	// (0x00017bf2) list_medium_line_x2_t2_g4_g2_ParamLimits

0x0bdb,	// (0x00017bf2) list_medium_line_x2_t2_g4_g2

0x0b54,	// (0x00017b6b) list_medium_line_x2_t2_g4_g3_ParamLimits

0x0b54,	// (0x00017b6b) list_medium_line_x2_t2_g4_g3

0x0b60,	// (0x00017b77) list_medium_line_x2_t2_g4_g4_ParamLimits

0x0b60,	// (0x00017b77) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2e1,	// (0x000262f8) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2e1,	// (0x000262f8) list_medium_line_x2_t2_g4_g

0x0edd,	// (0x00017ef4) list_medium_line_x2_t2_g4_t1_ParamLimits

0x0edd,	// (0x00017ef4) list_medium_line_x2_t2_g4_t1

0x0b81,	// (0x00017b98) list_medium_line_x2_t2_g4_t2_ParamLimits

0x0b81,	// (0x00017b98) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2ea,	// (0x00026301) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2ea,	// (0x00026301) list_medium_line_x2_t2_g4_t

0x0b48,	// (0x00017b5f) list_medium_line_x2_t2_g3_g1_ParamLimits

0x0b48,	// (0x00017b5f) list_medium_line_x2_t2_g3_g1

0x0b54,	// (0x00017b6b) list_medium_line_x2_t2_g3_g2_ParamLimits

0x0b54,	// (0x00017b6b) list_medium_line_x2_t2_g3_g2

0x0b60,	// (0x00017b77) list_medium_line_x2_t2_g3_g3_ParamLimits

0x0b60,	// (0x00017b77) list_medium_line_x2_t2_g3_g3

0x0002,

0xf257,	// (0x0002626e) list_medium_line_x2_t2_g3_g_ParamLimits

0xf257,	// (0x0002626e) list_medium_line_x2_t2_g3_g

0x0ef2,	// (0x00017f09) list_medium_line_x2_t2_g3_t1_ParamLimits

0x0ef2,	// (0x00017f09) list_medium_line_x2_t2_g3_t1

0x0b81,	// (0x00017b98) list_medium_line_x2_t2_g3_t2_ParamLimits

0x0b81,	// (0x00017b98) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2ef,	// (0x00026306) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2ef,	// (0x00026306) list_medium_line_x2_t2_g3_t

0x9e1e,	// (0x00020e35) main_sp_fs_list_pane_ParamLimits

0x9e1e,	// (0x00020e35) main_sp_fs_list_pane

0x9e2a,	// (0x00020e41) sp_fs_scroll_pane_ParamLimits

0x9e2a,	// (0x00020e41) sp_fs_scroll_pane

0x9e36,	// (0x00020e4d) list_medium_line_x2_t3_t1

0x9e46,	// (0x00020e5d) list_medium_line_x2_t3_t2

0x10d6,	// (0x000180ed) list_medium_line_x2_t3_t3

0x0002,

0xf33a,	// (0x00026351) list_medium_line_x2_t3_t

0x9e54,	// (0x00020e6b) list_medium_line_x3_t4_t1

0x9e64,	// (0x00020e7b) list_medium_line_x3_t4_t2

0x10e4,	// (0x000180fb) list_medium_line_x3_t4_t3

0x10d6,	// (0x000180ed) list_medium_line_x3_t4_t4

0x0003,

0xf341,	// (0x00026358) list_medium_line_x3_t4_t

0x9e72,	// (0x00020e89) list_medium_line_x4_t5_t1

0x9e82,	// (0x00020e99) list_medium_line_x4_t5_t2

0x10e4,	// (0x000180fb) list_medium_line_x4_t5_t3

0x10f2,	// (0x00018109) list_medium_line_x4_t5_t4

0x10d6,	// (0x000180ed) list_medium_line_x4_t5_t5

0x0004,

0xf34a,	// (0x00026361) list_medium_line_x4_t5_t

0x0b48,	// (0x00017b5f) list_medium_line_t4_g4_g1_ParamLimits

0x0b48,	// (0x00017b5f) list_medium_line_t4_g4_g1

0x0be7,	// (0x00017bfe) list_medium_line_t4_g4_g2_ParamLimits

0x0be7,	// (0x00017bfe) list_medium_line_t4_g4_g2

0x1100,	// (0x00018117) list_medium_line_t4_g4_g3_ParamLimits

0x1100,	// (0x00018117) list_medium_line_t4_g4_g3

0x0b60,	// (0x00017b77) list_medium_line_t4_g4_g4_ParamLimits

0x0b60,	// (0x00017b77) list_medium_line_t4_g4_g4

0x0003,

0xf355,	// (0x0002636c) list_medium_line_t4_g4_g_ParamLimits

0xf355,	// (0x0002636c) list_medium_line_t4_g4_g

0x110c,	// (0x00018123) list_medium_line_t4_g4_t1_ParamLimits

0x110c,	// (0x00018123) list_medium_line_t4_g4_t1

0x1121,	// (0x00018138) list_medium_line_t4_g4_t2_ParamLimits

0x1121,	// (0x00018138) list_medium_line_t4_g4_t2

0x1136,	// (0x0001814d) list_medium_line_t4_g4_t3_ParamLimits

0x1136,	// (0x0001814d) list_medium_line_t4_g4_t3

0x0b81,	// (0x00017b98) list_medium_line_t4_g4_t4_ParamLimits

0x0b81,	// (0x00017b98) list_medium_line_t4_g4_t4

0x0003,

0xf35e,	// (0x00026375) list_medium_line_t4_g4_t_ParamLimits

0xf35e,	// (0x00026375) list_medium_line_t4_g4_t

0x9f08,	// (0x00020f1f) chi_dic_find_pane_g1

0xaec0,	// (0x00021ed7) main_tport_pane

0x3f89,	// (0x0001afa0) list_medium_line_plain_t1

0x3fdb,	// (0x0001aff2) list_medium_line_t2_g2_g1_ParamLimits

0x3fdb,	// (0x0001aff2) list_medium_line_t2_g2_g1

0x3fe7,	// (0x0001affe) list_medium_line_t2_g2_g2_ParamLimits

0x3fe7,	// (0x0001affe) list_medium_line_t2_g2_g2

0x0001,

0xfa1a,	// (0x00026a31) list_medium_line_t2_g2_g_ParamLimits

0xfa1a,	// (0x00026a31) list_medium_line_t2_g2_g

0xcbf0,	// (0x00023c07) list_medium_line_t2_g2_t1_ParamLimits

0xcbf0,	// (0x00023c07) list_medium_line_t2_g2_t1

0xcc0a,	// (0x00023c21) list_medium_line_t2_g2_t2_ParamLimits

0xcc0a,	// (0x00023c21) list_medium_line_t2_g2_t2

0x0001,

0xfa1f,	// (0x00026a36) list_medium_line_t2_g2_t_ParamLimits

0xfa1f,	// (0x00026a36) list_medium_line_t2_g2_t

0x438d,	// (0x0001b3a4) aid_sp_fs_list_icon_a_sm

0x4395,	// (0x0001b3ac) aid_sp_fs_list_icon_d

0x439d,	// (0x0001b3b4) aid_sp_fs_text_primary

0x43a6,	// (0x0001b3bd) aid_sp_fs_text_secondary

0x43af,	// (0x0001b3c6) list_medium_line

0x43af,	// (0x0001b3c6) list_medium_line_g2

0x43af,	// (0x0001b3c6) list_medium_line_g3

0x43af,	// (0x0001b3c6) list_medium_line_plain

0x43af,	// (0x0001b3c6) list_medium_line_plain_t2

0x43af,	// (0x0001b3c6) list_medium_line_plain_t3

0x43af,	// (0x0001b3c6) list_medium_line_right_icon

0x43af,	// (0x0001b3c6) list_medium_line_right_iconx2

0x43af,	// (0x0001b3c6) list_medium_line_t2

0x43af,	// (0x0001b3c6) list_medium_line_t2_g2

0x43af,	// (0x0001b3c6) list_medium_line_t2_g3

0x43af,	// (0x0001b3c6) list_medium_line_t2_right_icon

0x43af,	// (0x0001b3c6) list_medium_line_t2_right_iconx2

0x43af,	// (0x0001b3c6) list_medium_line_t3

0x43af,	// (0x0001b3c6) list_medium_line_t3_g2

0x43af,	// (0x0001b3c6) list_medium_line_t3_g3

0x43af,	// (0x0001b3c6) list_medium_line_t3_right_iconx2

0x43b8,	// (0x0001b3cf) list_medium_line_t4_g4

0x43c1,	// (0x0001b3d8) list_medium_line_x2

0x43c1,	// (0x0001b3d8) list_medium_line_x2_t2_g2

0x43c1,	// (0x0001b3d8) list_medium_line_x2_t2_g3

0x43c1,	// (0x0001b3d8) list_medium_line_x2_t2_g4

0x43c1,	// (0x0001b3d8) list_medium_line_x2_t3

0x43c1,	// (0x0001b3d8) list_medium_line_x2_t3_g2

0x43c1,	// (0x0001b3d8) list_medium_line_x2_t3_g3

0x43c1,	// (0x0001b3d8) list_medium_line_x2_t3_g4

0x43c1,	// (0x0001b3d8) list_medium_line_x2_t4_g2

0x43c1,	// (0x0001b3d8) list_medium_line_x2_t4_g4

0x43ca,	// (0x0001b3e1) list_medium_line_x3

0x43ca,	// (0x0001b3e1) list_medium_line_x3_t4

0x43ca,	// (0x0001b3e1) list_medium_line_x3_t4_g4

0x43b8,	// (0x0001b3cf) list_medium_line_x4_t4

0x43b8,	// (0x0001b3cf) list_medium_line_x4_t4_g7

0x43b8,	// (0x0001b3cf) list_medium_line_x4_t5

0x43d3,	// (0x0001b3ea) list_single_fs_dyc_pane_ParamLimits

0x43d3,	// (0x0001b3ea) list_single_fs_dyc_pane

0x0b48,	// (0x00017b5f) list_medium_line_x4_t4_g7_g1_ParamLimits

0x0b48,	// (0x00017b5f) list_medium_line_x4_t4_g7_g1

0x4902,	// (0x0001b919) list_medium_line_x4_t4_g7_g2_ParamLimits

0x4902,	// (0x0001b919) list_medium_line_x4_t4_g7_g2

0x490e,	// (0x0001b925) list_medium_line_x4_t4_g7_g3_ParamLimits

0x490e,	// (0x0001b925) list_medium_line_x4_t4_g7_g3

0x491d,	// (0x0001b934) list_medium_line_x4_t4_g7_g4_ParamLimits

0x491d,	// (0x0001b934) list_medium_line_x4_t4_g7_g4

0x4929,	// (0x0001b940) list_medium_line_x4_t4_g7_g5_ParamLimits

0x4929,	// (0x0001b940) list_medium_line_x4_t4_g7_g5

0x4938,	// (0x0001b94f) list_medium_line_x4_t4_g7_g6_ParamLimits

0x4938,	// (0x0001b94f) list_medium_line_x4_t4_g7_g6

0x4947,	// (0x0001b95e) list_medium_line_x4_t4_g7_g7_ParamLimits

0x4947,	// (0x0001b95e) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbea,	// (0x00026c01) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbea,	// (0x00026c01) list_medium_line_x4_t4_g7_g

0x4953,	// (0x0001b96a) list_medium_line_x4_t4_g7_t1_ParamLimits

0x4953,	// (0x0001b96a) list_medium_line_x4_t4_g7_t1

0x4968,	// (0x0001b97f) list_medium_line_x4_t4_g7_t2_ParamLimits

0x4968,	// (0x0001b97f) list_medium_line_x4_t4_g7_t2

0x497d,	// (0x0001b994) list_medium_line_x4_t4_g7_t3_ParamLimits

0x497d,	// (0x0001b994) list_medium_line_x4_t4_g7_t3

0x4992,	// (0x0001b9a9) list_medium_line_x4_t4_g7_t4_ParamLimits

0x4992,	// (0x0001b9a9) list_medium_line_x4_t4_g7_t4

0x49a4,	// (0x0001b9bb) list_medium_line_x4_t4_g7_t5_ParamLimits

0x49a4,	// (0x0001b9bb) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbf9,	// (0x00026c10) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbf9,	// (0x00026c10) list_medium_line_x4_t4_g7_t

0x49b6,	// (0x0001b9cd) list_single_dyc_row_pane_ParamLimits

0x49b6,	// (0x0001b9cd) list_single_dyc_row_pane

0xddc6,	// (0x00024ddd) call5_gesture_pane_ParamLimits

0xddc6,	// (0x00024ddd) call5_gesture_pane

0xddfa,	// (0x00024e11) call5_windows_pane_ParamLimits

0xddfa,	// (0x00024e11) call5_windows_pane

0xde6c,	// (0x00024e83) call5_swipe_1_pane_cp_ParamLimits

0xde6c,	// (0x00024e83) call5_swipe_1_pane_cp

0xde78,	// (0x00024e8f) call5_swipe_2_pane_cp_ParamLimits

0xde78,	// (0x00024e8f) call5_swipe_2_pane_cp

0x15ae,	// (0x000185c5) call5_image_pane_cp

0xde84,	// (0x00024e9b) popup_call5_audio_first_window_cp_ParamLimits

0xde84,	// (0x00024e9b) popup_call5_audio_first_window_cp

0x5040,	// (0x0001c057) call5_swipe_1_pane_g1_cp_ParamLimits

0x5040,	// (0x0001c057) call5_swipe_1_pane_g1_cp

0x5080,	// (0x0001c097) call5_swipe_1_pane_g2_cp

0x5059,	// (0x0001c070) call5_swipe_1_pane_t1_cp_ParamLimits

0x5059,	// (0x0001c070) call5_swipe_1_pane_t1_cp

0x5040,	// (0x0001c057) call5_swipe_2_pane_g1_cp_ParamLimits

0x5040,	// (0x0001c057) call5_swipe_2_pane_g1_cp

0x5088,	// (0x0001c09f) call5_swipe_2_pane_g2_cp

0x5090,	// (0x0001c0a7) call5_swipe_2_pane_t1_cp_ParamLimits

0x5090,	// (0x0001c0a7) call5_swipe_2_pane_t1_cp

0x008a,	// (0x000170a1) main_sp_fs_email_pane

0x50a5,	// (0x0001c0bc) main_sp_fs_listscroll_pane_te

0x50ae,	// (0x0001c0c5) popup_sp_fs_action_menu_pane_ParamLimits

0x50ae,	// (0x0001c0c5) popup_sp_fs_action_menu_pane

0x2f55,	// (0x00019f6c) bg_sp_fs_ctrlbar_pane_g1

0x50ee,	// (0x0001c105) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x50f7,	// (0x0001c10e) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x5100,	// (0x0001c117) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x2f55,	// (0x00019f6c) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfce2,	// (0x00026cf9) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x2d38,	// (0x00019d4f) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x2d38,	// (0x00019d4f) bg_sp_fs_ctrlbar_ddmenu_pane

0x5109,	// (0x0001c120) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x5109,	// (0x0001c120) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x5115,	// (0x0001c12c) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x5115,	// (0x0001c12c) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfceb,	// (0x00026d02) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfceb,	// (0x00026d02) main_sp_fs_ctrlbar_ddmenu_pane_g

0x5121,	// (0x0001c138) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x5121,	// (0x0001c138) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x513b,	// (0x0001c152) list_medium_line_t2_right_icon_g1

0xde90,	// (0x00024ea7) list_medium_line_t2_right_icon_t1

0xdea0,	// (0x00024eb7) list_medium_line_t2_right_icon_t2

0x0001,

0xfcf0,	// (0x00026d07) list_medium_line_t2_right_icon_t

0x2a4d,	// (0x00019a64) bg_sp_fs_ctrlbar_pane_ParamLimits

0x2a4d,	// (0x00019a64) bg_sp_fs_ctrlbar_pane

0xdf05,	// (0x00024f1c) main_sp_fs_ctrlbar_button_pane_cp01

0xdf0d,	// (0x00024f24) main_sp_fs_ctrlbar_ddmenu_pane

0x0b48,	// (0x00017b5f) main_sp_fs_ctrlbar_pane_g1

0x517b,	// (0x0001c192) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcf5,	// (0x00026d0c) main_sp_fs_ctrlbar_pane_g

0x5187,	// (0x0001c19e) main_sp_fs_ctrlbar_pane_t1

0xdf17,	// (0x00024f2e) main_sp_fs_ctrlbar_pane

0xdf31,	// (0x00024f48) main_sp_fs_listscroll_pane_te_cp01

0xdf42,	// (0x00024f59) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0xdf42,	// (0x00024f59) popup_sp_fs_action_menu_pane_cp01

0x008a,	// (0x000170a1) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x008a,	// (0x000170a1) bg_sp_fs_highlight_list_pane_cp01

0x51ac,	// (0x0001c1c3) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x51ac,	// (0x0001c1c3) sp_fs_action_menu_list_gene_pane_g1

0x51bb,	// (0x0001c1d2) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x51bb,	// (0x0001c1d2) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcff,	// (0x00026d16) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcff,	// (0x00026d16) sp_fs_action_menu_list_gene_pane_g

0x51c8,	// (0x0001c1df) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x51c8,	// (0x0001c1df) sp_fs_action_menu_list_gene_pane_t1

0x51e0,	// (0x0001c1f7) sp_fs_action_menu_list_gene_pane_ParamLimits

0x51e0,	// (0x0001c1f7) sp_fs_action_menu_list_gene_pane

0x51fd,	// (0x0001c214) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x51fd,	// (0x0001c214) popup_sp_fs_action_menu_bg_pane

0x520b,	// (0x0001c222) sp_fs_action_menu_list_pane_ParamLimits

0x520b,	// (0x0001c222) sp_fs_action_menu_list_pane

0x5229,	// (0x0001c240) sp_fs_scroll_pane_cp01_ParamLimits

0x5229,	// (0x0001c240) sp_fs_scroll_pane_cp01

0xdf5a,	// (0x00024f71) list_medium_line_plain_t2_t1

0xdf6a,	// (0x00024f81) list_medium_line_plain_t2_t2

0x0001,

0xfd04,	// (0x00026d1b) list_medium_line_plain_t2_t

0xdf78,	// (0x00024f8f) list_medium_line_plain_t3_t1

0xdf88,	// (0x00024f9f) list_medium_line_plain_t3_t2

0xdf96,	// (0x00024fad) list_medium_line_plain_t3_t3

0x0002,

0xfd09,	// (0x00026d20) list_medium_line_plain_t3_t

0x0b48,	// (0x00017b5f) list_medium_line_x2_t2_g2_g1_ParamLimits

0x0b48,	// (0x00017b5f) list_medium_line_x2_t2_g2_g1

0x0b60,	// (0x00017b77) list_medium_line_x2_t2_g2_g2_ParamLimits

0x0b60,	// (0x00017b77) list_medium_line_x2_t2_g2_g2

0x0001,

0xf265,	// (0x0002627c) list_medium_line_x2_t2_g2_g_ParamLimits

0xf265,	// (0x0002627c) list_medium_line_x2_t2_g2_g

0x110c,	// (0x00018123) list_medium_line_x2_t2_g2_t1_ParamLimits

0x110c,	// (0x00018123) list_medium_line_x2_t2_g2_t1

0x0b81,	// (0x00017b98) list_medium_line_x2_t2_g2_t2_ParamLimits

0x0b81,	// (0x00017b98) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd10,	// (0x00026d27) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd10,	// (0x00026d27) list_medium_line_x2_t2_g2_t

0x0b48,	// (0x00017b5f) list_medium_line_x2_t4_g2_g1_ParamLimits

0x0b48,	// (0x00017b5f) list_medium_line_x2_t4_g2_g1

0x0b60,	// (0x00017b77) list_medium_line_x2_t4_g2_g2_ParamLimits

0x0b60,	// (0x00017b77) list_medium_line_x2_t4_g2_g2

0x0001,

0xf265,	// (0x0002627c) list_medium_line_x2_t4_g2_g_ParamLimits

0xf265,	// (0x0002627c) list_medium_line_x2_t4_g2_g

0xdfa4,	// (0x00024fbb) list_medium_line_x2_t4_g2_t1_ParamLimits

0xdfa4,	// (0x00024fbb) list_medium_line_x2_t4_g2_t1

0xdfbe,	// (0x00024fd5) list_medium_line_x2_t4_g2_t2_ParamLimits

0xdfbe,	// (0x00024fd5) list_medium_line_x2_t4_g2_t2

0xdfd3,	// (0x00024fea) list_medium_line_x2_t4_g2_t3_ParamLimits

0xdfd3,	// (0x00024fea) list_medium_line_x2_t4_g2_t3

0x0b81,	// (0x00017b98) list_medium_line_x2_t4_g2_t4_ParamLimits

0x0b81,	// (0x00017b98) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd15,	// (0x00026d2c) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd15,	// (0x00026d2c) list_medium_line_x2_t4_g2_t

0x524f,	// (0x0001c266) list_medium_line_t3_right_iconx2_g1

0x513b,	// (0x0001c152) list_medium_line_t3_right_iconx2_g2

0xdfe8,	// (0x00024fff) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd1e,	// (0x00026d35) list_medium_line_t3_right_iconx2_g

0xdff0,	// (0x00025007) list_medium_line_t3_right_iconx2_t1

0xe000,	// (0x00025017) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd25,	// (0x00026d3c) list_medium_line_t3_right_iconx2_t

0x0b48,	// (0x00017b5f) list_medium_line_x3_t4_g4_g1_ParamLimits

0x0b48,	// (0x00017b5f) list_medium_line_x3_t4_g4_g1

0x0b54,	// (0x00017b6b) list_medium_line_x3_t4_g4_g2_ParamLimits

0x0b54,	// (0x00017b6b) list_medium_line_x3_t4_g4_g2

0x0be7,	// (0x00017bfe) list_medium_line_x3_t4_g4_g3_ParamLimits

0x0be7,	// (0x00017bfe) list_medium_line_x3_t4_g4_g3

0x5257,	// (0x0001c26e) list_medium_line_x3_t4_g4_g4_ParamLimits

0x5257,	// (0x0001c26e) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd2a,	// (0x00026d41) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd2a,	// (0x00026d41) list_medium_line_x3_t4_g4_g

0xe00e,	// (0x00025025) list_medium_line_x3_t4_g4_t1_ParamLimits

0xe00e,	// (0x00025025) list_medium_line_x3_t4_g4_t1

0xe025,	// (0x0002503c) list_medium_line_x3_t4_g4_t2_ParamLimits

0xe025,	// (0x0002503c) list_medium_line_x3_t4_g4_t2

0x1121,	// (0x00018138) list_medium_line_x3_t4_g4_t3_ParamLimits

0x1121,	// (0x00018138) list_medium_line_x3_t4_g4_t3

0x5263,	// (0x0001c27a) list_medium_line_x3_t4_g4_t4_ParamLimits

0x5263,	// (0x0001c27a) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd33,	// (0x00026d4a) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd33,	// (0x00026d4a) list_medium_line_x3_t4_g4_t

0xe03a,	// (0x00025051) list_single_dyc_row_text_pane_t1_ParamLimits

0xe03a,	// (0x00025051) list_single_dyc_row_text_pane_t1

0xe071,	// (0x00025088) list_single_dyc_row_text_pane_t2_ParamLimits

0xe071,	// (0x00025088) list_single_dyc_row_text_pane_t2

0x5280,	// (0x0001c297) list_single_dyc_row_text_pane_t3_ParamLimits

0x5280,	// (0x0001c297) list_single_dyc_row_text_pane_t3

0x0002,

0xfd3c,	// (0x00026d53) list_single_dyc_row_text_pane_t_ParamLimits

0xfd3c,	// (0x00026d53) list_single_dyc_row_text_pane_t

0x5292,	// (0x0001c2a9) list_single_dyc_row_pane_g1_ParamLimits

0x5292,	// (0x0001c2a9) list_single_dyc_row_pane_g1

0x529e,	// (0x0001c2b5) list_single_dyc_row_pane_g2_ParamLimits

0x529e,	// (0x0001c2b5) list_single_dyc_row_pane_g2

0x52aa,	// (0x0001c2c1) list_single_dyc_row_pane_g3_ParamLimits

0x52aa,	// (0x0001c2c1) list_single_dyc_row_pane_g3

0x52b6,	// (0x0001c2cd) list_single_dyc_row_pane_g4_ParamLimits

0x52b6,	// (0x0001c2cd) list_single_dyc_row_pane_g4

0x0003,

0xfd43,	// (0x00026d5a) list_single_dyc_row_pane_g_ParamLimits

0xfd43,	// (0x00026d5a) list_single_dyc_row_pane_g

0x52c2,	// (0x0001c2d9) list_single_dyc_row_text_pane_ParamLimits

0x52c2,	// (0x0001c2d9) list_single_dyc_row_text_pane

0x001a,	// (0x00017031) bg_sp_fs_scroll_pane

0x52e1,	// (0x0001c2f8) thumb_sp_fs_scroll_pane

0x3fdb,	// (0x0001aff2) list_medium_line_g1_ParamLimits

0x3fdb,	// (0x0001aff2) list_medium_line_g1

0x52ea,	// (0x0001c301) list_medium_line_t1_ParamLimits

0x52ea,	// (0x0001c301) list_medium_line_t1

0x0b48,	// (0x00017b5f) list_medium_line_x2_g1_ParamLimits

0x0b48,	// (0x00017b5f) list_medium_line_x2_g1

0x0b54,	// (0x00017b6b) list_medium_line_x2_g2_ParamLimits

0x0b54,	// (0x00017b6b) list_medium_line_x2_g2

0x0001,

0xfd4c,	// (0x00026d63) list_medium_line_x2_g_ParamLimits

0xfd4c,	// (0x00026d63) list_medium_line_x2_g

0x52ff,	// (0x0001c316) list_medium_line_x2_t1_ParamLimits

0x52ff,	// (0x0001c316) list_medium_line_x2_t1

0x0b48,	// (0x00017b5f) list_medium_line_x3_g1_ParamLimits

0x0b48,	// (0x00017b5f) list_medium_line_x3_g1

0x0b54,	// (0x00017b6b) list_medium_line_x3_g2_ParamLimits

0x0b54,	// (0x00017b6b) list_medium_line_x3_g2

0x0001,

0xfd4c,	// (0x00026d63) list_medium_line_x3_g_ParamLimits

0xfd4c,	// (0x00026d63) list_medium_line_x3_g

0x52ff,	// (0x0001c316) list_medium_line_x3_t1_ParamLimits

0x52ff,	// (0x0001c316) list_medium_line_x3_t1

0x5315,	// (0x0001c32c) thumb_sp_fs_scroll_pane_g1

0x531e,	// (0x0001c335) thumb_sp_fs_scroll_pane_g2

0x5327,	// (0x0001c33e) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd51,	// (0x00026d68) thumb_sp_fs_scroll_pane_g

0x5315,	// (0x0001c32c) bg_sp_fs_scroll_pane_g1

0x531e,	// (0x0001c335) bg_sp_fs_scroll_pane_g2

0x5327,	// (0x0001c33e) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd51,	// (0x00026d68) bg_sp_fs_scroll_pane_g

0x0b48,	// (0x00017b5f) list_medium_line_x2_t3_g4_g1_ParamLimits

0x0b48,	// (0x00017b5f) list_medium_line_x2_t3_g4_g1

0x0bdb,	// (0x00017bf2) list_medium_line_x2_t3_g4_g2_ParamLimits

0x0bdb,	// (0x00017bf2) list_medium_line_x2_t3_g4_g2

0x0b54,	// (0x00017b6b) list_medium_line_x2_t3_g4_g3_ParamLimits

0x0b54,	// (0x00017b6b) list_medium_line_x2_t3_g4_g3

0x0b60,	// (0x00017b77) list_medium_line_x2_t3_g4_g4_ParamLimits

0x0b60,	// (0x00017b77) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2e1,	// (0x000262f8) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2e1,	// (0x000262f8) list_medium_line_x2_t3_g4_g

0xe0cb,	// (0x000250e2) list_medium_line_x2_t3_g4_t1_ParamLimits

0xe0cb,	// (0x000250e2) list_medium_line_x2_t3_g4_t1

0xe0e1,	// (0x000250f8) list_medium_line_x2_t3_g4_t2_ParamLimits

0xe0e1,	// (0x000250f8) list_medium_line_x2_t3_g4_t2

0x0b81,	// (0x00017b98) list_medium_line_x2_t3_g4_t3_ParamLimits

0x0b81,	// (0x00017b98) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd58,	// (0x00026d6f) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd58,	// (0x00026d6f) list_medium_line_x2_t3_g4_t

0x3fdb,	// (0x0001aff2) list_medium_line_g2_g1_ParamLimits

0x3fdb,	// (0x0001aff2) list_medium_line_g2_g1

0x3fe7,	// (0x0001affe) list_medium_line_g2_g2_ParamLimits

0x3fe7,	// (0x0001affe) list_medium_line_g2_g2

0x0001,

0xfa1a,	// (0x00026a31) list_medium_line_g2_g_ParamLimits

0xfa1a,	// (0x00026a31) list_medium_line_g2_g

0x5330,	// (0x0001c347) list_medium_line_g2_t1_ParamLimits

0x5330,	// (0x0001c347) list_medium_line_g2_t1

0x3fdb,	// (0x0001aff2) list_medium_line_t3_g2_g1_ParamLimits

0x3fdb,	// (0x0001aff2) list_medium_line_t3_g2_g1

0x3fe7,	// (0x0001affe) list_medium_line_t3_g2_g2_ParamLimits

0x3fe7,	// (0x0001affe) list_medium_line_t3_g2_g2

0x0001,

0xfa1a,	// (0x00026a31) list_medium_line_t3_g2_g_ParamLimits

0xfa1a,	// (0x00026a31) list_medium_line_t3_g2_g

0xe0fa,	// (0x00025111) list_medium_line_t3_g2_t1_ParamLimits

0xe0fa,	// (0x00025111) list_medium_line_t3_g2_t1

0xe111,	// (0x00025128) list_medium_line_t3_g2_t2_ParamLimits

0xe111,	// (0x00025128) list_medium_line_t3_g2_t2

0xe126,	// (0x0002513d) list_medium_line_t3_g2_t3_ParamLimits

0xe126,	// (0x0002513d) list_medium_line_t3_g2_t3

0x0002,

0xfd5f,	// (0x00026d76) list_medium_line_t3_g2_t_ParamLimits

0xfd5f,	// (0x00026d76) list_medium_line_t3_g2_t

0x513b,	// (0x0001c152) list_medium_line_right_icon_g1

0x5345,	// (0x0001c35c) list_medium_line_right_icon_t1

0x3fdb,	// (0x0001aff2) list_medium_line_t2_g1_ParamLimits

0x3fdb,	// (0x0001aff2) list_medium_line_t2_g1

0xe13b,	// (0x00025152) list_medium_line_t2_t1_ParamLimits

0xe13b,	// (0x00025152) list_medium_line_t2_t1

0xe155,	// (0x0002516c) list_medium_line_t2_t2_ParamLimits

0xe155,	// (0x0002516c) list_medium_line_t2_t2

0x0001,

0xfd66,	// (0x00026d7d) list_medium_line_t2_t_ParamLimits

0xfd66,	// (0x00026d7d) list_medium_line_t2_t

0x3fdb,	// (0x0001aff2) list_medium_line_t3_g1_ParamLimits

0x3fdb,	// (0x0001aff2) list_medium_line_t3_g1

0xe16a,	// (0x00025181) list_medium_line_t3_t1_ParamLimits

0xe16a,	// (0x00025181) list_medium_line_t3_t1

0xe181,	// (0x00025198) list_medium_line_t3_t2_ParamLimits

0xe181,	// (0x00025198) list_medium_line_t3_t2

0xe196,	// (0x000251ad) list_medium_line_t3_t3_ParamLimits

0xe196,	// (0x000251ad) list_medium_line_t3_t3

0x0002,

0xfd6b,	// (0x00026d82) list_medium_line_t3_t_ParamLimits

0xfd6b,	// (0x00026d82) list_medium_line_t3_t

0x3fdb,	// (0x0001aff2) list_medium_line_g3_g1_ParamLimits

0x3fdb,	// (0x0001aff2) list_medium_line_g3_g1

0x5353,	// (0x0001c36a) list_medium_line_g3_g2_ParamLimits

0x5353,	// (0x0001c36a) list_medium_line_g3_g2

0x3fe7,	// (0x0001affe) list_medium_line_g3_g3_ParamLimits

0x3fe7,	// (0x0001affe) list_medium_line_g3_g3

0x0002,

0xfd72,	// (0x00026d89) list_medium_line_g3_g_ParamLimits

0xfd72,	// (0x00026d89) list_medium_line_g3_g

0x535f,	// (0x0001c376) list_medium_line_g3_t1_ParamLimits

0x535f,	// (0x0001c376) list_medium_line_g3_t1

0x3fdb,	// (0x0001aff2) list_medium_line_t2_g3_g1_ParamLimits

0x3fdb,	// (0x0001aff2) list_medium_line_t2_g3_g1

0x5353,	// (0x0001c36a) list_medium_line_t2_g3_g2_ParamLimits

0x5353,	// (0x0001c36a) list_medium_line_t2_g3_g2

0x3fe7,	// (0x0001affe) list_medium_line_t2_g3_g3_ParamLimits

0x3fe7,	// (0x0001affe) list_medium_line_t2_g3_g3

0x0002,

0xfd72,	// (0x00026d89) list_medium_line_t2_g3_g_ParamLimits

0xfd72,	// (0x00026d89) list_medium_line_t2_g3_g

0xe1a8,	// (0x000251bf) list_medium_line_t2_g3_t1_ParamLimits

0xe1a8,	// (0x000251bf) list_medium_line_t2_g3_t1

0xe1bf,	// (0x000251d6) list_medium_line_t2_g3_t2_ParamLimits

0xe1bf,	// (0x000251d6) list_medium_line_t2_g3_t2

0x0001,

0xfd79,	// (0x00026d90) list_medium_line_t2_g3_t_ParamLimits

0xfd79,	// (0x00026d90) list_medium_line_t2_g3_t

0x3fdb,	// (0x0001aff2) list_medium_line_t3_g3_g1_ParamLimits

0x3fdb,	// (0x0001aff2) list_medium_line_t3_g3_g1

0x5353,	// (0x0001c36a) list_medium_line_t3_g3_g2_ParamLimits

0x5353,	// (0x0001c36a) list_medium_line_t3_g3_g2

0x3fe7,	// (0x0001affe) list_medium_line_t3_g3_g3_ParamLimits

0x3fe7,	// (0x0001affe) list_medium_line_t3_g3_g3

0x0002,

0xfd72,	// (0x00026d89) list_medium_line_t3_g3_g_ParamLimits

0xfd72,	// (0x00026d89) list_medium_line_t3_g3_g

0xe1d4,	// (0x000251eb) list_medium_line_t3_g3_t1_ParamLimits

0xe1d4,	// (0x000251eb) list_medium_line_t3_g3_t1

0xe1e8,	// (0x000251ff) list_medium_line_t3_g3_t2_ParamLimits

0xe1e8,	// (0x000251ff) list_medium_line_t3_g3_t2

0xe1fa,	// (0x00025211) list_medium_line_t3_g3_t3_ParamLimits

0xe1fa,	// (0x00025211) list_medium_line_t3_g3_t3

0x0002,

0xfd7e,	// (0x00026d95) list_medium_line_t3_g3_t_ParamLimits

0xfd7e,	// (0x00026d95) list_medium_line_t3_g3_t

0x524f,	// (0x0001c266) list_medium_line_right_iconx2_g1

0x513b,	// (0x0001c152) list_medium_line_right_iconx2_g2

0x0001,

0xfd85,	// (0x00026d9c) list_medium_line_right_iconx2_g

0x5374,	// (0x0001c38b) list_medium_line_right_iconx2_t1

0x524f,	// (0x0001c266) list_medium_line_t2_right_iconx2_g1

0x513b,	// (0x0001c152) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd85,	// (0x00026d9c) list_medium_line_t2_right_iconx2_g

0xe20c,	// (0x00025223) list_medium_line_t2_right_iconx2_t1

0xe21c,	// (0x00025233) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd8a,	// (0x00026da1) list_medium_line_t2_right_iconx2_t

0x5382,	// (0x0001c399) list_medium_line_x4_t4_t1

0xe22a,	// (0x00025241) list_medium_line_x4_t4_t2

0xe23a,	// (0x00025251) list_medium_line_x4_t4_t3

0xe24a,	// (0x00025261) list_medium_line_x4_t4_t4

0x0003,

0xfd8f,	// (0x00026da6) list_medium_line_x4_t4_t

0xe283,	// (0x0002529a) tport_appsw_pane_ParamLimits

0xe283,	// (0x0002529a) tport_appsw_pane

0xe28f,	// (0x000252a6) tport_contact_pane_ParamLimits

0xe28f,	// (0x000252a6) tport_contact_pane

0xe29f,	// (0x000252b6) tport_listscroll_pane_ParamLimits

0xe29f,	// (0x000252b6) tport_listscroll_pane

0xe2af,	// (0x000252c6) cell_tport_appsw_pane_ParamLimits

0xe2af,	// (0x000252c6) cell_tport_appsw_pane

0x3259,	// (0x0001a270) tport_appsw_pane_g1_ParamLimits

0x3259,	// (0x0001a270) tport_appsw_pane_g1

0x5390,	// (0x0001c3a7) tport_contact_pane_g1

0x5399,	// (0x0001c3b0) tport_contact_pane_t1

0x53a7,	// (0x0001c3be) tport_contact_pane_t2

0x0001,

0xfd98,	// (0x00026daf) tport_contact_pane_t

0x53b5,	// (0x0001c3cc) list_tport_pane

0x53be,	// (0x0001c3d5) scroll_pane_cp_030

0x53cf,	// (0x0001c3e6) cell_tport_appsw_pane_g1

0x53df,	// (0x0001c3f6) cell_tport_appsw_pane_t1

0x001a,	// (0x00017031) grid_highlight_pane_cp019

0xe2da,	// (0x000252f1) list_tport_double_graphic_pane_ParamLimits

0xe2da,	// (0x000252f1) list_tport_double_graphic_pane

0x008a,	// (0x000170a1) list_highlight_pane_cp023_ParamLimits

0x008a,	// (0x000170a1) list_highlight_pane_cp023

0xe2ed,	// (0x00025304) list_tport_double_graphic_pane_g1_ParamLimits

0xe2ed,	// (0x00025304) list_tport_double_graphic_pane_g1

0xe2fa,	// (0x00025311) list_tport_double_graphic_pane_t1_ParamLimits

0xe2fa,	// (0x00025311) list_tport_double_graphic_pane_t1

0xe30f,	// (0x00025326) list_tport_double_graphic_pane_t2_ParamLimits

0xe30f,	// (0x00025326) list_tport_double_graphic_pane_t2

0x0001,

0xfda4,	// (0x00026dbb) list_tport_double_graphic_pane_t_ParamLimits

0xfda4,	// (0x00026dbb) list_tport_double_graphic_pane_t

0x001a,	// (0x00017031) main_cale_note_pane

0x7d08,	// (0x0001ed1f) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x7d08,	// (0x0001ed1f) cell_vitu2_function_top_wide_pane_cp01

0xdb19,	// (0x00024b30) wait_bar_pane_cp05_ParamLimits

0x001a,	// (0x00017031) listscroll_cmail_pane

0x53f5,	// (0x0001c40c) list_cmail_pane

0xe32b,	// (0x00025342) list_cmail_body_pane

0xe34f,	// (0x00025366) list_single_cmail_header_caption_pane

0xe37d,	// (0x00025394) list_single_cmail_header_detail_pane_ParamLimits

0xe37d,	// (0x00025394) list_single_cmail_header_detail_pane

0xe3b5,	// (0x000253cc) list_single_cmail_header_caption_pane_t1

0xe3c5,	// (0x000253dc) list_single_cmail_header_detail_pane_g1_ParamLimits

0xe3c5,	// (0x000253dc) list_single_cmail_header_detail_pane_g1

0x5415,	// (0x0001c42c) list_single_cmail_header_detail_pane_g2_ParamLimits

0x5415,	// (0x0001c42c) list_single_cmail_header_detail_pane_g2

0x0002,

0xfda9,	// (0x00026dc0) list_single_cmail_header_detail_pane_g_ParamLimits

0xfda9,	// (0x00026dc0) list_single_cmail_header_detail_pane_g

0x542e,	// (0x0001c445) list_single_cmail_header_detail_pane_t1_ParamLimits

0x542e,	// (0x0001c445) list_single_cmail_header_detail_pane_t1

0x5460,	// (0x0001c477) list_single_cmail_header_editor_pane_bg_ParamLimits

0x5460,	// (0x0001c477) list_single_cmail_header_editor_pane_bg

0x5472,	// (0x0001c489) list_cmail_body_pane_g1

0x547b,	// (0x0001c492) list_cmail_body_pane_t1

0x3d2a,	// (0x0001ad41) list_single_cmail_header_editor_pane_bg_g1

0x0dfc,	// (0x00017e13) list_single_cmail_header_editor_pane_bg_g1_copy1

0x3d3a,	// (0x0001ad51) list_single_cmail_header_editor_pane_bg_g1_copy2

0x3d32,	// (0x0001ad49) list_single_cmail_header_editor_pane_bg_g1_copy3

0x3fb3,	// (0x0001afca) list_single_cmail_header_editor_pane_bg_g1_copy4

0x3d5a,	// (0x0001ad71) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x3d4a,	// (0x0001ad61) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x3d52,	// (0x0001ad69) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x0ddc,	// (0x00017df3) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xe403,	// (0x0002541a) calenote_gesture_pane_ParamLimits

0xe403,	// (0x0002541a) calenote_gesture_pane

0xe41d,	// (0x00025434) calenote_window_pane_ParamLimits

0xe41d,	// (0x00025434) calenote_window_pane

0x5489,	// (0x0001c4a0) popup_note_window_cp01

0xe435,	// (0x0002544c) calenote_swipe_1_pane_ParamLimits

0xe435,	// (0x0002544c) calenote_swipe_1_pane

0xde78,	// (0x00024e8f) calenote_swipe_2_pane_ParamLimits

0xde78,	// (0x00024e8f) calenote_swipe_2_pane

0x5040,	// (0x0001c057) calenote_swipe_1_pane_g1_ParamLimits

0x5040,	// (0x0001c057) calenote_swipe_1_pane_g1

0x504d,	// (0x0001c064) calenote_swipe_1_pane_g2_ParamLimits

0x504d,	// (0x0001c064) calenote_swipe_1_pane_g2

0x0001,

0xfcd8,	// (0x00026cef) calenote_swipe_1_pane_g_ParamLimits

0xfcd8,	// (0x00026cef) calenote_swipe_1_pane_g

0x549b,	// (0x0001c4b2) calenote_swipe_1_pane_t1_ParamLimits

0x549b,	// (0x0001c4b2) calenote_swipe_1_pane_t1

0x5040,	// (0x0001c057) calenote_swipe_2_pane_g1_ParamLimits

0x5040,	// (0x0001c057) calenote_swipe_2_pane_g1

0x54ba,	// (0x0001c4d1) calenote_swipe_2_pane_g2_ParamLimits

0x54ba,	// (0x0001c4d1) calenote_swipe_2_pane_g2

0x0001,

0xfdb5,	// (0x00026dcc) calenote_swipe_2_pane_g_ParamLimits

0xfdb5,	// (0x00026dcc) calenote_swipe_2_pane_g

0x54c6,	// (0x0001c4dd) calenote_swipe_2_pane_t1_ParamLimits

0x54c6,	// (0x0001c4dd) calenote_swipe_2_pane_t1

0x001a,	// (0x00017031) main_mup_navstr_pane

0xbbb2,	// (0x00022bc9) main_mup3_pane_t7_ParamLimits

0xbbb2,	// (0x00022bc9) main_mup3_pane_t7

0x761f,	// (0x0001e636) main_mp4_pane_g6_ParamLimits

0x761f,	// (0x0001e636) main_mp4_pane_g6

0x7914,	// (0x0001e92b) main_image3_pane_t4_ParamLimits

0x7914,	// (0x0001e92b) main_image3_pane_t4

0xe448,	// (0x0002545f) popup_navstr_preview_pane_ParamLimits

0xe448,	// (0x0002545f) popup_navstr_preview_pane

0xe454,	// (0x0002546b) scroll_navstr_pane_ParamLimits

0xe454,	// (0x0002546b) scroll_navstr_pane

0x001a,	// (0x00017031) bg_popup_preview_window_pane_cp04

0x54ed,	// (0x0001c504) popup_navstr_preview_pane_t1

0xe460,	// (0x00025477) scroll_navstr_pane_g1_ParamLimits

0xe460,	// (0x00025477) scroll_navstr_pane_g1

0xe46d,	// (0x00025484) scroll_navstr_pane_t1_ParamLimits

0xe46d,	// (0x00025484) scroll_navstr_pane_t1

0x5492,	// (0x0001c4a9) bg_button_pane_cp014

0x5492,	// (0x0001c4a9) bg_button_pane_cp030

0x4fa4,	// (0x0001bfbb) list_double_fisheye_pane_g4_ParamLimits

0x4fa4,	// (0x0001bfbb) list_double_fisheye_pane_g4

0x4fb0,	// (0x0001bfc7) list_double_fisheye_pane_g5_ParamLimits

0x4fb0,	// (0x0001bfc7) list_double_fisheye_pane_g5

0x53fd,	// (0x0001c414) sp_fs_scroll_pane_cp03

0x0b48,	// (0x00017b5f) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x517b,	// (0x0001c192) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcf5,	// (0x00026d0c) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x5187,	// (0x0001c19e) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe321,	// (0x00025338) sp_fs_scroll_pane_cp02

0x09c9,	// (0x000179e0) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x09c9,	// (0x000179e0) popup_sp_fs_calendar_preview_list_single_pane

0x001a,	// (0x00017031) main_cam6_pano_pane

0x008a,	// (0x000170a1) main_mup3_pane_ParamLimits

0x001a,	// (0x00017031) main_phacti_pane

0xd9ee,	// (0x00024a05) bg_button_pane_cp11

0xda06,	// (0x00024a1d) main_mobtv_info_pane_g2_ParamLimits

0xda06,	// (0x00024a1d) main_mobtv_info_pane_g2

0x0001,

0xfc55,	// (0x00026c6c) main_mobtv_info_pane_g_ParamLimits

0xfc55,	// (0x00026c6c) main_mobtv_info_pane_g

0xdbb8,	// (0x00024bcf) sc_clock_pane_t5_ParamLimits

0xdbb8,	// (0x00024bcf) sc_clock_pane_t5

0xdc5e,	// (0x00024c75) main_radioblah_pane_g1_ParamLimits

0x4efd,	// (0x0001bf14) main_radioblah_pane_t3_ParamLimits

0x4efd,	// (0x0001bf14) main_radioblah_pane_t3

0x4f15,	// (0x0001bf2c) main_radioblah_pane_t4_ParamLimits

0x4f15,	// (0x0001bf2c) main_radioblah_pane_t4

0xdc7c,	// (0x00024c93) main_radioblah_text_pane_ParamLimits

0xdc7c,	// (0x00024c93) main_radioblah_text_pane

0xdc89,	// (0x00024ca0) main_radioblah_info_pane_g1_ParamLimits

0xdd1e,	// (0x00024d35) main_radioblah_info_pane_t4_ParamLimits

0xdd1e,	// (0x00024d35) main_radioblah_info_pane_t4

0x008a,	// (0x000170a1) main_sp_fs_calendar_pane

0xe47f,	// (0x00025496) main_phacti_pane_g1

0xe487,	// (0x0002549e) phacti_note_pane_ParamLimits

0xe487,	// (0x0002549e) phacti_note_pane

0x5504,	// (0x0001c51b) phacti_term_pane_ParamLimits

0x5504,	// (0x0001c51b) phacti_term_pane

0x5519,	// (0x0001c530) phacti_note_pane_t1_ParamLimits

0x5519,	// (0x0001c530) phacti_note_pane_t1

0x5530,	// (0x0001c547) phacti_term_pane_g1

0x5538,	// (0x0001c54f) phacti_term_pane_t1_ParamLimits

0x5538,	// (0x0001c54f) phacti_term_pane_t1

0x5562,	// (0x0001c579) popup_sp_fs_calendar_preview_list_single_pane_g1

0x556a,	// (0x0001c581) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdbf,	// (0x00026dd6) popup_sp_fs_calendar_preview_list_single_pane_g

0x5572,	// (0x0001c589) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x5572,	// (0x0001c589) popup_sp_fs_calendar_preview_list_single_pane_t1

0x5588,	// (0x0001c59f) aid_popup_sp_fs_bg_corner_pane

0x2f55,	// (0x00019f6c) popup_sp_fs_calendar_preview_bg_pane_g1

0x001a,	// (0x00017031) popup_sp_fs_calendar_preview_bg_pane

0x5590,	// (0x0001c5a7) popup_sp_fs_calendar_preview_list_pane

0x008a,	// (0x000170a1) bg_main_sp_fs_cale_pane_ParamLimits

0x008a,	// (0x000170a1) bg_main_sp_fs_cale_pane

0x55a1,	// (0x0001c5b8) listscroll_cale_mrui_pane_ParamLimits

0x55a1,	// (0x0001c5b8) listscroll_cale_mrui_pane

0x55b5,	// (0x0001c5cc) listscroll_sp_fs_schedule_track_pane

0x55be,	// (0x0001c5d5) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x55be,	// (0x0001c5d5) main_sp_fs_ctrlbar_pane_cp01

0x55cf,	// (0x0001c5e6) main_sp_fs_ribbon_pane

0x55d7,	// (0x0001c5ee) popup_sp_fs_cale_preview_window

0xe4ca,	// (0x000254e1) list_single_sp_fs_schedule_track_pane_ParamLimits

0xe4ca,	// (0x000254e1) list_single_sp_fs_schedule_track_pane

0x381c,	// (0x0001a833) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x381c,	// (0x0001a833) bg_sp_fs_highlight_list_pane_cp03

0xe4f2,	// (0x00025509) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xe4f2,	// (0x00025509) list_single_sp_fs_schedule_track_pane_g1

0xe4fe,	// (0x00025515) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xe4fe,	// (0x00025515) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdc4,	// (0x00026ddb) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdc4,	// (0x00026ddb) list_single_sp_fs_schedule_track_pane_g

0xe50a,	// (0x00025521) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xe50a,	// (0x00025521) list_single_sp_fs_schedule_track_pane_t1

0xe522,	// (0x00025539) sp_fs_schedule_track_pane_ParamLimits

0xe522,	// (0x00025539) sp_fs_schedule_track_pane

0x55e9,	// (0x0001c600) sp_fs_schedule_track_pane_g1

0x55f1,	// (0x0001c608) sp_fs_schedule_track_pane_g2

0x55f9,	// (0x0001c610) sp_fs_schedule_track_pane_g3

0x5601,	// (0x0001c618) sp_fs_schedule_track_pane_g4

0x5609,	// (0x0001c620) sp_fs_schedule_track_pane_g5

0x0004,

0xfdc9,	// (0x00026de0) sp_fs_schedule_track_pane_g

0x3d2a,	// (0x0001ad41) bg_sp_fs_schedule_viewer_highlight_g1

0x0dfc,	// (0x00017e13) bg_sp_fs_schedule_viewer_highlight_g2

0x3d32,	// (0x0001ad49) bg_sp_fs_schedule_viewer_highlight_g3

0x3d3a,	// (0x0001ad51) bg_sp_fs_schedule_viewer_highlight_g4

0x3fb3,	// (0x0001afca) bg_sp_fs_schedule_viewer_highlight_g5

0x3d4a,	// (0x0001ad61) bg_sp_fs_schedule_viewer_highlight_g6

0x3d52,	// (0x0001ad69) bg_sp_fs_schedule_viewer_highlight_g7

0x3d5a,	// (0x0001ad71) bg_sp_fs_schedule_viewer_highlight_g8

0x0ddc,	// (0x00017df3) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdd4,	// (0x00026deb) bg_sp_fs_schedule_viewer_highlight_g

0x001a,	// (0x00017031) bg_main_sp_fs_ribbon_pane

0xe532,	// (0x00025549) main_sp_fs_ribbon_pane_g1

0x5611,	// (0x0001c628) main_sp_fs_ribbon_pane_t1

0xe53d,	// (0x00025554) main_sp_fs_ribbon_pane_t2

0x5620,	// (0x0001c637) main_sp_fs_ribbon_pane_t3

0x0002,

0xfde7,	// (0x00026dfe) main_sp_fs_ribbon_pane_t

0x562f,	// (0x0001c646) main_sp_fs_ribbon_scheduler_pane

0x5637,	// (0x0001c64e) bg_main_sp_fs_ribbon_pane_g1

0x5640,	// (0x0001c657) bg_main_sp_fs_ribbon_pane_g2

0x5649,	// (0x0001c660) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdee,	// (0x00026e05) bg_main_sp_fs_ribbon_pane_g

0x5651,	// (0x0001c668) main_sp_fs_ribbon_scheduler_pane_g1

0x565a,	// (0x0001c671) main_sp_fs_ribbon_scheduler_pane_g2

0x5663,	// (0x0001c67a) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdf5,	// (0x00026e0c) main_sp_fs_ribbon_scheduler_pane_g

0x566c,	// (0x0001c683) list_cale_mrui_pane

0xe54e,	// (0x00025565) sp_fs_scroll_pane_cp07_ParamLimits

0xe54e,	// (0x00025565) sp_fs_scroll_pane_cp07

0xe564,	// (0x0002557b) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xe564,	// (0x0002557b) bg_sp_fs_schedule_viewer_highlight

0x5675,	// (0x0001c68c) list_single_sp_fs_schedule_track_pane_cp01

0x567d,	// (0x0001c694) list_sp_fs_schedule_track_pane

0x5685,	// (0x0001c69c) sp_fs_scroll_pane_cp06_ParamLimits

0x5685,	// (0x0001c69c) sp_fs_scroll_pane_cp06

0x2f55,	// (0x00019f6c) bgmain_sp_fs_calendar_pane_g1

0xe571,	// (0x00025588) list_single_cale_mrui_pane_ParamLimits

0xe571,	// (0x00025588) list_single_cale_mrui_pane

0x5697,	// (0x0001c6ae) list_single_cale_mrui_row_pane_ParamLimits

0x5697,	// (0x0001c6ae) list_single_cale_mrui_row_pane

0x56a4,	// (0x0001c6bb) list_single_cale_mrui_row_pane_g1_ParamLimits

0x56a4,	// (0x0001c6bb) list_single_cale_mrui_row_pane_g1

0x56e9,	// (0x0001c700) list_single_cale_mrui_row_pane_t1_ParamLimits

0x56e9,	// (0x0001c700) list_single_cale_mrui_row_pane_t1

0xe5a3,	// (0x000255ba) list_single_cale_mrui_row_pane_t2_ParamLimits

0xe5a3,	// (0x000255ba) list_single_cale_mrui_row_pane_t2

0x56fb,	// (0x0001c712) list_single_cale_mrui_row_pane_t3_ParamLimits

0x56fb,	// (0x0001c712) list_single_cale_mrui_row_pane_t3

0x572a,	// (0x0001c741) list_single_cale_mrui_row_pane_t4_ParamLimits

0x572a,	// (0x0001c741) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe03,	// (0x00026e1a) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe03,	// (0x00026e1a) list_single_cale_mrui_row_pane_t

0xe609,	// (0x00025620) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xe609,	// (0x00025620) list_single_cmail_header_editor_pane_bg_cp01

0xe62b,	// (0x00025642) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xe62b,	// (0x00025642) list_single_cmail_header_editor_pane_bg_cp02

0xe647,	// (0x0002565e) main_radioblah_text_pane_t1_ParamLimits

0xe647,	// (0x0002565e) main_radioblah_text_pane_t1

0x5759,	// (0x0001c770) cam6_indi_pane_cp01

0x5761,	// (0x0001c778) cam6_mode_pane_cp01

0x5769,	// (0x0001c780) cam6_pano_pane

0x5772,	// (0x0001c789) cam6_zoom_pane_cp01

0x577a,	// (0x0001c791) cam6_pano_image_pane

0x5785,	// (0x0001c79c) cam6_pano_pane_g1

0x4c5c,	// (0x0001bc73) cam6_pano_pane_g2

0x578e,	// (0x0001c7a5) cam6_pano_pane_g3

0x5797,	// (0x0001c7ae) cam6_pano_pane_g4

0x3530,	// (0x0001a547) cam6_pano_pane_g5

0x57a0,	// (0x0001c7b7) cam6_pano_pane_g6

0x57aa,	// (0x0001c7c1) cam6_pano_pane_g7

0x57b2,	// (0x0001c7c9) cam6_pano_pane_g8

0x57bb,	// (0x0001c7d2) cam6_pano_pane_g9

0x0008,

0xfe0c,	// (0x00026e23) cam6_pano_pane_g

0x001a,	// (0x00017031) main_browser_tag_pane

0x54e5,	// (0x0001c4fc) grid_navstr_albumart_pane

0x57c6,	// (0x0001c7dd) cell_navstr_albumart_pane_ParamLimits

0x57c6,	// (0x0001c7dd) cell_navstr_albumart_pane

0x172f,	// (0x00018746) cell_navstr_albumart_pane_g1

0x2862,	// (0x00019879) cell_navstr_albumart_pane_g2

0x2872,	// (0x00019889) cell_navstr_albumart_pane_g3

0x286a,	// (0x00019881) cell_navstr_albumart_pane_g4

0x0003,

0xfe1f,	// (0x00026e36) cell_navstr_albumart_pane_g

0xe664,	// (0x0002567b) bt_list_pane_ParamLimits

0xe664,	// (0x0002567b) bt_list_pane

0xe68b,	// (0x000256a2) bt_list_pane_t1

0xe69a,	// (0x000256b1) bt_list_pane_t2

0x0001,

0xfe28,	// (0x00026e3f) bt_list_pane_t

0x001a,	// (0x00017031) main_cale_prevew_pane

0xe6a9,	// (0x000256c0) popup_cale_preview_window_ParamLimits

0xe6a9,	// (0x000256c0) popup_cale_preview_window

0x008a,	// (0x000170a1) bg_popup_preview_window_pane_cp05_ParamLimits

0x008a,	// (0x000170a1) bg_popup_preview_window_pane_cp05

0x57e8,	// (0x0001c7ff) list_cale_preview_pane_ParamLimits

0x57e8,	// (0x0001c7ff) list_cale_preview_pane

0xe6c0,	// (0x000256d7) list_double_cale_preview_pane_ParamLimits

0xe6c0,	// (0x000256d7) list_double_cale_preview_pane

0xe6d2,	// (0x000256e9) list_single_cale_preview_pane_ParamLimits

0xe6d2,	// (0x000256e9) list_single_cale_preview_pane

0xe6e6,	// (0x000256fd) list_single_cale_preview_pane_g1

0xe6ee,	// (0x00025705) list_single_cale_preview_pane_t1_ParamLimits

0xe6ee,	// (0x00025705) list_single_cale_preview_pane_t1

0xe703,	// (0x0002571a) list_double_cale_preview_pane_g1

0xe70b,	// (0x00025722) list_double_cale_preview_pane_t1_ParamLimits

0xe70b,	// (0x00025722) list_double_cale_preview_pane_t1

0xe720,	// (0x00025737) list_double_cale_preview_pane_t2_ParamLimits

0xe720,	// (0x00025737) list_double_cale_preview_pane_t2

0x0001,

0xfe2d,	// (0x00026e44) list_double_cale_preview_pane_t_ParamLimits

0xfe2d,	// (0x00026e44) list_double_cale_preview_pane_t

0x001a,	// (0x00017031) main_ezdial_pane

0x008a,	// (0x000170a1) main_sp_fs_email_pane_ParamLimits

0xdeae,	// (0x00024ec5) cmail_ddmenu_btn01_pane_ParamLimits

0xdeae,	// (0x00024ec5) cmail_ddmenu_btn01_pane

0xdecb,	// (0x00024ee2) cmail_ddmenu_btn02_pane_ParamLimits

0xdecb,	// (0x00024ee2) cmail_ddmenu_btn02_pane

0xdee9,	// (0x00024f00) cmail_ddmenu_btn03_pane_ParamLimits

0xdee9,	// (0x00024f00) cmail_ddmenu_btn03_pane

0xdf17,	// (0x00024f2e) main_sp_fs_ctrlbar_pane_ParamLimits

0xdf31,	// (0x00024f48) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xe32b,	// (0x00025342) list_cmail_body_pane_ParamLimits

0x540c,	// (0x0001c423) bg_button_pane_cp12

0x5421,	// (0x0001c438) list_single_cmail_header_detail_pane_g3_ParamLimits

0x5421,	// (0x0001c438) list_single_cmail_header_detail_pane_g3

0xe3dd,	// (0x000253f4) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe3dd,	// (0x000253f4) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdb0,	// (0x00026dc7) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdb0,	// (0x00026dc7) list_single_cmail_header_detail_pane_t

0x554d,	// (0x0001c564) phacti_term_pane_t2_ParamLimits

0x554d,	// (0x0001c564) phacti_term_pane_t2

0x0001,

0xfdba,	// (0x00026dd1) phacti_term_pane_t_ParamLimits

0xfdba,	// (0x00026dd1) phacti_term_pane_t

0x57f4,	// (0x0001c80b) aid_size_list_single_double

0xe738,	// (0x0002574f) popup_ezdial_listscroll_window

0xe75b,	// (0x00025772) popup_number_entry_window_cp01

0x15ae,	// (0x000185c5) bg_popup_call_pane_cp09

0x5800,	// (0x0001c817) ezdial_list_pane

0x5808,	// (0x0001c81f) scroll_pane_cp23

0x2d38,	// (0x00019d4f) bg_button_pane_cp028_ParamLimits

0x2d38,	// (0x00019d4f) bg_button_pane_cp028

0xe769,	// (0x00025780) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xe769,	// (0x00025780) cmail_ddmenu_btn01_pane_g1

0xe77b,	// (0x00025792) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xe77b,	// (0x00025792) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe32,	// (0x00026e49) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe32,	// (0x00026e49) cmail_ddmenu_btn01_pane_g

0x5810,	// (0x0001c827) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x5810,	// (0x0001c827) cmail_ddmenu_btn01_pane_t1

0x2a4d,	// (0x00019a64) bg_button_pane_cp029_ParamLimits

0x2a4d,	// (0x00019a64) bg_button_pane_cp029

0xe77b,	// (0x00025792) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xe77b,	// (0x00025792) cmail_ddmenu_btn02_pane_g1

0xe793,	// (0x000257aa) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xe793,	// (0x000257aa) cmail_ddmenu_btn02_pane_t1

0x381c,	// (0x0001a833) bg_button_pane_cp031_ParamLimits

0x381c,	// (0x0001a833) bg_button_pane_cp031

0xe77b,	// (0x00025792) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xe77b,	// (0x00025792) cmail_ddmenu_btn03_pane_g1

0xe793,	// (0x000257aa) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xe793,	// (0x000257aa) cmail_ddmenu_btn03_pane_t1

0xc430,	// (0x00023447) cell_dialer2_keypad_pane_t1_ParamLimits

0xc44a,	// (0x00023461) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xc44a,	// (0x00023461) cell_dialer2_keypad_pane_t1_copy1

0xd88e,	// (0x000248a5) ncimui_group_button_pane

0x008a,	// (0x000170a1) main_sp_fs_calendar_pane_ParamLimits

0xe34f,	// (0x00025366) list_single_cmail_header_caption_pane_ParamLimits

0x5598,	// (0x0001c5af) aid_recal_txt_sm_pane

0x001a,	// (0x00017031) mian_recal_day_pane

0x55d7,	// (0x0001c5ee) popup_sp_fs_cale_preview_window_ParamLimits

0x001a,	// (0x00017031) list_recal_day_pane

0x5848,	// (0x0001c85f) list_single_recal_day_pane_ParamLimits

0x5848,	// (0x0001c85f) list_single_recal_day_pane

0x585a,	// (0x0001c871) list_single_recal_day_pane_g1_ParamLimits

0x585a,	// (0x0001c871) list_single_recal_day_pane_g1

0x5866,	// (0x0001c87d) list_single_recal_day_pane_g2_ParamLimits

0x5866,	// (0x0001c87d) list_single_recal_day_pane_g2

0x5876,	// (0x0001c88d) list_single_recal_day_pane_g3_ParamLimits

0x5876,	// (0x0001c88d) list_single_recal_day_pane_g3

0xe7b7,	// (0x000257ce) list_single_recal_day_pane_g4_ParamLimits

0xe7b7,	// (0x000257ce) list_single_recal_day_pane_g4

0x5882,	// (0x0001c899) list_single_recal_day_pane_g5_ParamLimits

0x5882,	// (0x0001c899) list_single_recal_day_pane_g5

0x5892,	// (0x0001c8a9) list_single_recal_day_pane_g6_ParamLimits

0x5892,	// (0x0001c8a9) list_single_recal_day_pane_g6

0x0004,

0xfe41,	// (0x00026e58) list_single_recal_day_pane_g_ParamLimits

0xfe41,	// (0x00026e58) list_single_recal_day_pane_g

0x58a9,	// (0x0001c8c0) list_single_recal_day_pane_t1

0x58bb,	// (0x0001c8d2) list_single_recal_day_pane_t2

0x0001,

0xfe4c,	// (0x00026e63) list_single_recal_day_pane_t

0xe7d7,	// (0x000257ee) ncimui_query_button_pane_ParamLimits

0xe7d7,	// (0x000257ee) ncimui_query_button_pane

0xe7e7,	// (0x000257fe) ncimui_query_button_pane_t1_ParamLimits

0xe7e7,	// (0x000257fe) ncimui_query_button_pane_t1

0x58d0,	// (0x0001c8e7) ncimui_query_button_pane_t2_ParamLimits

0x58d0,	// (0x0001c8e7) ncimui_query_button_pane_t2

0x0001,

0xfe51,	// (0x00026e68) ncimui_query_button_pane_t_ParamLimits

0xfe51,	// (0x00026e68) ncimui_query_button_pane_t

0xe7fa,	// (0x00025811) query_button_pane_ParamLimits

0xe7fa,	// (0x00025811) query_button_pane

0x001a,	// (0x00017031) bg_button_pane_cp0028

0x58e3,	// (0x0001c8fa) query_button_pane_t1

0xaec0,	// (0x00021ed7) main_tport_pane_ParamLimits

0xe25a,	// (0x00025271) bg_popup_window_pane_cp01_ParamLimits

0xe25a,	// (0x00025271) bg_popup_window_pane_cp01

0xe267,	// (0x0002527e) heading_pane_cp08_ParamLimits

0xe267,	// (0x0002527e) heading_pane_cp08

0xe275,	// (0x0002528c) heading_pane_cp07_ParamLimits

0xe275,	// (0x0002528c) heading_pane_cp07

0x53cf,	// (0x0001c3e6) cell_tport_appsw_pane_g2

0x0002,

0xfd9d,	// (0x00026db4) cell_tport_appsw_pane_g

0xa656,	// (0x0002166d) input_candi_list_open_g1

0x0fef,	// (0x00018006) list_cale_time_pane_g6_ParamLimits

0x0fef,	// (0x00018006) list_cale_time_pane_g6

0xb613,	// (0x0002262a) aid_size_touch_calib_1_ParamLimits

0xb613,	// (0x0002262a) aid_size_touch_calib_1

0xb61f,	// (0x00022636) aid_size_touch_calib_2_ParamLimits

0xb61f,	// (0x00022636) aid_size_touch_calib_2

0xb62d,	// (0x00022644) aid_size_touch_calib_3_ParamLimits

0xb62d,	// (0x00022644) aid_size_touch_calib_3

0xb63d,	// (0x00022654) aid_size_touch_calib_4_ParamLimits

0xb63d,	// (0x00022654) aid_size_touch_calib_4

0xb64b,	// (0x00022662) main_touch_calib_button_group_pane_ParamLimits

0xb64b,	// (0x00022662) main_touch_calib_button_group_pane

0xb659,	// (0x00022670) main_touch_calib_pane_g1_ParamLimits

0xb665,	// (0x0002267c) main_touch_calib_pane_g2_ParamLimits

0xb671,	// (0x00022688) main_touch_calib_pane_g3_ParamLimits

0xb67d,	// (0x00022694) main_touch_calib_pane_g4_ParamLimits

0xf770,	// (0x00026787) main_touch_calib_pane_g_ParamLimits

0xb689,	// (0x000226a0) main_touch_calib_pane_t1_ParamLimits

0xb6a0,	// (0x000226b7) main_touch_calib_pane_t2_ParamLimits

0xb6b7,	// (0x000226ce) main_touch_calib_pane_t3_ParamLimits

0xb6cb,	// (0x000226e2) main_touch_calib_pane_t4_ParamLimits

0xb6df,	// (0x000226f6) main_touch_calib_pane_t5_ParamLimits

0xf779,	// (0x00026790) main_touch_calib_pane_t_ParamLimits

0x3300,	// (0x0001a317) list_single_fp_cale_pane_g3_ParamLimits

0x3300,	// (0x0001a317) list_single_fp_cale_pane_g3

0x7b11,	// (0x0001eb28) bg_button_pane_cp012_ParamLimits

0x7b11,	// (0x0001eb28) bg_vkb2_func_pane_cp03_ParamLimits

0x7f0e,	// (0x0001ef25) cell_vitu2_function_top_pane_g1_ParamLimits

0x7b11,	// (0x0001eb28) bg_vkb2_func_pane_cp04_ParamLimits

0xd82c,	// (0x00024843) main_ncimui_button_group_pane_ParamLimits

0xd82c,	// (0x00024843) main_ncimui_button_group_pane

0xd87c,	// (0x00024893) main_ncimui_pane_t3_ParamLimits

0xd87c,	// (0x00024893) main_ncimui_pane_t3

0x54fb,	// (0x0001c512) phacti_button_group_pane

0x57f4,	// (0x0001c80b) aid_size_list_single_double_ParamLimits

0xe738,	// (0x0002574f) popup_ezdial_listscroll_window_ParamLimits

0xe75b,	// (0x00025772) popup_number_entry_window_cp01_ParamLimits

0xe807,	// (0x0002581e) phacti_button_pane_ParamLimits

0xe807,	// (0x0002581e) phacti_button_pane

0x001a,	// (0x00017031) bg_button_pane_cp14

0x58f1,	// (0x0001c908) phacti_button_pane_t1

0xe818,	// (0x0002582f) main_touch_calib_button_pane_ParamLimits

0xe818,	// (0x0002582f) main_touch_calib_button_pane

0x083d,	// (0x00017854) bg_button_pane_cp18_ParamLimits

0x083d,	// (0x00017854) bg_button_pane_cp18

0x58ff,	// (0x0001c916) main_touch_calib_button_pane_t1_ParamLimits

0x58ff,	// (0x0001c916) main_touch_calib_button_pane_t1

0x5915,	// (0x0001c92c) main_touch_calib_button_pane_t2_ParamLimits

0x5915,	// (0x0001c92c) main_touch_calib_button_pane_t2

0x0001,

0xfe56,	// (0x00026e6d) main_touch_calib_button_pane_t_ParamLimits

0xfe56,	// (0x00026e6d) main_touch_calib_button_pane_t

0x001a,	// (0x00017031) cell_ncimui_button_pane

0x001a,	// (0x00017031) bg_button_pane_cp032

0x5933,	// (0x0001c94a) cell_ncimui_button_pane_t1

0x7827,	// (0x0001e83e) image3_infobar_pane_ParamLimits

0x7827,	// (0x0001e83e) image3_infobar_pane

0xdbda,	// (0x00024bf1) fs_bigclock_status_pane_ParamLimits

0xdbda,	// (0x00024bf1) fs_bigclock_status_pane

0xdbe7,	// (0x00024bfe) main_fs_bigclock_clock_pane_ParamLimits

0xdbe7,	// (0x00024bfe) main_fs_bigclock_clock_pane

0xdbfd,	// (0x00024c14) main_fs_bigclock_indi_pane_ParamLimits

0xdbfd,	// (0x00024c14) main_fs_bigclock_indi_pane

0xdc2c,	// (0x00024c43) main_fs_bigclock_swipe_pane_ParamLimits

0xdc2c,	// (0x00024c43) main_fs_bigclock_swipe_pane

0x001a,	// (0x00017031) main_fs_clock_dumped_data

0x4d69,	// (0x0001bd80) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x4d69,	// (0x0001bd80) list_single_fs_bigclock_indicator_pane_g1

0x4d92,	// (0x0001bda9) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x4d92,	// (0x0001bda9) list_single_fs_bigclock_indicator_pane_g2

0x4dac,	// (0x0001bdc3) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x4dac,	// (0x0001bdc3) list_single_fs_bigclock_indicator_pane_g3

0x4dc6,	// (0x0001bddd) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x4dc6,	// (0x0001bddd) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc89,	// (0x00026ca0) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc89,	// (0x00026ca0) list_single_fs_bigclock_indicator_pane_g

0x4def,	// (0x0001be06) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x4def,	// (0x0001be06) list_single_fs_bigclock_indicator_pane_t1

0x4e17,	// (0x0001be2e) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x4e17,	// (0x0001be2e) list_single_fs_bigclock_indicator_pane_t2

0x4e3f,	// (0x0001be56) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x4e3f,	// (0x0001be56) list_single_fs_bigclock_indicator_pane_t3

0x4e67,	// (0x0001be7e) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x4e67,	// (0x0001be7e) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc94,	// (0x00026cab) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc94,	// (0x00026cab) list_single_fs_bigclock_indicator_pane_t

0x5941,	// (0x0001c958) image3_infobar_fav_pane_ParamLimits

0x5941,	// (0x0001c958) image3_infobar_fav_pane

0x5951,	// (0x0001c968) image3_infobar_loc_pane_ParamLimits

0x5951,	// (0x0001c968) image3_infobar_loc_pane

0x5965,	// (0x0001c97c) image3_infobar_time_pane_ParamLimits

0x5965,	// (0x0001c97c) image3_infobar_time_pane

0x2f55,	// (0x00019f6c) image3_infobar_time_pane_g1

0x5975,	// (0x0001c98c) image3_infobar_time_pane_t1

0x2f55,	// (0x00019f6c) image3_infobar_loc_pane_g1

0x5983,	// (0x0001c99a) image3_infobar_loc_pane_g2

0x0001,

0xfe5b,	// (0x00026e72) image3_infobar_loc_pane_g

0x598b,	// (0x0001c9a2) image3_infobar_loc_pane_t1

0x2f55,	// (0x00019f6c) image3_infobar_fav_pane_g1

0x5999,	// (0x0001c9b0) image3_infobar_fav_pane_g2

0x0001,

0xfe60,	// (0x00026e77) image3_infobar_fav_pane_g

0x59a1,	// (0x0001c9b8) fs_bigclock_status_battery_pane

0x59aa,	// (0x0001c9c1) fs_bigclock_status_signal_pane

0x59b3,	// (0x0001c9ca) fs_bigclock_status_title_pane

0x59bc,	// (0x0001c9d3) fs_bigclock_status_signal_pane_g1

0x59c5,	// (0x0001c9dc) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe65,	// (0x00026e7c) fs_bigclock_status_signal_pane_g

0x59cd,	// (0x0001c9e4) fs_bigclock_status_battery_pane_g1

0x59d6,	// (0x0001c9ed) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe6a,	// (0x00026e81) fs_bigclock_status_battery_pane_g

0x59de,	// (0x0001c9f5) fs_bigclock_status_title_pane_t1

0x2f55,	// (0x00019f6c) main_fs_bigclock_clock_pane_g1

0x59ec,	// (0x0001ca03) main_fs_bigclock_clock_pane_g2

0x59ec,	// (0x0001ca03) main_fs_bigclock_clock_pane_g3

0x59ec,	// (0x0001ca03) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe6f,	// (0x00026e86) main_fs_bigclock_clock_pane_g

0x59f4,	// (0x0001ca0b) main_fs_bigclock_clock_pane_t1

0x5a02,	// (0x0001ca19) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe78,	// (0x00026e8f) main_fs_bigclock_clock_pane_t

0x5a11,	// (0x0001ca28) list_single_fs_bigclock_indicator_pane_ParamLimits

0x5a11,	// (0x0001ca28) list_single_fs_bigclock_indicator_pane

0xe828,	// (0x0002583f) list_single_fs_bigclock_pane_ParamLimits

0xe828,	// (0x0002583f) list_single_fs_bigclock_pane

0x5a2b,	// (0x0001ca42) main_fs_bigclock_indicator_pane_t1

0x5a3a,	// (0x0001ca51) list_single_fs_bigclock_pane_g1

0x5a42,	// (0x0001ca59) list_single_fs_bigclock_pane_t1

0x2f55,	// (0x00019f6c) main_fs_bigclock_swipe_pane_g1

0x5a85,	// (0x0001ca9c) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe89,	// (0x00026ea0) main_fs_bigclock_swipe_pane_g

0x5a8d,	// (0x0001caa4) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x5a8d,	// (0x0001caa4) main_fs_bigclock_swipe_pane_t1

0x9e90,	// (0x00020ea7) call_type_pane_ParamLimits

0x001a,	// (0x00017031) main_btmg_pane

0x56d0,	// (0x0001c6e7) list_single_cale_mrui_row_pane_g2_ParamLimits

0x56d0,	// (0x0001c6e7) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdfc,	// (0x00026e13) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdfc,	// (0x00026e13) list_single_cale_mrui_row_pane_g

0x582f,	// (0x0001c846) list_recal_vselct_arw_lo_pane

0x5837,	// (0x0001c84e) list_recal_vselct_arw_up_pane

0x583f,	// (0x0001c856) list_recal_vselct_pane

0x5abc,	// (0x0001cad3) btmg_button_pane

0xe88b,	// (0x000258a2) main_btmg_pane_g1

0x001a,	// (0x00017031) bg_button_pane_cp044

0x5ac6,	// (0x0001cadd) btmg_button_pane_t1

0x2a45,	// (0x00019a5c) aid_listscroll_gen

0x008a,	// (0x000170a1) main_cntbar_detail_pane

0x53ed,	// (0x0001c404) list_cmail_folder_pane

0x53fd,	// (0x0001c414) sp_fs_scroll_pane_cp03_ParamLimits

0xe34f,	// (0x00025366) list_single_fs_dyc_pane_cp01_ParamLimits

0xe34f,	// (0x00025366) list_single_fs_dyc_pane_cp01

0x5ad4,	// (0x0001caeb) aid_size_cmail_indent

0x5add,	// (0x0001caf4) list_single_dyc_row_pane_cp01

0xe8b3,	// (0x000258ca) cntbar_detail_list_pane_ParamLimits

0xe8b3,	// (0x000258ca) cntbar_detail_list_pane

0xe8ed,	// (0x00025904) main_cntbar_detail_cont_pane_ParamLimits

0xe8ed,	// (0x00025904) main_cntbar_detail_cont_pane

0x9e2a,	// (0x00020e41) scroll_pane_cp032_ParamLimits

0x9e2a,	// (0x00020e41) scroll_pane_cp032

0xe8f9,	// (0x00025910) cntbar_detail_list_event_pane_ParamLimits

0xe8f9,	// (0x00025910) cntbar_detail_list_event_pane

0xe8bf,	// (0x000258d6) cntbar_detail_list_shct_pane

0x0e4a,	// (0x00017e61) aid_list_gen

0x5ae6,	// (0x0001cafd) aid_scroll

0x5aef,	// (0x0001cb06) aid_size_touch_scroll_bar

0xe90d,	// (0x00025924) aid_list_double

0x5b01,	// (0x0001cb18) aid_list_single

0x5b0a,	// (0x0001cb21) aid_list_single_lg

0x5b13,	// (0x0001cb2a) aid_list_z_g_a_sm

0x5b1b,	// (0x0001cb32) aid_list_z_g_d

0x5b23,	// (0x0001cb3a) aid_txt_z_prm

0xe916,	// (0x0002592d) aid_txt_z_prm_cp01

0xe924,	// (0x0002593b) aid_txt_z_sec

0xe932,	// (0x00025949) main_cntbar_detail_cont_pane_g1_ParamLimits

0xe932,	// (0x00025949) main_cntbar_detail_cont_pane_g1

0xe93f,	// (0x00025956) main_cntbar_detail_cont_pane_g2_ParamLimits

0xe93f,	// (0x00025956) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe8e,	// (0x00026ea5) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe8e,	// (0x00026ea5) main_cntbar_detail_cont_pane_g

0x5b31,	// (0x0001cb48) main_cntbar_detail_cont_pane_t1

0x5b3f,	// (0x0001cb56) main_cntbar_detail_cont_pane_t2

0x5b4d,	// (0x0001cb64) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe93,	// (0x00026eaa) main_cntbar_detail_cont_pane_t

0xe94b,	// (0x00025962) cell_cntbar_detail_list_shct_pane_ParamLimits

0xe94b,	// (0x00025962) cell_cntbar_detail_list_shct_pane

0x5b5b,	// (0x0001cb72) cntbar_detail_list_shct_pane_g1

0x5b64,	// (0x0001cb7b) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe9a,	// (0x00026eb1) cntbar_detail_list_shct_pane_g

0xe95f,	// (0x00025976) cntbar_detail_list_event_pane_g1_ParamLimits

0xe95f,	// (0x00025976) cntbar_detail_list_event_pane_g1

0xe96b,	// (0x00025982) cntbar_detail_list_event_pane_g2_ParamLimits

0xe96b,	// (0x00025982) cntbar_detail_list_event_pane_g2

0x0005,

0xfe9f,	// (0x00026eb6) cntbar_detail_list_event_pane_g_ParamLimits

0xfe9f,	// (0x00026eb6) cntbar_detail_list_event_pane_g

0xe9d7,	// (0x000259ee) cntbar_detail_list_event_pane_t1_ParamLimits

0xe9d7,	// (0x000259ee) cntbar_detail_list_event_pane_t1

0xe9ec,	// (0x00025a03) cntbar_detail_list_event_pane_t2_ParamLimits

0xe9ec,	// (0x00025a03) cntbar_detail_list_event_pane_t2

0x0002,

0xfeac,	// (0x00026ec3) cntbar_detail_list_event_pane_t_ParamLimits

0xfeac,	// (0x00026ec3) cntbar_detail_list_event_pane_t

0x2f55,	// (0x00019f6c) cell_cntbar_detail_list_shct_pane_g1

0xa1ba,	// (0x000211d1) navi_pane_mv_g3

0x008a,	// (0x000170a1) main_cntbar_detail_pane_ParamLimits

0x001a,	// (0x00017031) main_notif_wgt_pane

0x7566,	// (0x0001e57d) aid_tch_main_mp4_pane_g4

0x779b,	// (0x0001e7b2) popup_slider_window_cp02

0x5825,	// (0x0001c83c) list_recal_day_event_pane

0xe893,	// (0x000258aa) cntbar_detail_btn_pane_ParamLimits

0xe893,	// (0x000258aa) cntbar_detail_btn_pane

0xe8a3,	// (0x000258ba) cntbar_detail_btn_pane_cp01_ParamLimits

0xe8a3,	// (0x000258ba) cntbar_detail_btn_pane_cp01

0xe8bf,	// (0x000258d6) cntbar_detail_list_shct_pane_ParamLimits

0xe8cb,	// (0x000258e2) cntbar_detail_pane_g1_ParamLimits

0xe8cb,	// (0x000258e2) cntbar_detail_pane_g1

0xe8d7,	// (0x000258ee) cntbar_detail_pane_t1_ParamLimits

0xe8d7,	// (0x000258ee) cntbar_detail_pane_t1

0xe977,	// (0x0002598e) cntbar_detail_list_event_pane_g3_ParamLimits

0xe977,	// (0x0002598e) cntbar_detail_list_event_pane_g3

0xe98f,	// (0x000259a6) cntbar_detail_list_event_pane_g4_ParamLimits

0xe98f,	// (0x000259a6) cntbar_detail_list_event_pane_g4

0xe9a7,	// (0x000259be) cntbar_detail_list_event_pane_g5_ParamLimits

0xe9a7,	// (0x000259be) cntbar_detail_list_event_pane_g5

0xe9bf,	// (0x000259d6) cntbar_detail_list_event_pane_g6_ParamLimits

0xe9bf,	// (0x000259d6) cntbar_detail_list_event_pane_g6

0xea01,	// (0x00025a18) cntbar_detail_list_event_pane_t3_ParamLimits

0xea01,	// (0x00025a18) cntbar_detail_list_event_pane_t3

0xea13,	// (0x00025a2a) popup_notif_wgt_window_ParamLimits

0xea13,	// (0x00025a2a) popup_notif_wgt_window

0xea23,	// (0x00025a3a) popup_submenu_window_cp01_ParamLimits

0xea23,	// (0x00025a3a) popup_submenu_window_cp01

0x15ae,	// (0x000185c5) bg_popup_window_pane_cp10

0x5b6d,	// (0x0001cb84) listscroll_notif_wgt_pane

0x5b77,	// (0x0001cb8e) list_notif_wgt_window

0x5b80,	// (0x0001cb97) scroll_pane_cp033

0x5b89,	// (0x0001cba0) list_notif_wgt_row_pane_ParamLimits

0x5b89,	// (0x0001cba0) list_notif_wgt_row_pane

0x5b9d,	// (0x0001cbb4) aid_size_list_notif_wgt_del

0x5ba6,	// (0x0001cbbd) list_notif_wgt_row_pane_g1

0x5bae,	// (0x0001cbc5) list_notif_wgt_row_pane_g2

0x5bb6,	// (0x0001cbcd) list_notif_wgt_row_pane_g3

0x0002,

0xfeb3,	// (0x00026eca) list_notif_wgt_row_pane_g

0x5bbf,	// (0x0001cbd6) list_notif_wgt_row_pane_t1

0x5bcd,	// (0x0001cbe4) list_notif_wgt_row_pane_t2

0x5bdb,	// (0x0001cbf2) list_notif_wgt_row_pane_t3

0x0002,

0xfeba,	// (0x00026ed1) list_notif_wgt_row_pane_t

0x3ff3,	// (0x0001b00a) list_recal_day_event_pane_g1

0x5be9,	// (0x0001cc00) list_recal_day_event_pane_t1

0x001a,	// (0x00017031) bg_button_pane_cp045

0x5bf8,	// (0x0001cc0f) cntbar_detail_btn_pane_t1

0x2a4d,	// (0x00019a64) main_callh_pane_ParamLimits

0x2a4d,	// (0x00019a64) main_callh_pane

0x001a,	// (0x00017031) main_coverflow0_pane

0x001a,	// (0x00017031) main_wgtman_pane

0xdc44,	// (0x00024c5b) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xdc44,	// (0x00024c5b) main_fs_bigclock_unlock_btn_pane

0x53c7,	// (0x0001c3de) bg_button_pane_cp16

0x53d7,	// (0x0001c3ee) cell_tport_appsw_pane_g3

0xea31,	// (0x00025a48) cf0_flow_pane_ParamLimits

0xea31,	// (0x00025a48) cf0_flow_pane

0x5c06,	// (0x0001cc1d) listscroll_cf0_pane

0x5c0f,	// (0x0001cc26) main_cf0_pane_g1

0xea40,	// (0x00025a57) main_cf0_pane_t1_ParamLimits

0xea40,	// (0x00025a57) main_cf0_pane_t1

0xea54,	// (0x00025a6b) main_cf0_pane_t2_ParamLimits

0xea54,	// (0x00025a6b) main_cf0_pane_t2

0x0001,

0xfec1,	// (0x00026ed8) main_cf0_pane_t_ParamLimits

0xfec1,	// (0x00026ed8) main_cf0_pane_t

0x5c19,	// (0x0001cc30) scroll_pane_cp11

0xea68,	// (0x00025a7f) cf0_flow_pane_g1

0xea70,	// (0x00025a87) cf0_flow_pane_g2

0x0001,

0xfec6,	// (0x00026edd) cf0_flow_pane_g

0xea78,	// (0x00025a8f) cf0_flow_pane_t1

0x001a,	// (0x00017031) main_call6_pane

0x001a,	// (0x00017031) main_calllock_pane

0xea86,	// (0x00025a9d) call6_btn_grp_pane_ParamLimits

0xea86,	// (0x00025a9d) call6_btn_grp_pane

0xea95,	// (0x00025aac) call6_pane_g1_ParamLimits

0xea95,	// (0x00025aac) call6_pane_g1

0xeaa4,	// (0x00025abb) popup_call6_1st_window_ParamLimits

0xeaa4,	// (0x00025abb) popup_call6_1st_window

0xeab2,	// (0x00025ac9) popup_call6_2nd_window_ParamLimits

0xeab2,	// (0x00025ac9) popup_call6_2nd_window

0xeac0,	// (0x00025ad7) cell_call6_btn_pane_ParamLimits

0xeac0,	// (0x00025ad7) cell_call6_btn_pane

0x15ae,	// (0x000185c5) bg_popup_call2_in_pane_cp03

0x5c24,	// (0x0001cc3b) popup_call6_1st_window_g1

0x5c2c,	// (0x0001cc43) popup_call6_1st_window_g2

0x5c34,	// (0x0001cc4b) popup_call6_1st_window_g3

0x0002,

0xfecb,	// (0x00026ee2) popup_call6_1st_window_g

0x5c3c,	// (0x0001cc53) popup_call6_1st_window_t1

0x5c4b,	// (0x0001cc62) popup_call6_1st_window_t2

0x5c5b,	// (0x0001cc72) popup_call6_1st_window_t3

0x0002,

0xfed2,	// (0x00026ee9) popup_call6_1st_window_t

0x15ae,	// (0x000185c5) bg_popup_call2_in_pane_cp04

0x5c24,	// (0x0001cc3b) popup_call6_2nd_window_g1

0x5c2c,	// (0x0001cc43) popup_call6_2nd_window_g2

0x5c34,	// (0x0001cc4b) popup_call6_2nd_window_g3

0x0002,

0xfecb,	// (0x00026ee2) popup_call6_2nd_window_g

0x5c3c,	// (0x0001cc53) popup_call6_2nd_window_t1

0x001a,	// (0x00017031) bg_button_pane_cp15

0x5c6b,	// (0x0001cc82) cell_call6_btn_pane_g1

0x5c74,	// (0x0001cc8b) cell_call6_btn_pane_t1

0xeacf,	// (0x00025ae6) listscroll_wgtman_pane_ParamLimits

0xeacf,	// (0x00025ae6) listscroll_wgtman_pane

0xeaed,	// (0x00025b04) wgtman_btn_pane_ParamLimits

0xeaed,	// (0x00025b04) wgtman_btn_pane

0x1461,	// (0x00018478) aid_scroll_copy1

0x5c83,	// (0x0001cc9a) list_wgtman_pane

0xeb22,	// (0x00025b39) wgtman_btn_pane_g1_ParamLimits

0xeb22,	// (0x00025b39) wgtman_btn_pane_g1

0xeb4a,	// (0x00025b61) wgtman_btn_pane_t1_ParamLimits

0xeb4a,	// (0x00025b61) wgtman_btn_pane_t1

0x5c8d,	// (0x0001cca4) wgtman_btn_pane_t2_ParamLimits

0x5c8d,	// (0x0001cca4) wgtman_btn_pane_t2

0x0001,

0xfed9,	// (0x00026ef0) wgtman_btn_pane_t_ParamLimits

0xfed9,	// (0x00026ef0) wgtman_btn_pane_t

0xeb81,	// (0x00025b98) listrow_wgtman_pane_ParamLimits

0xeb81,	// (0x00025b98) listrow_wgtman_pane

0xeb9d,	// (0x00025bb4) listrow_wgtman_pane_g1

0xeba6,	// (0x00025bbd) listrow_wgtman_pane_g2

0x0001,

0xfede,	// (0x00026ef5) listrow_wgtman_pane_g

0xebb0,	// (0x00025bc7) listrow_wgtman_pane_t1

0xebbe,	// (0x00025bd5) listrow_wgtman_pane_t2

0x0001,

0xfee3,	// (0x00026efa) listrow_wgtman_pane_t

0xebcc,	// (0x00025be3) wait_bar_pane_cp09

0x5ca4,	// (0x0001ccbb) main_calllock_btn_pane

0x5cae,	// (0x0001ccc5) main_calllock_pane_g1

0x001a,	// (0x00017031) bg_button_pane_cp17

0x5cb9,	// (0x0001ccd0) main_calllock_btn_pane_g1

0x5cc2,	// (0x0001ccd9) main_calllock_btn_pane_t1

0x001a,	// (0x00017031) main_dialer3_pane

0x001a,	// (0x00017031) main_fmrd2_pane

0x2f55,	// (0x00019f6c) main_fs_bigclock_unlock_btn_pane_g1

0x5cd9,	// (0x0001ccf0) main_fs_bigclock_unlock_btn_pane_t1

0xebd4,	// (0x00025beb) area_fmrd2_info_pane_ParamLimits

0xebd4,	// (0x00025beb) area_fmrd2_info_pane

0xebe2,	// (0x00025bf9) area_fmrd2_visual_pane_ParamLimits

0xebe2,	// (0x00025bf9) area_fmrd2_visual_pane

0xebf0,	// (0x00025c07) fmrd2_indi_pane_ParamLimits

0xebf0,	// (0x00025c07) fmrd2_indi_pane

0xebfd,	// (0x00025c14) area_fmrd2_visual_pane_g1

0xec05,	// (0x00025c1c) area_fmrd2_visual_pane_t1

0xec15,	// (0x00025c2c) area_fmrd2_visual_pane_t2

0xec25,	// (0x00025c3c) area_fmrd2_visual_pane_t3

0x0002,

0xfeed,	// (0x00026f04) area_fmrd2_visual_pane_t

0xec35,	// (0x00025c4c) area_fmrd2_info_pane_g1

0xec3d,	// (0x00025c54) area_fmrd2_info_pane_t1

0xec4d,	// (0x00025c64) area_fmrd2_info_pane_t2

0xec5d,	// (0x00025c74) area_fmrd2_info_pane_t3

0xec6d,	// (0x00025c84) area_fmrd2_info_pane_t4

0x0003,

0xfef4,	// (0x00026f0b) area_fmrd2_info_pane_t

0xec7b,	// (0x00025c92) fmrd2_indi_pane_t1

0xec8b,	// (0x00025ca2) fmrd2_indi_pane_t2

0xec9b,	// (0x00025cb2) fmrd2_indi_pane_t3

0x0002,

0xfefd,	// (0x00026f14) fmrd2_indi_pane_t

0x4dd5,	// (0x0001bdec) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x4dd5,	// (0x0001bdec) list_single_fs_bigclock_indicator_pane_g5

0x4e7c,	// (0x0001be93) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x4e7c,	// (0x0001be93) list_single_fs_bigclock_indicator_pane_t5

0xe49d,	// (0x000254b4) aid_cell_bcale_month_pane_ParamLimits

0xe49d,	// (0x000254b4) aid_cell_bcale_month_pane

0xe4a9,	// (0x000254c0) bcale_month_pane_ParamLimits

0xe4a9,	// (0x000254c0) bcale_month_pane

0xe4b9,	// (0x000254d0) bcale_preview_pane_ParamLimits

0xe4b9,	// (0x000254d0) bcale_preview_pane

0x5a42,	// (0x0001ca59) list_single_fs_bigclock_pane_t1_ParamLimits

0x5a61,	// (0x0001ca78) list_single_fs_bigclock_pane_t2_ParamLimits

0x5a61,	// (0x0001ca78) list_single_fs_bigclock_pane_t2

0x0001,

0xfe84,	// (0x00026e9b) list_single_fs_bigclock_pane_t_ParamLimits

0xfe84,	// (0x00026e9b) list_single_fs_bigclock_pane_t

0x5cd1,	// (0x0001cce8) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee8,	// (0x00026eff) main_fs_bigclock_unlock_btn_pane_g

0xeca9,	// (0x00025cc0) aid_dia3_key_size_ParamLimits

0xeca9,	// (0x00025cc0) aid_dia3_key_size

0xecb5,	// (0x00025ccc) aid_dia3_listrow_size_ParamLimits

0xecb5,	// (0x00025ccc) aid_dia3_listrow_size

0xecc5,	// (0x00025cdc) dia3_keypad_fun_pane_ParamLimits

0xecc5,	// (0x00025cdc) dia3_keypad_fun_pane

0xecd7,	// (0x00025cee) dia3_keypad_num_pane_ParamLimits

0xecd7,	// (0x00025cee) dia3_keypad_num_pane

0xece9,	// (0x00025d00) dia3_listscroll_pane_ParamLimits

0xece9,	// (0x00025d00) dia3_listscroll_pane

0xecf7,	// (0x00025d0e) dia3_numentry_pane_ParamLimits

0xecf7,	// (0x00025d0e) dia3_numentry_pane

0x5ce7,	// (0x0001ccfe) dia3_list_pane

0x5cf2,	// (0x0001cd09) scroll_pane_cp12

0x001a,	// (0x00017031) bg_dia3_numentry_pane

0xed05,	// (0x00025d1c) dia3_numentry_pane_t1

0xed14,	// (0x00025d2b) cell_dia3_key_num_pane

0xed1c,	// (0x00025d33) cell_dia3_key0_fun_pane_ParamLimits

0xed1c,	// (0x00025d33) cell_dia3_key0_fun_pane

0xed29,	// (0x00025d40) cell_dia3_key1_fun_pane_ParamLimits

0xed29,	// (0x00025d40) cell_dia3_key1_fun_pane

0xed36,	// (0x00025d4d) dia3_listrow_pane

0x4ac8,	// (0x0001badf) bg_dia3_numentry_pane_g1

0x001a,	// (0x00017031) bg_button_pane_cp21

0x5cfd,	// (0x0001cd14) cell_dia3_key_num_pane_t1

0x5d0b,	// (0x0001cd22) cell_dia3_key_num_pane_t2

0x5d1a,	// (0x0001cd31) cell_dia3_key_num_pane_t3

0x5d29,	// (0x0001cd40) cell_dia3_key_num_pane_t4

0x0003,

0xff04,	// (0x00026f1b) cell_dia3_key_num_pane_t

0x001a,	// (0x00017031) bg_button_pane_cp19

0xed43,	// (0x00025d5a) cell_dia3_key0_fun_pane_g1

0x001a,	// (0x00017031) bg_button_pane_cp20

0xed4b,	// (0x00025d62) cell_dia3_key1_fun_pane_g1

0xed53,	// (0x00025d6a) area_left_week_number_pane

0xed5c,	// (0x00025d73) area_top_day_name_pane

0xed65,	// (0x00025d7c) frame_month_view_pane

0xed71,	// (0x00025d88) grid_month_view_pane

0xed7b,	// (0x00025d92) cell_top_day_name_pane_ParamLimits

0xed7b,	// (0x00025d92) cell_top_day_name_pane

0xed95,	// (0x00025dac) cell_area_left_week_number_pane_ParamLimits

0xed95,	// (0x00025dac) cell_area_left_week_number_pane

0xeda9,	// (0x00025dc0) cell_month_view_pane_ParamLimits

0xeda9,	// (0x00025dc0) cell_month_view_pane

0x5d38,	// (0x0001cd4f) frm_month_g1

0xedc6,	// (0x00025ddd) frm_month_g2

0xedd0,	// (0x00025de7) frm_month_g3

0xedda,	// (0x00025df1) frm_month_g4

0xede4,	// (0x00025dfb) frm_month_g5

0xedee,	// (0x00025e05) frm_month_g6

0xedf8,	// (0x00025e0f) frm_month_g7

0x5d41,	// (0x0001cd58) frm_month_g8

0xee04,	// (0x00025e1b) frm_month_g9

0xee0d,	// (0x00025e24) frm_month_g10

0xee16,	// (0x00025e2d) frm_month_g11

0xee1f,	// (0x00025e36) frm_month_g12

0xee28,	// (0x00025e3f) frm_month_g13

0xee31,	// (0x00025e48) frm_month_g14

0xee3a,	// (0x00025e51) frm_month_g15

0xee45,	// (0x00025e5c) frm_month_g16

0x000f,

0xff0d,	// (0x00026f24) frm_month_g

0xee50,	// (0x00025e67) cell_top_day_name_pane_t1

0xee5f,	// (0x00025e76) cell_area_left_week_number_pane_g1

0xee50,	// (0x00025e67) cell_area_left_week_number_pane_t1

0x2f55,	// (0x00019f6c) cell_month_view_pane_g1

0xee67,	// (0x00025e7e) cell_month_view_pane_t1

0x001a,	// (0x00017031) main_fps_pane

0x5143,	// (0x0001c15a) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x5143,	// (0x0001c15a) cmail_ddmenu_btn02_pane_cp1

0x515f,	// (0x0001c176) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x515f,	// (0x0001c176) cmail_ddmenu_btn02_pane_cp2

0xe787,	// (0x0002579e) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xe787,	// (0x0002579e) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe37,	// (0x00026e4e) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe37,	// (0x00026e4e) cmail_ddmenu_btn02_pane_g

0xe7a5,	// (0x000257bc) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xe7a5,	// (0x000257bc) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe3c,	// (0x00026e53) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe3c,	// (0x00026e53) cmail_ddmenu_btn02_pane_t

0xee76,	// (0x00025e8d) fps_text_pane_ParamLimits

0xee76,	// (0x00025e8d) fps_text_pane

0xee83,	// (0x00025e9a) main_fps_pane_g1_ParamLimits

0xee83,	// (0x00025e9a) main_fps_pane_g1

0xee91,	// (0x00025ea8) wait_bar_pane_cp010_ParamLimits

0xee91,	// (0x00025ea8) wait_bar_pane_cp010

0xee9d,	// (0x00025eb4) fps_text_pane_t1_ParamLimits

0xee9d,	// (0x00025eb4) fps_text_pane_t1

0xc543,	// (0x0002355a) cam4_image_uncrop_pane_g1

0xc54c,	// (0x00023563) cam4_image_uncrop_pane_g2

0xc555,	// (0x0002356c) cam4_image_uncrop_pane_g3

0xc55e,	// (0x00023575) cam4_image_uncrop_pane_g4

0x0003,

0xf908,	// (0x0002691f) cam4_image_uncrop_pane_g

0xed36,	// (0x00025d4d) dia3_listrow_pane_ParamLimits

0x001a,	// (0x00017031) main_phob2_pane

0xe2bc,	// (0x000252d3) cell_tport_appsw_pane_cp02_ParamLimits

0xe2bc,	// (0x000252d3) cell_tport_appsw_pane_cp02

0xe2cb,	// (0x000252e2) cell_tport_appsw_pane_cp03_ParamLimits

0xe2cb,	// (0x000252e2) cell_tport_appsw_pane_cp03

0x001a,	// (0x00017031) phob2_contact_card_pane

0x001a,	// (0x00017031) phob2_listscroll_pane

0x5d4a,	// (0x0001cd61) phob2_list_pane

0x5d52,	// (0x0001cd69) scroll_pane_cp034

0xeeb6,	// (0x00025ecd) phob2_cc_data_pane_ParamLimits

0xeeb6,	// (0x00025ecd) phob2_cc_data_pane

0xeed0,	// (0x00025ee7) phob2_cc_listscroll_pane_ParamLimits

0xeed0,	// (0x00025ee7) phob2_cc_listscroll_pane

0xeeea,	// (0x00025f01) list_double_large_graphic_phob2_pane_ParamLimits

0xeeea,	// (0x00025f01) list_double_large_graphic_phob2_pane

0xef0d,	// (0x00025f24) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xef0d,	// (0x00025f24) list_double_large_graphic_phob2_pane_g1

0xef1a,	// (0x00025f31) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xef1a,	// (0x00025f31) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff2e,	// (0x00026f45) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff2e,	// (0x00026f45) list_double_large_graphic_phob2_pane_g

0xef26,	// (0x00025f3d) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xef26,	// (0x00025f3d) list_double_large_graphic_phob2_pane_t1

0xef3b,	// (0x00025f52) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xef3b,	// (0x00025f52) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff33,	// (0x00026f4a) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff33,	// (0x00026f4a) list_double_large_graphic_phob2_pane_t

0x001a,	// (0x00017031) list_highlight_pane_cp024

0x5d5a,	// (0x0001cd71) phob2_cc_button_pane

0xef4d,	// (0x00025f64) phob2_cc_data_pane_g1_ParamLimits

0xef4d,	// (0x00025f64) phob2_cc_data_pane_g1

0xef59,	// (0x00025f70) phob2_cc_data_pane_g2_ParamLimits

0xef59,	// (0x00025f70) phob2_cc_data_pane_g2

0x0001,

0xff38,	// (0x00026f4f) phob2_cc_data_pane_g_ParamLimits

0xff38,	// (0x00026f4f) phob2_cc_data_pane_g

0xef65,	// (0x00025f7c) phob2_cc_data_pane_t1_ParamLimits

0xef65,	// (0x00025f7c) phob2_cc_data_pane_t1

0xef77,	// (0x00025f8e) phob2_cc_data_pane_t2_ParamLimits

0xef77,	// (0x00025f8e) phob2_cc_data_pane_t2

0xef89,	// (0x00025fa0) phob2_cc_data_pane_t3_ParamLimits

0xef89,	// (0x00025fa0) phob2_cc_data_pane_t3

0x0002,

0xff3d,	// (0x00026f54) phob2_cc_data_pane_t_ParamLimits

0xff3d,	// (0x00026f54) phob2_cc_data_pane_t

0x5d62,	// (0x0001cd79) phob2_cc_list_pane_ParamLimits

0x5d62,	// (0x0001cd79) phob2_cc_list_pane

0x409e,	// (0x0001b0b5) scroll_pane_cp035_ParamLimits

0x409e,	// (0x0001b0b5) scroll_pane_cp035

0x008a,	// (0x000170a1) bg_button_pane_cp033

0x5d6e,	// (0x0001cd85) phob2_cc_button_pane_g1

0x5d7a,	// (0x0001cd91) phob2_cc_button_pane_t1

0x5d8f,	// (0x0001cda6) phob2_cc_button_pane_t2

0x0001,

0xff44,	// (0x00026f5b) phob2_cc_button_pane_t

0xef9b,	// (0x00025fb2) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xef9b,	// (0x00025fb2) list_double_large_graphic_phob2_cc_pane

0xefcb,	// (0x00025fe2) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xefcb,	// (0x00025fe2) list_double_large_graphic_phob2_cc_pane_g1

0xefdc,	// (0x00025ff3) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xefdc,	// (0x00025ff3) list_double_large_graphic_phob2_cc_pane_g2

0xefeb,	// (0x00026002) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xefeb,	// (0x00026002) list_double_large_graphic_phob2_cc_pane_g3

0xeffa,	// (0x00026011) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xeffa,	// (0x00026011) list_double_large_graphic_phob2_cc_pane_g4

0xf00b,	// (0x00026022) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xf00b,	// (0x00026022) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff49,	// (0x00026f60) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff49,	// (0x00026f60) list_double_large_graphic_phob2_cc_pane_g

0xf01a,	// (0x00026031) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xf01a,	// (0x00026031) list_double_large_graphic_phob2_cc_pane_t1

0xf043,	// (0x0002605a) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xf043,	// (0x0002605a) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff54,	// (0x00026f6b) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff54,	// (0x00026f6b) list_double_large_graphic_phob2_cc_pane_t

0x5da1,	// (0x0001cdb8) list_highlight_pane_cp025_ParamLimits

0x5da1,	// (0x0001cdb8) list_highlight_pane_cp025

0x008a,	// (0x000170a1) bg_button_pane_cp033_ParamLimits

0x5d6e,	// (0x0001cd85) phob2_cc_button_pane_g1_ParamLimits

0x5d7a,	// (0x0001cd91) phob2_cc_button_pane_t1_ParamLimits

0x5d8f,	// (0x0001cda6) phob2_cc_button_pane_t2_ParamLimits

0xff44,	// (0x00026f5b) phob2_cc_button_pane_t_ParamLimits

0x8376,	// (0x0001f38d) popup_wgtman_window

0x3e44,	// (0x0001ae5b) scroll_pane_cp038

0xeb0a,	// (0x00025b21) wgtman_btn_pane_cp_01_ParamLimits

0xeb0a,	// (0x00025b21) wgtman_btn_pane_cp_01

0x5daf,	// (0x0001cdc6) wgtman_content_pane

0x5af8,	// (0x0001cb0f) wgtman_heading_pane

0x001a,	// (0x00017031) bg_heading_pane_cp02

0x5db8,	// (0x0001cdcf) wgtman_heading_pane_g1

0x5dc0,	// (0x0001cdd7) wgtman_heading_pane_t1

0x5dce,	// (0x0001cde5) scroll_pane_cp036

0x5dd6,	// (0x0001cded) wgtman_list_pane

0x5dde,	// (0x0001cdf5) wgtman_list_pane_t1_ParamLimits

0x5dde,	// (0x0001cdf5) wgtman_list_pane_t1

0x7983,	// (0x0001e99a) cam4_grid_pane

0xccb2,	// (0x00023cc9) bg_button_pane_cp015_ParamLimits

0xccc4,	// (0x00023cdb) bg_button_pane_cp016_ParamLimits

0xccd7,	// (0x00023cee) bg_button_pane_cp017_ParamLimits

0xcd2d,	// (0x00023d44) popup_vitu2_query_window_g3_ParamLimits

0xcd2d,	// (0x00023d44) popup_vitu2_query_window_g3

0xcde8,	// (0x00023dff) popup_vitu2_query_window_t6_ParamLimits

0xcde8,	// (0x00023dff) popup_vitu2_query_window_t6

0xce13,	// (0x00023e2a) popup_vitu2_query_window_t7_ParamLimits

0xce13,	// (0x00023e2a) popup_vitu2_query_window_t7

0x5aaa,	// (0x0001cac1) cam4_grid_pane_g1

0x5ab3,	// (0x0001caca) cam4_grid_pane_g2

0x5e00,	// (0x0001ce17) cam4_grid_pane_g3

0x5e09,	// (0x0001ce20) cam4_grid_pane_g4

0x0003,

0xff59,	// (0x00026f70) cam4_grid_pane_g

0x8dd5,	// (0x0001fdec) aid_placing_vt_slider_lsc_ParamLimits

0x9115,	// (0x0002012c) vidtel_button_pane_ParamLimits

0x9115,	// (0x0002012c) vidtel_button_pane

0x5e14,	// (0x0001ce2b) bg_button_pane_cp034

0xf06c,	// (0x00026083) vidtel_button_pane_g1

0x5e1e,	// (0x0001ce35) vidtel_button_pane_t1

0x3f81,	// (0x0001af98) aid_size_vtel_slider_touch

0x409e,	// (0x0001b0b5) scroll_pane_cp039

0x4b06,	// (0x0001bb1d) ncim_query_button_pane_cp01_ParamLimits

0x4b25,	// (0x0001bb3c) ncimui_query_pane_g1_ParamLimits

0x008a,	// (0x000170a1) input_focus_pane_cp012_ParamLimits

0x4b4a,	// (0x0001bb61) ncim_query_entry_pane_t1_ParamLimits

0x409e,	// (0x0001b0b5) scroll_pane_cp039_ParamLimits

0xa12c,	// (0x00021143) navi_pane_bcale_mc_g1

0xa134,	// (0x0002114b) navi_pane_bcale_mc_t1

0x519c,	// (0x0001c1b3) main_sp_fs_email_pane_g1

0x51a4,	// (0x0001c1bb) main_sp_fs_email_pane_g2

0x0001,

0xfcfa,	// (0x00026d11) main_sp_fs_email_pane_g

0x56dc,	// (0x0001c6f3) list_single_cale_mrui_row_pane_g3_ParamLimits

0x56dc,	// (0x0001c6f3) list_single_cale_mrui_row_pane_g3

0xe7cd,	// (0x000257e4) list_single_recal_day_pane_g5_event_pane

0x58a1,	// (0x0001c8b8) list_single_recal_day_pane_g7

0x5e2c,	// (0x0001ce43) list_recal_day_event_pane_cp01

0x5e35,	// (0x0001ce4c) list_recal_vselct_arw_lo_pane_cp01

0x5e3d,	// (0x0001ce54) list_recal_vselct_arw_up_pane_cp01

0x5e45,	// (0x0001ce5c) list_recal_vselct_pane_cp01

0x3ff3,	// (0x0001b00a) list_recal_day_event_pane_cp01_g1

0x5e4f,	// (0x0001ce66) list_recal_day_event_pane_cp01_t1

0x58a9,	// (0x0001c8c0) list_single_recal_day_pane_t1_ParamLimits

0x58bb,	// (0x0001c8d2) list_single_recal_day_pane_t2_ParamLimits

0xfe4c,	// (0x00026e63) list_single_recal_day_pane_t_ParamLimits

0x07f3,	// (0x0001780a) bg_notes_pane_ParamLimits

0x0801,	// (0x00017818) list_notes_pane_ParamLimits

0x8629,	// (0x0001f640) scroll_pane_cp06_ParamLimits

0x083d,	// (0x00017854) main_notes_pane_ParamLimits

0x001a,	// (0x00017031) main_welc_pane

0xf074,	// (0x0002608b) main_welc_body_pane_ParamLimits

0xf074,	// (0x0002608b) main_welc_body_pane

0xf082,	// (0x00026099) main_welc_opti_pane_ParamLimits

0xf082,	// (0x00026099) main_welc_opti_pane

0xf091,	// (0x000260a8) main_welc_pane_t1_ParamLimits

0xf091,	// (0x000260a8) main_welc_pane_t1

0xf0a5,	// (0x000260bc) main_welc_body_row_pane_ParamLimits

0xf0a5,	// (0x000260bc) main_welc_body_row_pane

0xf0d6,	// (0x000260ed) main_welc_opti_row_pane_ParamLimits

0xf0d6,	// (0x000260ed) main_welc_opti_row_pane

0x5e5d,	// (0x0001ce74) main_welc_opti_row_pane_g1

0x5e65,	// (0x0001ce7c) main_welc_opti_row_pane_t1

0x5e74,	// (0x0001ce8b) main_welc_body_row_pane_t1
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

} // end of namespace AknLayoutScalable_Abrw_pnp4_apps_nhd4_prt_tch_Normal
